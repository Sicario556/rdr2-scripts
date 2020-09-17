void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	fLocal_593 = 1E+08f;
	iLocal_700 = 1296674862;
	fLocal_739 = -1f;
	Local_14.f_3 = func_1(&vScriptParam_0);
	Local_14.f_43 = func_2();
	if (has_force_cleanup_occurred(523))
	{
		iLocal_740 = 1;
	}
	if (!bVar738)
	{
		Local_14.f_161 = func_3(vScriptParam_0.z, 2);
		func_4(&Local_14, 1);
		func_5();
	}
	while (true)
	{
		func_7(bVar738, 884, 0);
		if (bVar738)
		{
			wait(0);
		}
		else
		{
			switch (iVar711)
			{
				case 0:
					if (func_8())
					{
						_0x9851de7aec10b4e1(Local_14.f_51, 5f, 1, 0);
						iLocal_713 = 1;
					}
					break;
				case 1:
					if (func_9(&Local_14, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_10(Local_14.f_51, 5f, 0);
						func_11(&Local_14, &uLocal_738, &uLocal_737);
						if (!Local_14.f_161)
						{
							if (func_12())
							{
								func_6();
							}
						}
						else if (func_13())
						{
							iVar0 = get_random_int_in_range(22, 24);
							iVar1 = get_random_int_in_range(0, 4);
							if (func_14())
							{
								iVar2 = iVar0;
							}
							else
							{
								iVar2 = iVar1;
							}
							set_clock_time(iVar2, get_random_int_in_range(0, 60), get_random_int_in_range(0, 60));
						}
						func_15();
						iLocal_713 = 3;
					}
					else if (Local_14.f_160)
					{
						func_6();
					}
					break;
				case 3:
					if (func_16())
					{
						func_17(0f);
						func_18(1);
						func_19();
						iLocal_698 = player_id();
						iLocal_713 = 4;
					}
					break;
				case 4:
					if (!func_20(&Local_14, &uLocal_528, 0, 1, 1, 0, 1, 0))
					{
						func_6();
					}
					if (!Local_14.f_46)
					{
						if (func_21())
						{
							func_22(&Local_358);
							func_18(0);
							func_23();
							Local_14.f_46 = 1;
							if (iVar521 != 1)
							{
								func_24();
							}
							else if (func_25())
							{
								func_26(iVar320, "PBL_BREAKOUT", 1);
								func_27(1);
								func_28(&uLocal_579, 65536, 0);
								func_28(&uLocal_579, 4, 0);
							}
							else
							{
								func_28(&uLocal_579, 4, 0);
							}
							func_29();
						}
					}
					if (func_30())
					{
						Local_14.f_50 = 1;
						func_23();
						func_6();
					}
					if (func_31(&Local_14, &uLocal_528, Local_14.f_46, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0))
					{
						Local_14.f_50 = 1;
						func_6();
					}
					break;
			}
			wait(Local_14.f_158);
		}
	}
}

var func_1(var uParam0)
{
	return *uParam0;
}

int func_2()
{
	return Global_1894899->f_2;
}

bool func_3(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_4(int iParam0, bool bParam1)
{
	func_32(&(iParam0->f_5));
	if (iParam0->f_161)
	{
		func_33("BEAT_LAUNCHED", 4000, 0, 1, 0, 0, -1, -1, 0);
	}
	allow_sonar_blips(bParam1);
}

void func_5()
{
	func_34();
	func_35(&(Local_14.f_5));
	func_32(&(Local_14.f_5));
	func_36(&(Local_14.f_5), 1);
	func_37(&(Local_14.f_5), 1);
	func_38(&(Local_14.f_5), 0);
	func_39(&(Local_14.f_5), 1);
	func_40(&(Local_14.f_5), 1);
	func_41(&(Local_14.f_5), 1);
	func_42(&(Local_14.f_5), 1);
	func_43(&(Local_14.f_5), 1);
	func_44(&(Local_14.f_5), 1);
	func_45(&(Local_14.f_5), 0);
	func_46(&(Local_14.f_5), 10f);
	func_47(&(Local_14.f_5), 10f);
	func_48(&(Local_14.f_5), 10f);
	func_49(&(Local_14.f_5), 0);
	iVar0 = get_clock_hours();
	if (iVar0 >= 20 || iVar0 < 5)
	{
		if (!func_50(iVar577, 536870912))
		{
			func_28(&uLocal_579, 536870912, 0);
		}
	}
}

void func_6()
{
	func_51(&uLocal_704);
	iVar0 = player_id();
	if (does_blip_exist(&(uLocal_536[2])))
	{
		func_52(uLocal_536[2]);
	}
	if (func_53(2, 8))
	{
		if (func_54(&(uLocal_528[2]), 0, 0))
		{
			func_55(&(uLocal_528[2]), 0);
		}
	}
	func_56();
	func_18(0);
	func_57();
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (iVar1 != 2)
		{
			if (func_54(&(uLocal_528[iVar1]), 0, 0))
			{
				set_ped_relationship_group_hash(&(uLocal_528[iVar1]), -401180987);
			}
		}
		else if (does_entity_exist(&(uLocal_528[iVar1])))
		{
			set_ped_config_flag(&(uLocal_528[iVar1]), 243, false);
			set_ped_keep_task(&(uLocal_528[iVar1]), true);
			if (func_54(&(uLocal_528[iVar1]), 0, 0))
			{
				set_ped_config_flag(&(uLocal_528[iVar1]), 301, false);
				set_ped_config_flag(&(uLocal_528[iVar1]), 130, false);
			}
			set_ped_as_no_longer_needed(uLocal_528[iVar1]);
		}
		remove_ped_defensive_area(&(uLocal_528[iVar1]), true);
		iVar1++;
	}
	func_58();
	set_ped_keep_task(&(uLocal_528[0]), true);
	set_ped_keep_task(&(uLocal_528[1]), true);
	if (iVar710 < 3)
	{
		Local_14.f_45 = 0;
	}
	func_59(&Local_14, &uLocal_528, &uLocal_536, 0, uVar736, uVar735, 1, 1, 1, 1);
	func_60(&uLocal_528);
	func_61(iVar320);
	func_62(1);
	func_22(&Local_358);
	_0x3a8611bd7bde84f7(iVar0, -1f);
	_0xc6366a585659d15c(iVar0, 0);
	_0x98cd760de43b612e(iVar0, 0);
	_0x628e742fe1f79c4a(iVar0, 0);
	func_57();
	func_63(1024);
	terminate_this_thread();
}

void func_7(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!func_64(bParam2) || is_screen_faded_out())
		{
			Call_Loc(iParam1);
		}
	}
}

bool func_8()
{
	switch (iVar713)
	{
		case 0:
			if (func_65(&Local_14))
			{
				func_66(&uLocal_653);
				func_67();
				func_68();
				iLocal_715 = 1;
			}
			break;
		case 1:
			if (!_is_anim_scene_loaded(iVar320, true, false))
			{
				return false;
			}
			if (!is_string_null_or_empty(Local_322.f_5))
			{
				if (!_is_anim_scene_loaded(Local_322.f_1, true, false))
				{
					return false;
				}
			}
			if (iVar521 == 1)
			{
				_0xdf7b5144e25cd3fe(iVar320, "PBL_MAIN");
				_0xdf7b5144e25cd3fe(iVar320, "PBL_BREAKOUT");
				_0xdf7b5144e25cd3fe(iVar320, "PBL_QUICKEXIT");
				_0xdf7b5144e25cd3fe(iVar320, "PBL_PUNCH");
				_0xdf7b5144e25cd3fe(iVar320, "PBL_PUNCH2");
			}
			else
			{
				_0xdf7b5144e25cd3fe(iVar320, "PBL_ACTION");
				_0xdf7b5144e25cd3fe(iVar320, "PBL_BRKOUT_GROUND");
				_0xdf7b5144e25cd3fe(iVar320, "PBL_BRKOUT_WALL");
				_0xdf7b5144e25cd3fe(iVar320, "PBL_QUICK");
				_0xdf7b5144e25cd3fe(Local_322.f_1, "PBL_ACTION");
				_0xdf7b5144e25cd3fe(Local_322.f_1, "PBL_BRKOUT_GROUND");
				_0xdf7b5144e25cd3fe(Local_322.f_1, "PBL_BRKOUT_WALL");
				_0xdf7b5144e25cd3fe(Local_322.f_1, "PBL_QUICK");
				_0xdf7b5144e25cd3fe(iVar320, "PBL_WALL_BREAKOUT_LEFT");
				_0xdf7b5144e25cd3fe(iVar320, "PBL_WALL_BREAKOUT_RIGHT");
				_0xdf7b5144e25cd3fe(iVar320, "PBL_WALL_BREAKOUT_BACK");
				_0xdf7b5144e25cd3fe(iVar320, "PBL_GROUND_BREAKOUT_LEFT");
				_0xdf7b5144e25cd3fe(iVar320, "PBL_GROUND_BREAKOUT_RIGHT");
				_0xdf7b5144e25cd3fe(iVar320, "PBL_GROUND_BREAKOUT_BACK");
			}
			iLocal_715 = 2;
			break;
		case 2:
			if (!func_69())
			{
				return false;
			}
			if (!func_70(&Local_208))
			{
				return false;
			}
			if (iVar521 == 1)
			{
				if ((((!_0x23e33cb9f4a3f547(iVar320, "PBL_MAIN") || !_0x23e33cb9f4a3f547(iVar320, "PBL_BREAKOUT")) || !_0x23e33cb9f4a3f547(iVar320, "PBL_QUICKEXIT")) || !_0x23e33cb9f4a3f547(iVar320, "PBL_PUNCH")) || !_0x23e33cb9f4a3f547(iVar320, "PBL_PUNCH2"))
				{
					return false;
				}
			}
			else if (((((((((((((!_0x23e33cb9f4a3f547(iVar320, "PBL_ACTION") || !_0x23e33cb9f4a3f547(iVar320, "PBL_BRKOUT_GROUND")) || !_0x23e33cb9f4a3f547(iVar320, "PBL_BRKOUT_WALL")) || !_0x23e33cb9f4a3f547(iVar320, "PBL_QUICK")) || !_0x23e33cb9f4a3f547(Local_322.f_1, "PBL_ACTION")) || !_0x23e33cb9f4a3f547(Local_322.f_1, "PBL_BRKOUT_GROUND")) || !_0x23e33cb9f4a3f547(Local_322.f_1, "PBL_BRKOUT_WALL")) || !_0x23e33cb9f4a3f547(Local_322.f_1, "PBL_QUICK")) || !_0x23e33cb9f4a3f547(iVar320, "PBL_WALL_BREAKOUT_LEFT")) || !_0x23e33cb9f4a3f547(iVar320, "PBL_WALL_BREAKOUT_RIGHT")) || !_0x23e33cb9f4a3f547(iVar320, "PBL_WALL_BREAKOUT_BACK")) || !_0x23e33cb9f4a3f547(iVar320, "PBL_GROUND_BREAKOUT_LEFT")) || !_0x23e33cb9f4a3f547(iVar320, "PBL_GROUND_BREAKOUT_RIGHT")) || !_0x23e33cb9f4a3f547(iVar320, "PBL_GROUND_BREAKOUT_BACK"))
			{
				return false;
			}
			return true;
	}
	return false;
}

bool func_9(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (bParam6 || func_71(*uParam1, &(iParam0->f_51), iParam0->f_161, &(iParam0->f_158), *uParam1, &(iParam0->f_160), 1, iParam3, iParam4))
	{
		if (bParam6 || func_72(iParam0, *uParam1))
		{
			if (iParam0->f_161 && iParam0->f_184)
			{
				fVar0 = 7f;
				if (func_73(iParam0->f_3, 1))
				{
					fVar0 = 20f;
				}
				clear_area(iParam0->f_51, fVar0, 2097152);
			}
			if (iParam5 == 1)
			{
				func_74(iParam0, -1, 0, bParam7);
			}
			_0x9d16896f0dbe78a2(iParam0->f_51, 5f);
			if (bParam2)
			{
				iParam0->f_51.f_3 = func_75(iParam0->f_51);
			}
			return true;
		}
	}
	return false;
}

void func_10(vector3 vParam0, float fParam3, bool bParam4)
{
	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

void func_11(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0->f_51.f_4)
	{
		case 0:
			*iParam1 = 9;
			*iParam2 = 0;
			break;
		case 1:
			*iParam1 = 9;
			*iParam2 = 1;
			break;
		case 2:
			*iParam1 = 11;
			*iParam2 = 0;
			break;
	}
}

bool func_12()
{
	if (Local_14.f_3 == 92)
	{
		if (func_50(iVar577, 4194304))
		{
			return true;
		}
		if (!func_76(128))
		{
			if (func_13())
			{
				return true;
			}
		}
	}
	return false;
}

bool func_13()
{
	switch (iVar736)
	{
		case 9:
			switch (iVar735)
			{
				case 0:
					break;
			}
			break;
		case 11:
			switch (iVar735)
			{
				case 0:
					break;
				case 2:
					break;
			}
			break;
	}
	return false;
}

bool func_14()
{
	if (is_bit_set(get_random_int_in_range(0, 65536), 0))
	{
		return true;
	}
	return false;
}

void func_15()
{
	func_11(&Local_14, &iVar1, &iVar0);
	if (iVar1 == 11)
	{
		iLocal_646 = 2;
	}
	else if (iVar1 == 9)
	{
		iLocal_646 = 0;
	}
	switch (iVar1)
	{
		case 9:
			switch (iVar0)
			{
				case 0:
					Local_208[1]->f_9 = 322.0161f;
					vLocal_524 = { -295.439f, 734.9f, 116.6f };
					fLocal_527 = 100f;
					Local_208[0]->f_15 = { -305.3418f, 741.3826f, 117.1479f };
					Local_208[0]->f_18 = 305.2172f;
					Local_208[1]->f_15 = { -303.5301f, 739.9963f, 117.9182f };
					Local_208[1]->f_18 = 312.2172f;
					*Local_330[0] = { -299.6043f, 738.5725f, 116.726f };
					Local_330[0]->f_3 = 4f;
					*Local_330[1] = { -290.2604f, 736.2405f, 117.1729f };
					Local_330[1]->f_3 = 2.55f;
					Local_208[2]->f_15 = { -267.4409f, 669.7515f, 113.4242f };
					Local_208[2]->f_18 = 150.1192f;
					break;
				case 1:
					Local_208[1]->f_9 = 130f;
					*Local_330[0] = { -386.3f, 822.5f, 115.7f };
					Local_330[0]->f_3 = 3f;
					*Local_330[1] = { -346.7f, 844.5f, 117f };
					Local_330[1]->f_3 = 5.5f;
					vLocal_524 = { -363.15f, 832.26f, 115.8f };
					fLocal_527 = 200.5f;
					Local_208[1]->f_15 = { -371.2f, 830.8f, 116.4f };
					Local_208[1]->f_18 = -142.84f;
					Local_208[0]->f_15 = { -373f, 829.99f, 116.4f };
					Local_208[0]->f_18 = -148.82f;
					Local_208[2]->f_15 = { -267.4409f, 669.7515f, 113.4242f };
					Local_208[2]->f_18 = 150.1192f;
					break;
			}
			break;
		case 11:
			switch (iVar0)
			{
				case 0:
					Local_208[1]->f_9 = 85f;
					*Local_330[0] = { 1338.974f, -1364.828f, 78.43774f };
					*Local_330[1] = { 1332.042f, -1363.909f, 78.46366f };
					Local_330[0]->f_3 = 3.15f;
					Local_330[1]->f_3 = 3.1f;
					vLocal_524 = { 1330.771f, -1367.377f, 79.444f };
					fLocal_527 = -95.15f;
					iLocal_542[0] = _create_volume_box_with_custom_name(1333.232f, -1372.411f, 79.96022f, 0f, 0f, -8.999998f, 21.479f, 9.926933f, 7.257f, "volNonClose0");
					iLocal_540[0] = _create_volume_box_with_custom_name(1341.319f, -1374.822f, 82.59002f, 0f, 0f, -9f, 23.34503f, 11.8652f, 6.637836f, "volNonApproach0");
					Local_208[0]->f_15 = { 1319.263f, -1364.595f, 77.47489f };
					Local_208[0]->f_18 = -47.96f;
					Local_208[1]->f_15 = { 1322.616f, -1364.093f, 77.95048f };
					Local_208[1]->f_18 = -51.24f;
					Local_208[0]->f_6 = { 1330.311f, -1365.189f, 79.6978f };
					Local_208[0]->f_9 = -105.91f;
					Local_208[1]->f_6 = { 1329.886f, -1364.514f, 79.5578f };
					Local_208[1]->f_9 = -140.74f;
					Local_208[2]->f_6 = { 1331.398f, -1365.388f, 79.6557f };
					Local_208[2]->f_9 = 70.92f;
					Local_208[2]->f_15 = { 1342.14f, -1363.804f, 79.1335f };
					Local_208[2]->f_18 = 166.8555f;
					break;
				case 1:
					Local_208[1]->f_9 = 110f;
					*Local_330[0] = { 1292.2f, -1316.6f, 76.6f };
					*Local_330[1] = { 1304.2f, -1329.4f, 76.7f };
					Local_330[0]->f_3 = 4f;
					Local_330[1]->f_3 = 4f;
					vLocal_524 = { 1295.35f, -1327.66f, 76.91f };
					fLocal_527 = 44.95f;
					iLocal_542[0] = _create_volume_aggregate_with_custom_name("volNonApproach0");
					_0x39816f6f94f385ad(&(iLocal_542[0]), 1284.786f, -1334.187f, 77.50498f, 0f, 0f, -48.52135f, 8.486638f, 7.098492f, 2.992859f);
					_0x39816f6f94f385ad(&(iLocal_542[0]), 1289.996f, -1339.616f, 77.50498f, 0f, 0f, 5.846964f, 8.486638f, 7.098492f, 2.992859f);
					_0x39816f6f94f385ad(&(iLocal_542[0]), 1285.414f, -1340.601f, 77.50498f, 0f, 0f, -32.81059f, 17.9757f, 7.098492f, 2.992859f);
					_0x39816f6f94f385ad(&(iLocal_542[0]), 1287.045f, -1332.269f, 77.50498f, 0f, 0f, -25.64329f, 4.998636f, 3.091529f, 2.992859f);
					iLocal_544[0] = _create_volume_box_with_custom_name(1313.728f, -1337.409f, 76.62299f, 0f, 0f, 70.00001f, 13.30591f, 95.04527f, 18.75799f, "volRoadBlock0");
					Local_208[0]->f_15 = { 1299.209f, -1325.43f, 76.02338f };
					Local_208[0]->f_18 = -155.6f;
					Local_208[1]->f_15 = { 1300.854f, -1324.348f, 75.84612f };
					Local_208[1]->f_18 = -134.69f;
					Local_208[2]->f_15 = { 1342.14f, -1363.804f, 79.1335f };
					Local_208[2]->f_18 = 166.8555f;
					break;
				case 2:
					Local_208[1]->f_9 = 163f;
					*Local_330[0] = { 1468.987f, -1366.38f, 77.7758f };
					*Local_330[1] = { 1457.409f, -1361.21f, 77.8266f };
					Local_330[0]->f_3 = 3f;
					Local_330[1]->f_3 = 3f;
					vLocal_524 = { 1460.92f, -1362.4f, 78.49f };
					fLocal_527 = 240.85f;
					iLocal_542[0] = _create_volume_box_with_custom_name(1461.364f, -1368.129f, 79.43551f, 0f, 0f, 154.72f, 11.502f, 10.39275f, 2.681242f, "volNonClose0");
					Local_208[0]->f_15 = { 1454.292f, -1359.467f, 79.8424f };
					Local_208[0]->f_18 = 114.26f;
					Local_208[1]->f_15 = { 1452.881f, -1357.784f, 79.1527f };
					Local_208[1]->f_18 = 93.53f;
					Local_208[2]->f_15 = { 1342.14f, -1363.804f, 79.1335f };
					Local_208[2]->f_18 = 166.8555f;
					break;
			}
			break;
	}
	if (func_77(Local_208[0]->f_6))
	{
		Local_208[0]->f_6 = { vLocal_524 };
	}
	if (func_77(Local_208[1]->f_6))
	{
		Local_208[1]->f_6 = { vLocal_524 };
	}
	if (func_77(Local_208[2]->f_6))
	{
		Local_208[2]->f_6 = { vLocal_524 };
	}
}

bool func_16()
{
	switch (iVar712)
	{
		case 0:
			if (!func_78(Local_14.f_51, Local_14.f_51.f_3, &Local_208, &uLocal_528, 1, 0, -1, 1))
			{
				return false;
			}
			func_79();
			if (func_54(&(uLocal_528[2]), 0, 0))
			{
				_request_ped_emotional_preset(&(uLocal_528[2]), "Default_Panic");
				_0xf7ea250b9a919e03(-1073596206, &(uLocal_528[2]));
			}
			iLocal_714 = 1;
			break;
		case 1:
			bVar0 = true;
			iVar1 = 0;
			while (iVar1 < iVar526)
			{
				iLocal_584[iVar1] = -1;
				if (func_54(&(uLocal_528[iVar1]), 0, 0))
				{
					if (!_0xa0bc8faed8cfeb3c(&(uLocal_528[iVar1])))
					{
						bVar0 = false;
					}
				}
				iVar1++;
			}
			if (bVar0)
			{
				iLocal_714 = 6;
			}
			break;
		case 6:
			return true;
	}
	return false;
}

void func_17(float fParam0)
{
	func_80(Local_358[0], 67779789, "farDisturbing", &(uLocal_528[0]), fParam0, 25f, 16f, 0);
}

void func_18(bool bParam0)
{
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (_does_volume_exist(&(iLocal_544[iVar0])))
			{
				bVar1 = true;
				_0xc1799fafd2fdf52b(&(iLocal_544[iVar0]), 0, 0, 0);
				_0xb56d41a694e42e86(&(iLocal_544[iVar0]), 0, 0, 0, -1, -1, 0);
				_0x18262cafebb5fbe1(&(iLocal_544[iVar0]), 0, 0, 0, -1, -1, 0);
			}
			iVar0++;
		}
		if (bVar1)
		{
			func_28(&uLocal_579, 32, 0);
		}
	}
	else if (func_50(iVar576, 32))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (_does_volume_exist(&(iLocal_544[iVar0])))
			{
				_0xd17672447692478e(&(iLocal_544[iVar0]), 0);
				_0x74c2b3dc0b294102(&(iLocal_544[iVar0]));
				_0xa1cfb35069d23c23(&(iLocal_544[iVar0]));
			}
			iVar0++;
		}
		func_81(&uLocal_579, 32);
	}
}

void func_19()
{
	set_anim_scene_origin(iVar320, vLocal_524, 0f, 0f, uVar525, 2);
	if (iVar521 == 1)
	{
		set_anim_scene_entity(iVar320, "Odriscoll01", &(uLocal_528[0]), 0);
		set_anim_scene_entity(iVar320, "Odriscoll02", &(uLocal_528[1]), 0);
		set_anim_scene_entity(iVar320, "Victim", &(uLocal_528[2]), 0);
	}
	else
	{
		set_anim_scene_origin(Local_322.f_1, vLocal_524, 0f, 0f, uVar525, 2);
		set_anim_scene_entity(iVar320, "thug_A", &(uLocal_528[0]), 0);
		set_anim_scene_entity(iVar320, "vic", &(uLocal_528[2]), 0);
		set_anim_scene_entity(Local_322.f_1, "thug_B", &(uLocal_528[1]), 0);
	}
	_get_anim_scene_origin(iVar320, &uVar0, &uVar3, 2);
	iVar6 = 0;
	while (iVar6 < iVar526)
	{
		vVar7 = { get_entity_coords(&(uLocal_528[iVar6]), true, false) };
		fVar10 = get_entity_heading(&(uLocal_528[iVar6]));
		iVar6++;
	}
}

bool func_20(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!iParam0->f_186)
	{
		func_82(iParam0, iParam2);
	}
	iParam0->f_1 = (iParam0->f_1 % 4);
	func_83(iParam0, uParam1);
	if (bParam4)
	{
		if (iParam0->f_48 && !iParam0->f_5 & 16384 != 0)
		{
			if (iParam0->f_5.f_1 & 256 != 0)
			{
				func_84(&(iParam0->f_5));
			}
			func_85(&(iParam0->f_5), 16384);
		}
	}
	if (!iParam0->f_48 && !func_86(iParam0->f_3, 262144))
	{
		if (iParam0->f_5 & 2048 != 0)
		{
			func_87(iParam0, &(iParam0->f_48), iParam0->f_3, &(iParam0->f_51.f_6));
			func_88(&(iParam0->f_121));
		}
	}
	switch (iParam0->f_1)
	{
		case 0:
		case 1:
			if (!iParam0->f_48)
			{
				if (!bParam7)
				{
					if (iParam0->f_193 < 2)
					{
						iParam0->f_193++;
					}
					else
					{
						iParam0->f_193 = 0;
					}
					func_89(iParam0, iParam0->f_193, 2f);
				}
			}
			break;
		case 2:
			if (!func_90(iParam0->f_3, &(iParam0->f_47), iParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		case 3:
			break;
	}
	if (func_73(iParam0->f_3, 128))
	{
		if ((does_entity_exist(uParam1[0]) && !is_ped_injured(uParam1[0])) && iParam0->f_3 != 49)
		{
			if (!_0xf6a8a652a6b186cd(_0xf6f5447d418daa82(uParam1[0])))
			{
				func_91(iParam0, uParam1[0]);
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
	iParam0->f_158 = 0;
	iParam0->f_1++;
	iParam0->f_2++;
	if (bVar0)
	{
		return false;
	}
	return true;
}

bool func_21()
{
	if (func_92() || func_50(iVar577, 16))
	{
		if (iVar714 == 8)
		{
			if (!func_93(&uLocal_628))
			{
				func_94(&uLocal_628, 0);
			}
			else if (func_95(&uLocal_628, 3f))
			{
				return true;
			}
		}
		else if (iVar714 == 16384)
		{
			func_28(&uLocal_579, 4194304, 0);
			return false;
		}
		else if (iVar714 == 4)
		{
			func_28(&uLocal_579, 8, 0);
			return true;
		}
		else if (func_96(0, 1, Global_35, 1))
		{
			return true;
		}
	}
	return false;
}

void func_22(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0]->f_1 != 0)
		{
			func_97((*uParam0)[iVar0], 0);
		}
		iVar0++;
	}
}

void func_23()
{
	if (!Local_14.f_44)
	{
		Local_14.f_44 = 1;
	}
}

int func_24()
{
	if (func_98(&(uLocal_528[0]), -1919017821, "bWallBreakout", uVar0, 1.6f, 1))
	{
		iLocal_404 = 1;
	}
	else if (func_98(&(uLocal_528[0]), -668065476, "bGroundBreakout", uVar0, 1.7f, 1))
	{
		iLocal_404 = 2;
	}
	if (iVar402 == 0)
	{
		if (func_98(&(uLocal_528[2]), -1919017821, "bWallBreakout", uVar0, 1.5f, 1))
		{
			iLocal_404 = 1;
		}
		else if (func_98(&(uLocal_528[2]), -668065476, "bGroundBreakout", uVar0, 1.6f, 1))
		{
			iLocal_404 = 2;
		}
	}
	iVar1 = func_99();
	switch (iVar402)
	{
		case 1:
			switch (iVar1)
			{
				case 3:
					sVar2 = "PBL_WALL_BREAKOUT_LEFT";
					break;
				case 2:
					sVar2 = "PBL_WALL_BREAKOUT_RIGHT";
					break;
				case 1:
					sVar2 = "PBL_WALL_BREAKOUT_BACK";
					break;
				default:
					sVar2 = "PBL_BRKOUT_WALL";
					break;
			}
			_set_anim_scene_playback_list_bool(iVar320, sVar2, false);
			_set_anim_scene_playback_list_bool(Local_322.f_1, "PBL_BRKOUT_WALL", false);
			break;
		case 2:
			switch (iVar1)
			{
				case 3:
					sVar2 = "PBL_GROUND_BREAKOUT_LEFT";
					break;
				case 2:
					sVar2 = "PBL_GROUND_BREAKOUT_RIGHT";
					break;
				case 1:
					sVar2 = "PBL_GROUND_BREAKOUT_BACK";
					break;
				default:
					sVar2 = "PBL_BRKOUT_GROUND";
					break;
			}
			_set_anim_scene_playback_list_bool(iVar320, sVar2, false);
			_set_anim_scene_playback_list_bool(Local_322.f_1, "PBL_BRKOUT_GROUND", false);
			break;
		case 0:
			if (!func_53(2, 8))
			{
				if (!func_100(&(uLocal_528[2]), iVar320, "vic", 0, 0, 1, 0))
				{
					if (!func_98(&(uLocal_528[2]), -343849268, "bCantBreakout", uVar0, 1.5f, 1) && !func_98(&(uLocal_528[0]), -343849268, "bCantBreakout", uVar0, 1.5f, 1))
					{
						remove_anim_scene_entity(iVar320, "vic", &(uLocal_528[2]));
					}
					else
					{
						func_101(2, 512);
					}
				}
			}
			if (!func_100(&(uLocal_528[0]), iVar320, "thug_a", 0, 0, 1, 0))
			{
				if (!func_98(&(uLocal_528[2]), -343849268, "bCantBreakout", uVar0, 1.5f, 1) && !func_98(&(uLocal_528[0]), -343849268, "bCantBreakout", uVar0, 1.5f, 1))
				{
					remove_anim_scene_entity(iVar320, "thug_a", &(uLocal_528[0]));
				}
				else
				{
					func_101(0, 512);
				}
			}
			if (_0x3ab6c7b0bb0df4b1(&(uLocal_528[1]), Local_322.f_1))
			{
				remove_anim_scene_entity(Local_322.f_1, "thug_b", &(uLocal_528[1]));
			}
			break;
	}
	return 1;
}

bool func_25()
{
	if (_is_anim_scene_started(iVar320, false))
	{
		if ((bVar549 || _0x8d81e7824b7753f7(iVar320, "action", 1)) || _0x8d81e7824b7753f7(iVar320, "base_punch", 1))
		{
			return true;
		}
	}
	return false;
}

bool func_26(int iParam0, char* sParam1, bool bParam2)
{
	if (_is_anim_scene_loaded(iParam0, true, false))
	{
		if (_0x23e33cb9f4a3f547(iParam0, sParam1))
		{
			_set_anim_scene_playback_list_bool(iParam0, sParam1, bParam2);
			return true;
		}
	}
	return false;
}

void func_27(bool bParam0)
{
	set_anim_scene_bool(iVar319, "BASE_BOOL", bParam0, false);
	bLocal_550 = bParam0;
}

void func_28(var uParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	func_102(uParam0, iParam1);
}

void func_29()
{
	func_103(&Local_471, 1, 1, 1, 0);
	if (func_54(&(uLocal_528[2]), 0, 0))
	{
		func_104(&(uLocal_528[2]), 0);
		func_105(uLocal_528[2], Local_407[2], &Local_471, 1, 1);
	}
	if (func_54(&(uLocal_528[0]), 0, 0) && _0x3ab6c7b0bb0df4b1(&(uLocal_528[0]), iVar320))
	{
		func_104(&(uLocal_528[0]), 0);
	}
	func_106();
	set_ped_config_flag(&(uLocal_528[2]), 243, false);
	func_107(5);
}

bool func_30()
{
	func_108();
	iVar0 = -1;
	if (iVar710 >= 5)
	{
	}
	else
	{
		iVar0 = func_109(&uVar1, (fVar737 < 0f && !func_50(iVar577, 262144)));
	}
	if (iVar0 == -1 && iVar710 > 2)
	{
		if (((iVar700 != Global_35 && (!func_54(&(uLocal_528[2]), 0, 1) || iVar700 == &uLocal_528[1])) && func_95(&uLocal_637, 2.5f)) && iVar708 < 2)
		{
			if (!func_50(iVar577, 67108864))
			{
				if (func_50(iVar577, 131072) && func_50(iVar577, 524288))
				{
					func_110(0, 1);
				}
				else
				{
					func_110(1, 1);
				}
			}
			func_111(&uLocal_637);
		}
	}
	switch (iVar710)
	{
		case 0:
			func_112();
			if (func_113() == 11)
			{
				func_114(&uLocal_733, &uLocal_735, Local_14.f_51, 0f, 0f, 0f, 5f, 5f, 5f, 0, 0, 1, 0, 0);
				func_114(&uLocal_734, &uLocal_736, 1343.603f, -1359.33f, 79.281f, 0f, 0f, -12f, 15f, 12f, 5f, 1, 0, 1, 0, "volExtraBlocking");
			}
			else
			{
				func_114(&uLocal_733, &uLocal_735, Local_14.f_51, 0f, 0f, 0f, 10f, 10f, 10f, 0, 0, 1, 0, 0);
			}
			func_107(2);
			break;
		case 2:
			if (iVar521 == 1)
			{
				func_115(iVar0);
			}
			else
			{
				func_116();
			}
			break;
		case 3:
			func_117();
			if (iVar521 == 1)
			{
				func_118(iVar0);
			}
			else
			{
				func_119(iVar0);
			}
			break;
		case 4:
			if (func_120(iVar0))
			{
				return true;
			}
			break;
		case 5:
			func_121(0);
			func_62(0);
			if (func_122())
			{
				if (func_123())
				{
					if (func_54(&(uLocal_528[2]), 0, 1) && !func_53(2, 8))
					{
						clear_entity_last_damage_entity(&(uLocal_528[2]));
						func_107(6);
					}
					else
					{
						return true;
					}
				}
			}
			break;
		case 6:
			if (func_124(&(uLocal_528[2]), 1313215416))
			{
				if (func_50(iVar577, 1))
				{
					func_81(&uLocal_579, 1);
				}
				if (!func_93(&uLocal_634))
				{
					func_94(&uLocal_634, 0);
					set_ped_config_flag(&(uLocal_528[2]), 252, false);
				}
				else if (func_95(&uLocal_634, 3f))
				{
					_0xffb520a3e16f7b7b(&(uLocal_528[2]), 0f);
					func_125(&uLocal_634);
				}
			}
			else if (func_126())
			{
				if (func_50(iVar577, 1073741824))
				{
					_0xa3db37edf9a74635(iVar696, &(uLocal_528[2]), 3, 2, 1);
					_0xa3db37edf9a74635(iVar696, &(uLocal_528[2]), 4, 2, 1);
				}
				func_57();
				func_107(7);
			}
			func_62(0);
			break;
		case 7:
			if (!func_54(&(uLocal_528[2]), 0, 1) || func_127(Global_35, &(uLocal_528[2]), 1, 1) > 20f)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_31(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, int iParam10, int iParam11, int iParam12)
{
	fVar0 = 0f;
	if (iParam0->f_1 >= 4)
	{
		if (bParam6)
		{
			if (func_128())
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
		if (!iParam0->f_48)
		{
			if (is_player_riding_train(player_id()))
			{
				return true;
			}
		}
	}
	if (bParam2 || bParam4)
	{
		if (iParam0->f_188 == 0)
		{
			if (bParam5)
			{
				fVar0 = 300f;
				if (!bParam8 && iParam0->f_48)
				{
					fVar0 = (fVar0 - 65f);
				}
			}
			else if (func_129(iParam0->f_3))
			{
				fVar0 = 250f;
			}
			else if (func_73(iParam0->f_3, 131072))
			{
				fVar0 = 70f;
				fVar0 = (fVar0 + 10f);
			}
			else if (func_73(iParam0->f_3, 1) && iParam12 == 0)
			{
				fVar0 = 215f;
				fVar0 = (fVar0 + 20f);
				if (iParam0->f_48)
				{
					fVar0 = (fVar0 - 80f);
				}
			}
			else if (func_73(iParam0->f_3, 2) || iParam12 == 1)
			{
				fVar0 = 125f;
				fVar0 = (fVar0 + 10f);
				if (iParam0->f_48)
				{
					fVar0 = (fVar0 - 50f);
				}
			}
			iParam0->f_189 = fVar0;
		}
		else
		{
			fVar0 = iParam0->f_189;
		}
		fVar0 = (fVar0 * fVar0);
		if (bParam2)
		{
			if (iParam0->f_188 < *uParam1)
			{
				if (does_entity_exist(uParam1[iParam0->f_188]))
				{
					if (Global_1935630->f_40 != uParam1[iParam0->f_188])
					{
						if ((bParam3 && !is_entity_dead(uParam1[iParam0->f_188])) || !bParam3)
						{
							if ((&iParam0->f_98[iParam0->f_188] * &iParam0->f_98[iParam0->f_188]) <= fVar0)
							{
								iParam0->f_187 = 0;
							}
						}
					}
				}
				iParam0->f_188++;
			}
			else
			{
				iParam0->f_188 = 0;
				if (iParam0->f_187)
				{
					return true;
				}
				else
				{
					iParam0->f_187 = 1;
				}
			}
		}
		if (bParam4)
		{
			if (fParam9 == 0f)
			{
				if (func_130(Global_36, iParam0->f_51) > fVar0)
				{
					return true;
				}
			}
			else
			{
				vVar1 = { fParam9, iParam10, iParam11 };
				if (func_130(Global_36, vVar1) > fVar0)
				{
					return true;
				}
			}
		}
	}
	if (bParam3)
	{
		if (iParam0->f_191 < *uParam1)
		{
			if (!is_entity_dead(uParam1[iParam0->f_191]))
			{
				iParam0->f_190 = 0;
			}
			iParam0->f_191++;
		}
		else if (iParam0->f_190)
		{
			return true;
		}
		else
		{
			iParam0->f_191 = 0;
			iParam0->f_190 = 1;
		}
	}
	return false;
}

void func_32(int iParam0)
{
	func_45(iParam0, 0);
	func_41(iParam0, 0);
	func_43(iParam0, 1);
	func_38(iParam0, 1);
	func_131(iParam0, 0);
	func_132(iParam0, 1);
	func_133(iParam0, 1, 1, 1);
}

var func_33(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	if (bParam2)
	{
		_0xdd1232b332cbb9e7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_134(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_135(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		_uilog_set_cached_objective(sVar0);
	}
	return func_134(sVar0, iParam1, 0, 0, 1, 1);
}

void func_34()
{
	Local_553 = { 0f, 0f, 0f };
	Local_553.f_3 = Global_35;
	Local_553.f_8 = 4;
	Local_553.f_19 = 4;
	Local_553.f_21 = 4;
	Local_553.f_17 = 4;
	Local_553.f_18 = 4;
	Local_553.f_7 = 0;
}

void func_35(int iParam0)
{
	func_47(iParam0, (func_136(iParam0) - 6f));
	func_49(iParam0, 1);
}

void func_36(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_137(&(uParam0->f_1), 8);
	}
	else
	{
		func_85(&(uParam0->f_1), 8);
	}
}

void func_37(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_137(&(uParam0->f_1), 2);
	}
	else
	{
		func_85(&(uParam0->f_1), 2);
	}
}

void func_38(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_85(iParam0, 16);
	}
	else
	{
		func_137(iParam0, 67108864);
		func_137(iParam0, 16);
	}
}

void func_39(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_137(&(uParam0->f_1), 16);
	}
	else
	{
		func_85(&(uParam0->f_1), 16);
	}
}

void func_40(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_137(&(uParam0->f_1), 1);
	}
	else
	{
		func_85(&(uParam0->f_1), 1);
	}
}

void func_41(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_137(&(uParam0->f_1), 2048);
	}
	else
	{
		func_85(&(uParam0->f_1), 2048);
	}
}

