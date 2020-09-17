void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_448 = "REAA";
	iLocal_1046 = 3;
	fLocal_1132 = 3f;
	fLocal_1133 = 1.4f;
	iLocal_1413 = 1;
	if (has_force_cleanup_occurred(523))
	{
		iLocal_1097 = 1;
	}
	if (!bVar1095)
	{
		Local_26.f_3 = func_1(&vScriptParam_0);
		func_2(&(Local_26.f_5), 1);
		func_3(&(Local_26.f_5), 1);
		func_4(&(Local_26.f_5), 1);
		func_5(&(Local_26.f_5), 1);
		func_6(&(Local_26.f_5), 1);
		func_7(&(Local_26.f_5), 0);
		func_8(&uLocal_1333, 0);
		func_3(&uLocal_1333, 1);
		func_2(&uLocal_1333, 1);
		func_9(&uLocal_1333, 0.8f);
		func_10(&uLocal_1333, 1);
		func_11(&uLocal_1333, 1);
		func_12(&uLocal_1333, 1);
		func_13(&uLocal_1333, 1);
		func_7(&uLocal_1333, 1);
		func_14(&uLocal_1333, 1);
		func_15(&uLocal_1333, 3600);
		func_16(&uLocal_1333, 0f);
		func_8(&uLocal_1361, 0);
		func_3(&uLocal_1361, 1);
		func_5(&uLocal_1361, 1);
		Local_26.f_161 = func_17(vScriptParam_0.z, 2);
		func_18(&Local_26, 1);
	}
	while (true)
	{
		func_20(bVar1095, 2311, 0);
		if (bVar1095)
		{
			wait(0);
		}
		else
		{
			switch (iVar1411)
			{
				case 1:
					if (func_21(&Local_26, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						iLocal_1416 = func_22(Local_26.f_51);
						func_23();
						func_24(&Local_26, &iLocal_1416, &(Local_26.f_51.f_4));
						func_26(func_25(), iVar1414);
						if (iLocal_228 != 2)
						{
						}
						else if ((func_27(26) || func_28(26)) || !func_29())
						{
							func_19();
						}
						func_30();
						Local_604[0]->f_6 = { Local_26.f_51 };
						func_31();
						iLocal_1408 = _create_volume_sphere(Local_26.f_51, 0f, 0f, 0f, 80f, 80f, 80f);
						_0xb56d41a694e42e86(iVar1406, 4288, 16384, 0, -1, -1, 2);
						_0x18262cafebb5fbe1(iVar1406, 4288, 16384, 0, -1, -1, 2);
						iLocal_1413 = 0;
					}
					else if (Local_26.f_160)
					{
						func_19();
					}
					break;
				case 0:
					if (func_32())
					{
						iLocal_1413 = 3;
					}
					break;
				case 3:
					if (func_33())
					{
						if (!func_34(vLocal_547))
						{
							func_35(&uLocal_1414, vLocal_547, 5f, 1, -1, 0);
						}
						iLocal_1413 = 4;
					}
					break;
				case 4:
					if (is_entity_dead(Global_35))
					{
						func_19();
					}
					if (!func_36(&Local_26, &uLocal_1389, iLocal_228, 0, 0, 0, 1, 0))
					{
						func_19();
					}
					func_37();
					func_38();
					func_39();
					if (!bVar1060 && func_40(&(uLocal_1389[0]), 0, 1))
					{
						if (func_41(Global_35, &(uLocal_1389[0]), 1, 1) < 25f)
						{
							func_42();
						}
					}
					if ((bVar1089 && func_43(&(uLocal_1389[0]), Global_35)) && !bVar1071)
					{
						func_44(4, -1787248475, 0, 0, 0, 0, 1065353216, 0);
						iLocal_1073 = 1;
					}
					if (!Local_26.f_46 && !bVar1056)
					{
						if (func_45(&uLocal_1389, &(Local_26.f_5), &uLocal_1415, &uLocal_1047, 2, 5, 1))
						{
							if (!(((iLocal_228 == 2 && Local_26.f_5.f_10 == &uLocal_1389[2]) && iVar1413 == 1) && func_46()))
							{
								Local_26.f_46 = 1;
								func_47();
								func_48(Global_35, 0, 1);
								func_49(0);
								if (!bVar1072 && !func_50(&uLocal_1285))
								{
									func_51(&uLocal_1285, 0);
								}
								iLocal_1411 = 5;
							}
							else
							{
								decor_set_bool(&(uLocal_1389[2]), "bIgnoreDamageChecking", true);
								func_52(&(Local_26.f_5), &uLocal_1415);
							}
							func_42();
							iLocal_1076 = 1;
							func_53();
						}
					}
					if (func_54())
					{
						func_55(&uLocal_1294);
						func_2(&uLocal_1333, 0);
					}
					else if (func_56(&uLocal_1294, 1.5f))
					{
						func_57(&uLocal_1294);
						func_57(&uLocal_1282);
						func_2(&uLocal_1333, 1);
					}
					if ((iLocal_228 != 2 && !bVar1057) && does_entity_exist(&(uLocal_1389[1])))
					{
						if (func_58(&(uLocal_1389[1]), 0, &uLocal_1361, &uLocal_1415, 1, 0))
						{
							iLocal_1059 = 1;
							iLocal_1058 = 1;
							if (func_59(0, 1, &(uLocal_1389[0]), 1))
							{
								func_60(&(uLocal_1389[0]), "GENERIC_SHOCKED_HIGH", -1824788778, Global_35, 1, 0, 0, 1);
							}
							if (!_0x3ab6c7b0bb0df4b1(&(uLocal_1389[0]), -1))
							{
								clear_ped_tasks(&(uLocal_1389[0]), 1, 0);
								clear_ped_secondary_task(&(uLocal_1389[0]));
								_task_smart_flee_style_ped(&(uLocal_1389[0]), Global_35, 3, 4224, -1082130432, -1, &(uLocal_1389[1]));
								func_61(&Local_987, 0, 0);
							}
						}
					}
					if (!bVar1056 && func_40(&(uLocal_1389[0]), 0, 1))
					{
						if (func_58(&(uLocal_1389[0]), 0, &uLocal_1333, &uLocal_1415, 0, 0))
						{
							if ((iVar1413 == 4 || iVar1413 == 8) && func_62())
							{
								func_52(&(Local_26.f_5), &uLocal_1415);
							}
							else if (!func_63())
							{
								iLocal_1058 = 1;
								func_53();
								func_64(uLocal_1396[0]);
								if (iLocal_228 == 2)
								{
									if (iVar1413 == 16)
									{
										func_65(&(uLocal_1389[0]), Global_35, "GENERIC_FRIGHTENED_HIGH", 0, -1082130432, 1, 0, 0, 1, 1, 1, -1050591818, 1, 1, 0);
									}
									else
									{
										func_65(&(uLocal_1389[0]), Global_35, &(sLocal_449[20]), 0, -1082130432, 1, 0, 0, 1, 1, 1, -1050591818, 1, 1, 0);
									}
									if ((iVar1413 == 4 || iVar1413 == 8) || iVar1413 == 16)
									{
										func_66();
									}
									func_67();
								}
								else
								{
									func_65(&(uLocal_1389[0]), Global_35, &(sLocal_449[7]), 0, -1082130432, 1, 0, 0, 1, 1, 1, -1050591818, 1, 1, 0);
								}
								if (iVar1409 < 8)
								{
									if ((iVar1413 == 4 || iVar1413 == 8) || iVar1413 == 16)
									{
										func_66();
									}
									func_67();
									iLocal_1411 = 6;
								}
								else if (!_0x3ab6c7b0bb0df4b1(&(uLocal_1389[0]), -1))
								{
									clear_ped_secondary_task(&(uLocal_1389[0]));
									if (!is_entity_dead(&(uLocal_1389[0])))
									{
										func_67();
									}
									func_19();
								}
								else
								{
									iLocal_1411 = 6;
								}
							}
						}
					}
					if (func_68())
					{
						func_19();
					}
					if (func_69(&Local_26, &uLocal_1389, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0))
					{
						iLocal_1097 = 1;
					}
					if (bVar1074 && !func_70(Global_35, &uLocal_1389, &uLocal_1040, 100f))
					{
						func_19();
					}
					break;
			}
			wait(Local_26.f_158);
		}
	}
}

var func_1(var uParam0)
{
	return *uParam0;
}

void func_2(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_71(&(uParam0->f_1), 4);
	}
	else
	{
		func_72(&(uParam0->f_1), 4);
	}
}

void func_3(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_71(&(uParam0->f_1), 2);
	}
	else
	{
		func_72(&(uParam0->f_1), 2);
	}
}

void func_4(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_71(&(iParam0->f_1), 256);
	}
	else
	{
		func_72(&(iParam0->f_1), 256);
	}
}

void func_5(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_71(&(uParam0->f_1), 1);
	}
	else
	{
		func_72(&(uParam0->f_1), 1);
	}
}

void func_6(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_72(iParam0, 8);
	}
	else
	{
		func_71(iParam0, 8);
	}
}

void func_7(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_71(&(uParam0->f_1), 8);
	}
	else
	{
		func_72(&(uParam0->f_1), 8);
	}
}

void func_8(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		iParam0->f_1 = 0;
		func_73(iParam0, 1);
		func_6(iParam0, 1);
		func_11(iParam0, 1);
		func_74(iParam0, 1);
		func_75(iParam0, 1);
		func_76(iParam0, 1);
		func_77(iParam0, 1);
	}
	else
	{
		iParam0->f_1 = -1;
		func_73(iParam0, 0);
		func_6(iParam0, 0);
		func_11(iParam0, 0);
		func_74(iParam0, 0);
		func_75(iParam0, 0);
		func_76(iParam0, 0);
		func_77(iParam0, 0);
	}
}

void func_9(var uParam0, float fParam1)
{
	uParam0->f_23 = fParam1;
}

void func_10(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_72(iParam0, 256);
	}
	else
	{
		func_71(iParam0, 256);
	}
}

void func_11(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_72(iParam0, 16);
	}
	else
	{
		func_71(iParam0, 67108864);
		func_71(iParam0, 16);
	}
}

void func_12(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_71(&(iParam0->f_1), 16384);
	}
	else
	{
		func_72(&(iParam0->f_1), 16384);
	}
}

void func_13(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_71(&(uParam0->f_1), 16);
	}
	else
	{
		func_72(&(uParam0->f_1), 16);
	}
}

void func_14(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_71(&(uParam0->f_1), 1024);
	}
	else
	{
		func_72(&(uParam0->f_1), 1024);
	}
}

void func_15(var uParam0, int iParam1)
{
	uParam0->f_18 = iParam1;
}

void func_16(var uParam0, float fParam1)
{
	uParam0->f_27 = fParam1;
}

bool func_17(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_18(var uParam0, bool bParam1)
{
	func_78(&(uParam0->f_5));
	if (uParam0->f_161)
	{
		func_79("BEAT_LAUNCHED", 4000, 0, 1, 0, 0, -1, -1, 0);
	}
	allow_sonar_blips(bParam1);
}

void func_19()
{
	if (func_80())
	{
		Local_26.f_44 = 0;
	}
	else if (bVar1095 && !bVar1074)
	{
		func_81(&(uLocal_1389[0]), 0, 0);
		if (!is_entity_dead(&(uLocal_1389[2])))
		{
			_task_smart_flee_style_ped(&(uLocal_1389[2]), Global_35, 3, 0, -1082130432, -1, 0);
		}
		if (!is_entity_dead(&(uLocal_1389[3])))
		{
			_task_smart_flee_style_ped(&(uLocal_1389[3]), Global_35, 3, 0, -1082130432, -1, 0);
		}
		if (!is_entity_dead(&(uLocal_1389[4])))
		{
			_task_smart_flee_style_ped(&(uLocal_1389[4]), Global_35, 3, 0, -1082130432, -1, 0);
		}
	}
	if (Local_26.f_44 && iLocal_228 == 2)
	{
		func_82(0, 1, 1);
	}
	if (bVar1064)
	{
		func_83();
		if (func_84(iVar1416))
		{
			func_85(iVar1416);
		}
	}
	if (iVar1409 >= 4)
	{
		_0x05d6195fb4d428f4(2147454193);
	}
	if (_does_volume_exist(iVar1406))
	{
		_0x74c2b3dc0b294102(iVar1406);
		_0xa1cfb35069d23c23(iVar1406);
		_delete_volume(iVar1406);
	}
	if (!is_entity_dead(Global_35))
	{
		_0xd05ad61f242c626b(Global_35, 1f);
	}
	if (iVar1042 != 0)
	{
		remove_shocking_event(iVar1042);
	}
	if (iVar1270 == 6)
	{
		stop_audio_scene("ANIMAL_ATTACK_SCENE");
	}
	if (!is_entity_dead(&(uLocal_1389[0])))
	{
		func_86(&(uLocal_1389[0]));
	}
	func_87(Global_1935630, 4);
	func_88(0);
	if (Local_26.f_48 && !Local_26.f_44)
	{
		Local_26.f_45 = bVar1074;
	}
	if (func_89(&(uLocal_1389[1]), iVar1405) && !func_90(&(uLocal_1389[0]), 242628503))
	{
		_0x0348469daa17576c(&(uLocal_1389[1]));
	}
	func_47();
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (func_40(&(uLocal_1389[iVar0]), 0, 1))
		{
			func_91(uLocal_1389[iVar0], 1, 1, 1);
		}
		iVar0++;
	}
	if (does_entity_exist(Local_797[0]->f_8))
	{
		set_object_as_no_longer_needed(&(Local_797[0]->f_8));
	}
	func_92(&Local_26, &uLocal_1389, &uLocal_1396, iLocal_228, uVar1414, Local_26.f_51.f_4, 0, 1, 0, 1);
	func_93(&uLocal_1414, 1);
	func_64(&iLocal_1403);
	if (_does_anim_scene_exist(Local_220))
	{
		_delete_anim_scene(Local_220);
	}
	if (_does_scenario_point_exist(iVar1405))
	{
		_delete_scenario_point(iVar1405);
	}
	if (_does_scenario_point_exist(iVar1404))
	{
		_delete_scenario_point(iVar1404);
	}
	func_94(&uLocal_1135);
	terminate_this_thread();
}

void func_20(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!func_95(bParam2) || is_screen_faded_out())
		{
			Call_Loc(iParam1);
		}
	}
}

bool func_21(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (bParam6 || func_96(*uParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *uParam1, &(uParam0->f_160), 1, iParam3, iParam4))
	{
		if (bParam6 || func_97(uParam0, *uParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				fVar0 = 7f;
				if (func_98(uParam0->f_3, 1))
				{
					fVar0 = 20f;
				}
				clear_area(uParam0->f_51, fVar0, 2097152);
			}
			if (iParam5 == 1)
			{
				func_99(uParam0, -1, 0, bParam7);
			}
			_0x9d16896f0dbe78a2(uParam0->f_51, 5f);
			if (bParam2)
			{
				uParam0->f_51.f_3 = func_100(uParam0->f_51);
			}
			return true;
		}
	}
	return false;
}

int func_22(vector3 vParam0)
{
	return func_101(_get_map_zone_at_coords(vParam0, 10));
}

void func_23()
{
	Local_220.f_4 = "script@beat@wilderness@animalAttack@re_aa_male_tree_B";
	Local_220.f_5 = "script@beat@wilderness@animalAttack@re_aa_male_rock_B";
	Local_220.f_6 = "script@beat@wilderness@animalAttack@re_aa_female_rock";
}

void func_24(var uParam0, int iParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*iParam1 = 1;
			*uParam2 = 0;
			break;
		case 1:
			*iParam1 = 1;
			*uParam2 = 1;
			break;
		case 2:
			*iParam1 = 1;
			*uParam2 = 2;
			break;
		case 3:
			*iParam1 = 1;
			*uParam2 = 3;
			break;
		case 4:
			*iParam1 = 4;
			*uParam2 = 0;
			break;
		case 5:
			*iParam1 = 7;
			*uParam2 = 0;
			break;
		case 6:
			*iParam1 = 9;
			*uParam2 = 0;
			break;
		case 7:
			*iParam1 = 9;
			*uParam2 = 1;
			break;
		case 8:
			*iParam1 = 10;
			*uParam2 = 0;
			break;
		case 9:
			*iParam1 = 10;
			*uParam2 = 1;
			break;
	}
}

int func_25()
{
	iVar0 = func_102(0, 3, 0);
	switch (iVar0)
	{
		case 0:
			iLocal_228 = 0;
			break;
		case 1:
			iLocal_228 = 1;
			break;
		case 2:
			iLocal_228 = 2;
			break;
	}
	if (iVar1414 == 7)
	{
		iLocal_228 = 1;
		iVar0 = 1;
	}
	else if (iVar0 == 2)
	{
		if (iVar1414 != 1 || Local_26.f_51.f_4 != 0)
		{
			iLocal_228 = 1;
		}
	}
	if (!Local_26.f_161 && func_103(0, 1) != 1)
	{
		if (iVar1414 == 1 && Local_26.f_51.f_4 == 0)
		{
			iVar0 = 2;
			iLocal_228 = 2;
		}
	}
	return iVar0;
}

void func_26(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 7:
			vLocal_550 = { -246.2378f, 744.8532f, 115.158f };
			vLocal_553 = { -254.5411f, 744.0548f, 117.1389f };
			*Local_797[0] = { -1314.485f, 1311.979f, 200.8788f };
			iLocal_537 = -781832595;
			Local_604[1]->f_6 = { -1554.598f, 1699.983f, 235.6222f };
			Local_604[1]->f_9 = 208.1292f;
			if (iLocal_228 == 1)
			{
				Local_604[2]->f_6 = { -1529.932f, 1720.696f, 240.0805f };
				Local_604[2]->f_9 = -76.86f;
			}
			else
			{
				Local_604[2]->f_6 = { -1538.696f, 1717.786f, 239.2496f };
				Local_604[2]->f_9 = 22.9f;
			}
			Local_604[3]->f_6 = { -1526.392f, 1717.972f, 240.0409f };
			Local_604[3]->f_9 = -12.13f;
			if (iLocal_228 == 1)
			{
				Local_604[4]->f_6 = { -1529.543f, 1715.956f, 239.5447f };
				Local_604[4]->f_9 = -34.58f;
			}
			else
			{
				Local_604[4]->f_6 = { -1529.932f, 1720.696f, 240.0805f };
				Local_604[4]->f_9 = -76.86f;
			}
			vLocal_541 = { -1557.376f, 1705.479f, 237.2817f };
			vLocal_544 = { -1558.21f, 1704.398f, 235.9582f };
			vLocal_547 = { -1054.113f, -729.5381f, 65.06046f };
			if (iLocal_228 == 0)
			{
				iLocal_228 = 1;
			}
			break;
		case 1:
			iLocal_562 = 1;
			switch (Local_26.f_51.f_4)
			{
				case 0:
					if (iLocal_228 == 0)
					{
						iLocal_228 = 1;
					}
					vLocal_550 = { -1826.202f, -414.07f, 160.0525f };
					vLocal_553 = { -1830.522f, -411.2746f, 161.4104f };
					*Local_797[0] = { -1058.12f, -790.7949f, 59.78279f };
					iLocal_537 = -781832595;
					if (iLocal_228 == 1)
					{
						Local_604[2]->f_6 = { -1051.509f, -793.3193f, 59.64713f };
						Local_604[2]->f_9 = 119.566f;
						Local_604[4]->f_6 = { -1054.236f, -725.5339f, 65.71812f };
						Local_604[4]->f_9 = 65.27f;
						Local_604[1]->f_6 = { -1027.813f, -766.3032f, 61.0286f };
						Local_604[1]->f_9 = -10.03f;
					}
					else
					{
						Local_604[2]->f_6 = { -1043.699f, -768.2133f, 60.62247f };
						Local_604[2]->f_9 = 8.7453f;
						Local_604[4]->f_6 = { -1051.509f, -793.3193f, 59.64713f };
						Local_604[4]->f_9 = 119.566f;
						Local_604[1]->f_6 = { -1042.25f, -769.5213f, 60.51532f };
						Local_604[1]->f_9 = 82.15f;
					}
					Local_604[3]->f_6 = { -1055.028f, -790.005f, 59.86347f };
					Local_604[3]->f_9 = 173.285f;
					vLocal_541 = { -1028.697f, -764.1123f, 61.3082f };
					vLocal_544 = { -1027.843f, -766.3446f, 60.20293f };
					break;
				case 1:
					iLocal_228 = 0;
					vLocal_550 = { -1826.202f, -414.07f, 160.0525f };
					*Local_797[0] = { -1159.74f, -153.5899f, 89.21986f };
					Local_604[1]->f_6 = { -1152.796f, -167.0863f, 89.2812f };
					Local_604[1]->f_9 = 0.0233f;
					Local_604[2]->f_6 = { -1154.384f, -150.7848f, 89.6459f };
					Local_604[2]->f_9 = 131.7243f;
					vLocal_541 = { -1152.747f, -168.898f, 91.0459f };
					vLocal_544 = { -1151.353f, -170.1125f, 89.5287f };
					vLocal_556 = { -1152.525f, -146.6f, 89.88026f };
					vLocal_559 = { -1158.863f, -145.2418f, 90.03511f };
					break;
				case 2:
					if (iLocal_228 == 0)
					{
						iLocal_228 = 1;
					}
					vLocal_550 = { -1826.202f, -414.07f, 160.0525f };
					vLocal_553 = { -1830.522f, -411.2746f, 161.4104f };
					*Local_797[0] = { -1367.587f, -514.6331f, 125.7039f };
					iLocal_537 = -781832595;
					if (iLocal_228 == 1)
					{
						Local_604[2]->f_6 = { -1367.719f, -518.6824f, 125.8444f };
						Local_604[2]->f_9 = 119.566f;
						Local_604[4]->f_6 = { -1366.678f, -515.388f, 125.781f };
						Local_604[4]->f_9 = 65.27f;
						Local_604[1]->f_6 = { -1349.858f, -488.8407f, 120.9715f };
						Local_604[1]->f_9 = -10.03f;
					}
					else
					{
						Local_604[2]->f_6 = { -1365.88f, -519.3616f, 126.1736f };
						Local_604[2]->f_9 = 8.7453f;
						Local_604[4]->f_6 = { -1365.865f, -517.4992f, 125.95f };
						Local_604[4]->f_9 = 119.566f;
						Local_604[1]->f_6 = { -1325.958f, -579.6367f, 103.8859f };
						Local_604[1]->f_9 = 82.15f;
					}
					Local_604[3]->f_6 = { -1365.37f, -518.1146f, 126.0672f };
					Local_604[3]->f_9 = 173.285f;
					vLocal_541 = { -1350.889f, -487.397f, 121.7797f };
					vLocal_544 = { -1349.858f, -488.8407f, 120.9715f };
					break;
				case 3:
					if (iLocal_228 == 0)
					{
						iLocal_228 = 1;
					}
					vLocal_550 = { -1826.202f, -414.07f, 160.0525f };
					vLocal_553 = { -1830.522f, -411.2746f, 161.4104f };
					*Local_797[0] = { -1058.12f, -790.7949f, 59.78279f };
					iLocal_537 = -781832595;
					if (iLocal_228 == 1)
					{
						Local_604[2]->f_6 = { -1026.712f, -495.4865f, 101.873f };
						Local_604[2]->f_9 = 119.566f;
						Local_604[4]->f_6 = { -1024.966f, -490.3193f, 101.3036f };
						Local_604[4]->f_9 = 65.27f;
						Local_604[1]->f_6 = { -999.5505f, -473.7407f, 97.94868f };
						Local_604[1]->f_9 = -60.03f;
					}
					else
					{
						Local_604[2]->f_6 = { -1023.111f, -494.7955f, 102.0353f };
						Local_604[2]->f_9 = 8.7453f;
						Local_604[4]->f_6 = { -1024.966f, -490.3193f, 101.3036f };
						Local_604[4]->f_9 = 119.566f;
						Local_604[1]->f_6 = { -1068.261f, -469.8496f, 81.3701f };
						Local_604[1]->f_9 = 82.15f;
					}
					Local_604[3]->f_6 = { -1023.294f, -494.9246f, 102.0795f };
					Local_604[3]->f_9 = 173.285f;
					vLocal_541 = { -1014.51f, -495.6267f, 101.9116f };
					vLocal_544 = { -1014.15f, -497.4202f, 100.8566f };
					break;
			}
			break;
		case 10:
			switch (Local_26.f_51.f_4)
			{
				case 0:
					vLocal_550 = { 2936.389f, 1360.951f, 42.9825f };
					vLocal_553 = { 2927.537f, 1351.416f, 43.3993f };
					*Local_797[0] = { 2148.762f, 1725.916f, 124.5801f };
					iLocal_537 = 458213947;
					vLocal_544 = { 2128.358f, 1743.547f, 132.1981f };
					Local_604[1]->f_6 = { 2128.358f, 1743.547f, 132.1981f };
					Local_604[1]->f_9 = 194.116f;
					vLocal_541 = { 2127.142f, 1744.83f, 134.2511f };
					iLocal_228 = 1;
					switch (iParam0)
					{
						case 0:
							Local_604[2]->f_6 = { func_104(0, 1) };
							Local_604[2]->f_9 = func_105(0, 1);
							Local_604[3]->f_6 = { func_104(0, 2) };
							Local_604[3]->f_9 = func_105(0, 2);
							Local_604[4]->f_6 = { func_104(0, 3) };
							Local_604[4]->f_9 = func_105(0, 3);
							break;
						case 1:
							Local_604[2]->f_6 = { func_106(0, 1) };
							Local_604[2]->f_9 = func_107(0, 1);
							Local_604[3]->f_6 = { func_106(0, 2) };
							Local_604[3]->f_9 = func_107(0, 2);
							break;
						case 2:
							Local_604[2]->f_6 = { func_108(0, 1) };
							Local_604[2]->f_9 = func_109(0, 1);
							Local_604[3]->f_6 = { func_108(0, 2) };
							Local_604[3]->f_9 = func_109(0, 2);
							break;
						case 3:
							Local_604[2]->f_6 = { func_110(0, 1) };
							Local_604[2]->f_9 = func_111(0, 1);
							Local_604[3]->f_6 = { func_110(0, 2) };
							Local_604[3]->f_9 = func_111(0, 2);
							break;
					}
					break;
				case 1:
					vLocal_550 = { 2936.389f, 1360.951f, 42.9825f };
					vLocal_553 = { 2177.798f, -25.7707f, 54.0357f };
					*Local_797[0] = { 2178.207f, -29.779f, 52.0158f };
					iLocal_537 = 458213947;
					Local_604[2]->f_6 = { 2176.828f, -21.1974f, 51.7899f };
					Local_604[2]->f_9 = 119.566f;
					Local_604[3]->f_6 = { 2174.5f, -28.4824f, 52.2161f };
					Local_604[3]->f_9 = 65.27f;
					Local_604[1]->f_6 = { 2148.909f, -34.7308f, 55.374f };
					Local_604[1]->f_9 = -4.116f;
					vLocal_541 = { 2149.162f, -32.8979f, 57.1283f };
					vLocal_544 = { 2148.909f, -34.7308f, 55.374f };
					iLocal_228 = 1;
					break;
			}
			break;
		case 9:
			switch (Local_26.f_51.f_4)
			{
				case 0:
					vLocal_550 = { 2936.389f, 1360.951f, 42.9825f };
					*Local_797[0] = { -319.0016f, 203.0322f, 62.5367f };
					Local_604[1]->f_6 = { -306.1996f, 186.4946f, 62.8145f };
					Local_604[1]->f_9 = -5.84f;
					Local_604[2]->f_6 = { -316.1747f, 202.1763f, 62.6721f };
					Local_604[2]->f_9 = 65.27f;
					vLocal_541 = { -304.9778f, 188.0571f, 64.4411f };
					vLocal_544 = { -306.1996f, 186.4946f, 62.8145f };
					vLocal_556 = { -320.3951f, 210.0814f, 62.4797f };
					vLocal_559 = { -323.0226f, 201.3689f, 62.1426f };
					iLocal_228 = 0;
					break;
				case 1:
					vLocal_550 = { 2936.389f, 1360.951f, 42.9825f };
					*Local_797[0] = { -514.0595f, 342.9887f, 49.99966f };
					Local_604[1]->f_6 = { -477.075f, 367.9869f, 51.5884f };
					Local_604[1]->f_9 = 31.84f;
					Local_604[2]->f_6 = { -503.7721f, 346.1028f, 49.84615f };
					Local_604[2]->f_9 = 93.0131f;
					vLocal_541 = { -477.6526f, 320.2662f, 45.72257f };
					vLocal_544 = { -477.9498f, 317.8607f, 44.23803f };
					vLocal_556 = { -507.2264f, 343.2669f, 49.59346f };
					vLocal_559 = { -507.1704f, 348.4026f, 50.63178f };
					iLocal_228 = 0;
					break;
			}
			break;
		case 4:
			iLocal_228 = 0;
			vLocal_550 = { -850.8811f, -1256.024f, 42.41312f };
			*Local_797[0] = { -1230.502f, -1373.848f, 80.64923f };
			Local_604[1]->f_6 = { -1305.942f, -1356.616f, 88.8199f };
			Local_604[1]->f_9 = 234.0461f;
			Local_604[2]->f_6 = { -1248.817f, -1369.882f, 82.77242f };
			Local_604[2]->f_9 = 65.27f;
			vLocal_541 = { -1306.823f, -1355.456f, 90.1273f };
			vLocal_544 = { -1305.942f, -1356.616f, 88.8199f };
			vLocal_556 = { -1244.297f, -1367.265f, 82.08985f };
			vLocal_559 = { -1245.379f, -1372.927f, 82.48967f };
			break;
	}
	Local_604[0]->f_6 = { Local_26.f_51 };
}

bool func_27(int iParam0)
{
	if (!func_112(iParam0))
	{
		return false;
	}
	return func_113(iParam0, 67108864);
}

bool func_28(int iParam0)
{
	if (!func_112(iParam0))
	{
		return false;
	}
	return func_113(iParam0, 33554432);
}

bool func_29()
{
	if (!is_ped_on_mount(Global_35))
	{
		return false;
	}
	if (func_115(Global_35, func_114(0), 0))
	{
		return true;
	}
	if (func_115(Global_35, func_114(1), 0))
	{
		return true;
	}
	return false;
}

void func_30()
{
	switch (func_116())
	{
		case 0:
			sLocal_449[0] = "RE_AA_MTN_V1_HELP_M_A";
			sLocal_449[1] = "RE_AA_MTN_V1_COWER_M";
			sLocal_449[2] = "RE_AA_MTN_V1_BEG_M";
			sLocal_449[3] = "RE_AA_MTN_V1_KILL_M";
			sLocal_449[4] = "RE_AA_MTN_V1_KILL_LAST_M";
			sLocal_449[5] = "RE_AA_MTN_V1_FLED_M";
			sLocal_449[6] = "RE_AA_MTN_V1_THANK_M";
			sLocal_449[7] = "RE_AA_MTN_V1_AGGRO_M";
			sLocal_449[8] = "RE_AA_MTN_V1_PL_WLCM_M";
			sLocal_449[9] = "RE_AA_MTN_V1_HELP_COUGARS_M";
			sLocal_449[10] = "RE_AA_MTN_V1_HELP_WOLVES_M";
			sLocal_449[11] = "RE_AA_MTN_V1_HELP_COYOTES_M";
			sLocal_449[12] = "RE_AA_MTN_V2_HELP_F";
			sLocal_449[13] = "RE_AA_MTN_V2_HELP_B_F";
			sLocal_449[14] = "RE_AA_MTN_V2_COWER_F";
			sLocal_449[15] = "RE_AA_MTN_V2_BEG_F";
			sLocal_449[16] = "RE_AA_MTN_V2_KILL_F";
			sLocal_449[17] = "RE_AA_MTN_V2_KILL_LAST_F";
			sLocal_449[18] = "RE_AA_MTN_V2_FLED_F";
			sLocal_449[19] = "RE_AA_MTN_V2_THANK_F";
			sLocal_449[20] = "GENERIC_FRIGHTENED_HIGH";
			sLocal_449[21] = "RE_AA_MTN_V2_PL_ESCORT_YES";
			sLocal_449[22] = "RE_AA_MTN_V2_PL_ESCORT_NO";
			sLocal_449[23] = "RE_AA_MTN_V2_RESPOND_YES_F";
			sLocal_449[24] = "RE_AA_MTN_V2_RESPOND_NO_F";
			if (func_117(0))
			{
				sLocal_449[25] = "RE_AA_MTN_V2_ESCORT_ASK_SICK_F";
				sLocal_449[26] = "RE_AA_MTN_V2_ESCORT_ASK_B_SICK_F";
			}
			else
			{
				sLocal_449[25] = "RE_AA_MTN_V2_ESCORT_ASK_F";
				sLocal_449[26] = "RE_AA_MTN_V2_ESCORT_ASK_B_F";
			}
			if (bVar560)
			{
				sLocal_449[27] = "RE_AA_MTN_V2_ESCORT_START_ALT_F";
			}
			else
			{
				sLocal_449[27] = "RE_AA_MTN_V2_ESCORT_START_F";
			}
			sLocal_449[43] = "RE_AA_MTN_V2_ESCORT_CLOSE_F";
			sLocal_449[44] = "RE_AA_MTN_V2_ESCORT_ARRIVED_F";
			sLocal_449[55] = "RE_AA_MTN_V2_ESCORT_ARRIVED_F_RESP_ALT";
			sLocal_449[56] = "RE_AA_MTN_V2_PLYFINAL_HIGH";
			sLocal_449[57] = "RE_AA_MTN_V2_PLYFINAL_LOW";
			sLocal_449[28] = "RE_AA_MTN_V2_ESCORT_STORY_A_F";
			sLocal_449[29] = "RE_AA_MTN_V2_ESCORT_STORY_A_F";
			sLocal_449[30] = "RE_AA_MTN_V2_ESCORT_STORY_B_F";
			sLocal_449[31] = "RE_AA_MTN_V2_ESCORT_STORY_C_F";
			sLocal_449[32] = "RE_AA_MTN_V2_ESCORT_STORY_D_F";
			sLocal_449[33] = "RE_AA_MTN_V2_ESCORT_STORY_E_F";
			sLocal_449[34] = "RE_AA_MTN_V2_ESCORT_STORY_E_F";
			sLocal_449[35] = "RE_AA_MTN_V2_ESCORT_STORY_F_F";
			sLocal_449[36] = "RE_AA_MTN_V2_ESCORT_STORY_G_F";
			sLocal_449[37] = "RE_AA_MTN_V2_ESCORT_STORY_H_F";
			sLocal_449[38] = "RE_AA_MTN_V2_ESCORT_STORY_H_F";
			sLocal_449[39] = "RE_AA_MTN_V2_ESCORT_STORY_I_F";
			sLocal_449[40] = "RE_AA_MTN_V2_ESCORT_STORY_J_F";
			sLocal_449[41] = "RE_AA_MTN_V2_ESCORT_STORY_K_F";
			sLocal_449[42] = "RE_AA_MTN_V2_ESCORT_STORY_L_F";
			sLocal_449[58] = "RE_AA_MTN_V2_ESCORT_SEGUE_F";
			sLocal_449[59] = "RE_AA_MTN_V2_ESCORT_STOP_F";
			sLocal_449[60] = "RE_AA_MTN_V2_ESCORT_OFFHORSE_F";
			sLocal_449[61] = "RE_AA_MTN_V2_ESCORT_WRONGWAY_F";
			sLocal_449[62] = "RE_AA_MTN_V2_ESCORT_TOOLONG_F";
			sLocal_449[63] = "RE_AA_MTN_V2_ESCORT_TOOLONG_EXIT_F";
			sLocal_449[64] = "RE_AA_MTN_V2_ESCORT_AGGRO_F";
			sLocal_449[65] = "RE_AA_MTN_V2_ESCORT_AGGROTRAV_F";
			sLocal_449[45] = "RE_AA_MTN_V1_HELP_CLOSE_M_A";
			sLocal_449[46] = "RE_AA_MTN_V2_HELP_CLOSE_F";
			if (iLocal_228 == 2)
			{
				sLocal_449[47] = "RE_AA_MTN_V2_PRE_THANK_GREET";
				sLocal_449[48] = "RE_AA_MTN_V2_PRE_THANK_ANTAGONIZE";
			}
			else
			{
				sLocal_449[47] = "RE_AA_MTN_V1_PRE_THANK_GREET";
				sLocal_449[48] = "RE_AA_MTN_V1_PRE_THANK_ANTAGONIZE";
				sLocal_449[49] = "RE_AA_MTN_V1_POST_THANK_GREET";
				sLocal_449[50] = "RE_AA_MTN_V1_POST_THANK_ANTAGONIZE";
				sLocal_449[52] = "RE_AA_MTN_V1_POST_THANK_GREET_RESP";
				sLocal_449[53] = "RE_AA_MTN_V1_POST_THANK_ANTAGONIZE_RESP";
				sLocal_449[51] = "RE_AA_MTN_V1_POST_THANK_ROB";
			}
			sLocal_449[54] = "RE_AA_MTN_V2_PL_QUIT_ESCORT";
			break;
		case 1:
		case 2:
		default:
			sLocal_449[0] = "GET_AWAY_FROM_ME";
			sLocal_449[1] = "RE_AA_PLN_V1_COWER_M";
			sLocal_449[2] = "RE_AA_PLN_V1_BEG_M";
			sLocal_449[3] = "RE_AA_PLN_V1_KILL_M";
			sLocal_449[4] = "RE_AA_PLN_V1_KILL_LAST_M";
			sLocal_449[5] = "RE_AA_PLN_V1_FLED_M";
			sLocal_449[6] = "RE_AA_PLN_V1_THANK_M";
			sLocal_449[7] = "RE_AA_PLN_V1_AGGRO_M";
			sLocal_449[8] = "RE_AA_PLN_V1_PL_WLCM_M";
			sLocal_449[45] = "SCARED_HELP";
			sLocal_449[9] = "RE_AA_PLN_V1_HELP_COUGARS_M";
			sLocal_449[10] = "RE_AA_PLN_V1_HELP_WOLVES_M";
			sLocal_449[11] = "RE_AA_PLN_V1_HELP_COYOTES_M";
			sLocal_449[47] = "RE_AA_PLN_V1_PRE_THANK_GREET";
			sLocal_449[48] = "RE_AA_PLN_V1_PRE_THANK_ANTAGONIZE";
			sLocal_449[49] = "RE_AA_PLN_V1_POST_THANK_GREET";
			sLocal_449[50] = "RE_AA_PLN_V1_POST_THANK_ANTAGONIZE";
			sLocal_449[51] = "RE_AA_PLN_V1_POST_THANK_ROB";
			sLocal_449[52] = "RELIEVED_REACT";
			sLocal_449[53] = "VICTIMIZED_REACT";
			break;
	}
}

void func_31()
{
	switch (iLocal_228)
	{
		case 0:
			sLocal_516[0] = "PBL_FALL_DIE";
			sLocal_516[1] = "PBL_FALL_RECOVER";
			sLocal_516[2] = "PBL_HANGING";
			sLocal_516[3] = "PBL_SHOOTING";
			sLocal_516[4] = "PBL_THANKS";
			sLocal_516[5] = "PBL_SIT_JUMP";
			sLocal_1039 = "script_re@animal_attack@male@tree";
			break;
		case 1:
			sLocal_516[0] = "PBL_COWER";
			sLocal_516[1] = "PBL_FALL_DIE";
			sLocal_516[2] = "PBL_FALL_RECOVER";
			sLocal_516[3] = "PBL_KICK_HELP_A";
			sLocal_516[4] = "PBL_KICK_HELP_B";
			sLocal_516[5] = "PBL_NO_AMMO";
			sLocal_516[6] = "PBL_STRUGGLE";
			sLocal_516[7] = "PBL_THANKS";
			sLocal_1039 = "script_re@animal_attack@male@rock";
			break;
		case 2:
			sLocal_516[0] = "PBL_COWER";
			sLocal_516[1] = "PBL_COWER_FLINCH";
			sLocal_516[2] = "PBL_DEAR_GOD";
			sLocal_516[3] = "PBL_FALL_DIE";
			sLocal_516[4] = "PBL_FALL_RECOVER";
			sLocal_516[5] = "PBL_GET_AWAY";
			sLocal_516[6] = "PBL_GONNA_KILL_ME";
			sLocal_516[7] = "PBL_HELP";
			sLocal_516[8] = "PBL_THANK_YOU";
			break;
	}
}

bool func_32()
{
	switch (iVar1408)
	{
		case 0:
			if (func_118(&Local_26))
			{
				func_119();
				func_120();
				func_121();
				func_122();
				_0xd9130842d7226045("REAA_Sounds", 0);
				func_123(&Local_604);
				if (iLocal_228 != 2)
				{
					func_124(&Local_797);
				}
				if (iLocal_228 != 2)
				{
					request_anim_dict(sVar1037);
				}
				func_125();
				iLocal_1410 = 1;
			}
			break;
		case 1:
			if (!func_126(&uLocal_1409, uVar446))
			{
				return false;
			}
			if (!func_127(&uLocal_563))
			{
				return false;
			}
			if (!func_128(&Local_604))
			{
				return false;
			}
			if (iLocal_228 != 0 && !_0xd9130842d7226045("WNT2_Sounds", 0))
			{
				return false;
			}
			if (iLocal_228 != 2 && !func_129(&Local_797))
			{
				return false;
			}
			if (iLocal_228 != 2)
			{
				if (!has_anim_dict_loaded(sVar1037))
				{
					return false;
				}
			}
			return true;
	}
	return false;
}

bool func_33()
{
	switch (iVar1270)
	{
		case 0:
			if (!func_130(&Local_26, &uLocal_1135, &Local_604, 0, 1, 1, 0, -1))
			{
				return false;
			}
			func_131();
			iLocal_1272 = 1;
			break;
		case 1:
			if (!func_132(&uLocal_1135, &Local_604, &uLocal_1389, 1, 1, 0, -1))
			{
				return false;
			}
			iVar0 = 2;
			while (iVar0 <= 5)
			{
				if (func_40(&(uLocal_1389[iVar0]), 0, 1))
				{
					set_ped_config_flag(&(uLocal_1389[iVar0]), 6, true);
					set_ped_config_flag(&(uLocal_1389[iVar0]), 388, true);
					set_ped_config_flag(&(uLocal_1389[iVar0]), 186, true);
					_0xfd6943b6df77e449(&(uLocal_1389[iVar0]), false);
					_0x9de63896b176ea94(&(uLocal_1389[iVar0]), 0);
				}
				iVar0++;
			}
			func_133(&Local_26, 3);
			func_134(&(uLocal_1389[0]), &Local_26, 0);
			func_134(&(uLocal_1389[2]), &Local_26, 0);
			func_134(&(uLocal_1389[3]), &Local_26, 0);
			set_ped_can_be_targetted(&(uLocal_1389[0]), false);
			set_ped_config_flag(&(uLocal_1389[0]), 336, true);
			_0xa762c9d6cf165e0d(&(uLocal_1389[0]), "OverloadMostInjuredBodyPart", "LeftLeg", -1);
			remove_all_ped_weapons(&(uLocal_1389[0]), true, true);
			if (iLocal_228 != 2)
			{
				func_135(0f, 0f, 0f, &Local_797, 0f, 0, 0, -1, 0);
				if (does_entity_exist(Local_797[0]->f_8))
				{
					_0x7fcd49388bc9b775(Local_797[0]->f_8, 0);
				}
			}
			if (does_entity_exist(Local_797[0]->f_8))
			{
				set_entity_rotation(Local_797[0]->f_8, 90f, 0f, 0f, 2, true);
			}
			if (iLocal_228 == 0)
			{
				if (!is_entity_dead(&(uLocal_1389[0])))
				{
					set_ped_config_flag(&(uLocal_1389[0]), 138, true);
				}
			}
			if (iLocal_228 != 2)
			{
				_0x931b241409216c1f(&(uLocal_1389[0]), &(uLocal_1389[1]), 0);
				set_ped_config_flag(&(uLocal_1389[1]), 284, true);
				func_136(&(Local_26.f_5), &(uLocal_1389[0]), &(uLocal_1389[1]), 0);
				set_ped_config_flag(&(uLocal_1389[0]), 250, true);
				set_ped_config_flag(&(uLocal_1389[0]), 347, true);
				set_entity_is_target_priority(&(uLocal_1389[1]), false, 10f);
			}
			add_entity_to_audio_mix_group(&(uLocal_1389[0]), "ANIMAL_ATTACK_NPC_GROUP", 0f);
			start_audio_scene("ANIMAL_ATTACK_SCENE");
			func_137(&(uLocal_1389[0]));
			func_138();
			load_anim_scene(Local_220);
			add_relationship_group("REL_REAA_ANIMALS", &iVar1);
			set_relationship_between_groups(6, iVar1, 707888648);
			iLocal_1044 = add_shocking_event_at_position(513747494, Local_26.f_51, 0f, 105f, 105f, 0f, -1f, -1, -1);
			iLocal_1272 = 6;
			break;
		case 6:
			if (func_139())
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_34(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_35(var uParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_140(uParam0))
	{
		*uParam0 = _0xfa50f79257745e74(vParam1, fParam4, iParam5, iParam6, iParam7);
		if (func_140(uParam0))
		{
		}
	}
}

bool func_36(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		func_141(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	func_142(uParam0, uParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !uParam0->f_5 & 16384 != 0)
		{
			if (uParam0->f_5.f_1 & 256 != 0)
			{
				func_143(&(uParam0->f_5));
			}
			func_72(&(uParam0->f_5), 16384);
		}
	}
	if (!uParam0->f_48 && !func_144(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_145(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_146(&(uParam0->f_121));
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
					func_147(uParam0, uParam0->f_193, 2f);
				}
			}
			break;
		case 2:
			if (!func_148(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		case 3:
			break;
	}
	if (func_98(uParam0->f_3, 128))
	{
		if ((does_entity_exist(uParam1[0]) && !is_ped_injured(uParam1[0])) && uParam0->f_3 != 49)
		{
			if (!_0xf6a8a652a6b186cd(_0xf6f5447d418daa82(uParam1[0])))
			{
				func_149(uParam0, uParam1[0]);
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

void func_37()
{
	if (iVar1409 == 5 && iLocal_228 == 0)
	{
		return;
	}
	if (func_40(&(uLocal_1389[0]), 0, 0))
	{
		iVar0 = 2;
		while (iVar0 <= 5)
		{
			if (func_40(&(uLocal_1389[iVar0]), 0, 1))
			{
				if (iLocal_228 == 0)
				{
					fVar2 = 169f;
					if (func_40(&(uLocal_1389[2]), 0, 1))
					{
						iVar3 = _0xcd66fea29400a0b5(&(uLocal_1389[2]));
						if ((does_entity_exist(iVar3) && is_entity_a_ped(iVar3)) && get_ped_index_from_entity_index(iVar3) == Global_35)
						{
							return;
						}
					}
				}
				else
				{
					fVar2 = 64f;
				}
				iVar1 = func_150(iVar0);
				if (iVar1 != -1)
				{
					if (!&iLocal_1053[iVar1] && func_151(Global_35, &(uLocal_1389[iVar0]), 1) < fVar2)
					{
						func_47();
						set_animal_tuning_bool_param(&(uLocal_1389[iVar0]), 21, false);
						func_152(Global_35, iVar0, 1);
						if (!Local_26.f_48)
						{
							func_145(&Local_26, &(Local_26.f_48), Local_26.f_3, &(Local_26.f_51.f_6));
						}
						iLocal_1053[iVar1] = 1;
						func_49(0);
						iLocal_1411 = 5;
					}
				}
			}
			iVar0++;
		}
	}
}

void func_38()
{
	if (iVar1409 >= 8)
	{
		return;
	}
	if (iLocal_228 == 0)
	{
		return;
	}
	if (iVar1409 >= 4 && func_59(0, 1, &(uLocal_1389[0]), 1))
	{
		if (func_153(&uLocal_1273, 8f) && (bVar1070 || iLocal_228 == 2))
		{
			func_65(&(uLocal_1389[0]), Global_35, sVar442, 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			func_49(0);
		}
	}
}

void func_39()
{
	if (iVar1409 >= 8 || bVar1056)
	{
		return;
	}
	if (func_40(&(uLocal_1389[0]), 0, 1))
	{
		if (func_154(&uLocal_1389, 2) && !bVar1068)
		{
			func_155(uVar445, 2f);
			return;
		}
		if (uVar1049 || uVar1050)
		{
			return;
		}
		iVar0 = 2;
		while (iVar0 <= 5)
		{
			if ((func_43(&(uLocal_1389[iVar0]), Global_35) && !bVar1068) && !func_157(iVar1039, func_156(iVar0)))
			{
				func_155(uVar444, 0.7f);
				func_158(&uLocal_1041, func_156(iVar0));
			}
			iVar0++;
		}
	}
}

bool func_40(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_159(iParam0, iParam1);
}

float func_41(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_42()
{
	if (!bVar1060)
	{
		iVar0 = 2;
		while (iVar0 <= 5)
		{
			if (func_40(&(uLocal_1389[iVar0]), 0, 1))
			{
				func_160(&(uLocal_1389[iVar0]), uLocal_1396[iVar0], 831283580, 580546400, 0, 0);
			}
			iVar0++;
		}
		iLocal_1062 = 1;
	}
}

bool func_43(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (is_entity_a_ped(iParam0))
		{
			if (is_entity_dead(iParam0))
			{
				if (get_ped_source_of_death(get_ped_index_from_entity_index(iParam0)) == iParam1)
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_44(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_161() != -1)
	{
		return;
	}
	if ((Global_36616 && func_162(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_163(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_164(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_165(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_164(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

bool func_45(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = func_166(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_58(uParam0[*uParam3], 0, iParam1, uParam2, 0, 0))
		{
			return true;
		}
		*uParam3++;
		if (*uParam3 > iParam5)
		{
			*uParam3 = iParam4;
		}
		iVar1++;
	}
	return false;
}

bool func_46()
{
	get_current_ped_weapon(Global_35, &uVar0, true, 0, false);
	if (_0x5809dbca0a37c82b(uVar0))
	{
		return true;
	}
	return false;
}

void func_47()
{
	if (iLocal_228 == 0)
	{
		if (!is_entity_dead(&(uLocal_1389[2])))
		{
			set_animal_tuning_bool_param(&(uLocal_1389[2]), 14, true);
			set_animal_tuning_bool_param(&(uLocal_1389[2]), 12, false);
			set_animal_tuning_bool_param(&(uLocal_1389[2]), 33, false);
			set_animal_tuning_bool_param(&(uLocal_1389[2]), 32, false);
			set_animal_tuning_bool_param(&(uLocal_1389[2]), 31, false);
			set_animal_tuning_bool_param(&(uLocal_1389[2]), 65, true);
		}
	}
}

void func_48(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 2;
	while (iVar0 <= 5)
	{
		if (func_40(&(uLocal_1389[iVar0]), 0, 1))
		{
			if (func_40(iParam0, 0, 0))
			{
				if (!func_40(iParam1, 0, 0) || (iVar1 % 2) == 0)
				{
					func_152(iParam0, iVar0, bParam2);
					register_target(&(uLocal_1389[iVar0]), iParam0, 1);
					_0xd05ad61f242c626b(iParam0, 1f);
					func_167(&(uLocal_1389[iVar0]), iParam0);
				}
				else
				{
					func_152(iParam1, iVar0, bParam2);
					register_target(&(uLocal_1389[iVar0]), iParam1, 1);
					_0xd05ad61f242c626b(iParam1, 1f);
					func_167(&(uLocal_1389[iVar0]), iParam1);
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_49(bool bParam0)
{
	if (iLocal_228 == 0)
	{
		return;
	}
	iVar0 = 2;
	while (iVar0 <= 5)
	{
		if (func_40(&(uLocal_1389[iVar0]), 0, 1))
		{
			set_ped_config_flag(&(uLocal_1389[iVar0]), 215, bParam0);
		}
		iVar0++;
	}
	bLocal_1075 = bParam0;
}

bool func_50(var uParam0)
{
	return func_168(*uParam0, 1);
}

void func_51(var uParam0, bool bParam1)
{
	if (bParam1 || !func_50(uParam0))
	{
		func_55(uParam0);
	}
}

void func_52(int iParam0, var uParam1)
{
	if (iParam0->f_16 != 0 || *uParam1 != 0)
	{
		Global_1935630->f_30 = 0;
		Global_1935630->f_31 = 0;
		Global_1935630->f_25 = 0;
		Global_1935630->f_39 = 0;
		iParam0->f_8 = func_169();
		_0xeacebaae0a33fb3f(player_id());
	}
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	iParam0->f_5 = 0;
	iParam0->f_10 = 0;
	func_170(iParam0, 0);
	*uParam1 = 0;
	iParam0->f_16 = 0;
}

void func_53()
{
	if (!Local_26.f_48)
	{
		func_145(&Local_26, &(Local_26.f_48), Local_26.f_3, &(Local_26.f_51.f_6));
	}
	Local_26.f_44 = 1;
}

bool func_54()
{
	iVar0 = 2;
	while (iVar0 <= 4)
	{
		if (does_entity_exist(&(uLocal_1389[iVar0])))
		{
			if (has_entity_been_damaged_by_entity(&(uLocal_1389[iVar0]), Global_35, 1, 1))
			{
				clear_entity_last_damage_entity(&(uLocal_1389[iVar0]));
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_55(var uParam0)
{
	func_171(uParam0, 0f);
}

bool func_56(var uParam0, float fParam1)
{
	if (!func_50(uParam0))
	{
		return false;
	}
	if (func_172(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_57(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_58(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > iParam2->f_5)
	{
		func_173(iParam2, 1, iVar0);
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
			if (func_174(iParam0, iParam2))
			{
				*uParam3 = 128;
				func_175(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (func_176(iParam0, iParam2))
				{
					*uParam3 = 8;
					func_175(iParam0, iParam2, *uParam3);
					return true;
				}
				else if (func_177(iParam0, iParam1, iParam2))
				{
					*uParam3 = 8;
					func_175(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (func_178(iParam0, iParam2))
				{
					*uParam3 = 64;
					func_175(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_26 && func_179(player_id(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_175(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_180(iParam2, 1065353216))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (func_181(Global_35, iParam0, iParam2))
					{
						*uParam3 = 4;
						func_175(iParam0, iParam2, *uParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (func_182(Global_35, iParam0, iParam2))
					{
						*uParam3 = 256;
						func_175(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_183(Global_35, iParam0, iParam2, 0))
				{
					*uParam3 = 16;
					func_175(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			else if (func_183(Global_35, iParam0, iParam2, 1))
			{
				*uParam3 = 16;
				func_175(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (func_184(iParam0, iParam2))
				{
					*uParam3 = 32;
					func_175(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || iParam2->f_12 < 20f)
			{
				if (func_185(&iParam0, iParam2))
				{
					*uParam3 = 4096;
					func_175(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (func_186(iParam2, 4000))
				{
					if ((func_187(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && func_188(iParam2, iParam0)) && func_189(iParam2, iParam0))
					{
						*uParam3 = 2;
						func_175(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((func_187(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && func_188(iParam2, iParam0)) && func_189(iParam2, iParam0))
				{
					*uParam3 = 2;
					func_175(iParam0, iParam2, *uParam3);
					return true;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (func_190(iParam0, Global_1935630->f_41))
							{
								func_191();
								*uParam3 = 2;
								func_175(iParam0, iParam2, *uParam3);
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
						if (func_190(iParam0, Global_1935630->f_41))
						{
							func_191();
							*uParam3 = 2;
							func_175(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (func_192(iParam2, iParam0) || (iParam2->f_9 > 0 && (func_169() - iParam2->f_9) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_191();
						*uParam3 = 2;
						func_175(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (func_193())
					{
						if (func_190(iParam0, Global_1935630->f_42))
						{
							func_191();
							*uParam3 = 2;
							func_175(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (func_194(iParam2, iParam0))
			{
				*uParam3 = 1024;
				func_175(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (func_195(iParam0, iParam1, iParam2))
				{
					*uParam3 = 2048;
					func_175(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (func_196(iParam0, iParam2))
					{
						*uParam3 = 8192;
						func_175(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (func_197(iParam0, iParam2))
				{
					*uParam3 = 32768;
					func_175(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (func_198(iParam2, 4000))
				{
					if (func_199(&iParam0, iParam2))
					{
						*uParam3 = 512;
						func_175(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (func_200(iParam0, iParam2))
				{
					*uParam3 = 65536;
					iParam2->f_4 = 0;
					func_175(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_201(iParam2, iParam0))
			{
				*uParam3 = 1;
				func_175(iParam0, iParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_59(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && does_entity_exist(iParam2))
	{
		if (!func_202(iParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_203(fParam0))
	{
		return false;
	}
	return true;
}

bool func_60(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
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
	return func_204(iParam0, &Var0);
}

void func_61(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_205((*uParam0)[iVar0], bParam1, bParam2);
		iVar0++;
	}
}

bool func_62()
{
	if (iVar1409 >= 8)
	{
		return false;
	}
	if (iLocal_228 == 0)
	{
		if (does_entity_exist(&(uLocal_1389[2])))
		{
			if (func_206(&(uLocal_1389[2])))
			{
				return true;
			}
		}
	}
	else
	{
		iVar0 = 2;
		while (iVar0 <= 5)
		{
			if (does_entity_exist(&(uLocal_1389[iVar0])))
			{
				if (func_206(&(uLocal_1389[iVar0])))
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_63()
{
	if (((iLocal_228 == 2 && iVar1413 == 16) && is_ped_on_mount(&(uLocal_1389[0]))) && is_shocking_event_in_sphere(-966930978, get_entity_coords(&(uLocal_1389[0]), true, false), 25f))
	{
		return true;
	}
	return false;
}

void func_64(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

bool func_65(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_207(iParam0, iParam1, sParam2, iParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

void func_66()
{
	if (!func_40(&(uLocal_1389[0]), 0, 1) || !_is_anim_scene_started(Local_220, false))
	{
		return;
	}
	if (iLocal_228 == 0)
	{
		if (!_0x1f0e401031e20146(Local_220, &(sLocal_516[4])) && !_0x8d81e7824b7753f7(Local_220, "NO_AMMO", 1))
		{
			_set_anim_scene_playback_list_bool(Local_220, &(sLocal_516[1]), true);
			sLocal_1131 = "FALL_RECOVER_B_MALE";
			iLocal_1412 = 3;
		}
	}
	else if (iLocal_228 == 1)
	{
		if (!_0x1f0e401031e20146(Local_220, &(sLocal_516[7])) && !_0x8d81e7824b7753f7(Local_220, "NO_AMMO", 1))
		{
			_set_anim_scene_playback_list_bool(Local_220, &(sLocal_516[2]), true);
			sLocal_1131 = "FALL_RECOVER_B_MALE";
			iLocal_1412 = 3;
		}
	}
	else if (iLocal_228 == 2)
	{
		if (!_0x1f0e401031e20146(Local_220, &(sLocal_516[8])))
		{
			_set_anim_scene_playback_list_bool(Local_220, &(sLocal_516[4]), true);
			iLocal_1412 = 4;
		}
	}
}

void func_67()
{
	if (_0x3ab6c7b0bb0df4b1(&(uLocal_1389[0]), -1))
	{
		return;
	}
	open_sequence_task(&iVar0);
	if (is_ped_on_mount(&(uLocal_1389[0])))
	{
		task_dismount_animal(0, 0, 0, 0, 0, 0);
	}
	task_smart_flee_ped(0, Global_35, 10000f, -1, 4096, 2f, 0);
	close_sequence_task(iVar0);
	task_perform_sequence(&(uLocal_1389[0]), iVar0);
	clear_sequence_task(&iVar0);
}

bool func_68()
{
	func_208();
	func_209();
	func_210();
	func_211();
	func_212();
	func_213();
	func_214();
	func_215();
	func_216();
	func_217();
	func_218();
	func_219();
	if (!bVar1087)
	{
		func_220();
	}
	func_221();
	func_222();
	func_223();
	if (iLocal_228 != 0 && func_153(&uLocal_1315, 1f))
	{
		if (!is_entity_dead(&(uLocal_1389[2])))
		{
			play_animal_vocalization(&(uLocal_1389[2]), "HOWL_LONG", false);
			func_224(1515458263, &(uLocal_1389[2]), 1);
		}
	}
	switch (iVar1409)
	{
		case 0:
			start_anim_scene(Local_220);
			if (iLocal_228 == 2)
			{
				start_petrol_trail_decals(1, 5f);
				add_petrol_trail_decal_info(vLocal_538, 1f);
				add_petrol_trail_decal_info(get_entity_coords(&(uLocal_1389[1]), true, false), 1f);
				end_petrol_trail_decals();
				_0xcac43d060099ea72(&(uLocal_1389[1]));
				task_play_anim(&(uLocal_1389[1]), &(Local_526[0]), Local_526[0]->f_1, 8f, -8f, -1, 131072, 0f, false, 0, false, 0, false);
				set_ped_using_action_mode(&(uLocal_1389[3]), true, -1, 0);
				set_ped_using_action_mode(&(uLocal_1389[4]), true, -1, 0);
				_0x89f5e7adecccb49c(&(uLocal_1389[3]), "action");
				_0x89f5e7adecccb49c(&(uLocal_1389[4]), "action");
				task_combat_animal_warn(&(uLocal_1389[3]), &(uLocal_1389[0]), 1 | 2);
				task_combat_animal_warn(&(uLocal_1389[4]), &(uLocal_1389[0]), 1 | 2);
				func_49(1);
				if (func_40(&(uLocal_1389[2]), 0, 1))
				{
					clear_ped_tasks_immediately(&(uLocal_1389[2]), false, true);
					set_ped_config_flag(&(uLocal_1389[2]), 138, true);
					task_eat(&(uLocal_1389[2]), &(uLocal_1389[1]), 0);
				}
			}
			else
			{
				func_225();
				_task_use_scenario_point(&(uLocal_1389[1]), iVar1405, 0, 0, false, true, 0, false, -1f, false);
				if (iLocal_228 == 0)
				{
					func_48(&(uLocal_1389[0]), 0, 1);
					func_49(1);
				}
				else
				{
					set_ped_using_action_mode(&(uLocal_1389[2]), true, -1, 0);
					set_ped_using_action_mode(&(uLocal_1389[3]), true, -1, 0);
					_0x89f5e7adecccb49c(&(uLocal_1389[2]), "action");
					_0x89f5e7adecccb49c(&(uLocal_1389[3]), "action");
					task_combat_animal_warn(&(uLocal_1389[2]), &(uLocal_1389[0]), 1 | 2);
					task_combat_animal_warn(&(uLocal_1389[3]), &(uLocal_1389[0]), 1 | 2);
				}
			}
			iLocal_1411 = 1;
			break;
		case 1:
			if (!bVar1061)
			{
				func_226();
				iLocal_1063 = 1;
			}
			else if (!bVar1062 && func_227())
			{
				set_ped_config_flag(&(uLocal_1389[1]), 284, false);
				iLocal_1064 = 1;
			}
			if (bVar1062)
			{
				if (func_228(&Local_26, 1f, 80f, 55f, 1, 0, 1, -1082130432, 1, 1125515264, 0, 0))
				{
					func_55(&uLocal_1279);
					func_229();
					if (!bVar1072 && !func_50(&uLocal_1285))
					{
						func_51(&uLocal_1285, 0);
					}
					_0x05d6195fb4d428f4(-1654545247);
					iLocal_1412 = 1;
					func_55(&uLocal_1288);
					iLocal_1411 = 4;
				}
			}
			if (func_230(Global_35, Local_26.f_51, 1) < 103f)
			{
				func_229();
			}
			break;
		case 4:
			if (func_231())
			{
				func_48(Global_35, 0, 1);
				iLocal_1411 = 6;
			}
			break;
		case 5:
			if (!func_40(&(uLocal_1389[0]), 0, 1))
			{
				func_47();
				func_48(Global_35, 0, 1);
				iLocal_1411 = 6;
			}
			else if (iLocal_228 != 0)
			{
				if (does_entity_exist(iVar1402) && is_entity_dead(iVar1402))
				{
					iLocal_1088 = 0;
					func_232();
				}
			}
			break;
		case 6:
			if (is_entity_dead(&(uLocal_1389[0])) || func_151(Global_35, &(uLocal_1389[0]), 1) > 6400f)
			{
				return true;
			}
			break;
		case 7:
			func_234(uLocal_1389[0], Local_860[0], 15f, &Local_987, &(Local_26.f_192), 0, 1, 0, 0, func_233(3, 0, 0), 0, 0, 2, 1, -1082130432, 0);
			if (iLocal_228 == 2)
			{
				iLocal_1411 = 8;
			}
			else
			{
				if (!is_entity_dead(&(uLocal_1389[0])))
				{
					if (_0x005e6f28dd7ed58d(Local_220, "male"))
					{
						set_ped_reset_flag(&(uLocal_1389[0]), 29, true);
						task_play_anim(&(uLocal_1389[0]), sVar1037, sVar1129, 1000f, -4f, -1, 0, 0f, false, 0, false, 0, false);
						_0x2208438012482a1a(&(uLocal_1389[0]), false, false);
						_0xaab050da48b57978(&(uLocal_1389[0]), "Default_Scared", 0, -1, 4);
						iLocal_1411 = 8;
					}
				}
				Jump @4741; //curOff = 1160
				func_234(uLocal_1389[0], Local_860[0], 15f, &Local_987, &(Local_26.f_192), 0, 1, 0, 0, func_233(3, 0, 0), 0, 0, 2, 1, -1082130432, 0);
				if (!func_90(&(uLocal_1389[0]), -2017877118) && !_0x3ab6c7b0bb0df4b1(&(uLocal_1389[0]), -1))
				{
					if (func_59(0, 1, &(uLocal_1389[0]), 1))
					{
						if (bVar1059)
						{
							func_19();
						}
						else
						{
							iLocal_1411 = 9;
						}
					}
					else if (!func_90(&(uLocal_1389[0]), -875674219))
					{
						task_turn_ped_to_face_entity(&(uLocal_1389[0]), Global_35, -1, -1f, -1f, -1082130432);
					}
				}
				else if (!is_entity_dead(&(uLocal_1389[0])))
				{
					set_ped_reset_flag(&(uLocal_1389[0]), 29, true);
				}
				Jump @4741; //curOff = 1364
				if (func_40(&(uLocal_1389[0]), 0, 1))
				{
					if (func_234(uLocal_1389[0], Local_860[0], 15f, &Local_987, &(Local_26.f_192), 0, 1, 0, 0, func_233(3, 0, 0), 0, 0, 2, 1, -1082130432, 0) != -1)
					{
						func_61(&Local_987, 0, 0);
					}
					if (!_0x3ab6c7b0bb0df4b1(&(uLocal_1389[0]), -1))
					{
						if (!bVar1057)
						{
							func_235();
							_0x66f9eb44342bb4c5(&(uLocal_1389[0]), &Local_810);
							set_ped_max_move_blend_ratio(&(uLocal_1389[0]), 1f);
							if (iVar1068 == 1 && ((iLocal_228 != 2 && iVar440 == 5) || func_236(&(uLocal_1389[0]), uLocal_1396[0], Global_35, &uLocal_442, &Local_229, &Local_26)))
							{
								if (iLocal_228 != 2)
								{
									_0xe8c296b75eacc357(&(uLocal_1389[0]), 0f);
									open_sequence_task(&uLocal_1417);
									task_stand_still(0, 850);
									if (func_40(&(uLocal_1389[1]), 0, 1))
									{
										task_mount_animal(0, &(uLocal_1389[1]), -1, -1, 1f, 1, 0, 0);
									}
									_task_move_in_traffic_2(0, vLocal_550, 1073741824, 1.501f, 6144, 0);
									close_sequence_task(iVar1415);
									_task_perform_sequence_2(&(uLocal_1389[0]), iVar1415, 1.2f, 1.2f);
									clear_sequence_task(&uLocal_1417);
									func_237();
									iLocal_1048 = get_hash_key(&(Local_229.f_34));
									iLocal_1411 = 16;
								}
								else
								{
									func_238();
									func_55(&uLocal_1276);
									iLocal_1411 = 10;
								}
							}
							else if (((iVar440 == 5 && !bVar1058) && iLocal_228 != 2) && is_ped_facing_ped(Global_35, &(uLocal_1389[0]), 90f))
							{
								if (!is_string_null_or_empty(sVar443))
								{
									task_play_anim(Global_35, &(Local_229.f_2), sVar443, 8f, -8f, -1, 67108880, 0f, false, 0, false, 0, false);
								}
								iLocal_1060 = 1;
							}
						}
						else
						{
							if (!func_90(&(uLocal_1389[0]), 518218985))
							{
								_task_smart_flee_style_ped(&(uLocal_1389[0]), Global_35, 3, 4224, -1082130432, -1, &(uLocal_1389[1]));
							}
							iLocal_1411 = 16;
						}
					}
				}
				else
				{
					return true;
				}
				Jump @4741; //curOff = 1883
				if (func_40(&(uLocal_1389[0]), 0, 1))
				{
					iVar0 = func_234(uLocal_1389[0], Local_860[0], 15f, &Local_987, &(Local_26.f_192), 0, 1, 0, 0, 1, 0, 0, 2, 1, -1082130432, 0);
					if (iVar0 == 0)
					{
						func_61(&Local_987, 0, 0);
						func_239(Local_860[0], 0);
						func_240(0);
						func_241(Global_1935630, 4);
						iLocal_1066 = 1;
						iLocal_1411 = 11;
					}
					else if (iVar0 == 1)
					{
						func_61(&Local_987, 0, 0);
						func_239(Local_860[0], 0);
						func_242();
					}
					if (func_153(&uLocal_1276, 10f) && func_59(0, 1, &(uLocal_1389[0]), 1))
					{
						if (!bVar1066)
						{
							func_65(&(uLocal_1389[0]), Global_35, &(sLocal_449[26]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							func_55(&uLocal_1276);
							iLocal_1068 = 1;
						}
						else
						{
							func_242();
						}
					}
				}
				else
				{
					return true;
				}
				Jump @4741; //curOff = 2134
				if (func_40(&(uLocal_1389[0]), 0, 1))
				{
					func_234(uLocal_1389[0], Local_860[0], 15f, &Local_987, &(Local_26.f_192), 0, 1, 0, 0, func_233(3, 0, 0), 0, 0, 2, 1, -1082130432, 0);
					if (!bVar1065)
					{
						if (func_59(0, 1, Global_35, 1) && func_59(0, 1, &(uLocal_1389[0]), 1))
						{
							if (bVar1064)
							{
								func_65(&(uLocal_1389[0]), Global_35, &(sLocal_449[23]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								if (func_243(Global_35) && !func_244(&(uLocal_1389[0])))
								{
									open_sequence_task(&iVar1);
									task_play_anim(0, &(Local_526[3]), Local_526[3]->f_1, 8f, -8f, -1, 67108864, 0f, false, 0, false, 0, false);
									task_mount_animal(0, func_245(Global_35), -1, 0, 2f, 1, 0, 0);
									close_sequence_task(iVar1);
									task_perform_sequence(&(uLocal_1389[0]), iVar1);
									clear_sequence_task(&iVar1);
									func_2(&uLocal_1333, 0);
									func_7(&uLocal_1333, 0);
									set_ped_can_be_targetted(&(uLocal_1389[0]), false);
								}
							}
							else
							{
								func_65(&(uLocal_1389[0]), Global_35, &(sLocal_449[24]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							iLocal_1067 = 1;
						}
					}
					else if (bVar1064)
					{
						if (func_59(-4.5f, 1, 0, 0))
						{
							if ((func_246(0) && !func_247(0)) && func_41(Global_35, func_114(0), 1, 1) <= func_248(0))
							{
								iLocal_1418 = 0;
							}
							else if ((func_246(1) && !func_247(1)) && func_41(Global_35, func_114(1), 1, 1) <= func_248(1))
							{
								iLocal_1418 = 1;
							}
							else
							{
								iLocal_1418 = -1;
							}
							if (!is_ped_on_mount(Global_35))
							{
								if (iVar1416 != -1)
								{
									func_249("RE_ES_OBJ_MNT", 7500, 0, 0, -1, -1, 0);
									func_250(iVar1416);
								}
							}
							else
							{
								func_251();
								func_249("ANIMAL_OBJ_RIDE", 7500, 0, 0, -1, -1, 0);
								iLocal_1094 = 1;
							}
							func_55(&uLocal_1330);
							iLocal_1042 = 27;
							func_252();
							iLocal_1411 = 12;
						}
					}
					else if (func_59(-6f, 1, 0, 0))
					{
						_task_move_in_traffic_2(&(uLocal_1389[0]), vLocal_550, 1073741824, 1f, 128, 0);
						iLocal_1411 = 16;
					}
				}
				else
				{
					return true;
				}
				Jump @4741; //curOff = 2757
				if (func_40(&(uLocal_1389[0]), 0, 1))
				{
					_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
					func_253();
					if (func_230(Global_35, vLocal_550, 0) < 8f)
					{
						iLocal_1411 = 13;
						func_64(&iLocal_1403);
						func_83();
						func_65(&(uLocal_1389[0]), Global_35, &(sLocal_449[44]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_85(iVar1416);
						return false;
					}
					if (is_ped_on_mount(Global_35))
					{
						if (func_84(iVar1416))
						{
							func_85(iVar1416);
							if (!bVar1092)
							{
								func_249("ANIMAL_OBJ_RIDE", 7500, 0, 0, -1, -1, 0);
								iLocal_1094 = 1;
							}
							else
							{
								_uilog_set_cached_objective(func_254(0, "ANIMAL_OBJ_RIDE", 0, 0, -1, -1));
							}
						}
					}
					else if (!func_84(iVar1416))
					{
						if (iVar1416 == -1 || func_247(iVar1416))
						{
							func_255();
						}
						else if (!bVar1097)
						{
							func_83();
							func_64(&iLocal_1403);
							func_249("RE_ES_OBJ_MNT", 7500, 0, 0, -1, -1, 0);
							func_250(iVar1416);
							func_55(&uLocal_1109);
							iLocal_1099 = 1;
						}
						else
						{
							func_255();
						}
					}
					if (func_243(Global_35))
					{
						if (!func_115(&(uLocal_1389[0]), func_245(Global_35), 0))
						{
							if (!does_blip_exist(&(uLocal_1396[0])))
							{
								func_160(&(uLocal_1389[0]), uLocal_1396[0], -89429847, 580546400, 0, "RE_INTER_STRANGER");
								func_64(&iLocal_1403);
							}
							if (!bVar1063)
							{
								if (!func_90(&(uLocal_1389[0]), 1868526510))
								{
									task_mount_animal(&(uLocal_1389[0]), func_245(Global_35), -1, 0, 2f, 1, 0, 0);
									func_2(&uLocal_1333, 0);
									func_7(&uLocal_1333, 0);
									set_ped_can_be_targetted(&(uLocal_1389[0]), false);
								}
							}
						}
						else
						{
							func_256();
							if (!does_blip_exist(iVar1401))
							{
								func_251();
								func_64(uLocal_1396[0]);
							}
						}
					}
					else
					{
						if (func_234(uLocal_1389[0], Local_860[0], 15f, &Local_987, &(Local_26.f_192), 0, 1, 0, 0, func_233(3, 0, 0), 0, 0, 2, 1, -1082130432, 0) == 1)
						{
							func_61(&Local_987, 0, 0);
							iLocal_1411 = 15;
						}
						else
						{
							if (is_ped_on_mount(&(uLocal_1389[0])) && !func_90(&(uLocal_1389[0]), 242628503))
							{
								open_sequence_task(&uLocal_1417);
								task_dismount_animal(0, 0, 0, 0, 0, 0);
								task_follow_and_converse_with_ped(0, Global_35, 0, 0, -1082130432, -1082130432, 8, 0, 0, 1069547520, 1073741824);
								close_sequence_task(iVar1415);
								task_perform_sequence(&(uLocal_1389[0]), iVar1415);
								clear_sequence_task(&uLocal_1417);
								func_2(&uLocal_1333, 1);
								set_ped_can_be_targetted(&(uLocal_1389[0]), true);
							}
							func_64(uLocal_1396[0]);
							if (func_41(Global_35, &(uLocal_1389[0]), 0, 1) > 40f)
							{
								func_249("ANIMAL_RIDE_ABANDON", 7500, 0, 0, -1, -1, 0);
								_task_move_in_traffic_2(&(uLocal_1389[0]), vLocal_550, 1073741824, 1f, 128, 0);
								return true;
							}
							Jump @3556; //curOff = 3533
							func_249("ANIMAL_RIDE_DEAD", 7500, 0, 0, -1, -1, 0);
							return true;
							Jump @4741; //curOff = 3556
							func_257();
							if (func_40(&(uLocal_1389[0]), 0, 1))
							{
								if (!is_ped_on_mount(&(uLocal_1389[0])))
								{
									iLocal_1406 = _find_closest_active_scenario_point_of_type(vLocal_553, iVar535, 5f, 1, false);
									if (_does_scenario_point_exist(iVar1404))
									{
										_task_use_scenario_point(&(uLocal_1389[0]), iVar1404, "WORLD_HUMAN_LEAN_RAILING_FEMALE_A", 0, true, false, 0, false, -1f, false);
									}
									else
									{
										task_wander_standard(&(uLocal_1389[0]), func_258(get_entity_coords(&(uLocal_1389[0]), true, false), vLocal_550, 1), 0);
									}
									func_44(12, 0, 0, "HONOR_EVENT_STRANGER_HELPED", &(uLocal_1389[0]), 0, 1065353216, 0);
									_0xa3db37edf9a74635(get_player_index(), &(uLocal_1389[0]), 7, 2, 1);
									_0xe737d5f14304a2ec(&(uLocal_1389[0]), player_id(), 120000);
									func_259(&(uLocal_1389[0]), 1, 1);
									set_ped_can_be_targetted(&(uLocal_1389[0]), true);
									set_player_control(player_id(), true, 256, false);
									iLocal_1411 = 14;
								}
								else if (!bVar1076)
								{
									if (func_260(Global_35, &uLocal_1043, 65, 256, 0, 1084227584, 100, 0, 0))
									{
										open_sequence_task(&iVar2);
										task_dismount_animal(0, 0, 0, 0, 0, 0);
										task_turn_ped_to_face_entity(0, Global_35, 0, -1f, -1f, -1082130432);
										task_play_anim(0, &(Local_526[4]), Local_526[4]->f_1, 8f, -8f, -1, 67108864, 0f, false, 0, false, 0, false);
										close_sequence_task(iVar2);
										task_perform_sequence(&(uLocal_1389[0]), iVar2);
										clear_sequence_task(&iVar2);
										iLocal_1078 = 1;
									}
								}
							}
							Jump @4741; //curOff = 3932
							func_257();
							if (func_40(&(uLocal_1389[0]), 0, 1))
							{
								if ((func_261(&(uLocal_1389[0]), iVar535) && bVar1091) && !func_50(&uLocal_1324))
								{
									_0xb9bdfae609dfb7c5(&(uLocal_1389[0]), player_id(), 120000);
									return true;
								}
							}
							else
							{
								return true;
							}
							Jump @4741; //curOff = 4020
							if (func_40(&(uLocal_1389[0]), 0, 1))
							{
								func_234(uLocal_1389[0], Local_860[0], 15f, &Local_987, &(Local_26.f_192), 0, 1, 0, 0, func_233(3, 0, 0), 0, 0, 2, 1, -1082130432, 0);
								if (func_59(0, 1, Global_35, 1) && func_59(0, 1, &(uLocal_1389[0]), 1))
								{
									if (bVar1093)
									{
										if (bVar1094)
										{
											func_65(&(uLocal_1389[0]), Global_35, &(sLocal_449[65]), 0, -1082130432, 2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
										}
										else
										{
											func_65(&(uLocal_1389[0]), Global_35, &(sLocal_449[63]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
										}
									}
									else
									{
										func_65(&(uLocal_1389[0]), Global_35, &(sLocal_449[24]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
									}
									open_sequence_task(&iVar3);
									if (is_ped_on_mount(&(uLocal_1389[0])))
									{
										task_dismount_animal(0, 0, 0, 0, 0, 0);
									}
									_task_move_in_traffic_2(0, vLocal_550, 1073741824, 1f, 128, 0);
									close_sequence_task(iVar3);
									_task_perform_sequence_2(&(uLocal_1389[0]), iVar3, 1f, 1f);
									clear_sequence_task(&iVar3);
									return true;
								}
							}
							Jump @4741; //curOff = 4338
							if (iLocal_228 != 2 && does_blip_exist(&(uLocal_1396[0])))
							{
								if (!func_262(&(Local_229.f_34), 1) && _0x4a98e228a936dbcc(&(uLocal_1389[0])) != iVar1046)
								{
									remove_blip(uLocal_1396[0]);
								}
							}
							if (!bVar1085)
							{
								iVar4 = func_234(uLocal_1389[0], Local_860[0], 15f, &Local_987, &(Local_26.f_192), 0, 1, 0, 0, func_233(3, 0, 0), 0, 0, 2, 1, -1082130432, 0);
								if (iVar4 == 0)
								{
									func_205(Local_987[0], 0, 0);
									func_205(Local_987[1], 0, 0);
									iLocal_1083 = 1;
									func_55(&uLocal_1306);
								}
								else if (iVar4 == 1)
								{
									func_205(Local_987[1], 0, 0);
									func_205(Local_987[0], 0, 0);
									iLocal_1082 = 1;
									func_55(&uLocal_1306);
								}
							}
							func_263();
							if (func_115(Global_35, &(uLocal_1389[1]), 1) && !bVar1079)
							{
								func_60(&(uLocal_1389[0]), "POST_THEFT", 1744022339, Global_35, 1, 0, 0, 1);
								open_sequence_task(&iVar5);
								task_mount_animal(0, &(uLocal_1389[1]), -1, -1, 1.5f, 1, 0, 0);
								_task_move_in_traffic_2(0, vLocal_550, 1073741824, 1.501f, 0, 0);
								close_sequence_task(iVar5);
								task_perform_sequence(&(uLocal_1389[0]), iVar5);
								clear_sequence_task(&iVar5);
								iLocal_1081 = 1;
							}
							if (func_59(0, 1, 0, 0))
							{
								if (!(func_40(&(uLocal_1389[0]), 0, 1) && func_151(Global_35, &(uLocal_1389[0]), 0) < 3600f))
								{
									return true;
								}
							}
						}
						return false;
					}
				}
			}
			default:
				break;
	}
}

bool func_69(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, int iParam10, int iParam11, int iParam12)
{
	fVar0 = 0f;
	if (uParam0->f_1 >= 4)
	{
		if (bParam6)
		{
			if (func_264())
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
			else if (func_265(uParam0->f_3))
			{
				fVar0 = 250f;
			}
			else if (func_98(uParam0->f_3, 131072))
			{
				fVar0 = 70f;
				fVar0 = (fVar0 + 10f);
			}
			else if (func_98(uParam0->f_3, 1) && iParam12 == 0)
			{
				fVar0 = 215f;
				fVar0 = (fVar0 + 20f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 80f);
				}
			}
			else if (func_98(uParam0->f_3, 2) || iParam12 == 1)
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
				if (func_266(Global_36, uParam0->f_51) > fVar0)
				{
					return true;
				}
			}
			else
			{
				vVar1 = { fParam9, iParam10, iParam11 };
				if (func_266(Global_36, vVar1) > fVar0)
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

bool func_70(int iParam0, var uParam1, var uParam2, float fParam3)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!is_entity_dead(uParam1[iVar0]) && iParam0 != uParam1[iVar0])
		{
			if (func_41(iParam0, uParam1[iVar0], 1, 1) < fParam3)
			{
				*uParam2 = iVar0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_71(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_72(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_73(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_72(iParam0, 4);
	}
	else
	{
		func_71(iParam0, 4);
	}
}

void func_74(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_72(iParam0, 32);
	}
	else
	{
		func_71(iParam0, 32);
	}
}

void func_75(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_72(iParam0, 64);
	}
	else
	{
		func_71(iParam0, 64);
	}
}

void func_76(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_72(iParam0, 1024);
	}
	else
	{
		func_71(iParam0, 1024);
	}
}

void func_77(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_72(iParam0, 1048576);
	}
	else
	{
		func_71(iParam0, 1048576);
	}
}

void func_78(int iParam0)
{
	func_12(iParam0, 0);
	func_267(iParam0, 0);
	func_4(iParam0, 1);
	func_11(iParam0, 1);
	func_268(iParam0, 0);
	func_10(iParam0, 1);
	func_269(iParam0, 1, 1, 1);
}

var func_79(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	if (bParam2)
	{
		_0xdd1232b332cbb9e7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_270(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_254(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		_uilog_set_cached_objective(sVar0);
	}
	return func_270(sVar0, iParam1, 0, 0, 1, 1);
}

bool func_80()
{
	if ((!is_player_playing(player_id()) || is_ped_dead_or_dying(Global_35, true)) || _0xc5c395c60b542a3c(1))
	{
		return true;
	}
	return false;
}

void func_81(int iParam0, bool bParam1, bool bParam2)
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

void func_82(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_271(iParam0, iParam1);
	Global_17504.f_1003[iVar0]->f_1 = iParam2;
}

void func_83()
{
	_uilog_clear_cached_objective();
}

bool func_84(int iParam0)
{
	iParam0 = func_272(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_273(iParam0, 32))
	{
		return true;
	}
	return false;
}

void func_85(int iParam0)
{
	iParam0 = func_272(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_274(iParam0, 32);
	func_275();
}

void func_86(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if (decor_exist_on(iParam0, "honor_block"))
		{
			decor_remove(iParam0, "honor_block");
		}
	}
}

void func_87(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_88(int iParam0)
{
	if (!func_276(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_46 = 0;
}

bool func_89(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return false;
	}
	if (!_does_scenario_point_exist(iParam1))
	{
		return false;
	}
	return _0x9c54041bb66bcf9e(iParam0, iParam1);
}

bool func_90(int iParam0, int iParam1)
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

void func_91(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!does_entity_exist(*iParam0))
	{
		return;
	}
	if (_0xa7e51b53309eac97(*iParam0))
	{
		return;
	}
	if (!does_entity_belong_to_this_script(*iParam0, false))
	{
		return;
	}
	if (!is_ped_injured(*iParam0))
	{
		set_entity_load_collision_flag(*iParam0, 0);
		if (!bParam3)
		{
			clear_ped_secondary_task(*iParam0);
		}
		set_ped_keep_task(*iParam0, bParam1);
		if (bParam2)
		{
			set_blocking_of_non_temporary_events(*iParam0, false);
		}
	}
	set_ped_as_no_longer_needed(iParam0);
}

void func_92(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (are_strings_equal(_0xf81c53561d15f330(), func_277(uParam0->f_3)))
	{
		_0x1096603b519c905f("");
	}
	if (uParam0->f_48)
	{
		stop_audio_scene("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			func_278(uParam0->f_3, 524288);
		}
	}
	if (func_40(player_ped_id(), 0, 1))
	{
		iVar1 = get_mount(Global_35);
		set_ped_config_flag(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			bVar3 = (bParam8 && decor_exist_on(uParam1[iVar0], "pedRoam_bInPedRoam"));
			if (func_40(uParam1[iVar0], 0, 0))
			{
				func_279(uParam1[iVar0], bVar3);
				if (func_280(uParam0, (*uParam1)[iVar0]))
				{
					func_281((*uParam1)[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (func_40(uParam1[iVar0], 0, 1))
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
							func_283(uParam1[iVar0], 1073741824, func_282(iVar0 < iVar2, &(uParam0->f_98[iVar0]), -1f), iVar1, 0);
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
		func_284(uParam0);
	}
	func_285(uParam0);
	if (!uParam0->f_186)
	{
		func_141(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = func_286(uParam0->f_3, uParam0->f_185);
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
		func_287(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

void func_93(var uParam0, int iParam1)
{
	if (func_140(uParam0))
	{
		_0x9cf1836c03fb67a2(uParam0, iParam1);
	}
}

void func_94(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		*(*uParam0)[iVar0] = { Var1 };
		iVar0++;
	}
	uParam0->f_136 = 0;
}

bool func_95(bool bParam0)
{
	iVar0 = get_cause_of_most_recent_force_cleanup();
	if (bParam0)
	{
		return true;
	}
	if (func_288(iVar0))
	{
		return false;
	}
	if (func_289(iVar0, 1) || func_289(iVar0, 2))
	{
		return true;
	}
	return false;
}

int func_96(int iParam0, var uParam1, bool bParam2, var uParam3, struct<7> Param4, var uParam11, bool bParam12, bool bParam13, int iParam14)
{
	if (Param4.f_6 > -1)
	{
		*uParam1 = { func_290(iParam0, Param4.f_6) };
		uParam1->f_4 = Param4.f_6;
		uParam1->f_5 = uParam1->f_4;
		func_291(iParam0, uParam1, bParam2, bParam12, 0);
		*uParam3 = 0;
		return 1;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (func_144(iParam0, 128))
			{
				if (!func_292(iParam0, &(uParam1->f_10)))
				{
					*uParam11 = 1;
					return 0;
				}
			}
			else
			{
				func_293(iParam0, &uVar1, &uVar2, &iVar0, 0);
				bVar4 = false;
				*uParam1 = { func_294(&bVar4, iParam0, uVar2, uVar1) };
				if (bVar4)
				{
					*uParam11 = 1;
					return 0;
				}
				if (func_34(*uParam1))
				{
					return func_295(uParam1, uParam3, uParam11, bParam2, 12, 1000);
				}
				uParam1->f_4 = func_296(iParam0, *uParam1);
				uParam1->f_5 = uParam1->f_4;
				if (func_17(Param4.f_2, 8))
				{
					func_291(iParam0, uParam1, 0, bParam12, 0);
					*uParam3 = 0;
					return 1;
				}
				func_297(uParam1);
			}
			*uParam3 = 0;
			uParam1->f_9 = 2;
			break;
		case 1:
			if (func_298(uParam1, uParam3, uParam11, bParam2, bParam13))
			{
				if (!bParam13 && func_299(vdist(Global_36, *uParam1), iParam0))
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
			if (func_144(iParam0, 128))
			{
				if (!func_300(uParam1, &bVar3))
				{
					if (bVar3)
					{
						return func_295(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					return 0;
				}
			}
			else
			{
				func_293(iParam0, &uVar1, &uVar2, &iVar0, 0);
				if (vdist2(*uParam1, Global_36) < to_float(iVar0))
				{
					if (!func_297(uParam1))
					{
						return func_295(uParam1, uParam3, uParam11, bParam2, 12, 1000);
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
			if (func_301(iParam0, Param4.f_1, uParam1, Param4, iParam14))
			{
				func_291(iParam0, uParam1, bParam2, bParam12, 0);
				*uParam3 = 0;
				return 1;
			}
			else
			{
				*uParam3 = 0;
				uParam1->f_9 = 5;
				return func_295(uParam1, uParam3, uParam11, bParam2, 12, 1000);
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
		func_79("BEAT_SCAN", 2000, 0, 1, 0, 0, -1, -1, 0);
	}
	if (uParam1->f_8 >= 12)
	{
		if (bParam2)
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_79("BEAT_FAIL", 4000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam11 = 1;
	}
	return 0;
}

bool func_97(var uParam0, int iParam1)
{
	if (func_98(iParam1, 256))
	{
		if (_does_volume_exist(uParam0->f_172) || func_303(iParam1, func_302(uParam0), &(uParam0->f_172)))
		{
			if (func_40(Global_35, 0, 1))
			{
				return is_entity_in_volume(Global_35, uParam0->f_172, true, 0);
			}
		}
	}
	return true;
}

bool func_98(int iParam0, int iParam1)
{
	if (!func_276(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0] && iParam1) != 0;
}

void func_99(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (uParam0->f_176)
	{
		return;
	}
	if (iParam1 != -1)
	{
		func_304(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, IntToFloat(iParam1), IntToFloat(iParam1), 5f, "Custom Sized Ambient Avoidance");
	}
	else if (func_98(uParam0->f_3, 1) && !func_98(uParam0->f_3, 32))
	{
		func_304(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 25f, 25f, 6f, "Ambient Avoidance Wilderness & No Traffic");
	}
	else if (func_98(uParam0->f_3, 2) && !func_98(uParam0->f_3, 32))
	{
		func_304(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 4f, 4f, 5f, "Ambient Avoidance Town & No Traffic");
	}
	else
	{
		return;
	}
	_0xb56d41a694e42e86(uParam0->f_171, 2228255, 262144, 0, -1, -1, uParam0->f_175);
	_0x18262cafebb5fbe1(uParam0->f_171, 0, 0, 0, -1, -1, 0);
	if (bParam3)
	{
		func_305(uParam0->f_171, 1);
	}
	if (func_98(uParam0->f_3, 1))
	{
		func_304(&(uParam0->f_174), uParam0->f_51, 0f, 0f, 0f, _0x3e2a25b2416dd67e(uParam0->f_171) * Vector(3.5f, 3.5f, 3.5f), "Predator Stay Out");
		func_306(uParam0->f_174, 0, 262144, 0, 0);
	}
	if (iParam2 == 0)
	{
	}
	else if (does_entity_exist(iParam2))
	{
		_0x7c00cfc48a782dc0(uParam0->f_171, iParam2, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
}

float func_100(vector3 vParam0)
{
	vVar0 = { Global_36 - vParam0 };
	return get_heading_from_vector_2d(vVar0.x, vVar0.y);
}

int func_101(int iParam0)
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

int func_102(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return (func_307(iParam0) % iParam1);
	}
	return (func_308(iParam0) % iParam1);
}

int func_103(int iParam0, int iParam1)
{
	iVar0 = func_309(iParam0, iParam1);
	if (iVar0 != -1)
	{
		return Global_17504.f_1003[iVar0]->f_1;
	}
	return 0;
}

Vector3 func_104(int iParam0, int iParam1)
{
	return func_310(iParam0, iParam1);
}

float func_105(int iParam0, int iParam1)
{
	return func_311(iParam0, iParam1);
}

Vector3 func_106(int iParam0, int iParam1)
{
	return func_312(iParam0, iParam1);
}

float func_107(int iParam0, int iParam1)
{
	return func_313(iParam0, iParam1);
}

Vector3 func_108(int iParam0, int iParam1)
{
	return func_314(iParam0, iParam1);
}

float func_109(int iParam0, int iParam1)
{
	return func_315(iParam0, iParam1);
}

Vector3 func_110(int iParam0, int iParam1)
{
	return func_316(iParam0, iParam1);
}

float func_111(int iParam0, int iParam1)
{
	return func_317(iParam0, iParam1);
}

bool func_112(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_113(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

int func_114(int iParam0)
{
	iParam0 = func_272(iParam0);
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

bool func_115(int iParam0, int iParam1, bool bParam2)
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

int func_116()
{
	return func_319(func_318());
}

bool func_117(int iParam0)
{
	if (func_320())
	{
		return false;
	}
	return func_321((*Global_1347702)[58]->f_15, 1);
}

bool func_118(var uParam0)
{
	iVar0 = func_322(uParam0->f_3);
	iVar1 = func_323(1);
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

void func_119()
{
	Local_604[1]->f_1 = -1038436471;
	switch (iLocal_228)
	{
		case 2:
			Local_604[0]->f_1 = -460918927;
			Local_604[0]->f_3 = 54369366;
			StringCopy(&(Local_604[0]->f_23), "0871_A_F_M_Civ_White_AVOID_03", 64);
			Local_604[0] = 5;
			uLocal_443 = &sLocal_449[13];
			uLocal_444 = &sLocal_449[15];
			uLocal_446 = &sLocal_449[16];
			uLocal_447 = &sLocal_449[17];
			StringCopy(&(Local_229.f_34), &(sLocal_449[19]), 64);
			break;
		case 0:
		case 1:
			switch (func_116())
			{
				case 0:
					Local_604[0]->f_1 = 1657260860;
					Local_604[0]->f_3 = 54369366;
					StringCopy(&(Local_604[0]->f_23), "ANNESBURG_HUSBAND", 64);
					break;
				case 1:
				case 2:
				default:
					Local_604[0]->f_1 = 1657260860;
					Local_604[0]->f_3 = -1676093373;
					StringCopy(&(Local_604[0]->f_23), "0898_A_M_M_Civ_Poor_Hispanic_AVOID_03", 64);
					break;
			}
			Local_604[0] = 4;
			uLocal_443 = &sLocal_449[0];
			uLocal_444 = &sLocal_449[2];
			uLocal_446 = &sLocal_449[3];
			uLocal_447 = &sLocal_449[4];
			StringCopy(&(Local_229.f_34), &(sLocal_449[6]), 64);
			Local_229.f_190 = 2;
			break;
	}
	func_324(&(Local_604[0]->f_22));
	func_325();
}

void func_120()
{
	if (func_326(128))
	{
		Local_797[0]->f_7 = -274058460;
	}
}

void func_121()
{
	Local_810 = { 0f, 0f, 0f };
	Local_810.f_3 = Global_35;
	Local_810.f_8 = 4;
	Local_810.f_19 = 4;
	Local_810.f_21 = 4;
	Local_810.f_17 = 4;
	Local_810.f_18 = 4;
	Local_810.f_7 = -1;
}

void func_122()
{
	if (iLocal_228 == 0)
	{
		StringCopy(&(Local_229.f_2), "SCRIPT_RE@ANIMAL_ATTACK@MALE@TREE", 64);
		StringCopy(&(Local_229.f_10), "ALMOST_MEAL_MALE", 64);
	}
	else if (iLocal_228 == 1)
	{
		StringCopy(&(Local_229.f_2), "SCRIPT_RE@ANIMAL_ATTACK@MALE@ROCK", 64);
		StringCopy(&(Local_229.f_10), "ALMOST_MEAL_MALE", 64);
	}
	else
	{
		StringCopy(&(Local_229.f_2), "SCRIPT_RE@ANIMAL_ATTACK@FEMALE@ROCK", 64);
		StringCopy(&(Local_229.f_10), "GENTLEMAN_FEMALE", 64);
		sLocal_445 = "THANK_YOU_PLAYER";
	}
	Local_229.f_77 = 0;
	if (iLocal_228 != 2)
	{
		Local_229.f_80 = 0;
		Local_229.f_180 = 1;
		Local_229.f_212 = 1f;
	}
	else
	{
		Local_229.f_80 = 1;
	}
	Local_229.f_189 = 1.4f;
	Local_229.f_186 = 10f;
	Local_229.f_188 = 20f;
	Local_229.f_182 = 1;
	Local_229.f_78 = 0;
}

void func_123(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		func_327(&((*iParam0)[iVar0]->f_1));
		func_327(&((*iParam0)[iVar0]->f_12));
		iVar0++;
	}
}

void func_124(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0]->f_7 != 0)
		{
			request_model((*uParam0)[iVar0]->f_7, false);
		}
		iVar0++;
	}
}

void func_125()
{
	Local_526[0] = "creatures_mammal@horse@normal@dead";
	Local_526[0]->f_1 = "dead_left";
	Local_526[1] = "creatures_mammal@cougar@melee@streamed_taunts";
	Local_526[1]->f_1 = "growling";
	Local_526[2] = func_328(&(Local_229.f_2));
	Local_526[2]->f_1 = func_328(&(Local_229.f_10));
	if (iLocal_228 == 2)
	{
		Local_526[3]->f_1 = "VERY_KIND_FEMALE";
		Local_526[3] = "SCRIPT_RE@ANIMAL_ATTACK@FEMALE@ROCK";
		Local_526[4]->f_1 = "THANKS_AGAIN_FEMALE";
		Local_526[4] = "SCRIPT_RE@ANIMAL_ATTACK@FEMALE@ROCK";
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!is_string_null_or_empty(&(Local_526[iVar0])))
		{
			func_329(&(Local_526[iVar0]), &uLocal_563);
		}
		iVar0++;
	}
}

bool func_126(var uParam0, var uParam1)
{
	return true;
}

bool func_127(var uParam0)
{
	bVar0 = true;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (!is_string_null_or_empty((*uParam0)[iVar1]))
		{
			if (!has_anim_dict_loaded((*uParam0)[iVar1]))
			{
				bVar0 = false;
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
		return false;
	}
	return true;
}

bool func_128(int iParam0)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (!func_330((*iParam0)[iVar0]))
		{
			bVar1 = true;
		}
		iVar0++;
	}
	return !bVar1;
}

bool func_129(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0]->f_7 != 0)
		{
			if (!has_model_loaded((*uParam0)[iVar0]->f_7))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_130(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, float fParam5, int iParam6, int iParam7)
{
	if (!func_331(iParam2))
	{
		return false;
	}
	if (iParam6 < 0 || iParam6 >= *iParam2)
	{
		iParam6 = 0;
	}
	if (iParam7 < 0 || iParam7 >= *iParam2)
	{
		iParam7 = (*iParam2 - 1);
	}
	iVar0 = iParam6;
	while (iVar0 <= iParam7)
	{
		if ((*iParam2)[iVar0]->f_1 != 0)
		{
			if (bParam3 && !func_332(&((*iParam2)[iVar0]->f_22)))
			{
				vVar3 = { _get_object_offset_from_coords(uParam0->f_51, uParam0->f_51.f_3, (*iParam2)[iVar0]->f_6) };
				fVar1 = func_333((uParam0->f_51.f_3 + (*iParam2)[iVar0]->f_9));
			}
			else
			{
				vVar3 = { (*iParam2)[iVar0]->f_6 };
				fVar1 = func_333((*iParam2)[iVar0]->f_9);
			}
			if (!func_334(&((*iParam2)[iVar0]->f_22)))
			{
				func_335(&vVar3, 1, 10, 0);
			}
			if ((*iParam2)[iVar0]->f_12 != 0)
			{
				if (!(*iParam2)[iVar0]->f_19 && !func_332(&((*iParam2)[iVar0]->f_22)))
				{
					vVar6 = { _get_object_offset_from_coords(uParam0->f_51, uParam0->f_51.f_3, (*iParam2)[iVar0]->f_15) };
					fVar2 = func_333((uParam0->f_51.f_3 + (*iParam2)[iVar0]->f_18));
					func_335(&vVar6, 1, 10, 0);
				}
				else
				{
					vVar6 = { (*iParam2)[iVar0]->f_15 };
					fVar2 = func_333((*iParam2)[iVar0]->f_18);
				}
				func_336(uParam1, iVar0 + 15, (*iParam2)[iVar0]->f_12, vVar6, fVar2, iParam4, fParam5, 0, 1, 0);
			}
			func_336(uParam1, iVar0, (*iParam2)[iVar0]->f_1, vVar3, fVar1, iParam4, fParam5, (*iParam2)[iVar0]->f_2, 1, (*iParam2)[iVar0]->f_5);
		}
		iVar0++;
	}
	return true;
}

void func_131()
{
	if (iLocal_228 == 0)
	{
		Local_220 = _create_anim_scene(Local_220.f_4, 0, &(sLocal_516[3]), false, true);
	}
	else if (iLocal_228 == 1)
	{
		Local_220 = _create_anim_scene(Local_220.f_5, 0, &(sLocal_516[6]), false, true);
	}
	else
	{
		Local_220 = _create_anim_scene(Local_220.f_6, 0, &(sLocal_516[7]), false, true);
	}
}

bool func_132(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	if (*iParam1 != *uParam2)
	{
		return false;
	}
	if (iParam5 < 0 || iParam5 >= *iParam1)
	{
		iParam5 = 0;
	}
	if (iParam6 < 0 || iParam6 >= *iParam1)
	{
		iParam6 = (*iParam1 - 1);
	}
	if (func_337(uParam0, 1))
	{
		iVar0 = iParam5;
		while (iVar0 <= iParam6)
		{
			if (!does_entity_exist(uParam2[iVar0]) && (*iParam1)[iVar0]->f_1 != 0)
			{
				(*uParam2)[iVar0] = func_338(uParam0, iVar0);
				if (!is_entity_dead(uParam2[iVar0]))
				{
					if ((*iParam1)[iVar0]->f_12 != 0)
					{
						(*iParam1)[iVar0]->f_11 = func_338(uParam0, iVar0 + 15);
						func_339(&((*iParam1)[iVar0]->f_11), (*iParam1)[iVar0], bParam3, 1);
						_set_entity_health((*iParam1)[iVar0]->f_11, 400, 0);
						_set_random_outfit_variation((*iParam1)[iVar0]->f_11, true);
						_set_ped_body_component((*iParam1)[iVar0]->f_11, 1268180497);
						_update_ped_variation((*iParam1)[iVar0]->f_11, true, true, true, true, false);
						if ((*iParam1)[iVar0]->f_13)
						{
							_set_ped_on_mount(uParam2[iVar0], (*iParam1)[iVar0]->f_11, -1, true);
						}
						set_ped_config_flag(uParam2[iVar0], 307, true);
					}
					if ((*iParam1)[iVar0]->f_10)
					{
						_0x0fb1ba7ff73b41e1(uParam2[iVar0], (*iParam1)[iVar0]->f_4, 0);
					}
					if (bParam4)
					{
						if (!is_string_null_or_empty(&((*iParam1)[iVar0]->f_23)))
						{
							func_340(uParam2[iVar0], &((*iParam1)[iVar0]->f_23), 0);
						}
					}
					if (func_341(&((*iParam1)[iVar0]->f_22)))
					{
						_0xdfce8ce9f3ebe93f(uParam2[iVar0]);
					}
					func_339((*uParam2)[iVar0], (*iParam1)[iVar0], bParam3, 0);
				}
			}
			iVar0++;
		}
		func_94(uParam0);
		return true;
	}
	return false;
}

void func_133(var uParam0, int iParam1)
{
	uParam0->f_120 = iParam1;
}

int func_134(int iParam0, var uParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return 0;
	}
	if (func_342(iParam0, &(uParam1->f_121)))
	{
		uParam1->f_120++;
		return 1;
	}
	return 0;
}

int func_135(vector3 vParam0, var uParam3, float fParam4, bool bParam5, int iParam6, int iParam7, bool bParam8)
{
	iVar4 = 1;
	if (iParam7 < 0 || iParam7 >= *uParam3)
	{
		iParam7 = (*uParam3 - 1);
	}
	iVar0 = iParam6;
	while (iVar0 <= iParam7)
	{
		if (bParam8 && does_entity_exist((*uParam3)[iVar0]->f_8))
		{
		}
		else if ((*uParam3)[iVar0]->f_7 != 0 && !func_157((*uParam3)[iVar0]->f_11, 16))
		{
			if (!has_model_loaded((*uParam3)[iVar0]->f_7))
			{
				iVar4 = 0;
			}
			else
			{
				if ((*uParam3)[iVar0]->f_9 != -1)
				{
					iVar8 = (*uParam3)[iVar0]->f_9;
					vVar5 = { get_offset_from_entity_in_world_coords((*uParam3)[iVar8]->f_8, *(*uParam3)[iVar0]) };
					if (func_157((*uParam3)[iVar0]->f_11, 64))
					{
						(*uParam3)[iVar0]->f_8 = create_object_no_offset((*uParam3)[iVar0]->f_7, vVar5, true, true, false, false);
					}
					else
					{
						(*uParam3)[iVar0]->f_8 = create_object((*uParam3)[iVar0]->f_7, vVar5, true, true, false, false, true);
					}
					attach_entity_to_entity((*uParam3)[iVar0]->f_8, (*uParam3)[iVar8]->f_8, 0, *(*uParam3)[iVar0], (*uParam3)[iVar0]->f_4, false, false, false, false, 2, true, false, false);
				}
				else
				{
					if (!func_157((*uParam3)[iVar0]->f_11, 8))
					{
						vVar5 = { _get_object_offset_from_coords(vParam0, fParam4, *(*uParam3)[iVar0]) };
					}
					else
					{
						vVar5 = { *(*uParam3)[iVar0] };
					}
					if (!func_157((*uParam3)[iVar0]->f_11, 128))
					{
						func_343(&vVar5, (*uParam3)[iVar0]->f_10);
					}
					if (func_157((*uParam3)[iVar0]->f_11, 64))
					{
						(*uParam3)[iVar0]->f_8 = create_object_no_offset((*uParam3)[iVar0]->f_7, vVar5, true, true, false, false);
					}
					else
					{
						(*uParam3)[iVar0]->f_8 = create_object((*uParam3)[iVar0]->f_7, vVar5, true, true, false, false, true);
					}
					if (func_34((*uParam3)[iVar0]->f_4))
					{
						vVar1 = { 0f, 0f, (*uParam3)[iVar0]->f_3 };
					}
					else
					{
						vVar1 = { (*uParam3)[iVar0]->f_4 };
					}
					if (func_157((*uParam3)[iVar0]->f_11, 4))
					{
						vVar1.f_2 = func_333((vVar1.z + fParam4));
					}
					set_entity_rotation((*uParam3)[iVar0]->f_8, vVar1, 2, true);
					if (!func_157((*uParam3)[iVar0]->f_11, 128))
					{
						if ((*uParam3)[iVar0]->f_10)
						{
							_0x9587913b9e772d29((*uParam3)[iVar0]->f_8, 0);
						}
					}
				}
				if (func_157((*uParam3)[iVar0]->f_11, 2))
				{
					freeze_entity_position((*uParam3)[iVar0]->f_8, true);
				}
				if (func_157((*uParam3)[iVar0]->f_11, 32))
				{
					set_entity_visible((*uParam3)[iVar0]->f_8, false);
				}
				if (bParam5)
				{
					set_entity_load_collision_flag((*uParam3)[iVar0]->f_8, 1);
					activate_physics((*uParam3)[iVar0]->f_8);
				}
				_0xa91e6cf94404e8c9((*uParam3)[iVar0]->f_8);
				vVar9 = { get_entity_coords((*uParam3)[iVar0]->f_8, true, false) };
			}
		}
		iVar0++;
	}
	return iVar4;
}

void func_136(var uParam0, int iParam1, int iParam2, int iParam3)
{
	func_344(uParam0, iParam1, iParam3);
	func_345(uParam0, iParam2, iParam3);
}

void func_137(var uParam0)
{
	Local_835 = { 0f, 0f, 0f };
	Local_835.f_3 = uParam0;
	Local_835.f_8 = 4;
	Local_835.f_19 = 4;
	Local_835.f_21 = 4;
	Local_835.f_17 = 4;
	Local_835.f_20 = 4;
	Local_835.f_18 = 4;
	Local_835.f_22 = 4;
	Local_835.f_7 = 0;
}

void func_138()
{
	if (iLocal_228 == 1)
	{
		_give_weapon_to_ped_2(&(uLocal_1389[0]), -183018591, 0, true, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
		set_current_ped_weapon(&(uLocal_1389[0]), -183018591, false, 0, false, false);
		task_swap_weapon(&(uLocal_1389[0]), 1, 0, 0, 0);
		set_ped_ammo(&(uLocal_1389[0]), -183018591, 0);
	}
	else if (iLocal_228 == 0)
	{
		_give_weapon_to_ped_2(&(uLocal_1389[0]), 379542007, 0, true, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
		set_current_ped_weapon(&(uLocal_1389[0]), 379542007, false, 0, false, false);
		task_swap_weapon(&(uLocal_1389[0]), 1, 0, 0, 0);
		set_ped_ammo(&(uLocal_1389[0]), 379542007, 0);
	}
	else
	{
		_give_weapon_to_ped_2(&(uLocal_1389[0]), 1742487518, 1, true, false, 1, false, 0.5f, 1f, 752097756, true, 0f, false);
		set_current_ped_weapon(&(uLocal_1389[0]), 1742487518, false, 1, true, false);
	}
	set_anim_scene_origin(Local_220, Local_26.f_51, func_346(iVar1414, Local_26.f_51.f_4), 2);
	if (func_40(&(uLocal_1389[0]), 0, 1))
	{
		if (iLocal_228 == 2)
		{
			set_anim_scene_entity(Local_220, "female", &(uLocal_1389[0]), 0);
		}
		else
		{
			set_anim_scene_entity(Local_220, "male", &(uLocal_1389[0]), 0);
		}
	}
}

bool func_139()
{
	return _is_anim_scene_loaded(Local_220, true, false);
}

bool func_140(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

void func_141(var uParam0, int iParam1)
{
	vVar0 = { func_347(uParam0) };
	iVar3 = func_286(uParam0->f_3, iParam1);
	uParam0->f_185 = iParam1;
	_0xca41e86545413b5b(7, 1221649453, -585414509, iVar3, vVar0);
	if (_0x01f4d242765c6b24(iVar3))
	{
		uParam0->f_186 = 1;
	}
}

void func_142(var uParam0, var uParam1)
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

void func_143(int iParam0)
{
	func_4(iParam0, 1);
	func_348(iParam0, 20);
}

bool func_144(int iParam0, int iParam1)
{
	if (!func_276(iParam0))
	{
		return false;
	}
	return ((*Global_1310750)[iParam0]->f_1 && iParam1) != 0;
}

void func_145(var uParam0, var uParam1, int iParam2, int* iParam3)
{
	if (!func_276(iParam2))
	{
		return;
	}
	if (*uParam1)
	{
		return;
	}
	if (func_349())
	{
		func_350(1);
	}
	func_351(iParam2, uParam0->f_43);
	func_352(iParam2, 0, 0, 0, 0);
	if (func_353(iParam2) != -1)
	{
		_set_weather_type_frozen(true);
	}
	start_audio_scene("RE_active_location_scene");
	_0x1096603b519c905f(func_277(uParam0->f_3));
	if (does_blip_exist(*iParam3))
	{
		remove_blip(iParam3);
	}
	func_354(uParam0, 1, 0);
	*uParam1 = 1;
}

void func_146(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0]->f_7 = 0f;
		(*uParam0)[iVar0]->f_8 = 0f;
		iVar0++;
	}
}

void func_147(var uParam0, int iParam1, float fParam2)
{
	bVar0 = false;
	if (uParam0->f_178 && func_355())
	{
		bVar0 = true;
	}
	if (!uParam0->f_48 && !func_144(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_145(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_146(&(uParam0->f_121));
			return;
		}
		if (_does_volume_exist(uParam0->f_173))
		{
			if (!func_356(Global_35, uParam0->f_173, 1, 0))
			{
				return;
			}
		}
		fVar1 = func_357(uParam0, bVar0);
		func_358(uParam0->f_121[iParam1], fVar1, 1082130432, 0, 90f, 0, &(uParam0->f_98[iParam1]));
		if (func_359(&(uParam0->f_121), uParam0->f_120, fParam2))
		{
			func_145(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_146(&(uParam0->f_121));
		}
	}
}

bool func_148(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	fVar0 = 30f;
	fVar1 = 150f;
	if (func_98(uParam2->f_3, 1))
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
			if (func_360())
			{
				fVar0 = 15f;
			}
		}
		if (func_361(uParam2, fVar0))
		{
			*uParam1 = 1;
		}
	}
	if (!uParam2->f_48)
	{
		if (!bParam3 && func_179(player_id(), 1, 0, 1))
		{
			return false;
		}
		if (!func_361(uParam2, fVar1))
		{
			if (!func_326((*Global_1310750)[uParam2->f_3]->f_38))
			{
				return false;
			}
		}
		if (!func_362(uParam2->f_3, 2) && func_363(2))
		{
			return false;
		}
		if (func_98(iParam0, 4194304) || func_98(iParam0, 33554432))
		{
			if (func_364(1))
			{
				return false;
			}
		}
	}
	if (func_365(Global_35))
	{
		return false;
	}
	if (func_366(0, 1, 1) && !func_367(iParam0))
	{
		return false;
	}
	if (!*uParam1 && func_98(iParam0, 128))
	{
		if (is_player_riding_train(player_id()))
		{
			return false;
		}
		if (func_368(Global_35, 0))
		{
			return false;
		}
		if (Global_16)
		{
			return false;
		}
		if (func_179(player_id(), 1, 0, 1))
		{
			return false;
		}
		if (func_369())
		{
			return false;
		}
		iVar2 = func_371(func_370());
		if (func_372(iVar2))
		{
			if (func_373(Global_36, iVar2))
			{
				return false;
			}
		}
		if (func_374(Global_36) && !uParam2->f_161)
		{
			return false;
		}
		if (!uParam2->f_48)
		{
			if (func_375(&(uParam2->f_91), 0, 1084227584, 1, 1))
			{
				return false;
			}
		}
	}
	return true;
}

void func_149(var uParam0, int iParam1)
{
	if (func_376(uParam0->f_51))
	{
		func_377(uParam0->f_51, 0);
		fVar0 = func_378(uParam0->f_3);
		iVar2 = _create_volume_cylinder_with_custom_name(uParam0->f_51, 0f, 0f, 0f, fVar0, fVar0, fVar0, func_379());
		bVar1 = func_282(!func_98(uParam0->f_3, 1), 20f, -1f);
		uParam0->f_51.f_11 = func_381(iVar2, func_380(uParam0->f_3), 1, iParam1, 8, 0, bVar1);
	}
}

int func_150(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 0;
		case 3:
			return 1;
		case 4:
			return 2;
		case 5:
			return 3;
	}
	return -1;
}

float func_151(int iParam0, int iParam1, bool bParam2)
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
	return func_266(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
}

void func_152(int iParam0, int iParam1, bool bParam2)
{
	clear_ped_tasks(&(uLocal_1389[iParam1]), 1, 0);
	clear_ped_secondary_task(&(uLocal_1389[iParam1]));
	register_target(&(uLocal_1389[iParam1]), iParam0, 1);
	_0xd05ad61f242c626b(iParam0, 1f);
	func_167(&(uLocal_1389[iParam1]), iParam0);
	set_animal_tuning_bool_param(&(uLocal_1389[iParam1]), 65, true);
	if (bParam2)
	{
		task_combat_ped(&(uLocal_1389[iParam1]), iParam0, 16777216, 0);
	}
	else
	{
		task_combat_ped(&(uLocal_1389[iParam1]), iParam0, 0, 0);
	}
}

bool func_153(var uParam0, float fParam1)
{
	if (func_56(uParam0, fParam1))
	{
		func_57(uParam0);
		return true;
	}
	return false;
}

bool func_154(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < (*uParam0 - iParam1))
	{
		if (func_40(uParam0[(iVar0 + iParam1)], 0, 1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_155(var uParam0, float fParam1)
{
	uLocal_1130 = uParam0;
	fLocal_1050 = fParam1;
	func_55(&uLocal_1300);
}

int func_156(int iParam0)
{
	return shift_left(1, iParam0);
}

bool func_157(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_158(int iParam0, int iParam1)
{
	func_382(iParam0, iParam1);
}

bool func_159(int iParam0, int iParam1)
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
	if (func_157(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_157(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_157(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_157(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_157(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_157(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_157(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_157(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_160(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
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

int func_161()
{
	return Global_1572887->f_12;
}

int func_162(int iParam0)
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

int func_163(int iParam0)
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

void func_164(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_383();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_384(iParam0);
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
	if (func_385(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_320())
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
	Global_40.f_11095.f_35 = func_386(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_383();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_387(iVar1);
		func_389(func_388(), 0, 4000);
		func_390(Global_40.f_11095.f_35);
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
		func_391(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_393(func_392(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (does_entity_exist(iParam5))
			{
				decor_set_int(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_163(14))
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
					sParam4 = func_394(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_395(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_395(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_393(func_392(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_163(4))
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
					sParam4 = func_394(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_395(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_395(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_392(-1990689970) };
	stat_id_set_int(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		_0xe6b763c7f4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_396(10, 1);
	}
}

void func_165(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

int func_166(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_167(var uParam0, int iParam1)
{
	if (iParam1 != Global_35)
	{
		_0xd05ad61f242c626b(Global_35, 0f);
		_0x4707e9c23d8ca3fe(uParam0, Global_35);
	}
	else
	{
		_0xd05ad61f242c626b(&(uLocal_1389[0]), 0f);
		_0x4707e9c23d8ca3fe(uParam0, &(uLocal_1389[0]));
	}
}

bool func_168(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_169()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

void func_170(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_72(iParam0, 134217728);
	}
	else
	{
		func_71(iParam0, 134217728);
	}
}

void func_171(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_397() - fParam1);
	func_398(uParam0, 1);
	func_399(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_172(var uParam0)
{
	if (!func_50(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_400(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_397() - uParam0->f_1);
}

void func_173(int iParam0, bool bParam1, int iParam2)
{
	func_401(iParam2);
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
		iParam0->f_13 = func_402(0);
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
							func_72(iParam0, 33554432);
						}
					}
					else if (!*iParam0 & 8192 != 0)
					{
						if (func_364(1))
						{
							func_72(iParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_35) && (!func_364(1) || *iParam0 & 8192 != 0))
				{
					func_71(iParam0, 33554432);
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
			if (func_403(iParam0))
			{
				iParam0->f_15 = func_169();
			}
		}
		else if (iParam0->f_15 > 0)
		{
			if ((func_169() - iParam0->f_15) > 500)
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
	func_404(iParam0);
}

bool func_174(int iParam0, int iParam1)
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
			if (!func_405(iParam0, iParam1, iVar2))
			{
				return false;
			}
			if (func_406(iParam0, iVar2) <= func_407(iParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_175(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		iParam1->f_10 = iParam0;
	}
	if (func_408(iParam2, 1, 1, 1, 0))
	{
		func_72(iParam1, 2048);
	}
	iParam1->f_16 = iParam2;
	func_170(iParam1, 1);
	func_409();
}

bool func_176(int iParam0, int iParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_410(iParam0, !*iParam1 & 268435456 != 0, !*iParam1 & 536870912 != 0, !*iParam1 & 1073741824 != 0, 0, 0))
		{
			if (iParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (iParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_411(iParam1);
			if (func_412(iParam1, iParam0, fVar0, fVar1))
			{
				if (iParam1->f_2 == 0)
				{
					iParam1->f_2 = get_game_timer();
				}
				iVar2 = (get_game_timer() - iParam1->f_2);
				iVar3 = func_413(iParam1);
				if (iParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_170(iParam1, 1);
						return true;
					}
					else if (iParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_170(iParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_177(int iParam0, int iParam1, int iParam2)
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
	if (func_414(iParam1, !*iParam2 & 268435456 != 0, !*iParam2 & 536870912 != 0, !*iParam2 & 1073741824 != 0, 0))
	{
		if (iParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (iParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_411(iParam2);
		if (func_412(iParam2, iParam0, fVar0, fVar1))
		{
			if (iParam2->f_2 == 0)
			{
				iParam2->f_2 = get_game_timer();
			}
			if (iParam2->f_2 != 0)
			{
				if (get_game_timer() - iParam2->f_2) > func_413(iParam2)
				{
					func_170(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_178(int iParam0, int iParam1)
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
	if (func_405(iParam0, iParam1, iVar1))
	{
		if (iParam1->f_3 == 0)
		{
			iParam1->f_3 = get_game_timer();
		}
		else if (get_game_timer() - iParam1->f_3) > func_413(iParam1)
		{
			fVar3 = func_411(iParam1);
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

bool func_179(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_415(bParam1, bParam2, bParam3);
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

bool func_180(int iParam0, float fParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_169();
	iVar1 = (iVar0 - iParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_181(var uParam0, int iParam1, int iParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_416(iParam2);
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
			if (func_189(iParam2, iParam1))
			{
				func_170(iParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_182(var uParam0, int iParam1, int iParam2)
{
	if (iParam2->f_12 < IntToFloat(func_417(iParam2)))
	{
		if ((is_weapon_valid(Global_1935630->f_46) && !_0x5809dbca0a37c82b(Global_1935630->f_46)) || get_current_ped_vehicle_weapon(Global_35, &uVar0))
		{
			if (func_189(iParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_170(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_183(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_418(iParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, iParam2->f_22))
				{
					func_170(iParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, iParam2->f_27))
				{
					func_170(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, iParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, iParam2->f_26, &vVar4, 0, 0);
					if (func_419(iParam1, vVar0, vVar4))
					{
						func_170(iParam2, 1);
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
					func_170(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, iParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, iParam2->f_26, &vVar7, 0, 0);
					if (func_419(iParam1, vVar0, vVar7))
					{
						func_170(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_184(int iParam0, int iParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *iParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_405(iParam0, iParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_420(&(Global_1935630->f_34[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_421(&(Global_1935630->f_34[iVar0])))
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
			if (func_422(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_423(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_424(iParam1, iParam0, fVar1, iVar0))
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

bool func_185(int iParam0, int iParam1)
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

bool func_186(int iParam0, int iParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_169();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_187(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_425(iVar0, &iVar2))
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
	if (func_426(iVar0, iParam0))
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

int func_188(int iParam0, int iParam1)
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

bool func_189(int iParam0, int iParam1)
{
	if (func_427(iParam0))
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

bool func_190(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_41(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_191()
{
}

bool func_192(int iParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_35);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_428(iVar0, iParam1, vVar1))
		{
			iParam0->f_9 = func_169();
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
						if (func_230(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								iParam0->f_9 = func_169();
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

bool func_193()
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
	if ((func_169() - Global_1935630->f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_194(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0->f_14))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_407(iParam0);
	if (iParam0->f_12 > func_429(iParam0) && iParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_430(iParam1);
	iVar1 = func_431(iParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((iParam0->f_12 <= fVar0 || ((_0x06087579e7aa85a9(iParam1, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam1, Global_35, true, 0) == 1)) || ((_0x06087579e7aa85a9(iParam1, iParam0->f_14, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, iParam0->f_14, 17)) && _0x7f9b9791d4cb71f6(iParam1, iParam0->f_14, true, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

bool func_195(int iParam0, int iParam1, int iParam2)
{
	if (iParam2->f_12 > 4f)
	{
		return false;
	}
	bVar0 = *iParam2 & 256 != false;
	bVar1 = *iParam2 & 524288 != false;
	bVar2 = *iParam2 & 128 != false;
	return func_432(iParam0, iParam1, bVar0, bVar2, iParam2->f_12, bVar1);
}

bool func_196(int iParam0, int iParam1)
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
		if (func_433(iParam0, iParam1, 1))
		{
			return true;
		}
		if ((_0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam0, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam0, Global_35, true, 0) == 1)
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
					if (!func_434(iParam1, iParam0))
					{
						if (func_230(iVar4, Global_36, 1) < 7f)
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

bool func_197(int iParam0, int iParam1)
{
	if (!func_117(0))
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

bool func_198(int iParam0, int iParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_169();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_199(int iParam0, int iParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

bool func_200(int iParam0, int iParam1)
{
	if (!is_ped_human(iParam0))
	{
		return false;
	}
	if (iParam1->f_4 == 0)
	{
		iParam1->f_4 = func_169();
	}
	else if (func_169() - iParam1->f_4) > func_435(iParam1)
	{
		return func_436(iParam0, iParam1, 0, -1082130432);
	}
	return false;
}

bool func_201(int iParam0, int iParam1)
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

bool func_202(int iParam0, bool bParam1)
{
	if (func_40(iParam0, 0, 1))
	{
		return (is_scripted_speech_playing(iParam0) || (bParam1 && is_any_speech_playing(iParam0)));
	}
	return false;
}

bool func_203(float fParam0)
{
	if (func_437(1))
	{
		return true;
	}
	if (func_50(&uLocal_0) && !func_153(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

bool func_204(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

void func_205(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_438(iParam0, 13))
	{
		func_439(iParam0, 0);
	}
	else
	{
		func_440(iParam0, 0);
	}
	if (func_441(iParam0->f_6))
	{
		if (bParam2)
		{
			func_442(&(iParam0->f_6), 0, 1);
		}
	}
}

bool func_206(int iParam0)
{
	get_hud_screen_position_from_world_position(get_entity_coords(iParam0, false, false), &fVar0, &fVar1);
	get_hud_screen_position_from_world_position(get_entity_coords(&(uLocal_1389[0]), false, false), &fVar2, &fVar3);
	fVar0 = absf(fVar0);
	fVar1 = absf(fVar1);
	fVar2 = absf(fVar2);
	fVar3 = absf(fVar3);
	fVar4 = ((fVar0 + fVar1) / 2f);
	fVar5 = ((fVar2 + fVar3) / 2f);
	if ((absf((fVar4 - 0.5f)) - absf((fVar5 - 0.5f))) < 0.06f)
	{
		return true;
	}
	return false;
}

int func_207(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
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
		if (func_360())
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
				if (func_443(iParam0, 1, 1) > fParam4)
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
			fVar1 = func_41(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_55(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!is_entity_dead(iParam1))
				{
					task_look_at_entity(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_444(iParam0, iParam1, fVar1, bParam13))
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
				iVar2 = func_445(func_60(iParam0, sParam2, iParam11, iParam1, network_is_game_in_progress(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

void func_208()
{
	return;
}

void func_209()
{
	if (func_153(&uLocal_1282, 3f))
	{
		func_2(&uLocal_1333, 1);
		func_267(&uLocal_1333, 1);
		func_15(&uLocal_1333, 1500);
	}
}

void func_210()
{
	if (iVar1409 >= 7)
	{
		return;
	}
	if (func_154(&uLocal_1389, 2))
	{
		func_55(&uLocal_1327);
		if (!bVar1056 && Local_26.f_46)
		{
			func_446();
			func_55(&uLocal_1321);
			iLocal_1412 = 5;
		}
		else
		{
			if (!is_entity_dead(&(uLocal_1389[0])))
			{
				if (!func_90(&(uLocal_1389[0]), 518218985) && !_0x3ab6c7b0bb0df4b1(&(uLocal_1389[0]), -1))
				{
					_task_smart_flee_style_ped(&(uLocal_1389[0]), Global_35, 3, 128, -1082130432, -1, &(uLocal_1389[1]));
					iLocal_1411 = 16;
				}
			}
			if (bVar1056)
			{
				func_53();
			}
		}
	}
	else if ((func_59(0, 1, &(uLocal_1389[0]), 0) && !func_447(&(uLocal_1389[0]), &uLocal_1389, &uLocal_1040, 1109393408, 2)) && !func_447(Global_35, &uLocal_1389, &uLocal_1040, 1109393408, 2))
	{
		func_55(&uLocal_1327);
		if (!bVar1056)
		{
			func_55(&uLocal_1321);
			func_446();
			if (iLocal_228 == 2)
			{
				func_65(&(uLocal_1389[0]), Global_35, &(sLocal_449[18]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				func_65(&(uLocal_1389[0]), Global_35, &(sLocal_449[5]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
		}
		else
		{
			iLocal_1411 = 16;
		}
		func_448();
		func_449();
		iLocal_1070 = 1;
		iLocal_1412 = 5;
	}
}

void func_211()
{
	if (!is_entity_dead(&(uLocal_1389[0])) && is_ped_ragdoll(&(uLocal_1389[0])))
	{
		if (bVar1073)
		{
			func_49(0);
		}
	}
}

void func_212()
{
	if (iLocal_228 == 2 && bVar1070)
	{
		return;
	}
	if (!bVar1070)
	{
		if (has_anim_event_fired(&(uLocal_1389[0]), 1890122679))
		{
			if (iLocal_228 == 2)
			{
				_0xcef4c65de502d367(&(uLocal_1389[0]), 1, 1, 1, 0);
			}
			else
			{
				_0xcef4c65de502d367(&(uLocal_1389[0]), 1, 0, 1, 0);
			}
			iLocal_1072 = 1;
		}
	}
	else
	{
		return;
	}
	if ((((is_entity_dead(&(uLocal_1389[0])) || !_0x3ab6c7b0bb0df4b1(&(uLocal_1389[0]), -1)) || bVar1070) || !func_450()) || has_anim_event_fired(&(uLocal_1389[0]), -15700114))
	{
		return;
	}
	if (func_153(&uLocal_1303, fVar1130))
	{
		fLocal_1132 = get_random_float_in_range(2f, 3f);
	}
	if (func_56(&uLocal_1318, 1.7f))
	{
		if (func_153(&uLocal_1312, fVar1131) || !func_50(&uLocal_1312))
		{
			func_55(&uLocal_1312);
			fLocal_1133 = get_random_float_in_range(0.8f, 2.8f);
			if (!func_50(&uLocal_1303) || iVar1409 == 4)
			{
				func_451(&Local_26, &(uLocal_1389[0]), get_entity_coords(&(uLocal_1389[0]), true, false), 160);
				_0x4c57f27d1554e6b0(&(uLocal_1389[0]), 0f, 0f, 0f, 0, -1082130432, 0, 0f);
				func_224(1066055203, &(uLocal_1389[0]), 1);
				iLocal_1045 = iVar1043 + 1;
				if (iVar1409 == 4)
				{
					iLocal_1080 = 1;
				}
			}
			if (iVar1043 >= iVar1044)
			{
				if (!bVar1088)
				{
					func_452(536870912, 1, 0, 1);
					iLocal_1090 = 1;
				}
				if (!func_50(&uLocal_1303))
				{
					func_55(&uLocal_1303);
					iLocal_1046 = get_random_int_in_range(2, 4);
					iLocal_1045 = 0;
				}
			}
			if (iLocal_228 == 0 && iVar1409 == 4)
			{
				if (!func_90(&(uLocal_1389[2]), 242628503))
				{
					clear_ped_tasks(&(uLocal_1389[2]), 1, 0);
					open_sequence_task(&iVar0);
					task_follow_nav_mesh_to_coord(0, vLocal_556, 1.75f, 20000, 2f, 8192, 40000f);
					task_follow_nav_mesh_to_coord(0, vLocal_559, 1.75f, 20000, 2f, 8192, 40000f);
					task_combat_ped(0, &(uLocal_1389[0]), 0, 0);
					close_sequence_task(iVar0);
					_task_perform_sequence_2(&(uLocal_1389[2]), iVar0, 0.2f, 0.2f);
					clear_sequence_task(&iVar0);
				}
			}
		}
	}
}

void func_213()
{
	if (!is_entity_dead(&(uLocal_1389[0])))
	{
		if (has_anim_event_fired(&(uLocal_1389[0]), -1438083414))
		{
			if (iLocal_228 == 2)
			{
				func_65(&(uLocal_1389[0]), 0, "GENERIC_SHOCKED_HIGH", 0, -1082130432, 1, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
			}
			else
			{
				func_65(&(uLocal_1389[0]), 0, "GENERIC_SHOCKED_HIGH", 0, -1082130432, 2, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
			}
		}
	}
}

void func_214()
{
	if (iLocal_228 != 2 || !func_40(&(uLocal_1389[0]), 0, 1))
	{
		return;
	}
}

void func_215()
{
	if ((bVar1075 || iLocal_228 == 0) || iVar1409 >= 6)
	{
		return;
	}
	if (!bVar1077)
	{
		if (func_59(0, 1, &(uLocal_1389[0]), 1))
		{
			if (func_151(&(uLocal_1389[0]), Global_35, 0) < 1600f)
			{
				if (_0x7f9b9791d4cb71f6(&(uLocal_1389[0]), Global_35, false, 0) == 1)
				{
					if (iLocal_228 == 2)
					{
						func_65(&(uLocal_1389[0]), Global_35, &(sLocal_449[46]), 0, -1082130432, 0, 0, 0, 1, 1, 1, -1824788778, 1, 0, 0);
					}
					else
					{
						func_65(&(uLocal_1389[0]), Global_35, &(sLocal_449[45]), 0, -1082130432, 1, 0, 0, 1, 1, 1, -1824788778, 1, 0, 0);
					}
					func_224(1515458263, &(uLocal_1389[0]), 1);
					iLocal_1076 = 1;
					func_53();
					iLocal_1077 = 1;
				}
			}
		}
	}
}

void func_216()
{
	if (bVar1090)
	{
		return;
	}
	if (func_43(&(uLocal_1389[0]), Global_35))
	{
		return;
	}
	if ((is_entity_dead(&(uLocal_1389[0])) && !Local_26.f_46) && !bVar1056)
	{
		if (func_151(Global_35, &(uLocal_1389[0]), 1) < 225f || is_tracked_ped_visible(&(uLocal_1389[0])))
		{
			func_44(3, 0, 0, "HONOR_EVENT_WATCHED_DEATH", &(uLocal_1389[0]), 0, 1065353216, 0);
			iLocal_1092 = 1;
		}
	}
}

void func_217()
{
	if (!is_entity_dead(&(uLocal_1389[0])))
	{
		if (func_153(&uLocal_1321, 1.5f))
		{
			func_44(13, 0, 0, "HONOR_EVENT_STRANGER_HELPED", &(uLocal_1389[0]), 0, 1065353216, 0);
		}
	}
}

void func_218()
{
	if (func_153(&uLocal_1327, 3.5f))
	{
		set_ped_can_be_targetted(&(uLocal_1389[0]), true);
	}
}

void func_219()
{
	if (bVar1096)
	{
		return;
	}
	if (_0x3bdfcf25b58b0415(&(uLocal_1389[0])))
	{
		func_65(&(uLocal_1389[0]), 0, "DEATH_HIGH_LONG", 0, -1082130432, 0, 0, 0, 1, 0, 1, -500314840, 1, 0, 0);
		iLocal_1098 = 1;
	}
}

int func_220()
{
	if (func_56(&uLocal_1297, 2.8f))
	{
		if (func_453())
		{
			iLocal_1089 = 1;
			return 1;
		}
	}
	return 0;
}

void func_221()
{
	switch (iVar1410)
	{
		case 0:
			break;
		case 1:
			if (func_59(0, 1, &(uLocal_1389[0]), 1))
			{
				if (iLocal_228 != 0 || bVar1078)
				{
					if (iLocal_228 == 2)
					{
						set_anim_scene_bool(Local_220, "BOOL_DEFENDING", true, false);
					}
					else if (iLocal_228 == 1)
					{
						set_anim_scene_bool(Local_220, "BOOL_STRUGGLE", true, false);
					}
					else
					{
						set_anim_scene_bool(Local_220, "BOOL_SHOOT", true, false);
					}
					func_454();
					if (iLocal_228 == 0)
					{
						func_65(&(uLocal_1389[0]), 0, &(sLocal_449[9]), 0, -1082130432, 0, 0, 1, 2, 0, 0, -1824788778, 1, 0, 0);
					}
					else if (iLocal_228 == 1)
					{
						func_65(&(uLocal_1389[0]), 0, &(sLocal_449[10]), 0, -1082130432, 0, 0, 1, 2, 0, 0, -1824788778, 1, 0, 0);
					}
					else
					{
						func_65(&(uLocal_1389[0]), 0, "GENERIC_FRIGHTENED_HIGH", 0, -1082130432, 2, 0, 1, 2, 0, 0, -1824788778, 1, 0, 0);
					}
					iLocal_1412 = 2;
				}
			}
			break;
		case 2:
			if (iLocal_228 == 0)
			{
				if (func_151(Global_35, &(uLocal_1389[0]), 1) > 900f && is_tracked_ped_visible(&(uLocal_1389[0])))
				{
					fVar0 = 15f;
				}
				else
				{
					fVar0 = 30f;
				}
			}
			else if (iLocal_228 == 1)
			{
				if (func_151(Global_35, &(uLocal_1389[0]), 1) > 900f && is_tracked_ped_visible(&(uLocal_1389[0])))
				{
					fVar0 = 15f;
				}
				else
				{
					fVar0 = 33f;
				}
			}
			else if (func_151(Global_35, &(uLocal_1389[0]), 1) > 900f && is_tracked_ped_visible(&(uLocal_1389[0])))
			{
				fVar0 = 15f;
			}
			else
			{
				fVar0 = 28f;
			}
			if (iVar1410 != 4 && func_56(&uLocal_1288, fVar0))
			{
				func_66();
			}
			break;
		case 3:
			if (iLocal_228 == 2)
			{
				iLocal_1412 = 4;
			}
			else
			{
				if (!is_entity_dead(&(uLocal_1389[0])))
				{
					if (_0x005e6f28dd7ed58d(Local_220, "male"))
					{
						task_play_anim(&(uLocal_1389[0]), sVar1037, sVar1129, 1000f, -8f, -1, 0, 0f, false, 0, false, 0, false);
						set_ped_reset_flag(&(uLocal_1389[0]), 29, true);
						_0x2208438012482a1a(&(uLocal_1389[0]), false, false);
						iLocal_1412 = 4;
					}
				}
				Jump @1054; //curOff = 596
				if (func_40(&(uLocal_1389[0]), 0, 1))
				{
					if (!func_90(&(uLocal_1389[0]), -2017877118) && !_0x3ab6c7b0bb0df4b1(&(uLocal_1389[0]), -1))
					{
						if (iLocal_228 == 0)
						{
							if (func_40(&(uLocal_1389[2]), 0, 1))
							{
								_task_flee_from_ped(&(uLocal_1389[0]), &(uLocal_1389[2]), 0f, 0f, 0f, 10000f, -1, 4096, 2f, &(uLocal_1389[1]));
								func_2(&uLocal_1333, 0);
								func_52(&(Local_26.f_5), &uLocal_1415);
								iLocal_1411 = 5;
								iLocal_1412 = 5;
							}
						}
						else
						{
							if (func_40(&(uLocal_1389[1]), 0, 1))
							{
								_task_flee_from_coord(&(uLocal_1389[0]), Local_26.f_51, 0f, 0f, 0f, 10000f, -1, 4096, 2f, &(uLocal_1389[1]));
							}
							else
							{
								_task_flee_from_coord(&(uLocal_1389[0]), Local_26.f_51, 0f, 0f, 0f, 10000f, -1, 4096, 2f, 0);
							}
							iVar1 = 2;
							while (iVar1 <= 5)
							{
								_0x3923ec958249657d(&(uLocal_1389[0]), &(uLocal_1389[iVar1]), -1082130432);
								iVar1++;
							}
							func_48(&(uLocal_1389[0]), 0, 1);
							func_49(0);
							func_232();
							iLocal_1411 = 5;
							iLocal_1412 = 5;
						}
					}
					else if (!is_entity_dead(&(uLocal_1389[0])))
					{
						set_ped_reset_flag(&(uLocal_1389[0]), 29, true);
					}
				}
				Jump @1054; //curOff = 918
				if (iLocal_228 == 2)
				{
					return;
				}
				if (func_90(&(uLocal_1389[0]), 518218985) && (func_455() || func_244(&(uLocal_1389[0]))))
				{
					if ((!bVar1059 && func_59(0, 1, &(uLocal_1389[0]), 1)) && !func_154(&uLocal_1389, 2))
					{
						func_60(&(uLocal_1389[0]), "PANIC_COMMUNICATE", -500314840, 0, 1, 0, 0, 1);
						func_64(uLocal_1396[0]);
						iLocal_1061 = 1;
					}
				}
			}
			default:
				break;
	}
}

void func_222()
{
	if (bVar1056)
	{
		return;
	}
	if (func_59(0, 1, &(uLocal_1389[0]), 1) && func_153(&uLocal_1300, fVar1048))
	{
		func_65(&(uLocal_1389[0]), Global_35, sVar1128, 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		iLocal_1079 = 1;
		if (are_strings_equal(sVar1128, sVar445))
		{
			iLocal_1070 = 1;
		}
	}
}

void func_223()
{
	if (iLocal_228 == 2)
	{
		if (func_59(0, 1, &(uLocal_1389[0]), 1) && func_153(&uLocal_1309, 5f))
		{
			func_65(&(uLocal_1389[0]), 0, &(sLocal_449[12]), 0, 200f, 1, 0, 1, 1, 1, 1, 1744022339, 1, 0, 0);
			func_224(1515458263, &(uLocal_1389[0]), 1);
		}
	}
}

void func_224(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		allow_sonar_blips(true);
		force_sonar_blips_this_frame();
	}
	_trigger_sonar_blip_2(iParam0, iParam1);
}

void func_225()
{
	uLocal_1407 = func_456(-493351432, vLocal_544, 0, 0, 0, 0);
	_0x06aade17334f7a40(&(uLocal_1389[1]), vLocal_541);
}

void func_226()
{
	switch (iLocal_228)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				_0xdf7b5144e25cd3fe(Local_220, &(sLocal_516[iVar0]));
				iVar0++;
			}
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < 8)
			{
				_0xdf7b5144e25cd3fe(Local_220, &(sLocal_516[iVar0]));
				iVar0++;
			}
			break;
		case 2:
			iVar0 = 0;
			while (iVar0 < 9)
			{
				_0xdf7b5144e25cd3fe(Local_220, &(sLocal_516[iVar0]));
				iVar0++;
			}
			break;
	}
}

bool func_227()
{
	switch (iLocal_228)
	{
		case 0:
			iVar1 = 6;
			break;
		case 1:
			iVar1 = 8;
			break;
		case 2:
			iVar1 = 9;
			break;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (!_0x23e33cb9f4a3f547(Local_220, &(sLocal_516[iVar0])))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_228(var uParam0, float fParam1, float fParam2, float fParam3, int iParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, bool bParam11)
{
	bVar1 = false;
	fVar2 = func_357(uParam0, bVar1);
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
	if (uParam0->f_178 && func_355())
	{
		bVar1 = true;
		fVar3 = func_282(bVar1, fParam9, fVar2);
	}
	if (uParam0->f_48 && (!bParam10 || (!_does_volume_exist(uParam0->f_173) || is_entity_in_volume(Global_35, uParam0->f_173, true, 0))))
	{
		if (iParam4 > 1)
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_121)
			{
				func_358(uParam0->f_121[iVar0], fVar3, 1082130432, 1, 90f, 0, 0);
				iVar0++;
			}
		}
		else
		{
			func_358(uParam0->f_121[0], fVar3, 1082130432, 1, 90f, 0, 0);
		}
		if (func_359(&(uParam0->f_121), iParam4, fParam1))
		{
			func_146(&(uParam0->f_121));
			if (uParam0->f_186)
			{
				_0xb2a38826e5886e83(func_286(uParam0->f_3, uParam0->f_185), 0);
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
						func_145(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
					}
				}
				func_146(&(uParam0->f_121));
				if (uParam0->f_186)
				{
					_0xb2a38826e5886e83(func_286(uParam0->f_3, uParam0->f_185), 0);
				}
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_229()
{
	if (!bVar1069 && func_40(&(uLocal_1389[0]), 0, 1))
	{
		func_160(&(uLocal_1389[0]), uLocal_1396[0], -89429847, 580546400, 0, "RE_INTER_STRANGER");
		func_65(&(uLocal_1389[0]), Global_35, sVar441, 0, 200f, 1, 0, 1, 2, 0, 0, -500314840, 1, 0, 0);
		func_224(1515458263, &(uLocal_1389[0]), 1);
		iLocal_1071 = 1;
		if (iLocal_228 == 2)
		{
			func_55(&uLocal_1309);
		}
		else
		{
			func_55(&uLocal_1318);
			if (iLocal_228 == 0)
			{
				func_48(&(uLocal_1389[0]), 0, 1);
			}
		}
		func_145(&Local_26, &(Local_26.f_48), Local_26.f_3, &(Local_26.f_51.f_6));
		func_55(&uLocal_1315);
	}
}

float func_230(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

bool func_231()
{
	if (!func_40(&(uLocal_1389[0]), 0, 0))
	{
		return true;
	}
	return false;
}

void func_232()
{
	iVar0 = 2;
	while (iVar0 <= 5)
	{
		if (func_40(&(uLocal_1389[iVar0]), 0, 1))
		{
			if (!bVar1086)
			{
				open_sequence_task(&iVar1);
				task_grapple(0, &(uLocal_1389[0]), -1000098743, 1, 2f, 1, 0);
				task_combat_ped(0, Global_35, 0, 0);
				close_sequence_task(iVar1);
				task_perform_sequence(&(uLocal_1389[iVar0]), iVar1);
				clear_sequence_task(&iVar1);
				_0xb8de69d9473b7593(&(uLocal_1389[iVar0]), 26);
				_0xb8de69d9473b7593(&(uLocal_1389[iVar0]), 27);
				_0xb8de69d9473b7593(&(uLocal_1389[iVar0]), 0);
				_0x789dabd18e9024db(&(uLocal_1389[iVar0]), 1, 1);
				_0x789dabd18e9024db(&(uLocal_1389[iVar0]), 4096, 0);
				set_animal_tuning_bool_param(&(uLocal_1389[iVar0]), 21, true);
				uLocal_1404 = &uLocal_1389[iVar0];
				iLocal_1088 = 1;
			}
			else
			{
				set_ped_config_flag(&(uLocal_1389[iVar0]), 215, true);
				set_animal_tuning_bool_param(&(uLocal_1389[iVar0]), 21, true);
			}
		}
		iVar0++;
	}
}

int func_233(int iParam0, int iParam1, int iParam2)
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

int func_234(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	iVar0 = iParam9;
	func_457(&iVar0);
	if (func_17(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_458(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_17(iVar0, 134217728))
	{
		func_459(iParam1, uParam3, uParam0);
	}
	if (!*uParam4)
	{
		if (!is_bit_set(*iParam1, 25))
		{
			if (is_bit_set(*iParam1, 24))
			{
				if (!func_460(558))
				{
					func_461(558, 0);
				}
				set_bit(iParam1, 24);
				set_bit(iParam1, 25);
			}
		}
	}
	return iVar1;
}

void func_235()
{
	if (iLocal_228 != 2 && !bVar1067)
	{
		set_current_ped_weapon(&(uLocal_1389[0]), -1569615261, true, 0, false, false);
		iLocal_1069 = 1;
	}
}

bool func_236(int iParam0, int* iParam1, int iParam2, var uParam3, var uParam4, var uParam5)
{
	if (func_462(iParam0, iParam1, iParam2, uParam3, uParam4))
	{
		return true;
	}
	else if (*uParam3 > 2 && uParam5->f_44 == 0)
	{
		uParam5->f_44 = 1;
	}
	return false;
}

void func_237()
{
	func_463(Local_987[0], "RE_INTER_POS", &(sLocal_449[49]), -163964935, 0, 0, 0, 1, 0);
	func_463(Local_987[1], "RE_INTER_ANTAGONIZE", &(sLocal_449[50]), 648122183, 0, 0, 0, 1, 0);
	func_463(Local_987[2], func_464(12), &(sLocal_449[51]), -1616532217, 0, 0, 0, 1, 0);
	func_465(&Local_987, 0);
	func_205(Local_987[2], 0, 0);
	func_466(Local_987[2], 1);
	func_439(Local_987[0], 8);
	func_439(Local_987[1], 8);
}

void func_238()
{
	func_239(Local_860[0], 0);
	func_463(Local_987[0], "BEAT_GRT_POS", &(sLocal_449[21]), -163964935, 0, 0, 0, 1, 0);
	func_463(Local_987[1], "BEAT_GRT_NEG", &(sLocal_449[22]), 648122183, 0, 0, 0, 1, 0);
	func_463(Local_987[2], "RE_INTER_ANTAGONIZE", 0, -1616532217, 0, 0, 0, 1, 0);
	func_465(&Local_987, 0);
	func_205(Local_987[2], 0, 0);
	func_466(Local_987[2], 1);
	func_439(Local_987[0], 8);
	func_439(Local_987[1], 8);
}

void func_239(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_57(&(iParam0->f_18));
}

void func_240(int iParam0)
{
	if (!func_276(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_46 = 1;
}

void func_241(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_242()
{
	iLocal_1066 = 0;
	iLocal_1411 = 11;
}

bool func_243(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		return _is_ped_getting_into_a_mount_seat(iParam0, true);
	}
	return false;
}

bool func_244(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	return is_ped_on_mount(iParam0);
}

int func_245(int iParam0)
{
	if (!is_ped_injured(iParam0))
	{
		return get_mount(iParam0);
	}
	return 0;
}

bool func_246(int iParam0)
{
	iParam0 = func_272(iParam0);
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

bool func_247(int iParam0)
{
	iParam0 = func_272(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_246(iParam0))
	{
		return false;
	}
	iVar0 = func_114(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

float func_248(int iParam0)
{
	iParam0 = func_272(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_467(iParam0);
	if (!is_model_valid(iVar0))
	{
		return -1f;
	}
	iVar1 = func_468(iParam0);
	iVar2 = get_default_max_attribute_rank(iVar0, 7);
	fVar3 = _0xeb67d4e056c85a81(iVar1);
	fVar4 = _0x78d8c1d4eb80c588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_468(iParam0) + 1;
	fVar6 = func_469(iParam0);
	fVar7 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar1));
	fVar8 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_470(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_249(char* sParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	func_79(sParam0, iParam1, 0, 1, sParam2, sParam3, sParam4, sParam5, iParam6);
}

void func_250(int iParam0)
{
	iParam0 = func_272(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_471(iParam0, 32);
	func_275();
}

void func_251()
{
	iLocal_1403 = _blip_add_for_coord(408396114, vLocal_550);
	_blip_set_modifier(iVar1401, -1878373110);
}

void func_252()
{
	func_463(Local_987[1], func_464(30), &(sLocal_449[54]), 648122183, 0, 0, 0, 1, 0);
	func_465(&Local_987, 0);
	func_205(Local_987[2], 0, 0);
	func_205(Local_987[0], 0, 0);
	func_466(Local_987[2], 1);
}

void func_253()
{
	if (func_153(&uLocal_1109, 0.65f))
	{
		func_472(&(sLocal_449[60]));
	}
	if (func_56(&uLocal_1330, 15f))
	{
		if ((func_243(Global_35) && is_ped_stopped(_get_last_mount(Global_35))) || is_ped_stopped(Global_35))
		{
			if (!func_50(&uLocal_1106))
			{
				func_55(&uLocal_1106);
			}
			else if (iVar1100 < 3)
			{
				if (func_59(0, 1, iVar1403, 1) && func_153(&uLocal_1106, 4f))
				{
					func_472(&(sLocal_449[59]));
					func_55(&uLocal_1330);
					uLocal_1102 = iVar1100 + 1;
				}
			}
			else
			{
				func_473();
			}
		}
		else if (func_50(&uLocal_1106))
		{
			func_57(&uLocal_1106);
		}
	}
	if (func_59(0, 1, &(uLocal_1389[0]), 1) && func_153(&uLocal_1115, 25f))
	{
		if (iVar1102 < 2)
		{
			func_472(&(sLocal_449[62]));
			uLocal_1104 = iVar1102 + 1;
		}
		else
		{
			func_473();
		}
	}
	if (!func_50(&uLocal_1121) || func_56(&uLocal_1121, 3f))
	{
		if (!func_50(&uLocal_1118))
		{
			if (is_ped_shooting(Global_35))
			{
				func_55(&uLocal_1118);
			}
		}
		else if (func_153(&uLocal_1118, 0.5f))
		{
			if (iVar1103 < 3)
			{
				func_472(&(sLocal_449[64]));
				uLocal_1105 = iVar1103 + 1;
				func_55(&uLocal_1121);
			}
			else
			{
				func_473();
				iLocal_1096 = 1;
			}
		}
	}
	func_474();
}

char* func_254(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return _create_var_string(2, func_328(sParam1));
}

void func_255()
{
	func_475();
	iLocal_1095 = 1;
	iLocal_1411 = 15;
}

void func_256()
{
	if (iVar1040 > 43)
	{
		return;
	}
	if (func_40(&(uLocal_1389[0]), 0, 1))
	{
		if ((func_56(&uLocal_1124, 5f) || !func_50(&uLocal_1124)) && func_59(0, 1, iVar1403, 1))
		{
			if (func_476(&(uLocal_1389[0]), vLocal_550, 0) < 14000f)
			{
				func_65(&(uLocal_1389[0]), Global_35, &(sLocal_449[43]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				uLocal_1405 = &uLocal_1389[0];
				iLocal_1042 = 44;
			}
			else if (iVar1040 != 43)
			{
				if ((iVar1040 == 29 || iVar1040 == 34) || iVar1040 == 38)
				{
					func_65(Global_35, &(uLocal_1389[0]), &(sLocal_449[iVar1040]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					uLocal_1405 = Global_35;
					iLocal_1100 = 0;
				}
				else
				{
					if (bVar1098)
					{
						func_65(&(uLocal_1389[0]), Global_35, &(sLocal_449[58]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_1100 = 0;
						uLocal_1405 = &uLocal_1389[0];
						return;
					}
					func_65(&(uLocal_1389[0]), Global_35, &(sLocal_449[iVar1040]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					uLocal_1405 = &uLocal_1389[0];
				}
				iLocal_1042 = iVar1040 + 1;
			}
			else if (!func_50(&uLocal_1115))
			{
				func_55(&uLocal_1115);
			}
		}
	}
}

void func_257()
{
	if (!bVar1091 && func_59(0, 1, &(uLocal_1389[0]), 1))
	{
		func_65(Global_35, &(uLocal_1389[0]), &(sLocal_449[55]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		iLocal_1093 = 1;
		func_55(&uLocal_1324);
	}
	if (func_59(0, 1, Global_35, 1) && func_153(&uLocal_1324, 4f))
	{
		if (func_477())
		{
			func_65(Global_35, 0, &(sLocal_449[56]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		else
		{
			func_65(Global_35, 0, &(sLocal_449[57]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

float func_258(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

void func_259(int iParam0, bool bParam1, bool bParam2)
{
	set_ped_config_flag(iParam0, 297, false);
	set_ped_config_flag(iParam0, 301, false);
	set_ped_config_flag(iParam0, 315, false);
	set_ped_config_flag(iParam0, 130, false);
	set_ped_config_flag(iParam0, 178, bParam2);
	set_ped_config_flag(iParam0, 330, false);
	set_ped_config_flag(iParam0, 317, bParam1);
}

bool func_260(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, float fParam7, float fParam8)
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
	if (func_157(*iParam1, 128))
	{
		if (!func_90(iParam0, 1245594896))
		{
			clear_ped_tasks(iParam0, 1, 0);
			*iParam1 = 0;
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_157(*iParam1, 2))
	{
		if (bVar3)
		{
			if (!func_478(iVar2))
			{
				return false;
			}
			if (!func_90(iParam0, 501393341))
			{
				if (fParam7 != 0f && fParam8 != 0f)
				{
					vVar5 = { get_entity_coords(iParam0, true, false) };
					vVar5.x = fParam7;
					vVar5.f_1 = fParam8;
					if (func_479(iVar2, vVar5))
					{
						iParam4 = 131072;
					}
					else
					{
						iParam4 = 262144;
					}
					if (!func_157(*iParam1, 4))
					{
						iParam4 |= 32;
					}
				}
				clear_ped_tasks(iParam0, 1, 0);
				task_dismount_animal(iParam0, iParam4, 0, 0, 0, 0);
			}
			return false;
		}
		else if ((func_17(iParam2, 128) && does_entity_exist(_get_last_mount(iParam0))) && does_entity_exist(_get_first_entity_ped_is_carrying(_get_last_mount(iParam0))))
		{
			task_pickup_carriable_entity(iParam0, _get_first_entity_ped_is_carrying(_get_last_mount(iParam0)));
			func_158(iParam1, 128);
			return false;
		}
		else
		{
			*iParam1 = 0;
			return true;
		}
	}
	if (func_157(*iParam1, 4))
	{
		if (is_ped_in_any_vehicle(iParam0, true))
		{
			return false;
		}
		else
		{
			clear_ped_tasks_immediately(iParam0, false, true);
			*iParam1 = 0;
			return true;
		}
	}
	if (func_157(*iParam1, 8))
	{
		if (bVar3)
		{
			if (!func_478(iVar2))
			{
				return false;
			}
		}
		if ((!bVar3 && is_move_blend_ratio_still(get_ped_desired_move_blend_ratio(iParam0))) || (bVar3 && is_move_blend_ratio_still(get_ped_desired_move_blend_ratio(iVar2))))
		{
			*iParam1 = 0;
			return true;
		}
		else
		{
			return false;
		}
	}
	if (is_ped_a_player(iParam0) && is_player_control_on(get_player_index()))
	{
		if (!func_17(iParam2, 2) && _0xb16223cb7da965f0(get_player_index()))
		{
			_0xae637bb8ef017875(get_player_index(), 1);
		}
		if (!func_17(iParam2, 2048))
		{
			if (is_player_control_on(get_player_index()))
			{
				set_player_control(get_player_index(), false, iParam3, false);
				if (func_17(iParam2, 8192))
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
		if (func_157(*iParam1, 2336))
		{
			if (!func_478(iVar2))
			{
			}
			if (func_480(iVar2, *iParam1))
			{
				func_481(iParam1, 32);
				func_481(iParam1, 256);
				func_481(iParam1, 2048);
				func_158(iParam1, 512);
				func_158(iParam1, 1024);
				func_158(iParam1, 4096);
			}
			else
			{
				return false;
			}
		}
		if (func_157(*iParam1, 64))
		{
			disable_control_action(0, 1520437207, false);
			if (!func_478(iVar2))
			{
			}
			if (is_ped_walking(iVar2))
			{
				return false;
			}
			else
			{
				func_481(iParam1, 64);
			}
		}
		if (func_17(iParam2, 16))
		{
			task_horse_action(iVar2, 2, 0, 0);
			*iParam1 = 0;
			return true;
		}
		disable_control_action(0, 1520437207, false);
		if (((is_ped_sprinting(iVar2) || (is_ped_running(iVar2) && func_17(iParam2, 1024))) || func_17(iParam2, 8)) && !func_157(*iParam1, 5632))
		{
			task_horse_action(iVar2, 1, 0, 0);
			func_158(iParam1, 32);
		}
		else if ((is_ped_running(iVar2) && func_17(iParam2, 4096)) && !func_157(*iParam1, 5632))
		{
			task_horse_action(iVar2, 8, 0, 0);
			func_158(iParam1, 2048);
			func_158(iParam1, 4096);
		}
		else if (((get_ped_desired_move_blend_ratio(iVar2) <= 1.5f && get_ped_desired_move_blend_ratio(iVar2) >= 1.001f) && func_17(iParam2, 32)) && !func_157(*iParam1, 5632))
		{
			task_horse_action(iVar2, 3, 0, 0);
			func_158(iParam1, 256);
			func_158(iParam1, 1024);
		}
		else if (is_ped_walking(iVar2))
		{
			task_stand_still(iVar2, -1);
			func_158(iParam1, 64);
		}
		else if (!func_17(iParam2, 1))
		{
			if (!func_17(iParam2, 256))
			{
				_0xb832f1a686b9b810(iParam0, 1, 0);
			}
			if (fParam7 != 0f && fParam8 != 0f)
			{
				vVar8.x = fParam7;
				vVar8.f_1 = fParam8;
				vVar8.f_2 = Global_36.f_2;
				if (func_479(iVar2, vVar8))
				{
					iParam4 = 131072;
				}
				else
				{
					iParam4 = 262144;
				}
				if (!func_157(*iParam1, 4))
				{
					iParam4 |= 32;
				}
			}
			task_dismount_animal(iParam0, iParam4, 0, 0, 0, 0);
			set_ped_desired_move_blend_ratio(iVar2, 0f);
			func_158(iParam1, 2);
		}
		else
		{
			task_stand_still(iParam0, 1000);
			func_158(iParam1, 8);
		}
	}
	else if (bVar4)
	{
		if (!func_17(iParam2, 1))
		{
			open_sequence_task(&iVar0);
			task_stand_still(0, 250);
			task_leave_any_vehicle(0, 0, 0);
			close_sequence_task(iVar0);
			task_perform_sequence(iParam0, iVar0);
			clear_sequence_task(&iVar0);
			bring_vehicle_to_halt(iVar1, fParam5, iParam6, false);
			func_158(iParam1, 4);
		}
		else
		{
			*iParam1 = 0;
			return true;
		}
	}
	else if (!func_17(iParam2, 512))
	{
		task_stand_still(iParam0, 200);
		func_158(iParam1, 8);
	}
	return false;
}

bool func_261(int iParam0, int iParam1)
{
	return _is_ped_using_scenario_hash(iParam0, iParam1);
}

bool func_262(var uParam0, int iParam1)
{
	Var0.f_1 = uParam0;
	return func_482(_0x0fd07141ad048aae(&Var0, iParam1));
}

void func_263()
{
	if (!func_40(&(uLocal_1389[0]), 0, 1))
	{
		return;
	}
	if (func_59(0, 1, Global_35, 1) && func_153(&uLocal_1306, 3f))
	{
		if (bVar1080 && !bVar1083)
		{
			iLocal_1085 = 1;
			task_look_at_entity(&(uLocal_1389[0]), Global_35, 1000, 0, 51, 0);
			if (func_116() == 0)
			{
				func_65(&(uLocal_1389[0]), Global_35, &(sLocal_449[53]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				func_65(&(uLocal_1389[0]), Global_35, &(sLocal_449[53]), 0, -1082130432, 2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			if (!bVar1081)
			{
				func_205(Local_987[0], 1, 0);
			}
		}
		if (bVar1081 && !bVar1084)
		{
			iLocal_1086 = 1;
			task_look_at_entity(&(uLocal_1389[0]), Global_35, 1000, 0, 51, 0);
			if (func_116() == 0)
			{
				func_65(&(uLocal_1389[0]), Global_35, &(sLocal_449[52]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				func_65(&(uLocal_1389[0]), Global_35, &(sLocal_449[52]), 0, -1082130432, 2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			if (!bVar1080)
			{
				func_205(Local_987[1], 1, 0);
			}
		}
		if (bVar1082 && !bVar1085)
		{
			iLocal_1087 = 1;
			Var0.f_1 = 2;
			Var0.f_2 = 493038497;
			Var0.f_5 = 1;
			Var0.f_6 = 1;
			Var0 = 41;
			Var0.f_2 = 980351091;
			Var0.f_3 = 3;
			Var0.f_4 = 1;
			func_483(uLocal_1389[0], &Var0, Local_860[0], &Local_987, &(uLocal_1389[1]));
			func_44(4, 1877013492, 0, 0, &(uLocal_1389[0]), 0, 1065353216, 0);
			Local_26.f_46 = 1;
		}
	}
}

bool func_264()
{
	if (!func_484(Global_1395482->f_1))
	{
		return false;
	}
	return func_485(Global_1395482->f_1, 32);
}

bool func_265(int iParam0)
{
	if (func_98(iParam0, 1))
	{
		return false;
	}
	return (1 == func_486(iParam0) || 2 == func_486(iParam0));
}

float func_266(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

void func_267(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_71(&(iParam0->f_1), 2048);
	}
	else
	{
		func_72(&(iParam0->f_1), 2048);
	}
}

void func_268(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_71(&(iParam0->f_1), 128);
	}
	else
	{
		func_72(&(iParam0->f_1), 128);
	}
}

void func_269(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_72(iParam0, 268435456);
	}
	else
	{
		func_71(iParam0, 268435456);
	}
	if (!bParam2)
	{
		func_72(iParam0, 1073741824);
	}
	else
	{
		func_71(iParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_72(iParam0, 536870912);
	}
	else
	{
		func_71(iParam0, 536870912);
	}
}

var func_270(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_271(int iParam0, int iParam1)
{
	iVar1 = func_487(iParam0, iParam1);
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

int func_272(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

bool func_273(int iParam0, int iParam1)
{
	iParam0 = func_272(iParam0);
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

void func_274(int iParam0, int iParam1)
{
	iParam0 = func_272(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0]->f_24 = ((*Global_1900383)[iParam0]->f_24 - ((*Global_1900383)[iParam0]->f_24 && iParam1));
}

void func_275()
{
	if (func_246(0))
	{
		func_488(0);
	}
	if (func_246(1))
	{
		func_488(1);
	}
	if (func_246(5))
	{
		func_488(5);
	}
	if (func_246(6))
	{
		func_489(6);
	}
}

bool func_276(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

char* func_277(int iParam0)
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

void func_278(int iParam0, int iParam1)
{
	if (!func_276(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_1 = ((*Global_1310750)[iParam0]->f_1 || iParam1);
}

void func_279(int iParam0, bool bParam1)
{
	if (func_40(iParam0, 0, 1))
	{
		set_blocking_of_non_temporary_events(iParam0, false);
		func_490(iParam0, 1088421888, 0, 0);
		if (!bParam1)
		{
			set_ped_as_no_longer_needed(&iParam0);
		}
	}
}

bool func_280(var uParam0, var uParam1)
{
	if (func_98(uParam0->f_3, 16777216))
	{
		if (func_491(*uParam1) != -1 || get_entity_model(*uParam1) == 1478983280)
		{
			return true;
		}
	}
	return false;
}

void func_281(var uParam0)
{
	set_ped_config_flag(*uParam0, 6, false);
	set_ped_config_flag(*uParam0, 4, false);
	set_ped_config_flag(*uParam0, 494, true);
}

float func_282(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_283(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4)
{
	if (!Global_1935630->f_12 && (!bParam4 || func_40(iParam0, 0, 1)))
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
			fVar2 = func_282(fParam2 >= 0f, fParam2, vdist(get_entity_coords(iParam0, true, false), Global_36));
			if (fVar2 > 25f && is_entity_occluded(iParam0))
			{
				func_492(&iParam0);
			}
			else if (does_entity_exist(iParam0))
			{
				open_sequence_task(&iVar0);
				task_smart_flee_ped(0, Global_35, 1000f, -1, 0, fParam1, 0);
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

void func_284(var uParam0)
{
	if (_does_volume_exist(uParam0->f_171))
	{
		func_493(uParam0->f_171);
		_0xa1cfb35069d23c23(uParam0->f_171);
		_0x74c2b3dc0b294102(uParam0->f_171);
	}
	if (uParam0->f_51.f_7 != 0)
	{
		destroy_tracked_point(uParam0->f_51.f_7);
		uParam0->f_51.f_7 = 0;
	}
	func_494(uParam0);
	func_495(uParam0);
	func_496(uParam0);
	if (!func_497(uParam0))
	{
		if (_0xf6a8a652a6b186cd(uParam0->f_51.f_11))
		{
			_0xfdfecc6ee4491e11(uParam0->f_51.f_11);
		}
		func_377(uParam0->f_51, 0);
	}
	if (does_blip_exist(uParam0->f_51.f_6))
	{
		remove_blip(&(uParam0->f_51.f_6));
	}
	if (uParam0->f_48)
	{
		func_409();
	}
	if (!func_498(uParam0->f_3) && !func_98(uParam0->f_3, 256))
	{
		func_499(uParam0->f_3, 1, 0, 15, 0, 0, 0, 1);
	}
	func_500(uParam0->f_173);
	func_500(uParam0->f_172);
}

void func_285(var uParam0)
{
	if (does_blip_exist(uParam0->f_181))
	{
		remove_blip(&(uParam0->f_181));
	}
}

int func_286(int iParam0, int iParam1)
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

void func_287(int iParam0, int iParam1, int iParam2)
{
	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_161() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	_0xd5910ecf81a2278c(iParam0, iParam1, iParam2, &vVar0);
}

bool func_288(int iParam0)
{
	if (((func_289(iParam0, 1) && func_289(iParam0, 2)) && func_289(iParam0, 8)) && func_289(iParam0, 512))
	{
		return true;
	}
	return false;
}

bool func_289(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

Vector3 func_290(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return 0f, 0f, 0f;
	}
	if (!func_276(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (func_501(iParam0) == 0)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = (func_502(iParam0) + iParam1);
	if (iVar0 >= 892)
	{
		return 0f, 0f, 0f;
	}
	return *Global_1310750->f_13358[iVar0];
}

void func_291(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_98(iParam0, 32))
	{
		if (func_503(iParam0, uParam1->f_4, &(uParam1->f_12)))
		{
			if (bParam4)
			{
				vVar1 = { func_504(Global_35, &(uParam1->f_12)) };
				if (!func_34(vVar1))
				{
					*uParam1 = { vVar1 };
				}
			}
		}
	}
	if (bParam2)
	{
		func_505(uParam1, bParam2);
	}
	if (bParam3)
	{
		fVar4 = func_378(iParam0);
		iVar0 = _create_volume_cylinder_with_custom_name(*uParam1, 0f, 0f, 0f, fVar4, fVar4, fVar4, func_379());
		if (func_506(Global_1310750[iParam0], 33554432))
		{
			func_381(iVar0, func_380(iParam0), 1, 0, 2, 0, -1082130432);
		}
		else
		{
			func_381(iVar0, func_380(iParam0), 1, 0, 8, 0, -1082130432);
		}
		if (func_98(iParam0, 1))
		{
			func_507(*uParam1 + Vector(1f, 0f, 0f), 25f, "Beat Inner", 1, 0, 32, 0, -1082130432);
		}
	}
	func_508(iParam0);
}

bool func_292(int iParam0, var uParam1)
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
			func_509(uParam1, *(*Global_1310750)[iParam0]->f_4.f_4[iVar0]);
		}
		iVar0++;
	}
	if (func_144(iParam0, 16))
	{
		_0xb8e3486d107f4194(*uParam1, 55f);
		_0x827a58ced9d4d5b4(*uParam1, 180f);
		fVar2 = to_float(func_510(iParam0));
		fVar1 = 60f;
	}
	else
	{
		_0x65d281985f2bdfc2(*uParam1, 35f);
		_0x827a58ced9d4d5b4(*uParam1, 65f);
		fVar2 = to_float(func_510(iParam0));
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

void func_293(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4)
{
	switch (func_511(iParam0))
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
			if (!func_98(iParam0, 1))
			{
				if (func_144(iParam0, 2))
				{
				}
			}
			func_512(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		case 2:
			func_513(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		case 3:
			func_513(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = 7f;
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		default:
			break;
	}
	if (func_265(iParam0))
	{
		*fParam2 = 40000f;
	}
}

Vector3 func_294(bool bParam0, int iParam1, var uParam2, var uParam3)
{
	fVar7 = 999999.9f;
	fVar8 = 0f;
	*bParam0 = 1;
	iVar0 = 0;
	while (iVar0 < func_501(iParam1))
	{
		if (!func_514(iParam1, iVar0))
		{
			vVar4 = { func_290(iParam1, iVar0) };
			if (!func_34(vVar4))
			{
				fVar8 = vdist(Global_36, vVar4);
				if (func_299(fVar8, iParam1))
				{
					*bParam0 = 0;
				}
				if (fVar8 < fVar7)
				{
					if (func_515(iParam1, vVar4, uParam2, uParam3))
					{
						fVar7 = vdist(Global_36, vVar4);
						vVar1 = { vVar4 };
					}
				}
			}
		}
		iVar0++;
	}
	if (!func_34(vVar4))
	{
	}
	return vVar1;
}

int func_295(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, int iParam5)
{
	if (uParam0->f_8 >= iParam4)
	{
		if (bParam3)
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_79("BEAT_FAIL", 5000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam2 = 1;
	}
	*uParam1 = iParam5;
	uParam0->f_8++;
	return 0;
}

int func_296(int iParam0, vector3 vParam1)
{
	iVar0 = 0;
	while (iVar0 < func_501(iParam0))
	{
		vVar1 = { func_290(iParam0, iVar0) };
		if (func_516(vVar1, vParam1, 1056964608, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_297(var uParam0)
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

bool func_298(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	vVar2 = { *uParam0 };
	func_517(Global_35, *uParam0, &(uParam0->f_37), 1061158912, 0, 0);
	if (func_518(&(uParam0->f_37), 500))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!func_34(*uParam0->f_12[iVar0]))
			{
				vVar5 = { *uParam0->f_12[iVar0] };
				vVar8 = { _0x83acc65d9acec5ef(Global_36, vVar2, vVar5, true) };
				if (vdist2(Global_36, vVar8) <= (35f * 35f) || vdist2(Global_36, *uParam0->f_12[iVar0]) <= (80f * 80f))
				{
					if (bParam4)
					{
						iVar1 = func_519(uParam0);
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
	return func_295(uParam0, uParam1, uParam2, bParam3, 16, 1000);
}

bool func_299(float fParam0, int iParam1)
{
	fVar3 = (fParam0 * fParam0);
	func_293(iParam1, &fVar0, &fVar1, &uVar2, 1);
	if (fVar3 > fVar1)
	{
		return false;
	}
	if (func_98(iParam1, 1))
	{
		if (fVar3 < fVar0)
		{
			return false;
		}
	}
	return true;
}

bool func_300(var uParam0, bool bParam1)
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

bool func_301(int iParam0, var uParam1, var uParam2, struct<7> Param3, bool bParam10)
{
	if (func_520(iParam0, *uParam2))
	{
		return false;
	}
	if (!func_521(iParam0, uParam2))
	{
		return false;
	}
	if (!func_522(Param3))
	{
		return false;
	}
	if (bParam10)
	{
		if (!func_523(*uParam2, Global_35))
		{
			return false;
		}
	}
	return true;
}

int func_302(var uParam0)
{
	return uParam0->f_51.f_4;
}

bool func_303(int iParam0, int iParam1, var uParam2)
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

void func_304(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = _create_volume_cylinder_with_custom_name(vParam1, vParam4, vParam7, sParam10);
}

void func_305(int iParam0, int iParam1)
{
	if (func_524(iParam0))
	{
		return;
	}
	if (func_525(iParam0) == iParam1)
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

void func_306(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 0);
	if (bParam3)
	{
		func_71(&iParam1, 8192);
	}
	if (bParam4)
	{
		_0x2161278c6322f740(iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, iParam0);
	}
}

int func_307(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_1;
}

int func_308(int iParam0)
{
	return &(Global_17504.f_42[iParam0]);
}

int func_309(int iParam0, int iParam1)
{
	iVar1 = func_487(iParam0, iParam1);
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

Vector3 func_310(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2129.134f, 1730.148f, 134.9421f;
				case 1:
					return 2128.404f, 1729.946f, 135.2397f;
				case 2:
					return 2142.427f, 1729.198f, 128.887f;
				case 3:
					return 2142.402f, 1724.465f, 129.2984f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_311(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 205.2f;
				case 1:
					return -75.6f;
				case 2:
					return 252.72f;
				case 3:
					return 290.16f;
			}
			break;
	}
	return 0f;
}

Vector3 func_312(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2128.429f, 1729.187f, 135.2999f;
				case 1:
					return 2127.592f, 1728.32f, 135.711f;
				case 2:
					return 2137.481f, 1727.916f, 131.4501f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_313(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 190.08f;
				case 1:
					return -35.28f;
				case 2:
					return 271.44f;
			}
			break;
	}
	return 0f;
}

Vector3 func_314(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2138.869f, 1723.668f, 131.0644f;
				case 1:
					return 2141.349f, 1729.143f, 129.4466f;
				case 2:
					return 2142.01f, 1725.302f, 129.4338f;
				case 3:
					return 2142.548f, 1727.151f, 126.2764f;
				case 4:
					return 2139.967f, 1724.03f, 132.1928f;
				case 5:
					return 2139.22f, 1723.784f, 130.8906f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_315(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 186.48f;
				case 1:
					return 256.32f;
				case 2:
					return 297.36f;
				case 3:
					return 271.44f;
				case 4:
					return 86.5576f;
				case 5:
					return 196.56f;
			}
			break;
	}
	return 0f;
}

Vector3 func_316(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2138.869f, 1723.668f, 131.0644f;
				case 1:
					return 2141.349f, 1729.143f, 129.4466f;
				case 2:
					return 2142.01f, 1725.302f, 129.4338f;
				case 3:
					return 2139.967f, 1724.03f, 132.1928f;
				case 4:
					return 2139.22f, 1723.784f, 130.8906f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_317(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 186.48f;
				case 1:
					return 256.32f;
				case 2:
					return 297.36f;
				case 3:
					return 86.5576f;
				case 4:
					return 196.56f;
			}
			break;
	}
	return 0f;
}

int func_318()
{
	return Global_1897952->f_41;
}

int func_319(int iParam0)
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

bool func_320()
{
	if (func_161() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

bool func_321(int iParam0, bool bParam1)
{
	switch (func_526(iParam0))
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

int func_322(int iParam0)
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

int func_323(bool bParam0)
{
	if (bParam0)
	{
		return func_527(Global_1359489->f_4);
	}
	get_group_size(func_528(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = get_ped_as_group_member(func_528(), iVar3);
		if (func_529(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

void func_324(int iParam0)
{
	func_158(iParam0, 256);
}

void func_325()
{
	switch (iLocal_228)
	{
		case 0:
			Local_604[2]->f_1 = 90264823;
			break;
		case 1:
			Local_604[2]->f_1 = -885451903;
			Local_604[3]->f_1 = -885451903;
			break;
		case 2:
			Local_604[2]->f_1 = -885451903;
			Local_604[3]->f_1 = -885451903;
			Local_604[4]->f_1 = -885451903;
			break;
	}
}

bool func_326(int iParam0)
{
	if (iParam0 == -1)
	{
		return true;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = func_531(func_530());
	if (func_17(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_17(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_17(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_17(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_17(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_17(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_17(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_17(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_17(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_17(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_17(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_17(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_17(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_17(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_17(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_17(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_17(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

void func_327(var uParam0)
{
	if (*uParam0 != 0)
	{
		request_model(*uParam0, false);
	}
}

char* func_328(char* sParam0)
{
	return sParam0;
}

void func_329(char* sParam0, var uParam1)
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

bool func_330(var uParam0)
{
	if (!func_532(uParam0->f_1))
	{
		return false;
	}
	if (uParam0->f_12 != 0)
	{
		if (!func_532(uParam0->f_12))
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

bool func_331(int iParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if ((*iParam0)[iVar0]->f_1 != 0)
		{
			iVar1++;
			if ((*iParam0)[iVar0]->f_12 != 0)
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1 <= 15;
}

bool func_332(var uParam0)
{
	return func_157(*uParam0, 32);
}

float func_333(float fParam0)
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

bool func_334(var uParam0)
{
	return func_157(*uParam0, 1);
}

bool func_335(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_533(*uParam0, 0f, 0f, 0f))
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

void func_336(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10, int iParam11)
{
	if (uParam0->f_136 < 0 || uParam0->f_136 > 15)
	{
		return;
	}
	request_model(iParam2, false);
	(*uParam0)[uParam0->f_136]->f_1 = iParam2;
	(*uParam0)[uParam0->f_136]->f_2 = { vParam3 };
	(*uParam0)[uParam0->f_136]->f_5 = fParam6;
	(*uParam0)[uParam0->f_136]->f_7 = iParam1;
	(*uParam0)[uParam0->f_136]->f_8 = iParam11;
	if (bParam7)
	{
		func_72(&((*uParam0)[uParam0->f_136]->f_6), 4);
	}
	if (bParam8)
	{
		func_72(&((*uParam0)[uParam0->f_136]->f_6), 8);
	}
	if (iParam9 == 1)
	{
		func_72(&((*uParam0)[uParam0->f_136]->f_6), 1);
	}
	else if (iParam9 == 2)
	{
		func_72(&((*uParam0)[uParam0->f_136]->f_6), 2);
	}
	if (bParam10)
	{
		func_72(&((*uParam0)[uParam0->f_136]->f_6), 16);
	}
	uParam0->f_136++;
}

bool func_337(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_136)
	{
		if (!does_entity_exist(uParam0[iVar0]) && (*uParam0)[iVar0]->f_1 != 0)
		{
			if (has_model_loaded((*uParam0)[iVar0]->f_1))
			{
				bVar1 = func_17((*uParam0)[iVar0]->f_6, 4);
				bVar2 = func_17((*uParam0)[iVar0]->f_6, 8);
				bVar3 = func_17((*uParam0)[iVar0]->f_6, 16);
				if (func_17((*uParam0)[iVar0]->f_6, 1))
				{
					bVar4 = true;
				}
				else if (func_17((*uParam0)[iVar0]->f_6, 2))
				{
					bVar4 = 2;
				}
				else
				{
					bVar4 = false;
				}
				if ((*uParam0)[iVar0]->f_8 != 0 && _0x610438375e5d1801((*uParam0)[iVar0]->f_8))
				{
					(*uParam0)[iVar0] = _0xeaf682a14f8e5f53((*uParam0)[iVar0]->f_8, (*uParam0)[iVar0]->f_2, (*uParam0)[iVar0]->f_5, bVar1, bVar2, 1, 0);
				}
				else
				{
					(*uParam0)[iVar0] = func_534((*uParam0)[iVar0]->f_1, (*uParam0)[iVar0]->f_2, (*uParam0)[iVar0]->f_5, bVar1, bVar2, bVar4, bVar3, 1, 1, 0, 0, 0, 0);
				}
				if (bParam1)
				{
					set_entity_visible(uParam0[iVar0], false);
				}
			}
			return false;
		}
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_136)
		{
			if (does_entity_exist(uParam0[iVar0]))
			{
				set_entity_visible(uParam0[iVar0], true);
				_0xa91e6cf94404e8c9(uParam0[iVar0]);
			}
			iVar0++;
		}
	}
	return true;
}

int func_338(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_136)
	{
		if ((*uParam0)[iVar0]->f_7 == iParam1)
		{
			return uParam0[iVar0];
		}
		iVar0++;
	}
	return 0;
}

void func_339(var uParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!is_entity_dead(*uParam0))
	{
		vVar0 = { get_entity_coords(*uParam0, true, false) };
		if (bParam2)
		{
			func_535(&vVar0, uParam1->f_22);
		}
		if (is_ped_human(*uParam0) && uParam1->f_10)
		{
			_0x0fb1ba7ff73b41e1(*uParam0, uParam1->f_4, 0);
		}
		if (is_entity_dead(*uParam0))
		{
		}
		else
		{
			set_blocking_of_non_temporary_events(*uParam0, true);
			_0x9520175b35e2268d(*uParam0, 1);
			if (func_536(*uParam0))
			{
				set_animal_tuning_bool_param(*uParam0, 48, true);
			}
		}
		if (!bParam3 && func_537(&(uParam1->f_22)))
		{
			set_ped_can_ragdoll(*uParam0, true);
			set_ped_to_ragdoll(*uParam0, 1000, 1000, 1, false, false, false);
			set_ped_config_flag(*uParam0, 186, !func_538(&(uParam1->f_22)));
			func_81(*uParam0, func_539(&(uParam1->f_22)), 0);
		}
		else
		{
			request_ped_visibility_tracking(*uParam0);
		}
		if (func_540(&(uParam1->f_22)))
		{
			freeze_entity_position(*uParam0, true);
		}
		func_542(*uParam0, !func_541(&(uParam1->f_22)));
		set_ped_config_flag(*uParam0, 4, func_543(&(uParam1->f_22)));
		set_ped_config_flag(*uParam0, 6, func_544(&(uParam1->f_22)));
		if (func_545(&(uParam1->f_22)))
		{
			func_546(*uParam0, 1);
		}
		if (func_538(&(uParam1->f_22)))
		{
			set_ped_config_flag(*uParam0, 186, false);
		}
	}
}

void func_340(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || func_40(iParam0, 0, 0))
	{
		decor_set_bool(iParam0, "HAS_VOICE", true);
		set_ambient_voice_name(iParam0, sParam1);
	}
}

bool func_341(var uParam0)
{
	return func_157(*uParam0, 16);
}

bool func_342(int iParam0, var uParam1)
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

void func_343(var uParam0, bool bParam1)
{
	vVar0 = { *uParam0 };
	vVar0.f_2 = (vVar0.z + 5f);
	if (bParam1)
	{
		if (!func_335(&vVar0, 50, 10, 0))
		{
		}
		else
		{
			*uParam0 = { vVar0 };
		}
	}
}

void func_344(var uParam0, int iParam1, int iParam2)
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

void func_345(var uParam0, int iParam1, int iParam2)
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

Vector3 func_346(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 67.1f;
				case 1:
					return 0f, 0f, 57.819f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 149.647f;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 170.64f;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 184.32f;
				case 1:
					return 0f, 0f, -179.28f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_347(var uParam0)
{
	return uParam0->f_51;
}

void func_348(int iParam0, int iParam1)
{
	iParam0->f_21 = iParam1;
}

bool func_349()
{
	return &Global_1935436 == 2;
}

void func_350(int iParam0)
{
	if (iParam0 >= &Global_1935436)
	{
		return;
	}
	Global_1935436->f_1 = iParam0;
}

void func_351(int iParam0, int iParam1)
{
	if (get_random_event_flag())
	{
		return;
	}
	Global_17504.f_3++;
	Global_17504.f_42[iParam0]->f_1++;
	if (func_98(iParam0, 2))
	{
		func_548(iParam0, func_547(iParam1));
	}
	else
	{
		func_549(iParam0, func_318());
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
	func_550(iParam0, (*Global_1310750)[iParam0]->f_36, fVar0, 1, 0);
	func_551(iParam0, 0);
	func_552(iParam0);
	func_553(1);
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
	if (!func_98(iParam0, 16))
	{
		func_352(iParam0, 0, 0, 0, 0);
	}
}

void func_352(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (bParam1)
	{
	}
	if (func_554() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0];
		if (((func_276(iVar1) && !func_98(iVar1, iParam2)) && (!bParam3 || !func_367(iVar1))) && (!bParam4 || !func_555(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_556(iVar0);
			}
		}
		iVar0++;
	}
}

int func_353(int iParam0)
{
	return (*Global_1310750)[iParam0]->f_39;
}

void func_354(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_177 != -1 || func_506(Global_1310750[uParam0->f_3], 16777216))
	{
		if (bParam2)
		{
			if (func_98(uParam0->f_3, 1073741824))
			{
				func_557(2, -1, 0, 0, 0);
			}
			else
			{
				func_557(1, -1, 0, 0, 0);
			}
		}
		else if (bParam1)
		{
			if (uParam0->f_45)
			{
				func_557(8, -1, 0, 0, 0);
			}
		}
		if (uParam0->f_177 != -1)
		{
			if (bParam2)
			{
				if (!func_558(1, uParam0->f_177))
				{
					func_559(16, uParam0->f_177);
					func_560(1, uParam0->f_177);
				}
				compendium_gang_encountered(func_561(uParam0->f_177));
			}
		}
	}
	else if (bParam2 || (bParam1 && uParam0->f_45))
	{
		func_557(8, -1, 0, 0, 0);
	}
}

int func_355()
{
	if (func_562(Global_1935630->f_44))
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
		else if (func_563())
		{
			return 1;
		}
	}
	return 0;
}

bool func_356(int iParam0, int iParam1, bool bParam2, int iParam3)
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

float func_357(var uParam0, bool bParam1)
{
	if (uParam0->f_119 == -1f)
	{
		if (func_98(uParam0->f_3, 1024))
		{
			fVar0 = 95f;
		}
		else if (func_98(uParam0->f_3, 2048))
		{
			fVar0 = 80f;
		}
		else if (func_98(uParam0->f_3, 4096))
		{
			fVar0 = 65f;
		}
		else if (func_98(uParam0->f_3, 8192))
		{
			fVar0 = 55f;
		}
		else if (func_98(uParam0->f_3, 16384))
		{
			fVar0 = 30f;
		}
		else
		{
			fVar0 = 85f;
		}
		if (func_98(uParam0->f_3, 1))
		{
		}
		else if (func_98(uParam0->f_3, 2))
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

int func_358(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6)
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
			else if (func_564(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
					if (func_565(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
		uParam0->f_7 = (func_397() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

bool func_359(var uParam0, int iParam1, float fParam2)
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
	func_146(uParam0);
	return true;
}

bool func_360()
{
	return (Global_1894899 & 1 != 0 && func_370() != -1);
}

bool func_361(var uParam0, float fParam1)
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

bool func_362(int iParam0, int iParam1)
{
	return (func_353(iParam0) && iParam1) != 0;
}

bool func_363(int iParam0)
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
	if (iParam0 & 1 == 1 && func_566(iVar3))
	{
		return true;
	}
	if (iParam0 & 2 == 2 && func_567(iVar3))
	{
		return true;
	}
	if (iParam0 & 4 == 4 && func_568(iVar3))
	{
		return true;
	}
	if (iParam0 & 8 == 8 && func_569(iVar3))
	{
		return true;
	}
	if (iParam0 & 16 == 16 && func_570(iVar3))
	{
		return true;
	}
	if (iParam0 & 32 == 32 && func_571(iVar3))
	{
		return true;
	}
	if (iParam0 & 64 == 64 && func_572(iVar3))
	{
		return true;
	}
	return false;
}

bool func_364(bool bParam0)
{
	if (func_573(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_365(int iParam0)
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

bool func_366(int iParam0, bool bParam1, bool bParam2)
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
		if (func_574())
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
		iVar0 = func_575(&(Global_1898164->f_1[0]));
		if (func_576(iVar0) && func_577((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_578(&(Global_1898164->f_1[0])))
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

bool func_367(int iParam0)
{
	if (!func_276(iParam0))
	{
		return false;
	}
	if (func_579(64) && func_580(iParam0))
	{
		return true;
	}
	return (*Global_1310750)[iParam0]->f_46;
}

bool func_368(int iParam0, bool bParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_ped_injured(iParam0) || !bParam1)
		{
			iVar0 = get_interior_from_entity(iParam0);
			if (is_valid_interior(iVar0))
			{
				if (func_581(iVar0) || func_582(iVar0))
				{
					return false;
				}
				return true;
			}
		}
	}
	return false;
}

bool func_369()
{
	return Global_1894899 & 4 != 0;
}

int func_370()
{
	return Global_1894899->f_2;
}

int func_371(int iParam0)
{
	if (!func_112(iParam0))
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

bool func_372(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return false;
	}
	return true;
}

bool func_373(vector3 vParam0, int iParam3)
{
	if (!func_372(iParam3))
	{
		return false;
	}
	if (_does_volume_exist((*Global_1392194)[iParam3]->f_5))
	{
		return _0xf256a75210c5c0eb((*Global_1392194)[iParam3]->f_5, vParam0);
	}
	return false;
}

bool func_374(vector3 vParam0)
{
	if (func_34(vParam0))
	{
		return false;
	}
	fVar0 = func_282(func_360(), 6f, 22f);
	return _0x769bb7626b8cdb06(vParam0, fVar0, 1, 0, 16384);
}

bool func_375(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
						func_55(uParam0);
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
		func_55(uParam0);
		return true;
	}
	if (!bParam4)
	{
		if (!func_50(uParam0))
		{
			return false;
		}
		else if (is_scripted_speech_playing(Global_35) || is_any_speech_playing(Global_35))
		{
			return true;
		}
		if (!func_56(uParam0, fParam2))
		{
			return true;
		}
		if (func_50(uParam0))
		{
			func_57(uParam0);
		}
	}
	return false;
}

bool func_376(vector3 vParam0)
{
	return _0x769bb7626b8cdb06(vParam0, 0.5f, 0, 0, 16384);
}

void func_377(vector3 vParam0, int iParam3)
{
	if (func_34(vParam0))
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
			if (func_516(vVar2, vParam0, 2f, 1))
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

float func_378(int iParam0)
{
	if (!func_276(iParam0))
	{
		return 0f;
	}
	if (!func_583(iParam0))
	{
		return 0f;
	}
	return (*Global_1310750)[iParam0]->f_44;
}

char* func_379()
{
	return "unnamed";
}

char* func_380(int iParam0)
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

int func_381(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (!_does_volume_exist(iParam0))
	{
		return 0;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	vVar3 = { _0x3e2a25b2416dd67e(iParam0) };
	iVar6 = func_507(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

void func_382(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_383()
{
	iVar0 = func_584();
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

int func_384(int iParam0)
{
	if (func_161() != -1)
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
	fVar1 = func_282(absf(fVar1) < 1f, func_282(fVar1 < 0f, -1f, 1f), fVar1);
	return ceil(fVar1);
}

bool func_385(int iParam0)
{
	if (!func_585(iParam0))
	{
		return false;
	}
	return func_586(iParam0);
}

int func_386(int iParam0, int iParam1, int iParam2)
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

int func_387(int iParam0)
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

int func_388()
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

void func_389(int iParam0, bool bParam1, int iParam2)
{
	func_587((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_588(iParam0);
}

void func_390(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), false);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), true);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_589(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_391(bool bParam0)
{
	bVar3 = false;
	if (func_590(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_591(iVar5, &iVar2, &iVar0))
			{
				if (!func_592(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_593(iVar2);
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
							if (func_594(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_383() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_383() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_595();
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

struct<2> func_392(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

void func_393(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

char* func_394(int iParam0)
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

var func_395(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_596(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_396(int iParam0, int iParam1)
{
	if (!func_597(iParam0))
	{
		return 0;
	}
	if (!func_598())
	{
		return 0;
	}
	if (!func_599(iParam0, &iVar0, &iVar1))
	{
		return 0;
	}
	if (iVar0 == -816321659 && Global_1572887->f_12 != -1)
	{
		return 0;
	}
	chal_add_goal_progress_int(iVar0, iVar1, iParam1);
	return 1;
}

float func_397()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_398(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_399(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_400(var uParam0)
{
	return func_168(*uParam0, 2);
}

void func_401(int iParam0)
{
	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_600();
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
			func_601(&(Global_1935630->f_34), &(Global_1935630->f_39));
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

var func_402(int iParam0)
{
	return &(Global_1109400->f_276[iParam0]);
}

bool func_403(int iParam0)
{
	iVar0 = Global_1935630->f_40;
	if (func_161() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_602(iParam0);
		}
	}
	else if (!does_entity_exist(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_602(iParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_431(iVar0) == -1)
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

void func_404(int iParam0)
{
	if (*iParam0 & 8 != 0 || *iParam0 & 16 != 0)
	{
		func_603(iParam0);
	}
}

bool func_405(int iParam0, int iParam1, int iParam2)
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
		iVar1 = func_431(iParam2);
	}
	else
	{
		iVar1 = func_430(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_431(iParam0);
	}
	else
	{
		iVar0 = func_430(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_17(*iParam1, 8388608))
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

float func_406(int iParam0, int iParam1)
{
	return func_41(iParam0, iParam1, 1, 1);
}

float func_407(int iParam0)
{
	return iParam0->f_26;
}

bool func_408(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_409()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

bool func_410(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_41(iVar0, iParam0, 1, 1) <= 4f)
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
		if (_is_weapon_sniper(func_604(iVar0, 0)))
		{
			if (func_605(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_411(int iParam0)
{
	return iParam0->f_17;
}

bool func_412(int iParam0, int iParam1, float fParam2, float fParam3)
{
	if (iParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_17(*iParam0, 4194304))
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

int func_413(int iParam0)
{
	return iParam0->f_18;
}

bool func_414(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (_is_weapon_sniper(func_604(iVar0, 0)))
		{
			if (func_606(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_415(bool bParam0, bool bParam1, bool bParam2)
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

float func_416(int iParam0)
{
	return iParam0->f_23;
}

int func_417(int iParam0)
{
	return iParam0->f_21;
}

int func_418(int iParam0)
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

bool func_419(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_607(iParam0, vParam4, 0.5f))
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

int func_420(int iParam0)
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
	if (func_608(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_421(int iParam0)
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

bool func_422(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_365(iParam1))
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

bool func_423(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_365(iParam1))
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

bool func_424(int iParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = 40f;
	if (func_365(iParam1))
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

bool func_425(int iParam0, int iParam1)
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

bool func_426(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (func_609(iParam0, 1, 0, 0) != 2055893578)
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

bool func_427(int iParam0)
{
	return !*iParam0 & 2 != 0;
}

bool func_428(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_230(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_429(int iParam0)
{
	return iParam0->f_24;
}

int func_430(int iParam0)
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

int func_431(int iParam0)
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

int func_432(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_425(Global_35, &iVar1))
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
		fVar2 = func_41(iParam0, player_ped_id(), 0, 1);
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
		if (func_41(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

bool func_433(int iParam0, int iParam1, bool bParam2)
{
	func_573(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_434(iParam1, iVar0))
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
				if (!bParam2 || !func_434(iParam1, iVar1))
				{
					if (func_230(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_434(int iParam0, int iParam1)
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

int func_435(int iParam0)
{
	return iParam0->f_20;
}

int func_436(int iParam0, int iParam1, bool bParam2, float fParam3)
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

bool func_437(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

bool func_438(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

void func_439(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_440(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

bool func_441(int iParam0)
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

void func_442(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_441(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_610(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_611(iVar0);
	*uParam0 = 0;
}

float func_443(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return -1f;
	}
	return func_41(Global_35, iParam0, bParam1, bParam2);
}

bool func_444(int iParam0, int iParam1, float fParam2, bool bParam3)
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

int func_445(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_446()
{
	func_55(&uLocal_1282);
	func_53();
	func_9(&uLocal_1333, 3f);
	func_612(&(uLocal_1389[0]), 1142025875);
	_0x05d6195fb4d428f4(2147454193);
	iLocal_1091 = 1;
	if (iLocal_228 == 1)
	{
		set_anim_scene_bool(Local_220, "BOOL_STRUGGLE", false, false);
	}
	else if (iLocal_228 == 0)
	{
		set_anim_scene_bool(Local_220, "BOOL_SHOOT", false, false);
	}
	if (bVar1059)
	{
		return;
	}
	if (_is_anim_scene_started(Local_220, false))
	{
		if (iLocal_228 == 1)
		{
			if (_0x8d81e7824b7753f7(Local_220, "STRUGGLE_LOOP", 1) || _0x8d81e7824b7753f7(Local_220, "Shoot", 1))
			{
				bVar0 = true;
			}
		}
		else if (iLocal_228 == 0)
		{
			if (_0x8d81e7824b7753f7(Local_220, "SHOOT_LOOP", 1))
			{
				bVar0 = true;
			}
		}
		if (bVar0)
		{
			func_453();
		}
		else
		{
			func_55(&uLocal_1297);
		}
		iLocal_1411 = 7;
	}
	else
	{
		if (!is_ped_ragdoll(&(uLocal_1389[0])))
		{
			clear_ped_tasks(&(uLocal_1389[0]), 1, 0);
		}
		func_613(&(uLocal_1389[0]), Global_35, -1);
		iLocal_1411 = 8;
	}
	func_475();
	set_ped_config_flag(&(uLocal_1389[0]), 336, false);
	if (is_ped_on_mount(Global_35))
	{
		Local_229.f_184 = 2f;
		Local_229.f_185 = 2f;
	}
}

bool func_447(int iParam0, var uParam1, var uParam2, float fParam3, int iParam4)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if ((!is_entity_dead(uParam1[iVar0]) && iParam0 != uParam1[iVar0]) && iVar0 >= iParam4)
		{
			if (func_41(iParam0, uParam1[iVar0], 1, 1) < fParam3)
			{
				*uParam2 = iVar0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_448()
{
	iVar0 = 2;
	while (iVar0 <= 5)
	{
		if (func_40(&(uLocal_1389[iVar0]), 0, 1))
		{
			task_smart_flee_ped(&(uLocal_1389[iVar0]), Global_35, 1000f, -1, 4096, 3f, 0);
		}
		iVar0++;
	}
	iLocal_1051 = 1;
}

void func_449()
{
	iVar0 = 2;
	while (iVar0 <= 5)
	{
		func_64(uLocal_1396[iVar0]);
		iVar0++;
	}
}

bool func_450()
{
	if (iLocal_228 == 0)
	{
		if (_0x8d81e7824b7753f7(Local_220, "SHOOT_LOOP", 1))
		{
			return true;
		}
	}
	else if (iLocal_228 == 1)
	{
		if (_0x8d81e7824b7753f7(Local_220, "STRUGGLE_LOOP", 1) || _0x8d81e7824b7753f7(Local_220, "Shoot", 1))
		{
			return true;
		}
	}
	return false;
}

void func_451(var uParam0, int iParam1, vector3 vParam2, int iParam5)
{
	if (!uParam0->f_182)
	{
		if (!func_34(vParam2))
		{
			if (func_230(Global_35, vParam2, 1) < IntToFloat(iParam5))
			{
				func_614(uParam0, vParam2, 0);
			}
		}
		else if (does_entity_exist(iParam1))
		{
			if (func_41(Global_35, iParam1, 1, 1) < IntToFloat(iParam5))
			{
				func_615(uParam0, iParam1, 0);
			}
		}
		else if (!func_34(uParam0->f_51))
		{
			if (func_230(Global_35, uParam0->f_51, 1) < IntToFloat(iParam5))
			{
				func_614(uParam0, uParam0->f_51, 0);
			}
		}
		else
		{
			return;
		}
	}
}

void func_452(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_506(Global_1310750[iVar0], iParam0))
		{
			if (!func_498(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_616(iVar0) < func_617(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_550(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

bool func_453()
{
	if (iLocal_228 == 0)
	{
		if (!_0x1f0e401031e20146(Local_220, &(sLocal_516[1])))
		{
			if (_0x1f0e401031e20146(Local_220, &(sLocal_516[3])))
			{
				if (!bVar1070)
				{
					_set_anim_scene_playback_list_bool(Local_220, &(sLocal_516[5]), true);
					sLocal_1131 = "SIT_JUMP_B_MALE";
				}
				else if (_0x8d81e7824b7753f7(Local_220, "HANG_LOOP", 1))
				{
					_set_anim_scene_playback_list_bool(Local_220, &(sLocal_516[4]), true);
					sLocal_1131 = "THANKS_B_MALE";
				}
				else
				{
					return false;
				}
			}
		}
	}
	else if (iLocal_228 == 1)
	{
		if (!_0x1f0e401031e20146(Local_220, &(sLocal_516[2])))
		{
			if (has_ped_got_weapon(&(uLocal_1389[0]), -183018591, 0, false))
			{
				_hide_ped_weapons(&(uLocal_1389[0]), 2, true);
			}
			sLocal_1131 = "COWER_TO_THANKS_B_MALE";
			_set_anim_scene_playback_list_bool(Local_220, &(sLocal_516[7]), true);
		}
	}
	else if (!_0x1f0e401031e20146(Local_220, &(sLocal_516[4])))
	{
		_set_anim_scene_playback_list_bool(Local_220, &(sLocal_516[8]), true);
	}
	return true;
}

void func_454()
{
	func_160(&(uLocal_1389[0]), uLocal_1396[0], -89429847, 580546400, 0, "RE_INTER_STRANGER");
	set_blip_name_from_text_file(&(uLocal_1396[0]), "RE_INTER_STRANGER");
}

bool func_455()
{
	if (func_151(Global_35, &(uLocal_1389[0]), 0) > 3600f)
	{
		return true;
	}
	return false;
}

var func_456(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6, int iParam7)
{
	return create_scenario_point(iParam0, vParam1, iParam4, iParam5, iParam6, iParam7);
}

void func_457(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

int func_458(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	if (!is_entity_dead(*uParam0))
	{
		func_457(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !_does_volume_exist(iParam9)) || is_entity_in_volume(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (is_ambient_speech_playing(*uParam0) || is_scripted_speech_playing(*uParam0));
		fVar8 = func_282(fParam12 >= 0f, fParam12, vdist(Global_36, get_entity_coords(*uParam0, true, false)));
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
			func_55(&(iParam1->f_13));
		}
		if (func_618(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_619(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_458(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_620(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!get_ped_config_flag(*uParam0, 317, true))
						{
							func_621(*uParam0, 1, 1);
						}
					}
					else if (func_622(iParam1, 22))
					{
						func_621(*uParam0, 0, 1);
					}
				}
				if (func_623(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_624(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_625(iParam8);
					if (func_626(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (is_bit_set(uParam3[iParam1->f_1], 20))
								{
									func_627(uParam3);
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
					func_628(iParam1, uParam3, fVar8);
					if (func_629(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (is_bit_set(*iParam1, 1))
					{
						func_630(uParam3, 0, 0, 1, 1);
						clear_bit(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_631(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_623(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_632(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_626(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_624(uParam0, func_623(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_625(iParam8);
				}
				else if (is_bit_set(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_630(uParam3, 0, 0, 1, 1);
					}
					func_633(iParam1, 1);
				}
				func_628(iParam1, uParam3, fVar8);
				if (func_631(uParam0, iParam1, fParam4, bVar6))
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
			func_634(iParam1, uParam3);
			set_bit(iParam1, 3);
		}
	}
	return -1;
}

void func_459(int* iParam0, var uParam1, var uParam2)
{
	iVar0 = func_635(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (*uParam1)[iVar0]->f_13;
		iVar2 = (*uParam1)[iVar0]->f_15;
		if (!is_string_null_or_empty(sVar1))
		{
			func_65(Global_35, *uParam2, sVar1, "", -1082130432, iVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_460(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_161() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_461(int iParam0, bool bParam1)
{
	func_636(iParam0, &iVar0, &iVar1);
	if (!func_637(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_638(iVar0, iVar1);
}

bool func_462(int iParam0, int* iParam1, int iParam2, var uParam3, var uParam4)
{
	if (!func_40(iParam0, 0, 1))
	{
		return true;
	}
	else if (!func_40(iParam2, 0, 1))
	{
		return true;
	}
	switch (*uParam3)
	{
		case 0:
			uParam4->f_183 = func_41(iParam0, iParam2, 0, 1);
			task_look_at_entity(iParam0, iParam2, -1, 0, 51, 0);
			if (!(func_639(iParam0, uParam4->f_188, -1082130432, -1082130432, -1082130432) || func_41(iParam0, iParam2, 1, 1) < 2f) && !uParam4->f_79)
			{
				task_follow_to_offset_of_entity(iParam0, iParam2, 0f, 6f, 0.5f, uParam4->f_212, -1, 1036831949, 1, 1, 0, 0, 1);
			}
			else
			{
				task_turn_ped_to_face_entity(iParam0, iParam2, 0, -1f, -1f, -1082130432);
			}
			if (uParam4->f_180)
			{
				if (func_151(iParam0, iParam2, 1) >= 16f)
				{
					task_go_to_entity(iParam0, iParam2, 20000, 0.5f, uParam4->f_212, 2f, 0);
					func_55(&(uParam4->f_191));
				}
				else
				{
					uParam4->f_180 = 0;
					uParam4->f_79 = 1;
				}
			}
			*uParam3 = 1;
			break;
		case 1:
			if (func_41(iParam0, iParam2, 0, 1) > (uParam4->f_183 + uParam4->f_1))
			{
				task_smart_flee_ped(iParam0, iParam2, 1000f, -1, 0, 3f, 0);
				return true;
			}
			else if ((!uParam4->f_180 && (func_41(iParam0, iParam2, 1, 1) < uParam4->f_188 || uParam4->f_79)) || (uParam4->f_180 && (func_153(&(uParam4->f_191), uParam4->f_189) || func_151(iParam0, iParam2, 1) < 16f)))
			{
				if (((uParam4->f_180 || func_639(iParam0, uParam4->f_188, -1082130432, -1082130432, -1082130432)) || uParam4->f_77) || (uParam4->f_79 && (uParam4->f_77 || has_entity_clear_los_to_entity(iParam0, Global_35, 17))))
				{
					if (uParam4->f_80)
					{
						task_follow_and_converse_with_ped(iParam0, iParam2, &(uParam4->f_62), &(uParam4->f_66), uParam4->f_184, uParam4->f_185, 8, 0, 0, 1069547520, 1073741824);
					}
					else
					{
						func_640(iParam0, &(uParam4->f_181), -1, !uParam4->f_77);
					}
					*uParam3 = 2;
				}
			}
			break;
		case 2:
			if ((uParam4->f_76 || uParam4->f_79) || ((func_641(iParam0, iParam2, 0, uParam4->f_188, 0) && (uParam4->f_80 || func_640(iParam0, &(uParam4->f_181), -1, !uParam4->f_77))) || uParam4->f_180))
			{
				if (func_59(0, 1, iParam0, uParam4->f_182))
				{
					if (!is_string_null_or_empty(&(uParam4->f_2)))
					{
						if (uParam4->f_80 || uParam4->f_180)
						{
							task_play_anim(iParam0, &(uParam4->f_2), &(uParam4->f_10), 1.5f, -1.5f, -1, 24, 0f, false, 0, false, 0, false);
						}
						else
						{
							task_play_upper_anim_facing_entity(iParam0, &(uParam4->f_2), &(uParam4->f_10), iParam2, -1, 4f, -4f, 67108880, 0f, false, false, -1f, 0, 65536, -1f);
						}
					}
					*uParam4 = get_game_timer();
					if (uParam4->f_194)
					{
						MemCopy(&(uParam4->f_34), {uParam4->f_199}, 8);
					}
					func_642(uParam4->f_179, &(uParam4->f_81), iParam0, iParam2, &(uParam4->f_34), 0, 1116471296, 0, 0, 0, 1);
					func_643(uParam4);
					if (uParam4->f_194 && !is_string_null_or_empty(&(uParam4->f_204)))
					{
						*uParam3 = 4;
					}
					else if (!is_string_null_or_empty(&(uParam4->f_42)))
					{
						*uParam3 = 3;
					}
					else
					{
						*uParam3 = 5;
					}
				}
			}
			else if (!func_40(iParam0, 0, 1))
			{
				return true;
			}
			break;
		case 3:
			if (func_59(0, 1, iParam0, uParam4->f_182))
			{
				if (!is_string_null_or_empty(&(uParam4->f_2)))
				{
					if (uParam4->f_80)
					{
						task_play_anim(iParam0, &(uParam4->f_2), &(uParam4->f_10), 4f, -4f, -1, 24, 0f, false, 0, false, 0, false);
					}
					else if (!is_string_null_or_empty(&(uParam4->f_26)))
					{
						task_play_upper_anim_facing_entity(iParam0, &(uParam4->f_18), &(uParam4->f_26), iParam2, -1, 4f, -4f, 16, 0f, false, false, -1f, 0, 0, -1f);
					}
					else
					{
						task_play_upper_anim_facing_entity(iParam0, &(uParam4->f_2), &(uParam4->f_10), iParam2, -1, 4f, -4f, 16, 0f, false, false, -1f, 0, 0, -1f);
					}
				}
				func_642(uParam4->f_179, &(uParam4->f_81), iParam0, iParam2, &(uParam4->f_42), 0, 1116471296, 0, 0, 0, 1);
				*uParam3 = 5;
			}
			break;
		case 4:
			if (func_59(0, 1, iParam0, uParam4->f_182))
			{
				if (func_644(&(uParam4->f_203), &(uParam4->f_204), 0f, 0f, 0f, iParam0, 992265328, 10f, 0f, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1704213876, 0))
				{
					MemCopy(&(uParam4->f_54), {uParam4->f_195}, 8);
					*uParam3 = 5;
				}
				else if ((get_game_timer() - *uParam4) > 18000)
				{
					func_442(&(uParam4->f_203), 1, 1);
					uParam4->f_194 = 0;
					*uParam3 = 6;
				}
			}
			break;
		case 5:
			if ((func_59(uParam4->f_187, 1, iParam0, uParam4->f_182) && !is_ambient_speech_playing(iParam0)) && !is_scripted_speech_playing(iParam0))
			{
				if (!is_string_null(&(uParam4->f_54)))
				{
					*uParam4 = get_game_timer();
					func_642(uParam4->f_179, &(uParam4->f_81), iParam2, iParam0, &(uParam4->f_54), 0, 1116471296, 0, 0, 0, 1);
					*uParam3 = 6;
				}
				else
				{
					if (uParam4->f_75 != 0)
					{
						func_645(uParam4->f_75, 0, 1065353216, 1, 0, 0, 1, 752097756);
					}
					else if (uParam4->f_70 != 0)
					{
						func_646(uParam4->f_70, 0, 1065353216, 1, 0, 0, 0, -1);
					}
					*uParam3 = 6;
				}
			}
			break;
		case 6:
			if (func_59(0, 1, iParam0, uParam4->f_182) || (uParam4->f_190 > 0 && (get_game_timer() - *uParam4) > uParam4->f_190))
			{
				if (does_blip_exist(*iParam1))
				{
					remove_blip(iParam1);
				}
				if (uParam4->f_78)
				{
					task_wander_standard(iParam0, 40000f, 0);
				}
				if (!is_string_null_or_empty(&(uParam4->f_208)))
				{
					func_647(&(uParam4->f_208), 10000, 0, 0, 0, 1);
				}
				*uParam3 = 7;
				return true;
			}
			break;
		case 7:
			return true;
	}
	if (has_entity_been_damaged_by_entity(iParam0, Global_35, 1, 1))
	{
		task_smart_flee_ped(iParam0, Global_35, 1000f, -1, 0, 3f, 0);
		return true;
	}
	return false;
}

void func_463(int* iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = sParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = iParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_441(iParam0->f_6))
		{
			if (is_bit_set(*iParam0, 1))
			{
				func_648(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_649(iParam0->f_6, iParam0->f_5, 0);
			}
			func_650(iParam0->f_6, 0, 1);
		}
		else
		{
			set_bit(iParam0, 14);
		}
		set_bit(iParam0, 0);
	}
	else
	{
		func_651(iParam0, iParam0->f_5);
		if (!is_bit_set(*iParam0, 13))
		{
			set_bit(iParam0, 0);
		}
	}
	set_bit(iParam0, 15);
}

char* func_464(int iParam0)
{
	if (func_652(iParam0))
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

void func_465(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_466((*uParam0)[iVar0], bParam1);
		iVar0++;
	}
}

void func_466(int* iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_438(iParam0, 4))
		{
			func_442(&(iParam0->f_6), 1, 1);
			func_439(iParam0, 4);
		}
	}
	else if (func_438(iParam0, 4))
	{
		func_440(iParam0, 4);
		func_439(iParam0, 14);
	}
}

int func_467(int iParam0)
{
	iParam0 = func_272(iParam0);
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

int func_468(int iParam0)
{
	iParam0 = func_272(iParam0);
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

float func_469(int iParam0)
{
	iParam0 = func_272(iParam0);
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

float func_470(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

void func_471(int iParam0, int iParam1)
{
	iParam0 = func_272(iParam0);
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

void func_472(char* sParam0)
{
	func_65(&(uLocal_1389[0]), Global_35, sParam0, 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	uLocal_1405 = &uLocal_1389[0];
	func_55(&uLocal_1124);
	iLocal_1100 = 1;
}

void func_473()
{
	func_475();
	iLocal_1095 = 1;
	iLocal_1411 = 15;
}

void func_474()
{
	if (!does_blip_exist(iVar1401) || !is_ped_on_mount(Global_35))
	{
		return;
	}
	if (iVar1047 <= 0)
	{
		if (get_gps_blip_route_length() > 0)
		{
			iLocal_1049 = get_gps_blip_route_length();
		}
		fLocal_1134 = func_653(vLocal_550, 1);
		return;
	}
	if (func_56(&uLocal_1127, 3f) || !func_50(&uLocal_1127))
	{
		if (get_gps_blip_route_length() < iVar1047)
		{
			iLocal_1101 = 0;
			iLocal_1049 = get_gps_blip_route_length();
			func_57(&uLocal_1112);
			func_55(&uLocal_1127);
		}
		else if (func_653(vLocal_550, 1) < (fVar1132 - 10f))
		{
			iLocal_1101 = 0;
			fLocal_1134 = func_653(vLocal_550, 1);
			func_57(&uLocal_1112);
			func_55(&uLocal_1127);
		}
	}
	if (!func_50(&uLocal_1112))
	{
		if (func_59(0, 1, &(uLocal_1389[0]), 1) && func_59(0, 1, Global_35, 1))
		{
			if (get_gps_blip_route_length() > (iVar1047 + func_445(bVar1099, 3, 20)) && func_653(vLocal_550, 1) > (fVar1132 + func_282(bVar1099, 3f, 20f)))
			{
				iLocal_1101 = 1;
				if (iVar1101 < 2)
				{
					func_472(&(sLocal_449[61]));
					iLocal_1049 = get_gps_blip_route_length();
					fLocal_1134 = func_653(vLocal_550, 1);
					uLocal_1103 = iVar1101 + 1;
				}
				else
				{
					func_473();
				}
				func_55(&uLocal_1112);
			}
		}
	}
	else if (func_56(&uLocal_1112, 8f))
	{
		iLocal_1049 = get_gps_blip_route_length();
		fLocal_1134 = func_653(vLocal_550, 1);
		func_57(&uLocal_1112);
	}
}

void func_475()
{
	func_463(Local_987[0], "RE_INTER_POS", &(sLocal_449[47]), -163964935, 0, 0, 0, 1, 0);
	func_463(Local_987[1], "RE_INTER_ANTAGONIZE", &(sLocal_449[48]), 648122183, 0, 0, 0, 1, 0);
	func_463(Local_987[2], "RE_INTER_ANTAGONIZE", 0, -1616532217, 0, 0, 0, 1, 0);
	func_465(&Local_987, 0);
	func_61(&Local_987, 0, 0);
	func_466(Local_987[2], 1);
	func_439(Local_987[0], 8);
	func_439(Local_987[1], 8);
}

float func_476(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!is_entity_dead(iParam0))
	{
		vVar0 = { get_entity_coords(iParam0, true, false) };
	}
	else
	{
		vVar0 = { get_entity_coords(iParam0, false, false) };
	}
	if (bParam4)
	{
		return vdist2(vVar0, vParam1);
	}
	return func_266(vVar0, vParam1);
}

bool func_477()
{
	return func_584() > 0;
}

bool func_478(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return false;
	}
	if (does_entity_exist(Global_35))
	{
		if (!is_entity_dead(Global_35) && !is_ped_injured(Global_35))
		{
			if (_get_rider_of_mount(iParam0, false) == Global_35)
			{
				disable_control_action(0, 308778731, false);
				disable_control_action(0, 1002303471, false);
				disable_control_action(0, 1520437207, false);
			}
		}
	}
	set_ped_max_move_blend_ratio(iParam0, 0f);
	if (func_90(iParam0, 1041577989))
	{
		return false;
	}
	if (is_move_blend_ratio_still(get_ped_desired_move_blend_ratio(iParam0)))
	{
		return true;
	}
	return false;
}

bool func_479(int iParam0, vector3 vParam1)
{
	vVar0 = { get_entity_coords(iParam0, true, false) };
	vVar3 = { vVar0 + get_entity_forward_vector(iParam0) };
	return func_654(vVar0, vVar3, vParam1);
}

bool func_480(int iParam0, int iParam1)
{
	if (!func_90(iParam0, 1041577989))
	{
		return true;
	}
	fVar0 = _0xa710dc5d25f8b942(iParam0, 1041577989);
	if (func_157(iParam1, 32))
	{
		if (fVar0 >= 1.85f)
		{
			return true;
		}
		return false;
	}
	if (func_157(iParam1, 256))
	{
		if (fVar0 >= 1f)
		{
			return true;
		}
		return false;
	}
	if (func_157(iParam1, 2048))
	{
		if (fVar0 >= 1.5f)
		{
			return true;
		}
		return false;
	}
	return true;
}

void func_481(int iParam0, int iParam1)
{
	func_655(iParam0, iParam1);
}

bool func_482(int iParam0)
{
	if (func_656(iParam0))
	{
		iVar0 = _0x59fa676177dbe4c9(iParam0);
		return ((((iVar0 == 4 || iVar0 == 0) || iVar0 == 3) || iVar0 == 5) || iVar0 == 2);
	}
	return false;
}

void func_483(var uParam0, var uParam1, int* iParam2, var uParam3, int iParam4)
{
	func_657(uParam0, iParam2, uParam3, 1, 1);
	func_658(*uParam0, uParam1, iParam4);
}

bool func_484(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_485(int iParam0, int iParam1)
{
	if (!func_484(iParam0))
	{
		return false;
	}
	return (Global_1395482->f_2[iParam0] && iParam1) != 0;
}

int func_486(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_5;
}

int func_487(int iParam0, int iParam1)
{
	if (!func_276(iParam0))
	{
		return -1;
	}
	return (iParam0 + (120 * iParam1));
}

void func_488(int iParam0)
{
	if (is_player_dead(player_id()))
	{
		return;
	}
	iVar0 = func_114(iParam0);
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
	if (func_273(iParam0, 64))
	{
		func_489(iParam0);
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
	bVar3 = func_385(42);
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
				func_659(&((*Global_1900383)[iParam0]->f_27));
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
		func_489(iParam0);
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
		if (func_468(1) < 1)
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
		func_660(&((*Global_1900383)[iParam0]->f_26), bVar6);
	}
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_273(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = is_ped_in_writhe(iVar0);
	bVar10 = false;
	iVar11 = func_661(iParam0);
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
	fVar15 = func_662(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_248(iParam0))
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
		func_663((*Global_1900383)[iParam0]->f_26);
		func_664((*Global_1900383)[iParam0]->f_26);
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
	if (func_665(iVar0) && !bVar9)
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
	iVar21 = func_468(iParam0);
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

void func_489(int iParam0)
{
	iParam0 = func_272(iParam0);
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

int func_490(int iParam0, float fParam1, bool bParam2, bool bParam3)
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

int func_491(int iParam0)
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

void func_492(int* iParam0)
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

void func_493(int iParam0)
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

void func_494(var uParam0)
{
	if (func_441(uParam0->f_162))
	{
		func_442(&(uParam0->f_162), 1, 1);
	}
	if (func_441(uParam0->f_163))
	{
		func_442(&(uParam0->f_163), 1, 1);
	}
	if (func_441(uParam0->f_164))
	{
		func_442(&(uParam0->f_164), 1, 1);
	}
	if (func_441(uParam0->f_165))
	{
		func_442(&(uParam0->f_165), 1, 1);
	}
}

void func_495(var uParam0)
{
	if (uParam0->f_170)
	{
		func_666();
	}
}

void func_496(var uParam0)
{
	if (uParam0->f_48 && !uParam0->f_45)
	{
		func_667(32);
		func_499(uParam0->f_3, 1, 0, 0, 2, 0, 0, 1);
	}
}

bool func_497(var uParam0)
{
	if (func_668(uParam0) || uParam0->f_44)
	{
		uParam0->f_44 = 1;
		func_669(uParam0->f_3);
		func_354(uParam0, 0, 1);
		func_670(uParam0->f_3, uParam0->f_51.f_5, 0, uParam0->f_43, -1);
		func_671(0, 0);
		return true;
	}
	return false;
}

bool func_498(int iParam0)
{
	if (!func_276(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0]->f_4 > 0;
}

void func_499(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_486(iParam0) == 1 && bParam7)
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
	if ((bParam1 || bParam6) || func_161() != -1)
	{
		Global_17504.f_42[iParam0]->f_4 = 0;
	}
	Global_17504.f_42[iParam0]->f_4 = (Global_17504.f_42[iParam0]->f_4 + iVar0);
}

void func_500(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

int func_501(int iParam0)
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

int func_502(int iParam0)
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

bool func_503(int iParam0, int iParam1, var uParam2)
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

Vector3 func_504(int iParam0, var uParam1)
{
	iVar1 = -1;
	if (does_entity_exist(iParam0))
	{
		vVar2 = { get_entity_coords(iParam0, true, false) };
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!func_34(*(*uParam1)[iVar0]))
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

void func_505(var uParam0, bool bParam1)
{
	if (!does_blip_exist(uParam0->f_6))
	{
		uParam0->f_6 = _blip_add_for_coord(-1702907713, *uParam0);
		_blip_set_modifier(uParam0->f_6, 580546400);
		set_blip_name_from_text_file(uParam0->f_6, "BLIP_DEBUG");
		if (bParam1)
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_79("BEAT_GLB", 5500, 0, 1, 0, 0, -1, -1, 0);
		}
		_0x9851de7aec10b4e1(*uParam0, 100f, 1, 0);
	}
}

bool func_506(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_507(vector3 vParam0, float fParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, float fParam9)
{
	if (!bParam8 && network_is_game_in_progress())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_34(vParam0))
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
		if (func_376(vParam0))
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
	func_672(iVar0, bParam8);
	return iVar0;
}

void func_508(int iParam0)
{
	if (!func_276(iParam0))
	{
		return;
	}
	func_673(iParam0);
}

void func_509(var uParam0, vector3 vParam1)
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

int func_510(int iParam0)
{
	if (func_144(iParam0, 2))
	{
		return 200;
	}
	if (func_144(iParam0, 4))
	{
		return 70;
	}
	if (func_144(iParam0, 32))
	{
		return 400;
	}
	return 110;
}

int func_511(int iParam0)
{
	if (func_98(iParam0, 131072))
	{
		return 0;
	}
	else
	{
		if (iParam0 == 6)
		{
			if (func_318() == 8)
			{
				return 3;
			}
		}
		bVar0 = func_98(iParam0, 2);
		bVar1 = func_98(iParam0, 1);
		bVar2 = (bVar0 && bVar1);
		if (bVar2)
		{
			if (!func_360())
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

void func_512(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
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
	if (func_144(iParam3, 2097152))
	{
		*fParam0 = (*fParam0 + 15f);
		*iParam2 = ceil((*fParam0 + 50f));
	}
	else
	{
		*iParam2 = 70;
	}
}

void func_513(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
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
	if (func_144(iParam3, 2))
	{
		*fParam0 = (*fParam0 + 60f);
		*fParam1 = (*fParam1 + 60f);
		*iParam2 = ceil((*fParam0 + 110f));
	}
	else if (func_144(iParam3, 2097152))
	{
		*fParam0 = (*fParam0 + 30f);
		*iParam2 = ceil((*fParam0 + 30f));
	}
	else
	{
		*iParam2 = 70;
	}
}

bool func_514(int iParam0, int iParam1)
{
	iVar0 = (func_502(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_17504.f_12[iVar1]), iVar2);
}

bool func_515(int iParam0, vector3 vParam1, float fParam4, float fParam5)
{
	if (func_34(vParam1))
	{
		return false;
	}
	if (func_520(iParam0, vParam1))
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
	if (func_265(iParam0))
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

bool func_516(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_517(int iParam0, vector3 vParam1, int iParam4, float fParam5, bool bParam6, int iParam7)
{
	fVar0 = func_282(bParam6, iParam7, vdist(vParam1, get_entity_coords(iParam0, true, false)));
	if (!iParam4->f_1)
	{
		if (fVar0 < iParam4->f_2 || (func_523(vParam1, iParam0) && get_entity_speed(iParam0) > fParam5))
		{
			*iParam4 = func_169();
			iParam4->f_2 = func_230(iParam0, vParam1, 1);
			iParam4->f_1 = 1;
		}
	}
	else if (fVar0 > iParam4->f_2 || (!func_523(vParam1, iParam0) && get_entity_speed(iParam0) > fParam5))
	{
		*iParam4 = func_169();
		iParam4->f_2 = func_230(iParam0, vParam1, 1);
		iParam4->f_1 = 0;
	}
}

bool func_518(var uParam0, int iParam1)
{
	if (uParam0->f_1 == 1)
	{
		return (func_169() - *uParam0) >= iParam1;
	}
	return false;
}

int func_519(var uParam0)
{
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_34(*uParam0->f_12[iVar0]))
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

bool func_520(int iParam0, vector3 vParam1)
{
	if (!func_98(iParam0, 1))
	{
		iVar0 = 1;
	}
	if (func_674(vParam1, 0, 0, iVar0))
	{
		return true;
	}
	if (func_98(iParam0, 33554432))
	{
		if (func_675(vParam1, 200f, 1, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_521(int iParam0, var uParam1)
{
	iVar0 = 1;
	if (func_144(iParam0, 128))
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
	if (func_98(iParam0, 1) && !func_98(iParam0, 2))
	{
		if (func_98(iParam0, 4096) || func_98(iParam0, 2048))
		{
			if (func_676(*uParam1))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

bool func_522(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	uVar0 = func_1(&uParam0);
	if (!func_677())
	{
		return false;
	}
	return true;
}

bool func_523(vector3 vParam0, int iParam3)
{
	if (is_entity_dead(iParam3))
	{
		return false;
	}
	vVar0 = { get_entity_forward_vector(iParam3) };
	return func_678(vVar0, vParam0) > func_678(vVar0, get_entity_coords(iParam3, true, false));
}

bool func_524(int iParam0)
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

int func_525(int iParam0)
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

int func_526(int iParam0)
{
	if (!func_578(iParam0))
	{
		return -1;
	}
	return func_679(iParam0);
}

int func_527(int iParam0)
{
	iVar1 = iParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_655(&iVar1, -2147483648);
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

int func_528()
{
	return get_player_group(get_player_index());
}

bool func_529(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_161() != -1)
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

int func_530()
{
	return &Global_1899515;
}

int func_531(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

bool func_532(int iParam0)
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

bool func_533(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_534(int iParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, bParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_680(iVar0, iParam0, bParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

int func_535(var uParam0, var uParam1)
{
	vVar0 = { *uParam0 };
	if (func_334(&uParam1))
	{
		return 1;
	}
	if (!func_335(&vVar0, 1, 10, 0))
	{
		return 0;
	}
	*uParam0 = { vVar0 };
	return 1;
}

bool func_536(int iParam0)
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

bool func_537(var uParam0)
{
	return func_157(*uParam0, 4);
}

bool func_538(var uParam0)
{
	return func_157(*uParam0, 64);
}

bool func_539(var uParam0)
{
	return func_157(*uParam0, 8);
}

bool func_540(var uParam0)
{
	return func_157(*uParam0, 128);
}

bool func_541(var uParam0)
{
	return func_157(*uParam0, 256);
}

void func_542(int iParam0, bool bParam1)
{
	set_ped_config_flag(iParam0, 146, !bParam1);
	set_ped_config_flag(iParam0, 148, !bParam1);
}

bool func_543(var uParam0)
{
	return func_157(*uParam0, 512);
}

bool func_544(var uParam0)
{
	return func_157(*uParam0, 1024);
}

bool func_545(var uParam0)
{
	return func_157(*uParam0, 2048);
}

void func_546(int iParam0, bool bParam1)
{
	set_ped_config_flag(iParam0, 130, !bParam1);
	set_ped_config_flag(iParam0, 178, bParam1);
}

int func_547(int iParam0)
{
	if (iParam0 == -1)
	{
		iVar0 = func_681(1);
	}
	else
	{
		iVar0 = func_682(iParam0);
	}
	return iVar0;
}

void func_548(int iParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		iVar0 = func_683(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_684(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2] = &Global_17504.f_2205[iVar2] + 1;
	}
}

void func_549(int iParam0, int iParam1)
{
	if (iParam1 != -1 && !func_144(iParam0, 8192))
	{
		iVar0 = func_684(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0] = &Global_17504.f_2205[iVar0] + 1;
	}
}

void func_550(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	func_499(iParam0, bParam3, round((fVar0 * fParam2)), round((fVar1 * fParam2)), round((fVar2 * fParam2)), round((fVar3 * fParam2)), bParam4, 1);
}

void func_551(int iParam0, bool bParam1)
{
	iVar0 = 1;
	if (bParam1)
	{
		iVar0 = 3;
	}
	if (func_98(iParam0, 262144))
	{
		if (Global_1392135->f_3 == -1)
		{
			func_452(262144, iVar0, 0, 1);
		}
	}
	if (func_98(iParam0, 128))
	{
		func_452(128, iVar0, 0, 1);
	}
	else if (func_98(iParam0, 524288))
	{
		func_452(524288, iVar0, 0, 1);
	}
	else if (func_98(iParam0, 536870912))
	{
		func_452(536870912, iVar0, 0, 1);
	}
	else if (func_98(iParam0, 4194304))
	{
		func_452(4194304, iVar0, 0, 1);
	}
	else if (func_98(iParam0, 8388608))
	{
		func_452(8388608, iVar0, 0, 1);
	}
}

void func_552(int iParam0)
{
	Global_1310750->f_16077 = get_id_of_this_thread();
	Global_1310750->f_16071 = iParam0;
}

int func_553(bool bParam0)
{
	if (!bParam0 && func_685(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

int func_554()
{
	return Global_1310750->f_16037;
}

bool func_555(int iParam0)
{
	if (!func_276(iParam0))
	{
		return false;
	}
	return (*Global_1310750)[iParam0]->f_47;
}

void func_556(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_276(&(Global_1310750->f_13321[iParam0])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0];
	force_cleanup_for_thread_with_this_id(Global_1310750->f_13321[iParam0]->f_5, 523);
	(*Global_1310750)[iVar0]->f_48 = 0;
	func_686(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_557(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_687(Global_1393447, 1);
	func_688();
	func_689();
	func_690((to_float(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135->f_54 = (func_169() / 1000);
		if (Global_1392135->f_1 & 4 != 0)
		{
			Global_1392135->f_1 = (Global_1392135->f_1 - Global_1392135->f_1 & 4);
		}
		func_691();
		if (iParam1 == -1)
		{
			if (func_17(iParam0, 1))
			{
				func_452(16777216, 2, 0, 1);
				iVar0 = floor(240f);
			}
			else if (func_17(iParam0, 2))
			{
				func_452(16777216, 0, 0, 1);
				iVar0 = floor(60f);
			}
			else if (func_17(iParam0, 4))
			{
				func_452(16777216, 5, 0, 1);
				iVar0 = floor(900f);
			}
			Global_1392135->f_4 = (Global_1392135->f_54 + iVar0);
		}
		else
		{
			func_692(iParam1, iParam2, iParam3, iParam4);
			Global_1392135->f_5[iParam1] = (((Global_1392135->f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_693(to_float(iVar0), 1, 0);
	}
	else
	{
		func_693((to_float(200) / 3f), 1, 0);
	}
}

bool func_558(int iParam0, int iParam1)
{
	return (Global_40.f_9571[iParam1] && iParam0) != 0;
}

void func_559(int iParam0, int iParam1)
{
	(*Global_1392050)[iParam1]->f_1 = ((*Global_1392050)[iParam1]->f_1 - ((*Global_1392050)[iParam1]->f_1 && iParam0));
}

void func_560(int iParam0, int iParam1)
{
	Global_40.f_9571[iParam1] = (Global_40.f_9571[iParam1] || iParam0);
}

int func_561(int iParam0)
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

bool func_562(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_563()
{
	return (Global_1935630->f_44 == -160924582 && is_first_person_aim_cam_active());
}

bool func_564(var uParam0, float fParam1, float fParam2, int iParam3)
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

bool func_565(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_564(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (func_397() - 0.02f);
		}
		return true;
	}
	uParam0->f_8 = 0f;
	return false;
}

bool func_566(int iParam0)
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

bool func_567(int iParam0)
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

bool func_568(int iParam0)
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

bool func_569(int iParam0)
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

bool func_570(int iParam0)
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

bool func_571(int iParam0)
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

bool func_572(int iParam0)
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

bool func_573(bool bParam0, int iParam1, int iParam2)
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

bool func_574()
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

int func_575(int iParam0)
{
	if (!func_578(iParam0))
	{
		return -1;
	}
	return func_695(func_694(iParam0));
}

bool func_576(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_577(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_578(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_579(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_580(int iParam0)
{
	return func_98(iParam0, Global_1310750->f_16072 | 64);
}

int func_581(int iParam0)
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

int func_582(int iParam0)
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

bool func_583(int iParam0)
{
	return ((Global_1310750[iParam0] != 0 && !is_string_null_or_empty(&((*Global_1310750)[iParam0]->f_40))) && get_length_of_literal_string(&((*Global_1310750)[iParam0]->f_40)) != 0);
}

int func_584()
{
	return Global_40.f_11095.f_35;
}

bool func_585(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_586(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_587(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_696(bParam1);
	}
}

void func_588(int iParam0)
{
	_0x74bcceb233ad95b2(-156028329, iParam0);
}

char* func_589(int iParam0)
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

bool func_590(int iParam0)
{
	if (!func_697(23, &vVar0))
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

bool func_591(int iParam0, int iParam1, int iParam2)
{
	if (!func_697(23, &Var0))
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

bool func_592(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_593(int iParam0)
{
	return iParam0;
}

int func_594(int iParam0)
{
	if (!func_592(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_595()
{
	iVar0 = func_383();
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

void func_596(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

bool func_597(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_598()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_599(int iParam0, int iParam1, var uParam2)
{
	if (!func_597(iParam0))
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

bool func_600()
{
	if (func_698())
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

void func_601(var uParam0, var uParam1)
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

int func_602(int iParam0)
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

void func_603(int iParam0)
{
	if (Global_1935630->f_38 == 0)
	{
		func_71(iParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1935630->f_34[iVar0])))
				{
					func_72(iParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_604(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_605(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_606(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_606(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_607(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_608(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_609(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_610(int iParam0)
{
	return iParam0;
}

void func_611(int iParam0)
{
	if (!func_699(iParam0))
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

void func_612(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (decor_exist_on(iParam0, "honor_block"))
		{
			iVar0 = decor_get_int(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_162(iParam1));
		decor_set_int(iParam0, "honor_block", iVar0);
	}
}

int func_613(int iParam0, int iParam1, int iParam2)
{
	task_turn_ped_to_face_entity(iParam0, iParam1, iParam2, 3f, 0.25f, -1082130432);
	return 1;
}

void func_614(var uParam0, vector3 vParam1, int iParam4)
{
	if (!uParam0->f_182 || iParam4 == 1)
	{
		uParam0->f_183 = _blip_add_for_coord(1260140857, vParam1);
		uParam0->f_182 = 1;
	}
}

void func_615(var uParam0, int iParam1, int iParam2)
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

int func_616(int iParam0)
{
	if (func_276(iParam0))
	{
		return Global_17504.f_42[iParam0]->f_4;
	}
	return 0;
}

int func_617(int iParam0)
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

bool func_618(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_700(iParam0, iParam1))
		{
			if (!func_17(iParam1->f_10, 1))
			{
				set_ped_config_flag(iParam0, 130, false);
				set_ped_config_flag(iParam0, 315, false);
				set_ped_config_flag(iParam0, 297, false);
				set_ped_config_flag(iParam0, 178, true);
				func_630(uParam2, 0, 0, 1, 0);
				func_72(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_17(iParam1->f_10, 1))
		{
			func_701(uParam2);
			set_ped_config_flag(iParam0, 130, true);
			set_ped_config_flag(iParam0, 315, true);
			set_ped_config_flag(iParam0, 297, true);
			set_ped_config_flag(iParam0, 178, false);
			func_71(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_619(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		bVar4 = func_17(iParam4, 32);
		func_702(iParam1, uParam2, 0);
		iVar5 = func_703(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			set_ped_config_flag(*uParam0, 178, false);
			return true;
		}
		func_630(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_17(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_17(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_17(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_17(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_17(iParam4, 8388608) || func_17(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_17(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_17(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_622(iParam1, 4))
		{
			iVar6 |= 1024;
			_0xbb1e41dd3d3c6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_622(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_17(iParam4, 67108864))
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
				iParam6 = func_704(uParam0);
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
			if (func_17(iParam4, 268435456))
			{
				iVar8 = func_705(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_706(iParam1, (*uParam2)[iVar8]);
				}
			}
			if (func_622(iParam1, 23))
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
			if (func_17(iParam4, 2) || func_17(iParam4, 16))
			{
				func_621(*uParam0, 1, 1);
			}
			else
			{
				func_621(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_620(var uParam0)
{
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		set_ped_config_flag(*uParam0, 297, false);
	}
}

void func_621(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !is_entity_dead(iParam0))
	{
		set_ped_config_flag(iParam0, 317, bParam1);
	}
}

bool func_622(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

bool func_623(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_707(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_624(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_708(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_17(iParam10, 32), 1, 0);
			set_bit(iParam2, 1);
		}
	}
	else if (is_bit_set(*iParam2, 1))
	{
		clear_bit(iParam2, 1);
	}
}

void func_625(int iParam0)
{
	if (func_17(iParam0, 4))
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
	if (func_17(iParam0, 16384))
	{
		disable_control_action(0, -485697785, false);
	}
	if (func_17(iParam0, 8))
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
	}
}

bool func_626(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	iVar1 = func_709(1);
	bVar2 = is_bit_set(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = is_ped_on_foot(Global_35);
	bVar10 = is_ped_injured(*uParam0);
	bVar11 = (((_is_ped_carrying(Global_35) || func_710(Global_35)) || func_711(Global_35)) || func_712(Global_35));
	fVar12 = -1f;
	if (func_50(&(iParam1->f_13)))
	{
		fVar12 = func_172(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((*uParam4)[iVar0]->f_8 != iParam12)
		{
			iParam12 = (*uParam4)[iVar0]->f_8;
		}
		bVar4 = func_441((*uParam4)[iVar0]->f_6);
		func_713(*uParam0, (*uParam4)[iVar0], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (is_bit_set(uParam4[iVar0], 20))
		{
			bVar3 = true;
		}
		if (func_714(*uParam0, iParam1, (*uParam4)[iVar0], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_715(iParam12, (*uParam4)[iVar0]->f_6))
				{
					if (!bVar7)
					{
						func_630(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_61(uParam4, 0, 0);
					}
					if (is_bit_set(uParam4[iVar0], 11))
					{
						func_702(iParam1, uParam4, is_bit_set(*iParam1, 6));
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
					if (func_716(iParam1, fParam6, iParam1->f_9))
					{
						func_55(&(iParam1->f_18));
						if (bVar6)
						{
							func_61(uParam4, 0, 0);
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
		func_717(iParam1, fParam2);
	}
	return bVar5;
}

void func_627(var uParam0)
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

void func_628(int* iParam0, var uParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_718((*uParam1)[iVar0]))
		{
			if (is_bit_set(uParam1[iVar0], 20))
			{
				func_717(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_629(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!is_control_pressed(0, -124244224))
		{
			if (func_719(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_720(iParam1, 0);
				func_702(iParam1, uParam2, func_622(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

void func_630(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_441((*uParam0)[iVar0]->f_6))
			{
				if (!bParam4 && is_bit_set(uParam0[iVar0], 11))
				{
				}
				else
				{
					func_442(&((*uParam0)[iVar0]->f_6), 1, 1);
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

bool func_631(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_55(&(iParam1->f_18));
			return false;
		}
		else if (func_50(&(iParam1->f_18)))
		{
			func_57(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_50(&(iParam1->f_18)))
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
	return func_153(&(iParam1->f_18), fParam2);
	return true;
}

void func_632(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_713(iParam0, (*uParam2)[iVar0], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_633(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

void func_634(int* iParam0, var uParam1)
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
	func_702(iParam0, uParam1, 1);
	func_630(uParam1, 0, 1, 1, 0);
	_copy_memory(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		_copy_memory((*uParam1)[iVar0], &Var22, 17);
		iVar0++;
	}
}

int func_635(int* iParam0)
{
	if (func_622(iParam0, 0))
	{
		if (func_721(iParam0))
		{
			func_633(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

void func_636(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_637(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_722(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_723(iParam0))
	{
		return false;
	}
	if (func_724(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_725(iParam0, 1)) || func_726(32768))
	{
		if (!func_725(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_727())
	{
		return false;
	}
	return true;
}

void func_638(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_639(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_230(iParam0, Global_36, 1);
	}
	if (fParam2 > 0f)
	{
		if (fVar0 < fParam2)
		{
			return true;
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
					return true;
				}
			}
			else if (is_tracked_ped_visible(iParam0))
			{
				return true;
			}
		}
		else if (!is_entity_occluded(iParam0))
		{
			if (is_entity_on_screen(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

int func_640(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	if (!*uParam1)
	{
		open_sequence_task(&iVar0);
		task_turn_ped_to_face_entity(0, Global_35, 0, 3f, 0.55f, -1082130432);
		task_turn_ped_to_face_entity(0, Global_35, iParam2, 2f, 0.2f, -1082130432);
		close_sequence_task(iVar0);
		if (bParam3)
		{
			_task_perform_sequence_2(iParam0, iVar0, 1f, 1.5f);
		}
		else
		{
			task_perform_sequence(iParam0, iVar0);
		}
		clear_sequence_task(&iVar0);
		*uParam1 = 1;
	}
	if ((get_script_task_status(iParam0, 242628503, true) == 1 && get_sequence_progress(iParam0) == 1) || get_script_task_status(iParam0, 242628503, true) != 1)
	{
		return 1;
	}
	return 0;
}

bool func_641(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_728(iParam0, iParam1, 0f))
		{
			return false;
		}
	}
	if (!func_729(iParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (bParam4 && is_entity_a_ped(iParam1))
	{
		return _0x9d9473cb82d83a30(iParam0, get_ped_index_from_entity_index(iParam1), 0) == 1;
	}
	return _0x7f9b9791d4cb71f6(iParam0, iParam1, bParam2, 0) == 1;
}

bool func_642(bool bParam0, var uParam1, int iParam2, int iParam3, char* sParam4, int iParam5, float fParam6, int iParam7, bool bParam8, bool bParam9, int iParam10)
{
	if (bParam0)
	{
		return func_730(uParam1, sParam4, iParam2, iParam3, iParam7, bParam9, 1, 1);
	}
	return func_65(iParam2, iParam3, sParam4, iParam5, fParam6, iParam7, bParam8, bParam9, iParam10, 0, 1, 1744022339, 1, 0, 0);
}

void func_643(var uParam0)
{
	if (uParam0->f_75 != 0)
	{
		func_645(uParam0->f_75, 0, 1065353216, 1, 0, 0, 1, 752097756);
	}
	else if (uParam0->f_70 != 0)
	{
		func_646(uParam0->f_70, 0, 1065353216, 1, 0, 0, 0, -1);
	}
	if (func_592(uParam0->f_74, 0))
	{
		func_731(uParam0->f_74, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	}
	if (uParam0->f_72 != 0)
	{
		if (uParam0->f_71)
		{
			iVar0 = (func_732() + uParam0->f_72);
			func_733(iVar0);
		}
		else
		{
			func_734(uParam0->f_72, 1);
		}
	}
	if (uParam0->f_73 != 9)
	{
		func_44(uParam0->f_73, 0, 0, 0, 0, 0, 1065353216, 0);
	}
}

bool func_644(var uParam0, char* sParam1, vector3 vParam2, int iParam5, int iParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15, bool bParam16, bool bParam17, int iParam18, bool bParam19)
{
	if (!func_441(*uParam0))
	{
		iVar0 = 0;
		if (bParam17)
		{
			iVar0 = 5;
		}
		if (!is_entity_dead(iParam5))
		{
			*uParam0 = func_735(sParam1, iParam6, iParam5, iParam10, fParam9, 0, iParam15, iVar0, 1070386381, 570, 4000, 10, 1073741824, 0, iParam18, 0, 0);
			func_736(*uParam0, fParam7, 1);
		}
		else if (iParam13 != 0)
		{
			*uParam0 = func_737(sParam1, iParam6, iParam13, iParam10, fParam9, iParam15, iVar0, 570, 4000, 10, 1073741824, 0, iParam18, 0);
		}
		else
		{
			if (func_34(vParam2))
			{
				return false;
			}
			*uParam0 = func_738(sParam1, iParam6, vParam2, fParam7, iParam10, fParam9, iParam15, iVar0, 570, 4000, 10, 1073741824, 0, iParam18, 0);
		}
		if (fParam8 != 0f)
		{
			func_648(*uParam0, sParam1, ceil(absf(fParam8)), 1);
			if (ceil(absf(fParam8)) > func_709(1))
			{
				func_650(*uParam0, 0, 1);
			}
		}
		if (!is_string_null_or_empty(sParam11))
		{
		}
		if (bParam19)
		{
			func_739(*uParam0, 0, 1);
		}
		return false;
	}
	if (!bParam16)
	{
		if (func_740(*uParam0, 0))
		{
			if (_is_ped_carrying(Global_35))
			{
				func_650(*uParam0, 0, 1);
			}
		}
		else if (!_is_ped_carrying(Global_35))
		{
			func_650(*uParam0, 1, 1);
		}
	}
	if (fParam8 != 0f)
	{
		if (ceil(absf(fParam8)) > func_709(1))
		{
			func_650(*uParam0, 0, 1);
		}
	}
	if (bParam12)
	{
		if (does_entity_exist(iParam5) && is_entity_dead(iParam5))
		{
			if (func_441(*uParam0))
			{
				func_442(uParam0, 1, 1);
				return false;
			}
		}
	}
	if ((!bParam17 && func_741(*uParam0, 1)) || (bParam17 && func_742(*uParam0, 1)))
	{
		if (!bParam14)
		{
			if (fParam8 < 0f)
			{
				func_743(ceil(absf(fParam8)), 0, 0, 1, 1);
			}
			else if (fParam8 > 0f)
			{
				func_645(ceil(absf(fParam8)), 0, 1065353216, 1, 0, 0, 1, 752097756);
			}
		}
		func_442(uParam0, 1, 1);
		return true;
	}
	return false;
}

void func_645(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_744(iParam0, sParam4, iParam5);
	}
	func_745(iParam0, bParam1, fParam2, iParam3, iParam7);
}

int func_646(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	iVar0 = func_746(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_744(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_745(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

var func_647(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_648(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_441(iParam0))
	{
		return;
	}
	iVar0 = func_610(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(2, sParam1, sParam2));
}

void func_649(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_441(iParam0))
	{
		return;
	}
	iVar0 = func_610(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, sParam1);
}

void func_650(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_441(iParam0))
	{
		return;
	}
	iVar0 = func_610(iParam0);
	if (bParam1)
	{
		func_747(iParam0, 4);
		func_748(iVar0, 1);
		func_749(iVar0, 1);
	}
	else
	{
		func_750(iParam0, 4);
		func_749(iVar0, 0);
	}
}

void func_651(int* iParam0, char* sParam1)
{
	if (func_441(iParam0->f_6) && !is_string_null_or_empty(sParam1))
	{
		func_649(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_440(iParam0, 1);
}

bool func_652(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 38)
	{
		return true;
	}
	return false;
}

float func_653(vector3 vParam0, int iParam3)
{
	return func_230(Global_35, vParam0, iParam3);
}

bool func_654(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

void func_655(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

bool func_656(int iParam0)
{
	return iParam0 != 0;
}

void func_657(var uParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		func_620(uParam0);
		func_634(iParam1, uParam2);
	}
	func_259(*uParam0, 1, bParam4);
}

void func_658(int iParam0, var uParam1, int iParam2)
{
	if (!is_entity_dead(iParam0))
	{
		if (*uParam1 != 0)
		{
			func_259(iParam0, 1, 1);
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
			func_751(iParam0, uParam1, iParam2);
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

void func_659(var uParam0)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_753(func_752(255), 109029619));
	}
	else if (func_754())
	{
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_320();
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

void func_660(var uParam0, bool bParam1)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_753(func_752(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_754())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_320())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (compare_strings(sVar0, "", false, -1) != 0)
		{
			set_blip_name_from_text_file(*uParam0, sVar0);
		}
	}
}

int func_661(int iParam0)
{
	iParam0 = func_272(iParam0);
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

float func_662(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

void func_663(int iParam0)
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

void func_664(int iParam0)
{
	_set_blip_flash_style(iParam0, 673950256);
	_set_blip_flash_style(iParam0, 561559387);
	_set_blip_flash_style(iParam0, -201249929);
}

bool func_665(int iParam0)
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

void func_666()
{
	func_755(23);
}

void func_667(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 || iParam0);
}

int func_668(var uParam0)
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

void func_669(int iParam0)
{
	iVar0 = func_756(iParam0);
	if (iVar0 != 0)
	{
		func_757(-1, 24, 0, iVar0);
	}
}

void func_670(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (Global_1310750->f_16071 != iParam0 && !bParam2)
	{
		return;
	}
	if (&Global_17504.f_42[iParam0] == 0)
	{
		func_393(func_392(-1029789297), 1);
	}
	Global_17504.f_4++;
	Global_17504.f_42[iParam0] = &Global_17504.f_42[iParam0] + 1;
	(*Global_1310750)[iParam0]->f_110 |= 8;
	if (func_98(iParam0, 2))
	{
		func_758(iParam0, func_547(iParam3));
	}
	if (func_98(iParam0, 1))
	{
		if (iParam4 == -1)
		{
			iParam4 = func_318();
		}
		func_759(iParam0, iParam4);
	}
	if (iParam1 >= 0 && !func_144(iParam0, 65536))
	{
		func_760(iParam0, iParam1);
		func_761(iParam0, func_290(iParam0, iParam1));
		func_667(128);
	}
	func_550(iParam0, (*Global_1310750)[iParam0]->f_37, 1065353216, 0, 0);
	func_551(iParam0, 1);
	if (!bParam2)
	{
		func_667(16);
		Global_17504.f_5 = iParam0;
		Global_17504.f_9 = 1;
		Global_17504.f_7 = 0;
		Global_17504.f_8 = 0;
		func_762(524288);
	}
	if (func_763(iParam0) != 0)
	{
		if (&Global_17504.f_42[iParam0] >= func_763(iParam0))
		{
			Global_17504.f_42[iParam0]->f_6 = 1;
		}
	}
}

void func_671(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_764(&Global_0, 8);
	}
	if (!func_598() || func_161() != -1)
	{
		return;
	}
	func_764(&Global_0, 1);
}

int func_672(int iParam0, bool bParam1)
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

void func_673(int iParam0)
{
	Global_17504.f_2++;
	Global_17504.f_42[iParam0]->f_3++;
	(*Global_1310750)[iParam0]->f_110 |= 2;
}

bool func_674(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	if (func_34(vParam0))
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

bool func_675(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (func_34(vParam0))
	{
		return false;
	}
	return _0x769bb7626b8cdb06(vParam0, fParam3, iParam5, iParam4, 16384);
}

bool func_676(vector3 vParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_1310750->f_16043)
	{
		if (!func_34(*Global_1310750->f_16043[iVar0]))
		{
			if (func_266(vParam0, *Global_1310750->f_16043[iVar0]) < 2500f)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_677()
{
	iVar0 = func_765(func_370());
	if (iVar0 == 8)
	{
		iVar1 = func_371(func_370());
		if (func_373(Global_36, iVar1))
		{
			return false;
		}
	}
	if (func_766(func_681(0)))
	{
		return false;
	}
	if (func_767())
	{
		return false;
	}
	if (is_player_riding_train(player_id()))
	{
		return false;
	}
	return true;
}

float func_678(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

int func_679(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_768(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

void func_680(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_769(iParam1))
		{
			func_770(iParam0, 41788943);
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
			func_771(iParam0, 0, 1);
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
			func_772(iParam0, 0);
			bVar0 = true;
		}
		func_773(iParam0, bParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

int func_681(bool bParam0)
{
	if (bParam0)
	{
		iVar0 = func_774(1, 0, 0);
	}
	else
	{
		iVar0 = func_370();
	}
	return func_682(iVar0);
}

int func_682(int iParam0)
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

int func_683(int iParam0)
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

int func_684(int iParam0, int iParam1)
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

bool func_685(int iParam0)
{
	iVar0 = func_775(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

void func_686(int iParam0)
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

void func_687(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_688()
{
	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_776(iVar0, 128))
		{
			func_777(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_689()
{
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_776(iVar0, 128) && func_776(iVar0, 1))
		{
			func_777(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_690(float fParam0)
{
	iVar0 = floor((fParam0 * 1000f));
	if (Global_1393237->f_3 < (get_game_timer() + iVar0))
	{
		Global_1393237->f_3 = (get_game_timer() + iVar0);
	}
}

void func_691()
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_98(iVar0, 16777216))
		{
			if (!func_778(iVar0))
			{
				func_779(iVar0, 4096);
			}
		}
		iVar0++;
	}
}

void func_692(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = ((iParam1 + (60 * iParam2)) + (3600 * iParam3));
	iVar1 = (iVar0 / 2);
	iVar2 = (iVar1 / 60);
	iVar3 = (iVar1 - iVar2 * 60);
	iVar4 = 0;
	switch (iParam0)
	{
		case 0:
			func_499(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_499(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_499(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_499(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_499(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_499(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_499(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_499(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_499(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_499(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_499(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_499(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_499(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_499(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_499(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_499(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_499(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_499(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_499(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_499(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_499(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_499(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_499(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_499(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_499(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_499(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_499(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_499(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_499(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_499(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_499(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_499(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_499(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_499(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_499(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_499(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_693(float fParam0, bool bParam1, bool bParam2)
{
	fVar0 = func_397();
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

int func_694(int iParam0)
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

int func_695(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

void func_696(bool bParam0)
{
	func_780(bParam0);
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

bool func_697(int iParam0, var uParam1)
{
	if (!func_781(iParam0))
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

bool func_698()
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

bool func_699(int iParam0)
{
	return func_782(iParam0, 2);
}

bool func_700(int iParam0, int* iParam1)
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
		if (is_ped_in_combat(iParam0, func_783((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_701(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_718((*uParam0)[iVar0]))
		{
			func_439((*uParam0)[iVar0], 14);
		}
		iVar0++;
	}
}

void func_702(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_442(&((*uParam1)[iParam0->f_3]->f_6), 1, 1);
		if (bParam2)
		{
			func_239(iParam0, 0);
		}
	}
}

int func_703(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(*uParam2)[iVar0]->f_8 = 6;
		func_784(iParam0, (*uParam2)[iVar0], fParam3, 3, 0, 6, bParam4, 0);
		if (func_441((*uParam2)[iVar0]->f_6))
		{
			func_439((*uParam2)[iVar0], 11);
			return (*Global_1945938)[(*uParam2)[iVar0]->f_6]->f_3;
		}
	}
	return 0;
}

int func_704(var uParam0)
{
	iVar0 = func_491(*uParam0);
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

int func_705(var uParam0, int iParam1)
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

void func_706(int* iParam0, int* iParam1)
{
	if (!func_622(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_439(iParam1, 19);
			func_720(iParam0, 23);
			func_785(iParam1, 2);
		}
	}
}

bool func_707(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (func_786(16))
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
					func_787(16);
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

void func_708(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_784(iParam0, (*uParam1)[iVar0], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			clear_bit((*uParam1)[iVar0], 14);
		}
		iVar0++;
	}
}

int func_709(int iParam0)
{
	return _money_get_cash_balance();
}

bool func_710(int iParam0)
{
	return (func_788(iParam0, 4) || func_788(iParam0, 5));
}

int func_711(int iParam0)
{
	return func_788(iParam0, 7);
}

int func_712(int iParam0)
{
	return func_788(iParam0, 6);
}

void func_713(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (is_bit_set(*iParam1, 14))
	{
		if (func_718(iParam1))
		{
			clear_bit(iParam1, 14);
			func_784(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_714(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_789(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_740(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_650(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_650(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_790(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_715(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_742(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_791(iParam1, 1))
	{
		func_792(iParam1, 1);
		return true;
	}
	return false;
}

bool func_716(int* iParam0, float fParam1, bool bParam2)
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

void func_717(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		disable_control_action(0, 1101824977, true);
		disable_control_action(0, 966551065, true);
		disable_control_action(0, 668058244, true);
		set_ped_reset_flag(Global_35, 203, true);
	}
}

bool func_718(int* iParam0)
{
	if (!is_string_null_or_empty(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_719(int iParam0)
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

void func_720(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

bool func_721(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

bool func_722(int iParam0, int iParam1)
{
	if (func_161() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_723(int iParam0)
{
	if (func_161() != -1)
	{
		if (func_725(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_725(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_724(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_725(iParam0, 65536) && !func_725(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_725(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_725(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_725(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_726(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_727()
{
	return Global_1905944->f_5694;
}

bool func_728(int iParam0, int iParam1, float fParam2)
{
	return func_607(iParam0, get_entity_coords(iParam1, false, false), fParam2);
}

bool func_729(int iParam0, int iParam1, float fParam2, bool bParam3)
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

int func_730(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	iParam3 = iParam3;
	iParam4 = iParam4;
	if (!is_entity_dead(iParam2) && (func_41(iParam2, iParam3, 1, 1) < 70f || bParam5))
	{
		StringCopy(&cVar0, sParam1, 24);
		if (bParam7)
		{
			task_look_at_entity(iParam2, iParam3, 7000, 0, 51, 0);
			if (func_41(iParam2, iParam3, 1, 1) < 25f)
			{
				task_look_at_entity(iParam3, iParam2, 7000, 0, 51, 0);
			}
		}
		if (iParam4 > 0)
		{
			iVar3 = 1;
		}
		func_55(&uLocal_0);
		if (_0xd89504d9d7d5057d(sParam1))
		{
			if (func_793(sParam1))
			{
				return 1;
			}
		}
		else if (func_794(uParam0, cVar0, iVar3, iParam4, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_731(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_592(iParam0, 0))
	{
		return 0;
	}
	if (!func_795(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_796(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_797(iParam0, bParam2);
	iVar2 = 0;
	if (func_798(iParam0, 0, 0) == 0)
	{
		if (func_799(iParam0))
		{
			iVar5 = func_800(iParam0);
			iVar6 = func_801(iVar5);
			iVar7 = func_802(iVar6) + 1;
			func_803(iVar5);
			if (func_804(38))
			{
				func_461(483, 0);
			}
			else
			{
				func_461(482, 0);
			}
			if (iVar7 == func_805(iVar6))
			{
				func_731(func_806(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_598() && func_807(4))
				{
					if (func_598() && (func_808(38) || func_804(38)))
					{
						func_810(38, func_806(iVar6), 0, 0, func_809(), 0, -1, 0);
						func_811(2);
					}
					else
					{
						func_810(38, func_806(iVar6), 0, 0, func_809(), 0, -1, 0);
						func_811(1);
					}
				}
			}
			else if (func_598() && func_807(4))
			{
				if (func_598() && (func_808(38) || func_804(38)))
				{
					func_810(38, 0, 0, 0, func_809(), 0, -1, 0);
					func_811(2);
				}
				else
				{
					func_810(38, 0, 0, 0, func_809(), 0, -1, 0);
					func_811(1);
				}
			}
			if (func_598() && func_807(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_598() && (func_808(38) || func_804(38)))
					{
						func_812(38, _0x13aaecda43318bfe(-2076669067, iVar6), _0xd52d20b0c76bb26d(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_812(38, get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_594(iParam0) == -1037537535)
	{
		if ((!func_813(iParam0, 866047851) && !func_813(iParam0, -1979000645)) && !func_813(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_814(iParam0, 8388608) && !func_385(28))
	{
		func_815(28);
	}
	if (!bVar3)
	{
		if (func_813(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_816(iParam0) == -1447088266)
			{
				iVar1 = func_818(func_817(iParam0, 1), 0);
				if (is_weapon_valid(iVar1))
				{
					if (func_161() == -1)
					{
						func_819(iVar1);
					}
					if (func_820(0) && func_821(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_822(iParam0, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				iVar1 = _get_ammo_type_for_weapon(iParam0);
				if (_is_ammo_valid(iVar1))
				{
					if (func_161() == -1)
					{
						func_819(iParam0);
					}
					if (func_820(0) && func_821(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_822(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_594(iParam0) == -427144552)
		{
			if (!func_823(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_594(iParam0) == 307971639 && func_824(iParam0))
		{
			if (!func_825(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_813(iParam0, 866047851))
		{
			func_826(iParam0);
		}
		else if (func_813(iParam0, 2000026003))
		{
			func_827(iParam0);
		}
		else if (func_813(iParam0, -103750053))
		{
			func_393(func_828(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_393(func_829(-717883113, 2091222383), iVar0);
		}
		else if (func_813(iParam0, -121341956) && !func_813(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_321((*Global_1835011)[4]->f_1, 1))
				{
					func_461(498, 0);
				}
			}
			if (func_813(iParam0, -2017733358) || func_813(iParam0, -1369131378))
			{
				func_830(iParam0);
			}
		}
		else if (func_813(iParam0, -136654233))
		{
			if (func_813(iParam0, -1021472396))
			{
			}
		}
		else if (func_813(iParam0, -1466706512) && func_813(iParam0, 1147021565))
		{
			func_461(484, 0);
		}
		else if (func_813(iParam0, 1147021565) && func_813(iParam0, -524514947))
		{
		}
		else if (func_813(iParam0, 554195525))
		{
		}
		else if (func_813(iParam0, 589988438))
		{
			if (func_831())
			{
				func_646(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_813(iParam0, 787083290) && func_813(iParam0, 949916894))
		{
			func_832(iParam0);
		}
		else if (func_813(iParam0, -1718133314))
		{
			func_833(iParam0);
		}
		else if (func_813(iParam0, -1738650224))
		{
			func_834(iParam0);
		}
		else if (func_813(iParam0, -1112814642) && func_813(iParam0, 949916894))
		{
			func_835(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_813(iParam0, 1841149704))
		{
			func_836();
		}
		else if (func_813(iParam0, 606799272))
		{
			func_837(iParam0, iParam1);
			func_838(iParam0);
		}
		else if (func_813(iParam0, -1112814642) && func_813(iParam0, -1697809989))
		{
			func_839(iParam0, 0, 0, 0);
		}
		else if (func_813(iParam0, -2017733358) || func_813(iParam0, -1369131378))
		{
			func_830(iParam0);
		}
		else if (func_813(iParam0, -1921346699))
		{
			if (func_161() != -1)
			{
				return 0;
			}
			func_840(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_813(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_841(215778062, 1, 0))
					{
						func_731(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_841(670273567, 1, 0))
					{
						func_731(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_841(-967317137, 1, 0))
					{
						func_731(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_841(526074061, 1, 0))
					{
						func_731(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_841(-1045488665, 1, 0))
					{
						func_731(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_841(471514780, 1, 0))
					{
						func_731(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_813(iParam0, -839724752) && func_814(iParam0, 4))
		{
			if (!func_804(42))
			{
				func_842(iParam0);
			}
		}
		else if (func_813(iParam0, 1399091007))
		{
			func_843(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_813(iParam0, 1248798204))
		{
			iVar8 = 0;
			switch (iParam0)
			{
				case -593948563:
					iVar8 = -1281487556;
					break;
				case -1421669656:
					iVar8 = -59585102;
					break;
				case -830181022:
					iVar8 = 1018123892;
					break;
				case 917695895:
					iVar8 = -1455768246;
					break;
				case -1580595448:
					iVar8 = -921879912;
					break;
				case 1309992709:
					iVar8 = 982182330;
					break;
				case 1541618973:
					iVar8 = -1406390556;
					break;
			}
			if (iVar8 != 0)
			{
				func_731(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		switch (iParam0)
		{
			case 990323211:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1930309310;
				break;
			case 1143540373:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1372580021;
				break;
			case -1073808995:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1557306571;
				break;
			case 1903483453:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 306085243;
				break;
			case 224572565:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			case -13395913:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			case 1859340712:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			case -1614861441:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			case -1336735809:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			case -1109613870:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			case 637788839:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			case -1161163727:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			case 648503798:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			case -1434556002:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			case -843069275:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			case 1356680930:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			case -1185145312:
				func_815(24);
				if (&Global_1946804->f_1497.f_1[27] == &Global_1946804->f_57[27])
				{
					func_844(player_ped_id(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_845(&iVar9, 0))
				{
					func_821(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_161() == -1 && &Global_1946804->f_1497.f_1[25] == &Global_1946804->f_57[25])
				{
					func_844(player_ped_id(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case -160924582:
				break;
			case 2131771850:
				func_461(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_846();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_847();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_848();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_849();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_850();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_851(499813453, 854119837, 0);
				func_852(499813453, 0);
				func_853(1);
				break;
			case 2127812557:
				func_851(499813453, -1292544588, 0);
				func_852(499813453, 0);
				func_853(2);
				break;
			case 808991383:
				func_851(499813453, -1003325394, 0);
				func_852(499813453, 0);
				func_853(4);
				break;
			case 1134518629:
				func_851(666607663, -335460405, 0);
				func_852(666607663, 0);
				func_854(1);
				break;
			case 902940106:
				func_851(666607663, 903797617, 0);
				func_852(666607663, 0);
				func_854(2);
				break;
			case -418174898:
				func_851(666607663, 669728650, 0);
				func_852(666607663, 0);
				func_854(4);
				break;
			case -648114971:
				func_851(-220219788, 1214120047, 0);
				func_852(-220219788, 0);
				func_855(1);
				break;
			case 211153747:
				func_851(-220219788, 655769340, 0);
				func_852(-220219788, 0);
				func_855(2);
				break;
			case -32876996:
				func_851(-220219788, 885316185, 0);
				func_852(-220219788, 0);
				func_855(4);
				break;
			case 1191437462:
				func_851(218622660, -1491419385, 0);
				func_852(218622660, 0);
				func_856(1);
				break;
			case 1119149048:
				func_851(218622660, 1809565830, 0);
				func_852(218622660, 0);
				func_856(2);
				break;
			case 506073827:
				func_851(390004462, -628873767, 0);
				func_852(390004462, 0);
				func_857(1);
				break;
			case -1876986168:
				func_851(390004462, -405421956, 0);
				func_852(390004462, 0);
				func_857(2);
				break;
			case 2142623221:
				func_851(390004462, -1108972386, 0);
				func_852(390004462, 0);
				func_857(4);
				break;
			case 1508215381:
				func_851(6410548, 1053716392, 0);
				func_852(6410548, 0);
				func_858(1);
				break;
			case -888935280:
				func_851(6410548, 806507056, 0);
				func_852(6410548, 0);
				func_858(2);
				break;
			case -1252474566:
				func_851(6410548, 1571925350, 0);
				func_852(6410548, 0);
				func_858(4);
				break;
			case -1465702449:
				func_851(6410548, 1330352282, 0);
				func_852(6410548, 0);
				func_858(8);
				break;
			case -21093309:
				func_860(242, func_859(-21093309), 0);
				break;
			case 204375141:
				func_860(240, func_859(204375141), 0);
				break;
			case -417963070:
				func_860(241, func_859(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_861(594, 1934060482, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1067476102:
			case -541584777:
			case 206762213:
			case 1566032147:
			case 1973952589:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_861(594, 1110018439, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -653299524:
			case -486559882:
			case -324053813:
			case -223790555:
			case 998010398:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_861(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_861(594, -1228016946, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -2034071102:
			case -1939600995:
			case -1760041550:
			case -1708424762:
			case -1598782722:
			case -1505924449:
			case -1403873319:
			case -1335566375:
			case -1192685521:
			case 144810727:
			case 567164682:
			case 1174625611:
			case 1955751248:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_861(595, -103579, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_861(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case 80178851:
				func_461(488, 0);
				break;
			case 1613651027:
				func_461(491, 0);
				break;
			case -885810591:
				func_461(485, 0);
				if ((get_random_int_in_range(0, 65536) % 3) == 0)
				{
					func_731(func_862(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_731(func_863(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_385(1))
				{
					func_461(487, 0);
				}
				break;
			case -898386032:
				func_461(486, 0);
				break;
			case -2035110427:
				if (func_161() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_461(496, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return 0;
		}
		iVar10 = iParam0;
		func_864(&iVar10);
		if (!func_865(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_820(0))
		{
			return 1;
		}
		if (func_594(iParam0) == -1037537535)
		{
			func_866(iParam0);
		}
		if (func_813(iParam0, -1979000645))
		{
			func_867(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_820(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_731(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_868(iVar2, 0);
		}
	}
	Var35 = { func_869(iParam0) };
	if (_stat_id_is_valid(&Var35))
	{
		_0x6a0184e904cdf25e(&Var35, iVar0);
	}
	func_870(iParam0);
	if (fParam6 > 0f)
	{
		if (func_813(iParam0, -839724752))
		{
			func_871(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_872(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

int func_732()
{
	if (func_161() != -1)
	{
		return 0;
	}
	return func_873(661720433);
}

void func_733(int iParam0)
{
	if (func_161() != -1)
	{
		return;
	}
	if (iParam0 > 3000 || iParam0 < 0)
	{
		return;
	}
	else
	{
		Var0 = { func_392(661720433) };
		stat_id_set_int(&Var0, iParam0, true);
	}
}

void func_734(int iParam0, int iParam1)
{
	if (func_161() != -1)
	{
		return;
	}
	if (func_874(&uVar0))
	{
		return;
	}
	iVar1 = iParam1;
	if (func_875())
	{
		iVar1 = 0;
	}
	func_876(iParam0, iVar1);
}

int func_735(char* sParam0, int iParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16)
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
		if (func_782(iVar0, 2))
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
				func_877(iVar1, iParam1, sParam0, 5, iParam3, fParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, bParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_736(int iParam0, float fParam1, bool bParam2)
{
	if (bParam2 && !func_441(iParam0))
	{
		return;
	}
	if (fParam1 <= 0f)
	{
		return;
	}
	iVar0 = func_610(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	(*Global_1945938)[iVar0]->f_9 = fParam1;
	_uiprompt_context_set_size((*Global_1945938)[iVar0]->f_3, fParam1);
}

int func_737(char* sParam0, int iParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13)
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
		if (func_782(iVar0, 2))
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
		func_877(iVar1, iParam1, sParam0, 2, iParam3, fParam4, 0f, 0f, 0f, 0f, iParam2, 0, 1, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, 1065353216, 0, 0, 0, iParam12, bParam13);
		return iVar1;
	}
	return 0;
}

int func_738(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	if (func_34(vParam2))
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
		if (func_782(iVar0, 2))
		{
			if (func_516(vParam2, (*Global_1945938)[iVar0]->f_6, 0.01f, 1) && iParam1 == (*Global_1945938)[iVar0]->f_4)
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
		func_877(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

void func_739(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_441(iParam0))
	{
		return;
	}
	iVar0 = func_610(iParam0);
	func_748(iVar0, bParam1);
}

bool func_740(int iParam0, bool bParam1)
{
	if (bParam1 && !func_441(iParam0))
	{
		return false;
	}
	return !func_782(iParam0, 4);
}

bool func_741(int iParam0, bool bParam1)
{
	if (bParam1 && !func_441(iParam0))
	{
		return false;
	}
	iVar0 = func_610(iParam0);
	return _uiprompt_is_just_pressed((*Global_1945938)[iVar0]->f_3);
}

bool func_742(int iParam0, bool bParam1)
{
	if (bParam1 && !func_441(iParam0))
	{
		return false;
	}
	iVar0 = func_610(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

void func_743(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_878(iParam0);
	if (bParam3)
	{
		func_879(iParam0, sParam1, iParam2);
	}
}

void func_744(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_395(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_745(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_880())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_395(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_881(iVar0);
			func_882(iVar0, 0, 0);
		}
		func_395(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		_money_increment_cash_balance(iVar1, iParam4);
		func_393(func_392(1644987397), iVar1);
	}
}

int func_746(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_841(1811977508, 1, 0))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	_0x48e4d50f87a96aa5(Global_35, 1, 1, iParam0, &Var1, 0);
	iVar24 = 0;
	while (iVar24 < Var1)
	{
		if (&Var1.f_1[iVar24] == 2084597891)
		{
			return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
		}
		else
		{
			iVar25 = &Var1.f_1[iVar24];
			if (func_592(iVar25, 0) && func_813(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_747(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_748(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_782(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_749(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_750(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

void func_751(int iParam0, var uParam1, int iParam2)
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
			task_turn_ped_to_face_entity(0, Global_35, 2000, -1f, -1f, -1082130432);
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
		func_883(iParam0, &iVar0, 0, 0, 1, 1);
		set_ped_keep_task(iParam0, true);
	}
}

char* func_752(int iParam0)
{
	if (iParam0 == 255)
	{
		if (func_884(37, iParam0))
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
	if (func_884(37, iParam0))
	{
		return _0xd8402b858f4ddd88(&((*Global_1108178)[iParam0]->f_12), get_length_of_literal_string(&((*Global_1108178)[iParam0]->f_12)));
	}
	return get_player_name(&(Global_1225639->f_120[iParam0]));
}

char* func_753(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_885(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

bool func_754()
{
	if (func_161() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

void func_755(int iParam0)
{
	if (func_161() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_159(func_886(iVar0), 0))
		{
			if (is_ped_group_member(func_886(iVar0), func_528(), 1))
			{
				func_887(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

int func_756(int iParam0)
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

void func_757(int iParam0, int iParam1, int iParam2, int iParam3)
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
					if (func_888() > Global_32074.f_2697.f_6[iVar0]->f_5)
					{
						Global_32074.f_2697.f_6[iVar0]->f_5 = func_888();
					}
					func_889(&(Global_32074.f_2697.f_6[iVar0]->f_5), 0, 0, iParam1, iParam2, 0, 0, 0);
					func_71(&(Global_1415419->f_19[iVar0]->f_11), 2);
				}
			}
			iVar0++;
		}
	}
}

void func_758(int iParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		iVar0 = func_683(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_684(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2]->f_1++;
	}
}

void func_759(int iParam0, int iParam1)
{
	if (iParam1 != -1 && !func_144(iParam0, 8192))
	{
		iVar0 = func_684(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0]->f_1++;
	}
}

void func_760(int iParam0, int iParam1)
{
	iVar0 = (func_502(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	set_bit(Global_17504.f_12[iVar1], iVar2);
}

void func_761(int iParam0, vector3 vParam1)
{
	if (func_98(iParam0, 512))
	{
		vParam1 = { Global_36 };
	}
	if (func_34(vParam1))
	{
		return;
	}
	if (!func_276(iParam0))
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Global_17504.f_2084)
	{
		vVar2 = { *Global_17504.f_2084[iVar0] };
		if (func_34(vVar2))
		{
			if (iVar1 < 0)
			{
				iVar1 = iVar0;
			}
		}
		else if (Global_17504.f_2084[iVar0]->f_3 == iParam0)
		{
			if (func_516(vVar2, vParam1, 1f, 1))
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

void func_762(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		func_779(iVar0, iParam0);
		iVar0++;
	}
}

int func_763(int iParam0)
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

void func_764(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_765(int iParam0)
{
	if (!func_112(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_20;
}

bool func_766(int iParam0)
{
	return (Global_1310750->f_16074 && iParam0) != 0;
}

bool func_767()
{
	return Global_1894899 & 2 != 0;
}

int func_768(int iParam0)
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

bool func_769(int iParam0)
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

void func_770(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_890(iParam0, iParam1))
		{
			if (func_891(iParam0, iParam1))
			{
				if (func_892(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_893(iParam0);
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

void func_771(int iParam0, int iParam1, bool bParam2)
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

void func_772(int iParam0, bool bParam1)
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

void func_773(int iParam0, bool bParam1)
{
	if (bParam1 == 1)
	{
		_set_ped_face_feature(iParam0, 41611, 0f);
	}
	else
	{
		_set_ped_face_feature(iParam0, 41611, 1f);
	}
}

int func_774(int iParam0, bool bParam1, bool bParam2)
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
				if (!bParam1 || func_894(iVar2))
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

int func_775(int iParam0, int iParam1)
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

bool func_776(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return false;
	}
	return (Global_1393237->f_11[iParam0]->f_10 && iParam1) != 0;
}

void func_777(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return;
	}
	Global_1393237->f_11[iParam0]->f_10 = (Global_1393237->f_11[iParam0]->f_10 || iParam1);
}

bool func_778(int iParam0)
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

void func_779(int iParam0, int iParam1)
{
	if (!func_276(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_1 = ((*Global_1310750)[iParam0]->f_1 - ((*Global_1310750)[iParam0]->f_1 && iParam1));
}

void func_780(bool bParam0)
{
	_0xb6fd96420c0126a1(-1056478928, bParam0);
}

bool func_781(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

bool func_782(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

int func_783(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_784(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (func_441(iParam1->f_6))
	{
		if (bParam7 || is_bit_set(*iParam1, 11))
		{
			return;
		}
		func_442(&(iParam1->f_6), 0, 1);
	}
	if (!func_441(iParam1->f_6) && !is_bit_set(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_718(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_735(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_441(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_790(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_895(iParam1->f_6, 17, 1, 1);
				}
				if (is_bit_set(*iParam1, 1))
				{
					if (is_bit_set(*iParam1, 3))
					{
						func_896(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_648(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (is_bit_set(*iParam1, 10))
				{
					func_895(iParam1->f_6, 16, 1, 1);
				}
				if (!is_bit_set(*iParam1, 0) || is_bit_set(*iParam1, 13))
				{
					func_650(iParam1->f_6, 0, 1);
				}
				else
				{
					func_650(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

void func_785(int* iParam0, int iParam1)
{
	if (!func_438(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_439(iParam0, 14);
		}
	}
}

bool func_786(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_787(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_788(int iParam0, int iParam1)
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

bool func_789(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

void func_790(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam3 && !func_441(iParam0))
	{
		return;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = func_610(iParam0);
	func_895(iParam0, 18, 0, 1);
	func_895(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = _uiprompt_get_group_id_for_target_entity(iParam1);
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam4, iParam2);
}

bool func_791(int iParam0, bool bParam1)
{
	if (bParam1 && !func_441(iParam0))
	{
		return false;
	}
	iVar0 = func_610(iParam0);
	return _uiprompt_is_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_792(int iParam0, bool bParam1)
{
	if (bParam1 && !func_441(iParam0))
	{
		return;
	}
	iVar0 = func_610(iParam0);
	_uiprompt_restart_modes((*Global_1945938)[iVar0]->f_3);
}

bool func_793(char* sParam0)
{
	if (_0xd89504d9d7d5057d(sParam0))
	{
		start_preloaded_conversation(sParam0);
		return true;
	}
	return false;
}

bool func_794(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (!_0xd89504d9d7d5057d(&cParam1))
	{
		bVar0 = create_new_scripted_conversation(&cParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_897(cParam1, cParam0);
		if (bParam6)
		{
			preload_script_conversation(&cParam1, true, true, bParam7);
		}
		else
		{
			start_script_conversation(&cParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			_0x40ca665ab9d8d505(&cParam1, iParam5);
		}
	}
	return bVar0;
}

bool func_795(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_161() == -1)
	{
		if (func_898(iParam0) && func_899(iParam0))
		{
			func_900(iParam0, iParam1, 1, &bParam2, iParam3);
			return false;
		}
	}
	else if (iParam0 == 1259508039)
	{
		bParam2 = true;
	}
	else if (iParam0 == -1569615261)
	{
		return false;
	}
	return true;
}

bool func_796(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_901(iParam0, iParam1);
	Var0 = { func_902(iParam0, 0, 1) };
	iVar5 = func_903(iParam0, &Var0, 0, 0);
	iVar6 = func_904(iParam0, 0);
	if ((iVar5 > 1 && !func_905()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_813(iParam0, -2051813666))
		{
			func_461(583, 1);
		}
		else
		{
			func_461(582, 0);
		}
	}
	if (func_906(iParam0, &Var0, *iParam1, 0, 0))
	{
		if (iVar6 < iVar5)
		{
			*iParam1 = (iVar5 - iVar6);
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_797(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_907(iParam0, -949239683))
	{
		case -1565009253:
		case -1273369295:
		case -1239610997:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 632545869:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			Global_1935496->f_59.f_6 = 1;
			Global_1935496->f_59.f_7 = 0;
			Global_1935496->f_59.f_1 = iParam0;
			Global_1935496->f_59.f_5 = get_game_timer();
			break;
	}
}

int func_798(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_592(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_594(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_908(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_909(iParam0, 0);
	}
	iVar2 = _0xe787f05dfc977bde(func_910(bParam2), iParam0, 0);
	return iVar2;
}

bool func_799(int iParam0)
{
	if (func_161() != -1)
	{
		return false;
	}
	return func_800(iParam0) != 0;
}

int func_800(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_911())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_912(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_801(int iParam0)
{
	return _0x6052b4de6657684f(iParam0);
}

int func_802(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_911())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_801(iVar0))
		{
			if (func_841(func_912(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_803(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
	func_913(48);
	func_671(0, -1);
}

bool func_804(int iParam0)
{
	if (func_161() != -1)
	{
		return false;
	}
	return func_321((*Global_1347702)[iParam0]->f_15, 1);
}

int func_805(int iParam0)
{
	return _0x62cab7db62ead434(-2076669067, iParam0);
}

int func_806(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

bool func_807(int iParam0)
{
	if (func_161() != -1)
	{
		return false;
	}
	return func_321((*Global_1835011)[iParam0]->f_1, 1);
}

bool func_808(int iParam0)
{
	if (func_161() != -1)
	{
		return false;
	}
	if (!func_576(iParam0))
	{
		return false;
	}
	return func_914((*Global_1347702)[iParam0]->f_15);
}

int func_809()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_841(func_915(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_810(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_598() && (func_808(38) || func_804(38)))
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
			if (func_598() && (func_808(39) || func_804(39)))
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
			iVar9 = func_916(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		case 41:
			if (func_598() && (func_808(41) || func_804(41)))
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
			if (func_598() && (func_808(49) || func_804(49)))
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
			iVar9 = func_916(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_917(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar12 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar12 = get_hash_key("toast_log_blips");
	}
	if (func_918(iParam0, iVar13, iVar14))
	{
	}
	if (func_919(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_920(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_921(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_922(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_923(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_811(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_812(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_598() && (func_808(38) || func_804(38)))
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
			if (func_598() && (func_808(39) || func_804(39)))
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
			if (func_598() && (func_808(49) || func_804(49)))
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
		if (func_598() && (func_808(38) || func_804(38)))
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
			func_924(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_924(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_926(_create_var_string(2, sVar0), _create_var_string(2, func_925(func_806(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_924(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_924(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_598() && (func_808(39) || func_804(39)))
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
			func_924(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_924(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_598() && (func_808(49) || func_804(49)))
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
			func_924(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_924(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_924(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_924(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

bool func_813(int iParam0, int iParam1)
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

bool func_814(int iParam0, int iParam1)
{
	if (!func_592(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

void func_815(int iParam0)
{
	if (!func_585(iParam0))
	{
		return;
	}
	func_927(iParam0);
	func_928(iParam0);
}

int func_816(int iParam0)
{
	if (!func_592(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_817(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1639263599:
			iVar0 = -764310200;
			break;
		case 1222378998:
			iVar0 = -764310200;
			break;
		case 2074469742:
			iVar0 = -764310200;
			break;
		case 480079517:
			iVar0 = -1504859554;
			break;
		case 840671577:
			iVar0 = -1504859554;
			break;
		case 1446246869:
			iVar0 = 1885857703;
			break;
		case -2006166057:
			iVar0 = 1885857703;
			break;
		case 1235846615:
			iVar0 = -1511427369;
			break;
		case -228768324:
			iVar0 = 2133046983;
			break;
		case -1411922943:
			iVar0 = -1511427369;
			break;
		case -834103244:
			iVar0 = -1511427369;
			break;
		case 424030678:
			iVar0 = 165751297;
			break;
		case 446901936:
			iVar0 = 710736342;
			break;
		case -1092841802:
			iVar0 = -462374995;
			break;
		case -1452241321:
			iVar0 = 567069252;
			break;
		case -1188697038:
			iVar0 = -281894307;
			break;
		case 1671758975:
			iVar0 = -1127860381;
			break;
		case -893514737:
			iVar0 = -1894785522;
			break;
		case -2063089161:
			iVar0 = 469927692;
			break;
		case -452897925:
			iVar0 = 1960591597;
			break;
		default:
			break;
	}
	if (func_592(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_929(iVar0) || func_930(iVar0))
			{
				return iVar0;
			}
		}
		else
		{
			return iVar0;
		}
	}
	return iParam0;
}

int func_818(int iParam0, bool bParam1)
{
	if (!func_592(iParam0, 0))
	{
		return 0;
	}
	if (is_weapon_valid(iParam0))
	{
		return iParam0;
	}
	if (!bParam1)
	{
	}
	return 0;
}

void func_819(int iParam0)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_562(iParam0))
	{
		return;
	}
	iVar0 = _get_weapon_unlock(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	_unlock_set_unlocked(iVar0, true);
}

bool func_820(bool bParam0)
{
	if (func_161() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_910(bParam0));
}

bool func_821(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	if (_is_weapon_melee(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (has_ped_got_weapon(Global_35, iParam0, 0, false))
	{
		Var0 = { func_902(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_931((386 + iVar28), 1);
			if (func_932(iParam0, &Var0, iVar5, 0))
			{
				if (func_933(iParam0, &Var6, iVar5))
				{
					Var29 = { func_934(iParam0, Var0, iVar5, 0) };
					func_935(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_820(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_822(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_936(iParam0, iParam1);
					return true;
				}
				if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
				{
					return false;
				}
				if (iParam1 > 0)
				{
				}
				_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return true;
			}
		}
	}
}

bool func_822(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_824(iParam0))
	{
		return false;
	}
	if (!func_820(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_823(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_818(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_161() == -1)
		{
			func_819(iVar0);
			if (iParam1 == 1248274121)
			{
				func_937(iVar0);
			}
		}
		if (!func_906(iParam0, &uVar1, 1, 0, 0))
		{
			func_900(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_938(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_821(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_821(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_821(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_melee(iVar0))
			{
				if (iVar0 == 494733111 && !func_320())
				{
					return false;
				}
				if (_0x2c83212a7aa51d3d(iParam0))
				{
				}
				else if (!func_939(iVar0))
				{
					func_821(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_821(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_940(Global_35, 2, 0, 1);
				if ((((func_562(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_385(24)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_562(iVar7) && func_385(24))
				{
					if (!func_821(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_821(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_821(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	if (_0x9f0e1892c7f228a8(1) != 0 && iParam1 == 1248274121)
	{
		func_461(480, 1);
	}
	return true;
}

bool func_824(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_825(int iParam0, int iParam1, int iParam2)
{
	if (!func_824(iParam0))
	{
		return false;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_35, iParam0);
	if (func_562(iVar4))
	{
		get_max_ammo(Global_35, &iVar2, iVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (_is_weapon_bow(iVar4))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = _get_weapon_clip_size(iVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * absi(*iParam1));
	}
	if (func_841(611073244, 1, 0) && iParam2 == -897553835)
	{
		iVar6 = ceil((IntToFloat(iVar6) * 1.1f));
	}
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		func_860(func_941(iParam0), func_859(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_161() == -1)
		{
			if (func_321((*Global_1835011)[14]->f_1, 1))
			{
				func_461(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_820(0))
	{
		if (func_822(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_865(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_826(int iParam0)
{
	if ((iParam0 == -615217896 && !func_942()) || iParam0 != -615217896)
	{
		if (func_943(Global_35, iParam0, &uVar0))
		{
			func_844(player_ped_id(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_850();
			break;
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_850();
			break;
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_850();
			break;
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_848();
			break;
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_846();
			break;
	}
}

void func_827(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_846();
			break;
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_847();
			break;
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_848();
			break;
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_849();
			break;
		case 1299744282:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 1631240196:
			Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
			break;
		case 1768869276:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.15f);
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.15f);
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.15f);
			func_850();
			break;
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_944();
			break;
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_945();
			break;
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_828(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

struct<2> func_829(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_830(int iParam0)
{
	bVar0 = func_813(iParam0, -2017733358);
	if (func_946() < 3)
	{
		if (bVar0)
		{
			if (func_948(func_947(iParam0), iParam0))
			{
				func_860(79, func_859(func_947(iParam0)), 1);
			}
			else
			{
				func_860(78, func_859(func_947(iParam0)), 1);
			}
		}
		else
		{
			func_860(80, func_859(func_949(iParam0)), 1);
		}
	}
}

bool func_831()
{
	if (((((func_950(839908568, 400) || func_950(-1134030454, 400)) || func_950(623353496, 400)) || func_950(-344413337, 400)) || func_950(-1664948962, 400)) || func_950(1795228059, 400))
	{
		return true;
	}
	return false;
}

void func_832(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_810(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_812(51, 0, 0, 0, 0, -1, 0);
			func_951(8192);
			break;
		case 581047644:
			func_810(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_812(51, 0, 0, 0, 0, -1, 0);
			func_951(524288);
			break;
		case -644199619:
			func_810(39, 0, 0, 0, 0, 0, 1, 0);
			func_812(39, 0, 0, 0, 0, -1, 0);
			func_952(16);
			break;
		case 684296857:
			func_810(41, 0, 0, 0, 0, 0, 1, 0);
			func_812(41, 0, 0, 0, 0, -1, 0);
			func_953(8);
			break;
		case 466137807:
			func_810(49, 0, 0, 0, 0, 0, 1, 0);
			func_812(49, 0, 0, 0, 0, -1, 0);
			func_954(16);
			break;
		case -1087522507:
			func_810(43, 0, 0, -1791518714, func_955(1), 0, -1, 0);
			func_956(1);
			break;
		case -405829000:
			func_810(43, 0, 0, -2087881550, func_955(2), 0, -1, 0);
			func_956(2);
			break;
		case 378660860:
			func_810(43, 0, 0, 1908068621, func_955(4), 0, -1, 0);
			func_956(4);
			break;
		case 1566111097:
			func_810(43, 0, 0, 1611247019, func_955(8), 0, -1, 0);
			func_956(8);
			break;
		case 1276007140:
			func_810(43, 0, 0, 1319635688, func_955(16), 0, -1, 0);
			func_956(16);
			break;
	}
}

void func_833(int iParam0)
{
	if (func_957() == 1)
	{
		if (func_804(39))
		{
			func_461(342, 0);
		}
		else
		{
			func_461(343, 0);
			func_952(1);
		}
	}
	if (func_957() >= 30)
	{
		func_461(344, 0);
	}
	func_810(39, 0, 0, 0, 0, 0, -1, 0);
	func_812(39, 0, 0, func_957(), 30, 1, 0);
}

void func_834(int iParam0)
{
	if (func_958() == 1)
	{
		if (func_804(49))
		{
			func_461(409, 0);
		}
		else
		{
			func_461(410, 0);
			func_954(1);
		}
	}
	if (func_958() >= 10)
	{
		func_461(411, 0);
	}
	func_810(49, 0, 0, 0, 0, 0, -1, 0);
	func_812(49, 0, 0, func_958(), 10, 1, 0);
}

void func_835(int iParam0)
{
	switch (iParam0)
	{
		case 1369162587:
			_0x3ea62e56f386c997(-949689219, 1);
			func_461(437, 0);
			func_461(440, 0);
			func_959(-949689219, 444160793, &sVar0, 1, 0, 0);
			func_810(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_812(51, 0, 0, sVar0, func_916(-949689219, 20), 1, 0);
			func_951(1);
			func_960(-748969569, 0, 0);
			break;
		case 1610047510:
			_0x3ea62e56f386c997(-1248968496, 1);
			func_959(-1248968496, -1969404854, &sVar0, 1, 0, 0);
			func_810(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_812(51, 0, 0, sVar0, func_916(-1248968496, 20), 1, 0);
			func_951(8);
			break;
		case 1317879106:
			_0x3ea62e56f386c997(1706369307, 1);
			func_959(1706369307, -832850511, &sVar0, 1, 0, 0);
			func_810(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_812(51, 0, 0, sVar0, func_916(1706369307, 20), 1, 0);
			func_951(64);
			break;
		case 1062444751:
			_0x3ea62e56f386c997(1520110311, 1);
			func_959(1520110311, -100913452, &sVar0, 1, 0, 0);
			func_810(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_812(51, 0, 0, sVar0, func_916(1520110311, 20), 1, 0);
			func_951(512);
			break;
		case 754186760:
			_0x3ea62e56f386c997(-1992824800, 1);
			func_461(438, 0);
			func_959(-1992824800, 905173572, &sVar0, 1, 0, 0);
			func_810(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_812(51, 0, 0, sVar0, func_916(-1992824800, 20), 1, 0);
			func_951(32768);
			break;
		default:
			func_461(439, 0);
			break;
	}
}

void func_836()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

void func_837(int iParam0, int iParam1)
{
	iVar1 = 0;
	if (func_161() == -1)
	{
		if (!func_804(43))
		{
			if (iParam0 == 281887510)
			{
				func_461(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_461(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_461(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_461(400, 0);
			}
		}
		else if (func_813(iParam0, 412399755))
		{
			func_961(-1791518714);
			if (func_962() == 0)
			{
				func_671(0, 10);
				iVar1 = func_963(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_964(iParam0) < func_965(iParam0))
					{
						func_810(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_812(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_804(44))
		{
			if (iParam0 == -222563712)
			{
				func_461(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_461(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_461(401, 0);
			}
		}
		else if (func_813(iParam0, 709057512))
		{
			func_961(-2087881550);
			if (func_962() == 1)
			{
				func_671(0, 10);
				iVar1 = func_963(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_964(iParam0) < func_965(iParam0))
					{
						func_810(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_812(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_804(45))
		{
			if (iParam0 == 2116770557)
			{
				func_461(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_461(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_461(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_461(398, 0);
			}
		}
		else if (func_813(iParam0, -1478961327))
		{
			func_961(1908068621);
			if (func_962() == 2)
			{
				func_671(0, 10);
				iVar1 = func_963(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_966(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
					{
						func_967(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
						func_913(48);
					}
					if (func_964(iParam0) < func_965(iParam0))
					{
						func_810(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_812(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_964(iParam0) < func_965(iParam0))
					{
						func_810(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_812(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_804(46))
		{
			if (iParam0 == 2085530337)
			{
				func_461(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_461(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_461(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_461(406, 0);
			}
		}
		else if (func_813(iParam0, -1238404098))
		{
			func_961(1611247019);
			if (func_962() == 3)
			{
				func_671(0, 10);
				iVar1 = func_963(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_964(iParam0) < func_965(iParam0))
					{
						func_810(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_812(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_804(47))
		{
			if (iParam0 == -1521783510)
			{
				func_461(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_461(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_461(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_461(403, 0);
			}
		}
		else if (func_813(iParam0, 1160548794))
		{
			func_961(1319635688);
			if (func_962() == 4)
			{
				func_671(0, 10);
				iVar1 = func_963(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_964(iParam0) < func_965(iParam0))
					{
						func_810(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_812(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_838(int iParam0)
{
	if (iParam0 == 2116770557)
	{
		if (!func_966(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
		{
			func_967(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
			func_913(48);
		}
	}
}

void func_839(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = _0x126cbebba46693cf(iVar1, 678508515, -1160144609);
		if (func_841(func_968(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_969(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_970(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_840(int iParam0, int iParam1, int iParam2)
{
	if (func_161() == -1)
	{
		if (does_entity_exist(iParam2))
		{
			iVar0 = _0x6f02b5e50511721e(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_646(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_646(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493:
			func_646(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627:
			func_646(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377:
			func_646(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086:
			func_646(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686:
			func_646(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991:
			func_646(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101:
			func_646(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918:
			func_646(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765:
			func_646(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903:
			func_646(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684:
			func_646(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340:
			if (!func_971())
			{
				func_646(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740:
			func_646(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264:
			func_646(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970:
			func_646(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1027115192:
			func_646(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1064332555:
			func_646(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1954478446:
			func_646(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -518592739:
			func_646(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -2010073778:
			func_646(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -700133011:
			func_646(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1415414735:
			func_646(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 2045548742:
			func_646(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 830381058:
			func_646(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

bool func_841(int iParam0, int iParam1, bool bParam2)
{
	if (!func_592(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_594(iParam0);
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
		if (!func_972(iParam0, 1))
		{
			return false;
		}
	}
	return func_798(iParam0, 0, bParam2) >= iParam1;
}

void func_842(int iParam0)
{
	if (func_804(41))
	{
		func_461(363, 0);
	}
	else
	{
		func_461(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_973(-1865241121);
			func_974(-642026005);
			func_975(-642026005);
			func_671(0, 10);
			break;
		case -2108314374:
			func_973(2117142684);
			func_974(-940584364);
			func_975(-940584364);
			func_671(0, 10);
			break;
		case -1193798153:
			func_973(-1409326024);
			func_974(1972645282);
			func_975(1972645282);
			func_671(0, 10);
			break;
		case -787702678:
			func_973(-641744968);
			func_974(1667205433);
			func_975(1667205433);
			func_671(0, 10);
			break;
		case -804542901:
			func_973(-946988203);
			func_974(1362715885);
			func_975(1362715885);
			func_671(0, 10);
			break;
		case -1696275132:
			func_973(-646136018);
			func_974(1053540370);
			func_975(1053540370);
			func_671(0, 10);
			break;
		case -161595323:
			func_973(-955835837);
			func_974(-1100103852);
			func_975(-1100103852);
			func_671(0, 10);
			break;
		case -1114363619:
			func_973(-179276075);
			func_974(-1409869209);
			func_975(-1409869209);
			func_671(0, 10);
			break;
		case -368407134:
			func_973(-492711560);
			func_974(-1760235357);
			func_975(-1760235357);
			func_671(0, 10);
			break;
		case 1997759228:
			func_973(1764383959);
			func_974(-138366827);
			func_975(-138366827);
			func_671(0, 10);
			break;
		case 1265573293:
			func_973(317501533);
			func_974(-1261163843);
			func_975(-1261163843);
			func_671(0, 10);
			break;
		case -1030441283:
			func_973(817753087);
			func_974(-963523016);
			func_975(-963523016);
			func_671(0, 10);
			break;
		case -1490884871:
			func_973(576606016);
			func_974(560825326);
			func_975(560825326);
			func_671(0, 10);
			break;
		case -395458616:
			func_973(814934957);
			func_974(858269539);
			func_975(858269539);
			break;
	}
}

void func_843(int iParam0, int iParam1)
{
	func_976(iParam0, iParam1, &uVar0);
}

int func_844(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_902(iParam1, 1, 0) };
		iParam3 = func_977(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_979(iParam1, iParam2, func_978(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_980(1, (func_161() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_978(iParam3, 1)])
			{
				func_981(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_982(32768) && iParam1 != &Global_1946804->f_57[func_978(iParam3, 1)])
			{
				func_983();
				func_981(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_981(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_984(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_981(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_985(0);
			func_986(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_981(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_845(int iParam0, bool bParam1)
{
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_940(get_player_ped(get_player_index()), 2, 1, 0);
	iVar19 = func_940(get_player_ped(get_player_index()), 3, 1, 0);
	if (func_987("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_988(&Var3, iVar2, iVar0, iVar1))
			{
				if (_is_weapon_one_handed(Var3.f_4))
				{
					if (!bParam1)
					{
						if (Var3.f_4 == iVar18 || Var3.f_4 == iVar19)
						{
						}
						else
						{
							if (!bVar17)
							{
								*iParam0 = Var3.f_4;
								bVar17 = true;
							}
						}
						iVar2++;
						func_989(iVar0);
						if (*iParam0 != 0)
						{
							return true;
						}
						return false;
					}
				}
			}
		}
	}
}

void func_846()
{
	_0x11a7ff918ef6bc66(player_id(), (1f - Global_40.f_11095.f_60));
}

void func_847()
{
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	_0x497a6539bb0e8787(player_id(), (1f - fVar0), (1f - fVar1));
}

void func_848()
{
	_0xe0d6c2a146a5c993(player_id(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_849()
{
	_0xb427911ea6dffef3(player_id(), (1f - Global_40.f_11095.f_63));
}

void func_850()
{
	func_990();
	func_991();
	func_992();
}

void func_851(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_JACK_HALL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -293111728;
			break;
		case 666607663:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_HIGH_STAKES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 1406403390;
			break;
		case -220219788:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_POISONOUS_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 917780075;
			break;
		case 218622660:
			sVar3 = "COL_TH_SUB_TRESOR_DES_MORTS";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -857004026;
			break;
		case 390004462:
			sVar3 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -1108821735;
			break;
		case 6410548:
			sVar3 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -208135085;
			break;
	}
	switch (iParam1)
	{
		case 854119837:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_01";
			break;
		case -1292544588:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_02";
			break;
		case -1003325394:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_03";
			break;
		case -696705861:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_04";
			break;
		case -335460405:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_01";
			break;
		case 903797617:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_02";
			break;
		case 669728650:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_03";
			break;
		case 1595354593:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_04";
			break;
		case 1214120047:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_01";
			break;
		case 655769340:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_02";
			break;
		case 885316185:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_03";
			break;
		case -2016706455:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_04";
			break;
		case -1491419385:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_01";
			break;
		case 1809565830:
			sVar1 = "COL_TH_OBJ_RDL";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_02";
			break;
		case 2056119786:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_03";
			break;
		case -628873767:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_01";
			break;
		case -405421956:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_02";
			break;
		case -1108972386:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_03";
			break;
		case -878376933:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_04";
			break;
		case 1053716392:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_01";
			break;
		case 806507056:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_02";
			break;
		case 1571925350:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_03";
			break;
		case 1330352282:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_04";
			break;
		case 975496781:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_05";
			break;
	}
	if (_uilog_is_entry_registered(3, iVar0))
	{
		_uilog_remove_entry(3, iVar0);
	}
	if (!_uilog_is_entry_registered(3, iVar0))
	{
		_uilog_add_entry_hash(3, iVar0, vVar4, get_hash_key("COL_TH_TITLE"), get_hash_key(sVar2), 0);
	}
	if (bParam2)
	{
		switch (iParam0)
		{
			case 499813453:
				sVar1 = "COL_TH_JACK_HALL_COMPLETE";
				break;
			case 666607663:
				sVar1 = "COL_TH_HIGH_STAKES_COMPLETE";
				break;
			case -220219788:
				sVar1 = "COL_TH_POISONOUS_TRAIL_COMPLETE";
				break;
			case 218622660:
				sVar1 = "COL_TH_TRESOR_DES_MORTS_COMPLETE";
				break;
			case 390004462:
				sVar1 = "COL_TH_ELEMENTAL_TRAIL_COMPLETE";
				break;
			case 6410548:
				sVar1 = "COL_TH_LANDMARKS_OF_RICHES_COMPLETE";
				break;
		}
	}
	_uilog_add_or_update_objective(3, iVar0, get_hash_key(sVar1), sVar1, false, false, false);
	_uilog_set_entry_pinned(3, iVar0, true);
	_uilog_set_entry_icon_texture(3, iVar0, get_hash_key("BLIP_RC_TREASURE_HUNTER"), get_hash_key("toast_log_blips"));
	_uilog_set_entry_brief_texture(3, iVar0, get_hash_key("MISSION_RETH"), get_hash_key("SP_MISSIONS_19"));
	_uilog_update_entry_subheader(3, iVar0, _create_var_string(2, sVar3));
}

void func_852(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_JACK_HALL";
			iVar0 = -293111728;
			break;
		case 666607663:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_HIGH_STAKES";
			iVar0 = 1406403390;
			break;
		case -220219788:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_POISONOUS_TRAIL";
			iVar0 = 917780075;
			break;
		case 218622660:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_TRESOR_DES_MORTS";
			iVar0 = -857004026;
			break;
		case 390004462:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			iVar0 = -1108821735;
			break;
		case 6410548:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			iVar0 = -208135085;
			break;
	}
	sVar3 = "COL_CTX_PLAYER_LOG";
	if (bParam1)
	{
		sVar1 = "MISSION_COMPLETE";
	}
	_uilog_set_pending_details_id(1, iVar0);
	func_924(_create_var_string(2, sVar1), _create_var_string(2, sVar2), get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_TREASURE_HUNTER"), 1433015236, _create_var_string(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_853(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_854(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_855(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_856(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_857(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_858(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_859(int iParam0)
{
	if (!func_592(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_860(int iParam0, int iParam1, bool bParam2)
{
	func_636(iParam0, &iVar0, &iVar1);
	if (!func_637(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_725(iParam0, 1024))
	{
		return;
	}
	func_638(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 2;
}

void func_861(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_636(iParam0, &iVar0, &iVar1);
	if (!func_637(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_725(iParam0, 1024))
	{
		return;
	}
	func_638(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	if (!bParam3)
	{
		Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 1;
	}
	else
	{
		Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 5;
	}
}

int func_862()
{
	iVar0 = _0x5461c821d00fe15a(-2076669067, 0);
	if (iVar0 == func_911())
	{
		return func_863();
	}
	iVar4 = (func_911() - iVar0);
	iVar5 = get_random_int_in_range(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_911())
	{
		iVar1 = _0x126cbebba46693cf(iVar2, -2076669067, 0);
		if (!func_993(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_912(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_863()
{
	iVar0 = get_random_int_in_range(0, func_911());
	return func_912(_0x126cbebba46693cf(iVar0, -2076669067, 0));
}

void func_864(int iParam0)
{
	switch (*iParam0)
	{
		case -1424823393:
			*iParam0 = -885810591;
			break;
		case 998010398:
			*iParam0 = -324053813;
			break;
		case 1358243310:
			*iParam0 = 1463786584;
			break;
		case -541584777:
			*iParam0 = 206762213;
			break;
	}
}

int func_865(int iParam0, int iParam1, int iParam2)
{
	if (!func_592(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_902(iParam0, 0, 1) };
	Var5 = { func_934(iParam0, Var0, Var0.f_4, 0) };
	return func_994(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_866(int iParam0)
{
	if (func_161() != -1)
	{
		return;
	}
	switch (func_816(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_995(81053684, 0) <= 0)
			{
				func_981(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_981(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_996(iParam0);
			if (func_997(iVar0))
			{
				func_998(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_981(30, iParam0, 0, 0, 0);
			}
			if (func_999() == -2125499975 || func_999() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_981(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_999() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_981(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_1000(-525676072, 0))
			{
				if (func_1001(-525676072, &iVar1))
				{
					func_981(33, iVar1, 0, 0, 0);
				}
			}
			func_981(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_1002(99217379))
		{
			func_844(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_815(24);
		if (func_845(&iVar2, 0))
		{
			func_821(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_867(int iParam0)
{
	if (func_813(iParam0, 943695443))
	{
		func_1003(0, iParam0);
	}
	else if (func_813(iParam0, -2096528786))
	{
		func_1003(1, iParam0);
	}
	else if (func_813(iParam0, -1094167013))
	{
		func_1003(2, iParam0);
	}
	else if (func_813(iParam0, 1936654645))
	{
		func_1003(3, iParam0);
	}
	else if (func_813(iParam0, 1306489306))
	{
		func_1003(4, iParam0);
	}
	else if (func_813(iParam0, 435762317))
	{
		func_1003(5, iParam0);
	}
	else if (func_813(iParam0, 1259363210))
	{
		func_1003(6, iParam0);
	}
	else if (func_813(iParam0, 881398259))
	{
		func_1003(7, iParam0);
	}
	else if (func_813(iParam0, -541549214))
	{
		func_1003(8, iParam0);
	}
	else if (func_813(iParam0, 130796156))
	{
		func_1003(-1, iParam0);
	}
}

int func_868(int iParam0, int iParam1)
{
	Var4.f_1 = 10;
	func_1004(&Var4, 1356624740);
	return func_1005(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_869(int iParam0)
{
	if (!func_592(iParam0, 0))
	{
		return Var0;
	}
	if (func_813(iParam0, -305066475))
	{
		if (func_161() == -1)
		{
			if (func_813(iParam0, -537818634))
			{
				return func_392(189951448);
			}
			else
			{
				return func_392(1176172851);
			}
		}
	}
	else if (func_813(iParam0, -537818634))
	{
		return func_392(-963660207);
	}
	if (func_813(iParam0, 2084895747))
	{
		return func_392(1694039471);
	}
	return Var2;
}

void func_870(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_161() == -1)
			{
				if (func_321((*Global_1835011)[4]->f_1, 1))
				{
					func_461(109, 1);
				}
			}
			break;
	}
}

void func_871(int iParam0, char* sParam1)
{
	sVar0 = func_1007(func_1006(0));
	func_395(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1008(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_872(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_592(iParam0, 0))
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
	if (!func_1009())
	{
		func_1010(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_1011(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_1011(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_814(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_594(iParam0);
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
	else if (!func_1012(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	sVar15 = func_885(_create_var_string(10, &cVar2, _create_var_string(0, func_859(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_813(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_859(iParam0));
	}
	func_395(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

var func_873(int iParam0)
{
	Var1 = { func_392(iParam0) };
	stat_id_get_int(&Var1, &uVar0);
	return uVar0;
}

bool func_874(var uParam0)
{
	if (-1829635046 == func_1013(81053684))
	{
		if (func_1014(uParam0))
		{
			return true;
		}
	}
	else if (func_1015(-525676072, uParam0))
	{
		if (func_1014(uParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_875()
{
	return (_does_anim_scene_exist(Global_43800) && _is_anim_scene_started(Global_43800, false));
}

void func_876(int iParam0, int iParam1)
{
	if (func_161() != -1)
	{
		return;
	}
	iVar0 = func_732();
	if (iParam0 <= 0)
	{
		return;
	}
	else if (iParam0 > 0 && (iVar0 + iParam0) > 3000)
	{
		iVar1 = (3000 - iVar0);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 < 0)
	{
		iVar2 = absi(iVar1);
		sVar9 = "FAME_EVENT_DEC";
	}
	else
	{
		iVar2 = iVar1;
		sVar9 = "FAME_EVENT_INC";
	}
	iVar3 = (iVar0 + iVar1);
	fVar6 = to_float(iVar0);
	fVar7 = to_float(&Global_1347398);
	fVar8 = to_float(iVar3);
	iVar4 = func_386(ceil(((fVar6 / fVar7) * 100f)), 0, 100);
	iVar5 = func_386(ceil(((fVar8 / fVar7) * 100f)), 0, 100);
	if ((iVar5 - iVar4) == 0)
	{
		return;
	}
	if (iParam1 & 0)
	{
	}
	if (iVar3 < 1000)
	{
		if (!func_1016())
		{
			func_1017(0);
			play_sound_frontend("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (iVar3 >= 1000 && iVar3 < 2000)
	{
		if (!func_1018())
		{
			func_1017(1000);
			play_sound_frontend("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (iVar3 >= 2000 && iVar3 < 3000)
	{
		if (!func_1019())
		{
			func_1017(2000);
			play_sound_frontend("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (!func_1020())
	{
		func_1017(3000);
		play_sound_frontend("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
	}
	func_393(func_392(661720433), iVar1);
	iVar10 = func_732();
	_0x078f77fd1a43eab3(iVar0, iVar10);
}

void func_877(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, float fParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
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
	func_748(iParam0, 1);
	func_749(iParam0, 1);
	func_750(iParam0, 128);
}

void func_878(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_709(1) < iParam0)
	{
		iParam0 = func_709(1);
	}
	_money_decrement_cash_balance(iParam0);
	Var0 = { func_392(1644987397) };
	_0xbd861ae8a5181ed7(&Var0, iParam0);
}

void func_879(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_395(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

bool func_880()
{
	if (func_942())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_881(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1021((Global_40.f_4283.f_325 + iParam0));
}

void func_882(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_880())
	{
		func_395(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_395(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

void func_883(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

bool func_884(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_1022(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_1023())
	{
		return func_1022(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_1022(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

char* func_885(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

int func_886(int iParam0)
{
	if (!func_1024(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

void func_887(int iParam0, int iParam1)
{
	if (!func_1025(iParam0))
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

int func_888()
{
	return &Global_1899515;
}

void func_889(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_1026(*iParam0);
	iVar1 = func_1027(*iParam0);
	iVar2 = func_1028(*iParam0);
	iVar3 = func_531(*iParam0);
	iVar4 = func_1029(*iParam0);
	iVar5 = func_1030(*iParam0);
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
	iVar6 = func_1031(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_1031(iVar1, iVar0);
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
	func_1032(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_890(int iParam0, int iParam1)
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

bool func_891(int iParam0, int iParam1)
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

bool func_892(int iParam0, int iParam1)
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
	if (!func_890(iParam0, iVar0))
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

void func_893(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

bool func_894(int iParam0)
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

void func_895(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_441(iParam0))
	{
		return;
	}
	iVar0 = func_610(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_896(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (bParam4 && !func_441(iParam0))
	{
		return;
	}
	iVar0 = func_610(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(10, sParam1, sParam2, sParam3));
}

void func_897(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
{
	iVar0 = 0;
	while (iVar0 < cParam3->f_97)
	{
		if (does_entity_exist(cParam3[iVar0]))
		{
			if (!is_entity_dead(cParam3[iVar0]))
			{
				add_ped_to_conversation(&cParam0, cParam3[iVar0], &((*cParam3)[iVar0]->f_1));
			}
		}
		iVar0++;
	}
}

bool func_898(int iParam0)
{
	return func_594(iParam0) == -427144552;
}

bool func_899(int iParam0)
{
	if (func_161() != -1)
	{
		return false;
	}
	if (func_814(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_906(iParam0, &uVar0, 1, 0, 0);
	}
	return func_841(iParam0, 1, 0);
}

void func_900(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_594(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_818(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_930(iVar0))
	{
		if (func_161() == -1)
		{
			func_819(iVar0);
		}
		if (bParam2 || (!has_ped_got_weapon(Global_35, iVar0, 0, false) && func_798(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_872(iParam0, iParam1, 0, 0, 0);
				play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_901(int iParam0, int iParam1)
{
	if (func_813(iParam0, 58855631))
	{
		func_1033(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

struct<5> func_902(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_1034(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_594(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_934(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_1035(bParam1) };
			if (bParam2 && func_1036(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_932(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_932(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_933(iParam0, &Var5, 1728382685))
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
			Var0 = { func_1037(bParam1) };
			switch (func_816(iParam0))
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
			if (func_1038(iParam0, -1823706425))
			{
				Var0 = { func_934(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_1038(iParam0, -1483207246))
			{
				Var0 = { func_934(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_1039(Var0, &Var27, bParam1, 0))
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

int func_903(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_592(iParam0, 0))
	{
		return 0;
	}
	if (!func_820(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_910(bParam3), iParam0);
}

int func_904(int iParam0, bool bParam1)
{
	if (func_824(iParam0))
	{
		return get_ped_ammo_by_type(Global_35, iParam0);
	}
	return _0xe787f05dfc977bde(func_910(bParam1), iParam0, 0);
}

bool func_905()
{
	if (func_161() != -1)
	{
		return false;
	}
	if (!func_598())
	{
		return false;
	}
	if (!func_321((*Global_1835011)[1]->f_1, 1))
	{
		return true;
	}
	if ((func_321((*Global_1835011)[2]->f_1, 1) && func_321((*Global_1347702)[120]->f_15, 1)) && !func_321((*Global_1835011)[4]->f_1, 1))
	{
		return true;
	}
	if (func_321((*Global_1835011)[37]->f_1, 1) && !func_321((*Global_1835011)[39]->f_1, 1))
	{
		return true;
	}
	if (func_321((*Global_1835011)[57]->f_1, 1) && !func_321((*Global_1835011)[60]->f_1, 1))
	{
		return true;
	}
	if (func_321((*Global_1835011)[26]->f_1, 1) && !func_321((*Global_1347702)[67]->f_15, 1))
	{
		return true;
	}
	if ((func_321((*Global_1835011)[62]->f_1, 1) && func_321((*Global_1835011)[63]->f_1, 1)) && !func_321((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if (func_321((*Global_1835011)[75]->f_1, 1) && !func_321((*Global_1347702)[1]->f_15, 1))
	{
		return true;
	}
	if (func_321((*Global_1835011)[76]->f_1, 1) && !func_321((*Global_1835011)[77]->f_1, 1))
	{
		return true;
	}
	if ((func_321((*Global_1835011)[40]->f_1, 1) && func_321((*Global_1835011)[41]->f_1, 1)) && !func_321((*Global_1835011)[44]->f_1, 1))
	{
		return true;
	}
	if ((func_321((*Global_1835011)[62]->f_1, 1) && func_321((*Global_1835011)[63]->f_1, 1)) && !func_321((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if ((func_321((*Global_1835011)[65]->f_1, 1) && func_321((*Global_1835011)[66]->f_1, 1)) && !func_321((*Global_1835011)[67]->f_1, 1))
	{
		return true;
	}
	return false;
}

bool func_906(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1040(&iParam0);
	if (!func_592(iParam0, 0))
	{
		return false;
	}
	if (!func_820(0))
	{
		bParam3 = true;
	}
	if (func_898(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_one_handed(iParam0))
		{
			Var0 = { func_1035(0) };
			Var4.f_9 = -1591664384;
			if (!func_932(iParam0, &Var0, 1728382685, 0))
			{
				return false;
			}
			else if (func_933(iParam0, &Var4, 1728382685))
			{
				return false;
			}
			if (func_1036(iParam0, 1))
			{
				if (!func_932(iParam0, &Var0, -649335959, 0))
				{
					return false;
				}
				else if (func_933(iParam0, &Var4, -649335959))
				{
					return false;
				}
			}
		}
		else if (!func_1041(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_903(iParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return false;
	}
	else if (iVar27 == 0)
	{
		return true;
	}
	if (bParam3)
	{
		iVar28 = func_1042(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = _0xe787f05dfc977bde(func_910(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_907(int iParam0, int iParam1)
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

int func_908(int iParam0, int iParam1)
{
	if (!func_592(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_594(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_813(iParam0, 1399091007))
	{
		func_976(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_909(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_1043(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1044(&Var0, func_1035(0));
	}
	if (!func_1045(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_989(iVar14);
	return uVar15;
}

int func_910(bool bParam0)
{
	if (func_161() == -1)
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

int func_911()
{
	return _0x62cab7db62ead434(-2076669067, 0);
}

int func_912(int iParam0)
{
	return _0xec3959e9950bf56b(iParam0);
}

void func_913(int iParam0)
{
	if (func_161() != -1)
	{
		return;
	}
	iVar0 = func_1046(iParam0);
	fVar1 = func_1047(iParam0);
	if ((Global_1347477->f_117 || !func_385(31)) || !func_1048(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_1049(iVar0) >= 7)
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
	func_1050(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_395(_create_var_string(6, func_1051(iParam0), fVar1), "itemtype_textures", func_1052(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

bool func_914(int iParam0)
{
	iVar0 = func_526(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_915(int iParam0)
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

int func_916(int iParam0, int iParam1)
{
	if (!func_697(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_int(&uVar5, &Var0);
	return uVar5;
}

char* func_917(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_809() >= 12)
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_POSTED_OBJ", func_1053(), 12);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_FOUND_OBJ", func_1054(), 12);
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
			else if (func_957() >= 30)
			{
				sParam3 = _create_var_string(2, "COL_DB_POSTED_OBJ", func_1055(), 30);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_DB_FOUND_OBJ", func_957(), 30);
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
				sParam3 = _create_var_string(2, "COL_LF_CAUGHT_OBJ", func_1056(), 13);
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
			else if (func_958() >= 10)
			{
				sParam3 = _create_var_string(2, "COL_RC_POSTED_OBJ", func_1057(), 10);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_RC_FOUND_OBJ", func_958(), 10);
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
				sParam3 = _create_var_string(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_916(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_918(int iParam0, int iParam1, int iParam2)
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

bool func_919(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_add_entry_hash(3, iParam1, vParam2, get_hash_key(sParam5), get_hash_key(sParam6), 0);
	}
	return true;
}

bool func_920(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	_uilog_add_or_update_objective(3, iParam1, get_hash_key(sParam2), sParam2, false, false, false);
	_uilog_set_entry_pinned(3, iParam1, true);
	_uilog_set_entry_brief_texture(3, iParam1, get_hash_key(sParam4), get_hash_key(sParam5));
	_uilog_set_entry_icon_texture(3, iParam1, iParam6, iParam7);
	_uilog_update_entry_subheader(3, iParam1, _create_var_string(2, sParam3));
	return true;
}

bool func_921(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_1058(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_841(iVar2, 1, 0) || func_1060(func_1059(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_925(func_1058(iVar0))), func_925(func_1058(iVar0)), bVar1, true, false);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_957() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1061(iVar0)), func_1061(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1055() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1061(iVar0)), func_1061(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1061(iVar0)), func_1061(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_968(iParam3, func_1062(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_964(iVar2) - iParam7) >= func_916(iParam3, func_1063(iVar0));
				}
				else
				{
					bVar1 = func_964(iVar2) >= func_916(iParam3, func_1063(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_964(iVar2) + iParam7) >= func_916(iParam3, func_1063(iVar0));
			}
			else
			{
				bVar1 = func_964(iVar2) >= func_916(iParam3, func_1063(iVar0));
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1064(iVar2)), func_1064(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1065(_0x126cbebba46693cf(iVar0, 1995362678, 0)))
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
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1066(_0x126cbebba46693cf(iVar0, iParam2, 0))), func_1066(_0x126cbebba46693cf(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_958() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1067(iVar0)), func_1067(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1057() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1067(iVar0)), func_1067(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1067(iVar0)), func_1067(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_968(iParam3, func_1062(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_964(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1068(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1068(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1069(iVar2)), func_1069(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_922(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_1056() >= 13)
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

bool func_923(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_578(func_1070(0)) && ((func_1071(0) == 1 || func_1071(0) == 8) || func_1071(0) == 6))
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

var func_924(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

char* func_925(int iParam0)
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

var func_926(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

void func_927(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	set_bit(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_928(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 11:
			func_1072(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			break;
		case 18:
			_uitutorial_set_rpg_icon_visibility(5, 0);
			_uitutorial_set_rpg_icon_visibility(4, 0);
			func_1073(1);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_1073(2);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_1073(3);
			break;
		case 21:
			_uitutorial_set_rpg_icon_visibility(7, 0);
			_uitutorial_set_rpg_icon_visibility(6, 0);
			break;
		case 22:
			_uitutorial_set_rpg_icon_visibility(9, 0);
			_uitutorial_set_rpg_icon_visibility(8, 0);
			break;
		case 31:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 32:
			break;
		case 33:
			func_1074(1);
			break;
		case 34:
			func_1075(1);
			break;
		case 35:
			func_1076(1);
			break;
		case 36:
			break;
		case 37:
			func_1077(0);
			break;
		case 38:
			func_1078(0);
			break;
		case 39:
			func_1079(0);
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 43:
			break;
		case 1:
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_level(get_player_index(), 1);
			break;
		case 2:
			if ((!&Global_1879534 && func_598()) && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_926("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_461(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_598()) && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_926("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_461(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_598()) && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_926("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_461(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_598()) && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_926("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_461(589, 0);
			break;
		case 24:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			if (func_161() == -1)
			{
				if (!func_1002(99217379) || func_1080(99217379) == 2110595215)
				{
					if (func_320())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = 899611344;
					}
					if (!func_841(iVar0, 1, 0))
					{
						func_865(iVar0, 1, 752097756);
					}
					func_844(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_161() == -1)
			{
				if (!func_841(1013902307, 1, 0))
				{
					func_865(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_161() == -1)
			{
				if (!func_841(1013902307, 1, 0))
				{
					func_865(1013902307, 1, 752097756);
				}
				if (!func_841(142640135, 1, 0))
				{
					func_865(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_161() == -1)
			{
				if (!func_841(786809402, 1, 0))
				{
					func_865(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_161() == -1)
			{
				if (!func_841(786809402, 1, 0))
				{
					func_865(786809402, 1, 752097756);
				}
				if (!func_841(-518019409, 1, 0))
				{
					func_865(-518019409, 1, 752097756);
				}
			}
			break;
		case 23:
			_0x5b9813ecf7633fe8(0);
			break;
		case 25:
			break;
		case 26:
			break;
		case 27:
			break;
		case 28:
			break;
		case 29:
			break;
		case 30:
			break;
		case 44:
			break;
		case 45:
			_unlock_set_unlocked(-843169622, true);
			Global_1935630->f_47 = 1;
			set_ambient_zone_list_state_persistent("AZL_Endlesss_Summer_Enable", true, true);
			set_ambient_zone_list_state_persistent("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 46:
			func_1081();
			break;
		case 47:
			_0xa63fcad3a6fec6d2(get_player_index(), 1);
			break;
		case 52:
			_unlock_set_unlocked(-78935213, true);
			break;
		case 53:
			_unlock_set_unlocked(-384786155, true);
			break;
		case 54:
			_unlock_set_unlocked(296662302, true);
			break;
		case 55:
			_unlock_set_unlocked(-1871453000, true);
			break;
		case 56:
			_unlock_set_unlocked(1397349651, true);
			break;
	}
}

bool func_929(int iParam0)
{
	iVar0 = _get_weapon_unlock(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (_unlock_is_visible(iVar0))
	{
		return true;
	}
	return false;
}

bool func_930(int iParam0)
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

int func_931(int iParam0, int iParam1)
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

bool func_932(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_1042(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_933(int iParam0, var uParam1, int iParam2)
{
	if (func_1082(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_934(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_592(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_910(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_935(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_1083(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1039(*uParam1, &Var0, bParam6, 0))
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
	if (!func_820(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_910(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_936(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_166(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

void func_937(int iParam0)
{
	if (!is_weapon_valid(iParam0))
	{
		return;
	}
	if (!does_entity_exist(Global_35) || Global_1935630->f_12)
	{
		return;
	}
	if (_is_weapon_bow(iParam0))
	{
		return;
	}
	sVar0 = "player_newWeaponType";
	sVar1 = "player_newWeaponTime";
	if (_is_weapon_pistol(iParam0))
	{
		sVar0 = "player_newPistolWeaponType";
		sVar1 = "player_newPistolWeaponTime";
	}
	else if (_is_weapon_revolver(iParam0))
	{
		sVar0 = "player_newRevolverWeaponType";
		sVar1 = "player_newRevolverWeaponTime";
	}
	else if (_is_weapon_rifle(iParam0))
	{
		sVar0 = "player_newRifleWeaponType";
		sVar1 = "player_newRifleWeaponTime";
	}
	else if (_is_weapon_shotgun(iParam0))
	{
		sVar0 = "player_newShotgunWeaponType";
		sVar1 = "player_newShotgunWeaponTime";
	}
	decor_set_int(Global_35, sVar0, iParam0);
	iVar2 = func_530();
	func_889(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	decor_set_int(Global_35, sVar1, iVar2);
}

int func_938(int iParam0)
{
	if (func_1084(iParam0))
	{
		if (get_ped_ammo_by_type(Global_35, 954660191) <= 0)
		{
			iVar0 = 10;
		}
		else
		{
			iVar0 = 0;
		}
	}
	else if (_0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_sniper(iParam0))
		{
			iVar0 = 12;
		}
		else
		{
			iVar0 = _get_weapon_clip_size(iParam0) * 4;
		}
		iVar1 = get_ped_ammo_by_type(Global_35, _get_ammo_type_for_weapon(iParam0));
		if (iVar1 >= iVar0)
		{
			iVar0 = 0;
		}
		else if (iVar1 > 0)
		{
			iVar0 = (iVar0 - iVar1);
		}
	}
	return iVar0;
}

bool func_939(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_940(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_941(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_0x705be297eebdb95d(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			if (!func_385(50))
			{
				if (!func_385(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_385(51))
			{
				if (!func_385(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_942()
{
	return _unlock_is_unlocked(-121456797);
}

bool func_943(int iParam0, int iParam1, var uParam2)
{
	if (!func_592(iParam1, 0))
	{
		return false;
	}
	if (func_594(iParam1) != -1037537535)
	{
		return false;
	}
	bVar1 = func_161() != -1;
	iVar2 = _get_metaped_type(iParam0);
	if (func_816(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_1085(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_813(iParam1, 866047851))
	{
		iVar5 = func_978(iVar4, 1);
		if (func_1086(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5] != iVar8)
		{
			*uParam2 = -265166256;
			return false;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case 1742327865:
			if (_get_ped_component_category(iVar8, iVar2, bVar1) == 2056714954 && _is_metaped_using_component(iParam0, -1455751347))
			{
				*uParam2 = 111371848;
				return false;
			}
			iVar5 = 10;
			iVar3 = func_816(&(Global_1946804->f_1497.f_1[iVar5]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745;
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5] != &Global_1946804->f_57[iVar5] && func_813(iParam1, -1638171711))
			{
				*uParam2 = 187275271;
				return false;
			}
			break;
		case 1900541263:
			iVar5 = 36;
			if (&Global_1946804->f_1497.f_1[iVar5] == &Global_1946804->f_57[iVar5])
			{
				*uParam2 = 2143522536;
				return false;
			}
			if (_is_metaped_using_component(iParam0, -1968556728))
			{
				*uParam2 = -849690042;
				return false;
			}
			break;
		case -1505978566:
			if (func_1015(1868067663, &uVar0))
			{
				*uParam2 = 939463734;
				return false;
			}
		case -1130865351:
		case -426430150:
		case 1788623170:
			if (!bVar7)
			{
			}
			else
			{
				iVar11 = _get_num_components_in_ped(iParam0);
				iVar10 = func_1087(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1087(&(Global_1946804->f_1497.f_1[iVar5]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return false;
				}
				Jump @777; //curOff = 584
				iVar3 = func_816(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6] && func_813(&(Global_1946804->f_1497.f_1[iVar5]), -1638171711))
				{
					*uParam2 = -357399012;
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != &Global_1946804->f_57[iVar6] && func_1088(&(Global_1946804->f_1497.f_1[iVar5])))
					{
						*uParam2 = -357399012;
						return false;
					}
					if (&Global_1946804->f_1497.f_1[iVar5] == &Global_1946804->f_57[iVar5])
					{
						*uParam2 = 2143522536;
						return false;
					}
				}
			}
			*uParam2 = 0;
			return true;
			default:
				break;
	}
}

void func_944()
{
	_0xfe7c9cf376d23342(player_id(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_945()
{
	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	set_player_health_recharge_multiplier(player_id(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	_0x08e22898a6af4905(player_id(), (1f - fVar0));
	_0xfeca17cf3343694b(player_id(), (1f - fVar0));
	_0xbbadfb5e5e5766fb(player_id(), (1f - fVar1));
}

int func_946()
{
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_841(func_1089(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_947(int iParam0)
{
	switch (iParam0)
	{
		case -1217729597:
		case 363594903:
		case 425319238:
			return -62615415;
		case -1540119664:
		case 446659922:
		case 2100194981:
			return -832719552;
		case -1018798851:
		case -757567246:
		case -390982951:
			return -184823984;
		case -2054602073:
		case -585121677:
		case -378441099:
			return -1941112926;
		case 1566949660:
			return -121629511;
	}
	return 0;
}

bool func_948(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -62615415:
			if (iParam1 == 425319238)
			{
				iVar0 = 363594903;
				iVar1 = -1217729597;
			}
			else if (iParam1 == 363594903)
			{
				iVar0 = 425319238;
				iVar1 = -1217729597;
			}
			else
			{
				iVar0 = 425319238;
				iVar1 = 363594903;
			}
			break;
		case -832719552:
			if (iParam1 == -1540119664)
			{
				iVar0 = 2100194981;
				iVar1 = 446659922;
			}
			else if (iParam1 == 2100194981)
			{
				iVar0 = -1540119664;
				iVar1 = 446659922;
			}
			else
			{
				iVar0 = -1540119664;
				iVar1 = 2100194981;
			}
			break;
		case -184823984:
			if (iParam1 == -390982951)
			{
				iVar0 = -1018798851;
				iVar1 = -757567246;
			}
			else if (iParam1 == -1018798851)
			{
				iVar0 = -390982951;
				iVar1 = -757567246;
			}
			else
			{
				iVar0 = -390982951;
				iVar1 = -1018798851;
			}
			break;
		case -1941112926:
			if (iParam1 == -2054602073)
			{
				iVar0 = -378441099;
				iVar1 = -585121677;
			}
			else if (iParam1 == -378441099)
			{
				iVar0 = -2054602073;
				iVar1 = -585121677;
			}
			else
			{
				iVar0 = -2054602073;
				iVar1 = -378441099;
			}
			break;
	}
	if (func_841(iVar0, 1, 0) && func_841(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_949(int iParam0)
{
	switch (iParam0)
	{
		case 968830139:
			return -224110471;
		case -649219937:
			return 1289585739;
		case -858567048:
			return -269048282;
		case -718162726:
			return 1441506783;
		case -1284282080:
			return 780305678;
		case -725003445:
			return 1811977508;
		case -1445630104:
			return -935153695;
		case 580970876:
			return 1299744282;
		case 967601061:
			return 1631240196;
		case 1946030891:
			return 517396587;
		case -1511404982:
			return 1620353486;
		case -944465290:
			return 1816443627;
		case -1701098855:
			return -127011478;
		default:
			break;
	}
	return 0;
}

bool func_950(int iParam0, int iParam1)
{
	iVar0 = func_1090(iParam0);
	if (iVar0 != -15)
	{
		func_889(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_1091(iVar0, 1);
	}
	return false;
}

void func_951(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_952(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_953(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_954(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_955(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
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
	iVar1 = func_964(iVar9);
	iVar2 = func_964(iVar10);
	iVar3 = func_964(iVar11);
	iVar5 = func_965(iVar9);
	iVar6 = func_965(iVar10);
	iVar7 = func_965(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_964(iVar12);
		iVar8 = func_965(iVar12);
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
	if (iParam0 != 2)
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

void func_956(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_957()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1092(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_958()
{
	return _0x5461c821d00fe15a(2103522376, 0);
}

bool func_959(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_1068(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1068(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1068(iVar0))
		{
			*sParam2++;
		}
		if (func_1068(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_1068(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1068(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1068(iVar0))
		{
			*sParam2++;
		}
		if (func_1068(iVar1))
		{
			*sParam2++;
		}
		if (func_1068(iVar0) && func_1068(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_1068(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1068(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1068(iVar0))
		{
			*sParam2++;
		}
		if (func_1068(iVar1))
		{
			*sParam2++;
		}
		if (func_1068(iVar2))
		{
			*sParam2++;
		}
		if ((func_1068(iVar0) && func_1068(iVar1)) && func_1068(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1068(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1068(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1068(iVar0))
		{
			*sParam2++;
		}
		if (func_1068(iVar1))
		{
			*sParam2++;
		}
		if (func_1068(iVar2))
		{
			*sParam2++;
		}
		if (func_1068(iVar3))
		{
			*sParam2++;
		}
		if (((func_1068(iVar0) && func_1068(iVar1)) && func_1068(iVar2)) && func_1068(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_960(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_1093(1497516462);
			func_1094(2016141805);
			func_1094(1010885152);
			func_1094(-502324015);
			break;
		case 2016141805:
			func_1094(1497516462);
			func_1093(2016141805);
			func_1094(1010885152);
			func_1094(-502324015);
			break;
		case 1010885152:
			func_1094(1497516462);
			func_1094(2016141805);
			func_1093(1010885152);
			func_1094(-502324015);
			break;
		case -502324015:
			func_1094(1497516462);
			func_1094(2016141805);
			func_1094(1010885152);
			func_1093(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_1094(-538889627);
			func_1094(-538880323);
			func_1094(-1056767524);
			func_1093(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_1095();
			func_1093(iParam0);
			break;
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			func_1096();
			func_1093(iParam0);
			break;
		case 2019386373:
			func_1094(-664252410);
			func_1094(2109952320);
			func_1093(2019386373);
			break;
		case -664252410:
			func_1094(2019386373);
			func_1094(2109952320);
			func_1093(-664252410);
			break;
		case 2109952320:
			func_1094(2019386373);
			func_1094(-664252410);
			func_1093(2109952320);
			break;
		case -1674179981:
			func_1094(-1835851517);
			func_1094(-1838352012);
			func_1093(-1674179981);
			break;
		case -1835851517:
			func_1094(-1674179981);
			func_1094(-1838352012);
			func_1093(-1835851517);
			break;
		case -1838352012:
			func_1094(-1674179981);
			func_1094(-1835851517);
			func_1093(-1838352012);
			break;
		case -1717960576:
			func_1094(210001842);
			func_1093(-1717960576);
			break;
		case 210001842:
			func_1094(-1717960576);
			func_1093(210001842);
			break;
		case -150493654:
			func_1094(-1271608261);
			func_1094(1846061697);
			func_1094(-1145519186);
			func_1093(-150493654);
			break;
		case -1271608261:
			func_1094(-150493654);
			func_1094(1846061697);
			func_1094(-1145519186);
			func_1093(-1271608261);
			break;
		case 1846061697:
			func_1094(-150493654);
			func_1094(-1271608261);
			func_1094(-1145519186);
			func_1093(1846061697);
			break;
		case -1145519186:
			func_1094(-150493654);
			func_1094(-1271608261);
			func_1094(1846061697);
			func_1093(-1145519186);
			break;
		case 1766284049:
			func_1094(280705402);
			func_1094(1926308480);
			func_1093(1766284049);
			break;
		case 280705402:
			func_1094(1766284049);
			func_1094(1926308480);
			func_1093(280705402);
			break;
		case 1926308480:
			func_1094(1766284049);
			func_1094(280705402);
			func_1093(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_1094(439465264);
				func_1093(1609506757);
			}
			else
			{
				func_1094(1609506757);
				func_1094(439465264);
			}
			break;
		case 439465264:
			if (func_685(1609506757))
			{
				if (bParam1)
				{
					func_1093(439465264);
				}
				else
				{
					func_1094(439465264);
				}
			}
			break;
		case 1822001510:
			func_1094(-1612662716);
			func_1093(1822001510);
			break;
		case -1612662716:
			func_1094(1822001510);
			func_1093(-1612662716);
			break;
		case 1306158345:
			func_1094(1952610440);
			func_1094(-223469678);
			func_1094(-404698347);
			func_1094(1517904467);
			func_1093(1306158345);
			break;
		case 1952610440:
			func_1094(1306158345);
			func_1094(-223469678);
			func_1094(-404698347);
			func_1094(1517904467);
			func_1093(1952610440);
			break;
		case -223469678:
			func_1094(1306158345);
			func_1094(1952610440);
			func_1094(-404698347);
			func_1094(1517904467);
			func_1093(-223469678);
			break;
		case -404698347:
			func_1094(1306158345);
			func_1094(1952610440);
			func_1094(-223469678);
			func_1094(1517904467);
			func_1093(-404698347);
			break;
		case 1517904467:
			func_1094(1306158345);
			func_1094(1952610440);
			func_1094(-223469678);
			func_1094(-404698347);
			func_1093(1517904467);
			break;
		case 1376646519:
			func_1094(931649776);
			func_1094(-434590080);
			func_1094(1743048395);
			func_1094(449774763);
			func_1093(1376646519);
			break;
		case 931649776:
			func_1094(1376646519);
			func_1094(-434590080);
			func_1094(1743048395);
			func_1094(449774763);
			func_1093(931649776);
			break;
		case -434590080:
			func_1094(1376646519);
			func_1094(931649776);
			func_1094(1743048395);
			func_1094(449774763);
			func_1093(-434590080);
			break;
		case 1743048395:
			func_1094(1376646519);
			func_1094(931649776);
			func_1094(-434590080);
			func_1094(449774763);
			func_1093(1743048395);
			break;
		case 449774763:
			func_1094(1376646519);
			func_1094(931649776);
			func_1094(-434590080);
			func_1094(1743048395);
			func_1093(449774763);
			break;
		case -1414537028:
			func_1094(38162571);
			func_1094(1350391819);
			func_1094(54073871);
			func_1093(-1414537028);
			break;
		case 38162571:
			func_1094(-1414537028);
			func_1094(1350391819);
			func_1094(54073871);
			func_1093(38162571);
			break;
		case 1350391819:
			func_1094(-1414537028);
			func_1094(38162571);
			func_1094(54073871);
			func_1093(1350391819);
			break;
		case 54073871:
			func_1094(-1414537028);
			func_1094(38162571);
			func_1094(1350391819);
			func_1093(54073871);
			break;
		case 198200492:
			func_1093(198200492);
			func_1094(-1124061431);
			func_1094(52706132);
			func_1094(-259123672);
			break;
		case -1124061431:
			func_1094(198200492);
			func_1093(-1124061431);
			func_1094(52706132);
			func_1094(-259123672);
			break;
		case 52706132:
			func_1094(198200492);
			func_1094(-1124061431);
			func_1093(52706132);
			func_1094(-259123672);
			break;
		case -259123672:
			func_1094(198200492);
			func_1094(-1124061431);
			func_1094(52706132);
			func_1093(-259123672);
			break;
		case -919512195:
			func_1093(-919512195);
			func_1094(-1925798111);
			func_1094(420709909);
			func_1094(1703426636);
			break;
		case -1925798111:
			func_1093(-1925798111);
			func_1094(-919512195);
			func_1094(420709909);
			func_1094(1703426636);
			break;
		case 420709909:
			func_1093(420709909);
			func_1094(-919512195);
			func_1094(-1925798111);
			func_1094(1703426636);
			break;
		case 1703426636:
			func_1093(1703426636);
			func_1094(-919512195);
			func_1094(-1925798111);
			func_1094(420709909);
			break;
		case -1223121209:
			func_1093(-1223121209);
			func_1094(630808005);
			break;
		case 630808005:
			func_1093(630808005);
			func_1094(-1223121209);
			break;
		case 1453909576:
			func_1093(1453909576);
			func_1094(1643531967);
			break;
		case 1643531967:
			func_1093(1643531967);
			func_1094(1453909576);
			break;
		case 0:
			func_1093(0);
			func_1094(473295046);
			func_1094(-1738165526);
			break;
		case 473295046:
			func_1093(473295046);
			func_1094(0);
			func_1094(-1738165526);
			break;
		case -1738165526:
			func_1093(-1738165526);
			func_1094(0);
			func_1094(473295046);
			break;
		case 932909855:
			func_1093(932909855);
			func_1094(2051822093);
			break;
		case 2051822093:
			func_1093(2051822093);
			func_1094(932909855);
			break;
		case 405586984:
			func_1093(405586984);
			func_1094(1509509592);
			func_1094(-959357075);
			func_1094(-1311865656);
			break;
		case 1509509592:
			func_1093(1509509592);
			func_1094(405586984);
			func_1094(-959357075);
			func_1094(-1311865656);
			break;
		case -959357075:
			func_1093(-959357075);
			func_1094(1509509592);
			func_1094(405586984);
			func_1094(-1311865656);
			break;
		case -1311865656:
			func_1093(-1311865656);
			func_1094(1509509592);
			func_1094(-959357075);
			func_1094(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_1093(-524145696);
			}
			else
			{
				func_1094(-524145696);
			}
			func_1094(1626481264);
			func_1094(282809459);
			break;
		case 282809459:
			func_1093(282809459);
			func_1094(1626481264);
			func_1094(-524145696);
			break;
		case 1626481264:
			func_1093(1626481264);
			func_1094(-524145696);
			func_1094(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_1093(885203519);
			}
			else
			{
				func_1094(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_1093(-1080627546);
			}
			else
			{
				func_1094(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_685(iParam0))
				{
					func_1093(iParam0);
				}
			}
			else if (func_685(iParam0))
			{
				func_1094(iParam0);
			}
			break;
	}
}

void func_961(int iParam0)
{
	if (!func_1097(iParam0))
	{
		func_1099(func_1098(iParam0));
	}
}

int func_962()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1097(_0x126cbebba46693cf(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_963(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_964(iVar9);
	iVar2 = func_964(iVar10);
	iVar3 = func_964(iVar11);
	iVar5 = func_965(iVar9);
	iVar6 = func_965(iVar10);
	iVar7 = func_965(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_964(iVar12);
		iVar8 = func_965(iVar12);
	}
	if (iParam0 == iVar9)
	{
		if ((iVar1 + iParam1) >= iVar5)
		{
			iVar0 = (iVar0 + iVar5);
		}
		else
		{
			iVar0 = (iVar0 + (iVar1 + iParam1));
		}
	}
	else if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iParam0 == iVar10)
	{
		if ((iVar2 + iParam1) >= iVar6)
		{
			iVar0 = (iVar0 + iVar6);
		}
		else
		{
			iVar0 = (iVar0 + (iVar2 + iParam1));
		}
	}
	else if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iParam0 == iVar11)
	{
		if ((iVar3 + iParam1) >= iVar7)
		{
			iVar0 = (iVar0 + iVar7);
		}
		else
		{
			iVar0 = (iVar0 + (iVar3 + iParam1));
		}
	}
	else if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (iParam0 == iVar12)
		{
			if ((iVar4 + iParam1) >= iVar8)
			{
				iVar0 = (iVar0 + iVar8);
			}
			else
			{
				iVar0 = (iVar0 + (iVar4 + iParam1));
			}
		}
		else if (iVar4 >= iVar8)
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

int func_964(int iParam0)
{
	if (func_841(iParam0, 1, 0))
	{
		iVar0 = func_798(iParam0, 0, 0);
	}
	return iVar0;
}

int func_965(int iParam0)
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

int func_966(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0);
}

void func_967(int iParam0, int iParam1)
{
	_0x3ea62e56f386c997(iParam0, iParam1);
}

int func_968(int iParam0, int iParam1)
{
	if (!func_697(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

void func_969(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_968(iParam1, 5) || iParam0 == func_968(iParam1, 6)) || iParam0 == func_968(iParam1, 7)) || iParam0 == func_968(iParam1, 8)) || iParam0 == func_968(iParam1, 9))
	{
		func_959(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_810(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_812(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_970(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if ((((iParam0 == func_968(iParam1, 5) || iParam0 == func_968(iParam1, 6)) || iParam0 == func_968(iParam1, 7)) || iParam0 == func_968(iParam1, 8)) || iParam0 == func_968(iParam1, 9))
	{
		if (func_959(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_810(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_812(51, 0, 0, iVar0, func_916(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_810(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_812(51, 0, 0, iVar0, func_916(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_971()
{
	if (func_914((*Global_1347702)[37]->f_15) && Global_1392388->f_7)
	{
		return true;
	}
	return false;
}

bool func_972(int iParam0, int iParam1)
{
	if (!func_592(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_908(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_987("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_988(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_562(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_989(iVar1);
				return true;
			}
			iVar3++;
		}
		func_989(iVar1);
	}
	return false;
}

void func_973(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
}

void func_974(int iParam0)
{
	if (!func_1100(iParam0))
	{
		_0x3ea62e56f386c997(iParam0, 1);
	}
}

void func_975(int iParam0)
{
	_0x398fab9c96a81924(iParam0, 1);
}

void func_976(int iParam0, int iParam1, var uParam2)
{
	*iParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case 1234009870:
			*iParam1 = 1802325493;
			*uParam2 = 1681219929;
			break;
		case -1202134084:
			*iParam1 = -864693164;
			*uParam2 = 1681219929;
			break;
		case 1297050066:
			*iParam1 = -603289736;
			*uParam2 = 1232099469;
			break;
		case -1780177928:
			*iParam1 = -1803237008;
			*uParam2 = -2084181920;
			break;
		case -1467836497:
			*iParam1 = -1175521284;
			*uParam2 = 1950175060;
			break;
		case 1723805622:
			*iParam1 = -1559549888;
			*uParam2 = 1950175060;
			break;
		case -153287664:
			*iParam1 = -1650796693;
			*uParam2 = 836939099;
			break;
		case 1845082736:
			*iParam1 = -1521597660;
			*uParam2 = -1411815376;
			break;
		case 406755377:
			*iParam1 = -1288829256;
			*uParam2 = 218444191;
			break;
		case 1469029564:
			*iParam1 = 1393841762;
			*uParam2 = 218444191;
			break;
		case 45760211:
			*iParam1 = -851229814;
			*uParam2 = 1654725195;
			break;
		case -276295943:
			*iParam1 = 914704115;
			*uParam2 = 1858824185;
			break;
		case -2029793397:
			*iParam1 = -219896679;
			*uParam2 = -1330115686;
			break;
		case 2120467495:
			*iParam1 = 516838334;
			*uParam2 = -1330115686;
			break;
		case -2075613923:
			*iParam1 = -385817936;
			*uParam2 = -578347576;
			break;
		case 122656217:
			*iParam1 = 1192843172;
			*uParam2 = 231465488;
			break;
		case 2107187484:
			*iParam1 = 954871696;
			*uParam2 = -1878508229;
			break;
		case -791844268:
			*iParam1 = -1217273132;
			*uParam2 = -1878508229;
			break;
		case 305770744:
			*iParam1 = -2087227528;
			*uParam2 = 314966081;
			break;
		case 550900979:
			*iParam1 = -618066518;
			*uParam2 = 2113196069;
			break;
	}
}

int func_977(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_1101(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_978(int iParam0, int iParam1)
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

bool func_979(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1102();
	if (iParam2 == 39)
	{
		Var0 = { func_902(iParam0, 1, 0) };
		iParam2 = func_978(func_977(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_813(iParam0, 866047851) && func_1086(&(Global_1946804->f_1378)) >= 2)
	{
		return false;
	}
	if ((func_982(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2])
	{
		func_1103(func_1101(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_1104(iParam2);
	func_1105(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2] != &Global_1946804->f_57[iParam2] && Global_1946804->f_57[iParam2]->f_1 > 1)
	{
		func_1106(Global_1946804->f_1378.f_1[iParam2], 4, 6);
		func_1106(Global_1946804->f_1497.f_1[iParam2], 4, 6);
	}
	func_1107(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804->f_1378.f_1[iParam2]->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2] = iParam0;
	Global_1946804->f_1378.f_1[iParam2]->f_1 = func_1108(iParam0, iParam2, iParam1, func_161() != -1);
	if (bParam4)
	{
		func_1109(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_1109(&(Global_1946804->f_1378), 1, 0);
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
				func_1110(func_1101(&(Global_1946804->f_2589.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_980(bool bParam0, bool bParam1, bool bParam2)
{
	func_1111(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

void func_981(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_1112(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1113(Var0);
}

bool func_982(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_983()
{
	func_1114(&(Global_1946804->f_2776));
	func_1115(32768);
	func_1110(1108822547, 8, 6);
}

int func_984(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_978(iParam0, 1);
	switch (iParam0)
	{
		case 1108822547:
			if (&Global_1946804->f_1497.f_1[iVar1] == &Global_1946804->f_57[iVar1] || &Global_1946804->f_1378.f_1[iVar1] == &Global_1946804->f_57[iVar1])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_985(int iParam0)
{
	if (func_1116(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1117(Var0);
}

void func_986(int iParam0, int iParam1, int iParam2)
{
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_1117(Var0);
}

bool func_987(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_910(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_988(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_989(int iParam0)
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

float func_990()
{
	if (func_1118())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_1119(2);
	}
	if (Global_1347477->f_119)
	{
		return func_1119(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1120();
	fVar2 = func_1121();
	fVar3 = func_1122();
	fVar4 = func_1123();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1124()));
	fVar7 = (func_1119(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1125(3, round((to_float(iVar8) * fVar10)), 0);
	func_1126(3, fVar9, fVar9 > 100f);
	return func_1127(fVar7, -100f, 100f);
}

float func_991()
{
	if (func_1118())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_1119(1);
	}
	if (Global_1347477->f_119)
	{
		return func_1119(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1120();
	fVar2 = func_1121();
	fVar3 = func_1122();
	fVar4 = func_1123();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1124()));
	fVar7 = (func_1119(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1125(2, round((to_float(iVar8) * fVar10)), 0);
	func_1126(2, fVar9, fVar9 > 100f);
	return func_1127(fVar7, -100f, 100f);
}

float func_992()
{
	if (func_1118())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_1119(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1128())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1129())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_1119(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1120();
	fVar2 = func_1121();
	fVar3 = func_1122();
	fVar4 = func_1123();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1124()));
	fVar7 = (func_1119(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1125(1, round((to_float(iVar8) * fVar10)), 0);
	func_1126(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_1119(0);
	}
	return func_1127(fVar7, -100f, 100f);
}

bool func_993(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_994(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_592(iParam0, 0))
	{
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return 0;
	}
	if (func_906(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return 0;
	}
	if (!func_820(0))
	{
		return 0;
	}
	if (!_0xcb5d11f9508a928d(func_910(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_995(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -2061583405:
			return Global_1946804->f_2657.f_21;
		case 81053684:
			return Global_1946804->f_2657.f_23;
		case -525676072:
			return Global_1946804->f_2657.f_22;
		case -1719060085:
			return Global_1946804->f_2657.f_24;
		case -413129408:
			return Global_1946804->f_2657.f_25;
		case -999503751:
			if (bParam1)
			{
				return Global_1946804->f_2657.f_20;
			}
			else
			{
				return func_1130();
			}
			break;
	}
	return 0;
}

int func_996(int iParam0)
{
	switch (iParam0)
	{
		case 439606975:
			return 14;
		case 1661121390:
			return 6;
		case 1164374808:
			return 7;
		case 624063935:
			return 9;
		case -1476781101:
			return 10;
		case 1560492757:
			return 15;
		case -769081407:
			return 16;
		case 688004210:
			return 20;
		case 166243423:
			return 0;
		case -1826731591:
			return 24;
		case 2119049229:
			return 25;
		case 1352942778:
			return 26;
		case 1964379549:
			return 27;
		case 1201189539:
			return 28;
		case 1351927599:
			return 21;
		case 2032023096:
			return 22;
		case 1784889667:
			return 13;
		case 1160643979:
			return 8;
		case 1383300684:
			return 1;
		case 2051441678:
			return 2;
		case 162509669:
			return 3;
		case 635948769:
			return 4;
		case 274995506:
			return 5;
		case 1902428294:
			return 17;
		case -2114499732:
			return 18;
		case 800827126:
			return 19;
		case 294553332:
			return 11;
		case 1788874135:
			return 12;
		case -1243402388:
			return 66;
		case 65931886:
			return 67;
		case 1371678229:
			return 68;
		case 2102263084:
			return 69;
		case -272211555:
			return 61;
		case -55563408:
			return 64;
		case -1914506115:
			return 71;
		case 802495462:
			return 75;
		case 842905332:
			return 77;
		case 1511551084:
			return 79;
		case -1725704631:
			return 81;
		case 1257427489:
			return 83;
		case -659341240:
			return 85;
		case 2038771525:
			return 87;
		case -535599244:
			return 89;
		case -389591806:
			return 73;
		case -1205612021:
			return 70;
		case 890706995:
			return 93;
		case 1156438275:
			return 90;
		case -1611873049:
			return 91;
		case 594312243:
			return 92;
		case -978578725:
			return 94;
		case -361635024:
			return 62;
		case -1951220140:
			return 78;
		case 1460520700:
			return 76;
		case 523337834:
			return 80;
		case -19271249:
			return 82;
		case 214175524:
			return 84;
		case -1303643297:
			return 86;
		case 411856831:
			return 88;
		case -926815459:
			return 72;
		case -1300731953:
			return 74;
		case -409616653:
			return 65;
		case 509954990:
			return 29;
		case -445916744:
			return 30;
		case -866249154:
			return 31;
		case -2077063704:
			return 32;
		case 205207539:
			return 33;
		case -1033657275:
			return 34;
		case 1806002837:
			return 35;
		case 705324896:
			return 36;
		case -1541763703:
			return 37;
		case 387052410:
			return 38;
		case -361288914:
			return 39;
		case -911054515:
			return 40;
		case 1084200963:
			return 41;
		case 1847948074:
			return 42;
		case -1212526764:
			return 43;
		case 1851440270:
			return 44;
		case -2028985700:
			return 45;
		case 1074435214:
			return 46;
		case -883015675:
			return 47;
		case -1047155604:
			return 48;
		case 1123231221:
			return 49;
		case 1866989210:
			return 50;
		case 478183719:
			return 51;
		case -1698955868:
			return 52;
		case -2029378634:
			return 53;
		case 1339864416:
			return 54;
		case 890998115:
			return 55;
		case -1376288999:
			return 56;
		case -1041123771:
			return 57;
		case 1389254668:
			return 58;
		case -346112633:
			return 59;
		case 773309172:
			return 60;
		case -291256376:
			return 23;
		default:
			break;
	}
	return -1;
}

bool func_997(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_998(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_997(iParam0))
	{
		return;
	}
	if (func_1131(iParam0))
	{
		return;
	}
	if (!func_1132(iParam0))
	{
		func_1133(iParam0, 1, 0);
	}
	iVar0 = func_1134(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_1135(iParam0, 512))
		{
			func_981(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_1136() && !bParam1) && !func_366(0, 0, 1))
	{
		func_647(_create_var_string(10, "OUT_JOURN_DONE", _create_var_string(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_1137(iParam0, 6);
	if (bParam2)
	{
		if (!func_366(0, 0, 1))
		{
			func_671(1, 4);
		}
	}
}

int func_999()
{
	return Global_1946804->f_1;
}

bool func_1000(int iParam0, bool bParam1)
{
	return func_995(iParam0, 0) < func_1138(iParam0, bParam1);
}

bool func_1001(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_816(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1002(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_978(iParam0, 1)] != &Global_1946804->f_57[func_978(iParam0, 1)];
}

void func_1003(int iParam0, int iParam1)
{
	if (func_813(iParam1, 130796156))
	{
		func_1139(iParam1, 0);
	}
	else if (func_813(iParam1, 930141731))
	{
		func_1139(iParam1, 1);
		func_1140(iParam0);
	}
}

void func_1004(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (&uParam0->f_1[iVar0] == iParam1)
		{
			return;
		}
		if ((((iParam1 == 617531372 && &uParam0->f_1[iVar0] == 291123060) || (iParam1 == 291123060 && &uParam0->f_1[iVar0] == 617531372)) || (iParam1 == 1356624740 && &uParam0->f_1[iVar0] == 1884295263)) || (iParam1 == 1884295263 && &uParam0->f_1[iVar0] == 1356624740))
		{
			uParam0->f_1[iVar0] = iParam1;
			return;
		}
		iVar0++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

int func_1005(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_1141(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_1142(uParam2, iParam0, Var1);
	return 1;
}

int func_1006(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_1007(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL";
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH";
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL";
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH";
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON";
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS";
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR";
		case 7:
			return "PROVISION_FISH_MUSKIE";
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE";
		case 9:
			return "PROVISION_FISH_PERCH";
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL";
		case 11:
			return "PROVISION_FISH_ROCK_BASS";
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS";
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON";
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT";
		default:
			break;
	}
	return "FISHTYPE_UNKNOWN";
}

int func_1008(int iParam0)
{
	if (!func_1143(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

bool func_1009()
{
	return !&Global_1911774;
}

void func_1010(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	Global_1911774->f_4[Global_1911774->f_3] = iParam0;
	Global_1911774->f_4[Global_1911774->f_3]->f_1 = iParam1;
	Global_1911774->f_4[Global_1911774->f_3]->f_2 = bParam2;
	Global_1911774->f_4[Global_1911774->f_3]->f_3 = iParam3;
	if (Global_1911774->f_3 < 20)
	{
		Global_1911774->f_3++;
	}
}

char* func_1011(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_1012(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_1013(int iParam0)
{
	iVar0 = func_978(func_1144(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946804->f_1497.f_1[iVar0]->f_1;
	}
	return 0;
}

bool func_1014(var uParam0)
{
	if (func_1015(81053684, uParam0))
	{
		return true;
	}
	if (func_1015(-525676072, uParam0))
	{
		return true;
	}
	return false;
}

bool func_1015(int iParam0, var uParam1)
{
	iVar1 = func_978(func_1144(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1946804->f_1497.f_1[iVar1] != 0 && &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1];
		if (func_816(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return true;
		}
	}
	*uParam1 = 0;
	return false;
}

bool func_1016()
{
	return Global_1347398->f_1 == 0;
}

void func_1017(int iParam0)
{
	Global_1347398->f_1 = iParam0;
}

bool func_1018()
{
	return Global_1347398->f_1 == 1000;
}

bool func_1019()
{
	return Global_1347398->f_1 == 2000;
}

bool func_1020()
{
	return Global_1347398->f_1 == 3000;
}

void func_1021(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_392(1356759001) };
	stat_id_set_int(&Var0, iParam0, true);
}

bool func_1022(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_1023()
{
	return Global_1109400->f_245;
}

bool func_1024(int iParam0)
{
	return iParam0 > -1;
}

bool func_1025(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

int func_1026(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_445(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_1027(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_1028(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_1029(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_1030(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_1031(int iParam0, int iParam1)
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

void func_1032(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1145(iParam0, iParam6);
	func_1146(iParam0, iParam5);
	func_1147(iParam0, iParam4);
	func_1148(iParam0, iParam3);
	func_1149(iParam0, iParam2);
	func_1150(iParam0, iParam1);
}

int func_1033(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_592(iParam0, 0))
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

struct<4> func_1034(bool bParam0)
{
	return func_934(1328661203, func_1151(), -1591664384, bParam0);
}

struct<4> func_1035(bool bParam0)
{
	iVar0 = func_910(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_934(923904168, func_1034(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_934(923904168, func_1034(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_934(923904168, func_1034(bParam0), -740156546, 0);
}

bool func_1036(int iParam0, bool bParam1)
{
	if (func_816(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_385(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_1037(bool bParam0)
{
	iVar0 = func_910(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_934(271701509, func_1034(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_934(271701509, func_1034(bParam0), 12999093, 0);
}

bool func_1038(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_816(iParam0);
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

bool func_1039(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_910(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_1040(int iParam0)
{
	if (!func_592(*iParam0, 0))
	{
		return 0;
	}
	switch (*iParam0)
	{
		case -1073808995:
			*iParam0 = -1753819339;
			return 1;
		case 1903483453:
			*iParam0 = -1527293029;
			return 1;
		case -541584777:
			*iParam0 = 206762213;
			return 1;
		case 998010398:
			*iParam0 = -324053813;
			return 1;
		case -1424823393:
			*iParam0 = -885810591;
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_1041(int iParam0, var uParam1, bool bParam2)
{
	if (!func_592(iParam0, 0))
	{
		return false;
	}
	Var0 = { func_902(iParam0, 0, 1) };
	iVar5 = 1728382685;
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_931((386 + iVar29), 1);
		if (func_932(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_933(iParam0, &Var6, iVar5);
			if ((bParam2 && bVar28) || !bVar28)
			{
				*uParam1 = iVar5;
				return true;
			}
		}
		iVar29++;
	}
	return false;
}

int func_1042(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_592(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_934(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_910(bParam6), &Var0, 0);
	return uVar4;
}

struct<14> func_1043(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_1044(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_1045(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_910(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_1046(int iParam0)
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

float func_1047(int iParam0)
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
			return func_1152(iParam0);
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
			return func_1152(iParam0);
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
			return func_1152(iParam0);
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

bool func_1048(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_385(18);
		case 2:
			return func_385(20);
		case 1:
			return func_385(19);
		default:
			break;
	}
	return true;
}

int func_1049(int iParam0)
{
	return func_1153(&(Global_40.f_11095.f_11[iParam0]));
}

void func_1050(int iParam0, float fParam1, bool bParam2)
{
	if (func_161() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_385(31))
	{
		return;
	}
	iVar0 = func_1049(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	set_attribute_points(Global_35, iParam0, floor(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_1049(iParam0);
	if (func_1154(iParam0) && func_1155(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_1156(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_1157(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!is_radar_hidden() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_461(func_1158(iParam0), 0);
					}
					func_1159(iParam0, iVar2, iVar3);
					func_1160(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = get_game_timer();
}

char* func_1051(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_1052(int iParam0)
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

int func_1053()
{
	return func_1161(Global_40.f_12019);
}

int func_1054()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_915(iVar1);
		if (func_841(iVar2, 1, 0) || func_1060(func_1059(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1055()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1162(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1056()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_1065(_0x126cbebba46693cf(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1057()
{
	return _0x3a65f4844913a047(2103522376, 0);
}

int func_1058(int iParam0)
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

int func_1059(int iParam0)
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

bool func_1060(int iParam0)
{
	return (Global_40.f_12019 && iParam0) != 0;
}

char* func_1061(int iParam0)
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

int func_1062(int iParam0)
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

int func_1063(int iParam0)
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

char* func_1064(int iParam0)
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

bool func_1065(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

char* func_1066(int iParam0)
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

char* func_1067(int iParam0)
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

bool func_1068(int iParam0)
{
	if (func_1163(iParam0) && func_841(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_1164(iParam0) && func_1165(iParam0))
	{
		return true;
	}
	return false;
}

char* func_1069(int iParam0)
{
	if (!func_592(iParam0, 0))
	{
		return "";
	}
	return _get_label_text_by_hash(func_859(iParam0));
}

int func_1070(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

int func_1071(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

void func_1072(bool bParam0)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (bParam0)
	{
		_0xa0c683284df027c7(player_id(), 15, 1);
	}
	else
	{
		_0xa0c683284df027c7(player_id(), 15, 0);
		_0xa0c683284df027c7(player_id(), 1, 1);
	}
}

void func_1073(int iParam0)
{
	if (!_databinding_is_data_id_valid(Global_1955569->f_5.f_1))
	{
		return;
	}
	if (_databinding_get_array_count(Global_1955569->f_5.f_1) > iParam0)
	{
		iVar0 = _databinding_get_item_context_by_index(Global_1955569->f_5.f_1, iParam0);
		if (iVar0 == &Global_1955569->f_5.f_2[iParam0])
		{
			return;
		}
	}
	_databinding_insert_ui_item_to_list_from_context_string_alias(Global_1955569->f_5.f_1, iParam0, "pause_info_panel_list", &(Global_1955569->f_5.f_2[iParam0]));
}

void func_1074(bool bParam0)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35) || is_ped_injured(Global_35))
	{
	}
	set_ped_config_flag(Global_35, 440, !bParam0);
}

void func_1075(bool bParam0)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35) || is_ped_injured(Global_35))
	{
	}
	set_ped_config_flag(Global_35, 439, !bParam0);
}

void func_1076(bool bParam0)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35) || is_ped_injured(Global_35))
	{
	}
	set_ped_config_flag(Global_35, 438, !bParam0);
}

void func_1077(bool bParam0)
{
	iVar0 = 398076311;
	if (bParam0)
	{
		_hide_hud_component(iVar0);
	}
	else
	{
		_display_hud_component(iVar0);
	}
}

void func_1078(bool bParam0)
{
	iVar0 = 50;
	iVar1 = player_id();
	if (bParam0)
	{
		_0x0751d461f06e41ce(iVar1, iVar0, 0, 1);
		_0x0751d461f06e41ce(iVar1, iVar0, 1, 1);
	}
	else
	{
		_0x0751d461f06e41ce(iVar1, iVar0, 0, 0);
		_0x0751d461f06e41ce(iVar1, iVar0, 1, 0);
	}
}

void func_1079(bool bParam0)
{
	iVar0 = 49;
	iVar1 = player_id();
	if (bParam0)
	{
		_0x0751d461f06e41ce(iVar1, iVar0, 0, 1);
		_0x0751d461f06e41ce(iVar1, iVar0, 1, 1);
	}
	else
	{
		_0x0751d461f06e41ce(iVar1, iVar0, 0, 0);
		_0x0751d461f06e41ce(iVar1, iVar0, 1, 0);
	}
}

int func_1080(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_978(iParam0, 1)]);
}

void func_1081()
{
	if (!_unlock_is_unlocked(-1526891582))
	{
		func_1166();
		_unlock_set_unlocked(-1526891582, true);
		func_819(-916314281);
		func_865(-916314281, 1, 752097756);
		set_current_ped_weapon(Global_35, -916314281, true, 2, false, false);
		func_819(494733111);
		func_865(494733111, 1, 752097756);
		set_current_ped_weapon(Global_35, 494733111, true, 4, false, false);
	}
}

bool func_1082(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_910(0);
	*uParam1 = { func_934(iParam0, func_1035(0), iParam3, 0) };
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

bool func_1083(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

bool func_1084(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

int func_1085(int iParam0)
{
	Var0 = { func_902(iParam0, 1, 0) };
	return func_977(Var0.f_4);
}

int func_1086(var uParam0)
{
	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_813(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_813(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_813(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_813(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_813(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_813(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

int func_1087(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam0 == &Global_1946804->f_57[func_978(iParam1, 1)])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_982(524288))
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

bool func_1088(int iParam0)
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

int func_1089(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 968830139;
		case 1:
			return -649219937;
		case 2:
			return -858567048;
		case 3:
			return -718162726;
		case 4:
			return -1284282080;
		case 5:
			return -725003445;
		case 6:
			return -1445630104;
		case 7:
			return 580970876;
		case 8:
			return 967601061;
		case 9:
			return 1946030891;
		case 10:
			return -1511404982;
		case 11:
			return -944465290;
		case 12:
			return -1701098855;
		case 13:
			return 425319238;
		case 14:
			return 363594903;
		case 15:
			return -1217729597;
		case 16:
			return -1540119664;
		case 17:
			return 2100194981;
		case 18:
			return 446659922;
		case 19:
			return -390982951;
		case 20:
			return -1018798851;
		case 21:
			return -757567246;
		case 22:
			return -2054602073;
		case 23:
			return -378441099;
		case 24:
			return -585121677;
		case 25:
			return 1566949660;
		default:
			break;
	}
	return 0;
}

int func_1090(int iParam0)
{
	return func_1167(iParam0, -1);
}

bool func_1091(int iParam0, bool bParam1)
{
	return func_1168(func_530(), iParam0, bParam1);
}

bool func_1092(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

void func_1093(int iParam0)
{
	iVar0 = func_775(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		set_bit(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = network_player_id_to_int();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			set_bit(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			set_bit((*Global_1055058)[iVar3]->f_72[iVar1], iVar2);
		}
		set_bit(Global_1058888->f_40567[iVar1], iVar2);
	}
	Global_1934765 = 0;
}

void func_1094(int iParam0)
{
	iVar0 = func_775(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		clear_bit(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = network_player_id_to_int();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			clear_bit(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			clear_bit((*Global_1055058)[iVar3]->f_72[iVar1], iVar2);
		}
	}
	Global_1934765 = 0;
}

void func_1095()
{
	func_1094(-939420910);
	func_1094(-1187950766);
	func_1094(356365161);
	func_1094(753127042);
	func_1094(-2038424081);
	func_1094(1884271742);
	func_1094(459290420);
}

void func_1096()
{
	func_1094(704802028);
	func_1094(588987611);
	func_1094(2008888900);
	func_1094(1649996811);
	func_1094(227918160);
	func_1094(168171957);
	func_1094(1193080109);
	func_1094(-491981251);
	func_1094(-639037538);
	func_1094(-618620429);
}

bool func_1097(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_1098(int iParam0)
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

void func_1099(int iParam0)
{
	Global_40.f_12019.f_43 = (Global_40.f_12019.f_43 || iParam0);
}

bool func_1100(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_1101(int iParam0, int iParam1)
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

void func_1102()
{
	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		iVar0++;
	}
}

void func_1103(int iParam0)
{
	func_1110(iParam0, 8, 6);
}

void func_1104(int iParam0)
{
	func_1169(&(Global_1946804->f_2589), iParam0);
}

void func_1105(int iParam0, int iParam1)
{
	func_1170(&(Global_1946804->f_2589), iParam0, iParam1);
}

void func_1106(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_1107(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_816(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1171(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1105(iVar1, iVar3);
		}
	}
	if (func_1002(-1586649372) && func_1171(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1105(iVar1, iVar3);
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
						func_1105(iVar1, iVar3);
					}
				}
			}
			func_1172(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1172(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_1105(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_1172(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_1105(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_1105(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_1172(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_1172(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_1105(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_1172(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1415; //curOff = 807
				if (iParam1 == &Global_1946804->f_57[iParam2])
				{
					iVar1 = 37;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1105(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1105(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_816(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1105(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_1088(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_816(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1105(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_813(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1105(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 1228
				iVar1 = 36;
				if (&uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1105(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_1088(&(Global_1946804->f_1497.f_1[iVar1])) || func_813(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1105(iVar1, iVar3);
					}
				}
			}
			switch (func_816(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_816(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1105(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_816(&(uParam0->f_1[iVar1])) || func_813(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1105(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_1108(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = func_1173(0);
	if (iParam2 != 0 && func_1174(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_1175(iParam0, func_1101(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_1109(var uParam0, bool bParam1, int iParam2)
{
	bVar6 = func_161() != -1;
	iVar7 = func_1173(0);
	if (func_982(32768))
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
			iVar5 = func_1101(iVar0, 1);
			if (func_1176(iVar5, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
			{
			}
			else if (func_1176(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
			{
			}
			else
			{
				iVar4 = func_1087(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_1177(uParam0);
				if (iVar3 > 0)
				{
					if (!func_982(524288))
					{
						func_1112(524288);
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
							iVar5 = func_1101(iVar0, 1);
							if (func_1176(iVar5, 8))
							{
							}
							else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
							{
							}
							else if (func_1176(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
							{
							}
							else
							{
								iVar4 = func_1087(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0] = &Global_1946804->f_57[iVar0];
									uParam0->f_1[iVar0]->f_1 = 0;
									if (bParam1)
									{
										func_1105(iVar0, iParam2);
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
					func_1115(524288);
				}
			}
		}
	}
}

void func_1110(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_978(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_978(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_978(iParam0, 1)])->f_10 && iParam1));
}

void func_1111(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1178(&(uParam0->f_2[iVar0]), bParam1, bParam2);
		iVar0++;
	}
	if (func_161() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_1179(2, Global_26796.f_776)) || Global_1946804->f_1497 != func_1134(0))
		{
			if (Global_40.f_7157[Global_40.f_7729] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729] = (&Global_40.f_7157[Global_40.f_7729] - Global_40.f_7157[Global_40.f_7729] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729] |= 4096;
				Global_1946804->f_1497 = func_1134(Global_40.f_7729);
				Global_1946804->f_1378 = func_1134(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_1180(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_1181(0, 1);
	}
}

void func_1112(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_1113(struct<4> Param0)
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
			if (func_1182(Param0))
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
			func_1183(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_1112(8);
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
			if (func_1182(Param0))
			{
				return;
			}
			func_1183(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_1112(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_986(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

void func_1114(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_8 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3[0] = 0;
	uParam0->f_3[1] = 0;
	uParam0->f_3[2] = 0;
	uParam0->f_3[3] = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	if (uParam0->f_12)
	{
		_0x13e7320c762f0477(uParam0->f_13);
	}
	uParam0->f_12 = 0;
}

void func_1115(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

bool func_1116(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_1117(struct<4> Param0)
{
	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_1182(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1] == Param0 && Global_1946804->f_769[iVar1]->f_2 == Param0.f_2) && Global_1946804->f_769[iVar1]->f_3 == Param0.f_3) && Global_1946804->f_769[iVar1]->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1] == 34 && func_1182(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_1183(Param0);
	*Global_1946804->f_769[Global_1946804->f_854] = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_1112(8);
}

bool func_1118()
{
	if (Global_1572887->f_12 != -1)
	{
		return false;
	}
	return Global_1347477->f_203;
}

float func_1119(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

float func_1120()
{
	fVar0 = func_1184(13);
	iVar1 = func_1185(fVar0);
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

float func_1121()
{
	if (is_ped_on_mount(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_1122()
{
	if (func_942())
	{
		if (_get_special_edition_core_stats_bonus_enabled())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_1123()
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

float func_1124()
{
	return Global_1955565->f_3;
}

void func_1125(int iParam0, char* sParam1, bool bParam2)
{
	sVar0 = func_1186(iParam0, 1, 0, 0);
	sVar0 = _create_var_string(2, sVar0, sParam1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[1]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[1]), bParam2);
}

void func_1126(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_1186(iParam0, 2, 0, 0);
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

float func_1127(float fParam0, float fParam1, float fParam2)
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

bool func_1128()
{
	return func_1184(12) <= -99f;
}

bool func_1129()
{
	return func_1184(12) >= 99f;
}

int func_1130()
{
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_816(iVar1) == -999503751)
		{
			if (func_1187() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_1131(int iParam0)
{
	if (!func_997(iParam0))
	{
		return false;
	}
	if (func_1135(iParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_1132(int iParam0)
{
	if (!func_997(iParam0))
	{
		return false;
	}
	if (func_1135(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_1133(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_997(iParam0))
	{
		return;
	}
	if (!func_1132(iParam0))
	{
		func_1137(iParam0, 2);
		if (bParam2)
		{
			if (!func_366(0, 0, 1))
			{
				func_671(1, 4);
			}
		}
		if ((!func_1136() && !bParam1) && !func_366(0, 0, 1))
		{
			func_647(_create_var_string(10, "OUT_JOURN_ADD", func_1188(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_1134(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return 439606975;
		case 6:
			return 1661121390;
		case 7:
			return 1164374808;
		case 8:
			return 1160643979;
		case 9:
			return 624063935;
		case 10:
			return -1476781101;
		case 11:
			return 294553332;
		case 12:
			return 1788874135;
		case 15:
			return 1560492757;
		case 16:
			return -769081407;
		case 17:
			return 1902428294;
		case 18:
			return -2114499732;
		case 19:
			return 800827126;
		case 20:
			return 688004210;
		case 0:
			return 166243423;
		case 1:
			return 1383300684;
		case 2:
			return 2051441678;
		case 3:
			return 162509669;
		case 4:
			return 635948769;
		case 5:
			return 274995506;
		case 24:
			return -1826731591;
		case 25:
			return 2119049229;
		case 26:
			return 1352942778;
		case 27:
			return 1964379549;
		case 28:
			return 1201189539;
		case 21:
			return 1351927599;
		case 22:
			return 2032023096;
		case 23:
			return -291256376;
		case 66:
			return -1243402388;
		case 67:
			return 65931886;
		case 68:
			return 1371678229;
		case 69:
			return 2102263084;
		case 61:
			return -272211555;
		case 64:
			return -55563408;
		case 71:
			return -1914506115;
		case 75:
			return 802495462;
		case 77:
			return 842905332;
		case 78:
			return -1951220140;
		case 79:
			return 1511551084;
		case 81:
			return -1725704631;
		case 83:
			return 1257427489;
		case 85:
			return -659341240;
		case 87:
			return 2038771525;
		case 89:
			return -535599244;
		case 73:
			return -389591806;
		case 70:
			return -1205612021;
		case 93:
			return 890706995;
		case 90:
			return 1156438275;
		case 91:
			return -1611873049;
		case 92:
			return 594312243;
		case 94:
			return -978578725;
		case 13:
			return 1784889667;
		case 62:
			return -361635024;
		case 76:
			return 1460520700;
		case 80:
			return 523337834;
		case 82:
			return -19271249;
		case 84:
			return 214175524;
		case 86:
			return -1303643297;
		case 88:
			return 411856831;
		case 72:
			return -926815459;
		case 74:
			return -1300731953;
		case 65:
			return -409616653;
		case 29:
			return 509954990;
		case 30:
			return -445916744;
		case 31:
			return -866249154;
		case 32:
			return -2077063704;
		case 33:
			return 205207539;
		case 34:
			return -1033657275;
		case 35:
			return 1806002837;
		case 36:
			return 705324896;
		case 37:
			return -1541763703;
		case 38:
			return 387052410;
		case 39:
			return -361288914;
		case 40:
			return -911054515;
		case 41:
			return 1084200963;
		case 42:
			return 1847948074;
		case 43:
			return -1212526764;
		case 44:
			return 1851440270;
		case 45:
			return -2028985700;
		case 46:
			return 1074435214;
		case 47:
			return -883015675;
		case 48:
			return -1047155604;
		case 49:
			return 1123231221;
		case 50:
			return 1866989210;
		case 51:
			return 478183719;
		case 52:
			return -1698955868;
		case 53:
			return -2029378634;
		case 54:
			return 1339864416;
		case 55:
			return 890998115;
		case 56:
			return -1376288999;
		case 57:
			return -1041123771;
		case 58:
			return 1389254668;
		case 59:
			return -346112633;
		case 60:
			return 773309172;
		default:
			break;
	}
	return 0;
}

bool func_1135(int iParam0, int iParam1)
{
	if (!func_997(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0] && iParam1) != 0;
}

bool func_1136()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

void func_1137(int iParam0, int iParam1)
{
	if (!func_997(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0] = (Global_40.f_7157[iParam0] || iParam1);
}

int func_1138(int iParam0, bool bParam1)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case -2061583405:
			iVar0 = Global_1946804->f_2657.f_26.f_1;
			break;
		case 81053684:
			iVar0 = 1;
			break;
		case -525676072:
			iVar0 = Global_1946804->f_2657.f_26.f_2;
			break;
		case -1719060085:
			iVar0 = 1;
			break;
		case -999503751:
			iVar0 = Global_1946804->f_2657.f_26;
			break;
		case -413129408:
			iVar0 = 1;
			break;
		default:
			return 0;
	}
	switch (iParam0)
	{
		case -999503751:
			if (iVar0 > 0 && !bParam1)
			{
				iVar0 = (iVar0 - 1);
			}
			break;
	}
	return iVar0;
}

void func_1139(int iParam0, bool bParam1)
{
	iVar0 = func_1189(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_815(50);
			}
			else
			{
				func_815(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_815(51);
			}
			else
			{
				func_815(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_1190(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_846();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_846();
			}
			break;
		case 3:
			func_815(24);
			if (bParam1)
			{
				if (!func_1190(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_846();
				}
			}
			break;
	}
}

void func_1140(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_1191(0))
			{
				iVar0++;
			}
			if (func_1191(2))
			{
				iVar0++;
			}
			if (func_1191(4))
			{
				iVar0++;
			}
			if (!func_1192(16))
			{
				if (iVar0 == 1)
				{
					func_1193();
					func_461(456, 1);
					func_1194(16);
				}
			}
			if (!func_1192(32))
			{
				if (iVar0 >= 3)
				{
					func_1193();
					func_461(456, 1);
					func_1194(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_1191(1))
			{
				iVar0++;
			}
			if (func_1191(3))
			{
				iVar0++;
			}
			if (func_1191(7))
			{
				iVar0++;
			}
			if (!func_1192(1))
			{
				if (iVar0 == 1)
				{
					func_1195();
					func_461(457, 1);
					func_1194(1);
				}
			}
			if (!func_1192(2))
			{
				if (iVar0 >= 3)
				{
					func_1195();
					func_461(457, 1);
					func_1194(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_1191(5))
			{
				iVar0++;
			}
			if (func_1191(6))
			{
				iVar0++;
			}
			if (func_1191(8))
			{
				iVar0++;
			}
			if (!func_1192(4))
			{
				if (iVar0 == 1)
				{
					func_1196();
					func_461(455, 1);
					func_1194(4);
				}
			}
			if (!func_1192(8))
			{
				if (iVar0 >= 3)
				{
					func_1196();
					func_461(455, 1);
					func_1194(8);
				}
			}
			break;
	}
}

void func_1141(var uParam0)
{
	func_1004(uParam0, 143479330);
	if (Global_1946804->f_1 == 2026485318)
	{
		func_1004(uParam0, 617531372);
	}
	else
	{
		func_1004(uParam0, 291123060);
	}
}

void func_1142(var uParam0, int iParam1, struct<14> Param2)
{
	if (!func_1197(uParam0))
	{
		return;
	}
	if (&Global_1224866 < 20)
	{
		Global_1224866 = &Global_1224866 + 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*Global_1224866->f_1[iVar0] = { *(Global_1224866->f_1[iVar0 + 1]) };
			iVar0++;
		}
	}
	Var1.f_7.f_2.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	*(Global_1224866->f_1[(&Global_1224866 - 1)]) = { Var1 };
}

bool func_1143(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
				Jump @230; //curOff = 56
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
					Jump @230; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @230; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @230; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = iVar1;
					uParam1->f_1 = iVar2;
					uParam1->f_2 = iParam2;
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

int func_1144(int iParam0)
{
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_977(iVar0);
}

void func_1145(int iParam0, int iParam1)
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

void func_1146(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_1147(int iParam0, int iParam1)
{
	iVar0 = func_1027(*iParam0);
	iVar1 = func_1026(*iParam0);
	if (iParam1 < 1 || iParam1 > func_1031(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_1148(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_1149(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_1150(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

struct<4> func_1151()
{
	return Var0;
}

float func_1152(int iParam0)
{
	iVar4 = func_1046(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = &Global_40.f_11095.f_11[iVar4];
			iVar5 = func_1153(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_1198(iVar6) - func_1198(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1f;
}

int func_1153(float fParam0)
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

int func_1154(int iParam0)
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

int func_1155(int iParam0)
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

int func_1156(float fParam0, float fParam1)
{
	iVar0 = func_1153(fParam0);
	fVar1 = to_float(func_1198(iVar0));
	fVar2 = to_float(func_1198(iVar0 + 1));
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

int func_1157(int iParam0)
{
	if (func_1199(iParam0, &iVar0))
	{
		return func_1198(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_1200())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_1200())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_1200())
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

int func_1158(int iParam0)
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

void func_1159(int iParam0, int iParam1, int iParam2)
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
	iVar3 = (iVar3 + func_1201(iParam0));
	sVar4 = func_1203(func_1202(iVar3, iParam2));
	sVar6 = func_1204(iParam0);
	if (!is_string_null_or_empty(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = _create_var_string(10, sVar0, func_1205(iParam0));
	iVar8 = func_1206(iParam0);
	iVar9 = get_hash_key(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = iVar8;
		Var10.f_4 = 1;
		Var10.f_5 = func_1207(iParam0);
		_uilog_post_notification(&Var10);
	}
	func_924(sVar7, sVar1, iVar8, iVar9, -479097442, "INPUT_FEED_INTERACT_GENERIC", func_1208(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_1160(int iParam0, int iParam1)
{
	Global_1347477->f_9[iParam0] = (get_game_timer() + iParam1);
}

int func_1161(int iParam0)
{
	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

bool func_1162(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_1163(int iParam0)
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

int func_1164(int iParam0)
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

int func_1165(int iParam0)
{
	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_1209(&iVar0, 0, iVar95, &Var1) && !func_1209(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (is_model_a_ped(Var1))
		{
			func_1210(iVar0, &Var1);
			if (func_592(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

void func_1166()
{
	if (!_0x7c7e4ab748ea3b07())
	{
		return;
	}
	iVar0 = 29;
	func_1211(Global_35, &iVar0);
	Var30 = { func_1034(0) };
	_0xe36d4a38d28d9cfb(0);
	_0xc04f47d488ef9eba(5, 1, &Var30, 0);
	_0x5d6182f3bce1333b(5, -142743235);
	func_1212(0);
	func_1213(7);
	func_1214(-1623728698, 1, 1, 0);
	if (func_999() == 1160113249)
	{
		func_1214(-763730846, 1, 1, 1);
		func_1214(-361635024, 1, 1, 1);
	}
	func_1215(Global_35, &iVar0);
}

int func_1167(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = func_910(0);
	}
	if (!_0x112bca290d2eb53c(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_1145(&uVar6, iVar0);
	func_1146(&uVar6, iVar1);
	func_1147(&uVar6, iVar2);
	func_1148(&uVar6, iVar3);
	func_1149(&uVar6, iVar4);
	func_1150(&uVar6, iVar5);
	return uVar6;
}

bool func_1168(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1216(iParam1) || !func_1216(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_1169(var uParam0, int iParam1)
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
			if ((func_1217(uParam0->f_2[iVar0], 2) || &uParam0->f_2[iVar0] == iParam1) || &uParam0->f_2[iVar0] == 39)
			{
				*uParam0->f_2[iVar0] = { Var2 };
			}
			else
			{
				if (func_1217(uParam0->f_2[iVar0], 1))
				{
					func_1218(uParam0->f_2[iVar0], 2, 6);
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

void func_1170(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_1219(uParam0, 1))
	{
		func_1220(uParam0, 1);
	}
	uParam0->f_2[*uParam0]->f_1 = iParam2;
	uParam0->f_2[*uParam0] = iParam1;
	*uParam0++;
}

bool func_1171(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

void func_1172(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_1105(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_1105(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2]->f_1 == -1333118809 || uParam0->f_1[iVar2]->f_1 == -1158926300)
	{
		uParam0->f_1[iVar2]->f_1 = 1155669136;
		if (bParam3)
		{
			func_1105(iVar2, iVar0);
		}
	}
}

int func_1173(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_999();
	}
	iVar0 = 0;
	if (iParam0 == 24043185)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_1174(int iParam0, int iParam1, int iParam2, bool bParam3)
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

bool func_1175(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

bool func_1176(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_978(iParam0, 1)])->f_10 && iParam1) != 0;
}

int func_1177(var uParam0)
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

void func_1178(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*Global_1946804->f_1497.f_1[iParam0] = { *Global_1946804->f_1378.f_1[iParam0] };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_161() == -1)
	{
		func_1221(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_26796.f_776);
	}
	else
	{
		func_1222(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

bool func_1179(int iParam0, int iParam1)
{
	if (func_161() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			return (Global_26796.f_26[iParam1] && iParam0) != 0;
		}
		return false;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		return (Global_36638.f_45.f_350.f_26[iParam1] && iParam0) != 0;
	}
	return false;
}

void func_1180(int iParam0, bool bParam1, int iParam2)
{
	func_1223(&(Global_1946804->f_1378), iParam0);
	func_1224(2, iParam0, 6);
	if (bParam1)
	{
		func_1181(0, 1);
	}
}

void func_1181(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1225(0);
	}
	if (bParam0)
	{
		func_1112(8);
		func_1112(512);
	}
	else
	{
		func_1112(8);
		func_1112(16);
	}
}

bool func_1182(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_1183(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

float func_1184(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

int func_1185(float fParam0)
{
	return round(((fParam0 / 100f) * to_float(10)));
}

char* func_1186(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_1011(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_1011(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

int func_1187()
{
	return Global_1946804->f_1497;
}

char* func_1188(int iParam0)
{
	iVar0 = func_1134(iParam0);
	if (iVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_1069(iVar0);
}

int func_1189(int iParam0)
{
	if (func_1226(iParam0))
	{
		iVar0 = 0;
	}
	else if (func_1227(iParam0))
	{
		iVar0 = 1;
	}
	else if (func_1228(iParam0))
	{
		iVar0 = 2;
	}
	else if (func_1229(iParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

bool func_1190(int iParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_841(func_1230(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 1)
	{
		return true;
	}
	return false;
}

bool func_1191(int iParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_841(func_1231(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= 4)
	{
		return true;
	}
	return false;
}

bool func_1192(int iParam0)
{
	return (Global_40.f_12003 && iParam0) != 0;
}

void func_1193()
{
	if (func_161() != -1)
	{
		return;
	}
	func_865(1654063339, 1, 752097756);
	iVar0 = func_1049(1);
	func_1159(1, iVar0, 0);
}

void func_1194(int iParam0)
{
	Global_40.f_12003 = (Global_40.f_12003 || iParam0);
}

void func_1195()
{
	if (func_161() != -1)
	{
		return;
	}
	func_865(1623931083, 1, 752097756);
	iVar0 = func_1049(2);
	func_1159(2, iVar0, 0);
}

void func_1196()
{
	if (func_161() != -1)
	{
		return;
	}
	func_865(-1845241476, 1, 752097756);
	iVar0 = func_1049(0);
	func_1159(0, iVar0, 0);
}

bool func_1197(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_1198(int iParam0)
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

bool func_1199(int iParam0, int iParam1)
{
	return false;
}

bool func_1200()
{
	return false;
}

int func_1201(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return _0xe787f05dfc977bde(func_910(0), -1845241476, 0);
		case 1:
			return _0xe787f05dfc977bde(func_910(0), 1654063339, 0);
		case 2:
			return _0xe787f05dfc977bde(func_910(0), 1623931083, 0);
	}
	return 0;
}

struct<4> func_1202(int iParam0, int iParam1)
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

char* func_1203(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

char* func_1204(int iParam0)
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

char* func_1205(int iParam0)
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

int func_1206(int iParam0)
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

int func_1207(int iParam0)
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

int func_1208(int iParam0)
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

bool func_1209(int iParam0, int iParam1, int iParam2, var uParam3)
{
	if (func_246(iParam1) && !func_247(iParam1))
	{
		iVar0 = func_114(iParam1);
	}
	else
	{
		return false;
	}
	func_1232(uParam3);
	iVar5 = func_1233(iParam2);
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

void func_1210(int iParam0, int iParam1)
{
	iVar0 = get_ped_index_from_entity_index(iParam0);
	if (does_entity_exist(iVar0))
	{
		func_1234(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_1235(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

void func_1211(int iParam0, int* iParam1)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	uVar0 = 29;
	_copy_memory(iParam1, &uVar0, 30);
	iVar30 = 0;
	while (iVar30 < 29)
	{
		iVar31 = 0;
		get_current_ped_weapon(Global_35, &iVar31, false, iVar30, true);
		if (func_562(iVar31))
		{
			(*iParam1)[iVar30] = iVar31;
		}
		else
		{
			(*iParam1)[iVar30] = 0;
		}
		iVar30++;
	}
}

void func_1212(bool bParam0)
{
	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_592(iVar1, 0))
		{
			func_1236(iVar1, 0, bParam0);
		}
		Global_1946804->f_2657[iVar0] = 0;
		iVar0 = (iVar0 + -1);
	}
	Global_1946804->f_2657.f_20 = 0;
	Global_1946804->f_2657.f_21 = 0;
	Global_1946804->f_2657.f_22 = 0;
	Global_1946804->f_2657.f_23 = 0;
	Global_1946804->f_2657.f_24 = 0;
	Global_1946804->f_2657.f_25 = 0;
	Global_1946804->f_2657.f_19 = 0;
	Global_1946804->f_2657.f_26.f_6 = 0;
}

void func_1213(int iParam0)
{
	Global_1946804->f_2657.f_26.f_2 = 3;
	Global_1946804->f_2657.f_26.f_1 = 3;
	Global_1946804->f_2657.f_26 = 3;
	if (func_161() == -1)
	{
		func_1237(352481484);
		iVar0 = 0;
		while (iVar0 < Global_26796.f_19)
		{
			Global_1946804->f_2657[iVar0] = &Global_26796[iVar0];
			iVar0++;
		}
		Global_1946804->f_2657.f_20 = Global_26796.f_20;
		Global_1946804->f_2657.f_21 = Global_26796.f_21;
		Global_1946804->f_2657.f_22 = Global_26796.f_22;
		Global_1946804->f_2657.f_23 = Global_26796.f_23;
		Global_1946804->f_2657.f_24 = Global_26796.f_24;
		Global_1946804->f_2657.f_25 = Global_26796.f_25;
		Global_1946804->f_2657.f_19 = Global_26796.f_19;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_36638.f_45.f_350.f_19)
		{
			Global_1946804->f_2657[iVar0] = &Global_36638.f_45.f_350[iVar0];
			iVar0++;
		}
		Global_1946804->f_2657.f_20 = Global_36638.f_45.f_350.f_20;
		Global_1946804->f_2657.f_21 = Global_36638.f_45.f_350.f_21;
		Global_1946804->f_2657.f_22 = Global_36638.f_45.f_350.f_22;
		Global_1946804->f_2657.f_23 = Global_36638.f_45.f_350.f_23;
		Global_1946804->f_2657.f_24 = Global_36638.f_45.f_350.f_24;
		Global_1946804->f_2657.f_25 = Global_36638.f_45.f_350.f_25;
		Global_1946804->f_2657.f_19 = Global_36638.f_45.f_350.f_19;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar2 = &Global_1946804->f_2657[iVar0];
		if (func_816(iVar2) != -999503751)
		{
			func_1238(&(Global_1946804->f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_1239(iVar2, 0))
		{
			func_1240(iVar2, &Global_1946804->f_1497.f_1[iVar1] == &Global_1946804->f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_1214(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_1241(iParam0))
	{
		return;
	}
	iVar0 = func_816(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_1242(iParam0, &(Global_1946804->f_2657.f_21), Global_1946804->f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_1242(iParam0, &(Global_1946804->f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_1242(iParam0, &(Global_1946804->f_2657.f_20), Global_1946804->f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_1242(iParam0, &(Global_1946804->f_2657.f_22), Global_1946804->f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_1242(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_1242(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_1243(0))
	{
		func_1244(iParam0, 1);
		if (func_999() == 1160113249)
		{
			func_1244(func_1243(-2125499975), 0);
		}
		else
		{
			func_1244(func_1243(1160113249), 0);
		}
	}
	func_1245();
	if (func_1246(iVar0))
	{
		_0x766315a564594401(func_910(0), iParam0, 0);
	}
	func_1240(iParam0, bParam3);
	if (bParam2)
	{
		func_1181(0, 0);
	}
}

void func_1215(int iParam0, int iParam1)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 29)
	{
		if (iParam1[iVar0] != 0)
		{
			if (!has_ped_got_weapon(Global_35, iParam1[iVar0], 0, false))
			{
				if (func_930(iParam1[iVar0]))
				{
					_give_weapon_to_ped_2(iParam0, iParam1[iVar0], 0, false, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
			}
			iVar1 = 0;
			get_current_ped_weapon(Global_35, &iVar1, false, iVar0, true);
			if (iVar1 != iParam1[iVar0])
			{
				set_current_ped_weapon(Global_35, iParam1[iVar0], true, iVar0, false, false);
			}
		}
		iVar0++;
	}
}

bool func_1216(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_1030(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_1029(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_531(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_1026(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_1027(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_1028(iParam0);
	if (iVar5 < 1 || iVar5 > func_1031(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_1217(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1218(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_1219(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1220(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_1221(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_1222(var uParam0, int iParam1, int iParam2)
{
	*Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_1223(var uParam0, int iParam1)
{
	if (func_161() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1]->f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_1221(uParam0->f_1[iVar0], iVar0, iParam1);
			iVar0++;
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	Global_36638.f_45.f_350.f_26[iParam1]->f_1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		func_1222(uParam0->f_1[iVar0], iVar0, iParam1);
		iVar0++;
	}
}

void func_1224(int iParam0, int iParam1, int iParam2)
{
	if (func_161() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			Global_26796.f_26[iParam1] = (Global_26796.f_26[iParam1] || iParam0);
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		Global_36638.f_45.f_350.f_26[iParam1] = (Global_36638.f_45.f_350.f_26[iParam1] || iParam0);
	}
}

void func_1225(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

bool func_1226(int iParam0)
{
	if (!func_592(iParam0, 0))
	{
		return false;
	}
	if (func_813(iParam0, -1066545920))
	{
		return true;
	}
	return false;
}

bool func_1227(int iParam0)
{
	if (!func_592(iParam0, 0))
	{
		return false;
	}
	if (func_813(iParam0, -284267618))
	{
		return true;
	}
	return false;
}

bool func_1228(int iParam0)
{
	if (!func_592(iParam0, 0))
	{
		return false;
	}
	if (func_813(iParam0, 363491182))
	{
		return true;
	}
	return false;
}

bool func_1229(int iParam0)
{
	if (!func_592(iParam0, 0))
	{
		return false;
	}
	if (func_813(iParam0, 1406113494))
	{
		return true;
	}
	return false;
}

int func_1230(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1247(iParam0);
		case 1:
			return func_1248(iParam0);
		case 2:
			return func_1249(iParam0);
		case 3:
			return func_1250(iParam0);
	}
	return 0;
}

int func_1231(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1251(iParam0);
		case 1:
			return func_1252(iParam0);
		case 2:
			return func_1253(iParam0);
		case 3:
			return func_1254(iParam0);
		case 4:
			return func_1255(iParam0);
		case 5:
			return func_1256(iParam0);
		case 6:
			return func_1257(iParam0);
		case 7:
			return func_1258(iParam0);
		case 8:
			return func_1259(iParam0);
	}
	return 0;
}

void func_1232(var uParam0)
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

int func_1233(int iParam0)
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

void func_1234(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
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

bool func_1235(var uParam0, int iParam1, int iParam2, int iParam3)
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

void func_1236(int iParam0, bool bParam1, bool bParam2)
{
	switch (func_816(iParam0))
	{
		case -2061583405:
			bVar0 = func_1260(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1260(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1260(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1260(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1260(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1260(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1245();
	}
	if (bParam1)
	{
		func_1181(0, 0);
	}
}

void func_1237(int iParam0)
{
	Var2 = -1;
	Var2.f_1 = -1;
	Var2.f_2 = -1;
	Var2.f_3 = -1;
	Var2.f_4 = -1;
	Var2.f_5 = -1;
	Var2.f_6 = -1;
	Var2.f_7 = -1;
	Var2.f_8 = -1;
	Var2.f_13 = -1;
	Var2 = { func_1043(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (func_1045(&Var2, &iVar0, &iVar1, 0))
	{
		if (iVar1 > 0)
		{
			switch (iParam0)
			{
				case 352481484:
					Global_1946804->f_2657.f_26.f_2 = 5;
					Global_1946804->f_2657.f_26.f_1 = 5;
					Global_1946804->f_2657.f_26 = 5;
					break;
			}
		}
		func_989(iVar0);
	}
}

void func_1238(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_1261(iParam2, *uParam0);
	func_1262(uParam0->f_1[*uParam0], iParam1, -1, 1, 0);
	*uParam0++;
}

bool func_1239(int iParam0, int iParam1)
{
	Var0 = { func_902(iParam0, 0, 0) };
	Var5 = { func_934(iParam0, Var0, Var0.f_4, 0) };
	if (func_1042(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return false;
	}
	_0x9a113c660aea3832(func_910(0), &Var5, iParam1);
	return true;
}

void func_1240(int iParam0, bool bParam1)
{
	Var0 = { func_902(iParam0, 0, 0) };
	Var5 = { func_934(iParam0, Var0, Var0.f_4, 0) };
	if (func_1042(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	_0x65a5f70f4a292ebe(func_910(0), &Var5, bParam1);
}

bool func_1241(int iParam0)
{
	if (func_161() == -1)
	{
		if (Global_40.f_4283 != 0)
		{
			if (iParam0 == 1164374808)
			{
				return false;
			}
		}
	}
	return true;
}

int func_1242(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	iVar1 = iParam0;
	if (Global_1946804->f_2657.f_19 >= 18)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (func_1263(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_1239(iParam0, 0))
	{
		return 0;
	}
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = iVar1;
	if (func_816(iParam0) != -999503751)
	{
		func_1238(&(Global_1946804->f_2657.f_26.f_26), iParam0, Global_1946804->f_2657.f_19);
	}
	Global_1946804->f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_1243(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_999();
	}
	if (iParam0 == 1160113249)
	{
		return -763730846;
	}
	return -1535516064;
}

int func_1244(int iParam0, int iParam1)
{
	Var0 = { func_902(iParam0, 0, 0) };
	Var5 = { func_934(iParam0, Var0, Var0.f_4, 0) };
	if (func_1042(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	_0x0349404a22736740(iParam1, func_910(0), &Var5);
	return 1;
}

void func_1245()
{
	if (func_161() == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_2657.f_19)
		{
			Global_26796[iVar0] = &Global_1946804->f_2657[iVar0];
			iVar0++;
		}
		Global_26796.f_20 = Global_1946804->f_2657.f_20;
		Global_26796.f_21 = Global_1946804->f_2657.f_21;
		Global_26796.f_22 = Global_1946804->f_2657.f_22;
		Global_26796.f_23 = Global_1946804->f_2657.f_23;
		Global_26796.f_24 = Global_1946804->f_2657.f_24;
		Global_26796.f_19 = Global_1946804->f_2657.f_19;
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		Global_36638.f_45.f_350[iVar0] = &Global_1946804->f_2657[iVar0];
		iVar0++;
	}
	Global_36638.f_45.f_350.f_20 = Global_1946804->f_2657.f_20;
	Global_36638.f_45.f_350.f_21 = Global_1946804->f_2657.f_21;
	Global_36638.f_45.f_350.f_22 = Global_1946804->f_2657.f_22;
	Global_36638.f_45.f_350.f_23 = Global_1946804->f_2657.f_23;
	Global_36638.f_45.f_350.f_24 = Global_1946804->f_2657.f_24;
	Global_36638.f_45.f_350.f_19 = Global_1946804->f_2657.f_19;
}

bool func_1246(int iParam0)
{
	return func_1265(func_1264(iParam0));
}

int func_1247(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 227686058;
		case 1:
			return 1877538667;
		case 2:
			return -747118240;
		case 3:
			return 356885366;
		case 4:
			return -733784435;
		case 5:
			return -2010021430;
		case 6:
			return -1563051210;
		case 7:
			return 1532314048;
		case 8:
			return -1378972544;
		default:
			break;
	}
	return 0;
}

int func_1248(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -77597297;
		case 1:
			return 1289620458;
		case 2:
			return 351104126;
		case 3:
			return -991258198;
		case 4:
			return -446539844;
		case 5:
			return 2146082234;
		case 6:
			return 330185476;
		case 7:
			return -1208917184;
		case 8:
			return -12904227;
		default:
			break;
	}
	return 0;
}

int func_1249(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 624387589;
		case 1:
			return 1398329674;
		case 2:
			return -35737408;
		case 3:
			return 651323163;
		case 4:
			return 343794650;
		case 5:
			return 2072880089;
		case 6:
			return -2120749726;
		case 7:
			return -1749072364;
		case 8:
			return -583780175;
		default:
			break;
	}
	return 0;
}

int func_1250(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1066104444;
		case 1:
			return -567070698;
		case 2:
			return 797308288;
		case 3:
			return -1669506545;
		case 4:
			return -1011624341;
		case 5:
			return 516134254;
		case 6:
			return -940514956;
		case 7:
			return 2030473481;
		case 8:
			return 2084389834;
		default:
			break;
	}
	return 0;
}

int func_1251(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 227686058;
		case 1:
			return -77597297;
		case 2:
			return 624387589;
		case 3:
			return 1066104444;
		default:
			break;
	}
	return 0;
}

int func_1252(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1877538667;
		case 1:
			return 1289620458;
		case 2:
			return 1398329674;
		case 3:
			return -567070698;
		default:
			break;
	}
	return 0;
}

int func_1253(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -747118240;
		case 1:
			return 351104126;
		case 2:
			return -35737408;
		case 3:
			return 797308288;
		default:
			break;
	}
	return 0;
}

int func_1254(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 356885366;
		case 1:
			return -991258198;
		case 2:
			return 651323163;
		case 3:
			return -1669506545;
		default:
			break;
	}
	return 0;
}

int func_1255(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -733784435;
		case 1:
			return -446539844;
		case 2:
			return 343794650;
		case 3:
			return -1011624341;
		default:
			break;
	}
	return 0;
}

int func_1256(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -2010021430;
		case 1:
			return 2146082234;
		case 2:
			return 2072880089;
		case 3:
			return 516134254;
		default:
			break;
	}
	return 0;
}

int func_1257(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1563051210;
		case 1:
			return 330185476;
		case 2:
			return -2120749726;
		case 3:
			return -940514956;
		default:
			break;
	}
	return 0;
}

int func_1258(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1532314048;
		case 1:
			return -1208917184;
		case 2:
			return -1749072364;
		case 3:
			return 2030473481;
		default:
			break;
	}
	return 0;
}

int func_1259(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1378972544;
		case 1:
			return -12904227;
		case 2:
			return -583780175;
		case 3:
			return 2084389834;
		default:
			break;
	}
	return 0;
}

int func_1260(int iParam0, var uParam1)
{
	iVar1 = iParam0;
	if (!func_1263(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_816(iParam0) != -999503751)
		{
			func_1266(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_816(iParam0) != -999503751)
	{
		func_1266(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1239(iParam0, 1);
	return 1;
}

void func_1261(int iParam0, var uParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_1262(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (_0x93ffd92f05ec32fd(uParam0->f_3.f_1))
	{
		func_1267(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_978(func_1085(iParam1), 1);
		if (uParam0->f_1 == -1)
		{
		}
	}
	else
	{
		uParam0->f_1 = iParam2;
	}
	uParam0->f_2 = iParam4;
	*uParam0 = iParam1;
	uParam0->f_3 = 0;
	if (bParam3)
	{
		func_1268(uParam0);
	}
}

bool func_1263(int iParam0, int iParam1)
{
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < Global_1946804->f_2657.f_19)
	{
		if (iParam0 == &Global_1946804->f_2657[*iParam1])
		{
			return true;
		}
		*iParam1++;
	}
	return false;
}

int func_1264(int iParam0)
{
	switch (iParam0)
	{
		case -2061583405:
			return 2;
		case -1719060085:
			return 16;
		case -999503751:
			return 1;
		case -525676072:
			return 4;
		case 81053684:
			return 8;
		case -413129408:
			return 32;
		default:
			break;
	}
	return 0;
}

bool func_1265(int iParam0)
{
	return (Global_1946804->f_2657.f_26.f_6 && iParam0) != 0;
}

void func_1266(var uParam0, int iParam1, int iParam2)
{
	iVar1 = func_1269(iParam1);
	func_1270(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_1271(&(uParam0->f_26), iVar1);
		if (func_1272(uParam0->f_26, &iVar0))
		{
			func_1273(iVar0, iVar1);
		}
	}
}

void func_1267(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_1274(&(uParam0->f_3));
}

void func_1268(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_1275(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

int func_1269(int iParam0)
{
	return &(Global_1946804->f_2657.f_26.f_7[iParam0]);
}

void func_1270(int iParam0, int iParam1)
{
	uVar0 = &Global_1946804->f_2657.f_26.f_7[iParam0];
	Global_1946804->f_2657.f_26.f_7[iParam0] = &Global_1946804->f_2657.f_26.f_7[iParam1];
	Global_1946804->f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_1271(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - 1);
	func_1267(uParam0->f_1[iParam1]);
	*uParam0->f_1[iParam1] = { *uParam0->f_1[*uParam0] };
}

bool func_1272(int iParam0, int iParam1)
{
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < Global_1946804->f_2657.f_19)
	{
		if (&Global_1946804->f_2657.f_26.f_7[*iParam1] == iParam0)
		{
			return true;
		}
		*iParam1++;
	}
	return false;
}

void func_1273(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_1274(var uParam0)
{
	if (*uParam0 && _0x93ffd92f05ec32fd(uParam0->f_1))
	{
		_0x13e7320c762f0477(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_1275(var uParam0, var uParam1, var uParam2)
{
	iVar0 = func_1276(func_999());
	if (*uParam0)
	{
		func_1274(uParam0);
	}
	uParam0->f_1 = _0xf6d9e1f3560cbf8e(iVar0, uParam1, 0, func_161() != -1, uParam2);
	*uParam0 = 1;
}

int func_1276(int iParam0)
{
	if (func_161() == -1)
	{
		switch (iParam0)
		{
			case -2125499975:
				return 0;
			case -449205311:
				return 0;
			case 1160113249:
				return 0;
			default:
				break;
		}
		return 0;
	}
	switch (iParam0)
	{
		case 2026485318:
			return 0;
		case 24043185:
			return 1;
		default:
			break;
	}
	return 0;
}

