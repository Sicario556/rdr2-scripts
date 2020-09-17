void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	fLocal_210 = 15f;
	Local_1617.f_136 = 0;
	Local_1617.f_137 = uVar2253;
	Local_1617.f_138 = 807;
	if (func_1() != 0)
	{
	}
	else
	{
		func_2();
		func_3(Local_1617.f_136);
		return;
	}
	iLocal_98 = func_4(Local_1617.f_136);
	if (func_5(Local_1617.f_136, 536870912))
	{
		func_8(&(Global_40.f_9096[Local_1617.f_136]->f_6), func_7(func_6()));
	}
	if (!func_9(Local_1617.f_136, 2097152))
	{
		func_10(Local_1617.f_136, 2097152);
	}
	func_11();
	func_13(128, func_12(Local_1617.f_136));
	if (func_9(Local_1617.f_136, 33554432))
	{
		func_14(128);
		func_15(Local_1617.f_136, 33554432);
	}
	func_14(1);
	func_13(262144, func_5(Local_1617.f_136, 128));
	func_13(131072, func_5(Local_1617.f_136, 4));
	func_13(2097152, func_9(Local_1617.f_136, 1024));
	func_13(-2147483648, func_9(Local_1617.f_136, 16384));
	func_13(1048576, func_16(Local_1617.f_136));
	func_13(16, func_17(Local_1617.f_136));
	func_18(0, &Local_1617, 0);
	_0x012701ed938b85de(1f, 5f);
	if (func_5(Local_1617.f_136, 128) || (iLocal_98 == 2 && (func_19(-2147483648) || !func_9(1, 2))))
	{
		func_14(262144);
	}
	func_21(&Local_1617, 32, func_20());
	if (func_22(&Local_1617, 32))
	{
		if (!func_23(Local_1617.f_138, 32))
		{
			func_24(Local_1617.f_138, 32);
		}
		if (!func_19(1048576))
		{
			iVar0 = 16;
			func_25((*Global_1392194)[Local_1617.f_136]->f_6, iVar0);
		}
	}
	else
	{
		func_26((*Global_1392194)[Local_1617.f_136]->f_6);
	}
	func_27(Local_1617.f_136, Local_1617.f_137, &Local_614, &Local_1617, 1, 1);
	func_13(64, func_28());
	func_13(16384, func_29());
	func_13(32768, func_30());
	func_13(65536, func_31());
	func_13(256, func_32());
	func_33();
	Local_614.f_13 = 925190986;
	func_34();
	if (!func_22(&Local_1617, 32))
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
	func_3(Local_1617.f_136);
	uScriptParam_0 = uVar2253;
	Local_614.f_4 = { -1399.503f, -223.7296f, 99.81865f };
	Local_614.f_7 = { -1474.662f, -341.2676f, 80f };
	Local_614.f_10 = { -1326.326f, -116.0771f, 150f };
	if (func_19(16))
	{
		Local_433.f_3 = 1;
	}
	if (func_22(&Local_1617, 32))
	{
		_0x74c2b3dc0b294102((*Global_1392194)[Local_1617.f_136]->f_5);
		_0xa1cfb35069d23c23((*Global_1392194)[Local_1617.f_136]->f_5);
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
	func_39(&Local_1617);
	func_40(&Local_1617, 1);
	if (func_19(1048576) || func_22(&Local_1617, 32))
	{
		func_41(&Local_1617, 1);
	}
	if (func_19(262144) && !func_5(Local_1617.f_136, 16777216))
	{
		func_42(Local_1617.f_136, 16777216);
	}
	func_43(&Local_1617, 128);
	if (has_force_cleanup_occurred(523))
	{
		iLocal_2254 = 1;
	}
	while (true)
	{
		func_45(bVar2252, 9298, 0);
		func_46();
		if (!bVar2252)
		{
			switch (iVar2249)
			{
				case 0:
					if (!func_5(Local_1617.f_136, 524288) && Local_614.f_3 < (15 + ((2 + (iVar612 + Local_614.f_1)) + iLocal_14)))
					{
						func_47((15 + ((2 + (iVar612 + Local_614.f_1)) + iLocal_14)), &Local_614);
						func_48(vLocal_570[4]);
					}
					else if (func_49())
					{
						iLocal_2251 = 1;
					}
					break;
				case 1:
					func_50(16);
					if (!func_51(1) && func_52())
					{
						bVar1 = func_51(16);
						func_54(1, func_53(&Local_614, &Local_1617, &uLocal_2082, &iLocal_2105, &bVar1, &iLocal_194));
						func_54(16, bVar1);
						if (func_51(1))
						{
							iLocal_194 = 0;
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
								if (!does_entity_exist(&(iLocal_2105[1])))
								{
									iLocal_2105[1] = _create_mission_train(-1901305252, func_56(), false, false, true, false);
								}
								if (does_entity_exist(&(iLocal_2105[1])) && is_vehicle_driveable(&(iLocal_2105[1]), false, false))
								{
									set_train_speed(&(iLocal_2105[1]), 0f);
									set_train_cruise_speed(&(iLocal_2105[1]), 0f);
									_0x3660bcab3a6bb734(&(iLocal_2105[1]));
									set_vehicle_is_considered_by_player(&(iLocal_2105[1]), false);
									_0xa72b1bf3857b94d7(&(iLocal_2105[1]), 1);
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
						if (!func_22(&Local_1617, 32))
						{
							bVar2 = func_51(16);
							func_54(2, func_60(&bVar2, &iLocal_194, 0, func_59((iLocal_98 == 3 && !func_19(262144)), 0, -1)));
							func_54(16, bVar2);
							if (func_51(2))
							{
								iLocal_194 = 0;
							}
						}
						else
						{
							func_58(2);
						}
					}
					if (!func_51(4) && !func_51(16))
					{
						if (!func_22(&Local_1617, 32))
						{
							func_61(Local_1617.f_138, 0, 0, 0, 0, 0);
							func_58(16);
							func_54(4, func_62(Local_1617.f_138, 1, 1));
							if (!is_entity_dead(func_63(Local_1617.f_138)))
							{
								set_ped_config_flag(func_63(Local_1617.f_138), 146, true);
							}
						}
						else
						{
							func_58(4);
						}
					}
					if (!func_51(8))
					{
						if (!func_22(&Local_1617, 32) && !func_22(&Local_1617, 2))
						{
							if (func_64(&Local_614) && func_66(func_65(), &Local_1768, 0, 0, 0, -1, 1))
							{
								if (!func_22(&Local_1617, 32) && func_19(64))
								{
									func_67(&(Local_1617.f_35), &(uLocal_2082[0]), "LOGGING_VICTIM", 0);
									iVar3 = 0 + 810;
									iVar4 = func_63(iVar3);
									func_67(&(Local_1617.f_35), iVar4, "LOGGING_WORKER", 0);
								}
								func_58(8);
							}
						}
						else
						{
							func_58(8);
						}
					}
					if (!func_51(524288) && func_68())
					{
						if (func_19(65536) && !is_entity_dead(&(uLocal_2082[5])))
						{
							func_69(uLocal_72[1], uLocal_2082[5], Local_15[1], 1112014848, 0, 0, 0);
						}
						if (func_19(32768) && !is_entity_dead(&(uLocal_2082[4])))
						{
							func_69(uLocal_72[0], uLocal_2082[4], Local_15[0], 1112014848, 0, iLocal_204, 0);
							if (!func_70(128) && does_entity_exist(&(uLocal_72[0])))
							{
								set_vehicle_extra(&(uLocal_72[0]), 1, true);
								set_vehicle_extra(&(uLocal_72[0]), 2, true);
								func_71(128);
							}
						}
						func_58(524288);
					}
					func_72(Local_1617.f_136, 1);
					if (((((((((!is_screen_faded_out() && func_51(1)) && func_51(2)) && func_51(4)) && func_51(8)) && func_51(131072)) && func_51(524288)) && func_73()) && func_74()) || func_22(&Local_1617, 32))
					{
						if (!func_22(&Local_1617, 32) && (func_19(128) || !func_75()))
						{
							func_67(&(Local_1617.f_35), Global_35, "ARTHUR", 0);
							func_67(&(Local_1617.f_35), func_63(Local_1617.f_138), "EA_LCMP_Foreman", 0);
							func_76();
						}
						else
						{
							func_67(&(Local_1617.f_35), Global_35, "ARTHUR", 0);
							func_67(&(Local_1617.f_35), func_63(Local_1617.f_138), "EA_LCMP_Foreman", 0);
							func_77(Local_1617.f_138, 1);
							func_78(Local_211[0], 0);
						}
						func_79();
						iLocal_2251 = 2;
					}
					break;
				case 2:
					if (func_22(&Local_1617, 128) && func_80(Local_1617.f_136, func_19(128)))
					{
						func_81(0);
						func_82(&Local_1617, 128);
					}
					func_83();
					if (!func_19(16777216))
					{
						func_13(16777216, func_84(&Local_1617, &Local_614));
					}
					if (!func_22(&Local_1617, 32))
					{
						if (func_18(iLocal_206, &Local_1617, 5))
						{
							func_85();
							func_86();
						}
						if (!func_22(&Local_1617, 2))
						{
							func_87(&uLocal_1923, &uLocal_1985, &Local_1617, 808, 833, &iLocal_190, &iLocal_206, 10, -1082130432, 1);
							func_88(&uLocal_1923);
							func_88(&uLocal_2082);
							func_88(&iLocal_2108);
							func_89();
							func_90();
							if ((!func_22(&Local_1617, 32) && !func_19(32)) && func_19(128))
							{
								func_93(&Local_1617, 0, func_91(), func_92());
								func_94();
							}
							if (func_95())
							{
								if (func_70(8192))
								{
									set_anim_rate(Local_614.f_690[12]->f_8, 0f, 0, false);
									set_anim_rate(Local_614.f_690[13]->f_8, 0f, 0, false);
								}
								func_96(&Local_433, &Local_1617, 0);
								func_97(&Local_1617);
								func_15(Local_1617.f_136, 16384);
								func_98(&iLocal_2016);
								func_99();
								if (func_100(iLocal_154) && func_101(iLocal_154))
								{
									func_102(iLocal_154, 0, 2);
								}
								func_103(1);
								_0x710448d44a64c213(1);
								iVar5 = add_shocking_event_for_entity(-1905235087, Global_35, 1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
								display_radar(true);
								display_hud(true);
								if (func_104(1))
								{
									func_43(&Local_1617, 4096);
									func_43(&Local_1617, 16384);
								}
								else
								{
									func_10(Local_1617.f_136, 1024);
								}
								func_105();
								func_106();
								func_107();
								func_108(1);
								iVar6 = 0;
								while (iVar6 < 3)
								{
									func_109(Local_275[iVar6], 1, 1, 1, 0);
									iVar6++;
								}
								func_110(0);
								func_111(&(iLocal_75[1]));
								func_112();
								if (!is_entity_dead(&(iLocal_2108[0])))
								{
									freeze_entity_position(&(iLocal_2108[0]), false);
								}
								if (does_entity_exist(Local_614.f_690[23]->f_8))
								{
									detach_entity(Local_614.f_690[23]->f_8, false, true);
								}
								func_113(&uLocal_2092);
								func_113(&uLocal_2119);
								func_113(&uLocal_2102);
								func_114(Local_1617.f_136, 3);
								func_115(&Local_1617);
								iLocal_2253 = 4;
								iVar7 = func_59(!is_entity_dead(func_63(Local_1617.f_138)), 1, 0);
								if (!func_22(&Local_1617, 4096))
								{
									func_116(func_63(Local_1617.f_138), Global_35, "LOG_AGGRO", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								}
								if (func_51(32768))
								{
									iVar8 = 1135209633;
								}
								else if (func_117(268435456))
								{
									iVar8 = -1103472584;
								}
								else
								{
									iVar8 = func_118(&Local_1617, Local_1617.f_28);
								}
								func_43(&Local_1617, 2);
								func_119();
								if (!func_19(1024))
								{
									func_121(&Local_1617, func_63(Local_1617.f_138), uLocal_2102[0], 0, func_120(268435456, 1056964608, 1065353216), 0);
								}
								if (!(func_19(32) && func_19(1024)))
								{
									iLocal_2253 = func_59(iVar2251 > iVar7, (iVar2251 - iVar7), 0);
									iVar7 = func_122(&Local_1617, &uLocal_2082, &uLocal_2092, func_120(268435456, 1056964608, 1065353216), iVar5, iVar2251, 0, 0, 0, iVar8, 1051260355);
									iLocal_2253 = func_59(iVar2251 > iVar7, (iVar2251 - iVar7), 0);
								}
								iLocal_2253 = func_59(iVar2251 > iVar7, (iVar2251 - iVar7), 0);
								func_47(iLocal_190, &Local_614);
								iVar7 = func_123(&Local_1617, &uLocal_1923, &uLocal_1954, iVar2251, func_120(268435456, 1056964608, 1065353216), iLocal_190, iVar5, 0, 0, 0, iVar8, 1051260355);
								iLocal_2253 = func_59(iVar2251 > iVar7, (iVar2251 - iVar7), 0);
								func_33();
								func_43(&Local_1617, 128);
							}
						}
						else
						{
							func_124(&uLocal_1923, &Local_1617);
							func_125();
							if (func_19(1024))
							{
								if (func_126(&Local_1617, func_63(Local_1617.f_138), uLocal_2102[0], 0))
								{
									if (func_19(32))
									{
										if (func_127())
										{
											iVar10 = 0;
											iVar9 = add_shocking_event_for_entity(-1905235087, Global_35, 1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
											iLocal_2253 = func_59(iVar2251 > iVar10, (iVar2251 - iVar10), 0);
											iVar10 = (iVar10 + func_122(&Local_1617, &uLocal_2082, &uLocal_2092, func_120(268435456, 1056964608, 1065353216), iVar9, iVar2251, 0, 0, 0, func_118(&Local_1617, Local_1617.f_28), 1051260355));
											iLocal_2253 = func_59(iVar2251 > iVar10, (iVar2251 - iVar10), 0);
											func_128(1024);
										}
									}
									else
									{
										func_128(1024);
									}
								}
							}
							if (func_19(32))
							{
								if (func_129())
								{
									if (!func_19(1024))
									{
										func_128(32);
									}
								}
							}
							if (func_19(64))
							{
								if (func_70(131072))
								{
									if (!is_entity_dead(&(uLocal_2082[0])))
									{
										if ((_get_lassoed_entity(Global_35) == &uLocal_2082[0] || _is_ped_lassoed(&(uLocal_2082[0]))) || !get_is_task_active(&(uLocal_2082[0]), 3))
										{
											func_130(&(uLocal_2082[0]), 0, 0);
										}
									}
								}
								else if (!func_131(&(uLocal_2082[0]), 518218985) && !get_is_task_active(&(uLocal_2082[0]), 3))
								{
									freeze_entity_position(&(uLocal_2082[0]), false);
									_0x89f5e7adecccb49c(&(uLocal_2082[0]), "INJURED_LEFT_LEG");
									_task_smart_flee_style_ped(&(uLocal_2082[0]), Global_35, 3, 0, -1082130432, -1, 0);
								}
							}
							if (!func_22(&Local_1617, 4) && func_132(&Local_1617, &uLocal_2082, &iLocal_2108, &(Local_1617.f_139), 5, func_63(Local_1617.f_138)))
							{
								func_43(&Local_1617, 4);
							}
						}
						if (!func_22(&Local_1617, 2))
						{
							if (func_19(65536) && !is_entity_dead(&(uLocal_2082[5])))
							{
								func_69(uLocal_72[1], uLocal_2082[5], Local_15[1], 1112014848, func_19(4096), 0, 0);
								if (!func_70(128) && does_entity_exist(&(uLocal_72[1])))
								{
									_0xd80faf919a2e56ea(&(uLocal_72[1]), 1242644044);
									func_71(128);
								}
							}
							if (func_19(32768) && !is_entity_dead(&(uLocal_2082[4])))
							{
								func_69(uLocal_72[0], uLocal_2082[4], Local_15[0], 1112014848, func_19(4096), iLocal_204, 0);
								if (!func_70(128) && does_entity_exist(&(uLocal_72[0])))
								{
									func_71(128);
								}
							}
						}
					}
					if (!func_22(&Local_1617, 2))
					{
						if (!func_22(&Local_1617, 32))
						{
							func_133(&Local_433);
							if (func_134(&Local_433, 1))
							{
								func_135(&Local_1617, &Local_433, Local_211[2], Local_275[2]);
							}
							else
							{
								func_136(&Local_433, 4);
							}
						}
						if (func_137())
						{
							iLocal_2254 = 1;
						}
					}
					else if (!func_22(&Local_1617, 32))
					{
						func_138();
					}
					break;
			}
		}
		if (func_139())
		{
			iLocal_2254 = 1;
		}
		wait(Local_1617.f_30);
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
	if (!func_140(iParam0))
	{
		return;
	}
	iVar0 = func_141(iParam0);
	if (!func_142(iVar0, 8))
	{
		func_143(iVar0, 8);
	}
	_0x4161648394262fdf(func_144(iParam0, func_4(iParam0)), 100f);
	func_145(&((*Global_1392194)[iParam0]->f_1), 1);
}

int func_4(int iParam0)
{
	if (!func_140(iParam0))
	{
		return -1;
	}
	return &(Global_40.f_9096[iParam0]);
}

bool func_5(int iParam0, int iParam1)
{
	if (!func_140(iParam0))
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
	if (!func_140(iParam0))
	{
		return false;
	}
	return (Global_40.f_9096[iParam0]->f_5 && iParam1) != 0;
}

void func_10(int iParam0, int iParam1)
{
	if (!func_140(iParam0))
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
	if (func_146(30336, 1, 1) && !func_147())
	{
		iVar0 = 0;
	}
	else
	{
		iVar0 = 1;
	}
	if (func_148(Global_35, 0))
	{
		iVar0 = 0;
	}
	if (func_149() && func_150() == 27)
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
		func_128(iParam0);
	}
}

void func_14(int iParam0)
{
	iLocal_99 = (iLocal_99 || iParam0);
}

void func_15(int iParam0, int iParam1)
{
	if (!func_140(iParam0))
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
	func_151(iParam0, &iVar0, &iVar1, &uVar2, &uVar3);
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
		func_114(iParam0, 2);
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
	if (func_152(iParam0))
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
		bVar4 = (func_153(iVar7) || func_154(iVar7));
		bVar5 = (func_153(iVar8) || func_154(iVar8));
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
			if (func_155(iVar7) || func_156(iVar7))
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
				func_82(iParam1, 256);
			}
		}
		else if (bVar5)
		{
			if (func_155(iVar8) || func_156(iVar8))
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
			func_82(iParam1, 256);
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
	if (((func_5(Local_1617.f_136, 524288) || func_5(Local_1617.f_136, 2097152)) || func_5(Local_1617.f_136, 1048576)) || iLocal_98 > 3)
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
		func_82(iParam0, iParam1);
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
	if (!func_157(iParam0))
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
	if (!func_157(iParam0))
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
	func_158(iParam1, 1);
	if (bParam5)
	{
		func_159((*Global_1392194)[iParam3->f_136]->f_5, 0, 0, 0);
	}
	if (bParam4)
	{
		func_160((*Global_1392194)[iParam3->f_136]->f_6, 0);
		func_161((*Global_1392194)[iParam3->f_136]->f_6, 0, 0, 1, 1, 0);
	}
	bVar0 = false;
	if (iParam1 == 76)
	{
		func_162(&iVar1, &iVar2, func_9(1, 1048576));
	}
	else
	{
		func_163(iParam1, &iVar1, &iVar2, 0, 0);
	}
	iVar3 = iVar1;
	while (iVar3 <= iVar2)
	{
		if (func_157(iVar3) && !func_23(iVar3, 32))
		{
			if (!bVar0)
			{
				bVar0 = true;
			}
			func_164(iVar3);
		}
		iVar3++;
	}
	if (bVar0)
	{
		func_165(iParam1, iVar1, iVar2, 1);
	}
	if (!func_22(iParam3, 32))
	{
		_0xb173599d61faeb31();
	}
}

bool func_28()
{
	if (!func_166(64))
	{
		return false;
	}
	if (func_19(1048576))
	{
		return false;
	}
	if (!func_9(Local_1617.f_136, 512))
	{
		if (iLocal_98 == 2 && !func_5(Local_1617.f_136, 64))
		{
			if (func_5(Local_1617.f_136, 128))
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
		if (iLocal_98 == 1 && func_5(Local_1617.f_136, 128))
		{
			return true;
		}
	}
	return false;
}

bool func_29()
{
	if (iLocal_98 == 1 && !func_9(Local_1617.f_136, 1024))
	{
		return true;
	}
	return false;
}

bool func_30()
{
	if (func_166(16))
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
	if (func_166(16))
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
	else if (func_166(64) && (iLocal_98 == 2 || (iLocal_98 == 3 && func_19(262144))))
	{
		iVar0 = func_167(func_56(), 0);
		if (func_168(iVar0) && get_distance_between_coords(_0x1e8a921112891651((*Global_1425371)[iVar0]->f_1), func_56(), true) < 350f)
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
			if (!func_22(&Local_1617, 32))
			{
				if (!func_22(&Local_1617, 2))
				{
					iLocal_203 = 1480157862;
					iLocal_204 = -1619191432;
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
			if (!func_22(&Local_1617, 32))
			{
				if (!func_22(&Local_1617, 2))
				{
					iLocal_203 = 1254150069;
					iLocal_204 = 378017637;
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
			if (!func_22(&Local_1617, 32))
			{
				if (!func_22(&Local_1617, 2))
				{
					if (func_19(262144))
					{
						iLocal_203 = 874422897;
						iLocal_204 = 1663347996;
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
						iLocal_203 = 2077381882;
						iLocal_204 = 1663347996;
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
	_0x9c8f42a5d1859dc1((*Global_1392194)[Local_1617.f_136]->f_5);
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
	if (func_22(&Local_1617, 32))
	{
		iVar0 = 0;
	}
	iVar2 = 814;
	while (iVar2 <= 833)
	{
		if (_0x800df3fc913355f3(func_169(iVar2)))
		{
			if (iVar1 >= iVar0)
			{
				func_24(iVar2, 32);
				func_170(iVar2);
			}
			else
			{
				func_171(iVar2, 32);
				if (_0x800df3fc913355f3(func_169(iVar2)))
				{
					_0x4f81ead1de8fa19b(func_169(iVar2));
				}
			}
			iVar1++;
		}
		iVar2++;
	}
	iVar2 = 810;
	while (iVar2 <= 813)
	{
		if (_0x800df3fc913355f3(func_169(iVar2)))
		{
			if (iLocal_98 >= 4 || func_22(&Local_1617, 32))
			{
				func_24(iVar2, 32);
				func_170(iVar2);
			}
			else
			{
				func_171(iVar2, 32);
				if (_0x800df3fc913355f3(func_169(iVar2)))
				{
					_0x4f81ead1de8fa19b(func_169(iVar2));
				}
			}
		}
		iVar2++;
	}
	iVar2 = 808;
	while (iVar2 <= 809)
	{
		if (_0x800df3fc913355f3(func_169(iVar2)))
		{
			if (iLocal_98 >= 4 || func_22(&Local_1617, 32))
			{
				func_24(iVar2, 32);
				func_170(iVar2);
			}
			else
			{
				func_171(iVar2, 32);
				if (_0x800df3fc913355f3(func_169(iVar2)))
				{
					_0x4f81ead1de8fa19b(func_169(iVar2));
				}
			}
		}
		iVar2++;
	}
	func_86();
}

void func_35(int iParam0)
{
	iLocal_102 = (iLocal_102 || iParam0);
}

void func_36()
{
	if (func_22(&Local_1617, 32))
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
	func_172(1024);
	func_173();
	if (iLocal_98 == 3 && !func_19(262144))
	{
		func_58(8388608);
		func_174();
	}
	if (func_22(&Local_1617, 32) && !(iLocal_98 == 4 && !func_19(262144)))
	{
		func_175(&Local_614);
		return 1;
	}
	else
	{
		func_85();
	}
	switch (iLocal_98)
	{
		case 1:
			Local_614 = 5;
			func_176(&Local_614);
			break;
		case 2:
			Local_614 = 5;
			func_177(&Local_614);
			iLocal_14 += 2;
			break;
		case 3:
			func_178();
			Local_614 = 5;
			func_179(&Local_614, func_9(Local_1617.f_136, 2048));
			break;
		case 4:
		case 5:
			break;
	}
	if (!func_22(&Local_1617, 32))
	{
		if (iLocal_98 < 4)
		{
			func_180();
			func_181();
			func_182();
		}
		if (func_19(16384))
		{
			Local_614.f_369[0]->f_1 = 36009259;
			Local_614.f_369[0] = 28;
			Local_614.f_369[0]->f_6 = { -1403.857f, -226.9338f, 100.4594f };
			Local_614.f_369[0]->f_9 = -83.35f;
		}
	}
	return 1;
}

bool func_38()
{
	if (iVar603 <= 0)
	{
		return false;
	}
	if (iLocal_98 == 1 && !func_5(Local_1617.f_136, 4))
	{
		return true;
	}
	if (!func_166(64))
	{
		return false;
	}
	if (iLocal_98 > 3 || (iLocal_98 == 3 && !func_5(Local_1617.f_136, 128)))
	{
		return false;
	}
	return true;
}

void func_39(int iParam0)
{
	func_183(iParam0);
	func_184(iParam0, 10f, 1);
	func_185(iParam0, 1);
	func_186(iParam0, 1);
	func_187(iParam0, 1);
	func_188(iParam0, 1);
	func_189(iParam0, 0);
	func_40(iParam0, 0);
	func_190(iParam0, 1);
	func_191(iParam0, 1);
	func_192(iParam0, 1);
	func_193(iParam0, 1);
	func_194(iParam0, 1);
	func_195(iParam0, 1);
	func_196(iParam0, 1.25f);
	func_197(iParam0, 1);
	func_198(iParam0, 1);
	func_199(iParam0, 1);
	func_200(iParam0, 1);
}

void func_40(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_201(&(iParam0->f_1), 1024);
	}
	else
	{
		func_145(&(iParam0->f_1), 1024);
	}
}

void func_41(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_201(&(iParam0->f_1), 131072);
	}
	else
	{
		func_145(&(iParam0->f_1), 131072);
	}
}

void func_42(int iParam0, int iParam1)
{
	if (!func_140(iParam0))
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
	switch (iLocal_189)
	{
		case 0:
			func_202();
			if (func_19(128))
			{
				func_203();
			}
			if (func_22(&Local_1617, 16384))
			{
				if (!func_22(&Local_1617, 32768))
				{
					func_204(Local_1617.f_136);
				}
				else
				{
					func_10(Local_1617.f_136, 1024);
				}
			}
			if (func_5(Local_1617.f_136, 128))
			{
				iVar0 = func_63(Local_1617.f_138);
				func_205(&iVar0);
			}
			func_96(&Local_433, &Local_1617, 0);
			func_206(Local_1617.f_136, 1073741824);
			func_206(Local_1617.f_136, 536870912);
			release_script_audio_bank();
			break;
		case 1:
			if (func_100(iLocal_154) && !((func_207(iLocal_154) || func_208(iLocal_154, 1)) || func_209(iLocal_154)))
			{
				func_102(iLocal_154, 0, 2);
			}
			if ((func_9(Local_1617.f_136, 16384) && does_entity_exist(&(iLocal_2105[0]))) && (is_entity_dead(Global_35) || is_ped_in_vehicle(Global_35, &(iLocal_2105[0]), false)))
			{
				func_15(Local_1617.f_136, 16384);
			}
			if (_does_volume_exist(iVar1911))
			{
				if (_0xde0ea444735c1368(iVar1911))
				{
					_0x2c87c3e1c7b96ee2(iVar1911);
				}
				_delete_volume(iVar1911);
			}
			if (get_ped_config_flag(Global_35, 514, true))
			{
				set_ped_config_flag(Global_35, 514, false);
			}
			func_210(1024);
			func_211();
			break;
		case 2:
			if (!is_entity_dead(Global_35))
			{
				set_ped_reset_flag(Global_35, 5, false);
				set_ped_reset_flag(Global_35, 129, false);
			}
			func_212();
			func_213(1);
			func_214(1);
			if (!is_entity_dead(&(uLocal_2082[5])) && !func_215(&(uLocal_2082[5]), (*Global_1392194)[Local_1617.f_136]->f_5, 1, 0))
			{
				uLocal_2182[0] = &uLocal_2082[5];
			}
			_0x8379e05871ad24e0();
			if (func_9(Local_1617.f_136, 256) && !func_9(Local_1617.f_136, 32))
			{
				func_216("SP_EVENT_AREA_APPLESEED_3_STOP", 0);
			}
			if (func_19(32))
			{
				func_216("SP_EVENT_AREA_APPLESEED_2_IDLE", 0);
			}
			break;
		case 3:
			func_107();
			if (_does_volume_exist((*Global_1392194)[Local_1617.f_136]->f_5))
			{
				iVar1 = 0;
				while (iVar1 < iVar2080)
				{
					if (!is_entity_dead(&(uLocal_2082[iVar1])))
					{
						if (func_215(&(uLocal_2082[iVar1]), (*Global_1392194)[Local_1617.f_136]->f_5, 1, 0))
						{
							if (!is_entity_a_mission_entity(&(uLocal_2082[iVar1])))
							{
								set_entity_as_mission_entity(&(uLocal_2082[iVar1]), true, false);
							}
							delete_ped(uLocal_2082[iVar1]);
						}
						else
						{
							set_blocking_of_non_temporary_events(&(uLocal_2082[iVar1]), false);
							set_ped_keep_task(&(uLocal_2082[iVar1]), true);
							set_ped_as_no_longer_needed(uLocal_2082[iVar1]);
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
				func_111(&(iLocal_75[iVar1]));
				iVar1++;
			}
			iVar1 = 0;
			while (iVar1 < 11)
			{
				if (_does_anim_scene_exist(&(Local_492[iVar1])))
				{
					func_217(Local_492[iVar1]);
				}
				iVar1++;
			}
			iVar1 = 0;
			while (iVar1 < 12)
			{
				if (does_entity_exist(Local_1768[iVar1]->f_8))
				{
					delete_object(&(Local_1768[iVar1]->f_8));
				}
				iVar1++;
			}
			break;
		case 4:
			func_99();
			func_108(1);
			func_2();
			if (_does_volume_exist((*Global_1392194)[Local_1617.f_136]->f_5))
			{
				if (!func_22(&Local_1617, 4) && !func_22(&Local_1617, 32))
				{
					if (!is_entity_dead(&(uLocal_72[0])) && is_entity_in_volume(&(uLocal_72[0]), (*Global_1392194)[Local_1617.f_136]->f_5, true, 0))
					{
						delete_vehicle(uLocal_72[0]);
					}
					if (!is_entity_dead(&(uLocal_72[1])) && is_entity_in_volume(&(uLocal_72[1]), (*Global_1392194)[Local_1617.f_136]->f_5, true, 0))
					{
						delete_vehicle(uLocal_72[1]);
					}
				}
				iVar1 = 0;
				while (iVar1 < 2)
				{
					if (!is_entity_dead(&(iLocal_2105[iVar1])))
					{
						if (iVar1 == 1)
						{
							delete_mission_train(iLocal_2105[iVar1]);
						}
						else if (is_entity_in_volume(&(iLocal_2105[iVar1]), (*Global_1392194)[Local_1617.f_136]->f_5, true, 0))
						{
							delete_vehicle(iLocal_2105[iVar1]);
						}
					}
					iVar1++;
				}
			}
			break;
		case 5:
			func_10(Local_1617.f_136, 1073741824);
			func_218(Local_1617.f_136, &Local_614, &Local_1617);
			func_219(&Local_614);
			_text_database_delete(func_220());
			_text_database_delete(func_221());
			break;
		default:
			terminate_this_thread();
			break;
	}
	iLocal_189++;
}

void func_45(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!func_222(bParam2) || is_screen_faded_out())
		{
			Call_Loc(iParam1);
		}
	}
}

void func_46()
{
	func_54(65536, func_215(Global_35, (*Global_1392194)[Local_1617.f_136]->f_6, 1, 0));
}

void func_47(int iParam0, int iParam1)
{
	_0xf008e0ba1fe1d644(iParam0);
	iParam1->f_3 = (iParam1->f_3 + iParam0);
}

void func_48(var uParam0)
{
	func_223(uParam0, 0f);
}

bool func_49()
{
	if (func_224(vLocal_570[4], 30f))
	{
	}
	if (!_0x5e420ff293ee5472())
	{
		return false;
	}
	switch (iVar2250)
	{
		case 0:
			func_225(&(Local_614.f_15));
			func_225(&(Local_614.f_369));
			func_226(&(Local_15[0]->f_11));
			func_226(&(Local_15[1]->f_11));
			if (func_19(128) && iLocal_98 == 3)
			{
				func_225(&(Local_614.f_369));
			}
			func_227();
			func_228();
			func_229(&(Local_614.f_690));
			func_229(&Local_1768);
			func_230();
			func_225(&(Local_614.f_304));
			if (func_19(256))
			{
				func_231(-1901305252);
			}
			func_232();
			_text_database_request(func_220());
			_text_database_request(func_221());
			if (iLocal_98 == 3 && !func_19(262144))
			{
				func_233();
			}
			iLocal_2252 = 1;
			break;
		case 1:
			if (!func_52())
			{
			}
			if (!func_68())
			{
			}
			if (!func_55())
			{
			}
			if (!func_234())
			{
			}
			if (!func_73())
			{
			}
			if (!func_74())
			{
			}
			if (!func_235())
			{
				func_233();
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
	if (!func_236(&(Local_614.f_15)) || !func_236(&(Local_614.f_369)))
	{
		return false;
	}
	if (!func_236(&(Local_614.f_304)))
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
				(*uParam2)[*iParam5] = func_237(iParam0->f_15[*iParam5]->f_1, iParam0->f_15[*iParam5], iParam0->f_15[*iParam5]->f_6, iParam0->f_15[*iParam5]->f_9, 1, 0, 1, 0, 1);
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
	if (func_19(256))
	{
		if (!func_231(-1901305252))
		{
			return false;
		}
	}
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
		iParam3 = Local_614.f_1;
	}
	if (*iParam1 < iParam2)
	{
		*iParam1 = iParam2;
	}
	if (_0x5c16855277819bbf() >= iParam3)
	{
		if (*iParam1 < iParam3)
		{
			if (Local_614.f_369[*iParam1]->f_1 != 0)
			{
				if (iLocal_98 != 3 || func_19(262144))
				{
					iLocal_2108[*iParam1] = func_237(Local_614.f_369[*iParam1]->f_1, Local_614.f_369[*iParam1], Local_614.f_369[*iParam1]->f_6, Local_614.f_369[*iParam1]->f_9, 1, (iLocal_98 == 1 && *iParam1 == 5), 0, 0, 1);
					decor_set_bool(&(iLocal_2108[*iParam1]), "bNoticePlayer", false);
					set_blocking_of_non_temporary_events(&(iLocal_2108[*iParam1]), true);
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
	if (!func_157(iParam0))
	{
		return 0;
	}
	if (!func_239(func_238(iParam0)))
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_169(iParam0)))
	{
		func_240(iParam0, 0);
		return 0;
	}
	vVar0 = { iParam2, iParam3, iParam4 };
	if (!func_241(iParam0, 0))
	{
		if (bParam1)
		{
			if (!func_242(iParam0))
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (!func_243(vVar0))
	{
		_0x59c7ad6fea2ac449(func_169(iParam0), vVar0);
	}
	if (bParam5)
	{
		iVar3 = _0x08fc896d2cb31fcc(func_169(iParam0), 0);
	}
	else
	{
		iVar3 = _0x0cadc3a977997472(func_169(iParam0), 0);
	}
	if (!func_243(vVar0))
	{
		_0xbb68908cd11aebdc(func_169(iParam0));
	}
	if (does_entity_exist(iVar3))
	{
		return 1;
	}
	return 0;
}

bool func_62(int iParam0, bool bParam1, bool bParam2)
{
	func_244(iParam0, 0, 0, 0, 1, 1);
	iVar0 = func_63(iParam0);
	if (!is_entity_dead(iVar0))
	{
		set_ped_config_flag(iVar0, 178, !bParam1);
		set_ped_config_flag(iVar0, 168, false);
		set_ped_config_flag(iVar0, 259, true);
		set_ped_config_flag(iVar0, 297, bParam2);
		_0x6759bee6762e140b(func_169(iParam0));
		if (!bParam1)
		{
			func_245(iVar0, 1, 1);
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
	if (!func_157(iParam0))
	{
		return 0;
	}
	if (!func_23(iParam0, 2))
	{
		return 0;
	}
	if (func_239(func_238(iParam0)))
	{
		return func_246(iParam0);
	}
	return _0xe76687023d8c8505(func_247(iParam0), 0);
}

int func_64(int iParam0)
{
	return func_66(func_65(), &(iParam0->f_690), 0, 0, 0, -1, 1);
}

Vector3 func_65()
{
	return 0f, 0f, 0f;
}

int func_66(vector3 vParam0, int iParam3, float fParam4, bool bParam5, int iParam6, int iParam7, bool bParam8)
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
		else if ((*iParam3)[iVar0]->f_7 != 0 && !func_248((*iParam3)[iVar0]->f_11, 16))
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
					if (func_248((*iParam3)[iVar0]->f_11, 64))
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
					if (!func_248((*iParam3)[iVar0]->f_11, 8))
					{
						vVar5 = { _get_object_offset_from_coords(vParam0, fParam4, *(*iParam3)[iVar0]) };
					}
					else
					{
						vVar5 = { *(*iParam3)[iVar0] };
					}
					if (!func_248((*iParam3)[iVar0]->f_11, 128))
					{
						func_249(&vVar5, (*iParam3)[iVar0]->f_10);
					}
					if (func_248((*iParam3)[iVar0]->f_11, 64))
					{
						(*iParam3)[iVar0]->f_8 = create_object_no_offset((*iParam3)[iVar0]->f_7, vVar5, true, true, false, false);
					}
					else
					{
						(*iParam3)[iVar0]->f_8 = create_object((*iParam3)[iVar0]->f_7, vVar5, true, true, false, false, true);
					}
					if (func_243((*iParam3)[iVar0]->f_4))
					{
						vVar1 = { 0f, 0f, (*iParam3)[iVar0]->f_3 };
					}
					else
					{
						vVar1 = { (*iParam3)[iVar0]->f_4 };
					}
					if (func_248((*iParam3)[iVar0]->f_11, 4))
					{
						vVar1.f_2 = func_250((vVar1.z + fParam4));
					}
					set_entity_rotation((*iParam3)[iVar0]->f_8, vVar1, 2, true);
					if (!func_248((*iParam3)[iVar0]->f_11, 128))
					{
						if ((*iParam3)[iVar0]->f_10)
						{
							_0x9587913b9e772d29((*iParam3)[iVar0]->f_8, 0);
						}
					}
				}
				if (func_248((*iParam3)[iVar0]->f_11, 2))
				{
					freeze_entity_position((*iParam3)[iVar0]->f_8, true);
				}
				if (func_248((*iParam3)[iVar0]->f_11, 32))
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

void func_67(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_251(uParam0, iParam1, sParam2))
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

bool func_68()
{
	if (!func_252(Local_15[0]->f_11) || !func_252(Local_15[1]->f_11))
	{
		return false;
	}
	return true;
}

int func_69(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6)
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
				if (func_253(uParam2))
				{
					*uParam0 = create_vehicle(uParam2->f_11, uParam2->f_4, uParam2->f_10, false, true, false, false);
					if (func_254(*uParam1, 0, 1))
					{
						set_ped_into_vehicle(*uParam1, *uParam0, -1);
						decor_set_bool(*uParam1, "bNoticePlayer", true);
					}
					uParam2->f_15 = 1;
				}
			}
			break;
		case 1:
			if (!bParam4 && (func_255(*uParam0, &(uParam2->f_16), &(uParam2->f_21), &(uParam2->f_24), 3f, bParam3, 20f, 0, 1092616192, 1) || !uParam2->f_22))
			{
				if (is_vehicle_driveable(*uParam0, false, false))
				{
					task_vehicle_drive_to_coord(*uParam1, *uParam0, *uParam2, 4f, 0, 0, 67633207, 5f, 20f);
				}
				if (uParam2->f_23)
				{
					if ((!uParam2->f_26 && func_256(0, 0, 0, 0)) && !is_string_null_or_empty(uParam2->f_12))
					{
						func_116(*uParam1, Global_35, uParam2->f_12, 0, -1082130432, 0, 0, 0, 0, 1, 1, 291934926, 1, 0, 0);
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
				if ((!uParam2->f_26 && func_256(0, 0, 0, 0)) && !is_string_null_or_empty(uParam2->f_12))
				{
					func_116(*uParam1, Global_35, uParam2->f_12, 0, -1082130432, 0, 0, 0, 0, 1, 1, 291934926, 1, 0, 0);
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

bool func_70(int iParam0)
{
	return (iLocal_100 && iParam0) != 0;
}

void func_71(int iParam0)
{
	iLocal_100 = (iLocal_100 || iParam0);
}

void func_72(int iParam0, bool bParam1)
{
	if (!func_140(iParam0))
	{
		return;
	}
	iVar0 = func_141(iParam0);
	if (bParam1)
	{
		func_143(iVar0, 8);
		func_145(&((*Global_1392194)[iParam0]->f_1), 1);
	}
	else
	{
		func_257(iVar0, 8);
		func_201(&((*Global_1392194)[iParam0]->f_1), 1);
	}
}

bool func_73()
{
	if (!func_258(&uLocal_2017))
	{
		return false;
	}
	if (!func_259())
	{
		return false;
	}
	return true;
}

bool func_74()
{
	if (!_text_database_has_loaded(func_220()))
	{
		return false;
	}
	if (!_text_database_has_loaded(func_221()))
	{
		return false;
	}
	return true;
}

bool func_75()
{
	if (func_19(16))
	{
		return true;
	}
	switch (iLocal_98)
	{
		case 3:
			if (func_9(Local_1617.f_136, 256) && !func_5(Local_1617.f_136, 128))
			{
				return false;
			}
			break;
	}
	return true;
}

void func_76()
{
	iVar0 = func_63(Local_1617.f_138);
	if (!is_entity_dead(iVar0))
	{
		clear_ped_tasks_immediately(iVar0, false, true);
		if (!func_260(iVar0, 1))
		{
			func_261(iVar0, "EA_LCMP_Foreman", 0);
		}
		set_ped_config_flag(iVar0, 178, true);
	}
	switch (iLocal_98)
	{
		case 1:
			if (!func_5(Local_1617.f_136, 128))
			{
				if (!is_entity_dead(iVar0))
				{
					iVar1 = _find_closest_active_scenario_point_of_type(-1400.66f, -213.44f, 101.9f, func_262(), 1.5f, 0, false);
					if (_does_scenario_point_exist(iVar1))
					{
						_task_use_scenario_point(iVar0, iVar1, func_263(), -1, false, true, 0, false, -1f, false);
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
			if (!func_5(Local_1617.f_136, 128))
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
			if (!func_5(Local_1617.f_136, 128))
			{
				if (!is_entity_dead(iVar0))
				{
					if (func_9(Local_1617.f_136, 256) || func_9(Local_1617.f_136, 262144))
					{
						task_use_nearest_scenario_to_coord_warp(iVar0, func_264(), 1.5f, 0, false, false, false, false);
					}
					else
					{
						func_265(iVar0, -1398.594f, -208.7037f, 101.8822f, 87.65f, 1, 1073741824);
					}
				}
			}
			else if (!is_entity_dead(func_63(Local_1617.f_138)))
			{
			}
			break;
		case 4:
		case 5:
			break;
	}
}

void func_77(int iParam0, bool bParam1)
{
	if (func_266(iParam0, 0))
	{
		iVar0 = func_63(iParam0);
		if (!is_entity_dead(iVar0))
		{
			set_ped_config_flag(iVar0, 234, true);
			set_ped_config_flag(iVar0, 259, true);
		}
		func_267(iParam0, 0, 1, 0, 0);
		_0x6759bee6762e140b(func_169(iParam0));
		if (bParam1)
		{
			func_245(iVar0, 1, 1);
		}
	}
}

void func_78(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_268(&(iParam0->f_18));
}

int func_79()
{
	func_269();
	if (iLocal_98 == 3 && !func_5(Local_1617.f_136, 128))
	{
		if (!is_entity_dead(&(uLocal_2082[0])))
		{
			func_271(&(uLocal_2082[0]), func_270(272629760, 1056964608, 1065353216), 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
			task_guard_current_position(&(uLocal_2082[0]), 10f, 50f, true);
			set_ped_config_flag(&(uLocal_2082[0]), 146, false);
			func_261(&(uLocal_2082[0]), func_272(Local_1617.f_136, -1), 0);
			decor_set_bool(&(uLocal_2082[0]), "HAS_VOICE", true);
			func_245(&(uLocal_2082[0]), 1, 1);
		}
		if (!is_entity_dead(&(uLocal_2082[1])))
		{
			func_271(&(uLocal_2082[1]), func_270(272629760, 1056964608, 1065353216), 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
			task_guard_current_position(&(uLocal_2082[1]), 10f, 50f, true);
			set_ped_config_flag(&(uLocal_2082[1]), 146, false);
			func_261(&(uLocal_2082[1]), func_272(Local_1617.f_136, -1), 0);
			decor_set_bool(&(uLocal_2082[1]), "HAS_VOICE", true);
			func_245(&(uLocal_2082[1]), 1, 1);
		}
		if (does_entity_exist(&(uLocal_2082[2])))
		{
			set_entity_load_collision_flag(&(uLocal_2082[2]), 1);
			_set_entity_something(&(uLocal_2082[2]), true);
		}
		if (does_entity_exist(&(uLocal_2082[3])))
		{
			set_entity_load_collision_flag(&(uLocal_2082[3]), 1);
			_set_entity_something(&(uLocal_2082[3]), true);
		}
	}
	else
	{
		if (func_19(64))
		{
			if (!is_entity_dead(&(uLocal_2082[0])))
			{
				open_sequence_task(&iLocal_196);
				task_follow_nav_mesh_to_coord(0, -1388.626f, -234.6199f, 98.7432f, 1f, -1, 0.25f, 0, 9.6661f);
				task_follow_nav_mesh_to_coord(0, -1398.8f, -214.8f, 101.4f, 1f, -1, 0.25f, 0, 15.6f);
				task_follow_nav_mesh_to_coord(0, -1400.4f, -209.6f, 102f, 1f, -1, 0.25f, 0, 148.8f);
				_task_use_nearest_scenario_to_coord(0, -1400.871f, -210.4877f, 101.0936f, 2f, -1, false, false, true, false);
				close_sequence_task(iLocal_196);
				task_perform_sequence(&(uLocal_2082[0]), iLocal_196);
				clear_sequence_task(&iLocal_196);
				set_ped_config_flag(&(uLocal_2082[0]), 146, false);
				func_245(&(uLocal_2082[0]), 1, 1);
			}
		}
		else if (!is_entity_dead(&(uLocal_2082[0])))
		{
			task_use_random_scenario_in_group(&(uLocal_2082[0]), func_273(), 0, 0, 0);
			set_ped_config_flag(&(uLocal_2082[0]), 146, false);
			func_245(&(uLocal_2082[0]), 1, 1);
		}
		if (!is_entity_dead(&(uLocal_2082[1])))
		{
			task_use_random_scenario_in_group(&(uLocal_2082[1]), func_273(), 0, 0, 0);
			set_ped_config_flag(&(uLocal_2082[1]), 146, false);
			func_245(&(uLocal_2082[1]), 1, 1);
		}
		if (!is_entity_dead(&(uLocal_2082[2])))
		{
			if (!func_19(64))
			{
				task_use_random_scenario_in_group(&(uLocal_2082[2]), func_273(), 0, 0, 0);
				set_ped_config_flag(&(uLocal_2082[2]), 146, false);
				func_245(&(uLocal_2082[2]), 1, 1);
			}
		}
		if (!is_entity_dead(&(uLocal_2082[3])))
		{
			if (!func_19(64))
			{
				task_use_random_scenario_in_group(&(uLocal_2082[3]), func_273(), 0, 0, 0);
				set_ped_config_flag(&(uLocal_2082[3]), 146, false);
				func_245(&(uLocal_2082[3]), 1, 1);
			}
		}
	}
	if (!is_entity_dead(&(uLocal_2082[4])))
	{
		func_245(&(uLocal_2082[4]), 1, 1);
	}
	if (!is_entity_dead(&(uLocal_2082[5])))
	{
		func_245(&(uLocal_2082[5]), 1, 1);
	}
	iVar0 = 0;
	while (iVar0 < iVar612)
	{
		if (!is_entity_dead(&(uLocal_2082[iVar0])))
		{
			set_ped_config_flag(&(uLocal_2082[iVar0]), 178, true);
			_0xa3db37edf9a74635(get_player_index(), &(uLocal_2082[iVar0]), 7, 0, 1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_614.f_1)
	{
		if (!is_entity_dead(&(iLocal_2108[iVar0])))
		{
			set_ped_config_flag(&(iLocal_2108[iVar0]), 178, true);
			_0xa3db37edf9a74635(get_player_index(), &(iLocal_2108[iVar0]), 7, 0, 1);
		}
		iVar0++;
	}
	func_48(vLocal_570[0]);
	return 1;
}

bool func_80(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
		return false;
	}
	return _0x1b065a2bf7953815(0) != 1;
}

void func_81(bool bParam0)
{
	iVar0 = func_4(0);
	if (func_5(0, 128))
	{
		if (iVar0 != 1 || func_5(0, 16777216))
		{
			func_274(0, 0);
		}
	}
	else
	{
		if (iVar0 > 3)
		{
			func_274(0, 0);
		}
		if (func_9(0, 32768))
		{
			func_274(0, 0);
		}
		else
		{
			switch (iVar0)
			{
				case 1:
					if (func_9(0, 4) && func_5(0, 16777216))
					{
						func_274(0, 0);
					}
					else if (func_9(0, 1024))
					{
						if (bParam0 || !func_5(0, 268435456))
						{
							func_275(0);
							func_276(0, 0, "LOG_JOURN01", 0, !bParam0);
							func_42(0, 268435456);
						}
					}
					else
					{
						func_274(0, 0);
					}
					break;
				case 2:
					func_274(0, 0);
					break;
				case 3:
					if (func_9(0, 8))
					{
						func_274(0, 0);
					}
					else if (func_9(0, 256))
					{
						if (bParam0 || !func_5(0, 268435456))
						{
							func_275(0);
							func_276(0, 0, "LOG_JOURN02", 0, !bParam0);
							func_42(0, 268435456);
						}
					}
					else
					{
						func_274(0, 0);
					}
					break;
				default:
					func_274(0, 0);
					break;
			}
		}
	}
}

void func_82(int iParam0, int iParam1)
{
	if (!func_22(iParam0, iParam1))
	{
		return;
	}
	iParam0->f_29 = (iParam0->f_29 - (iParam0->f_29 && iParam1));
}

void func_83()
{
	if (func_51(8388608))
	{
		if (func_277(1024))
		{
			func_174();
		}
		else
		{
			func_211();
		}
	}
}

bool func_84(int iParam0, int iParam1)
{
	if (!Global_1935630->f_12 && func_215(Global_35, (*Global_1392194)[iParam0->f_136]->f_5, 1, 0))
	{
		if (!func_22(iParam0, 64))
		{
			func_43(iParam0, 64);
			func_278(iParam0->f_136, 1);
			return true;
		}
	}
	return false;
}

void func_85()
{
	Local_2147.f_24 = 0;
	Local_2147.f_23 = 0;
	Local_2147.f_17 = 0;
	func_145(&(Local_2147.f_34), 1);
	if (!func_19(16))
	{
		switch (iLocal_98)
		{
			case 1:
				if ((func_19(128) && !func_19(2)) && !func_5(Local_1617.f_136, 4))
				{
					if (func_279(1) > 0)
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
				if (func_22(&Local_1617, 256))
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
				if (func_5(Local_1617.f_136, 64))
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
						if (func_279(1) > 0)
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
					if (func_22(&Local_1617, 256))
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
				if (!func_5(Local_1617.f_136, 128))
				{
					if (func_9(Local_1617.f_136, 8))
					{
						if (func_279(1) > 0)
						{
							sVar1[0] = "LOG_WRK01CH_P";
						}
						else
						{
							sVar1[0] = "LOG_WRK01CH";
						}
						if (func_22(&Local_1617, 256))
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
					else if (func_9(Local_1617.f_136, 32))
					{
						if (func_70(128))
						{
							iVar11 = func_280();
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
							if (func_279(1) > 0)
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
					else if (func_9(Local_1617.f_136, 256))
					{
						sVar1[0] = "LOG_WRK01CA";
						sVar1[1] = "LOG_WRK02CA";
						iVar6[1] = 1;
						sVar1[2] = "LOG_WRK03CA";
						iVar6[2] = 1;
						if (func_279(1) > 0)
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
							if (func_279(1) > 0)
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
						if (func_22(&Local_1617, 256))
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
				else if (func_9(Local_1617.f_136, 8))
				{
					sVar1[0] = "LOG_WRK01CH";
					sVar1[1] = "LOG_WRK02CH";
					iVar6[1] = 1;
					sVar1[2] = "LOG_WRK03CH";
					iVar6[2] = 1;
					sVar1[3] = "LOG_WRK04CH";
					iVar6[3] = 1;
				}
				else if (func_279(1) > 0)
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
	else if (func_279(1) > 0)
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
	Local_2147.f_33 = 15f;
	func_281(&sVar1, &iVar6, &Local_2147, bVar0);
}

void func_86()
{
	if (func_22(&Local_1617, 256))
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
		if (_0x800df3fc913355f3(func_169(iVar2)) && !are_strings_equal(_0xceb40b678e403759(func_238(iVar2)), sVar0))
		{
			_0x187d65f3aec5d679(func_238(iVar2), sVar0);
			iVar3 = func_63(iVar2);
			if ((does_entity_exist(iVar3) && !is_ped_active_in_scenario(iVar3, 1)) && !is_entity_a_mission_entity(iVar3))
			{
				task_persistent_character(iVar3);
			}
		}
		iVar2++;
	}
	iVar2 = Local_1617.f_138;
	if (_0x800df3fc913355f3(func_169(iVar2)) && !are_strings_equal(_0xceb40b678e403759(func_238(iVar2)), sVar0))
	{
		_0x187d65f3aec5d679(func_238(iVar2), sVar1);
	}
}

void func_87(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, float fParam8, bool bParam9)
{
	if ((*iParam6 % iParam7) == 0)
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
						(*uParam1)[iVar2] = func_282(iVar1, 1, 0);
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
						func_283(uParam2, iVar1, 0);
						if (fParam8 >= 0f)
						{
							set_ped_seeing_range(iVar1, fParam8);
						}
					}
					else
					{
						func_284(uParam2, iVar1, 0);
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
		*iParam5 = iVar2;
		*iParam6 = 0;
	}
	*iParam6++;
}

void func_88(int iParam0)
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

void func_89()
{
	if ((iLocal_206 % 10) == 0 && iVar610 < 4)
	{
		if (_does_volume_exist(&(iLocal_75[5])))
		{
			iVar5 = func_285(&uVar0, &uLocal_2182, 4, &(iLocal_75[5]), 0, 0, 0, -555162361, 1, 0, 1, 0);
			iVar6 = 0;
			while (iVar6 < iVar5)
			{
				if ((((!func_286(&(uVar0[iVar6]), &uLocal_607) && _get_last_mount(Global_35) != &uVar0[iVar6]) && func_287(0) != &uVar0[iVar6]) && func_287(1) != &uVar0[iVar6]) && !func_288(&(uVar0[iVar6])))
				{
					uLocal_607[iVar610] = &uVar0[iVar6];
					uLocal_612 = iVar610 + 1;
					if (iVar610 >= 4)
					{
					}
					else
					{
						iVar6++;
					}
					iVar7 = (iLocal_206 % 4);
					if (iVar7 < 4 && !is_entity_dead(&(uLocal_607[iVar7])))
					{
						if (!is_entity_a_mission_entity(&(uLocal_607[iVar7])))
						{
							set_entity_as_mission_entity(&(uLocal_607[iVar7]), true, false);
						}
						func_289(&(uLocal_607[iVar7]), &(iLocal_75[5]), 1, 0);
						set_ped_combat_attributes(&(uLocal_607[iVar7]), 45, false);
						set_ped_combat_attributes(&(uLocal_607[iVar7]), 51, false);
						set_ped_combat_attributes(&(uLocal_607[iVar7]), 71, false);
						func_284(&Local_1617, &(uLocal_607[iVar7]), 0);
						if (!does_entity_exist(_get_rider_of_mount(&(uLocal_607[iVar7]), false)))
						{
							if (!func_131(&(uLocal_607[iVar7]), 1351865802))
							{
								if (_is_scenario_group_enabled_hash(1368197280))
								{
									task_use_random_scenario_in_group(&(uLocal_607[iVar7]), 1368197280, 0, 0, 1);
								}
							}
						}
						else if (func_131(&(uLocal_607[iVar7]), 1435919172))
						{
							clear_ped_tasks(&(uLocal_607[iVar7]), 1, 0);
						}
					}
				}
			}
		}
	}
}

void func_90()
{
	if (!func_70(268435456))
	{
		if (func_70(134217728) || (get_frame_count() % 9) == 0)
		{
			func_71(134217728);
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
				sVar30 = func_290(&Var1, iVar31);
				if (!is_string_null_or_empty(sVar30))
				{
					_0xef51242e35242b47(sVar30);
				}
				iVar31++;
			}
			if (iVar0 == 8)
			{
				func_71(268435456);
			}
		}
	}
}

float func_91()
{
	if ((iLocal_98 == 1 && func_19(512)) && !func_19(262144))
	{
		return 1f;
	}
	return 2f;
}

float func_92()
{
	if ((iLocal_98 == 1 && func_19(512)) && !func_19(262144))
	{
		return 1f;
	}
	return 1.75f;
}

void func_93(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if (func_291(get_player_index(), 1, 1, 1))
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = (*Global_1392194)[uParam0->f_136]->f_6;
	}
	if (func_215(Global_35, iParam1, 1, 0))
	{
		set_ped_max_move_blend_ratio(Global_35, fParam2);
	}
	iVar0 = _get_last_mount(Global_35);
	if (func_215(iVar0, iParam1, 1, 0))
	{
		set_ped_max_move_blend_ratio(iVar0, fParam3);
	}
}

void func_94()
{
	if ((_does_volume_exist(&(iLocal_75[0])) && func_215(Global_35, &(iLocal_75[0]), 1, 0)) && !is_ped_on_mount(Global_35))
	{
		set_ped_max_move_blend_ratio(Global_35, 1.5f);
	}
}

int func_95()
{
	if (func_51(16384))
	{
		return 0;
	}
	iVar0 = iLocal_209;
	if ((((func_134(&Local_433, 2) || func_292(&Local_1617, &(Local_1617.f_28))) || func_293()) || func_294()) || func_295(func_63(Local_1617.f_138), 0, &Local_1617, &(Local_1617.f_28), 0, 0))
	{
		if (func_134(&Local_433, 2))
		{
		}
		else if (Local_1617.f_28 == 65536)
		{
			func_296(&Local_1617, &(Local_1617.f_28));
			return 0;
		}
		else if (Local_1617.f_28 == 32)
		{
			return func_297();
		}
		else if (Local_1617.f_28 == 8192 && func_298())
		{
			func_296(&Local_1617, &(Local_1617.f_28));
			return 0;
		}
		if (func_299(&(Local_1617.f_28)) && !func_70(67108864))
		{
			if (!func_134(&Local_433, 1))
			{
				Local_433 = func_63(Local_1617.f_138);
				func_301(&Local_433, &Local_1617, Local_1617.f_28, 55630, 0, 0);
				if (!is_string_null_or_empty(func_290(&Local_433, 0)))
				{
					StringCopy(Local_433.f_20[0], func_290(&Local_433, 0), 32);
					StringCopy(Local_433.f_20[1], func_290(&Local_433, 1), 32);
					func_302(&Local_433, 32);
				}
			}
			else if (Local_433.f_13 > 2)
			{
				func_302(&Local_433, 512);
			}
			func_296(&Local_1617, &(Local_1617.f_28));
			return 0;
		}
		return 1;
	}
	else if (((func_303(&uLocal_1923, &Local_1617, &(Local_1617.f_28), &iLocal_209, 0, (iLocal_190 - 1), 4) || func_303(&uLocal_2082, &Local_1617, &(Local_1617.f_28), &uLocal_207, 0, (iVar612 - 1), 1)) || func_303(&iLocal_2108, &Local_1617, &(Local_1617.f_28), &uLocal_208, 0, func_59(func_19(16384), Local_614.f_1 + 1, (Local_614.f_1 - 1)), 1)) || func_303(&uLocal_607, &Local_1617, &(Local_1617.f_28), &uLocal_613, 0, (iVar610 - 1), 3))
	{
		if (func_70(131072))
		{
			if ((_get_lassoed_entity(Global_35) == &uLocal_2082[0] || _is_ped_lassoed(&(uLocal_2082[0]))) || !get_is_task_active(&(uLocal_2082[0]), 3))
			{
				func_130(&(uLocal_2082[0]), 0, 0);
			}
		}
		if (func_299(&(Local_1617.f_28)))
		{
			if (Local_1617.f_28 == 8192 && func_298())
			{
				return 0;
			}
			if (!func_134(&Local_433, 1) && !func_19(32))
			{
				if (Local_1617.f_28 == 8 && func_304())
				{
					return 1;
				}
				if (func_19(64) && Local_1617.f_10 == &uLocal_2082[0])
				{
					if (Local_1617.f_28 != 65536)
					{
						func_301(&Local_433, &Local_1617, Local_1617.f_28, 55630, 0, 0);
						func_302(&Local_433, 64);
						StringCopy(Local_433.f_20[0], "LCMPF_IG_TFAIM", 32);
						func_302(&Local_433, 32);
					}
				}
				else
				{
					func_301(&Local_433, &Local_1617, Local_1617.f_28, 55630, 0, 0);
				}
			}
			func_296(&Local_1617, &(Local_1617.f_28));
			return 0;
		}
		else if (Local_1617.f_28 == 32)
		{
			return func_297();
		}
		return 1;
	}
	else if (func_305(&Local_1617, &Local_433, 55630))
	{
		if (!func_134(&Local_433, 1))
		{
			func_301(&Local_433, &Local_1617, 1024, 55630, 0, 0);
			if (iVar431 == func_63(Local_1617.f_138) && !is_string_null_or_empty(func_290(&Local_433, 0)))
			{
				StringCopy(Local_433.f_20[0], func_290(&Local_433, 0), 32);
				StringCopy(Local_433.f_20[1], func_290(&Local_433, 1), 32);
				func_302(&Local_433, 32);
			}
			func_296(&Local_1617, &(Local_1617.f_28));
			return 0;
		}
		else
		{
			func_302(&Local_433, 512);
		}
	}
	else if (func_306())
	{
		Local_1617.f_28 = 2;
		return 1;
	}
	iVar1 = func_307(iVar0 + 4, (iLocal_190 - 1));
	iVar0 = iVar0;
	while (iVar0 <= iVar1)
	{
		if (&uLocal_1985[iVar0] < Local_1617.f_19 && func_308(&(uLocal_1923[iVar0]), &Local_1617, 0, &(uLocal_1985[iVar0])))
		{
			func_48(vLocal_570[6]);
		}
		else
		{
			iVar0++;
			iVar0++;
		}
	}
	if (func_224(vLocal_570[6], 10f))
	{
		func_309(&Local_1617, &(Local_1617.f_28));
	}
	return 0;
}

void func_96(int* iParam0, var uParam1, bool bParam2)
{
	func_268(&(iParam0->f_6));
	iParam0->f_5 = -1;
	func_136(iParam0, 1);
	func_136(iParam0, 4);
	func_136(iParam0, 32);
	func_136(iParam0, 128);
	func_136(iParam0, 64);
	func_136(iParam0, 8);
	func_136(iParam0, 256);
	func_136(iParam0, 512);
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

void func_97(var uParam0)
{
	if (func_310(uParam0->f_32))
	{
		func_311(&(uParam0->f_32), 1, 1);
	}
	if (func_310(uParam0->f_33))
	{
		func_311(&(uParam0->f_33), 1, 1);
	}
	if (func_310(uParam0->f_34))
	{
		func_311(&(uParam0->f_34), 1, 1);
	}
}

void func_98(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

void func_99()
{
	if (func_51(32))
	{
		func_312(0);
		func_313(11, 128);
		func_50(32);
	}
}

bool func_100(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_101(int iParam0)
{
	iVar0 = func_314(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_102(int iParam0, bool bParam1, int iParam2)
{
	if (!func_100(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_101(iParam0) && !func_315(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_316(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_101(iParam0))
	{
		iParam2 = -1;
	}
	if (func_317(iParam0) == 3 || (func_317(iParam0) == 1 && _0x01f4d242765c6b24(func_316(iParam0))))
	{
		func_319(func_318(iParam0), func_316(iParam0), iParam2);
		if ((!func_100(Global_1572864->f_8) && !func_146(0, 1, 0)) && !func_320(&Global_1935630, 32768))
		{
			iVar0 = func_321(iParam0);
			if (iVar0 != -1)
			{
				func_322(0);
			}
			else if (func_318(iParam0) == 8)
			{
				iVar0 = func_323();
				if (iVar0 != -1)
				{
					func_322(0);
				}
			}
		}
	}
	func_324(iParam0, 0);
	if (func_325(0) == iParam0)
	{
		func_103(1);
		func_326(0);
		func_327(1);
	}
	func_328(iParam0, 1);
	func_329(iParam0);
}

void func_103(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_330(Global_1935630, 4194304);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_331(Global_1935630, 4194304);
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

bool func_104(int iParam0)
{
	iVar0 = _0x5407b7288d0478b7(Global_35, iParam0);
	return iVar0 > 0;
}

void func_105()
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		iVar1 = func_332(iVar0);
		switch (iVar1)
		{
			case 2:
			case 9:
			case 10:
				break;
			case 0:
			case 1:
				if (func_19(262144) && !func_333())
				{
					func_217(Local_492[iVar0]);
				}
				break;
			case 6:
				if (func_334(Local_492[6]))
				{
					freeze_entity_position(Local_614.f_690[14]->f_8, false);
					activate_physics(Local_614.f_690[14]->f_8);
					func_336(Local_492[6], func_63(func_335(6, 0, 0)), "PED1");
					func_336(Local_492[6], func_63(func_335(6, 1, 0)), "PED2");
					func_217(Local_492[6]);
				}
				break;
			default:
				func_217(Local_492[iVar0]);
				break;
		}
		iVar0++;
	}
}

void func_106()
{
	if (!is_entity_dead(&(iLocal_2108[0])))
	{
		func_337(iLocal_2108[0]);
		set_ped_config_flag(&(iLocal_2108[0]), 136, false);
		_task_smart_flee_style_ped(&(iLocal_2108[0]), Global_35, 4, 0, -1082130432, -1, 0);
	}
}

void func_107()
{
	_0xc6366a585659d15c(get_player_index(), "");
	_0x98cd760de43b612e(get_player_index(), "");
	_0x8af46e5159a5b620(Global_35, 0);
}

void func_108(bool bParam0)
{
	if (func_70(512) || bParam0)
	{
		if (func_254(iVar603, 0, 1))
		{
			set_ped_config_flag(iVar603, 136, false);
			func_338(iVar603, 0);
		}
		func_339(512);
	}
}

void func_109(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_310((*uParam0)[iVar0]->f_6))
			{
				if (!bParam4 && is_bit_set(uParam0[iVar0], 11))
				{
				}
				else
				{
					func_311(&((*uParam0)[iVar0]->f_6), 1, 1);
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

void func_110(int iParam0)
{
	func_268(&uLocal_0);
	func_340(1, iParam0, 0);
	_0xdd1232b332cbb9e7(3, 1, 0);
	func_341();
}

void func_111(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_112()
{
	if (_does_volume_exist(&(iLocal_75[4])))
	{
		_0x2c87c3e1c7b96ee2(&(iLocal_75[4]));
		_0x74c2b3dc0b294102(&(iLocal_75[4]));
		_0xa1cfb35069d23c23(&(iLocal_75[4]));
	}
	func_111(&(iLocal_75[4]));
	func_111(&(iLocal_75[9]));
	func_111(&(iLocal_75[10]));
	func_111(&(iLocal_75[20]));
}

void func_113(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_98((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_114(int iParam0, int iParam1)
{
	Global_40.f_9096[iParam0]->f_9 = &Global_40.f_9096[iParam0];
	Global_40.f_9096[iParam0]->f_10 = Global_40.f_9096[iParam0]->f_3;
	func_342(iParam0, iParam1, 0, 0, 0, 1);
	func_10(iParam0, 32768);
	func_15(iParam0, 16777216);
	func_206(iParam0, 4194304);
}

void func_115(int iParam0)
{
	func_296(iParam0, &(iParam0->f_28));
	func_343(iParam0, 1);
	func_191(iParam0, 0);
	func_344(iParam0, 0);
	func_345(iParam0, 0);
	func_41(iParam0, 0);
}

bool func_116(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_346(iParam0, iParam1, sParam2, iParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

bool func_117(int iParam0)
{
	return (iLocal_102 && iParam0) != 0;
}

int func_118(var uParam0, int iParam1)
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

void func_119()
{
	if (func_19(64))
	{
		func_347();
	}
	func_348(-1);
	if (iLocal_98 == 2 || (iLocal_98 == 3 && func_19(262144)))
	{
		func_9(1, 2);
		func_349();
	}
	if (iLocal_98 == 3)
	{
		func_350();
	}
}

int func_120(int iParam0, int iParam1, int iParam2)
{
	if ((func_351(iParam0, 16777216) && func_351(iParam0, 33554432)) && func_351(iParam0, 268435456))
	{
		return 379542007;
	}
	iVar0 = _0xf8204ef17410bf43(416676503, iParam1, iParam2, 0);
	iVar1 = _0xf8204ef17410bf43(-1101297303, iParam1, iParam2, 0);
	iVar2 = 392538360;
	iVar3 = 0;
	if (!func_351(iParam0, 33554432))
	{
		iVar3 = iVar1;
	}
	if (!func_351(iParam0, 16777216))
	{
		if (!func_352(iVar3) || _0xf2f585411e748b9c(iVar0, 0) > _0xf2f585411e748b9c(iVar3, 0))
		{
			iVar3 = iVar0;
		}
	}
	if (!func_351(iParam0, 268435456) && func_353(iVar2))
	{
		if (!func_352(iVar3) || _0xf2f585411e748b9c(iVar2, 0) > _0xf2f585411e748b9c(iVar3, 0))
		{
			iVar3 = iVar2;
		}
	}
	if (!func_352(iVar3))
	{
		return 379542007;
	}
	return iVar3;
}

void func_121(int iParam0, int iParam1, int* iParam2, bool bParam3, int iParam4, int iParam5)
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
	func_354(iParam1);
	func_98(iParam2);
	if (!is_entity_dead(iParam1))
	{
		_0xfc3db99c8144cd81(iParam1, (*Global_1392194)[iParam0->f_136]->f_5, 0, false, 0);
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
			func_355(iParam1, iParam2, iVar0, 580546400, 0, 0);
			if (func_356(iParam1))
			{
				iParam4 = func_357(iParam1);
			}
			if (is_ped_human(iParam1))
			{
				bVar2 = func_358(iParam1, 0, 1, 0) != iParam4;
				if (bVar2)
				{
					_give_weapon_to_ped_2(iParam1, iParam4, 100, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
			}
			if (func_352(iParam4))
			{
				set_current_ped_weapon(iParam1, iParam4, true, 0, false, false);
			}
			open_sequence_task(&iVar1);
			if (is_ped_human(iParam1))
			{
				if (func_352(iParam4))
				{
					task_swap_weapon(0, 1, 0, 0, 0);
				}
				if (!is_ped_using_any_scenario(iParam1) && bVar2)
				{
					task_react(0, Global_35, 0f, 0f, 0f, func_359(), 0.5f, 0, 4);
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

int func_122(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, float fParam10)
{
	bParam7 = (bParam7 || func_22(iParam0, 4096));
	iVar2 = 0;
	while (iVar2 < *uParam1)
	{
		if (!is_entity_dead(uParam1[iVar2]))
		{
			if (!func_286(uParam1[iVar2], &(iParam0->f_140)))
			{
				set_ped_config_flag(uParam1[iVar2], 146, false);
				set_ped_config_flag(uParam1[iVar2], 277, false);
				set_ped_config_flag(uParam1[iVar2], 178, true);
				set_ped_can_be_targetted(uParam1[iVar2], true);
				iVar3 = func_360(uParam1[iVar2], 0);
				if (func_157(iVar3))
				{
					func_62(iVar3, 1, 1);
				}
				_0xfc3db99c8144cd81(uParam1[iVar2], (*Global_1392194)[iParam0->f_136]->f_5, 0, false, 0);
				if (func_361(uParam1[iVar2], (iParam5 == -1 || iVar1 < iParam5), (bParam8 || bParam7)))
				{
					if (bParam6)
					{
						_0x802092b07e3b1eea(uParam1[iVar2], Global_36, 3);
						clear_ped_tasks(uParam1[iVar2], 1, 0);
					}
					_0x802092b07e3b1eea(uParam1[iVar2], Global_36, 3);
					set_ped_relationship_group_hash(uParam1[iVar2], 1269650476);
					func_355(uParam1[iVar2], (*uParam2)[iVar2], 831283580, 580546400, 0, 0);
					set_ped_combat_attributes(uParam1[iVar2], 58, true);
					set_ped_combat_attributes(uParam1[iVar2], 5, true);
					set_ped_combat_attributes(uParam1[iVar2], 71, true);
					set_ped_combat_attributes(uParam1[iVar2], 31, true);
					if (func_356(uParam1[iVar2]))
					{
						iVar4 = func_357(uParam1[iVar2]);
					}
					if (is_ped_human(uParam1[iVar2]))
					{
						if (func_362((*uParam1)[iVar2], iVar4, (bParam8 || bParam7)))
						{
							_give_weapon_to_ped_2(uParam1[iVar2], iParam3, 100, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
							if (func_352(iVar4))
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
						if (func_352(iVar4))
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
						else if (!func_356(uParam1[iVar2]))
						{
							task_react(0, Global_35, 0f, 0f, 0f, func_359(), 0.5f, 0, 4);
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
					func_363((*uParam1)[iVar2], iParam9, fParam10);
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

int func_123(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, float fParam11)
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
		func_162(&iVar4, &iVar5, func_9(1, 1048576));
	}
	else
	{
		func_163(iParam0->f_137, &iVar4, &iVar5, 1, 0);
	}
	iVar3 = iVar4;
	while (iVar3 <= iVar5)
	{
		if (!func_157(iVar3))
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
			if (!is_entity_dead(iVar6) && !func_286(iVar6, &(iParam0->f_140)))
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
				_0xfc3db99c8144cd81(iVar6, (*Global_1392194)[iParam0->f_136]->f_5, 0, false, 0);
				if ((func_361(iVar6, (iParam3 == -1 || iVar1 < iParam3), (bParam9 || bParam8)) || iVar3 == 808) || iVar3 == 809)
				{
					_0x802092b07e3b1eea(iVar6, Global_36, 3);
					set_ped_relationship_group_hash(iVar6, 1269650476);
					func_355(iVar6, (*uParam2)[iVar0], 831283580, 580546400, 0, 0);
					set_ped_combat_attributes(iVar6, 58, true);
					set_ped_combat_attributes(iVar6, 5, true);
					set_ped_combat_attributes(iVar6, 71, true);
					set_ped_combat_attributes(iVar6, 31, true);
					if (func_356(iVar6))
					{
						iVar7 = func_357(iVar6);
					}
					if (is_ped_human(iVar6))
					{
						if (func_362(&iVar6, iVar7, (bParam9 || bParam8)))
						{
							_give_weapon_to_ped_2(iVar6, iParam4, 100, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
							if (func_352(iVar7))
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
					if (func_352(iVar7))
					{
						task_swap_weapon(0, 1, 0, 0, 0);
					}
					if (is_ped_human(iVar6) && !func_356(iVar6))
					{
						task_react(0, Global_35, 0f, 0f, 0f, func_359(), 0.5f, 0, 4);
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
					if ((bParam7 || func_282(iVar6, 1, 1) < 15f) || func_364())
					{
						clear_ped_tasks(iVar6, 1, 0);
						set_ped_config_flag(iVar6, 178, false);
						_task_smart_flee_style_ped(iVar6, Global_35, 4, 0, -1082130432, -1, 0);
						set_ped_keep_task(iVar6, true);
						func_363(&iVar6, iParam10, fParam11);
					}
					else
					{
						open_sequence_task(&iVar2);
						task_react(0, Global_35, 0f, 0f, 0f, func_359(), 0.5f, 0, 4);
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

int func_124(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_254(uParam0[iVar0], 0, 1))
		{
			if (decor_exist_on(uParam0[iVar0], "bCowering"))
			{
				if ((func_295(uParam0[iVar0], 0, iParam1, &(iParam1->f_28), 0, 0) || func_365(uParam0[iVar0], iParam1, &(iParam1->f_28), 0)) || func_366(uParam0[iVar0], Global_35, 1, 1) < 8f)
				{
					if (iParam1->f_28 != 32 || func_367((*uParam0)[iVar0], iParam1, 1097859072))
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

void func_125()
{
	iVar0 = 0;
	while (iVar0 < iLocal_205)
	{
		if ((!is_entity_dead(&(Local_1617.f_140[iVar0])) && !func_131(&(Local_1617.f_140[iVar0]), 518218985)) && !get_is_task_active(&(Local_1617.f_140[iVar0]), 3))
		{
			_task_smart_flee_style_ped(&(Local_1617.f_140[iVar0]), Global_35, 4, 0, -1082130432, -1, 0);
		}
		iVar0++;
	}
}

bool func_126(int iParam0, int iParam1, int* iParam2, bool bParam3)
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
				func_121(iParam0, iParam1, iParam2, bParam3, 379542007, 0);
				iParam0->f_31 = 2;
				return true;
			}
			break;
		case 2:
			return true;
	}
	return false;
}

bool func_127()
{
	if (((!_does_anim_scene_exist(&(Local_492[2])) || func_368(Local_492[2])) || func_369(Local_492[2], "COWER_R_LOOP")) || func_369(Local_492[2], "COWER_L_LOOP"))
	{
		return true;
	}
	return false;
}

void func_128(int iParam0)
{
	iLocal_99 = (iLocal_99 - (iLocal_99 && iParam0));
}

bool func_129()
{
	if (!does_rayfire_map_object_exist(&(iLocal_466[0])))
	{
		if (!is_entity_visible(Local_614.f_690[24]->f_8))
		{
			set_entity_visible(Local_614.f_690[24]->f_8, true);
		}
		if (get_entity_collision_disabled(Local_614.f_690[24]->f_8))
		{
			set_entity_collision(Local_614.f_690[24]->f_8, true, false);
		}
		return false;
	}
	if (!is_entity_visible(Local_614.f_690[24]->f_8))
	{
		fVar0 = get_rayfire_map_object_anim_phase(&(iLocal_466[0]));
		if (fVar0 > 0.9625f || get_state_of_rayfire_map_object(&(iLocal_466[0])) == 10)
		{
			set_entity_visible(Local_614.f_690[24]->f_8, true);
			set_entity_collision(Local_614.f_690[24]->f_8, true, false);
			func_370(991016631);
		}
	}
	else if (get_entity_collision_disabled(Local_614.f_690[24]->f_8))
	{
		fVar0 = get_rayfire_map_object_anim_phase(&(iLocal_466[0]));
		if (fVar0 > 0.997f)
		{
			set_entity_collision(Local_614.f_690[24]->f_8, true, false);
			func_371(-926795318);
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_130(int iParam0, bool bParam1, bool bParam2)
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

bool func_131(int iParam0, int iParam1)
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

bool func_132(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5)
{
	if (iParam0->f_136 == 1)
	{
		func_162(&iVar1, &iVar2, func_9(1, 1048576));
	}
	else
	{
		func_163(iParam0->f_137, &iVar1, &iVar2, 1, 0);
	}
	iVar0 = iVar1;
	while (iVar0 <= iVar2)
	{
		if (!func_157(iVar0))
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
					if (func_372(iParam0, iVar3))
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
			if (func_372(iParam0, iParam5))
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
				if (func_372(iParam0, uParam1[iVar4]))
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
				if (func_372(iParam0, iParam2[iVar4]))
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

void func_133(int iParam0)
{
	if (!func_373(&(iParam0->f_9[0])))
	{
		return;
	}
	iVar1 = &iParam0->f_9[0];
	func_374(&iVar1, 0, iParam0->f_4, 0, 0, 0, 0, 0);
	if (func_375(iVar1, 1))
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
			func_136(iParam0, 16);
			iParam0->f_4 = 30;
		}
	}
}

bool func_134(int iParam0, int iParam1)
{
	return func_376(iParam0->f_17, iParam1);
}

void func_135(var uParam0, int* iParam1, int* iParam2, var uParam3)
{
	if (is_entity_dead(*iParam1))
	{
		func_96(iParam1, uParam0, 0);
		return;
	}
	func_377(iParam1);
	if (func_134(iParam1, 4))
	{
		if (iParam1->f_13 < 7)
		{
			func_378(iParam1, 7);
		}
		func_136(iParam1, 4);
	}
	if (func_134(iParam1, 256))
	{
		func_379(iParam1, iParam2, uParam3, 0);
	}
	if (func_134(iParam1, 512) && iParam1->f_13 > 2)
	{
		if (iParam1->f_2 > 2)
		{
			iParam1->f_2 = 0;
			func_48(&(iParam1->f_6));
			func_378(iParam1, 2);
		}
		iParam1->f_2++;
		func_136(iParam1, 512);
	}
	switch (iParam1->f_13)
	{
		case 0:
			func_48(&(iParam1->f_6));
			if (*iParam1 == 0)
			{
				func_378(iParam1, 9);
				return;
			}
			if (is_entity_dead(*iParam1))
			{
				func_378(iParam1, 9);
				return;
			}
			iParam1->f_5 = func_360(*iParam1, 0);
			if (iParam1->f_5 != -1)
			{
				if (!func_266(iParam1->f_5, 0))
				{
					func_380(iParam1->f_5);
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
				func_302(iParam1, 8);
			}
			if (!func_260(*iParam1, 1))
			{
				sVar1 = func_381(uParam0->f_136, -1);
				if (!is_string_null_or_empty(sVar1))
				{
					func_261(*iParam1, sVar1, 0);
				}
			}
			if (func_134(iParam1, 64))
			{
			}
			else if (iParam1->f_16 == 5)
			{
			}
			else if (func_382(*iParam1))
			{
				task_dismount_animal(*iParam1, 16777216, 0, 0, 0, 0);
			}
			else if (is_ped_in_any_vehicle(*iParam1, true))
			{
				task_leave_any_vehicle(*iParam1, 0, 0);
			}
			func_378(iParam1, 1);
			break;
		case 1:
			if (func_157(iParam1->f_5))
			{
				if (!func_266(iParam1->f_5, 0))
				{
					func_380(iParam1->f_5);
				}
			}
			if (func_383(&(iParam1->f_6)) < 5f && ((func_131(*iParam1, 501393341) || func_131(*iParam1, -828834893)) || func_131(*iParam1, 451360105)))
			{
				return;
			}
			func_48(&(iParam1->f_6));
			if (iParam1->f_16 == 5)
			{
				func_378(iParam1, 3);
				set_blocking_of_non_temporary_events(*iParam1, false);
				return;
			}
			if (is_entity_dead(*iParam1))
			{
				func_378(iParam1, 9);
				return;
			}
			if (!func_134(iParam1, 64))
			{
				_0x62fdad5e01d2dd47(*iParam1, Global_36, 3, 0);
				clear_ped_tasks(*iParam1, 1, 0);
				open_sequence_task(&iVar0);
				if (func_384(iParam1) && (func_385(*iParam1, Global_35, 1) > 9f || _0xcb690f680a3ea971(*iParam1, 4)))
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
			func_386(249295937, *iParam1, 1);
			if (!is_string_null_or_empty(iParam1->f_20[0]))
			{
				if (func_134(iParam1, 32))
				{
					func_387(&(uParam0->f_35), iParam1->f_20[0], *iParam1, Global_35, 0, 0, 1, 1);
				}
				else
				{
					func_116(*iParam1, Global_35, iParam1->f_20[0], 0, -1082130432, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				}
			}
			else
			{
				func_116(*iParam1, Global_35, func_388(iParam1, 1), 0, -1082130432, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
			}
			if (iParam1->f_16 == 5)
			{
				func_378(iParam1, 3);
			}
			else
			{
				func_378(iParam1, 2);
			}
			break;
		case 3:
			if ((is_any_speech_playing(*iParam1) || !func_256(0, 1, *iParam1, 1)) || func_389(iParam1->f_20[0]))
			{
				return;
			}
			if (func_390(*iParam1, 1, 1, 1, 0, 0))
			{
				if (func_383(&(iParam1->f_6)) < 10f)
				{
					return;
				}
				else
				{
					func_302(iParam1, 2);
					func_378(iParam1, 9);
					return;
				}
			}
			func_378(iParam1, 5);
			break;
		case 4:
			if (func_157(iParam1->f_5))
			{
				if (!func_266(iParam1->f_5, 0))
				{
					func_380(iParam1->f_5);
				}
			}
			if ((is_any_speech_playing(*iParam1) || !func_256(0, 1, *iParam1, 1)) || func_389(iParam1->f_20[0]))
			{
				return;
			}
			if (func_390(*iParam1, 1, 1, 1, 0, 0))
			{
				if (func_383(&(iParam1->f_6)) < 10f)
				{
					return;
				}
				else
				{
					func_302(iParam1, 2);
					func_378(iParam1, 9);
					return;
				}
			}
			func_378(iParam1, 5);
			break;
		case 5:
			if (func_157(iParam1->f_5))
			{
				if (!func_266(iParam1->f_5, 0))
				{
					func_380(iParam1->f_5);
				}
			}
			if ((is_any_speech_playing(*iParam1) || !func_256(0, 1, *iParam1, 1)) || func_389(iParam1->f_20[0]))
			{
				return;
			}
			if (func_390(*iParam1, 1, 1, 1, 0, 0))
			{
				if (func_383(&(iParam1->f_6)) < 10f)
				{
					func_378(iParam1, 3);
					return;
				}
				else
				{
					func_302(iParam1, 2);
					func_378(iParam1, 9);
					return;
				}
			}
			func_48(&(iParam1->f_6));
			func_378(iParam1, 7);
			break;
		case 2:
			if (func_157(iParam1->f_5))
			{
				if (!func_266(iParam1->f_5, 0))
				{
					func_380(iParam1->f_5);
				}
			}
			if ((is_any_speech_playing(*iParam1) || !func_256(0, 1, *iParam1, 1)) || func_389(iParam1->f_20[0]))
			{
				return;
			}
			if (((iParam1->f_16 != 5 && func_383(&(iParam1->f_6)) < 25f) && func_131(*iParam1, 242628503)) && func_385(*iParam1, Global_35, 1) > 9f)
			{
				return;
			}
			if (is_entity_dead(*iParam1))
			{
				func_378(iParam1, 9);
				return;
			}
			if (!func_134(iParam1, 64))
			{
				switch (iParam1->f_16)
				{
					case -1:
					case 2:
					case 4:
						clear_ped_tasks(*iParam1, 1, 0);
						if (!func_134(iParam1, 4) && !_0xcb690f680a3ea971(*iParam1, 7))
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
						if (func_134(iParam1, 16))
						{
							clear_ped_tasks(*iParam1, 1, 0);
							if (!func_134(iParam1, 4) && !_0xcb690f680a3ea971(*iParam1, 7))
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
									if (!func_134(iParam1, 4) && !_0xcb690f680a3ea971(*iParam1, 7))
									{
										task_confront(*iParam1, Global_35, 2);
									}
									break;
							}
						}
						break;
					case 8:
						clear_ped_tasks(*iParam1, 1, 0);
						if (func_134(iParam1, 16))
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
			func_386(249295937, *iParam1, 1);
			if (!is_string_null_or_empty(iParam1->f_20[1]))
			{
				if (func_134(iParam1, 32))
				{
					func_387(&(uParam0->f_35), iParam1->f_20[1], *iParam1, Global_35, 0, 0, 1, 1);
				}
				else
				{
					func_116(*iParam1, Global_35, iParam1->f_20[1], 0, -1082130432, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				}
			}
			else
			{
				func_116(*iParam1, Global_35, func_388(iParam1, 2), 0, -1082130432, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
			}
			switch (iParam1->f_16)
			{
				case 1:
				case 3:
				case 6:
				case 8:
					func_378(iParam1, 6);
					break;
				default:
					func_378(iParam1, 7);
					break;
			}
			break;
		case 6:
			if (func_157(iParam1->f_5))
			{
				if (!func_266(iParam1->f_5, 0))
				{
					func_380(iParam1->f_5);
				}
			}
			if (is_any_speech_playing(*iParam1) || !func_256(0, 1, *iParam1, 1))
			{
				return;
			}
			if ((!func_134(iParam1, 4) && func_131(*iParam1, -1942934348)) && func_383(&(iParam1->f_6)) < 5f)
			{
				return;
			}
			if (func_383(&(iParam1->f_6)) < 15f)
			{
				return;
			}
			func_48(&(iParam1->f_6));
			if (is_entity_dead(*iParam1))
			{
				func_378(iParam1, 9);
				return;
			}
			func_378(iParam1, 7);
			break;
		case 7:
			if (func_157(iParam1->f_5))
			{
				if (!func_266(iParam1->f_5, 0))
				{
					func_380(iParam1->f_5);
				}
			}
			if (is_any_speech_playing(*iParam1) || !func_256(0, 1, *iParam1, 1))
			{
				return;
			}
			if ((!func_134(iParam1, 4) && func_131(*iParam1, -1942934348)) && func_383(&(iParam1->f_6)) < 5f)
			{
				return;
			}
			if (iParam1->f_16 == 1 && does_entity_exist(func_391(Global_35)))
			{
				func_302(iParam1, 2);
			}
			func_48(&(iParam1->f_6));
			if (is_entity_dead(*iParam1))
			{
				func_378(iParam1, 9);
				return;
			}
			if (!func_134(iParam1, 64))
			{
				clear_ped_tasks(*iParam1, 1, 0);
			}
			func_378(iParam1, 8);
			break;
		case 8:
			if (func_157(iParam1->f_5))
			{
				if (!func_266(iParam1->f_5, 0))
				{
					func_380(iParam1->f_5);
				}
			}
			if (func_393(&(iParam1->f_6), func_392(iParam1)))
			{
				stop_ped_speaking(*iParam1, false);
				if (!func_134(iParam1, 64) && !func_134(iParam1, 128))
				{
					if (iParam1->f_5 != -1)
					{
						func_77(iParam1->f_5, 1);
					}
					else
					{
						set_ped_as_no_longer_needed(iParam1);
					}
				}
				func_378(iParam1, 9);
			}
			break;
		case 9:
			func_394(iParam1, iParam2, uParam3);
			func_96(iParam1, uParam0, 0);
			break;
	}
}

void func_136(int iParam0, int iParam1)
{
	func_201(&(iParam0->f_17), iParam1);
}

int func_137()
{
	if (iLocal_98 >= 4)
	{
		return func_395();
	}
	if (func_22(&Local_1617, 32))
	{
		if (iLocal_98 == 3 && !func_9(Local_1617.f_136, 32))
		{
			iVar0 = 0;
			while (iVar0 < Local_614.f_1)
			{
				func_396(&iVar0);
				iVar0++;
			}
		}
		return 0;
	}
	func_397(&uLocal_195, 2);
	if (func_19(8192))
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			bVar3 = func_398(iVar603, func_7(iVar1));
			if (bVar3)
			{
				func_399(iVar1, iVar2);
				iVar2++;
			}
			iVar1++;
		}
	}
	if (!func_117(512))
	{
		func_400();
		func_401();
	}
	if (!func_51(67108864))
	{
		func_402(0);
		func_403(0, 1, 1);
		func_58(67108864);
	}
	iVar4 = func_63(Local_1617.f_138);
	if (!is_entity_dead(iVar4))
	{
		if (iVar4 != iLocal_155)
		{
			iLocal_155 = iVar4;
			func_78(Local_211[0], 0);
		}
		func_67(&(Local_1617.f_35), iVar4, "EA_LCMP_Foreman", 0);
		func_404(&iVar4);
		set_ped_reset_flag(iVar4, 49, true);
	}
	if ((iLocal_98 == 1 || iLocal_98 == 2) || (iLocal_98 == 3 && func_5(Local_1617.f_136, 128)))
	{
		func_405(&iVar4);
	}
	if (iLocal_98 < 4)
	{
		func_406();
	}
	func_407();
	func_408(&iVar4);
	if (!func_19(128))
	{
		if (iLocal_98 == 3 && !func_5(Local_1617.f_136, 128))
		{
			func_409();
		}
		func_410();
		return 0;
	}
	func_411();
	if (func_19(16384))
	{
		func_412(iLocal_2108[0]);
	}
	if (!func_19(16) && !func_19(64))
	{
		bVar5 = func_19(1);
		func_414(iVar4, uLocal_2102[0], &Local_1617, func_19(262144), &bVar5, 1, func_413());
		func_13(1, bVar5);
	}
	if (does_entity_exist(&(iLocal_2105[0])) && !_0x53784cea0159439b(&(iLocal_2105[0])))
	{
		_0xd80faf919a2e56ea(&(iLocal_2105[0]), 1242644044);
	}
	func_415();
	if (func_19(64) && !func_19(4))
	{
		func_13(4, func_416(&iVar4, uLocal_2082[0]));
		return 0;
	}
	if (func_19(64) && func_19(4))
	{
		func_417(&iVar4);
		func_418(uLocal_2082[0]);
	}
	if (iLocal_98 == 1)
	{
		if (does_entity_exist(&(iLocal_2105[0])) && !_0x083d497d57b7400f(&(iLocal_2105[0])))
		{
			set_entity_coords(&(iLocal_2105[0]), Local_614.f_304[0]->f_6, true, false, true, true);
			freeze_entity_position(&(iLocal_2105[0]), true);
			_0xba8818212633500a(&(iLocal_2105[0]), 0, 1);
		}
	}
	if (!func_19(32))
	{
		if (func_19(262144))
		{
			Local_2147.f_2[0] = "LOG_WRK02";
			if (!func_19(16))
			{
				switch (iLocal_98)
				{
					case 2:
					case 3:
						if (!func_19(-2147483648) && func_9(1, 2))
						{
							return func_419(&iVar4);
						}
						else
						{
							return func_420(&iVar4);
						}
						break;
					default:
						return func_420(&iVar4);
				}
			}
			else
			{
				return func_421(&iVar4);
			}
		}
		else
		{
			switch (iLocal_98)
			{
				case 1:
					if (!func_19(16))
					{
						return func_422(&iVar4);
					}
					else
					{
						return func_421(&iVar4);
					}
					break;
				case 2:
					if (!func_19(16))
					{
						if (!func_19(-2147483648) && func_9(1, 2))
						{
							return func_419(&iVar4);
						}
						else
						{
							return func_420(&iVar4);
						}
					}
					else
					{
						return func_421(&iVar4);
					}
					break;
				case 3:
					func_423(uLocal_2082[0], 0);
					func_423(uLocal_2082[1], 1);
					func_424();
					func_425();
					if (func_9(Local_1617.f_136, 256) || func_426(&iVar4))
					{
						return func_427(&iVar4);
					}
					break;
				case 4:
				case 5:
					return func_395();
			}
		}
	}
	return 0;
}

void func_138()
{
	func_428();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_429(iVar0) && !func_430(iVar0))
		{
			if (!does_rayfire_map_object_exist(&(iLocal_466[iVar0])))
			{
				if (!(iVar0 == 0 && func_19(512)))
				{
				}
			}
			else
			{
				fVar1 = get_rayfire_map_object_anim_phase(&(iLocal_466[iVar0]));
				if (fVar1 >= (func_431(iVar0) - 0.007544f) && fVar1 <= func_432(iVar0))
				{
					func_433();
				}
				switch (iVar601)
				{
					case 0:
						if (fVar1 >= func_431(iVar0) && fVar1 < func_432(iVar0))
						{
							set_pad_shake(0, 400, func_434(iVar0));
							func_435(iVar0);
							_0x017492b2201e3428("SHOCKWAVE_TREE_FALL", func_436(iVar0));
							iVar2 = _get_last_mount(Global_35);
							if (!is_entity_dead(iVar2) && func_438(iVar2, func_437(iVar0), 1) < 10f)
							{
								_0xbae08f00021bffb2(iVar2, func_364());
							}
							iLocal_603 = 1;
						}
						break;
					case 1:
						if (fVar1 >= func_432(iVar0))
						{
							add_shocking_event_at_position(-1905235087, func_436(iVar0), -1f, 100f, 100f, -1f, (30f + 5f), -1, -1);
							func_58(8192);
							set_pad_shake(0, 300, (func_434(iVar0) / 2));
							iLocal_603 = 2;
						}
						break;
					case 2:
						func_111(&(iLocal_75[2]));
						func_111(&(iLocal_75[3]));
						iLocal_603 = 0;
						break;
				}
			}
		}
		iVar0++;
	}
}

bool func_139()
{
	if (func_22(&Local_1617, 1024))
	{
		return true;
	}
	if (bVar2252)
	{
		return true;
	}
	if (iVar2249 == 1)
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
	if (func_439(bVar2252))
	{
		return true;
	}
	return false;
}

bool func_140(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return false;
	}
	return true;
}

int func_141(int iParam0)
{
	if (!func_140(iParam0))
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

bool func_142(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

void func_143(int iParam0, int iParam1)
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

Vector3 func_144(int iParam0, int iParam1)
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

void func_145(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_146(int iParam0, bool bParam1, bool bParam2)
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
		if (func_440())
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
		iVar0 = func_441(&(Global_1898164->f_1[0]));
		if (func_442(iVar0) && func_443((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_100(&(Global_1898164->f_1[0])))
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

bool func_147()
{
	return func_444(64);
}

bool func_148(int iParam0, bool bParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_ped_injured(iParam0) || !bParam1)
		{
			iVar0 = get_interior_from_entity(iParam0);
			if (is_valid_interior(iVar0))
			{
				if (func_445(iVar0) || func_446(iVar0))
				{
					return false;
				}
				return true;
			}
		}
	}
	return false;
}

bool func_149()
{
	return Global_1310750->f_16077 != 0;
}

int func_150()
{
	return Global_1310750->f_16071;
}

void func_151(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	if (!func_140(iParam0))
	{
		return;
	}
	func_447(iParam0, Global_40.f_9096[iParam0]->f_10, iParam1, iParam2, uParam3, uParam4);
}

bool func_152(int iParam0)
{
	if (!func_140(iParam0))
	{
		return false;
	}
	return Global_40.f_9096[iParam0]->f_3 > Global_40.f_9096[iParam0]->f_10;
}

int func_153(int iParam0)
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

int func_154(int iParam0)
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

int func_155(int iParam0)
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

int func_156(int iParam0)
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

bool func_157(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

void func_158(int iParam0, int iParam1)
{
	if (!func_448(iParam0))
	{
		return;
	}
	(*Global_1888801)[iParam0]->f_19 = iParam1;
}

void func_159(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_201(&iParam1, 8192);
	}
	if (bParam3)
	{
		_0x2161278c6322f740(iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
	}
}

void func_160(var uParam0, bool bParam1)
{
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(uParam0, iVar0);
}

void func_161(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
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

void func_162(int iParam0, int iParam1, bool bParam2)
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

bool func_163(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			break;
		case 22:
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
			break;
		case 110:
			*iParam1 = 724;
			*iParam2 = 730;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 64:
			*iParam1 = 736;
			*iParam2 = 740;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 66:
			*iParam1 = 745;
			*iParam2 = 750;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 70:
			*iParam1 = 751;
			*iParam2 = 754;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 77:
			*iParam1 = 731;
			*iParam2 = 732;
			break;
		case 96:
			*iParam1 = 741;
			*iParam2 = 743;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 29:
			*iParam1 = 744;
			*iParam2 = 744;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 100:
			*iParam1 = 755;
			*iParam2 = 763;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 102:
			*iParam1 = 764;
			*iParam2 = 767;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 72:
			*iParam1 = 733;
			*iParam2 = 735;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 124:
			*iParam1 = 791;
			*iParam2 = 793;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 86:
			*iParam1 = 768;
			*iParam2 = 772;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 126:
			*iParam1 = 773;
			*iParam2 = 779;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 120:
			*iParam1 = 432;
			*iParam2 = 442;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 115:
			*iParam1 = 345;
			*iParam2 = 375;
			if (bVar0)
			{
				*iParam2 = 375;
			}
			break;
		case 125:
			*iParam1 = 376;
			*iParam2 = 379;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 116:
			*iParam1 = 783;
			*iParam2 = 790;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 21:
			*iParam1 = 780;
			*iParam2 = 782;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 42:
			*iParam1 = 794;
			*iParam2 = 798;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 89:
			*iParam1 = 799;
			*iParam2 = 800;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 23:
			*iParam1 = 801;
			*iParam2 = 801;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 28:
			*iParam1 = 802;
			*iParam2 = 803;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 101:
			*iParam1 = 804;
			*iParam2 = 806;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 117:
			*iParam1 = 507;
			*iParam2 = 507;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 11:
			*iParam1 = 807;
			*iParam2 = 833;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 128:
			*iParam1 = 834;
			*iParam2 = 857;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		default:
			*iParam1 = -1;
			*iParam2 = -1;
			break;
	}
	if (*iParam1 == -1 || *iParam2 == -1)
	{
		return false;
	}
	return true;
}

int func_164(int iParam0)
{
	if (!func_157(iParam0))
	{
		return 0;
	}
	if (!func_239(func_238(iParam0)))
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_169(iParam0)))
	{
		return 0;
	}
	_0x4f81ead1de8fa19b(func_169(iParam0));
	return 1;
}

int func_165(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_1() != -1)
	{
		return 1;
	}
	if (!func_448(iParam0))
	{
		return 1;
	}
	if (func_142(iParam0, 16))
	{
		return 1;
	}
	if (func_449(iParam0) && !func_450(iParam0))
	{
	}
	if (func_163(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (func_157(iParam1))
		{
			iVar0 = iParam1;
		}
		if (func_157(iParam2))
		{
			iVar1 = iParam2;
		}
		if (&Global_1897950 < iVar0 || &Global_1897950 > iVar1)
		{
			Global_1897950 = iVar0;
		}
		while (true)
		{
			if ((!func_449(iParam0) || func_450(iParam0)) || func_451(&Global_1897950))
			{
				func_240(&Global_1897950, 0);
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

bool func_166(int iParam0)
{
	if (iParam0 == -1)
	{
		return true;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = func_453(func_452());
	if (func_376(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_376(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_376(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_376(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_376(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_376(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_376(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_376(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_376(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_376(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_376(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_376(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_376(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_376(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_376(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_376(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_376(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

int func_167(vector3 vParam0, bool bParam3)
{
	iVar1 = -1;
	fVar2 = 1E+08f;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!bParam3 || func_454(iVar0))
		{
			fVar3 = func_455(iVar0, vParam0);
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

bool func_168(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return false;
	}
	return true;
}

int func_169(int iParam0)
{
	if (!func_157(iParam0))
	{
		return 0;
	}
	return (*Global_1895087)[iParam0]->f_1;
}

void func_170(int iParam0)
{
	if (!func_157(iParam0))
	{
		return;
	}
	iVar0 = func_169(iParam0);
	func_456(iParam0);
	_0x7b204f88f6c3d287(iVar0);
	_0xfc77c5b44d5ff7c0(iVar0);
}

void func_171(int iParam0, int iParam1)
{
	if (func_1() != -1)
	{
		return;
	}
	if (!func_157(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (&Global_24887[iParam0] - (Global_24887[iParam0] && iParam1));
}

void func_172(int iParam0)
{
	Global_1898092->f_1 = (Global_1898092->f_1 || iParam0);
}

void func_173()
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

void func_174()
{
	if (_does_volume_exist(&(iLocal_75[16])))
	{
		if (!func_51(4194304) && !func_277(2048))
		{
			vVar0 = { _0x3e2a25b2416dd67e(&(iLocal_75[16])) };
			func_458(_0xf70f00013a62f866(&(iLocal_75[16])), func_457(vVar0.x, vVar0.y), 0, 0, 4);
			_0xb03944057fd735ba(&(iLocal_75[16]), 4, 0);
			func_58(4194304);
		}
	}
}

void func_175(int iParam0)
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

void func_176(int iParam0)
{
	*iParam0 = 4;
	if (func_19(64))
	{
		iParam0->f_15[0]->f_6 = { -1413.793f, -240.7767f, 98.87817f };
		iParam0->f_15[0]->f_9 = 251.3227f;
		iParam0->f_15[0]->f_1 = func_459();
		iParam0->f_15[0]->f_3 = 1842387010;
		iParam0->f_15[1]->f_6 = { -1403.043f, -243.4083f, 99.37144f };
		iParam0->f_15[1]->f_9 = 214.3414f;
		iParam0->f_15[1]->f_1 = func_459();
		iParam0->f_15[2]->f_6 = { -1407.91f, -252.1218f, 99.3026f };
		iParam0->f_15[2]->f_9 = 354.953f;
		iParam0->f_15[2]->f_21 = 0;
		iParam0->f_15[2]->f_1 = func_459();
		iParam0->f_15[3]->f_6 = { -1415.464f, -251.052f, 100.0263f };
		iParam0->f_15[3]->f_9 = 323.5956f;
		iParam0->f_15[3]->f_21 = 1;
		iParam0->f_15[3]->f_1 = func_459();
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
		iParam0->f_15[4]->f_1 = func_459();
	}
	else
	{
		iParam0->f_15[4]->f_1 = 0;
	}
}

void func_177(int iParam0)
{
	func_176(iParam0);
	if (func_19(64))
	{
		iParam0->f_15[1]->f_6 = { -1403.043f, -243.4083f, 99.37144f };
		iParam0->f_15[1]->f_9 = 214.3414f;
		iParam0->f_15[1]->f_1 = func_459();
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
		iParam0->f_15[5]->f_1 = func_459();
	}
	else
	{
		iParam0->f_15[5]->f_1 = 0;
	}
}

void func_178()
{
}

void func_179(int iParam0, bool bParam1)
{
	func_176(iParam0);
	func_177(iParam0);
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
		iParam0->f_15[0]->f_1 = func_459();
		iParam0->f_15[1]->f_6 = { -1431.474f, -269.5809f, 102.2202f };
		iParam0->f_15[1]->f_9 = -148.66f;
		iParam0->f_15[1]->f_1 = func_459();
		if (!bParam1)
		{
			iParam0->f_15[2]->f_6 = { -1444.14f, -359.7078f, 114.5595f };
			iParam0->f_15[2]->f_9 = 49.7f;
			iParam0->f_15[2]->f_21 = 1;
			iParam0->f_15[2]->f_1 = func_459();
			iParam0->f_15[2]->f_3 = -1149853461;
			func_460(&(iParam0->f_15[2]->f_22));
			func_461(&(iParam0->f_15[2]->f_22));
			func_462(&(iParam0->f_15[2]->f_22));
			func_463(&(iParam0->f_15[2]->f_22));
			func_464(&(iParam0->f_15[2]->f_22));
			iParam0->f_15[3]->f_6 = { -1444.485f, -357.8756f, 114.8794f };
			iParam0->f_15[3]->f_9 = -145.8f;
			iParam0->f_15[3]->f_21 = 1;
			iParam0->f_15[3]->f_1 = func_459();
			iParam0->f_15[3]->f_3 = 307318431;
			func_460(&(iParam0->f_15[3]->f_22));
			func_461(&(iParam0->f_15[3]->f_22));
			func_462(&(iParam0->f_15[3]->f_22));
			func_463(&(iParam0->f_15[3]->f_22));
			func_464(&(iParam0->f_15[3]->f_22));
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

void func_180()
{
	if (!iLocal_98 == 3 || func_5(Local_1617.f_136, 128))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if ((func_9(Local_1617.f_136, 512) && iLocal_98 == 2) && iVar0 == 0)
			{
				func_465(iVar0);
			}
			if (func_19(64) && iVar0 == 0)
			{
				Jump @118; //curOff = 96
			}
			else if (!func_466(iVar0))
			{
				func_467(&iVar0);
			}
			iVar0++;
		}
	}
}

void func_181()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_468(iVar0);
		iVar0++;
	}
}

void func_182()
{
	bVar0 = func_364();
	iVar1 = get_random_int_in_range(0, 3);
	if (iVar1 == 0 && get_random_float_in_range(0f, 1f) < 0.75f)
	{
		iVar1 = 1;
	}
	if (iLocal_98 == 1 && !func_5(Local_1617.f_136, 4))
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
		func_469(&uLocal_605, func_7(iVar3));
		iVar3 += 2;
	}
}

void func_183(int iParam0)
{
	func_345(iParam0, 0);
	func_190(iParam0, 0);
	func_188(iParam0, 1);
	func_193(iParam0, 1);
	func_189(iParam0, 0);
	func_198(iParam0, 1);
	func_470(iParam0, 1, 1, 1);
}

void func_184(int iParam0, float fParam1, bool bParam2)
{
	iParam0->f_22 = fParam1;
	if (bParam2)
	{
		func_471(iParam0, fParam1);
	}
}

void func_185(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_201(&(iParam0->f_1), 4);
	}
	else
	{
		func_145(&(iParam0->f_1), 4);
	}
}

void func_186(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_201(&(iParam0->f_1), 2);
	}
	else
	{
		func_145(&(iParam0->f_1), 2);
	}
}

void func_187(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_201(&(iParam0->f_1), 1);
	}
	else
	{
		func_145(&(iParam0->f_1), 1);
	}
}

void func_188(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_201(&(iParam0->f_1), 256);
	}
	else
	{
		func_145(&(iParam0->f_1), 256);
	}
}

void func_189(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_201(&(iParam0->f_1), 128);
	}
	else
	{
		func_145(&(iParam0->f_1), 128);
	}
}

void func_190(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_201(&(iParam0->f_1), 2048);
	}
	else
	{
		func_145(&(iParam0->f_1), 2048);
	}
}

void func_191(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_145(iParam0, 32);
	}
	else
	{
		func_201(iParam0, 32);
	}
}

void func_192(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_201(&(iParam0->f_1), 8);
	}
	else
	{
		func_145(&(iParam0->f_1), 8);
	}
}

void func_193(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_145(iParam0, 16);
	}
	else
	{
		func_201(iParam0, 67108864);
		func_201(iParam0, 16);
	}
}

void func_194(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_145(iParam0, 8);
	}
	else
	{
		func_201(iParam0, 8);
	}
}

void func_195(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_145(iParam0, 1024);
	}
	else
	{
		func_201(iParam0, 1024);
	}
}

void func_196(int iParam0, float fParam1)
{
	iParam0->f_19 = fParam1;
}

void func_197(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_145(iParam0, 128);
	}
	else
	{
		func_201(iParam0, 128);
	}
}

void func_198(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_145(iParam0, 256);
	}
	else
	{
		func_201(iParam0, 256);
	}
}

void func_199(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_145(iParam0, 2);
	}
	else
	{
		func_201(iParam0, 2);
	}
}

void func_200(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_145(iParam0, 131072);
	}
	else
	{
		func_201(iParam0, 131072);
	}
}

void func_201(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_202()
{
	if (func_117(512))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (_0x1ff441d7954f8709(&(uLocal_472[iVar0])))
		{
			_0xd2b9c78537ed5759(&(uLocal_472[iVar0]));
		}
		iVar0++;
	}
}

void func_203()
{
	_uilog_clear_cached_objective();
}

void func_204(int iParam0)
{
	Global_40.f_9096[iParam0]->f_9 = -1;
	Global_40.f_9096[iParam0]->f_10 = -1;
	func_15(iParam0, 32768);
}

void func_205(int iParam0)
{
	if (does_entity_exist(*iParam0))
	{
		uVar0 = _0x0139637a3bff8b6d(*iParam0, &uVar1);
		_0x946d46cd6dfb9742(get_player_index(), uVar1, uVar0);
	}
}

void func_206(int iParam0, int iParam1)
{
	if (!func_140(iParam0))
	{
		return;
	}
	if (!func_5(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_9096[iParam0]->f_4 = (Global_40.f_9096[iParam0]->f_4 - (Global_40.f_9096[iParam0]->f_4 && iParam1));
}

bool func_207(int iParam0)
{
	return func_314(iParam0) == 0;
}

bool func_208(int iParam0, bool bParam1)
{
	switch (func_314(iParam0))
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

bool func_209(int iParam0)
{
	return func_314(iParam0) == 7;
}

void func_210(int iParam0)
{
	Global_1898092->f_1 = (Global_1898092->f_1 - (Global_1898092->f_1 && iParam0));
}

void func_211()
{
	if (_does_volume_exist(&(iLocal_75[16])))
	{
		if (func_51(4194304))
		{
			vVar0 = { _0x3e2a25b2416dd67e(&(iLocal_75[16])) };
			func_472(_0xf70f00013a62f866(&(iLocal_75[16])), func_457(vVar0.x, vVar0.y), 4);
			_0x5a4e1a41e3a02ad0(&(iLocal_75[16]), 4, 0);
		}
	}
}

void func_212()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_473(func_436(iVar0), 0);
		iLocal_466[iVar0] = 0;
		iVar0++;
	}
}

void func_213(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_474(iVar0, bParam0);
		iVar0++;
	}
}

void func_214(bool bParam0)
{
	set_ped_reset_flag(Global_35, 5, !bParam0);
	func_185(&Local_1617, bParam0);
	func_188(&Local_1617, bParam0);
}

bool func_215(int iParam0, int iParam1, bool bParam2, int iParam3)
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

int func_216(char* sParam0, bool bParam1)
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

void func_217(var uParam0)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return;
	}
	_delete_anim_scene(*uParam0);
}

void func_218(int iParam0, int iParam1, int iParam2)
{
	func_43(iParam2, 128);
	func_72(iParam0, 0);
	func_158(iParam2->f_137, 0);
	func_475(iParam2);
	func_42(iParam0, 2048);
	func_82(iParam2, 64);
	if (iParam2->f_137 == 76)
	{
		func_162(&iVar0, &iVar1, func_9(1, 1048576));
	}
	else
	{
		func_163(iParam2->f_137, &iVar0, &iVar1, 0, 0);
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
	func_172(512);
	iVar3 = 0;
	while (iVar3 < 26)
	{
		if (does_entity_exist(iParam1->f_690[iVar3]->f_8))
		{
			delete_object(&(iParam1->f_690[iVar3]->f_8));
		}
		iVar3++;
	}
	if (func_310(iParam2->f_32))
	{
		func_311(&(iParam2->f_32), 1, 1);
	}
	if (func_310(iParam2->f_33))
	{
		func_311(&(iParam2->f_33), 1, 1);
	}
	if (func_310(iParam2->f_34))
	{
		func_311(&(iParam2->f_34), 1, 1);
	}
	if ((*iParam1 + iParam1->f_1) > 0)
	{
		_0x7d4e70a67a651c71((*iParam1 + iParam1->f_1));
	}
	if (func_398(get_cause_of_most_recent_force_cleanup(), 1))
	{
		func_42(iParam2->f_136, 4194304);
	}
	func_476();
	if (func_22(iParam2, 65536))
	{
		set_player_control(get_player_index(), true, 0, false);
		display_radar(true);
		display_hud(true);
	}
}

void func_219(int iParam0)
{
	iVar0 = _0x62de46f061caa468();
	if (iParam0->f_3 > iVar0)
	{
		iParam0->f_3 = iVar0;
	}
	_0x7d4e70a67a651c71(iParam0->f_3);
	iParam0->f_3 = 0;
}

char* func_220()
{
	return "LOGCMP";
}

char* func_221()
{
	return "LCMPAUD";
}

bool func_222(bool bParam0)
{
	iVar0 = get_cause_of_most_recent_force_cleanup();
	if (bParam0)
	{
		return true;
	}
	if (func_477(iVar0))
	{
		return false;
	}
	if (func_478(iVar0, 1) || func_478(iVar0, 2))
	{
		return true;
	}
	return false;
}

void func_223(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_479() - fParam1);
	func_480(uParam0, 1);
	func_481(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_224(var uParam0, float fParam1)
{
	if (func_393(uParam0, fParam1))
	{
		func_268(uParam0);
		return true;
	}
	return false;
}

void func_225(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_226(&((*uParam0)[iVar0]->f_1));
		func_226(&((*uParam0)[iVar0]->f_12));
		iVar0++;
	}
}

void func_226(var uParam0)
{
	if (*uParam0 != 0)
	{
		request_model(*uParam0, false);
	}
}

void func_227()
{
	if (func_19(8192))
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			func_483(Local_492[(9 + iVar0)], "script@proc@eventareas@appleseed@Tree_Saw", func_482(9), 0);
			iVar0++;
		}
	}
	if (func_19(16384))
	{
		func_483(Local_492[6], "script@proc@eventareas@appleseed@Log_Drag", func_482(6), 0);
	}
	if (func_19(256))
	{
		func_483(Local_492[7], "script@proc@eventareas@appleseed@Boom_Operator", func_482(7), 0);
		func_483(Local_492[8], "script@proc@eventareas@appleseed@Boom_Spotter", func_482(8), 0);
	}
	if (func_19(64))
	{
		func_483(Local_492[2], "script@proc@eventareas@appleseed@Tree_Fall", func_482(2), 0);
		func_483(Local_492[3], "script@proc@eventareas@appleseed@Player_Help_A", func_482(3), 0);
		func_483(Local_492[4], "script@proc@eventareas@appleseed@Player_Help_B", func_482(4), 0);
	}
	if (func_19(262144))
	{
		if (func_19(16))
		{
			func_484();
		}
		else if (func_9(1, 2) && !func_9(Local_1617.f_136, 16384))
		{
			func_483(Local_492[0], "script@proc@eventareas@appleseed@Foreman_Stage2_talk", func_482(0), 0);
			func_483(Local_492[5], "script@proc@eventareas@appleseed@Player_Give_Money", func_482(5), 0);
		}
		else
		{
			func_484();
		}
	}
	else
	{
		switch (iLocal_98)
		{
			case 1:
				if (func_19(16))
				{
					func_484();
				}
				else
				{
					func_483(Local_492[5], "script@proc@eventareas@appleseed@Leadin@INT@Leadin_ILO", func_482(5), 0);
					func_483(Local_492[0], "script@proc@eventareas@appleseed@Leadout@INT@Leadout_new", func_482(0), 0);
					func_483(Local_492[1], "script@proc@eventareas@appleseed@Leadout@INT@Leadout_new", func_482(1), 0);
				}
				break;
			case 2:
				if (func_19(16))
				{
					func_484();
				}
				else if (func_9(1, 2) && !func_9(Local_1617.f_136, 16384))
				{
					func_483(Local_492[0], "script@proc@eventareas@appleseed@Foreman_Stage2_talk", func_482(0), 0);
					func_483(Local_492[5], "script@proc@eventareas@appleseed@Player_Give_Money", func_482(5), 0);
				}
				else
				{
					func_484();
				}
				break;
			case 3:
				func_483(Local_492[0], "script@proc@eventareas@appleseed@Foreman_Orders", func_482(0), 0);
				func_483(Local_492[1], "script@proc@eventareas@appleseed@Foreman_Stage3_Pay", func_482(1), 0);
				func_483(Local_492[2], "script@proc@eventareas@appleseed@Player_Grab_Money", func_482(2), 0);
				func_483(Local_492[3], "script@proc@eventareas@appleseed@Worker_Convo", func_482(3), 0);
				break;
		}
	}
}

void func_228()
{
	if (func_19(256))
	{
		iVar0 = get_random_int_in_range(12, 12);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			if (iVar1 <= iVar0)
			{
				Local_1768[iVar1]->f_7 = func_485();
			}
			else
			{
				Local_1768[iVar1]->f_7 = 0;
			}
			*Local_1768[iVar1] = { func_486(iVar1) };
			if (func_364())
			{
				Local_1768[iVar1]->f_3 = 25f;
			}
			else
			{
				Local_1768[iVar1]->f_3 = (180f + 25f);
			}
			Local_1768[iVar1]->f_10 = 0;
			func_487(&(Local_1768[iVar1]->f_11), 67);
			iVar1++;
		}
	}
	if (func_19(128))
	{
		if (func_19(64))
		{
			Local_614.f_690[7]->f_7 = 799179000;
		}
		else
		{
			Local_614.f_690[7]->f_7 = 0;
		}
		*Local_614.f_690[7] = { func_488() };
		Local_614.f_690[7]->f_3 = 89f;
		Local_614.f_690[7]->f_10 = 0;
		if (func_19(64))
		{
			Local_614.f_690[8]->f_7 = 799179000;
		}
		else
		{
			Local_614.f_690[8]->f_7 = 0;
		}
		*Local_614.f_690[8] = { func_488() };
		Local_614.f_690[8]->f_3 = 89f;
		Local_614.f_690[8]->f_10 = 0;
		if (func_19(64))
		{
			Local_614.f_690[9]->f_7 = 799179000;
		}
		else
		{
			Local_614.f_690[9]->f_7 = 0;
		}
		*Local_614.f_690[9] = { func_488() };
		Local_614.f_690[9]->f_3 = 89f;
		Local_614.f_690[9]->f_10 = 0;
		if (func_19(64))
		{
			Local_614.f_690[10]->f_7 = 927991752;
		}
		else
		{
			Local_614.f_690[10]->f_7 = 0;
		}
		*Local_614.f_690[10] = { func_488() };
		Local_614.f_690[10]->f_3 = 89f;
		Local_614.f_690[10]->f_10 = 0;
		if (func_19(64))
		{
			Local_614.f_690[24]->f_7 = 581435710;
		}
		else
		{
			Local_614.f_690[24]->f_7 = 0;
		}
		*Local_614.f_690[24] = { -1402.82f, -270.8668f, 98.5585f };
		Local_614.f_690[24]->f_3 = 74.57f;
		Local_614.f_690[24]->f_10 = 0;
		func_487(&(Local_614.f_690[24]->f_11), 64);
		if (func_19(64))
		{
			Local_614.f_690[6]->f_7 = -770982987;
			*Local_614.f_690[6] = { func_489() };
			Local_614.f_690[6]->f_3 = 89f;
			Local_614.f_690[6]->f_10 = 0;
		}
	}
	switch (iLocal_98)
	{
		case 1:
			Local_614.f_690[12]->f_7 = 1246532592;
			*Local_614.f_690[12] = { -1341.215f, -194.8321f, 102.4812f };
			Local_614.f_690[12]->f_3 = 27f;
			Local_614.f_690[12]->f_10 = 0;
			func_487(&(Local_614.f_690[12]->f_11), 75);
			if (func_19(128))
			{
				Local_614.f_690[0]->f_7 = 0;
				*Local_614.f_690[0] = { func_488() };
				Local_614.f_690[0]->f_3 = 89f;
				Local_614.f_690[0]->f_10 = 0;
				if (!func_5(Local_1617.f_136, 128))
				{
					Local_614.f_690[4]->f_7 = -1419711042;
				}
				else
				{
					Local_614.f_690[4]->f_7 = 0;
				}
				*Local_614.f_690[4] = { func_488() };
				Local_614.f_690[4]->f_3 = 89f;
				Local_614.f_690[4]->f_10 = 0;
				if (!func_5(Local_1617.f_136, 128))
				{
					Local_614.f_690[3]->f_7 = 1547859810;
				}
				else
				{
					Local_614.f_690[3]->f_7 = 0;
				}
				*Local_614.f_690[3] = { func_488() };
				Local_614.f_690[3]->f_3 = 89f;
				Local_614.f_690[3]->f_10 = 0;
			}
			break;
		case 2:
			Local_614.f_690[13]->f_7 = 343412282;
			*Local_614.f_690[13] = { -1349.263f, -189.6734f, 99.9598f };
			Local_614.f_690[13]->f_3 = 24f;
			Local_614.f_690[13]->f_10 = 0;
			func_487(&(Local_614.f_690[13]->f_11), 75);
			Local_614.f_690[12]->f_7 = 2117892179;
			*Local_614.f_690[12] = { -1342.864f, -201.941f, 101.154f };
			Local_614.f_690[12]->f_3 = 25f;
			Local_614.f_690[12]->f_10 = 0;
			func_487(&(Local_614.f_690[12]->f_11), 75);
			Local_614.f_690[25]->f_7 = -1443906703;
			*Local_614.f_690[25] = { -1400.832f, -205.2252f, 101.8838f };
			Local_614.f_690[25]->f_3 = 19.95f;
			Local_614.f_690[25]->f_10 = 0;
			if (func_19(128))
			{
				if (func_9(1, 2))
				{
					Local_614.f_690[3]->f_7 = -1473388640;
				}
				else
				{
					Local_614.f_690[3]->f_7 = 0;
				}
				*Local_614.f_690[3] = { func_488() };
				Local_614.f_690[3]->f_4 = { 90f, 0f, -5.99f };
				Local_614.f_690[3]->f_10 = 0;
				if (func_9(1, 2))
				{
					Local_614.f_690[4]->f_7 = -1698780291;
				}
				else
				{
					Local_614.f_690[4]->f_7 = 0;
				}
				*Local_614.f_690[4] = { -1400.53f, -206.6157f, 102.7172f };
				Local_614.f_690[4]->f_3 = -153.92f;
				Local_614.f_690[4]->f_10 = 0;
				func_487(&(Local_614.f_690[4]->f_11), 2);
				if (func_9(1, 2) || func_19(64))
				{
					Local_614.f_690[6]->f_7 = -770982987;
					*Local_614.f_690[6] = { func_489() };
					Local_614.f_690[6]->f_3 = 89f;
					Local_614.f_690[6]->f_10 = 0;
				}
			}
			break;
		case 3:
			Local_614.f_690[13]->f_7 = 343412282;
			*Local_614.f_690[13] = { -1349.263f, -189.6734f, 99.9598f };
			Local_614.f_690[13]->f_3 = 24f;
			Local_614.f_690[13]->f_10 = 0;
			func_487(&(Local_614.f_690[13]->f_11), 75);
			Local_614.f_690[12]->f_7 = 2117892179;
			*Local_614.f_690[12] = { -1342.864f, -201.941f, 101.154f };
			Local_614.f_690[12]->f_3 = 25f;
			Local_614.f_690[12]->f_10 = 0;
			func_487(&(Local_614.f_690[12]->f_11), 75);
			Local_614.f_690[25]->f_7 = -1443906703;
			*Local_614.f_690[25] = { -1400.832f, -205.2252f, 101.8838f };
			Local_614.f_690[25]->f_3 = 19.95f;
			Local_614.f_690[25]->f_10 = 0;
			if (func_19(128))
			{
				if (!func_5(Local_1617.f_136, 128) || (func_5(Local_1617.f_136, 128) && func_9(1, 2)))
				{
					Local_614.f_690[3]->f_7 = -1473388640;
				}
				else
				{
					Local_614.f_690[3]->f_7 = 0;
				}
				*Local_614.f_690[3] = { func_488() };
				Local_614.f_690[3]->f_3 = 89f;
				Local_614.f_690[3]->f_10 = 0;
				if (!func_5(Local_1617.f_136, 128) || (func_5(Local_1617.f_136, 128) && func_9(1, 2)))
				{
					Local_614.f_690[4]->f_7 = -1698780291;
				}
				else
				{
					Local_614.f_690[4]->f_7 = 0;
				}
				*Local_614.f_690[4] = { -1400.53f, -206.6157f, 102.7172f };
				Local_614.f_690[4]->f_3 = -153.92f;
				Local_614.f_690[4]->f_10 = 0;
				func_487(&(Local_614.f_690[4]->f_11), 2);
				if (!func_5(Local_1617.f_136, 128) || func_9(1, 2))
				{
					Local_614.f_690[6]->f_7 = -770982987;
				}
				else
				{
					Local_614.f_690[6]->f_7 = 0;
				}
				*Local_614.f_690[6] = { func_488() };
				Local_614.f_690[6]->f_3 = 89f;
				Local_614.f_690[6]->f_10 = 0;
				if (!func_5(Local_1617.f_136, 128))
				{
					Local_614.f_690[7]->f_7 = -1971689092;
				}
				else
				{
					Local_614.f_690[7]->f_7 = 0;
				}
				*Local_614.f_690[7] = { func_488() };
				Local_614.f_690[7]->f_3 = 89f;
				Local_614.f_690[7]->f_10 = 0;
				if (!func_5(Local_1617.f_136, 128))
				{
					Local_614.f_690[8]->f_7 = -1914893189;
				}
				else
				{
					Local_614.f_690[8]->f_7 = 0;
				}
				*Local_614.f_690[8] = { func_488() };
				Local_614.f_690[8]->f_3 = 89f;
				Local_614.f_690[8]->f_10 = 0;
				if (!func_5(Local_1617.f_136, 128))
				{
					Local_614.f_690[9]->f_7 = -1914893189;
				}
				else
				{
					Local_614.f_690[9]->f_7 = 0;
				}
				*Local_614.f_690[9] = { func_488() };
				Local_614.f_690[9]->f_3 = 89f;
				Local_614.f_690[9]->f_10 = 0;
				if (!func_5(Local_1617.f_136, 128))
				{
					Local_614.f_690[10]->f_7 = -1914893189;
				}
				else
				{
					Local_614.f_690[10]->f_7 = 0;
				}
				*Local_614.f_690[10] = { func_488() };
				Local_614.f_690[10]->f_3 = 89f;
				Local_614.f_690[10]->f_10 = 0;
				if (!func_5(Local_1617.f_136, 128))
				{
					Local_614.f_690[11]->f_7 = -1914893189;
				}
				else
				{
					Local_614.f_690[11]->f_7 = 0;
				}
				*Local_614.f_690[11] = { func_488() };
				Local_614.f_690[11]->f_3 = 89f;
				Local_614.f_690[11]->f_10 = 0;
				if (!func_5(Local_1617.f_136, 128))
				{
					Local_614.f_690[0]->f_7 = 171105065;
				}
				else
				{
					Local_614.f_690[0]->f_7 = 0;
				}
				*Local_614.f_690[0] = { func_490(0, 2) };
				Local_614.f_690[0]->f_2 = (Local_614.f_690[0]->f_2 - 5f);
				Local_614.f_690[0]->f_3 = 89f;
				Local_614.f_690[0]->f_10 = 0;
				func_487(&(Local_614.f_690[0]->f_11), 67);
				if (!func_5(Local_1617.f_136, 128))
				{
					Local_614.f_690[1]->f_7 = -1700886102;
				}
				else
				{
					Local_614.f_690[1]->f_7 = 0;
				}
				*Local_614.f_690[1] = { func_490(0, 3) };
				Local_614.f_690[1]->f_2 = (Local_614.f_690[1]->f_2 - 5f);
				Local_614.f_690[1]->f_3 = 89f;
				Local_614.f_690[1]->f_10 = 0;
				func_487(&(Local_614.f_690[1]->f_11), 67);
			}
			break;
	}
	iVar5 = 0;
	while (iVar5 < 4)
	{
		bVar7 = func_398(iVar603, func_7(iVar5));
		if (bVar7)
		{
			iVar2[iVar6] = iVar5;
			iVar6++;
		}
		if (iVar6 >= 2)
		{
		}
		else
		{
			iVar5++;
		}
	}
	iVar8 = 0;
	while (iVar8 < iVar6)
	{
		iVar9 = iVar8 * 4;
		if (iVar9 + 18 >= Local_614.f_690 || iVar9 < 0)
		{
		}
		else
		{
			iVar5 = &iVar2[iVar8];
			if (func_19(8192))
			{
				(Local_614.f_690[(15 + iVar9)])->f_7 = -396933308;
				(Local_614.f_690[(16 + iVar9)])->f_7 = 622277464;
				(Local_614.f_690[(17 + iVar9)])->f_7 = 2125915446;
				(Local_614.f_690[(18 + iVar9)])->f_7 = 861227228;
			}
			else
			{
				(Local_614.f_690[(15 + iVar9)])->f_7 = 0;
				(Local_614.f_690[(16 + iVar9)])->f_7 = 0;
				(Local_614.f_690[(17 + iVar9)])->f_7 = 0;
				(Local_614.f_690[(18 + iVar9)])->f_7 = 0;
			}
			*(Local_614.f_690[(15 + iVar9)]) = { func_491(iVar5) };
			(Local_614.f_690[(15 + iVar9)])->f_3 = func_492(iVar5);
			(Local_614.f_690[(15 + iVar9)])->f_10 = 0;
			*(Local_614.f_690[(16 + iVar9)]) = { func_493(iVar5) };
			(Local_614.f_690[(16 + iVar9)])->f_4 = { func_494(iVar5) };
			(Local_614.f_690[(16 + iVar9)])->f_10 = 0;
			func_487(&((Local_614.f_690[(16 + iVar9)])->f_11), 2);
			vVar10 = { _get_object_offset_from_coords(*(Local_614.f_690[(16 + iVar9)]), (Local_614.f_690[(16 + iVar9)])->f_3, 0.025f, -4.4039f, 0.041f) };
			*(Local_614.f_690[(17 + iVar9)]) = { vVar10 };
			(Local_614.f_690[(17 + iVar9)])->f_3 = (Local_614.f_690[(16 + iVar9)])->f_3;
			(Local_614.f_690[(17 + iVar9)])->f_10 = 0;
			vVar10 = { _get_object_offset_from_coords(*(Local_614.f_690[(16 + iVar9)]), (Local_614.f_690[(16 + iVar9)])->f_3, 0f, 6.3529f, -0.077f) };
			*(Local_614.f_690[(18 + iVar9)]) = { vVar10 };
			(Local_614.f_690[(18 + iVar9)])->f_3 = (Local_614.f_690[(16 + iVar9)])->f_3;
			(Local_614.f_690[(18 + iVar9)])->f_10 = 0;
			iVar8++;
		}
	}
	if (func_19(128))
	{
		if (func_19(16384))
		{
			Local_614.f_690[2]->f_7 = -1035439448;
		}
		else
		{
			Local_614.f_690[2]->f_7 = 0;
		}
		*Local_614.f_690[2] = { -1410.311f, -227.9941f, 99.4013f };
		Local_614.f_690[2]->f_3 = 100.36f;
		Local_614.f_690[2]->f_10 = 0;
		if (func_19(16384))
		{
			Local_614.f_690[14]->f_7 = 1410968406;
		}
		else
		{
			Local_614.f_690[14]->f_7 = 0;
		}
		*Local_614.f_690[14] = { -1404.688f, -227.0209f, 99.4983f };
		Local_614.f_690[14]->f_3 = 94.76f;
		Local_614.f_690[14]->f_10 = 0;
		if (func_19(16384))
		{
			Local_614.f_690[23]->f_7 = 1481263968;
		}
		else
		{
			Local_614.f_690[23]->f_7 = 0;
		}
		*Local_614.f_690[23] = { -1412.52f, -227.139f, 99.815f };
		Local_614.f_690[23]->f_3 = 129.6f;
		Local_614.f_690[23]->f_10 = 1;
	}
	if ((func_19(262144) || func_19(16)) && func_333())
	{
		if (iLocal_98 != 3)
		{
			Local_614.f_690[5]->f_7 = -1443906703;
		}
		else
		{
			Local_614.f_690[5]->f_7 = 0;
		}
		iLocal_75[1] = _create_volume_box_with_custom_name(-1400.116f, -211.4299f, 103.0422f, 0f, 0f, 18.85407f, 1f, 1f, 2.328289f, "volChairSpawnBlock");
		_0x18262cafebb5fbe1(&(iLocal_75[1]), 0, 0, 0, -1, -1, 0);
		Local_614.f_690[11]->f_7 = 1566690690;
		switch (iLocal_98)
		{
			case 1:
				Local_614.f_690[11]->f_7 = 0;
				*Local_614.f_690[11] = { -1399.87f, -212.58f, 102.43f };
				break;
			case 2:
				*Local_614.f_690[11] = { -1399.06f, -210.58f, 104.42f };
				break;
			case 3:
				*Local_614.f_690[11] = { -1399.06f, -210.58f, 104.42f };
				break;
		}
		Local_614.f_690[11]->f_3 = 5f;
		Local_614.f_690[11]->f_10 = 0;
		func_487(&(Local_614.f_690[11]->f_11), 66);
	}
	else
	{
		Local_614.f_690[5]->f_7 = 0;
	}
	*Local_614.f_690[5] = { -1400.098f, -211.239f, 101.889f };
	Local_614.f_690[5]->f_3 = 22f;
	Local_614.f_690[5]->f_10 = 0;
	func_487(&(Local_614.f_690[5]->f_11), 2);
}

void func_229(var uParam0)
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

void func_230()
{
	Local_614.f_2 = 0;
	switch (iLocal_98)
	{
		case 1:
			Local_614.f_304[0]->f_1 = -1710614406;
			Local_614.f_304[0]->f_6 = { -1342.64f, -191.66f, 99.56f };
			Local_614.f_304[0]->f_9 = 27f;
			func_487(&(Local_614.f_304[0]->f_22), 129);
			Local_614.f_2 = 1;
			break;
		case 2:
			if (!func_22(&Local_1617, 32))
			{
				if (func_19(256))
				{
					Local_614.f_2++;
				}
			}
			if (func_9(1, 2) || func_9(Local_1617.f_136, 16384))
			{
				Local_614.f_304[0]->f_6 = { -1400.716f, -226.2228f, 103.3883f };
				Local_614.f_304[0]->f_9 = 298.1611f;
				Local_614.f_304[0]->f_1 = -1708097161;
				iLocal_14 += 2;
				Local_614.f_2++;
				if (func_19(262144))
				{
					Local_2147.f_2[0] = "LOG_WRK01B";
				}
			}
			break;
		case 3:
			if ((func_19(262144) && func_9(1, 2)) || func_9(Local_1617.f_136, 16384))
			{
				Local_614.f_304[0]->f_6 = { -1400.716f, -226.2228f, 103.3883f };
				Local_614.f_304[0]->f_9 = 298.1611f;
				Local_614.f_304[0]->f_1 = -1708097161;
				iLocal_14 += 2;
				Local_614.f_2++;
				if (func_19(262144))
				{
					Local_2147.f_2[0] = "LOG_WRK01B";
				}
			}
			if (!func_22(&Local_1617, 32))
			{
				if (func_19(256))
				{
					Local_614.f_2++;
				}
			}
			break;
	}
}

bool func_231(int iParam0)
{
	iVar0 = _0x635423d55ca84fc8(iParam0);
	iVar2 = 1;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar3 = _0x8df5f6a19f99f0d5(iParam0, iVar1);
		request_model(iVar3, false);
		if (!has_model_loaded(iVar3))
		{
			iVar2 = 0;
		}
		iVar1++;
	}
	return iVar2;
}

void func_232()
{
	if (func_19(256))
	{
		sVar0 = "props_misc@appleseed_loader";
		func_495(sVar0, &uLocal_2017);
		sVar0 = "script_proc@event_area@appleseed@boom_lift";
		func_495(sVar0, &uLocal_2017);
	}
	if (func_19(8192))
	{
		sVar0 = "ai_react@male_stand@SMALL_VARIATIONS@IDLE_A";
		func_495(sVar0, &uLocal_2017);
		sVar0 = "script_proc@event_area@appleseed@tree_saw";
		func_495(sVar0, &uLocal_2017);
	}
	if (func_19(262144))
	{
		sVar0 = func_496();
		func_495(sVar0, &uLocal_2017);
		if (func_9(1, 2))
		{
			sVar0 = "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2";
			func_495(sVar0, &uLocal_2017);
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
				func_495(sVar0, &uLocal_2017);
				break;
			case 3:
				sVar0 = "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE3_WOLF";
				func_495(sVar0, &uLocal_2017);
				break;
		}
	}
}

void func_233()
{
	request_collision_at_coord(func_497());
}

bool func_234()
{
	if (!func_498(&(Local_614.f_690)))
	{
		return false;
	}
	return true;
}

bool func_235()
{
	if (iLocal_98 == 3 && !func_19(262144))
	{
		return _0x6bfbdc46139c45ab(func_497());
	}
	return true;
}

bool func_236(var uParam0)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_499((*uParam0)[iVar0]))
		{
			bVar1 = true;
		}
		iVar0++;
	}
	return !bVar1;
}

int func_237(int iParam0, var uParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, int iParam10)
{
	if (bParam6)
	{
		func_500(&vParam2, uParam1->f_22);
	}
	if (!bParam7 && func_501(uParam1))
	{
		iVar0 = _0xeaf682a14f8e5f53(uParam1->f_5, vParam2, bParam5, 1, 1, iParam9, iParam10);
		if (!does_entity_exist(iVar0))
		{
			iVar0 = func_502(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
		}
		else if (_is_metaped_outfit_request_valid(uParam1->f_5))
		{
			_release_metaped_outfit_request(uParam1->f_5);
		}
	}
	else
	{
		iVar0 = func_502(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
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
		if (!is_string_null_or_empty(&(uParam1->f_23)) && !func_503(iVar0))
		{
			func_261(iVar0, &(uParam1->f_23), 0);
		}
		if (func_503(iVar0))
		{
			set_animal_tuning_bool_param(iVar0, 48, true);
		}
		else
		{
			set_ped_config_flag(iVar0, 307, true);
		}
		if (func_504(&(uParam1->f_22)))
		{
			set_ped_can_ragdoll(iVar0, true);
			set_ped_to_ragdoll(iVar0, 1000, 1000, 1, false, false, false);
			set_ped_config_flag(iVar0, 186, !func_505(&(uParam1->f_22)));
			func_130(iVar0, func_506(&(uParam1->f_22)), 0);
		}
		else
		{
			request_ped_visibility_tracking(iVar0);
		}
		if (func_507(&(uParam1->f_22)))
		{
			freeze_entity_position(iVar0, true);
		}
		if (func_508(&(uParam1->f_22)))
		{
			func_509(iVar0, 1);
		}
		_0xa91e6cf94404e8c9(iVar0);
		set_ped_config_flag(iVar0, 6, func_510(&(uParam1->f_22)));
		set_ped_config_flag(iVar0, 393, true);
		if (!func_248(uParam1->f_22, 8192))
		{
			_set_entity_something(iVar0, true);
		}
		if (!func_503(iVar0))
		{
			func_512(iVar0, !func_511(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 4, func_513(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 297, !func_514(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 317, !func_514(&(uParam1->f_22)));
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

int func_238(int iParam0)
{
	if (!func_157(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0];
}

bool func_239(int iParam0)
{
	return iParam0 != 0;
}

int func_240(int iParam0, bool bParam1)
{
	if (!func_157(iParam0))
	{
		return 0;
	}
	if (!func_23(iParam0, 2))
	{
		return 0;
	}
	if (func_23(iParam0, 32) && !bParam1)
	{
		func_515(iParam0, _create_persistent_character(func_238(iParam0)));
		if (func_1() == -1)
		{
			if (func_23(iParam0, 2048))
			{
				_0x49a8c2cd97815215(func_169(iParam0));
				func_171(iParam0, 2048);
			}
			_0xfcc6db8dbe709bc8(func_169(iParam0));
		}
		return 0;
	}
	if (!func_516(iParam0) && func_1() == -1)
	{
		return 0;
	}
	if (_0x800df3fc913355f3(func_169(iParam0)))
	{
		func_171(iParam0, 128);
		return 1;
	}
	func_515(iParam0, _create_persistent_character(func_238(iParam0)));
	_0x4f81ead1de8fa19b(func_169(iParam0));
	if (func_23(iParam0, 2048))
	{
		_0x49a8c2cd97815215(func_169(iParam0));
		func_171(iParam0, 2048);
	}
	return 1;
}

bool func_241(int iParam0, bool bParam1)
{
	if (func_1() != -1)
	{
		return false;
	}
	if (!func_157(iParam0))
	{
		return false;
	}
	if (!_0x800df3fc913355f3(func_169(iParam0)))
	{
		return false;
	}
	if (bParam1 && !does_entity_exist(func_246(iParam0)))
	{
		return false;
	}
	return !_0xeb98b38ca60742d7(func_169(iParam0));
}

bool func_242(int iParam0)
{
	if (!func_157(iParam0))
	{
		return false;
	}
	if (_0x800df3fc913355f3(func_169(iParam0)))
	{
		_0x49a8c2cd97815215(func_169(iParam0));
		if (!does_entity_exist(_0x0cadc3a977997472(func_169(iParam0), 0)))
		{
			return false;
		}
	}
	return true;
}

bool func_243(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_244(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (!func_517(iParam0, 1))
	{
		return 0;
	}
	if (func_239(func_238(iParam0)))
	{
		iVar1 = func_169(iParam0);
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
	if ((bParam4 && !func_518(iParam0)) && !is_entity_dead(iVar0))
	{
		set_ped_config_flag(iVar0, 171, bParam5);
		set_entity_as_mission_entity(iVar0, true, true);
	}
	func_24(iParam0, 1);
	func_519(iParam0);
	if (bParam3)
	{
		func_24(iParam0, 16);
	}
	if (!bParam2)
	{
	}
	return iVar0;
}

void func_245(int iParam0, bool bParam1, bool bParam2)
{
	set_ped_config_flag(iParam0, 297, false);
	set_ped_config_flag(iParam0, 301, false);
	set_ped_config_flag(iParam0, 315, false);
	set_ped_config_flag(iParam0, 130, false);
	set_ped_config_flag(iParam0, 178, bParam2);
	set_ped_config_flag(iParam0, 330, false);
	set_ped_config_flag(iParam0, 317, bParam1);
}

int func_246(int iParam0)
{
	iVar0 = func_169(iParam0);
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

int func_247(int iParam0)
{
	if (!func_157(iParam0))
	{
		return 0;
	}
	return _0xa00df706c60173d1(Global_1895087[iParam0]);
}

bool func_248(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_249(var uParam0, bool bParam1)
{
	vVar0 = { *uParam0 };
	vVar0.f_2 = (vVar0.z + 5f);
	if (bParam1)
	{
		if (!func_520(&vVar0, 50, 10, 0))
		{
		}
		else
		{
			*uParam0 = { vVar0 };
		}
	}
}

float func_250(float fParam0)
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

bool func_251(var uParam0, int iParam1, char* sParam2)
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

bool func_252(int iParam0)
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

bool func_253(var uParam0)
{
	iVar0 = 0;
	if (func_521(uParam0->f_4, 1) > 120f)
	{
		iVar0 = 1;
	}
	else if (func_521(uParam0->f_4, 1) > 65f && !is_sphere_visible(uParam0->f_4, 4f))
	{
		iVar0 = 1;
	}
	else if (uParam0->f_25)
	{
		iVar0 = 1;
	}
	return iVar0;
}

bool func_254(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_522(iParam0, iParam1);
}

bool func_255(int iParam0, var uParam1, int iParam2, bool bParam3, float fParam4, bool bParam5, float fParam6, bool bParam7, float fParam8, bool bParam9)
{
	if (is_entity_dead(iParam0) || is_entity_dead(player_ped_id()))
	{
		return false;
	}
	if (func_385(player_ped_id(), iParam0, 1) < (fParam8 * fParam8))
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
	if (func_523(iParam0, bParam5))
	{
		if (func_524(vVar0, iParam0, uParam1, iParam2, bParam3, fParam4, bParam5, bParam7, bParam9))
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

bool func_256(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && does_entity_exist(iParam2))
	{
		if (!func_525(iParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_526(fParam0))
	{
		return false;
	}
	return true;
}

void func_257(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0] = (&Global_23118[iParam0] - (Global_23118[iParam0] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0] = (&Global_1058888->f_40615[iParam0] - (Global_1058888->f_40615[iParam0] && iParam1));
}

bool func_258(var uParam0)
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

bool func_259()
{
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 11)
	{
		if (_does_anim_scene_exist(&(Local_492[iVar1])))
		{
			if (!func_527(Local_492[iVar1]))
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

bool func_260(int iParam0, int iParam1)
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

void func_261(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || func_254(iParam0, 0, 0))
	{
		decor_set_bool(iParam0, "HAS_VOICE", true);
		set_ambient_voice_name(iParam0, sParam1);
	}
}

int func_262()
{
	return 953851965;
}

char* func_263()
{
	return "PROP_HUMAN_SEAT_CHAIR_WHITTLE_MALE_C";
}

Vector3 func_264()
{
	return -1400.832f, -205.7252f, 101.8838f;
}

void func_265(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_528(Global_35) && is_player_teleport_active())
	{
	}
	if (func_503(iParam0))
	{
		if (func_529(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_248(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_265(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_265(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_248(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_248(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_248(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_248(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_248(iParam5, 129))
	{
		if (func_248(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		set_entity_coords_no_offset(iParam0, vParam1, func_248(iParam5, 32), true, true);
		set_entity_heading(iParam0, fParam4);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_248(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_248(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_503(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_248(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_35 && !func_248(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

bool func_266(int iParam0, bool bParam1)
{
	if (func_1() != -1)
	{
		return false;
	}
	if (!func_157(iParam0))
	{
		return false;
	}
	if (!func_518(iParam0) && bParam1)
	{
		return false;
	}
	return func_23(iParam0, 1);
}

void func_267(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_157(iParam0))
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
	if ((!bParam4 && !func_518(iParam0)) && func_530(iParam0))
	{
		return;
	}
	func_171(iParam0, 1);
	func_531(iParam0);
	if (func_239(func_238(iParam0)))
	{
		iVar0 = func_169(iParam0);
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
		func_171(iParam0, 16);
	}
	if (func_23(iParam0, 128) && !bParam3)
	{
		func_532(iParam0, 0);
	}
}

void func_268(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_269()
{
}

int func_270(int iParam0, int iParam1, int iParam2)
{
	if (((func_351(iParam0, 8388608) && func_351(iParam0, 1048576)) && func_351(iParam0, 2097152)) && func_351(iParam0, 4194304))
	{
		return -183018591;
	}
	iVar0 = _0xf8204ef17410bf43(-594562071, iParam1, iParam2, 0);
	iVar1 = _0xf8204ef17410bf43(970310034, iParam1, iParam2, 0);
	iVar2 = _0xf8204ef17410bf43(-1212426201, iParam1, iParam2, 0);
	iVar3 = _0xf8204ef17410bf43(860033945, iParam1, iParam2, 0);
	while (func_533(iVar3))
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
	if (!func_353(iVar3))
	{
		iVar3 = -183018591;
	}
	iVar5 = 0;
	if (!func_351(iParam0, 8388608))
	{
		iVar5 = iVar0;
	}
	if (!func_351(iParam0, 1048576))
	{
		if (!func_352(iVar5) || _0xf2f585411e748b9c(iVar1, 0) > _0xf2f585411e748b9c(iVar5, 0))
		{
			iVar5 = iVar1;
		}
	}
	if (!func_351(iParam0, 2097152))
	{
		if (!func_352(iVar5) || _0xf2f585411e748b9c(iVar3, 0) > _0xf2f585411e748b9c(iVar5, 0))
		{
			iVar5 = iVar3;
		}
	}
	if (!func_351(iParam0, 4194304))
	{
		if (!func_352(iVar5) || _0xf2f585411e748b9c(iVar2, 0) > _0xf2f585411e748b9c(iVar5, 0))
		{
			iVar5 = iVar2;
		}
	}
	if (!func_352(iVar5))
	{
		return -183018591;
	}
	return iVar5;
}

int func_271(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_352(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
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
							if (func_352(iVar4) && iVar4 != iVar0)
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
	if (func_1() == -1 && !func_353(iVar0))
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
				if (func_353(-183018591))
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
		if (iParam0 != Global_35 && func_352(iVar0))
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
		func_534(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_535(iParam0, &iVar0, &fVar25);
		iVar0 = _give_weapon_to_ped_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_536(iVar0))
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

char* func_272(int iParam0, int iParam1)
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

int func_273()
{
	if (func_166(64))
	{
		return iLocal_203;
	}
	return iLocal_204;
}

void func_274(int iParam0, bool bParam1)
{
	if (bParam1 || func_5(iParam0, 8192))
	{
		if (!_uilog_is_entry_registered(3, func_537(iParam0)))
		{
			return;
		}
		_uilog_remove_entry(3, func_537(iParam0));
		func_206(iParam0, 8192);
	}
}

void func_275(int iParam0)
{
	if (!func_5(iParam0, 8192))
	{
		_uilog_add_entry_hash(3, func_537(iParam0), func_144(iParam0, func_4(iParam0)), func_538(iParam0), func_539(iParam0), 0);
		_uilog_set_entry_icon_texture(3, func_537(iParam0), func_540(iParam0), func_541());
		_uilog_set_entry_brief_texture(3, func_537(iParam0), func_542(iParam0), func_543());
		func_42(iParam0, 8192);
	}
}

void func_276(int iParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4)
{
	_uilog_add_or_update_objective(3, func_537(iParam0), iParam1, sParam2, bParam3, false, false);
	if (bParam4)
	{
		func_545(func_544(iParam0), sParam2, func_541(), func_540(iParam0), 1433015236, 0, -1, -2, 0, 0, 0, 0, 1, 1, 0);
	}
}

bool func_277(int iParam0)
{
	return (Global_1898092->f_1 && iParam0) != 0;
}

void func_278(int iParam0, bool bParam1)
{
	if (!func_546(iParam0))
	{
		iVar0 = func_141(iParam0);
		func_10(iParam0, 1);
		switch (iParam0)
		{
			case 0:
			case 2:
			case 3:
				func_547(iVar0, 0);
				break;
			case 1:
				_0xd8c7162ab2e2af45(-238119963);
				break;
		}
		if (bParam1)
		{
			func_548(iParam0, 0);
		}
	}
}

int func_279(bool bParam0)
{
	if (bParam0)
	{
		return func_549(Global_1359489->f_4);
	}
	get_group_size(func_550(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = get_ped_as_group_member(func_550(), iVar3);
		if (func_551(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

int func_280()
{
	iVar1 = _get_first_entity_ped_is_carrying(Global_35);
	if (!does_entity_exist(iVar1))
	{
		if (func_552(Global_35))
		{
			iVar1 = func_553(Global_35);
		}
		else if (func_554(Global_35))
		{
			iVar1 = func_555(Global_35);
		}
		else if (func_556(Global_35))
		{
			iVar1 = func_557(Global_35);
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

void func_281(char* sParam0, int iParam1, var uParam2, bool bParam3)
{
	iVar0 = *sParam0;
	if (iVar0 > 8)
	{
		return;
	}
	func_558(&uVar1, iVar0, 1);
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

float func_282(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return -1f;
	}
	return func_366(Global_35, iParam0, bParam1, bParam2);
}

void func_283(var uParam0, int iParam1, int iParam2)
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

void func_284(var uParam0, int iParam1, int iParam2)
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

int func_285(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
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
				if (func_559(iVar2, bParam4, bParam6, bParam8, bParam9, bParam10) && !decor_exist_on(iVar2, "bIgnoreThisPed"))
				{
					if (!func_286(iVar2, iParam1))
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

bool func_286(int iParam0, int iParam1)
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

int func_287(int iParam0)
{
	iParam0 = func_560(iParam0);
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

bool func_288(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = get_entity_model(iParam0);
	if (!_does_metaped_outfit_exist_for_ped_model(1268180497, iVar0))
	{
		return false;
	}
	iVar1 = 1268180497;
	if (_0x98082246107a6acf(iParam0, iVar1))
	{
		return true;
	}
	return false;
}

void func_289(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (!is_entity_dead(iParam0))
	{
		remove_ped_defensive_area(iParam0, bParam3);
		_0xfc3db99c8144cd81(iParam0, uParam1, iParam2, bParam3, 0);
	}
}

char* func_290(int iParam0, int iParam1)
{
	if (func_134(iParam0, 16))
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

int func_291(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_561(bParam1, bParam2, bParam3);
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

bool func_292(int iParam0, var uParam1)
{
	if (func_19(1048576))
	{
		if (((((func_365(func_63(Local_1617.f_138), iParam0, uParam1, 0) || ((iLocal_206 % 3) == 1 && func_562(&uLocal_1923, iParam0, uParam1, 0, (iLocal_190 / 3)))) || ((iLocal_206 % 3) == 2 && func_562(&uLocal_1923, iParam0, uParam1, (iLocal_190 / 3) + 1, (iLocal_190 * 2 / 3)))) || ((iLocal_206 % 3) == 0 && func_562(&uLocal_1923, iParam0, uParam1, (iLocal_190 * 2 / 3) + 1, iLocal_190))) || func_562(&uLocal_2082, iParam0, uParam1, 0, -1)) || func_562(&iLocal_2108, iParam0, uParam1, 0, -1))
		{
			return true;
		}
	}
	return false;
}

bool func_293()
{
	if (func_9(1, 2) || func_9(Local_1617.f_136, 16384))
	{
		if (does_entity_exist(&(iLocal_2105[0])) && func_563(Global_35, &(iLocal_2105[0]), 0))
		{
			if (func_9(Local_1617.f_136, 16384))
			{
				func_98(uLocal_2102[1]);
				return false;
			}
			else
			{
				func_565(3, 0, 0, func_564(), func_63(Local_1617.f_138), 0, 1065353216, 0);
				func_58(32768);
				return true;
			}
		}
	}
	if (func_19(65536))
	{
		if (does_entity_exist(&(uLocal_72[1])) && func_563(Global_35, &(uLocal_72[1]), 1))
		{
			func_565(3, 0, 0, func_564(), func_63(Local_1617.f_138), 0, 1065353216, 0);
			func_58(32768);
			return true;
		}
	}
	if (func_19(32768))
	{
		if (does_entity_exist(&(uLocal_72[0])) && func_563(Global_35, &(uLocal_72[0]), 1))
		{
			func_565(3, 0, 0, func_564(), func_63(Local_1617.f_138), 0, 1065353216, 0);
			func_58(32768);
			return true;
		}
	}
	return false;
}

bool func_294()
{
	iVar0 = (iLocal_206 % iVar610);
	if (iVar0 < 4)
	{
		if (!func_215(&(uLocal_607[iVar0]), &(iLocal_75[5]), 1, 0) && _get_rider_of_mount(&(uLocal_607[iVar0]), false) == Global_35)
		{
			func_35(268435456);
			return true;
		}
	}
	return false;
}

bool func_295(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > iParam2->f_5)
	{
		func_566(iParam2, 1, iVar0);
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
			if (func_567(iParam0, iParam2))
			{
				*uParam3 = 128;
				func_568(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (func_569(iParam0, iParam2))
				{
					*uParam3 = 8;
					func_568(iParam0, iParam2, *uParam3);
					return true;
				}
				else if (func_570(iParam0, iParam1, iParam2))
				{
					*uParam3 = 8;
					func_568(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (func_571(iParam0, iParam2))
				{
					*uParam3 = 64;
					func_568(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_26 && func_291(player_id(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_568(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_572(iParam2, 1065353216))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (func_573(Global_35, iParam0, iParam2))
					{
						*uParam3 = 4;
						func_568(iParam0, iParam2, *uParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (func_574(Global_35, iParam0, iParam2))
					{
						*uParam3 = 256;
						func_568(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_575(Global_35, iParam0, iParam2, 0))
				{
					*uParam3 = 16;
					func_568(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			else if (func_575(Global_35, iParam0, iParam2, 1))
			{
				*uParam3 = 16;
				func_568(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (func_576(iParam0, iParam2))
				{
					*uParam3 = 32;
					func_568(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || iParam2->f_12 < 20f)
			{
				if (func_577(&iParam0, iParam2))
				{
					*uParam3 = 4096;
					func_568(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (func_578(iParam2, 4000))
				{
					if ((func_579(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && func_580(iParam2, iParam0)) && func_581(iParam2, iParam0))
					{
						*uParam3 = 2;
						func_568(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((func_579(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && func_580(iParam2, iParam0)) && func_581(iParam2, iParam0))
				{
					*uParam3 = 2;
					func_568(iParam0, iParam2, *uParam3);
					return true;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (func_582(iParam0, Global_1935630->f_41))
							{
								func_583();
								*uParam3 = 2;
								func_568(iParam0, iParam2, *uParam3);
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
						if (func_582(iParam0, Global_1935630->f_41))
						{
							func_583();
							*uParam3 = 2;
							func_568(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (func_584(iParam2, iParam0) || (iParam2->f_9 > 0 && (func_585() - iParam2->f_9) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_583();
						*uParam3 = 2;
						func_568(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (func_586())
					{
						if (func_582(iParam0, Global_1935630->f_42))
						{
							func_583();
							*uParam3 = 2;
							func_568(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (func_587(iParam2, iParam0))
			{
				*uParam3 = 1024;
				func_568(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (func_588(iParam0, iParam1, iParam2))
				{
					*uParam3 = 2048;
					func_568(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (func_589(iParam0, iParam2))
					{
						*uParam3 = 8192;
						func_568(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (func_590(iParam0, iParam2))
				{
					*uParam3 = 32768;
					func_568(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (func_591(iParam2, 4000))
				{
					if (func_592(&iParam0, iParam2))
					{
						*uParam3 = 512;
						func_568(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (func_593(iParam0, iParam2))
				{
					*uParam3 = 65536;
					iParam2->f_4 = 0;
					func_568(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_372(iParam2, iParam0))
			{
				*uParam3 = 1;
				func_568(iParam0, iParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

void func_296(int iParam0, var uParam1)
{
	if (iParam0->f_16 != 0 || *uParam1 != 0)
	{
		Global_1935630->f_30 = 0;
		Global_1935630->f_31 = 0;
		Global_1935630->f_25 = 0;
		Global_1935630->f_39 = 0;
		iParam0->f_8 = func_585();
		_0xeacebaae0a33fb3f(player_id());
	}
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	iParam0->f_5 = 0;
	iParam0->f_10 = 0;
	func_594(iParam0, 0);
	*uParam1 = 0;
	iParam0->f_16 = 0;
}

int func_297()
{
	if (!func_595(&Local_1617))
	{
		if (!func_596(Global_1935630->f_34[0]))
		{
			return 0;
		}
		func_43(&Local_1617, 4096);
	}
	return 1;
}

bool func_298()
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

bool func_299(var uParam0)
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

int func_300(int iParam0)
{
	if (!is_entity_dead(func_63(Local_1617.f_138)))
	{
		if (func_597())
		{
			(*iParam0)[iVar0] = func_63(Local_1617.f_138);
			iVar0++;
		}
	}
	if (func_19(64))
	{
		if (!is_entity_dead(&(uLocal_2082[0])))
		{
			(*iParam0)[iVar0] = &uLocal_2082[0];
			iVar0++;
		}
		if (!is_entity_dead(&(iLocal_2108[0])))
		{
			(*iParam0)[iVar0] = &iLocal_2108[0];
			iVar0++;
		}
	}
	if (func_19(8192))
	{
		iVar2 = 0;
		while (iVar2 < 4)
		{
			bVar5 = func_398(iVar602, func_7(iVar2));
			if (bVar5)
			{
				iVar1 = 0;
				while (iVar1 < 2)
				{
					iVar3 = func_335(9, iVar1, iVar6);
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
	if (iLocal_98 == 1 && !func_5(Local_1617.f_136, 64))
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 2)
		{
			iVar3 = func_335(6, iVar1, 0);
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
			iVar3 = func_335(7, iVar1, 0);
			iVar4 = func_63(iVar3);
			if (!is_entity_dead(iVar4))
			{
				(*iParam0)[iVar0] = iVar4;
				iVar0++;
			}
			iVar1++;
		}
	}
	if (iLocal_98 == 3 && !func_5(Local_1617.f_136, 64))
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 3)
		{
			iVar3 = func_335(0, iVar1, 0);
			iVar4 = func_63(iVar3);
			if (!is_entity_dead(iVar4))
			{
				(*iParam0)[iVar0] = iVar4;
				iVar0++;
			}
			iVar1++;
		}
	}
	if (iLocal_98 == 3 && !func_9(Local_1617.f_136, 16))
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 4)
		{
			iVar3 = func_335(3, iVar1, 0);
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
	while (iVar1 < iVar2105)
	{
		if (!is_entity_dead(&(iLocal_2108[iVar1])))
		{
			(*iParam0)[iVar0] = &iLocal_2108[iVar1];
			iVar0++;
		}
		iVar1++;
	}
	if (iLocal_98 == 3 && !func_19(262144))
	{
		(*iParam0)[iVar0] = &uLocal_2082[2];
		iVar0++;
		(*iParam0)[iVar0] = &uLocal_2082[3];
		iVar0++;
	}
	return iVar0;
	return 0;
}

void func_301(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	func_302(iParam0, 1);
	iVar0 = _get_lassoed_entity(Global_35);
	if (bParam5 || iParam0->f_1 < iParam0->f_3)
	{
		if (iParam0->f_1 >= 2)
		{
			func_302(iParam0, 16);
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
						func_302(iParam0, 2);
						return;
					}
					if (func_598(iParam0, &(uParam1->f_10)))
					{
						func_302(iParam0, 2);
					}
					else
					{
						func_136(iParam0, 1);
					}
					return;
				case 64:
					if (func_598(iParam0, &(uParam1->f_10)))
					{
						func_302(iParam0, 2);
					}
					else
					{
						func_136(iParam0, 1);
					}
					return;
				case 2048:
					iParam0->f_16 = 4;
					break;
				case 8192:
					if (does_entity_exist(func_391(Global_35)))
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
		else if (!func_601(iParam0, iParam3, Global_36, 50f, func_599(iParam0), func_600(iParam0)))
		{
		}
		if (!does_entity_exist(*iParam0) || !is_ped_human(*iParam0))
		{
			return;
		}
		if (iParam0->f_1 < 3)
		{
			iParam0->f_9[iParam0->f_1] = func_452();
		}
		if (!bParam4)
		{
			iParam0->f_1++;
		}
	}
	else
	{
		func_302(iParam0, 2);
	}
}

void func_302(int iParam0, int iParam1)
{
	func_145(&(iParam0->f_17), iParam1);
}

int func_303(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = func_307(iVar2, iParam6);
	}
	if (*iParam3 < iParam4 || *iParam3 > iParam5)
	{
		*iParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_295(iParam0[*iParam3], 0, iParam1, uParam2, 0, 0))
		{
			return 1;
		}
		*iParam3++;
		if (*iParam3 > iParam5)
		{
			*iParam3 = iParam4;
		}
		iVar1++;
	}
	return 0;
}

bool func_304()
{
	if (func_334(Local_492[6]))
	{
		iVar0 = 0;
		while (iVar0 < func_602(6))
		{
			iVar1 = func_63(func_335(6, iVar0, 0));
			if (iVar1 == Local_1617.f_10)
			{
				return true;
			}
			iVar0++;
		}
	}
	if (func_334(Local_492[3]))
	{
		iVar0 = 0;
		while (iVar0 < func_602(3))
		{
			iVar1 = func_63(func_335(3, iVar0, 0));
			if (iVar1 == Local_1617.f_10)
			{
				return true;
			}
			iVar0++;
		}
	}
	if (func_334(Local_492[7]))
	{
		iVar0 = 0;
		while (iVar0 < func_602(7))
		{
			iVar1 = func_63(func_335(7, iVar0, 0));
			if (iVar1 == Local_1617.f_10)
			{
				return true;
			}
			iVar0++;
		}
	}
	if (func_334(Local_492[8]))
	{
		iVar0 = 0;
		while (iVar0 < func_602(8))
		{
			iVar1 = func_63(func_335(8, iVar0, 0));
			if (iVar1 == Local_1617.f_10)
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
		if (func_334(Local_492[iVar3]))
		{
			iVar4 = iVar2 * 2;
			iVar0 = 0;
			while (iVar0 < func_602(9))
			{
				iVar1 = func_63(func_335(9, iVar0, iVar4));
				if (iVar1 == Local_1617.f_10)
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

bool func_305(var uParam0, int iParam1, int iParam2)
{
	if (func_134(iParam1, 1))
	{
		return false;
	}
	if (!func_215(Global_35, (*Global_1392194)[uParam0->f_136]->f_6, 1, 0))
	{
		return false;
	}
	if ((func_603(Global_35, &iVar0, 4) && !is_model_a_ped(iVar0)) || _0xd04241bbf6d03a5e(Global_35) != 0)
	{
		if (func_601(&uVar1, iParam2, Global_36, 12.5f, 1, 120f))
		{
			*iParam1 = uVar1;
			iParam1->f_16 = 7;
			return true;
		}
	}
	return false;
}

bool func_306()
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
					if (func_215(iVar6, (*Global_1392194)[Local_1617.f_136]->f_6, 1, 0))
					{
						bVar0 = true;
					}
					if (iVar6 == func_63(Local_1617.f_138))
					{
						bVar0 = true;
						bVar1 = true;
					}
					else if (func_286(iVar6, &uLocal_1923))
					{
						bVar0 = true;
						bVar1 = true;
					}
					else if (func_286(iVar6, &uLocal_2082))
					{
						bVar0 = true;
						bVar1 = true;
					}
					else
					{
						if (bVar0 && !bVar1)
						{
							if (!func_596(&iVar6))
							{
								bVar0 = false;
							}
						}
						iVar4++;
					}
					destroy_itemset(iVar2);
					if (bVar0 && !bVar1)
					{
						func_43(&Local_1617, 4096);
					}
					return bVar0;
				}
			}
		}
	}
}

int func_307(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_308(int iParam0, int iParam1, bool bParam2, float fParam3)
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

void func_309(var uParam0, var uParam1)
{
	*uParam1 = 0;
	uParam0->f_10 = 0;
	uParam0->f_4 = 0;
}

bool func_310(int iParam0)
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

void func_311(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_310(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_604(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_605(iVar0);
	*uParam0 = 0;
}

void func_312(bool bParam0)
{
	iVar0 = 11;
	if (!func_606())
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
	func_607(11);
	func_608(101, 0);
	func_313(11, 4);
}

void func_313(int iParam0, int iParam1)
{
	if (!func_609(iParam0))
	{
		return;
	}
	Global_1914319->f_3[iParam0]->f_7 = (Global_1914319->f_3[iParam0]->f_7 - (Global_1914319->f_3[iParam0]->f_7 && iParam1));
}

int func_314(int iParam0)
{
	if (!func_100(iParam0))
	{
		return -1;
	}
	return func_317(iParam0);
}

bool func_315(int iParam0)
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
		iVar0 = func_317(iParam0);
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

int func_316(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_5;
	}
	return Global_1058888->f_498[iParam0]->f_1;
}

int func_317(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_610(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_318(int iParam0)
{
	if (!func_100(iParam0))
	{
		return 0;
	}
	return func_612(func_611(iParam0));
}

void func_319(int iParam0, int iParam1, int iParam2)
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

bool func_320(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_321(int iParam0)
{
	switch (func_318(iParam0))
	{
		case 1:
			iVar0 = func_441(iParam0);
			return func_613(iVar0);
		case 8:
			iVar1 = func_441(iParam0);
			if (func_443((*Global_1347702)[iVar1]->f_12, 1))
			{
				return func_614(iVar1);
			}
			break;
	}
	return -1;
}

void func_322(bool bParam0)
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
		func_615(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_616();
		Global_1898077->f_9 = func_617(Global_1894899->f_2);
		func_618(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_323()
{
	if (!func_208((*Global_1835011)[4]->f_1, 1))
	{
		return 0;
	}
	else if (!func_208((*Global_1347702)[66]->f_15, 1))
	{
		return 1;
	}
	else if (!func_208((*Global_1347702)[67]->f_15, 1))
	{
		return 2;
	}
	else if (!func_208((*Global_1835011)[38]->f_1, 1))
	{
		return 3;
	}
	else if (!func_208((*Global_1347702)[68]->f_15, 1))
	{
		return 4;
	}
	else if (!func_208((*Global_1835011)[59]->f_1, 1))
	{
		return 5;
	}
	else if (!func_208((*Global_1835011)[67]->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_324(int iParam0, int iParam1)
{
	if (!func_100(iParam0))
	{
		return;
	}
	func_619(iParam0, iParam1);
}

int func_325(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

int func_326(bool bParam0)
{
	if (!bParam0 && func_620(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_327(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_328(int iParam0, bool bParam1)
{
	if (func_1() != -1)
	{
		return;
	}
	if (func_325(0) != iParam0)
	{
		return;
	}
	if (func_621(iParam0))
	{
		if (bParam1)
		{
			func_622(-525676072);
		}
		else
		{
			func_623(-525676072);
		}
	}
}

int func_329(int iParam0)
{
	return func_625(func_624(iParam0));
}

void func_330(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_331(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_332(int iParam0)
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

bool func_333()
{
	return (iVar595 == 0 || iVar595 == 1);
}

bool func_334(var uParam0)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return false;
	}
	return _is_anim_scene_started(*uParam0, false);
}

int func_335(int iParam0, int iParam1, int iParam2)
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

void func_336(var uParam0, int iParam1, char* sParam2)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return;
	}
	if (!func_626(uParam0, sParam2))
	{
		return;
	}
	remove_anim_scene_entity(*uParam0, sParam2, iParam1);
}

void func_337(int iParam0)
{
	if (iLocal_205 < 10)
	{
		if (!func_286(*iParam0, &(Local_1617.f_140)))
		{
			Local_1617.f_140[iLocal_205] = *iParam0;
			iLocal_205++;
		}
	}
}

void func_338(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	if (!func_627(iParam0))
	{
		return;
	}
	iVar0 = func_628(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_629(iVar0);
	func_630(iVar0);
	iVar1 = get_id_of_this_thread();
	iVar2 = func_631(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_632(iVar0))
		{
			return;
		}
	}
	func_633(iVar0);
	set_ped_keep_task(iParam0, true);
	if (bParam1 && func_1() == -1)
	{
		if (!_0x88ad6cc10d8d35b2(iParam0))
		{
			set_entity_as_mission_entity(iParam0, true, true);
		}
	}
}

void func_339(int iParam0)
{
	iLocal_100 = (iLocal_100 - (iLocal_100 && iParam0));
}

void func_340(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

void func_341()
{
	_0xdd1232b332cbb9e7(4, 1, 0);
}

void func_342(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_140(iParam0))
	{
		return;
	}
	func_634(iParam0, &(Global_40.f_9096[iParam0]->f_10), iParam1, iParam2, iParam3, iParam4, bParam5);
}

void func_343(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		iParam0->f_1 = 0;
		func_344(iParam0, 1);
		func_194(iParam0, 1);
		func_193(iParam0, 1);
		func_191(iParam0, 1);
		func_635(iParam0, 1);
		func_195(iParam0, 1);
		func_636(iParam0, 1);
	}
	else
	{
		iParam0->f_1 = -1;
		func_344(iParam0, 0);
		func_194(iParam0, 0);
		func_193(iParam0, 0);
		func_191(iParam0, 0);
		func_635(iParam0, 0);
		func_195(iParam0, 0);
		func_636(iParam0, 0);
	}
}

void func_344(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_145(iParam0, 4);
	}
	else
	{
		func_201(iParam0, 4);
	}
}

void func_345(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_201(&(iParam0->f_1), 16384);
	}
	else
	{
		func_145(&(iParam0->f_1), 16384);
	}
}

int func_346(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
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
		if (func_637())
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
				if (func_282(iParam0, 1, 1) > fParam4)
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
			fVar1 = func_366(iParam0, iParam1, 1, 1);
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
				if (func_638(iParam0, iParam1, fVar1, bParam13))
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
				iVar2 = func_59(func_639(iParam0, sParam2, iParam11, iParam1, network_is_game_in_progress(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

void func_347()
{
	if (func_334(Local_492[2]))
	{
		fVar0 = func_640(Local_492[2]);
		func_641(Local_492[2], &fVar1, &vVar4);
		if (!is_entity_dead(&(uLocal_2082[0])) && has_anim_event_fired(&(uLocal_2082[0]), -615221946))
		{
			freeze_entity_position(&(uLocal_2082[0]), false);
			func_642(Local_492[2], "PB_VIC_BRKOUT", 1);
			func_643(Local_492[2], "RECOVERY_BOOL");
		}
		else if ((func_644(Local_492[2], "PBL_IMPATIENT") || (func_644(Local_492[2], "PBL_LIFT_SUCCESS") && fVar0 < 0.1855f)) || (func_644(Local_492[2], "PBL_ENTER") && fVar0 > 0.8602f))
		{
			if (Global_36 < fVar1)
			{
				func_642(Local_492[2], "PBL_COMBAT_L", 1);
				func_643(Local_492[2], "bBreakInternalLoop");
			}
			else
			{
				func_642(Local_492[2], "PBL_COMBAT_R", 1);
				func_643(Local_492[2], "bBreakInternalLoop");
			}
			func_14(1024);
		}
		else
		{
			if (!is_entity_dead(func_63(Local_1617.f_138)))
			{
				func_336(Local_492[2], func_63(Local_1617.f_138), "FOREMAN");
			}
			if (!is_entity_dead(func_63(810)))
			{
				func_336(Local_492[2], func_63(810), "PED1");
			}
			if (!is_entity_dead(&(uLocal_2082[2])))
			{
				func_336(Local_492[2], &(uLocal_2082[2]), "PED2");
			}
			if (!is_entity_dead(&(uLocal_2082[3])))
			{
				func_336(Local_492[2], &(uLocal_2082[3]), "PED3");
			}
			if (!is_entity_dead(Local_614.f_690[7]->f_8))
			{
				func_336(Local_492[2], Local_614.f_690[7]->f_8, "AXE1");
			}
			if (!is_entity_dead(Local_614.f_690[8]->f_8))
			{
				func_336(Local_492[2], Local_614.f_690[8]->f_8, "AXE2");
			}
			if (!is_entity_dead(Local_614.f_690[9]->f_8))
			{
				func_336(Local_492[2], Local_614.f_690[9]->f_8, "AXE3");
			}
			if (!is_entity_dead(Local_614.f_690[10]->f_8))
			{
				func_336(Local_492[2], Local_614.f_690[10]->f_8, "CIGARETTE");
			}
			if (func_19(512))
			{
				if (Global_36 < fVar1)
				{
					func_642(Local_492[2], "PBL_COMBAT_L", 1);
					func_643(Local_492[2], "bBreakInternalLoop");
				}
				else
				{
					func_642(Local_492[2], "PBL_COMBAT_R", 1);
					func_643(Local_492[2], "bBreakInternalLoop");
				}
			}
			func_128(1024);
		}
	}
}

void func_348(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iParam0 > -1 && iParam0 != iVar0)
		{
		}
		else if (func_334(Local_492[(9 + iVar0)]))
		{
			iVar1 = iVar0 * 4;
			iVar2 = iVar0 * 2;
			iVar3 = func_63(func_335(9, 0, iVar2));
			iVar4 = func_63(func_335(9, 1, iVar2));
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
				func_336(Local_492[(9 + iVar0)], (Local_614.f_690[(15 + iVar1)])->f_8, "SAW");
				if (has_anim_event_fired((Local_614.f_690[(15 + iVar1)])->f_8, -1984935666))
				{
					freeze_entity_position((Local_614.f_690[(15 + iVar1)])->f_8, true);
				}
				func_217(Local_492[(9 + iVar0)]);
			}
			else
			{
				if (!is_entity_dead(iVar3))
				{
					func_337(&iVar3);
				}
				if (!is_entity_dead(iVar4))
				{
					func_337(&iVar4);
				}
				iVar7 = func_645(iVar5, Global_35, 1060437492);
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
						func_336(Local_492[(9 + iVar0)], iVar3, "PED1");
					}
					if (!is_entity_dead(iVar4))
					{
						func_336(Local_492[(9 + iVar0)], iVar4, "PED2");
					}
				}
				if (!is_string_null_or_empty(func_646(iVar8, iVar7)))
				{
					func_642(Local_492[(9 + iVar0)], func_646(iVar8, iVar7), 1);
					func_643(Local_492[(9 + iVar0)], "bBreakInternalLoop");
				}
				func_336(Local_492[(9 + iVar0)], (Local_614.f_690[(15 + iVar1)])->f_8, "SAW");
				if (has_anim_event_fired((Local_614.f_690[(15 + iVar1)])->f_8, -1984935666))
				{
					freeze_entity_position((Local_614.f_690[(15 + iVar1)])->f_8, true);
				}
			}
		}
		iVar0++;
	}
}

void func_349()
{
	if (is_entity_dead(func_63(Local_1617.f_138)))
	{
		return;
	}
	if (!func_334(Local_492[0]))
	{
		return;
	}
	if (has_anim_event_fired(func_63(Local_1617.f_138), 465284456))
	{
		return;
	}
	set_entity_no_collision_entity(func_63(Local_1617.f_138), Local_614.f_690[25]->f_8, false);
	func_642(Local_492[0], "PBL_FOREMAN_STAGE2_COMBAT", 1);
	func_643(Local_492[0], "bBreakInternalLoop");
	func_14(1024);
}

void func_350()
{
	if (!is_entity_dead(func_63(Local_1617.f_138)) && func_334(Local_492[1]))
	{
		if (!has_anim_event_fired(func_63(Local_1617.f_138), 465284456))
		{
			set_entity_no_collision_entity(func_63(Local_1617.f_138), Local_614.f_690[25]->f_8, false);
			func_642(Local_492[1], "PBL_COMBAT", 1);
			func_643(Local_492[1], "bBreakInternalLoop");
			func_14(1024);
		}
		else
		{
			set_entity_no_collision_entity(func_63(Local_1617.f_138), Local_614.f_690[5]->f_8, false);
			func_217(Local_492[1]);
		}
	}
	if (func_334(Local_492[3]))
	{
		func_217(Local_492[3]);
		activate_physics(Local_614.f_690[7]->f_8);
	}
	if (func_334(Local_492[0]))
	{
		func_217(Local_492[0]);
	}
}

bool func_351(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_352(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_353(int iParam0)
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

void func_354(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	iVar0 = get_blip_from_entity(iParam0);
	func_98(&iVar0);
}

void func_355(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
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

bool func_356(int iParam0)
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

int func_357(int iParam0)
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

int func_358(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

char* func_359()
{
	return "Default_Shocked";
}

int func_360(int iParam0, bool bParam1)
{
	return func_647(iParam0, Global_1894899->f_2, bParam1);
}

bool func_361(int iParam0, bool bParam1, bool bParam2)
{
	if (func_356(iParam0))
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
	fVar1 = func_282(iParam0, 1, 1);
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

bool func_362(int iParam0, int iParam1, bool bParam2)
{
	if (func_352(iParam1))
	{
		return true;
	}
	if (bParam2 && is_ped_in_combat(*iParam0, 0))
	{
		return false;
	}
	return true;
}

void func_363(int iParam0, int iParam1, float fParam2)
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

bool func_364()
{
	if (is_bit_set(get_random_int_in_range(0, 65536), 0))
	{
		return true;
	}
	return false;
}

bool func_365(int iParam0, int iParam1, var uParam2, float fParam3)
{
	iVar0 = get_frame_count();
	if (iVar0 > iParam1->f_5)
	{
		func_566(iParam1, 0, iVar0);
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
				if (func_578(iParam1, 4000))
				{
					if ((func_579(iParam0, Global_1935630->f_41, *iParam1 & 128 != 0, 0, *iParam1 & 256 != 0) && func_580(iParam1, iParam0)) && func_581(iParam1, iParam0))
					{
						func_583();
						*uParam2 = 2;
						func_568(iParam0, iParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!iParam1->f_1 & 2 != 0)
		{
			if (iParam1->f_12 < 4f)
			{
				if (func_578(iParam1, 4000))
				{
					if ((func_579(iParam0, Global_1935630->f_41, *iParam1 & 128 != 0, 1, *iParam1 & 256 != 0) && func_580(iParam1, iParam0)) && func_581(iParam1, iParam0))
					{
						func_583();
						*uParam2 = 2;
						func_568(iParam0, iParam1, *uParam2);
						return true;
					}
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*iParam1 & 131072 == 0)
						{
							if (func_582(iParam0, Global_1935630->f_41))
							{
								func_583();
								*uParam2 = 2;
								func_568(iParam0, iParam1, *uParam2);
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
						if (func_582(iParam0, Global_1935630->f_41))
						{
							func_583();
							*uParam2 = 2;
							func_568(iParam0, iParam1, *uParam2);
							return true;
						}
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*iParam1 & 131072 == 0)
				{
					if (func_586())
					{
						if (func_582(iParam0, Global_1935630->f_42))
						{
							func_583();
							*uParam2 = 2;
							func_568(iParam0, iParam1, *uParam2);
							return true;
						}
					}
				}
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_572(iParam1, 1065353216))
			{
				if (!iParam1->f_1 & 4 != 0)
				{
					if (func_573(Global_35, iParam0, iParam1))
					{
						func_583();
						*uParam2 = 4;
						func_568(iParam0, iParam1, *uParam2);
						return true;
					}
				}
				if (!iParam1->f_1 & 256 != 0)
				{
					if (func_574(Global_35, iParam0, iParam1))
					{
						func_583();
						*uParam2 = 256;
						func_568(iParam0, iParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!iParam1->f_1 & 131072 != 0)
		{
			if (func_648(iParam0, iParam1))
			{
				func_583();
				*uParam2 = 131072;
				func_568(iParam0, iParam1, *uParam2);
				return true;
			}
		}
		if (*iParam1 & 4 != 0)
		{
			if (func_649(iParam0, iParam1))
			{
				func_583();
				*uParam2 = 262144;
				func_568(iParam0, iParam1, *uParam2);
				return true;
			}
		}
	}
	return false;
}

float func_366(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_367(var uParam0, int iParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_34)
	{
		if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
		{
			if (func_366(&(Global_1935630->f_34[iVar0]), *uParam0, 1, 1) < fParam2)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_368(var uParam0)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return true;
	}
	return _is_anim_scene_finished(*uParam0, false);
}

bool func_369(var uParam0, char* sParam1)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return false;
	}
	return _0x8d81e7824b7753f7(*uParam0, sParam1, 1);
}

void func_370(int iParam0)
{
	if (!_is_imap_active(iParam0))
	{
		_request_imap(iParam0);
	}
}

void func_371(int iParam0)
{
	if (_is_imap_active(iParam0))
	{
		_remove_imap(iParam0);
	}
}

bool func_372(int iParam0, int iParam1)
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

bool func_373(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_650(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_651(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_453(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_652(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_653(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_654(iParam0);
	if (iVar5 < 1 || iVar5 > func_655(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

void func_374(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_652(*iParam0);
	iVar1 = func_653(*iParam0);
	iVar2 = func_654(*iParam0);
	iVar3 = func_453(*iParam0);
	iVar4 = func_651(*iParam0);
	iVar5 = func_650(*iParam0);
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
	iVar6 = func_655(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_655(iVar1, iVar0);
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
	func_656(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_375(int iParam0, bool bParam1)
{
	return func_657(func_452(), iParam0, bParam1);
}

bool func_376(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_377(int* iParam0)
{
	if (iParam0->f_19 == 0)
	{
		if (does_entity_exist(func_391(Global_35)))
		{
			iParam0->f_19 = add_shocking_event_for_entity(67779789, Global_35, 999f, 5f, 5f, -1f, -1f, 180f, false, false, -1, -1);
		}
	}
	else if (!does_entity_exist(func_391(Global_35)))
	{
		remove_shocking_event(iParam0->f_19);
	}
}

void func_378(int* iParam0, int iParam1)
{
	iParam0->f_13 = iParam1;
}

void func_379(int* iParam0, int* iParam1, var uParam2, bool bParam3)
{
	if (iParam0->f_14 > 0)
	{
		iVar1 = func_659(iParam0, iParam1, 15f, uParam2, &uVar0, 0, 1, 0, 0, func_658(1, 0, 0), 0, 0, 2, 1, -1082130432, 0);
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
				func_661((*uParam2)[0], func_660(8), "", -163964935, 0, 0, 0, 1, 0);
				func_662((*uParam2)[0], 1, 0);
				func_663((*uParam2)[0], 0);
				func_661((*uParam2)[1], func_660(10), "", 648122183, 0, 0, 0, 1, 0);
				func_662((*uParam2)[1], 1, 0);
				func_663((*uParam2)[1], 0);
				func_661((*uParam2)[2], func_660(12), "", -1616532217, 0, 0, 0, 1, 0);
				func_662((*uParam2)[2], 0, 0);
				func_663((*uParam2)[2], 1);
				func_664(iParam0, 1);
			}
			break;
		case 1:
			if (!func_256(0, 1, Global_35, 1) || !func_256(0, 1, *iParam0, 1))
			{
				func_665(uParam2);
			}
			if (iParam0->f_15 != -1)
			{
				func_78(iParam1, 0);
				func_662((*uParam2)[0], 0, 0);
				func_662((*uParam2)[1], 0, 0);
				if (!is_string_null_or_empty(func_666(iParam0)))
				{
					func_116(Global_35, *iParam0, func_666(iParam0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				func_664(iParam0, 2);
			}
			break;
		case 2:
			if (func_256(0, 1, Global_35, 1) && func_256(0, 1, *iParam0, 1))
			{
				if (!is_string_null_or_empty(func_667(iParam0)))
				{
					func_116(*iParam0, Global_35, func_667(iParam0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				func_664(iParam0, 3);
			}
			break;
		case 3:
			if (func_256(0, 1, Global_35, 1) && func_256(0, 1, *iParam0, 1))
			{
				func_664(iParam0, 4);
			}
			break;
		case 4:
			break;
	}
}

bool func_380(int iParam0)
{
	return func_62(iParam0, 0, 1);
}

char* func_381(int iParam0, int iParam1)
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

bool func_382(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	return is_ped_on_mount(iParam0);
}

float func_383(var uParam0)
{
	if (!func_668(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_669(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_479() - uParam0->f_1);
}

bool func_384(int* iParam0)
{
	return true;
}

float func_385(int iParam0, int iParam1, bool bParam2)
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
	return func_670(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
}

void func_386(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		allow_sonar_blips(true);
		force_sonar_blips_this_frame();
	}
	_trigger_sonar_blip_2(iParam0, iParam1);
}

int func_387(char[4] cParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	iParam3 = iParam3;
	iParam4 = iParam4;
	if (!is_entity_dead(iParam2) && (func_366(iParam2, iParam3, 1, 1) < 70f || bParam5))
	{
		StringCopy(&cVar0, sParam1, 24);
		if (bParam7)
		{
			task_look_at_entity(iParam2, iParam3, 7000, 0, 51, 0);
			if (func_366(iParam2, iParam3, 1, 1) < 25f)
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
			if (func_671(sParam1))
			{
				return 1;
			}
		}
		else if (func_672(cParam0, cVar0, iVar3, iParam4, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

var func_388(int* iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		if (iParam0->f_16 == 8 && func_364())
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
	if (func_134(iParam0, 16))
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
	return func_673(cVar0);
}

bool func_389(char* sParam0)
{
	if (_0xd89504d9d7d5057d(sParam0) && _0x1ecc76792f661cf5(sParam0))
	{
		return true;
	}
	return false;
}

bool func_390(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_366(iVar0, iParam0, 1, 1) <= 4f)
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
		if (_is_weapon_sniper(func_674(iVar0, 0)))
		{
			if (func_675(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_391(int iParam0)
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

float func_392(int* iParam0)
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

bool func_393(var uParam0, float fParam1)
{
	if (!func_668(uParam0))
	{
		return false;
	}
	if (func_383(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_394(int* iParam0, int* iParam1, var uParam2)
{
	func_676(iParam0, iParam1, uParam2, 1, 1);
	func_109(uParam2, 0, 1, 1, 1);
	if (decor_exist_on(*iParam0, "bScriptedILO"))
	{
		decor_remove(*iParam0, "bScriptedILO");
	}
	iParam0->f_14 = 0;
	iParam0->f_15 = -1;
}

int func_395()
{
	return 0;
}

int func_396(int iParam0)
{
	return 0;
}

int func_397(var uParam0, int iParam1)
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

bool func_398(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_399(int iParam0, int iParam1)
{
	iVar0 = iParam1 * 4;
	iVar1 = iParam1 * 2;
	iVar2 = iParam1 * 2;
	if ((18 + iVar0) >= Local_614.f_690 || iVar0 < 0)
	{
	}
	if ((1 + iVar1) >= 4 || iVar1 < 0)
	{
	}
	iVar3 = func_63(func_335(9, 0, iVar1));
	iVar4 = func_63(func_335(9, 1, iVar1));
	if (&iLocal_599[iParam1] < 11)
	{
		func_677(&iVar1, &iVar0, &iVar3, &iVar4, iParam1);
		func_678(iParam1, &iVar3);
		func_679(&iVar3, &iVar4, iParam1);
	}
	switch (&iLocal_599[iParam1])
	{
		case 0:
			if ((does_entity_exist((Local_614.f_690[(16 + iVar0)])->f_8) && does_entity_exist((Local_614.f_690[(17 + iVar0)])->f_8)) && does_entity_exist((Local_614.f_690[(18 + iVar0)])->f_8))
			{
				set_object_physics_params((Local_614.f_690[(16 + iVar0)])->f_8, 500f, 1f, 1f, 1f, 1f, 1f, 1f, 1f, -1f, 0f, -1f);
				set_object_physics_params((Local_614.f_690[(17 + iVar0)])->f_8, 750f, 1f, 1f, 1f, 1f, 1f, 1f, 1f, -1f, 0f, -1f);
				set_object_physics_params((Local_614.f_690[(18 + iVar0)])->f_8, 1000f, 1f, 1f, 1f, 1f, 1f, 1f, 1f, -1f, 0f, -1f);
				freeze_entity_position((Local_614.f_690[(16 + iVar0)])->f_8, true);
				freeze_entity_position((Local_614.f_690[(17 + iVar0)])->f_8, true);
				freeze_entity_position((Local_614.f_690[(18 + iVar0)])->f_8, true);
				iLocal_75[(12 + iVar2)] = _create_volume_box(*(Local_614.f_690[(17 + iVar0)]), 0f, 0f, (Local_614.f_690[(17 + iVar0)])->f_3, 0.613833f, 3.325524f, 5.714088f);
				_0x7c00cfc48a782dc0(&(iLocal_75[(12 + iVar2)]), (Local_614.f_690[(17 + iVar0)])->f_8, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
				_0x19c7567d2f2287d6(&(iLocal_75[(12 + iVar2)]), 7);
				iLocal_75[(13 + iVar2)] = _create_volume_box(*(Local_614.f_690[(18 + iVar0)]), 0f, 0f, (Local_614.f_690[(18 + iVar0)])->f_3, 1f, 7.3475f, 5f);
				_0x7c00cfc48a782dc0(&(iLocal_75[(13 + iVar2)]), (Local_614.f_690[(18 + iVar0)])->f_8, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
				_0x19c7567d2f2287d6(&(iLocal_75[(13 + iVar2)]), 7);
				func_47(func_602(9), &Local_614);
				iLocal_599[iParam1] = 1;
			}
			break;
		case 1:
			if (_0x5e420ff293ee5472())
			{
				iVar5 = func_680(9, iVar1);
				if (iVar5 == func_602(9))
				{
					if (!is_entity_dead(iVar3) && !is_entity_dead(iVar4))
					{
						clear_ped_tasks_immediately(iVar3, false, true);
						clear_ped_tasks_immediately(iVar4, false, true);
						iLocal_599[iParam1] = 2;
					}
				}
			}
			break;
		case 2:
			if (is_entity_dead(iVar3) || is_entity_dead(iVar4))
			{
				iLocal_599[iParam1] = 1;
			}
			else if (does_entity_exist((Local_614.f_690[(15 + iVar0)])->f_8))
			{
				_set_entity_coords_and_heading((Local_614.f_690[(15 + iVar0)])->f_8, func_491(iParam0), func_492(iParam0), true, false, true);
				func_683(Local_492[(9 + iParam1)], func_681(iParam0), func_682(iParam0));
				func_684(Local_492[(9 + iParam1)], iVar3, "PED1", 1);
				func_684(Local_492[(9 + iParam1)], iVar4, "PED2", 1);
				StringCopy(&((Local_492[(9 + iParam1)])->f_4), "bBreakInternalLoop", 24);
				func_685(Local_492[(9 + iParam1)], (Local_614.f_690[(15 + iVar0)])->f_8, "SAW");
				func_685(Local_492[(9 + iParam1)], (Local_614.f_690[(16 + iVar0)])->f_8, "LOG_01");
				func_685(Local_492[(9 + iParam1)], (Local_614.f_690[(17 + iVar0)])->f_8, "LOG_03");
				func_685(Local_492[(9 + iParam1)], (Local_614.f_690[(18 + iVar0)])->f_8, "LOG_02");
				iLocal_599[iParam1] = 3;
			}
			break;
		case 3:
			if (func_527(Local_492[(9 + iParam1)]))
			{
				func_686(Local_492[(9 + iParam1)]);
				iLocal_599[iParam1] = 4;
			}
			break;
		case 4:
			if ((!is_entity_dead(iVar3) && func_687(iVar3, 40f, -1082130432, -1082130432, -1082130432)) || (!is_entity_dead(iVar4) && func_687(iVar4, 40f, -1082130432, -1082130432, -1082130432)))
			{
				func_643(Local_492[(9 + iParam1)], "bBreakInternalLoop");
				iLocal_599[iParam1] = 5;
			}
			break;
		case 5:
			if (!is_entity_dead(iVar3))
			{
				if (has_anim_event_fired(iVar3, 545488006))
				{
					_play_sound_from_position("Wood_Tear", get_entity_coords((Local_614.f_690[(15 + iVar0)])->f_8, true, false), "APPLESEED_SOUNDSET", false, 0, true, 0);
				}
				if (has_anim_event_fired(iVar3, -1817629992))
				{
					func_111(&(iLocal_75[(13 + iVar2)]));
					iLocal_599[iParam1] = 6;
				}
			}
			break;
		case 6:
			if (!is_entity_dead(iVar3))
			{
				if (has_anim_event_fired(iVar3, 545488006))
				{
					_play_sound_from_position("Wood_Tear", get_entity_coords((Local_614.f_690[(15 + iVar0)])->f_8, true, false), "APPLESEED_SOUNDSET", false, 0, true, 0);
				}
				if (has_anim_event_fired(iVar3, -1817629992))
				{
					func_111(&(iLocal_75[(12 + iVar2)]));
					iLocal_599[iParam1] = 7;
				}
			}
			break;
		case 7:
			if (!is_entity_dead(iVar3) && has_anim_event_fired(iVar3, -1202392137))
			{
				iLocal_599[iParam1] = 8;
			}
			break;
		case 8:
			if (func_688(iVar4, &(Local_492[(9 + iParam1)]), "PED2", 0, 0, 1, 0))
			{
				set_ped_config_flag(iVar4, 330, false);
				if (iVar429 != iVar4)
				{
					func_689(9, 1, iVar1, 0);
				}
				iLocal_599[iParam1] = 9;
			}
			break;
		case 9:
			if (func_688(iVar3, &(Local_492[(9 + iParam1)]), "PED1", 0, 0, 1, 0))
			{
				set_ped_config_flag(iVar3, 330, false);
				if (iVar429 != iVar3)
				{
					func_689(9, 0, iVar1, 0);
				}
				iLocal_599[iParam1] = 10;
			}
			break;
		case 10:
			if (!_does_anim_scene_exist(&(Local_492[(9 + iParam1)])) || func_368(Local_492[(9 + iParam1)]))
			{
				func_217(Local_492[(9 + iParam1)]);
				set_object_physics_params((Local_614.f_690[(16 + iVar0)])->f_8, 500f, 1f, 1f, 1f, 1f, 0.5f, 0.5f, 0.5f, -1f, -1f, -1f);
				set_object_physics_params((Local_614.f_690[(17 + iVar0)])->f_8, 750f, 1f, 1f, 1f, 1f, 0.5f, 0.5f, 0.5f, -1f, -1f, -1f);
				set_object_physics_params((Local_614.f_690[(18 + iVar0)])->f_8, 1000f, 1f, 1f, 1f, 1f, 0.5f, 0.5f, 0.5f, -1f, -1f, -1f);
				iLocal_599[iParam1] = 11;
			}
			break;
		case 11:
			break;
	}
}

int func_400()
{
	if (iVar602 > 0)
	{
		func_690();
	}
	switch (iVar602)
	{
		case 0:
			_request_scenario_type(-1939316457, 262148, func_459(), 0);
			iVar0 = 0;
			while (iVar0 < 4)
			{
				iVar1 = func_691(iVar0);
				iVar2 = (810 + iVar0);
				if (!func_266(iVar2, 0))
				{
					func_62(iVar2, 1, 1);
				}
				else
				{
					iVar3 = func_63(iVar2);
					if ((!is_entity_dead(iVar3) && func_254(iVar3, 0, 1)) && !func_117(func_692(iVar0)))
					{
						func_261(iVar3, func_381(Local_1617.f_136, 4), 0);
						if (func_166(64))
						{
							if (_0x6eead6af637da752(func_437(iVar1), func_693(), 4f, 0) && !func_430(iVar1))
							{
								vVar4 = { func_437(iVar1) };
								clear_ped_tasks_immediately(iVar3, false, true);
								open_sequence_task(&iLocal_196);
								if (_does_scenario_point_exist(&(uLocal_478[iVar1])))
								{
									_task_use_scenario_point(0, &(uLocal_478[iVar1]), 0, 0, false, true, 0, false, -1f, false);
								}
								else
								{
									_task_use_nearest_scenario_to_coord(0, vVar4, 5f, 0, false, false, false, false);
								}
								close_sequence_task(iLocal_196);
								_task_perform_sequence_2(iVar3, iLocal_196, 0f, 2f);
								clear_sequence_task(&iLocal_196);
								set_ped_config_flag(iVar3, 146, false);
							}
							else
							{
								func_77(iVar2, 1);
								set_ped_config_flag(iVar3, 146, false);
							}
						}
						else
						{
							func_77(iVar2, 1);
							set_ped_config_flag(iVar3, 146, false);
						}
						func_35(func_692(iVar0));
					}
					iVar0++;
					iVar0 = 0;
					while (iVar0 < 5)
					{
						func_694(func_692(iVar0));
						iVar0++;
					}
					iLocal_604 = 2;
					Jump @719; //curOff = 426
					func_695();
					func_138();
					iVar0 = (iLocal_206 % 4);
					iVar1 = func_691(iVar0);
					if (!func_466(iVar1) && !func_117(func_696(iVar0)))
					{
						func_697(iVar0);
						iVar2 = (810 + iVar0);
						if (!func_266(iVar2, 0))
						{
							func_62(iVar2, 1, 1);
						}
						iVar3 = func_63(iVar2);
						func_698(&iVar3);
						func_699(iVar0);
						func_700(&iVar3, iVar0);
						if (func_254(iVar3, 0, 1))
						{
							if (!func_19(4096) && func_701(&iVar3, Local_2184[iVar0], uLocal_2210[iVar0], iVar0))
							{
								func_702(&iVar3, iVar0);
								iLocal_604 = 3;
								return 0;
							}
						}
					}
					if ((((iLocal_206 % 10) == 1 && !func_166(64)) && !func_19(4096)) && !func_19(512))
					{
						func_703();
						iLocal_604 = 1;
						return 0;
					}
					Jump @719; //curOff = 664
					if ((iLocal_206 % 10) == 1 && func_166(64))
					{
						func_703();
						iLocal_604 = 2;
					}
					Jump @719; //curOff = 696
					func_48(vLocal_570[0]);
					iLocal_604 = 2;
				}
				return 0;
			}
			default:
				break;
	}
}

void func_401()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar2 = (810 + iVar0);
		iVar3 = func_63(iVar2);
		iVar1 = func_691(iVar0);
		if (((does_rayfire_map_object_exist(&(iLocal_466[iVar1])) && get_state_of_rayfire_map_object(&(iLocal_466[iVar1])) == 10) && (is_entity_dead(iVar3) || !is_ped_using_any_scenario(iVar3))) && !func_430(iVar1))
		{
			func_704(iVar1);
			func_474(iVar1, 0);
			if (!func_19(64) || iVar1 != 0)
			{
				func_267(iVar2, 0, 1, 0, 0);
			}
			func_705();
		}
		else
		{
			iVar0++;
		}
	}
}

void func_402(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_661((*Local_275[iParam0])[0], func_660(7), "", -163964935, 0, 0, 0, 1, 0);
	func_661((*Local_275[iParam0])[1], func_660(10), "", 648122183, 0, 0, 0, 1, 0);
	func_661((*Local_275[iParam0])[2], func_660(12), "", -1616532217, 0, 0, 0, 1, 0);
}

void func_403(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_78(Local_211[iParam0], 0);
	func_706(iParam0, 0);
	if (!bParam2)
	{
		if (iParam0 == 1)
		{
			func_339(524288);
		}
		else
		{
			func_50(268435456);
		}
	}
	if (bParam1)
	{
		iLocal_432 = -1;
	}
}

void func_404(int iParam0)
{
	if (!func_51(67108864))
	{
		return;
	}
	if (func_70(536870912))
	{
		if (decor_exist_on(*iParam0, "bScriptedILO"))
		{
			decor_remove(*iParam0, "bScriptedILO");
		}
		return;
	}
	iVar0 = func_658(1, 0, 0);
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
	if (iLocal_98 == 1 && !func_5(Local_1617.f_136, 128))
	{
		fLocal_210 = 8f;
	}
	iVar1 = 1;
	if (!decor_exist_on(*iParam0, "bScriptedILO"))
	{
		decor_set_bool(*iParam0, "bScriptedILO", true);
	}
	if (((((is_control_pressed(0, 1287709438) || is_control_pressed(0, 1499911466)) || is_control_pressed(0, -209515122)) || func_707()) || func_708()) || func_709())
	{
		func_48(vLocal_570[7]);
	}
	if (func_668(vLocal_570[7]) && !func_393(vLocal_570[7], 0.25f))
	{
		func_665(Local_275[0]);
	}
	iVar2 = func_659(iParam0, Local_211[0], fLocal_210, Local_275[0], &iVar1, 0, 1, 0, 0, iVar0, 0, 0, 2, 1, -1082130432, 0);
	if (iVar429 <= -1)
	{
		if (iVar2 != -1)
		{
		}
		iLocal_432 = iVar2;
	}
	if (!func_51(-2147483648))
	{
		if (!func_51(268435456))
		{
			if (func_256(-3.5f, 1, 0, 0))
			{
				if (iVar429 == 1 && !func_51(536870912))
				{
					func_116(*iParam0, Global_35, func_710(), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_58(1048576);
				}
				func_403(0, 1, 0);
				func_58(268435456);
			}
		}
		else
		{
			switch (iVar429)
			{
				case 0:
					func_387(&(Local_1617.f_35), "LCMP_GOODBYE", Global_35, *iParam0, 0, 0, 1, 1);
					func_58(1073741824);
					func_403(0, 1, 0);
					break;
				case 1:
					if (func_51(536870912))
					{
						func_50(536870912);
						func_387(&(Local_1617.f_35), "LCMP_QUIT", Global_35, *iParam0, 0, 0, 1, 1);
						func_58(64);
						func_10(Local_1617.f_136, 262144);
						func_15(Local_1617.f_136, 256);
						func_403(0, 1, 0);
					}
					else
					{
						sVar3 = func_711();
						func_116(Global_35, *iParam0, sVar3, 0, -1082130432, get_random_int_in_range(1, 21), 0, 0, 1, 1, 1, 1506116031, 1, 0, 0);
						func_403(0, 0, 0);
					}
					break;
			}
		}
	}
}

void func_405(int iParam0)
{
	switch (iVar595)
	{
		case 0:
			if (iLocal_98 == 1 || does_entity_exist(Local_614.f_690[12]->f_8))
			{
				if (func_166(64))
				{
					iLocal_598 = 2;
				}
				else
				{
					iLocal_598 = 1;
				}
			}
			break;
		case 1:
			if (func_166(64))
			{
				if (iLocal_98 != 1)
				{
					_play_sound_from_position("Whistle_Long", get_entity_coords(Local_614.f_690[12]->f_8, true, false), "Steam_Donkey_Sounds", false, 0, true, 0);
				}
				iLocal_598 = 2;
			}
			break;
		case 2:
			if (!func_166(64))
			{
				if (iLocal_98 == 1)
				{
					func_387(&(Local_1617.f_35), "LCMP_FMN_EOS", *iParam0, Global_35, 0, 0, 1, 0);
				}
				else
				{
					_play_sound_from_position("Whistle_Harmonic", get_entity_coords(Local_614.f_690[12]->f_8, true, false), "Steam_Donkey_Sounds", false, 0, true, 0);
				}
				iLocal_598 = 1;
			}
			break;
		case 3:
			break;
	}
}

void func_406()
{
	if (!_does_scenario_point_exist(iVar483))
	{
		iVar0 = _find_closest_active_scenario_point_of_type(func_264(), -1426662425, 1f, 0, false);
		uLocal_485 = create_scenario_point_attached_to_entity(Local_614.f_690[25]->f_8, 1271499410, _get_scenario_point_coords(iVar0, true), _get_scenario_point_heading(iVar0, true), 0, 0, 0);
		if (_does_scenario_point_exist(iVar483))
		{
		}
	}
}

void func_407()
{
	iVar0 = func_63(func_335(7, 0, 0));
	iVar1 = func_63(func_335(7, 1, 0));
	if (iVar600 > 0 && iVar600 < 15)
	{
		func_712();
	}
	switch (iVar600)
	{
		case 0:
			if (!_does_volume_exist(iVar1911))
			{
				iLocal_1913 = _create_volume_box_with_custom_name(-1357.609f, -184.4249f, 102.2077f, 0f, 0f, -25f, 18.26119f, 3.749432f, 8f, "volLoaderLogBlocker");
				_0x19c7567d2f2287d6(iVar1911, 7);
			}
			if (iLocal_98 == 2 || iLocal_98 == 3)
			{
				bVar2 = true;
				if (does_entity_exist(Local_614.f_690[13]->f_8))
				{
					freeze_entity_position(Local_614.f_690[13]->f_8, true);
				}
				else
				{
					bVar2 = false;
				}
				if (does_entity_exist(Local_614.f_690[12]->f_8))
				{
					freeze_entity_position(Local_614.f_690[12]->f_8, true);
				}
				else
				{
					bVar2 = false;
				}
				if (bVar2)
				{
					if (does_entity_exist(&(iLocal_2105[1])))
					{
						iVar3 = _0x2963b5c1637e8a27(&(iLocal_2105[1]));
						func_713(&iVar3);
						_0x2bb2b5bcf0df8008(&(iLocal_2105[1]), 1);
						_0xa72b1bf3857b94d7(&(iLocal_2105[1]), 1);
					}
					if (func_19(256))
					{
						func_47(func_602(7), &Local_614);
						iLocal_602 = 1;
					}
					else
					{
						iLocal_602 = 15;
					}
				}
			}
			else
			{
				iLocal_602 = 15;
			}
			break;
		case 1:
			if (_0x5e420ff293ee5472())
			{
				iVar4 = func_680(7, 0);
				if (iVar4 == func_602(7))
				{
					if (!is_entity_dead(iVar0) && !is_entity_dead(iVar1))
					{
						clear_ped_tasks_immediately(iVar0, false, true);
						clear_ped_tasks_immediately(iVar1, false, true);
						func_245(iVar0, 1, 1);
						func_245(iVar1, 1, 1);
						func_684(Local_492[7], iVar0, "OPERATOR", 1);
						func_684(Local_492[8], iVar1, "SPOTTER", 1);
						func_686(Local_492[7]);
						func_686(Local_492[8]);
						func_643(Local_492[7], "bBreakInternalLoop");
						func_643(Local_492[8], "bBreakInternalLoop");
						iLocal_602 = 2;
					}
				}
			}
			break;
		case 2:
			if (func_369(Local_492[7], "IDLE_LOOP"))
			{
				func_643(Local_492[7], "bBreakInternalLoop");
				func_643(Local_492[8], "bBreakInternalLoop");
			}
			else if (func_714(Local_492[7], "bBreakInternalLoop"))
			{
				func_715(Local_492[7], "bBreakInternalLoop");
				func_715(Local_492[8], "bBreakInternalLoop");
			}
			if (!is_entity_dead(iVar0) && has_anim_event_fired(iVar0, 1381571371))
			{
				if (!func_19(268435456))
				{
					if (!is_entity_dead(Local_614.f_690[13]->f_8))
					{
						play_entity_anim(Local_614.f_690[13]->f_8, "aplloader_full", "props_misc@appleseed_loader", 8f, false, true, false, 0f, 0);
						set_anim_rate(Local_614.f_690[13]->f_8, 0.4f, 0, false);
						func_14(268435456);
					}
				}
				iLocal_602 = 3;
			}
			break;
		case 3:
			func_716(&iVar0, &iVar1);
			break;
		case 14:
			if (!func_51(256))
			{
				if (func_688(iVar0, &(Local_492[7]), "OPERATOR", 0, 0, 1, 0) || !_0x0b7cb1300cbfe19c(iVar0, 1))
				{
					if (!is_entity_dead(iVar0))
					{
						set_ped_config_flag(iVar0, 330, false);
						func_336(Local_492[7], iVar0, "OPERATOR");
						task_go_straight_to_coord(iVar0, -1349.967f, -202.9536f, 100.4027f, 1f, 20000, 1193033728, 1056964608, 0);
						func_689(7, 0, 0, 0);
					}
					func_217(Local_492[7]);
					func_58(256);
				}
			}
			if (!func_51(512))
			{
				if (func_688(iVar1, &(Local_492[8]), "SPOTTER", 0, 0, 1, 0) || !_0x0b7cb1300cbfe19c(iVar1, 1))
				{
					if (!is_entity_dead(iVar1))
					{
						set_ped_config_flag(iVar1, 330, false);
						func_336(Local_492[8], iVar1, "SPOTTER");
						func_689(7, 1, 0, 0);
					}
					func_217(Local_492[8]);
					func_58(512);
				}
			}
			if (func_51(256) && func_51(512))
			{
				iLocal_602 = 15;
			}
			break;
		case 15:
			break;
	}
}

int func_408(int iParam0)
{
	if (is_player_riding_train(get_player_index()))
	{
		return 0;
	}
	if (func_134(&Local_433, 1))
	{
		return 0;
	}
	if (func_19(32))
	{
		return 0;
	}
	if ((iLocal_206 % 5) != 0)
	{
		return 0;
	}
	if (!func_215(Global_35, (*Global_1392194)[Local_1617.f_136]->f_5, 1, 0))
	{
		return 0;
	}
	if (func_282(*iParam0, 1, 1) < (15f + 10f))
	{
		func_14(33554432);
		return 1;
	}
	if (func_19(4096))
	{
		return 0;
	}
	uVar24 = 30;
	func_300(&uVar24);
	iVar22 = func_717(&uVar10, &uVar24, 9, Global_36, 15f, 0, 1, 1, Local_614.f_13, 1, 0, -1082130432, 0, 0);
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
					func_261(iVar20, func_381(Local_1617.f_136, -1), 0);
				}
				iVar0[iVar23] = iVar20;
				iVar23++;
			}
		}
		iVar21++;
	}
	if (func_718(&Local_2147, &iVar0, &uLocal_2182, 1, func_19(2)))
	{
		func_201(&(Local_2147.f_34), 1);
		func_14(2);
		func_14(33554432);
		return 1;
	}
	return 0;
}

void func_409()
{
}

void func_410()
{
	if (func_719() && (get_frame_count() % 30) == 0)
	{
		if (func_12(Local_1617.f_136))
		{
			func_14(128);
		}
	}
}

void func_411()
{
	if (!func_5(Local_1617.f_136, 4))
	{
		if (func_51(65536))
		{
			func_42(Local_1617.f_136, 4);
		}
	}
}

void func_412(var uParam0)
{
}

char* func_413()
{
	return "LOG_BLIP_FM";
}

void func_414(int iParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, char* sParam6)
{
	bParam3 = bParam3;
	if (*bParam4)
	{
		if (func_215(Global_35, (*Global_1392194)[uParam2->f_136]->f_6, 1, 0))
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
				func_355(iParam0, iParam1, -89429847, iVar0, 0, sParam6);
			}
		}
	}
}

void func_415()
{
	if (func_19(64))
	{
		set_force_object_this_frame(func_720(), 10f);
	}
}

bool func_416(int iParam0, int iParam1)
{
	func_721();
	func_722();
	func_723();
	func_724();
	iVar0 = func_691(0);
	iVar1 = 810;
	iVar2 = func_63(iVar1);
	func_725(iParam0, iParam1, &iVar2, uLocal_2082[2], uLocal_2082[3]);
	switch (iVar1916)
	{
		case 0:
			if (!func_266(Local_1617.f_138, 0))
			{
				func_62(Local_1617.f_138, 1, 1);
			}
			if (!is_entity_dead(*iParam1) && iVar600 >= 2)
			{
				func_726(*iParam1, 1);
				freeze_entity_position(Local_614.f_690[24]->f_8, true);
				set_entity_visible(Local_614.f_690[24]->f_8, false);
				set_entity_collision(Local_614.f_690[24]->f_8, false, false);
				set_can_climb_on_entity(Local_614.f_690[24]->f_8, false);
				_set_entity_coords_and_heading(Local_614.f_690[24]->f_8, *Local_614.f_690[24], Local_614.f_690[24]->f_3, true, false, true);
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
				func_727(*iParam0, 1);
				clear_ped_tasks_immediately(*iParam1, false, true);
				func_727(*iParam1, 1);
				clear_ped_tasks_immediately(iVar2, false, true);
				func_727(iVar2, 1);
				clear_ped_tasks_immediately(&(uLocal_2082[2]), false, true);
				func_727(&(uLocal_2082[2]), 1);
				clear_ped_tasks_immediately(&(uLocal_2082[3]), false, true);
				func_727(&(uLocal_2082[3]), 1);
				func_403(0, 1, 1);
				func_684(Local_492[2], *iParam0, "FOREMAN", 1);
				func_684(Local_492[2], *iParam1, "VICTIM", 1);
				func_684(Local_492[2], iVar2, "PED1", 1);
				func_684(Local_492[2], &(uLocal_2082[2]), "PED2", 1);
				func_684(Local_492[2], &(uLocal_2082[3]), "PED3", 1);
				func_684(Local_492[2], Global_35, "player", 1);
				func_685(Local_492[2], Local_614.f_690[6]->f_8, "MONEY");
				func_685(Local_492[2], Local_614.f_690[7]->f_8, "AXE1");
				func_685(Local_492[2], Local_614.f_690[8]->f_8, "AXE2");
				func_685(Local_492[2], Local_614.f_690[9]->f_8, "AXE3");
				func_685(Local_492[2], Local_614.f_690[10]->f_8, "CIGARETTE");
				func_685(Local_492[2], Local_614.f_690[24]->f_8, "TREE");
				func_728(Local_492[2], "PBL_LIFT_SUCCESS");
				func_728(Local_492[2], "PBL_IMPATIENT");
				func_728(Local_492[2], "PBL_COMBAT_L");
				func_728(Local_492[2], "PBL_COMBAT_R");
				func_728(Local_492[2], "PB_VIC_BRKOUT");
				func_67(&(Local_1617.f_35), *iParam0, "EA_LCMP_Foreman", 0);
				func_67(&(Local_1617.f_35), iVar2, "LOG_WORKER_3", 0);
				func_67(&(Local_1617.f_35), &(uLocal_2082[2]), "LCMP_WITNESS1", 0);
				func_67(&(Local_1617.f_35), *iParam1, "LOGGING_VICTIM", 0);
				func_729(&(Local_1617.f_35), "LCMPF_IG3", 0);
				func_729(&(Local_1617.f_35), "LCMP_IG_TREE_P2", 0);
				prepare_music_event("SP_EVENT_AREA_APPLESEED_2_START");
				func_128(1);
				if (iLocal_98 == 2 && func_9(1, 2))
				{
					play_entity_anim(Local_614.f_690[4]->f_8, func_730(), func_731(), 0.3f, true, true, false, 0f, 0);
				}
				func_686(Local_492[2]);
				func_71(67108864);
				iLocal_1920 = 2;
			}
			break;
		case 2:
			if (func_732(iParam1, iVar0))
			{
				vVar3 = { func_733(Global_35, 2f) };
				if (get_distance_between_coords(vVar3, func_720(), false) < 60f)
				{
					func_734(1048576000, 1028443341, 0, 106);
					func_14(4096);
					func_128(2);
					func_14(32);
					func_48(vLocal_570[4]);
					func_387(&(Local_1617.f_35), "LCMPF_IG3", iVar2, *iParam0, 0, 0, 1, 1);
					func_702(&iVar2, 0);
					func_697(0);
					iLocal_1920 = 1;
				}
			}
			else if (func_521(func_437(iVar0), 1) <= 63f)
			{
				if (!func_668(vLocal_570[4]))
				{
					func_48(vLocal_570[4]);
				}
				else if (func_669(vLocal_570[4]))
				{
					func_735(vLocal_570[4]);
				}
				if (func_393(vLocal_570[4], 7.5f))
				{
					func_58(2097152);
					iLocal_1920 = 10;
				}
			}
			else if (func_668(vLocal_570[4]) && !func_669(vLocal_570[4]))
			{
				func_736(vLocal_570[4]);
			}
			break;
		case 1:
			func_734(1048576000, 1028443341, 0, 106);
			if (func_224(vLocal_570[4], 2f))
			{
				func_643(Local_492[2], "bBreakInternalLoop");
			}
			if (has_anim_event_fired(iVar2, -1318036203))
			{
				func_216("SP_EVENT_AREA_APPLESEED_2_START", 0);
				set_ped_config_flag(*iParam1, 277, true);
				set_ped_config_flag(*iParam1, 146, true);
				func_715(Local_492[2], "bBreakInternalLoop");
				func_737();
				iLocal_604 = 3;
				iLocal_1920 = 4;
			}
			break;
		case 4:
			func_734(1048576000, 1028443341, 0, 106);
			func_129();
			if (func_738(20))
			{
				set_ped_reset_flag(Global_35, 318, true);
			}
			if (has_anim_event_fired(*iParam1, 935159765))
			{
				func_71(131072);
				_0x735662994e60a710(*iParam1, 1);
				_0x897934e868eddd6c(*iParam1, 55120, 0.2f, 0f, 0f);
				_0x91bab9e064f036cd(*iParam1, 0.5f);
				func_337(iParam1);
				func_639(*iParam1, "SCREAM_TERROR", 1017772929, 0, 1, 0, 0, 1);
				force_sonar_blips_this_frame();
				_trigger_sonar_blip_2(-890428877, *iParam1);
			}
			if (!func_19(512) && has_anim_event_fired(*iParam1, 442538763))
			{
				func_355(*iParam1, uLocal_2092[0], -89429847, 580546400, 0, "LOG_BLIP_VICT");
				_0x735662994e60a710(*iParam1, 1);
				_set_ped_wound_effect(*iParam1, 0, 7.723957E-41f, 0.2f, 0f, 0f, 0f, 0f, -1f, 0.5f);
				_remove_ped_wound_effect(*iParam1, 0.5f);
				func_14(512);
				_0xae6004120c18df97(*iParam1, 0, 0);
				set_ragdoll_blocking_flags(*iParam1, 319570);
				freeze_entity_position(*iParam1, true);
				_set_ped_body_component(*iParam1, 306062959);
				_update_ped_variation(*iParam1, false, true, true, true, false);
				func_387(&(Local_1617.f_35), "LCMP_IG_TFHEL", *iParam0, *iParam1, 0, 0, 1, 1);
				force_sonar_blips_this_frame();
				_trigger_sonar_blip_2(-890428877, *iParam1);
				func_639(*iParam1, "SCREAM_TERROR", 1017772929, 0, 1, 0, 0, 1);
			}
			if (has_anim_event_fired(*iParam0, 265434504))
			{
				apply_damage_to_ped(*iParam1, 50, 0, 55120, 0);
			}
			if (has_anim_event_fired(*iParam0, 1836246720))
			{
				func_111(&(iLocal_75[20]));
				iLocal_75[6] = _create_volume_box_with_custom_name(-1391.421f, -270.6241f, 99.11503f, 0f, 0f, -4.797453f, 21.93634f, 0.903251f, 1.400946f, "Appleseed - volTreeNav");
				_0x19c7567d2f2287d6(&(iLocal_75[6]), 7);
				func_98(uLocal_2092[0]);
				func_48(vLocal_570[3]);
				iLocal_1920 = 5;
			}
			break;
		case 5:
			func_734(1048576000, 1028443341, 0, 106);
			func_129();
			if (func_738(20))
			{
				set_ped_reset_flag(Global_35, 318, true);
			}
			if (func_714(Local_492[2], "bBreakInternalLoop"))
			{
				func_715(Local_492[2], "bBreakInternalLoop");
			}
			func_739(&(Local_1617.f_32), &(Local_1617.f_33));
			if (func_741(&(Local_1617.f_32), "LOG_CTXTHLP", func_740(), 0, -719620017, 1.5f, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, -820096546, 0))
			{
				display_radar(false);
				bVar6 = true;
				func_268(vLocal_570[3]);
			}
			else if (func_741(&(Local_1617.f_33), "LOG_CTXTHLP", func_742(), 0, -719620017, 1.5f, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, -820096546, 0))
			{
				func_71(256);
				display_radar(false);
				bVar6 = true;
				func_268(vLocal_570[3]);
			}
			if (func_224(vLocal_570[3], 7.5f))
			{
				iLocal_1920 = 6;
				func_48(vLocal_570[1]);
				func_743();
			}
			if (func_224(vLocal_570[1], 7.5f))
			{
				iLocal_1920 = 9;
			}
			if (bVar6)
			{
				if (Global_36.f_1 > func_744())
				{
					func_71(256);
				}
				func_311(&(Local_1617.f_32), 1, 1);
				func_311(&(Local_1617.f_33), 1, 1);
				func_98(&iLocal_2016);
				func_48(vLocal_570[3]);
				func_268(vLocal_570[1]);
				func_10(Local_1617.f_136, 128);
				set_player_control(player_id(), false, 4352, false);
				func_43(&Local_1617, 65536);
				_0x2c87c3e1c7b96ee2(&(iLocal_75[4]));
				func_58(16384);
				func_745(&Local_156);
				Local_156.f_1 = Global_35;
				if (func_70(256))
				{
					Local_156.f_8 = { func_746(Local_492[4], "ARTHUR", func_482(4)) };
					Local_156.f_19 = func_747(Local_492[4], "ARTHUR", func_482(4));
				}
				else
				{
					Local_156.f_8 = { func_746(Local_492[3], "ARTHUR", func_482(3)) };
					Local_156.f_19 = func_747(Local_492[3], "ARTHUR", func_482(3));
				}
				Local_156.f_17 = 0.15f;
				Local_156.f_18 = 0.2f;
				func_145(&(Local_156.f_23), 17425);
				func_43(&Local_1617, 65536);
				func_748(&Local_156, 129);
				func_302(&Local_433, 4);
				iLocal_1920 = 7;
			}
			break;
		case 6:
			func_734(1048576000, 1028443341, 0, 106);
			if (func_738(20))
			{
				set_ped_reset_flag(Global_35, 318, true);
			}
			func_642(Local_492[2], "PBL_IMPATIENT", 1);
			func_643(Local_492[2], "bBreakInternalLoop");
			func_387(&(Local_1617.f_35), "LCMP_IG_TFSOM", *iParam0, Global_35, 0, 0, 1, 1);
			iLocal_1920 = 5;
			break;
		case 7:
			func_734(1048576000, 1028443341, 0, 106);
			if (func_738(20))
			{
				set_ped_reset_flag(Global_35, 318, true);
			}
			if (func_748(&Local_156, 129))
			{
				if (func_70(256))
				{
					func_684(Local_492[4], Global_35, "ARTHUR", 1);
					func_686(Local_492[4]);
					_0x19c7567d2f2287d6(&(iLocal_75[4]), 7);
					iLocal_1920 = 8;
				}
				else
				{
					func_684(Local_492[3], Global_35, "ARTHUR", 1);
					func_686(Local_492[3]);
					_0x19c7567d2f2287d6(&(iLocal_75[4]), 7);
					iLocal_1920 = 8;
				}
			}
			break;
		case 8:
			func_734(1048576000, 1028443341, 0, 106);
			if (func_738(20))
			{
				set_ped_reset_flag(Global_35, 318, true);
			}
			if (func_369(Local_492[2], "LIFT_LOOP") && has_anim_event_fired(Global_35, 331855897))
			{
				if (!func_310(Local_1617.f_32))
				{
					Local_1617.f_32 = func_749("LOG_CTXTHLP", -1300031296, 1, 0, 0, 9, 570, 4000, 10, 1073741824, 1704213876, 0);
					func_750("LOG_HELP_MASH", 10000, 0, 0, 0, 1);
					func_10(Local_1617.f_136, 64);
					func_204(Local_1617.f_136);
					func_128(16);
					func_48(vLocal_570[3]);
				}
				if (func_751(Local_1617.f_32, 1))
				{
					func_752(Local_1617.f_32, 1);
				}
				if (is_control_just_pressed(0, -1300031296) || is_disabled_control_just_pressed(0, -1300031296))
				{
					set_pad_shake(0, 250, 50);
				}
				if (func_753(Local_1617.f_32, 1) || func_393(vLocal_570[3], 15f))
				{
					func_268(vLocal_570[3]);
					func_754(1);
					func_565(13, 0, 0, 0, *iParam0, 0, 1065353216, 0);
					func_311(&(Local_1617.f_32), 1, 1);
					func_50(16384);
					Local_433.f_3 = 3;
					iLocal_1920 = 9;
				}
			}
			break;
		case 9:
			func_311(&(Local_1617.f_32), 1, 1);
			func_311(&(Local_1617.f_33), 1, 1);
			func_98(&iLocal_2016);
			func_743();
			if (func_738(20))
			{
				set_ped_reset_flag(Global_35, 318, true);
			}
			if (func_334(Local_492[3]))
			{
				func_643(Local_492[3], "bBreakInternalLoop");
				set_player_control(player_id(), true, 0, false);
				func_82(&Local_1617, 65536);
			}
			if (func_334(Local_492[4]))
			{
				func_643(Local_492[4], "bBreakInternalLoop");
				set_player_control(player_id(), true, 0, false);
				func_82(&Local_1617, 65536);
			}
			if (func_334(Local_492[2]))
			{
				func_642(Local_492[2], "PBL_LIFT_SUCCESS", 1);
				func_643(Local_492[2], "bBreakInternalLoop");
				func_387(&(Local_1617.f_35), "LCMP_IG_TFHLS", *iParam0, *iParam1, 0, 0, 1, 1);
				_0xae6004120c18df97(*iParam1, 0, 1);
				_play_sound_from_position("LOG_LIFT", get_entity_coords(Local_614.f_690[24]->f_8, true, false), "APPLESEED_SOUNDSET", false, 0, true, 0);
				func_339(131072);
			}
			func_128(512);
			if (!_does_volume_exist(&(iLocal_75[20])))
			{
				iLocal_75[20] = _0x0eb78c2b156635b1(665633627, -1391.903f, -269.6049f, 99.57925f, 0f, 0f, 0f, 0.702347f, 0.731577f, 1.200654f);
			}
			iLocal_1920 = 11;
			break;
		case 10:
			if (func_738(20))
			{
				set_ped_reset_flag(Global_35, 318, true);
			}
			func_336(Local_492[2], *iParam1, "Victim");
			task_use_random_scenario_in_group(*iParam1, func_273(), 0, 0, 0);
			func_217(Local_492[2]);
			delete_object(&(Local_614.f_690[7]->f_8));
			delete_object(&(Local_614.f_690[8]->f_8));
			delete_object(&(Local_614.f_690[9]->f_8));
			delete_object(&(Local_614.f_690[10]->f_8));
			delete_object(&(Local_614.f_690[24]->f_8));
			iLocal_1920 = 11;
			break;
		case 11:
			if (has_anim_event_fired(Global_35, 886554851))
			{
				set_pad_shake(0, 250, 100);
			}
			func_108(1);
			if (((func_70(1) && func_70(2)) && func_70(4)) && func_70(8))
			{
				iLocal_1920 = 14;
			}
			if (!get_is_task_active(Global_35, 3))
			{
				display_radar(true);
			}
			if (does_entity_exist(Local_614.f_690[24]->f_8))
			{
				if (has_anim_event_fired(Local_614.f_690[24]->f_8, -1545720465))
				{
					_play_sound_from_position("LOG_PUT_DOWN", get_entity_coords(Local_614.f_690[24]->f_8, true, false), "APPLESEED_SOUNDSET", false, 0, true, 0);
					func_216("SP_EVENT_AREA_APPLESEED_2_IDLE", 0);
				}
				if (has_anim_event_fired(Local_614.f_690[24]->f_8, 745376786))
				{
					set_can_climb_on_entity(Local_614.f_690[24]->f_8, true);
					freeze_entity_position(Local_614.f_690[24]->f_8, true);
					func_336(Local_492[2], Local_614.f_690[24]->f_8, "TREE");
				}
			}
			if (!func_70(1))
			{
				if (func_688(*iParam0, &(Local_492[2]), "FOREMAN", -1795669989, 0, 1, 0))
				{
					if (!is_entity_dead(*iParam0))
					{
						func_336(Local_492[2], *iParam0, "FOREMAN");
						func_727(*iParam0, 0);
					}
					func_128(4096);
					func_71(1);
					if (!func_51(2097152))
					{
						iLocal_1920 = 12;
					}
				}
			}
			if (!func_70(2))
			{
				if (func_688(iVar2, &(Local_492[2]), "PED1", -1795669989, 0, 1, 0))
				{
					if (!is_entity_dead(iVar2))
					{
						func_336(Local_492[2], iVar2, "PED1");
						func_727(iVar2, 0);
						func_77(iVar1, 1);
					}
					func_71(2);
				}
			}
			if (!func_70(4))
			{
				if (func_688(&(uLocal_2082[2]), &(Local_492[2]), "PED2", -1795669989, 0, 1, 0))
				{
					if (!is_entity_dead(&(uLocal_2082[2])))
					{
						func_336(Local_492[2], &(uLocal_2082[2]), "PED2");
						func_727(&(uLocal_2082[2]), 1);
						task_use_random_scenario_in_group(&(uLocal_2082[2]), func_273(), 0, 0, 0);
					}
					func_71(4);
				}
			}
			if (!func_70(8))
			{
				if (func_688(&(uLocal_2082[3]), &(Local_492[2]), "PED3", -1795669989, 0, 1, 0))
				{
					if (!is_entity_dead(&(uLocal_2082[3])))
					{
						func_336(Local_492[2], &(uLocal_2082[3]), "PED3");
						func_727(&(uLocal_2082[3]), 1);
						task_use_random_scenario_in_group(&(uLocal_2082[3]), func_273(), 0, 0, 0);
					}
					func_71(8);
				}
			}
			break;
		case 12:
			func_14(2);
			if (!is_entity_dead(*iParam0) && func_366(*iParam0, Global_35, 0, 1) < 40f)
			{
				task_turn_ped_to_face_entity(*iParam0, Global_35, -1, -1082130432, -1082130432, -1082130432);
				if (func_9(Local_1617.f_136, 64))
				{
					cVar7 = "LOG_ACCPH";
				}
				else
				{
					cVar7 = "LOG_ACCPN";
				}
				func_387(&(Local_1617.f_35), cVar7, *iParam0, Global_35, 0, 0, 1, 1);
			}
			iLocal_1920 = 11;
			break;
		case 14:
			if (func_256(-3.5f, 1, 0, 0))
			{
				func_128(32);
				func_128(2);
				if (func_266(Local_1617.f_138, 0))
				{
					func_77(Local_1617.f_138, 1);
					func_78(Local_211[0], 0);
				}
				func_35(256);
				func_48(vLocal_570[0]);
				iVar8 = 0;
				while (iVar8 < iVar2142)
				{
					func_755(&iVar8);
					iLocal_2130[iVar8] = -1;
					iVar8++;
				}
				iLocal_2146 = 0;
				func_112();
				func_339(67108864);
				iLocal_1920 = 13;
			}
			break;
		case 13:
			func_245(iVar2, 1, 1);
			func_676(&iVar2, Local_211[1], Local_275[1], 0, 1);
			func_245(&(uLocal_2082[2]), 1, 1);
			func_676(uLocal_2082[2], Local_211[1], Local_275[1], 0, 1);
			func_245(&(uLocal_2082[3]), 1, 1);
			func_676(uLocal_2082[3], Local_211[1], Local_275[1], 0, 1);
			func_756(0, 0, 1);
			func_403(0, 1, 0);
			if (func_51(2097152))
			{
				func_128(64);
			}
			else
			{
				return true;
			}
			break;
	}
	return false;
}

void func_417(int iParam0)
{
	if (func_215(*iParam0, &(iLocal_75[0]), 1, 0) && iVar1919 < 5)
	{
		iLocal_1922 = 5;
	}
	switch (iVar1919)
	{
		case 0:
			func_402(0);
			func_757(1, 0);
			func_403(0, 1, 0);
			func_758(0, 0);
			iLocal_1922 = 2;
			break;
		case 2:
			switch (iVar429)
			{
				case 1:
					func_387(&(Local_1617.f_35), "LCMP_IG_TFPLNF", Global_35, *iParam0, 0, 0, 1, 1);
					func_403(0, 1, 0);
					iLocal_1922 = 5;
					break;
			}
			break;
		case 5:
			break;
	}
}

void func_418(int* iParam0)
{
	if (func_70(65536) && iVar1918 < 5)
	{
		func_403(1, 0, 0);
		func_756(1, 0, 1);
		iLocal_1921 = 5;
	}
	if (iVar1918 >= 2)
	{
		iVar1 = 1;
		iVar0 = func_659(iParam0, Local_211[1], 8f, Local_275[1], &iVar1, 0, 1, 0, 0, func_658(1, 0, 0) | 2048, 0, 0, 2, 1, -1082130432, 0);
	}
	switch (iVar1918)
	{
		case 0:
			func_402(1);
			func_403(1, 0, 0);
			func_728(Local_492[2], "PB_VIC_BRKOUT");
			func_728(Local_492[2], "PB_HANDOVER_R");
			func_728(Local_492[2], "PB_HANDOVER_L");
			func_728(Local_492[2], "PB_HANDOVER_N");
			if (!_does_volume_exist(&(iLocal_75[20])))
			{
				iLocal_75[20] = _0x0eb78c2b156635b1(665633627, -1391.903f, -269.6049f, 99.57925f, 0f, 0f, 0f, 0.702347f, 0.731577f, 1.200654f);
			}
			func_48(vLocal_570[1]);
			if (!_does_volume_exist(&(iLocal_75[19])))
			{
				iLocal_75[19] = _create_volume_box_with_custom_name(-1391.695f, -268.6573f, 99.66403f, 0f, 0f, -3.999926f, 4.302533f, 3.265524f, 2.894566f, "EA LCMP - volGiveMoney");
			}
			iLocal_1921 = 1;
			break;
		case 1:
			if ((func_256(0, 1, 0, 0) && func_393(vLocal_570[1], 1.5f)) && func_282(*iParam0, 1, 1) < 10f)
			{
				func_759(iParam0, 0, 0, 1, 0, 0, 0, 1);
				func_734(1048576000, 1028443341, 0, 106);
				if (func_9(Local_1617.f_136, 128))
				{
					func_387(&(Local_1617.f_35), "LCMPF_IG_TFRSH", *iParam0, Global_35, 0, 0, 1, 1);
				}
				else
				{
					func_387(&(Local_1617.f_35), "LCMPF_IG_TFRSN", *iParam0, Global_35, 0, 0, 1, 1);
				}
				set_ped_config_flag(*iParam0, 277, false);
				iLocal_1921 = 2;
			}
			break;
		case 2:
			if (func_282(*iParam0, 1, 1) < 20f)
			{
				func_734(1048576000, 1028443341, 0, 106);
			}
			if (is_any_speech_playing(*iParam0))
			{
				func_759(iParam0, 0, 0, 1, 0, 0, 0, 1);
			}
			func_760(iParam0);
			switch (iVar0)
			{
				case 0:
					func_403(1, 0, 0);
					if (does_entity_exist(Local_614.f_690[6]->f_8))
					{
						set_entity_coords(Local_614.f_690[6]->f_8, func_489(), true, false, true, true);
					}
					func_745(&Local_2216);
					Local_2216.f_1 = Global_35;
					func_761(&(Local_2216.f_8), &(Local_156.f_19), iParam0);
					Local_2216.f_18 = 0.2f;
					Local_2216.f_17 = 0.15f;
					Local_2216.f_21 = 1f;
					func_145(&(Local_2216.f_23), 17920);
					StringCopy(&(Local_492[2]->f_4), "RECOVERY_BOOL", 24);
					func_43(&Local_1617, 65536);
					func_748(&Local_2216, 106);
					iLocal_1921 = 3;
					break;
				case 1:
					func_387(&(Local_1617.f_35), "LCMPF_IG_TFPLRN", Global_35, *iParam0, 0, 0, 1, 1);
					func_403(1, 0, 0);
					func_762(1, 0, 0);
					iLocal_1921 = 6;
					break;
			}
			break;
		case 3:
			if (func_748(&Local_2216, 106) && func_763(Local_492[2]))
			{
				set_player_control(get_player_index(), true, 0, false);
				func_82(&Local_1617, 65536);
				func_764(Local_492[2], 1, 1);
				func_387(&(Local_1617.f_35), "LCMPF_IG_TFPLRP", Global_35, *iParam0, 0, 0, 1, 1);
				iLocal_1921 = 4;
			}
			break;
		case 4:
			if (has_anim_event_fired(Global_35, -1898385492))
			{
				func_765(Local_492[2]);
				func_766(500, 0, 0, 1, 1);
				func_565(13, 0, 0, 0, 0, 0, 1065353216, 0);
				func_767(*iParam0, 500);
				if (does_entity_exist(Local_614.f_690[6]->f_8))
				{
					set_entity_coords(Local_614.f_690[6]->f_8, func_488(), true, false, true, true);
				}
				func_728(Local_492[2], "PB_VIC_BRKOUT");
				iLocal_1921 = 5;
			}
			break;
		case 5:
			if ((!func_70(524288) && iVar2246 < 2) && func_256(-3.5f, 1, 0, 0))
			{
				func_756(1, 0, 1);
			}
			switch (iVar0)
			{
				case 0:
					func_387(&(Local_1617.f_35), func_768(iVar0), Global_35, *iParam0, 0, 0, 1, 1);
					func_403(1, 0, 0);
					uLocal_2249 = iVar2246 + 1;
					break;
				case 1:
					func_387(&(Local_1617.f_35), func_768(iVar0), Global_35, *iParam0, 0, 0, 1, 1);
					func_403(1, 0, 0);
					func_762(1, 0, 0);
					uLocal_2249 = iVar2246 + 1;
					iLocal_1921 = 6;
					break;
			}
			break;
		case 6:
			if ((!func_70(524288) && iVar2246 < 2) && func_256(-3.5f, 1, 0, 0))
			{
				func_756(1, 0, 1);
				func_762(1, 0, 0);
			}
			switch (iVar0)
			{
				case 1:
					func_387(&(Local_1617.f_35), func_768(iVar0), Global_35, *iParam0, 0, 0, 1, 1);
					func_403(1, 0, 0);
					func_762(1, 0, 0);
					uLocal_2249 = iVar2246 + 1;
					break;
			}
			break;
	}
}

int func_419(int iParam0)
{
	switch (iVar593)
	{
		case 0:
			if (!func_266(Local_1617.f_138, 0))
			{
				func_62(Local_1617.f_138, 1, 1);
			}
			func_98(uLocal_2102[0]);
			func_684(Local_492[0], *iParam0, "FOREMAN", 1);
			func_685(Local_492[0], Local_614.f_690[3]->f_8, "PEN");
			func_685(Local_492[0], Local_614.f_690[4]->f_8, "BOOK");
			func_728(Local_492[0], "PBL_FOREMAN_STAGE2_COMBAT");
			func_641(Local_492[0], &vVar0, &vVar3);
			func_685(Local_492[0], Local_614.f_690[25]->f_8, "p_chair04x");
			if (func_19(64) || func_51(2097152))
			{
				play_entity_anim(Local_614.f_690[4]->f_8, func_730(), func_731(), 0.3f, true, true, false, 0f, 0);
				func_745(&Local_156);
				Local_156.f_1 = *iParam0;
				Local_156.f_8 = { func_769() };
				Local_156.f_21 = 1f;
				Local_156.f_18 = 2f;
				func_145(&(Local_156.f_23), 128);
				func_748(&Local_156, 129);
				iLocal_596 = 1;
			}
			else
			{
				func_403(0, 1, 1);
				func_686(Local_492[0]);
				iLocal_596 = 4;
			}
			break;
		case 1:
			if (!func_266(Local_1617.f_138, 0))
			{
				func_62(Local_1617.f_138, 1, 1);
			}
			set_force_object_this_frame(func_770(), 5f);
			if (func_748(&Local_156, 129))
			{
				func_745(&Local_156);
				Local_156.f_1 = *iParam0;
				Local_156.f_8 = { func_746(Local_492[0], "FOREMAN", "PB_L_ENTER") };
				Local_156.f_21 = 1f;
				Local_156.f_18 = 0.25f;
				Local_156.f_17 = 0.2f;
				func_145(&(Local_156.f_23), 1152);
				func_748(&Local_156, 129);
				iLocal_596 = 2;
			}
			break;
		case 2:
			set_force_object_this_frame(func_770(), 5f);
			if (func_748(&Local_156, 129))
			{
				iLocal_596 = 3;
			}
			break;
		case 3:
			func_14(1);
			func_686(Local_492[0]);
			iLocal_596 = 4;
			break;
		case 4:
			if (func_19(33554432))
			{
				func_71(67108864);
				if (func_19(2))
				{
					iLocal_596 = 6;
				}
				else
				{
					iLocal_596 = 7;
				}
			}
			break;
		case 6:
			if (!func_771(-1f))
			{
				func_772("LOG_OBJ01", 1);
				func_355(*iParam0, uLocal_2102[0], -89429847, 580546400, 0, func_413());
				iLocal_596 = 7;
			}
			break;
		case 7:
			if (func_773(iParam0, 0, 0))
			{
				func_734(1048576000, 1028443341, 0, 106);
				func_203();
				func_759(iParam0, 0, 0, 1, 0, 0, 0, 0);
				func_14(4096);
				func_643(Local_492[0], "bBreakInternalLoop");
				func_336(Local_492[0], Local_614.f_690[4]->f_8, "BOOK");
				play_entity_anim(Local_614.f_690[4]->f_8, func_730(), func_731(), 0.3f, true, true, false, 0f, 0);
				if (func_19(64))
				{
					if (func_9(Local_1617.f_136, 64))
					{
						func_387(&(Local_1617.f_35), "LCMP_IG_ACK_ACP", *iParam0, Global_35, 0, 0, 1, 1);
					}
					else
					{
						func_387(&(Local_1617.f_35), "LCMP_IG_ACK_ACN", *iParam0, Global_35, 0, 0, 1, 1);
					}
				}
				else if (func_9(Local_1617.f_136, 2))
				{
					func_387(&(Local_1617.f_35), "LCMP_IG_ACK_2", *iParam0, Global_35, 0, 0, 1, 1);
				}
				else
				{
					func_387(&(Local_1617.f_35), "LCMP_IG_S2ACK", *iParam0, Global_35, 0, 0, 1, 1);
					func_10(Local_1617.f_136, 2);
				}
				func_71(65536);
				iLocal_596 = 8;
			}
			break;
		case 8:
			func_734(1048576000, 1028443341, 0, 106);
			if (!func_266(Local_1617.f_138, 0))
			{
				func_62(Local_1617.f_138, 1, 1);
			}
			func_759(iParam0, 0, 0, 1, 0, 0, 0, 0);
			if (func_688(*iParam0, &(Local_492[0]), "FOREMAN", 0, 0, 1, 0) && func_256(-3.5f, 1, 0, 0))
			{
				task_play_upper_anim_facing_entity(*iParam0, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2", "BACK_FOR_MORE", Global_35, -1, 2f, -2f, 2113536, 0f, false, false, -1f, 0, 524297, -1f);
				func_387(&(Local_1617.f_35), "LCMP_IG_S2BFM", *iParam0, Global_35, 0, 0, 1, 1);
				func_48(vLocal_570[3]);
				func_403(0, 1, 0);
				func_757(1, 0);
				iLocal_596 = 9;
			}
			if (!func_773(iParam0, 0, 0))
			{
				func_403(0, 1, 0);
				func_757(0, 0);
				func_756(0, 0, 1);
				iLocal_596 = 13;
			}
			break;
		case 9:
			func_734(1048576000, 1028443341, 0, 106);
			if (!func_266(Local_1617.f_138, 0))
			{
				func_62(Local_1617.f_138, 1, 1);
			}
			if (!get_is_task_active(*iParam0, 3))
			{
				task_turn_ped_to_face_entity(*iParam0, Global_35, -1, -1082130432, -1082130432, -1082130432);
			}
			if (func_668(vLocal_570[3]) && func_774(vLocal_570[3]) > 30000)
			{
				iLocal_596 = 10;
			}
			func_759(iParam0, 0, 0, 1, 0, 0, 0, 1);
			if (func_256(0, 1, 0, 0))
			{
				if (!func_51(268435456))
				{
					func_757(1, 1);
					func_403(0, 1, 0);
					func_775(0);
					func_58(268435456);
				}
				switch (iVar429)
				{
					case 0:
						func_403(0, 1, 0);
						func_757(0, 0);
						func_756(0, 0, 1);
						func_14(2048);
						func_10(Local_1617.f_136, 16384);
						func_776(&Local_1617);
						func_745(&Local_156);
						Local_156.f_8 = { -1400.12f, -207.92f, 101.88f };
						Local_156.f_14 = { func_777() };
						Local_156.f_1 = Global_35;
						Local_156.f_17 = 0.2f;
						Local_156.f_18 = 0.2f;
						Local_156.f_19 = 20.6f;
						Local_156.f_25 = &Local_492[5];
						StringCopy(&(Local_156.f_30), "ARTHUR", 24);
						StringCopy(&(Local_156.f_26), func_482(5), 32);
						func_145(&(Local_156.f_23), 26624);
						func_43(&Local_1617, 65536);
						func_748(&Local_156, 129);
						iLocal_596 = 11;
						break;
					case 1:
						func_403(0, 1, 1);
						func_757(0, 0);
						func_128(2048);
						iLocal_596 = 13;
						break;
				}
			}
			if (!func_773(iParam0, 0, 0))
			{
				func_403(0, 1, 0);
				func_757(0, 0);
				func_756(0, 0, 1);
				func_128(2048);
				iLocal_596 = 13;
			}
			break;
		case 10:
			func_734(1048576000, 1028443341, 0, 106);
			func_759(iParam0, 0, 0, 1, 0, 0, 0, 1);
			func_268(vLocal_570[3]);
			task_play_upper_anim_facing_entity(*iParam0, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2", "WHAT_DO_U_SAY", Global_35, -1, 2f, -2f, 0, 0f, false, false, -1f, 0, 0, -1f);
			func_387(&(Local_1617.f_35), "LCMP_IG_S2WS", *iParam0, Global_35, 0, 0, 1, 1);
			iLocal_596 = 9;
			break;
		case 11:
			if (func_748(&Local_156, 129))
			{
				func_387(&(Local_1617.f_35), "LCMP_IG_S2AL", Global_35, *iParam0, 0, 0, 1, 1);
				func_684(Local_492[5], Global_35, "ARTHUR", 1);
				func_685(Local_492[5], Local_614.f_690[6]->f_8, "MONEY");
				func_686(Local_492[5]);
				iLocal_596 = 12;
			}
			break;
		case 12:
			func_734(1048576000, 1028443341, 0, 106);
			if (!func_266(Local_1617.f_138, 0))
			{
				func_62(Local_1617.f_138, 1, 1);
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
					func_98(uLocal_2102[0]);
					func_387(&(Local_1617.f_35), "LCMP_IG_S2VG", *iParam0, Global_35, 0, 0, 1, 1);
					task_play_upper_anim_facing_entity(*iParam0, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2", "VERY_GOOD", Global_35, -1, 2f, -2f, 0, 0f, false, false, -1f, 0, 0, -1f);
					func_355(&(iLocal_2105[0]), uLocal_2102[1], -325639900, 580546400, 0, "LOG_BLIP_WAG");
					if (func_9(1, 2))
					{
						func_43(&Local_1617, 128);
					}
					iLocal_596 = 15;
				}
			}
			break;
		case 13:
			if (!func_266(Local_1617.f_138, 0))
			{
				func_62(Local_1617.f_138, 1, 1);
			}
			func_759(iParam0, 0, 0, 1, 0, 0, 0, 1);
			if (func_256(-3.5f, 1, *iParam0, 1))
			{
				func_98(uLocal_2102[0]);
				if (func_215(Global_35, &(iLocal_75[0]), 1, 0))
				{
					if (func_358(Global_35, 0, 1, 0) == -1569615261 && func_358(Global_35, 1, 1, 0) == -1569615261)
					{
						task_play_anim(Global_35, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2", "MAYBE_SOME_OTHER_TIME_PLAYER", 8f, -8f, -1, 67108880, 0f, false, 0, false, 0, false);
					}
					func_387(&(Local_1617.f_35), "LCMP_IG_S2OT", Global_35, *iParam0, 0, 0, 1, 1);
				}
				iLocal_596 = 14;
			}
			break;
		case 14:
			if (!func_266(Local_1617.f_138, 0))
			{
				func_62(Local_1617.f_138, 1, 1);
			}
			func_759(iParam0, 0, 0, 1, 0, 0, 0, 1);
			if (!func_389("LCMP_IG_S2OT"))
			{
				func_387(&(Local_1617.f_35), "LCMP_IG_S2MNT", *iParam0, Global_35, 0, 0, 1, 1);
				task_play_upper_anim_facing_entity(*iParam0, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2", "MAYBE_NEXT_TIME", Global_35, -1, 2f, -2f, 0, 0f, false, false, -1f, 0, 0, -1f);
				iLocal_596 = 15;
			}
			break;
		case 15:
			if (!func_266(Local_1617.f_138, 0))
			{
				func_62(Local_1617.f_138, 1, 1);
			}
			bVar6 = true;
			if (func_19(2048) && !func_368(Local_492[5]))
			{
				bVar6 = false;
			}
			if (bVar6)
			{
				if (!is_player_control_on(get_player_index()))
				{
					set_player_control(get_player_index(), true, 0, false);
					func_82(&Local_1617, 65536);
				}
				func_759(iParam0, 0, 0, 1, 0, 0, 0, 1);
				if (!get_is_task_active(*iParam0, 3) && func_256(-3.5f, 1, *iParam0, 1))
				{
					func_128(4096);
					_0x74c2b3dc0b294102(&(iLocal_75[0]));
					_0xa1cfb35069d23c23(&(iLocal_75[0]));
					func_403(0, 1, 0);
					func_128(4096);
					_task_use_nearest_scenario_to_coord(*iParam0, -1400.86f, -205.41f, 102.34f, 2f, -1, false, false, false, false);
					func_779(iParam0);
					func_339(67108864);
					iLocal_596 = 17;
				}
			}
			break;
		case 17:
			if (func_266(Local_1617.f_138, 0))
			{
				if (func_780(Local_1617.f_138, &Local_1617, 60000, 1))
				{
					func_78(Local_211[0], 0);
				}
			}
			break;
	}
	return 0;
}

int func_420(int iParam0)
{
	if (func_134(&Local_433, 1) && iVar430 == *iParam0)
	{
		if (iVar593 < 17)
		{
			func_781();
			iLocal_596 = 17;
		}
	}
	func_722();
	switch (iVar593)
	{
		case 0:
			if (!func_266(Local_1617.f_138, 0))
			{
				func_62(Local_1617.f_138, 1, 1);
			}
			if (func_9(Local_1617.f_136, 131072))
			{
				iVar0 = iVar594;
				iLocal_597 = iVar0 + 1;
				func_15(Local_1617.f_136, 131072);
			}
			else
			{
				func_10(Local_1617.f_136, 131072);
			}
			if (func_9(Local_1617.f_136, 16384))
			{
				func_355(&(iLocal_2105[0]), uLocal_2102[1], -325639900, 580546400, 0, "LOG_BLIP_WAG");
			}
			if (func_333())
			{
				_request_scenario_type(func_782(), 262209, func_783(), func_784());
				iLocal_484 = _find_closest_active_scenario_point_of_type(func_785(), func_782(), 1f, 0, false);
			}
			else
			{
				_request_scenario_type(func_786(), 262209, func_783(), func_787());
				iLocal_484 = _find_closest_active_scenario_point_of_type(func_788(), func_786(), 1f, 0, false);
			}
			if (func_19(64) || func_51(2097152))
			{
				func_745(&Local_156);
				Local_156.f_8 = { func_769() };
				Local_156.f_1 = *iParam0;
				Local_156.f_21 = 1f;
				func_145(&(Local_156.f_23), 128);
				func_748(&Local_156, 129);
				iLocal_596 = 1;
			}
			else
			{
				func_402(0);
				func_403(0, 1, 1);
				clear_ped_tasks_immediately(*iParam0, false, true);
				if (_does_scenario_point_exist(iVar481))
				{
					_task_use_scenario_point(*iParam0, iVar481, func_791(func_333(), func_789(), func_790()), -1, false, true, 0, false, -1f, false);
				}
				else
				{
					task_use_nearest_scenario_to_coord_warp(*iParam0, func_792(func_333(), func_785(), func_788()), 1.5f, -1, false, false, false, false);
				}
				iLocal_596 = 4;
			}
			break;
		case 1:
			if (!func_266(Local_1617.f_138, 0))
			{
				func_62(Local_1617.f_138, 1, 1);
			}
			if (func_748(&Local_156, 129))
			{
				func_402(0);
				func_403(0, 1, 1);
				func_14(1);
				if (_does_scenario_point_exist(iVar481))
				{
					_task_use_scenario_point(*iParam0, iVar481, func_791(func_333(), func_789(), func_790()), -1, true, false, 0, false, -1f, false);
				}
				else
				{
					_task_use_nearest_scenario_to_coord(*iParam0, func_792(func_333(), func_785(), func_788()), 1.5f, -1, false, false, false, false);
				}
				iLocal_596 = 4;
			}
			break;
		case 4:
			if (func_19(33554432))
			{
				iVar1 = func_4(1);
				if (iVar1 > 3 || (iVar1 == 3 && func_5(1, 128)))
				{
					func_42(Local_1617.f_136, 4096);
				}
				func_403(0, 1, 1);
				func_757(1, 0);
				if (func_19(2))
				{
					iLocal_596 = 6;
				}
				else
				{
					iLocal_596 = 7;
				}
			}
			break;
		case 6:
			if (!func_771(-1f))
			{
				func_98(uLocal_2102[0]);
				iLocal_596 = 7;
			}
			break;
		case 7:
			if (!func_266(Local_1617.f_138, 0))
			{
				func_62(Local_1617.f_138, 1, 1);
			}
			if (func_773(iParam0, 0, func_333()) && func_795(iParam0, func_793(), 10f, 0, func_794(), 1, -1243035987))
			{
				func_734(1048576000, 1028443341, 0, 106);
				func_14(4096);
				func_759(iParam0, 0, 0, 1, 0, 0, 0, !func_333());
				switch (iVar594)
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
				func_387(&(Local_1617.f_35), &cVar2, *iParam0, Global_35, 0, 0, 1, 1);
				iLocal_596 = 8;
			}
			break;
		case 8:
			func_734(1048576000, 1028443341, 0, 106);
			func_759(iParam0, 0, 0, 1, 0, 0, 0, !func_333());
			if (func_333())
			{
				func_403(0, 1, 1);
				func_757(0, 0);
				iLocal_596 = 5;
			}
			else if ((!is_entity_dead(*iParam0) && func_256(-3.5f, 1, 0, 0)) && (has_anim_event_fired(*iParam0, -1376584066) || _0x02ebbb3989b7e695(*iParam0)))
			{
				clear_ped_tasks(*iParam0, 1, 0);
				task_turn_ped_to_face_entity(*iParam0, Global_35, 0, -1082130432, -1082130432, -1082130432);
				iLocal_596 = 2;
			}
			break;
		case 2:
			func_734(1048576000, 1028443341, 0, 106);
			if (!is_ped_using_any_scenario(*iParam0))
			{
				if (iVar594 == 2)
				{
					iVar5 = 8466;
				}
				else
				{
					iVar5 = -1;
				}
				switch (iVar594)
				{
					case 2:
						StringCopy(&cVar6, "LCMP_IG_NIACTB", 24);
						break;
					case 3:
						StringCopy(&cVar6, "LCMP_IG_NICL", 24);
						break;
				}
				func_387(&(Local_1617.f_35), &cVar6, *iParam0, Global_35, 0, 0, 1, 1);
				clear_ped_tasks(*iParam0, 1, 0);
				open_sequence_task(&iLocal_196);
				task_play_upper_anim_facing_entity(0, func_496(), func_796(0), Global_35, iVar5, 8f, -8f, 0, 0f, false, true, -1f, 0, 0, -1f);
				task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
				close_sequence_task(iLocal_196);
				task_perform_sequence(*iParam0, iLocal_196);
				clear_sequence_task(&iLocal_196);
				func_403(0, 1, 1);
				func_757(0, 0);
				iLocal_596 = 5;
			}
			break;
		case 5:
			func_734(1048576000, 1028443341, 0, 106);
			if (!func_266(Local_1617.f_138, 0))
			{
				func_62(Local_1617.f_138, 1, 1);
			}
			func_759(iParam0, 0, 0, 1, 0, 0, 0, !func_333());
			if (func_797(iParam0))
			{
				func_757(1, 0);
				func_403(0, 1, 1);
				func_756(0, 0, 1);
				func_48(vLocal_570[3]);
			}
			if (func_51(-2147483648))
			{
				switch (iVar429)
				{
					case 0:
						switch (iVar594)
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
						func_387(&(Local_1617.f_35), &cVar10, Global_35, *iParam0, 0, 0, 1, 1);
						func_403(0, 1, 0);
						bVar9 = true;
						break;
					case 1:
						switch (iVar594)
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
						func_387(&(Local_1617.f_35), &cVar10, Global_35, *iParam0, 0, 0, 1, 1);
						func_403(0, 1, 0);
						bVar9 = true;
						break;
				}
				if (!bVar9 && func_224(vLocal_570[3], 12.5f))
				{
					func_403(0, 1, 0);
					bVar9 = true;
				}
				if (bVar9)
				{
					func_757(0, 0);
					if (!func_333())
					{
						clear_ped_tasks(*iParam0, 1, 0);
						_0x9c8f42a5d1859dc1(&(iLocal_75[0]));
						_task_use_nearest_scenario_to_coord(*iParam0, get_entity_coords(*iParam0, true, false), 3f, -1, false, false, false, false);
					}
					func_128(4096);
					func_98(uLocal_2102[0]);
					func_48(vLocal_570[3]);
					iLocal_596 = 16;
				}
			}
			break;
		case 16:
			if (func_224(vLocal_570[3], 60f))
			{
				if (func_333())
				{
				}
				else
				{
					clear_ped_tasks(*iParam0, 1, 0);
				}
				_0x74c2b3dc0b294102(&(iLocal_75[0]));
				_0xa1cfb35069d23c23(&(iLocal_75[0]));
				func_403(0, 1, 0);
				func_756(0, 0, 1);
				func_779(iParam0);
				iLocal_596 = 17;
			}
			break;
		case 17:
			if (!(func_134(&Local_433, 1) && iVar430 == *iParam0))
			{
				if (func_266(Local_1617.f_138, 0))
				{
					func_77(Local_1617.f_138, 1);
					func_78(Local_211[0], 0);
				}
			}
			break;
	}
	return 0;
}

int func_421(int iParam0)
{
	func_722();
	switch (iVar593)
	{
		case 0:
			if (!func_266(Local_1617.f_138, 0))
			{
				func_62(Local_1617.f_138, 1, 1);
			}
			func_58(1073741824);
			if (!func_9(Local_1617.f_136, 131072))
			{
				func_10(Local_1617.f_136, 131072);
			}
			else
			{
				func_15(Local_1617.f_136, 131072);
			}
			if (func_333())
			{
				_request_scenario_type(func_782(), 262209, func_783(), func_784());
				iLocal_484 = _find_closest_active_scenario_point_of_type(func_785(), func_782(), 1f, 0, false);
			}
			else
			{
				_request_scenario_type(func_786(), 262209, func_783(), func_787());
				iLocal_484 = _find_closest_active_scenario_point_of_type(func_788(), func_786(), 1f, 0, false);
			}
			if (func_19(64) || func_51(2097152))
			{
				func_745(&Local_156);
				Local_156.f_8 = { -1402.34f, -207.62f, 101.88f };
				Local_156.f_1 = *iParam0;
				Local_156.f_21 = 1f;
				func_145(&(Local_156.f_23), 128);
				func_748(&Local_156, 129);
				iLocal_596 = 1;
			}
			else
			{
				clear_ped_tasks_immediately(*iParam0, false, true);
				if (_does_scenario_point_exist(iVar481))
				{
					_task_use_scenario_point(*iParam0, iVar481, func_791(func_333(), func_789(), func_790()), -1, false, true, 0, false, -1f, false);
				}
				else
				{
					task_use_nearest_scenario_to_coord_warp(*iParam0, func_792(func_333(), func_785(), func_788()), 1.5f, -1, false, false, false, false);
				}
				if (func_333())
				{
				}
				iLocal_596 = 4;
			}
			break;
		case 1:
			if (!func_266(Local_1617.f_138, 0))
			{
				func_62(Local_1617.f_138, 1, 1);
			}
			if (func_748(&Local_156, 129))
			{
				func_14(1);
				if (_does_scenario_point_exist(iVar481))
				{
					_task_use_scenario_point(*iParam0, iVar481, func_791(func_333(), func_789(), func_790()), -1, false, true, 0, false, -1f, false);
				}
				else
				{
					task_use_nearest_scenario_to_coord_warp(*iParam0, func_792(func_333(), func_785(), func_788()), 1.5f, -1, false, false, false, false);
				}
				iLocal_596 = 4;
			}
			break;
		case 4:
			if (func_19(33554432))
			{
				func_42(Local_1617.f_136, 4096);
				func_403(0, 1, 1);
				if (func_19(2))
				{
					iLocal_596 = 6;
				}
				else
				{
					iLocal_596 = 7;
				}
			}
			break;
		case 6:
			if (!func_771(-1f))
			{
				func_98(uLocal_2102[0]);
				iLocal_596 = 7;
			}
			break;
		case 7:
			if (!func_266(Local_1617.f_138, 0))
			{
				func_62(Local_1617.f_138, 1, 1);
			}
			if (func_773(iParam0, 1, func_333()))
			{
				if (func_795(iParam0, func_798(iParam0), 10f, 0, 0, 1, -1243035987))
				{
					clear_ped_tasks(*iParam0, 1, 0);
					func_14(4096);
					func_799(iParam0, 0, 0);
					func_10(Local_1617.f_136, 16777216);
					Local_104.f_40 = *iParam0;
					Local_104.f_43 = 4f;
					Local_104.f_41 = 4f;
					Local_104.f_39 = (*Global_1392194)[Local_1617.f_136]->f_6;
					if (func_333())
					{
						StringCopy(&cVar0, "LCMPF_IG1_ALT", 64);
					}
					else
					{
						StringCopy(&cVar0, "LCMPF_IG1", 64);
					}
					func_387(&(Local_1617.f_35), &cVar0, *iParam0, Global_35, 0, 0, 1, 1);
					iLocal_596 = 5;
				}
			}
			break;
		case 5:
			func_800(iParam0);
			func_759(iParam0, 0, 0, 1, 0, 0, 0, !func_333());
			if (func_797(iParam0))
			{
				func_403(0, 1, 1);
				func_758(0, 0);
				func_757(1, 0);
				func_48(vLocal_570[3]);
			}
			if (func_51(-2147483648))
			{
				switch (iVar429)
				{
					case 1:
						if (func_333())
						{
							StringCopy(&cVar9, "LCMP_ANGRRES2", 24);
						}
						else
						{
							StringCopy(&cVar9, "LCMP_ANGRRES1", 24);
						}
						func_387(&(Local_1617.f_35), &cVar9, Global_35, *iParam0, 0, 0, 1, 1);
						func_403(0, 1, 0);
						bVar8 = true;
						break;
				}
				if (!bVar8 && func_224(vLocal_570[3], 12.5f))
				{
					func_403(0, 1, 0);
					bVar8 = true;
				}
				if (bVar8)
				{
					func_757(0, 0);
					iLocal_596 = 8;
				}
			}
			break;
		case 8:
			func_800(iParam0);
			func_799(iParam0, 0, 0);
			if (func_256(-3.5f, 1, 0, 0))
			{
				if (func_333())
				{
					func_77(Local_1617.f_138, 1);
					func_78(Local_211[0], 0);
					func_779(iParam0);
					StringCopy(&cVar12, "LCMPF_IG1_ALTR", 24);
					iLocal_596 = 17;
				}
				else
				{
					StringCopy(&cVar12, "LCMPF_IG1_R", 24);
					iLocal_596 = 16;
				}
				func_387(&(Local_1617.f_35), &cVar12, *iParam0, Global_35, 0, 0, 1, 1);
				func_128(4096);
				func_98(uLocal_2102[0]);
			}
			break;
		case 16:
			func_800(iParam0);
			if (func_224(vLocal_570[3], 60f))
			{
				_0x74c2b3dc0b294102(&(iLocal_75[0]));
				_0xa1cfb35069d23c23(&(iLocal_75[0]));
				func_77(Local_1617.f_138, 1);
				func_78(Local_211[0], 0);
				clear_ped_tasks(*iParam0, 1, 0);
				func_779(iParam0);
				iLocal_596 = 17;
			}
			break;
		case 17:
			break;
	}
	return 0;
}

int func_422(int iParam0)
{
	func_801();
	switch (iVar592)
	{
		case 0:
			if (!_does_volume_exist(&(iLocal_75[4])))
			{
				iLocal_75[4] = _create_volume_box_with_custom_name(-1398.107f, -213.5636f, 102.7725f, 0f, 0f, 18.99809f, 6.332798f, 6.346769f, 4.001091f, "Appleseed - volSell");
			}
			if (func_9(Local_1617.f_136, 1024))
			{
				if (func_802(iParam0))
				{
					func_757(0, 1);
					func_403(0, 1, 0);
					func_756(0, 0, 1);
					func_71(256);
					func_779(iParam0);
					func_217(Local_492[1]);
					func_483(Local_492[1], "script@proc@handovers@player_handovers@exchange_item_for_money", "PB_HANDOVER", 0);
					_0x74c2b3dc0b294102(&(iLocal_75[0]));
					_0xa1cfb35069d23c23(&(iLocal_75[0]));
					clear_ped_tasks(*iParam0, 1, 0);
					_task_use_nearest_scenario_to_coord(*iParam0, -1398.248f, -210.7696f, 101.8917f, 1.5f, -1, false, false, false, false);
					func_42(Local_1617.f_136, 4096);
					iLocal_595 = 15;
				}
			}
			else if (func_803() && func_804(iParam0))
			{
				func_71(67108864);
				func_403(0, 1, 0);
				func_757(1, 1);
				func_805(0);
				iLocal_75[1] = _create_volume_box_with_custom_name(-1399.521f, -209.5342f, 104.064f, 0f, 0f, 18.19485f, 9.259386f, 12.57203f, 6.4343f, "Appleseed - volCut");
				iLocal_75[11] = _create_volume_cylinder_with_custom_name(-1399.238f, -220.5899f, 102.4817f, 0f, 0f, 0.277182f, 8.547582f, 7.336222f, 3.176049f, "Appleseed - volHorse");
				_0xb56d41a694e42e86(&(iLocal_75[1]), 0, 0, 0, -1, -1, 2);
				_0x18262cafebb5fbe1(&(iLocal_75[1]), 0, 0, 0, -1, -1, 0);
				iLocal_595 = 1;
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
					iLocal_595 = 6;
				}
				else
				{
					iLocal_595 = 2;
				}
			}
			break;
		case 6:
			if (!func_771(0))
			{
				func_772("LOG_OBJ01", 1);
				func_355(*iParam0, uLocal_2102[0], -89429847, 580546400, 0, func_413());
				if (!func_9(Local_1617.f_136, 1024))
				{
					iLocal_595 = 2;
				}
				else if (func_802(iParam0))
				{
					iLocal_595 = 8;
				}
			}
			break;
		case 2:
			if (!func_266(Local_1617.f_138, 0))
			{
				func_62(Local_1617.f_138, 1, 1);
			}
			if (func_806(0))
			{
				if (!is_ped_using_any_scenario(*iParam0))
				{
					if (does_entity_exist(Local_614.f_690[8]->f_8))
					{
						delete_object(&(Local_614.f_690[8]->f_8));
					}
					if (does_entity_exist(Local_614.f_690[7]->f_8))
					{
						delete_object(&(Local_614.f_690[7]->f_8));
					}
				}
				if (((func_131(Global_35, 242628503) || func_131(Global_35, 501393341)) || func_131(Global_35, 1553520516)) || func_131(Global_35, 1920417248))
				{
					display_radar(false);
				}
			}
			break;
		case 3:
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			break;
		case 4:
			func_734(1048576000, 1028443341, 0, 106);
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			func_807();
			break;
		case 5:
			func_734(1048576000, 1028443341, 0, 106);
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			func_807();
			break;
		case 7:
			func_807();
			if (!func_266(Local_1617.f_138, 0))
			{
				func_62(Local_1617.f_138, 1, 1);
			}
			if (!func_19(4096))
			{
				func_128(512);
				func_203();
				func_14(4096);
				func_302(&Local_433, 4);
			}
			break;
		case 8:
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			func_808(11, 2);
			if (func_310(Local_1617.f_32) && !func_809(101))
			{
				func_810(Local_1617.f_32, 0, 1);
			}
			if (bVar0)
			{
				_0x74c2b3dc0b294102(&(iLocal_75[1]));
				_0xa1cfb35069d23c23(&(iLocal_75[1]));
				func_111(&(iLocal_75[1]));
				_0x74c2b3dc0b294102(&(iLocal_75[0]));
				_0xa1cfb35069d23c23(&(iLocal_75[0]));
			}
			break;
		case 9:
			if (func_714(Local_492[0], "Internal_Loop"))
			{
				func_715(Local_492[0], "Internal_Loop");
			}
			if (func_19(1073741824) && !func_811(11))
			{
				set_player_control(get_player_index(), false, 0, false);
				func_43(&Local_1617, 65536);
				func_808(11, 2);
				if (func_9(Local_1617.f_136, 4))
				{
					func_812(11, 128);
					iLocal_595 = 11;
				}
				else
				{
					func_387(&(Local_1617.f_35), "LOG_LCMP_INT_b0", Global_35, *iParam0, 0, 0, 1, 0);
					iLocal_595 = 13;
				}
			}
			break;
		case 10:
			if (func_748(&Local_156, 129))
			{
				iLocal_595 = 11;
			}
			break;
		case 11:
			break;
		case 12:
			if (does_entity_exist(Local_614.f_690[0]->f_8))
			{
				if (!func_70(256))
				{
					func_684(Local_492[1], Global_35, "arthur", 1);
					func_685(Local_492[1], Local_614.f_690[3]->f_8, "p_knife02x");
					func_685(Local_492[1], Local_614.f_690[4]->f_8, "p_woodWittle01x");
					func_685(Local_492[1], Local_614.f_690[6]->f_8, "p_foldedBill01x");
					func_684(Local_492[1], *iParam0, "U_M_M_BIVFOREMAN_01", 1);
					func_685(Local_492[1], Local_614.f_690[0]->f_8, "ITEM");
					func_642(Local_492[1], "pbl_AgreeToSell", 1);
				}
				else
				{
					func_684(Local_492[1], Global_35, "player", 1);
					func_685(Local_492[1], Local_614.f_690[6]->f_8, "MONEY");
					func_685(Local_492[1], Local_614.f_690[0]->f_8, "Item");
					func_684(Local_492[1], *iParam0, "male", 1);
				}
				iLocal_595 = 13;
			}
			break;
		case 13:
			func_98(uLocal_2102[0]);
			if (func_9(Local_1617.f_136, 4))
			{
				if (!func_19(4096))
				{
					func_387(&(Local_1617.f_35), "LOG_LCMP_INT_a2", *iParam0, Global_35, 0, 0, 1, 1);
				}
				func_686(Local_492[1]);
				func_217(Local_492[0]);
				if (!func_70(256))
				{
					func_643(Local_492[1], "Internal_Loop");
				}
				iLocal_595 = 14;
			}
			else if (!func_389("LOG_LCMP_INT_b0"))
			{
				func_642(Local_492[0], "pbl_RefuseToSell", 1);
				func_643(Local_492[0], "Internal_Loop");
				func_71(16384);
				iLocal_595 = 14;
			}
			break;
		case 14:
			if ((!is_entity_dead(*iParam0) && has_anim_event_fired(*iParam0, -1898385492)) && does_entity_exist(Local_614.f_690[0]->f_8))
			{
				delete_object(&(Local_614.f_690[0]->f_8));
			}
			if (!is_entity_dead(Global_35))
			{
				if (has_anim_event_fired(Global_35, -1898385492) && does_entity_exist(Local_614.f_690[6]->f_8))
				{
					delete_object(&(Local_614.f_690[6]->f_8));
				}
				if (!is_player_control_on(get_player_index()) && has_anim_event_fired(Global_35, -1376584066))
				{
					set_player_control(get_player_index(), true, 0, false);
					func_82(&Local_1617, 65536);
				}
			}
			if (!get_is_task_active(Global_35, 3))
			{
				display_radar(true);
				display_hud(true);
			}
			if (func_368(Local_492[0]) && (func_70(16384) || func_368(Local_492[1])))
			{
				set_player_control(get_player_index(), true, 0, false);
				func_82(&Local_1617, 65536);
				display_radar(true);
				display_hud(true);
				func_43(&Local_1617, 128);
				func_313(11, 128);
				func_483(Local_492[1], "script@proc@handovers@player_handovers@exchange_item_for_money", "PB_HANDOVER", 0);
				func_128(2048);
				func_339(16384);
				func_813(11);
				func_71(256);
				func_128(536870912);
				func_128(4096);
				func_108(1);
				func_339(67108864);
				func_757(0, 1);
				func_403(0, 1, 0);
				func_756(0, 0, 1);
				func_814(11, 2);
				clear_ped_tasks(*iParam0, 1, 0);
				_task_use_nearest_scenario_to_coord(*iParam0, -1398.248f, -210.7696f, 101.8917f, 1.5f, -1, false, false, false, false);
				func_779(iParam0);
				iLocal_595 = 15;
			}
			break;
		case 15:
			func_808(11, 1);
			if (func_19(4096))
			{
				func_128(4096);
			}
			break;
	}
	return 0;
}

void func_423(var uParam0, int iParam1)
{
	if ((iLocal_206 % 5) != 0)
	{
		return;
	}
}

int func_424()
{
	return 0;
}

int func_425()
{
	return 0;
}

bool func_426(int iParam0)
{
	return false;
}

int func_427(int iParam0)
{
	return 0;
}

void func_428()
{
	if (func_51(8192))
	{
		iVar1 = iVar2248;
		iVar2 = iVar2248 + 4;
		if (iVar2 >= iVar2144)
		{
			iVar2 = (iVar2144 - 1);
		}
		iLocal_2250 = iVar1;
		while (iVar2248 <= iVar2)
		{
			if (!func_157(&(iLocal_2130[iVar2248])))
			{
			}
			else
			{
				iVar0 = func_63(&(iLocal_2130[iVar2248]));
				if (!is_entity_dead(iVar0))
				{
					func_244(&(iLocal_2130[iVar2248]), 0, 1, 0, 1, 1);
					func_245(iVar0, 1, 1);
					if (!func_131(iVar0, 518218985))
					{
						if (!func_19(32))
						{
							func_755(&iLocal_2250);
						}
						else
						{
							vVar3 = { func_815(&(iLocal_75[4]), 100, 1, 0) };
							open_sequence_task(&iLocal_196);
							if (!func_243(vVar3))
							{
								task_follow_nav_mesh_to_coord(0, vVar3, 2f, -1, get_random_float_in_range((30f / 2f), 30f), 0, 40000f);
							}
							func_816(0, &(uLocal_2082[0]), -1);
							task_stand_still(0, -1);
							close_sequence_task(iLocal_196);
							task_perform_sequence(iVar0, iLocal_196);
							clear_sequence_task(&iLocal_196);
						}
					}
					if (!func_19(32))
					{
						iLocal_2130[iVar2248] = -1;
					}
				}
			}
			iLocal_2250 = iVar2248 + 1;
		}
		if (iVar2248 >= (iVar2144 - 1))
		{
			func_50(8192);
			if (!func_19(32))
			{
				iLocal_2146 = 0;
			}
		}
	}
}

bool func_429(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_117(1024);
		case 1:
			return func_117(2048);
		case 2:
			return func_117(4096);
		case 3:
			return func_117(8192);
		case 4:
			return func_117(16384);
		default:
			break;
	}
	return false;
}

bool func_430(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_117(32768);
		case 1:
			return func_117(65536);
		case 2:
			return func_117(131072);
		case 3:
			return func_117(262144);
		case 4:
			return func_117(524288);
		default:
			break;
	}
	return false;
}

float func_431(int iParam0)
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

float func_432(int iParam0)
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

void func_433()
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
				if ((func_19(32) && !func_22(&Local_1617, 2)) && iVar4 == &uLocal_2082[0])
				{
				}
				else
				{
					func_130(iVar4, 0, 0);
				}
			}
			iVar0++;
		}
	}
	destroy_itemset(iVar1);
}

int func_434(int iParam0)
{
	fVar0 = func_521(func_436(iParam0), 1);
	if (fVar0 <= 15f)
	{
		return 255;
	}
	iVar1 = ceil(((-4.25f * (fVar0 - 15f)) + 255f));
	return iVar1;
}

void func_435(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < iVar2143)
	{
		if (!func_157(&(iLocal_2130[iVar1])))
		{
		}
		else
		{
			iVar0 = func_63(&(iLocal_2130[iVar1]));
			if (!is_entity_dead(iVar0))
			{
				func_244(&(iLocal_2130[iVar1]), 0, 1, 0, 1, 1);
				func_245(iVar0, 1, 1);
			}
		}
		iVar1++;
	}
}

Vector3 func_436(int iParam0)
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

Vector3 func_437(int iParam0)
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

float func_438(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

bool func_439(bool bParam0)
{
	if (bParam0)
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	if (!func_215(Global_35, Global_1898092->f_26.f_5, 1, 0))
	{
		return true;
	}
	if (func_140(Global_1898092->f_26.f_2) && func_9(Global_1898092->f_26.f_2, 33554432))
	{
		return true;
	}
	return false;
}

bool func_440()
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

int func_441(int iParam0)
{
	if (!func_100(iParam0))
	{
		return -1;
	}
	return func_817(func_611(iParam0));
}

bool func_442(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_443(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_444(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

int func_445(int iParam0)
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

int func_446(int iParam0)
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

void func_447(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
{
	if (!func_140(iParam0))
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

bool func_448(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_449(int iParam0)
{
	if (!func_448(iParam0))
	{
		return false;
	}
	return func_142(iParam0, 33554432);
}

bool func_450(int iParam0)
{
	if (!func_448(iParam0))
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

bool func_451(int iParam0)
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

int func_452()
{
	return &Global_1899515;
}

int func_453(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

bool func_454(int iParam0)
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

float func_455(int iParam0, vector3 vParam1)
{
	if (func_818(iParam0))
	{
		return vdist(_0x1e8a921112891651((*Global_1425371)[iParam0]->f_1), vParam1);
	}
	return 1E+08f;
}

void func_456(int iParam0)
{
	if (!func_157(iParam0))
	{
		return;
	}
	Global_24887[iParam0]->f_1 = func_452();
	if (_0x800df3fc913355f3(func_169(iParam0)))
	{
		_0x0b3a99ab6713aa52(func_169(iParam0));
	}
}

float func_457(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

void func_458(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	vVar3 = { _get_object_offset_from_coords(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { _get_object_offset_from_coords(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_819(vVar0, vVar3, 0f) };
	vVar9 = { func_820(vVar0, vVar3, 0f) };
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

int func_459()
{
	return -1820002752;
}

void func_460(var uParam0)
{
	func_487(uParam0, 4);
}

void func_461(var uParam0)
{
	func_487(uParam0, 64);
}

void func_462(var uParam0)
{
	func_487(uParam0, 8);
}

void func_463(var uParam0)
{
	func_487(uParam0, 128);
}

void func_464(var uParam0)
{
	func_487(uParam0, 1);
}

void func_465(int iParam0)
{
	func_469(&(Global_40.f_9096[Local_1617.f_136]->f_6), func_7(iParam0));
}

bool func_466(int iParam0)
{
	return func_398(Global_40.f_9096[Local_1617.f_136]->f_6, func_7(iParam0));
}

void func_467(int iParam0)
{
	vVar0 = { func_821(*iParam0) };
	fVar3 = func_822(*iParam0);
	uLocal_478[*iParam0] = create_scenario_point(func_693(), vVar0, fVar3, 0, 0, 0);
	_0xe69fda40aac3efc0(&(uLocal_478[*iParam0]), 0);
	_0xa7479fb665361edb(&(uLocal_478[*iParam0]), 0);
	_set_scenario_point_flag(&(uLocal_478[*iParam0]), 19, true);
	iLocal_197[*iParam0] = _create_volume_cylinder_with_custom_name(vVar0, 0f, 0f, 0f, 2f, 2f, 2f, "Appleseed - volTreeBlock");
	_0x18262cafebb5fbe1(&(iLocal_197[*iParam0]), 534496, 0, 0, -1, -1, 0);
	_0xb56d41a694e42e86(&(iLocal_197[*iParam0]), 534496, 0, 0, -1, -1, 0);
	if (!func_823(uLocal_1914[*iParam0]))
	{
		uLocal_1914[*iParam0] = _0xfa50f79257745e74(vVar0, 3f, 1, 36, 0);
	}
}

bool func_468(int iParam0)
{
	iVar0 = 0;
	if (!does_rayfire_map_object_exist(&(iLocal_466[iParam0])))
	{
		uLocal_472[iParam0] = _0x6f3068258a499e52(func_824(iParam0), func_437(iParam0), 9);
		iLocal_466[iParam0] = get_rayfire_map_object(func_437(iParam0), 5f, func_825(iParam0));
	}
	if (does_rayfire_map_object_exist(&(iLocal_466[iParam0])))
	{
		uLocal_472[iParam0] = &uLocal_472[iParam0];
		if (((!func_826(iParam0) && get_state_of_rayfire_map_object(&(iLocal_466[iParam0])) != 4) && !func_429(iParam0)) && !func_466(iParam0))
		{
			set_state_of_rayfire_map_object(&(iLocal_466[iParam0]), 4);
		}
		else if (func_19(64))
		{
			set_state_of_rayfire_map_object(&(iLocal_466[iParam0]), 4);
		}
		else if (func_466(iParam0))
		{
			set_state_of_rayfire_map_object(&(iLocal_466[iParam0]), 9);
			func_827(iParam0);
			func_704(iParam0);
		}
		if (func_826(iParam0))
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_469(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_470(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_145(iParam0, 268435456);
	}
	else
	{
		func_201(iParam0, 268435456);
	}
	if (!bParam2)
	{
		func_145(iParam0, 1073741824);
	}
	else
	{
		func_201(iParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_145(iParam0, 536870912);
	}
	else
	{
		func_201(iParam0, 536870912);
	}
}

void func_471(int iParam0, float fParam1)
{
	iParam0->f_27 = fParam1;
}

void func_472(vector3 vParam0, float fParam3, int iParam4)
{
	vVar3 = { _get_object_offset_from_coords(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { _get_object_offset_from_coords(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_819(vVar0, vVar3, 0f) };
	vVar9 = { func_820(vVar0, vVar3, 0f) };
	if (iParam4 == 5)
	{
		set_roads_back_to_original(vVar6, vVar9, 0, 1);
	}
	else
	{
		_0x6c3f12eceb6d2e2a(vVar6, vVar9, iParam4, 1);
	}
}

void func_473(vector3 vParam0, int iParam3)
{
	if (func_243(vParam0))
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
			if (func_828(vVar2, vParam0, 2f, 1))
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

void func_474(int iParam0, bool bParam1)
{
	if (iParam0 < 0 || iParam0 > 4)
	{
		return;
	}
	if (_does_scenario_point_exist(&(uLocal_478[iParam0])))
	{
		_delete_scenario_point(&(uLocal_478[iParam0]));
		func_111(&(iLocal_197[iParam0]));
	}
	if (bParam1)
	{
		func_829(uLocal_1914[iParam0], 1);
	}
}

void func_475(int iParam0)
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

void func_476()
{
	_0x88544c0e3291dcae(1);
	func_830();
}

bool func_477(int iParam0)
{
	if (((func_478(iParam0, 1) && func_478(iParam0, 2)) && func_478(iParam0, 8)) && func_478(iParam0, 512))
	{
		return true;
	}
	return false;
}

bool func_478(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

float func_479()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_480(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_481(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

char* func_482(int iParam0)
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
				if ((iLocal_98 > 1 && func_9(1, 2)) && !func_9(Local_1617.f_136, 16384))
				{
					return "PBL_FOREMAN_STAGE2_TALK_INTRO";
				}
				else if (func_333())
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
							if (func_333())
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
							if (func_333())
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
						if (!func_5(Local_1617.f_136, 64))
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

void func_483(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	func_831(uParam0, sParam1, sParam2, iParam3);
	func_832(uParam0);
}

void func_484()
{
	func_18(5, &Local_1617, 5);
	if (func_19(64))
	{
		iLocal_597 = 2;
	}
	else if (func_22(&Local_1617, 256))
	{
		iLocal_597 = 2;
	}
	else if (func_364())
	{
		iLocal_597 = 0;
	}
	else
	{
		iLocal_597 = 2;
	}
}

int func_485()
{
	iVar0 = get_random_int_in_range(0, 2);
	switch (iVar0)
	{
		case 0:
			return 622277464;
		case 1:
			return 861227228;
		default:
			break;
	}
	return 861227228;
}

Vector3 func_486(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1330.243f, -215.0619f, 101.4806f;
		case 1:
			return -1331.525f, -215.6111f, 101.4806f;
		case 2:
			return -1332.405f, -216.0306f, 101.4806f;
		case 3:
			return -1333.802f, -208.2314f, 101.4832f;
		case 4:
			return -1334.693f, -208.649f, 101.4832f;
		case 5:
			return -1335.645f, -209.0838f, 101.4832f;
		case 6:
			return -1337.773f, -199.2836f, 101.4557f;
		case 7:
			return -1338.676f, -199.7524f, 101.4558f;
		case 8:
			return -1339.435f, -200.1282f, 101.4558f;
		case 9:
			return -1341.268f, -192.0703f, 101.4249f;
		case 10:
			return -1342.342f, -192.6443f, 101.425f;
		case 11:
			return -1343.02f, -192.9443f, 101.4249f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_487(var uParam0, int iParam1)
{
	func_469(uParam0, iParam1);
}

Vector3 func_488()
{
	return -1400.29f, -207.08f, 100.64f;
}

Vector3 func_489()
{
	return -1392.202f, -270.137f, 96.51328f;
}

Vector3 func_490(int iParam0, int iParam1)
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

Vector3 func_491(int iParam0)
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

float func_492(int iParam0)
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

Vector3 func_493(int iParam0)
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

Vector3 func_494(int iParam0)
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

void func_495(char* sParam0, var uParam1)
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

char* func_496()
{
	if (func_333())
	{
		return "SCRIPT_PROC@EVENT_AREA@APPLESEED@NO_OUTDOOR_JOB";
	}
	return "SCRIPT_PROC@EVENT_AREA@APPLESEED@NO_INDOOR_JOB";
}

Vector3 func_497()
{
	return -1442.024f, -359.4506f, 111.622f;
}

bool func_498(var uParam0)
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

bool func_499(var uParam0)
{
	if (!func_252(uParam0->f_1))
	{
		return false;
	}
	if (uParam0->f_12 != 0)
	{
		if (!func_252(uParam0->f_12))
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

int func_500(var uParam0, var uParam1)
{
	vVar0 = { *uParam0 };
	if (func_833(&uParam1))
	{
		return 1;
	}
	if (!func_520(&vVar0, 1, 10, 0))
	{
		return 0;
	}
	*uParam0 = { vVar0 };
	return 1;
}

bool func_501(var uParam0)
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

int func_502(int iParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, bParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_834(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_503(int iParam0)
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

bool func_504(var uParam0)
{
	return func_248(*uParam0, 4);
}

bool func_505(var uParam0)
{
	return func_248(*uParam0, 64);
}

bool func_506(var uParam0)
{
	return func_248(*uParam0, 8);
}

bool func_507(var uParam0)
{
	return func_248(*uParam0, 128);
}

bool func_508(var uParam0)
{
	return func_248(*uParam0, 2048);
}

void func_509(int iParam0, bool bParam1)
{
	set_ped_config_flag(iParam0, 130, !bParam1);
	set_ped_config_flag(iParam0, 178, bParam1);
}

bool func_510(var uParam0)
{
	return func_248(*uParam0, 1024);
}

bool func_511(var uParam0)
{
	return func_248(*uParam0, 256);
}

void func_512(int iParam0, bool bParam1)
{
	set_ped_config_flag(iParam0, 146, !bParam1);
	set_ped_config_flag(iParam0, 148, !bParam1);
}

bool func_513(var uParam0)
{
	return func_248(*uParam0, 512);
}

bool func_514(var uParam0)
{
	return func_248(*uParam0, 4096);
}

void func_515(int iParam0, int iParam1)
{
	if (!func_157(iParam0))
	{
		return;
	}
	(*Global_1895087)[iParam0]->f_1 = iParam1;
}

bool func_516(int iParam0)
{
	if (!func_157(iParam0))
	{
		return false;
	}
	if (!func_23(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_517(int iParam0, bool bParam1)
{
	if (!func_157(iParam0))
	{
		return false;
	}
	if ((func_23(iParam0, 1) && !func_518(iParam0)) && func_530(iParam0))
	{
		return false;
	}
	if (!func_23(iParam0, 2))
	{
		return false;
	}
	if (!bParam1)
	{
		if (!func_241(iParam0, 0))
		{
			return false;
		}
	}
	return true;
}

bool func_518(int iParam0)
{
	if (!func_157(iParam0))
	{
		return false;
	}
	return (*Global_1895087)[iParam0]->f_2 == get_id_of_this_thread();
}

void func_519(int iParam0)
{
	if (!func_157(iParam0))
	{
		return;
	}
	(*Global_1895087)[iParam0]->f_2 = get_id_of_this_thread();
}

bool func_520(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_835(*uParam0, 0f, 0f, 0f))
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

float func_521(vector3 vParam0, int iParam3)
{
	return func_438(Global_35, vParam0, iParam3);
}

bool func_522(int iParam0, int iParam1)
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
	if (func_248(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_248(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_248(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_248(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_248(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_248(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_248(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_248(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_523(int iParam0, bool bParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (!is_entity_occluded(iParam0) && is_entity_on_screen(iParam0))
		{
			if (func_385(player_ped_id(), iParam0, 1) < (bParam1 * bParam1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_524(vector3 vParam0, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
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
				fVar2 = func_836(iParam10);
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
			bVar0 = func_837(bParam4, player_ped_id(), iParam3);
		}
	}
	else
	{
		bVar0 = func_838(bParam4, player_ped_id(), vParam0);
	}
	if (bVar0)
	{
		*bParam6 = 1;
		if (*iParam5 != 0f)
		{
		}
		if (*iParam5 <= 0f)
		{
			*iParam5 = func_479();
		}
		else if ((func_479() - *iParam5) > bParam7)
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

bool func_525(int iParam0, bool bParam1)
{
	if (func_254(iParam0, 0, 1))
	{
		return (is_scripted_speech_playing(iParam0) || (bParam1 && is_any_speech_playing(iParam0)));
	}
	return false;
}

bool func_526(float fParam0)
{
	if (func_839(1))
	{
		return true;
	}
	if (func_668(&uLocal_0) && !func_224(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

bool func_527(var uParam0)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return false;
	}
	return _is_anim_scene_loaded(*uParam0, true, false);
}

int func_528(var uParam0)
{
	return uParam0;
}

bool func_529(int iParam0)
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

bool func_530(int iParam0)
{
	if (!func_157(iParam0))
	{
		return false;
	}
	return _does_thread_exist((*Global_1895087)[iParam0]->f_2);
}

void func_531(int iParam0)
{
	if (!func_157(iParam0))
	{
		return;
	}
	iVar0 = func_246(iParam0);
	if (does_entity_exist(iVar0))
	{
		if (does_entity_belong_to_this_script(iVar0, false))
		{
			set_ped_as_no_longer_needed(&iVar0);
		}
	}
	(*Global_1895087)[iParam0]->f_2 = 0;
}

int func_532(int iParam0, bool bParam1)
{
	if (!func_157(iParam0))
	{
		return 0;
	}
	if (!func_23(iParam0, 2))
	{
		return 0;
	}
	if (func_238(iParam0) == 0)
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_169(iParam0)))
	{
		return 1;
	}
	if (func_23(iParam0, 1) && !bParam1)
	{
		func_24(iParam0, 128);
		return 1;
	}
	func_171(iParam0, 129);
	func_531(iParam0);
	_0xfc77c5b44d5ff7c0(func_169(iParam0));
	func_515(iParam0, 0);
	return 1;
}

bool func_533(int iParam0)
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

int func_534(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_840(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_841((386 + iVar28), 1);
			if (func_842(iParam0, &Var0, iVar5, 0))
			{
				if (func_843(iParam0, &Var6, iVar5))
				{
					Var29 = { func_844(iParam0, Var0, iVar5, 0) };
					func_845(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_846(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					func_847(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_848(iParam0, iParam1);
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

void func_535(int iParam0, int iParam1, float fParam2)
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

bool func_536(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_537(int iParam0)
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

int func_538(int iParam0)
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

int func_539(int iParam0)
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

int func_540(int iParam0)
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

int func_541()
{
	return 676312963;
}

int func_542(int iParam0)
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

int func_543()
{
	return -886879462;
}

char* func_544(int iParam0)
{
	if (!func_140(iParam0))
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

var func_545(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
		return func_849(sParam0, sParam1, iParam2, iParam3, iParam4, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13);
	}
	return func_850(sParam0, sParam1, iParam2, iParam3, iParam4, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13);
}

bool func_546(int iParam0)
{
	return func_9(iParam0, 1);
}

void func_547(int iParam0, bool bParam1)
{
	if (Global_1572887->f_10 && func_1() == 0)
	{
		return;
	}
	if (func_851(128))
	{
		return;
	}
	if (!func_852(iParam0))
	{
		return;
	}
	if (func_142(iParam0, 32))
	{
		return;
	}
	func_143(iParam0, 32);
	func_331(Global_1935630, 8192);
	func_854(func_853(-1532769513, -36357794), 1);
	switch (func_855(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_854(func_853(-1532769513, 213519508), 1);
			break;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_854(func_853(-1532769513, 242571679), 1);
			break;
		case 3:
		case 10:
			func_854(func_853(-1532769513, 1349449307), 1);
			break;
		case 4:
		case 9:
			func_854(func_853(-1532769513, 1140362070), 1);
			break;
		case 8:
			func_854(func_853(-1532769513, -172330899), 1);
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			func_854(func_853(-1532769513, -910218296), 1);
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
		func_143(iParam0, 64);
	}
}

void func_548(int iParam0, int iParam1)
{
	iVar0 = func_856(iParam0);
	if (iVar0 != 0 && func_9(iParam0, 1))
	{
		vVar1 = { func_857(iParam0) };
		if (iParam1 < 1)
		{
			iParam1 = func_4(iParam0);
		}
		func_858(iParam0, iParam1);
		iParam1 = (iParam1 - 1);
		if (func_9(iParam0, 67108864))
		{
			_0xe057fea9a22eb3ee(iVar0);
		}
		_0x1392105da88bbffb(iVar0, vVar1.x, vVar1.y, 0, iParam1);
		func_10(iParam0, 67108864);
	}
}

int func_549(int iParam0)
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

int func_550()
{
	return get_player_group(get_player_index());
}

bool func_551(int iParam0)
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

bool func_552(int iParam0)
{
	return func_859(iParam0, 6);
}

int func_553(int iParam0)
{
	iVar0 = func_860(iParam0, 6);
	return iVar0;
}

bool func_554(int iParam0)
{
	return func_859(iParam0, 7);
}

int func_555(int iParam0)
{
	iVar0 = func_860(iParam0, 7);
	return iVar0;
}

bool func_556(int iParam0)
{
	return (func_859(iParam0, 4) || func_859(iParam0, 5));
}

int func_557(int iParam0)
{
	iVar0 = func_860(iParam0, 4);
	if (!does_entity_exist(iVar0))
	{
		iVar1 = func_860(iParam0, 5);
		return iVar1;
	}
	return iVar0;
}

void func_558(var uParam0, int iParam1, bool bParam2)
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

bool func_559(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
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
	if (bParam3 && func_861(iParam0))
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
		if (func_360(iParam0, 0) != -1)
		{
			return false;
		}
	}
	return true;
}

int func_560(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_561(bool bParam0, bool bParam1, bool bParam2)
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

bool func_562(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	if (iParam4 < 0 || iParam4 >= *iParam0)
	{
		iParam4 = (*iParam0 - 1);
	}
	iVar0 = iParam3;
	while (iVar0 <= iParam4)
	{
		if (func_365(iParam0[iVar0], iParam1, uParam2, 0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_563(int iParam0, int iParam1, bool bParam2)
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

char* func_564()
{
	return "LOG_HONOR_WAGON_STEAL";
}

void func_565(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_1() != -1)
	{
		return;
	}
	if ((Global_36616 && func_862(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_863(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_864(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_865(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_864(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

void func_566(int iParam0, bool bParam1, int iParam2)
{
	func_866(iParam2);
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
		iParam0->f_13 = func_867(0);
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
							func_145(iParam0, 33554432);
						}
					}
					else if (!*iParam0 & 8192 != 0)
					{
						if (func_868(1))
						{
							func_145(iParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_35) && (!func_868(1) || *iParam0 & 8192 != 0))
				{
					func_201(iParam0, 33554432);
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
			if (func_869(iParam0))
			{
				iParam0->f_15 = func_585();
			}
		}
		else if (iParam0->f_15 > 0)
		{
			if ((func_585() - iParam0->f_15) > 500)
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
	func_870(iParam0);
}

bool func_567(int iParam0, int iParam1)
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
			if (!func_871(iParam0, iParam1, iVar2))
			{
				return false;
			}
			if (func_872(iParam0, iVar2) <= func_873(iParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_568(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		iParam1->f_10 = iParam0;
	}
	if (func_874(iParam2, 1, 1, 1, 0))
	{
		func_145(iParam1, 2048);
	}
	iParam1->f_16 = iParam2;
	func_594(iParam1, 1);
	func_830();
}

bool func_569(int iParam0, int iParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_390(iParam0, !*iParam1 & 268435456 != 0, !*iParam1 & 536870912 != 0, !*iParam1 & 1073741824 != 0, 0, 0))
		{
			if (iParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (iParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_875(iParam1);
			if (func_876(iParam1, iParam0, fVar0, fVar1))
			{
				if (iParam1->f_2 == 0)
				{
					iParam1->f_2 = get_game_timer();
				}
				iVar2 = (get_game_timer() - iParam1->f_2);
				iVar3 = func_877(iParam1);
				if (iParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_594(iParam1, 1);
						return true;
					}
					else if (iParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_594(iParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_570(int iParam0, int iParam1, int iParam2)
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
	if (func_878(iParam1, !*iParam2 & 268435456 != 0, !*iParam2 & 536870912 != 0, !*iParam2 & 1073741824 != 0, 0))
	{
		if (iParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (iParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_875(iParam2);
		if (func_876(iParam2, iParam0, fVar0, fVar1))
		{
			if (iParam2->f_2 == 0)
			{
				iParam2->f_2 = get_game_timer();
			}
			if (iParam2->f_2 != 0)
			{
				if (get_game_timer() - iParam2->f_2) > func_877(iParam2)
				{
					func_594(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_571(int iParam0, int iParam1)
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
	if (func_871(iParam0, iParam1, iVar1))
	{
		if (iParam1->f_3 == 0)
		{
			iParam1->f_3 = get_game_timer();
		}
		else if (get_game_timer() - iParam1->f_3) > func_877(iParam1)
		{
			fVar3 = func_875(iParam1);
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

bool func_572(int iParam0, float fParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_585();
	iVar1 = (iVar0 - iParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_573(var uParam0, int iParam1, int iParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_879(iParam2);
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
			if (func_581(iParam2, iParam1))
			{
				func_594(iParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_574(var uParam0, int iParam1, int iParam2)
{
	if (iParam2->f_12 < IntToFloat(func_880(iParam2)))
	{
		if ((is_weapon_valid(Global_1935630->f_46) && !_0x5809dbca0a37c82b(Global_1935630->f_46)) || get_current_ped_vehicle_weapon(Global_35, &uVar0))
		{
			if (func_581(iParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_594(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_575(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_881(iParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, iParam2->f_22))
				{
					func_594(iParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, iParam2->f_27))
				{
					func_594(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, iParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, iParam2->f_26, &vVar4, 0, 0);
					if (func_882(iParam1, vVar0, vVar4))
					{
						func_594(iParam2, 1);
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
					func_594(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, iParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, iParam2->f_26, &vVar7, 0, 0);
					if (func_882(iParam1, vVar0, vVar7))
					{
						func_594(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_576(int iParam0, int iParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *iParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_871(iParam0, iParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_883(&(Global_1935630->f_34[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_884(&(Global_1935630->f_34[iVar0])))
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
			if (func_885(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_886(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_887(iParam1, iParam0, fVar1, iVar0))
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

bool func_577(int iParam0, int iParam1)
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

bool func_578(int iParam0, int iParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_585();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_579(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_888(iVar0, &iVar2))
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
	if (func_889(iVar0, iParam0))
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

int func_580(int iParam0, int iParam1)
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

bool func_581(int iParam0, int iParam1)
{
	if (func_890(iParam0))
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

bool func_582(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_366(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_583()
{
}

bool func_584(int iParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_35);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_891(iVar0, iParam1, vVar1))
		{
			iParam0->f_9 = func_585();
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
						if (func_438(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								iParam0->f_9 = func_585();
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

int func_585()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_586()
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
	if ((func_585() - Global_1935630->f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_587(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0->f_14))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_873(iParam0);
	if (iParam0->f_12 > func_892(iParam0) && iParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_893(iParam1);
	iVar1 = func_894(iParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((iParam0->f_12 <= fVar0 || ((_0x06087579e7aa85a9(iParam1, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam1, Global_35, true, 0) == 1)) || ((_0x06087579e7aa85a9(iParam1, iParam0->f_14, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, iParam0->f_14, 17)) && _0x7f9b9791d4cb71f6(iParam1, iParam0->f_14, true, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

bool func_588(int iParam0, int iParam1, int iParam2)
{
	if (iParam2->f_12 > 4f)
	{
		return false;
	}
	bVar0 = *iParam2 & 256 != false;
	bVar1 = *iParam2 & 524288 != false;
	bVar2 = *iParam2 & 128 != false;
	return func_895(iParam0, iParam1, bVar0, bVar2, iParam2->f_12, bVar1);
}

bool func_589(int iParam0, int iParam1)
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
		if (func_896(iParam0, iParam1, 1))
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
					if (!func_897(iParam1, iParam0))
					{
						if (func_438(iVar4, Global_36, 1) < 7f)
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

bool func_590(int iParam0, int iParam1)
{
	if (!func_898(0))
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

bool func_591(int iParam0, int iParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_585();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_592(int iParam0, int iParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

bool func_593(int iParam0, int iParam1)
{
	if (!is_ped_human(iParam0))
	{
		return false;
	}
	if (iParam1->f_4 == 0)
	{
		iParam1->f_4 = func_585();
	}
	else if (func_585() - iParam1->f_4) > func_899(iParam1)
	{
		return func_308(iParam0, iParam1, 0, -1082130432);
	}
	return false;
}

void func_594(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_145(iParam0, 134217728);
	}
	else
	{
		func_201(iParam0, 134217728);
	}
}

bool func_595(var uParam0)
{
	if (!does_entity_exist(&(Global_1935630->f_34[0])))
	{
		return false;
	}
	if (is_entity_a_mission_entity(&(Global_1935630->f_34[0])) && does_entity_belong_to_this_script(&(Global_1935630->f_34[0]), true))
	{
		return true;
	}
	iVar0 = func_360(&(Global_1935630->f_34[0]), 0);
	if (func_157(iVar0))
	{
		if (uParam0->f_136 == 1)
		{
			func_162(&iVar1, &iVar2, 0);
		}
		else
		{
			func_163(uParam0->f_137, &iVar1, &iVar2, 0, 0);
		}
		if (iVar0 >= iVar1 && iVar0 <= iVar2)
		{
			return true;
		}
	}
	return false;
}

bool func_596(int iParam0)
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
	if (!func_522(*iParam0, 75))
	{
		return true;
	}
	iVar0 = func_358(Global_35, 0, 1, 0);
	if (func_352(iVar0))
	{
		if (_0x9e2d5d6bc97a5f1e(*iParam0, iVar0, 250))
		{
			return true;
		}
	}
	iVar0 = func_358(Global_35, 1, 1, 0);
	if (func_352(iVar0))
	{
		if (_0x9e2d5d6bc97a5f1e(*iParam0, iVar0, 250))
		{
			return true;
		}
	}
	return false;
}

bool func_597()
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
	if (func_266(Local_1617.f_138, 0))
	{
		return true;
	}
	return false;
}

bool func_598(int iParam0, var uParam1)
{
	if (!is_ped_fleeing(*uParam1))
	{
		return false;
	}
	return true;
}

bool func_599(int iParam0)
{
	if (((iParam0->f_16 == 3 || iParam0->f_16 == 1) || iParam0->f_16 == 6) || iParam0->f_16 == 5)
	{
		return true;
	}
	return false;
}

float func_600(int iParam0)
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

bool func_601(int iParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, float fParam7)
{
	uVar10 = 30;
	Stack.Push(&uVar10);
	Call_Loc(iParam1);
	iVar41 = func_717(&iVar0, &uVar10, 9, vParam2, fParam5, 0, 1, 0, -1, 1, 0, -1082130432, 0, 0);
	if (iVar41 <= 0)
	{
		return false;
	}
	iVar42 = func_900(&iVar0, vParam2, 0, 1, 0, -1);
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
			iVar42 = func_900(&iVar0, vParam2, 0, 1, 0, -1);
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

int func_602(int iParam0)
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

bool func_603(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	iVar0 = func_901(iParam0, 4, iParam2);
	if (does_entity_exist(iVar0))
	{
		*iParam1 = get_entity_model(iVar0);
		return true;
	}
	iVar1 = func_901(iParam0, 5, iParam2);
	if (does_entity_exist(iVar1))
	{
		*iParam1 = get_entity_model(iVar1);
		return true;
	}
	return false;
}

int func_604(int iParam0)
{
	return iParam0;
}

void func_605(int iParam0)
{
	if (!func_902(iParam0))
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

bool func_606()
{
	return _does_volume_exist(Global_1914319->f_3[11]->f_25);
}

void func_607(int iParam0)
{
	if (func_157(Global_1914319->f_3[iParam0]->f_21) && func_518(Global_1914319->f_3[iParam0]->f_21))
	{
		func_267(Global_1914319->f_3[iParam0]->f_21, 0, 1, 0, 0);
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
	func_903(Global_1914319->f_3[iParam0]->f_10, 0);
	func_313(iParam0, 536870912);
	iVar1 = func_904(iParam0);
	if (iVar1 >= 15)
	{
		Global_1914319->f_3[iParam0]->f_408 = 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			func_905(&(Global_1914319->f_3[iParam0]->f_317[iVar0]));
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
	func_906(iParam0);
	Global_1914319->f_3[iParam0]->f_10 = -1;
	Global_1914319->f_3[iParam0]->f_9 = -1;
	func_907(iParam0, 0);
}

void func_608(int iParam0, bool bParam1)
{
	if (!func_908(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_909(iParam0, 1);
	}
	else
	{
		func_910(iParam0, 1);
	}
	func_912(func_911(iParam0), bParam1);
}

bool func_609(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 35);
}

int func_610(int iParam0)
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

int func_611(int iParam0)
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

int func_612(int iParam0)
{
	return iParam0 & 31;
}

int func_613(int iParam0)
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

int func_614(int iParam0)
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

void func_615(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_616()
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

int func_617(int iParam0)
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

void func_618(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

void func_619(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_913(iParam0);
	}
	else
	{
		func_914(iParam0, iParam1);
	}
	func_915();
}

bool func_620(int iParam0)
{
	iVar0 = func_916(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_621(int iParam0)
{
	if (!func_100(iParam0))
	{
		return false;
	}
	switch (func_318(iParam0))
	{
		case 1:
			switch (func_441(iParam0))
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
			switch (func_441(iParam0))
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

void func_622(int iParam0)
{
	iVar2 = func_917(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_918(iVar1) == iParam0)
		{
			_0x6a564540fac12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_920(func_919(iParam0), 6);
}

void func_623(int iParam0)
{
	iVar2 = func_917(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_918(iVar1) == iParam0)
		{
			_0x766315a564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_921(func_919(iParam0), 6);
}

int func_624(int iParam0)
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

int func_625(int iParam0)
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
	func_922(iParam0, Global_1898164->f_162);
	return 1;
}

bool func_626(var uParam0, char* sParam1)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return false;
	}
	return _0x6f1f0b17109309da(*uParam0, sParam1);
}

bool func_627(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = func_628(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

int func_628(int iParam0)
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

void func_629(int iParam0)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_923(iParam0, 32);
	func_924();
}

void func_630(int iParam0)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_631(iParam0);
	if (!_does_thread_exist(iVar0))
	{
		func_633(iParam0);
	}
	else if (!is_thread_active(iVar0, false))
	{
		func_633(iParam0);
	}
}

int func_631(int iParam0)
{
	iParam0 = func_560(iParam0);
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

bool func_632(int iParam0)
{
	iParam0 = func_560(iParam0);
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

void func_633(int iParam0)
{
	iParam0 = func_560(iParam0);
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

void func_634(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!func_140(iParam0))
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

void func_635(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_145(iParam0, 64);
	}
	else
	{
		func_201(iParam0, 64);
	}
}

void func_636(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_145(iParam0, 1048576);
	}
	else
	{
		func_201(iParam0, 1048576);
	}
}

bool func_637()
{
	return (Global_1894899 & 1 != 0 && func_925() != -1);
}

bool func_638(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_639(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
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
	return func_926(iParam0, &Var0);
}

float func_640(var uParam0)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return 0f;
	}
	return _get_anim_scene_progress(*uParam0);
}

void func_641(var uParam0, Vector3* vParam1, Vector3* vParam2)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return;
	}
	_get_anim_scene_origin(*uParam0, vParam1, vParam2, 2);
}

void func_642(var uParam0, char* sParam1, bool bParam2)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return;
	}
	if (!func_927(uParam0, sParam1))
	{
		return;
	}
	_set_anim_scene_playback_list_bool(*uParam0, sParam1, bParam2);
}

void func_643(var uParam0, char* sParam1)
{
	func_928(uParam0, sParam1, 1);
}

bool func_644(var uParam0, char* sParam1)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return false;
	}
	return _0x1f0e401031e20146(*uParam0, sParam1);
}

int func_645(int iParam0, int iParam1, int iParam2)
{
	vVar0 = { get_entity_coords(iParam1, false, false) };
	return func_929(iParam0, vVar0, iParam2);
}

char* func_646(int iParam0, int iParam1)
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

int func_647(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return -1;
	}
	if (!func_163(iParam1, &uVar0, &iVar1, 0, 0))
	{
		return -1;
	}
	return func_930(iParam0, uVar0, iVar1, bParam2);
}

bool func_648(int iParam0, int iParam1)
{
	fVar0 = func_931(iParam1);
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
		fVar2 = func_932(_0x2ba9d7bf629f920c(iParam0), (fVar0 + 5f));
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
					if (func_933())
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

bool func_649(int iParam0, int iParam1)
{
	if (func_934(iParam0))
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

int func_650(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_651(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_652(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_59(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_653(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_654(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_655(int iParam0, int iParam1)
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

void func_656(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_935(iParam0, iParam6);
	func_936(iParam0, iParam5);
	func_937(iParam0, iParam4);
	func_938(iParam0, iParam3);
	func_939(iParam0, iParam2);
	func_940(iParam0, iParam1);
}

bool func_657(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_373(iParam1) || !func_373(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

int func_658(int iParam0, int iParam1, int iParam2)
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

int func_659(int* iParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	iVar0 = iParam9;
	func_941(&iVar0);
	if (func_376(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_942(iParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_376(iVar0, 134217728))
	{
		func_943(iParam1, uParam3, iParam0);
	}
	if (!*iParam4)
	{
		if (!is_bit_set(*iParam1, 25))
		{
			if (is_bit_set(*iParam1, 24))
			{
				if (!func_944(558))
				{
					func_945(558, 0);
				}
				set_bit(iParam1, 24);
				set_bit(iParam1, 25);
			}
		}
	}
	return iVar1;
}

char* func_660(int iParam0)
{
	if (func_946(iParam0))
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

void func_661(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
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
		if (func_310(iParam0->f_6))
		{
			if (is_bit_set(*iParam0, 1))
			{
				func_947(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_948(iParam0->f_6, iParam0->f_5, 0);
			}
			func_810(iParam0->f_6, 0, 1);
		}
		else
		{
			set_bit(iParam0, 14);
		}
		set_bit(iParam0, 0);
	}
	else
	{
		func_949(iParam0, iParam0->f_5);
		if (!is_bit_set(*iParam0, 13))
		{
			set_bit(iParam0, 0);
		}
	}
	set_bit(iParam0, 15);
}

void func_662(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_950(iParam0, 13))
	{
		func_951(iParam0, 0);
	}
	else
	{
		func_952(iParam0, 0);
	}
	if (func_310(iParam0->f_6))
	{
		if (bParam2)
		{
			func_311(&(iParam0->f_6), 0, 1);
		}
	}
}

void func_663(int* iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_950(iParam0, 4))
		{
			func_311(&(iParam0->f_6), 1, 1);
			func_951(iParam0, 4);
		}
	}
	else if (func_950(iParam0, 4))
	{
		func_952(iParam0, 4);
		func_951(iParam0, 14);
	}
}

void func_664(int* iParam0, int iParam1)
{
	iParam0->f_14 = iParam1;
}

void func_665(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_951((*uParam0)[iVar0], 9);
		iVar0++;
	}
}

char* func_666(int* iParam0)
{
	switch (iParam0->f_15)
	{
		case 0:
			if (func_134(iParam0, 16))
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
			if (func_134(iParam0, 16))
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
					return func_673(cVar4);
				case 8:
					return "LAW_LOW_SEVERITY_ANTAGONIZE";
			}
			return "LAW_LOW_SEVERITY_ANTAGONIZE";
	}
	return "DEFUSE_ARGUMENT_TOUGH";
}

char* func_667(int* iParam0)
{
	switch (iParam0->f_15)
	{
		case 0:
			if (func_134(iParam0, 16))
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
			if (func_134(iParam0, 16))
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

bool func_668(var uParam0)
{
	return func_953(*uParam0, 1);
}

bool func_669(var uParam0)
{
	return func_953(*uParam0, 2);
}

float func_670(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

bool func_671(char* sParam0)
{
	if (_0xd89504d9d7d5057d(sParam0))
	{
		start_preloaded_conversation(sParam0);
		return true;
	}
	return false;
}

bool func_672(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_954(cParam1, cParam0);
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

var func_673(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

var func_674(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_675(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_955(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

void func_676(int iParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		func_956(iParam0);
		func_957(iParam1, uParam2);
	}
	func_245(*iParam0, 1, bParam4);
}

void func_677(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (&iLocal_599[iParam4] > 3 && &iLocal_599[iParam4] < 8)
	{
		if ((!is_entity_dead(*iParam2) && !get_is_task_active(*iParam2, 3)) || (!is_entity_dead(*iParam3) && !get_is_task_active(*iParam3, 3)))
		{
			iVar0 = -1;
			if (!func_134(&Local_433, 1))
			{
				if (!is_entity_dead(*iParam2) && !get_is_task_active(*iParam2, 3))
				{
					Local_433 = func_63(func_335(9, 0, *iParam0));
					iVar0 = 0;
				}
				if (!is_entity_dead(*iParam2) && !get_is_task_active(*iParam3, 3))
				{
					Local_433 = *iParam3;
					iVar0 = 1;
				}
				if (func_958(func_63(func_335(9, iVar0, *iParam0)), Global_35, 0, 5f, 0))
				{
					func_301(&Local_433, &Local_1617, 2048, 55630, 0, 0);
				}
			}
			func_336(Local_492[(9 + iParam4)], *iParam2, "PED1");
			func_689(9, 0, *iParam0, 0 == iVar0);
			func_336(Local_492[(9 + iParam4)], *iParam3, "PED2");
			func_689(9, 1, *iParam0, 1 == iVar0);
			if (does_entity_exist((Local_614.f_690[(15 + *iParam1)])->f_8))
			{
				if (has_anim_event_fired((Local_614.f_690[(15 + *iParam1)])->f_8, -1984935666))
				{
					freeze_entity_position((Local_614.f_690[(15 + *iParam1)])->f_8, true);
				}
				else
				{
					func_336(Local_492[(9 + iParam4)], (Local_614.f_690[(15 + *iParam1)])->f_8, "SAW");
					freeze_entity_position((Local_614.f_690[(15 + *iParam1)])->f_8, false);
					activate_physics((Local_614.f_690[(15 + *iParam1)])->f_8);
				}
			}
			func_217(Local_492[(9 + iParam4)]);
			iLocal_599[iParam4] = 10;
		}
	}
}

void func_678(int iParam0, int iParam1)
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
			if (!func_927(Local_492[(9 + iParam0)], func_646(iVar1, iVar2)) && !func_959(Local_492[(9 + iParam0)], func_646(iVar1, iVar2)))
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					func_728(Local_492[(9 + iParam0)], func_646(iVar1, iVar2));
					iVar2++;
				}
			}
		}
		else if (func_927(Local_492[(9 + iParam0)], func_646(iVar1, iVar2)))
		{
			iVar2 = 0;
			while (iVar2 < 4)
			{
				func_960(Local_492[(9 + iParam0)], func_646(iVar1, iVar2));
				iVar2++;
			}
		}
		iVar1++;
	}
}

void func_679(int iParam0, int iParam1, int iParam2)
{
	if (is_entity_dead(*iParam0) || is_entity_dead(*iParam1))
	{
		return;
	}
	if (func_334(Local_492[(9 + iParam2)]))
	{
		func_961(iParam0, iParam1, iParam2);
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
		if (iVar428 == *iParam0 || iVar428 == *iParam1)
		{
			func_348(iParam2);
			iLocal_599[iParam2] = 8;
			return;
		}
		if (func_70(func_962(iParam2)))
		{
			if (!is_string_null_or_empty(&((Local_492[(9 + iParam2)])->f_1)) && func_763(Local_492[(9 + iParam2)]))
			{
				func_764(Local_492[(9 + iParam2)], 1, 1);
				StringCopy(&((Local_492[(9 + iParam2)])->f_1), "", 24);
			}
			if (!does_entity_exist(iVar0))
			{
				func_339(func_962(iParam2));
			}
		}
		else
		{
			if (does_entity_exist(iVar0))
			{
				func_71(func_962(iParam2));
			}
			if (func_70(func_962(iParam2)))
			{
				vVar2 = { func_963(iParam0, &(iLocal_489[iParam2]), bVar1) };
				if (!is_string_null_or_empty(&vVar2))
				{
					func_964(Local_492[(9 + iParam2)], &vVar2);
				}
			}
		}
	}
}

int func_680(int iParam0, int iParam1)
{
	iVar2 = func_602(iParam0);
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		iVar1 = func_335(iParam0, iVar0, iParam1);
		func_62(iVar1, 1, 1);
		iVar0++;
	}
	return iVar0;
}

Vector3 func_681(int iParam0)
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

Vector3 func_682(int iParam0)
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

void func_683(var uParam0, vector3 vParam1, vector3 vParam4)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return;
	}
	set_anim_scene_origin(*uParam0, vParam1, vParam4, 2);
}

void func_684(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return;
	}
	if (bParam3 && is_entity_dead(iParam1))
	{
		return;
	}
	if (!func_626(uParam0, sParam2))
	{
		return;
	}
	set_anim_scene_entity(*uParam0, sParam2, iParam1, 0);
}

void func_685(var uParam0, int iParam1, char* sParam2)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return;
	}
	if (!func_626(uParam0, sParam2))
	{
		return;
	}
	set_anim_scene_entity(*uParam0, sParam2, iParam1, 0);
}

void func_686(var uParam0)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return;
	}
	start_anim_scene(*uParam0);
}

bool func_687(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_438(iParam0, Global_36, 1);
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

bool func_688(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, bool bParam5, int iParam6)
{
	if (func_965(iParam0, iParam1, sParam2, iParam3, fParam4, bParam5, iParam6 == 0))
	{
		return true;
	}
	return false;
}

void func_689(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = func_335(iParam0, iParam1, iParam2);
	if (!bParam3)
	{
		func_77(iVar0, 1);
		func_966(1, &Local_614);
	}
}

void func_690()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_117(func_692(iVar0)))
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
	if (func_967(&iVar2, iVar1))
	{
		func_77(iVar1, 1);
		func_474(func_691(iVar0), 0);
		func_694(func_692(iVar0));
	}
}

int func_691(int iParam0)
{
	if ((!func_19(64) && func_5(Local_1617.f_136, 536870912)) && iParam0 == func_6())
	{
		iParam0 = 4;
	}
	else if ((iLocal_98 == 1 && iParam0 == 1) && func_19(262144))
	{
		iParam0 = 4;
	}
	return iParam0;
}

int func_692(int iParam0)
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

int func_693()
{
	return -1939316457;
}

void func_694(int iParam0)
{
	iLocal_102 = (iLocal_102 - (iLocal_102 && iParam0));
}

void func_695()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = func_691(iVar0);
		if (func_429(iVar1) && (!func_19(64) || iVar1 != 0))
		{
			func_968(iVar0);
		}
		iVar0++;
	}
}

int func_696(int iParam0)
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

void func_697(int iParam0)
{
	iVar0 = (810 + iParam0);
	iVar1 = func_63(iVar0);
	iVar2 = func_691(iParam0);
	if (func_969(iVar2, &iVar1))
	{
		if (func_826(iVar2))
		{
			bVar3 = true;
		}
		else if (get_state_of_rayfire_map_object(&(iLocal_466[iVar2])) == 4)
		{
		}
		else
		{
			func_468(iVar2);
			return;
		}
	}
	if (!does_rayfire_map_object_exist(&(iLocal_466[iVar2])))
	{
		func_468(iVar2);
		return;
	}
	if (func_970(iParam0, bVar3))
	{
		set_state_of_rayfire_map_object(&(iLocal_466[iVar2]), 6);
		if (!func_429(iVar2))
		{
			func_827(iVar2);
		}
		if (!(func_19(64) && iVar2 == 0))
		{
			func_116(iVar1, Global_35, "LOG_TIMBER", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			func_694(func_692(iParam0));
		}
		force_sonar_blips_this_frame();
		trigger_sonar_blip(348490638, func_437(iVar2));
		if (!((iLocal_98 == 1 && func_19(64)) && iParam0 == 0))
		{
			func_465(iVar2);
		}
		return;
	}
	bVar3 = false;
}

void func_698(int iParam0)
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

void func_699(int iParam0)
{
	if (iParam0 > 5)
	{
		return;
	}
	iVar0 = (810 + iParam0);
	if (!func_157(iVar0))
	{
		return;
	}
	iVar1 = func_63(iVar0);
	if (is_entity_dead(iVar1))
	{
		return;
	}
	iVar2 = func_691(iParam0);
	if (func_430(iVar2))
	{
		return;
	}
	if (func_429(iVar2))
	{
		return;
	}
	if (!_does_scenario_point_exist(&(uLocal_478[iVar2])))
	{
		return;
	}
	if (!func_131(iVar1, 1435919172))
	{
		_task_use_scenario_point(iVar1, &(uLocal_478[iVar2]), 0, -1, true, false, 0, false, -1f, false);
	}
}

void func_700(int iParam0, int iParam1)
{
	if (!does_entity_exist(*iParam0))
	{
		return;
	}
	if (!func_117(func_971(iParam1)))
	{
		if (_0x9337183fda2e9035(*iParam0, get_player_index()) || _0xa454d234e45bb6e5(*iParam0, get_player_index()))
		{
			func_35(func_971(iParam1));
		}
	}
	else if (!(_0x9337183fda2e9035(*iParam0, get_player_index()) || _0xa454d234e45bb6e5(*iParam0, get_player_index())))
	{
		fVar0 = func_383(vLocal_570[0]);
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
			func_223(vLocal_570[0], fVar0);
		}
		func_694(func_971(iParam1));
	}
}

bool func_701(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (!is_entity_dead(*iParam0) && !decor_exist_on(*iParam0, "bChopDown"))
	{
		if (_get_scenario_point_type_ped_is_using(*iParam0) != func_693())
		{
			return false;
		}
		if (!is_ped_active_in_scenario(*iParam0, 0))
		{
			return false;
		}
		bVar0 = func_19(524288);
		if (iParam3 == func_6() && func_5(Local_1617.f_136, 1073741824))
		{
			func_13(524288, bVar0);
			func_694(256);
			return true;
		}
		if (func_19(64) && !func_430(0))
		{
			return false;
		}
		if (func_117(func_971(iParam3)))
		{
			return false;
		}
		if (func_668(vLocal_570[0]))
		{
			fVar1 = func_383(vLocal_570[0]);
			if (func_117(256))
			{
				fVar2 = 90f;
			}
			else if (func_282(*iParam0, 1, 1) < 5f)
			{
				fVar2 = 7.5f;
			}
			else if (!func_972())
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
		if (func_5(Local_1617.f_136, 536870912) && iParam3 == func_6())
		{
			return false;
		}
		if (func_255(*iParam0, uParam1, iParam2, &bVar0, 1f, 45f, 0f, 0, 25f, 1))
		{
			func_13(524288, bVar0);
			func_694(256);
			return true;
		}
		func_13(524288, bVar0);
	}
	return false;
}

void func_702(int iParam0, int iParam1)
{
	if (func_254(*iParam0, 0, 1) && !decor_exist_on(*iParam0, "bChopDown"))
	{
		force_sonar_blips_this_frame();
		_trigger_sonar_blip_2(1515458263, *iParam0);
		if (!(func_19(64) && iParam1 == 0))
		{
			func_116(*iParam0, Global_35, func_973(), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		iVar0 = func_691(iParam1);
		func_974(iParam1);
		iLocal_75[2] = _create_volume_box_with_custom_name(func_436(iVar0), func_975(iVar0), 5f, 30f, 5f, "volTreeFall");
		_0xb56d41a694e42e86(&(iLocal_75[2]), 534496, 0, 0, -1, -1, 2);
		func_976(iVar0);
		_0xb56d41a694e42e86(&(iLocal_75[2]), 0, 0, 0, -1, -1, 2);
		decor_set_bool(*iParam0, "bChopDown", true);
		set_ped_config_flag(*iParam0, 178, false);
		set_ped_config_flag(*iParam0, 389, true);
		vVar1 = { get_entity_coords(*iParam0, true, false) };
	}
}

void func_703()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = (810 + iVar0);
		func_977(iVar1);
		iVar0++;
	}
}

void func_704(int iParam0)
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

void func_705()
{
	bVar1 = true;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!func_430(iVar0))
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

void func_706(int iParam0, bool bParam1)
{
	func_762(iParam0, 0, bParam1);
	func_762(iParam0, 1, bParam1);
	func_762(iParam0, 2, bParam1);
}

bool func_707()
{
	return (Global_1935689->f_1 || &Global_1935689 == 1);
}

bool func_708()
{
	return Global_1935689->f_1;
}

bool func_709()
{
	return &Global_1357517;
}

char* func_710()
{
	return "INSULT_RESPONSE";
}

char* func_711()
{
	StringCopy(&cVar4, "INSULT_MALE_CONV", 32);
	StringConCat(&cVar4, "_PART", 32);
	_int_to_string(1, "%d", &cVar0);
	StringConCat(&cVar4, &cVar0, 32);
	return func_673(cVar4);
}

void func_712()
{
	if (is_entity_dead(Local_614.f_690[12]->f_8))
	{
		return;
	}
	if (!_0xb6cbd40f8ea69e8a(Local_614.f_690[13]->f_8))
	{
		return;
	}
	if (!func_70(8192))
	{
		if (has_anim_event_fired(Local_614.f_690[13]->f_8, 1656474583) && !has_anim_event_fired(Local_614.f_690[13]->f_8, -1064143891))
		{
			if (!is_entity_playing_anim(Local_614.f_690[12]->f_8, "pickup_steamd", "props_misc@appleseed_loader", 1))
			{
				play_entity_anim(Local_614.f_690[12]->f_8, "pickup_steamd", "props_misc@appleseed_loader", 8f, false, false, false, 0f, 1);
			}
			func_71(8192);
			set_anim_rate(Local_614.f_690[12]->f_8, 1f, 0, false);
		}
	}
	else if (!has_anim_event_fired(Local_614.f_690[13]->f_8, 1656474583) || has_anim_event_fired(Local_614.f_690[13]->f_8, -1064143891))
	{
		func_339(8192);
		set_anim_rate(Local_614.f_690[12]->f_8, 0f, 0, false);
	}
}

void func_713(int* iParam0)
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

bool func_714(var uParam0, char* sParam1)
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

void func_715(var uParam0, char* sParam1)
{
	func_928(uParam0, sParam1, 0);
}

void func_716(int iParam0, int iParam1)
{
	func_978(iParam0, 0);
	func_978(iParam1, 1);
}

int func_717(int iParam0, int iParam1, int iParam2, vector3 vParam3, float fParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, bool bParam12, float fParam13, bool bParam14, bool bParam15)
{
	if (fParam13 <= 0f)
	{
		iVar0 = _create_volume_sphere(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	}
	else
	{
		iVar0 = _create_volume_cylinder(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam13);
	}
	iVar1 = func_285(iParam0, iParam1, iParam2, iVar0, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12, bParam14, bParam15);
	func_111(iVar0);
	return iVar1;
}

bool func_718(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
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
				if (func_979(uParam0, iParam1[uParam0->f_25], uParam2))
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
						if (!is_entity_dead(uParam0->f_31) && func_958(uParam0->f_31, Global_35, 0, uParam0->f_32, 0))
						{
							func_980(&(uParam0->f_18));
							vVar1 = { get_entity_coords(uParam0->f_31, true, false) };
							if (!&uParam0->f_7[uParam0->f_24])
							{
								task_look_at_entity(uParam0->f_31, Global_35, 7500, 48, 41, 0);
								if (func_376(uParam0->f_34, 8))
								{
									_0xe7fa07624574b79a(uParam0->f_31, Global_35, 2, 1, 100f, 1, 0, 0, 0);
									func_145(&(uParam0->f_34), 16);
								}
								else if (!func_376(uParam0->f_34, 4) && !_0x84d0bf2b21862059(uParam0->f_31))
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
										if (func_438(uParam0->f_31, Global_36, 0) > 12f)
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
							func_980(&(uParam0->f_18));
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
						if (func_376(uParam0->f_34, 1))
						{
							func_110(0);
						}
						func_759(&(uParam0->f_31), 2000, Global_35, 0, 0, 0, 0, 1);
						if ((!func_981() && !is_string_null_or_empty(&(uParam0->f_2[uParam0->f_23]))) && func_256(0, 1, uParam0->f_31, 1))
						{
							if (func_376(uParam0->f_34, 2))
							{
							}
							else
							{
								if (bParam4 && uParam0->f_23 == 0)
								{
									uParam0->f_23++;
								}
								func_116(uParam0->f_31, Global_35, &(uParam0->f_2[uParam0->f_23]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							uParam0->f_23++;
							uParam0->f_17 = 3;
							func_48(&(uParam0->f_27));
							return true;
						}
						Jump @1215; //curOff = 1078
						if ((func_376(uParam0->f_34, 16) && !is_entity_dead(uParam0->f_31)) && !is_any_speech_playing(uParam0->f_31))
						{
							_0x541e5b41dca45828(uParam0->f_31, 1, 0);
							func_201(&(uParam0->f_34), 16);
						}
						if (func_393(&(uParam0->f_27), uParam0->f_33))
						{
							iVar4 = func_360(uParam0->f_31, 0);
							if ((bParam3 && iVar4 != -1) && func_266(iVar4, 0))
							{
								func_267(iVar4, 0, 1, 0, 0);
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

bool func_719()
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

Vector3 func_720()
{
	return -1402.82f, -270.8668f, 98.5585f;
}

void func_721()
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
			if (func_503(iVar3))
			{
				destroy_itemset(iVar0);
				return;
			}
			iVar2++;
		}
		func_58(8388608);
		func_174();
		destroy_itemset(iVar0);
	}
}

void func_722()
{
	if (does_entity_exist(Local_614.f_690[5]->f_8))
	{
		if (!_0x083d497d57b7400f(Local_614.f_690[5]->f_8))
		{
			if (!func_51(65536))
			{
				freeze_entity_position(Local_614.f_690[5]->f_8, true);
			}
		}
		else if (func_51(65536))
		{
			freeze_entity_position(Local_614.f_690[5]->f_8, false);
			activate_physics(Local_614.f_690[5]->f_8);
		}
	}
}

void func_723()
{
	if (!func_51(16777216))
	{
		if (func_982())
		{
			if (!is_string_null_or_empty(&cLocal_462))
			{
				func_983(&cLocal_462, 7500, 0, 1, 0, 0, -1, -1, 0);
			}
			func_984(iVar2014, 0);
			func_58(16777216);
		}
	}
	else if (!func_982())
	{
		func_984(iVar2014, 1);
		func_203();
		func_50(16777216);
	}
}

void func_724()
{
	if (iVar1918 >= 2 && (iVar1918 < 5 || func_19(512)))
	{
		if (!func_19(512))
		{
			func_985();
		}
		if (func_215(Global_35, &(iLocal_75[4]), 1, 0))
		{
			func_986(0);
			if (!func_70(512))
			{
				func_988(512, func_987(Global_35, &uLocal_606, func_65(), &(iLocal_75[4]), 1097859072, 2, 1, 129, 0, 0, 1071644672));
				if (does_entity_exist(iVar604))
				{
					set_ped_config_flag(iVar604, 136, true);
				}
			}
		}
		else
		{
			func_108(0);
		}
	}
}

void func_725(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)
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
	func_989(&uVar0, 0, (iVar6 - 1), 1, 1, 1, 1);
}

void func_726(int iParam0, bool bParam1)
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

void func_727(int iParam0, bool bParam1)
{
	func_990(&iParam0, !bParam1);
	set_blocking_of_non_temporary_events(iParam0, bParam1);
	stop_ped_speaking(iParam0, bParam1);
}

int func_728(var uParam0, char* sParam1)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return 0;
	}
	return _0xdf7b5144e25cd3fe(*uParam0, sParam1);
}

int func_729(char[4] cParam0, char* sParam1, int iParam2)
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
	else if (func_672(cParam0, cVar0, iVar3, iParam2, 1, 0))
	{
		return 1;
	}
	return 0;
}

char* func_730()
{
	return "desk_loop_book";
}

char* func_731()
{
	return "script_proc@event_area@appleseed@foreman_stage2";
}

bool func_732(int iParam0, int iParam1)
{
	if (!func_51(8388608))
	{
		return false;
	}
	if (func_19(4096))
	{
		return false;
	}
	if (!func_254(*iParam0, 0, 1))
	{
		return false;
	}
	if (!func_334(Local_492[2]))
	{
		return false;
	}
	if (func_521(func_437(iParam1), 1) > 63f)
	{
		return false;
	}
	if ((get_frame_count() % 3) == 0)
	{
		if (func_468(iParam1))
		{
			return true;
		}
	}
	else if (func_826(iParam1))
	{
		return true;
	}
	return false;
}

Vector3 func_733(int iParam0, float fParam1)
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
	func_991(vVar6);
	vVar6 = { FtoV((get_entity_speed(iParam0) * fParam1)) * vVar6 };
	vVar3 = { vVar0 + vVar6 };
	return vVar3;
}

int func_734(float fParam0, int iParam1, bool bParam2, int iParam3)
{
	if (Global_1935630->f_12)
	{
		return 1;
	}
	if (!_0x50f124e6ef188b22(Global_35))
	{
		return 1;
	}
	fVar0 = func_992();
	if (fVar0 <= fParam0)
	{
		return 1;
	}
	if (bParam2)
	{
		if (fParam0 < 0.5f)
		{
			func_993(0);
		}
		else
		{
			func_993(1);
		}
		return 1;
	}
	if (fParam0 < 0.5f)
	{
		func_993(0);
	}
	else
	{
		func_993(1);
	}
	return 0;
}

void func_735(var uParam0)
{
	if (!func_668(uParam0))
	{
	}
	if (func_669(uParam0))
	{
		uParam0->f_1 = (func_479() - uParam0->f_2);
		uParam0->f_2 = 0f;
		func_481(uParam0, 2);
	}
}

void func_736(var uParam0)
{
	if (!func_668(uParam0))
	{
	}
	if (!func_669(uParam0))
	{
		uParam0->f_2 = (func_479() - uParam0->f_1);
		func_480(uParam0, 2);
	}
}

void func_737()
{
	func_42(Local_1617.f_136, 64);
	func_10(Local_1617.f_136, 512);
}

bool func_738(int iParam0)
{
	if (_does_volume_exist(&(iLocal_75[iParam0])))
	{
		return _0xf256a75210c5c0eb(&(iLocal_75[iParam0]), Global_36);
	}
	return false;
}

void func_739(var uParam0, var uParam1)
{
	if (func_215(Global_35, &(iLocal_75[17]), 1, 0))
	{
		if (func_310(*uParam0) && func_994(*uParam0, 0))
		{
			func_810(*uParam0, 0, 1);
		}
		if (func_310(*uParam1) && func_994(*uParam1, 0))
		{
			func_810(*uParam1, 0, 1);
		}
	}
	else if (Global_36.f_1 < func_744())
	{
		if (!does_blip_exist(iVar2012))
		{
			func_995(func_740(), &iLocal_2016, 1631143573, 0, "LOG_BLIP_TRUNK", 0);
		}
		if (func_310(*uParam0) && !func_994(*uParam0, 0))
		{
			func_810(*uParam0, 1, 1);
			set_blip_coords(iVar2012, func_740());
		}
		if (func_310(*uParam1) && func_994(*uParam1, 0))
		{
			func_810(*uParam1, 0, 1);
		}
	}
	else
	{
		if (func_310(*uParam0) && func_994(*uParam0, 0))
		{
			func_810(*uParam0, 0, 1);
		}
		if (!does_blip_exist(iVar2012))
		{
			func_995(func_742(), &iLocal_2016, 1631143573, 0, "LOG_BLIP_TRUNK", 0);
		}
		if (func_310(*uParam1) && !func_994(*uParam1, 0))
		{
			func_810(*uParam1, 1, 1);
			set_blip_coords(iVar2012, func_742());
		}
	}
}

Vector3 func_740()
{
	return -1391.3f, -271.25f, 98.57f;
}

bool func_741(var uParam0, char* sParam1, vector3 vParam2, int iParam5, int iParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15, bool bParam16, bool bParam17, int iParam18, bool bParam19)
{
	if (!func_310(*uParam0))
	{
		iVar0 = 0;
		if (bParam17)
		{
			iVar0 = 5;
		}
		if (!is_entity_dead(iParam5))
		{
			*uParam0 = func_996(sParam1, iParam6, iParam5, iParam10, fParam9, 0, iParam15, iVar0, 1070386381, 570, 4000, 10, 1073741824, 0, iParam18, 0, 0);
			func_997(*uParam0, fParam7, 1);
		}
		else if (iParam13 != 0)
		{
			*uParam0 = func_998(sParam1, iParam6, iParam13, iParam10, fParam9, iParam15, iVar0, 570, 4000, 10, 1073741824, 0, iParam18, 0);
		}
		else
		{
			if (func_243(vParam2))
			{
				return false;
			}
			*uParam0 = func_999(sParam1, iParam6, vParam2, fParam7, iParam10, fParam9, iParam15, iVar0, 570, 4000, 10, 1073741824, 0, iParam18, 0);
		}
		if (fParam8 != 0f)
		{
			func_947(*uParam0, sParam1, ceil(absf(fParam8)), 1);
			if (ceil(absf(fParam8)) > func_1000(1))
			{
				func_810(*uParam0, 0, 1);
			}
		}
		if (!is_string_null_or_empty(sParam11))
		{
		}
		if (bParam19)
		{
			func_1001(*uParam0, 0, 1);
		}
		return false;
	}
	if (!bParam16)
	{
		if (func_994(*uParam0, 0))
		{
			if (_is_ped_carrying(Global_35))
			{
				func_810(*uParam0, 0, 1);
			}
		}
		else if (!_is_ped_carrying(Global_35))
		{
			func_810(*uParam0, 1, 1);
		}
	}
	if (fParam8 != 0f)
	{
		if (ceil(absf(fParam8)) > func_1000(1))
		{
			func_810(*uParam0, 0, 1);
		}
	}
	if (bParam12)
	{
		if (does_entity_exist(iParam5) && is_entity_dead(iParam5))
		{
			if (func_310(*uParam0))
			{
				func_311(uParam0, 1, 1);
				return false;
			}
		}
	}
	if ((!bParam17 && func_1002(*uParam0, 1)) || (bParam17 && func_753(*uParam0, 1)))
	{
		if (!bParam14)
		{
			if (fParam8 < 0f)
			{
				func_766(ceil(absf(fParam8)), 0, 0, 1, 1);
			}
			else if (fParam8 > 0f)
			{
				func_1003(ceil(absf(fParam8)), 0, 1065353216, 1, 0, 0, 1, 752097756);
			}
		}
		func_311(uParam0, 1, 1);
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
	while (iVar0 < iVar2144)
	{
		iVar1 = func_63(&(iLocal_2130[iVar0]));
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
	func_268(&(uParam0->f_5));
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
	vVar0 = { func_1004(uParam0, sParam1, sParam2) };
	if (!func_243(vVar0))
	{
		return vVar0.z;
	}
	return 40000f;
}

bool func_748(var uParam0, int iParam1)
{
	if (!is_entity_dead(uParam0->f_1) && !func_376(uParam0->f_23, 4))
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
					if (func_376(uParam0->f_23, 2048))
					{
						_display_hud_component(724769646);
					}
				}
				if (uParam0->f_24 == 0)
				{
					_set_ped_crouch_movement(Global_35, false, 0, false);
				}
				if (!func_376(uParam0->f_23, 4))
				{
					clear_ped_secondary_task(uParam0->f_1);
				}
				if (!func_376(uParam0->f_23, 2))
				{
					uParam0->f_2 = _get_last_mount(uParam0->f_1);
					if (!is_entity_dead(uParam0->f_2) && func_382(uParam0->f_1))
					{
						func_1005(uParam0->f_1);
						iVar0 = func_929(uParam0->f_1, uParam0->f_8, 1f);
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
						iVar3 = func_929(uParam0->f_1, uParam0->f_8, 1f);
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
						func_145(&(uParam0->f_23), 2);
					}
				}
				if (func_243(uParam0->f_14))
				{
					uParam0->f_14 = { uParam0->f_8 };
				}
				func_1006(uParam0, 1, iParam1);
			}
			else
			{
				func_1006(uParam0, 6, iParam1);
			}
			break;
		case 1:
			if (func_1007(uParam0, iParam1))
			{
				func_48(&(uParam0->f_5));
				if (!func_1008(uParam0, iParam1))
				{
					func_1009();
				}
				func_1006(uParam0, 2, iParam1);
			}
			break;
		case 2:
			if (func_1008(uParam0, iParam1))
			{
				func_48(&(uParam0->f_5));
				if (!func_376(uParam0->f_23, 4))
				{
					set_current_ped_weapon(uParam0->f_1, -1569615261, false, 0, false, false);
					set_current_ped_weapon(uParam0->f_1, -1569615261, false, 1, false, false);
					task_swap_weapon(uParam0->f_1, 1, func_376(uParam0->f_23, 512), 0, 0);
				}
				func_1006(uParam0, 3, iParam1);
			}
			break;
		case 3:
			if (func_1010(uParam0, iParam1))
			{
				func_48(&(uParam0->f_5));
				if (!_is_ped_carrying(uParam0->f_1))
				{
					func_145(&(uParam0->f_23), 256);
				}
				if (func_376(uParam0->f_23, 4096) && !_is_ped_carrying(uParam0->f_1))
				{
					func_145(&(uParam0->f_23), 256);
					iVar6 = _get_last_mount(uParam0->f_1);
					if (func_366(iVar6, uParam0->f_1, 1, 1) < 5f)
					{
						iVar5 = func_1011(iVar6);
						task_pickup_carriable_entity(uParam0->f_1, iVar5);
					}
				}
				else if (!func_376(uParam0->f_23, 256))
				{
					iVar5 = _get_first_entity_ped_is_carrying(uParam0->f_1);
					task_place_carried_entity_at_coord(uParam0->f_1, iVar5, uParam0->f_14, uParam0->f_21, uParam0->f_4);
				}
				func_1006(uParam0, 4, iParam1);
			}
			break;
		case 4:
			if (func_1012(uParam0, iParam1))
			{
				func_48(&(uParam0->f_5));
				if (func_376(uParam0->f_23, 8192))
				{
					if (func_376(uParam0->f_23, 1024))
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
					if (!func_243(uParam0->f_11))
					{
					}
					iVar8 = 0;
					if (!func_376(uParam0->f_23, 1024))
					{
						iVar8 |= 1;
					}
					open_sequence_task(&iVar9);
					if (!func_243(uParam0->f_11))
					{
						if (func_376(uParam0->f_23, 16))
						{
							task_go_straight_to_coord(0, uParam0->f_11, uParam0->f_21, func_59(!func_376(uParam0->f_23, 128), 20000, -1), uParam0->f_19, uParam0->f_17, 0);
						}
						else
						{
							task_follow_nav_mesh_to_coord(0, uParam0->f_11, uParam0->f_21, func_59(!func_376(uParam0->f_23, 128), 20000, -1), uParam0->f_17, iVar8, uParam0->f_19);
						}
					}
					if (func_376(uParam0->f_23, 16))
					{
						task_go_straight_to_coord(0, uParam0->f_8, uParam0->f_21, func_59(!func_376(uParam0->f_23, 128), 20000, -1), uParam0->f_19, uParam0->f_17, 0);
					}
					else
					{
						task_follow_nav_mesh_to_coord(0, uParam0->f_8, uParam0->f_21, func_59(!func_376(uParam0->f_23, 128), 20000, -1), uParam0->f_17, iVar8, uParam0->f_19);
					}
					if (func_376(uParam0->f_23, 1))
					{
						task_achieve_heading(0, uParam0->f_19, 0);
					}
					func_1013(uParam0->f_1, &iVar9, 0, 0, 1, 1);
				}
				func_1006(uParam0, 5, iParam1);
			}
			break;
		case 5:
			if (func_376(uParam0->f_23, 8192))
			{
				if (_0x337f1cc8ee895601(uParam0->f_25, &(uParam0->f_30)))
				{
					iVar10 = 1;
				}
			}
			else if (!func_376(uParam0->f_23, 1))
			{
				uParam0->f_19 = get_entity_heading(uParam0->f_1);
			}
			if (!func_376(uParam0->f_23, 128) && func_224(&(uParam0->f_5), 15f))
			{
				iVar10 = 1;
			}
			if (!func_376(uParam0->f_23, 8192))
			{
				if (get_script_task_status(uParam0->f_1, 242628503, true) == 8)
				{
					iVar10 = 1;
				}
				if ((func_243(uParam0->f_11) || !func_131(uParam0->f_1, 242628503)) || get_sequence_progress(uParam0->f_1) > 0)
				{
					iVar11 = 1;
				}
				if (func_1014(uParam0->f_1, uParam0->f_8, uParam0->f_19, uParam0->f_18, uParam0->f_20, func_376(uParam0->f_23, 8)) && (!func_376(uParam0->f_23, 64) || absf(func_1015(uParam0->f_1, uParam0->f_8)) < uParam0->f_22))
				{
					iVar12 = 1;
				}
			}
			if ((iVar11 && iVar12) || iVar10)
			{
				if (func_376(uParam0->f_23, 32))
				{
					task_turn_ped_to_face_coord(uParam0->f_1, uParam0->f_8, 0);
				}
				func_268(&(uParam0->f_5));
				func_1006(uParam0, 6, iParam1);
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
		if (func_1016(iVar0, 2))
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
		func_1017(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216, 0, 0, 0, bParam10, bParam11);
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
	if (bParam1 && !func_310(iParam0))
	{
		return false;
	}
	iVar0 = func_604(iParam0);
	return _uiprompt_has_mash_mode_failed((*Global_1945938)[iVar0]->f_3);
}

void func_752(int iParam0, bool bParam1)
{
	if (bParam1 && !func_310(iParam0))
	{
		return;
	}
	iVar0 = func_604(iParam0);
	_uiprompt_restart_modes((*Global_1945938)[iVar0]->f_3);
}

bool func_753(int iParam0, bool bParam1)
{
	if (bParam1 && !func_310(iParam0))
	{
		return false;
	}
	iVar0 = func_604(iParam0);
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
	if (!is_entity_dead(func_63(&(iLocal_2130[*iParam0]))))
	{
		iVar0 = func_63(&(iLocal_2130[*iParam0]));
	}
	else
	{
		return;
	}
	_0x935cf6e42baf7f4d(iVar0);
	func_1018(&iVar0, 0);
	if (is_ped_using_any_scenario(iVar0))
	{
		_0x541e5b41dca45828(iVar0, 1, 0);
	}
	else
	{
		clear_ped_tasks(iVar0, 1, 0);
		if (func_1019(&(iLocal_2130[*iParam0])))
		{
			func_977(&(iLocal_2130[*iParam0]));
		}
		else
		{
			func_267(&(iLocal_2130[*iParam0]), 0, 1, 0, 0);
			set_ped_config_flag(iVar0, 178, true);
			set_ped_config_flag(iVar0, 130, false);
		}
	}
	func_245(iVar0, 1, 1);
}

void func_756(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_1020(iParam0, 0, func_660(7));
	(*Local_275[iParam0])[0]->f_14 = 0;
	func_952((*Local_275[iParam0])[0], 1);
	func_762(iParam0, 0, !func_51(1073741824));
	func_1020(iParam0, 1, func_660(10));
	func_762(iParam0, 1, bParam2);
	func_762(iParam0, 2, bParam1);
	func_1021(iParam0, 2, !bParam1);
	if (iParam0 == 0)
	{
		func_58(268435456);
	}
	else if (iParam0 == 1)
	{
		func_71(524288);
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
	func_1020(iParam0, 0, func_660(7));
	(*Local_275[iParam0])[0]->f_14 = 0;
	func_952((*Local_275[iParam0])[0], 1);
	func_762(iParam0, 0, 0);
	func_1020(iParam0, 1, func_660(10));
	func_762(iParam0, 1, 1);
	func_762(iParam0, 2, bParam1);
	func_1021(iParam0, 2, !bParam1);
	if (iParam0 == 0)
	{
		func_58(268435456);
	}
	else if (iParam0 == 1)
	{
		func_71(524288);
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
		func_487(&(Var0.f_5), 1);
	}
	Var0.f_13 = 0;
	Var0.f_7 = iParam1;
	func_1022(&(Var0.f_5), 1);
	if (!is_entity_dead(*iParam0))
	{
		_0x66f9eb44342bb4c5(*iParam0, &Var0);
	}
}

void func_760(int* iParam0)
{
	if (!func_1023((*Local_275[1])[1], 0, 0))
	{
		if ((func_256(0, 1, *iParam0, 1) && !func_389("LCMPF_IG_TFRSH")) && !func_389("LCMPF_IG_TFRSN"))
		{
			func_1024(1, 0);
		}
	}
	else if (func_1023((*Local_275[1])[0], 0, 0))
	{
		if (!func_215(Global_35, &(iLocal_75[19]), 1, 0))
		{
			func_762(1, 0, 0);
		}
	}
	else if (func_215(Global_35, &(iLocal_75[19]), 1, 1))
	{
		func_762(1, 0, 1);
	}
}

void func_761(var uParam0, var uParam1, int* iParam2)
{
	vVar0 = { func_746(Local_492[2], "player", "PB_HANDOVER_L") };
	fVar9 = func_747(Local_492[2], "player", "PB_HANDOVER_L");
	vVar3 = { func_746(Local_492[2], "player", "PB_HANDOVER_R") };
	fVar10 = func_747(Local_492[2], "player", "PB_HANDOVER_R");
	vVar6 = { func_746(Local_492[2], "player", "PB_HANDOVER_N") };
	fVar11 = func_747(Local_492[2], "player", "PB_HANDOVER_N");
	fVar12 = func_521(vVar0, 1);
	fVar13 = func_521(vVar3, 1);
	fVar14 = func_521(vVar6, 1);
	if (fVar13 <= fVar14 && fVar13 <= fVar12)
	{
		*uParam0 = { vVar3 };
		*uParam1 = fVar10;
		func_964(Local_492[2], "PB_HANDOVER_R");
	}
	else if (fVar12 <= fVar13 && fVar12 <= fVar14)
	{
		*uParam0 = { vVar0 };
		*uParam1 = fVar9;
		func_964(Local_492[2], "PB_HANDOVER_L");
	}
	else
	{
		*uParam0 = { vVar6 };
		*uParam1 = fVar11;
		func_964(Local_492[2], "PB_HANDOVER_N");
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
	func_662((*Local_275[iParam0])[iParam1], bParam2, 0);
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
	if (func_927(uParam0, &(uParam0->f_1)))
	{
		func_642(uParam0, &(uParam0->f_1), bParam2);
		if (bParam1)
		{
			func_643(uParam0, &(uParam0->f_4));
		}
	}
}

void func_765(var uParam0)
{
	func_715(uParam0, &(uParam0->f_4));
}

void func_766(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_1025(iParam0);
	if (bParam3)
	{
		func_1026(iParam0, sParam1, iParam2);
	}
}

bool func_767(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0) && is_entity_a_ped(iParam0))
	{
		iVar0 = func_1027(iParam0);
		return func_1028(iParam0, 2084597891, iParam1, iVar0);
	}
	return decor_set_int(iParam0, "loot_money", iParam1);
}

char[] func_768(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			switch (iVar2246)
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
			switch (iVar2246)
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
	return !func_256(fParam0, 1, 0, 0);
}

void func_772(char* sParam0, bool bParam1)
{
	StringCopy(&cLocal_462, sParam0, 32);
	if (bParam1)
	{
		if (!is_string_null_or_empty(&cLocal_462))
		{
			func_983(&cLocal_462, 7500, 0, 1, 0, 0, -1, -1, 0);
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
	if (bVar0 && func_215(*iParam0, &(iLocal_75[0]), 1, 0))
	{
		if (func_215(Global_35, &(iLocal_75[0]), 1, 0))
		{
			return true;
		}
	}
	else if (func_366(Global_35, *iParam0, 1, 1) < func_1029(bParam1, 18f, 12.5f) && (!bParam2 || is_ped_facing_ped(*iParam0, Global_35, 165f)))
	{
		return true;
	}
	return false;
}

int func_774(var uParam0)
{
	if (!func_668(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_669(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_585() - round((uParam0->f_1 * 1000f)));
}

void func_775(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_1020(iParam0, 0, "LOG_CTXTBUY");
	(*Local_275[0])[0]->f_14 = func_778();
	func_951((*Local_275[iParam0])[0], 1);
	func_947((*Local_275[iParam0])[0]->f_6, "LOG_CTXTBUY", (*Local_275[iParam0])[0]->f_14, 0);
	func_762(iParam0, 0, 1);
	func_1020(iParam0, 1, func_660(1));
	func_762(iParam0, 1, 1);
	func_762(iParam0, 2, 0);
	func_1021(iParam0, 2, 1);
	func_58(268435456);
	func_339(536870912);
}

void func_776(int iParam0)
{
	if (!func_140(iParam0->f_136))
	{
		return;
	}
	func_42(iParam0->f_136, 128);
	func_10(iParam0->f_136, 65536);
	func_43(iParam0, 128);
	func_1030(30, 0, 1);
}

Vector3 func_777()
{
	return -1398.998f, -208.266f, 101.8822f;
}

int func_778()
{
	if (func_9(1, 2) && iLocal_98 > 1)
	{
		iVar0 = func_1031(1795814421);
	}
	else if (iLocal_98 == 1)
	{
		iVar0 = func_1031(1121724679);
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
	if (!func_668(&(uParam1->f_133)))
	{
		func_48(&(uParam1->f_133));
	}
	else if (func_774(&(uParam1->f_133)) > iParam2)
	{
		func_268(&(uParam1->f_133));
		if (func_266(iParam0, 0))
		{
			func_77(iParam0, bParam3);
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
		vVar1 = { func_1032(iVar0) };
		func_1033(&vVar1, 0);
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
	switch (iVar595)
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
	switch (iVar595)
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
	if (func_1034(*iParam0, iParam1, fParam2, iParam3, sParam4, bParam5, 106) && (iParam6 == 0 || has_anim_event_fired(*iParam0, iParam6)))
	{
		return true;
	}
	return false;
}

char* func_796(bool bParam0)
{
	if (iVar594 == 2)
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
	else if (iVar594 == 3)
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
	if (func_839(1))
	{
		return false;
	}
	if (!func_256(-3.5f, 1, *iParam0, 1))
	{
		return false;
	}
	return true;
}

int func_798(int iParam0)
{
	switch (iVar594)
	{
		case 2:
		case 3:
			return 277874648;
		case 0:
		case 1:
			vVar1 = { func_733(Global_35, 2f) };
			iVar0 = func_929(*iParam0, vVar1, 1060437492);
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
	func_487(&(Var0.f_5), 1);
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
		if (!func_266(Local_1617.f_138, 0))
		{
			func_62(Local_1617.f_138, 1, 1);
		}
		if (!func_70(2097152))
		{
			func_71(2097152);
			_0xaab050da48b57978(*iParam0, "Default_Angry", Global_35, -1, 4);
			if (iLocal_103 == 3)
			{
				func_71(1048576);
			}
		}
		if (func_668(vLocal_570[3]))
		{
			func_268(vLocal_570[3]);
		}
		if (func_256(-3.5f, 1, 0, 0) && !func_668(vLocal_570[5]))
		{
			func_48(vLocal_570[5]);
		}
		if (func_224(vLocal_570[5], 10f))
		{
			func_387(&(Local_1617.f_35), func_1035(), *iParam0, Global_35, 0, 0, 1, 1);
			clear_ped_tasks(*iParam0, 1, 0);
			switch (iLocal_103)
			{
				case 1:
					open_sequence_task(&iLocal_196);
					task_confront(0, Global_35, 2);
					task_turn_ped_to_face_entity(0, Global_35, 5000, -1082130432, -1082130432, -1082130432);
					close_sequence_task(iLocal_196);
					_task_perform_sequence_2(*iParam0, iLocal_196, 2f, 7.5f);
					clear_sequence_task(&iLocal_196);
					Local_104 = 0;
					break;
				case 2:
					iVar0 = func_120(268435456, 1056964608, 1065353216);
					_give_weapon_to_ped_2(*iParam0, iVar0, 99, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
					set_current_ped_weapon(*iParam0, iVar0, false, 0, false, false);
					open_sequence_task(&iLocal_196);
					task_swap_weapon(0, 1, 0, 0, 0);
					task_aim_gun_at_entity(0, Global_35, -1, 0, 1);
					close_sequence_task(iLocal_196);
					task_perform_sequence(*iParam0, iLocal_196);
					clear_sequence_task(&iLocal_196);
					Local_104 = 0;
					break;
				case 3:
					func_71(1048576);
					break;
			}
			iLocal_103++;
		}
	}
	else
	{
		if (func_668(vLocal_570[5]))
		{
			func_268(vLocal_570[5]);
		}
		if (func_70(2097152))
		{
			if (!func_668(vLocal_570[3]))
			{
				func_48(vLocal_570[3]);
			}
			if (func_224(vLocal_570[3], 15f))
			{
				if (iLocal_103 == 3)
				{
					clear_ped_tasks(*iParam0, 1, 0);
					_0x935cf6e42baf7f4d(*iParam0);
					func_77(Local_1617.f_138, 1);
					func_78(Local_211[0], 0);
				}
				func_339(2097152);
			}
		}
	}
	if (func_70(2097152))
	{
		if (!func_131(*iParam0, 242628503))
		{
			func_1036(&Local_104, 0);
		}
	}
}

void func_801()
{
}

bool func_802(int iParam0)
{
	return true;
}

int func_803()
{
	return 0;
}

int func_804(int iParam0)
{
	if (!func_70(4096))
	{
		func_988(4096, _request_scenario_type(func_262(), 15, func_247(Local_1617.f_138), func_1037()));
	}
	return 1;
}

void func_805(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_1020(iParam0, 0, func_660(7));
	(*Local_275[iParam0])[0]->f_14 = 0;
	func_952((*Local_275[iParam0])[0], 1);
	func_762(iParam0, 0, 1);
	func_1020(iParam0, 1, func_660(10));
	func_762(iParam0, 1, 0);
	func_762(iParam0, 2, 0);
	func_1021(iParam0, 2, 1);
	func_58(268435456);
}

bool func_806(int iParam0)
{
	return true;
}

void func_807()
{
	disable_control_action(0, 1287709438, false);
	disable_control_action(0, 1499911466, false);
	disable_control_action(0, -209515122, false);
}

void func_808(int iParam0, int iParam1)
{
	if (!func_609(iParam0))
	{
		return;
	}
	iVar0 = func_1038(iParam1);
	if (iVar0 == 0)
	{
		return;
	}
	func_201(&(Global_1914319->f_3[iParam0]->f_8), iVar0);
}

bool func_809(int iParam0)
{
	if (func_911(iParam0) == 4 && func_1039(iParam0, -1162387149))
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
					iVar1 = func_1040(iVar0);
					if (func_1041(iVar1, iParam0))
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
	return func_1039(iParam0, 1084182731);
}

void func_810(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_310(iParam0))
	{
		return;
	}
	iVar0 = func_604(iParam0);
	if (bParam1)
	{
		func_1042(iParam0, 4);
		func_1043(iVar0, 1);
		func_1044(iVar0, 1);
	}
	else
	{
		func_1045(iParam0, 4);
		func_1044(iVar0, 0);
	}
}

bool func_811(int iParam0)
{
	if (!func_609(iParam0))
	{
		return false;
	}
	return func_1046(iParam0, 8388608);
}

void func_812(int iParam0, int iParam1)
{
	if (!func_609(iParam0))
	{
		return;
	}
	Global_1914319->f_3[iParam0]->f_7 = (Global_1914319->f_3[iParam0]->f_7 || iParam1);
}

void func_813(int iParam0)
{
	if (iParam0 >= 25 || iParam0 <= -1)
	{
		return;
	}
	Global_20710[iParam0]->f_1 = 0;
}

void func_814(int iParam0, int iParam1)
{
	if (!func_609(iParam0))
	{
		return;
	}
	iVar0 = func_1038(iParam1);
	if (iVar0 == 0)
	{
		return;
	}
	func_145(&(Global_1914319->f_3[iParam0]->f_8), iVar0);
}

Vector3 func_815(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	vVar3 = { _0x3e2a25b2416dd67e(iParam0) };
	fVar6 = (func_457(vVar3.x, func_457(vVar3.y, vVar3.z)) / 2f);
	iVar7 = 0;
	while (iVar7 < iParam1)
	{
		if (!bParam2)
		{
			vVar8 = { func_1047(vVar0, fVar6) };
		}
		else
		{
			vVar8 = { func_1048(vVar0, fVar6, iParam3) };
		}
		if (_0xf256a75210c5c0eb(iParam0, vVar8))
		{
			return vVar8;
		}
		iVar7++;
	}
	return vVar0;
}

int func_816(int iParam0, int iParam1, int iParam2)
{
	task_turn_ped_to_face_entity(iParam0, iParam1, iParam2, 3f, 0.25f, -1082130432);
	return 1;
}

int func_817(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

bool func_818(int iParam0)
{
	if (func_168(iParam0))
	{
		return _0xc29996a337bdd099((*Global_1425371)[iParam0]->f_1);
	}
	return false;
}

Vector3 func_819(vector3 vParam0, vector3 vParam3, float fParam6)
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

Vector3 func_820(vector3 vParam0, vector3 vParam3, float fParam6)
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

Vector3 func_821(int iParam0)
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

float func_822(int iParam0)
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

bool func_823(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

int func_824(int iParam0)
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

char* func_825(int iParam0)
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

bool func_826(int iParam0)
{
	if (!does_rayfire_map_object_exist(&(iLocal_466[iParam0])))
	{
		return false;
	}
	return get_state_of_rayfire_map_object(&(iLocal_466[iParam0])) == 5;
}

void func_827(int iParam0)
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

bool func_828(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_829(var uParam0, int iParam1)
{
	if (func_823(uParam0))
	{
		_0x9cf1836c03fb67a2(uParam0, iParam1);
	}
}

void func_830()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

void func_831(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	*uParam0 = _create_anim_scene(sParam1, iParam3, sParam2, false, true);
}

void func_832(var uParam0)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return;
	}
	load_anim_scene(*uParam0);
}

bool func_833(var uParam0)
{
	return func_248(*uParam0, 1);
}

void func_834(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_1049(iParam1))
		{
			func_1050(iParam0, 41788943);
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
			func_1051(iParam0, 0, 1);
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
			func_1052(iParam0, 0);
			bVar0 = true;
		}
		func_1053(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

bool func_835(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

float func_836(int iParam0)
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

int func_837(bool bParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam1))
	{
		return 0;
	}
	if (!does_entity_exist(iParam2))
	{
		return 0;
	}
	vVar0 = { func_1054(iParam1) };
	vVar3 = { func_1054(iParam2) };
	return func_1055(bParam0, vVar0, vVar3, iParam2);
}

int func_838(bool bParam0, int iParam1, vector3 vParam2)
{
	if (is_entity_dead(iParam1))
	{
		return 0;
	}
	vVar0 = { func_1054(iParam1) };
	return func_1055(bParam0, vVar0, vParam2, 0);
}

bool func_839(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

struct<5> func_840(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_1056(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_1057(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_844(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_1058(bParam1) };
			if (bParam2 && func_1059(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_842(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_842(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_843(iParam0, &Var5, 1728382685))
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
			Var0 = { func_1060(bParam1) };
			switch (func_918(iParam0))
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
			if (func_1061(iParam0, -1823706425))
			{
				Var0 = { func_844(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_1061(iParam0, -1483207246))
			{
				Var0 = { func_844(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_1062(Var0, &Var27, bParam1, 0))
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

int func_841(int iParam0, int iParam1)
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

bool func_842(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_1063(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_843(int iParam0, var uParam1, int iParam2)
{
	if (func_1064(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_844(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_1065(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_917(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_845(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_1066(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1062(*uParam1, &Var0, bParam6, 0))
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
	if (!func_846(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_917(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_846(bool bParam0)
{
	if (func_1() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_917(bParam0));
}

int func_847(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_1067(iParam0))
	{
		return 0;
	}
	if (!func_846(0))
	{
		return 0;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_848(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_307(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

var func_849(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

var func_850(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

bool func_851(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_852(int iParam0)
{
	if (func_1068(iParam0))
	{
		if (!func_1069(45))
		{
			return false;
		}
	}
	iVar0 = func_855(iParam0);
	if (func_1070())
	{
		if (!func_208((*Global_1835011)[3]->f_1, 1))
		{
			return (iVar0 == 7 || iVar0 == 6);
		}
	}
	return true;
}

struct<2> func_853(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_854(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

int func_855(int iParam0)
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

int func_856(int iParam0)
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

Vector3 func_857(int iParam0)
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

void func_858(int iParam0, int iParam1)
{
	func_1071(iParam0);
	iVar0 = func_1072(iParam0, iParam1);
	if (iVar0 != 0 && !_map_is_discovery_active(iVar0))
	{
		_0xd8c7162ab2e2af45(iVar0);
	}
}

int func_859(int iParam0, int iParam1)
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

int func_860(int iParam0, int iParam1)
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

bool func_861(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_ped_group_member(iParam0, func_550(), 1))
	{
		return true;
	}
	return false;
}

int func_862(int iParam0)
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

int func_863(int iParam0)
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

void func_864(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_1073();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_1074(iParam0);
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
	if (func_1069(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_1075())
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
	Global_40.f_11095.f_35 = func_1076(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_1073();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_1077(iVar1);
		func_1079(func_1078(), 0, 4000);
		func_1080(Global_40.f_11095.f_35);
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
		func_1081(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_854(func_1082(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (does_entity_exist(iParam5))
			{
				decor_set_int(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_863(14))
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
					sParam4 = func_1083(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_1084(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_1084(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_854(func_1082(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_863(4))
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
					sParam4 = func_1083(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_1084(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_1084(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_1082(-1990689970) };
	stat_id_set_int(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		_0xe6b763c7f4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_1085(10, 1);
	}
}

void func_865(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

void func_866(int iParam0)
{
	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_1086();
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
			func_1087(&(Global_1935630->f_34), &(Global_1935630->f_39));
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

var func_867(int iParam0)
{
	return &(Global_1109400->f_276[iParam0]);
}

bool func_868(bool bParam0)
{
	if (func_1088(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_869(int iParam0)
{
	iVar0 = Global_1935630->f_40;
	if (func_1() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_1089(iParam0);
		}
	}
	else if (!does_entity_exist(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_1089(iParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_894(iVar0) == -1)
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

void func_870(int iParam0)
{
	if (*iParam0 & 8 != 0 || *iParam0 & 16 != 0)
	{
		func_1090(iParam0);
	}
}

bool func_871(int iParam0, int iParam1, int iParam2)
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
		iVar1 = func_894(iParam2);
	}
	else
	{
		iVar1 = func_893(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_894(iParam0);
	}
	else
	{
		iVar0 = func_893(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_376(*iParam1, 8388608))
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

float func_872(int iParam0, int iParam1)
{
	return func_366(iParam0, iParam1, 1, 1);
}

float func_873(int iParam0)
{
	return iParam0->f_26;
}

bool func_874(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

float func_875(int iParam0)
{
	return iParam0->f_17;
}

bool func_876(int iParam0, int iParam1, float fParam2, float fParam3)
{
	if (iParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_376(*iParam0, 4194304))
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

int func_877(int iParam0)
{
	return iParam0->f_18;
}

bool func_878(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (_is_weapon_sniper(func_674(iVar0, 0)))
		{
			if (func_955(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_879(int iParam0)
{
	return iParam0->f_23;
}

int func_880(int iParam0)
{
	return iParam0->f_21;
}

int func_881(int iParam0)
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

bool func_882(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_1091(iParam0, vParam4, 0.5f))
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

int func_883(int iParam0)
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
	if (func_1092(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_884(int iParam0)
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

bool func_885(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_934(iParam1))
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

bool func_886(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_934(iParam1))
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

bool func_887(int iParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = 40f;
	if (func_934(iParam1))
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

bool func_888(int iParam0, int iParam1)
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

bool func_889(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (func_1093(iParam0, 1, 0, 0) != 2055893578)
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

bool func_890(int iParam0)
{
	return !*iParam0 & 2 != 0;
}

bool func_891(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_438(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_892(int iParam0)
{
	return iParam0->f_24;
}

int func_893(int iParam0)
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

int func_894(int iParam0)
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

int func_895(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_888(Global_35, &iVar1))
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
		fVar2 = func_366(iParam0, player_ped_id(), 0, 1);
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
		if (func_366(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

bool func_896(int iParam0, int iParam1, bool bParam2)
{
	func_1088(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_897(iParam1, iVar0))
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
				if (!bParam2 || !func_897(iParam1, iVar1))
				{
					if (func_438(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_897(int iParam0, int iParam1)
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

bool func_898(int iParam0)
{
	if (func_1075())
	{
		return false;
	}
	return func_208((*Global_1347702)[58]->f_15, 1);
}

int func_899(int iParam0)
{
	return iParam0->f_20;
}

int func_900(int iParam0, vector3 vParam1, int iParam4, bool bParam5, int iParam6, int iParam7)
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

int func_901(int iParam0, int iParam1, int iParam2)
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

bool func_902(int iParam0)
{
	return func_1016(iParam0, 2);
}

void func_903(int iParam0, bool bParam1)
{
	if (!func_908(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!func_1094(iParam0, 1024))
		{
			func_910(iParam0, 1024);
			_0x9b4e793b1cb6550a();
		}
	}
	else if (func_1094(iParam0, 1024))
	{
		func_909(iParam0, 1024);
		_0x9b4e793b1cb6550a();
	}
	func_1095(iParam0);
}

int func_904(int iParam0)
{
	return Global_1914319->f_3[iParam0]->f_408;
}

void func_905(int iParam0)
{
	if (func_1096(iParam0) && func_1097())
	{
		remove_door_from_system(iParam0);
	}
}

void func_906(int iParam0)
{
	Global_1914319->f_3[iParam0]->f_7 = 0;
}

void func_907(int iParam0, bool bParam1)
{
	if (!func_609(iParam0))
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

bool func_908(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

void func_909(int iParam0, int iParam1)
{
	if (!func_908(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (&Global_1914319->f_15614[iParam0] - (Global_1914319->f_15614[iParam0] && iParam1));
}

void func_910(int iParam0, int iParam1)
{
	if (!func_908(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (Global_1914319->f_15614[iParam0] || iParam1);
}

int func_911(int iParam0)
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

void func_912(int iParam0, bool bParam1)
{
	if (!func_609(iParam0))
	{
		return;
	}
	if ((bParam1 && func_1046(iParam0, 512)) || (!bParam1 && !func_1046(iParam0, 512)))
	{
		return;
	}
	if (bParam1)
	{
		func_812(iParam0, 512);
	}
	else
	{
		func_313(iParam0, 512);
	}
	if (func_1098(iParam0))
	{
		_0x9b4e793b1cb6550a();
	}
}

int func_913(int iParam0)
{
	iVar0 = func_610(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1099(iVar0);
}

int func_914(int iParam0, int iParam1)
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
			func_1100(iVar2);
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

void func_915()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

int func_916(int iParam0, int iParam1)
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

int func_917(bool bParam0)
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

int func_918(int iParam0)
{
	if (!func_1065(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_919(int iParam0)
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

void func_920(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && iParam0));
}

void func_921(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || iParam0);
}

void func_922(int iParam0, int iParam1)
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
			func_1101((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1101(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_100(&(Global_1898164->f_1[0])))
	{
		func_324(&(Global_1898164->f_1[0]), 3);
	}
}

void func_923(int iParam0, int iParam1)
{
	iParam0 = func_560(iParam0);
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

void func_924()
{
	if (func_1102(0))
	{
		func_1103(0);
	}
	if (func_1102(1))
	{
		func_1103(1);
	}
	if (func_1102(5))
	{
		func_1103(5);
	}
	if (func_1102(6))
	{
		func_1104(6);
	}
}

int func_925()
{
	return Global_1894899->f_2;
}

bool func_926(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

bool func_927(var uParam0, char* sParam1)
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

void func_928(var uParam0, char* sParam1, bool bParam2)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return;
	}
	set_anim_scene_bool(*uParam0, sParam1, bParam2, false);
}

int func_929(int iParam0, vector3 vParam1, float fParam4)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		vVar0 = { get_entity_coords(iParam0, false, false) };
		vVar3 = { get_entity_forward_vector(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_1105(vVar3, vVar6);
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
	if (func_1106(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

int func_930(int iParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_238(iVar2) != 0 && _0x800df3fc913355f3(func_169(iVar2)))
		{
			if (func_169(iVar2) == iVar0)
			{
				return iVar2;
			}
		}
		iVar1++;
	}
	return -1;
}

float func_931(int iParam0)
{
	if (!*iParam0 & 1 != 0)
	{
		return func_892(iParam0);
	}
	if (_0x25ca89b2a39dcc69() > 0.833f)
	{
		return func_1107(iParam0);
	}
	return func_892(iParam0);
}

float func_932(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_933()
{
	iVar0 = func_453(func_452());
	iVar1 = func_651(func_452());
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

bool func_934(int iParam0)
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

void func_935(int iParam0, int iParam1)
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

void func_936(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_937(int iParam0, int iParam1)
{
	iVar0 = func_653(*iParam0);
	iVar1 = func_652(*iParam0);
	if (iParam1 < 1 || iParam1 > func_655(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_938(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_939(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_940(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

void func_941(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

int func_942(int* iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	if (!is_entity_dead(*iParam0))
	{
		func_941(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !_does_volume_exist(iParam9)) || is_entity_in_volume(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (is_ambient_speech_playing(*iParam0) || is_scripted_speech_playing(*iParam0));
		fVar8 = func_1029(fParam12 >= 0f, fParam12, vdist(Global_36, get_entity_coords(*iParam0, true, false)));
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
		if (func_1108(*iParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_1109(iParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_942(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_956(iParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!get_ped_config_flag(*iParam0, 317, true))
						{
							func_1110(*iParam0, 1, 1);
						}
					}
					else if (func_1111(iParam1, 22))
					{
						func_1110(*iParam0, 0, 1);
					}
				}
				if (func_1112(iParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_1113(iParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_1114(iParam8);
					if (func_1115(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (is_bit_set(uParam3[iParam1->f_1], 20))
								{
									func_1116(uParam3);
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
					func_1117(iParam1, uParam3, fVar8);
					if (func_1118(*iParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (is_bit_set(*iParam1, 1))
					{
						func_109(uParam3, 0, 0, 1, 1);
						clear_bit(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_1119(iParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_1112(iParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_1120(*iParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_1115(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_1113(iParam0, func_1112(iParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_1114(iParam8);
				}
				else if (is_bit_set(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_109(uParam3, 0, 0, 1, 1);
					}
					func_1121(iParam1, 1);
				}
				func_1117(iParam1, uParam3, fVar8);
				if (func_1119(iParam0, iParam1, fParam4, bVar6))
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
			func_957(iParam1, uParam3);
			set_bit(iParam1, 3);
		}
	}
	return -1;
}

void func_943(int* iParam0, var uParam1, int* iParam2)
{
	iVar0 = func_1122(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (*uParam1)[iVar0]->f_13;
		iVar2 = (*uParam1)[iVar0]->f_15;
		if (!is_string_null_or_empty(sVar1))
		{
			func_116(Global_35, *iParam2, sVar1, "", -1082130432, iVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_944(int iParam0)
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

void func_945(int iParam0, bool bParam1)
{
	func_1123(iParam0, &iVar0, &iVar1);
	if (!func_1124(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_1125(iVar0, iVar1);
}

bool func_946(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 38)
	{
		return true;
	}
	return false;
}

void func_947(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_310(iParam0))
	{
		return;
	}
	iVar0 = func_604(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(2, sParam1, sParam2));
}

void func_948(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_310(iParam0))
	{
		return;
	}
	iVar0 = func_604(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, sParam1);
}

void func_949(int* iParam0, char* sParam1)
{
	if (func_310(iParam0->f_6) && !is_string_null_or_empty(sParam1))
	{
		func_948(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_952(iParam0, 1);
}

bool func_950(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

void func_951(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_952(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

bool func_953(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_954(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
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

bool func_955(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_956(int iParam0)
{
	if (!is_entity_dead(*iParam0))
	{
		_0xe98d55c5983f2509(*iParam0);
		set_ped_config_flag(*iParam0, 297, false);
	}
}

void func_957(int* iParam0, var uParam1)
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
	func_1126(iParam0, uParam1, 1);
	func_109(uParam1, 0, 1, 1, 0);
	_copy_memory(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		_copy_memory((*uParam1)[iVar0], &Var22, 17);
		iVar0++;
	}
}

bool func_958(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_1127(iParam0, iParam1, 0f))
		{
			return false;
		}
	}
	if (!func_1128(iParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (bParam4 && is_entity_a_ped(iParam1))
	{
		return _0x9d9473cb82d83a30(iParam0, get_ped_index_from_entity_index(iParam1), 0) == 1;
	}
	return _0x7f9b9791d4cb71f6(iParam0, iParam1, bParam2, 0) == 1;
}

bool func_959(var uParam0, char* sParam1)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return false;
	}
	return _0x0df57f86fe71dbe5(*uParam0, sParam1);
}

int func_960(var uParam0, char* sParam1)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return 0;
	}
	return _0xae6ada8fe7e84acc(*uParam0, sParam1);
}

void func_961(int iParam0, int iParam1, int iParam2)
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
		iLocal_489[iParam2] = 0;
	}
	else if (has_anim_event_fired(iVar0, -1300850144))
	{
		iLocal_489[iParam2] = 1;
	}
	else if (has_anim_event_fired(iVar0, -1011860333))
	{
		iLocal_489[iParam2] = 2;
	}
	else
	{
		iLocal_489[iParam2] = -1;
	}
}

int func_962(int iParam0)
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

Vector3 func_963(int iParam0, int iParam1, bool bParam2)
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
	iVar3 = func_645(*iParam0, Global_35, 1060437492);
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

int func_964(var uParam0, char* sParam1)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return 0;
	}
	StringCopy(&(uParam0->f_1), sParam1, 24);
	return func_728(uParam0, &(uParam0->f_1));
}

bool func_965(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, bool bParam5, bool bParam6)
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

void func_966(int iParam0, int iParam1)
{
	iVar0 = _0x62de46f061caa468();
	if (iParam0 > iVar0)
	{
		iParam0 = iVar0;
	}
	_0x7d4e70a67a651c71(iParam0);
	iParam1->f_3 = (iParam1->f_3 - iParam0);
}

bool func_967(int iParam0, int iParam1)
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
	if (func_1129(iParam1))
	{
		return false;
	}
	return true;
}

void func_968(int iParam0)
{
	iVar0 = func_691(iParam0);
	if (!func_117(func_1130(iParam0)) && !func_430(iVar0))
	{
		iVar1 = (810 + iParam0);
		iVar2 = func_63(iVar1);
		if (!is_entity_dead(iVar2))
		{
			if (!func_117(func_696(iParam0)) && has_anim_event_fired(iVar2, 2009491632))
			{
				func_1034(iVar2, 31267307, 10f, 0, "EXIT_TREE_FALL", 1, 129);
				clear_ped_tasks(iVar2, 1, 0);
				_0x2208438012482a1a(iVar2, false, false);
				func_35(func_696(iParam0));
			}
			if (has_anim_event_fired(iVar2, 1407243653))
			{
				set_ped_config_flag(iVar2, 146, false);
				set_ped_config_flag(iVar2, 234, true);
				set_ped_config_flag(iVar2, 178, true);
				set_ped_config_flag(iVar2, 389, false);
				func_35(func_1130(iParam0));
				func_35(func_692(iParam0));
			}
		}
	}
}

bool func_969(int iParam0, int iParam1)
{
	if (func_429(iParam0))
	{
		return false;
	}
	if (!func_254(*iParam1, 0, 1))
	{
		return false;
	}
	if (!decor_exist_on(*iParam1, "bChopDown"))
	{
		return false;
	}
	return true;
}

bool func_970(int iParam0, bool bParam1)
{
	if (!does_rayfire_map_object_exist(&(iLocal_466[iParam0])))
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
	if (!func_668(vLocal_570[0]))
	{
		return false;
	}
	if (func_774(vLocal_570[0]) <= 5000)
	{
		return false;
	}
	return true;
}

int func_971(int iParam0)
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

bool func_972()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_429(iVar0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

char* func_973()
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

void func_974(int iParam0)
{
	iVar31 = 0;
	iVar31 = func_300(&iVar0);
	iVar32 = (810 + iParam0);
	iVar33 = func_63(iVar32);
	if (!is_entity_dead(iVar33))
	{
		iVar0[iVar31] = iVar33;
		iVar31++;
	}
	if (!func_19(32))
	{
		func_1131(&iVar0, &iParam0, 1);
	}
	else
	{
		func_1132(&(uLocal_2082[0]), &iVar0);
	}
}

Vector3 func_975(int iParam0)
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

void func_976(int iParam0)
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

void func_977(int iParam0)
{
	iVar0 = func_63(iParam0);
	iVar1 = func_1133(iParam0);
	if (iVar1 < 0 || iVar1 > 3)
	{
		return;
	}
	iVar2 = func_691(iVar1);
	if (!is_entity_dead(iVar0))
	{
		if ((func_166(64) && !_is_ped_using_scenario_hash(iVar0, func_693())) && !func_466(iVar2))
		{
			if (!func_266(iParam0, 0))
			{
				func_62(iParam0, 1, 1);
			}
			func_467(&iVar2);
			clear_ped_tasks(iVar0, 1, 0);
			set_current_ped_weapon(iVar0, -1569615261, false, 0, false, false);
			open_sequence_task(&iLocal_196);
			task_swap_weapon(0, 1, 0, 0, 0);
			if (_does_scenario_point_exist(&(uLocal_478[iVar1])))
			{
				_task_use_scenario_point(0, &(uLocal_478[iVar1]), 0, 0, true, false, 0, false, -1f, false);
			}
			else
			{
				_task_use_nearest_scenario_to_coord(0, func_1134(iVar1), 5f, 0, false, false, false, false);
			}
			close_sequence_task(iLocal_196);
			_task_perform_sequence_2(iVar0, iLocal_196, 1f, 3f);
			clear_sequence_task(&iLocal_196);
		}
		else
		{
			clear_ped_tasks(iVar0, 1, 0);
			set_current_ped_weapon(iVar0, -1569615261, false, 0, false, false);
			func_77(iParam0, 1);
			func_474(iVar2, 0);
		}
	}
}

void func_978(int iParam0, int iParam1)
{
	if (func_714(Local_492[func_1135(iParam1)], "bBreakInternalLoop"))
	{
		func_715(Local_492[func_1135(iParam1)], "bBreakInternalLoop");
	}
	func_1136(iParam0, iParam1);
	if (&iLocal_191[iParam1] < 3)
	{
		if (_0xa454d234e45bb6e5(*iParam0, get_player_index()))
		{
			set_ped_config_flag(*iParam0, 330, true);
			vVar0 = { func_1139(iParam0, func_1137(iParam1), func_1138(iParam1), &(iLocal_486[iParam1]), 1) };
			if (!is_string_null_or_empty(&vVar0))
			{
				task_play_anim(*iParam0, "script_proc@event_area@appleseed@boom_lift", &vVar0, 2f, -2f, -1, 16, 0f, false, 0, false, 0, false);
			}
			iLocal_191[iParam1] = 3;
		}
		else if (_0x9337183fda2e9035(*iParam0, get_player_index()))
		{
			vVar0 = { func_1139(iParam0, func_1137(iParam1), func_1138(iParam1), &(iLocal_486[iParam1]), 0) };
			if (!is_string_null_or_empty(&vVar0))
			{
				task_play_anim(*iParam0, "script_proc@event_area@appleseed@boom_lift", &vVar0, 2f, -2f, -1, 16, 0f, false, 0, false, 0, false);
			}
			iLocal_191[iParam1] = 3;
		}
	}
	switch (&iLocal_191[iParam1])
	{
		case 0:
			iLocal_191[iParam1] = 1;
			break;
		case 1:
			if (has_entity_anim_finished(Local_614.f_690[13]->f_8, "aplloader_full", "props_misc@appleseed_loader", 1) || has_anim_event_fired(Local_614.f_690[13]->f_8, -1064143891))
			{
				set_anim_scene_rate(&(Local_492[func_1135(iParam1)]), 1f);
				func_643(Local_492[func_1135(iParam1)], "bBreakInternalLoop");
				iLocal_191[iParam1] = 4;
			}
			if (_0x8d81e7824b7753f7(&(Local_492[func_1135(iParam1)]), func_1140(iParam1), 1))
			{
				set_anim_scene_rate(&(Local_492[func_1135(iParam1)]), -1f);
				func_643(Local_492[func_1135(iParam1)], "bBreakInternalLoop");
				iLocal_191[iParam1] = 2;
			}
			break;
		case 2:
			if (has_entity_anim_finished(Local_614.f_690[13]->f_8, "aplloader_full", "props_misc@appleseed_loader", 1) || has_anim_event_fired(Local_614.f_690[13]->f_8, -1064143891))
			{
				set_anim_scene_rate(&(Local_492[func_1135(iParam1)]), 1f);
				func_643(Local_492[func_1135(iParam1)], "bBreakInternalLoop");
				iLocal_191[iParam1] = 4;
			}
			if (_0x8d81e7824b7753f7(&(Local_492[func_1135(iParam1)]), func_1141(iParam1), 1))
			{
				set_anim_scene_rate(&(Local_492[func_1135(iParam1)]), 1f);
				func_643(Local_492[func_1135(iParam1)], "bBreakInternalLoop");
				iLocal_191[iParam1] = 1;
			}
			break;
		case 3:
			if (!_0xa454d234e45bb6e5(*iParam0, get_player_index()) && !_0x9337183fda2e9035(*iParam0, get_player_index()))
			{
				if (has_entity_anim_finished(Local_614.f_690[13]->f_8, "aplloader_full", "props_misc@appleseed_loader", 1) || has_anim_event_fired(Local_614.f_690[13]->f_8, -1064143891))
				{
					iLocal_191[iParam1] = 4;
				}
				else if (_get_anim_scene_rate(&(Local_492[func_1135(iParam1)])) > 0f)
				{
					iLocal_191[iParam1] = 1;
				}
				else
				{
					iLocal_191[iParam1] = 2;
				}
			}
			break;
		case 4:
			iLocal_191[iParam1] = 5;
			if (iVar598 < 14)
			{
				iLocal_602 = 14;
			}
			break;
		case 5:
			break;
	}
}

bool func_979(var uParam0, int iParam1, var uParam2)
{
	if (!func_254(iParam1, 0, 1))
	{
		return false;
	}
	if (decor_exist_on(iParam1, "bNoticePlayer"))
	{
		return false;
	}
	if (!func_1142(iParam1))
	{
		return false;
	}
	if (func_366(iParam1, Global_35, 1, 1) > uParam0->f_32)
	{
		return false;
	}
	if (func_286(iParam1, uParam2))
	{
		return false;
	}
	if (func_1143(iParam1, &(uParam0->f_12)))
	{
		return false;
	}
	return true;
}

void func_980(bool bParam0)
{
	*bParam0 = 0;
	bParam0->f_2 = -1;
	bParam0->f_3 = 0;
	bParam0->f_4 = 0;
}

bool func_981()
{
	return func_1144(_0xc17f69e1418cd11f(3));
}

bool func_982()
{
	if (!func_215(Global_35, &(iLocal_75[10]), 1, 0))
	{
		return false;
	}
	if (iVar1918 != 5 && iVar1918 != 6)
	{
		return false;
	}
	return true;
}

var func_983(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	if (bParam2)
	{
		_0xdd1232b332cbb9e7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_1145(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_1146(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		_uilog_set_cached_objective(sVar0);
	}
	return func_1145(sVar0, iParam1, 0, 0, 1, 1);
}

bool func_984(int iParam0, bool bParam1)
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

void func_985()
{
	iVar0 = _get_last_mount(Global_35);
	if (is_ped_on_mount(Global_35))
	{
		if (func_215(iVar0, &(iLocal_75[4]), 1, 0))
		{
			set_ped_max_move_blend_ratio(iVar0, 1f);
		}
		else if (func_215(iVar0, &(iLocal_75[10]), 1, 0))
		{
			set_ped_max_move_blend_ratio(iVar0, 1.25f);
		}
		else if (func_215(iVar0, &(iLocal_75[9]), 1, 0))
		{
			set_ped_max_move_blend_ratio(iVar0, 1.501f);
		}
	}
}

void func_986(bool bParam0)
{
	if (bParam0)
	{
		func_1147(4);
	}
	func_1147(2);
	set_bit(&(Global_1956580->f_1), 0);
}

bool func_987(int iParam0, var uParam1, vector3 vParam2, int iParam5, float fParam6, int iParam7, bool bParam8, int iParam9, bool bParam10, bool bParam11, float fParam12)
{
	if (!func_382(iParam0))
	{
		if (bParam11)
		{
			iVar0 = func_287(7);
		}
		else
		{
			iVar0 = _get_last_mount(iParam0);
		}
		if (!func_522(iVar0, 1) || (!(_does_volume_exist(iParam5) && func_215(iVar0, iParam5, 1, 0)) && func_366(iParam0, iVar0, 1, 1) > fParam6))
		{
			return true;
		}
		if (!does_entity_exist(*uParam1))
		{
			if (func_627(iVar0) && func_628(iVar0) != 1)
			{
				Var2.f_10 = 7;
				Var2.f_1 = 1;
				*uParam1 = func_1148(&uVar1, &Var2);
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
		if (func_522(*uParam1, 1))
		{
			if (!(func_131(*uParam1, 518218985) || func_131(*uParam1, 713668775)))
			{
				clear_ped_tasks(*uParam1, 1, 0);
				iVar13 = 0;
				if (!bParam10)
				{
					iVar13 = 16640;
				}
				_0xff1e339ce40eaaaf(*uParam1, 0);
				_0xf74e134f40192884(*uParam1, 2);
				if (!func_243(vParam2))
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
				if (!bParam8 && func_243(vParam2))
				{
					_task_smart_flee_style_ped(*uParam1, iParam0, iParam7, iVar13, fParam6, 6000, 0);
				}
			}
		}
	}
	return false;
}

void func_988(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_71(iParam0);
	}
	else
	{
		func_339(iParam0);
	}
}

void func_989(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
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
		if (func_1149((*uParam0)[iVar1], iParam3, iParam4, iParam5, 0, bParam6, 0, 0))
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
		func_1150();
	}
}

void func_990(int iParam0, bool bParam1)
{
	set_ped_config_flag(*iParam0, 301, !bParam1);
	set_ped_config_flag(*iParam0, 315, !bParam1);
	set_ped_config_flag(*iParam0, 130, !bParam1);
	set_ped_config_flag(*iParam0, 178, bParam1);
}

Vector3 func_991(vector3 vParam0)
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

float func_992()
{
	return Global_1935436->f_9;
}

void func_993(int iParam0)
{
	if (iParam0 >= &Global_1935436)
	{
		return;
	}
	Global_1935436->f_1 = iParam0;
}

bool func_994(int iParam0, bool bParam1)
{
	if (bParam1 && !func_310(iParam0))
	{
		return false;
	}
	return !func_1016(iParam0, 4);
}

void func_995(vector3 vParam0, int* iParam3, int iParam4, int iParam5, char* sParam6, int iParam7)
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

int func_996(char* sParam0, int iParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_1016(iVar0, 2))
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
				func_1017(iVar1, iParam1, sParam0, 5, iParam3, fParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_997(int iParam0, float fParam1, bool bParam2)
{
	if (bParam2 && !func_310(iParam0))
	{
		return;
	}
	if (fParam1 <= 0f)
	{
		return;
	}
	iVar0 = func_604(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	(*Global_1945938)[iVar0]->f_9 = fParam1;
	_uiprompt_context_set_size((*Global_1945938)[iVar0]->f_3, fParam1);
}

int func_998(char* sParam0, int iParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13)
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
		if (func_1016(iVar0, 2))
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
		func_1017(iVar1, iParam1, sParam0, 2, iParam3, fParam4, 0f, 0f, 0f, 0f, iParam2, 0, 1, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, 1065353216, 0, 0, 0, iParam12, bParam13);
		return iVar1;
	}
	return 0;
}

int func_999(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	if (func_243(vParam2))
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
		if (func_1016(iVar0, 2))
		{
			if (func_828(vParam2, (*Global_1945938)[iVar0]->f_6, 0.01f, 1) && iParam1 == (*Global_1945938)[iVar0]->f_4)
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
		func_1017(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

int func_1000(int iParam0)
{
	return _money_get_cash_balance();
}

void func_1001(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_310(iParam0))
	{
		return;
	}
	iVar0 = func_604(iParam0);
	func_1043(iVar0, bParam1);
}

bool func_1002(int iParam0, bool bParam1)
{
	if (bParam1 && !func_310(iParam0))
	{
		return false;
	}
	iVar0 = func_604(iParam0);
	return _uiprompt_is_just_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_1003(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_1151(iParam0, sParam4, iParam5);
	}
	func_1152(iParam0, bParam1, fParam2, iParam3, iParam7);
}

Vector3 func_1004(var uParam0, char* sParam1, char* sParam2)
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

void func_1005(int iParam0)
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

void func_1006(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam1;
}

bool func_1007(var uParam0, int iParam1)
{
	if (func_224(&(uParam0->f_5), 5f))
	{
		return true;
	}
	if (func_376(uParam0->f_23, 2))
	{
		return true;
	}
	if (((!func_382(uParam0->f_1) && !func_131(uParam0->f_1, 501393341)) && !is_ped_in_any_vehicle(uParam0->f_1, true)) && !func_131(uParam0->f_1, -828834893))
	{
		return true;
	}
	return false;
}

bool func_1008(var uParam0, int iParam1)
{
	if (func_224(&(uParam0->f_5), 4f))
	{
		return true;
	}
	if (!func_376(uParam0->f_23, 16384))
	{
		return true;
	}
	if (uParam0->f_1 != Global_35)
	{
		return true;
	}
	if (!func_1153(&uVar0))
	{
		return true;
	}
	return false;
}

int func_1009()
{
	if (!func_1154())
	{
		return 0;
	}
	if (!func_1155(&iVar0))
	{
		return 0;
	}
	if (!func_1156(iVar0))
	{
		return 0;
	}
	return func_1157(iVar0, 0);
}

bool func_1010(var uParam0, int iParam1)
{
	if (func_224(&(uParam0->f_5), 4f))
	{
		return true;
	}
	if (func_376(uParam0->f_23, 4))
	{
		return true;
	}
	get_current_ped_weapon(uParam0->f_1, &iVar0, true, 0, false);
	get_current_ped_weapon(uParam0->f_1, &iVar1, true, 1, false);
	if (func_376(uParam0->f_23, 512) || (iVar0 == -1569615261 && iVar1 == -1569615261))
	{
		return true;
	}
	return false;
}

int func_1011(int iParam0)
{
	iVar0 = func_391(iParam0);
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

bool func_1012(var uParam0, int iParam1)
{
	if (func_224(&(uParam0->f_5), 15f))
	{
		return true;
	}
	if (func_376(uParam0->f_23, 4096) && func_131(uParam0->f_1, 1245594896))
	{
		return false;
	}
	if (func_376(uParam0->f_23, 256))
	{
		return true;
	}
	if (get_script_task_status(uParam0->f_1, -208384378, true) == 8)
	{
		return true;
	}
	return false;
}

void func_1013(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

bool func_1014(int iParam0, vector3 vParam1, float fParam4, bool bParam5, float fParam6, bool bParam7)
{
	fVar0 = func_250(get_entity_heading(iParam0));
	fParam4 = func_250(fParam4);
	if (is_entity_at_coord(iParam0, vParam1, bParam5, bParam5, 2f, false, bParam7, 0) && absf((fVar0 - fParam4)) <= fParam6)
	{
		return true;
	}
	return false;
}

float func_1015(int iParam0, vector3 vParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	vVar0 = { get_entity_coords(iParam0, true, false) };
	return (vVar0.z - vParam1.z);
}

bool func_1016(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

void func_1017(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
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
	func_1043(iParam0, 1);
	func_1044(iParam0, 1);
	func_1045(iParam0, 128);
}

void func_1018(int iParam0, bool bParam1)
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
	func_245(*iParam0, 1, 1);
}

bool func_1019(int iParam0)
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

void func_1020(int iParam0, int iParam1, char* sParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	func_948((*Local_275[iParam0])[iParam1]->f_6, sParam2, 0);
	(*Local_275[iParam0])[iParam1]->f_5 = sParam2;
}

void func_1021(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	func_663((*Local_275[iParam0])[iParam1], bParam2);
}

void func_1022(int iParam0, int iParam1)
{
	func_8(iParam0, iParam1);
}

bool func_1023(var uParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || func_310(uParam0->f_6))
	{
		if (is_bit_set(*uParam0, 0))
		{
			if (!bParam2)
			{
				return true;
			}
			if (func_994(uParam0->f_6, bParam1))
			{
				return true;
			}
		}
	}
	return false;
}

void func_1024(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_1020(iParam0, 0, "LOG_CTXTGIVE");
	(*Local_275[iParam0])[0]->f_14 = 500;
	func_951((*Local_275[iParam0])[0], 1);
	func_947((*Local_275[iParam0])[0]->f_6, "LOG_CTXTGIVE", (*Local_275[iParam0])[0]->f_14, 0);
	func_762(iParam0, 0, 1);
	func_1020(iParam0, 1, func_660(10));
	func_762(iParam0, 1, 1);
	func_762(iParam0, 2, bParam1);
	func_1021(iParam0, 2, !bParam1);
	func_71(524288);
}

void func_1025(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_1000(1) < iParam0)
	{
		iParam0 = func_1000(1);
	}
	_money_decrement_cash_balance(iParam0);
	Var0 = { func_1082(1644987397) };
	_0xbd861ae8a5181ed7(&Var0, iParam0);
}

void func_1026(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_1084(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

int func_1027(int iParam0)
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

var func_1028(int iParam0, int iParam1, int iParam2, int iParam3)
{
	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = iParam1;
	Var0.f_12[0] = iParam2;
	iVar23 = 13;
	return _0xa88e215ceb0435c0(iParam0, &Var0, iParam3, iVar23, 2, 0);
}

float func_1029(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_1030(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = iParam0 * 1000;
	if ((iVar0 + get_game_timer()) > Global_1327479->f_4)
	{
		func_1158(iParam0, iParam1, bParam2);
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

int func_1031(int iParam0)
{
	if (func_1159())
	{
		return 0;
	}
	if (!func_1160(3, &Var0))
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

Vector3 func_1032(int iParam0)
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

void func_1033(char* sParam0, bool bParam1)
{
	func_1161(sParam0, bParam1, 0);
}

bool func_1034(int iParam0, int iParam1, float fParam2, int iParam3, char* sParam4, bool bParam5, int iParam6)
{
	if (func_254(iParam0, 0, 1))
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

char* func_1035()
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

void func_1036(int iParam0, bool bParam1)
{
	if (*iParam0 != 3)
	{
		if (!func_254(iParam0->f_40, 0, 1))
		{
			*iParam0 = 3;
		}
	}
	switch (*iParam0)
	{
		case 0:
			func_1162(iParam0->f_40, Global_35, &(iParam0->f_1), iParam0->f_41, 0, 0, iParam0->f_43, iParam0->f_44, 1, 8, 0, 0, 1069547520, 1073741824, 1050253722, 1067030938, 0, 0, -1, 1, -1082130432, -1082130432, 1);
			if (!_does_volume_exist(iParam0->f_39))
			{
				iParam0->f_39 = _create_volume_cylinder(Global_36, 0f, 0f, 0f, 5f, 5f, 5f);
			}
			*iParam0 = 1;
			break;
		case 1:
			if (func_1163(iParam0))
			{
				if (bParam1)
				{
					clear_ped_tasks(iParam0->f_40, 1, 0);
				}
				func_1162(iParam0->f_40, Global_35, &(iParam0->f_1), iParam0->f_41, 0, 0, iParam0->f_43, iParam0->f_44, 1, 8, 0, 0, 1069547520, 1073741824, 1050253722, 1067030938, 0, 0, -1, 1, -1082130432, -1082130432, 1);
				func_1164(iParam0->f_40, Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
				*iParam0 = 2;
			}
			break;
		case 2:
			func_1164(iParam0->f_40, Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
			if (!func_1163(iParam0))
			{
				task_turn_ped_to_face_entity(iParam0->f_40, Global_35, -1, -1082130432, -1082130432, -1082130432);
				*iParam0 = 1;
			}
			break;
		case 3:
			break;
	}
}

int func_1037()
{
	return 370405588;
}

int func_1038(int iParam0)
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

bool func_1039(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	iVar17 = 0;
	if (!func_1165("ALL", &iVar14, &iVar15, iParam1, 0))
	{
		return false;
	}
	iVar16 = 0;
	while (iVar16 < iVar15)
	{
		if (func_1166(&Var0, iVar16, iVar14, iVar15))
		{
			if (Var0.f_4 != 0)
			{
				if (func_1041(Var0.f_4, iParam0))
				{
					iVar17 = 1;
				}
				else
				{
					iVar16++;
				}
				func_1167(iVar14);
				return iVar17;
			}
		}
	}
}

int func_1040(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (_0x9a100f1cf4546629(iParam0) || _0xc346a546612c49a9(iParam0))
	{
		iVar0 = func_1168(iParam0);
		if (!func_1065(iVar0, 0))
		{
			iVar0 = func_1169(iParam0);
		}
	}
	else
	{
		iVar0 = func_1169(iParam0);
	}
	return iVar0;
}

bool func_1041(int iParam0, int iParam1)
{
	if (iParam1 == 101)
	{
		return func_1170(iParam0);
	}
	if (func_1171(iParam0, iParam1))
	{
		return false;
	}
	return func_1172(iParam0, iParam1);
}

void func_1042(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_1043(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_1016(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_1044(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_1045(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

bool func_1046(int iParam0, int iParam1)
{
	if (!func_609(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_3[iParam0]->f_7 && iParam1) != 0;
}

Vector3 func_1047(vector3 vParam0, float fParam3)
{
	vVar0 = { get_random_float_in_range(-1f, 1f), get_random_float_in_range(-1f, 1f), get_random_float_in_range(-1f, 1f) };
	return vParam0 + func_1173(vVar0, get_random_float_in_range(0f, fParam3));
}

Vector3 func_1048(vector3 vParam0, float fParam3, bool bParam4)
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
	return vParam0 + func_1173(vVar1, fParam3);
}

bool func_1049(int iParam0)
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

void func_1050(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_1174(iParam0, iParam1))
		{
			if (func_1175(iParam0, iParam1))
			{
				if (func_1176(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_1177(iParam0);
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

void func_1051(int iParam0, int iParam1, bool bParam2)
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

void func_1052(int iParam0, bool bParam1)
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

void func_1053(int iParam0, int iParam1)
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

Vector3 func_1054(int iParam0)
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
			vVar0.f_2 = func_1178(vVar3.z, vVar6.z, 0.75f);
		}
	}
	if (func_243(vVar0))
	{
	}
	return vVar0;
}

int func_1055(bool bParam0, vector3 vParam1, vector3 vParam4, int iParam7)
{
	bParam0->f_4 = 0;
	switch (*bParam0)
	{
		case 0:
			func_980(bParam0);
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

struct<4> func_1056(bool bParam0)
{
	return func_844(1328661203, func_1179(), -1591664384, bParam0);
}

int func_1057(int iParam0)
{
	if (!func_1065(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_1058(bool bParam0)
{
	iVar0 = func_917(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_844(923904168, func_1056(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_844(923904168, func_1056(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_844(923904168, func_1056(bParam0), -740156546, 0);
}

bool func_1059(int iParam0, bool bParam1)
{
	if (func_918(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_1069(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_1060(bool bParam0)
{
	iVar0 = func_917(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_844(271701509, func_1056(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_844(271701509, func_1056(bParam0), 12999093, 0);
}

bool func_1061(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_918(iParam0);
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

bool func_1062(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_917(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_1063(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_1065(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_844(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_917(bParam6), &Var0, 0);
	return uVar4;
}

bool func_1064(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_917(0);
	*uParam1 = { func_844(iParam0, func_1058(0), iParam3, 0) };
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

bool func_1065(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_1066(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

bool func_1067(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_1068(int iParam0)
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

bool func_1069(int iParam0)
{
	if (!func_1180(iParam0))
	{
		return false;
	}
	return func_1181(iParam0);
}

bool func_1070()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

void func_1071(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < func_1182(iParam0))
	{
		iVar1 = func_1072(iParam0, iVar0);
		if (iVar1 != 0 && _map_is_discovery_active(iVar1))
		{
			_map_discovery_set_enabled(iVar1);
		}
		iVar0++;
	}
}

int func_1072(int iParam0, int iParam1)
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

int func_1073()
{
	iVar0 = func_1183();
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

int func_1074(int iParam0)
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
	fVar1 = func_1029(absf(fVar1) < 1f, func_1029(fVar1 < 0f, -1f, 1f), fVar1);
	return ceil(fVar1);
}

bool func_1075()
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

int func_1076(int iParam0, int iParam1, int iParam2)
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

int func_1077(int iParam0)
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

int func_1078()
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

void func_1079(int iParam0, bool bParam1, int iParam2)
{
	func_1184((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_1185(iParam0);
}

void func_1080(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), 0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), 1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_1186(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_1081(bool bParam0)
{
	bVar3 = false;
	if (func_1187(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1188(iVar5, &iVar2, &iVar0))
			{
				if (!func_1065(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1189(iVar2);
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
							if (func_1057(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_1073() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_1073() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_1190();
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

struct<2> func_1082(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

char* func_1083(int iParam0)
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

var func_1084(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_1191(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_1085(int iParam0, int iParam1)
{
	if (!func_1192(iParam0))
	{
		return 0;
	}
	if (!func_1070())
	{
		return 0;
	}
	if (!func_1193(iParam0, &iVar0, &uVar1))
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

bool func_1086()
{
	if (func_1194())
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

void func_1087(var uParam0, var uParam1)
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

bool func_1088(bool bParam0, int iParam1, int iParam2)
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

int func_1089(int iParam0)
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

void func_1090(int iParam0)
{
	if (Global_1935630->f_38 == 0)
	{
		func_201(iParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1935630->f_34[iVar0])))
				{
					func_145(iParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

bool func_1091(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_1092(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_1093(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_1094(int iParam0, int iParam1)
{
	if (!func_908(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_15614[iParam0] && iParam1) != 0;
}

void func_1095(int iParam0)
{
	func_1195(func_911(iParam0));
}

bool func_1096(int iParam0)
{
	if (func_1196(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

bool func_1097()
{
	return true;
}

bool func_1098(int iParam0)
{
	if (func_1197())
	{
		if (Global_1914319->f_16855 == iParam0)
		{
			return true;
		}
	}
	return false;
}

int func_1099(int iParam0)
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

int func_1100(int iParam0)
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

void func_1101(int iParam0, int iParam1)
{
	Var0 = { *Global_1898164->f_1[iParam0] };
	*Global_1898164->f_1[iParam0] = { *Global_1898164->f_1[iParam1] };
	*Global_1898164->f_1[iParam1] = { Var0 };
}

bool func_1102(int iParam0)
{
	iParam0 = func_560(iParam0);
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

void func_1103(int iParam0)
{
	if (is_player_dead(player_id()))
	{
		return;
	}
	iVar0 = func_287(iParam0);
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
	if (func_1198(iParam0, 64))
	{
		func_1104(iParam0);
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
	bVar3 = func_1069(42);
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
				func_1199(&((*Global_1900383)[iParam0]->f_27));
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
		func_1104(iParam0);
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
		if (func_1200(1) < 1)
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
		func_1201(&((*Global_1900383)[iParam0]->f_26), bVar6);
	}
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_1198(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = is_ped_in_writhe(iVar0);
	bVar10 = false;
	iVar11 = func_1202(iParam0);
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
	fVar15 = func_1203(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_1204(iParam0))
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
		func_1205((*Global_1900383)[iParam0]->f_26);
		func_1206((*Global_1900383)[iParam0]->f_26);
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
	if (func_529(iVar0) && !bVar9)
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
	iVar21 = func_1200(iParam0);
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

void func_1104(int iParam0)
{
	iParam0 = func_560(iParam0);
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

float func_1105(vector3 vParam0, vector3 vParam3)
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

bool func_1106(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

var func_1107(int iParam0)
{
	return iParam0->f_25;
}

bool func_1108(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_1207(iParam0, iParam1))
		{
			if (!func_376(iParam1->f_10, 1))
			{
				set_ped_config_flag(iParam0, 130, false);
				set_ped_config_flag(iParam0, 315, false);
				set_ped_config_flag(iParam0, 297, false);
				set_ped_config_flag(iParam0, 178, true);
				func_109(uParam2, 0, 0, 1, 0);
				func_145(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_376(iParam1->f_10, 1))
		{
			func_1208(uParam2);
			set_ped_config_flag(iParam0, 130, true);
			set_ped_config_flag(iParam0, 315, true);
			set_ped_config_flag(iParam0, 297, true);
			set_ped_config_flag(iParam0, 178, false);
			func_201(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_1109(int* iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!is_entity_dead(*iParam0))
	{
		_0xe98d55c5983f2509(*iParam0);
		bVar4 = func_376(iParam4, 32);
		func_1126(iParam1, uParam2, 0);
		iVar5 = func_1209(*iParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			set_ped_config_flag(*iParam0, 178, false);
			return true;
		}
		func_109(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_376(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_376(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_376(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_376(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_376(iParam4, 8388608) || func_376(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_376(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_376(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_1111(iParam1, 4))
		{
			iVar6 |= 1024;
			_0xbb1e41dd3d3c6250(*iParam0, "IloGeneralEvents", 2);
		}
		if (!func_1111(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_376(iParam4, 67108864))
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
				iParam6 = func_1210(iParam0);
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
			if (func_376(iParam4, 268435456))
			{
				iVar8 = func_1211(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_1212(iParam1, (*uParam2)[iVar8]);
				}
			}
			if (func_1111(iParam1, 23))
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
			if (func_376(iParam4, 2) || func_376(iParam4, 16))
			{
				func_1110(*iParam0, 1, 1);
			}
			else
			{
				func_1110(*iParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_1110(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !is_entity_dead(iParam0))
	{
		set_ped_config_flag(iParam0, 317, bParam1);
	}
}

bool func_1111(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

bool func_1112(int* iParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_1213(*iParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_1113(int* iParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_1214(*iParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_376(iParam10, 32), 1, 0);
			set_bit(iParam2, 1);
		}
	}
	else if (is_bit_set(*iParam2, 1))
	{
		clear_bit(iParam2, 1);
	}
}

void func_1114(int iParam0)
{
	if (func_376(iParam0, 4))
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
	if (func_376(iParam0, 16384))
	{
		disable_control_action(0, -485697785, false);
	}
	if (func_376(iParam0, 8))
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
	}
}

bool func_1115(int* iParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	iVar1 = func_1000(1);
	bVar2 = is_bit_set(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = is_ped_on_foot(Global_35);
	bVar10 = is_ped_injured(*iParam0);
	bVar11 = (((_is_ped_carrying(Global_35) || func_556(Global_35)) || func_554(Global_35)) || func_552(Global_35));
	fVar12 = -1f;
	if (func_668(&(iParam1->f_13)))
	{
		fVar12 = func_383(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((*uParam4)[iVar0]->f_8 != iParam12)
		{
			iParam12 = (*uParam4)[iVar0]->f_8;
		}
		bVar4 = func_310((*uParam4)[iVar0]->f_6);
		func_1215(*iParam0, (*uParam4)[iVar0], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (is_bit_set(uParam4[iVar0], 20))
		{
			bVar3 = true;
		}
		if (func_1216(*iParam0, iParam1, (*uParam4)[iVar0], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_1217(iParam12, (*uParam4)[iVar0]->f_6))
				{
					if (!bVar7)
					{
						func_109(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_1218(uParam4, 0, 0);
					}
					if (is_bit_set(uParam4[iVar0], 11))
					{
						func_1126(iParam1, uParam4, is_bit_set(*iParam1, 6));
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
					if (func_1219(iParam1, fParam6, iParam1->f_9))
					{
						func_48(&(iParam1->f_18));
						if (bVar6)
						{
							func_1218(uParam4, 0, 0);
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
		func_1220(iParam1, fParam2);
	}
	return bVar5;
}

void func_1116(var uParam0)
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

void func_1117(int* iParam0, var uParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_1221((*uParam1)[iVar0]))
		{
			if (is_bit_set(uParam1[iVar0], 20))
			{
				func_1220(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_1118(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!is_control_pressed(0, -124244224))
		{
			if (func_1222(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_1223(iParam1, 0);
				func_1126(iParam1, uParam2, func_1111(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_1119(int* iParam0, int* iParam1, float fParam2, bool bParam3)
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
		else if (func_668(&(iParam1->f_18)))
		{
			func_268(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_668(&(iParam1->f_18)))
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
	return func_224(&(iParam1->f_18), fParam2);
	return true;
}

void func_1120(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_1215(iParam0, (*uParam2)[iVar0], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_1121(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

int func_1122(int* iParam0)
{
	if (func_1111(iParam0, 0))
	{
		if (func_1224(iParam0))
		{
			func_1121(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

void func_1123(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_1124(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_1225(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_1226(iParam0))
	{
		return false;
	}
	if (func_1227(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_1228(iParam0, 1)) || func_851(32768))
	{
		if (!func_1228(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_1229())
	{
		return false;
	}
	return true;
}

void func_1125(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_1126(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_311(&((*uParam1)[iParam0->f_3]->f_6), 1, 1);
		if (bParam2)
		{
			func_78(iParam0, 0);
		}
	}
}

bool func_1127(int iParam0, int iParam1, float fParam2)
{
	return func_1091(iParam0, get_entity_coords(iParam1, false, false), fParam2);
}

bool func_1128(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_1129(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < iVar2143)
	{
		if (iParam0 == &iLocal_2130[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_1130(int iParam0)
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

void func_1131(int iParam0, int iParam1, bool bParam2)
{
	func_163(Local_1617.f_137, &iVar4, &iVar5, 0, 0);
	iVar6 = (810 + *iParam1);
	iVar8 = func_63(iVar6);
	if (iVar4 == -1 || iVar5 == -1)
	{
		return;
	}
	add_shocking_event_at_position(-23350179, func_437(*iParam1), -1f, 100f, 100f, -1f, (30f + 5f), -1, -1);
	if (is_entity_dead(iVar8))
	{
		return;
	}
	iVar9 = (iVar5 - iVar4);
	iVar3 = iVar4;
	while (iVar3 <= iVar5)
	{
		if (!func_157(iVar3) || iVar3 == -1)
		{
		}
		else
		{
			iVar7 = func_63(iVar3);
			if (func_286(iVar7, iParam0))
			{
			}
			else
			{
				if ((func_241(iVar3, 0) && !is_entity_dead(iVar7)) && is_ped_human(iVar7))
				{
					func_244(iVar3, 0, 1, 0, 1, 1);
					func_245(iVar7, 1, 1);
					if ((bParam2 && func_215(iVar7, &(iLocal_75[2]), 1, 0)) && func_254(iVar7, 0, 1))
					{
						set_ped_config_flag(iVar7, 168, true);
						func_1230(iVar3, -1);
						clear_ped_tasks_immediately(iVar7, false, true);
						_0xeeed8fafec331a70(iVar7, func_436(*iParam1), 1);
						open_sequence_task(&iLocal_196);
						_task_smart_flee_style_coord(0, func_436(*iParam1), 4, 1, 30f, 8000, 0);
						task_turn_ped_to_face_coord(0, func_437(*iParam1), 0);
						task_stand_still(0, -1);
						close_sequence_task(iLocal_196);
						task_perform_sequence(iVar7, iLocal_196);
						clear_sequence_task(&iLocal_196);
					}
					else
					{
						fVar0 = get_random_float_in_range(0f, 1f);
						fVar2 = func_366(iVar7, iVar8, 1, 1);
						if (func_382(iVar7))
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
						if (fVar0 < fVar1 && func_254(iVar7, 0, 1))
						{
							set_ped_config_flag(iVar7, 168, true);
							func_1230(iVar3, -1);
							if (is_ped_using_any_scenario(iVar7))
							{
								_0xe7fa07624574b79a(iVar7, iVar8, 1, 1, 10f, 1, 0, 0, 0);
							}
							else
							{
								_0xeeed8fafec331a70(iVar7, func_436(*iParam1), 1);
								open_sequence_task(&iLocal_196);
								task_turn_ped_to_face_coord(0, func_437(*iParam1), 0);
								task_stand_still(0, -1);
								close_sequence_task(iLocal_196);
								task_perform_sequence(iVar7, iLocal_196);
								clear_sequence_task(&iLocal_196);
							}
							_0xaab050da48b57978(iVar7, func_1231(), iVar7, -1, 4);
						}
					}
				}
				if (iVar2141 >= 15)
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

void func_1132(int iParam0, int iParam1)
{
	func_163(Local_1617.f_137, &iVar3, &iVar4, 0, 0);
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
		if (!func_157(iVar2) || iVar2 == -1)
		{
		}
		else
		{
			iVar27 = func_63(iVar2);
			if (func_286(iVar27, iParam1))
			{
			}
			else
			{
				iVar26 = -1;
				if ((func_241(iVar2, 0) && !is_entity_dead(iVar27)) && is_ped_human(iVar27))
				{
					func_244(iVar2, 0, 1, 0, 1, 1);
					func_245(iVar27, 1, 1);
					fVar23 = func_366(iVar27, iVar6, 1, 1);
					fVar0 = get_random_float_in_range(0f, 1f);
					if (func_382(iVar27))
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
					if (iVar2142 >= 3)
					{
						if (fVar1 >= 0.9f)
						{
							iVar26 = func_1232(&fVar7);
						}
						else
						{
							fVar1 = -1f;
						}
					}
					if (fVar0 <= fVar1 && !is_entity_dead(iVar27))
					{
						func_1230(iVar2, iVar26);
						if (iVar26 >= 0)
						{
							fVar7[iVar26] = fVar23;
						}
						else
						{
							fVar7[iVar2142] = fVar23;
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
				if (iLocal_98 == 2 && !func_1233(813))
				{
					iVar26 = func_1232(&fVar7);
					func_1230(813, iVar26);
					func_474(func_691(3), 0);
				}
				iVar28 = 0;
				while (iVar28 < iVar2142)
				{
					iVar27 = func_63(&(iLocal_2130[iVar28]));
					_0x62fdad5e01d2dd47(iVar27, get_entity_coords(iParam0, true, false), 2, 0);
					clear_ped_tasks(iVar27, 1, 0);
					open_sequence_task(&iLocal_196);
					task_turn_ped_to_face_entity(0, iParam0, -1, -1082130432, -1082130432, -1082130432);
					close_sequence_task(iLocal_196);
					_task_perform_sequence_2(iVar27, iLocal_196, 0f, 2.5f);
					clear_sequence_task(&iLocal_196);
					_0xaab050da48b57978(iVar27, func_1231(), iParam0, -1, 4);
					set_ped_config_flag(iVar27, 178, false);
					set_ped_config_flag(iVar27, 130, true);
					func_1018(&iVar27, 1);
					iVar28++;
				}
			}
		}
	}
}

int func_1133(int iParam0)
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

Vector3 func_1134(int iParam0)
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

int func_1135(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7;
		case 1:
			return 8;
		default:
			break;
	}
	return -1;
}

void func_1136(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_1234(iParam0);
			break;
		case 1:
			func_1235(iParam0);
			break;
	}
}

char* func_1137(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "POSE_";
		case 1:
			return "FOREMAN_";
		default:
			break;
	}
	return "";
}

char* func_1138(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PED01";
		case 1:
			return "PED02";
		default:
			break;
	}
	return "";
}

Vector3 func_1139(int iParam0, char* sParam1, char* sParam2, int iParam3, bool bParam4)
{
	StringCopy(&cVar0, sParam1, 24);
	switch (iParam3)
	{
		case 0:
			StringConCat(&cVar0, "A_", 24);
			break;
		case 1:
			StringConCat(&cVar0, "B_", 24);
			break;
		case 2:
			StringConCat(&cVar0, "C_", 24);
			break;
		case 3:
			StringConCat(&cVar0, "D_", 24);
			break;
		default:
			StringCopy(&cVar0, "", 24);
			return cVar0;
	}
	if (bParam4)
	{
		StringConCat(&cVar0, "NEG_", 24);
	}
	else
	{
		StringConCat(&cVar0, "POS_", 24);
	}
	iVar3 = func_645(*iParam0, Global_35, 1060437492);
	switch (iVar3)
	{
		case 0:
			StringConCat(&cVar0, "N_", 24);
			break;
		case 3:
			StringConCat(&cVar0, "L_", 24);
			break;
		case 2:
			StringConCat(&cVar0, "R_", 24);
			break;
		case 1:
			iVar3 = func_645(*iParam0, Global_35, 1f);
			switch (iVar3)
			{
				case 3:
					StringConCat(&cVar0, "L_", 24);
					break;
				case 2:
					StringConCat(&cVar0, "R_", 24);
					break;
			}
			break;
	}
	StringConCat(&cVar0, sParam2, 24);
	return cVar0;
}

char* func_1140(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "DROP_LOOP";
		case 1:
			return "DROP_LOOP";
		default:
			break;
	}
	return "";
}

char* func_1141(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LIFT_LOOP";
		case 1:
			return "idle_loop";
		default:
			break;
	}
	return "";
}

bool func_1142(int iParam0)
{
	if (func_934(iParam0))
	{
		return false;
	}
	return true;
}

bool func_1143(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!is_entity_dead(uParam1[iVar0]))
		{
			if (func_385(uParam1[iVar0], iParam0, 1) < 225f)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1144(int iParam0)
{
	return iParam0 != 0;
}

var func_1145(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_1146(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return _create_var_string(2, func_1236(sParam1));
}

void func_1147(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 || iParam0);
}

int func_1148(var uParam0, var uParam1)
{
	uParam1->f_10 = func_560(uParam1->f_10);
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
		if (func_243(uParam1->f_6))
		{
		}
	}
	bVar0 = func_1070();
	if (*uParam1)
	{
		if (bVar0 && !func_208((*Global_1835011)[4]->f_1, 1))
		{
			if (func_1237(5))
			{
				func_1238(5);
				func_1239(5);
				func_1240(0);
				func_1241(0);
			}
		}
	}
	if (func_1242(Global_36) == 8)
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_208((*Global_1835011)[37]->f_1, 1)) && !func_208((*Global_1835011)[43]->f_1, 1))
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_208((*Global_1835011)[43]->f_1, 1)) && !func_208((*Global_1835011)[44]->f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_287(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_1102(iVar1))
	{
		bVar3 = true;
		if (func_1243(iVar1))
		{
			bVar4 = true;
		}
		if (func_1244(iVar1))
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
				func_1245(uParam1->f_10);
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
			if (!func_1237(0) && func_1237(1))
			{
				func_1246(1, 0);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_1247())
			{
				func_1248();
			}
			func_1240(0);
			func_1241(0);
			func_1249(uParam1->f_6);
		}
	}
	if (!func_1102(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_1250(uParam1->f_10) == 0 || func_1251(uParam1->f_10) == 0) || func_1252(uParam1->f_10) == 0)
			{
				func_1253(uParam1->f_10);
			}
			func_1254(uParam1->f_10);
			func_1255(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*uParam0 = 0;
			return 0;
		}
		*uParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_287(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_1102(iVar1))
	{
		bVar3 = true;
		if (func_1243(iVar1))
		{
			bVar4 = true;
		}
		if (func_1244(iVar1))
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
			if (!func_243(uParam1->f_6))
			{
				set_entity_coords(iVar2, uParam1->f_6, false, true, true, true);
				set_entity_heading(iVar2, uParam1->f_9);
				_0x9587913b9e772d29(iVar2, 0);
			}
		}
	}
	if (func_1256(uParam1->f_10))
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
			Var8 = { func_1257(uParam1->f_10) };
			Var10 = { func_1258() };
			func_1259(iVar2, &Var8, &Var10, 0);
			_set_ped_as_saddle_horse_for_player(iVar6, iVar2);
			set_ped_config_flag(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*uParam0 = 2;
		return iVar2;
	}
	if (!func_632(uParam1->f_10))
	{
		set_entity_as_mission_entity(iVar2, true, true);
		func_1260(uParam1->f_10);
		if (uParam1->f_2 && !func_243(uParam1->f_6))
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
	func_630(uParam1->f_10);
	if (func_632(uParam1->f_10))
	{
		iVar16 = func_631(uParam1->f_10);
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

bool func_1149(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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

void func_1150()
{
	_0x93624b36e8851b42(get_player_index());
}

void func_1151(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_1084(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_1152(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_1261())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_1084(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_1262(iVar0);
			func_1263(iVar0, 0, 0);
		}
		func_1084(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		_money_increment_cash_balance(iVar1, iParam4);
		func_854(func_1082(1644987397), iVar1);
	}
}

bool func_1153(int iParam0)
{
	if (-1829635046 == func_1264(81053684))
	{
		if (func_1155(iParam0))
		{
			return true;
		}
	}
	else if (func_1265(-525676072, iParam0))
	{
		if (func_1155(iParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_1154()
{
	return Global_1946804->f_2792;
}

bool func_1155(int iParam0)
{
	if (func_1265(81053684, iParam0))
	{
		return true;
	}
	if (func_1265(-525676072, iParam0))
	{
		return true;
	}
	return false;
}

bool func_1156(int iParam0)
{
	if (func_1266())
	{
		return false;
	}
	if (!func_1065(iParam0, 0))
	{
		return false;
	}
	if (!func_1267(iParam0, 1, 0))
	{
		_0xbfff81e12a745a5f();
		return false;
	}
	return true;
}

int func_1157(int iParam0, int iParam1)
{
	bVar3 = func_1268(iParam0);
	if (func_1269(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_1153(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_1270();
			}
			else
			{
				iVar0 = func_1271();
			}
		}
		else if (func_248(iParam1, 1))
		{
			iVar0 = 0;
		}
		else if (bVar1)
		{
			iVar0 = func_1272();
		}
		else
		{
			iVar0 = func_1273();
		}
	}
	else if (func_1155(&iVar2))
	{
		if (func_1269(iVar2, -1303648999))
		{
			iVar0 = func_1270();
		}
		else
		{
			iVar0 = func_1271();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_1272();
	}
	else
	{
		iVar0 = func_1273();
	}
	if (iVar0 != 0)
	{
		Global_1946804->f_2791 = get_game_timer();
		_task_item_interaction(Global_35, iParam0, iVar0, 1, iParam1, -1082130432);
		return 1;
	}
	return 0;
}

void func_1158(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = get_game_timer();
	func_1274(iParam0, iParam1, bParam2);
}

bool func_1159()
{
	return false;
}

bool func_1160(int iParam0, var uParam1)
{
	if (!func_1275(iParam0))
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

void func_1161(char* sParam0, bool bParam1, bool bParam2)
{
	stop_scripted_conversation(sParam0, bParam1, bParam2);
}

void func_1162(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, var uParam6, var uParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, bool bParam19, int iParam20, int iParam21, bool bParam22)
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
		func_1276(iParam0, iParam1, iParam18);
	}
}

bool func_1163(int iParam0)
{
	if (!_does_volume_exist(iParam0->f_39))
	{
		return true;
	}
	if (func_282(iParam0->f_40, 1, 1) < iParam0->f_42)
	{
		return false;
	}
	if (func_215(Global_35, iParam0->f_39, 1, 0))
	{
		return true;
	}
	if (!func_215(iParam0->f_40, iParam0->f_39, 1, 0))
	{
		return false;
	}
	return true;
}

void func_1164(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
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
		func_1277(bParam4, bParam5, bParam6, bParam7, bParam3, bParam9, bParam10);
		if (bParam2)
		{
			set_ped_reset_flag(iParam0, 188, true);
		}
	}
}

bool func_1165(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_917(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_1166(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_1167(int iParam0)
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

int func_1168(int iParam0)
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
	func_1278(iVar0, &uVar2, &uVar3, &iVar1, &uVar4);
	if (func_1279(&uVar5, iVar0, iVar1, uVar2))
	{
	}
	return uVar5;
}

int func_1169(int iParam0)
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
			iVar0 = func_1280(iVar1);
		}
	}
	return iVar0;
}

int func_1170(int iParam0)
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

bool func_1171(int iParam0, int iParam1)
{
	if (func_1() == -1)
	{
		if (iParam1 == 61)
		{
			if (func_1269(iParam0, 1490540191))
			{
				return true;
			}
		}
	}
	return false;
}

int func_1172(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar5 = func_911(iParam1);
	if (iVar5 == -1)
	{
		return 0;
	}
	if (!func_1160(6, &Var0))
	{
		return 0;
	}
	Var0.f_2 = -815325344;
	Var0.f_3 = func_1281(iVar5);
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

Vector3 func_1173(vector3 vParam0, float fParam3)
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

bool func_1174(int iParam0, int iParam1)
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

bool func_1175(int iParam0, int iParam1)
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

bool func_1176(int iParam0, int iParam1)
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
	if (!func_1174(iParam0, iVar0))
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

void func_1177(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

float func_1178(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

struct<4> func_1179()
{
	return Var0;
}

bool func_1180(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_1181(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

int func_1182(int iParam0)
{
	if (!func_140(iParam0))
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

int func_1183()
{
	return Global_40.f_11095.f_35;
}

void func_1184(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_1282(bParam1);
	}
}

void func_1185(int iParam0)
{
	_0x74bcceb233ad95b2(-156028329, iParam0);
}

char* func_1186(int iParam0)
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

bool func_1187(int iParam0)
{
	if (!func_1160(23, &vVar0))
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

bool func_1188(int iParam0, int iParam1, int iParam2)
{
	if (!func_1160(23, &Var0))
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

int func_1189(int iParam0)
{
	return iParam0;
}

int func_1190()
{
	iVar0 = func_1073();
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

void func_1191(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

bool func_1192(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_1193(int iParam0, int iParam1, var uParam2)
{
	if (!func_1192(iParam0))
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

bool func_1194()
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

void func_1195(int iParam0)
{
	Global_1914319->f_15923 = iParam0;
}

bool func_1196(int iParam0)
{
	return iParam0 != 0;
}

bool func_1197()
{
	return (Global_1914319->f_17369 || Global_1914319->f_18996.f_1);
}

bool func_1198(int iParam0, int iParam1)
{
	iParam0 = func_560(iParam0);
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

void func_1199(var uParam0)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1284(func_1283(255), 109029619));
	}
	else if (func_1285())
	{
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_1075();
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_1200(int iParam0)
{
	iParam0 = func_560(iParam0);
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

void func_1201(var uParam0, bool bParam1)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1284(func_1283(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_1285())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_1075())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (compare_strings(sVar0, "", false, -1) != 0)
		{
			set_blip_name_from_text_file(*uParam0, sVar0);
		}
	}
}

int func_1202(int iParam0)
{
	iParam0 = func_560(iParam0);
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

float func_1203(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

float func_1204(int iParam0)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_1250(iParam0);
	if (!is_model_valid(iVar0))
	{
		return -1f;
	}
	iVar1 = func_1200(iParam0);
	iVar2 = get_default_max_attribute_rank(iVar0, 7);
	fVar3 = _0xeb67d4e056c85a81(iVar1);
	fVar4 = _0x78d8c1d4eb80c588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_1200(iParam0) + 1;
	fVar6 = func_1286(iParam0);
	fVar7 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar1));
	fVar8 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_1178(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_1205(int iParam0)
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

void func_1206(int iParam0)
{
	_set_blip_flash_style(iParam0, 673950256);
	_set_blip_flash_style(iParam0, 561559387);
	_set_blip_flash_style(iParam0, -201249929);
}

bool func_1207(int iParam0, int* iParam1)
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
		if (is_ped_in_combat(iParam0, func_1287((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_1208(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_1221((*uParam0)[iVar0]))
		{
			func_951((*uParam0)[iVar0], 14);
		}
		iVar0++;
	}
}

int func_1209(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(*uParam2)[iVar0]->f_8 = 6;
		func_1288(iParam0, (*uParam2)[iVar0], fParam3, 3, 0, 6, bParam4, 0);
		if (func_310((*uParam2)[iVar0]->f_6))
		{
			func_951((*uParam2)[iVar0], 11);
			return (*Global_1945938)[(*uParam2)[iVar0]->f_6]->f_3;
		}
	}
	return 0;
}

int func_1210(int* iParam0)
{
	iVar0 = func_1289(*iParam0);
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

int func_1211(var uParam0, int iParam1)
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

void func_1212(int* iParam0, int* iParam1)
{
	if (!func_1111(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_951(iParam1, 19);
			func_1223(iParam0, 23);
			func_1290(iParam1, 2);
		}
	}
}

bool func_1213(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (func_1291(16))
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
					func_1292(16);
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

void func_1214(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_1288(iParam0, (*uParam1)[iVar0], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			clear_bit((*uParam1)[iVar0], 14);
		}
		iVar0++;
	}
}

void func_1215(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (is_bit_set(*iParam1, 14))
	{
		if (func_1221(iParam1))
		{
			clear_bit(iParam1, 14);
			func_1288(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_1216(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_1293(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_994(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_810(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_810(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_1294(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_1217(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_753(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_1295(iParam1, 1))
	{
		func_1296(iParam1, 1);
		return true;
	}
	return false;
}

void func_1218(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_662((*uParam0)[iVar0], bParam1, bParam2);
		iVar0++;
	}
}

bool func_1219(int* iParam0, float fParam1, bool bParam2)
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

void func_1220(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		disable_control_action(0, 1101824977, true);
		disable_control_action(0, 966551065, true);
		disable_control_action(0, 668058244, true);
		set_ped_reset_flag(Global_35, 203, true);
	}
}

bool func_1221(int* iParam0)
{
	if (!is_string_null_or_empty(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_1222(int iParam0)
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

void func_1223(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

bool func_1224(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

bool func_1225(int iParam0, int iParam1)
{
	if (func_1() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_1226(int iParam0)
{
	if (func_1() != -1)
	{
		if (func_1228(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_1228(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_1227(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_1228(iParam0, 65536) && !func_1228(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_1228(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_1228(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1228(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_1229()
{
	return Global_1905944->f_5694;
}

void func_1230(int iParam0, int iParam1)
{
	if (iParam1 >= 0)
	{
		iLocal_2130[iParam1] = iParam0;
	}
	else
	{
		iLocal_2130[iVar2142] = iParam0;
		iLocal_2146 = iVar2142 + 1;
	}
}

char* func_1231()
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

int func_1232(float fParam0)
{
	fVar2 = 0f;
	iVar0 = 0;
	while (iVar0 < iVar2143)
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

bool func_1233(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < iVar2143)
	{
		if (&iLocal_2130[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1234(int iParam0)
{
	if (!is_entity_dead(*iParam0))
	{
		if (has_anim_event_fired(*iParam0, 1428722195))
		{
			iLocal_486[0] = 0;
		}
		else if (has_anim_event_fired(*iParam0, 1738422014))
		{
			iLocal_486[0] = 1;
		}
		else if (has_anim_event_fired(*iParam0, -1327707782))
		{
			iLocal_486[0] = 2;
		}
		else if (has_anim_event_fired(*iParam0, -1022661161))
		{
			iLocal_486[0] = 3;
		}
		else
		{
			iLocal_486[0] = -1;
		}
	}
}

void func_1235(int iParam0)
{
	if (!is_entity_dead(*iParam0))
	{
		if (has_anim_event_fired(*iParam0, 1428722195))
		{
			iLocal_486[1] = 0;
		}
		else if (has_anim_event_fired(*iParam0, 1738422014))
		{
			iLocal_486[1] = 1;
		}
		else
		{
			iLocal_486[1] = -1;
		}
	}
}

char* func_1236(char* sParam0)
{
	return sParam0;
}

bool func_1237(int iParam0)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_1252(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_1238(int iParam0)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_1102(iParam0))
	{
		return;
	}
	iVar0 = func_287(iParam0);
	func_1297(iParam0);
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	iVar1 = get_entity_model(iVar0);
	if (_0xaa9f048dcf69b6dc(iVar1))
	{
		if (!func_1298(iVar1))
		{
			set_ped_model_is_suppressed(iVar1, false);
		}
	}
	delete_ped(&iVar0);
	func_1299(iParam0, 0);
	func_633(iParam0);
}

void func_1239(int iParam0)
{
	iParam0 = func_560(iParam0);
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
	func_1300(&Var0);
	func_1301(iParam0, Var0);
	func_1302(&(Global_40.f_1095.f_1[iParam0]->f_15));
	func_1303(&(Global_40.f_1095.f_1[iParam0]->f_298));
	func_1304(&(Global_40.f_1095.f_1[iParam0]->f_356));
	func_1305(&(Global_40.f_1095.f_1[iParam0]->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_1306(iVar2, Global_40.f_1095.f_1[iParam0]->f_398[iVar2]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_1307(iVar3, Global_40.f_1095.f_1[iParam0]->f_407[iVar3]);
		iVar3++;
	}
	func_1308(&(Global_40.f_1095.f_1[iParam0]->f_420));
	func_1309(&(Global_40.f_1095.f_1[iParam0]->f_422));
	func_1310(&(Global_40.f_1095.f_1[iParam0]->f_425));
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

void func_1240(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_1241(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

int func_1242(vector3 vParam0)
{
	return func_1311(_get_map_zone_at_coords(vParam0, 10));
}

bool func_1243(int iParam0)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_1102(iParam0))
	{
		return false;
	}
	iVar0 = func_287(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

bool func_1244(int iParam0)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_1102(iParam0))
	{
		return false;
	}
	iVar0 = func_287(iParam0);
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

void func_1245(int iParam0)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_1102(iParam0))
	{
		return;
	}
	iVar0 = func_287(iParam0);
	if (is_entity_dead(iVar0))
	{
		return;
	}
	_set_entity_health(iVar0, 0, 0);
}

void func_1246(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (is_player_dead(iVar0))
	{
	}
	func_1104(iParam0);
	func_1104(iParam0);
	func_1312(iParam0, iParam1);
	func_1313(iParam0, iParam1);
	func_1314(iParam0, iParam1);
	iVar1 = func_287(iParam0);
	if (does_entity_exist(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_1315(iVar1);
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
	iVar3 = func_287(iParam1);
	if (does_entity_exist(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_1315(iVar3);
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
	func_924();
}

bool func_1247()
{
	iVar0 = func_1316();
	if (does_entity_exist(iVar0))
	{
		return true;
	}
	return false;
}

void func_1248()
{
	iVar0 = func_1316();
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	delete_object(&iVar0);
	func_1317(0);
}

void func_1249(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

int func_1250(int iParam0)
{
	iParam0 = func_560(iParam0);
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

int func_1251(int iParam0)
{
	iParam0 = func_560(iParam0);
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

int func_1252(int iParam0)
{
	iParam0 = func_560(iParam0);
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

void func_1253(int iParam0)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1318(&uVar0, &uVar1, &uVar2);
	func_1319(iParam0, uVar0);
	func_1320(iParam0, uVar1);
	func_1321(iParam0, uVar2);
	func_1322(iParam0, 1);
	func_1323(iParam0, 1);
}

void func_1254(int iParam0)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1324(iParam0, 1);
}

void func_1255(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_560(iParam0);
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

bool func_1256(int iParam0)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return func_1198(iParam0, 1);
}

struct<2> func_1257(int iParam0)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_1325(iParam0, &uVar2))
	{
	}
	if (!func_1326(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_1258()
{
	if (func_1327(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_1327(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_1327(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_1327(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_1327(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_1327(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_1259(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_1328(iParam0);
	func_1329(iParam0, uParam1);
	func_1330(iParam0);
	func_1331(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_1332(iParam0, iParam3, 0);
	}
	_update_ped_variation(iParam0, false, true, true, true, true);
}

void func_1260(int iParam0)
{
	iParam0 = func_560(iParam0);
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

bool func_1261()
{
	if (func_1333())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_1262(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1334((Global_40.f_4283.f_325 + iParam0));
}

void func_1263(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_1261())
	{
		func_1084(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_1084(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

int func_1264(int iParam0)
{
	iVar0 = func_1336(func_1335(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946804->f_1497.f_1[iVar0]->f_1;
	}
	return 0;
}

bool func_1265(int iParam0, int iParam1)
{
	iVar1 = func_1336(func_1335(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1946804->f_1497.f_1[iVar1] != 0 && &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1];
		if (func_918(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

bool func_1266()
{
	if (Global_1946804->f_2793)
	{
		return true;
	}
	if (absi((get_game_timer() - Global_1946804->f_2791)) < 1250)
	{
		return true;
	}
	if (func_1337())
	{
		return true;
	}
	if (_0xec7e480ff8bd0bed(Global_35))
	{
		return true;
	}
	return false;
}

bool func_1267(int iParam0, int iParam1, bool bParam2)
{
	if (!func_1065(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_1057(iParam0);
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
		if (!func_1338(iParam0, 1))
		{
			return false;
		}
	}
	return func_1339(iParam0, 0, bParam2) >= iParam1;
}

int func_1268(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_1155(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1269(int iParam0, int iParam1)
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

int func_1270()
{
	iVar0 = 1549701178;
	switch (func_1340())
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

int func_1271()
{
	iVar0 = 614608656;
	switch (func_1340())
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

int func_1272()
{
	iVar0 = -1832677570;
	switch (func_1340())
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

int func_1273()
{
	iVar0 = 1623252156;
	switch (func_1340())
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

void func_1274(int iParam0, int iParam1, bool bParam2)
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

bool func_1275(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

void func_1276(int iParam0, int iParam1, int iParam2)
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

void func_1277(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
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
	func_986(0);
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

void func_1278(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4)
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

bool func_1279(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_1280(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (!_0x9a100f1cf4546629(iParam0) && !_0xc346a546612c49a9(iParam0))
	{
		return 0;
	}
	func_1278(iParam0, &iVar1, &uVar2, &iVar0, &uVar3);
	func_1279(&iVar4, iParam0, iVar0, iVar1);
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

int func_1281(int iParam0)
{
	return func_1341(iParam0);
}

void func_1282(bool bParam0)
{
	func_1342(bParam0);
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

char* func_1283(int iParam0)
{
	if (iParam0 == 255)
	{
		if (func_1343(37, iParam0))
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
	if (func_1343(37, iParam0))
	{
		return _0xd8402b858f4ddd88(&((*Global_1108178)[iParam0]->f_12), get_length_of_literal_string(&((*Global_1108178)[iParam0]->f_12)));
	}
	return get_player_name(&(Global_1225639->f_120[iParam0]));
}

char* func_1284(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_1344(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

bool func_1285()
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

float func_1286(int iParam0)
{
	iParam0 = func_560(iParam0);
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

int func_1287(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_1288(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (func_310(iParam1->f_6))
	{
		if (bParam7 || is_bit_set(*iParam1, 11))
		{
			return;
		}
		func_311(&(iParam1->f_6), 0, 1);
	}
	if (!func_310(iParam1->f_6) && !is_bit_set(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_1221(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_996(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_310(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_1294(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_1345(iParam1->f_6, 17, 1, 1);
				}
				if (is_bit_set(*iParam1, 1))
				{
					if (is_bit_set(*iParam1, 3))
					{
						func_1346(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_947(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (is_bit_set(*iParam1, 10))
				{
					func_1345(iParam1->f_6, 16, 1, 1);
				}
				if (!is_bit_set(*iParam1, 0) || is_bit_set(*iParam1, 13))
				{
					func_810(iParam1->f_6, 0, 1);
				}
				else
				{
					func_810(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_1289(int iParam0)
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

void func_1290(int* iParam0, int iParam1)
{
	if (!func_950(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_951(iParam0, 14);
		}
	}
}

bool func_1291(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_1292(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

bool func_1293(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

void func_1294(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam3 && !func_310(iParam0))
	{
		return;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = func_604(iParam0);
	func_1345(iParam0, 18, 0, 1);
	func_1345(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = _uiprompt_get_group_id_for_target_entity(iParam1);
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam4, iParam2);
}

bool func_1295(int iParam0, bool bParam1)
{
	if (bParam1 && !func_310(iParam0))
	{
		return false;
	}
	iVar0 = func_604(iParam0);
	return _uiprompt_is_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_1296(int iParam0, bool bParam1)
{
	if (bParam1 && !func_310(iParam0))
	{
		return;
	}
	iVar0 = func_604(iParam0);
	_uiprompt_restart_modes((*Global_1945938)[iVar0]->f_3);
}

void func_1297(int iParam0)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_287(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_1347(iVar6);
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

bool func_1298(int iParam0)
{
	if (!func_1348(iParam0))
	{
		return false;
	}
	if (!func_1349())
	{
		return true;
	}
	return false;
}

void func_1299(int iParam0, int iParam1)
{
	iParam0 = func_560(iParam0);
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

void func_1300(var uParam0)
{
	*uParam0 = -377364164;
	uParam0->f_1 = 357708345;
}

void func_1301(int iParam0, struct<2> Param1)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_1350(iParam0, Param1))
	{
	}
	if (!func_1351(iParam0, Param1.f_1))
	{
	}
}

void func_1302(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_1352((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_1303(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 57)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_1304(var uParam0)
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

void func_1305(var uParam0)
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

void func_1306(int iParam0, var uParam1)
{
	iVar0 = 100;
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_1307(int iParam0, var uParam1)
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

void func_1308(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1f;
}

void func_1309(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -15;
}

void func_1310(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
}

int func_1311(int iParam0)
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

void func_1312(int iParam0, int iParam1)
{
	_copy_memory(&(Global_1900383->f_508), Global_40.f_1095.f_1[iParam1], 436);
	_copy_memory(Global_40.f_1095.f_1[iParam1], Global_40.f_1095.f_1[iParam0], 436);
	_copy_memory(Global_40.f_1095.f_1[iParam0], &(Global_1900383->f_508), 436);
}

void func_1313(int iParam0, int iParam1)
{
	_copy_memory(&(Global_1900383->f_463), (*Global_1900383)[iParam1], 45);
	_copy_memory((*Global_1900383)[iParam1], (*Global_1900383)[iParam0], 45);
	_copy_memory((*Global_1900383)[iParam0], &(Global_1900383->f_463), 45);
}

int func_1314(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	Var29.f_9 = -1591664384;
	if (!func_1353(iParam0, &Var0))
	{
		return 0;
	}
	bVar58 = false;
	if (!func_1353(iParam1, &Var29))
	{
		bVar58 = true;
	}
	if (bVar58)
	{
		iVar59 = func_1354(iParam1);
		if (iVar59 == 0)
		{
			return 0;
		}
		if (!func_1355(Var0, Var0.f_5, iVar59, 0, 0))
		{
			return 0;
		}
	}
	else if (!func_1356(Var0, Var29, 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_1315(int iParam0)
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
	if (func_1357(iParam0))
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
	if (func_627(iParam0))
	{
		iVar3 = func_628(iParam0);
		if (func_1358(iVar3))
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

int func_1316()
{
	return Global_1900383->f_393;
}

void func_1317(int iParam0)
{
	Global_1900383->f_393 = iParam0;
}

int func_1318(var uParam0, int iParam1, var uParam2)
{
	*uParam0 = 0;
	*iParam1 = 0;
	*uParam2 = 0;
	if (func_1070())
	{
		if (func_1285())
		{
			bVar0 = false;
			if (!func_208((*Global_1835011)[15]->f_1, 1) && !func_1069(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*uParam0 = func_1359();
				*iParam1 = func_1360();
				*uParam2 = func_1361();
				return 1;
			}
			else
			{
				*uParam0 = func_1362();
				*iParam1 = func_1363();
				*uParam2 = func_1364();
				return 1;
			}
		}
		else if (func_1075())
		{
			if (!func_208((*Global_1835011)[60]->f_1, 1))
			{
				*uParam0 = func_1365();
				*iParam1 = func_1366();
				*uParam2 = func_1367();
				return 1;
			}
			else
			{
				*uParam0 = func_1368();
				*iParam1 = func_1369();
				*uParam2 = func_1370();
				return 1;
			}
		}
	}
	else if (func_1285())
	{
		*uParam0 = func_1371();
		*iParam1 = func_1372();
		*uParam2 = func_1373();
		return 1;
	}
	else if (func_1075())
	{
		*uParam0 = func_1374();
		*iParam1 = func_1375();
		*uParam2 = func_1376();
		return 1;
	}
	return 0;
}

void func_1319(int iParam0, var uParam1)
{
	iParam0 = func_560(iParam0);
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

void func_1320(int iParam0, var uParam1)
{
	iParam0 = func_560(iParam0);
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

void func_1321(int iParam0, var uParam1)
{
	iParam0 = func_560(iParam0);
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

void func_1322(int iParam0, int iParam1)
{
	iParam0 = func_560(iParam0);
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

void func_1323(int iParam0, int iParam1)
{
	iParam0 = func_560(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_1250(iParam0);
	if (!is_model_valid(iVar0))
	{
		func_1318(&uVar1, &iVar0, &uVar2);
	}
	iVar3 = get_default_max_attribute_rank(iVar0, 7);
	if (iParam1 > iVar3)
	{
		return;
	}
	fVar4 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iParam1));
	Global_40.f_1095.f_1[iParam0]->f_372 = iParam1;
	Global_40.f_1095.f_1[iParam0]->f_372.f_1 = fVar4;
	func_1377(iParam1);
	iVar5 = func_287(iParam0);
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

void func_1324(int iParam0, int iParam1)
{
	iParam0 = func_560(iParam0);
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

bool func_1325(int iParam0, var uParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_1353(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = func_1378(Var0, 1415981582, 0);
	if (!func_1065(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_1326(int iParam0, var uParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_1353(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = func_1378(Var0, -2119169513, 0);
	if (!func_1065(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_1327(int iParam0, var uParam1)
{
	if (!func_1379(856287005, iParam0))
	{
		return false;
	}
	Var0 = { func_1380() };
	*uParam1 = func_1378(Var0, iParam0, 0);
	if (!func_1065(*uParam1, 0))
	{
		return false;
	}
	return true;
}

void func_1328(int iParam0)
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

void func_1329(int iParam0, var uParam1)
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
	func_1381(iParam0, *uParam1);
	func_1381(iParam0, uParam1->f_1);
}

void func_1330(int iParam0)
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

void func_1331(int iParam0, var uParam1)
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
	func_1381(iParam0, *uParam1);
	func_1381(iParam0, uParam1->f_1);
	func_1381(iParam0, uParam1->f_2);
	func_1381(iParam0, uParam1->f_3);
	func_1381(iParam0, uParam1->f_4);
	func_1381(iParam0, uParam1->f_5);
}

int func_1332(int iParam0, int iParam1, bool bParam2)
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

bool func_1333()
{
	return _unlock_is_unlocked(-121456797);
}

void func_1334(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_1082(1356759001) };
	stat_id_set_int(&Var0, iParam0, true);
}

int func_1335(int iParam0)
{
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_1382(iVar0);
}

int func_1336(int iParam0, int iParam1)
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

bool func_1337()
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

bool func_1338(int iParam0, int iParam1)
{
	if (!func_1065(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_1383(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1165("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1166(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_352(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_1167(iVar1);
				return true;
			}
			iVar3++;
		}
		func_1167(iVar1);
	}
	return false;
}

int func_1339(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1065(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_1057(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_1383(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_1384(iParam0, 0);
	}
	uVar2 = _0xe787f05dfc977bde(func_917(bParam2), iParam0, 0);
	return uVar2;
}

int func_1340()
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
		else if ((((is_weapon_valid(iVar0) && _is_weapon_two_handed(iVar0)) && !func_1385(iVar0)) && !_is_ped_getting_into_a_mount_seat(Global_35, true)) && !(is_ped_in_any_vehicle(Global_35, false) && !_0xa24c1d341c6e0d53(1, 0, 0)))
		{
			return 3;
		}
		else if (iVar0 == -160924582)
		{
			return 1;
		}
		else if ((is_weapon_valid(iVar0) && func_1385(iVar0)) || iVar0 == 2055893578)
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

int func_1341(int iParam0)
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

void func_1342(bool bParam0)
{
	_0xb6fd96420c0126a1(-1056478928, bParam0);
}

bool func_1343(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_1386(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_1387())
	{
		return func_1386(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_1386(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

char* func_1344(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

void func_1345(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_310(iParam0))
	{
		return;
	}
	iVar0 = func_604(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_1346(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (bParam4 && !func_310(iParam0))
	{
		return;
	}
	iVar0 = func_604(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(10, sParam1, sParam2, sParam3));
}

int func_1347(int iParam0)
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

bool func_1348(int iParam0)
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

bool func_1349()
{
	return _unlock_is_unlocked(99890643);
}

bool func_1350(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_1353(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { func_844(iParam1, Var0, 1415981582, 0) };
	return func_1388(Var29, 1);
}

bool func_1351(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_1353(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { func_844(iParam1, Var0, -2119169513, 0) };
	return func_1388(Var29, 1);
}

void func_1352(var uParam0)
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

bool func_1353(int iParam0, var uParam1)
{
	if (!func_1389(iParam0))
	{
		return false;
	}
	iVar0 = func_1354(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1.f_9 = -1591664384;
	Var15 = { func_1056(0) };
	if (!func_1390(Var15, iVar0, &Var1, 0, 0))
	{
		return false;
	}
	if (!func_1391(&Var1, uParam1))
	{
		return false;
	}
	return true;
}

int func_1354(int iParam0)
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

bool func_1355(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10)
{
	if (!func_846(bParam10))
	{
		return func_1392(Param0, Param4, iParam8, 1, bParam9, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1062(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (func_1393(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return true;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, iParam8))
	{
		return false;
	}
	if (!_0xdccaa7c3bfd88862(func_917(0), &Param0, &Param4, iParam8, Var0.f_11, &Var14))
	{
		return false;
	}
	if (bParam9)
	{
		if (!func_1388(Var14, 1))
		{
		}
	}
	return true;
}

bool func_1356(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	if (!func_846(bParam9))
	{
		return func_1394(Param0, Param4, iParam8, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return false;
	}
	if (func_1393(&Param0, &Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_1062(Param0, &Var0, bParam9, 1) || !func_1062(Param4, &Var14, bParam9, 1))
	{
		return false;
	}
	if (func_1393(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return false;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, Var14.f_9) || !_inventory_fits_slot_id(Var14.f_4, Var0.f_9))
	{
		return false;
	}
	iVar28 = func_917(0);
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

bool func_1357(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_1395(get_entity_model(iParam0)))
	{
		return true;
	}
	if (decor_exist_on(iParam0, "HorseCompanion"))
	{
		return true;
	}
	return false;
}

bool func_1358(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 5)
	{
		return true;
	}
	return false;
}

int func_1359()
{
	return 1342496140;
}

int func_1360()
{
	return 446670976;
}

int func_1361()
{
	return 1;
}

int func_1362()
{
	return -868094182;
}

int func_1363()
{
	return 1074477367;
}

int func_1364()
{
	return 1;
}

int func_1365()
{
	return -997197050;
}

int func_1366()
{
	return -2063289686;
}

int func_1367()
{
	return 2;
}

int func_1368()
{
	return -868094182;
}

int func_1369()
{
	return 1074477367;
}

int func_1370()
{
	return 1;
}

int func_1371()
{
	return 1235275977;
}

int func_1372()
{
	return 2030804811;
}

int func_1373()
{
	return 1;
}

int func_1374()
{
	return 1974379573;
}

int func_1375()
{
	return 2024948086;
}

int func_1376()
{
	return 1;
}

void func_1377(int iParam0)
{
	if (func_1396() < iParam0)
	{
		func_1397(iParam0);
	}
}

int func_1378(struct<4> Param0, int iParam4, int iParam5)
{
	Var0.f_9 = -1591664384;
	if (func_1398(Param0, iParam4, &Var0, iParam5))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_1379(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		iVar5 = func_918(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_1399(iParam0);
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

struct<4> func_1380()
{
	Var0 = { func_1056(0) };
	return func_844(856287005, Var0, -218846335, 0);
}

void func_1381(int iParam0, int iParam1)
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

int func_1382(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_1400(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_1383(int iParam0, int iParam1)
{
	if (!func_1065(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_1057(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_1269(iParam0, 1399091007))
	{
		func_1401(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_1384(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_1402(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1403(&Var0, func_1058(0));
	}
	if (!func_1404(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_1167(iVar14);
	return uVar15;
}

bool func_1385(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

bool func_1386(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_1387()
{
	return Global_1109400->f_245;
}

bool func_1388(struct<4> Param0, int iParam4)
{
	if (!func_846(0))
	{
		return func_1405(Param0, iParam4, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1062(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!_0x734311e2852760d0(func_917(0), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_1389(int iParam0)
{
	iVar0 = func_1354(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1 = { func_1056(0) };
	if (func_1406(&Var1, iVar0, 0) > 0)
	{
		return true;
	}
	return false;
}

bool func_1390(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	iVar0 = func_917(bParam7);
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

bool func_1391(var uParam0, var uParam1)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (!_0x025a1b1fb03fbf61(func_917(0), uParam0, uParam1, 29, 1))
	{
		return false;
	}
	return true;
}

int func_1392(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10, bool bParam11)
{
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	if (!func_1062(Param0, &Var0, 1, 0))
	{
		return -1;
	}
	if (func_1393(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return -1;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, iParam8))
	{
		return -1;
	}
	iVar14 = func_1063(Var0.f_4, Param4, iParam8, 0);
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
	Var16 = { func_1407(&Var0) };
	Var16.f_4 = { Param4 };
	Var16.f_11 = iParam8;
	Var16.f_10 = bParam10;
	iVar32 = func_1408(1168099063, &Var16, bParam9);
	if (iVar32 == -1)
	{
		return -1;
	}
	return iVar32;
}

bool func_1393(var uParam0, bool bParam1)
{
	if (((*uParam0 == *bParam1 && uParam0->f_1 == bParam1->f_1) && uParam0->f_2 == bParam1->f_2) && uParam0->f_3 == bParam1->f_3)
	{
		return true;
	}
	return false;
}

int func_1394(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return -1;
	}
	if (func_1393(&Param0, &Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_1062(Param0, &Var0, 1, 0) || !func_1062(Param4, &Var14, 1, 0))
	{
		return -1;
	}
	if (func_1393(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return -1;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, Var14.f_9) || !_inventory_fits_slot_id(Var14.f_4, Var0.f_9))
	{
		return -1;
	}
	Var28 = { func_1407(&Var0) };
	Var28.f_4 = { Var14.f_5 };
	Var28.f_11 = Var14.f_9;
	Var28.f_10 = (Var14.f_10 || iParam8);
	Var44 = { func_1407(&Var14) };
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
					func_1409(iVar60, 1);
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
		iVar60 = func_1408(1168099063, &Var28, 0);
		iVar60 = func_1408(1168099063, &Var44, 0);
	}
	return iVar60;
}

bool func_1395(int iParam0)
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

int func_1396()
{
	return Global_40.f_1095.f_3135;
}

void func_1397(int iParam0)
{
	Global_40.f_1095.f_3135 = iParam0;
}

bool func_1398(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x22e590f108289a9d(func_917(bParam6), &uParam0, iParam4, &Var0))
	{
		return false;
	}
	if (!func_1062(Var0, uParam5, bParam6, 0))
	{
		return false;
	}
	return true;
}

int func_1399(int iParam0)
{
	if (!func_1065(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_918(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return _item_database_get_has_slot_count(iVar0);
}

int func_1400(int iParam0, int iParam1)
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

void func_1401(int iParam0, var uParam1, var uParam2)
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

struct<14> func_1402(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_1403(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_1404(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_917(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_1405(struct<4> Param0, int iParam4, bool bParam5)
{
	iVar0 = -1;
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_1062(Param0, &Var1, 1, 0))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_1057(Var1.f_4);
	if (iVar15 == -1784221369)
	{
		Var16 = { func_1410(Param0, 1) };
		Var16.f_10 = iParam4;
		iVar0 = func_1411(-1230526146, &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -1037537535)
	{
		Var44 = { func_1412(Param0, 1) };
		Var44.f_10 = iParam4;
		iVar0 = func_1413(-1230526146, &Var44, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var61 = { func_1407(&Var1) };
		Var61.f_10 = iParam4;
		iVar0 = func_1408(-1230526146, &Var61, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_1406(var uParam0, int iParam1, bool bParam2)
{
	return _0x033ee4b89f3ac545(func_917(bParam2), uParam0, iParam1);
}

struct<16> func_1407(var uParam0)
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

int func_1408(int iParam0, var uParam1, bool bParam2)
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
					func_1409(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_1409(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16))
	{
		func_1409(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_1409(int iParam0, int iParam1)
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
	func_1414(iParam0, iParam1);
}

struct<28> func_1410(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var28.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_917(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_1407(&Var28) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_1411(int iParam0, var uParam1, bool bParam2)
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
					func_1409(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_1409(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 28))
	{
		func_1409(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<17> func_1412(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_917(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_1407(&Var17) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_1413(int iParam0, var uParam1, bool bParam2)
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
					func_1409(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_1409(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 17))
	{
		func_1409(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_1414(int iParam0, int iParam1)
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