void func_42(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_137(&(uParam0->f_1), 4);
	}
	else
	{
		func_85(&(uParam0->f_1), 4);
	}
}

void func_43(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_137(&(uParam0->f_1), 256);
	}
	else
	{
		func_85(&(uParam0->f_1), 256);
	}
}

void func_44(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_85(iParam0, 4);
	}
	else
	{
		func_137(iParam0, 4);
	}
}

void func_45(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_137(&(uParam0->f_1), 16384);
	}
	else
	{
		func_85(&(uParam0->f_1), 16384);
	}
}

void func_46(var uParam0, float fParam1)
{
	uParam0->f_17 = fParam1;
}

void func_47(int iParam0, float fParam1)
{
	iParam0->f_25 = fParam1;
}

void func_48(var uParam0, float fParam1)
{
	uParam0->f_24 = fParam1;
}

void func_49(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_85(iParam0, 1);
	}
	else
	{
		func_137(iParam0, 1);
	}
}

bool func_50(int iParam0, int iParam1)
{
	return func_138(iParam0, iParam1);
}

void func_51(int iParam0)
{
	if (func_3(*iParam0, 8))
	{
		_0x660a8f876df1d4f8(39);
		func_137(iParam0, 8);
	}
}

void func_52(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

bool func_53(int iParam0, int iParam1)
{
	return func_138(&(uLocal_580[iParam0]), iParam1);
}

bool func_54(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_139(iParam0, iParam1);
}

void func_55(int iParam0, int iParam1)
{
	func_140(iParam0, iParam1);
}

void func_56()
{
	func_141(&uLocal_385);
	if (func_50(iVar577, 64))
	{
		func_142(Global_35, 1);
		func_81(&uLocal_579, 64);
	}
	if (func_54(&(uLocal_528[2]), 0, 0))
	{
		func_143(&(uLocal_528[2]), 1);
	}
}

void func_57()
{
	if (bVar709)
	{
		switch (iVar521)
		{
			case 2:
				_0x2b4ce170de09f346(Global_35, -303847386);
				break;
			case 1:
				_0x2b4ce170de09f346(Global_35, 448417000);
				break;
		}
		iLocal_711 = 0;
	}
}

void func_58()
{
	vVar0 = { 0f, 0f, 0f };
	vVar3 = { func_144() };
	vVar6 = { func_145() };
	if (func_54(&(uLocal_528[0]), 0, 1))
	{
		if (func_54(Local_208[0]->f_11, 0, 1))
		{
			open_sequence_task(&iVar9);
			if (!func_77(vVar0))
			{
				task_follow_nav_mesh_to_coord(0, vVar0, 1f, 20000, 1f, 1, 40000f);
			}
			task_mount_animal(0, Local_208[0]->f_11, -1, -1, 1f, 1, 0, 0);
			if (!func_77(vVar3))
			{
				task_follow_nav_mesh_to_coord(0, vVar3, 1.5f, 20000, 4f, 0, 40000f);
			}
			_task_move_in_traffic_2(0, vVar6, 5f, 1f, 0, 0);
			func_146(&(uLocal_528[0]), &iVar9, 0, 0, 1, 1);
			set_ped_config_flag(&(uLocal_528[0]), 167, true);
		}
	}
	vVar0 = { 0f, 0f, 0f };
	if (func_54(&(uLocal_528[1]), 0, 1))
	{
		if (func_54(Local_208[1]->f_11, 0, 1))
		{
			open_sequence_task(&iVar9);
			if (!func_77(vVar0))
			{
				task_follow_nav_mesh_to_coord(0, vVar0, 1f, 20000, 1f, 1, 40000f);
			}
			task_mount_animal(0, Local_208[1]->f_11, -1, -1, 1f, 1, 0, 0);
			if (!func_77(vVar3))
			{
				task_follow_nav_mesh_to_coord(0, vVar3, 1.5f, 20000, 4f, 0, 40000f);
			}
			_task_move_in_traffic_2(0, vVar6, 5f, 1f, 0, 0);
			func_146(&(uLocal_528[1]), &iVar9, 0.75f, 0, 1, 1);
			set_ped_config_flag(&(uLocal_528[1]), 167, true);
		}
	}
}

void func_59(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (are_strings_equal(_0xf81c53561d15f330(), func_147(iParam0->f_3)))
	{
		_0x1096603b519c905f("");
	}
	if (iParam0->f_48)
	{
		stop_audio_scene("RE_active_location_scene");
		if (!iParam0->f_45 && !iParam0->f_44)
		{
			func_148(iParam0->f_3, 524288);
		}
	}
	if (func_54(player_ped_id(), 0, 1))
	{
		iVar1 = get_mount(Global_35);
		set_ped_config_flag(Global_35, 43, false);
		iVar2 = iParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			bVar3 = (bParam8 && decor_exist_on(uParam1[iVar0], "pedRoam_bInPedRoam"));
			if (func_54(uParam1[iVar0], 0, 0))
			{
				func_149(uParam1[iVar0], bVar3);
				if (func_150(iParam0, (*uParam1)[iVar0]))
				{
					func_151((*uParam1)[iVar0]);
				}
			}
			if (!iParam0->f_50)
			{
				if (func_54(uParam1[iVar0], 0, 1))
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
							func_153(uParam1[iVar0], 1073741824, func_152(iVar0 < iVar2, &(iParam0->f_98[iVar0]), -1f), iVar1, 0);
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
		func_154(iParam0);
	}
	func_155(iParam0);
	if (!iParam0->f_186)
	{
		func_82(iParam0, iParam3);
	}
	if (iParam0->f_186)
	{
		iVar4 = func_156(iParam0->f_3, iParam0->f_185);
		_int_to_string(iVar4, "%u", &uVar5);
		iVar9 = 0;
		if (!iParam0->f_48)
		{
			iVar9 = 2;
		}
		else if (!iParam0->f_44)
		{
			iVar9 = 1;
		}
		func_157(7, iVar4, iVar9);
		iParam0->f_186 = 0;
	}
}

void func_60(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_149(uParam0[iVar0], 0);
		iVar0++;
	}
}

void func_61(int iParam0)
{
	if (_does_anim_scene_exist(iParam0))
	{
		if (_is_anim_scene_started(iParam0, false))
		{
			_delete_anim_scene(iParam0);
		}
	}
}

void func_62(bool bParam0)
{
	if (!func_50(iVar576, 16384))
	{
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			if (func_54(&(uLocal_528[iVar0]), 0, 1))
			{
				if (is_ped_shooting(&(uLocal_528[iVar0])))
				{
					uLocal_741 = iVar738 + 1;
				}
			}
			iVar0++;
		}
		if (is_ped_shooting(Global_35))
		{
			uLocal_741 = iVar738 + 1;
		}
		if (func_95(&uLocal_603, 10f) || bParam0)
		{
			if (iVar738 > 7)
			{
				func_158(Global_35);
				func_28(&uLocal_579, 16384, 0);
			}
		}
	}
}

void func_63(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 - (Global_1310750->f_16035 && iParam0));
}

bool func_64(bool bParam0)
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

bool func_65(int iParam0)
{
	iVar0 = func_161(iParam0->f_3);
	iVar1 = func_162(1);
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

void func_66(var uParam0)
{
	iVar0 = func_113();
	iVar1 = func_163(iVar0, 0, 0, 0);
	*uParam0 = 0;
	switch (iVar0)
	{
		case 9:
			func_164(&Local_14, 0);
			iLocal_523 = 1;
			Local_208[0]->f_1 = 347599949;
			Local_208[1]->f_1 = 347599949;
			Local_208[2]->f_1 = 1727461697;
			StringCopy(&(Local_208[0]->f_23), "0361_G_M_M_UniDuster_03_WHITE_01", 64);
			StringCopy(&(Local_208[1]->f_23), "0362_G_M_M_UniDuster_03_WHITE_02", 64);
			StringCopy(&(Local_208[2]->f_23), "REFR_Victim", 64);
			Local_208[2] = 4;
			Local_208[0]->f_3 = 1274234949;
			Local_208[1]->f_3 = 1672902603;
			Local_208[2]->f_3 = 1784611275;
			break;
		case 0:
		case 11:
			func_164(&Local_14, 2);
			iLocal_523 = 2;
			Local_208[0]->f_1 = -628956517;
			Local_208[1]->f_1 = -628956517;
			Local_208[2]->f_1 = 1727461697;
			StringCopy(&(Local_208[0]->f_23), "0177_G_M_Y_UniExConfeds_01_WHITE_01", 64);
			StringCopy(&(Local_208[1]->f_23), "0178_G_M_Y_UniExConfeds_01_WHITE_02", 64);
			StringCopy(&(Local_208[2]->f_23), "1030_S_M_M_CoachTaxiDriver_01_WHITE_02", 64);
			Local_208[2] = 4;
			Local_208[0]->f_3 = -307000369;
			Local_208[1]->f_3 = 32289857;
			Local_208[2]->f_3 = 2083759476;
			break;
	}
	iVar2 = 0;
	while (iVar2 <= 2)
	{
		func_165(&(Local_208[iVar2]->f_22));
		iVar2++;
	}
	Local_208[2]->f_12 = 0;
	switch (iVar1)
	{
		case 2:
			Local_208[0]->f_12 = func_166(iVar1, 0, 1);
			Local_208[1]->f_12 = func_166(iVar1, 0, 1);
			break;
		default:
			Local_208[0]->f_12 = func_166(iVar1, 0, 0);
			Local_208[1]->f_12 = func_166(iVar1, 1, 0);
			break;
	}
	Local_208[2]->f_13 = 0;
	Local_208[0]->f_13 = 0;
	Local_208[1]->f_13 = 0;
	Local_208[2]->f_19 = 1;
	Local_208[0]->f_19 = 1;
	Local_208[1]->f_19 = 1;
	if (*uParam0)
	{
	}
	if (func_50(iVar576, 536870912))
	{
		if (is_model_valid(iVar697))
		{
			request_model(iVar697, false);
		}
	}
	func_167(&Local_208);
}

void func_67()
{
	Local_305[2] = func_168(2);
	Local_305[2]->f_1 = "dia01_odris02";
	Local_305[3] = func_168(3);
	Local_305[3]->f_1 = "dia02_odris02";
	Local_305[4] = func_168(4);
	Local_305[4]->f_1 = "dia03_odris02";
	Local_305[5] = func_168(5);
	Local_305[5]->f_1 = "dia04_victim";
	Local_305[7] = func_168(7);
	Local_305[7]->f_1 = "base";
	switch (iVar521)
	{
		case 2:
			Local_305[6] = func_168(6);
			Local_305[6]->f_1 = "";
			break;
		default:
			Local_305[6] = "";
			Local_305[6]->f_1 = "";
			break;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iVar0 == 6 && iVar521 != 2)
		{
		}
		else
		{
			sVar1 = func_168(iVar0);
			if (!is_string_null_or_empty(sVar1))
			{
				request_anim_dict(sVar1);
			}
		}
		iVar0++;
	}
}

void func_68()
{
	if (iVar521 == 1)
	{
		Local_322.f_4 = "script@beat@wilderness@footrobbery@main";
		sVar0[0] = "PBL_MAIN";
	}
	else
	{
		Local_322.f_4 = "script@beat@town@footrobbery@leymone_vicThugA";
		Local_322.f_5 = "script@beat@town@footrobbery@leymone_thugB";
		sVar0[0] = "PBL_ACTION";
		sVar0[1] = "PBL_ACTION";
	}
	if (!is_string_null_or_empty(Local_322.f_4))
	{
		Local_322 = _create_anim_scene(Local_322.f_4, iVar3, &(sVar0[0]), false, true);
		if (!_is_anim_scene_loaded(iVar320, true, false))
		{
			load_anim_scene(iVar320);
		}
	}
	if (!is_string_null_or_empty(Local_322.f_5))
	{
		Local_322.f_1 = _create_anim_scene(Local_322.f_5, 0, &(sVar0[1]), false, true);
		if (!_is_anim_scene_loaded(Local_322.f_1, true, false))
		{
			load_anim_scene(Local_322.f_1);
		}
	}
}

bool func_69()
{
	iVar2 = 1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iVar0 == 6 && iVar521 != 2)
		{
		}
		else
		{
			sVar1 = func_168(iVar0);
			if (!is_string_null_or_empty(sVar1))
			{
				if (!has_anim_dict_loaded(sVar1))
				{
					iVar2 = 0;
				}
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_70(int iParam0)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (!func_169((*iParam0)[iVar0]))
		{
			bVar1 = true;
		}
		iVar0++;
	}
	return !bVar1;
}

