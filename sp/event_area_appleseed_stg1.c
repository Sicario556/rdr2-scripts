void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	fLocal_749 = 15f;
	Local_2160.f_136 = 0;
	Local_2160.f_137 = uVar2650;
	Local_2160.f_138 = 807;
	if (func_1() != 0)
	{
	}
	else
	{
		func_2();
		func_3(Local_2160.f_136);
		return;
	}
	iLocal_98 = func_4(Local_2160.f_136);
	if (func_5(Local_2160.f_136, 536870912))
	{
		func_8(&(Global_40.f_9096[Local_2160.f_136]->f_6), func_7(func_6()));
	}
	if (!func_9(Local_2160.f_136, 2097152))
	{
		func_10(Local_2160.f_136, 2097152);
	}
	func_11();
	func_13(128, func_12(Local_2160.f_136));
	if (func_9(Local_2160.f_136, 33554432))
	{
		func_14(128);
		func_15(Local_2160.f_136, 33554432);
	}
	func_14(1);
	func_13(262144, func_5(Local_2160.f_136, 128));
	func_13(131072, func_5(Local_2160.f_136, 4));
	func_13(2097152, func_9(Local_2160.f_136, 1024));
	func_13(-2147483648, func_9(Local_2160.f_136, 16384));
	func_13(1048576, func_16(Local_2160.f_136));
	func_13(16, func_17(Local_2160.f_136));
	func_18(0, &Local_2160, 0);
	_0x012701ed938b85de(1f, 5f);
	if (func_5(Local_2160.f_136, 128) || (iLocal_98 == 2 && (func_19(-2147483648) || !func_9(1, 2))))
	{
		func_14(262144);
	}
	func_21(&Local_2160, 32, func_20());
	if (func_22(&Local_2160, 32))
	{
		if (!func_23(Local_2160.f_138, 32))
		{
			func_24(Local_2160.f_138, 32);
		}
		if (!func_19(1048576))
		{
			iVar0 = 16;
			func_25((*Global_1392194)[Local_2160.f_136]->f_6, iVar0);
		}
	}
	else
	{
		func_26((*Global_1392194)[Local_2160.f_136]->f_6);
	}
	func_27(Local_2160.f_136, Local_2160.f_137, &Local_1157, &Local_2160, 1, 1);
	func_13(64, func_28());
	func_13(16384, func_29());
	func_13(32768, func_30());
	func_13(65536, func_31());
	func_13(256, func_32());
	func_33();
	Local_1157.f_13 = 925190986;
	func_34();
	if (!func_22(&Local_2160, 32))
	{
		iLocal_75[0] = _create_volume_box_with_custom_name(-1400.323f, -207.0721f, 103.6361f, 0f, 0f, 18.49513f, 5.458226f, 7.343121f, 3.461949f, "Appleseed - volOffice");
		_0x18262cafebb5fbe1(&(iLocal_75[0]), 0, 0, 0, -1, -1, 0);
		_0xb56d41a694e42e86(&(iLocal_75[0]), 0, 0, 0, -1, -1, 2);
	}
	if (iLocal_98 != 1)
	{
	}
	else
	{
		iLocal_75[8] = _create_volume_box_with_custom_name(-1342.603f, -191.78f, 101.3216f, 0f, 0f, 26.31277f, 4.493421f, 15.76546f, 2.950686f, "Appleseed - volFlatbed");
		_0x18262cafebb5fbe1(&(iLocal_75[8]), 0, 0, 0, -1, -1, 0);
		_0xb56d41a694e42e86(&(iLocal_75[8]), 0, 0, 0, -1, -1, 2);
	}
	func_3(Local_2160.f_136);
	uScriptParam_0 = uVar2650;
	Local_1157.f_4 = { -1399.503f, -223.7296f, 99.81865f };
	Local_1157.f_7 = { -1474.662f, -341.2676f, 80f };
	Local_1157.f_10 = { -1326.326f, -116.0771f, 150f };
	if (func_19(16))
	{
		Local_972.f_3 = 1;
	}
	if (func_22(&Local_2160, 32))
	{
		_0x74c2b3dc0b294102((*Global_1392194)[Local_2160.f_136]->f_5);
		_0xa1cfb35069d23c23((*Global_1392194)[Local_2160.f_136]->f_5);
		func_35(512);
	}
	else if (iLocal_98 != 3)
	{
	}
	else
	{
		iLocal_75[18] = _create_volume_aggregate_with_custom_name("EA LCMP - volOnMission");
		_0xbce668aaf83608be(&(iLocal_75[18]), -1414.369f, -264.0309f, 134.2139f, 0f, 0f, 18.97237f, 103.6197f, 144.6739f, 41.18933f);
		_0xbce668aaf83608be(&(iLocal_75[18]), -1470.38f, -391.851f, 142.0586f, 0f, 0f, -62.46322f, 62.55141f, 51.09426f, 31.34803f);
	}
	func_36();
	func_37();
	if (iLocal_98 > 3)
	{
		func_35(512);
	}
	if (iLocal_98 == 3 && !func_19(262144))
	{
		func_35(512);
	}
	func_13(8192, func_38());
	func_39(&Local_2160);
	func_40(&Local_2160, 1);
	if (func_19(1048576) || func_22(&Local_2160, 32))
	{
		func_41(&Local_2160, 1);
	}
	if (func_19(262144) && !func_5(Local_2160.f_136, 16777216))
	{
		func_42(Local_2160.f_136, 16777216);
	}
	func_43(&Local_2160, 128);
	if (has_force_cleanup_occurred(523))
	{
		iLocal_2651 = 1;
	}
	while (true)
	{
		func_45(bVar2649, 9342, 0);
		func_46();
		if (!bVar2649)
		{
			switch (iVar2646)
			{
				case 0:
					if (!func_5(Local_2160.f_136, 524288) && Local_1157.f_3 < (15 + ((2 + (iVar1155 + Local_1157.f_1)) + iLocal_14)))
					{
						func_47((15 + ((2 + (iVar1155 + Local_1157.f_1)) + iLocal_14)), &Local_1157);
						func_48(vLocal_1117[4]);
					}
					else if (func_49())
					{
						iLocal_2648 = 1;
					}
					break;
				case 1:
					func_50(16);
					if (!func_51(1) && func_52())
					{
						bVar1 = func_51(16);
						func_54(1, func_53(&Local_1157, &Local_2160, &uLocal_2479, &iLocal_2502, &bVar1, &iLocal_733));
						func_54(16, bVar1);
						if (func_51(1))
						{
							iLocal_733 = 0;
						}
					}
					if (!func_51(131072))
					{
						if (func_19(256))
						{
							if (func_55())
							{
								func_57(func_56(), 10f, 1);
								if (!_does_volume_exist(&(iLocal_75[21])))
								{
									iLocal_75[21] = _create_volume_box_with_custom_name(-1336.432f, -204.9798f, 102.1644f, 0f, 0f, 25.28583f, 5.635887f, 71.55907f, 4.877145f, "EA LCMP - volTrain");
									_0x18262cafebb5fbe1(&(iLocal_75[21]), 10208, 0, 0, -1, -1, 0);
								}
								if (!does_entity_exist(&(iLocal_2502[1])))
								{
									iLocal_2502[1] = _create_mission_train(-1901305252, func_56(), false, false, true, false);
								}
								if (does_entity_exist(&(iLocal_2502[1])) && is_vehicle_driveable(&(iLocal_2502[1]), false, false))
								{
									set_train_speed(&(iLocal_2502[1]), 0f);
									set_train_cruise_speed(&(iLocal_2502[1]), 0f);
									_0x3660bcab3a6bb734(&(iLocal_2502[1]));
									set_vehicle_is_considered_by_player(&(iLocal_2502[1]), false);
									_0xa72b1bf3857b94d7(&(iLocal_2502[1]), 1);
									func_58(131072);
								}
							}
						}
						else
						{
							func_58(131072);
						}
					}
					if (!func_51(2) && func_52())
					{
						if (!func_22(&Local_2160, 32))
						{
							bVar2 = func_51(16);
							func_54(2, func_60(&bVar2, &iLocal_733, 0, func_59((iLocal_98 == 3 && !func_19(262144)), 0, -1)));
							func_54(16, bVar2);
							if (func_51(2))
							{
								iLocal_733 = 0;
							}
						}
						else
						{
							func_58(2);
						}
					}
					if (!func_51(4) && !func_51(16))
					{
						if (!func_22(&Local_2160, 32))
						{
							func_61(Local_2160.f_138, 0, 0, 0, 0, 0);
							func_58(16);
							func_54(4, func_62(Local_2160.f_138, 1, 1));
							if (!is_entity_dead(func_63(Local_2160.f_138)))
							{
								set_ped_config_flag(func_63(Local_2160.f_138), 146, true);
							}
						}
						else
						{
							func_58(4);
						}
					}
					if (!func_51(8))
					{
						if (!func_22(&Local_2160, 32) && !func_22(&Local_2160, 2))
						{
							if (func_64(&Local_1157))
							{
								if (!func_22(&Local_2160, 32) && func_19(64))
								{
									func_65(&(Local_2160.f_35), &(uLocal_2479[0]), "LOGGING_VICTIM", 0);
									iVar3 = 0 + 810;
									iVar4 = func_63(iVar3);
									func_65(&(Local_2160.f_35), iVar4, "LOGGING_WORKER", 0);
								}
								func_58(8);
							}
						}
						else
						{
							func_58(8);
						}
					}
					if (!func_51(524288) && func_66())
					{
						if (func_19(65536) && !is_entity_dead(&(uLocal_2479[5])))
						{
							func_67(uLocal_72[1], uLocal_2479[5], Local_15[1], 1112014848, 0, 0, 0);
						}
						if (func_19(32768) && !is_entity_dead(&(uLocal_2479[4])))
						{
							func_67(uLocal_72[0], uLocal_2479[4], Local_15[0], 1112014848, 0, iVar741, 0);
							if (!func_68(128) && does_entity_exist(&(uLocal_72[0])))
							{
								set_vehicle_extra(&(uLocal_72[0]), 1, true);
								set_vehicle_extra(&(uLocal_72[0]), 2, true);
								func_69(128);
							}
						}
						func_58(524288);
					}
					func_70(Local_2160.f_136, 1);
					if (((((((((!is_screen_faded_out() && func_51(1)) && func_51(2)) && func_51(4)) && func_51(8)) && func_51(131072)) && func_51(524288)) && func_71()) && func_72()) || func_22(&Local_2160, 32))
					{
						if (!func_22(&Local_2160, 32) && (func_19(128) || !func_73()))
						{
							func_65(&(Local_2160.f_35), Global_35, "ARTHUR", 0);
							func_65(&(Local_2160.f_35), func_63(Local_2160.f_138), "EA_LCMP_Foreman", 0);
							func_74();
						}
						else
						{
							func_65(&(Local_2160.f_35), Global_35, "ARTHUR", 0);
							func_65(&(Local_2160.f_35), func_63(Local_2160.f_138), "EA_LCMP_Foreman", 0);
							func_75(Local_2160.f_138, 1);
							func_76(Local_750[0], 0);
						}
						func_77();
						iLocal_2648 = 2;
					}
					break;
				case 2:
					if (func_22(&Local_2160, 128) && func_78(Local_2160.f_136, func_19(128)))
					{
						func_79(0);
						func_80(&Local_2160, 128);
					}
					func_81();
					if (!func_19(16777216))
					{
						func_13(16777216, func_82(&Local_2160, &Local_1157));
					}
					if (!func_22(&Local_2160, 32))
					{
						if (func_18(iVar743, &Local_2160, 5))
						{
							func_83();
							func_84();
						}
						if (!func_22(&Local_2160, 2))
						{
							func_85(&uLocal_2320, &uLocal_2382, &Local_2160, 808, 833, &uLocal_732, &uLocal_745, 10, -1082130432, 1);
							func_86(&uLocal_2320);
							func_86(&uLocal_2479);
							func_86(&iLocal_2505);
							func_87();
							func_88();
							if ((!func_22(&Local_2160, 32) && !func_19(32)) && func_19(128))
							{
								func_91(&Local_2160, 0, func_89(), func_90());
								func_92();
							}
							if (func_93())
							{
								if (func_68(8192))
								{
									set_anim_rate(Local_1157.f_690[12]->f_8, 0f, 0, false);
									set_anim_rate(Local_1157.f_690[13]->f_8, 0f, 0, false);
								}
								func_94(&Local_972, &Local_2160, 0);
								func_95(&Local_2160);
								func_15(Local_2160.f_136, 16384);
								func_96(&iLocal_2413);
								func_97();
								if (func_98(iLocal_154) && func_99(iLocal_154))
								{
									func_100(iLocal_154, 0, 2);
								}
								func_101(1);
								_0x710448d44a64c213(1);
								iVar5 = add_shocking_event_for_entity(-1905235087, Global_35, 1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
								iVar6 = 0;
								while (iVar6 < 2)
								{
									if (does_rope_exist(&(iLocal_1036[iVar6])))
									{
										delete_rope(iLocal_1036[iVar6]);
									}
									iVar6++;
								}
								display_radar(true);
								display_hud(true);
								if (func_102(1))
								{
									func_43(&Local_2160, 4096);
									func_43(&Local_2160, 16384);
								}
								else
								{
									func_10(Local_2160.f_136, 1024);
								}
								func_103();
								func_104();
								func_105();
								func_106(1);
								iVar7 = 0;
								while (iVar7 < 3)
								{
									func_107(Local_814[iVar7], 1, 1, 1, 0);
									iVar7++;
								}
								func_108(0);
								func_109(&(iLocal_75[1]));
								func_110();
								if (!is_entity_dead(&(iLocal_2505[0])))
								{
									freeze_entity_position(&(iLocal_2505[0]), false);
								}
								if (does_entity_exist(Local_1157.f_690[23]->f_8))
								{
									detach_entity(Local_1157.f_690[23]->f_8, false, true);
								}
								func_111(&uLocal_2489);
								func_111(&uLocal_2516);
								func_111(&uLocal_2499);
								func_112(Local_2160.f_136, 3);
								func_113(&Local_2160);
								iLocal_2650 = 4;
								iVar8 = func_59(!is_entity_dead(func_63(Local_2160.f_138)), 1, 0);
								if (!func_22(&Local_2160, 4096))
								{
									func_114(func_63(Local_2160.f_138), Global_35, "LOG_AGGRO", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								}
								if (func_51(32768))
								{
									iVar9 = 1135209633;
								}
								else if (func_115(268435456))
								{
									iVar9 = -1103472584;
								}
								else
								{
									iVar9 = func_116(&Local_2160, Local_2160.f_28);
								}
								func_43(&Local_2160, 2);
								func_117();
								if (!func_19(1024))
								{
									func_119(&Local_2160, func_63(Local_2160.f_138), uLocal_2499[0], 0, func_118(268435456, 1056964608, 1065353216), 0);
								}
								if (!(func_19(32) && func_19(1024)))
								{
									iLocal_2650 = func_59(iVar2648 > iVar8, (iVar2648 - iVar8), 0);
									iVar8 = func_120(&Local_2160, &uLocal_2479, &uLocal_2489, func_118(268435456, 1056964608, 1065353216), iVar5, iVar2648, 0, 0, 0, iVar9, 1051260355);
									iLocal_2650 = func_59(iVar2648 > iVar8, (iVar2648 - iVar8), 0);
								}
								iLocal_2650 = func_59(iVar2648 > iVar8, (iVar2648 - iVar8), 0);
								func_47(iVar730, &Local_1157);
								iVar8 = func_121(&Local_2160, &uLocal_2320, &uLocal_2351, iVar2648, func_118(268435456, 1056964608, 1065353216), iVar730, iVar5, 0, 0, 0, iVar9, 1051260355);
								iLocal_2650 = func_59(iVar2648 > iVar8, (iVar2648 - iVar8), 0);
								func_33();
								func_43(&Local_2160, 128);
							}
						}
						else
						{
							func_122(&uLocal_2320, &Local_2160);
							func_123();
							if (func_19(1024))
							{
								if (func_124(&Local_2160, func_63(Local_2160.f_138), uLocal_2499[0], 0))
								{
									if (func_19(32))
									{
										if (func_125())
										{
											iVar11 = 0;
											iVar10 = add_shocking_event_for_entity(-1905235087, Global_35, 1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
											iLocal_2650 = func_59(iVar2648 > iVar11, (iVar2648 - iVar11), 0);
											iVar11 = (func_120(&Local_2160, &uLocal_2479, &uLocal_2489, func_118(268435456, 1056964608, 1065353216), iVar10, iVar2648, 0, 0, 0, func_116(&Local_2160, Local_2160.f_28), 1051260355) + iVar11);
											iLocal_2650 = func_59(iVar2648 > iVar11, (iVar2648 - iVar11), 0);
											func_126(1024);
										}
									}
									else
									{
										func_126(1024);
									}
								}
							}
							if (func_19(32))
							{
								if (func_127())
								{
									if (!func_19(1024))
									{
										func_126(32);
									}
								}
							}
							if (func_19(64))
							{
								if (func_68(131072))
								{
									if (!is_entity_dead(&(uLocal_2479[0])))
									{
										if ((_get_lassoed_entity(Global_35) == &uLocal_2479[0] || _is_ped_lassoed(&(uLocal_2479[0]))) || !get_is_task_active(&(uLocal_2479[0]), 3))
										{
											func_128(&(uLocal_2479[0]), 0, 0);
										}
									}
								}
								else if (!func_129(&(uLocal_2479[0]), 518218985) && !get_is_task_active(&(uLocal_2479[0]), 3))
								{
									freeze_entity_position(&(uLocal_2479[0]), false);
									_0x89f5e7adecccb49c(&(uLocal_2479[0]), "INJURED_LEFT_LEG");
									_task_smart_flee_style_ped(&(uLocal_2479[0]), Global_35, 3, 0, -1082130432, -1, 0);
								}
							}
							if (!func_22(&Local_2160, 4) && func_130(&Local_2160, &uLocal_2479, &iLocal_2505, &(Local_2160.f_139), 5, func_63(Local_2160.f_138)))
							{
								func_43(&Local_2160, 4);
							}
						}
						if (!func_22(&Local_2160, 2))
						{
							if (func_19(65536) && !is_entity_dead(&(uLocal_2479[5])))
							{
								func_67(uLocal_72[1], uLocal_2479[5], Local_15[1], 1112014848, func_19(4096), 0, 0);
								if (!func_68(128) && does_entity_exist(&(uLocal_72[1])))
								{
									_0xd80faf919a2e56ea(&(uLocal_72[1]), 1242644044);
									func_69(128);
								}
							}
							if (func_19(32768) && !is_entity_dead(&(uLocal_2479[4])))
							{
								func_67(uLocal_72[0], uLocal_2479[4], Local_15[0], 1112014848, func_19(4096), iVar741, 0);
								if (!func_68(128) && does_entity_exist(&(uLocal_72[0])))
								{
									func_69(128);
								}
							}
						}
					}
					if (!func_22(&Local_2160, 2))
					{
						if (!func_22(&Local_2160, 32))
						{
							func_131(&Local_972);
							if (func_132(&Local_972, 1))
							{
								func_133(&Local_2160, &Local_972, Local_750[2], Local_814[2]);
							}
							else
							{
								func_134(&Local_972, 4);
							}
						}
						if (func_135())
						{
							iLocal_2651 = 1;
						}
					}
					else if (!func_22(&Local_2160, 32))
					{
						func_136();
					}
					break;
			}
		}
		if (func_137())
		{
			iLocal_2651 = 1;
		}
		wait(Local_2160.f_30);
	}
}

int func_1()
{
	return Global_1572887->f_12;
}

void func_2()
{
	_set_scenario_group_enabled_hash(529482239, false);
	_set_scenario_group_enabled_hash(515502019, false);
	_set_scenario_group_enabled_hash(223107846, false);
	_set_scenario_group_enabled_hash(-1428772759, false);
	_set_scenario_group_enabled_hash(-1173617900, false);
	_set_scenario_group_enabled_hash(1480157862, false);
	_set_scenario_group_enabled_hash(-2061234582, false);
	_set_scenario_group_enabled_hash(1033154098, false);
	_set_scenario_group_enabled_hash(-1619191432, false);
	_set_scenario_group_enabled_hash(1254150069, false);
	_set_scenario_group_enabled_hash(-1668640329, false);
	_set_scenario_group_enabled_hash(-92203186, false);
	_set_scenario_group_enabled_hash(378017637, false);
	_set_scenario_group_enabled_hash(874422897, false);
	_set_scenario_group_enabled_hash(-508527824, false);
	_set_scenario_group_enabled_hash(2077381882, false);
	_set_scenario_group_enabled_hash(-681889807, false);
	_set_scenario_group_enabled_hash(-595414142, false);
	_set_scenario_group_enabled_hash(1991616213, false);
	_set_scenario_group_enabled_hash(1368197280, false);
	_set_scenario_group_enabled_hash(-1712141152, false);
	_set_scenario_group_enabled_hash(1887892244, false);
	_set_scenario_group_enabled_hash(638507460, false);
	_set_scenario_group_enabled_hash(1610796463, false);
	_set_scenario_group_enabled_hash(-614511582, false);
	_set_scenario_group_enabled_hash(-1254654001, false);
	_set_scenario_group_enabled_hash(-419045977, false);
	_set_scenario_group_enabled_hash(2146274232, false);
	_set_scenario_group_enabled_hash(-1850986699, false);
	_set_scenario_group_enabled_hash(-465906603, false);
	_set_scenario_group_enabled_hash(1498945676, false);
}

void func_3(int iParam0)
{
	if (!func_138(iParam0))
	{
		return;
	}
	iVar0 = func_139(iParam0);
	if (!func_140(iVar0, 8))
	{
		func_141(iVar0, 8);
	}
	_0x4161648394262fdf(func_142(iParam0, func_4(iParam0)), 100f);
	func_143(&((*Global_1392194)[iParam0]->f_1), 1);
}

int func_4(int iParam0)
{
	if (!func_138(iParam0))
	{
		return -1;
	}
	return &(Global_40.f_9096[iParam0]);
}

bool func_5(int iParam0, int iParam1)
{
	if (!func_138(iParam0))
	{
		return false;
	}
	return (Global_40.f_9096[iParam0]->f_4 && iParam1) != 0;
}

int func_6()
{
	switch (iLocal_98)
	{
		case 1:
			return 0;
		case 2:
			return 3;
		case 3:
			return 0;
		default:
			break;
	}
	return 0;
}

int func_7(int iParam0)
{
	return shift_left(1, iParam0);
}

void func_8(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

bool func_9(int iParam0, int iParam1)
{
	if (!func_138(iParam0))
	{
		return false;
	}
	return (Global_40.f_9096[iParam0]->f_5 && iParam1) != 0;
}

void func_10(int iParam0, int iParam1)
{
	if (!func_138(iParam0))
	{
		return;
	}
	if (func_9(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_9096[iParam0]->f_5 = (Global_40.f_9096[iParam0]->f_5 || iParam1);
}

void func_11()
{
	iLocal_99 = 0;
}

bool func_12(var uParam0)
{
	if (func_144(30336, 1, 1) && !func_145())
	{
		iVar0 = 0;
	}
	else
	{
		iVar0 = 1;
	}
	if (func_146(Global_35, 0))
	{
		iVar0 = 0;
	}
	if (func_147() && func_148() == 27)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_13(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_14(iParam0);
	}
	else
	{
		func_126(iParam0);
	}
}

void func_14(int iParam0)
{
	iLocal_99 = (iLocal_99 || iParam0);
}

void func_15(int iParam0, int iParam1)
{
	if (!func_138(iParam0))
	{
		return;
	}
	if (!func_9(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_9096[iParam0]->f_5 = (Global_40.f_9096[iParam0]->f_5 - (Global_40.f_9096[iParam0]->f_5 && iParam1));
}

bool func_16(int iParam0)
{
	if (Global_40.f_9096[iParam0]->f_10 < 0)
	{
		return false;
	}
	if (func_5(iParam0, 4194304))
	{
		return false;
	}
	func_149(iParam0, &iVar0, &iVar1, &uVar2, &uVar3);
	if (iVar0 < 2 || iVar1 < 23)
	{
		return false;
	}
	return true;
}

bool func_17(int iParam0)
{
	if (Global_40.f_9096[iParam0]->f_9 == -1)
	{
		return false;
	}
	if (Global_40.f_9096[iParam0]->f_10 < 0)
	{
		return false;
	}
	if (func_5(iParam0, 524288))
	{
		return false;
	}
	if (!func_9(iParam0, 16777216))
	{
		func_112(iParam0, 2);
		return true;
	}
	iVar0 = (&Global_40.f_9096[iParam0] - Global_40.f_9096[iParam0]->f_9);
	if (iVar0 >= 2)
	{
		if (func_9(iParam0, 32768))
		{
			func_15(iParam0, 32768);
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_150(iParam0))
	{
		if (func_9(iParam0, 32768))
		{
			func_15(iParam0, 32768);
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_9(iParam0, 32768))
	{
		func_15(iParam0, 32768);
	}
	return true;
}

bool func_18(int iParam0, int iParam1, int iParam2)
{
	if ((iParam0 % iParam2) == 0)
	{
		iVar7 = _get_prev_weather_type_hash_name();
		iVar8 = _get_next_weather_type_hash_name();
		_get_weather_type_transition(&uVar0, &uVar1, &fVar2);
		bVar4 = (func_151(iVar7) || func_152(iVar7));
		bVar5 = (func_151(iVar8) || func_152(iVar8));
		if (bVar4 && bVar5)
		{
			if (!func_22(iParam1, 256))
			{
				bVar6 = true;
			}
			func_43(iParam1, 256);
		}
		else if (bVar4)
		{
			if (func_153(iVar7) || func_154(iVar7))
			{
				fVar3 = 0.9f;
			}
			else
			{
				fVar3 = 0.5f;
			}
			if (fVar2 >= (1f - fVar3))
			{
				if (func_22(iParam1, 256))
				{
					bVar6 = true;
				}
				func_80(iParam1, 256);
			}
		}
		else if (bVar5)
		{
			if (func_153(iVar8) || func_154(iVar8))
			{
				fVar3 = 0.9f;
			}
			else
			{
				fVar3 = 0.5f;
			}
			if (fVar2 >= fVar3)
			{
				if (!func_22(iParam1, 256))
				{
					bVar6 = true;
				}
				func_43(iParam1, 256);
			}
		}
		else
		{
			if (func_22(iParam1, 256))
			{
				bVar6 = true;
			}
			func_80(iParam1, 256);
		}
		if (bVar6)
		{
		}
		return bVar6;
	}
	return false;
}

bool func_19(int iParam0)
{
	return (iLocal_99 && iParam0) != 0;
}

bool func_20()
{
	if (((func_5(Local_2160.f_136, 524288) || func_5(Local_2160.f_136, 2097152)) || func_5(Local_2160.f_136, 1048576)) || iLocal_98 > 3)
	{
		return true;
	}
	return false;
}

void func_21(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_43(iParam0, iParam1);
	}
	else
	{
		func_80(iParam0, iParam1);
	}
}

bool func_22(int iParam0, int iParam1)
{
	return (iParam0->f_29 && iParam1) != 0;
}

bool func_23(int iParam0, int iParam1)
{
	if (func_1() != -1)
	{
		return false;
	}
	if (!func_155(iParam0))
	{
		return false;
	}
	return (Global_24887[iParam0] && iParam1) != 0;
}

void func_24(int iParam0, int iParam1)
{
	if (func_1() != -1)
	{
		return;
	}
	if (!func_155(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (Global_24887[iParam0] || iParam1);
}

int func_25(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (_does_volume_exist(Global_1935475[iVar0]) && Global_1935475[iVar0] == iParam0)
		{
			(*Global_1935475)[iVar0]->f_1 = iParam1;
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!_does_volume_exist(Global_1935475[iVar0]))
		{
			(*Global_1935475)[iVar0] = iParam0;
			(*Global_1935475)[iVar0]->f_1 = iParam1;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_26(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (_does_volume_exist(Global_1935475[iVar0]) && Global_1935475[iVar0] == iParam0)
		{
			(*Global_1935475)[iVar0] = 0;
			(*Global_1935475)[iVar0]->f_1 = 0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_27(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	iParam3->f_136 = uParam0;
	iParam3->f_137 = iParam1;
	func_43(iParam3, 128);
	func_156(iParam1, 1);
	if (bParam5)
	{
		func_157((*Global_1392194)[iParam3->f_136]->f_5, 0, 0, 0);
	}
	if (bParam4)
	{
		func_158((*Global_1392194)[iParam3->f_136]->f_6, 0);
		func_159((*Global_1392194)[iParam3->f_136]->f_6, 0, 0, 1, 1, 0);
	}
	bVar0 = false;
	if (iParam1 == 76)
	{
		func_160(&iVar1, &iVar2, func_9(1, 1048576));
	}
	else
	{
		func_161(iParam1, &iVar1, &iVar2, 0, 0);
	}
	iVar3 = iVar1;
	while (iVar3 <= iVar2)
	{
		if (func_155(iVar3) && !func_23(iVar3, 32))
		{
			if (!bVar0)
			{
				bVar0 = true;
			}
			func_162(iVar3);
		}
		iVar3++;
	}
	if (bVar0)
	{
		func_163(iParam1, iVar1, iVar2, 1);
	}
	if (!func_22(iParam3, 32))
	{
		_0xb173599d61faeb31();
	}
}

bool func_28()
{
	if (!func_164(64))
	{
		return false;
	}
	if (func_19(1048576))
	{
		return false;
	}
	if (!func_9(Local_2160.f_136, 512))
	{
		if (iLocal_98 == 2 && !func_5(Local_2160.f_136, 64))
		{
			if (func_5(Local_2160.f_136, 128))
			{
				return true;
			}
			else
			{
				fVar0 = get_random_float_in_range(0f, 1f);
				if (fVar0 < 1f)
				{
					return true;
				}
			}
		}
		if (iLocal_98 == 1 && func_5(Local_2160.f_136, 128))
		{
			return true;
		}
	}
	return false;
}

bool func_29()
{
	if (iLocal_98 == 1 && !func_9(Local_2160.f_136, 1024))
	{
		return true;
	}
	return false;
}

bool func_30()
{
	if (func_164(16))
	{
		return false;
	}
	if (iLocal_98 == 3 && !func_19(262144))
	{
		return false;
	}
	if (iLocal_98 > 3)
	{
		return false;
	}
	if (iLocal_98 == 1)
	{
		return true;
	}
	fVar0 = get_random_float_in_range(0f, 1f);
	return fVar0 < 0.4f;
}

bool func_31()
{
	if (func_164(16))
	{
		return false;
	}
	else if (iLocal_98 == 3 && !func_19(262144))
	{
		return false;
	}
	else if (iLocal_98 > 3)
	{
		return false;
	}
	else if (iLocal_98 == 2 && !func_19(131072))
	{
		return true;
	}
	else if (iLocal_98 >= 2)
	{
		fVar0 = get_random_float_in_range(0f, 1f);
		return fVar0 < 0.33f;
	}
	return false;
}

bool func_32()
{
	if (func_19(64))
	{
		return false;
	}
	else if (func_164(64) && (iLocal_98 == 2 || (iLocal_98 == 3 && func_19(262144))))
	{
		iVar0 = func_165(func_56(), 0);
		if (func_166(iVar0) && get_distance_between_coords(_0x1e8a921112891651((*Global_1425371)[iVar0]->f_1), func_56(), true) < 350f)
		{
			return false;
		}
		fVar1 = get_random_float_in_range(0f, 1f);
		bVar2 = fVar1 < 1f;
		if (bVar2)
		{
			return true;
		}
	}
	return false;
}

void func_33()
{
	func_2();
	if (iLocal_98 < 4 && !func_19(256))
	{
		_set_scenario_group_enabled_hash(1498945676, true);
	}
	switch (iLocal_98)
	{
		case 1:
			if (!func_22(&Local_2160, 32))
			{
				if (!func_22(&Local_2160, 2))
				{
					iLocal_742 = 1480157862;
					iLocal_743 = -1619191432;
					_set_scenario_group_enabled_hash(-1173617900, true);
					_set_scenario_group_enabled_hash(1480157862, true);
					_set_scenario_group_enabled_hash(638507460, true);
					_set_scenario_group_enabled_hash(529482239, true);
					_set_scenario_group_enabled_hash(-2061234582, true);
					_set_scenario_group_enabled_hash(-1619191432, true);
					if (func_19(262144))
					{
						_set_scenario_group_enabled_hash(-1428772759, true);
					}
				}
			}
			_set_scenario_group_enabled_hash(1033154098, true);
			_set_scenario_group_enabled_hash(2146274232, true);
			break;
		case 2:
			if (!func_22(&Local_2160, 32))
			{
				if (!func_22(&Local_2160, 2))
				{
					iLocal_742 = 1254150069;
					iLocal_743 = 378017637;
					_set_scenario_group_enabled_hash(-1173617900, true);
					_set_scenario_group_enabled_hash(1254150069, true);
					_set_scenario_group_enabled_hash(1991616213, true);
					_set_scenario_group_enabled_hash(1368197280, true);
					_set_scenario_group_enabled_hash(-614511582, true);
					_set_scenario_group_enabled_hash(515502019, true);
					_set_scenario_group_enabled_hash(-1668640329, true);
					_set_scenario_group_enabled_hash(378017637, true);
				}
			}
			_set_scenario_group_enabled_hash(-92203186, true);
			_set_scenario_group_enabled_hash(-1850986699, true);
			break;
		case 3:
			if (!func_22(&Local_2160, 32))
			{
				if (!func_22(&Local_2160, 2))
				{
					if (func_19(262144))
					{
						iLocal_742 = 874422897;
						iLocal_743 = 1663347996;
						_set_scenario_group_enabled_hash(-1173617900, true);
						_set_scenario_group_enabled_hash(874422897, true);
						_set_scenario_group_enabled_hash(1991616213, true);
						_set_scenario_group_enabled_hash(-419045977, true);
						_set_scenario_group_enabled_hash(515502019, true);
						_set_scenario_group_enabled_hash(-508527824, true);
					}
					else
					{
						_set_scenario_group_enabled_hash(2077381882, true);
						_set_scenario_group_enabled_hash(-681889807, true);
						iLocal_742 = 2077381882;
						iLocal_743 = 1663347996;
					}
					_set_scenario_group_enabled_hash(223107846, true);
					_set_scenario_group_enabled_hash(1368197280, true);
				}
			}
			_set_scenario_group_enabled_hash(-595414142, true);
			_set_scenario_group_enabled_hash(-465906603, true);
			break;
		case 4:
			_set_scenario_group_enabled_hash(-1712141152, true);
			break;
		case 5:
			_set_scenario_group_enabled_hash(1887892244, true);
			break;
	}
	_0x9c8f42a5d1859dc1((*Global_1392194)[Local_2160.f_136]->f_5);
}

void func_34()
{
	switch (iLocal_98)
	{
		case 1:
			iVar0 = 12;
			break;
		case 2:
			iVar0 = 16;
			break;
		case 3:
			iVar0 = 22;
			break;
		default:
			iVar0 = 0;
			break;
	}
	if (func_22(&Local_2160, 32))
	{
		iVar0 = 0;
	}
	iVar2 = 814;
	while (iVar2 <= 833)
	{
		if (_0x800df3fc913355f3(func_167(iVar2)))
		{
			if (iVar1 >= iVar0)
			{
				func_24(iVar2, 32);
				func_168(iVar2);
			}
			else
			{
				func_169(iVar2, 32);
				if (_0x800df3fc913355f3(func_167(iVar2)))
				{
					_0x4f81ead1de8fa19b(func_167(iVar2));
				}
			}
			iVar1++;
		}
		iVar2++;
	}
	iVar2 = 810;
	while (iVar2 <= 813)
	{
		if (_0x800df3fc913355f3(func_167(iVar2)))
		{
			if (iLocal_98 >= 4 || func_22(&Local_2160, 32))
			{
				func_24(iVar2, 32);
				func_168(iVar2);
			}
			else
			{
				func_169(iVar2, 32);
				if (_0x800df3fc913355f3(func_167(iVar2)))
				{
					_0x4f81ead1de8fa19b(func_167(iVar2));
				}
			}
		}
		iVar2++;
	}
	iVar2 = 808;
	while (iVar2 <= 809)
	{
		if (_0x800df3fc913355f3(func_167(iVar2)))
		{
			if (iLocal_98 >= 4 || func_22(&Local_2160, 32))
			{
				func_24(iVar2, 32);
				func_168(iVar2);
			}
			else
			{
				func_169(iVar2, 32);
				if (_0x800df3fc913355f3(func_167(iVar2)))
				{
					_0x4f81ead1de8fa19b(func_167(iVar2));
				}
			}
		}
		iVar2++;
	}
	func_84();
}

void func_35(int iParam0)
{
	iLocal_102 = (iLocal_102 || iParam0);
}

void func_36()
{
	if (func_22(&Local_2160, 32))
	{
		iLocal_75[0] = _create_volume_box(-1398.447f, -246.3103f, 99.12786f, 0f, 0f, 0f, 5.212102f, 3.640974f, 2.867354f);
		_0x18262cafebb5fbe1(&(iLocal_75[0]), 2304, 0, 0, -1, -1, 0);
	}
	else if (iLocal_98 == 2 || iLocal_98 == 3)
	{
		iLocal_75[5] = _create_volume_aggregate_with_custom_name("Appleseed - volHorseCorral");
		_0x39816f6f94f385ad(&(iLocal_75[5]), -1421.619f, -210.3775f, 102.9679f, 0f, 0f, -5.245227f, 18.54972f, 14.82578f, 5.569002f);
		_0xbce668aaf83608be(&(iLocal_75[5]), -1412.1f, -211.0359f, 103.0456f, 0f, 0f, -4.751498f, 3.586998f, 6.617523f, 2.783914f);
		_0xbce668aaf83608be(&(iLocal_75[5]), -1430.657f, -209.2033f, 103.0456f, 0f, 0f, -4.751498f, 3.586998f, 7.686718f, 2.783914f);
		iLocal_75[11] = _create_volume_box_with_custom_name(-1416.509f, -217.112f, 102.5954f, 0f, 0f, 0f, 7.971181f, 2.465843f, 4.154411f, "Appleseed - volCorralDoors");
		_0xb56d41a694e42e86(&(iLocal_75[11]), 256, 0, -1190799868, -1, -1, 2);
	}
}

int func_37()
{
	func_170(1024);
	func_171();
	if (iLocal_98 == 3 && !func_19(262144))
	{
		func_58(8388608);
		func_172();
	}
	if (func_22(&Local_2160, 32) && !(iLocal_98 == 4 && !func_19(262144)))
	{
		func_173(&Local_1157);
		return 1;
	}
	else
	{
		func_83();
	}
	switch (iLocal_98)
	{
		case 1:
			Local_1157 = 5;
			func_174(&Local_1157);
			break;
		case 2:
			Local_1157 = 5;
			func_175(&Local_1157);
			iLocal_14 += 2;
			break;
		case 3:
			func_176();
			Local_1157 = 5;
			func_177(&Local_1157, func_9(Local_2160.f_136, 2048));
			break;
		case 4:
		case 5:
			break;
	}
	if (!func_22(&Local_2160, 32))
	{
		if (iLocal_98 < 4)
		{
			func_178();
			func_179();
			func_180();
		}
		if (func_19(16384))
		{
			Local_1157.f_369[0]->f_1 = 36009259;
			Local_1157.f_369[0] = 28;
			Local_1157.f_369[0]->f_6 = { -1403.857f, -226.9338f, 100.4594f };
			Local_1157.f_369[0]->f_9 = -83.35f;
		}
	}
	return 1;
}

bool func_38()
{
	if (iVar1153 <= 0)
	{
		return false;
	}
	if (iLocal_98 == 1 && !func_5(Local_2160.f_136, 4))
	{
		return true;
	}
	if (!func_164(64))
	{
		return false;
	}
	if (iLocal_98 > 3 || (iLocal_98 == 3 && !func_5(Local_2160.f_136, 128)))
	{
		return false;
	}
	return true;
}

void func_39(int iParam0)
{
	func_181(iParam0);
	func_182(iParam0, 10f, 1);
	func_183(iParam0, 1);
	func_184(iParam0, 1);
	func_185(iParam0, 1);
	func_186(iParam0, 1);
	func_187(iParam0, 0);
	func_40(iParam0, 0);
	func_188(iParam0, 1);
	func_189(iParam0, 1);
	func_190(iParam0, 1);
	func_191(iParam0, 1);
	func_192(iParam0, 1);
	func_193(iParam0, 1);
	func_194(iParam0, 1.25f);
	func_195(iParam0, 1);
	func_196(iParam0, 1);
	func_197(iParam0, 1);
	func_198(iParam0, 1);
}

void func_40(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_199(&(iParam0->f_1), 1024);
	}
	else
	{
		func_143(&(iParam0->f_1), 1024);
	}
}

void func_41(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_199(&(iParam0->f_1), 131072);
	}
	else
	{
		func_143(&(iParam0->f_1), 131072);
	}
}

void func_42(int iParam0, int iParam1)
{
	if (!func_138(iParam0))
	{
		return;
	}
	if (func_5(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_9096[iParam0]->f_4 = (Global_40.f_9096[iParam0]->f_4 || iParam1);
}

void func_43(int iParam0, int iParam1)
{
	if (func_22(iParam0, iParam1))
	{
		return;
	}
	iParam0->f_29 = (iParam0->f_29 || iParam1);
}

void func_44()
{
	switch (iVar729)
	{
		case 0:
			func_200();
			if (func_19(128))
			{
				func_201();
			}
			if (func_51(32))
			{
				Global_1914319->f_3[11]->f_35 = { Local_398 };
			}
			if (func_22(&Local_2160, 16384))
			{
				if (!func_22(&Local_2160, 32768))
				{
					func_202(Local_2160.f_136);
				}
				else
				{
					func_10(Local_2160.f_136, 1024);
				}
			}
			if (func_5(Local_2160.f_136, 128))
			{
				iVar0 = func_63(Local_2160.f_138);
				func_203(&iVar0);
			}
			func_94(&Local_972, &Local_2160, 0);
			func_204(Local_2160.f_136, 1073741824);
			func_204(Local_2160.f_136, 536870912);
			release_script_audio_bank();
			break;
		case 1:
			if (func_98(iLocal_154) && !((func_205(iLocal_154) || func_206(iLocal_154, 1)) || func_207(iLocal_154)))
			{
				func_100(iLocal_154, 0, 2);
			}
			if ((func_9(Local_2160.f_136, 16384) && does_entity_exist(&(iLocal_2502[0]))) && (is_entity_dead(Global_35) || is_ped_in_vehicle(Global_35, &(iLocal_2502[0]), false)))
			{
				func_15(Local_2160.f_136, 16384);
			}
			if (get_ped_config_flag(Global_35, 514, true))
			{
				set_ped_config_flag(Global_35, 514, false);
			}
			func_208(1024);
			func_209();
			break;
		case 2:
			if (!is_entity_dead(Global_35))
			{
				set_ped_reset_flag(Global_35, 5, false);
				set_ped_reset_flag(Global_35, 129, false);
			}
			func_210();
			func_211(1);
			func_212(1);
			if (!is_entity_dead(&(uLocal_2479[5])) && !func_213(&(uLocal_2479[5]), (*Global_1392194)[Local_2160.f_136]->f_5, 1, 0))
			{
				uLocal_2579[0] = &uLocal_2479[5];
			}
			_0x8379e05871ad24e0();
			if (func_9(Local_2160.f_136, 256) && !func_9(Local_2160.f_136, 32))
			{
				func_214("SP_EVENT_AREA_APPLESEED_3_STOP", 0);
			}
			if (func_19(32))
			{
				func_214("SP_EVENT_AREA_APPLESEED_2_IDLE", 0);
			}
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (does_rope_exist(&(iLocal_1036[iVar1])))
				{
					delete_rope(iLocal_1036[iVar1]);
				}
				iVar1++;
			}
			break;
		case 3:
			func_105();
			func_215(Local_1157.f_690[2]->f_8, 1, 1);
			func_215(Local_1157.f_690[14]->f_8, 1, 1);
			func_215(Local_1157.f_690[23]->f_8, 1, 1);
			if (_does_volume_exist((*Global_1392194)[Local_2160.f_136]->f_5))
			{
				iVar1 = 0;
				while (iVar1 < iVar2477)
				{
					if (!is_entity_dead(&(uLocal_2479[iVar1])))
					{
						if (func_213(&(uLocal_2479[iVar1]), (*Global_1392194)[Local_2160.f_136]->f_5, 1, 0))
						{
							if (!is_entity_a_mission_entity(&(uLocal_2479[iVar1])))
							{
								set_entity_as_mission_entity(&(uLocal_2479[iVar1]), true, false);
							}
							delete_ped(uLocal_2479[iVar1]);
						}
						else
						{
							set_blocking_of_non_temporary_events(&(uLocal_2479[iVar1]), false);
							set_ped_keep_task(&(uLocal_2479[iVar1]), true);
							set_ped_as_no_longer_needed(uLocal_2479[iVar1]);
						}
					}
					iVar1++;
				}
			}
			if (_does_volume_exist(&(iLocal_75[4])))
			{
				_0x2c87c3e1c7b96ee2(&(iLocal_75[4]));
			}
			iVar1 = 0;
			while (iVar1 < 22)
			{
				func_109(&(iLocal_75[iVar1]));
				iVar1++;
			}
			iVar1 = 0;
			while (iVar1 < 11)
			{
				if (_does_anim_scene_exist(&(Local_1039[iVar1])))
				{
					func_216(Local_1039[iVar1]);
				}
				iVar1++;
			}
			break;
		case 4:
			func_97();
			func_106(1);
			func_2();
			if (_does_volume_exist((*Global_1392194)[Local_2160.f_136]->f_5))
			{
				if (!func_22(&Local_2160, 4) && !func_22(&Local_2160, 32))
				{
					if (!is_entity_dead(&(uLocal_72[0])) && is_entity_in_volume(&(uLocal_72[0]), (*Global_1392194)[Local_2160.f_136]->f_5, true, 0))
					{
						delete_vehicle(uLocal_72[0]);
					}
					if (!is_entity_dead(&(uLocal_72[1])) && is_entity_in_volume(&(uLocal_72[1]), (*Global_1392194)[Local_2160.f_136]->f_5, true, 0))
					{
						delete_vehicle(uLocal_72[1]);
					}
				}
				iVar1 = 0;
				while (iVar1 < 2)
				{
					if (!is_entity_dead(&(iLocal_2502[iVar1])))
					{
						if (iVar1 == 1)
						{
							delete_mission_train(iLocal_2502[iVar1]);
						}
						else if (is_entity_in_volume(&(iLocal_2502[iVar1]), (*Global_1392194)[Local_2160.f_136]->f_5, true, 0))
						{
							delete_vehicle(iLocal_2502[iVar1]);
						}
					}
					iVar1++;
				}
			}
			break;
		case 5:
			func_10(Local_2160.f_136, 1073741824);
			func_217(Local_2160.f_136, &Local_1157, &Local_2160);
			func_218(&Local_1157);
			_text_database_delete(func_219());
			_text_database_delete(func_220());
			break;
		default:
			terminate_this_thread();
			break;
	}
	uLocal_731 = iVar729 + 1;
}

void func_45(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!func_221(bParam2) || is_screen_faded_out())
		{
			Call_Loc(iParam1);
		}
	}
}

void func_46()
{
	func_54(65536, func_213(Global_35, (*Global_1392194)[Local_2160.f_136]->f_6, 1, 0));
}

void func_47(int iParam0, int iParam1)
{
	_0xf008e0ba1fe1d644(iParam0);
	iParam1->f_3 = (iParam1->f_3 + iParam0);
}

void func_48(var uParam0)
{
	func_222(uParam0, 0f);
}

bool func_49()
{
	if (func_223(vLocal_1117[4], 30f))
	{
	}
	if (!_0x5e420ff293ee5472())
	{
		return false;
	}
	switch (iVar2647)
	{
		case 0:
			func_224(&(Local_1157.f_15));
			func_224(&(Local_1157.f_369));
			func_225(&(Local_15[0]->f_11));
			func_225(&(Local_15[1]->f_11));
			if (func_19(128) && iLocal_98 == 3)
			{
				func_224(&(Local_1157.f_369));
			}
			func_226();
			func_227();
			func_228(&(Local_1157.f_690));
			func_229();
			func_224(&(Local_1157.f_304));
			func_230();
			_text_database_request(func_219());
			_text_database_request(func_220());
			if (iLocal_98 == 3 && !func_19(262144))
			{
				func_231();
			}
			iLocal_2649 = 1;
			break;
		case 1:
			if (!func_52())
			{
			}
			if (!func_66())
			{
			}
			if (!func_55())
			{
			}
			if (!func_232())
			{
			}
			if (!func_71())
			{
			}
			if (!func_72())
			{
			}
			if (!func_233())
			{
				func_231();
				return false;
			}
			if (!request_script_audio_bank("Appleseed_01"))
			{
				return false;
			}
			return true;
	}
	return false;
}

void func_50(int iParam0)
{
	iLocal_101 = (iLocal_101 - (iLocal_101 && iParam0));
}

bool func_51(int iParam0)
{
	return (iLocal_101 && iParam0) != 0;
}

bool func_52()
{
	if (!func_234(&(Local_1157.f_15)) || !func_234(&(Local_1157.f_369)))
	{
		return false;
	}
	if (!func_234(&(Local_1157.f_304)))
	{
		return false;
	}
	return true;
}

bool func_53(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, int iParam5)
{
	if (func_22(iParam1, 32))
	{
		return false;
	}
	if (*bParam4)
	{
		return false;
	}
	if (_0x5c16855277819bbf() >= *iParam0)
	{
		if (*iParam5 < *iParam0)
		{
			if (iParam0->f_15[*iParam5]->f_1 != 0)
			{
				(*uParam2)[*iParam5] = func_235(iParam0->f_15[*iParam5]->f_1, iParam0->f_15[*iParam5], iParam0->f_15[*iParam5]->f_6, iParam0->f_15[*iParam5]->f_9, 1, 0, 1, 0, 1);
			}
			*iParam5++;
			*bParam4 = 1;
			return false;
		}
	}
	else
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iParam0->f_2)
	{
		if (iParam0->f_304[iVar0]->f_1 != 0)
		{
			(*iParam3)[iVar0] = create_vehicle(iParam0->f_304[iVar0]->f_1, iParam0->f_304[iVar0]->f_6, iParam0->f_304[iVar0]->f_9, true, true, false, false);
			(*iParam3)[0] = iParam3[0];
		}
		iVar0++;
	}
	return true;
}

void func_54(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_58(iParam0);
	}
	else
	{
		func_50(iParam0);
	}
}

bool func_55()
{
	return true;
}

Vector3 func_56()
{
	return -1326.96f, -232.96f, 99.72f;
}

void func_57(vector3 vParam0, float fParam3, bool bParam4)
{
	iVar0 = 2442171;
	if (bParam4)
	{
		iVar0 |= 1536;
	}
	clear_area(vParam0, fParam3, iVar0);
}

void func_58(int iParam0)
{
	iLocal_101 = (iLocal_101 || iParam0);
}

int func_59(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_60(bool bParam0, int iParam1, int iParam2, int iParam3)
{
	if (*bParam0)
	{
		return false;
	}
	if (iParam3 < 0)
	{
		iParam3 = Local_1157.f_1;
	}
	if (*iParam1 < iParam2)
	{
		*iParam1 = iParam2;
	}
	if (_0x5c16855277819bbf() >= iParam3)
	{
		if (*iParam1 < iParam3)
		{
			if (Local_1157.f_369[*iParam1]->f_1 != 0)
			{
				if (iLocal_98 != 3 || func_19(262144))
				{
					iLocal_2505[*iParam1] = func_235(Local_1157.f_369[*iParam1]->f_1, Local_1157.f_369[*iParam1], Local_1157.f_369[*iParam1]->f_6, Local_1157.f_369[*iParam1]->f_9, 1, (iLocal_98 == 1 && *iParam1 == 5), 0, 0, 1);
					decor_set_bool(&(iLocal_2505[*iParam1]), "bNoticePlayer", false);
					set_blocking_of_non_temporary_events(&(iLocal_2505[*iParam1]), true);
				}
			}
			*iParam1++;
			*bParam0 = 1;
			return false;
		}
		return true;
	}
	return false;
}

int func_61(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_155(iParam0))
	{
		return 0;
	}
	if (!func_237(func_236(iParam0)))
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_167(iParam0)))
	{
		func_238(iParam0, 0);
		return 0;
	}
	vVar0 = { iParam2, iParam3, iParam4 };
	if (!func_239(iParam0, 0))
	{
		if (bParam1)
		{
			if (!func_240(iParam0))
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (!func_241(vVar0))
	{
		_0x59c7ad6fea2ac449(func_167(iParam0), vVar0);
	}
	if (bParam5)
	{
		iVar3 = _0x08fc896d2cb31fcc(func_167(iParam0), 0);
	}
	else
	{
		iVar3 = _0x0cadc3a977997472(func_167(iParam0), 0);
	}
	if (!func_241(vVar0))
	{
		_0xbb68908cd11aebdc(func_167(iParam0));
	}
	if (does_entity_exist(iVar3))
	{
		return 1;
	}
	return 0;
}

bool func_62(int iParam0, bool bParam1, bool bParam2)
{
	func_242(iParam0, 0, 0, 0, 1, 1);
	iVar0 = func_63(iParam0);
	if (!is_entity_dead(iVar0))
	{
		set_ped_config_flag(iVar0, 178, !bParam1);
		set_ped_config_flag(iVar0, 168, false);
		set_ped_config_flag(iVar0, 259, true);
		set_ped_config_flag(iVar0, 297, bParam2);
		_0x6759bee6762e140b(func_167(iParam0));
		if (!bParam1)
		{
			func_243(iVar0, 1, 1);
		}
	}
	else
	{
		return false;
	}
	return true;
}

int func_63(int iParam0)
{
	if (!func_155(iParam0))
	{
		return 0;
	}
	if (!func_23(iParam0, 2))
	{
		return 0;
	}
	if (func_237(func_236(iParam0)))
	{
		return func_244(iParam0);
	}
	return _0xe76687023d8c8505(func_245(iParam0), 0);
}

int func_64(int iParam0)
{
	return func_247(func_246(), &(iParam0->f_690), 0, 0, 0, -1, 1);
}

void func_65(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_248(uParam0, iParam1, sParam2))
	{
		if (!is_ped_injured(iParam1))
		{
			if (!network_is_game_in_progress() || (network_is_game_in_progress() && network_has_control_of_entity(iParam1)))
			{
				set_ped_can_play_ambient_anims(iParam1, bParam3);
			}
		}
	}
}

bool func_66()
{
	if (!func_249(Local_15[0]->f_11) || !func_249(Local_15[1]->f_11))
	{
		return false;
	}
	return true;
}

int func_67(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (bParam6)
	{
		if (!uParam2->f_27)
		{
			if ((is_vehicle_driveable(*uParam0, false, false) && !is_vehicle_stopped(*uParam0)) && !is_entity_dead(*uParam1))
			{
				bring_vehicle_to_halt(*uParam0, 2f, -1, false);
			}
			if (!is_entity_dead(*uParam1))
			{
				clear_ped_tasks(*uParam1, 1, 0);
			}
			uParam2->f_27 = 1;
		}
		return 0;
	}
	else if (uParam2->f_27)
	{
		if (is_vehicle_driveable(*uParam0, false, false))
		{
			task_vehicle_drive_to_coord(*uParam1, *uParam0, *uParam2, 4f, 0, 0, 67633207, 5f, 10f);
		}
		uParam2->f_27 = 0;
	}
	switch (uParam2->f_15)
	{
		case 0:
			if (is_entity_dead(*uParam0))
			{
				if (func_250(uParam2))
				{
					*uParam0 = create_vehicle(uParam2->f_11, uParam2->f_4, uParam2->f_10, false, true, false, false);
					if (func_251(*uParam1, 0, 1))
					{
						set_ped_into_vehicle(*uParam1, *uParam0, -1);
						decor_set_bool(*uParam1, "bNoticePlayer", true);
					}
					uParam2->f_15 = 1;
				}
			}
			break;
		case 1:
			if (!bParam4 && (func_252(*uParam0, &(uParam2->f_16), &(uParam2->f_21), &(uParam2->f_24), 3f, bParam3, 20f, 0, 1092616192, 1) || !uParam2->f_22))
			{
				if (is_vehicle_driveable(*uParam0, false, false))
				{
					task_vehicle_drive_to_coord(*uParam1, *uParam0, *uParam2, 4f, 0, 0, 67633207, 5f, 20f);
				}
				if (uParam2->f_23)
				{
					if ((!uParam2->f_26 && func_253(0, 0, 0, 0)) && !is_string_null_or_empty(uParam2->f_12))
					{
						func_114(*uParam1, Global_35, uParam2->f_12, 0, -1082130432, 0, 0, 0, 0, 1, 1, 291934926, 1, 0, 0);
						uParam2->f_26 = 1;
					}
				}
				uParam2->f_15 = 2;
			}
			break;
		case 2:
			if (!is_entity_dead(*uParam1) && get_script_task_status(*uParam1, -1817882002, true) == 8)
			{
				if (uParam2->f_23)
				{
					if (is_vehicle_driveable(*uParam0, false, false))
					{
						task_vehicle_drive_wander(*uParam1, *uParam0, 5f, 524295);
						uParam2->f_15 = 4;
					}
				}
				else if (is_vehicle_driveable(*uParam0, false, false))
				{
					if (!is_vehicle_stopped(*uParam0))
					{
						bring_vehicle_to_halt(*uParam0, 2f, 2, false);
					}
					open_sequence_task(&iVar0);
					task_stand_still(0, 2000);
					task_leave_any_vehicle(0, 0, 0);
					task_go_to_coord_any_means(0, uParam2->f_7, 1f, 0, false, 524419, -1f);
					task_stand_still(0, 2000);
					close_sequence_task(iVar0);
					task_perform_sequence(*uParam1, iVar0);
					clear_sequence_task(&iVar0);
					uParam2->f_15 = 3;
				}
			}
			break;
		case 3:
			if (!bParam4 && get_script_task_status(*uParam1, 242628503, true) == 8)
			{
				if ((!uParam2->f_26 && func_253(0, 0, 0, 0)) && !is_string_null_or_empty(uParam2->f_12))
				{
					func_114(*uParam1, Global_35, uParam2->f_12, 0, -1082130432, 0, 0, 0, 0, 1, 1, 291934926, 1, 0, 0);
					uParam2->f_26 = 1;
				}
				open_sequence_task(&iVar0);
				task_stand_still(0, 2000);
				if (!is_string_null(uParam2->f_13))
				{
					task_play_anim(0, uParam2->f_13, uParam2->f_14, 8f, -8f, -1, 1, 0f, false, 0, false, 0, false);
				}
				else if (iParam5 != 0)
				{
					task_use_random_scenario_in_group(0, iParam5, 0, 0, 0);
				}
				else
				{
					task_wander_in_area(0, get_entity_coords(*uParam1, true, false), 20f, 10f, 60f, 1);
				}
				close_sequence_task(iVar0);
				task_perform_sequence(*uParam1, iVar0);
				clear_sequence_task(&iVar0);
				uParam2->f_15 = 4;
			}
			break;
		case 4:
			return 1;
	}
	return 0;
}

bool func_68(int iParam0)
{
	return (iLocal_100 && iParam0) != 0;
}

void func_69(int iParam0)
{
	iLocal_100 = (iLocal_100 || iParam0);
}

void func_70(int iParam0, bool bParam1)
{
	if (!func_138(iParam0))
	{
		return;
	}
	iVar0 = func_139(iParam0);
	if (bParam1)
	{
		func_141(iVar0, 8);
		func_143(&((*Global_1392194)[iParam0]->f_1), 1);
	}
	else
	{
		func_254(iVar0, 8);
		func_199(&((*Global_1392194)[iParam0]->f_1), 1);
	}
}

bool func_71()
{
	if (!func_255(&uLocal_2414))
	{
		return false;
	}
	if (!func_256())
	{
		return false;
	}
	return true;
}

bool func_72()
{
	if (!_text_database_has_loaded(func_219()))
	{
		return false;
	}
	if (!_text_database_has_loaded(func_220()))
	{
		return false;
	}
	return true;
}

bool func_73()
{
	if (func_19(16))
	{
		return true;
	}
	switch (iLocal_98)
	{
		case 3:
			if (func_9(Local_2160.f_136, 256) && !func_5(Local_2160.f_136, 128))
			{
				return false;
			}
			break;
	}
	return true;
}

void func_74()
{
	iVar0 = func_63(Local_2160.f_138);
	if (!is_entity_dead(iVar0))
	{
		clear_ped_tasks_immediately(iVar0, false, true);
		if (!func_257(iVar0, 1))
		{
			func_258(iVar0, "EA_LCMP_Foreman", 0);
		}
		set_ped_config_flag(iVar0, 178, true);
	}
	switch (iLocal_98)
	{
		case 1:
			if (!func_5(Local_2160.f_136, 128))
			{
				if (!is_entity_dead(iVar0))
				{
					iVar1 = _find_closest_active_scenario_point_of_type(-1400.66f, -213.44f, 101.9f, func_259(), 1.5f, 0, false);
					if (_does_scenario_point_exist(iVar1))
					{
						_task_use_scenario_point(iVar0, iVar1, func_260(), -1, false, true, 0, false, -1f, false);
					}
					else
					{
						task_use_nearest_scenario_to_coord_warp(iVar0, -1400.66f, -213.44f, 101.9f, 1.5f, 0, false, false, false, false);
					}
				}
			}
			else if (!is_entity_dead(iVar0))
			{
			}
			break;
		case 2:
			if (!func_5(Local_2160.f_136, 128))
			{
				if (!is_entity_dead(iVar0))
				{
				}
			}
			else if (!is_entity_dead(iVar0))
			{
			}
			break;
		case 3:
			if (!func_5(Local_2160.f_136, 128))
			{
				if (!is_entity_dead(iVar0))
				{
					if (func_9(Local_2160.f_136, 256) || func_9(Local_2160.f_136, 262144))
					{
						task_use_nearest_scenario_to_coord_warp(iVar0, func_261(), 1.5f, 0, false, false, false, false);
					}
					else
					{
						func_262(iVar0, -1398.594f, -208.7037f, 101.8822f, 87.65f, 1, 1073741824);
					}
				}
			}
			else if (!is_entity_dead(func_63(Local_2160.f_138)))
			{
			}
			break;
		case 4:
		case 5:
			break;
	}
}

void func_75(int iParam0, bool bParam1)
{
	if (func_263(iParam0, 0))
	{
		iVar0 = func_63(iParam0);
		if (!is_entity_dead(iVar0))
		{
			set_ped_config_flag(iVar0, 234, true);
			set_ped_config_flag(iVar0, 259, true);
		}
		func_264(iParam0, 0, 1, 0, 0);
		_0x6759bee6762e140b(func_167(iParam0));
		if (bParam1)
		{
			func_243(iVar0, 1, 1);
		}
	}
}

void func_76(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_265(&(iParam0->f_18));
}

int func_77()
{
	func_266();
	if (iLocal_98 == 3 && !func_5(Local_2160.f_136, 128))
	{
		if (!is_entity_dead(&(uLocal_2479[0])))
		{
			func_268(&(uLocal_2479[0]), func_267(272629760, 1056964608, 1065353216), 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
			task_guard_current_position(&(uLocal_2479[0]), 10f, 50f, true);
			set_ped_config_flag(&(uLocal_2479[0]), 146, false);
			func_258(&(uLocal_2479[0]), func_269(Local_2160.f_136, -1), 0);
			decor_set_bool(&(uLocal_2479[0]), "HAS_VOICE", true);
			func_243(&(uLocal_2479[0]), 1, 1);
		}
		if (!is_entity_dead(&(uLocal_2479[1])))
		{
			func_268(&(uLocal_2479[1]), func_267(272629760, 1056964608, 1065353216), 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
			task_guard_current_position(&(uLocal_2479[1]), 10f, 50f, true);
			set_ped_config_flag(&(uLocal_2479[1]), 146, false);
			func_258(&(uLocal_2479[1]), func_269(Local_2160.f_136, -1), 0);
			decor_set_bool(&(uLocal_2479[1]), "HAS_VOICE", true);
			func_243(&(uLocal_2479[1]), 1, 1);
		}
		if (does_entity_exist(&(uLocal_2479[2])))
		{
			set_entity_load_collision_flag(&(uLocal_2479[2]), 1);
			_set_entity_something(&(uLocal_2479[2]), true);
		}
		if (does_entity_exist(&(uLocal_2479[3])))
		{
			set_entity_load_collision_flag(&(uLocal_2479[3]), 1);
			_set_entity_something(&(uLocal_2479[3]), true);
		}
	}
	else
	{
		if (func_19(64))
		{
			if (!is_entity_dead(&(uLocal_2479[0])))
			{
				open_sequence_task(&uLocal_735);
				task_follow_nav_mesh_to_coord(0, -1388.626f, -234.6199f, 98.7432f, 1f, -1, 0.25f, 0, 9.6661f);
				task_follow_nav_mesh_to_coord(0, -1398.8f, -214.8f, 101.4f, 1f, -1, 0.25f, 0, 15.6f);
				task_follow_nav_mesh_to_coord(0, -1400.4f, -209.6f, 102f, 1f, -1, 0.25f, 0, 148.8f);
				_task_use_nearest_scenario_to_coord(0, -1400.871f, -210.4877f, 101.0936f, 2f, -1, false, false, true, false);
				close_sequence_task(iVar733);
				task_perform_sequence(&(uLocal_2479[0]), iVar733);
				clear_sequence_task(&uLocal_735);
				set_ped_config_flag(&(uLocal_2479[0]), 146, false);
				func_243(&(uLocal_2479[0]), 1, 1);
			}
		}
		else if (!is_entity_dead(&(uLocal_2479[0])))
		{
			task_use_random_scenario_in_group(&(uLocal_2479[0]), func_270(), 0, 0, 0);
			set_ped_config_flag(&(uLocal_2479[0]), 146, false);
			func_243(&(uLocal_2479[0]), 1, 1);
		}
		if (!is_entity_dead(&(uLocal_2479[1])))
		{
			task_use_random_scenario_in_group(&(uLocal_2479[1]), func_270(), 0, 0, 0);
			set_ped_config_flag(&(uLocal_2479[1]), 146, false);
			func_243(&(uLocal_2479[1]), 1, 1);
		}
		if (!is_entity_dead(&(uLocal_2479[2])))
		{
			if (!func_19(64))
			{
				task_use_random_scenario_in_group(&(uLocal_2479[2]), func_270(), 0, 0, 0);
				set_ped_config_flag(&(uLocal_2479[2]), 146, false);
				func_243(&(uLocal_2479[2]), 1, 1);
			}
		}
		if (!is_entity_dead(&(uLocal_2479[3])))
		{
			if (!func_19(64))
			{
				task_use_random_scenario_in_group(&(uLocal_2479[3]), func_270(), 0, 0, 0);
				set_ped_config_flag(&(uLocal_2479[3]), 146, false);
				func_243(&(uLocal_2479[3]), 1, 1);
			}
		}
	}
	if (!is_entity_dead(&(uLocal_2479[4])))
	{
		func_243(&(uLocal_2479[4]), 1, 1);
	}
	if (!is_entity_dead(&(uLocal_2479[5])))
	{
		func_243(&(uLocal_2479[5]), 1, 1);
	}
	iVar0 = 0;
	while (iVar0 < iVar1155)
	{
		if (!is_entity_dead(&(uLocal_2479[iVar0])))
		{
			set_ped_config_flag(&(uLocal_2479[iVar0]), 178, true);
			_0xa3db37edf9a74635(get_player_index(), &(uLocal_2479[iVar0]), 7, 0, 1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_1157.f_1)
	{
		if (!is_entity_dead(&(iLocal_2505[iVar0])))
		{
			set_ped_config_flag(&(iLocal_2505[iVar0]), 178, true);
			_0xa3db37edf9a74635(get_player_index(), &(iLocal_2505[iVar0]), 7, 0, 1);
		}
		iVar0++;
	}
	func_48(vLocal_1117[0]);
	return 1;
}

bool func_78(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
		return false;
	}
	return _0x1b065a2bf7953815(0) != 1;
}

void func_79(bool bParam0)
{
	iVar0 = func_4(0);
	if (func_5(0, 128))
	{
		if (iVar0 != 1 || func_5(0, 16777216))
		{
			func_271(0, 0);
		}
	}
	else
	{
		if (iVar0 > 3)
		{
			func_271(0, 0);
		}
		if (func_9(0, 32768))
		{
			func_271(0, 0);
		}
		else
		{
			switch (iVar0)
			{
				case 1:
					if (func_9(0, 4) && func_5(0, 16777216))
					{
						func_271(0, 0);
					}
					else if (func_9(0, 1024))
					{
						if (bParam0 || !func_5(0, 268435456))
						{
							func_272(0);
							func_273(0, 0, "LOG_JOURN01", 0, !bParam0);
							func_42(0, 268435456);
						}
					}
					else
					{
						func_271(0, 0);
					}
					break;
				case 2:
					func_271(0, 0);
					break;
				case 3:
					if (func_9(0, 8))
					{
						func_271(0, 0);
					}
					else if (func_9(0, 256))
					{
						if (bParam0 || !func_5(0, 268435456))
						{
							func_272(0);
							func_273(0, 0, "LOG_JOURN02", 0, !bParam0);
							func_42(0, 268435456);
						}
					}
					else
					{
						func_271(0, 0);
					}
					break;
				default:
					func_271(0, 0);
					break;
			}
		}
	}
}

void func_80(int iParam0, int iParam1)
{
	if (!func_22(iParam0, iParam1))
	{
		return;
	}
	iParam0->f_29 = (iParam0->f_29 - (iParam0->f_29 && iParam1));
}

void func_81()
{
	if (func_51(8388608))
	{
		if (func_274(1024))
		{
			func_172();
		}
		else
		{
			func_209();
		}
	}
}

bool func_82(int iParam0, int iParam1)
{
	if (!Global_1935630->f_12 && func_213(Global_35, (*Global_1392194)[iParam0->f_136]->f_5, 1, 0))
	{
		if (!func_22(iParam0, 64))
		{
			func_43(iParam0, 64);
			func_275(iParam0->f_136, 1);
			return true;
		}
	}
	return false;
}

void func_83()
{
	Local_2544.f_24 = 0;
	Local_2544.f_23 = 0;
	Local_2544.f_17 = 0;
	func_143(&(Local_2544.f_34), 1);
	if (!func_19(16))
	{
		switch (iLocal_98)
		{
			case 1:
				if ((func_19(128) && !func_19(2)) && !func_5(Local_2160.f_136, 4))
				{
					if (func_276(1) > 0)
					{
						sVar1[0] = "LOG_WRK01A_P";
					}
					else
					{
						sVar1[0] = "LOG_WRK01A";
					}
				}
				else
				{
					sVar1[0] = "LOG_WRK01A_M";
					iVar6[0] = 1;
				}
				sVar1[1] = "LOG_WRK02A";
				if (func_22(&Local_2160, 256))
				{
					sVar1[2] = "LOG_WRK03A_R";
					iVar6[2] = 1;
					sVar1[3] = "LOG_WRK04A_R";
					iVar6[3] = 1;
				}
				else
				{
					sVar1[2] = "LOG_WRK03A";
					iVar6[2] = 1;
					sVar1[3] = "LOG_WRK04A";
					iVar6[3] = 1;
				}
				if (func_19(128) && !func_19(2))
				{
					bVar0 = true;
				}
				break;
			case 2:
				if (func_5(Local_2160.f_136, 64))
				{
					sVar1[0] = "LOG_WRK01BA";
					iVar6[0] = 1;
					sVar1[1] = "LOG_WRK02BA";
					iVar6[1] = 1;
					sVar1[2] = "LOG_WRK03BA";
					iVar6[2] = 1;
					sVar1[3] = "LOG_WRK04BA";
					iVar6[3] = 1;
				}
				else
				{
					if (func_19(128) && !func_19(2))
					{
						if (func_276(1) > 0)
						{
							sVar1[0] = "LOG_WRK01B_P";
						}
						else
						{
							sVar1[0] = "LOG_WRK01B";
						}
					}
					else
					{
						sVar1[0] = "LOG_WRK01B_M";
						iVar6[0] = 1;
					}
					if (func_22(&Local_2160, 256))
					{
						sVar1[1] = "LOG_WRK02B_R";
						iVar6[1] = 1;
						sVar1[2] = "LOG_WRK03B_R";
						iVar6[2] = 1;
						sVar1[3] = "LOG_WRK04B_R";
						iVar6[3] = 1;
					}
					else
					{
						sVar1[1] = "LOG_WRK02B";
						iVar6[1] = 1;
						sVar1[2] = "LOG_WRK03B";
						iVar6[2] = 1;
						sVar1[3] = "LOG_WRK04B";
						iVar6[3] = 1;
					}
					if (func_19(128) && !func_19(2))
					{
						bVar0 = true;
					}
				}
				break;
			case 3:
				if (!func_5(Local_2160.f_136, 128))
				{
					if (func_9(Local_2160.f_136, 8))
					{
						if (func_276(1) > 0)
						{
							sVar1[0] = "LOG_WRK01CH_P";
						}
						else
						{
							sVar1[0] = "LOG_WRK01CH";
						}
						if (func_22(&Local_2160, 256))
						{
							sVar1[1] = "LOG_WRK02CH_R";
						}
						else
						{
							sVar1[1] = "LOG_WRK02CH";
						}
						sVar1[2] = "LOG_WRK03CH";
						iVar6[2] = 1;
						sVar1[3] = "LOG_WRK04CH";
						iVar6[3] = 1;
					}
					else if (func_9(Local_2160.f_136, 32))
					{
						if (func_68(128))
						{
							iVar11 = func_277();
							if (is_ped_human(iVar11))
							{
								sVar1[0] = "LOG_WRK01CC";
								sVar1[1] = "LOG_WRK02CC";
								sVar1[2] = "LOG_WRK03CC";
								sVar1[3] = "LOG_WRK04CC";
							}
							else
							{
								sVar1[0] = "LOG_WRK01CW";
								sVar1[1] = "LOG_WRK02CW";
								sVar1[2] = "LOG_WRK03CW";
								sVar1[3] = "LOG_WRK04CW";
							}
						}
						else
						{
							sVar1[0] = "LOG_WRK01CB";
							sVar1[1] = "LOG_WRK02CB";
							if (func_276(1) > 0)
							{
								sVar1[2] = "LOG_WRK03CB_P";
							}
							else
							{
								sVar1[2] = "LOG_WRK03CB";
							}
							sVar1[3] = "LOG_WRK04CB";
						}
					}
					else if (func_9(Local_2160.f_136, 256))
					{
						sVar1[0] = "LOG_WRK01CA";
						sVar1[1] = "LOG_WRK02CA";
						iVar6[1] = 1;
						sVar1[2] = "LOG_WRK03CA";
						iVar6[2] = 1;
						if (func_276(1) > 0)
						{
							sVar1[3] = "LOG_WRK04CA_P";
						}
						else
						{
							sVar1[3] = "LOG_WRK04CA";
						}
					}
					else
					{
						if (func_19(128) && !func_19(2))
						{
							if (func_276(1) > 0)
							{
								sVar1[0] = "LOG_WRK01C_P";
							}
							else
							{
								sVar1[0] = "LOG_WRK01C";
							}
						}
						else
						{
							sVar1[0] = "LOG_WRK01C_M";
							iVar6[0] = 1;
						}
						if (func_22(&Local_2160, 256))
						{
							sVar1[1] = "LOG_WRK02C_R";
							iVar6[1] = 1;
							sVar1[2] = "LOG_WRK03C_R";
							iVar6[2] = 1;
							sVar1[3] = "LOG_WRK04C_R";
							iVar6[3] = 1;
						}
						else
						{
							sVar1[1] = "LOG_WRK02C";
							iVar6[1] = 1;
							sVar1[2] = "LOG_WRK03C";
							iVar6[2] = 1;
							sVar1[3] = "LOG_WRK04C";
							iVar6[3] = 1;
						}
						if (func_19(128) && !func_19(2))
						{
							bVar0 = true;
						}
					}
				}
				else if (func_9(Local_2160.f_136, 8))
				{
					sVar1[0] = "LOG_WRK01CH";
					sVar1[1] = "LOG_WRK02CH";
					iVar6[1] = 1;
					sVar1[2] = "LOG_WRK03CH";
					iVar6[2] = 1;
					sVar1[3] = "LOG_WRK04CH";
					iVar6[3] = 1;
				}
				else if (func_276(1) > 0)
				{
					sVar1[0] = "LOG_WRK01CN_P";
					sVar1[1] = "LOG_WRK02CN_P";
					sVar1[2] = "LOG_WRK03CN_P";
					sVar1[3] = "LOG_WRK04CN_P";
				}
				else
				{
					sVar1[0] = "LOG_WRK01CN";
					sVar1[1] = "LOG_WRK02CN";
					sVar1[2] = "LOG_WRK03CN";
					sVar1[3] = "LOG_WRK04CN";
				}
				break;
		}
	}
	else if (func_276(1) > 0)
	{
		sVar1[0] = "EA_WRKMD01_P";
		sVar1[1] = "EA_WRKMD02_P";
		sVar1[2] = "EA_WRKMD03_P";
		sVar1[3] = "EA_WRKMD04_P";
	}
	else
	{
		sVar1[0] = "EA_WRKMD01";
		sVar1[1] = "EA_WRKMD02";
		sVar1[2] = "EA_WRKMD03";
		sVar1[3] = "EA_WRKMD04";
	}
	Local_2544.f_33 = 15f;
	func_278(&sVar1, &iVar6, &Local_2544, bVar0);
}

void func_84()
{
	if (func_22(&Local_2160, 256))
	{
		sVar0 = "EventAreas/Appleseed/LCMP_Workers_Shelter";
		sVar1 = "EventAreas/Appleseed/LCMP_Foreman_Shelter";
	}
	else if (iLocal_98 == 3 && !func_19(262144))
	{
		sVar0 = "EventAreas/Appleseed/LCMP_Workers_Stalled";
		sVar1 = "EventAreas/Appleseed/LCMP_Foreman";
	}
	else
	{
		sVar0 = "EventAreas/Appleseed/LCMP_Workers";
		sVar1 = "EventAreas/Appleseed/LCMP_Foreman";
	}
	iVar2 = 810;
	while (iVar2 <= 833)
	{
		if (_0x800df3fc913355f3(func_167(iVar2)) && !are_strings_equal(_0xceb40b678e403759(func_236(iVar2)), sVar0))
		{
			_0x187d65f3aec5d679(func_236(iVar2), sVar0);
			iVar3 = func_63(iVar2);
			if ((does_entity_exist(iVar3) && !is_ped_active_in_scenario(iVar3, 1)) && !is_entity_a_mission_entity(iVar3))
			{
				task_persistent_character(iVar3);
			}
		}
		iVar2++;
	}
	iVar2 = Local_2160.f_138;
	if (_0x800df3fc913355f3(func_167(iVar2)) && !are_strings_equal(_0xceb40b678e403759(func_236(iVar2)), sVar0))
	{
		_0x187d65f3aec5d679(func_236(iVar2), sVar1);
	}
}

void func_85(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, var uParam5, var uParam6, int iParam7, float fParam8, bool bParam9)
{
	if ((*uParam6 % iParam7) == 0)
	{
		iVar0 = iParam3;
		while (iVar0 <= iParam4)
		{
			if (!func_23(iVar0, 32))
			{
				iVar1 = func_63(iVar0);
				if (!is_entity_dead(iVar1))
				{
					if (is_ped_human(iVar1))
					{
						(*uParam0)[iVar2] = iVar1;
						(*uParam1)[iVar2] = func_279(iVar1, 1, 0);
						iVar2++;
						if (bParam9)
						{
							set_blocking_of_non_temporary_events(iVar1, true);
							set_ped_config_flag(iVar1, 288, true);
						}
						else
						{
							set_ped_config_flag(iVar1, 288, false);
						}
						if (!decor_exist_on(iVar1, "bScriptedILO"))
						{
							set_ped_config_flag(iVar1, 130, false);
						}
						set_ped_config_flag(iVar1, 374, true);
						set_ped_config_flag(iVar1, 178, true);
						set_ped_config_flag(iVar1, 146, true);
						set_ped_config_flag(iVar1, 246, true);
						set_ped_config_flag(iVar1, 297, true);
						set_ped_config_flag(iVar1, 171, true);
						_0xa3db37edf9a74635(get_player_index(), iVar1, 7, 0, 1);
						func_280(uParam2, iVar1, 0);
						if (fParam8 >= 0f)
						{
							set_ped_seeing_range(iVar1, fParam8);
						}
					}
					else
					{
						func_281(uParam2, iVar1, 0);
					}
				}
			}
			iVar0++;
		}
		iVar3 = iVar2;
		while (iVar3 <= (*uParam0 - 1))
		{
			(*uParam0)[iVar2] = 0;
			iVar3++;
		}
		*uParam5 = iVar2;
		*uParam6 = 0;
	}
	*uParam6++;
}

void func_86(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (!is_entity_dead(iParam0[iVar0]))
		{
			set_ped_reset_flag(iParam0[iVar0], 49, true);
		}
		iVar0++;
	}
}

void func_87()
{
}

void func_88()
{
	if (!func_68(268435456))
	{
		if (func_68(134217728) || (get_frame_count() % 9) == 0)
		{
			func_69(134217728);
			iVar0 = (get_frame_count() % 9);
			Var1.f_3 = 3;
			Var1.f_4 = 30;
			Var1.f_5 = -1;
			Var1.f_9 = 3;
			Var1.f_15 = -1;
			Var1.f_16 = -1;
			Var1.f_20 = 2;
			Var1.f_16 = iVar0;
			iVar31 = 0;
			while (iVar31 < 2)
			{
				sVar30 = func_282(&Var1, iVar31);
				if (!is_string_null_or_empty(sVar30))
				{
					_0xef51242e35242b47(sVar30);
				}
				iVar31++;
			}
			if (iVar0 == 8)
			{
				func_69(268435456);
			}
		}
	}
}

float func_89()
{
	if ((iLocal_98 == 1 && func_19(512)) && !func_19(262144))
	{
		return 1f;
	}
	return 2f;
}

float func_90()
{
	if ((iLocal_98 == 1 && func_19(512)) && !func_19(262144))
	{
		return 1f;
	}
	return 1.75f;
}

void func_91(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if (func_283(get_player_index(), 1, 1, 1))
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = (*Global_1392194)[uParam0->f_136]->f_6;
	}
	if (func_213(Global_35, iParam1, 1, 0))
	{
		set_ped_max_move_blend_ratio(Global_35, fParam2);
	}
	iVar0 = _get_last_mount(Global_35);
	if (func_213(iVar0, iParam1, 1, 0))
	{
		set_ped_max_move_blend_ratio(iVar0, fParam3);
	}
}

void func_92()
{
	if ((_does_volume_exist(&(iLocal_75[0])) && func_213(Global_35, &(iLocal_75[0]), 1, 0)) && !is_ped_on_mount(Global_35))
	{
		set_ped_max_move_blend_ratio(Global_35, 1.5f);
	}
}

int func_93()
{
	if (func_51(16384))
	{
		return 0;
	}
	iVar0 = iVar746;
	if (((func_132(&Local_972, 2) || func_284(&Local_2160, &(Local_2160.f_28))) || func_285()) || func_286(func_63(Local_2160.f_138), 0, &Local_2160, &(Local_2160.f_28), 0, 0))
	{
		if (func_132(&Local_972, 2))
		{
		}
		else if (Local_2160.f_28 == 65536)
		{
			func_287(&Local_2160, &(Local_2160.f_28));
			return 0;
		}
		else if (Local_2160.f_28 == 32)
		{
			return func_288();
		}
		else if (Local_2160.f_28 == 8192 && func_289())
		{
			func_287(&Local_2160, &(Local_2160.f_28));
			return 0;
		}
		if (func_290(&(Local_2160.f_28)) && !func_68(67108864))
		{
			if (!func_132(&Local_972, 1))
			{
				Local_972 = func_63(Local_2160.f_138);
				func_292(&Local_972, &Local_2160, Local_2160.f_28, 54329, 0, 0);
				if (!is_string_null_or_empty(func_282(&Local_972, 0)))
				{
					StringCopy(Local_972.f_20[0], func_282(&Local_972, 0), 32);
					StringCopy(Local_972.f_20[1], func_282(&Local_972, 1), 32);
					func_293(&Local_972, 32);
				}
			}
			else if (Local_972.f_13 > 2)
			{
				func_293(&Local_972, 512);
			}
			func_287(&Local_2160, &(Local_2160.f_28));
			return 0;
		}
		return 1;
	}
	else if ((func_294(&uLocal_2320, &Local_2160, &(Local_2160.f_28), &uLocal_748, 0, (iVar730 - 1), 4) || func_294(&uLocal_2479, &Local_2160, &(Local_2160.f_28), &uLocal_746, 0, (iVar1155 - 1), 1)) || func_294(&iLocal_2505, &Local_2160, &(Local_2160.f_28), &uLocal_747, 0, func_59(func_19(16384), Local_1157.f_1 + 1, (Local_1157.f_1 - 1)), 1))
	{
		if (func_68(131072))
		{
			if ((_get_lassoed_entity(Global_35) == &uLocal_2479[0] || _is_ped_lassoed(&(uLocal_2479[0]))) || !get_is_task_active(&(uLocal_2479[0]), 3))
			{
				func_128(&(uLocal_2479[0]), 0, 0);
			}
		}
		if (func_290(&(Local_2160.f_28)))
		{
			if (Local_2160.f_28 == 8192 && func_289())
			{
				return 0;
			}
			if (!func_132(&Local_972, 1) && !func_19(32))
			{
				if (Local_2160.f_28 == 8 && func_295())
				{
					return 1;
				}
				if (func_19(64) && Local_2160.f_10 == &uLocal_2479[0])
				{
					if (Local_2160.f_28 != 65536)
					{
						func_292(&Local_972, &Local_2160, Local_2160.f_28, 54329, 0, 0);
						func_293(&Local_972, 64);
						StringCopy(Local_972.f_20[0], "LCMPF_IG_TFAIM", 32);
						func_293(&Local_972, 32);
					}
				}
				else
				{
					func_292(&Local_972, &Local_2160, Local_2160.f_28, 54329, 0, 0);
				}
			}
			func_287(&Local_2160, &(Local_2160.f_28));
			return 0;
		}
		else if (Local_2160.f_28 == 32)
		{
			return func_288();
		}
		return 1;
	}
	else if (func_296(&Local_2160, &Local_972, 54329))
	{
		if (!func_132(&Local_972, 1))
		{
			func_292(&Local_972, &Local_2160, 1024, 54329, 0, 0);
			if (iVar970 == func_63(Local_2160.f_138) && !is_string_null_or_empty(func_282(&Local_972, 0)))
			{
				StringCopy(Local_972.f_20[0], func_282(&Local_972, 0), 32);
				StringCopy(Local_972.f_20[1], func_282(&Local_972, 1), 32);
				func_293(&Local_972, 32);
			}
			func_287(&Local_2160, &(Local_2160.f_28));
			return 0;
		}
		else
		{
			func_293(&Local_972, 512);
		}
	}
	else if (func_297())
	{
		Local_2160.f_28 = 2;
		return 1;
	}
	iVar1 = func_298(iVar0 + 4, (iVar730 - 1));
	iVar0 = iVar0;
	while (iVar0 <= iVar1)
	{
		if (&uLocal_2382[iVar0] < Local_2160.f_19 && func_299(&(uLocal_2320[iVar0]), &Local_2160, 0, &(uLocal_2382[iVar0])))
		{
			func_48(vLocal_1117[6]);
		}
		else
		{
			iVar0++;
			iVar0++;
		}
	}
	if (func_223(vLocal_1117[6], 10f))
	{
		func_300(&Local_2160, &(Local_2160.f_28));
	}
	return 0;
}

void func_94(int* iParam0, var uParam1, bool bParam2)
{
	func_265(&(iParam0->f_6));
	iParam0->f_5 = -1;
	func_134(iParam0, 1);
	func_134(iParam0, 4);
	func_134(iParam0, 32);
	func_134(iParam0, 128);
	func_134(iParam0, 64);
	func_134(iParam0, 8);
	func_134(iParam0, 256);
	func_134(iParam0, 512);
	iParam0->f_13 = 0;
	iParam0->f_18 = 0;
	if (!bParam2)
	{
		*iParam0 = 0;
		StringCopy(iParam0->f_20[0], "", 32);
		StringCopy(iParam0->f_20[1], "", 32);
		iParam0->f_16 = -1;
	}
	if (iParam0->f_19 != 0)
	{
		remove_shocking_event(iParam0->f_19);
	}
	iParam0->f_2 = 0;
	uParam1->f_4 = 0;
}

void func_95(var uParam0)
{
	if (func_301(uParam0->f_32))
	{
		func_302(&(uParam0->f_32), 1, 1);
	}
	if (func_301(uParam0->f_33))
	{
		func_302(&(uParam0->f_33), 1, 1);
	}
	if (func_301(uParam0->f_34))
	{
		func_302(&(uParam0->f_34), 1, 1);
	}
}

void func_96(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

void func_97()
{
	if (func_51(32))
	{
		func_303(0);
		func_304(11, 128);
		func_50(32);
	}
}

bool func_98(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_99(int iParam0)
{
	iVar0 = func_305(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_100(int iParam0, bool bParam1, int iParam2)
{
	if (!func_98(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_99(iParam0) && !func_306(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_307(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_99(iParam0))
	{
		iParam2 = -1;
	}
	if (func_308(iParam0) == 3 || (func_308(iParam0) == 1 && _0x01f4d242765c6b24(func_307(iParam0))))
	{
		func_310(func_309(iParam0), func_307(iParam0), iParam2);
		if ((!func_98(Global_1572864->f_8) && !func_144(0, 1, 0)) && !func_311(&Global_1935630, 32768))
		{
			iVar0 = func_312(iParam0);
			if (iVar0 != -1)
			{
				func_313(0);
			}
			else if (func_309(iParam0) == 8)
			{
				iVar0 = func_314();
				if (iVar0 != -1)
				{
					func_313(0);
				}
			}
		}
	}
	func_315(iParam0, 0);
	if (func_316(0) == iParam0)
	{
		func_101(1);
		func_317(0);
		func_318(1);
	}
	func_319(iParam0, 1);
	func_320(iParam0);
}

void func_101(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_321(Global_1935630, 4194304);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_322(Global_1935630, 4194304);
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

bool func_102(int iParam0)
{
	iVar0 = _0x5407b7288d0478b7(Global_35, iParam0);
	return iVar0 > 0;
}

void func_103()
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		iVar1 = func_323(iVar0);
		switch (iVar1)
		{
			case 2:
			case 9:
			case 10:
				break;
			case 0:
			case 1:
				if (func_19(262144) && !func_324())
				{
					func_216(Local_1039[iVar0]);
				}
				break;
			case 6:
				if (func_325(Local_1039[6]))
				{
					freeze_entity_position(Local_1157.f_690[14]->f_8, false);
					activate_physics(Local_1157.f_690[14]->f_8);
					func_327(Local_1039[6], func_63(func_326(6, 0, 0)), "PED1");
					func_327(Local_1039[6], func_63(func_326(6, 1, 0)), "PED2");
					func_216(Local_1039[6]);
				}
				break;
			default:
				func_216(Local_1039[iVar0]);
				break;
		}
		iVar0++;
	}
}

void func_104()
{
	if (!is_entity_dead(&(iLocal_2505[0])))
	{
		func_328(iLocal_2505[0]);
		set_ped_config_flag(&(iLocal_2505[0]), 136, false);
		_task_smart_flee_style_ped(&(iLocal_2505[0]), Global_35, 4, 0, -1082130432, -1, 0);
	}
}

void func_105()
{
	_0xc6366a585659d15c(get_player_index(), "");
	_0x98cd760de43b612e(get_player_index(), "");
	_0x8af46e5159a5b620(Global_35, 0);
}

void func_106(bool bParam0)
{
	if (func_68(512) || bParam0)
	{
		if (func_251(iVar1153, 0, 1))
		{
			set_ped_config_flag(iVar1153, 136, false);
			func_329(iVar1153, 0);
		}
		func_330(512);
	}
}

void func_107(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_301((*uParam0)[iVar0]->f_6))
			{
				if (!bParam4 && is_bit_set(uParam0[iVar0], 11))
				{
				}
				else
				{
					func_302(&((*uParam0)[iVar0]->f_6), 1, 1);
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

void func_108(int iParam0)
{
	func_265(&uLocal_0);
	func_331(1, iParam0, 0);
	_0xdd1232b332cbb9e7(3, 1, 0);
	func_332();
}

void func_109(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_110()
{
	if (_does_volume_exist(&(iLocal_75[4])))
	{
		_0x2c87c3e1c7b96ee2(&(iLocal_75[4]));
		_0x74c2b3dc0b294102(&(iLocal_75[4]));
		_0xa1cfb35069d23c23(&(iLocal_75[4]));
	}
	func_109(&(iLocal_75[4]));
	func_109(&(iLocal_75[9]));
	func_109(&(iLocal_75[10]));
	func_109(&(iLocal_75[20]));
}

void func_111(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_96((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_112(int iParam0, int iParam1)
{
	Global_40.f_9096[iParam0]->f_9 = &Global_40.f_9096[iParam0];
	Global_40.f_9096[iParam0]->f_10 = Global_40.f_9096[iParam0]->f_3;
	func_333(iParam0, iParam1, 0, 0, 0, 1);
	func_10(iParam0, 32768);
	func_15(iParam0, 16777216);
	func_204(iParam0, 4194304);
}

void func_113(int iParam0)
{
	func_287(iParam0, &(iParam0->f_28));
	func_334(iParam0, 1);
	func_189(iParam0, 0);
	func_335(iParam0, 0);
	func_336(iParam0, 0);
	func_41(iParam0, 0);
}

bool func_114(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_337(iParam0, iParam1, sParam2, iParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

bool func_115(int iParam0)
{
	return (iLocal_102 && iParam0) != 0;
}

int func_116(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 65536:
			return -1361146315;
		case 1024:
			return 1923998736;
		case 4:
		case 8:
		case 16:
		case 64:
		case 256:
		case 8192:
			return -1810065318;
		case 512:
			return -1547772340;
		case 2:
		case 32:
		case 2048:
			if (!_0x3ec28da1ffac9ddd(uParam0->f_10, Global_35, 0, 0) || !does_entity_exist(&(Global_1935630->f_34[0])))
			{
				return -16106300;
			}
			else if (_0xcb690f680a3ea971(Global_35, 6))
			{
				return 195938434;
			}
			else
			{
				return 1352191066;
			}
			break;
		case 4096:
			return -2130852007;
		case 1:
		case 128:
			return -493957506;
		case 16384:
			return 0;
	}
	return -1361146315;
}

void func_117()
{
	if (func_19(64))
	{
		func_338();
	}
	func_339(-1);
	if (iLocal_98 == 2 || (iLocal_98 == 3 && func_19(262144)))
	{
		func_9(1, 2);
		func_340();
	}
	if (iLocal_98 == 3)
	{
		func_341();
	}
}

int func_118(int iParam0, int iParam1, int iParam2)
{
	if ((func_342(iParam0, 16777216) && func_342(iParam0, 33554432)) && func_342(iParam0, 268435456))
	{
		return 379542007;
	}
	iVar0 = _0xf8204ef17410bf43(416676503, iParam1, iParam2, 0);
	iVar1 = _0xf8204ef17410bf43(-1101297303, iParam1, iParam2, 0);
	iVar2 = 392538360;
	iVar3 = 0;
	if (!func_342(iParam0, 33554432))
	{
		iVar3 = iVar1;
	}
	if (!func_342(iParam0, 16777216))
	{
		if (!func_343(iVar3) || _0xf2f585411e748b9c(iVar0, 0) > _0xf2f585411e748b9c(iVar3, 0))
		{
			iVar3 = iVar0;
		}
	}
	if (!func_342(iParam0, 268435456) && func_344(iVar2))
	{
		if (!func_343(iVar3) || _0xf2f585411e748b9c(iVar2, 0) > _0xf2f585411e748b9c(iVar3, 0))
		{
			iVar3 = iVar2;
		}
	}
	if (!func_343(iVar3))
	{
		return 379542007;
	}
	return iVar3;
}

void func_119(int iParam0, int iParam1, int* iParam2, bool bParam3, int iParam4, int iParam5)
{
	iVar0 = -89429847;
	if (iParam5 == 0 || iParam5 == Global_35)
	{
		iParam5 = Global_35;
		iVar0 = 831283580;
	}
	bParam3 = (bParam3 || func_22(iParam0, 4096));
	if (_0xcb690f680a3ea971(iParam1, 4))
	{
		bParam3 = false;
	}
	func_345(iParam1);
	func_96(iParam2);
	if (!is_entity_dead(iParam1))
	{
		_0xfc3db99c8144cd81(iParam1, (*Global_1392194)[iParam0->f_136]->f_5, 0, 0, 0);
		set_ped_config_flag(iParam1, 146, false);
		set_ped_config_flag(iParam1, 246, true);
		set_ped_config_flag(iParam1, 178, true);
		set_ped_can_be_targetted(iParam1, true);
		if (bParam3)
		{
			_0xeeed8fafec331a70(iParam1, get_entity_coords(iParam5, true, false), 1);
			set_ped_relationship_group_hash(iParam1, -401180987);
			open_sequence_task(&iVar1);
			_task_smart_flee_style_ped(0, iParam5, 4, 0, -1082130432, -1, 0);
			close_sequence_task(iVar1);
			_task_perform_sequence_2(iParam1, iVar1, 0.1f, 0.75f);
			clear_sequence_task(&iVar1);
			set_ped_keep_task(iParam1, true);
		}
		else
		{
			if (iParam5 == Global_35)
			{
				set_ped_relationship_group_hash(iParam1, 1269650476);
			}
			_0x802092b07e3b1eea(iParam1, get_entity_coords(iParam5, true, false), 3);
			set_ped_combat_attributes(iParam1, 58, true);
			set_ped_combat_attributes(iParam1, 5, true);
			set_ped_combat_attributes(iParam1, 71, true);
			set_ped_combat_attributes(iParam1, 31, true);
			set_ped_combat_attributes(iParam1, 46, true);
			func_346(iParam1, iParam2, iVar0, 580546400, 0, 0);
			if (func_347(iParam1))
			{
				iParam4 = func_348(iParam1);
			}
			if (is_ped_human(iParam1))
			{
				bVar2 = func_349(iParam1, 0, 1, 0) != iParam4;
				if (bVar2)
				{
					_give_weapon_to_ped_2(iParam1, iParam4, 100, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
			}
			if (func_343(iParam4))
			{
				set_current_ped_weapon(iParam1, iParam4, true, 0, false, false);
			}
			open_sequence_task(&iVar1);
			if (is_ped_human(iParam1))
			{
				if (func_343(iParam4))
				{
					task_swap_weapon(0, 1, 0, 0, 0);
				}
				if (!is_ped_using_any_scenario(iParam1) && bVar2)
				{
					task_react(0, Global_35, 0f, 0f, 0f, func_350(), 0.5f, 0, 4);
				}
				if (!bVar2 && get_ped_config_flag(iParam1, 12, true))
				{
					_0x2416ec2f31f75266(0, iParam5, 0, 0, 0);
				}
			}
			task_combat_ped(0, iParam5, 0, 0);
			close_sequence_task(iVar1);
			_task_perform_sequence_2(iParam1, iVar1, 0.1f, 0.75f);
			clear_sequence_task(&iVar1);
		}
	}
}

int func_120(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, float fParam10)
{
	bParam7 = (bParam7 || func_22(iParam0, 4096));
	iVar2 = 0;
	while (iVar2 < *uParam1)
	{
		if (!is_entity_dead(uParam1[iVar2]))
		{
			if (!func_351(uParam1[iVar2], &(iParam0->f_140)))
			{
				set_ped_config_flag(uParam1[iVar2], 146, false);
				set_ped_config_flag(uParam1[iVar2], 277, false);
				set_ped_config_flag(uParam1[iVar2], 178, true);
				set_ped_can_be_targetted(uParam1[iVar2], true);
				iVar3 = func_352(uParam1[iVar2], 0);
				if (func_155(iVar3))
				{
					func_62(iVar3, 1, 1);
				}
				_0xfc3db99c8144cd81(uParam1[iVar2], (*Global_1392194)[iParam0->f_136]->f_5, 0, 0, 0);
				if (func_353(uParam1[iVar2], (iParam5 == -1 || iVar1 < iParam5), (bParam8 || bParam7)))
				{
					if (bParam6)
					{
						_0x802092b07e3b1eea(uParam1[iVar2], Global_36, 3);
						clear_ped_tasks(uParam1[iVar2], 1, 0);
					}
					_0x802092b07e3b1eea(uParam1[iVar2], Global_36, 3);
					set_ped_relationship_group_hash(uParam1[iVar2], 1269650476);
					func_346(uParam1[iVar2], (*uParam2)[iVar2], 831283580, 580546400, 0, 0);
					set_ped_combat_attributes(uParam1[iVar2], 58, true);
					set_ped_combat_attributes(uParam1[iVar2], 5, true);
					set_ped_combat_attributes(uParam1[iVar2], 71, true);
					set_ped_combat_attributes(uParam1[iVar2], 31, true);
					if (func_347(uParam1[iVar2]))
					{
						iVar4 = func_348(uParam1[iVar2]);
					}
					if (is_ped_human(uParam1[iVar2]))
					{
						if (func_354((*uParam1)[iVar2], iVar4, (bParam8 || bParam7)))
						{
							_give_weapon_to_ped_2(uParam1[iVar2], iParam3, 100, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
							if (func_343(iVar4))
							{
								set_current_ped_weapon(uParam1[iVar2], iVar4, true, 0, false, false);
							}
						}
						set_ped_combat_attributes(uParam1[iVar2], 46, false);
					}
					else
					{
						set_ped_combat_attributes(uParam1[iVar2], 46, true);
					}
					open_sequence_task(&iVar0);
					if (is_ped_human(uParam1[iVar2]))
					{
						if (func_343(iVar4))
						{
							task_swap_weapon(0, 1, 0, 0, 0);
						}
						if (is_ped_in_any_vehicle(uParam1[iVar2], true))
						{
							task_leave_any_vehicle(0, 0, 0);
						}
						else if (iParam4 != 0)
						{
						}
						else if (!func_347(uParam1[iVar2]))
						{
							task_react(0, Global_35, 0f, 0f, 0f, func_350(), 0.5f, 0, 4);
						}
					}
					task_combat_ped(0, Global_35, 0, 0);
					close_sequence_task(iVar0);
					task_perform_sequence(uParam1[iVar2], iVar0);
					clear_sequence_task(&iVar0);
					iVar1++;
				}
				else
				{
					set_ped_relationship_group_hash(uParam1[iVar2], -401180987);
					if (bParam6)
					{
						_0x802092b07e3b1eea(uParam1[iVar2], Global_36, 3);
						clear_ped_tasks(uParam1[iVar2], 1, 0);
					}
					else
					{
						_0xeeed8fafec331a70(uParam1[iVar2], Global_36, 1);
					}
					set_ped_flee_attributes(uParam1[iVar2], 2, false);
					set_ped_flee_attributes(uParam1[iVar2], 1048576, false);
					set_ped_flee_attributes(uParam1[iVar2], 65536, false);
					open_sequence_task(&iVar0);
					if (is_ped_in_any_vehicle(uParam1[iVar2], true))
					{
						task_leave_any_vehicle(0, 0, 4160);
						_task_smart_flee_style_ped(0, Global_35, 4, 1, -1082130432, -1, 0);
					}
					else
					{
						_task_smart_flee_style_ped(0, Global_35, 4, 0, -1082130432, -1, 0);
					}
					close_sequence_task(iVar0);
					task_perform_sequence(uParam1[iVar2], iVar0);
					clear_sequence_task(&iVar0);
					set_ped_keep_task(uParam1[iVar2], true);
					func_355((*uParam1)[iVar2], iParam9, fParam10);
				}
			}
			else
			{
				set_blocking_of_non_temporary_events(uParam1[iVar2], true);
			}
		}
		iVar2++;
	}
	return iVar1;
}

int func_121(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, float fParam11)
{
	if (iParam5 > 0)
	{
		_0xf008e0ba1fe1d644(iParam5);
	}
	else
	{
		return iParam5;
	}
	bParam8 = (bParam8 || func_22(iParam0, 4096));
	if (iParam0->f_136 == 1)
	{
		func_160(&iVar4, &iVar5, func_9(1, 1048576));
	}
	else
	{
		func_161(iParam0->f_137, &iVar4, &iVar5, 1, 0);
	}
	iVar3 = iVar4;
	while (iVar3 <= iVar5)
	{
		if (!func_155(iVar3))
		{
		}
		else if (iVar3 == iParam0->f_138)
		{
		}
		else if (func_23(iVar3, 32))
		{
		}
		else
		{
			iVar6 = func_63(iVar3);
			if (!is_entity_dead(iVar6) && !func_351(iVar6, &(iParam0->f_140)))
			{
				(*uParam1)[iVar0] = iVar6;
				if (!is_entity_a_mission_entity(iVar6))
				{
					set_entity_as_mission_entity(iVar6, true, false);
				}
				set_ped_config_flag(iVar6, 146, false);
				set_ped_config_flag(iVar6, 246, true);
				set_ped_config_flag(iVar6, 178, true);
				set_ped_can_be_targetted(iVar6, true);
				func_62(iVar3, 1, 1);
				set_ped_config_flag(iVar6, 277, false);
				_0xfc3db99c8144cd81(iVar6, (*Global_1392194)[iParam0->f_136]->f_5, 0, 0, 0);
				if ((func_353(iVar6, (iParam3 == -1 || iVar1 < iParam3), (bParam9 || bParam8)) || iVar3 == 808) || iVar3 == 809)
				{
					_0x802092b07e3b1eea(iVar6, Global_36, 3);
					set_ped_relationship_group_hash(iVar6, 1269650476);
					func_346(iVar6, (*uParam2)[iVar0], 831283580, 580546400, 0, 0);
					set_ped_combat_attributes(iVar6, 58, true);
					set_ped_combat_attributes(iVar6, 5, true);
					set_ped_combat_attributes(iVar6, 71, true);
					set_ped_combat_attributes(iVar6, 31, true);
					if (func_347(iVar6))
					{
						iVar7 = func_348(iVar6);
					}
					if (is_ped_human(iVar6))
					{
						if (func_354(&iVar6, iVar7, (bParam9 || bParam8)))
						{
							_give_weapon_to_ped_2(iVar6, iParam4, 100, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
							if (func_343(iVar7))
							{
								set_current_ped_weapon(iVar6, iVar7, true, 0, false, false);
							}
						}
						set_ped_combat_attributes(iVar6, 46, false);
					}
					else
					{
						set_ped_combat_attributes(iVar6, 46, true);
					}
					open_sequence_task(&iVar2);
					if (func_343(iVar7))
					{
						task_swap_weapon(0, 1, 0, 0, 0);
					}
					if (is_ped_human(iVar6) && !func_347(iVar6))
					{
						task_react(0, Global_35, 0f, 0f, 0f, func_350(), 0.5f, 0, 4);
					}
					task_combat_ped(0, Global_35, 0, 0);
					close_sequence_task(iVar2);
					task_perform_sequence(iVar6, iVar2);
					clear_sequence_task(&iVar2);
					iVar1++;
				}
				else
				{
					_0xeeed8fafec331a70(iVar6, Global_36, 1);
					set_ped_relationship_group_hash(iVar6, -401180987);
					if ((bParam7 || func_279(iVar6, 1, 1) < 15f) || func_356())
					{
						clear_ped_tasks(iVar6, 1, 0);
						set_ped_config_flag(iVar6, 178, false);
						_task_smart_flee_style_ped(iVar6, Global_35, 4, 0, -1082130432, -1, 0);
						set_ped_keep_task(iVar6, true);
						func_355(&iVar6, iParam10, fParam11);
					}
					else
					{
						open_sequence_task(&iVar2);
						task_react(0, Global_35, 0f, 0f, 0f, func_350(), 0.5f, 0, 4);
						task_seek_cover_from_ped(0, Global_35, 1500, 0, 1, 1);
						task_cower(0, -1, 0, 0);
						close_sequence_task(iVar2);
						task_perform_sequence(iVar6, iVar2);
						clear_sequence_task(&iVar2);
						decor_set_bool(iVar6, "bCowering", true);
					}
				}
				iVar0++;
			}
		}
		iVar3++;
	}
	return iVar1;
}

int func_122(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_251(uParam0[iVar0], 0, 1))
		{
			if (decor_exist_on(uParam0[iVar0], "bCowering"))
			{
				if ((func_286(uParam0[iVar0], 0, iParam1, &(iParam1->f_28), 0, 0) || func_357(uParam0[iVar0], iParam1, &(iParam1->f_28), 0)) || func_358(uParam0[iVar0], Global_35, 1, 1) < 8f)
				{
					if (iParam1->f_28 != 32 || func_359((*uParam0)[iVar0], iParam1, 1097859072))
					{
						set_ped_relationship_group_hash(uParam0[iVar0], -401180987);
						_task_smart_flee_style_ped(uParam0[iVar0], Global_35, 4, 0, -1082130432, -1, 0);
						set_ped_keep_task(uParam0[iVar0], true);
						decor_remove(uParam0[iVar0], "bCowering");
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_123()
{
	iVar0 = 0;
	while (iVar0 < iVar742)
	{
		if ((!is_entity_dead(&(Local_2160.f_140[iVar0])) && !func_129(&(Local_2160.f_140[iVar0]), 518218985)) && !get_is_task_active(&(Local_2160.f_140[iVar0]), 3))
		{
			_task_smart_flee_style_ped(&(Local_2160.f_140[iVar0]), Global_35, 4, 0, -1082130432, -1, 0);
		}
		iVar0++;
	}
}

bool func_124(int iParam0, int iParam1, int* iParam2, bool bParam3)
{
	switch (iParam0->f_31)
	{
		case 0:
			if (is_entity_dead(iParam1))
			{
				iParam0->f_31 = 2;
				return true;
			}
			if (get_is_task_active(iParam1, 3))
			{
				iParam0->f_31 = 1;
			}
			break;
		case 1:
			if (is_entity_dead(iParam1))
			{
				iParam0->f_31 = 2;
				return true;
			}
			if ((!get_is_task_active(iParam1, 3) || has_anim_event_fired(iParam1, 277966886)) || is_ped_using_any_scenario(iParam1))
			{
				if (is_ped_using_any_scenario(iParam1))
				{
					_0x62fdad5e01d2dd47(iParam1, Global_36, 3, 0);
					clear_ped_tasks(iParam1, 1, 0);
				}
				func_119(iParam0, iParam1, iParam2, bParam3, 379542007, 0);
				iParam0->f_31 = 2;
				return true;
			}
			break;
		case 2:
			return true;
	}
	return false;
}

bool func_125()
{
	if (((!_does_anim_scene_exist(&(Local_1039[2])) || func_360(Local_1039[2])) || func_361(Local_1039[2], "COWER_R_LOOP")) || func_361(Local_1039[2], "COWER_L_LOOP"))
	{
		return true;
	}
	return false;
}

void func_126(int iParam0)
{
	iLocal_99 = (iLocal_99 - (iLocal_99 && iParam0));
}

bool func_127()
{
	if (!does_rayfire_map_object_exist(&(iLocal_1014[0])))
	{
		if (!is_entity_visible(Local_1157.f_690[24]->f_8))
		{
			set_entity_visible(Local_1157.f_690[24]->f_8, true);
		}
		if (get_entity_collision_disabled(Local_1157.f_690[24]->f_8))
		{
			set_entity_collision(Local_1157.f_690[24]->f_8, true, false);
		}
		return false;
	}
	if (!is_entity_visible(Local_1157.f_690[24]->f_8))
	{
		fVar0 = get_rayfire_map_object_anim_phase(&(iLocal_1014[0]));
		if (fVar0 > 0.9625f || get_state_of_rayfire_map_object(&(iLocal_1014[0])) == 10)
		{
			set_entity_visible(Local_1157.f_690[24]->f_8, true);
			set_entity_collision(Local_1157.f_690[24]->f_8, true, false);
			func_362(991016631);
		}
	}
	else if (get_entity_collision_disabled(Local_1157.f_690[24]->f_8))
	{
		fVar0 = get_rayfire_map_object_anim_phase(&(iLocal_1014[0]));
		if (fVar0 > 0.997f)
		{
			set_entity_collision(Local_1157.f_690[24]->f_8, true, false);
			func_363(-926795318);
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_128(int iParam0, bool bParam1, bool bParam2)
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

bool func_129(int iParam0, int iParam1)
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

bool func_130(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5)
{
	if (iParam0->f_136 == 1)
	{
		func_160(&iVar1, &iVar2, func_9(1, 1048576));
	}
	else
	{
		func_161(iParam0->f_137, &iVar1, &iVar2, 1, 0);
	}
	iVar0 = iVar1;
	while (iVar0 <= iVar2)
	{
		if (!func_155(iVar0))
		{
		}
		else if (func_23(iVar0, 32))
		{
		}
		else
		{
			iVar3 = func_63(iVar0);
			if (!does_entity_exist(iVar3))
			{
			}
			else if (!decor_exist_on(iVar3, "bPedAlreadyCounted"))
			{
				if (is_entity_dead(iVar3))
				{
					if (func_364(iParam0, iVar3))
					{
						decor_set_bool(iVar3, "bPedAlreadyCounted", true);
						*uParam3++;
						if (!func_22(iParam0, 32768))
						{
							func_43(iParam0, 32768);
						}
					}
				}
				else if (!func_22(iParam0, 32768))
				{
					if (has_entity_been_damaged_by_entity(iVar3, Global_35, 1, 1))
					{
						func_43(iParam0, 32768);
					}
				}
			}
		}
		iVar0++;
	}
	if (does_entity_exist(iParam5) && !decor_exist_on(iParam5, "bPedAlreadyCounted"))
	{
		if (is_entity_dead(iParam5))
		{
			if (func_364(iParam0, iParam5))
			{
				decor_set_bool(iParam5, "bPedAlreadyCounted", true);
				*uParam3++;
				if (!func_22(iParam0, 32768))
				{
					func_43(iParam0, 32768);
				}
			}
		}
		else if (!func_22(iParam0, 32768))
		{
			if (has_entity_been_damaged_by_entity(iParam5, Global_35, 1, 1))
			{
				func_43(iParam0, 32768);
			}
		}
	}
	iVar4 = 0;
	while (iVar4 < *uParam1)
	{
		if (does_entity_exist(uParam1[iVar4]) && !decor_exist_on(uParam1[iVar4], "bPedAlreadyCounted"))
		{
			if (is_entity_dead(uParam1[iVar4]))
			{
				if (func_364(iParam0, uParam1[iVar4]))
				{
					decor_set_bool(uParam1[iVar4], "bPedAlreadyCounted", true);
					*uParam3++;
					if (!func_22(iParam0, 32768))
					{
						func_43(iParam0, 32768);
					}
				}
			}
			else if (!func_22(iParam0, 32768))
			{
				if (has_entity_been_damaged_by_entity(uParam1[iVar4], Global_35, 1, 1))
				{
					func_43(iParam0, 32768);
				}
			}
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < *iParam2)
	{
		if (does_entity_exist(iParam2[iVar4]) && !decor_exist_on(iParam2[iVar4], "bPedAlreadyCounted"))
		{
			if (is_entity_dead(iParam2[iVar4]))
			{
				if (func_364(iParam0, iParam2[iVar4]))
				{
					decor_set_bool(iParam2[iVar4], "bPedAlreadyCounted", true);
					*uParam3++;
					if (!func_22(iParam0, 32768))
					{
						func_43(iParam0, 32768);
					}
				}
			}
			else if (!func_22(iParam0, 32768))
			{
				if (has_entity_been_damaged_by_entity(iParam2[iVar4], Global_35, 1, 1))
				{
					func_43(iParam0, 32768);
				}
			}
		}
		iVar4++;
	}
	if (*uParam3 >= iParam4)
	{
		return true;
	}
	return false;
}

void func_131(int iParam0)
{
	if (!func_365(&(iParam0->f_9[0])))
	{
		return;
	}
	iVar1 = &iParam0->f_9[0];
	func_366(&iVar1, 0, iParam0->f_4, 0, 0, 0, 0, 0);
	if (func_367(iVar1, 1))
	{
		iVar0 = 0;
		while (iVar0 < iParam0->f_3)
		{
			if (iVar0 < (iParam0->f_3 - 1))
			{
				iParam0->f_9[iVar0] = &iParam0->f_9[iVar0 + 1];
			}
			else
			{
				iParam0->f_9[iVar0] = -15;
			}
			iVar0++;
		}
		iParam0->f_1 = (iParam0->f_1 - 1);
		if (iParam0->f_1 <= 0)
		{
			iParam0->f_1 = 0;
			func_134(iParam0, 16);
			iParam0->f_4 = 30;
		}
	}
}

bool func_132(int iParam0, int iParam1)
{
	return func_368(iParam0->f_17, iParam1);
}

void func_133(var uParam0, int* iParam1, int* iParam2, var uParam3)
{
	if (is_entity_dead(*iParam1))
	{
		func_94(iParam1, uParam0, 0);
		return;
	}
	func_369(iParam1);
	if (func_132(iParam1, 4))
	{
		if (iParam1->f_13 < 7)
		{
			func_370(iParam1, 7);
		}
		func_134(iParam1, 4);
	}
	if (func_132(iParam1, 256))
	{
		func_371(iParam1, iParam2, uParam3, 0);
	}
	if (func_132(iParam1, 512) && iParam1->f_13 > 2)
	{
		if (iParam1->f_2 > 2)
		{
			iParam1->f_2 = 0;
			func_48(&(iParam1->f_6));
			func_370(iParam1, 2);
		}
		iParam1->f_2++;
		func_134(iParam1, 512);
	}
	switch (iParam1->f_13)
	{
		case 0:
			func_48(&(iParam1->f_6));
			if (*iParam1 == 0)
			{
				func_370(iParam1, 9);
				return;
			}
			if (is_entity_dead(*iParam1))
			{
				func_370(iParam1, 9);
				return;
			}
			iParam1->f_5 = func_352(*iParam1, 0);
			if (iParam1->f_5 != -1)
			{
				if (!func_263(iParam1->f_5, 0))
				{
					func_372(iParam1->f_5);
				}
			}
			if (iParam1->f_5 == -1 && !is_entity_a_mission_entity(*iParam1))
			{
				set_entity_as_mission_entity(*iParam1, true, false);
			}
			stop_current_playing_speech(*iParam1, 250);
			stop_ped_speaking(*iParam1, true);
			_0xa7dc9266ed6a4e51(*iParam1);
			_0x6b9c5c38838fb6e6(*iParam1);
			if (is_ped_ragdoll(*iParam1))
			{
				func_293(iParam1, 8);
			}
			if (!func_257(*iParam1, 1))
			{
				sVar1 = func_373(uParam0->f_136, -1);
				if (!is_string_null_or_empty(sVar1))
				{
					func_258(*iParam1, sVar1, 0);
				}
			}
			if (func_132(iParam1, 64))
			{
			}
			else if (iParam1->f_16 == 5)
			{
			}
			else if (func_374(*iParam1))
			{
				task_dismount_animal(*iParam1, 16777216, 0, 0, 0, 0);
			}
			else if (is_ped_in_any_vehicle(*iParam1, true))
			{
				task_leave_any_vehicle(*iParam1, 0, 0);
			}
			func_370(iParam1, 1);
			break;
		case 1:
			if (func_155(iParam1->f_5))
			{
				if (!func_263(iParam1->f_5, 0))
				{
					func_372(iParam1->f_5);
				}
			}
			if (func_375(&(iParam1->f_6)) < 5f && ((func_129(*iParam1, 501393341) || func_129(*iParam1, -828834893)) || func_129(*iParam1, 451360105)))
			{
				return;
			}
			func_48(&(iParam1->f_6));
			if (iParam1->f_16 == 5)
			{
				func_370(iParam1, 3);
				set_blocking_of_non_temporary_events(*iParam1, false);
				return;
			}
			if (is_entity_dead(*iParam1))
			{
				func_370(iParam1, 9);
				return;
			}
			if (!func_132(iParam1, 64))
			{
				_0x62fdad5e01d2dd47(*iParam1, Global_36, 3, 0);
				clear_ped_tasks(*iParam1, 1, 0);
				open_sequence_task(&iVar0);
				if (func_376(iParam1) && (func_377(*iParam1, Global_35, 1) > 9f || _0xcb690f680a3ea971(*iParam1, 4)))
				{
					task_go_to_entity(0, Global_35, -1, 5f, 2f, 2f, 0);
					task_stand_still(0, 500);
				}
				else
				{
					task_turn_ped_to_face_entity(0, Global_35, 0, -1082130432, -1082130432, -1082130432);
					task_stand_still(0, 500);
				}
				close_sequence_task(iVar0);
				task_perform_sequence(*iParam1, iVar0);
				clear_sequence_task(&iVar0);
			}
			func_378(249295937, *iParam1, 1);
			if (!is_string_null_or_empty(iParam1->f_20[0]))
			{
				if (func_132(iParam1, 32))
				{
					func_379(&(uParam0->f_35), iParam1->f_20[0], *iParam1, Global_35, 0, 0, 1, 1);
				}
				else
				{
					func_114(*iParam1, Global_35, iParam1->f_20[0], 0, -1082130432, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				}
			}
			else
			{
				func_114(*iParam1, Global_35, func_380(iParam1, 1), 0, -1082130432, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
			}
			if (iParam1->f_16 == 5)
			{
				func_370(iParam1, 3);
			}
			else
			{
				func_370(iParam1, 2);
			}
			break;
		case 3:
			if ((is_any_speech_playing(*iParam1) || !func_253(0, 1, *iParam1, 1)) || func_381(iParam1->f_20[0]))
			{
				return;
			}
			if (func_382(*iParam1, 1, 1, 1, 0, 0))
			{
				if (func_375(&(iParam1->f_6)) < 10f)
				{
					return;
				}
				else
				{
					func_293(iParam1, 2);
					func_370(iParam1, 9);
					return;
				}
			}
			func_370(iParam1, 5);
			break;
		case 4:
			if (func_155(iParam1->f_5))
			{
				if (!func_263(iParam1->f_5, 0))
				{
					func_372(iParam1->f_5);
				}
			}
			if ((is_any_speech_playing(*iParam1) || !func_253(0, 1, *iParam1, 1)) || func_381(iParam1->f_20[0]))
			{
				return;
			}
			if (func_382(*iParam1, 1, 1, 1, 0, 0))
			{
				if (func_375(&(iParam1->f_6)) < 10f)
				{
					return;
				}
				else
				{
					func_293(iParam1, 2);
					func_370(iParam1, 9);
					return;
				}
			}
			func_370(iParam1, 5);
			break;
		case 5:
			if (func_155(iParam1->f_5))
			{
				if (!func_263(iParam1->f_5, 0))
				{
					func_372(iParam1->f_5);
				}
			}
			if ((is_any_speech_playing(*iParam1) || !func_253(0, 1, *iParam1, 1)) || func_381(iParam1->f_20[0]))
			{
				return;
			}
			if (func_382(*iParam1, 1, 1, 1, 0, 0))
			{
				if (func_375(&(iParam1->f_6)) < 10f)
				{
					func_370(iParam1, 3);
					return;
				}
				else
				{
					func_293(iParam1, 2);
					func_370(iParam1, 9);
					return;
				}
			}
			func_48(&(iParam1->f_6));
			func_370(iParam1, 7);
			break;
		case 2:
			if (func_155(iParam1->f_5))
			{
				if (!func_263(iParam1->f_5, 0))
				{
					func_372(iParam1->f_5);
				}
			}
			if ((is_any_speech_playing(*iParam1) || !func_253(0, 1, *iParam1, 1)) || func_381(iParam1->f_20[0]))
			{
				return;
			}
			if (((iParam1->f_16 != 5 && func_375(&(iParam1->f_6)) < 25f) && func_129(*iParam1, 242628503)) && func_377(*iParam1, Global_35, 1) > 9f)
			{
				return;
			}
			if (is_entity_dead(*iParam1))
			{
				func_370(iParam1, 9);
				return;
			}
			if (!func_132(iParam1, 64))
			{
				switch (iParam1->f_16)
				{
					case -1:
					case 2:
					case 4:
						clear_ped_tasks(*iParam1, 1, 0);
						if (!func_132(iParam1, 4) && !_0xcb690f680a3ea971(*iParam1, 7))
						{
							task_confront(*iParam1, Global_35, 2);
						}
						break;
					case 0:
					case 1:
					case 3:
					case 6:
						break;
					case 7:
						if (func_132(iParam1, 16))
						{
							clear_ped_tasks(*iParam1, 1, 0);
							if (!func_132(iParam1, 4) && !_0xcb690f680a3ea971(*iParam1, 7))
							{
								task_confront(*iParam1, Global_35, 2);
							}
						}
						else
						{
							switch (iParam1->f_1)
							{
								case 1:
									clear_ped_tasks(*iParam1, 1, 0);
									break;
								case 2:
									clear_ped_tasks(*iParam1, 1, 0);
									if (!func_132(iParam1, 4) && !_0xcb690f680a3ea971(*iParam1, 7))
									{
										task_confront(*iParam1, Global_35, 2);
									}
									break;
							}
						}
						break;
					case 8:
						clear_ped_tasks(*iParam1, 1, 0);
						if (func_132(iParam1, 16))
						{
							task_aim_at_entity(*iParam1, Global_35, -1, 0, 0);
						}
						else
						{
							task_turn_ped_to_face_entity(*iParam1, Global_35, -1, -1082130432, -1082130432, -1082130432);
						}
						break;
				}
			}
			func_48(&(iParam1->f_6));
			func_378(249295937, *iParam1, 1);
			if (!is_string_null_or_empty(iParam1->f_20[1]))
			{
				if (func_132(iParam1, 32))
				{
					func_379(&(uParam0->f_35), iParam1->f_20[1], *iParam1, Global_35, 0, 0, 1, 1);
				}
				else
				{
					func_114(*iParam1, Global_35, iParam1->f_20[1], 0, -1082130432, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				}
			}
			else
			{
				func_114(*iParam1, Global_35, func_380(iParam1, 2), 0, -1082130432, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
			}
			switch (iParam1->f_16)
			{
				case 1:
				case 3:
				case 6:
				case 8:
					func_370(iParam1, 6);
					break;
				default:
					func_370(iParam1, 7);
					break;
			}
			break;
		case 6:
			if (func_155(iParam1->f_5))
			{
				if (!func_263(iParam1->f_5, 0))
				{
					func_372(iParam1->f_5);
				}
			}
			if (is_any_speech_playing(*iParam1) || !func_253(0, 1, *iParam1, 1))
			{
				return;
			}
			if ((!func_132(iParam1, 4) && func_129(*iParam1, -1942934348)) && func_375(&(iParam1->f_6)) < 5f)
			{
				return;
			}
			if (func_375(&(iParam1->f_6)) < 15f)
			{
				return;
			}
			func_48(&(iParam1->f_6));
			if (is_entity_dead(*iParam1))
			{
				func_370(iParam1, 9);
				return;
			}
			func_370(iParam1, 7);
			break;
		case 7:
			if (func_155(iParam1->f_5))
			{
				if (!func_263(iParam1->f_5, 0))
				{
					func_372(iParam1->f_5);
				}
			}
			if (is_any_speech_playing(*iParam1) || !func_253(0, 1, *iParam1, 1))
			{
				return;
			}
			if ((!func_132(iParam1, 4) && func_129(*iParam1, -1942934348)) && func_375(&(iParam1->f_6)) < 5f)
			{
				return;
			}
			if (iParam1->f_16 == 1 && does_entity_exist(func_383(Global_35)))
			{
				func_293(iParam1, 2);
			}
			func_48(&(iParam1->f_6));
			if (is_entity_dead(*iParam1))
			{
				func_370(iParam1, 9);
				return;
			}
			if (!func_132(iParam1, 64))
			{
				clear_ped_tasks(*iParam1, 1, 0);
			}
			func_370(iParam1, 8);
			break;
		case 8:
			if (func_155(iParam1->f_5))
			{
				if (!func_263(iParam1->f_5, 0))
				{
					func_372(iParam1->f_5);
				}
			}
			if (func_385(&(iParam1->f_6), func_384(iParam1)))
			{
				stop_ped_speaking(*iParam1, false);
				if (!func_132(iParam1, 64) && !func_132(iParam1, 128))
				{
					if (iParam1->f_5 != -1)
					{
						func_75(iParam1->f_5, 1);
					}
					else
					{
						set_ped_as_no_longer_needed(iParam1);
					}
				}
				func_370(iParam1, 9);
			}
			break;
		case 9:
			func_386(iParam1, iParam2, uParam3);
			func_94(iParam1, uParam0, 0);
			break;
	}
}

void func_134(int iParam0, int iParam1)
{
	func_199(&(iParam0->f_17), iParam1);
}

int func_135()
{
	if (iLocal_98 >= 4)
	{
		return func_387();
	}
	if (func_22(&Local_2160, 32))
	{
		if (iLocal_98 == 3 && !func_9(Local_2160.f_136, 32))
		{
			iVar0 = 0;
			while (iVar0 < Local_1157.f_1)
			{
				func_388(&iVar0);
				iVar0++;
			}
		}
		return 0;
	}
	func_389(&uLocal_734, 2);
	if (func_19(8192))
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			bVar3 = func_390(iVar1153, func_7(iVar1));
			if (bVar3)
			{
				func_391(iVar1, iVar2);
				iVar2++;
			}
			iVar1++;
		}
	}
	if (!func_115(512))
	{
		func_392();
		func_393();
	}
	if (!func_51(67108864))
	{
		func_394(0);
		func_395(0, 1, 1);
		func_58(67108864);
	}
	iVar4 = func_63(Local_2160.f_138);
	if (!is_entity_dead(iVar4))
	{
		if (iVar4 != iLocal_155)
		{
			iLocal_155 = iVar4;
			func_76(Local_750[0], 0);
		}
		func_65(&(Local_2160.f_35), iVar4, "EA_LCMP_Foreman", 0);
		func_396(&iVar4);
		set_ped_reset_flag(iVar4, 49, true);
	}
	if ((iLocal_98 == 1 || iLocal_98 == 2) || (iLocal_98 == 3 && func_5(Local_2160.f_136, 128)))
	{
		func_397(&iVar4);
	}
	if (iLocal_98 < 4)
	{
		func_398();
	}
	func_399();
	func_400(&iVar4);
	if (!func_19(128))
	{
		if (iLocal_98 == 3 && !func_5(Local_2160.f_136, 128))
		{
			func_401();
		}
		func_402();
		return 0;
	}
	func_403();
	if (func_19(16384))
	{
		func_404(iLocal_2505[0]);
	}
	if (!func_19(16) && !func_19(64))
	{
		bVar5 = func_19(1);
		func_406(iVar4, uLocal_2499[0], &Local_2160, func_19(262144), &bVar5, 1, func_405());
		func_13(1, bVar5);
	}
	if (does_entity_exist(&(iLocal_2502[0])) && !_0x53784cea0159439b(&(iLocal_2502[0])))
	{
		_0xd80faf919a2e56ea(&(iLocal_2502[0]), 1242644044);
	}
	func_407();
	if (func_19(64) && !func_19(4))
	{
		func_13(4, func_408(&iVar4, uLocal_2479[0]));
		return 0;
	}
	if (func_19(64) && func_19(4))
	{
		func_409(&iVar4);
		func_410(uLocal_2479[0]);
	}
	if (iLocal_98 == 1)
	{
		if (does_entity_exist(&(iLocal_2502[0])) && !_0x083d497d57b7400f(&(iLocal_2502[0])))
		{
			set_entity_coords(&(iLocal_2502[0]), Local_1157.f_304[0]->f_6, true, false, true, true);
			freeze_entity_position(&(iLocal_2502[0]), true);
			_0xba8818212633500a(&(iLocal_2502[0]), 0, 1);
		}
	}
	if (!func_19(32))
	{
		if (func_19(262144))
		{
			Local_2544.f_2[0] = "LOG_WRK02";
			if (!func_19(16))
			{
				switch (iLocal_98)
				{
					case 2:
					case 3:
						if (!func_19(-2147483648) && func_9(1, 2))
						{
							return func_411(&iVar4);
						}
						else
						{
							return func_412(&iVar4);
						}
						break;
					default:
						return func_412(&iVar4);
				}
			}
			else
			{
				return func_413(&iVar4);
			}
		}
		else
		{
			switch (iLocal_98)
			{
				case 1:
					if (!func_19(16))
					{
						return func_414(&iVar4);
					}
					else
					{
						return func_413(&iVar4);
					}
					break;
				case 2:
					if (!func_19(16))
					{
						if (!func_19(-2147483648) && func_9(1, 2))
						{
							return func_411(&iVar4);
						}
						else
						{
							return func_412(&iVar4);
						}
					}
					else
					{
						return func_413(&iVar4);
					}
					break;
				case 3:
					func_415(uLocal_2479[0], 0);
					func_415(uLocal_2479[1], 1);
					func_416();
					func_417();
					if (func_9(Local_2160.f_136, 256) || func_418(&iVar4))
					{
						return func_419(&iVar4);
					}
					break;
				case 4:
				case 5:
					return func_387();
			}
		}
	}
	return 0;
}

void func_136()
{
	func_420();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_421(iVar0) && !func_422(iVar0))
		{
			if (!does_rayfire_map_object_exist(&(iLocal_1014[iVar0])))
			{
				if (!(iVar0 == 0 && func_19(512)))
				{
				}
			}
			else
			{
				fVar1 = get_rayfire_map_object_anim_phase(&(iLocal_1014[iVar0]));
				if (fVar1 >= (func_423(iVar0) - 0.007544f) && fVar1 <= func_424(iVar0))
				{
					func_425();
				}
				switch (iVar1151)
				{
					case 0:
						if (fVar1 >= func_423(iVar0) && fVar1 < func_424(iVar0))
						{
							set_pad_shake(0, 400, func_426(iVar0));
							func_427(iVar0);
							_0x017492b2201e3428("SHOCKWAVE_TREE_FALL", func_428(iVar0));
							iVar2 = _get_last_mount(Global_35);
							if (!is_entity_dead(iVar2) && func_430(iVar2, func_429(iVar0), 1) < 10f)
							{
								_0xbae08f00021bffb2(iVar2, func_356());
							}
							iLocal_1153 = 1;
						}
						break;
					case 1:
						if (fVar1 >= func_424(iVar0))
						{
							add_shocking_event_at_position(-1905235087, func_428(iVar0), -1f, 100f, 100f, -1f, (30f + 5f), -1, -1);
							func_58(8192);
							set_pad_shake(0, 300, (func_426(iVar0) / 2));
							iLocal_1153 = 2;
						}
						break;
					case 2:
						func_109(&(iLocal_75[2]));
						func_109(&(iLocal_75[3]));
						iLocal_1153 = 0;
						break;
				}
			}
		}
		iVar0++;
	}
}

bool func_137()
{
	if (func_22(&Local_2160, 1024))
	{
		return true;
	}
	if (bVar2649)
	{
		return true;
	}
	if (iVar2646 == 1)
	{
		if (is_screen_faded_out())
		{
			return false;
		}
	}
	if (_0xcf45df50c7775f2a())
	{
		return false;
	}
	if (func_431(bVar2649))
	{
		return true;
	}
	return false;
}

bool func_138(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return false;
	}
	return true;
}

int func_139(int iParam0)
{
	if (!func_138(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 0:
			return 11;
		case 1:
			return 76;
		case 3:
			return 15;
		case 2:
			return 128;
		default:
			break;
	}
	return -1;
}

bool func_140(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

void func_141(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0] = (Global_23118[iParam0] || iParam1);
	}
	else
	{
		Global_1058888->f_40615[iParam0] = (Global_1058888->f_40615[iParam0] || iParam1);
	}
}

Vector3 func_142(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1410.538f, -223.0142f, 100.0121f;
		case 1:
			return -439.4129f, 498.0963f, 97.94115f;
		case 3:
			return -1577.892f, -915.5556f, 82.73499f;
		case 2:
			switch (iParam1)
			{
				case 1:
					return 2226.756f, 666.0685f, 94.00805f;
				case 2:
					return 2195.606f, 794.7285f, 106.9675f;
				case 3:
					return 1951.033f, 934.2983f, 116.3355f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_143(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_144(int iParam0, bool bParam1, bool bParam2)
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
		if (func_432())
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
		iVar0 = func_433(&(Global_1898164->f_1[0]));
		if (func_434(iVar0) && func_435((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_98(&(Global_1898164->f_1[0])))
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

bool func_145()
{
	return func_436(64);
}

bool func_146(int iParam0, bool bParam1)
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

bool func_147()
{
	return Global_1310750->f_16077 != 0;
}

int func_148()
{
	return Global_1310750->f_16071;
}

void func_149(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	if (!func_138(iParam0))
	{
		return;
	}
	func_439(iParam0, Global_40.f_9096[iParam0]->f_10, iParam1, iParam2, uParam3, uParam4);
}

bool func_150(int iParam0)
{
	if (!func_138(iParam0))
	{
		return false;
	}
	return Global_40.f_9096[iParam0]->f_3 > Global_40.f_9096[iParam0]->f_10;
}

int func_151(int iParam0)
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
			return 1;
		default:
			break;
	}
	return 0;
}

int func_152(int iParam0)
{
	switch (iParam0)
	{
		case -273223690:
		case 603685163:
		case 669657108:
		case 725623432:
		case 1679686673:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_153(int iParam0)
{
	switch (iParam0)
	{
		case -1721991356:
		case -1233681761:
		case 1500834021:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_154(int iParam0)
{
	switch (iParam0)
	{
		case 603685163:
		case 1679686673:
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_155(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

void func_156(int iParam0, int iParam1)
{
	if (!func_440(iParam0))
	{
		return;
	}
	(*Global_1888801)[iParam0]->f_19 = iParam1;
}

void func_157(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_199(&iParam1, 8192);
	}
	if (bParam3)
	{
		_0x2161278c6322f740(iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
	}
}

void func_158(var uParam0, bool bParam1)
{
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(uParam0, iVar0);
}

void func_159(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	iVar0 = 8;
	if (bParam1)
	{
		iVar0 |= 72;
	}
	if (bParam2)
	{
		iVar0 |= 131072;
	}
	if (bParam3)
	{
		iVar0 |= 24;
	}
	if (bParam4)
	{
		iVar0 |= 40;
	}
	if (bParam5)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(uParam0, iVar0);
}

void func_160(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		*iParam0 = 64;
		*iParam1 = 66;
	}
	else
	{
		*iParam0 = 67;
		*iParam1 = 68;
	}
}

bool func_161(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bVar0 = func_1() != -1;
	switch (iParam0)
	{
		case 76:
			*iParam1 = 0;
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
			*iParam1 = 69;
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
			*iParam1 = 137;
			*iParam2 = 324;
			if (bVar0)
			{
				*iParam2 = 142;
			}
			break;
		case 61:
			*iParam1 = 380;
			*iParam2 = 381;
			if (bVar0)
			{
				*iParam2 = 380;
			}
			break;
		case 78:
			*iParam1 = 382;
			*iParam2 = 431;
			if (bVar0)
			{
				*iParam2 = 384;
			}
			break;
		case 92:
			*iParam1 = 443;
			*iParam2 = 471;
			if (bVar0)
			{
				*iParam2 = 443;
			}
			break;
		case 26:
			*iParam1 = 472;
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
			*iParam1 = 508;
			*iParam2 = 553;
			if (bVar0)
			{
				*iParam2 = 509;
			}
			break;
		case 68:
			*iParam1 = 554;
			*iParam2 = 565;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 65:
			*iParam1 = 566;
			*iParam2 = 588;
			if (bVar0)
			{
				*iParam2 = 566;
			}
			break;
		case 69:
			*iParam1 = 589;
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
			*iParam1 = 503;
			*iParam2 = 506;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 93:
			*iParam1 = 613;
			*iParam2 = 625;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 95:
			*iParam1 = 626;
			*iParam2 = 641;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 97:
			*iParam1 = 642;
			*iParam2 = 643;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 3:
			*iParam1 = 644;
			*iParam2 = 656;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 6:
			*iParam1 = 657;
			*iParam2 = 658;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 32:
			*iParam1 = 325;
			*iParam2 = 344;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 82:
			*iParam1 = 659;
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
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 35:
			*iParam1 = 691;
			*iParam2 = 700;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 56:
			*iParam1 = 701;
			*iParam2 = 708;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			Jump @1704; //curOff = 935
			if (bParam4)
			{
				*iParam1 = 715;
			}
			else
			{
				*iParam1 = 715;
			}
			*iParam2 = 723;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			Jump @1704; //curOff = 977
			*iParam1 = 724;
			*iParam2 = 730;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			Jump @1704; //curOff = 1005
			*iParam1 = 736;
			*iParam2 = 740;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			Jump @1704; //curOff = 1033
			*iParam1 = 745;
			*iParam2 = 750;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			Jump @1704; //curOff = 1061
			*iParam1 = 751;
			*iParam2 = 754;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			Jump @1704; //curOff = 1089
			*iParam1 = 731;
			*iParam2 = 732;
			Jump @1704; //curOff = 1104
			*iParam1 = 741;
			*iParam2 = 743;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			Jump @1704; //curOff = 1132
			*iParam1 = 744;
			*iParam2 = 744;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			Jump @1704; //curOff = 1160
			*iParam1 = 755;
			*iParam2 = 763;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			Jump @1704; //curOff = 1188
			*iParam1 = 764;
			*iParam2 = 767;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			Jump @1704; //curOff = 1216
			*iParam1 = 733;
			*iParam2 = 735;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			Jump @1704; //curOff = 1244
			*iParam1 = 791;
			*iParam2 = 793;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			Jump @1704; //curOff = 1272
			*iParam1 = 768;
			*iParam2 = 772;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			Jump @1704; //curOff = 1300
			*iParam1 = 773;
			*iParam2 = 779;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			Jump @1704; //curOff = 1328
			*iParam1 = 432;
			*iParam2 = 442;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			Jump @1704; //curOff = 1356
			*iParam1 = 345;
			*iParam2 = 375;
			if (bVar0)
			{
				*iParam2 = 375;
			}
			Jump @1704; //curOff = 1382
			*iParam1 = 376;
			*iParam2 = 379;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			Jump @1704; //curOff = 1410
			*iParam1 = 783;
			*iParam2 = 790;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			Jump @1704; //curOff = 1438
			*iParam1 = 780;
			*iParam2 = 782;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			Jump @1704; //curOff = 1466
			*iParam1 = 794;
			*iParam2 = 798;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			Jump @1704; //curOff = 1494
			*iParam1 = 799;
			*iParam2 = 800;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			Jump @1704; //curOff = 1522
			*iParam1 = 801;
			*iParam2 = 801;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			Jump @1704; //curOff = 1550
			*iParam1 = 802;
			*iParam2 = 803;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			Jump @1704; //curOff = 1578
			*iParam1 = 804;
			*iParam2 = 806;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			Jump @1704; //curOff = 1606
			*iParam1 = 507;
			*iParam2 = 507;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			Jump @1704; //curOff = 1634
			*iParam1 = 807;
			*iParam2 = 833;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			Jump @1704; //curOff = 1662
			*iParam1 = 834;
			*iParam2 = 857;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			Jump @1704; //curOff = 1690
			*iParam1 = -1;
			*iParam2 = -1;
			if (*iParam1 == -1 || *iParam2 == -1)
			{
				return false;
			}
			return true;
		}

int func_162(int iParam0)
{
	if (!func_155(iParam0))
	{
		return 0;
	}
	if (!func_237(func_236(iParam0)))
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_167(iParam0)))
	{
		return 0;
	}
	_0x4f81ead1de8fa19b(func_167(iParam0));
	return 1;
}

int func_163(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_1() != -1)
	{
		return 1;
	}
	if (!func_440(iParam0))
	{
		return 1;
	}
	if (func_140(iParam0, 16))
	{
		return 1;
	}
	if (func_441(iParam0) && !func_442(iParam0))
	{
	}
	if (func_161(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (func_155(iParam1))
		{
			iVar0 = iParam1;
		}
		if (func_155(iParam2))
		{
			iVar1 = iParam2;
		}
		if (&Global_1897950 < iVar0 || &Global_1897950 > iVar1)
		{
			Global_1897950 = iVar0;
		}
		while (true)
		{
			if ((!func_441(iParam0) || func_442(iParam0)) || func_443(&Global_1897950))
			{
				func_238(&Global_1897950, 0);
			}
			Global_1897950 = &Global_1897950 + 1;
			iVar2++;
			if (&Global_1897950 > iVar1)
			{
				Global_1897950 = -1;
				return 1;
			}
			if (iVar2 >= 10 && !bParam3)
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_164(int iParam0)
{
	if (iParam0 == -1)
	{
		return true;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = func_445(func_444());
	if (func_368(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_368(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_368(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_368(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_368(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_368(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_368(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_368(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_368(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_368(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_368(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_368(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_368(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_368(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_368(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_368(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_368(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

int func_165(vector3 vParam0, bool bParam3)
{
	iVar1 = -1;
	fVar2 = 1E+08f;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!bParam3 || func_446(iVar0))
		{
			fVar3 = func_447(iVar0, vParam0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_166(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return false;
	}
	return true;
}

int func_167(int iParam0)
{
	if (!func_155(iParam0))
	{
		return 0;
	}
	return (*Global_1895087)[iParam0]->f_1;
}

void func_168(int iParam0)
{
	if (!func_155(iParam0))
	{
		return;
	}
	iVar0 = func_167(iParam0);
	func_448(iParam0);
	_0x7b204f88f6c3d287(iVar0);
	_0xfc77c5b44d5ff7c0(iVar0);
}

void func_169(int iParam0, int iParam1)
{
	if (func_1() != -1)
	{
		return;
	}
	if (!func_155(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (&Global_24887[iParam0] - (Global_24887[iParam0] && iParam1));
}

void func_170(int iParam0)
{
	Global_1898092->f_1 = (Global_1898092->f_1 || iParam0);
}

void func_171()
{
	if (!_does_volume_exist(&(iLocal_75[16])))
	{
		if (func_19(64))
		{
			iLocal_75[16] = _create_volume_cylinder_with_custom_name(-1390.451f, -274.8033f, 102.3449f, 0f, 0f, 0f, 4.622575f, 4.933644f, 4.047438f, "Appleseed - volRoadBlocking");
		}
		else if (iLocal_98 == 3 && !func_19(262144))
		{
			iLocal_75[16] = _create_volume_cylinder_with_custom_name(-1430.557f, -357.1499f, 111.7085f, 0f, 0f, 0f, 7.102352f, 6.564137f, 4.575559f, "Appleseed - volRoadBlocking");
		}
	}
}

void func_172()
{
	if (_does_volume_exist(&(iLocal_75[16])))
	{
		if (!func_51(4194304) && !func_274(2048))
		{
			vVar0 = { _0x3e2a25b2416dd67e(&(iLocal_75[16])) };
			func_450(_0xf70f00013a62f866(&(iLocal_75[16])), func_449(vVar0.x, vVar0.y), 0, 0, 4);
			_0xb03944057fd735ba(&(iLocal_75[16]), 4, 0);
			func_58(4194304);
		}
	}
}

void func_173(int iParam0)
{
	if (iLocal_98 == 3)
	{
		iParam0->f_1 = 2;
		iParam0->f_369[0]->f_6 = { -1403.06f, -269.28f, 98.71f };
		iParam0->f_369[0]->f_9 = -49f;
		iParam0->f_369[0]->f_1 = -1143398950;
		iParam0->f_369[1]->f_6 = { -1414.56f, -182f, 99.63f };
		iParam0->f_369[1]->f_9 = 40.7f;
		iParam0->f_369[1]->f_1 = -1143398950;
	}
}

void func_174(int iParam0)
{
	*iParam0 = 4;
	if (func_19(64))
	{
		iParam0->f_15[0]->f_6 = { -1413.793f, -240.7767f, 98.87817f };
		iParam0->f_15[0]->f_9 = 251.3227f;
		iParam0->f_15[0]->f_1 = func_451();
		iParam0->f_15[0]->f_3 = 1842387010;
		iParam0->f_15[1]->f_6 = { -1403.043f, -243.4083f, 99.37144f };
		iParam0->f_15[1]->f_9 = 214.3414f;
		iParam0->f_15[1]->f_1 = func_451();
		iParam0->f_15[2]->f_6 = { -1407.91f, -252.1218f, 99.3026f };
		iParam0->f_15[2]->f_9 = 354.953f;
		iParam0->f_15[2]->f_21 = 0;
		iParam0->f_15[2]->f_1 = func_451();
		iParam0->f_15[3]->f_6 = { -1415.464f, -251.052f, 100.0263f };
		iParam0->f_15[3]->f_9 = 323.5956f;
		iParam0->f_15[3]->f_21 = 1;
		iParam0->f_15[3]->f_1 = func_451();
	}
	iParam0->f_1 = 0;
	if (func_19(16384))
	{
		iParam0->f_1++;
	}
	if (iLocal_98 == 1 && func_19(131072))
	{
		Local_15[0]->f_4 = { -1376.811f, -220.7483f, 100.515f };
		Local_15[0]->f_10 = -22.2f;
	}
	else
	{
		Local_15[0]->f_4 = { -1261.942f, -304.2063f, 97.9132f };
		Local_15[0]->f_10 = 59.8051f;
	}
	if (func_19(32768))
	{
		Local_15[0]->f_11 = -1708097161;
		if (iLocal_98 == 1 && !func_19(131072))
		{
			Local_15[0]->f_12 = "LOG_WAGON01A";
		}
		iLocal_14 += 2;
	}
	*Local_15[0] = { -1372.528f, -209.3416f, 100.5443f };
	Local_15[0]->f_3 = 349.7721f;
	Local_15[0]->f_23 = 0;
	Local_15[0]->f_22 = 0;
	Local_15[0]->f_7 = { -1381.927f, -210.7938f, 102.3367f };
	iParam0->f_15[4]->f_6 = { -1416.878f, -211.8701f, 104.7347f };
	iParam0->f_15[4]->f_9 = 309.938f;
	if (func_19(32768))
	{
		*iParam0++;
		iParam0->f_15[4]->f_1 = func_451();
	}
	else
	{
		iParam0->f_15[4]->f_1 = 0;
	}
}

void func_175(int iParam0)
{
	func_174(iParam0);
	if (func_19(64))
	{
		iParam0->f_15[1]->f_6 = { -1403.043f, -243.4083f, 99.37144f };
		iParam0->f_15[1]->f_9 = 214.3414f;
		iParam0->f_15[1]->f_1 = func_451();
	}
	Local_15[1]->f_4 = { -1377.5f, -200.4f, 102.6f };
	Local_15[1]->f_10 = 77.9f;
	if (func_19(65536))
	{
		Local_15[1]->f_11 = -1708097161;
		iLocal_14 += 2;
	}
	*Local_15[1] = { -1400.617f, -124.2774f, 96.3551f };
	Local_15[1]->f_3 = 89f;
	Local_15[1]->f_23 = 1;
	Local_15[1]->f_25 = 1;
	if (func_19(65536))
	{
		Local_15[1]->f_12 = "LOG_WAGON02C";
	}
	if (func_19(32768))
	{
		Local_15[0]->f_12 = "LOG_WAGON01B";
	}
	*Local_15[0] = { -1373.148f, -219.672f, 99.51241f };
	iParam0->f_15[5]->f_6 = { -1376f, -197.6f, 102.1f };
	iParam0->f_15[5]->f_9 = 55.8f;
	if (func_19(65536))
	{
		*iParam0++;
		iParam0->f_15[5]->f_1 = func_451();
	}
	else
	{
		iParam0->f_15[5]->f_1 = 0;
	}
}

void func_176()
{
}

void func_177(int iParam0, bool bParam1)
{
	func_174(iParam0);
	func_175(iParam0);
	if (func_5(0, 128))
	{
		if (func_19(65536))
		{
			Local_15[1]->f_12 = "LOG_WAGON02C";
		}
		if (func_19(32768))
		{
			Local_15[0]->f_12 = "LOG_WAGON01C";
		}
	}
	else
	{
		iParam0->f_15[0]->f_6 = { -1389.931f, -265.0812f, 98.29932f };
		iParam0->f_15[0]->f_9 = -161.23f;
		iParam0->f_15[0]->f_1 = func_451();
		iParam0->f_15[1]->f_6 = { -1431.474f, -269.5809f, 102.2202f };
		iParam0->f_15[1]->f_9 = -148.66f;
		iParam0->f_15[1]->f_1 = func_451();
		if (!bParam1)
		{
			iParam0->f_15[2]->f_6 = { -1444.14f, -359.7078f, 114.5595f };
			iParam0->f_15[2]->f_9 = 49.7f;
			iParam0->f_15[2]->f_21 = 1;
			iParam0->f_15[2]->f_1 = func_451();
			iParam0->f_15[2]->f_3 = -1149853461;
			func_452(&(iParam0->f_15[2]->f_22));
			func_453(&(iParam0->f_15[2]->f_22));
			func_454(&(iParam0->f_15[2]->f_22));
			func_455(&(iParam0->f_15[2]->f_22));
			func_456(&(iParam0->f_15[2]->f_22));
			iParam0->f_15[3]->f_6 = { -1444.485f, -357.8756f, 114.8794f };
			iParam0->f_15[3]->f_9 = -145.8f;
			iParam0->f_15[3]->f_21 = 1;
			iParam0->f_15[3]->f_1 = func_451();
			iParam0->f_15[3]->f_3 = 307318431;
			func_452(&(iParam0->f_15[3]->f_22));
			func_453(&(iParam0->f_15[3]->f_22));
			func_454(&(iParam0->f_15[3]->f_22));
			func_455(&(iParam0->f_15[3]->f_22));
			func_456(&(iParam0->f_15[3]->f_22));
		}
		else
		{
			iParam0->f_15[2]->f_1 = 0;
			iParam0->f_15[2]->f_6 = { -1444.14f, -359.7078f, 114.5595f };
			iParam0->f_15[3]->f_1 = 0;
			iParam0->f_15[3]->f_6 = { -1444.485f, -357.8756f, 114.8794f };
		}
		iParam0->f_369[0]->f_6 = { -1468.629f, -379.8213f, 125.2618f };
		iParam0->f_369[0]->f_9 = -45.42f;
		iParam0->f_369[0]->f_1 = -1143398950;
		iParam0->f_369[1]->f_6 = { -1459.213f, -380.2958f, 122.0884f };
		iParam0->f_369[1]->f_9 = -6.39f;
		iParam0->f_369[1]->f_1 = -1143398950;
		iParam0->f_369[2]->f_6 = { -1449.054f, -341.1028f, 118.9559f };
		iParam0->f_369[2]->f_9 = -124.44f;
		iParam0->f_369[2]->f_1 = -1143398950;
		*iParam0 = 4;
		iParam0->f_1 = 3;
		Local_15[1]->f_11 = 0;
		Local_15[0]->f_11 = 0;
		iParam0->f_15[5]->f_1 = 0;
		iParam0->f_15[4]->f_1 = 0;
	}
}

void func_178()
{
	if (!iLocal_98 == 3 || func_5(Local_2160.f_136, 128))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if ((func_9(Local_2160.f_136, 512) && iLocal_98 == 2) && iVar0 == 0)
			{
				func_457(iVar0);
			}
			if (func_19(64) && iVar0 == 0)
			{
				Jump @118; //curOff = 96
			}
			else if (!func_458(iVar0))
			{
				func_459(&iVar0);
			}
			iVar0++;
		}
	}
}

void func_179()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_460(iVar0);
		iVar0++;
	}
}

void func_180()
{
	bVar0 = func_356();
	iVar1 = get_random_int_in_range(0, 3);
	if (iVar1 == 0 && get_random_float_in_range(0f, 1f) < 0.75f)
	{
		iVar1 = 1;
	}
	if (iLocal_98 == 1 && !func_5(Local_2160.f_136, 4))
	{
		bVar0 = false;
		iVar1 = 2;
	}
	if (bVar0)
	{
		iVar2 = 1;
	}
	iVar3 = iVar2;
	while (iVar3 <= 3)
	{
		if (iVar4 >= iVar1)
		{
			return;
		}
		iVar4++;
		func_461(&uLocal_1155, func_7(iVar3));
		iVar3 += 2;
	}
}

void func_181(int iParam0)
{
	func_336(iParam0, 0);
	func_188(iParam0, 0);
	func_186(iParam0, 1);
	func_191(iParam0, 1);
	func_187(iParam0, 0);
	func_196(iParam0, 1);
	func_462(iParam0, 1, 1, 1);
}

void func_182(int iParam0, float fParam1, bool bParam2)
{
	iParam0->f_22 = fParam1;
	if (bParam2)
	{
		func_463(iParam0, fParam1);
	}
}

void func_183(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_199(&(iParam0->f_1), 4);
	}
	else
	{
		func_143(&(iParam0->f_1), 4);
	}
}

void func_184(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_199(&(iParam0->f_1), 2);
	}
	else
	{
		func_143(&(iParam0->f_1), 2);
	}
}

void func_185(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_199(&(iParam0->f_1), 1);
	}
	else
	{
		func_143(&(iParam0->f_1), 1);
	}
}

void func_186(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_199(&(iParam0->f_1), 256);
	}
	else
	{
		func_143(&(iParam0->f_1), 256);
	}
}

void func_187(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_199(&(iParam0->f_1), 128);
	}
	else
	{
		func_143(&(iParam0->f_1), 128);
	}
}

void func_188(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_199(&(iParam0->f_1), 2048);
	}
	else
	{
		func_143(&(iParam0->f_1), 2048);
	}
}

void func_189(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_143(iParam0, 32);
	}
	else
	{
		func_199(iParam0, 32);
	}
}

void func_190(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_199(&(iParam0->f_1), 8);
	}
	else
	{
		func_143(&(iParam0->f_1), 8);
	}
}

void func_191(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_143(iParam0, 16);
	}
	else
	{
		func_199(iParam0, 67108864);
		func_199(iParam0, 16);
	}
}

void func_192(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_143(iParam0, 8);
	}
	else
	{
		func_199(iParam0, 8);
	}
}

void func_193(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_143(iParam0, 1024);
	}
	else
	{
		func_199(iParam0, 1024);
	}
}

void func_194(int iParam0, float fParam1)
{
	iParam0->f_19 = fParam1;
}

void func_195(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_143(iParam0, 128);
	}
	else
	{
		func_199(iParam0, 128);
	}
}

void func_196(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_143(iParam0, 256);
	}
	else
	{
		func_199(iParam0, 256);
	}
}

void func_197(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_143(iParam0, 2);
	}
	else
	{
		func_199(iParam0, 2);
	}
}

void func_198(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_143(iParam0, 131072);
	}
	else
	{
		func_199(iParam0, 131072);
	}
}

void func_199(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_200()
{
	if (func_115(512))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (_0x1ff441d7954f8709(&(uLocal_1020[iVar0])))
		{
			_0xd2b9c78537ed5759(&(uLocal_1020[iVar0]));
		}
		iVar0++;
	}
}

void func_201()
{
	_uilog_clear_cached_objective();
}

void func_202(int iParam0)
{
	Global_40.f_9096[iParam0]->f_9 = -1;
	Global_40.f_9096[iParam0]->f_10 = -1;
	func_15(iParam0, 32768);
}

void func_203(int iParam0)
{
	if (does_entity_exist(*iParam0))
	{
		uVar0 = _0x0139637a3bff8b6d(*iParam0, &uVar1);
		_0x946d46cd6dfb9742(get_player_index(), uVar1, uVar0);
	}
}

void func_204(int iParam0, int iParam1)
{
	if (!func_138(iParam0))
	{
		return;
	}
	if (!func_5(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_9096[iParam0]->f_4 = (Global_40.f_9096[iParam0]->f_4 - (Global_40.f_9096[iParam0]->f_4 && iParam1));
}

bool func_205(int iParam0)
{
	return func_305(iParam0) == 0;
}

bool func_206(int iParam0, bool bParam1)
{
	switch (func_305(iParam0))
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

bool func_207(int iParam0)
{
	return func_305(iParam0) == 7;
}

void func_208(int iParam0)
{
	Global_1898092->f_1 = (Global_1898092->f_1 - (Global_1898092->f_1 && iParam0));
}

void func_209()
{
	if (_does_volume_exist(&(iLocal_75[16])))
	{
		if (func_51(4194304))
		{
			vVar0 = { _0x3e2a25b2416dd67e(&(iLocal_75[16])) };
			func_464(_0xf70f00013a62f866(&(iLocal_75[16])), func_449(vVar0.x, vVar0.y), 4);
			_0x5a4e1a41e3a02ad0(&(iLocal_75[16]), 4, 0);
		}
	}
}

void func_210()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_465(func_428(iVar0), 0);
		iLocal_1014[iVar0] = 0;
		iVar0++;
	}
}

void func_211(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_466(iVar0, bParam0);
		iVar0++;
	}
}

void func_212(bool bParam0)
{
	set_ped_reset_flag(Global_35, 5, !bParam0);
	func_183(&Local_2160, bParam0);
	func_186(&Local_2160, bParam0);
}

bool func_213(int iParam0, int iParam1, bool bParam2, int iParam3)
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

int func_214(char* sParam0, bool bParam1)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (!prepare_music_event(sParam0))
		{
			return 0;
		}
	}
	if (trigger_music_event(sParam0))
	{
		return 1;
	}
	return 0;
}

void func_215(int iParam0, bool bParam1, bool bParam2)
{
	if (!is_entity_dead(iParam0))
	{
		if (is_entity_attached(iParam0))
		{
			detach_entity(iParam0, bParam1, bParam2);
		}
	}
}

void func_216(var uParam0)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return;
	}
	_delete_anim_scene(*uParam0);
}

void func_217(int iParam0, int iParam1, int iParam2)
{
	func_43(iParam2, 128);
	func_70(iParam0, 0);
	func_156(iParam2->f_137, 0);
	func_467(iParam2);
	func_42(iParam0, 2048);
	func_80(iParam2, 64);
	if (iParam2->f_137 == 76)
	{
		func_160(&iVar0, &iVar1, func_9(1, 1048576));
	}
	else
	{
		func_161(iParam2->f_137, &iVar0, &iVar1, 0, 0);
	}
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		set_ped_keep_task(func_63(iVar2), true);
		iVar2++;
	}
	Global_1898092->f_26.f_7 = iVar0;
	Global_1898092->f_26.f_8 = iParam2->f_29;
	Global_1898092->f_26.f_2 = iParam2->f_136;
	Global_1898092->f_26.f_1 = iParam2->f_137;
	func_170(512);
	iVar3 = 0;
	while (iVar3 < 26)
	{
		if (does_entity_exist(iParam1->f_690[iVar3]->f_8))
		{
			delete_object(&(iParam1->f_690[iVar3]->f_8));
		}
		iVar3++;
	}
	if (func_301(iParam2->f_32))
	{
		func_302(&(iParam2->f_32), 1, 1);
	}
	if (func_301(iParam2->f_33))
	{
		func_302(&(iParam2->f_33), 1, 1);
	}
	if (func_301(iParam2->f_34))
	{
		func_302(&(iParam2->f_34), 1, 1);
	}
	if ((*iParam1 + iParam1->f_1) > 0)
	{
		_0x7d4e70a67a651c71((*iParam1 + iParam1->f_1));
	}
	if (func_390(get_cause_of_most_recent_force_cleanup(), 1))
	{
		func_42(iParam2->f_136, 4194304);
	}
	func_468();
	if (func_22(iParam2, 65536))
	{
		set_player_control(get_player_index(), true, 0, false);
		display_radar(true);
		display_hud(true);
	}
}

void func_218(int iParam0)
{
	iVar0 = _0x62de46f061caa468();
	if (iParam0->f_3 > iVar0)
	{
		iParam0->f_3 = iVar0;
	}
	_0x7d4e70a67a651c71(iParam0->f_3);
	iParam0->f_3 = 0;
}

char* func_219()
{
	return "LOGCMP";
}

char* func_220()
{
	return "LCMPAUD";
}

bool func_221(bool bParam0)
{
	iVar0 = get_cause_of_most_recent_force_cleanup();
	if (bParam0)
	{
		return true;
	}
	if (func_469(iVar0))
	{
		return false;
	}
	if (func_470(iVar0, 1) || func_470(iVar0, 2))
	{
		return true;
	}
	return false;
}

void func_222(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_471() - fParam1);
	func_472(uParam0, 1);
	func_473(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_223(var uParam0, float fParam1)
{
	if (func_385(uParam0, fParam1))
	{
		func_265(uParam0);
		return true;
	}
	return false;
}

void func_224(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_225(&((*uParam0)[iVar0]->f_1));
		func_225(&((*uParam0)[iVar0]->f_12));
		iVar0++;
	}
}

void func_225(var uParam0)
{
	if (*uParam0 != 0)
	{
		request_model(*uParam0, false);
	}
}

void func_226()
{
	if (func_19(8192))
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			func_475(Local_1039[(9 + iVar0)], "script@proc@eventareas@appleseed@Tree_Saw", func_474(9), 0);
			iVar0++;
		}
	}
	if (func_19(16384))
	{
		func_475(Local_1039[6], "script@proc@eventareas@appleseed@Log_Drag", func_474(6), 0);
	}
	if (func_19(256))
	{
		func_475(Local_1039[7], "script@proc@eventareas@appleseed@Boom_Operator", func_474(7), 0);
		func_475(Local_1039[8], "script@proc@eventareas@appleseed@Boom_Spotter", func_474(8), 0);
	}
	if (func_19(64))
	{
		func_475(Local_1039[2], "script@proc@eventareas@appleseed@Tree_Fall", func_474(2), 0);
		func_475(Local_1039[3], "script@proc@eventareas@appleseed@Player_Help_A", func_474(3), 0);
		func_475(Local_1039[4], "script@proc@eventareas@appleseed@Player_Help_B", func_474(4), 0);
	}
	if (func_19(262144))
	{
		if (func_19(16))
		{
			func_476();
		}
		else if (func_9(1, 2) && !func_9(Local_2160.f_136, 16384))
		{
			func_475(Local_1039[0], "script@proc@eventareas@appleseed@Foreman_Stage2_talk", func_474(0), 0);
			func_475(Local_1039[5], "script@proc@eventareas@appleseed@Player_Give_Money", func_474(5), 0);
		}
		else
		{
			func_476();
		}
	}
	else
	{
		switch (iLocal_98)
		{
			case 1:
				if (func_19(16))
				{
					func_476();
				}
				else
				{
					func_475(Local_1039[5], "script@proc@eventareas@appleseed@Leadin@INT@Leadin_ILO", func_474(5), 0);
					func_475(Local_1039[0], "script@proc@eventareas@appleseed@Leadout@INT@Leadout_new", func_474(0), 0);
					func_475(Local_1039[1], "script@proc@eventareas@appleseed@Leadout@INT@Leadout_new", func_474(1), 0);
				}
				break;
			case 2:
				if (func_19(16))
				{
					func_476();
				}
				else if (func_9(1, 2) && !func_9(Local_2160.f_136, 16384))
				{
					func_475(Local_1039[0], "script@proc@eventareas@appleseed@Foreman_Stage2_talk", func_474(0), 0);
					func_475(Local_1039[5], "script@proc@eventareas@appleseed@Player_Give_Money", func_474(5), 0);
				}
				else
				{
					func_476();
				}
				break;
			case 3:
				func_475(Local_1039[0], "script@proc@eventareas@appleseed@Foreman_Orders", func_474(0), 0);
				func_475(Local_1039[1], "script@proc@eventareas@appleseed@Foreman_Stage3_Pay", func_474(1), 0);
				func_475(Local_1039[2], "script@proc@eventareas@appleseed@Player_Grab_Money", func_474(2), 0);
				func_475(Local_1039[3], "script@proc@eventareas@appleseed@Worker_Convo", func_474(3), 0);
				break;
		}
	}
}

void func_227()
{
	if (func_19(256))
	{
	}
	if (func_19(128))
	{
		if (func_19(64))
		{
			Local_1157.f_690[7]->f_7 = 799179000;
		}
		else
		{
			Local_1157.f_690[7]->f_7 = 0;
		}
		*Local_1157.f_690[7] = { func_477() };
		Local_1157.f_690[7]->f_3 = 89f;
		Local_1157.f_690[7]->f_10 = 0;
		if (func_19(64))
		{
			Local_1157.f_690[8]->f_7 = 799179000;
		}
		else
		{
			Local_1157.f_690[8]->f_7 = 0;
		}
		*Local_1157.f_690[8] = { func_477() };
		Local_1157.f_690[8]->f_3 = 89f;
		Local_1157.f_690[8]->f_10 = 0;
		if (func_19(64))
		{
			Local_1157.f_690[9]->f_7 = 799179000;
		}
		else
		{
			Local_1157.f_690[9]->f_7 = 0;
		}
		*Local_1157.f_690[9] = { func_477() };
		Local_1157.f_690[9]->f_3 = 89f;
		Local_1157.f_690[9]->f_10 = 0;
		if (func_19(64))
		{
			Local_1157.f_690[10]->f_7 = 927991752;
		}
		else
		{
			Local_1157.f_690[10]->f_7 = 0;
		}
		*Local_1157.f_690[10] = { func_477() };
		Local_1157.f_690[10]->f_3 = 89f;
		Local_1157.f_690[10]->f_10 = 0;
		if (func_19(64))
		{
			Local_1157.f_690[24]->f_7 = 581435710;
		}
		else
		{
			Local_1157.f_690[24]->f_7 = 0;
		}
		*Local_1157.f_690[24] = { -1402.82f, -270.8668f, 98.5585f };
		Local_1157.f_690[24]->f_3 = 74.57f;
		Local_1157.f_690[24]->f_10 = 0;
		func_478(&(Local_1157.f_690[24]->f_11), 64);
		if (func_19(64))
		{
			Local_1157.f_690[6]->f_7 = -770982987;
			*Local_1157.f_690[6] = { func_479() };
			Local_1157.f_690[6]->f_3 = 89f;
			Local_1157.f_690[6]->f_10 = 0;
		}
	}
	switch (iLocal_98)
	{
		case 1:
			Local_1157.f_690[12]->f_7 = 1246532592;
			*Local_1157.f_690[12] = { -1341.215f, -194.8321f, 102.4812f };
			Local_1157.f_690[12]->f_3 = 27f;
			Local_1157.f_690[12]->f_10 = 0;
			func_478(&(Local_1157.f_690[12]->f_11), 75);
			if (func_19(128))
			{
				Local_1157.f_690[0]->f_7 = 0;
				*Local_1157.f_690[0] = { func_477() };
				Local_1157.f_690[0]->f_3 = 89f;
				Local_1157.f_690[0]->f_10 = 0;
				if (!func_5(Local_2160.f_136, 128))
				{
					Local_1157.f_690[4]->f_7 = -1419711042;
				}
				else
				{
					Local_1157.f_690[4]->f_7 = 0;
				}
				*Local_1157.f_690[4] = { func_477() };
				Local_1157.f_690[4]->f_3 = 89f;
				Local_1157.f_690[4]->f_10 = 0;
				if (!func_5(Local_2160.f_136, 128))
				{
					Local_1157.f_690[3]->f_7 = 1547859810;
				}
				else
				{
					Local_1157.f_690[3]->f_7 = 0;
				}
				*Local_1157.f_690[3] = { func_477() };
				Local_1157.f_690[3]->f_3 = 89f;
				Local_1157.f_690[3]->f_10 = 0;
			}
			break;
		case 2:
			Local_1157.f_690[13]->f_7 = 343412282;
			*Local_1157.f_690[13] = { -1349.263f, -189.6734f, 99.9598f };
			Local_1157.f_690[13]->f_3 = 24f;
			Local_1157.f_690[13]->f_10 = 0;
			func_478(&(Local_1157.f_690[13]->f_11), 75);
			Local_1157.f_690[12]->f_7 = 2117892179;
			*Local_1157.f_690[12] = { -1342.864f, -201.941f, 101.154f };
			Local_1157.f_690[12]->f_3 = 25f;
			Local_1157.f_690[12]->f_10 = 0;
			func_478(&(Local_1157.f_690[12]->f_11), 75);
			Local_1157.f_690[25]->f_7 = -1443906703;
			*Local_1157.f_690[25] = { -1400.832f, -205.2252f, 101.8838f };
			Local_1157.f_690[25]->f_3 = 19.95f;
			Local_1157.f_690[25]->f_10 = 0;
			if (func_19(128))
			{
				if (func_9(1, 2))
				{
					Local_1157.f_690[3]->f_7 = -1473388640;
				}
				else
				{
					Local_1157.f_690[3]->f_7 = 0;
				}
				*Local_1157.f_690[3] = { func_477() };
				Local_1157.f_690[3]->f_4 = { 90f, 0f, -5.99f };
				Local_1157.f_690[3]->f_10 = 0;
				if (func_9(1, 2))
				{
					Local_1157.f_690[4]->f_7 = -1698780291;
				}
				else
				{
					Local_1157.f_690[4]->f_7 = 0;
				}
				*Local_1157.f_690[4] = { -1400.53f, -206.6157f, 102.7172f };
				Local_1157.f_690[4]->f_3 = -153.92f;
				Local_1157.f_690[4]->f_10 = 0;
				func_478(&(Local_1157.f_690[4]->f_11), 2);
				if (func_9(1, 2) || func_19(64))
				{
					Local_1157.f_690[6]->f_7 = -770982987;
					*Local_1157.f_690[6] = { func_479() };
					Local_1157.f_690[6]->f_3 = 89f;
					Local_1157.f_690[6]->f_10 = 0;
				}
			}
			break;
		case 3:
			Local_1157.f_690[13]->f_7 = 343412282;
			*Local_1157.f_690[13] = { -1349.263f, -189.6734f, 99.9598f };
			Local_1157.f_690[13]->f_3 = 24f;
			Local_1157.f_690[13]->f_10 = 0;
			func_478(&(Local_1157.f_690[13]->f_11), 75);
			Local_1157.f_690[12]->f_7 = 2117892179;
			*Local_1157.f_690[12] = { -1342.864f, -201.941f, 101.154f };
			Local_1157.f_690[12]->f_3 = 25f;
			Local_1157.f_690[12]->f_10 = 0;
			func_478(&(Local_1157.f_690[12]->f_11), 75);
			Local_1157.f_690[25]->f_7 = -1443906703;
			*Local_1157.f_690[25] = { -1400.832f, -205.2252f, 101.8838f };
			Local_1157.f_690[25]->f_3 = 19.95f;
			Local_1157.f_690[25]->f_10 = 0;
			if (func_19(128))
			{
				if (!func_5(Local_2160.f_136, 128) || (func_5(Local_2160.f_136, 128) && func_9(1, 2)))
				{
					Local_1157.f_690[3]->f_7 = -1473388640;
				}
				else
				{
					Local_1157.f_690[3]->f_7 = 0;
				}
				*Local_1157.f_690[3] = { func_477() };
				Local_1157.f_690[3]->f_3 = 89f;
				Local_1157.f_690[3]->f_10 = 0;
				if (!func_5(Local_2160.f_136, 128) || (func_5(Local_2160.f_136, 128) && func_9(1, 2)))
				{
					Local_1157.f_690[4]->f_7 = -1698780291;
				}
				else
				{
					Local_1157.f_690[4]->f_7 = 0;
				}
				*Local_1157.f_690[4] = { -1400.53f, -206.6157f, 102.7172f };
				Local_1157.f_690[4]->f_3 = -153.92f;
				Local_1157.f_690[4]->f_10 = 0;
				func_478(&(Local_1157.f_690[4]->f_11), 2);
				if (!func_5(Local_2160.f_136, 128) || func_9(1, 2))
				{
					Local_1157.f_690[6]->f_7 = -770982987;
				}
				else
				{
					Local_1157.f_690[6]->f_7 = 0;
				}
				*Local_1157.f_690[6] = { func_477() };
				Local_1157.f_690[6]->f_3 = 89f;
				Local_1157.f_690[6]->f_10 = 0;
				if (!func_5(Local_2160.f_136, 128))
				{
					Local_1157.f_690[7]->f_7 = -1971689092;
				}
				else
				{
					Local_1157.f_690[7]->f_7 = 0;
				}
				*Local_1157.f_690[7] = { func_477() };
				Local_1157.f_690[7]->f_3 = 89f;
				Local_1157.f_690[7]->f_10 = 0;
				if (!func_5(Local_2160.f_136, 128))
				{
					Local_1157.f_690[8]->f_7 = -1914893189;
				}
				else
				{
					Local_1157.f_690[8]->f_7 = 0;
				}
				*Local_1157.f_690[8] = { func_477() };
				Local_1157.f_690[8]->f_3 = 89f;
				Local_1157.f_690[8]->f_10 = 0;
				if (!func_5(Local_2160.f_136, 128))
				{
					Local_1157.f_690[9]->f_7 = -1914893189;
				}
				else
				{
					Local_1157.f_690[9]->f_7 = 0;
				}
				*Local_1157.f_690[9] = { func_477() };
				Local_1157.f_690[9]->f_3 = 89f;
				Local_1157.f_690[9]->f_10 = 0;
				if (!func_5(Local_2160.f_136, 128))
				{
					Local_1157.f_690[10]->f_7 = -1914893189;
				}
				else
				{
					Local_1157.f_690[10]->f_7 = 0;
				}
				*Local_1157.f_690[10] = { func_477() };
				Local_1157.f_690[10]->f_3 = 89f;
				Local_1157.f_690[10]->f_10 = 0;
				if (!func_5(Local_2160.f_136, 128))
				{
					Local_1157.f_690[11]->f_7 = -1914893189;
				}
				else
				{
					Local_1157.f_690[11]->f_7 = 0;
				}
				*Local_1157.f_690[11] = { func_477() };
				Local_1157.f_690[11]->f_3 = 89f;
				Local_1157.f_690[11]->f_10 = 0;
				if (!func_5(Local_2160.f_136, 128))
				{
					Local_1157.f_690[0]->f_7 = 171105065;
				}
				else
				{
					Local_1157.f_690[0]->f_7 = 0;
				}
				*Local_1157.f_690[0] = { func_480(0, 2) };
				Local_1157.f_690[0]->f_2 = (Local_1157.f_690[0]->f_2 - 5f);
				Local_1157.f_690[0]->f_3 = 89f;
				Local_1157.f_690[0]->f_10 = 0;
				func_478(&(Local_1157.f_690[0]->f_11), 67);
				if (!func_5(Local_2160.f_136, 128))
				{
					Local_1157.f_690[1]->f_7 = -1700886102;
				}
				else
				{
					Local_1157.f_690[1]->f_7 = 0;
				}
				*Local_1157.f_690[1] = { func_480(0, 3) };
				Local_1157.f_690[1]->f_2 = (Local_1157.f_690[1]->f_2 - 5f);
				Local_1157.f_690[1]->f_3 = 89f;
				Local_1157.f_690[1]->f_10 = 0;
				func_478(&(Local_1157.f_690[1]->f_11), 67);
			}
			break;
	}
	iVar3 = 0;
	while (iVar3 < 4)
	{
		bVar5 = func_390(iVar1153, func_7(iVar3));
		if (bVar5)
		{
			iVar0[iVar4] = iVar3;
			iVar4++;
		}
		if (iVar4 >= 2)
		{
		}
		else
		{
			iVar3++;
		}
	}
	iVar6 = 0;
	while (iVar6 < iVar4)
	{
		iVar7 = iVar6 * 4;
		if (iVar7 + 18 >= Local_1157.f_690 || iVar7 < 0)
		{
		}
		else
		{
			iVar3 = &iVar0[iVar6];
			if (func_19(8192))
			{
				(Local_1157.f_690[(15 + iVar7)])->f_7 = -396933308;
				(Local_1157.f_690[(16 + iVar7)])->f_7 = 622277464;
				(Local_1157.f_690[(17 + iVar7)])->f_7 = 2125915446;
				(Local_1157.f_690[(18 + iVar7)])->f_7 = 861227228;
			}
			else
			{
				(Local_1157.f_690[(15 + iVar7)])->f_7 = 0;
				(Local_1157.f_690[(16 + iVar7)])->f_7 = 0;
				(Local_1157.f_690[(17 + iVar7)])->f_7 = 0;
				(Local_1157.f_690[(18 + iVar7)])->f_7 = 0;
			}
			*(Local_1157.f_690[(15 + iVar7)]) = { func_481(iVar3) };
			(Local_1157.f_690[(15 + iVar7)])->f_3 = func_482(iVar3);
			(Local_1157.f_690[(15 + iVar7)])->f_10 = 0;
			*(Local_1157.f_690[(16 + iVar7)]) = { func_483(iVar3) };
			(Local_1157.f_690[(16 + iVar7)])->f_4 = { func_484(iVar3) };
			(Local_1157.f_690[(16 + iVar7)])->f_10 = 0;
			func_478(&((Local_1157.f_690[(16 + iVar7)])->f_11), 2);
			vVar8 = { _get_object_offset_from_coords(*(Local_1157.f_690[(16 + iVar7)]), (Local_1157.f_690[(16 + iVar7)])->f_3, 0.025f, -4.4039f, 0.041f) };
			*(Local_1157.f_690[(17 + iVar7)]) = { vVar8 };
			(Local_1157.f_690[(17 + iVar7)])->f_3 = (Local_1157.f_690[(16 + iVar7)])->f_3;
			(Local_1157.f_690[(17 + iVar7)])->f_10 = 0;
			vVar8 = { _get_object_offset_from_coords(*(Local_1157.f_690[(16 + iVar7)]), (Local_1157.f_690[(16 + iVar7)])->f_3, 0f, 6.3529f, -0.077f) };
			*(Local_1157.f_690[(18 + iVar7)]) = { vVar8 };
			(Local_1157.f_690[(18 + iVar7)])->f_3 = (Local_1157.f_690[(16 + iVar7)])->f_3;
			(Local_1157.f_690[(18 + iVar7)])->f_10 = 0;
			iVar6++;
		}
	}
	if (func_19(128))
	{
		if (func_19(16384))
		{
			Local_1157.f_690[2]->f_7 = -1035439448;
		}
		else
		{
			Local_1157.f_690[2]->f_7 = 0;
		}
		*Local_1157.f_690[2] = { -1410.311f, -227.9941f, 99.4013f };
		Local_1157.f_690[2]->f_3 = 100.36f;
		Local_1157.f_690[2]->f_10 = 0;
		if (func_19(16384))
		{
			Local_1157.f_690[14]->f_7 = 1410968406;
		}
		else
		{
			Local_1157.f_690[14]->f_7 = 0;
		}
		*Local_1157.f_690[14] = { -1404.688f, -227.0209f, 99.4983f };
		Local_1157.f_690[14]->f_3 = 94.76f;
		Local_1157.f_690[14]->f_10 = 0;
		if (func_19(16384))
		{
			Local_1157.f_690[23]->f_7 = 1481263968;
		}
		else
		{
			Local_1157.f_690[23]->f_7 = 0;
		}
		*Local_1157.f_690[23] = { -1412.52f, -227.139f, 99.815f };
		Local_1157.f_690[23]->f_3 = 129.6f;
		Local_1157.f_690[23]->f_10 = 1;
	}
	if ((func_19(262144) || func_19(16)) && func_324())
	{
		if (iLocal_98 != 3)
		{
			Local_1157.f_690[5]->f_7 = -1443906703;
		}
		else
		{
			Local_1157.f_690[5]->f_7 = 0;
		}
		iLocal_75[1] = _create_volume_box_with_custom_name(-1400.116f, -211.4299f, 103.0422f, 0f, 0f, 18.85407f, 1f, 1f, 2.328289f, "volChairSpawnBlock");
		_0x18262cafebb5fbe1(&(iLocal_75[1]), 0, 0, 0, -1, -1, 0);
		Local_1157.f_690[11]->f_7 = 1566690690;
		switch (iLocal_98)
		{
			case 1:
				Local_1157.f_690[11]->f_7 = 0;
				*Local_1157.f_690[11] = { -1399.87f, -212.58f, 102.43f };
				break;
			case 2:
				*Local_1157.f_690[11] = { -1399.06f, -210.58f, 104.42f };
				break;
			case 3:
				*Local_1157.f_690[11] = { -1399.06f, -210.58f, 104.42f };
				break;
		}
		Local_1157.f_690[11]->f_3 = 5f;
		Local_1157.f_690[11]->f_10 = 0;
		func_478(&(Local_1157.f_690[11]->f_11), 66);
	}
	else
	{
		Local_1157.f_690[5]->f_7 = 0;
	}
	*Local_1157.f_690[5] = { -1400.098f, -211.239f, 101.889f };
	Local_1157.f_690[5]->f_3 = 22f;
	Local_1157.f_690[5]->f_10 = 0;
	func_478(&(Local_1157.f_690[5]->f_11), 2);
}

void func_228(var uParam0)
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

void func_229()
{
	Local_1157.f_2 = 0;
	switch (iLocal_98)
	{
		case 1:
			Local_1157.f_304[0]->f_1 = -1710614406;
			Local_1157.f_304[0]->f_6 = { -1342.64f, -191.66f, 99.56f };
			Local_1157.f_304[0]->f_9 = 27f;
			func_478(&(Local_1157.f_304[0]->f_22), 129);
			Local_1157.f_2 = 1;
			break;
		case 2:
			if (!func_22(&Local_2160, 32))
			{
				if (func_19(256))
				{
					Local_1157.f_2++;
				}
			}
			if (func_9(1, 2) || func_9(Local_2160.f_136, 16384))
			{
				Local_1157.f_304[0]->f_6 = { -1400.716f, -226.2228f, 103.3883f };
				Local_1157.f_304[0]->f_9 = 298.1611f;
				Local_1157.f_304[0]->f_1 = -1708097161;
				iLocal_14 += 2;
				Local_1157.f_2++;
				if (func_19(262144))
				{
					Local_2544.f_2[0] = "LOG_WRK01B";
				}
			}
			break;
		case 3:
			if ((func_19(262144) && func_9(1, 2)) || func_9(Local_2160.f_136, 16384))
			{
				Local_1157.f_304[0]->f_6 = { -1400.716f, -226.2228f, 103.3883f };
				Local_1157.f_304[0]->f_9 = 298.1611f;
				Local_1157.f_304[0]->f_1 = -1708097161;
				iLocal_14 += 2;
				Local_1157.f_2++;
				if (func_19(262144))
				{
					Local_2544.f_2[0] = "LOG_WRK01B";
				}
			}
			if (!func_22(&Local_2160, 32))
			{
				if (func_19(256))
				{
					Local_1157.f_2++;
				}
			}
			break;
	}
}

void func_230()
{
	if (func_19(256))
	{
		sVar0 = "props_misc@appleseed_loader";
		func_485(sVar0, &uLocal_2414);
		sVar0 = "script_proc@event_area@appleseed@boom_lift";
		func_485(sVar0, &uLocal_2414);
	}
	if (func_19(8192))
	{
		sVar0 = "ai_react@male_stand@SMALL_VARIATIONS@IDLE_A";
		func_485(sVar0, &uLocal_2414);
		sVar0 = "script_proc@event_area@appleseed@tree_saw";
		func_485(sVar0, &uLocal_2414);
	}
	if (func_19(262144))
	{
		sVar0 = func_486();
		func_485(sVar0, &uLocal_2414);
		if (func_9(1, 2))
		{
			sVar0 = "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2";
			func_485(sVar0, &uLocal_2414);
		}
	}
	else
	{
		switch (iLocal_98)
		{
			case 1:
				break;
			case 2:
				sVar0 = "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2";
				func_485(sVar0, &uLocal_2414);
				break;
			case 3:
				sVar0 = "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE3_WOLF";
				func_485(sVar0, &uLocal_2414);
				break;
		}
	}
}

void func_231()
{
	request_collision_at_coord(func_487());
}

bool func_232()
{
	if (!func_488(&(Local_1157.f_690)))
	{
		return false;
	}
	return true;
}

bool func_233()
{
	if (iLocal_98 == 3 && !func_19(262144))
	{
		return _0x6bfbdc46139c45ab(func_487());
	}
	return true;
}

bool func_234(var uParam0)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_489((*uParam0)[iVar0]))
		{
			bVar1 = true;
		}
		iVar0++;
	}
	return !bVar1;
}

int func_235(int iParam0, var uParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, int iParam10)
{
	if (bParam6)
	{
		func_490(&vParam2, uParam1->f_22);
	}
	if (!bParam7 && func_491(uParam1))
	{
		iVar0 = _0xeaf682a14f8e5f53(uParam1->f_5, vParam2, bParam5, 1, 1, iParam9, iParam10);
		if (!does_entity_exist(iVar0))
		{
			iVar0 = func_492(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
		}
		else if (_is_metaped_outfit_request_valid(uParam1->f_5))
		{
			_release_metaped_outfit_request(uParam1->f_5);
		}
	}
	else
	{
		iVar0 = func_492(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
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
		if (!is_string_null_or_empty(&(uParam1->f_23)) && !func_493(iVar0))
		{
			func_258(iVar0, &(uParam1->f_23), 0);
		}
		if (func_493(iVar0))
		{
			set_animal_tuning_bool_param(iVar0, 48, true);
		}
		else
		{
			set_ped_config_flag(iVar0, 307, true);
		}
		if (func_494(&(uParam1->f_22)))
		{
			set_ped_can_ragdoll(iVar0, true);
			set_ped_to_ragdoll(iVar0, 1000, 1000, 1, false, false, false);
			set_ped_config_flag(iVar0, 186, !func_495(&(uParam1->f_22)));
			func_128(iVar0, func_496(&(uParam1->f_22)), 0);
		}
		else
		{
			request_ped_visibility_tracking(iVar0);
		}
		if (func_497(&(uParam1->f_22)))
		{
			freeze_entity_position(iVar0, true);
		}
		if (func_498(&(uParam1->f_22)))
		{
			func_499(iVar0, 1);
		}
		_0xa91e6cf94404e8c9(iVar0);
		set_ped_config_flag(iVar0, 6, func_500(&(uParam1->f_22)));
		set_ped_config_flag(iVar0, 393, true);
		if (!func_501(uParam1->f_22, 8192))
		{
			_set_entity_something(iVar0, true);
		}
		if (!func_493(iVar0))
		{
			func_503(iVar0, !func_502(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 4, func_504(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 297, !func_505(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 317, !func_505(&(uParam1->f_22)));
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

int func_236(int iParam0)
{
	if (!func_155(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0];
}

bool func_237(int iParam0)
{
	return iParam0 != 0;
}

int func_238(int iParam0, bool bParam1)
{
	if (!func_155(iParam0))
	{
		return 0;
	}
	if (!func_23(iParam0, 2))
	{
		return 0;
	}
	if (func_23(iParam0, 32) && !bParam1)
	{
		func_506(iParam0, _create_persistent_character(func_236(iParam0)));
		if (func_1() == -1)
		{
			if (func_23(iParam0, 2048))
			{
				_0x49a8c2cd97815215(func_167(iParam0));
				func_169(iParam0, 2048);
			}
			_0xfcc6db8dbe709bc8(func_167(iParam0));
		}
		return 0;
	}
	if (!func_507(iParam0) && func_1() == -1)
	{
		return 0;
	}
	if (_0x800df3fc913355f3(func_167(iParam0)))
	{
		func_169(iParam0, 128);
		return 1;
	}
	func_506(iParam0, _create_persistent_character(func_236(iParam0)));
	_0x4f81ead1de8fa19b(func_167(iParam0));
	if (func_23(iParam0, 2048))
	{
		_0x49a8c2cd97815215(func_167(iParam0));
		func_169(iParam0, 2048);
	}
	return 1;
}

bool func_239(int iParam0, bool bParam1)
{
	if (func_1() != -1)
	{
		return false;
	}
	if (!func_155(iParam0))
	{
		return false;
	}
	if (!_0x800df3fc913355f3(func_167(iParam0)))
	{
		return false;
	}
	if (bParam1 && !does_entity_exist(func_244(iParam0)))
	{
		return false;
	}
	return !_0xeb98b38ca60742d7(func_167(iParam0));
}

bool func_240(int iParam0)
{
	if (!func_155(iParam0))
	{
		return false;
	}
	if (_0x800df3fc913355f3(func_167(iParam0)))
	{
		_0x49a8c2cd97815215(func_167(iParam0));
		if (!does_entity_exist(_0x0cadc3a977997472(func_167(iParam0), 0)))
		{
			return false;
		}
	}
	return true;
}

bool func_241(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_242(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (!func_508(iParam0, 1))
	{
		return 0;
	}
	if (func_237(func_236(iParam0)))
	{
		iVar1 = func_167(iParam0);
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
	if ((bParam4 && !func_509(iParam0)) && !is_entity_dead(iVar0))
	{
		set_ped_config_flag(iVar0, 171, bParam5);
		set_entity_as_mission_entity(iVar0, true, true);
	}
	func_24(iParam0, 1);
	func_510(iParam0);
	if (bParam3)
	{
		func_24(iParam0, 16);
	}
	if (!bParam2)
	{
	}
	return iVar0;
}

void func_243(int iParam0, bool bParam1, bool bParam2)
{
	set_ped_config_flag(iParam0, 297, false);
	set_ped_config_flag(iParam0, 301, false);
	set_ped_config_flag(iParam0, 315, false);
	set_ped_config_flag(iParam0, 130, false);
	set_ped_config_flag(iParam0, 178, bParam2);
	set_ped_config_flag(iParam0, 330, false);
	set_ped_config_flag(iParam0, 317, bParam1);
}

int func_244(int iParam0)
{
	iVar0 = func_167(iParam0);
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

int func_245(int iParam0)
{
	if (!func_155(iParam0))
	{
		return 0;
	}
	return _0xa00df706c60173d1(Global_1895087[iParam0]);
}

Vector3 func_246()
{
	return 0f, 0f, 0f;
}

int func_247(vector3 vParam0, int iParam3, float fParam4, bool bParam5, int iParam6, int iParam7, bool bParam8)
{
	iVar4 = 1;
	if (iParam7 < 0 || iParam7 >= *iParam3)
	{
		iParam7 = (*iParam3 - 1);
	}
	iVar0 = iParam6;
	while (iVar0 <= iParam7)
	{
		if (bParam8 && does_entity_exist((*iParam3)[iVar0]->f_8))
		{
		}
		else if ((*iParam3)[iVar0]->f_7 != 0 && !func_501((*iParam3)[iVar0]->f_11, 16))
		{
			if (!has_model_loaded((*iParam3)[iVar0]->f_7))
			{
				iVar4 = 0;
			}
			else
			{
				if ((*iParam3)[iVar0]->f_9 != -1)
				{
					iVar8 = (*iParam3)[iVar0]->f_9;
					vVar5 = { get_offset_from_entity_in_world_coords((*iParam3)[iVar8]->f_8, *(*iParam3)[iVar0]) };
					if (func_501((*iParam3)[iVar0]->f_11, 64))
					{
						(*iParam3)[iVar0]->f_8 = create_object_no_offset((*iParam3)[iVar0]->f_7, vVar5, true, true, false, false);
					}
					else
					{
						(*iParam3)[iVar0]->f_8 = create_object((*iParam3)[iVar0]->f_7, vVar5, true, true, false, false, true);
					}
					attach_entity_to_entity((*iParam3)[iVar0]->f_8, (*iParam3)[iVar8]->f_8, 0, *(*iParam3)[iVar0], (*iParam3)[iVar0]->f_4, false, false, false, false, 2, true, false, false);
				}
				else
				{
					if (!func_501((*iParam3)[iVar0]->f_11, 8))
					{
						vVar5 = { _get_object_offset_from_coords(vParam0, fParam4, *(*iParam3)[iVar0]) };
					}
					else
					{
						vVar5 = { *(*iParam3)[iVar0] };
					}
					if (!func_501((*iParam3)[iVar0]->f_11, 128))
					{
						func_511(&vVar5, (*iParam3)[iVar0]->f_10);
					}
					if (func_501((*iParam3)[iVar0]->f_11, 64))
					{
						(*iParam3)[iVar0]->f_8 = create_object_no_offset((*iParam3)[iVar0]->f_7, vVar5, true, true, false, false);
					}
					else
					{
						(*iParam3)[iVar0]->f_8 = create_object((*iParam3)[iVar0]->f_7, vVar5, true, true, false, false, true);
					}
					if (func_241((*iParam3)[iVar0]->f_4))
					{
						vVar1 = { 0f, 0f, (*iParam3)[iVar0]->f_3 };
					}
					else
					{
						vVar1 = { (*iParam3)[iVar0]->f_4 };
					}
					if (func_501((*iParam3)[iVar0]->f_11, 4))
					{
						vVar1.f_2 = func_512((vVar1.z + fParam4));
					}
					set_entity_rotation((*iParam3)[iVar0]->f_8, vVar1, 2, true);
					if (!func_501((*iParam3)[iVar0]->f_11, 128))
					{
						if ((*iParam3)[iVar0]->f_10)
						{
							_0x9587913b9e772d29((*iParam3)[iVar0]->f_8, 0);
						}
					}
				}
				if (func_501((*iParam3)[iVar0]->f_11, 2))
				{
					freeze_entity_position((*iParam3)[iVar0]->f_8, true);
				}
				if (func_501((*iParam3)[iVar0]->f_11, 32))
				{
					set_entity_visible((*iParam3)[iVar0]->f_8, false);
				}
				if (bParam5)
				{
					set_entity_load_collision_flag((*iParam3)[iVar0]->f_8, 1);
					activate_physics((*iParam3)[iVar0]->f_8);
				}
				_0xa91e6cf94404e8c9((*iParam3)[iVar0]->f_8);
				vVar9 = { get_entity_coords((*iParam3)[iVar0]->f_8, true, false) };
			}
		}
		iVar0++;
	}
	return iVar4;
}

bool func_248(var uParam0, int iParam1, char* sParam2)
{
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < uParam0->f_97 && !bVar0)
	{
		if (are_strings_equal(sParam2, &((*uParam0)[iVar1]->f_1)))
		{
			(*uParam0)[iVar1] = iParam1;
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
		if (uParam0->f_97 < 24)
		{
			(*uParam0)[uParam0->f_97] = iParam1;
			StringCopy(&((*uParam0)[uParam0->f_97]->f_1), sParam2, 24);
			uParam0->f_97++;
			bVar0 = true;
		}
	}
	return bVar0;
}

bool func_249(int iParam0)
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

bool func_250(var uParam0)
{
	iVar0 = 0;
	if (func_513(uParam0->f_4, 1) > 120f)
	{
		iVar0 = 1;
	}
	else if (func_513(uParam0->f_4, 1) > 65f && !is_sphere_visible(uParam0->f_4, 4f))
	{
		iVar0 = 1;
	}
	else if (uParam0->f_25)
	{
		iVar0 = 1;
	}
	return iVar0;
}

bool func_251(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_514(iParam0, iParam1);
}

bool func_252(int iParam0, var uParam1, int iParam2, bool bParam3, float fParam4, bool bParam5, float fParam6, bool bParam7, float fParam8, bool bParam9)
{
	if (is_entity_dead(iParam0) || is_entity_dead(player_ped_id()))
	{
		return false;
	}
	if (func_377(player_ped_id(), iParam0, 1) < (fParam8 * fParam8))
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
	if (func_515(iParam0, bParam5))
	{
		if (func_516(vVar0, iParam0, uParam1, iParam2, bParam3, fParam4, bParam5, bParam7, bParam9))
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

bool func_253(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && does_entity_exist(iParam2))
	{
		if (!func_517(iParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_518(fParam0))
	{
		return false;
	}
	return true;
}

void func_254(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0] = (&Global_23118[iParam0] - (Global_23118[iParam0] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0] = (&Global_1058888->f_40615[iParam0] - (Global_1058888->f_40615[iParam0] && iParam1));
}

bool func_255(var uParam0)
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

bool func_256()
{
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 11)
	{
		if (_does_anim_scene_exist(&(Local_1039[iVar1])))
		{
			if (!func_519(Local_1039[iVar1]))
			{
				iVar0 = 0;
			}
			else
			{
				iVar1++;
			}
			return iVar0;
		}
	}
}

bool func_257(int iParam0, int iParam1)
{
	if (decor_exist_on(iParam0, "HAS_VOICE") && decor_get_bool(iParam0, "HAS_VOICE"))
	{
		return true;
	}
	if (iParam1 && _0xf0ee69f500952fa5(iParam0))
	{
		return true;
	}
	return false;
}

void func_258(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || func_251(iParam0, 0, 0))
	{
		decor_set_bool(iParam0, "HAS_VOICE", true);
		set_ambient_voice_name(iParam0, sParam1);
	}
}

int func_259()
{
	return 953851965;
}

char* func_260()
{
	return "PROP_HUMAN_SEAT_CHAIR_WHITTLE_MALE_C";
}

Vector3 func_261()
{
	return -1400.832f, -205.7252f, 101.8838f;
}

void func_262(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	bVar4 = is_entity_a_ped(iParam0);
	if (bVar4)
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		bVar3 = _get_ped_crouch_movement(iVar1);
		if (is_ped_ragdoll(iVar1))
		{
			_0x221f4d9912b7fe86(iVar1, 1);
		}
	}
	if (iParam0 == func_520(Global_35) && is_player_teleport_active())
	{
	}
	if (func_493(iParam0))
	{
		if (func_521(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_501(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_262(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_262(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_501(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_501(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_501(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_501(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_501(iParam5, 129))
	{
		if (func_501(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		set_entity_coords_no_offset(iParam0, vParam1, func_501(iParam5, 32), true, true);
		set_entity_heading(iParam0, fParam4);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_501(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_501(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_493(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_501(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_35 && !func_501(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

bool func_263(int iParam0, bool bParam1)
{
	if (func_1() != -1)
	{
		return false;
	}
	if (!func_155(iParam0))
	{
		return false;
	}
	if (!func_509(iParam0) && bParam1)
	{
		return false;
	}
	return func_23(iParam0, 1);
}

void func_264(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_155(iParam0))
	{
		return;
	}
	if (!func_23(iParam0, 1))
	{
		return;
	}
	if (!func_23(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_509(iParam0)) && func_522(iParam0))
	{
		return;
	}
	func_169(iParam0, 1);
	func_523(iParam0);
	if (func_237(func_236(iParam0)))
	{
		iVar0 = func_167(iParam0);
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
		func_169(iParam0, 16);
	}
	if (func_23(iParam0, 128) && !bParam3)
	{
		func_524(iParam0, 0);
	}
}

void func_265(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_266()
{
}

int func_267(int iParam0, int iParam1, int iParam2)
{
	if (((func_342(iParam0, 8388608) && func_342(iParam0, 1048576)) && func_342(iParam0, 2097152)) && func_342(iParam0, 4194304))
	{
		return -183018591;
	}
	iVar0 = _0xf8204ef17410bf43(-594562071, iParam1, iParam2, 0);
	iVar1 = _0xf8204ef17410bf43(970310034, iParam1, iParam2, 0);
	iVar2 = _0xf8204ef17410bf43(-1212426201, iParam1, iParam2, 0);
	iVar3 = _0xf8204ef17410bf43(860033945, iParam1, iParam2, 0);
	while (func_525(iVar3))
	{
		iVar4++;
		if (iVar4 >= 10)
		{
			iVar3 = 1845102363;
			Jump @189; //curOff = 164
		}
		else
		{
			iVar3 = _0xf8204ef17410bf43(860033945, iParam1, iParam2, 0);
		}
	}
	if (!func_344(iVar3))
	{
		iVar3 = -183018591;
	}
	iVar5 = 0;
	if (!func_342(iParam0, 8388608))
	{
		iVar5 = iVar0;
	}
	if (!func_342(iParam0, 1048576))
	{
		if (!func_343(iVar5) || _0xf2f585411e748b9c(iVar1, 0) > _0xf2f585411e748b9c(iVar5, 0))
		{
			iVar5 = iVar1;
		}
	}
	if (!func_342(iParam0, 2097152))
	{
		if (!func_343(iVar5) || _0xf2f585411e748b9c(iVar3, 0) > _0xf2f585411e748b9c(iVar5, 0))
		{
			iVar5 = iVar3;
		}
	}
	if (!func_342(iParam0, 4194304))
	{
		if (!func_343(iVar5) || _0xf2f585411e748b9c(iVar2, 0) > _0xf2f585411e748b9c(iVar5, 0))
		{
			iVar5 = iVar2;
		}
	}
	if (!func_343(iVar5))
	{
		return -183018591;
	}
	return iVar5;
}

int func_268(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_343(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
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
							if (func_343(iVar4) && iVar4 != iVar0)
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
	if (func_1() == -1 && !func_344(iVar0))
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
				if (func_344(-183018591))
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
		if (iParam0 != Global_35 && func_343(iVar0))
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
		func_526(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_527(iParam0, &iVar0, &fVar25);
		iVar0 = _give_weapon_to_ped_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_528(iVar0))
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

char* func_269(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 < 0)
			{
				iParam1 = 3;
			}
			iVar0 = get_random_int_in_range(0, iParam1);
			switch (iVar0)
			{
				case 0:
					return "0957_A_M_M_Rancher_White_02";
				case 1:
					return "0977_A_M_M_RoughTravellers_White_08";
				case 2:
					return "0807_S_M_M_Army_01_WHITE_02";
				default:
					break;
			}
			break;
		case 2:
			if (iParam1 < 0)
			{
				iParam1 = 4;
			}
			iVar0 = get_random_int_in_range(0, iParam1);
			switch (iVar0)
			{
				case 0:
					return "0948_A_M_M_Guard_White_AGGRESSIVE_03";
				case 1:
					return "0949_A_M_M_Guard_White_AGGRESSIVE_04";
				case 2:
					return "0955_A_M_M_Guard_White_AGGRESSIVE_10";
				case 3:
					return "0708_S_M_M_RaCRailGuards_01_WHITE_01";
				default:
					break;
			}
			break;
	}
	return "";
}

var func_270()
{
	if (func_164(64))
	{
		return uVar740;
	}
	return uVar741;
}

void func_271(int iParam0, bool bParam1)
{
	if (bParam1 || func_5(iParam0, 8192))
	{
		if (!_uilog_is_entry_registered(3, func_529(iParam0)))
		{
			return;
		}
		_uilog_remove_entry(3, func_529(iParam0));
		func_204(iParam0, 8192);
	}
}

void func_272(int iParam0)
{
	if (!func_5(iParam0, 8192))
	{
		_uilog_add_entry_hash(3, func_529(iParam0), func_142(iParam0, func_4(iParam0)), func_530(iParam0), func_531(iParam0), 0);
		_uilog_set_entry_icon_texture(3, func_529(iParam0), func_532(iParam0), func_533());
		_uilog_set_entry_brief_texture(3, func_529(iParam0), func_534(iParam0), func_535());
		func_42(iParam0, 8192);
	}
}

void func_273(int iParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4)
{
	_uilog_add_or_update_objective(3, func_529(iParam0), iParam1, sParam2, bParam3, false, false);
	if (bParam4)
	{
		func_537(func_536(iParam0), sParam2, func_533(), func_532(iParam0), 1433015236, 0, -1, -2, 0, 0, 0, 0, 1, 1, 0);
	}
}

bool func_274(int iParam0)
{
	return (Global_1898092->f_1 && iParam0) != 0;
}

void func_275(int iParam0, bool bParam1)
{
	if (!func_538(iParam0))
	{
		iVar0 = func_139(iParam0);
		func_10(iParam0, 1);
		switch (iParam0)
		{
			case 0:
			case 2:
			case 3:
				func_539(iVar0, 0);
				break;
			case 1:
				_0xd8c7162ab2e2af45(-238119963);
				break;
		}
		if (bParam1)
		{
			func_540(iParam0, 0);
		}
	}
}

int func_276(bool bParam0)
{
	if (bParam0)
	{
		return func_541(Global_1359489->f_4);
	}
	get_group_size(func_542(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = get_ped_as_group_member(func_542(), iVar3);
		if (func_543(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

int func_277()
{
	iVar1 = _get_first_entity_ped_is_carrying(Global_35);
	if (!does_entity_exist(iVar1))
	{
		if (func_544(Global_35))
		{
			iVar1 = func_545(Global_35);
		}
		else if (func_546(Global_35))
		{
			iVar1 = func_547(Global_35);
		}
		else if (func_548(Global_35))
		{
			iVar1 = func_549(Global_35);
		}
	}
	if (!does_entity_exist(iVar1))
	{
		return iVar0;
	}
	if (!is_entity_a_ped(iVar1))
	{
		return iVar0;
	}
	iVar0 = get_ped_index_from_entity_index(iVar1);
	return iVar0;
}

void func_278(char* sParam0, int iParam1, var uParam2, bool bParam3)
{
	iVar0 = *sParam0;
	if (iVar0 > 8)
	{
		return;
	}
	func_550(&uVar1, iVar0, 1);
	if (bParam3)
	{
		uVar11 = &uVar1[0];
		iVar10 = 0;
		while (iVar10 < iVar0)
		{
			if (&uVar1[iVar10] == 0)
			{
				uVar1[0] = &uVar1[iVar10];
				uVar1[iVar10] = uVar11;
			}
			iVar10++;
		}
	}
	iVar10 = 0;
	iVar10 = 0;
	while (iVar10 < 4)
	{
		iVar12 = &uVar1[iVar10];
		uParam2->f_2[iVar10] = sParam0[iVar12];
		uParam2->f_7[iVar10] = iParam1[iVar12];
		iVar10++;
	}
}

float func_279(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return -1f;
	}
	return func_358(Global_35, iParam0, bParam1, bParam2);
}

void func_280(var uParam0, int iParam1, int iParam2)
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

void func_281(var uParam0, int iParam1, int iParam2)
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

char* func_282(int iParam0, int iParam1)
{
	if (func_132(iParam0, 16))
	{
		switch (iParam0->f_1)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						return "LCMP_AGGRO1";
					case 1:
						return "LCMP_AGGRO2";
					default:
						break;
				}
				break;
			default:
				switch (iParam1)
				{
					case 0:
						return "LCMP_AGGRO3";
					case 1:
						return "LCMP_AGGRO4";
					default:
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam0->f_16)
		{
			case 1:
				switch (iParam1)
				{
					case 0:
						return "LCMP_BODY1";
					case 1:
						return "LCMP_BODY2";
					default:
						break;
				}
				break;
			case 7:
				switch (iParam0->f_1)
				{
					case 0:
					case 1:
						switch (iParam1)
						{
							case 0:
								return "LCMP_STEAL1";
							case 1:
								return "LCMP_STEAL2";
							default:
								break;
						}
						break;
					default:
						switch (iParam1)
						{
							case 0:
								return "LCMP_STEAL3";
							case 1:
								return "LCMP_STEAL4";
							default:
								break;
						}
						break;
				}
				break;
		}
	}
	return "";
}

int func_283(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_551(bParam1, bParam2, bParam3);
	}
	if (Global_1572887->f_12 != -1)
	{
		if (iParam0 == Global_1225639->f_10)
		{
			if (!Global_1225639->f_11)
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

bool func_284(int iParam0, var uParam1)
{
	if (func_19(1048576))
	{
		if (((((func_357(func_63(Local_2160.f_138), iParam0, uParam1, 0) || ((iVar741 % 3) == 1 && func_552(&uLocal_2320, iParam0, uParam1, 0, (iVar728 / 3)))) || ((iVar741 % 3) == 2 && func_552(&uLocal_2320, iParam0, uParam1, (iVar728 / 3) + 1, (iVar728 * 2 / 3)))) || ((iVar741 % 3) == 0 && func_552(&uLocal_2320, iParam0, uParam1, (iVar728 * 2 / 3) + 1, iVar728))) || func_552(&uLocal_2479, iParam0, uParam1, 0, -1)) || func_552(&iLocal_2505, iParam0, uParam1, 0, -1))
		{
			return true;
		}
	}
	return false;
}

bool func_285()
{
	if (func_9(1, 2) || func_9(Local_2160.f_136, 16384))
	{
		if (does_entity_exist(&(iLocal_2502[0])) && func_553(Global_35, &(iLocal_2502[0]), 0))
		{
			if (func_9(Local_2160.f_136, 16384))
			{
				func_96(uLocal_2499[1]);
				return false;
			}
			else
			{
				func_555(3, 0, 0, func_554(), func_63(Local_2160.f_138), 0, 1065353216, 0);
				func_58(32768);
				return true;
			}
		}
	}
	if (func_19(65536))
	{
		if (does_entity_exist(&(uLocal_72[1])) && func_553(Global_35, &(uLocal_72[1]), 1))
		{
			func_555(3, 0, 0, func_554(), func_63(Local_2160.f_138), 0, 1065353216, 0);
			func_58(32768);
			return true;
		}
	}
	if (func_19(32768))
	{
		if (does_entity_exist(&(uLocal_72[0])) && func_553(Global_35, &(uLocal_72[0]), 1))
		{
			func_555(3, 0, 0, func_554(), func_63(Local_2160.f_138), 0, 1065353216, 0);
			func_58(32768);
			return true;
		}
	}
	return false;
}

bool func_286(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > iParam2->f_5)
	{
		func_556(iParam2, 1, iVar0);
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
			if (func_557(iParam0, iParam2))
			{
				*uParam3 = 128;
				func_558(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (func_559(iParam0, iParam2))
				{
					*uParam3 = 8;
					func_558(iParam0, iParam2, *uParam3);
					return true;
				}
				else if (func_560(iParam0, iParam1, iParam2))
				{
					*uParam3 = 8;
					func_558(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (func_561(iParam0, iParam2))
				{
					*uParam3 = 64;
					func_558(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_26 && func_283(player_id(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_558(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_562(iParam2, 1065353216))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (func_563(Global_35, iParam0, iParam2))
					{
						*uParam3 = 4;
						func_558(iParam0, iParam2, *uParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (func_564(Global_35, iParam0, iParam2))
					{
						*uParam3 = 256;
						func_558(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_565(Global_35, iParam0, iParam2, 0))
				{
					*uParam3 = 16;
					func_558(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			else if (func_565(Global_35, iParam0, iParam2, 1))
			{
				*uParam3 = 16;
				func_558(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (func_566(iParam0, iParam2))
				{
					*uParam3 = 32;
					func_558(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || iParam2->f_12 < 20f)
			{
				if (func_567(&iParam0, iParam2))
				{
					*uParam3 = 4096;
					func_558(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (func_568(iParam2, 4000))
				{
					if ((func_569(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && func_570(iParam2, iParam0)) && func_571(iParam2, iParam0))
					{
						*uParam3 = 2;
						func_558(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((func_569(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && func_570(iParam2, iParam0)) && func_571(iParam2, iParam0))
				{
					*uParam3 = 2;
					func_558(iParam0, iParam2, *uParam3);
					return true;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (func_572(iParam0, Global_1935630->f_41))
							{
								func_573();
								*uParam3 = 2;
								func_558(iParam0, iParam2, *uParam3);
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
						if (func_572(iParam0, Global_1935630->f_41))
						{
							func_573();
							*uParam3 = 2;
							func_558(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (func_574(iParam2, iParam0) || (iParam2->f_9 > 0 && (func_575() - iParam2->f_9) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_573();
						*uParam3 = 2;
						func_558(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (func_576())
					{
						if (func_572(iParam0, Global_1935630->f_42))
						{
							func_573();
							*uParam3 = 2;
							func_558(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (func_577(iParam2, iParam0))
			{
				*uParam3 = 1024;
				func_558(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (func_578(iParam0, iParam1, iParam2))
				{
					*uParam3 = 2048;
					func_558(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (func_579(iParam0, iParam2))
					{
						*uParam3 = 8192;
						func_558(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (func_580(iParam0, iParam2))
				{
					*uParam3 = 32768;
					func_558(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (func_581(iParam2, 4000))
				{
					if (func_582(&iParam0, iParam2))
					{
						*uParam3 = 512;
						func_558(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (func_583(iParam0, iParam2))
				{
					*uParam3 = 65536;
					iParam2->f_4 = 0;
					func_558(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_364(iParam2, iParam0))
			{
				*uParam3 = 1;
				func_558(iParam0, iParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

void func_287(int iParam0, var uParam1)
{
	if (iParam0->f_16 != 0 || *uParam1 != 0)
	{
		Global_1935630->f_30 = 0;
		Global_1935630->f_31 = 0;
		Global_1935630->f_25 = 0;
		Global_1935630->f_39 = 0;
		iParam0->f_8 = func_575();
		_0xeacebaae0a33fb3f(player_id());
	}
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	iParam0->f_5 = 0;
	iParam0->f_10 = 0;
	func_584(iParam0, 0);
	*uParam1 = 0;
	iParam0->f_16 = 0;
}

int func_288()
{
	if (!func_585(&Local_2160))
	{
		if (!func_586(Global_1935630->f_34[0]))
		{
			return 0;
		}
		func_43(&Local_2160, 4096);
	}
	return 1;
}

bool func_289()
{
	if (iLocal_98 != 3)
	{
		return false;
	}
	if (func_19(262144))
	{
		return false;
	}
	return false;
}

bool func_290(var uParam0)
{
	switch (*uParam0)
	{
		case 8:
		case 64:
		case 512:
		case 2048:
		case 8192:
		case 65536:
			return true;
		default:
			break;
	}
	return false;
}

int func_291(int iParam0)
{
	if (!is_entity_dead(func_63(Local_2160.f_138)))
	{
		if (func_587())
		{
			(*iParam0)[iVar0] = func_63(Local_2160.f_138);
			iVar0++;
		}
	}
	if (func_19(64))
	{
		if (!is_entity_dead(&(uLocal_2479[0])))
		{
			(*iParam0)[iVar0] = &uLocal_2479[0];
			iVar0++;
		}
		if (!is_entity_dead(&(iLocal_2505[0])))
		{
			(*iParam0)[iVar0] = &iLocal_2505[0];
			iVar0++;
		}
	}
	if (func_19(8192))
	{
		iVar2 = 0;
		while (iVar2 < 4)
		{
			bVar5 = func_390(iVar1152, func_7(iVar2));
			if (bVar5)
			{
				iVar1 = 0;
				while (iVar1 < 2)
				{
					iVar3 = func_326(9, iVar1, iVar6);
					iVar4 = func_63(iVar3);
					if (!is_entity_dead(iVar4))
					{
						(*iParam0)[iVar0] = iVar4;
						iVar0++;
					}
					iVar1++;
				}
				iVar6++;
			}
			iVar2++;
		}
	}
	if (iLocal_98 == 1 && !func_5(Local_2160.f_136, 64))
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 2)
		{
			iVar3 = func_326(6, iVar1, 0);
			iVar4 = func_63(iVar3);
			if (!is_entity_dead(iVar4))
			{
				(*iParam0)[iVar0] = iVar4;
				iVar0++;
			}
			iVar1++;
		}
	}
	if (func_19(256))
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 2)
		{
			iVar3 = func_326(7, iVar1, 0);
			iVar4 = func_63(iVar3);
			if (!is_entity_dead(iVar4))
			{
				(*iParam0)[iVar0] = iVar4;
				iVar0++;
			}
			iVar1++;
		}
	}
	if (iLocal_98 == 3 && !func_5(Local_2160.f_136, 64))
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 3)
		{
			iVar3 = func_326(0, iVar1, 0);
			iVar4 = func_63(iVar3);
			if (!is_entity_dead(iVar4))
			{
				(*iParam0)[iVar0] = iVar4;
				iVar0++;
			}
			iVar1++;
		}
	}
	if (iLocal_98 == 3 && !func_9(Local_2160.f_136, 16))
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 4)
		{
			iVar3 = func_326(3, iVar1, 0);
			iVar4 = func_63(iVar3);
			if (!is_entity_dead(iVar4))
			{
				(*iParam0)[iVar0] = iVar4;
				iVar0++;
			}
			iVar1++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar2502)
	{
		if (!is_entity_dead(&(iLocal_2505[iVar1])))
		{
			(*iParam0)[iVar0] = &iLocal_2505[iVar1];
			iVar0++;
		}
		iVar1++;
	}
	if (iLocal_98 == 3 && !func_19(262144))
	{
		(*iParam0)[iVar0] = &uLocal_2479[2];
		iVar0++;
		(*iParam0)[iVar0] = &uLocal_2479[3];
		iVar0++;
	}
	return iVar0;
	return 0;
}

void func_292(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	func_293(iParam0, 1);
	iVar0 = _get_lassoed_entity(Global_35);
	if (bParam5 || iParam0->f_1 < iParam0->f_3)
	{
		if (iParam0->f_1 >= 2)
		{
			func_293(iParam0, 16);
			iParam0->f_4 = 45;
		}
		if (iParam0->f_16 == -1)
		{
			switch (iParam2)
			{
				case 65536:
					iParam0->f_16 = 0;
					break;
				case 8:
					if (_0x268b3aebf032a88d(uParam1->f_10))
					{
						func_293(iParam0, 2);
						return;
					}
					if (func_588(iParam0, &(uParam1->f_10)))
					{
						func_293(iParam0, 2);
					}
					else
					{
						func_134(iParam0, 1);
					}
					return;
				case 64:
					if (func_588(iParam0, &(uParam1->f_10)))
					{
						func_293(iParam0, 2);
					}
					else
					{
						func_134(iParam0, 1);
					}
					return;
				case 2048:
					iParam0->f_16 = 4;
					break;
				case 8192:
					if (does_entity_exist(func_383(Global_35)))
					{
						iParam0->f_16 = 1;
					}
					else if (does_entity_exist(iVar0))
					{
						if (is_ped_male(iVar0))
						{
							iParam0->f_18 = 1;
						}
						else
						{
							iParam0->f_18 = 2;
						}
						iParam0->f_16 = 2;
					}
					else if (is_ped_planting_bomb(Global_35))
					{
						iParam0->f_16 = 3;
					}
					break;
				case 512:
				case 1024:
					iParam0->f_16 = 7;
					break;
			}
		}
		if (*iParam0 != 0)
		{
		}
		else if (iParam0->f_16 != 3 && uParam1->f_10 != 0)
		{
			*iParam0 = uParam1->f_10;
		}
		else if (!func_591(iParam0, iParam3, Global_36, 50f, func_589(iParam0), func_590(iParam0)))
		{
		}
		if (!does_entity_exist(*iParam0) || !is_ped_human(*iParam0))
		{
			return;
		}
		if (iParam0->f_1 < 3)
		{
			iParam0->f_9[iParam0->f_1] = func_444();
		}
		if (!bParam4)
		{
			iParam0->f_1++;
		}
	}
	else
	{
		func_293(iParam0, 2);
	}
}

void func_293(int iParam0, int iParam1)
{
	func_143(&(iParam0->f_17), iParam1);
}

int func_294(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = func_298(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_286(iParam0[*uParam3], 0, iParam1, uParam2, 0, 0))
		{
			return 1;
		}
		*uParam3++;
		if (*uParam3 > iParam5)
		{
			*uParam3 = iParam4;
		}
		iVar1++;
	}
	return 0;
}

bool func_295()
{
	if (func_325(Local_1039[6]))
	{
		iVar0 = 0;
		while (iVar0 < func_592(6))
		{
			iVar1 = func_63(func_326(6, iVar0, 0));
			if (iVar1 == Local_2160.f_10)
			{
				return true;
			}
			iVar0++;
		}
	}
	if (func_325(Local_1039[3]))
	{
		iVar0 = 0;
		while (iVar0 < func_592(3))
		{
			iVar1 = func_63(func_326(3, iVar0, 0));
			if (iVar1 == Local_2160.f_10)
			{
				return true;
			}
			iVar0++;
		}
	}
	if (func_325(Local_1039[7]))
	{
		iVar0 = 0;
		while (iVar0 < func_592(7))
		{
			iVar1 = func_63(func_326(7, iVar0, 0));
			if (iVar1 == Local_2160.f_10)
			{
				return true;
			}
			iVar0++;
		}
	}
	if (func_325(Local_1039[8]))
	{
		iVar0 = 0;
		while (iVar0 < func_592(8))
		{
			iVar1 = func_63(func_326(8, iVar0, 0));
			if (iVar1 == Local_2160.f_10)
			{
				return true;
			}
			iVar0++;
		}
	}
	iVar2 = 0;
	while (iVar2 < 2)
	{
		iVar3 = (9 + iVar2);
		if (func_325(Local_1039[iVar3]))
		{
			iVar4 = iVar2 * 2;
			iVar0 = 0;
			while (iVar0 < func_592(9))
			{
				iVar1 = func_63(func_326(9, iVar0, iVar4));
				if (iVar1 == Local_2160.f_10)
				{
					return true;
				}
				iVar0++;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_296(var uParam0, int iParam1, int iParam2)
{
	if (func_132(iParam1, 1))
	{
		return false;
	}
	if (!func_213(Global_35, (*Global_1392194)[uParam0->f_136]->f_6, 1, 0))
	{
		return false;
	}
	if ((func_593(Global_35, &iVar0, 4) && !is_model_a_ped(iVar0)) || _0xd04241bbf6d03a5e(Global_35) != 0)
	{
		if (func_591(&uVar1, iParam2, Global_36, 12.5f, 1, 120f))
		{
			*iParam1 = uVar1;
			iParam1->f_16 = 7;
			return true;
		}
	}
	return false;
}

bool func_297()
{
	bVar0 = false;
	bVar1 = false;
	if (_0x5407b7288d0478b7(Global_35, 512) > 0)
	{
		iVar2 = create_itemset(true);
		iVar3 = _0x7be607daff382fd2(Global_35, iVar2, 512);
		if (iVar3 > 0)
		{
			iVar4 = 0;
			while (iVar4 < iVar3)
			{
				bVar0 = false;
				bVar1 = false;
				iVar5 = _get_entity_from_item(get_indexed_item_in_itemset(iVar4, iVar2));
				if (is_entity_a_ped(iVar5))
				{
					iVar6 = get_ped_index_from_entity_index(iVar5);
					if (func_213(iVar6, (*Global_1392194)[Local_2160.f_136]->f_6, 1, 0))
					{
						bVar0 = true;
					}
					if (iVar6 == func_63(Local_2160.f_138))
					{
						bVar0 = true;
						bVar1 = true;
					}
					else if (func_351(iVar6, &uLocal_2320))
					{
						bVar0 = true;
						bVar1 = true;
					}
					else if (func_351(iVar6, &uLocal_2479))
					{
						bVar0 = true;
						bVar1 = true;
					}
					else
					{
						if (bVar0 && !bVar1)
						{
							if (!func_586(&iVar6))
							{
								bVar0 = false;
							}
						}
						iVar4++;
					}
					destroy_itemset(iVar2);
					if (bVar0 && !bVar1)
					{
						func_43(&Local_2160, 4096);
					}
					return bVar0;
				}
			}
		}
	}
}

int func_298(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_299(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (iParam1->f_4 == 0)
		{
			return false;
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
			return true;
		}
	}
	else if (fParam3 < 1.5f)
	{
		if (is_entity_touching_entity(iParam0, Global_35))
		{
			return true;
		}
	}
	return false;
}

void func_300(var uParam0, var uParam1)
{
	*uParam1 = 0;
	uParam0->f_10 = 0;
	uParam0->f_4 = 0;
}

bool func_301(int iParam0)
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

void func_302(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_301(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_594(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_595(iVar0);
	*uParam0 = 0;
}

void func_303(bool bParam0)
{
	iVar0 = 11;
	if (!func_596())
	{
		return;
	}
	if (_does_volume_exist(Global_1914319->f_3[iVar0]->f_25))
	{
		if (bParam0)
		{
			_delete_volume(Global_1914319->f_3[iVar0]->f_25);
		}
		else
		{
			Global_1914319->f_3[iVar0]->f_25 = 0;
		}
	}
	Global_1914319->f_3[iVar0]->f_23 = 0;
	func_597(11);
	func_598(101, 0);
	func_304(11, 4);
}

void func_304(int iParam0, int iParam1)
{
	if (!func_599(iParam0))
	{
		return;
	}
	Global_1914319->f_3[iParam0]->f_7 = (Global_1914319->f_3[iParam0]->f_7 - (Global_1914319->f_3[iParam0]->f_7 && iParam1));
}

int func_305(int iParam0)
{
	if (!func_98(iParam0))
	{
		return -1;
	}
	return func_308(iParam0);
}

bool func_306(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
		{
			return false;
		}
		iVar0 = Global_12106[iParam0]->f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
		{
			return false;
		}
		iVar0 = func_308(iParam0);
	}
	if (iVar0 == 1)
	{
		return true;
	}
	if (iVar0 == 2)
	{
		return true;
	}
	return false;
}

int func_307(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_5;
	}
	return Global_1058888->f_498[iParam0]->f_1;
}

int func_308(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_600(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_309(int iParam0)
{
	if (!func_98(iParam0))
	{
		return 0;
	}
	return func_602(func_601(iParam0));
}

void func_310(int iParam0, int iParam1, int iParam2)
{
	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_1() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	_0xd5910ecf81a2278c(iParam0, iParam1, iParam2, &vVar0);
}

bool func_311(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_312(int iParam0)
{
	switch (func_309(iParam0))
	{
		case 1:
			iVar0 = func_433(iParam0);
			return func_603(iVar0);
		case 8:
			iVar1 = func_433(iParam0);
			if (func_435((*Global_1347702)[iVar1]->f_12, 1))
			{
				return func_604(iVar1);
			}
			break;
	}
	return -1;
}

void func_313(bool bParam0)
{
	if (Global_1898077->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_1() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077->f_2 == 4 && Global_1898077->f_12 != Global_1898077->f_13) && !bParam0)
	{
		Global_1898077->f_1 = Global_1898077->f_2;
		Global_1898077->f_12 = Global_1898077->f_13;
		func_605(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_606();
		Global_1898077->f_9 = func_607(Global_1894899->f_2);
		func_608(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_314()
{
	if (!func_206((*Global_1835011)[4]->f_1, 1))
	{
		return 0;
	}
	else if (!func_206((*Global_1347702)[66]->f_15, 1))
	{
		return 1;
	}
	else if (!func_206((*Global_1347702)[67]->f_15, 1))
	{
		return 2;
	}
	else if (!func_206((*Global_1835011)[38]->f_1, 1))
	{
		return 3;
	}
	else if (!func_206((*Global_1347702)[68]->f_15, 1))
	{
		return 4;
	}
	else if (!func_206((*Global_1835011)[59]->f_1, 1))
	{
		return 5;
	}
	else if (!func_206((*Global_1835011)[67]->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_315(int iParam0, int iParam1)
{
	if (!func_98(iParam0))
	{
		return;
	}
	func_609(iParam0, iParam1);
}

int func_316(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

int func_317(bool bParam0)
{
	if (!bParam0 && func_610(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_318(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_319(int iParam0, bool bParam1)
{
	if (func_1() != -1)
	{
		return;
	}
	if (func_316(0) != iParam0)
	{
		return;
	}
	if (func_611(iParam0))
	{
		if (bParam1)
		{
			func_612(-525676072);
		}
		else
		{
			func_613(-525676072);
		}
	}
}

int func_320(int iParam0)
{
	return func_615(func_614(iParam0));
}

void func_321(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_322(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_323(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (iLocal_98 == 2)
			{
				return 0;
			}
			else if (iLocal_98 == 3)
			{
				return 0;
			}
			break;
		case 2:
			if (func_19(64))
			{
				return 2;
			}
			else if (iLocal_98 == 3)
			{
				return 2;
			}
			break;
		case 3:
			if (func_19(64))
			{
				return 3;
			}
			else if (iLocal_98 == 3)
			{
				return 3;
			}
			break;
		case 1:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
			return iParam0;
	}
	return -1;
}

bool func_324()
{
	return (iVar1145 == 0 || iVar1145 == 1);
}

bool func_325(var uParam0)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return false;
	}
	return _is_anim_scene_started(*uParam0, false);
}

int func_326(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 6:
			iVar0 = 814;
			break;
		case 9:
			iVar0 = 816;
			break;
		case 7:
			iVar0 = 820;
			break;
		case 0:
			iVar0 = 814;
			break;
		case 3:
			iVar0 = 817;
			break;
	}
	iVar0 = (iVar0 + (iParam1 + iParam2));
	return iVar0;
}

void func_327(var uParam0, int iParam1, char* sParam2)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return;
	}
	if (!func_616(uParam0, sParam2))
	{
		return;
	}
	remove_anim_scene_entity(*uParam0, sParam2, iParam1);
}

void func_328(int iParam0)
{
	if (iVar741 < 10)
	{
		if (!func_351(*iParam0, &(Local_2160.f_140)))
		{
			Local_2160.f_140[iVar741] = *iParam0;
			uLocal_744 = iVar741 + 1;
		}
	}
}

void func_329(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	if (!func_617(iParam0))
	{
		return;
	}
	iVar0 = func_618(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_619(iVar0);
	func_620(iVar0);
	iVar1 = get_id_of_this_thread();
	iVar2 = func_621(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_622(iVar0))
		{
			return;
		}
	}
	func_623(iVar0);
	set_ped_keep_task(iParam0, true);
	if (bParam1 && func_1() == -1)
	{
		if (!_0x88ad6cc10d8d35b2(iParam0))
		{
			set_entity_as_mission_entity(iParam0, true, true);
		}
	}
}

void func_330(int iParam0)
{
	iLocal_100 = (iLocal_100 - (iLocal_100 && iParam0));
}

void func_331(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

void func_332()
{
	_0xdd1232b332cbb9e7(4, 1, 0);
}

void func_333(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_138(iParam0))
	{
		return;
	}
	func_624(iParam0, &(Global_40.f_9096[iParam0]->f_10), iParam1, iParam2, iParam3, iParam4, bParam5);
}

void func_334(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		iParam0->f_1 = 0;
		func_335(iParam0, 1);
		func_192(iParam0, 1);
		func_191(iParam0, 1);
		func_189(iParam0, 1);
		func_625(iParam0, 1);
		func_193(iParam0, 1);
		func_626(iParam0, 1);
	}
	else
	{
		iParam0->f_1 = -1;
		func_335(iParam0, 0);
		func_192(iParam0, 0);
		func_191(iParam0, 0);
		func_189(iParam0, 0);
		func_625(iParam0, 0);
		func_193(iParam0, 0);
		func_626(iParam0, 0);
	}
}

void func_335(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_143(iParam0, 4);
	}
	else
	{
		func_199(iParam0, 4);
	}
}

void func_336(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_199(&(iParam0->f_1), 16384);
	}
	else
	{
		func_143(&(iParam0->f_1), 16384);
	}
}

int func_337(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
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
		if (func_627())
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
				if (func_279(iParam0, 1, 1) > fParam4)
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
			fVar1 = func_358(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_48(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!is_entity_dead(iParam1))
				{
					task_look_at_entity(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_628(iParam0, iParam1, fVar1, bParam13))
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
				iVar2 = func_59(func_629(iParam0, sParam2, iParam11, iParam1, network_is_game_in_progress(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

void func_338()
{
	if (func_325(Local_1039[2]))
	{
		fVar0 = func_630(Local_1039[2]);
		func_631(Local_1039[2], &fVar1, &vVar4);
		if (!is_entity_dead(&(uLocal_2479[0])) && has_anim_event_fired(&(uLocal_2479[0]), -615221946))
		{
			freeze_entity_position(&(uLocal_2479[0]), false);
			func_632(Local_1039[2], "PB_VIC_BRKOUT", 1);
			func_633(Local_1039[2], "RECOVERY_BOOL");
		}
		else if ((func_634(Local_1039[2], "PBL_IMPATIENT") || (func_634(Local_1039[2], "PBL_LIFT_SUCCESS") && fVar0 < 0.1855f)) || (func_634(Local_1039[2], "PBL_ENTER") && fVar0 > 0.8602f))
		{
			if (Global_36 < fVar1)
			{
				func_632(Local_1039[2], "PBL_COMBAT_L", 1);
				func_633(Local_1039[2], "bBreakInternalLoop");
			}
			else
			{
				func_632(Local_1039[2], "PBL_COMBAT_R", 1);
				func_633(Local_1039[2], "bBreakInternalLoop");
			}
			func_14(1024);
		}
		else
		{
			if (!is_entity_dead(func_63(Local_2160.f_138)))
			{
				func_327(Local_1039[2], func_63(Local_2160.f_138), "FOREMAN");
			}
			if (!is_entity_dead(func_63(810)))
			{
				func_327(Local_1039[2], func_63(810), "PED1");
			}
			if (!is_entity_dead(&(uLocal_2479[2])))
			{
				func_327(Local_1039[2], &(uLocal_2479[2]), "PED2");
			}
			if (!is_entity_dead(&(uLocal_2479[3])))
			{
				func_327(Local_1039[2], &(uLocal_2479[3]), "PED3");
			}
			if (!is_entity_dead(Local_1157.f_690[7]->f_8))
			{
				func_327(Local_1039[2], Local_1157.f_690[7]->f_8, "AXE1");
			}
			if (!is_entity_dead(Local_1157.f_690[8]->f_8))
			{
				func_327(Local_1039[2], Local_1157.f_690[8]->f_8, "AXE2");
			}
			if (!is_entity_dead(Local_1157.f_690[9]->f_8))
			{
				func_327(Local_1039[2], Local_1157.f_690[9]->f_8, "AXE3");
			}
			if (!is_entity_dead(Local_1157.f_690[10]->f_8))
			{
				func_327(Local_1039[2], Local_1157.f_690[10]->f_8, "CIGARETTE");
			}
			if (func_19(512))
			{
				if (Global_36 < fVar1)
				{
					func_632(Local_1039[2], "PBL_COMBAT_L", 1);
					func_633(Local_1039[2], "bBreakInternalLoop");
				}
				else
				{
					func_632(Local_1039[2], "PBL_COMBAT_R", 1);
					func_633(Local_1039[2], "bBreakInternalLoop");
				}
			}
			func_126(1024);
		}
	}
}

void func_339(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iParam0 > -1 && iParam0 != iVar0)
		{
		}
		else if (func_325(Local_1039[(9 + iVar0)]))
		{
			iVar1 = iVar0 * 4;
			iVar2 = iVar0 * 2;
			iVar3 = func_63(func_326(9, 0, iVar2));
			iVar4 = func_63(func_326(9, 1, iVar2));
			if (!is_entity_dead(iVar4))
			{
				iVar5 = iVar4;
			}
			else if (!is_entity_dead(iVar3))
			{
				iVar5 = iVar3;
				bVar6 = true;
			}
			else
			{
				func_327(Local_1039[(9 + iVar0)], (Local_1157.f_690[(15 + iVar1)])->f_8, "SAW");
				if (has_anim_event_fired((Local_1157.f_690[(15 + iVar1)])->f_8, -1984935666))
				{
					freeze_entity_position((Local_1157.f_690[(15 + iVar1)])->f_8, true);
				}
				func_216(Local_1039[(9 + iVar0)]);
			}
			else
			{
				if (!is_entity_dead(iVar3))
				{
					func_328(&iVar3);
				}
				if (!is_entity_dead(iVar4))
				{
					func_328(&iVar4);
				}
				iVar7 = func_635(iVar5, Global_35, 1060437492);
				if (bVar6)
				{
					switch (iVar7)
					{
						case 1:
							iVar7 = 0;
							break;
						case 0:
							iVar7 = 1;
							break;
						case 3:
							iVar7 = 2;
							break;
						case 2:
							iVar7 = 3;
							break;
					}
				}
				if (has_anim_event_fired(iVar5, -137640087))
				{
					iVar8 = 0;
				}
				else if (has_anim_event_fired(iVar5, -1300850144))
				{
					iVar8 = 1;
				}
				else if (has_anim_event_fired(iVar5, -1011860333))
				{
					iVar8 = 2;
				}
				else
				{
					if (!is_entity_dead(iVar3))
					{
						func_327(Local_1039[(9 + iVar0)], iVar3, "PED1");
					}
					if (!is_entity_dead(iVar4))
					{
						func_327(Local_1039[(9 + iVar0)], iVar4, "PED2");
					}
				}
				if (!is_string_null_or_empty(func_636(iVar8, iVar7)))
				{
					func_632(Local_1039[(9 + iVar0)], func_636(iVar8, iVar7), 1);
					func_633(Local_1039[(9 + iVar0)], "bBreakInternalLoop");
				}
				func_327(Local_1039[(9 + iVar0)], (Local_1157.f_690[(15 + iVar1)])->f_8, "SAW");
				if (has_anim_event_fired((Local_1157.f_690[(15 + iVar1)])->f_8, -1984935666))
				{
					freeze_entity_position((Local_1157.f_690[(15 + iVar1)])->f_8, true);
				}
			}
		}
		iVar0++;
	}
}

void func_340()
{
	if (is_entity_dead(func_63(Local_2160.f_138)))
	{
		return;
	}
	if (!func_325(Local_1039[0]))
	{
		return;
	}
	if (has_anim_event_fired(func_63(Local_2160.f_138), 465284456))
	{
		return;
	}
	set_entity_no_collision_entity(func_63(Local_2160.f_138), Local_1157.f_690[25]->f_8, false);
	func_632(Local_1039[0], "PBL_FOREMAN_STAGE2_COMBAT", 1);
	func_633(Local_1039[0], "bBreakInternalLoop");
	func_14(1024);
}

void func_341()
{
	if (!is_entity_dead(func_63(Local_2160.f_138)) && func_325(Local_1039[1]))
	{
		if (!has_anim_event_fired(func_63(Local_2160.f_138), 465284456))
		{
			set_entity_no_collision_entity(func_63(Local_2160.f_138), Local_1157.f_690[25]->f_8, false);
			func_632(Local_1039[1], "PBL_COMBAT", 1);
			func_633(Local_1039[1], "bBreakInternalLoop");
			func_14(1024);
		}
		else
		{
			set_entity_no_collision_entity(func_63(Local_2160.f_138), Local_1157.f_690[5]->f_8, false);
			func_216(Local_1039[1]);
		}
	}
	if (func_325(Local_1039[3]))
	{
		func_216(Local_1039[3]);
		activate_physics(Local_1157.f_690[7]->f_8);
	}
	if (func_325(Local_1039[0]))
	{
		func_216(Local_1039[0]);
	}
}

bool func_342(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_343(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_344(int iParam0)
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

void func_345(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	iVar0 = get_blip_from_entity(iParam0);
	func_96(&iVar0);
}

void func_346(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
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

bool func_347(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 30)
	{
		get_current_ped_weapon(iParam0, &iVar1, true, iVar0, true);
		if (!is_weapon_valid(iVar1))
		{
		}
		else if (!_is_weapon_two_handed(iVar1))
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_348(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 30)
	{
		get_current_ped_weapon(iParam0, &iVar1, true, iVar0, true);
		if (!is_weapon_valid(iVar1))
		{
		}
		else if (!_is_weapon_two_handed(iVar1))
		{
		}
		else
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_349(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

char* func_350()
{
	return "Default_Shocked";
}

bool func_351(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < *iParam1)
	{
		if (iParam0 == iParam1[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_352(int iParam0, bool bParam1)
{
	return func_637(iParam0, Global_1894899->f_2, bParam1);
}

bool func_353(int iParam0, bool bParam1, bool bParam2)
{
	if (func_347(iParam0))
	{
		return true;
	}
	if (is_ped_in_combat(iParam0, 0))
	{
		return true;
	}
	if (bParam2)
	{
		return false;
	}
	if (!bParam1)
	{
		return false;
	}
	if (!is_ped_male(iParam0))
	{
		return false;
	}
	fVar1 = func_279(iParam0, 1, 1);
	if (fVar1 < 30f)
	{
		fVar0 = 1f;
	}
	else if (fVar1 < 75f)
	{
		fVar0 = 0.7f;
	}
	else if (fVar1 < 150f)
	{
		fVar0 = 0.5f;
	}
	else
	{
		fVar0 = 0.3f;
	}
	fVar2 = get_random_float_in_range(0f, 1f);
	if (fVar2 <= fVar0)
	{
		return true;
	}
	return false;
}

bool func_354(int iParam0, int iParam1, bool bParam2)
{
	if (func_343(iParam1))
	{
		return true;
	}
	if (bParam2 && is_ped_in_combat(*iParam0, 0))
	{
		return false;
	}
	return true;
}

void func_355(int iParam0, int iParam1, float fParam2)
{
	if (is_ped_human(*iParam0))
	{
		fVar0 = get_random_float_in_range(0f, 1f);
		if (fVar0 < fParam2)
		{
			set_blocking_of_non_temporary_events(*iParam0, false);
			set_ped_config_flag(*iParam0, 146, false);
			set_ped_config_flag(*iParam0, 148, false);
			_0xc6c4e15cf7d52fea(*iParam0, 1000f);
			_0xf0b67bad53c35bd9(*iParam0, Global_35, *iParam0, Global_36, iParam1);
		}
	}
}

bool func_356()
{
	if (is_bit_set(get_random_int_in_range(0, 65536), 0))
	{
		return true;
	}
	return false;
}

bool func_357(int iParam0, int iParam1, var uParam2, float fParam3)
{
	iVar0 = get_frame_count();
	if (iVar0 > iParam1->f_5)
	{
		func_556(iParam1, 0, iVar0);
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
				if (func_568(iParam1, 4000))
				{
					if ((func_569(iParam0, Global_1935630->f_41, *iParam1 & 128 != 0, 0, *iParam1 & 256 != 0) && func_570(iParam1, iParam0)) && func_571(iParam1, iParam0))
					{
						func_573();
						*uParam2 = 2;
						func_558(iParam0, iParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!iParam1->f_1 & 2 != 0)
		{
			if (iParam1->f_12 < 4f)
			{
				if (func_568(iParam1, 4000))
				{
					if ((func_569(iParam0, Global_1935630->f_41, *iParam1 & 128 != 0, 1, *iParam1 & 256 != 0) && func_570(iParam1, iParam0)) && func_571(iParam1, iParam0))
					{
						func_573();
						*uParam2 = 2;
						func_558(iParam0, iParam1, *uParam2);
						return true;
					}
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*iParam1 & 131072 == 0)
						{
							if (func_572(iParam0, Global_1935630->f_41))
							{
								func_573();
								*uParam2 = 2;
								func_558(iParam0, iParam1, *uParam2);
								return true;
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
						if (func_572(iParam0, Global_1935630->f_41))
						{
							func_573();
							*uParam2 = 2;
							func_558(iParam0, iParam1, *uParam2);
							return true;
						}
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*iParam1 & 131072 == 0)
				{
					if (func_576())
					{
						if (func_572(iParam0, Global_1935630->f_42))
						{
							func_573();
							*uParam2 = 2;
							func_558(iParam0, iParam1, *uParam2);
							return true;
						}
					}
				}
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_562(iParam1, 1065353216))
			{
				if (!iParam1->f_1 & 4 != 0)
				{
					if (func_563(Global_35, iParam0, iParam1))
					{
						func_573();
						*uParam2 = 4;
						func_558(iParam0, iParam1, *uParam2);
						return true;
					}
				}
				if (!iParam1->f_1 & 256 != 0)
				{
					if (func_564(Global_35, iParam0, iParam1))
					{
						func_573();
						*uParam2 = 256;
						func_558(iParam0, iParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!iParam1->f_1 & 131072 != 0)
		{
			if (func_638(iParam0, iParam1))
			{
				func_573();
				*uParam2 = 131072;
				func_558(iParam0, iParam1, *uParam2);
				return true;
			}
		}
		if (*iParam1 & 4 != 0)
		{
			if (func_639(iParam0, iParam1))
			{
				func_573();
				*uParam2 = 262144;
				func_558(iParam0, iParam1, *uParam2);
				return true;
			}
		}
	}
	return false;
}

float func_358(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_359(var uParam0, int iParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_34)
	{
		if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
		{
			if (func_358(&(Global_1935630->f_34[iVar0]), *uParam0, 1, 1) < fParam2)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_360(var uParam0)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return true;
	}
	return _is_anim_scene_finished(*uParam0, false);
}

bool func_361(var uParam0, char* sParam1)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return false;
	}
	return _0x8d81e7824b7753f7(*uParam0, sParam1, 1);
}

void func_362(int iParam0)
{
	if (!_is_imap_active(iParam0))
	{
		_request_imap(iParam0);
	}
}

void func_363(int iParam0)
{
	if (_is_imap_active(iParam0))
	{
		_remove_imap(iParam0);
	}
}

bool func_364(int iParam0, int iParam1)
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

bool func_365(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_640(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_641(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_445(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_642(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_643(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_644(iParam0);
	if (iVar5 < 1 || iVar5 > func_645(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

void func_366(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_642(*iParam0);
	iVar1 = func_643(*iParam0);
	iVar2 = func_644(*iParam0);
	iVar3 = func_445(*iParam0);
	iVar4 = func_641(*iParam0);
	iVar5 = func_640(*iParam0);
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
	iVar6 = func_645(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_645(iVar1, iVar0);
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
	func_646(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_367(int iParam0, bool bParam1)
{
	return func_647(func_444(), iParam0, bParam1);
}

bool func_368(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_369(int* iParam0)
{
	if (iParam0->f_19 == 0)
	{
		if (does_entity_exist(func_383(Global_35)))
		{
			iParam0->f_19 = add_shocking_event_for_entity(67779789, Global_35, 999f, 5f, 5f, -1f, -1f, 180f, false, false, -1, -1);
		}
	}
	else if (!does_entity_exist(func_383(Global_35)))
	{
		remove_shocking_event(iParam0->f_19);
	}
}

void func_370(int* iParam0, int iParam1)
{
	iParam0->f_13 = iParam1;
}

void func_371(int* iParam0, int* iParam1, var uParam2, bool bParam3)
{
	if (iParam0->f_14 > 0)
	{
		iVar1 = func_649(iParam0, iParam1, 15f, uParam2, &uVar0, 0, 1, 0, 0, func_648(1, 0, 0), 0, 0, 2, 1, -1082130432, 0);
		if (iVar1 != -1)
		{
			iParam0->f_15 = iVar1;
		}
	}
	switch (iParam0->f_14)
	{
		case 0:
			if (bParam3 || iParam0->f_13 > 0)
			{
				if (!decor_exist_on(*iParam0, "bScriptedILO"))
				{
					decor_set_bool(*iParam0, "bScriptedILO", true);
				}
				func_651((*uParam2)[0], func_650(8), "", -163964935, 0, 0, 0, 1, 0);
				func_652((*uParam2)[0], 1, 0);
				func_653((*uParam2)[0], 0);
				func_651((*uParam2)[1], func_650(10), "", 648122183, 0, 0, 0, 1, 0);
				func_652((*uParam2)[1], 1, 0);
				func_653((*uParam2)[1], 0);
				func_651((*uParam2)[2], func_650(12), "", -1616532217, 0, 0, 0, 1, 0);
				func_652((*uParam2)[2], 0, 0);
				func_653((*uParam2)[2], 1);
				func_654(iParam0, 1);
			}
			break;
		case 1:
			if (!func_253(0, 1, Global_35, 1) || !func_253(0, 1, *iParam0, 1))
			{
				func_655(uParam2);
			}
			if (iParam0->f_15 != -1)
			{
				func_76(iParam1, 0);
				func_652((*uParam2)[0], 0, 0);
				func_652((*uParam2)[1], 0, 0);
				if (!is_string_null_or_empty(func_656(iParam0)))
				{
					func_114(Global_35, *iParam0, func_656(iParam0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				func_654(iParam0, 2);
			}
			break;
		case 2:
			if (func_253(0, 1, Global_35, 1) && func_253(0, 1, *iParam0, 1))
			{
				if (!is_string_null_or_empty(func_657(iParam0)))
				{
					func_114(*iParam0, Global_35, func_657(iParam0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				func_654(iParam0, 3);
			}
			break;
		case 3:
			if (func_253(0, 1, Global_35, 1) && func_253(0, 1, *iParam0, 1))
			{
				func_654(iParam0, 4);
			}
			break;
		case 4:
			break;
	}
}

bool func_372(int iParam0)
{
	return func_62(iParam0, 0, 1);
}

char* func_373(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 < 0)
			{
				iParam1 = 5;
			}
			iVar0 = get_random_int_in_range(0, iParam1);
			switch (iVar0)
			{
				case 0:
					return "0038_A_M_M_BiVWorker_01_WHITE_01";
				case 1:
					return "0977_A_M_M_RoughTravellers_White_08";
				case 2:
					return "0976_A_M_M_RoughTravellers_White_07";
				case 3:
					return "0807_S_M_M_Army_01_WHITE_02";
				case 4:
					return "0957_A_M_M_Rancher_White_02";
				default:
					break;
			}
			break;
		case 2:
			if (iParam1 < 0)
			{
				iParam1 = 2;
			}
			iVar0 = get_random_int_in_range(0, iParam1);
			switch (iVar0)
			{
				case 0:
					return "0880_A_M_M_Civ_Poor_Asian_AVOID_04";
				case 1:
					return "0113_S_M_M_RaCRailWorker_01_ASIAN_01";
				default:
					break;
			}
			break;
	}
	return "";
}

bool func_374(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	return is_ped_on_mount(iParam0);
}

float func_375(var uParam0)
{
	if (!func_658(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_659(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_471() - uParam0->f_1);
}

bool func_376(int* iParam0)
{
	return true;
}

float func_377(int iParam0, int iParam1, bool bParam2)
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
	return func_660(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
}

void func_378(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		allow_sonar_blips(true);
		force_sonar_blips_this_frame();
	}
	_trigger_sonar_blip_2(iParam0, iParam1);
}

int func_379(char[4] cParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	iParam3 = iParam3;
	iParam4 = iParam4;
	if (!is_entity_dead(iParam2) && (func_358(iParam2, iParam3, 1, 1) < 70f || bParam5))
	{
		StringCopy(&cVar0, sParam1, 24);
		if (bParam7)
		{
			task_look_at_entity(iParam2, iParam3, 7000, 0, 51, 0);
			if (func_358(iParam2, iParam3, 1, 1) < 25f)
			{
				task_look_at_entity(iParam3, iParam2, 7000, 0, 51, 0);
			}
		}
		if (iParam4 > 0)
		{
			iVar3 = 1;
		}
		func_48(&uLocal_0);
		if (_0xd89504d9d7d5057d(sParam1))
		{
			if (func_661(sParam1))
			{
				return 1;
			}
		}
		else if (func_662(cParam0, cVar0, iVar3, iParam4, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

var func_380(int* iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		if (iParam0->f_16 == 8 && func_356())
		{
			switch (iParam0->f_1)
			{
				case 1:
					return "WHATS_GOING_ON";
				case 2:
					return "GENERIC_CURSE_MED";
				case 3:
				default:
					break;
			}
			return "GENERIC_CURSE_HIGH";
		}
		else
		{
			switch (iParam0->f_1)
			{
				case 1:
					return "GENERIC_SHOCKED_DISBELIEF";
				case 2:
					return "GENERIC_CURSE_MED";
				case 3:
				default:
					break;
			}
			return "GENERIC_CURSE_HIGH";
		}
	}
	if (func_132(iParam0, 16))
	{
		StringCopy(&cVar0, "GET_LOST", 32);
	}
	else
	{
		switch (iParam0->f_16)
		{
			case -1:
			case default:
				StringCopy(&cVar0, "PLAYER_ACTING_WEIRD", 32);
				break;
			case 1:
				StringCopy(&cVar0, "GENERIC_ANGRY_REACTION", 32);
				break;
			case 2:
				StringCopy(&cVar0, "PLEAD_HOGTIED", 32);
				break;
			case 3:
				switch (iParam0->f_1)
				{
					case 1:
						StringCopy(&cVar0, "PLAYER_ACTING_WEIRD", 32);
						break;
					case 2:
					default:
						StringCopy(&cVar0, "GENERIC_ANGRY_REACTION", 32);
						break;
				}
				break;
			case 4:
				StringCopy(&cVar0, "WHATS_YOUR_PROBLEM", 32);
				break;
			case 6:
				StringCopy(&cVar0, "PLAYER_AIMING_NOBODY", 32);
				break;
			case 5:
				StringCopy(&cVar0, "GUN", 32);
				break;
			case 8:
				switch (iParam0->f_1)
				{
					case 1:
					case default:
						switch (get_random_int_in_range(0, 2))
						{
							case 0:
								StringCopy(&cVar0, "WHATS_YOUR_PROBLEM", 32);
								break;
							case 1:
								StringCopy(&cVar0, "STOP_THAT", 32);
								break;
						}
						break;
					case 2:
						switch (get_random_int_in_range(0, 3))
						{
							case 0:
								StringCopy(&cVar0, "CUT_THAT_OUT", 32);
								break;
							case 1:
								StringCopy(&cVar0, "SHAME_ON_YOU", 32);
								break;
							case 2:
								StringCopy(&cVar0, "GENERIC_ANTISOCIAL_MALE_EVENT_COMMENT", 32);
								break;
						}
						break;
					case 3:
						switch (get_random_int_in_range(0, 5))
						{
							case 0:
								StringCopy(&cVar0, "FINAL_WARNING", 32);
								break;
							case 1:
								StringCopy(&cVar0, "GUARD_FINAL_WARNING", 32);
								break;
							case 2:
								StringCopy(&cVar0, "WARNED_ALREADY", 32);
								break;
							case 3:
								StringCopy(&cVar0, "GUARD_WARNED_ALREADY", 32);
								break;
							case 4:
								StringCopy(&cVar0, "GUARD_WARNING", 32);
								break;
						}
						break;
				}
				break;
			case 7:
				switch (iParam0->f_1)
				{
					case 1:
					case default:
						StringCopy(&cVar0, "STOP_THAT", 32);
						break;
					case 2:
						StringCopy(&cVar0, "CUT_THAT_OUT", 32);
						break;
					case 3:
						StringCopy(&cVar0, "CHALLENGE_THREATEN", 32);
						break;
				}
				break;
		}
	}
	return func_663(cVar0);
}

bool func_381(char* sParam0)
{
	if (_0xd89504d9d7d5057d(sParam0) && _0x1ecc76792f661cf5(sParam0))
	{
		return true;
	}
	return false;
}

bool func_382(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_358(iVar0, iParam0, 1, 1) <= 4f)
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
		if (_is_weapon_sniper(func_664(iVar0, 0)))
		{
			if (func_665(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_383(int iParam0)
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

float func_384(int* iParam0)
{
	switch (iParam0->f_16)
	{
		case 1:
		case 2:
			return 5f;
		case 7:
			return 7.5f;
		default:
			break;
	}
	return 1.5f;
}

bool func_385(var uParam0, float fParam1)
{
	if (!func_658(uParam0))
	{
		return false;
	}
	if (func_375(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_386(int* iParam0, int* iParam1, var uParam2)
{
	func_666(iParam0, iParam1, uParam2, 1, 1);
	func_107(uParam2, 0, 1, 1, 1);
	if (decor_exist_on(*iParam0, "bScriptedILO"))
	{
		decor_remove(*iParam0, "bScriptedILO");
	}
	iParam0->f_14 = 0;
	iParam0->f_15 = -1;
}

int func_387()
{
	return 0;
}

int func_388(int iParam0)
{
	return 0;
}

int func_389(var uParam0, int iParam1)
{
	if (_0x3ee1f7a8c32f24e1(get_player_index(), &iVar0, true, true))
	{
		if (!is_entity_dead(iVar0) && is_entity_a_ped(iVar0))
		{
			if (is_control_just_pressed(0, 648122183))
			{
				iVar1 = get_ped_index_from_entity_index(iVar0);
				if (decor_exist_on(iVar1, "interactNeg"))
				{
					iVar2 = decor_get_int(iVar1, "interactNeg");
				}
				iVar2++;
				*uParam0++;
				decor_set_int(iVar1, "interactNeg", iVar2);
				if (iVar2 >= iParam1)
				{
					set_ped_config_flag(iVar1, 330, true);
				}
				return 1;
			}
		}
	}
	return 0;
}

bool func_390(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_391(int iParam0, int iParam1)
{
	iVar0 = iParam1 * 4;
	iVar1 = iParam1 * 2;
	iVar2 = iParam1 * 2;
	if ((18 + iVar0) >= Local_1157.f_690 || iVar0 < 0)
	{
	}
	if ((1 + iVar1) >= 4 || iVar1 < 0)
	{
	}
	iVar3 = func_63(func_326(9, 0, iVar1));
	iVar4 = func_63(func_326(9, 1, iVar1));
	if (&iLocal_1149[iParam1] < 11)
	{
		func_667(&iVar1, &iVar0, &iVar3, &iVar4, iParam1);
		func_668(iParam1, &iVar3);
		func_669(&iVar3, &iVar4, iParam1);
	}
	switch (&iLocal_1149[iParam1])
	{
		case 0:
			if ((does_entity_exist((Local_1157.f_690[(16 + iVar0)])->f_8) && does_entity_exist((Local_1157.f_690[(17 + iVar0)])->f_8)) && does_entity_exist((Local_1157.f_690[(18 + iVar0)])->f_8))
			{
				set_object_physics_params((Local_1157.f_690[(16 + iVar0)])->f_8, 500f, 1f, 1f, 1f, 1f, 1f, 1f, 1f, -1f, 0f, -1f);
				set_object_physics_params((Local_1157.f_690[(17 + iVar0)])->f_8, 750f, 1f, 1f, 1f, 1f, 1f, 1f, 1f, -1f, 0f, -1f);
				set_object_physics_params((Local_1157.f_690[(18 + iVar0)])->f_8, 1000f, 1f, 1f, 1f, 1f, 1f, 1f, 1f, -1f, 0f, -1f);
				freeze_entity_position((Local_1157.f_690[(16 + iVar0)])->f_8, true);
				freeze_entity_position((Local_1157.f_690[(17 + iVar0)])->f_8, true);
				freeze_entity_position((Local_1157.f_690[(18 + iVar0)])->f_8, true);
				iLocal_75[(12 + iVar2)] = _create_volume_box(*(Local_1157.f_690[(17 + iVar0)]), 0f, 0f, (Local_1157.f_690[(17 + iVar0)])->f_3, 0.613833f, 3.325524f, 5.714088f);
				_0x7c00cfc48a782dc0(&(iLocal_75[(12 + iVar2)]), (Local_1157.f_690[(17 + iVar0)])->f_8, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
				_0x19c7567d2f2287d6(&(iLocal_75[(12 + iVar2)]), 7);
				iLocal_75[(13 + iVar2)] = _create_volume_box(*(Local_1157.f_690[(18 + iVar0)]), 0f, 0f, (Local_1157.f_690[(18 + iVar0)])->f_3, 1f, 7.3475f, 5f);
				_0x7c00cfc48a782dc0(&(iLocal_75[(13 + iVar2)]), (Local_1157.f_690[(18 + iVar0)])->f_8, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
				_0x19c7567d2f2287d6(&(iLocal_75[(13 + iVar2)]), 7);
				func_47(func_592(9), &Local_1157);
				iLocal_1149[iParam1] = 1;
			}
			break;
		case 1:
			if (_0x5e420ff293ee5472())
			{
				iVar5 = func_670(9, iVar1);
				if (iVar5 == func_592(9))
				{
					if (!is_entity_dead(iVar3) && !is_entity_dead(iVar4))
					{
						clear_ped_tasks_immediately(iVar3, false, true);
						clear_ped_tasks_immediately(iVar4, false, true);
						iLocal_1149[iParam1] = 2;
					}
				}
			}
			break;
		case 2:
			if (is_entity_dead(iVar3) || is_entity_dead(iVar4))
			{
				iLocal_1149[iParam1] = 1;
			}
			else if (does_entity_exist((Local_1157.f_690[(15 + iVar0)])->f_8))
			{
				_set_entity_coords_and_heading((Local_1157.f_690[(15 + iVar0)])->f_8, func_481(iParam0), func_482(iParam0), true, false, true);
				func_673(Local_1039[(9 + iParam1)], func_671(iParam0), func_672(iParam0));
				func_674(Local_1039[(9 + iParam1)], iVar3, "PED1", 1);
				func_674(Local_1039[(9 + iParam1)], iVar4, "PED2", 1);
				StringCopy(&((Local_1039[(9 + iParam1)])->f_4), "bBreakInternalLoop", 24);
				func_675(Local_1039[(9 + iParam1)], (Local_1157.f_690[(15 + iVar0)])->f_8, "SAW");
				func_675(Local_1039[(9 + iParam1)], (Local_1157.f_690[(16 + iVar0)])->f_8, "LOG_01");
				func_675(Local_1039[(9 + iParam1)], (Local_1157.f_690[(17 + iVar0)])->f_8, "LOG_03");
				func_675(Local_1039[(9 + iParam1)], (Local_1157.f_690[(18 + iVar0)])->f_8, "LOG_02");
				iLocal_1149[iParam1] = 3;
			}
			break;
		case 3:
			if (func_519(Local_1039[(9 + iParam1)]))
			{
				func_676(Local_1039[(9 + iParam1)]);
				iLocal_1149[iParam1] = 4;
			}
			break;
		case 4:
			if ((!is_entity_dead(iVar3) && func_677(iVar3, 40f, -1082130432, -1082130432, -1082130432)) || (!is_entity_dead(iVar4) && func_677(iVar4, 40f, -1082130432, -1082130432, -1082130432)))
			{
				func_633(Local_1039[(9 + iParam1)], "bBreakInternalLoop");
				iLocal_1149[iParam1] = 5;
			}
			break;
		case 5:
			if (!is_entity_dead(iVar3))
			{
				if (has_anim_event_fired(iVar3, 545488006))
				{
					_play_sound_from_position("Wood_Tear", get_entity_coords((Local_1157.f_690[(15 + iVar0)])->f_8, true, false), "APPLESEED_SOUNDSET", false, 0, true, 0);
				}
				if (has_anim_event_fired(iVar3, -1817629992))
				{
					func_109(&(iLocal_75[(13 + iVar2)]));
					iLocal_1149[iParam1] = 6;
				}
			}
			break;
		case 6:
			if (!is_entity_dead(iVar3))
			{
				if (has_anim_event_fired(iVar3, 545488006))
				{
					_play_sound_from_position("Wood_Tear", get_entity_coords((Local_1157.f_690[(15 + iVar0)])->f_8, true, false), "APPLESEED_SOUNDSET", false, 0, true, 0);
				}
				if (has_anim_event_fired(iVar3, -1817629992))
				{
					func_109(&(iLocal_75[(12 + iVar2)]));
					iLocal_1149[iParam1] = 7;
				}
			}
			break;
		case 7:
			if (!is_entity_dead(iVar3) && has_anim_event_fired(iVar3, -1202392137))
			{
				iLocal_1149[iParam1] = 8;
			}
			break;
		case 8:
			if (func_678(iVar4, &(Local_1039[(9 + iParam1)]), "PED2", 0, 0, 1, 0))
			{
				set_ped_config_flag(iVar4, 330, false);
				if (iVar968 != iVar4)
				{
					func_679(9, 1, iVar1, 0);
				}
				iLocal_1149[iParam1] = 9;
			}
			break;
		case 9:
			if (func_678(iVar3, &(Local_1039[(9 + iParam1)]), "PED1", 0, 0, 1, 0))
			{
				set_ped_config_flag(iVar3, 330, false);
				if (iVar968 != iVar3)
				{
					func_679(9, 0, iVar1, 0);
				}
				iLocal_1149[iParam1] = 10;
			}
			break;
		case 10:
			if (!_does_anim_scene_exist(&(Local_1039[(9 + iParam1)])) || func_360(Local_1039[(9 + iParam1)]))
			{
				func_216(Local_1039[(9 + iParam1)]);
				set_object_physics_params((Local_1157.f_690[(16 + iVar0)])->f_8, 500f, 1f, 1f, 1f, 1f, 0.5f, 0.5f, 0.5f, -1f, -1f, -1f);
				set_object_physics_params((Local_1157.f_690[(17 + iVar0)])->f_8, 750f, 1f, 1f, 1f, 1f, 0.5f, 0.5f, 0.5f, -1f, -1f, -1f);
				set_object_physics_params((Local_1157.f_690[(18 + iVar0)])->f_8, 1000f, 1f, 1f, 1f, 1f, 0.5f, 0.5f, 0.5f, -1f, -1f, -1f);
				iLocal_1149[iParam1] = 11;
			}
			break;
		case 11:
			break;
	}
}

int func_392()
{
	if (iVar1152 > 0)
	{
		func_680();
	}
	switch (iVar1152)
	{
		case 0:
			_request_scenario_type(-1939316457, 262148, func_451(), 0);
			iVar0 = 0;
			while (iVar0 < 4)
			{
				iVar1 = func_681(iVar0);
				iVar2 = (810 + iVar0);
				if (!func_263(iVar2, 0))
				{
					func_62(iVar2, 1, 1);
				}
				else
				{
					iVar3 = func_63(iVar2);
					if ((!is_entity_dead(iVar3) && func_251(iVar3, 0, 1)) && !func_115(func_682(iVar0)))
					{
						func_258(iVar3, func_373(Local_2160.f_136, 4), 0);
						if (func_164(64))
						{
							if (_0x6eead6af637da752(func_429(iVar1), func_683(), 4f, 0) && !func_422(iVar1))
							{
								vVar4 = { func_429(iVar1) };
								clear_ped_tasks_immediately(iVar3, false, true);
								open_sequence_task(&uLocal_735);
								if (_does_scenario_point_exist(&(uLocal_1026[iVar1])))
								{
									_task_use_scenario_point(0, &(uLocal_1026[iVar1]), 0, 0, false, true, 0, false, -1f, false);
								}
								else
								{
									_task_use_nearest_scenario_to_coord(0, vVar4, 5f, 0, false, false, false, false);
								}
								close_sequence_task(iVar733);
								_task_perform_sequence_2(iVar3, iVar733, 0f, 2f);
								clear_sequence_task(&uLocal_735);
								set_ped_config_flag(iVar3, 146, false);
							}
							else
							{
								func_75(iVar2, 1);
								set_ped_config_flag(iVar3, 146, false);
							}
						}
						else
						{
							func_75(iVar2, 1);
							set_ped_config_flag(iVar3, 146, false);
						}
						func_35(func_682(iVar0));
					}
					iVar0++;
					iVar0 = 0;
					while (iVar0 < 5)
					{
						func_684(func_682(iVar0));
						iVar0++;
					}
					iLocal_1154 = 2;
					Jump @738; //curOff = 430
					func_685();
					func_136();
					iVar0 = (iVar743 % 4);
					iVar1 = func_681(iVar0);
					if (!func_458(iVar1) && !func_115(func_686(iVar0)))
					{
						func_687(iVar0);
						iVar2 = (810 + iVar0);
						if (!func_263(iVar2, 0))
						{
							func_62(iVar2, 1, 1);
						}
						iVar3 = func_63(iVar2);
						func_688(&iVar3);
						func_689(iVar0);
						func_690(&iVar3, iVar0);
						if (func_251(iVar3, 0, 1))
						{
							if (!func_19(4096) && func_691(&iVar3, Local_2581[iVar0], uLocal_2607[iVar0], iVar0))
							{
								func_692(&iVar3, iVar0);
								iLocal_1154 = 3;
								return 0;
							}
						}
					}
					if (((((iVar743 % 10) == 1 && !func_164(64)) && !func_19(4096)) && !func_19(512)) && !func_693(&Local_156))
					{
						func_694();
						iLocal_1154 = 1;
						return 0;
					}
					Jump @738; //curOff = 682
					if ((iVar743 % 10) == 1 && func_164(64))
					{
						func_694();
						iLocal_1154 = 2;
					}
					Jump @738; //curOff = 715
					func_48(vLocal_1117[0]);
					iLocal_1154 = 2;
				}
				return 0;
			}
			default:
				break;
	}
}

void func_393()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar2 = (810 + iVar0);
		iVar3 = func_63(iVar2);
		iVar1 = func_681(iVar0);
		if (((does_rayfire_map_object_exist(&(iLocal_1014[iVar1])) && get_state_of_rayfire_map_object(&(iLocal_1014[iVar1])) == 10) && (is_entity_dead(iVar3) || !is_ped_using_any_scenario(iVar3))) && !func_422(iVar1))
		{
			func_695(iVar1);
			func_466(iVar1, 0);
			if (!func_19(64) || iVar1 != 0)
			{
				func_264(iVar2, 0, 1, 0, 0);
			}
			func_696();
		}
		else
		{
			iVar0++;
		}
	}
}

void func_394(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_651((*Local_814[iParam0])[0], func_650(7), "", -163964935, 0, 0, 0, 1, 0);
	func_651((*Local_814[iParam0])[1], func_650(10), "", 648122183, 0, 0, 0, 1, 0);
	func_651((*Local_814[iParam0])[2], func_650(12), "", -1616532217, 0, 0, 0, 1, 0);
}

void func_395(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_76(Local_750[iParam0], 0);
	func_697(iParam0, 0);
	if (!bParam2)
	{
		if (iParam0 == 1)
		{
			func_330(524288);
		}
		else
		{
			func_50(268435456);
		}
	}
	if (bParam1)
	{
		iLocal_971 = -1;
	}
}

void func_396(int iParam0)
{
	if (!func_51(67108864))
	{
		return;
	}
	if (func_68(536870912))
	{
		if (decor_exist_on(*iParam0, "bScriptedILO"))
		{
			decor_remove(*iParam0, "bScriptedILO");
		}
		return;
	}
	iVar0 = func_648(1, 0, 0);
	if (func_51(134217728))
	{
		iVar0 = 1;
	}
	if (!is_entity_dead(*iParam0))
	{
		if (func_19(4096))
		{
			set_ped_reset_flag(*iParam0, 49, true);
			if (!get_ped_config_flag(Global_35, 514, true))
			{
				set_ped_config_flag(Global_35, 514, true);
			}
		}
		else if (get_ped_config_flag(Global_35, 514, true))
		{
			set_ped_config_flag(Global_35, 514, false);
		}
		set_ped_reset_flag(*iParam0, 49, true);
	}
	if (iLocal_98 == 1 && !func_5(Local_2160.f_136, 128))
	{
		fLocal_749 = 8f;
	}
	iVar1 = 1;
	if (!decor_exist_on(*iParam0, "bScriptedILO"))
	{
		decor_set_bool(*iParam0, "bScriptedILO", true);
	}
	if (((((is_control_pressed(0, 1287709438) || is_control_pressed(0, 1499911466)) || is_control_pressed(0, -209515122)) || func_698()) || func_699()) || func_700())
	{
		func_48(vLocal_1117[7]);
	}
	if (func_658(vLocal_1117[7]) && !func_385(vLocal_1117[7], 0.25f))
	{
		func_655(Local_814[0]);
	}
	iVar2 = func_649(iParam0, Local_750[0], fVar746, Local_814[0], &iVar1, 0, 1, 0, 0, iVar0, 0, 0, 2, 1, -1082130432, 0);
	if (iVar968 <= -1)
	{
		if (iVar2 != -1)
		{
		}
		iLocal_971 = iVar2;
	}
	if (!func_51(-2147483648))
	{
		if (!func_51(268435456))
		{
			if (func_253(-3.5f, 1, 0, 0))
			{
				if (iVar968 == 1 && !func_51(536870912))
				{
					func_114(*iParam0, Global_35, func_701(), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_58(1048576);
				}
				func_395(0, 1, 0);
				func_58(268435456);
			}
		}
		else
		{
			switch (iVar968)
			{
				case 0:
					func_379(&(Local_2160.f_35), "LCMP_GOODBYE", Global_35, *iParam0, 0, 0, 1, 1);
					func_58(1073741824);
					func_395(0, 1, 0);
					break;
				case 1:
					if (func_51(536870912))
					{
						func_50(536870912);
						func_379(&(Local_2160.f_35), "LCMP_QUIT", Global_35, *iParam0, 0, 0, 1, 1);
						func_58(64);
						func_10(Local_2160.f_136, 262144);
						func_15(Local_2160.f_136, 256);
						func_395(0, 1, 0);
					}
					else
					{
						sVar3 = func_702();
						func_114(Global_35, *iParam0, sVar3, 0, -1082130432, get_random_int_in_range(1, 21), 0, 0, 1, 1, 1, 1506116031, 1, 0, 0);
						func_395(0, 0, 0);
					}
					break;
			}
		}
	}
}

void func_397(int iParam0)
{
	switch (iVar1145)
	{
		case 0:
			if (iLocal_98 == 1 || does_entity_exist(Local_1157.f_690[12]->f_8))
			{
				if (func_164(64))
				{
					iLocal_1148 = 2;
				}
				else
				{
					iLocal_1148 = 1;
				}
			}
			break;
		case 1:
			if (func_164(64))
			{
				if (iLocal_98 != 1)
				{
					_play_sound_from_position("Whistle_Long", get_entity_coords(Local_1157.f_690[12]->f_8, true, false), "Steam_Donkey_Sounds", false, 0, true, 0);
				}
				iLocal_1148 = 2;
			}
			break;
		case 2:
			if (!func_164(64))
			{
				if (iLocal_98 == 1)
				{
					func_379(&(Local_2160.f_35), "LCMP_FMN_EOS", *iParam0, Global_35, 0, 0, 1, 0);
				}
				else
				{
					_play_sound_from_position("Whistle_Harmonic", get_entity_coords(Local_1157.f_690[12]->f_8, true, false), "Steam_Donkey_Sounds", false, 0, true, 0);
				}
				iLocal_1148 = 1;
			}
			break;
		case 3:
			break;
	}
}

void func_398()
{
}

void func_399()
{
}

int func_400(int iParam0)
{
	if (is_player_riding_train(get_player_index()))
	{
		return 0;
	}
	if (func_132(&Local_972, 1))
	{
		return 0;
	}
	if (func_19(32))
	{
		return 0;
	}
	if ((iVar742 % 5) != 0)
	{
		return 0;
	}
	if (!func_213(Global_35, (*Global_1392194)[Local_2160.f_136]->f_5, 1, 0))
	{
		return 0;
	}
	if (func_279(*iParam0, 1, 1) < (15f + 10f))
	{
		func_14(33554432);
		return 1;
	}
	if (func_19(4096))
	{
		return 0;
	}
	uVar24 = 30;
	func_291(&uVar24);
	iVar22 = func_703(&uVar10, &uVar24, 9, Global_36, 15f, 0, 1, 1, Local_1157.f_13, 1, 0, -1082130432, 0, 0);
	iVar21 = 0;
	while (iVar21 < iVar22)
	{
		if (iVar23 < 9)
		{
			iVar20 = &uVar10[iVar21];
			if (!is_entity_dead(iVar20) && is_ped_human(iVar20))
			{
				if (!decor_exist_on(iVar20, "HAS_VOICE") || !decor_get_bool(iVar20, "HAS_VOICE"))
				{
					func_258(iVar20, func_373(Local_2160.f_136, -1), 0);
				}
				iVar0[iVar23] = iVar20;
				iVar23++;
			}
		}
		iVar21++;
	}
	if (func_704(&Local_2544, &iVar0, &uLocal_2579, 1, func_19(2)))
	{
		func_199(&(Local_2544.f_34), 1);
		func_14(2);
		func_14(33554432);
		return 1;
	}
	return 0;
}

void func_401()
{
}

void func_402()
{
	if (func_705() && (get_frame_count() % 30) == 0)
	{
		if (func_12(Local_2160.f_136))
		{
			func_14(128);
		}
	}
}

void func_403()
{
	if (!func_5(Local_2160.f_136, 4))
	{
		if (func_51(65536))
		{
			func_42(Local_2160.f_136, 4);
		}
	}
}

void func_404(var uParam0)
{
	if (func_68(32768) && iVar1149 < 6)
	{
		freeze_entity_position(*uParam0, false);
		func_327(Local_1039[6], func_63(func_326(6, 0, 0)), "PED1");
		func_327(Local_1039[6], func_63(func_326(6, 1, 0)), "PED2");
		func_327(Local_1039[6], Local_1157.f_690[2]->f_8, "LOG");
		func_216(Local_1039[6]);
		func_475(Local_1039[6], "script@proc@eventareas@appleseed@Log_Drag", "PBL_UNHOOK_STAND", 0);
		func_706();
		clear_ped_tasks(*uParam0, 1, 0);
		if (!is_entity_dead(func_63(func_326(6, 0, 0))))
		{
			task_stand_still(func_63(func_326(6, 0, 0)), -1);
		}
		if (!is_entity_dead(func_63(func_326(6, 1, 0))))
		{
			task_stand_still(func_63(func_326(6, 1, 0)), -1);
		}
		if (!is_entity_dead(*uParam0))
		{
			task_stand_still(*uParam0, -1);
		}
		iLocal_1152 = 6;
	}
	if (iVar1149 < 4)
	{
		func_707(uParam0);
	}
	switch (iVar1149)
	{
		case 0:
			if (!is_entity_dead(*uParam0) && _0xa0bc8faed8cfeb3c(*uParam0))
			{
				set_ped_config_flag(*uParam0, 136, true);
				func_708(*uParam0, 0, 100);
				func_708(*uParam0, 1, 100);
				task_stand_still(*uParam0, -1);
				freeze_entity_position(*uParam0, true);
				_0xa2b8e47442c76cec(*uParam0, -1758176869);
				_update_ped_variation(*uParam0, false, true, true, true, false);
				iVar2 = 0;
				iVar0 = get_entity_bone_index_by_name(*uParam0, "SKEL_ROOT");
				iVar3 = get_entity_bone_index_by_name(Local_1157.f_690[2]->f_8, "Log");
				iVar1 = get_entity_bone_index_by_name(Local_1157.f_690[14]->f_8, "HrsAtt_placement01");
				attach_entity_to_entity_physically(Local_1157.f_690[14]->f_8, *uParam0, iVar2, iVar0, 0f, 0f, 0f, 0f, -0.6f, 1f, 0f, 0f, 180f, 0f, 1, 1, 0, 1, 2, 0, 1065353216, 1065353216);
				func_706();
				func_281(&Local_2160, *uParam0, 0);
				activate_physics(Local_1157.f_690[2]->f_8);
				func_47(func_592(6), &Local_1157);
				iLocal_1152 = 1;
			}
			break;
		case 1:
			if (_0x5e420ff293ee5472())
			{
				if (!is_entity_dead(*uParam0))
				{
					iVar4 = func_670(6, 0);
				}
				if ((iVar4 == func_592(6) && !is_entity_dead(func_63(func_326(6, 0, 0)))) && !is_entity_dead(func_63(func_326(6, 1, 0))))
				{
					func_708(*uParam0, 0, 100);
					func_708(*uParam0, 1, 100);
					iVar5 = get_entity_bone_index_by_name(Local_1157.f_690[14]->f_8, "HookPlacementBone01");
					iVar6 = get_entity_bone_index_by_name(Local_1157.f_690[14]->f_8, "HookPlacementBone02");
					attach_entity_to_entity_physically(Local_1157.f_690[23]->f_8, Local_1157.f_690[14]->f_8, iVar6, iVar5, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 1, 2, 0, 1065353216, 1065353216);
					iLocal_1152 = 2;
				}
			}
			break;
		case 2:
			if (is_entity_dead(func_63(func_326(6, 0, 0))) || is_entity_dead(func_63(func_326(6, 1, 0))))
			{
				iLocal_1152 = 1;
			}
			if ((!is_entity_dead(func_63(func_326(6, 0, 0))) && !is_entity_dead(func_63(func_326(6, 1, 0)))) && !is_entity_dead(*uParam0))
			{
				clear_ped_tasks_immediately(func_63(func_326(6, 0, 0)), false, true);
				clear_ped_tasks_immediately(func_63(func_326(6, 1, 0)), false, true);
				iLocal_1036[1] = _add_rope_2(get_entity_coords(Local_1157.f_690[2]->f_8, true, false), get_entity_rotation(Local_1157.f_690[2]->f_8, 2), 1f, 7, true, -1, -1f);
				_0xe9cd9a67834985a7(&(iLocal_1036[1]), Local_1157.f_690[2]->f_8, Local_1157.f_690[23]->f_8, 0f, 0f, 0f, 0f, 0f, 0f, 22240, 43815);
				func_631(Local_1039[6], &vVar7, &vVar10);
				func_262(*uParam0, vVar7, vVar10.z, 2, 1073741824);
				func_674(Local_1039[6], func_63(func_326(6, 0, 0)), "PED1", 1);
				func_674(Local_1039[6], func_63(func_326(6, 1, 0)), "PED2", 1);
				func_675(Local_1039[6], Local_1157.f_690[2]->f_8, "LOG");
				func_676(Local_1039[6]);
				iLocal_1036[0] = _add_rope_2(get_entity_coords(*uParam0, true, false), get_entity_rotation(*uParam0, 2), 0.5f, 5, true, -1, -1f);
				attach_entities_to_rope(&(iLocal_1036[0]), func_63(func_326(6, 1, 0)), *uParam0, 0f, 0f, 0f, 0f, 0f, 0f, 0.5f, 0, 0, "", "", 0, 37709, 53951, 0, 0, 1, 1);
				func_708(*uParam0, 0, 100);
				func_708(*uParam0, 1, 100);
				iLocal_1152 = 3;
			}
			break;
		case 3:
			if (func_19(4194304))
			{
				func_48(vLocal_1117[1]);
				func_215(Local_1157.f_690[2]->f_8, 0, 0);
				freeze_entity_position(Local_1157.f_690[2]->f_8, false);
				func_215(Local_1157.f_690[14]->f_8, 0, 0);
				detach_rope_from_entity(&(iLocal_1036[0]), func_63(func_326(6, 1, 0)));
				attach_entities_to_rope(&(iLocal_1036[0]), func_63(func_326(6, 1, 0)), *uParam0, 0f, 0f, 0f, 0f, 0f, 0f, 0.5f, 0, 0, "", "", 0, 7966, 53951, 0, 0, 1, 1);
				iLocal_1152 = 6;
			}
			break;
		case 4:
			if (func_223(vLocal_1117[1], 3.25f))
			{
				func_633(Local_1039[6], "bBreakInternalLoop");
				iLocal_1152 = 5;
			}
			break;
		case 5:
			if (!is_entity_dead(func_63(func_326(6, 0, 0))) && !is_entity_dead(*uParam0))
			{
				if (has_anim_event_fired(func_63(func_326(6, 0, 0)), 2039378757))
				{
					_0x814d453fcfdf119f(&(iLocal_1036[1]), 1, 1);
					activate_physics(Local_1157.f_690[2]->f_8);
				}
				if (has_anim_event_fired(func_63(func_326(6, 0, 0)), -1795669989))
				{
					freeze_entity_position(*uParam0, false);
					func_327(Local_1039[6], func_63(func_326(6, 0, 0)), "PED1");
					func_327(Local_1039[6], func_63(func_326(6, 1, 0)), "PED2");
					func_327(Local_1039[6], Local_1157.f_690[2]->f_8, "LOG");
					func_216(Local_1039[6]);
					func_475(Local_1039[6], "script@proc@eventareas@appleseed@Log_Drag", "PBL_UNHOOK_STAND", 0);
					clear_ped_tasks(*uParam0, 1, 0);
					task_stand_still(func_63(func_326(6, 0, 0)), -1);
					task_stand_still(func_63(func_326(6, 1, 0)), -1);
					task_stand_still(*uParam0, -1);
					iLocal_1152 = 6;
				}
			}
			break;
		case 6:
			if (func_68(32768))
			{
				if (!is_entity_attached(Local_1157.f_690[2]->f_8))
				{
					iVar14 = get_entity_bone_index_by_name(Local_1157.f_690[2]->f_8, "Log");
					iVar13 = get_entity_bone_index_by_name(Local_1157.f_690[14]->f_8, "HrsAtt_placement01");
					attach_entity_to_entity_physically(Local_1157.f_690[2]->f_8, Local_1157.f_690[14]->f_8, iVar14, iVar13, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0, 1, 0, 1, 2, 0, 1065353216, 1065353216);
					set_entity_no_collision_entity(func_63(func_326(6, 0, 0)), Local_1157.f_690[2]->f_8, false);
					set_entity_no_collision_entity(func_63(func_326(6, 1, 0)), Local_1157.f_690[2]->f_8, false);
					set_entity_no_collision_entity(func_63(func_326(6, 0, 0)), Local_1157.f_690[14]->f_8, false);
					set_entity_no_collision_entity(func_63(func_326(6, 1, 0)), Local_1157.f_690[14]->f_8, false);
					set_entity_no_collision_entity(func_63(func_326(6, 0, 0)), *uParam0, false);
					set_entity_no_collision_entity(func_63(func_326(6, 1, 0)), *uParam0, false);
				}
				vVar15 = { func_709() };
				func_262(*uParam0, func_710(), vVar15.z, 2, 1073741824);
				func_262(func_63(func_326(6, 0, 0)), func_711(0), func_712(0), 2, 1073741824);
				func_262(func_63(func_326(6, 1, 0)), func_711(1), func_712(1), 2, 1073741824);
				func_262(Local_1157.f_690[2]->f_8, -1369.573f, -221.1912f, 99.5689f, 130.32f, 1, 1073741824);
				freeze_entity_position(Local_1157.f_690[2]->f_8, true);
				reset_anim_scene(&(Local_1039[6]), "PBL_UNHOOK_STAND");
				freeze_entity_position(*uParam0, false);
				func_713(Local_1039[6]);
				iLocal_1152 = 7;
			}
			break;
		case 7:
			if (!func_325(Local_1039[6]))
			{
				if ((!is_entity_dead(func_63(func_326(6, 0, 0))) && !is_entity_dead(func_63(func_326(6, 1, 0)))) && !is_entity_dead(*uParam0))
				{
					vVar18 = { func_710() };
					vVar18.f_2 = (vVar18.z + 0.2f);
					func_673(Local_1039[6], vVar18, func_709());
					func_674(Local_1039[6], func_63(func_326(6, 0, 0)), "PED1", 1);
					func_674(Local_1039[6], func_63(func_326(6, 1, 0)), "PED2", 1);
					if (func_519(Local_1039[6]))
					{
						func_676(Local_1039[6]);
					}
				}
			}
			else
			{
				iLocal_1152 = 8;
			}
			break;
		case 8:
			if (!is_entity_dead(func_63(func_326(6, 0, 0))))
			{
				if (has_anim_event_fired(func_63(func_326(6, 0, 0)), 2038561225))
				{
					if (does_entity_exist(Local_1157.f_690[2]->f_8) && is_entity_attached(Local_1157.f_690[2]->f_8))
					{
						detach_entity(Local_1157.f_690[2]->f_8, false, true);
					}
					if (does_entity_exist(Local_1157.f_690[23]->f_8) && is_entity_attached(Local_1157.f_690[23]->f_8))
					{
						detach_entity(Local_1157.f_690[23]->f_8, false, true);
					}
					attach_entity_to_entity(Local_1157.f_690[23]->f_8, func_63(func_326(6, 0, 0)), get_entity_bone_index_by_name(func_63(func_326(6, 0, 0)), "PH_R_Hand"), 0f, 0.1f, 0.1f, 0f, 90f, -160f, true, true, false, true, 2, true, false, false);
				}
				if (has_anim_event_fired(func_63(func_326(6, 0, 0)), -276949338))
				{
					func_215(Local_1157.f_690[23]->f_8, 0, 1);
				}
			}
			if (func_360(Local_1039[6]))
			{
				iLocal_1152 = 9;
			}
			break;
		case 9:
			if (func_360(Local_1039[6]))
			{
				if (!is_entity_dead(*uParam0))
				{
					clear_ped_tasks(*uParam0, 1, 0);
					delete_rope(iLocal_1036[0]);
					set_ped_config_flag(*uParam0, 136, false);
					func_215(Local_1157.f_690[14]->f_8, 0, 1);
					activate_physics(Local_1157.f_690[14]->f_8);
					open_sequence_task(&uLocal_735);
					task_mount_animal(0, *uParam0, -1, -1, 1f, 1, 0, 0);
					task_follow_nav_mesh_to_coord(0, func_714(), 1f, -1, 0.25f, 0, func_715());
					close_sequence_task(iVar732);
					task_perform_sequence(func_63(func_326(6, 1, 0)), iVar732);
					clear_sequence_task(&uLocal_735);
				}
				if (!is_entity_dead(func_63(func_326(6, 0, 0))))
				{
					func_679(6, 0, 0, 0);
				}
				iLocal_1152 = 11;
			}
			break;
		case 11:
			if (!is_entity_dead(func_63(func_326(6, 1, 0))) && !func_129(func_63(func_326(6, 1, 0)), 242628503))
			{
				if (!is_entity_dead(*uParam0))
				{
					iVar21 = _find_closest_active_scenario_point_of_type(func_714(), -1805387726, 1.5f, 1, true);
					if (_does_scenario_point_exist(iVar21))
					{
						task_hitch_animal(func_63(func_326(6, 1, 0)), iVar21, 33554432);
					}
					else
					{
						task_dismount_animal(func_63(func_326(6, 1, 0)), 0, func_716(), 0, 0, 0);
						_0x06aade17334f7a40(*uParam0, -1399.61f, -246.8489f, 99.33929f);
					}
				}
				iLocal_1152 = 10;
			}
			break;
		case 10:
			if (!func_129(func_63(func_326(6, 1, 0)), -850912737) && !func_129(func_63(func_326(6, 1, 0)), 501393341))
			{
				func_679(6, 1, 0, 0);
				_0x06aade17334f7a40(*uParam0, func_717());
				iLocal_1152 = 12;
			}
			break;
		case 12:
			break;
	}
}

char* func_405()
{
	return "LOG_BLIP_FM";
}

void func_406(int iParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, char* sParam6)
{
	bParam3 = bParam3;
	if (*bParam4)
	{
		if (func_213(Global_35, (*Global_1392194)[uParam2->f_136]->f_6, 1, 0))
		{
			*bParam4 = 0;
			if (!is_entity_dead(iParam0))
			{
				if (bParam5)
				{
					iVar0 = 580546400;
				}
				else
				{
					iVar0 = 0;
				}
				func_346(iParam0, iParam1, -89429847, iVar0, 0, sParam6);
			}
		}
	}
}

void func_407()
{
	if (func_19(64))
	{
		set_force_object_this_frame(func_718(), 10f);
	}
}

bool func_408(int iParam0, int iParam1)
{
	func_719();
	func_720();
	func_721();
	func_722();
	iVar0 = func_681(0);
	iVar1 = 810;
	iVar2 = func_63(iVar1);
	func_723(iParam0, iParam1, &iVar2, uLocal_2479[2], uLocal_2479[3]);
	switch (iVar2313)
	{
		case 0:
			if (!func_263(Local_2160.f_138, 0))
			{
				func_62(Local_2160.f_138, 1, 1);
			}
			if (!is_entity_dead(*iParam1) && iVar1150 >= 2)
			{
				func_724(*iParam1, 1);
				freeze_entity_position(Local_1157.f_690[24]->f_8, true);
				set_entity_visible(Local_1157.f_690[24]->f_8, false);
				set_entity_collision(Local_1157.f_690[24]->f_8, false, false);
				set_can_climb_on_entity(Local_1157.f_690[24]->f_8, false);
				_set_entity_coords_and_heading(Local_1157.f_690[24]->f_8, *Local_1157.f_690[24], Local_1157.f_690[24]->f_3, true, false, true);
				iLocal_75[4] = _create_volume_cylinder_with_custom_name(-1388.585f, -272.0242f, 98.8074f, 0f, 0f, 84.9909f, 12.74726f, 17.5874f, 14f, "volAccident");
				iLocal_75[10] = _create_volume_cylinder_with_custom_name(-1388.585f, -272.0242f, 98.8074f, 0f, 0f, 84.99091f, 24.8216f, 45f, 14f, "volAccidentTrot");
				iLocal_75[9] = _create_volume_cylinder_with_custom_name(-1388.585f, -272.0242f, 98.8074f, 0f, 0f, 84.99091f, 44.1305f, 80f, 14f, "volAccidentCanter");
				iLocal_75[20] = _0x0eb78c2b156635b1(665633627, -1391.962f, -270.2142f, 99.82114f, 0f, 0f, 15.0005f, 1.639143f, 1.521353f, 1.523817f);
				_0xb56d41a694e42e86(&(iLocal_75[4]), 534496, 0, 0, -1, -1, 2);
				_0x18262cafebb5fbe1(&(iLocal_75[4]), 0, 0, 0, -1, -1, 0);
				_0x19c7567d2f2287d6(&(iLocal_75[4]), 7);
				iLocal_75[17] = _create_volume_box_with_custom_name(-1391.082f, -270.6321f, 98.77602f, 0f, 0f, -4.499413f, 22.57252f, 0.586106f, 4f, "Appleseed - volAccidentBlocking");
				_0x19c7567d2f2287d6(&(iLocal_75[17]), 7);
				_0xb56d41a694e42e86(&(iLocal_75[17]), 534496, 0, 0, -1, -1, 2);
				_0x18262cafebb5fbe1(&(iLocal_75[17]), 0, 0, 0, -1, -1, 0);
				clear_ped_tasks_immediately(*iParam0, false, true);
				func_725(*iParam0, 1);
				clear_ped_tasks_immediately(*iParam1, false, true);
				func_725(*iParam1, 1);
				clear_ped_tasks_immediately(iVar2, false, true);
				func_725(iVar2, 1);
				clear_ped_tasks_immediately(&(uLocal_2479[2]), false, true);
				func_725(&(uLocal_2479[2]), 1);
				clear_ped_tasks_immediately(&(uLocal_2479[3]), false, true);
				func_725(&(uLocal_2479[3]), 1);
				func_395(0, 1, 1);
				func_674(Local_1039[2], *iParam0, "FOREMAN", 1);
				func_674(Local_1039[2], *iParam1, "VICTIM", 1);
				func_674(Local_1039[2], iVar2, "PED1", 1);
				func_674(Local_1039[2], &(uLocal_2479[2]), "PED2", 1);
				func_674(Local_1039[2], &(uLocal_2479[3]), "PED3", 1);
				func_674(Local_1039[2], Global_35, "player", 1);
				func_675(Local_1039[2], Local_1157.f_690[6]->f_8, "MONEY");
				func_675(Local_1039[2], Local_1157.f_690[7]->f_8, "AXE1");
				func_675(Local_1039[2], Local_1157.f_690[8]->f_8, "AXE2");
				func_675(Local_1039[2], Local_1157.f_690[9]->f_8, "AXE3");
				func_675(Local_1039[2], Local_1157.f_690[10]->f_8, "CIGARETTE");
				func_675(Local_1039[2], Local_1157.f_690[24]->f_8, "TREE");
				func_726(Local_1039[2], "PBL_LIFT_SUCCESS");
				func_726(Local_1039[2], "PBL_IMPATIENT");
				func_726(Local_1039[2], "PBL_COMBAT_L");
				func_726(Local_1039[2], "PBL_COMBAT_R");
				func_726(Local_1039[2], "PB_VIC_BRKOUT");
				func_65(&(Local_2160.f_35), *iParam0, "EA_LCMP_Foreman", 0);
				func_65(&(Local_2160.f_35), iVar2, "LOG_WORKER_3", 0);
				func_65(&(Local_2160.f_35), &(uLocal_2479[2]), "LCMP_WITNESS1", 0);
				func_65(&(Local_2160.f_35), *iParam1, "LOGGING_VICTIM", 0);
				func_727(&(Local_2160.f_35), "LCMPF_IG3", 0);
				func_727(&(Local_2160.f_35), "LCMP_IG_TREE_P2", 0);
				prepare_music_event("SP_EVENT_AREA_APPLESEED_2_START");
				func_126(1);
				if (iLocal_98 == 2 && func_9(1, 2))
				{
					play_entity_anim(Local_1157.f_690[4]->f_8, func_728(), func_729(), 0.3f, true, true, false, 0f, 0);
				}
				func_676(Local_1039[2]);
				func_69(67108864);
				iLocal_2317 = 2;
			}
			break;
		case 2:
			if (func_730(iParam1, iVar0))
			{
				vVar3 = { func_731(Global_35, 2f) };
				if (get_distance_between_coords(vVar3, func_718(), false) < 60f)
				{
					func_732(1048576000, 1028443341, 0, 106);
					func_14(4096);
					func_126(2);
					func_14(32);
					func_48(vLocal_1117[4]);
					func_379(&(Local_2160.f_35), "LCMPF_IG3", iVar2, *iParam0, 0, 0, 1, 1);
					func_692(&iVar2, 0);
					func_687(0);
					iLocal_2317 = 1;
				}
			}
			else if (func_513(func_429(iVar0), 1) <= 63f)
			{
				if (!func_658(vLocal_1117[4]))
				{
					func_48(vLocal_1117[4]);
				}
				else if (func_659(vLocal_1117[4]))
				{
					func_733(vLocal_1117[4]);
				}
				if (func_385(vLocal_1117[4], 7.5f))
				{
					func_58(2097152);
					iLocal_2317 = 10;
				}
			}
			else if (func_658(vLocal_1117[4]) && !func_659(vLocal_1117[4]))
			{
				func_734(vLocal_1117[4]);
			}
			break;
		case 1:
			func_732(1048576000, 1028443341, 0, 106);
			if (func_223(vLocal_1117[4], 2f))
			{
				func_633(Local_1039[2], "bBreakInternalLoop");
			}
			if (has_anim_event_fired(iVar2, -1318036203))
			{
				func_214("SP_EVENT_AREA_APPLESEED_2_START", 0);
				set_ped_config_flag(*iParam1, 277, true);
				set_ped_config_flag(*iParam1, 146, true);
				func_735(Local_1039[2], "bBreakInternalLoop");
				func_736();
				iLocal_1154 = 3;
				iLocal_2317 = 4;
			}
			break;
		case 4:
			func_732(1048576000, 1028443341, 0, 106);
			func_127();
			if (func_737(20))
			{
				set_ped_reset_flag(Global_35, 318, true);
			}
			if (has_anim_event_fired(*iParam1, 935159765))
			{
				func_69(131072);
				_0x735662994e60a710(*iParam1, 1);
				_0x897934e868eddd6c(*iParam1, 55120, 0.2f, 0f, 0f);
				_0x91bab9e064f036cd(*iParam1, 0.5f);
				func_328(iParam1);
				func_629(*iParam1, "SCREAM_TERROR", 1017772929, 0, 1, 0, 0, 1);
				force_sonar_blips_this_frame();
				_trigger_sonar_blip_2(-890428877, *iParam1);
			}
			if (!func_19(512) && has_anim_event_fired(*iParam1, 442538763))
			{
				func_346(*iParam1, uLocal_2489[0], -89429847, 580546400, 0, "LOG_BLIP_VICT");
				_0x735662994e60a710(*iParam1, 1);
				_set_ped_wound_effect(*iParam1, 0, 7.723957E-41f, 0.2f, 0f, 0f, 0f, 0f, -1f, 0.5f);
				_remove_ped_wound_effect(*iParam1, 0.5f);
				func_14(512);
				_0xae6004120c18df97(*iParam1, 0, 0);
				set_ragdoll_blocking_flags(*iParam1, 319570);
				freeze_entity_position(*iParam1, true);
				_set_ped_body_component(*iParam1, 306062959);
				_update_ped_variation(*iParam1, false, true, true, true, false);
				func_379(&(Local_2160.f_35), "LCMP_IG_TFHEL", *iParam0, *iParam1, 0, 0, 1, 1);
				force_sonar_blips_this_frame();
				_trigger_sonar_blip_2(-890428877, *iParam1);
				func_629(*iParam1, "SCREAM_TERROR", 1017772929, 0, 1, 0, 0, 1);
			}
			if (has_anim_event_fired(*iParam0, 265434504))
			{
				apply_damage_to_ped(*iParam1, 50, 0, 55120, 0);
			}
			if (has_anim_event_fired(*iParam0, 1836246720))
			{
				func_109(&(iLocal_75[20]));
				iLocal_75[6] = _create_volume_box_with_custom_name(-1391.421f, -270.6241f, 99.11503f, 0f, 0f, -4.797453f, 21.93634f, 0.903251f, 1.400946f, "Appleseed - volTreeNav");
				_0x19c7567d2f2287d6(&(iLocal_75[6]), 7);
				func_96(uLocal_2489[0]);
				func_48(vLocal_1117[3]);
				iLocal_2317 = 5;
			}
			break;
		case 5:
			func_732(1048576000, 1028443341, 0, 106);
			func_127();
			if (func_737(20))
			{
				set_ped_reset_flag(Global_35, 318, true);
			}
			if (func_738(Local_1039[2], "bBreakInternalLoop"))
			{
				func_735(Local_1039[2], "bBreakInternalLoop");
			}
			func_739(&(Local_2160.f_32), &(Local_2160.f_33));
			if (func_741(&(Local_2160.f_32), "LOG_CTXTHLP", func_740(), 0, -719620017, 1.5f, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, -820096546, 0))
			{
				display_radar(false);
				bVar6 = true;
				func_265(vLocal_1117[3]);
			}
			else if (func_741(&(Local_2160.f_33), "LOG_CTXTHLP", func_742(), 0, -719620017, 1.5f, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, -820096546, 0))
			{
				func_69(256);
				display_radar(false);
				bVar6 = true;
				func_265(vLocal_1117[3]);
			}
			if (func_223(vLocal_1117[3], 7.5f))
			{
				iLocal_2317 = 6;
				func_48(vLocal_1117[1]);
				func_743();
			}
			if (func_223(vLocal_1117[1], 7.5f))
			{
				iLocal_2317 = 9;
			}
			if (bVar6)
			{
				if (Global_36.f_1 > func_744())
				{
					func_69(256);
				}
				func_302(&(Local_2160.f_32), 1, 1);
				func_302(&(Local_2160.f_33), 1, 1);
				func_96(&iLocal_2413);
				func_48(vLocal_1117[3]);
				func_265(vLocal_1117[1]);
				func_10(Local_2160.f_136, 128);
				set_player_control(player_id(), false, 4352, false);
				func_43(&Local_2160, 65536);
				_0x2c87c3e1c7b96ee2(&(iLocal_75[4]));
				func_58(16384);
				func_745(&Local_698);
				Local_698.f_1 = Global_35;
				if (func_68(256))
				{
					Local_698.f_8 = { func_746(Local_1039[4], "ARTHUR", func_474(4)) };
					Local_698.f_19 = func_747(Local_1039[4], "ARTHUR", func_474(4));
				}
				else
				{
					Local_698.f_8 = { func_746(Local_1039[3], "ARTHUR", func_474(3)) };
					Local_698.f_19 = func_747(Local_1039[3], "ARTHUR", func_474(3));
				}
				Local_698.f_17 = 0.15f;
				Local_698.f_18 = 0.2f;
				func_143(&(Local_698.f_23), 17425);
				func_43(&Local_2160, 65536);
				func_748(&Local_698, 129);
				func_293(&Local_972, 4);
				iLocal_2317 = 7;
			}
			break;
		case 6:
			func_732(1048576000, 1028443341, 0, 106);
			if (func_737(20))
			{
				set_ped_reset_flag(Global_35, 318, true);
			}
			func_632(Local_1039[2], "PBL_IMPATIENT", 1);
			func_633(Local_1039[2], "bBreakInternalLoop");
			func_379(&(Local_2160.f_35), "LCMP_IG_TFSOM", *iParam0, Global_35, 0, 0, 1, 1);
			iLocal_2317 = 5;
			break;
		case 7:
			func_732(1048576000, 1028443341, 0, 106);
			if (func_737(20))
			{
				set_ped_reset_flag(Global_35, 318, true);
			}
			if (func_748(&Local_698, 129))
			{
				if (func_68(256))
				{
					func_674(Local_1039[4], Global_35, "ARTHUR", 1);
					func_676(Local_1039[4]);
					_0x19c7567d2f2287d6(&(iLocal_75[4]), 7);
					iLocal_2317 = 8;
				}
				else
				{
					func_674(Local_1039[3], Global_35, "ARTHUR", 1);
					func_676(Local_1039[3]);
					_0x19c7567d2f2287d6(&(iLocal_75[4]), 7);
					iLocal_2317 = 8;
				}
			}
			break;
		case 8:
			func_732(1048576000, 1028443341, 0, 106);
			if (func_737(20))
			{
				set_ped_reset_flag(Global_35, 318, true);
			}
			if (func_361(Local_1039[2], "LIFT_LOOP") && has_anim_event_fired(Global_35, 331855897))
			{
				if (!func_301(Local_2160.f_32))
				{
					Local_2160.f_32 = func_749("LOG_CTXTHLP", -1300031296, 1, 0, 0, 9, 570, 4000, 10, 1073741824, 1704213876, 0);
					func_750("LOG_HELP_MASH", 10000, 0, 0, 0, 1);
					func_10(Local_2160.f_136, 64);
					func_202(Local_2160.f_136);
					func_126(16);
					func_48(vLocal_1117[3]);
				}
				if (func_751(Local_2160.f_32, 1))
				{
					func_752(Local_2160.f_32, 1);
				}
				if (is_control_just_pressed(0, -1300031296) || is_disabled_control_just_pressed(0, -1300031296))
				{
					set_pad_shake(0, 250, 50);
				}
				if (func_753(Local_2160.f_32, 1) || func_385(vLocal_1117[3], 15f))
				{
					func_265(vLocal_1117[3]);
					func_754(1);
					func_555(13, 0, 0, 0, *iParam0, 0, 1065353216, 0);
					func_302(&(Local_2160.f_32), 1, 1);
					func_50(16384);
					Local_972.f_3 = 3;
					iLocal_2317 = 9;
				}
			}
			break;
		case 9:
			func_302(&(Local_2160.f_32), 1, 1);
			func_302(&(Local_2160.f_33), 1, 1);
			func_96(&iLocal_2413);
			func_743();
			if (func_737(20))
			{
				set_ped_reset_flag(Global_35, 318, true);
			}
			if (func_325(Local_1039[3]))
			{
				func_633(Local_1039[3], "bBreakInternalLoop");
				set_player_control(player_id(), true, 0, false);
				func_80(&Local_2160, 65536);
			}
			if (func_325(Local_1039[4]))
			{
				func_633(Local_1039[4], "bBreakInternalLoop");
				set_player_control(player_id(), true, 0, false);
				func_80(&Local_2160, 65536);
			}
			if (func_325(Local_1039[2]))
			{
				func_632(Local_1039[2], "PBL_LIFT_SUCCESS", 1);
				func_633(Local_1039[2], "bBreakInternalLoop");
				func_379(&(Local_2160.f_35), "LCMP_IG_TFHLS", *iParam0, *iParam1, 0, 0, 1, 1);
				_0xae6004120c18df97(*iParam1, 0, 1);
				_play_sound_from_position("LOG_LIFT", get_entity_coords(Local_1157.f_690[24]->f_8, true, false), "APPLESEED_SOUNDSET", false, 0, true, 0);
				func_330(131072);
			}
			func_126(512);
			if (!_does_volume_exist(&(iLocal_75[20])))
			{
				iLocal_75[20] = _0x0eb78c2b156635b1(665633627, -1391.903f, -269.6049f, 99.57925f, 0f, 0f, 0f, 0.702347f, 0.731577f, 1.200654f);
			}
			iLocal_2317 = 11;
			break;
		case 10:
			if (func_737(20))
			{
				set_ped_reset_flag(Global_35, 318, true);
			}
			func_327(Local_1039[2], *iParam1, "Victim");
			task_use_random_scenario_in_group(*iParam1, func_270(), 0, 0, 0);
			func_216(Local_1039[2]);
			delete_object(&(Local_1157.f_690[7]->f_8));
			delete_object(&(Local_1157.f_690[8]->f_8));
			delete_object(&(Local_1157.f_690[9]->f_8));
			delete_object(&(Local_1157.f_690[10]->f_8));
			delete_object(&(Local_1157.f_690[24]->f_8));
			iLocal_2317 = 11;
			break;
		case 11:
			if (has_anim_event_fired(Global_35, 886554851))
			{
				set_pad_shake(0, 250, 100);
			}
			func_106(1);
			if (((func_68(1) && func_68(2)) && func_68(4)) && func_68(8))
			{
				iLocal_2317 = 14;
			}
			if (!get_is_task_active(Global_35, 3))
			{
				display_radar(true);
			}
			if (does_entity_exist(Local_1157.f_690[24]->f_8))
			{
				if (has_anim_event_fired(Local_1157.f_690[24]->f_8, -1545720465))
				{
					_play_sound_from_position("LOG_PUT_DOWN", get_entity_coords(Local_1157.f_690[24]->f_8, true, false), "APPLESEED_SOUNDSET", false, 0, true, 0);
					func_214("SP_EVENT_AREA_APPLESEED_2_IDLE", 0);
				}
				if (has_anim_event_fired(Local_1157.f_690[24]->f_8, 745376786))
				{
					set_can_climb_on_entity(Local_1157.f_690[24]->f_8, true);
					freeze_entity_position(Local_1157.f_690[24]->f_8, true);
					func_327(Local_1039[2], Local_1157.f_690[24]->f_8, "TREE");
				}
			}
			if (!func_68(1))
			{
				if (func_678(*iParam0, &(Local_1039[2]), "FOREMAN", -1795669989, 0, 1, 0))
				{
					if (!is_entity_dead(*iParam0))
					{
						func_327(Local_1039[2], *iParam0, "FOREMAN");
						func_725(*iParam0, 0);
					}
					func_126(4096);
					func_69(1);
					if (!func_51(2097152))
					{
						iLocal_2317 = 12;
					}
				}
			}
			if (!func_68(2))
			{
				if (func_678(iVar2, &(Local_1039[2]), "PED1", -1795669989, 0, 1, 0))
				{
					if (!is_entity_dead(iVar2))
					{
						func_327(Local_1039[2], iVar2, "PED1");
						func_725(iVar2, 0);
						func_75(iVar1, 1);
					}
					func_69(2);
				}
			}
			if (!func_68(4))
			{
				if (func_678(&(uLocal_2479[2]), &(Local_1039[2]), "PED2", -1795669989, 0, 1, 0))
				{
					if (!is_entity_dead(&(uLocal_2479[2])))
					{
						func_327(Local_1039[2], &(uLocal_2479[2]), "PED2");
						func_725(&(uLocal_2479[2]), 1);
						task_use_random_scenario_in_group(&(uLocal_2479[2]), func_270(), 0, 0, 0);
					}
					func_69(4);
				}
			}
			if (!func_68(8))
			{
				if (func_678(&(uLocal_2479[3]), &(Local_1039[2]), "PED3", -1795669989, 0, 1, 0))
				{
					if (!is_entity_dead(&(uLocal_2479[3])))
					{
						func_327(Local_1039[2], &(uLocal_2479[3]), "PED3");
						func_725(&(uLocal_2479[3]), 1);
						task_use_random_scenario_in_group(&(uLocal_2479[3]), func_270(), 0, 0, 0);
					}
					func_69(8);
				}
			}
			break;
		case 12:
			func_14(2);
			if (!is_entity_dead(*iParam0) && func_358(*iParam0, Global_35, 0, 1) < 40f)
			{
				task_turn_ped_to_face_entity(*iParam0, Global_35, -1, -1082130432, -1082130432, -1082130432);
				if (func_9(Local_2160.f_136, 64))
				{
					cVar7 = "LOG_ACCPH";
				}
				else
				{
					cVar7 = "LOG_ACCPN";
				}
				func_379(&(Local_2160.f_35), cVar7, *iParam0, Global_35, 0, 0, 1, 1);
			}
			iLocal_2317 = 11;
			break;
		case 14:
			if (func_253(-3.5f, 1, 0, 0))
			{
				func_126(32);
				func_126(2);
				if (func_263(Local_2160.f_138, 0))
				{
					func_75(Local_2160.f_138, 1);
					func_76(Local_750[0], 0);
				}
				func_35(256);
				func_48(vLocal_1117[0]);
				iVar8 = 0;
				while (iVar8 < iVar2539)
				{
					func_755(&iVar8);
					iLocal_2527[iVar8] = -1;
					iVar8++;
				}
				iLocal_2543 = 0;
				func_110();
				func_330(67108864);
				iLocal_2317 = 13;
			}
			break;
		case 13:
			func_243(iVar2, 1, 1);
			func_666(&iVar2, Local_750[1], Local_814[1], 0, 1);
			func_243(&(uLocal_2479[2]), 1, 1);
			func_666(uLocal_2479[2], Local_750[1], Local_814[1], 0, 1);
			func_243(&(uLocal_2479[3]), 1, 1);
			func_666(uLocal_2479[3], Local_750[1], Local_814[1], 0, 1);
			func_756(0, 0, 1);
			func_395(0, 1, 0);
			if (func_51(2097152))
			{
				func_126(64);
			}
			else
			{
				return true;
			}
			break;
	}
	return false;
}

void func_409(int iParam0)
{
	if (func_213(*iParam0, &(iLocal_75[0]), 1, 0) && iVar2316 < 5)
	{
		iLocal_2319 = 5;
	}
	switch (iVar2316)
	{
		case 0:
			func_394(0);
			func_757(1, 0);
			func_395(0, 1, 0);
			func_758(0, 0);
			iLocal_2319 = 2;
			break;
		case 2:
			switch (iVar968)
			{
				case 1:
					func_379(&(Local_2160.f_35), "LCMP_IG_TFPLNF", Global_35, *iParam0, 0, 0, 1, 1);
					func_395(0, 1, 0);
					iLocal_2319 = 5;
					break;
			}
			break;
		case 5:
			break;
	}
}

void func_410(int* iParam0)
{
	if (func_68(65536) && iVar2315 < 5)
	{
		func_395(1, 0, 0);
		func_756(1, 0, 1);
		iLocal_2318 = 5;
	}
	if (iVar2315 >= 2)
	{
		iVar1 = 1;
		iVar0 = func_649(iParam0, Local_750[1], 8f, Local_814[1], &iVar1, 0, 1, 0, 0, func_648(1, 0, 0) | 2048, 0, 0, 2, 1, -1082130432, 0);
	}
	switch (iVar2315)
	{
		case 0:
			func_394(1);
			func_395(1, 0, 0);
			func_726(Local_1039[2], "PB_VIC_BRKOUT");
			func_726(Local_1039[2], "PB_HANDOVER_R");
			func_726(Local_1039[2], "PB_HANDOVER_L");
			func_726(Local_1039[2], "PB_HANDOVER_N");
			if (!_does_volume_exist(&(iLocal_75[20])))
			{
				iLocal_75[20] = _0x0eb78c2b156635b1(665633627, -1391.903f, -269.6049f, 99.57925f, 0f, 0f, 0f, 0.702347f, 0.731577f, 1.200654f);
			}
			func_48(vLocal_1117[1]);
			if (!_does_volume_exist(&(iLocal_75[19])))
			{
				iLocal_75[19] = _create_volume_box_with_custom_name(-1391.695f, -268.6573f, 99.66403f, 0f, 0f, -3.999926f, 4.302533f, 3.265524f, 2.894566f, "EA LCMP - volGiveMoney");
			}
			iLocal_2318 = 1;
			break;
		case 1:
			if ((func_253(0, 1, 0, 0) && func_385(vLocal_1117[1], 1.5f)) && func_279(*iParam0, 1, 1) < 10f)
			{
				func_759(iParam0, 0, 0, 1, 0, 0, 0, 1);
				func_732(1048576000, 1028443341, 0, 106);
				if (func_9(Local_2160.f_136, 128))
				{
					func_379(&(Local_2160.f_35), "LCMPF_IG_TFRSH", *iParam0, Global_35, 0, 0, 1, 1);
				}
				else
				{
					func_379(&(Local_2160.f_35), "LCMPF_IG_TFRSN", *iParam0, Global_35, 0, 0, 1, 1);
				}
				set_ped_config_flag(*iParam0, 277, false);
				iLocal_2318 = 2;
			}
			break;
		case 2:
			if (func_279(*iParam0, 1, 1) < 20f)
			{
				func_732(1048576000, 1028443341, 0, 106);
			}
			if (is_any_speech_playing(*iParam0))
			{
				func_759(iParam0, 0, 0, 1, 0, 0, 0, 1);
			}
			func_760(iParam0);
			switch (iVar0)
			{
				case 0:
					func_395(1, 0, 0);
					if (does_entity_exist(Local_1157.f_690[6]->f_8))
					{
						set_entity_coords(Local_1157.f_690[6]->f_8, func_479(), true, false, true, true);
					}
					func_745(&Local_2613);
					Local_2613.f_1 = Global_35;
					func_761(&(Local_2613.f_8), &(Local_698.f_19), iParam0);
					Local_2613.f_18 = 0.2f;
					Local_2613.f_17 = 0.15f;
					Local_2613.f_21 = 1f;
					func_143(&(Local_2613.f_23), 17920);
					StringCopy(&(Local_1039[2]->f_4), "RECOVERY_BOOL", 24);
					func_43(&Local_2160, 65536);
					func_748(&Local_2613, 106);
					iLocal_2318 = 3;
					break;
				case 1:
					func_379(&(Local_2160.f_35), "LCMPF_IG_TFPLRN", Global_35, *iParam0, 0, 0, 1, 1);
					func_395(1, 0, 0);
					func_762(1, 0, 0);
					iLocal_2318 = 6;
					break;
			}
			break;
		case 3:
			if (func_748(&Local_2613, 106) && func_763(Local_1039[2]))
			{
				set_player_control(get_player_index(), true, 0, false);
				func_80(&Local_2160, 65536);
				func_764(Local_1039[2], 1, 1);
				func_379(&(Local_2160.f_35), "LCMPF_IG_TFPLRP", Global_35, *iParam0, 0, 0, 1, 1);
				iLocal_2318 = 4;
			}
			break;
		case 4:
			if (has_anim_event_fired(Global_35, -1898385492))
			{
				func_765(Local_1039[2]);
				func_766(500, 0, 0, 1, 1);
				func_555(13, 0, 0, 0, 0, 0, 1065353216, 0);
				func_767(*iParam0, 500);
				if (does_entity_exist(Local_1157.f_690[6]->f_8))
				{
					set_entity_coords(Local_1157.f_690[6]->f_8, func_477(), true, false, true, true);
				}
				func_726(Local_1039[2], "PB_VIC_BRKOUT");
				iLocal_2318 = 5;
			}
			break;
		case 5:
			if ((!func_68(524288) && iVar2643 < 2) && func_253(-3.5f, 1, 0, 0))
			{
				func_756(1, 0, 1);
			}
			switch (iVar0)
			{
				case 0:
					func_379(&(Local_2160.f_35), func_768(iVar0), Global_35, *iParam0, 0, 0, 1, 1);
					func_395(1, 0, 0);
					uLocal_2646 = iVar2643 + 1;
					break;
				case 1:
					func_379(&(Local_2160.f_35), func_768(iVar0), Global_35, *iParam0, 0, 0, 1, 1);
					func_395(1, 0, 0);
					func_762(1, 0, 0);
					uLocal_2646 = iVar2643 + 1;
					iLocal_2318 = 6;
					break;
			}
			break;
		case 6:
			if ((!func_68(524288) && iVar2643 < 2) && func_253(-3.5f, 1, 0, 0))
			{
				func_756(1, 0, 1);
				func_762(1, 0, 0);
			}
			switch (iVar0)
			{
				case 1:
					func_379(&(Local_2160.f_35), func_768(iVar0), Global_35, *iParam0, 0, 0, 1, 1);
					func_395(1, 0, 0);
					func_762(1, 0, 0);
					uLocal_2646 = iVar2643 + 1;
					break;
			}
			break;
	}
}

int func_411(int iParam0)
{
	switch (iVar1143)
	{
		case 0:
			if (!func_263(Local_2160.f_138, 0))
			{
				func_62(Local_2160.f_138, 1, 1);
			}
			func_96(uLocal_2499[0]);
			func_674(Local_1039[0], *iParam0, "FOREMAN", 1);
			func_675(Local_1039[0], Local_1157.f_690[3]->f_8, "PEN");
			func_675(Local_1039[0], Local_1157.f_690[4]->f_8, "BOOK");
			func_726(Local_1039[0], "PBL_FOREMAN_STAGE2_COMBAT");
			func_631(Local_1039[0], &vVar0, &vVar3);
			func_675(Local_1039[0], Local_1157.f_690[25]->f_8, "p_chair04x");
			if (func_19(64) || func_51(2097152))
			{
				play_entity_anim(Local_1157.f_690[4]->f_8, func_728(), func_729(), 0.3f, true, true, false, 0f, 0);
				func_745(&Local_698);
				Local_698.f_1 = *iParam0;
				Local_698.f_8 = { func_769() };
				Local_698.f_21 = 1f;
				Local_698.f_18 = 2f;
				func_143(&(Local_698.f_23), 128);
				func_748(&Local_698, 129);
				iLocal_1146 = 1;
			}
			else
			{
				func_395(0, 1, 1);
				func_676(Local_1039[0]);
				iLocal_1146 = 4;
			}
			break;
		case 1:
			if (!func_263(Local_2160.f_138, 0))
			{
				func_62(Local_2160.f_138, 1, 1);
			}
			set_force_object_this_frame(func_770(), 5f);
			if (func_748(&Local_698, 129))
			{
				func_745(&Local_698);
				Local_698.f_1 = *iParam0;
				Local_698.f_8 = { func_746(Local_1039[0], "FOREMAN", "PB_L_ENTER") };
				Local_698.f_21 = 1f;
				Local_698.f_18 = 0.25f;
				Local_698.f_17 = 0.2f;
				func_143(&(Local_698.f_23), 1152);
				func_748(&Local_698, 129);
				iLocal_1146 = 2;
			}
			break;
		case 2:
			set_force_object_this_frame(func_770(), 5f);
			if (func_748(&Local_698, 129))
			{
				iLocal_1146 = 3;
			}
			break;
		case 3:
			func_14(1);
			func_676(Local_1039[0]);
			iLocal_1146 = 4;
			break;
		case 4:
			if (func_19(33554432))
			{
				func_69(67108864);
				if (func_19(2))
				{
					iLocal_1146 = 6;
				}
				else
				{
					iLocal_1146 = 7;
				}
			}
			break;
		case 6:
			if (!func_771(-1f))
			{
				func_772("LOG_OBJ01", 1);
				func_346(*iParam0, uLocal_2499[0], -89429847, 580546400, 0, func_405());
				iLocal_1146 = 7;
			}
			break;
		case 7:
			if (func_773(iParam0, 0, 0))
			{
				func_732(1048576000, 1028443341, 0, 106);
				func_201();
				func_759(iParam0, 0, 0, 1, 0, 0, 0, 0);
				func_14(4096);
				func_633(Local_1039[0], "bBreakInternalLoop");
				func_327(Local_1039[0], Local_1157.f_690[4]->f_8, "BOOK");
				play_entity_anim(Local_1157.f_690[4]->f_8, func_728(), func_729(), 0.3f, true, true, false, 0f, 0);
				if (func_19(64))
				{
					if (func_9(Local_2160.f_136, 64))
					{
						func_379(&(Local_2160.f_35), "LCMP_IG_ACK_ACP", *iParam0, Global_35, 0, 0, 1, 1);
					}
					else
					{
						func_379(&(Local_2160.f_35), "LCMP_IG_ACK_ACN", *iParam0, Global_35, 0, 0, 1, 1);
					}
				}
				else if (func_9(Local_2160.f_136, 2))
				{
					func_379(&(Local_2160.f_35), "LCMP_IG_ACK_2", *iParam0, Global_35, 0, 0, 1, 1);
				}
				else
				{
					func_379(&(Local_2160.f_35), "LCMP_IG_S2ACK", *iParam0, Global_35, 0, 0, 1, 1);
					func_10(Local_2160.f_136, 2);
				}
				func_69(65536);
				iLocal_1146 = 8;
			}
			break;
		case 8:
			func_732(1048576000, 1028443341, 0, 106);
			if (!func_263(Local_2160.f_138, 0))
			{
				func_62(Local_2160.f_138, 1, 1);
			}
			func_759(iParam0, 0, 0, 1, 0, 0, 0, 0);
			if (func_678(*iParam0, &(Local_1039[0]), "FOREMAN", 0, 0, 1, 0) && func_253(-3.5f, 1, 0, 0))
			{
				task_play_upper_anim_facing_entity(*iParam0, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2", "BACK_FOR_MORE", Global_35, -1, 2f, -2f, 2113536, 0f, false, false, -1f, 0, 524297, -1f);
				func_379(&(Local_2160.f_35), "LCMP_IG_S2BFM", *iParam0, Global_35, 0, 0, 1, 1);
				func_48(vLocal_1117[3]);
				func_395(0, 1, 0);
				func_757(1, 0);
				iLocal_1146 = 9;
			}
			if (!func_773(iParam0, 0, 0))
			{
				func_395(0, 1, 0);
				func_757(0, 0);
				func_756(0, 0, 1);
				iLocal_1146 = 13;
			}
			break;
		case 9:
			func_732(1048576000, 1028443341, 0, 106);
			if (!func_263(Local_2160.f_138, 0))
			{
				func_62(Local_2160.f_138, 1, 1);
			}
			if (!get_is_task_active(*iParam0, 3))
			{
				task_turn_ped_to_face_entity(*iParam0, Global_35, -1, -1082130432, -1082130432, -1082130432);
			}
			if (func_658(vLocal_1117[3]) && func_774(vLocal_1117[3]) > 30000)
			{
				iLocal_1146 = 10;
			}
			func_759(iParam0, 0, 0, 1, 0, 0, 0, 1);
			if (func_253(0, 1, 0, 0))
			{
				if (!func_51(268435456))
				{
					func_757(1, 1);
					func_395(0, 1, 0);
					func_775(0);
					func_58(268435456);
				}
				switch (iVar968)
				{
					case 0:
						func_395(0, 1, 0);
						func_757(0, 0);
						func_756(0, 0, 1);
						func_14(2048);
						func_10(Local_2160.f_136, 16384);
						func_776(&Local_2160);
						func_745(&Local_698);
						Local_698.f_8 = { -1400.12f, -207.92f, 101.88f };
						Local_698.f_14 = { func_777() };
						Local_698.f_1 = Global_35;
						Local_698.f_17 = 0.2f;
						Local_698.f_18 = 0.2f;
						Local_698.f_19 = 20.6f;
						Local_698.f_25 = &Local_1039[5];
						StringCopy(&(Local_698.f_30), "ARTHUR", 24);
						StringCopy(&(Local_698.f_26), func_474(5), 32);
						func_143(&(Local_698.f_23), 26624);
						func_43(&Local_2160, 65536);
						func_748(&Local_698, 129);
						iLocal_1146 = 11;
						break;
					case 1:
						func_395(0, 1, 1);
						func_757(0, 0);
						func_126(2048);
						iLocal_1146 = 13;
						break;
				}
			}
			if (!func_773(iParam0, 0, 0))
			{
				func_395(0, 1, 0);
				func_757(0, 0);
				func_756(0, 0, 1);
				func_126(2048);
				iLocal_1146 = 13;
			}
			break;
		case 10:
			func_732(1048576000, 1028443341, 0, 106);
			func_759(iParam0, 0, 0, 1, 0, 0, 0, 1);
			func_265(vLocal_1117[3]);
			task_play_upper_anim_facing_entity(*iParam0, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2", "WHAT_DO_U_SAY", Global_35, -1, 2f, -2f, 0, 0f, false, false, -1f, 0, 0, -1f);
			func_379(&(Local_2160.f_35), "LCMP_IG_S2WS", *iParam0, Global_35, 0, 0, 1, 1);
			iLocal_1146 = 9;
			break;
		case 11:
			if (func_748(&Local_698, 129))
			{
				func_379(&(Local_2160.f_35), "LCMP_IG_S2AL", Global_35, *iParam0, 0, 0, 1, 1);
				func_674(Local_1039[5], Global_35, "ARTHUR", 1);
				func_675(Local_1039[5], Local_1157.f_690[6]->f_8, "MONEY");
				func_676(Local_1039[5]);
				iLocal_1146 = 12;
			}
			break;
		case 12:
			func_732(1048576000, 1028443341, 0, 106);
			if (!func_263(Local_2160.f_138, 0))
			{
				func_62(Local_2160.f_138, 1, 1);
			}
			func_759(iParam0, 0, 0, 1, 0, 0, 0, 1);
			if (!is_entity_dead(Global_35))
			{
				if (has_anim_event_fired(Global_35, -1898385492))
				{
					func_766(func_778(), 0, 0, 1, 1);
				}
				if (has_anim_event_fired(Global_35, 810372829))
				{
					func_96(uLocal_2499[0]);
					func_379(&(Local_2160.f_35), "LCMP_IG_S2VG", *iParam0, Global_35, 0, 0, 1, 1);
					task_play_upper_anim_facing_entity(*iParam0, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2", "VERY_GOOD", Global_35, -1, 2f, -2f, 0, 0f, false, false, -1f, 0, 0, -1f);
					func_346(&(iLocal_2502[0]), uLocal_2499[1], -325639900, 580546400, 0, "LOG_BLIP_WAG");
					if (func_9(1, 2))
					{
						func_43(&Local_2160, 128);
					}
					iLocal_1146 = 15;
				}
			}
			break;
		case 13:
			if (!func_263(Local_2160.f_138, 0))
			{
				func_62(Local_2160.f_138, 1, 1);
			}
			func_759(iParam0, 0, 0, 1, 0, 0, 0, 1);
			if (func_253(-3.5f, 1, *iParam0, 1))
			{
				func_96(uLocal_2499[0]);
				if (func_213(Global_35, &(iLocal_75[0]), 1, 0))
				{
					if (func_349(Global_35, 0, 1, 0) == -1569615261 && func_349(Global_35, 1, 1, 0) == -1569615261)
					{
						task_play_anim(Global_35, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2", "MAYBE_SOME_OTHER_TIME_PLAYER", 8f, -8f, -1, 67108880, 0f, false, 0, false, 0, false);
					}
					func_379(&(Local_2160.f_35), "LCMP_IG_S2OT", Global_35, *iParam0, 0, 0, 1, 1);
				}
				iLocal_1146 = 14;
			}
			break;
		case 14:
			if (!func_263(Local_2160.f_138, 0))
			{
				func_62(Local_2160.f_138, 1, 1);
			}
			func_759(iParam0, 0, 0, 1, 0, 0, 0, 1);
			if (!func_381("LCMP_IG_S2OT"))
			{
				func_379(&(Local_2160.f_35), "LCMP_IG_S2MNT", *iParam0, Global_35, 0, 0, 1, 1);
				task_play_upper_anim_facing_entity(*iParam0, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2", "MAYBE_NEXT_TIME", Global_35, -1, 2f, -2f, 0, 0f, false, false, -1f, 0, 0, -1f);
				iLocal_1146 = 15;
			}
			break;
		case 15:
			if (!func_263(Local_2160.f_138, 0))
			{
				func_62(Local_2160.f_138, 1, 1);
			}
			bVar6 = true;
			if (func_19(2048) && !func_360(Local_1039[5]))
			{
				bVar6 = false;
			}
			if (bVar6)
			{
				if (!is_player_control_on(get_player_index()))
				{
					set_player_control(get_player_index(), true, 0, false);
					func_80(&Local_2160, 65536);
				}
				func_759(iParam0, 0, 0, 1, 0, 0, 0, 1);
				if (!get_is_task_active(*iParam0, 3) && func_253(-3.5f, 1, *iParam0, 1))
				{
					func_126(4096);
					_0x74c2b3dc0b294102(&(iLocal_75[0]));
					_0xa1cfb35069d23c23(&(iLocal_75[0]));
					func_395(0, 1, 0);
					func_126(4096);
					_task_use_nearest_scenario_to_coord(*iParam0, -1400.86f, -205.41f, 102.34f, 2f, -1, false, false, false, false);
					func_779(iParam0);
					func_330(67108864);
					iLocal_1146 = 17;
				}
			}
			break;
		case 17:
			if (func_263(Local_2160.f_138, 0))
			{
				if (func_780(Local_2160.f_138, &Local_2160, 60000, 1))
				{
					func_76(Local_750[0], 0);
				}
			}
			break;
	}
	return 0;
}

int func_412(int iParam0)
{
	if (func_132(&Local_972, 1) && iVar969 == *iParam0)
	{
		if (iVar1143 < 17)
		{
			func_781();
			iLocal_1146 = 17;
		}
	}
	func_720();
	switch (iVar1143)
	{
		case 0:
			if (!func_263(Local_2160.f_138, 0))
			{
				func_62(Local_2160.f_138, 1, 1);
			}
			if (func_9(Local_2160.f_136, 131072))
			{
				iVar0 = iVar1144;
				iLocal_1147 = iVar0 + 1;
				func_15(Local_2160.f_136, 131072);
			}
			else
			{
				func_10(Local_2160.f_136, 131072);
			}
			if (func_9(Local_2160.f_136, 16384))
			{
				func_346(&(iLocal_2502[0]), uLocal_2499[1], -325639900, 580546400, 0, "LOG_BLIP_WAG");
			}
			if (func_324())
			{
				_request_scenario_type(func_782(), 262209, func_783(), func_784());
				iLocal_1032 = _find_closest_active_scenario_point_of_type(func_785(), func_782(), 1f, 0, false);
			}
			else
			{
				_request_scenario_type(func_786(), 262209, func_783(), func_787());
				iLocal_1032 = _find_closest_active_scenario_point_of_type(func_788(), func_786(), 1f, 0, false);
			}
			if (func_19(64) || func_51(2097152))
			{
				func_745(&Local_698);
				Local_698.f_8 = { func_769() };
				Local_698.f_1 = *iParam0;
				Local_698.f_21 = 1f;
				func_143(&(Local_698.f_23), 128);
				func_748(&Local_698, 129);
				iLocal_1146 = 1;
			}
			else
			{
				func_394(0);
				func_395(0, 1, 1);
				clear_ped_tasks_immediately(*iParam0, false, true);
				if (_does_scenario_point_exist(iVar1029))
				{
					_task_use_scenario_point(*iParam0, iVar1029, func_791(func_324(), func_789(), func_790()), -1, false, true, 0, false, -1f, false);
				}
				else
				{
					task_use_nearest_scenario_to_coord_warp(*iParam0, func_792(func_324(), func_785(), func_788()), 1.5f, -1, false, false, false, false);
				}
				iLocal_1146 = 4;
			}
			break;
		case 1:
			if (!func_263(Local_2160.f_138, 0))
			{
				func_62(Local_2160.f_138, 1, 1);
			}
			if (func_748(&Local_698, 129))
			{
				func_394(0);
				func_395(0, 1, 1);
				func_14(1);
				if (_does_scenario_point_exist(iVar1029))
				{
					_task_use_scenario_point(*iParam0, iVar1029, func_791(func_324(), func_789(), func_790()), -1, true, false, 0, false, -1f, false);
				}
				else
				{
					_task_use_nearest_scenario_to_coord(*iParam0, func_792(func_324(), func_785(), func_788()), 1.5f, -1, false, false, false, false);
				}
				iLocal_1146 = 4;
			}
			break;
		case 4:
			if (func_19(33554432))
			{
				iVar1 = func_4(1);
				if (iVar1 > 3 || (iVar1 == 3 && func_5(1, 128)))
				{
					func_42(Local_2160.f_136, 4096);
				}
				func_395(0, 1, 1);
				func_757(1, 0);
				if (func_19(2))
				{
					iLocal_1146 = 6;
				}
				else
				{
					iLocal_1146 = 7;
				}
			}
			break;
		case 6:
			if (!func_771(-1f))
			{
				func_96(uLocal_2499[0]);
				iLocal_1146 = 7;
			}
			break;
		case 7:
			if (!func_263(Local_2160.f_138, 0))
			{
				func_62(Local_2160.f_138, 1, 1);
			}
			if (func_773(iParam0, 0, func_324()) && func_795(iParam0, func_793(), 10f, 0, func_794(), 1, -1243035987))
			{
				func_732(1048576000, 1028443341, 0, 106);
				func_14(4096);
				func_759(iParam0, 0, 0, 1, 0, 0, 0, !func_324());
				switch (iVar1144)
				{
					case 2:
						StringCopy(&cVar2, "LCMP_IG_NIACT1", 24);
						break;
					case 3:
						StringCopy(&cVar2, "LCMP_IG_NIBA", 24);
						break;
					case 0:
						StringCopy(&cVar2, "LCMP_IG_NOG", 24);
						break;
					case 1:
						StringCopy(&cVar2, "LCMP_IG_NOTI", 24);
						break;
				}
				func_379(&(Local_2160.f_35), &cVar2, *iParam0, Global_35, 0, 0, 1, 1);
				iLocal_1146 = 8;
			}
			break;
		case 8:
			func_732(1048576000, 1028443341, 0, 106);
			func_759(iParam0, 0, 0, 1, 0, 0, 0, !func_324());
			if (func_324())
			{
				func_395(0, 1, 1);
				func_757(0, 0);
				iLocal_1146 = 5;
			}
			else if ((!is_entity_dead(*iParam0) && func_253(-3.5f, 1, 0, 0)) && (has_anim_event_fired(*iParam0, -1376584066) || _0x02ebbb3989b7e695(*iParam0)))
			{
				clear_ped_tasks(*iParam0, 1, 0);
				task_turn_ped_to_face_entity(*iParam0, Global_35, 0, -1082130432, -1082130432, -1082130432);
				iLocal_1146 = 2;
			}
			break;
		case 2:
			func_732(1048576000, 1028443341, 0, 106);
			if (!is_ped_using_any_scenario(*iParam0))
			{
				if (iVar1144 == 2)
				{
					iVar5 = 8466;
				}
				else
				{
					iVar5 = -1;
				}
				switch (iVar1144)
				{
					case 2:
						StringCopy(&cVar6, "LCMP_IG_NIACTB", 24);
						break;
					case 3:
						StringCopy(&cVar6, "LCMP_IG_NICL", 24);
						break;
				}
				func_379(&(Local_2160.f_35), &cVar6, *iParam0, Global_35, 0, 0, 1, 1);
				clear_ped_tasks(*iParam0, 1, 0);
				open_sequence_task(&uLocal_735);
				task_play_upper_anim_facing_entity(0, func_486(), func_796(0), Global_35, iVar5, 8f, -8f, 0, 0f, false, true, -1f, 0, 0, -1f);
				task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
				close_sequence_task(iVar732);
				task_perform_sequence(*iParam0, iVar732);
				clear_sequence_task(&uLocal_735);
				func_395(0, 1, 1);
				func_757(0, 0);
				iLocal_1146 = 5;
			}
			break;
		case 5:
			func_732(1048576000, 1028443341, 0, 106);
			if (!func_263(Local_2160.f_138, 0))
			{
				func_62(Local_2160.f_138, 1, 1);
			}
			func_759(iParam0, 0, 0, 1, 0, 0, 0, !func_324());
			if (func_797(iParam0))
			{
				func_757(1, 0);
				func_395(0, 1, 1);
				func_756(0, 0, 1);
				func_48(vLocal_1117[3]);
			}
			if (func_51(-2147483648))
			{
				switch (iVar968)
				{
					case 0:
						switch (iVar1144)
						{
							case 2:
								StringCopy(&cVar10, "LCMP_IG_NIACT2", 24);
								break;
							case 3:
								StringCopy(&cVar10, "LCMP_IG_NIFM", 24);
								break;
							case 0:
								StringCopy(&cVar10, "LCMP_IG_NOSEE", 24);
								break;
							case 1:
								StringCopy(&cVar10, "LCMP_IG_NOAIN", 24);
								break;
						}
						func_379(&(Local_2160.f_35), &cVar10, Global_35, *iParam0, 0, 0, 1, 1);
						func_395(0, 1, 0);
						bVar9 = true;
						break;
					case 1:
						switch (iVar1144)
						{
							case 2:
								StringCopy(&cVar10, "LCMP_IG_NI2N", 24);
								break;
							case 3:
								StringCopy(&cVar10, "LCMP_IG_NIFN", 24);
								break;
							case 0:
								StringCopy(&cVar10, "LCMP_IG_NI2N", 24);
								break;
							case 1:
								StringCopy(&cVar10, "LCMP_IG_NIFN", 24);
								break;
						}
						func_379(&(Local_2160.f_35), &cVar10, Global_35, *iParam0, 0, 0, 1, 1);
						func_395(0, 1, 0);
						bVar9 = true;
						break;
				}
				if (!bVar9 && func_223(vLocal_1117[3], 12.5f))
				{
					func_395(0, 1, 0);
					bVar9 = true;
				}
				if (bVar9)
				{
					func_757(0, 0);
					if (!func_324())
					{
						clear_ped_tasks(*iParam0, 1, 0);
						_0x9c8f42a5d1859dc1(&(iLocal_75[0]));
						_task_use_nearest_scenario_to_coord(*iParam0, get_entity_coords(*iParam0, true, false), 3f, -1, false, false, false, false);
					}
					func_126(4096);
					func_96(uLocal_2499[0]);
					func_48(vLocal_1117[3]);
					iLocal_1146 = 16;
				}
			}
			break;
		case 16:
			if (func_223(vLocal_1117[3], 60f))
			{
				if (func_324())
				{
				}
				else
				{
					clear_ped_tasks(*iParam0, 1, 0);
				}
				_0x74c2b3dc0b294102(&(iLocal_75[0]));
				_0xa1cfb35069d23c23(&(iLocal_75[0]));
				func_395(0, 1, 0);
				func_756(0, 0, 1);
				func_779(iParam0);
				iLocal_1146 = 17;
			}
			break;
		case 17:
			if (!(func_132(&Local_972, 1) && iVar969 == *iParam0))
			{
				if (func_263(Local_2160.f_138, 0))
				{
					func_75(Local_2160.f_138, 1);
					func_76(Local_750[0], 0);
				}
			}
			break;
	}
	return 0;
}

int func_413(int iParam0)
{
	func_720();
	switch (iVar1143)
	{
		case 0:
			if (!func_263(Local_2160.f_138, 0))
			{
				func_62(Local_2160.f_138, 1, 1);
			}
			func_58(1073741824);
			if (!func_9(Local_2160.f_136, 131072))
			{
				func_10(Local_2160.f_136, 131072);
			}
			else
			{
				func_15(Local_2160.f_136, 131072);
			}
			if (func_324())
			{
				_request_scenario_type(func_782(), 262209, func_783(), func_784());
				iLocal_1032 = _find_closest_active_scenario_point_of_type(func_785(), func_782(), 1f, 0, false);
			}
			else
			{
				_request_scenario_type(func_786(), 262209, func_783(), func_787());
				iLocal_1032 = _find_closest_active_scenario_point_of_type(func_788(), func_786(), 1f, 0, false);
			}
			if (func_19(64) || func_51(2097152))
			{
				func_745(&Local_698);
				Local_698.f_8 = { -1402.34f, -207.62f, 101.88f };
				Local_698.f_1 = *iParam0;
				Local_698.f_21 = 1f;
				func_143(&(Local_698.f_23), 128);
				func_748(&Local_698, 129);
				iLocal_1146 = 1;
			}
			else
			{
				clear_ped_tasks_immediately(*iParam0, false, true);
				if (_does_scenario_point_exist(iVar1029))
				{
					_task_use_scenario_point(*iParam0, iVar1029, func_791(func_324(), func_789(), func_790()), -1, false, true, 0, false, -1f, false);
				}
				else
				{
					task_use_nearest_scenario_to_coord_warp(*iParam0, func_792(func_324(), func_785(), func_788()), 1.5f, -1, false, false, false, false);
				}
				if (func_324())
				{
				}
				iLocal_1146 = 4;
			}
			break;
		case 1:
			if (!func_263(Local_2160.f_138, 0))
			{
				func_62(Local_2160.f_138, 1, 1);
			}
			if (func_748(&Local_698, 129))
			{
				func_14(1);
				if (_does_scenario_point_exist(iVar1029))
				{
					_task_use_scenario_point(*iParam0, iVar1029, func_791(func_324(), func_789(), func_790()), -1, false, true, 0, false, -1f, false);
				}
				else
				{
					task_use_nearest_scenario_to_coord_warp(*iParam0, func_792(func_324(), func_785(), func_788()), 1.5f, -1, false, false, false, false);
				}
				iLocal_1146 = 4;
			}
			break;
		case 4:
			if (func_19(33554432))
			{
				func_42(Local_2160.f_136, 4096);
				func_395(0, 1, 1);
				if (func_19(2))
				{
					iLocal_1146 = 6;
				}
				else
				{
					iLocal_1146 = 7;
				}
			}
			break;
		case 6:
			if (!func_771(-1f))
			{
				func_96(uLocal_2499[0]);
				iLocal_1146 = 7;
			}
			break;
		case 7:
			if (!func_263(Local_2160.f_138, 0))
			{
				func_62(Local_2160.f_138, 1, 1);
			}
			if (func_773(iParam0, 1, func_324()))
			{
				if (func_795(iParam0, func_798(iParam0), 10f, 0, 0, 1, -1243035987))
				{
					clear_ped_tasks(*iParam0, 1, 0);
					func_14(4096);
					func_799(iParam0, 0, 0);
					func_10(Local_2160.f_136, 16777216);
					Local_104.f_40 = *iParam0;
					Local_104.f_43 = 4f;
					Local_104.f_41 = 4f;
					Local_104.f_39 = (*Global_1392194)[Local_2160.f_136]->f_6;
					if (func_324())
					{
						StringCopy(&cVar0, "LCMPF_IG1_ALT", 64);
					}
					else
					{
						StringCopy(&cVar0, "LCMPF_IG1", 64);
					}
					func_379(&(Local_2160.f_35), &cVar0, *iParam0, Global_35, 0, 0, 1, 1);
					iLocal_1146 = 5;
				}
			}
			break;
		case 5:
			func_800(iParam0);
			func_759(iParam0, 0, 0, 1, 0, 0, 0, !func_324());
			if (func_797(iParam0))
			{
				func_395(0, 1, 1);
				func_758(0, 0);
				func_757(1, 0);
				func_48(vLocal_1117[3]);
			}
			if (func_51(-2147483648))
			{
				switch (iVar968)
				{
					case 1:
						if (func_324())
						{
							StringCopy(&cVar9, "LCMP_ANGRRES2", 24);
						}
						else
						{
							StringCopy(&cVar9, "LCMP_ANGRRES1", 24);
						}
						func_379(&(Local_2160.f_35), &cVar9, Global_35, *iParam0, 0, 0, 1, 1);
						func_395(0, 1, 0);
						bVar8 = true;
						break;
				}
				if (!bVar8 && func_223(vLocal_1117[3], 12.5f))
				{
					func_395(0, 1, 0);
					bVar8 = true;
				}
				if (bVar8)
				{
					func_757(0, 0);
					iLocal_1146 = 8;
				}
			}
			break;
		case 8:
			func_800(iParam0);
			func_799(iParam0, 0, 0);
			if (func_253(-3.5f, 1, 0, 0))
			{
				if (func_324())
				{
					func_75(Local_2160.f_138, 1);
					func_76(Local_750[0], 0);
					func_779(iParam0);
					StringCopy(&cVar12, "LCMPF_IG1_ALTR", 24);
					iLocal_1146 = 17;
				}
				else
				{
					StringCopy(&cVar12, "LCMPF_IG1_R", 24);
					iLocal_1146 = 16;
				}
				func_379(&(Local_2160.f_35), &cVar12, *iParam0, Global_35, 0, 0, 1, 1);
				func_126(4096);
				func_96(uLocal_2499[0]);
			}
			break;
		case 16:
			func_800(iParam0);
			if (func_223(vLocal_1117[3], 60f))
			{
				_0x74c2b3dc0b294102(&(iLocal_75[0]));
				_0xa1cfb35069d23c23(&(iLocal_75[0]));
				func_75(Local_2160.f_138, 1);
				func_76(Local_750[0], 0);
				clear_ped_tasks(*iParam0, 1, 0);
				func_779(iParam0);
				iLocal_1146 = 17;
			}
			break;
		case 17:
			break;
	}
	return 0;
}

int func_414(int iParam0)
{
	if (iVar1142 >= 8)
	{
		func_801(iParam0);
	}
	func_802();
	switch (iVar1142)
	{
		case 0:
			if (!_does_volume_exist(&(iLocal_75[4])))
			{
				iLocal_75[4] = _create_volume_box_with_custom_name(-1398.107f, -213.5636f, 102.7725f, 0f, 0f, 18.99809f, 6.332798f, 6.346769f, 4.001091f, "Appleseed - volSell");
			}
			if (func_9(Local_2160.f_136, 1024))
			{
				if (func_803(iParam0))
				{
					func_757(0, 1);
					func_395(0, 1, 0);
					func_756(0, 0, 1);
					func_69(256);
					func_779(iParam0);
					func_216(Local_1039[1]);
					func_475(Local_1039[1], "script@proc@handovers@player_handovers@exchange_item_for_money", "PB_HANDOVER", 0);
					_0x74c2b3dc0b294102(&(iLocal_75[0]));
					_0xa1cfb35069d23c23(&(iLocal_75[0]));
					clear_ped_tasks(*iParam0, 1, 0);
					_task_use_nearest_scenario_to_coord(*iParam0, -1398.248f, -210.7696f, 101.8917f, 1.5f, -1, false, false, false, false);
					func_42(Local_2160.f_136, 4096);
					iLocal_1145 = 15;
				}
			}
			else if (func_804() && func_805(iParam0))
			{
				func_69(67108864);
				func_395(0, 1, 0);
				func_757(1, 1);
				func_806(0);
				iLocal_75[1] = _create_volume_box_with_custom_name(-1399.521f, -209.5342f, 104.064f, 0f, 0f, 18.19485f, 9.259386f, 12.57203f, 6.4343f, "Appleseed - volCut");
				iLocal_75[11] = _create_volume_cylinder_with_custom_name(-1399.238f, -220.5899f, 102.4817f, 0f, 0f, 0.277182f, 8.547582f, 7.336222f, 3.176049f, "Appleseed - volHorse");
				_0xb56d41a694e42e86(&(iLocal_75[1]), 0, 0, 0, -1, -1, 2);
				_0x18262cafebb5fbe1(&(iLocal_75[1]), 0, 0, 0, -1, -1, 0);
				iLocal_1145 = 1;
			}
			break;
		case 1:
			if (func_19(33554432))
			{
				if (func_9(1, 2))
				{
					func_42(0, 16);
				}
				if (func_19(2))
				{
					iLocal_1145 = 6;
				}
				else
				{
					iLocal_1145 = 2;
				}
			}
			break;
		case 6:
			if (!func_771(0))
			{
				func_772("LOG_OBJ01", 1);
				func_346(*iParam0, uLocal_2499[0], -89429847, 580546400, 0, func_405());
				if (!func_9(Local_2160.f_136, 1024))
				{
					iLocal_1145 = 2;
				}
				else if (func_803(iParam0))
				{
					iLocal_1145 = 8;
				}
			}
			break;
		case 2:
			if (!func_263(Local_2160.f_138, 0))
			{
				func_62(Local_2160.f_138, 1, 1);
			}
			if (func_807(0))
			{
				if (!is_ped_using_any_scenario(*iParam0))
				{
					if (does_entity_exist(Local_1157.f_690[8]->f_8))
					{
						delete_object(&(Local_1157.f_690[8]->f_8));
					}
					if (does_entity_exist(Local_1157.f_690[7]->f_8))
					{
						delete_object(&(Local_1157.f_690[7]->f_8));
					}
				}
				if (((func_129(Global_35, 242628503) || func_129(Global_35, 501393341)) || func_129(Global_35, 1553520516)) || func_129(Global_35, 1920417248))
				{
					display_radar(false);
				}
				func_808(iParam0);
				if (func_809(Local_750[0], 1))
				{
					func_810();
				}
				if (iVar968 == 0)
				{
					func_810();
					func_14(2);
					_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
					func_811(&(Local_1005.f_3), 4);
					func_812(*iParam0, &Local_1005, 0f, 0f, 0f, 0, 1106247680, 1092616192, -1, 4000, 1000, 0f, 0, 1, 1084227584);
					func_674(Local_1039[5], func_63(Local_2160.f_138), "U_M_M_BiVForeman_01", 1);
					func_674(Local_1039[5], Global_35, "ARTHUR", 1);
					func_675(Local_1039[5], Local_1157.f_690[3]->f_8, "p_knife02x");
					func_675(Local_1039[5], Local_1157.f_690[4]->f_8, "p_woodWittle01x");
					StringCopy(&(Local_1039[5]->f_4), "Loop_Look_Idle", 24);
					func_676(Local_1039[5]);
					func_813(Local_1039[5], "pl_Back_To_Scenario");
					func_745(&Local_698);
					Local_698.f_1 = Global_35;
					Local_698.f_8 = { func_814() };
					Local_698.f_19 = func_815();
					func_143(&(Local_698.f_23), 17921);
					func_43(&Local_2160, 65536);
					func_748(&Local_698, 129);
					func_10(Local_2160.f_136, 524288);
					func_203(iParam0);
					func_395(0, 0, 1);
					func_379(&(Local_2160.f_35), "LCMP_INT_GRT", Global_35, *iParam0, 0, 0, 1, 1);
					func_732(1048576000, 1028443341, 0, 106);
					iLocal_1145 = 3;
				}
			}
			break;
		case 3:
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			func_810();
			func_812(*iParam0, &Local_1005, 0f, 0f, 0f, 0, 1106247680, 1092616192, -1, 4000, 1000, 0f, 0, 1, 1084227584);
			func_808(iParam0);
			func_748(&Local_698, 129);
			func_732(1048576000, 1028443341, 0, 106);
			if (func_253(-10f, 1, 0, 0))
			{
				if (!func_19(4096))
				{
					func_379(&(Local_2160.f_35), "LOG_LCMP_INT_LI", *iParam0, Global_35, 0, 0, 1, 1);
					func_201();
					func_14(4096);
					func_48(vLocal_1117[3]);
					func_293(&Local_972, 4);
					iLocal_1145 = 4;
				}
			}
			break;
		case 4:
			func_732(1048576000, 1028443341, 0, 106);
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			func_810();
			func_812(*iParam0, &Local_1005, 0f, 0f, 0f, 0, 1106247680, 1092616192, -1, 4000, 1000, 0f, 0, 1, 1084227584);
			func_808(iParam0);
			func_748(&Local_698, 129);
			if (func_223(vLocal_1117[3], 1.5f))
			{
				func_816(Local_1039[5]);
				func_379(&(Local_2160.f_35), "LOG_LCMP_INT_LB", Global_35, *iParam0, 0, 0, 1, 1);
				iLocal_1145 = 5;
			}
			break;
		case 5:
			func_732(1048576000, 1028443341, 0, 106);
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			func_810();
			func_812(*iParam0, &Local_1005, 0f, 0f, 0f, 0, 1106247680, 1092616192, -1, 4000, 1000, 0f, 0, 1, 1084227584);
			func_808(iParam0);
			func_748(&Local_698, 129);
			if (func_678(*iParam0, &(Local_1039[5]), "U_M_M_BiVForeman_01", 0, 0, 1, 0))
			{
				if (!func_19(4096))
				{
					func_201();
					func_14(4096);
					func_293(&Local_972, 4);
				}
				func_14(4194304);
				func_818(&Local_156, 135729);
				func_109(Local_156.f_4);
				Local_156.f_4 = &iLocal_75[11];
				func_819(&Local_156, -1393.122f, -207.5938f, 101.5584f, -5.5f, 0);
				func_820(&(Local_156.f_213), 32);
				func_822(func_821(), &Local_156);
				func_732(1048576000, 1028443341, 1, 106);
				func_215(Local_1157.f_690[14]->f_8, 1, 1);
				iLocal_1145 = 7;
			}
			break;
		case 7:
			func_810();
			if (!func_263(Local_2160.f_138, 0))
			{
				func_62(Local_2160.f_138, 1, 1);
			}
			if (!func_19(4096))
			{
				func_126(512);
				func_201();
				func_14(4096);
				func_293(&Local_972, 4);
			}
			if (!func_51(4096) && _get_anim_scene_progress(Local_156.f_156) >= 0.587f)
			{
				func_823();
			}
			if (func_822(func_821(), &Local_156) && func_803(iParam0))
			{
				func_126(512);
				set_player_control(get_player_index(), false, 0, false);
				func_43(&Local_2160, 65536);
				func_58(4096);
				func_824(11, 128);
				display_radar(false);
				func_48(vLocal_1117[3]);
				iVar1 = 0;
				iVar0 = get_entity_bone_index_by_name(&(iLocal_2505[0]), "SKEL_ROOT");
				attach_entity_to_entity_physically(Local_1157.f_690[14]->f_8, &(iLocal_2505[0]), iVar1, iVar0, 0f, 0f, 0f, 0f, -0.6f, 1f, 0f, 0f, 180f, 0f, 1, 1, 0, 1, 2, 0, 1065353216, 1065353216);
				func_825(&Local_680, "LOG_CTXT1", func_650(1), 0, 2, ceil((12.5f * 1000f)), 1, -1, -1);
				iLocal_1145 = 8;
			}
			break;
		case 8:
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			func_826(11, 2);
			if (func_301(Local_2160.f_32) && !func_827(101))
			{
				func_828(Local_2160.f_32, 0, 1);
			}
			if (func_829(&Local_680))
			{
				if (func_830(&Local_680))
				{
					if (func_831(&Local_680))
					{
						func_304(11, 128);
						func_832(11, 1);
						func_833(11, 2);
						func_14(536870912);
						func_632(Local_1039[0], "PBL_SEARCHENTER", 1);
						func_633(Local_1039[0], "Internal_Loop");
						bVar2 = true;
						func_95(&Local_2160);
						if (func_301(Local_680.f_5))
						{
							func_828(Local_680.f_5, 0, 1);
							func_834(Local_680.f_5, 0, 1);
						}
						if (func_301(Local_680.f_6))
						{
							func_828(Local_680.f_6, 0, 1);
							func_834(Local_680.f_6, 0, 1);
						}
						iLocal_1145 = 9;
					}
					else if (func_835(&Local_680))
					{
						bVar2 = true;
						func_379(&(Local_2160.f_35), "LOG_LCMP_INT_b0", Global_35, *iParam0, 0, 0, 1, 0);
						func_304(11, 128);
						func_95(&Local_2160);
						func_69(16384);
						if (func_301(Local_680.f_5))
						{
							func_828(Local_680.f_5, 0, 1);
							func_834(Local_680.f_5, 0, 1);
						}
						if (func_301(Local_680.f_6))
						{
							func_828(Local_680.f_6, 0, 1);
							func_834(Local_680.f_6, 0, 1);
						}
						iLocal_1145 = 13;
					}
				}
			}
			if (bVar2)
			{
				_0x74c2b3dc0b294102(&(iLocal_75[1]));
				_0xa1cfb35069d23c23(&(iLocal_75[1]));
				func_109(&(iLocal_75[1]));
				_0x74c2b3dc0b294102(&(iLocal_75[0]));
				_0xa1cfb35069d23c23(&(iLocal_75[0]));
			}
			break;
		case 9:
			if (func_738(Local_1039[0], "Internal_Loop"))
			{
				func_735(Local_1039[0], "Internal_Loop");
				func_836(&Local_680);
			}
			if (func_19(1073741824) && !func_837(11))
			{
				set_player_control(get_player_index(), false, 0, false);
				func_43(&Local_2160, 65536);
				func_826(11, 2);
				if (func_9(Local_2160.f_136, 4))
				{
					func_824(11, 128);
					Local_1157.f_690[0]->f_7 = func_838();
					Local_1157.f_690[6]->f_7 = func_839();
					request_model(func_838(), false);
					request_model(func_839(), false);
					iLocal_1145 = 11;
				}
				else
				{
					func_379(&(Local_2160.f_35), "LOG_LCMP_INT_b0", Global_35, *iParam0, 0, 0, 1, 0);
					iLocal_1145 = 13;
				}
			}
			break;
		case 10:
			if (func_748(&Local_698, 129))
			{
				iLocal_1145 = 11;
			}
			break;
		case 11:
			if (func_840())
			{
				func_841();
				iLocal_1145 = 12;
			}
			break;
		case 12:
			if (does_entity_exist(Local_1157.f_690[0]->f_8))
			{
				if (!func_68(256))
				{
					func_674(Local_1039[1], Global_35, "arthur", 1);
					func_675(Local_1039[1], Local_1157.f_690[3]->f_8, "p_knife02x");
					func_675(Local_1039[1], Local_1157.f_690[4]->f_8, "p_woodWittle01x");
					func_675(Local_1039[1], Local_1157.f_690[6]->f_8, "p_foldedBill01x");
					func_674(Local_1039[1], *iParam0, "U_M_M_BIVFOREMAN_01", 1);
					func_675(Local_1039[1], Local_1157.f_690[0]->f_8, "ITEM");
					func_632(Local_1039[1], "pbl_AgreeToSell", 1);
				}
				else
				{
					func_674(Local_1039[1], Global_35, "player", 1);
					func_675(Local_1039[1], Local_1157.f_690[6]->f_8, "MONEY");
					func_675(Local_1039[1], Local_1157.f_690[0]->f_8, "Item");
					func_674(Local_1039[1], *iParam0, "male", 1);
				}
				iLocal_1145 = 13;
			}
			break;
		case 13:
			func_96(uLocal_2499[0]);
			if (func_9(Local_2160.f_136, 4))
			{
				if (!func_19(4096))
				{
					func_379(&(Local_2160.f_35), "LOG_LCMP_INT_a2", *iParam0, Global_35, 0, 0, 1, 1);
				}
				func_676(Local_1039[1]);
				func_216(Local_1039[0]);
				if (!func_68(256))
				{
					func_633(Local_1039[1], "Internal_Loop");
				}
				else if (does_cam_exist(iVar1140))
				{
					set_cam_active(iVar1140, true);
					render_script_cams(true, false, 3000, true, false, 0);
				}
				iLocal_1145 = 14;
			}
			else if (!func_381("LOG_LCMP_INT_b0"))
			{
				func_836(&Local_680);
				func_632(Local_1039[0], "pbl_RefuseToSell", 1);
				func_633(Local_1039[0], "Internal_Loop");
				func_69(16384);
				iLocal_1145 = 14;
			}
			break;
		case 14:
			if ((!is_entity_dead(*iParam0) && has_anim_event_fired(*iParam0, -1898385492)) && does_entity_exist(Local_1157.f_690[0]->f_8))
			{
				delete_object(&(Local_1157.f_690[0]->f_8));
			}
			if (!is_entity_dead(Global_35))
			{
				if (has_anim_event_fired(Global_35, -1898385492) && does_entity_exist(Local_1157.f_690[6]->f_8))
				{
					delete_object(&(Local_1157.f_690[6]->f_8));
				}
				if (!is_player_control_on(get_player_index()) && has_anim_event_fired(Global_35, -1376584066))
				{
					set_player_control(get_player_index(), true, 0, false);
					func_80(&Local_2160, 65536);
				}
			}
			if (!get_is_task_active(Global_35, 3))
			{
				display_radar(true);
				display_hud(true);
			}
			if (func_360(Local_1039[0]) && (func_68(16384) || func_360(Local_1039[1])))
			{
				set_player_control(get_player_index(), true, 0, false);
				func_80(&Local_2160, 65536);
				display_radar(true);
				display_hud(true);
				func_43(&Local_2160, 128);
				func_304(11, 128);
				if (does_cam_exist(iVar1140))
				{
					destroy_cam(iVar1140, false);
				}
				func_475(Local_1039[1], "script@proc@handovers@player_handovers@exchange_item_for_money", "PB_HANDOVER", 0);
				func_126(2048);
				func_330(16384);
				func_842(11);
				func_69(256);
				func_126(536870912);
				func_126(4096);
				func_106(1);
				func_330(67108864);
				func_757(0, 1);
				func_395(0, 1, 0);
				func_756(0, 0, 1);
				func_833(11, 2);
				clear_ped_tasks(*iParam0, 1, 0);
				_task_use_nearest_scenario_to_coord(*iParam0, -1398.248f, -210.7696f, 101.8917f, 1.5f, -1, false, false, false, false);
				func_779(iParam0);
				iLocal_1145 = 15;
			}
			break;
		case 15:
			func_826(11, 1);
			if (func_19(4096))
			{
				func_126(4096);
			}
			break;
	}
	return 0;
}

void func_415(var uParam0, int iParam1)
{
	if ((iVar741 % 5) != 0)
	{
		return;
	}
}

int func_416()
{
	return 0;
}

int func_417()
{
	return 0;
}

bool func_418(int iParam0)
{
	return false;
}

int func_419(int iParam0)
{
	return 0;
}

void func_420()
{
	if (func_51(8192))
	{
		iVar1 = iVar2645;
		iVar2 = iVar2645 + 4;
		if (iVar2 >= iVar2541)
		{
			iVar2 = (iVar2541 - 1);
		}
		iLocal_2647 = iVar1;
		while (iVar2645 <= iVar2)
		{
			if (!func_155(&(iLocal_2527[iVar2645])))
			{
			}
			else
			{
				iVar0 = func_63(&(iLocal_2527[iVar2645]));
				if (!is_entity_dead(iVar0))
				{
					func_242(&(iLocal_2527[iVar2645]), 0, 1, 0, 1, 1);
					func_243(iVar0, 1, 1);
					if (!func_129(iVar0, 518218985))
					{
						if (!func_19(32))
						{
							func_755(&iLocal_2647);
						}
						else
						{
							vVar3 = { func_843(&(iLocal_75[4]), 100, 1, 0) };
							open_sequence_task(&uLocal_735);
							if (!func_241(vVar3))
							{
								task_follow_nav_mesh_to_coord(0, vVar3, 2f, -1, get_random_float_in_range((30f / 2f), 30f), 0, 40000f);
							}
							func_844(0, &(uLocal_2479[0]), -1);
							task_stand_still(0, -1);
							close_sequence_task(iVar733);
							task_perform_sequence(iVar0, iVar733);
							clear_sequence_task(&uLocal_735);
						}
					}
					if (!func_19(32))
					{
						iLocal_2527[iVar2645] = -1;
					}
				}
			}
			iLocal_2647 = iVar2645 + 1;
		}
		if (iVar2645 >= (iVar2541 - 1))
		{
			func_50(8192);
			if (!func_19(32))
			{
				iLocal_2543 = 0;
			}
		}
	}
}

bool func_421(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_115(1024);
		case 1:
			return func_115(2048);
		case 2:
			return func_115(4096);
		case 3:
			return func_115(8192);
		case 4:
			return func_115(16384);
		default:
			break;
	}
	return false;
}

bool func_422(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_115(32768);
		case 1:
			return func_115(65536);
		case 2:
			return func_115(131072);
		case 3:
			return func_115(262144);
		case 4:
			return func_115(524288);
		default:
			break;
	}
	return false;
}

float func_423(int iParam0)
{
	if (func_19(64) && iParam0 == 0)
	{
		return 0.592049f;
	}
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return 0.705277f;
				case 1:
					return 0.592049f;
				case 2:
					return 0.592049f;
				case 3:
					return 0.705277f;
				case 4:
					return 0.592049f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 0.592049f;
				case 1:
					return 0.592049f;
				case 2:
					return 0.705277f;
				case 3:
					return 0.705277f;
				case 4:
					return 0.705277f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 0.592049f;
				case 1:
					return 0.705277f;
				case 2:
					return 0.555339f;
				case 3:
					return 0.592049f;
				case 4:
					return 0.592049f;
				default:
					break;
			}
			break;
	}
	return -1f;
}

float func_424(int iParam0)
{
	if (func_19(64) && iParam0 == 0)
	{
		return 0.696462f;
	}
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return 0.792988f;
				case 1:
					return 0.696462f;
				case 2:
					return 0.696462f;
				case 3:
					return 0.792988f;
				case 4:
					return 0.696462f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 0.696462f;
				case 1:
					return 0.696462f;
				case 2:
					return 0.792988f;
				case 3:
					return 0.792988f;
				case 4:
					return 0.792988f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 0.696462f;
				case 1:
					return 0.792988f;
				case 2:
					return 0.674548f;
				case 3:
					return 0.696462f;
				case 4:
					return 0.696462f;
				default:
					break;
			}
			break;
	}
	return -1f;
}

void func_425()
{
	iVar1 = create_itemset(false);
	if (is_itemset_valid(iVar1))
	{
		iVar2 = _0x886171a12f400b89(&(iLocal_75[3]), iVar1, 1);
		iVar0 = 0;
		while (iVar0 < iVar2)
		{
			iVar3 = get_indexed_item_in_itemset(iVar0, iVar1);
			if (_get_item_type(iVar3) == 9)
			{
				iVar4 = _0x3ffb15534067dcd4(iVar3);
				if ((func_19(32) && !func_22(&Local_2160, 2)) && iVar4 == &uLocal_2479[0])
				{
				}
				else
				{
					func_128(iVar4, 0, 0);
				}
			}
			iVar0++;
		}
	}
	destroy_itemset(iVar1);
}

int func_426(int iParam0)
{
	fVar0 = func_513(func_428(iParam0), 1);
	if (fVar0 <= 15f)
	{
		return 255;
	}
	iVar1 = ceil(((-4.25f * (fVar0 - 15f)) + 255f));
	return iVar1;
}

void func_427(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < iVar2540)
	{
		if (!func_155(&(iLocal_2527[iVar1])))
		{
		}
		else
		{
			iVar0 = func_63(&(iLocal_2527[iVar1]));
			if (!is_entity_dead(iVar0))
			{
				func_242(&(iLocal_2527[iVar1]), 0, 1, 0, 1, 1);
				func_243(iVar0, 1, 1);
			}
		}
		iVar1++;
	}
}

Vector3 func_428(int iParam0)
{
	if (func_19(64) && iParam0 == 0)
	{
		return -1387.583f, -272.6812f, 98.8f;
	}
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -1458.54f, -256.597f, 105.987f;
				case 1:
					return -1415.835f, -186.908f, 99.722f;
				case 2:
					return -1456.845f, -196.8082f, 104.6f;
				case 3:
					return -1468.877f, -228.5962f, 106.9087f;
				case 4:
					return -1419.583f, -199.3359f, 100.7483f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -1387.583f, -272.6812f, 98.8f;
				case 1:
					return -1450.445f, -165.3257f, 106.4f;
				case 2:
					return -1472.47f, -253.4789f, 109.4271f;
				case 3:
					return -1424.774f, -283.7422f, 105.2652f;
				case 4:
					return -1424.774f, -283.7422f, 105.2652f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -1402.2f, -292.7f, 102.7f;
				case 1:
					return -1514.524f, -243.7657f, 118.7613f;
				case 2:
					return -1453.848f, -127.2335f, 107.7073f;
				case 3:
					return -1502.6f, -203.7f, 111f;
				case 4:
					return -1402.2f, -292.7f, 102.7f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_429(int iParam0)
{
	if (func_19(64) && iParam0 == 0)
	{
		return -1402.82f, -270.8668f, 98.5505f;
	}
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -1446.31f, -249.5183f, 101.6165f;
				case 1:
					return -1421.7f, -190.4f, 99.7097f;
				case 2:
					return -1467.4f, -185.8f, 104.3577f;
				case 3:
					return -1454.5f, -226.7f, 102.8009f;
				case 4:
					return -1429.321f, -195.9762f, 100.5673f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -1402.82f, -270.8668f, 98.5505f;
				case 1:
					return -1463.685f, -173.1668f, 106.0101f;
				case 2:
					return -1457.906f, -252.8943f, 104.7849f;
				case 3:
					return -1410.153f, -285.7408f, 100.6772f;
				case 4:
					return -1410.153f, -285.7408f, 100.6772f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -1413.484f, -292.4594f, 101.7033f;
				case 1:
					return -1517.31f, -234.5498f, 115.9662f;
				case 2:
					return -1470f, -127f, 118f;
				case 3:
					return -1514.101f, -202.0088f, 110.2915f;
				case 4:
					return -1413.484f, -292.4594f, 101.7033f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_430(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

bool func_431(bool bParam0)
{
	if (bParam0)
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	if (!func_213(Global_35, Global_1898092->f_26.f_5, 1, 0))
	{
		return true;
	}
	if (func_138(Global_1898092->f_26.f_2) && func_9(Global_1898092->f_26.f_2, 33554432))
	{
		return true;
	}
	return false;
}

bool func_432()
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

int func_433(int iParam0)
{
	if (!func_98(iParam0))
	{
		return -1;
	}
	return func_845(func_601(iParam0));
}

bool func_434(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_435(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_436(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
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

void func_439(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
{
	if (!func_138(iParam0))
	{
		return;
	}
	iVar0 = (iParam1 - Global_40.f_9096[iParam0]->f_3);
	*iParam2 = (iVar0 / 86400);
	iVar0 = (iVar0 - (*iParam2 * 86400));
	*iParam3 = (iVar0 / 3600);
	iVar0 = (iVar0 - *iParam3 * 3600);
	*uParam4 = (iVar0 / 60);
	iVar0 = (iVar0 - *uParam4 * 60);
	*uParam5 = iVar0;
}

bool func_440(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_441(int iParam0)
{
	if (!func_440(iParam0))
	{
		return false;
	}
	return func_140(iParam0, 33554432);
}

bool func_442(int iParam0)
{
	if (!func_440(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 32:
			return true;
		case 35:
			return true;
		case 65:
			return true;
		case 95:
			return true;
	}
	return false;
}

bool func_443(int iParam0)
{
	switch (iParam0)
	{
		case 64:
			return true;
		case 65:
			return true;
		case 66:
			return true;
		case 67:
			return true;
		case 68:
			return true;
		default:
			break;
	}
	return false;
}

int func_444()
{
	return &Global_1899515;
}

int func_445(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

bool func_446(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return true;
	}
	return false;
}

float func_447(int iParam0, vector3 vParam1)
{
	if (func_846(iParam0))
	{
		return vdist(_0x1e8a921112891651((*Global_1425371)[iParam0]->f_1), vParam1);
	}
	return 1E+08f;
}

void func_448(int iParam0)
{
	if (!func_155(iParam0))
	{
		return;
	}
	Global_24887[iParam0]->f_1 = func_444();
	if (_0x800df3fc913355f3(func_167(iParam0)))
	{
		_0x0b3a99ab6713aa52(func_167(iParam0));
	}
}

float func_449(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

void func_450(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	vVar3 = { _get_object_offset_from_coords(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { _get_object_offset_from_coords(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_847(vVar0, vVar3, 0f) };
	vVar9 = { func_848(vVar0, vVar3, 0f) };
	if (iParam4 == 1)
	{
		set_roads_back_to_original(vVar6, vVar9, iParam5, 1);
	}
	else if (iParam6 == 5)
	{
		set_roads_in_area(vVar6, vVar9, iParam4, 1, iParam5);
	}
	else
	{
		_0xafe2ae66f6251c66(vVar6, vVar9, iParam6, 1);
	}
}

int func_451()
{
	return -1820002752;
}

void func_452(var uParam0)
{
	func_478(uParam0, 4);
}

void func_453(var uParam0)
{
	func_478(uParam0, 64);
}

void func_454(var uParam0)
{
	func_478(uParam0, 8);
}

void func_455(var uParam0)
{
	func_478(uParam0, 128);
}

void func_456(var uParam0)
{
	func_478(uParam0, 1);
}

void func_457(int iParam0)
{
	func_461(&(Global_40.f_9096[Local_2160.f_136]->f_6), func_7(iParam0));
}

bool func_458(int iParam0)
{
	return func_390(Global_40.f_9096[Local_2160.f_136]->f_6, func_7(iParam0));
}

void func_459(int iParam0)
{
	vVar0 = { func_849(*iParam0) };
	fVar3 = func_850(*iParam0);
	uLocal_1026[*iParam0] = create_scenario_point(func_683(), vVar0, fVar3, 0, 0, 0);
	_0xe69fda40aac3efc0(&(uLocal_1026[*iParam0]), 0);
	_0xa7479fb665361edb(&(uLocal_1026[*iParam0]), 0);
	_set_scenario_point_flag(&(uLocal_1026[*iParam0]), 19, true);
	iLocal_736[*iParam0] = _create_volume_cylinder_with_custom_name(vVar0, 0f, 0f, 0f, 2f, 2f, 2f, "Appleseed - volTreeBlock");
	_0x18262cafebb5fbe1(&(iLocal_736[*iParam0]), 534496, 0, 0, -1, -1, 0);
	_0xb56d41a694e42e86(&(iLocal_736[*iParam0]), 534496, 0, 0, -1, -1, 0);
	if (!func_851(uLocal_2311[*iParam0]))
	{
		uLocal_2311[*iParam0] = _0xfa50f79257745e74(vVar0, 3f, 1, 36, 0);
	}
}

bool func_460(int iParam0)
{
	iVar0 = 0;
	if (!does_rayfire_map_object_exist(&(iLocal_1014[iParam0])))
	{
		uLocal_1020[iParam0] = _0x6f3068258a499e52(func_852(iParam0), func_429(iParam0), 9);
		iLocal_1014[iParam0] = get_rayfire_map_object(func_429(iParam0), 5f, func_853(iParam0));
	}
	if (does_rayfire_map_object_exist(&(iLocal_1014[iParam0])))
	{
		uLocal_1020[iParam0] = &uLocal_1020[iParam0];
		if (((!func_854(iParam0) && get_state_of_rayfire_map_object(&(iLocal_1014[iParam0])) != 4) && !func_421(iParam0)) && !func_458(iParam0))
		{
			set_state_of_rayfire_map_object(&(iLocal_1014[iParam0]), 4);
		}
		else if (func_19(64))
		{
			set_state_of_rayfire_map_object(&(iLocal_1014[iParam0]), 4);
		}
		else if (func_458(iParam0))
		{
			set_state_of_rayfire_map_object(&(iLocal_1014[iParam0]), 9);
			func_855(iParam0);
			func_695(iParam0);
		}
		if (func_854(iParam0))
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_461(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_462(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_143(iParam0, 268435456);
	}
	else
	{
		func_199(iParam0, 268435456);
	}
	if (!bParam2)
	{
		func_143(iParam0, 1073741824);
	}
	else
	{
		func_199(iParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_143(iParam0, 536870912);
	}
	else
	{
		func_199(iParam0, 536870912);
	}
}

void func_463(int iParam0, float fParam1)
{
	iParam0->f_27 = fParam1;
}

void func_464(vector3 vParam0, float fParam3, int iParam4)
{
	vVar3 = { _get_object_offset_from_coords(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { _get_object_offset_from_coords(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_847(vVar0, vVar3, 0f) };
	vVar9 = { func_848(vVar0, vVar3, 0f) };
	if (iParam4 == 5)
	{
		set_roads_back_to_original(vVar6, vVar9, 0, 1);
	}
	else
	{
		_0x6c3f12eceb6d2e2a(vVar6, vVar9, iParam4, 1);
	}
}

void func_465(vector3 vParam0, int iParam3)
{
	if (func_241(vParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1911670)
	{
		uVar1 = Global_1911670[iVar0];
		if (_0xf6a8a652a6b186cd(uVar1))
		{
			vVar2 = { _0xc4019cf9ae8e931a(uVar1) };
			if (func_856(vVar2, vParam0, 2f, 1))
			{
				if (iParam3 == 0 || _0x769bb7626b8cdb06(vVar2, 2f, 0, iParam3, 16384))
				{
					_0xfdfecc6ee4491e11(uVar1);
					(*Global_1911670)[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

void func_466(int iParam0, bool bParam1)
{
	if (iParam0 < 0 || iParam0 > 4)
	{
		return;
	}
	if (_does_scenario_point_exist(&(uLocal_1026[iParam0])))
	{
		_delete_scenario_point(&(uLocal_1026[iParam0]));
		func_109(&(iLocal_736[iParam0]));
	}
	if (bParam1)
	{
		func_857(uLocal_2311[iParam0], 1);
	}
}

void func_467(int iParam0)
{
	if (_does_volume_exist((*Global_1392194)[iParam0->f_136]->f_6))
	{
		_0x6d5f9e69ba1be783((*Global_1392194)[iParam0->f_136]->f_6);
	}
	if (_does_volume_exist((*Global_1392194)[iParam0->f_136]->f_5))
	{
		_0x6d5f9e69ba1be783((*Global_1392194)[iParam0->f_136]->f_5);
	}
}

void func_468()
{
	_0x88544c0e3291dcae(1);
	func_858();
}

bool func_469(int iParam0)
{
	if (((func_470(iParam0, 1) && func_470(iParam0, 2)) && func_470(iParam0, 8)) && func_470(iParam0, 512))
	{
		return true;
	}
	return false;
}

bool func_470(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

float func_471()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_472(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_473(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

char* func_474(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			if (func_19(64))
			{
				return "PBL_ENTER";
			}
			else
			{
				return "";
			}
			break;
		case 3:
			if (iLocal_98 == 3)
			{
				return "PBL_MAIN";
			}
			else
			{
				return "PBL_MAIN";
			}
			break;
		case 0:
			if (func_19(64))
			{
				return "PB_L_ENTER";
			}
			else if (func_19(262144))
			{
				if ((iLocal_98 > 1 && func_9(1, 2)) && !func_9(Local_2160.f_136, 16384))
				{
					return "PBL_FOREMAN_STAGE2_TALK_INTRO";
				}
				else if (func_324())
				{
					return "PBL_ENTER_LOOPS";
				}
				else
				{
					return "PBL_ENTER_LOOPS";
				}
			}
			else
			{
				switch (iLocal_98)
				{
					case 1:
						if (func_19(16))
						{
							if (func_324())
							{
								return "PBL_SITTING_IDLE";
							}
							else
							{
								return "pbl_Inside_Standing_Arthur_Rebuffed";
							}
						}
						else
						{
							return "pbl_LeadoutToDecision";
						}
						break;
					case 2:
						if (func_19(16))
						{
							if (func_324())
							{
								return "PBL_SITTING_IDLE";
							}
							else
							{
								return "pbl_Inside_Standing_Arthur_Rebuffed";
							}
						}
						else
						{
							return "PBL_FOREMAN_STAGE2_TALK_INTRO";
						}
						break;
					case 3:
						if (!func_5(Local_2160.f_136, 64))
						{
							return "PBL_FOREMAN_ORDERS_LOOPS";
						}
						else
						{
							return "PB_ENTER_N_OFFER";
						}
						break;
				}
			}
			break;
		case 1:
			switch (iLocal_98)
			{
				case 1:
					return "pbl_AgreeToSell";
				case 3:
					return "PBL_ENTER";
				default:
					break;
			}
			break;
		case 4:
			return "PBL_MAIN";
		case 5:
			switch (iLocal_98)
			{
				case 1:
					return "pl_Callover_Look_Greet";
				default:
					break;
			}
			return "";
		case 6:
			return "PBL_HOOKUP";
		case 7:
			return "PBL_LIFT";
		case 8:
			return "PBL_LIFT";
		case 9:
			return "PBL_MAIN";
		case 10:
			return "PBL_MAIN";
	}
	return "";
}

void func_475(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	func_859(uParam0, sParam1, sParam2, iParam3);
	func_713(uParam0);
}

void func_476()
{
	func_18(5, &Local_2160, 5);
	if (func_19(64))
	{
		iLocal_1147 = 2;
	}
	else if (func_22(&Local_2160, 256))
	{
		iLocal_1147 = 2;
	}
	else if (func_356())
	{
		iLocal_1147 = 0;
	}
	else
	{
		iLocal_1147 = 2;
	}
}

Vector3 func_477()
{
	return -1400.29f, -207.08f, 100.64f;
}

void func_478(var uParam0, int iParam1)
{
	func_461(uParam0, iParam1);
}

Vector3 func_479()
{
	return -1392.202f, -270.137f, 96.51328f;
}

Vector3 func_480(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 2:
		case default:
			switch (iParam0)
			{
				case 0:
				case default:
					return -1375.342f, -317.4534f, 100.8851f;
				case 1:
					return -1378.65f, -317.2836f, 100.986f;
				case 2:
					return -1381.161f, -321.5669f, 101.6531f;
				case 3:
					return -1392.285f, -331.5669f, 104.1264f;
				case 4:
					return -1401.689f, -338.5281f, 104.3909f;
				case 5:
					return -1411.78f, -346.1456f, 105.0925f;
				case 6:
					return -1420.203f, -351.6165f, 106.4329f;
				case 7:
					return -1426.14f, -354.4086f, 107.5771f;
				case 8:
					return -1437.277f, -359.1299f, 110.5854f;
				case 9:
					return -1441.922f, -360.4134f, 111.6311f;
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
						case default:
							return -1374.965f, -314.8146f, 100.6431f;
						case 1:
							return -1376.802f, -320.7141f, 101.263f;
						case 2:
							return -1380.237f, -322.0409f, 101.6534f;
						case 3:
							return -1393.833f, -333.3949f, 104.4031f;
						case 4:
							return -1402.033f, -337.2408f, 104.2141f;
						case 5:
							return -1414.284f, -346.9185f, 105.2396f;
						case 6:
							return -1419.447f, -350.5371f, 106.1471f;
						case 7:
							return -1430.102f, -356.533f, 108.7939f;
						case 8:
							return -1436.11f, -357.8445f, 110.1643f;
						case 9:
							return -1441.878f, -360.5837f, 111.6306f;
							break;
					}
					return 0f, 0f, 0f;
				}

Vector3 func_481(int iParam0)
{
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -1421.283f, -204.5069f, 101.8864f;
				case 1:
					return -1437.858f, -232.6483f, 101.4767f;
				case 2:
					return -1346.592f, -223.6519f, 102.188f;
				case 3:
					return -1357.959f, -211.2741f, 100.8586f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -1471.427f, -212.0286f, 107.1219f;
				case 1:
					return -1449.6f, -209.5491f, 105.0148f;
				case 2:
					return -1346.592f, -223.6519f, 102.188f;
				case 3:
					return -1357.959f, -211.2741f, 100.8586f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -1471.427f, -212.0286f, 107.1219f;
				case 1:
					return -1449.6f, -209.5491f, 105.0148f;
				case 2:
					return -1346.592f, -223.6519f, 102.188f;
				case 3:
					return -1357.959f, -211.2741f, 100.8586f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_482(int iParam0)
{
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return 179.55f;
				case 1:
					return 51.9f;
				case 2:
					return 135.96f;
				case 3:
					return -57.96f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 6.16f;
				case 1:
					return 138.91f;
				case 2:
					return 135.96f;
				case 3:
					return -57.96f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 6.16f;
				case 1:
					return 138.91f;
				case 2:
					return 135.96f;
				case 3:
					return -57.96f;
				default:
					break;
			}
			break;
	}
	return 0f;
}

Vector3 func_483(int iParam0)
{
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -1421.44f, -207.25f, 101.2044f;
				case 1:
					return -1440.13f, -230.94f, 101.25f;
				case 2:
					return -1348.581f, -225.7415f, 101.7857f;
				case 3:
					return -1355.598f, -209.7169f, 100.3746f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -1471.914f, -209.3468f, 106.1706f;
				case 1:
					return -1451.512f, -211.5973f, 104.6684f;
				case 2:
					return -1348.581f, -225.7415f, 101.7857f;
				case 3:
					return -1355.598f, -209.7169f, 100.3746f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -1471.914f, -209.3468f, 106.1706f;
				case 1:
					return -1451.512f, -211.5973f, 104.6684f;
				case 2:
					return -1348.581f, -225.7415f, 101.7857f;
				case 3:
					return -1355.598f, -209.7169f, 100.3746f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_484(int iParam0)
{
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1f, 0f, 0f;
				case 1:
					return 0f, 0f, -128.1f;
				case 2:
					return 0f, 0f, -43.6f;
				case 3:
					return -1.5f, 0f, 122.5f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 4.4f, 0f, -176.64f;
				case 1:
					return -1.5f, 0f, -40.56f;
				case 2:
					return 0f, 0f, -43.6f;
				case 3:
					return -1.5f, 0f, 122.5f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 4.4f, 0f, -176.64f;
				case 1:
					return -1.5f, 0f, -40.56f;
				case 2:
					return 0f, 0f, -43.6f;
				case 3:
					return -1.5f, 0f, 122.5f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_485(char* sParam0, var uParam1)
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

char* func_486()
{
	if (func_324())
	{
		return "SCRIPT_PROC@EVENT_AREA@APPLESEED@NO_OUTDOOR_JOB";
	}
	return "SCRIPT_PROC@EVENT_AREA@APPLESEED@NO_INDOOR_JOB";
}

Vector3 func_487()
{
	return -1442.024f, -359.4506f, 111.622f;
}

bool func_488(var uParam0)
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

bool func_489(var uParam0)
{
	if (!func_249(uParam0->f_1))
	{
		return false;
	}
	if (uParam0->f_12 != 0)
	{
		if (!func_249(uParam0->f_12))
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

int func_490(var uParam0, var uParam1)
{
	vVar0 = { *uParam0 };
	if (func_860(&uParam1))
	{
		return 1;
	}
	if (!func_861(&vVar0, 1, 10, 0))
	{
		return 0;
	}
	*uParam0 = { vVar0 };
	return 1;
}

bool func_491(var uParam0)
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

int func_492(int iParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, bParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_862(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_493(int iParam0)
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

bool func_494(var uParam0)
{
	return func_501(*uParam0, 4);
}

bool func_495(var uParam0)
{
	return func_501(*uParam0, 64);
}

bool func_496(var uParam0)
{
	return func_501(*uParam0, 8);
}

bool func_497(var uParam0)
{
	return func_501(*uParam0, 128);
}

bool func_498(var uParam0)
{
	return func_501(*uParam0, 2048);
}

void func_499(int iParam0, bool bParam1)
{
	set_ped_config_flag(iParam0, 130, !bParam1);
	set_ped_config_flag(iParam0, 178, bParam1);
}

bool func_500(var uParam0)
{
	return func_501(*uParam0, 1024);
}

bool func_501(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_502(var uParam0)
{
	return func_501(*uParam0, 256);
}

void func_503(int iParam0, bool bParam1)
{
	set_ped_config_flag(iParam0, 146, !bParam1);
	set_ped_config_flag(iParam0, 148, !bParam1);
}

bool func_504(var uParam0)
{
	return func_501(*uParam0, 512);
}

bool func_505(var uParam0)
{
	return func_501(*uParam0, 4096);
}

void func_506(int iParam0, int iParam1)
{
	if (!func_155(iParam0))
	{
		return;
	}
	(*Global_1895087)[iParam0]->f_1 = iParam1;
}

bool func_507(int iParam0)
{
	if (!func_155(iParam0))
	{
		return false;
	}
	if (!func_23(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_508(int iParam0, bool bParam1)
{
	if (!func_155(iParam0))
	{
		return false;
	}
	if ((func_23(iParam0, 1) && !func_509(iParam0)) && func_522(iParam0))
	{
		return false;
	}
	if (!func_23(iParam0, 2))
	{
		return false;
	}
	if (!bParam1)
	{
		if (!func_239(iParam0, 0))
		{
			return false;
		}
	}
	return true;
}

bool func_509(int iParam0)
{
	if (!func_155(iParam0))
	{
		return false;
	}
	return (*Global_1895087)[iParam0]->f_2 == get_id_of_this_thread();
}

void func_510(int iParam0)
{
	if (!func_155(iParam0))
	{
		return;
	}
	(*Global_1895087)[iParam0]->f_2 = get_id_of_this_thread();
}

void func_511(var uParam0, bool bParam1)
{
	vVar0 = { *uParam0 };
	vVar0.f_2 = (vVar0.z + 5f);
	if (bParam1)
	{
		if (!func_861(&vVar0, 50, 10, 0))
		{
		}
		else
		{
			*uParam0 = { vVar0 };
		}
	}
}

float func_512(float fParam0)
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

float func_513(vector3 vParam0, int iParam3)
{
	return func_430(Global_35, vParam0, iParam3);
}

bool func_514(int iParam0, int iParam1)
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
	if (func_501(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_501(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_501(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_501(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_501(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_501(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_501(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_501(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_515(int iParam0, bool bParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (!is_entity_occluded(iParam0) && is_entity_on_screen(iParam0))
		{
			if (func_377(player_ped_id(), iParam0, 1) < (bParam1 * bParam1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_516(vector3 vParam0, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
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
				fVar2 = func_863(iParam10);
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
			bVar0 = func_864(bParam4, player_ped_id(), iParam3);
		}
	}
	else
	{
		bVar0 = func_865(bParam4, player_ped_id(), vParam0);
	}
	if (bVar0)
	{
		*bParam6 = 1;
		if (*iParam5 != 0f)
		{
		}
		if (*iParam5 <= 0f)
		{
			*iParam5 = func_471();
		}
		else if ((func_471() - *iParam5) > bParam7)
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

bool func_517(int iParam0, bool bParam1)
{
	if (func_251(iParam0, 0, 1))
	{
		return (is_scripted_speech_playing(iParam0) || (bParam1 && is_any_speech_playing(iParam0)));
	}
	return false;
}

bool func_518(float fParam0)
{
	if (func_866(1))
	{
		return true;
	}
	if (func_658(&uLocal_0) && !func_223(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

bool func_519(var uParam0)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return false;
	}
	return _is_anim_scene_loaded(*uParam0, true, false);
}

int func_520(var uParam0)
{
	return uParam0;
}

bool func_521(int iParam0)
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

bool func_522(int iParam0)
{
	if (!func_155(iParam0))
	{
		return false;
	}
	return _does_thread_exist((*Global_1895087)[iParam0]->f_2);
}

void func_523(int iParam0)
{
	if (!func_155(iParam0))
	{
		return;
	}
	iVar0 = func_244(iParam0);
	if (does_entity_exist(iVar0))
	{
		if (does_entity_belong_to_this_script(iVar0, false))
		{
			set_ped_as_no_longer_needed(&iVar0);
		}
	}
	(*Global_1895087)[iParam0]->f_2 = 0;
}

int func_524(int iParam0, bool bParam1)
{
	if (!func_155(iParam0))
	{
		return 0;
	}
	if (!func_23(iParam0, 2))
	{
		return 0;
	}
	if (func_236(iParam0) == 0)
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_167(iParam0)))
	{
		return 1;
	}
	if (func_23(iParam0, 1) && !bParam1)
	{
		func_24(iParam0, 128);
		return 1;
	}
	func_169(iParam0, 129);
	func_523(iParam0);
	_0xfc77c5b44d5ff7c0(func_167(iParam0));
	func_506(iParam0, 0);
	return 1;
}

bool func_525(int iParam0)
{
	switch (iParam0)
	{
		case -1098045850:
		case 392538360:
			return true;
		default:
			break;
	}
	return false;
}

int func_526(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_867(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_868((386 + iVar28), 1);
			if (func_869(iParam0, &Var0, iVar5, 0))
			{
				if (func_870(iParam0, &Var6, iVar5))
				{
					Var29 = { func_871(iParam0, Var0, iVar5, 0) };
					func_872(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_873(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					func_874(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_875(iParam0, iParam1);
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

void func_527(int iParam0, int iParam1, float fParam2)
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

bool func_528(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_529(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1077541120;
		case 1:
			return -1514157174;
		case 2:
			return -1379967731;
		default:
			break;
	}
	return 0;
}

int func_530(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1652537076;
		case 1:
			return 1776245965;
		case 2:
			return -228594924;
		default:
			break;
	}
	return 0;
}

int func_531(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1654713063;
		case 1:
			return 111316232;
		case 2:
			return -96966750;
		default:
			break;
	}
	return 0;
}

int func_532(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1904459580;
		case 1:
			return -1989725258;
		case 2:
			return -487631996;
		default:
			break;
	}
	return 0;
}

int func_533()
{
	return 676312963;
}

int func_534(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -207723122;
		case 1:
			return -109837334;
		case 2:
			return -1451721831;
		default:
			break;
	}
	return 0;
}

int func_535()
{
	return -886879462;
}

char* func_536(int iParam0)
{
	if (!func_138(iParam0))
	{
		return "";
	}
	switch (iParam0)
	{
		case 0:
			return "LCMP";
		case 1:
			return "EACAS";
		case 2:
			return "EACUR";
		default:
			break;
	}
	return "EA_DEFAULT";
}

var func_537(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	if (is_string_null_or_empty(sParam0))
	{
		sParam0 = "ROB_TOAST_BODY";
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "ROB_TOAST_BODY";
	}
	if (iParam2 == -1)
	{
		iParam2 = -1234289408;
	}
	if (iParam3 == -1)
	{
		iParam3 = 1531758713;
	}
	if (is_string_null_or_empty(sParam5))
	{
		sParam5 = "INPUT_FEED_INTERACT_GENERIC";
	}
	if (iParam6 == -1)
	{
		iParam6 = 138119161;
	}
	if (!bParam14)
	{
		return func_876(sParam0, sParam1, iParam2, iParam3, iParam4, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13);
	}
	return func_877(sParam0, sParam1, iParam2, iParam3, iParam4, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13);
}

bool func_538(int iParam0)
{
	return func_9(iParam0, 1);
}

void func_539(int iParam0, bool bParam1)
{
	if (Global_1572887->f_10 && func_1() == 0)
	{
		return;
	}
	if (func_878(128))
	{
		return;
	}
	if (!func_879(iParam0))
	{
		return;
	}
	if (func_140(iParam0, 32))
	{
		return;
	}
	func_141(iParam0, 32);
	func_322(Global_1935630, 8192);
	func_881(func_880(-1532769513, -36357794), 1);
	switch (func_882(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_881(func_880(-1532769513, 213519508), 1);
			break;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_881(func_880(-1532769513, 242571679), 1);
			break;
		case 3:
		case 10:
			func_881(func_880(-1532769513, 1349449307), 1);
			break;
		case 4:
		case 9:
			func_881(func_880(-1532769513, 1140362070), 1);
			break;
		case 8:
			func_881(func_880(-1532769513, -172330899), 1);
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			func_881(func_880(-1532769513, -910218296), 1);
			break;
	}
	switch (iParam0)
	{
		case 0:
			_0xd8c7162ab2e2af45(1822876181);
			break;
		case 1:
			_0xd8c7162ab2e2af45(1092217275);
			break;
		case 2:
			_0xd8c7162ab2e2af45(1855549007);
			_0xd8c7162ab2e2af45(1542246539);
			break;
		case 6:
			_0xd8c7162ab2e2af45(-237206861);
			break;
		case 7:
			_0xd8c7162ab2e2af45(276890716);
			break;
		case 9:
			_0xd8c7162ab2e2af45(-353968602);
			break;
		case 10:
			_0xd8c7162ab2e2af45(-1354901649);
			_0xd8c7162ab2e2af45(-1354901649);
			break;
		case 11:
			_0xd8c7162ab2e2af45(-496244122);
			break;
		case 12:
			_0xd8c7162ab2e2af45(-678676588);
			break;
		case 15:
			_0xd8c7162ab2e2af45(-732274047);
			break;
		case 16:
			_0xd8c7162ab2e2af45(-12216052);
			break;
		case 17:
			_0xd8c7162ab2e2af45(-1456731677);
			break;
		case 21:
			_0xd8c7162ab2e2af45(-2086563810);
			break;
		case 22:
			_0xd8c7162ab2e2af45(221661572);
			break;
		case 24:
			_0xd8c7162ab2e2af45(222265732);
			break;
		case 25:
			_0xd8c7162ab2e2af45(-1484929764);
			break;
		case 26:
			_0xd8c7162ab2e2af45(1104975149);
			break;
		case 27:
			_0xd8c7162ab2e2af45(235472255);
			break;
		case 28:
			_0xd8c7162ab2e2af45(-1337880478);
			break;
		case 29:
			_0xd8c7162ab2e2af45(-1813267128);
			break;
		case 30:
			_0xd8c7162ab2e2af45(-1941572412);
			break;
		case 31:
			_0xd8c7162ab2e2af45(1006072805);
			break;
		case 121:
			_0xd8c7162ab2e2af45(929640770);
			break;
		case 122:
			_0xd8c7162ab2e2af45(1603579970);
			break;
		case 124:
			_0xd8c7162ab2e2af45(-1332669948);
			break;
		case 123:
			_0xd8c7162ab2e2af45(-1807212021);
			break;
		case 34:
			_0xd8c7162ab2e2af45(-1347759053);
			break;
		case 36:
			_0xd8c7162ab2e2af45(-918096609);
			break;
		case 114:
			_0xd8c7162ab2e2af45(1728445882);
			break;
		case 37:
			_0xd8c7162ab2e2af45(-507075109);
			break;
		case 40:
			_0xd8c7162ab2e2af45(462373845);
			break;
		case 42:
			_0xd8c7162ab2e2af45(-1727895786);
			break;
		case 43:
			_0xd8c7162ab2e2af45(1826504111);
			break;
		case 44:
			_0xd8c7162ab2e2af45(1714554710);
			break;
		case 45:
			_0xd8c7162ab2e2af45(-91026072);
			break;
		case 54:
			_0xd8c7162ab2e2af45(893855320);
			break;
		case 55:
			_0xd8c7162ab2e2af45(326709244);
			break;
		case 49:
			_0xd8c7162ab2e2af45(653799702);
			break;
		case 62:
			_0xd8c7162ab2e2af45(415864829);
			break;
		case 64:
			_0xd8c7162ab2e2af45(-1836330842);
			break;
		case 65:
			_0xd8c7162ab2e2af45(648073069);
			break;
		case 66:
			_0xd8c7162ab2e2af45(770074951);
			break;
		case 68:
			_0xd8c7162ab2e2af45(-1276637644);
			break;
		case 71:
			_0xd8c7162ab2e2af45(-431488293);
			break;
		case 72:
			_0xd8c7162ab2e2af45(-1101810198);
			break;
		case 74:
			_0xd8c7162ab2e2af45(-1344767066);
			break;
		case 77:
			_0xd8c7162ab2e2af45(1472232821);
			break;
		case 79:
			_0xd8c7162ab2e2af45(-1368676121);
			break;
		case 63:
			_0xd8c7162ab2e2af45(-33677540);
			break;
		case 80:
			_0xd8c7162ab2e2af45(1602161184);
			_0xd8c7162ab2e2af45(-443207523);
			_0xd8c7162ab2e2af45(-683043834);
			break;
		case 82:
			_0xd8c7162ab2e2af45(147256338);
			_0xd8c7162ab2e2af45(-134804027);
			_0xd8c7162ab2e2af45(2027689141);
			break;
		case 83:
			_0xd8c7162ab2e2af45(-161135375);
			break;
		case 85:
			_0xd8c7162ab2e2af45(1625008147);
			break;
		case 86:
			_0xd8c7162ab2e2af45(121074776);
			break;
		case 87:
			_0xd8c7162ab2e2af45(1876184276);
			break;
		case 89:
			_0xd8c7162ab2e2af45(458479023);
			break;
		case 91:
			_0xd8c7162ab2e2af45(85299473);
			break;
		case 96:
			_0xd8c7162ab2e2af45(-1150244084);
			break;
		case 98:
			_0xd8c7162ab2e2af45(759314201);
			break;
		case 99:
			_0xd8c7162ab2e2af45(2063457042);
			break;
		case 100:
			_0xd8c7162ab2e2af45(1877776161);
			break;
		case 102:
			_0xd8c7162ab2e2af45(2143316225);
			break;
		case 104:
			_0xd8c7162ab2e2af45(-1623232489);
			_0xd8c7162ab2e2af45(-1393093729);
			break;
		case 106:
			_0xd8c7162ab2e2af45(1354284392);
			break;
		case 107:
			_0xd8c7162ab2e2af45(-1430883057);
			break;
		case 109:
			_0xd8c7162ab2e2af45(820139809);
			break;
		case 112:
			_0xd8c7162ab2e2af45(1561007383);
			_0xd8c7162ab2e2af45(-960425936);
			break;
	}
	if (bParam1)
	{
		func_141(iParam0, 64);
	}
}

void func_540(int iParam0, int iParam1)
{
	iVar0 = func_883(iParam0);
	if (iVar0 != 0 && func_9(iParam0, 1))
	{
		vVar1 = { func_884(iParam0) };
		if (iParam1 < 1)
		{
			iParam1 = func_4(iParam0);
		}
		func_885(iParam0, iParam1);
		iParam1 = (iParam1 - 1);
		if (func_9(iParam0, 67108864))
		{
			_0xe057fea9a22eb3ee(iVar0);
		}
		_0x1392105da88bbffb(iVar0, vVar1.x, vVar1.y, 0, iParam1);
		func_10(iParam0, 67108864);
	}
}

int func_541(int iParam0)
{
	iVar1 = iParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_8(&iVar1, -2147483648);
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

int func_542()
{
	return get_player_group(get_player_index());
}

bool func_543(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_1() != -1)
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

bool func_544(int iParam0)
{
	return func_886(iParam0, 6);
}

int func_545(int iParam0)
{
	iVar0 = func_887(iParam0, 6);
	return iVar0;
}

bool func_546(int iParam0)
{
	return func_886(iParam0, 7);
}

int func_547(int iParam0)
{
	iVar0 = func_887(iParam0, 7);
	return iVar0;
}

bool func_548(int iParam0)
{
	return (func_886(iParam0, 4) || func_886(iParam0, 5));
}

int func_549(int iParam0)
{
	iVar0 = func_887(iParam0, 4);
	if (!does_entity_exist(iVar0))
	{
		iVar1 = func_887(iParam0, 5);
		return iVar1;
	}
	return iVar0;
}

void func_550(var uParam0, int iParam1, bool bParam2)
{
	iVar2 = 0;
	if (bParam2)
	{
		iVar2 = 0;
		while (iVar2 <= (iParam1 - 1))
		{
			(*uParam0)[iVar2] = iVar2;
			iVar2++;
		}
	}
	iVar2 = (iParam1 - 1);
	iVar2 = (iParam1 - 1);
	while (iVar2 >= 0)
	{
		iVar1 = get_random_int_in_range(0, iVar2);
		uVar0 = uParam0[iVar2];
		(*uParam0)[iVar2] = uParam0[iVar1];
		(*uParam0)[iVar1] = uVar0;
		iVar2 = (iVar2 + -1);
	}
}

int func_551(bool bParam0, bool bParam1, bool bParam2)
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

bool func_552(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	if (iParam4 < 0 || iParam4 >= *iParam0)
	{
		iParam4 = (*iParam0 - 1);
	}
	iVar0 = iParam3;
	while (iVar0 <= iParam4)
	{
		if (func_357(iParam0[iVar0], iParam1, uParam2, 0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_553(int iParam0, int iParam1, bool bParam2)
{
	if (does_entity_exist(iParam1))
	{
		if (is_vehicle_driveable(iParam1, false, false))
		{
			if (!is_entity_dead(iParam0))
			{
				return is_ped_in_vehicle(iParam0, iParam1, bParam2);
			}
		}
	}
	return false;
}

char* func_554()
{
	return "LOG_HONOR_WAGON_STEAL";
}

void func_555(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_1() != -1)
	{
		return;
	}
	if ((Global_36616 && func_888(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_889(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_890(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_891(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_890(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

void func_556(int iParam0, bool bParam1, int iParam2)
{
	func_892(iParam2);
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
		iParam0->f_13 = func_893(0);
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
							func_143(iParam0, 33554432);
						}
					}
					else if (!*iParam0 & 8192 != 0)
					{
						if (func_894(1))
						{
							func_143(iParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_35) && (!func_894(1) || *iParam0 & 8192 != 0))
				{
					func_199(iParam0, 33554432);
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
			if (func_895(iParam0))
			{
				iParam0->f_15 = func_575();
			}
		}
		else if (iParam0->f_15 > 0)
		{
			if ((func_575() - iParam0->f_15) > 500)
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
	func_896(iParam0);
}

bool func_557(int iParam0, int iParam1)
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
			if (!func_897(iParam0, iParam1, iVar2))
			{
				return false;
			}
			if (func_898(iParam0, iVar2) <= func_899(iParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_558(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		iParam1->f_10 = iParam0;
	}
	if (func_900(iParam2, 1, 1, 1, 0))
	{
		func_143(iParam1, 2048);
	}
	iParam1->f_16 = iParam2;
	func_584(iParam1, 1);
	func_858();
}

bool func_559(int iParam0, int iParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_382(iParam0, !*iParam1 & 268435456 != 0, !*iParam1 & 536870912 != 0, !*iParam1 & 1073741824 != 0, 0, 0))
		{
			if (iParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (iParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_901(iParam1);
			if (func_902(iParam1, iParam0, fVar0, fVar1))
			{
				if (iParam1->f_2 == 0)
				{
					iParam1->f_2 = get_game_timer();
				}
				iVar2 = (get_game_timer() - iParam1->f_2);
				iVar3 = func_903(iParam1);
				if (iParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_584(iParam1, 1);
						return true;
					}
					else if (iParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_584(iParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_560(int iParam0, int iParam1, int iParam2)
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
	if (func_904(iParam1, !*iParam2 & 268435456 != 0, !*iParam2 & 536870912 != 0, !*iParam2 & 1073741824 != 0, 0))
	{
		if (iParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (iParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_901(iParam2);
		if (func_902(iParam2, iParam0, fVar0, fVar1))
		{
			if (iParam2->f_2 == 0)
			{
				iParam2->f_2 = get_game_timer();
			}
			if (iParam2->f_2 != 0)
			{
				if (get_game_timer() - iParam2->f_2) > func_903(iParam2)
				{
					func_584(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_561(int iParam0, int iParam1)
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
	if (func_897(iParam0, iParam1, iVar1))
	{
		if (iParam1->f_3 == 0)
		{
			iParam1->f_3 = get_game_timer();
		}
		else if (get_game_timer() - iParam1->f_3) > func_903(iParam1)
		{
			fVar3 = func_901(iParam1);
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

bool func_562(int iParam0, float fParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_575();
	iVar1 = (iVar0 - iParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_563(var uParam0, int iParam1, int iParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_905(iParam2);
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
			if (func_571(iParam2, iParam1))
			{
				func_584(iParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_564(var uParam0, int iParam1, int iParam2)
{
	if (iParam2->f_12 < IntToFloat(func_906(iParam2)))
	{
		if ((is_weapon_valid(Global_1935630->f_46) && !_0x5809dbca0a37c82b(Global_1935630->f_46)) || get_current_ped_vehicle_weapon(Global_35, &uVar0))
		{
			if (func_571(iParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_584(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_565(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_907(iParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, iParam2->f_22))
				{
					func_584(iParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, iParam2->f_27))
				{
					func_584(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, iParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, iParam2->f_26, &vVar4, 0, 0);
					if (func_908(iParam1, vVar0, vVar4))
					{
						func_584(iParam2, 1);
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
					func_584(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, iParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, iParam2->f_26, &vVar7, 0, 0);
					if (func_908(iParam1, vVar0, vVar7))
					{
						func_584(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_566(int iParam0, int iParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *iParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_897(iParam0, iParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_909(&(Global_1935630->f_34[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_910(&(Global_1935630->f_34[iVar0])))
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
			if (func_911(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_912(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_913(iParam1, iParam0, fVar1, iVar0))
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

bool func_567(int iParam0, int iParam1)
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

bool func_568(int iParam0, int iParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_575();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_569(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_914(iVar0, &iVar2))
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
	if (func_915(iVar0, iParam0))
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

int func_570(int iParam0, int iParam1)
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

bool func_571(int iParam0, int iParam1)
{
	if (func_916(iParam0))
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

bool func_572(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_358(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_573()
{
}

bool func_574(int iParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_35);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_917(iVar0, iParam1, vVar1))
		{
			iParam0->f_9 = func_575();
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
						if (func_430(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								iParam0->f_9 = func_575();
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

int func_575()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_576()
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
	if ((func_575() - Global_1935630->f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_577(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0->f_14))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_899(iParam0);
	if (iParam0->f_12 > func_918(iParam0) && iParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_919(iParam1);
	iVar1 = func_920(iParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((iParam0->f_12 <= fVar0 || ((_0x06087579e7aa85a9(iParam1, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam1, Global_35, true, 0) == 1)) || ((_0x06087579e7aa85a9(iParam1, iParam0->f_14, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, iParam0->f_14, 17)) && _0x7f9b9791d4cb71f6(iParam1, iParam0->f_14, true, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

bool func_578(int iParam0, int iParam1, int iParam2)
{
	if (iParam2->f_12 > 4f)
	{
		return false;
	}
	bVar0 = *iParam2 & 256 != false;
	bVar1 = *iParam2 & 524288 != false;
	bVar2 = *iParam2 & 128 != false;
	return func_921(iParam0, iParam1, bVar0, bVar2, iParam2->f_12, bVar1);
}

bool func_579(int iParam0, int iParam1)
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
		if (func_922(iParam0, iParam1, 1))
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
					if (!func_923(iParam1, iParam0))
					{
						if (func_430(iVar4, Global_36, 1) < 7f)
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

bool func_580(int iParam0, int iParam1)
{
	if (!func_924(0))
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

bool func_581(int iParam0, int iParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_575();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_582(int iParam0, int iParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

bool func_583(int iParam0, int iParam1)
{
	if (!is_ped_human(iParam0))
	{
		return false;
	}
	if (iParam1->f_4 == 0)
	{
		iParam1->f_4 = func_575();
	}
	else if (func_575() - iParam1->f_4) > func_925(iParam1)
	{
		return func_299(iParam0, iParam1, 0, -1082130432);
	}
	return false;
}

void func_584(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_143(iParam0, 134217728);
	}
	else
	{
		func_199(iParam0, 134217728);
	}
}

bool func_585(var uParam0)
{
	if (!does_entity_exist(&(Global_1935630->f_34[0])))
	{
		return false;
	}
	if (is_entity_a_mission_entity(&(Global_1935630->f_34[0])) && does_entity_belong_to_this_script(&(Global_1935630->f_34[0]), true))
	{
		return true;
	}
	iVar0 = func_352(&(Global_1935630->f_34[0]), 0);
	if (func_155(iVar0))
	{
		if (uParam0->f_136 == 1)
		{
			func_160(&iVar1, &iVar2, 0);
		}
		else
		{
			func_161(uParam0->f_137, &iVar1, &iVar2, 0, 0);
		}
		if (iVar0 >= iVar1 && iVar0 <= iVar2)
		{
			return true;
		}
	}
	return false;
}

bool func_586(int iParam0)
{
	if (!does_entity_exist(*iParam0))
	{
		return false;
	}
	if (!has_entity_been_damaged_by_entity(*iParam0, Global_35, 0, 0))
	{
		return false;
	}
	if (!_0x3ec28da1ffac9ddd(*iParam0, Global_35, 0, 0))
	{
		return false;
	}
	if (!func_514(*iParam0, 75))
	{
		return true;
	}
	iVar0 = func_349(Global_35, 0, 1, 0);
	if (func_343(iVar0))
	{
		if (_0x9e2d5d6bc97a5f1e(*iParam0, iVar0, 250))
		{
			return true;
		}
	}
	iVar0 = func_349(Global_35, 1, 1, 0);
	if (func_343(iVar0))
	{
		if (_0x9e2d5d6bc97a5f1e(*iParam0, iVar0, 250))
		{
			return true;
		}
	}
	return false;
}

bool func_587()
{
	if (func_19(32))
	{
		return true;
	}
	if (func_9(1, 2))
	{
		return true;
	}
	if (!func_19(262144))
	{
		return true;
	}
	if (func_19(4096))
	{
		return true;
	}
	if (func_263(Local_2160.f_138, 0))
	{
		return true;
	}
	return false;
}

bool func_588(int iParam0, var uParam1)
{
	if (!is_ped_fleeing(*uParam1))
	{
		return false;
	}
	return true;
}

bool func_589(int iParam0)
{
	if (((iParam0->f_16 == 3 || iParam0->f_16 == 1) || iParam0->f_16 == 6) || iParam0->f_16 == 5)
	{
		return true;
	}
	return false;
}

float func_590(int iParam0)
{
	switch (iParam0->f_16)
	{
		case 1:
		case 3:
			return 180f;
		case 5:
		case 6:
			return 120f;
		default:
			break;
	}
	return 90f;
}

bool func_591(int iParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, float fParam7)
{
	uVar10 = 30;
	Stack.Push(&uVar10);
	Call_Loc(iParam1);
	iVar41 = func_703(&iVar0, &uVar10, 9, vParam2, fParam5, 0, 1, 0, -1, 1, 0, -1082130432, 0, 0);
	if (iVar41 <= 0)
	{
		return false;
	}
	iVar42 = func_926(&iVar0, vParam2, 0, 1, 0, -1);
	if (iVar42 < 0)
	{
		return false;
	}
	*iParam0 = &iVar0[iVar42];
	if (bParam6)
	{
		while (!is_ped_facing_ped(&(iVar0[iVar42]), Global_35, fParam7))
		{
			iVar0[iVar42] = 0;
			iVar42 = func_926(&iVar0, vParam2, 0, 1, 0, -1);
			if (iVar42 < 0)
			{
			}
		else
		{
			}
		}
	}
	return true;
}

int func_592(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return 2;
		case 9:
			return 2;
		case 7:
			return 2;
		case 0:
			return 3;
		case 3:
			return 4;
		default:
			break;
	}
	return 0;
}

bool func_593(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	iVar0 = func_927(iParam0, 4, iParam2);
	if (does_entity_exist(iVar0))
	{
		*iParam1 = get_entity_model(iVar0);
		return true;
	}
	iVar1 = func_927(iParam0, 5, iParam2);
	if (does_entity_exist(iVar1))
	{
		*iParam1 = get_entity_model(iVar1);
		return true;
	}
	return false;
}

int func_594(int iParam0)
{
	return iParam0;
}

void func_595(int iParam0)
{
	if (!func_928(iParam0))
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

bool func_596()
{
	return _does_volume_exist(Global_1914319->f_3[11]->f_25);
}

void func_597(int iParam0)
{
	if (func_155(Global_1914319->f_3[iParam0]->f_21) && func_509(Global_1914319->f_3[iParam0]->f_21))
	{
		func_264(Global_1914319->f_3[iParam0]->f_21, 0, 1, 0, 0);
	}
	Global_1914319->f_3[iParam0]->f_11 = { 0f, 0f, 0f };
	Global_1914319->f_3[iParam0]->f_21 = -1;
	Global_1914319->f_3[iParam0]->f_22 = -1;
	Global_1914319->f_3[iParam0]->f_17 = 0;
	Global_1914319->f_3[iParam0]->f_1 = 0;
	if (_0x91a5f9cbebb9d936(Global_1914319->f_3[iParam0]->f_34))
	{
		remove_scenario_blocking_area(Global_1914319->f_3[iParam0]->f_34, false);
	}
	func_929(Global_1914319->f_3[iParam0]->f_10, 0);
	func_304(iParam0, 536870912);
	iVar1 = func_930(iParam0);
	if (iVar1 >= 15)
	{
		Global_1914319->f_3[iParam0]->f_408 = 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			func_931(&(Global_1914319->f_3[iParam0]->f_317[iVar0]));
			Global_1914319->f_3[iParam0]->f_317[iVar0] = 0;
			Global_1914319->f_3[iParam0]->f_317[iVar0]->f_1 = { 0f, 0f, 0f };
			Global_1914319->f_3[iParam0]->f_317[iVar0]->f_4 = 0f;
			Global_1914319->f_3[iParam0]->f_317[iVar0]->f_5 = 0;
			iVar0++;
		}
		Global_1914319->f_3[iParam0]->f_408 = 0;
	}
	if (Global_1914319->f_3[iParam0]->f_440 != 0)
	{
		_0x2f901291ef177b02(Global_1914319->f_3[iParam0]->f_440, 0);
	}
	Global_1914319->f_3[iParam0]->f_23 = 0;
	func_932(iParam0);
	Global_1914319->f_3[iParam0]->f_10 = -1;
	Global_1914319->f_3[iParam0]->f_9 = -1;
	func_933(iParam0, 0);
}

void func_598(int iParam0, bool bParam1)
{
	if (!func_934(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_935(iParam0, 1);
	}
	else
	{
		func_936(iParam0, 1);
	}
	func_938(func_937(iParam0), bParam1);
}

bool func_599(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 35);
}

int func_600(int iParam0)
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

int func_601(int iParam0)
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

int func_602(int iParam0)
{
	return iParam0 & 31;
}

int func_603(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 0;
		case 5:
		case 6:
		case 9:
		case 10:
		case 11:
		case 13:
		case 14:
		case 15:
		case 25:
			return 1;
		case 12:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 26:
		case 53:
			return 2;
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 37:
			return 3;
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			return 4;
		case 44:
		case 45:
		case 46:
		case 47:
		case 49:
		case 50:
		case 51:
		case 52:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			return 5;
		case 59:
			return 6;
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
			return 7;
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
			return 8;
	}
	return -1;
}

int func_604(int iParam0)
{
	switch (iParam0)
	{
		case 120:
			return 0;
		case 0:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 94:
		case 97:
		case 98:
		case 112:
		case 113:
		case 114:
			return 1;
		case 3:
		case 4:
		case 5:
		case 37:
		case 67:
		case 76:
		case 134:
			return 2;
		case 115:
		case 116:
			return 3;
		case 58:
		case 64:
		case 68:
		case 82:
		case 83:
			return 5;
		case 1:
		case 2:
		case 8:
		case 9:
		case 10:
		case 96:
			return 8;
	}
	return -1;
}

void func_605(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_606()
{
	fVar0 = get_random_float_in_range(0f, 1f);
	if (fVar0 < 0.01f)
	{
		return 19;
	}
	if (fVar0 < 0.16f)
	{
		return 15;
	}
	if (fVar0 < 0.31f)
	{
		return 17;
	}
	if (fVar0 < 0.46f)
	{
		return 16;
	}
	if (fVar0 < 0.61f)
	{
		return 18;
	}
	return 0;
}

int func_607(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 112;
		case 2:
			return 113;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 8:
			return 7;
		case 9:
			return 8;
		case 10:
			return 9;
		case 11:
			return 10;
		case 12:
			return 11;
		case 15:
			return 12;
		case 16:
			return 13;
		case 17:
			return 15;
		case 19:
			return 17;
		case 20:
			return 18;
		case 21:
			return 19;
		case 22:
			return 20;
		case 23:
			return 21;
		case 25:
			return 23;
		case 26:
			return 25;
		case 27:
			return 26;
		case 28:
			return 62;
		case 29:
			return 27;
		case 49:
			return 28;
		case 30:
			return 29;
		case 31:
			return 30;
		case 32:
			return 31;
		case 120:
			return 32;
		case 124:
			return 33;
		case 125:
			return 34;
		case 33:
			return 35;
		case 83:
			return 40;
		case 35:
			return 42;
		case 36:
			return 43;
		case 89:
			return 44;
		case 115:
			return 46;
		case 37:
			return 47;
		case 38:
			return 48;
		case 39:
			return 49;
		case 40:
			return 50;
		case 50:
			return 51;
		case 42:
			return 52;
		case 52:
			return 53;
		case 43:
			return 54;
		case 45:
			return 57;
		case 48:
			return 61;
		case 56:
			return 63;
		case 57:
			return 64;
		case 58:
			return 65;
		case 59:
			return 66;
		case 60:
			return 67;
		case 61:
			return 68;
		case 126:
			return 69;
		case 127:
			return 70;
		case 62:
			return 71;
		case 77:
			return 72;
		case 64:
			return 73;
		case 65:
			return 74;
		case 67:
			return 76;
		case 68:
			return 78;
		case 69:
			return 79;
		case 70:
			return 80;
		case 71:
			return 81;
		case 72:
			return 82;
		case 75:
			return 84;
		case 76:
			return 85;
		case 117:
			return 86;
		case 78:
			return 87;
		case 79:
			return 88;
		case 80:
			return 90;
		case 81:
			return 91;
		case 82:
			return 92;
		case 87:
			return 96;
		case 88:
			return 97;
		case 91:
			return 98;
		case 92:
			return 99;
		case 93:
			return 100;
		case 94:
			return 101;
		case 95:
			return 102;
		case 96:
			return 103;
		case 97:
			return 104;
		case 98:
			return 105;
		case 99:
			return 106;
		case 100:
			return 107;
		case 104:
			return 114;
		case 105:
			return 115;
		case 107:
			return 118;
		case 109:
			return 119;
		case 110:
			return 120;
		case 111:
			return 121;
		case 112:
			return 122;
		case 128:
			return 123;
		default:
			break;
	}
	return 0;
}

void func_608(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

void func_609(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_939(iParam0);
	}
	else
	{
		func_940(iParam0, iParam1);
	}
	func_941();
}

bool func_610(int iParam0)
{
	iVar0 = func_942(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_611(int iParam0)
{
	if (!func_98(iParam0))
	{
		return false;
	}
	switch (func_309(iParam0))
	{
		case 1:
			switch (func_433(iParam0))
			{
				case 9:
				case 18:
				case 23:
				case 24:
				case 26:
				case 33:
				case 34:
				case 37:
				case 38:
				case 39:
				case 40:
				case 41:
				case 42:
				case 43:
				case 47:
				case 59:
				case 66:
					return true;
			}
			break;
		case 8:
			switch (func_433(iParam0))
			{
				case 2:
				case 58:
				case 62:
				case 96:
					return true;
			}
			break;
	}
	return false;
}

void func_612(int iParam0)
{
	iVar2 = func_943(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_944(iVar1) == iParam0)
		{
			_0x6a564540fac12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_946(func_945(iParam0), 6);
}

void func_613(int iParam0)
{
	iVar2 = func_943(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_944(iVar1) == iParam0)
		{
			_0x766315a564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_947(func_945(iParam0), 6);
}

int func_614(int iParam0)
{
	if (iParam0 == 0 || iParam0 == -1)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (&Global_1898164->f_1[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_615(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1898164->f_162 == 0)
	{
		return 0;
	}
	if (Global_1898164->f_162 == 1)
	{
		Global_1898164->f_162 = 0;
		*Global_1898164->f_1[0] = { Var0 };
		return 1;
	}
	*Global_1898164->f_1[iParam0] = { Var0 };
	Global_1898164->f_162 = (Global_1898164->f_162 - 1);
	func_948(iParam0, Global_1898164->f_162);
	return 1;
}

bool func_616(var uParam0, char* sParam1)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return false;
	}
	return _0x6f1f0b17109309da(*uParam0, sParam1);
}

bool func_617(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = func_618(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

int func_618(int iParam0)
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

void func_619(int iParam0)
{
	iParam0 = func_949(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_950(iParam0, 32);
	func_951();
}

void func_620(int iParam0)
{
	iParam0 = func_949(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_621(iParam0);
	if (!_does_thread_exist(iVar0))
	{
		func_623(iParam0);
	}
	else if (!is_thread_active(iVar0, false))
	{
		func_623(iParam0);
	}
}

int func_621(int iParam0)
{
	iParam0 = func_949(iParam0);
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

bool func_622(int iParam0)
{
	iParam0 = func_949(iParam0);
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

void func_623(int iParam0)
{
	iParam0 = func_949(iParam0);
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

void func_624(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!func_138(iParam0))
	{
		return;
	}
	if (!bParam6)
	{
		*uParam1 = Global_40.f_9096[iParam0]->f_3;
	}
	iVar0 = ((((iParam2 * 86400) + iParam3 * 3600) + iParam4 * 60) + iParam5);
	if ((*uParam1 + iVar0) < 0)
	{
		*uParam1 = 0;
	}
	else
	{
		*uParam1 = (*uParam1 + iVar0);
	}
}

void func_625(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_143(iParam0, 64);
	}
	else
	{
		func_199(iParam0, 64);
	}
}

void func_626(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_143(iParam0, 1048576);
	}
	else
	{
		func_199(iParam0, 1048576);
	}
}

bool func_627()
{
	return (Global_1894899 & 1 != 0 && func_952() != -1);
}

bool func_628(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_629(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
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
	return func_953(iParam0, &Var0);
}

float func_630(var uParam0)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return 0f;
	}
	return _get_anim_scene_progress(*uParam0);
}

void func_631(var uParam0, Vector3* vParam1, Vector3* vParam2)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return;
	}
	_get_anim_scene_origin(*uParam0, vParam1, vParam2, 2);
}

void func_632(var uParam0, char* sParam1, bool bParam2)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return;
	}
	if (!func_954(uParam0, sParam1))
	{
		return;
	}
	_set_anim_scene_playback_list_bool(*uParam0, sParam1, bParam2);
}

void func_633(var uParam0, char* sParam1)
{
	func_955(uParam0, sParam1, 1);
}

bool func_634(var uParam0, char* sParam1)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return false;
	}
	return _0x1f0e401031e20146(*uParam0, sParam1);
}

int func_635(int iParam0, int iParam1, int iParam2)
{
	vVar0 = { get_entity_coords(iParam1, false, false) };
	return func_956(iParam0, vVar0, iParam2);
}

char* func_636(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					return "PB_PRE_BRKOUT_BACK";
				case 0:
					return "PB_PRE_BRKOUT_N";
				case 3:
					return "PB_PRE_BRKOUT_L";
				case 2:
					return "PB_PRE_BRKOUT_R";
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 1:
					return "PB_SAW_BRKOUT_A_BACK";
				case 0:
					return "PB_SAW_BRKOUT_A_N";
				case 3:
					return "PB_SAW_BRKOUT_A_L";
				case 2:
					return "PB_SAW_BRKOUT_A_R";
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 1:
					return "PB_SAW_B_BRKOUT_BACK";
				case 0:
					return "PB_SAW_B_BRKOUT_N";
				case 3:
					return "PB_SAW_B_BRKOUT_L";
				case 2:
					return "PB_SAW_B_BRKOUT_R";
				default:
					break;
			}
			break;
	}
	return "";
}

int func_637(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return -1;
	}
	if (!func_161(iParam1, &uVar0, &iVar1, 0, 0))
	{
		return -1;
	}
	return func_957(iParam0, uVar0, iVar1, bParam2);
}

bool func_638(int iParam0, int iParam1)
{
	fVar0 = func_958(iParam1);
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
		fVar2 = func_959(_0x2ba9d7bf629f920c(iParam0), (fVar0 + 5f));
		if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, fVar2, -1f, fVar1) && _0x7f9b9791d4cb71f6(iParam0, Global_35, true, 0) == 1)
		{
			return true;
		}
		else if (is_weapon_valid(Global_1935630->f_44))
		{
			if (_is_weapon_lantern(Global_1935630->f_44) || _is_weapon_torch(Global_1935630->f_44))
			{
				if (iParam1->f_12 <= 5f)
				{
					if (func_960())
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

bool func_639(int iParam0, int iParam1)
{
	if (func_961(iParam0))
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

int func_640(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_641(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_642(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_59(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_643(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_644(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_645(int iParam0, int iParam1)
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

void func_646(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_962(iParam0, iParam6);
	func_963(iParam0, iParam5);
	func_964(iParam0, iParam4);
	func_965(iParam0, iParam3);
	func_966(iParam0, iParam2);
	func_967(iParam0, iParam1);
}

bool func_647(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_365(iParam1) || !func_365(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

int func_648(int iParam0, int iParam1, int iParam2)
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

int func_649(int* iParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	iVar0 = iParam9;
	func_968(&iVar0);
	if (func_368(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_969(iParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_368(iVar0, 134217728))
	{
		func_970(iParam1, uParam3, iParam0);
	}
	if (!*iParam4)
	{
		if (!is_bit_set(*iParam1, 25))
		{
			if (is_bit_set(*iParam1, 24))
			{
				if (!func_971(558))
				{
					func_972(558, 0);
				}
				set_bit(iParam1, 24);
				set_bit(iParam1, 25);
			}
		}
	}
	return iVar1;
}

char* func_650(int iParam0)
{
	if (func_973(iParam0))
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

void func_651(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
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
		if (func_301(iParam0->f_6))
		{
			if (is_bit_set(*iParam0, 1))
			{
				func_974(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_975(iParam0->f_6, iParam0->f_5, 0);
			}
			func_828(iParam0->f_6, 0, 1);
		}
		else
		{
			set_bit(iParam0, 14);
		}
		set_bit(iParam0, 0);
	}
	else
	{
		func_976(iParam0, iParam0->f_5);
		if (!is_bit_set(*iParam0, 13))
		{
			set_bit(iParam0, 0);
		}
	}
	set_bit(iParam0, 15);
}

void func_652(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_977(iParam0, 13))
	{
		func_978(iParam0, 0);
	}
	else
	{
		func_979(iParam0, 0);
	}
	if (func_301(iParam0->f_6))
	{
		if (bParam2)
		{
			func_302(&(iParam0->f_6), 0, 1);
		}
	}
}

void func_653(int* iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_977(iParam0, 4))
		{
			func_302(&(iParam0->f_6), 1, 1);
			func_978(iParam0, 4);
		}
	}
	else if (func_977(iParam0, 4))
	{
		func_979(iParam0, 4);
		func_978(iParam0, 14);
	}
}

void func_654(int* iParam0, int iParam1)
{
	iParam0->f_14 = iParam1;
}

void func_655(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_978((*uParam0)[iVar0], 9);
		iVar0++;
	}
}

char* func_656(int* iParam0)
{
	switch (iParam0->f_15)
	{
		case 0:
			if (func_132(iParam0, 16))
			{
				return "DEFUSE_LEFT_PROPERTY_KEEP_GOING";
			}
			switch (iParam0->f_16)
			{
				case 0:
					return "DEFUSE_ARGUMENT";
				default:
					break;
			}
			return "DEFUSE_ARGUMENT_TOUGH";
		case 1:
			if (func_132(iParam0, 16))
			{
				return "KEEP_GOING_ANTAGONZIZE_RESPONSE";
			}
			switch (iParam0->f_16)
			{
				case 0:
					StringCopy(&cVar4, "INSULT_MALE_CONV", 32);
					StringConCat(&cVar4, "_PART", 32);
					_int_to_string(1, "%d", &cVar0);
					StringConCat(&cVar4, &cVar0, 32);
					return func_663(cVar4);
				case 8:
					return "LAW_LOW_SEVERITY_ANTAGONIZE";
			}
			return "LAW_LOW_SEVERITY_ANTAGONIZE";
	}
	return "DEFUSE_ARGUMENT_TOUGH";
}

char* func_657(int* iParam0)
{
	switch (iParam0->f_15)
	{
		case 0:
			if (func_132(iParam0, 16))
			{
				return "GUARD_PLAYER_LOITERING";
			}
			switch (iParam0->f_16)
			{
				case 0:
					return "DEFUSE_RESPONSE";
				case 8:
					return "WON_DISPUTE";
				default:
					break;
			}
			return "DEFUSE_RESPONSE";
		case 1:
			if (func_132(iParam0, 16))
			{
				return "GUARD_PLAYER_LOITERING";
			}
			switch (iParam0->f_16)
			{
				case 0:
					return "DEFUSE_RESPONSE";
				case 8:
					return "WON_DISPUTE_ESCALATED_ARMED";
				default:
					break;
			}
			return "DEFUSE_RESPONSE";
	}
	return "DEFUSE_RESPONSE";
}

bool func_658(var uParam0)
{
	return func_980(*uParam0, 1);
}

bool func_659(var uParam0)
{
	return func_980(*uParam0, 2);
}

float func_660(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

bool func_661(char* sParam0)
{
	if (_0xd89504d9d7d5057d(sParam0))
	{
		start_preloaded_conversation(sParam0);
		return true;
	}
	return false;
}

bool func_662(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_981(cParam1, cParam0);
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

var func_663(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

var func_664(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_665(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_982(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

void func_666(int iParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		func_983(iParam0);
		func_984(iParam1, uParam2);
	}
	func_243(*iParam0, 1, bParam4);
}

void func_667(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (&iLocal_1149[iParam4] > 3 && &iLocal_1149[iParam4] < 8)
	{
		if ((!is_entity_dead(*iParam2) && !get_is_task_active(*iParam2, 3)) || (!is_entity_dead(*iParam3) && !get_is_task_active(*iParam3, 3)))
		{
			iVar0 = -1;
			if (!func_132(&Local_972, 1))
			{
				if (!is_entity_dead(*iParam2) && !get_is_task_active(*iParam2, 3))
				{
					Local_972 = func_63(func_326(9, 0, *iParam0));
					iVar0 = 0;
				}
				if (!is_entity_dead(*iParam2) && !get_is_task_active(*iParam3, 3))
				{
					Local_972 = *iParam3;
					iVar0 = 1;
				}
				if (func_985(func_63(func_326(9, iVar0, *iParam0)), Global_35, 0, 5f, 0))
				{
					func_292(&Local_972, &Local_2160, 2048, 54329, 0, 0);
				}
			}
			func_327(Local_1039[(9 + iParam4)], *iParam2, "PED1");
			func_679(9, 0, *iParam0, 0 == iVar0);
			func_327(Local_1039[(9 + iParam4)], *iParam3, "PED2");
			func_679(9, 1, *iParam0, 1 == iVar0);
			if (does_entity_exist((Local_1157.f_690[(15 + *iParam1)])->f_8))
			{
				if (has_anim_event_fired((Local_1157.f_690[(15 + *iParam1)])->f_8, -1984935666))
				{
					freeze_entity_position((Local_1157.f_690[(15 + *iParam1)])->f_8, true);
				}
				else
				{
					func_327(Local_1039[(9 + iParam4)], (Local_1157.f_690[(15 + *iParam1)])->f_8, "SAW");
					freeze_entity_position((Local_1157.f_690[(15 + *iParam1)])->f_8, false);
					activate_physics((Local_1157.f_690[(15 + *iParam1)])->f_8);
				}
			}
			func_216(Local_1039[(9 + iParam4)]);
			iLocal_1149[iParam4] = 10;
		}
	}
}

void func_668(int iParam0, int iParam1)
{
	if (!does_entity_exist(*iParam1))
	{
		return;
	}
	if (has_anim_event_fired(*iParam1, -137640087))
	{
		iVar0 = 0;
	}
	else if (has_anim_event_fired(*iParam1, -1300850144))
	{
		iVar0 = 1;
	}
	else if (has_anim_event_fired(*iParam1, -1011860333))
	{
		iVar0 = 2;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (iVar1 == iVar0)
		{
			if (!func_954(Local_1039[(9 + iParam0)], func_636(iVar1, iVar2)) && !func_986(Local_1039[(9 + iParam0)], func_636(iVar1, iVar2)))
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					func_726(Local_1039[(9 + iParam0)], func_636(iVar1, iVar2));
					iVar2++;
				}
			}
		}
		else if (func_954(Local_1039[(9 + iParam0)], func_636(iVar1, iVar2)))
		{
			iVar2 = 0;
			while (iVar2 < 4)
			{
				func_987(Local_1039[(9 + iParam0)], func_636(iVar1, iVar2));
				iVar2++;
			}
		}
		iVar1++;
	}
}

void func_669(int iParam0, int iParam1, int iParam2)
{
	if (is_entity_dead(*iParam0) || is_entity_dead(*iParam1))
	{
		return;
	}
	if (func_325(Local_1039[(9 + iParam2)]))
	{
		func_988(iParam0, iParam1, iParam2);
		if (_0xa454d234e45bb6e5(*iParam0, get_player_index()))
		{
			iVar0 = *iParam0;
			bVar1 = true;
			set_ped_config_flag(*iParam0, 330, true);
		}
		else if (_0x9337183fda2e9035(*iParam0, get_player_index()))
		{
			iVar0 = *iParam0;
		}
		else if (_0xa454d234e45bb6e5(*iParam1, get_player_index()))
		{
			iVar0 = *iParam1;
			bVar1 = true;
			set_ped_config_flag(*iParam1, 330, true);
		}
		else if (_0x9337183fda2e9035(*iParam1, get_player_index()))
		{
			iVar0 = *iParam1;
		}
		if (iVar967 == *iParam0 || iVar967 == *iParam1)
		{
			func_339(iParam2);
			iLocal_1149[iParam2] = 8;
			return;
		}
		if (func_68(func_989(iParam2)))
		{
			if (!is_string_null_or_empty(&((Local_1039[(9 + iParam2)])->f_1)) && func_763(Local_1039[(9 + iParam2)]))
			{
				func_764(Local_1039[(9 + iParam2)], 1, 1);
				StringCopy(&((Local_1039[(9 + iParam2)])->f_1), "", 24);
			}
			if (!does_entity_exist(iVar0))
			{
				func_330(func_989(iParam2));
			}
		}
		else
		{
			if (does_entity_exist(iVar0))
			{
				func_69(func_989(iParam2));
			}
			if (func_68(func_989(iParam2)))
			{
				vVar2 = { func_990(iParam0, &(iLocal_1033[iParam2]), bVar1) };
				if (!is_string_null_or_empty(&vVar2))
				{
					func_813(Local_1039[(9 + iParam2)], &vVar2);
				}
			}
		}
	}
}

int func_670(int iParam0, int iParam1)
{
	iVar2 = func_592(iParam0);
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		iVar1 = func_326(iParam0, iVar0, iParam1);
		func_62(iVar1, 1, 1);
		iVar0++;
	}
	return iVar0;
}

Vector3 func_671(int iParam0)
{
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -1420.942f, -208.586f, 101.032f;
				case 1:
					return -1438.671f, -232.235f, 100.8f;
				case 2:
					return -1341.562f, -241.489f, 102.385f;
				case 3:
					return -1357.351f, -210.654f, 100.106f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -1471.529f, -213.686f, 106.224f;
				case 1:
					return -1458.017f, -203.588f, 104.849f;
				case 2:
					return -1341.562f, -241.489f, 102.385f;
				case 3:
					return -1357.351f, -210.654f, 100.106f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -1471.529f, -213.686f, 106.224f;
				case 1:
					return -1458.017f, -203.588f, 104.849f;
				case 2:
					return -1341.562f, -241.489f, 102.385f;
				case 3:
					return -1357.351f, -210.654f, 100.106f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_672(int iParam0)
{
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1.325f, 0.462f, 0.828f;
				case 1:
					return -3.665f, -3.93f, -126.538f;
				case 2:
					return 0.108f, 4.907f, 65.588f;
				case 3:
					return -1.141f, -1.304f, 121.306f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 2.356f, -4.206f, -176.376f;
				case 1:
					return 0.695f, 11.828f, 47.142f;
				case 2:
					return 0.108f, 4.907f, 65.588f;
				case 3:
					return -1.141f, -1.304f, 121.306f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 2.356f, -4.206f, -176.376f;
				case 1:
					return 0.695f, 11.828f, 47.142f;
				case 2:
					return 0.108f, 4.907f, 65.588f;
				case 3:
					return -1.141f, -1.304f, 121.306f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_673(var uParam0, vector3 vParam1, vector3 vParam4)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return;
	}
	set_anim_scene_origin(*uParam0, vParam1, vParam4, 2);
}

void func_674(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return;
	}
	if (bParam3 && is_entity_dead(iParam1))
	{
		return;
	}
	if (!func_616(uParam0, sParam2))
	{
		return;
	}
	set_anim_scene_entity(*uParam0, sParam2, iParam1, 0);
}

void func_675(var uParam0, int iParam1, char* sParam2)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return;
	}
	if (!func_616(uParam0, sParam2))
	{
		return;
	}
	set_anim_scene_entity(*uParam0, sParam2, iParam1, 0);
}

void func_676(var uParam0)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return;
	}
	start_anim_scene(*uParam0);
}

bool func_677(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_430(iParam0, Global_36, 1);
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

bool func_678(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, bool bParam5, int iParam6)
{
	if (func_991(iParam0, iParam1, sParam2, iParam3, fParam4, bParam5, iParam6 == 0))
	{
		return true;
	}
	return false;
}

void func_679(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = func_326(iParam0, iParam1, iParam2);
	if (!bParam3)
	{
		func_75(iVar0, 1);
		func_992(1, &Local_1157);
	}
}

void func_680()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_115(func_682(iVar0)))
		{
		}
		else
		{
			iVar0++;
		}
	}
	if (iVar0 >= 4)
	{
		return;
	}
	iVar1 = (810 + iVar0);
	iVar2 = func_63(iVar1);
	if (func_993(&iVar2, iVar1))
	{
		func_75(iVar1, 1);
		func_466(func_681(iVar0), 0);
		func_684(func_682(iVar0));
	}
}

int func_681(int iParam0)
{
	if ((!func_19(64) && func_5(Local_2160.f_136, 536870912)) && iParam0 == func_6())
	{
		iParam0 = 4;
	}
	else if ((iLocal_98 == 1 && iParam0 == 1) && func_19(262144))
	{
		iParam0 = 4;
	}
	return iParam0;
}

int func_682(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 16;
		case 1:
			return 32;
		case 2:
			return 64;
		case 3:
			return 128;
		default:
			break;
	}
	return 0;
}

int func_683()
{
	return -1939316457;
}

void func_684(int iParam0)
{
	iLocal_102 = (iLocal_102 - (iLocal_102 && iParam0));
}

void func_685()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = func_681(iVar0);
		if (func_421(iVar1) && (!func_19(64) || iVar1 != 0))
		{
			func_994(iVar0);
		}
		iVar0++;
	}
}

int func_686(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 16777216;
		case 1:
			return 33554432;
		case 2:
			return 67108864;
		case 3:
			return 134217728;
		default:
			break;
	}
	return 0;
}

void func_687(int iParam0)
{
	iVar0 = (810 + iParam0);
	iVar1 = func_63(iVar0);
	iVar2 = func_681(iParam0);
	if (func_995(iVar2, &iVar1))
	{
		if (func_854(iVar2))
		{
			bVar3 = true;
		}
		else if (get_state_of_rayfire_map_object(&(iLocal_1014[iVar2])) == 4)
		{
		}
		else
		{
			func_460(iVar2);
			return;
		}
	}
	if (!does_rayfire_map_object_exist(&(iLocal_1014[iVar2])))
	{
		func_460(iVar2);
		return;
	}
	if (func_996(iParam0, bVar3))
	{
		set_state_of_rayfire_map_object(&(iLocal_1014[iVar2]), 6);
		if (!func_421(iVar2))
		{
			func_855(iVar2);
		}
		if (!(func_19(64) && iVar2 == 0))
		{
			func_114(iVar1, Global_35, "LOG_TIMBER", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			func_684(func_682(iParam0));
		}
		force_sonar_blips_this_frame();
		trigger_sonar_blip(348490638, func_429(iVar2));
		if (!((iLocal_98 == 1 && func_19(64)) && iParam0 == 0))
		{
			func_457(iVar2);
		}
		return;
	}
	bVar3 = false;
}

void func_688(int iParam0)
{
	if (decor_exist_on(*iParam0, "interactNeg"))
	{
		iVar0 = decor_get_int(*iParam0, "interactNeg");
	}
	if (iVar0 > 0)
	{
		set_ped_config_flag(*iParam0, 330, true);
	}
}

void func_689(int iParam0)
{
	if (iParam0 > 5)
	{
		return;
	}
	iVar0 = (810 + iParam0);
	if (!func_155(iVar0))
	{
		return;
	}
	iVar1 = func_63(iVar0);
	if (is_entity_dead(iVar1))
	{
		return;
	}
	iVar2 = func_681(iParam0);
	if (func_422(iVar2))
	{
		return;
	}
	if (func_421(iVar2))
	{
		return;
	}
	if (!_does_scenario_point_exist(&(uLocal_1026[iVar2])))
	{
		return;
	}
	if (!func_129(iVar1, 1435919172))
	{
		_task_use_scenario_point(iVar1, &(uLocal_1026[iVar2]), 0, -1, true, false, 0, false, -1f, false);
	}
}

void func_690(int iParam0, int iParam1)
{
	if (!does_entity_exist(*iParam0))
	{
		return;
	}
	if (!func_115(func_997(iParam1)))
	{
		if (_0x9337183fda2e9035(*iParam0, get_player_index()) || _0xa454d234e45bb6e5(*iParam0, get_player_index()))
		{
			func_35(func_997(iParam1));
		}
	}
	else if (!(_0x9337183fda2e9035(*iParam0, get_player_index()) || _0xa454d234e45bb6e5(*iParam0, get_player_index())))
	{
		fVar0 = func_375(vLocal_1117[0]);
		if ((60f - fVar0) < 15f)
		{
			if (fVar0 >= 60f)
			{
				fVar0 = (60f - 15f);
			}
			else
			{
				fVar0 = (fVar0 - 15f);
			}
			func_222(vLocal_1117[0], fVar0);
		}
		func_684(func_997(iParam1));
	}
}

bool func_691(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (!is_entity_dead(*iParam0) && !decor_exist_on(*iParam0, "bChopDown"))
	{
		if (_get_scenario_point_type_ped_is_using(*iParam0) != func_683())
		{
			return false;
		}
		if (!is_ped_active_in_scenario(*iParam0, 0))
		{
			return false;
		}
		bVar0 = func_19(524288);
		if (iParam3 == func_6() && func_5(Local_2160.f_136, 1073741824))
		{
			func_13(524288, bVar0);
			func_684(256);
			return true;
		}
		if (func_19(64) && !func_422(0))
		{
			return false;
		}
		if (func_115(func_997(iParam3)))
		{
			return false;
		}
		if (func_658(vLocal_1117[0]))
		{
			fVar1 = func_375(vLocal_1117[0]);
			if (func_115(256))
			{
				fVar2 = 90f;
			}
			else if (func_279(*iParam0, 1, 1) < 5f)
			{
				fVar2 = 7.5f;
			}
			else if (!func_998())
			{
				fVar2 = 15f;
			}
			else
			{
				fVar2 = 60f;
			}
			if (fVar1 < fVar2)
			{
				return false;
			}
		}
		if (func_19(32))
		{
			return false;
		}
		else if (func_19(64) && iParam3 == 0)
		{
			return false;
		}
		else if (((iLocal_98 == 1 && iParam3 == 1) && !func_51(4096)) && !func_19(262144))
		{
			return false;
		}
		if (func_5(Local_2160.f_136, 536870912) && iParam3 == func_6())
		{
			return false;
		}
		if (func_252(*iParam0, uParam1, iParam2, &bVar0, 1f, 45f, 0f, 0, 25f, 1))
		{
			func_13(524288, bVar0);
			func_684(256);
			return true;
		}
		func_13(524288, bVar0);
	}
	return false;
}

void func_692(int iParam0, int iParam1)
{
	if (func_251(*iParam0, 0, 1) && !decor_exist_on(*iParam0, "bChopDown"))
	{
		force_sonar_blips_this_frame();
		_trigger_sonar_blip_2(1515458263, *iParam0);
		if (!(func_19(64) && iParam1 == 0))
		{
			func_114(*iParam0, Global_35, func_999(), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		iVar0 = func_681(iParam1);
		func_1000(iParam1);
		iLocal_75[2] = _create_volume_box_with_custom_name(func_428(iVar0), func_1001(iVar0), 5f, 30f, 5f, "volTreeFall");
		_0xb56d41a694e42e86(&(iLocal_75[2]), 534496, 0, 0, -1, -1, 2);
		func_1002(iVar0);
		_0xb56d41a694e42e86(&(iLocal_75[2]), 0, 0, 0, -1, -1, 2);
		decor_set_bool(*iParam0, "bChopDown", true);
		set_ped_config_flag(*iParam0, 178, false);
		set_ped_config_flag(*iParam0, 389, true);
		vVar1 = { get_entity_coords(*iParam0, true, false) };
	}
}

bool func_693(var uParam0)
{
	return (_does_anim_scene_exist(uParam0->f_156) && _is_anim_scene_started(uParam0->f_156, false));
}

void func_694()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = (810 + iVar0);
		func_1003(iVar1);
		iVar0++;
	}
}

void func_695(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_35(32768);
			return;
		case 1:
			func_35(65536);
			return;
		case 2:
			func_35(131072);
			return;
		case 3:
			func_35(262144);
			return;
		case 4:
			func_35(524288);
			return;
	}
}

void func_696()
{
	bVar1 = true;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!func_422(iVar0))
		{
			bVar1 = false;
		}
		else
		{
			iVar0++;
		}
	}
	if (bVar1)
	{
		func_35(512);
	}
}

void func_697(int iParam0, bool bParam1)
{
	func_762(iParam0, 0, bParam1);
	func_762(iParam0, 1, bParam1);
	func_762(iParam0, 2, bParam1);
}

bool func_698()
{
	return (Global_1935689->f_1 || &Global_1935689 == 1);
}

bool func_699()
{
	return Global_1935689->f_1;
}

bool func_700()
{
	return &Global_1357517;
}

char* func_701()
{
	return "INSULT_RESPONSE";
}

char* func_702()
{
	StringCopy(&cVar4, "INSULT_MALE_CONV", 32);
	StringConCat(&cVar4, "_PART", 32);
	_int_to_string(1, "%d", &cVar0);
	StringConCat(&cVar4, &cVar0, 32);
	return func_663(cVar4);
}

int func_703(int iParam0, var uParam1, int iParam2, vector3 vParam3, float fParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, bool bParam12, float fParam13, bool bParam14, bool bParam15)
{
	if (fParam13 <= 0f)
	{
		iVar0 = _create_volume_sphere(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	}
	else
	{
		iVar0 = _create_volume_cylinder(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam13);
	}
	iVar1 = func_1004(iParam0, uParam1, iParam2, iVar0, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12, bParam14, bParam15);
	func_109(iVar0);
	return iVar1;
}

bool func_704(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	switch (uParam0->f_17)
	{
		case 0:
			if (uParam0->f_25 >= *iParam1)
			{
				uParam0->f_25 = 0;
			}
			if (uParam0->f_24 >= uParam0->f_26 || uParam0->f_23 >= uParam0->f_26)
			{
				uParam0->f_17 = 4;
				return false;
			}
			if (is_string_null_or_empty(&(uParam0->f_2[uParam0->f_23])))
			{
				uParam0->f_17 = 4;
				return false;
			}
			if (uParam0->f_23 < uParam0->f_26 && uParam0->f_24 < uParam0->f_26)
			{
				if (func_1005(uParam0, iParam1[uParam0->f_25], uParam2))
				{
					if ((is_entity_on_screen(iParam1[uParam0->f_25]) && !is_entity_occluded(iParam1[uParam0->f_25])) && _0x7f9b9791d4cb71f6(Global_35, iParam1[uParam0->f_25], false, 0) == 1)
					{
						uParam0->f_31 = iParam1[uParam0->f_25];
						uParam0->f_17 = 1;
					}
					else
					{
						uParam0->f_25++;
						Jump @1215; //curOff = 254
						if (!is_entity_dead(uParam0->f_31) && func_985(uParam0->f_31, Global_35, 0, uParam0->f_32, 0))
						{
							func_1006(&(uParam0->f_18));
							vVar1 = { get_entity_coords(uParam0->f_31, true, false) };
							if (!&uParam0->f_7[uParam0->f_24])
							{
								task_look_at_entity(uParam0->f_31, Global_35, 7500, 48, 41, 0);
								if (func_368(uParam0->f_34, 8))
								{
									_0xe7fa07624574b79a(uParam0->f_31, Global_35, 2, 1, 100f, 1, 0, 0, 0);
									func_143(&(uParam0->f_34), 16);
								}
								else if (!func_368(uParam0->f_34, 4) && !_0x84d0bf2b21862059(uParam0->f_31))
								{
									if (!is_string_null_or_empty(*uParam0))
									{
										open_sequence_task(&iVar0);
										task_turn_ped_to_face_entity(0, Global_35, 11000, -1082130432, -1082130432, -1082130432);
										task_achieve_heading(0, 90f, 0);
										task_play_anim(0, *uParam0, uParam0->f_1, 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
										close_sequence_task(iVar0);
										task_perform_sequence(uParam0->f_31, iVar0);
										clear_sequence_task(&iVar0);
									}
									else if (!is_string_null_or_empty(&(uParam0->f_2[uParam0->f_23])))
									{
										uParam0->f_30 = _get_scenario_point_ped_is_using(uParam0->f_31, false);
										open_sequence_task(&iVar0);
										if (func_430(uParam0->f_31, Global_36, 0) > 12f)
										{
											task_follow_to_offset_of_entity(0, Global_35, 0f, 0f, 0f, 1f, 1000, 5f, 1, 1, 0, 0, 1);
										}
										task_turn_ped_to_face_entity(0, Global_35, 11000, -1082130432, -1082130432, -1082130432);
										if (bParam3)
										{
											if (_does_scenario_point_exist(uParam0->f_30))
											{
												_task_use_scenario_point(0, uParam0->f_30, 0, 0, true, false, 0, false, -1f, false);
											}
											else
											{
												_task_use_nearest_scenario_to_coord(0, vVar1, 30f, 0, false, false, false, false);
											}
										}
										close_sequence_task(iVar0);
										task_perform_sequence(uParam0->f_31, iVar0);
										clear_sequence_task(&iVar0);
									}
									else
									{
										open_sequence_task(&iVar0);
										task_turn_ped_to_face_entity(0, Global_35, 11000, -1082130432, -1082130432, -1082130432);
										if (bParam3)
										{
											_task_use_nearest_scenario_to_coord(0, vVar1, 30f, 0, false, false, false, false);
										}
										close_sequence_task(iVar0);
										task_perform_sequence(uParam0->f_31, iVar0);
										clear_sequence_task(&iVar0);
									}
								}
							}
							decor_set_bool(uParam0->f_31, "bNoticePlayer", false);
							uParam0->f_17 = 2;
						}
						else if (uParam0->f_18.f_4)
						{
							func_1006(&(uParam0->f_18));
							uParam0->f_17 = 0;
						}
						if (uParam0->f_17 == 0)
						{
							uParam0->f_31 = 0;
							if (uParam0->f_25 == (*iParam1 - 1))
							{
								uParam0->f_25 = 0;
							}
							else
							{
								uParam0->f_25++;
							}
						}
						Jump @1215; //curOff = 885
						if (func_368(uParam0->f_34, 1))
						{
							func_108(0);
						}
						func_759(&(uParam0->f_31), 2000, Global_35, 0, 0, 0, 0, 1);
						if ((!func_1007() && !is_string_null_or_empty(&(uParam0->f_2[uParam0->f_23]))) && func_253(0, 1, uParam0->f_31, 1))
						{
							if (func_368(uParam0->f_34, 2))
							{
							}
							else
							{
								if (bParam4 && uParam0->f_23 == 0)
								{
									uParam0->f_23++;
								}
								func_114(uParam0->f_31, Global_35, &(uParam0->f_2[uParam0->f_23]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							uParam0->f_23++;
							uParam0->f_17 = 3;
							func_48(&(uParam0->f_27));
							return true;
						}
						Jump @1215; //curOff = 1078
						if ((func_368(uParam0->f_34, 16) && !is_entity_dead(uParam0->f_31)) && !is_any_speech_playing(uParam0->f_31))
						{
							_0x541e5b41dca45828(uParam0->f_31, 1, 0);
							func_199(&(uParam0->f_34), 16);
						}
						if (func_385(&(uParam0->f_27), uParam0->f_33))
						{
							iVar4 = func_352(uParam0->f_31, 0);
							if ((bParam3 && iVar4 != -1) && func_263(iVar4, 0))
							{
								func_264(iVar4, 0, 1, 0, 0);
							}
							uParam0->f_17 = 0;
						}
					}
					return false;
				}
			}
			default:
				break;
	}
}

bool func_705()
{
	if (func_19(16))
	{
		return true;
	}
	switch (iLocal_98)
	{
		case 3:
			break;
	}
	return false;
}

void func_706()
{
	if (!_does_volume_exist(&(iLocal_75[7])))
	{
		iLocal_75[7] = _create_volume_box(*Local_1157.f_690[2], 0f, 0f, (Local_1157.f_690[2]->f_3 + 90f), 5.768971f, 0.631176f, 3f);
		_0x7c00cfc48a782dc0(&(iLocal_75[7]), Local_1157.f_690[2]->f_8, 0f, -0.5f, 0f, 0f, 0f, 90f, 2, 1);
		_0x19c7567d2f2287d6(&(iLocal_75[7]), 7);
	}
}

void func_707(var uParam0)
{
	if (func_325(Local_1039[6]) && ((iVar1149 > 2 && iVar1149 < 6) || (iVar1149 > 6 && iVar1149 < 9)))
	{
		if ((!is_entity_dead(func_63(func_326(6, 0, 0))) && !get_is_task_active(func_63(func_326(6, 0, 0)), 3)) || (!is_entity_dead(func_63(func_326(6, 1, 0))) && !get_is_task_active(func_63(func_326(6, 1, 0)), 3)))
		{
			iVar0 = -1;
			if (!func_132(&Local_972, 1))
			{
				if (!is_entity_dead(func_63(func_326(6, 0, 0))) && !get_is_task_active(func_63(func_326(6, 0, 0)), 3))
				{
					Local_972 = func_63(func_326(6, 0, 0));
					iVar0 = 0;
				}
				if (!is_entity_dead(func_63(func_326(6, 1, 0))) && !get_is_task_active(func_63(func_326(6, 1, 0)), 3))
				{
					Local_972 = func_63(func_326(6, 1, 0));
					iVar0 = 1;
				}
				if (func_985(func_63(func_326(6, iVar0, 0)), Global_35, 0, 5f, 0))
				{
					func_292(&Local_972, &Local_2160, 2048, 54329, 0, 0);
				}
			}
			func_327(Local_1039[6], func_63(func_326(6, 0, 0)), "PED1");
			func_679(6, 0, 0, 0 == iVar0);
			func_327(Local_1039[6], func_63(func_326(6, 1, 0)), "PED2");
			func_679(6, 1, 0, 1 == iVar0);
			if (does_entity_exist(Local_1157.f_690[23]->f_8))
			{
				if (is_entity_attached_to_any_ped(Local_1157.f_690[23]->f_8))
				{
					detach_entity(Local_1157.f_690[23]->f_8, true, true);
					activate_physics(Local_1157.f_690[23]->f_8);
				}
			}
			if (does_rope_exist(&(iLocal_1036[0])))
			{
				delete_rope(iLocal_1036[0]);
			}
			if (!is_entity_dead(*uParam0))
			{
				freeze_entity_position(*uParam0, false);
			}
			func_216(Local_1039[6]);
			iLocal_1152 = 12;
		}
	}
}

void func_708(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	iParam2 = func_1008(iParam2, 0, 100);
	if (func_1009(iParam1, &iVar0))
	{
		_set_attribute_core_value(iParam0, iVar0, iParam2);
	}
}

Vector3 func_709()
{
	return 2.087f, 0f, -45.186f;
}

Vector3 func_710()
{
	return -1365.597f, -217.639f, 99.727f;
}

Vector3 func_711(int iParam0)
{
	if (iParam0 == 0)
	{
		return -1368.462f, -219.3623f, 100.6008f;
	}
	else
	{
		return -1365.734f, -216.5983f, 100.7423f;
	}
	return 0f, 0f, 0f;
}

float func_712(int iParam0)
{
	if (iParam0 == 0)
	{
		return -114.06f;
	}
	else
	{
		return -156.72f;
	}
	return 0f;
}

void func_713(var uParam0)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return;
	}
	load_anim_scene(*uParam0);
}

Vector3 func_714()
{
	switch (iLocal_98)
	{
		case 1:
			return -1398.155f, -247.5334f, 98.20095f;
		case 2:
			return -1414.83f, -210f, 101.26f;
		case 3:
			return -1414.83f, -210f, 101.26f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_715()
{
	switch (iLocal_98)
	{
		case 1:
			return 89.01f;
		case 2:
			return 88.1f;
		case 3:
			return 88.1f;
		default:
			break;
	}
	return 0f;
}

int func_716()
{
	if (iLocal_98 == 1)
	{
		return 1;
	}
	return 0;
}

Vector3 func_717()
{
	return -1399.61f, -246.8489f, 99.33929f;
}

Vector3 func_718()
{
	return -1402.82f, -270.8668f, 98.5585f;
}

void func_719()
{
	if (!func_51(8388608) && _does_volume_exist(&(iLocal_75[4])))
	{
		iVar0 = create_itemset(false);
		_0x20a4bf0e09bee146(iVar0);
		iVar1 = _0x886171a12f400b89(&(iLocal_75[4]), iVar0, 2);
		if (iVar1 > 0)
		{
			destroy_itemset(iVar0);
			return;
		}
		_0x20a4bf0e09bee146(iVar0);
		iVar1 = _0x886171a12f400b89(&(iLocal_75[4]), iVar0, 1);
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			iVar3 = _get_entity_from_item(get_indexed_item_in_itemset(iVar2, iVar0));
			if (func_493(iVar3))
			{
				destroy_itemset(iVar0);
				return;
			}
			iVar2++;
		}
		func_58(8388608);
		func_172();
		destroy_itemset(iVar0);
	}
}

void func_720()
{
	if (does_entity_exist(Local_1157.f_690[5]->f_8))
	{
		if (!_0x083d497d57b7400f(Local_1157.f_690[5]->f_8))
		{
			if (!func_51(65536))
			{
				freeze_entity_position(Local_1157.f_690[5]->f_8, true);
			}
		}
		else if (func_51(65536))
		{
			freeze_entity_position(Local_1157.f_690[5]->f_8, false);
			activate_physics(Local_1157.f_690[5]->f_8);
		}
	}
}

void func_721()
{
	if (!func_51(16777216))
	{
		if (func_1010())
		{
			if (!is_string_null_or_empty(&cLocal_1001))
			{
				func_1011(&cLocal_1001, 7500, 0, 1, 0, 0, -1, -1, 0);
			}
			func_1012(iVar2411, 0);
			func_58(16777216);
		}
	}
	else if (!func_1010())
	{
		func_1012(iVar2411, 1);
		func_201();
		func_50(16777216);
	}
}

void func_722()
{
	if (iVar2315 >= 2 && (iVar2315 < 5 || func_19(512)))
	{
		if (!func_19(512))
		{
			func_1013();
		}
		if (func_213(Global_35, &(iLocal_75[4]), 1, 0))
		{
			func_1014(0);
			if (!func_68(512))
			{
				func_1016(512, func_1015(Global_35, &uLocal_1156, func_246(), &(iLocal_75[4]), 1097859072, 2, 1, 129, 0, 0, 1071644672));
				if (does_entity_exist(iVar1154))
				{
					set_ped_config_flag(iVar1154, 136, true);
				}
			}
		}
		else
		{
			func_106(0);
		}
	}
}

void func_723(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	uVar0[iVar6] = *iParam0;
	iVar6++;
	uVar0[iVar6] = *iParam1;
	iVar6++;
	uVar0[iVar6] = *iParam2;
	iVar6++;
	uVar0[iVar6] = *uParam3;
	iVar6++;
	uVar0[iVar6] = *uParam4;
	iVar6++;
	func_1017(&uVar0, 0, (iVar6 - 1), 1, 1, 1, 1);
}

void func_724(int iParam0, bool bParam1)
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

void func_725(int iParam0, bool bParam1)
{
	func_1018(&iParam0, !bParam1);
	set_blocking_of_non_temporary_events(iParam0, bParam1);
	stop_ped_speaking(iParam0, bParam1);
}

int func_726(var uParam0, char* sParam1)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return 0;
	}
	return _0xdf7b5144e25cd3fe(*uParam0, sParam1);
}

int func_727(char[4] cParam0, char* sParam1, int iParam2)
{
	StringCopy(&cVar0, sParam1, 24);
	if (iParam2 > 0)
	{
		iVar3 = 1;
	}
	if (_0xd89504d9d7d5057d(sParam1))
	{
		return 1;
	}
	else if (func_662(cParam0, cVar0, iVar3, iParam2, 1, 0))
	{
		return 1;
	}
	return 0;
}

char* func_728()
{
	return "desk_loop_book";
}

char* func_729()
{
	return "script_proc@event_area@appleseed@foreman_stage2";
}

bool func_730(int iParam0, int iParam1)
{
	if (!func_51(8388608))
	{
		return false;
	}
	if (func_19(4096))
	{
		return false;
	}
	if (!func_251(*iParam0, 0, 1))
	{
		return false;
	}
	if (!func_325(Local_1039[2]))
	{
		return false;
	}
	if (func_513(func_429(iParam1), 1) > 63f)
	{
		return false;
	}
	if ((get_frame_count() % 3) == 0)
	{
		if (func_460(iParam1))
		{
			return true;
		}
	}
	else if (func_854(iParam1))
	{
		return true;
	}
	return false;
}

Vector3 func_731(int iParam0, float fParam1)
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
	func_1019(vVar6);
	vVar6 = { FtoV((get_entity_speed(iParam0) * fParam1)) * vVar6 };
	vVar3 = { vVar0 + vVar6 };
	return vVar3;
}

int func_732(float fParam0, int iParam1, bool bParam2, int iParam3)
{
	if (Global_1935630->f_12)
	{
		return 1;
	}
	if (!_0x50f124e6ef188b22(Global_35))
	{
		return 1;
	}
	fVar0 = func_1020();
	if (fVar0 <= fParam0)
	{
		return 1;
	}
	if (bParam2)
	{
		if (fParam0 < 0.5f)
		{
			func_1021(0);
		}
		else
		{
			func_1021(1);
		}
		return 1;
	}
	if (fParam0 < 0.5f)
	{
		func_1021(0);
	}
	else
	{
		func_1021(1);
	}
	return 0;
}

void func_733(var uParam0)
{
	if (!func_658(uParam0))
	{
	}
	if (func_659(uParam0))
	{
		uParam0->f_1 = (func_471() - uParam0->f_2);
		uParam0->f_2 = 0f;
		func_473(uParam0, 2);
	}
}

void func_734(var uParam0)
{
	if (!func_658(uParam0))
	{
	}
	if (!func_659(uParam0))
	{
		uParam0->f_2 = (func_471() - uParam0->f_1);
		func_472(uParam0, 2);
	}
}

void func_735(var uParam0, char* sParam1)
{
	func_955(uParam0, sParam1, 0);
}

void func_736()
{
	func_42(Local_2160.f_136, 64);
	func_10(Local_2160.f_136, 512);
}

bool func_737(int iParam0)
{
	if (_does_volume_exist(&(iLocal_75[iParam0])))
	{
		return _0xf256a75210c5c0eb(&(iLocal_75[iParam0]), Global_36);
	}
	return false;
}

bool func_738(var uParam0, char* sParam1)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return false;
	}
	if (!is_string_null_or_empty(sParam1))
	{
		return get_anim_scene_bool(*uParam0, sParam1);
	}
	return false;
}

void func_739(var uParam0, var uParam1)
{
	if (func_213(Global_35, &(iLocal_75[17]), 1, 0))
	{
		if (func_301(*uParam0) && func_1022(*uParam0, 0))
		{
			func_828(*uParam0, 0, 1);
		}
		if (func_301(*uParam1) && func_1022(*uParam1, 0))
		{
			func_828(*uParam1, 0, 1);
		}
	}
	else if (Global_36.f_1 < func_744())
	{
		if (!does_blip_exist(iVar2409))
		{
			func_1023(func_740(), &iLocal_2413, 1631143573, 0, "LOG_BLIP_TRUNK", 0);
		}
		if (func_301(*uParam0) && !func_1022(*uParam0, 0))
		{
			func_828(*uParam0, 1, 1);
			set_blip_coords(iVar2409, func_740());
		}
		if (func_301(*uParam1) && func_1022(*uParam1, 0))
		{
			func_828(*uParam1, 0, 1);
		}
	}
	else
	{
		if (func_301(*uParam0) && func_1022(*uParam0, 0))
		{
			func_828(*uParam0, 0, 1);
		}
		if (!does_blip_exist(iVar2409))
		{
			func_1023(func_742(), &iLocal_2413, 1631143573, 0, "LOG_BLIP_TRUNK", 0);
		}
		if (func_301(*uParam1) && !func_1022(*uParam1, 0))
		{
			func_828(*uParam1, 1, 1);
			set_blip_coords(iVar2409, func_742());
		}
	}
}

Vector3 func_740()
{
	return -1391.3f, -271.25f, 98.57f;
}

bool func_741(var uParam0, char* sParam1, vector3 vParam2, int iParam5, int iParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15, bool bParam16, bool bParam17, int iParam18, bool bParam19)
{
	if (!func_301(*uParam0))
	{
		iVar0 = 0;
		if (bParam17)
		{
			iVar0 = 5;
		}
		if (!is_entity_dead(iParam5))
		{
			*uParam0 = func_1024(sParam1, iParam6, iParam5, iParam10, fParam9, 0, iParam15, iVar0, 1070386381, 570, 4000, 10, 1073741824, 0, iParam18, 0, 0);
			func_1025(*uParam0, fParam7, 1);
		}
		else if (iParam13 != 0)
		{
			*uParam0 = func_1026(sParam1, iParam6, iParam13, iParam10, fParam9, iParam15, iVar0, 570, 4000, 10, 1073741824, 0, iParam18, 0);
		}
		else
		{
			if (func_241(vParam2))
			{
				return false;
			}
			*uParam0 = func_1027(sParam1, iParam6, vParam2, fParam7, iParam10, fParam9, iParam15, iVar0, 570, 4000, 10, 1073741824, 0, iParam18, 0);
		}
		if (fParam8 != 0f)
		{
			func_974(*uParam0, sParam1, ceil(absf(fParam8)), 1);
			if (ceil(absf(fParam8)) > func_1028(1))
			{
				func_828(*uParam0, 0, 1);
			}
		}
		if (!is_string_null_or_empty(sParam11))
		{
		}
		if (bParam19)
		{
			func_834(*uParam0, 0, 1);
		}
		return false;
	}
	if (!bParam16)
	{
		if (func_1022(*uParam0, 0))
		{
			if (_is_ped_carrying(Global_35))
			{
				func_828(*uParam0, 0, 1);
			}
		}
		else if (!_is_ped_carrying(Global_35))
		{
			func_828(*uParam0, 1, 1);
		}
	}
	if (fParam8 != 0f)
	{
		if (ceil(absf(fParam8)) > func_1028(1))
		{
			func_828(*uParam0, 0, 1);
		}
	}
	if (bParam12)
	{
		if (does_entity_exist(iParam5) && is_entity_dead(iParam5))
		{
			if (func_301(*uParam0))
			{
				func_302(uParam0, 1, 1);
				return false;
			}
		}
	}
	if ((!bParam17 && func_1029(*uParam0, 1)) || (bParam17 && func_753(*uParam0, 1)))
	{
		if (!bParam14)
		{
			if (fParam8 < 0f)
			{
				func_766(ceil(absf(fParam8)), 0, 0, 1, 1);
			}
			else if (fParam8 > 0f)
			{
				func_1030(ceil(absf(fParam8)), 0, 1065353216, 1, 0, 0, 1, 752097756);
			}
		}
		func_302(uParam0, 1, 1);
		return true;
	}
	return false;
}

Vector3 func_742()
{
	return -1392.7f, -269.93f, 98.65f;
}

void func_743()
{
	iVar0 = 0;
	while (iVar0 < iVar2541)
	{
		iVar1 = func_63(&(iLocal_2527[iVar0]));
		_0x935cf6e42baf7f4d(iVar1);
		iVar0++;
	}
}

float func_744()
{
	return -270.6f;
}

void func_745(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 256;
	uParam0->f_4 = 0;
	func_265(&(uParam0->f_5));
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

Vector3 func_746(var uParam0, char* sParam1, char* sParam2)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return 0f, 0f, 0f;
	}
	bVar12 = !is_string_null_or_empty(sParam2);
	if (_get_anim_scene_entity_matrix(*uParam0, sParam1, &vVar0, bVar12, sParam2, 2))
	{
		return vVar0;
	}
	return 0f, 0f, 0f;
}

float func_747(var uParam0, char* sParam1, char* sParam2)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return 40000f;
	}
	vVar0 = { func_1031(uParam0, sParam1, sParam2) };
	if (!func_241(vVar0))
	{
		return vVar0.z;
	}
	return 40000f;
}

bool func_748(var uParam0, int iParam1)
{
	if (!is_entity_dead(uParam0->f_1) && !func_368(uParam0->f_23, 4))
	{
		set_ped_reset_flag(uParam0->f_1, 179, true);
	}
	switch (*uParam0)
	{
		case 0:
			if (!is_entity_dead(uParam0->f_1))
			{
				func_48(&(uParam0->f_5));
				if (is_ped_a_player(uParam0->f_1))
				{
					set_player_control(get_player_index(), false, uParam0->f_3, false);
					if (func_368(uParam0->f_23, 2048))
					{
						_display_hud_component(724769646);
					}
				}
				if (uParam0->f_24 == 0)
				{
					_set_ped_crouch_movement(Global_35, false, 0, false);
				}
				if (!func_368(uParam0->f_23, 4))
				{
					clear_ped_secondary_task(uParam0->f_1);
				}
				if (!func_368(uParam0->f_23, 2))
				{
					uParam0->f_2 = _get_last_mount(uParam0->f_1);
					if (!is_entity_dead(uParam0->f_2) && func_374(uParam0->f_1))
					{
						func_1032(uParam0->f_1);
						iVar0 = func_956(uParam0->f_1, uParam0->f_8, 1f);
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
						iVar3 = func_956(uParam0->f_1, uParam0->f_8, 1f);
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
						func_143(&(uParam0->f_23), 2);
					}
				}
				if (func_241(uParam0->f_14))
				{
					uParam0->f_14 = { uParam0->f_8 };
				}
				func_1033(uParam0, 1, iParam1);
			}
			else
			{
				func_1033(uParam0, 6, iParam1);
			}
			break;
		case 1:
			if (func_1034(uParam0, iParam1))
			{
				func_48(&(uParam0->f_5));
				if (!func_1035(uParam0, iParam1))
				{
					func_1036();
				}
				func_1033(uParam0, 2, iParam1);
			}
			break;
		case 2:
			if (func_1035(uParam0, iParam1))
			{
				func_48(&(uParam0->f_5));
				if (!func_368(uParam0->f_23, 4))
				{
					set_current_ped_weapon(uParam0->f_1, -1569615261, false, 0, false, false);
					set_current_ped_weapon(uParam0->f_1, -1569615261, false, 1, false, false);
					task_swap_weapon(uParam0->f_1, 1, func_368(uParam0->f_23, 512), 0, 0);
				}
				func_1033(uParam0, 3, iParam1);
			}
			break;
		case 3:
			if (func_1037(uParam0, iParam1))
			{
				func_48(&(uParam0->f_5));
				if (!_is_ped_carrying(uParam0->f_1))
				{
					func_143(&(uParam0->f_23), 256);
				}
				if (func_368(uParam0->f_23, 4096) && !_is_ped_carrying(uParam0->f_1))
				{
					func_143(&(uParam0->f_23), 256);
					iVar6 = _get_last_mount(uParam0->f_1);
					if (func_358(iVar6, uParam0->f_1, 1, 1) < 5f)
					{
						iVar5 = func_1038(iVar6);
						task_pickup_carriable_entity(uParam0->f_1, iVar5);
					}
				}
				else if (!func_368(uParam0->f_23, 256))
				{
					iVar5 = _get_first_entity_ped_is_carrying(uParam0->f_1);
					task_place_carried_entity_at_coord(uParam0->f_1, iVar5, uParam0->f_14, uParam0->f_21, uParam0->f_4);
				}
				func_1033(uParam0, 4, iParam1);
			}
			break;
		case 4:
			if (func_1039(uParam0, iParam1))
			{
				func_48(&(uParam0->f_5));
				if (func_368(uParam0->f_23, 8192))
				{
					if (func_368(uParam0->f_23, 1024))
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
					if (!func_241(uParam0->f_11))
					{
					}
					iVar8 = 0;
					if (!func_368(uParam0->f_23, 1024))
					{
						iVar8 |= 1;
					}
					open_sequence_task(&iVar9);
					if (!func_241(uParam0->f_11))
					{
						if (func_368(uParam0->f_23, 16))
						{
							task_go_straight_to_coord(0, uParam0->f_11, uParam0->f_21, func_59(!func_368(uParam0->f_23, 128), 20000, -1), uParam0->f_19, uParam0->f_17, 0);
						}
						else
						{
							task_follow_nav_mesh_to_coord(0, uParam0->f_11, uParam0->f_21, func_59(!func_368(uParam0->f_23, 128), 20000, -1), uParam0->f_17, iVar8, uParam0->f_19);
						}
					}
					if (func_368(uParam0->f_23, 16))
					{
						task_go_straight_to_coord(0, uParam0->f_8, uParam0->f_21, func_59(!func_368(uParam0->f_23, 128), 20000, -1), uParam0->f_19, uParam0->f_17, 0);
					}
					else
					{
						task_follow_nav_mesh_to_coord(0, uParam0->f_8, uParam0->f_21, func_59(!func_368(uParam0->f_23, 128), 20000, -1), uParam0->f_17, iVar8, uParam0->f_19);
					}
					if (func_368(uParam0->f_23, 1))
					{
						task_achieve_heading(0, uParam0->f_19, 0);
					}
					func_1040(uParam0->f_1, &iVar9, 0, 0, 1, 1);
				}
				func_1033(uParam0, 5, iParam1);
			}
			break;
		case 5:
			if (func_368(uParam0->f_23, 8192))
			{
				if (_0x337f1cc8ee895601(uParam0->f_25, &(uParam0->f_30)))
				{
					iVar10 = 1;
				}
			}
			else if (!func_368(uParam0->f_23, 1))
			{
				uParam0->f_19 = get_entity_heading(uParam0->f_1);
			}
			if (!func_368(uParam0->f_23, 128) && func_223(&(uParam0->f_5), 15f))
			{
				iVar10 = 1;
			}
			if (!func_368(uParam0->f_23, 8192))
			{
				if (get_script_task_status(uParam0->f_1, 242628503, true) == 8)
				{
					iVar10 = 1;
				}
				if ((func_241(uParam0->f_11) || !func_129(uParam0->f_1, 242628503)) || get_sequence_progress(uParam0->f_1) > 0)
				{
					iVar11 = 1;
				}
				if (func_1041(uParam0->f_1, uParam0->f_8, uParam0->f_19, uParam0->f_18, uParam0->f_20, func_368(uParam0->f_23, 8)) && (!func_368(uParam0->f_23, 64) || absf(func_1042(uParam0->f_1, uParam0->f_8)) < uParam0->f_22))
				{
					iVar12 = 1;
				}
			}
			if ((iVar11 && iVar12) || iVar10)
			{
				if (func_368(uParam0->f_23, 32))
				{
					task_turn_ped_to_face_coord(uParam0->f_1, uParam0->f_8, 0);
				}
				func_265(&(uParam0->f_5));
				func_1033(uParam0, 6, iParam1);
				return true;
			}
			break;
		case 6:
			return true;
	}
	return false;
}

int func_749(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11)
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
	while (iVar0 < 48)
	{
		if (func_1043(iVar0, 2))
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
		func_1044(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216, 0, 0, 0, bParam10, bParam11);
		return iVar1;
	}
	return 0;
}

var func_750(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_751(int iParam0, bool bParam1)
{
	if (bParam1 && !func_301(iParam0))
	{
		return false;
	}
	iVar0 = func_594(iParam0);
	return _uiprompt_has_mash_mode_failed((*Global_1945938)[iVar0]->f_3);
}

void func_752(int iParam0, bool bParam1)
{
	if (bParam1 && !func_301(iParam0))
	{
		return;
	}
	iVar0 = func_594(iParam0);
	_uiprompt_restart_modes((*Global_1945938)[iVar0]->f_3);
}

bool func_753(int iParam0, bool bParam1)
{
	if (bParam1 && !func_301(iParam0))
	{
		return false;
	}
	iVar0 = func_594(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

void func_754(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

void func_755(int iParam0)
{
	if (!is_entity_dead(func_63(&(iLocal_2527[*iParam0]))))
	{
		iVar0 = func_63(&(iLocal_2527[*iParam0]));
	}
	else
	{
		return;
	}
	_0x935cf6e42baf7f4d(iVar0);
	func_1045(&iVar0, 0);
	if (is_ped_using_any_scenario(iVar0))
	{
		_0x541e5b41dca45828(iVar0, 1, 0);
	}
	else
	{
		clear_ped_tasks(iVar0, 1, 0);
		if (func_1046(&(iLocal_2527[*iParam0])))
		{
			func_1003(&(iLocal_2527[*iParam0]));
		}
		else
		{
			func_264(&(iLocal_2527[*iParam0]), 0, 1, 0, 0);
			set_ped_config_flag(iVar0, 178, true);
			set_ped_config_flag(iVar0, 130, false);
		}
	}
	func_243(iVar0, 1, 1);
}

void func_756(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_1047(iParam0, 0, func_650(7));
	(*Local_814[iParam0])[0]->f_14 = 0;
	func_979((*Local_814[iParam0])[0], 1);
	func_762(iParam0, 0, !func_51(1073741824));
	func_1047(iParam0, 1, func_650(10));
	func_762(iParam0, 1, bParam2);
	func_762(iParam0, 2, bParam1);
	func_1048(iParam0, 2, !bParam1);
	if (iParam0 == 0)
	{
		func_58(268435456);
	}
	else if (iParam0 == 1)
	{
		func_69(524288);
	}
}

void func_757(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_58(-2147483648);
		func_54(134217728, bParam1);
	}
	else
	{
		func_50(-2147483648);
		func_54(134217728, bParam1);
	}
}

void func_758(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_1047(iParam0, 0, func_650(7));
	(*Local_814[iParam0])[0]->f_14 = 0;
	func_979((*Local_814[iParam0])[0], 1);
	func_762(iParam0, 0, 0);
	func_1047(iParam0, 1, func_650(10));
	func_762(iParam0, 1, 1);
	func_762(iParam0, 2, bParam1);
	func_1048(iParam0, 2, !bParam1);
	if (iParam0 == 0)
	{
		func_58(268435456);
	}
	else if (iParam0 == 1)
	{
		func_69(524288);
	}
}

void func_759(int* iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam2 == 0)
	{
		iParam2 = Global_35;
	}
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
	Var0.f_4 = 21030;
	Var0.f_3 = iParam2;
	Var0.f_8 = 4;
	if (bParam7)
	{
		Var0.f_17 = 4;
		Var0.f_18 = 1;
	}
	else
	{
		Var0.f_17 = 0;
		Var0.f_18 = 0;
	}
	Var0.f_19 = 4;
	Var0.f_20 = 2;
	Var0.f_21 = 4;
	Var0.f_22 = 3;
	Var0 = { iParam4, iParam5, iParam6 };
	Var0.f_12 = 0;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	if (bParam3)
	{
		func_478(&(Var0.f_5), 1);
	}
	Var0.f_13 = 0;
	Var0.f_7 = iParam1;
	func_1049(&(Var0.f_5), 1);
	if (!is_entity_dead(*iParam0))
	{
		_0x66f9eb44342bb4c5(*iParam0, &Var0);
	}
}

void func_760(int* iParam0)
{
	if (!func_1050((*Local_814[1])[1], 0, 0))
	{
		if ((func_253(0, 1, *iParam0, 1) && !func_381("LCMPF_IG_TFRSH")) && !func_381("LCMPF_IG_TFRSN"))
		{
			func_1051(1, 0);
		}
	}
	else if (func_1050((*Local_814[1])[0], 0, 0))
	{
		if (!func_213(Global_35, &(iLocal_75[19]), 1, 0))
		{
			func_762(1, 0, 0);
		}
	}
	else if (func_213(Global_35, &(iLocal_75[19]), 1, 1))
	{
		func_762(1, 0, 1);
	}
}

void func_761(var uParam0, var uParam1, int* iParam2)
{
	vVar0 = { func_746(Local_1039[2], "player", "PB_HANDOVER_L") };
	fVar9 = func_747(Local_1039[2], "player", "PB_HANDOVER_L");
	vVar3 = { func_746(Local_1039[2], "player", "PB_HANDOVER_R") };
	fVar10 = func_747(Local_1039[2], "player", "PB_HANDOVER_R");
	vVar6 = { func_746(Local_1039[2], "player", "PB_HANDOVER_N") };
	fVar11 = func_747(Local_1039[2], "player", "PB_HANDOVER_N");
	fVar12 = func_513(vVar0, 1);
	fVar13 = func_513(vVar3, 1);
	fVar14 = func_513(vVar6, 1);
	if (fVar13 <= fVar14 && fVar13 <= fVar12)
	{
		*uParam0 = { vVar3 };
		*uParam1 = fVar10;
		func_813(Local_1039[2], "PB_HANDOVER_R");
	}
	else if (fVar12 <= fVar13 && fVar12 <= fVar14)
	{
		*uParam0 = { vVar0 };
		*uParam1 = fVar9;
		func_813(Local_1039[2], "PB_HANDOVER_L");
	}
	else
	{
		*uParam0 = { vVar6 };
		*uParam1 = fVar11;
		func_813(Local_1039[2], "PB_HANDOVER_N");
	}
}

void func_762(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	func_652((*Local_814[iParam0])[iParam1], bParam2, 0);
}

bool func_763(var uParam0)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return false;
	}
	if (is_string_null_or_empty(&(uParam0->f_1)))
	{
		return false;
	}
	if (!_0x23e33cb9f4a3f547(*uParam0, &(uParam0->f_1)))
	{
	}
	else
	{
		return true;
	}
	return false;
}

void func_764(var uParam0, bool bParam1, bool bParam2)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return;
	}
	if (func_954(uParam0, &(uParam0->f_1)))
	{
		func_632(uParam0, &(uParam0->f_1), bParam2);
		if (bParam1)
		{
			func_633(uParam0, &(uParam0->f_4));
		}
	}
}

void func_765(var uParam0)
{
	func_735(uParam0, &(uParam0->f_4));
}

void func_766(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_1052(iParam0);
	if (bParam3)
	{
		func_1053(iParam0, sParam1, iParam2);
	}
}

bool func_767(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0) && is_entity_a_ped(iParam0))
	{
		iVar0 = func_1054(iParam0);
		return func_1055(iParam0, 2084597891, iParam1, iVar0);
	}
	return decor_set_int(iParam0, "loot_money", iParam1);
}

char[] func_768(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			switch (iVar2643)
			{
				case 0:
					return "LCMPF_IG_TFR1P";
				case 1:
					return "LCMPF_IG_TFR2P";
				default:
					break;
			}
			break;
		case 1:
			switch (iVar2643)
			{
				case 0:
					return "LCMPF_IG_TFR1N";
				case 1:
					return "LCMPF_IG_TFR2N";
				default:
					break;
			}
			break;
	}
	return "";
}

Vector3 func_769()
{
	return -1397.791f, -214.2272f, 101.3653f;
}

Vector3 func_770()
{
	return -1406.475f, -213.2691f, 101.3333f;
}

bool func_771(float fParam0)
{
	return !func_253(fParam0, 1, 0, 0);
}

void func_772(char* sParam0, bool bParam1)
{
	StringCopy(&cLocal_1001, sParam0, 32);
	if (bParam1)
	{
		if (!is_string_null_or_empty(&cLocal_1001))
		{
			func_1011(&cLocal_1001, 7500, 0, 1, 0, 0, -1, -1, 0);
		}
	}
}

bool func_773(int iParam0, bool bParam1, bool bParam2)
{
	if (is_entity_dead(*iParam0))
	{
		return false;
	}
	bVar0 = true;
	if (bParam1 && iLocal_98 == 1)
	{
		bVar0 = false;
	}
	if (bVar0 && func_213(*iParam0, &(iLocal_75[0]), 1, 0))
	{
		if (func_213(Global_35, &(iLocal_75[0]), 1, 0))
		{
			return true;
		}
	}
	else if (func_358(Global_35, *iParam0, 1, 1) < func_1056(bParam1, 18f, 12.5f) && (!bParam2 || is_ped_facing_ped(*iParam0, Global_35, 165f)))
	{
		return true;
	}
	return false;
}

int func_774(var uParam0)
{
	if (!func_658(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_659(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_575() - round((uParam0->f_1 * 1000f)));
}

void func_775(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_1047(iParam0, 0, "LOG_CTXTBUY");
	(*Local_814[0])[0]->f_14 = func_778();
	func_978((*Local_814[iParam0])[0], 1);
	func_974((*Local_814[iParam0])[0]->f_6, "LOG_CTXTBUY", (*Local_814[iParam0])[0]->f_14, 0);
	func_762(iParam0, 0, 1);
	func_1047(iParam0, 1, func_650(1));
	func_762(iParam0, 1, 1);
	func_762(iParam0, 2, 0);
	func_1048(iParam0, 2, 1);
	func_58(268435456);
	func_330(536870912);
}

void func_776(int iParam0)
{
	if (!func_138(iParam0->f_136))
	{
		return;
	}
	func_42(iParam0->f_136, 128);
	func_10(iParam0->f_136, 65536);
	func_43(iParam0, 128);
	func_1057(30, 0, 1);
}

Vector3 func_777()
{
	return -1398.998f, -208.266f, 101.8822f;
}

int func_778()
{
	if (func_9(1, 2) && iLocal_98 > 1)
	{
		iVar0 = func_1058(1795814421);
	}
	else if (iLocal_98 == 1)
	{
		iVar0 = func_1058(1121724679);
	}
	return iVar0;
}

void func_779(int iParam0)
{
	uVar0[0] = Global_35;
	_0x34eddd59364ad74a(*iParam0, &uVar0);
}

bool func_780(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (!func_658(&(uParam1->f_133)))
	{
		func_48(&(uParam1->f_133));
	}
	else if (func_774(&(uParam1->f_133)) > iParam2)
	{
		func_265(&(uParam1->f_133));
		if (func_263(iParam0, 0))
		{
			func_75(iParam0, bParam3);
			return true;
		}
	}
	return false;
}

void func_781()
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		vVar1 = { func_1059(iVar0) };
		func_1060(&vVar1, 0);
		iVar0++;
	}
}

int func_782()
{
	return -1426662425;
}

int func_783()
{
	return -1206299098;
}

int func_784()
{
	return -1597025878;
}

Vector3 func_785()
{
	return -1399.903f, -211.2283f, 102.3423f;
}

int func_786()
{
	return 752173188;
}

int func_787()
{
	return -538947018;
}

Vector3 func_788()
{
	return -1402.626f, -207.791f, 101.897f;
}

char* func_789()
{
	return "PROP_HUMAN_SEAT_CHAIR_GENERIC_MALE_A";
}

char* func_790()
{
	return "WORLD_HUMAN_LEAN_POST_RIGHT_HAND_PLANTED_MALE_B";
}

char* func_791(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

Vector3 func_792(bool bParam0, vector3 vParam1, vector3 vParam4)
{
	if (bParam0)
	{
		return vParam1;
	}
	return vParam4;
}

int func_793()
{
	switch (iVar1145)
	{
		case 2:
		case 3:
			return 277874648;
		case 0:
			return 1550315122;
		case 1:
			return -1006870375;
	}
	return 0;
}

char* func_794()
{
	switch (iVar1145)
	{
		case 2:
		case 3:
			return "EAFOR_A_L";
		case 0:
			return "EAFOR_GOOD_TO_SEE";
		case 1:
			return "EAFOR_MORE_TIME";
	}
	return "";
}

bool func_795(int iParam0, int iParam1, float fParam2, int iParam3, char* sParam4, bool bParam5, int iParam6)
{
	if (func_1061(*iParam0, iParam1, fParam2, iParam3, sParam4, bParam5, 106) && (iParam6 == 0 || has_anim_event_fired(*iParam0, iParam6)))
	{
		return true;
	}
	return false;
}

char* func_796(bool bParam0)
{
	if (iVar1144 == 2)
	{
		if (bParam0)
		{
			return "action_02_fm";
		}
		else
		{
			return "action_01b_fm";
		}
	}
	else if (iVar1144 == 3)
	{
		return "clockwork_fm";
	}
	return "";
}

bool func_797(int iParam0)
{
	if (is_entity_dead(*iParam0))
	{
		return false;
	}
	if (func_51(-2147483648))
	{
		return false;
	}
	if (func_866(1))
	{
		return false;
	}
	if (!func_253(-3.5f, 1, *iParam0, 1))
	{
		return false;
	}
	return true;
}

int func_798(int iParam0)
{
	switch (iVar1144)
	{
		case 2:
		case 3:
			return 277874648;
		case 0:
		case 1:
			vVar1 = { func_731(Global_35, 2f) };
			iVar0 = func_956(*iParam0, vVar1, 1060437492);
			switch (iVar0)
			{
				case 0:
					return -1619253850;
				case 2:
					return 1888479052;
				case 3:
					return -925583064;
			}
			break;
	}
	return 0;
}

void func_799(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 0)
	{
		iParam2 = Global_35;
	}
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
	Var0.f_4 = 21030;
	Var0.f_3 = iParam2;
	Var0.f_8 = 4;
	Var0.f_17 = 4;
	Var0.f_18 = 4;
	Var0.f_19 = 4;
	Var0.f_20 = 4;
	Var0.f_21 = 4;
	Var0.f_22 = 4;
	func_478(&(Var0.f_5), 1);
	Var0.f_13 = 3;
	Var0.f_7 = iParam1;
	if (!is_entity_dead(*iParam0))
	{
		_0x66f9eb44342bb4c5(*iParam0, &Var0);
	}
}

void func_800(int iParam0)
{
	if (func_51(65536))
	{
		if (!func_263(Local_2160.f_138, 0))
		{
			func_62(Local_2160.f_138, 1, 1);
		}
		if (!func_68(2097152))
		{
			func_69(2097152);
			_0xaab050da48b57978(*iParam0, "Default_Angry", Global_35, -1, 4);
			if (iLocal_103 == 3)
			{
				func_69(1048576);
			}
		}
		if (func_658(vLocal_1117[3]))
		{
			func_265(vLocal_1117[3]);
		}
		if (func_253(-3.5f, 1, 0, 0) && !func_658(vLocal_1117[5]))
		{
			func_48(vLocal_1117[5]);
		}
		if (func_223(vLocal_1117[5], 10f))
		{
			func_379(&(Local_2160.f_35), func_1062(), *iParam0, Global_35, 0, 0, 1, 1);
			clear_ped_tasks(*iParam0, 1, 0);
			switch (iLocal_103)
			{
				case 1:
					open_sequence_task(&uLocal_735);
					task_confront(0, Global_35, 2);
					task_turn_ped_to_face_entity(0, Global_35, 5000, -1082130432, -1082130432, -1082130432);
					close_sequence_task(iVar732);
					_task_perform_sequence_2(*iParam0, iVar732, 2f, 7.5f);
					clear_sequence_task(&uLocal_735);
					Local_104 = 0;
					break;
				case 2:
					iVar0 = func_118(268435456, 1056964608, 1065353216);
					_give_weapon_to_ped_2(*iParam0, iVar0, 99, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
					set_current_ped_weapon(*iParam0, iVar0, false, 0, false, false);
					open_sequence_task(&uLocal_735);
					task_swap_weapon(0, 1, 0, 0, 0);
					task_aim_gun_at_entity(0, Global_35, -1, 0, 1);
					close_sequence_task(iVar732);
					task_perform_sequence(*iParam0, iVar732);
					clear_sequence_task(&uLocal_735);
					Local_104 = 0;
					break;
				case 3:
					func_69(1048576);
					break;
			}
			iLocal_103++;
		}
	}
	else
	{
		if (func_658(vLocal_1117[5]))
		{
			func_265(vLocal_1117[5]);
		}
		if (func_68(2097152))
		{
			if (!func_658(vLocal_1117[3]))
			{
				func_48(vLocal_1117[3]);
			}
			if (func_223(vLocal_1117[3], 15f))
			{
				if (iLocal_103 == 3)
				{
					clear_ped_tasks(*iParam0, 1, 0);
					_0x935cf6e42baf7f4d(*iParam0);
					func_75(Local_2160.f_138, 1);
					func_76(Local_750[0], 0);
				}
				func_330(2097152);
			}
		}
	}
	if (func_68(2097152))
	{
		if (!func_129(*iParam0, 242628503))
		{
			func_1063(&Local_104, 0);
		}
	}
}

void func_801(int iParam0)
{
	if (func_9(Local_2160.f_136, 1024))
	{
		func_1064(iParam0);
	}
	if (!func_51(32))
	{
		return;
	}
	if (func_132(&Local_972, 1) && iVar969 == *iParam0)
	{
		func_97();
	}
	Global_1914319->f_3[11]->f_23 = *iParam0;
	if (func_837(11))
	{
		if (!func_19(67108864))
		{
			func_732(1048576000, 1028443341, 1, 106);
			func_14(67108864);
			func_14(1073741824);
			if (func_1065(11, 1))
			{
				func_1066(11, 1);
			}
		}
	}
	else if (func_19(67108864) && func_1067(11) == 0)
	{
		if (!func_325(Local_1039[0]))
		{
			clear_ped_tasks(Global_35, 1, 0);
		}
		if (!is_player_control_on(get_player_index()))
		{
			set_player_control(get_player_index(), true, 0, false);
			func_80(&Local_2160, 65536);
		}
		func_126(67108864);
		func_126(134217728);
		func_126(4096);
	}
	if (func_19(67108864))
	{
		if (!func_263(Local_2160.f_138, 0))
		{
			func_62(Local_2160.f_138, 0, 1);
		}
		if (((!func_325(Local_1039[0]) && !func_19(536870912)) && func_263(Local_2160.f_138, 0)) && !func_19(134217728))
		{
			set_player_control(get_player_index(), false, 4224, false);
			func_43(&Local_2160, 65536);
			vVar0 = { get_entity_coords(*iParam0, true, false) };
			func_1068(&vVar0, 1088421888);
			func_673(Local_1039[1], vVar0, 0f, 0f, func_1069(vVar0, Global_36));
			_0xec6935ebe0847b90(*iParam0, Global_36);
			clear_ped_tasks(*iParam0, 1, 0);
			task_turn_ped_to_face_entity(*iParam0, Global_35, -1, -1082130432, -1082130432, -1082130432);
			task_turn_ped_to_face_entity(Global_35, *iParam0, -1, -1082130432, -1082130432, -1082130432);
			func_14(4096);
			func_14(134217728);
		}
	}
	if ((((!func_19(2048) && !func_837(11)) && func_1067(11) != 0) && func_519(Local_1039[1])) && func_1070(*iParam0, Global_35, 0.8f))
	{
		func_42(Local_2160.f_136, 32);
		func_96(uLocal_2499[0]);
		func_10(Local_2160.f_136, 4);
		func_43(&Local_2160, 128);
		func_14(2048);
		if (!func_5(Local_2160.f_136, 128))
		{
			func_776(&Local_2160);
		}
		if (func_68(256))
		{
			request_model(func_838(), false);
			request_model(func_839(), false);
			vVar3 = { get_entity_coords(*iParam0, true, false) };
			func_1068(&vVar3, 1088421888);
			func_673(Local_1039[1], vVar3, 0f, 0f, get_entity_heading(*iParam0));
			if (!does_cam_exist(iVar1140))
			{
				vVar9 = { 19.1f, 0f, (get_entity_heading(*iParam0) - 96.8f) };
				vVar6 = { _get_object_offset_from_coords(vVar3, get_entity_heading(*iParam0), -1f, 0.6f, 1.29f) };
				iLocal_1143 = create_camera_with_params(26379945, vVar6, vVar9, 37.2f, false, 2);
			}
			func_745(&Local_698);
			Local_698.f_1 = Global_35;
			Local_698.f_8 = { func_746(Local_1039[1], "player", "PB_HANDOVER") };
			Local_698.f_19 = func_747(Local_1039[1], "player", "PB_HANDOVER");
			Local_698.f_25 = &Local_1039[1];
			StringCopy(&(Local_698.f_30), "player", 24);
			StringCopy(&(Local_698.f_26), "PB_HANDOVER", 32);
			func_143(&(Local_698.f_23), 25600);
			func_43(&Local_2160, 65536);
			func_748(&Local_698, 129);
			func_293(&Local_972, 4);
			iLocal_1145 = 10;
		}
	}
}

void func_802()
{
	if (iVar1143 > 2 && iVar1143 <= 8)
	{
		if (func_213(Global_35, &(iLocal_75[11]), 1, 0))
		{
			func_1014(0);
			if (!func_68(512))
			{
				if (!func_374(Global_35))
				{
					func_1016(512, func_1015(Global_35, &uLocal_1156, -1390.416f, -226.6055f, 99.35344f, &(iLocal_75[11]), 1097859072, 2, 1, 129, 0, 0, 1071644672));
					if (does_entity_exist(iVar1154))
					{
						set_ped_config_flag(iVar1154, 136, true);
					}
				}
			}
		}
		else
		{
			func_106(0);
		}
	}
}

bool func_803(int iParam0)
{
	func_842(11);
	if (!func_51(32))
	{
		func_1072(*iParam0, func_1071(), 0, &(iLocal_75[4]), 1084227584, 1084227584, 1084227584, 12296, 1095237632, 0);
		func_1073();
		Local_398 = { Global_1914319->f_3[11]->f_35 };
		func_1074(&(Global_1914319->f_3[11]->f_35), 2085633299, 1.15f, -1);
		func_1074(&(Global_1914319->f_3[11]->f_35), -562345805, 1.15f, -1);
		func_1075(&(Global_1914319->f_3[11]->f_35), 2085633299, 1.15f, -1);
		func_1075(&(Global_1914319->f_3[11]->f_35), -562345805, 1.15f, -1);
		func_58(32);
	}
	return true;
}

int func_804()
{
	bVar0 = true;
	switch (iLocal_98)
	{
		case 1:
			if (!func_9(Local_2160.f_136, 1024))
			{
				if (!func_263(Local_2160.f_138, 0))
				{
					func_62(Local_2160.f_138, 1, 1);
				}
				switch (iVar1140)
				{
					case 0:
						if (!does_entity_exist(Local_1157.f_690[3]->f_8))
						{
							bVar0 = false;
						}
						if (!does_entity_exist(Local_1157.f_690[4]->f_8))
						{
							bVar0 = false;
						}
						if (!does_entity_exist(Local_1157.f_690[2]->f_8))
						{
							bVar0 = false;
						}
						if (!does_entity_exist(Local_1157.f_690[14]->f_8))
						{
							bVar0 = false;
						}
						if (is_entity_dead(func_63(Local_2160.f_138)))
						{
							bVar0 = false;
						}
						if (is_entity_dead(func_63(func_326(6, 0, 0))))
						{
							bVar0 = false;
						}
						if (is_entity_dead(func_63(func_326(6, 1, 0))))
						{
							bVar0 = false;
						}
						if (is_entity_dead(func_63(Local_2160.f_138)))
						{
							bVar0 = false;
						}
						if (is_entity_dead(&(iLocal_2505[0])))
						{
							bVar0 = false;
						}
						if (bVar0)
						{
							iLocal_1142 = 1;
						}
						break;
					case 1:
						func_1076(&Local_156, func_63(Local_2160.f_138), "U_M_M_BIVFOREMAN_01", 0, 0, 0);
						func_1076(&Local_156, Global_35, "Arthur", 0, 0, 0);
						func_1076(&Local_156, func_63(func_326(6, 0, 0)), "Worker2", 0, 0, 0);
						func_1076(&Local_156, func_63(func_326(6, 1, 0)), "Worker1", 0, 0, 0);
						func_1076(&Local_156, &(iLocal_2505[0]), "Horse_01", 0, 0, 0);
						func_1077(&Local_156, Local_1157.f_690[3]->f_8, "P_KNIFE02X", 0, 0, 0);
						func_1077(&Local_156, Local_1157.f_690[4]->f_8, "P_WOODWHITTLE01X", 0, 0, 0);
						func_1077(&Local_156, Local_1157.f_690[2]->f_8, "s_aplsd_log", 0, 0, 0);
						func_1077(&Local_156, Local_1157.f_690[14]->f_8, "s_aplsd_hrsatt", 0, 0, 0);
						func_1078(&Local_156, 15f);
						func_1079(&Local_156, (15f + 5f));
						func_1080(&Local_156);
						func_1081(&(Local_156.f_212), 1);
						iLocal_1142 = 2;
						break;
					case 2:
						return 1;
				}
			}
			break;
	}
	return 0;
}

int func_805(int iParam0)
{
	if (!func_68(4096))
	{
		func_1016(4096, _request_scenario_type(func_259(), 15, func_245(Local_2160.f_138), func_1082()));
	}
	return 1;
}

void func_806(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_1047(iParam0, 0, func_650(7));
	(*Local_814[iParam0])[0]->f_14 = 0;
	func_979((*Local_814[iParam0])[0], 1);
	func_762(iParam0, 0, 1);
	func_1047(iParam0, 1, func_650(10));
	func_762(iParam0, 1, 0);
	func_762(iParam0, 2, 0);
	func_1048(iParam0, 2, 1);
	func_58(268435456);
}

bool func_807(bool bParam0)
{
	switch (iLocal_98)
	{
		case 1:
			return func_1084(&Local_156, func_1083(), bParam0, 1);
	}
	return true;
}

void func_808(int iParam0)
{
}

bool func_809(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

void func_810()
{
	disable_control_action(0, 1287709438, false);
	disable_control_action(0, 1499911466, false);
	disable_control_action(0, -209515122, false);
}

void func_811(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_812(int iParam0, var uParam1, vector3 vParam2, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, float fParam11, bool bParam12, bool bParam13, float fParam14)
{
	if (func_1085(&(uParam1->f_3), 1))
	{
		func_1086(uParam1);
		if (func_1087(iParam0, iParam7, fParam11, bParam12, bParam13, fParam14))
		{
			func_468();
		}
	}
	if (func_1088(get_entity_coords(iParam0, true, false), uParam1, iParam7))
	{
		set_gameplay_ped_hint(iParam0, Vector(0f, 0f, 0f) + vParam2, bParam5, iParam8, iParam9, iParam10);
		func_1089(uParam1, get_entity_coords(iParam0, true, false), iParam6, iParam9);
	}
}

int func_813(var uParam0, char* sParam1)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return 0;
	}
	StringCopy(&(uParam0->f_1), sParam1, 24);
	return func_726(uParam0, &(uParam0->f_1));
}

Vector3 func_814()
{
	return -1400.648f, -215.0589f, 102.3835f;
}

float func_815()
{
	return -24.8f;
}

void func_816(var uParam0)
{
	func_633(uParam0, &(uParam0->f_4));
}

void func_817(var uParam0)
{
	if (func_1090(uParam0, Global_35, "Arthur", 225514697, 1, 1))
	{
		func_69(32768);
		func_674(Local_1039[0], Global_35, "arthur", 1);
		func_675(Local_1039[0], Local_1157.f_690[3]->f_8, "p_knife02x");
		func_675(Local_1039[0], Local_1157.f_690[4]->f_8, "p_woodWittle01x");
		func_675(Local_1039[0], Local_1157.f_690[6]->f_8, "p_foldedBill01x");
		func_674(Local_1039[0], func_63(Local_2160.f_138), "U_M_M_BIVFOREMAN_01", 1);
		func_726(Local_1039[0], "pbl_RefuseToSell");
		func_726(Local_1039[0], "pbl_SEARCHENTER");
		func_676(Local_1039[0]);
		func_215(Local_1157.f_690[3]->f_8, 0, 0);
		func_215(Local_1157.f_690[4]->f_8, 0, 0);
		set_player_control(get_player_index(), false, 0, false);
		func_43(&Local_2160, 65536);
		display_radar(false);
		func_10(Local_2160.f_136, 1024);
		func_43(&Local_2160, 128);
		func_48(vLocal_1117[3]);
	}
}

void func_818(var uParam0, int iParam1)
{
	uParam0->f_149 = iParam1;
	func_1091(uParam0, 2);
}

void func_819(var uParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	uParam0->f_217 = { vParam1 };
	uParam0->f_220 = fParam4;
	if (func_241(vParam1))
	{
		func_1092(uParam0, 2048, 1);
	}
	else
	{
		func_1093(uParam0, 2048);
		if (bParam5)
		{
			func_1093(uParam0, -2147483648);
		}
	}
}

void func_820(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

struct<4> func_821()
{
	StringCopy(&cVar0, "LCMP_INT", 32);
	return cVar0;
}

bool func_822(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	func_1094(uParam4, &uParam0);
	if (func_1095(uParam4, 2) && !func_1095(uParam4, 67108864))
	{
		disable_control_action(0, -842734359, false);
	}
	if (func_1096(uParam4) != 1)
	{
		func_1097(uParam4);
	}
	_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
	set_ped_reset_flag(Global_35, 134, true);
	_uiprompt_enable_prompt_type_this_frame(6);
	_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
	switch (func_1096(uParam4))
	{
		case 1:
			if (_does_anim_scene_exist(uParam4->f_156) && _is_anim_scene_loaded(uParam4->f_156, true, false))
			{
				if (!_is_anim_scene_started(uParam4->f_156, false))
				{
					func_1098(uParam4, &uParam0);
				}
				else if (_0xef324e9550a394d5(uParam4->f_156))
				{
					func_1099(uParam4, 4);
					return false;
				}
				else if (func_1100(uParam4, 2))
				{
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_149);
				}
				func_1099(uParam4, 3);
			}
			else if (!_does_anim_scene_exist(uParam4->f_156))
			{
				if (!is_screen_fading_out())
				{
					do_screen_fade_out(0);
				}
				if (!is_string_null_or_empty(&(uParam4->f_158)) && func_1095(uParam4, 134217728))
				{
				}
				else
				{
					func_1101(uParam4);
				}
				func_48(&(uParam4->f_1));
				func_1099(uParam4, 2);
			}
			else
			{
				if (!is_screen_fading_out() && !is_screen_faded_out())
				{
					do_screen_fade_out(0);
				}
				func_1102(uParam4);
				if (!func_658(&(uParam4->f_1)))
				{
					func_1103(&(uParam4->f_1), 0);
				}
				else if (func_375(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_156))
					{
						_delete_anim_scene(uParam4->f_156);
					}
					func_1099(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!_does_anim_scene_exist(uParam4->f_156) || !_is_anim_scene_loaded(uParam4->f_156, true, false))
			{
				if (func_1084(uParam4, &uParam0, 1, 1))
				{
					if (!_is_anim_scene_loaded(uParam4->f_156, true, false))
					{
						func_1099(uParam4, 4);
					}
					else if (!func_241(func_1104(uParam4)) && !func_1105(Global_35, func_1104(uParam4), 100f, 1, 1))
					{
						func_1106(1);
						start_player_teleport(get_player_index(), func_1104(uParam4), 0f, true, true, true, false);
					}
				}
				else if (func_375(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_156))
					{
						_delete_anim_scene(uParam4->f_156);
					}
					func_1099(uParam4, 4);
				}
			}
			else if (!is_player_teleport_active() || _has_player_teleport_finished(get_player_index()))
			{
				if (!get_is_loading_screen_active())
				{
					_0xa565fac215cbc77d();
					func_1107(1, 0);
					func_1098(uParam4, &uParam0);
					func_1099(uParam4, 3);
				}
				else
				{
					shutdown_loading_screen();
				}
			}
			else if (func_375(&(uParam4->f_1)) >= 60f)
			{
				if (_does_anim_scene_exist(uParam4->f_156))
				{
					_delete_anim_scene(uParam4->f_156);
				}
				func_1099(uParam4, 4);
			}
			break;
		case 3:
			func_1108(uParam4);
			if (func_1100(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_149);
			}
			if ((_does_anim_scene_exist(uParam4->f_156) && _is_anim_scene_started(uParam4->f_156, false)) && (_0xef324e9550a394d5(uParam4->f_156) || func_1095(uParam4, 512)))
			{
				if (!func_1095(uParam4, 1024) && func_1109(uParam4, 1))
				{
					set_gameplay_cam_relative_heading(0f, 1f);
					set_gameplay_cam_relative_pitch(0f, 1f);
				}
				if (!func_1095(uParam4, 512))
				{
					func_48(&(uParam4->f_1));
					func_1093(uParam4, 512);
					func_1099(uParam4, 4);
				}
				else if (func_1095(uParam4, 524288))
				{
					if (is_screen_faded_in() || is_screen_fading_in())
					{
					}
					do_screen_fade_out(0);
				}
			}
			else
			{
				func_1097(uParam4);
			}
			if (func_1095(uParam4, 524288))
			{
				if (IntToFloat(absi((func_1110(uParam4) - func_1111(uParam4)))) <= 2f)
				{
					_0x1b70811d3bf75db9(1, 1);
				}
				if (_does_anim_scene_exist(uParam4->f_156))
				{
					if (_0xef324e9550a394d5(uParam4->f_156))
					{
						_0x1b70811d3bf75db9(1, 1);
					}
				}
				if (func_1112(uParam4, Global_35, 4))
				{
					_0x1b70811d3bf75db9(1, 1);
				}
				if ((is_screen_faded_out() || is_screen_fading_out()) && func_1111(uParam4) > 5000)
				{
					_0x1b70811d3bf75db9(1, 1);
				}
			}
			if (func_1113(uParam4))
			{
				if (!_does_anim_scene_exist(uParam4->f_156))
				{
				}
				func_1114(uParam4);
				func_1115(uParam4);
				return true;
			}
			else
			{
				if (func_1095(uParam4, 67108864))
				{
					if (is_screen_faded_out())
					{
						if (!_is_anim_scene_paused(uParam4->f_156) && !_0xef324e9550a394d5(uParam4->f_156))
						{
							_delete_anim_scene_2(uParam4->f_156);
						}
						func_48(&(uParam4->f_1));
						_0x1b70811d3bf75db9(1, 1);
						func_1093(uParam4, 512);
						func_1092(uParam4, 67108864, 1);
						func_1099(uParam4, 4);
					}
					else if (!is_screen_fading_out() && !is_screen_faded_out())
					{
						do_screen_fade_out(1000);
					}
				}
				else if ((((!func_1095(uParam4, 16384) && !_0xef324e9550a394d5(uParam4->f_156)) && is_screen_faded_out()) && func_1111(uParam4) <= 5000) && func_1111(uParam4) >= 0)
				{
					do_screen_fade_in(1000);
				}
				if (!func_1095(uParam4, 536870912) && has_anim_event_fired(Global_35, -1495039362))
				{
					func_1116(&(uParam4->f_213), 0);
					func_1093(uParam4, 536870912);
				}
				if (func_1111(uParam4) >= 5000 && func_1111(uParam4) <= (func_1110(uParam4) - 5000))
				{
					func_1117();
				}
			}
			break;
		case 6:
			if (func_1113(uParam4))
			{
				func_1114(uParam4);
				func_1115(uParam4);
				return true;
			}
			break;
		case 4:
			if (func_1095(uParam4, 524288))
			{
				_0x1b70811d3bf75db9(1, 1);
			}
			if (!is_screen_faded_out())
			{
				if (!is_screen_fading_out())
				{
					do_screen_fade_out(1000);
					if (_is_anim_scene_paused(uParam4->f_156))
					{
						func_1093(uParam4, 1073741824);
					}
				}
			}
			else
			{
				if (_does_anim_scene_exist(uParam4->f_156))
				{
					if (!_is_anim_scene_paused(uParam4->f_156))
					{
						set_anim_scene_paused(uParam4->f_156, true);
						if (_0xc17f69e1418cd11f(9) != 0)
						{
							_0xdd1232b332cbb9e7(9, 1, 0);
						}
						return false;
					}
					else if (_0x4cdffe3189ebdbd0(uParam4->f_156))
					{
						return false;
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!func_1100(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_150);
					if (StackVal || StackVal)
					{
						if (_does_anim_scene_exist(uParam4->f_156) && _is_anim_scene_paused(uParam4->f_156))
						{
							set_anim_scene_paused(uParam4->f_156, false);
						}
						func_1099(uParam4, 3);
					}
					else if (func_375(&(uParam4->f_1)) >= 30f)
					{
						if (_does_anim_scene_exist(uParam4->f_156) && _is_anim_scene_paused(uParam4->f_156))
						{
							set_anim_scene_paused(uParam4->f_156, false);
						}
						func_1099(uParam4, 3);
					}
				}
				if (func_1096(uParam4) == 3)
				{
					if (func_1095(uParam4, 524288))
					{
						do_screen_fade_out(0);
					}
				}
			}
			break;
		case 5:
			func_1099(uParam4, 4);
			break;
	}
	return false;
}

void func_823()
{
	if (func_421(1))
	{
		return;
	}
	if (func_51(4096))
	{
		return;
	}
	iVar0 = 810 + 1;
	iVar1 = func_63(iVar0);
	if (_is_ped_using_scenario_hash(iVar1, func_683()))
	{
		func_692(&iVar1, 1);
	}
}

void func_824(int iParam0, int iParam1)
{
	if (!func_599(iParam0))
	{
		return;
	}
	Global_1914319->f_3[iParam0]->f_7 = (Global_1914319->f_3[iParam0]->f_7 || iParam1);
}

void func_825(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8)
{
	if (!uParam0->f_3)
	{
		uParam0->f_13 = sParam7;
		uParam0->f_14 = iParam8;
		if (uParam0->f_13 != -1)
		{
			uParam0->f_7 = _create_var_string(2, sParam1, sParam7);
		}
		else
		{
			uParam0->f_7 = sParam1;
		}
		uParam0->f_8 = sParam2;
		uParam0->f_5 = func_1118(uParam0->f_7, -163964935, 5, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, -820096546, 0);
		uParam0->f_6 = func_1118(uParam0->f_8, 648122183, 5, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, -820096546, 0);
		if (uParam0->f_14 < uParam0->f_13)
		{
			func_1119(uParam0->f_5, 1);
		}
		func_1120(uParam0->f_5, 17, 1, 1);
		func_1120(uParam0->f_6, 17, 1, 1);
		func_1121(uParam0->f_5, 6, 1);
		func_1121(uParam0->f_6, 6, 1);
		*uParam0 = 0;
		uParam0->f_1 = iParam4;
		uParam0->f_10 = iParam3;
		if (iParam5 == 0)
		{
			uParam0->f_11 = get_game_timer();
			uParam0->f_9 = get_game_timer() + 10000;
			uParam0->f_12 = 0;
		}
		else
		{
			uParam0->f_11 = get_game_timer();
			uParam0->f_9 = (get_game_timer() + round((to_float(iParam5) / 2f)));
			uParam0->f_12 = iParam5;
		}
		uParam0->f_16 = 0f;
		uParam0->f_17 = 0f;
		uParam0->f_2 = iParam6;
		uParam0->f_4 = 0;
		uParam0->f_15 = _uiprompt_set_register_horizontal_orientation();
		uParam0->f_3 = 1;
		if (uParam0->f_2 != 0)
		{
			animpostfx_play("MissionChoice");
		}
		_0x6339c1ea3979b5f7("make_decision", "player_decision_moment_scenes");
	}
}

void func_826(int iParam0, int iParam1)
{
	if (!func_599(iParam0))
	{
		return;
	}
	iVar0 = func_1122(iParam1);
	if (iVar0 == 0)
	{
		return;
	}
	func_199(&(Global_1914319->f_3[iParam0]->f_8), iVar0);
}

bool func_827(int iParam0)
{
	if (func_937(iParam0) == 4 && func_1123(iParam0, -1162387149))
	{
		return true;
	}
	if (_is_ped_carrying(Global_35))
	{
		iVar2 = create_itemset(false);
		find_all_attached_carriable_entities(Global_35, iVar2);
		if (is_itemset_valid(iVar2))
		{
			iVar3 = get_itemset_size(iVar2);
			iVar4 = 0;
			while (iVar4 < iVar3)
			{
				iVar0 = _get_entity_from_item(get_indexed_item_in_itemset(iVar4, iVar2));
				if (!does_entity_exist(iVar0))
				{
				}
				else
				{
					iVar1 = func_1124(iVar0);
					if (func_1125(iVar1, iParam0))
					{
						destroy_itemset(iVar2);
						return true;
					}
				}
				iVar4++;
			}
			destroy_itemset(iVar2);
		}
	}
	return func_1123(iParam0, 1084182731);
}

void func_828(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_301(iParam0))
	{
		return;
	}
	iVar0 = func_594(iParam0);
	if (bParam1)
	{
		func_1126(iParam0, 4);
		func_1127(iVar0, 1);
		func_1128(iVar0, 1);
	}
	else
	{
		func_1129(iParam0, 4);
		func_1128(iVar0, 0);
	}
}

bool func_829(var uParam0)
{
	return uParam0->f_3;
}

bool func_830(var uParam0)
{
	if (*uParam0 == 0)
	{
		if (!func_301(uParam0->f_5) || !func_301(uParam0->f_6))
		{
			return false;
		}
		if ((_uiprompt_has_hold_mode((*Global_1945938)[uParam0->f_5]->f_3) && func_753(uParam0->f_5, 1)) || func_1029(uParam0->f_5, 1))
		{
			if (func_1130(uParam0->f_5, 1))
			{
				uParam0->f_4 = 1;
			}
			*uParam0 = 1;
			return true;
		}
		if ((_uiprompt_has_hold_mode((*Global_1945938)[uParam0->f_6]->f_3) && func_753(uParam0->f_6, 1)) || func_1029(uParam0->f_6, 1))
		{
			if (func_1130(uParam0->f_6, 1))
			{
				uParam0->f_4 = 1;
			}
			*uParam0 = 2;
			return true;
		}
		iVar0 = get_game_timer();
		if (iVar0 > uParam0->f_9)
		{
			if (uParam0->f_1 == 1 || (uParam0->f_1 == 0 && uParam0->f_10 > 0))
			{
				if (!_uiprompt_has_hold_auto_fill_mode((*Global_1945938)[uParam0->f_5]->f_3))
				{
					fVar2 = func_1131(uParam0->f_6, 1);
					fVar3 = func_1131(uParam0->f_5, 1);
					if ((fVar2 == 0f || fVar2 < uParam0->f_16) && (fVar3 == 0f || fVar3 < uParam0->f_17))
					{
						func_302(&(uParam0->f_5), 1, 1);
						if (uParam0->f_12 > 0)
						{
							iVar1 = ((uParam0->f_11 + uParam0->f_12) - iVar0 + 20);
							uParam0->f_5 = func_1118(uParam0->f_7, -163964935, 6, 600, iVar1, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 1);
						}
						else
						{
							uParam0->f_5 = func_1118(uParam0->f_7, -163964935, 6, 600, 10000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 1);
						}
						func_302(&(uParam0->f_6), 1, 1);
						uParam0->f_6 = func_1118(uParam0->f_8, 648122183, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
						if (uParam0->f_14 < uParam0->f_13)
						{
							func_1119(uParam0->f_5, 1);
						}
						func_1121(uParam0->f_5, 6, 1);
						func_1121(uParam0->f_6, 6, 1);
						func_1120(uParam0->f_5, 17, 1, 1);
						func_1120(uParam0->f_6, 17, 1, 1);
					}
					else
					{
						uParam0->f_16 = fVar2;
						uParam0->f_17 = fVar3;
					}
				}
			}
			else if (!_uiprompt_has_hold_auto_fill_mode((*Global_1945938)[uParam0->f_6]->f_3))
			{
				fVar2 = func_1131(uParam0->f_5, 1);
				fVar3 = func_1131(uParam0->f_6, 1);
				if ((fVar2 == 0f || fVar2 < uParam0->f_16) && (fVar3 == 0f || fVar3 < uParam0->f_17))
				{
					func_302(&(uParam0->f_6), 1, 1);
					if (uParam0->f_12 > 0)
					{
						iVar1 = ((uParam0->f_11 + uParam0->f_12) - iVar0 + 20);
						uParam0->f_6 = func_1118(uParam0->f_8, 648122183, 6, 600, iVar1, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 1);
					}
					else
					{
						uParam0->f_6 = func_1118(uParam0->f_8, 648122183, 6, 600, 10000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 1);
					}
					func_302(&(uParam0->f_5), 1, 1);
					uParam0->f_5 = func_1118(uParam0->f_7, -163964935, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
					if (uParam0->f_14 < uParam0->f_13)
					{
						func_1119(uParam0->f_5, 1);
					}
					func_1121(uParam0->f_5, 6, 1);
					func_1121(uParam0->f_6, 6, 1);
					func_1120(uParam0->f_5, 17, 1, 1);
					func_1120(uParam0->f_6, 17, 1, 1);
				}
				else
				{
					uParam0->f_16 = fVar2;
					uParam0->f_17 = fVar3;
				}
			}
		}
		return false;
	}
	return true;
}

bool func_831(var uParam0)
{
	return *uParam0 == 1;
}

void func_832(int iParam0, int iParam1)
{
	func_143(&(Global_1914319->f_3[iParam0]->f_5), iParam1);
}

void func_833(int iParam0, int iParam1)
{
	if (!func_599(iParam0))
	{
		return;
	}
	iVar0 = func_1122(iParam1);
	if (iVar0 == 0)
	{
		return;
	}
	func_143(&(Global_1914319->f_3[iParam0]->f_8), iVar0);
}

void func_834(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_301(iParam0))
	{
		return;
	}
	iVar0 = func_594(iParam0);
	func_1127(iVar0, bParam1);
}

bool func_835(var uParam0)
{
	return *uParam0 == 2;
}

void func_836(var uParam0)
{
	if (uParam0->f_3)
	{
		switch (*uParam0)
		{
			case 0:
				animpostfx_stop("MissionChoice");
				break;
			case 1:
				if (uParam0->f_2 != 0)
				{
					if (uParam0->f_2 != 3 && uParam0->f_1 == 0)
					{
						animpostfx_stop("MissionChoice");
						animpostfx_play("PlayerHonorChoiceGood");
					}
					else
					{
						_0xc5cb91d65852ed7e("MissionChoice");
					}
				}
				break;
			case 2:
				if (uParam0->f_2 != 0)
				{
					if (uParam0->f_2 != 2 && uParam0->f_1 == 0)
					{
						animpostfx_stop("MissionChoice");
						animpostfx_play("PlayerHonorChoiceBad");
					}
					else
					{
						_0xc5cb91d65852ed7e("MissionChoice");
					}
				}
				break;
		}
		if (func_301(uParam0->f_5))
		{
			func_302(&(uParam0->f_5), 1, 1);
		}
		if (func_301(uParam0->f_6))
		{
			func_302(&(uParam0->f_6), 1, 1);
		}
		*uParam0 = 0;
		uParam0->f_1 = 0;
		uParam0->f_9 = 0;
		uParam0->f_11 = 0;
		uParam0->f_12 = 0;
		uParam0->f_10 = 0;
		uParam0->f_16 = 0f;
		uParam0->f_17 = 0f;
		uParam0->f_7 = "";
		uParam0->f_8 = "";
		uParam0->f_3 = 0;
		uParam0->f_4 = 0;
		uParam0->f_13 = -1;
		uParam0->f_2 = 0;
		_uiprompt_clear_horizontal_orientation(uParam0->f_15);
		uParam0->f_15 = -1;
		_0x9428447ded71fc7e("player_decision_moment_scenes");
	}
}

bool func_837(int iParam0)
{
	if (!func_599(iParam0))
	{
		return false;
	}
	return func_1132(iParam0, 8388608);
}

int func_838()
{
	return -615159064;
}

int func_839()
{
	return 531516298;
}

bool func_840()
{
	if (func_838() != 0 && !has_model_loaded(func_838()))
	{
		return false;
	}
	if (func_839() != 0 && !has_model_loaded(func_839()))
	{
		return false;
	}
	return true;
}

void func_841()
{
	func_1133();
	Local_1157.f_690[0]->f_8 = create_object(func_838(), *Local_1157.f_690[0], true, true, false, false, true);
	if (!does_entity_exist(Local_1157.f_690[6]->f_8))
	{
		Local_1157.f_690[6]->f_8 = create_object(Local_1157.f_690[6]->f_7, *Local_1157.f_690[6], true, true, false, false, true);
	}
}

void func_842(int iParam0)
{
	if (iParam0 >= 25 || iParam0 <= -1)
	{
		return;
	}
	Global_20710[iParam0]->f_1 = 0;
}

Vector3 func_843(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	vVar3 = { _0x3e2a25b2416dd67e(iParam0) };
	fVar6 = (func_449(vVar3.x, func_449(vVar3.y, vVar3.z)) / 2f);
	iVar7 = 0;
	while (iVar7 < iParam1)
	{
		if (!bParam2)
		{
			vVar8 = { func_1134(vVar0, fVar6) };
		}
		else
		{
			vVar8 = { func_1135(vVar0, fVar6, iParam3) };
		}
		if (_0xf256a75210c5c0eb(iParam0, vVar8))
		{
			return vVar8;
		}
		iVar7++;
	}
	return vVar0;
}

int func_844(int iParam0, int iParam1, int iParam2)
{
	task_turn_ped_to_face_entity(iParam0, iParam1, iParam2, 3f, 0.25f, -1082130432);
	return 1;
}

int func_845(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

bool func_846(int iParam0)
{
	if (func_166(iParam0))
	{
		return _0xc29996a337bdd099((*Global_1425371)[iParam0]->f_1);
	}
	return false;
}

Vector3 func_847(vector3 vParam0, vector3 vParam3, float fParam6)
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

Vector3 func_848(vector3 vParam0, vector3 vParam3, float fParam6)
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

Vector3 func_849(int iParam0)
{
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -1447.046f, -248.2112f, 101.8532f;
				case 1:
					return -1421.375f, -191.8643f, 100.0484f;
				case 2:
					return -1468.509f, -186.8103f, 104.7422f;
				case 3:
					return -1454.64f, -225.2065f, 103.411f;
				case 4:
					return -1428.337f, -197.121f, 100.9558f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 1:
					return -1462.903f, -174.4467f, 105.4205f;
				case 2:
					return -1457.676f, -251.4121f, 104.5611f;
				case 3:
					return -1409.899f, -284.2626f, 100.9278f;
				case 4:
					return -1409.899f, -284.2626f, 100.9278f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -1413.63f, -293.9522f, 102.1136f;
				case 1:
					return -1518.762f, -234.9279f, 116.6115f;
				case 2:
					return -1468.601f, -126.4598f, 117.0678f;
				case 3:
					return -1514.415f, -203.4755f, 110.9043f;
				case 4:
					return -1413.63f, -293.9522f, 102.1136f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_850(int iParam0)
{
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return 203.3771f;
				case 1:
					return 6.516163f;
				case 2:
					return 306.3405f;
				case 3:
					return 179.3372f;
				case 4:
					return 33.71f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 1:
					return 25.43246f;
				case 2:
					return 165.157f;
				case 3:
					return 164.2261f;
				case 4:
					return 164.2261f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 348.4004f;
				case 1:
					return 278.6f;
				case 2:
					return 105.1105f;
				case 3:
					return 341.899f;
				case 4:
					return 348.4004f;
				default:
					break;
			}
			break;
	}
	return 0f;
}

bool func_851(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

int func_852(int iParam0)
{
	if (func_19(64) && iParam0 == 0)
	{
		iVar0 = -926795318;
		return iVar0;
	}
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					iVar0 = -408717222;
					break;
				case 1:
					iVar0 = -1839091952;
					break;
				case 2:
					iVar0 = -1839091952;
					break;
				case 3:
					iVar0 = -408717222;
					break;
				case 4:
					iVar0 = -1839091952;
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					iVar0 = -926795318;
					break;
				case 1:
					iVar0 = -1839091952;
					break;
				case 2:
					iVar0 = -408717222;
					break;
				case 3:
					iVar0 = -408717222;
					break;
				case 4:
					iVar0 = -408717222;
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					iVar0 = -1839091952;
					break;
				case 1:
					iVar0 = -408717222;
					break;
				case 2:
					iVar0 = -679945893;
					break;
				case 3:
					iVar0 = -1839091952;
					break;
				case 4:
					iVar0 = -1839091952;
					break;
			}
			break;
	}
	return iVar0;
}

char* func_853(int iParam0)
{
	if (func_19(64) && iParam0 == 0)
	{
		return "DES_treefall_accident";
	}
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return "DES_treefall_up15";
				case 1:
					return "DES_treefall_flat";
				case 2:
					return "DES_treefall_flat";
				case 3:
					return "DES_treefall_up15";
				case 4:
					return "DES_treefall_flat";
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return "DES_treefall_accident";
				case 1:
					return "DES_treefall_flat";
				case 2:
					return "DES_treefall_up15";
				case 3:
					return "DES_treefall_up15";
				case 4:
					return "DES_treefall_up15";
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return "DES_treefall_flat";
				case 1:
					return "DES_treefall_up15";
				case 2:
					return "DES_treefall_down15";
				case 3:
					return "DES_treefall_flat";
				case 4:
					return "DES_treefall_flat";
				default:
					break;
			}
			break;
	}
	return "";
}

bool func_854(int iParam0)
{
	if (!does_rayfire_map_object_exist(&(iLocal_1014[iParam0])))
	{
		return false;
	}
	return get_state_of_rayfire_map_object(&(iLocal_1014[iParam0])) == 5;
}

void func_855(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_35(1024);
			return;
		case 1:
			func_35(2048);
			return;
		case 2:
			func_35(4096);
			return;
		case 3:
			func_35(8192);
			return;
		case 4:
			func_35(16384);
			return;
	}
}

bool func_856(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_857(var uParam0, int iParam1)
{
	if (func_851(uParam0))
	{
		_0x9cf1836c03fb67a2(uParam0, iParam1);
	}
}

void func_858()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

void func_859(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	*uParam0 = _create_anim_scene(sParam1, iParam3, sParam2, false, true);
}

bool func_860(var uParam0)
{
	return func_501(*uParam0, 1);
}

bool func_861(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_1136(*uParam0, 0f, 0f, 0f))
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

void func_862(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_1137(iParam1))
		{
			func_1138(iParam0, 41788943);
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
			func_1139(iParam0, 0, 1);
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
			func_1140(iParam0, 0);
			bVar0 = true;
		}
		func_1141(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

float func_863(int iParam0)
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

int func_864(bool bParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam1))
	{
		return 0;
	}
	if (!does_entity_exist(iParam2))
	{
		return 0;
	}
	vVar0 = { func_1142(iParam1) };
	vVar3 = { func_1142(iParam2) };
	return func_1143(bParam0, vVar0, vVar3, iParam2);
}

int func_865(bool bParam0, int iParam1, vector3 vParam2)
{
	if (is_entity_dead(iParam1))
	{
		return 0;
	}
	vVar0 = { func_1142(iParam1) };
	return func_1143(bParam0, vVar0, vParam2, 0);
}

bool func_866(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

struct<5> func_867(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_1144(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_1145(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_871(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_1146(bParam1) };
			if (bParam2 && func_1147(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_869(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_869(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_870(iParam0, &Var5, 1728382685))
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
			Var0 = { func_1148(bParam1) };
			switch (func_944(iParam0))
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
			if (func_1149(iParam0, -1823706425))
			{
				Var0 = { func_871(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_1149(iParam0, -1483207246))
			{
				Var0 = { func_871(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_1150(Var0, &Var27, bParam1, 0))
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

int func_868(int iParam0, int iParam1)
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
			return -1911121386;
			return 1756656691;
			return -1774867076;
			return -421952220;
			return -1087003323;
			return 1231618917;
			return -1183777174;
			return -841767082;
			return 1043717005;
			return 142663787;
			return 1718143051;
			return -6605744;
			return 953047564;
			return 769706682;
			return 1635590003;
			return -2047978619;
			return -586319254;
			return 249896112;
			return -1060513333;
			return 1317351007;
			return -500478573;
			return -806573802;
			return -1109949204;
			return -740156546;
			return -684532710;
			return 1158805436;
			return -559473670;
			return -797147251;
			return -382216265;
			return 1419177114;
			return 1704297235;
			return -1139016418;
			return 897705377;
			return 17961769;
			return 205582207;
			return 900740963;
			return -1369589344;
			return -1695823795;
			return -41453074;
			return 539767227;
			return 1210490314;
			return -399684751;
			return 2138893455;
			return -1617010487;
			return -832377028;
			return -428040245;
			return 1279288897;
			return -594897905;
			return -1360459240;
			return 1838428396;
			return -1467846997;
			return -490610263;
			return -1885413079;
			return 708884155;
			return -134459952;
			return -1912136700;
			return -1268031552;
			return 1177953227;
			return 2130805296;
			return 38093490;
			return -269153218;
			return -1995068011;
			return -164284834;
			return 1446463345;
			return 1501315823;
			return -750379482;
			return -929560937;
			return 608323241;
			return 1030796013;
			return 1915057434;
			return -1582276476;
			return 692059311;
			return 2062839241;
			return -1884531872;
			return -866434534;
			return -1252192421;
			return 1243288963;
			return -1953772189;
			return 754411745;
			return 545309006;
			return -1089810811;
			return 1957869400;
			return -241412332;
			return -1548010959;
			return 550150488;
			return 946565453;
			return 434443248;
			return -1709914938;
			return 366686112;
			return -1370063350;
			return 2126829550;
			return 226552910;
			return 721193431;
			return -315672460;
			return 623544501;
			return 259556714;
			return -2125361825;
			return 1078230356;
			return 1885364811;
			return 1630382737;
			return 1738245512;
			return 1540262216;
			return 1016871472;
			return 13829069;
			return 737051352;
			return 1734614610;
			return -208715295;
			return 1435062936;
			return 1483055553;
			return 380335002;
			return -1079385677;
			return 676610411;
			return 2145419552;
			return 657238733;
			return 1850579281;
			return -1923957384;
			return -1142828108;
			return -1400618531;
			return -1433857135;
			return 209987206;
			return 1686943047;
			return -59178517;
			return 2134884601;
			return 651707517;
			return -633788535;
			return 116394463;
			return -1196973875;
			return 801752086;
			return 184475332;
			return -1880922659;
			return -898138634;
			return -2107418444;
			return -679970099;
			return -1531392549;
			return 1612483376;
			return 463930900;
			return -632148238;
			return 55303249;
			return 2108322089;
			return -1358896714;
			return 74475632;
			return -28710953;
			return -1791599168;
			return 1605938169;
			return 1255242276;
			return 636467727;
			return -1567688525;
			return -77886679;
			return -1057900679;
			return -1960888134;
			return -1719717295;
			return -1779244911;
			return -670540863;
			return 223362311;
			return 1150824567;
			return 974471191;
			return 1989683968;
			return 254804477;
			return 192057609;
			return 1553957817;
			return 2099829015;
			return -840300007;
			return -1948423372;
			return 981083654;
			return 1283289876;
			return -606884489;
			return -100418572;
			return 663645231;
			return 1442217033;
			return 1410986244;
			return 847409839;
			return 923926911;
			return 109995826;
			return -747412737;
			return 1114341727;
			return -539456939;
			return 45887121;
			return 913271624;
			return -1652812715;
			return -1791365775;
			return -979299941;
			return 713062001;
			return -575045963;
			return 1852965262;
			return -1398836354;
			return -1829885298;
			return -1773850357;
			return -564258009;
			return 2016532685;
			return -1070563798;
			return -1619221343;
			return -345571691;
			return 544288390;
			return 159578294;
			return -76852849;
			return 1110295244;
			return 2104563477;
			return 1947827651;
			return -933072766;
			return 2104388648;
			return -1677140601;
			return -2133097881;
			return -826678792;
			return -513522325;
			return 1970588249;
			return -2080032591;
			return 1758847745;
			return 895010282;
			return -511891179;
			return -1207567168;
			return -1315407613;
			return 1786352060;
			return -833319691;
			return 1591329969;
			return 2123222014;
			return -1578397674;
			return 1473261684;
			return -241855024;
			return 12999093;
			return -6796437;
			return -268116367;
			return -636470867;
			return 1737668280;
			return 892807236;
			return -733247890;
			return 24047176;
			return -1561999014;
			return -2052774042;
			return -997150586;
			return -1189569496;
			return 46488141;
			return 1046566686;
			return 325139909;
			return -1585141069;
			return 802754820;
			return 1415981582;
			return -1886147520;
			return 654877947;
			return -415648720;
			return 1221327846;
			return 923162715;
			return 625423581;
			return 326668608;
			return 669530755;
			return 429759982;
			return -2111934838;
			return 1886178087;
			return 1587783573;
			return -279722001;
			return 1310070322;
			return 724026534;
			return 137387616;
			return -653439684;
			return 1376835592;
			return -1824203570;
			return -1654197998;
			return 798987653;
			return 976923323;
			return 1167442289;
			return 986998820;
			return -2119169513;
			return -2015960939;
			return 1132377945;
			return 739936401;
			return 1201880974;
			return 819728896;
			return 1746010219;
			return 1433393959;
			return -1287636759;
			return -706917073;
			return -2166805;
			return -1391602433;
			return 1782075221;
			return 1282544585;
			return 1732594027;
			return -1058817012;
			return 1090546265;
			return -1783120823;
			return -1535745896;
			return -2086922122;
			return -1675198649;
			return 1189497682;
			return -1565675519;
			return -268973591;
			return 1039159916;
			return 1111816631;
			return 405591388;
			return 897456793;
			return 104187473;
			return 773808542;
			return -1120669954;
			return -1389278274;
			return 552979403;
			return -1571578784;
			return -708312114;
			return 688823508;
			return -1622147240;
			return 830292162;
			return 226276782;
			return -678416628;
			return -1098528034;
			return 316207340;
			return -1909200748;
			return -939652363;
			return -1990194462;
			return -375447933;
			return 537014919;
			return 1784584921;
			return -140655024;
			return 1084182731;
			return -1045471300;
			return 1617414719;
			return -787761753;
			return -490616606;
			return 1491346514;
			return -1360128126;
			return -1311702610;
			return -904250715;
			return 1034665895;
			return -101524555;
			return 1419152594;
			return -451359317;
			return -1915385310;
			return 1315162488;
			return -361152079;
			return -2041626192;
			return -2077812539;
			return -1371514637;
			return 1730017037;
			return 892816668;
			return -1994943603;
			return 603133554;
			return -30160144;
			return -1248299493;
			return 727393558;
			return 755611221;
			return -170255458;
			return 1011151573;
			return 1122339631;
			return 454815308;
			return 990701735;
			return -246340825;
			return -1410671073;
			return 1547608292;
			return -714132970;
			return 732290690;
			return 971340545;
			return -234132662;
			return -2143057988;
			return -993947465;
			return -486552269;
			return -1156317860;
			return 1229625803;
			return -388596167;
			return -1204639465;
			return -1384685096;
			return -2026728113;
			return -1228057307;
			return 1835126290;
			return 1890833594;
			return -751549960;
			return -1682270750;
			return -1839865333;
			return -1990383629;
			return 1712094016;
			return 1532953697;
			return 1620318083;
			return -307230331;
			return -1034549620;
			return -1293064293;
			return -1540142553;
			return -1769886012;
			return -1983081126;
			return -1106117124;
			return -1873108338;
			return -2097543219;
			return 155413195;
			return -1162387149;
			return 1728382685;
			return -649335959;
			return -1876502240;
			return -2107032155;
			return 1570861011;
			return 1075981185;
			return 960195961;
			return 1150460649;
			return 1689424794;
			return 619103418;
			return 1355448197;
			return 1681762005;
			return 1026887814;
			return 354352628;
			return 1519366642;
			return -82757515;
			return 386306655;
			return 1243962119;
			return 756214903;
			return -718417579;
			return -1445516411;
			return 1232060796;
			return -672392892;
			return 1465341584;
			return -427758369;
			return -735647142;
			return 1535838048;
			return -602272282;
			return 2051264661;
			return 487172188;
			return 282270687;
			return 1607708943;
			return 1686264939;
			return 314786149;
			return 1402841185;
			return 1099170772;
			return 2125676786;
			return -363896735;
			return -468790222;
			return -1779133048;
			return 1732537631;
			return 1755095401;
			return 835771095;
			return 1963317232;
			return 259627919;
			return 1299075397;
			return -1509094230;
			return 61132362;
			return 1549741908;
			return 288484254;
			return -1877032947;
			return -1395676456;
			return 1136146715;
			return 468034421;
			return 1079459546;
			return -140369351;
			return 1822341990;
			return 1219701681;
			return 1601295268;
			return -1692460667;
			return 1471419228;
			return 907446160;
			return -1126482585;
			return 1911050315;
			return -1343525599;
			return 1261891225;
			return 763162704;
			return 1335861197;
			return 526744654;
			return -1177461517;
			return -241638635;
			return 1024262875;
			return 853355463;
			return -337288221;
			return 361381308;
			return -1264898804;
			return -585289073;
			return 1423542233;
			return -948489286;
			return 2063859257;
			return -1652627327;
			return -1959697839;
			return -1532267859;
			return -1410062763;
			return -901428716;
			return -1628873469;
			return 144855571;
			return -617589883;
			return -1306457086;
			return 1713542477;
			return -305542365;
			return 1985390213;
			return -2145069367;
			return -1674390752;
			return -2117214398;
			return 1880805647;
			return -62390436;
			return 1815288415;
			return 196214097;
			return -201958220;
			return 244353594;
			return 302954672;
			return -1870144662;
			return 257892944;
			return -607182722;
			return -13254502;
			return 1400281261;
			return 1601515402;
			return -940704970;
			return -548371721;
			return -1022384613;
			return -357406394;
			return 1077068189;
			return -782241404;
			return 1669853467;
			return 1592019450;
			return 635273153;
			return -1559225678;
			return -266425508;
			return 1117400455;
			return 454332195;
			return -1328061889;
			return 561650932;
			return 256105670;
			return 1976779618;
			return -269095126;
			return 2145617267;
			return 1150213537;
			return 1598825281;
			return -712527121;
			return 1308553072;
			return 852866398;
			return -1794417972;
			return 293062146;
			return 95360094;
			return 807631773;
			return 1603958275;
			return 860052020;
			return -1885979781;
			return 746147970;
			return 666663006;
			return -2096186453;
			return 859409444;
			return -671427187;
			return 100192478;
			return 307812616;
			return 1670843243;
			return 899615863;
			return -298901850;
			return 1379186917;
			return -817206030;
			return -1150323212;
			return -247466821;
			return 427124242;
			return 855418120;
			return -777015093;
			return -722462870;
			return -937454324;
			return -339438116;
			return 2135639035;
			return 1254273765;
			return -792172668;
			return 1905987493;
			return 495693044;
			return -1693422950;
			return -205873076;
			return -2143114654;
			return -1420574021;
			return -1959250381;
			return -1088328663;
			return 513602003;
			return 359221401;
			return 1005272;
			return 1583044470;
			return 348853959;
			return 1045621973;
			return 1084576580;
			return 1651573695;
			return 1463321587;
			return -997505963;
			return -1649851713;
			return -386012962;
			return 1386101789;
			return 1227915917;
			return -218846335;
			return -352578118;
			return 1426626782;
			return -714081520;
			return 74547781;
			return 1271463052;
			return 1983140194;
			return 677262775;
			return -832337898;
			return -319249747;
			return -16955722;
			return -1535425646;
			return -1063641743;
			return -1041133401;
			return 1380479304;
			return 600890828;
			return 733333190;
			return 1843035435;
			return -304127320;
			return 122470371;
			return 0;
			return -1591664384;
			return -673000374;
			return -1150938404;
			return -1756997214;
			return -813824107;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
		}

bool func_869(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_1151(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_870(int iParam0, var uParam1, int iParam2)
{
	if (func_1152(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_871(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_1153(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_943(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_872(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_1154(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1150(*uParam1, &Var0, bParam6, 0))
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
	if (!func_873(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_943(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_873(bool bParam0)
{
	if (func_1() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_943(bParam0));
}

int func_874(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_1155(iParam0))
	{
		return 0;
	}
	if (!func_873(0))
	{
		return 0;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_875(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_298(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

var func_876(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	Var0 = -2;
	Var0 = iParam7;
	Var0.f_1 = iParam8;
	Var0.f_2 = iParam9;
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

var func_877(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	Var0 = -2;
	Var0 = iParam7;
	Var0.f_1 = iParam8;
	Var0.f_2 = iParam9;
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
	uVar21 = _0x18d6869fbffec0f8(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

bool func_878(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_879(int iParam0)
{
	if (func_1156(iParam0))
	{
		if (!func_1157(45))
		{
			return false;
		}
	}
	iVar0 = func_882(iParam0);
	if (func_1158())
	{
		if (!func_206((*Global_1835011)[3]->f_1, 1))
		{
			return (iVar0 == 7 || iVar0 == 6);
		}
	}
	return true;
}

struct<2> func_880(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_881(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

int func_882(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 29)
	{
		return 1;
	}
	else if (iParam0 <= 32)
	{
		return 2;
	}
	else if (iParam0 <= 36)
	{
		return 3;
	}
	else if (iParam0 <= 39)
	{
		return 4;
	}
	else if (iParam0 <= 49)
	{
		return 7;
	}
	else if (iParam0 <= 56)
	{
		return 6;
	}
	else if (iParam0 <= 61)
	{
		return 8;
	}
	else if (iParam0 <= 76)
	{
		return 9;
	}
	else if (iParam0 <= 92)
	{
		return 10;
	}
	else if (iParam0 <= 106)
	{
		return 11;
	}
	else if (iParam0 <= 113)
	{
		return 12;
	}
	else if (iParam0 <= 116)
	{
		return 13;
	}
	else if (iParam0 <= 119)
	{
		return 14;
	}
	else if (iParam0 <= 125)
	{
		return 15;
	}
	else if (iParam0 <= 127)
	{
		return 16;
	}
	return -1;
}

int func_883(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1439010767;
		case 1:
			return -888900898;
		case 2:
			return 1252459247;
		default:
			break;
	}
	return 0;
}

Vector3 func_884(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1400f, -200f, 0f;
		case 1:
			return -440f, 500f, 0f;
		case 2:
			return 2100f, 770f, 0f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_885(int iParam0, int iParam1)
{
	func_1159(iParam0);
	iVar0 = func_1160(iParam0, iParam1);
	if (iVar0 != 0 && !_map_is_discovery_active(iVar0))
	{
		_0xd8c7162ab2e2af45(iVar0);
	}
}

int func_886(int iParam0, int iParam1)
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

int func_887(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_ped_injured(iParam0))
	{
		return 0;
	}
	iVar4 = _0x4642182a298187d0(iParam0, iParam1, &uVar0, 4, 0);
	if (iVar4 != 0)
	{
		return uVar0;
	}
	return 0;
}

int func_888(int iParam0)
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

int func_889(int iParam0)
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

void func_890(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_1161();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_1162(iParam0);
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
	if (func_1157(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_1163())
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
	Global_40.f_11095.f_35 = func_1008(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_1161();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_1164(iVar1);
		func_1166(func_1165(), 0, 4000);
		func_1167(Global_40.f_11095.f_35);
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
		func_1168(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_881(func_1169(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (does_entity_exist(iParam5))
			{
				decor_set_int(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_889(14))
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
					sParam4 = func_1170(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_1171(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_1171(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_881(func_1169(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_889(4))
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
					sParam4 = func_1170(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_1171(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_1171(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_1169(-1990689970) };
	stat_id_set_int(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		_0xe6b763c7f4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_1172(10, 1);
	}
}

void func_891(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

void func_892(int iParam0)
{
	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_1173();
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
			func_1174(&(Global_1935630->f_34), &(Global_1935630->f_39));
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

var func_893(int iParam0)
{
	return &(Global_1109400->f_276[iParam0]);
}

bool func_894(bool bParam0)
{
	if (func_1175(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_895(int iParam0)
{
	iVar0 = Global_1935630->f_40;
	if (func_1() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_1176(iParam0);
		}
	}
	else if (!does_entity_exist(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_1176(iParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_920(iVar0) == -1)
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

void func_896(int iParam0)
{
	if (*iParam0 & 8 != 0 || *iParam0 & 16 != 0)
	{
		func_1177(iParam0);
	}
}

bool func_897(int iParam0, int iParam1, int iParam2)
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
		iVar1 = func_920(iParam2);
	}
	else
	{
		iVar1 = func_919(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_920(iParam0);
	}
	else
	{
		iVar0 = func_919(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_368(*iParam1, 8388608))
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

float func_898(int iParam0, int iParam1)
{
	return func_358(iParam0, iParam1, 1, 1);
}

float func_899(int iParam0)
{
	return iParam0->f_26;
}

bool func_900(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

float func_901(int iParam0)
{
	return iParam0->f_17;
}

bool func_902(int iParam0, int iParam1, float fParam2, float fParam3)
{
	if (iParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_368(*iParam0, 4194304))
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

int func_903(int iParam0)
{
	return iParam0->f_18;
}

bool func_904(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (_is_weapon_sniper(func_664(iVar0, 0)))
		{
			if (func_982(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_905(int iParam0)
{
	return iParam0->f_23;
}

int func_906(int iParam0)
{
	return iParam0->f_21;
}

int func_907(int iParam0)
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

bool func_908(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_1178(iParam0, vParam4, 0.5f))
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

int func_909(int iParam0)
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
	if (func_1179(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_910(int iParam0)
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

bool func_911(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_961(iParam1))
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

bool func_912(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_961(iParam1))
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

bool func_913(int iParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = 40f;
	if (func_961(iParam1))
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

bool func_914(int iParam0, int iParam1)
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

bool func_915(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (func_1180(iParam0, 1, 0, 0) != 2055893578)
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

bool func_916(int iParam0)
{
	return !*iParam0 & 2 != 0;
}

bool func_917(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_430(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_918(int iParam0)
{
	return iParam0->f_24;
}

int func_919(int iParam0)
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

int func_920(int iParam0)
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

int func_921(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_914(Global_35, &iVar1))
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
		fVar2 = func_358(iParam0, player_ped_id(), 0, 1);
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
		if (func_358(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

bool func_922(int iParam0, int iParam1, bool bParam2)
{
	func_1175(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_923(iParam1, iVar0))
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
				if (!bParam2 || !func_923(iParam1, iVar1))
				{
					if (func_430(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_923(int iParam0, int iParam1)
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

bool func_924(int iParam0)
{
	if (func_1163())
	{
		return false;
	}
	return func_206((*Global_1347702)[58]->f_15, 1);
}

int func_925(int iParam0)
{
	return iParam0->f_20;
}

int func_926(int iParam0, vector3 vParam1, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	iVar1 = -1;
	if (iParam7 == -1 || iParam7 >= *iParam0)
	{
		iParam7 = (*iParam0 - 1);
	}
	iVar0 = iParam6;
	while (iVar0 <= iParam7)
	{
		if (iParam4 != iParam0[iVar0] && (!bParam5 || (!is_entity_dead(iParam0[iVar0]) && !is_entity_on_fire(iParam0[iVar0]))))
		{
			fVar3 = vdist2(get_entity_coords(iParam0[iVar0], true, false), vParam1);
			if (iVar1 < 0 || fVar3 < fVar2)
			{
				fVar2 = fVar3;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 < 0)
	{
	}
	return iVar1;
}

int func_927(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_ped_injured(iParam0))
	{
		return 0;
	}
	iVar4 = _0x4642182a298187d0(iParam0, iParam1, &uVar0, 4, iParam2);
	if (iVar4 == 3 || iVar4 == 4)
	{
		return uVar0;
	}
	return 0;
}

bool func_928(int iParam0)
{
	return func_1043(iParam0, 2);
}

void func_929(int iParam0, bool bParam1)
{
	if (!func_934(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!func_1181(iParam0, 1024))
		{
			func_936(iParam0, 1024);
			_0x9b4e793b1cb6550a();
		}
	}
	else if (func_1181(iParam0, 1024))
	{
		func_935(iParam0, 1024);
		_0x9b4e793b1cb6550a();
	}
	func_1182(iParam0);
}

int func_930(int iParam0)
{
	return Global_1914319->f_3[iParam0]->f_408;
}

void func_931(int iParam0)
{
	if (func_1183(iParam0) && func_1184())
	{
		remove_door_from_system(iParam0);
	}
}

void func_932(int iParam0)
{
	Global_1914319->f_3[iParam0]->f_7 = 0;
}

void func_933(int iParam0, bool bParam1)
{
	if (!func_599(iParam0))
	{
		return;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	if (bParam1)
	{
		set_bit(Global_1914319->f_15924[iVar1], iVar2);
	}
	else
	{
		clear_bit(Global_1914319->f_15924[iVar1], iVar2);
	}
}

bool func_934(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

void func_935(int iParam0, int iParam1)
{
	if (!func_934(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (&Global_1914319->f_15614[iParam0] - (Global_1914319->f_15614[iParam0] && iParam1));
}

void func_936(int iParam0, int iParam1)
{
	if (!func_934(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (Global_1914319->f_15614[iParam0] || iParam1);
}

int func_937(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 < 153))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 126:
			return 32;
		case 22:
			return 17;
		case 4:
		case 5:
		case 34:
		case 55:
		case 67:
			return 18;
		case 56:
		case 57:
		case 58:
		case 59:
			return 19;
		case 102:
		case 106:
		case 109:
		case 112:
		case 114:
		case 120:
			return 29;
		case 39:
		case 73:
		case 128:
		case 132:
		case 137:
		case 141:
		case 145:
			return 0;
		case 7:
		case 19:
		case 28:
		case 42:
		case 61:
		case 74:
		case 87:
		case 90:
		case 95:
		case 129:
		case 133:
		case 138:
		case 142:
		case 146:
			return 3;
		case 0:
		case 8:
		case 29:
		case 43:
		case 75:
		case 91:
		case 130:
		case 134:
		case 139:
		case 143:
		case 147:
			return 6;
		case 17:
		case 47:
			return 7;
		case 18:
		case 27:
		case 41:
		case 82:
		case 98:
		case 125:
			return 4;
		case 10:
		case 26:
		case 38:
		case 60:
		case 72:
		case 92:
			return 10;
		case 1:
		case 16:
		case 32:
		case 51:
		case 64:
		case 80:
			return 22;
		case 2:
		case 14:
		case 20:
		case 23:
		case 30:
		case 45:
		case 65:
		case 77:
		case 86:
		case 89:
		case 96:
		case 99:
			return 2;
		case 3:
		case 15:
		case 21:
		case 24:
		case 31:
		case 46:
		case 78:
		case 85:
		case 88:
		case 100:
			return 1;
		case 9:
		case 37:
		case 69:
			return 8;
		case 13:
		case 35:
		case 44:
		case 63:
		case 76:
		case 84:
		case 94:
			return 9;
		case 103:
		case 107:
		case 110:
		case 116:
			return 30;
		case 104:
		case 105:
		case 108:
		case 111:
		case 113:
		case 115:
		case 117:
		case 118:
		case 119:
		case 121:
		case 122:
		case 123:
		case 124:
			return 31;
		case 136:
			return 5;
		case 6:
		case 25:
		case 36:
		case 68:
			return 15;
		case 11:
		case 33:
		case 52:
		case 53:
		case 66:
		case 70:
		case 71:
		case 81:
		case 83:
		case 93:
		case 97:
			return 33;
		case 48:
			return 12;
		case 49:
			return 13;
		case 50:
			return 14;
		case 62:
		case 79:
			return 20;
		case 101:
			return 11;
		case 149:
			return 23;
		case 150:
			return 24;
		case 151:
			return 25;
		case 12:
		case 54:
			return 21;
		case 127:
			return 34;
		case 131:
		case 135:
		case 140:
		case 144:
		case 148:
			return 27;
		case 152:
			return 24;
		default:
			break;
	}
	return -1;
}

void func_938(int iParam0, bool bParam1)
{
	if (!func_599(iParam0))
	{
		return;
	}
	if ((bParam1 && func_1132(iParam0, 512)) || (!bParam1 && !func_1132(iParam0, 512)))
	{
		return;
	}
	if (bParam1)
	{
		func_824(iParam0, 512);
	}
	else
	{
		func_304(iParam0, 512);
	}
	if (func_1185(iParam0))
	{
		_0x9b4e793b1cb6550a();
	}
}

int func_939(int iParam0)
{
	iVar0 = func_600(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1186(iVar0);
}

int func_940(int iParam0, int iParam1)
{
	if (Global_1058888->f_40501 >= 32)
	{
		return -1;
	}
	Var0 = -1;
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	if (Global_1058888->f_40501 == 0)
	{
		*Global_1058888->f_40501.f_1[Global_1058888->f_40501] = { Var0 };
		Global_1058888->f_40501++;
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < Global_1058888->f_40501)
	{
		if (iParam0 == &Global_1058888->f_40501.f_1[iVar2])
		{
			*Global_1058888->f_40501.f_1[iVar2] = { Var0 };
			return iVar2;
		}
		else if (iParam0 > &Global_1058888->f_40501.f_1[iVar2])
		{
			iVar2++;
		}
		else if (iParam0 < &Global_1058888->f_40501.f_1[iVar2])
		{
			func_1187(iVar2);
			*Global_1058888->f_40501.f_1[iVar2] = { Var0 };
			return iVar2;
		}
	}
	if (Global_1058888->f_40501 < 31)
	{
		iVar2 = Global_1058888->f_40501;
		*Global_1058888->f_40501.f_1[iVar2] = { Var0 };
		Global_1058888->f_40501++;
		if (Global_1058888->f_40501 > 32)
		{
			Global_1058888->f_40501 = 32;
		}
		return iVar2;
	}
	return -1;
}

void func_941()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

int func_942(int iParam0, int iParam1)
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

int func_943(bool bParam0)
{
	if (func_1() == -1)
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

int func_944(int iParam0)
{
	if (!func_1153(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_945(int iParam0)
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

void func_946(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && iParam0));
}

void func_947(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || iParam0);
}

void func_948(int iParam0, int iParam1)
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
			func_1188((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1188(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_98(&(Global_1898164->f_1[0])))
	{
		func_315(&(Global_1898164->f_1[0]), 3);
	}
}

int func_949(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_950(int iParam0, int iParam1)
{
	iParam0 = func_949(iParam0);
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

void func_951()
{
	if (func_1189(0))
	{
		func_1190(0);
	}
	if (func_1189(1))
	{
		func_1190(1);
	}
	if (func_1189(5))
	{
		func_1190(5);
	}
	if (func_1189(6))
	{
		func_1191(6);
	}
}

int func_952()
{
	return Global_1894899->f_2;
}

bool func_953(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

bool func_954(var uParam0, char* sParam1)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return false;
	}
	if (_0x23e33cb9f4a3f547(*uParam0, sParam1))
	{
		return true;
	}
	return false;
}

void func_955(var uParam0, char* sParam1, bool bParam2)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return;
	}
	set_anim_scene_bool(*uParam0, sParam1, bParam2, false);
}

int func_956(int iParam0, vector3 vParam1, float fParam4)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		vVar0 = { get_entity_coords(iParam0, false, false) };
		vVar3 = { get_entity_forward_vector(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_1192(vVar3, vVar6);
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
	if (func_1193(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

int func_957(int iParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_236(iVar2) != 0 && _0x800df3fc913355f3(func_167(iVar2)))
		{
			if (func_167(iVar2) == iVar0)
			{
				return iVar2;
			}
		}
		iVar1++;
	}
	return -1;
}

float func_958(int iParam0)
{
	if (!*iParam0 & 1 != 0)
	{
		return func_918(iParam0);
	}
	if (_0x25ca89b2a39dcc69() > 0.833f)
	{
		return func_1194(iParam0);
	}
	return func_918(iParam0);
}

float func_959(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_960()
{
	iVar0 = func_445(func_444());
	iVar1 = func_641(func_444());
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

bool func_961(int iParam0)
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

void func_962(int iParam0, int iParam1)
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

void func_963(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_964(int iParam0, int iParam1)
{
	iVar0 = func_643(*iParam0);
	iVar1 = func_642(*iParam0);
	if (iParam1 < 1 || iParam1 > func_645(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_965(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_966(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_967(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

void func_968(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

int func_969(int* iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	if (!is_entity_dead(*iParam0))
	{
		func_968(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !_does_volume_exist(iParam9)) || is_entity_in_volume(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (is_ambient_speech_playing(*iParam0) || is_scripted_speech_playing(*iParam0));
		fVar8 = func_1056(fParam12 >= 0f, fParam12, vdist(Global_36, get_entity_coords(*iParam0, true, false)));
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
			func_48(&(iParam1->f_13));
		}
		if (func_1195(*iParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_1196(iParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_969(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_983(iParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!get_ped_config_flag(*iParam0, 317, true))
						{
							func_1197(*iParam0, 1, 1);
						}
					}
					else if (func_809(iParam1, 22))
					{
						func_1197(*iParam0, 0, 1);
					}
				}
				if (func_1198(iParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_1199(iParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_1200(iParam8);
					if (func_1201(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (is_bit_set(uParam3[iParam1->f_1], 20))
								{
									func_1202(uParam3);
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
					func_1203(iParam1, uParam3, fVar8);
					if (func_1204(*iParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (is_bit_set(*iParam1, 1))
					{
						func_107(uParam3, 0, 0, 1, 1);
						clear_bit(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_1205(iParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_1198(iParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_1206(*iParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_1201(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_1199(iParam0, func_1198(iParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_1200(iParam8);
				}
				else if (is_bit_set(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_107(uParam3, 0, 0, 1, 1);
					}
					func_1207(iParam1, 1);
				}
				func_1203(iParam1, uParam3, fVar8);
				if (func_1205(iParam0, iParam1, fParam4, bVar6))
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
			func_984(iParam1, uParam3);
			set_bit(iParam1, 3);
		}
	}
	return -1;
}

void func_970(int* iParam0, var uParam1, int* iParam2)
{
	iVar0 = func_1208(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (*uParam1)[iVar0]->f_13;
		iVar2 = (*uParam1)[iVar0]->f_15;
		if (!is_string_null_or_empty(sVar1))
		{
			func_114(Global_35, *iParam2, sVar1, "", -1082130432, iVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_971(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_1() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_972(int iParam0, bool bParam1)
{
	func_1209(iParam0, &iVar0, &iVar1);
	if (!func_1210(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_1211(iVar0, iVar1);
}

bool func_973(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 38)
	{
		return true;
	}
	return false;
}

void func_974(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_301(iParam0))
	{
		return;
	}
	iVar0 = func_594(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(2, sParam1, sParam2));
}

void func_975(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_301(iParam0))
	{
		return;
	}
	iVar0 = func_594(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, sParam1);
}

void func_976(int* iParam0, char* sParam1)
{
	if (func_301(iParam0->f_6) && !is_string_null_or_empty(sParam1))
	{
		func_975(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_979(iParam0, 1);
}

bool func_977(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

void func_978(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_979(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

bool func_980(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_981(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
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

bool func_982(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_983(int iParam0)
{
	if (!is_entity_dead(*iParam0))
	{
		_0xe98d55c5983f2509(*iParam0);
		set_ped_config_flag(*iParam0, 297, false);
	}
}

void func_984(int* iParam0, var uParam1)
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
	func_1212(iParam0, uParam1, 1);
	func_107(uParam1, 0, 1, 1, 0);
	_copy_memory(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		_copy_memory((*uParam1)[iVar0], &Var22, 17);
		iVar0++;
	}
}

bool func_985(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_1070(iParam0, iParam1, 0f))
		{
			return false;
		}
	}
	if (!func_1213(iParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (bParam4 && is_entity_a_ped(iParam1))
	{
		return _0x9d9473cb82d83a30(iParam0, get_ped_index_from_entity_index(iParam1), 0) == 1;
	}
	return _0x7f9b9791d4cb71f6(iParam0, iParam1, bParam2, 0) == 1;
}

bool func_986(var uParam0, char* sParam1)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return false;
	}
	return _0x0df57f86fe71dbe5(*uParam0, sParam1);
}

int func_987(var uParam0, char* sParam1)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return 0;
	}
	return _0xae6ada8fe7e84acc(*uParam0, sParam1);
}

void func_988(int iParam0, int iParam1, int iParam2)
{
	if (!is_entity_dead(*iParam0))
	{
		iVar0 = *iParam0;
	}
	else if (!is_entity_dead(*iParam1))
	{
		iVar0 = *iParam1;
	}
	else
	{
		return;
	}
	if (has_anim_event_fired(iVar0, -137640087))
	{
		iLocal_1033[iParam2] = 0;
	}
	else if (has_anim_event_fired(iVar0, -1300850144))
	{
		iLocal_1033[iParam2] = 1;
	}
	else if (has_anim_event_fired(iVar0, -1011860333))
	{
		iLocal_1033[iParam2] = 2;
	}
	else
	{
		iLocal_1033[iParam2] = -1;
	}
}

int func_989(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1073741824;
		case 1:
			return -2147483648;
		default:
			break;
	}
	return 0;
}

Vector3 func_990(int iParam0, int iParam1, bool bParam2)
{
	StringCopy(&cVar0, "PB_", 24);
	switch (iParam1)
	{
		case 0:
			StringConCat(&cVar0, "PRE_", 24);
			break;
		case 1:
			StringConCat(&cVar0, "SAW_A_", 24);
			break;
		case 2:
			StringConCat(&cVar0, "SAW_B_", 24);
			break;
		default:
			StringCopy(&cVar0, "", 24);
			return cVar0;
	}
	StringConCat(&cVar0, "ILO_", 24);
	if (bParam2)
	{
		StringConCat(&cVar0, "NEG_", 24);
	}
	else
	{
		StringConCat(&cVar0, "POS_", 24);
	}
	iVar3 = func_635(*iParam0, Global_35, 1060437492);
	switch (iVar3)
	{
		case 0:
			StringConCat(&cVar0, "N", 24);
			break;
		case 3:
			StringConCat(&cVar0, "L", 24);
			break;
		case 2:
			StringConCat(&cVar0, "R", 24);
			break;
		case 1:
			StringConCat(&cVar0, "BACK", 24);
			break;
	}
	return cVar0;
}

bool func_991(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, bool bParam5, bool bParam6)
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

void func_992(int iParam0, int iParam1)
{
	iVar0 = _0x62de46f061caa468();
	if (iParam0 > iVar0)
	{
		iParam0 = iVar0;
	}
	_0x7d4e70a67a651c71(iParam0);
	iParam1->f_3 = (iParam1->f_3 - iParam0);
}

bool func_993(int iParam0, int iParam1)
{
	if (is_entity_dead(*iParam0))
	{
		return false;
	}
	if (is_ped_active_in_scenario(*iParam0, 1))
	{
		return false;
	}
	if (has_anim_event_fired(*iParam0, 1407243653))
	{
		return false;
	}
	if (func_1214(iParam1))
	{
		return false;
	}
	return true;
}

void func_994(int iParam0)
{
	iVar0 = func_681(iParam0);
	if (!func_115(func_1215(iParam0)) && !func_422(iVar0))
	{
		iVar1 = (810 + iParam0);
		iVar2 = func_63(iVar1);
		if (!is_entity_dead(iVar2))
		{
			if (!func_115(func_686(iParam0)) && has_anim_event_fired(iVar2, 2009491632))
			{
				func_1061(iVar2, 31267307, 10f, 0, "EXIT_TREE_FALL", 1, 129);
				clear_ped_tasks(iVar2, 1, 0);
				_0x2208438012482a1a(iVar2, false, false);
				func_35(func_686(iParam0));
			}
			if (has_anim_event_fired(iVar2, 1407243653))
			{
				set_ped_config_flag(iVar2, 146, false);
				set_ped_config_flag(iVar2, 234, true);
				set_ped_config_flag(iVar2, 178, true);
				set_ped_config_flag(iVar2, 389, false);
				func_35(func_1215(iParam0));
				func_35(func_682(iParam0));
			}
		}
	}
}

bool func_995(int iParam0, int iParam1)
{
	if (func_421(iParam0))
	{
		return false;
	}
	if (!func_251(*iParam1, 0, 1))
	{
		return false;
	}
	if (!decor_exist_on(*iParam1, "bChopDown"))
	{
		return false;
	}
	return true;
}

bool func_996(int iParam0, bool bParam1)
{
	if (!does_rayfire_map_object_exist(&(iLocal_1014[iParam0])))
	{
		return false;
	}
	if (!bParam1)
	{
		return false;
	}
	if (func_19(64))
	{
		return true;
	}
	if (!func_658(vLocal_1117[0]))
	{
		return false;
	}
	if (func_774(vLocal_1117[0]) <= 5000)
	{
		return false;
	}
	return true;
}

int func_997(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1048576;
		case 1:
			return 2097152;
		case 2:
			return 4194304;
		case 3:
			return 8388608;
		default:
			break;
	}
	return 0;
}

bool func_998()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_421(iVar0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

char* func_999()
{
	iVar0 = get_random_int_in_range(0, 4);
	switch (iVar0)
	{
		case 0:
			return "LOG_WARN01";
		case 1:
			return "LOG_WARN02";
		case 2:
			return "LOG_WARN03";
		case 3:
			return "LOG_WARN04";
		default:
			break;
	}
	return "LOG_WARN01";
}

void func_1000(int iParam0)
{
	iVar31 = 0;
	iVar31 = func_291(&iVar0);
	iVar32 = (810 + iParam0);
	iVar33 = func_63(iVar32);
	if (!is_entity_dead(iVar33))
	{
		iVar0[iVar31] = iVar33;
		iVar31++;
	}
	if (!func_19(32))
	{
		func_1216(&iVar0, &iParam0, 1);
	}
	else
	{
		func_1217(&(uLocal_2479[0]), &iVar0);
	}
}

Vector3 func_1001(int iParam0)
{
	if (func_19(64) && iParam0 == 0)
	{
		return 0f, 0f, 79.04118f;
	}
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -15f, 0f, -60.62425f;
				case 1:
					return 0f, 0f, 102.5155f;
				case 2:
					return 0f, 0f, 42.34158f;
				case 3:
					return -15f, 0f, -84.66344f;
				case 4:
					return 0f, 0f, 60.87f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 0f, 0f, 79.04118f;
				case 1:
					return 0f, 0f, 121.4344f;
				case 2:
					return -15f, 0f, -98.84385f;
				case 3:
					return -15f, 0f, -99.77609f;
				case 4:
					return -15f, 0f, -99.77609f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 0f, 0f, 84.4f;
				case 1:
					return -15f, 0f, 14.6f;
				case 2:
					return 15f, 0f, -158.89f;
				case 3:
					return 0f, 0f, 77.9f;
				case 4:
					return 0f, 0f, 84.4f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_1002(int iParam0)
{
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					if (func_19(64))
					{
						iLocal_75[3] = _create_volume_cylinder_with_custom_name(-1390.31f, -272.9292f, 100.524f, -80.4691f, 83.58102f, -92.52708f, 1.284743f, 0.828f, 12.42189f, "volTreeKill 0");
					}
					else
					{
						iLocal_75[3] = _create_volume_cylinder_with_custom_name(-1455.782f, -255.1657f, 106.2708f, 176.1422f, 74.22754f, -157.1033f, 1.284743f, 0.828f, 11.23116f, "volTreeKill 0");
					}
					break;
				case 1:
					iLocal_75[3] = _create_volume_cylinder_with_custom_name(-1408.708f, -186.5688f, 101.067f, 76.65434f, 86.72099f, -88.83711f, 1.284743f, 0.828f, 12.79663f, "volTreeKill 1");
					break;
				case 2:
					iLocal_75[3] = _create_volume_cylinder_with_custom_name(-1458.914f, -194.3228f, 105.2989f, -89.76711f, 89.07716f, -136.2797f, 1.284743f, 0.828f, 11.93199f, "volTreeKill 2");
					break;
				case 3:
					iLocal_75[3] = _create_volume_cylinder_with_custom_name(-1465.396f, -227.6279f, 107.1113f, -173.9405f, 77.34332f, -173.0002f, 1.284743f, 0.828f, 10.89174f, "volTreeKill 3");
					break;
				case 4:
					iLocal_75[3] = _create_volume_cylinder_with_custom_name(-1417.96f, -200.7522f, 101.8687f, 116.2321f, 86.72099f, -88.83711f, 1.284743f, 0.828f, 10.74282f, "volTreeKill 1");
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					iLocal_75[3] = _create_volume_cylinder_with_custom_name(-1390.31f, -272.9292f, 100.524f, -80.4691f, 83.58102f, -92.52708f, 1.284743f, 0.828f, 12.42189f, "volTreeKill 0");
					break;
				case 1:
					iLocal_75[3] = _create_volume_cylinder_with_custom_name(-1453.148f, -166.5273f, 107.2447f, 77.26909f, 87.1385f, -72.74516f, 1.284743f, 0.828f, 11.9518f, "volTreeKill 1");
					break;
				case 2:
					iLocal_75[3] = _create_volume_cylinder_with_custom_name(-1468.958f, -251.1458f, 108.5803f, -163.4203f, 76.80013f, -175.8395f, 1.284743f, 0.828f, 11.48762f, "volTreeKill 2");
					break;
				case 3:
					iLocal_75[3] = _create_volume_cylinder_with_custom_name(-1421.089f, -284.0165f, 104.972f, -160.3766f, 74.96647f, -172.5704f, 1.284743f, 0.828f, 11.23799f, "volTreeKill 3");
					break;
				case 4:
					iLocal_75[3] = _create_volume_cylinder_with_custom_name(-1421.089f, -284.0165f, 104.972f, -160.3766f, 74.96647f, -172.5704f, 1.284743f, 0.828f, 11.23799f, "volTreeKill 3");
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					iLocal_75[3] = _create_volume_cylinder_with_custom_name(-1402.123f, -292.1445f, 102.0348f, -0.864238f, -86.31268f, 0f, 1.926056f, 1f, 10.36427f, "volTreeKill 0");
					break;
				case 1:
					iLocal_75[3] = _create_volume_cylinder_with_custom_name(-1513.435f, -244.4112f, 120.048f, 76.4277f, 4.506001f, 14.70511f, 1.139303f, 2.028264f, 10.8445f, "volTreeKill 1");
					break;
				case 2:
					iLocal_75[3] = _create_volume_cylinder_with_custom_name(-1473.797f, -116.0985f, 116.5509f, 78.37471f, 4.515922f, 12.70869f, 2.082363f, 2.176558f, 10.8445f, "volTreeKill 2");
					break;
				case 3:
					iLocal_75[3] = _create_volume_cylinder_with_custom_name(-1503.689f, -203.0762f, 110.4443f, 173.4138f, -89.01738f, -180f, 2.334879f, 1f, 10.34734f, "volTreeKill 3");
					break;
				case 4:
					iLocal_75[3] = _create_volume_cylinder_with_custom_name(-1402.123f, -292.1445f, 102.0348f, -0.864238f, -86.31268f, 0f, 1.926056f, 1f, 10.36427f, "volTreeKill 0");
					break;
			}
			break;
	}
}

void func_1003(int iParam0)
{
	iVar0 = func_63(iParam0);
	iVar1 = func_1218(iParam0);
	if (iVar1 < 0 || iVar1 > 3)
	{
		return;
	}
	iVar2 = func_681(iVar1);
	if (!is_entity_dead(iVar0))
	{
		if ((func_164(64) && !_is_ped_using_scenario_hash(iVar0, func_683())) && !func_458(iVar2))
		{
			if (!func_263(iParam0, 0))
			{
				func_62(iParam0, 1, 1);
			}
			func_459(&iVar2);
			clear_ped_tasks(iVar0, 1, 0);
			set_current_ped_weapon(iVar0, -1569615261, false, 0, false, false);
			open_sequence_task(&uLocal_735);
			task_swap_weapon(0, 1, 0, 0, 0);
			if (_does_scenario_point_exist(&(uLocal_1026[iVar1])))
			{
				_task_use_scenario_point(0, &(uLocal_1026[iVar1]), 0, 0, true, false, 0, false, -1f, false);
			}
			else
			{
				_task_use_nearest_scenario_to_coord(0, func_1219(iVar1), 5f, 0, false, false, false, false);
			}
			close_sequence_task(iVar732);
			_task_perform_sequence_2(iVar0, iVar732, 1f, 3f);
			clear_sequence_task(&uLocal_735);
		}
		else
		{
			clear_ped_tasks(iVar0, 1, 0);
			set_current_ped_weapon(iVar0, -1569615261, false, 0, false, false);
			func_75(iParam0, 1);
			func_466(iVar2, 0);
		}
	}
}

int func_1004(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	iVar0 = create_itemset(true);
	iVar6 = _0x886171a12f400b89(iParam3, iVar0, 1);
	if (iVar6 > 0)
	{
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			iVar1 = get_indexed_item_in_itemset(iVar5, iVar0);
			iVar2 = iVar1;
			if ((does_entity_exist(iVar2) && iVar4 < *iParam0) && iVar4 < iParam2)
			{
				if (func_1220(iVar2, bParam4, bParam6, bParam8, bParam9, bParam10) && !decor_exist_on(iVar2, "bIgnoreThisPed"))
				{
					if (!func_351(iVar2, iParam1))
					{
						bVar3 = false;
						if (iParam7 != -1)
						{
							iVar7 = 0;
							iVar7 = 0;
							while (iVar7 < get_num_models_in_population_set(iParam7))
							{
								if (is_ped_model(iVar2, get_ped_model_name_in_population_set(iParam7, iVar7)))
								{
									bVar3 = true;
								}
								else
								{
									iVar7++;
								}
							}
						}
						else
						{
							bVar3 = true;
						}
						if (bVar3)
						{
							if (!bParam11)
							{
								if (!is_entity_dead(iVar2))
								{
									set_blocking_of_non_temporary_events(iVar2, bParam5);
								}
							}
							(*iParam0)[iVar4] = iVar2;
							iVar4++;
						}
					}
				}
			}
			iVar5++;
		}
	}
	if (iVar4 >= (iParam2 - 1) && iVar6 >= iParam2)
	{
	}
	destroy_itemset(iVar0);
	return iVar4;
}

bool func_1005(var uParam0, int iParam1, var uParam2)
{
	if (!func_251(iParam1, 0, 1))
	{
		return false;
	}
	if (decor_exist_on(iParam1, "bNoticePlayer"))
	{
		return false;
	}
	if (!func_1221(iParam1))
	{
		return false;
	}
	if (func_358(iParam1, Global_35, 1, 1) > uParam0->f_32)
	{
		return false;
	}
	if (func_351(iParam1, uParam2))
	{
		return false;
	}
	if (func_1222(iParam1, &(uParam0->f_12)))
	{
		return false;
	}
	return true;
}

void func_1006(bool bParam0)
{
	*bParam0 = 0;
	bParam0->f_2 = -1;
	bParam0->f_3 = 0;
	bParam0->f_4 = 0;
}

bool func_1007()
{
	return func_1223(_0xc17f69e1418cd11f(3));
}

int func_1008(int iParam0, int iParam1, int iParam2)
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

bool func_1009(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = 0;
			break;
		case 1:
			*iParam1 = 1;
			break;
		default:
			return false;
	}
	return true;
}

bool func_1010()
{
	if (!func_213(Global_35, &(iLocal_75[10]), 1, 0))
	{
		return false;
	}
	if (iVar2315 != 5 && iVar2315 != 6)
	{
		return false;
	}
	return true;
}

var func_1011(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	if (bParam2)
	{
		_0xdd1232b332cbb9e7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_1224(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_1225(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		_uilog_set_cached_objective(sVar0);
	}
	return func_1224(sVar0, iParam1, 0, 0, 1, 1);
}

bool func_1012(int iParam0, bool bParam1)
{
	if (!does_blip_exist(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		return _blip_set_modifier(iParam0, -1186550032);
	}
	return _set_blip_flash_style(iParam0, -1186550032);
}

void func_1013()
{
	iVar0 = _get_last_mount(Global_35);
	if (is_ped_on_mount(Global_35))
	{
		if (func_213(iVar0, &(iLocal_75[4]), 1, 0))
		{
			set_ped_max_move_blend_ratio(iVar0, 1f);
		}
		else if (func_213(iVar0, &(iLocal_75[10]), 1, 0))
		{
			set_ped_max_move_blend_ratio(iVar0, 1.25f);
		}
		else if (func_213(iVar0, &(iLocal_75[9]), 1, 0))
		{
			set_ped_max_move_blend_ratio(iVar0, 1.501f);
		}
	}
}

void func_1014(bool bParam0)
{
	if (bParam0)
	{
		func_1226(4);
	}
	func_1226(2);
	set_bit(&(Global_1956580->f_1), 0);
}

bool func_1015(int iParam0, var uParam1, vector3 vParam2, int iParam5, float fParam6, int iParam7, bool bParam8, int iParam9, bool bParam10, bool bParam11, float fParam12)
{
	if (!func_374(iParam0))
	{
		if (bParam11)
		{
			iVar0 = func_1227(7);
		}
		else
		{
			iVar0 = _get_last_mount(iParam0);
		}
		if (!func_514(iVar0, 1) || (!(_does_volume_exist(iParam5) && func_213(iVar0, iParam5, 1, 0)) && func_358(iParam0, iVar0, 1, 1) > fParam6))
		{
			return true;
		}
		if (!does_entity_exist(*uParam1))
		{
			if (func_617(iVar0) && func_618(iVar0) != 1)
			{
				Var2.f_10 = 7;
				Var2.f_1 = 1;
				*uParam1 = func_1228(&uVar1, &Var2);
				if (!does_entity_exist(*uParam1))
				{
					*uParam1 = iVar0;
				}
			}
			else
			{
				*uParam1 = iVar0;
			}
		}
		if (!does_entity_exist(*uParam1))
		{
			return true;
		}
		if (func_514(*uParam1, 1))
		{
			if (!(func_129(*uParam1, 518218985) || func_129(*uParam1, 713668775)))
			{
				clear_ped_tasks(*uParam1, 1, 0);
				iVar13 = 0;
				if (!bParam10)
				{
					iVar13 = 16640;
				}
				_0xff1e339ce40eaaaf(*uParam1, 0);
				_0xf74e134f40192884(*uParam1, 2);
				if (!func_241(vParam2))
				{
					bParam8 = false;
					task_follow_nav_mesh_to_coord(*uParam1, vParam2, fParam12, -1, 0.25f, 0, 40000f);
				}
				if (_does_volume_exist(iParam5))
				{
					_0xb56d41a694e42e86(iParam5, 2048, 0, 0, -1, -1, 2);
					if (bParam8)
					{
						_task_smart_flee_style_coord(*uParam1, _0xf70f00013a62f866(iParam5), iParam7, iVar13, fParam6, 6000, 0);
					}
				}
				if (!bParam8 && func_241(vParam2))
				{
					_task_smart_flee_style_ped(*uParam1, iParam0, iParam7, iVar13, fParam6, 6000, 0);
				}
			}
		}
	}
	return false;
}

void func_1016(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_69(iParam0);
	}
	else
	{
		func_330(iParam0);
	}
}

void func_1017(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (iParam1 >= *uParam0 || iParam1 < 0)
	{
		iParam1 = 0;
	}
	if (iParam2 >= *uParam0 || iParam2 < iParam1)
	{
		iParam2 = (*uParam0 - 1);
	}
	iVar1 = iParam1;
	while (iVar1 <= iParam2)
	{
		if (func_1229((*uParam0)[iVar1], iParam3, iParam4, iParam5, 0, bParam6, 0, 0))
		{
			bVar0 = true;
		}
		else
		{
			iVar1++;
		}
	}
	if (!bVar0)
	{
		func_1230();
	}
}

void func_1018(int iParam0, bool bParam1)
{
	set_ped_config_flag(*iParam0, 301, !bParam1);
	set_ped_config_flag(*iParam0, 315, !bParam1);
	set_ped_config_flag(*iParam0, 130, !bParam1);
	set_ped_config_flag(*iParam0, 178, bParam1);
}

Vector3 func_1019(vector3 vParam0)
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

float func_1020()
{
	return Global_1935436->f_9;
}

void func_1021(int iParam0)
{
	if (iParam0 >= &Global_1935436)
	{
		return;
	}
	Global_1935436->f_1 = iParam0;
}

bool func_1022(int iParam0, bool bParam1)
{
	if (bParam1 && !func_301(iParam0))
	{
		return false;
	}
	return !func_1043(iParam0, 4);
}

void func_1023(vector3 vParam0, int* iParam3, int iParam4, int iParam5, char* sParam6, int iParam7)
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

int func_1024(char* sParam0, int iParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_1043(iVar0, 2))
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
				func_1044(iVar1, iParam1, sParam0, 5, iParam3, fParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_1025(int iParam0, float fParam1, bool bParam2)
{
	if (bParam2 && !func_301(iParam0))
	{
		return;
	}
	if (fParam1 <= 0f)
	{
		return;
	}
	iVar0 = func_594(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	(*Global_1945938)[iVar0]->f_9 = fParam1;
	_uiprompt_context_set_size((*Global_1945938)[iVar0]->f_3, fParam1);
}

int func_1026(char* sParam0, int iParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13)
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
		if (func_1043(iVar0, 2))
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
		func_1044(iVar1, iParam1, sParam0, 2, iParam3, fParam4, 0f, 0f, 0f, 0f, iParam2, 0, 1, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, 1065353216, 0, 0, 0, iParam12, bParam13);
		return iVar1;
	}
	return 0;
}

int func_1027(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	if (func_241(vParam2))
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
		if (func_1043(iVar0, 2))
		{
			if (func_856(vParam2, (*Global_1945938)[iVar0]->f_6, 0.01f, 1) && iParam1 == (*Global_1945938)[iVar0]->f_4)
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
		func_1044(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

int func_1028(int iParam0)
{
	return _money_get_cash_balance();
}

bool func_1029(int iParam0, bool bParam1)
{
	if (bParam1 && !func_301(iParam0))
	{
		return false;
	}
	iVar0 = func_594(iParam0);
	return _uiprompt_is_just_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_1030(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_1231(iParam0, sParam4, iParam5);
	}
	func_1232(iParam0, bParam1, fParam2, iParam3, iParam7);
}

Vector3 func_1031(var uParam0, char* sParam1, char* sParam2)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return 0f, 0f, 0f;
	}
	bVar12 = !is_string_null_or_empty(sParam2);
	if (_get_anim_scene_entity_matrix(*uParam0, sParam1, &Var0, bVar12, sParam2, 2))
	{
		return Var0.f_3;
	}
	return 0f, 0f, 0f;
}

void func_1032(int iParam0)
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

void func_1033(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam1;
}

bool func_1034(var uParam0, int iParam1)
{
	if (func_223(&(uParam0->f_5), 5f))
	{
		return true;
	}
	if (func_368(uParam0->f_23, 2))
	{
		return true;
	}
	if (((!func_374(uParam0->f_1) && !func_129(uParam0->f_1, 501393341)) && !is_ped_in_any_vehicle(uParam0->f_1, true)) && !func_129(uParam0->f_1, -828834893))
	{
		return true;
	}
	return false;
}

bool func_1035(var uParam0, int iParam1)
{
	if (func_223(&(uParam0->f_5), 4f))
	{
		return true;
	}
	if (!func_368(uParam0->f_23, 16384))
	{
		return true;
	}
	if (uParam0->f_1 != Global_35)
	{
		return true;
	}
	if (!func_1233(&uVar0))
	{
		return true;
	}
	return false;
}

int func_1036()
{
	if (!func_1234())
	{
		return 0;
	}
	if (!func_1235(&iVar0))
	{
		return 0;
	}
	if (!func_1236(iVar0))
	{
		return 0;
	}
	return func_1237(iVar0, 0);
}

bool func_1037(var uParam0, int iParam1)
{
	if (func_223(&(uParam0->f_5), 4f))
	{
		return true;
	}
	if (func_368(uParam0->f_23, 4))
	{
		return true;
	}
	get_current_ped_weapon(uParam0->f_1, &iVar0, true, 0, false);
	get_current_ped_weapon(uParam0->f_1, &iVar1, true, 1, false);
	if (func_368(uParam0->f_23, 512) || (iVar0 == -1569615261 && iVar1 == -1569615261))
	{
		return true;
	}
	return false;
}

int func_1038(int iParam0)
{
	iVar0 = func_383(iParam0);
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

bool func_1039(var uParam0, int iParam1)
{
	if (func_223(&(uParam0->f_5), 15f))
	{
		return true;
	}
	if (func_368(uParam0->f_23, 4096) && func_129(uParam0->f_1, 1245594896))
	{
		return false;
	}
	if (func_368(uParam0->f_23, 256))
	{
		return true;
	}
	if (get_script_task_status(uParam0->f_1, -208384378, true) == 8)
	{
		return true;
	}
	return false;
}

void func_1040(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

bool func_1041(int iParam0, vector3 vParam1, float fParam4, bool bParam5, float fParam6, bool bParam7)
{
	fVar0 = func_512(get_entity_heading(iParam0));
	fParam4 = func_512(fParam4);
	if (is_entity_at_coord(iParam0, vParam1, bParam5, bParam5, 2f, false, bParam7, 0) && absf((fVar0 - fParam4)) <= fParam6)
	{
		return true;
	}
	return false;
}

float func_1042(int iParam0, vector3 vParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	vVar0 = { get_entity_coords(iParam0, true, false) };
	return (vVar0.z - vParam1.z);
}

bool func_1043(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

void func_1044(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
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
	func_1127(iParam0, 1);
	func_1128(iParam0, 1);
	func_1129(iParam0, 128);
}

void func_1045(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		set_ped_config_flag(*iParam0, 178, false);
		_0x20c5459379d75c1c(*iParam0, "LOG_WRK_ACC_OBS");
		_0xa3c53cde922bc78b(*iParam0, "LOG_WRK_ACC_OBS");
	}
	else
	{
		set_ped_config_flag(*iParam0, 178, true);
		_0x20c5459379d75c1c(*iParam0, "");
		_0xa3c53cde922bc78b(*iParam0, "");
	}
	_0x8af46e5159a5b620(*iParam0, 291934926);
	func_243(*iParam0, 1, 1);
}

bool func_1046(int iParam0)
{
	switch (iParam0)
	{
		case 810:
		case 811:
		case 812:
		case 813:
			return true;
	}
	return false;
}

void func_1047(int iParam0, int iParam1, char* sParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	func_975((*Local_814[iParam0])[iParam1]->f_6, sParam2, 0);
	(*Local_814[iParam0])[iParam1]->f_5 = sParam2;
}

void func_1048(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	func_653((*Local_814[iParam0])[iParam1], bParam2);
}

void func_1049(int iParam0, int iParam1)
{
	func_8(iParam0, iParam1);
}

bool func_1050(var uParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || func_301(uParam0->f_6))
	{
		if (is_bit_set(*uParam0, 0))
		{
			if (!bParam2)
			{
				return true;
			}
			if (func_1022(uParam0->f_6, bParam1))
			{
				return true;
			}
		}
	}
	return false;
}

void func_1051(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_1047(iParam0, 0, "LOG_CTXTGIVE");
	(*Local_814[iParam0])[0]->f_14 = 500;
	func_978((*Local_814[iParam0])[0], 1);
	func_974((*Local_814[iParam0])[0]->f_6, "LOG_CTXTGIVE", (*Local_814[iParam0])[0]->f_14, 0);
	func_762(iParam0, 0, 1);
	func_1047(iParam0, 1, func_650(10));
	func_762(iParam0, 1, 1);
	func_762(iParam0, 2, bParam1);
	func_1048(iParam0, 2, !bParam1);
	func_69(524288);
}

void func_1052(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_1028(1) < iParam0)
	{
		iParam0 = func_1028(1);
	}
	_money_decrement_cash_balance(iParam0);
	Var0 = { func_1169(1644987397) };
	_0xbd861ae8a5181ed7(&Var0, iParam0);
}

void func_1053(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_1171(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

int func_1054(int iParam0)
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

var func_1055(int iParam0, int iParam1, int iParam2, int iParam3)
{
	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = iParam1;
	Var0.f_12[0] = iParam2;
	iVar23 = 13;
	return _0xa88e215ceb0435c0(iParam0, &Var0, iParam3, iVar23, 2, 0);
}

float func_1056(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_1057(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = iParam0 * 1000;
	if ((iVar0 + get_game_timer()) > Global_1327479->f_4)
	{
		func_1238(iParam0, iParam1, bParam2);
	}
	else
	{
		iVar0 = (iVar0 / 2);
		if ((iVar0 + get_game_timer()) > Global_1327479->f_5)
		{
			Global_1327479->f_5 = (get_game_timer() + iVar0);
		}
	}
}

int func_1058(int iParam0)
{
	if (func_1239())
	{
		return 0;
	}
	if (!func_1240(3, &Var0))
	{
	}
	Var0.f_1 = 0;
	Var0.f_2 = -2017996124;
	Var0.f_3 = iParam0;
	Var0.f_4 = 0;
	if (_datafile_get_int(&uVar5, &Var0))
	{
	}
	return uVar5;
}

Vector3 func_1059(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "LCMP_IG_NIACT1", 24);
			break;
		case 1:
			StringCopy(&cVar0, "LCMP_IG_NIBA", 24);
			break;
		case 2:
			StringCopy(&cVar0, "LCMP_IG_NOG", 24);
			break;
		case 3:
			StringCopy(&cVar0, "LCMP_IG_NOTI", 24);
			break;
		case 4:
			StringCopy(&cVar0, "LCMP_IG_NIACTB", 24);
			break;
		case 5:
			StringCopy(&cVar0, "LCMP_IG_NICL", 24);
			break;
		case 6:
			StringCopy(&cVar0, "LCMP_IG_NIACT2", 24);
			break;
		case 7:
			StringCopy(&cVar0, "LCMP_IG_NIFM", 24);
			break;
		case 8:
			StringCopy(&cVar0, "LCMP_IG_NOSEE", 24);
			break;
		case 9:
			StringCopy(&cVar0, "LCMP_IG_NOAIN", 24);
			break;
		case 10:
			StringCopy(&cVar0, "LCMP_IG_NI2N", 24);
			break;
		case 11:
			StringCopy(&cVar0, "LCMP_IG_NIFN", 24);
			break;
		case 12:
			StringCopy(&cVar0, "LCMP_IG_NI2N", 24);
			break;
		case 13:
			StringCopy(&cVar0, "LCMP_IG_NIFN", 24);
			break;
	}
	return cVar0;
}

void func_1060(char* sParam0, bool bParam1)
{
	func_1241(sParam0, bParam1, 0);
}

bool func_1061(int iParam0, int iParam1, float fParam2, int iParam3, char* sParam4, bool bParam5, int iParam6)
{
	if (func_251(iParam0, 0, 1))
	{
		_0xd65fdc686a031c83(iParam0, iParam1, fParam2);
		if (!is_string_null_or_empty(sParam4))
		{
		}
		if ((_0x68821369a2ceadd5(iParam0, iParam1) && (bParam5 || !_0x02ebbb3989b7e695(iParam0))) && (iParam3 == 0 || _0x569f1e1237508deb(iParam0) == iParam3))
		{
			return true;
		}
	}
	return false;
}

char* func_1062()
{
	switch (iLocal_103)
	{
		case 0:
			return "LCMPF_IG1_R";
		case 1:
			return "LCMPF_IG1_ALTR";
		case 2:
			return "LCMP_ANGR_2";
		default:
			break;
	}
	return "";
}

void func_1063(int iParam0, bool bParam1)
{
	if (*iParam0 != 3)
	{
		if (!func_251(iParam0->f_40, 0, 1))
		{
			*iParam0 = 3;
		}
	}
	switch (*iParam0)
	{
		case 0:
			func_1242(iParam0->f_40, Global_35, &(iParam0->f_1), iParam0->f_41, 0, 0, iParam0->f_43, iParam0->f_44, 1, 8, 0, 0, 1069547520, 1073741824, 1050253722, 1067030938, 0, 0, -1, 1, -1082130432, -1082130432, 1);
			if (!_does_volume_exist(iParam0->f_39))
			{
				iParam0->f_39 = _create_volume_cylinder(Global_36, 0f, 0f, 0f, 5f, 5f, 5f);
			}
			*iParam0 = 1;
			break;
		case 1:
			if (func_1243(iParam0))
			{
				if (bParam1)
				{
					clear_ped_tasks(iParam0->f_40, 1, 0);
				}
				func_1242(iParam0->f_40, Global_35, &(iParam0->f_1), iParam0->f_41, 0, 0, iParam0->f_43, iParam0->f_44, 1, 8, 0, 0, 1069547520, 1073741824, 1050253722, 1067030938, 0, 0, -1, 1, -1082130432, -1082130432, 1);
				func_1244(iParam0->f_40, Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
				*iParam0 = 2;
			}
			break;
		case 2:
			func_1244(iParam0->f_40, Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
			if (!func_1243(iParam0))
			{
				task_turn_ped_to_face_entity(iParam0->f_40, Global_35, -1, -1082130432, -1082130432, -1082130432);
				*iParam0 = 1;
			}
			break;
		case 3:
			break;
	}
}

int func_1064(int iParam0)
{
	if (iVar1141 != 5 && func_961(*iParam0))
	{
		func_97();
		iLocal_1144 = 5;
	}
	switch (iVar1141)
	{
		case 0:
			if (func_279(*iParam0, 0, 1) < 20f)
			{
				func_759(iParam0, 0, 0, 0, 0, 0, 0, 1);
				iLocal_1144 = 7;
			}
			break;
		case 7:
			func_759(iParam0, 0, 0, 0, 0, 0, 0, 1);
			if (func_279(*iParam0, 0, 1) < (15f + 1f))
			{
				if (func_19(2097152))
				{
					func_14(2);
					func_379(&(Local_2160.f_35), "LOG_BUY_RET", *iParam0, Global_35, 0, 0, 1, 1);
				}
				iLocal_1144 = 1;
			}
			break;
		case 1:
			func_759(iParam0, 0, 0, 0, 0, 0, 0, 1);
			if (func_279(*iParam0, 0, 1) > 20f || func_253(-3.5f, 1, 0, 0))
			{
				func_779(iParam0);
				iLocal_1144 = 15;
			}
			break;
		case 15:
			return 1;
		case 5:
			if (!func_961(*iParam0) && func_803(iParam0))
			{
				iLocal_1144 = 0;
			}
			break;
	}
	return 0;
}

bool func_1065(int iParam0, int iParam1)
{
	return func_368(Global_1914319->f_3[iParam0]->f_5, iParam1);
}

void func_1066(int iParam0, int iParam1)
{
	func_199(&(Global_1914319->f_3[iParam0]->f_5), iParam1);
}

int func_1067(int iParam0)
{
	if (iParam0 >= 25 || iParam0 <= -1)
	{
		return 0;
	}
	return Global_20710[iParam0]->f_1;
}

int func_1068(var uParam0, float fParam1)
{
	vVar0 = { *uParam0 };
	vVar0.f_2 = (vVar0.z + fParam1);
	if (get_ground_z_for_3d_coord(vVar0, &uVar3, false))
	{
		uParam0->f_2 = uVar3;
		return 1;
	}
	return 0;
}

float func_1069(vector3 vParam0, vector3 vParam3)
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

bool func_1070(int iParam0, int iParam1, float fParam2)
{
	return func_1178(iParam0, get_entity_coords(iParam1, false, false), fParam2);
}

char* func_1071()
{
	switch (func_952())
	{
		case 11:
			return "LOG_CTXT1";
		default:
			break;
	}
	return "INVALID";
}

void func_1072(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	if (func_1245(iParam0))
	{
		return;
	}
	set_this_script_can_remove_blips_created_by_any_script(true);
	func_597(11);
	Global_1914319->f_3[11]->f_21 = -1;
	Global_1914319->f_3[11]->f_22 = -1;
	Global_1914319->f_3[11]->f_23 = iParam0;
	Global_1914319->f_3[11]->f_11 = { get_entity_coords(iParam0, true, false) };
	Global_1914319->f_3[11]->f_10 = 101;
	Global_1914319->f_3[11]->f_8 = iParam7;
	Global_1914319->f_3[11]->f_409 = iParam9;
	Global_1914319->f_3[11]->f_19 = iParam8;
	if (_does_volume_exist(iParam3))
	{
		Global_1914319->f_3[11]->f_25 = iParam3;
	}
	else
	{
		Global_1914319->f_3[11]->f_25 = _create_volume_sphere_with_custom_name(get_entity_coords(iParam0, true, false), 0f, 0f, 0f, iParam4, iParam5, iParam6, func_1246());
		_0x7c00cfc48a782dc0(Global_1914319->f_3[11]->f_25, iParam0, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "SHOP_DYNAMIC";
	}
	StringCopy(&(Global_1914319->f_17378.f_1006), sParam1, 24);
	if (iParam2 == 0)
	{
		func_1247(101, 4);
	}
	else
	{
		func_1249(Global_1914319->f_3[11]->f_9, func_1248(11), Global_1914319->f_3[11]->f_11, -1);
		func_824(11, 8);
	}
	Global_1914319->f_17378.f_1009 = iParam2;
	iVar0 = 0;
	while (iVar0 < 200)
	{
		Global_1914319->f_17378.f_1010[iVar0] = 0;
		iVar0++;
	}
	Global_1914319->f_17378.f_1010.f_201 = 0;
	func_304(11, 16);
	func_824(11, 4);
	func_936(101, 256);
	func_598(101, 1);
}

void func_1073()
{
	func_1250(1533677103);
	func_1250(992551415);
	func_1250(-2044540391);
	func_1250(785091089);
	func_1250(925643953);
	func_1250(516844411);
	func_1250(-930855373);
	func_1250(-951828978);
	func_1250(338147422);
	func_1250(-601932535);
	func_1250(-947702135);
	func_1250(-1429211481);
	func_1250(1613651027);
	func_1250(2036955137);
	func_1250(1627068364);
	func_1250(-2076104686);
	func_1250(23610856);
	func_1250(1177324828);
	func_1250(230530039);
	func_1250(-1994237933);
	func_1250(335540214);
	func_1250(-227505011);
	func_1250(1209486044);
	func_1250(-594879984);
	func_1250(1851034588);
	func_1250(-801397594);
	func_1250(-755485480);
	func_1250(-486559882);
	func_1250(730856618);
	func_1250(1831763320);
	func_1250(2044006195);
	func_1250(-653299524);
	func_1250(-486559882);
	func_1250(-223790555);
	func_1250(747460826);
	func_1250(-1080874779);
	func_1250(-1976480343);
	func_1250(-650786154);
	func_1250(-953313786);
	func_1250(688258043);
	func_1250(-221280702);
	func_1250(1483206625);
}

void func_1074(var uParam0, int iParam1, float fParam2, int iParam3)
{
	if (iParam1 == 0)
	{
		return;
	}
	if (func_1251(uParam0, iParam3))
	{
		func_1252(uParam0, iParam3, fParam2);
		return;
	}
	iVar0 = -1;
	if (!func_1253(uParam0, &iVar0))
	{
		return;
	}
	if (iVar0 < 0 || iVar0 >= 20)
	{
		return;
	}
	(*uParam0)[iVar0] = iParam3;
	(*uParam0)[iVar0]->f_1 = 2;
	(*uParam0)[iVar0]->f_3 = iParam1;
	(*uParam0)[iVar0]->f_2 = 0;
	(*uParam0)[iVar0]->f_6 = fParam2;
}

void func_1075(var uParam0, int iParam1, float fParam2, int iParam3)
{
	if (iParam1 == 0)
	{
		return;
	}
	if (func_1254(uParam0, iParam3))
	{
		func_1255(uParam0, iParam3, fParam2);
		return;
	}
	iVar0 = -1;
	if (!func_1256(uParam0, &iVar0))
	{
		return;
	}
	if (iVar0 < 0 || iVar0 >= 20)
	{
		return;
	}
	uParam0->f_141[iVar0] = iParam3;
	uParam0->f_141[iVar0]->f_1 = 2;
	uParam0->f_141[iVar0]->f_3 = iParam1;
	uParam0->f_141[iVar0]->f_2 = 0;
	uParam0->f_141[iVar0]->f_6 = fParam2;
}

void func_1076(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	func_1077(uParam0, iParam1, sParam2, iParam3, iParam4, bParam5);
}

void func_1077(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	if (iParam3 == 0 && !does_entity_exist(iParam1))
	{
		return;
	}
	if (iParam3 == 0 && (is_entity_dead(iParam1) && !bParam5))
	{
		if (does_entity_exist(iParam1))
		{
		}
		return;
	}
	if (is_string_null_or_empty(sParam2))
	{
		sParam2 = func_1257(iParam1);
	}
	if (is_string_null_or_empty(sParam2))
	{
		if (does_entity_exist(iParam1))
		{
		}
		return;
	}
	iVar0 = func_1258(uParam0, iParam1);
	if (iVar0 != -1)
	{
		if (!are_strings_equal(&(uParam0->f_13[iVar0]->f_1), sParam2))
		{
		}
		else if (uParam0->f_13[iVar0]->f_9 != iParam3)
		{
		}
		else if (uParam0->f_13[iVar0]->f_10 != iParam4)
		{
		}
		else
		{
			return;
		}
	}
	else
	{
		iVar1 = func_1259(uParam0, sParam2);
		if (does_entity_exist(iVar1) && iVar1 != iParam1)
		{
			func_1260(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_1261(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_13[iVar0] = iParam1;
		StringCopy(&(uParam0->f_13[iVar0]->f_1), sParam2, 64);
		uParam0->f_13[iVar0]->f_9 = iParam3;
		uParam0->f_13[iVar0]->f_10 = iParam4;
		if (bParam5)
		{
			func_1262(uParam0->f_13[iVar0], 2);
		}
		else
		{
			func_1263(uParam0->f_13[iVar0], 2);
		}
	}
}

void func_1078(var uParam0, float fParam1)
{
	uParam0->f_146 = fParam1;
}

void func_1079(var uParam0, float fParam1)
{
	uParam0->f_147 = fParam1;
}

void func_1080(var uParam0)
{
	Var0 = { func_1264() };
	func_1265(uParam0, &Var0);
}

void func_1081(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_1082()
{
	return 370405588;
}

char* func_1083()
{
	return "LCMP_INT";
}

bool func_1084(var uParam0, char* sParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		uParam0->f_223++;
		if (uParam0->f_223 < 10)
		{
			return (func_1095(uParam0, 256) && !func_1095(uParam0, 4194304));
		}
		uParam0->f_223 = 0;
	}
	if (is_string_null_or_empty(sParam1))
	{
		return false;
	}
	func_1094(uParam0, sParam1);
	if (!func_1095(uParam0, 64))
	{
		if (!func_241(func_1104(uParam0)))
		{
			func_1093(uParam0, 64);
		}
		else
		{
			vVar0 = { func_1266(uParam0) };
			if (!func_241(vVar0))
			{
				func_1267(uParam0, vVar0);
			}
		}
		return false;
	}
	fVar3 = func_430(Global_35, func_1104(uParam0), 1);
	if (func_1095(uParam0, 128) || func_1095(uParam0, 256))
	{
		if ((fVar3 >= func_1268(uParam0) && !bParam2) || !_does_anim_scene_exist(uParam0->f_156))
		{
			if (uParam0->f_241)
			{
				func_1269();
				uParam0->f_241 = 0;
			}
			func_1270(uParam0);
			if (_does_anim_scene_exist(uParam0->f_156))
			{
				_delete_anim_scene(uParam0->f_156);
			}
			func_1271(uParam0);
			func_1092(uParam0, 128, 1);
			func_1092(uParam0, 256, 1);
			func_1092(uParam0, 4096, 1);
			func_1092(uParam0, 32768, 1);
			func_1092(uParam0, 16777216, 1);
		}
	}
	else if (fVar3 <= func_1272(uParam0) || bParam2)
	{
		if (!func_1095(uParam0, 128))
		{
			if (!_does_anim_scene_exist(uParam0->f_156))
			{
				if (func_1272(uParam0) >= func_1268(uParam0))
				{
				}
				Var4 = { func_1273(uParam0) };
				if (is_string_null_or_empty(&Var4))
				{
					func_1080(uParam0);
				}
				Var4 = { func_1273(uParam0) };
				iVar12 = 256;
				if (!func_1095(uParam0, 1))
				{
					iVar12 |= 2048;
				}
				uParam0->f_156 = _create_anim_scene(&(uParam0->f_152), iVar12, &Var4, false, true);
				func_1274(uParam0, 0, 0, 0, 0);
				func_1093(uParam0, 128);
			}
		}
	}
	if (func_1095(uParam0, 128))
	{
		if (func_1095(uParam0, 256) && !func_1095(uParam0, 4194304))
		{
			return true;
		}
		func_1102(uParam0);
		if (!uParam0->f_241)
		{
			if (func_1275())
			{
				func_1276(4096);
				uParam0->f_241 = 1;
			}
		}
		if (_is_anim_scene_loaded(uParam0->f_156, true, false))
		{
			bVar13 = true;
			Var15 = { func_1277(uParam0) };
			iVar14 = 0;
			while (iVar14 < 4)
			{
				if (!is_string_null_or_empty(uParam0->f_174[iVar14]))
				{
					if (!are_strings_equal(uParam0->f_174[iVar14], &Var15))
					{
						if (!uParam0->f_174[iVar14]->f_8)
						{
							uParam0->f_174[iVar14]->f_8 = 1;
							_0xdf7b5144e25cd3fe(uParam0->f_156, uParam0->f_174[iVar14]);
							bVar13 = false;
						}
						else if (!_0x23e33cb9f4a3f547(uParam0->f_156, uParam0->f_174[iVar14]))
						{
							bVar13 = false;
						}
					}
				}
				iVar14++;
			}
			if (!func_1095(uParam0, 8388608))
			{
				if (_0xa9016536015de29d(uParam0->f_156, &Var15))
				{
					if (!func_1095(uParam0, 16777216))
					{
						if ((!_0x0df57f86fe71dbe5(uParam0->f_156, &Var15) && !_0x23e33cb9f4a3f547(uParam0->f_156, &Var15)) && !_0x1f0e401031e20146(uParam0->f_156, &Var15))
						{
							_0xdf7b5144e25cd3fe(uParam0->f_156, &Var15);
						}
						func_1093(uParam0, 16777216);
					}
					if (!_0x23e33cb9f4a3f547(uParam0->f_156, &Var15))
					{
						bVar13 = false;
					}
				}
			}
			if (!bVar13)
			{
				return false;
			}
			func_1093(uParam0, 256);
			func_1092(uParam0, 4194304, 1);
			return true;
		}
	}
	return false;
}

bool func_1085(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_1086(var uParam0)
{
	if (func_1085(&(uParam0->f_3), 4))
	{
	}
	if (is_gameplay_hint_active())
	{
		if ((!func_1278(uParam0) || func_1085(&(uParam0->f_3), 4)) && !func_1085(&(uParam0->f_3), 256))
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
	if (func_1279(uParam0))
	{
		func_468();
	}
	if (!func_1085(&(uParam0->f_3), 16))
	{
		if (func_658(uParam0))
		{
			if (func_774(uParam0) < uParam0->f_4)
			{
				set_ped_max_move_blend_ratio(player_ped_id(), 1f);
			}
		}
	}
}

bool func_1087(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, float fParam5)
{
	if (bParam4 && is_ped_injured(iParam0))
	{
		return true;
	}
	if (func_1280(iParam0, iParam1, fParam2, bParam3, bParam4, fParam5))
	{
		return true;
	}
	return false;
}

bool func_1088(vector3 vParam0, var uParam3, float fParam4)
{
	if (!func_1281(uParam3->f_7, uParam3->f_8))
	{
		return false;
	}
	if (func_1085(&(uParam3->f_3), 1))
	{
		return false;
	}
	if (is_gameplay_hint_active())
	{
		return false;
	}
	fVar0 = func_430(Global_35, vParam0, 1);
	if (fVar0 > fParam4)
	{
		return false;
	}
	if (!func_1282(vParam0, uParam3))
	{
		return false;
	}
	if (!func_1085(&(uParam3->f_3), 2))
	{
		if (!is_sphere_visible(vParam0, 0.5f))
		{
			return false;
		}
		if (!func_1283(vParam0, uParam3))
		{
			return false;
		}
	}
	return true;
}

void func_1089(var uParam0, vector3 vParam1, float fParam4, int iParam5)
{
	if (_0xa24c1d341c6e0d53(1, 0, 0))
	{
		return;
	}
	set_gameplay_hint_fov(fParam4);
	fVar0 = func_1284(vParam1, 1);
	if (!func_1085(&(uParam0->f_3), 32))
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
	func_48(uParam0);
	func_811(&(uParam0->f_3), 1);
}

int func_1090(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5)
{
	return func_1285(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5);
}

void func_1091(var uParam0, int iParam1)
{
	uParam0->f_151 = (uParam0->f_151 || iParam1);
}

void func_1092(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
	if (((iParam1 == 512 && bParam2) && _does_anim_scene_exist(uParam0->f_156)) && _0xef324e9550a394d5(uParam0->f_156))
	{
		_0x8a8208ae92bf87a5(uParam0->f_156);
	}
}

void func_1093(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

void func_1094(var uParam0, char* sParam1)
{
	if (func_1095(uParam0, 8192))
	{
		return;
	}
	if (_does_string_exist_in_string(sParam1, "cutscene@"))
	{
		iVar0 = _0x94e8ca3dee952789(sParam1, "@");
		if (_0x94e8ca3dee952789(sParam1, "@") > 2)
		{
			MemCopy(&(uParam0->f_152), {func_1286("cutscene@", _0x5b4a8121a47d844d((iVar0 - 1)), 1, 63)}, 4);
		}
		_0x3c3c7b1b5ec08764();
	}
	else
	{
		MemCopy(&(uParam0->f_152), {func_1286("cutscene@", sParam1, 1, 63)}, 4);
	}
	func_1093(uParam0, 8192);
}

bool func_1095(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

int func_1096(var uParam0)
{
	return *uParam0;
}

void func_1097(var uParam0)
{
	if (((!_does_anim_scene_exist(uParam0->f_156) || !_is_anim_scene_started(uParam0->f_156, false)) || _0xef324e9550a394d5(uParam0->f_156)) || func_1095(uParam0, 512))
	{
		if (!func_1287(uParam0->f_213, 128))
		{
			func_1288();
		}
		return;
	}
	if ((func_1112(uParam0, Global_35, 4) || (_0x6f1f0b17109309da(uParam0->f_156, func_1289(Global_35)) && _0xb89fcff19dafff28(uParam0->f_156, func_1289(Global_35)))) || !_0x4b85b3cf91972222(uParam0->f_156))
	{
		if (!func_1287(uParam0->f_213, 128))
		{
			func_1288();
		}
		return;
	}
	bVar0 = true;
	iVar1 = _0xc17f69e1418cd11f(9);
	if (iVar1 != 0)
	{
		if (func_1290(iVar1))
		{
			if (func_1022(Global_43801, 0))
			{
				bVar0 = false;
			}
		}
	}
	bVar2 = false;
	if (func_1287(uParam0->f_213, 512))
	{
		bVar2 = true;
	}
	if (func_1291(bVar0, bVar2))
	{
		_delete_anim_scene_2(uParam0->f_156);
		func_1288();
	}
}

void func_1098(var uParam0, char* sParam1)
{
	if (func_1096(uParam0) == 2 && (func_1292(uParam0->f_212, 16384) || func_1095(uParam0, 268435456)))
	{
		Var0 = { func_1277(uParam0) };
		func_1293(uParam0, &Var0);
	}
	func_1294(uParam0, sParam1);
	if (func_1095(uParam0, 131072))
	{
		func_1295(uParam0, 0);
	}
	if (func_1296())
	{
		set_ped_reset_flag(Global_35, 265, true);
		func_1297();
	}
	if (func_1298())
	{
		func_1299(1);
	}
	func_1274(uParam0, 0, 0, 0, 0);
	StringCopy(&cVar8, sParam1, 32);
	func_1300(uParam0, cVar8);
	func_1107(1, 0);
	func_1270(uParam0);
	if (func_1301() && _0x6f1f0b17109309da(uParam0->f_156, func_1289(Global_35)))
	{
		clear_ped_tasks_immediately(Global_35, false, true);
	}
	if (func_1100(uParam0, 1))
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_148);
	}
	func_1302(uParam0);
	func_1303(uParam0, 1);
	start_anim_scene(uParam0->f_156);
	Global_43800 = uParam0->f_156;
	StringCopy(&Global_43802, sParam1, 24);
}

void func_1099(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	func_48(&(uParam0->f_1));
}

bool func_1100(var uParam0, int iParam1)
{
	return (uParam0->f_151 && iParam1) != 0;
}

void func_1101(var uParam0)
{
	Var0 = { func_1277(uParam0) };
	func_1265(uParam0, &Var0);
}

void func_1102(var uParam0)
{
	if ((!func_1095(uParam0, 32768) && _does_anim_scene_exist(uParam0->f_156)) && _is_anim_scene_metadata_loaded(uParam0->f_156, false))
	{
		func_1304(uParam0);
		func_1303(uParam0, 0);
		if (!_is_anim_scene_loading(uParam0->f_156, true))
		{
			load_anim_scene(uParam0->f_156);
		}
		func_1093(uParam0, 32768);
	}
}

void func_1103(var uParam0, bool bParam1)
{
	if (bParam1 || !func_658(uParam0))
	{
		func_48(uParam0);
	}
}

Vector3 func_1104(var uParam0)
{
	return uParam0->f_5;
}

bool func_1105(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_660(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

void func_1106(int iParam0)
{
	if (!network_is_in_session())
	{
		return;
	}
	if (network_is_in_mp_cutscene())
	{
		return;
	}
	set_entity_visible_in_cutscene(player_ped_id(), iParam0, 0, 256);
	network_set_in_mp_cutscene(true, true, 32, true);
}

void func_1107(bool bParam0, int iParam1)
{
	if (func_1007())
	{
		_0xdd1232b332cbb9e7(3, 1, 0);
	}
	if (bParam0)
	{
		if (func_1305())
		{
			func_754(1);
		}
	}
	_0x36559148b78853b3(0, iParam1, 0);
}

void func_1108(var uParam0)
{
	if (!func_1095(uParam0, 4))
	{
		if (func_1292(uParam0->f_212, 16384))
		{
			animpostfx_play("CamTransition01");
		}
		vVar0 = { func_1306(uParam0) };
		if (!func_1292(uParam0->f_212, 524288))
		{
			func_1307(&(uParam0->f_224));
		}
		func_1308(&(uParam0->f_212), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		func_1309(uParam0, 0f, 0f, 0f);
		func_1310(uParam0);
		func_1311(uParam0);
		func_819(uParam0, 0f, 0f, 0f, 0, 0);
		func_1312(uParam0);
		func_1093(uParam0, 4);
		func_1313(uParam0, 0);
		func_1314(&(Global_1946804->f_1497), Global_35, 1, 64, 1, 1, 1);
		if (_0x927b810e43e99932(&(uParam0->f_225)))
		{
			_0x0a5a4f1979abb40e(&(uParam0->f_225));
		}
	}
}

bool func_1109(var uParam0, bool bParam1)
{
	if (func_1095(uParam0, 262144))
	{
		return false;
	}
	if (!_does_anim_scene_exist(uParam0->f_156))
	{
		return false;
	}
	if (!_0x6f1f0b17109309da(uParam0->f_156, "ExportCamera"))
	{
		return false;
	}
	if ((_0xb89fcff19dafff28(uParam0->f_156, "ExportCamera") || (_0x005e6f28dd7ed58d(uParam0->f_156, "ExportCamera") && bParam1)) || _is_anim_scene_active(uParam0->f_156))
	{
		func_1093(uParam0, 262144);
		func_1313(uParam0, 1);
		return true;
	}
	return false;
}

int func_1110(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_156) || !_is_anim_scene_started(uParam0->f_156, false))
	{
		return -1;
	}
	return floor((_get_anim_scene_duration(uParam0->f_156) * 1000f));
}

int func_1111(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_156) || !_is_anim_scene_started(uParam0->f_156, false))
	{
		return -1;
	}
	return floor((_get_anim_scene_time(uParam0->f_156) * 1000f));
}

bool func_1112(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if ((does_entity_exist(&(uParam0->f_13[iVar0])) && &uParam0->f_13[iVar0] == iParam1) && func_1315(uParam0->f_13[iVar0], iParam2))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1113(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_156))
	{
		return true;
	}
	if (_0xf94692eb9dc15d74(uParam0->f_156, 0))
	{
		if (func_1095(uParam0, 524288))
		{
			_0x1b70811d3bf75db9(1, 1);
		}
		return true;
	}
	if (_is_anim_scene_active(uParam0->f_156) && func_1095(uParam0, 1048576))
	{
		return true;
	}
	return false;
}

void func_1114(var uParam0)
{
	if (((func_1095(uParam0, 1073741824) && !func_1095(uParam0, 524288)) && func_1095(uParam0, 512)) && is_screen_faded_out())
	{
		do_screen_fade_in(1000);
	}
}

void func_1115(var uParam0)
{
	if (!func_1095(uParam0, 536870912))
	{
		func_1313(uParam0, 1);
		func_1116(&(uParam0->f_213), uParam0->f_224);
		func_1269();
		func_1093(uParam0, 536870912);
	}
	if (func_1095(uParam0, 524288))
	{
		do_screen_fade_out(0);
	}
	func_1316(uParam0);
	func_1099(uParam0, 1);
	func_1271(uParam0);
	func_1317(uParam0);
	func_1318(uParam0);
	func_1319(uParam0, 4);
	func_1080(uParam0);
	func_1295(uParam0, 1);
	func_1270(uParam0);
	func_265(&(uParam0->f_1));
	if (_does_anim_scene_exist(uParam0->f_156) && check_ownership_of_anim_scene(uParam0->f_156))
	{
		_delete_anim_scene(uParam0->f_156);
	}
	func_1320(!func_1287(uParam0->f_213, 128));
	if (!func_1287(uParam0->f_213, 128))
	{
		func_1288();
	}
}

void func_1116(var uParam0, int iParam1)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	func_1321(2000);
	Global_16 = 0;
	func_1322();
	set_entity_invincible(Global_35, func_1287(*uParam0, 8));
	if (!func_1287(*uParam0, 1))
	{
		set_player_control(get_player_index(), true, 0, false);
	}
	_0xa0cefcea390aab9b(0);
	set_all_random_peds_flee(player_id(), false);
	set_everyone_ignore_player(player_id(), false);
	if (func_1287(*uParam0, 2) || func_1287(*uParam0, 4))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_1287(*uParam0, 16))
	{
		func_1323(1);
	}
	if (func_1287(*uParam0, 32))
	{
		func_1324(Global_35, -383172193, 0, 1742327865, 0, 1, 0, 0, 1, 0);
		func_1325(-1623728698, 0);
	}
	func_1314(&(Global_1946804->f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489->f_16 & 4194304 != 0)
	{
		Global_1359489->f_16 = (Global_1359489->f_16 - Global_1359489->f_16 & 4194304);
	}
	*uParam0 = 0;
}

void func_1117()
{
	Global_1935630->f_52 = 1;
}

int func_1118(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12)
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
	while (iVar0 < 48)
	{
		if (func_1043(iVar0, 2))
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
		func_1044(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, bParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_1119(int iParam0, bool bParam1)
{
	if (!func_301(iParam0))
	{
		return;
	}
	iVar0 = func_594(iParam0);
	_uiprompt_set_enabled((*Global_1945938)[iVar0]->f_3, !bParam1);
}

void func_1120(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_301(iParam0))
	{
		return;
	}
	iVar0 = func_594(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_1121(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2 && !func_301(iParam0))
	{
		return;
	}
	iVar0 = func_594(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_0xf4a5c4509bf923b1((*Global_1945938)[iVar0]->f_3, iParam1);
}

int func_1122(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 4;
		case 2:
			return 8;
		case 3:
			return 16;
		case 4:
			return 32;
		case 5:
			return 64;
		case 6:
			return 128;
		case 7:
			return 256;
		case 10:
			return 32768;
		case 11:
			return 65536;
		case 12:
			return 131072;
		case 13:
			return 262144;
	}
	return 0;
}

bool func_1123(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	iVar17 = 0;
	if (!func_1326("ALL", &iVar14, &iVar15, iParam1, 0))
	{
		return false;
	}
	iVar16 = 0;
	while (iVar16 < iVar15)
	{
		if (func_1327(&Var0, iVar16, iVar14, iVar15))
		{
			if (Var0.f_4 != 0)
			{
				if (func_1125(Var0.f_4, iParam0))
				{
					iVar17 = 1;
				}
				else
				{
					iVar16++;
				}
				func_1328(iVar14);
				return iVar17;
			}
		}
	}
}

int func_1124(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (_0x9a100f1cf4546629(iParam0) || _0xc346a546612c49a9(iParam0))
	{
		iVar0 = func_1329(iParam0);
		if (!func_1153(iVar0, 0))
		{
			iVar0 = func_1330(iParam0);
		}
	}
	else
	{
		iVar0 = func_1330(iParam0);
	}
	return iVar0;
}

int func_1125(int iParam0, int iParam1)
{
	if (iParam1 == 101)
	{
		return func_1331(iParam0);
	}
	if (func_1332(iParam0, iParam1))
	{
		return 0;
	}
	return func_1333(iParam0, iParam1);
}

void func_1126(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_1127(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_1043(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_1128(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_1129(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

bool func_1130(int iParam0, bool bParam1)
{
	if (bParam1 && !func_301(iParam0))
	{
		return false;
	}
	iVar0 = func_594(iParam0);
	if (!_uiprompt_has_hold_mode((*Global_1945938)[iVar0]->f_3))
	{
		return is_control_pressed(2, (*Global_1945938)[iVar0]->f_4);
	}
	return _uiprompt_is_hold_mode_running((*Global_1945938)[iVar0]->f_3);
}

float func_1131(int iParam0, bool bParam1)
{
	if (bParam1 && !func_301(iParam0))
	{
		return 0f;
	}
	iVar0 = func_594(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_get_mash_mode_progress((*Global_1945938)[iVar0]->f_3);
	}
	return _0x81801291806dbc50((*Global_1945938)[iVar0]->f_3);
}

bool func_1132(int iParam0, int iParam1)
{
	if (!func_599(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_3[iParam0]->f_7 && iParam1) != 0;
}

void func_1133()
{
	func_1334(func_63(Local_2160.f_138));
	iVar0 = func_245(Local_2160.f_138);
	_0x94fcadcf9f0c368e(iVar0);
	iVar7 = func_1067(11);
	if (func_1153(iVar7, 0))
	{
		Var1 = iVar7;
		Var1.f_3 = 4;
		Var1.f_1 = 1f;
		Var1.f_4 = 1;
		Var1.f_5 = 1;
		_0xaf3a84c7de6a1dc5(iVar0, &Var1);
	}
}

Vector3 func_1134(vector3 vParam0, float fParam3)
{
	vVar0 = { get_random_float_in_range(-1f, 1f), get_random_float_in_range(-1f, 1f), get_random_float_in_range(-1f, 1f) };
	return vParam0 + func_1335(vVar0, get_random_float_in_range(0f, fParam3));
}

Vector3 func_1135(vector3 vParam0, float fParam3, bool bParam4)
{
	if (bParam4)
	{
		fVar0 = get_random_float_in_range(-1f, 1f);
	}
	else
	{
		fVar0 = 0f;
	}
	vVar1 = { get_random_float_in_range(-1f, 1f), get_random_float_in_range(-1f, 1f), fVar0 };
	return vParam0 + func_1335(vVar1, fParam3);
}

bool func_1136(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_1137(int iParam0)
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

void func_1138(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_1336(iParam0, iParam1))
		{
			if (func_1337(iParam0, iParam1))
			{
				if (func_1338(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_1339(iParam0);
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

void func_1139(int iParam0, int iParam1, bool bParam2)
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

void func_1140(int iParam0, bool bParam1)
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

void func_1141(int iParam0, int iParam1)
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

Vector3 func_1142(int iParam0)
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
			vVar0.f_2 = func_1340(vVar3.z, vVar6.z, 0.75f);
		}
	}
	if (func_241(vVar0))
	{
	}
	return vVar0;
}

int func_1143(bool bParam0, vector3 vParam1, vector3 vParam4, int iParam7)
{
	bParam0->f_4 = 0;
	switch (*bParam0)
	{
		case 0:
			func_1006(bParam0);
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

struct<4> func_1144(bool bParam0)
{
	return func_871(1328661203, func_1341(), -1591664384, bParam0);
}

int func_1145(int iParam0)
{
	if (!func_1153(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_1146(bool bParam0)
{
	iVar0 = func_943(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_871(923904168, func_1144(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_871(923904168, func_1144(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_871(923904168, func_1144(bParam0), -740156546, 0);
}

bool func_1147(int iParam0, bool bParam1)
{
	if (func_944(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_1157(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_1148(bool bParam0)
{
	iVar0 = func_943(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_871(271701509, func_1144(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_871(271701509, func_1144(bParam0), 12999093, 0);
}

bool func_1149(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_944(iParam0);
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

bool func_1150(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_943(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_1151(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_1153(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_871(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_943(bParam6), &Var0, 0);
	return uVar4;
}

bool func_1152(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_943(0);
	*uParam1 = { func_871(iParam0, func_1146(0), iParam3, 0) };
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

bool func_1153(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_1154(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

bool func_1155(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_1156(int iParam0)
{
	switch (iParam0)
	{
		case 22:
		case 25:
		case 63:
			return true;
	}
	return false;
}

bool func_1157(int iParam0)
{
	if (!func_1342(iParam0))
	{
		return false;
	}
	return func_1343(iParam0);
}

bool func_1158()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

void func_1159(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < func_1344(iParam0))
	{
		iVar1 = func_1160(iParam0, iVar0);
		if (iVar1 != 0 && _map_is_discovery_active(iVar1))
		{
			_map_discovery_set_enabled(iVar1);
		}
		iVar0++;
	}
}

int func_1160(int iParam0, int iParam1)
{
	if (iParam0 == 2)
	{
		switch (iParam1)
		{
			case 1:
				return 1028223611;
			case 2:
				return 730222325;
			case 3:
				return -597970767;
		}
	}
	return 0;
}

int func_1161()
{
	iVar0 = func_1345();
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

int func_1162(int iParam0)
{
	if (func_1() != -1)
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
	fVar1 = func_1056(absf(fVar1) < 1f, func_1056(fVar1 < 0f, -1f, 1f), fVar1);
	return ceil(fVar1);
}

bool func_1163()
{
	if (func_1() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

int func_1164(int iParam0)
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

int func_1165()
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

void func_1166(int iParam0, bool bParam1, int iParam2)
{
	func_1346((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_1347(iParam0);
}

void func_1167(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), false);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), true);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_1348(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_1168(bool bParam0)
{
	bVar3 = false;
	if (func_1349(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1350(iVar5, &iVar2, &iVar0))
			{
				if (!func_1153(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1351(iVar2);
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
							if (func_1145(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_1161() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_1161() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_1352();
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

struct<2> func_1169(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

char* func_1170(int iParam0)
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

var func_1171(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_1353(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_1172(int iParam0, int iParam1)
{
	if (!func_1354(iParam0))
	{
		return 0;
	}
	if (!func_1158())
	{
		return 0;
	}
	if (!func_1355(iParam0, &iVar0, &uVar1))
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

bool func_1173()
{
	if (func_1356())
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

void func_1174(var uParam0, var uParam1)
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

bool func_1175(bool bParam0, int iParam1, int iParam2)
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

int func_1176(int iParam0)
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

void func_1177(int iParam0)
{
	if (Global_1935630->f_38 == 0)
	{
		func_199(iParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1935630->f_34[iVar0])))
				{
					func_143(iParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

bool func_1178(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_1179(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_1180(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_1181(int iParam0, int iParam1)
{
	if (!func_934(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_15614[iParam0] && iParam1) != 0;
}

void func_1182(int iParam0)
{
	func_1357(func_937(iParam0));
}

bool func_1183(int iParam0)
{
	if (func_1358(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

bool func_1184()
{
	return true;
}

bool func_1185(int iParam0)
{
	if (func_1359())
	{
		if (Global_1914319->f_16855 == iParam0)
		{
			return true;
		}
	}
	return false;
}

int func_1186(int iParam0)
{
	iVar0 = iParam0;
	while (iVar0 < Global_1058888->f_40501)
	{
		if (iVar0 + 1 < 32)
		{
			*Global_1058888->f_40501.f_1[iVar0] = { *(Global_1058888->f_40501.f_1[iVar0 + 1]) };
		}
		iVar0++;
	}
	Var1 = -1;
	if (Global_1058888->f_40501 < 32)
	{
		*Global_1058888->f_40501.f_1[Global_1058888->f_40501] = { Var1 };
	}
	Global_1058888->f_40501 = (Global_1058888->f_40501 - 1);
	if (Global_1058888->f_40501 < 0)
	{
		Global_1058888->f_40501 = 0;
	}
	return 1;
}

int func_1187(int iParam0)
{
	iVar0 = (Global_1058888->f_40501 - 1);
	Var1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1058888->f_40501.f_1[iVar0 + 1]) = { *Global_1058888->f_40501.f_1[iVar0] };
		}
		iVar0 = (iVar0 - 1);
	}
	*Global_1058888->f_40501.f_1[iParam0] = { Var1 };
	Global_1058888->f_40501++;
	if (Global_1058888->f_40501 > 32)
	{
		Global_1058888->f_40501 = 32;
	}
	return 1;
}

void func_1188(int iParam0, int iParam1)
{
	Var0 = { *Global_1898164->f_1[iParam0] };
	*Global_1898164->f_1[iParam0] = { *Global_1898164->f_1[iParam1] };
	*Global_1898164->f_1[iParam1] = { Var0 };
}

bool func_1189(int iParam0)
{
	iParam0 = func_949(iParam0);
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

void func_1190(int iParam0)
{
	if (is_player_dead(player_id()))
	{
		return;
	}
	iVar0 = func_1227(iParam0);
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
	if (func_1360(iParam0, 64))
	{
		func_1191(iParam0);
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
	bVar3 = func_1157(42);
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
				func_1361(&((*Global_1900383)[iParam0]->f_27));
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
		func_1191(iParam0);
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
		if (func_1362(1) < 1)
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
		func_1363(&((*Global_1900383)[iParam0]->f_26), bVar6);
	}
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_1360(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = is_ped_in_writhe(iVar0);
	bVar10 = false;
	iVar11 = func_1364(iParam0);
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
	fVar15 = func_1365(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_1366(iParam0))
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
		func_1367((*Global_1900383)[iParam0]->f_26);
		func_1368((*Global_1900383)[iParam0]->f_26);
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
	if (func_521(iVar0) && !bVar9)
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
	iVar21 = func_1362(iParam0);
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

void func_1191(int iParam0)
{
	iParam0 = func_949(iParam0);
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

float func_1192(vector3 vParam0, vector3 vParam3)
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

bool func_1193(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

var func_1194(int iParam0)
{
	return iParam0->f_25;
}

bool func_1195(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_1369(iParam0, iParam1))
		{
			if (!func_368(iParam1->f_10, 1))
			{
				set_ped_config_flag(iParam0, 130, false);
				set_ped_config_flag(iParam0, 315, false);
				set_ped_config_flag(iParam0, 297, false);
				set_ped_config_flag(iParam0, 178, true);
				func_107(uParam2, 0, 0, 1, 0);
				func_143(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_368(iParam1->f_10, 1))
		{
			func_1370(uParam2);
			set_ped_config_flag(iParam0, 130, true);
			set_ped_config_flag(iParam0, 315, true);
			set_ped_config_flag(iParam0, 297, true);
			set_ped_config_flag(iParam0, 178, false);
			func_199(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_1196(int* iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!is_entity_dead(*iParam0))
	{
		_0xe98d55c5983f2509(*iParam0);
		bVar4 = func_368(iParam4, 32);
		func_1212(iParam1, uParam2, 0);
		iVar5 = func_1371(*iParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			set_ped_config_flag(*iParam0, 178, false);
			return true;
		}
		func_107(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_368(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_368(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_368(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_368(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_368(iParam4, 8388608) || func_368(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_368(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_368(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_809(iParam1, 4))
		{
			iVar6 |= 1024;
			_0xbb1e41dd3d3c6250(*iParam0, "IloGeneralEvents", 2);
		}
		if (!func_809(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_368(iParam4, 67108864))
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
				iParam6 = func_1372(iParam0);
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
			if (func_368(iParam4, 268435456))
			{
				iVar8 = func_1373(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_1374(iParam1, (*uParam2)[iVar8]);
				}
			}
			if (func_809(iParam1, 23))
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
			if (func_368(iParam4, 2) || func_368(iParam4, 16))
			{
				func_1197(*iParam0, 1, 1);
			}
			else
			{
				func_1197(*iParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_1197(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !is_entity_dead(iParam0))
	{
		set_ped_config_flag(iParam0, 317, bParam1);
	}
}

bool func_1198(int* iParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_1375(*iParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_1199(int* iParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_1376(*iParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_368(iParam10, 32), 1, 0);
			set_bit(iParam2, 1);
		}
	}
	else if (is_bit_set(*iParam2, 1))
	{
		clear_bit(iParam2, 1);
	}
}

void func_1200(int iParam0)
{
	if (func_368(iParam0, 4))
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
	if (func_368(iParam0, 16384))
	{
		disable_control_action(0, -485697785, false);
	}
	if (func_368(iParam0, 8))
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
	}
}

bool func_1201(int* iParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	iVar1 = func_1028(1);
	bVar2 = is_bit_set(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = is_ped_on_foot(Global_35);
	bVar10 = is_ped_injured(*iParam0);
	bVar11 = (((_is_ped_carrying(Global_35) || func_548(Global_35)) || func_546(Global_35)) || func_544(Global_35));
	fVar12 = -1f;
	if (func_658(&(iParam1->f_13)))
	{
		fVar12 = func_375(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((*uParam4)[iVar0]->f_8 != iParam12)
		{
			iParam12 = (*uParam4)[iVar0]->f_8;
		}
		bVar4 = func_301((*uParam4)[iVar0]->f_6);
		func_1377(*iParam0, (*uParam4)[iVar0], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (is_bit_set(uParam4[iVar0], 20))
		{
			bVar3 = true;
		}
		if (func_1378(*iParam0, iParam1, (*uParam4)[iVar0], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_1379(iParam12, (*uParam4)[iVar0]->f_6))
				{
					if (!bVar7)
					{
						func_107(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_1380(uParam4, 0, 0);
					}
					if (is_bit_set(uParam4[iVar0], 11))
					{
						func_1212(iParam1, uParam4, is_bit_set(*iParam1, 6));
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
					if (func_1381(iParam1, fParam6, iParam1->f_9))
					{
						func_48(&(iParam1->f_18));
						if (bVar6)
						{
							func_1380(uParam4, 0, 0);
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
		func_1382(iParam1, fParam2);
	}
	return bVar5;
}

void func_1202(var uParam0)
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

void func_1203(int* iParam0, var uParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_1383((*uParam1)[iVar0]))
		{
			if (is_bit_set(uParam1[iVar0], 20))
			{
				func_1382(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_1204(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!is_control_pressed(0, -124244224))
		{
			if (func_1384(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_1385(iParam1, 0);
				func_1212(iParam1, uParam2, func_809(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_1205(int* iParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_48(&(iParam1->f_18));
			return false;
		}
		else if (func_658(&(iParam1->f_18)))
		{
			func_265(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_658(&(iParam1->f_18)))
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
	return func_223(&(iParam1->f_18), fParam2);
	return true;
}

void func_1206(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_1377(iParam0, (*uParam2)[iVar0], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_1207(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

int func_1208(int* iParam0)
{
	if (func_809(iParam0, 0))
	{
		if (func_1386(iParam0))
		{
			func_1207(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

void func_1209(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_1210(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_1387(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_1388(iParam0))
	{
		return false;
	}
	if (func_1389(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_1390(iParam0, 1)) || func_878(32768))
	{
		if (!func_1390(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_1391())
	{
		return false;
	}
	return true;
}

void func_1211(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_1212(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_302(&((*uParam1)[iParam0->f_3]->f_6), 1, 1);
		if (bParam2)
		{
			func_76(iParam0, 0);
		}
	}
}

bool func_1213(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_1214(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < iVar2540)
	{
		if (iParam0 == &iLocal_2527[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_1215(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
		case 3:
			return 8;
		default:
			break;
	}
	return 0;
}

void func_1216(int iParam0, int iParam1, bool bParam2)
{
	func_161(Local_2160.f_137, &iVar4, &iVar5, 0, 0);
	iVar6 = (810 + *iParam1);
	iVar8 = func_63(iVar6);
	if (iVar4 == -1 || iVar5 == -1)
	{
		return;
	}
	add_shocking_event_at_position(-23350179, func_429(*iParam1), -1f, 100f, 100f, -1f, (30f + 5f), -1, -1);
	if (is_entity_dead(iVar8))
	{
		return;
	}
	iVar9 = (iVar5 - iVar4);
	iVar3 = iVar4;
	while (iVar3 <= iVar5)
	{
		if (!func_155(iVar3) || iVar3 == -1)
		{
		}
		else
		{
			iVar7 = func_63(iVar3);
			if (func_351(iVar7, iParam0))
			{
			}
			else
			{
				if ((func_239(iVar3, 0) && !is_entity_dead(iVar7)) && is_ped_human(iVar7))
				{
					func_242(iVar3, 0, 1, 0, 1, 1);
					func_243(iVar7, 1, 1);
					if ((bParam2 && func_213(iVar7, &(iLocal_75[2]), 1, 0)) && func_251(iVar7, 0, 1))
					{
						set_ped_config_flag(iVar7, 168, true);
						func_1392(iVar3, -1);
						clear_ped_tasks_immediately(iVar7, false, true);
						_0xeeed8fafec331a70(iVar7, func_428(*iParam1), 1);
						open_sequence_task(&uLocal_735);
						_task_smart_flee_style_coord(0, func_428(*iParam1), 4, 1, 30f, 8000, 0);
						task_turn_ped_to_face_coord(0, func_429(*iParam1), 0);
						task_stand_still(0, -1);
						close_sequence_task(iVar730);
						task_perform_sequence(iVar7, iVar730);
						clear_sequence_task(&uLocal_735);
					}
					else
					{
						fVar0 = get_random_float_in_range(0f, 1f);
						fVar2 = func_358(iVar7, iVar8, 1, 1);
						if (func_374(iVar7))
						{
							fVar1 = 0f;
						}
						else if (fVar2 < 35f)
						{
							fVar1 = 1f;
						}
						else if (fVar2 < 65f)
						{
							fVar1 = 0.5f;
						}
						else if (fVar2 < 120f)
						{
							fVar1 = 0.1f;
						}
						else
						{
							fVar1 = 0f;
						}
						if (fVar0 < fVar1 && func_251(iVar7, 0, 1))
						{
							set_ped_config_flag(iVar7, 168, true);
							func_1392(iVar3, -1);
							if (is_ped_using_any_scenario(iVar7))
							{
								_0xe7fa07624574b79a(iVar7, iVar8, 1, 1, 10f, 1, 0, 0, 0);
							}
							else
							{
								_0xeeed8fafec331a70(iVar7, func_428(*iParam1), 1);
								open_sequence_task(&uLocal_735);
								task_turn_ped_to_face_coord(0, func_429(*iParam1), 0);
								task_stand_still(0, -1);
								close_sequence_task(iVar730);
								task_perform_sequence(iVar7, iVar730);
								clear_sequence_task(&uLocal_735);
							}
							_0xaab050da48b57978(iVar7, func_1393(), iVar7, -1, 4);
						}
					}
				}
				if (iVar2538 >= 15)
				{
				}
				else
				{
					iVar10++;
					if (iVar10 > iVar9)
					{
					}
					else
					{
						iVar3++;
					}
				}
			}
		}
	}
}

void func_1217(int iParam0, int iParam1)
{
	func_161(Local_2160.f_137, &iVar3, &iVar4, 0, 0);
	iVar5 = 810;
	iVar6 = func_63(iVar5);
	if (is_entity_dead(iVar6))
	{
		return;
	}
	if (iVar3 == -1 || iVar4 == -1)
	{
		return;
	}
	iVar24 = (iVar4 - iVar3);
	iVar2 = iVar3;
	while (iVar2 <= iVar4)
	{
		if (!func_155(iVar2) || iVar2 == -1)
		{
		}
		else
		{
			iVar27 = func_63(iVar2);
			if (func_351(iVar27, iParam1))
			{
			}
			else
			{
				iVar26 = -1;
				if ((func_239(iVar2, 0) && !is_entity_dead(iVar27)) && is_ped_human(iVar27))
				{
					func_242(iVar2, 0, 1, 0, 1, 1);
					func_243(iVar27, 1, 1);
					fVar23 = func_358(iVar27, iVar6, 1, 1);
					fVar0 = get_random_float_in_range(0f, 1f);
					if (func_374(iVar27))
					{
						fVar1 = 0f;
					}
					else if (fVar23 < 35f)
					{
						fVar1 = 1f;
					}
					else if (fVar23 < 65f)
					{
						fVar1 = 0.75f;
					}
					else if (fVar23 < 120f)
					{
						fVar1 = 0.3f;
					}
					else if (fVar23 < 200f)
					{
						fVar1 = 0.1f;
					}
					else
					{
						fVar1 = 0f;
					}
					if (iVar2539 >= 3)
					{
						if (fVar1 >= 0.9f)
						{
							iVar26 = func_1394(&fVar7);
						}
						else
						{
							fVar1 = -1f;
						}
					}
					if (fVar0 <= fVar1 && !is_entity_dead(iVar27))
					{
						func_1392(iVar2, iVar26);
						if (iVar26 >= 0)
						{
							fVar7[iVar26] = fVar23;
						}
						else
						{
							fVar7[iVar2539] = fVar23;
						}
					}
				}
				iVar25++;
				if (iVar25 > iVar24)
				{
				}
				else
				{
					iVar2++;
				}
				if (iLocal_98 == 2 && !func_1395(813))
				{
					iVar26 = func_1394(&fVar7);
					func_1392(813, iVar26);
					func_466(func_681(3), 0);
				}
				iVar28 = 0;
				while (iVar28 < iVar2539)
				{
					iVar27 = func_63(&(iLocal_2527[iVar28]));
					_0x62fdad5e01d2dd47(iVar27, get_entity_coords(iParam0, true, false), 2, 0);
					clear_ped_tasks(iVar27, 1, 0);
					open_sequence_task(&uLocal_735);
					task_turn_ped_to_face_entity(0, iParam0, -1, -1082130432, -1082130432, -1082130432);
					close_sequence_task(iVar731);
					_task_perform_sequence_2(iVar27, iVar731, 0f, 2.5f);
					clear_sequence_task(&uLocal_735);
					_0xaab050da48b57978(iVar27, func_1393(), iParam0, -1, 4);
					set_ped_config_flag(iVar27, 178, false);
					set_ped_config_flag(iVar27, 130, true);
					func_1045(&iVar27, 1);
					iVar28++;
				}
			}
		}
	}
}

int func_1218(int iParam0)
{
	switch (iParam0)
	{
		case 810:
			return 0;
		case 811:
			return 1;
		case 812:
			return 2;
		case 813:
			return 3;
		default:
			break;
	}
	return -1;
}

Vector3 func_1219(int iParam0)
{
	if (iParam0 == 0)
	{
		return -1420.47f, -237.82f, 99.06f;
	}
	if (iParam0 == 1)
	{
		return -1419.73f, -237.87f, 99.02f;
	}
	if (iParam0 == 2)
	{
		return -1419.2f, -237.95f, 98.99f;
	}
	if (iParam0 == 3)
	{
		return -1418.34f, -238.03f, 98.95f;
	}
	return 0f, 0f, 0f;
}

bool func_1220(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (bParam3 && is_entity_dead(iParam0))
	{
		return false;
	}
	if (!bParam5 && !is_ped_human(iParam0))
	{
		return false;
	}
	if (is_ped_a_player(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		if (is_entity_a_mission_entity(iParam0))
		{
			return false;
		}
	}
	if (bParam3 && func_1396(iParam0))
	{
		return false;
	}
	if (bParam4)
	{
		if (is_ped_on_mount(iParam0))
		{
			return false;
		}
	}
	if (bParam2)
	{
		if (func_352(iParam0, 0) != -1)
		{
			return false;
		}
	}
	return true;
}

bool func_1221(int iParam0)
{
	if (func_961(iParam0))
	{
		return false;
	}
	return true;
}

bool func_1222(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!is_entity_dead(uParam1[iVar0]))
		{
			if (func_377(uParam1[iVar0], iParam0, 1) < 225f)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1223(int iParam0)
{
	return iParam0 != 0;
}

var func_1224(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_1225(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return _create_var_string(2, func_1397(sParam1));
}

void func_1226(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 || iParam0);
}

int func_1227(int iParam0)
{
	iParam0 = func_949(iParam0);
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

int func_1228(var uParam0, var uParam1)
{
	uParam1->f_10 = func_949(uParam1->f_10);
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
		if (func_241(uParam1->f_6))
		{
		}
	}
	bVar0 = func_1158();
	if (*uParam1)
	{
		if (bVar0 && !func_206((*Global_1835011)[4]->f_1, 1))
		{
			if (func_1398(5))
			{
				func_1399(5);
				func_1400(5);
				func_1401(0);
				func_1402(0);
			}
		}
	}
	if (func_1403(Global_36) == 8)
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_206((*Global_1835011)[37]->f_1, 1)) && !func_206((*Global_1835011)[43]->f_1, 1))
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_206((*Global_1835011)[43]->f_1, 1)) && !func_206((*Global_1835011)[44]->f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_1227(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_1189(iVar1))
	{
		bVar3 = true;
		if (func_1404(iVar1))
		{
			bVar4 = true;
		}
		if (func_1405(iVar1))
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
				func_1406(uParam1->f_10);
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
			if (!func_1398(0) && func_1398(1))
			{
				func_1407(1, 0);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_1408())
			{
				func_1409();
			}
			func_1401(0);
			func_1402(0);
			func_1410(uParam1->f_6);
		}
	}
	if (!func_1189(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_1411(uParam1->f_10) == 0 || func_1412(uParam1->f_10) == 0) || func_1413(uParam1->f_10) == 0)
			{
				func_1414(uParam1->f_10);
			}
			func_1415(uParam1->f_10);
			func_1416(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*uParam0 = 0;
			return 0;
		}
		*uParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_1227(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_1189(iVar1))
	{
		bVar3 = true;
		if (func_1404(iVar1))
		{
			bVar4 = true;
		}
		if (func_1405(iVar1))
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
			if (!func_241(uParam1->f_6))
			{
				set_entity_coords(iVar2, uParam1->f_6, false, true, true, true);
				set_entity_heading(iVar2, uParam1->f_9);
				_0x9587913b9e772d29(iVar2, 0);
			}
		}
	}
	if (func_1417(uParam1->f_10))
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
			Var8 = { func_1418(uParam1->f_10) };
			Var10 = { func_1419() };
			func_1420(iVar2, &Var8, &Var10, 0);
			_set_ped_as_saddle_horse_for_player(iVar6, iVar2);
			set_ped_config_flag(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*uParam0 = 2;
		return iVar2;
	}
	if (!func_622(uParam1->f_10))
	{
		set_entity_as_mission_entity(iVar2, true, true);
		func_1421(uParam1->f_10);
		if (uParam1->f_2 && !func_241(uParam1->f_6))
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
	func_620(uParam1->f_10);
	if (func_622(uParam1->f_10))
	{
		iVar16 = func_621(uParam1->f_10);
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

bool func_1229(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (((_0x3ee1f7a8c32f24e1(get_player_index(), &iVar0, bParam6, bParam7) && (!bParam5 || !is_entity_dead(iVar0))) && is_entity_a_ped(iVar0)) && get_ped_index_from_entity_index(iVar0) == *uParam0)
	{
		_0xa3db37edf9a74635(get_player_index(), *uParam0, 3, 2, iParam1);
		_0xa3db37edf9a74635(get_player_index(), *uParam0, 4, 2, iParam2);
		_0xa3db37edf9a74635(get_player_index(), *uParam0, 7, 2, iParam3);
		return true;
	}
	if (bParam4)
	{
		_0xa3db37edf9a74635(get_player_index(), *uParam0, 3, 2, 0);
		_0xa3db37edf9a74635(get_player_index(), *uParam0, 4, 2, 0);
		_0xa3db37edf9a74635(get_player_index(), *uParam0, 7, 2, 0);
	}
	return false;
}

void func_1230()
{
	_0x93624b36e8851b42(get_player_index());
}

void func_1231(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_1171(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_1232(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_1422())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_1171(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_1423(iVar0);
			func_1424(iVar0, 0, 0);
		}
		func_1171(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		_money_increment_cash_balance(iVar1, iParam4);
		func_881(func_1169(1644987397), iVar1);
	}
}

bool func_1233(int iParam0)
{
	if (-1829635046 == func_1425(81053684))
	{
		if (func_1235(iParam0))
		{
			return true;
		}
	}
	else if (func_1426(-525676072, iParam0))
	{
		if (func_1235(iParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_1234()
{
	return Global_1946804->f_2792;
}

bool func_1235(int iParam0)
{
	if (func_1426(81053684, iParam0))
	{
		return true;
	}
	if (func_1426(-525676072, iParam0))
	{
		return true;
	}
	return false;
}

bool func_1236(int iParam0)
{
	if (func_1427())
	{
		return false;
	}
	if (!func_1153(iParam0, 0))
	{
		return false;
	}
	if (!func_1428(iParam0, 1, 0))
	{
		_0xbfff81e12a745a5f();
		return false;
	}
	return true;
}

int func_1237(int iParam0, int iParam1)
{
	bVar3 = func_1429(iParam0);
	if (func_1430(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_1233(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_1431();
			}
			else
			{
				iVar0 = func_1432();
			}
		}
		else if (func_501(iParam1, 1))
		{
			iVar0 = 0;
		}
		else if (bVar1)
		{
			iVar0 = func_1433();
		}
		else
		{
			iVar0 = func_1434();
		}
	}
	else if (func_1235(&iVar2))
	{
		if (func_1430(iVar2, -1303648999))
		{
			iVar0 = func_1431();
		}
		else
		{
			iVar0 = func_1432();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_1433();
	}
	else
	{
		iVar0 = func_1434();
	}
	if (iVar0 != 0)
	{
		Global_1946804->f_2791 = get_game_timer();
		_task_item_interaction(Global_35, iParam0, iVar0, 1, iParam1, -1082130432);
		return 1;
	}
	return 0;
}

void func_1238(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = get_game_timer();
	func_1435(iParam0, iParam1, bParam2);
}

bool func_1239()
{
	return false;
}

bool func_1240(int iParam0, var uParam1)
{
	if (!func_1436(iParam0))
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

void func_1241(char* sParam0, bool bParam1, bool bParam2)
{
	stop_scripted_conversation(sParam0, bParam1, bParam2);
}

void func_1242(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, var uParam6, var uParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, bool bParam19, int iParam20, int iParam21, bool bParam22)
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
		task_follow_and_converse_with_ped(iParam0, iParam1, iParam4, iParam5, uParam6, uParam7, iParam9, iParam10, iParam11, iParam12, iParam13);
	}
	if (bParam19)
	{
		_set_ped_crouch_movement(iParam0, false, 0, false);
	}
	if (bParam22)
	{
		func_1437(iParam0, iParam1, iParam18);
	}
}

bool func_1243(int iParam0)
{
	if (!_does_volume_exist(iParam0->f_39))
	{
		return true;
	}
	if (func_279(iParam0->f_40, 1, 1) < iParam0->f_42)
	{
		return false;
	}
	if (func_213(Global_35, iParam0->f_39, 1, 0))
	{
		return true;
	}
	if (!func_213(iParam0->f_40, iParam0->f_39, 1, 0))
	{
		return false;
	}
	return true;
}

void func_1244(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
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
		func_1438(bParam4, bParam5, bParam6, bParam7, bParam3, bParam9, bParam10);
		if (bParam2)
		{
			set_ped_reset_flag(iParam0, 188, true);
		}
	}
}

bool func_1245(int iParam0)
{
	if ((is_ped_injured(iParam0) || is_ped_fatally_injured(iParam0)) || get_entity_health(iParam0) < get_entity_max_health(iParam0, false))
	{
		return true;
	}
	return false;
}

char* func_1246()
{
	return "unnamed";
}

void func_1247(int iParam0, int iParam1)
{
	if (!func_934(iParam0))
	{
	}
	else
	{
		Global_20710.f_2246[iParam0] = (Global_20710.f_2246[iParam0] || iParam1);
	}
}

int func_1248(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			iVar0 = 20;
			break;
		case 4:
			iVar0 = 21;
			break;
		case 0:
			iVar0 = 25;
			break;
		case 6:
			iVar0 = 23;
			break;
		case 7:
			iVar0 = 26;
			break;
		case 2:
			iVar0 = 33;
			break;
		case 1:
			iVar0 = 30;
			break;
		case 8:
			iVar0 = 31;
			break;
		case 9:
			iVar0 = 37;
			break;
		case 10:
			iVar0 = 32;
			break;
		case 17:
			iVar0 = 35;
			break;
		case 5:
			iVar0 = 21;
			break;
		case 33:
			iVar0 = 27;
			break;
		case 18:
			iVar0 = 36;
			break;
		case 19:
			iVar0 = 36;
			break;
		case 22:
			iVar0 = 40;
			break;
		case 20:
			iVar0 = 43;
			break;
		case 15:
			iVar0 = 15;
			break;
		case 12:
			iVar0 = 41;
			break;
		case 13:
			iVar0 = 42;
			break;
		case 14:
			iVar0 = 42;
			break;
		case 21:
			iVar0 = 44;
			break;
		case 11:
			iVar0 = func_1439(Global_1914319->f_17378.f_1009);
			break;
	}
	return iVar0;
}

int func_1249(int iParam0, int iParam1, vector3 vParam2, int iParam5)
{
	if (iParam1 == 0)
	{
		return -1;
	}
	if (func_241(vParam2))
	{
		return -1;
	}
	iVar1 = -1;
	iVar2 = func_1440(vParam2);
	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		if (func_1441(iVar0) == 0 && iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		else if ((func_1441(iVar0) == iParam1 && func_1442(iVar0) == iParam0) && iVar2 == func_1443(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	if (iVar1 > -1 && iVar1 < 250)
	{
		func_1444(iVar1, iParam0);
		func_1445(iVar1, iParam1);
		func_1446(iVar1, iVar2);
		func_1447(iVar1, iParam5);
		func_1448(iVar1);
		set_blip_flash_timer(&(Global_36308[iVar1]), iParam1, 0);
		return iVar1;
	}
	return -1;
}

void func_1250(int iParam0)
{
	iVar0 = Global_1914319->f_17378.f_1010.f_201;
	if (iParam0 != 0)
	{
		if (iVar0 < 200)
		{
			Global_1914319->f_17378.f_1010[iVar0] = iParam0;
			iVar0++;
			Global_1914319->f_17378.f_1010.f_201 = iVar0;
		}
	}
}

bool func_1251(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (iParam1 == uParam0[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1252(var uParam0, int iParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0[iVar0] == -1)
		{
			if (iParam1 == uParam0[iVar0])
			{
				(*uParam0)[iVar0]->f_6 = fParam2;
			}
		}
		iVar0++;
	}
}

bool func_1253(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if ((*uParam0)[iVar0]->f_1 == 0)
		{
			*iParam1 = iVar0;
			return true;
		}
		iVar0++;
	}
	*iParam1 = -1;
	return false;
}

bool func_1254(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (&uParam0->f_141[iVar0] != -1)
		{
			if (iParam1 == &uParam0->f_141[iVar0])
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_1255(var uParam0, int iParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (iParam1 == &uParam0->f_141[iVar0])
		{
			uParam0->f_141[iVar0]->f_6 = fParam2;
		}
		iVar0++;
	}
}

bool func_1256(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_141[iVar0]->f_1 == 0)
		{
			*iParam1 = iVar0;
			return true;
		}
		iVar0++;
	}
	*iParam1 = -1;
	return false;
}

char* func_1257(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	if (is_entity_a_ped(iParam0))
	{
		return func_1289(get_ped_index_from_entity_index(iParam0));
	}
	else if (is_entity_an_object(iParam0))
	{
		return func_1449(get_object_index_from_entity_index(iParam0));
	}
	else if (is_entity_a_vehicle(iParam0))
	{
		return func_1450(get_vehicle_index_from_entity_index(iParam0));
	}
	return "";
}

int func_1258(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (does_entity_exist(&(uParam0->f_13[iVar0])) && &uParam0->f_13[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1259(var uParam0, char* sParam1)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (does_entity_exist(&(uParam0->f_13[iVar0])) && are_strings_equal(&(uParam0->f_13[iVar0]->f_1), sParam1))
		{
			return &(uParam0->f_13[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

void func_1260(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar12 = 0;
	while (iVar12 < 11)
	{
		if (&uParam0->f_13[iVar12] == iParam1)
		{
			*uParam0->f_13[iVar12] = { Var0 };
			return;
		}
		iVar12++;
	}
}

int func_1261(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!does_entity_exist(&(uParam0->f_13[iVar0])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1262(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 || iParam1);
}

void func_1263(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 - (uParam0->f_11 && iParam1));
}

struct<8> func_1264()
{
	StringCopy(&cVar0, "NormalStart", 64);
	return cVar0;
}

void func_1265(var uParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		return;
	}
	StringCopy(&(uParam0->f_158), sParam1, 64);
}

Vector3 func_1266(var uParam0)
{
	MemCopy(&uVar0, {func_1451(uParam0)}, 8);
	if (!_does_anim_scene_exist(uParam0->f_157))
	{
		uParam0->f_157 = _create_anim_scene(&(uParam0->f_152), 0, 0, false, true);
	}
	else if (_is_anim_scene_metadata_loaded(uParam0->f_157, false))
	{
		if (_get_anim_scene_entity_matrix(uParam0->f_157, func_1289(Global_35), &vVar14, false, 0, 2))
		{
			vVar8 = { vVar14 };
		}
		else
		{
			_get_anim_scene_origin(uParam0->f_157, &vVar8, &uVar11, 2);
		}
		_delete_anim_scene(uParam0->f_157);
		return vVar8;
	}
	return 0f, 0f, 0f;
}

void func_1267(var uParam0, vector3 vParam1)
{
	if (func_241(vParam1))
	{
		return;
	}
	uParam0->f_5 = { vParam1 };
}

float func_1268(var uParam0)
{
	return uParam0->f_147;
}

void func_1269()
{
	Global_1946804->f_858 = (Global_1946804->f_858 - 1);
	if (Global_1946804->f_858 <= 0)
	{
		Var0 = 35;
		func_1452(Var0);
	}
}

void func_1270(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_156))
	{
		return;
	}
	if (!_is_anim_scene_loaded(uParam0->f_156, true, false))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!is_string_null_or_empty(uParam0->f_174[iVar0]) && (_0x23e33cb9f4a3f547(uParam0->f_156, uParam0->f_174[iVar0]) || _0x0df57f86fe71dbe5(uParam0->f_156, uParam0->f_174[iVar0])))
		{
			_0xae6ada8fe7e84acc(uParam0->f_156, uParam0->f_174[iVar0]);
		}
		uParam0->f_174[iVar0]->f_8 = 0;
		iVar0++;
	}
}

void func_1271(var uParam0)
{
	if (_does_volume_exist(uParam0->f_4))
	{
		if (func_1095(uParam0, 16))
		{
			_0xa1cfb35069d23c23(uParam0->f_4);
			_0x74c2b3dc0b294102(uParam0->f_4);
			func_1453(uParam0);
			_0xd17672447692478e(uParam0->f_4, 0);
		}
	}
	if (func_1095(uParam0, 8))
	{
		_delete_volume(uParam0->f_4);
		func_1092(uParam0, 8, 1);
	}
	uParam0->f_4 = 0;
	func_1092(uParam0, 16, 1);
}

float func_1272(var uParam0)
{
	return uParam0->f_146;
}

struct<8> func_1273(var uParam0)
{
	return uParam0->f_158;
}

void func_1274(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_1095(uParam0, 16))
	{
		return;
	}
	if (!_does_volume_exist(uParam0->f_4) && !func_1136(uParam0->f_5, 0f, 0f, 0f))
	{
		uParam0->f_4 = _create_volume_box_with_custom_name(uParam0->f_5, 0f, 0f, 0f, 5f, 5f, 5f, func_1246());
		func_1093(uParam0, 8);
	}
	if (_does_volume_exist(uParam0->f_4))
	{
		_0xb56d41a694e42e86(uParam0->f_4, iParam1, iParam4, 0, -1, -1, iParam3);
		_0x18262cafebb5fbe1(uParam0->f_4, iParam1, 0, 0, -1, -1, 0);
		func_1454(uParam0, uParam0->f_4, 0, 1);
		_0xc1799fafd2fdf52b(uParam0->f_4, 0, 0, iParam2);
		func_1093(uParam0, 16);
	}
}

bool func_1275()
{
	return Global_1946804->f_1497 != Global_1946804->f_2163.f_1;
}

void func_1276(int iParam0)
{
	if (func_1455(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1452(Var0);
}

struct<8> func_1277(var uParam0)
{
	Var0 = { func_1456(uParam0) };
	if (is_string_null_or_empty(&Var0))
	{
		Var0 = { func_1457() };
	}
	return Var0;
}

bool func_1278(var uParam0)
{
	if (!func_1458(*uParam0, uParam0->f_4))
	{
		return false;
	}
	return true;
}

bool func_1279(var uParam0)
{
	if (!func_1278(uParam0))
	{
		return false;
	}
	if (func_1459(uParam0->f_7, uParam0->f_8, func_1085(&(uParam0->f_3), 4)))
	{
		return true;
	}
	if (!func_1085(&(uParam0->f_3), 4))
	{
		if (func_1460())
		{
			return true;
		}
	}
	return false;
}

bool func_1280(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, float fParam5)
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
	if (func_1461(get_entity_coords(iParam0, true, false), iParam1, fParam2, 1, fParam5))
	{
		return true;
	}
	return false;
}

bool func_1281(float fParam0, float fParam1)
{
	if (is_ped_on_mount(Global_35))
	{
		return get_entity_speed(Global_35) < fParam0;
	}
	return get_entity_speed(Global_35) < fParam1;
}

bool func_1282(vector3 vParam0, var uParam3)
{
	if (!func_1085(&(uParam3->f_3), 8))
	{
		return true;
	}
	if (func_982(vParam0, 0.06f, 0.94f, 0.1f, 0.8f))
	{
		return true;
	}
	return false;
}

bool func_1283(vector3 vParam0, var uParam3)
{
	fVar0 = func_1284(vParam0, 1);
	return fVar0 < uParam3->f_6;
}

float func_1284(vector3 vParam0, bool bParam3)
{
	vVar0 = { func_1462(0) };
	vVar3 = { func_1019(vParam0 - get_gameplay_cam_coord()) };
	if (bParam3)
	{
		return absf(get_angle_between_2d_vectors(vVar3.x, vVar3.y, vVar0.x, vVar0.y));
	}
	return get_angle_between_2d_vectors(vVar3.x, vVar3.y, vVar0.x, vVar0.y);
}

int func_1285(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (!does_entity_exist(iParam1))
	{
		return 0;
	}
	if (bParam4 && is_entity_dead(iParam1))
	{
		return 0;
	}
	if (is_string_null_or_empty(sParam2))
	{
		sParam2 = func_1257(iParam1);
	}
	if (iParam3 == 0)
	{
		iParam3 = get_entity_model(iParam1);
	}
	if (is_string_null_or_empty(sParam2))
	{
	}
	if (!func_1112(uParam0, iParam1, 4))
	{
		if (_0xb89fcff19dafff28(uParam0->f_156, sParam2))
		{
			func_1463(uParam0, iParam1, 4);
			return 1;
		}
		else if (bParam5 && _0x005e6f28dd7ed58d(uParam0->f_156, sParam2))
		{
			func_1463(uParam0, iParam1, 4);
			return 1;
		}
	}
	return 0;
}

struct<8> func_1286(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	iVar0 = get_length_of_literal_string(sParam0);
	iVar1 = get_length_of_literal_string(sParam1);
	if (iVar0 >= iParam3)
	{
		StringCopy(&cVar2, _0x806862e5d266cf38(sParam0, (iVar0 - iParam3), iVar0), 64);
	}
	else
	{
		StringCopy(&cVar2, sParam0, 64);
	}
	iVar0 = get_length_of_literal_string(&cVar2);
	if (iVar1 >= iParam3)
	{
		StringCopy(&cVar10, _0x806862e5d266cf38(sParam1, (iVar1 - iParam3), iVar1), 64);
	}
	else
	{
		StringCopy(&cVar10, sParam1, 64);
	}
	iVar1 = get_length_of_literal_string(&cVar10);
	if (bParam2)
	{
		if ((iVar0 + iVar1) >= iParam3)
		{
			StringCopy(&cVar10, _0x806862e5d266cf38(&cVar10, iVar0, iVar1), 64);
		}
	}
	else if ((iVar0 + iVar1) >= iParam3)
	{
		StringCopy(&cVar2, _0x806862e5d266cf38(&cVar2, iVar1, iVar0), 64);
	}
	Var18 = { cVar2 };
	StringConCat(&Var18, &cVar10, 64);
	return Var18;
}

bool func_1287(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_1288()
{
	if (func_301(Global_43801))
	{
		func_302(&Global_43801, 0, 0);
	}
}

char* func_1289(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	if (iParam0 == Global_35)
	{
		if (get_entity_model(Global_35) == 11966224)
		{
			return "John";
		}
		else
		{
			return "Arthur";
		}
	}
	iVar0 = get_entity_model(iParam0);
	return func_1464(iVar0);
}

bool func_1290(int iParam0)
{
	if (func_1223(iParam0))
	{
		iVar0 = _0x59fa676177dbe4c9(iParam0);
		return ((((iVar0 == 4 || iVar0 == 0) || iVar0 == 3) || iVar0 == 5) || iVar0 == 2);
	}
	return false;
}

bool func_1291(bool bParam0, bool bParam1)
{
	if (!func_301(Global_43801))
	{
		Global_43801 = func_1118("CUTSCENE_SKIP", -842734359, 5, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, -2018976333, 0);
		(*Global_1945938)[Global_43801]->f_16 = &Global_23[3];
		func_834(Global_43801, 0, 1);
		func_1121(Global_43801, 6, 1);
		if (bParam1)
		{
			func_1121(Global_43801, 14, 1);
		}
	}
	else
	{
		if (!func_1022(Global_43801, 0))
		{
			func_828(Global_43801, 1, 1);
		}
		if (func_1131(Global_43801, 1) != 0f && bParam0)
		{
			func_834(Global_43801, 1, 1);
		}
		else
		{
			func_834(Global_43801, 0, 1);
		}
		return func_753(Global_43801, 1);
	}
	return false;
}

bool func_1292(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_1293(var uParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		return;
	}
	if (!_does_anim_scene_exist(uParam0->f_156))
	{
		return;
	}
	if (!_is_anim_scene_loaded(uParam0->f_156, true, false))
	{
		return;
	}
	if (!_0x23e33cb9f4a3f547(uParam0->f_156, sParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!is_string_null_or_empty(uParam0->f_174[iVar0]) && are_strings_equal(sParam1, uParam0->f_174[iVar0]))
		{
			Var1 = { uParam0->f_158 };
			*uParam0->f_174[iVar0] = { Var1 };
		}
		iVar0++;
	}
	func_1265(uParam0, sParam1);
	func_1092(uParam0, 2097152, 1);
	func_1093(uParam0, 33554432);
	_set_anim_scene_playback_list_bool(uParam0->f_156, sParam1, true);
}

void func_1294(var uParam0, char* sParam1)
{
	if (((!func_1095(uParam0, 32) || func_1465(uParam0)) || func_1095(uParam0, 268435456)) && !func_1095(uParam0, 65536))
	{
		func_1081(&(uParam0->f_212), 256);
	}
}

void func_1295(var uParam0, bool bParam1)
{
	if (get_current_ped_weapon(Global_35, &uVar0, false, 9, false))
	{
		_0x67e21acc5c0c970c(Global_35, 9, bParam1);
	}
	if (get_current_ped_weapon(Global_35, &uVar0, false, 7, false))
	{
		_0x67e21acc5c0c970c(Global_35, 7, bParam1);
	}
	if (get_current_ped_weapon(Global_35, &uVar0, false, 8, false))
	{
		_0x67e21acc5c0c970c(Global_35, 8, bParam1);
	}
	if (get_current_ped_weapon(Global_35, &uVar0, false, 10, false))
	{
		_0x67e21acc5c0c970c(Global_35, 10, bParam1);
	}
}

bool func_1296()
{
	return _get_number_of_references_of_script_with_name_hash(130487986) > 0;
}

void func_1297()
{
	script_thread_iterator_reset();
	iVar0 = script_thread_iterator_get_next_thread_id();
	while (_does_thread_exist(iVar0))
	{
		if (_get_hash_of_thread(iVar0) == 130487986)
		{
			if (!is_entity_dead(Global_35))
			{
				set_ped_reset_flag(Global_35, 265, true);
			}
			force_cleanup_for_thread_with_this_id(iVar0, 1);
			return;
		}
		iVar0 = script_thread_iterator_get_next_thread_id();
	}
}

bool func_1298()
{
	if (_get_number_of_references_of_script_with_name_hash(-92416669) > 0)
	{
		return true;
	}
	return false;
}

void func_1299(bool bParam0)
{
	if (func_1298())
	{
		Global_1357509 = 1;
	}
	if (func_1466(-92416669))
	{
	}
	if (bParam0 && Global_1935630->f_44 == -1016714371)
	{
		set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
		Global_1935630->f_44 = -1569615261;
	}
}

void func_1300(var uParam0, char[16] cParam1)
{
	uParam0->f_152 = { cParam1 };
}

bool func_1301()
{
	if (does_entity_exist(player_ped_id()) && _0x038b1f1674f0e242(Global_35))
	{
		return true;
	}
	return false;
}

void func_1302(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!is_string_null_or_empty(uParam0->f_174[iVar0]))
		{
			func_1467(uParam0, uParam0->f_174[iVar0]);
		}
		iVar0++;
	}
	Var1 = { func_1264() };
	func_1467(uParam0, &Var1);
	Var1 = { func_1277(uParam0) };
	func_1467(uParam0, &Var1);
}

void func_1303(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!is_entity_dead(&(uParam0->f_13[iVar0])) || func_1315(uParam0->f_13[iVar0], 2))
		{
			if (func_1315(uParam0->f_13[iVar0], 1) || _0x6f1f0b17109309da(uParam0->f_156, &(uParam0->f_13[iVar0]->f_1)))
			{
				func_1468(uParam0, &(uParam0->f_13[iVar0]->f_1), &(uParam0->f_13[iVar0]), uParam0->f_13[iVar0]->f_9);
				if (bParam1 && is_entity_a_ped(&(uParam0->f_13[iVar0])))
				{
					iVar1 = get_ped_index_from_entity_index(&(uParam0->f_13[iVar0]));
					if (iVar1 != Global_35 && !func_1315(uParam0->f_13[iVar0], 16))
					{
						func_1469(iVar1);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_1304(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_156))
	{
		return;
	}
	if (!_is_anim_scene_loaded(uParam0->f_156, true, false))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!is_entity_dead(&(uParam0->f_13[iVar0])) || func_1315(uParam0->f_13[iVar0], 2))
		{
			if (_0x6f1f0b17109309da(uParam0->f_156, &(uParam0->f_13[iVar0]->f_1)))
			{
				func_1262(uParam0->f_13[iVar0], 1);
			}
		}
		iVar0++;
	}
}

bool func_1305()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

Vector3 func_1306(var uParam0)
{
	return uParam0->f_214;
}

void func_1307(var uParam0)
{
	if (func_1233(&iVar0))
	{
		if (func_1153(iVar0, 0))
		{
			if (func_944(iVar0) == -525676072)
			{
				_set_ped_component_disabled(Global_35, 1249071452, 0);
				func_1324(Global_35, -2065815962, 0, 1108822547, 0, 1, 0, 0, 0, 0);
			}
			else
			{
				_set_ped_component_disabled(Global_35, 1606587013, 0);
			}
			if (!func_1153(*uParam0, 0))
			{
				*uParam0 = iVar0;
			}
		}
	}
}

void func_1308(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	Global_16 = 1;
	if (!network_is_game_in_progress())
	{
		func_1470(0, 0);
		func_1471(-1);
	}
	func_1106(1);
	set_entity_invincible(Global_35, true);
	if (!func_1292(*uParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!func_1292(*uParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!func_1292(*uParam0, 128))
	{
		iParam1 |= 32;
	}
	if (func_1292(*uParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!func_1292(*uParam0, 32768))
	{
		set_player_control(get_player_index(), false, iParam1, true);
	}
	if (!func_1292(*uParam0, 1))
	{
		_0xf239400e16c23e08(0, 0);
	}
	if (!func_1292(*uParam0, 65536))
	{
		set_everyone_ignore_player(player_id(), true);
	}
	if (!func_1292(*uParam0, 4) && !func_1292(*uParam0, 2))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_1292(*uParam0, 2048))
	{
		func_1472(0, 0);
	}
	if (func_1292(*uParam0, 8))
	{
		clear_ped_tasks_immediately(Global_35, false, true);
	}
	if (func_1292(*uParam0, 256))
	{
		_hide_ped_weapons(Global_35, 2, true);
	}
	if (func_1292(*uParam0, 8192))
	{
		func_1473();
	}
	if (!func_1292(*uParam0, 262144))
	{
		set_ped_reset_flag(Global_35, 264, true);
	}
	if (!func_1292(*uParam0, 512))
	{
		if (is_gameplay_hint_active())
		{
			stop_gameplay_hint(false);
		}
	}
	if (!func_1292(*uParam0, 1024))
	{
		set_cinematic_mode_active(false);
	}
	if (iParam2 != 2)
	{
		set_ped_stealth_movement(Global_35, iParam2 == 1, 0, 0);
	}
	if (is_ped_on_foot(Global_35))
	{
		if (bParam6)
		{
			set_ped_desired_move_blend_ratio(Global_35, 0f);
			set_ped_desired_heading(Global_35, get_entity_heading(Global_35));
			set_entity_velocity(Global_35, 0f, 0f, 0f);
		}
		if (!func_1292(*uParam0, 16))
		{
			iVar0 = create_itemset(true);
			bVar1 = false;
			find_all_attached_carriable_entities(Global_35, iVar0);
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < get_itemset_size(iVar0))
			{
				iVar6 = get_indexed_item_in_itemset(iVar2, iVar0);
				iVar7 = _get_entity_from_item(iVar6);
				if (!does_entity_exist(iVar7))
				{
				}
				else
				{
					bVar8 = false;
					if (is_entity_an_object(iVar7))
					{
						if (func_1474() == iVar7)
						{
							bVar8 = true;
						}
					}
					vVar3.x = uParam3;
					vVar3.f_1 = uParam4;
					vVar3.f_2 = uParam5;
					if (func_241(vVar3))
					{
						vVar3 = { get_offset_from_entity_in_world_coords(Global_35, 0f, IntToFloat((-1 + iVar2)), 0f) };
						func_861(&vVar3, 50, 10, 0);
					}
					_0xed00d72f81cf7278(iVar7, 0, 1);
					set_entity_coords(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						func_1402(2);
						func_1401(-1);
						func_1410(vVar3);
						func_1476(func_1475());
					}
					bVar1 = true;
				}
				iVar2++;
			}
			if (bVar1)
			{
				if (!_0x3ab6c7b0bb0df4b1(Global_35, -1))
				{
					clear_ped_tasks_immediately(Global_35, false, true);
					_0x2208438012482a1a(Global_35, false, false);
				}
			}
			destroy_itemset(iVar0);
		}
	}
	if (bParam6 && is_ped_on_mount(Global_35))
	{
		iVar9 = get_mount(Global_35);
		if (!is_entity_dead(iVar9))
		{
			clear_ped_tasks(iVar9, 1, 0);
			task_stand_still(iVar9, -1);
		}
	}
	if (!func_1292(*uParam0, 4096))
	{
		func_1469(Global_35);
	}
	if (!func_1292(*uParam0, 1048576))
	{
		_0xdd1232b332cbb9e7(7, 1, 0);
	}
	if (!func_1292(*uParam0, 2097152))
	{
		if (func_1477() || _0x50f124e6ef188b22(Global_35))
		{
			func_1478(1);
		}
	}
	if (Global_1359489->f_16 & 4194304 == 0)
	{
		Global_1359489->f_16 |= 4194304;
	}
	*uParam0 = 0;
}

void func_1309(var uParam0, vector3 vParam1)
{
	uParam0->f_214 = { vParam1 };
}

void func_1310(var uParam0)
{
	if (func_1095(uParam0, 2048) && !func_241(func_1479(uParam0)))
	{
		bVar0 = _does_volume_exist(uParam0->f_4);
		iVar1 = _get_last_mount(Global_35);
		if ((!is_entity_dead(iVar1) && ((bVar0 && is_entity_in_volume(iVar1, uParam0->f_4, true, 0)) || func_1095(uParam0, -2147483648))) && get_mount(Global_35) != iVar1)
		{
			iVar2 = 2;
			if (is_ped_in_writhe(iVar1))
			{
				iVar2 |= 32;
			}
			func_262(iVar1, func_1479(uParam0), func_1480(uParam0), iVar2, 1073741824);
		}
		iVar3 = get_players_last_vehicle();
		if ((!is_entity_dead(iVar3) && ((bVar0 && is_entity_in_volume(iVar3, uParam0->f_4, true, 0)) || func_1095(uParam0, -2147483648))) && !is_ped_in_vehicle(Global_35, iVar3, true))
		{
			func_262(iVar3, func_1479(uParam0), func_1480(uParam0), 2, 1073741824);
		}
	}
}

void func_1311(var uParam0)
{
	if ((func_1095(uParam0, 268435456) && !func_241(func_1479(uParam0))) && is_ped_in_any_vehicle(Global_35, false))
	{
		iVar0 = get_vehicle_ped_is_using(Global_35);
		if (!is_entity_dead(iVar0))
		{
			vVar1 = { func_1479(uParam0) };
			func_262(iVar0, vVar1, func_1481(vVar1, Global_36, 1), 2, 1073741824);
			set_vehicle_on_ground_properly(iVar0, 0f);
			set_entity_velocity(iVar0, 0f, 0f, 0f);
			set_vehicle_forward_speed(iVar0, 0f);
		}
	}
}

void func_1312(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if ((!is_entity_dead(&(uParam0->f_13[iVar0])) && is_entity_a_ped(&(uParam0->f_13[iVar0]))) && get_ped_index_from_entity_index(&(uParam0->f_13[iVar0])) != Global_35)
		{
			iVar1 = get_ped_index_from_entity_index(&(uParam0->f_13[iVar0]));
			if (is_ped_human(iVar1))
			{
				if (_0x6f1f0b17109309da(uParam0->f_156, &(uParam0->f_13[iVar0]->f_1)))
				{
					if (!func_1315(uParam0->f_13[iVar0], 8))
					{
						if (func_343(func_349(iVar1, 0, 1, 0)))
						{
							if (!func_1482(uParam0, get_current_ped_weapon_entity_index(iVar1, 0)))
							{
								set_current_ped_weapon(iVar1, -1569615261, true, 0, false, false);
							}
						}
						if (func_343(func_349(iVar1, 1, 1, 0)))
						{
							if (!func_1482(uParam0, get_current_ped_weapon_entity_index(iVar1, 1)))
							{
								set_current_ped_weapon(iVar1, -1569615261, true, 1, false, false);
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_1313(var uParam0, bool bParam1)
{
	_0x67e21acc5c0c970c(Global_35, 3, bParam1);
	if (!bParam1)
	{
		if (!Global_17)
		{
			_set_ped_component_disabled(Global_35, -1229581779, 0);
			Global_17 = !bParam1;
		}
	}
}

void func_1314(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bVar4 = func_1() != -1;
	Global_1946804->f_857 = 0;
	if (iParam3 == -1 && bParam6)
	{
		_0x0bfa1bd465cdfefd(iParam1);
		if (!bVar4)
		{
			if (Global_1347477->f_189 != 0)
			{
				_set_ped_body_component(iParam1, Global_1347477->f_189);
			}
			if ((Global_1946804->f_1 == -2125499975 || Global_1946804->f_1 == -449205311) && Global_1347477->f_190 != 0)
			{
				_set_ped_body_component(iParam1, Global_1347477->f_190);
			}
			func_1483(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_1484(iParam1, 29, bVar4, 1, 0);
			func_1484(iParam1, 31, bVar4, 1, 0);
			func_1484(iParam1, 30, bVar4, 1, 0);
			func_1484(iParam1, 22, bVar4, 1, 0);
			func_1484(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_1485(32768) && func_1486(1108822547, 8)) && func_1487(10, iParam3))
	{
		func_1488(iParam1, 0, 1);
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar1 = &Global_1946804->f_57.f_430[iVar0];
		if (iVar1 <= -1 || iVar1 >= 39)
		{
		}
		else
		{
			iVar3 = func_1489(iVar1, 1);
			if (func_1486(iVar3, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar1]->f_2[0] == -1802376732 || &uParam0->f_1[iVar1] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1];
				if (!func_1487(iVar1, iParam3))
				{
				}
				else if ((func_1486(iVar3, 6) || &uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1]) || uParam0->f_1[iVar1]->f_1 == 289238755)
				{
					if (!func_1486(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_1484(iParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1]->f_1 == 289238755)
						{
							Global_1946804->f_2456[iVar1]->f_1 = 289238755;
						}
						func_1490(iVar3, 1, 6);
					}
				}
				else
				{
					if (!bParam6)
					{
						if ((!bParam2 && &uParam0->f_1[iVar1] == &Global_1946804->f_2456[iVar1]) && uParam0->f_1[iVar1]->f_1 == Global_1946804->f_2456[iVar1]->f_1)
						{
						}
						else
						{
							if (Global_1946804->f_57[iVar1]->f_1 > 1)
							{
								func_1484(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1]));
							}
							Global_1946804->f_2456[iVar1] = &uParam0->f_1[iVar1];
							Global_1946804->f_2456[iVar1]->f_1 = uParam0->f_1[iVar1]->f_1;
							if (func_1486(iVar3, 1))
							{
								func_1491(iVar3, 1, 6);
							}
							Global_1946804->f_857++;
							_set_ped_component_enabled(iParam1, iVar2, false, bVar4, false);
							if (uParam0->f_1[iVar1]->f_1 != 0)
							{
								_0x66b957aac2eaaeab(iParam1, iVar2, uParam0->f_1[iVar1]->f_1, 0, bVar4, 1);
							}
						}
						iVar0++;
						if (Global_1946804->f_857 <= 0)
						{
							return;
						}
						if (bParam4)
						{
							_0xaab86462966168ce(iParam1, bVar4);
							_update_ped_variation(iParam1, false, true, true, true, bParam5);
						}
					}
				}
			}
		}
	}
}

bool func_1315(var uParam0, int iParam1)
{
	return (uParam0->f_11 && iParam1) != 0;
}

void func_1316(var uParam0)
{
	StringCopy(&(uParam0->f_152), "", 32);
	func_1492(uParam0);
	func_1267(uParam0, 0f, 0f, 0f);
	func_1493(uParam0);
}

void func_1317(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		uParam0->f_13[iVar0]->f_11 = 0;
		iVar0++;
	}
}

void func_1318(var uParam0)
{
	uParam0->f_8 = 0;
}

void func_1319(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		func_1263(uParam0->f_13[iVar0], iParam1);
		iVar0++;
	}
}

void func_1320(bool bParam0)
{
	if (_does_anim_scene_exist(Global_43800))
	{
		if (check_ownership_of_anim_scene(Global_43800))
		{
			_delete_anim_scene(Global_43800);
		}
	}
	Global_43800 = -1;
	StringCopy(&Global_43802, "", 24);
	Global_16 = 0;
	if (bParam0)
	{
		func_1288();
	}
	_0xa0cefcea390aab9b(0);
}

void func_1321(int iParam0)
{
	func_1494();
	Global_1911774->f_1 = get_game_timer();
	Global_1911774->f_2 = iParam0;
}

void func_1322()
{
	if (!network_is_in_session())
	{
		return;
	}
	if (!network_is_in_mp_cutscene())
	{
		return;
	}
	network_set_in_mp_cutscene(false, false, 32, true);
}

void func_1323(bool bParam0)
{
	if (bParam0)
	{
		Global_1945938->f_865 = (Global_1945938->f_865 - Global_1945938->f_865 & 2);
	}
	else
	{
		Global_1945938->f_865 |= 2;
	}
	func_1495(bParam0);
}

int func_1324(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_867(iParam1, 1, 0) };
		iParam3 = func_1496(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1498(iParam1, iParam2, func_1497(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_1499(1, (func_1() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_1497(iParam3, 1)])
			{
				func_1500(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_1485(32768) && iParam1 != &Global_1946804->f_57[func_1497(iParam3, 1)])
			{
				func_1501();
				func_1500(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_1500(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_1502(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_1500(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_1276(0);
			func_1503(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_1500(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_1325(int iParam0, int iParam1)
{
	Var0 = { func_867(iParam0, 0, 0) };
	Var5 = { func_871(iParam0, Var0, Var0.f_4, 0) };
	if (func_1151(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	_0x65a5f70f4a292ebe(func_943(0), &Var5, iParam1);
}

bool func_1326(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_943(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_1327(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_1328(int iParam0)
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

int func_1329(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (!is_entity_a_ped(iParam0))
	{
		return 0;
	}
	iVar0 = get_ped_index_from_entity_index(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_1504(iVar0, &uVar2, &uVar3, &iVar1, &uVar4);
	if (func_1505(&uVar5, iVar0, iVar1, uVar2))
	{
	}
	return uVar5;
}

int func_1330(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	iVar0 = _0x31fef6a20f00b963(iParam0);
	if (iVar0 == 0)
	{
		if (is_entity_a_ped(iParam0))
		{
			iVar1 = get_ped_index_from_entity_index(iParam0);
			iVar0 = func_1506(iVar1);
		}
	}
	return iVar0;
}

int func_1331(int iParam0)
{
	iVar0 = 0;
	iVar1 = Global_1914319->f_17378.f_1010.f_201;
	if (iParam0 != 0)
	{
		if (iVar1 < 200)
		{
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				if (&Global_1914319->f_17378.f_1010[iVar0] == iParam0)
				{
					return 1;
				}
				iVar0++;
			}
		}
	}
	return 0;
}

bool func_1332(int iParam0, int iParam1)
{
	if (func_1() == -1)
	{
		if (iParam1 == 61)
		{
			if (func_1430(iParam0, 1490540191))
			{
				return true;
			}
		}
	}
	return false;
}

int func_1333(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar5 = func_937(iParam1);
	if (iVar5 == -1)
	{
		return 0;
	}
	if (!func_1240(6, &Var0))
	{
		return 0;
	}
	Var0.f_2 = -815325344;
	Var0.f_3 = func_1507(iVar5);
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		iVar6 = iParam0;
		Var0.f_2 = 549615901;
		Var0.f_3 = iVar6;
		if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
		{
			return 1;
		}
	}
	return 0;
}

void func_1334(int iParam0)
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
	_0x6569f31a01b4c097(iVar0, 7, 1);
}

Vector3 func_1335(vector3 vParam0, float fParam3)
{
	if (fParam3 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		return vParam0 * FtoV((fParam3 / fVar0));
	}
	return 0f, 0f, 0f;
}

bool func_1336(int iParam0, int iParam1)
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

bool func_1337(int iParam0, int iParam1)
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

bool func_1338(int iParam0, int iParam1)
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
	if (!func_1336(iParam0, iVar0))
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

void func_1339(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

float func_1340(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

struct<4> func_1341()
{
	return Var0;
}

bool func_1342(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_1343(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

int func_1344(int iParam0)
{
	if (!func_138(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 0:
			return 5 + 1;
		case 1:
			return 5 + 1;
		case 2:
			return 4 + 1;
		case 3:
			return 2 + 1;
	}
	return -1;
}

int func_1345()
{
	return Global_40.f_11095.f_35;
}

void func_1346(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_1508(bParam1);
	}
}

void func_1347(int iParam0)
{
	_0x74bcceb233ad95b2(-156028329, iParam0);
}

char* func_1348(int iParam0)
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

bool func_1349(int iParam0)
{
	if (!func_1240(23, &vVar0))
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

bool func_1350(int iParam0, int iParam1, int iParam2)
{
	if (!func_1240(23, &Var0))
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

int func_1351(int iParam0)
{
	return iParam0;
}

int func_1352()
{
	iVar0 = func_1161();
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

void func_1353(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

bool func_1354(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_1355(int iParam0, int iParam1, var uParam2)
{
	if (!func_1354(iParam0))
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

bool func_1356()
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

void func_1357(int iParam0)
{
	Global_1914319->f_15923 = iParam0;
}

bool func_1358(int iParam0)
{
	return iParam0 != 0;
}

bool func_1359()
{
	return (Global_1914319->f_17369 || Global_1914319->f_18996.f_1);
}

bool func_1360(int iParam0, int iParam1)
{
	iParam0 = func_949(iParam0);
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

void func_1361(var uParam0)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1510(func_1509(255), 109029619));
	}
	else if (func_1511())
	{
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_1163();
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_1362(int iParam0)
{
	iParam0 = func_949(iParam0);
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

void func_1363(var uParam0, bool bParam1)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1510(func_1509(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_1511())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_1163())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (compare_strings(sVar0, "", false, -1) != 0)
		{
			set_blip_name_from_text_file(*uParam0, sVar0);
		}
	}
}

int func_1364(int iParam0)
{
	iParam0 = func_949(iParam0);
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

float func_1365(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

float func_1366(int iParam0)
{
	iParam0 = func_949(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_1411(iParam0);
	if (!is_model_valid(iVar0))
	{
		return -1f;
	}
	iVar1 = func_1362(iParam0);
	iVar2 = get_default_max_attribute_rank(iVar0, 7);
	fVar3 = _0xeb67d4e056c85a81(iVar1);
	fVar4 = _0x78d8c1d4eb80c588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_1362(iParam0) + 1;
	fVar6 = func_1512(iParam0);
	fVar7 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar1));
	fVar8 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_1340(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_1367(int iParam0)
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

void func_1368(int iParam0)
{
	_set_blip_flash_style(iParam0, 673950256);
	_set_blip_flash_style(iParam0, 561559387);
	_set_blip_flash_style(iParam0, -201249929);
}

bool func_1369(int iParam0, int* iParam1)
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
		if (is_ped_in_combat(iParam0, func_1513((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_1370(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_1383((*uParam0)[iVar0]))
		{
			func_978((*uParam0)[iVar0], 14);
		}
		iVar0++;
	}
}

int func_1371(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(*uParam2)[iVar0]->f_8 = 6;
		func_1514(iParam0, (*uParam2)[iVar0], fParam3, 3, 0, 6, bParam4, 0);
		if (func_301((*uParam2)[iVar0]->f_6))
		{
			func_978((*uParam2)[iVar0], 11);
			return (*Global_1945938)[(*uParam2)[iVar0]->f_6]->f_3;
		}
	}
	return 0;
}

int func_1372(int* iParam0)
{
	iVar0 = func_1515(*iParam0);
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

int func_1373(var uParam0, int iParam1)
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

void func_1374(int* iParam0, int* iParam1)
{
	if (!func_809(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_978(iParam1, 19);
			func_1385(iParam0, 23);
			func_1516(iParam1, 2);
		}
	}
}

bool func_1375(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (func_1517(16))
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
					func_1518(16);
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

void func_1376(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_1514(iParam0, (*uParam1)[iVar0], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			clear_bit((*uParam1)[iVar0], 14);
		}
		iVar0++;
	}
}

void func_1377(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (is_bit_set(*iParam1, 14))
	{
		if (func_1383(iParam1))
		{
			clear_bit(iParam1, 14);
			func_1514(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_1378(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_1519(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_1022(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_828(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_828(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_1520(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_1379(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_753(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_1521(iParam1, 1))
	{
		func_1522(iParam1, 1);
		return true;
	}
	return false;
}

void func_1380(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_652((*uParam0)[iVar0], bParam1, bParam2);
		iVar0++;
	}
}

bool func_1381(int* iParam0, float fParam1, bool bParam2)
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

void func_1382(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		disable_control_action(0, 1101824977, true);
		disable_control_action(0, 966551065, true);
		disable_control_action(0, 668058244, true);
		set_ped_reset_flag(Global_35, 203, true);
	}
}

bool func_1383(int* iParam0)
{
	if (!is_string_null_or_empty(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_1384(int iParam0)
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

void func_1385(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

bool func_1386(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

bool func_1387(int iParam0, int iParam1)
{
	if (func_1() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_1388(int iParam0)
{
	if (func_1() != -1)
	{
		if (func_1390(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_1390(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_1389(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_1390(iParam0, 65536) && !func_1390(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_1390(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_1390(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1390(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_1391()
{
	return Global_1905944->f_5694;
}

void func_1392(int iParam0, int iParam1)
{
	if (iParam1 >= 0)
	{
		iLocal_2527[iParam1] = iParam0;
	}
	else
	{
		iLocal_2527[iVar2539] = iParam0;
		iLocal_2543 = iVar2539 + 1;
	}
}

char* func_1393()
{
	iVar0 = get_random_int_in_range(0, 2);
	switch (iVar0)
	{
		case 0:
		case default:
			return "Default_Shocked";
		case 1:
			return "Default_Scared";
			return "";
			default:
				break;
	}
}

int func_1394(float fParam0)
{
	fVar2 = 0f;
	iVar0 = 0;
	while (iVar0 < iVar2540)
	{
		if (fParam0[iVar0] > fVar2)
		{
			iVar1 = iVar0;
			fVar2 = fParam0[iVar0];
		}
		iVar0++;
	}
	return iVar1;
}

bool func_1395(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < iVar2540)
	{
		if (&iLocal_2527[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1396(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_ped_group_member(iParam0, func_542(), 1))
	{
		return true;
	}
	return false;
}

char* func_1397(char* sParam0)
{
	return sParam0;
}

bool func_1398(int iParam0)
{
	iParam0 = func_949(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_1413(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_1399(int iParam0)
{
	iParam0 = func_949(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_1189(iParam0))
	{
		return;
	}
	iVar0 = func_1227(iParam0);
	func_1523(iParam0);
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	iVar1 = get_entity_model(iVar0);
	if (_0xaa9f048dcf69b6dc(iVar1))
	{
		if (!func_1524(iVar1))
		{
			set_ped_model_is_suppressed(iVar1, false);
		}
	}
	delete_ped(&iVar0);
	func_1525(iParam0, 0);
	func_623(iParam0);
}

void func_1400(int iParam0)
{
	iParam0 = func_949(iParam0);
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
	func_1526(&Var0);
	func_1527(iParam0, Var0);
	func_1528(&(Global_40.f_1095.f_1[iParam0]->f_15));
	func_1529(&(Global_40.f_1095.f_1[iParam0]->f_298));
	func_1530(&(Global_40.f_1095.f_1[iParam0]->f_356));
	func_1531(&(Global_40.f_1095.f_1[iParam0]->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_1532(iVar2, Global_40.f_1095.f_1[iParam0]->f_398[iVar2]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_1533(iVar3, Global_40.f_1095.f_1[iParam0]->f_407[iVar3]);
		iVar3++;
	}
	func_1534(&(Global_40.f_1095.f_1[iParam0]->f_420));
	func_1535(&(Global_40.f_1095.f_1[iParam0]->f_422));
	func_1536(&(Global_40.f_1095.f_1[iParam0]->f_425));
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

void func_1401(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_1402(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

int func_1403(vector3 vParam0)
{
	return func_1537(_get_map_zone_at_coords(vParam0, 10));
}

bool func_1404(int iParam0)
{
	iParam0 = func_949(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_1189(iParam0))
	{
		return false;
	}
	iVar0 = func_1227(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

bool func_1405(int iParam0)
{
	iParam0 = func_949(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_1189(iParam0))
	{
		return false;
	}
	iVar0 = func_1227(iParam0);
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

void func_1406(int iParam0)
{
	iParam0 = func_949(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_1189(iParam0))
	{
		return;
	}
	iVar0 = func_1227(iParam0);
	if (is_entity_dead(iVar0))
	{
		return;
	}
	_set_entity_health(iVar0, 0, 0);
}

void func_1407(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (is_player_dead(iVar0))
	{
	}
	func_1191(iParam0);
	func_1191(iParam0);
	func_1538(iParam0, iParam1);
	func_1539(iParam0, iParam1);
	func_1540(iParam0, iParam1);
	iVar1 = func_1227(iParam0);
	if (does_entity_exist(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_1541(iVar1);
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
	iVar3 = func_1227(iParam1);
	if (does_entity_exist(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_1541(iVar3);
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
	func_951();
}

bool func_1408()
{
	iVar0 = func_1474();
	if (does_entity_exist(iVar0))
	{
		return true;
	}
	return false;
}

void func_1409()
{
	iVar0 = func_1474();
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	delete_object(&iVar0);
	func_1542(0);
}

void func_1410(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

int func_1411(int iParam0)
{
	iParam0 = func_949(iParam0);
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

int func_1412(int iParam0)
{
	iParam0 = func_949(iParam0);
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

int func_1413(int iParam0)
{
	iParam0 = func_949(iParam0);
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

void func_1414(int iParam0)
{
	iParam0 = func_949(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1543(&uVar0, &uVar1, &uVar2);
	func_1544(iParam0, uVar0);
	func_1545(iParam0, uVar1);
	func_1546(iParam0, uVar2);
	func_1547(iParam0, 1);
	func_1548(iParam0, 1);
}

void func_1415(int iParam0)
{
	iParam0 = func_949(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1549(iParam0, 1);
}

void func_1416(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_949(iParam0);
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

bool func_1417(int iParam0)
{
	iParam0 = func_949(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return func_1360(iParam0, 1);
}

struct<2> func_1418(int iParam0)
{
	iParam0 = func_949(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_1550(iParam0, &uVar2))
	{
	}
	if (!func_1551(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_1419()
{
	if (func_1552(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_1552(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_1552(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_1552(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_1552(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_1552(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_1420(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_1553(iParam0);
	func_1554(iParam0, uParam1);
	func_1555(iParam0);
	func_1556(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_1557(iParam0, iParam3, 0);
	}
	_update_ped_variation(iParam0, false, true, true, true, true);
}

void func_1421(int iParam0)
{
	iParam0 = func_949(iParam0);
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

bool func_1422()
{
	if (func_1558())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_1423(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1559((Global_40.f_4283.f_325 + iParam0));
}

void func_1424(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_1422())
	{
		func_1171(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_1171(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

int func_1425(int iParam0)
{
	iVar0 = func_1497(func_1560(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946804->f_1497.f_1[iVar0]->f_1;
	}
	return 0;
}

bool func_1426(int iParam0, int iParam1)
{
	iVar1 = func_1497(func_1560(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1946804->f_1497.f_1[iVar1] != 0 && &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1];
		if (func_944(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

bool func_1427()
{
	if (Global_1946804->f_2793)
	{
		return true;
	}
	if (absi((get_game_timer() - Global_1946804->f_2791)) < 1250)
	{
		return true;
	}
	if (func_1561())
	{
		return true;
	}
	if (_0xec7e480ff8bd0bed(Global_35))
	{
		return true;
	}
	return false;
}

bool func_1428(int iParam0, int iParam1, bool bParam2)
{
	if (!func_1153(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_1145(iParam0);
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
		if (!func_1562(iParam0, 1))
		{
			return false;
		}
	}
	return func_1563(iParam0, 0, bParam2) >= iParam1;
}

int func_1429(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_1235(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1430(int iParam0, int iParam1)
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

int func_1431()
{
	iVar0 = 1549701178;
	switch (func_1564())
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

int func_1432()
{
	iVar0 = 614608656;
	switch (func_1564())
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

int func_1433()
{
	iVar0 = -1832677570;
	switch (func_1564())
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

int func_1434()
{
	iVar0 = 1623252156;
	switch (func_1564())
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

void func_1435(int iParam0, int iParam1, bool bParam2)
{
	if (Global_1327479->f_9)
	{
		return;
	}
	Global_1327479->f_4 = (Global_1327479->f_4 + iParam0 * 1000);
	if (bParam2)
	{
		Global_1310750->f_16106 = { Global_36 };
	}
	if (iParam1 == 0)
	{
		if (iParam0 > 0)
		{
			Global_1327479->f_5 = (get_game_timer() + ((Global_1327479->f_4 - get_game_timer()) / 2));
		}
		else
		{
			Global_1327479->f_5 = (Global_1327479->f_5 + iParam0 * 500);
		}
	}
	else
	{
		Global_1327479->f_5 = (get_game_timer() + iParam1 * 1000);
	}
}

bool func_1436(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

void func_1437(int iParam0, int iParam1, int iParam2)
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

void func_1438(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
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
	func_1014(0);
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

int func_1439(int iParam0)
{
	switch (iParam0)
	{
		case 1243830185:
			return 3;
		case 595820042:
			return 1;
		case -1179229323:
			return 7;
		case -1650465405:
			return 2;
		case -1575595762:
			return 59;
		case 1974815632:
			return 4;
		case 1078668923:
			return 5;
		case -1581061148:
			return 8;
		case -48718882:
			return 9;
		case -379108622:
			return 10;
		case 1015604260:
			return 11;
		case 126262516:
			return 12;
		case -997121570:
			return 14;
		case 423351566:
			return 13;
		case -1636832113:
			return 16;
		case 1012165077:
			return 17;
		case -250506368:
			return 18;
		case 2033397166:
			return 19;
		case 249721687:
			return 22;
		case 1475879922:
			return 20;
		case 531267562:
			return 21;
		case -145868367:
			return 23;
		case -1989306548:
			return 24;
		case -1739686743:
			return 25;
		case 1195729388:
			return 26;
		case -758970771:
			return 28;
		case 1542275196:
			return 29;
		case 1861010125:
			return 33;
		case 1475382911:
			return 34;
		case 103490298:
			return 30;
		case -2090472724:
			return 31;
		case -1665418949:
			return 32;
		case -852241114:
			return 35;
		case -1406874050:
			return 36;
		case 1938782895:
			return 37;
		case -1456209806:
			return 38;
		case 469827317:
			return 39;
		case 1364029453:
			return 44;
		case -211556852:
			return 43;
		case 1879260108:
			return 27;
		case 587827268:
			return 40;
		case 819673798:
			return 41;
		case -73168905:
			return 45;
		case 1586273744:
			return 46;
		case -1498696713:
			return 47;
		case 503049244:
			return 49;
		case 305594522:
			return 50;
		case -417940443:
			return 51;
		case -1606321000:
			return 52;
		case 1904459580:
			return 53;
		case -1989725258:
			return 54;
		case -487631996:
			return 55;
		case -1944395098:
			return 56;
		case -428972082:
			return 57;
		case -1258576797:
			return 62;
		default:
			break;
	}
	return 0;
}

int func_1440(struct<2> Param0, var uParam2)
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

int func_1441(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_40.f_7862[iParam0]->f_1;
	}
	return Global_42606[iParam0]->f_1;
}

int func_1442(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_40.f_7862[iParam0]);
	}
	return &(Global_42606[iParam0]);
}

int func_1443(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_40.f_7862[iParam0]->f_2;
	}
	return Global_42606[iParam0]->f_2;
}

void func_1444(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_7862[iParam0] = iParam1;
		return;
	}
	Global_42606[iParam0] = iParam1;
	return;
}

void func_1445(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_7862[iParam0]->f_1 = iParam1;
		return;
	}
	Global_42606[iParam0]->f_1 = iParam1;
	return;
}

void func_1446(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_7862[iParam0]->f_2 = iParam1;
		return;
	}
	Global_42606[iParam0]->f_2 = iParam1;
	return;
}

void func_1447(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_7862[iParam0]->f_3 = iParam1;
		return;
	}
	Global_42606[iParam0]->f_3 = iParam1;
	return;
}

void func_1448(int iParam0)
{
	vVar0 = { func_1565(func_1443(iParam0)) };
	Global_36308[iParam0] = _blip_add_for_coord(func_1566(func_1441(iParam0)), vVar0);
	set_blip_sprite(&(Global_36308[iParam0]), func_1567(func_1441(iParam0)), true);
	set_blip_flash_timer(&(Global_36308[iParam0]), func_1441(iParam0), iParam0);
}

char* func_1449(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	iVar0 = get_entity_model(iParam0);
	return func_1568(iVar0);
}

char* func_1450(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	iVar0 = get_entity_model(iParam0);
	switch (iVar0)
	{
		case 1468884243:
			return "CANOE";
		case -283162583:
			return "WAGON02X";
		case 1874711736:
			return "WAGON04X";
		case -1758092337:
			return "WAGON05X";
		case 1596452133:
			return "CHUCKWAGON000X";
		case -293448458:
			return "WAGONCIRCUS02X";
		case 1761016051:
			return "COACH2";
		case 1192745176:
			return "PRIVATECOALCAR01X";
		case 703203753:
			return "NORTHPASSENGER01X";
		case 89913743:
			return "PRIVATESTEAMER01X";
		case 572854005:
			return "PRIVATEDINING01X";
		case 822759307:
			return "UTILLIWAG";
		case -623113369:
			return "SKIFF";
		case 1493442814:
			return "HANDCART";
		case -397513868:
			return "ROWBOATSWAMP";
		case -258491284:
			return "ROWBOATSWAMP02";
	}
	return "";
}

struct<4> func_1451(var uParam0)
{
	return uParam0->f_152;
}

void func_1452(struct<4> Param0)
{
	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_1569(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1] == Param0 && Global_1946804->f_769[iVar1]->f_2 == Param0.f_2) && Global_1946804->f_769[iVar1]->f_3 == Param0.f_3) && Global_1946804->f_769[iVar1]->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1] == 34 && func_1569(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_1570(Param0);
	*Global_1946804->f_769[Global_1946804->f_854] = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_1483(8);
}

void func_1453(var uParam0)
{
	if (_0x91a5f9cbebb9d936(uParam0->f_9))
	{
		remove_scenario_blocking_area(uParam0->f_9, false);
	}
}

void func_1454(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	if (_0x91a5f9cbebb9d936(uParam0->f_9))
	{
		remove_scenario_blocking_area(uParam0->f_9, false);
	}
	uParam0->f_4 = uParam1;
	iVar0 = 14;
	if (bParam3)
	{
		iVar0 |= 1;
	}
	uParam0->f_9 = _0x4c39c95ae5db1329(uParam1, iParam2, iVar0);
}

bool func_1455(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

struct<8> func_1456(var uParam0)
{
	return uParam0->f_166;
}

struct<8> func_1457()
{
	StringCopy(&cVar0, "MultiStart", 64);
	return cVar0;
}

bool func_1458(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (!func_658(&uParam0))
	{
		return false;
	}
	if (func_774(&uParam0) <= iParam3 + 500)
	{
		return false;
	}
	return true;
}

bool func_1459(float fParam0, float fParam1, bool bParam2)
{
	func_1571(&uVar0, &uVar1, &iVar2, &iVar3, 529461124, 1410914475, -1497929239, 665185216, 2);
	if (!bParam2)
	{
		if (iVar2 != 0 || iVar3 != 0)
		{
			return true;
		}
	}
	if (!func_1281(fParam0, fParam1))
	{
		return true;
	}
	return false;
}

bool func_1460()
{
	if (((((((((((is_control_pressed(0, -1879280170) || is_control_pressed(0, 1537201378)) || is_control_pressed(0, -1175108432)) || is_control_pressed(0, 1520437207)) || is_control_pressed(0, -1292666904)) || is_control_pressed(0, -640622144)) || is_control_pressed(0, -455946723)) || is_control_pressed(0, -1242632265)) || is_control_pressed(0, -485697785)) || is_control_pressed(0, -822242784)) || is_control_pressed(0, 782960533)) || is_control_pressed(0, -874806616))
	{
		return true;
	}
	return false;
}

bool func_1461(vector3 vParam0, float fParam3, float fParam4, bool bParam5, float fParam6)
{
	fVar0 = func_430(Global_35, vParam0, 1);
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

Vector3 func_1462(int iParam0)
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
	return func_1019((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

void func_1463(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (does_entity_exist(&(uParam0->f_13[iVar0])) && &uParam0->f_13[iVar0] == iParam1)
		{
			func_1262(uParam0->f_13[iVar0], iParam2);
		}
		iVar0++;
	}
}

char* func_1464(int iParam0)
{
	switch (iParam0)
	{
		case 225514697:
			return "Arthur";
		case -1464743433:
			return "Abe";
		case 1483156731:
			return "EdmundLowry";
		case -1418951751:
			return "ABERDEENPIGFARMER";
		case 2029634351:
			return "ABERDEENSISTER";
		case -288068792:
			return "AbigailRoberts";
		case 513427234:
			return "AlbertMason";
		case -121985991:
			return "ArchieDown";
		case -205121720:
			return "Baptiste";
		case -77509825:
			return "BartholomewBraithwaite";
		case -55633154:
			return "CS_BEATENUPCAPTAIN";
		case 1266159496:
			return "BeauGray";
		case -2045269112:
			return "PenelopeBraithwaite";
		case 2070393450:
			return "BillWilliamson";
		case 477547053:
			return "BraithwaiteServant";
		case 1382164045:
			return "CatherineBraithwaite";
		case 1407031519:
			return "CharlesSmith";
		case -754733870:
			return "CS_CIGCARDGUY";
		case 1253299569:
			return "CS_DINOBONESLADY";
		case -464684897:
			return "Cleet";
		case -820975767:
			return "ColmODriscoll";
		case -1765531164:
			return "CreoleGuy";
		case -820854800:
			return "SDDoctor_01";
		case 382040614:
			return "DaleMaroney";
		case 1944593012:
			return "Dutch";
		case -450226655:
			return "EdithDown";
		case -1920451728:
			return "Fussar";
		case 1514128030:
			return "cs_fishcollector";
		case -1865855539:
			return "Bronte";
		case -1629501717:
			return "GuidoMartelli";
		case -1208814201:
			return "U_M_M_NBXBRONTEGOON_01";
		case 1478983280:
			return "G_M_M_UNIBRONTEGOONS_01";
		case -1769295812:
			return "GarethBraithwaite";
		case 1020041649:
			return "GenStoryFemale";
		case -639059862:
			return "GenStoryMale";
		case -920985758:
			return "Leon";
		case -1154137714:
			return "GeraldBraithwaite";
		case 1225208808:
			return "HoseaMatthews";
		case 1912073755:
			return "JackMarston";
		case -631664452:
			return "JackMarston_Teen";
		case 4991732:
			return "Jamie";
		case 1843625996:
			return "JavierEscuella";
		case 1815090590:
			return "JimCalloway";
		case -446093729:
			return "Joe";
		case 95866989:
			return "JohnMarston";
		case 2100656433:
			return "CS_JOHNWEATHERS";
		case 1006468445:
			return "JosiahTrelawny";
		case -1707202053:
			return "Karen";
		case 358502875:
			return "MrsAdler";
		case 1939579094:
			return "Kieran";
		case -100461901:
			return "LeoStrauss";
		case 1304311224:
			return "LondonderrySon";
		case -1690877284:
			return "MaryBeth";
		case 1051047356:
			return "MaryLinton";
		case -566878875:
			return "MicahBell";
		case -346700962:
			return "MollyOshea";
		case -272634447:
			return "CS_MrLinton";
		case 984264800:
			return "MrPearson";
		case 1367851675:
			return "MrsLondonderry";
		case -2075588078:
			return "Mud2BigGuy";
		case 2115504616:
			return "ProfessorBell";
		case 1618031732:
			return "RevSwanson";
		case -265719023:
			return "CS_Samaritan";
		case -1483559144:
			return "StrDeputy_01";
		case -572941403:
			return "StrDeputy_02";
		case -2081966149:
		case 2012148102:
			return "StrSheriff_01";
		case 1695129705:
			return "SusanGrimshaw";
		case 1407740785:
			return "TavishGray";
		case 1231309423:
			return "TheodoreLevin";
		case 65010948:
			return "ThomasDown";
		case 1038525765:
			return "Tilly";
		case -969464097:
			return "Uncle";
		case 1057570823:
			return "G_M_M_UniCriminals_01";
		case 347599949:
			return "G_M_M_UNIDUSTER_01";
		case -1884146832:
			return "CS_VALSHERIFF";
		case 826385717:
			return "S_M_M_MARSHALLSRURAL_01";
		case -831368594:
			return "U_M_O_VHTEXOTICSHOPKEEPER_01";
		case -522739022:
			return "Sean";
		case -122790003:
			return "Lenny";
		case 1276534479:
			return "Hercule";
		case -781994133:
			return "CreoleCaptain";
		case -628794682:
			return "U_M_M_CREOLECAPTAIN_01";
		case 1999476738:
			return "RingMaster";
		case -1221341425:
			return "U_M_M_VALBARTENDER_01";
		case -439429058:
			return "A_M_M_EMRFARMHAND_01";
		case -1646366239:
			return "A_M_M_GriSurvivalist_01";
		case 1439158431:
			return "LillyMillet";
		case -1384606398:
			return "A_F_M_STRTOWNFOLK_01";
		case 1127589605:
			return "A_M_M_STRTOWNFOLK_01";
		case 413771941:
			return "S_M_M_STRLUMBERJACK_01";
		case -1990962020:
			return "G_M_M_UniCriminals_02";
		case -1818007055:
			return "G_M_M_UNICORNWALLGOONS_01";
		case 79156795:
			return "A_M_M_NBXUPPERCLASS_01";
		case -1039531072:
			return "A_F_M_NBXUPPERCLASS_01";
		case 525529657:
			return "A_M_M_VALFARMER_01";
		case -2087759666:
			return "A_M_M_VALTOWNFOLK_01";
		case -1789856687:
			return "A_M_M_VALTOWNFOLK_02";
		case -161027961:
			return "A_F_M_VALTOWNFOLK_01";
		case 518339740:
			return "U_M_M_NBXBARTENDER_01";
		case 2041494024:
			return "NBXExecuted";
		case -944019243:
			return "RHODEPUTY_01";
		case -949242502:
			return "RHDSHERIFF_01";
		case -1745321414:
			return "LeighGray";
		case -1038436471:
			return "Horse_01";
		case 273671859:
			return "U_M_M_StrGenStoreOwner_01";
		case -1161832176:
			return "TomDickens";
		case -1632694866:
			return "DavidGeddes";
		case 1446935015:
			return "ANSEL_ATHERTON";
		case -1101883765:
			return "CS_Wrobel";
		case -50684386:
			return "COW";
		case 195700131:
			return "BULL";
		case 686051865:
			return "ALBERTCAKEESQUIRE";
		case 1767420034:
			return "U_M_O_BLWGENERALSTOREOWNER_01";
		case -1033903759:
			return "A_C_DOGCATAHOULACUR_01";
		case 1591685812:
			return "A_C_DOGRUFUS_01";
		case -896926592:
			return "A_C_DOGLION_01";
		case -695175124:
			return "Handler";
		case 1891548111:
			return "VALAUCTIONBOSS_01";
		case -1049237750:
			return "NbxReceptionist_01";
		case -1206299098:
			return "U_M_M_BiVForeman_01";
		case -532378284:
			return "U_M_M_RACFOREMAN_01";
		case -2075028835:
			return "CHAINPRISONER_01";
		case -211291960:
			return "CHAINPRISONER_02";
		case -692960126:
			return "U_M_M_ValPokerPlayer_01";
		case 60202542:
			return "U_M_M_ValPokerPlayer_02";
		case -1614719852:
			return "DUNCANGEDDES";
		case -167880668:
			return "ANGUSGEDDES";
		case 743219360:
			return "EvelynMiller";
		case -2086875988:
			return "SISTERCALDERON";
		case -46607261:
			return "EDGARROSS";
		case 54030454:
			return "U_M_M_GriSurvivalist_01";
		case -378814141:
			return "U_F_M_RKSHOMESTEADTENANT_01";
		case -140869950:
			return "U_F_M_RKSHOMESTEADTENANT_01";
		case 1726657594:
			return "U_M_M_BHT_STRAWBERRYDUEL";
		case 1057932105:
			return "StationWorker";
		case 1294255258:
			return "LEVISIMON";
		case -384354290:
			return "S_M_M_GULFUSSARS_01";
		case 1772321403:
			return "A_C_DONKEY_01";
		case 223197487:
			return "S_M_M_ISPWORKER_01";
		case 355963118:
			return "S_M_M_ISPWORKER_02";
		case -1874017143:
			return "U_M_O_ValBartender_01";
		case 219322615:
			return "U_M_M_NBXBARTENDER_02";
		case -2014377075:
			return "CS_UNIDUSTERJAIL_01";
		case 977834008:
			return "A_M_M_RHDTOWNFOLK_01";
		case 2052768310:
			return "U_M_M_UNIBOUNTYHUNTER_01";
		case -1332334928:
			return "U_M_M_UNIBOUNTYHUNTER_02";
		case 482703333:
			return "BrotherDorkins";
		case 731029607:
			return "G_M_M_UniBraithwaites_01";
		case -1918128574:
			return "A_M_M_GAMHIGHSOCIETY_01";
		case 292812873:
			return "U_M_M_STRFREIGHTSTATIONOWNER_01";
		case -1772051411:
			return "EagleFlies";
		case -2046943672:
			return "CS_RAINSFALL";
		case 830712509:
			return "A_M_M_WapWarriors_01";
		case 264503396:
			return "A_M_Y_NBXSTREETKIDS_01";
		case -2044758506:
			return "U_M_M_BHT_SHACKESCAPE";
		case -1445135526:
			return "A_M_M_HTLROUGHTRAVELLERS_01";
		case 988668512:
			return "LemiuxAssistant";
		case -1608851079:
			return "p_keys01x";
		case 624882545:
			return "CS_BALLOONOPERATOR";
		case -1820002752:
			return "Worker1";
		case 1624257462:
			return "U_M_M_BHT_MINEFOREMAN";
		case 1453686794:
			return "A_M_M_NbxSlums_01";
		case -454661055:
			return "U_M_M_NBXPRIEST_01";
		case -1124266369:
			return "A_C_BEAR_01";
		case 960530301:
			return "MARSHALL_THURWELL";
		case 1347320453:
			return "CS_FAMOUSGUNSLINGER_02";
		case -290265603:
			return "cs_sd_streetkid_01";
		case 1861707396:
			return "cs_sd_streetkid_02";
		case 68512371:
			return "ObediahHinton";
		case 774211111:
			return "PoisonWellShaman";
		case 1923327795:
			return "A_M_M_EMRFARMHAND_01";
		case 722156226:
			return "u_m_m_bht_benedictallbright";
		case -1258801034:
			return "Jules";
		case -1466017978:
			return "MRDEVON";
		case 1101050871:
			return "MRWAYNE";
		case -1135378761:
			return "PAYTAH";
		case 1812458547:
			return "CS_VALDEPUTY_01";
		case 167491564:
			return "MES_SADIE5_MALES_01^1";
		case -310853585:
			return "A_M_M_NBXDOCKWORKERS_01";
		case -1817144219:
			return "U_M_M_VALSHERIFF_01";
		case 1086659483:
			return "S_M_M_BANKCLERK_01";
		case 1112571710:
			return "U_M_M_NBXBRONTEASC_01";
		case -363708904:
			return "P_C_HORSE_01";
	}
	return "";
}

bool func_1465(var uParam0)
{
	Var0 = { func_1273(uParam0) };
	Var8 = { func_1277(uParam0) };
	return are_strings_equal(&Var0, &Var8);
}

bool func_1466(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (iParam0 == get_hash_key(&((*Global_1934603)[iVar0]->f_10)))
		{
			func_1572(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1467(var uParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		return;
	}
	Var0 = { func_1273(uParam0) };
	if ((!are_strings_equal(&Var0, sParam1) && _0xa9016536015de29d(uParam0->f_156, sParam1)) && _0x23e33cb9f4a3f547(uParam0->f_156, sParam1))
	{
		_0xae6ada8fe7e84acc(uParam0->f_156, sParam1);
	}
}

void func_1468(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	if (!does_entity_exist(iParam2))
	{
		return;
	}
	if (iParam3 == 1)
	{
		if (_0x9d1eca9337be9fc3(uParam0->f_156, sParam1))
		{
			iParam3 = 0;
		}
	}
	set_anim_scene_entity(uParam0->f_156, sParam1, iParam2, iParam3);
}

void func_1469(int iParam0)
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

void func_1470(int iParam0, bool bParam1)
{
	iVar0 = (50 * iParam0);
	iVar1 = (iVar0 + get_entity_health(Global_35));
	if (bParam1 && iVar0 < 0)
	{
		_0x835f131e7dc8f97a(Global_35, to_float(iVar0), 0, 0);
	}
	else if (iParam0 <= 0 || iVar1 > get_entity_max_health(Global_35, false))
	{
		_set_entity_health(Global_35, get_entity_max_health(Global_35, false), 0);
	}
	else
	{
		_set_entity_health(Global_35, iVar1, 0);
	}
}

void func_1471(int iParam0)
{
	if (func_1() != -1)
	{
		return;
	}
	if (iParam0 == -1)
	{
		_restore_ped_stamina(Global_35, 100f);
	}
	else
	{
		iVar0 = 8;
		_charge_ped_stamina(Global_35, to_float((iParam0 * iVar0)));
	}
}

void func_1472(bool bParam0, bool bParam1)
{
	iVar2 = 0;
	while (iVar2 < 29)
	{
		iVar4 = iVar2;
		if (get_current_ped_weapon(Global_35, &iVar3, false, iVar4, true))
		{
			if (func_343(iVar3) && _0x705be297eebdb95d(iVar3))
			{
				if (bParam0)
				{
					if (get_ammo_in_ped_weapon(Global_35, iVar3) < _get_weapon_clip_size(iVar3) * 4)
					{
						_add_ammo_to_ped_by_type(Global_35, _get_ammo_type_for_weapon(iVar3), (_get_weapon_clip_size(iVar3) * 4 - get_ped_ammo_by_type(Global_35, get_ped_ammo_type_from_weapon(Global_35, iVar3))), 752097756);
					}
				}
				iVar0 = get_ammo_in_ped_weapon(Global_35, iVar3);
				if (iVar0 > _get_weapon_clip_size(iVar3))
				{
					iVar1 = _get_weapon_clip_size(iVar3);
				}
				else
				{
					iVar1 = iVar0;
				}
				if (iVar1 > 0)
				{
					set_ammo_in_clip(Global_35, iVar3, iVar1);
				}
				iVar1 = 0;
				iVar0 = 0;
			}
		}
		iVar2++;
	}
	if (bParam1 && _0x21091b4beb6376ee(get_player_index()) == 0)
	{
		func_1573(1);
	}
}

void func_1473()
{
	iVar0 = func_349(Global_35, 9, 1, 0);
	if (func_343(iVar0))
	{
		return;
	}
	iVar0 = func_349(Global_35, 7, 1, 0);
	if (func_343(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 8, false, false);
	}
	iVar0 = func_349(Global_35, 0, 1, 0);
	if (func_343(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_349(Global_35, 1, 1, 0);
	if (func_343(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_349(Global_35, 18, 1, 0);
	if (func_343(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1574();
	if (func_343(iVar0))
	{
		if (has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_268(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_1575(6291456, 0);
	if (func_343(iVar0))
	{
		if (!has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_268(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
	}
}

int func_1474()
{
	return Global_1900383->f_393;
}

var func_1475()
{
	return &Global_1899515;
}

void func_1476(var uParam0)
{
	Global_40.f_1095.f_3054.f_2 = uParam0;
}

bool func_1477()
{
	return (func_1576() || func_1577());
}

void func_1478(bool bParam0)
{
	if (bParam0)
	{
		Global_1935436->f_9 = 0f;
	}
	Global_1935436->f_8 = 0f;
	Global_1935436->f_12.f_1 = 0f;
	Global_1935436->f_12 = 0f;
	Global_1935436->f_12.f_3 = 0f;
	Global_1935436->f_12.f_2 = 0f;
	Global_1935436->f_12.f_4 = 0;
	_0x3c4ae8506638c7e2(get_player_index(), 1);
	_0x8f44ebb3ba8f6d44(get_player_index(), 0);
	_0x06d26a96ca1bca75(Global_35, 10, 0f, 0);
	set_ped_is_drunk(Global_35, false);
	_0x406ccf555b04fad3(Global_35, 0, 0f);
	func_1578(0f);
	Global_1935436->f_11 = 1;
	if (func_1511())
	{
		set_ambient_voice_name(Global_35, "ARTHUR");
	}
	else
	{
		set_ambient_voice_name(Global_35, "JOHN_PLAYER");
	}
	if (animpostfx_is_running("PlayerDrunk01"))
	{
		func_1579();
	}
	if (is_gameplay_cam_shaking())
	{
		stop_gameplay_cam_shaking(false);
	}
}

Vector3 func_1479(var uParam0)
{
	return uParam0->f_217;
}

float func_1480(var uParam0)
{
	return uParam0->f_220;
}

float func_1481(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

bool func_1482(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (does_entity_exist(&(uParam0->f_13[iVar0])) && &uParam0->f_13[iVar0] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1483(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_1484(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	iVar2 = func_1489(iParam1, 1);
	if (!bParam2 && iVar2 == 1367443060)
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_1580(iParam4);
		}
		else if (iParam4 != &Global_1946804->f_57[iParam1])
		{
			iVar1 = _get_ped_component_category(iParam4, _get_metaped_type(iParam0), bParam2);
		}
	}
	if (bParam3)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_57[iParam1]->f_1)
		{
			if (&Global_1946804->f_57[iParam1]->f_2[iVar0] != iVar1)
			{
				_0xdf631e4bce1b1fc4(iParam0, &(Global_1946804->f_57[iParam1]->f_2[iVar0]), 0, bParam2);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_57[iParam1]->f_1)
		{
			if (&Global_1946804->f_57[iParam1]->f_2[iVar0] != iVar1)
			{
				_set_ped_component_disabled(iParam0, &(Global_1946804->f_57[iParam1]->f_2[iVar0]), 0);
			}
			iVar0++;
		}
	}
}

bool func_1485(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

bool func_1486(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_1497(iParam0, 1)])->f_10 && iParam1) != 0;
}

bool func_1487(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

void func_1488(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 10;
	if (func_1486(1108822547, 6))
	{
		if (bParam2)
		{
			func_1484(iParam0, iVar0, func_1() != -1, 0, 0);
			func_1490(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		_0xbc6df00d7a4a6819(iParam0, Global_1946804->f_2776.f_1, &(Global_1946804->f_2776.f_3[0]), &(Global_1946804->f_2776.f_3[1]), &(Global_1946804->f_2776.f_3[2]), Global_1946804->f_2776.f_8, Global_1946804->f_2776.f_9, Global_1946804->f_2776.f_10, Global_1946804->f_2776.f_11);
		func_1491(1108822547, 1, 6);
	}
	Global_1946804->f_857++;
	if (!bParam1)
	{
		return;
	}
	_update_ped_variation(iParam0, false, true, true, true, false);
}

int func_1489(int iParam0, int iParam1)
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

void func_1490(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_1497(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_1497(iParam0, 1)])->f_10 || iParam1);
}

void func_1491(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_1497(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_1497(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_1497(iParam0, 1)])->f_10 && iParam1));
}

void func_1492(var uParam0)
{
	uParam0->f_166 = { Var0 };
}

void func_1493(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(uParam0->f_174[iVar0], "", 64);
		iVar0++;
	}
}

void func_1494()
{
	Global_1911774 = 1;
}

void func_1495(bool bParam0)
{
	Global_1935496->f_18 = !bParam0;
}

int func_1496(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_1489(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_1497(int iParam0, int iParam1)
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

bool func_1498(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1581();
	if (iParam2 == 39)
	{
		Var0 = { func_867(iParam0, 1, 0) };
		iParam2 = func_1497(func_1496(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_1430(iParam0, 866047851) && func_1582(&(Global_1946804->f_1378)) >= 2)
	{
		return false;
	}
	if ((func_1485(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2])
	{
		func_1583(func_1489(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_1584(iParam2);
	func_1585(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2] != &Global_1946804->f_57[iParam2] && Global_1946804->f_57[iParam2]->f_1 > 1)
	{
		func_1586(Global_1946804->f_1378.f_1[iParam2], 4, 6);
		func_1586(Global_1946804->f_1497.f_1[iParam2], 4, 6);
	}
	func_1587(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804->f_1378.f_1[iParam2]->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2] = iParam0;
	Global_1946804->f_1378.f_1[iParam2]->f_1 = func_1588(iParam0, iParam2, iParam1, func_1() != -1);
	if (bParam4)
	{
		func_1589(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_1589(&(Global_1946804->f_1378), 1, 0);
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
				func_1491(func_1489(&(Global_1946804->f_2589.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_1499(bool bParam0, bool bParam1, bool bParam2)
{
	func_1590(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

void func_1500(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_1483(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1591(Var0);
}

void func_1501()
{
	func_1592(&(Global_1946804->f_2776));
	func_1593(32768);
	func_1491(1108822547, 8, 6);
}

int func_1502(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_1497(iParam0, 1);
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

void func_1503(int iParam0, int iParam1, int iParam2)
{
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_1452(Var0);
}

void func_1504(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4)
{
	*iParam3 = _get_ped_damage(iParam0);
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

bool func_1505(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = iParam3;
	iVar1 = iParam2;
	if (iVar0 < iVar1)
	{
		iParam2 = iVar0;
	}
	uVar2 = _0x9e7738b291706746(iParam0, iParam1, iParam2);
	return uVar2;
}

int func_1506(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (!_0x9a100f1cf4546629(iParam0) && !_0xc346a546612c49a9(iParam0))
	{
		return 0;
	}
	func_1504(iParam0, &iVar1, &uVar2, &iVar0, &uVar3);
	func_1505(&iVar4, iParam0, iVar0, iVar1);
	if (iVar4 != 0)
	{
		return iVar4;
	}
	switch (iVar0)
	{
		case 2:
			return -776155824;
		case 1:
			return 1715058708;
		case 0:
			return -45650221;
		default:
			break;
	}
	return -45650221;
}

int func_1507(int iParam0)
{
	return func_1594(iParam0);
}

void func_1508(bool bParam0)
{
	func_1595(bParam0);
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

char* func_1509(int iParam0)
{
	if (iParam0 == 255)
	{
		if (func_1596(37, iParam0))
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
	if (func_1596(37, iParam0))
	{
		return _0xd8402b858f4ddd88(&((*Global_1108178)[iParam0]->f_12), get_length_of_literal_string(&((*Global_1108178)[iParam0]->f_12)));
	}
	return get_player_name(&(Global_1225639->f_120[iParam0]));
}

char* func_1510(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_1597(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

bool func_1511()
{
	if (func_1() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

float func_1512(int iParam0)
{
	iParam0 = func_949(iParam0);
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

int func_1513(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_1514(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (func_301(iParam1->f_6))
	{
		if (bParam7 || is_bit_set(*iParam1, 11))
		{
			return;
		}
		func_302(&(iParam1->f_6), 0, 1);
	}
	if (!func_301(iParam1->f_6) && !is_bit_set(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_1383(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_1024(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_301(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_1520(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_1120(iParam1->f_6, 17, 1, 1);
				}
				if (is_bit_set(*iParam1, 1))
				{
					if (is_bit_set(*iParam1, 3))
					{
						func_1598(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_974(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (is_bit_set(*iParam1, 10))
				{
					func_1120(iParam1->f_6, 16, 1, 1);
				}
				if (!is_bit_set(*iParam1, 0) || is_bit_set(*iParam1, 13))
				{
					func_828(iParam1->f_6, 0, 1);
				}
				else
				{
					func_828(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_1515(int iParam0)
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

void func_1516(int* iParam0, int iParam1)
{
	if (!func_977(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_978(iParam0, 14);
		}
	}
}

bool func_1517(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_1518(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

bool func_1519(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

void func_1520(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam3 && !func_301(iParam0))
	{
		return;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = func_594(iParam0);
	func_1120(iParam0, 18, 0, 1);
	func_1120(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = _uiprompt_get_group_id_for_target_entity(iParam1);
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam4, iParam2);
}

bool func_1521(int iParam0, bool bParam1)
{
	if (bParam1 && !func_301(iParam0))
	{
		return false;
	}
	iVar0 = func_594(iParam0);
	return _uiprompt_is_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_1522(int iParam0, bool bParam1)
{
	if (bParam1 && !func_301(iParam0))
	{
		return;
	}
	iVar0 = func_594(iParam0);
	_uiprompt_restart_modes((*Global_1945938)[iVar0]->f_3);
}

void func_1523(int iParam0)
{
	iParam0 = func_949(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_1227(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_1599(iVar6);
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

bool func_1524(int iParam0)
{
	if (!func_1600(iParam0))
	{
		return false;
	}
	if (!func_1601())
	{
		return true;
	}
	return false;
}

void func_1525(int iParam0, int iParam1)
{
	iParam0 = func_949(iParam0);
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

void func_1526(var uParam0)
{
	*uParam0 = -377364164;
	uParam0->f_1 = 357708345;
}

void func_1527(int iParam0, struct<2> Param1)
{
	iParam0 = func_949(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_1602(iParam0, Param1))
	{
	}
	if (!func_1603(iParam0, Param1.f_1))
	{
	}
}

void func_1528(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_1604((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_1529(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 57)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_1530(var uParam0)
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

void func_1531(var uParam0)
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

void func_1532(int iParam0, var uParam1)
{
	iVar0 = 100;
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_1533(int iParam0, var uParam1)
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

void func_1534(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1f;
}

void func_1535(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -15;
}

void func_1536(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
}

int func_1537(int iParam0)
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

void func_1538(int iParam0, int iParam1)
{
	_copy_memory(&(Global_1900383->f_508), Global_40.f_1095.f_1[iParam1], 436);
	_copy_memory(Global_40.f_1095.f_1[iParam1], Global_40.f_1095.f_1[iParam0], 436);
	_copy_memory(Global_40.f_1095.f_1[iParam0], &(Global_1900383->f_508), 436);
}

void func_1539(int iParam0, int iParam1)
{
	_copy_memory(&(Global_1900383->f_463), (*Global_1900383)[iParam1], 45);
	_copy_memory((*Global_1900383)[iParam1], (*Global_1900383)[iParam0], 45);
	_copy_memory((*Global_1900383)[iParam0], &(Global_1900383->f_463), 45);
}

int func_1540(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	Var29.f_9 = -1591664384;
	if (!func_1605(iParam0, &Var0))
	{
		return 0;
	}
	bVar58 = false;
	if (!func_1605(iParam1, &Var29))
	{
		bVar58 = true;
	}
	if (bVar58)
	{
		iVar59 = func_1606(iParam1);
		if (iVar59 == 0)
		{
			return 0;
		}
		if (!func_1607(Var0, Var0.f_5, iVar59, 0, 0))
		{
			return 0;
		}
	}
	else if (!func_1608(Var0, Var29, 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_1541(int iParam0)
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
	if (func_1609(iParam0))
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
	if (func_617(iParam0))
	{
		iVar3 = func_618(iParam0);
		if (func_1610(iVar3))
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

void func_1542(int iParam0)
{
	Global_1900383->f_393 = iParam0;
}

int func_1543(var uParam0, int iParam1, var uParam2)
{
	*uParam0 = 0;
	*iParam1 = 0;
	*uParam2 = 0;
	if (func_1158())
	{
		if (func_1511())
		{
			bVar0 = false;
			if (!func_206((*Global_1835011)[15]->f_1, 1) && !func_1157(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*uParam0 = func_1611();
				*iParam1 = func_1612();
				*uParam2 = func_1613();
				return 1;
			}
			else
			{
				*uParam0 = func_1614();
				*iParam1 = func_1615();
				*uParam2 = func_1616();
				return 1;
			}
		}
		else if (func_1163())
		{
			if (!func_206((*Global_1835011)[60]->f_1, 1))
			{
				*uParam0 = func_1617();
				*iParam1 = func_1618();
				*uParam2 = func_1619();
				return 1;
			}
			else
			{
				*uParam0 = func_1620();
				*iParam1 = func_1621();
				*uParam2 = func_1622();
				return 1;
			}
		}
	}
	else if (func_1511())
	{
		*uParam0 = func_1623();
		*iParam1 = func_1624();
		*uParam2 = func_1625();
		return 1;
	}
	else if (func_1163())
	{
		*uParam0 = func_1626();
		*iParam1 = func_1627();
		*uParam2 = func_1628();
		return 1;
	}
	return 0;
}

void func_1544(int iParam0, var uParam1)
{
	iParam0 = func_949(iParam0);
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

void func_1545(int iParam0, var uParam1)
{
	iParam0 = func_949(iParam0);
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

void func_1546(int iParam0, var uParam1)
{
	iParam0 = func_949(iParam0);
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

void func_1547(int iParam0, int iParam1)
{
	iParam0 = func_949(iParam0);
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

void func_1548(int iParam0, int iParam1)
{
	iParam0 = func_949(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_1411(iParam0);
	if (!is_model_valid(iVar0))
	{
		func_1543(&uVar1, &iVar0, &uVar2);
	}
	iVar3 = get_default_max_attribute_rank(iVar0, 7);
	if (iParam1 > iVar3)
	{
		return;
	}
	fVar4 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iParam1));
	Global_40.f_1095.f_1[iParam0]->f_372 = iParam1;
	Global_40.f_1095.f_1[iParam0]->f_372.f_1 = fVar4;
	func_1629(iParam1);
	iVar5 = func_1227(iParam0);
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

void func_1549(int iParam0, int iParam1)
{
	iParam0 = func_949(iParam0);
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

bool func_1550(int iParam0, var uParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_1605(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = func_1630(Var0, 1415981582, 0);
	if (!func_1153(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_1551(int iParam0, var uParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_1605(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = func_1630(Var0, -2119169513, 0);
	if (!func_1153(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_1552(int iParam0, var uParam1)
{
	if (!func_1631(856287005, iParam0))
	{
		return false;
	}
	Var0 = { func_1632() };
	*uParam1 = func_1630(Var0, iParam0, 0);
	if (!func_1153(*uParam1, 0))
	{
		return false;
	}
	return true;
}

void func_1553(int iParam0)
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
	_0xdf631e4bce1b1fc4(iParam0, -1442703445, 0, false);
	_0xdf631e4bce1b1fc4(iParam0, -1505972720, 0, false);
}

void func_1554(int iParam0, var uParam1)
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
	func_1633(iParam0, *uParam1);
	func_1633(iParam0, uParam1->f_1);
}

void func_1555(int iParam0)
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
	_0xdf631e4bce1b1fc4(iParam0, 399422490, 0, false);
	_0xdf631e4bce1b1fc4(iParam0, -1163401704, 0, false);
	_0xdf631e4bce1b1fc4(iParam0, 88372018, 0, false);
	_0xdf631e4bce1b1fc4(iParam0, -630346294, 0, false);
	_0xdf631e4bce1b1fc4(iParam0, -273475295, 0, false);
	_0xdf631e4bce1b1fc4(iParam0, -2142954459, 0, false);
}

void func_1556(int iParam0, var uParam1)
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
	func_1633(iParam0, *uParam1);
	func_1633(iParam0, uParam1->f_1);
	func_1633(iParam0, uParam1->f_2);
	func_1633(iParam0, uParam1->f_3);
	func_1633(iParam0, uParam1->f_4);
	func_1633(iParam0, uParam1->f_5);
}

int func_1557(int iParam0, int iParam1, bool bParam2)
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

bool func_1558()
{
	return _unlock_is_unlocked(-121456797);
}

void func_1559(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_1169(1356759001) };
	stat_id_set_int(&Var0, iParam0, true);
}

int func_1560(int iParam0)
{
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_1496(iVar0);
}

bool func_1561()
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

bool func_1562(int iParam0, int iParam1)
{
	if (!func_1153(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_1634(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1326("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1327(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_343(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_1328(iVar1);
				return true;
			}
			iVar3++;
		}
		func_1328(iVar1);
	}
	return false;
}

int func_1563(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1153(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_1145(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_1634(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_1635(iParam0, 0);
	}
	uVar2 = _0xe787f05dfc977bde(func_943(bParam2), iParam0, 0);
	return uVar2;
}

int func_1564()
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
		else if ((((is_weapon_valid(iVar0) && _is_weapon_two_handed(iVar0)) && !func_1636(iVar0)) && !_is_ped_getting_into_a_mount_seat(Global_35, true)) && !(is_ped_in_any_vehicle(Global_35, false) && !_0xa24c1d341c6e0d53(1, 0, 0)))
		{
			return 3;
		}
		else if (iVar0 == -160924582)
		{
			return 1;
		}
		else if ((is_weapon_valid(iVar0) && func_1636(iVar0)) || iVar0 == 2055893578)
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

Vector3 func_1565(int iParam0)
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

int func_1566(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return -678244495;
		case 1:
			return -678244495;
		case 2:
			return -678244495;
		case 4:
			return -678244495;
		case 5:
			return -678244495;
		case 6:
			return -678244495;
		case 7:
			return -678244495;
		case 8:
			return -678244495;
		case 9:
			return -678244495;
		case 10:
			return -678244495;
		case 11:
			return -678244495;
		case 12:
			return -678244495;
		case 14:
			return -936216634;
		case 13:
			return -936216634;
		case 15:
			return -936216634;
		case 16:
			return -936216634;
		case 17:
			return -936216634;
		case 18:
			return -936216634;
		case 19:
			return -936216634;
		case 20:
			return 168093330;
		case 21:
			return 168093330;
		case 22:
			return 168093330;
		case 23:
			return 168093330;
		case 24:
			return 168093330;
		case 25:
			return 168093330;
		case 26:
			return 168093330;
		case 28:
			return 168093330;
		case 29:
			return 168093330;
		case 33:
			return 168093330;
		case 34:
			return 168093330;
		case 30:
			return 168093330;
		case 32:
			return 168093330;
		case 31:
			return 168093330;
		case 41:
			return 168093330;
		case 42:
			return 168093330;
		case 35:
			return 168093330;
		case 36:
			return 168093330;
		case 37:
			return 168093330;
		case 38:
			return 168093330;
		case 39:
			return 168093330;
		case 27:
			return 168093330;
		case 45:
			return 168093330;
		case 40:
			return 168093330;
		case 43:
			return 168093330;
		case 44:
			return 168093330;
		case 46:
			return -972966383;
		case 47:
			return -972966383;
		case 48:
			return -972966383;
		case 49:
			return -678244495;
		case 50:
			return -678244495;
		case 51:
			return -678244495;
		case 52:
			return 1560611276;
		case 53:
			return -494978356;
		case 54:
			return -494978356;
		case 55:
			return -494978356;
		case 56:
			return -494978356;
		case 57:
			return -507182222;
		case 58:
			return -1337945352;
		case 59:
			return -678244495;
		case 60:
			return -678244495;
		case 61:
			return -678244495;
		case 62:
			return -383696203;
		default:
			break;
	}
	return 0;
}

int func_1567(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 1243830185;
		case 1:
			return 595820042;
		case 2:
			return -1650465405;
		case 4:
			return 1974815632;
		case 5:
			return 1078668923;
		case 6:
			return 552659337;
		case 7:
			return -1179229323;
		case 8:
			return -1581061148;
		case 9:
			return -48718882;
		case 10:
			return -379108622;
		case 11:
			return 1015604260;
		case 12:
			return 126262516;
		case 14:
			return -997121570;
		case 13:
			return 423351566;
		case 16:
			return -1636832113;
		case 17:
			return 1012165077;
		case 18:
			return -250506368;
		case 19:
			return 2033397166;
		case 20:
			return 1475879922;
		case 21:
			return 531267562;
		case 22:
			return 249721687;
		case 23:
			return -145868367;
		case 24:
			return -1989306548;
		case 25:
			return -1739686743;
		case 26:
			return 1195729388;
		case 28:
			return -758970771;
		case 29:
			return 1542275196;
		case 33:
			return 1861010125;
		case 34:
			return 1475382911;
		case 30:
			return 103490298;
		case 31:
			return -2090472724;
		case 32:
			return -1665418949;
		case 35:
			return -852241114;
		case 36:
			return -1406874050;
		case 37:
			return 1938782895;
		case 38:
			return -1456209806;
		case 39:
			return 469827317;
		case 27:
			return 1879260108;
		case 40:
			return 587827268;
		case 41:
			return 819673798;
		case 42:
			return 819673798;
		case 43:
			return -211556852;
		case 44:
			return 1364029453;
		case 45:
			return -73168905;
		case 46:
			return 1586273744;
		case 47:
			return -1498696713;
		case 48:
			return 1586273744;
		case 49:
			return 503049244;
		case 50:
			return 305594522;
		case 51:
			return -417940443;
		case 52:
			return -1606321000;
		case 53:
			return 1904459580;
		case 54:
			return -1989725258;
		case 55:
			return -487631996;
		case 56:
			return -1944395098;
		case 57:
			return -428972082;
		case 58:
			return 1586273744;
		case 59:
			return -1575595762;
		case 60:
			return -417940443;
		case 61:
			return -417940443;
		case 62:
			return -1258576797;
		default:
			break;
	}
	return 0;
}

char* func_1568(int iParam0)
{
	switch (iParam0)
	{
		case -1698780291:
			return "P_CS_LEDGER01X";
		case -2049014994:
			return "P_CS_ROPE01X";
		case -1005172683:
			return "P_DOOR01X";
		case 325782917:
			return "P_DOOR03X";
		case 430302479:
			return "p_door12x";
		case -1819321039:
			return "P_DOOR13X";
		case -1899748000:
			return "p_door45x";
		case -1734239985:
			return "p_chairvictorian01x";
		case 1561132816:
			return "p_crate03x";
		case -607235640:
			return "p_cs_jug01x";
		case -243150339:
			return "p_cs_wagon02x";
		case -1497029950:
			return "P_DOOR37X";
		case -1957055091:
			return "p_door_val_genstore";
		case -1676410507:
			return "p_doorstrawberry01x";
		case 913112519:
			return "p_doorfrench01l";
		case -1004594895:
			return "p_doorfrench01r";
		case -546124888:
			return "p_doormansiongate01x";
		case 367033685:
			return "p_doornbd39x";
		case -398894636:
			return "p_doorsaloon02x";
		case -882474373:
			return "P_DOORVH_SALOON_L";
		case 376903871:
			return "P_DOORVH_SALOON_R";
		case -447184114:
			return "p_cigarlit01x";
		case -502353725:
			return "p_pebble01x";
		case 1590781012:
			return "p_cs_rope03x";
		case 98154799:
			return "P_CARDS01X";
		case 1834866537:
			return "P_CS_POKERHAND01X";
		case 1770671818:
			return "P_CS_POKERHAND02X";
		case -827620392:
			return "P_CS_HOLDEMHAND01X";
		case 343238651:
			return "P_CS_HOLDEMHAND02X";
		case -197909103:
			return "P_CS_BUCKET01X";
		case 574905658:
			return "p_cs_syringe01x";
		case -1971689092:
			return "p_bottleJD01x";
		case 1085457901:
			return "p_rag02x";
		case 1826097446:
			return "p_magneto02x";
		case -789465252:
			return "p_magneto01x";
		case -238490359:
			return "p_cs_wantedalive01x";
		case -997503794:
			return "P_CS_RCRIDETHELIGHTNING";
		case -1473388640:
			return "p_pen01x";
		case -1135604739:
			return "p_cs_letter01a_x";
		case 201002005:
			return "p_cs_electricchair01x";
		case -451122991:
			return "p_cs_generator01x";
		case -580353882:
			return "p_cs_electricHelmet01x";
		case -330691926:
			return "p_cs_gag01x";
		case -832187622:
			return "p_door_sha_man01x";
		case -2104766853:
			return "p_stool01x";
		case -1937484496:
			return "p_stool02x";
		case -156777810:
			return "p_jugglingball01x";
		case -1025740342:
			return "p_chair02x";
		case 998759471:
			return "p_chair04x";
		case -182450036:
			return "p_crate15x";
		case 539662086:
			return "p_cleaver01x";
		case 401116463:
			return "p_bottle003x";
		case -940999254:
			return "p_cs_book02x";
		case -1502733730:
			return "p_stickydymt_single";
		case -776888393:
			return "p_cs_fusedynamite01x";
		case -1901975761:
			return "p_dynamite01x";
		case 1170245472:
			return "p_cs_fusespool01x";
		case 1996775400:
			return "p_cs_detonator01x";
		case -2058893965:
			return "p_cs_bedrollclsd01x";
		case -967333571:
			return "P_CIGARETTE_CS01X";
		case -1413776846:
			return "P_MATCHES01X";
		case 617552302:
			return "P_MATCHSTICK01X";
		case -1321878957:
			return "P_WOODENCHAIR01X";
		case 1230724566:
			return "P_CHAIR_CRATE02X";
		case 164271545:
			return "p_knittingneedle01x";
		case -458984299:
			return "p_knittingsquare01x";
		case -1055906010:
			return "p_cs_rabbitMeat01x";
		case 622322952:
			return "p_cs_rabbitMeat02x";
		case -890087611:
			return "p_bottle03x";
		case -1281909308:
			return "p_cs_billstack01x";
		case 1711925122:
			return "p_cs_billSingle01x";
		case 2514129:
			return "p_binoculars01x";
		case -1866470762:
			return "p_doorrhosheriff02x";
		case -2021274799:
			return "P_BARSTOOL01X";
		case -491019543:
			return "p_cs_shotglass01x";
		case 1698150819:
			return "p_lamp18x";
		case -1963197288:
			return "p_clock06x";
		case 1527379014:
			return "p_bottle02x";
		case 876316748:
			return "p_cs_lootSack01x";
		case 1767344357:
			return "p_wineBox01x";
		case 822933632:
			return "p_strongBox01x";
		case 1497470487:
			return "P_CLOCKTABLE02X";
		case -1149199295:
			return "p_gen_statue03b";
		case 1186910594:
			return "P_STOOLWINTER01X";
		case 1954479996:
			return "P_CS_BARRAG01X";
		case 2003418568:
			return "P_PLATE01X";
		case 624070311:
			return "P_KNIFE01X";
		case 1547859810:
			return "P_KNIFE02X";
		case -1710894930:
			return "P_CS_CATFISH_WHOLE01X";
		case 431926707:
			return "P_CS_CATFISH_WHOLE01BX";
		case -1419711042:
			return "P_WOODWHITTLE01X";
		case 1810315535:
			return "P_STICKFIREPOKER01X";
		case 266900228:
			return "P_CS_WOODPILE01X";
		case 382293518:
			return "P_FORK01X";
		case 389673974:
			return "P_KNIFE04X";
		case -1874205952:
			return "p_knife03x";
		case 1983379698:
			return "P_CS_BOTTLESLIM01X";
		case 1246822101:
			return "P_CS_BLANKET01X";
		case 1496261474:
			return "P_BEDROLLCLOSED01X";
		case -1342227326:
			return "P_CS_KINDLING01X";
		case -1402507254:
			return "P_CIGARTHIN01X";
		case 1081626861:
			return "p_door_wglass01x";
		case 663716280:
			return "p_broom02x";
		case -969349845:
			return "P_AMB_CLIPBOARD_01";
		case -384257010:
			return "P_CHAIR07X";
		case 628727561:
			return "p_cs_cratetnt01x";
		case -1809617345:
			return "p_cs_flourbag01x";
		case 1521462563:
			return "p_cs_supplies01x";
		case -589352772:
			return "p_cs_supplies02x";
		case 1376394832:
			return "p_cs_supplies03x";
		case -542955242:
			return "p_door04x";
		case -29643421:
			return "p_door11x";
		case -856676249:
			return "p_doorrhosaloon01_l";
		case -1333989503:
			return "p_doorrhosaloon01_r";
		case -1403420972:
			return "P_VAL_GATE2M02X";
		case -1205874435:
			return "P_CS_STMDNKY01X";
		case 2051399415:
			return "P_CS_HOOKPULLEY01X";
		case 1932781590:
			return "P_CHAIR_CS05X";
		case 1489783104:
			return "P_CHAIR_18X";
		case -1581225876:
			return "P_CHAIR19X";
		case -895862876:
			return "P_CHAIR20X";
		case -289651159:
			return "P_CHAIR05X";
		case 1407600554:
			return "p_chair22x";
		case 986312695:
			return "p_glass01x";
		case -93693274:
			return "P_DININGCHAIRS01X";
		case 325252933:
			return "P_WINDSORCHAIR03X";
		case 1328906077:
			return "P_WINDSORCHAIR02X";
		case 1045059103:
			return "p_door_val_jail02x";
		case -155999274:
			return "P_CRATETNT01X";
		case -1956230403:
			return "P_CRATETNT02X";
		case -62869733:
			return "P_MONEYSTACK01X";
		case -422220273:
			return "P_AXE01X";
		case 2065139134:
			return "P_HOE01X";
		case 1170674247:
			return "P_SHOVEL01X";
		case 49937914:
			return "P_SHOVEL04X";
		case -296963090:
			return "P_BROOM01X";
		case -811821899:
			return "P_PITCHFORK01X";
		case 1993810557:
			return "P_SCYTHE01X";
		case 1472170582:
			return "P_SKIFF02x";
		case 673153214:
			return "p_door_nbx_doc01x_l";
		case 132005948:
			return "p_door_nbx_doc01x_r";
		case 1661843942:
			return "p_cs_camera";
		case 1765047802:
			return "p_cs_cameratripod";
		case -1329546951:
			return "p_cs_camerabag01x";
		case -569131374:
			return "p_cameraflash01x";
		case -1509314938:
			return "p_cs_shutterrelease";
		case -397513868:
			return "rowboatswamp";
		case -1399874861:
			return "P_CHAIR25X";
		case 1064769829:
			return "P_DOORBRAIT01BX";
		case -50604564:
			return "P_CS_MAP01X";
		case 1058703817:
			return "p_hammer03x";
		case -238593141:
			return "p_cs_nailbarrel01x";
		case 1210783447:
			return "p_cs_book04x";
		case -2118240499:
			return "p_cs_Fan01x";
		case -862949069:
			return "p_cs_ledgerSmall01x";
		case -1311208351:
			return "p_cs_envelope01x";
		case 826392697:
			return "p_wrappedmeat01x";
		case 1455710720:
			return "P_CS_LETTER02X";
		case -2102031605:
			return "p_cs_book03x";
		case 1955831280:
			return "p_cs_giftBox01x";
		case 305182125:
			return "p_boiler01x";
		case 888504590:
			return "p_boiler02x";
		case -82199229:
			return "p_mugCoffee01x";
		case -1174489568:
			return "p_glasstallbeer01x";
		case 1022056778:
			return "p_pitcher02x";
		case 155128635:
			return "p_tray03x";
		case 1971611315:
			return "p_sit_chairwicker01b";
		case -449688053:
			return "S_INV_ORLEANDER01CX";
		case -703216761:
			return "S_INV_ORLEANDER01DX";
		case -1700686082:
			return "P_LADLE02X";
		case -889047922:
			return "P_CS_POT01X";
		case 519549403:
			return "P_CHAIRDINING03X";
		case -755866836:
			return "P_SPOON01X";
		case 196631385:
			return "P_BOWL03X";
		case -569447711:
			return "P_CS_BRIDECATALOGUE01X";
		case -535756918:
			return "P_JEWELRYBOX02BX";
		case 2044431266:
			return "P_CS_LETTERFOLDED01X";
		case -583569159:
			return "P_CS_ARTHURHAT01X";
		case 578898429:
			return "P_OAR03X";
		case -765914358:
			return "P_DOOR_VAL_BANKVAULT";
		case -1190396102:
			return "P_DOOR_COMBANK01X";
		case -436606401:
			return "P_CS_DONATION01X";
		case 1592327736:
			return "p_door_nbx_bank03x_R";
		case -1006516120:
			return "p_door_nbx_bank03x_L";
		case -1078696833:
			return "p_camp_plate_02x";
		case -974192123:
			return "p_stewplate02x";
		case 120221819:
			return "p_cs_log01x";
		case -1814268450:
			return "p_ndb_hotelplank01x";
		case 314775562:
			return "p_glass06x";
		case -1594634038:
			return "p_cs_rag01x";
		case 819493639:
			return "p_inkwell01x";
		case -548150401:
			return "p_cigar02x";
		case 1843407141:
			return "p_bottleBeer01x";
		case -1883578190:
			return "p_beermugglass01x";
		case 851401507:
			return "p_nutBowl01x";
		case 1610236838:
			return "p_cs_sacklarge01x";
		case 633326690:
			return "p_cs_dressbox01x";
		case -300816757:
			return "p_bell05x";
		case 342335375:
			return "p_woodendeskchair01x";
		case -1443906703:
			return "p_chair06x";
		case -1031399461:
			return "p_jug01x";
		case -1907186363:
			return "S_INV_MEDICINE01X";
		case 2067968977:
			return "S_INV_MEDICINE_FTY";
		case -434431529:
			return "S_INV_Milkweed01bx";
		case -2051048367:
			return "p_bottleslim01x";
		case 1267814678:
			return "p_cs_journal01x";
		case -503626004:
			return "p_mortarpestle02x";
		case 197307092:
			return "s_inv_burdock01dx";
		case 604616887:
			return "p_cs_ropeLegSplit";
		case 2038507899:
			return "p_cs_ropeHandsSplit";
		case 388126459:
			return "p_fishingpole01x";
		case -1367341904:
			return "P_FISHINGPOLE02X";
		case -1629442620:
			return "p_cs_flowernecklace";
		case -475791515:
			return "P_CS_FLOWERS01X";
		case -1018099626:
			return "s_inv_yarrow01cx";
		case 1210527888:
			return "P_CS_FISHINGPOLEBAG01X";
		case 1785480577:
			return "P_STICK02X";
		case 1789147356:
			return "P_CS_SOCK01X";
		case 169503210:
			return "P_DOOR_VAL_BANK00_RX";
		case 160636303:
			return "P_DOOR_VAL_BANK00_RX";
		case -1456646750:
			return "p_can10x";
		case 1010765128:
			return "p_cs_rabbitgut";
		case -142576910:
			return "p_cs_rabbitheadless";
		case 2055623882:
			return "p_cs_rabbitfeetless";
		case -808559472:
			return "p_kettle03x";
		case -804436865:
			return "s_che_woodbin01x";
		case 1833396091:
			return "s_lootablepoorcase";
		case -1494278633:
			return "P_CS_BOOKHARDCV01X";
		case -1643891339:
			return "P_LETTERBUNDLE_01X";
		case -459043872:
			return "P_LETTERENVELOPE_CS01X";
		case 1825744405:
			return "P_PACKAGE08X";
		case 1713200946:
			return "P_CIGARBOX02X";
		case 1663122464:
			return "p_crucifix02x";
		case 934706428:
			return "p_bottleCrate01x";
		case -554014433:
			return "p_can05x";
		case -1682372069:
			return "p_cs_suitcase04x";
		case 69604629:
			return "p_cs_bagstrauss01x";
		case 29998454:
			return "P_BOTTLE008X";
		case 161697289:
			return "P_BOTTLE009X";
		case 1045394246:
			return "P_BOTTLE010X";
		case 1623781586:
			return "p_pocketMirror01x";
		case -1671495534:
			return "P_CIGARETTE01X";
		case 1207272102:
			return "P_TRAVELTRUNK02X";
		case -294963065:
			return "P_CHAIRWHITE01X";
		case -1947027049:
			return "P_JOURNAL_OPEN01X";
		case -1945229292:
			return "p_table42_cs";
		case -1028267229:
			return "p_cs_newspaper_02x";
		case -1537933036:
			return "P_CS_POTATOSLICE01X";
		case -1035439448:
			return "S_APLSD_LOG";
		case 1410968406:
			return "S_APLSD_HRSATT";
		case -1216485179:
			return "p_spittoon01x";
		case 787211696:
			return "p_woodbowl01x";
		case -1167561544:
			return "p_pencil01x";
		case 1467658477:
			return "P_SPOONMID01X";
		case -624124479:
			return "P_PAN01X";
		case 1211525499:
			return "P_Pipe01x";
		case 666597548:
			return "p_cs_railroadbond01x";
		case -989609930:
			return "p_sharpeningstone01x";
		case 1540392720:
			return "p_treestump02x";
		case -1638036806:
			return "p_plate17x";
		case -1566727213:
			return "p_cs_newspaper_01x";
		case 1783964157:
			return "p_sadiehat01x";
		case -1093732866:
			return "p_door_bla_jail_l_01x";
		case 784094203:
			return "p_door_bla_jail_r_01x";
		case 441245663:
			return "p_mashedPotato02x";
		case 2064348393:
			return "p_cs_bookHardCv08x";
	}
	return "";
}

bool func_1569(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_1570(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

void func_1571(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	*uParam0 = floor((get_control_normal(iParam8, iParam4) * 127f));
	*uParam1 = floor((get_control_normal(iParam8, iParam5) * 127f));
	*iParam2 = floor((get_control_normal(iParam8, iParam6) * 127f));
	*iParam3 = floor((get_control_normal(iParam8, iParam7) * 127f));
}

void func_1572(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 10)
	{
		return;
	}
	if (is_string_null_or_empty(&((*Global_1934603)[iParam0]->f_10)))
	{
		return;
	}
	*(*Global_1934603)[iParam0] = { Var0 };
	Global_1934603->f_161 = (Global_1934603->f_161 - 1);
	if (Global_1934603->f_161 < 0)
	{
		Global_1934603->f_161 = 0;
	}
}

void func_1573(int iParam0)
{
	_0x51345ae20f22c261(player_id(), to_float(iParam0 * 14), 0, 0, 0);
}

int func_1574()
{
	if (!func_343(Global_1935630->f_45))
	{
		return -1569615261;
	}
	return Global_1935630->f_45;
}

int func_1575(int iParam0, int iParam1)
{
	return func_1637(&uVar0, iParam0, iParam1);
}

bool func_1576()
{
	return &Global_1935436 == 1;
}

bool func_1577()
{
	return &Global_1935436 == 2;
}

void func_1578(float fParam0)
{
	func_1638(10, fParam0);
}

void func_1579()
{
	animpostfx_stop("PlayerDrunk01");
	Global_1935436->f_12 = 0f;
}

int func_1580(int iParam0)
{
	iVar0 = func_944(iParam0);
	switch (iVar0)
	{
		case -2061583405:
			return -1725579161;
		case -525676072:
			return 1249071452;
		default:
			break;
	}
	return 0;
}

void func_1581()
{
	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		iVar0++;
	}
}

int func_1582(var uParam0)
{
	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_1430(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_1430(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_1430(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_1430(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_1430(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_1430(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

void func_1583(int iParam0)
{
	func_1491(iParam0, 8, 6);
}

void func_1584(int iParam0)
{
	func_1639(&(Global_1946804->f_2589), iParam0);
}

void func_1585(int iParam0, int iParam1)
{
	func_1640(&(Global_1946804->f_2589), iParam0, iParam1);
}

void func_1586(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_1587(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_944(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1487(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1585(iVar1, iVar3);
		}
	}
	if (func_1641(-1586649372) && func_1487(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1585(iVar1, iVar3);
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
						func_1585(iVar1, iVar3);
					}
				}
			}
			func_1642(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1642(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_1585(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_1642(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_1585(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_1585(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_1642(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_1642(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_1585(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_1642(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_1585(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1585(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_944(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1585(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_1643(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_944(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1585(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_1430(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1585(iVar1, iVar3);
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
						func_1585(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_1643(&(Global_1946804->f_1497.f_1[iVar1])) || func_1430(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1585(iVar1, iVar3);
					}
				}
			}
			switch (func_944(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_944(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1585(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_944(&(uParam0->f_1[iVar1])) || func_1430(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1585(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_1588(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = func_1644(0);
	if (iParam2 != 0 && func_1645(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_1646(iParam0, func_1489(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_1589(var uParam0, bool bParam1, int iParam2)
{
	bVar6 = func_1() != -1;
	iVar7 = func_1644(0);
	if (func_1485(32768))
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
			iVar5 = func_1489(iVar0, 1);
			if (func_1486(iVar5, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
			{
			}
			else if (func_1486(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
			{
			}
			else
			{
				iVar4 = func_1647(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_1648(uParam0);
				if (iVar3 > 0)
				{
					if (!func_1485(524288))
					{
						func_1483(524288);
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
							iVar5 = func_1489(iVar0, 1);
							if (func_1486(iVar5, 8))
							{
							}
							else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
							{
							}
							else if (func_1486(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
							{
							}
							else
							{
								iVar4 = func_1647(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0] = &Global_1946804->f_57[iVar0];
									uParam0->f_1[iVar0]->f_1 = 0;
									if (bParam1)
									{
										func_1585(iVar0, iParam2);
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
					func_1593(524288);
				}
			}
		}
	}
}

void func_1590(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1649(&(uParam0->f_2[iVar0]), bParam1, bParam2);
		iVar0++;
	}
	if (func_1() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_1650(2, Global_26796.f_776)) || Global_1946804->f_1497 != func_1651(0))
		{
			if (Global_40.f_7157[Global_40.f_7729] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729] = (&Global_40.f_7157[Global_40.f_7729] - Global_40.f_7157[Global_40.f_7729] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729] |= 4096;
				Global_1946804->f_1497 = func_1651(Global_40.f_7729);
				Global_1946804->f_1378 = func_1651(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_1652(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_1653(0, 1);
	}
}

void func_1591(struct<4> Param0)
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
			if (func_1569(Param0))
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
			func_1570(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_1483(8);
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
			if (func_1569(Param0))
			{
				return;
			}
			func_1570(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_1483(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_1503(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

void func_1592(var uParam0)
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

void func_1593(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

int func_1594(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1391860027;
		case 3:
			return -2049683567;
		case 4:
			return -1639750081;
		case 6:
			return -543306319;
		case 7:
			return 93160283;
		case 8:
			return -1838611891;
		case 1:
			return 1619762084;
		case 2:
			return -2104053099;
		case 9:
			return -1431073983;
		case 10:
			return 887432345;
		case 11:
			return -238320361;
		case 26:
			return -1433937760;
		case 27:
			return -681691620;
		case 28:
			return -706234936;
		case 29:
			return -282099500;
		case 30:
			return 1450105278;
		case 31:
			return -732027686;
		case 5:
			return 379756162;
		case 15:
			return 2128397741;
		case 17:
			return -924263120;
		case 33:
			return 1915478031;
		case 12:
			return -1775364220;
		case 13:
			return -1504845897;
		case 14:
			return -1227686818;
		case 18:
			return 1442571063;
		case 19:
			return -997221403;
		case 22:
			return 285759500;
		case 20:
			return 1489861748;
		case 32:
			return -2132712788;
		case 34:
			return 1427539511;
		case 23:
			return -967055532;
		case 24:
			return 662159626;
		case 25:
			return 1743191502;
		case 21:
			return -830712656;
		default:
			break;
	}
	return 0;
}

void func_1595(bool bParam0)
{
	_0xb6fd96420c0126a1(-1056478928, bParam0);
}

bool func_1596(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_1654(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_1655())
	{
		return func_1654(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_1654(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

char* func_1597(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

void func_1598(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (bParam4 && !func_301(iParam0))
	{
		return;
	}
	iVar0 = func_594(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(10, sParam1, sParam2, sParam3));
}

int func_1599(int iParam0)
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

bool func_1600(int iParam0)
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

bool func_1601()
{
	return _unlock_is_unlocked(99890643);
}

bool func_1602(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_1605(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { func_871(iParam1, Var0, 1415981582, 0) };
	return func_1656(Var29, 1);
}

bool func_1603(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_1605(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { func_871(iParam1, Var0, -2119169513, 0) };
	return func_1656(Var29, 1);
}

void func_1604(var uParam0)
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

bool func_1605(int iParam0, var uParam1)
{
	if (!func_1657(iParam0))
	{
		return false;
	}
	iVar0 = func_1606(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1.f_9 = -1591664384;
	Var15 = { func_1144(0) };
	if (!func_1658(Var15, iVar0, &Var1, 0, 0))
	{
		return false;
	}
	if (!func_1659(&Var1, uParam1))
	{
		return false;
	}
	return true;
}

int func_1606(int iParam0)
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

bool func_1607(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10)
{
	if (!func_873(bParam10))
	{
		return func_1660(Param0, Param4, iParam8, 1, bParam9, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1150(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (func_1661(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return true;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, iParam8))
	{
		return false;
	}
	if (!_0xdccaa7c3bfd88862(func_943(0), &Param0, &Param4, iParam8, Var0.f_11, &Var14))
	{
		return false;
	}
	if (bParam9)
	{
		if (!func_1656(Var14, 1))
		{
		}
	}
	return true;
}

bool func_1608(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	if (!func_873(bParam9))
	{
		return func_1662(Param0, Param4, iParam8, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return false;
	}
	if (func_1661(&Param0, &Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_1150(Param0, &Var0, bParam9, 1) || !func_1150(Param4, &Var14, bParam9, 1))
	{
		return false;
	}
	if (func_1661(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return false;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, Var14.f_9) || !_inventory_fits_slot_id(Var14.f_4, Var0.f_9))
	{
		return false;
	}
	iVar28 = func_943(0);
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

bool func_1609(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_1663(get_entity_model(iParam0)))
	{
		return true;
	}
	if (decor_exist_on(iParam0, "HorseCompanion"))
	{
		return true;
	}
	return false;
}

bool func_1610(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 5)
	{
		return true;
	}
	return false;
}

int func_1611()
{
	return 1342496140;
}

int func_1612()
{
	return 446670976;
}

int func_1613()
{
	return 1;
}

int func_1614()
{
	return -868094182;
}

int func_1615()
{
	return 1074477367;
}

int func_1616()
{
	return 1;
}

int func_1617()
{
	return -997197050;
}

int func_1618()
{
	return -2063289686;
}

int func_1619()
{
	return 2;
}

int func_1620()
{
	return -868094182;
}

int func_1621()
{
	return 1074477367;
}

int func_1622()
{
	return 1;
}

int func_1623()
{
	return 1235275977;
}

int func_1624()
{
	return 2030804811;
}

int func_1625()
{
	return 1;
}

int func_1626()
{
	return 1974379573;
}

int func_1627()
{
	return 2024948086;
}

int func_1628()
{
	return 1;
}

void func_1629(int iParam0)
{
	if (func_1664() < iParam0)
	{
		func_1665(iParam0);
	}
}

int func_1630(struct<4> Param0, int iParam4, int iParam5)
{
	Var0.f_9 = -1591664384;
	if (func_1666(Param0, iParam4, &Var0, iParam5))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_1631(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		iVar5 = func_944(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_1667(iParam0);
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

struct<4> func_1632()
{
	Var0 = { func_1144(0) };
	return func_871(856287005, Var0, -218846335, 0);
}

void func_1633(int iParam0, int iParam1)
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

int func_1634(int iParam0, int iParam1)
{
	if (!func_1153(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_1145(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_1430(iParam0, 1399091007))
	{
		func_1668(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_1635(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_1669(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1670(&Var0, func_1146(0));
	}
	if (!func_1671(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_1328(iVar14);
	return uVar15;
}

bool func_1636(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

int func_1637(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_342(iParam1, 128);
	if (func_1326("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		Var23.f_9 = -1591664384;
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1327(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_343(Var4.f_4))
			{
			}
			else if (!_0x705be297eebdb95d(Var4.f_4) && !_is_weapon_bow(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!func_342(iParam1, 512) && func_1152(Var4.f_4, &uVar19, &Var23, 1728382685)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || _0xf29a186ed428b552(Global_35, Var4.f_4))
			{
				if ((((((_is_weapon_two_handed(Var4.f_4) || func_1636(Var4.f_4)) && (!_is_weapon_shotgun(Var4.f_4) || func_342(iParam1, 16))) && (!_is_weapon_sniper(Var4.f_4) || func_342(iParam1, 4))) && (!func_1636(Var4.f_4) || func_342(iParam1, 8))) && (!_is_weapon_repeater(Var4.f_4) || !func_342(iParam1, 8388608))) && (!_is_weapon_rifle(Var4.f_4) || !func_342(iParam1, 1048576)))
				{
					if (iVar0 == 0 || _0xa2091482ed42ef85(Global_35, &Var4) > _0xa2091482ed42ef85(Global_35, uParam0))
					{
						iVar0 = Var4.f_4;
						*uParam0 = { Var4 };
					}
				}
			}
			iVar3++;
		}
		func_1328(iVar1);
	}
	if (is_weapon_valid(iVar0))
	{
	}
	else if (!func_342(iParam1, 512) && !func_342(iParam1, 1024))
	{
		iParam1 |= 512;
		return func_1637(uParam0, iParam1, iParam2);
	}
	else if (func_342(iParam1, 256))
	{
		iVar0 = -1569615261;
	}
	return iVar0;
}

void func_1638(int iParam0, float fParam1)
{
	Global_40.f_11095.f_11[iParam0] = fParam1;
	if (iParam0 == 12)
	{
		bVar1 = fParam1 != 0f;
		sVar2 = func_791(fParam1 < 0f, "rpg_cold", "rpg_hot");
		func_1672(1, bVar1, 1, sVar2);
		func_1673(!bVar1, fParam1 < 0f, bVar1);
		iVar0 = func_1674(ceil(&(Global_40.f_11095.f_11[iParam0])));
		set_attribute_points(Global_35, iParam0, iVar0);
		func_1675();
	}
	else if (iParam0 == 10)
	{
		iVar0 = func_1674(ceil(&(Global_40.f_11095.f_11[iParam0])));
		set_attribute_points(Global_35, iParam0, iVar0);
	}
	else if (iParam0 == 16)
	{
		iVar0 = func_1674(ceil(&(Global_40.f_11095.f_11[iParam0])));
		set_attribute_points(Global_35, iParam0, iVar0 * 100);
	}
	else if (iParam0 == 13)
	{
	}
}

void func_1639(var uParam0, int iParam1)
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
			if ((func_1676(uParam0->f_2[iVar0], 2) || &uParam0->f_2[iVar0] == iParam1) || &uParam0->f_2[iVar0] == 39)
			{
				*uParam0->f_2[iVar0] = { Var2 };
			}
			else
			{
				if (func_1676(uParam0->f_2[iVar0], 1))
				{
					func_1677(uParam0->f_2[iVar0], 2, 6);
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

void func_1640(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_1678(uParam0, 1))
	{
		func_1679(uParam0, 1);
	}
	uParam0->f_2[*uParam0]->f_1 = iParam2;
	uParam0->f_2[*uParam0] = iParam1;
	*uParam0++;
}

bool func_1641(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_1497(iParam0, 1)] != &Global_1946804->f_57[func_1497(iParam0, 1)];
}

void func_1642(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_1585(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_1585(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2]->f_1 == -1333118809 || uParam0->f_1[iVar2]->f_1 == -1158926300)
	{
		uParam0->f_1[iVar2]->f_1 = 1155669136;
		if (bParam3)
		{
			func_1585(iVar2, iVar0);
		}
	}
}

bool func_1643(int iParam0)
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

int func_1644(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_1680();
	}
	iVar0 = 0;
	if (iParam0 == 24043185)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_1645(int iParam0, int iParam1, int iParam2, bool bParam3)
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

bool func_1646(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

int func_1647(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam0 == &Global_1946804->f_57[func_1497(iParam1, 1)])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_1485(524288))
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

int func_1648(var uParam0)
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

void func_1649(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*Global_1946804->f_1497.f_1[iParam0] = { *Global_1946804->f_1378.f_1[iParam0] };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_1() == -1)
	{
		func_1681(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_26796.f_776);
	}
	else
	{
		func_1682(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

bool func_1650(int iParam0, int iParam1)
{
	if (func_1() == -1)
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

int func_1651(int iParam0)
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

void func_1652(int iParam0, bool bParam1, int iParam2)
{
	func_1683(&(Global_1946804->f_1378), iParam0);
	func_1684(2, iParam0, 6);
	if (bParam1)
	{
		func_1653(0, 1);
	}
}

void func_1653(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1685(0);
	}
	if (bParam0)
	{
		func_1483(8);
		func_1483(512);
	}
	else
	{
		func_1483(8);
		func_1483(16);
	}
}

bool func_1654(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_1655()
{
	return Global_1109400->f_245;
}

bool func_1656(struct<4> Param0, int iParam4)
{
	if (!func_873(0))
	{
		return func_1686(Param0, iParam4, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1150(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!_0x734311e2852760d0(func_943(0), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_1657(int iParam0)
{
	iVar0 = func_1606(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1 = { func_1144(0) };
	if (func_1687(&Var1, iVar0, 0) > 0)
	{
		return true;
	}
	return false;
}

bool func_1658(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	iVar0 = func_943(bParam7);
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

bool func_1659(var uParam0, var uParam1)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (!_0x025a1b1fb03fbf61(func_943(0), uParam0, uParam1, 29, 1))
	{
		return false;
	}
	return true;
}

int func_1660(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10, bool bParam11)
{
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	if (!func_1150(Param0, &Var0, 1, 0))
	{
		return -1;
	}
	if (func_1661(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return -1;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, iParam8))
	{
		return -1;
	}
	iVar14 = func_1151(Var0.f_4, Param4, iParam8, 0);
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
	Var16 = { func_1688(&Var0) };
	Var16.f_4 = { Param4 };
	Var16.f_11 = iParam8;
	Var16.f_10 = bParam10;
	iVar32 = func_1689(1168099063, &Var16, bParam9);
	if (iVar32 == -1)
	{
		return -1;
	}
	return iVar32;
}

bool func_1661(var uParam0, bool bParam1)
{
	if (((*uParam0 == *bParam1 && uParam0->f_1 == bParam1->f_1) && uParam0->f_2 == bParam1->f_2) && uParam0->f_3 == bParam1->f_3)
	{
		return true;
	}
	return false;
}

int func_1662(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return -1;
	}
	if (func_1661(&Param0, &Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_1150(Param0, &Var0, 1, 0) || !func_1150(Param4, &Var14, 1, 0))
	{
		return -1;
	}
	if (func_1661(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return -1;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, Var14.f_9) || !_inventory_fits_slot_id(Var14.f_4, Var0.f_9))
	{
		return -1;
	}
	Var28 = { func_1688(&Var0) };
	Var28.f_4 = { Var14.f_5 };
	Var28.f_11 = Var14.f_9;
	Var28.f_10 = (Var14.f_10 || iParam8);
	Var44 = { func_1688(&Var14) };
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
					func_1690(iVar60, 1);
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
		iVar60 = func_1689(1168099063, &Var28, 0);
		iVar60 = func_1689(1168099063, &Var44, 0);
	}
	return iVar60;
}

bool func_1663(int iParam0)
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

int func_1664()
{
	return Global_40.f_1095.f_3135;
}

void func_1665(int iParam0)
{
	Global_40.f_1095.f_3135 = iParam0;
}

bool func_1666(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x22e590f108289a9d(func_943(bParam6), &uParam0, iParam4, &Var0))
	{
		return false;
	}
	if (!func_1150(Var0, uParam5, bParam6, 0))
	{
		return false;
	}
	return true;
}

int func_1667(int iParam0)
{
	if (!func_1153(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_944(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return _item_database_get_has_slot_count(iVar0);
}

void func_1668(int iParam0, var uParam1, var uParam2)
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

struct<14> func_1669(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_1670(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_1671(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_943(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

void func_1672(int iParam0, bool bParam1, bool bParam2, char* sParam3)
{
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_8, bParam1);
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_7, bParam2);
	_databinding_write_data_string(Global_1955569->f_5.f_2[iParam0]->f_9, sParam3);
}

void func_1673(bool bParam0, bool bParam1, bool bParam2)
{
	sVar0 = func_1691(0, 1, bParam0, bParam1);
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

int func_1674(int iParam0)
{
	fVar0 = (to_float(iParam0 + 100) / 200f);
	return ceil((100f * fVar0));
}

void func_1675()
{
	func_1692();
	func_1693();
	func_1694();
}

bool func_1676(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1677(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_1678(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1679(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

int func_1680()
{
	return Global_1946804->f_1;
}

void func_1681(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_1682(var uParam0, int iParam1, int iParam2)
{
	*Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_1683(var uParam0, int iParam1)
{
	if (func_1() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1]->f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_1681(uParam0->f_1[iVar0], iVar0, iParam1);
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
		func_1682(uParam0->f_1[iVar0], iVar0, iParam1);
		iVar0++;
	}
}

void func_1684(int iParam0, int iParam1, int iParam2)
{
	if (func_1() == -1)
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

void func_1685(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

int func_1686(struct<4> Param0, int iParam4, bool bParam5)
{
	iVar0 = -1;
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_1150(Param0, &Var1, 1, 0))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_1145(Var1.f_4);
	if (iVar15 == -1784221369)
	{
		Var16 = { func_1695(Param0, 1) };
		Var16.f_10 = iParam4;
		iVar0 = func_1696(-1230526146, &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -1037537535)
	{
		Var44 = { func_1697(Param0, 1) };
		Var44.f_10 = iParam4;
		iVar0 = func_1698(-1230526146, &Var44, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var61 = { func_1688(&Var1) };
		Var61.f_10 = iParam4;
		iVar0 = func_1689(-1230526146, &Var61, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_1687(var uParam0, int iParam1, bool bParam2)
{
	return _0x033ee4b89f3ac545(func_943(bParam2), uParam0, iParam1);
}

struct<16> func_1688(var uParam0)
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

int func_1689(int iParam0, var uParam1, bool bParam2)
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
					func_1690(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_1690(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16))
	{
		func_1690(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_1690(int iParam0, int iParam1)
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
	func_1699(iParam0, iParam1);
}

char* func_1691(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_791(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_791(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

float func_1692()
{
	if (func_1700())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_1701(2);
	}
	if (Global_1347477->f_119)
	{
		return func_1701(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1702();
	fVar2 = func_1703();
	fVar3 = func_1704();
	fVar4 = func_1705();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1706()));
	fVar7 = (func_1701(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1707(3, round((to_float(iVar8) * fVar10)), 0);
	func_1708(3, fVar9, fVar9 > 100f);
	return func_1709(fVar7, -100f, 100f);
}

float func_1693()
{
	if (func_1700())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_1701(1);
	}
	if (Global_1347477->f_119)
	{
		return func_1701(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1702();
	fVar2 = func_1703();
	fVar3 = func_1704();
	fVar4 = func_1705();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1706()));
	fVar7 = (func_1701(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1707(2, round((to_float(iVar8) * fVar10)), 0);
	func_1708(2, fVar9, fVar9 > 100f);
	return func_1709(fVar7, -100f, 100f);
}

float func_1694()
{
	if (func_1700())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_1701(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1710())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1711())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_1701(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1702();
	fVar2 = func_1703();
	fVar3 = func_1704();
	fVar4 = func_1705();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1706()));
	fVar7 = (func_1701(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1707(1, round((to_float(iVar8) * fVar10)), 0);
	func_1708(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_1701(0);
	}
	return func_1709(fVar7, -100f, 100f);
}

struct<28> func_1695(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var28.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_943(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_1688(&Var28) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_1696(int iParam0, var uParam1, bool bParam2)
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
					func_1690(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_1690(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 28))
	{
		func_1690(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<17> func_1697(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_943(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_1688(&Var17) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_1698(int iParam0, var uParam1, bool bParam2)
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
					func_1690(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_1690(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 17))
	{
		func_1690(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_1699(int iParam0, int iParam1)
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

bool func_1700()
{
	if (Global_1572887->f_12 != -1)
	{
		return false;
	}
	return Global_1347477->f_203;
}

float func_1701(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

float func_1702()
{
	fVar0 = func_1712(13);
	iVar1 = func_1713(fVar0);
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

float func_1703()
{
	if (is_ped_on_mount(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_1704()
{
	if (func_1558())
	{
		if (_get_special_edition_core_stats_bonus_enabled())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_1705()
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

float func_1706()
{
	return Global_1955565->f_3;
}

void func_1707(int iParam0, char* sParam1, bool bParam2)
{
	sVar0 = func_1691(iParam0, 1, 0, 0);
	sVar0 = _create_var_string(2, sVar0, sParam1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[1]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[1]), bParam2);
}

void func_1708(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_1691(iParam0, 2, 0, 0);
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

float func_1709(float fParam0, float fParam1, float fParam2)
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

bool func_1710()
{
	return func_1712(12) <= -99f;
}

bool func_1711()
{
	return func_1712(12) >= 99f;
}

float func_1712(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

int func_1713(float fParam0)
{
	return round(((fParam0 / 100f) * to_float(10)));
}

