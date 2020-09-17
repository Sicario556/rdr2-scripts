void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_15 = 6;
	iLocal_1028 = 34;
	fLocal_1188 = 1000f;
	fLocal_1189 = 6f;
	fLocal_1190 = 0f;
	fLocal_1191 = 7f;
	iLocal_1204 = 1;
	iLocal_1206 = 1;
	iLocal_1215 = 1;
	iLocal_1218 = 1;
	iLocal_1248 = -1;
	iLocal_1249 = -1;
	Local_729.f_3 = func_1(&vScriptParam_0);
	if (has_force_cleanup_occurred(523))
	{
		iLocal_1225 = 1;
	}
	if (!bVar1223)
	{
		Local_729.f_161 = func_2(vScriptParam_0.z, 2);
		Local_729.f_43 = func_3();
		uLocal_1024 = uVar1022;
		func_4(&Local_729, 1);
		func_5();
		func_6();
		func_7();
		func_8();
		func_9(&(Local_729.f_5));
		func_10(&(Local_729.f_5), 1);
		func_11(&(Local_729.f_5), 0);
		func_12(&Local_1470);
		func_13(&(Local_1470.f_3), 2);
	}
	Local_729.f_176 = 1;
	while (true)
	{
		func_15(bVar1223, 4034, 0);
		if (bVar1223)
		{
			wait(0);
		}
		else
		{
			switch (iVar1025)
			{
				case 0:
					if (func_16())
					{
						iLocal_1229 = _create_volume_box_with_custom_name(-314.8766f, 816.3257f, 122.1738f, 0f, 0f, 99.99905f, 4.710876f, 7.994324f, 2.589409f, "volRestriction02");
						func_17();
						iLocal_1027 = 1;
					}
					break;
				case 1:
					if (is_entity_in_volume(Global_35, iVar1227, true, 0))
					{
						func_14();
					}
					if (func_18(76, 1, 0))
					{
						func_14();
					}
					if (func_20(func_19(76), 557524588, 1))
					{
						func_14();
					}
					if (func_21(&Local_729, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_22(&Local_729, &uLocal_1100, &(Local_729.f_51.f_4));
						func_24(&Local_729, uVar1098, 6730);
						func_25(Local_729.f_51, 4f, 1, 0, 0, 0, 0);
						iLocal_1027 = 3;
					}
					else if (Local_729.f_160)
					{
						func_14();
					}
					break;
				case 3:
					func_26();
					if (func_27())
					{
						if (!_does_volume_exist(iVar1233))
						{
							iLocal_1235 = _create_volume_box_with_custom_name(Local_923.f_79, Local_923.f_82, Local_923.f_85, "volInDoorwayVolume");
						}
						func_28();
						if (func_29())
						{
						}
						func_30();
						if (func_3() != 76)
						{
						}
						else
						{
							iLocal_1233 = _create_volume_box_with_custom_name(Local_923.f_52, Local_923.f_55, Local_923.f_58, "volSaloonVolume");
						}
						iLocal_1027 = 4;
					}
					break;
				case 4:
					if (iVar1196 != 0)
					{
					}
					else if (func_29())
					{
					}
					if (!func_31(&Local_729, &uLocal_1250, iVar1009, 0, 1, 0, 1, 0))
					{
						func_14();
					}
					if (!Local_729.f_46)
					{
						if (func_32(get_player_index(), 1, 0, 1))
						{
							func_33(&uLocal_1245);
						}
						if (((func_34(&(uLocal_1250[1]), 0, &(Local_729.f_5), &uLocal_1099, 0, 0) || (does_entity_exist(&(uLocal_1250[1])) && is_ped_ragdoll(&(uLocal_1250[1])))) || (func_32(get_player_index(), 1, 0, 1) && func_35(-315.4537f, 817.4742f, 120.9763f, 3.5f))) || func_36(iVar1166, 2097152))
						{
							func_33(&uLocal_1245);
							if (iVar1097 == 16384 || func_36(iVar1166, 2097152))
							{
								if ((func_35(-311.9604f, 816.6038f, 121.6334f, 3.5f) || iVar1024 <= 4) || func_36(iVar1166, 2097152))
								{
									func_37(&(uLocal_1250[1]), 0);
									func_38(Local_729.f_3, 4, 1);
									iVar0 = 1;
									if (_does_anim_scene_exist(iVar1010) && _is_anim_scene_started(iVar1010, false))
									{
										if (_0x8d81e7824b7753f7(iVar1010, "transition_to_bed", 1) || _0x8d81e7824b7753f7(iVar1010, "transition_to_floor", 1))
										{
											iVar0 = 0;
										}
									}
									if (_does_anim_scene_exist(Local_1012.f_3) && _is_anim_scene_started(Local_1012.f_3, false))
									{
										if (_0x8d81e7824b7753f7(Local_1012.f_3, "Reward", 1))
										{
											iVar0 = 0;
										}
									}
									if (iVar0 == 1)
									{
										Local_729.f_46 = 1;
										if (does_blip_exist(&(iLocal_1271[1])))
										{
											remove_blip(iLocal_1271[1]);
										}
										func_39(&uLocal_1164, 4096);
										if (func_36(iVar1166, 16777216))
										{
											_uiprompt_remove_group(func_40(Local_729.f_162), 1899245582);
											func_41(&uLocal_1168, 16777216);
										}
										func_42(&(Local_729.f_162), 1, 1);
										func_42(&(Local_729.f_163), 1, 1);
										if (func_43(&(uLocal_1250[1]), 0, 1))
										{
											clear_sequence_task(&iLocal_1290);
											open_sequence_task(&iLocal_1290);
											func_44(Global_35, 1, 0);
											func_45(1);
											func_46(&(uLocal_1250[1]), &iLocal_1290, 0, 0, 1, 1);
										}
										func_47();
										func_48();
										func_49(iLocal_1271[1]);
										if (does_entity_exist(Local_668[2]->f_8) && iVar1203 == 0)
										{
											iLocal_1205 = 1;
											_0x78b4567e18b54480(Local_668[2]->f_8);
										}
										else if (iVar1203 == 1)
										{
										}
										_0x18ff3110cf47115d(&(uLocal_1250[0]), 4, 1);
										iLocal_1026 = 14;
									}
								}
							}
							else
							{
								Local_729.f_46 = 1;
								if (does_blip_exist(&(iLocal_1271[1])))
								{
									remove_blip(iLocal_1271[1]);
								}
								func_48();
								iLocal_1026 = 13;
								if (iLocal_15 != 2 && iLocal_15 != 3)
								{
									iLocal_15 = 2;
								}
								if (func_36(iVar1162, 268435456) && func_50(Global_35, iVar1227, 0, 1))
								{
									iLocal_1180 = 6;
									func_41(&uLocal_1164, 268435456);
									_0x9ebd34958ab6f824(&(uLocal_1250[0]));
									set_entity_coords(&(uLocal_1250[0]), -275.0064f, 817.2858f, 118.5294f, true, false, true, true);
									activate_physics(&(uLocal_1250[0]));
									apply_force_to_entity(&(uLocal_1250[0]), 1, 0f, 1f, 5f, 0f, 0f, 0f, 1, true, true, true, false, true);
									_0x2208438012482a1a(&(uLocal_1250[0]), false, false);
									set_ped_to_ragdoll(&(uLocal_1250[0]), 9000, 9000, 0, true, true, false);
									_0x18ff3110cf47115d(&(uLocal_1250[0]), 2, 0);
									clear_ped_tasks(iVar1251, 1, 0);
									set_entity_coords(iVar1251, -278.0838f, 804.876f, 118.3801f, true, false, true, true);
									func_51();
									func_52(iVar1229, 0);
									func_53(Local_923.f_39, 4f, 0);
									iLocal_1032 = 2;
									iLocal_1030 = 0;
									func_54(&Local_1434, 1, 0);
								}
								func_49(iLocal_1271[0]);
							}
							func_55(Local_1356[0], 0);
							func_57(uLocal_1250[1], Local_1356[0], 25f, &Local_1399, &(Local_729.f_192), 0f, 1, 0, 0, func_56(), 0, 0, 2, 1, -1082130432, 0);
						}
					}
					if (iVar1212 == 0 && does_entity_exist(iVar1251))
					{
						if (func_34(iVar1251, 0, &(Local_729.f_5), &uLocal_1099, 0, 0) || is_ped_ragdoll(iVar1251))
						{
							func_37(iVar1251, 0);
							iLocal_1185 = 10;
							func_33(&uLocal_1245);
							if ((iVar1097 == 16384 && has_entity_clear_los_to_entity(iVar1251, Global_35, 17)) || iVar1097 != 16384)
							{
								Local_729.f_46 = 1;
								iLocal_1214 = 1;
								iLocal_1202 = 0;
								func_58(iVar1237);
								if (does_blip_exist(iVar1273))
								{
									remove_blip(&iLocal_1275);
								}
								if (Local_729.f_46 == 0 && (has_entity_clear_los_to_entity(&(uLocal_1250[1]), Global_35, 17) || func_59(&(uLocal_1250[1]), Global_35, 1, 1) < 10f))
								{
									func_60(0);
									func_62(&(uLocal_1250[1]), Global_35, func_61("ALERTED_LAW", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								}
								if (func_43(iVar1251, 0, 1))
								{
									if (func_63(iVar1251, &(uLocal_1250[1])) || func_63(iVar1251, &(uLocal_1250[0])))
									{
										open_sequence_task(&iLocal_1290);
										func_64(1);
										if (func_63(iVar1251, &(uLocal_1250[1])))
										{
											task_place_carried_entity_at_coord(0, &(uLocal_1250[1]), 0f, 0f, 0f, 2f, 9);
										}
										if (func_63(iVar1251, &(uLocal_1250[0])))
										{
											task_place_carried_entity_at_coord(0, &(uLocal_1250[0]), 0f, 0f, 0f, 2f, 9);
										}
										func_46(iVar1251, &iLocal_1290, 0, 0, 1, 1);
										set_ped_keep_task(iVar1251, true);
									}
									else
									{
										func_64(0);
									}
								}
								iLocal_1026 = 13;
								Local_729.f_50 = 1;
							}
							else if (func_43(iVar1251, 0, 1))
							{
								if (func_43(iVar1251, 0, 1))
								{
									if (is_ped_ragdoll(iVar1251) && func_59(iVar1251, Global_35, 1, 1) < 5f)
									{
										_0xedfc6c1fd1c964f5(player_id(), 1352191066, 0, 0, 0, 0, 0, 0, 0);
										_report_crime(player_id(), 1352191066, 0, iVar1251, true);
										_0xf0b67bad53c35bd9(iVar1251, Global_35, iVar1251, Global_36, 1352191066);
									}
									else
									{
										_0xedfc6c1fd1c964f5(player_id(), -683250308, 0, 0, 0, 0, 0, 0, 0);
										_report_crime(player_id(), -683250308, 0, iVar1251, true);
										_0xf0b67bad53c35bd9(iVar1251, Global_35, iVar1251, Global_36, -683250308);
									}
									open_sequence_task(&iLocal_1290);
									func_64(1);
									if (func_63(iVar1251, &(uLocal_1250[1])))
									{
										task_place_carried_entity_at_coord(0, &(uLocal_1250[1]), 0f, 0f, 0f, 2f, 9);
									}
									if (func_63(iVar1251, &(uLocal_1250[0])))
									{
										task_place_carried_entity_at_coord(0, &(uLocal_1250[0]), 0f, 0f, 0f, 2f, 9);
									}
									func_46(iVar1251, &iLocal_1290, 0, 0, 1, 1);
									set_ped_keep_task(iVar1251, true);
								}
								iLocal_1026 = 13;
								Local_729.f_46 = 1;
								iLocal_1214 = 1;
								iLocal_1202 = 0;
								func_58(iVar1237);
								if (does_blip_exist(iVar1273))
								{
									remove_blip(&iLocal_1275);
								}
							}
							func_55(Local_1356[1], 0);
							func_57(&iLocal_1253, Local_1356[1], 25f, &Local_1434, &(Local_729.f_192), 0f, 1, 0, 0, func_65(), 0, 0, 2, 1, -1082130432, 0);
						}
					}
					if (func_66())
					{
						Local_729.f_50 = 1;
						func_14();
					}
					iVar1 = 0;
					if ((func_67(Global_35, -296.6685f, 820.9937f, 118.3999f, 1) > 65f && iVar1198 == 1) && iVar1024 != 10)
					{
						if (iVar1198 == 1 && func_36(iVar1166, 67108864))
						{
							fVar2 = func_59(Global_35, &(uLocal_1250[1]), 1, 1);
							if (fVar2 > 20f && is_entity_occluded(&(uLocal_1250[1])))
							{
								if (!func_68(&uLocal_1329))
								{
									func_69(&uLocal_1329, 0);
								}
								if (func_70(&uLocal_1329) > 5f)
								{
									func_71(uLocal_1250[1]);
								}
								else
								{
									iVar1 = 1;
								}
							}
							else
							{
								if (func_68(&uLocal_1329))
								{
									func_72(&uLocal_1329);
								}
								iVar1 = 1;
							}
						}
						if (iVar1 != 0)
						{
						}
						else
						{
							func_14();
						}
					}
					if (iVar1024 == 10)
					{
						if (!func_68(&uLocal_1341))
						{
							func_69(&uLocal_1341, 0);
						}
						if (func_70(&uLocal_1341) > 300f && func_67(Global_35, Local_923, 1) > 30f)
						{
							func_14();
						}
					}
					if ((func_67(Global_35, Local_729.f_51, 1) > 80f && iVar1198 == 0) && func_36(iVar1163, 8388608))
					{
						func_14();
					}
					if (func_73(&Local_729, &uLocal_1250, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0))
					{
						func_14();
					}
					break;
			}
			wait(Local_729.f_158);
		}
	}
}

var func_1(var uParam0)
{
	return *uParam0;
}

bool func_2(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_3()
{
	return Global_1894899->f_2;
}

void func_4(var uParam0, bool bParam1)
{
	func_9(&(uParam0->f_5));
	if (uParam0->f_161)
	{
		func_74("BEAT_LAUNCHED", 4000, 0, 1, 0, 0, -1, -1, 0);
	}
	allow_sonar_blips(bParam1);
}

void func_5()
{
	if (func_75(84) == 0)
	{
		iLocal_1011 = 0;
	}
	else
	{
		iLocal_1011 = 1;
	}
}

void func_6()
{
	Local_923.f_12 = { -315.2298f, 817.2291f, 120.9762f };
	Local_923.f_11 = 1087218607;
	Local_923 = { -314.84f, 818.183f, 120.973f };
	Local_923.f_3 = -80f;
	Local_923.f_15 = -542955242;
	Local_923.f_31 = -93693274;
	Local_923.f_4 = { -290.15f, 845.6213f, 118.9813f };
	Local_923.f_7 = { -311.9574f, 817.2982f, 121.042f };
	Local_923.f_10 = 194.5751f;
	Local_923.f_32 = { -275.6346f, 808.383f, 119.395f };
	Local_923.f_35 = 277.4111f;
	Local_923.f_36 = { -274.9641f, 809.2846f, 118.3686f };
	Local_923.f_42 = { -274.896f, 808.0374f, 119.396f };
	Local_923.f_39 = { -272.0536f, 808.2675f, 118.367f };
	Local_923.f_45 = { -273.888f, 808.1285f, 119.3935f };
	if (iVar1009 == 0)
	{
		Local_923.f_48 = { -311.3569f, 817.4445f, 121.6535f };
		Local_923.f_51 = -145.92f;
	}
	else if (iVar1009 == 1)
	{
		Local_923.f_48 = { -311.4683f, 817.773f, 121.6532f };
		Local_923.f_51 = -133.18f;
	}
	Local_923.f_16 = { -276.3004f, 802.7235f, 117.3688f };
	Local_923.f_19 = { -278.0298f, 811.7519f, 122.8314f };
	Local_923.f_22 = 4.75f;
	Local_923.f_23 = { -277.727f, 803.8156f, 118.38f };
	Local_923.f_26 = -53.7f;
	Local_923.f_27 = { -297.8705f, 839.6708f, 119.0827f };
	Local_923.f_30 = 86.0768f;
	Local_923.f_52 = { -311.5835f, 814.3707f, 122.549f };
	Local_923.f_55 = { 0f, 0f, -170.1609f };
	Local_923.f_58 = { 13.77661f, 16.41888f, 3.245f };
	Local_923.f_61 = { -277.1202f, 817.837f, 117.9908f };
	Local_923.f_64 = { 0f, 0f, -170.1609f };
	Local_923.f_67 = { 8.126f, 9.555f, 4.450074f };
	Local_923.f_70 = { -293.6524f, 842.5644f, 121.1615f };
	Local_923.f_73 = { 0f, 0f, -179.8587f };
	Local_923.f_76 = { 13.83463f, 22.25562f, 5.892512f };
	Local_923.f_79 = { -315.2573f, 817.5521f, 122.3746f };
	Local_923.f_82 = { 0f, 0f, 99.47269f };
	Local_923.f_85 = { 2.455324f, 3.195812f, 2.895437f };
	iLocal_1021 = 0;
}

void func_7()
{
	if (iVar1009 == 0)
	{
		Local_1012.f_4 = "script@beat@town@deadJohn@var01@valentineVar01";
		Local_1012.f_7 = "script@beat@town@deadJohn@var01@valentineCleanVar01";
	}
	else if (iVar1009 == 1)
	{
		Local_1012.f_4 = "script@beat@town@deadJohn@var01@valentineVar02";
		Local_1012.f_7 = "script@beat@town@deadJohn@var01@valentineCleanVar02";
	}
	Local_1012.f_5 = "script@beat@town@deadJohn@valentinePickup";
	Local_1012.f_6 = "script@proc@bountyhunting@sheriff_rewards@valentine@stand_val";
	sLocal_1023 = "script@beat@town@deadJohn@valentineDropoffFemale";
}

void func_8()
{
	Local_16 = { 0f, 0f, 0f };
	Local_16.f_3 = Global_35;
	Local_16.f_8 = 4;
	Local_16.f_4 = 21030;
	Local_16.f_19 = 4;
	Local_16.f_20 = 4;
	Local_16.f_21 = 4;
	Local_16.f_22 = 4;
	Local_16.f_17 = 4;
	Local_16.f_18 = 4;
	Local_16.f_7 = 0;
	Local_41 = { 0f, 0f, 0f };
	Local_41.f_3 = Global_35;
	Local_41.f_8 = 4;
	Local_41.f_4 = 21030;
	Local_41.f_19 = 4;
	Local_41.f_20 = 4;
	Local_41.f_21 = 4;
	Local_41.f_22 = 4;
	Local_41.f_7 = 0;
}

void func_9(int iParam0)
{
	func_10(iParam0, 0);
	func_76(iParam0, 0);
	func_77(iParam0, 1);
	func_78(iParam0, 1);
	func_79(iParam0, 0);
	func_80(iParam0, 1);
	func_81(iParam0, 1, 1, 1);
}

void func_10(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_82(&(uParam0->f_1), 16384);
	}
	else
	{
		func_83(&(uParam0->f_1), 16384);
	}
}

void func_11(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_83(iParam0, 128);
	}
	else
	{
		func_82(iParam0, 128);
	}
}

void func_12(var uParam0)
{
	func_72(uParam0);
	func_84(&(uParam0->f_3), 1);
	uParam0->f_4 = 0;
}

void func_13(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_14()
{
	func_85(Global_1935630, 4);
	func_86(84);
	func_87(1);
	if (iVar1220 == 1)
	{
		func_88(0);
	}
	func_33(&uLocal_1245);
	if (does_entity_exist(iVar1282))
	{
		set_anim_rate(iVar1282, 1f, 0, false);
	}
	if (does_entity_exist(iVar1283))
	{
		set_anim_rate(iVar1283, 1f, 0, false);
	}
	if (iVar1221 == 1)
	{
		set_scenario_group_enabled("RANSACK_BH_REWARD", false);
	}
	if (_does_volume_exist(iVar1244))
	{
		_0x2c87c3e1c7b96ee2(iVar1244);
		func_58(iVar1244);
	}
	func_58(iVar1245);
	if ((((iVar1198 == 1 && iVar1199 == 0) && iLocal_15 != 3) && iLocal_15 != 2) && iLocal_15 != 4)
	{
		iLocal_15 = 5;
	}
	if (_0x91a5f9cbebb9d936(uVar1293))
	{
		remove_scenario_blocking_area(uVar1293, false);
	}
	func_89(&iLocal_1187);
	func_90();
	if (_does_volume_exist(iVar1239))
	{
		_delete_volume(iVar1239);
	}
	if (_does_volume_exist(iVar1240))
	{
		_delete_volume(iVar1240);
	}
	if (_does_volume_exist(iVar1242))
	{
		_delete_volume(iVar1242);
	}
	func_47();
	func_89(&iLocal_1169);
	func_91();
	if (iVar1208 == 1)
	{
		set_scenario_type_enabled("PROP_HUMAN_SLEEP_BED_PILLOW", true);
		iLocal_1210 = 0;
	}
	if (_does_volume_exist(iVar1229))
	{
		_0x74c2b3dc0b294102(iVar1229);
		_0xa1cfb35069d23c23(iVar1229);
		remove_scenario_blocking_area(uVar1291, false);
		_delete_volume(iVar1229);
	}
	if (_does_volume_exist(iVar1232))
	{
		_delete_volume(iVar1232);
	}
	if (iVar1171 < 2)
	{
		Local_729.f_45 = 0;
		func_92(&Local_729);
	}
	if (_does_volume_exist(iVar1233))
	{
		_delete_volume(iVar1233);
	}
	if (_does_volume_exist(iVar1230))
	{
		func_93(&uLocal_1232, &uLocal_1294);
		_delete_volume(iVar1230);
	}
	func_58(iVar1234);
	func_58(iVar1235);
	if (does_entity_exist(Local_668[0]->f_8))
	{
		delete_object(&(Local_668[0]->f_8));
	}
	if (does_entity_exist(Local_668[4]->f_8))
	{
		delete_object(&(Local_668[4]->f_8));
	}
	if (func_36(iVar1162, 65536))
	{
		func_94(-534215902, 0, 0);
		if (func_95("val_saloon_br03_bloody", 0))
		{
		}
		if (func_95("val_saloon_br03_bed", 1))
		{
		}
	}
	if (func_36(iVar1166, 16777216))
	{
		_uiprompt_remove_group(func_40(Local_729.f_162), 1899245582);
		func_41(&uLocal_1168, 16777216);
	}
	func_42(&(Local_729.f_162), 1, 1);
	func_42(&(Local_729.f_163), 1, 1);
	if (does_entity_exist(&(uLocal_1250[0])))
	{
		func_96(&(uLocal_1250[0]), 1, 1);
	}
	if (iVar1168 != 0)
	{
		func_89(&iLocal_1170);
	}
	if (iLocal_15 == 0)
	{
		if (func_97(Local_729.f_3, 7) != 1)
		{
			func_38(Local_729.f_3, 7, 1);
			if (func_98())
			{
				func_99(2, 0);
			}
			else
			{
				func_99(2, 1);
			}
		}
	}
	if ((iVar1009 == 1 && Local_729.f_45 == 1) && iLocal_15 != 3)
	{
		if (iVar1210 == 0)
		{
			func_38(Local_729.f_3, 7, 1);
		}
		iLocal_15 = 4;
	}
	switch (iLocal_15)
	{
		case 0:
			func_100(84, 0, 0, 0, 0);
			if (func_97(Local_729.f_3, 7) != 1)
			{
				func_38(Local_729.f_3, 7, 1);
				if (func_98())
				{
					func_99(2, 0);
				}
				else
				{
					func_99(2, 1);
				}
			}
			break;
		case 1:
			func_100(84, 0, 0, 0, 0);
			break;
		case 2:
			func_100(84, 0, 3, 0, 0);
			func_101(-1394699518, 76, -1);
			func_102(106, 1, 0, 0, 12, 0, 0, 1);
			break;
		case 3:
			func_100(84, 0, 2, 0, 0);
			break;
		case 4:
			if (func_98())
			{
				func_100(84, 0, 3, 0, 95866989);
				func_38(Local_729.f_3, 6, 2);
			}
			else
			{
				func_100(84, 0, 3, 0, 0);
				func_38(Local_729.f_3, 6, 1);
			}
			func_101(-1394699518, 76, -1);
			func_102(106, 1, 0, 0, 12, 0, 0, 1);
			if (func_97(Local_729.f_3, 7) != 1)
			{
				func_38(Local_729.f_3, 7, 1);
				if (func_98())
				{
					func_99(3, 0);
				}
				else
				{
					func_99(3, 1);
				}
			}
			break;
		case 5:
			func_100(84, 0, 0, 0, 0);
			break;
		case 6:
			func_100(84, 0, 0, 0, 0);
			break;
	}
	if (func_43(iVar1251, 0, 1))
	{
		if (func_103(iVar1467, 0))
		{
			if (func_104(iVar1467))
			{
				set_ped_config_flag(iVar1251, 430, false);
				func_105(iVar1251, 0);
			}
		}
		else
		{
			task_police(iVar1251, false);
		}
	}
	if (does_entity_exist(&(uLocal_1250[0])))
	{
		_0x18ff3110cf47115d(&(uLocal_1250[0]), 2, 0);
		_0x39a2fc5af55a52b1(&(uLocal_1250[0]), -1);
		set_ped_as_no_longer_needed(uLocal_1250[0]);
	}
	if (does_entity_exist(&(uLocal_1250[1])))
	{
		_0x39a2fc5af55a52b1(&(uLocal_1250[1]), -1);
		set_ped_as_no_longer_needed(uLocal_1250[1]);
	}
	func_95("val_saloon_johnclothes01", 0);
	func_95("val_saloon_johnclothes02", 0);
	if (func_106(1073741824))
	{
		func_107(1073741824);
	}
	func_109(&Local_729, &uLocal_1250, &iLocal_1271, iVar1009, uVar1098, func_108(&Local_729), 0, 1, 0, 1);
	terminate_this_thread();
}

void func_15(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!func_110(bParam2) || is_screen_faded_out())
		{
			Call_Loc(iParam1);
		}
	}
}

bool func_16()
{
	switch (iVar1023)
	{
		case 0:
			if (func_111(&Local_729))
			{
				func_112();
				func_113();
				func_114();
				request_model(Local_923.f_15, false);
				func_115();
				func_116(&Local_668);
				iLocal_1025 = 1;
			}
			break;
		case 1:
			if (!func_117(&uLocal_1024, "DEADHK"))
			{
				return false;
			}
			if (!func_118(&uLocal_66))
			{
				return false;
			}
			if (!func_119(&Local_668))
			{
				return false;
			}
			iVar0 = 0;
			while (iVar0 < 2)
			{
				if (!has_model_loaded(Local_1034[iVar0]->f_1))
				{
					if (Local_1034[iVar0]->f_2 != 1 && Local_1034[iVar0]->f_2 != 2)
					{
					}
					else if (Local_1034[iVar0]->f_2 == 1 || Local_1034[iVar0]->f_2 == 2)
					{
					}
					else
					{
						return false;
					}
				}
				iVar0++;
			}
			if (!func_120(&Local_1034))
			{
				return false;
			}
			if (!has_model_loaded(Local_923.f_15))
			{
				request_model(Local_923.f_15, false);
				return false;
			}
			return true;
	}
	return false;
}

void func_17()
{
	Local_1012 = _create_anim_scene(Local_1012.f_4, 0, 0, false, true);
	set_anim_scene_origin(iVar1010, -314.84f, 818.183f, 120.973f, 0f, 0f, -80f, 2);
	if (iVar1009 == 0)
	{
		if (!does_entity_exist(Local_668[2]->f_8))
		{
			Local_668[2]->f_8 = create_object(Local_668[2]->f_7, -311.4382f, 817.491f, 121.6564f, true, true, false, false, true);
			set_entity_coords(Local_668[2]->f_8, -310.9387f, 816.209f, 120.9801f, true, false, true, true);
		}
	}
	if (iVar1009 == 1)
	{
		if (!does_entity_exist(Local_668[2]->f_8))
		{
			Local_668[2]->f_8 = create_object(Local_668[2]->f_7, -311.4382f, 817.491f, 121.6564f, true, true, false, false, true);
			set_entity_coords(Local_668[2]->f_8, -310.9387f, 816.209f, 120.9801f, true, false, true, true);
		}
	}
	if (!does_entity_exist(Local_668[1]->f_8))
	{
		Local_668[1]->f_8 = create_object(Local_668[1]->f_7, Local_923.f_48, true, true, false, false, true);
	}
	if (does_entity_exist(Local_668[2]->f_8))
	{
		set_anim_scene_entity(iVar1010, "reward", Local_668[2]->f_8, 0);
	}
	if (_does_anim_scene_exist(iVar1010))
	{
	}
	if (!is_string_null_or_empty(Local_1012.f_4))
	{
		if (!_is_anim_scene_loaded(iVar1010, true, false))
		{
			load_anim_scene(iVar1010);
		}
	}
	if (does_entity_exist(Local_668[1]->f_8))
	{
		set_anim_scene_entity(iVar1010, "RAG", Local_668[1]->f_8, 0);
	}
}

bool func_18(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_19(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	if (func_20(iVar0, -423064657, 1))
	{
		return true;
	}
	if (bParam1)
	{
		switch (iParam2)
		{
			case 0:
			case 2:
				if (func_20(iVar0, 557524588, 1) || func_20(iVar0, 1590600971, 1))
				{
					return true;
				}
				break;
			case 1:
				if (func_20(iVar0, 1792646445, 1) || func_20(iVar0, 1590600971, 1))
				{
					return true;
				}
				break;
		}
	}
	return false;
}

int func_19(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			return 0;
		case 120:
			return 1;
		case 38:
			return 2;
		case 93:
			return 3;
		case 82:
			return 4;
		case 65:
			return 5;
		case 3:
			return 6;
		case 110:
			return 7;
		case 105:
			return 8;
		case 5:
			return 9;
		case 26:
			return 10;
		case 75:
			return 11;
		case 115:
			return 12;
		case 76:
			return 13;
		case 92:
			return 14;
		case 56:
			return 15;
		default:
			break;
	}
	return -1;
}

bool func_20(int iParam0, int iParam1, bool bParam2)
{
	if (!func_121(iParam0))
	{
		return false;
	}
	if (!func_122(iParam1))
	{
		return false;
	}
	if (bParam2)
	{
		return func_123(iParam0, iParam1);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_40.f_11206[iParam0][iVar0] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_21(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (bParam6 || func_124(*uParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *uParam1, &(uParam0->f_160), 1, iParam3, iParam4))
	{
		if (bParam6 || func_125(uParam0, *uParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				fVar0 = 7f;
				if (func_126(uParam0->f_3, 1))
				{
					fVar0 = 20f;
				}
				clear_area(uParam0->f_51, fVar0, 2097152);
			}
			if (iParam5 == 1)
			{
				func_127(uParam0, -1, 0, bParam7);
			}
			_0x9d16896f0dbe78a2(uParam0->f_51, 5f);
			if (bParam2)
			{
				uParam0->f_51.f_3 = func_128(uParam0->f_51);
			}
			return true;
		}
	}
	return false;
}

void func_22(var uParam0, var uParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*uParam1 = 9;
			*uParam2 = 0;
			break;
		case 1:
			*uParam1 = 9;
			*uParam2 = 1;
			break;
	}
}

Vector3 func_23(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -173.826f;
				case 1:
					return 0f, 0f, -173.826f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_24(var uParam0, var uParam1, int iParam2)
{
	Stack.Push(uParam1);
	Stack.Push(uParam0->f_51.f_4);
	Call_Loc(iParam2);
	vVar0 = { StackVal, StackVal, StackVal };
	uParam0->f_51.f_3 = vVar0.z;
}

void func_25(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 3490746;
	if (bParam4)
	{
		iVar0 |= 1;
	}
	if (bParam5)
	{
		iVar0 |= 72;
	}
	if (bParam6)
	{
		iVar0 |= 6;
	}
	if (bParam7)
	{
		iVar0 |= 524288;
	}
	if (bParam8)
	{
		iVar0 |= 131072;
	}
	clear_area(vParam0, fParam3, iVar0);
}

int func_26()
{
	if (func_36(iVar1162, 65536))
	{
		return 0;
	}
	return 1;
}

bool func_27()
{
	switch (iVar1031)
	{
		case 0:
			if (func_131(func_129(&Local_729), func_130(&Local_729), &Local_1034, &uLocal_1250, 0, 0, -1, 1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_28()
{
	if (func_43(&(uLocal_1250[1]), 0, 1))
	{
		set_entity_coords(&(uLocal_1250[1]), Local_729.f_51, true, false, true, true);
		set_entity_heading(&(uLocal_1250[1]), -170f);
		if (_has_ped_emotional_preset_loaded(&(uLocal_1250[1]), "DEFAULT_SCARED"))
		{
		}
		else
		{
			_request_ped_emotional_preset(&(uLocal_1250[1]), "DEFAULT_SCARED");
		}
		set_ped_config_flag(&(uLocal_1250[1]), 14, true);
		set_ped_config_flag(&(uLocal_1250[1]), 430, true);
		set_ped_config_flag(&(uLocal_1250[1]), 378, false);
		clear_ped_env_dirt(&(uLocal_1250[1]));
		iLocal_1241 = _create_volume_cylinder(get_entity_coords(&(uLocal_1250[1]), true, false), 0f, 0f, 0f, 3f, 3f, 5f);
		_0x7c00cfc48a782dc0(iVar1239, &(uLocal_1250[1]), 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
		iLocal_1248 = func_132(&(uLocal_1250[1]), iVar1239, 28);
		stop_ped_speaking(&(uLocal_1250[0]), true);
		stop_ped_speaking(&(uLocal_1250[1]), true);
		func_133(&(uLocal_1250[1]), &(Local_1034[1]->f_23), 0);
		func_134(&(uLocal_1250[1]), -618550132, 0, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		func_135(&(uLocal_1250[1]), -2051332199, 3, 0);
		if (func_136(-764310200))
		{
			func_135(&(uLocal_1250[1]), -764310200, 2, 0);
		}
		decor_set_float(&(uLocal_1250[1]), "REDJ_Witness_Time", -1f);
		func_137();
		func_138(&(uLocal_1250[1]), &Local_729, 0);
	}
}

bool func_29()
{
	if (_does_anim_scene_exist(iVar1010))
	{
		if (_is_anim_scene_metadata_loaded(iVar1010, false))
		{
			set_anim_scene_entity(iVar1010, "PED_HOOKER", &(uLocal_1250[1]), 0);
			if (does_entity_exist(iVar1285))
			{
				set_anim_scene_entity(iVar1010, "DOOR", iVar1285, 0);
			}
			if (_0xa9016536015de29d(iVar1010, "PBL_NORMAL"))
			{
				if (!_0x23e33cb9f4a3f547(iVar1010, "PBL_NORMAL"))
				{
					_0xdf7b5144e25cd3fe(iVar1010, "PBL_NORMAL");
				}
			}
			if (_0xa9016536015de29d(iVar1010, "PBL_DIALOGUE_01"))
			{
				if (!_0x23e33cb9f4a3f547(iVar1010, "PBL_DIALOGUE_01"))
				{
					_0xdf7b5144e25cd3fe(iVar1010, "PBL_DIALOGUE_01");
				}
			}
			if (_0xa9016536015de29d(iVar1010, "PBL_DIALOGUE_02"))
			{
				if (!_0x23e33cb9f4a3f547(iVar1010, "PBL_DIALOGUE_02"))
				{
					_0xdf7b5144e25cd3fe(iVar1010, "PBL_DIALOGUE_02");
				}
			}
			if (_0xa9016536015de29d(iVar1010, "PBL_DIALOGUE_03"))
			{
				if (!_0x23e33cb9f4a3f547(iVar1010, "PBL_DIALOGUE_03"))
				{
					_0xdf7b5144e25cd3fe(iVar1010, "PBL_DIALOGUE_03");
				}
			}
			if (_0xa9016536015de29d(iVar1010, "PBL_DIALOGUE_04"))
			{
				if (!_0x23e33cb9f4a3f547(iVar1010, "PBL_DIALOGUE_04"))
				{
					_0xdf7b5144e25cd3fe(iVar1010, "PBL_DIALOGUE_04");
				}
			}
			if (_0xa9016536015de29d(iVar1010, "PBL_DIALOGUE_05"))
			{
				if (!_0x23e33cb9f4a3f547(iVar1010, "PBL_DIALOGUE_05"))
				{
					_0xdf7b5144e25cd3fe(iVar1010, "PBL_DIALOGUE_05");
				}
			}
			if (_0xa9016536015de29d(iVar1010, "PBL_IDLE_CLEANUP"))
			{
				if (!_0x23e33cb9f4a3f547(iVar1010, "PBL_IDLE_CLEANUP"))
				{
					_0xdf7b5144e25cd3fe(iVar1010, "PBL_IDLE_CLEANUP");
				}
			}
			if (iVar1009 == 0)
			{
				if (_0xa9016536015de29d(iVar1010, "PBL_TRANSITION_TO_BED"))
				{
					if (!_0x23e33cb9f4a3f547(iVar1010, "PBL_TRANSITION_TO_BED"))
					{
						_0xdf7b5144e25cd3fe(iVar1010, "PBL_TRANSITION_TO_BED");
					}
				}
			}
			else if (iVar1009 == 1)
			{
				if (_0xa9016536015de29d(iVar1010, "PBL_TRANSITION_TO_FLOOR"))
				{
					if (!_0x23e33cb9f4a3f547(iVar1010, "PBL_TRANSITION_TO_FLOOR"))
					{
						_0xdf7b5144e25cd3fe(iVar1010, "PBL_TRANSITION_TO_FLOOR");
					}
				}
			}
			set_anim_scene_bool(iVar1010, "bool_idle_door", false, false);
			iLocal_1198 = 1;
			return true;
		}
	}
	else if (iVar1181 > 10)
	{
		func_17();
		iLocal_1183 = 0;
	}
	else
	{
		iLocal_1183 = iVar1181 + 1;
	}
	return false;
}

void func_30()
{
	iLocal_1226 = _create_volume_box_with_custom_name(-318.787f, 807.11f, 116.944f, 0f, 0f, 9.739f, 7.851f, 31.489f, 12.775f, "volRestriction");
	if (_does_volume_exist(iVar1224))
	{
		_0x18262cafebb5fbe1(iVar1224, 534496, 0, 0, -1, -1, 0);
		_0xb56d41a694e42e86(iVar1224, 534496, 0, 0, -1, -1, 2);
		uLocal_1292 = _0x4c39c95ae5db1329(iVar1224, 0, 15);
	}
	iLocal_1227 = _create_volume_box_with_custom_name(-315.387f, 794.883f, 116.944f, 0f, 0f, 9.739f, 9.735f, 4.993f, 12.775f, "volRestrictionRoad");
	if (_does_volume_exist(iVar1225))
	{
		_0x18262cafebb5fbe1(iVar1225, 534496, 0, 0, -1, -1, 0);
		_0xb56d41a694e42e86(iVar1225, 534496, 0, 0, -1, -1, 2);
		uLocal_1292 = _0x4c39c95ae5db1329(iVar1225, 0, 15);
	}
}

bool func_31(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		func_139(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	func_140(uParam0, uParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !uParam0->f_5 & 16384 != 0)
		{
			if (uParam0->f_5.f_1 & 256 != 0)
			{
				func_141(&(uParam0->f_5));
			}
			func_83(&(uParam0->f_5), 16384);
		}
	}
	if (!uParam0->f_48 && !func_142(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_143(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_144(&(uParam0->f_121));
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
					func_145(uParam0, uParam0->f_193, 2f);
				}
			}
			break;
		case 2:
			if (!func_146(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		case 3:
			break;
	}
	if (func_126(uParam0->f_3, 128))
	{
		if ((does_entity_exist(uParam1[0]) && !is_ped_injured(uParam1[0])) && uParam0->f_3 != 49)
		{
			if (!_0xf6a8a652a6b186cd(_0xf6f5447d418daa82(uParam1[0])))
			{
				func_147(uParam0, uParam1[0]);
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

bool func_32(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_148(bParam1, bParam2, bParam3);
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

void func_33(var uParam0)
{
	if (!_does_volume_exist(*uParam0))
	{
		return;
	}
	_0x74c2b3dc0b294102(*uParam0);
	_0xa1cfb35069d23c23(*uParam0);
	_delete_volume(*uParam0);
}

bool func_34(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > iParam2->f_5)
	{
		func_149(iParam2, 1, iVar0);
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
			if (func_150(iParam0, iParam2))
			{
				*uParam3 = 128;
				func_151(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (func_152(iParam0, iParam2))
				{
					*uParam3 = 8;
					func_151(iParam0, iParam2, *uParam3);
					return true;
				}
				else if (func_153(iParam0, iParam1, iParam2))
				{
					*uParam3 = 8;
					func_151(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (func_154(iParam0, iParam2))
				{
					*uParam3 = 64;
					func_151(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_26 && func_32(player_id(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_151(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_155(iParam2, 1065353216))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (func_156(Global_35, iParam0, iParam2))
					{
						*uParam3 = 4;
						func_151(iParam0, iParam2, *uParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (func_157(Global_35, iParam0, iParam2))
					{
						*uParam3 = 256;
						func_151(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_158(Global_35, iParam0, iParam2, 0))
				{
					*uParam3 = 16;
					func_151(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			else if (func_158(Global_35, iParam0, iParam2, 1))
			{
				*uParam3 = 16;
				func_151(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (func_159(iParam0, iParam2))
				{
					*uParam3 = 32;
					func_151(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || iParam2->f_12 < 20f)
			{
				if (func_160(&iParam0, iParam2))
				{
					*uParam3 = 4096;
					func_151(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (func_161(iParam2, 4000))
				{
					if ((func_162(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && func_163(iParam2, iParam0)) && func_164(iParam2, iParam0))
					{
						*uParam3 = 2;
						func_151(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((func_162(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && func_163(iParam2, iParam0)) && func_164(iParam2, iParam0))
				{
					*uParam3 = 2;
					func_151(iParam0, iParam2, *uParam3);
					return true;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (func_165(iParam0, Global_1935630->f_41))
							{
								func_166();
								*uParam3 = 2;
								func_151(iParam0, iParam2, *uParam3);
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
						if (func_165(iParam0, Global_1935630->f_41))
						{
							func_166();
							*uParam3 = 2;
							func_151(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (func_167(iParam2, iParam0) || (iParam2->f_9 > 0 && (func_168() - iParam2->f_9) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_166();
						*uParam3 = 2;
						func_151(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (func_169())
					{
						if (func_165(iParam0, Global_1935630->f_42))
						{
							func_166();
							*uParam3 = 2;
							func_151(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (func_170(iParam2, iParam0))
			{
				*uParam3 = 1024;
				func_151(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (func_171(iParam0, iParam1, iParam2))
				{
					*uParam3 = 2048;
					func_151(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (func_172(iParam0, iParam2))
					{
						*uParam3 = 8192;
						func_151(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (func_173(iParam0, iParam2))
				{
					*uParam3 = 32768;
					func_151(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (func_174(iParam2, 4000))
				{
					if (func_175(&iParam0, iParam2))
					{
						*uParam3 = 512;
						func_151(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (func_176(iParam0, iParam2))
				{
					*uParam3 = 65536;
					iParam2->f_4 = 0;
					func_151(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_177(iParam2, iParam0))
			{
				*uParam3 = 1;
				func_151(iParam0, iParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_35(vector3 vParam0, float fParam3)
{
	bVar0 = false;
	if (func_32(player_id(), 0, 1, 1))
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

bool func_36(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_37(int iParam0, int iParam1)
{
	stop_current_playing_ambient_speech(iParam0, iParam1);
	stop_current_playing_speech(iParam0, iParam1);
}

void func_38(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_178(iParam0, iParam1);
	Global_17504.f_1003[iVar0]->f_1 = iParam2;
}

void func_39(var uParam0, int iParam1)
{
	func_179(uParam0, iParam1);
}

int func_40(int iParam0)
{
	iVar0 = func_180(iParam0);
	if (iVar0 < 0 || iVar0 >= 48)
	{
		return 0;
	}
	return (*Global_1945938)[iVar0]->f_3;
}

void func_41(int iParam0, int iParam1)
{
	func_181(iParam0, iParam1);
}

void func_42(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_182(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_180(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_183(iVar0);
	*uParam0 = 0;
}

bool func_43(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_184(iParam0, iParam1);
}

void func_44(int iParam0, int iParam1, int iParam2)
{
	vVar0 = { get_entity_coords(iParam0, true, false) };
	iVar3 = 0;
	if ((_does_anim_scene_exist(iVar1007) && _is_anim_scene_started(iVar1007, false)) && _0x3ab6c7b0bb0df4b1(&(uLocal_1250[1]), iVar1007))
	{
		iVar3 = 1;
	}
	if ((_does_anim_scene_exist(Local_1012.f_3) && _is_anim_scene_started(Local_1012.f_3, false)) && _0x3ab6c7b0bb0df4b1(&(uLocal_1250[1]), Local_1012.f_3))
	{
		iVar3 = 1;
	}
	if (iVar3 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		open_sequence_task(&iLocal_1290);
	}
	if (iVar1006 == 0)
	{
		if (func_185(vVar0, -314.4529f, 816.6799f, 121.0614f, -313.2099f, 816.8894f, 121.1977f) && iParam2 == 0)
		{
			iVar4 = 0;
			if (_does_anim_scene_exist(iVar1007))
			{
				if (((((((((_is_anim_scene_started(iVar1007, false) && _0x1f0e401031e20146(iVar1007, "PBL_TRANSITION_TO_BED")) && _get_anim_scene_progress(iVar1007) > 0.627f) || (_is_anim_scene_started(iVar1007, false) && _0x1f0e401031e20146(iVar1007, "PBL_DIALOGUE_04"))) || (_is_anim_scene_started(iVar1007, false) && _0x1f0e401031e20146(iVar1007, "PBL_BED_LOOK_F"))) || (_is_anim_scene_started(iVar1007, false) && _0x1f0e401031e20146(iVar1007, "PBL_BED_LOOK_R"))) || (_is_anim_scene_started(iVar1007, false) && _0x1f0e401031e20146(iVar1007, "PBL_BED_LOOK_L"))) || (_is_anim_scene_started(iVar1007, false) && _0x1f0e401031e20146(iVar1007, "PBL_FLOOR_LOOK_F"))) || (_is_anim_scene_started(iVar1007, false) && _0x1f0e401031e20146(iVar1007, "PBL_FLOOR_LOOK_R"))) || (_is_anim_scene_started(iVar1007, false) && _0x1f0e401031e20146(iVar1007, "PBL_FLOOR_LOOK_L")))
				{
					iVar4 = 1;
				}
			}
			if (iVar4 == 1 || (_does_anim_scene_exist(Local_1012.f_3) && _is_anim_scene_started(Local_1012.f_3, false)))
			{
				if (has_anim_event_fired(&(uLocal_1250[1]), -674277344))
				{
					task_play_anim_advanced(0, &(Local_547[14]), Local_547[14]->f_1, Local_923, 0f, 0f, Local_923.f_3, 16f, -4f, -1, 128, 0f, 2, 1, 0);
				}
				else
				{
					task_play_anim_advanced(0, &(Local_547[12]), Local_547[12]->f_1, Local_923, 0f, 0f, Local_923.f_3, 16f, -4f, -1, 128, 0f, 2, 1, 0);
				}
			}
		}
		else if (has_anim_event_fired(&(uLocal_1250[1]), -674277344))
		{
			task_play_anim_advanced(0, &(Local_547[13]), Local_547[13]->f_1, Local_923, 0f, 0f, Local_923.f_3, 16f, -4f, -1, 128, 0f, 2, 1, 0);
		}
		else
		{
			task_play_anim_advanced(0, &(Local_547[11]), Local_547[11]->f_1, Local_923, 0f, 0f, Local_923.f_3, 16f, -4f, -1, 128, 0f, 2, 1, 0);
		}
	}
	else if (has_anim_event_fired(&(uLocal_1250[1]), -674277344))
	{
		task_play_anim(0, &(Local_547[11]), Local_547[11]->f_1, 8f, -4f, -1, 0, 0f, false, 0, false, 0, false);
	}
	else
	{
		task_play_anim(0, &(Local_547[11]), Local_547[11]->f_1, 8f, -4f, -1, 0, 0f, false, 0, false, 0, false);
	}
	if (_does_anim_scene_exist(iVar1007) && _is_anim_scene_started(iVar1007, false))
	{
		remove_anim_scene_entity(iVar1007, "PED_HOOKER", &(uLocal_1250[1]));
		remove_anim_scene_entity(iVar1007, "RAG", Local_668[1]->f_8);
		activate_physics(Local_668[1]->f_8);
	}
	if (_does_anim_scene_exist(Local_1012.f_3) && _is_anim_scene_started(Local_1012.f_3, false))
	{
		remove_anim_scene_entity(Local_1012.f_3, "PED_HOOKER", &(uLocal_1250[1]));
		remove_anim_scene_entity(Local_1012.f_3, "RAG", Local_668[1]->f_8);
		activate_physics(Local_668[1]->f_8);
	}
	if (iParam1 == 0)
	{
		func_46(&(uLocal_1250[1]), &iLocal_1290, 0, 0, 1, 1);
		set_ped_keep_task(&(uLocal_1250[1]), true);
	}
}

void func_45(int iParam0)
{
	if (iParam0 == 0)
	{
		open_sequence_task(&iLocal_1290);
	}
	if (func_50(&(uLocal_1250[1]), iVar1230, 0, 1))
	{
		if (iVar1023 > 4)
		{
			task_follow_nav_mesh_to_coord(0, -317.4022f, 816.7648f, 121.8743f, 2f, -1, 0.25f, 2049, 40000f);
		}
	}
	_task_smart_flee_style_ped(0, Global_35, 4, 49409, -1082130432, -1, 0);
	if (iParam0 == 0)
	{
		func_46(&(uLocal_1250[1]), &iLocal_1290, 0, 0, 1, 1);
		set_ped_keep_task(&(uLocal_1250[1]), true);
	}
	_0xe8f1a5b4ced3725a(&(uLocal_1250[1]), Local_923.f_32, -1082130432);
	func_49(iLocal_1271[0]);
	func_49(iLocal_1271[1]);
	func_39(&uLocal_1164, 536870912);
}

void func_46(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

void func_47()
{
	if (_does_volume_exist(iVar1224))
	{
		_0x74c2b3dc0b294102(iVar1224);
		_0xa1cfb35069d23c23(iVar1224);
		remove_scenario_blocking_area(uVar1290, false);
		_delete_volume(iVar1224);
	}
	if (_does_volume_exist(iVar1226))
	{
		_0xa1cfb35069d23c23(iVar1226);
		_delete_volume(iVar1226);
	}
	if (_does_volume_exist(iVar1227))
	{
		_0x74c2b3dc0b294102(iVar1227);
		_0xa1cfb35069d23c23(iVar1227);
		_delete_volume(iVar1227);
	}
	if (_does_volume_exist(iVar1228))
	{
		_0x74c2b3dc0b294102(iVar1228);
		_0xa1cfb35069d23c23(iVar1228);
		_delete_volume(iVar1228);
	}
}

void func_48()
{
	func_186(Local_1399[0], 0, 0);
	func_186(Local_1399[1], 0, 0);
	func_55(Local_1356[0], 0);
}

void func_49(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

bool func_50(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && is_entity_dead(iParam0))
	{
		return false;
	}
	if (!_does_volume_exist(iParam1))
	{
		return false;
	}
	return is_entity_in_volume(iParam0, iParam1, true, 0);
}

void func_51()
{
	if (!_does_anim_scene_exist(iVar1018))
	{
		iLocal_1020 = _create_anim_scene("script@beat@town@deadJohn@valentineSheriff", 0, "PBL_NORMAL", false, true);
		set_anim_scene_origin(iVar1018, -277.125f, 804.588f, 118.369f, 0f, 0f, -55f, 2);
		set_anim_scene_entity(iVar1018, "SHERIFF", iVar1251, 0);
		set_anim_scene_entity(iVar1018, "CHAIR", iVar1279, 0);
		set_anim_scene_bool(iVar1018, "ACTION_1", false, false);
		set_anim_scene_bool(iVar1018, "ACTION_2", false, false);
		if (!_is_anim_scene_loaded(iVar1018, true, false))
		{
			load_anim_scene(iVar1018);
		}
	}
}

void func_52(int iParam0, bool bParam1)
{
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(iParam0, iVar0);
}

void func_53(vector3 vParam0, float fParam3, bool bParam4)
{
	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

void func_54(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_186((*uParam0)[iVar0], bParam1, bParam2);
		iVar0++;
	}
}

void func_55(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_72(&(iParam0->f_18));
}

int func_56()
{
	if (iVar1027 == 0)
	{
		if ((func_36(iVar1166, 1024) || iVar1222 == 1) && Local_729.f_46 == 0)
		{
			return 90;
		}
		else
		{
			return 74;
		}
	}
	return 74;
}

int func_57(int iParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	iVar0 = iParam9;
	func_187(&iVar0);
	if (func_2(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_188(iParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_2(iVar0, 134217728))
	{
		func_189(iParam1, uParam3, iParam0);
	}
	if (!*uParam4)
	{
		if (!is_bit_set(*iParam1, 25))
		{
			if (is_bit_set(*iParam1, 24))
			{
				if (!func_190(558))
				{
					func_191(558, 0);
				}
				set_bit(iParam1, 24);
				set_bit(iParam1, 25);
			}
		}
	}
	return iVar1;
}

void func_58(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

float func_59(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_60(int iParam0)
{
	func_72(&uLocal_0);
	func_192(1, iParam0, 0);
	_0xdd1232b332cbb9e7(3, 1, 0);
	func_193();
}

char* func_61(char* sParam0, int iParam1)
{
	if (iVar1007 == 0)
	{
		iVar0 = 1;
	}
	else if (iVar1007 == 1)
	{
		iVar0 = 2;
	}
	if (iParam1 > 0)
	{
		iVar0 = iParam1;
	}
	return func_194("DJ", "VAL", sParam0, iVar0);
}

bool func_62(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_195(iParam0, iParam1, sParam2, sParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

bool func_63(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	if (_get_carrier_as_ped(iParam1) != iParam0)
	{
		return false;
	}
	iVar0 = _0x61914209c36efddb(iParam1);
	if (iVar0 == 5)
	{
		return true;
	}
	if (iVar0 == 7)
	{
		return true;
	}
	return false;
}

void func_64(int iParam0)
{
	if ((_does_anim_scene_exist(iVar1017) && func_43(iVar1250, 0, 1)) && _0x3ab6c7b0bb0df4b1(iVar1250, iVar1017))
	{
		if (iVar1215 == 1)
		{
			if (does_entity_exist(iVar1278))
			{
				set_entity_no_collision_entity(iVar1278, iVar1250, false);
			}
			if (_does_anim_scene_exist(iVar1017))
			{
				set_ped_using_action_mode(iVar1250, true, -1, 0);
				if (iParam0 == 0)
				{
					open_sequence_task(&iLocal_1290);
				}
				task_play_anim(0, &(Local_547[18]), Local_547[18]->f_1, 8f, -8f, -1, 0, 0f, false, 1, false, 0, false);
				if (iParam0 == 0)
				{
					func_46(iVar1250, &iLocal_1290, 0, 0, 1, 1);
				}
			}
		}
		else
		{
			_0x802092b07e3b1eea(iVar1250, Global_36, 3);
		}
	}
}

int func_65()
{
	if (iVar1028 == 0 && iVar1212 == 0)
	{
		return 90;
	}
	return 74;
}

bool func_66()
{
	func_196();
	func_197();
	func_198();
	func_199();
	func_200();
	func_201();
	func_202();
	func_203();
	func_204();
	func_205();
	func_206();
	if (func_36(iVar1166, 524288))
	{
		if (does_entity_exist(Local_668[2]->f_8))
		{
			if (func_207(Global_35, iVar1227, 1, 0))
			{
				set_ped_reset_flag(Global_35, 129, false);
			}
		}
	}
	if (iVar1009 == 0 && !func_36(iVar1162, 262144))
	{
		if (func_207(Global_35, iVar1227, 1, 0))
		{
			if (_is_ped_carrying(Global_35))
			{
				if (func_208(-311.7571f, 816.5558f, 122.219f, Global_35))
				{
					func_209();
				}
			}
		}
	}
	if (!func_36(iVar1162, 65536))
	{
		func_94(-534215902, 1, 0);
		iVar0 = 1;
		if (func_95("val_saloon_br03_bed", 0))
		{
		}
		else
		{
			iVar0 = 0;
		}
		if (func_95("val_saloon_br03_bloody", 1))
		{
		}
		else
		{
			iVar0 = 0;
		}
		if (iVar0 == 1)
		{
			func_39(&uLocal_1164, 65536);
		}
	}
	if (iVar1220 == 1)
	{
		func_88(1);
	}
	func_210();
	if (iLocal_14 == 1 && func_43(&(uLocal_1250[1]), 0, 1))
	{
		_0x66f9eb44342bb4c5(&(uLocal_1250[1]), &Local_16);
	}
	if (iVar1200 == 1)
	{
		func_211();
	}
	if (iVar1206 == 1)
	{
		if (!func_32(player_id(), 0, 0, 1))
		{
			func_212();
		}
		func_213();
	}
	if (func_214())
	{
		func_215();
		if (iVar1024 != 14 && Local_729.f_46 == 0)
		{
			Local_729.f_46 = 1;
			func_60(0);
			iLocal_1026 = 13;
		}
	}
	if (func_50(Global_35, iVar1227, 0, 1))
	{
		if (!func_106(1073741824))
		{
			func_216(1073741824);
		}
	}
	else if (func_106(1073741824))
	{
		func_107(1073741824);
	}
	switch (iVar1024)
	{
		case 0:
			func_217();
			func_54(&Local_1399, 0, 0);
			clear_ped_env_dirt(&(uLocal_1250[1]));
			if (func_43(&(uLocal_1250[1]), 0, 1))
			{
				if (_has_ped_emotional_preset_loaded(&(uLocal_1250[1]), "DEFAULT_SCARED"))
				{
					_0xaab050da48b57978(&(uLocal_1250[1]), "DEFAULT_SCARED", 0, -1, 4);
				}
			}
			if (func_218(&(uLocal_1250[0]), 0))
			{
				if (_is_anim_scene_loaded(Local_1012.f_1, true, false))
				{
					set_anim_scene_entity(Local_1012.f_1, "PED_MAN", &(uLocal_1250[0]), 0);
					start_anim_scene(Local_1012.f_1);
					func_219(&uLocal_1134);
					func_220();
					iLocal_1026 = 1;
				}
			}
			if (!_does_volume_exist(iVar1244))
			{
				func_221(&uLocal_1246, -315.394f, 793.935f, 116.655f, 0f, 0f, 10.08f, 5f, 16.776f, 5f, "volNavBlocker");
			}
			if (_does_volume_exist(iVar1244))
			{
				if (!func_36(iVar1166, 33554432))
				{
					_0x19c7567d2f2287d6(iVar1244, 7);
					func_39(&uLocal_1168, 33554432);
				}
			}
			break;
		case 1:
			if (iVar1009 == 1)
			{
				_set_entity_coords_and_heading(&(uLocal_1250[0]), -312.6304f, 817.5388f, 121.02f, -10f, false, true, true);
			}
			clear_ped_env_dirt(&(uLocal_1250[1]));
			func_222();
			if (iVar1171 <= 1)
			{
				if (!func_223(128))
				{
					_task_smart_flee_style_ped(&(uLocal_1250[1]), Global_35, 0, 0, -1082130432, -1, 0);
					return true;
				}
			}
			if ((!func_224(Global_35, 1) && has_entity_clear_los_to_entity(&(uLocal_1250[1]), Global_35, 17)) && func_225(&Local_729, 3f, 15f, 15f, 1, 0, 1, -1082130432, 1, 1125515264, 0, 0))
			{
				iLocal_1026 = 2;
				_request_ped_emotional_preset(&(uLocal_1250[1]), "DEFAULT_NERVOUS");
			}
			break;
		case 2:
			if (iVar1009 == 1)
			{
				_set_entity_coords_and_heading(&(uLocal_1250[0]), -312.6304f, 817.5388f, 121.02f, -10f, false, true, true);
			}
			func_226();
			if (iLocal_14 == 1)
			{
				func_227(&(uLocal_1250[1]), &uLocal_1479, 0f, 0f, 0f, 0, 30f, 10f, -1, 3000, 1000, 2f, 0, 1, 1084227584);
			}
			if (iVar1171 <= 1)
			{
				if (!func_223(128))
				{
					_task_smart_flee_style_ped(&(uLocal_1250[1]), Global_35, 0, 0, -1082130432, -1, 0);
					return true;
				}
			}
			if (func_228())
			{
				iLocal_1200 = 1;
				iLocal_1026 = 4;
				func_229(iVar1487);
				if (!func_230(-534215902))
				{
					func_94(-534215902, 1, 0);
				}
				if (_does_volume_exist(iVar1244))
				{
					_0x2c87c3e1c7b96ee2(iVar1244);
					func_58(iVar1244);
				}
				stop_ped_speaking(&(uLocal_1250[1]), true);
				clear_ped_env_dirt(&(uLocal_1250[0]));
				iLocal_14 = 0;
				func_69(&uLocal_1332, 0);
				Local_41.f_3 = Global_35;
				func_231(84);
				if (!func_232(&Global_1935630, 4))
				{
					func_233(Global_1935630, 4);
					func_87(0);
				}
			}
			break;
		case 4:
			set_ped_reset_flag(&(uLocal_1250[1]), 12, true);
			set_ped_reset_flag(&(uLocal_1250[1]), 172, true);
			if (func_70(&uLocal_1332) > 25f)
			{
				if (func_59(Global_35, &(uLocal_1250[1]), 1, 1) > 7.5f)
				{
					func_234("DEADHK_OBJ_01", 7500, 0, 0, -1, -1, 0);
					func_72(&uLocal_1332);
				}
			}
			if (_does_anim_scene_exist(iVar1010))
			{
				iVar1 = func_235(1087218607, 0);
				if (does_entity_exist(iVar1))
				{
					if (!_0x3ab6c7b0bb0df4b1(iVar1, iVar1010))
					{
						set_anim_scene_entity(iVar1010, "Door", iVar1, 0);
					}
				}
			}
			if (!is_any_speech_playing(Global_35) && !func_36(iVar1163, -2147483648))
			{
				func_39(&uLocal_1165, -2147483648);
				if (iVar1207 == 0 && iVar1205 == 1)
				{
					func_236(Local_1399[1], "BEAT_GRT_NEG");
					func_186(Local_1399[0], 0, 0);
					func_186(Local_1399[1], 1, 0);
				}
			}
			if (iVar1009 == 1)
			{
				_set_entity_coords_and_heading(&(uLocal_1250[0]), -312.6304f, 817.5388f, 121.02f, -10f, false, true, true);
			}
			if (func_237() && func_238())
			{
				iVar2 = func_235(1087218607, 0);
				if (does_entity_exist(iVar2))
				{
					set_anim_scene_entity(iVar1010, "Door", iVar2, 0);
				}
				set_anim_scene_bool(iVar1010, "bool_idle_door", true, false);
				func_239();
				if (iVar1009 == 1)
				{
					remove_anim_scene_entity(Local_1012.f_1, "PED_MAN", &(uLocal_1250[0]));
				}
				clear_ped_env_dirt(&(uLocal_1250[0]));
				func_49(iLocal_1271[1]);
				func_240(get_entity_coords(&(uLocal_1250[0]), true, false), iLocal_1271[0], -89429847, 0, "BLIP_AMBIENT_CORPSE", -981020806);
				_0x935cf6e42baf7f4d(&(uLocal_1250[1]));
				if (func_68(&uLocal_1311))
				{
					func_72(&uLocal_1311);
				}
				if (func_68(&uLocal_1332))
				{
					func_72(&uLocal_1332);
				}
				func_78(&(Local_729.f_5), 0);
				set_ped_config_flag(&(uLocal_1250[1]), 6, true);
				set_ped_config_flag(&(uLocal_1250[1]), 113, true);
				Local_729.f_44 = 1;
				if (!func_98())
				{
					func_38(Local_729.f_3, 2, 1);
				}
				func_38(Local_729.f_3, 5, 1);
				_0xff745b0346e19e2c(1361896662);
				iLocal_1026 = 5;
			}
			fVar3 = func_67(Global_35, Local_923, 1);
			fVar4 = func_67(Global_35, Local_729.f_51, 1);
			if (fVar3 > 30f && fVar4 > 20f)
			{
				func_85(Global_1935630, 4);
				func_14();
			}
			break;
		case 5:
			if (_0x1f0e401031e20146(iVar1010, "PBL_NORMAL"))
			{
				if ((_0x8d81e7824b7753f7(iVar1010, "Base_Idle", 1) || has_anim_event_fired(&(uLocal_1250[1]), -150670159)) && iVar1204 == 1)
				{
					if (does_entity_exist(iVar1285))
					{
						remove_anim_scene_entity(iVar1010, "DOOR", iVar1285);
						set_entity_as_no_longer_needed(&uLocal_1287);
						func_241(1087218607, 0, 1f, 1, 1, 0, 0, 0);
					}
					iLocal_1206 = 0;
					func_242();
					iLocal_1029 = 2;
					iLocal_1215 = 0;
				}
			}
			func_243();
			func_244();
			if (func_36(iVar1163, 4096) && func_245(-5f, 1, 0, 0))
			{
				set_entity_collision(&(uLocal_1250[0]), true, false);
				func_221(&uLocal_1228, Local_923.f_4, 0f, 0f, 0f, 7f, 7f, 7f, "volRestriction01");
				if (_does_volume_exist(iVar1226))
				{
					_0x18262cafebb5fbe1(iVar1226, 0, 0, 0, -1, -1, 0);
				}
				func_221(&uLocal_1244, -309.701f, 809.309f, 118.301f, 0f, 0f, -170.161f, 13.777f, 21.12f, 3.245f, "volInnerSaloon");
				if (does_entity_exist(iVar1285))
				{
					remove_anim_scene_entity(iVar1010, "DOOR", iVar1285);
					set_entity_as_no_longer_needed(&uLocal_1287);
				}
				iLocal_1206 = 0;
				iLocal_1026 = 8;
			}
			break;
		case 8:
			func_243();
			if (!is_any_speech_playing(&(uLocal_1250[1])))
			{
				if (iVar1009 == 0)
				{
					if (_0x23e33cb9f4a3f547(iVar1010, "PBL_DIALOGUE_04"))
					{
						if (!_0x1f0e401031e20146(iVar1010, "PBL_DIALOGUE_04"))
						{
							_set_anim_scene_playback_list_bool(iVar1010, "PBL_DIALOGUE_04", true);
							set_anim_scene_bool(iVar1010, "bool_base_idle", true, false);
							func_246(&uLocal_1296);
						}
					}
					else
					{
						_0xdf7b5144e25cd3fe(iVar1010, "PBL_DIALOGUE_04");
						return false;
					}
				}
				else if (iVar1009 == 1)
				{
				}
				if (func_36(iVar1162, 262144))
				{
					if (func_36(iVar1166, 16777216))
					{
						_uiprompt_remove_group(func_40(Local_729.f_162), 1899245582);
						func_41(&uLocal_1168, 16777216);
					}
					func_42(&(Local_729.f_162), 1, 1);
					func_247();
					if (func_43(&(uLocal_1250[0]), 0, 1))
					{
						func_248(&(uLocal_1250[0]), 1, 0);
					}
					if (_does_volume_exist(iVar1230))
					{
						func_52(iVar1230, 0);
					}
					iLocal_1026 = 10;
				}
			}
			break;
		case 10:
			func_249();
			func_250();
			func_247();
			if (!func_36(iVar1162, 131072))
			{
				if (iVar1197 == 1)
				{
					func_251();
				}
				else
				{
					func_252();
				}
			}
			if (func_253())
			{
				if (func_36(iVar1162, 512))
				{
				}
				else
				{
					return false;
				}
				if (!func_36(iVar1162, 16384))
				{
					set_anim_scene_bool(Local_1012.f_3, "ACTION_1", true, false);
					func_254(&(uLocal_1250[1]));
					if (!is_entity_in_volume(&(uLocal_1250[0]), iVar1234, false, 0) && func_67(&(uLocal_1250[0]), -272.4604f, 707.8916f, 112.5188f, 1) < 190f)
					{
						func_255();
					}
					if (is_entity_in_volume(&(uLocal_1250[0]), iVar1234, false, 0))
					{
						if (iVar1009 == 0)
						{
							func_71(uLocal_1250[0]);
						}
						else
						{
							apply_ped_damage_pack(&(uLocal_1250[0]), "PD_LimbLoss_L_Foot", 1f, 1f);
							apply_ped_damage_pack(&(uLocal_1250[0]), "PD_Human_carcass_Hvy", 1f, 1f);
						}
					}
					iVar5 = 0;
					while (iVar5 < iVar1173)
					{
						if (!is_entity_dead(&(iLocal_1254[iVar5])))
						{
							set_ped_config_flag(&(iLocal_1254[iVar5]), 113, false);
							set_ped_as_no_longer_needed(iLocal_1254[iVar5]);
						}
						iVar5++;
					}
					func_39(&uLocal_1164, 16384);
					func_85(Global_1935630, 4);
					func_246(&uLocal_1311);
					func_72(&uLocal_1341);
					func_72(&uLocal_1329);
					iLocal_1026 = 11;
				}
			}
			break;
		case 11:
			if (does_entity_exist(&(uLocal_1250[0])))
			{
				if ((!is_entity_in_volume(&(uLocal_1250[0]), iVar1234, false, 0) && func_67(&(uLocal_1250[0]), -272.4604f, 707.8916f, 112.5188f, 1) < 190f) && iVar1199 == 0)
				{
					if (func_36(iVar1163, 4096) && func_36(iVar1162, 16384))
					{
						func_255();
					}
				}
			}
			break;
		case 13:
			Local_729.f_46 = 1;
			func_256(iVar1246, 1);
			if (func_257(iVar1247, 1, 1))
			{
				func_256(iVar1247, 1);
			}
			if ((func_36(iVar1162, 2048) && iVar1204 == 1) && _does_anim_scene_exist(iVar1010))
			{
				if (get_anim_scene_bool(iVar1010, "bool_idle_door") == 1)
				{
					iLocal_1206 = 0;
					if (does_entity_exist(iVar1285))
					{
						remove_anim_scene_entity(iVar1010, "DOOR", iVar1285);
						set_entity_as_no_longer_needed(&uLocal_1287);
					}
					func_241(1087218607, 0, 0f, 0, 1, 0, 0, 0);
				}
			}
			func_58(iVar1245);
			if (!func_36(iVar1162, 262144))
			{
				if (_does_volume_exist(iVar1244))
				{
					_0x2c87c3e1c7b96ee2(iVar1244);
					func_58(iVar1244);
				}
			}
			if (iVar1168 != 0)
			{
				func_89(&iLocal_1170);
			}
			if (func_43(iVar1251, 0, 1))
			{
				_0x802092b07e3b1eea(iVar1251, Global_36, 3);
			}
			if (func_36(iVar1166, 16777216))
			{
				_uiprompt_remove_group(func_40(Local_729.f_162), 1899245582);
				func_41(&uLocal_1168, 16777216);
			}
			func_42(&(Local_729.f_162), 1, 1);
			func_42(&(Local_729.f_163), 1, 1);
			func_186(Local_1399[0], 0, 0);
			func_186(Local_1399[1], 0, 0);
			func_258(&Local_1399, 1, 1, 1, 0);
			func_259(Local_1356[0], &Local_1399);
			func_239();
			if (func_43(&(uLocal_1250[1]), 0, 1))
			{
				if (is_ped_ragdoll(&(uLocal_1250[1])) || _0x29fce825613fefca(&(uLocal_1250[1]), 500))
				{
					clear_ped_tasks(&(uLocal_1250[1]), 1, 0);
				}
				clear_ped_secondary_task(&(uLocal_1250[1]));
				_0x935cf6e42baf7f4d(&(uLocal_1250[1]));
				func_37(&(uLocal_1250[1]), 0);
				if (iVar1009 == 1)
				{
					func_62(&(uLocal_1250[1]), Global_35, "RE_DJ_VAL_V1_AGGRO", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					func_62(&(uLocal_1250[1]), Global_35, "GET_AWAY_FROM_ME", 0, -1082130432, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				if (((_does_anim_scene_exist(Local_1012.f_3) && _is_anim_scene_started(Local_1012.f_3, false)) || (_does_anim_scene_exist(iVar1010) && _0x8d81e7824b7753f7(iVar1010, "idle_cleanup", 1))) || is_entity_playing_anim(&(uLocal_1250[1]), &(Local_547[9]), Local_547[9]->f_1, 1))
				{
					clear_sequence_task(&iLocal_1290);
					open_sequence_task(&iLocal_1290);
					func_44(Global_35, 1, 0);
					if (iVar1009 == 0)
					{
						func_45(1);
					}
					else
					{
						func_45(1);
					}
					func_46(&(uLocal_1250[1]), &iLocal_1290, 0, 0, 1, 1);
					set_ped_keep_task(&(uLocal_1250[1]), true);
					_delete_anim_scene(Local_1012.f_3);
				}
				else
				{
					if (_does_anim_scene_exist(iVar1010) && _is_anim_scene_started(iVar1010, false))
					{
						_delete_anim_scene(iVar1010);
					}
					if (func_36(iVar1162, 4))
					{
						task_cower(&(uLocal_1250[1]), -1, iVar1251, 0);
					}
					else
					{
						func_45(0);
					}
				}
				if (does_entity_exist(Local_668[2]->f_8) && iVar1203 == 0)
				{
					iLocal_1205 = 1;
					_0x78b4567e18b54480(Local_668[2]->f_8);
				}
				else if (iVar1203 == 1)
				{
				}
				set_ped_keep_task(&(uLocal_1250[1]), true);
			}
			func_85(Global_1935630, 4);
			iLocal_1026 = 14;
			break;
		case 14:
			func_260();
			func_261();
			func_262();
			if (iVar1214 == 1)
			{
				if (func_43(&(uLocal_1250[1]), 0, 0))
				{
					if (_is_ped_hogtied(&(uLocal_1250[1])))
					{
						iLocal_1216 = 0;
					}
					if (!func_50(&(uLocal_1250[1]), iVar1227, 0, 1) && !func_50(&(uLocal_1250[1]), iVar1231, 0, 1))
					{
						if (func_43(iVar1251, 0, 1))
						{
							set_entity_coords(iVar1251, -276.3784f, 805.9501f, 118.3801f, true, false, true, true);
							set_blocking_of_non_temporary_events(iVar1251, false);
							if (func_103(iVar1467, 0))
							{
								if (!is_entity_dead(iVar1251))
								{
									set_blocking_of_non_temporary_events(iVar1251, false);
									func_263(iVar1251, 1088421888, 0, 0);
									func_264(&iLocal_1253, Local_1356[1], &Local_1434, 1, 1);
									_0xe737d5f14304a2ec(iVar1251, get_player_index(), 120000);
									_0xa3db37edf9a74635(player_id(), iVar1251, 7, 0, 1);
									set_ped_config_flag(iVar1251, 430, false);
									func_105(iVar1251, 0);
								}
							}
						}
					}
				}
			}
			if (Local_729.f_46 == 1)
			{
				if (_does_anim_scene_exist(iVar1010))
				{
					if (_is_anim_scene_started(iVar1010, false))
					{
						if (does_entity_exist(Local_668[1]->f_8))
						{
							if (_0x3ab6c7b0bb0df4b1(Local_668[1]->f_8, iVar1010))
							{
								remove_anim_scene_entity(iVar1010, "RAG", Local_668[1]->f_8);
								activate_physics(Local_668[1]->f_8);
							}
						}
					}
				}
				if (_does_anim_scene_exist(Local_1012.f_3))
				{
					if (_is_anim_scene_started(Local_1012.f_3, false))
					{
						if (does_entity_exist(Local_668[1]->f_8))
						{
							if (_0x3ab6c7b0bb0df4b1(Local_668[1]->f_8, Local_1012.f_3))
							{
								remove_anim_scene_entity(Local_1012.f_3, "RAG", Local_668[1]->f_8);
								activate_physics(Local_668[1]->f_8);
							}
						}
					}
				}
			}
			if (!func_36(iVar1166, 4194304))
			{
				if (!func_68(&uLocal_1326))
				{
					func_69(&uLocal_1326, 0);
				}
				else
				{
					func_246(&uLocal_1326);
				}
				func_39(&uLocal_1168, 4194304);
			}
			if (((does_entity_exist(&(uLocal_1250[0])) && func_224(&(uLocal_1250[0]), 0)) && !is_entity_in_volume(&(uLocal_1250[0]), iVar1227, false, 0)) && iVar1178 == 0)
			{
				if (is_entity_occluded(&(uLocal_1250[0])) && func_59(Global_35, &(uLocal_1250[0]), 1, 0) > 30f)
				{
					if (func_70(&uLocal_1326) > 15f)
					{
						func_71(uLocal_1250[0]);
						func_72(&uLocal_1326);
						delete_object(&(Local_668[0]->f_8));
					}
				}
				else
				{
					func_246(&uLocal_1326);
				}
			}
			if (func_43(&(uLocal_1250[1]), 0, 1) && func_36(iVar1162, 2048))
			{
				set_ped_reset_flag(&(uLocal_1250[1]), 12, true);
				set_ped_reset_flag(&(uLocal_1250[1]), 172, true);
				set_ped_reset_flag(&(uLocal_1250[1]), 201, true);
				if (get_ped_config_flag(&(uLocal_1250[1]), 375, true) == 0)
				{
					set_ped_config_flag(&(uLocal_1250[1]), 375, true);
				}
			}
			if (func_43(&(uLocal_1250[1]), 0, 0) && _is_ped_hogtied(&(uLocal_1250[1])))
			{
				_task_smart_flee_style_ped(&(uLocal_1250[1]), Global_35, 4, 0, -1082130432, -1, 0);
			}
			if ((func_43(&(uLocal_1250[1]), 0, 1) && func_36(iVar1163, 1)) && !func_36(iVar1166, 64))
			{
				if (iVar1214 == 1 && !func_36(iVar1166, 65536))
				{
					if (!is_any_speech_playing(&(uLocal_1250[1])))
					{
						func_39(&uLocal_1168, 65536);
						func_62(&(uLocal_1250[1]), Global_35, "RE_DJ_VAL_V1_ILO_QUIT_ATTACK_B", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				if ((((!func_50(&(uLocal_1250[1]), iVar1227, 0, 1) && !func_50(&(uLocal_1250[1]), iVar1231, 0, 1)) && func_59(&(uLocal_1250[1]), Global_35, 1, 1) > 5f) || func_50(&(uLocal_1250[1]), iVar1229, 0, 1)) || func_50(Global_35, iVar1229, 0, 1))
				{
					_task_smart_flee_style_ped(&(uLocal_1250[1]), Global_35, 4, 49153, -1082130432, -1, 0);
					func_254(&(uLocal_1250[1]));
					func_39(&uLocal_1168, 64);
				}
			}
			if (iVar1212 == 1)
			{
				func_37(iVar1251, 0);
				if (func_36(iVar1165, 64) && !func_36(iVar1165, 16777216))
				{
					remove_anim_scene_entity(Local_1012.f_2, "MONEY", Local_668[3]->f_8);
					activate_physics(Local_668[3]->f_8);
					_0x78b4567e18b54480(Local_668[3]->f_8);
					set_scenario_group_enabled("RANSACK_BH_REWARD", true);
					iLocal_1223 = 1;
					if (func_43(iVar1251, 0, 1))
					{
						task_react(iVar1251, Global_35, 0f, 0f, 0f, "DEFAULT_SHOCKED", 2f, 0, 4);
					}
					func_39(&uLocal_1167, 16777216);
				}
				if (func_43(iVar1251, 0, 1))
				{
					_0x802092b07e3b1eea(iVar1251, Global_36, 3);
					if ((!is_entity_playing_anim(iVar1251, &(Local_547[18]), Local_547[18]->f_1, 1) && !_0x3ab6c7b0bb0df4b1(iVar1251, iVar1018)) && !_0x3ab6c7b0bb0df4b1(iVar1251, iVar1020))
					{
						set_blocking_of_non_temporary_events(iVar1251, false);
						if (func_103(iVar1467, 0))
						{
							if (!is_entity_dead(iVar1251))
							{
								if ((((func_36(iVar1165, 1) && iVar1030 != 14) && iVar1030 != 18) && iVar1030 != 17) && iVar1030 != 15)
								{
									func_62(iVar1251, Global_35, func_61("RE_DJ_VAL_V1_ARREST_AGGRO", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								}
								else
								{
									func_62(iVar1251, Global_35, func_61("SHERIFF_AGGRO", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								}
								task_police(iVar1251, false);
								_report_crime(player_id(), 2140177766, 0, iVar1251, true);
								set_blocking_of_non_temporary_events(iVar1251, false);
								func_263(iVar1251, 1088421888, 0, 0);
								func_264(&iLocal_1253, Local_1356[1], &Local_1434, 1, 1);
								_0xe737d5f14304a2ec(iVar1251, get_player_index(), 120000);
								_0xa3db37edf9a74635(player_id(), iVar1251, 7, 0, 1);
								set_ped_config_flag(iVar1251, 430, false);
								func_105(iVar1251, 0);
								iLocal_1253 = 0;
							}
						}
					}
				}
			}
			if (iLocal_15 != 3)
			{
				if (is_entity_dead(&(uLocal_1250[1])) && !get_ped_config_flag(&(uLocal_1250[1]), 11, true))
				{
					iLocal_15 = 3;
				}
			}
			if (iLocal_15 != 2 && iLocal_15 != 3)
			{
				if (get_ped_config_flag(&(uLocal_1250[1]), 11, true))
				{
					iLocal_15 = 2;
				}
			}
			if ((does_entity_exist(&(uLocal_1250[0])) && !is_entity_in_volume(&(uLocal_1250[0]), iVar1234, false, 0)) && func_67(&(uLocal_1250[0]), -272.4604f, 707.8916f, 112.5188f, 1) < 190f)
			{
				if (func_36(iVar1163, 4096) && func_36(iVar1162, 16384))
				{
					func_255();
				}
			}
			if ((does_entity_exist(Local_668[2]->f_8) && _does_anim_scene_exist(Local_1012.f_3)) && _is_anim_scene_started(Local_1012.f_3, false))
			{
				if (_0x005e6f28dd7ed58d(Local_1012.f_3, "reward"))
				{
					remove_anim_scene_entity(Local_1012.f_3, "reward", Local_668[2]->f_8);
					func_239();
				}
			}
			if (func_36(iVar1163, 8))
			{
				if (_does_anim_scene_exist(Local_1012.f_3) && !func_36(iVar1163, 134217728))
				{
					if (_is_anim_scene_started(Local_1012.f_3, false))
					{
						if (is_entity_playing_anim(&(uLocal_1250[1]), &(Local_547[9]), Local_547[9]->f_1, 1))
						{
							if (does_entity_exist(Local_668[2]->f_8) && iVar1203 == 0)
							{
								iLocal_1205 = 1;
								_0x78b4567e18b54480(Local_668[2]->f_8);
								func_239();
							}
							else if (iVar1203 == 1)
							{
							}
							if ((iLocal_15 != 3 && iLocal_15 != 2) && iLocal_15 != 4)
							{
								iLocal_15 = 0;
							}
							iLocal_1029 = 6;
							func_265();
							func_186(Local_1399[0], 1, 0);
							func_186(Local_1399[1], 1, 0);
							func_39(&uLocal_1165, 134217728);
						}
					}
				}
			}
			if (iVar1009 == 0)
			{
				if (!func_36(iVar1166, 32768) && !is_any_speech_playing(Global_35))
				{
					iVar6 = 0;
					if (iVar1027 == 6)
					{
						if (_does_volume_exist(iVar1227))
						{
							if (!func_50(Global_35, iVar1227, 0, 1))
							{
								if (!func_68(&uLocal_1329))
								{
									func_69(&uLocal_1329, 0);
								}
								if (func_70(&uLocal_1329) >= 2f)
								{
									iVar6 = 1;
								}
							}
						}
					}
					if (iVar1027 == 7)
					{
						if (_does_volume_exist(iVar1229) && _does_volume_exist(iVar1230))
						{
							if (!func_50(Global_35, iVar1229, 0, 1) && !func_50(Global_35, iVar1230, 0, 1))
							{
								if (!func_68(&uLocal_1329))
								{
									func_69(&uLocal_1329, 0);
								}
								if (func_70(&uLocal_1329) >= 2f)
								{
									iVar6 = 1;
								}
							}
						}
					}
					if (iVar6 == 1)
					{
						iVar7 = func_266();
						switch (iVar7)
						{
							case -1:
								if (iVar1027 == 6)
								{
									func_62(Global_35, Global_35, func_61("PLYFINAL_HELP_LOW", 0), 0, -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 0, 0, 0);
								}
								else
								{
									func_62(Global_35, Global_35, func_61("PLYFINAL_STOP_LOW", 0), 0, -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 0, 0, 0);
								}
								break;
							case 0:
								if (iVar1027 == 6)
								{
									func_62(Global_35, Global_35, func_61("PLYFINAL_HELP_NOR", 0), 0, -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 0, 0, 0);
								}
								else
								{
									func_62(Global_35, Global_35, func_61("PLYFINAL_STOP_NOR", 0), 0, -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 0, 0, 0);
								}
								break;
							case 1:
								if (iVar1027 == 6)
								{
									func_62(Global_35, Global_35, func_61("PLYFINAL_HELP_HIGH", 0), 0, -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 0, 0, 0);
								}
								else
								{
									func_62(Global_35, Global_35, func_61("PLYFINAL_STOP_HIGH", 0), 0, -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 0, 0, 0);
								}
								break;
						}
						func_39(&uLocal_1168, 32768);
					}
				}
			}
			if ((((func_267(Local_923, 1) > 45f && func_268(&(uLocal_1250[1]), 1, 1) > 80f) && is_entity_occluded(&(uLocal_1250[1]))) && !func_63(Global_35, &(uLocal_1250[1]))) && !func_63(Global_35, &(uLocal_1250[0])))
			{
				if (func_43(iVar1251, 0, 1) && func_268(iVar1251, 1, 1) < 35f)
				{
					return false;
				}
				if (Local_729.f_44 == 1)
				{
				}
				return true;
			}
			break;
	}
	return false;
}

float func_67(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

bool func_68(var uParam0)
{
	return func_269(*uParam0, 1);
}

void func_69(var uParam0, bool bParam1)
{
	if (bParam1 || !func_68(uParam0))
	{
		func_246(uParam0);
	}
}

float func_70(var uParam0)
{
	if (!func_68(uParam0))
	{
		return 0f;
	}
	if (func_270(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_271() - uParam0->f_1);
}

void func_71(int* iParam0)
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

void func_72(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_73(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, int iParam10, int iParam11, int iParam12)
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
			else if (func_126(uParam0->f_3, 131072))
			{
				fVar0 = 70f;
				fVar0 = (fVar0 + 10f);
			}
			else if (func_126(uParam0->f_3, 1) && iParam12 == 0)
			{
				fVar0 = 215f;
				fVar0 = (fVar0 + 20f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 80f);
				}
			}
			else if (func_126(uParam0->f_3, 2) || iParam12 == 1)
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

var func_74(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	if (bParam2)
	{
		_0xdd1232b332cbb9e7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_275(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_276(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		_uilog_set_cached_objective(sVar0);
	}
	return func_275(sVar0, iParam1, 0, 0, 1, 1);
}

int func_75(int iParam0)
{
	if (!func_277(iParam0))
	{
		return 0;
	}
	return &(Global_17504.f_42[iParam0]);
}

void func_76(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_82(&(uParam0->f_1), 2048);
	}
	else
	{
		func_83(&(uParam0->f_1), 2048);
	}
}

void func_77(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_82(&(uParam0->f_1), 256);
	}
	else
	{
		func_83(&(uParam0->f_1), 256);
	}
}

void func_78(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_83(iParam0, 16);
	}
	else
	{
		func_82(iParam0, 67108864);
		func_82(iParam0, 16);
	}
}

void func_79(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_82(&(iParam0->f_1), 128);
	}
	else
	{
		func_83(&(iParam0->f_1), 128);
	}
}

void func_80(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_83(iParam0, 256);
	}
	else
	{
		func_82(iParam0, 256);
	}
}

void func_81(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_83(iParam0, 268435456);
	}
	else
	{
		func_82(iParam0, 268435456);
	}
	if (!bParam2)
	{
		func_83(iParam0, 1073741824);
	}
	else
	{
		func_82(iParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_83(iParam0, 536870912);
	}
	else
	{
		func_82(iParam0, 536870912);
	}
}

void func_82(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_83(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_84(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_85(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_86(int iParam0)
{
	if (!func_277(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_46 = 0;
}

void func_87(int iParam0)
{
	if (iParam0 == 1)
	{
		Global_1392235->f_2 = 0;
	}
	else
	{
		Global_1392235->f_2 = 1;
	}
}

void func_88(int iParam0)
{
	Global_1396116->f_139 = iParam0;
}

void func_89(int iParam0)
{
	if (*iParam0 != 0)
	{
		remove_shocking_event(*iParam0);
		*iParam0 = 0;
	}
}

void func_90()
{
	func_278();
}

void func_91()
{
	iVar0 = 0;
	while (iVar0 <= (iVar1257 - 1))
	{
		if (iVar0 < 10)
		{
			if (!is_entity_dead(&(uLocal_1259[iVar0])))
			{
				if (decor_exist_on(&(uLocal_1259[iVar0]), "REDJ_Witness_Time"))
				{
					decor_remove(&(uLocal_1259[iVar0]), "REDJ_Witness_Time");
					if (decor_exist_on(&(uLocal_1259[iVar0]), "bReacted_To_Shocking_Event"))
					{
						decor_remove(&(uLocal_1259[iVar0]), "bReacted_To_Shocking_Event");
					}
				}
			}
		}
		iVar0++;
	}
}

void func_92(var uParam0)
{
	if (uParam0->f_48 && !uParam0->f_45)
	{
		func_279(32);
		func_102(uParam0->f_3, 1, 0, 0, 2, 0, 0, 1);
	}
}

void func_93(var uParam0, var uParam1)
{
	if (_does_volume_exist(*uParam0))
	{
		_0x74c2b3dc0b294102(*uParam0);
		_0xa1cfb35069d23c23(*uParam0);
		_delete_volume(*uParam0);
	}
	if (_0x91a5f9cbebb9d936(*uParam1))
	{
		remove_scenario_blocking_area(*uParam1, false);
	}
}

void func_94(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_280(1497516462);
			func_281(2016141805);
			func_281(1010885152);
			func_281(-502324015);
			break;
		case 2016141805:
			func_281(1497516462);
			func_280(2016141805);
			func_281(1010885152);
			func_281(-502324015);
			break;
		case 1010885152:
			func_281(1497516462);
			func_281(2016141805);
			func_280(1010885152);
			func_281(-502324015);
			break;
		case -502324015:
			func_281(1497516462);
			func_281(2016141805);
			func_281(1010885152);
			func_280(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_281(-538889627);
			func_281(-538880323);
			func_281(-1056767524);
			func_280(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_282();
			func_280(iParam0);
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
			func_283();
			func_280(iParam0);
			break;
		case 2019386373:
			func_281(-664252410);
			func_281(2109952320);
			func_280(2019386373);
			break;
		case -664252410:
			func_281(2019386373);
			func_281(2109952320);
			func_280(-664252410);
			break;
		case 2109952320:
			func_281(2019386373);
			func_281(-664252410);
			func_280(2109952320);
			break;
		case -1674179981:
			func_281(-1835851517);
			func_281(-1838352012);
			func_280(-1674179981);
			break;
		case -1835851517:
			func_281(-1674179981);
			func_281(-1838352012);
			func_280(-1835851517);
			break;
		case -1838352012:
			func_281(-1674179981);
			func_281(-1835851517);
			func_280(-1838352012);
			break;
		case -1717960576:
			func_281(210001842);
			func_280(-1717960576);
			break;
		case 210001842:
			func_281(-1717960576);
			func_280(210001842);
			break;
		case -150493654:
			func_281(-1271608261);
			func_281(1846061697);
			func_281(-1145519186);
			func_280(-150493654);
			break;
		case -1271608261:
			func_281(-150493654);
			func_281(1846061697);
			func_281(-1145519186);
			func_280(-1271608261);
			break;
		case 1846061697:
			func_281(-150493654);
			func_281(-1271608261);
			func_281(-1145519186);
			func_280(1846061697);
			break;
		case -1145519186:
			func_281(-150493654);
			func_281(-1271608261);
			func_281(1846061697);
			func_280(-1145519186);
			break;
		case 1766284049:
			func_281(280705402);
			func_281(1926308480);
			func_280(1766284049);
			break;
		case 280705402:
			func_281(1766284049);
			func_281(1926308480);
			func_280(280705402);
			break;
		case 1926308480:
			func_281(1766284049);
			func_281(280705402);
			func_280(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_281(439465264);
				func_280(1609506757);
			}
			else
			{
				func_281(1609506757);
				func_281(439465264);
			}
			break;
		case 439465264:
			if (func_230(1609506757))
			{
				if (bParam1)
				{
					func_280(439465264);
				}
				else
				{
					func_281(439465264);
				}
			}
			break;
		case 1822001510:
			func_281(-1612662716);
			func_280(1822001510);
			break;
		case -1612662716:
			func_281(1822001510);
			func_280(-1612662716);
			break;
		case 1306158345:
			func_281(1952610440);
			func_281(-223469678);
			func_281(-404698347);
			func_281(1517904467);
			func_280(1306158345);
			break;
		case 1952610440:
			func_281(1306158345);
			func_281(-223469678);
			func_281(-404698347);
			func_281(1517904467);
			func_280(1952610440);
			break;
		case -223469678:
			func_281(1306158345);
			func_281(1952610440);
			func_281(-404698347);
			func_281(1517904467);
			func_280(-223469678);
			break;
		case -404698347:
			func_281(1306158345);
			func_281(1952610440);
			func_281(-223469678);
			func_281(1517904467);
			func_280(-404698347);
			break;
		case 1517904467:
			func_281(1306158345);
			func_281(1952610440);
			func_281(-223469678);
			func_281(-404698347);
			func_280(1517904467);
			break;
		case 1376646519:
			func_281(931649776);
			func_281(-434590080);
			func_281(1743048395);
			func_281(449774763);
			func_280(1376646519);
			break;
		case 931649776:
			func_281(1376646519);
			func_281(-434590080);
			func_281(1743048395);
			func_281(449774763);
			func_280(931649776);
			break;
		case -434590080:
			func_281(1376646519);
			func_281(931649776);
			func_281(1743048395);
			func_281(449774763);
			func_280(-434590080);
			break;
		case 1743048395:
			func_281(1376646519);
			func_281(931649776);
			func_281(-434590080);
			func_281(449774763);
			func_280(1743048395);
			break;
		case 449774763:
			func_281(1376646519);
			func_281(931649776);
			func_281(-434590080);
			func_281(1743048395);
			func_280(449774763);
			break;
		case -1414537028:
			func_281(38162571);
			func_281(1350391819);
			func_281(54073871);
			func_280(-1414537028);
			break;
		case 38162571:
			func_281(-1414537028);
			func_281(1350391819);
			func_281(54073871);
			func_280(38162571);
			break;
		case 1350391819:
			func_281(-1414537028);
			func_281(38162571);
			func_281(54073871);
			func_280(1350391819);
			break;
		case 54073871:
			func_281(-1414537028);
			func_281(38162571);
			func_281(1350391819);
			func_280(54073871);
			break;
		case 198200492:
			func_280(198200492);
			func_281(-1124061431);
			func_281(52706132);
			func_281(-259123672);
			break;
		case -1124061431:
			func_281(198200492);
			func_280(-1124061431);
			func_281(52706132);
			func_281(-259123672);
			break;
		case 52706132:
			func_281(198200492);
			func_281(-1124061431);
			func_280(52706132);
			func_281(-259123672);
			break;
		case -259123672:
			func_281(198200492);
			func_281(-1124061431);
			func_281(52706132);
			func_280(-259123672);
			break;
		case -919512195:
			func_280(-919512195);
			func_281(-1925798111);
			func_281(420709909);
			func_281(1703426636);
			break;
		case -1925798111:
			func_280(-1925798111);
			func_281(-919512195);
			func_281(420709909);
			func_281(1703426636);
			break;
		case 420709909:
			func_280(420709909);
			func_281(-919512195);
			func_281(-1925798111);
			func_281(1703426636);
			break;
		case 1703426636:
			func_280(1703426636);
			func_281(-919512195);
			func_281(-1925798111);
			func_281(420709909);
			break;
		case -1223121209:
			func_280(-1223121209);
			func_281(630808005);
			break;
		case 630808005:
			func_280(630808005);
			func_281(-1223121209);
			break;
		case 1453909576:
			func_280(1453909576);
			func_281(1643531967);
			break;
		case 1643531967:
			func_280(1643531967);
			func_281(1453909576);
			break;
		case 0:
			func_280(0);
			func_281(473295046);
			func_281(-1738165526);
			break;
		case 473295046:
			func_280(473295046);
			func_281(0);
			func_281(-1738165526);
			break;
		case -1738165526:
			func_280(-1738165526);
			func_281(0);
			func_281(473295046);
			break;
		case 932909855:
			func_280(932909855);
			func_281(2051822093);
			break;
		case 2051822093:
			func_280(2051822093);
			func_281(932909855);
			break;
		case 405586984:
			func_280(405586984);
			func_281(1509509592);
			func_281(-959357075);
			func_281(-1311865656);
			break;
		case 1509509592:
			func_280(1509509592);
			func_281(405586984);
			func_281(-959357075);
			func_281(-1311865656);
			break;
		case -959357075:
			func_280(-959357075);
			func_281(1509509592);
			func_281(405586984);
			func_281(-1311865656);
			break;
		case -1311865656:
			func_280(-1311865656);
			func_281(1509509592);
			func_281(-959357075);
			func_281(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_280(-524145696);
			}
			else
			{
				func_281(-524145696);
			}
			func_281(1626481264);
			func_281(282809459);
			break;
		case 282809459:
			func_280(282809459);
			func_281(1626481264);
			func_281(-524145696);
			break;
		case 1626481264:
			func_280(1626481264);
			func_281(-524145696);
			func_281(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_280(885203519);
			}
			else
			{
				func_281(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_280(-1080627546);
			}
			else
			{
				func_281(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_230(iParam0))
				{
					func_280(iParam0);
				}
			}
			else if (func_230(iParam0))
			{
				func_281(iParam0);
			}
			break;
	}
}

bool func_95(char* sParam0, int iParam1)
{
	iVar0 = get_interior_at_coords(-311.7622f, 817.252f, 121.979f);
	if (is_valid_interior(iVar0))
	{
		if (_is_interior_entity_set_valid(iVar0, sParam0))
		{
			if (!is_interior_entity_set_active(iVar0, sParam0))
			{
				if (iParam1 == 1)
				{
					activate_interior_entity_set(iVar0, sParam0, 0);
				}
			}
			else if (iParam1 == 0)
			{
				deactivate_interior_entity_set(iVar0, sParam0, true);
			}
			return true;
		}
		unpin_interior(iVar0);
	}
	return false;
}

void func_96(int iParam0, bool bParam1, bool bParam2)
{
	if (!is_entity_dead(iParam0))
	{
		if (is_entity_attached(iParam0))
		{
			detach_entity(iParam0, bParam1, bParam2);
		}
	}
}

int func_97(int iParam0, int iParam1)
{
	iVar0 = func_284(iParam0, iParam1);
	if (iVar0 != -1)
	{
		return Global_17504.f_1003[iVar0]->f_1;
	}
	return 0;
}

bool func_98()
{
	if (func_285() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

void func_99(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				func_286(378339669, 0);
			}
			else
			{
				func_286(472134900, 0);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_286(969208450, 0);
			}
			else
			{
				func_286(-1597139239, 0);
			}
			break;
		case 2:
			if (bParam1)
			{
				func_286(99984477, 0);
			}
			else
			{
				func_286(373866407, 0);
			}
			break;
		case 3:
			if (bParam1)
			{
				func_286(-1540231838, 0);
			}
			else
			{
				func_286(-913163759, 0);
			}
			break;
		case 4:
			if (bParam1)
			{
				func_286(-616602168, 0);
			}
			else
			{
				func_286(133447149, 0);
			}
			break;
		default:
			break;
	}
}

void func_100(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam3 != 0)
	{
		iVar0 = get_entity_model(iParam3);
		if (iVar0 != 0)
		{
			func_287(iParam0, iParam1, iVar0);
			func_289(iParam0, iParam1, func_288(iParam3));
		}
	}
	else if (iParam4 != 0)
	{
		func_287(iParam0, iParam1, iParam4);
		func_289(iParam0, iParam1, func_288(iParam3));
	}
	func_38(iParam0, iParam1, iParam2);
	func_291(iParam0, iParam1, func_290(1));
	func_293(iParam0, iParam1, func_292());
}

void func_101(int iParam0, int iParam1, int iParam2)
{
	iVar3 = -1;
	iVar1 = func_294(iParam1);
	if (iVar1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_9829)
	{
		if (&Global_40.f_9829[iVar0] == -1 && iVar3 == -1)
		{
			iVar3 = iVar0;
		}
		if (&Global_40.f_9829[iVar0] == iParam1)
		{
			if (Global_40.f_9829[iVar0]->f_1 == iParam0)
			{
				return;
			}
			if (iParam2 == iVar2)
			{
				func_295(iVar0, iParam0, iParam1, 0);
				return;
			}
			iVar2++;
		}
		if (iVar2 >= iVar1)
		{
			func_296(iParam0, iParam1);
			return;
		}
		iVar0++;
	}
	if (iVar3 < 0)
	{
		return;
	}
	func_295(iVar3, iParam0, iParam1, 0);
}

void func_102(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_297(iParam0) == 1 && bParam7)
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
	if ((bParam1 || bParam6) || func_285() != -1)
	{
		Global_17504.f_42[iParam0]->f_4 = 0;
	}
	Global_17504.f_42[iParam0]->f_4 = (Global_17504.f_42[iParam0]->f_4 + iVar0);
}

bool func_103(int iParam0, bool bParam1)
{
	if (func_285() != -1)
	{
		return false;
	}
	if (!func_298(iParam0))
	{
		return false;
	}
	if (!func_104(iParam0) && bParam1)
	{
		return false;
	}
	return func_299(iParam0, 1);
}

bool func_104(int iParam0)
{
	if (!func_298(iParam0))
	{
		return false;
	}
	return (*Global_1895087)[iParam0]->f_2 == get_id_of_this_thread();
}

void func_105(int iParam0, bool bParam1)
{
	iVar0 = func_300(iParam0, 0);
	if (iVar0 == -1)
	{
		iVar0 = func_301(iParam0, 0, (954 - 1), 1);
	}
	if (iVar0 == -1)
	{
		return;
	}
	func_302(iVar0, bParam1, 1, 0, 0);
}

bool func_106(int iParam0)
{
	return (Global_1392040 && iParam0) != 0;
}

void func_107(int iParam0)
{
	if (func_106(iParam0))
	{
		Global_1392040 = (&Global_1392040 - (Global_1392040 && iParam0));
	}
}

int func_108(var uParam0)
{
	return uParam0->f_51.f_4;
}

void func_109(var uParam0, var uParam1, int iParam2, int iParam3, var uParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (are_strings_equal(_0xf81c53561d15f330(), func_303(uParam0->f_3)))
	{
		_0x1096603b519c905f("");
	}
	if (uParam0->f_48)
	{
		stop_audio_scene("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			func_304(uParam0->f_3, 524288);
		}
	}
	if (func_43(player_ped_id(), 0, 1))
	{
		iVar1 = get_mount(Global_35);
		set_ped_config_flag(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			bVar3 = (bParam8 && decor_exist_on(uParam1[iVar0], "pedRoam_bInPedRoam"));
			if (func_43(uParam1[iVar0], 0, 0))
			{
				func_305(uParam1[iVar0], bVar3);
				if (func_306(uParam0, (*uParam1)[iVar0]))
				{
					func_307((*uParam1)[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (func_43(uParam1[iVar0], 0, 1))
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
							func_309(uParam1[iVar0], 1073741824, func_308(iVar0 < iVar2, &(uParam0->f_98[iVar0]), -1f), iVar1, 0);
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
		func_310(uParam0);
	}
	func_311(uParam0);
	if (!uParam0->f_186)
	{
		func_139(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = func_312(uParam0->f_3, uParam0->f_185);
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
		func_313(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

bool func_110(bool bParam0)
{
	iVar0 = get_cause_of_most_recent_force_cleanup();
	if (bParam0)
	{
		return true;
	}
	if (func_314(iVar0))
	{
		return false;
	}
	if (func_315(iVar0, 1) || func_315(iVar0, 2))
	{
		return true;
	}
	return false;
}

bool func_111(var uParam0)
{
	iVar0 = func_316(uParam0->f_3);
	iVar1 = func_317(1);
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

void func_112()
{
	Local_1034[0]->f_1 = -34912592;
	Local_1034[0] = 4;
	if (iVar1009 == 0)
	{
		Local_1034[0]->f_3 = 625655698;
	}
	else if (iVar1009 == 1)
	{
		Local_1034[0]->f_3 = 1318982204;
	}
	func_318(&(Local_1034[0]->f_22));
	Local_1034[1]->f_1 = -1394699518;
	Local_1034[1] = 5;
	StringCopy(&(Local_1034[1]->f_23), "REDJ_WOMAN1", 64);
	Local_1034[1]->f_3 = -419378151;
	func_318(&(Local_1034[1]->f_22));
	func_319(&(Local_1034[1]->f_22));
	iLocal_1488 = 1830978939;
	iLocal_1489 = 1007418994;
}

void func_113()
{
	func_320(&Local_1034);
}

void func_114()
{
	Local_547[1] = "amb_work@world_human_crouch_inspect@male_a@idle_a";
	Local_547[1]->f_1 = "idle_a";
	Local_547[2] = "amb_creature_mammal@world_pig_eat_carcass@BASE";
	Local_547[2]->f_1 = "BASE";
	Local_547[3] = "script_re@dead_john@initial_encounter";
	Local_547[3]->f_1 = "idle_a_female";
	Local_547[4] = "script_re@dead_john@initial_encounter";
	Local_547[4]->f_1 = "idle_b_female";
	Local_547[18] = "script_re@dead_john@sheriff";
	Local_547[18]->f_1 = "breakout_sheriff";
	Local_547[19] = "script_re@dead_john@sheriff";
	Local_547[19]->f_1 = "breakout_chair";
	Local_547[22] = "amb_work@world_human_crouch_inspect@male_a@stand_exit";
	Local_547[22]->f_1 = "exit_front";
	Local_547[23] = "mech_hogtie@human@jail_dropoff";
	Local_547[23]->f_1 = "JAIL_LOOP_LOCK01";
	Local_547[24] = "mech_hogtie@human@jail_dropoff";
	Local_547[24]->f_1 = "JAIL_LOOP_LOCK02";
	Local_547[26] = "mech_hogtie@human@jail_dropoff";
	Local_547[26]->f_1 = "DROPOFF_LOCK01";
	Local_547[27] = "mech_hogtie@human@jail_dropoff";
	Local_547[27]->f_1 = "DROPOFF_LOCK02";
	Local_547[25] = "mech_hogtie@human@jail_dropoff";
	Local_547[25]->f_1 = "JAIL_LOOP_DOOR01";
	Local_547[28] = "script_re@dead_john@initial_encounter";
	Local_547[28]->f_1 = "CALLOUT_BEHIND_FEMALE";
	Local_547[29] = "script_re@dead_john@initial_encounter";
	Local_547[29]->f_1 = "CALLOUT_F_LRG_FEMALE";
	Local_547[30] = "script_re@dead_john@initial_encounter";
	Local_547[30]->f_1 = "CALLOUT_F_MED_FEMALE";
	Local_547[31] = "script_re@dead_john@initial_encounter";
	Local_547[31]->f_1 = "CALLOUT_F_SML_FEMALE";
	Local_547[32] = "script_re@dead_john@initial_encounter";
	Local_547[32]->f_1 = "CALLOUT_L_LRG_FEMALE";
	Local_547[33] = "script_re@dead_john@initial_encounter";
	Local_547[33]->f_1 = "CALLOUT_L_MED_FEMALE";
	Local_547[34] = "script_re@dead_john@initial_encounter";
	Local_547[34]->f_1 = "CALLOUT_R_LRG_FEMALE";
	Local_547[35] = "script_re@dead_john@initial_encounter";
	Local_547[35]->f_1 = "CALLOUT_R_MED_FEMALE";
	Local_547[36] = "script_re@dead_john@initial_encounter";
	Local_547[36]->f_1 = "CALLOUT_R_SML_FEMALE";
	Local_547[37] = "script_re@dead_john@initial_encounter";
	Local_547[37]->f_1 = "BASE_FEMALE";
	if (iVar1009 == 0)
	{
		Local_547[5] = "script_re@dead_john@initial_encounter";
		Local_547[5]->f_1 = "callout_female";
		Local_547[7] = "script_re@dead_john@initial_encounter";
		Local_547[7]->f_1 = "DIA_01_FEMALE";
		Local_547[8] = "script_re@dead_john@initial_encounter";
		Local_547[8]->f_1 = "DIA_02_FEMALE";
		Local_547[9] = "script_re@dead_john@in_room";
		Local_547[9]->f_1 = "idle_cleanup_female";
		Local_547[11] = "script_re@dead_john@in_room";
		Local_547[11]->f_1 = "breakout_female";
		Local_547[12] = "script_re@dead_john@in_room";
		Local_547[12]->f_1 = "breakout_left_panic_female";
		Local_547[13] = "script_re@dead_john@in_room";
		Local_547[13]->f_1 = "breakout_reward_female";
		Local_547[14] = "script_re@dead_john@in_room";
		Local_547[14]->f_1 = "breakout_reward_panic_female";
	}
	else if (iVar1009 == 1)
	{
		Local_547[9] = "script_re@dead_john@second_in_room";
		Local_547[9]->f_1 = "idle_cleanup_female";
		Local_547[0] = "script_re@dead_john@second_in_room";
		Local_547[0]->f_1 = "DEAD_POSE_B_DEAD";
		Local_547[5] = "script_re@dead_john@second_encounter";
		Local_547[5]->f_1 = "callout_female";
		Local_547[7] = "script_re@dead_john@second_encounter";
		Local_547[7]->f_1 = "DIALOGUE_01_FEMALE";
		Local_547[8] = "script_re@dead_john@second_encounter";
		Local_547[8]->f_1 = "DIALOGUE_02_FEMALE";
		Local_547[11] = "script_re@dead_john@second_in_room";
		Local_547[11]->f_1 = "breakout_reward_panic_female";
		Local_547[13] = "script_re@dead_john@second_in_room";
		Local_547[13]->f_1 = "BREAKOUT_PANIC_FEMALE";
	}
	Local_547[38] = "script_re@dead_john@initial_encounter";
	Local_547[38]->f_1 = "WILL_U_HELP_01_FEMALE";
	Local_547[39] = "script_re@dead_john@initial_encounter";
	Local_547[39]->f_1 = "WILL_U_HELP_02_FEMALE";
	Local_547[40] = "script_re@dead_john@initial_encounter";
	Local_547[40]->f_1 = "WILL_U_HELP_03_FEMALE";
	Local_547[41] = "script_re@dead_john@initial_encounter";
	Local_547[41]->f_1 = "COME_BACK_FEMALE";
	Local_547[42] = "script_re@dead_john@initial_encounter";
	Local_547[42]->f_1 = "ME_WORRIED_FEMALE";
	Local_547[43] = "script_re@dead_john@initial_encounter";
	Local_547[43]->f_1 = "SHOW_U_FEMALE";
	Local_547[44] = "script_re@dead_john@initial_encounter";
	Local_547[44]->f_1 = "HES_UPSTAIRS_FEMALE";
	Local_547[45] = "script_re@dead_john@initial_encounter";
	Local_547[45]->f_1 = "FOLLOW_UPSTAIRS_FEMALE";
	Local_547[46] = "script_re@dead_john@initial_encounter";
	Local_547[46]->f_1 = "I_SWEAR_FEMALE";
	Local_547[47] = "script_re@dead_john@initial_encounter";
	Local_547[47]->f_1 = "NO_BUT_FEMALE";
	Local_547[48] = "script_re@dead_john@initial_encounter";
	Local_547[48]->f_1 = "BEHIND_L_FEMALE";
	Local_547[49] = "script_re@dead_john@initial_encounter";
	Local_547[49]->f_1 = "BEHIND_R_FEMALE";
	Local_547[50] = "script_re@dead_john@in_room";
	Local_547[50]->f_1 = "HEY_DOOR_FEMALE";
	Local_547[51] = "script_re@dead_john@in_room";
	Local_547[51]->f_1 = "HEY_STAND_FEMALE";
	Local_547[52] = "script_re@dead_john@in_room";
	Local_547[52]->f_1 = "HEY_BED_R_FEMALE";
	Local_547[53] = "script_re@dead_john@in_room";
	Local_547[53]->f_1 = "HEY_BED_F_FEMALE";
	Local_547[54] = "script_re@dead_john@in_room";
	Local_547[54]->f_1 = "HEY_BED_L_FEMALE";
	Local_547[55] = "script_re@dead_john@in_room";
	Local_547[55]->f_1 = "HEY_STAND_B_FEMALE";
	Local_547[56] = "script_re@dead_john@in_room";
	Local_547[56]->f_1 = "HEY_FLOOR_L_FEMALE";
	Local_547[57] = "script_re@dead_john@in_room";
	Local_547[57]->f_1 = "HEY_FLOOR_R_FEMALE";
	Local_547[58] = "script_re@dead_john@in_room";
	Local_547[58]->f_1 = "BASE_IDLE_RAG";
	Local_547[59] = "script_re@dead_john@in_room";
	Local_547[59]->f_1 = "BASE_02_IDLE_RAG";
	if (iVar1009 == 0)
	{
		func_321(&(Local_547[9]), &uLocal_66);
	}
	else if (iVar1009 == 1)
	{
		func_321(&(Local_547[0]), &uLocal_66);
		func_321(&(Local_547[9]), &uLocal_66);
	}
	func_321(&(Local_547[23]), &uLocal_66);
	func_321(&(Local_547[22]), &uLocal_66);
	func_321(&(Local_547[1]), &uLocal_66);
	func_321(&(Local_547[5]), &uLocal_66);
	func_321(&(Local_547[18]), &uLocal_66);
	func_321(&(Local_547[3]), &uLocal_66);
	func_321(&(Local_547[2]), &uLocal_66);
}

void func_115()
{
	Local_668[0]->f_7 = 389673974;
	Local_668[4]->f_7 = -1386119702;
	Local_668[1]->f_7 = -115174257;
	Local_668[2]->f_7 = -770982987;
	Local_668[3]->f_7 = -770982987;
}

void func_116(var uParam0)
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

bool func_117(var uParam0, char* sParam1)
{
	return true;
}

bool func_118(var uParam0)
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

bool func_119(var uParam0)
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

bool func_120(int iParam0)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (!func_322((*iParam0)[iVar0]))
		{
			bVar1 = true;
		}
		iVar0++;
	}
	return !bVar1;
}

bool func_121(int iParam0)
{
	if (iParam0 != -1)
	{
		return true;
	}
	return false;
}

bool func_122(int iParam0)
{
	if (iParam0 != 0)
	{
		return true;
	}
	return false;
}

bool func_123(int iParam0, int iParam1)
{
	if (!func_121(iParam0))
	{
		return false;
	}
	func_323(iParam1, &iVar0, &iVar1);
	return is_bit_set(Global_1935183->f_73[iParam0][iVar0], iVar1);
}

int func_124(int iParam0, var uParam1, bool bParam2, var uParam3, struct<7> Param4, var uParam11, bool bParam12, bool bParam13, int iParam14)
{
	if (Param4.f_6 > -1)
	{
		*uParam1 = { func_324(iParam0, Param4.f_6) };
		uParam1->f_4 = Param4.f_6;
		uParam1->f_5 = uParam1->f_4;
		func_325(iParam0, uParam1, bParam2, bParam12, 0);
		*uParam3 = 0;
		return 1;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (func_142(iParam0, 128))
			{
				if (!func_326(iParam0, &(uParam1->f_10)))
				{
					*uParam11 = 1;
					return 0;
				}
			}
			else
			{
				func_327(iParam0, &uVar1, &uVar2, &iVar0, 0);
				bVar4 = false;
				*uParam1 = { func_328(&bVar4, iParam0, uVar2, uVar1) };
				if (bVar4)
				{
					*uParam11 = 1;
					return 0;
				}
				if (func_329(*uParam1))
				{
					return func_330(uParam1, uParam3, uParam11, bParam2, 12, 1000);
				}
				uParam1->f_4 = func_331(iParam0, *uParam1);
				uParam1->f_5 = uParam1->f_4;
				if (func_2(Param4.f_2, 8))
				{
					func_325(iParam0, uParam1, 0, bParam12, 0);
					*uParam3 = 0;
					return 1;
				}
				func_332(uParam1);
			}
			*uParam3 = 0;
			uParam1->f_9 = 2;
			break;
		case 1:
			if (func_333(uParam1, uParam3, uParam11, bParam2, bParam13))
			{
				if (!bParam13 && func_334(vdist(Global_36, *uParam1), iParam0))
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
			if (func_142(iParam0, 128))
			{
				if (!func_335(uParam1, &bVar3))
				{
					if (bVar3)
					{
						return func_330(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					return 0;
				}
			}
			else
			{
				func_327(iParam0, &uVar1, &uVar2, &iVar0, 0);
				if (vdist2(*uParam1, Global_36) < to_float(iVar0))
				{
					if (!func_332(uParam1))
					{
						return func_330(uParam1, uParam3, uParam11, bParam2, 12, 1000);
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
			if (func_336(iParam0, Param4.f_1, uParam1, Param4, iParam14))
			{
				func_325(iParam0, uParam1, bParam2, bParam12, 0);
				*uParam3 = 0;
				return 1;
			}
			else
			{
				*uParam3 = 0;
				uParam1->f_9 = 5;
				return func_330(uParam1, uParam3, uParam11, bParam2, 12, 1000);
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
		func_74("BEAT_SCAN", 2000, 0, 1, 0, 0, -1, -1, 0);
	}
	if (uParam1->f_8 >= 12)
	{
		if (bParam2)
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_74("BEAT_FAIL", 4000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam11 = 1;
	}
	return 0;
}

bool func_125(var uParam0, int iParam1)
{
	if (func_126(iParam1, 256))
	{
		if (_does_volume_exist(uParam0->f_172) || func_337(iParam1, func_108(uParam0), &(uParam0->f_172)))
		{
			if (func_43(Global_35, 0, 1))
			{
				return is_entity_in_volume(Global_35, uParam0->f_172, true, 0);
			}
		}
	}
	return true;
}

bool func_126(int iParam0, int iParam1)
{
	if (!func_277(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0] && iParam1) != 0;
}

void func_127(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (uParam0->f_176)
	{
		return;
	}
	if (iParam1 != -1)
	{
		func_338(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, IntToFloat(iParam1), IntToFloat(iParam1), 5f, "Custom Sized Ambient Avoidance");
	}
	else if (func_126(uParam0->f_3, 1) && !func_126(uParam0->f_3, 32))
	{
		func_338(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 25f, 25f, 6f, "Ambient Avoidance Wilderness & No Traffic");
	}
	else if (func_126(uParam0->f_3, 2) && !func_126(uParam0->f_3, 32))
	{
		func_338(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 4f, 4f, 5f, "Ambient Avoidance Town & No Traffic");
	}
	else
	{
		return;
	}
	_0xb56d41a694e42e86(uParam0->f_171, 2228255, 262144, 0, -1, -1, uParam0->f_175);
	_0x18262cafebb5fbe1(uParam0->f_171, 0, 0, 0, -1, -1, 0);
	if (bParam3)
	{
		func_339(uParam0->f_171, 1);
	}
	if (func_126(uParam0->f_3, 1))
	{
		func_338(&(uParam0->f_174), uParam0->f_51, 0f, 0f, 0f, _0x3e2a25b2416dd67e(uParam0->f_171) * Vector(3.5f, 3.5f, 3.5f), "Predator Stay Out");
		func_340(uParam0->f_174, 0, 262144, 0, 0);
	}
	if (iParam2 == 0)
	{
	}
	else if (does_entity_exist(iParam2))
	{
		_0x7c00cfc48a782dc0(uParam0->f_171, iParam2, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
}

float func_128(vector3 vParam0)
{
	vVar0 = { Global_36 - vParam0 };
	return get_heading_from_vector_2d(vVar0.x, vVar0.y);
}

Vector3 func_129(var uParam0)
{
	return uParam0->f_51;
}

var func_130(var uParam0)
{
	return uParam0->f_51.f_3;
}

bool func_131(vector3 vParam0, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, float fParam9)
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
		if (func_341() || !func_342((*iParam4)[iVar0], (*iParam5)[iVar0], vParam0, uParam3, iParam6, fParam9))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

int func_132(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_343();
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
		if (func_2(iParam2, 128))
		{
			_0x7c00cfc48a782dc0(iParam1, iParam0, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
		}
		if (func_36(Global_1955500[iVar0], 0))
		{
			func_256(iVar0, 1024);
			func_256(iVar0, 16);
			func_256(iVar0, 256);
		}
		func_256(iVar0, iParam2);
	}
	return iVar0;
}

void func_133(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || func_43(iParam0, 0, 0))
	{
		decor_set_bool(iParam0, "HAS_VOICE", true);
		set_ambient_voice_name(iParam0, sParam1);
	}
}

int func_134(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_344(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
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
							if (func_344(iVar4) && iVar4 != iVar0)
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
	if (func_285() == -1 && !func_136(iVar0))
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
				if (func_136(-183018591))
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
		if (iParam0 != Global_35 && func_344(iVar0))
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
		func_345(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_346(iParam0, &iVar0, &fVar25);
		iVar0 = _give_weapon_to_ped_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_347(iVar0))
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

void func_135(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (does_entity_exist(iParam0) && is_entity_a_ped(iParam0))
	{
		iVar0 = func_348(iParam0);
		func_349(iParam0, iParam1, iParam2, iVar0);
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

bool func_136(int iParam0)
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

void func_137()
{
	if (func_43(&(uLocal_1250[0]), 0, 1))
	{
		if (iVar1009 == 0)
		{
			set_entity_coords(&(uLocal_1250[0]), -314.2502f, 818.4298f, 121.4771f, true, false, true, true);
			set_entity_heading(&(uLocal_1250[0]), Local_923.f_3);
			func_248(&(uLocal_1250[0]), 0, 0);
		}
		else if (iVar1009 == 1)
		{
			_add_blood_pool(-312.2389f, 817.4164f, 120.9786f, true);
			_add_blood_pool(-312.2729f, 817.5825f, 120.9786f, true);
			_0x18ff3110cf47115d(&(uLocal_1250[0]), 7, 1);
			set_entity_coords(&(uLocal_1250[0]), -314.2502f, 818.4298f, 121.4771f, true, false, true, true);
			set_entity_heading(&(uLocal_1250[0]), Local_923.f_3);
			func_248(&(uLocal_1250[0]), 0, 0);
		}
		_0x6569f31a01b4c097(&(uLocal_1250[0]), 4, 0);
	}
	func_350();
	set_ped_config_flag(&(uLocal_1250[0]), 243, true);
	set_ped_config_flag(&(uLocal_1250[0]), 113, true);
	_0x18ff3110cf47115d(&(uLocal_1250[0]), 7, 0);
	func_351(&(uLocal_1250[0]), 0);
	if (iVar1009 == 0)
	{
		set_ped_can_ragdoll(&(uLocal_1250[0]), false);
	}
	set_blocking_of_non_temporary_events(&(uLocal_1250[0]), true);
	if (func_43(&(uLocal_1250[0]), 0, 1))
	{
		_0xae6004120c18df97(&(uLocal_1250[0]), 0, 0);
		set_entity_proofs(&(uLocal_1250[0]), 1, false);
		set_entity_proofs(&(uLocal_1250[0]), 2, false);
		set_entity_proofs(&(uLocal_1250[0]), 16, false);
		if (iVar1009 == 0)
		{
			_0x18ff3110cf47115d(&(uLocal_1250[0]), 7, 0);
			_0x18ff3110cf47115d(&(uLocal_1250[0]), 2, 0);
			disable_ped_pain_audio(&(uLocal_1250[0]), true);
			set_ped_can_be_targetted(&(uLocal_1250[0]), false);
		}
		else if (iVar1009 == 1)
		{
			disable_ped_pain_audio(&(uLocal_1250[0]), true);
			set_ped_can_be_targetted(&(uLocal_1250[0]), false);
		}
		set_ped_keep_task(&(uLocal_1250[0]), true);
		set_ragdoll_blocking_flags(&(uLocal_1250[0]), 8437);
	}
	if (!does_entity_exist(Local_668[0]->f_8))
	{
		Local_668[0]->f_8 = create_object(Local_668[0]->f_7, 1f, 1f, 1f, true, true, false, false, true);
		_0x7e3f546acfe6c8d9(Local_668[0]->f_8);
		if (iVar1009 == 0)
		{
			attach_entity_to_entity(Local_668[0]->f_8, &(uLocal_1250[0]), get_ped_bone_index(&(uLocal_1250[0]), 14413), 0f, 0.18f, 0f, 180f, 0f, 0f, false, false, false, false, 2, true, false, false);
			apply_ped_damage_pack(&(uLocal_1250[0]), "PD_Dead_John_bloody_chest_vic", 0f, 1f);
			Local_668[4]->f_8 = create_object(Local_668[4]->f_7, -311.159f, 816.8079f, 121.5557f, true, true, false, false, true);
			set_entity_rotation(Local_668[4]->f_8, 0f, 0f, -170.08f, 2, true);
			freeze_entity_position(Local_668[4]->f_8, true);
		}
		else if (iVar1009 == 1)
		{
			attach_entity_to_entity_physically(Local_668[0]->f_8, &(uLocal_1250[0]), -1, get_ped_bone_index(&(uLocal_1250[0]), 14414), 0f, 0f, 0f, 0f, 0.14f, 0f, 0f, 0f, 0f, -1f, 1, 1, 0, 1, 2, 1, 1065353216, 1065353216);
			apply_ped_damage_pack(&(uLocal_1250[0]), "PD_Dead_John_bloody_back_vic", 0f, 1f);
		}
	}
	if (!_does_anim_scene_exist(Local_1012.f_1))
	{
		Local_1012.f_1 = _create_anim_scene(Local_1012.f_5, 0, "PBL_PICKUP", false, true);
		if (iVar1009 == 1)
		{
			set_anim_scene_origin(Local_1012.f_1, -315.553f, 818.956f, 120.446f, 0f, 0f, -80f, 2);
		}
		if (!is_string_null_or_empty(Local_1012.f_5))
		{
			if (!_is_anim_scene_loaded(Local_1012.f_1, true, false))
			{
				load_anim_scene(Local_1012.f_1);
			}
		}
	}
	if (iVar1009 == 0)
	{
		func_95("val_saloon_johnclothes01", 1);
	}
	else
	{
		func_95("val_saloon_johnclothes02", 1);
	}
}

int func_138(int iParam0, var uParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return 0;
	}
	if (func_352(iParam0, &(uParam1->f_121)))
	{
		uParam1->f_120++;
		return 1;
	}
	return 0;
}

void func_139(var uParam0, int iParam1)
{
	vVar0 = { func_129(uParam0) };
	iVar3 = func_312(uParam0->f_3, iParam1);
	uParam0->f_185 = iParam1;
	_0xca41e86545413b5b(7, 1221649453, -585414509, iVar3, vVar0);
	if (_0x01f4d242765c6b24(iVar3))
	{
		uParam0->f_186 = 1;
	}
}

void func_140(var uParam0, var uParam1)
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

void func_141(var uParam0)
{
	func_77(uParam0, 1);
	func_353(uParam0, 20);
}

bool func_142(int iParam0, int iParam1)
{
	if (!func_277(iParam0))
	{
		return false;
	}
	return ((*Global_1310750)[iParam0]->f_1 && iParam1) != 0;
}

void func_143(var uParam0, var uParam1, int iParam2, int* iParam3)
{
	if (!func_277(iParam2))
	{
		return;
	}
	if (*uParam1)
	{
		return;
	}
	if (func_354())
	{
		func_355(1);
	}
	func_356(iParam2, uParam0->f_43);
	func_357(iParam2, 0, 0, 0, 0);
	if (func_358(iParam2) != -1)
	{
		_set_weather_type_frozen(true);
	}
	start_audio_scene("RE_active_location_scene");
	_0x1096603b519c905f(func_303(uParam0->f_3));
	if (does_blip_exist(*iParam3))
	{
		remove_blip(iParam3);
	}
	func_359(uParam0, 1, 0);
	*uParam1 = 1;
}

void func_144(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0]->f_7 = 0f;
		(*uParam0)[iVar0]->f_8 = 0f;
		iVar0++;
	}
}

void func_145(var uParam0, int iParam1, float fParam2)
{
	bVar0 = false;
	if (uParam0->f_178 && func_360())
	{
		bVar0 = true;
	}
	if (!uParam0->f_48 && !func_142(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_143(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_144(&(uParam0->f_121));
			return;
		}
		if (_does_volume_exist(uParam0->f_173))
		{
			if (!func_207(Global_35, uParam0->f_173, 1, 0))
			{
				return;
			}
		}
		fVar1 = func_361(uParam0, bVar0);
		func_362(uParam0->f_121[iParam1], fVar1, 1082130432, 0, 90f, 0, &(uParam0->f_98[iParam1]));
		if (func_363(&(uParam0->f_121), uParam0->f_120, fParam2))
		{
			func_143(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_144(&(uParam0->f_121));
		}
	}
}

bool func_146(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	fVar0 = 30f;
	fVar1 = 150f;
	if (func_126(uParam2->f_3, 1))
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
			if (func_364())
			{
				fVar0 = 15f;
			}
		}
		if (func_365(uParam2, fVar0))
		{
			*uParam1 = 1;
		}
	}
	if (!uParam2->f_48)
	{
		if (!bParam3 && func_32(player_id(), 1, 0, 1))
		{
			return false;
		}
		if (!func_365(uParam2, fVar1))
		{
			if (!func_223((*Global_1310750)[uParam2->f_3]->f_38))
			{
				return false;
			}
		}
		if (!func_366(uParam2->f_3, 2) && func_367(2))
		{
			return false;
		}
		if (func_126(iParam0, 4194304) || func_126(iParam0, 33554432))
		{
			if (func_368(1))
			{
				return false;
			}
		}
	}
	if (func_369(Global_35))
	{
		return false;
	}
	if (func_370(0, 1, 1) && !func_371(iParam0))
	{
		return false;
	}
	if (!*uParam1 && func_126(iParam0, 128))
	{
		if (is_player_riding_train(player_id()))
		{
			return false;
		}
		if (func_224(Global_35, 0))
		{
			return false;
		}
		if (Global_16)
		{
			return false;
		}
		if (func_32(player_id(), 1, 0, 1))
		{
			return false;
		}
		if (func_372())
		{
			return false;
		}
		iVar2 = func_373(func_3());
		if (func_374(iVar2))
		{
			if (func_375(Global_36, iVar2))
			{
				return false;
			}
		}
		if (func_376(Global_36) && !uParam2->f_161)
		{
			return false;
		}
		if (!uParam2->f_48)
		{
			if (func_377(&(uParam2->f_91), 0, 1084227584, 1, 1))
			{
				return false;
			}
		}
	}
	return true;
}

void func_147(var uParam0, int iParam1)
{
	if (func_378(uParam0->f_51))
	{
		func_379(uParam0->f_51, 0);
		fVar0 = func_380(uParam0->f_3);
		iVar2 = _create_volume_cylinder_with_custom_name(uParam0->f_51, 0f, 0f, 0f, fVar0, fVar0, fVar0, func_381());
		bVar1 = func_308(!func_126(uParam0->f_3, 1), 20f, -1f);
		uParam0->f_51.f_11 = func_383(iVar2, func_382(uParam0->f_3), 1, iParam1, 8, 0, bVar1);
	}
}

int func_148(bool bParam0, bool bParam1, bool bParam2)
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

void func_149(int iParam0, bool bParam1, int iParam2)
{
	func_384(iParam2);
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
		iParam0->f_13 = func_385(0);
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
							func_83(iParam0, 33554432);
						}
					}
					else if (!*iParam0 & 8192 != 0)
					{
						if (func_368(1))
						{
							func_83(iParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_35) && (!func_368(1) || *iParam0 & 8192 != 0))
				{
					func_82(iParam0, 33554432);
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
			if (func_386(iParam0))
			{
				iParam0->f_15 = func_168();
			}
		}
		else if (iParam0->f_15 > 0)
		{
			if ((func_168() - iParam0->f_15) > 500)
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
	func_387(iParam0);
}

bool func_150(int iParam0, int iParam1)
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
			if (!func_388(iParam0, iParam1, iVar2))
			{
				return false;
			}
			if (func_389(iParam0, iVar2) <= func_390(iParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_151(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		iParam1->f_10 = iParam0;
	}
	if (func_391(iParam2, 1, 1, 1, 0))
	{
		func_83(iParam1, 2048);
	}
	iParam1->f_16 = iParam2;
	func_392(iParam1, 1);
	func_393();
}

bool func_152(int iParam0, int iParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_394(iParam0, !*iParam1 & 268435456 != 0, !*iParam1 & 536870912 != 0, !*iParam1 & 1073741824 != 0, 0, 0))
		{
			if (iParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (iParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_395(iParam1);
			if (func_396(iParam1, iParam0, fVar0, fVar1))
			{
				if (iParam1->f_2 == 0)
				{
					iParam1->f_2 = get_game_timer();
				}
				iVar2 = (get_game_timer() - iParam1->f_2);
				iVar3 = func_397(iParam1);
				if (iParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_392(iParam1, 1);
						return true;
					}
					else if (iParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_392(iParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_153(int iParam0, int iParam1, int iParam2)
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
	if (func_398(iParam1, !*iParam2 & 268435456 != 0, !*iParam2 & 536870912 != 0, !*iParam2 & 1073741824 != 0, 0))
	{
		if (iParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (iParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_395(iParam2);
		if (func_396(iParam2, iParam0, fVar0, fVar1))
		{
			if (iParam2->f_2 == 0)
			{
				iParam2->f_2 = get_game_timer();
			}
			if (iParam2->f_2 != 0)
			{
				if (get_game_timer() - iParam2->f_2) > func_397(iParam2)
				{
					func_392(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_154(int iParam0, int iParam1)
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
	if (func_388(iParam0, iParam1, iVar1))
	{
		if (iParam1->f_3 == 0)
		{
			iParam1->f_3 = get_game_timer();
		}
		else if (get_game_timer() - iParam1->f_3) > func_397(iParam1)
		{
			fVar3 = func_395(iParam1);
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

bool func_155(int iParam0, float fParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_168();
	iVar1 = (iVar0 - iParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_156(var uParam0, int iParam1, int iParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_399(iParam2);
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
			if (func_164(iParam2, iParam1))
			{
				func_392(iParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_157(var uParam0, int iParam1, int iParam2)
{
	if (iParam2->f_12 < IntToFloat(func_400(iParam2)))
	{
		if ((is_weapon_valid(Global_1935630->f_46) && !_0x5809dbca0a37c82b(Global_1935630->f_46)) || get_current_ped_vehicle_weapon(Global_35, &uVar0))
		{
			if (func_164(iParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_392(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_158(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_401(iParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, iParam2->f_22))
				{
					func_392(iParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, iParam2->f_27))
				{
					func_392(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, iParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, iParam2->f_26, &vVar4, 0, 0);
					if (func_402(iParam1, vVar0, vVar4))
					{
						func_392(iParam2, 1);
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
					func_392(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, iParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, iParam2->f_26, &vVar7, 0, 0);
					if (func_402(iParam1, vVar0, vVar7))
					{
						func_392(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_159(int iParam0, int iParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *iParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_388(iParam0, iParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_403(&(Global_1935630->f_34[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_404(&(Global_1935630->f_34[iVar0])))
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
			if (func_405(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_406(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_407(iParam1, iParam0, fVar1, iVar0))
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

bool func_160(int iParam0, int iParam1)
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

bool func_161(int iParam0, int iParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_168();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_162(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_408(iVar0, &iVar2))
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
	if (func_409(iVar0, iParam0))
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

int func_163(int iParam0, int iParam1)
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

bool func_164(int iParam0, int iParam1)
{
	if (func_410(iParam0))
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

bool func_165(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_59(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_166()
{
}

bool func_167(int iParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_35);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_411(iVar0, iParam1, vVar1))
		{
			iParam0->f_9 = func_168();
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
						if (func_67(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								iParam0->f_9 = func_168();
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

int func_168()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_169()
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
	if ((func_168() - Global_1935630->f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_170(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0->f_14))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_390(iParam0);
	if (iParam0->f_12 > func_412(iParam0) && iParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_413(iParam1);
	iVar1 = func_414(iParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((iParam0->f_12 <= fVar0 || ((_0x06087579e7aa85a9(iParam1, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam1, Global_35, 1, 0) == 1)) || ((_0x06087579e7aa85a9(iParam1, iParam0->f_14, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, iParam0->f_14, 17)) && _0x7f9b9791d4cb71f6(iParam1, iParam0->f_14, 1, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_171(int iParam0, int iParam1, int iParam2)
{
	if (iParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *iParam2 & 256 != false;
	bVar1 = *iParam2 & 524288 != false;
	bVar2 = *iParam2 & 128 != false;
	return func_415(iParam0, iParam1, bVar0, bVar2, iParam2->f_12, bVar1);
}

bool func_172(int iParam0, int iParam1)
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
		if (func_416(iParam0, iParam1, 1))
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
					if (!func_417(iParam1, iParam0))
					{
						if (func_67(iVar4, Global_36, 1) < 7f)
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

bool func_173(int iParam0, int iParam1)
{
	if (!func_418(0))
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

bool func_174(int iParam0, int iParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_168();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_175(int iParam0, int iParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

int func_176(int iParam0, int iParam1)
{
	if (!is_ped_human(iParam0))
	{
		return 0;
	}
	if (iParam1->f_4 == 0)
	{
		iParam1->f_4 = func_168();
	}
	else if (func_168() - iParam1->f_4) > func_419(iParam1)
	{
		return func_420(iParam0, iParam1, 0, -1082130432);
	}
	return 0;
}

bool func_177(int iParam0, int iParam1)
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

int func_178(int iParam0, int iParam1)
{
	iVar1 = func_421(iParam0, iParam1);
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

void func_179(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_180(int iParam0)
{
	return iParam0;
}

void func_181(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

bool func_182(int iParam0)
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

void func_183(int iParam0)
{
	if (!func_422(iParam0))
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

bool func_184(int iParam0, int iParam1)
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
	if (func_36(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_36(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_36(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_36(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_36(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_36(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_36(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_36(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_185(struct<2> Param0, float fParam2, struct<2> Param3, float fParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

void func_186(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_423(iParam0, 13))
	{
		func_424(iParam0, 0);
	}
	else
	{
		func_425(iParam0, 0);
	}
	if (func_182(iParam0->f_6))
	{
		if (bParam2)
		{
			func_42(&(iParam0->f_6), 0, 1);
		}
	}
}

void func_187(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

int func_188(int iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	if (!is_entity_dead(*iParam0))
	{
		func_187(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !_does_volume_exist(iParam9)) || is_entity_in_volume(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (is_ambient_speech_playing(*iParam0) || is_scripted_speech_playing(*iParam0));
		fVar8 = func_308(fParam12 >= 0f, fParam12, vdist(Global_36, get_entity_coords(*iParam0, true, false)));
		if (!iParam8 & 2097152 != 0)
		{
			set_ped_reset_flag(*iParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			set_ped_reset_flag(*iParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (is_ambient_speech_playing(Global_35) || is_scripted_speech_playing(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			func_246(&(iParam1->f_13));
		}
		if (func_426(*iParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_427(iParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_188(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_428(iParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!get_ped_config_flag(*iParam0, 317, true))
						{
							func_429(*iParam0, 1, 1);
						}
					}
					else if (func_430(iParam1, 22))
					{
						func_429(*iParam0, 0, 1);
					}
				}
				if (func_431(iParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_432(iParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_433(iParam8);
					if (func_434(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (is_bit_set(uParam3[iParam1->f_1], 20))
								{
									func_435(uParam3);
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
					func_436(iParam1, uParam3, fVar8);
					if (func_437(*iParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (is_bit_set(*iParam1, 1))
					{
						func_258(uParam3, 0, 0, 1, 1);
						clear_bit(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_438(iParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_431(iParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_439(*iParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_434(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_432(iParam0, func_431(iParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_433(iParam8);
				}
				else if (is_bit_set(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_258(uParam3, 0, 0, 1, 1);
					}
					func_440(iParam1, 1);
				}
				func_436(iParam1, uParam3, fVar8);
				if (func_438(iParam0, iParam1, fParam4, bVar6))
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
			func_259(iParam1, uParam3);
			set_bit(iParam1, 3);
		}
	}
	return -1;
}

void func_189(int* iParam0, var uParam1, int iParam2)
{
	iVar0 = func_441(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (*uParam1)[iVar0]->f_13;
		iVar2 = (*uParam1)[iVar0]->f_15;
		if (!is_string_null_or_empty(sVar1))
		{
			func_62(Global_35, *iParam2, sVar1, "", -1082130432, iVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_190(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_285() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_191(int iParam0, bool bParam1)
{
	func_442(iParam0, &iVar0, &iVar1);
	if (!func_443(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_444(iVar0, iVar1);
}

void func_192(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

void func_193()
{
	_0xdd1232b332cbb9e7(4, 1, 0);
}

var func_194(char* sParam0, char* sParam1, char* sParam2, int iParam3)
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
	return func_445(cVar0);
}

int func_195(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
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
		if (func_364())
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
				if (func_268(iParam0, 1, 1) > fParam4)
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
			fVar1 = func_59(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_246(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!is_entity_dead(iParam1))
				{
					task_look_at_entity(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_446(iParam0, iParam1, fVar1, bParam13))
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
				iVar2 = func_448(func_447(iParam0, sParam2, iParam11, iParam1, network_is_game_in_progress(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

void func_196()
{
	if (Local_729.f_44 == 1 || (iVar1009 == 1 && iVar1171 >= 2))
	{
		if (func_449())
		{
			iLocal_1026 = 14;
		}
	}
}

void func_197()
{
	iVar3 = 0;
	iVar4 = 0;
	vVar0 = { get_entity_coords(&(uLocal_1250[0]), false, false) };
	if (get_distance_between_coords(vVar0, -309.213f, 808.2842f, 118.9875f, true) < 13f && func_224(&(uLocal_1250[0]), 0))
	{
		iVar3 = 1;
	}
	if (func_32(player_id(), 1, 0, 1))
	{
		if (iVar3 == 1)
		{
			if (!func_36(iVar1166, 2097152))
			{
				func_39(&uLocal_1168, 2097152);
			}
			if (does_entity_exist(&(uLocal_1250[0])))
			{
				_0x18ff3110cf47115d(&(uLocal_1250[0]), 2, 1);
				_0x18ff3110cf47115d(&(uLocal_1250[0]), 4, 1);
			}
		}
		iVar4 = 1;
	}
	if (iVar4 == 1)
	{
		if (does_entity_exist(&(uLocal_1250[0])))
		{
			_0x18ff3110cf47115d(&(uLocal_1250[0]), 4, 1);
		}
		func_49(&iLocal_1274);
		func_49(&iLocal_1275);
		if (iVar1024 == 10)
		{
			if (!func_36(iVar1166, 262144))
			{
				if (!func_207(Global_35, iVar1227, 1, 0))
				{
					func_39(&uLocal_1168, 262144);
					func_239();
					func_234("ROB_OBJ06", 7500, 0, 0, -1, -1, 0);
					func_254(&(uLocal_1250[1]));
					func_49(iLocal_1271[1]);
				}
			}
			if (!func_36(iVar1166, 131072))
			{
				if (!func_207(Global_35, iVar1227, 1, 0))
				{
					iLocal_1289 = func_450(1087218607, 0, 0);
					if (does_entity_exist(iVar1287))
					{
						func_39(&uLocal_1168, 131072);
						func_241(1087218607, 1, 0f, 0, 0, 0, 0, 0);
					}
				}
			}
			else if (func_207(Global_35, iVar1227, 1, 0))
			{
				iLocal_1289 = func_450(1087218607, 0, 0);
				if (does_entity_exist(iVar1287))
				{
					if (!func_451(1087218607))
					{
						func_241(1087218607, 1, 0f, 0, 0, 0, 0, 0);
					}
				}
			}
			if (func_36(iVar1166, 131072))
			{
				if (func_207(Global_35, iVar1227, 1, 0) && !func_185(Global_36, -314.6801f, 817.1199f, 120.9763f, -314.8636f, 818.1626f, 120.9763f))
				{
					iLocal_1289 = func_450(1087218607, 0, 0);
					if (does_entity_exist(iVar1287))
					{
						func_41(&uLocal_1168, 131072);
						func_241(1087218607, 0, 1f, 0, 0, 0, 0, 0);
						func_239();
					}
				}
			}
		}
		return;
	}
	else if (func_36(iVar1166, 131072))
	{
		iLocal_1289 = func_450(1087218607, 0, 0);
		if (does_entity_exist(iVar1287))
		{
			func_41(&uLocal_1168, 131072);
			func_241(1087218607, 0, 1f, 0, 0, 0, 0, 0);
			func_239();
		}
	}
	if (!func_36(iVar1166, 2097152))
	{
		if ((((_does_volume_exist(iVar1231) && is_entity_in_volume(Global_35, iVar1231, true, 0)) || func_267(Local_923, 1) < 5f) || (_does_volume_exist(iVar1229) && is_entity_in_volume(Global_35, iVar1229, true, 0))) && !_is_ped_hogtied(&(uLocal_1250[1])))
		{
			if (!func_36(iVar1162, 8192))
			{
				if (does_entity_exist(&(uLocal_1250[0])))
				{
					_0x18ff3110cf47115d(&(uLocal_1250[0]), 4, 0);
				}
				if (does_entity_exist(&(uLocal_1250[1])))
				{
					_0x18ff3110cf47115d(&(uLocal_1250[1]), 4, 0);
				}
				func_39(&uLocal_1164, 8192);
			}
		}
		else if (func_36(iVar1162, 8192))
		{
			if (does_entity_exist(&(uLocal_1250[0])))
			{
				_0x18ff3110cf47115d(&(uLocal_1250[0]), 4, 1);
			}
			if (does_entity_exist(&(uLocal_1250[1])))
			{
				_0x18ff3110cf47115d(&(uLocal_1250[1]), 4, 1);
			}
			if (_is_ped_hogtied(&(uLocal_1250[1])))
			{
				if (does_entity_exist(&(uLocal_1250[0])))
				{
					_0x18ff3110cf47115d(&(uLocal_1250[0]), 2, 0);
				}
			}
			func_41(&uLocal_1164, 8192);
		}
	}
}

void func_198()
{
	if (func_452(&uLocal_1308, 1.5f))
	{
		func_60(0);
		if (iVar1175 == 0)
		{
			func_62(Global_35, &(uLocal_1250[0]), func_61("SPOTTED_A", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		else if (iVar1175 == 1)
		{
			func_62(Global_35, &(uLocal_1250[0]), func_61("SPOTTED_B", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		else if (!func_36(iVar1163, 2))
		{
			func_62(Global_35, &(uLocal_1250[0]), func_61("WITNESS", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			func_39(&uLocal_1165, 2);
		}
		func_453(&uLocal_1308);
		iLocal_1177 = iVar1175 + 1;
	}
	if (fVar1188 > 0f)
	{
		if (func_452(&uLocal_1338, fVar1188))
		{
			func_454(1891783641, &(uLocal_1250[1]), 1);
			fLocal_1190 = 0f;
		}
	}
	if (func_70(&uLocal_1335) > 3f)
	{
		if (!is_any_speech_playing(iVar1251) && !is_any_speech_playing(Global_35))
		{
			if (!func_36(iVar1163, 268435456))
			{
				func_62(Global_35, iVar1251, "RE_DJ_VAL_V1_ILO_CORPSE_PLY_RESP", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_39(&uLocal_1165, 268435456);
				func_246(&uLocal_1335);
				func_455();
			}
			else if (!func_36(iVar1163, 536870912))
			{
				func_62(iVar1251, Global_35, "RE_DJ_VAL_V1_ILO_CORPSE_END_RESP", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_39(&uLocal_1165, 536870912);
				func_455();
				func_72(&uLocal_1335);
				if (func_257(iVar1247, 1, 1))
				{
					func_256(iVar1247, 1);
				}
			}
		}
	}
	if (has_anim_event_fired(&(uLocal_1250[1]), -403288114) && !func_36(iVar1163, 64))
	{
		func_60(0);
		if (!func_36(iVar1163, 8388608))
		{
			if (iVar1009 == 1 && func_97(Local_729.f_3, 4) == 1)
			{
				func_62(&(uLocal_1250[1]), Global_35, func_61("CALLOVER_A_ALT", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				fLocal_1190 = 5.5f;
			}
			else
			{
				func_62(&(uLocal_1250[1]), Global_35, func_61("CALLOVER_A", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				if (iVar1009 == 0)
				{
					fLocal_1190 = 3f;
				}
			}
			func_89(&iLocal_1187);
			iLocal_1187 = add_shocking_event_for_entity(161068336, &(uLocal_1250[1]), -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
			func_69(&uLocal_1338, 0);
			func_454(1891783641, &(uLocal_1250[1]), 1);
			func_39(&uLocal_1165, 8388608);
		}
		else
		{
			if (!func_36(iVar1163, 16777216))
			{
				func_62(&(uLocal_1250[1]), Global_35, func_61("CALLOVER_IDLE_A", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_39(&uLocal_1165, 16777216);
				func_454(1891783641, &(uLocal_1250[1]), 1);
			}
			else if (!func_36(iVar1163, 33554432))
			{
				func_62(&(uLocal_1250[1]), Global_35, func_61("CALLOVER_IDLE_B", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_39(&uLocal_1165, 33554432);
				func_454(1891783641, &(uLocal_1250[1]), 1);
			}
			func_89(&iLocal_1187);
			iLocal_1187 = add_shocking_event_for_entity(161068336, &(uLocal_1250[1]), -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
		}
	}
	if (has_anim_event_fired(&(uLocal_1250[1]), 492124811) && !func_36(iVar1163, 64))
	{
		func_60(0);
		func_62(&(uLocal_1250[1]), Global_35, func_61("CALLOVER_B", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		func_89(&iLocal_1187);
		iLocal_1187 = add_shocking_event_for_entity(161068336, &(uLocal_1250[1]), -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
	}
	if (has_anim_event_fired(&(uLocal_1250[1]), -1501823717) && !func_36(iVar1163, 64))
	{
		func_60(0);
		func_62(&(uLocal_1250[1]), Global_35, func_61("CALLOVER_IDLE_A", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		func_39(&uLocal_1165, 16777216);
		func_89(&iLocal_1187);
		iLocal_1187 = add_shocking_event_for_entity(161068336, &(uLocal_1250[1]), -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
	}
	if (has_anim_event_fired(&(uLocal_1250[1]), -1808377712) && !func_36(iVar1163, 64))
	{
		func_60(0);
		func_62(&(uLocal_1250[1]), Global_35, func_61("CALLOVER_IDLE_B", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		func_39(&uLocal_1165, 33554432);
		func_89(&iLocal_1187);
		iLocal_1187 = add_shocking_event_for_entity(161068336, &(uLocal_1250[1]), -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
	}
	if (has_anim_event_fired(&(uLocal_1250[1]), -694693356) && iVar1205 == 0)
	{
		task_turn_ped_to_face_entity(&(uLocal_1250[1]), Global_35, 600000, -1082130432, -1082130432, 0.52f);
	}
	if (has_anim_event_fired(&(uLocal_1250[1]), -151828063))
	{
		func_60(0);
		func_62(&(uLocal_1250[1]), Global_35, func_61("ENTER_ROOM", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		func_39(&uLocal_1166, 1073741824);
	}
	if (has_anim_event_fired(&(uLocal_1250[1]), 1698093601))
	{
		func_60(0);
		func_62(&(uLocal_1250[1]), Global_35, func_61("IN_ROOM_A", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		func_39(&uLocal_1165, 4);
		func_39(&uLocal_1168, 8192);
	}
	if (!func_36(iVar1166, 16384))
	{
		func_39(&uLocal_1168, 16384);
	}
	if (has_anim_event_fired(&(uLocal_1250[1]), 1459109284) && !is_any_speech_playing(Global_35))
	{
		func_62(&(uLocal_1250[1]), Global_35, func_61("IN_ROOM_B", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	if (has_anim_event_fired(&(uLocal_1250[1]), -107379996) && !is_any_speech_playing(Global_35))
	{
		func_62(&(uLocal_1250[1]), Global_35, func_61("IN_ROOM_C", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	if (has_anim_event_fired(&(uLocal_1250[1]), 436808138) && !is_any_speech_playing(Global_35))
	{
		func_62(&(uLocal_1250[1]), Global_35, func_61("GET_RID", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	if (has_anim_event_fired(&(uLocal_1250[1]), -1494428311))
	{
		iLocal_1029 = 5;
		func_456();
		func_186(Local_1399[0], 1, 0);
		func_186(Local_1399[1], 1, 0);
	}
	if (has_anim_event_fired(&(uLocal_1250[1]), -1394391434))
	{
		func_60(0);
		if (func_97(Local_729.f_3, 3) == 1 || iVar1009 == 0)
		{
			func_62(&(uLocal_1250[1]), Global_35, func_61("DISPOSE_B", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		else
		{
			func_62(&(uLocal_1250[1]), Global_35, func_61("DISPOSE_B_ALT", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		apply_ped_damage_pack(Global_35, "PD_AnimalBlood_Lrg_Bloody", 0f, 1f);
	}
	if (has_anim_event_fired(&(uLocal_1250[1]), -559329633))
	{
		func_60(0);
		func_62(&(uLocal_1250[1]), Global_35, func_61("RETURN_A", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	if (has_anim_event_fired(&(uLocal_1250[1]), 960955357))
	{
		func_60(0);
		func_62(Global_35, &(uLocal_1250[1]), func_61("RETURN_B", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	if (has_anim_event_fired(&(uLocal_1250[1]), -172043320))
	{
		func_60(0);
		func_62(&(uLocal_1250[1]), Global_35, func_61("THANKS", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		func_39(&uLocal_1165, 8);
		iLocal_1026 = 14;
		if (iVar1009 == 1)
		{
			func_457(1, 0, 0, "RE_HONOR_KEPT_AGREEMENT", &(uLocal_1250[1]), 0, 1065353216, 0);
		}
		else if (iVar1009 == 0 && (func_98() || func_458()))
		{
			func_457(2, 0, 0, "RE_HONOR_KEPT_AGREEMENT", &(uLocal_1250[1]), 0, 1065353216, 0);
		}
	}
	if (has_anim_event_fired(&(uLocal_1250[1]), 1482551433))
	{
		freeze_entity_position(Local_668[2]->f_8, true);
		remove_anim_scene_entity(Local_1012.f_3, "reward", Local_668[2]->f_8);
		freeze_entity_position(Local_668[2]->f_8, true);
		_0x78b4567e18b54480(Local_668[2]->f_8);
		func_239();
		func_39(&uLocal_1168, 524288);
		func_246(&uLocal_1311);
	}
	if (iVar1009 == 1)
	{
		if (func_36(iVar1166, 524288) && !func_36(iVar1166, 1048576))
		{
			if (func_70(&uLocal_1311) > 0.05f)
			{
				vVar0 = { get_entity_coords(Local_668[2]->f_8, true, false) };
				vVar0.x = (vVar0.x - 0.01f);
				set_entity_coords(Local_668[2]->f_8, vVar0, true, false, true, true);
				func_39(&uLocal_1168, 1048576);
			}
		}
	}
}

void func_199()
{
	if (!func_43(&(uLocal_1250[1]), 0, 1) || Local_729.f_46)
	{
		return;
	}
	if (func_36(iVar1162, 8) && !func_36(iVar1162, 33554432))
	{
		if (func_185(Global_36, -314.6801f, 817.1199f, 120.9763f, -314.8636f, 818.1626f, 120.9763f))
		{
			func_39(&uLocal_1164, 33554432);
			func_234("DEADHK_OBJ_04a", 7500, 0, 0, -1, -1, 0);
			func_48();
		}
		else if (!func_36(iVar1163, 4194304) && _0x8d81e7824b7753f7(iVar1010, "idle_cleanup", 1))
		{
			if (!func_68(&uLocal_1317))
			{
				func_69(&uLocal_1317, 0);
				iLocal_1029 = 4;
				func_456();
				func_186(Local_1399[0], 1, 0);
				func_186(Local_1399[1], 1, 0);
			}
			if (func_70(&uLocal_1317) > 10f && has_entity_clear_los_to_entity(&(uLocal_1250[1]), Global_35, 17))
			{
				func_60(0);
				func_62(&(uLocal_1250[1]), Global_35, func_61("GOT_CORPSE_IDLE_A", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_39(&uLocal_1165, 4194304);
			}
		}
	}
	if ((((((((func_36(iVar1162, 8) && !func_36(iVar1162, 16777216)) && func_36(iVar1162, 33554432)) && !func_185(Global_36, -314.6801f, 817.1199f, 120.9763f, -314.8636f, 818.1626f, 120.9763f)) && has_entity_clear_los_to_entity(&(uLocal_1250[1]), Global_35, 17)) && func_224(Global_35, 1)) && func_63(Global_35, &(uLocal_1250[0]))) && !is_any_speech_playing(&(uLocal_1250[1]))) && iVar1026 == 34)
	{
		if (iVar1009 == 0)
		{
			if (_0x8d81e7824b7753f7(iVar1010, "idle_cleanup", 1))
			{
				sVar0 = "PBL_DIALOGUE_05";
			}
			else
			{
				return;
			}
		}
		else if (iVar1009 == 1)
		{
			if (_0x8d81e7824b7753f7(iVar1010, "idle_cleanup", 1))
			{
				sVar0 = "PBL_DIALOGUE_03";
			}
			else
			{
				return;
			}
		}
		if (_0x23e33cb9f4a3f547(iVar1010, sVar0))
		{
			_set_anim_scene_playback_list_bool(iVar1010, sVar0, true);
			set_anim_scene_bool(iVar1010, "bool_idle_cleanup", true, false);
			if (func_68(&uLocal_1302))
			{
				func_246(&uLocal_1302);
			}
			else
			{
				func_69(&uLocal_1302, 0);
			}
			func_39(&uLocal_1164, 16777216);
		}
		else
		{
			_0xdf7b5144e25cd3fe(iVar1010, sVar0);
		}
	}
	if (func_36(iVar1162, 16777216))
	{
		if (!func_270(&uLocal_1302))
		{
			if (func_70(&uLocal_1302) > 1f)
			{
				set_anim_scene_bool(iVar1010, "bool_idle_cleanup", false, false);
				func_459(&uLocal_1302);
			}
		}
	}
}

void func_200()
{
	if (does_entity_exist(iVar1251))
	{
		func_460(1988748538, 1);
	}
	if (iVar1174 < 50)
	{
		iLocal_1176 = iVar1174 + 1;
		return;
	}
	if (func_36(iVar1166, 131072))
	{
		return;
	}
	if (does_entity_exist(iVar1251))
	{
		if (func_461(1988748538))
		{
			func_241(1988748538, 0, 0f, 0, 0, 0, 0, 0);
		}
	}
	iLocal_1176 = 0;
	iLocal_1288 = func_450(968874193, 0, 0);
	if (does_entity_exist(iVar1286))
	{
		func_241(968874193, 0, 0, 0, 1, 0, 0, 0);
	}
	if (iVar1204 == 0)
	{
		iLocal_1289 = func_450(1087218607, 0, 0);
		if (func_461(Local_923.f_11))
		{
			if (func_36(iVar1165, 1))
			{
				func_241(Local_923.f_11, 0, 1f, 1, 1, 0, 0, 0);
			}
			else
			{
				func_241(Local_923.f_11, 0, 0, 0, 1, 0, 0, 0);
			}
			iLocal_1176 = 0;
		}
		else if (does_entity_exist(iVar1287))
		{
			if (func_36(iVar1165, 1))
			{
				func_241(1087218607, 0, 1f, 1, 1, 0, 0, 0);
			}
			else
			{
				func_241(1087218607, 0, 0, 0, 1, 0, 0, 0);
			}
			iLocal_1176 = 0;
		}
	}
}

void func_201()
{
	if (does_entity_exist(iVar1256) && !func_36(iVar1163, 2))
	{
		func_462(iVar1256, &Local_1470, 0f, 0f, 0f, 0, 30f, 20f, 1000, 1000, 1000, 1f, 0, 1);
	}
}

void func_202()
{
	if ((iVar1205 == 1 && Local_729.f_46 == 0) && !func_36(iVar1163, 256))
	{
		if ((!func_36(iVar1164, 67108864) && !is_any_speech_playing(Global_35)) && !is_any_speech_playing(&(uLocal_1250[1])))
		{
			if (iVar1009 == 0)
			{
				if (iVar1207 == 1)
				{
					task_play_upper_anim_facing_entity(&(uLocal_1250[1]), &(Local_547[44]), Local_547[44]->f_1, Global_35, -1, 4f, -4f, 67109392, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
				}
				else
				{
					task_play_upper_anim_facing_entity(&(uLocal_1250[1]), &(Local_547[46]), Local_547[46]->f_1, Global_35, -1, 4f, -4f, 67109392, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
				}
			}
			else if (iVar1207 == 1)
			{
				task_play_upper_anim_facing_entity(&(uLocal_1250[1]), &(Local_547[45]), Local_547[45]->f_1, Global_35, -1, 4f, -4f, 67109392, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
			}
			else
			{
				task_play_upper_anim_facing_entity(&(uLocal_1250[1]), &(Local_547[47]), Local_547[47]->f_1, Global_35, -1, 4f, -4f, 67109392, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
			}
			func_39(&uLocal_1166, 67108864);
		}
	}
}

void func_203()
{
	if (iVar1024 == 0)
	{
		return;
	}
	if (!func_43(&(uLocal_1250[1]), 0, 0) || (iVar1170 < 3 && Local_729.f_46 == 1))
	{
		return;
	}
	if (((_is_ped_hogtied(&(uLocal_1250[1])) || _is_ped_lassoed(&(uLocal_1250[1]))) && iVar1027 != 7) && Local_729.f_46 == 1)
	{
		return;
	}
	if (func_36(iVar1166, 8192))
	{
		if ((((iVar1027 == 2 || iVar1027 == 3) || iVar1027 == 4) || iVar1027 == 5) || iVar1027 == 6)
		{
			if (((_0x3ab6c7b0bb0df4b1(&(uLocal_1250[1]), iVar1010) && ((_0x8d81e7824b7753f7(iVar1010, "BASE_IDLE", 1) || _0x8d81e7824b7753f7(iVar1010, "base_idle_02", 1)) || _0x8d81e7824b7753f7(iVar1010, "idle_cleanup", 1))) || (_0x3ab6c7b0bb0df4b1(&(uLocal_1250[1]), Local_1012.f_3) && (_0x8d81e7824b7753f7(Local_1012.f_3, "IDLE_1", 1) || _0x8d81e7824b7753f7(Local_1012.f_3, "Idle_2", 1)))) && !is_any_speech_playing(&(uLocal_1250[1])))
			{
				if (iVar1213 == 0)
				{
					func_54(&Local_1399, 1, 0);
					iLocal_1215 = 1;
				}
			}
			else if (iVar1213 == 1)
			{
				func_54(&Local_1399, 0, 0);
				iLocal_1215 = 0;
			}
		}
	}
	if (iVar1205 == 0 && iVar1027 == 0)
	{
		if (func_59(Global_35, &(uLocal_1250[1]), 1, 1) > 5f)
		{
			if (iVar1213 == 1)
			{
				func_54(&Local_1399, 0, 0);
				iLocal_1215 = 0;
			}
		}
		else if (func_36(iVar1166, 1024))
		{
			if (iVar1213 == 0)
			{
				func_54(&Local_1399, 1, 0);
				iLocal_1215 = 1;
			}
		}
	}
	iVar0 = 0;
	iVar1 = -1;
	if (iVar1027 == 7)
	{
		iVar1 = func_57(uLocal_1250[1], Local_1356[0], 25f, &Local_1399, &(Local_729.f_192), 0f, 1, 0, 0, func_56() | 2048, 0, 0, 2, 1, -1082130432, 0);
	}
	else
	{
		iVar1 = func_57(uLocal_1250[1], Local_1356[0], 25f, &Local_1399, &(Local_729.f_192), 0f, 1, 0, 0, func_56(), 0, 0, 2, 1, -1082130432, 0);
	}
	if (iVar1 == 0)
	{
		iVar0 = 1;
		switch (iVar1027)
		{
			case 0:
				func_62(Global_35, &(uLocal_1250[1]), func_61("PLAYER_RSP_POS", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_1209 = 1;
				iLocal_1207 = 1;
				func_231(84);
				if (!func_232(&Global_1935630, 4))
				{
					func_233(Global_1935630, 4);
					func_87(0);
				}
				func_55(Local_1356[0], 0);
				iVar0 = 1;
				iLocal_1029 = 1;
				clear_ped_tasks(&(uLocal_1250[1]), 1, 0);
				break;
			case 1:
				break;
			case 2:
				func_37(&(uLocal_1250[1]), 100);
				func_62(Global_35, &(uLocal_1250[1]), func_61("ILO_ROOM_POS", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_1028 = 0;
				if (func_68(&uLocal_1311))
				{
					func_246(&uLocal_1311);
				}
				break;
			case 3:
				func_37(&(uLocal_1250[1]), 100);
				func_62(Global_35, &(uLocal_1250[1]), func_61("ITAKEBODY", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_49(iLocal_1271[1]);
				func_240(get_entity_coords(&(uLocal_1250[0]), true, false), iLocal_1271[0], -89429847, 0, "BLIP_AMBIENT_CORPSE", -981020806);
				if (func_68(&uLocal_1296))
				{
					func_246(&uLocal_1296);
				}
				iLocal_1029 = 8;
				break;
			case 4:
				func_37(&(uLocal_1250[1]), 100);
				func_62(Global_35, &(uLocal_1250[1]), func_61("ILO_QUESTION", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_1028 = 4;
				iLocal_1029 = 8;
				break;
			case 5:
				func_37(&(uLocal_1250[1]), 100);
				func_62(Global_35, &(uLocal_1250[1]), func_61("ILO_RETURN_QUESTION", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_1028 = 6;
				iLocal_1029 = 8;
				break;
			case 6:
				func_37(&(uLocal_1250[1]), 100);
				func_62(Global_35, &(uLocal_1250[1]), func_61("ILO_PAID_POS", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_1028 = 8;
				func_246(&uLocal_1311);
				func_48();
				iLocal_1029 = 8;
				break;
			case 7:
				func_37(&(uLocal_1250[1]), 100);
				func_62(Global_35, &(uLocal_1250[1]), "RE_DJ_VAL_V1_ILO_JAIL_POS", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_39(&uLocal_1166, 131072);
				iLocal_1028 = 10;
				func_48();
				if (func_68(&uLocal_1323))
				{
					func_246(&uLocal_1323);
				}
				func_39(&uLocal_1168, 512);
				func_54(&Local_1434, 0, 0);
				func_54(&Local_1399, 0, 0);
				func_55(Local_1356[0], 0);
				func_55(Local_1356[1], 0);
				func_258(&Local_1399, 0, 1, 1, 0);
				iLocal_1029 = 8;
				break;
		}
	}
	else if (iVar1 == 1)
	{
		iVar0 = 1;
		switch (iVar1027)
		{
			case 0:
				if (func_97(Local_729.f_3, 5) == 1 || iVar1009 == 0)
				{
					func_62(Global_35, &(uLocal_1250[1]), func_61("PLAYER_RSP_NEG", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else if (iVar1009 == 1 && func_97(Local_729.f_3, 5) != 1)
				{
					func_62(Global_35, &(uLocal_1250[1]), func_61("PLAYER_RSP_NEG_IGNORED", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				iLocal_1209 = 0;
				iLocal_1207 = 1;
				func_231(84);
				if (!func_232(&Global_1935630, 4))
				{
					func_233(Global_1935630, 4);
					func_87(0);
				}
				func_55(Local_1356[0], 0);
				iVar0 = 1;
				iLocal_1029 = 1;
				clear_ped_tasks(&(uLocal_1250[1]), 1, 0);
				break;
			case 1:
				func_37(&(uLocal_1250[1]), 100);
				func_62(Global_35, &(uLocal_1250[1]), "RE_DJ_VAL_V1_FOLLOW_NEG_QUIT_PLYR", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_1207 = 1;
				iVar0 = 1;
				iLocal_1028 = 3;
				break;
			case 2:
				func_37(&(uLocal_1250[1]), 100);
				func_62(Global_35, &(uLocal_1250[1]), func_61("ILO_ROOM_NEG", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_1028 = 1;
				if (func_68(&uLocal_1311))
				{
					func_246(&uLocal_1311);
				}
				break;
			case 3:
				func_37(&(uLocal_1250[1]), 100);
				func_62(Global_35, &(uLocal_1250[1]), func_61("ILO_QUIT", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_1028 = 2;
				_0x18ff3110cf47115d(&(uLocal_1250[0]), 2, 0);
				_0x18ff3110cf47115d(&(uLocal_1250[0]), 7, 0);
				if (func_36(iVar1166, 16777216))
				{
					_uiprompt_remove_group(func_40(Local_729.f_162), 1899245582);
					func_41(&uLocal_1168, 16777216);
				}
				func_42(&(Local_729.f_162), 1, 1);
				func_42(&(Local_729.f_163), 1, 1);
				func_463(Local_729.f_162, 0, 1);
				iLocal_1029 = 8;
				break;
			case 4:
				func_37(&(uLocal_1250[1]), 100);
				func_62(Global_35, &(uLocal_1250[1]), func_61("ILO_ANTAGONIZE", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_1028 = 5;
				iLocal_1029 = 8;
				break;
			case 5:
				func_37(&(uLocal_1250[1]), 100);
				func_62(Global_35, &(uLocal_1250[1]), func_61("ILO_RETURN_NEG", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_1028 = 7;
				iLocal_1029 = 8;
				break;
			case 6:
				func_37(&(uLocal_1250[1]), 100);
				func_62(Global_35, &(uLocal_1250[1]), func_61("ILO_PAID_NEG", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_1028 = 9;
				func_246(&uLocal_1311);
				func_48();
				iLocal_1029 = 8;
				break;
			case 7:
				func_37(&(uLocal_1250[1]), 100);
				func_62(Global_35, &(uLocal_1250[1]), "RE_DJ_VAL_V1_ILO_JAIL_NEG", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_1028 = 13;
				func_48();
				func_39(&uLocal_1166, 131072);
				if (func_68(&uLocal_1323))
				{
					func_246(&uLocal_1323);
				}
				func_39(&uLocal_1168, 512);
				func_54(&Local_1434, 0, 0);
				func_54(&Local_1399, 0, 0);
				iLocal_1029 = 8;
				func_258(&Local_1399, 0, 1, 1, 0);
				break;
		}
	}
	if (iVar0 == 1)
	{
		func_186(Local_1399[0], 0, 0);
		func_186(Local_1399[1], 0, 0);
		func_55(Local_1356[0], 0);
	}
}

void func_204()
{
	if (!func_43(iVar1251, 0, 1))
	{
		return;
	}
	iVar0 = 0;
	fVar1 = 15f;
	switch (iVar1028)
	{
		case 0:
			fVar1 = 15f;
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			fVar1 = 15f;
			break;
		case 1:
		case 2:
			fVar1 = 6f;
			break;
	}
	iVar2 = -1;
	iVar2 = func_57(&iLocal_1253, Local_1356[1], fVar1, &Local_1434, &(Local_729.f_192), 0f, 1, 0, 0, func_65(), 0, 0, 2, 1, -1082130432, 0);
	if (iVar2 == 0)
	{
		iVar0 = 1;
		func_37(iVar1251, 100);
		switch (iVar1028)
		{
			case 0:
				if (func_63(Global_35, &(uLocal_1250[0])))
				{
					func_62(Global_35, iVar1251, "RE_DJ_VAL_V1_RTN_MAN_A", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_39(&uLocal_1167, 134217728);
				}
				else if (func_63(Global_35, &(uLocal_1250[1])))
				{
					func_62(Global_35, iVar1251, "RE_DJ_VAL_V1_RTN_GIRL_A", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_39(&uLocal_1167, 536870912);
				}
				else
				{
					func_62(Global_35, iVar1251, "RE_DJ_VAL_V1_INFORM_A", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_39(&uLocal_1167, 33554432);
				}
				if (does_blip_exist(&(iLocal_1271[1])))
				{
					remove_blip(iLocal_1271[1]);
				}
				if (does_blip_exist(iVar1272))
				{
					remove_blip(&iLocal_1274);
				}
				if (does_blip_exist(iVar1273))
				{
					remove_blip(&iLocal_1275);
				}
				set_ped_config_flag(iVar1251, 430, true);
				iLocal_1212 = 1;
				func_241(1087218607, 0, 1f, 1, 1, 0, 0, 0);
				if (does_entity_exist(&(uLocal_1250[1])))
				{
					_0x18ff3110cf47115d(&(uLocal_1250[1]), 1, 0);
				}
				func_464();
				if (func_36(iVar1163, 8))
				{
					func_457(2, 0, 0, "RE_HONOR_BROKE_AGREEMENT", &(uLocal_1250[1]), 0, 1065353216, 0);
				}
				else
				{
					func_457(11, 0, 0, "RE_HONOR_JUSTICE_SERVED", iVar1251, 0, 1065353216, 0);
				}
				iLocal_1185 = 0;
				func_246(&uLocal_1344);
				func_246(&uLocal_1347);
				fLocal_1191 = 15f;
				func_49(iLocal_1271[0]);
				func_58(iVar1238);
				func_455();
				func_54(&Local_1399, 0, 0);
				iLocal_1030 = 8;
				func_55(Local_1356[1], 0);
				if (iLocal_15 != 3)
				{
					iLocal_15 = 4;
					if (func_98())
					{
						func_38(Local_729.f_3, 6, 2);
					}
					else
					{
						func_38(Local_729.f_3, 6, 1);
					}
				}
				break;
			case 1:
				func_62(Global_35, iVar1251, "RE_DJ_VAL_V1_ILO_CORPSE_POS", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_1028 = 18;
				func_455();
				func_54(&Local_1399, 0, 0);
				iLocal_1184 = func_465(iVar1251);
				task_turn_ped_to_face_entity(iVar1251, Global_35, -1, -1082130432, -1082130432, 0.52f);
				iLocal_1242 = _create_volume_cylinder(get_entity_coords(iVar1251, true, false), 0f, 0f, 0f, 10f, 10f, 5f);
				_0x7c00cfc48a782dc0(iVar1240, iVar1251, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
				iLocal_1249 = func_132(iVar1251, iVar1240, 28);
				func_256(iVar1247, 512);
				func_256(iVar1247, 2048);
				func_455();
				iLocal_1030 = 5;
				break;
			case 2:
				func_62(Global_35, iVar1251, "RE_DJ_VAL_V1_ILO_CORPSE_PLY_RESP", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_455();
				func_39(&uLocal_1165, 268435456);
				func_246(&uLocal_1335);
				iLocal_1030 = 5;
				break;
			case 3:
				func_62(Global_35, iVar1251, "RE_DJ_VAL_V1_PLYTOSHER_WALK_WOMAN_POS", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				if (iVar1176 == 8 || iVar1176 == 10)
				{
					if (iVar1218 == 1)
					{
					}
					else
					{
						if (func_68(&uLocal_1314))
						{
							func_246(&uLocal_1314);
						}
						iLocal_1028 = 21;
					}
				}
				else
				{
					iLocal_1028 = 21;
				}
				func_455();
				break;
			case 4:
				func_62(Global_35, iVar1251, "RE_DJ_VAL_V1_PLYTOSHER_WALK_CORPSE_POS", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_1028 = 22;
				func_455();
				break;
			case 5:
				func_62(Global_35, iVar1251, "RE_DJ_VAL_V1_PLYTOSHER_NOBODY_POS", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_1028 = 23;
				func_455();
				break;
			case 6:
				func_62(Global_35, iVar1251, "RE_DJ_VAL_V1_ILO_SHERIFF_POS", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_1028 = 30;
				func_39(&uLocal_1166, 262144);
				func_455();
				if (func_68(&uLocal_1323))
				{
					func_246(&uLocal_1323);
				}
				func_39(&uLocal_1168, 256);
				func_54(&Local_1434, 0, 0);
				func_54(&Local_1399, 0, 0);
				break;
			case 7:
				func_62(Global_35, iVar1251, "RE_DJ_VAL_V1_ILO_END_POS", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_1028 = 32;
				func_455();
				break;
		}
	}
	else if (iVar2 == 1)
	{
		iVar0 = 1;
		func_37(iVar1251, 100);
		switch (iVar1028)
		{
			case 0:
				if (func_63(Global_35, &(uLocal_1250[0])))
				{
					func_62(Global_35, iVar1251, "RE_DJ_VAL_V1_PLY_DOESNT_REPORT_MAN", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_39(&uLocal_1167, 268435456);
				}
				else if (func_63(Global_35, &(uLocal_1250[1])))
				{
					func_62(Global_35, iVar1251, "RE_DJ_VAL_V1_PLY_DOESNT_REPORT_GIRL", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_39(&uLocal_1167, 1073741824);
				}
				else
				{
					func_62(Global_35, iVar1251, "RE_DJ_VAL_V1_PLY_DOESNT_REPORT", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_39(&uLocal_1167, 67108864);
				}
				iLocal_1212 = 0;
				iLocal_1185 = 0;
				func_246(&uLocal_1344);
				func_246(&uLocal_1347);
				fLocal_1191 = 15f;
				func_455();
				func_54(&Local_1399, 0, 0);
				break;
			case 1:
				func_62(Global_35, iVar1251, "RE_DJ_VAL_V1_ILO_CORPSE_NEG", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_1028 = 19;
				func_455();
				func_54(&Local_1399, 0, 0);
				iLocal_1184 = func_465(iVar1251);
				task_turn_ped_to_face_entity(iVar1251, Global_35, -1, -1082130432, -1082130432, 0.52f);
				iLocal_1242 = _create_volume_cylinder(get_entity_coords(iVar1251, true, false), 0f, 0f, 0f, 10f, 10f, 5f);
				_0x7c00cfc48a782dc0(iVar1240, iVar1251, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
				iLocal_1249 = func_132(iVar1251, iVar1240, 28);
				func_256(iVar1247, 512);
				func_256(iVar1247, 2048);
				func_455();
				iLocal_1030 = 5;
				break;
			case 2:
				func_62(Global_35, iVar1251, "RE_DJ_VAL_V1_ILO_CORPSE_PLY_RESP", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_455();
				func_39(&uLocal_1165, 268435456);
				func_246(&uLocal_1335);
				iLocal_1030 = 5;
				break;
			case 3:
				func_62(Global_35, iVar1251, "RE_DJ_VAL_V1_PLYTOSHER_WALK_WOMAN_NEG", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				if (iVar1176 == 8 || iVar1176 == 10)
				{
					if (iVar1218 == 1)
					{
					}
					else
					{
						if (func_68(&uLocal_1314))
						{
							func_246(&uLocal_1314);
						}
						iLocal_1028 = 21;
					}
				}
				else
				{
					iLocal_1028 = 21;
				}
				func_455();
				break;
			case 4:
				func_62(Global_35, iVar1251, "RE_DJ_VAL_V1_PLYTOSHER_WALK_CORPSE_NEG", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_1028 = 22;
				func_455();
				break;
			case 5:
				func_62(Global_35, iVar1251, "RE_DJ_VAL_V1_PLYTOSHER_NOBODY_NEG", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_1028 = 23;
				func_455();
				break;
			case 6:
				if (func_36(iVar1165, 536870912))
				{
					func_62(Global_35, iVar1251, "RE_DJ_VAL_V1_ILO_SHERIFF_NEG_A", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					func_62(Global_35, iVar1251, "RE_DJ_VAL_V1_ILO_SHERIFF_NEG_A", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				iLocal_1028 = 31;
				func_39(&uLocal_1166, 262144);
				func_455();
				if (func_68(&uLocal_1323))
				{
					func_246(&uLocal_1323);
				}
				func_39(&uLocal_1168, 256);
				func_54(&Local_1434, 0, 0);
				func_54(&Local_1399, 0, 0);
				break;
			case 7:
				func_62(Global_35, iVar1251, "RE_DJ_VAL_V1_ILO_END_NEG", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_1028 = 33;
				func_455();
				break;
		}
	}
	if (iVar0 == 1)
	{
		func_55(Local_1356[1], 0);
		func_186(Local_1434[0], 0, 0);
		func_186(Local_1434[1], 0, 0);
	}
}

void func_205()
{
	if (((((((((((Local_729.f_46 == 1 && iVar1026 != 10) && iVar1026 != 11) && iVar1026 != 12) && iVar1026 != 13) && iVar1026 != 14) && iVar1026 != 15) && iVar1026 != 31) && iVar1026 != 30) && iVar1026 != 22) && iVar1026 != 21) && iVar1026 != 23)
	{
		iLocal_1028 = 34;
		return;
	}
	if ((func_36(iVar1163, 1073741824) && !func_36(iVar1162, 262144)) && !func_36(iVar1163, -2147483648))
	{
		if ((func_43(&(uLocal_1250[1]), 0, 1) && !is_any_speech_playing(Global_35)) && !is_any_speech_playing(&(uLocal_1250[1])))
		{
			iLocal_1029 = 3;
			func_466();
			func_186(Local_1399[0], 1, 0);
			func_186(Local_1399[1], 1, 0);
			func_39(&uLocal_1165, -2147483648);
		}
	}
	if ((func_43(&(uLocal_1250[1]), 0, 0) && !is_any_speech_playing(Global_35)) && !is_any_speech_playing(&(uLocal_1250[1])))
	{
		switch (iVar1026)
		{
			case 0:
				func_62(&(uLocal_1250[1]), Global_35, func_61("ILO_ROOM_POS_RESP", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_1028 = 34;
				task_play_anim(&(uLocal_1250[1]), &(Local_547[40]), Local_547[40]->f_1, 4f, -4f, -1, 67109392, 0f, false, 1245184, false, "UpperbodyFixup_filter", false);
				func_39(&uLocal_1165, 1073741824);
				func_41(&uLocal_1165, -2147483648);
				if (func_68(&uLocal_1296))
				{
					func_467(&uLocal_1296, -5f);
				}
				break;
			case 1:
				func_62(&(uLocal_1250[1]), Global_35, func_61("ILO_ROOM_NEG_RESP", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_1028 = 34;
				task_play_anim(&(uLocal_1250[1]), &(Local_547[40]), Local_547[40]->f_1, 4f, -4f, -1, 67109392, 0f, false, 1245184, false, "UpperbodyFixup_filter", false);
				func_39(&uLocal_1165, 1073741824);
				func_41(&uLocal_1165, -2147483648);
				if (func_68(&uLocal_1296))
				{
					func_467(&uLocal_1296, -5f);
				}
				break;
			case 3:
				func_62(&(uLocal_1250[1]), Global_35, "RE_DJ_VAL_V1_FOLLOW_NEG_QUIT", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_1028 = 34;
				func_39(&uLocal_1168, 67108864);
				clear_sequence_task(&iLocal_1290);
				open_sequence_task(&iLocal_1290);
				task_react(0, Global_35, 0f, 0f, 0f, "DEFAULT_PANIC", 5f, 0f, 4);
				task_react(0, 0, Local_923, "DEFAULT_PANIC", 3f, 0f, 4);
				_task_smart_flee_style_coord(0, -318.2843f, 818.9885f, 120.8744f, 2, 128, -1082130432, -1, 0);
				func_46(&(uLocal_1250[1]), &iLocal_1290, 0, 0, 1, 1);
				set_ped_keep_task(&(uLocal_1250[1]), true);
				_0x3923ec958249657d(&(uLocal_1250[1]), &(uLocal_1250[0]), -1082130432);
				func_254(&(uLocal_1250[1]));
				func_85(Global_1935630, 4);
				iLocal_1026 = 14;
				break;
			case 2:
				func_468();
				break;
			case 4:
				if (func_469(iVar1010))
				{
					func_62(&(uLocal_1250[1]), Global_35, func_61("ILO_QUESTION_RESP", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_1028 = 34;
					if (func_68(&uLocal_1317))
					{
						func_246(&uLocal_1317);
					}
					if (func_68(&uLocal_1296))
					{
						func_467(&uLocal_1296, -5f);
					}
				}
				break;
			case 5:
				if (func_469(iVar1010))
				{
					func_62(&(uLocal_1250[1]), Global_35, func_61("ILO_ANTAGONIZE_RESP", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_1028 = 34;
					if (func_68(&uLocal_1317))
					{
						func_246(&uLocal_1317);
					}
					if (func_68(&uLocal_1296))
					{
						func_467(&uLocal_1296, -5f);
					}
				}
				break;
			case 6:
				if (func_469(iVar1010))
				{
					func_62(&(uLocal_1250[1]), Global_35, func_61("ILO_RETURN_QUESTION_RESP", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_1028 = 34;
				}
				break;
			case 7:
				if (func_469(iVar1010))
				{
					func_62(&(uLocal_1250[1]), Global_35, func_61("ILO_RETURN_NEG_RESP", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_1028 = 34;
				}
				break;
			case 8:
				if (func_469(Local_1012.f_3))
				{
					func_62(&(uLocal_1250[1]), Global_35, func_61("ILO_PAID_POS_RESP", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_1028 = 34;
					func_246(&uLocal_1311);
				}
				break;
			case 9:
				if (func_469(Local_1012.f_3))
				{
					func_62(&(uLocal_1250[1]), Global_35, func_61("ILO_PAID_NEG_RESP", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_1028 = 34;
					func_246(&uLocal_1311);
				}
				break;
			case 10:
				func_62(&(uLocal_1250[1]), Global_35, func_61("ILO_JAIL_POS_RESP", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_1028 = 11;
				if (func_68(&uLocal_1323))
				{
					func_246(&uLocal_1323);
				}
				break;
			case 11:
				if (_does_volume_exist(iVar1229) && is_entity_in_volume(Global_35, iVar1229, true, 0))
				{
					func_62(Global_35, &(uLocal_1250[1]), func_61("ILO_JAIL_POS_B", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_1028 = 12;
				}
				else
				{
					iLocal_1028 = 34;
				}
				if (func_68(&uLocal_1323))
				{
					func_246(&uLocal_1323);
				}
				break;
			case 12:
				if (_does_volume_exist(iVar1229) && is_entity_in_volume(Global_35, iVar1229, true, 0))
				{
					func_62(&(uLocal_1250[1]), Global_35, func_61("ILO_JAIL_POS_RESP_B", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				iLocal_1028 = 34;
				if (func_68(&uLocal_1323))
				{
					func_246(&uLocal_1323);
				}
				if (!func_36(iVar1166, 256) && func_43(iVar1251, 0, 1))
				{
					func_54(&Local_1434, 1, 0);
				}
				break;
			case 13:
				func_62(&(uLocal_1250[1]), Global_35, func_61("ILO_JAIL_NEG_RESP", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_1028 = 14;
				if (func_68(&uLocal_1323))
				{
					func_246(&uLocal_1323);
				}
				break;
			case 14:
				if (_does_volume_exist(iVar1229) && is_entity_in_volume(Global_35, iVar1229, true, 0))
				{
					func_62(Global_35, &(uLocal_1250[1]), func_61("ILO_JAIL_NEG_B", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_1028 = 15;
				}
				else
				{
					iLocal_1028 = 34;
				}
				if (func_68(&uLocal_1323))
				{
					func_246(&uLocal_1323);
				}
				break;
			case 15:
				if (_does_volume_exist(iVar1229) && is_entity_in_volume(Global_35, iVar1229, true, 0))
				{
					func_62(&(uLocal_1250[1]), Global_35, func_61("ILO_JAIL_NEG_RESP_B", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				iLocal_1028 = 34;
				if (func_68(&uLocal_1323))
				{
					func_246(&uLocal_1323);
				}
				if (!func_36(iVar1166, 256) && func_43(iVar1251, 0, 1))
				{
					func_54(&Local_1434, 1, 0);
				}
				break;
			case 34:
				break;
		}
	}
	if (((func_43(iVar1251, 0, 1) && !is_any_speech_playing(Global_35)) && !is_any_speech_playing(iVar1251)) && iVar1212 == 0)
	{
		switch (iVar1026)
		{
			case 18:
				func_62(iVar1251, Global_35, "RE_DJ_VAL_V1_ILO_CORPSE_POS_RESP", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_1028 = 20;
				break;
			case 19:
				func_62(iVar1251, Global_35, "RE_DJ_VAL_V1_ILO_CORPSE_NEG_RESP", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_1028 = 20;
				break;
			case 20:
				func_236(Local_1434[0], "RE_INTER_LIE");
				func_186(Local_1434[0], 1, 0);
				iLocal_1030 = 2;
				func_55(Local_1356[1], 0);
				func_69(&uLocal_1335, 0);
				iLocal_1028 = 34;
				break;
			case 21:
				func_62(iVar1251, Global_35, "RE_DJ_VAL_V1_WALKBACK_B", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_1028 = 34;
				break;
			case 22:
				func_62(iVar1251, Global_35, "RE_DJ_VAL_V1_WALKBACK_B", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_1028 = 34;
				break;
			case 23:
				func_62(iVar1251, Global_35, "RE_DJ_VAL_V1_WALKBACK_B", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_1028 = 34;
				break;
			case 30:
				func_62(iVar1251, Global_35, "RE_DJ_VAL_V1_THANKS_A", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_1028 = 34;
				if (!func_36(iVar1166, 512) && _0x3ab6c7b0bb0df4b1(&(uLocal_1250[1]), iVar1020))
				{
					func_54(&Local_1399, 1, 0);
				}
				break;
			case 31:
				func_62(iVar1251, Global_35, "RE_DJ_VAL_V1_ILO_SHERIFF_NEG_RESP", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_1028 = 34;
				if (!func_36(iVar1166, 512) && _0x3ab6c7b0bb0df4b1(&(uLocal_1250[1]), iVar1020))
				{
					func_54(&Local_1399, 1, 0);
				}
				break;
			case 32:
				func_62(iVar1251, Global_35, "RE_DJ_VAL_V1_ILO_SHERIFF_POS_RESP_B", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_1028 = 34;
				break;
			case 33:
				func_62(iVar1251, Global_35, "RE_DJ_VAL_V1_ILO_END_NEG_RESP", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_1028 = 34;
				break;
			case 34:
				break;
		}
	}
}

void func_206()
{
	if (func_207(Global_35, iVar1227, 1, 0))
	{
		if (iVar1208 == 0)
		{
			set_scenario_type_enabled("PROP_HUMAN_SLEEP_BED_PILLOW", false);
			iLocal_1210 = 1;
		}
	}
	else if (iVar1208 == 1)
	{
		set_scenario_type_enabled("PROP_HUMAN_SLEEP_BED_PILLOW", true);
		iLocal_1210 = 0;
	}
}

bool func_207(int iParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_208(vector3 vParam0, int iParam3)
{
	if (is_entity_dead(iParam3))
	{
		return false;
	}
	vVar0 = { get_entity_forward_vector(iParam3) };
	return func_470(vVar0, vParam0) > func_470(vVar0, get_entity_coords(iParam3, true, false));
}

void func_209()
{
	disable_control_action(0, -762150781, false);
}

void func_210()
{
	if (_does_volume_exist(iVar1229) && is_entity_in_volume(Global_35, iVar1229, true, 0))
	{
		if (func_63(Global_35, &(uLocal_1250[0])) || (func_63(Global_35, &(uLocal_1250[1])) && iVar1212 == 0))
		{
			disable_control_action(0, -762150781, false);
			disable_control_action(0, -432665970, false);
			disable_control_action(0, -349518703, false);
			disable_control_action(0, -1098542161, false);
		}
	}
}

void func_211()
{
	if (!func_36(iVar1162, -2147483648) && _does_volume_exist(iVar1237))
	{
		if (is_entity_in_volume(&(uLocal_1250[0]), iVar1237, false, 0) || (is_entity_in_volume(&(uLocal_1250[1]), iVar1237, false, 0) && iVar1030 == 10))
		{
			if (!_is_ped_carrying(Global_35))
			{
				_0x18ff3110cf47115d(&(uLocal_1250[0]), 7, 0);
				if ((does_entity_exist(&(uLocal_1250[1])) && iVar1030 == 10) && !func_43(&(uLocal_1250[1]), 0, 0))
				{
					_0x18ff3110cf47115d(&(uLocal_1250[1]), 7, 0);
				}
				iLocal_1202 = 0;
				func_58(iVar1237);
				if (does_blip_exist(iVar1273))
				{
					remove_blip(&iLocal_1275);
				}
				func_39(&uLocal_1164, -2147483648);
			}
		}
	}
}

void func_212()
{
	if (func_36(iVar1162, 4096) || func_36(iVar1162, -2147483648))
	{
		return;
	}
	if (_does_volume_exist(iVar1229) && is_entity_in_volume(Global_35, iVar1229, true, 0))
	{
		return;
	}
	if (!_does_volume_exist(iVar1238))
	{
		return;
	}
	if (iVar1024 >= 11)
	{
		return;
	}
	func_471();
}

void func_213()
{
	if (((!func_36(iVar1162, 2) && !func_36(iVar1165, 33554432)) && !func_36(iVar1165, 536870912)) && !func_36(iVar1165, 134217728))
	{
		if (func_63(Global_35, &(uLocal_1250[0])))
		{
			if (iVar1201 == 0 && iVar1209 == 0)
			{
				iLocal_1203 = 1;
				set_ped_config_flag(&(uLocal_1250[0]), 243, true);
				set_ped_config_flag(&(uLocal_1250[0]), 113, true);
			}
		}
		else if (iVar1201 == 1)
		{
			iLocal_1203 = 0;
			set_ped_config_flag(&(uLocal_1250[0]), 243, false);
			set_ped_config_flag(&(uLocal_1250[0]), 113, false);
		}
		if (func_59(Global_35, &(uLocal_1250[0]), 1, 1) > 5f)
		{
			_0x18ff3110cf47115d(&(uLocal_1250[0]), 7, 0);
			_0x18ff3110cf47115d(&(uLocal_1250[0]), 2, 0);
			if (does_blip_exist(iVar1273))
			{
				remove_blip(&iLocal_1275);
			}
			func_39(&uLocal_1164, 2);
			func_48();
		}
	}
}

bool func_214()
{
	if (func_43(&(uLocal_1250[1]), 0, 0))
	{
		if (_is_ped_hogtied(&(uLocal_1250[1])))
		{
			return true;
		}
		else if (_0x61914209c36efddb(&(uLocal_1250[1])) == 5)
		{
			return true;
		}
	}
	return false;
}

void func_215()
{
	if (!func_68(&uLocal_1314))
	{
		func_69(&uLocal_1314, 0);
	}
	if (((func_70(&uLocal_1314) > fVar1187 && func_43(&(uLocal_1250[1]), 0, 0)) && _is_ped_hogtied(&(uLocal_1250[1]))) && (!is_any_speech_playing(&(uLocal_1250[1])) || iVar1218 == 1))
	{
		if ((!func_63(Global_35, &(uLocal_1250[1])) && !func_63(iVar1251, &(uLocal_1250[1]))) && iVar1178 != 6)
		{
			if (!func_36(iVar1164, 1))
			{
				func_62(&(uLocal_1250[1]), Global_35, func_61("WOMAN_HOGTIED", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_39(&uLocal_1166, 1);
			}
			else if (!func_36(iVar1164, 2048))
			{
				func_62(&(uLocal_1250[1]), Global_35, func_61("WOMAN_TIED_LEAVING_A", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				add_shocking_event_for_entity(-1130398329, &(uLocal_1250[1]), -1f, -1f, -1f, -1f, -1f, 180f, false, true, -1, -1);
				func_39(&uLocal_1166, 2048);
			}
			else if (!func_36(iVar1164, 4096))
			{
				func_62(&(uLocal_1250[1]), Global_35, func_61("WOMAN_TIED_LEAVING_B", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				add_shocking_event_for_entity(-1130398329, &(uLocal_1250[1]), -1f, -1f, -1f, -1f, -1f, 180f, false, true, -1, -1);
				func_39(&uLocal_1166, 4096);
			}
			func_246(&uLocal_1314);
			fLocal_1189 = 10f;
		}
		if ((!is_entity_in_volume(Global_35, iVar1229, true, 0) && !is_entity_in_volume(Global_35, iVar1230, true, 0)) && func_63(Global_35, &(uLocal_1250[1])))
		{
			switch (iVar1176)
			{
				case 0:
					func_62(&(uLocal_1250[1]), Global_35, func_61("WOMAN_CARRIED_A", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					fLocal_1189 = 6f;
					func_39(&uLocal_1166, 2);
					break;
				case 1:
					func_62(&(uLocal_1250[1]), Global_35, func_61("WOMAN_CARRIED_B", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_39(&uLocal_1166, 4);
					break;
				case 2:
					func_62(&(uLocal_1250[1]), Global_35, func_61("WOMAN_CARRIED_C", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_39(&uLocal_1166, 8);
					break;
				case 3:
					func_62(&(uLocal_1250[1]), Global_35, func_61("WOMAN_CARRIED_D", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					add_shocking_event_for_entity(1498498500, &(uLocal_1250[1]), -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
					fLocal_1189 = 4f;
					func_39(&uLocal_1166, 16);
					break;
				case 4:
					func_62(&(uLocal_1250[1]), Global_35, func_61("WOMAN_CARRIED_E", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					add_shocking_event_for_entity(1498498500, &(uLocal_1250[1]), -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
					fLocal_1189 = 6f;
					func_39(&uLocal_1166, 32);
					break;
				case 5:
					func_62(&(uLocal_1250[1]), Global_35, func_61("WOMAN_CARRIED_F", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					fLocal_1189 = 4f;
					func_39(&uLocal_1166, 64);
					break;
				case 6:
					func_62(&(uLocal_1250[1]), Global_35, func_61("WOMAN_CARRIED_G", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					fLocal_1189 = 2f;
					func_39(&uLocal_1166, 128);
					break;
				case 7:
					func_62(&(uLocal_1250[1]), Global_35, func_61("WOMAN_CARRIED_H", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					fLocal_1189 = 4f;
					func_39(&uLocal_1166, 256);
					break;
				case 8:
					if (!func_63(iVar1251, &(uLocal_1250[1])))
					{
						func_62(&(uLocal_1250[1]), Global_35, func_61("WOMAN_CARRIED_I", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						fLocal_1189 = 10f;
						func_39(&uLocal_1166, 512);
					}
					break;
				case 9:
					if (!func_63(iVar1251, &(uLocal_1250[1])))
					{
						func_62(&(uLocal_1250[1]), Global_35, func_61("WOMAN_CARRIED_J", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_39(&uLocal_1166, 1024);
					}
					break;
			}
			iLocal_1178 = iVar1176 + 1;
			func_246(&uLocal_1314);
		}
		else if (((is_entity_in_volume(Global_35, iVar1229, true, 0) || is_entity_in_volume(Global_35, iVar1230, true, 0)) && (is_entity_in_volume(&(uLocal_1250[1]), iVar1229, true, 0) || is_entity_in_volume(Global_35, iVar1230, true, 0))) && func_43(iVar1251, 0, 1))
		{
			func_246(&uLocal_1314);
			switch (iVar1177)
			{
				case 0:
					if (!func_36(iVar1166, 1))
					{
						func_62(&(uLocal_1250[1]), Global_35, func_61("JAILED_WOMAN_A", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						fLocal_1189 = 5.5f;
					}
					else
					{
						func_467(&uLocal_1314, 5.5f);
					}
					break;
				case 1:
					if (!func_36(iVar1166, 2))
					{
						func_62(&(uLocal_1250[1]), Global_35, func_61("JAILED_WOMAN_B", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						func_467(&uLocal_1314, 5.5f);
					}
					break;
				case 2:
					if (!func_36(iVar1166, 4))
					{
						func_62(&(uLocal_1250[1]), Global_35, func_61("JAILED_WOMAN_C", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						fLocal_1189 = 7f;
					}
					else
					{
						func_467(&uLocal_1314, 5.5f);
					}
					break;
				case 3:
					if (!func_36(iVar1166, 8))
					{
						func_62(&(uLocal_1250[1]), Global_35, func_61("JAILED_WOMAN_D", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						fLocal_1189 = 9f;
					}
					else
					{
						func_467(&uLocal_1314, 5.5f);
					}
					break;
				case 4:
					if (!func_36(iVar1166, 16))
					{
						func_62(&(uLocal_1250[1]), Global_35, func_61("JAILED_WOMAN_E", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						func_467(&uLocal_1314, 5.5f);
					}
					break;
				case 5:
					if (!func_36(iVar1166, 32))
					{
						func_62(&(uLocal_1250[1]), Global_35, func_61("JAILED_WOMAN_F", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_39(&uLocal_1168, 32);
					}
					else
					{
						func_467(&uLocal_1314, 5.5f);
					}
					break;
			}
			if (func_63(iVar1251, &(uLocal_1250[1])))
			{
				fLocal_1189 = 6f;
			}
			uLocal_1179 = iVar1177 + 1;
		}
		else if (((func_43(iVar1251, 0, 1) && func_63(iVar1251, &(uLocal_1250[1]))) && iVar1212 == 0) && func_36(iVar1164, 4194304))
		{
			if (!func_36(iVar1166, 8388608))
			{
				func_236(Local_1434[0], "RE_INTER_POS");
				func_236(Local_1434[1], "RE_INTER_ANTAGONIZE");
				func_186(Local_1434[0], 1, 0);
				func_186(Local_1434[1], 1, 0);
				if (func_63(iVar1251, &(uLocal_1250[1])))
				{
					iLocal_1030 = 3;
				}
				else if (func_63(iVar1251, &(uLocal_1250[0])))
				{
					iLocal_1030 = 4;
				}
				else
				{
					iLocal_1030 = 5;
				}
				func_39(&uLocal_1168, 8388608);
			}
			func_246(&uLocal_1314);
			switch (iVar1176)
			{
				case 0:
					func_62(&(uLocal_1250[1]), Global_35, func_61("JAILED_WOMAN_A", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					fLocal_1189 = 8f;
					func_39(&uLocal_1168, 1);
					break;
				case 1:
					func_62(&(uLocal_1250[1]), Global_35, func_61("JAILED_WOMAN_C", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					fLocal_1189 = 6f;
					func_39(&uLocal_1168, 4);
					break;
				case 2:
					func_62(&(uLocal_1250[1]), Global_35, func_61("JAILED_WOMAN_D", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_39(&uLocal_1168, 8);
					if (func_36(iVar1164, 32))
					{
						fLocal_1189 = 2.5f;
						iLocal_1220 = 1;
					}
					break;
				case 3:
					if (!func_36(iVar1164, 2))
					{
						func_62(&(uLocal_1250[1]), Global_35, func_61("WOMAN_CARRIED_A", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						func_467(&uLocal_1314, 6f);
					}
					fLocal_1189 = 6f;
					break;
				case 4:
					if (!func_36(iVar1164, 4))
					{
						func_62(&(uLocal_1250[1]), Global_35, func_61("WOMAN_CARRIED_B", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						func_467(&uLocal_1314, 6f);
					}
					break;
				case 5:
					if (!func_224(iVar1251, 1))
					{
						if (!func_36(iVar1164, 8))
						{
							func_62(&(uLocal_1250[1]), Global_35, func_61("WOMAN_CARRIED_C", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						else
						{
							func_467(&uLocal_1314, 6f);
						}
					}
					break;
				case 6:
					if (!func_224(iVar1251, 1))
					{
						if (!func_36(iVar1164, 16))
						{
							func_62(&(uLocal_1250[1]), Global_35, func_61("WOMAN_CARRIED_D", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							func_89(&iLocal_1187);
							iLocal_1187 = add_shocking_event_for_entity(-1130398329, &(uLocal_1250[1]), -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
							fLocal_1189 = 4f;
						}
						else
						{
							func_467(&uLocal_1314, 6f);
						}
					}
					break;
				case 7:
					if (!func_224(iVar1251, 1))
					{
						if (!func_36(iVar1164, 32))
						{
							func_62(&(uLocal_1250[1]), Global_35, func_61("WOMAN_CARRIED_E", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							func_89(&iLocal_1187);
							iLocal_1187 = add_shocking_event_for_entity(-1130398329, &(uLocal_1250[1]), -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
							fLocal_1189 = 1.5f;
							iLocal_1220 = 1;
						}
						else
						{
							func_467(&uLocal_1314, 6f);
						}
					}
					break;
				case 8:
					func_62(iVar1251, &(uLocal_1250[1]), func_61("JAILED_SHUT_IT", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_89(&iLocal_1187);
					iLocal_1187 = add_shocking_event_for_entity(-1130398329, &(uLocal_1250[1]), -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
					fLocal_1189 = 2.5f;
					iLocal_1220 = 0;
					break;
				case 9:
					if (!func_36(iVar1164, 64))
					{
						func_62(&(uLocal_1250[1]), Global_35, func_61("WOMAN_CARRIED_F", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						fLocal_1189 = 4f;
					}
					else
					{
						func_467(&uLocal_1314, 6f);
					}
					break;
				case 10:
					if (!func_224(iVar1251, 1))
					{
						func_62(iVar1251, &(uLocal_1250[1]), func_61("WALKBACK_A", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_89(&iLocal_1187);
						fLocal_1189 = 3f;
					}
					break;
				case 11:
					func_62(&(uLocal_1250[1]), Global_35, func_61("JAILED_WOMAN_E", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_39(&uLocal_1168, 16);
					break;
				case 12:
					if (!func_36(iVar1164, 128))
					{
						func_62(&(uLocal_1250[1]), Global_35, func_61("WOMAN_CARRIED_G", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						fLocal_1189 = 2f;
					}
					else
					{
						func_467(&uLocal_1314, 6f);
					}
					break;
				case 13:
					if (!func_36(iVar1164, 256))
					{
						func_62(&(uLocal_1250[1]), Global_35, func_61("WOMAN_CARRIED_H", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						fLocal_1189 = 4f;
					}
					else
					{
						func_467(&uLocal_1314, 6f);
					}
					break;
				case 14:
					func_62(&(uLocal_1250[1]), Global_35, func_61("JAILED_WOMAN_B", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					fLocal_1189 = 6f;
					func_39(&uLocal_1168, 2);
					break;
				case 15:
					if (_is_anim_scene_started(iVar1020, false) && _0x8d81e7824b7753f7(iVar1020, "IDLES", 1))
					{
						if (!func_36(iVar1166, 32))
						{
							func_62(&(uLocal_1250[1]), Global_35, func_61("JAILED_WOMAN_F", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							func_39(&uLocal_1168, 32);
						}
					}
					else
					{
						func_467(&uLocal_1314, (fVar1187 - 1f));
						return;
					}
					break;
				default:
					break;
			}
			iLocal_1178 = iVar1176 + 1;
		}
	}
}

void func_216(int iParam0)
{
	if (!func_106(iParam0))
	{
		Global_1392040 = (Global_1392040 || iParam0);
	}
}

void func_217()
{
	func_472(Local_1399[0], "RE_INTER_POS", " ", -163964935, 0, 0, 0, 0, 0);
	func_472(Local_1399[1], "RE_INTER_ANTAGONIZE", " ", 648122183, 0, 0, 0, 0, 0);
}

bool func_218(int iParam0, bool bParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (bParam1)
		{
			return is_ped_dead_or_dying(iParam0, true);
		}
		else
		{
			return is_entity_dead(iParam0);
		}
	}
	return true;
}

void func_219(int iParam0)
{
	func_473(iParam0, (func_412(iParam0) - 6f));
	func_474(iParam0, 1);
}

void func_220()
{
	if (func_43(&(uLocal_1250[1]), 0, 1))
	{
		clear_sequence_task(&iLocal_1290);
		task_play_anim(&(uLocal_1250[1]), &(Local_547[37]), Local_547[37]->f_1, 8f, -4f, -1, 1, 0f, false, 0, false, 0, false);
		apply_ped_damage_pack(&(uLocal_1250[1]), "PD_Dead_John_bloody_hands", 0f, 1f);
		if (!_0x0c9dbf48c6ba6e4c(Global_35, -315.6169f, 794.0749f, 116.7205f, 17))
		{
			clear_area(-315.6169f, 794.0749f, 116.7205f, 2f, 8);
		}
	}
}

void func_221(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = _create_volume_box_with_custom_name(vParam1, vParam4, vParam7, sParam10);
}

void func_222()
{
	if (!func_36(iVar1162, 64))
	{
		if (Local_923.f_11 != 0)
		{
			func_241(Local_923.f_11, 1, 0f, 0, 0, 0, 0, 0);
			func_39(&uLocal_1164, 64);
		}
	}
}

bool func_223(int iParam0)
{
	if (iParam0 == -1)
	{
		return true;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = func_475(func_292());
	if (func_2(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_2(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_2(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_2(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_2(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_2(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_2(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_2(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_2(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_2(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_2(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_2(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_2(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_2(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_2(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_2(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_2(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

bool func_224(int iParam0, bool bParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_ped_injured(iParam0) || !bParam1)
		{
			iVar0 = get_interior_from_entity(iParam0);
			if (is_valid_interior(iVar0))
			{
				if (func_476(iVar0) || func_477(iVar0))
				{
					return false;
				}
				return true;
			}
		}
	}
	return false;
}

bool func_225(var uParam0, float fParam1, float fParam2, float fParam3, int iParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, bool bParam11)
{
	bVar1 = false;
	fVar2 = func_361(uParam0, bVar1);
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
	if (uParam0->f_178 && func_360())
	{
		bVar1 = true;
		fVar3 = func_308(bVar1, fParam9, fVar2);
	}
	if (uParam0->f_48 && (!bParam10 || (!_does_volume_exist(uParam0->f_173) || is_entity_in_volume(Global_35, uParam0->f_173, true, 0))))
	{
		if (iParam4 > 1)
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_121)
			{
				func_362(uParam0->f_121[iVar0], fVar3, 1082130432, 1, 90f, 0, 0);
				iVar0++;
			}
		}
		else
		{
			func_362(uParam0->f_121[0], fVar3, 1082130432, 1, 90f, 0, 0);
		}
		if (func_363(&(uParam0->f_121), iParam4, fParam1))
		{
			func_144(&(uParam0->f_121));
			if (uParam0->f_186)
			{
				_0xb2a38826e5886e83(func_312(uParam0->f_3, uParam0->f_185), 0);
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
						func_143(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
					}
				}
				func_144(&(uParam0->f_121));
				if (uParam0->f_186)
				{
					_0xb2a38826e5886e83(func_312(uParam0->f_3, uParam0->f_185), 0);
				}
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_226()
{
	if (func_36(iVar1162, 2097152))
	{
		return;
	}
	if (_does_anim_scene_exist(iVar1010))
	{
		if (_get_anim_scene_entity_matrix(iVar1010, "PED_HOOKER", &vLocal_1502, true, "PBL_NORMAL", 2))
		{
			if (!func_329(vLocal_1502) && !func_329(vLocal_1502.f_3))
			{
				func_39(&uLocal_1164, 2097152);
			}
		}
	}
}

void func_227(int iParam0, var uParam1, vector3 vParam2, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, float fParam11, bool bParam12, bool bParam13, float fParam14)
{
	if (func_478(&(uParam1->f_3), 1))
	{
		func_479(uParam1);
		if (func_480(iParam0, fParam7, fParam11, bParam12, bParam13, fParam14))
		{
			func_278();
		}
	}
	if (func_481(get_entity_coords(iParam0, true, false), uParam1, fParam7))
	{
		set_gameplay_ped_hint(iParam0, Vector(0f, 0f, 0f) + vParam2, bParam5, iParam8, iParam9, iParam10);
		func_482(uParam1, get_entity_coords(iParam0, true, false), fParam6, iParam9);
	}
}

bool func_228()
{
	if (iVar1171 >= 1)
	{
		if (has_entity_clear_los_to_entity(Global_35, &(uLocal_1250[1]), 17))
		{
			_0x66f9eb44342bb4c5(Global_35, &Local_41);
		}
	}
	switch (iVar1171)
	{
		case 0:
			vVar4 = { func_483(Global_35, 1065353216) };
			iVar1 = func_484(&(uLocal_1250[1]), Global_35, 1060437492);
			if (func_185(-318.4023f, 797.0115f, 116.7004f, -314.4573f, 797.6716f, 116.7757f, Global_36))
			{
				iVar1 = 1;
			}
			switch (iVar1)
			{
				case 0:
					fVar7 = 12f;
					iVar0 = 29;
					break;
				case 1:
					fVar7 = 10f;
					iVar0 = 28;
					break;
				case 3:
					fVar7 = 12f;
					iVar0 = 32;
					break;
				case 2:
					fVar7 = 12f;
					iVar0 = 34;
					break;
			}
			if (((!func_329(vVar4) && func_67(&(uLocal_1250[1]), vVar4, 1) < fVar7) && !func_224(Global_35, 1)) && has_entity_clear_los_to_entity(&(uLocal_1250[1]), Global_35, 17))
			{
				fVar2 = get_anim_duration(&(Local_547[iVar0]), Local_547[iVar0]->f_1);
				iVar3 = floor((fVar2 * 1000f));
				open_sequence_task(&iLocal_1290);
				task_play_anim(0, &(Local_547[iVar0]), Local_547[iVar0]->f_1, 2f, -2f, iVar3, 0, 0f, false, 0, false, 0, false);
				task_react(0, Global_35, 0f, 0f, 0f, "DEFAULT_NERVOUS", 6f, 900f, 4);
				task_stand_still(0, -1);
				func_46(&(uLocal_1250[1]), &iLocal_1290, 0, 0, 1, 1);
				if (!does_blip_exist(&(iLocal_1271[1])))
				{
					iLocal_1271[1] = _blip_add_for_entity(-89429847, &(uLocal_1250[1]));
					set_blip_name_from_text_file(&(iLocal_1271[1]), "RE_INTER_STRANGER");
				}
				Local_41.f_3 = &uLocal_1250[1];
				uLocal_1173 = iVar1171 + 1;
				iLocal_14 = 1;
			}
			break;
		case 1:
			if (func_268(&(uLocal_1250[1]), 1, 1) < 5f)
			{
				fVar2 = get_anim_duration(&(Local_547[7]), Local_547[7]->f_1);
				iVar3 = floor((fVar2 * 1000f));
				open_sequence_task(&iLocal_1290);
				task_play_upper_anim_facing_entity(0, &(Local_547[7]), Local_547[7]->f_1, Global_35, iVar3, 2f, -2f, 67109392, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
				task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, 0.52f);
				func_46(&(uLocal_1250[1]), &iLocal_1290, 0, 0, 1, 1);
				if (func_68(&uLocal_1311))
				{
					func_72(&uLocal_1311);
				}
				if (!does_blip_exist(&(iLocal_1271[1])))
				{
					iLocal_1271[1] = _blip_add_for_entity(-89429847, &(uLocal_1250[1]));
					set_blip_name_from_text_file(&(iLocal_1271[1]), "RE_INTER_STRANGER");
				}
				func_221(&uLocal_1243, -317.547f, 814.025f, 120.969f, 0f, -32.421f, 100.025f, 10.848f, 2.009f, 3.48f, "volStairs");
				iLocal_1222 = 1;
				func_88(1);
				func_485(76, 0);
				func_485(76, 1);
				if (iVar1009 == 1)
				{
					func_486(&(uLocal_1250[1]), 0);
				}
				uLocal_1173 = iVar1171 + 1;
			}
			else if (func_36(iVar1163, 8388608))
			{
				iVar1 = func_484(&(uLocal_1250[1]), Global_35, 1060437492);
				if (!func_68(&uLocal_1311))
				{
					func_69(&uLocal_1311, 0);
				}
				if (func_70(&uLocal_1311) > 10f && func_245(-4f, 1, 0, 0))
				{
					switch (iVar1)
					{
						case 0:
							iVar0 = 30;
							iVar8 = 31;
							break;
						case 1:
							iVar0 = 28;
							iVar8 = 28;
							break;
						case 3:
							iVar0 = 33;
							iVar8 = 31;
							break;
						case 2:
							iVar0 = 35;
							iVar8 = 31;
							break;
					}
					if (!func_36(iVar1163, 16777216))
					{
						fVar2 = get_anim_duration(&(Local_547[iVar0]), Local_547[iVar0]->f_1);
						iVar3 = floor((fVar2 * 1000f));
						open_sequence_task(&iLocal_1290);
						task_play_anim(0, &(Local_547[iVar0]), Local_547[iVar0]->f_1, 2f, -2f, iVar3, 0, 0f, false, 0, false, 0, false);
						task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, 0.52f);
						func_46(&(uLocal_1250[1]), &iLocal_1290, 0, 0, 1, 1);
						iLocal_14 = 1;
					}
					else if (!func_36(iVar1163, 33554432))
					{
						fVar2 = get_anim_duration(&(Local_547[iVar8]), Local_547[iVar8]->f_1);
						iVar3 = floor((fVar2 * 1000f));
						open_sequence_task(&iLocal_1290);
						task_play_upper_anim_facing_entity(0, &(Local_547[iVar8]), Local_547[iVar8]->f_1, Global_35, iVar3, 2f, -2f, 67109392, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
						task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, 0.52f);
						func_46(&(uLocal_1250[1]), &iLocal_1290, 0, 0, 1, 1);
					}
					func_246(&uLocal_1311);
				}
			}
			break;
		case 2:
			if ((has_anim_event_fired(&(uLocal_1250[1]), 2067049191) || func_487(&(uLocal_1250[1]), -875674219)) && !func_36(iVar1162, 67108864))
			{
				func_39(&uLocal_1164, 67108864);
				func_69(&uLocal_1311, 0);
			}
			if ((func_36(iVar1162, 67108864) || ((get_script_task_status(&(uLocal_1250[1]), 242628503, true) == 1 && get_sequence_progress(&(uLocal_1250[1])) >= 1) && !func_36(iVar1163, 128))) && !func_36(iVar1163, 64))
			{
				if (!func_36(iVar1166, 1024))
				{
					func_236(Local_1399[0], "BEAT_GRT_POS");
					func_236(Local_1399[1], "BEAT_GRT_NEG");
					func_54(&Local_1399, 1, 0);
					func_39(&uLocal_1168, 1024);
					func_55(Local_1356[0], 0);
				}
			}
			if (!func_36(iVar1163, 64))
			{
				vVar11 = { func_483(Global_35, 1065353216) };
				fVar9 = func_59(Global_35, &(uLocal_1250[1]), 1, 1);
				fVar10 = func_67(&(uLocal_1250[1]), vVar11, 1);
				if ((((fVar9 > 7f && fVar10 >= fVar9) && !func_487(Global_35, 501393341)) && !func_487(Global_35, 1868526510)) && func_36(iVar1162, 67108864))
				{
					iVar14 = 41;
					fVar2 = get_anim_duration(&(Local_547[iVar14]), Local_547[iVar14]->f_1);
					iVar3 = floor((fVar2 * 1000f));
					open_sequence_task(&iLocal_1290);
					task_play_upper_anim_facing_entity(0, &(Local_547[iVar14]), Local_547[iVar14]->f_1, Global_35, iVar3, 2f, -2f, 67109392, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
					task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, 0.52f);
					func_46(&(uLocal_1250[1]), &iLocal_1290, 0, 0, 1, 1);
					func_60(0);
					func_62(&(uLocal_1250[1]), Global_35, func_61("COME_BACK", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_54(&Local_1399, 0, 0);
					func_39(&uLocal_1165, 64);
				}
			}
			if (((iVar1009 == 1 && func_36(iVar1162, 67108864)) && !func_224(Global_35, 1)) && is_entity_in_volume(Global_35, iVar1241, true, 0))
			{
				func_39(&uLocal_1164, 1);
			}
			if (((func_36(iVar1163, 64) && func_36(iVar1162, 67108864)) && func_59(Global_35, &(uLocal_1250[1]), 1, 1) < 5f) || func_36(iVar1162, 1))
			{
				if ((!func_36(iVar1163, 128) && func_245(-4f, 1, 0, 0)) && !func_36(iVar1162, 1))
				{
					func_62(&(uLocal_1250[1]), Global_35, func_61("RETURNED_A", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_39(&uLocal_1165, 128);
					task_play_upper_anim_facing_entity(&(uLocal_1250[1]), &(Local_547[42]), Local_547[42]->f_1, Global_35, -1, 4f, -4f, 67109392, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
					func_54(&Local_1399, 0, 0);
					iLocal_1029 = 1;
					func_55(Local_1356[0], 0);
				}
				else if ((!func_36(iVar1163, 256) && func_245(-4f, 1, 0, 0)) && !is_entity_playing_anim(&(uLocal_1250[1]), &(Local_547[42]), Local_547[42]->f_1, 1))
				{
					if (func_36(iVar1162, 1))
					{
						func_62(&(uLocal_1250[1]), Global_35, func_61("RETURNED_A", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_39(&uLocal_1165, 128);
						func_54(&Local_1399, 0, 0);
					}
					func_39(&uLocal_1165, 256);
					iLocal_1207 = 1;
					func_231(84);
					if (!func_232(&Global_1935630, 4))
					{
						func_233(Global_1935630, 4);
						func_87(0);
					}
					iLocal_1029 = 1;
					func_55(Local_1356[0], 0);
					func_186(Local_1399[0], 0, 0);
					func_186(Local_1399[1], 0, 0);
					func_72(&uLocal_1311);
					if (!func_36(iVar1162, 1))
					{
						task_play_upper_anim_facing_entity(&(uLocal_1250[1]), &(Local_547[43]), Local_547[43]->f_1, Global_35, -1, 4f, -4f, 67109392, 0f, false, false, -1f, "UpperbodyFixup_filter", 1245184, -1f);
					}
				}
			}
			if (iVar1205 == 1)
			{
				uLocal_1173 = iVar1171 + 1;
				func_72(&uLocal_1311);
				func_488();
			}
			else if (func_70(&uLocal_1311) > 7f)
			{
				if (!func_36(iVar1163, 16) && !func_36(iVar1163, 64))
				{
					func_60(0);
					func_62(&(uLocal_1250[1]), Global_35, func_61("RSP_WAIT_A", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_39(&uLocal_1165, 16);
				}
				else if (!func_36(iVar1163, 32) && !func_36(iVar1163, 64))
				{
					func_60(0);
					func_62(&(uLocal_1250[1]), Global_35, func_61("RSP_WAIT_B", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_39(&uLocal_1165, 32);
				}
				else if (!func_36(iVar1163, 64))
				{
					func_62(Global_35, &(uLocal_1250[1]), func_61("PLAYER_RSP_NEG", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_1207 = 1;
					iLocal_1029 = 1;
					func_55(Local_1356[0], 0);
					func_186(Local_1399[0], 0, 0);
					func_186(Local_1399[1], 0, 0);
					iLocal_1209 = 0;
					uLocal_1173 = iVar1171 + 1;
					func_72(&uLocal_1311);
					func_488();
				}
				func_246(&uLocal_1311);
			}
			break;
		case 3:
			if (has_anim_event_fired(&(uLocal_1250[1]), 1587094173))
			{
				if (func_36(iVar1163, 256))
				{
					func_62(&(uLocal_1250[1]), Global_35, func_61("RETURNED_B", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else if (iVar1207 == 1)
				{
					func_62(&(uLocal_1250[1]), Global_35, func_61("FOLLOW_POS", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else if (func_97(Local_729.f_3, 5) == 1 || iVar1009 == 0)
				{
					func_62(&(uLocal_1250[1]), Global_35, func_61("FOLLOW_NEG", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else if (iVar1009 == 1 && func_97(Local_729.f_3, 5) != 1)
				{
					func_62(&(uLocal_1250[1]), Global_35, func_61("FOLLOW_NEG_IGNORED", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				uLocal_1173 = iVar1171 + 1;
			}
			else if (func_36(iVar1162, 1))
			{
				uLocal_1173 = iVar1171 + 1;
			}
			break;
		case 4:
			if (!func_36(iVar1162, 134217728))
			{
				if ((has_anim_event_fired(&(uLocal_1250[1]), -1803425246) || !func_487(&(uLocal_1250[1]), 1435919172)) || func_36(iVar1162, 1))
				{
					func_39(&uLocal_1164, 134217728);
				}
				return false;
			}
			if (func_43(&(uLocal_1250[1]), 0, 1))
			{
			}
			clear_sequence_task(&iLocal_1290);
			open_sequence_task(&iLocal_1290);
			task_follow_nav_mesh_to_coord(0, -318.0562f, 816.743f, 120.8743f, 1f, -1, 0.5f, 0, 40000f);
			if (!func_329(vLocal_1502))
			{
				task_go_straight_to_coord(0, vLocal_1502, 1f, -1, 1193033728, 0.1f, 0);
			}
			else
			{
				vLocal_1502 = { -315.339f, 817.324f, 121.992f };
				task_go_straight_to_coord(0, -315.339f, 817.324f, 121.992f, 1f, -1, 1193033728, 0.1f, 0);
			}
			task_stand_still(0, -1);
			func_46(&(uLocal_1250[1]), &iLocal_1290, 0, 0, 1, 1);
			func_49(iLocal_1271[1]);
			func_489(&(uLocal_1250[1]), iLocal_1271[1], -89429847, -981020806, 0, "RE_INTER_STRANGER");
			func_90();
			return true;
	}
	return false;
}

bool func_229(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	request_model(iParam0, false);
	return has_model_loaded(iParam0);
}

bool func_230(int iParam0)
{
	iVar0 = func_490(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

void func_231(int iParam0)
{
	if (!func_277(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_46 = 1;
}

bool func_232(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_233(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_234(char* sParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	func_74(sParam0, iParam1, 0, 1, sParam2, sParam3, sParam4, sParam5, iParam6);
}

int func_235(int iParam0, int iParam1)
{
	func_491(iParam0, 0, 0);
	if (func_492(iParam0))
	{
		iVar0 = _0xf7424890e4a094c0(iParam0, iParam1);
		if (does_entity_exist(iVar0))
		{
			return iVar0;
		}
	}
	return 0;
}

void func_236(int* iParam0, char* sParam1)
{
	if (func_182(iParam0->f_6) && !is_string_null_or_empty(sParam1))
	{
		func_493(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_425(iParam0, 1);
}

int func_237()
{
	if (!func_36(iVar1162, 2048))
	{
		if (func_43(&(uLocal_1250[1]), 0, 1))
		{
			func_494(uLocal_1250[1], -316.9612f, 816.8439f, 121.9748f, 1082130432);
			fVar0 = func_67(&(uLocal_1250[1]), vLocal_1502, 1);
			if (fVar0 < 3.2f)
			{
				if (!_does_volume_exist(iVar1245))
				{
					uLocal_1247 = _0x0eb78c2b156635b1(-1612834106, -315.057f, 817.586f, 122.375f, 0f, 0f, 99.473f, 1.63f, 0.75f, 2.895f);
				}
			}
			if (fVar0 < 0.5f && func_268(&(uLocal_1250[1]), 1, 1) < 5f)
			{
				if (iVar1207 == 0)
				{
					iLocal_1209 = 1;
					func_55(Local_1356[0], 0);
					func_186(Local_1399[0], 0, 0);
					func_186(Local_1399[1], 0, 0);
				}
				if (iVar1026 == 3)
				{
					return 0;
				}
				if (_is_anim_scene_loaded(iVar1010, true, false))
				{
					if (_0x23e33cb9f4a3f547(iVar1010, "PBL_NORMAL"))
					{
						if (iVar1009 == 1)
						{
							_set_entity_coords_and_heading(&(uLocal_1250[0]), -312.6304f, 817.5388f, 121.02f, -10f, false, true, true);
						}
						set_ped_config_flag(&(uLocal_1250[1]), 314, true);
						iLocal_14 = 1;
						Local_41.f_3 = Global_35;
						start_anim_scene(iVar1010);
						_set_anim_scene_playback_list_bool(iVar1010, "PBL_NORMAL", true);
						set_anim_scene_bool(iVar1010, "bool_idle_door", false, false);
						func_39(&uLocal_1164, 2048);
						func_58(iVar1245);
						func_41(&uLocal_1165, -2147483648);
						func_186(Local_1399[0], 0, 0);
						func_186(Local_1399[1], 0, 0);
						iLocal_1215 = 0;
						return 1;
					}
					else
					{
						_0xdf7b5144e25cd3fe(iVar1010, "PBL_NORMAL");
					}
				}
				else
				{
					load_anim_scene(iVar1010);
				}
			}
			else if (func_67(&(uLocal_1250[1]), vLocal_1502, 1) >= 0.5f && func_268(&(uLocal_1250[1]), 1, 1) < 5f)
			{
				if (!func_487(&(uLocal_1250[1]), 1435919172))
				{
				}
				if (!func_487(&(uLocal_1250[1]), 1435919172) || (func_487(&(uLocal_1250[1]), 242628503) && get_sequence_progress(&(uLocal_1250[1])) >= 2))
				{
					task_go_straight_to_coord(&(uLocal_1250[1]), vLocal_1502, 1f, 10, 1193033728, 0.1f, 0);
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_238()
{
	fVar0 = func_67(&(uLocal_1250[1]), vLocal_1502, 1);
	if (func_43(Global_35, 0, 1) && func_43(&(uLocal_1250[1]), 0, 1))
	{
		if (fVar0 < 1.2f && func_268(&(uLocal_1250[1]), 1, 1) < 3f)
		{
			return 1;
		}
	}
	return 0;
}

void func_239()
{
	_uilog_clear_cached_objective();
}

void func_240(vector3 vParam0, int* iParam3, int iParam4, int iParam5, char* sParam6, int iParam7)
{
	if (does_blip_exist(*iParam3))
	{
		remove_blip(iParam3);
	}
	*iParam3 = _blip_add_for_coord(iParam4, vParam0);
	if (iParam7 != 0)
	{
		_blip_set_modifier(*iParam3, iParam7);
	}
	if (iParam5 != 0)
	{
		set_blip_sprite(*iParam3, iParam5, true);
	}
	if (!is_string_null_or_empty(sParam6))
	{
		set_blip_name_from_text_file(*iParam3, sParam6);
	}
}

void func_241(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_491(iParam0, 0, 0);
	if (func_492(iParam0))
	{
		door_system_set_open_ratio(iParam0, iParam2, iParam6);
		if (fParam5 > 0f)
		{
			door_system_set_automatic_rate(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_495(iParam0, iParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_496(iParam0, 1);
			}
			else
			{
				func_497(iParam0, 1);
			}
		}
		else
		{
			func_498(iParam0, 1);
		}
		if (bParam7)
		{
			_0x276aaf0f1c7f2494(iParam0, 1);
		}
	}
	else if (func_499())
	{
	}
	else if (network_is_in_session())
	{
	}
}

void func_242()
{
	func_236(Local_1399[0], "INTERACT_QUESTION");
	func_236(Local_1399[1], "RE_INTER_ANTAGONIZE");
}

void func_243()
{
	if (func_36(iVar1162, 262144) || !func_43(&(uLocal_1250[1]), 0, 1))
	{
		return;
	}
	if (!func_36(iVar1162, 32768))
	{
		if (_does_anim_scene_exist(Local_1012.f_1))
		{
			if (_get_anim_scene_entity_matrix(Local_1012.f_1, "player", &Local_1490, false, 0, 2))
			{
				if (!func_329(Local_1490) && !func_329(Local_1490.f_3))
				{
					Local_923.f_7 = { Local_1490 };
					Local_923.f_10 = Local_1490.f_3.f_2;
					func_39(&uLocal_1164, 32768);
				}
			}
		}
	}
	switch (iVar1169)
	{
		case 0:
			if (iVar1202 == 1)
			{
				if (iVar1009 == 0)
				{
					if (func_207(Global_35, iVar1227, 1, 0) && !func_185(Global_36, -314.6801f, 817.1199f, 120.9763f, -314.8636f, 818.1626f, 120.9763f))
					{
						if (func_500())
						{
							request_model(iVar1487, false);
							func_39(&uLocal_1164, 8);
							func_48();
							_0xff745b0346e19e2c(1361896662);
							set_anim_scene_entity(Local_1012.f_1, "PLAYER", Global_35, 0);
							set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
							set_current_ped_weapon(Global_35, -1569615261, true, 1, false, false);
							_0xcffc3eccd7a5cceb(player_id(), -1569615261, 0);
							_0xcffc3eccd7a5cceb(player_id(), -1569615261, 1);
							task_follow_nav_mesh_to_coord(Global_35, Local_923.f_7, 1f, 20000, 0.25f, 512, Local_923.f_10);
							func_501(Global_35, Local_923.f_7, Local_923.f_10);
							func_39(&uLocal_1164, 524288);
							uLocal_1171 = iVar1169 + 1;
							_0x18ff3110cf47115d(&(uLocal_1250[0]), 7, 1);
						}
					}
				}
				else if (iVar1009 == 1)
				{
					uLocal_1171 = iVar1169 + 1;
					_0x18ff3110cf47115d(&(uLocal_1250[0]), 7, 1);
				}
			}
			break;
		case 1:
			if (get_script_task_status(Global_35, 713668775, true) != 1)
			{
				if (iVar1009 == 0)
				{
					if (_is_anim_scene_loaded(Local_1012.f_1, true, false))
					{
						set_anim_scene_bool(Local_1012.f_1, "dead_bool", true, false);
					}
					if (!is_any_speech_playing(Global_35))
					{
						func_62(Global_35, &(uLocal_1250[1]), func_61("DISPOSE_A", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					func_39(&uLocal_1165, 4096);
					_0xff745b0346e19e2c(1361896662);
					_0x18ff3110cf47115d(&(uLocal_1250[0]), 7, 1);
					_0x18ff3110cf47115d(&(uLocal_1250[0]), 2, 1);
					uLocal_1171 = iVar1169 + 1;
				}
				else if (iVar1009 == 1)
				{
					_0xff745b0346e19e2c(1361896662);
					uLocal_1171 = iVar1169 + 1;
				}
			}
			break;
		case 2:
			if (iVar1009 == 0)
			{
				if (_does_anim_scene_exist(Local_1012.f_1))
				{
					if (_is_anim_scene_finished(Local_1012.f_1, false))
					{
						set_player_control(get_player_index(), true, 0, false);
						_0x18ff3110cf47115d(&(uLocal_1250[0]), 7, 1);
						_0x2208438012482a1a(&(uLocal_1250[0]), false, false);
						_0x2208438012482a1a(Global_35, false, false);
						remove_anim_scene_entity(Local_1012.f_1, "PED_MAN", &(uLocal_1250[0]));
						remove_anim_scene_entity(Local_1012.f_1, "PLAYER", Global_35);
						func_49(iLocal_1271[0]);
						func_39(&uLocal_1164, 262144);
						_0x735662994e60a710(&(uLocal_1250[0]), 1);
						_0x91bab9e064f036cd(&(uLocal_1250[0]), 0.01f);
						func_231(84);
						func_233(Global_1935630, 4);
						func_87(0);
						set_ped_can_ragdoll(&(uLocal_1250[0]), true);
						clear_ped_secondary_task(&(uLocal_1250[1]));
						_delete_anim_scene(Local_1012.f_1);
						iLocal_1208 = 1;
					}
				}
			}
			else if (iVar1009 == 1)
			{
				if (!func_36(iVar1162, 8))
				{
					_0x18ff3110cf47115d(&(uLocal_1250[0]), 7, 1);
					if (_0x61914209c36efddb(&(uLocal_1250[0])) == 4 || func_63(Global_35, &(uLocal_1250[0])))
					{
						func_39(&uLocal_1164, 524288);
						func_39(&uLocal_1164, 8);
						func_48();
						func_231(84);
						func_233(Global_1935630, 4);
						func_87(0);
						_delete_anim_scene(Local_1012.f_1);
						if (!is_any_speech_playing(Global_35))
						{
							func_62(Global_35, &(uLocal_1250[1]), func_61("DISPOSE_A", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						func_39(&uLocal_1165, 4096);
						func_49(iLocal_1271[0]);
						func_39(&uLocal_1164, 262144);
						_0x735662994e60a710(&(uLocal_1250[0]), 1);
						_0x91bab9e064f036cd(&(uLocal_1250[0]), 0.1f);
						clear_ped_secondary_task(&(uLocal_1250[1]));
						set_ped_can_ragdoll(&(uLocal_1250[0]), true);
						freeze_entity_position(&(uLocal_1250[0]), false);
						iLocal_1208 = 1;
					}
				}
			}
			break;
	}
}

void func_244()
{
	if (_does_volume_exist(iVar1227) && !is_entity_in_volume(Global_35, iVar1227, true, 0))
	{
		return;
	}
	fVar0 = func_59(Global_35, &(uLocal_1250[0]), 1, 1);
	if (fVar0 < fVar1186)
	{
		fLocal_1188 = fVar0;
	}
	if (func_502())
	{
		return;
	}
	if (iVar1009 == 0)
	{
		if (!func_36(iVar1166, 4096))
		{
			if ((!func_185(Global_36, -314.6801f, 817.1199f, 120.9763f, -314.8636f, 818.1626f, 120.9763f) && !is_any_speech_playing(Global_35)) && has_entity_clear_los_to_entity(Global_35, &(uLocal_1250[0]), 17))
			{
				func_39(&uLocal_1168, 4096);
				func_62(Global_35, &(uLocal_1250[1]), func_61("SEES_BODY", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
		}
	}
	if (((((((!func_36(iVar1162, 8) && !func_36(iVar1163, 65536)) && func_36(iVar1164, 1073741824)) && func_245(-4f, 1, 0, 0)) && !func_503(&(uLocal_1250[1]), 0)) && !is_any_speech_playing(&(uLocal_1250[1]))) && iVar1026 == 34) && !func_36(iVar1164, 524288))
	{
		if ((fVar0 - fVar1186) > 1.5f && (func_185(Global_36, -314.6801f, 817.1199f, 120.9763f, -314.8636f, 818.1626f, 120.9763f) || !has_entity_clear_los_to_entity(&(uLocal_1250[1]), Global_35, 17)))
		{
			if (func_43(iVar1251, 0, 1) && (has_entity_clear_los_to_entity(&(uLocal_1250[1]), iVar1251, 17) || has_entity_clear_los_to_entity(iVar1251, &(uLocal_1250[1]), 17)))
			{
				return;
			}
			func_62(&(uLocal_1250[1]), Global_35, func_61("NO_HELP", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			if (iVar1009 == 0)
			{
				task_play_anim(&(uLocal_1250[1]), &(Local_547[51]), Local_547[51]->f_1, 4f, -4f, -1, 16, 0f, false, 1048576, false, 0, false);
			}
			else
			{
				task_play_anim(&(uLocal_1250[1]), &(Local_547[55]), Local_547[55]->f_1, 4f, -4f, -1, 16, 0f, false, 1048576, false, 0, false);
			}
			func_39(&uLocal_1165, 65536);
		}
	}
	switch (iVar1160)
	{
		case 0:
			if (((((_0x8d81e7824b7753f7(iVar1010, "Base_Idle", 1) && func_245(-4f, 1, 0, 0)) && has_entity_clear_los_to_entity(&(uLocal_1250[1]), Global_35, 17)) && !func_503(&(uLocal_1250[1]), 0)) && !is_any_speech_playing(&(uLocal_1250[1]))) && iVar1026 == 34)
			{
				if (_0x23e33cb9f4a3f547(iVar1010, "PBL_DIALOGUE_01"))
				{
					_set_anim_scene_playback_list_bool(iVar1010, "PBL_DIALOGUE_01", true);
					set_anim_scene_bool(iVar1010, "bool_base_idle", true, false);
				}
				else
				{
					_0xdf7b5144e25cd3fe(iVar1010, "PBL_DIALOGUE_01");
					return;
				}
				if (!func_68(&uLocal_1296))
				{
					func_69(&uLocal_1296, 0);
				}
				else
				{
					func_246(&uLocal_1296);
				}
				uLocal_1162 = iVar1160 + 1;
			}
			break;
		case 1:
			if (func_504(&uLocal_1296) > 1f)
			{
				set_anim_scene_bool(iVar1010, "bool_base_idle", false, false);
			}
			if (_0x8d81e7824b7753f7(iVar1010, "Base_Idle", 1) && iVar1202 == 0)
			{
				iLocal_1204 = 1;
			}
			if (((((has_entity_clear_los_to_entity(&(uLocal_1250[1]), Global_35, 17) && func_504(&uLocal_1296) > 2f) && !func_503(&(uLocal_1250[1]), 0)) && !is_any_speech_playing(Global_35)) && !is_any_speech_playing(&(uLocal_1250[1]))) && iVar1026 == 34)
			{
				if (_0x8d81e7824b7753f7(iVar1010, "Base_Idle", 1) && !func_36(iVar1162, 524288))
				{
					func_246(&uLocal_1296);
					uLocal_1162 = iVar1160 + 1;
				}
			}
			break;
		case 2:
			if (((((has_entity_clear_los_to_entity(&(uLocal_1250[1]), Global_35, 17) && func_504(&uLocal_1296) > 3f) && !func_503(&(uLocal_1250[1]), 0)) && !is_any_speech_playing(Global_35)) && !is_any_speech_playing(&(uLocal_1250[1]))) && iVar1026 == 34)
			{
				if (_0x8d81e7824b7753f7(iVar1010, "Base_Idle", 1) && !func_36(iVar1162, 524288))
				{
					if (_0x23e33cb9f4a3f547(iVar1010, "PBL_DIALOGUE_02"))
					{
						_set_anim_scene_playback_list_bool(iVar1010, "PBL_DIALOGUE_02", true);
						set_anim_scene_bool(iVar1010, "bool_base_idle", true, false);
					}
					else
					{
						_0xdf7b5144e25cd3fe(iVar1010, "PBL_DIALOGUE_02");
						return;
					}
				}
				else
				{
					return;
				}
				func_246(&uLocal_1296);
				uLocal_1162 = iVar1160 + 1;
			}
			break;
		case 3:
			if (func_70(&uLocal_1296) > 1f)
			{
				iLocal_1204 = 1;
				set_anim_scene_bool(iVar1010, "bool_base_idle", false, false);
				func_246(&uLocal_1296);
				uLocal_1162 = iVar1160 + 1;
			}
			break;
		case 4:
			if (((((((((iVar1009 == 0 && func_504(&uLocal_1296) > 6f) && func_245(-4f, 1, 0, 0)) && !func_36(iVar1162, 524288)) && has_entity_clear_los_to_entity(&(uLocal_1250[1]), Global_35, 17)) && !func_503(&(uLocal_1250[1]), 0)) && !is_any_speech_playing(&(uLocal_1250[1]))) && !is_any_speech_playing(Global_35)) && func_36(iVar1166, 16384)) && iVar1026 == 34)
			{
				if (_0x23e33cb9f4a3f547(iVar1010, "PBL_DIALOGUE_03"))
				{
					_set_anim_scene_playback_list_bool(iVar1010, "PBL_DIALOGUE_03", true);
					set_anim_scene_bool(iVar1010, "bool_base_idle", true, false);
				}
				else
				{
					_0xdf7b5144e25cd3fe(iVar1010, "PBL_DIALOGUE_03");
					return;
				}
				func_246(&uLocal_1296);
				uLocal_1162 = iVar1160 + 1;
			}
			else if ((iVar1009 == 1 && !is_any_speech_playing(Global_35)) && func_36(iVar1166, 16384))
			{
				func_246(&uLocal_1296);
				uLocal_1162 = iVar1160 + 1;
			}
			break;
		case 5:
			if (func_70(&uLocal_1296) > 2f)
			{
				set_anim_scene_bool(iVar1010, "bool_base_idle", false, false);
				func_246(&uLocal_1296);
				uLocal_1162 = iVar1160 + 1;
			}
			break;
		case 6:
			if (!func_36(iVar1162, 262144))
			{
				if (((((func_70(&uLocal_1296) > 10f && func_245(-4f, 1, 0, 0)) && has_entity_clear_los_to_entity(&(uLocal_1250[1]), Global_35, 17)) && !func_503(&(uLocal_1250[1]), 0)) && !is_any_speech_playing(&(uLocal_1250[1]))) && iVar1026 == 34)
				{
					if ((func_50(Global_35, iVar1227, 0, 1) && func_36(iVar1163, 512)) && func_36(iVar1163, 1024))
					{
						func_62(Global_35, &(uLocal_1250[1]), func_61("ILO_QUIT", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_1028 = 2;
						func_186(Local_1399[0], 0, 0);
						func_186(Local_1399[1], 0, 0);
						_0x18ff3110cf47115d(&(uLocal_1250[0]), 2, 0);
						_0x18ff3110cf47115d(&(uLocal_1250[0]), 7, 0);
						if (func_36(iVar1166, 16777216))
						{
							_uiprompt_remove_group(func_40(Local_729.f_162), 1899245582);
							func_41(&uLocal_1168, 16777216);
						}
						func_42(&(Local_729.f_162), 1, 1);
						func_42(&(Local_729.f_163), 1, 1);
						func_463(Local_729.f_162, 0, 1);
						uLocal_1162 = iVar1160 + 1;
					}
					if (!func_185(Global_36, -314.6801f, 817.1199f, 120.9763f, -314.8636f, 818.1626f, 120.9763f))
					{
						if (!func_36(iVar1163, 512))
						{
							func_62(&(uLocal_1250[1]), Global_35, func_61("ROOM_LOITER_A", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							task_play_anim(&(uLocal_1250[1]), &(Local_547[38]), Local_547[38]->f_1, 4f, -4f, -1, 67109392, 0f, false, 1245184, false, "UpperbodyFixup_filter", false);
							func_39(&uLocal_1165, 512);
						}
						else if (!func_36(iVar1163, 1024))
						{
							func_62(&(uLocal_1250[1]), Global_35, func_61("ROOM_LOITER_B", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							task_play_anim(&(uLocal_1250[1]), &(Local_547[39]), Local_547[39]->f_1, 4f, -4f, -1, 67109392, 0f, false, 1245184, false, "UpperbodyFixup_filter", false);
							func_39(&uLocal_1165, 1024);
						}
						func_246(&uLocal_1296);
					}
				}
			}
			break;
	}
}

bool func_245(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && does_entity_exist(iParam2))
	{
		if (!func_503(iParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_505(fParam0))
	{
		return false;
	}
	return true;
}

void func_246(var uParam0)
{
	func_467(uParam0, 0f);
}

void func_247()
{
	if (func_36(iVar1162, 4194304))
	{
		return;
	}
	if (!_does_volume_exist(iVar1232))
	{
		func_221(&uLocal_1234, Local_923.f_70, Local_923.f_73, Local_923.f_76, "volDisposal");
		iLocal_1275 = _0xa6ef0c54a3443e70(1247852480, iVar1232);
		func_39(&uLocal_1164, 4194304);
	}
}

void func_248(int iParam0, bool bParam1, bool bParam2)
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

void func_249()
{
	if (!func_36(iVar1162, 256))
	{
		Local_1012.f_3 = _create_anim_scene(Local_1012.f_7, 0, "PBL_NORMAL", false, true);
		if (!does_entity_exist(Local_668[2]->f_8))
		{
			if (iVar1009 == 0)
			{
				Local_668[2]->f_8 = create_object(Local_668[2]->f_7, -311.4383f, 817.4914f, 121.6566f, true, true, false, false, true);
				set_entity_rotation(Local_668[2]->f_8, 0f, 0f, 0.9711f, 2, true);
				set_entity_coords(Local_668[2]->f_8, -310.9387f, 816.209f, 120.9801f, true, false, true, true);
			}
			else if (iVar1009 == 1)
			{
				Local_668[2]->f_8 = create_object(Local_668[2]->f_7, -311.4383f, 817.4914f, 121.6566f, true, true, false, false, true);
				set_entity_rotation(Local_668[2]->f_8, 0f, 0f, 0.9711f, 2, true);
				set_entity_coords(Local_668[2]->f_8, -310.9387f, 816.209f, 120.9801f, true, false, true, true);
			}
		}
		set_anim_scene_origin(Local_1012.f_3, Local_923, 0f, 0f, Local_923.f_3, 2);
		set_anim_scene_entity(Local_1012.f_3, "PED_HOOKER", &(uLocal_1250[1]), 0);
		set_anim_scene_entity(Local_1012.f_3, "reward", Local_668[2]->f_8, 0);
		set_anim_scene_entity(Local_1012.f_3, "RAG", Local_668[1]->f_8, 0);
		if (!is_string_null_or_empty(Local_1012.f_7))
		{
			if (!_is_anim_scene_loaded(Local_1012.f_3, true, false))
			{
				load_anim_scene(Local_1012.f_3);
			}
		}
		func_39(&uLocal_1164, 256);
	}
}

void func_250()
{
	if ((!func_36(iVar1162, 512) && func_36(iVar1162, 256)) && !is_any_speech_playing(&(uLocal_1250[1])))
	{
		if (_is_anim_scene_started(iVar1010, false))
		{
			if ((iVar1009 == 0 && _0x8d81e7824b7753f7(iVar1010, "base_idle_02", 1)) && !_0x1f0e401031e20146(iVar1010, "PBL_TRANSITION_TO_BED"))
			{
				if (_0x23e33cb9f4a3f547(iVar1010, "PBL_TRANSITION_TO_BED"))
				{
					func_37(&(uLocal_1250[1]), 0);
					iLocal_1028 = 34;
					_set_anim_scene_playback_list_bool(iVar1010, "PBL_TRANSITION_TO_BED", true);
					clear_ped_secondary_task(&(uLocal_1250[1]));
					set_anim_scene_bool(iVar1010, "bool_base_idle_02", true, false);
					func_221(&uLocal_1246, -311.945f, 816.335f, 122.174f, 0f, 0f, 99.999f, 1.581f, 2.337f, 2.589f, "volNavBlocker-Bed");
					if (_does_volume_exist(iVar1244))
					{
						_0x19c7567d2f2287d6(iVar1244, 7);
					}
				}
				else
				{
					_0xdf7b5144e25cd3fe(iVar1010, "PBL_TRANSITION_TO_BED");
				}
			}
			else if ((iVar1009 == 1 && _0x8d81e7824b7753f7(iVar1010, "Base_Idle", 1)) && !_0x1f0e401031e20146(iVar1010, "PBL_TRANSITION_TO_FLOOR"))
			{
				if (_0x23e33cb9f4a3f547(iVar1010, "PBL_TRANSITION_TO_FLOOR"))
				{
					func_37(&(uLocal_1250[1]), 0);
					iLocal_1028 = 34;
					if (does_entity_exist(iVar1285))
					{
						remove_anim_scene_entity(iVar1010, "DOOR", iVar1285);
						set_entity_as_no_longer_needed(&uLocal_1287);
					}
					iLocal_1206 = 0;
					_set_anim_scene_playback_list_bool(iVar1010, "PBL_TRANSITION_TO_FLOOR", true);
					clear_ped_secondary_task(&(uLocal_1250[1]));
					set_anim_scene_bool(iVar1010, "bool_base_idle", true, false);
				}
				else
				{
					_0xdf7b5144e25cd3fe(iVar1010, "PBL_TRANSITION_TO_FLOOR");
				}
			}
		}
		if (func_36(iVar1162, 2) && _0x8d81e7824b7753f7(iVar1010, "idle_cleanup", 1))
		{
			if (_is_anim_scene_loaded(Local_1012.f_3, true, false))
			{
				if (_0x23e33cb9f4a3f547(Local_1012.f_3, "PBL_NORMAL"))
				{
					_set_anim_scene_playback_list_bool(Local_1012.f_3, "PBL_NORMAL", true);
					start_anim_scene(Local_1012.f_3);
					_set_anim_scene_playback_list_bool(Local_1012.f_3, "PBL_NORMAL", true);
					if (_is_anim_scene_started(iVar1010, false))
					{
						_delete_anim_scene(iVar1010);
					}
					func_39(&uLocal_1164, 512);
				}
				else
				{
					_0xdf7b5144e25cd3fe(Local_1012.f_3, "PBL_NORMAL");
				}
			}
			else
			{
				load_anim_scene(Local_1012.f_3);
			}
		}
	}
}

void func_251()
{
	if (!has_model_loaded(iVar1487))
	{
		func_229(iVar1487);
		return;
	}
	vVar0 = { _get_object_offset_from_coords(Local_923.f_27, Local_923.f_30, 1f, 0.25f, 0f) };
	vVar3 = { _get_object_offset_from_coords(Local_923.f_27, Local_923.f_30, -1f, 0.25f, 0f) };
	switch (iVar1172)
	{
		case 0:
			iLocal_1254[0] = func_506(iVar1487, Local_923.f_27, Local_923.f_30, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			task_wander_in_volume(&(iLocal_1254[0]), uVar1234, 6f, 10f, 0);
			set_ped_keep_task(&(iLocal_1254[0]), true);
			uLocal_1174 = iVar1172 + 1;
			break;
		case 1:
			iLocal_1254[1] = func_506(iVar1487, vVar0, Local_923.f_30, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			task_wander_in_volume(&(iLocal_1254[1]), uVar1234, 6f, 10f, 0);
			set_ped_keep_task(&(iLocal_1254[1]), true);
			uLocal_1174 = iVar1172 + 1;
			break;
		case 2:
			iLocal_1254[2] = func_506(iVar1487, vVar3, Local_923.f_30, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			task_wander_in_volume(&(iLocal_1254[2]), uVar1234, 6f, 10f, 0);
			set_ped_keep_task(&(iLocal_1254[2]), true);
			iLocal_1175 = 3;
			func_39(&uLocal_1164, 131072);
			break;
	}
}

void func_252()
{
	if (!_does_volume_exist(iVar1234))
	{
		return;
	}
	if (func_36(iVar1162, 131072))
	{
		return;
	}
	if (!has_model_loaded(iVar1487))
	{
		func_229(iVar1487);
		return;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = create_itemset(true);
	_0x84ccf9a12942c83d(iVar1234, iVar3, 1, 1, iVar1487, 0);
	iVar1 = get_itemset_size(iVar3);
	if (is_itemset_valid(iVar3))
	{
	}
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		if (iVar0 < 3)
		{
			iVar2 = get_ped_index_from_entity_index(_get_entity_from_item(get_indexed_item_in_itemset(iVar0, iVar3)));
			if (!is_entity_dead(iVar2))
			{
			}
			iLocal_1254[iVar0] = iVar2;
			iLocal_1175 = iVar1173 + 1;
		}
		iVar0++;
	}
	destroy_itemset(iVar3);
	if (iVar1 == 0)
	{
		iLocal_1199 = 1;
	}
	else
	{
		func_39(&uLocal_1164, 131072);
	}
}

bool func_253()
{
	if ((func_36(iVar1162, 32) || func_36(iVar1162, 16)) || func_36(iVar1162, 1024))
	{
		return false;
	}
	if (iVar1199 == 0)
	{
		if (_does_volume_exist(iVar1234))
		{
			if (is_entity_in_volume(&(uLocal_1250[0]), iVar1234, false, 0))
			{
				if (!_is_ped_carrying(Global_35))
				{
					_0x18ff3110cf47115d(&(uLocal_1250[0]), 7, 0);
					func_507(29);
					func_49(&iLocal_1275);
					func_69(&uLocal_1329, 0);
					iLocal_1201 = 1;
					func_38(Local_729.f_3, 3, 1);
				}
			}
		}
	}
	if (iVar1199 == 1 && iVar1219 == 0)
	{
		if (func_452(&uLocal_1329, 2f))
		{
			func_508();
			iLocal_1221 = 1;
		}
	}
	if (func_63(Global_35, &(uLocal_1250[0])))
	{
		if (func_68(&uLocal_1326))
		{
			func_72(&uLocal_1326);
		}
		if (iVar1211 == 1)
		{
			func_234("DEADHK_OBJ_04a", 7500, 0, 0, -1, -1, 0);
			iLocal_1213 = 0;
			if (does_blip_exist(&(iLocal_1271[1])))
			{
				func_49(iLocal_1271[1]);
				iLocal_1275 = _0xa6ef0c54a3443e70(1247852480, iVar1232);
			}
		}
		return false;
	}
	else if (func_267(Local_923, 1) > 7f)
	{
		if (!does_blip_exist(&(iLocal_1271[1])) && !func_36(iVar1166, 131072))
		{
			func_489(&(uLocal_1250[1]), iLocal_1271[1], -89429847, -981020806, 0, "RE_INTER_STRANGER");
			if (!func_68(&uLocal_1326))
			{
				func_69(&uLocal_1326, 0);
			}
			func_239();
			if (does_blip_exist(iVar1273))
			{
				remove_blip(&iLocal_1275);
			}
			if (iVar1009 == 0)
			{
				if (does_entity_exist(Local_668[2]->f_8))
				{
					set_entity_coords(Local_668[2]->f_8, -310.9387f, 816.209f, 120.9801f, true, false, true, true);
					_0x67bfced22909834d(Local_668[2]->f_8);
				}
			}
			else if (does_entity_exist(Local_668[2]->f_8))
			{
				set_entity_coords(Local_668[2]->f_8, -311.4391f, 817.3694f, 121.6628f, true, false, true, true);
				set_entity_heading(Local_668[2]->f_8, -175.53f);
				_0x67bfced22909834d(Local_668[2]->f_8);
			}
		}
	}
	if (func_452(&uLocal_1326, 3f))
	{
		func_234("DEADHK_OBJ_05", 7500, 0, 0, -1, -1, 0);
		iLocal_1213 = 1;
		if (((iLocal_15 != 3 && iLocal_15 != 2) && iLocal_15 != 4) && iLocal_15 != 0)
		{
			iLocal_15 = 0;
		}
	}
	if ((_does_volume_exist(iVar1227) && is_entity_in_volume(Global_35, iVar1227, true, 0)) && _is_ped_carrying(Global_35))
	{
		return false;
	}
	if (!func_509(&(uLocal_1250[1]), 1116471296, -1082130432, -1082130432, -1082130432))
	{
		return false;
	}
	if (func_267(Local_923, 1) < 7f && _is_ped_carrying(Global_35))
	{
		return false;
	}
	if (func_267(Local_923, 1) > 7f)
	{
		return false;
	}
	if (_does_volume_exist(iVar1227) && is_entity_in_volume(Global_35, iVar1227, true, 0))
	{
		return true;
	}
	return false;
}

void func_254(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	iVar0 = get_blip_from_entity(iParam0);
	func_49(&iVar0);
}

void func_255()
{
	if (iVar1019 == 1)
	{
		return;
	}
	if (iVar1210 == 1)
	{
		return;
	}
	if (!does_entity_exist(&(uLocal_1250[0])))
	{
		return;
	}
	switch (iVar1178)
	{
		case 0:
			Local_41.f_3 = &uLocal_1250[0];
			_0x66f9eb44342bb4c5(iVar1251, &Local_41);
			if (_does_anim_scene_exist(iVar1018))
			{
				_delete_anim_scene(iVar1018);
			}
			vVar0 = { get_entity_coords(&(uLocal_1250[0]), false, false) };
			if (!func_329(vVar0))
			{
				func_39(&uLocal_1164, 268435456);
				set_entity_coords(iVar1251, vVar0.x, vVar0.y, vVar0.z, true, false, true, true);
				_task_flee_from_coord(iVar1251, vVar0, 0f, 0f, 0f, 6f, -1, 384, 1f, 0);
				iLocal_1180 = iVar1178 + 1;
			}
			break;
		case 1:
			_0x66f9eb44342bb4c5(iVar1251, &Local_41);
			if (func_59(iVar1251, &(uLocal_1250[0]), 1, 1) > 5f)
			{
				vVar0 = { get_entity_coords(&(uLocal_1250[0]), true, false) };
				open_sequence_task(&iLocal_1290);
				task_follow_nav_mesh_to_coord(0, vVar0, 1f, -1, 1f, 526336, 40000f);
				task_turn_ped_to_face_coord(0, vVar0, 5000);
				func_46(iVar1251, &iLocal_1290, 0, 0, 1, 1);
				iLocal_1180 = iVar1178 + 1;
			}
			break;
		case 2:
			if ((get_script_task_status(iVar1251, 242628503, true) == 1 && get_sequence_progress(iVar1251) >= 1) || !func_487(iVar1251, 1435919172))
			{
				if (func_510(iVar1251, vVar0, 0.5f) || !func_487(iVar1251, 1435919172))
				{
					func_511(iVar1251, 1546182539, -1, 1, 0, -1082130432);
					iLocal_1180 = iVar1178 + 1;
				}
			}
			break;
		case 3:
			_0x66f9eb44342bb4c5(iVar1251, &Local_41);
			if (!func_68(&uLocal_1320))
			{
				if (func_59(iVar1251, Global_35, 1, 1) < 8f)
				{
					func_60(0);
					func_62(iVar1251, Global_35, func_61("KNIFE", 1), 0, -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					func_69(&uLocal_1320, 0);
					_0xa3a9299c4f2adb98(iVar1251);
					func_39(&uLocal_1166, -2147483648);
				}
			}
			else if (func_70(&uLocal_1320) > 1f && !is_any_speech_playing(iVar1251))
			{
				iLocal_1030 = 1;
				func_512();
				func_186(Local_1434[0], 1, 0);
				func_186(Local_1434[1], 1, 0);
				func_246(&uLocal_1320);
				iLocal_1180 = iVar1178 + 1;
			}
			break;
		case 4:
			if (!func_36(iVar1164, 134217728))
			{
				if (func_59(iVar1251, Global_35, 1, 1) < 6f)
				{
					if (((func_70(&uLocal_1320) > 1f && !is_any_speech_playing(iVar1251)) && !is_any_speech_playing(Global_35)) && has_entity_clear_los_to_entity(iVar1251, Global_35, 17))
					{
						func_62(iVar1251, Global_35, "LAW_INTERACT_APPROACH", 0, -1082130432, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_246(&uLocal_1320);
						func_39(&uLocal_1166, 134217728);
					}
				}
			}
			if (((func_70(&uLocal_1320) > 5f && !is_any_speech_playing(iVar1251)) && !is_any_speech_playing(Global_35)) && !func_68(&uLocal_1335))
			{
				if (func_36(iVar1163, 536870912) && !func_36(iVar1163, 2097152))
				{
					func_39(&uLocal_1165, 2097152);
				}
				_0x18ff3110cf47115d(&(uLocal_1250[0]), 7, 1);
				_0x18ff3110cf47115d(&(uLocal_1250[0]), 2, 1);
				_0x18ff3110cf47115d(&(uLocal_1250[0]), 12, 1);
				open_sequence_task(&iLocal_1291);
				task_pickup_carriable_entity(0, &(uLocal_1250[0]));
				task_follow_nav_mesh_to_coord(0, -277.4047f, 817.8478f, 118.0183f, 1f, -1, 1f, 0, 40000f);
				task_place_carried_entity_at_coord(0, &(uLocal_1250[0]), -277.4047f, 817.8478f, 118.0183f, 1f, 1);
				func_513(0, -1273821262, -276.877f, 814.5742f, 118.257f, -154.75f, 10000, 1, 0, 0, -1082130432);
				task_follow_nav_mesh_to_coord(0, -276.115f, 809.8058f, 118.38f, 1f, -1, 1f, 0, 40000f);
				task_wander_standard(0, 40000f, 0);
				func_46(iVar1251, &iLocal_1291, 0, 0, 0, 1);
				iLocal_1180 = iVar1178 + 1;
			}
			break;
		case 5:
			if (func_36(iVar1163, 536870912) && !func_36(iVar1163, 2097152))
			{
				if (func_43(iVar1251, 0, 1))
				{
					func_39(&uLocal_1165, 2097152);
					task_perform_sequence_from_progress(iVar1251, uVar1289, uVar1182, uVar1182);
				}
			}
			if (func_43(iVar1251, 0, 1) && func_63(iVar1251, &(uLocal_1250[0])))
			{
				if (iVar1168 == 0)
				{
					iLocal_1170 = add_shocking_event_for_entity(-1130398329, iVar1251, 0f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
				}
				if (!func_36(iVar1163, 268435456) && !func_68(&uLocal_1335))
				{
					iVar3 = _0xf4860514ad354226(iVar1168, get_entity_coords(iVar1251, true, false), 8f, &uLocal_1265);
					if (((iVar3 >= 2 || (iVar3 == 1 && func_268(iVar1251, 1, 1) < 8f)) && !is_any_speech_playing(Global_35)) && !is_any_speech_playing(iVar1251))
					{
						func_39(&uLocal_1165, 268435456);
						func_62(iVar1251, Global_35, func_61("WALKBACK_A", 1), 0, -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					}
				}
			}
			else if (iVar1168 != 0)
			{
				func_89(&iLocal_1170);
			}
			if (((((!func_36(iVar1163, 67108864) && (get_script_task_status(iVar1251, 242628503, true) == 1 || get_script_task_status(iVar1251, 1418067348, true) == 1)) && get_sequence_progress(iVar1251) >= 2) && !func_63(iVar1251, &(uLocal_1250[0]))) && !func_68(&uLocal_1335)) && !is_any_speech_playing(iVar1251))
			{
				func_39(&uLocal_1165, 67108864);
				func_60(0);
				func_62(iVar1251, Global_35, func_61("DROP_BODY", 1), 0, -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
			}
			if ((get_script_task_status(iVar1251, 242628503, true) == 1 || get_script_task_status(iVar1251, 1418067348, true) == 1) && get_sequence_progress(iVar1251) == 3)
			{
				_0x18ff3110cf47115d(&(uLocal_1250[0]), 7, 0);
				_0x18ff3110cf47115d(&(uLocal_1250[0]), 2, 0);
				if (func_63(iVar1251, &(uLocal_1250[0])))
				{
					_0xed00d72f81cf7278(iVar1251, 0, 0);
					_0x18ff3110cf47115d(&(uLocal_1250[0]), 7, 0);
					_0x18ff3110cf47115d(&(uLocal_1250[0]), 2, 0);
					_0x18ff3110cf47115d(&(uLocal_1250[0]), 12, 0);
				}
			}
			if ((((get_script_task_status(iVar1251, 242628503, true) == 1 || get_script_task_status(iVar1251, 1418067348, true) == 1) && get_sequence_progress(iVar1251) >= 5) && !func_63(iVar1251, &(uLocal_1250[0]))) && !func_68(&uLocal_1335))
			{
				func_455();
				set_blocking_of_non_temporary_events(iVar1251, false);
				func_263(iVar1251, 1088421888, 0, 0);
				func_264(&iLocal_1253, Local_1356[1], &Local_1434, 1, 1);
				_0xe737d5f14304a2ec(iVar1251, get_player_index(), 120000);
				_0xa3db37edf9a74635(player_id(), iVar1251, 7, 0, 1);
				func_302(iVar1467, 0, 1, 0, 0);
				iLocal_1180 = iVar1178 + 1;
			}
			break;
		case 6:
			break;
		case 7:
			break;
	}
}

void func_256(int iParam0, int iParam1)
{
	if (func_257(iParam0, 1, 1))
	{
		func_39((*Global_1955500)[iParam0], iParam1);
	}
}

bool func_257(int iParam0, bool bParam1, bool bParam2)
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

void func_258(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_182((*uParam0)[iVar0]->f_6))
			{
				if (!bParam4 && is_bit_set(uParam0[iVar0], 11))
				{
				}
				else
				{
					func_42(&((*uParam0)[iVar0]->f_6), 1, 1);
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

void func_259(int* iParam0, var uParam1)
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
	func_514(iParam0, uParam1, 1);
	func_258(uParam1, 0, 1, 1, 0);
	_copy_memory(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		_copy_memory((*uParam1)[iVar0], &Var22, 17);
		iVar0++;
	}
}

void func_260()
{
	if ((((Local_729.f_46 == 0 && func_36(iVar1163, 8)) && has_entity_clear_los_to_entity(&(uLocal_1250[1]), Global_35, 17)) && !func_185(Global_36, -314.6801f, 817.1199f, 120.9763f, -314.8636f, 818.1626f, 120.9763f)) && func_207(Global_35, iVar1227, 1, 0))
	{
		if (((func_70(&uLocal_1311) > 9f && func_245(-3f, 1, 0, 0)) && !is_any_speech_playing(Global_35)) && !is_any_speech_playing(&(uLocal_1250[1])))
		{
			if (!func_36(iVar1163, 8192))
			{
				func_62(&(uLocal_1250[1]), Global_35, func_61("END_LOITER_A", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_39(&uLocal_1165, 8192);
				func_246(&uLocal_1311);
			}
			else if (!func_36(iVar1163, 16384))
			{
				if (func_469(Local_1012.f_3))
				{
					func_62(&(uLocal_1250[1]), Global_35, func_61("END_LOITER_B", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_39(&uLocal_1165, 16384);
					func_246(&uLocal_1311);
				}
			}
			else if (!func_36(iVar1163, 32768))
			{
				func_62(&(uLocal_1250[1]), Global_35, func_61("END_LOITER_C", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_39(&uLocal_1165, 32768);
				func_246(&uLocal_1311);
			}
		}
	}
}

void func_261()
{
	if ((!Local_729.f_46 || func_36(iVar1162, 8388608)) || func_36(iVar1163, 1))
	{
		return;
	}
	if (!is_entity_in_volume(Global_35, iVar1233, true, 0) && !func_36(iVar1162, 4))
	{
		if (get_script_task_status(&(uLocal_1250[1]), 474215631, true) == 1 || (get_script_task_status(&(uLocal_1250[1]), 242628503, true) == 1 && get_sequence_progress(&(uLocal_1250[1])) == 1))
		{
			func_45(0);
			func_39(&uLocal_1164, 8388608);
		}
	}
}

void func_262()
{
	if (!func_36(iVar1164, 1))
	{
		if (((is_ped_performing_melee_action(&(uLocal_1250[1]), 32768, 495715212) || is_ped_performing_melee_action(&(uLocal_1250[1]), 32768, 2070522567)) || is_ped_performing_melee_action(&(uLocal_1250[1]), 32768, 1100633134)) || is_ped_performing_melee_action(&(uLocal_1250[1]), 32768, 193131516))
		{
			if (_0x6127f25ed21c533c(Global_35) >= 0.4f)
			{
				func_62(&(uLocal_1250[1]), Global_35, func_61("WOMAN_HOGTIED", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_39(&uLocal_1166, 1);
				func_254(&(uLocal_1250[1]));
			}
		}
	}
}

int func_263(int iParam0, float fParam1, bool bParam2, bool bParam3)
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

void func_264(int iParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		func_428(iParam0);
		func_259(iParam1, uParam2);
	}
	func_515(*iParam0, 1, bParam4);
}

void func_265()
{
	func_236(Local_1399[0], "RE_INTER_POS");
	func_236(Local_1399[1], "RE_INTER_ANTAGONIZE");
}

int func_266()
{
	iVar0 = func_516();
	switch (iVar0)
	{
		case -320:
		case -280:
		case -240:
		case -200:
		case -160:
		case -120:
			return -1;
		case 120:
		case 160:
		case 200:
		case 240:
		case 280:
		case 320:
			return 1;
		default:
			return 0;
	}
	return 0;
}

float func_267(vector3 vParam0, int iParam3)
{
	return func_67(Global_35, vParam0, iParam3);
}

float func_268(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return -1f;
	}
	return func_59(Global_35, iParam0, bParam1, bParam2);
}

bool func_269(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_270(var uParam0)
{
	return func_269(*uParam0, 2);
}

float func_271()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

bool func_272()
{
	if (!func_517(Global_1395482->f_1))
	{
		return false;
	}
	return func_518(Global_1395482->f_1, 32);
}

bool func_273(int iParam0)
{
	if (func_126(iParam0, 1))
	{
		return false;
	}
	return (1 == func_297(iParam0) || 2 == func_297(iParam0));
}

float func_274(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

var func_275(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_276(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return _create_var_string(2, func_519(sParam1));
}

bool func_277(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_278()
{
	_0x88544c0e3291dcae(1);
	func_393();
}

void func_279(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 || iParam0);
}

void func_280(int iParam0)
{
	iVar0 = func_490(iParam0, 1);
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

void func_281(int iParam0)
{
	iVar0 = func_490(iParam0, 1);
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

void func_282()
{
	func_281(-939420910);
	func_281(-1187950766);
	func_281(356365161);
	func_281(753127042);
	func_281(-2038424081);
	func_281(1884271742);
	func_281(459290420);
}

void func_283()
{
	func_281(704802028);
	func_281(588987611);
	func_281(2008888900);
	func_281(1649996811);
	func_281(227918160);
	func_281(168171957);
	func_281(1193080109);
	func_281(-491981251);
	func_281(-639037538);
	func_281(-618620429);
}

int func_284(int iParam0, int iParam1)
{
	iVar1 = func_421(iParam0, iParam1);
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

int func_285()
{
	return Global_1572887->f_12;
}

void func_286(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		func_520(iParam0, 0);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (&Global_40.f_11922[iVar0] == 0)
			{
				Global_40.f_11922[iVar0] = iParam0;
				return;
			}
			iVar0++;
		}
		func_521(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_287(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_178(iParam0, iParam1);
	Global_17504.f_1003[iVar0]->f_3 = iParam2;
}

int func_288(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	iVar0 = (get_entity_model(iParam0) + get_hash_of_this_script_name());
	_0xcb1a3864c524f784(iParam0, iVar0);
	return iVar0;
}

void func_289(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_178(iParam0, iParam1);
	Global_17504.f_1003[iVar0]->f_2 = iParam2;
}

int func_290(bool bParam0)
{
	if (bParam0)
	{
		iVar0 = func_522(1, 0, 0);
	}
	else
	{
		iVar0 = func_3();
	}
	return func_523(iVar0);
}

void func_291(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_178(iParam0, iParam1);
	Global_17504.f_1003[iVar0]->f_4 = iParam2;
}

int func_292()
{
	return &Global_1899515;
}

void func_293(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_178(iParam0, iParam1);
	Global_17504.f_1003[iVar0]->f_5 = iParam2;
}

int func_294(int iParam0)
{
	switch (iParam0)
	{
		case 76:
			return 2;
		case 26:
			return 2;
		case 105:
			return 1;
		case 78:
			return 2;
		case 5:
			return 2;
		case 38:
			return 2;
		case 115:
			return 6;
	}
	return 0;
}

void func_295(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 < 0 || iParam0 >= Global_40.f_9829)
	{
		return;
	}
	Global_40.f_9829[iParam0]->f_1 = iParam1;
	Global_40.f_9829[iParam0] = iParam2;
	Global_40.f_9829[iParam0]->f_2 = 0;
	Global_40.f_9829[iParam0]->f_3 = iParam3;
}

void func_296(int iParam0, int iParam1)
{
	iVar3 = -1;
	iVar1 = func_294(iParam1);
	iVar0 = 0;
	while (iVar0 < Global_40.f_9829)
	{
		if (&Global_40.f_9829[iVar0] == iParam1)
		{
			if (iVar3 >= 0)
			{
				func_295(iVar3, Global_40.f_9829[iVar0]->f_1, iParam1, Global_40.f_9829[iVar0]->f_3);
			}
			iVar3 = iVar0;
			iVar2++;
			if (iVar2 == iVar1)
			{
				func_295(iVar0, iParam0, iParam1, 0);
				return;
			}
		}
		iVar0++;
	}
}

int func_297(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_5;
}

bool func_298(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

bool func_299(int iParam0, int iParam1)
{
	if (func_285() != -1)
	{
		return false;
	}
	if (!func_298(iParam0))
	{
		return false;
	}
	return (Global_24887[iParam0] && iParam1) != 0;
}

int func_300(int iParam0, bool bParam1)
{
	return func_524(iParam0, Global_1894899->f_2, bParam1);
}

int func_301(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (is_entity_dead(iParam0) && !bParam3)
	{
		return -1;
	}
	iVar0 = _0x32a1e3b83d501096(iParam0);
	if (!_0x800df3fc913355f3(iVar0))
	{
		return -1;
	}
	iVar1 = iParam1;
	iVar1 = iParam1;
	while (iVar1 <= iParam2)
	{
		iVar2 = iVar1;
		if (func_525(iVar2) != 0 && _0x800df3fc913355f3(func_526(iVar2)))
		{
			if (func_526(iVar2) == iVar0)
			{
				return iVar2;
			}
		}
		iVar1++;
	}
	return -1;
}

void func_302(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_298(iParam0))
	{
		return;
	}
	if (!func_299(iParam0, 1))
	{
		return;
	}
	if (!func_299(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_104(iParam0)) && func_527(iParam0))
	{
		return;
	}
	func_528(iParam0, 1);
	func_529(iParam0);
	if (func_530(func_525(iParam0)))
	{
		iVar0 = func_526(iParam0);
		if (!_0x800df3fc913355f3(iVar0))
		{
			return;
		}
		_0xbb68908cd11aebdc(iVar0);
		_0xb65e7f733956cf25(iVar0);
		if (bParam2 && !_0xeb98b38ca60742d7(iVar0))
		{
			_0x631cd2d77fdc0316(iVar0);
		}
		iVar1 = _0x31c70a716cae1fee(iVar0);
		if (!is_ped_injured(iVar1))
		{
			set_ped_config_flag(iVar1, 171, false);
		}
		if (bParam1)
		{
			_0x7b204f88f6c3d287(iVar0);
		}
		func_528(iParam0, 16);
	}
	if (func_299(iParam0, 128) && !bParam3)
	{
		func_531(iParam0, 0);
	}
}

char* func_303(int iParam0)
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

void func_304(int iParam0, int iParam1)
{
	if (!func_277(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_1 = ((*Global_1310750)[iParam0]->f_1 || iParam1);
}

void func_305(int iParam0, bool bParam1)
{
	if (func_43(iParam0, 0, 1))
	{
		set_blocking_of_non_temporary_events(iParam0, false);
		func_263(iParam0, 1088421888, 0, 0);
		if (!bParam1)
		{
			set_ped_as_no_longer_needed(&iParam0);
		}
	}
}

bool func_306(var uParam0, var uParam1)
{
	if (func_126(uParam0->f_3, 16777216))
	{
		if (func_532(*uParam1) != -1 || get_entity_model(*uParam1) == 1478983280)
		{
			return true;
		}
	}
	return false;
}

void func_307(var uParam0)
{
	set_ped_config_flag(*uParam0, 6, false);
	set_ped_config_flag(*uParam0, 4, false);
	set_ped_config_flag(*uParam0, 494, true);
}

float func_308(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_309(int iParam0, int iParam1, float fParam2, int iParam3, bool bParam4)
{
	if (!Global_1935630->f_12 && (!bParam4 || func_43(iParam0, 0, 1)))
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
			fVar2 = func_308(fParam2 >= 0f, fParam2, vdist(get_entity_coords(iParam0, true, false), Global_36));
			if (fVar2 > 25f && is_entity_occluded(iParam0))
			{
				func_71(&iParam0);
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

void func_310(var uParam0)
{
	if (_does_volume_exist(uParam0->f_171))
	{
		func_533(uParam0->f_171);
		_0xa1cfb35069d23c23(uParam0->f_171);
		_0x74c2b3dc0b294102(uParam0->f_171);
	}
	if (uParam0->f_51.f_7 != 0)
	{
		destroy_tracked_point(uParam0->f_51.f_7);
		uParam0->f_51.f_7 = 0;
	}
	func_534(uParam0);
	func_535(uParam0);
	func_92(uParam0);
	if (!func_536(uParam0))
	{
		if (_0xf6a8a652a6b186cd(uParam0->f_51.f_11))
		{
			_0xfdfecc6ee4491e11(uParam0->f_51.f_11);
		}
		func_379(uParam0->f_51, 0);
	}
	if (does_blip_exist(uParam0->f_51.f_6))
	{
		remove_blip(&(uParam0->f_51.f_6));
	}
	if (uParam0->f_48)
	{
		func_393();
	}
	if (!func_537(uParam0->f_3) && !func_126(uParam0->f_3, 256))
	{
		func_102(uParam0->f_3, 1, 0, 15, 0, 0, 0, 1);
	}
	func_58(uParam0->f_173);
	func_58(uParam0->f_172);
}

void func_311(var uParam0)
{
	if (does_blip_exist(uParam0->f_181))
	{
		remove_blip(&(uParam0->f_181));
	}
}

int func_312(int iParam0, int iParam1)
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

void func_313(int iParam0, int iParam1, int iParam2)
{
	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_285() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	_0xd5910ecf81a2278c(iParam0, iParam1, iParam2, &vVar0);
}

bool func_314(int iParam0)
{
	if (((func_315(iParam0, 1) && func_315(iParam0, 2)) && func_315(iParam0, 8)) && func_315(iParam0, 512))
	{
		return true;
	}
	return false;
}

bool func_315(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_316(int iParam0)
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

int func_317(bool bParam0)
{
	if (bParam0)
	{
		return func_538(Global_1359489->f_4);
	}
	get_group_size(func_539(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = get_ped_as_group_member(func_539(), iVar3);
		if (func_540(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

void func_318(var uParam0)
{
	func_39(uParam0, 256);
}

void func_319(var uParam0)
{
	func_39(uParam0, 2);
}

void func_320(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		func_541(&((*iParam0)[iVar0]->f_1));
		func_541(&((*iParam0)[iVar0]->f_12));
		iVar0++;
	}
}

void func_321(char* sParam0, var uParam1)
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

bool func_322(var uParam0)
{
	if (!func_542(uParam0->f_1))
	{
		return false;
	}
	if (uParam0->f_12 != 0)
	{
		if (!func_542(uParam0->f_12))
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

int func_323(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_543(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

Vector3 func_324(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return 0f, 0f, 0f;
	}
	if (!func_277(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (func_544(iParam0) == 0)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = (func_545(iParam0) + iParam1);
	if (iVar0 >= 892)
	{
		return 0f, 0f, 0f;
	}
	return *Global_1310750->f_13358[iVar0];
}

void func_325(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_126(iParam0, 32))
	{
		if (func_546(iParam0, uParam1->f_4, &(uParam1->f_12)))
		{
			if (bParam4)
			{
				vVar1 = { func_547(Global_35, &(uParam1->f_12)) };
				if (!func_329(vVar1))
				{
					*uParam1 = { vVar1 };
				}
			}
		}
	}
	if (bParam2)
	{
		func_548(uParam1, bParam2);
	}
	if (bParam3)
	{
		fVar4 = func_380(iParam0);
		iVar0 = _create_volume_cylinder_with_custom_name(*uParam1, 0f, 0f, 0f, fVar4, fVar4, fVar4, func_381());
		if (func_549(Global_1310750[iParam0], 33554432))
		{
			func_383(iVar0, func_382(iParam0), 1, 0, 2, 0, -1082130432);
		}
		else
		{
			func_383(iVar0, func_382(iParam0), 1, 0, 8, 0, -1082130432);
		}
		if (func_126(iParam0, 1))
		{
			func_550(*uParam1 + Vector(1f, 0f, 0f), 25f, "Beat Inner", 1, 0, 32, 0, -1082130432);
		}
	}
	func_551(iParam0);
}

bool func_326(int iParam0, var uParam1)
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
			func_552(uParam1, *(*Global_1310750)[iParam0]->f_4.f_4[iVar0]);
		}
		iVar0++;
	}
	if (func_142(iParam0, 16))
	{
		_0xb8e3486d107f4194(*uParam1, 55f);
		_0x827a58ced9d4d5b4(*uParam1, 180f);
		fVar2 = to_float(func_553(iParam0));
		fVar1 = 60f;
	}
	else
	{
		_0x65d281985f2bdfc2(*uParam1, 35f);
		_0x827a58ced9d4d5b4(*uParam1, 65f);
		fVar2 = to_float(func_553(iParam0));
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

void func_327(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4)
{
	switch (func_554(iParam0))
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
			if (!func_126(iParam0, 1))
			{
				if (func_142(iParam0, 2))
				{
				}
			}
			func_555(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		case 2:
			func_556(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		case 3:
			func_556(fParam1, fParam2, iParam3, iParam0, bParam4);
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

Vector3 func_328(bool bParam0, int iParam1, var uParam2, var uParam3)
{
	fVar7 = 999999.9f;
	fVar8 = 0f;
	*bParam0 = 1;
	iVar0 = 0;
	while (iVar0 < func_544(iParam1))
	{
		if (!func_557(iParam1, iVar0))
		{
			vVar4 = { func_324(iParam1, iVar0) };
			if (!func_329(vVar4))
			{
				fVar8 = vdist(Global_36, vVar4);
				if (func_334(fVar8, iParam1))
				{
					*bParam0 = 0;
				}
				if (fVar8 < fVar7)
				{
					if (func_558(iParam1, vVar4, uParam2, uParam3))
					{
						fVar7 = vdist(Global_36, vVar4);
						vVar1 = { vVar4 };
					}
				}
			}
		}
		iVar0++;
	}
	if (!func_329(vVar4))
	{
	}
	return vVar1;
}

bool func_329(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_330(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, int iParam5)
{
	if (uParam0->f_8 >= iParam4)
	{
		if (bParam3)
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_74("BEAT_FAIL", 5000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam2 = 1;
	}
	*uParam1 = iParam5;
	uParam0->f_8++;
	return 0;
}

int func_331(int iParam0, vector3 vParam1)
{
	iVar0 = 0;
	while (iVar0 < func_544(iParam0))
	{
		vVar1 = { func_324(iParam0, iVar0) };
		if (func_559(vVar1, vParam1, 1056964608, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_332(var uParam0)
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

int func_333(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	vVar2 = { *uParam0 };
	func_560(Global_35, *uParam0, &(uParam0->f_37), 1061158912, 0, 0);
	if (func_561(&(uParam0->f_37), 500))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!func_329(*uParam0->f_12[iVar0]))
			{
				vVar5 = { *uParam0->f_12[iVar0] };
				vVar8 = { _0x83acc65d9acec5ef(Global_36, vVar2, vVar5, true) };
				if (vdist2(Global_36, vVar8) <= (35f * 35f) || vdist2(Global_36, *uParam0->f_12[iVar0]) <= (80f * 80f))
				{
					if (bParam4)
					{
						iVar1 = func_562(uParam0);
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
	return func_330(uParam0, uParam1, uParam2, bParam3, 16, 1000);
}

bool func_334(float fParam0, int iParam1)
{
	fVar3 = (fParam0 * fParam0);
	func_327(iParam1, &fVar0, &fVar1, &uVar2, 1);
	if (fVar3 > fVar1)
	{
		return false;
	}
	if (func_126(iParam1, 1))
	{
		if (fVar3 < fVar0)
		{
			return false;
		}
	}
	return true;
}

bool func_335(var uParam0, bool bParam1)
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

bool func_336(int iParam0, var uParam1, var uParam2, struct<7> Param3, bool bParam10)
{
	if (func_563(iParam0, *uParam2))
	{
		return false;
	}
	if (!func_564(iParam0, uParam2))
	{
		return false;
	}
	if (!func_565(Param3))
	{
		return false;
	}
	if (bParam10)
	{
		if (!func_208(*uParam2, Global_35))
		{
			return false;
		}
	}
	return true;
}

bool func_337(int iParam0, int iParam1, var uParam2)
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

void func_338(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = _create_volume_cylinder_with_custom_name(vParam1, vParam4, vParam7, sParam10);
}

void func_339(int iParam0, int iParam1)
{
	if (func_566(iParam0))
	{
		return;
	}
	if (func_567(iParam0) == iParam1)
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

void func_340(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 0);
	if (bParam3)
	{
		func_82(&iParam1, 8192);
	}
	if (bParam4)
	{
		_0x2161278c6322f740(iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, iParam0);
	}
}

bool func_341()
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

bool func_342(var uParam0, var uParam1, vector3 vParam2, float fParam5, bool bParam6, int iParam7)
{
	if (!does_entity_exist(*uParam1) && uParam0->f_1 != 0)
	{
		if (!does_entity_exist(uParam0->f_11) && uParam0->f_12 != 0)
		{
			if (has_model_loaded(uParam0->f_12))
			{
				Var2 = { func_568(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
				Var2.f_3 = func_569(fParam5, uParam0->f_18, uParam0->f_19);
				uParam0->f_11 = func_570(uParam0->f_12, uParam0, Var2, Var2.f_3, 1, 1, uParam0->f_14, 0, 1);
				if (func_571(uParam0->f_1, 1))
				{
					if (does_entity_exist(uParam0->f_11))
					{
						func_486(uParam0->f_11, 0);
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
					Var2 = { func_568(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
					Var2.f_3 = func_569(fParam5, uParam0->f_18, uParam0->f_19);
				}
				else
				{
					bVar1 = (bParam6 || func_572(&(uParam0->f_22)));
					Var2 = { func_568(vParam2, fParam5, uParam0->f_6, bVar1) };
					Var2.f_3 = func_569(fParam5, uParam0->f_9, bVar1);
				}
				*uParam1 = func_570(uParam0->f_1, uParam0, Var2, Var2.f_3, iParam7, _is_this_model_a_horse(uParam0->f_1), uParam0->f_14, 0, 1);
				set_ped_config_flag(*uParam1, 307, true);
				if (!is_entity_dead(*uParam1))
				{
					if (bVar0)
					{
						func_573(*uParam1, uParam0->f_11, 1, -1, 1);
					}
					if (!is_string_null_or_empty(&(uParam0->f_23)))
					{
						func_133(*uParam1, &(uParam0->f_23), 0);
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

int func_343()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_257(iVar0, 1, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_344(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

int func_345(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_574(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_575((386 + iVar28), 1);
			if (func_576(iParam0, &Var0, iVar5, 0))
			{
				if (func_577(iParam0, &Var6, iVar5))
				{
					Var29 = { func_578(iParam0, Var0, iVar5, 0) };
					func_579(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_580(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					func_581(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_582(iParam0, iParam1);
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

void func_346(int iParam0, int iParam1, float fParam2)
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

bool func_347(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_348(int iParam0)
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

var func_349(int iParam0, int iParam1, int iParam2, int iParam3)
{
	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = iParam1;
	Var0.f_12[0] = iParam2;
	iVar23 = 13;
	return _0xa88e215ceb0435c0(iParam0, &Var0, iParam3, iVar23, 2, 0);
}

void func_350()
{
	_0xb56d41a694e42e86(iVar1227, 534496, 0, 0, -1, -1, 0);
	_0x18262cafebb5fbe1(iVar1227, 534496, 0, 0, -1, -1, 0);
	iLocal_1230 = _create_volume_box_with_custom_name(-315.0833f, 813.6198f, 122.1738f, 0f, 0f, 99.99905f, 9.787936f, 2.85993f, 2.589409f, "volRestriction03");
	_0xb56d41a694e42e86(iVar1228, 534496, 0, 0, -1, -1, 0);
	_0x18262cafebb5fbe1(iVar1228, 534496, 0, 0, -1, -1, 0);
	func_583(&uLocal_1245, Local_729.f_51, 0f, 0f, 0f, 15f, 15f, 10f, 0, 16384, 0);
	iLocal_1237 = _create_volume_box_with_custom_name(-293.4574f, 842.5338f, 118.861f, 0f, 0f, 0f, 13.80969f, 22.0141f, 11.25f, "volPigPenBox");
	iLocal_1236 = _create_volume_aggregate();
	_0x6e0d3c3f828da773(uVar1234, uVar1235);
	_0xbce668aaf83608be(uVar1234, -287.9272f, 841.6661f, 118.861f, 0f, 0f, 0f, 1.475787f, 7.445063f, 3.578416f);
	uLocal_1295 = _0x4c39c95ae5db1329(iVar1227, 0, 15);
	func_221(&uLocal_1238, -293.6663f, 848.1567f, 121.1615f, 0f, 0f, -179.8587f, 19.20746f, 39.28325f, 5.892512f, "PigClearArea");
	_0xb56d41a694e42e86(iVar1236, 0, 2016, 0, -1, -1, 0);
	_0x4c39c95ae5db1329(iVar1236, 0, 15);
	if (!_does_volume_exist(iVar1238))
	{
		func_584(&uLocal_1240, Global_36, 0f, 0f, 0f, 10f, 10f, 10f, "CORPSE_DETECTION");
	}
	if (_does_volume_exist(iVar1238))
	{
		_0x7c00cfc48a782dc0(iVar1238, &(uLocal_1250[0]), 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
}

void func_351(int iParam0, int iParam1)
{
	func_585(iParam0, iParam1);
}

bool func_352(int iParam0, var uParam1)
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

void func_353(var uParam0, int iParam1)
{
	uParam0->f_21 = iParam1;
}

bool func_354()
{
	return &Global_1935436 == 2;
}

void func_355(int iParam0)
{
	if (iParam0 >= &Global_1935436)
	{
		return;
	}
	Global_1935436->f_1 = iParam0;
}

void func_356(int iParam0, int iParam1)
{
	if (get_random_event_flag())
	{
		return;
	}
	Global_17504.f_3++;
	Global_17504.f_42[iParam0]->f_1++;
	if (func_126(iParam0, 2))
	{
		func_587(iParam0, func_586(iParam1));
	}
	else
	{
		func_589(iParam0, func_588());
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
	func_590(iParam0, (*Global_1310750)[iParam0]->f_36, fVar0, 1, 0);
	func_591(iParam0, 0);
	func_592(iParam0);
	func_593(1);
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
	if (!func_126(iParam0, 16))
	{
		func_357(iParam0, 0, 0, 0, 0);
	}
}

void func_357(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (bParam1)
	{
	}
	if (func_594() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0];
		if (((func_277(iVar1) && !func_126(iVar1, iParam2)) && (!bParam3 || !func_371(iVar1))) && (!bParam4 || !func_595(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_596(iVar0);
			}
		}
		iVar0++;
	}
}

int func_358(int iParam0)
{
	return (*Global_1310750)[iParam0]->f_39;
}

void func_359(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_177 != -1 || func_549(Global_1310750[uParam0->f_3], 16777216))
	{
		if (bParam2)
		{
			if (func_126(uParam0->f_3, 1073741824))
			{
				func_597(2, -1, 0, 0, 0);
			}
			else
			{
				func_597(1, -1, 0, 0, 0);
			}
		}
		else if (bParam1)
		{
			if (uParam0->f_45)
			{
				func_597(8, -1, 0, 0, 0);
			}
		}
		if (uParam0->f_177 != -1)
		{
			if (bParam2)
			{
				if (!func_598(1, uParam0->f_177))
				{
					func_599(16, uParam0->f_177);
					func_600(1, uParam0->f_177);
				}
				compendium_gang_encountered(func_601(uParam0->f_177));
			}
		}
	}
	else if (bParam2 || (bParam1 && uParam0->f_45))
	{
		func_597(8, -1, 0, 0, 0);
	}
}

int func_360()
{
	if (func_344(Global_1935630->f_44))
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
		else if (func_602())
		{
			return 1;
		}
	}
	return 0;
}

float func_361(var uParam0, bool bParam1)
{
	if (uParam0->f_119 == -1f)
	{
		if (func_126(uParam0->f_3, 1024))
		{
			fVar0 = 95f;
		}
		else if (func_126(uParam0->f_3, 2048))
		{
			fVar0 = 80f;
		}
		else if (func_126(uParam0->f_3, 4096))
		{
			fVar0 = 65f;
		}
		else if (func_126(uParam0->f_3, 8192))
		{
			fVar0 = 55f;
		}
		else if (func_126(uParam0->f_3, 16384))
		{
			fVar0 = 30f;
		}
		else
		{
			fVar0 = 85f;
		}
		if (func_126(uParam0->f_3, 1))
		{
		}
		else if (func_126(uParam0->f_3, 2))
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

int func_362(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6)
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
			else if (func_603(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
					if (func_604(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
		uParam0->f_7 = (func_271() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

bool func_363(var uParam0, int iParam1, float fParam2)
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
	func_144(uParam0);
	return true;
}

bool func_364()
{
	return (Global_1894899 & 1 != 0 && func_3() != -1);
}

bool func_365(var uParam0, float fParam1)
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

bool func_366(int iParam0, int iParam1)
{
	return (func_358(iParam0) && iParam1) != 0;
}

bool func_367(int iParam0)
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
	if (iParam0 & 1 == 1 && func_605(iVar3))
	{
		return true;
	}
	if (iParam0 & 2 == 2 && func_606(iVar3))
	{
		return true;
	}
	if (iParam0 & 4 == 4 && func_607(iVar3))
	{
		return true;
	}
	if (iParam0 & 8 == 8 && func_608(iVar3))
	{
		return true;
	}
	if (iParam0 & 16 == 16 && func_609(iVar3))
	{
		return true;
	}
	if (iParam0 & 32 == 32 && func_610(iVar3))
	{
		return true;
	}
	if (iParam0 & 64 == 64 && func_611(iVar3))
	{
		return true;
	}
	return false;
}

bool func_368(bool bParam0)
{
	if (func_612(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_369(int iParam0)
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

bool func_370(int iParam0, bool bParam1, bool bParam2)
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
		if (func_613())
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
		iVar0 = func_614(&(Global_1898164->f_1[0]));
		if (func_615(iVar0) && func_616((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_617(&(Global_1898164->f_1[0])))
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

bool func_371(int iParam0)
{
	if (!func_277(iParam0))
	{
		return false;
	}
	if (func_618(64) && func_619(iParam0))
	{
		return true;
	}
	return (*Global_1310750)[iParam0]->f_46;
}

bool func_372()
{
	return Global_1894899 & 4 != 0;
}

int func_373(int iParam0)
{
	if (!func_620(iParam0))
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

bool func_374(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return false;
	}
	return true;
}

bool func_375(vector3 vParam0, int iParam3)
{
	if (!func_374(iParam3))
	{
		return false;
	}
	if (_does_volume_exist((*Global_1392194)[iParam3]->f_5))
	{
		return _0xf256a75210c5c0eb((*Global_1392194)[iParam3]->f_5, vParam0);
	}
	return false;
}

bool func_376(vector3 vParam0)
{
	if (func_329(vParam0))
	{
		return false;
	}
	fVar0 = func_308(func_364(), 6f, 22f);
	return _0x769bb7626b8cdb06(vParam0, fVar0, 1, 0, 16384);
}

bool func_377(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
						func_246(uParam0);
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
		func_246(uParam0);
		return true;
	}
	if (!bParam4)
	{
		if (!func_68(uParam0))
		{
			return false;
		}
		else if (is_scripted_speech_playing(Global_35) || is_any_speech_playing(Global_35))
		{
			return true;
		}
		if (!func_621(uParam0, fParam2))
		{
			return true;
		}
		if (func_68(uParam0))
		{
			func_72(uParam0);
		}
	}
	return false;
}

bool func_378(vector3 vParam0)
{
	return _0x769bb7626b8cdb06(vParam0, 0.5f, 0, 0, 16384);
}

void func_379(vector3 vParam0, int iParam3)
{
	if (func_329(vParam0))
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
			if (func_559(vVar2, vParam0, 2f, 1))
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

float func_380(int iParam0)
{
	if (!func_277(iParam0))
	{
		return 0f;
	}
	if (!func_622(iParam0))
	{
		return 0f;
	}
	return (*Global_1310750)[iParam0]->f_44;
}

char* func_381()
{
	return "unnamed";
}

char* func_382(int iParam0)
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

int func_383(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (!_does_volume_exist(iParam0))
	{
		return 0;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	vVar3 = { _0x3e2a25b2416dd67e(iParam0) };
	iVar6 = func_550(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

void func_384(int iParam0)
{
	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_623();
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
			func_624(&(Global_1935630->f_34), &(Global_1935630->f_39));
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

var func_385(int iParam0)
{
	return &(Global_1109400->f_276[iParam0]);
}

bool func_386(int iParam0)
{
	iVar0 = Global_1935630->f_40;
	if (func_285() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_625(iParam0);
		}
	}
	else if (!does_entity_exist(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_625(iParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_414(iVar0) == -1)
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

void func_387(int iParam0)
{
	if (*iParam0 & 8 != 0 || *iParam0 & 16 != 0)
	{
		func_626(iParam0);
	}
}

bool func_388(int iParam0, int iParam1, int iParam2)
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
		iVar1 = func_414(iParam2);
	}
	else
	{
		iVar1 = func_413(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_414(iParam0);
	}
	else
	{
		iVar0 = func_413(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_2(*iParam1, 8388608))
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

float func_389(int iParam0, int iParam1)
{
	return func_59(iParam0, iParam1, 1, 1);
}

float func_390(int iParam0)
{
	return iParam0->f_26;
}

bool func_391(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_392(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_83(iParam0, 134217728);
	}
	else
	{
		func_82(iParam0, 134217728);
	}
}

void func_393()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

bool func_394(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_59(iVar0, iParam0, 1, 1) <= 4f)
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
		if (_is_weapon_sniper(func_627(iVar0, 0)))
		{
			if (func_628(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_395(int iParam0)
{
	return iParam0->f_17;
}

bool func_396(int iParam0, int iParam1, float fParam2, float fParam3)
{
	if (iParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_2(*iParam0, 4194304))
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

int func_397(int iParam0)
{
	return iParam0->f_18;
}

bool func_398(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (_is_weapon_sniper(func_627(iVar0, 0)))
		{
			if (func_629(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_399(int iParam0)
{
	return iParam0->f_23;
}

int func_400(int iParam0)
{
	return iParam0->f_21;
}

int func_401(int iParam0)
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

bool func_402(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_510(iParam0, vParam4, 0.5f))
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

int func_403(int iParam0)
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
	if (func_630(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_404(int iParam0)
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

bool func_405(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_369(iParam1))
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

bool func_406(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_369(iParam1))
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

bool func_407(int iParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = 40f;
	if (func_369(iParam1))
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

bool func_408(int iParam0, int iParam1)
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

bool func_409(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (func_631(iParam0, 1, 0, 0) != 2055893578)
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

bool func_410(int iParam0)
{
	return !*iParam0 & 2 != 0;
}

bool func_411(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_67(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_412(int iParam0)
{
	return iParam0->f_24;
}

int func_413(int iParam0)
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

int func_414(int iParam0)
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

int func_415(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_408(Global_35, &iVar1))
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
		fVar2 = func_59(iParam0, player_ped_id(), 0, 1);
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
		if (func_59(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

bool func_416(int iParam0, int iParam1, bool bParam2)
{
	func_612(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_417(iParam1, iVar0))
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
				if (!bParam2 || !func_417(iParam1, iVar1))
				{
					if (func_67(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_417(int iParam0, int iParam1)
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

bool func_418(int iParam0)
{
	if (func_98())
	{
		return false;
	}
	return func_632((*Global_1347702)[58]->f_15, 1);
}

int func_419(int iParam0)
{
	return iParam0->f_20;
}

int func_420(int iParam0, int iParam1, bool bParam2, float fParam3)
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

int func_421(int iParam0, int iParam1)
{
	if (!func_277(iParam0))
	{
		return -1;
	}
	return (iParam0 + (120 * iParam1));
}

bool func_422(int iParam0)
{
	return func_633(iParam0, 2);
}

bool func_423(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

void func_424(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_425(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

bool func_426(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_634(iParam0, iParam1))
		{
			if (!func_2(iParam1->f_10, 1))
			{
				set_ped_config_flag(iParam0, 130, false);
				set_ped_config_flag(iParam0, 315, false);
				set_ped_config_flag(iParam0, 297, false);
				set_ped_config_flag(iParam0, 178, true);
				func_258(uParam2, 0, 0, 1, 0);
				func_83(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_2(iParam1->f_10, 1))
		{
			func_635(uParam2);
			set_ped_config_flag(iParam0, 130, true);
			set_ped_config_flag(iParam0, 315, true);
			set_ped_config_flag(iParam0, 297, true);
			set_ped_config_flag(iParam0, 178, false);
			func_82(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_427(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!is_entity_dead(*iParam0))
	{
		_0xe98d55c5983f2509(*iParam0);
		bVar4 = func_2(iParam4, 32);
		func_514(iParam1, uParam2, 0);
		iVar5 = func_636(*iParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			set_ped_config_flag(*iParam0, 178, false);
			return true;
		}
		func_258(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_2(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_2(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_2(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_2(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_2(iParam4, 8388608) || func_2(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_2(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_2(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_430(iParam1, 4))
		{
			iVar6 |= 1024;
			_0xbb1e41dd3d3c6250(*iParam0, "IloGeneralEvents", 2);
		}
		if (!func_430(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_2(iParam4, 67108864))
		{
			iVar6 |= 16384;
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (_0x870708a6e147a9ad(*iParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, 0, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = func_637(iParam0);
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
					_0xfca8fb9e15fa80d3(*iParam0, iParam6);
				}
				if (!is_string_null_or_empty(sParam5) && iParam6 == 2)
				{
					_0xfca8fb9e15fa80d3(*iParam0, get_hash_key(sParam5));
				}
				else if (iParam6 != 2)
				{
					_0xfca8fb9e15fa80d3(*iParam0, iParam6);
				}
			}
			set_ped_config_flag(*iParam0, 130, true);
			set_ped_config_flag(*iParam0, 178, false);
			set_ped_config_flag(*iParam0, 297, true);
			set_ped_config_flag(*iParam0, 301, false);
			if (func_2(iParam4, 268435456))
			{
				iVar8 = func_638(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_639(iParam1, (*uParam2)[iVar8]);
				}
			}
			if (func_430(iParam1, 23))
			{
				set_ped_config_flag(*iParam0, 315, false);
				set_ped_config_flag(*iParam0, 331, false);
				set_ped_config_flag(*iParam0, 493, true);
			}
			else
			{
				set_ped_config_flag(*iParam0, 315, true);
				set_ped_config_flag(*iParam0, 493, false);
			}
			if (func_2(iParam4, 2) || func_2(iParam4, 16))
			{
				func_429(*iParam0, 1, 1);
			}
			else
			{
				func_429(*iParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_428(int iParam0)
{
	if (!is_entity_dead(*iParam0))
	{
		_0xe98d55c5983f2509(*iParam0);
		set_ped_config_flag(*iParam0, 297, false);
	}
}

void func_429(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !is_entity_dead(iParam0))
	{
		set_ped_config_flag(iParam0, 317, bParam1);
	}
}

bool func_430(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

bool func_431(int iParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_640(*iParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_432(int iParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_641(*iParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_2(iParam10, 32), 1, 0);
			set_bit(iParam2, 1);
		}
	}
	else if (is_bit_set(*iParam2, 1))
	{
		clear_bit(iParam2, 1);
	}
}

void func_433(int iParam0)
{
	if (func_2(iParam0, 4))
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
	if (func_2(iParam0, 16384))
	{
		disable_control_action(0, -485697785, false);
	}
	if (func_2(iParam0, 8))
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
	}
}

bool func_434(int iParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	iVar1 = func_642(1);
	bVar2 = is_bit_set(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = is_ped_on_foot(Global_35);
	bVar10 = is_ped_injured(*iParam0);
	bVar11 = (((_is_ped_carrying(Global_35) || func_643(Global_35)) || func_644(Global_35)) || func_645(Global_35));
	fVar12 = -1f;
	if (func_68(&(iParam1->f_13)))
	{
		fVar12 = func_504(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((*uParam4)[iVar0]->f_8 != iParam12)
		{
			iParam12 = (*uParam4)[iVar0]->f_8;
		}
		bVar4 = func_182((*uParam4)[iVar0]->f_6);
		func_646(*iParam0, (*uParam4)[iVar0], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (is_bit_set(uParam4[iVar0], 20))
		{
			bVar3 = true;
		}
		if (func_647(*iParam0, iParam1, (*uParam4)[iVar0], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_648(iParam12, (*uParam4)[iVar0]->f_6))
				{
					if (!bVar7)
					{
						func_258(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_54(uParam4, 0, 0);
					}
					if (is_bit_set(uParam4[iVar0], 11))
					{
						func_514(iParam1, uParam4, is_bit_set(*iParam1, 6));
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
						func_246(&(iParam1->f_18));
						if (bVar6)
						{
							func_54(uParam4, 0, 0);
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

void func_435(var uParam0)
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

void func_436(int* iParam0, var uParam1, float fParam2)
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

bool func_437(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!is_control_pressed(0, -124244224))
		{
			if (func_652(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_653(iParam1, 0);
				func_514(iParam1, uParam2, func_430(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_438(int iParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (is_ambient_speech_playing(*iParam0) || is_scripted_speech_playing(*iParam0))
		{
			return false;
		}
		iParam1->f_9 = 0;
		set_bit(iParam1, 0);
		if (fParam2 > 0f)
		{
			func_246(&(iParam1->f_18));
			return false;
		}
		else if (func_68(&(iParam1->f_18)))
		{
			func_72(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_68(&(iParam1->f_18)))
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
	return func_452(&(iParam1->f_18), fParam2);
	return true;
}

void func_439(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_646(iParam0, (*uParam2)[iVar0], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_440(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

int func_441(int* iParam0)
{
	if (func_430(iParam0, 0))
	{
		if (func_654(iParam0))
		{
			func_440(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

void func_442(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_443(int iParam0, int iParam1, int iParam2, bool bParam3)
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

void func_444(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

var func_445(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

bool func_446(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_447(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
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
	return func_661(iParam0, &Var0);
}

int func_448(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_449()
{
	if (iVar1019 == 1)
	{
		if (!func_36(iVar1166, 2048))
		{
			if (func_63(Global_35, &(uLocal_1250[0])) && func_67(Global_35, -275.0667f, 797.9517f, 117.9797f, 1) < 23f)
			{
				_0xedfc6c1fd1c964f5(player_id(), -493957506, 0, 0, 0, 0, 0, 0, 0);
				_0x5af24ca9c974e51a(&(uLocal_1250[0]), Global_35);
				func_39(&uLocal_1168, 2048);
			}
			else if (func_63(Global_35, &(uLocal_1250[1])) && func_67(Global_35, -275.0667f, 797.9517f, 117.9797f, 1) < 23f)
			{
				if (func_43(&(uLocal_1250[1]), 0, 0))
				{
					_0xedfc6c1fd1c964f5(player_id(), -1728509733, 0, 0, 0, 0, 0, 0, 0);
				}
				else
				{
					_0xedfc6c1fd1c964f5(player_id(), -493957506, 0, 0, 0, 0, 0, 0, 0);
				}
				_0x5af24ca9c974e51a(&(uLocal_1250[0]), Global_35);
				func_39(&uLocal_1168, 2048);
			}
		}
		return false;
	}
	if (func_36(iVar1162, 268435456))
	{
		return false;
	}
	switch (iVar1030)
	{
		case 0:
			if (func_662())
			{
				request_model(Local_923.f_31, false);
				iLocal_1032 = 2;
				set_entity_coords(iVar1251, -278.0838f, 804.876f, 118.3801f, true, false, true, true);
			}
			else if (iVar1024 >= 5)
			{
				request_model(Local_923.f_31, false);
				iLocal_1032 = 1;
			}
			break;
		case 1:
			if (func_663())
			{
				set_entity_coords(iVar1251, -278.0838f, 804.876f, 118.3801f, true, false, true, true);
				iLocal_1032 = 2;
			}
			break;
		case 2:
			if (func_67(Global_35, Local_923.f_23, 1) < 20f)
			{
				if (does_entity_exist(iVar1279))
				{
					func_460(395506985, 1);
					func_460(1988748538, 1);
					iLocal_1032 = 3;
					func_87(0);
				}
				else if (has_model_loaded(Local_923.f_31))
				{
					iLocal_1281 = get_closest_object_of_type(Local_923.f_23, 3f, Local_923.f_31, true, false, true);
				}
			}
			break;
		case 3:
			func_51();
			if (!_does_volume_exist(iVar1229))
			{
				iLocal_1231 = _create_volume_box_with_custom_name(-277.2f, 807f, 119.8f, 0f, 0f, -79.7f, 9f, 5.284456f, 3.263908f, "volumeLaw");
				if (_does_anim_scene_exist(iVar1018))
				{
					set_anim_scene_origin(iVar1018, -277.125f, 804.588f, 118.369f, 0f, 0f, -55f, 2);
				}
				if (!func_207(Global_35, iVar1229, 1, 0))
				{
					func_664();
					if (does_entity_exist(iVar1282) && does_entity_exist(iVar1283))
					{
						play_entity_anim(iVar1282, Local_547[26]->f_1, &(Local_547[26]), 1000f, true, false, false, 0f, 0);
						play_entity_anim(iVar1283, Local_547[27]->f_1, &(Local_547[27]), 1000f, true, false, false, 0f, 0);
						set_anim_rate(iVar1282, 0f, 0, false);
						set_anim_rate(iVar1283, 0f, 0, false);
					}
					func_52(iVar1229, 0);
					func_53(Local_923.f_39, 4f, 0);
					func_665(&uLocal_1232, &uLocal_1294, -272.748f, 808.932f, 119.8f, 0f, 0f, -79.7f, 7.037f, 3.848f, 3.264f, 1, 10208, 1, 0, "CellScenarioBlocker");
					func_52(iVar1230, 0);
				}
				_0xb56d41a694e42e86(iVar1229, 534496, 0, 0, -1, -1, 0);
				_0x18262cafebb5fbe1(iVar1229, 534496, 0, 0, -1, -1, 0);
				_0x18262cafebb5fbe1(iVar1230, 534496, 0, 0, -1, -1, 0);
				if (_does_volume_exist(iVar1230))
				{
					func_52(iVar1230, 0);
				}
				uLocal_1293 = _0x4c39c95ae5db1329(iVar1229, 0, 15);
			}
			iLocal_1032 = 4;
			break;
		case 4:
			if (_is_anim_scene_loaded(iVar1018, true, false))
			{
				if (_0x23e33cb9f4a3f547(iVar1018, "PBL_NORMAL"))
				{
					_set_anim_scene_playback_list_bool(iVar1018, "PBL_NORMAL", true);
					set_anim_scene_origin(iVar1018, -277.125f, 804.588f, 118.369f, 0f, 0f, -55f, 2);
					if (func_43(iVar1251, 0, 1))
					{
						set_entity_coords(iVar1251, Local_923.f_23, true, false, true, true);
						set_entity_heading(iVar1251, Local_923.f_26);
						set_blocking_of_non_temporary_events(iVar1251, true);
						set_entity_as_mission_entity(iVar1251, true, false);
						set_ped_keep_task(iVar1251, true);
						if (iVar1216 == 1)
						{
							start_anim_scene(iVar1018);
							_set_anim_scene_playback_list_bool(iVar1018, "PBL_NORMAL", true);
						}
						else
						{
							_task_use_nearest_scenario_to_coord(iVar1251, -277.1334f, 803.2588f, 118.38f, 0.2f, -1, false, false, false, false);
						}
						iLocal_1032 = 5;
					}
				}
				else
				{
					_0xdf7b5144e25cd3fe(iVar1018, "PBL_NORMAL");
				}
			}
			else
			{
				load_anim_scene(iVar1018);
			}
			break;
		case 5:
			if (_does_volume_exist(iVar1230))
			{
				func_52(iVar1230, 0);
			}
			if ((_does_volume_exist(iVar1229) && is_entity_in_volume(Global_35, iVar1229, true, 0)) && iVar1024 != 4)
			{
				if (!func_68(&uLocal_1353))
				{
					func_69(&uLocal_1353, 0);
				}
				_0x66f9eb44342bb4c5(iVar1251, &Local_16);
				if (func_68(&uLocal_1353) && func_70(&uLocal_1353) > 1f)
				{
					if (((!func_36(iVar1162, 32) && !func_36(iVar1162, 1024)) && !func_36(iVar1162, 16)) && !func_36(iVar1165, 8388608))
					{
						func_54(&Local_1434, 1, 0);
						set_anim_scene_bool(iVar1018, "ACTION_1", true, false);
						func_33(&uLocal_1245);
						iLocal_1224 = 1;
					}
					if (!func_36(iVar1165, 8388608) && func_97(Local_729.f_3, 1) == 1)
					{
						func_39(&uLocal_1167, 8388608);
						func_62(iVar1251, Global_35, func_61("PREVIOUS_AGGRO_A", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_246(&uLocal_1344);
						func_666(1);
					}
					else if ((!func_36(iVar1162, 32) && func_63(Global_35, &(uLocal_1250[1]))) && (!is_entity_dead(&(uLocal_1250[1])) || get_ped_config_flag(&(uLocal_1250[1]), 11, false)))
					{
						iLocal_1220 = 1;
						func_39(&uLocal_1164, 32);
						func_246(&uLocal_1344);
						func_62(iVar1251, Global_35, func_61("HELLO_WOMAN", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_666(0);
					}
					else if (!func_36(iVar1162, 1024) && (func_63(Global_35, &(uLocal_1250[0])) || (func_63(Global_35, &(uLocal_1250[1])) && is_entity_dead(&(uLocal_1250[1])))))
					{
						func_39(&uLocal_1164, 1024);
						func_246(&uLocal_1344);
						func_62(iVar1251, Global_35, func_61("HELLO_MAN", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_666(0);
					}
					else if (!func_36(iVar1162, 16))
					{
						func_39(&uLocal_1164, 16);
						func_246(&uLocal_1344);
						func_62(iVar1251, Global_35, func_61("HELLO", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_666(1);
					}
					func_72(&uLocal_1353);
					iLocal_1032 = 6;
				}
			}
			break;
		case 6:
			if (iVar1210 == 1 && _does_anim_scene_exist(Local_1012.f_2))
			{
				if (!func_36(iVar1162, 128))
				{
					if (_get_anim_scene_entity_matrix(Local_1012.f_2, "Sheriff", &Local_1514, false, 0, 2))
					{
						func_39(&uLocal_1164, 128);
					}
				}
				if (!does_entity_exist(iVar1284))
				{
					iLocal_1286 = get_closest_object_of_type(-277.1252f, 804.5879f, 118.3682f, 1f, -1231539219, true, false, true);
					if (does_entity_exist(iVar1284))
					{
						set_anim_scene_entity(Local_1012.f_2, "DESK", iVar1284, 0);
					}
				}
			}
			if ((_does_volume_exist(iVar1229) && !is_entity_in_volume(Global_35, iVar1229, true, 0)) && iVar1210 == 0)
			{
				iLocal_1032 = 5;
				return false;
			}
			_0x66f9eb44342bb4c5(iVar1251, &Local_16);
			if (func_36(iVar1165, 33554432) || func_36(iVar1165, 134217728))
			{
				if ((!func_36(iVar1165, -2147483648) && !is_any_speech_playing(Global_35)) && func_70(&uLocal_1347) > 1f)
				{
					if (_is_ped_hogtied(&(uLocal_1250[1])))
					{
						if (is_entity_in_volume(&(uLocal_1250[1]), iVar1231, false, 0) || func_224(&(uLocal_1250[1]), 0))
						{
							func_62(Global_35, iVar1251, func_61("INFORM_TIED_SALOON", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						else
						{
							func_62(Global_35, iVar1251, func_61("INFORM_TIED_OUTSIDE", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						_0x18ff3110cf47115d(&(uLocal_1250[1]), 2, 0);
						_0x18ff3110cf47115d(&(uLocal_1250[1]), 1, 0);
					}
					func_39(&uLocal_1167, -2147483648);
					func_246(&uLocal_1347);
				}
			}
			if (!func_36(iVar1165, 536870912) && !func_36(iVar1165, -2147483648))
			{
				if ((((_does_volume_exist(iVar1229) && is_entity_in_volume(Global_35, iVar1229, true, 0)) && !is_any_speech_playing(Global_35)) && !is_any_speech_playing(iVar1251)) && func_70(&uLocal_1344) > fVar1189)
				{
					func_246(&uLocal_1344);
					if (func_97(Local_729.f_3, 1) == 1)
					{
						switch (iVar1183)
						{
							case 0:
								func_62(iVar1251, Global_35, func_61("PREVIOUS_AGGRO_C", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								fLocal_1191 = 10f;
								iLocal_1185 = iVar1183 + 1;
								break;
							case 1:
								func_62(iVar1251, Global_35, func_61("PREVIOUS_AGGRO_D", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								iLocal_1185 = iVar1183 + 1;
								func_54(&Local_1434, 0, 0);
								func_55(Local_1356[1], 0);
								break;
						}
					}
					else if ((func_36(iVar1165, 67108864) || func_36(iVar1165, 268435456)) || func_36(iVar1165, 1073741824))
					{
						switch (iVar1183)
						{
							case 0:
								func_62(iVar1251, Global_35, func_61("NOTHING_TO_REPORT_WARN", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								fLocal_1191 = 14f;
								iLocal_1185 = iVar1183 + 1;
								break;
							case 1:
								iLocal_1185 = iVar1183 + 1;
								func_667();
								break;
						}
					}
					else
					{
						switch (iVar1183)
						{
							case 0:
								if (func_63(Global_35, &(uLocal_1250[0])))
								{
									func_62(iVar1251, Global_35, func_61("PED_HOGTIED_DEAD", 1), 0, -1082130432, 2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
									fLocal_1191 = 6f;
									iLocal_1185 = iVar1183 + 1;
								}
								else if (func_63(Global_35, &(uLocal_1250[1])))
								{
									func_62(iVar1251, Global_35, func_61("PED_HOGTIED_DEAD", 1), 0, -1082130432, 2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
									fLocal_1191 = 6f;
									iLocal_1185 = iVar1183 + 1;
								}
								else
								{
									func_62(iVar1251, Global_35, func_61("WELL_WHAT_A", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
									fLocal_1191 = 8f;
									iLocal_1185 = iVar1183 + 1;
								}
								break;
							case 1:
								if (func_63(Global_35, &(uLocal_1250[0])))
								{
									func_62(iVar1251, Global_35, func_61("WELL_WHAT_B", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
									open_sequence_task(&iLocal_1290);
									func_64(1);
									task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, 0.52f);
									func_46(iVar1251, &iLocal_1290, 0, 0, 1, 1);
									fLocal_1191 = 8f;
									iLocal_1185 = 3;
								}
								else if (func_63(Global_35, &(uLocal_1250[1])))
								{
									open_sequence_task(&iLocal_1290);
									func_64(1);
									task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, 0.52f);
									func_46(iVar1251, &iLocal_1290, 0, 0, 1, 1);
									func_62(iVar1251, Global_35, func_61("WELL_WHAT_B", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
									fLocal_1191 = 8f;
									iLocal_1185 = 3;
								}
								else
								{
									func_62(iVar1251, Global_35, func_61("WELL_WHAT_B", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
									fLocal_1191 = 10f;
									iLocal_1185 = iVar1183 + 1;
								}
								break;
							case 2:
								func_667();
								iLocal_1185 = 4;
								break;
							case 3:
								iLocal_1185 = iVar1183 + 1;
								func_667();
								break;
						}
					}
				}
			}
			if (((func_70(&uLocal_1347) > 1f && !is_any_speech_playing(Global_35)) && !is_any_speech_playing(iVar1251)) && func_97(Local_729.f_3, 1) != 1)
			{
				func_668();
				if (func_36(iVar1165, 536870912))
				{
					if (func_43(&(uLocal_1250[1]), 0, 0))
					{
						func_62(iVar1251, Global_35, func_61("RTN_GIRL_B", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						if (!_0x3ab6c7b0bb0df4b1(iVar1251, iVar1018))
						{
							set_ped_using_action_mode(iVar1251, false, -1, 0);
							task_turn_ped_to_face_entity(iVar1251, Global_35, -1, -1082130432, -1082130432, 0.52f);
						}
						if (!func_36(iVar1166, 1073741824))
						{
							func_39(&uLocal_1168, 128);
						}
					}
				}
				else if (func_36(iVar1165, 33554432) && func_36(iVar1165, -2147483648))
				{
					func_62(iVar1251, Global_35, func_61("INFORM_B", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else if (func_36(iVar1165, 134217728) && func_36(iVar1165, -2147483648))
				{
					func_62(iVar1251, Global_35, func_61("RTN_MAN_B", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else if ((func_36(iVar1165, 67108864) && !func_36(iVar1165, 128)) && iVar1210 == 0)
				{
					func_62(iVar1251, Global_35, func_61("NOTHING_TO_REPORT", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_39(&uLocal_1167, 128);
					func_246(&uLocal_1344);
					fLocal_1191 = 10f;
				}
				if ((func_36(iVar1165, 33554432) || func_36(iVar1165, 134217728)) || func_36(iVar1165, 536870912))
				{
					if (func_63(Global_35, &(uLocal_1250[1])) || func_36(iVar1165, 536870912))
					{
						iLocal_1032 = 7;
					}
					else
					{
						iLocal_1032 = 13;
					}
				}
			}
			break;
		case 7:
			if (iVar1210 == 1 && _does_anim_scene_exist(Local_1012.f_2))
			{
				if (!func_36(iVar1162, 128))
				{
					if (_get_anim_scene_entity_matrix(Local_1012.f_2, "Sheriff", &Local_1514, false, 0, 2))
					{
						func_39(&uLocal_1164, 128);
					}
				}
				if (!does_entity_exist(iVar1284))
				{
					iLocal_1286 = get_closest_object_of_type(-277.1252f, 804.5879f, 118.3682f, 1f, -1231539219, true, false, true);
					if (does_entity_exist(iVar1284))
					{
						set_anim_scene_entity(Local_1012.f_2, "DESK", iVar1284, 0);
					}
				}
			}
			_0x66f9eb44342bb4c5(iVar1251, &Local_16);
			if (!is_any_speech_playing(Global_35) && !is_any_speech_playing(iVar1251))
			{
				if (is_entity_dead(&(uLocal_1250[1])))
				{
					func_62(iVar1251, Global_35, func_61("RTN_MAN_B", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_1202 = 1;
					func_221(&uLocal_1239, Local_923.f_61, Local_923.f_64, Local_923.f_67, "volSheriffCorpseArea");
					iLocal_1275 = _blip_add_for_coord(408396114, Local_923.f_61);
					func_246(&uLocal_1344);
					fLocal_1191 = 10f;
					iLocal_1185 = 0;
					iLocal_1032 = 10;
				}
				else
				{
					func_62(iVar1251, Global_35, func_61("RTN_GIRL_C", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_246(&uLocal_1344);
					fLocal_1191 = 2f;
					iLocal_1185 = 0;
					request_model(-1311816336, false);
					iLocal_1032 = 12;
				}
				func_41(&uLocal_1164, 16);
				iLocal_1185 = 0;
				fLocal_1191 = 7f;
			}
			break;
		case 10:
			if (((_does_volume_exist(iVar1229) && !is_any_speech_playing(Global_35)) && !is_any_speech_playing(iVar1251)) && func_70(&uLocal_1344) > fVar1189)
			{
				func_246(&uLocal_1344);
				switch (iVar1183)
				{
					case 0:
						func_62(iVar1251, Global_35, func_61("CORPSE_DISPOSE_IDLE_A", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						fLocal_1191 = 10f;
						iLocal_1185 = iVar1183 + 1;
						break;
					case 1:
						func_62(iVar1251, Global_35, func_61("CORPSE_DISPOSE_IDLE_B", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_1185 = iVar1183 + 1;
						break;
				}
			}
			if (func_36(iVar1162, -2147483648))
			{
				func_246(&uLocal_1344);
				iLocal_1032 = 11;
			}
			break;
		case 11:
			if (is_entity_in_volume(Global_35, iVar1229, true, 0))
			{
				if (_0x3ab6c7b0bb0df4b1(iVar1251, iVar1018))
				{
					func_64(0);
				}
				func_501(iVar1251, Local_1514, Local_1514.f_3.f_2);
				iLocal_1032 = 14;
			}
			break;
		case 12:
			if (func_63(Global_35, &(uLocal_1250[1])) && !is_entity_in_volume(Global_35, iVar1229, true, 0))
			{
				if (!is_any_speech_playing(iVar1251) && func_70(&uLocal_1344) > fVar1189)
				{
					func_246(&uLocal_1344);
					switch (iVar1183)
					{
						case 0:
							open_sequence_task(&iLocal_1290);
							func_64(1);
							task_turn_ped_to_face_entity(0, Global_35, 5000, -1082130432, -1082130432, -1f);
							func_46(iVar1251, &iLocal_1290, 0, 0, 1, 1);
							func_62(iVar1251, Global_35, func_61("NOTHING_TO_REPORT_WARN", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							iLocal_1185 = iVar1183 + 1;
							fLocal_1191 = 3f;
							break;
						case 1:
							_0xedfc6c1fd1c964f5(player_id(), -493957506, 0, 0, 0, 0, 0, 0, 0);
							_report_crime(player_id(), -493957506, 0, &(uLocal_1250[0]), true);
							func_62(iVar1251, Global_35, func_61("NOTHING_TO_REPORT_AGGRO", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							func_302(iVar1467, 0, 1, 0, 0);
							iLocal_1185 = iVar1183 + 1;
							break;
					}
				}
			}
			else if ((func_36(iVar1165, 536870912) && !func_63(Global_35, &(uLocal_1250[1]))) && !is_entity_in_volume(Global_35, iVar1229, true, 0))
			{
				if (func_68(&uLocal_1344))
				{
					func_246(&uLocal_1344);
				}
			}
			if (func_36(iVar1165, 536870912))
			{
				if (func_63(Global_35, &(uLocal_1250[1])) && is_entity_in_volume(Global_35, iVar1229, true, 0))
				{
					request_model(-1311816336, false);
					iLocal_1032 = 13;
					func_64(0);
				}
			}
			else
			{
				iLocal_1032 = 13;
			}
			break;
		case 13:
			if (func_36(iVar1162, 16))
			{
				iLocal_1032 = 20;
			}
			else if (func_36(iVar1162, 1024))
			{
				iLocal_1202 = 1;
				func_221(&uLocal_1239, Local_923.f_61, Local_923.f_64, Local_923.f_67, "volSheriffCorpseArea");
				iLocal_1275 = _blip_add_for_coord(408396114, Local_923.f_61);
				set_player_control(get_player_index(), true, 256, false);
				iLocal_1032 = 20;
			}
			else if (func_669(0))
			{
				Local_729.f_44 = 1;
				iLocal_1032 = 15;
				_0x18ff3110cf47115d(&(uLocal_1250[1]), 2, 0);
				_0x18ff3110cf47115d(&(uLocal_1250[1]), 1, 0);
				set_player_control(get_player_index(), true, 0, false);
				iLocal_15 = 4;
				if (func_98())
				{
					func_38(Local_729.f_3, 6, 2);
				}
				else
				{
					func_38(Local_729.f_3, 6, 1);
				}
				if (func_43(iVar1251, 0, 1))
				{
					if (func_50(Global_35, iVar1230, 0, 1) || func_50(Global_35, iVar1229, 0, 1))
					{
						if (!func_36(iVar1166, 1073741824))
						{
							func_62(iVar1251, Global_35, func_61("ILO_SHERIFF_INTRO", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							func_39(&uLocal_1168, 128);
						}
					}
				}
				func_501(iVar1251, Local_1514, Local_1514.f_3.f_2);
				iLocal_1032 = 14;
				func_668();
				func_186(Local_1434[0], 0, 0);
				func_186(Local_1434[1], 0, 0);
			}
			break;
		case 19:
			if (func_67(iVar1251, Local_923.f_32, 1) < 2f)
			{
				iLocal_1172 = 0;
				iLocal_1032 = 20;
			}
			break;
		case 20:
			func_670();
			func_671(-272.8497f, 807.1815f, 118.38f, 2f, 0, 0);
			if (iVar1029 == 14)
			{
				if (iVar1217 == 1)
				{
					iLocal_1032 = 15;
				}
				else
				{
					func_501(iVar1251, Local_1514, Local_1514.f_3.f_2);
					Local_729.f_44 = 1;
					_0x18ff3110cf47115d(&(uLocal_1250[1]), 2, 0);
					_0x18ff3110cf47115d(&(uLocal_1250[1]), 1, 0);
					iLocal_1032 = 14;
				}
			}
			break;
		case 14:
			set_ped_reset_flag(iVar1251, 12, true);
			if (func_36(iVar1165, 4194304))
			{
				if (func_487(iVar1251, 242628503) && get_sequence_progress(iVar1251) < 3)
				{
					if ((!func_36(iVar1166, 32) && !is_any_speech_playing(&(uLocal_1250[1]))) && !is_any_speech_playing(iVar1251))
					{
						func_62(&(uLocal_1250[1]), Global_35, func_61("JAILED_WOMAN_F", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_39(&uLocal_1168, 32);
					}
					return false;
				}
			}
			if (func_672(&Local_1101, 106) && !is_any_speech_playing(iVar1251))
			{
				if (_is_anim_scene_loaded(Local_1012.f_2, true, false))
				{
					start_anim_scene(Local_1012.f_2);
					func_39(&uLocal_1167, 64);
					func_62(iVar1251, Global_35, "RE_DJ_VAL_V1_ILO_SHERIFF_POS_RESP_A", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_246(&uLocal_1323);
					iLocal_1032 = 17;
				}
				else
				{
					load_anim_scene(Local_1012.f_2);
				}
			}
			break;
		case 17:
			set_ped_reset_flag(iVar1251, 12, true);
			if ((does_entity_exist(iVar1251) && func_36(iVar1165, 64)) && !func_36(iVar1165, 16777216))
			{
				if ((_does_anim_scene_exist(Local_1012.f_2) && (_0x005e6f28dd7ed58d(Local_1012.f_2, "Sheriff") || !_is_anim_scene_started(Local_1012.f_2, false))) || !_does_anim_scene_exist(Local_1012.f_2))
				{
					task_start_scenario_at_position(iVar1251, -439112356, -276.1747f, 806.788f, 118.3788f, -86.39f, -1, true, false, 0, -1f, false);
					_0x78b4567e18b54480(Local_668[3]->f_8);
					set_scenario_group_enabled("RANSACK_BH_REWARD", true);
					iLocal_1223 = 1;
					func_39(&uLocal_1167, 16777216);
					func_246(&uLocal_1323);
					func_62(iVar1251, Global_35, func_61("SHERIFF_POS_RESP_A", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					if ((does_entity_exist(&(uLocal_1250[1])) && is_entity_dead(&(uLocal_1250[1]))) && func_36(iVar1162, -2147483648))
					{
						func_668();
						func_186(Local_1434[0], 1, 0);
						func_186(Local_1434[1], 1, 0);
						func_55(Local_1356[1], 0);
						iLocal_1030 = 6;
						func_39(&uLocal_1166, 65536);
					}
					iLocal_1032 = 18;
				}
			}
			break;
		case 18:
			set_ped_reset_flag(iVar1251, 12, true);
			if ((((func_43(iVar1251, 0, 1) && func_43(&(uLocal_1250[1]), 0, 0)) && iVar1212 == 0) && func_70(&uLocal_1323) > 1f) && func_67(iVar1251, -275.7681f, 806.8086f, 118.3773f, 1) < 1.75f)
			{
				if (!func_36(iVar1164, 65536) && !func_36(iVar1164, 262144))
				{
					if (!is_any_speech_playing(iVar1251) && !is_any_speech_playing(&(uLocal_1250[1])))
					{
						func_246(&uLocal_1323);
						if (!func_36(iVar1164, 8192))
						{
							func_62(&(uLocal_1250[1]), iVar1251, "RE_DJ_VAL_V1_WOMAN_PLEA_A", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							func_39(&uLocal_1166, 8192);
							return false;
						}
						else if (!func_36(iVar1164, 16384))
						{
							func_62(iVar1251, &(uLocal_1250[1]), "RE_DJ_VAL_V1_WOMAN_RSP_A", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							func_39(&uLocal_1166, 16384);
							return false;
						}
						else if (!func_36(iVar1164, 32768))
						{
							func_62(&(uLocal_1250[1]), iVar1251, "RE_DJ_VAL_V1_WOMAN_PLEA_B", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							func_39(&uLocal_1166, 32768);
							return false;
						}
						else if (!func_36(iVar1164, 65536))
						{
							func_62(iVar1251, &(uLocal_1250[1]), "RE_DJ_VAL_V1_WOMAN_RSP_B", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							func_39(&uLocal_1166, 65536);
							func_668();
							func_186(Local_1434[0], 1, 0);
							func_186(Local_1434[1], 1, 0);
							func_55(Local_1356[1], 0);
							iLocal_1030 = 6;
							func_217();
							func_265();
							func_186(Local_1399[0], 1, 0);
							func_186(Local_1399[1], 1, 0);
							func_55(Local_1356[0], 0);
							iLocal_1029 = 7;
							return false;
						}
					}
				}
				else if (!func_36(iVar1164, 65536))
				{
					func_39(&uLocal_1166, 65536);
				}
			}
			if (!func_36(iVar1165, 2097152))
			{
				if ((!does_entity_exist(Local_668[3]->f_8) || !func_50(Local_668[3]->f_8, iVar1229, 0, 1)) || (iVar1215 == 1 && !func_673(Global_35, -607400100, 0)))
				{
					func_39(&uLocal_1167, 2097152);
					set_scenario_group_enabled("RANSACK_BH_REWARD", false);
					func_246(&uLocal_1323);
					iLocal_1186 = 0;
				}
				else if ((func_674() && func_50(Global_35, iVar1229, 0, 1)) && iVar1215 == 0)
				{
					iLocal_1217 = 1;
				}
			}
			if ((((func_70(&uLocal_1323) > 15f && iVar1212 == 0) && !is_any_speech_playing(iVar1251)) && !is_any_speech_playing(Global_35)) && func_36(iVar1164, 65536))
			{
				if ((_does_volume_exist(iVar1229) && is_entity_in_volume(Global_35, iVar1229, true, 0)) && is_entity_in_volume(iVar1251, iVar1229, true, 0))
				{
					if (!func_36(iVar1165, 2097152))
					{
						switch (iVar1184)
						{
							case 0:
								func_62(iVar1251, Global_35, "RE_DJ_VAL_V1_PURSE_INTRO", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								func_246(&uLocal_1323);
								iLocal_1186 = iVar1184 + 1;
								break;
							case 1:
								func_62(iVar1251, Global_35, "RE_DJ_VAL_V1_PURSE_REMINDER", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								func_246(&uLocal_1323);
								iLocal_1186 = iVar1184 + 1;
								break;
						}
					}
					else
					{
						switch (iVar1184)
						{
							case 0:
								func_62(iVar1251, Global_35, "RE_DJ_VAL_V1_THANKS_C", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								func_246(&uLocal_1323);
								iLocal_1186 = iVar1184 + 1;
								break;
							case 1:
								func_62(iVar1251, Global_35, "RE_DJ_VAL_V1_THANKS_C_WAIT", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								func_246(&uLocal_1323);
								iLocal_1186 = iVar1184 + 1;
								break;
						}
					}
				}
				else
				{
					func_246(&uLocal_1323);
				}
				if (iVar1184 == 2)
				{
					func_72(&uLocal_1323);
					iLocal_1032 = 15;
				}
			}
			break;
		case 15:
			break;
		case 16:
			break;
	}
	return false;
}

int func_450(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = func_235(iParam0, iParam1);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	if (!is_entity_an_object(iVar0))
	{
		return 0;
	}
	if (is_entity_dead(iVar0) && !bParam2)
	{
		return 0;
	}
	return iVar0;
}

bool func_451(int iParam0)
{
	func_491(iParam0, 0, 0);
	if (func_492(iParam0))
	{
		return (door_system_get_door_state(iParam0) == 2 || door_system_get_door_state(iParam0) == 1);
	}
	return false;
}

bool func_452(var uParam0, float fParam1)
{
	if (func_621(uParam0, fParam1))
	{
		func_72(uParam0);
		return true;
	}
	return false;
}

void func_453(var uParam0)
{
	if (func_68(uParam0))
	{
		func_72(uParam0);
	}
}

void func_454(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		allow_sonar_blips(true);
		force_sonar_blips_this_frame();
	}
	_trigger_sonar_blip_2(iParam0, iParam1);
}

void func_455()
{
	func_186(Local_1434[0], 0, 0);
	func_186(Local_1434[1], 0, 0);
	func_55(Local_1356[1], 0);
}

void func_456()
{
	func_236(Local_1399[0], "INTERACT_QUESTION");
	func_236(Local_1399[1], "RE_INTER_ANTAGONIZE");
}

void func_457(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_285() != -1)
	{
		return;
	}
	if ((Global_36616 && func_675(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_676(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_677(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_678(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_677(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

bool func_458()
{
	if (func_418(0))
	{
		return true;
	}
	return false;
}

void func_459(var uParam0)
{
	if (!func_68(uParam0))
	{
	}
	if (!func_270(uParam0))
	{
		uParam0->f_2 = (func_271() - uParam0->f_1);
		func_679(uParam0, 2);
	}
}

void func_460(int iParam0, int iParam1)
{
	func_241(iParam0, 0, 0, 0, 1, 0, 0, 0);
}

bool func_461(int iParam0)
{
	return iParam0 != 0;
}

void func_462(int iParam0, var uParam1, vector3 vParam2, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, float fParam11, bool bParam12, bool bParam13)
{
	if (func_478(&(uParam1->f_3), 1))
	{
		func_479(uParam1);
		if (func_680(iParam0, fParam7, fParam11, bParam12, bParam13, 1084227584))
		{
			func_278();
		}
	}
	if (func_481(get_entity_coords(iParam0, true, false), uParam1, fParam7))
	{
		set_gameplay_entity_hint(iParam0, Vector(0f, 0f, 0f) + vParam2, bParam5, iParam8, iParam9, iParam10, 0);
		func_482(uParam1, get_entity_coords(iParam0, true, false), fParam6, iParam9);
	}
}

void func_463(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_182(iParam0))
	{
		return;
	}
	iVar0 = func_180(iParam0);
	if (bParam1)
	{
		func_681(iParam0, 4);
		func_682(iVar0, 1);
		func_683(iVar0, 1);
	}
	else
	{
		func_684(iParam0, 4);
		func_683(iVar0, 0);
	}
}

void func_464()
{
	if (!_does_anim_scene_exist(Local_1012.f_2))
	{
		Local_1012.f_2 = _create_anim_scene(Local_1012.f_6, 0, "PB_STAND_FL_LOOK", false, true);
		vVar0 = { 0f, 0f, -55f };
		set_anim_scene_origin(Local_1012.f_2, -277.1252f, 804.5879f, 118.3682f, vVar0, 2);
		if (!is_string_null_or_empty(Local_1012.f_6))
		{
			if (!_is_anim_scene_loaded(Local_1012.f_2, true, false))
			{
				load_anim_scene(Local_1012.f_2);
			}
		}
		if (!does_entity_exist(Local_668[3]->f_8))
		{
			Local_668[3]->f_8 = create_object(Local_668[3]->f_7, -277.3048f, 805.2084f, 118.4984f, true, true, false, false, true);
		}
		iLocal_1286 = get_closest_object_of_type(-277.1252f, 804.5879f, 118.3682f, 1f, -1231539219, true, false, true);
		if (func_43(iVar1251, 0, 1))
		{
			set_anim_scene_entity(Local_1012.f_2, "Sheriff", iVar1251, 0);
		}
		if (does_entity_exist(Local_668[3]->f_8))
		{
			set_anim_scene_entity(Local_1012.f_2, "MONEY", Local_668[3]->f_8, 0);
		}
		if (does_entity_exist(iVar1284))
		{
			set_anim_scene_entity(Local_1012.f_2, "DESK", iVar1284, 0);
		}
		if ((_get_anim_scene_entity_matrix(Local_1012.f_2, "Sheriff", &Local_1514, false, 0, 2) && _does_anim_scene_exist(Local_1012.f_2)) && !func_36(iVar1162, 128))
		{
			func_39(&uLocal_1164, 128);
		}
	}
}

int func_465(int iParam0)
{
	if (func_43(iParam0, 0, 1))
	{
		if (get_script_task_status(iParam0, 242628503, true) == 1)
		{
			return get_sequence_progress(iParam0);
		}
	}
	return 0;
}

void func_466()
{
	func_236(Local_1399[0], "BEAT_GRT_POS");
	func_236(Local_1399[1], "BEAT_GRT_NEG");
}

void func_467(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_271() - fParam1);
	func_679(uParam0, 1);
	func_685(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_468()
{
	func_39(&uLocal_1165, 1);
	func_486(&(uLocal_1250[1]), 0);
	Local_729.f_46 = 1;
	func_256(iVar1246, 1);
	if (func_36(iVar1166, 16777216))
	{
		_uiprompt_remove_group(func_40(Local_729.f_162), 1899245582);
		func_41(&uLocal_1168, 16777216);
	}
	func_42(&(Local_729.f_162), 1, 1);
	func_42(&(Local_729.f_163), 1, 1);
	func_463(Local_729.f_162, 0, 1);
	_0x18ff3110cf47115d(&(uLocal_1250[0]), 7, 0);
	func_186(Local_1399[0], 0, 0);
	func_186(Local_1399[1], 0, 0);
	func_239();
	stop_ped_speaking(&(uLocal_1250[1]), false);
	_0x935cf6e42baf7f4d(&(uLocal_1250[1]));
	if (_does_anim_scene_exist(iVar1010) && _is_anim_scene_started(iVar1010, false))
	{
		_delete_anim_scene(iVar1010);
	}
	set_current_ped_weapon(&(uLocal_1250[1]), -618550132, false, 0, false, false);
	open_sequence_task(&iLocal_1290);
	task_react(0, Global_35, 0f, 0f, 0f, "DEFAULT_ANGRY", 2f, 0, 4);
	task_swap_weapon(0, 1, false, 0, 0);
	task_combat_ped(0, Global_35, 0, 0);
	func_46(&(uLocal_1250[1]), &iLocal_1290, 0, 0, 1, 1);
	func_62(&(uLocal_1250[1]), Global_35, "RE_DJ_VAL_V1_ILO_QUIT_ATTACK_A", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	iLocal_1028 = 34;
	set_ped_keep_task(&(uLocal_1250[1]), true);
	iLocal_1216 = 1;
	func_254(&(uLocal_1250[1]));
	func_254(&(uLocal_1250[0]));
	if (does_blip_exist(&(iLocal_1271[0])))
	{
		remove_blip(iLocal_1271[0]);
	}
	func_686(&(uLocal_1250[1]), 831283580, 1, 1);
	if (func_43(&(uLocal_1250[1]), 0, 1))
	{
	}
	func_258(&Local_1399, 0, 1, 1, 0);
	func_85(Global_1935630, 4);
	iLocal_15 = 2;
	iLocal_1026 = 14;
}

bool func_469(int iParam0)
{
	iVar1 = func_484(&(uLocal_1250[1]), Global_35, 1060437492);
	switch (iVar1)
	{
		case 0:
		case 1:
			if (iVar1008 == 0)
			{
				sVar0 = "PBL_BED_LOOK_F";
			}
			else
			{
				iVar1 = func_484(&(uLocal_1250[1]), Global_35, 1f);
				if (iVar1 == 3)
				{
					sVar0 = "PBL_FLOOR_LOOK_L";
				}
				else
				{
					sVar0 = "PBL_FLOOR_LOOK_R";
				}
			}
			break;
		case 3:
			if (iVar1008 == 0)
			{
				sVar0 = "PBL_BED_LOOK_L";
			}
			else
			{
				sVar0 = "PBL_FLOOR_LOOK_L";
			}
			break;
		case 2:
			if (iVar1008 == 0)
			{
				sVar0 = "PBL_BED_LOOK_R";
			}
			else
			{
				sVar0 = "PBL_FLOOR_LOOK_R";
			}
			break;
		default:
			if (iVar1008 == 0)
			{
				sVar0 = "PBL_BED_LOOK_F";
			}
			else
			{
				sVar0 = "PBL_FLOOR_LOOK_R";
			}
			break;
	}
	if (_does_anim_scene_exist(iParam0))
	{
		if (_0xa9016536015de29d(iParam0, sVar0))
		{
			if (_0x23e33cb9f4a3f547(iParam0, sVar0))
			{
				_set_anim_scene_playback_list_bool(iParam0, sVar0, true);
				return true;
			}
			else
			{
				_0xdf7b5144e25cd3fe(iParam0, sVar0);
			}
		}
	}
	return false;
}

float func_470(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

void func_471()
{
	if ((!func_36(iVar1162, 262144) || !does_entity_exist(&(uLocal_1250[0]))) || func_32(player_id(), 1, 0, 1))
	{
		return;
	}
	iVar0 = 0;
	if (is_entity_in_volume(Global_35, iVar1233, true, 0) || is_entity_in_volume(Global_35, iVar1227, true, 0))
	{
		return;
	}
	if (!func_68(&uLocal_1350))
	{
		func_69(&uLocal_1350, 0);
	}
	if (func_70(&uLocal_1350) > 4f)
	{
		func_246(&uLocal_1350);
		func_89(&iLocal_1169);
		iLocal_1169 = add_shocking_event_for_entity(161068336, &(uLocal_1250[0]), 0f, 10f, 0.25f, 6f, -1f, 180f, false, true, -1, -1);
		func_687(&uLocal_1276);
	}
	iVar33 = 0;
	iVar34 = 0;
	fVar38 = func_271();
	iVar39 = 0;
	vVar35 = { get_entity_coords(&(uLocal_1250[0]), false, false) };
	iVar40 = 0;
	if (func_224(&(uLocal_1250[0]), 0))
	{
		iVar40 = 1;
	}
	if (iVar0 == 0)
	{
		iVar41 = 0;
		iVar42 = (iVar1 - 1);
		iVar43 = create_itemset(true);
		_0x886171a12f400b89(iVar1238, iVar43, 1);
		iVar41 = get_itemset_size(iVar43);
		if (iVar41 < iVar42)
		{
			iVar42 = (iVar41 - 1);
		}
		iVar44 = 0;
		iVar44 = 0;
		while (iVar44 <= iVar42)
		{
			if (iVar44 < iVar42)
			{
				iVar17[iVar44] = get_ped_index_from_entity_index(_get_entity_from_item(get_indexed_item_in_itemset(iVar44, iVar43)));
				if (((((func_43(&(iVar17[iVar44]), 0, 1) && &iVar17[iVar44] != Global_35) && &iVar17[iVar44] != &uLocal_1250[1]) && &iVar17[iVar44] != iVar1251) && is_ped_human(&(iVar17[iVar44]))) && ((func_224(&(iVar17[iVar44]), 1) && iVar40 == 1) || (!func_224(&(iVar17[iVar44]), 1) && iVar40 == 0)))
				{
					iVar1[iVar44] = &iVar17[iVar44];
					iVar39++;
				}
			}
			iVar44++;
		}
		_0x20a4bf0e09bee146(iVar43);
		destroy_itemset(iVar43);
	}
	if (iVar0 == 1)
	{
		iVar39 = _0xf4860514ad354226(iVar1167, vVar35, 15f, &iVar1);
	}
	if (iVar39 > 0)
	{
		iVar45 = 0;
		iVar46 = 1;
		if (!func_63(Global_35, &(uLocal_1250[0])))
		{
			iVar46 = 0;
		}
		if (iVar39 >= 15)
		{
			iVar39 = 14;
		}
		vVar47 = { 0f, 0f, 0f };
		iVar45 = 0;
		while (iVar45 <= iVar39)
		{
			if (iVar0 == 0 || (((((func_43(&(iVar1[iVar45]), 0, 1) && &iVar1[iVar45] != Global_35) && &iVar1[iVar45] != &uLocal_1250[1]) && &iVar1[iVar45] != iVar1251) && is_ped_human(&(iVar1[iVar45]))) && ((func_224(&(iVar1[iVar45]), 1) && iVar40 == 1) || (!func_224(&(iVar1[iVar45]), 1) && iVar40 == 0))))
			{
				vVar47 = { get_entity_coords(&(iVar1[iVar45]), true, false) };
				if (func_50(Global_35, iVar1242, 0, 1) && func_224(Global_35, 1))
				{
					_0xeeed8fafec331a70(&(iVar1[iVar45]), Global_36, 1);
					task_react(&(iVar1[iVar45]), Global_35, 0f, 0f, 0f, "DEFAULT_SCARED", 2f, 20f, 4);
					iVar34 = 1;
					func_447(&(iVar1[iVar45]), "GET_THE_LAW", -435184212, Global_35, 1, 0, 0, 1);
					_0xf0b67bad53c35bd9(&(iVar1[iVar45]), Global_35, &(uLocal_1250[0]), vVar35, -493957506);
					_0x5af24ca9c974e51a(&(uLocal_1250[0]), Global_35);
					func_89(&iLocal_1169);
					set_ped_config_flag(&(uLocal_1250[0]), 243, false);
					set_ped_config_flag(&(uLocal_1250[0]), 113, false);
					_0xedfc6c1fd1c964f5(player_id(), -493957506, 0, 0, 0, 0, 0, 0, 0);
					_report_crime(player_id(), -493957506, 0, &(uLocal_1250[0]), true);
					iLocal_1211 = 1;
					return;
				}
				iVar50 = 5;
				if ((iVar46 == 1 && _0x508f5053e3f6f0c4(&(iVar1[iVar45]), Global_36, 2f)) || (iVar46 == 0 && _0x508f5053e3f6f0c4(&(iVar1[iVar45]), Global_36, 2f)))
				{
					if (!decor_exist_on(&(iVar1[iVar45]), "REDJ_Witness_Time") && !decor_exist_on(&(iVar1[iVar45]), "bReacted_To_Shocking_Event"))
					{
						iVar50 = 0;
					}
					else if (decor_exist_on(&(iVar1[iVar45]), "REDJ_Witness_Time") && !decor_exist_on(&(iVar1[iVar45]), "bReacted_To_Shocking_Event"))
					{
						if ((fVar38 - decor_get_float(&(iVar1[iVar45]), "REDJ_Witness_Time")) > 2f)
						{
							iVar50 = 1;
						}
						else
						{
							iVar50 = 3;
						}
					}
					else if ((decor_exist_on(&(iVar1[iVar45]), "REDJ_Witness_Time") && decor_exist_on(&(iVar1[iVar45]), "bReacted_To_Shocking_Event")) && func_59(&(iVar1[iVar45]), Global_35, 1, 1) < 8f)
					{
						if ((fVar38 - decor_get_float(&(iVar1[iVar45]), "REDJ_Witness_Time")) > 8f)
						{
							iVar50 = 2;
						}
						else
						{
							iVar50 = 4;
						}
					}
				}
				switch (iVar50)
				{
					case 0:
						decor_set_float(&(iVar1[iVar45]), "REDJ_Witness_Time", func_271());
						iVar33 = 1;
						uLocal_1258 = &iVar1[iVar45];
						if (iVar1180 < (iVar1257 - 1))
						{
							uLocal_1259[iVar1180] = &iVar1[iVar45];
							uLocal_1182 = iVar1180 + 1;
						}
						task_react(&(iVar1[iVar45]), &(uLocal_1250[0]), 0f, 0f, 0f, "Default_Curious", 7f, 0, 4);
						break;
					case 3:
						break;
					case 4:
						break;
					case 1:
					case 2:
						func_246(&uLocal_1350);
						if (iVar1175 < 3)
						{
							func_454(249295937, iVar1256, 1);
						}
						if (iVar50 == 1)
						{
						}
						decor_set_float(&(iVar1[iVar45]), "REDJ_Witness_Time", func_271());
						decor_set_bool(&(iVar1[iVar45]), "bReacted_To_Shocking_Event", true);
						if ((!func_63(Global_35, &(uLocal_1250[0])) && !func_36(iVar1162, -2147483648)) && !func_207(Global_35, iVar1238, 1, 0))
						{
							iVar34 = 0;
							iLocal_1177 = 3;
							decor_set_float(&(iVar1[iVar45]), "REDJ_Witness_Time", -1f);
							func_687(&uLocal_1276);
						}
						else if ((func_645(Global_35) && has_entity_clear_los_to_entity(&(iVar1[iVar45]), Global_35, 17)) && !func_36(iVar1162, -2147483648))
						{
							if (func_59(Global_35, &(uLocal_1250[0]), 1, 1) < 3f)
							{
								iLocal_1177 = 3;
								decor_set_float(&(iVar1[iVar45]), "REDJ_Witness_Time", -1f);
								func_687(&uLocal_1276);
							}
						}
						if (iVar1175 < 2 && iVar50 == 1)
						{
							iVar34 = 1;
							task_react(&(iVar1[iVar45]), Global_35, 0f, 0f, 0f, "DEFAULT_NERVOUS", 4f, 0, 4);
							func_447(&(iVar1[iVar45]), "WHATS_GOING_ON", -417894478, Global_35, 1, 0, 0, 1);
						}
						else if (!func_36(iVar1162, -2147483648))
						{
							_0xeeed8fafec331a70(&(iVar1[iVar45]), Global_36, 1);
							iVar34 = 1;
							func_447(&(iVar1[iVar45]), "GET_THE_LAW", 1808677283, Global_35, 1, 0, 0, 1);
							_0x10827b5a0aac56a7(player_id(), -493957506, &(iVar1[iVar45]));
							_0xf0b67bad53c35bd9(&(iVar1[iVar45]), Global_35, &(uLocal_1250[0]), vVar35, -493957506);
							set_ped_keep_task(&(iVar1[iVar45]), true);
							iLocal_1211 = 1;
							_0x5af24ca9c974e51a(&(uLocal_1250[0]), Global_35);
							func_89(&iLocal_1169);
							set_ped_config_flag(&(uLocal_1250[0]), 243, false);
							set_ped_config_flag(&(uLocal_1250[0]), 113, false);
							iLocal_1169 = add_shocking_event_for_entity(869302489, &(uLocal_1250[0]), 0f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
							func_687(&uLocal_1276);
						}
						if (iVar1175 >= 3)
						{
							iVar34 = 0;
						}
						if (!func_68(&uLocal_1308) && iVar34 == 1)
						{
							func_69(&uLocal_1308, 0);
						}
						break;
					case 5:
						break;
				}
			}
			iVar45++;
		}
		if (iVar33 == 1 && func_43(iVar1256, 0, 1))
		{
			func_393();
			func_12(&Local_1470);
		}
	}
}

void func_472(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
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
		if (func_182(iParam0->f_6))
		{
			if (is_bit_set(*iParam0, 1))
			{
				func_688(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_493(iParam0->f_6, iParam0->f_5, 0);
			}
			func_463(iParam0->f_6, 0, 1);
		}
		else
		{
			set_bit(iParam0, 14);
		}
		set_bit(iParam0, 0);
	}
	else
	{
		func_236(iParam0, iParam0->f_5);
		if (!is_bit_set(*iParam0, 13))
		{
			set_bit(iParam0, 0);
		}
	}
	set_bit(iParam0, 15);
}

void func_473(int iParam0, float fParam1)
{
	iParam0->f_25 = fParam1;
}

void func_474(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_83(iParam0, 1);
	}
	else
	{
		func_82(iParam0, 1);
	}
}

int func_475(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_476(int iParam0)
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

int func_477(int iParam0)
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

bool func_478(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_479(var uParam0)
{
	if (func_478(&(uParam0->f_3), 4))
	{
	}
	if (is_gameplay_hint_active())
	{
		if ((!func_689(uParam0) || func_478(&(uParam0->f_3), 4)) && !func_478(&(uParam0->f_3), 256))
		{
			disable_control_action(0, -1450761377, false);
			disable_control_action(0, -771458680, false);
			disable_control_action(0, -1722177808, false);
			disable_control_action(1, -1450761377, false);
			disable_control_action(1, -771458680, false);
			disable_control_action(1, -1722177808, false);
			disable_control_action(2, -1450761377, false);
			disable_control_action(2, -771458680, false);
			disable_control_action(2, -1722177808, false);
		}
		disable_control_action(2, 2139949496, false);
	}
	if (func_690(uParam0))
	{
		func_278();
	}
	if (!func_478(&(uParam0->f_3), 16))
	{
		if (func_68(uParam0))
		{
			if (func_691(uParam0) < uParam0->f_4)
			{
				set_ped_max_move_blend_ratio(player_ped_id(), 1f);
			}
		}
	}
}

bool func_480(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, float fParam5)
{
	if (bParam4 && is_ped_injured(iParam0))
	{
		return true;
	}
	if (func_680(iParam0, fParam1, fParam2, bParam3, bParam4, fParam5))
	{
		return true;
	}
	return false;
}

bool func_481(vector3 vParam0, var uParam3, float fParam4)
{
	if (!func_692(uParam3->f_7, uParam3->f_8))
	{
		return false;
	}
	if (func_478(&(uParam3->f_3), 1))
	{
		return false;
	}
	if (is_gameplay_hint_active())
	{
		return false;
	}
	fVar0 = func_67(Global_35, vParam0, 1);
	if (fVar0 > fParam4)
	{
		return false;
	}
	if (!func_693(vParam0, uParam3))
	{
		return false;
	}
	if (!func_478(&(uParam3->f_3), 2))
	{
		if (!is_sphere_visible(vParam0, 0.5f))
		{
			return false;
		}
		if (!func_694(vParam0, uParam3))
		{
			return false;
		}
	}
	return true;
}

void func_482(var uParam0, vector3 vParam1, float fParam4, int iParam5)
{
	if (_0xa24c1d341c6e0d53(1, 0, 0))
	{
		return;
	}
	set_gameplay_hint_fov(fParam4);
	fVar0 = func_695(vParam1, 1);
	if (!func_478(&(uParam0->f_3), 32))
	{
		if (fVar0 > 60f)
		{
			iVar1 = 4000;
			iVar2 = 3500;
		}
		else if (fVar0 > 40f)
		{
			iVar1 = 3750;
			iVar2 = 3250;
		}
		else if (fVar0 > 20f)
		{
			iVar1 = 3500;
			iVar2 = 3000;
		}
		else if (fVar0 > 10f)
		{
			iVar1 = 3250;
			iVar2 = 2750;
		}
		else
		{
			iVar1 = 3000;
			iVar2 = 2500;
		}
		if (iParam5 > iVar1)
		{
			uParam0->f_4 = iVar1;
		}
		else if (iParam5 < iVar2)
		{
			uParam0->f_4 = iVar2;
		}
		else
		{
			uParam0->f_4 = iParam5;
		}
		_0x1f6ebd94680252ce(iVar1, -1082130432);
		_0xf48664e9c83825e3(iVar2, -1082130432);
	}
	else
	{
		uParam0->f_4 = iParam5;
	}
	func_246(uParam0);
	func_13(&(uParam0->f_3), 1);
}

Vector3 func_483(int iParam0, float fParam1)
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
	func_696(vVar6);
	vVar6 = { FtoV((get_entity_speed(iParam0) * fParam1)) * vVar6 };
	vVar3 = { vVar0 + vVar6 };
	return vVar3;
}

int func_484(int iParam0, int iParam1, float fParam2)
{
	vVar0 = { get_entity_coords(iParam1, false, false) };
	return func_697(iParam0, vVar0, fParam2);
}

void func_485(int iParam0, int iParam1)
{
	func_699(func_698(iParam0, iParam1));
}

void func_486(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (decor_exist_on(iParam0, "honor_block"))
		{
			iVar0 = decor_get_int(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_675(iParam1));
		decor_set_int(iParam0, "honor_block", iVar0);
	}
}

bool func_487(int iParam0, int iParam1)
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

void func_488()
{
	if (_does_volume_exist(iVar1227))
	{
		func_52(iVar1227, 0);
	}
	if (_does_volume_exist(iVar1228))
	{
		func_52(iVar1228, 0);
	}
	if (_does_volume_exist(iVar1236))
	{
		func_52(iVar1236, 0);
	}
	if (_does_volume_exist(iVar1233))
	{
		func_52(iVar1233, 0);
	}
}

void func_489(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
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

int func_490(int iParam0, int iParam1)
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

int func_491(int iParam0, bool bParam1, bool bParam2)
{
	if (!is_door_registered_with_system(iParam0))
	{
		if ((network_is_in_session() && _does_thread_exist(&(Global_1051081->f_15[0]))) && bParam1)
		{
			_0xd99229fe93b46286(iParam0, 1, 1, 0, &(Global_1051081->f_15[0]), 0, 0);
		}
		else
		{
			_0xd99229fe93b46286(iParam0, 1, 0, 0, 0, 0, 0);
		}
	}
	else if ((network_is_in_session() && _does_thread_exist(&(Global_1051081->f_15[0]))) && bParam1)
	{
		if (!_0xb5ded7b65c604fdf(iParam0))
		{
			_0xd99229fe93b46286(iParam0, 1, 1, 0, &(Global_1051081->f_15[0]), 0, 0);
		}
	}
	if (bParam2)
	{
		_0x1f1fabfe9b2a1254(iParam0, 1);
	}
	return iParam0;
}

bool func_492(int iParam0)
{
	if (func_461(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

void func_493(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_182(iParam0))
	{
		return;
	}
	iVar0 = func_180(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, sParam1);
}

void func_494(var uParam0, vector3 vParam1, float fParam4)
{
	if (func_43(*uParam0, 0, 1) && func_67(*uParam0, vParam1, 0) < fParam4)
	{
		set_ped_reset_flag(*uParam0, 94, true);
		_0xc6981aff6d2a71c2(*uParam0);
	}
}

void func_495(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_492(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam2)
		{
			door_system_set_door_state(iParam0, 1);
		}
		door_system_set_open_ratio(iParam0, iParam1, iParam3);
	}
}

void func_496(int iParam0, bool bParam1)
{
	if (func_492(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 2 || bParam1)
		{
			door_system_set_door_state(iParam0, 2);
		}
	}
}

void func_497(int iParam0, bool bParam1)
{
	if (func_492(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam1)
		{
			door_system_set_door_state(iParam0, 1);
		}
	}
}

void func_498(int iParam0, bool bParam1)
{
	if (func_492(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 0 || bParam1)
		{
			door_system_set_door_state(iParam0, 0);
		}
	}
}

bool func_499()
{
	return true;
}

bool func_500()
{
	if (func_182(Local_729.f_162))
	{
		_uiprompt_set_ambient_group_this_frame(Global_35, 1f, 1, 1, 1899245582, "NAME_CORPSE", 0);
		if (func_700(Local_729.f_162, 1))
		{
			if (func_701(Local_729.f_162, 1))
			{
				if (func_36(iVar1166, 16777216))
				{
					_uiprompt_remove_group(func_40(Local_729.f_162), 1899245582);
					func_41(&uLocal_1168, 16777216);
				}
				func_42(&(Local_729.f_162), 1, 1);
				return true;
			}
		}
		else
		{
			iVar0 = func_180(Local_729.f_162);
			(*Global_1945938)[iVar0]->f_17 = -1;
		}
	}
	else
	{
		Local_729.f_162 = func_702("PICKUP_GENERIC", -349518703, Local_923.f_7, 2.5f, 1, 1, 0, 5, 570, 4000, 10, 1073741824, 0, -820096546, 0);
		func_463(Local_729.f_162, 1, 1);
		_uiprompt_set_group(func_40(Local_729.f_162), 1899245582, 0);
		func_39(&uLocal_1168, 16777216);
	}
	return false;
}

void func_501(int iParam0, vector3 vParam1, var uParam4)
{
	func_703(&Local_1101);
	Local_1101.f_1 = iParam0;
	Local_1101.f_8 = { vParam1 };
	Local_1101.f_19 = uParam4;
	Local_1101.f_23 = 384;
	Local_1101.f_18 = 0f;
	func_83(&(Local_1101.f_23), 1024);
	func_83(&(Local_1101.f_23), 1);
}

bool func_502()
{
	if ((!func_36(iVar1163, 262144) && func_185(Global_36, -314.6801f, 817.1199f, 120.9763f, -314.8636f, 818.1626f, 120.9763f)) && iVar1160 > 0)
	{
		if (!func_68(&uLocal_1311))
		{
			func_69(&uLocal_1311, 0);
		}
		if (((func_70(&uLocal_1311) > 8f && !func_36(iVar1164, 524288)) && !is_any_speech_playing(Global_35)) && !is_any_speech_playing(&(uLocal_1250[1])))
		{
			if (!func_36(iVar1163, 131072))
			{
				func_62(&(uLocal_1250[1]), Global_35, func_61("HURRY_UP_A", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_39(&uLocal_1165, 131072);
			}
			else if (!func_36(iVar1163, 262144))
			{
				func_62(&(uLocal_1250[1]), Global_35, func_61("HURRY_UP_B", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_39(&uLocal_1165, 262144);
			}
			func_246(&uLocal_1311);
			return true;
		}
	}
	return false;
}

bool func_503(int iParam0, bool bParam1)
{
	if (func_43(iParam0, 0, 1))
	{
		return (is_scripted_speech_playing(iParam0) || (bParam1 && is_any_speech_playing(iParam0)));
	}
	return false;
}

float func_504(var uParam0)
{
	if (!func_68(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_270(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_271() - uParam0->f_1);
}

bool func_505(float fParam0)
{
	if (func_704(1))
	{
		return true;
	}
	if (func_68(&uLocal_0) && !func_452(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

int func_506(int iParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, bParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_705(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_507(int iParam0)
{
	if (func_285() != -1)
	{
		return;
	}
	iVar0 = func_706(iParam0);
	fVar1 = func_707(iParam0);
	if ((Global_1347477->f_117 || !func_708(31)) || !func_709(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_710(iVar0) >= 7)
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
	func_711(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_714(_create_var_string(6, func_712(iParam0), fVar1), "itemtype_textures", func_713(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_508()
{
	iVar0 = 0;
	while (iVar0 < iVar1173)
	{
		if (!is_entity_dead(&(iLocal_1254[iVar0])))
		{
			set_ped_config_flag(&(iLocal_1254[iVar0]), 113, true);
			task_eat(&(iLocal_1254[iVar0]), &(uLocal_1250[0]), 1);
		}
		iVar0++;
	}
}

bool func_509(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_67(iParam0, Global_36, 1);
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

bool func_510(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

void func_511(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, float fParam5)
{
	_task_start_scenario_in_place(iParam0, iParam1, iParam2, bParam3, iParam4, fParam5, false);
}

void func_512()
{
	func_472(Local_1434[0], "RE_INTER_POS", " ", -163964935, 0, 0, 0, 0, 0);
	func_472(Local_1434[1], "RE_INTER_ANTAGONIZE", " ", 648122183, 0, 0, 0, 0, 0);
}

void func_513(int iParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, bool bParam7, bool bParam8, char* sParam9, float fParam10)
{
	task_start_scenario_at_position(iParam0, iParam1, vParam2, fParam5, iParam6, bParam7, bParam8, sParam9, fParam10, false);
}

void func_514(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_42(&((*uParam1)[iParam0->f_3]->f_6), 1, 1);
		if (bParam2)
		{
			func_55(iParam0, 0);
		}
	}
}

void func_515(int iParam0, bool bParam1, bool bParam2)
{
	set_ped_config_flag(iParam0, 297, false);
	set_ped_config_flag(iParam0, 301, false);
	set_ped_config_flag(iParam0, 315, false);
	set_ped_config_flag(iParam0, 130, false);
	set_ped_config_flag(iParam0, 178, bParam2);
	set_ped_config_flag(iParam0, 330, false);
	set_ped_config_flag(iParam0, 317, bParam1);
}

int func_516()
{
	iVar0 = func_715();
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

bool func_517(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_518(int iParam0, int iParam1)
{
	if (!func_517(iParam0))
	{
		return false;
	}
	return (Global_1395482->f_2[iParam0] && iParam1) != 0;
}

char* func_519(char* sParam0)
{
	return sParam0;
}

void func_520(int iParam0, int iParam1)
{
	_journal_write_entry(iParam0);
	if (iParam1 == 1)
	{
		func_716(1);
	}
}

void func_521(int iParam0)
{
	iVar1 = 0;
	if (iParam0 == 0 && Global_43891 == 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (&Global_40.f_11922[iVar0] == 0)
		{
			Jump @96; //curOff = 52
		}
		else
		{
			func_520(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_716(1);
	}
}

int func_522(int iParam0, bool bParam1, bool bParam2)
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
				if (!bParam1 || func_717(iVar2))
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

int func_523(int iParam0)
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

int func_524(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return -1;
	}
	if (!func_718(iParam1, &iVar0, &iVar1, 0, 0))
	{
		return -1;
	}
	return func_301(iParam0, iVar0, iVar1, bParam2);
}

int func_525(int iParam0)
{
	if (!func_298(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0];
}

int func_526(int iParam0)
{
	if (!func_298(iParam0))
	{
		return 0;
	}
	return (*Global_1895087)[iParam0]->f_1;
}

bool func_527(int iParam0)
{
	if (!func_298(iParam0))
	{
		return false;
	}
	return _does_thread_exist((*Global_1895087)[iParam0]->f_2);
}

void func_528(int iParam0, int iParam1)
{
	if (func_285() != -1)
	{
		return;
	}
	if (!func_298(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (&Global_24887[iParam0] - (Global_24887[iParam0] && iParam1));
}

void func_529(int iParam0)
{
	if (!func_298(iParam0))
	{
		return;
	}
	iVar0 = func_719(iParam0);
	if (does_entity_exist(iVar0))
	{
		if (does_entity_belong_to_this_script(iVar0, false))
		{
			set_ped_as_no_longer_needed(&iVar0);
		}
	}
	(*Global_1895087)[iParam0]->f_2 = 0;
}

bool func_530(int iParam0)
{
	return iParam0 != 0;
}

int func_531(int iParam0, bool bParam1)
{
	if (!func_298(iParam0))
	{
		return 0;
	}
	if (!func_299(iParam0, 2))
	{
		return 0;
	}
	if (func_525(iParam0) == 0)
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_526(iParam0)))
	{
		return 1;
	}
	if (func_299(iParam0, 1) && !bParam1)
	{
		func_720(iParam0, 128);
		return 1;
	}
	func_528(iParam0, 129);
	func_529(iParam0);
	_0xfc77c5b44d5ff7c0(func_526(iParam0));
	func_721(iParam0, 0);
	return 1;
}

int func_532(int iParam0)
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

void func_533(int iParam0)
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

void func_534(var uParam0)
{
	if (func_182(uParam0->f_162))
	{
		func_42(&(uParam0->f_162), 1, 1);
	}
	if (func_182(uParam0->f_163))
	{
		func_42(&(uParam0->f_163), 1, 1);
	}
	if (func_182(uParam0->f_164))
	{
		func_42(&(uParam0->f_164), 1, 1);
	}
	if (func_182(uParam0->f_165))
	{
		func_42(&(uParam0->f_165), 1, 1);
	}
}

void func_535(var uParam0)
{
	if (uParam0->f_170)
	{
		func_722();
	}
}

bool func_536(var uParam0)
{
	if (func_723(uParam0) || uParam0->f_44)
	{
		uParam0->f_44 = 1;
		func_724(uParam0->f_3);
		func_359(uParam0, 0, 1);
		func_725(uParam0->f_3, uParam0->f_51.f_5, 0, uParam0->f_43, -1);
		func_726(0, 0);
		return true;
	}
	return false;
}

bool func_537(int iParam0)
{
	if (!func_277(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0]->f_4 > 0;
}

int func_538(int iParam0)
{
	iVar1 = iParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_181(&iVar1, -2147483648);
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

int func_539()
{
	return get_player_group(get_player_index());
}

bool func_540(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_285() != -1)
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

void func_541(var uParam0)
{
	if (*uParam0 != 0)
	{
		request_model(*uParam0, false);
	}
}

bool func_542(int iParam0)
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

int func_543(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1993529370:
			return 14;
		case -1910231185:
			return 27;
		case -1779466334:
			return 30;
		case -1751068532:
			return 19;
		case -1600776215:
			return 0;
		case -1403291038:
			return 13;
		case -1350098362:
			return 28;
		case -1132827806:
			return 18;
		case -1066004925:
			return 36;
		case -586199837:
			return 23;
		case -529686691:
			return 20;
		case -505280232:
			return 29;
		case -423064657:
			return 9;
		case -415041951:
			return 3;
		case -316764041:
			return 15;
		case -156236308:
			return 1;
		case -115118166:
			return 8;
		case -27924880:
			return 4;
		case 0:
			return 38;
		case 508286680:
			return 5;
		case 557524588:
			return 11;
		case 623901469:
			return 16;
		case 651189962:
			return 31;
		case 830459706:
			return 25;
		case 1274330613:
			return 22;
		case 1302444626:
			return 34;
		case 1398684735:
			return 26;
		case 1556254948:
			return 2;
		case 1570236479:
			return 6;
		case 1590600971:
			return 10;
		case 1598344177:
			return 21;
		case 1601295776:
			return 33;
		case 1618820662:
			return 32;
		case 1754500170:
			return 35;
		case 1763394652:
			return 17;
		case 1792646445:
			return 12;
		case 1831828781:
			return 24;
		case 1843135693:
			return 7;
		case 1869671285:
			return 37;
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

int func_544(int iParam0)
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

int func_545(int iParam0)
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

bool func_546(int iParam0, int iParam1, var uParam2)
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

Vector3 func_547(int iParam0, var uParam1)
{
	iVar1 = -1;
	if (does_entity_exist(iParam0))
	{
		vVar2 = { get_entity_coords(iParam0, true, false) };
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!func_329(*(*uParam1)[iVar0]))
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

void func_548(var uParam0, bool bParam1)
{
	if (!does_blip_exist(uParam0->f_6))
	{
		uParam0->f_6 = _blip_add_for_coord(-1702907713, *uParam0);
		_blip_set_modifier(uParam0->f_6, 580546400);
		set_blip_name_from_text_file(uParam0->f_6, "BLIP_DEBUG");
		if (bParam1)
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_74("BEAT_GLB", 5500, 0, 1, 0, 0, -1, -1, 0);
		}
		_0x9851de7aec10b4e1(*uParam0, 100f, 1, 0);
	}
}

bool func_549(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_550(vector3 vParam0, float fParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (!bParam8 && network_is_game_in_progress())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_329(vParam0))
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
		if (func_378(vParam0))
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
	func_727(iVar0, bParam8);
	return iVar0;
}

void func_551(int iParam0)
{
	if (!func_277(iParam0))
	{
		return;
	}
	func_728(iParam0);
}

void func_552(var uParam0, vector3 vParam1)
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

int func_553(int iParam0)
{
	if (func_142(iParam0, 2))
	{
		return 200;
	}
	if (func_142(iParam0, 4))
	{
		return 70;
	}
	if (func_142(iParam0, 32))
	{
		return 400;
	}
	return 110;
}

int func_554(int iParam0)
{
	if (func_126(iParam0, 131072))
	{
		return 0;
	}
	else
	{
		if (iParam0 == 6)
		{
			if (func_588() == 8)
			{
				return 3;
			}
		}
		bVar0 = func_126(iParam0, 2);
		bVar1 = func_126(iParam0, 1);
		bVar2 = (bVar0 && bVar1);
		if (bVar2)
		{
			if (!func_364())
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

void func_555(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
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
	if (func_142(iParam3, 2097152))
	{
		*fParam0 = (*fParam0 + 15f);
		*iParam2 = ceil((*fParam0 + 50f));
	}
	else
	{
		*iParam2 = 70;
	}
}

void func_556(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
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
	if (func_142(iParam3, 2))
	{
		*fParam0 = (*fParam0 + 60f);
		*fParam1 = (*fParam1 + 60f);
		*iParam2 = ceil((*fParam0 + 110f));
	}
	else if (func_142(iParam3, 2097152))
	{
		*fParam0 = (*fParam0 + 30f);
		*iParam2 = ceil((*fParam0 + 30f));
	}
	else
	{
		*iParam2 = 70;
	}
}

bool func_557(int iParam0, int iParam1)
{
	iVar0 = (func_545(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_17504.f_12[iVar1]), iVar2);
}

bool func_558(int iParam0, vector3 vParam1, float fParam4, float fParam5)
{
	if (func_329(vParam1))
	{
		return false;
	}
	if (func_563(iParam0, vParam1))
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

bool func_559(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_560(int iParam0, vector3 vParam1, int iParam4, float fParam5, bool bParam6, float fParam7)
{
	fVar0 = func_308(bParam6, fParam7, vdist(vParam1, get_entity_coords(iParam0, true, false)));
	if (!iParam4->f_1)
	{
		if (fVar0 < iParam4->f_2 || (func_208(vParam1, iParam0) && get_entity_speed(iParam0) > fParam5))
		{
			*iParam4 = func_168();
			iParam4->f_2 = func_67(iParam0, vParam1, 1);
			iParam4->f_1 = 1;
		}
	}
	else if (fVar0 > iParam4->f_2 || (!func_208(vParam1, iParam0) && get_entity_speed(iParam0) > fParam5))
	{
		*iParam4 = func_168();
		iParam4->f_2 = func_67(iParam0, vParam1, 1);
		iParam4->f_1 = 0;
	}
}

bool func_561(var uParam0, int iParam1)
{
	if (uParam0->f_1 == 1)
	{
		return (func_168() - *uParam0) >= iParam1;
	}
	return false;
}

int func_562(var uParam0)
{
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_329(*uParam0->f_12[iVar0]))
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

bool func_563(int iParam0, vector3 vParam1)
{
	if (!func_126(iParam0, 1))
	{
		iVar0 = 1;
	}
	if (func_729(vParam1, 0, 0, iVar0))
	{
		return true;
	}
	if (func_126(iParam0, 33554432))
	{
		if (func_730(vParam1, 200f, 1, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_564(int iParam0, var uParam1)
{
	iVar0 = 1;
	if (func_142(iParam0, 128))
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
	if (func_126(iParam0, 1) && !func_126(iParam0, 2))
	{
		if (func_126(iParam0, 4096) || func_126(iParam0, 2048))
		{
			if (func_731(*uParam1))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

bool func_565(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	uVar0 = func_1(&uParam0);
	if (!func_732())
	{
		return false;
	}
	return true;
}

bool func_566(int iParam0)
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

int func_567(int iParam0)
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

Vector3 func_568(vector3 vParam0, bool bParam3, vector3 vParam4, bool bParam7)
{
	if (bParam7)
	{
		return vParam4;
	}
	return _get_object_offset_from_coords(vParam0, bParam3, vParam4);
}

float func_569(float fParam0, float fParam1, bool bParam2)
{
	if (bParam2)
	{
		return fParam1;
	}
	return func_733((fParam0 + fParam1));
}

int func_570(int iParam0, var uParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, int iParam10)
{
	if (bParam6)
	{
		func_734(&vParam2, uParam1->f_22);
	}
	if (!bParam7 && func_735(uParam1))
	{
		iVar0 = _0xeaf682a14f8e5f53(uParam1->f_5, vParam2, bParam5, 1, 1, iParam9, iParam10);
		if (!does_entity_exist(iVar0))
		{
			iVar0 = func_506(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
		}
		else if (_is_metaped_outfit_request_valid(uParam1->f_5))
		{
			_release_metaped_outfit_request(uParam1->f_5);
		}
	}
	else
	{
		iVar0 = func_506(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
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
		if (!is_string_null_or_empty(&(uParam1->f_23)) && !func_736(iVar0))
		{
			func_133(iVar0, &(uParam1->f_23), 0);
		}
		if (func_736(iVar0))
		{
			set_animal_tuning_bool_param(iVar0, 48, true);
		}
		else
		{
			set_ped_config_flag(iVar0, 307, true);
		}
		if (func_737(&(uParam1->f_22)))
		{
			set_ped_can_ragdoll(iVar0, true);
			set_ped_to_ragdoll(iVar0, 1000, 1000, 1, false, false, false);
			set_ped_config_flag(iVar0, 186, !func_738(&(uParam1->f_22)));
			func_248(iVar0, func_739(&(uParam1->f_22)), 0);
		}
		else
		{
			request_ped_visibility_tracking(iVar0);
		}
		if (func_740(&(uParam1->f_22)))
		{
			freeze_entity_position(iVar0, true);
		}
		if (func_741(&(uParam1->f_22)))
		{
			func_742(iVar0, 1);
		}
		_0xa91e6cf94404e8c9(iVar0);
		set_ped_config_flag(iVar0, 6, func_743(&(uParam1->f_22)));
		set_ped_config_flag(iVar0, 393, true);
		if (!func_36(uParam1->f_22, 8192))
		{
			_set_entity_something(iVar0, true);
		}
		if (!func_736(iVar0))
		{
			func_745(iVar0, !func_744(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 4, func_746(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 297, !func_747(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 317, !func_747(&(uParam1->f_22)));
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

bool func_571(int iParam0, int iParam1)
{
	if (func_748(iParam0) != -1)
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

bool func_572(var uParam0)
{
	return func_36(*uParam0, 32);
}

int func_573(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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

struct<5> func_574(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_749(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_750(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_578(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_751(bParam1) };
			if (bParam2 && func_752(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_576(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_576(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_577(iParam0, &Var5, 1728382685))
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
			Var0 = { func_753(bParam1) };
			switch (func_754(iParam0))
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
			if (func_755(iParam0, -1823706425))
			{
				Var0 = { func_578(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_755(iParam0, -1483207246))
			{
				Var0 = { func_578(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_756(Var0, &Var27, bParam1, 0))
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

int func_575(int iParam0, int iParam1)
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

bool func_576(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_757(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_577(int iParam0, var uParam1, int iParam2)
{
	if (func_758(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_578(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_759(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_760(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_579(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_761(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_756(*uParam1, &Var0, bParam6, 0))
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
	if (!func_580(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_760(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_580(bool bParam0)
{
	if (func_285() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_760(bParam0));
}

int func_581(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_762(iParam0))
	{
		return 0;
	}
	if (!func_580(0))
	{
		return 0;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_582(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_763(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

void func_583(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, bool bParam10, int iParam11, int iParam12)
{
	if (!_does_volume_exist(*uParam0))
	{
		if (bParam10)
		{
			func_764(uParam0, vParam1, vParam4, vParam7);
		}
		else
		{
			func_765(uParam0, vParam1, vParam4, vParam7);
		}
	}
	if (_does_volume_exist(*uParam0))
	{
		_0x18262cafebb5fbe1(*uParam0, iParam11, iParam12, 0, -1, -1, 0);
		_0xb56d41a694e42e86(*uParam0, iParam11, iParam12, 0, -1, -1, 0);
	}
}

void func_584(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = _create_volume_sphere_with_custom_name(vParam1, vParam4, vParam7, sParam10);
}

void func_585(int iParam0, int iParam1)
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

int func_586(int iParam0)
{
	if (iParam0 == -1)
	{
		iVar0 = func_290(1);
	}
	else
	{
		iVar0 = func_523(iParam0);
	}
	return iVar0;
}

void func_587(int iParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		iVar0 = func_766(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_767(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2] = &Global_17504.f_2205[iVar2] + 1;
	}
}

int func_588()
{
	return Global_1897952->f_41;
}

void func_589(int iParam0, int iParam1)
{
	if (iParam1 != -1 && !func_142(iParam0, 8192))
	{
		iVar0 = func_767(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0] = &Global_17504.f_2205[iVar0] + 1;
	}
}

void func_590(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	func_102(iParam0, bParam3, round((fVar0 * fParam2)), round((fVar1 * fParam2)), round((fVar2 * fParam2)), round((fVar3 * fParam2)), bParam4, 1);
}

void func_591(int iParam0, bool bParam1)
{
	iVar0 = 1;
	if (bParam1)
	{
		iVar0 = 3;
	}
	if (func_126(iParam0, 262144))
	{
		if (Global_1392135->f_3 == -1)
		{
			func_768(262144, iVar0, 0, 1);
		}
	}
	if (func_126(iParam0, 128))
	{
		func_768(128, iVar0, 0, 1);
	}
	else if (func_126(iParam0, 524288))
	{
		func_768(524288, iVar0, 0, 1);
	}
	else if (func_126(iParam0, 536870912))
	{
		func_768(536870912, iVar0, 0, 1);
	}
	else if (func_126(iParam0, 4194304))
	{
		func_768(4194304, iVar0, 0, 1);
	}
	else if (func_126(iParam0, 8388608))
	{
		func_768(8388608, iVar0, 0, 1);
	}
}

void func_592(int iParam0)
{
	Global_1310750->f_16077 = get_id_of_this_thread();
	Global_1310750->f_16071 = iParam0;
}

int func_593(bool bParam0)
{
	if (!bParam0 && func_230(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

int func_594()
{
	return Global_1310750->f_16037;
}

bool func_595(int iParam0)
{
	if (!func_277(iParam0))
	{
		return false;
	}
	return (*Global_1310750)[iParam0]->f_47;
}

void func_596(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_277(&(Global_1310750->f_13321[iParam0])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0];
	force_cleanup_for_thread_with_this_id(Global_1310750->f_13321[iParam0]->f_5, 523);
	(*Global_1310750)[iVar0]->f_48 = 0;
	func_769(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_597(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_770(Global_1393447, 1);
	func_771();
	func_772();
	func_773((to_float(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135->f_54 = (func_168() / 1000);
		if (Global_1392135->f_1 & 4 != 0)
		{
			Global_1392135->f_1 = (Global_1392135->f_1 - Global_1392135->f_1 & 4);
		}
		func_774();
		if (iParam1 == -1)
		{
			if (func_2(iParam0, 1))
			{
				func_768(16777216, 2, 0, 1);
				iVar0 = floor(240f);
			}
			else if (func_2(iParam0, 2))
			{
				func_768(16777216, 0, 0, 1);
				iVar0 = floor(60f);
			}
			else if (func_2(iParam0, 4))
			{
				func_768(16777216, 5, 0, 1);
				iVar0 = floor(900f);
			}
			Global_1392135->f_4 = (Global_1392135->f_54 + iVar0);
		}
		else
		{
			func_775(iParam1, iParam2, iParam3, iParam4);
			Global_1392135->f_5[iParam1] = (((Global_1392135->f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_776(to_float(iVar0), 1, 0);
	}
	else
	{
		func_776((to_float(200) / 3f), 1, 0);
	}
}

bool func_598(int iParam0, int iParam1)
{
	return (Global_40.f_9571[iParam1] && iParam0) != 0;
}

void func_599(int iParam0, int iParam1)
{
	(*Global_1392050)[iParam1]->f_1 = ((*Global_1392050)[iParam1]->f_1 - ((*Global_1392050)[iParam1]->f_1 && iParam0));
}

void func_600(int iParam0, int iParam1)
{
	Global_40.f_9571[iParam1] = (Global_40.f_9571[iParam1] || iParam0);
}

int func_601(int iParam0)
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

bool func_602()
{
	return (Global_1935630->f_44 == -160924582 && is_first_person_aim_cam_active());
}

bool func_603(var uParam0, float fParam1, float fParam2, int iParam3)
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

bool func_604(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_603(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (func_271() - 0.02f);
		}
		return true;
	}
	uParam0->f_8 = 0f;
	return false;
}

bool func_605(int iParam0)
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

bool func_606(int iParam0)
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

bool func_607(int iParam0)
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

bool func_608(int iParam0)
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

bool func_609(int iParam0)
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

bool func_610(int iParam0)
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

bool func_611(int iParam0)
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

bool func_612(bool bParam0, int iParam1, int iParam2)
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

bool func_613()
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

int func_614(int iParam0)
{
	if (!func_617(iParam0))
	{
		return -1;
	}
	return func_778(func_777(iParam0));
}

bool func_615(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_616(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_617(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_618(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_619(int iParam0)
{
	return func_126(iParam0, Global_1310750->f_16072 | 64);
}

bool func_620(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_621(var uParam0, float fParam1)
{
	if (!func_68(uParam0))
	{
		return false;
	}
	if (func_504(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_622(int iParam0)
{
	return ((Global_1310750[iParam0] != 0 && !is_string_null_or_empty(&((*Global_1310750)[iParam0]->f_40))) && get_length_of_literal_string(&((*Global_1310750)[iParam0]->f_40)) != 0);
}

bool func_623()
{
	if (func_779())
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

void func_624(var uParam0, var uParam1)
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

int func_625(int iParam0)
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

void func_626(int iParam0)
{
	if (Global_1935630->f_38 == 0)
	{
		func_82(iParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1935630->f_34[iVar0])))
				{
					func_83(iParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_627(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_628(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_629(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_629(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_630(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_631(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_632(int iParam0, bool bParam1)
{
	switch (func_780(iParam0))
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

bool func_633(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

bool func_634(int iParam0, int* iParam1)
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
		if (is_ped_in_combat(iParam0, func_781((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_635(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_651((*uParam0)[iVar0]))
		{
			func_424((*uParam0)[iVar0], 14);
		}
		iVar0++;
	}
}

int func_636(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(*uParam2)[iVar0]->f_8 = 6;
		func_782(iParam0, (*uParam2)[iVar0], fParam3, 3, 0, 6, bParam4, 0);
		if (func_182((*uParam2)[iVar0]->f_6))
		{
			func_424((*uParam2)[iVar0], 11);
			return (*Global_1945938)[(*uParam2)[iVar0]->f_6]->f_3;
		}
	}
	return 0;
}

int func_637(int iParam0)
{
	iVar0 = func_532(*iParam0);
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

int func_638(var uParam0, int iParam1)
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

void func_639(int* iParam0, int* iParam1)
{
	if (!func_430(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_424(iParam1, 19);
			func_653(iParam0, 23);
			func_783(iParam1, 2);
		}
	}
}

bool func_640(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (func_784(16))
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
					func_785(16);
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

void func_641(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_782(iParam0, (*uParam1)[iVar0], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			clear_bit((*uParam1)[iVar0], 14);
		}
		iVar0++;
	}
}

int func_642(int iParam0)
{
	return _money_get_cash_balance();
}

bool func_643(int iParam0)
{
	return (func_786(iParam0, 4) || func_786(iParam0, 5));
}

int func_644(int iParam0)
{
	return func_786(iParam0, 7);
}

bool func_645(int iParam0)
{
	return func_786(iParam0, 6);
}

void func_646(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (is_bit_set(*iParam1, 14))
	{
		if (func_651(iParam1))
		{
			clear_bit(iParam1, 14);
			func_782(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_647(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_787(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_788(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_463(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_463(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_789(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_648(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_701(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_790(iParam1, 1))
	{
		func_791(iParam1, 1);
		return true;
	}
	return false;
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
	if (func_285() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_656(int iParam0)
{
	if (func_285() != -1)
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

bool func_661(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

bool func_662()
{
	iLocal_1469 = func_792();
	if (iVar1467 != -1)
	{
		if (func_793(76))
		{
			if (func_794(iVar1467, 1))
			{
				iLocal_1253 = func_795(iVar1467, 1, 0, 0, 1, 1);
			}
			if (func_43(iVar1251, 0, 1))
			{
				_request_ped_emotional_preset(iVar1251, "DEFAULT_SHOCKED");
				decor_set_float(iVar1251, "REDJ_Witness_Time", -1f);
				set_ambient_voice_name(iVar1251, "0484_U_M_M_ValSheriff_01");
				return true;
			}
		}
	}
	return false;
}

bool func_663()
{
	switch (iVar1161)
	{
		case 0:
			request_model(iVar1486, false);
			if (has_model_loaded(iVar1486))
			{
				iLocal_1163 = 1;
			}
			break;
		case 1:
			if (!does_entity_exist(iVar1251))
			{
				iLocal_1253 = func_506(iVar1486, Local_923.f_23, Local_923.f_26, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				_request_ped_emotional_preset(iVar1251, "DEFAULT_SHOCKED");
				decor_set_float(iVar1251, "REDJ_Witness_Time", -1f);
				set_ambient_voice_name(iVar1251, "0484_U_M_M_ValSheriff_01");
				iLocal_1163 = 2;
			}
			break;
		case 2:
			if (does_entity_exist(iVar1251))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_664()
{
	if (!does_entity_exist(iVar1280))
	{
		iLocal_1282 = get_object_index_from_entity_index(func_235(535323366, 0));
		func_241(535323366, 1, 0f, 0, 0, 0, 1, 0);
		vLocal_1192 = { -275.023f, 809.274f, 118.369f };
		vLocal_1195 = { 0f, 0f, -80f };
	}
	if (!does_entity_exist(iVar1283))
	{
		if (has_model_loaded(-1311816336))
		{
			iLocal_1285 = get_closest_object_of_type(Local_923.f_45, 1f, -1311816336, true, false, true);
		}
		else
		{
			request_model(-1311816336, false);
		}
	}
	if (!does_entity_exist(iVar1282))
	{
		if (has_model_loaded(-1311816336))
		{
			iLocal_1284 = get_closest_object_of_type(Local_923.f_42, 1f, -1311816336, true, false, true);
		}
		else
		{
			request_model(-1311816336, false);
		}
	}
	if (!does_entity_exist(iVar1281))
	{
		iLocal_1283 = get_object_index_from_entity_index(func_235(193903155, 0));
		func_241(193903155, 1, 0f, 0, 0, 0, 1, 0);
	}
	if (does_entity_exist(iVar1280))
	{
	}
	if (does_entity_exist(iVar1281))
	{
	}
	if (does_entity_exist(iVar1282))
	{
	}
	if (does_entity_exist(iVar1283))
	{
	}
}

void func_665(var uParam0, var uParam1, vector3 vParam2, vector3 vParam5, vector3 vParam8, bool bParam11, int iParam12, bool bParam13, int iParam14, char* sParam15)
{
	if (!_does_volume_exist(*uParam0))
	{
		if (bParam11)
		{
			if (is_string_null_or_empty(sParam15))
			{
				func_764(uParam0, vParam2, vParam5, vParam8);
			}
			else
			{
				func_221(uParam0, vParam2, vParam5, vParam8, sParam15);
			}
		}
		else if (is_string_null_or_empty(sParam15))
		{
			func_765(uParam0, vParam2, vParam5, vParam8);
		}
		else
		{
			func_584(uParam0, vParam2, vParam5, vParam8, sParam15);
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

void func_666(int iParam0)
{
	func_472(Local_1434[0], "DEADHK_ILO_01", " ", -163964935, 0, 0, 0, 0, 0);
	func_472(Local_1434[1], "RE_INTER_ANTAGONIZE", " ", 648122183, 0, 0, 0, 0, 0);
	func_186(Local_1434[0], 1, 0);
	if (iParam0 == 1)
	{
		func_186(Local_1434[1], 1, 0);
	}
	else
	{
		func_186(Local_1434[1], 0, 0);
	}
}

void func_667()
{
	if (func_63(Global_35, &(uLocal_1250[0])))
	{
		func_62(Global_35, iVar1251, "RE_DJ_VAL_V1_RTN_MAN_A", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		func_39(&uLocal_1167, 134217728);
	}
	else if (func_63(Global_35, &(uLocal_1250[1])))
	{
		func_62(Global_35, iVar1251, "RE_DJ_VAL_V1_RTN_GIRL_A", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		func_39(&uLocal_1167, 536870912);
	}
	else
	{
		func_62(Global_35, iVar1251, "RE_DJ_VAL_V1_INFORM_A", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		func_39(&uLocal_1167, 33554432);
	}
	if (does_blip_exist(&(iLocal_1271[1])))
	{
		remove_blip(iLocal_1271[1]);
	}
	if (does_blip_exist(iVar1272))
	{
		remove_blip(&iLocal_1274);
	}
	if (does_blip_exist(iVar1273))
	{
		remove_blip(&iLocal_1275);
	}
	func_455();
	func_54(&Local_1399, 0, 0);
	func_668();
	iLocal_1030 = 8;
	func_55(Local_1356[1], 0);
	if (iLocal_15 != 3)
	{
		iLocal_15 = 4;
		if (func_98())
		{
			func_38(Local_729.f_3, 6, 2);
		}
		else
		{
			func_38(Local_729.f_3, 6, 1);
		}
	}
	if (func_36(iVar1163, 8))
	{
		func_457(2, 0, 0, "RE_HONOR_BROKE_AGREEMENT", &(uLocal_1250[1]), 0, 1065353216, 0);
	}
	else
	{
		func_457(11, 0, 0, "RE_HONOR_JUSTICE_SERVED", iVar1251, 0, 1065353216, 0);
	}
	set_ped_config_flag(iVar1251, 430, true);
	iLocal_1212 = 1;
	func_54(&Local_1434, 0, 0);
	func_241(1087218607, 0, 1f, 1, 1, 0, 0, 0);
	if (does_entity_exist(&(uLocal_1250[1])))
	{
		_0x18ff3110cf47115d(&(uLocal_1250[1]), 1, 0);
	}
	func_464();
	iLocal_1185 = 0;
	func_246(&uLocal_1344);
	func_246(&uLocal_1347);
	fLocal_1191 = 15f;
	func_49(iLocal_1271[0]);
	func_58(iVar1238);
}

void func_668()
{
	func_236(Local_1434[0], "RE_INTER_POS");
	func_236(Local_1434[1], "RE_INTER_ANTAGONIZE");
}

bool func_669(int iParam0)
{
	switch (iVar1169)
	{
		case 0:
			if (((does_entity_exist(iVar1279) && does_entity_exist(iVar1280)) && does_entity_exist(iVar1281)) && does_entity_exist(iVar1282))
			{
				iLocal_1172 = iVar1169 + 1;
			}
			else
			{
				func_664();
			}
			break;
		case 1:
			iLocal_1022 = _create_anim_scene(sVar1020, 0, 0, false, true);
			set_anim_scene_origin(iVar1019, vLocal_1192, vLocal_1195, 2);
			if (!is_string_null_or_empty(sVar1020))
			{
				if (!_is_anim_scene_loaded(iVar1019, true, false))
				{
					load_anim_scene(iVar1019);
				}
			}
			if (iParam0 == 1)
			{
				set_anim_scene_entity(iVar1019, "PLAYER", iVar1250, 0);
			}
			else
			{
				set_anim_scene_entity(iVar1019, "PLAYER", Global_35, 0);
			}
			set_anim_scene_entity(iVar1019, "PED_HOOKER", &(uLocal_1250[1]), 0);
			set_anim_scene_entity(iVar1019, "DOOR_1", iVar1279, 0);
			set_anim_scene_entity(iVar1019, "DOOR_2", iVar1280, 0);
			set_anim_scene_entity(iVar1019, "LOCK_1", iVar1281, 0);
			set_anim_scene_entity(iVar1019, "LOCK_2", iVar1282, 0);
			iLocal_1172 = iVar1169 + 1;
			break;
		case 2:
			if (_is_anim_scene_loaded(iVar1019, true, false))
			{
				if (iParam0 == 1)
				{
					Local_923.f_32 = { func_796(iVar1250, iVar1019, "PLAYER", 0, 0) };
					Local_923.f_35 = func_797(iVar1250, iVar1019, "PLAYER", 0, 0);
				}
				else
				{
					Local_923.f_32 = { func_796(Global_35, iVar1019, "PLAYER", 0, 0) };
					Local_923.f_35 = func_797(Global_35, iVar1019, "PLAYER", 0, 0);
				}
				if (iParam0 == 1)
				{
					func_501(iVar1250, Local_923.f_32, Local_923.f_35);
					iLocal_1172 = iVar1169 + 1;
				}
				else
				{
					func_501(Global_35, Local_923.f_32, Local_923.f_35);
					iLocal_1172 = iVar1169 + 1;
				}
				set_ped_config_flag(&(uLocal_1250[1]), 6, false);
				set_ped_config_flag(&(uLocal_1250[1]), 113, false);
				func_254(&(uLocal_1250[1]));
				func_455();
				func_54(&Local_1399, 0, 0);
			}
			break;
		case 3:
			if (func_672(&Local_1101, 106))
			{
				if (_is_anim_scene_loaded(iVar1019, true, false))
				{
					set_anim_rate(iVar1281, 1f, 0, false);
					set_anim_rate(iVar1282, 1f, 0, false);
					set_ped_using_action_mode(iVar1250, false, -1, 0);
					set_entity_collision(&(uLocal_1250[1]), false, false);
					start_anim_scene(iVar1019);
					set_entity_collision(&(uLocal_1250[1]), false, false);
					func_798();
					iLocal_1172 = iVar1169 + 1;
				}
				else if (_does_anim_scene_exist(iVar1019))
				{
					load_anim_scene(iVar1019);
				}
				else
				{
					iLocal_1022 = _create_anim_scene(sVar1020, 0, 0, false, true);
					set_anim_scene_origin(iVar1019, vLocal_1192, vLocal_1195, 2);
					load_anim_scene(iVar1019);
					if (iParam0 == 1)
					{
						set_anim_scene_entity(iVar1019, "PLAYER", iVar1250, 0);
					}
					else
					{
						set_anim_scene_entity(iVar1019, "PLAYER", Global_35, 0);
					}
					set_anim_scene_entity(iVar1019, "PED_HOOKER", &(uLocal_1250[1]), 0);
					set_anim_scene_entity(iVar1019, "DOOR_1", iVar1279, 0);
					set_anim_scene_entity(iVar1019, "DOOR_2", iVar1280, 0);
					set_anim_scene_entity(iVar1019, "LOCK_1", iVar1281, 0);
					set_anim_scene_entity(iVar1019, "LOCK_2", iVar1282, 0);
				}
			}
			break;
		case 4:
			fVar0 = _get_anim_scene_progress(iVar1019);
			if (fVar0 >= 0.33f)
			{
				if (func_43(iVar1250, 0, 1))
				{
					func_62(iVar1250, &(uLocal_1250[1]), func_61("JAILED_IN_CELL", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_265();
					func_54(&Local_1399, 0, 0);
				}
				iLocal_1172 = iVar1169 + 1;
			}
			break;
		case 5:
			set_entity_collision(&(uLocal_1250[1]), false, false);
			if (((has_anim_event_fired(&(uLocal_1250[1]), 863822453) || has_anim_event_fired(iVar1250, -73434015)) || has_anim_event_fired(Global_35, -73434015)) || has_anim_event_fired(iVar1250, -73434015))
			{
				remove_anim_scene_entity(iVar1019, "player", Global_35);
				remove_anim_scene_entity(iVar1019, "player", iVar1250);
				remove_anim_scene_entity(iVar1019, "DOOR_1", iVar1279);
				remove_anim_scene_entity(iVar1019, "DOOR_2", iVar1280);
				remove_anim_scene_entity(iVar1019, "LOCK_1", iVar1281);
				remove_anim_scene_entity(iVar1019, "LOCK_2", iVar1282);
				func_241(535323366, 0, 1f, 1, 1, 0, 0, 0);
				func_241(193903155, 0, 1f, 1, 1, 0, 0, 0);
				return true;
			}
			else
			{
				return false;
			}
			break;
	}
	return false;
}

void func_670()
{
	if (!(func_36(iVar1162, 16) || func_36(iVar1162, 1024)) || !func_43(iVar1251, 0, 1))
	{
		return;
	}
	switch (iVar1029)
	{
		case 0:
			vVar0 = { get_entity_coords(&(uLocal_1250[1]), false, false) };
			func_799(iVar1251, 2055893578, -1, 0, 0, 1056964608, 1065353216, 0);
			set_current_ped_weapon(iVar1251, 2055893578, false, 0, false, false);
			if (does_entity_exist(iVar1279))
			{
				if (iVar1216 == 1)
				{
					set_entity_no_collision_entity(iVar1279, iVar1251, false);
				}
			}
			set_ped_relationship_group_hash(&(uLocal_1250[1]), 1222652248);
			_0x18ff3110cf47115d(&(uLocal_1250[1]), 1, 0);
			set_ped_using_action_mode(iVar1251, true, -1, 0);
			open_sequence_task(&iLocal_1290);
			if (iVar1216 == 1)
			{
				if (_0x3ab6c7b0bb0df4b1(iVar1251, iVar1018))
				{
					task_play_anim(0, &(Local_547[18]), Local_547[18]->f_1, 8f, -8f, -1, 0, 0f, false, 1, false, 0, false);
				}
				else
				{
					task_turn_ped_to_face_entity(0, Global_35, 1500, -1082130432, -1082130432, -1f);
				}
			}
			else
			{
				_0x802092b07e3b1eea(iVar1251, Global_36, 3);
				task_turn_ped_to_face_entity(0, Global_35, 1500, -1082130432, -1082130432, -1f);
			}
			if (_is_ped_hogtied(&(uLocal_1250[1])) && !func_50(&(uLocal_1250[1]), iVar1227, 0, 1))
			{
				task_follow_nav_mesh_to_coord(0, vVar0, 1.5f, -1, 1f, 131072, 40000f);
				task_turn_ped_to_face_entity(0, &(uLocal_1250[1]), -1, -1082130432, -1082130432, 0.52f);
			}
			else
			{
				task_follow_nav_mesh_to_coord(0, -276.3229f, 815.6984f, 118.1366f, 1.5f, -1, 1f, 2049, 40000f);
				task_follow_nav_mesh_to_coord(0, -297.4149f, 821.1849f, 118.3294f, 2f, -1, 1f, 2049, 40000f);
				task_follow_nav_mesh_to_coord(0, -320.4276f, 817.9123f, 117.1552f, 2f, -1, 1f, 133121, 40000f);
				task_follow_nav_mesh_to_coord(0, -316.79f, 808.857f, 117.0172f, 2f, -1, 1f, 133121, 40000f);
				task_follow_nav_mesh_to_coord(0, -317.8021f, 815.7929f, 120.8741f, 2f, -1, 1f, 133121, 40000f);
				task_follow_nav_mesh_to_coord(0, -314.4742f, 817.582f, 120.9772f, 2f, -1, 0.25f, 131584, 40000f);
				if (func_36(iVar1162, 536870912))
				{
					task_turn_ped_to_face_coord(0, -311.4663f, 816.46f, 121.6334f, -1);
				}
				else
				{
					task_turn_ped_to_face_entity(0, &(uLocal_1250[1]), -1, -1082130432, -1082130432, 0.52f);
				}
			}
			func_46(iVar1251, &iLocal_1290, 0, 0, 1, 1);
			if (iVar1009 == 1 && func_43(&(uLocal_1250[1]), 0, 1))
			{
				set_entity_coords(&(uLocal_1250[0]), -311.8077f, 816.4948f, 121.6537f, false, true, true, true);
				set_ped_to_ragdoll(&(uLocal_1250[0]), 500, 500, 0, false, true, false);
			}
			if (iVar1009 == 0)
			{
			}
			set_ped_keep_task(iVar1251, true);
			set_ped_config_flag(iVar1251, 14, true);
			set_ped_config_flag(iVar1251, 375, true);
			set_ped_reset_flag(iVar1251, 94, true);
			_0xc6981aff6d2a71c2(iVar1251);
			func_39(&uLocal_1167, 1);
			iLocal_1031 = 1;
			break;
		case 1:
			if (get_script_task_status(iVar1251, 242628503, true) == 1)
			{
			}
			set_ped_reset_flag(iVar1251, 94, true);
			_0xc6981aff6d2a71c2(iVar1251);
			set_ped_reset_flag(iVar1251, 12, true);
			set_ped_reset_flag(iVar1251, 172, true);
			if (get_script_task_status(iVar1251, 242628503, true) == 1 && ((_is_ped_hogtied(&(uLocal_1250[1])) && ((get_sequence_progress(iVar1251) >= 1 && !func_50(&(uLocal_1250[1]), iVar1227, 0, 1)) || (has_entity_clear_los_to_entity(iVar1251, &(uLocal_1250[1]), 17) && func_59(iVar1251, &(uLocal_1250[1]), 1, 1) < 5f))) || (!_is_ped_hogtied(&(uLocal_1250[1])) && get_sequence_progress(iVar1251) >= 7)))
			{
				iLocal_1180 = 6;
				Local_16.f_3 = iVar1251;
				func_60(0);
				if (_is_ped_hogtied(&(uLocal_1250[1])) && func_43(&(uLocal_1250[1]), 0, 0))
				{
					func_62(iVar1251, &(uLocal_1250[1]), func_61("ARREST_A", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_39(&uLocal_1166, 524288);
					set_current_ped_weapon(iVar1251, -1569615261, false, 0, false, false);
					open_sequence_task(&iLocal_1290);
					task_react(0, &(uLocal_1250[1]), 0f, 0f, 0f, "DEFAULT_BRAVE", 6f, 0, 4);
					task_swap_weapon(0, 1, false, 0, 0);
					task_turn_ped_to_face_entity(0, &(uLocal_1250[1]), -1, -1082130432, -1082130432, 0.52f);
					func_46(iVar1251, &iLocal_1290, 0, 0, 1, 1);
					iLocal_1031 = 2;
					if (!func_68(&uLocal_1299))
					{
						func_69(&uLocal_1299, 0);
					}
					else
					{
						func_246(&uLocal_1299);
					}
				}
				else if (func_36(iVar1162, 536870912) || !func_43(&(uLocal_1250[1]), 0, 1))
				{
					if (!func_43(&(uLocal_1250[1]), 0, 0) && func_50(&(uLocal_1250[1]), iVar1227, 0, 0))
					{
						func_62(iVar1251, iVar1251, func_61("ALL_DEAD", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						func_62(iVar1251, iVar1251, func_61("ARREST_INTRO", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					func_501(iVar1251, Local_923.f_7, Local_923.f_10);
					_0x18ff3110cf47115d(&(uLocal_1250[0]), 7, 1);
					_0x18ff3110cf47115d(&(uLocal_1250[0]), 2, 0);
					open_sequence_task(&iLocal_1290);
					task_react(0, 0, -311.4597f, 817.5327f, 121.6544f, "DEFAULT_CURIOUS", 6f, 0, 4);
					task_turn_ped_to_face_coord(0, -311.4663f, 816.46f, 121.6334f, -1);
					func_46(iVar1251, &iLocal_1290, 0, 0, 1, 1);
					if (_does_anim_scene_exist(Local_1012.f_1))
					{
						set_anim_scene_entity(Local_1012.f_1, "PLAYER", iVar1251, 0);
					}
					iLocal_1031 = 3;
				}
				else
				{
					set_current_ped_weapon(iVar1251, 2055893578, true, 0, false, false);
					set_ped_using_action_mode(iVar1251, true, -1, 0);
					func_62(iVar1251, &(uLocal_1250[1]), func_61("ARREST_A", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_39(&uLocal_1166, 524288);
					open_sequence_task(&iLocal_1290);
					task_react(0, &(uLocal_1250[1]), 0f, 0f, 0f, "DEFAULT_BRAVE", 6f, 0, 4);
					task_turn_ped_to_face_entity(0, &(uLocal_1250[1]), -1, -1082130432, -1082130432, 0.52f);
					func_46(iVar1251, &iLocal_1290, 0, 0, 1, 1);
					iLocal_1031 = 4;
				}
				func_69(&uLocal_1299, 0);
			}
			break;
		case 2:
			set_ped_reset_flag(iVar1251, 12, true);
			if (func_452(&uLocal_1299, 2f))
			{
				func_62(&(uLocal_1250[1]), iVar1251, func_61("ARREST_B", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_39(&uLocal_1166, 1048576);
				iLocal_1178 = 0;
				iLocal_1031 = 5;
			}
			break;
		case 3:
			set_ped_reset_flag(iVar1251, 12, true);
			if ((has_entity_clear_los_to_entity(iVar1251, Global_35, 17) && !is_any_speech_playing(iVar1251)) && !func_36(iVar1164, 33554432))
			{
				func_62(iVar1251, iVar1251, func_61("GOT_AWAY_B", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_39(&uLocal_1166, 33554432);
			}
			if (iVar1009 == 0 && !func_36(iVar1162, 262144))
			{
				if (func_672(&Local_1101, 106))
				{
					if (_is_anim_scene_loaded(Local_1012.f_1, true, false))
					{
						set_anim_scene_bool(Local_1012.f_1, "dead_bool", true, false);
					}
					_0xff745b0346e19e2c(1361896662);
					iLocal_1031 = 7;
				}
			}
			else if (is_entity_in_volume(&(uLocal_1250[0]), iVar1231, false, 0) || is_entity_in_volume(&(uLocal_1250[0]), iVar1227, false, 0))
			{
				_0x18ff3110cf47115d(&(uLocal_1250[0]), 7, 1);
				_0x18ff3110cf47115d(&(uLocal_1250[0]), 12, 1);
				_0x18ff3110cf47115d(&(uLocal_1250[0]), 2, 1);
				task_pickup_carriable_entity(iVar1251, &(uLocal_1250[0]));
				iLocal_1031 = 7;
			}
			else
			{
				iLocal_1219 = 1;
				iLocal_1031 = 11;
			}
			break;
		case 4:
			set_ped_reset_flag(iVar1251, 12, true);
			if (((func_36(iVar1164, 1048576) && !func_36(iVar1164, 2097152)) && !is_any_speech_playing(&(uLocal_1250[1]))) && _is_ped_hogtied(&(uLocal_1250[1])))
			{
				func_62(&(uLocal_1250[1]), iVar1251, func_61("ARREST_C_ROOM", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_39(&uLocal_1166, 2097152);
			}
			if (func_452(&uLocal_1299, 1f) && func_43(&(uLocal_1250[1]), 0, 1))
			{
				func_62(&(uLocal_1250[1]), iVar1251, func_61("ARREST_B", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_39(&uLocal_1166, 1048576);
				clear_sequence_task(&iLocal_1290);
				open_sequence_task(&iLocal_1290);
				if (((_does_anim_scene_exist(iVar1010) && _is_anim_scene_started(iVar1010, false)) && _0x8d81e7824b7753f7(iVar1010, "idle_cleanup", 1)) || ((_does_anim_scene_exist(Local_1012.f_3) && _is_anim_scene_started(Local_1012.f_3, false)) && (_0x8d81e7824b7753f7(Local_1012.f_3, "Idle_1", 1) || _0x8d81e7824b7753f7(Local_1012.f_3, "Idle_2", 1))))
				{
					if (iVar1009 == 0)
					{
						task_play_anim_advanced(0, &(Local_547[11]), Local_547[11]->f_1, Local_923, 0f, 0f, Local_923.f_3, 16f, -4f, -1, 128, 0f, 2, 1, 0);
					}
					else
					{
						task_play_anim_advanced(0, &(Local_547[11]), Local_547[11]->f_1, Local_923, 0f, 0f, Local_923.f_3, 16f, -4f, -1, 128, 0f, 2, 1, 0);
					}
				}
				else
				{
					task_react(0, iVar1251, 0f, 0f, 0f, "DEFAULT_SHOCKED", 2f, 0, 4);
				}
				task_react(0, iVar1251, 0f, 0f, 0f, "DEFAULT_SCARED", 2f, 0, 4);
				task_react(0, iVar1251, 0f, 0f, 0f, "DEFAULT_SCARED", 60f, 0, 4);
				task_cower(0, -1, iVar1251, 0);
				func_46(&(uLocal_1250[1]), &iLocal_1290, 0, 0, 1, 1);
				func_800(iVar1010);
				func_800(Local_1012.f_3);
			}
			if (get_script_task_status(iVar1251, 242628503, true) == 1)
			{
			}
			if (get_script_task_status(&(uLocal_1250[1]), 242628503, true) == 1)
			{
			}
			if (get_script_task_status(&(uLocal_1250[1]), 242628503, true) == 1 && get_sequence_progress(&(uLocal_1250[1])) >= 1)
			{
				set_ped_combat_attributes(iVar1251, 5, true);
				set_ped_combat_attributes(iVar1251, 58, true);
				set_ped_combat_attributes(iVar1251, 46, true);
				set_ped_combat_attributes(&(uLocal_1250[1]), 58, true);
				set_ped_combat_attributes(&(uLocal_1250[1]), 46, true);
				task_melee(iVar1251, &(uLocal_1250[1]), 892442958, 0, 1, 1065353216, 1, -1082130432);
				set_ped_keep_task(iVar1251, true);
				iLocal_1031 = 5;
			}
			break;
		case 5:
			func_801();
			set_ped_reset_flag(iVar1251, 12, true);
			if (_is_ped_hogtied(&(uLocal_1250[1])))
			{
				set_current_ped_weapon(iVar1251, -1569615261, false, 0, false, false);
				_0x18ff3110cf47115d(&(uLocal_1250[1]), 2, 1);
				if (func_50(&(uLocal_1250[1]), iVar1227, 0, 1))
				{
					open_sequence_task(&iLocal_1290);
					task_swap_weapon(0, 1, false, 0, 0);
					task_pickup_carriable_entity(0, &(uLocal_1250[1]));
					task_follow_nav_mesh_to_coord(0, -317.8016f, 816.689f, 120.8744f, 1f, -1, 1f, 2049, 40000f);
					task_follow_nav_mesh_to_coord(0, -315.5807f, 795.5626f, 116.6643f, 1f, -1, 1f, 1, 40000f);
					task_follow_nav_mesh_to_coord(0, -298.0649f, 793.584f, 117.3576f, 1f, -1, 1f, 1, 40000f);
					task_follow_nav_mesh_to_coord(0, -275.0354f, 800.7056f, 118.3857f, 1f, -1, 1f, 1, 40000f);
					task_follow_nav_mesh_to_coord(0, Local_923.f_32, 1f, -1, 1f, 1, 40000f);
					task_turn_ped_to_face_coord(0, -271.7399f, 809.3668f, 119.38f, -1);
					func_46(iVar1251, &iLocal_1290, 0, 0, 1, 1);
					set_ped_config_flag(&(uLocal_1250[1]), 6, false);
					set_ped_config_flag(&(uLocal_1250[1]), 113, false);
					func_254(&(uLocal_1250[1]));
					iLocal_1181 = 7;
				}
				else
				{
					open_sequence_task(&iLocal_1290);
					task_pickup_carriable_entity(0, &(uLocal_1250[1]));
					task_follow_nav_mesh_to_coord(0, Local_923.f_32, 1f, -1, 1f, 1, 40000f);
					task_turn_ped_to_face_coord(0, -271.7399f, 809.3668f, 119.38f, -1);
					func_46(iVar1251, &iLocal_1290, 0, 0, 1, 1);
					set_ped_config_flag(&(uLocal_1250[1]), 6, false);
					set_ped_config_flag(&(uLocal_1250[1]), 113, false);
					func_254(&(uLocal_1250[1]));
					iLocal_1181 = 3;
				}
				iLocal_1031 = 10;
			}
			break;
		case 7:
			if (iVar1009 == 0 && !func_36(iVar1162, 262144))
			{
				_0x18ff3110cf47115d(&(uLocal_1250[0]), 7, 1);
				_0x18ff3110cf47115d(&(uLocal_1250[0]), 2, 1);
				if (_is_anim_scene_finished(Local_1012.f_1, false) && _0xb8f52a3f84a7cc59(1361896662))
				{
					_delete_anim_scene(Local_1012.f_1);
					_0x18ff3110cf47115d(&(uLocal_1250[0]), 7, 1);
					_0x2208438012482a1a(&(uLocal_1250[0]), false, false);
					_0x2208438012482a1a(iVar1251, false, false);
					_0x735662994e60a710(&(uLocal_1250[0]), 1);
					_0x91bab9e064f036cd(&(uLocal_1250[0]), 0.02f);
					set_ped_can_ragdoll(&(uLocal_1250[0]), true);
					iLocal_1031 = 8;
				}
			}
			else if (func_63(iVar1251, &(uLocal_1250[0])) || func_63(Global_35, &(uLocal_1250[0])))
			{
				iLocal_1031 = 8;
			}
			break;
		case 8:
			func_802();
			open_sequence_task(&iLocal_1290);
			task_follow_nav_mesh_to_coord(0, -277.4047f, 817.8478f, 118.0183f, 1f, -1, 1f, 0, 40000f);
			task_place_carried_entity_at_coord(0, &(uLocal_1250[0]), -277.4047f, 817.8478f, 118.0183f, 1f, 1);
			func_513(0, -1273821262, -276.877f, 814.5742f, 118.257f, -154.75f, 10000, 1, 0, 0, -1082130432);
			task_follow_nav_mesh_to_coord(0, -276.115f, 809.8058f, 118.38f, 1f, -1, 1f, 0, 40000f);
			func_46(iVar1251, &iLocal_1290, 0, 0, 1, 1);
			iLocal_1031 = 11;
			break;
		case 11:
			if (func_43(iVar1251, 0, 1))
			{
				if (iVar1217 == 0 && func_487(iVar1251, 242628503))
				{
					if (!func_63(iVar1251, &(uLocal_1250[0])))
					{
						_0x18ff3110cf47115d(&(uLocal_1250[0]), 7, 0);
					}
					if (get_sequence_progress(iVar1251) >= 3)
					{
						set_blocking_of_non_temporary_events(iVar1251, false);
						if (func_59(iVar1251, Global_35, 1, 1) < 15f && has_entity_clear_los_to_entity(iVar1251, Global_35, 17))
						{
							func_62(iVar1251, Global_35, "RE_DJ_VAL_V1_THANKS_A", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						set_blocking_of_non_temporary_events(iVar1251, false);
						func_263(iVar1251, 1088421888, 0, 0);
						func_264(&iLocal_1253, Local_1356[1], &Local_1434, 1, 1);
						_0xe737d5f14304a2ec(iVar1251, get_player_index(), 120000);
						_0xa3db37edf9a74635(player_id(), iVar1251, 7, 0, 1);
						if (func_103(iVar1467, 0))
						{
							set_ped_config_flag(iVar1251, 430, false);
							func_105(iVar1251, 0);
						}
						else
						{
							task_police(iVar1251, false);
						}
						iLocal_1032 = 16;
						iLocal_1031 = 14;
					}
				}
				else if (iVar1217 == 1)
				{
					if (!is_any_speech_playing(iVar1251))
					{
						if ((has_entity_clear_los_to_entity(iVar1251, Global_35, 17) || func_59(iVar1251, Global_35, 1, 1) < 10f) && !func_36(iVar1164, 33554432))
						{
							func_62(iVar1251, iVar1251, func_61("GOT_AWAY_B", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							func_39(&uLocal_1166, 33554432);
						}
						if ((func_487(iVar1251, 242628503) && get_sequence_progress(iVar1251) >= 1) || !func_487(iVar1251, 1435919172))
						{
							open_sequence_task(&iLocal_1290);
							task_follow_nav_mesh_to_coord(0, -277.6219f, 800.537f, 118.3558f, 1f, -1, 1f, 0, 40000f);
							func_513(0, -1273821262, -275.0159f, 800.7324f, 118.3891f, -154.75f, 10000, 1, 0, 0, -1082130432);
							_task_use_nearest_scenario_to_coord(0, -276.6384f, 807.039f, 118.3817f, 0.75f, -1, false, false, false, false);
							func_46(iVar1251, &iLocal_1290, 0, 0, 1, 1);
							func_802();
							iLocal_1032 = 16;
							iLocal_1031 = 12;
						}
					}
				}
			}
			break;
		case 12:
			if (func_43(iVar1251, 0, 1) && func_487(iVar1251, 242628503))
			{
				if (get_sequence_progress(iVar1251) >= 2)
				{
					set_blocking_of_non_temporary_events(iVar1251, false);
					func_263(iVar1251, 1088421888, 0, 0);
					func_264(&iLocal_1253, Local_1356[1], &Local_1434, 1, 1);
					_0xe737d5f14304a2ec(iVar1251, get_player_index(), 120000);
					_0xa3db37edf9a74635(player_id(), iVar1251, 7, 0, 1);
					if (func_103(iVar1467, 0))
					{
						set_ped_config_flag(iVar1251, 430, false);
						func_105(iVar1251, 0);
					}
					else
					{
						task_police(iVar1251, false);
					}
					func_455();
					iLocal_1031 = 14;
				}
			}
			break;
		case 10:
			set_ped_reset_flag(iVar1251, 12, true);
			func_801();
			if (((get_script_task_status(iVar1251, 242628503, true) == 1 && get_sequence_progress(iVar1251) >= (iVar1179 - 1)) || iVar1170 >= 2) && (func_63(iVar1251, &(uLocal_1250[1])) || _is_anim_scene_started(iVar1020, false)))
			{
				if (func_669(1))
				{
					func_39(&uLocal_1164, 1073741824);
					iLocal_1031 = 13;
				}
			}
			break;
		case 13:
			if (func_36(iVar1162, 1073741824))
			{
				if (!_0x3ab6c7b0bb0df4b1(iVar1251, iVar1020))
				{
					set_ped_using_action_mode(iVar1251, false, -1, 0);
					open_sequence_task(&iLocal_1290);
					task_go_straight_to_coord(0, -272.5675f, 807.7393f, 118.3714f, 1f, -1, 1193033728, 1056964608, 0);
					task_go_straight_to_coord(0, -272.8117f, 809.073f, 118.3714f, 1f, -1, 1193033728, 1056964608, 0);
					task_follow_nav_mesh_to_coord(0, -275.5475f, 808.587f, 118.38f, 1f, -1, 0.5f, 0, 40000f);
					_task_use_nearest_scenario_to_coord(0, -276.6384f, 807.039f, 118.3817f, 0.75f, -1, false, false, false, false);
					func_46(iVar1251, &iLocal_1290, 0, 0, 1, 1);
					func_39(&uLocal_1167, 4194304);
					func_472(Local_1399[0], "RE_INTER_POS", " ", -163964935, 0, 0, 0, 0, 0);
					func_472(Local_1399[1], "RE_INTER_ANTAGONIZE", " ", 648122183, 0, 0, 0, 0, 0);
					func_186(Local_1399[0], 0, 0);
					func_186(Local_1399[1], 0, 0);
					if (func_43(iVar1251, 0, 1))
					{
						if (func_50(Global_35, iVar1230, 0, 1) || func_50(Global_35, iVar1229, 0, 1))
						{
							if (!func_36(iVar1166, 1073741824))
							{
								func_62(iVar1251, Global_35, func_61("ILO_SHERIFF_INTRO", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								func_39(&uLocal_1168, 128);
							}
						}
					}
					iLocal_1031 = 14;
				}
			}
			else if (iVar1217 == 1)
			{
				open_sequence_task(&iLocal_1290);
				task_follow_nav_mesh_to_coord(0, Local_923.f_32, 1f, -1, 1f, 1, 40000f);
				func_46(iVar1251, &iLocal_1290, 0, 0, 1, 1);
				iLocal_1031 = 14;
			}
			else
			{
				open_sequence_task(&iLocal_1290);
				task_follow_nav_mesh_to_coord(0, -276.2055f, 809.0731f, 118.38f, 1f, -1, 0.5f, 0, 40000f);
				func_46(iVar1251, &iLocal_1290, 0, 0, 1, 1);
				iLocal_1031 = 14;
			}
			break;
		case 14:
			if (!func_68(&uLocal_1323))
			{
				func_69(&uLocal_1323, 0);
			}
			break;
	}
}

void func_671(vector3 vParam0, float fParam3, bool bParam4, bool bParam5)
{
	iVar0 = 1048576;
	if (bParam4)
	{
		iVar0 |= 131072;
	}
	if (bParam5)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

bool func_672(var uParam0, int iParam1)
{
	if (!is_entity_dead(uParam0->f_1) && !func_2(uParam0->f_23, 4))
	{
		set_ped_reset_flag(uParam0->f_1, 179, true);
	}
	switch (*uParam0)
	{
		case 0:
			if (!is_entity_dead(uParam0->f_1))
			{
				func_246(&(uParam0->f_5));
				if (is_ped_a_player(uParam0->f_1))
				{
					set_player_control(get_player_index(), false, uParam0->f_3, false);
					if (func_2(uParam0->f_23, 2048))
					{
						_display_hud_component(724769646);
					}
				}
				if (uParam0->f_24 == 0)
				{
					_set_ped_crouch_movement(Global_35, false, 0, false);
				}
				if (!func_2(uParam0->f_23, 4))
				{
					clear_ped_secondary_task(uParam0->f_1);
				}
				if (!func_2(uParam0->f_23, 2))
				{
					uParam0->f_2 = _get_last_mount(uParam0->f_1);
					if (!is_entity_dead(uParam0->f_2) && func_803(uParam0->f_1))
					{
						func_804(uParam0->f_1);
						iVar0 = func_697(uParam0->f_1, uParam0->f_8, 1f);
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
						iVar3 = func_697(uParam0->f_1, uParam0->f_8, 1f);
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
						func_83(&(uParam0->f_23), 2);
					}
				}
				if (func_329(uParam0->f_14))
				{
					uParam0->f_14 = { uParam0->f_8 };
				}
				func_805(uParam0, 1, iParam1);
			}
			else
			{
				func_805(uParam0, 6, iParam1);
			}
			break;
		case 1:
			if (func_806(uParam0, iParam1))
			{
				func_246(&(uParam0->f_5));
				if (!func_807(uParam0, iParam1))
				{
					func_808();
				}
				func_805(uParam0, 2, iParam1);
			}
			break;
		case 2:
			if (func_807(uParam0, iParam1))
			{
				func_246(&(uParam0->f_5));
				if (!func_2(uParam0->f_23, 4))
				{
					set_current_ped_weapon(uParam0->f_1, -1569615261, false, 0, false, false);
					set_current_ped_weapon(uParam0->f_1, -1569615261, false, 1, false, false);
					task_swap_weapon(uParam0->f_1, 1, func_2(uParam0->f_23, 512), 0, 0);
				}
				func_805(uParam0, 3, iParam1);
			}
			break;
		case 3:
			if (func_809(uParam0, iParam1))
			{
				func_246(&(uParam0->f_5));
				if (!_is_ped_carrying(uParam0->f_1))
				{
					func_83(&(uParam0->f_23), 256);
				}
				if (func_2(uParam0->f_23, 4096) && !_is_ped_carrying(uParam0->f_1))
				{
					func_83(&(uParam0->f_23), 256);
					iVar6 = _get_last_mount(uParam0->f_1);
					if (func_59(iVar6, uParam0->f_1, 1, 1) < 5f)
					{
						iVar5 = func_810(iVar6);
						task_pickup_carriable_entity(uParam0->f_1, iVar5);
					}
				}
				else if (!func_2(uParam0->f_23, 256))
				{
					iVar5 = _get_first_entity_ped_is_carrying(uParam0->f_1);
					task_place_carried_entity_at_coord(uParam0->f_1, iVar5, uParam0->f_14, uParam0->f_21, uParam0->f_4);
				}
				func_805(uParam0, 4, iParam1);
			}
			break;
		case 4:
			if (func_811(uParam0, iParam1))
			{
				func_246(&(uParam0->f_5));
				if (func_2(uParam0->f_23, 8192))
				{
					if (func_2(uParam0->f_23, 1024))
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
					if (!func_329(uParam0->f_11))
					{
					}
					iVar8 = 0;
					if (!func_2(uParam0->f_23, 1024))
					{
						iVar8 |= 1;
					}
					open_sequence_task(&iVar9);
					if (!func_329(uParam0->f_11))
					{
						if (func_2(uParam0->f_23, 16))
						{
							task_go_straight_to_coord(0, uParam0->f_11, uParam0->f_21, func_448(!func_2(uParam0->f_23, 128), 20000, -1), uParam0->f_19, uParam0->f_17, 0);
						}
						else
						{
							task_follow_nav_mesh_to_coord(0, uParam0->f_11, uParam0->f_21, func_448(!func_2(uParam0->f_23, 128), 20000, -1), uParam0->f_17, iVar8, uParam0->f_19);
						}
					}
					if (func_2(uParam0->f_23, 16))
					{
						task_go_straight_to_coord(0, uParam0->f_8, uParam0->f_21, func_448(!func_2(uParam0->f_23, 128), 20000, -1), uParam0->f_19, uParam0->f_17, 0);
					}
					else
					{
						task_follow_nav_mesh_to_coord(0, uParam0->f_8, uParam0->f_21, func_448(!func_2(uParam0->f_23, 128), 20000, -1), uParam0->f_17, iVar8, uParam0->f_19);
					}
					if (func_2(uParam0->f_23, 1))
					{
						task_achieve_heading(0, uParam0->f_19, 0);
					}
					func_46(uParam0->f_1, &iVar9, 0, 0, 1, 1);
				}
				func_805(uParam0, 5, iParam1);
			}
			break;
		case 5:
			if (func_2(uParam0->f_23, 8192))
			{
				if (_0x337f1cc8ee895601(uParam0->f_25, &(uParam0->f_30)))
				{
					iVar10 = 1;
				}
			}
			else if (!func_2(uParam0->f_23, 1))
			{
				uParam0->f_19 = get_entity_heading(uParam0->f_1);
			}
			if (!func_2(uParam0->f_23, 128) && func_452(&(uParam0->f_5), 15f))
			{
				iVar10 = 1;
			}
			if (!func_2(uParam0->f_23, 8192))
			{
				if (get_script_task_status(uParam0->f_1, 242628503, true) == 8)
				{
					iVar10 = 1;
				}
				if ((func_329(uParam0->f_11) || !func_487(uParam0->f_1, 242628503)) || get_sequence_progress(uParam0->f_1) > 0)
				{
					iVar11 = 1;
				}
				if (func_812(uParam0->f_1, uParam0->f_8, uParam0->f_19, uParam0->f_18, uParam0->f_20, func_2(uParam0->f_23, 8)) && (!func_2(uParam0->f_23, 64) || absf(func_813(uParam0->f_1, uParam0->f_8)) < uParam0->f_22))
				{
					iVar12 = 1;
				}
			}
			if ((iVar11 && iVar12) || iVar10)
			{
				if (func_2(uParam0->f_23, 32))
				{
					task_turn_ped_to_face_coord(uParam0->f_1, uParam0->f_8, 0);
				}
				func_72(&(uParam0->f_5));
				func_805(uParam0, 6, iParam1);
				return true;
			}
			break;
		case 6:
			return true;
	}
	return false;
}

bool func_673(int iParam0, int iParam1, int iParam2)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_814(iParam0, iParam1))
		{
			if (is_ped_active_in_scenario(iParam0, iParam2))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_674()
{
	iVar0 = _0xd04241bbf6d03a5e(Global_35);
	if (_does_scenario_point_exist(iVar0))
	{
		return true;
	}
	return false;
}

int func_675(int iParam0)
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

int func_676(int iParam0)
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

void func_677(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_516();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_815(iParam0);
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
	if (func_708(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_98())
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
	Global_40.f_11095.f_35 = func_816(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_516();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_817(iVar1);
		func_819(func_818(), 0, 4000);
		func_820(Global_40.f_11095.f_35);
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
		func_821(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_823(func_822(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (does_entity_exist(iParam5))
			{
				decor_set_int(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_676(14))
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
					sParam4 = func_824(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_714(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_714(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_823(func_822(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_676(4))
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
					sParam4 = func_824(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_714(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_714(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_822(-1990689970) };
	stat_id_set_int(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		_0xe6b763c7f4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_825(10, 1);
	}
}

void func_678(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

void func_679(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_680(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, float fParam5)
{
	if (bParam4 && is_entity_dead(iParam0))
	{
		return true;
	}
	if (!bParam3)
	{
		if (is_entity_occluded(iParam0))
		{
			return true;
		}
	}
	if (func_826(get_entity_coords(iParam0, true, false), fParam1, fParam2, 1, fParam5))
	{
		return true;
	}
	return false;
}

void func_681(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_682(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_633(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_683(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_684(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

void func_685(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_686(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!does_entity_exist(iParam0) || (iParam2 == 1 && is_entity_dead(iParam0)))
	{
		return 0;
	}
	iVar0 = get_blip_from_entity(iParam0);
	if (!does_blip_exist(iVar0))
	{
		iVar0 = _blip_add_for_entity(iParam1, iParam0);
	}
	else
	{
		_0xedd964b7984ac291(iVar0, iParam1);
	}
	if (bParam3)
	{
		if ((iParam1 == 408396114 || iParam1 == 1259054292) || iParam1 == -308585968)
		{
			_blip_set_modifier(iVar0, 231194138);
		}
	}
	return iVar0;
}

void func_687(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_49((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_688(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_182(iParam0))
	{
		return;
	}
	iVar0 = func_180(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(2, sParam1, sParam2));
}

bool func_689(var uParam0)
{
	if (!func_827(*uParam0, uParam0->f_4))
	{
		return false;
	}
	return true;
}

bool func_690(var uParam0)
{
	if (!func_689(uParam0))
	{
		return false;
	}
	if (func_828(uParam0->f_7, uParam0->f_8, func_478(&(uParam0->f_3), 4)))
	{
		return true;
	}
	if (!func_478(&(uParam0->f_3), 4))
	{
		if (func_829())
		{
			return true;
		}
	}
	return false;
}

int func_691(var uParam0)
{
	if (!func_68(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_270(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_168() - round((uParam0->f_1 * 1000f)));
}

bool func_692(float fParam0, float fParam1)
{
	if (is_ped_on_mount(Global_35))
	{
		return get_entity_speed(Global_35) < fParam0;
	}
	return get_entity_speed(Global_35) < fParam1;
}

bool func_693(vector3 vParam0, var uParam3)
{
	if (!func_478(&(uParam3->f_3), 8))
	{
		return true;
	}
	if (func_629(vParam0, 0.06f, 0.94f, 0.1f, 0.8f))
	{
		return true;
	}
	return false;
}

bool func_694(vector3 vParam0, var uParam3)
{
	fVar0 = func_695(vParam0, 1);
	return fVar0 < uParam3->f_6;
}

float func_695(vector3 vParam0, bool bParam3)
{
	vVar0 = { func_830(0) };
	vVar3 = { func_696(vParam0 - get_gameplay_cam_coord()) };
	if (bParam3)
	{
		return absf(get_angle_between_2d_vectors(vVar3.x, vVar3.y, vVar0.x, vVar0.y));
	}
	return get_angle_between_2d_vectors(vVar3.x, vVar3.y, vVar0.x, vVar0.y);
}

Vector3 func_696(vector3 vParam0)
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

int func_697(int iParam0, vector3 vParam1, float fParam4)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		vVar0 = { get_entity_coords(iParam0, false, false) };
		vVar3 = { get_entity_forward_vector(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_831(vVar3, vVar6);
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
	if (func_185(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

int func_698(int iParam0, int iParam1)
{
	iVar0 = -1;
	switch (iParam0)
	{
		case 76:
			switch (iParam1)
			{
				case 0:
					iVar0 = 25;
					break;
				case 1:
					iVar0 = 26;
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 0:
					iVar0 = 499;
					break;
				case 1:
					iVar0 = 500;
					break;
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 0:
					iVar0 = 127;
					break;
			}
			break;
		case 78:
			switch (iParam1)
			{
				case 0:
					iVar0 = 430;
					break;
				case 1:
					iVar0 = 431;
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					iVar0 = 281;
					break;
				case 1:
					iVar0 = 282;
					break;
			}
			break;
		case 38:
			switch (iParam1)
			{
				case 0:
					iVar0 = 511;
					break;
				case 1:
					iVar0 = 512;
					break;
			}
			break;
		case 115:
			switch (iParam1)
			{
				case 0:
					iVar0 = 364;
					break;
				case 1:
					iVar0 = 363;
					break;
				case 2:
					iVar0 = 362;
					break;
				case 3:
					iVar0 = 361;
					break;
				case 4:
					iVar0 = 360;
					break;
				case 5:
					iVar0 = 359;
					break;
			}
			break;
	}
	if (iVar0 == -1)
	{
	}
	return iVar0;
}

int func_699(int iParam0)
{
	if (!func_298(iParam0))
	{
		return 0;
	}
	if (!func_530(func_525(iParam0)))
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_526(iParam0)))
	{
		return 0;
	}
	if (network_is_in_session())
	{
		if (!network_has_control_of_entity(_0x31c70a716cae1fee(func_526(iParam0))))
		{
			return 1;
		}
	}
	iVar0 = _0x31c70a716cae1fee(func_526(iParam0));
	if (does_entity_exist(iVar0))
	{
		if (!_0x88ad6cc10d8d35b2(iVar0))
		{
			set_entity_as_mission_entity(iVar0, true, true);
		}
	}
	_0x7b204f88f6c3d287(func_526(iParam0));
	return 1;
}

bool func_700(int iParam0, bool bParam1)
{
	if (bParam1 && !func_182(iParam0))
	{
		return false;
	}
	iVar0 = func_180(iParam0);
	if (!_uiprompt_has_hold_mode((*Global_1945938)[iVar0]->f_3))
	{
		return is_control_pressed(2, (*Global_1945938)[iVar0]->f_4);
	}
	return _uiprompt_is_hold_mode_running((*Global_1945938)[iVar0]->f_3);
}

bool func_701(int iParam0, bool bParam1)
{
	if (bParam1 && !func_182(iParam0))
	{
		return false;
	}
	iVar0 = func_180(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

int func_702(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	if (func_329(vParam2))
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
		if (func_633(iVar0, 2))
		{
			if (func_559(vParam2, (*Global_1945938)[iVar0]->f_6, 0.01f, 1) && iParam1 == (*Global_1945938)[iVar0]->f_4)
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
		func_832(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

void func_703(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 256;
	uParam0->f_4 = 0;
	func_72(&(uParam0->f_5));
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = 0.25f;
	uParam0->f_18 = 0.25f;
	uParam0->f_19 = 40000f;
	uParam0->f_20 = 10f;
	uParam0->f_21 = 1f;
	uParam0->f_22 = 0f;
	uParam0->f_23 = 0;
	uParam0->f_25 = 0;
	StringCopy(&(uParam0->f_30), "", 24);
	StringCopy(&(uParam0->f_26), "", 32);
}

bool func_704(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

void func_705(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_833(iParam1))
		{
			func_834(iParam0, 41788943);
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
			func_835(iParam0, 0, 1);
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
			func_836(iParam0, 0);
			bVar0 = true;
		}
		func_837(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

int func_706(int iParam0)
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

float func_707(int iParam0)
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
			return func_838(iParam0);
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
			return func_838(iParam0);
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
			return func_838(iParam0);
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

bool func_708(int iParam0)
{
	if (!func_839(iParam0))
	{
		return false;
	}
	return func_840(iParam0);
}

bool func_709(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_708(18);
		case 2:
			return func_708(20);
		case 1:
			return func_708(19);
		default:
			break;
	}
	return true;
}

int func_710(int iParam0)
{
	return func_841(&(Global_40.f_11095.f_11[iParam0]));
}

void func_711(int iParam0, float fParam1, bool bParam2)
{
	if (func_285() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_708(31))
	{
		return;
	}
	iVar0 = func_710(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	set_attribute_points(Global_35, iParam0, floor(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_710(iParam0);
	if (func_842(iParam0) && func_843(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_844(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_845(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!is_radar_hidden() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_191(func_846(iParam0), 0);
					}
					func_847(iParam0, iVar2, iVar3);
					func_848(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = get_game_timer();
}

char* func_712(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_713(int iParam0)
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

var func_714(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_849(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_715()
{
	return Global_40.f_11095.f_35;
}

void func_716(bool bParam0)
{
	if (bParam0)
	{
		func_83(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_82(&(Global_40.f_12019.f_42), 1);
	}
}

bool func_717(int iParam0)
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

bool func_718(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	bVar0 = func_285() != -1;
	switch (iParam0)
	{
		case 76:
			*uParam1 = 0;
			if (bParam3)
			{
				*iParam2 = 47;
			}
			else
			{
				*iParam2 = 63;
			}
			if (bVar0)
			{
				*iParam2 = 5;
			}
			break;
		case 105:
			*uParam1 = 69;
			if (bParam3)
			{
				*iParam2 = 127;
			}
			else
			{
				*iParam2 = 136;
			}
			if (bVar0)
			{
				*iParam2 = 72;
			}
			break;
		case 5:
			*uParam1 = 137;
			*iParam2 = 324;
			if (bVar0)
			{
				*iParam2 = 142;
			}
			break;
		case 61:
			*uParam1 = 380;
			*iParam2 = 381;
			if (bVar0)
			{
				*iParam2 = 380;
			}
			break;
		case 78:
			*uParam1 = 382;
			*iParam2 = 431;
			if (bVar0)
			{
				*iParam2 = 384;
			}
			break;
		case 92:
			*uParam1 = 443;
			*iParam2 = 471;
			if (bVar0)
			{
				*iParam2 = 443;
			}
			break;
		case 26:
			*uParam1 = 472;
			if (bParam3)
			{
				*iParam2 = 500;
			}
			else
			{
				*iParam2 = 502;
			}
			if (bVar0)
			{
				*iParam2 = 472;
			}
			break;
		case 38:
			*uParam1 = 508;
			*iParam2 = 553;
			if (bVar0)
			{
				*iParam2 = 509;
			}
			break;
		case 68:
			*uParam1 = 554;
			*iParam2 = 565;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 65:
			*uParam1 = 566;
			*iParam2 = 588;
			if (bVar0)
			{
				*iParam2 = 566;
			}
			break;
		case 69:
			*uParam1 = 589;
			if (bParam3)
			{
				*iParam2 = 598;
			}
			else
			{
				*iParam2 = 612;
			}
			if (bVar0)
			{
				*iParam2 = 590;
			}
			break;
		case 75:
			*uParam1 = 503;
			*iParam2 = 506;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 93:
			*uParam1 = 613;
			*iParam2 = 625;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 95:
			*uParam1 = 626;
			*iParam2 = 641;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 97:
			*uParam1 = 642;
			*iParam2 = 643;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 3:
			*uParam1 = 644;
			*iParam2 = 656;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 6:
			*uParam1 = 657;
			*iParam2 = 658;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 32:
			*uParam1 = 325;
			*iParam2 = 344;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 82:
			*uParam1 = 659;
			if (bParam3)
			{
				*iParam2 = 673;
			}
			else
			{
				*iParam2 = 690;
			}
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 35:
			*uParam1 = 691;
			*iParam2 = 700;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 56:
			*uParam1 = 701;
			*iParam2 = 708;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 22:
			if (bParam4)
			{
				*uParam1 = 715;
			}
			else
			{
				*uParam1 = 715;
			}
			*iParam2 = 723;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 110:
			*uParam1 = 724;
			*iParam2 = 730;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 64:
			*uParam1 = 736;
			*iParam2 = 740;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 66:
			*uParam1 = 745;
			*iParam2 = 750;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 70:
			*uParam1 = 751;
			*iParam2 = 754;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 77:
			*uParam1 = 731;
			*iParam2 = 732;
			break;
		case 96:
			*uParam1 = 741;
			*iParam2 = 743;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 29:
			*uParam1 = 744;
			*iParam2 = 744;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 100:
			*uParam1 = 755;
			*iParam2 = 763;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 102:
			*uParam1 = 764;
			*iParam2 = 767;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 72:
			*uParam1 = 733;
			*iParam2 = 735;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 124:
			*uParam1 = 791;
			*iParam2 = 793;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 86:
			*uParam1 = 768;
			*iParam2 = 772;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 126:
			*uParam1 = 773;
			*iParam2 = 779;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 120:
			*uParam1 = 432;
			*iParam2 = 442;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 115:
			*uParam1 = 345;
			*iParam2 = 375;
			if (bVar0)
			{
				*iParam2 = 375;
			}
			break;
		case 125:
			*uParam1 = 376;
			*iParam2 = 379;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 116:
			*uParam1 = 783;
			*iParam2 = 790;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 21:
			*uParam1 = 780;
			*iParam2 = 782;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 42:
			*uParam1 = 794;
			*iParam2 = 798;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 89:
			*uParam1 = 799;
			*iParam2 = 800;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 23:
			*uParam1 = 801;
			*iParam2 = 801;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 28:
			*uParam1 = 802;
			*iParam2 = 803;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 101:
			*uParam1 = 804;
			*iParam2 = 806;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 117:
			*uParam1 = 507;
			*iParam2 = 507;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 11:
			*uParam1 = 807;
			*iParam2 = 833;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 128:
			*uParam1 = 834;
			*iParam2 = 857;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		default:
			*uParam1 = -1;
			*iParam2 = -1;
			break;
	}
	if (*uParam1 == -1 || *iParam2 == -1)
	{
		return false;
	}
	return true;
}

int func_719(int iParam0)
{
	iVar0 = func_526(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!_0x800df3fc913355f3(iVar0))
	{
		return 0;
	}
	return _0x31c70a716cae1fee(iVar0);
}

void func_720(int iParam0, int iParam1)
{
	if (func_285() != -1)
	{
		return;
	}
	if (!func_298(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (Global_24887[iParam0] || iParam1);
}

void func_721(int iParam0, int iParam1)
{
	if (!func_298(iParam0))
	{
		return;
	}
	(*Global_1895087)[iParam0]->f_1 = iParam1;
}

void func_722()
{
	func_850(23);
}

int func_723(var uParam0)
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

void func_724(int iParam0)
{
	iVar0 = func_851(iParam0);
	if (iVar0 != 0)
	{
		func_852(-1, 24, 0, iVar0);
	}
}

void func_725(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (Global_1310750->f_16071 != iParam0 && !bParam2)
	{
		return;
	}
	if (&Global_17504.f_42[iParam0] == 0)
	{
		func_823(func_822(-1029789297), 1);
	}
	Global_17504.f_4++;
	Global_17504.f_42[iParam0] = &Global_17504.f_42[iParam0] + 1;
	(*Global_1310750)[iParam0]->f_110 |= 8;
	if (func_126(iParam0, 2))
	{
		func_853(iParam0, func_586(iParam3));
	}
	if (func_126(iParam0, 1))
	{
		if (iParam4 == -1)
		{
			iParam4 = func_588();
		}
		func_854(iParam0, iParam4);
	}
	if (iParam1 >= 0 && !func_142(iParam0, 65536))
	{
		func_855(iParam0, iParam1);
		func_856(iParam0, func_324(iParam0, iParam1));
		func_279(128);
	}
	func_590(iParam0, (*Global_1310750)[iParam0]->f_37, 1065353216, 0, 0);
	func_591(iParam0, 1);
	if (!bParam2)
	{
		func_279(16);
		Global_17504.f_5 = iParam0;
		Global_17504.f_9 = 1;
		Global_17504.f_7 = 0;
		Global_17504.f_8 = 0;
		func_857(524288);
	}
	if (func_858(iParam0) != 0)
	{
		if (&Global_17504.f_42[iParam0] >= func_858(iParam0))
		{
			Global_17504.f_42[iParam0]->f_6 = 1;
		}
	}
}

void func_726(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_859(&Global_0, 8);
	}
	if (!func_860() || func_285() != -1)
	{
		return;
	}
	func_859(&Global_0, 1);
}

int func_727(int iParam0, bool bParam1)
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

void func_728(int iParam0)
{
	Global_17504.f_2++;
	Global_17504.f_42[iParam0]->f_3++;
	(*Global_1310750)[iParam0]->f_110 |= 2;
}

bool func_729(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	if (func_329(vParam0))
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

bool func_730(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (func_329(vParam0))
	{
		return false;
	}
	return _0x769bb7626b8cdb06(vParam0, fParam3, iParam5, iParam4, 16384);
}

bool func_731(vector3 vParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_1310750->f_16043)
	{
		if (!func_329(*Global_1310750->f_16043[iVar0]))
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

bool func_732()
{
	iVar0 = func_861(func_3());
	if (iVar0 == 8)
	{
		iVar1 = func_373(func_3());
		if (func_375(Global_36, iVar1))
		{
			return false;
		}
	}
	if (func_862(func_290(0)))
	{
		return false;
	}
	if (func_863())
	{
		return false;
	}
	if (is_player_riding_train(player_id()))
	{
		return false;
	}
	return true;
}

float func_733(float fParam0)
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

int func_734(var uParam0, var uParam1)
{
	vVar0 = { *uParam0 };
	if (func_864(&uParam1))
	{
		return 1;
	}
	if (!func_865(&vVar0, 1, 10, 0))
	{
		return 0;
	}
	*uParam0 = { vVar0 };
	return 1;
}

bool func_735(var uParam0)
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

bool func_736(int iParam0)
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

bool func_737(var uParam0)
{
	return func_36(*uParam0, 4);
}

bool func_738(var uParam0)
{
	return func_36(*uParam0, 64);
}

bool func_739(var uParam0)
{
	return func_36(*uParam0, 8);
}

bool func_740(var uParam0)
{
	return func_36(*uParam0, 128);
}

bool func_741(var uParam0)
{
	return func_36(*uParam0, 2048);
}

void func_742(int iParam0, bool bParam1)
{
	set_ped_config_flag(iParam0, 130, !bParam1);
	set_ped_config_flag(iParam0, 178, bParam1);
}

bool func_743(var uParam0)
{
	return func_36(*uParam0, 1024);
}

bool func_744(var uParam0)
{
	return func_36(*uParam0, 256);
}

void func_745(int iParam0, bool bParam1)
{
	set_ped_config_flag(iParam0, 146, !bParam1);
	set_ped_config_flag(iParam0, 148, !bParam1);
}

bool func_746(var uParam0)
{
	return func_36(*uParam0, 512);
}

bool func_747(var uParam0)
{
	return func_36(*uParam0, 4096);
}

int func_748(int iParam0)
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

struct<4> func_749(bool bParam0)
{
	return func_578(1328661203, func_866(), -1591664384, bParam0);
}

int func_750(int iParam0)
{
	if (!func_759(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_751(bool bParam0)
{
	iVar0 = func_760(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_578(923904168, func_749(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_578(923904168, func_749(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_578(923904168, func_749(bParam0), -740156546, 0);
}

bool func_752(int iParam0, bool bParam1)
{
	if (func_754(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_708(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_753(bool bParam0)
{
	iVar0 = func_760(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_578(271701509, func_749(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_578(271701509, func_749(bParam0), 12999093, 0);
}

int func_754(int iParam0)
{
	if (!func_759(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_755(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_754(iParam0);
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

bool func_756(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_760(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_757(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_759(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_578(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_760(bParam6), &Var0, 0);
	return uVar4;
}

bool func_758(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_760(0);
	*uParam1 = { func_578(iParam0, func_751(0), iParam3, 0) };
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

bool func_759(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_760(bool bParam0)
{
	if (func_285() == -1)
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

bool func_761(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

bool func_762(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_763(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_764(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!_does_volume_exist(*uParam0))
	{
		*uParam0 = _create_volume_box_with_custom_name(vParam1, vParam4, vParam7, func_381());
	}
}

void func_765(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!_does_volume_exist(*uParam0))
	{
		*uParam0 = _create_volume_sphere_with_custom_name(vParam1, vParam4, vParam7, func_381());
	}
}

int func_766(int iParam0)
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

int func_767(int iParam0, int iParam1)
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

void func_768(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_549(Global_1310750[iVar0], iParam0))
		{
			if (!func_537(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_867(iVar0) < func_868(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_590(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

void func_769(int iParam0)
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

void func_770(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_771()
{
	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_869(iVar0, 128))
		{
			func_870(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_772()
{
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_869(iVar0, 128) && func_869(iVar0, 1))
		{
			func_870(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_773(float fParam0)
{
	iVar0 = floor((fParam0 * 1000f));
	if (Global_1393237->f_3 < (get_game_timer() + iVar0))
	{
		Global_1393237->f_3 = (get_game_timer() + iVar0);
	}
}

void func_774()
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_126(iVar0, 16777216))
		{
			if (!func_871(iVar0))
			{
				func_872(iVar0, 4096);
			}
		}
		iVar0++;
	}
}

void func_775(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = ((iParam1 + (60 * iParam2)) + (3600 * iParam3));
	iVar1 = (iVar0 / 2);
	iVar2 = (iVar1 / 60);
	iVar3 = (iVar1 - iVar2 * 60);
	iVar4 = 0;
	switch (iParam0)
	{
		case 0:
			func_102(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_102(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_102(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_102(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_102(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_102(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_102(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_102(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_102(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_102(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_102(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_102(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_102(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_102(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_102(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_102(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_102(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_102(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_102(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_102(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_102(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_102(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_102(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_102(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_102(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_102(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_102(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_102(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_102(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_102(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_102(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_102(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_102(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_102(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_102(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_102(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_776(float fParam0, bool bParam1, bool bParam2)
{
	fVar0 = func_271();
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

int func_777(int iParam0)
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

int func_778(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

bool func_779()
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

int func_780(int iParam0)
{
	if (!func_617(iParam0))
	{
		return -1;
	}
	return func_873(iParam0);
}

int func_781(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_782(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (func_182(iParam1->f_6))
	{
		if (bParam7 || is_bit_set(*iParam1, 11))
		{
			return;
		}
		func_42(&(iParam1->f_6), 0, 1);
	}
	if (!func_182(iParam1->f_6) && !is_bit_set(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_651(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_874(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_182(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_789(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_875(iParam1->f_6, 17, 1, 1);
				}
				if (is_bit_set(*iParam1, 1))
				{
					if (is_bit_set(*iParam1, 3))
					{
						func_876(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_688(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (is_bit_set(*iParam1, 10))
				{
					func_875(iParam1->f_6, 16, 1, 1);
				}
				if (!is_bit_set(*iParam1, 0) || is_bit_set(*iParam1, 13))
				{
					func_463(iParam1->f_6, 0, 1);
				}
				else
				{
					func_463(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

void func_783(int* iParam0, int iParam1)
{
	if (!func_423(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_424(iParam0, 14);
		}
	}
}

bool func_784(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_785(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_786(int iParam0, int iParam1)
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

bool func_787(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

bool func_788(int iParam0, bool bParam1)
{
	if (bParam1 && !func_182(iParam0))
	{
		return false;
	}
	return !func_633(iParam0, 4);
}

void func_789(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam3 && !func_182(iParam0))
	{
		return;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = func_180(iParam0);
	func_875(iParam0, 18, 0, 1);
	func_875(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = _uiprompt_get_group_id_for_target_entity(iParam1);
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam4, iParam2);
}

bool func_790(int iParam0, bool bParam1)
{
	if (bParam1 && !func_182(iParam0))
	{
		return false;
	}
	iVar0 = func_180(iParam0);
	return _uiprompt_is_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_791(int iParam0, bool bParam1)
{
	if (bParam1 && !func_182(iParam0))
	{
		return;
	}
	iVar0 = func_180(iParam0);
	_uiprompt_restart_modes((*Global_1945938)[iVar0]->f_3);
}

int func_792()
{
	switch (func_3())
	{
		case 26:
			return 472;
		case 76:
			return 3;
	}
	return -1;
}

bool func_793(int iParam0)
{
	if (!func_620(iParam0))
	{
		return false;
	}
	return func_877(iParam0, 8);
}

bool func_794(int iParam0, bool bParam1)
{
	if (!func_298(iParam0))
	{
		return false;
	}
	if ((func_299(iParam0, 1) && !func_104(iParam0)) && func_527(iParam0))
	{
		return false;
	}
	if (!func_299(iParam0, 2))
	{
		return false;
	}
	if (!bParam1)
	{
		if (!func_878(iParam0, 0))
		{
			return false;
		}
	}
	return true;
}

int func_795(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (!func_794(iParam0, 1))
	{
		return 0;
	}
	if (func_530(func_525(iParam0)))
	{
		iVar1 = func_526(iParam0);
		if (!_0x800df3fc913355f3(iVar1))
		{
			return 0;
		}
		if (bParam1)
		{
			if (_0xeb98b38ca60742d7(iVar1))
			{
				_0x49a8c2cd97815215(iVar1);
			}
		}
		_0x6759bee6762e140b(iVar1);
		iVar0 = _0x0cadc3a977997472(iVar1, 0);
		if (!does_entity_exist(iVar0))
		{
			return 0;
		}
	}
	if ((bParam4 && !func_104(iParam0)) && !is_entity_dead(iVar0))
	{
		set_ped_config_flag(iVar0, 171, bParam5);
		set_entity_as_mission_entity(iVar0, true, true);
	}
	func_720(iParam0, 1);
	func_879(iParam0);
	if (bParam3)
	{
		func_720(iParam0, 16);
	}
	if (!bParam2)
	{
	}
	return iVar0;
}

Vector3 func_796(int iParam0, int iParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (!bParam4 && is_ped_injured(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (!_does_anim_scene_exist(iParam1))
	{
		return 0f, 0f, 0f;
	}
	if (_get_anim_scene_entity_matrix(iParam1, sParam2, &vVar0, true, sParam3, 2))
	{
		return vVar0;
	}
	return 0f, 0f, 0f;
}

float func_797(int iParam0, int iParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (!bParam4 && is_ped_injured(iParam0))
	{
		return 0f;
	}
	if (!_does_anim_scene_exist(iParam1))
	{
		return 0f;
	}
	if (_get_anim_scene_entity_matrix(iParam1, sParam2, &Var0, true, sParam3, 2))
	{
		return Var0.f_3.f_2;
	}
	return 0f;
}

void func_798()
{
	func_241(535323366, 0, 0f, 0, 0, 0, 0, 0);
	func_241(193903155, 0, 0f, 0, 0, 0, 0, 0);
}

int func_799(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bVar0 = func_880(iParam3, 1);
	bVar1 = func_880(iParam3, 2);
	bVar2 = !func_880(iParam3, 4);
	bVar3 = func_880(iParam3, 8);
	bVar4 = !func_880(iParam3, 16);
	bVar5 = func_880(iParam3, 32);
	bVar6 = func_880(iParam3, 64);
	return func_134(iParam0, iParam1, bVar0, bVar1, iParam4, bVar2, bVar3, iParam5, iParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

void func_800(int iParam0)
{
	if (_does_anim_scene_exist(iParam0))
	{
		if (_is_anim_scene_started(iParam0, false))
		{
			_delete_anim_scene(iParam0);
		}
	}
}

void func_801()
{
	if ((func_36(iVar1164, 2097152) && !func_36(iVar1164, 4194304)) && !is_any_speech_playing(&(uLocal_1250[1])))
	{
		func_62(iVar1251, &(uLocal_1250[1]), func_61("ARREST_D", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		func_39(&uLocal_1166, 4194304);
	}
	if ((func_36(iVar1164, 1048576) && !func_36(iVar1164, 2097152)) && !is_any_speech_playing(&(uLocal_1250[1])))
	{
		fVar0 = 0f;
		fVar0 = _0x6127f25ed21c533c(iVar1251);
		if (((((is_ped_performing_melee_action(iVar1251, 32768, 892442958) || is_ped_performing_melee_action(iVar1251, 32768, -916086066)) || is_ped_performing_melee_action(iVar1251, 32768, 221396820)) || is_ped_performing_melee_action(iVar1251, 32768, -967681220)) && fVar0 >= 0.25f) || _is_ped_hogtied(&(uLocal_1250[1])))
		{
			if (func_50(&(uLocal_1250[1]), iVar1227, 0, 1))
			{
				func_62(&(uLocal_1250[1]), iVar1251, func_61("ARREST_C_ROOM", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				func_62(&(uLocal_1250[1]), iVar1251, func_61("ARREST_C_OUTSIDE", 1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			func_39(&uLocal_1166, 2097152);
		}
	}
}

void func_802()
{
	if ((iVar1028 == 3 || iVar1028 == 4) || iVar1028 == 5)
	{
		return;
	}
	func_236(Local_1434[0], "RE_INTER_POS");
	func_236(Local_1434[1], "RE_INTER_ANTAGONIZE");
	func_186(Local_1434[0], 1, 0);
	func_186(Local_1434[1], 1, 0);
	if (func_63(iVar1251, &(uLocal_1250[1])))
	{
		iLocal_1030 = 3;
	}
	else if (func_63(iVar1251, &(uLocal_1250[0])))
	{
		iLocal_1030 = 4;
	}
	else
	{
		iLocal_1030 = 5;
	}
}

bool func_803(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	return is_ped_on_mount(iParam0);
}

void func_804(int iParam0)
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

void func_805(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam1;
}

bool func_806(var uParam0, int iParam1)
{
	if (func_452(&(uParam0->f_5), 5f))
	{
		return true;
	}
	if (func_2(uParam0->f_23, 2))
	{
		return true;
	}
	if (((!func_803(uParam0->f_1) && !func_487(uParam0->f_1, 501393341)) && !is_ped_in_any_vehicle(uParam0->f_1, true)) && !func_487(uParam0->f_1, -828834893))
	{
		return true;
	}
	return false;
}

bool func_807(var uParam0, int iParam1)
{
	if (func_452(&(uParam0->f_5), 4f))
	{
		return true;
	}
	if (!func_2(uParam0->f_23, 16384))
	{
		return true;
	}
	if (uParam0->f_1 != Global_35)
	{
		return true;
	}
	if (!func_881(&uVar0))
	{
		return true;
	}
	return false;
}

int func_808()
{
	if (!func_882())
	{
		return 0;
	}
	if (!func_883(&iVar0))
	{
		return 0;
	}
	if (!func_884(iVar0))
	{
		return 0;
	}
	return func_885(iVar0, 0);
}

bool func_809(var uParam0, int iParam1)
{
	if (func_452(&(uParam0->f_5), 4f))
	{
		return true;
	}
	if (func_2(uParam0->f_23, 4))
	{
		return true;
	}
	get_current_ped_weapon(uParam0->f_1, &iVar0, true, 0, false);
	get_current_ped_weapon(uParam0->f_1, &iVar1, true, 1, false);
	if (func_2(uParam0->f_23, 512) || (iVar0 == -1569615261 && iVar1 == -1569615261))
	{
		return true;
	}
	return false;
}

int func_810(int iParam0)
{
	iVar0 = func_886(iParam0);
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

bool func_811(var uParam0, int iParam1)
{
	if (func_452(&(uParam0->f_5), 15f))
	{
		return true;
	}
	if (func_2(uParam0->f_23, 4096) && func_487(uParam0->f_1, 1245594896))
	{
		return false;
	}
	if (func_2(uParam0->f_23, 256))
	{
		return true;
	}
	if (get_script_task_status(uParam0->f_1, -208384378, true) == 8)
	{
		return true;
	}
	return false;
}

bool func_812(int iParam0, vector3 vParam1, float fParam4, bool bParam5, float fParam6, bool bParam7)
{
	fVar0 = func_733(get_entity_heading(iParam0));
	fParam4 = func_733(fParam4);
	if (is_entity_at_coord(iParam0, vParam1, bParam5, bParam5, 2f, false, bParam7, 0) && absf((fVar0 - fParam4)) <= fParam6)
	{
		return true;
	}
	return false;
}

float func_813(int iParam0, vector3 vParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	vVar0 = { get_entity_coords(iParam0, true, false) };
	return (vVar0.z - vParam1.z);
}

bool func_814(int iParam0, int iParam1)
{
	return _is_ped_using_scenario_hash(iParam0, iParam1);
}

int func_815(int iParam0)
{
	if (func_285() != -1)
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
	fVar1 = func_308(absf(fVar1) < 1f, func_308(fVar1 < 0f, -1f, 1f), fVar1);
	return ceil(fVar1);
}

int func_816(int iParam0, int iParam1, int iParam2)
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

int func_817(int iParam0)
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

int func_818()
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

void func_819(int iParam0, bool bParam1, int iParam2)
{
	func_887((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_888(iParam0);
}

void func_820(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), 0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), 1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_889(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_821(bool bParam0)
{
	bVar3 = false;
	if (func_890(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_891(iVar5, &iVar2, &iVar0))
			{
				if (!func_759(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_892(iVar2);
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
							if (func_750(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_516() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_516() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_893();
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

struct<2> func_822(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

void func_823(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

char* func_824(int iParam0)
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

int func_825(int iParam0, int iParam1)
{
	if (!func_894(iParam0))
	{
		return 0;
	}
	if (!func_860())
	{
		return 0;
	}
	if (!func_895(iParam0, &iVar0, &uVar1))
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

bool func_826(vector3 vParam0, float fParam3, float fParam4, bool bParam5, float fParam6)
{
	fVar0 = func_67(Global_35, vParam0, 1);
	if (fVar0 < fParam4 && bParam5)
	{
		return true;
	}
	if (fVar0 > (fParam3 + fParam6))
	{
		return true;
	}
	return false;
}

bool func_827(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (!func_68(&uParam0))
	{
		return false;
	}
	if (func_691(&uParam0) <= iParam3 + 500)
	{
		return false;
	}
	return true;
}

bool func_828(float fParam0, float fParam1, bool bParam2)
{
	func_896(&uVar0, &uVar1, &iVar2, &iVar3, 529461124, 1410914475, -1497929239, 665185216, 2);
	if (!bParam2)
	{
		if (iVar2 != 0 || iVar3 != 0)
		{
			return true;
		}
	}
	if (!func_692(fParam0, fParam1))
	{
		return true;
	}
	return false;
}

bool func_829()
{
	if (((((((((((is_control_pressed(0, -1879280170) || is_control_pressed(0, 1537201378)) || is_control_pressed(0, -1175108432)) || is_control_pressed(0, 1520437207)) || is_control_pressed(0, -1292666904)) || is_control_pressed(0, -640622144)) || is_control_pressed(0, -455946723)) || is_control_pressed(0, -1242632265)) || is_control_pressed(0, -485697785)) || is_control_pressed(0, -822242784)) || is_control_pressed(0, 782960533)) || is_control_pressed(0, -874806616))
	{
		return true;
	}
	return false;
}

Vector3 func_830(int iParam0)
{
	if (!does_cam_exist(iParam0))
	{
		vVar0 = { get_gameplay_cam_rot(2) };
	}
	else
	{
		vVar0 = { get_cam_rot(iParam0, 2) };
	}
	fVar3 = sin(vVar0.z);
	fVar4 = cos(vVar0.z);
	fVar5 = sin(vVar0.x);
	fVar6 = cos(vVar0.x);
	return func_696((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

float func_831(vector3 vParam0, vector3 vParam3)
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

void func_832(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
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
	func_682(iParam0, 1);
	func_683(iParam0, 1);
	func_684(iParam0, 128);
}

bool func_833(int iParam0)
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

void func_834(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_897(iParam0, iParam1))
		{
			if (func_898(iParam0, iParam1))
			{
				if (func_899(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_900(iParam0);
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

void func_835(int iParam0, int iParam1, bool bParam2)
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

void func_836(int iParam0, bool bParam1)
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

void func_837(int iParam0, int iParam1)
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

float func_838(int iParam0)
{
	iVar4 = func_706(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = &Global_40.f_11095.f_11[iVar4];
			iVar5 = func_841(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_901(iVar6) - func_901(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1f;
}

bool func_839(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_840(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

int func_841(float fParam0)
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

int func_842(int iParam0)
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

int func_843(int iParam0)
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

int func_844(float fParam0, float fParam1)
{
	iVar0 = func_841(fParam0);
	fVar1 = to_float(func_901(iVar0));
	fVar2 = to_float(func_901(iVar0 + 1));
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

int func_845(int iParam0)
{
	if (func_902(iParam0, &iVar0))
	{
		return func_901(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_903())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_903())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_903())
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

int func_846(int iParam0)
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

void func_847(int iParam0, int iParam1, int iParam2)
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
	iVar3 = (iVar3 + func_904(iParam0));
	sVar4 = func_906(func_905(iVar3, iParam2));
	sVar6 = func_907(iParam0);
	if (!is_string_null_or_empty(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = _create_var_string(10, sVar0, func_908(iParam0));
	iVar8 = func_909(iParam0);
	iVar9 = get_hash_key(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = iVar8;
		Var10.f_4 = 1;
		Var10.f_5 = func_910(iParam0);
		_uilog_post_notification(&Var10);
	}
	func_912(sVar7, sVar1, iVar8, iVar9, -479097442, "INPUT_FEED_INTERACT_GENERIC", func_911(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_848(int iParam0, int iParam1)
{
	Global_1347477->f_9[iParam0] = (get_game_timer() + iParam1);
}

void func_849(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

void func_850(int iParam0)
{
	if (func_285() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_184(func_913(iVar0), 0))
		{
			if (is_ped_group_member(func_913(iVar0), func_539(), 1))
			{
				func_914(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

int func_851(int iParam0)
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

void func_852(int iParam0, int iParam1, int iParam2, int iParam3)
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
					if (func_915() > Global_32074.f_2697.f_6[iVar0]->f_5)
					{
						Global_32074.f_2697.f_6[iVar0]->f_5 = func_915();
					}
					func_916(&(Global_32074.f_2697.f_6[iVar0]->f_5), 0, 0, iParam1, iParam2, 0, 0, 0);
					func_82(&(Global_1415419->f_19[iVar0]->f_11), 2);
				}
			}
			iVar0++;
		}
	}
}

void func_853(int iParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		iVar0 = func_766(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_767(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2]->f_1++;
	}
}

void func_854(int iParam0, int iParam1)
{
	if (iParam1 != -1 && !func_142(iParam0, 8192))
	{
		iVar0 = func_767(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0]->f_1++;
	}
}

void func_855(int iParam0, int iParam1)
{
	iVar0 = (func_545(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	set_bit(Global_17504.f_12[iVar1], iVar2);
}

void func_856(int iParam0, vector3 vParam1)
{
	if (func_126(iParam0, 512))
	{
		vParam1 = { Global_36 };
	}
	if (func_329(vParam1))
	{
		return;
	}
	if (!func_277(iParam0))
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Global_17504.f_2084)
	{
		vVar2 = { *Global_17504.f_2084[iVar0] };
		if (func_329(vVar2))
		{
			if (iVar1 < 0)
			{
				iVar1 = iVar0;
			}
		}
		else if (Global_17504.f_2084[iVar0]->f_3 == iParam0)
		{
			if (func_559(vVar2, vParam1, 1f, 1))
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

void func_857(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		func_872(iVar0, iParam0);
		iVar0++;
	}
}

int func_858(int iParam0)
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

void func_859(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_860()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

int func_861(int iParam0)
{
	if (!func_620(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_20;
}

bool func_862(int iParam0)
{
	return (Global_1310750->f_16074 && iParam0) != 0;
}

bool func_863()
{
	return Global_1894899 & 2 != 0;
}

bool func_864(var uParam0)
{
	return func_36(*uParam0, 1);
}

bool func_865(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_917(*uParam0, 0f, 0f, 0f))
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

struct<4> func_866()
{
	return Var0;
}

int func_867(int iParam0)
{
	if (func_277(iParam0))
	{
		return Global_17504.f_42[iParam0]->f_4;
	}
	return 0;
}

int func_868(int iParam0)
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

bool func_869(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return false;
	}
	return (Global_1393237->f_11[iParam0]->f_10 && iParam1) != 0;
}

void func_870(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return;
	}
	Global_1393237->f_11[iParam0]->f_10 = (Global_1393237->f_11[iParam0]->f_10 || iParam1);
}

bool func_871(int iParam0)
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

void func_872(int iParam0, int iParam1)
{
	if (!func_277(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_1 = ((*Global_1310750)[iParam0]->f_1 - ((*Global_1310750)[iParam0]->f_1 && iParam1));
}

int func_873(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_918(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_874(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16)
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
		if (func_633(iVar0, 2))
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
				func_832(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, bParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_875(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_182(iParam0))
	{
		return;
	}
	iVar0 = func_180(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_876(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (bParam4 && !func_182(iParam0))
	{
		return;
	}
	iVar0 = func_180(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(10, sParam1, sParam2, sParam3));
}

bool func_877(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

bool func_878(int iParam0, bool bParam1)
{
	if (func_285() != -1)
	{
		return false;
	}
	if (!func_298(iParam0))
	{
		return false;
	}
	if (!_0x800df3fc913355f3(func_526(iParam0)))
	{
		return false;
	}
	if (bParam1 && !does_entity_exist(func_719(iParam0)))
	{
		return false;
	}
	return !_0xeb98b38ca60742d7(func_526(iParam0));
}

void func_879(int iParam0)
{
	if (!func_298(iParam0))
	{
		return;
	}
	(*Global_1895087)[iParam0]->f_2 = get_id_of_this_thread();
}

bool func_880(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_881(int iParam0)
{
	if (-1829635046 == func_919(81053684))
	{
		if (func_883(iParam0))
		{
			return true;
		}
	}
	else if (func_920(-525676072, iParam0))
	{
		if (func_883(iParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_882()
{
	return Global_1946804->f_2792;
}

bool func_883(int iParam0)
{
	if (func_920(81053684, iParam0))
	{
		return true;
	}
	if (func_920(-525676072, iParam0))
	{
		return true;
	}
	return false;
}

bool func_884(int iParam0)
{
	if (func_921())
	{
		return false;
	}
	if (!func_759(iParam0, 0))
	{
		return false;
	}
	if (!func_922(iParam0, 1, 0))
	{
		_0xbfff81e12a745a5f();
		return false;
	}
	return true;
}

int func_885(int iParam0, int iParam1)
{
	bVar3 = func_923(iParam0);
	if (func_924(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_881(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_925();
			}
			else
			{
				iVar0 = func_926();
			}
		}
		else if (func_36(iParam1, 1))
		{
			iVar0 = 0;
		}
		else if (bVar1)
		{
			iVar0 = func_927();
		}
		else
		{
			iVar0 = func_928();
		}
	}
	else if (func_883(&iVar2))
	{
		if (func_924(iVar2, -1303648999))
		{
			iVar0 = func_925();
		}
		else
		{
			iVar0 = func_926();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_927();
	}
	else
	{
		iVar0 = func_928();
	}
	if (iVar0 != 0)
	{
		Global_1946804->f_2791 = get_game_timer();
		_task_item_interaction(Global_35, iParam0, iVar0, 1, iParam1, -1082130432);
		return 1;
	}
	return 0;
}

int func_886(int iParam0)
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

void func_887(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_929(bParam1);
	}
}

void func_888(int iParam0)
{
	_0x74bcceb233ad95b2(-156028329, iParam0);
}

char* func_889(int iParam0)
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

bool func_890(int iParam0)
{
	if (!func_930(23, &vVar0))
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

bool func_891(int iParam0, int iParam1, int iParam2)
{
	if (!func_930(23, &Var0))
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

int func_892(int iParam0)
{
	return iParam0;
}

int func_893()
{
	iVar0 = func_516();
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

bool func_894(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_895(int iParam0, int iParam1, var uParam2)
{
	if (!func_894(iParam0))
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

void func_896(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	*uParam0 = floor((get_control_normal(iParam8, iParam4) * 127f));
	*uParam1 = floor((get_control_normal(iParam8, iParam5) * 127f));
	*iParam2 = floor((get_control_normal(iParam8, iParam6) * 127f));
	*iParam3 = floor((get_control_normal(iParam8, iParam7) * 127f));
}

bool func_897(int iParam0, int iParam1)
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

bool func_898(int iParam0, int iParam1)
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

bool func_899(int iParam0, int iParam1)
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
	if (!func_897(iParam0, iVar0))
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

void func_900(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

int func_901(int iParam0)
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

bool func_902(int iParam0, int iParam1)
{
	return false;
}

bool func_903()
{
	return false;
}

int func_904(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return _0xe787f05dfc977bde(func_760(0), -1845241476, 0);
		case 1:
			return _0xe787f05dfc977bde(func_760(0), 1654063339, 0);
		case 2:
			return _0xe787f05dfc977bde(func_760(0), 1623931083, 0);
	}
	return 0;
}

struct<4> func_905(int iParam0, int iParam1)
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

char* func_906(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

char* func_907(int iParam0)
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

char* func_908(int iParam0)
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

int func_909(int iParam0)
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

int func_910(int iParam0)
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

int func_911(int iParam0)
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

var func_912(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

int func_913(int iParam0)
{
	if (!func_931(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

void func_914(int iParam0, int iParam1)
{
	if (!func_932(iParam0))
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

int func_915()
{
	return &Global_1899515;
}

void func_916(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_933(*uParam0);
	iVar1 = func_934(*uParam0);
	iVar2 = func_935(*uParam0);
	iVar3 = func_475(*uParam0);
	iVar4 = func_936(*uParam0);
	iVar5 = func_937(*uParam0);
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
	iVar6 = func_938(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_938(iVar1, iVar0);
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
	func_939(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_917(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_918(int iParam0)
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

int func_919(int iParam0)
{
	iVar0 = func_941(func_940(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946804->f_1497.f_1[iVar0]->f_1;
	}
	return 0;
}

bool func_920(int iParam0, int iParam1)
{
	iVar1 = func_941(func_940(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1946804->f_1497.f_1[iVar1] != 0 && &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1];
		if (func_754(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

bool func_921()
{
	if (Global_1946804->f_2793)
	{
		return true;
	}
	if (absi((get_game_timer() - Global_1946804->f_2791)) < 1250)
	{
		return true;
	}
	if (func_942())
	{
		return true;
	}
	if (_0xec7e480ff8bd0bed(Global_35))
	{
		return true;
	}
	return false;
}

bool func_922(int iParam0, int iParam1, bool bParam2)
{
	if (!func_759(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_750(iParam0);
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
		if (!func_943(iParam0, 1))
		{
			return false;
		}
	}
	return func_944(iParam0, 0, bParam2) >= iParam1;
}

int func_923(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_883(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_924(int iParam0, int iParam1)
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

int func_925()
{
	iVar0 = 1549701178;
	switch (func_945())
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

int func_926()
{
	iVar0 = 614608656;
	switch (func_945())
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

int func_927()
{
	iVar0 = -1832677570;
	switch (func_945())
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

int func_928()
{
	iVar0 = 1623252156;
	switch (func_945())
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

void func_929(bool bParam0)
{
	func_946(bParam0);
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

bool func_930(int iParam0, var uParam1)
{
	if (!func_947(iParam0))
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

bool func_931(int iParam0)
{
	return iParam0 > -1;
}

bool func_932(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

int func_933(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_448(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_934(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_935(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_936(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_937(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_938(int iParam0, int iParam1)
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

void func_939(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_948(uParam0, iParam6);
	func_949(uParam0, iParam5);
	func_950(uParam0, iParam4);
	func_951(uParam0, iParam3);
	func_952(uParam0, iParam2);
	func_953(uParam0, iParam1);
}

int func_940(int iParam0)
{
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_954(iVar0);
}

int func_941(int iParam0, int iParam1)
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

bool func_942()
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

bool func_943(int iParam0, int iParam1)
{
	if (!func_759(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_955(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_956("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_957(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_344(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_958(iVar1);
				return true;
			}
			iVar3++;
		}
		func_958(iVar1);
	}
	return false;
}

int func_944(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_759(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_750(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_955(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_959(iParam0, 0);
	}
	uVar2 = _0xe787f05dfc977bde(func_760(bParam2), iParam0, 0);
	return uVar2;
}

int func_945()
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
		else if ((((is_weapon_valid(iVar0) && _is_weapon_two_handed(iVar0)) && !func_960(iVar0)) && !_is_ped_getting_into_a_mount_seat(Global_35, true)) && !(is_ped_in_any_vehicle(Global_35, false) && !_0xa24c1d341c6e0d53(1, 0, 0)))
		{
			return 3;
		}
		else if (iVar0 == -160924582)
		{
			return 1;
		}
		else if ((is_weapon_valid(iVar0) && func_960(iVar0)) || iVar0 == 2055893578)
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

void func_946(bool bParam0)
{
	_0xb6fd96420c0126a1(-1056478928, bParam0);
}

bool func_947(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

void func_948(var uParam0, int iParam1)
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

void func_949(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || shift_left(iParam1, 22));
}

void func_950(var uParam0, int iParam1)
{
	iVar0 = func_934(*uParam0);
	iVar1 = func_933(*uParam0);
	if (iParam1 < 1 || iParam1 > func_938(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || shift_left(iParam1, 17));
}

void func_951(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || shift_left(iParam1, 12));
}

void func_952(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || shift_left(iParam1, 6));
}

void func_953(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || shift_left(iParam1, 0));
}

int func_954(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_961(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_955(int iParam0, int iParam1)
{
	if (!func_759(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_750(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_924(iParam0, 1399091007))
	{
		func_962(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_956(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_760(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_957(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_958(int iParam0)
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

int func_959(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_963(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_964(&Var0, func_751(0));
	}
	if (!func_965(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_958(iVar14);
	return uVar15;
}

bool func_960(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

int func_961(int iParam0, int iParam1)
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

void func_962(int iParam0, var uParam1, var uParam2)
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

struct<14> func_963(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_964(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_965(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_760(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