int func_71(int iParam0, var uParam1, bool bParam2, var uParam3, struct<7> Param4, var uParam11, bool bParam12, bool bParam13, int iParam14)
{
	if (Param4.f_6 > -1)
	{
		*uParam1 = { func_170(iParam0, Param4.f_6) };
		uParam1->f_4 = Param4.f_6;
		uParam1->f_5 = uParam1->f_4;
		func_171(iParam0, uParam1, bParam2, bParam12, 0);
		*uParam3 = 0;
		return 1;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (func_86(iParam0, 128))
			{
				if (!func_172(iParam0, &(uParam1->f_10)))
				{
					*uParam11 = 1;
					return 0;
				}
			}
			else
			{
				func_173(iParam0, &uVar1, &uVar2, &iVar0, 0);
				bVar4 = false;
				*uParam1 = { func_174(&bVar4, iParam0, uVar2, uVar1) };
				if (bVar4)
				{
					*uParam11 = 1;
					return 0;
				}
				if (func_77(*uParam1))
				{
					return func_175(uParam1, uParam3, uParam11, bParam2, 12, 1000);
				}
				uParam1->f_4 = func_176(iParam0, *uParam1);
				uParam1->f_5 = uParam1->f_4;
				if (func_3(Param4.f_2, 8))
				{
					func_171(iParam0, uParam1, 0, bParam12, 0);
					*uParam3 = 0;
					return 1;
				}
				func_177(uParam1);
			}
			*uParam3 = 0;
			uParam1->f_9 = 2;
			break;
		case 1:
			if (func_178(uParam1, uParam3, uParam11, bParam2, bParam13))
			{
				if (!bParam13 && func_179(vdist(Global_36, *uParam1), iParam0))
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
			if (func_86(iParam0, 128))
			{
				if (!func_180(uParam1, &bVar3))
				{
					if (bVar3)
					{
						return func_175(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					return 0;
				}
			}
			else
			{
				func_173(iParam0, &uVar1, &uVar2, &iVar0, 0);
				if (vdist2(*uParam1, Global_36) < to_float(iVar0))
				{
					if (!func_177(uParam1))
					{
						return func_175(uParam1, uParam3, uParam11, bParam2, 12, 1000);
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
			if (func_181(iParam0, Param4.f_1, uParam1, Param4, iParam14))
			{
				func_171(iParam0, uParam1, bParam2, bParam12, 0);
				*uParam3 = 0;
				return 1;
			}
			else
			{
				*uParam3 = 0;
				uParam1->f_9 = 5;
				return func_175(uParam1, uParam3, uParam11, bParam2, 12, 1000);
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
		func_33("BEAT_SCAN", 2000, 0, 1, 0, 0, -1, -1, 0);
	}
	if (uParam1->f_8 >= 12)
	{
		if (bParam2)
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_33("BEAT_FAIL", 4000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam11 = 1;
	}
	return 0;
}

bool func_72(int iParam0, int iParam1)
{
	if (func_73(iParam1, 256))
	{
		if (_does_volume_exist(iParam0->f_172) || func_183(iParam1, func_182(iParam0), &(iParam0->f_172)))
		{
			if (func_54(Global_35, 0, 1))
			{
				return is_entity_in_volume(Global_35, iParam0->f_172, true, 0);
			}
		}
	}
	return true;
}

bool func_73(int iParam0, int iParam1)
{
	if (!func_184(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0] && iParam1) != 0;
}

void func_74(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam0->f_176)
	{
		return;
	}
	if (iParam1 != -1)
	{
		func_185(&(iParam0->f_171), iParam0->f_51, 0f, 0f, 0f, IntToFloat(iParam1), IntToFloat(iParam1), 5f, "Custom Sized Ambient Avoidance");
	}
	else if (func_73(iParam0->f_3, 1) && !func_73(iParam0->f_3, 32))
	{
		func_185(&(iParam0->f_171), iParam0->f_51, 0f, 0f, 0f, 25f, 25f, 6f, "Ambient Avoidance Wilderness & No Traffic");
	}
	else if (func_73(iParam0->f_3, 2) && !func_73(iParam0->f_3, 32))
	{
		func_185(&(iParam0->f_171), iParam0->f_51, 0f, 0f, 0f, 4f, 4f, 5f, "Ambient Avoidance Town & No Traffic");
	}
	else
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0->f_171, 2228255, 262144, 0, -1, -1, iParam0->f_175);
	_0x18262cafebb5fbe1(iParam0->f_171, 0, 0, 0, -1, -1, 0);
	if (bParam3)
	{
		func_186(iParam0->f_171, 1);
	}
	if (func_73(iParam0->f_3, 1))
	{
		func_185(&(iParam0->f_174), iParam0->f_51, 0f, 0f, 0f, _0x3e2a25b2416dd67e(iParam0->f_171) * Vector(3.5f, 3.5f, 3.5f), "Predator Stay Out");
		func_187(iParam0->f_174, 0, 262144, 0, 0);
	}
	if (iParam2 == 0)
	{
	}
	else if (does_entity_exist(iParam2))
	{
		_0x7c00cfc48a782dc0(iParam0->f_171, iParam2, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
}

float func_75(vector3 vParam0)
{
	vVar0 = { Global_36 - vParam0 };
	return get_heading_from_vector_2d(vVar0.x, vVar0.y);
}

bool func_76(int iParam0)
{
	if (iParam0 == -1)
	{
		return true;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = func_189(func_188());
	if (func_3(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_3(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_3(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_3(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_3(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_3(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_3(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_3(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_3(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_3(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_3(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_3(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_3(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_3(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_3(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_3(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_3(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

bool func_77(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_78(vector3 vParam0, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, float fParam9)
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
		if (func_190() || !func_191((*iParam4)[iVar0], (*iParam5)[iVar0], vParam0, uParam3, iParam6, fParam9))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_79()
{
	if (func_50(iVar577, 536870912))
	{
		if (has_model_loaded(iVar698))
		{
			iLocal_699 = create_object_no_offset(iVar698, func_192(iVar736, iVar735), false, true, false, true);
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_54(&(uLocal_528[iVar0]), 0, 1))
		{
			vVar1 = { Local_208[iVar0]->f_6 };
			func_193(&vVar1, Local_208[iVar0]->f_22);
			func_194(&(uLocal_528[iVar0]), &Local_14, 0);
			set_ped_path_can_use_climbovers(&(uLocal_528[iVar0]), false);
			_0x6569f31a01b4c097(&(uLocal_528[iVar0]), 4, 0);
			if (Local_208[iVar0]->f_12 != 0)
			{
				uLocal_532[iVar0] = Local_208[iVar0]->f_11;
				vVar1 = { Local_208[iVar0]->f_15 };
				func_193(&vVar1, Local_208[iVar0]->f_22);
				if (!is_entity_dead(Local_208[iVar0]->f_11))
				{
					_set_entity_coords_and_heading(Local_208[iVar0]->f_11, vVar1, Local_208[iVar0]->f_18, true, false, true);
				}
				set_blocking_of_non_temporary_events(Local_208[iVar0]->f_11, true);
				set_animal_tuning_bool_param(Local_208[iVar0]->f_11, 48, true);
				if (iVar0 < 2)
				{
					set_ped_config_flag(Local_208[iVar0]->f_11, 6, true);
				}
			}
			else
			{
				func_195(&(Local_208[iVar0]->f_11));
			}
			if (iVar0 < 2)
			{
				func_196(&(Local_14.f_5), &(uLocal_528[iVar0]), Local_208[iVar0]->f_11, 0);
				remove_all_ped_weapons(&(uLocal_528[iVar0]), true, true);
				func_197(&(uLocal_528[iVar0]), -1101297303, -1, 0, 0, 1056964608, 1065353216, 0);
				func_199(func_198(Local_208[iVar0]->f_1), &(uLocal_528[iVar0]));
				set_ped_firing_pattern(&(uLocal_528[iVar0]), -687903391);
				set_ped_accuracy(&(uLocal_528[iVar0]), 15);
				set_ped_combat_range(&(uLocal_528[iVar0]), 0);
				set_ped_combat_movement(&(uLocal_528[iVar0]), 2);
				set_ped_combat_attributes(&(uLocal_528[iVar0]), 93, true);
				set_ped_config_flag(&(uLocal_528[iVar0]), 233, true);
				set_ped_config_flag(&(uLocal_528[iVar0]), 6, true);
			}
		}
		iVar0++;
	}
	func_200(&(uLocal_528[0]), &(Local_208[0]->f_23), 0);
	func_200(&(uLocal_528[1]), &(Local_208[1]->f_23), 0);
	func_200(&(uLocal_528[2]), &(Local_208[2]->f_23), 0);
	set_ped_config_flag(&(uLocal_528[2]), 406, true);
}

void func_80(var uParam0, int iParam1, char* sParam2, var uParam3, float fParam4, int iParam5, float fParam6, float fParam7)
{
	func_201(uParam0, iParam1, sParam2, vVar0, uParam3, fParam4, iParam5, iParam5, -1f, fParam6, 1127481344, fParam7);
}

void func_81(int iParam0, int iParam1)
{
	func_202(iParam0, iParam1);
}

void func_82(int iParam0, int iParam1)
{
	vVar0 = { func_203(iParam0) };
	iVar3 = func_156(iParam0->f_3, iParam1);
	iParam0->f_185 = iParam1;
	_0xca41e86545413b5b(7, 1221649453, -585414509, iVar3, vVar0);
	if (_0x01f4d242765c6b24(iVar3))
	{
		iParam0->f_186 = 1;
	}
}

void func_83(int iParam0, var uParam1)
{
	if (iParam0->f_2 >= *uParam1)
	{
		if (iParam0->f_2 > iParam0->f_98)
		{
		}
		iParam0->f_2 = 0;
	}
	if (does_entity_exist(uParam1[iParam0->f_2]))
	{
		iParam0->f_98[iParam0->f_2] = get_distance_between_coords(get_entity_coords(uParam1[iParam0->f_2], false, false), Global_36, true);
	}
	else
	{
		iParam0->f_98[iParam0->f_2] = 0f;
	}
}

void func_84(var uParam0)
{
	func_43(uParam0, 1);
	func_204(uParam0, 20);
}

void func_85(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_86(int iParam0, int iParam1)
{
	if (!func_184(iParam0))
	{
		return false;
	}
	return ((*Global_1310750)[iParam0]->f_1 && iParam1) != 0;
}

void func_87(int iParam0, var uParam1, int iParam2, int* iParam3)
{
	if (!func_184(iParam2))
	{
		return;
	}
	if (*uParam1)
	{
		return;
	}
	if (func_205())
	{
		func_206(1);
	}
	func_207(iParam2, iParam0->f_43);
	func_208(iParam2, 0, 0, 0, 0);
	if (func_209(iParam2) != -1)
	{
		_set_weather_type_frozen(true);
	}
	start_audio_scene("RE_active_location_scene");
	_0x1096603b519c905f(func_147(iParam0->f_3));
	if (does_blip_exist(*iParam3))
	{
		remove_blip(iParam3);
	}
	func_210(iParam0, 1, 0);
	*uParam1 = 1;
}

void func_88(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0]->f_7 = 0f;
		(*uParam0)[iVar0]->f_8 = 0f;
		iVar0++;
	}
}

void func_89(int iParam0, int iParam1, float fParam2)
{
	bVar0 = false;
	if (iParam0->f_178 && func_211())
	{
		bVar0 = true;
	}
	if (!iParam0->f_48 && !func_86(iParam0->f_3, 262144))
	{
		if (iParam0->f_5 & 2048 != 0)
		{
			func_87(iParam0, &(iParam0->f_48), iParam0->f_3, &(iParam0->f_51.f_6));
			func_88(&(iParam0->f_121));
			return;
		}
		if (_does_volume_exist(iParam0->f_173))
		{
			if (!func_212(Global_35, iParam0->f_173, 1, 0))
			{
				return;
			}
		}
		fVar1 = func_213(iParam0, bVar0);
		func_214(iParam0->f_121[iParam1], fVar1, 1082130432, 0, 90f, 0, &(iParam0->f_98[iParam1]));
		if (func_215(&(iParam0->f_121), iParam0->f_120, fParam2))
		{
			func_87(iParam0, &(iParam0->f_48), iParam0->f_3, &(iParam0->f_51.f_6));
			func_88(&(iParam0->f_121));
		}
	}
}

bool func_90(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	fVar0 = 30f;
	fVar1 = 150f;
	if (func_73(iParam2->f_3, 1))
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
			if (func_216())
			{
				fVar0 = 15f;
			}
		}
		if (func_217(iParam2, fVar0))
		{
			*uParam1 = 1;
		}
	}
	if (!iParam2->f_48)
	{
		if (!bParam3 && func_218(player_id(), 1, 0, 1))
		{
			return false;
		}
		if (!func_217(iParam2, fVar1))
		{
			if (!func_76((*Global_1310750)[iParam2->f_3]->f_38))
			{
				return false;
			}
		}
		if (!func_219(iParam2->f_3, 2) && func_220(2))
		{
			return false;
		}
		if (func_73(iParam0, 4194304) || func_73(iParam0, 33554432))
		{
			if (func_221(1))
			{
				return false;
			}
		}
	}
	if (func_222(Global_35))
	{
		return false;
	}
	if (func_223(0, 1, 1) && !func_224(iParam0))
	{
		return false;
	}
	if (!*uParam1 && func_73(iParam0, 128))
	{
		if (is_player_riding_train(player_id()))
		{
			return false;
		}
		if (func_225(Global_35, 0))
		{
			return false;
		}
		if (Global_16)
		{
			return false;
		}
		if (func_218(player_id(), 1, 0, 1))
		{
			return false;
		}
		if (func_226())
		{
			return false;
		}
		iVar2 = func_227(func_2());
		if (func_228(iVar2))
		{
			if (func_229(Global_36, iVar2))
			{
				return false;
			}
		}
		if (func_230(Global_36) && !iParam2->f_161)
		{
			return false;
		}
		if (!iParam2->f_48)
		{
			if (func_231(&(iParam2->f_91), 0, 1084227584, 1, 1))
			{
				return false;
			}
		}
	}
	return true;
}

void func_91(int iParam0, int iParam1)
{
	if (func_232(iParam0->f_51))
	{
		func_233(iParam0->f_51, 0);
		fVar0 = func_234(iParam0->f_3);
		iVar2 = _create_volume_cylinder_with_custom_name(iParam0->f_51, 0f, 0f, 0f, fVar0, fVar0, fVar0, func_235());
		bVar1 = func_152(!func_73(iParam0->f_3, 1), 20f, -1f);
		iParam0->f_51.f_11 = func_237(iVar2, func_236(iParam0->f_3), 1, iParam1, 8, 0, bVar1);
	}
}

bool func_92()
{
	if (does_entity_exist(Local_208[Local_14]->f_11))
	{
		if (is_entity_dead(Local_208[Local_14]->f_11))
		{
			return true;
		}
	}
	bVar0 = false;
	if (&Local_14.f_98[0] < 20f)
	{
		if (func_3(Local_14.f_5.f_1, 1024))
		{
			func_238(&(Local_14.f_5), 1);
		}
	}
	else if (!func_3(Local_14.f_5.f_1, 1024))
	{
		func_238(&(Local_14.f_5), 0);
	}
	switch (iVar586)
	{
		case 0:
			bVar0 = func_239(&(uLocal_528[0]), 0, &(Local_14.f_5), &uLocal_716, 0, &(Local_14.f_98[0]));
			break;
		case 1:
			bVar0 = func_239(&(uLocal_528[1]), 0, &(Local_14.f_5), &uLocal_716, 0, &(Local_14.f_98[1]));
			break;
		case 2:
			bVar0 = func_239(&(uLocal_528[2]), 0, &(Local_14.f_5), &uLocal_716, 0, &(Local_14.f_98[2]));
			break;
		case 3:
			bVar0 = func_239(&(uLocal_532[0]), 0, &(Local_14.f_5), &uLocal_716, 0, 0);
			break;
		case 4:
			bVar0 = func_239(&(uLocal_528[0]), 0, &(Local_14.f_5), &uLocal_716, 0, &(Local_14.f_98[0]));
			break;
		case 5:
			bVar0 = func_239(&(uLocal_528[1]), 0, &(Local_14.f_5), &uLocal_716, 0, &(Local_14.f_98[1]));
			break;
		case 6:
			bVar0 = func_239(&(uLocal_528[2]), 0, &(Local_14.f_5), &uLocal_716, 0, &(Local_14.f_98[2]));
			break;
		case 7:
			bVar0 = func_239(&(uLocal_532[1]), 0, &(Local_14.f_5), &uLocal_716, 0, 0);
			break;
	}
	if (bVar0)
	{
		if (func_54(&(uLocal_532[0]), 0, 1) && _0x268b3aebf032a88d(&(uLocal_532[0])))
		{
			set_blocking_of_non_temporary_events(&(uLocal_532[0]), false);
		}
		if (func_54(&(uLocal_532[1]), 0, 1) && _0x268b3aebf032a88d(&(uLocal_532[1])))
		{
			set_blocking_of_non_temporary_events(&(uLocal_532[1]), false);
		}
		return true;
	}
	return false;
}

bool func_93(var uParam0)
{
	return func_240(*uParam0, 1);
}

void func_94(var uParam0, bool bParam1)
{
	if (bParam1 || !func_93(uParam0))
	{
		func_125(uParam0);
	}
}

bool func_95(var uParam0, float fParam1)
{
	if (!func_93(uParam0))
	{
		return false;
	}
	if (func_241(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_96(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && does_entity_exist(iParam2))
	{
		if (!func_242(iParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_243(fParam0))
	{
		return false;
	}
	return true;
}

void func_97(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
	}
	if (uParam0->f_1 != 0)
	{
		remove_shocking_event(uParam0->f_1);
		uParam0->f_1 = 0;
	}
	func_244(uParam0->f_2);
	func_244(uParam0->f_3);
	uParam0->f_5 = -1f;
	uParam0->f_6 = -1f;
	uParam0->f_8 = -1f;
	uParam0->f_12 = "";
	func_125(&(uParam0->f_9));
	func_111(&(uParam0->f_9));
	*uParam0 = 0;
}

bool func_98(int iParam0, int iParam1, char* sParam2, var uParam3, float fParam4, bool bParam5)
{
	if (does_entity_exist(iParam0))
	{
		if (!bParam5 || !is_entity_dead(iParam0))
		{
			if (has_anim_event_fired(iParam0, iParam1))
			{
				return true;
			}
		}
	}
	return false;
}

int func_99()
{
	fVar12 = func_245();
	vVar0 = { get_entity_coords(&(uLocal_528[2]), false, true) };
	vVar3 = { _get_object_offset_from_coords(vVar0, fVar12, 0f, 50f, 0f) };
	vVar9 = { _get_object_offset_from_coords(vVar0, fVar12, 50f, -50f, 0f) };
	vVar6 = { _get_object_offset_from_coords(vVar0, fVar12, -50f, -50f, 0f) };
	if (func_246(vVar0, vVar3, Global_36))
	{
		if (func_246(vVar0, vVar6, Global_36))
		{
			return 1;
		}
		else
		{
			return 3;
		}
	}
	else if (func_246(vVar0, vVar9, Global_36))
	{
		return 2;
	}
	else
	{
		return 1;
	}
	return 1;
}

bool func_100(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, bool bParam5, int iParam6)
{
	if (func_247(iParam0, iParam1, sParam2, iParam3, fParam4, bParam5, iParam6 == 0))
	{
		return true;
	}
	return false;
}

void func_101(int iParam0, int iParam1)
{
	func_102(uLocal_580[iParam0], iParam1);
}

void func_102(var uParam0, int iParam1)
{
	func_248(uParam0, iParam1);
}

void func_103(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_249((*uParam0)[iVar0]->f_6))
			{
				if (!bParam4 && is_bit_set(uParam0[iVar0], 11))
				{
				}
				else
				{
					func_250(&((*uParam0)[iVar0]->f_6), 1, 1);
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

void func_104(var uParam0, int iParam1)
{
	stop_current_playing_ambient_speech(uParam0, iParam1);
	stop_current_playing_speech(uParam0, iParam1);
}

void func_105(var uParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		func_251(uParam0);
		func_252(iParam1, uParam2);
	}
	func_253(*uParam0, 1, bParam4);
}

void func_106()
{
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (func_54(&(uLocal_528[iVar0]), 0, 0))
		{
			func_254(iVar0);
		}
		iVar0++;
	}
}

void func_107(int iParam0)
{
	iLocal_712 = iParam0;
}

void func_108()
{
	switch (iVar586)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 1)
			{
				iLocal_546[iVar0] = func_255(&(iLocal_540[iVar0]), Global_36);
				iVar0++;
			}
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < 1)
			{
				iLocal_548[iVar0] = func_255(&(iLocal_542[iVar0]), Global_36);
				iVar0++;
			}
			break;
		case 2:
			if (!func_50(iVar577, 2097152))
			{
				if (_0x854bc9b1a1ccd034(-1073596206, &(uLocal_528[2])))
				{
					func_28(&uLocal_579, 2097152, 0);
				}
			}
			break;
		case 3:
			func_256();
			break;
		case 4:
			if (iVar521 == 1)
			{
				func_257(iVar320, "PBL_MAIN");
			}
			break;
		case 5:
			if (iVar521 == 1)
			{
				func_257(iVar320, "PBL_PUNCH");
			}
			break;
		case 6:
			if (iVar521 == 1)
			{
				func_257(iVar320, "PBL_PUNCH2");
			}
			break;
	}
	iLocal_588 = iVar586 + 1;
	if (iVar586 > 7)
	{
		bLocal_551 = _0x8d81e7824b7753f7(iVar320, "Base", 1);
		iLocal_588 = 0;
	}
}

int func_109(var uParam0, bool bParam1)
{
	if (func_258())
	{
		if (func_259(&(uLocal_528[1]), 1, 1, 1, 0, 0))
		{
			if (!func_50(iVar575, 67108864))
			{
				func_260(0, 1);
				func_28(&uLocal_579, 67108864, 0);
			}
		}
		else if (func_50(iVar575, 67108864))
		{
			func_81(&uLocal_579, 67108864);
		}
	}
	if (fVar589 > 20f)
	{
		*uParam0 = 1;
		return -1;
	}
	if (!Local_14.f_48)
	{
		*uParam0 = 1;
		return -1;
	}
	if (bParam1)
	{
		fVar0 = 20f;
		fVar1 = 2f;
	}
	else
	{
		if (fVar735 > 15f)
		{
			fVar0 = (fVar735 + 1f);
		}
		else
		{
			fVar0 = 15f;
		}
		fVar1 = 2f;
	}
	iVar2 = -1;
	iVar5 = 524288 | func_261(3, 0, 0);
	iVar4 = 0;
	while (iVar4 <= 1)
	{
		if (!does_entity_exist(&(uLocal_528[iVar4])))
		{
		}
		else
		{
			iVar3 = func_262(uLocal_528[iVar4], Local_407[iVar4], fVar0, &Local_471, &(Local_14.f_192), fVar1, 1, 0, "", iVar5, 0, 0, 2, 1, -1082130432, 0);
			if (func_263(Local_407[iVar4]))
			{
				if (!bVar699)
				{
					if (Local_407[iVar4]->f_1 == 0)
					{
						if (bParam1)
						{
							if (!func_50(iVar575, 262144))
							{
								func_28(&uLocal_579, 262144, 0);
							}
						}
						else if (!func_50(iVar575, 524288))
						{
							func_264(Local_471[0], 1, 1);
							func_265(0, 0);
							func_28(&uLocal_579, 524288, 0);
						}
					}
					else if (Local_407[iVar4]->f_1 == 1)
					{
						if (!bParam1)
						{
							func_264(Local_471[0], 1, 1);
							func_264(Local_471[1], 1, 1);
						}
					}
					if (Local_407[iVar4]->f_1 != -1)
					{
						func_260(0, 0);
						iLocal_702 = Global_35;
						func_125(&uLocal_637);
						if (!func_54(&(uLocal_528[2]), 0, 1))
						{
							func_104(&(uLocal_528[0]), 200);
						}
						func_104(&(uLocal_528[1]), 300);
						iLocal_703 = 1;
					}
				}
			}
			if (iVar3 != -1)
			{
				iVar2 = iVar3;
				switch (iVar2)
				{
					case 1:
						func_121(0);
						iLocal_703 = 0;
						iLocal_702 = Global_35;
						iLocal_710 = iVar706 + 1;
					case 0:
						iLocal_703 = 0;
						iLocal_702 = Global_35;
						if (bParam1)
						{
							if (!func_50(iVar575, 262144))
							{
								func_121(0);
								func_28(&uLocal_579, 262144, 0);
							}
						}
						else if (!func_50(iVar575, 131072))
						{
							func_28(&uLocal_579, 131072, 0);
						}
						else
						{
							func_28(&uLocal_579, 524288, 0);
						}
						break;
				}
			}
		}
		iVar4++;
	}
	*uParam0 = 1;
	if (iVar2 != -1)
	{
	}
	return iVar2;
}

void func_110(bool bParam0, bool bParam1)
{
	if (func_54(&(uLocal_528[1]), 0, 0))
	{
		set_ped_config_flag(&(uLocal_528[2]), 301, true);
		switch (iVar519)
		{
			case 1:
				if (bParam1)
				{
					sVar0 = "RE_FOOTR_VAL_V1_GREET_RPOS";
					sVar1 = "RE_FOOTR_VAL_V1_GREET_RNEG";
				}
				else
				{
					sVar0 = "RE_FOOTR_VAL_V1_GREET_PCALL";
					sVar1 = "RE_FOOTR_VAL_V1_GREET_CALL";
				}
				break;
			case 2:
				if (bParam1)
				{
					sVar0 = "RE_FOOTR_RHD_V1_GREET_RPOS";
					sVar1 = "RE_FOOTR_RHD_V1_GREET_RNEG";
				}
				else
				{
					sVar0 = "RE_FOOTR_RHD_V1_GREET_PCALL";
					sVar1 = "RE_FOOTR_RHD_V1_GREET_CALL";
				}
				break;
		}
		if (bParam0)
		{
			if (bParam1 && fVar735 >= 0f)
			{
				sVar2 = func_266(8);
			}
			else
			{
				sVar2 = func_266(7);
			}
		}
		if (bParam1)
		{
			if (func_54(&(uLocal_528[2]), 0, 0))
			{
				sVar3 = func_266(10);
			}
			else
			{
				sVar3 = func_266(10);
			}
		}
		else if (func_54(&(uLocal_528[2]), 0, 0))
		{
			sVar3 = func_266(26);
		}
		else
		{
			sVar3 = func_266(10);
		}
		if (!is_string_null_or_empty(sVar2))
		{
			func_267(Local_471[0], sVar2, sVar0, -163964935, 0, 0, 0, 0, 0);
		}
		if (!is_string_null_or_empty(sVar3))
		{
			func_267(Local_471[1], sVar3, sVar1, 648122183, 0, 0, 0, 0, 0);
		}
		iVar4 = 0;
		while (iVar4 < iVar403)
		{
			func_268(Local_407[iVar4], Local_471[1]);
			iVar4++;
		}
	}
}

void func_111(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_112()
{
	if (iVar521 == 1)
	{
		start_anim_scene(iVar320);
		_set_anim_scene_playback_list_bool(iVar320, "PBL_MAIN", true);
	}
	else
	{
		start_anim_scene(iVar320);
		_set_anim_scene_playback_list_bool(iVar320, "PBL_ACTION", true);
		start_anim_scene(Local_322.f_1);
		_set_anim_scene_playback_list_bool(Local_322.f_1, "PBL_ACTION", true);
	}
}

int func_113()
{
	return Global_1897952->f_41;
}

void func_114(var uParam0, var uParam1, vector3 vParam2, vector3 vParam5, vector3 vParam8, bool bParam11, int iParam12, bool bParam13, int iParam14, char* sParam15)
{
	if (!_does_volume_exist(*uParam0))
	{
		if (bParam11)
		{
			if (is_string_null_or_empty(sParam15))
			{
				func_269(uParam0, vParam2, vParam5, vParam8);
			}
			else
			{
				func_270(uParam0, vParam2, vParam5, vParam8, sParam15);
			}
		}
		else if (is_string_null_or_empty(sParam15))
		{
			func_271(uParam0, vParam2, vParam5, vParam8);
		}
		else
		{
			func_272(uParam0, vParam2, vParam5, vParam8, sParam15);
		}
	}
	if (_does_volume_exist(*uParam0))
	{
		_0x18262cafebb5fbe1(*uParam0, iParam12, 0, 0, -1, -1, 0);
		_0xb56d41a694e42e86(*uParam0, iParam12, 0, 0, -1, -1, iParam14);
		if (bParam13)
		{
			*uParam1 = _0x4c39c95ae5db1329(*uParam0, 0, 15);
		}
	}
}

void func_115(int iParam0)
{
	func_273();
	func_274(iParam0);
	if (func_275())
	{
		func_276(0);
		return;
	}
	if (Local_14.f_48)
	{
		if (bVar548)
		{
			if (func_277())
			{
				func_27(1);
				func_26(iVar319, "PBL_MAIN", 1);
				func_107(3);
				func_125(&uLocal_717);
			}
			else
			{
				func_94(&uLocal_606, 0);
				if (func_278(&(uLocal_528[0]), "BasePunch", 1067030938))
				{
					func_279();
				}
				if (func_95(&uLocal_606, 45f))
				{
					if (func_280())
					{
						func_281();
						func_6();
					}
				}
			}
		}
	}
}

void func_116()
{
	if (func_282())
	{
		set_anim_scene_bool(iVar320, "loop_bool", true, false);
		set_anim_scene_bool(Local_322.f_1, "loop_bool", true, false);
		func_111(&uLocal_606);
		func_107(3);
	}
	else if (Local_14.f_48)
	{
		func_94(&uLocal_606, 0);
		if (func_95(&uLocal_606, 45f))
		{
			if (func_280())
			{
				func_281();
				func_6();
			}
		}
	}
}

void func_117()
{
	if (Local_14.f_48)
	{
		if (!does_blip_exist(&(uLocal_536[2])))
		{
			if (func_242(&(uLocal_528[2]), 0))
			{
				func_283(&(uLocal_528[2]), uLocal_536[2], -1749618580, 580546400, 0, 0);
			}
		}
	}
}

void func_118(int iParam0)
{
	func_274(iParam0);
	if (func_275())
	{
		func_276(1);
		return;
	}
	if (func_284())
	{
		func_264(Local_471[0], 1, 1);
		func_81(&uLocal_579, 131072);
		func_110(0, 1);
		func_18(0);
		func_107(4);
	}
}

void func_119(int iParam0)
{
	func_285();
	func_286();
	func_287();
	func_288();
	if (!func_53(1, 256))
	{
		func_289(iParam0);
	}
	if (!func_50(iVar576, 256))
	{
		if (func_290())
		{
			_set_anim_scene_playback_list_bool(iVar319, "PBL_QUICK", true);
			_set_anim_scene_playback_list_bool(Local_322.f_1, "PBL_QUICK", true);
			set_anim_scene_bool(iVar319, "ACTION_BOOL", true, false);
			set_anim_scene_bool(Local_322.f_1, "ACTION_BOOL", true, false);
			func_28(&uLocal_579, 256, 0);
		}
		else if (Local_14.f_48)
		{
			func_94(&uLocal_606, 0);
			if (func_95(&uLocal_606, 45f))
			{
				if (func_280())
				{
					func_281();
					func_6();
				}
			}
		}
	}
	else if (!func_53(2, 8))
	{
		if (func_98(&(uLocal_528[2]), 946063681, "bKnockedOut", uVar0, -0.8f, 1))
		{
			if (does_blip_exist(&(uLocal_536[2])))
			{
				func_52(uLocal_536[2]);
			}
			func_101(2, 8);
			func_110(1, 1);
			if (iVar707 < 1)
			{
				if (!func_50(iVar576, 262144))
				{
					func_28(&uLocal_579, 262144, 0);
				}
				if (!func_50(iVar576, 1024))
				{
					func_28(&uLocal_579, 1024, 0);
				}
				iLocal_710 = 1;
			}
		}
	}
	else
	{
		if (!func_53(2, 32))
		{
			if (func_98(&(uLocal_528[2]), -668065476, "bGroundBreakout", uVar0, 1.6f, 1))
			{
				func_101(2, 32);
			}
		}
		else if (!func_53(2, 64))
		{
			if (!func_98(&(uLocal_528[2]), -668065476, "bGroundBreakout", uVar0, 1.6f, 1))
			{
				if (_0x3ab6c7b0bb0df4b1(&(uLocal_528[2]), iVar319))
				{
					func_101(2, 64);
				}
			}
		}
		if (func_291(iParam0))
		{
			func_81(&uLocal_579, 131072);
			func_110(0, 1);
			func_264(Local_471[0], 1, 1);
			func_17(1094713344);
			iLocal_403 = 2;
			func_107(4);
		}
	}
}

bool func_120(int iParam0)
{
	if (!func_54(&(uLocal_528[0]), 0, 1) || !func_54(&(uLocal_528[1]), 0, 1))
	{
		return false;
	}
	if (iParam0 == 1)
	{
		if (!func_292(0, 2048))
		{
			func_293(0, 2048);
		}
	}
	if ((func_292(0, 2048) || iVar707 >= 2) && func_96(0, 1, Global_35, 1))
	{
		if (!func_294(iVar575, 512))
		{
			if (func_296(0, Global_35, func_295(0), 42f, 1, 1744022339, 1))
			{
				func_297(&uLocal_578, 512, 0);
			}
			else if (func_296(1, Global_35, func_295(1), 42f, 1, 1744022339, 1))
			{
				func_297(&uLocal_578, 512, 0);
			}
		}
		func_28(&uLocal_579, 16, 0);
		func_298(0, 2048);
		return false;
	}
	if (iVar400 > 0)
	{
		func_299();
	}
	switch (iVar400)
	{
		case 0:
			func_23();
			Local_14.f_50 = 1;
			func_80(Local_358[0], 67779789, "deadDisturbing", &(uLocal_528[2]), 8f, 12f, -1082130432, 0);
			func_300(1);
			break;
		case 1:
			if (func_301(0) && func_301(1))
			{
				vVar1 = { func_302(0) };
				open_sequence_task(&iVar0);
				if (!func_77(vVar1))
				{
					task_follow_nav_mesh_to_coord(0, vVar1, 1f, 20000, 1f, 1, 40000f);
				}
				task_mount_animal(0, Local_208[0]->f_11, -1, -1, 1f, 1, 0, 0);
				func_146(&(uLocal_528[0]), &iVar0, 0, 0, 1, 1);
				set_ped_config_flag(&(uLocal_528[0]), 167, true);
				vVar1 = { func_302(1) };
				open_sequence_task(&iVar0);
				if (!func_77(vVar1))
				{
					task_follow_nav_mesh_to_coord(0, vVar1, 1f, 20000, 1f, 1, 40000f);
				}
				task_mount_animal(0, Local_208[1]->f_11, -1, -1, 1f, 1, 0, 0);
				func_146(&(uLocal_528[1]), &iVar0, 0.75f, 0, 1, 1);
				set_ped_config_flag(&(uLocal_528[1]), 167, true);
				func_300(2);
			}
			else
			{
				func_300(3);
			}
			break;
		case 2:
			if (is_ped_on_mount(&(uLocal_528[0])) && is_ped_on_mount(&(uLocal_528[1])))
			{
				set_ped_config_flag(&(uLocal_528[2]), 243, false);
				func_300(3);
			}
			break;
		case 3:
			vVar8 = { func_144() };
			vVar5 = { func_145() };
			if (is_ped_on_mount(&(uLocal_528[0])) && is_ped_on_mount(&(uLocal_528[1])))
			{
				fVar4 = 2f;
				open_sequence_task(&iVar0);
				if (!func_77(vVar8))
				{
					task_follow_nav_mesh_to_coord(0, vVar8, 1.5f, 20000, 4f, 0, 40000f);
				}
				_task_move_in_traffic_2(0, vVar5, 5f, fVar4, 0, 0);
				func_146(&(uLocal_528[0]), &iVar0, 0, 0, 1, 1);
				open_sequence_task(&iVar0);
				if (!func_77(vVar8))
				{
					task_follow_nav_mesh_to_coord(0, vVar8, 1.5f, 20000, 4f, 0, 40000f);
				}
				_task_move_in_traffic_2(0, vVar5, 5f, fVar4, 0, 0);
				func_146(&(uLocal_528[1]), &iVar0, 0.5f, 0, 1, 1);
				set_ped_relationship_group_hash(&(uLocal_528[0]), -401180987);
				set_ped_relationship_group_hash(&(uLocal_528[1]), -401180987);
				func_300(4);
			}
			break;
		case 4:
			if (func_303(&(uLocal_528[0]), func_145(), 0) < 4f || func_303(&(uLocal_528[1]), func_145(), 0) < 4f)
			{
				switch (func_113())
				{
					case 9:
						func_304(&(uLocal_528[0]), 36, 0, 1);
						func_304(&(uLocal_528[1]), 36, 0, 1);
						break;
					case 11:
						if (func_305() != 3)
						{
							func_304(&(uLocal_528[0]), 9, 0, 1);
							func_304(&(uLocal_528[1]), 9, 0, 1);
						}
						else
						{
							func_304(&(uLocal_528[0]), 5, 0, 1);
							func_304(&(uLocal_528[1]), 5, 0, 1);
						}
						break;
				}
				func_300(5);
			}
			break;
		case 5:
			return true;
	}
	return false;
}

void func_121(bool bParam0)
{
	if (!func_50(iVar576, 1048576))
	{
		if (func_54(&(uLocal_528[2]), 0, 1))
		{
			if (bParam0 || func_95(&uLocal_603, 1f))
			{
				if (func_54(&(uLocal_528[2]), 0, 1) && !func_53(2, 8))
				{
					if (!_0x3ec28da1ffac9ddd(&(uLocal_528[2]), Global_35, 1, 1) && !_is_ped_lassoed(&(uLocal_528[2])))
					{
						func_306(12, 0, 0, "RE_HONOR_INTERVENED", 0, 0, 1065353216, 0);
					}
					func_28(&uLocal_579, 1048576, 0);
				}
			}
		}
	}
}

bool func_122()
{
	if (!func_93(&uLocal_720))
	{
		func_125(&uLocal_720);
	}
	if (func_2() == 105)
	{
		bVar0 = func_307(&Local_14, &uLocal_528, 0, 1);
		if (!func_308(1024))
		{
			if (bVar0)
			{
				func_309(1024);
			}
		}
		else if (!bVar0)
		{
			func_63(1024);
		}
	}
	func_94(&uLocal_603, 0);
	if (&iLocal_729[0] >= 2 && &iLocal_729[1] >= 2)
	{
		func_310();
	}
	get_current_ped_weapon(Global_35, &iVar3, true, 0, false);
	func_311();
	iVar4 = 0;
	while (iVar4 <= 1)
	{
		if (!&iLocal_743[iVar4])
		{
			if (does_entity_exist(&(uLocal_528[iVar4])))
			{
				if (func_312(&(uLocal_528[iVar4])))
				{
					func_105(uLocal_528[iVar4], Local_407[iVar4], &Local_471, 1, 1);
					iLocal_743[iVar4] = 1;
				}
			}
			else
			{
				iLocal_743[iVar4] = 1;
			}
		}
		iVar4++;
	}
	if (iVar521 == 2)
	{
		if (func_294(iVar576, 256))
		{
			if (!func_294(iVar576, 32768))
			{
				if (func_96(-4f, 1, 0, 0))
				{
					func_313(0);
					func_313(1);
					func_313(2);
					if (func_54(&(uLocal_528[0]), 0, 0))
					{
						if (!func_294(iVar576, 512))
						{
							func_296(0, Global_35, func_295(0), -1082130432, 1, 1744022339, 1);
						}
					}
					else if (func_54(&(uLocal_528[1]), 0, 0))
					{
						if (!func_294(iVar576, 512))
						{
							func_296(1, Global_35, func_295(1), -1082130432, 1, 1744022339, 1);
						}
					}
					func_297(&uLocal_578, 32768, 0);
				}
			}
		}
	}
	if (func_50(iVar577, 4194304))
	{
		if (func_314())
		{
			func_6();
		}
	}
	iVar2 = 0;
	while (iVar2 < 3)
	{
		if (func_54(&(uLocal_528[iVar2]), 0, 1))
		{
			switch (iVar2)
			{
				case 0:
					switch (&iLocal_729[iVar2])
					{
						case 0:
							if (iVar521 == 1)
							{
								if (func_315(&uLocal_720) > 3f || (func_315(&uLocal_720) > 0.6f && (func_50(iVar577, 4) || func_50(iVar577, 2))))
								{
									if (func_50(iVar577, 65536))
									{
										if (func_100(&(uLocal_528[iVar2]), iVar320, "Odriscoll01", 0, 0.915f, 1, 0))
										{
											func_316(iVar2, 2);
										}
									}
									else
									{
										func_316(iVar2, 1);
									}
								}
							}
							else
							{
								func_317(iVar2, "thug_A");
								if (func_100(&(uLocal_528[iVar2]), iVar320, "thug_A", 0, 0, 1, 0) || !_0x3ab6c7b0bb0df4b1(&(uLocal_528[2]), iVar320))
								{
									func_316(iVar2, 2);
								}
							}
							break;
						case 1:
							if (func_318(&(Local_14.f_5)) != &uLocal_528[iVar2])
							{
								if (!func_93(vLocal_612[iVar2]))
								{
									func_94(vLocal_612[iVar2], 0);
									task_react(&(uLocal_528[iVar2]), Global_35, Global_36, "Default_Shocked", 0.5f, 0, 4);
								}
								else if (func_95(vLocal_612[iVar2], 0.49f) || has_entity_been_damaged_by_any_ped(&(uLocal_528[iVar2])))
								{
									func_316(iVar2, 2);
								}
							}
							else
							{
								func_316(iVar2, 2);
							}
							break;
						case 2:
							if (func_319())
							{
								func_320(iVar2);
								func_316(iVar2, 10);
							}
							else
							{
								func_321(iVar2);
								func_316(iVar2, 3);
							}
							break;
						case 3:
							if (iVar3 != -1569615261 && !func_77(*Local_330[iVar2]))
							{
								if (func_315(&uLocal_720) > 1f)
								{
									func_94(&(Local_330[iVar2]->f_4), 0);
									set_ped_sphere_defensive_area(&(uLocal_528[iVar2]), *Local_330[iVar2], Local_330[iVar2]->f_3, 1, 0, 0);
									func_316(iVar2, 4);
								}
							}
							break;
						case 4:
							if (&Local_14.f_98[iVar2] > 25f)
							{
								remove_ped_defensive_area(&(uLocal_528[iVar2]), false);
								set_ped_combat_movement(&(uLocal_528[iVar2]), 2);
								set_ped_combat_range(&(uLocal_528[iVar2]), 0);
								func_316(iVar2, 5);
							}
							break;
						case 5:
							break;
					}
					break;
				case 1:
					switch (&iLocal_729[iVar2])
					{
						case 0:
							if (iVar521 == 1)
							{
								if (!is_entity_playing_anim(&(uLocal_528[iVar2]), &(Local_305[4]), Local_305[4]->f_1, 1) && (!func_50(iVar577, 65536) || func_100(&(uLocal_528[iVar2]), iVar320, "Odriscoll02", 0, 0, 1, 0)))
								{
									if (func_319())
									{
										func_320(iVar2);
										func_316(iVar2, 10);
									}
									else
									{
										if (!_0x3ab6c7b0bb0df4b1(&(uLocal_528[iVar2]), iVar320))
										{
											clear_ped_secondary_task(&(uLocal_528[iVar2]));
										}
										func_321(iVar2);
										func_316(iVar2, 1);
									}
								}
							}
							else if (func_100(&(uLocal_528[iVar2]), Local_322.f_1, "thug_B", 0, 0, 1, 0) && !is_entity_playing_anim(&(uLocal_528[iVar2]), &(Local_305[4]), Local_305[4]->f_1, 1))
							{
								if (func_319())
								{
									func_320(iVar2);
									func_316(iVar2, 10);
								}
								else
								{
									func_321(iVar2);
									func_316(iVar2, 1);
								}
							}
							break;
						case 1:
							if (iVar3 != -1569615261 && !func_77(*Local_330[iVar2]))
							{
								if (func_315(&uLocal_720) > 1f)
								{
									func_94(&(Local_330[iVar2]->f_4), 0);
									set_ped_sphere_defensive_area(&(uLocal_528[iVar2]), *Local_330[iVar2], Local_330[iVar2]->f_3, 1, 0, 0);
									func_316(iVar2, 2);
								}
							}
							if (!is_ped_in_combat(&(uLocal_528[iVar2]), 0) && func_322(&(uLocal_528[iVar2]), Global_35, 2f, 1))
							{
								if (!func_124(&(uLocal_528[iVar2]), -2055662961))
								{
									task_melee(&(uLocal_528[iVar2]), Global_35, 0, 1, 1, 1065353216, 1, -1082130432);
								}
							}
							break;
						case 2:
							if (&Local_14.f_98[iVar2] > 25f)
							{
								remove_ped_defensive_area(&(uLocal_528[iVar2]), false);
								set_ped_combat_movement(&(uLocal_528[iVar2]), 2);
								set_ped_combat_range(&(uLocal_528[iVar2]), 0);
								func_316(iVar2, 3);
							}
							break;
						case 3:
							break;
					}
					break;
				case 2:
					switch (&iLocal_729[iVar2])
					{
						case 0:
							if (iVar521 == 1)
							{
								if (func_50(iVar577, 2) || _0x8d81e7824b7753f7(iVar320, "Exit", 1))
								{
									if (func_98(&(uLocal_528[2]), -1562170454, "bKOPunchHit", uVar1, 1067030938, 1))
									{
										task_knocked_out(&(uLocal_528[2]), 100f, 0);
									}
									else if (func_323())
									{
										func_52(uLocal_536[2]);
										func_324(&(uLocal_528[iVar2]), 1, 1);
										func_316(iVar2, 10);
									}
									else if (func_100(&(uLocal_528[2]), iVar320, "Victim", 0, 0, 1, 0) || !_0x0b7cb1300cbfe19c(&(uLocal_528[2]), 1))
									{
										func_325(&(uLocal_528[iVar2]), 1);
										func_326(uLocal_528[iVar2]);
										func_316(iVar2, 1);
									}
								}
								else if (func_100(&(uLocal_528[2]), iVar320, "Victim", 0, 0, 1, 0) || !_0x0b7cb1300cbfe19c(&(uLocal_528[2]), 1))
								{
									func_325(&(uLocal_528[iVar2]), 1);
									func_326(uLocal_528[iVar2]);
									func_316(iVar2, 1);
								}
							}
							else
							{
								func_317(iVar2, "vic");
								if (func_100(&(uLocal_528[iVar2]), iVar320, "vic", 0, 0, 1, 0))
								{
									if (iVar402 != 0)
									{
										func_325(&(uLocal_528[iVar2]), 1);
										func_326(uLocal_528[iVar2]);
										func_316(iVar2, 1);
									}
									else
									{
										func_325(&(uLocal_528[iVar2]), 1);
										func_326(uLocal_528[iVar2]);
										func_316(iVar2, 1);
									}
									func_316(iVar2, 1);
								}
								else if (iVar402 == 0)
								{
									if (!func_53(2, 8))
									{
										if (!func_53(iVar2, 512))
										{
											func_325(&(uLocal_528[iVar2]), 1);
											func_326(uLocal_528[iVar2]);
											func_316(iVar2, 1);
										}
									}
									else if (func_53(2, 64))
									{
										func_325(&(uLocal_528[iVar2]), 1);
										func_316(iVar2, 10);
									}
									else if (func_98(&(uLocal_528[2]), -668065476, "bGroundBreakout", uVar1, 1.6f, 1))
									{
										_set_anim_scene_playback_list_bool(iVar320, "PBL_BRKOUT_GROUND", true);
										func_316(iVar2, 2);
									}
								}
							}
							break;
						case 1:
							if (func_327())
							{
								_0xde7b2b4144906cdf(-1073596206, &(uLocal_528[iVar2]));
								func_52(uLocal_536[iVar2]);
								_0x16f798a05bb9e3b5(&(uLocal_528[2]));
								_task_smart_flee_style_ped(&(uLocal_528[iVar2]), Global_35, 3, 4096, -1082130432, -1, 0);
								set_ped_keep_task(&(uLocal_528[2]), true);
								func_28(&uLocal_579, 1, 0);
								func_316(2, 10);
							}
							break;
						case 2:
							if (func_100(&(uLocal_528[iVar2]), iVar320, "vic", 0, 0, 1, 0))
							{
								func_325(&(uLocal_528[iVar2]), 1);
								func_326(uLocal_528[iVar2]);
								func_316(iVar2, 1);
							}
							break;
					}
					break;
			}
		}
		iVar2++;
	}
	if (!func_54(&(uLocal_528[0]), 0, 1) && !func_54(&(uLocal_528[1]), 0, 1))
	{
		func_328(&(uLocal_528[0]), 0);
		func_328(&(uLocal_528[1]), 0);
		return true;
	}
	else if (!func_54(&(uLocal_528[2]), 8, 1))
	{
		if (func_54(&(uLocal_528[2]), 0, 1))
		{
			task_knocked_out(&(uLocal_528[2]), 5f, 0);
		}
	}
	return false;
}

bool func_123()
{
	if (!bVar707)
	{
		return true;
	}
	if (func_329(&uLocal_704))
	{
		return true;
	}
	else if (func_330(&uLocal_704, &uLocal_528, 0, 2, 0f, 0))
	{
		func_51(&uLocal_704);
		iVar0 = func_163(func_113(), 0, 0, 0);
		sVar1 = func_332(&uLocal_704, iVar0, func_331(iVar0, 1), 1);
		func_333(Global_35, Global_35, sVar1, -1082130432, 0, 1808677283, 1);
		return true;
	}
	return false;
}

bool func_124(int iParam0, int iParam1)
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

void func_125(var uParam0)
{
	func_334(uParam0, 0f);
}

int func_126()
{
	if (_0xb086c8c0f5701d14(&(uLocal_528[2])))
	{
		_0x16f798a05bb9e3b5(&(uLocal_528[2]));
	}
	if (!func_292(0, 1024))
	{
		if (func_54(&(uLocal_528[0]), 0, 1) && func_54(&(uLocal_528[0]), 8, 1))
		{
			func_335(&(uLocal_528[0]), 0, 0, 0);
			func_293(0, 1024);
		}
	}
	if (!func_292(1, 1024))
	{
		if (func_54(&(uLocal_528[1]), 0, 1) && func_54(&(uLocal_528[1]), 8, 1))
		{
			func_335(&(uLocal_528[1]), 0, 0, 0);
			func_293(1, 1024);
		}
	}
	if ((!func_54(&(uLocal_528[2]), 0, 1) && !func_124(&(uLocal_528[2]), 1313215416)) || func_50(iVar577, 1))
	{
		func_336(0);
		func_56();
		return 1;
	}
	if (iVar404 <= 2)
	{
		if (func_127(Global_35, &(uLocal_528[2]), 1, 1) > 25f)
		{
			if (iVar404 <= 0)
			{
				_0x89f5e7adecccb49c(&(uLocal_528[2]), "Default_Nervous");
			}
			func_56();
			vLocal_640 = { func_337() };
			task_follow_nav_mesh_to_coord(&(uLocal_528[2]), vLocal_640, 1f, -1, 0.25f, 2097152, 40000f);
			func_338(10);
		}
	}
	switch (iVar521)
	{
		case 1:
			return func_339();
		case 2:
			return func_340();
	}
	return 0;
}

float func_127(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_128()
{
	if (!func_341(Global_1395482->f_1))
	{
		return false;
	}
	return func_342(Global_1395482->f_1, 32);
}

bool func_129(int iParam0)
{
	if (func_73(iParam0, 1))
	{
		return false;
	}
	return (1 == func_343(iParam0) || 2 == func_343(iParam0));
}

float func_130(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

void func_131(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_137(&(iParam0->f_1), 128);
	}
	else
	{
		func_85(&(iParam0->f_1), 128);
	}
}

void func_132(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_85(iParam0, 256);
	}
	else
	{
		func_137(iParam0, 256);
	}
}

void func_133(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_85(iParam0, 268435456);
	}
	else
	{
		func_137(iParam0, 268435456);
	}
	if (!bParam2)
	{
		func_85(iParam0, 1073741824);
	}
	else
	{
		func_137(iParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_85(iParam0, 536870912);
	}
	else
	{
		func_137(iParam0, 536870912);
	}
}

var func_134(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_135(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return _create_var_string(2, func_344(sParam1));
}

float func_136(int iParam0)
{
	return iParam0->f_24;
}

void func_137(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

bool func_138(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_139(int iParam0, int iParam1)
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
	if (func_138(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_138(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_138(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_138(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_138(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_138(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_138(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_138(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_140(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (!is_entity_a_ped(iParam0))
	{
		return;
	}
	iVar0 = get_ped_index_from_entity_index(iParam0);
	_0x6569f31a01b4c097(iVar0, 0, iParam1);
	_0x6569f31a01b4c097(iVar0, 1, iParam1);
}

void func_141(var uParam0)
{
	if (_0x927b810e43e99932(uParam0))
	{
		_0x0a5a4f1979abb40e(uParam0);
	}
	_0x798be43c9393632b(uParam0);
}

void func_142(int iParam0, bool bParam1)
{
	if (is_entity_dead(iParam0))
	{
	}
	_0xaac0ee3b4999abb5(iParam0, 0);
	_0x9e66708b2b41f14a(iParam0, -1);
	if (bParam1)
	{
		clear_ped_secondary_task(iParam0);
	}
	if (is_ped_a_player(iParam0))
	{
		set_ped_config_flag(iParam0, 43, false);
	}
	else
	{
		_0x15f4732c357b1d6d(iParam0, player_id(), 6);
	}
}

void func_143(int iParam0, bool bParam1)
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

Vector3 func_144()
{
	func_11(&Local_14, &iVar0, &iVar1);
	switch (iVar0)
	{
		case 9:
			switch (iVar1)
			{
				case 0:
					vVar2 = { -264.6443f, 772.0397f, 116.958f };
					break;
				case 1:
					vVar2 = { -337.1412f, 786.4087f, 114.9143f };
					break;
			}
			break;
		case 11:
			switch (iVar1)
			{
				case 0:
					vVar2 = { 1366.95f, -1353.452f, 76.83144f };
					break;
				case 1:
					vVar2 = { 1357.912f, -1351.177f, 77.08829f };
					break;
				case 2:
					vVar2 = { 1442.785f, -1419.796f, 78.29624f };
					break;
			}
			break;
	}
	return vVar2;
}

Vector3 func_145()
{
	func_11(&Local_14, &iVar0, &iVar1);
	switch (iVar0)
	{
		case 11:
			switch (iVar1)
			{
				case 0:
					return 1396.492f, -1416.994f, 78.70442f;
				case 1:
					return 1372.029f, -1370.639f, 77.48544f;
				case 2:
					return 1445.512f, -1435.908f, 76.91522f;
				default:
					break;
			}
			return 0f, 0f, 0f;
		case 9:
			return -262.3312f, 801.4066f, 117.6557f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_146(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

char* func_147(int iParam0)
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

void func_148(int iParam0, int iParam1)
{
	if (!func_184(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_1 = ((*Global_1310750)[iParam0]->f_1 || iParam1);
}

void func_149(int iParam0, bool bParam1)
{
	if (func_54(iParam0, 0, 1))
	{
		set_blocking_of_non_temporary_events(iParam0, false);
		func_345(iParam0, 1088421888, 0, 0);
		if (!bParam1)
		{
			set_ped_as_no_longer_needed(&iParam0);
		}
	}
}

bool func_150(int iParam0, var uParam1)
{
	if (func_73(iParam0->f_3, 16777216))
	{
		if (func_346(*uParam1) != -1 || get_entity_model(*uParam1) == 1478983280)
		{
			return true;
		}
	}
	return false;
}

void func_151(var uParam0)
{
	set_ped_config_flag(*uParam0, 6, false);
	set_ped_config_flag(*uParam0, 4, false);
	set_ped_config_flag(*uParam0, 494, true);
}

float func_152(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_153(int iParam0, int iParam1, float fParam2, int iParam3, bool bParam4)
{
	if (!Global_1935630->f_12 && (!bParam4 || func_54(iParam0, 0, 1)))
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
			fVar2 = func_152(fParam2 >= 0f, fParam2, vdist(get_entity_coords(iParam0, true, false), Global_36));
			if (fVar2 > 25f && is_entity_occluded(iParam0))
			{
				func_195(&iParam0);
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

void func_154(int iParam0)
{
	if (_does_volume_exist(iParam0->f_171))
	{
		func_347(iParam0->f_171);
		_0xa1cfb35069d23c23(iParam0->f_171);
		_0x74c2b3dc0b294102(iParam0->f_171);
	}
	if (iParam0->f_51.f_7 != 0)
	{
		destroy_tracked_point(iParam0->f_51.f_7);
		iParam0->f_51.f_7 = 0;
	}
	func_348(iParam0);
	func_349(iParam0);
	func_350(iParam0);
	if (!func_351(iParam0))
	{
		if (_0xf6a8a652a6b186cd(iParam0->f_51.f_11))
		{
			_0xfdfecc6ee4491e11(iParam0->f_51.f_11);
		}
		func_233(iParam0->f_51, 0);
	}
	if (does_blip_exist(iParam0->f_51.f_6))
	{
		remove_blip(&(iParam0->f_51.f_6));
	}
	if (iParam0->f_48)
	{
		func_352();
	}
	if (!func_353(iParam0->f_3) && !func_73(iParam0->f_3, 256))
	{
		func_354(iParam0->f_3, 1, 0, 15, 0, 0, 0, 1);
	}
	func_244(iParam0->f_173);
	func_244(iParam0->f_172);
}

void func_155(int iParam0)
{
	if (does_blip_exist(iParam0->f_181))
	{
		remove_blip(&(iParam0->f_181));
	}
}

int func_156(int iParam0, int iParam1)
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

void func_157(int iParam0, int iParam1, int iParam2)
{
	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_355() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	_0xd5910ecf81a2278c(iParam0, iParam1, iParam2, &vVar0);
}

void func_158(var uParam0)
{
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

int func_161(int iParam0)
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

int func_162(bool bParam0)
{
	if (bParam0)
	{
		return func_356(Global_1359489->f_4);
	}
	get_group_size(func_357(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = get_ped_as_group_member(func_357(), iVar3);
		if (func_358(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

int func_163(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	bVar0 = (func_359() && !bParam2);
	switch (iParam0)
	{
		case 15:
		case 16:
			return 5;
		case 3:
		case 9:
			return 0;
		case 1:
			if (!bVar0 && !bParam1)
			{
				return 0;
			}
			else
			{
				return 4;
			}
			break;
		case 10:
			return 1;
		case 4:
		case 12:
			if (bVar0 || bParam1)
			{
				return 3;
			}
			break;
		case 0:
		case 11:
			return 2;
		case 5:
			if (bVar0 || bParam1)
			{
				return 3;
			}
			break;
	}
	return -1;
}

void func_164(int iParam0, int iParam1)
{
	iParam0->f_177 = iParam1;
}

void func_165(var uParam0)
{
	func_102(uParam0, 256);
}

int func_166(int iParam0, int iParam1, int iParam2)
{
	iVar2 = 0;
	iVar1 = func_360(iParam0);
	if ((func_3(iParam2, 1) || iParam1 >= iVar1) || iParam1 < 0)
	{
		iVar0 = get_random_int_in_range(0, iVar1);
	}
	else
	{
		iVar0 = iParam1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					iVar2 = -247265944;
					break;
				case 1:
					iVar2 = 1696286663;
					break;
				case 2:
					iVar2 = -1038436471;
					break;
				case 3:
					iVar2 = -85890205;
					break;
				case 4:
					iVar2 = -727455979;
					break;
				case 5:
					iVar2 = -1679658797;
					break;
				default:
					if (func_14())
					{
						iVar2 = -247265944;
					}
					else
					{
						iVar2 = 1696286663;
					}
					break;
			}
			break;
		case 2:
			switch (iVar0)
			{
				case 0:
					iVar2 = 1072019803;
					break;
				case 1:
					iVar2 = -1038436471;
					break;
				case 2:
					iVar2 = -1261814606;
					break;
				case 3:
					iVar2 = -1554827654;
					break;
				default:
					if (func_14())
					{
						iVar2 = -1038436471;
					}
					else
					{
						iVar2 = 1072019803;
					}
					break;
			}
			break;
		case 3:
			switch (iVar0)
			{
				case 0:
					iVar2 = 2024948086;
					break;
				case 1:
					iVar2 = -1265030920;
					break;
				case 2:
					iVar2 = 937246805;
					break;
				case 3:
					iVar2 = -1599683008;
					break;
				case 4:
					iVar2 = -450053710;
					break;
				default:
					if (func_14())
					{
						iVar2 = 2024948086;
					}
					else
					{
						iVar2 = -1265030920;
					}
					break;
			}
			break;
		case 4:
			switch (iVar0)
			{
				case 0:
					iVar2 = 1230359523;
					break;
				case 1:
					iVar2 = 96930969;
					break;
				case 2:
					iVar2 = -586898625;
					break;
				case 3:
					iVar2 = 36009259;
					break;
				default:
					if (func_14())
					{
						iVar2 = 1230359523;
					}
					else
					{
						iVar2 = 96930969;
					}
					break;
			}
			break;
		case 5:
			switch (iVar0)
			{
				case 0:
					iVar2 = -727455979;
					break;
				case 1:
					iVar2 = 2119038574;
					break;
				case 2:
					iVar2 = -1180427609;
					break;
				case 3:
					iVar2 = -1250098797;
					break;
				default:
					if (func_14())
					{
						iVar2 = -727455979;
					}
					else
					{
						iVar2 = 2119038574;
					}
					break;
			}
			break;
		case 1:
			switch (iVar0)
			{
				case 0:
					iVar2 = 917402668;
					break;
				case 1:
					iVar2 = -914712122;
					break;
				case 2:
					iVar2 = -598917269;
					break;
				case 3:
					iVar2 = -598917269;
					break;
				default:
					iVar2 = 917402668;
					break;
			}
			break;
		case 10:
			switch (iVar0)
			{
				case 0:
					iVar2 = -1250098797;
					break;
				case 1:
					iVar2 = 2130094044;
					break;
				case 2:
					iVar2 = 1861665605;
					break;
				case 3:
					iVar2 = -1924405794;
					break;
				case 4:
					iVar2 = -1180427609;
					break;
				default:
					iVar2 = -1250098797;
					break;
			}
			break;
		default:
			iVar2 = -1038436471;
			break;
	}
	return iVar2;
}

void func_167(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		func_361(&((*iParam0)[iVar0]->f_1));
		func_361(&((*iParam0)[iVar0]->f_12));
		iVar0++;
	}
}

char* func_168(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "script_re@foot_robbery";
		case 3:
			return "script_re@foot_robbery";
		case 4:
			return "script_re@foot_robbery";
		case 5:
			return "script_re@foot_robbery";
		case 7:
			return "AMB_REST@WORLD_HUMAN_BADASS@MALE_A@base";
		case 6:
			return "script_re@foot_robbery@leymone";
		default:
			break;
	}
	return "";
}

bool func_169(var uParam0)
{
	if (!func_362(uParam0->f_1))
	{
		return false;
	}
	if (uParam0->f_12 != 0)
	{
		if (!func_362(uParam0->f_12))
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

Vector3 func_170(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return 0f, 0f, 0f;
	}
	if (!func_184(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (func_363(iParam0) == 0)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = (func_364(iParam0) + iParam1);
	if (iVar0 >= 892)
	{
		return 0f, 0f, 0f;
	}
	return *Global_1310750->f_13358[iVar0];
}

void func_171(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_73(iParam0, 32))
	{
		if (func_365(iParam0, uParam1->f_4, &(uParam1->f_12)))
		{
			if (bParam4)
			{
				vVar1 = { func_366(Global_35, &(uParam1->f_12)) };
				if (!func_77(vVar1))
				{
					*uParam1 = { vVar1 };
				}
			}
		}
	}
	if (bParam2)
	{
		func_367(uParam1, bParam2);
	}
	if (bParam3)
	{
		fVar4 = func_234(iParam0);
		iVar0 = _create_volume_cylinder_with_custom_name(*uParam1, 0f, 0f, 0f, fVar4, fVar4, fVar4, func_235());
		if (func_368(Global_1310750[iParam0], 33554432))
		{
			func_237(iVar0, func_236(iParam0), 1, 0, 2, 0, -1082130432);
		}
		else
		{
			func_237(iVar0, func_236(iParam0), 1, 0, 8, 0, -1082130432);
		}
		if (func_73(iParam0, 1))
		{
			func_369(*uParam1 + Vector(1f, 0f, 0f), 25f, "Beat Inner", 1, 0, 32, 0, -1082130432);
		}
	}
	func_370(iParam0);
}

bool func_172(int iParam0, var uParam1)
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
			func_371(uParam1, *(*Global_1310750)[iParam0]->f_4.f_4[iVar0]);
		}
		iVar0++;
	}
	if (func_86(iParam0, 16))
	{
		_0xb8e3486d107f4194(*uParam1, 55f);
		_0x827a58ced9d4d5b4(*uParam1, 180f);
		fVar2 = to_float(func_372(iParam0));
		fVar1 = 60f;
	}
	else
	{
		_0x65d281985f2bdfc2(*uParam1, 35f);
		_0x827a58ced9d4d5b4(*uParam1, 65f);
		fVar2 = to_float(func_372(iParam0));
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

void func_173(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4)
{
	switch (func_373(iParam0))
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
			if (!func_73(iParam0, 1))
			{
				if (func_86(iParam0, 2))
				{
				}
			}
			func_374(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		case 2:
			func_375(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		case 3:
			func_375(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = 7f;
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		default:
			break;
	}
	if (func_129(iParam0))
	{
		*fParam2 = 40000f;
	}
}

Vector3 func_174(bool bParam0, int iParam1, var uParam2, var uParam3)
{
	fVar7 = 999999.9f;
	fVar8 = 0f;
	*bParam0 = 1;
	iVar0 = 0;
	while (iVar0 < func_363(iParam1))
	{
		if (!func_376(iParam1, iVar0))
		{
			vVar4 = { func_170(iParam1, iVar0) };
			if (!func_77(vVar4))
			{
				fVar8 = vdist(Global_36, vVar4);
				if (func_179(fVar8, iParam1))
				{
					*bParam0 = 0;
				}
				if (fVar8 < fVar7)
				{
					if (func_377(iParam1, vVar4, uParam2, uParam3))
					{
						fVar7 = vdist(Global_36, vVar4);
						vVar1 = { vVar4 };
					}
				}
			}
		}
		iVar0++;
	}
	if (!func_77(vVar4))
	{
	}
	return vVar1;
}

int func_175(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, int iParam5)
{
	if (uParam0->f_8 >= iParam4)
	{
		if (bParam3)
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_33("BEAT_FAIL", 5000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam2 = 1;
	}
	*uParam1 = iParam5;
	uParam0->f_8++;
	return 0;
}

int func_176(int iParam0, vector3 vParam1)
{
	iVar0 = 0;
	while (iVar0 < func_363(iParam0))
	{
		vVar1 = { func_170(iParam0, iVar0) };
		if (func_378(vVar1, vParam1, 1056964608, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_177(var uParam0)
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

int func_178(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	vVar2 = { *uParam0 };
	func_379(Global_35, *uParam0, &(uParam0->f_37), 1061158912, 0, 0);
	if (func_380(&(uParam0->f_37), 500))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!func_77(*uParam0->f_12[iVar0]))
			{
				vVar5 = { *uParam0->f_12[iVar0] };
				vVar8 = { _0x83acc65d9acec5ef(Global_36, vVar2, vVar5, true) };
				if (vdist2(Global_36, vVar8) <= (35f * 35f) || vdist2(Global_36, *uParam0->f_12[iVar0]) <= (80f * 80f))
				{
					if (bParam4)
					{
						iVar1 = func_381(uParam0);
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
	return func_175(uParam0, uParam1, uParam2, bParam3, 16, 1000);
}

bool func_179(float fParam0, int iParam1)
{
	fVar3 = (fParam0 * fParam0);
	func_173(iParam1, &fVar0, &fVar1, &uVar2, 1);
	if (fVar3 > fVar1)
	{
		return false;
	}
	if (func_73(iParam1, 1))
	{
		if (fVar3 < fVar0)
		{
			return false;
		}
	}
	return true;
}

bool func_180(var uParam0, bool bParam1)
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

bool func_181(int iParam0, var uParam1, var uParam2, struct<7> Param3, bool bParam10)
{
	if (func_382(iParam0, *uParam2))
	{
		return false;
	}
	if (!func_383(iParam0, uParam2))
	{
		return false;
	}
	if (!func_384(Param3))
	{
		return false;
	}
	if (bParam10)
	{
		if (!func_385(*uParam2, Global_35))
		{
			return false;
		}
	}
	return true;
}

int func_182(int iParam0)
{
	return iParam0->f_51.f_4;
}

bool func_183(int iParam0, int iParam1, var uParam2)
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

bool func_184(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_185(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = _create_volume_cylinder_with_custom_name(vParam1, vParam4, vParam7, sParam10);
}

void func_186(int iParam0, int iParam1)
{
	if (func_386(iParam0))
	{
		return;
	}
	if (func_387(iParam0) == iParam1)
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

void func_187(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 0);
	if (bParam3)
	{
		func_137(&iParam1, 8192);
	}
	if (bParam4)
	{
		_0x2161278c6322f740(iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, iParam0);
	}
}

int func_188()
{
	return &Global_1899515;
}

int func_189(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

bool func_190()
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

bool func_191(var uParam0, var uParam1, vector3 vParam2, float fParam5, bool bParam6, int iParam7)
{
	if (!does_entity_exist(*uParam1) && uParam0->f_1 != 0)
	{
		if (!does_entity_exist(uParam0->f_11) && uParam0->f_12 != 0)
		{
			if (has_model_loaded(uParam0->f_12))
			{
				Var2 = { func_388(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
				Var2.f_3 = func_389(fParam5, uParam0->f_18, uParam0->f_19);
				uParam0->f_11 = func_390(uParam0->f_12, uParam0, Var2, Var2.f_3, 1, 1, uParam0->f_14, 0, 1);
				if (func_391(uParam0->f_1, 1))
				{
					if (does_entity_exist(uParam0->f_11))
					{
						func_328(uParam0->f_11, 0);
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
					Var2 = { func_388(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
					Var2.f_3 = func_389(fParam5, uParam0->f_18, uParam0->f_19);
				}
				else
				{
					bVar1 = (bParam6 || func_392(&(uParam0->f_22)));
					Var2 = { func_388(vParam2, fParam5, uParam0->f_6, bVar1) };
					Var2.f_3 = func_389(fParam5, uParam0->f_9, bVar1);
				}
				*uParam1 = func_390(uParam0->f_1, uParam0, Var2, Var2.f_3, iParam7, _is_this_model_a_horse(uParam0->f_1), uParam0->f_14, 0, 1);
				set_ped_config_flag(*uParam1, 307, true);
				if (!is_entity_dead(*uParam1))
				{
					if (bVar0)
					{
						func_393(*uParam1, uParam0->f_11, 1, -1, 1);
					}
					if (!is_string_null_or_empty(&(uParam0->f_23)))
					{
						func_200(*uParam1, &(uParam0->f_23), 0);
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

Vector3 func_192(int iParam0, int iParam1)
{
	vVar0 = { 0f, 0f, 0f };
	if (iParam0 == 9)
	{
		if (iParam1 == 0)
		{
			vVar0 = { -297.809f, 737.8043f, 117.6715f };
		}
		else
		{
			vVar0 = { -362.8885f, 833.2094f, 115.816f };
		}
	}
	else
	{
		vVar0 = { 1331.628f, -1366.815f, 78.85887f };
	}
	if (func_77(vVar0))
	{
	}
	return vVar0;
}

int func_193(var uParam0, var uParam1)
{
	vVar0 = { *uParam0 };
	if (func_394(&uParam1))
	{
		return 1;
	}
	if (!func_395(&vVar0, 1, 10, 0))
	{
		return 0;
	}
	*uParam0 = { vVar0 };
	return 1;
}

int func_194(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return 0;
	}
	if (func_396(iParam0, &(iParam1->f_121)))
	{
		iParam1->f_120++;
		return 1;
	}
	return 0;
}

void func_195(int* iParam0)
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

void func_196(var uParam0, int iParam1, int iParam2, int iParam3)
{
	func_397(uParam0, iParam1, iParam3);
	func_398(uParam0, iParam2, iParam3);
}

int func_197(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bVar0 = func_399(iParam3, 1);
	bVar1 = func_399(iParam3, 2);
	bVar2 = !func_399(iParam3, 4);
	bVar3 = func_399(iParam3, 8);
	bVar4 = !func_399(iParam3, 16);
	bVar5 = func_399(iParam3, 32);
	bVar6 = func_399(iParam3, 64);
	return func_400(iParam0, iParam1, bVar0, bVar1, iParam4, bVar2, bVar3, iParam5, iParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

int func_198(int iParam0)
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

void func_199(int iParam0, int iParam1)
{
	if (!func_54(iParam1, 0, 0))
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			set_ped_accuracy(iParam1, 20);
			fVar0 = get_combat_float(iParam1, 1);
			fVar0 = (fVar0 * get_random_float_in_range(0.8f, 1.2f));
			set_combat_float(iParam1, 1, fVar0);
			iVar1 = get_random_int_in_range(80, 110);
			set_ped_shoot_rate(iParam1, iVar1);
			fVar0 = get_combat_float(iParam1, 3);
			fVar0 = (fVar0 * get_random_float_in_range(0.8f, 1.25f));
			set_combat_float(iParam1, 1, fVar0);
			break;
		case 1:
			set_ped_accuracy(iParam1, 15);
			set_ped_combat_attributes(iParam1, 30, false);
			break;
	}
}

void func_200(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || func_54(iParam0, 0, 0))
	{
		decor_set_bool(iParam0, "HAS_VOICE", true);
		set_ambient_voice_name(iParam0, sParam1);
	}
}

void func_201(var uParam0, int iParam1, char* sParam2, vector3 vParam3, int iParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, bool bParam13)
{
	func_97(uParam0, 1);
	uParam0->f_12 = sParam2;
	uParam0->f_5 = fParam8;
	uParam0->f_6 = fParam9;
	*uParam0 = iParam1;
	uParam0->f_8 = fParam7;
	StringCopy(&cVar4, sParam2, 32);
	Var0 = { cVar4 };
	if (!func_77(vParam3))
	{
	}
	if (fParam8 > 0f)
	{
		StringConCat(&Var0, "Vis", 32);
		uParam0->f_2 = _create_volume_sphere_with_custom_name(vParam3, 0f, 0f, 0f, fParam8, fParam8, fParam8, &Var0);
	}
	else
	{
		uParam0->f_2 = _create_volume_cylinder_with_custom_name(vParam3, 0f, 0f, 0f, 1f, 1f, 3f, &cVar4);
	}
	if (fParam9 > 0f && fParam9 != fParam8)
	{
		Var0 = { cVar4 };
		StringConCat(&Var0, "Aud", 32);
		uParam0->f_3 = _create_volume_sphere_with_custom_name(vParam3, 0f, 0f, 0f, fParam9, fParam9, fParam9, &Var0);
	}
	if (!func_77(vParam3))
	{
		uParam0->f_1 = add_shocking_event_at_position(iParam1, vParam3, fParam7, fParam8, fParam9, fParam10, fParam11, -1, -1);
	}
	else
	{
		if (_does_volume_exist(uParam0->f_2))
		{
			_0x7c00cfc48a782dc0(uParam0->f_2, iParam6, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
		}
		if (_does_volume_exist(uParam0->f_3))
		{
			_0x7c00cfc48a782dc0(uParam0->f_3, iParam6, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
		}
		uParam0->f_1 = add_shocking_event_for_entity(iParam1, iParam6, fParam7, fParam8, fParam9, fParam10, fParam11, fParam12, bParam13, false, -1, -1);
	}
}

void func_202(int iParam0, int iParam1)
{
	func_401(iParam0, iParam1);
}

Vector3 func_203(int iParam0)
{
	return iParam0->f_51;
}

void func_204(var uParam0, int iParam1)
{
	uParam0->f_21 = iParam1;
}

bool func_205()
{
	return &Global_1935436 == 2;
}

void func_206(int iParam0)
{
	if (iParam0 >= &Global_1935436)
	{
		return;
	}
	Global_1935436->f_1 = iParam0;
}

void func_207(int iParam0, int iParam1)
{
	if (get_random_event_flag())
	{
		return;
	}
	Global_17504.f_3++;
	Global_17504.f_42[iParam0]->f_1++;
	if (func_73(iParam0, 2))
	{
		func_403(iParam0, func_402(iParam1));
	}
	else
	{
		func_404(iParam0, func_113());
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
	func_405(iParam0, (*Global_1310750)[iParam0]->f_36, fVar0, 1, 0);
	func_406(iParam0, 0);
	func_407(iParam0);
	func_408(1);
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
	if (!func_73(iParam0, 16))
	{
		func_208(iParam0, 0, 0, 0, 0);
	}
}

void func_208(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (bParam1)
	{
	}
	if (func_409() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0];
		if (((func_184(iVar1) && !func_73(iVar1, iParam2)) && (!bParam3 || !func_224(iVar1))) && (!bParam4 || !func_410(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_411(iVar0);
			}
		}
		iVar0++;
	}
}

int func_209(int iParam0)
{
	return (*Global_1310750)[iParam0]->f_39;
}

void func_210(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0->f_177 != -1 || func_368(Global_1310750[iParam0->f_3], 16777216))
	{
		if (bParam2)
		{
			if (func_73(iParam0->f_3, 1073741824))
			{
				func_412(2, -1, 0, 0, 0);
			}
			else
			{
				func_412(1, -1, 0, 0, 0);
			}
		}
		else if (bParam1)
		{
			if (iParam0->f_45)
			{
				func_412(8, -1, 0, 0, 0);
			}
		}
		if (iParam0->f_177 != -1)
		{
			if (bParam2)
			{
				if (!func_413(1, iParam0->f_177))
				{
					func_414(16, iParam0->f_177);
					func_415(1, iParam0->f_177);
				}
				compendium_gang_encountered(func_416(iParam0->f_177));
			}
		}
	}
	else if (bParam2 || (bParam1 && iParam0->f_45))
	{
		func_412(8, -1, 0, 0, 0);
	}
}

bool func_211()
{
	if (func_417(Global_1935630->f_44))
	{
		if (_is_weapon_sniper(Global_1935630->f_44))
		{
			if (_0xa24c1d341c6e0d53(1, 1, 1))
			{
				if (is_player_free_aiming(player_id()))
				{
					return true;
				}
			}
		}
		else if (func_418())
		{
			return true;
		}
	}
	return false;
}

bool func_212(int iParam0, int iParam1, bool bParam2, int iParam3)
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

float func_213(int iParam0, bool bParam1)
{
	if (iParam0->f_119 == -1f)
	{
		if (func_73(iParam0->f_3, 1024))
		{
			fVar0 = 95f;
		}
		else if (func_73(iParam0->f_3, 2048))
		{
			fVar0 = 80f;
		}
		else if (func_73(iParam0->f_3, 4096))
		{
			fVar0 = 65f;
		}
		else if (func_73(iParam0->f_3, 8192))
		{
			fVar0 = 55f;
		}
		else if (func_73(iParam0->f_3, 16384))
		{
			fVar0 = 30f;
		}
		else
		{
			fVar0 = 85f;
		}
		if (func_73(iParam0->f_3, 1))
		{
		}
		else if (func_73(iParam0->f_3, 2))
		{
			fVar0 = (fVar0 - 15f);
		}
		iParam0->f_119 = fVar0;
	}
	fVar0 = iParam0->f_119;
	if (bParam1)
	{
		fVar0 = (fVar0 + 150f);
	}
	return fVar0;
}

int func_214(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, var uParam6)
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
			else if (func_419(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
					if (func_420(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
		uParam0->f_7 = (func_421() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

bool func_215(var uParam0, int iParam1, float fParam2)
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
	func_88(uParam0);
	return true;
}

bool func_216()
{
	return (Global_1894899 & 1 != 0 && func_2() != -1);
}

bool func_217(int iParam0, float fParam1)
{
	iVar0 = 0;
	while (iVar0 < iParam0->f_98)
	{
		if (&iParam0->f_98[iVar0] != 0f)
		{
			if (&iParam0->f_98[iVar0] < fParam1)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_218(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_422(bParam1, bParam2, bParam3);
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

bool func_219(int iParam0, int iParam1)
{
	return (func_209(iParam0) && iParam1) != 0;
}

bool func_220(int iParam0)
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
	if (iParam0 & 1 == 1 && func_423(iVar3))
	{
		return true;
	}
	if (iParam0 & 2 == 2 && func_424(iVar3))
	{
		return true;
	}
	if (iParam0 & 4 == 4 && func_425(iVar3))
	{
		return true;
	}
	if (iParam0 & 8 == 8 && func_426(iVar3))
	{
		return true;
	}
	if (iParam0 & 16 == 16 && func_427(iVar3))
	{
		return true;
	}
	if (iParam0 & 32 == 32 && func_428(iVar3))
	{
		return true;
	}
	if (iParam0 & 64 == 64 && func_429(iVar3))
	{
		return true;
	}
	return false;
}

bool func_221(bool bParam0)
{
	if (func_430(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_222(int iParam0)
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

bool func_223(int iParam0, bool bParam1, bool bParam2)
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
		if (func_431())
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
		iVar0 = func_432(&(Global_1898164->f_1[0]));
		if (func_433(iVar0) && func_434((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_435(&(Global_1898164->f_1[0])))
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

bool func_224(int iParam0)
{
	if (!func_184(iParam0))
	{
		return false;
	}
	if (func_308(64) && func_436(iParam0))
	{
		return true;
	}
	return (*Global_1310750)[iParam0]->f_46;
}

bool func_225(int iParam0, bool bParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_ped_injured(iParam0) || !bParam1)
		{
			iVar0 = get_interior_from_entity(iParam0);
			if (is_valid_interior(iVar0))
			{
				if (func_437(iVar0) || func_438(iVar0))
				{
					return false;
				}
				return true;
			}
		}
	}
	return false;
}

bool func_226()
{
	return Global_1894899 & 4 != 0;
}

int func_227(int iParam0)
{
	if (!func_439(iParam0))
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

bool func_228(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return false;
	}
	return true;
}

bool func_229(vector3 vParam0, int iParam3)
{
	if (!func_228(iParam3))
	{
		return false;
	}
	if (_does_volume_exist((*Global_1392194)[iParam3]->f_5))
	{
		return _0xf256a75210c5c0eb((*Global_1392194)[iParam3]->f_5, vParam0);
	}
	return false;
}

bool func_230(vector3 vParam0)
{
	if (func_77(vParam0))
	{
		return false;
	}
	fVar0 = func_152(func_216(), 6f, 22f);
	return _0x769bb7626b8cdb06(vParam0, fVar0, 1, 0, 16384);
}

bool func_231(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
						func_125(uParam0);
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
		func_125(uParam0);
		return true;
	}
	if (!bParam4)
	{
		if (!func_93(uParam0))
		{
			return false;
		}
		else if (is_scripted_speech_playing(Global_35) || is_any_speech_playing(Global_35))
		{
			return true;
		}
		if (!func_95(uParam0, fParam2))
		{
			return true;
		}
		if (func_93(uParam0))
		{
			func_111(uParam0);
		}
	}
	return false;
}

bool func_232(vector3 vParam0)
{
	return _0x769bb7626b8cdb06(vParam0, 0.5f, 0, 0, 16384);
}

void func_233(vector3 vParam0, int iParam3)
{
	if (func_77(vParam0))
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
			if (func_378(vVar2, vParam0, 2f, 1))
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

float func_234(int iParam0)
{
	if (!func_184(iParam0))
	{
		return 0f;
	}
	if (!func_440(iParam0))
	{
		return 0f;
	}
	return (*Global_1310750)[iParam0]->f_44;
}

char* func_235()
{
	return "unnamed";
}

char* func_236(int iParam0)
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

int func_237(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (!_does_volume_exist(iParam0))
	{
		return 0;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	vVar3 = { _0x3e2a25b2416dd67e(iParam0) };
	iVar6 = func_369(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

void func_238(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_137(&(uParam0->f_1), 1024);
	}
	else
	{
		func_85(&(uParam0->f_1), 1024);
	}
}

bool func_239(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > iParam2->f_5)
	{
		func_441(iParam2, 1, iVar0);
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
			if (func_442(iParam0, iParam2))
			{
				*uParam3 = 128;
				func_443(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (func_444(iParam0, iParam2))
				{
					*uParam3 = 8;
					func_443(iParam0, iParam2, *uParam3);
					return true;
				}
				else if (func_445(iParam0, iParam1, iParam2))
				{
					*uParam3 = 8;
					func_443(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (func_446(iParam0, iParam2))
				{
					*uParam3 = 64;
					func_443(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_26 && func_218(player_id(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_443(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_447(iParam2, 1065353216))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (func_448(Global_35, iParam0, iParam2))
					{
						*uParam3 = 4;
						func_443(iParam0, iParam2, *uParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (func_449(Global_35, iParam0, iParam2))
					{
						*uParam3 = 256;
						func_443(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_450(Global_35, iParam0, iParam2, 0))
				{
					*uParam3 = 16;
					func_443(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			else if (func_450(Global_35, iParam0, iParam2, 1))
			{
				*uParam3 = 16;
				func_443(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (func_451(iParam0, iParam2))
				{
					*uParam3 = 32;
					func_443(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || iParam2->f_12 < 20f)
			{
				if (func_452(&iParam0, iParam2))
				{
					*uParam3 = 4096;
					func_443(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (func_453(iParam2, 4000))
				{
					if ((func_454(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && func_455(iParam2, iParam0)) && func_456(iParam2, iParam0))
					{
						*uParam3 = 2;
						func_443(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((func_454(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && func_455(iParam2, iParam0)) && func_456(iParam2, iParam0))
				{
					*uParam3 = 2;
					func_443(iParam0, iParam2, *uParam3);
					return true;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (func_457(iParam0, Global_1935630->f_41))
							{
								func_458();
								*uParam3 = 2;
								func_443(iParam0, iParam2, *uParam3);
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
						if (func_457(iParam0, Global_1935630->f_41))
						{
							func_458();
							*uParam3 = 2;
							func_443(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (func_459(iParam2, iParam0) || (iParam2->f_9 > 0 && (func_460() - iParam2->f_9) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_458();
						*uParam3 = 2;
						func_443(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (func_461())
					{
						if (func_457(iParam0, Global_1935630->f_42))
						{
							func_458();
							*uParam3 = 2;
							func_443(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (func_462(iParam2, iParam0))
			{
				*uParam3 = 1024;
				func_443(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (func_463(iParam0, iParam1, iParam2))
				{
					*uParam3 = 2048;
					func_443(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (func_464(iParam0, iParam2))
					{
						*uParam3 = 8192;
						func_443(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (func_465(iParam0, iParam2))
				{
					*uParam3 = 32768;
					func_443(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (func_466(iParam2, 4000))
				{
					if (func_467(&iParam0, iParam2))
					{
						*uParam3 = 512;
						func_443(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (func_468(iParam0, iParam2))
				{
					*uParam3 = 65536;
					iParam2->f_4 = 0;
					func_443(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_469(iParam2, iParam0))
			{
				*uParam3 = 1;
				func_443(iParam0, iParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_240(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_241(var uParam0)
{
	if (!func_93(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_470(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_421() - uParam0->f_1);
}

bool func_242(int iParam0, bool bParam1)
{
	if (func_54(iParam0, 0, 1))
	{
		return (is_scripted_speech_playing(iParam0) || (bParam1 && is_any_speech_playing(iParam0)));
	}
	return false;
}

bool func_243(float fParam0)
{
	if (func_471(1))
	{
		return true;
	}
	if (func_93(&uLocal_0) && !func_472(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

void func_244(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

float func_245()
{
	return 175f;
}

bool func_246(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

bool func_247(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, bool bParam5, bool bParam6)
{
	if (is_entity_dead(iParam0) && bParam5)
	{
		return true;
	}
	if (!_does_anim_scene_exist(iParam1))
	{
		return true;
	}
	if (_is_anim_scene_finished(iParam1, false))
	{
		return true;
	}
	if (!_is_anim_scene_metadata_loaded(iParam1, false))
	{
		return true;
	}
	if (!is_string_null_or_empty(sParam2))
	{
		if (bParam6)
		{
			if (_0x73616e64696c616e(iParam1, sParam2, 1, 0))
			{
				return true;
			}
		}
		if (_0x005e6f28dd7ed58d(iParam1, sParam2) || _0xb89fcff19dafff28(iParam1, sParam2))
		{
			return true;
		}
	}
	if (iParam3 != 0 && has_anim_event_fired(iParam0, iParam3))
	{
		return true;
	}
	if (fParam4 > 0f && _get_anim_scene_progress(iParam1) >= fParam4)
	{
		return true;
	}
	return false;
}

void func_248(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_249(int iParam0)
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

void func_250(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_249(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_473(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_474(iVar0);
	*uParam0 = 0;
}

void func_251(var uParam0)
{
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		set_ped_config_flag(*uParam0, 297, false);
	}
}

void func_252(int* iParam0, var uParam1)
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
	func_475(iParam0, uParam1, 1);
	func_103(uParam1, 0, 1, 1, 0);
	_copy_memory(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		_copy_memory((*uParam1)[iVar0], &Var22, 17);
		iVar0++;
	}
}

void func_253(int iParam0, bool bParam1, bool bParam2)
{
	set_ped_config_flag(iParam0, 297, false);
	set_ped_config_flag(iParam0, 301, false);
	set_ped_config_flag(iParam0, 315, false);
	set_ped_config_flag(iParam0, 130, false);
	set_ped_config_flag(iParam0, 178, bParam2);
	set_ped_config_flag(iParam0, 330, false);
	set_ped_config_flag(iParam0, 317, bParam1);
}

void func_254(int iParam0)
{
	iVar0 = player_id();
	_0xa3db37edf9a74635(iVar0, &(uLocal_528[iParam0]), 7, 1, 1);
	_0xa3db37edf9a74635(iVar0, &(uLocal_528[iParam0]), 3, 1, 1);
	_0xa3db37edf9a74635(iVar0, &(uLocal_528[iParam0]), 4, 1, 1);
	func_105(uLocal_528[iParam0], Local_407[iParam0], &Local_471, 1, 1);
}

int func_255(int iParam0, vector3 vParam1)
{
	if (!_does_volume_exist(iParam0))
	{
		return 0;
	}
	return _0xf256a75210c5c0eb(iParam0, vParam1);
}

void func_256()
{
	if (fVar591 >= 10f)
	{
		fVar0 = &Local_14.f_98[2];
		if (fVar0 < fVar591)
		{
			fLocal_593 = fVar0;
		}
	}
}

void func_257(int iParam0, char* sParam1)
{
	if (!_0x23e33cb9f4a3f547(iParam0, sParam1) && !_0x1f0e401031e20146(iParam0, sParam1))
	{
		_0xdf7b5144e25cd3fe(iParam0, sParam1);
	}
}

bool func_258()
{
	if (func_476(4))
	{
		return Global_1935630->f_27;
	}
	return func_477();
}

bool func_259(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_127(iVar0, iParam0, 1, 1) <= 4f)
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
		if (_is_weapon_sniper(func_478(iVar0, 0)))
		{
			if (func_479(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

void func_260(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (!func_480(0))
		{
			func_265(0, 1);
		}
	}
	else if (func_480(0))
	{
		func_265(0, 0);
	}
	if (bParam1)
	{
		if (!func_480(1))
		{
			func_265(1, 1);
		}
	}
	else if (func_480(1))
	{
		func_265(1, 0);
	}
}

int func_261(int iParam0, int iParam1, int iParam2)
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

int func_262(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	iVar0 = iParam9;
	func_481(&iVar0);
	if (func_3(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_482(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_3(iVar0, 134217728))
	{
		func_483(iParam1, uParam3, uParam0);
	}
	if (!*uParam4)
	{
		if (!is_bit_set(*iParam1, 25))
		{
			if (is_bit_set(*iParam1, 24))
			{
				if (!func_484(558))
				{
					func_485(558, 0);
				}
				set_bit(iParam1, 24);
				set_bit(iParam1, 25);
			}
		}
	}
	return iVar1;
}

bool func_263(var uParam0)
{
	return uParam0->f_2 == 2;
}

void func_264(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (!func_486(iParam0, 13))
		{
			if (bParam2)
			{
				func_487(iParam0, 0, 0);
			}
			func_488(iParam0, 13);
		}
	}
	else if (func_486(iParam0, 13))
	{
		func_489(iParam0, 13);
	}
}

void func_265(int iParam0, bool bParam1)
{
	func_487(Local_471[iParam0], bParam1, 0);
}

char* func_266(int iParam0)
{
	if (func_490(iParam0))
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

void func_267(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
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
		if (func_249(iParam0->f_6))
		{
			if (is_bit_set(*iParam0, 1))
			{
				func_491(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_492(iParam0->f_6, iParam0->f_5, 0);
			}
			func_493(iParam0->f_6, 0, 1);
		}
		else
		{
			set_bit(iParam0, 14);
		}
		set_bit(iParam0, 0);
	}
	else
	{
		func_494(iParam0, iParam0->f_5);
		if (!is_bit_set(*iParam0, 13))
		{
			set_bit(iParam0, 0);
		}
	}
	set_bit(iParam0, 15);
}

void func_268(int* iParam0, int* iParam1)
{
	if (!func_495(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_488(iParam1, 19);
			func_496(iParam0, 23);
			func_497(iParam1, 2);
		}
	}
}

void func_269(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!_does_volume_exist(*uParam0))
	{
		*uParam0 = _create_volume_box_with_custom_name(vParam1, vParam4, vParam7, func_235());
	}
}

void func_270(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = _create_volume_box_with_custom_name(vParam1, vParam4, vParam7, sParam10);
}

void func_271(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!_does_volume_exist(*uParam0))
	{
		*uParam0 = _create_volume_sphere_with_custom_name(vParam1, vParam4, vParam7, func_235());
	}
}

void func_272(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = _create_volume_sphere_with_custom_name(vParam1, vParam4, vParam7, sParam10);
}

void func_273()
{
	func_498();
	if (iVar403 == 6)
	{
		return;
	}
	if (!func_499())
	{
		return;
	}
	switch (iVar403)
	{
		case 0:
			if (func_500(0, 1))
			{
				if (func_54(&(uLocal_528[2]), 0, 0))
				{
					knock_off_ped_prop(&(uLocal_528[2]), false, true, false, false);
				}
				func_297(&uLocal_578, 1, 0);
				func_94(&uLocal_622, 0);
				func_501(1);
			}
			else if (&Local_14.f_98[0] < 20f)
			{
				if (bVar549)
				{
					if (func_95(&uLocal_597, 10f) || !func_50(iVar577, 128))
					{
						if (_0x1f0e401031e20146(iVar320, "PBL_PUNCH"))
						{
							func_26(iVar320, "PBL_PUNCH2", 1);
						}
						else
						{
							func_26(iVar320, "PBL_PUNCH", 1);
						}
						func_27(1);
						func_125(&uLocal_597);
						if (!func_50(iVar577, 128))
						{
							func_28(&uLocal_579, 128, 0);
						}
					}
				}
			}
			break;
		case 1:
			if (!func_95(&uLocal_622, 7.5f))
			{
				return;
			}
			if (func_500(1, 1))
			{
				func_297(&uLocal_578, 2, 0);
				func_501(2);
			}
			break;
		case 2:
			if (!func_95(&uLocal_622, 7.5f))
			{
				return;
			}
			if (func_500(2, 1))
			{
				func_297(&uLocal_578, 4, 0);
				func_501(6);
			}
			break;
		case 6:
			break;
	}
}

void func_274(int iParam0)
{
	fVar0 = &Local_14.f_98[1];
	if (fVar736 != -1f)
	{
		fVar1 = func_303(&(uLocal_528[1]), func_502(Global_35, 1065353216), 1);
	}
	if (iVar707 >= 2)
	{
		if (func_503())
		{
			set_ped_using_action_mode(&(uLocal_528[0]), true, -1, 0);
			set_ped_using_action_mode(&(uLocal_528[1]), true, -1, 0);
			func_296(1, Global_35, func_295(1), 42f, 1, 1744022339, 1);
			func_504(&(uLocal_528[1]), Global_35, -1);
			func_297(&uLocal_578, 512, 0);
			func_28(&uLocal_579, 16, 0);
		}
		return;
	}
	switch (iVar398)
	{
		case 0:
			func_110(1, 0);
			func_505(1);
			break;
		case 1:
			if ((func_506(fVar0, fVar1) && func_507()) || iParam0 != -1)
			{
				iLocal_709 = 1;
				fLocal_739 = fVar0;
				func_260(0, 0);
				func_508();
				func_94(&uLocal_723, 0);
				func_505(3);
			}
			break;
		case 3:
			if (func_509(1) && func_294(iVar575, 128))
			{
				func_260(1, 1);
				func_505(11);
			}
			else if (func_503() || ((func_294(iVar575, 128) && bVar650) && func_96(-5f, 1, &(uLocal_528[1]), 1)))
			{
				if (!func_294(iVar575, 128))
				{
					if (func_296(1, Global_35, func_510(11), 42f, 1, 1808677283, 1))
					{
						func_297(&uLocal_578, 128, 0);
						func_23();
						_0x89f5e7adecccb49c(&(uLocal_528[1]), "brave");
						task_play_anim(&(uLocal_528[1]), &(Local_305[3]), Local_305[2]->f_1, 4f, -4f, -1, 67108880, 0f, false, 65536, false, 0, false);
						func_125(&uLocal_723);
						if (iVar707 < 1)
						{
							iLocal_710 = 1;
						}
						func_505(5);
					}
				}
				else if (!func_294(iVar575, 256))
				{
					if (func_296(1, Global_35, func_510(12), 42f, 1, -417894478, 1))
					{
						if (!func_294(iVar575, 256))
						{
							func_297(&uLocal_578, 256, 0);
						}
						if (bVar650)
						{
							func_283(&(uLocal_528[1]), uLocal_536[1], 831283580, 0, 0, 0);
							set_ped_using_action_mode(&(uLocal_528[1]), true, -1, 0);
							func_125(&uLocal_723);
							func_505(10);
						}
						else
						{
							_0x89f5e7adecccb49c(&(uLocal_528[1]), "brave");
							task_play_anim(&(uLocal_528[1]), &(Local_305[3]), Local_305[3]->f_1, 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
							func_125(&uLocal_723);
							func_505(5);
						}
					}
				}
				else if (!func_294(iVar575, 512) && !func_50(iVar576, 16))
				{
					if (func_296(1, Global_35, func_510(13), 42f, 1, 1744022339, 1))
					{
						func_297(&uLocal_578, 512, 0);
						task_play_anim(&(uLocal_528[1]), &(Local_305[4]), Local_305[4]->f_1, 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
						func_125(&uLocal_723);
						func_505(5);
					}
				}
			}
			break;
		case 5:
			if (func_509(1))
			{
				func_505(11);
			}
			else if ((func_503() && func_95(&uLocal_723, 7f)) || (bVar650 && func_96(-5f, 1, &(uLocal_528[1]), 1)))
			{
				func_505(3);
			}
			else
			{
				func_511();
				switch (iParam0)
				{
					case 0:
						if (!func_292(1, 2048))
						{
							func_293(1, 2048);
						}
						if (!is_ped_facing_ped(&(uLocal_528[1]), Global_35, 30f))
						{
							task_turn_ped_to_face_entity(&(uLocal_528[1]), Global_35, -1, -1f, -1f, -1082130432);
						}
						func_125(&uLocal_723);
						break;
					case 1:
						if (iVar707 < 2)
						{
							func_505(3);
							return;
						}
						break;
				}
				if (func_292(1, 2048) && func_96(0, 1, Global_35, 1))
				{
					task_play_anim(&(uLocal_528[1]), &(Local_305[2]), Local_305[2]->f_1, 4f, -4f, -1, 67108880, 0f, false, 65536, false, 0, false);
					func_296(1, Global_35, "GET_LOST", -1082130432, 1, 1744022339, 1);
					if (!func_294(iVar575, 256))
					{
						func_297(&uLocal_578, 256, 0);
					}
					func_110(!func_50(iVar576, 524288), 1);
					iLocal_649 = 0;
					vLocal_650 = { 0f, 0f, 0f };
					func_125(&uLocal_723);
					func_298(1, 2048);
				}
			}
			break;
		case 10:
			if (func_509(1))
			{
				func_505(11);
			}
			else if (func_95(&uLocal_723, 2f) && func_96(-5f, 1, &(uLocal_528[1]), 1))
			{
				if (!func_50(iVar576, 16))
				{
					func_296(1, Global_35, "RE_FOOTR_VAL_V1_THUG2_AGGRO", 42f, 1, 1744022339, 1);
					func_297(&uLocal_578, 512, 0);
					func_28(&uLocal_579, 16, 0);
				}
			}
			break;
		case 11:
			if (func_512(0))
			{
				func_513(0);
				fLocal_739 = (&Local_14.f_98[1] - 1f);
				func_505(1);
			}
			break;
	}
}

bool func_275()
{
	if (func_294(iVar576, 512))
	{
		return true;
	}
	if (&Local_14.f_98[0] < 3f && func_514())
	{
		return true;
	}
	return false;
}

void func_276(bool bParam0)
{
	func_28(&uLocal_579, 2, 0);
	if (bParam0)
	{
		if (_0x1f0e401031e20146(iVar319, "PBL_MAIN") && _get_anim_scene_progress(iVar319) > 0.56f)
		{
			func_28(&uLocal_579, 4, 0);
		}
		else
		{
			func_26(iVar319, "PBL_QUICKEXIT", 1);
		}
	}
	else
	{
		func_26(iVar319, "PBL_QUICKEXIT", 1);
	}
	func_27(1);
	func_29();
}

bool func_277()
{
	if (!bVar550)
	{
		if (&Local_14.f_98[2] < 30f)
		{
			if (func_515(&uLocal_528, &uLocal_654, &uLocal_659, 3.5f, 30f, 0, 0, 17f))
			{
				iLocal_552 = 1;
			}
		}
	}
	if (bVar550)
	{
		if (func_96(0f, 1, &(uLocal_528[0]), 1))
		{
			return true;
		}
	}
	return false;
}

bool func_278(int iParam0, char* sParam1, int iParam2)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_entity_dead(iParam0))
		{
			if (has_anim_event_fired(iParam0, get_hash_key(sParam1)))
			{
				return true;
			}
		}
	}
	return false;
}

void func_279()
{
	if (&Local_14.f_98[2] > 15f)
	{
		func_516(1891783641, get_entity_coords(&(uLocal_528[2]), true, false), 1);
	}
}

bool func_280()
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!is_entity_occluded(&(uLocal_528[iVar0])))
		{
			func_125(&uLocal_609);
			return false;
		}
		iVar0++;
	}
	func_94(&uLocal_609, 0);
	if (func_95(&uLocal_609, 3f))
	{
		return true;
	}
	return false;
}

void func_281()
{
	func_324(&(uLocal_528[2]), 0, 0);
	if (func_54(&(uLocal_528[0]), 0, 1))
	{
		set_ped_config_flag(&(uLocal_528[0]), 167, true);
	}
	if (func_54(&(uLocal_528[1]), 0, 1))
	{
		set_ped_config_flag(&(uLocal_528[1]), 167, true);
	}
	Local_14.f_45 = 0;
}

bool func_282()
{
	if (Local_14.f_48)
	{
		return true;
	}
	if (&Local_14.f_98[2] > 37f || &Local_14.f_98[2] <= 0f)
	{
		return false;
	}
	if (func_499() && func_514())
	{
		return true;
	}
	return false;
}

void func_283(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
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

bool func_284()
{
	switch (iVar400)
	{
		case 0:
			if (func_54(&(uLocal_528[2]), 0, 1))
			{
				func_517();
			}
			else
			{
				func_518(1);
			}
			break;
		case 1:
			func_519();
			if (!func_294(iVar576, 64))
			{
				if (func_520())
				{
					if (iVar521 != 1)
					{
						if (func_96(-4f, 1, 0, 0))
						{
							func_296(0, 0, func_510(10), 42f, 0, 1744022339, 1);
						}
					}
					func_297(&uLocal_578, 64, 0);
					_0xcbb54cc7ffffab86(player_id(), 0, 0, 0);
					func_518(2);
				}
			}
			break;
		case 2:
			func_519();
			func_521();
			if (_is_anim_scene_finished(iVar320, false))
			{
				stop_ped_speaking(&(uLocal_528[0]), false);
				return true;
			}
			break;
	}
	return false;
}

void func_285()
{
	if (!func_50(iVar577, 4096))
	{
		if (_0x8d81e7824b7753f7(iVar320, "ACTION_LOOP", 1))
		{
			if (func_522())
			{
				set_anim_scene_bool(iVar320, "ACTION_BOOL", true, false);
				set_anim_scene_bool(Local_322.f_1, "ACTION_BOOL", true, false);
				func_28(&uLocal_579, 4096, 0);
			}
		}
	}
}

void func_286()
{
	switch (iVar403)
	{
		case 0:
			if (func_98(&(uLocal_528[0]), 1252878064, "bLineScalawag", uVar0, 1067030938, 1))
			{
				func_279();
				func_297(&uLocal_578, 1, 0);
				func_501(1);
			}
			break;
		case 1:
			if (func_98(&(uLocal_528[2]), -739015423, "bLineFamily", uVar0, 1067030938, 1))
			{
				func_279();
				func_297(&uLocal_578, 2, 0);
				func_501(2);
			}
			break;
		case 2:
			if (func_98(&(uLocal_528[0]), -1581785684, "bLineCarpetBagger", uVar0, 1067030938, 1))
			{
				func_297(&uLocal_578, 4, 0);
				func_501(3);
			}
			break;
		case 3:
			if (func_98(&(uLocal_528[2]), 205040921, "bLineToySoldiers", uVar0, 1067030938, 1))
			{
				func_297(&uLocal_578, 2048, 0);
				func_501(5);
			}
			break;
		case 4:
			break;
		case 5:
			if (func_98(&(uLocal_528[2]), 1411519352, "bLineSadder", uVar0, 1067030938, 1))
			{
				func_297(&uLocal_578, 8192, 0);
				func_28(&uLocal_579, 256, 0);
				func_501(6);
			}
			break;
		case 6:
			break;
	}
}

void func_287()
{
	if (!func_50(iVar577, 256))
	{
		return;
	}
	if (func_294(iVar576, 16))
	{
		if (!func_53(2, 128))
		{
			if (func_98(&(uLocal_528[2]), 1073730289, "bDeath", uVar0, 0.3f, 1))
			{
				func_140(&(uLocal_528[2]), 0);
				if ((fVar591 < 30f && Local_14.f_48) && !func_50(iVar577, 1048576))
				{
					func_306(2, 0, 0, "RE_HONOR_WITNESSED_CRIME", 0, 0, 1065353216, 0);
				}
				func_324(&(uLocal_528[2]), 1, 1);
				func_264(Local_471[0], 1, 1);
				func_494(Local_471[1], func_266(10));
				func_101(2, 128);
			}
		}
	}
	if (!func_294(iVar576, 16))
	{
		if (func_98(&(uLocal_528[2]), -1864372342, "bLineIdiot", uVar0, 1067030938, 1))
		{
			func_297(&uLocal_578, 16, 0);
		}
	}
}

void func_288()
{
	if (!func_50(iVar577, 512))
	{
		if (func_98(&(uLocal_528[1]), 881976902, "bInWarnPosition", uVar0, 0.5f, 1))
		{
			func_28(&uLocal_579, 512, 0);
		}
	}
	else if (func_98(&(uLocal_528[1]), -1361900347, "bOutWarnPosition", uVar0, 0.5f, 1))
	{
		func_81(&uLocal_579, 512);
	}
}

void func_289(int iParam0)
{
	fVar0 = &Local_14.f_98[1];
	fVar1 = func_303(&(uLocal_528[1]), func_502(Global_35, 1065353216), 1);
	switch (iVar398)
	{
		case 0:
			func_110(1, 0);
			func_505(1);
			break;
		case 1:
			if ((func_506(fVar0, fVar1) && func_507()) || iParam0 != -1)
			{
				iLocal_709 = 1;
				func_125(&uLocal_723);
				fLocal_739 = fVar0;
				func_508();
				if (iParam0 == 1)
				{
					if (iVar707 >= 2 || !func_54(&(uLocal_528[2]), 0, 1))
					{
						func_28(&uLocal_579, 16, 0);
						func_505(9);
					}
					else
					{
						func_505(5);
					}
				}
				else
				{
					func_505(3);
				}
			}
			break;
		case 4:
			func_297(&uLocal_578, 128, 0);
			func_23();
			func_125(&uLocal_723);
			func_110(1, 1);
			func_505(5);
			break;
		case 3:
			switch (iParam0)
			{
				case 1:
					set_ped_using_action_mode(&(uLocal_528[0]), true, -1, 0);
					set_ped_using_action_mode(&(uLocal_528[1]), true, -1, 0);
					task_turn_ped_to_face_entity(&(uLocal_528[1]), Global_35, -1, -1f, -1f, -1082130432);
					if (iVar707 >= 2 || !func_54(&(uLocal_528[2]), 0, 1))
					{
						func_28(&uLocal_579, 16, 0);
						func_505(9);
					}
					else
					{
						bVar2 = true;
					}
					break;
			}
			if (func_503() || bVar2)
			{
				if (!func_294(iVar575, 128))
				{
					if (func_296(1, Global_35, func_510(11), 42f, 1, -500314840, 1))
					{
						iLocal_702 = &uLocal_528[1];
						func_297(&uLocal_578, 128, 0);
						func_23();
						_0x89f5e7adecccb49c(&(uLocal_528[1]), "brave");
						task_play_anim(&(uLocal_528[1]), &(Local_305[2]), Local_305[2]->f_1, 2f, -2f, -1, 67108880, 0f, false, 65536, false, 0, false);
						func_125(&uLocal_723);
						func_505(5);
					}
				}
				else
				{
					func_505(5);
				}
			}
			break;
		case 5:
			if (!func_50(iVar576, 1024))
			{
				func_511();
			}
			switch (iParam0)
			{
				case 0:
					if (!func_292(1, 2048))
					{
						if (!is_ped_facing_ped(&(uLocal_528[1]), Global_35, 30f))
						{
							task_turn_ped_to_face_entity(&(uLocal_528[1]), Global_35, -1, -1f, -1f, -1082130432);
						}
						func_293(1, 2048);
					}
					break;
				case 1:
					set_ped_using_action_mode(&(uLocal_528[0]), true, -1, 0);
					set_ped_using_action_mode(&(uLocal_528[1]), true, -1, 0);
					task_turn_ped_to_face_entity(&(uLocal_528[1]), Global_35, -1, -1f, -1f, -1082130432);
					func_505(9);
					bVar2 = true;
					break;
			}
			if (bVar2)
			{
			}
			else
			{
				if (func_523() && !func_292(1, 2048))
				{
					if (func_509(func_50(iVar576, 8192)))
					{
						func_505(11);
					}
					else if (func_524())
					{
						set_ped_using_action_mode(&(uLocal_528[0]), true, -1, 0);
						set_ped_using_action_mode(&(uLocal_528[1]), true, -1, 0);
						task_turn_ped_to_face_entity(&(uLocal_528[1]), Global_35, -1, -1f, -1f, -1082130432);
						func_505(6);
					}
				}
				else if ((func_292(1, 2048) && func_96(0, 1, Global_35, 1)) && func_96(0, 1, &(uLocal_528[1]), 1))
				{
					task_play_anim(&(uLocal_528[1]), &(Local_305[2]), Local_305[2]->f_1, 2f, -2f, -1, 67108880, 0f, false, 65536, false, 0, false);
					func_296(1, Global_35, "GET_LOST", -1082130432, 1, 1744022339, 1);
					iLocal_702 = &uLocal_528[1];
					func_110(!func_50(iVar576, 524288), 1);
					iLocal_649 = 0;
					vLocal_650 = { 0f, 0f, 0f };
					func_297(&uLocal_578, 256, 0);
					func_125(&uLocal_723);
					func_298(1, 2048);
				}
				Jump @1894; //curOff = 1034
				if (is_ped_facing_ped(&(uLocal_528[1]), Global_35, 15f))
				{
					if (!func_294(iVar575, 256))
					{
						if (func_96(0, 1, Global_35, 1))
						{
							func_296(1, Global_35, func_510(12), -1082130432, 1, 1744022339, 1);
							iLocal_702 = &uLocal_528[1];
							func_297(&uLocal_578, 256, 0);
						}
					}
					else
					{
						func_264(Local_471[0], 1, 1);
						func_125(&uLocal_723);
						func_505(7);
					}
				}
				Jump @1894; //curOff = 1159
				switch (iParam0)
				{
					case 0:
						task_turn_ped_to_face_entity(&(uLocal_528[1]), Global_35, -1, -1f, -1f, -1082130432);
						task_play_anim(&(uLocal_528[1]), &(Local_305[2]), Local_305[2]->f_1, 2f, -2f, -1, 67108880, 0f, false, 65536, false, 0, false);
						func_296(1, Global_35, "GET_LOST", -1082130432, 1, 1744022339, 1);
						iLocal_702 = &uLocal_528[1];
						func_110(!func_50(iVar576, 524288), 1);
						iLocal_649 = 0;
						vLocal_650 = { 0f, 0f, 0f };
						func_125(&uLocal_723);
						break;
					case 1:
						set_ped_using_action_mode(&(uLocal_528[0]), true, -1, 0);
						set_ped_using_action_mode(&(uLocal_528[1]), true, -1, 0);
						task_turn_ped_to_face_entity(&(uLocal_528[1]), Global_35, -1, -1f, -1f, -1082130432);
						func_505(9);
						break;
					default:
						if ((func_95(&uLocal_723, 3.5f) && !func_263(Local_407[1])) && !func_263(Local_407[0]))
						{
							if (func_509(func_50(iVar576, 8192)))
							{
								func_505(11);
							}
							else
							{
								if (&Local_14.f_98[1] < 8f && (is_ped_heading_towards_position(Global_35, get_entity_coords(&(uLocal_528[1]), true, false), 60f) || get_entity_speed(Global_35) < 1f))
								{
									func_125(&uLocal_723);
									func_505(9);
								}
								else if ((func_95(&uLocal_723, 8f) && (is_ped_heading_towards_position(Global_35, get_entity_coords(&(uLocal_528[1]), true, false), 60f) || get_entity_speed(Global_35) < 1f)) && &Local_14.f_98[1] <= (fVar736 + 1f))
								{
									func_125(&uLocal_723);
									func_505(9);
								}
							else
							{
								}
								Jump @1894; //curOff = 1638
								if (func_96(0, 1, Global_35, 1))
								{
									if (func_95(&uLocal_723, 8f) || func_50(iVar576, 16))
									{
										if (!func_50(iVar576, 16))
										{
											func_28(&uLocal_579, 16, 0);
										}
									}
									else if (func_96(0, 1, &(uLocal_528[1]), 1))
									{
										if (!func_53(1, 16))
										{
											func_296(1, Global_35, func_510(13), -1082130432, 1, 1744022339, 1);
											iLocal_702 = &uLocal_528[1];
											func_297(&uLocal_578, 512, 0);
											open_sequence_task(&iVar3);
											task_react(0, Global_35, Global_36, "TaskCombat_React", 1f, 0, 4);
											task_combat_ped(0, Global_35, 68157440, 4096);
											func_146(&(uLocal_528[0]), &iVar3, 0, 0, 1, 1);
										}
									}
									func_321(1);
								}
								Jump @1894; //curOff = 1847
								if (func_512(1))
								{
									fLocal_739 = (&Local_14.f_98[1] - 1f);
									func_513(0);
									func_28(&uLocal_579, 8192, 0);
									func_505(1);
								}
							}
						}
				}
			}
			default:
				break;
	}
}

bool func_290()
{
	if (func_499() && func_514())
	{
		if (func_98(&(uLocal_528[0]), -258852718, "bQuickThrow", uVar0, 0.5f, 1) || _0x8d81e7824b7753f7(iVar320, "ACTION_LOOP", 1))
		{
			if (func_525(&(uLocal_528[2]), &(Local_14.f_33), &uLocal_647, &uLocal_648, 0.01f, 12f, 0, 0, 5f, 1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_291(int iParam0)
{
	if (!func_53(0, 1))
	{
		if (!func_294(iVar575, 512))
		{
			if (func_100(&(uLocal_528[0]), iVar319, "thug_A", 0, 0, 1, 0))
			{
				vVar0 = { get_offset_from_entity_in_world_coords(&(uLocal_528[0]), 0f, 1.5f, 0f) };
				func_395(&vVar0, 1, 10, 0);
				open_sequence_task(&iVar3);
				task_follow_nav_mesh_to_coord(0, vVar0, 1f, 20000, 0.25f, 1, 40000f);
				if (func_54(Local_208[0]->f_11, 0, 0))
				{
					task_mount_animal(0, Local_208[0]->f_11, 20000, -1, 1f, 1, 0, 0);
				}
				func_146(&(uLocal_528[0]), &iVar3, 0, 0, 1, 1);
				func_101(0, 256);
				func_101(0, 1);
			}
		}
	}
	if (!func_53(1, 1))
	{
		bVar4 = func_526();
		if (!func_53(0, 1))
		{
			if ((func_527(iVar319) < 0.763f || func_124(&(uLocal_528[1]), -1942934348)) || func_294(iVar575, 512))
			{
				return false;
			}
		}
		if (func_100(&(uLocal_528[1]), Local_322.f_1, "thug_B", 0, 0, 1, 0) || bVar4)
		{
			if (!bVar4)
			{
				vVar0 = { get_offset_from_entity_in_world_coords(&(uLocal_528[1]), 0f, 1.5f, 0f) };
				func_395(&vVar0, 1, 10, 0);
			}
			open_sequence_task(&iVar3);
			if (!bVar4)
			{
				task_follow_nav_mesh_to_coord(0, vVar0, 1f, 20000, 0.25f, 1, 40000f);
			}
			if (func_54(Local_208[1]->f_11, 0, 0))
			{
				task_mount_animal(0, Local_208[1]->f_11, 20000, -1, 1f, 1, 0, 0);
			}
			func_146(&(uLocal_528[1]), &iVar3, 0, 0, 1, 1);
			func_101(1, 256);
			func_101(1, 1);
		}
	}
	if (func_53(0, 256) || func_53(1, 256))
	{
		func_120(iParam0);
	}
	if ((func_53(0, 1) && func_53(1, 1)) && !func_294(iVar575, 512))
	{
		return true;
	}
	return false;
}

bool func_292(int iParam0, int iParam1)
{
	return func_138(&(uLocal_580[iParam0]), iParam1);
}

void func_293(int iParam0, int iParam1)
{
	func_102(uLocal_580[iParam0], iParam1);
}

bool func_294(int iParam0, int iParam1)
{
	return func_138(iParam0, iParam1);
}

char* func_295(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_510(15);
		case 1:
			return func_510(16);
		default:
			break;
	}
	return "";
}

bool func_296(int iParam0, int iParam1, char* sParam2, float fParam3, bool bParam4, int iParam5, bool bParam6)
{
	iVar0 = func_333(&(uLocal_528[iParam0]), iParam1, sParam2, fParam3, bParam4, iParam5, bParam6);
	if (iVar0 >= 0)
	{
		iLocal_584[iParam0] = iVar0;
		return true;
	}
	return false;
}

void func_297(var uParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	func_102(uParam0, iParam1);
}

void func_298(int iParam0, int iParam1)
{
	func_202(uLocal_580[iParam0], iParam1);
}

void func_299()
{
	if (func_528())
	{
		if (func_54(&(uLocal_528[0]), 0, 1))
		{
			_0x66f9eb44342bb4c5(&(uLocal_528[0]), &Local_553);
		}
		if (func_54(&(uLocal_528[1]), 0, 1))
		{
			_0x66f9eb44342bb4c5(&(uLocal_528[1]), &Local_553);
		}
		if (func_294(iVar576, 65536) && func_315(&uLocal_726) > 10f)
		{
			if (!func_77(vLocal_643))
			{
				if (func_529(Global_36, vLocal_643) > 20f)
				{
					func_28(&uLocal_579, 4, 0);
					func_29();
				}
			}
		}
		else
		{
			if (!func_93(&uLocal_726))
			{
				func_125(&uLocal_726);
			}
			else if (func_470(&uLocal_726))
			{
				func_530(&uLocal_726);
			}
			if (func_531(iVar696, &(uLocal_528[1]), Local_407[1]) || func_531(iVar696, &(uLocal_528[0]), Local_407[0]))
			{
				return;
			}
			if (!func_294(iVar576, 65536))
			{
				if (func_296(1, Global_35, func_510(14), 42f, 1, -417894478, 1))
				{
					vLocal_643 = { Global_36 };
					func_297(&uLocal_578, 65536, 0);
				}
			}
		}
	}
	else if (func_93(&uLocal_726) && !func_470(&uLocal_726))
	{
		func_532(&uLocal_726);
	}
}

void func_300(int iParam0)
{
	iLocal_403 = iParam0;
}

int func_301(int iParam0)
{
	if (!func_54(Local_208[iParam0]->f_11, 0, 1))
	{
		return 0;
	}
	if (_get_rider_of_mount(Local_208[iParam0]->f_11, true) != 0)
	{
		return 0;
	}
	if (func_127(Local_208[iParam0]->f_11, &(uLocal_528[iParam0]), 1, 1) > 12f)
	{
		return 0;
	}
	return 1;
}

Vector3 func_302(int iParam0)
{
	return 0f, 0f, 0f;
}

float func_303(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

int func_304(int iParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!is_itemset_valid(&Global_1396084))
	{
		return 0;
	}
	if (!func_439(iParam1))
	{
		return 0;
	}
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		if (is_in_itemset(iParam0, &Global_1396084))
		{
			return 1;
		}
		add_to_itemset(iParam0, &Global_1396084);
		func_533(iParam0, 0);
		if (bParam3)
		{
			func_534(iParam0, 5);
		}
		else
		{
			func_534(iParam0, 6);
		}
		func_535(iParam0, iParam1);
		if (!is_string_null_or_empty(sParam2))
		{
			iVar0 = get_hash_key(sParam2);
			if (!func_536(iVar0))
			{
				decor_set_int(iParam0, "pedRoam_hashKey", iVar0);
			}
		}
		return 1;
	}
	return 0;
}

int func_305()
{
	return Global_40.f_4283;
}

void func_306(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_355() != -1)
	{
		return;
	}
	if ((Global_36616 && func_537(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_538(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_539(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_540(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_539(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_307(int iParam0, var uParam1, int iParam2, int iParam3)
{
	iVar0 = iParam2;
	while (iVar0 <= iParam3)
	{
		if (func_54(uParam1[iVar0], 0, 0))
		{
			if (&iParam0->f_98[iVar0] < 3f)
			{
				if (is_ped_in_combat(uParam1[iVar0], Global_35))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_308(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

void func_309(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 || iParam0);
}

void func_310()
{
	if (func_50(iVar577, 8))
	{
		return;
	}
	if (func_541())
	{
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			if (func_54(&(uLocal_528[iVar0]), 0, 0))
			{
				task_combat_ped(&(uLocal_528[iVar0]), Global_35, 0, 0);
			}
			iVar0++;
		}
		func_28(&uLocal_579, 8, 0);
	}
}

void func_311()
{
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!func_77(*Local_330[iVar0]))
		{
			func_542(Local_330[iVar0], iVar0);
		}
		iVar0++;
	}
}

bool func_312(int iParam0)
{
	if (!func_139(iParam0, 3))
	{
		return true;
	}
	if (is_ped_in_combat(iParam0, 0))
	{
		return true;
	}
	if (_get_lassoed_entity(Global_35) == iParam0)
	{
		return true;
	}
	if (_0xd0b7aeb56229d317(iParam0) == Global_35)
	{
		return true;
	}
	if (_0xd0b7aeb56229d317(Global_35) == iParam0)
	{
		return true;
	}
	return false;
}

void func_313(int iParam0)
{
	if (&iLocal_584[iParam0] >= 0)
	{
		func_104(&(uLocal_528[iParam0]), 0);
		func_543(iLocal_584[iParam0]);
	}
}

bool func_314()
{
	iVar1 = 0;
	while (iVar1 < iVar526)
	{
		if (func_54(&(uLocal_528[iVar1]), 0, 1))
		{
			if (func_544(iVar1) >= 10)
			{
				iVar0++;
			}
		}
		else
		{
			iVar0++;
		}
		iVar1++;
	}
	if (iVar0 >= 3)
	{
		return true;
	}
	return false;
}

float func_315(var uParam0)
{
	if (!func_93(uParam0))
	{
		return 0f;
	}
	if (func_470(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_421() - uParam0->f_1);
}

void func_316(int iParam0, int iParam1)
{
	iLocal_729[iParam0] = iParam1;
}

void func_317(int iParam0, char* sParam1)
{
	if (func_50(iVar575, 8388608))
	{
		return;
	}
	if (func_53(iParam0, 512))
	{
		iVar1 = func_99();
		switch (iVar1)
		{
			case 3:
				sVar2 = "PBL_WALL_BREAKOUT_LEFT";
				break;
			case 2:
				sVar2 = "PBL_WALL_BREAKOUT_RIGHT";
				break;
			case 1:
				sVar2 = "PBL_WALL_BREAKOUT_BACK";
				break;
			default:
				sVar2 = "PBL_BRKOUT_WALL";
				break;
		}
		if (!func_100(&(uLocal_528[iParam0]), iVar318, sParam1, 0, 0, 1, 0))
		{
			if (func_98(&(uLocal_528[iParam0]), -1919017821, "bWallBreakout", uVar0, 1.6f, 1))
			{
				_set_anim_scene_playback_list_bool(iVar318, sVar2, false);
				func_28(&uLocal_579, 8388608, 0);
			}
		}
	}
}

int func_318(var uParam0)
{
	return uParam0->f_10;
}

bool func_319()
{
	if (func_50(iVar577, 4194304))
	{
		return true;
	}
	if (iVar714 == 8192 || iVar714 == 16384)
	{
		if (func_218(iVar696, 0, 1, 0))
		{
			func_28(&uLocal_579, 4194304, 0);
			return true;
		}
	}
	return false;
}

void func_320(int iParam0)
{
	func_545(0);
	func_313(0);
	func_313(1);
	func_313(2);
	_task_smart_flee_style_ped(&(uLocal_528[iParam0]), Global_35, 4, 0, -1082130432, -1, 0);
	func_101(iParam0, 16);
}

void func_321(int iParam0)
{
	if (func_53(iParam0, 16))
	{
		return;
	}
	if (!func_294(iVar575, 512))
	{
		func_545(0);
		func_313(0);
		func_313(1);
		func_313(2);
		if (!func_294(iVar575, 512))
		{
			if (func_296(iParam0, Global_35, func_295(iParam0), 42f, 1, 1744022339, 1))
			{
				func_297(&uLocal_578, 512, 0);
			}
		}
	}
	func_283(&(uLocal_528[iParam0]), uLocal_536[iParam0], 831283580, 580546400, 0, 0);
	if (!_0x3ab6c7b0bb0df4b1(&(uLocal_528[iParam0]), iVar319))
	{
		clear_ped_secondary_task(&(uLocal_528[iParam0]));
	}
	set_ped_config_flag(&(uLocal_528[iParam0]), 167, false);
	iVar0 = 68157440;
	iVar1 = 4112;
	open_sequence_task(&iVar2);
	if ((is_ped_on_mount(&(uLocal_528[iParam0])) && !func_50(iVar576, 8)) || func_124(&(uLocal_528[iParam0]), 1870523043))
	{
		task_dismount_animal(0, 0, 0, 0, 0, 0);
	}
	task_combat_ped(0, Global_35, iVar0, iVar1);
	func_146(&(uLocal_528[iParam0]), &iVar2, 0, 0, 1, 1);
	func_101(iParam0, 16);
	func_546();
}

bool func_322(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_323()
{
	if (func_98(&(uLocal_528[2]), -910600982, "Dead", uVar0, 1.4f, 1))
	{
		return true;
	}
	return false;
}

void func_324(int iParam0, bool bParam1, bool bParam2)
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

void func_325(int iParam0, bool bParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (bParam1)
		{
			set_ped_config_flag(iParam0, 263, !bParam1);
		}
		set_ped_config_flag(iParam0, 138, bParam1);
		set_ped_config_flag(iParam0, 488, bParam1);
	}
}

void func_326(var uParam0)
{
	_0xaab050da48b57978(*uParam0, "Default_Panic", 0, -1, 4);
	ped_cower_move_to_point(*uParam0, get_offset_from_entity_in_world_coords(*uParam0, 0.1f, 0f, 0f), Global_35, 2f);
}

bool func_327()
{
	iVar3 = 0;
	while (iVar3 <= 1)
	{
		if (func_54(&(uLocal_528[iVar3]), 0, 1) && !is_ped_in_writhe(&(uLocal_528[iVar3])))
		{
			iVar1++;
			if (is_ped_in_melee_combat(&(uLocal_528[iVar3])))
			{
				fVar2 = 1.5f;
			}
			else
			{
				fVar2 = 2f;
			}
			if (func_127(&(uLocal_528[2]), &(uLocal_528[iVar3]), 0, 1) < fVar2)
			{
				bVar0 = true;
			}
		}
		iVar3++;
	}
	if (bVar0)
	{
		if (&Local_14.f_98[2] < 1f)
		{
			bVar0 = false;
		}
	}
	if (has_entity_been_damaged_by_entity(&(uLocal_528[2]), Global_35, 1, 1))
	{
		bVar0 = false;
	}
	if (!bVar0 && iVar1 > 0)
	{
		return true;
	}
	return false;
}

void func_328(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (decor_exist_on(iParam0, "honor_block"))
		{
			iVar0 = decor_get_int(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_537(iParam1));
		decor_set_int(iParam0, "honor_block", iVar0);
	}
}

bool func_329(var uParam0)
{
	if (func_3(*uParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_330(int iParam0, var uParam1, int iParam2, int iParam3, float fParam4, int iParam5)
{
	if (!func_3(*iParam0, 4))
	{
		if (func_3(iParam5, 1))
		{
			if (func_359())
			{
				func_547(iParam0, 4);
				return false;
			}
		}
		else if (func_3(iParam5, 2))
		{
			if (func_548())
			{
				func_547(iParam0, 4);
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	if (!func_3(*iParam0, 1))
	{
		if (!func_3(*iParam0, 4))
		{
			if (iParam3 < 0)
			{
				iParam3 = *uParam1;
			}
			iVar0 = iParam2;
			while (iVar0 <= ((iParam2 + iParam3) - 1))
			{
				if (func_54(uParam1[iVar0], 8, 1) && !is_ped_fleeing(uParam1[iVar0]))
				{
					return false;
				}
				iVar0++;
			}
		}
		func_94(&(iParam0->f_1), 0);
		func_547(iParam0, 1);
	}
	if (func_3(*iParam0, 1))
	{
		if (func_95(&(iParam0->f_1), (fParam4 + 4f)))
		{
			func_547(iParam0, 4);
			return false;
		}
		if (!func_95(&(iParam0->f_1), fParam4))
		{
			return false;
		}
		if (!func_96(0f, 1, Global_35, 1))
		{
			return false;
		}
		if (func_549(Global_35))
		{
			return false;
		}
		if (Global_1935630->f_24)
		{
			return false;
		}
		func_547(iParam0, 4);
		return true;
	}
	return false;
}

bool func_331(int iParam0, bool bParam1)
{
	if (!func_550(iParam0, 0))
	{
		return false;
	}
	return (Global_40.f_9571[iParam0]->f_1 == 3 || (bParam1 && Global_40.f_9571[iParam0]->f_1 == 4));
}

char* func_332(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2)
	{
		if (func_3(iParam3, 1))
		{
			switch (iParam1)
			{
				case 0:
					return "WON_FIGHT_ODRISCOLL";
				case 2:
					return "WON_FIGHT_EXCONFED";
				case 1:
					return "WON_FIGHT_INBRED";
				case 3:
					return "WON_FIGHT_SAVAGES";
				case 5:
					return "WON_FIGHT_BANDITOS";
				case 4:
					return "WON_FIGHT_RANCHERS";
				case 10:
					return "WON_FIGHT_PINKERTONS";
				default:
					break;
			}
		}
		else if (func_3(iParam3, 2))
		{
			switch (iParam1)
			{
				case 0:
					return "WON_FIGHT_ODRISCOLL_DOM";
				case 2:
					return "WON_FIGHT_EXCONFED_DOM";
				case 1:
					return "WON_FIGHT_INBRED_DOM";
				case 3:
					return "WON_FIGHT_SAVAGES_DOM";
				case 5:
					return "WON_FIGHT_BANDITOS_DOM";
				case 4:
					return "WON_FIGHT_RANCHERS_DOM";
				case 10:
					return "WON_FIGHT_PINKERTONS_DOM";
				default:
					break;
			}
		}
		else if (func_3(iParam3, 4))
		{
			switch (iParam1)
			{
				case 0:
					return "WON_FIGHT_ODRISCOLL_LOWH";
				case 2:
					return "WON_FIGHT_EXCONFED_LOWH";
				case 1:
					return "WON_FIGHT_INBRED_LOWH";
				case 3:
					return "WON_FIGHT_SAVAGES_LOWH";
				case 5:
					return "WON_FIGHT_BANDITOS_LOWH";
				case 4:
					return "WON_FIGHT_RANCHERS_LOWH";
				case 10:
					return "WON_FIGHT_PINKERTONS_LOWH";
				default:
					break;
			}
		}
	}
	return "WON_FIGHT";
}

int func_333(int iParam0, int iParam1, char* sParam2, float fParam3, bool bParam4, int iParam5, bool bParam6)
{
	iVar0 = func_551(iParam0, iParam1, sParam2, "", fParam3, 0, 0, 0, 1, fParam3 > 0f, bParam4, iParam5, 1, 1, 0, 0);
	if (iVar0 >= 0)
	{
		if (bParam6)
		{
			func_125(&uLocal_637);
			iLocal_702 = iParam0;
			func_260(0, 0);
		}
		return iVar0;
	}
	return -1;
}

void func_334(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_421() - fParam1);
	func_552(uParam0, 1);
	func_553(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_335(int iParam0, int iParam1, int iParam2, char* sParam3)
{
	if (!is_itemset_valid(&Global_1396084))
	{
		return 0;
	}
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		if (is_in_itemset(iParam0, &Global_1396084))
		{
			return 1;
		}
		add_to_itemset(iParam0, &Global_1396084);
		decor_set_bool(iParam0, "pedRoam_bInPedRoam", true);
		func_533(iParam0, 0);
		func_534(iParam0, iParam1);
		func_554(iParam0, iParam2);
		if (!is_string_null_or_empty(sParam3))
		{
			iVar0 = get_hash_key(sParam3);
			if (!func_536(iVar0))
			{
				decor_set_int(iParam0, "pedRoam_hashKey", iVar0);
			}
		}
		return 1;
	}
	return 0;
}

void func_336(bool bParam0)
{
	if (!func_50(iVar576, 1048576) || func_50(iVar576, 16777216))
	{
		return;
	}
	if (bParam0 || (!func_54(&(uLocal_528[2]), 0, 1) && !func_124(&(uLocal_528[2]), 1313215416)))
	{
		func_306(func_556(func_555(Local_14.f_3)), 0, 0, 0, 0, 0, 1065353216, 0);
		func_28(&uLocal_579, 16777216, 0);
	}
}

Vector3 func_337()
{
	switch (iVar736)
	{
		case 9:
			switch (iVar735)
			{
				case 0:
					return -301.6397f, 782.3899f, 117.7477f;
				case 1:
					return -312.2f, 795.9f, 119f;
			}
			break;
		case 11:
			switch (iVar735)
			{
				case 0:
					return 1359.714f, -1377.673f, 78.44501f;
				case 1:
					return 1400.807f, -1307.331f, 75.98764f;
				case 2:
					return 1400.807f, -1307.331f, 75.98764f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_338(int iParam0)
{
	iLocal_406 = iParam0;
}

int func_339()
{
	if (iVar404 > 0)
	{
		set_ped_can_play_gesture_anims(&(uLocal_528[2]), 0, 1);
		if (func_557())
		{
			func_338(11);
		}
	}
	switch (iVar404)
	{
		case 0:
			func_558();
			func_338(1);
			break;
		case 1:
			if (func_559() && func_96(0, 1, &(uLocal_528[2]), 1))
			{
				func_338(2);
			}
			break;
		case 2:
			func_560();
			func_561();
			if (func_562())
			{
				if (func_96(0, 1, Global_35, 1))
				{
					func_333(&(uLocal_528[2]), Global_35, "RE_FOOTR_VAL_V1_THANK_ROB_RESPONSE", -1082130432, 0, -417894478, 1);
					func_563();
					func_338(5);
				}
			}
			else
			{
				if (_0x9337183fda2e9035(&(uLocal_528[2]), iVar696))
				{
					_0xa3db37edf9a74635(iVar696, &(uLocal_528[2]), 3, 2, 1);
					_0xa3db37edf9a74635(iVar696, &(uLocal_528[2]), 4, 2, 1);
					func_338(3);
				}
				else if (_0xa454d234e45bb6e5(&(uLocal_528[2]), iVar696))
				{
					_0xa3db37edf9a74635(iVar696, &(uLocal_528[2]), 3, 2, 1);
					_0xa3db37edf9a74635(iVar696, &(uLocal_528[2]), 4, 2, 1);
					func_338(4);
				}
				if ((func_95(&uLocal_594, 7f) && !func_263(Local_407[2])) && !func_564(&(uLocal_528[2]), 0, 0, 0))
				{
					func_333(&(uLocal_528[2]), Global_35, "RE_FOOTR_VAL_V1_THANK_GOODBYE", -1082130432, 0, -417894478, 1);
					func_565();
					func_338(10);
				}
			}
			break;
		case 3:
			func_560();
			func_561();
			if (func_562())
			{
				if (func_96(0, 1, Global_35, 1))
				{
					func_333(&(uLocal_528[2]), Global_35, "RE_FOOTR_VAL_V1_THANK_ROB_RESPONSE", -1082130432, 0, -417894478, 1);
					func_563();
					func_338(5);
				}
			}
			else if (!_0x9337183fda2e9035(&(uLocal_528[2]), iVar696))
			{
				func_94(&uLocal_631, 0);
				if (func_95(&uLocal_631, 1f))
				{
					func_333(&(uLocal_528[2]), Global_35, "RE_FOOTR_VAL_V1_THANK_GOODBYE", -1082130432, 0, -417894478, 1);
					func_565();
					func_338(10);
				}
			}
			break;
		case 4:
			func_560();
			func_561();
			if (func_562())
			{
				if (func_96(0, 1, Global_35, 1))
				{
					func_333(&(uLocal_528[2]), Global_35, "RE_FOOTR_VAL_V1_THANK_ROB_RESPONSE", -1082130432, 0, -417894478, 1);
					func_563();
					func_338(5);
				}
			}
			else if (func_96(0, 1, Global_35, 1) && func_96(0, 1, &(uLocal_528[2]), 1))
			{
				func_56();
				_task_smart_flee_style_ped(&(uLocal_528[2]), Global_35, 2, 4096, -1082130432, -1, 0);
				set_ped_keep_task(&(uLocal_528[2]), true);
				func_105(uLocal_528[2], Local_407[2], &Local_471, 1, 1);
				func_28(&uLocal_579, 1, 0);
			}
			break;
		case 5:
			func_561();
			func_336(1);
			if (!func_562())
			{
				if (is_ped_fleeing(&(uLocal_528[2])))
				{
					set_ped_keep_task(&(uLocal_528[2]), true);
					func_28(&uLocal_579, 1, 0);
				}
				func_338(11);
			}
			break;
		case 10:
			func_561();
			if (func_566())
			{
				func_338(11);
			}
			else if (func_562())
			{
				if (func_96(0, 1, Global_35, 1))
				{
					func_333(&(uLocal_528[2]), Global_35, "RE_FOOTR_VAL_V1_THANK_ROB_RESPONSE", -1082130432, 0, -417894478, 1);
					func_563();
					func_338(5);
				}
			}
			break;
		case 11:
			return 1;
	}
	return 0;
}

int func_340()
{
	iVar0 = -1;
	if (iVar404 > 0)
	{
		if (func_557())
		{
			func_338(11);
		}
	}
	switch (iVar404)
	{
		case 0:
			func_558();
			func_338(1);
			break;
		case 1:
			if (func_559() && func_96(0, 1, &(uLocal_528[2]), 1))
			{
				func_338(7);
			}
			break;
		case 7:
			func_560();
			func_561();
			if (func_562())
			{
				func_563();
				func_338(5);
			}
			else if (_0x9337183fda2e9035(&(uLocal_528[2]), iVar696))
			{
				_0xa3db37edf9a74635(iVar696, &(uLocal_528[2]), 3, 2, 1);
				_0xa3db37edf9a74635(iVar696, &(uLocal_528[2]), 4, 2, 1);
				func_125(&uLocal_594);
				func_338(8);
			}
			else if (_0xa454d234e45bb6e5(&(uLocal_528[2]), iVar696))
			{
				_0xa3db37edf9a74635(iVar696, &(uLocal_528[2]), 3, 2, 1);
				_0xa3db37edf9a74635(iVar696, &(uLocal_528[2]), 4, 2, 1);
				func_125(&uLocal_594);
				func_338(9);
			}
			else if (func_95(&uLocal_594, 9f) && !func_564(&(uLocal_528[2]), 0, 0, 0))
			{
				_0xa3db37edf9a74635(iVar696, &(uLocal_528[2]), 3, 2, 1);
				func_333(Global_35, &(uLocal_528[2]), "RE_FOOTR_RHD_V1_POST_ILO_POS_B", -1082130432, 1, -417894478, 1);
				func_565();
				func_338(10);
			}
			break;
		case 8:
			func_560();
			if (func_562())
			{
				func_563();
				func_338(5);
			}
			else if (!_0x9337183fda2e9035(&(uLocal_528[2]), iVar696))
			{
				func_334(&uLocal_594, 2.5f);
				func_333(Global_35, &(uLocal_528[2]), "RE_FOOTR_RHD_V1_POST_ILO_POS_B", -1082130432, 1, -417894478, 1);
				func_338(2);
			}
			break;
		case 9:
			func_56();
			if (func_562())
			{
				func_563();
				func_338(5);
			}
			else if (func_96(0, 1, Global_35, 1) && func_96(0, 1, &(uLocal_528[2]), 1))
			{
				func_56();
				_task_smart_flee_style_ped(&(uLocal_528[2]), Global_35, 1, 4096, -1082130432, -1, 0);
				func_333(Global_35, &(uLocal_528[2]), "RE_FOOTR_RHD_V1_POST_ILO_NEG_B", -1082130432, 1, -417894478, 1);
				set_ped_keep_task(&(uLocal_528[2]), true);
				func_105(uLocal_528[2], Local_407[2], &Local_471, 1, 1);
				func_28(&uLocal_579, 1, 0);
			}
			break;
		case 2:
			func_561();
			if (iVar0 == 1)
			{
			}
			else
			{
				func_560();
				if (func_562())
				{
					func_563();
					func_338(5);
				}
				else if (func_95(&uLocal_594, 5f) && !func_263(Local_407[2]))
				{
					func_565();
					func_338(10);
				}
				Jump @933; //curOff = 703
				func_561();
				func_336(1);
				if (!func_562())
				{
					set_ped_keep_task(&(uLocal_528[2]), true);
					func_28(&uLocal_579, 1, 0);
					func_338(11);
				}
				Jump @933; //curOff = 749
				if (iVar0 == 1)
				{
				}
				else
				{
					if (func_562())
					{
						func_563();
						func_338(5);
					}
					else if (func_566())
					{
						func_567();
						func_338(11);
					}
					else if (_0x9337183fda2e9035(&(uLocal_528[2]), iVar696) || _0xa454d234e45bb6e5(&(uLocal_528[2]), iVar696))
					{
						_0xa3db37edf9a74635(iVar696, &(uLocal_528[2]), 3, 2, 1);
						_0xa3db37edf9a74635(iVar696, &(uLocal_528[2]), 4, 2, 1);
						_0x20c5459379d75c1c(&(uLocal_528[2]), "RE_FOOTR_RHD_V1_POST_ILO_POS");
						_0xa3c53cde922bc78b(&(uLocal_528[2]), "RE_FOOTR_RHD_V1_POST_ILO_NEG");
						_0x8af46e5159a5b620(&(uLocal_528[2]), 291934926);
						func_125(&uLocal_594);
						func_338(9);
					}
					Jump @933; //curOff = 923
					return 1;
				}
			}
			return 0;
			default:
				break;
	}
}

bool func_341(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_342(int iParam0, int iParam1)
{
	if (!func_341(iParam0))
	{
		return false;
	}
	return (Global_1395482->f_2[iParam0] && iParam1) != 0;
}

int func_343(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_5;
}

char* func_344(char* sParam0)
{
	return sParam0;
}

int func_345(int iParam0, float fParam1, bool bParam2, bool bParam3)
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

int func_346(int iParam0)
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

void func_347(int iParam0)
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

void func_348(int iParam0)
{
	if (func_249(iParam0->f_162))
	{
		func_250(&(iParam0->f_162), 1, 1);
	}
	if (func_249(iParam0->f_163))
	{
		func_250(&(iParam0->f_163), 1, 1);
	}
	if (func_249(iParam0->f_164))
	{
		func_250(&(iParam0->f_164), 1, 1);
	}
	if (func_249(iParam0->f_165))
	{
		func_250(&(iParam0->f_165), 1, 1);
	}
}

void func_349(int iParam0)
{
	if (iParam0->f_170)
	{
		func_568();
	}
}

void func_350(int iParam0)
{
	if (iParam0->f_48 && !iParam0->f_45)
	{
		func_309(32);
		func_354(iParam0->f_3, 1, 0, 0, 2, 0, 0, 1);
	}
}

bool func_351(int iParam0)
{
	if (func_569(iParam0) || iParam0->f_44)
	{
		iParam0->f_44 = 1;
		func_570(iParam0->f_3);
		func_210(iParam0, 0, 1);
		func_571(iParam0->f_3, iParam0->f_51.f_5, 0, iParam0->f_43, -1);
		func_572(0, 0);
		return true;
	}
	return false;
}

void func_352()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

bool func_353(int iParam0)
{
	if (!func_184(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0]->f_4 > 0;
}

void func_354(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_343(iParam0) == 1 && bParam7)
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
	if ((bParam1 || bParam6) || func_355() != -1)
	{
		Global_17504.f_42[iParam0]->f_4 = 0;
	}
	Global_17504.f_42[iParam0]->f_4 = (Global_17504.f_42[iParam0]->f_4 + iVar0);
}

int func_355()
{
	return Global_1572887->f_12;
}

int func_356(int iParam0)
{
	iVar1 = iParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_401(&iVar1, -2147483648);
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

int func_357()
{
	return get_player_group(get_player_index());
}

bool func_358(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_355() != -1)
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

bool func_359()
{
	if (func_355() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

int func_360(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		case 2:
			return 4;
		case 3:
			return 5;
		case 4:
			return 4;
		case 5:
			return 4;
		case 1:
			return 4;
		case 10:
			return 5;
		default:
			break;
	}
	return 1;
}

void func_361(var uParam0)
{
	if (*uParam0 != 0)
	{
		request_model(*uParam0, false);
	}
}

bool func_362(int iParam0)
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

int func_363(int iParam0)
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

int func_364(int iParam0)
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

bool func_365(int iParam0, int iParam1, var uParam2)
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

Vector3 func_366(int iParam0, var uParam1)
{
	iVar1 = -1;
	if (does_entity_exist(iParam0))
	{
		vVar2 = { get_entity_coords(iParam0, true, false) };
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!func_77(*(*uParam1)[iVar0]))
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

void func_367(var uParam0, bool bParam1)
{
	if (!does_blip_exist(uParam0->f_6))
	{
		uParam0->f_6 = _blip_add_for_coord(-1702907713, *uParam0);
		_blip_set_modifier(uParam0->f_6, 580546400);
		set_blip_name_from_text_file(uParam0->f_6, "BLIP_DEBUG");
		if (bParam1)
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_33("BEAT_GLB", 5500, 0, 1, 0, 0, -1, -1, 0);
		}
		_0x9851de7aec10b4e1(*uParam0, 100f, 1, 0);
	}
}

bool func_368(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_369(vector3 vParam0, float fParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (!bParam8 && network_is_game_in_progress())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_77(vParam0))
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
		if (func_232(vParam0))
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
	func_573(iVar0, bParam8);
	return iVar0;
}

void func_370(int iParam0)
{
	if (!func_184(iParam0))
	{
		return;
	}
	func_574(iParam0);
}

void func_371(var uParam0, vector3 vParam1)
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

int func_372(int iParam0)
{
	if (func_86(iParam0, 2))
	{
		return 200;
	}
	if (func_86(iParam0, 4))
	{
		return 70;
	}
	if (func_86(iParam0, 32))
	{
		return 400;
	}
	return 110;
}

int func_373(int iParam0)
{
	if (func_73(iParam0, 131072))
	{
		return 0;
	}
	else
	{
		if (iParam0 == 6)
		{
			if (func_113() == 8)
			{
				return 3;
			}
		}
		bVar0 = func_73(iParam0, 2);
		bVar1 = func_73(iParam0, 1);
		bVar2 = (bVar0 && bVar1);
		if (bVar2)
		{
			if (!func_216())
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

void func_374(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
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
	if (func_86(iParam3, 2097152))
	{
		*fParam0 = (*fParam0 + 15f);
		*iParam2 = ceil((*fParam0 + 50f));
	}
	else
	{
		*iParam2 = 70;
	}
}

void func_375(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
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
	if (func_86(iParam3, 2))
	{
		*fParam0 = (*fParam0 + 60f);
		*fParam1 = (*fParam1 + 60f);
		*iParam2 = ceil((*fParam0 + 110f));
	}
	else if (func_86(iParam3, 2097152))
	{
		*fParam0 = (*fParam0 + 30f);
		*iParam2 = ceil((*fParam0 + 30f));
	}
	else
	{
		*iParam2 = 70;
	}
}

bool func_376(int iParam0, int iParam1)
{
	iVar0 = (func_364(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_17504.f_12[iVar1]), iVar2);
}

bool func_377(int iParam0, vector3 vParam1, float fParam4, float fParam5)
{
	if (func_77(vParam1))
	{
		return false;
	}
	if (func_382(iParam0, vParam1))
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
	if (func_129(iParam0))
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

bool func_378(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_379(int iParam0, vector3 vParam1, int iParam4, float fParam5, bool bParam6, int iParam7)
{
	fVar0 = func_152(bParam6, iParam7, vdist(vParam1, get_entity_coords(iParam0, true, false)));
	if (!iParam4->f_1)
	{
		if (fVar0 < iParam4->f_2 || (func_385(vParam1, iParam0) && get_entity_speed(iParam0) > fParam5))
		{
			*iParam4 = func_460();
			iParam4->f_2 = func_303(iParam0, vParam1, 1);
			iParam4->f_1 = 1;
		}
	}
	else if (fVar0 > iParam4->f_2 || (!func_385(vParam1, iParam0) && get_entity_speed(iParam0) > fParam5))
	{
		*iParam4 = func_460();
		iParam4->f_2 = func_303(iParam0, vParam1, 1);
		iParam4->f_1 = 0;
	}
}

bool func_380(var uParam0, int iParam1)
{
	if (uParam0->f_1 == 1)
	{
		return (func_460() - *uParam0) >= iParam1;
	}
	return false;
}

int func_381(var uParam0)
{
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_77(*uParam0->f_12[iVar0]))
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

bool func_382(int iParam0, vector3 vParam1)
{
	if (!func_73(iParam0, 1))
	{
		iVar0 = 1;
	}
	if (func_575(vParam1, 0, 0, iVar0))
	{
		return true;
	}
	if (func_73(iParam0, 33554432))
	{
		if (func_576(vParam1, 200f, 1, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_383(int iParam0, var uParam1)
{
	iVar0 = 1;
	if (func_86(iParam0, 128))
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
	if (func_73(iParam0, 1) && !func_73(iParam0, 2))
	{
		if (func_73(iParam0, 4096) || func_73(iParam0, 2048))
		{
			if (func_577(*uParam1))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

bool func_384(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	uVar0 = func_1(&uParam0);
	if (!func_578())
	{
		return false;
	}
	return true;
}

bool func_385(vector3 vParam0, int iParam3)
{
	if (is_entity_dead(iParam3))
	{
		return false;
	}
	vVar0 = { get_entity_forward_vector(iParam3) };
	return func_579(vVar0, vParam0) > func_579(vVar0, get_entity_coords(iParam3, true, false));
}

bool func_386(int iParam0)
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

int func_387(int iParam0)
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

Vector3 func_388(vector3 vParam0, bool bParam3, vector3 vParam4, bool bParam7)
{
	if (bParam7)
	{
		return vParam4;
	}
	return _get_object_offset_from_coords(vParam0, bParam3, vParam4);
}

float func_389(float fParam0, float fParam1, bool bParam2)
{
	if (bParam2)
	{
		return fParam1;
	}
	return func_580((fParam0 + fParam1));
}

int func_390(int iParam0, var uParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, int iParam10)
{
	if (bParam6)
	{
		func_193(&vParam2, uParam1->f_22);
	}
	if (!bParam7 && func_581(uParam1))
	{
		iVar0 = _0xeaf682a14f8e5f53(uParam1->f_5, vParam2, bParam5, 1, 1, iParam9, iParam10);
		if (!does_entity_exist(iVar0))
		{
			iVar0 = func_582(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
		}
		else if (_is_metaped_outfit_request_valid(uParam1->f_5))
		{
			_release_metaped_outfit_request(uParam1->f_5);
		}
	}
	else
	{
		iVar0 = func_582(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
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
		if (!is_string_null_or_empty(&(uParam1->f_23)) && !func_583(iVar0))
		{
			func_200(iVar0, &(uParam1->f_23), 0);
		}
		if (func_583(iVar0))
		{
			set_animal_tuning_bool_param(iVar0, 48, true);
		}
		else
		{
			set_ped_config_flag(iVar0, 307, true);
		}
		if (func_584(&(uParam1->f_22)))
		{
			set_ped_can_ragdoll(iVar0, true);
			set_ped_to_ragdoll(iVar0, 1000, 1000, 1, false, false, false);
			set_ped_config_flag(iVar0, 186, !func_585(&(uParam1->f_22)));
			func_324(iVar0, func_586(&(uParam1->f_22)), 0);
		}
		else
		{
			request_ped_visibility_tracking(iVar0);
		}
		if (func_587(&(uParam1->f_22)))
		{
			freeze_entity_position(iVar0, true);
		}
		if (func_588(&(uParam1->f_22)))
		{
			func_589(iVar0, 1);
		}
		_0xa91e6cf94404e8c9(iVar0);
		set_ped_config_flag(iVar0, 6, func_590(&(uParam1->f_22)));
		set_ped_config_flag(iVar0, 393, true);
		if (!func_138(uParam1->f_22, 8192))
		{
			_set_entity_something(iVar0, true);
		}
		if (!func_583(iVar0))
		{
			func_592(iVar0, !func_591(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 4, func_593(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 297, !func_594(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 317, !func_594(&(uParam1->f_22)));
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

bool func_391(int iParam0, int iParam1)
{
	if (func_198(iParam0) != -1)
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

bool func_392(var uParam0)
{
	return func_138(*uParam0, 32);
}

int func_393(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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

bool func_394(var uParam0)
{
	return func_138(*uParam0, 1);
}

bool func_395(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_595(*uParam0, 0f, 0f, 0f))
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

bool func_396(int iParam0, var uParam1)
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

void func_397(var uParam0, int iParam1, int iParam2)
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

void func_398(var uParam0, int iParam1, int iParam2)
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

bool func_399(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_400(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_417(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
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
							if (func_417(iVar4) && iVar4 != iVar0)
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
	if (func_355() == -1 && !func_596(iVar0))
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
				if (func_596(-183018591))
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
		if (iParam0 != Global_35 && func_417(iVar0))
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
		func_597(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_598(iParam0, &iVar0, &fVar25);
		iVar0 = _give_weapon_to_ped_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_599(iVar0))
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

void func_401(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

int func_402(int iParam0)
{
	if (iParam0 == -1)
	{
		iVar0 = func_600(1);
	}
	else
	{
		iVar0 = func_601(iParam0);
	}
	return iVar0;
}

void func_403(int iParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		iVar0 = func_602(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_603(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2] = &Global_17504.f_2205[iVar2] + 1;
	}
}

void func_404(int iParam0, int iParam1)
{
	if (iParam1 != -1 && !func_86(iParam0, 8192))
	{
		iVar0 = func_603(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0] = &Global_17504.f_2205[iVar0] + 1;
	}
}

void func_405(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	func_354(iParam0, bParam3, round((fVar0 * fParam2)), round((fVar1 * fParam2)), round((fVar2 * fParam2)), round((fVar3 * fParam2)), bParam4, 1);
}

void func_406(int iParam0, bool bParam1)
{
	iVar0 = 1;
	if (bParam1)
	{
		iVar0 = 3;
	}
	if (func_73(iParam0, 262144))
	{
		if (Global_1392135->f_3 == -1)
		{
			func_604(262144, iVar0, 0, 1);
		}
	}
	if (func_73(iParam0, 128))
	{
		func_604(128, iVar0, 0, 1);
	}
	else if (func_73(iParam0, 524288))
	{
		func_604(524288, iVar0, 0, 1);
	}
	else if (func_73(iParam0, 536870912))
	{
		func_604(536870912, iVar0, 0, 1);
	}
	else if (func_73(iParam0, 4194304))
	{
		func_604(4194304, iVar0, 0, 1);
	}
	else if (func_73(iParam0, 8388608))
	{
		func_604(8388608, iVar0, 0, 1);
	}
}

void func_407(int iParam0)
{
	Global_1310750->f_16077 = get_id_of_this_thread();
	Global_1310750->f_16071 = iParam0;
}

int func_408(bool bParam0)
{
	if (!bParam0 && func_605(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

int func_409()
{
	return Global_1310750->f_16037;
}

bool func_410(int iParam0)
{
	if (!func_184(iParam0))
	{
		return false;
	}
	return (*Global_1310750)[iParam0]->f_47;
}

void func_411(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_184(&(Global_1310750->f_13321[iParam0])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0];
	force_cleanup_for_thread_with_this_id(Global_1310750->f_13321[iParam0]->f_5, 523);
	(*Global_1310750)[iVar0]->f_48 = 0;
	func_606(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_412(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_607(Global_1393447, 1);
	func_608();
	func_609();
	func_610((to_float(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135->f_54 = (func_460() / 1000);
		if (Global_1392135->f_1 & 4 != 0)
		{
			Global_1392135->f_1 = (Global_1392135->f_1 - Global_1392135->f_1 & 4);
		}
		func_611();
		if (iParam1 == -1)
		{
			if (func_3(iParam0, 1))
			{
				func_604(16777216, 2, 0, 1);
				iVar0 = floor(240f);
			}
			else if (func_3(iParam0, 2))
			{
				func_604(16777216, 0, 0, 1);
				iVar0 = floor(60f);
			}
			else if (func_3(iParam0, 4))
			{
				func_604(16777216, 5, 0, 1);
				iVar0 = floor(900f);
			}
			Global_1392135->f_4 = (Global_1392135->f_54 + iVar0);
		}
		else
		{
			func_612(iParam1, iParam2, iParam3, iParam4);
			Global_1392135->f_5[iParam1] = (((Global_1392135->f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_613(to_float(iVar0), 1, 0);
	}
	else
	{
		func_613((to_float(200) / 3f), 1, 0);
	}
}

bool func_413(int iParam0, int iParam1)
{
	return (Global_40.f_9571[iParam1] && iParam0) != 0;
}

void func_414(int iParam0, int iParam1)
{
	(*Global_1392050)[iParam1]->f_1 = ((*Global_1392050)[iParam1]->f_1 - ((*Global_1392050)[iParam1]->f_1 && iParam0));
}

void func_415(int iParam0, int iParam1)
{
	Global_40.f_9571[iParam1] = (Global_40.f_9571[iParam1] || iParam0);
}

int func_416(int iParam0)
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

bool func_417(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_418()
{
	return (Global_1935630->f_44 == -160924582 && is_first_person_aim_cam_active());
}

bool func_419(var uParam0, float fParam1, float fParam2, int iParam3)
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

bool func_420(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_419(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (func_421() - 0.02f);
		}
		return true;
	}
	uParam0->f_8 = 0f;
	return false;
}

float func_421()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

int func_422(bool bParam0, bool bParam1, bool bParam2)
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

bool func_423(int iParam0)
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

bool func_424(int iParam0)
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

bool func_425(int iParam0)
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

bool func_426(int iParam0)
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

bool func_427(int iParam0)
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

bool func_428(int iParam0)
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

bool func_429(int iParam0)
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

bool func_430(bool bParam0, int iParam1, int iParam2)
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

bool func_431()
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

int func_432(int iParam0)
{
	if (!func_435(iParam0))
	{
		return -1;
	}
	return func_615(func_614(iParam0));
}

bool func_433(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_434(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_435(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_436(int iParam0)
{
	return func_73(iParam0, Global_1310750->f_16072 | 64);
}

int func_437(int iParam0)
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

int func_438(int iParam0)
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

bool func_439(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_440(int iParam0)
{
	return ((Global_1310750[iParam0] != 0 && !is_string_null_or_empty(&((*Global_1310750)[iParam0]->f_40))) && get_length_of_literal_string(&((*Global_1310750)[iParam0]->f_40)) != 0);
}

void func_441(int iParam0, bool bParam1, int iParam2)
{
	func_616(iParam2);
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
		iParam0->f_13 = func_617(0);
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
							func_85(iParam0, 33554432);
						}
					}
					else if (!*iParam0 & 8192 != 0)
					{
						if (func_221(1))
						{
							func_85(iParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_35) && (!func_221(1) || *iParam0 & 8192 != 0))
				{
					func_137(iParam0, 33554432);
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
			if (func_618(iParam0))
			{
				iParam0->f_15 = func_460();
			}
		}
		else if (iParam0->f_15 > 0)
		{
			if ((func_460() - iParam0->f_15) > 500)
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
	func_619(iParam0);
}

bool func_442(int iParam0, int iParam1)
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
			if (!func_620(iParam0, iParam1, iVar2))
			{
				return false;
			}
			if (func_621(iParam0, iVar2) <= func_622(iParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_443(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		iParam1->f_10 = iParam0;
	}
	if (func_623(iParam2, 1, 1, 1, 0))
	{
		func_85(iParam1, 2048);
	}
	iParam1->f_16 = iParam2;
	func_624(iParam1, 1);
	func_352();
}

bool func_444(int iParam0, int iParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_259(iParam0, !*iParam1 & 268435456 != 0, !*iParam1 & 536870912 != 0, !*iParam1 & 1073741824 != 0, 0, 0))
		{
			if (iParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (iParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_625(iParam1);
			if (func_626(iParam1, iParam0, fVar0, fVar1))
			{
				if (iParam1->f_2 == 0)
				{
					iParam1->f_2 = get_game_timer();
				}
				iVar2 = (get_game_timer() - iParam1->f_2);
				iVar3 = func_627(iParam1);
				if (iParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_624(iParam1, 1);
						return true;
					}
					else if (iParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_624(iParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_445(int iParam0, int iParam1, int iParam2)
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
	if (func_628(iParam1, !*iParam2 & 268435456 != 0, !*iParam2 & 536870912 != 0, !*iParam2 & 1073741824 != 0, 0))
	{
		if (iParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (iParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_625(iParam2);
		if (func_626(iParam2, iParam0, fVar0, fVar1))
		{
			if (iParam2->f_2 == 0)
			{
				iParam2->f_2 = get_game_timer();
			}
			if (iParam2->f_2 != 0)
			{
				if (get_game_timer() - iParam2->f_2) > func_627(iParam2)
				{
					func_624(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_446(int iParam0, int iParam1)
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
	if (func_620(iParam0, iParam1, iVar1))
	{
		if (iParam1->f_3 == 0)
		{
			iParam1->f_3 = get_game_timer();
		}
		else if (get_game_timer() - iParam1->f_3) > func_627(iParam1)
		{
			fVar3 = func_625(iParam1);
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

bool func_447(int iParam0, float fParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_460();
	iVar1 = (iVar0 - iParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_448(var uParam0, int iParam1, int iParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_629(iParam2);
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
			if (func_456(iParam2, iParam1))
			{
				func_624(iParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_449(var uParam0, int iParam1, int iParam2)
{
	if (iParam2->f_12 < IntToFloat(func_630(iParam2)))
	{
		if ((is_weapon_valid(Global_1935630->f_46) && !_0x5809dbca0a37c82b(Global_1935630->f_46)) || get_current_ped_vehicle_weapon(Global_35, &uVar0))
		{
			if (func_456(iParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_624(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_450(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_631(iParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, iParam2->f_22))
				{
					func_624(iParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, iParam2->f_27))
				{
					func_624(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, iParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, iParam2->f_26, &vVar4, 0, 0);
					if (func_632(iParam1, vVar0, vVar4))
					{
						func_624(iParam2, 1);
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
					func_624(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, iParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, iParam2->f_26, &vVar7, 0, 0);
					if (func_632(iParam1, vVar0, vVar7))
					{
						func_624(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_451(int iParam0, int iParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *iParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_620(iParam0, iParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_633(&(Global_1935630->f_34[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_634(&(Global_1935630->f_34[iVar0])))
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
			if (func_635(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_636(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_637(iParam1, iParam0, fVar1, iVar0))
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

bool func_452(int iParam0, int iParam1)
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

bool func_453(int iParam0, int iParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_460();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_454(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_638(iVar0, &iVar2))
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
	if (func_639(iVar0, iParam0))
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

int func_455(int iParam0, int iParam1)
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

bool func_456(int iParam0, int iParam1)
{
	if (func_640(iParam0))
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

bool func_457(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_127(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_458()
{
}

bool func_459(int iParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_35);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_641(iVar0, iParam1, vVar1))
		{
			iParam0->f_9 = func_460();
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
						if (func_303(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								iParam0->f_9 = func_460();
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

int func_460()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_461()
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
	if ((func_460() - Global_1935630->f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_462(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0->f_14))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_622(iParam0);
	if (iParam0->f_12 > func_136(iParam0) && iParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_642(iParam1);
	iVar1 = func_643(iParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((iParam0->f_12 <= fVar0 || ((_0x06087579e7aa85a9(iParam1, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam1, Global_35, 1, 0) == 1)) || ((_0x06087579e7aa85a9(iParam1, iParam0->f_14, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, iParam0->f_14, 17)) && _0x7f9b9791d4cb71f6(iParam1, iParam0->f_14, 1, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_463(int iParam0, int iParam1, int iParam2)
{
	if (iParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *iParam2 & 256 != false;
	bVar1 = *iParam2 & 524288 != false;
	bVar2 = *iParam2 & 128 != false;
	return func_644(iParam0, iParam1, bVar0, bVar2, iParam2->f_12, bVar1);
}

bool func_464(int iParam0, int iParam1)
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
		if (func_645(iParam0, iParam1, 1))
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
					if (!func_646(iParam1, iParam0))
					{
						if (func_303(iVar4, Global_36, 1) < 7f)
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

bool func_465(int iParam0, int iParam1)
{
	if (!func_647(0))
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

bool func_466(int iParam0, int iParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_460();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_467(int iParam0, int iParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

int func_468(int iParam0, int iParam1)
{
	if (!is_ped_human(iParam0))
	{
		return 0;
	}
	if (iParam1->f_4 == 0)
	{
		iParam1->f_4 = func_460();
	}
	else if (func_460() - iParam1->f_4) > func_648(iParam1)
	{
		return func_649(iParam0, iParam1, 0, -1082130432);
	}
	return 0;
}

bool func_469(int iParam0, int iParam1)
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

bool func_470(var uParam0)
{
	return func_240(*uParam0, 2);
}

bool func_471(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

bool func_472(var uParam0, float fParam1)
{
	if (func_95(uParam0, fParam1))
	{
		func_111(uParam0);
		return true;
	}
	return false;
}

int func_473(int iParam0)
{
	return iParam0;
}

void func_474(int iParam0)
{
	if (!func_650(iParam0))
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

void func_475(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_250(&((*uParam1)[iParam0->f_3]->f_6), 1, 1);
		if (bParam2)
		{
			func_651(iParam0, 0);
		}
	}
}

bool func_476(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

bool func_477()
{
	if (func_652())
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

var func_478(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_479(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_653(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_480(int iParam0)
{
	if (func_654(Local_471[iParam0], 1, 0) && !func_486(Local_471[iParam0], 13))
	{
		return true;
	}
	return false;
}

void func_481(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

int func_482(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	if (!is_entity_dead(*uParam0))
	{
		func_481(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !_does_volume_exist(iParam9)) || is_entity_in_volume(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (is_ambient_speech_playing(*uParam0) || is_scripted_speech_playing(*uParam0));
		fVar8 = func_152(fParam12 >= 0f, fParam12, vdist(Global_36, get_entity_coords(*uParam0, true, false)));
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
			func_125(&(iParam1->f_13));
		}
		if (func_655(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_656(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_482(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_251(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!get_ped_config_flag(*uParam0, 317, true))
						{
							func_657(*uParam0, 1, 1);
						}
					}
					else if (func_495(iParam1, 22))
					{
						func_657(*uParam0, 0, 1);
					}
				}
				if (func_658(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_659(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_660(iParam8);
					if (func_661(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (is_bit_set(uParam3[iParam1->f_1], 20))
								{
									func_662(uParam3);
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
					func_663(iParam1, uParam3, fVar8);
					if (func_664(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (is_bit_set(*iParam1, 1))
					{
						func_103(uParam3, 0, 0, 1, 1);
						clear_bit(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_665(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_658(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_666(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_661(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_659(uParam0, func_658(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_660(iParam8);
				}
				else if (is_bit_set(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_103(uParam3, 0, 0, 1, 1);
					}
					func_667(iParam1, 1);
				}
				func_663(iParam1, uParam3, fVar8);
				if (func_665(uParam0, iParam1, fParam4, bVar6))
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
			func_252(iParam1, uParam3);
			set_bit(iParam1, 3);
		}
	}
	return -1;
}

void func_483(int* iParam0, var uParam1, var uParam2)
{
	iVar0 = func_668(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (*uParam1)[iVar0]->f_13;
		iVar2 = (*uParam1)[iVar0]->f_15;
		if (!is_string_null_or_empty(sVar1))
		{
			func_669(Global_35, *uParam2, sVar1, "", -1082130432, iVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_484(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_355() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_485(int iParam0, bool bParam1)
{
	func_670(iParam0, &iVar0, &iVar1);
	if (!func_671(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_672(iVar0, iVar1);
}

bool func_486(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

void func_487(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_486(iParam0, 13))
	{
		func_488(iParam0, 0);
	}
	else
	{
		func_489(iParam0, 0);
	}
	if (func_249(iParam0->f_6))
	{
		if (bParam2)
		{
			func_250(&(iParam0->f_6), 0, 1);
		}
	}
}

void func_488(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_489(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

bool func_490(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 38)
	{
		return true;
	}
	return false;
}

void func_491(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_249(iParam0))
	{
		return;
	}
	iVar0 = func_473(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(2, sParam1, sParam2));
}

void func_492(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_249(iParam0))
	{
		return;
	}
	iVar0 = func_473(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, sParam1);
}

void func_493(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_249(iParam0))
	{
		return;
	}
	iVar0 = func_473(iParam0);
	if (bParam1)
	{
		func_673(iParam0, 4);
		func_674(iVar0, 1);
		func_675(iVar0, 1);
	}
	else
	{
		func_676(iParam0, 4);
		func_675(iVar0, 0);
	}
}

void func_494(int* iParam0, char* sParam1)
{
	if (func_249(iParam0->f_6) && !is_string_null_or_empty(sParam1))
	{
		func_492(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_489(iParam0, 1);
}

bool func_495(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

void func_496(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_497(int* iParam0, int iParam1)
{
	if (!func_486(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_488(iParam0, 14);
		}
	}
}

void func_498()
{
	if (func_677())
	{
		if (_0x8d81e7824b7753f7(iVar320, "base_punch", 1))
		{
			func_27(0);
		}
	}
}

bool func_499()
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (&iLocal_546[iVar0])
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_500(int iParam0, bool bParam1)
{
	func_678(iParam0, &iVar0, &iVar1, &iVar2);
	if (&Local_14.f_98[iVar0] < 42f)
	{
		if (bVar547)
		{
			if (_0x1f0e401031e20146(iVar318, "PBL_PUNCH"))
			{
				sVar4 = "PBL_PUNCH2";
			}
			else
			{
				sVar4 = "PBL_PUNCH";
			}
			if (iParam0 <= 0)
			{
				iVar3 = 1808677283;
			}
			else
			{
				iVar3 = 291934926;
			}
			if (func_679(iVar318, sVar4))
			{
				if (func_296(iVar0, iVar1, func_510(iVar2), 42f, 0, iVar3, 0))
				{
					if (func_26(iVar318, sVar4, 1))
					{
						func_27(1);
						func_125(&uLocal_597);
						func_125(&uLocal_717);
						if (bParam1)
						{
							func_279();
						}
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_501(int iParam0)
{
	iLocal_405 = iParam0;
}

Vector3 func_502(int iParam0, float fParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { get_entity_coords(iParam0, false, false) };
	if (is_entity_dead(iParam0))
	{
		return vVar0;
	}
	vVar6 = { get_entity_forward_vector(iParam0) };
	func_680(vVar6);
	vVar6 = { FtoV((get_entity_speed(iParam0) * fParam1)) * vVar6 };
	vVar3 = { vVar0 + vVar6 };
	return vVar3;
}

bool func_503()
{
	if (!func_96(0, 1, Global_35, 1))
	{
		return false;
	}
	else if (iVar708 >= 2)
	{
		return true;
	}
	if (!func_294(iVar576, 128))
	{
		if (!func_95(&uLocal_723, 0.5f))
		{
			return false;
		}
		else if (is_ped_facing_ped(&(uLocal_528[1]), Global_35, 50f))
		{
			return true;
		}
	}
	if (func_294(iVar576, 128) && !func_294(iVar576, 256))
	{
		fVar0 = 7f;
	}
	else if (func_294(iVar576, 256))
	{
		fVar0 = 7f;
	}
	else
	{
		fVar0 = 7f;
	}
	if ((((func_95(&uLocal_723, fVar0) && func_96(-5f, 1, 0, 0)) && (!func_124(&(uLocal_528[1]), -1942934348) || Global_1935630->f_40 != 0)) && !func_263(Local_407[0])) && !func_263(Local_407[1]))
	{
		if (is_ped_facing_ped(&(uLocal_528[1]), Global_35, 50f))
		{
			return true;
		}
	}
	return false;
}

int func_504(int iParam0, int iParam1, int iParam2)
{
	task_turn_ped_to_face_entity(iParam0, iParam1, iParam2, 3f, 0.25f, -1082130432);
	return 1;
}

void func_505(int iParam0)
{
	iLocal_401 = iParam0;
}

int func_506(float fParam0, float fParam1)
{
	if (fParam0 <= 20f)
	{
		if (fVar735 == -1f)
		{
			if (get_entity_speed(Global_35) >= 1.5f)
			{
				if (func_681(&(uLocal_528[1]), func_502(Global_35, 3f), 10f, 1, 1))
				{
					return 1;
				}
			}
			else if (func_681(&(uLocal_528[1]), func_502(Global_35, 2f), 10f, 1, 1))
			{
				return 1;
			}
			return 0;
		}
	}
	if (fParam0 < (fVar735 + 1f))
	{
		if (fParam0 > (fParam1 - 0.2f) || get_entity_speed(Global_35) < 0.7f)
		{
			return 1;
		}
	}
	return 0;
}

int func_507()
{
	if (fVar591 > 10f)
	{
		return 0;
	}
	if (!func_514())
	{
		return 0;
	}
	if (&Local_14.f_98[1] < 10f)
	{
		if (has_entity_clear_los_to_entity(&(uLocal_528[1]), Global_35, 17))
		{
			if (func_682(&(uLocal_528[0]), &(Local_14.f_5), &uLocal_716, 0) || func_682(&(uLocal_528[1]), &(Local_14.f_5), &uLocal_716, 0))
			{
				func_94(&uLocal_600, 0);
			}
			if (func_95(&uLocal_600, 0.5f))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_508()
{
	open_sequence_task(&iVar0);
	func_504(0, Global_35, -1);
	func_146(&(uLocal_528[1]), &iVar0, 0, 0, 1, 1);
}

bool func_509(bool bParam0)
{
	if (bParam0)
	{
		if (func_124(&(uLocal_528[1]), -2017877118) || _0x0b7cb1300cbfe19c(&(uLocal_528[1]), 1))
		{
			return false;
		}
	}
	if (!func_77(vLocal_650))
	{
		vVar0 = { vLocal_650 };
	}
	else
	{
		vVar0 = { get_entity_coords(&(uLocal_528[1]), true, false) };
	}
	fVar3 = vdist(vVar0, Global_36);
	if (!func_95(&uLocal_723, 4f))
	{
		return false;
	}
	if (fVar3 > (fVar736 + 1.25f))
	{
		return true;
	}
	if (!is_ped_facing_ped(Global_35, &(uLocal_528[1]), 80f))
	{
		if (get_entity_speed(Global_35) > 0.5f)
		{
			return true;
		}
	}
	return false;
}

char* func_510(int iParam0)
{
	switch (iVar520)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return "RE_FOOTR_VAL_V1_FAR_01";
				case 1:
					return "RE_FOOTR_VAL_V1_FAR_02";
				case 2:
					return "RE_FOOTR_VAL_V1_FAR_03";
				case 7:
					return "RE_FOOTR_VAL_V1_BEAT_PED_A";
				case 8:
					return "RE_FOOTR_VAL_V1_BEAT_PED_B";
				case 9:
					return "RE_FOOTR_VAL_V1_BEAT_PED_C";
				case 10:
					return "RE_FOOTR_VAL_V1_KILLED";
				case 11:
					return "RE_FOOTR_VAL_V1_WARN_01";
				case 12:
					if (bVar650)
					{
						return "RE_FOOTR_VAL_V2_WARN_FEUD_A";
					}
					else
					{
						return "RE_FOOTR_VAL_V1_WARN_02";
					}
					break;
				case 13:
					return "RE_FOOTR_VAL_V1_WARN_03";
				case 15:
					return "RE_FOOTR_VAL_V1_THUG1_AGGRO";
				case 16:
					return "RE_FOOTR_VAL_V1_THUG2_AGGRO";
				case 17:
					return "RE_FOOTR_VAL_V1_THANK";
				case 14:
					return "RE_FOOTR_VAL_V1_DEPART_01";
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return "RE_FOOTR_RHD_V1_FAR_01";
				case 1:
					return "RE_FOOTR_RHD_V1_FAR_02";
				case 2:
					return "RE_FOOTR_RHD_V1_FAR_03";
				case 3:
					return "RE_FOOTR_RHD_V1_FAR_04";
				case 4:
					return "RE_FOOTR_RHD_V1_FAR_05";
				case 5:
					return "RE_FOOTR_RHD_V1_FAR_06";
				case 6:
					return "RE_FOOTR_RHD_V1_THROW";
				case 7:
					return "RE_FOOTR_RHD_V1_BEAT_PED_A";
				case 8:
					return "RE_FOOTR_RHD_V1_BEAT_PED_B";
				case 9:
					return "RE_FOOTR_RHD_V1_BEAT_PED_C";
				case 10:
					return "RE_FOOTR_RHD_V1_KILLED";
				case 11:
					if (bVar650)
					{
						return "RE_FOOTR_RHD_V2_WARN_FEUD";
					}
					else
					{
						return "RE_FOOTR_RHD_V1_WARN_01";
					}
					break;
				case 12:
					return "RE_FOOTR_RHD_V1_WARN_02";
				case 13:
					return "RE_FOOTR_RHD_V1_WARN_03";
				case 15:
					return "RE_FOOTR_RHD_V1_THUG1_AGGRO";
				case 16:
					return "RE_FOOTR_RHD_V1_THUG2_AGGRO";
				case 17:
					return "RE_FOOTR_RHD_V1_THANK";
				case 14:
					return "HEADS_UP_CONFRONT";
			}
			break;
	}
	return "MISSING";
}

void func_511()
{
	if (!bVar647)
	{
		if (((!func_124(&(uLocal_528[1]), -1942934348) && func_96(-4f, 1, &(uLocal_528[1]), 0)) && !func_263(Local_407[0])) && !func_263(Local_407[1]))
		{
			if (&Local_14.f_98[1] < 4f)
			{
				if (!is_ped_on_mount(Global_35))
				{
					vLocal_650 = { get_entity_coords(&(uLocal_528[1]), true, false) };
					task_confront(&(uLocal_528[1]), Global_35, 2);
					func_125(&uLocal_723);
					if (iVar644 != 0)
					{
						if (!func_294(iVar576, 256))
						{
							func_296(1, Global_35, func_510(12), -1082130432, 1, 1744022339, 1);
							func_297(&uLocal_578, 256, 0);
						}
					}
					iLocal_649 = 1;
				}
			}
		}
	}
}

bool func_512(bool bParam0)
{
	if (bParam0)
	{
		iVar0 = &uLocal_528[0];
	}
	else
	{
		iVar0 = &uLocal_528[2];
	}
	switch (iVar739)
	{
		case 0:
			if (!func_77(vLocal_650) && !is_entity_at_coord(&(uLocal_528[1]), vLocal_650, 1f, 1f, 3f, false, true, 0))
			{
				task_go_straight_to_coord(&(uLocal_528[1]), vLocal_650, 1f, 20000, 1193033728, 1056964608, 0);
				func_513(1);
			}
			else
			{
				func_504(&(uLocal_528[1]), iVar0, 2000);
				func_513(2);
			}
			break;
		case 1:
			if (is_entity_at_coord(&(uLocal_528[1]), vLocal_650, 1f, 1f, 3f, false, true, 0))
			{
				func_504(&(uLocal_528[1]), iVar0, 2000);
				func_513(2);
			}
			else if (!func_124(&(uLocal_528[1]), 2106541073))
			{
				task_go_straight_to_coord(&(uLocal_528[1]), vLocal_650, 1f, 20000, 1193033728, 1056964608, 0);
			}
			break;
		case 2:
			if (is_ped_facing_ped(&(uLocal_528[1]), iVar0, 20f))
			{
				task_play_anim(&(uLocal_528[1]), &(Local_305[7]), Local_305[7]->f_1, 2f, -2f, -1, 1, 0f, false, 0, false, 0, false);
				func_513(4);
			}
			else if (!func_124(&(uLocal_528[1]), -875674219))
			{
				func_504(&(uLocal_528[1]), iVar0, 2000);
			}
			break;
		case 4:
			return true;
	}
	return false;
}

void func_513(int iParam0)
{
	iLocal_742 = iParam0;
}

bool func_514()
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (&iLocal_548[iVar0])
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_515(var uParam0, var uParam1, int iParam2, float fParam3, bool bParam4, bool bParam5, float fParam6, float fParam7)
{
	bVar0 = false;
	bVar1 = false;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		if (func_683(iVar2, bParam5))
		{
			if (func_525(uParam0[iVar2], uParam1, iParam2, &bVar1, fParam3, bParam4, fParam6, 1, fParam7, 1))
			{
				return true;
			}
			else if (bVar1)
			{
				bVar0 = true;
			}
		}
		iVar2++;
	}
	if (!bVar0)
	{
		*iParam2 = 0f;
	}
	return false;
}

void func_516(int iParam0, vector3 vParam1, bool bParam4)
{
	if (bParam4)
	{
		allow_sonar_blips(true);
		force_sonar_blips_this_frame();
	}
	trigger_sonar_blip(iParam0, vParam1);
}

void func_517()
{
	if (!_0x8d81e7824b7753f7(iVar320, "action", 1) && !_0x8d81e7824b7753f7(iVar320, "Exit", 1))
	{
		return;
	}
	if (!func_294(iVar576, 8))
	{
		if (func_278(&(uLocal_528[2]), "bActionDialogue1", 1067030938))
		{
			func_297(&uLocal_578, 8, 0);
		}
	}
	else if (!func_294(iVar576, 16))
	{
		if (func_278(&(uLocal_528[2]), "bActionDialogue2", 1067030938))
		{
			func_297(&uLocal_578, 16, 0);
		}
	}
	else if (!func_294(iVar576, 32))
	{
		if (func_278(&(uLocal_528[2]), "bActionDialogue3", 1067030938))
		{
			func_297(&uLocal_578, 32, 0);
		}
	}
	if (func_54(&(uLocal_528[2]), 0, 0))
	{
		if (((func_278(&(uLocal_528[0]), "PunchOne", 1067030938) || func_278(&(uLocal_528[0]), "PunchTwo", 1067030938)) || func_278(&(uLocal_528[0]), "PunchThree", 1067030938)) || func_278(&(uLocal_528[2]), "bKOPunchHit", 1067030938))
		{
			func_279();
		}
		if (func_323())
		{
			func_52(uLocal_536[2]);
			func_140(&(uLocal_528[2]), 0);
			func_264(Local_471[0], 1, 1);
			func_494(Local_471[1], func_266(10));
			func_324(&(uLocal_528[2]), 1, 1);
			func_17(1094713344);
			if (func_124(&(uLocal_528[1]), -1942934348))
			{
				_0xcbb54cc7ffffab86(player_id(), 0, 0, 0);
				clear_ped_tasks(&(uLocal_528[1]), 1, 0);
			}
			if ((fVar591 < 30f && Local_14.f_48) && !func_50(iVar577, 1048576))
			{
				func_306(2, 0, 0, "RE_HONOR_WITNESSED_CRIME", 0, 0, 1065353216, 0);
			}
		}
	}
}

void func_518(int iParam0)
{
	iLocal_402 = iParam0;
}

void func_519()
{
	if (!bVar745)
	{
		if (func_98(&(uLocal_528[0]), -399030565, "bBlockPedSpeech", uVar0, 1.5f, 1))
		{
			if (!func_96(-5f, 1, 0, 0) && !func_96(0f, 1, &(uLocal_528[0]), 1))
			{
				stop_ped_speaking(&(uLocal_528[0]), true);
				iLocal_747 = 1;
			}
		}
	}
	else if (func_98(&(uLocal_528[0]), -628983578, "bAllowPedSpeech", uVar0, 1.5f, 1))
	{
		stop_ped_speaking(&(uLocal_528[0]), false);
	}
}

bool func_520()
{
	return _get_anim_scene_progress(iVar320) > 0.8f;
}

void func_521()
{
	if (func_98(&(uLocal_528[0]), -1713985637, "bBreakoutStanding", uVar0, 1.6f, 1) && is_ped_facing_ped(&(uLocal_528[1]), Global_35, 30f))
	{
		_0x99b2a2e3655deaf1(&(uLocal_528[0]), "ClosestScenario");
		func_684(&(uLocal_528[0]), Global_36, 6, 0, 1);
		task_turn_ped_to_face_entity(&(uLocal_528[0]), Global_35, -1, -1f, -1f, -1082130432);
	}
}

bool func_522()
{
	if (!is_gameplay_cam_rendering())
	{
		return false;
	}
	fVar0 = (func_213(&Local_14, func_211()) - 10f);
	fVar1 = vdist(Global_36, Local_14.f_51);
	if (fVar1 > fVar0)
	{
		return false;
	}
	if (fVar1 < 10f)
	{
		if (!func_225(Global_35, 1))
		{
			return true;
		}
	}
	if (!func_499() || !func_514())
	{
		return false;
	}
	if (func_685(&(uLocal_528[1]), fVar0, -1082130432, -1082130432, -1082130432) || func_685(&(uLocal_528[2]), fVar0, -1082130432, -1082130432, -1082130432))
	{
		if (iVar746 == 0)
		{
			iLocal_748 = func_460();
			return false;
		}
		else if ((func_460() - iVar746) > 2000)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	iLocal_748 = 0;
	return false;
}

bool func_523()
{
	if (func_263(Local_407[1]))
	{
		return false;
	}
	if (!func_50(iVar577, 131072) && (func_96(0, 1, Global_35, 1) && func_96(0, 1, &(uLocal_528[1]), 1)))
	{
		if (iVar700 == Global_35)
		{
			if (func_95(&uLocal_723, 2f))
			{
				return true;
			}
		}
		else if (func_95(&uLocal_723, 6f))
		{
			return true;
		}
	}
	else if (iVar700 == Global_35)
	{
		if (func_95(&uLocal_723, 2f))
		{
			return true;
		}
	}
	else if (func_95(&uLocal_723, 4f))
	{
		return true;
	}
	return false;
}

bool func_524()
{
	if (!func_96(0, 1, Global_35, 1))
	{
		return false;
	}
	if (func_50(iVar577, 262144))
	{
		return true;
	}
	if (func_98(&(uLocal_528[0]), -343849268, "bCantBreakout", uVar0, 1f, 1) && func_54(&(uLocal_528[2]), 0, 1))
	{
		return false;
	}
	if (!func_53(2, 8))
	{
		return false;
	}
	return true;
}

bool func_525(int iParam0, var uParam1, int iParam2, bool bParam3, float fParam4, bool bParam5, float fParam6, bool bParam7, float fParam8, float fParam9)
{
	if (is_entity_dead(iParam0) || is_entity_dead(player_ped_id()))
	{
		return false;
	}
	if (func_686(player_ped_id(), iParam0, 1) < (fParam8 * fParam8))
	{
		*iParam2 = 0f;
		return true;
	}
	if (fParam6 > 0f)
	{
		if (get_entity_speed(player_ped_id()) > fParam6)
		{
			return false;
		}
	}
	if (func_687(iParam0, bParam5))
	{
		if (func_688(vVar0, iParam0, uParam1, iParam2, bParam3, fParam4, bParam5, bParam7, fParam9))
		{
			return true;
		}
	}
	else if (!bParam7)
	{
		*iParam2 = 0f;
	}
	return false;
}

int func_526()
{
	if (iVar399 >= 5)
	{
		return 1;
	}
	return 0;
}

float func_527(int iParam0)
{
	fVar0 = -1f;
	if (_does_anim_scene_exist(iParam0) && _is_anim_scene_started(iParam0, false))
	{
		fVar0 = _get_anim_scene_progress(iParam0);
	}
	return fVar0;
}

bool func_528()
{
	if (&Local_14.f_98[0] < 6f || &Local_14.f_98[1] < 6f)
	{
		if (has_entity_clear_los_to_entity(&(uLocal_528[0]), Global_35, 17) || has_entity_clear_los_to_entity(&(uLocal_528[1]), Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

float func_529(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

void func_530(var uParam0)
{
	if (!func_93(uParam0))
	{
	}
	if (func_470(uParam0))
	{
		uParam0->f_1 = (func_421() - uParam0->f_2);
		uParam0->f_2 = 0f;
		func_553(uParam0, 2);
	}
}

int func_531(int iParam0, var uParam1, var uParam2)
{
	if (func_263(uParam2))
	{
		return 1;
	}
	if (func_689(iParam0, &uParam1))
	{
		return 1;
	}
	return 0;
}

void func_532(var uParam0)
{
	if (!func_93(uParam0))
	{
	}
	if (!func_470(uParam0))
	{
		uParam0->f_2 = (func_421() - uParam0->f_1);
		func_552(uParam0, 2);
	}
}

void func_533(int iParam0, int iParam1)
{
	decor_set_int(iParam0, "pedRoam_state", iParam1);
}

void func_534(int iParam0, int iParam1)
{
	decor_set_int(iParam0, "pedRoam_behavior", iParam1);
}

void func_535(int iParam0, int iParam1)
{
	decor_set_int(iParam0, "pedRoam_targetRegion", iParam1);
}

bool func_536(int iParam0)
{
	if (!is_itemset_valid(&Global_1396084))
	{
		return false;
	}
	iVar0 = get_itemset_size(&Global_1396084);
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		iVar1 = get_indexed_item_in_itemset(iVar2, &Global_1396084);
		if (_does_item_have_valid_base(iVar1))
		{
			if (decor_exist_on(iVar1, "pedRoam_hashKey"))
			{
				if (decor_get_int(iVar1, "pedRoam_hashKey") == iParam0)
				{
					return true;
				}
			}
		}
		iVar2++;
	}
	return false;
}

int func_537(int iParam0)
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

int func_538(int iParam0)
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

void func_539(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_690();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_691(iParam0);
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
	if (func_692(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_359())
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
	Global_40.f_11095.f_35 = func_693(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_690();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_694(iVar1);
		func_696(func_695(), 0, 4000);
		func_697(Global_40.f_11095.f_35);
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
		func_698(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_700(func_699(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (does_entity_exist(iParam5))
			{
				decor_set_int(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_538(14))
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
					sParam4 = func_701(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_702(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_702(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_700(func_699(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_538(4))
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
					sParam4 = func_701(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_702(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_702(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_699(-1990689970) };
	stat_id_set_int(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		_0xe6b763c7f4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_703(10, 1);
	}
}

void func_540(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

bool func_541()
{
	if (func_704())
	{
		return false;
	}
	if (func_705(&uLocal_589, Local_14.f_5.f_16, &uLocal_528, &(Local_14.f_98), 0, 1, 15f))
	{
		return true;
	}
	return false;
}

void func_542(var uParam0, int iParam1)
{
	if (!uParam0->f_8)
	{
		if (func_95(&(uParam0->f_4), uParam0->f_7))
		{
			if (is_ped_defensive_area_active(&(uLocal_528[iParam1]), false))
			{
				func_706(&(uLocal_528[iParam1]));
				set_ped_combat_movement(&(uLocal_528[iParam1]), 2);
				set_ped_combat_range(&(uLocal_528[iParam1]), 0);
				uParam0->f_8 = 1;
			}
		}
	}
}

int func_543(var uParam0)
{
	if (*uParam0 >= 0)
	{
		_0xdc93f0948f2c28f4(*uParam0);
		*uParam0 = -1;
		return 1;
	}
	return 0;
}

int func_544(int iParam0)
{
	return &(iLocal_729[iParam0]);
}

void func_545(int iParam0)
{
	func_111(&uLocal_0);
	func_707(1, iParam0, 0);
	_0xdd1232b332cbb9e7(3, 1, 0);
	func_708();
}

void func_546()
{
	if (!does_group_exist(iVar699))
	{
		iLocal_701 = create_group(0);
	}
	if (does_group_exist(iVar699))
	{
		func_709(uLocal_528[0], &iLocal_701, 1, 1, 1, 1, 0);
		func_709(uLocal_528[1], &iLocal_701, 0, 1, 1, 1, 0);
		set_group_formation(iVar699, 3);
		set_group_formation_spacing(iVar699, 2f, 1f, 2f);
		_0xb05cc690cde8a4a9(iVar699, 1.5f);
		_0x97c475212b327666(iVar699, 1);
		_0x40c3524d4ed83554(iVar699, 1);
	}
}

void func_547(int iParam0, int iParam1)
{
	func_85(iParam0, iParam1);
}

bool func_548()
{
	if (func_355() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

bool func_549(int iParam0)
{
	return get_ped_config_flag(iParam0, 161, false);
}

bool func_550(int iParam0, bool bParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if ((iParam0 >= 6 && !bParam1) || (iParam0 > 10 && bParam1))
	{
		return false;
	}
	return true;
}

int func_551(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
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
		if (func_216())
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
				if (func_710(iParam0, 1, 1) > fParam4)
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
			fVar1 = func_127(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_125(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!is_entity_dead(iParam1))
				{
					task_look_at_entity(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_711(iParam0, iParam1, fVar1, bParam13))
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
				iVar2 = func_713(func_712(iParam0, sParam2, iParam11, iParam1, network_is_game_in_progress(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

void func_552(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_553(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_554(int iParam0, int iParam1)
{
	decor_set_int(iParam0, "pedRoam_target", iParam1);
}

int func_555(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 12;
		case 1:
			return 12;
		case 2:
			return 9;
		case 3:
			return 3;
		case 76:
			return 3;
		case 4:
			return 12;
		case 7:
			return 3;
		case 12:
			return 12;
		case 13:
			return 13;
		case 14:
			return 3;
		case 82:
			return 13;
		case 87:
			return 13;
		case 17:
			return 12;
		case 18:
			return 12;
		case 92:
			return 12;
		case 119:
			return 12;
		case 27:
			return 12;
		case 29:
			return 4;
		case 95:
			return 13;
		case 31:
			return 12;
		case 32:
			return 11;
		case 33:
			return 11;
		case 34:
			return 11;
		case 97:
			return 12;
		case 98:
			return 12;
		case 38:
			return 12;
		case 40:
			return 11;
		case 102:
			return 2;
		case 48:
			return 13;
		case 49:
			return 12;
		case 106:
			return 2;
		case 107:
			return 12;
		case 54:
			return 13;
		case 57:
			return 12;
		case 109:
			return 2;
		case 58:
			return 12;
		case 111:
			return 12;
		case 112:
			return 2;
		case 113:
			return 3;
		case 115:
			return 3;
		case 67:
			return 13;
		case 64:
			return 13;
		case 65:
			return 12;
		default:
			break;
	}
	return 9;
	return 9;
}

int func_556(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			return 0;
		case 10:
			return 2;
		case 12:
			return 3;
		case 13:
			return 4;
		case 14:
			return 4;
		default:
			break;
	}
	return 0;
}

bool func_557()
{
	if (func_239(&(uLocal_528[2]), 0, &(Local_14.f_5), &uLocal_716, 1, &(Local_14.f_98[2])))
	{
		if (func_54(&(uLocal_528[2]), 0, 0))
		{
			if (func_562())
			{
				return false;
			}
		}
		if (func_714(iVar714))
		{
			func_336(1);
		}
		if (func_54(&(uLocal_528[2]), 0, 1))
		{
			switch (iVar521)
			{
				case 1:
					break;
				case 2:
					if (func_714(iVar714))
					{
						func_296(2, Global_35, "RE_FOOTR_RHD_V1_AGGRO", -1082130432, 1, 1808677283, 1);
					}
					break;
			}
			_task_smart_flee_style_ped(&(uLocal_528[2]), Global_35, 3, 4096, -1082130432, -1, 0);
			set_ped_keep_task(&(uLocal_528[2]), true);
			func_105(uLocal_528[2], Local_407[2], &Local_471, 1, 1);
		}
		func_28(&uLocal_579, 1, 0);
		if (does_blip_exist(&(uLocal_536[2])))
		{
			func_52(uLocal_536[2]);
		}
		return true;
	}
	return false;
}

void func_558()
{
	_0x89f5e7adecccb49c(&(uLocal_528[2]), "INJURED_GENERAL");
	_0x16f798a05bb9e3b5(&(uLocal_528[2]));
	open_sequence_task(&iVar0);
	task_stand_still(0, 100);
	func_146(&(uLocal_528[2]), &iVar0, 0.5f, 0, 1, 1);
	func_94(&uLocal_594, 0);
	func_715();
	func_260(0, 0);
	func_131(&(Local_14.f_5), 0);
	func_132(&(Local_14.f_5), 1);
	func_42(&(Local_14.f_5), 0);
	func_38(&(Local_14.f_5), 0);
	func_43(&(Local_14.f_5), 0);
}

bool func_559()
{
	iVar0 = -1;
	if (func_294(iVar576, 1024))
	{
		if (does_blip_exist(&(uLocal_536[2])))
		{
			func_52(uLocal_536[2]);
		}
		func_561();
		return true;
	}
	if (func_54(&(uLocal_528[2]), 8, 1))
	{
		if (!func_50(iVar577, 33554432))
		{
			iVar0 = func_716();
			if (Local_407[2]->f_1 != -1)
			{
				func_94(&uLocal_625, 0);
				func_265(0, 0);
				func_28(&uLocal_579, 33554432, 0);
			}
		}
		func_717();
		fVar1 = 3f;
		if (func_53(2, 8))
		{
			fVar1 = 7f;
		}
		if (func_95(&uLocal_594, fVar1))
		{
			if (!func_50(iVar577, 64))
			{
				_0xde7b2b4144906cdf(-1073596206, &(uLocal_528[2]));
				func_718();
				func_28(&uLocal_579, 64, 0);
			}
			func_560();
			if (func_50(iVar577, 33554432) && !func_95(&uLocal_625, 3f))
			{
			}
			else if (func_296(2, Global_35, func_510(17), 8f, 1, -417894478, 1))
			{
				set_ped_config_flag(&(uLocal_528[2]), 252, false);
				_trigger_sonar_blip_2(1359446981, &(uLocal_528[2]));
				func_105(uLocal_528[2], Local_407[2], &Local_471, 1, 1);
				func_42(&(Local_14.f_5), 1);
				func_38(&(Local_14.f_5), 1);
				func_43(&(Local_14.f_5), 1);
				func_125(&uLocal_594);
				_0x3a8611bd7bde84f7(iVar696, 15f);
				_0xa3db37edf9a74635(iVar696, &(uLocal_528[2]), 3, 2, 0);
				_0xa3db37edf9a74635(iVar696, &(uLocal_528[2]), 7, 2, 0);
				_0xa3db37edf9a74635(iVar696, &(uLocal_528[2]), 4, 2, 0);
				switch (iVar521)
				{
					case 2:
						_0x1e017404784aa6a3(&(uLocal_528[2]), 268049455);
						break;
					case 1:
						_0x1e017404784aa6a3(&(uLocal_528[2]), -1497728761);
						break;
				}
				task_play_anim(&(uLocal_528[2]), &(Local_305[5]), Local_305[5]->f_1, 8f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
				func_297(&uLocal_578, 1024, 0);
				set_ped_config_flag(&(uLocal_528[2]), 252, true);
				return true;
			}
		}
	}
	return false;
}

void func_560()
{
	func_719(&uLocal_385, &(uLocal_528[2]));
	func_720(Global_35, &(uLocal_528[2]), 1, 1, 1, 0, 0, 0, 0, 1, 1);
	func_721(&(uLocal_528[2]), Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
}

void func_561()
{
	if (func_564(&(uLocal_528[2]), 0, 0, 0) || &Local_14.f_98[2] < 15f)
	{
		switch (iVar521)
		{
			case 1:
				if (!func_50(iVar577, 1073741824))
				{
					_0xc6366a585659d15c(iVar696, "RE_FOOTR_VAL_V1_THANK_RPOS");
					_0x98cd760de43b612e(iVar696, "RE_FOOTR_VAL_V1_THANK_RNEG");
					_0x20c5459379d75c1c(&(uLocal_528[2]), "RE_FOOTR_VAL_V1_THANK_POS");
					_0xa3c53cde922bc78b(&(uLocal_528[2]), "RE_FOOTR_VAL_V1_THANK_NEG");
				}
				else
				{
					_0xc6366a585659d15c(iVar696, 0);
					_0x98cd760de43b612e(iVar696, 0);
					_0x628e742fe1f79c4a(iVar696, 0);
					_0xe37acee15ac50c7e(&(uLocal_528[2]), 0);
					_0x20c5459379d75c1c(&(uLocal_528[2]), 0);
				}
				break;
			case 2:
				if (!func_50(iVar577, 1073741824))
				{
					_0xc6366a585659d15c(iVar696, "RE_FOOTR_RHD_V1_POST_ILO_POS");
					_0x98cd760de43b612e(iVar696, "RE_FOOTR_RHD_V1_POST_ILO_NEG");
					_0x20c5459379d75c1c(&(uLocal_528[2]), "RE_FOOTR_RHD_V1_POST_ILO_POS");
					_0xa3c53cde922bc78b(&(uLocal_528[2]), "RE_FOOTR_RHD_V1_POST_ILO_NEG");
				}
				else
				{
					_0xc6366a585659d15c(iVar696, 0);
					_0x98cd760de43b612e(iVar696, 0);
					_0x628e742fe1f79c4a(iVar696, 0);
					_0xe37acee15ac50c7e(&(uLocal_528[2]), 0);
					_0x20c5459379d75c1c(&(uLocal_528[2]), 0);
				}
				break;
		}
		_0x628e742fe1f79c4a(iVar696, 291934926);
		func_722();
		set_ped_reset_flag(&(uLocal_528[2]), 49, true);
		set_ped_reset_flag(&(uLocal_528[2]), 177, true);
	}
	else
	{
		_0xc6366a585659d15c(iVar696, 0);
		_0x98cd760de43b612e(iVar696, 0);
		_0x628e742fe1f79c4a(iVar696, 0);
		func_57();
	}
}

bool func_562()
{
	if (_0xe33f98bd76490abc(&(uLocal_528[2]), iVar696, 0) || _0xd0b7aeb56229d317(Global_35) == &uLocal_528[2])
	{
		return true;
	}
	return false;
}

void func_563()
{
	_0x58f7db5bd8fa2288(&(uLocal_528[2]));
	set_blocking_of_non_temporary_events(&(uLocal_528[2]), false);
	func_56();
	func_28(&uLocal_579, 1073741824, 0);
	set_ped_flee_attributes(&(uLocal_528[2]), 1024, true);
}

bool func_564(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (func_476(16))
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
					func_723(16);
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

void func_565()
{
	func_56();
	vLocal_640 = { func_337() };
	task_follow_nav_mesh_to_coord(&(uLocal_528[2]), vLocal_640, 1f, -1, 0.25f, 0, 40000f);
}

bool func_566()
{
	if (does_blip_exist(&(uLocal_536[2])))
	{
		func_52(uLocal_536[2]);
	}
	if (func_303(&(uLocal_528[2]), vLocal_640, 0) < 5f)
	{
		return true;
	}
	return false;
}

void func_567()
{
	switch (func_113())
	{
		case 9:
			task_wander_standard(&(uLocal_528[2]), 40000f, 0);
			break;
		case 11:
			task_wander_standard(&(uLocal_528[2]), 40000f, 0);
			break;
	}
}

void func_568()
{
	func_724(23);
}

int func_569(int iParam0)
{
	if (iParam0->f_46 && iParam0->f_48)
	{
		if (iParam0->f_5.f_16 != 16384)
		{
			return 1;
		}
	}
	return 0;
}

void func_570(int iParam0)
{
	iVar0 = func_725(iParam0);
	if (iVar0 != 0)
	{
		func_726(-1, 24, 0, iVar0);
	}
}

void func_571(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (Global_1310750->f_16071 != iParam0 && !bParam2)
	{
		return;
	}
	if (&Global_17504.f_42[iParam0] == 0)
	{
		func_700(func_699(-1029789297), 1);
	}
	Global_17504.f_4++;
	Global_17504.f_42[iParam0] = &Global_17504.f_42[iParam0] + 1;
	(*Global_1310750)[iParam0]->f_110 |= 8;
	if (func_73(iParam0, 2))
	{
		func_727(iParam0, func_402(iParam3));
	}
	if (func_73(iParam0, 1))
	{
		if (iParam4 == -1)
		{
			iParam4 = func_113();
		}
		func_728(iParam0, iParam4);
	}
	if (iParam1 >= 0 && !func_86(iParam0, 65536))
	{
		func_729(iParam0, iParam1);
		func_730(iParam0, func_170(iParam0, iParam1));
		func_309(128);
	}
	func_405(iParam0, (*Global_1310750)[iParam0]->f_37, 1065353216, 0, 0);
	func_406(iParam0, 1);
	if (!bParam2)
	{
		func_309(16);
		Global_17504.f_5 = iParam0;
		Global_17504.f_9 = 1;
		Global_17504.f_7 = 0;
		Global_17504.f_8 = 0;
		func_731(524288);
	}
	if (func_732(iParam0) != 0)
	{
		if (&Global_17504.f_42[iParam0] >= func_732(iParam0))
		{
			Global_17504.f_42[iParam0]->f_6 = 1;
		}
	}
}

void func_572(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_733(&Global_0, 8);
	}
	if (!func_734() || func_355() != -1)
	{
		return;
	}
	func_733(&Global_0, 1);
}

int func_573(int iParam0, bool bParam1)
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

void func_574(int iParam0)
{
	Global_17504.f_2++;
	Global_17504.f_42[iParam0]->f_3++;
	(*Global_1310750)[iParam0]->f_110 |= 2;
}

bool func_575(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	if (func_77(vParam0))
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

bool func_576(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (func_77(vParam0))
	{
		return false;
	}
	return _0x769bb7626b8cdb06(vParam0, fParam3, iParam5, iParam4, 16384);
}

bool func_577(vector3 vParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_1310750->f_16043)
	{
		if (!func_77(*Global_1310750->f_16043[iVar0]))
		{
			if (func_130(vParam0, *Global_1310750->f_16043[iVar0]) < 2500f)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_578()
{
	iVar0 = func_735(func_2());
	if (iVar0 == 8)
	{
		iVar1 = func_227(func_2());
		if (func_229(Global_36, iVar1))
		{
			return false;
		}
	}
	if (func_736(func_600(0)))
	{
		return false;
	}
	if (func_737())
	{
		return false;
	}
	if (is_player_riding_train(player_id()))
	{
		return false;
	}
	return true;
}

float func_579(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

float func_580(float fParam0)
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

bool func_581(var uParam0)
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

int func_582(int iParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, bParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_738(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_583(int iParam0)
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

bool func_584(var uParam0)
{
	return func_138(*uParam0, 4);
}

bool func_585(var uParam0)
{
	return func_138(*uParam0, 64);
}

bool func_586(var uParam0)
{
	return func_138(*uParam0, 8);
}

bool func_587(var uParam0)
{
	return func_138(*uParam0, 128);
}

bool func_588(var uParam0)
{
	return func_138(*uParam0, 2048);
}

void func_589(int iParam0, bool bParam1)
{
	set_ped_config_flag(iParam0, 130, !bParam1);
	set_ped_config_flag(iParam0, 178, bParam1);
}

bool func_590(var uParam0)
{
	return func_138(*uParam0, 1024);
}

bool func_591(var uParam0)
{
	return func_138(*uParam0, 256);
}

void func_592(int iParam0, bool bParam1)
{
	set_ped_config_flag(iParam0, 146, !bParam1);
	set_ped_config_flag(iParam0, 148, !bParam1);
}

bool func_593(var uParam0)
{
	return func_138(*uParam0, 512);
}

bool func_594(var uParam0)
{
	return func_138(*uParam0, 4096);
}

bool func_595(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_596(int iParam0)
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

int func_597(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_739(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_740((386 + iVar28), 1);
			if (func_741(iParam0, &Var0, iVar5, 0))
			{
				if (func_742(iParam0, &Var6, iVar5))
				{
					Var29 = { func_743(iParam0, Var0, iVar5, 0) };
					func_744(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_745(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					func_746(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_747(iParam0, iParam1);
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

void func_598(int iParam0, int iParam1, float fParam2)
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

bool func_599(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_600(bool bParam0)
{
	if (bParam0)
	{
		iVar0 = func_748(1, 0, 0);
	}
	else
	{
		iVar0 = func_2();
	}
	return func_601(iVar0);
}

int func_601(int iParam0)
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

int func_602(int iParam0)
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

int func_603(int iParam0, int iParam1)
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

void func_604(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_368(Global_1310750[iVar0], iParam0))
		{
			if (!func_353(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_749(iVar0) < func_750(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_405(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

bool func_605(int iParam0)
{
	iVar0 = func_751(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

void func_606(int iParam0)
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

void func_607(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_608()
{
	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_752(iVar0, 128))
		{
			func_753(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_609()
{
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_752(iVar0, 128) && func_752(iVar0, 1))
		{
			func_753(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_610(float fParam0)
{
	iVar0 = floor((fParam0 * 1000f));
	if (Global_1393237->f_3 < (get_game_timer() + iVar0))
	{
		Global_1393237->f_3 = (get_game_timer() + iVar0);
	}
}

void func_611()
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_73(iVar0, 16777216))
		{
			if (!func_754(iVar0))
			{
				func_755(iVar0, 4096);
			}
		}
		iVar0++;
	}
}

void func_612(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = ((iParam1 + (60 * iParam2)) + (3600 * iParam3));
	iVar1 = (iVar0 / 2);
	iVar2 = (iVar1 / 60);
	iVar3 = (iVar1 - iVar2 * 60);
	iVar4 = 0;
	switch (iParam0)
	{
		case 0:
			func_354(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_354(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_354(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_354(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_354(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_354(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_354(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_613(float fParam0, bool bParam1, bool bParam2)
{
	fVar0 = func_421();
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

int func_614(int iParam0)
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

int func_615(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

void func_616(int iParam0)
{
	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_477();
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
			func_756(&(Global_1935630->f_34), &(Global_1935630->f_39));
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

var func_617(int iParam0)
{
	return &(Global_1109400->f_276[iParam0]);
}

bool func_618(int iParam0)
{
	iVar0 = Global_1935630->f_40;
	if (func_355() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_757(iParam0);
		}
	}
	else if (!does_entity_exist(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_757(iParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_643(iVar0) == -1)
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

void func_619(int iParam0)
{
	if (*iParam0 & 8 != 0 || *iParam0 & 16 != 0)
	{
		func_758(iParam0);
	}
}

bool func_620(int iParam0, int iParam1, int iParam2)
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
		iVar1 = func_643(iParam2);
	}
	else
	{
		iVar1 = func_642(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_643(iParam0);
	}
	else
	{
		iVar0 = func_642(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_3(*iParam1, 8388608))
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

float func_621(int iParam0, int iParam1)
{
	return func_127(iParam0, iParam1, 1, 1);
}

float func_622(int iParam0)
{
	return iParam0->f_26;
}

bool func_623(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_624(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_85(iParam0, 134217728);
	}
	else
	{
		func_137(iParam0, 134217728);
	}
}

float func_625(int iParam0)
{
	return iParam0->f_17;
}

bool func_626(int iParam0, int iParam1, float fParam2, float fParam3)
{
	if (iParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_3(*iParam0, 4194304))
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

int func_627(int iParam0)
{
	return iParam0->f_18;
}

bool func_628(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (_is_weapon_sniper(func_478(iVar0, 0)))
		{
			if (func_653(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_629(int iParam0)
{
	return iParam0->f_23;
}

int func_630(int iParam0)
{
	return iParam0->f_21;
}

int func_631(int iParam0)
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

bool func_632(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_759(iParam0, vParam4, 0.5f))
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

int func_633(int iParam0)
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
	if (func_760(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_634(int iParam0)
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

bool func_635(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_222(iParam1))
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

bool func_636(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_222(iParam1))
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

bool func_637(int iParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = 40f;
	if (func_222(iParam1))
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

bool func_638(int iParam0, int iParam1)
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

bool func_639(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (func_761(iParam0, 1, 0, 0) != 2055893578)
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

bool func_640(int iParam0)
{
	return !*iParam0 & 2 != 0;
}

bool func_641(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_303(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

int func_642(int iParam0)
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

int func_643(int iParam0)
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

int func_644(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_638(Global_35, &iVar1))
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
		fVar2 = func_127(iParam0, player_ped_id(), 0, 1);
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
		if (func_127(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

bool func_645(int iParam0, int iParam1, bool bParam2)
{
	func_430(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_646(iParam1, iVar0))
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
				if (!bParam2 || !func_646(iParam1, iVar1))
				{
					if (func_303(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_646(int iParam0, int iParam1)
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

bool func_647(int iParam0)
{
	if (func_359())
	{
		return false;
	}
	return func_762((*Global_1347702)[58]->f_15, 1);
}

int func_648(int iParam0)
{
	return iParam0->f_20;
}

int func_649(int iParam0, int iParam1, bool bParam2, float fParam3)
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

bool func_650(int iParam0)
{
	return func_763(iParam0, 2);
}

void func_651(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_111(&(iParam0->f_18));
}

bool func_652()
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

bool func_653(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_654(var uParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || func_249(uParam0->f_6))
	{
		if (is_bit_set(*uParam0, 0))
		{
			if (!bParam2)
			{
				return true;
			}
			if (func_764(uParam0->f_6, bParam1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_655(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_765(iParam0, iParam1))
		{
			if (!func_3(iParam1->f_10, 1))
			{
				set_ped_config_flag(iParam0, 130, false);
				set_ped_config_flag(iParam0, 315, false);
				set_ped_config_flag(iParam0, 297, false);
				set_ped_config_flag(iParam0, 178, true);
				func_103(uParam2, 0, 0, 1, 0);
				func_85(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_3(iParam1->f_10, 1))
		{
			func_766(uParam2);
			set_ped_config_flag(iParam0, 130, true);
			set_ped_config_flag(iParam0, 315, true);
			set_ped_config_flag(iParam0, 297, true);
			set_ped_config_flag(iParam0, 178, false);
			func_137(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_656(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		bVar4 = func_3(iParam4, 32);
		func_475(iParam1, uParam2, 0);
		iVar5 = func_767(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			set_ped_config_flag(*uParam0, 178, false);
			return true;
		}
		func_103(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_3(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_3(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_3(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_3(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_3(iParam4, 8388608) || func_3(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_3(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_3(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_495(iParam1, 4))
		{
			iVar6 |= 1024;
			_0xbb1e41dd3d3c6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_495(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_3(iParam4, 67108864))
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
				iParam6 = func_768(uParam0);
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
			if (func_3(iParam4, 268435456))
			{
				iVar8 = func_769(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_268(iParam1, (*uParam2)[iVar8]);
				}
			}
			if (func_495(iParam1, 23))
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
			if (func_3(iParam4, 2) || func_3(iParam4, 16))
			{
				func_657(*uParam0, 1, 1);
			}
			else
			{
				func_657(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_657(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !is_entity_dead(iParam0))
	{
		set_ped_config_flag(iParam0, 317, bParam1);
	}
}

bool func_658(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_564(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_659(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_770(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_3(iParam10, 32), 1, 0);
			set_bit(iParam2, 1);
		}
	}
	else if (is_bit_set(*iParam2, 1))
	{
		clear_bit(iParam2, 1);
	}
}

void func_660(int iParam0)
{
	if (func_3(iParam0, 4))
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
	if (func_3(iParam0, 16384))
	{
		disable_control_action(0, -485697785, false);
	}
	if (func_3(iParam0, 8))
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
	}
}

bool func_661(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	iVar1 = func_771(1);
	bVar2 = is_bit_set(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = is_ped_on_foot(Global_35);
	bVar10 = is_ped_injured(*uParam0);
	bVar11 = (((_is_ped_carrying(Global_35) || func_772(Global_35)) || func_773(Global_35)) || func_774(Global_35));
	fVar12 = -1f;
	if (func_93(&(iParam1->f_13)))
	{
		fVar12 = func_241(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((*uParam4)[iVar0]->f_8 != iParam12)
		{
			iParam12 = (*uParam4)[iVar0]->f_8;
		}
		bVar4 = func_249((*uParam4)[iVar0]->f_6);
		func_775(*uParam0, (*uParam4)[iVar0], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (is_bit_set(uParam4[iVar0], 20))
		{
			bVar3 = true;
		}
		if (func_776(*uParam0, iParam1, (*uParam4)[iVar0], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_777(iParam12, (*uParam4)[iVar0]->f_6))
				{
					if (!bVar7)
					{
						func_103(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_778(uParam4, 0, 0);
					}
					if (is_bit_set(uParam4[iVar0], 11))
					{
						func_475(iParam1, uParam4, is_bit_set(*iParam1, 6));
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
					if (func_779(iParam1, fParam6, iParam1->f_9))
					{
						func_125(&(iParam1->f_18));
						if (bVar6)
						{
							func_778(uParam4, 0, 0);
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
		func_780(iParam1, fParam2);
	}
	return bVar5;
}

void func_662(var uParam0)
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

void func_663(int* iParam0, var uParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_781((*uParam1)[iVar0]))
		{
			if (is_bit_set(uParam1[iVar0], 20))
			{
				func_780(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_664(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!is_control_pressed(0, -124244224))
		{
			if (func_782(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_496(iParam1, 0);
				func_475(iParam1, uParam2, func_495(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_665(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_125(&(iParam1->f_18));
			return false;
		}
		else if (func_93(&(iParam1->f_18)))
		{
			func_111(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_93(&(iParam1->f_18)))
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
	return func_472(&(iParam1->f_18), fParam2);
	return true;
}

void func_666(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_775(iParam0, (*uParam2)[iVar0], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_667(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

int func_668(int* iParam0)
{
	if (func_495(iParam0, 0))
	{
		if (func_783(iParam0))
		{
			func_667(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

bool func_669(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_551(iParam0, iParam1, sParam2, sParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

void func_670(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_671(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_784(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_785(iParam0))
	{
		return false;
	}
	if (func_786(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_787(iParam0, 1)) || func_788(32768))
	{
		if (!func_787(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_789())
	{
		return false;
	}
	return true;
}

void func_672(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_673(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_674(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_763(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_675(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_676(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

bool func_677()
{
	if (bVar548)
	{
		return get_anim_scene_bool(iVar320, "BASE_BOOL");
	}
	return false;
}

void func_678(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
			if (iVar517 == 1)
			{
				*iParam1 = 0;
				*iParam2 = &uLocal_528[2];
			}
			else
			{
				*iParam1 = 0;
				*iParam2 = &uLocal_528[2];
			}
			*iParam3 = 0;
			break;
		case 1:
			if (iVar517 == 1)
			{
				*iParam1 = 0;
				*iParam2 = &uLocal_528[2];
			}
			else
			{
				*iParam1 = 2;
				*iParam2 = &uLocal_528[0];
			}
			*iParam3 = 1;
			break;
		case 2:
			if (iVar517 == 1)
			{
				*iParam1 = 0;
				*iParam2 = &uLocal_528[2];
			}
			else
			{
				*iParam1 = 0;
				*iParam2 = &uLocal_528[2];
			}
			*iParam3 = 2;
			break;
		case 3:
			*iParam1 = 2;
			*iParam2 = &uLocal_528[0];
			*iParam3 = 3;
			break;
		case 4:
			*iParam1 = 0;
			*iParam2 = &uLocal_528[2];
			*iParam3 = 4;
			break;
		case 5:
			*iParam1 = 2;
			*iParam2 = &uLocal_528[0];
			*iParam3 = 5;
			break;
	}
}

bool func_679(int iParam0, char* sParam1)
{
	if (_is_anim_scene_loaded(iParam0, true, false))
	{
		if (_0x23e33cb9f4a3f547(iParam0, sParam1))
		{
			return true;
		}
	}
	return false;
}

Vector3 func_680(vector3 vParam0)
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

bool func_681(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_130(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

int func_682(int iParam0, int iParam1, var uParam2, float fParam3)
{
	iVar0 = get_frame_count();
	if (iVar0 > iParam1->f_5)
	{
		func_441(iParam1, 0, iVar0);
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
				if (func_453(iParam1, 4000))
				{
					if ((func_454(iParam0, Global_1935630->f_41, *iParam1 & 128 != 0, 0, *iParam1 & 256 != 0) && func_455(iParam1, iParam0)) && func_456(iParam1, iParam0))
					{
						func_458();
						*uParam2 = 2;
						func_443(iParam0, iParam1, *uParam2);
						return 1;
					}
				}
			}
		}
		if (!iParam1->f_1 & 2 != 0)
		{
			if (iParam1->f_12 < 4f)
			{
				if (func_453(iParam1, 4000))
				{
					if ((func_454(iParam0, Global_1935630->f_41, *iParam1 & 128 != 0, 1, *iParam1 & 256 != 0) && func_455(iParam1, iParam0)) && func_456(iParam1, iParam0))
					{
						func_458();
						*uParam2 = 2;
						func_443(iParam0, iParam1, *uParam2);
						return 1;
					}
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*iParam1 & 131072 == 0)
						{
							if (func_457(iParam0, Global_1935630->f_41))
							{
								func_458();
								*uParam2 = 2;
								func_443(iParam0, iParam1, *uParam2);
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
						if (func_457(iParam0, Global_1935630->f_41))
						{
							func_458();
							*uParam2 = 2;
							func_443(iParam0, iParam1, *uParam2);
							return 1;
						}
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*iParam1 & 131072 == 0)
				{
					if (func_461())
					{
						if (func_457(iParam0, Global_1935630->f_42))
						{
							func_458();
							*uParam2 = 2;
							func_443(iParam0, iParam1, *uParam2);
							return 1;
						}
					}
				}
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_447(iParam1, 1065353216))
			{
				if (!iParam1->f_1 & 4 != 0)
				{
					if (func_448(Global_35, iParam0, iParam1))
					{
						func_458();
						*uParam2 = 4;
						func_443(iParam0, iParam1, *uParam2);
						return 1;
					}
				}
				if (!iParam1->f_1 & 256 != 0)
				{
					if (func_449(Global_35, iParam0, iParam1))
					{
						func_458();
						*uParam2 = 256;
						func_443(iParam0, iParam1, *uParam2);
						return 1;
					}
				}
			}
		}
		if (!iParam1->f_1 & 131072 != 0)
		{
			if (func_790(iParam0, iParam1))
			{
				func_458();
				*uParam2 = 131072;
				func_443(iParam0, iParam1, *uParam2);
				return 1;
			}
		}
		if (*iParam1 & 4 != 0)
		{
			if (func_791(iParam0, iParam1))
			{
				func_458();
				*uParam2 = 262144;
				func_443(iParam0, iParam1, *uParam2);
				return 1;
			}
		}
	}
	return 0;
}

bool func_683(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		return true;
	}
	if ((iParam0 % 2) == 0)
	{
		return true;
	}
	return false;
}

void func_684(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6)
{
	if (!func_139(iParam0, 0))
	{
		return;
	}
	if (!is_ped_using_any_scenario(iParam0))
	{
		return;
	}
	if (iParam5 && _0xf9331b3a314eb49d(iParam0))
	{
		_0xf1c03a5352243a30(iParam0);
		return;
	}
	if (func_77(vParam1))
	{
	}
	switch (iParam4)
	{
		case 3:
			_0x802092b07e3b1eea(iParam0, vParam1, iParam6);
			break;
		case 5:
			_0x463803429297117c(iParam0, vParam1, iParam6, 0);
			break;
		case 6:
			_0x62fdad5e01d2dd47(iParam0, vParam1, iParam6, 0);
			break;
		case 4:
			_0xec6935ebe0847b90(iParam0, vParam1);
			break;
		case 2:
			_0xeeed8fafec331a70(iParam0, vParam1, iParam6);
			break;
		case 1:
			_0xf1c03a5352243a30(iParam0);
			break;
		case 7:
			_0xa3a9299c4f2adb98(iParam0);
			break;
		default:
			_0xa3a9299c4f2adb98(iParam0);
			break;
	}
}

int func_685(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_303(iParam0, Global_36, 1);
	}
	if (fParam2 > 0f)
	{
		if (fVar0 < fParam2)
		{
			return 1;
		}
	}
	if (fVar0 < fParam1)
	{
		if (_0x5102307ce88798eb(iParam0))
		{
			if (fParam4 > 0f)
			{
				if (_0x164cecc59e70df86(iParam0, fParam4))
				{
					return 1;
				}
			}
			else if (is_tracked_ped_visible(iParam0))
			{
				return 1;
			}
		}
		else if (!is_entity_occluded(iParam0))
		{
			if (is_entity_on_screen(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_686(int iParam0, int iParam1, bool bParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	if (!does_entity_exist(iParam1))
	{
		return 0f;
	}
	if (bParam2)
	{
		return vdist2(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
	}
	return func_130(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
}

bool func_687(int iParam0, float fParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (!is_entity_occluded(iParam0) && is_entity_on_screen(iParam0))
		{
			if (func_686(player_ped_id(), iParam0, 1) < (fParam1 * fParam1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_688(vector3 vParam0, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7, float fParam8, bool bParam9, int iParam10)
{
	if (does_entity_exist(iParam3))
	{
		if (is_entity_a_ped(iParam3))
		{
			iVar1 = get_ped_index_from_entity_index(iParam3);
			if (!_0x5102307ce88798eb(iVar1))
			{
				request_ped_visibility_tracking(iVar1);
			}
			if (is_gameplay_cam_rendering())
			{
				fVar2 = func_792(iParam10);
				if (fVar2 < 0f)
				{
					if (is_tracked_ped_visible(iVar1))
					{
						bVar0 = true;
					}
				}
				else if (_0x164cecc59e70df86(iVar1, fVar2))
				{
					bVar0 = true;
				}
			}
		}
		else
		{
			bVar0 = func_793(bParam4, player_ped_id(), iParam3);
		}
	}
	else
	{
		bVar0 = func_794(bParam4, player_ped_id(), vParam0);
	}
	if (bVar0)
	{
		*bParam6 = 1;
		if (*iParam5 != 0f)
		{
		}
		if (*iParam5 <= 0f)
		{
			*iParam5 = func_421();
		}
		else if ((func_421() - *iParam5) > bParam7)
		{
			*iParam5 = 0f;
			return true;
		}
	}
	else if (*bParam4 == 2 && bParam4->f_4)
	{
		if (!bParam9)
		{
			*iParam5 = 0f;
		}
	}
	else
	{
		*bParam6 = 1;
	}
	return false;
}

bool func_689(int iParam0, var uParam1)
{
	uVar0 = *uParam1;
	if (_0x3ee1f7a8c32f24e1(iParam0, &uVar0, false, false))
	{
		return true;
	}
	return false;
}

int func_690()
{
	iVar0 = func_795();
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

int func_691(int iParam0)
{
	if (func_355() != -1)
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
	fVar1 = func_152(absf(fVar1) < 1f, func_152(fVar1 < 0f, -1f, 1f), fVar1);
	return ceil(fVar1);
}

bool func_692(int iParam0)
{
	if (!func_796(iParam0))
	{
		return false;
	}
	return func_797(iParam0);
}

int func_693(int iParam0, int iParam1, int iParam2)
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

int func_694(int iParam0)
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

int func_695()
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

void func_696(int iParam0, bool bParam1, int iParam2)
{
	func_798((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_799(iParam0);
}

void func_697(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), 0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), 1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_800(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_698(bool bParam0)
{
	bVar3 = false;
	if (func_801(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_802(iVar5, &iVar2, &iVar0))
			{
				if (!func_803(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_804(iVar2);
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
							if (func_805(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_690() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_690() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_806();
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

struct<2> func_699(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

void func_700(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

char* func_701(int iParam0)
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

var func_702(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_807(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_703(int iParam0, int iParam1)
{
	if (!func_808(iParam0))
	{
		return 0;
	}
	if (!func_734())
	{
		return 0;
	}
	if (!func_809(iParam0, &iVar0, &uVar1))
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

bool func_704()
{
	if (Global_1894899->f_187)
	{
		return true;
	}
	if (func_810(16) && !func_810(21))
	{
		return true;
	}
	return false;
}

bool func_705(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, float fParam6)
{
	if (func_3(uParam0->f_3, 16))
	{
		return true;
	}
	bVar0 = false;
	if (_0x285d36c5c72b0569(Global_35) < 1f || (func_417(Global_1935630->f_44) && _0x705be297eebdb95d(Global_1935630->f_44)))
	{
		bVar0 = true;
	}
	switch (iParam1)
	{
		case 1:
		case 4:
		case 8:
		case 16:
		case 64:
		case 4096:
			bVar0 = true;
			break;
	}
	func_811(uParam0, iParam1);
	func_94(uParam0, 0);
	if (iParam5 < iParam4)
	{
		iParam5 = (*uParam2 - 1);
	}
	fVar16 = Global_36.f_2;
	if ((((((_0x72ad59f7b7fb6e24(player_id(), 8000) || _0x9e2d5d6bc97a5f1e(Global_35, -1569615261, 8000)) || _0x9e2d5d6bc97a5f1e(Global_35, -618550132, 8000)) || _0x3bdfcf25b58b0415(Global_35)) || _0x0e99e3bf11bb6367(Global_35)) || func_54(get_peds_jacker(Global_35), 0, 1)) || get_jack_target(Global_35) != 0)
	{
		func_125(uParam0);
	}
	iVar21 = 1;
	bVar22 = func_812();
	iVar15 = iParam4;
	while (iVar15 <= iParam5)
	{
		if (func_54(uParam2[iVar15], 0, 0))
		{
			if (_get_lassoed_entity(Global_35) == uParam2[iVar15] || _is_ped_hogtied(uParam2[iVar15]))
			{
				bVar0 = true;
			}
			fVar23 = func_303(uParam2[iVar15], Global_36, 1);
			if (fVar23 >= (10f + fParam6))
			{
				iVar1[iVar15] = 1;
			}
			vVar18 = { get_entity_coords(uParam2[iVar15], true, false) };
			fVar17 = vVar18.z;
			if (!bVar22 && absf((fVar17 - fVar16)) > 0.75f)
			{
				iVar8[iVar15] = 1;
			}
			iVar21 = 0;
		}
		else
		{
			iVar1[iVar15] = 1;
			iVar8[iVar15] = 1;
		}
		iVar15++;
	}
	if (iVar21 == 1)
	{
		return false;
	}
	bVar24 = true;
	bVar25 = true;
	iVar15 = iParam4;
	while (iVar15 <= iParam5)
	{
		if (!&iVar1[iVar15])
		{
			bVar24 = false;
		}
		if (!&iVar8[iVar15])
		{
			bVar25 = false;
		}
		iVar15++;
	}
	if (bVar24)
	{
		bVar0 = true;
	}
	if (bVar25)
	{
		bVar0 = true;
	}
	if ((func_124(Global_35, 1868526510) || func_124(Global_35, 1870523043)) || func_124(Global_35, -1794415470))
	{
		bVar0 = true;
	}
	if (func_95(uParam0, 8f))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (func_3(uParam0->f_3, 1) || !func_3(uParam0->f_3, 32))
		{
			func_813(uParam2, iParam4, iParam5, 1);
		}
		else
		{
			func_813(uParam2, iParam4, iParam5, 0);
			_0x362086b911657b1a(player_id(), 1);
			func_85(&(uParam0->f_3), 4);
			func_814(uParam0);
		}
		func_85(&(uParam0->f_3), 16);
		return true;
	}
	return false;
}

void func_706(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		remove_ped_defensive_area(iParam0, true);
		remove_ped_defensive_area(iParam0, false);
	}
}

void func_707(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

void func_708()
{
	_0xdd1232b332cbb9e7(4, 1, 0);
}

void func_709(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	if (!does_group_exist(*iParam1) || is_ped_dead_or_dying(*uParam0, true))
	{
		return;
	}
	set_ped_config_flag(*uParam0, 279, bParam3);
	if (bParam2)
	{
		set_ped_as_group_leader(*uParam0, *iParam1, false);
	}
	else
	{
		set_ped_as_group_member(*uParam0, *iParam1);
		set_ped_config_flag(*uParam0, 280, bParam4);
		_0xbad2a311667a50d7(*uParam0, iParam5);
	}
	_0x97c475212b327666(*iParam1, iParam6);
}

float func_710(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return -1f;
	}
	return func_127(Global_35, iParam0, bParam1, bParam2);
}

bool func_711(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_712(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
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
	return func_815(iParam0, &Var0);
}

int func_713(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_714(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 8:
		case 16:
		case 2048:
			return true;
		default:
			break;
	}
	return false;
}

void func_715()
{
	if (func_54(&(uLocal_528[2]), 0, 0))
	{
		set_ped_config_flag(&(uLocal_528[2]), 301, false);
		set_ped_config_flag(&(uLocal_528[2]), 317, false);
		set_ped_config_flag(&(uLocal_528[2]), 297, true);
		set_ped_config_flag(&(uLocal_528[2]), 406, true);
		set_ped_config_flag(&(uLocal_528[2]), 505, true);
		func_651(Local_407[2], 0);
		func_103(&Local_471, 1, 1, 1, 0);
		switch (iVar521)
		{
			case 1:
				sVar0 = "RE_FOOTR_VAL_V1_THANK_CALLOUT";
				sVar1 = "RE_FOOTR_VAL_V1_THANK_RNEG";
				sVar2 = "";
				break;
			case 2:
				sVar0 = "RE_FOOTR_RHD_V1_THANK_CALLOUT";
				sVar1 = "RE_FOOTR_RHD_V1_POST_ILO_NEG";
				sVar2 = "";
				break;
		}
		func_267(Local_471[0], func_266(7), sVar0, -163964935, 0, 0, 0, 1, 0);
		func_267(Local_471[1], func_266(10), sVar1, 648122183, 0, 0, 0, 1, 0);
		func_267(Local_471[2], func_266(12), sVar2, -1616532217, 0, 0, 0, 1, 0);
		func_265(1, 0);
		func_265(2, 0);
		_0x3a8611bd7bde84f7(iVar696, 15f);
		_0x24c82ef607105faa(&(uLocal_528[2]), 1789063806);
		_0xa3db37edf9a74635(iVar696, &(uLocal_528[2]), 7, 2, 1);
		_0xa3db37edf9a74635(iVar696, &(uLocal_528[2]), 4, 2, 1);
		_0x06d26a96ca1bca75(&(uLocal_528[2]), 8, 1f, 0);
	}
}

int func_716()
{
	iVar0 = func_262(uLocal_528[2], Local_407[2], 15f, &Local_471, &(Local_14.f_192), 2f, 1, 0, "", func_261(3, 0, 0), 0, 0, 2, 0, -1082130432, 0);
	iVar1 = iVar0;
	if (Local_407[2]->f_1 != -1)
	{
		func_260(0, 0);
	}
	switch (iVar1)
	{
		case 1:
			if (iVar521 == 1)
			{
				set_ped_keep_task(&(uLocal_528[2]), true);
				_task_smart_flee_style_ped(&(uLocal_528[2]), Global_35, 3, 4096, -1082130432, -1, 0);
				func_28(&uLocal_579, 1, 0);
			}
			func_816(&Local_471, 1, 1);
			func_28(&uLocal_579, 32768, 0);
			break;
		case 0:
			func_816(&Local_471, 1, 1);
			func_28(&uLocal_579, 32768, 0);
			break;
	}
	return iVar1;
}

void func_717()
{
	if (func_564(&(uLocal_528[2]), 0, 0, 0))
	{
		switch (iVar521)
		{
			case 1:
				_0xc6366a585659d15c(iVar696, "RE_FOOTR_VAL_V1_CALLOUT");
				break;
			case 2:
				_0xc6366a585659d15c(iVar696, "RE_FOOTR_RHD_V1_CALLOUT");
				break;
		}
		_0x628e742fe1f79c4a(iVar696, 291934926);
	}
	else
	{
		_0xc6366a585659d15c(iVar696, 0);
		_0x98cd760de43b612e(iVar696, 0);
		_0x628e742fe1f79c4a(iVar696, 0);
	}
}

void func_718()
{
	func_817(&uLocal_660);
	func_818(Global_35, &(uLocal_528[2]), &uLocal_660, 0f, 0f, 0f, 0, 0, 1, 1069547520, -1082130432, 1073069561, 1056964608, 1092616192, -1, 1, 0, 0, 0, 1);
	func_819(&(uLocal_528[2]), Global_35, &uLocal_660, -1082130432, 0, 0, -1082130432, -1082130432, 1, 8, 0, 0, 1069547520, 1073741824, 1050253722, 1067030938, 0, 0, -1, 1, -1082130432, -1082130432, 1);
	func_820(&uLocal_385);
}

void func_719(var uParam0, var uParam1)
{
	if (_0xdd0b7c5ae58f721d(uParam0) && !_0x927b810e43e99932(uParam0))
	{
		_0xb8b207c34285e978(uParam0);
		uVar0[0] = uParam1;
		_0xfeb8646818294c75(uParam0, &uVar0);
	}
}

void func_720(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
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
		func_821(bParam4, bParam5, bParam6, bParam7, bParam3, bParam9, bParam10);
		if (bParam2)
		{
			set_ped_reset_flag(iParam0, 188, true);
		}
	}
}

void func_721(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
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
		func_821(bParam4, bParam5, bParam6, bParam7, bParam3, bParam9, bParam10);
		if (bParam2)
		{
			set_ped_reset_flag(iParam0, 188, true);
		}
	}
}

void func_722()
{
	if (!bVar709)
	{
		switch (iVar521)
		{
			case 2:
				_0x1e017404784aa6a3(Global_35, -303847386);
				break;
			case 1:
				_0x1e017404784aa6a3(Global_35, 448417000);
				break;
		}
		iLocal_711 = 1;
	}
}

void func_723(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

void func_724(int iParam0)
{
	if (func_355() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_139(func_822(iVar0), 0))
		{
			if (is_ped_group_member(func_822(iVar0), func_357(), 1))
			{
				func_823(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

int func_725(int iParam0)
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

void func_726(int iParam0, int iParam1, int iParam2, int iParam3)
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
					if (func_824() > Global_32074.f_2697.f_6[iVar0]->f_5)
					{
						Global_32074.f_2697.f_6[iVar0]->f_5 = func_824();
					}
					func_825(&(Global_32074.f_2697.f_6[iVar0]->f_5), 0, 0, iParam1, iParam2, 0, 0, 0);
					func_137(&(Global_1415419->f_19[iVar0]->f_11), 2);
				}
			}
			iVar0++;
		}
	}
}

void func_727(int iParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		iVar0 = func_602(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_603(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2]->f_1++;
	}
}

void func_728(int iParam0, int iParam1)
{
	if (iParam1 != -1 && !func_86(iParam0, 8192))
	{
		iVar0 = func_603(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0]->f_1++;
	}
}

void func_729(int iParam0, int iParam1)
{
	iVar0 = (func_364(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	set_bit(Global_17504.f_12[iVar1], iVar2);
}

void func_730(int iParam0, vector3 vParam1)
{
	if (func_73(iParam0, 512))
	{
		vParam1 = { Global_36 };
	}
	if (func_77(vParam1))
	{
		return;
	}
	if (!func_184(iParam0))
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Global_17504.f_2084)
	{
		vVar2 = { *Global_17504.f_2084[iVar0] };
		if (func_77(vVar2))
		{
			if (iVar1 < 0)
			{
				iVar1 = iVar0;
			}
		}
		else if (Global_17504.f_2084[iVar0]->f_3 == iParam0)
		{
			if (func_378(vVar2, vParam1, 1f, 1))
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

void func_731(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		func_755(iVar0, iParam0);
		iVar0++;
	}
}

int func_732(int iParam0)
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

void func_733(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_734()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

int func_735(int iParam0)
{
	if (!func_439(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_20;
}

bool func_736(int iParam0)
{
	return (Global_1310750->f_16074 && iParam0) != 0;
}

bool func_737()
{
	return Global_1894899 & 2 != 0;
}

void func_738(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_826(iParam1))
		{
			func_827(iParam0, 41788943);
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
			func_828(iParam0, 0, 1);
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
			func_829(iParam0, 0);
			bVar0 = true;
		}
		func_830(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

struct<5> func_739(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_831(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_805(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_743(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_832(bParam1) };
			if (bParam2 && func_833(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_741(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_741(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_742(iParam0, &Var5, 1728382685))
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
			Var0 = { func_834(bParam1) };
			switch (func_835(iParam0))
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
			if (func_836(iParam0, -1823706425))
			{
				Var0 = { func_743(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_836(iParam0, -1483207246))
			{
				Var0 = { func_743(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_837(Var0, &Var27, bParam1, 0))
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

int func_740(int iParam0, int iParam1)
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

bool func_741(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_838(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_742(int iParam0, var uParam1, int iParam2)
{
	if (func_839(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_743(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_803(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_840(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_744(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_841(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_837(*uParam1, &Var0, bParam6, 0))
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
	if (!func_745(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_840(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_745(bool bParam0)
{
	if (func_355() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_840(bParam0));
}

int func_746(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_842(iParam0))
	{
		return 0;
	}
	if (!func_745(0))
	{
		return 0;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_747(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_843(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

int func_748(int iParam0, bool bParam1, bool bParam2)
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
				if (!bParam1 || func_844(iVar2))
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

int func_749(int iParam0)
{
	if (func_184(iParam0))
	{
		return Global_17504.f_42[iParam0]->f_4;
	}
	return 0;
}

int func_750(int iParam0)
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

int func_751(int iParam0, int iParam1)
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

bool func_752(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return false;
	}
	return (Global_1393237->f_11[iParam0]->f_10 && iParam1) != 0;
}

void func_753(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return;
	}
	Global_1393237->f_11[iParam0]->f_10 = (Global_1393237->f_11[iParam0]->f_10 || iParam1);
}

bool func_754(int iParam0)
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

void func_755(int iParam0, int iParam1)
{
	if (!func_184(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_1 = ((*Global_1310750)[iParam0]->f_1 - ((*Global_1310750)[iParam0]->f_1 && iParam1));
}

void func_756(var uParam0, var uParam1)
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

int func_757(int iParam0)
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

void func_758(int iParam0)
{
	if (Global_1935630->f_38 == 0)
	{
		func_137(iParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1935630->f_34[iVar0])))
				{
					func_85(iParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

bool func_759(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_760(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_761(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_762(int iParam0, bool bParam1)
{
	switch (func_845(iParam0))
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

bool func_763(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

bool func_764(int iParam0, bool bParam1)
{
	if (bParam1 && !func_249(iParam0))
	{
		return false;
	}
	return !func_763(iParam0, 4);
}

bool func_765(int iParam0, int* iParam1)
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
		if (is_ped_in_combat(iParam0, func_846((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_766(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_781((*uParam0)[iVar0]))
		{
			func_488((*uParam0)[iVar0], 14);
		}
		iVar0++;
	}
}

int func_767(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(*uParam2)[iVar0]->f_8 = 6;
		func_847(iParam0, (*uParam2)[iVar0], fParam3, 3, 0, 6, bParam4, 0);
		if (func_249((*uParam2)[iVar0]->f_6))
		{
			func_488((*uParam2)[iVar0], 11);
			return (*Global_1945938)[(*uParam2)[iVar0]->f_6]->f_3;
		}
	}
	return 0;
}

int func_768(var uParam0)
{
	iVar0 = func_346(*uParam0);
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

int func_769(var uParam0, int iParam1)
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

void func_770(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_847(iParam0, (*uParam1)[iVar0], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			clear_bit((*uParam1)[iVar0], 14);
		}
		iVar0++;
	}
}

int func_771(int iParam0)
{
	return _money_get_cash_balance();
}

bool func_772(int iParam0)
{
	return (func_848(iParam0, 4) || func_848(iParam0, 5));
}

int func_773(int iParam0)
{
	return func_848(iParam0, 7);
}

int func_774(int iParam0)
{
	return func_848(iParam0, 6);
}

void func_775(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (is_bit_set(*iParam1, 14))
	{
		if (func_781(iParam1))
		{
			clear_bit(iParam1, 14);
			func_847(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_776(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_849(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_764(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_493(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_493(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_850(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_777(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_851(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_852(iParam1, 1))
	{
		func_853(iParam1, 1);
		return true;
	}
	return false;
}

void func_778(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_487((*uParam0)[iVar0], bParam1, bParam2);
		iVar0++;
	}
}

bool func_779(int* iParam0, float fParam1, bool bParam2)
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

void func_780(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		disable_control_action(0, 1101824977, true);
		disable_control_action(0, 966551065, true);
		disable_control_action(0, 668058244, true);
		set_ped_reset_flag(Global_35, 203, true);
	}
}

bool func_781(int* iParam0)
{
	if (!is_string_null_or_empty(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_782(int iParam0)
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

bool func_783(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

bool func_784(int iParam0, int iParam1)
{
	if (func_355() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_785(int iParam0)
{
	if (func_355() != -1)
	{
		if (func_787(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_787(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_786(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_787(iParam0, 65536) && !func_787(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_787(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_787(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_787(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_788(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_789()
{
	return Global_1905944->f_5694;
}

bool func_790(int iParam0, int iParam1)
{
	fVar0 = func_854(iParam1);
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
		fVar2 = func_855(_0x2ba9d7bf629f920c(iParam0), (fVar0 + 5f));
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
					if (func_856())
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

bool func_791(int iParam0, int iParam1)
{
	if (func_222(iParam0))
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

float func_792(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1f;
		case 1:
			return 30f;
		case 2:
			return 80f;
		default:
			break;
	}
	return -1f;
}

int func_793(bool bParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam1))
	{
		return 0;
	}
	if (!does_entity_exist(iParam2))
	{
		return 0;
	}
	vVar0 = { func_857(iParam1) };
	vVar3 = { func_857(iParam2) };
	return func_858(bParam0, vVar0, vVar3, iParam2);
}

int func_794(bool bParam0, int iParam1, vector3 vParam2)
{
	if (is_entity_dead(iParam1))
	{
		return 0;
	}
	vVar0 = { func_857(iParam1) };
	return func_858(bParam0, vVar0, vParam2, 0);
}

int func_795()
{
	return Global_40.f_11095.f_35;
}

bool func_796(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_797(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_798(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_859(bParam1);
	}
}

void func_799(int iParam0)
{
	_0x74bcceb233ad95b2(-156028329, iParam0);
}

char* func_800(int iParam0)
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

bool func_801(int iParam0)
{
	if (!func_860(23, &vVar0))
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

bool func_802(int iParam0, int iParam1, int iParam2)
{
	if (!func_860(23, &Var0))
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

bool func_803(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_804(int iParam0)
{
	return iParam0;
}

int func_805(int iParam0)
{
	if (!func_803(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_806()
{
	iVar0 = func_690();
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

void func_807(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

bool func_808(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_809(int iParam0, int iParam1, var uParam2)
{
	if (!func_808(iParam0))
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

bool func_810(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_762((*Global_1835011)[iParam0]->f_1, 1);
	}
	return (_unlock_is_unlocked((*Global_1835011)[iParam0]->f_2) && !_unlock_is_visible((*Global_1835011)[iParam0]->f_2));
}

void func_811(var uParam0, int iParam1)
{
	if (func_3(uParam0->f_3, 8))
	{
		return;
	}
	if (func_3(uParam0->f_3, 2))
	{
		return;
	}
	switch (iParam1)
	{
		case 1:
		case 2:
		case 4:
		case 8:
		case 16:
		case 32:
		case 64:
		case 128:
		case 256:
		case 512:
		case 1024:
		case 2048:
			func_85(&(uParam0->f_3), 1);
			break;
	}
	func_85(&(uParam0->f_3), 8);
}

int func_812()
{
	if (Global_1935630->f_40 != 0)
	{
		return 1;
	}
	if (_0x9e2d5d6bc97a5f1e(Global_35, -1569615261, 5000) || _0x9e2d5d6bc97a5f1e(Global_35, -618550132, 5000))
	{
		return 1;
	}
	if (is_ped_in_any_vehicle(Global_35, false))
	{
		return 1;
	}
	if (is_ped_being_jacked(Global_35))
	{
		return 1;
	}
	if (!is_entity_upright(Global_35, 90f))
	{
		return 1;
	}
	if (is_ped_getting_up(Global_35))
	{
		return 1;
	}
	if (is_ped_ragdoll(Global_35))
	{
		return 1;
	}
	return 0;
}

void func_813(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3)
	{
		iVar0 = iParam1;
		while (iVar0 <= iParam2)
		{
			if (does_entity_exist(uParam0[iVar0]))
			{
				set_ped_config_flag(uParam0[iVar0], 494, true);
				set_ped_config_flag(uParam0[iVar0], 6, false);
			}
			iVar0++;
		}
	}
}

void func_814(var uParam0)
{
	if (func_3(uParam0->f_3, 4))
	{
		_0x785177e4d57d7389(player_id(), -2130852007, 0, 0, -1);
		_0x785177e4d57d7389(player_id(), -102241052, 0, 0, -1);
		_0x785177e4d57d7389(player_id(), 1171995096, 3, 0, -1);
	}
}

bool func_815(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

void func_816(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_264((*uParam0)[iVar0], bParam1, bParam2);
		iVar0++;
	}
}

void func_817(var uParam0)
{
	*uParam0 = 1;
	uParam0->f_3 = 0f;
	uParam0->f_4 = 1f;
	uParam0->f_5 = 1f;
	uParam0->f_16 = -571529030;
	uParam0->f_17 = 0f;
	uParam0->f_18 = 0.5f;
	uParam0->f_19 = -1;
	uParam0->f_20 = 6;
	uParam0->f_21 = 1;
	uParam0->f_23 = 69632;
}

void func_818(int iParam0, int iParam1, var uParam2, vector3 vParam3, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16, int iParam17, int iParam18, bool bParam19)
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
	if (!is_string_null_or_empty(sParam6))
	{
		if (iParam7 == 0)
		{
			iParam7 = 14;
		}
		Var0 = 2;
		Var0.f_4 = sParam6;
		Var0.f_5 = iParam7;
		Var0.f_7 = iParam16;
		Var0.f_9 = iParam17;
		task_lead_and_converse(iParam0, iParam1, &Var0, iParam8, iParam9, iParam10, iParam11, iParam13, iParam12);
	}
	else if (!func_595(vParam3, 0f, 0f, 0f))
	{
		Var11 = 0;
		Var11.f_1 = { vParam3 };
		Var11.f_7 = iParam16;
		Var11.f_9 = iParam17;
		Var11.f_8 = iParam18;
		task_lead_and_converse(iParam0, iParam1, &Var11, iParam8, iParam9, iParam10, iParam11, iParam13, iParam12);
	}
	if (bParam15)
	{
		_set_ped_crouch_movement(iParam0, false, 0, false);
	}
	if (bParam19)
	{
		func_861(iParam0, iParam1, iParam14);
	}
}

void func_819(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, bool bParam19, int iParam20, int iParam21, bool bParam22)
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
		task_follow_and_converse_with_ped(iParam0, iParam1, iParam4, iParam5, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13);
	}
	if (bParam19)
	{
		_set_ped_crouch_movement(iParam0, false, 0, false);
	}
	if (bParam22)
	{
		func_861(iParam0, iParam1, iParam18);
	}
}

void func_820(char* sParam0)
{
	StringCopy(sParam0, "walk_and_talk", 64);
	StringCopy(&(sParam0->f_8), "WALK_AND_TALK_REQUEST", 64);
	_0x6a4d224fc7643941(sParam0);
}

void func_821(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
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
	func_862(0);
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

int func_822(int iParam0)
{
	if (!func_863(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

void func_823(int iParam0, int iParam1)
{
	if (!func_864(iParam0))
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

int func_824()
{
	return &Global_1899515;
}

void func_825(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_865(*uParam0);
	iVar1 = func_866(*uParam0);
	iVar2 = func_867(*uParam0);
	iVar3 = func_189(*uParam0);
	iVar4 = func_868(*uParam0);
	iVar5 = func_869(*uParam0);
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
	iVar6 = func_870(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_870(iVar1, iVar0);
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
	func_871(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_826(int iParam0)
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

void func_827(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_872(iParam0, iParam1))
		{
			if (func_873(iParam0, iParam1))
			{
				if (func_874(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_875(iParam0);
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

void func_828(int iParam0, int iParam1, bool bParam2)
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

void func_829(int iParam0, bool bParam1)
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

void func_830(int iParam0, int iParam1)
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

struct<4> func_831(bool bParam0)
{
	return func_743(1328661203, func_876(), -1591664384, bParam0);
}

struct<4> func_832(bool bParam0)
{
	iVar0 = func_840(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_743(923904168, func_831(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_743(923904168, func_831(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_743(923904168, func_831(bParam0), -740156546, 0);
}

bool func_833(int iParam0, bool bParam1)
{
	if (func_835(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_692(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_834(bool bParam0)
{
	iVar0 = func_840(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_743(271701509, func_831(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_743(271701509, func_831(bParam0), 12999093, 0);
}

int func_835(int iParam0)
{
	if (!func_803(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_836(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_835(iParam0);
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

bool func_837(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_840(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_838(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_803(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_743(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_840(bParam6), &Var0, 0);
	return uVar4;
}

bool func_839(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_840(0);
	*uParam1 = { func_743(iParam0, func_832(0), iParam3, 0) };
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

int func_840(bool bParam0)
{
	if (func_355() == -1)
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

bool func_841(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

bool func_842(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_843(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_844(int iParam0)
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

int func_845(int iParam0)
{
	if (!func_435(iParam0))
	{
		return -1;
	}
	return func_877(iParam0);
}

int func_846(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_847(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (func_249(iParam1->f_6))
	{
		if (bParam7 || is_bit_set(*iParam1, 11))
		{
			return;
		}
		func_250(&(iParam1->f_6), 0, 1);
	}
	if (!func_249(iParam1->f_6) && !is_bit_set(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_781(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_878(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_249(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_850(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_879(iParam1->f_6, 17, 1, 1);
				}
				if (is_bit_set(*iParam1, 1))
				{
					if (is_bit_set(*iParam1, 3))
					{
						func_880(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_491(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (is_bit_set(*iParam1, 10))
				{
					func_879(iParam1->f_6, 16, 1, 1);
				}
				if (!is_bit_set(*iParam1, 0) || is_bit_set(*iParam1, 13))
				{
					func_493(iParam1->f_6, 0, 1);
				}
				else
				{
					func_493(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_848(int iParam0, int iParam1)
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

bool func_849(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

void func_850(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam3 && !func_249(iParam0))
	{
		return;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = func_473(iParam0);
	func_879(iParam0, 18, 0, 1);
	func_879(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = _uiprompt_get_group_id_for_target_entity(iParam1);
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam4, iParam2);
}

bool func_851(int iParam0, bool bParam1)
{
	if (bParam1 && !func_249(iParam0))
	{
		return false;
	}
	iVar0 = func_473(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

bool func_852(int iParam0, bool bParam1)
{
	if (bParam1 && !func_249(iParam0))
	{
		return false;
	}
	iVar0 = func_473(iParam0);
	return _uiprompt_is_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_853(int iParam0, bool bParam1)
{
	if (bParam1 && !func_249(iParam0))
	{
		return;
	}
	iVar0 = func_473(iParam0);
	_uiprompt_restart_modes((*Global_1945938)[iVar0]->f_3);
}

float func_854(int iParam0)
{
	if (!*iParam0 & 1 != 0)
	{
		return func_136(iParam0);
	}
	if (_0x25ca89b2a39dcc69() > 0.833f)
	{
		return func_881(iParam0);
	}
	return func_136(iParam0);
}

float func_855(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_856()
{
	iVar0 = func_189(func_188());
	iVar1 = func_868(func_188());
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

Vector3 func_857(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if (is_entity_a_ped(iParam0))
		{
			iVar9 = get_ped_index_from_entity_index(iParam0);
			vVar0 = { get_ped_bone_coords(iVar9, 21030, 0f, 0f, 0f) };
			vVar0.f_2 = (vVar0.z + 0.25f);
		}
		else
		{
			iVar10 = get_entity_model(iParam0);
			get_model_dimensions(iVar10, &vVar3, &vVar6);
			vVar3 = { get_offset_from_entity_in_world_coords(iParam0, vVar3) };
			vVar6 = { get_offset_from_entity_in_world_coords(iParam0, vVar6) };
			vVar0.x = ((vVar3.x + vVar6.x) / 2f);
			vVar0.f_1 = ((vVar3.y + vVar6.y) / 2f);
			vVar0.f_2 = func_882(vVar3.z, vVar6.z, 0.75f);
		}
	}
	if (func_77(vVar0))
	{
	}
	return vVar0;
}

int func_858(bool bParam0, vector3 vParam1, vector3 vParam4, int iParam7)
{
	bParam0->f_4 = 0;
	switch (*bParam0)
	{
		case 0:
			func_883(bParam0);
			bParam0->f_1 = start_shape_test_los_probe(vParam1, vParam4, 83, iParam7, 7);
			_0x04aa59ca40571c2e(bParam0->f_1, 15);
			*bParam0 = 1;
			break;
		case 1:
			if (get_shape_test_result(bParam0->f_1, &(bParam0->f_2), &uVar0, &uVar3, &uVar6) == 2)
			{
				if (bParam0->f_2 == 0)
				{
					*bParam0 = 3;
					return 1;
				}
				else
				{
					bParam0->f_4 = 1;
					*bParam0 = 0;
					return 0;
				}
			}
			else if (get_shape_test_result(bParam0->f_1, &(bParam0->f_2), &uVar0, &uVar3, &uVar6) == 0)
			{
				*bParam0 = 3;
			}
			break;
		case 3:
			*bParam0 = 0;
			break;
	}
	return 0;
}

void func_859(bool bParam0)
{
	func_884(bParam0);
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

bool func_860(int iParam0, var uParam1)
{
	if (!func_885(iParam0))
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

void func_861(int iParam0, int iParam1, int iParam2)
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

void func_862(bool bParam0)
{
	if (bParam0)
	{
		func_886(4);
	}
	func_886(2);
	set_bit(&(Global_1956580->f_1), 0);
}

bool func_863(int iParam0)
{
	return iParam0 > -1;
}

bool func_864(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

int func_865(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_713(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_866(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_867(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_868(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_869(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_870(int iParam0, int iParam1)
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

void func_871(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_887(uParam0, iParam6);
	func_888(uParam0, iParam5);
	func_889(uParam0, iParam4);
	func_890(uParam0, iParam3);
	func_891(uParam0, iParam2);
	func_892(uParam0, iParam1);
}

bool func_872(int iParam0, int iParam1)
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

bool func_873(int iParam0, int iParam1)
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

bool func_874(int iParam0, int iParam1)
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
	if (!func_872(iParam0, iVar0))
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

void func_875(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

struct<4> func_876()
{
	return Var0;
}

int func_877(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_893(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_878(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_763(iVar0, 2))
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
				func_894(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, uParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_879(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_249(iParam0))
	{
		return;
	}
	iVar0 = func_473(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_880(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (bParam4 && !func_249(iParam0))
	{
		return;
	}
	iVar0 = func_473(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(10, sParam1, sParam2, sParam3));
}

var func_881(int iParam0)
{
	return iParam0->f_25;
}

float func_882(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

void func_883(bool bParam0)
{
	*bParam0 = 0;
	bParam0->f_2 = -1;
	bParam0->f_3 = 0;
	bParam0->f_4 = 0;
}

void func_884(bool bParam0)
{
	_0xb6fd96420c0126a1(-1056478928, bParam0);
}

bool func_885(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

void func_886(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 || iParam0);
}

void func_887(var uParam0, int iParam1)
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

void func_888(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || shift_left(iParam1, 22));
}

void func_889(var uParam0, int iParam1)
{
	iVar0 = func_866(*uParam0);
	iVar1 = func_865(*uParam0);
	if (iParam1 < 1 || iParam1 > func_870(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || shift_left(iParam1, 17));
}

void func_890(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || shift_left(iParam1, 12));
}

void func_891(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || shift_left(iParam1, 6));
}

void func_892(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || shift_left(iParam1, 0));
}

int func_893(int iParam0)
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

void func_894(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, var uParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_674(iParam0, 1);
	func_675(iParam0, 1);
	func_676(iParam0, 128);
}

