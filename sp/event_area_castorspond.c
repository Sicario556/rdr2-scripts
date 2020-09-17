void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_27 = 1;
	iLocal_28 = 2;
	iLocal_29 = -1;
	Local_1389.f_136 = 1;
	Local_1389.f_137 = uVar2205;
	Local_1389.f_138 = 64;
	if (func_1() != 0)
	{
	}
	else
	{
		func_2();
		func_3(Local_1389.f_136);
		return;
	}
	Local_386.f_4 = { -439.9877f, 501.6415f, 97.94789f };
	Local_386.f_7 = { -464.5924f, 469.1017f, 80f };
	Local_386.f_10 = { -387.3216f, 532.1035f, 125f };
	iLocal_1853 = func_4();
	func_5(1);
	func_7(4, func_6(Local_1389.f_136));
	if (func_8(Local_1389.f_136, 33554432))
	{
		func_5(4);
		func_9(Local_1389.f_136, 33554432);
	}
	func_7(64, !func_10(Local_1389.f_136, 64));
	func_12(256, func_11(Local_1389.f_136));
	func_7(2, func_13(Local_1389.f_136));
	func_7(16, func_14(&uLocal_1789));
	func_7(8, func_10(Local_1389.f_136, 128));
	func_7(256, !func_8(Local_1389.f_136, 131072));
	func_7(2048, func_15(64));
	func_7(4096, func_8(Local_1389.f_136, 64));
	func_7(8192, func_8(Local_1389.f_136, 128));
	func_7(131072, func_8(Local_1389.f_136, 2));
	func_5(8388608);
	func_16(0, &Local_1389, 0);
	func_12(64, func_17());
	func_18();
	func_3(Local_1389.f_136);
	func_19(&Local_1389, 32, ((func_10(Local_1389.f_136, 524288) || func_10(Local_1389.f_136, 1048576)) || func_10(Local_1389.f_136, 2097152)));
	if (!func_20(&Local_1389, 32))
	{
		iLocal_1759[0] = _create_volume_box_with_custom_name(-439.8f, 500.2f, 98.8f, 0f, 0f, 0f, 30.76097f, 33.35877f, 15.06476f, "Castor's Ridge - companionVolume");
	}
	if (func_20(&Local_1389, 32))
	{
		if (!func_21(256))
		{
			iVar0 = 16;
			func_22((*Global_1392194)[Local_1389.f_136]->f_6, iVar0);
		}
	}
	else
	{
		func_23((*Global_1392194)[Local_1389.f_136]->f_6);
	}
	iLocal_18 = func_24(Local_1389.f_136);
	if (!func_8(Local_1389.f_136, 2097152))
	{
		func_25(Local_1389.f_136, 2097152);
	}
	func_19(&Local_1389, 2048, iLocal_18 == 5);
	if (iLocal_18 < 4)
	{
		func_26();
	}
	if (iLocal_18 == 1 && !func_27(8))
	{
		iLocal_1759[1] = _create_volume_box_with_custom_name(-439.4236f, 503.3533f, 98.76091f, 0f, 0f, 1.506823f, 5.272687f, 2.633899f, 3.570507f, "Castor's Ridge - volFrame");
		iLocal_1759[3] = _create_volume_box_with_custom_name(-439.2235f, 501.9597f, 99.17344f, 0f, 0f, 1.506823f, 6.000473f, 4.019011f, 5.080577f, "Castor's Ridge - volBlocking");
		iLocal_1759[2] = _create_volume_box_with_custom_name(-439.4028f, 502.0049f, 101.2801f, 0f, 0f, 2.529653f, 5.277621f, 1f, 1.514907f, "Castor's Ridge - volFrameTrigger");
		if (func_20(&Local_1389, 32))
		{
			func_28();
		}
	}
	else if (iLocal_18 == 2 && !func_27(8))
	{
		iLocal_1759[4] = _create_volume_cylinder_with_custom_name(-448.6899f, 508.8307f, 100.9918f, 0f, 0f, 1.631845f, 9.986375f, 8.676397f, 4.074053f, "Castor's Ridge - volFollow");
	}
	else if (iLocal_18 == 3 && !func_27(8))
	{
		iLocal_1759[2] = _create_volume_box_with_custom_name(-443.7617f, 502.7154f, 98.70467f, 0f, 0f, 1.799746f, 3.666057f, 1.748832f, 3.458851f, "Castor's Ridge - volStairs");
		iLocal_1759[4] = _create_volume_aggregate_with_custom_name("Castor's Ridge - volFollow");
		_0xbce668aaf83608be(&(iLocal_1759[4]), -436.1921f, 513.9036f, 100.7752f, 0f, 0f, -28.38637f, 13.09126f, 8.676397f, 4.074053f);
		_0xbce668aaf83608be(&(iLocal_1759[4]), -455.4126f, 509.8932f, 100.7752f, 0f, 0f, 51.85447f, 13.09126f, 8.676397f, 4.074053f);
		_0x39816f6f94f385ad(&(iLocal_1759[4]), -444.5037f, 509.3485f, 100.6195f, 0f, 0f, 1.838882f, 5.715972f, 3.997581f, 8.804232f);
		_0x39816f6f94f385ad(&(iLocal_1759[4]), -449.1066f, 518.0027f, 100.8164f, 0f, 0f, 23.93622f, 13.16835f, 5.263707f, 8.498951f);
		_0xb56d41a694e42e86(&(iLocal_1759[4]), 2048, 0, 0, -1, -1, 0);
	}
	else if (iLocal_18 == 4 || iLocal_18 == 5)
	{
		iLocal_1759[2] = _create_volume_box_with_custom_name(-443.7643f, 500.9564f, 99.21016f, 0f, 0f, 2.481348f, 3.629966f, 1.99332f, 4.66624f, "Castor's Ridge - volNav");
		iLocal_1759[3] = _create_volume_box_with_custom_name(-443.4818f, 497.02f, 99.15102f, 0f, 0f, 2.391671f, 3.361284f, 5.955622f, 2.877767f, "Castor's Ridge - volHall");
	}
	if ((iLocal_18 == 5 || func_20(&Local_1389, 32)) || (iLocal_18 == 4 && func_27(8)))
	{
		func_29(Local_1389.f_138, 32);
		func_30(Local_1389.f_138);
	}
	else
	{
		func_31(Local_1389.f_138, 32);
	}
	if (iLocal_18 >= 4 || func_20(&Local_1389, 32))
	{
		func_29(65, 32);
		func_29(66, 32);
		func_30(65);
		func_30(66);
	}
	else
	{
		func_31(65, 32);
		func_31(66, 32);
		func_32(65);
		func_32(66);
	}
	if (func_8(Local_1389.f_136, 1048576))
	{
		func_31(67, 32);
		func_31(68, 32);
		func_32(65);
		func_32(66);
	}
	else
	{
		func_33(67);
		func_33(68);
		func_29(67, 32);
		func_29(68, 32);
	}
	func_34(Local_1389.f_136, Local_1389.f_137, &Local_386, &Local_1389, 1, 1);
	if (func_27(16))
	{
		iVar1 = 2;
	}
	if (iLocal_18 == 3 && !func_10(Local_1389.f_136, 4))
	{
		func_35();
	}
	func_36();
	func_37();
	func_38(&iVar1);
	func_39(&Local_1389);
	func_40(&Local_1389, 1);
	func_41(&Local_1389, 21);
	if (func_27(2))
	{
		Local_1549.f_3 = 1;
	}
	if (iLocal_18 != 5)
	{
	}
	else
	{
		func_42(&Local_1389, 512);
		func_43(32768);
	}
	if (has_force_cleanup_occurred(523))
	{
		iLocal_1856 = 1;
	}
	while (true)
	{
		func_44();
		func_46(bVar1854, 9783, 0);
		if (!bVar1854)
		{
			switch (iVar1819)
			{
				case 0:
					if (!func_20(&Local_1389, 32) && Local_386.f_3 < (iVar1 + (Local_386.f_1 + iVar384) + 3))
					{
						func_47(((3 + (iVar384 + Local_386.f_1)) + iVar1), &Local_386);
					}
					else if (func_48())
					{
						iLocal_1821 = 1;
					}
					break;
				case 1:
					func_49(32);
					if (!func_50(1) && func_51())
					{
						if (func_20(&Local_1389, 32))
						{
							func_43(1);
						}
						else if ((iLocal_18 == 2 || iLocal_18 == 4) && func_27(64))
						{
							bVar2 = func_50(32);
							func_53(1, func_52(&bVar2, &iLocal_1819));
							func_53(32, bVar2);
							if (func_50(1))
							{
								iLocal_1819 = 0;
							}
						}
						else
						{
							func_43(1);
						}
					}
					else if (!func_50(256) && func_51())
					{
						if (func_20(&Local_1389, 32))
						{
							func_43(256);
						}
						else if ((iLocal_18 == 2 || iLocal_18 == 4) && func_27(64))
						{
							bVar3 = func_50(32);
							func_53(256, func_54(&bVar3, &iLocal_1819));
							func_53(32, bVar3);
							if (func_50(256))
							{
								iLocal_1819 = 0;
							}
						}
						else
						{
							func_43(256);
						}
					}
					else if (!func_50(2))
					{
						if (func_55(Local_1389.f_138, 32) || func_20(&Local_1389, 32))
						{
							func_43(2);
						}
						else
						{
							func_56(Local_1389.f_138, 1, 0, 0, 0, 0);
							func_53(2, func_57(Local_1389.f_138, 1, 1));
							if (!is_entity_dead(func_58(Local_1389.f_138)))
							{
								set_ped_config_flag(func_58(Local_1389.f_138), 301, false);
								set_ped_config_flag(func_58(Local_1389.f_138), 297, true);
								set_ped_config_flag(func_58(Local_1389.f_138), 315, true);
								set_ped_config_flag(func_58(Local_1389.f_138), 146, true);
								func_59(&(Local_1389.f_35), func_58(Local_1389.f_138), "HOME_FOREMAN", 0);
							}
						}
					}
					else if (!func_50(4))
					{
						if ((iLocal_18 >= 4 || func_55(65, 32)) || func_20(&Local_1389, 32))
						{
							func_43(4);
						}
						else
						{
							func_56(65, 1, 0, 0, 0, 0);
							if ((iLocal_18 == 1 || iLocal_18 == 2) || func_27(8))
							{
								func_53(4, func_57(65, 1, 1));
							}
							else
							{
								func_53(4, !is_entity_dead(func_58(65)));
								if (!is_entity_dead(func_58(65)))
								{
									set_ped_config_flag(func_58(65), 301, false);
									set_ped_config_flag(func_58(65), 297, true);
									set_ped_config_flag(func_58(65), 146, true);
								}
							}
						}
					}
					else if (!func_50(8))
					{
						if ((iLocal_18 >= 4 || func_55(66, 32)) || func_20(&Local_1389, 32))
						{
							func_43(8);
						}
						else
						{
							func_56(66, 1, 0, 0, 0, 0);
							if ((iLocal_18 == 1 || iLocal_18 == 2) || func_27(8))
							{
								func_53(8, func_57(66, 1, 1));
							}
							else
							{
								func_53(8, !is_entity_dead(func_58(66)));
								if (!is_entity_dead(func_58(66)))
								{
									set_ped_config_flag(func_58(66), 301, false);
									set_ped_config_flag(func_58(66), 297, true);
									set_ped_config_flag(func_58(66), 146, true);
								}
							}
						}
					}
					if (!func_50(16))
					{
						if (func_60(&Local_386))
						{
							if (does_entity_exist(Local_386.f_690[3]->f_8))
							{
								set_entity_collision(Local_386.f_690[3]->f_8, false, false);
								set_entity_visible(Local_386.f_690[3]->f_8, false);
							}
							func_43(16);
						}
					}
					func_59(&(Local_1389.f_35), Global_35, "ARTHUR", 0);
					Local_2071.f_33 = { Local_1389.f_35 };
					Local_1857.f_81 = { Local_1389.f_35 };
					func_61(Local_1389.f_136, 1);
					if (((((((((!is_screen_faded_out() && func_50(1)) && func_50(2)) && func_50(4)) && func_50(8)) && func_50(16)) && func_50(256)) && func_62()) && func_63()) || func_20(&Local_1389, 32))
					{
						if (!is_entity_dead(func_58(Local_1389.f_138)))
						{
							set_ped_relationship_group_hash(func_58(Local_1389.f_138), -1976316465);
							func_64();
							func_65();
						}
						iLocal_1821 = 2;
					}
					break;
				case 2:
					if (func_20(&Local_1389, 128) && func_66(Local_1389.f_136, func_27(4)))
					{
						func_67(0);
						func_68(&Local_1389, 128);
					}
					if (iLocal_18 != 5 && func_16(iVar1638, &Local_1389, 5))
					{
						func_37();
					}
					func_69(&Local_1389, &Local_386);
					if (!func_20(&Local_1389, 2))
					{
						func_70(&iLocal_1768, &fLocal_1778, &Local_1389, 64, 66, &uLocal_1820, &uLocal_1640, 10, -1082130432, !func_21(2097152));
						func_71(&iLocal_1768);
						func_71(&iLocal_1794);
						func_72();
						if (func_73(&uLocal_33, 3))
						{
							func_74(vLocal_1578[11]);
						}
						if (func_75())
						{
							func_76(&Local_1389, &uLocal_1640, 3000, 10);
						}
						if ((!func_27(16) && !func_20(&Local_1389, 32)) && func_27(4))
						{
							func_77(&Local_1389, 0, 1073741824, 1071644672);
						}
						if (func_78())
						{
							func_79();
							func_80();
							func_81();
							func_82(&Local_1549, &Local_1389, 1);
							if (iLocal_18 >= 4)
							{
								func_83(&(iLocal_1759[1]));
							}
							else if (iLocal_18 >= 3)
							{
								func_84(&Local_1389);
							}
							if (!func_85())
							{
								func_42(&Local_1389, 4096);
							}
							func_86();
							func_87(&uLocal_1790);
							func_88(&Local_1389);
							func_89(&iLocal_30, 1);
							iVar4 = func_58(Local_1389.f_138);
							iVar5 = func_58(65);
							iVar6 = func_58(66);
							func_90(&iVar4, &iVar5, &iVar6, 1);
							stop_ped_speaking(iVar4, false);
							stop_ped_speaking(iVar5, false);
							stop_ped_speaking(iVar6, false);
							set_ped_config_flag(iVar4, 277, false);
							set_ped_config_flag(iVar5, 277, false);
							set_ped_config_flag(iVar6, 277, false);
							if (func_91(1))
							{
								func_42(&Local_1389, 4096);
								func_42(&Local_1389, 16384);
								func_92();
							}
							else
							{
								func_25(Local_1389.f_136, 1024);
							}
							set_player_control(get_player_index(), true, 0, false);
							func_68(&Local_1389, 65536);
							display_radar(true);
							display_hud(true);
							func_93(0);
							iVar7 = add_shocking_event_for_entity(-1905235087, Global_35, 1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
							if (!func_20(&Local_1389, 4096) && !func_50(524288))
							{
								if (!is_entity_dead(&(iLocal_1768[0])))
								{
									func_94(&(Local_1389.f_35), "HOME_AGGRO", &(iLocal_1768[0]), Global_35, 0, 0, 1, 1);
								}
								else if (!is_entity_dead(&(iLocal_1768[1])))
								{
									func_94(&(Local_1389.f_35), "HOME_DEAD_1", &(iLocal_1768[1]), Global_35, 0, 0, 1, 1);
								}
								else if (!is_entity_dead(&(iLocal_1768[2])))
								{
									func_95(&(iLocal_1768[2]), Global_35, "GENERIC_FRIGHTENED_HIGH", 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
								}
							}
							else if ((func_20(&Local_1389, 4096) || func_50(524288)) && func_20(&Local_1389, 8192))
							{
								if (!is_entity_dead(iVar1547) && !is_string_null_or_empty(Local_1549.f_20[0]))
								{
									func_94(&(Local_1389.f_35), Local_1549.f_20[0], iVar1547, Global_35, 0, 0, 1, 1);
								}
								else if (!is_entity_dead(&(iLocal_1768[0])))
								{
									func_94(&(Local_1389.f_35), "HOME_AGGRO", &(iLocal_1768[0]), Global_35, 0, 0, 1, 1);
								}
								else if (!is_entity_dead(&(iLocal_1768[1])))
								{
									func_94(&(Local_1389.f_35), "HOME_DEAD_1", &(iLocal_1768[1]), Global_35, 0, 0, 1, 1);
								}
								else if (!is_entity_dead(&(iLocal_1768[2])))
								{
									func_95(&(iLocal_1768[2]), Global_35, "GENERIC_FRIGHTENED_HIGH", 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
								}
							}
							func_42(&Local_1389, 2);
							func_96(Local_1389.f_136, 3);
							func_97(&Local_1389);
							iVar8 = 0;
							while (iVar8 < iVar1766)
							{
								if (!is_entity_dead(&(iLocal_1768[iVar8])))
								{
									if (func_99(func_98(&(iLocal_1768[iVar8]), 0)))
									{
										if (func_55(func_98(&(iLocal_1768[iVar8]), 0), 32))
										{
										}
										else
										{
											if (!func_100(func_98(&(iLocal_1768[iVar8]), 0), 0))
											{
												func_57(func_98(&(iLocal_1768[iVar8]), 0), 1, 1);
											}
											set_ped_config_flag(&(iLocal_1768[iVar8]), 277, false);
										}
										iVar8++;
										func_101(1);
										func_102();
										func_103();
										func_106(&Local_1389, &iLocal_1768, &uLocal_1790, 0, func_104(268435456, 1056964608, 1065353216), 3, iVar7, 1, func_20(&Local_1389, 4096), 0, func_105(&Local_1389, Local_1389.f_28), 1051260355);
										if (func_107(822112047))
										{
											iVar4 = func_108("HMSTD_FOREMAN");
										}
										else
										{
											iVar4 = func_58(Local_1389.f_138);
										}
										iVar9 = func_109(iVar4, 0, 1, 0);
										if (!is_weapon_valid(iVar9))
										{
											iVar9 = func_104(268435456, 1056964608, 1065353216);
										}
										if (func_110(iVar4, 0, 1))
										{
											set_ped_accuracy(iVar4, 55);
										}
										func_111(&Local_1389, iVar4, uLocal_1790[0], (func_20(&Local_1389, 4096) && !func_27(16)), iVar9, 0);
										if (iLocal_18 != 4)
										{
										}
										else if (!is_entity_dead(&(iLocal_1794[0])))
										{
											func_112(&(iLocal_1794[0]), Global_35);
											set_ped_as_no_longer_needed(iLocal_1794[0]);
										}
										func_42(&Local_1389, 128);
										Jump @4479; //curOff = 4337
										func_113(&iLocal_1768, &Local_1389);
										func_114();
										func_115();
										if (iLocal_18 != 4)
										{
										}
										else
										{
											if ((!func_107(965958659) && !is_entity_dead(&(iLocal_1794[0]))) && _is_mount_seat_free(&(iLocal_1794[0]), -1))
											{
												func_116(&(iLocal_1794[0]), 1, Global_35, "HMSTD_HORSE");
											}
											if (does_entity_exist(Local_386.f_690[0]->f_8))
											{
												_0x8bb99b85444544d9(Local_386.f_690[0]->f_8, func_117(-1506205562));
											}
										}
										func_103();
										iVar10 = Local_1389.f_139;
										if (!func_27(-2147483648))
										{
											if (func_118(&Local_1389, &iLocal_1768, &iLocal_1768, &(Local_1389.f_139), 1, 0))
											{
												if (!func_50(32768))
												{
													func_42(&Local_1389, 4);
												}
											}
											else if (!func_20(&Local_1389, 8) && !func_119(Local_1389.f_138, 0))
											{
												if (!func_50(32768))
												{
													func_42(&Local_1389, 8);
												}
											}
										}
										if (iVar10 != Local_1389.f_139)
										{
											if (!is_entity_dead(&(iLocal_1768[0])))
											{
												func_94(&(Local_1389.f_35), "HOME_AGGRO", &(iLocal_1768[0]), Global_35, 0, 0, 1, 1);
											}
											else if (!is_entity_dead(&(iLocal_1768[1])))
											{
												func_94(&(Local_1389.f_35), "HOME_DEAD_1", &(iLocal_1768[1]), Global_35, 0, 0, 1, 1);
											}
											else if (!is_entity_dead(&(iLocal_1768[2])))
											{
												func_95(&(iLocal_1768[2]), Global_35, "GENERIC_FRIGHTENED_HIGH", 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
											}
										}
										if (!func_20(&Local_1389, 2))
										{
											func_120(&Local_1549);
											if (func_121(&Local_1549, 1))
											{
												func_122(&Local_1389, &Local_1549, Local_40[3], Local_125[3]);
											}
											else
											{
												func_123(&Local_1549, 4);
											}
											if (func_124())
											{
												func_45();
											}
										}
										func_125();
										if (func_126())
										{
											iLocal_1856 = 1;
										}
										wait(Local_1389.f_30);
									}
								}
							}
						}
					}
					default:
						break;
			}
		}
	}
}

int func_1()
{
	return Global_1572887->f_12;
}

void func_2()
{
	_set_scenario_group_enabled_hash(-621282815, false);
	_set_scenario_group_enabled_hash(-908732483, false);
	_set_scenario_group_enabled_hash(2006823758, false);
	_set_scenario_group_enabled_hash(244605245, false);
	_set_scenario_group_enabled_hash(261151632, false);
	_set_scenario_group_enabled_hash(-918880864, false);
	_set_scenario_group_enabled_hash(-718375739, false);
	_set_scenario_group_enabled_hash(-1468840253, false);
	_set_scenario_group_enabled_hash(861452355, false);
	_set_scenario_group_enabled_hash(-270282311, false);
	_set_scenario_group_enabled_hash(-603631438, false);
	_set_scenario_group_enabled_hash(-1192733433, false);
}

void func_3(int iParam0)
{
	if (!func_127(iParam0))
	{
		return;
	}
	iVar0 = func_128(iParam0);
	if (!func_129(iVar0, 8))
	{
		func_130(iVar0, 8);
	}
	_0x4161648394262fdf(func_131(iParam0, func_24(iParam0)), 100f);
	func_132(&((*Global_1392194)[iParam0]->f_1), 1);
}

int func_4()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

void func_5(int iParam0)
{
	func_133(&iLocal_14, iParam0);
}

bool func_6(var uParam0)
{
	if (func_134(30336, 1, 1) && !func_135())
	{
		iVar0 = 0;
	}
	else
	{
		iVar0 = 1;
	}
	if (func_136(Global_35, 0))
	{
		iVar0 = 0;
	}
	if (func_137() && func_138() == 27)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_7(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_5(iParam0);
	}
	else
	{
		func_139(iParam0);
	}
}

bool func_8(int iParam0, int iParam1)
{
	if (!func_127(iParam0))
	{
		return false;
	}
	return (Global_40.f_9096[iParam0]->f_5 && iParam1) != 0;
}

void func_9(int iParam0, int iParam1)
{
	if (!func_127(iParam0))
	{
		return;
	}
	if (!func_8(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_9096[iParam0]->f_5 = (Global_40.f_9096[iParam0]->f_5 - (Global_40.f_9096[iParam0]->f_5 && iParam1));
}

bool func_10(int iParam0, int iParam1)
{
	if (!func_127(iParam0))
	{
		return false;
	}
	return (Global_40.f_9096[iParam0]->f_4 && iParam1) != 0;
}

bool func_11(int iParam0)
{
	if (Global_40.f_9096[iParam0]->f_10 < 0)
	{
		return false;
	}
	if (func_10(iParam0, 4194304))
	{
		return false;
	}
	func_140(iParam0, &iVar0, &iVar1, &uVar2, &uVar3);
	if (iVar0 < 2 || iVar1 < 23)
	{
		return false;
	}
	return true;
}

void func_12(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_141(iParam0);
	}
	else
	{
		func_142(iParam0);
	}
}

bool func_13(int iParam0)
{
	if (Global_40.f_9096[iParam0]->f_9 == -1)
	{
		return false;
	}
	if (Global_40.f_9096[iParam0]->f_10 < 0)
	{
		return false;
	}
	if (func_10(iParam0, 524288))
	{
		return false;
	}
	if (!func_8(iParam0, 16777216))
	{
		func_96(iParam0, 2);
		return true;
	}
	iVar0 = (&Global_40.f_9096[iParam0] - Global_40.f_9096[iParam0]->f_9);
	if (iVar0 >= 2)
	{
		if (func_8(iParam0, 32768))
		{
			func_9(iParam0, 32768);
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_143(iParam0))
	{
		if (func_8(iParam0, 32768))
		{
			func_9(iParam0, 32768);
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_8(iParam0, 32768))
	{
		func_9(iParam0, 32768);
	}
	return true;
}

bool func_14(var uParam0)
{
	if (!Global_1935630->f_12)
	{
		if (is_ped_in_any_vehicle(Global_35, true))
		{
			iVar0 = get_vehicle_ped_is_in(Global_35, true);
			if (func_144(&iVar0))
			{
				*uParam0 = iVar0;
				return true;
			}
		}
	}
	return false;
}

bool func_15(int iParam0)
{
	if (iParam0 == -1)
	{
		return true;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = func_146(func_145());
	if (func_147(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_147(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_147(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_147(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_147(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_147(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_147(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_147(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_147(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_147(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_147(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_147(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_147(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_147(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_147(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_147(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_147(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

bool func_16(int iParam0, int iParam1, int iParam2)
{
	if ((iParam0 % iParam2) == 0)
	{
		iVar7 = _get_prev_weather_type_hash_name();
		iVar8 = _get_next_weather_type_hash_name();
		_get_weather_type_transition(&uVar0, &uVar1, &fVar2);
		bVar4 = (func_148(iVar7) || func_149(iVar7));
		bVar5 = (func_148(iVar8) || func_149(iVar8));
		if (bVar4 && bVar5)
		{
			if (!func_20(iParam1, 256))
			{
				bVar6 = true;
			}
			func_42(iParam1, 256);
		}
		else if (bVar4)
		{
			if (func_150(iVar7) || func_151(iVar7))
			{
				fVar3 = 0.9f;
			}
			else
			{
				fVar3 = 0.5f;
			}
			if (fVar2 >= (1f - fVar3))
			{
				if (func_20(iParam1, 256))
				{
					bVar6 = true;
				}
				func_68(iParam1, 256);
			}
		}
		else if (bVar5)
		{
			if (func_150(iVar8) || func_151(iVar8))
			{
				fVar3 = 0.9f;
			}
			else
			{
				fVar3 = 0.5f;
			}
			if (fVar2 >= fVar3)
			{
				if (!func_20(iParam1, 256))
				{
					bVar6 = true;
				}
				func_42(iParam1, 256);
			}
		}
		else
		{
			if (func_20(iParam1, 256))
			{
				bVar6 = true;
			}
			func_68(iParam1, 256);
		}
		if (bVar6)
		{
		}
		return bVar6;
	}
	return false;
}

bool func_17()
{
	if (!func_27(2048))
	{
		return true;
	}
	if (func_20(&Local_1389, 256))
	{
		return true;
	}
	if (!func_27(256))
	{
		return true;
	}
	return false;
}

void func_18()
{
	if (!_0xf6a8a652a6b186cd(iVar1850) && !func_152(Local_1389.f_136))
	{
		if (iLocal_18 == 2 && !func_27(8))
		{
			fVar0 = 180f;
		}
		else
		{
			fVar0 = 100f;
		}
		iLocal_1852 = func_153(Global_1898092->f_26.f_5, "Castor's Ridge", 1, 0, 0, 0, -1082130432);
	}
}

void func_19(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_42(iParam0, iParam1);
	}
	else
	{
		func_68(iParam0, iParam1);
	}
}

bool func_20(int iParam0, int iParam1)
{
	return (iParam0->f_29 && iParam1) != 0;
}

bool func_21(int iParam0)
{
	return func_154(iLocal_16, iParam0);
}

int func_22(int iParam0, int iParam1)
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

int func_23(int iParam0)
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

int func_24(int iParam0)
{
	if (!func_127(iParam0))
	{
		return -1;
	}
	return &(Global_40.f_9096[iParam0]);
}

void func_25(int iParam0, int iParam1)
{
	if (!func_127(iParam0))
	{
		return;
	}
	if (func_8(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_9096[iParam0]->f_5 = (Global_40.f_9096[iParam0]->f_5 || iParam1);
}

void func_26()
{
	func_156(&uLocal_1707, func_155(), 12f, 2, -1, 0);
	func_156(&uLocal_1708, func_155(), 5f, 1, -1, 0);
}

bool func_27(int iParam0)
{
	return func_154(iLocal_14, iParam0);
}

void func_28()
{
	if (!_does_volume_exist(&(iLocal_1759[6])))
	{
		vVar0 = { _0x3e2a25b2416dd67e(&(iLocal_1759[1])) };
		vVar0.f_1 = (vVar0.y + 1f);
		vVar0.x = (vVar0.x + 0.5f);
		vVar0.f_2 = (vVar0.z + 0.5f);
		iLocal_1759[6] = _0x0eb78c2b156635b1(-1612834106, _0xf70f00013a62f866(&(iLocal_1759[1])), _0x18675bc914891122(&(iLocal_1759[1])), vVar0);
	}
}

void func_29(int iParam0, int iParam1)
{
	if (func_1() != -1)
	{
		return;
	}
	if (!func_99(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (Global_24887[iParam0] || iParam1);
}

int func_30(int iParam0)
{
	if (!func_99(iParam0))
	{
		return 0;
	}
	if (!func_158(func_157(iParam0)))
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_159(iParam0)))
	{
		return 0;
	}
	if (network_is_in_session())
	{
		if (!network_has_control_of_entity(_0x31c70a716cae1fee(func_159(iParam0))))
		{
			return 1;
		}
	}
	iVar0 = _0x31c70a716cae1fee(func_159(iParam0));
	if (does_entity_exist(iVar0))
	{
		if (!_0x88ad6cc10d8d35b2(iVar0))
		{
			set_entity_as_mission_entity(iVar0, true, true);
		}
	}
	_0x7b204f88f6c3d287(func_159(iParam0));
	return 1;
}

void func_31(int iParam0, int iParam1)
{
	if (func_1() != -1)
	{
		return;
	}
	if (!func_99(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (&Global_24887[iParam0] - (Global_24887[iParam0] && iParam1));
}

int func_32(int iParam0)
{
	if (!func_99(iParam0))
	{
		return 0;
	}
	if (!func_158(func_157(iParam0)))
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_159(iParam0)))
	{
		return 0;
	}
	_0x4f81ead1de8fa19b(func_159(iParam0));
	return 1;
}

void func_33(int iParam0)
{
	if (!func_99(iParam0))
	{
		return;
	}
	Global_24887[iParam0]->f_1 = func_145();
	if (_0x800df3fc913355f3(func_159(iParam0)))
	{
		_0x0b3a99ab6713aa52(func_159(iParam0));
	}
}

void func_34(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	iParam3->f_136 = uParam0;
	iParam3->f_137 = iParam1;
	func_42(iParam3, 128);
	func_160(iParam1, 1);
	if (bParam5)
	{
		func_161((*Global_1392194)[iParam3->f_136]->f_5, 0, 0, 0);
	}
	if (bParam4)
	{
		func_162((*Global_1392194)[iParam3->f_136]->f_6, 0);
		func_163((*Global_1392194)[iParam3->f_136]->f_6, 0, 0, 1, 1, 0);
	}
	bVar0 = false;
	if (iParam1 == 76)
	{
		func_164(&iVar1, &iVar2, func_8(1, 1048576));
	}
	else
	{
		func_165(iParam1, &iVar1, &iVar2, 0, 0);
	}
	iVar3 = iVar1;
	while (iVar3 <= iVar2)
	{
		if (func_99(iVar3) && !func_55(iVar3, 32))
		{
			if (!bVar0)
			{
				bVar0 = true;
			}
			func_32(iVar3);
		}
		iVar3++;
	}
	if (bVar0)
	{
		func_166(iParam1, iVar1, iVar2, 1);
	}
	if (!func_20(iParam3, 32))
	{
		_0xb173599d61faeb31();
	}
}

void func_35()
{
	Global_40.f_9096[Local_1389.f_136]->f_6 = 0;
}

void func_36()
{
	func_2();
	switch (iLocal_18)
	{
		case 1:
			_set_scenario_group_enabled_hash(-1468840253, true);
			break;
		case 2:
			_set_scenario_group_enabled_hash(861452355, true);
			break;
	}
	if (iLocal_18 < 4)
	{
		_set_scenario_group_enabled_hash(-1192733433, true);
		_set_scenario_group_enabled_hash(-270282311, true);
	}
	if (func_20(&Local_1389, 32) || func_20(&Local_1389, 2))
	{
		return;
	}
	switch (iLocal_18)
	{
		case 1:
			_set_scenario_group_enabled_hash(-621282815, true);
			_set_scenario_group_enabled_hash(-918880864, true);
			break;
		case 2:
			if (func_27(4096) || func_27(8))
			{
				_set_scenario_group_enabled_hash(2006823758, true);
			}
			else
			{
				_set_scenario_group_enabled_hash(-908732483, true);
			}
			_set_scenario_group_enabled_hash(-918880864, true);
			break;
		case 3:
			if (func_27(8192) || func_27(8))
			{
				_set_scenario_group_enabled_hash(244605245, true);
			}
			else
			{
				_set_scenario_group_enabled_hash(261151632, true);
			}
			_set_scenario_group_enabled_hash(-918880864, true);
			break;
		case 4:
			break;
		case 5:
			_set_scenario_group_enabled_hash(-718375739, true);
			break;
	}
	_0x9c8f42a5d1859dc1((*Global_1392194)[Local_1389.f_136]->f_5);
}

void func_37()
{
	if (func_20(&Local_1389, 256))
	{
		_0x187d65f3aec5d679(func_157(64), "EventAreas/CastorsPond/HMSTD_Foreman_Shelter");
		_0x187d65f3aec5d679(func_157(65), "EventAreas/CastorsPond/HMSTD_Worker_Shelter");
		_0x187d65f3aec5d679(func_157(66), "EventAreas/CastorsPond/HMSTD_Worker_Shelter");
	}
	else if ((iLocal_18 == 3 || iLocal_18 == 2) && !func_10(Local_1389.f_136, 128))
	{
		_0x187d65f3aec5d679(func_157(64), "EventAreas/CastorsPond/HMSTD_Foreman");
		_0x187d65f3aec5d679(func_157(65), "EventAreas/CastorsPond/HMSTD_Worker_Stalled");
		_0x187d65f3aec5d679(func_157(66), "EventAreas/CastorsPond/HMSTD_Worker_Stalled");
	}
	else
	{
		_0x187d65f3aec5d679(func_157(64), "EventAreas/CastorsPond/HMSTD_Foreman");
		_0x187d65f3aec5d679(func_157(65), "EventAreas/CastorsPond/HMSTD_Worker");
		_0x187d65f3aec5d679(func_157(66), "EventAreas/CastorsPond/HMSTD_Worker");
	}
	iVar0 = func_58(64);
	if ((does_entity_exist(iVar0) && !is_ped_active_in_scenario(iVar0, 1)) && !is_entity_a_mission_entity(iVar0))
	{
		task_persistent_character(iVar0);
	}
	iVar0 = func_58(65);
	if ((does_entity_exist(iVar0) && !is_ped_active_in_scenario(iVar0, 1)) && !is_entity_a_mission_entity(iVar0))
	{
		task_persistent_character(iVar0);
	}
	iVar0 = func_58(66);
	if ((does_entity_exist(iVar0) && !is_ped_active_in_scenario(iVar0, 1)) && !is_entity_a_mission_entity(iVar0))
	{
		task_persistent_character(iVar0);
	}
}

int func_38(int iParam0)
{
	if (func_20(&Local_1389, 32))
	{
		return 1;
	}
	switch (iLocal_18)
	{
		case 1:
			Local_386 = 0;
			break;
		case 2:
			Local_386 = 0;
			if (!func_10(Local_1389.f_136, 64) && func_27(4))
			{
				Local_386.f_1 = 4;
				*iParam0 = (*iParam0 + Local_386.f_1);
				Local_386.f_369[0]->f_6 = { -471.161f, 494.0929f, 98.39474f };
				Local_386.f_369[0]->f_9 = -75.62f;
				Local_386.f_369[0]->f_1 = -593150738;
				Local_386.f_369[0]->f_3 = -1414706886;
				Local_386.f_369[0]->f_15 = { -493.8461f, 475.8383f, 97.53687f };
				Local_386.f_369[0]->f_18 = -27.61f;
				Local_386.f_369[0]->f_12 = -1038436471;
				Local_386.f_369[1]->f_6 = { -471.6009f, 495.1383f, 98.64632f };
				Local_386.f_369[1]->f_9 = -77.64f;
				Local_386.f_369[1]->f_1 = -593150738;
				Local_386.f_369[1]->f_3 = -1185717114;
				Local_386.f_369[1]->f_15 = { -488.6204f, 471.2552f, 95.98804f };
				Local_386.f_369[1]->f_18 = -25.83f;
				Local_386.f_369[1]->f_12 = -1038436471;
				Local_386.f_369[2]->f_6 = { -472.1612f, 496.9294f, 98.96235f };
				Local_386.f_369[2]->f_9 = -82.48f;
				Local_386.f_369[2]->f_1 = -593150738;
				Local_386.f_369[2]->f_3 = -418660362;
				Local_386.f_369[2]->f_15 = { -490.7553f, 480.6002f, 97.61851f };
				Local_386.f_369[2]->f_18 = 143.66f;
				Local_386.f_369[2]->f_12 = -1038436471;
				Local_386.f_369[3]->f_6 = { -468.4569f, 499.7347f, 98.83929f };
				Local_386.f_369[3]->f_9 = -89.7f;
				Local_386.f_369[3]->f_1 = -593150738;
				Local_386.f_369[3]->f_3 = -188589213;
				Local_386.f_369[3]->f_15 = { -486.4112f, 476.0952f, 96.62942f };
				Local_386.f_369[3]->f_18 = 158.82f;
				Local_386.f_369[3]->f_12 = -1038436471;
			}
			else
			{
				Local_386.f_1 = 0;
			}
			break;
		case 3:
			Local_386 = 0;
			break;
		case 4:
			Local_386 = 0;
			if (!func_27(8))
			{
				Local_386.f_1 = 1;
				Local_386.f_369[0]->f_6 = { -447.632f, 498.775f, 97.0966f };
				Local_386.f_369[0]->f_9 = -91.61f;
				Local_386.f_369[0]->f_1 = -1038436471;
			}
			break;
	}
	return 0;
}

void func_39(int iParam0)
{
	func_167(iParam0);
	func_168(iParam0, 10f, 1);
	func_169(iParam0, 1);
	func_170(iParam0, 1);
	func_171(iParam0, 1);
	func_40(iParam0, 1);
	func_172(iParam0, 0);
	func_173(iParam0, 0);
	func_174(iParam0, 1);
	func_175(iParam0, 1);
	func_176(iParam0, 1);
	func_177(iParam0, 1);
	func_178(iParam0, 1);
	func_179(iParam0, 1);
	func_180(iParam0, 1.25f);
	func_181(iParam0, 1);
	func_182(iParam0, 1);
	func_183(iParam0, 1);
	func_184(iParam0, 1);
}

void func_40(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_185(&(iParam0->f_1), 256);
	}
	else
	{
		func_132(&(iParam0->f_1), 256);
	}
}

void func_41(var uParam0, int iParam1)
{
	uParam0->f_21 = iParam1;
}

void func_42(int iParam0, int iParam1)
{
	if (func_20(iParam0, iParam1))
	{
		return;
	}
	iParam0->f_29 = (iParam0->f_29 || iParam1);
}

void func_43(int iParam0)
{
	func_133(&iLocal_15, iParam0);
}

void func_44()
{
	if (!func_21(2048))
	{
		if (func_186(Global_35, (*Global_1392194)[Local_1389.f_136]->f_5, 1, 0))
		{
			func_141(2048);
			StringCopy(&(Global_1894899->f_162), "SETTLEMENT_CASTORS_RIDGE", 64);
		}
	}
	else if (!func_186(Global_35, (*Global_1392194)[Local_1389.f_136]->f_5, 1, 0))
	{
		func_142(2048);
		StringCopy(&(Global_1894899->f_162), "", 64);
	}
}

void func_45()
{
	switch (iVar1852)
	{
		case 0:
			func_89(&iLocal_30, 1);
			if (func_21(2048))
			{
				StringCopy(&(Global_1894899->f_162), "", 64);
			}
			if (func_27(4) && func_27(131072))
			{
				func_187();
			}
			if (func_20(&Local_1389, 16384))
			{
				if (!func_20(&Local_1389, 32768))
				{
					func_188(Local_1389.f_136);
				}
				else
				{
					func_25(Local_1389.f_136, 1024);
				}
			}
			func_82(&Local_1549, &Local_1389, 0);
			reset_scenario_types_enabled();
			if (func_10(Local_1389.f_136, 128))
			{
				iVar0 = func_58(Local_1389.f_138);
				func_189(&iVar0);
				iVar0 = func_58(65);
				func_189(&iVar0);
				iVar0 = func_58(66);
				func_189(&iVar0);
			}
			break;
		case 1:
			if ((func_8(Local_1389.f_136, 128) && func_27(262144)) && (func_190(Global_35, iVar1787, 0) || func_191(0)))
			{
				func_9(Local_1389.f_136, 128);
				func_192(Local_1389.f_136, 16384);
			}
			if (does_entity_exist(iVar1853))
			{
				set_entity_as_no_longer_needed(&iLocal_1855);
			}
			func_193();
			break;
		case 2:
			if (is_valid_interior(iVar1815))
			{
				unpin_interior(iVar1815);
			}
			if (_0xf6a8a652a6b186cd(iVar1850))
			{
				_0xfdfecc6ee4491e11(iVar1850);
			}
			func_164(&iVar3, &iVar4, func_8(Local_1389.f_136, 1048576));
			iVar2 = iVar3;
			while (iVar2 <= iVar4)
			{
				if (!is_entity_dead(func_58(iVar2)))
				{
					_0x935cf6e42baf7f4d(func_58(iVar2));
					iVar1 = _get_scenario_point_ped_is_using(func_58(iVar2), false);
					if (_does_scenario_point_exist(iVar1))
					{
						_delete_scenario_point(iVar1);
					}
				}
				iVar2++;
			}
			break;
		case 3:
			if (iLocal_18 == 2 && func_10(Local_1389.f_136, 64))
			{
				func_194(1);
				if (func_195())
				{
					if (!func_8(Local_1389.f_136, 64))
					{
						func_25(Local_1389.f_136, 64);
					}
					if (!func_10(Local_1389.f_136, 128))
					{
						func_84(&Local_1389);
					}
				}
				else if (!func_8(Local_1389.f_136, 64) && !func_10(Local_1389.f_136, 128))
				{
					func_196(func_58(Local_1389.f_138), 0, 0);
					func_196(func_58(65), 0, 0);
					func_196(func_58(66), 0, 0);
					iVar5 = 0;
					while (iVar5 < Local_386.f_1)
					{
						if (iVar5 == 0)
						{
							func_196(&(iLocal_1794[iVar5]), 0, 0);
						}
						else
						{
							func_197(iLocal_1794[iVar5]);
						}
						iVar5++;
					}
					func_42(&Local_1389, 4);
					func_84(&Local_1389);
					func_192(Local_1389.f_136, 8388608);
				}
			}
			if (!func_20(&Local_1389, 2))
			{
				iVar6 = 0;
				while (iVar6 < 3)
				{
					if (func_154(Global_40.f_9096[Local_1389.f_136]->f_6, func_198(iVar6, 0)))
					{
						iVar7 = 0;
						while (iVar7 < 3)
						{
							func_132(&(Global_40.f_9096[Local_1389.f_136]->f_6), func_198(iVar6, iVar7));
							iVar7++;
						}
					}
					iVar6++;
				}
			}
			break;
		case 4:
			if (func_27(512))
			{
				func_9(Local_1389.f_136, 2);
			}
			func_9(Local_1389.f_136, 8192);
			func_199();
			if (!is_entity_dead(func_58(Local_1389.f_138)))
			{
				set_ped_relationship_group_hash(func_58(Local_1389.f_138), 707888648);
			}
			func_101(1);
			if (iLocal_18 == 4 && func_10(Local_1389.f_136, 128))
			{
				func_200(Local_1389.f_136, 33554432);
			}
			func_2();
			iVar5 = 0;
			while (iVar5 < 8)
			{
				func_83(&(iLocal_1759[iVar5]));
				iVar5++;
			}
			break;
		case 5:
			func_201(Local_1389.f_136, &Local_386, &Local_1389);
			func_202(&Local_386);
			_text_database_delete(func_203());
			_text_database_delete(func_204());
			break;
		default:
			terminate_this_thread();
			break;
	}
	uLocal_1854 = iVar1852 + 1;
}

void func_46(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!func_205(bParam2) || is_screen_faded_out())
		{
			Call_Loc(iParam1);
		}
	}
}

void func_47(int iParam0, int iParam1)
{
	_0xf008e0ba1fe1d644(iParam0);
	iParam1->f_3 = (iParam1->f_3 + iParam0);
}

bool func_48()
{
	switch (iVar1820)
	{
		case 0:
			if (!func_206())
			{
				return false;
			}
			if (!func_20(&Local_1389, 32))
			{
				func_207(&(Local_386.f_15));
				func_207(&(Local_386.f_304));
				func_207(&(Local_386.f_369));
				func_208(&Local_1389);
				func_209();
				func_210();
				if (func_27(4))
				{
					func_211(&Local_2071);
					func_212(&Local_1857);
				}
			}
			func_213();
			func_214(&(Local_386.f_690));
			func_156(&uLocal_1709, func_215(), 13.5f, 2, -1, 0);
			_text_database_request(func_203());
			_text_database_request(func_204());
			iLocal_1822 = 1;
			break;
		case 1:
			if (!func_51())
			{
			}
			if (!func_216())
			{
			}
			if (!func_62())
			{
			}
			if (!func_63())
			{
			}
			if ((iLocal_18 == 4 && func_10(Local_1389.f_136, 128)) || iLocal_18 > 4)
			{
				if (!func_217(1))
				{
					return false;
				}
			}
			if (!func_218())
			{
				return false;
			}
			return true;
	}
	return false;
}

void func_49(int iParam0)
{
	func_219(&iLocal_15, iParam0);
}

bool func_50(int iParam0)
{
	return func_154(iLocal_15, iParam0);
}

bool func_51()
{
	if (((!func_220(&(Local_386.f_15)) || !func_220(&(Local_386.f_304))) || !func_220(&(Local_386.f_369))) || !func_221(&Local_1389))
	{
		return false;
	}
	return true;
}

bool func_52(bool bParam0, int iParam1)
{
	if (*bParam0)
	{
		return false;
	}
	if (_0x5c16855277819bbf() > Local_386.f_1)
	{
		if (*iParam1 < Local_386.f_1)
		{
			if (Local_386.f_369[*iParam1]->f_1 != 0)
			{
				iLocal_1794[*iParam1] = func_222(Local_386.f_369[*iParam1]->f_1, Local_386.f_369[*iParam1], Local_386.f_369[*iParam1]->f_6, Local_386.f_369[*iParam1]->f_9, 1, 0, 1, 0, 1);
				decor_set_bool(&(iLocal_1794[*iParam1]), "bIgnoreThisPed", true);
			}
			*iParam1++;
			*bParam0 = 1;
			return false;
		}
		return true;
	}
	return false;
}

void func_53(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_43(iParam0);
	}
	else
	{
		func_49(iParam0);
	}
}

bool func_54(bool bParam0, int iParam1)
{
	if (*bParam0)
	{
		return false;
	}
	if (*iParam1 < Local_386.f_1)
	{
		if (Local_386.f_369[*iParam1]->f_12 != 0)
		{
			Local_386.f_369[*iParam1]->f_11 = func_222(Local_386.f_369[*iParam1]->f_12, Local_386.f_369[*iParam1], Local_386.f_369[*iParam1]->f_15, Local_386.f_369[*iParam1]->f_18, 1, 1, 1, 0, 1);
			decor_set_bool(Local_386.f_369[*iParam1]->f_11, "bIgnoreThisPed", true);
		}
		*iParam1++;
		*bParam0 = 1;
		return false;
	}
	return true;
	return false;
}

bool func_55(int iParam0, int iParam1)
{
	if (func_1() != -1)
	{
		return false;
	}
	if (!func_99(iParam0))
	{
		return false;
	}
	return (Global_24887[iParam0] && iParam1) != 0;
}

int func_56(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_99(iParam0))
	{
		return 0;
	}
	if (!func_158(func_157(iParam0)))
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_159(iParam0)))
	{
		func_223(iParam0, 0);
		return 0;
	}
	vVar0 = { iParam2, iParam3, iParam4 };
	if (!func_119(iParam0, 0))
	{
		if (bParam1)
		{
			if (!func_224(iParam0))
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (!func_225(vVar0))
	{
		_0x59c7ad6fea2ac449(func_159(iParam0), vVar0);
	}
	if (bParam5)
	{
		iVar3 = _0x08fc896d2cb31fcc(func_159(iParam0), 0);
	}
	else
	{
		iVar3 = _0x0cadc3a977997472(func_159(iParam0), 0);
	}
	if (!func_225(vVar0))
	{
		_0xbb68908cd11aebdc(func_159(iParam0));
	}
	if (does_entity_exist(iVar3))
	{
		return 1;
	}
	return 0;
}

bool func_57(int iParam0, bool bParam1, bool bParam2)
{
	func_226(iParam0, 0, 0, 0, 1, 1);
	iVar0 = func_58(iParam0);
	if (!is_entity_dead(iVar0))
	{
		set_ped_config_flag(iVar0, 178, !bParam1);
		set_ped_config_flag(iVar0, 168, false);
		set_ped_config_flag(iVar0, 259, true);
		set_ped_config_flag(iVar0, 297, bParam2);
		_0x6759bee6762e140b(func_159(iParam0));
		if (!bParam1)
		{
			func_227(iVar0, 1, 1);
		}
	}
	else
	{
		return false;
	}
	return true;
}

int func_58(int iParam0)
{
	if (!func_99(iParam0))
	{
		return 0;
	}
	if (!func_55(iParam0, 2))
	{
		return 0;
	}
	if (func_158(func_157(iParam0)))
	{
		return func_228(iParam0);
	}
	return _0xe76687023d8c8505(func_229(iParam0), 0);
}

void func_59(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_230(uParam0, iParam1, sParam2))
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

int func_60(int iParam0)
{
	return func_232(func_231(), &(iParam0->f_690), 0, 0, 0, -1, 1);
}

void func_61(int iParam0, bool bParam1)
{
	if (!func_127(iParam0))
	{
		return;
	}
	iVar0 = func_128(iParam0);
	if (bParam1)
	{
		func_130(iVar0, 8);
		func_132(&((*Global_1392194)[iParam0]->f_1), 1);
	}
	else
	{
		func_233(iVar0, 8);
		func_185(&((*Global_1392194)[iParam0]->f_1), 1);
	}
}

bool func_62()
{
	if (!func_234(&uLocal_1710))
	{
		return false;
	}
	if (!func_235())
	{
		return false;
	}
	return true;
}

bool func_63()
{
	if (!_text_database_has_loaded(func_203()))
	{
		return false;
	}
	if (!_text_database_has_loaded(func_204()))
	{
		return false;
	}
	return true;
}

void func_64()
{
	func_236();
	if (!func_27(4) || func_27(2))
	{
		return;
	}
	_0xfc3db99c8144cd81(func_58(Local_1389.f_138), (*Global_1392194)[Local_1389.f_136]->f_5, 0, false, 0);
	if (iLocal_18 < 4)
	{
		_0xfc3db99c8144cd81(func_58(65), (*Global_1392194)[Local_1389.f_136]->f_5, 0, false, 0);
		_0xfc3db99c8144cd81(func_58(66), (*Global_1392194)[Local_1389.f_136]->f_5, 0, false, 0);
	}
	if (func_10(Local_1389.f_136, 128))
	{
		func_238(func_58(Local_1389.f_138), func_237(Local_1389.f_138), 0f, 2, 1073741824);
		if (!(iLocal_18 == 3 && func_8(Local_1389.f_136, 2)) && func_27(2048))
		{
			if (!is_entity_dead(func_58(65)))
			{
				func_239(&vVar0, &uVar3);
				clear_ped_tasks_immediately(func_58(65), false, true);
				task_use_nearest_scenario_to_coord_warp(func_58(65), vVar0, 2f, -1, false, false, false, false);
			}
			func_240(66, 1);
		}
		else
		{
			func_240(65, 1);
			func_240(66, 1);
		}
	}
	else
	{
		switch (iLocal_18)
		{
			case 1:
				func_238(func_58(Local_1389.f_138), func_237(Local_1389.f_138), 0f, 2, 1073741824);
				func_238(func_58(65), func_237(65), 0f, 2, 1073741824);
				func_238(func_58(66), func_237(66), 0f, 2, 1073741824);
				break;
			case 2:
				clear_ped_tasks_immediately(func_58(Local_1389.f_138), false, true);
				func_238(func_58(Local_1389.f_138), func_237(Local_1389.f_138), 0f, 2, 1073741824);
				clear_ped_tasks_immediately(func_58(65), false, true);
				func_238(func_58(65), func_237(65), 0f, 2, 1073741824);
				clear_ped_tasks_immediately(func_58(66), false, true);
				func_238(func_58(66), func_237(66), 0f, 2, 1073741824);
				break;
			case 3:
				func_238(func_58(Local_1389.f_138), func_237(Local_1389.f_138), 0f, 2, 1073741824);
				func_238(func_58(65), func_237(65), 0f, 2, 1073741824);
				func_238(func_58(66), func_237(66), 0f, 2, 1073741824);
				break;
			case 4:
				if (!is_entity_dead(func_58(Local_1389.f_138)))
				{
					clear_ped_tasks_immediately(func_58(Local_1389.f_138), false, true);
					func_238(func_58(Local_1389.f_138), func_241(), func_242(), 2, 1073741824);
				}
				break;
			case 5:
				break;
		}
	}
}

void func_65()
{
	remove_all_ped_weapons(func_58(65), true, true);
	remove_all_ped_weapons(func_58(66), true, true);
}

bool func_66(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
		return false;
	}
	return _0x1b065a2bf7953815(0) != 1;
}

void func_67(bool bParam0)
{
	iVar0 = func_24(1);
	if (func_10(1, 128))
	{
		func_243(1, 0);
	}
	else
	{
		if (iVar0 > 4)
		{
			func_243(1, 0);
		}
		if (func_8(1, 32768))
		{
			func_243(1, 0);
		}
		else
		{
			switch (iVar0)
			{
				case 3:
					if (func_8(1, 128))
					{
						func_243(1, 0);
					}
					else if (func_8(1, 256))
					{
						if (bParam0 || !func_10(1, 268435456))
						{
							func_244(1);
							func_245(1, 0, "HOME_JOURN01", 0, !bParam0);
							func_200(1, 268435456);
						}
					}
					else
					{
						func_243(1, 0);
					}
					break;
				default:
					func_243(1, 0);
					break;
			}
		}
	}
}

void func_68(int iParam0, int iParam1)
{
	if (!func_20(iParam0, iParam1))
	{
		return;
	}
	iParam0->f_29 = (iParam0->f_29 - (iParam0->f_29 && iParam1));
}

int func_69(int iParam0, int iParam1)
{
	if (!Global_1935630->f_12 && func_186(Global_35, (*Global_1392194)[iParam0->f_136]->f_5, 1, 0))
	{
		if (!func_20(iParam0, 64))
		{
			func_42(iParam0, 64);
			func_246(iParam0->f_136, 1);
			return 1;
		}
	}
	return 0;
}

void func_70(int iParam0, float fParam1, var uParam2, int iParam3, int iParam4, var uParam5, var uParam6, int iParam7, float fParam8, bool bParam9)
{
	if ((*uParam6 % iParam7) == 0)
	{
		iVar0 = iParam3;
		while (iVar0 <= iParam4)
		{
			if (!func_55(iVar0, 32))
			{
				iVar1 = func_58(iVar0);
				if (!is_entity_dead(iVar1))
				{
					if (is_ped_human(iVar1))
					{
						(*iParam0)[iVar2] = iVar1;
						(*fParam1)[iVar2] = func_247(iVar1, 1, 0);
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
						func_248(uParam2, iVar1, 0);
						if (fParam8 >= 0f)
						{
							set_ped_seeing_range(iVar1, fParam8);
						}
					}
					else
					{
						func_249(uParam2, iVar1, 0);
					}
				}
			}
			iVar0++;
		}
		iVar3 = iVar2;
		while (iVar3 <= (*iParam0 - 1))
		{
			(*iParam0)[iVar2] = 0;
			iVar3++;
		}
		*uParam5 = iVar2;
		*uParam6 = 0;
	}
	*uParam6++;
}

void func_71(int iParam0)
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

void func_72()
{
	if (!func_21(8192))
	{
		if (func_21(4096) || (get_frame_count() % 9) == 0)
		{
			func_141(4096);
			iVar0 = (get_frame_count() % 9);
			Var1.f_3 = 3;
			Var1.f_4 = 30;
			Var1.f_5 = -1;
			Var1.f_9 = 3;
			Var1.f_15 = -1;
			Var1.f_16 = -1;
			Var1.f_20 = 2;
			Var1.f_16 = iVar0;
			sVar30 = func_250(&Var1);
			if (!is_string_null_or_empty(sVar30))
			{
				_0xef51242e35242b47(sVar30);
			}
			iVar31 = 0;
			while (iVar31 < 2)
			{
				sVar30 = func_251(&Var1, iVar31);
				if (!is_string_null_or_empty(sVar30))
				{
					_0xef51242e35242b47(sVar30);
				}
				iVar31++;
			}
			iVar31 = 0;
			while (iVar31 < 2)
			{
				sVar30 = func_252(&Var1, iVar31);
				if (!is_string_null_or_empty(sVar30))
				{
					_0xef51242e35242b47(sVar30);
				}
				iVar31++;
			}
			if (iVar0 == 8)
			{
				func_141(8192);
			}
		}
	}
}

bool func_73(var uParam0, int iParam1)
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
				return true;
			}
		}
	}
	return false;
}

void func_74(var uParam0)
{
	func_253(uParam0, 0f);
}

bool func_75()
{
	if (func_27(65536))
	{
		return false;
	}
	if (func_27(16))
	{
		return false;
	}
	if (iLocal_18 == 4)
	{
		return false;
	}
	return true;
}

void func_76(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if ((*uParam1 % iParam3) == 0)
	{
		if (uParam0->f_137 == 76)
		{
			func_164(&iVar1, &iVar2, func_8(1, 1048576));
		}
		else
		{
			func_165(uParam0->f_137, &iVar1, &iVar2, 0, 0);
		}
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (func_99(iVar0) && func_100(iVar0, 0))
			{
				iVar3 = func_58(iVar0);
				if (!func_254(iVar3, 1435919172) && !get_is_task_active(iVar3, 3))
				{
					func_255(iVar0, uParam0, iParam2, 1);
				}
			}
			iVar0++;
		}
	}
}

void func_77(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if (func_256(get_player_index(), 1, 1, 1))
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = (*Global_1392194)[uParam0->f_136]->f_6;
	}
	if (func_186(Global_35, iParam1, 1, 0))
	{
		set_ped_max_move_blend_ratio(Global_35, fParam2);
	}
	iVar0 = _get_last_mount(Global_35);
	if (func_186(iVar0, iParam1, 1, 0))
	{
		set_ped_max_move_blend_ratio(iVar0, fParam3);
	}
}

bool func_78()
{
	if (func_50(524288))
	{
		return true;
	}
	if (func_121(&Local_1549, 2))
	{
		return true;
	}
	if (_0xad401c63158acbaa(get_player_index()))
	{
		if (Global_1935630->f_23)
		{
			return true;
		}
	}
	iVar0 = iVar1642;
	func_257(&Local_1389, 1);
	if (func_258(&iLocal_1768, &Local_1389, &(Local_1389.f_28), &uLocal_1644, 0, 2, 1))
	{
		if (func_259(&(Local_1389.f_28)) || Local_1389.f_28 == 4)
		{
			if (func_27(16))
			{
				if (Local_1389.f_28 == 8)
				{
					func_42(&Local_1389, 8192);
					return true;
				}
			}
			if ((func_21(1024) && Local_1389.f_10 == &iLocal_1768[0]) && Local_1389.f_28 == 65536)
			{
				func_260(&Local_1389, &(Local_1389.f_28));
				func_261(&Local_1389, &(Local_1389.f_28));
				func_262(vLocal_1578[9]);
				return false;
			}
			if (func_50(16384))
			{
				if (Local_1389.f_28 == 65536 || Local_1389.f_28 == 512)
				{
					func_260(&Local_1389, &(Local_1389.f_28));
					return false;
				}
				else if (Local_1389.f_28 == 8192)
				{
					func_42(&Local_1389, 8192);
					return true;
				}
			}
			if (!func_121(&Local_1549, 1))
			{
				if (!func_50(4096))
				{
					func_93(0);
				}
				func_264(&Local_1549, &Local_1389, Local_1389.f_28, 43449, 0, 0);
				func_265(&Local_1549, 256);
				if (iVar1547 == &iLocal_1768[0])
				{
					StringCopy(Local_1549.f_20[0], func_250(&Local_1549), 32);
					func_265(&Local_1549, 32);
				}
				else if (iVar1547 == &iLocal_1768[1])
				{
					StringCopy(Local_1549.f_20[0], func_251(&Local_1549, 0), 32);
					StringCopy(Local_1549.f_20[1], func_251(&Local_1549, 1), 32);
					func_265(&Local_1549, 32);
				}
				else if (iVar1547 == &iLocal_1768[2])
				{
					StringCopy(Local_1549.f_20[0], func_252(&Local_1549, 0), 32);
					StringCopy(Local_1549.f_20[1], func_252(&Local_1549, 1), 32);
					func_265(&Local_1549, 32);
				}
				if ((((((Local_1549.f_16 == 5 || Local_1549.f_16 == 6) || Local_1549.f_16 == 2) || Local_1389.f_28 == 8) || Local_1389.f_28 == 64) || Local_1389.f_28 == 2) || Local_1389.f_28 == 4)
				{
					func_43(524288);
					func_42(&Local_1389, 8192);
					return true;
				}
			}
			else
			{
				func_265(&Local_1549, 512);
			}
			func_260(&Local_1389, &(Local_1389.f_28));
			return false;
		}
		else if (func_121(&Local_1549, 2))
		{
		}
		else if (Local_1389.f_28 == 65536)
		{
			func_260(&Local_1389, &(Local_1389.f_28));
			func_261(&Local_1389, &(Local_1389.f_28));
			return false;
		}
		else if (Local_1389.f_28 == 32)
		{
			if (!func_266(&Local_1389))
			{
				if (iVar1547 == &iLocal_1768[1])
				{
					StringCopy(Local_1549.f_20[0], func_267(), 32);
					func_42(&Local_1389, 8192);
				}
				else if (iVar1547 == &iLocal_1768[2])
				{
					StringCopy(Local_1549.f_20[0], func_268(), 32);
					func_42(&Local_1389, 8192);
				}
				func_43(524288);
				func_42(&Local_1389, 4096);
			}
			else
			{
				if (iLocal_18 == 2)
				{
					iVar2 = 0;
					while (iVar2 < Global_1935630->f_39)
					{
						if (func_269(&(Global_1935630->f_34[iVar2]), &iLocal_1768))
						{
							bVar1 = true;
						}
						else
						{
							iVar2++;
						}
					}
					if (!bVar1)
					{
						func_260(&Local_1389, &(Local_1389.f_28));
						func_261(&Local_1389, &(Local_1389.f_28));
						return false;
					}
				}
				iVar3 = _get_lassoed_entity(Global_35);
				if (!does_entity_exist(iVar3))
				{
					iVar3 = _0xd0b7aeb56229d317(Global_35);
				}
				if (!does_entity_exist(iVar3))
				{
					iVar3 = func_270(Global_35);
				}
				if (does_entity_exist(iVar3))
				{
					if (&iLocal_1768[0] != iVar3)
					{
						Local_1549 = &iLocal_1768[0];
						Local_1549.f_16 = 2;
						StringCopy(Local_1549.f_20[0], func_250(&Local_1549), 32);
						func_42(&Local_1389, 8192);
						func_43(524288);
					}
				}
			}
		}
		else if (Local_1389.f_28 == 2)
		{
			iVar4 = _get_lassoed_entity(Global_35);
			if (!does_entity_exist(iVar4))
			{
				iVar4 = _0xd0b7aeb56229d317(Global_35);
			}
			if (!does_entity_exist(iVar4))
			{
				iVar4 = func_270(Global_35);
			}
			if (does_entity_exist(iVar4))
			{
				if (&iLocal_1768[0] != iVar4)
				{
					Local_1549 = &iLocal_1768[0];
					Local_1549.f_16 = 2;
					StringCopy(Local_1549.f_20[0], func_250(&Local_1549), 32);
					func_42(&Local_1389, 8192);
					func_43(524288);
				}
			}
		}
		else if (Local_1389.f_28 == 1024)
		{
			_0xedfc6c1fd1c964f5(get_player_index(), -1103472584, 0, 0, 0, 0, 0, 0, 0);
			func_271(1);
			_0x710448d44a64c213(1);
		}
		return true;
	}
	if (func_272())
	{
		Local_1389.f_28 = 2;
		return true;
	}
	if (func_273(&Local_1389, &Local_1549, 43449) && !func_274())
	{
		if (!func_121(&Local_1549, 1))
		{
			Local_1549.f_16 = 7;
			func_93(0);
			func_264(&Local_1549, &Local_1389, Local_1389.f_28, 43449, 0, 0);
			func_265(&Local_1549, 256);
			if (Local_1549.f_1 >= 3)
			{
				func_265(&Local_1549, 2);
			}
			if (func_121(&Local_1549, 2))
			{
				Local_1389.f_28 = 1024;
				func_123(&Local_1549, 16);
				func_42(&Local_1389, 8192);
				func_43(524288);
				Local_1549 = &iLocal_1768[0];
				StringCopy(Local_1549.f_20[0], func_250(&Local_1549), 32);
				func_265(&Local_1549, 32);
			}
			else if (iVar1547 == &iLocal_1768[0])
			{
				StringCopy(Local_1549.f_20[0], func_250(&Local_1549), 32);
				func_265(&Local_1549, 32);
			}
			else if (iVar1547 == &iLocal_1768[1])
			{
				StringCopy(Local_1549.f_20[0], func_251(&Local_1549, 0), 32);
				StringCopy(Local_1549.f_20[1], func_251(&Local_1549, 1), 32);
				func_265(&Local_1549, 32);
			}
			else if (iVar1547 == &iLocal_1768[2])
			{
				StringCopy(Local_1549.f_20[0], func_252(&Local_1549, 0), 32);
				StringCopy(Local_1549.f_20[1], func_252(&Local_1549, 1), 32);
				func_265(&Local_1549, 32);
			}
		}
		else
		{
			func_265(&Local_1549, 512);
		}
	}
	if (func_275())
	{
		return true;
	}
	if (!func_27(16) && is_explosion_in_sphere(-1, func_215(), 21f))
	{
		return true;
	}
	if (iLocal_18 == 4)
	{
		if (func_258(&iLocal_1794, &Local_1389, &(Local_1389.f_28), &uLocal_1645, 0, (Local_386.f_1 - 1), 1))
		{
			return true;
		}
	}
	iVar5 = func_276(iVar0 + 1, 2);
	iVar0 = iVar0;
	while (iVar0 <= iVar5)
	{
		if (&fLocal_1778[iVar0] < Local_1389.f_19 && func_277(&(iLocal_1768[iVar0]), &Local_1389, 0, &(fLocal_1778[iVar0])))
		{
			func_74(vLocal_1578[9]);
		}
		else
		{
			iVar0++;
			iVar0++;
		}
	}
	if (func_278(vLocal_1578[9], 10f))
	{
		func_261(&Local_1389, &(Local_1389.f_28));
	}
	return false;
}

void func_79()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_279(iVar0, 1, 1);
		iVar0++;
	}
}

void func_80()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_280(iLocal_1768[iVar0], Local_40[iVar0], Local_125[iVar0], 1, 1);
		iVar0++;
	}
}

void func_81()
{
	func_281(Local_386.f_690[0]->f_8, 0, 1);
	func_281(Local_386.f_690[1]->f_8, 0, 1);
	func_281(Local_386.f_690[2]->f_8, 0, 1);
	func_281(Local_386.f_690[9]->f_8, 0, 1);
	func_281(Local_386.f_690[10]->f_8, 0, 1);
	func_281(Local_386.f_690[11]->f_8, 0, 1);
	func_281(Local_386.f_690[12]->f_8, 0, 1);
}

void func_82(int* iParam0, var uParam1, bool bParam2)
{
	func_262(&(iParam0->f_6));
	iParam0->f_5 = -1;
	func_123(iParam0, 1);
	func_123(iParam0, 4);
	func_123(iParam0, 32);
	func_123(iParam0, 128);
	func_123(iParam0, 64);
	func_123(iParam0, 8);
	func_123(iParam0, 256);
	func_123(iParam0, 512);
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

void func_83(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_84(int iParam0)
{
	if (!func_127(iParam0->f_136))
	{
		return;
	}
	func_200(iParam0->f_136, 128);
	func_25(iParam0->f_136, 65536);
	func_42(iParam0, 128);
	func_282(30, 0, 1);
}

bool func_85()
{
	if (func_50(524288))
	{
		return true;
	}
	if (((Local_1389.f_28 == 2 || Local_1389.f_28 == 1) || Local_1389.f_28 == 1024) || Local_1389.f_28 == 512)
	{
		return true;
	}
	if (Local_1389.f_28 == 32)
	{
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (func_269(&(Global_1935630->f_34[iVar0]), &iLocal_1768))
			{
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

void func_86()
{
	_0x88544c0e3291dcae(1);
	func_283();
}

void func_87(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_284((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_88(var uParam0)
{
	if (func_285(uParam0->f_32))
	{
		func_286(&(uParam0->f_32), 1, 1);
	}
	if (func_285(uParam0->f_33))
	{
		func_286(&(uParam0->f_33), 1, 1);
	}
	if (func_285(uParam0->f_34))
	{
		func_286(&(uParam0->f_34), 1, 1);
	}
}

void func_89(int iParam0, bool bParam1)
{
	if (*iParam0 > -1 && *iParam0 < 4)
	{
		if (*Global_1955500)[*iParam0]->f_3 == get_id_of_this_thread()
		{
			if (func_287(1, 1) == *iParam0)
			{
				func_288(-1, 1, 1);
			}
			if (bParam1)
			{
				func_83((*Global_1955500)[*iParam0]->f_1);
			}
			(*Global_1955500)[*iParam0] = 0;
			(*Global_1955500)[*iParam0]->f_2 = 0;
			(*Global_1955500)[*iParam0]->f_3 = 0;
			*iParam0 = -1;
		}
	}
}

void func_90(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3)
	{
		iVar0 = 0;
		while (iVar0 < iVar1788)
		{
			task_combat_hated_targets_in_area(&(iLocal_1794[iVar0]), get_entity_coords(*iParam0, true, false), 60f, 0, 16);
			set_ped_accuracy(&(iLocal_1794[iVar0]), iVar1636);
			iVar0++;
		}
	}
	if (!is_entity_dead(*iParam0))
	{
		set_entity_can_be_damaged_by_relationship_group(*iParam0, bParam3, iLocal_31);
		set_entity_only_damaged_by_player(*iParam0, !bParam3);
	}
	if (!is_entity_dead(*iParam1))
	{
		set_entity_can_be_damaged_by_relationship_group(*iParam1, bParam3, iLocal_31);
		set_entity_only_damaged_by_player(*iParam1, !bParam3);
	}
	if (!is_entity_dead(*iParam2))
	{
		set_entity_can_be_damaged_by_relationship_group(*iParam2, bParam3, iLocal_31);
		set_entity_only_damaged_by_player(*iParam2, !bParam3);
	}
}

bool func_91(int iParam0)
{
	iVar0 = _0x5407b7288d0478b7(Global_35, iParam0);
	return iVar0 > 0;
}

void func_92()
{
	if (iLocal_18 == 2 && !func_27(8))
	{
		func_289(&uLocal_1805, 0);
		func_290(&iLocal_1794, Global_35, 0, -1, 1148846080, 0, 4);
		func_262(vLocal_1578[0]);
	}
}

void func_93(int iParam0)
{
	func_291(1, iParam0, 0);
}

int func_94(char[4] cParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	iParam3 = iParam3;
	iParam4 = iParam4;
	if (!is_entity_dead(iParam2) && (func_292(iParam2, iParam3, 1, 1) < 70f || bParam5))
	{
		StringCopy(&cVar0, sParam1, 24);
		if (bParam7)
		{
			task_look_at_entity(iParam2, iParam3, 7000, 0, 51, 0);
			if (func_292(iParam2, iParam3, 1, 1) < 25f)
			{
				task_look_at_entity(iParam3, iParam2, 7000, 0, 51, 0);
			}
		}
		if (iParam4 > 0)
		{
			iVar3 = 1;
		}
		func_74(&uLocal_0);
		if (_0xd89504d9d7d5057d(sParam1))
		{
			if (func_293(sParam1))
			{
				return 1;
			}
		}
		else if (func_294(cParam0, cVar0, iVar3, iParam4, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_95(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_295(iParam0, iParam1, sParam2, iParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

void func_96(int iParam0, int iParam1)
{
	Global_40.f_9096[iParam0]->f_9 = &Global_40.f_9096[iParam0];
	Global_40.f_9096[iParam0]->f_10 = Global_40.f_9096[iParam0]->f_3;
	func_296(iParam0, iParam1, 0, 0, 0, 1);
	func_25(iParam0, 32768);
	func_9(iParam0, 16777216);
	func_192(iParam0, 4194304);
}

void func_97(int iParam0)
{
	func_260(iParam0, &(iParam0->f_28));
	func_297(iParam0, 1);
	func_175(iParam0, 0);
	func_298(iParam0, 0);
	func_299(iParam0, 0);
	func_300(iParam0, 0);
}

int func_98(int iParam0, bool bParam1)
{
	return func_301(iParam0, Global_1894899->f_2, bParam1);
}

bool func_99(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

bool func_100(int iParam0, bool bParam1)
{
	if (func_1() != -1)
	{
		return false;
	}
	if (!func_99(iParam0))
	{
		return false;
	}
	if (!func_302(iParam0) && bParam1)
	{
		return false;
	}
	return func_55(iParam0, 1);
}

void func_101(bool bParam0)
{
	if (func_27(2097152) || bParam0)
	{
		if (func_110(iVar1785, 0, 1))
		{
			set_ped_config_flag(iVar1785, 136, false);
			func_303(iVar1785, 0);
		}
		func_139(2097152);
	}
}

void func_102()
{
	if (!func_27(8))
	{
		switch (iLocal_18)
		{
			case 1:
				func_304();
				break;
			case 4:
				func_305();
				break;
		}
	}
	else
	{
		func_306();
		func_307(Local_1618[0]);
	}
}

void func_103()
{
	if ((does_entity_exist(Local_386.f_690[0]->f_8) && func_308(Local_1618[0])) && _0xb6cbd40f8ea69e8a(Local_386.f_690[0]->f_8))
	{
		if (!func_27(1024) && (has_anim_event_fired(Local_386.f_690[0]->f_8, 137477946) || func_186(Global_35, &(iLocal_1759[2]), 1, 0)))
		{
			func_5(1024);
		}
		if (!func_27(512) && has_anim_event_fired(Local_386.f_690[0]->f_8, 296703555))
		{
			func_5(512);
		}
		if (has_anim_event_fired(Local_386.f_690[0]->f_8, 886554851))
		{
			set_pad_shake(0, 200, func_309());
			func_28();
			if (!func_21(16384))
			{
				func_141(16384);
			}
		}
		if (has_anim_event_fired(Local_386.f_690[0]->f_8, -394031553))
		{
			iVar0 = create_itemset(false);
			if (is_itemset_valid(iVar0))
			{
				iVar1 = _0x886171a12f400b89(&(iLocal_1759[1]), iVar0, 1);
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = get_indexed_item_in_itemset(iVar2, iVar0);
					if (_get_item_type(iVar3) == 9)
					{
						iVar4 = _0x3ffb15534067dcd4(iVar3);
						if (!func_20(&Local_1389, 2) && iVar4 == func_58(66))
						{
						}
						else if (!is_entity_dead(iVar4))
						{
							if (func_310(&iVar4, &(Local_386.f_690[0]->f_8)))
							{
								if (is_ped_human(iVar4) && iVar4 != Global_35)
								{
									func_43(524288);
								}
								func_196(iVar4, 0, 0);
							}
						}
					}
					iVar2++;
				}
			}
			destroy_itemset(iVar0);
		}
	}
}

int func_104(int iParam0, int iParam1, int iParam2)
{
	if ((func_311(iParam0, 16777216) && func_311(iParam0, 33554432)) && func_311(iParam0, 268435456))
	{
		return 379542007;
	}
	iVar0 = _0xf8204ef17410bf43(416676503, iParam1, iParam2, 0);
	iVar1 = _0xf8204ef17410bf43(-1101297303, iParam1, iParam2, 0);
	iVar2 = 392538360;
	iVar3 = 0;
	if (!func_311(iParam0, 33554432))
	{
		iVar3 = iVar1;
	}
	if (!func_311(iParam0, 16777216))
	{
		if (!func_312(iVar3) || _0xf2f585411e748b9c(iVar0, 0) > _0xf2f585411e748b9c(iVar3, 0))
		{
			iVar3 = iVar0;
		}
	}
	if (!func_311(iParam0, 268435456) && func_313(iVar2))
	{
		if (!func_312(iVar3) || _0xf2f585411e748b9c(iVar2, 0) > _0xf2f585411e748b9c(iVar3, 0))
		{
			iVar3 = iVar2;
		}
	}
	if (!func_312(iVar3))
	{
		return 379542007;
	}
	return iVar3;
}

int func_105(var uParam0, int iParam1)
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

int func_106(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, float fParam11)
{
	if (iParam5 > 0)
	{
		_0xf008e0ba1fe1d644(iParam5);
	}
	else
	{
		return iParam5;
	}
	bParam8 = (bParam8 || func_20(iParam0, 4096));
	if (iParam0->f_136 == 1)
	{
		func_164(&iVar4, &iVar5, func_8(1, 1048576));
	}
	else
	{
		func_165(iParam0->f_137, &iVar4, &iVar5, 1, 0);
	}
	iVar3 = iVar4;
	while (iVar3 <= iVar5)
	{
		if (!func_99(iVar3))
		{
		}
		else if (iVar3 == iParam0->f_138)
		{
		}
		else if (func_55(iVar3, 32))
		{
		}
		else
		{
			iVar6 = func_58(iVar3);
			if (!is_entity_dead(iVar6) && !func_269(iVar6, &(iParam0->f_140)))
			{
				(*iParam1)[iVar0] = iVar6;
				if (!is_entity_a_mission_entity(iVar6))
				{
					set_entity_as_mission_entity(iVar6, true, false);
				}
				set_ped_config_flag(iVar6, 146, false);
				set_ped_config_flag(iVar6, 246, true);
				set_ped_config_flag(iVar6, 178, true);
				set_ped_can_be_targetted(iVar6, true);
				func_57(iVar3, 1, 1);
				set_ped_config_flag(iVar6, 277, false);
				_0xfc3db99c8144cd81(iVar6, (*Global_1392194)[iParam0->f_136]->f_5, 0, false, 0);
				if ((func_314(iVar6, (iParam3 == -1 || iVar1 < iParam3), (bParam9 || bParam8)) || iVar3 == 808) || iVar3 == 809)
				{
					_0x802092b07e3b1eea(iVar6, Global_36, 3);
					set_ped_relationship_group_hash(iVar6, 1269650476);
					func_315(iVar6, (*uParam2)[iVar0], 831283580, 580546400, 0, 0);
					set_ped_combat_attributes(iVar6, 58, true);
					set_ped_combat_attributes(iVar6, 5, true);
					set_ped_combat_attributes(iVar6, 71, true);
					set_ped_combat_attributes(iVar6, 31, true);
					if (func_316(iVar6))
					{
						iVar7 = func_317(iVar6);
					}
					if (is_ped_human(iVar6))
					{
						if (func_318(&iVar6, iVar7, (bParam9 || bParam8)))
						{
							_give_weapon_to_ped_2(iVar6, iParam4, 100, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
							if (func_312(iVar7))
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
					if (func_312(iVar7))
					{
						task_swap_weapon(0, 1, 0, 0, 0);
					}
					if (is_ped_human(iVar6) && !func_316(iVar6))
					{
						task_react(0, Global_35, 0f, 0f, 0f, func_319(), 0.5f, 0, 4);
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
					if ((bParam7 || func_247(iVar6, 1, 1) < 15f) || func_320())
					{
						clear_ped_tasks(iVar6, 1, 0);
						set_ped_config_flag(iVar6, 178, false);
						_task_smart_flee_style_ped(iVar6, Global_35, 4, 0, -1082130432, -1, 0);
						set_ped_keep_task(iVar6, true);
						func_321(&iVar6, iParam10, fParam11);
					}
					else
					{
						open_sequence_task(&iVar2);
						task_react(0, Global_35, 0f, 0f, 0f, func_319(), 0.5f, 0, 4);
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

bool func_107(int iParam0)
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

int func_108(char* sParam0)
{
	if (!is_itemset_valid(&Global_1396084))
	{
		return 0;
	}
	iVar0 = get_hash_key(sParam0);
	iVar1 = get_itemset_size(&Global_1396084);
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar2 = get_indexed_item_in_itemset(iVar3, &Global_1396084);
		if (_does_item_have_valid_base(iVar2))
		{
			if (decor_exist_on(iVar2, "pedRoam_hashKey"))
			{
				if (decor_get_int(iVar2, "pedRoam_hashKey") == iVar0)
				{
					iVar4 = _0x3ffb15534067dcd4(iVar2);
					decor_remove(iVar4, "pedRoam_hashKey");
					remove_from_itemset(iVar2, &Global_1396084);
					return iVar4;
				}
			}
		}
		iVar3++;
	}
	return 0;
}

int func_109(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_110(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_322(iParam0, iParam1);
}

void func_111(int iParam0, int iParam1, int* iParam2, bool bParam3, int iParam4, int iParam5)
{
	iVar0 = -89429847;
	if (iParam5 == 0 || iParam5 == Global_35)
	{
		iParam5 = Global_35;
		iVar0 = 831283580;
	}
	bParam3 = (bParam3 || func_20(iParam0, 4096));
	if (_0xcb690f680a3ea971(iParam1, 4))
	{
		bParam3 = false;
	}
	func_323(iParam1);
	func_284(iParam2);
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
			func_315(iParam1, iParam2, iVar0, 580546400, 0, 0);
			if (func_316(iParam1))
			{
				iParam4 = func_317(iParam1);
			}
			if (is_ped_human(iParam1))
			{
				bVar2 = func_109(iParam1, 0, 1, 0) != iParam4;
				if (bVar2)
				{
					_give_weapon_to_ped_2(iParam1, iParam4, 100, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
			}
			if (func_312(iParam4))
			{
				set_current_ped_weapon(iParam1, iParam4, true, 0, false, false);
			}
			open_sequence_task(&iVar1);
			if (is_ped_human(iParam1))
			{
				if (func_312(iParam4))
				{
					task_swap_weapon(0, 1, 0, 0, 0);
				}
				if (!is_ped_using_any_scenario(iParam1) && bVar2)
				{
					task_react(0, Global_35, 0f, 0f, 0f, func_319(), 0.5f, 0, 4);
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

void func_112(int iParam0, int iParam1)
{
	if (func_322(iParam0, 0))
	{
		if (!does_entity_exist(_get_rider_of_mount(iParam0, false)))
		{
			if (!is_entity_dead(iParam1))
			{
				if (get_script_task_status(iParam0, 518218985, true) != 1)
				{
					task_smart_flee_ped(iParam0, iParam1, 500f, -1, 0, 1077936128, 0);
					set_ped_as_no_longer_needed(&iParam0);
				}
			}
		}
	}
}

int func_113(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (func_110(iParam0[iVar0], 0, 1))
		{
			if (decor_exist_on(iParam0[iVar0], "bCowering"))
			{
				if ((func_324(iParam0[iVar0], 0, iParam1, &(iParam1->f_28), 0, 0) || func_325(iParam0[iVar0], iParam1, &(iParam1->f_28), 0)) || func_292(iParam0[iVar0], Global_35, 1, 1) < 8f)
				{
					if (iParam1->f_28 != 32 || func_326((*iParam0)[iVar0], iParam1, 1097859072))
					{
						set_ped_relationship_group_hash(iParam0[iVar0], -401180987);
						_task_smart_flee_style_ped(iParam0[iVar0], Global_35, 4, 0, -1082130432, -1, 0);
						set_ped_keep_task(iParam0[iVar0], true);
						decor_remove(iParam0[iVar0], "bCowering");
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_114()
{
	iVar0 = func_58(Local_1389.f_138);
	if (!is_entity_dead(iVar0))
	{
		if (func_327(&iVar0))
		{
			func_328(iVar0, func_104(268435456, 1056964608, 1065353216), 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
	}
}

void func_115()
{
	if (func_329(&iVar0))
	{
		if (func_330(iVar0, &(Local_1618[2]), "Son", 0, 0, 1, 0))
		{
			func_111(&Local_1389, iVar0, uLocal_1790[1], 1, 0, Global_35);
			func_49(131072);
		}
	}
}

int func_116(int iParam0, int iParam1, int iParam2, char* sParam3)
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
		func_331(iParam0, 0);
		func_332(iParam0, iParam1);
		func_333(iParam0, iParam2);
		if (!is_string_null_or_empty(sParam3))
		{
			iVar0 = get_hash_key(sParam3);
			if (!func_107(iVar0))
			{
				decor_set_int(iParam0, "pedRoam_hashKey", iVar0);
			}
		}
		return 1;
	}
	return 0;
}

int func_117(int iParam0)
{
	if (func_334())
	{
		return 0;
	}
	if (!func_335(3, &Var0))
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

bool func_118(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5)
{
	if (iParam0->f_136 == 1)
	{
		func_164(&iVar1, &iVar2, func_8(1, 1048576));
	}
	else
	{
		func_165(iParam0->f_137, &iVar1, &iVar2, 1, 0);
	}
	iVar0 = iVar1;
	while (iVar0 <= iVar2)
	{
		if (!func_99(iVar0))
		{
		}
		else if (func_55(iVar0, 32))
		{
		}
		else
		{
			iVar3 = func_58(iVar0);
			if (!does_entity_exist(iVar3))
			{
			}
			else if (!decor_exist_on(iVar3, "bPedAlreadyCounted"))
			{
				if (is_entity_dead(iVar3))
				{
					if (func_336(iParam0, iVar3))
					{
						decor_set_bool(iVar3, "bPedAlreadyCounted", true);
						*uParam3++;
						if (!func_20(iParam0, 32768))
						{
							func_42(iParam0, 32768);
						}
					}
				}
				else if (!func_20(iParam0, 32768))
				{
					if (has_entity_been_damaged_by_entity(iVar3, Global_35, 1, 1))
					{
						func_42(iParam0, 32768);
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
			if (func_336(iParam0, iParam5))
			{
				decor_set_bool(iParam5, "bPedAlreadyCounted", true);
				*uParam3++;
				if (!func_20(iParam0, 32768))
				{
					func_42(iParam0, 32768);
				}
			}
		}
		else if (!func_20(iParam0, 32768))
		{
			if (has_entity_been_damaged_by_entity(iParam5, Global_35, 1, 1))
			{
				func_42(iParam0, 32768);
			}
		}
	}
	iVar4 = 0;
	while (iVar4 < *iParam1)
	{
		if (does_entity_exist(iParam1[iVar4]) && !decor_exist_on(iParam1[iVar4], "bPedAlreadyCounted"))
		{
			if (is_entity_dead(iParam1[iVar4]))
			{
				if (func_336(iParam0, iParam1[iVar4]))
				{
					decor_set_bool(iParam1[iVar4], "bPedAlreadyCounted", true);
					*uParam3++;
					if (!func_20(iParam0, 32768))
					{
						func_42(iParam0, 32768);
					}
				}
			}
			else if (!func_20(iParam0, 32768))
			{
				if (has_entity_been_damaged_by_entity(iParam1[iVar4], Global_35, 1, 1))
				{
					func_42(iParam0, 32768);
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
				if (func_336(iParam0, iParam2[iVar4]))
				{
					decor_set_bool(iParam2[iVar4], "bPedAlreadyCounted", true);
					*uParam3++;
					if (!func_20(iParam0, 32768))
					{
						func_42(iParam0, 32768);
					}
				}
			}
			else if (!func_20(iParam0, 32768))
			{
				if (has_entity_been_damaged_by_entity(iParam2[iVar4], Global_35, 1, 1))
				{
					func_42(iParam0, 32768);
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

bool func_119(int iParam0, bool bParam1)
{
	if (func_1() != -1)
	{
		return false;
	}
	if (!func_99(iParam0))
	{
		return false;
	}
	if (!_0x800df3fc913355f3(func_159(iParam0)))
	{
		return false;
	}
	if (bParam1 && !does_entity_exist(func_228(iParam0)))
	{
		return false;
	}
	return !_0xeb98b38ca60742d7(func_159(iParam0));
}

void func_120(int iParam0)
{
	if (!func_337(&(iParam0->f_9[0])))
	{
		return;
	}
	iVar1 = &iParam0->f_9[0];
	func_338(&iVar1, 0, iParam0->f_4, 0, 0, 0, 0, 0);
	if (func_339(iVar1, 1))
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
			func_123(iParam0, 16);
			iParam0->f_4 = 30;
		}
	}
}

bool func_121(int iParam0, int iParam1)
{
	return func_147(iParam0->f_17, iParam1);
}

void func_122(var uParam0, int* iParam1, int* iParam2, var uParam3)
{
	if (is_entity_dead(*iParam1))
	{
		func_82(iParam1, uParam0, 0);
		return;
	}
	func_340(iParam1);
	if (func_121(iParam1, 4))
	{
		if (iParam1->f_13 < 7)
		{
			func_341(iParam1, 7);
		}
		func_123(iParam1, 4);
	}
	if (func_121(iParam1, 256))
	{
		func_342(iParam1, iParam2, uParam3, 0);
	}
	if (func_121(iParam1, 512) && iParam1->f_13 > 2)
	{
		if (iParam1->f_2 > 2)
		{
			iParam1->f_2 = 0;
			func_74(&(iParam1->f_6));
			func_341(iParam1, 2);
		}
		iParam1->f_2++;
		func_123(iParam1, 512);
	}
	switch (iParam1->f_13)
	{
		case 0:
			func_74(&(iParam1->f_6));
			if (*iParam1 == 0)
			{
				func_341(iParam1, 9);
				return;
			}
			if (is_entity_dead(*iParam1))
			{
				func_341(iParam1, 9);
				return;
			}
			iParam1->f_5 = func_98(*iParam1, 0);
			if (iParam1->f_5 != -1)
			{
				if (!func_100(iParam1->f_5, 0))
				{
					func_343(iParam1->f_5);
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
				func_265(iParam1, 8);
			}
			if (!func_344(*iParam1, 1))
			{
				sVar1 = func_345(uParam0->f_136, -1);
				if (!is_string_null_or_empty(sVar1))
				{
					func_346(*iParam1, sVar1, 0);
				}
			}
			if (func_121(iParam1, 64))
			{
			}
			else if (iParam1->f_16 == 5)
			{
			}
			else if (func_347(*iParam1))
			{
				task_dismount_animal(*iParam1, 16777216, 0, 0, 0, 0);
			}
			else if (is_ped_in_any_vehicle(*iParam1, true))
			{
				task_leave_any_vehicle(*iParam1, 0, 0);
			}
			func_341(iParam1, 1);
			break;
		case 1:
			if (func_99(iParam1->f_5))
			{
				if (!func_100(iParam1->f_5, 0))
				{
					func_343(iParam1->f_5);
				}
			}
			if (func_348(&(iParam1->f_6)) < 5f && ((func_254(*iParam1, 501393341) || func_254(*iParam1, -828834893)) || func_254(*iParam1, 451360105)))
			{
				return;
			}
			func_74(&(iParam1->f_6));
			if (iParam1->f_16 == 5)
			{
				func_341(iParam1, 3);
				set_blocking_of_non_temporary_events(*iParam1, false);
				return;
			}
			if (is_entity_dead(*iParam1))
			{
				func_341(iParam1, 9);
				return;
			}
			if (!func_121(iParam1, 64))
			{
				_0x62fdad5e01d2dd47(*iParam1, Global_36, 3, 0);
				clear_ped_tasks(*iParam1, 1, 0);
				open_sequence_task(&iVar0);
				if (func_349(iParam1) && (func_350(*iParam1, Global_35, 1) > 9f || _0xcb690f680a3ea971(*iParam1, 4)))
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
			func_351(249295937, *iParam1, 1);
			if (!is_string_null_or_empty(iParam1->f_20[0]))
			{
				if (func_121(iParam1, 32))
				{
					func_94(&(uParam0->f_35), iParam1->f_20[0], *iParam1, Global_35, 0, 0, 1, 1);
				}
				else
				{
					func_95(*iParam1, Global_35, iParam1->f_20[0], 0, -1082130432, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				}
			}
			else
			{
				func_95(*iParam1, Global_35, func_352(iParam1, 1), 0, -1082130432, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
			}
			if (iParam1->f_16 == 5)
			{
				func_341(iParam1, 3);
			}
			else
			{
				func_341(iParam1, 2);
			}
			break;
		case 3:
			if ((is_any_speech_playing(*iParam1) || !func_353(0, 1, *iParam1, 1)) || func_354(iParam1->f_20[0]))
			{
				return;
			}
			if (func_355(*iParam1, 1, 1, 1, 0, 0))
			{
				if (func_348(&(iParam1->f_6)) < 10f)
				{
					return;
				}
				else
				{
					func_265(iParam1, 2);
					func_341(iParam1, 9);
					return;
				}
			}
			func_341(iParam1, 5);
			break;
		case 4:
			if (func_99(iParam1->f_5))
			{
				if (!func_100(iParam1->f_5, 0))
				{
					func_343(iParam1->f_5);
				}
			}
			if ((is_any_speech_playing(*iParam1) || !func_353(0, 1, *iParam1, 1)) || func_354(iParam1->f_20[0]))
			{
				return;
			}
			if (func_355(*iParam1, 1, 1, 1, 0, 0))
			{
				if (func_348(&(iParam1->f_6)) < 10f)
				{
					return;
				}
				else
				{
					func_265(iParam1, 2);
					func_341(iParam1, 9);
					return;
				}
			}
			func_341(iParam1, 5);
			break;
		case 5:
			if (func_99(iParam1->f_5))
			{
				if (!func_100(iParam1->f_5, 0))
				{
					func_343(iParam1->f_5);
				}
			}
			if ((is_any_speech_playing(*iParam1) || !func_353(0, 1, *iParam1, 1)) || func_354(iParam1->f_20[0]))
			{
				return;
			}
			if (func_355(*iParam1, 1, 1, 1, 0, 0))
			{
				if (func_348(&(iParam1->f_6)) < 10f)
				{
					func_341(iParam1, 3);
					return;
				}
				else
				{
					func_265(iParam1, 2);
					func_341(iParam1, 9);
					return;
				}
			}
			func_74(&(iParam1->f_6));
			func_341(iParam1, 7);
			break;
		case 2:
			if (func_99(iParam1->f_5))
			{
				if (!func_100(iParam1->f_5, 0))
				{
					func_343(iParam1->f_5);
				}
			}
			if ((is_any_speech_playing(*iParam1) || !func_353(0, 1, *iParam1, 1)) || func_354(iParam1->f_20[0]))
			{
				return;
			}
			if (((iParam1->f_16 != 5 && func_348(&(iParam1->f_6)) < 25f) && func_254(*iParam1, 242628503)) && func_350(*iParam1, Global_35, 1) > 9f)
			{
				return;
			}
			if (is_entity_dead(*iParam1))
			{
				func_341(iParam1, 9);
				return;
			}
			if (!func_121(iParam1, 64))
			{
				switch (iParam1->f_16)
				{
					case -1:
					case 2:
					case 4:
						clear_ped_tasks(*iParam1, 1, 0);
						if (!func_121(iParam1, 4) && !_0xcb690f680a3ea971(*iParam1, 7))
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
						if (func_121(iParam1, 16))
						{
							clear_ped_tasks(*iParam1, 1, 0);
							if (!func_121(iParam1, 4) && !_0xcb690f680a3ea971(*iParam1, 7))
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
									if (!func_121(iParam1, 4) && !_0xcb690f680a3ea971(*iParam1, 7))
									{
										task_confront(*iParam1, Global_35, 2);
									}
									break;
							}
						}
						break;
					case 8:
						clear_ped_tasks(*iParam1, 1, 0);
						if (func_121(iParam1, 16))
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
			func_74(&(iParam1->f_6));
			func_351(249295937, *iParam1, 1);
			if (!is_string_null_or_empty(iParam1->f_20[1]))
			{
				if (func_121(iParam1, 32))
				{
					func_94(&(uParam0->f_35), iParam1->f_20[1], *iParam1, Global_35, 0, 0, 1, 1);
				}
				else
				{
					func_95(*iParam1, Global_35, iParam1->f_20[1], 0, -1082130432, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				}
			}
			else
			{
				func_95(*iParam1, Global_35, func_352(iParam1, 2), 0, -1082130432, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
			}
			switch (iParam1->f_16)
			{
				case 1:
				case 3:
				case 6:
				case 8:
					func_341(iParam1, 6);
					break;
				default:
					func_341(iParam1, 7);
					break;
			}
			break;
		case 6:
			if (func_99(iParam1->f_5))
			{
				if (!func_100(iParam1->f_5, 0))
				{
					func_343(iParam1->f_5);
				}
			}
			if (is_any_speech_playing(*iParam1) || !func_353(0, 1, *iParam1, 1))
			{
				return;
			}
			if ((!func_121(iParam1, 4) && func_254(*iParam1, -1942934348)) && func_348(&(iParam1->f_6)) < 5f)
			{
				return;
			}
			if (func_348(&(iParam1->f_6)) < 15f)
			{
				return;
			}
			func_74(&(iParam1->f_6));
			if (is_entity_dead(*iParam1))
			{
				func_341(iParam1, 9);
				return;
			}
			func_341(iParam1, 7);
			break;
		case 7:
			if (func_99(iParam1->f_5))
			{
				if (!func_100(iParam1->f_5, 0))
				{
					func_343(iParam1->f_5);
				}
			}
			if (is_any_speech_playing(*iParam1) || !func_353(0, 1, *iParam1, 1))
			{
				return;
			}
			if ((!func_121(iParam1, 4) && func_254(*iParam1, -1942934348)) && func_348(&(iParam1->f_6)) < 5f)
			{
				return;
			}
			if (iParam1->f_16 == 1 && does_entity_exist(func_356(Global_35)))
			{
				func_265(iParam1, 2);
			}
			func_74(&(iParam1->f_6));
			if (is_entity_dead(*iParam1))
			{
				func_341(iParam1, 9);
				return;
			}
			if (!func_121(iParam1, 64))
			{
				clear_ped_tasks(*iParam1, 1, 0);
			}
			func_341(iParam1, 8);
			break;
		case 8:
			if (func_99(iParam1->f_5))
			{
				if (!func_100(iParam1->f_5, 0))
				{
					func_343(iParam1->f_5);
				}
			}
			if (func_358(&(iParam1->f_6), func_357(iParam1)))
			{
				stop_ped_speaking(*iParam1, false);
				if (!func_121(iParam1, 64) && !func_121(iParam1, 128))
				{
					if (iParam1->f_5 != -1)
					{
						func_240(iParam1->f_5, 1);
					}
					else
					{
						set_ped_as_no_longer_needed(iParam1);
					}
				}
				func_341(iParam1, 9);
			}
			break;
		case 9:
			func_359(iParam1, iParam2, uParam3);
			func_82(iParam1, uParam0, 0);
			break;
	}
}

void func_123(int iParam0, int iParam1)
{
	func_185(&(iParam0->f_17), iParam1);
}

int func_124()
{
	if (func_20(&Local_1389, 32))
	{
		func_360();
		return 0;
	}
	func_236();
	iVar0 = func_58(Local_1389.f_138);
	if (!func_50(2097152))
	{
		if (iLocal_18 < 5)
		{
			func_361(0);
			func_279(0, 1, 1);
			if (iLocal_18 < 4)
			{
				func_361(1);
				func_279(1, 1, 1);
				func_361(2);
				func_279(2, 1, 1);
			}
		}
		func_43(2097152);
	}
	if (!is_entity_dead(iVar0))
	{
		iLocal_1768[0] = iVar0;
		fLocal_1778[0] = func_247(iVar0, 1, 1);
		func_59(&(Local_1389.f_35), iVar0, "HOME_FOREMAN", 0);
		func_362(&iVar0);
	}
	if (iLocal_18 < 5)
	{
		func_363(&Local_2071);
	}
	if (!func_27(4))
	{
		func_364();
		return 0;
	}
	if (!func_27(2) && !func_55(Local_1389.f_138, 32))
	{
		bVar3 = func_27(1);
		func_366(func_58(Local_1389.f_138), uLocal_1790[0], &Local_1389, func_27(8), &bVar3, 1, func_365());
		func_7(1, bVar3);
	}
	if (iLocal_18 < 4)
	{
		iVar1 = func_58(65);
		iVar2 = func_58(66);
		iLocal_1768[1] = iVar1;
		iLocal_1768[2] = iVar2;
		func_59(&(Local_1389.f_35), func_58(65), "HOME_SON1", 0);
		func_59(&(Local_1389.f_35), func_58(66), "HOME_SON2", 0);
		fLocal_1778[1] = func_247(iVar1, 1, 1);
		fLocal_1778[2] = func_247(iVar2, 1, 1);
		func_367(&iVar1, &iVar2);
	}
	Local_2071.f_33 = { Local_1389.f_35 };
	Local_1857.f_81 = { Local_1389.f_35 };
	if (func_27(8))
	{
		if (iLocal_18 == 4)
		{
			return func_368();
		}
		else if (!func_8(Local_1389.f_136, 2))
		{
			if (!func_27(2))
			{
				return func_369(&iVar0, &iVar1, &iVar2);
			}
			else
			{
				return func_370(&iVar0, 0, 0);
			}
		}
	}
	func_371();
	switch (iLocal_18)
	{
		case 1:
			if (!func_27(2))
			{
				return func_372(&iVar0, &iVar1, &iVar2);
			}
			else
			{
				return func_370(&iVar0, 0, 0);
			}
			break;
		case 2:
			if (func_27(64))
			{
				return func_373(&iVar0, &iVar1, &iVar2);
			}
			else if (!func_27(2))
			{
				return func_369(&iVar0, &iVar1, &iVar2);
			}
			else
			{
				return func_370(&iVar0, 0, 0);
			}
			break;
		case 3:
			if (!func_27(2))
			{
				if (func_27(131072))
				{
					return func_374(&iVar0, &iVar1, &iVar2);
				}
				else
				{
					return func_375(&iVar0, &iVar1, &iVar2);
				}
			}
			else
			{
				return func_370(&iVar0, 0, 0);
			}
			break;
		case 4:
			if (!func_27(2))
			{
				return func_376(&iVar0);
			}
			else
			{
				return func_377(&iVar0);
			}
			break;
		case 5:
			return func_368();
	}
	return 0;
}

void func_125()
{
	iVar0 = 0;
	while (iVar0 < iVar1766)
	{
		func_378(iLocal_1768[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1792)
	{
		func_378(iLocal_1794[iVar0]);
		iVar0++;
	}
}

bool func_126()
{
	if (func_20(&Local_1389, 1024))
	{
		return true;
	}
	if (bVar1854)
	{
		return true;
	}
	if (iVar1819 == 1)
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
	if (func_379(bVar1854))
	{
		return true;
	}
	return false;
}

bool func_127(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return false;
	}
	return true;
}

int func_128(int iParam0)
{
	if (!func_127(iParam0))
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

bool func_129(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

void func_130(int iParam0, int iParam1)
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

Vector3 func_131(int iParam0, int iParam1)
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

void func_132(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_133(int iParam0, int iParam1)
{
	func_380(iParam0, iParam1);
}

bool func_134(int iParam0, bool bParam1, bool bParam2)
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

bool func_135()
{
	return func_386(64);
}

bool func_136(int iParam0, bool bParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_ped_injured(iParam0) || !bParam1)
		{
			iVar0 = get_interior_from_entity(iParam0);
			if (is_valid_interior(iVar0))
			{
				if (func_387(iVar0) || func_388(iVar0))
				{
					return false;
				}
				return true;
			}
		}
	}
	return false;
}

bool func_137()
{
	return Global_1310750->f_16077 != 0;
}

int func_138()
{
	return Global_1310750->f_16071;
}

void func_139(int iParam0)
{
	func_219(&iLocal_14, iParam0);
}

void func_140(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	if (!func_127(iParam0))
	{
		return;
	}
	func_389(iParam0, Global_40.f_9096[iParam0]->f_10, iParam1, iParam2, uParam3, uParam4);
}

void func_141(int iParam0)
{
	func_133(&iLocal_16, iParam0);
}

void func_142(int iParam0)
{
	func_219(&iLocal_16, iParam0);
}

bool func_143(int iParam0)
{
	if (!func_127(iParam0))
	{
		return false;
	}
	return Global_40.f_9096[iParam0]->f_3 > Global_40.f_9096[iParam0]->f_10;
}

bool func_144(int iParam0)
{
	if (decor_exist_on(*iParam0, "bLostLogs") && decor_get_bool(*iParam0, "bLostLogs"))
	{
		return false;
	}
	if (get_entity_model(*iParam0) != -1708097161)
	{
		return false;
	}
	if (func_390(iParam0))
	{
		return true;
	}
	return false;
}

int func_145()
{
	return &Global_1899515;
}

int func_146(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

bool func_147(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_148(int iParam0)
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

int func_149(int iParam0)
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

int func_150(int iParam0)
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

int func_151(int iParam0)
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

bool func_152(int iParam0)
{
	if ((func_10(iParam0, 524288) || func_10(iParam0, 1048576)) || func_10(iParam0, 2097152))
	{
		return true;
	}
	return false;
}

int func_153(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (!_does_volume_exist(iParam0))
	{
		return 0;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	vVar3 = { _0x3e2a25b2416dd67e(iParam0) };
	iVar6 = func_391(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

bool func_154(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

Vector3 func_155()
{
	return -426.3027f, 498.6826f, 97.12895f;
}

void func_156(var uParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_392(uParam0))
	{
		*uParam0 = _0xfa50f79257745e74(vParam1, fParam4, iParam5, iParam6, iParam7);
		if (func_392(uParam0))
		{
		}
	}
}

int func_157(int iParam0)
{
	if (!func_99(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0];
}

bool func_158(int iParam0)
{
	return iParam0 != 0;
}

int func_159(int iParam0)
{
	if (!func_99(iParam0))
	{
		return 0;
	}
	return (*Global_1895087)[iParam0]->f_1;
}

void func_160(int iParam0, int iParam1)
{
	if (!func_393(iParam0))
	{
		return;
	}
	(*Global_1888801)[iParam0]->f_19 = iParam1;
}

void func_161(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_185(&iParam1, 8192);
	}
	if (bParam3)
	{
		_0x2161278c6322f740(iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
	}
}

void func_162(var uParam0, bool bParam1)
{
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(uParam0, iVar0);
}

void func_163(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
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

void func_164(int iParam0, int iParam1, bool bParam2)
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

bool func_165(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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

int func_166(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_1() != -1)
	{
		return 1;
	}
	if (!func_393(iParam0))
	{
		return 1;
	}
	if (func_129(iParam0, 16))
	{
		return 1;
	}
	if (func_394(iParam0) && !func_395(iParam0))
	{
	}
	if (func_165(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (func_99(iParam1))
		{
			iVar0 = iParam1;
		}
		if (func_99(iParam2))
		{
			iVar1 = iParam2;
		}
		if (&Global_1897950 < iVar0 || &Global_1897950 > iVar1)
		{
			Global_1897950 = iVar0;
		}
		while (true)
		{
			if ((!func_394(iParam0) || func_395(iParam0)) || func_396(&Global_1897950))
			{
				func_223(&Global_1897950, 0);
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

void func_167(int iParam0)
{
	func_299(iParam0, 0);
	func_174(iParam0, 0);
	func_40(iParam0, 1);
	func_177(iParam0, 1);
	func_172(iParam0, 0);
	func_182(iParam0, 1);
	func_397(iParam0, 1, 1, 1);
}

void func_168(int iParam0, float fParam1, bool bParam2)
{
	iParam0->f_22 = fParam1;
	if (bParam2)
	{
		func_398(iParam0, fParam1);
	}
}

void func_169(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_185(&(iParam0->f_1), 4);
	}
	else
	{
		func_132(&(iParam0->f_1), 4);
	}
}

void func_170(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_185(&(iParam0->f_1), 2);
	}
	else
	{
		func_132(&(iParam0->f_1), 2);
	}
}

void func_171(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_185(&(iParam0->f_1), 1);
	}
	else
	{
		func_132(&(iParam0->f_1), 1);
	}
}

void func_172(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_185(&(iParam0->f_1), 128);
	}
	else
	{
		func_132(&(iParam0->f_1), 128);
	}
}

void func_173(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_185(&(iParam0->f_1), 1024);
	}
	else
	{
		func_132(&(iParam0->f_1), 1024);
	}
}

void func_174(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_185(&(iParam0->f_1), 2048);
	}
	else
	{
		func_132(&(iParam0->f_1), 2048);
	}
}

void func_175(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_132(iParam0, 32);
	}
	else
	{
		func_185(iParam0, 32);
	}
}

void func_176(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_185(&(iParam0->f_1), 8);
	}
	else
	{
		func_132(&(iParam0->f_1), 8);
	}
}

void func_177(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_132(iParam0, 16);
	}
	else
	{
		func_185(iParam0, 67108864);
		func_185(iParam0, 16);
	}
}

void func_178(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_132(iParam0, 8);
	}
	else
	{
		func_185(iParam0, 8);
	}
}

void func_179(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_132(iParam0, 1024);
	}
	else
	{
		func_185(iParam0, 1024);
	}
}

void func_180(int iParam0, float fParam1)
{
	iParam0->f_19 = fParam1;
}

void func_181(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_132(iParam0, 128);
	}
	else
	{
		func_185(iParam0, 128);
	}
}

void func_182(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_132(iParam0, 256);
	}
	else
	{
		func_185(iParam0, 256);
	}
}

void func_183(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_132(iParam0, 2);
	}
	else
	{
		func_185(iParam0, 2);
	}
}

void func_184(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_132(iParam0, 131072);
	}
	else
	{
		func_185(iParam0, 131072);
	}
}

void func_185(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

bool func_186(int iParam0, int iParam1, bool bParam2, int iParam3)
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

void func_187()
{
	_uilog_clear_cached_objective();
}

void func_188(int iParam0)
{
	Global_40.f_9096[iParam0]->f_9 = -1;
	Global_40.f_9096[iParam0]->f_10 = -1;
	func_9(iParam0, 32768);
}

void func_189(int iParam0)
{
	if (does_entity_exist(*iParam0))
	{
		uVar0 = _0x0139637a3bff8b6d(*iParam0, &uVar1);
		_0x946d46cd6dfb9742(get_player_index(), uVar1, uVar0);
	}
}

bool func_190(int iParam0, int iParam1, bool bParam2)
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

bool func_191(bool bParam0)
{
	if (!does_entity_exist(iVar1786))
	{
		return false;
	}
	if (is_entity_dead(iVar1786))
	{
		return true;
	}
	if (bParam0 && !func_390(&uLocal_1789))
	{
		return true;
	}
	if (get_entity_health(iVar1786) < 10)
	{
		if (_0x3ec28da1ffac9ddd(iVar1786, Global_35, 1, 1))
		{
			return true;
		}
	}
	return false;
}

void func_192(int iParam0, int iParam1)
{
	if (!func_127(iParam0))
	{
		return;
	}
	if (!func_10(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_9096[iParam0]->f_4 = (Global_40.f_9096[iParam0]->f_4 - (Global_40.f_9096[iParam0]->f_4 && iParam1));
}

void func_193()
{
	func_399(&uLocal_1707, 0);
	func_399(&uLocal_1708, 0);
	func_399(&uLocal_1709, 0);
}

void func_194(bool bParam0)
{
	if (bParam0)
	{
		func_400("SP_EVENT_AREA_CASTORS_2_IDLE", 0);
		func_401(4);
	}
	else if (!func_402(4))
	{
		if (func_402(2))
		{
			if (!func_403(vLocal_1578[6]))
			{
				func_74(vLocal_1578[6]);
			}
			else if (func_348(vLocal_1578[6]) > 20f)
			{
				func_400("SP_EVENT_AREA_CASTORS_2_IDLE", 0);
				func_401(4);
			}
		}
	}
}

bool func_195()
{
	if (func_1() == -1)
	{
		if (func_404() || func_405())
		{
			return true;
		}
	}
	else if (func_406(1, 255))
	{
		return true;
	}
	return false;
}

void func_196(int iParam0, bool bParam1, bool bParam2)
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

void func_197(int* iParam0)
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

int func_198(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2;
				case 1:
					return 4;
				case 2:
					return 8;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 16;
				case 1:
					return 32;
				case 2:
					return 64;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 128;
				case 1:
					return 256;
				case 2:
					return 512;
				default:
					break;
			}
			break;
	}
	return 0;
}

void func_199()
{
	func_407(23);
}

void func_200(int iParam0, int iParam1)
{
	if (!func_127(iParam0))
	{
		return;
	}
	if (func_10(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_9096[iParam0]->f_4 = (Global_40.f_9096[iParam0]->f_4 || iParam1);
}

void func_201(int iParam0, int iParam1, int iParam2)
{
	func_42(iParam2, 128);
	func_61(iParam0, 0);
	func_160(iParam2->f_137, 0);
	func_408(iParam2);
	func_200(iParam0, 2048);
	func_68(iParam2, 64);
	if (iParam2->f_137 == 76)
	{
		func_164(&iVar0, &iVar1, func_8(1, 1048576));
	}
	else
	{
		func_165(iParam2->f_137, &iVar0, &iVar1, 0, 0);
	}
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		set_ped_keep_task(func_58(iVar2), true);
		iVar2++;
	}
	Global_1898092->f_26.f_7 = iVar0;
	Global_1898092->f_26.f_8 = iParam2->f_29;
	Global_1898092->f_26.f_2 = iParam2->f_136;
	Global_1898092->f_26.f_1 = iParam2->f_137;
	func_409(512);
	iVar3 = 0;
	while (iVar3 < 26)
	{
		if (does_entity_exist(iParam1->f_690[iVar3]->f_8))
		{
			delete_object(&(iParam1->f_690[iVar3]->f_8));
		}
		iVar3++;
	}
	if (func_285(iParam2->f_32))
	{
		func_286(&(iParam2->f_32), 1, 1);
	}
	if (func_285(iParam2->f_33))
	{
		func_286(&(iParam2->f_33), 1, 1);
	}
	if (func_285(iParam2->f_34))
	{
		func_286(&(iParam2->f_34), 1, 1);
	}
	if ((*iParam1 + iParam1->f_1) > 0)
	{
		_0x7d4e70a67a651c71((*iParam1 + iParam1->f_1));
	}
	if (func_410(get_cause_of_most_recent_force_cleanup(), 1))
	{
		func_200(iParam2->f_136, 4194304);
	}
	func_86();
	if (func_20(iParam2, 65536))
	{
		set_player_control(get_player_index(), true, 0, false);
		display_radar(true);
		display_hud(true);
	}
}

void func_202(int iParam0)
{
	iVar0 = _0x62de46f061caa468();
	if (iParam0->f_3 > iVar0)
	{
		iParam0->f_3 = iVar0;
	}
	_0x7d4e70a67a651c71(iParam0->f_3);
	iParam0->f_3 = 0;
}

char* func_203()
{
	return "HMSTD";
}

char* func_204()
{
	return "HSTDAUD";
}

bool func_205(bool bParam0)
{
	iVar0 = get_cause_of_most_recent_force_cleanup();
	if (bParam0)
	{
		return true;
	}
	if (func_411(iVar0))
	{
		return false;
	}
	if (func_412(iVar0, 1) || func_412(iVar0, 2))
	{
		return true;
	}
	return false;
}

bool func_206()
{
	if (iLocal_18 < 5)
	{
		return true;
	}
	if ((func_4() - iVar1851) > 10000)
	{
		return true;
	}
	if (!_does_volume_exist(&(iLocal_1759[3])))
	{
		return false;
	}
	if (_0xee1d6ff54caf7714(&(iLocal_1759[3]), func_159(68)))
	{
		return true;
	}
	func_413(67, &(iLocal_1759[3]), 1);
	func_413(68, &(iLocal_1759[3]), 0);
	_0x4a8fefc43fd8ac9b(&(iLocal_1759[3]), 0, 1);
	_0x53d05d60e5f5b40c(&(iLocal_1759[3]), 0, 1, func_159(68));
	return true;
}

void func_207(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_414(&((*uParam0)[iVar0]->f_1));
		func_414(&((*uParam0)[iVar0]->f_12));
		iVar0++;
	}
}

void func_208(var uParam0)
{
	if (uParam0->f_137 == 76)
	{
		func_164(&iVar0, &iVar1, func_8(1, 1048576));
	}
	else
	{
		func_165(uParam0->f_137, &iVar0, &iVar1, 0, 0);
	}
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		if (func_99(iVar2) && !func_55(iVar2, 32))
		{
			iVar3 = func_229(iVar2);
			func_414(&iVar3);
		}
		iVar2++;
	}
}

void func_209()
{
	switch (iLocal_18)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			break;
	}
}

void func_210()
{
	if (iLocal_18 == 5)
	{
		return;
	}
	if (func_27(2))
	{
		func_416(Local_1618[2], "script@proc@eventareas@castorsPond@sonhammering", func_415(2), 0);
	}
	else if (func_27(8))
	{
		func_416(Local_1618[0], "script@proc@eventareas@castorsPond@stageTwo_Father", func_415(0), 0);
		func_416(Local_1618[2], "script@proc@eventareas@castorsPond@sonhammering", func_415(2), 0);
	}
	else
	{
		switch (iLocal_18)
		{
			case 1:
				func_416(Local_1618[0], "script@proc@eventareas@castorsPond@stageOne_All", func_415(0), 0);
				break;
			case 2:
				break;
			case 3:
				func_416(Local_1618[0], "script@proc@eventareas@castorsPond@stageThreeFather", func_415(0), 0);
				func_416(Local_1618[1], "script@proc@eventareas@castorsPond@stageThreeGiveMoney", func_415(1), 64);
				func_416(Local_1618[2], "script@proc@eventareas@castorsPond@sonhammering", func_415(2), 0);
				break;
			case 4:
				if (func_417())
				{
					func_416(Local_1618[0], "script@proc@eventareas@castorsPond@stagefour", func_415(0), 0);
				}
				else
				{
					func_416(Local_1618[0], "script@proc@eventareas@castorsPond@stageTwo_Father", "PBL_intro_idle", 0);
				}
				break;
		}
	}
}

void func_211(var uParam0)
{
	uParam0->f_132 = 1;
	*uParam0 = -3.5f;
	if (func_10(Local_1389.f_136, 128))
	{
		if (func_27(2))
		{
			if (iLocal_18 == 3 && func_27(16))
			{
				uParam0->f_1 = "HOME_LN01ANW";
				uParam0->f_135 = "HOME_LN01ANP";
				uParam0->f_5 = "HOME_LN01ANN";
			}
			else
			{
				uParam0->f_1 = "HOME_LN01ANA";
				uParam0->f_135 = "HOME_LN01ANP";
				uParam0->f_5 = "HOME_LN01ANN";
			}
		}
		else if ((iLocal_18 == 3 && func_8(Local_1389.f_136, 128)) && !func_21(64))
		{
			uParam0->f_1 = "HOME_NJI";
			uParam0->f_135 = "HOME_NJIP";
			uParam0->f_5 = "HOME_NJIN";
		}
		else if (func_320())
		{
			uParam0->f_1 = "HMSTD_IG2NJ";
			uParam0->f_135 = "HMSTD_RESP";
			uParam0->f_5 = "HOME2_POS_AO";
			uParam0->f_3 = "HMSTD_IG2NJ2";
		}
		else
		{
			uParam0->f_1 = "HMSTD_IG2NJA";
			uParam0->f_135 = "HMSTD_RESPA";
			uParam0->f_5 = "HOME2_NEG_AO";
			uParam0->f_3 = "HMSTD_IG2NJA2";
		}
		uParam0->f_8 = 0;
		uParam0->f_9 = 0;
	}
	else if (func_27(2))
	{
		if (iLocal_18 == 3 && func_27(16))
		{
			uParam0->f_1 = "HOME_LN01ANW";
			uParam0->f_135 = "HOME_LN01ANP";
			uParam0->f_5 = "HOME_LN01ANN";
		}
		else
		{
			uParam0->f_1 = "HOME_LN01ANA";
			uParam0->f_135 = "HOME_LN01ANP";
			uParam0->f_5 = "HOME_LN01ANN";
		}
		uParam0->f_8 = 0;
		uParam0->f_9 = 0;
	}
	else
	{
		switch (iLocal_18)
		{
			case 1:
				uParam0->f_1 = "HOME_LN01A";
				uParam0->f_3 = "HOME_LN02A";
				break;
			case 2:
				break;
			case 3:
				if (!func_10(Local_1389.f_136, 64))
				{
					uParam0->f_1 = "HMSTD_IG3_ASK";
				}
				else
				{
					uParam0->f_1 = "HMSTD_ASK_2";
				}
				break;
			case 4:
				if (func_417())
				{
					uParam0->f_1 = "HOME_LN01E";
				}
				else
				{
					uParam0->f_1 = "HOME_LN01EA";
					uParam0->f_135 = "HOME_LN02EAP";
					uParam0->f_5 = "HOME_LN02EAN";
				}
				break;
		}
		uParam0->f_8 = 0;
		uParam0->f_9 = 0;
	}
}

void func_212(var uParam0)
{
	uParam0->f_179 = 1;
	switch (iLocal_18)
	{
		case 2:
			StringCopy(&(uParam0->f_34), "HOME_THXA", 64);
			StringCopy(&(uParam0->f_54), "HOME_WLCMA", 64);
			uParam0->f_72 = 100;
			uParam0->f_79 = 1;
			uParam0->f_77 = 0;
			uParam0->f_78 = 0;
			break;
		case 3:
			StringCopy(&(uParam0->f_34), "HOME_THXB", 64);
			StringCopy(&(uParam0->f_54), "HOME_WLCMB", 64);
			uParam0->f_79 = 0;
			uParam0->f_77 = 0;
			uParam0->f_78 = 0;
			uParam0->f_187 = -3.5f;
			uParam0->f_182 = 0;
			break;
		case 4:
			StringCopy(&(uParam0->f_34), "HOME_THXC", 64);
			StringCopy(&(uParam0->f_54), "HOME_WLCMC", 64);
			uParam0->f_79 = 1;
			uParam0->f_77 = 0;
			uParam0->f_78 = 0;
			break;
	}
}

void func_213()
{
	if (iLocal_18 < 4)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (func_154(Global_40.f_9096[Local_1389.f_136]->f_6, func_198(iVar0, iVar1)))
				{
					(Local_386.f_690[func_418(iVar0, iVar1)])->f_7 = -1404171522;
					*(Local_386.f_690[func_418(iVar0, iVar1)]) = { func_419(iVar0, iVar1) };
					(Local_386.f_690[func_418(iVar0, iVar1)])->f_4 = { func_420(iVar0, iVar1) };
					(Local_386.f_690[func_418(iVar0, iVar1)])->f_10 = 0;
					func_133(&((Local_386.f_690[func_418(iVar0, iVar1)])->f_11), 1);
					func_133(&((Local_386.f_690[func_418(iVar0, iVar1)])->f_11), 64);
					func_133(&((Local_386.f_690[func_418(iVar0, iVar1)])->f_11), 2);
				}
				iVar1++;
			}
			iVar0++;
		}
	}
	if (func_27(8) || func_27(2))
	{
		if (iLocal_18 < 4)
		{
			if (func_27(256))
			{
				Local_386.f_690[1]->f_7 = -967333571;
				*Local_386.f_690[1] = { -439.4445f, 507.9429f, 96.03515f };
				Local_386.f_690[1]->f_3 = -105f;
				Local_386.f_690[1]->f_10 = 0;
			}
			Local_386.f_690[2]->f_7 = 1058703817;
			*Local_386.f_690[2] = { -439.4445f, 507.9429f, 96.03515f };
			Local_386.f_690[2]->f_3 = -105f;
			Local_386.f_690[2]->f_10 = 0;
			Local_386.f_690[4]->f_7 = -1404171522;
			*Local_386.f_690[4] = { -439.4445f, 507.9429f, 96.03515f };
			Local_386.f_690[4]->f_3 = -105f;
			Local_386.f_690[4]->f_10 = 0;
			Local_386.f_690[5]->f_7 = -1404171522;
			*Local_386.f_690[5] = { -439.4445f, 507.9429f, 96.03515f };
			Local_386.f_690[5]->f_3 = -105f;
			Local_386.f_690[5]->f_10 = 0;
			Local_386.f_690[6]->f_7 = -1404171522;
			*Local_386.f_690[6] = { -439.4445f, 507.9429f, 96.03515f };
			Local_386.f_690[6]->f_3 = -105f;
			Local_386.f_690[6]->f_10 = 0;
			Local_386.f_690[7]->f_7 = -1404171522;
			*Local_386.f_690[7] = { -439.4445f, 507.9429f, 96.03515f };
			Local_386.f_690[7]->f_3 = -105f;
			Local_386.f_690[7]->f_10 = 0;
			Local_386.f_690[8]->f_7 = -1404171522;
			*Local_386.f_690[8] = { -439.4445f, 507.9429f, 96.03515f };
			Local_386.f_690[8]->f_3 = -105f;
			Local_386.f_690[8]->f_10 = 0;
			Local_386.f_690[9]->f_7 = 1286899977;
			*Local_386.f_690[9] = { -439.4445f, 507.9429f, 96.03515f };
			Local_386.f_690[9]->f_3 = -105f;
			Local_386.f_690[9]->f_10 = 0;
			Local_386.f_690[10]->f_7 = 1286899977;
			*Local_386.f_690[10] = { -439.4445f, 507.9429f, 96.03515f };
			Local_386.f_690[10]->f_3 = -105f;
			Local_386.f_690[10]->f_10 = 0;
			Local_386.f_690[11]->f_7 = 1286899977;
			*Local_386.f_690[11] = { -439.4445f, 507.9429f, 96.03515f };
			Local_386.f_690[11]->f_3 = -105f;
			Local_386.f_690[11]->f_10 = 0;
			Local_386.f_690[12]->f_7 = 1286899977;
			*Local_386.f_690[12] = { -439.4445f, 507.9429f, 96.03515f };
			Local_386.f_690[12]->f_3 = -105f;
			Local_386.f_690[12]->f_10 = 0;
			if (iLocal_18 == 1)
			{
				if (func_20(&Local_1389, 32))
				{
					if (func_154(Global_40.f_9096[Local_1389.f_136]->f_6, 1))
					{
						Local_386.f_690[0]->f_7 = 1620657627;
						*Local_386.f_690[0] = { func_421() };
						Local_386.f_690[0]->f_3 = func_422();
					}
					else if (func_8(Local_1389.f_136, 4194304))
					{
						Local_386.f_690[0]->f_7 = 0;
					}
					else
					{
						Local_386.f_690[0]->f_7 = 1620657627;
						*Local_386.f_690[0] = { func_423() };
						Local_386.f_690[0]->f_4 = { func_424() };
					}
					func_133(&(Local_386.f_690[0]->f_11), 2);
				}
				else
				{
					func_133(&(Global_40.f_9096[Local_1389.f_136]->f_6), 1);
					Local_386.f_690[0]->f_7 = 1620657627;
					*Local_386.f_690[0] = { func_421() };
					Local_386.f_690[0]->f_3 = func_422();
				}
				Local_386.f_690[0]->f_10 = 0;
				func_133(&(Local_386.f_690[0]->f_11), 1);
				func_133(&(Local_386.f_690[0]->f_11), 64);
				if (func_10(Local_1389.f_136, 128))
				{
					func_133(&(Local_386.f_690[0]->f_11), 2);
				}
			}
		}
	}
	else
	{
		switch (iLocal_18)
		{
			case 1:
				Local_386.f_690[0]->f_7 = 1620657627;
				*Local_386.f_690[0] = { func_421() };
				Local_386.f_690[0]->f_3 = func_422();
				Local_386.f_690[0]->f_10 = 0;
				func_133(&(Local_386.f_690[0]->f_11), 1);
				func_133(&(Local_386.f_690[0]->f_11), 64);
				if (func_10(Local_1389.f_136, 128))
				{
					func_133(&(Local_386.f_690[0]->f_11), 2);
				}
				if (!func_10(Local_1389.f_136, 128))
				{
					Local_386.f_690[1]->f_7 = -967333571;
				}
				else
				{
					Local_386.f_690[1]->f_7 = 0;
				}
				*Local_386.f_690[1] = { -439.4445f, 507.9429f, 96.03515f };
				Local_386.f_690[1]->f_3 = -105f;
				Local_386.f_690[1]->f_10 = 0;
				if (!func_10(Local_1389.f_136, 128))
				{
					Local_386.f_690[2]->f_7 = 1058703817;
				}
				else
				{
					Local_386.f_690[2]->f_7 = 0;
				}
				*Local_386.f_690[2] = { -439.4445f, 507.9429f, 96.03515f };
				Local_386.f_690[2]->f_3 = -105f;
				Local_386.f_690[2]->f_10 = 0;
				if (!func_10(Local_1389.f_136, 128))
				{
					Local_386.f_690[3]->f_7 = 1077976463;
				}
				else
				{
					Local_386.f_690[3]->f_7 = 0;
				}
				*Local_386.f_690[3] = { -438.4642f, 508.0584f, 97.86085f };
				Local_386.f_690[3]->f_3 = -174.79f;
				Local_386.f_690[3]->f_10 = 0;
				func_133(&(Local_386.f_690[3]->f_11), 1);
				func_133(&(Local_386.f_690[3]->f_11), 2);
				break;
			case 3:
				if (!func_10(Local_1389.f_136, 128))
				{
					Local_386.f_690[0]->f_7 = -1281909308;
				}
				else
				{
					Local_386.f_690[0]->f_7 = 0;
				}
				*Local_386.f_690[0] = { -439.4445f, 507.9429f, 96.03515f };
				Local_386.f_690[0]->f_3 = -105f;
				Local_386.f_690[0]->f_10 = 0;
				Local_386.f_690[2]->f_7 = 1058703817;
				*Local_386.f_690[2] = { -439.4445f, 507.9429f, 96.03515f };
				Local_386.f_690[2]->f_3 = -105f;
				Local_386.f_690[2]->f_10 = 0;
				Local_386.f_690[4]->f_7 = -1404171522;
				*Local_386.f_690[4] = { -439.4445f, 507.9429f, 96.03515f };
				Local_386.f_690[4]->f_3 = -105f;
				Local_386.f_690[4]->f_10 = 0;
				Local_386.f_690[5]->f_7 = -1404171522;
				*Local_386.f_690[5] = { -439.4445f, 507.9429f, 96.03515f };
				Local_386.f_690[5]->f_3 = -105f;
				Local_386.f_690[5]->f_10 = 0;
				Local_386.f_690[6]->f_7 = -1404171522;
				*Local_386.f_690[6] = { -439.4445f, 507.9429f, 96.03515f };
				Local_386.f_690[6]->f_3 = -105f;
				Local_386.f_690[6]->f_10 = 0;
				Local_386.f_690[7]->f_7 = -1404171522;
				*Local_386.f_690[7] = { -439.4445f, 507.9429f, 96.03515f };
				Local_386.f_690[7]->f_3 = -105f;
				Local_386.f_690[7]->f_10 = 0;
				Local_386.f_690[8]->f_7 = -1404171522;
				*Local_386.f_690[8] = { -439.4445f, 507.9429f, 96.03515f };
				Local_386.f_690[8]->f_3 = -105f;
				Local_386.f_690[8]->f_10 = 0;
				Local_386.f_690[9]->f_7 = 1286899977;
				*Local_386.f_690[9] = { -439.4445f, 507.9429f, 96.03515f };
				Local_386.f_690[9]->f_3 = -105f;
				Local_386.f_690[9]->f_10 = 0;
				Local_386.f_690[10]->f_7 = 1286899977;
				*Local_386.f_690[10] = { -439.4445f, 507.9429f, 96.03515f };
				Local_386.f_690[10]->f_3 = -105f;
				Local_386.f_690[10]->f_10 = 0;
				Local_386.f_690[11]->f_7 = 1286899977;
				*Local_386.f_690[11] = { -439.4445f, 507.9429f, 96.03515f };
				Local_386.f_690[11]->f_3 = -105f;
				Local_386.f_690[11]->f_10 = 0;
				Local_386.f_690[12]->f_7 = 1286899977;
				*Local_386.f_690[12] = { -439.4445f, 507.9429f, 96.03515f };
				Local_386.f_690[12]->f_3 = -105f;
				Local_386.f_690[12]->f_10 = 0;
				break;
			case 4:
				if (func_417())
				{
					Local_386.f_690[0]->f_7 = -1281909308;
					*Local_386.f_690[0] = { -442.2039f, 497.12f, 98.7195f };
					Local_386.f_690[0]->f_3 = -1.93f;
					Local_386.f_690[0]->f_10 = 0;
				}
				else
				{
					Local_386.f_690[1]->f_7 = -967333571;
					*Local_386.f_690[1] = { -439.4445f, 507.9429f, 96.03515f };
					Local_386.f_690[1]->f_3 = -105f;
					Local_386.f_690[1]->f_10 = 0;
				}
				break;
		}
	}
}

void func_214(var uParam0)
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

Vector3 func_215()
{
	return -439.4356f, 498.2648f, 97.93082f;
}

bool func_216()
{
	if (!func_425(&(Local_386.f_690)))
	{
		return false;
	}
	return true;
}

bool func_217(bool bParam0)
{
	switch (iLocal_19)
	{
		case 0:
			iLocal_1817 = get_interior_at_coords(func_426());
			pin_interior_in_memory(iVar1814);
			iLocal_19 = 1;
			break;
		case 1:
			if (is_valid_interior(iVar1814) && is_interior_ready(iVar1814))
			{
				if (bParam0)
				{
					if (!is_interior_entity_set_active(iVar1814, "cas_housewares"))
					{
						activate_interior_entity_set(iVar1814, "cas_housewares", 0);
					}
				}
				else if (is_interior_entity_set_active(iVar1814, "cas_housewares"))
				{
					deactivate_interior_entity_set(iVar1814, "cas_housewares", true);
				}
				iLocal_19 = 2;
				return true;
			}
			break;
		case 2:
			return true;
	}
	return false;
}

bool func_218()
{
	if (iLocal_18 == 2)
	{
		if ((prepare_music_event("SP_EVENT_AREA_CASTORS_2_IDLE") && prepare_music_event("SP_EVENT_AREA_CASTORS_2_START")) && prepare_music_event("SP_EVENT_AREA_CASTORS_2_ACTION"))
		{
			return true;
		}
		return false;
	}
	return true;
}

void func_219(int iParam0, int iParam1)
{
	func_427(iParam0, iParam1);
}

bool func_220(var uParam0)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_428((*uParam0)[iVar0]))
		{
			bVar1 = true;
		}
		iVar0++;
	}
	return !bVar1;
}

bool func_221(var uParam0)
{
	if (uParam0->f_137 == 76)
	{
		func_164(&iVar0, &iVar1, func_8(1, 1048576));
	}
	else
	{
		func_165(uParam0->f_137, &iVar0, &iVar1, 0, 0);
	}
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		if (func_99(iVar2) && !func_55(iVar2, 32))
		{
			iVar3 = func_229(iVar2);
			if (!func_429(iVar3))
			{
				return false;
			}
		}
		iVar2++;
	}
	return true;
}

int func_222(int iParam0, var uParam1, vector3 vParam2, int iParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, int iParam10)
{
	if (bParam6)
	{
		func_430(&vParam2, uParam1->f_22);
	}
	if (!bParam7 && func_431(uParam1))
	{
		iVar0 = _0xeaf682a14f8e5f53(uParam1->f_5, vParam2, iParam5, 1, 1, iParam9, iParam10);
		if (!does_entity_exist(iVar0))
		{
			iVar0 = func_432(iParam0, vParam2, iParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
		}
		else if (_is_metaped_outfit_request_valid(uParam1->f_5))
		{
			_release_metaped_outfit_request(uParam1->f_5);
		}
	}
	else
	{
		iVar0 = func_432(iParam0, vParam2, iParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
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
		if (!is_string_null_or_empty(&(uParam1->f_23)) && !func_433(iVar0))
		{
			func_346(iVar0, &(uParam1->f_23), 0);
		}
		if (func_433(iVar0))
		{
			set_animal_tuning_bool_param(iVar0, 48, true);
		}
		else
		{
			set_ped_config_flag(iVar0, 307, true);
		}
		if (func_434(&(uParam1->f_22)))
		{
			set_ped_can_ragdoll(iVar0, true);
			set_ped_to_ragdoll(iVar0, 1000, 1000, 1, false, false, false);
			set_ped_config_flag(iVar0, 186, !func_435(&(uParam1->f_22)));
			func_196(iVar0, func_436(&(uParam1->f_22)), 0);
		}
		else
		{
			request_ped_visibility_tracking(iVar0);
		}
		if (func_437(&(uParam1->f_22)))
		{
			freeze_entity_position(iVar0, true);
		}
		if (func_438(&(uParam1->f_22)))
		{
			func_439(iVar0, 1);
		}
		_0xa91e6cf94404e8c9(iVar0);
		set_ped_config_flag(iVar0, 6, func_440(&(uParam1->f_22)));
		set_ped_config_flag(iVar0, 393, true);
		if (!func_154(uParam1->f_22, 8192))
		{
			_set_entity_something(iVar0, true);
		}
		if (!func_433(iVar0))
		{
			func_442(iVar0, !func_441(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 4, func_443(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 297, !func_444(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 317, !func_444(&(uParam1->f_22)));
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

int func_223(int iParam0, bool bParam1)
{
	if (!func_99(iParam0))
	{
		return 0;
	}
	if (!func_55(iParam0, 2))
	{
		return 0;
	}
	if (func_55(iParam0, 32) && !bParam1)
	{
		func_445(iParam0, _create_persistent_character(func_157(iParam0)));
		if (func_1() == -1)
		{
			if (func_55(iParam0, 2048))
			{
				_0x49a8c2cd97815215(func_159(iParam0));
				func_31(iParam0, 2048);
			}
			_0xfcc6db8dbe709bc8(func_159(iParam0));
		}
		return 0;
	}
	if (!func_446(iParam0) && func_1() == -1)
	{
		return 0;
	}
	if (_0x800df3fc913355f3(func_159(iParam0)))
	{
		func_31(iParam0, 128);
		return 1;
	}
	func_445(iParam0, _create_persistent_character(func_157(iParam0)));
	_0x4f81ead1de8fa19b(func_159(iParam0));
	if (func_55(iParam0, 2048))
	{
		_0x49a8c2cd97815215(func_159(iParam0));
		func_31(iParam0, 2048);
	}
	return 1;
}

bool func_224(int iParam0)
{
	if (!func_99(iParam0))
	{
		return false;
	}
	if (_0x800df3fc913355f3(func_159(iParam0)))
	{
		_0x49a8c2cd97815215(func_159(iParam0));
		if (!does_entity_exist(_0x0cadc3a977997472(func_159(iParam0), 0)))
		{
			return false;
		}
	}
	return true;
}

bool func_225(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_226(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (!func_447(iParam0, 1))
	{
		return 0;
	}
	if (func_158(func_157(iParam0)))
	{
		iVar1 = func_159(iParam0);
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
	if ((bParam4 && !func_302(iParam0)) && !is_entity_dead(iVar0))
	{
		set_ped_config_flag(iVar0, 171, bParam5);
		set_entity_as_mission_entity(iVar0, true, true);
	}
	func_29(iParam0, 1);
	func_448(iParam0);
	if (bParam3)
	{
		func_29(iParam0, 16);
	}
	if (!bParam2)
	{
	}
	return iVar0;
}

void func_227(int iParam0, bool bParam1, bool bParam2)
{
	set_ped_config_flag(iParam0, 297, false);
	set_ped_config_flag(iParam0, 301, false);
	set_ped_config_flag(iParam0, 315, false);
	set_ped_config_flag(iParam0, 130, false);
	set_ped_config_flag(iParam0, 178, bParam2);
	set_ped_config_flag(iParam0, 330, false);
	set_ped_config_flag(iParam0, 317, bParam1);
}

int func_228(int iParam0)
{
	iVar0 = func_159(iParam0);
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

int func_229(int iParam0)
{
	if (!func_99(iParam0))
	{
		return 0;
	}
	return _0xa00df706c60173d1(Global_1895087[iParam0]);
}

bool func_230(var uParam0, int iParam1, char* sParam2)
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

Vector3 func_231()
{
	return 0f, 0f, 0f;
}

int func_232(vector3 vParam0, int iParam3, float fParam4, bool bParam5, int iParam6, int iParam7, bool bParam8)
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
		else if ((*iParam3)[iVar0]->f_7 != 0 && !func_154((*iParam3)[iVar0]->f_11, 16))
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
					if (func_154((*iParam3)[iVar0]->f_11, 64))
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
					if (!func_154((*iParam3)[iVar0]->f_11, 8))
					{
						vVar5 = { _get_object_offset_from_coords(vParam0, fParam4, *(*iParam3)[iVar0]) };
					}
					else
					{
						vVar5 = { *(*iParam3)[iVar0] };
					}
					if (!func_154((*iParam3)[iVar0]->f_11, 128))
					{
						func_449(&vVar5, (*iParam3)[iVar0]->f_10);
					}
					if (func_154((*iParam3)[iVar0]->f_11, 64))
					{
						(*iParam3)[iVar0]->f_8 = create_object_no_offset((*iParam3)[iVar0]->f_7, vVar5, true, true, false, false);
					}
					else
					{
						(*iParam3)[iVar0]->f_8 = create_object((*iParam3)[iVar0]->f_7, vVar5, true, true, false, false, true);
					}
					if (func_225((*iParam3)[iVar0]->f_4))
					{
						vVar1 = { 0f, 0f, (*iParam3)[iVar0]->f_3 };
					}
					else
					{
						vVar1 = { (*iParam3)[iVar0]->f_4 };
					}
					if (func_154((*iParam3)[iVar0]->f_11, 4))
					{
						vVar1.f_2 = func_450((vVar1.z + fParam4));
					}
					set_entity_rotation((*iParam3)[iVar0]->f_8, vVar1, 2, true);
					if (!func_154((*iParam3)[iVar0]->f_11, 128))
					{
						if ((*iParam3)[iVar0]->f_10)
						{
							_0x9587913b9e772d29((*iParam3)[iVar0]->f_8, 0);
						}
					}
				}
				if (func_154((*iParam3)[iVar0]->f_11, 2))
				{
					freeze_entity_position((*iParam3)[iVar0]->f_8, true);
				}
				if (func_154((*iParam3)[iVar0]->f_11, 32))
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

void func_233(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0] = (&Global_23118[iParam0] - (Global_23118[iParam0] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0] = (&Global_1058888->f_40615[iParam0] - (Global_1058888->f_40615[iParam0] && iParam1));
}

bool func_234(var uParam0)
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

bool func_235()
{
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (_does_anim_scene_exist(&(Local_1618[iVar1])))
		{
			if (!func_451(Local_1618[iVar1]))
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

void func_236()
{
	if (!is_entity_dead(func_58(Local_1389.f_138)))
	{
		if (!func_344(func_58(Local_1389.f_138), 1))
		{
			func_346(func_58(Local_1389.f_138), "HOME_FOREMAN", 0);
		}
	}
	if (!is_entity_dead(func_58(65)))
	{
		if (!func_344(func_58(65), 1))
		{
			func_346(func_58(65), "HOME_SON1", 0);
		}
	}
	if (!is_entity_dead(func_58(66)))
	{
		if (!func_344(func_58(66), 1))
		{
			func_346(func_58(66), "HOME_SON2", 0);
		}
	}
}

Vector3 func_237(int iParam0)
{
	switch (iParam0)
	{
		case 64:
			return -448.439f, 498.22f, 97.101f;
		case 65:
			return -447.9209f, 502.1195f, 97.09232f;
		case 66:
			return -448.263f, 496.549f, 97.108f;
		default:
			break;
	}
	return -448.276f, 501.427f, 97.088f;
}

void func_238(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_452(Global_35) && is_player_teleport_active())
	{
	}
	if (func_433(iParam0))
	{
		if (func_453(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_154(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_238(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_238(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_154(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_154(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_154(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_154(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_154(iParam5, 129))
	{
		if (func_154(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		set_entity_coords_no_offset(iParam0, vParam1, func_154(iParam5, 32), true, true);
		set_entity_heading(iParam0, fParam4);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_154(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_154(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_433(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_154(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_35 && !func_154(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

void func_239(var uParam0, var uParam1)
{
	iVar0 = get_random_int_in_range(0, 4);
	switch (iLocal_18)
	{
		case 1:
			switch (iVar0)
			{
				case 0:
				case default:
					*uParam0 = { -438.3227f, 502.7075f, 96.96414f };
					*uParam1 = -172.27f;
					break;
				case 1:
					*uParam0 = { -439.1737f, 501.2494f, 97.9471f };
					*uParam1 = 0.08f;
					break;
				case 2:
					*uParam0 = { -439.7097f, 502.6812f, 96.99051f };
					*uParam1 = 0.87f;
					break;
			}
			break;
		case 2:
			switch (iVar0)
			{
				case 0:
				case default:
					*uParam0 = { -431.0712f, 500.0492f, 97.08342f };
					*uParam1 = 1.82f;
					break;
				case 1:
					*uParam0 = { -430.9988f, 498.5522f, 97.17651f };
					*uParam1 = 1.82f;
					break;
				case 2:
					*uParam0 = { -440.5598f, 501.184f, 97.93082f };
					*uParam1 = -169.43f;
					break;
			}
			break;
		case 3:
			switch (iVar0)
			{
				case 0:
				case default:
					*uParam0 = { -431.0101f, 500.1457f, 97.08251f };
					*uParam1 = -177.44f;
					break;
				case 1:
					*uParam0 = { -434.0943f, 501.0357f, 97.00861f };
					*uParam1 = -179.67f;
					break;
				case 2:
					*uParam0 = { -438.3969f, 501.2292f, 97.93732f };
					*uParam1 = -178.38f;
					break;
				case 3:
					*uParam0 = { -435.3391f, 499.4035f, 97.93315f };
					*uParam1 = -176.75f;
					break;
			}
			break;
	}
}

void func_240(int iParam0, bool bParam1)
{
	if (func_100(iParam0, 0))
	{
		iVar0 = func_58(iParam0);
		if (!is_entity_dead(iVar0))
		{
			set_ped_config_flag(iVar0, 234, true);
			set_ped_config_flag(iVar0, 259, true);
		}
		func_454(iParam0, 0, 1, 0, 0);
		_0x6759bee6762e140b(func_159(iParam0));
		if (bParam1)
		{
			func_227(iVar0, 1, 1);
		}
	}
}

Vector3 func_241()
{
	return -444.5521f, 500.3867f, 98.9383f;
}

float func_242()
{
	return 8.27f;
}

void func_243(int iParam0, bool bParam1)
{
	if (bParam1 || func_10(iParam0, 8192))
	{
		if (!_uilog_is_entry_registered(3, func_455(iParam0)))
		{
			return;
		}
		_uilog_remove_entry(3, func_455(iParam0));
		func_192(iParam0, 8192);
	}
}

void func_244(int iParam0)
{
	if (!func_10(iParam0, 8192))
	{
		_uilog_add_entry_hash(3, func_455(iParam0), func_131(iParam0, func_24(iParam0)), func_456(iParam0), func_457(iParam0), 0);
		_uilog_set_entry_icon_texture(3, func_455(iParam0), func_458(iParam0), func_459());
		_uilog_set_entry_brief_texture(3, func_455(iParam0), func_460(iParam0), func_461());
		func_200(iParam0, 8192);
	}
}

void func_245(int iParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4)
{
	_uilog_add_or_update_objective(3, func_455(iParam0), iParam1, sParam2, bParam3, false, false);
	if (bParam4)
	{
		func_463(func_462(iParam0), sParam2, func_459(), func_458(iParam0), 1433015236, 0, -1, -2, 0, 0, 0, 0, 1, 1, 0);
	}
}

void func_246(int iParam0, bool bParam1)
{
	if (!func_464(iParam0))
	{
		iVar0 = func_128(iParam0);
		func_25(iParam0, 1);
		switch (iParam0)
		{
			case 0:
			case 2:
			case 3:
				func_465(iVar0, 0);
				break;
			case 1:
				_0xd8c7162ab2e2af45(-238119963);
				break;
		}
		if (bParam1)
		{
			func_466(iParam0, 0);
		}
	}
}

float func_247(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return -1f;
	}
	return func_292(Global_35, iParam0, bParam1, bParam2);
}

void func_248(var uParam0, int iParam1, int iParam2)
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

void func_249(var uParam0, int iParam1, int iParam2)
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

char* func_250(int iParam0)
{
	if (func_121(iParam0, 16))
	{
		return "HMSTD_MIN_AGG";
	}
	else
	{
		switch (iParam0->f_16)
		{
			case 4:
			case default:
				return "HMSTD_MIN_ATK";
			case 5:
			case 6:
				return "HMSTD_AIM";
			case 1:
				return "HMSTD_BODY";
			case 2:
				return "HMSTD_HOG_SON";
			case 3:
				return "HMSTD_DYNAMITE";
			case 7:
				switch (get_random_int_in_range(0, 2))
				{
					case 0:
					case default:
						return "HMSTD_STEAL1";
					case 1:
						return "HMSTD_STEAL2";
					}
					return "HMSTD_MIN_ATK";
				}

char* func_251(int iParam0, int iParam1)
{
	if (func_121(iParam0, 16))
	{
		switch (iParam0->f_1)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						return "HMSTD_S1_AGGR1";
					case 1:
						return "HMSTD_S1_AGGR2";
					default:
						break;
				}
				break;
			default:
				switch (iParam1)
				{
					case 0:
						return "HMSTD_S1_AGGR3";
					case 1:
						return "HMSTD_S1_AGGR4";
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
			case 4:
			case default:
				iVar0 = get_random_int_in_range(0, 2);
				switch (iVar0)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return "HMSTD_S1_ATKM1";
							case 1:
								return "HMSTD_S1_ATKM2";
							default:
								break;
						}
						break;
					case 1:
					default:
						switch (iParam1)
						{
							case 0:
								return "HMSTD_S1_ATKM3";
							case 1:
								return "HMSTD_S1_ATKM4";
							default:
								break;
						}
						break;
				}
				break;
			case 5:
			case 6:
				switch (iParam1)
				{
					case 0:
						return "HMSTD_S1_AIM1";
					case 1:
						return "HMSTD_S1_AIM2";
					default:
						break;
				}
				break;
			case 1:
				switch (iParam1)
				{
					case 0:
						return "HMSTD_S1_BODY1";
					case 1:
						return "HMSTD_S1_BODY2";
				}
				break;
			case 2:
				switch (iParam1)
				{
					case 0:
						switch (iParam0->f_18)
						{
							case 1:
							case default:
								return "HMSTD_S1_HTM1";
							case 2:
								return "HMSTD_S1_HTF1";
						}
						break;
					case 1:
						return "HMSTD_S1_BODY2";
				}
				break;
			case 3:
				switch (iParam1)
				{
					case 0:
						return "HMSTD_S1_DYN1";
					case 1:
						return "HMSTD_S1_DYN2";
					default:
						break;
				}
				break;
			case 7:
				switch (iParam0->f_1)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return "HMSTD_S1_STEAL1";
							case 1:
								return "HMSTD_S1_STEAL2";
							default:
								break;
						}
						break;
					default:
						switch (iParam1)
						{
							case 0:
								return "HMSTD_S1_STEAL3";
							case 1:
								return "HMSTD_S1_STEAL4";
							default:
								break;
						}
						break;
				}
				break;
		}
	}
	return "HMSTD_S1_ATKM1";
}

char* func_252(int iParam0, int iParam1)
{
	if (func_121(iParam0, 16))
	{
		switch (iParam0->f_1)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						return "HMSTD_S2_AGGR1";
					case 1:
						return "HMSTD_S2_AGGR2";
					default:
						break;
				}
				break;
			default:
				switch (iParam1)
				{
					case 0:
						return "HMSTD_S2_AGGR3";
					case 1:
						return "HMSTD_S2_AGGR4";
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
			case 4:
			case default:
				iVar0 = get_random_int_in_range(0, 2);
				switch (iVar0)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return "HMSTD_S2_ATKM1";
							case 1:
								return "HMSTD_S2_ATKM2";
							default:
								break;
						}
						break;
					case 1:
					default:
						switch (iParam1)
						{
							case 0:
								return "HMSTD_S2_ATKM3";
							case 1:
								return "HMSTD_S2_ATKM4";
							default:
								break;
						}
						break;
				}
				break;
			case 5:
			case 6:
				switch (iParam1)
				{
					case 0:
						return "HMSTD_S2_AIM1";
					case 1:
						return "HMSTD_S2_AIM2";
					default:
						break;
				}
				break;
			case 1:
				switch (iParam1)
				{
					case 0:
						return "HMSTD_S2_BODY1";
					case 1:
						return "HMSTD_S2_BODY2";
				}
				break;
			case 2:
				switch (iParam1)
				{
					case 0:
						switch (iParam0->f_18)
						{
							case 1:
							case default:
								return "HMSTD_S2_HTM1";
							case 2:
								return "HMSTD_S2_HTF1";
						}
						break;
					case 1:
						return "HMSTD_S2_BODY2";
				}
				break;
			case 3:
				switch (iParam1)
				{
					case 0:
						return "HMSTD_S2_DYN1";
					case 1:
						return "HMSTD_S2_DYN2";
					default:
						break;
				}
				break;
			case 7:
				switch (iParam0->f_1)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return "HMSTD_S2_STEAL1";
							case 1:
								return "HMSTD_S2_STEAL2";
							default:
								break;
						}
						break;
					default:
						switch (iParam1)
						{
							case 0:
								return "HMSTD_S2_STEAL3";
							case 1:
								return "HMSTD_S2_STEAL4";
							default:
								break;
						}
						break;
				}
				break;
		}
	}
	return "HMSTD_S2_ATKM1";
}

void func_253(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_467() - fParam1);
	func_468(uParam0, 1);
	func_469(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_254(int iParam0, int iParam1)
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

int func_255(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (!func_403(&(uParam1->f_133)))
	{
		func_74(&(uParam1->f_133));
	}
	else if (func_470(&(uParam1->f_133)) > iParam2)
	{
		func_262(&(uParam1->f_133));
		if (func_100(iParam0, 0))
		{
			func_240(iParam0, bParam3);
			return 1;
		}
	}
	return 0;
}

int func_256(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_471(bParam1, bParam2, bParam3);
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

void func_257(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_132(iParam0, 65536);
	}
	else
	{
		func_185(iParam0, 65536);
	}
}

bool func_258(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = func_276(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_324(iParam0[*uParam3], 0, iParam1, uParam2, 0, 0))
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

bool func_259(var uParam0)
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

void func_260(int iParam0, var uParam1)
{
	if (iParam0->f_16 != 0 || *uParam1 != 0)
	{
		Global_1935630->f_30 = 0;
		Global_1935630->f_31 = 0;
		Global_1935630->f_25 = 0;
		Global_1935630->f_39 = 0;
		iParam0->f_8 = func_4();
		_0xeacebaae0a33fb3f(player_id());
	}
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	iParam0->f_5 = 0;
	iParam0->f_10 = 0;
	func_472(iParam0, 0);
	*uParam1 = 0;
	iParam0->f_16 = 0;
}

void func_261(var uParam0, var uParam1)
{
	*uParam1 = 0;
	uParam0->f_10 = 0;
	uParam0->f_4 = 0;
}

void func_262(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_263(var uParam0)
{
	iVar1 = 0;
	while (iVar1 < iVar1791)
	{
		if (!is_entity_dead(&(iLocal_1794[iVar1])))
		{
			(*uParam0)[iVar0] = &iLocal_1794[iVar1];
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_264(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	func_265(iParam0, 1);
	iVar0 = _get_lassoed_entity(Global_35);
	if (bParam5 || iParam0->f_1 < iParam0->f_3)
	{
		if (iParam0->f_1 >= 2)
		{
			func_265(iParam0, 16);
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
						func_265(iParam0, 2);
						return;
					}
					if (func_473(iParam0, &(uParam1->f_10)))
					{
						func_265(iParam0, 2);
					}
					else
					{
						func_123(iParam0, 1);
					}
					return;
				case 64:
					if (func_473(iParam0, &(uParam1->f_10)))
					{
						func_265(iParam0, 2);
					}
					else
					{
						func_123(iParam0, 1);
					}
					return;
				case 2048:
					iParam0->f_16 = 4;
					break;
				case 8192:
					if (does_entity_exist(func_356(Global_35)))
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
		else if (!func_476(iParam0, iParam3, Global_36, 50f, func_474(iParam0), func_475(iParam0)))
		{
		}
		if (!does_entity_exist(*iParam0) || !is_ped_human(*iParam0))
		{
			return;
		}
		if (iParam0->f_1 < 3)
		{
			iParam0->f_9[iParam0->f_1] = func_145();
		}
		if (!bParam4)
		{
			iParam0->f_1++;
		}
	}
	else
	{
		func_265(iParam0, 2);
	}
}

void func_265(int iParam0, int iParam1)
{
	func_132(&(iParam0->f_17), iParam1);
}

bool func_266(var uParam0)
{
	if (!does_entity_exist(&(Global_1935630->f_34[0])))
	{
		return false;
	}
	if (is_entity_a_mission_entity(&(Global_1935630->f_34[0])) && does_entity_belong_to_this_script(&(Global_1935630->f_34[0]), true))
	{
		return true;
	}
	iVar0 = func_98(&(Global_1935630->f_34[0]), 0);
	if (func_99(iVar0))
	{
		if (uParam0->f_136 == 1)
		{
			func_164(&iVar1, &iVar2, 0);
		}
		else
		{
			func_165(uParam0->f_137, &iVar1, &iVar2, 0, 0);
		}
		if (iVar0 >= iVar1 && iVar0 <= iVar2)
		{
			return true;
		}
	}
	return false;
}

char* func_267()
{
	return func_477(func_320(), "HMSTD_S1_CBT1", "HMSTD_S1_CBT2");
}

char* func_268()
{
	return func_477(func_320(), "HMSTD_S2_CBT1", "HMSTD_S2_CBT2");
}

bool func_269(int iParam0, int iParam1)
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

int func_270(int iParam0)
{
	return func_478(iParam0, 0);
}

void func_271(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_479(Global_1935630, 4194304);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_480(Global_1935630, 4194304);
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

bool func_272()
{
	bVar0 = false;
	if (_0x5407b7288d0478b7(Global_35, 512) > 0)
	{
		iVar2 = create_itemset(true);
		iVar3 = _0x7be607daff382fd2(Global_35, iVar2, 512);
		if (iVar3 > 0)
		{
			iVar4 = 0;
			while (iVar4 < iVar3)
			{
				iVar5 = _get_entity_from_item(get_indexed_item_in_itemset(iVar4, iVar2));
				if (is_entity_a_ped(iVar5))
				{
					iVar6 = get_ped_index_from_entity_index(iVar5);
					if (func_186(iVar6, (*Global_1392194)[Local_1389.f_136]->f_6, 1, 0))
					{
						bVar0 = true;
					}
					if (func_269(iVar6, &iLocal_1768))
					{
						bVar0 = true;
						bVar1 = true;
					}
					else
					{
						iVar4++;
					}
					destroy_itemset(iVar2);
					if (bVar0 && !bVar1)
					{
						func_42(&Local_1389, 4096);
					}
					return bVar0;
				}
			}
		}
	}
}

bool func_273(var uParam0, int iParam1, int iParam2)
{
	if (func_121(iParam1, 1))
	{
		return false;
	}
	if (!func_186(Global_35, (*Global_1392194)[uParam0->f_136]->f_6, 1, 0))
	{
		return false;
	}
	if ((func_481(Global_35, &iVar0, 4) && !is_model_a_ped(iVar0)) || _0xd04241bbf6d03a5e(Global_35) != 0)
	{
		if (func_476(&uVar1, iParam2, Global_36, 12.5f, 1, 120f))
		{
			*iParam1 = uVar1;
			iParam1->f_16 = 7;
			return true;
		}
	}
	return false;
}

bool func_274()
{
	if (!func_50(16384))
	{
		return false;
	}
	if (iLocal_18 != 1)
	{
		return false;
	}
	if (func_27(8))
	{
		return false;
	}
	return true;
}

bool func_275()
{
	if (func_27(262144))
	{
		if (!does_entity_exist(iVar1787))
		{
			return false;
		}
		if (_0x3ec28da1ffac9ddd(iVar1787, Global_35, 1, 1))
		{
			return true;
		}
		if (func_482(iVar1787) && has_entity_been_damaged_by_any_ped(iVar1787))
		{
			return true;
		}
		iVar1 = 0;
		while (iVar1 < 6)
		{
			iVar0 = _get_ped_in_draft_seat(iVar1787, iVar1);
			if (does_entity_exist(iVar0))
			{
				if (is_entity_dead(iVar0) || has_entity_been_damaged_by_entity(iVar0, Global_35, 1, 1))
				{
					return true;
				}
			}
			iVar1++;
		}
	}
	return false;
}

int func_276(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_277(int iParam0, int iParam1, bool bParam2, float fParam3)
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

bool func_278(var uParam0, float fParam1)
{
	if (func_358(uParam0, fParam1))
	{
		func_262(uParam0);
		return true;
	}
	return false;
}

void func_279(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_483(Local_40[iParam0], 0);
	func_484(iParam0, 0);
	if (iParam0 == 0)
	{
		func_53(134217728, bParam2);
	}
	else if (iParam0 == 1)
	{
		func_53(4, bParam2);
	}
	else if (iParam0 == 2)
	{
		func_53(8, bParam2);
	}
	if (bParam1)
	{
		iLocal_334 = -1;
		iLocal_335 = -1;
	}
}

void func_280(int* iParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		func_485(iParam0);
		func_486(iParam1, uParam2);
	}
	func_227(*iParam0, 1, bParam4);
}

void func_281(int iParam0, bool bParam1, bool bParam2)
{
	if (!is_entity_dead(iParam0))
	{
		if (is_entity_attached(iParam0))
		{
			detach_entity(iParam0, bParam1, bParam2);
		}
	}
}

void func_282(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = iParam0 * 1000;
	if ((iVar0 + get_game_timer()) > Global_1327479->f_4)
	{
		func_487(iParam0, iParam1, bParam2);
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

void func_283()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

void func_284(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

bool func_285(int iParam0)
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

void func_286(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_285(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_488(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_489(iVar0);
	*uParam0 = 0;
}

int func_287(int iParam0, bool bParam1)
{
	iVar0 = func_490();
	if (bParam1 && is_entity_dead(iVar0))
	{
		return -1;
	}
	return &Global_1955499;
}

void func_288(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = func_490();
	if (!is_entity_dead(iVar0))
	{
		iVar1 = 0;
		iVar2 = iParam0;
		if (iParam0 == -1)
		{
			iVar2 = func_287(iParam1, bParam2);
			if (iVar2 != -1)
			{
				iVar1 = (*Global_1955500)[iVar2]->f_2;
				if (func_491(iVar2, 512))
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

void func_289(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < (*uParam0 - iParam1))
	{
		func_284((*uParam0)[(iVar0 + iParam1)]);
		iVar0++;
	}
}

void func_290(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < (*iParam0 - iParam2))
		{
			if (func_110(iParam0[(iVar0 + iParam2)], 0, 1))
			{
				_task_smart_flee_style_ped(iParam0[(iVar0 + iParam2)], iParam1, iParam6, iParam5, iParam4, -1, 0);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iParam2;
		while (iVar0 <= iParam3)
		{
			if (func_110(iParam0[iVar0], 0, 1))
			{
				_task_smart_flee_style_ped(iParam0[iVar0], iParam1, iParam6, iParam5, iParam4, -1, 0);
			}
			iVar0++;
		}
	}
}

void func_291(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

float func_292(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_293(char* sParam0)
{
	if (_0xd89504d9d7d5057d(sParam0))
	{
		start_preloaded_conversation(sParam0);
		return true;
	}
	return false;
}

bool func_294(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_492(cParam1, cParam0);
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

int func_295(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
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
		if (func_493())
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
				if (func_247(iParam0, 1, 1) > fParam4)
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
			fVar1 = func_292(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_74(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!is_entity_dead(iParam1))
				{
					task_look_at_entity(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_494(iParam0, iParam1, fVar1, bParam13))
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
				iVar2 = func_496(func_495(iParam0, sParam2, iParam11, iParam1, network_is_game_in_progress(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

void func_296(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_127(iParam0))
	{
		return;
	}
	func_497(iParam0, &(Global_40.f_9096[iParam0]->f_10), iParam1, iParam2, iParam3, iParam4, bParam5);
}

void func_297(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		iParam0->f_1 = 0;
		func_298(iParam0, 1);
		func_178(iParam0, 1);
		func_177(iParam0, 1);
		func_175(iParam0, 1);
		func_498(iParam0, 1);
		func_179(iParam0, 1);
		func_499(iParam0, 1);
	}
	else
	{
		iParam0->f_1 = -1;
		func_298(iParam0, 0);
		func_178(iParam0, 0);
		func_177(iParam0, 0);
		func_175(iParam0, 0);
		func_498(iParam0, 0);
		func_179(iParam0, 0);
		func_499(iParam0, 0);
	}
}

void func_298(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_132(iParam0, 4);
	}
	else
	{
		func_185(iParam0, 4);
	}
}

void func_299(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_185(&(iParam0->f_1), 16384);
	}
	else
	{
		func_132(&(iParam0->f_1), 16384);
	}
}

void func_300(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_185(&(iParam0->f_1), 131072);
	}
	else
	{
		func_132(&(iParam0->f_1), 131072);
	}
}

int func_301(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return -1;
	}
	if (!func_165(iParam1, &iVar0, &iVar1, 0, 0))
	{
		return -1;
	}
	return func_500(iParam0, iVar0, iVar1, bParam2);
}

bool func_302(int iParam0)
{
	if (!func_99(iParam0))
	{
		return false;
	}
	return (*Global_1895087)[iParam0]->f_2 == get_id_of_this_thread();
}

void func_303(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	if (!func_501(iParam0))
	{
		return;
	}
	iVar0 = func_502(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_503(iVar0);
	func_504(iVar0);
	iVar1 = get_id_of_this_thread();
	iVar2 = func_505(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_506(iVar0))
		{
			return;
		}
	}
	func_507(iVar0);
	set_ped_keep_task(iParam0, true);
	if (bParam1 && func_1() == -1)
	{
		if (!_0x88ad6cc10d8d35b2(iParam0))
		{
			set_entity_as_mission_entity(iParam0, true, true);
		}
	}
}

void func_304()
{
	if (func_308(Local_1618[0]) && func_508(Local_1618[0], "PBL_quick_exit"))
	{
		func_509(Local_1618[0], func_58(Local_1389.f_138), "father");
		func_509(Local_1618[0], Local_386.f_690[2]->f_8, "HAMMER");
		func_509(Local_1618[0], func_58(65), "son_A");
		func_509(Local_1618[0], func_58(66), "son_B");
		if (!func_27(512))
		{
			func_510(Local_1618[0], "PBL_quick_exit", 1);
			func_511(Local_1618[0], 1.5f);
			func_512(Local_1618[0], "bBreakInternalLoop");
		}
	}
}

void func_305()
{
	if (does_entity_exist(Local_386.f_690[0]->f_8))
	{
		if (_does_anim_scene_exist(&(Local_1618[0])))
		{
			func_307(Local_1618[0]);
		}
		activate_physics(Local_386.f_690[0]->f_8);
		_0x78b4567e18b54480(Local_386.f_690[0]->f_8);
		_0x8bb99b85444544d9(Local_386.f_690[0]->f_8, func_117(-1506205562));
	}
}

void func_306()
{
	if (func_308(Local_1618[2]))
	{
		iVar0 = func_58(65);
		Local_1389.f_140[0] = iVar0;
		iVar1 = func_513(iVar0, Global_35, 1060437492);
		if (iVar1 == 1)
		{
			iVar1 = func_513(iVar0, Global_35, 1f);
		}
		if (func_508(Local_1618[2], func_514(iLocal_29, iVar1)))
		{
			func_510(Local_1618[2], func_514(iLocal_29, iVar1), 1);
		}
	}
}

void func_307(var uParam0)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return;
	}
	_delete_anim_scene(*uParam0);
}

bool func_308(var uParam0)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return false;
	}
	return _is_anim_scene_started(*uParam0, false);
}

int func_309()
{
	fVar0 = func_247(Local_386.f_690[0]->f_8, 1, 1);
	if (fVar0 <= 15f)
	{
		return 100;
	}
	iVar1 = ceil(((-4.25f * (fVar0 - 15f)) + 100f));
	return iVar1;
}

bool func_310(int iParam0, var uParam1)
{
	vVar0 = { get_entity_coords(*uParam1, true, false) };
	vVar3 = { get_entity_coords(*iParam0, true, false) };
	if ((vVar0.z + 0.2f) < vVar3.z)
	{
		return false;
	}
	if (!is_entity_touching_entity(*iParam0, *uParam1))
	{
		return false;
	}
	return true;
}

bool func_311(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_312(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_313(int iParam0)
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

bool func_314(int iParam0, bool bParam1, bool bParam2)
{
	if (func_316(iParam0))
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
	fVar1 = func_247(iParam0, 1, 1);
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

void func_315(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
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

bool func_316(int iParam0)
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

int func_317(int iParam0)
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

bool func_318(int iParam0, int iParam1, bool bParam2)
{
	if (func_312(iParam1))
	{
		return true;
	}
	if (bParam2 && is_ped_in_combat(*iParam0, 0))
	{
		return false;
	}
	return true;
}

char* func_319()
{
	return "Default_Shocked";
}

bool func_320()
{
	if (is_bit_set(get_random_int_in_range(0, 65536), 0))
	{
		return true;
	}
	return false;
}

void func_321(int iParam0, int iParam1, float fParam2)
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

bool func_322(int iParam0, int iParam1)
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
	if (func_154(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_154(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_154(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_154(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_154(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_154(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_154(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_154(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_323(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	iVar0 = get_blip_from_entity(iParam0);
	func_284(&iVar0);
}

bool func_324(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > iParam2->f_5)
	{
		func_515(iParam2, 1, iVar0);
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
			if (func_516(iParam0, iParam2))
			{
				*uParam3 = 128;
				func_517(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (func_518(iParam0, iParam2))
				{
					*uParam3 = 8;
					func_517(iParam0, iParam2, *uParam3);
					return true;
				}
				else if (func_519(iParam0, iParam1, iParam2))
				{
					*uParam3 = 8;
					func_517(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (func_520(iParam0, iParam2))
				{
					*uParam3 = 64;
					func_517(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_26 && func_256(player_id(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_517(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_521(iParam2, 1065353216))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (func_522(Global_35, iParam0, iParam2))
					{
						*uParam3 = 4;
						func_517(iParam0, iParam2, *uParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (func_523(Global_35, iParam0, iParam2))
					{
						*uParam3 = 256;
						func_517(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_524(Global_35, iParam0, iParam2, 0))
				{
					*uParam3 = 16;
					func_517(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			else if (func_524(Global_35, iParam0, iParam2, 1))
			{
				*uParam3 = 16;
				func_517(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (func_525(iParam0, iParam2))
				{
					*uParam3 = 32;
					func_517(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || iParam2->f_12 < 20f)
			{
				if (func_526(&iParam0, iParam2))
				{
					*uParam3 = 4096;
					func_517(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (func_527(iParam2, 4000))
				{
					if ((func_528(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && func_529(iParam2, iParam0)) && func_530(iParam2, iParam0))
					{
						*uParam3 = 2;
						func_517(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((func_528(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && func_529(iParam2, iParam0)) && func_530(iParam2, iParam0))
				{
					*uParam3 = 2;
					func_517(iParam0, iParam2, *uParam3);
					return true;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (func_531(iParam0, Global_1935630->f_41))
							{
								func_532();
								*uParam3 = 2;
								func_517(iParam0, iParam2, *uParam3);
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
						if (func_531(iParam0, Global_1935630->f_41))
						{
							func_532();
							*uParam3 = 2;
							func_517(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (func_533(iParam2, iParam0) || (iParam2->f_9 > 0 && (func_4() - iParam2->f_9) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_532();
						*uParam3 = 2;
						func_517(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (func_534())
					{
						if (func_531(iParam0, Global_1935630->f_42))
						{
							func_532();
							*uParam3 = 2;
							func_517(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (func_535(iParam2, iParam0))
			{
				*uParam3 = 1024;
				func_517(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (func_536(iParam0, iParam1, iParam2))
				{
					*uParam3 = 2048;
					func_517(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (func_537(iParam0, iParam2))
					{
						*uParam3 = 8192;
						func_517(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (func_538(iParam0, iParam2))
				{
					*uParam3 = 32768;
					func_517(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (func_539(iParam2, 4000))
				{
					if (func_540(&iParam0, iParam2))
					{
						*uParam3 = 512;
						func_517(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (func_541(iParam0, iParam2))
				{
					*uParam3 = 65536;
					iParam2->f_4 = 0;
					func_517(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_336(iParam2, iParam0))
			{
				*uParam3 = 1;
				func_517(iParam0, iParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_325(int iParam0, int iParam1, var uParam2, float fParam3)
{
	iVar0 = get_frame_count();
	if (iVar0 > iParam1->f_5)
	{
		func_515(iParam1, 0, iVar0);
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
				if (func_527(iParam1, 4000))
				{
					if ((func_528(iParam0, Global_1935630->f_41, *iParam1 & 128 != 0, 0, *iParam1 & 256 != 0) && func_529(iParam1, iParam0)) && func_530(iParam1, iParam0))
					{
						func_532();
						*uParam2 = 2;
						func_517(iParam0, iParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!iParam1->f_1 & 2 != 0)
		{
			if (iParam1->f_12 < 4f)
			{
				if (func_527(iParam1, 4000))
				{
					if ((func_528(iParam0, Global_1935630->f_41, *iParam1 & 128 != 0, 1, *iParam1 & 256 != 0) && func_529(iParam1, iParam0)) && func_530(iParam1, iParam0))
					{
						func_532();
						*uParam2 = 2;
						func_517(iParam0, iParam1, *uParam2);
						return true;
					}
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*iParam1 & 131072 == 0)
						{
							if (func_531(iParam0, Global_1935630->f_41))
							{
								func_532();
								*uParam2 = 2;
								func_517(iParam0, iParam1, *uParam2);
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
						if (func_531(iParam0, Global_1935630->f_41))
						{
							func_532();
							*uParam2 = 2;
							func_517(iParam0, iParam1, *uParam2);
							return true;
						}
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*iParam1 & 131072 == 0)
				{
					if (func_534())
					{
						if (func_531(iParam0, Global_1935630->f_42))
						{
							func_532();
							*uParam2 = 2;
							func_517(iParam0, iParam1, *uParam2);
							return true;
						}
					}
				}
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_521(iParam1, 1065353216))
			{
				if (!iParam1->f_1 & 4 != 0)
				{
					if (func_522(Global_35, iParam0, iParam1))
					{
						func_532();
						*uParam2 = 4;
						func_517(iParam0, iParam1, *uParam2);
						return true;
					}
				}
				if (!iParam1->f_1 & 256 != 0)
				{
					if (func_523(Global_35, iParam0, iParam1))
					{
						func_532();
						*uParam2 = 256;
						func_517(iParam0, iParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!iParam1->f_1 & 131072 != 0)
		{
			if (func_542(iParam0, iParam1))
			{
				func_532();
				*uParam2 = 131072;
				func_517(iParam0, iParam1, *uParam2);
				return true;
			}
		}
		if (*iParam1 & 4 != 0)
		{
			if (func_543(iParam0, iParam1))
			{
				func_532();
				*uParam2 = 262144;
				func_517(iParam0, iParam1, *uParam2);
				return true;
			}
		}
	}
	return false;
}

bool func_326(var uParam0, int iParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_34)
	{
		if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
		{
			if (func_292(&(Global_1935630->f_34[iVar0]), *uParam0, 1, 1) < fParam2)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_327(int iParam0)
{
	if (!is_ped_in_combat(*iParam0, Global_35))
	{
		return false;
	}
	if (_0xcb690f680a3ea971(*iParam0, 4))
	{
		return false;
	}
	fVar0 = func_247(*iParam0, 1, 1);
	if (fVar0 > 20f)
	{
		return true;
	}
	if (func_278(vLocal_1578[2], 15f))
	{
		return true;
	}
	if (fVar0 > 4f)
	{
		if (!func_403(vLocal_1578[2]))
		{
			func_74(vLocal_1578[2]);
		}
		else if (func_544(vLocal_1578[2]))
		{
			func_545(vLocal_1578[2]);
		}
	}
	else if (func_403(vLocal_1578[2]) && !func_544(vLocal_1578[2]))
	{
		func_546(vLocal_1578[2]);
	}
	return false;
}

int func_328(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_312(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
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
							if (func_312(iVar4) && iVar4 != iVar0)
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
	if (func_1() == -1 && !func_313(iVar0))
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
				if (func_313(-183018591))
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
		if (iParam0 != Global_35 && func_312(iVar0))
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

bool func_329(int iParam0)
{
	if (!func_50(131072))
	{
		return false;
	}
	*iParam0 = func_58(65);
	if (is_entity_dead(*iParam0))
	{
		return false;
	}
	if (func_254(*iParam0, 518218985))
	{
		return false;
	}
	return true;
}

bool func_330(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, bool bParam5, int iParam6)
{
	if (func_550(iParam0, iParam1, sParam2, iParam3, fParam4, bParam5, iParam6 == 0))
	{
		return true;
	}
	return false;
}

void func_331(int iParam0, int iParam1)
{
	decor_set_int(iParam0, "pedRoam_state", iParam1);
}

void func_332(int iParam0, int iParam1)
{
	decor_set_int(iParam0, "pedRoam_behavior", iParam1);
}

void func_333(int iParam0, int iParam1)
{
	decor_set_int(iParam0, "pedRoam_target", iParam1);
}

bool func_334()
{
	return false;
}

bool func_335(int iParam0, var uParam1)
{
	if (!func_551(iParam0))
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

bool func_336(int iParam0, int iParam1)
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

bool func_337(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_552(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_553(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_146(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_554(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_555(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_556(iParam0);
	if (iVar5 < 1 || iVar5 > func_557(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

void func_338(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_554(*iParam0);
	iVar1 = func_555(*iParam0);
	iVar2 = func_556(*iParam0);
	iVar3 = func_146(*iParam0);
	iVar4 = func_553(*iParam0);
	iVar5 = func_552(*iParam0);
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
	iVar6 = func_557(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_557(iVar1, iVar0);
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
	func_558(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_339(int iParam0, bool bParam1)
{
	return func_559(func_145(), iParam0, bParam1);
}

void func_340(int* iParam0)
{
	if (iParam0->f_19 == 0)
	{
		if (does_entity_exist(func_356(Global_35)))
		{
			iParam0->f_19 = add_shocking_event_for_entity(67779789, Global_35, 999f, 5f, 5f, -1f, -1f, 180f, false, false, -1, -1);
		}
	}
	else if (!does_entity_exist(func_356(Global_35)))
	{
		remove_shocking_event(iParam0->f_19);
	}
}

void func_341(int* iParam0, int iParam1)
{
	iParam0->f_13 = iParam1;
}

void func_342(int* iParam0, int* iParam1, var uParam2, bool bParam3)
{
	if (iParam0->f_14 > 0)
	{
		iVar1 = func_561(iParam0, iParam1, 15f, uParam2, &uVar0, 0, 1, 0, 0, func_560(1, 0, 0), 0, 0, 2, 1, -1082130432, 0);
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
				func_563((*uParam2)[0], func_562(8), "", -163964935, 0, 0, 0, 1, 0);
				func_564((*uParam2)[0], 1, 0);
				func_565((*uParam2)[0], 0);
				func_563((*uParam2)[1], func_562(10), "", 648122183, 0, 0, 0, 1, 0);
				func_564((*uParam2)[1], 1, 0);
				func_565((*uParam2)[1], 0);
				func_563((*uParam2)[2], func_562(12), "", -1616532217, 0, 0, 0, 1, 0);
				func_564((*uParam2)[2], 0, 0);
				func_565((*uParam2)[2], 1);
				func_566(iParam0, 1);
			}
			break;
		case 1:
			if (!func_353(0, 1, Global_35, 1) || !func_353(0, 1, *iParam0, 1))
			{
				func_567(uParam2);
			}
			if (iParam0->f_15 != -1)
			{
				func_483(iParam1, 0);
				func_564((*uParam2)[0], 0, 0);
				func_564((*uParam2)[1], 0, 0);
				if (!is_string_null_or_empty(func_568(iParam0)))
				{
					func_95(Global_35, *iParam0, func_568(iParam0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				func_566(iParam0, 2);
			}
			break;
		case 2:
			if (func_353(0, 1, Global_35, 1) && func_353(0, 1, *iParam0, 1))
			{
				if (!is_string_null_or_empty(func_569(iParam0)))
				{
					func_95(*iParam0, Global_35, func_569(iParam0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				func_566(iParam0, 3);
			}
			break;
		case 3:
			if (func_353(0, 1, Global_35, 1) && func_353(0, 1, *iParam0, 1))
			{
				func_566(iParam0, 4);
			}
			break;
		case 4:
			break;
	}
}

bool func_343(int iParam0)
{
	return func_57(iParam0, 0, 1);
}

bool func_344(int iParam0, int iParam1)
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

char* func_345(int iParam0, int iParam1)
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

void func_346(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || func_110(iParam0, 0, 0))
	{
		decor_set_bool(iParam0, "HAS_VOICE", true);
		set_ambient_voice_name(iParam0, sParam1);
	}
}

bool func_347(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	return is_ped_on_mount(iParam0);
}

float func_348(var uParam0)
{
	if (!func_403(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_544(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_467() - uParam0->f_1);
}

bool func_349(int* iParam0)
{
	return true;
}

float func_350(int iParam0, int iParam1, bool bParam2)
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
	return func_570(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
}

void func_351(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		allow_sonar_blips(true);
		force_sonar_blips_this_frame();
	}
	_trigger_sonar_blip_2(iParam0, iParam1);
}

char* func_352(int* iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		if (iParam0->f_16 == 8 && func_320())
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
	if (func_121(iParam0, 16))
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
	return func_571(cVar0);
}

bool func_353(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && does_entity_exist(iParam2))
	{
		if (!func_572(iParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_573(fParam0))
	{
		return false;
	}
	return true;
}

bool func_354(char* sParam0)
{
	if (_0xd89504d9d7d5057d(sParam0) && _0x1ecc76792f661cf5(sParam0))
	{
		return true;
	}
	return false;
}

bool func_355(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_292(iVar0, iParam0, 1, 1) <= 4f)
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
		if (_is_weapon_sniper(func_574(iVar0, 0)))
		{
			if (func_575(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_356(int iParam0)
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

float func_357(int* iParam0)
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

bool func_358(var uParam0, float fParam1)
{
	if (!func_403(uParam0))
	{
		return false;
	}
	if (func_348(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_359(int* iParam0, int* iParam1, var uParam2)
{
	func_280(iParam0, iParam1, uParam2, 1, 1);
	func_576(uParam2, 0, 1, 1, 1);
	if (decor_exist_on(*iParam0, "bScriptedILO"))
	{
		decor_remove(*iParam0, "bScriptedILO");
	}
	iParam0->f_14 = 0;
	iParam0->f_15 = -1;
}

void func_360()
{
	if (_does_volume_exist(&(iLocal_1759[1])))
	{
		if (_does_volume_exist(&(iLocal_1759[6])))
		{
			if (func_186(Global_35, &(iLocal_1759[1]), 1, 0))
			{
				func_83(&(iLocal_1759[6]));
			}
		}
		else if (!func_186(Global_35, &(iLocal_1759[1]), 1, 0))
		{
			func_28();
		}
	}
}

void func_361(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_563((*Local_125[iParam0])[0], func_562(7), "", -163964935, 0, 0, 0, 1, 0);
	func_563((*Local_125[iParam0])[1], func_562(10), "", 648122183, 0, 0, 0, 1, 0);
	func_563((*Local_125[iParam0])[2], func_562(12), "", -1616532217, 0, 0, 0, 1, 0);
}

void func_362(int iParam0)
{
	if (func_21(128))
	{
		if (iVar1645 < 3)
		{
			if (func_353(0, 1, *iParam0, 1) && func_353(0, 1, Global_35, 1))
			{
				if (iVar332 != -1 || (func_121(&Local_1549, 1) && iVar1546 == *iParam0))
				{
					if (func_354(func_577()))
					{
						func_578(func_577(), 0, 0);
					}
					func_74(vLocal_1578[8]);
					return;
				}
				if (!func_403(vLocal_1578[8]))
				{
					if (fVar1644 < 30f)
					{
						fLocal_1647 = 45f;
					}
					else
					{
						fLocal_1647 = get_random_float_in_range(30f, 45f);
					}
					func_74(vLocal_1578[8]);
				}
				if (func_358(vLocal_1578[8], fVar1644))
				{
					if (func_247(*iParam0, 1, 1) < 12.5f)
					{
						func_94(&(Local_1389.f_35), func_577(), *iParam0, Global_35, 0, 0, 1, 1);
						func_262(vLocal_1578[8]);
						uLocal_1648 = iVar1645 + 1;
					}
				}
			}
		}
	}
}

void func_363(var uParam0)
{
	if (!func_50(2097152))
	{
		return;
	}
	func_579();
	iVar0 = func_560(1, 0, 0);
	iVar1 = 1;
	bVar2 = (iLocal_18 == 3 && !func_10(Local_1389.f_136, 128));
	iVar4 = 0;
	while (iVar4 < 4)
	{
		if (iVar4 == 3)
		{
		}
		else if (func_121(&Local_1549, 1) && iVar1546 == &iLocal_1768[iVar4])
		{
		}
		else
		{
			func_580(iVar4, bVar2);
			if (iVar4 == 1 && func_21(4))
			{
				if (decor_exist_on(&(iLocal_1768[iVar4]), "bScriptedILO"))
				{
					decor_remove(&(iLocal_1768[iVar4]), "bScriptedILO");
				}
			}
			else if (iVar4 == 2 && func_21(8))
			{
				if (decor_exist_on(&(iLocal_1768[iVar4]), "bScriptedILO"))
				{
					decor_remove(&(iLocal_1768[iVar4]), "bScriptedILO");
				}
			}
			else if (iVar4 == 0)
			{
				if (func_21(16))
				{
					if (decor_exist_on(&(iLocal_1768[iVar4]), "bScriptedILO"))
					{
						decor_remove(&(iLocal_1768[iVar4]), "bScriptedILO");
					}
				}
				else
				{
					fVar3 = 8f;
					iVar0 = func_560(1, 0, 0);
					if (iVar4 == 0)
					{
						fVar3 = func_581(iLocal_18 == 4, 8f, 20f);
						if (func_50(33554432))
						{
							iVar0 = 1;
						}
					}
					else if (iVar4 == 1)
					{
						if (func_50(131072))
						{
							fVar3 = 8f;
							iVar0 = func_560(1, 0, 0) | 2048;
						}
					}
					if (!decor_exist_on(&(iLocal_1768[iVar4]), "bScriptedILO"))
					{
						decor_set_bool(&(iLocal_1768[iVar4]), "bScriptedILO", true);
					}
					iVar5 = func_561(iLocal_1768[iVar4], Local_40[iVar4], fVar3, Local_125[iVar4], &iVar1, 0, 1, 0, 0, iVar0, 0, 0, 2, 1, -1082130432, 0);
					if (!func_21(2) && func_582(Local_40[iVar4], 1))
					{
						func_141(2);
					}
					if (iVar331 <= -1)
					{
						if (iVar5 != -1)
						{
							iLocal_334 = iVar5;
							iLocal_335 = iVar4;
						}
					}
				}
				iVar4++;
				if (func_50(67108864))
				{
					return;
				}
				if (func_27(2))
				{
					return;
				}
				if (iVar332 > 0 && iVar331 > -1)
				{
					if (!func_50(1048576))
					{
						if (func_354("HMSTD_SONS_FIRE") || is_any_speech_playing(&(iLocal_1768[iVar332])))
						{
							func_583("HMSTD_SONS_FIRE", 1);
							stop_current_playing_speech(&(iLocal_1768[iVar332]), 0);
						}
						if (func_584(iVar332, bVar2))
						{
							cVar6 = func_477(iVar331 == 0, func_585(iVar332, bVar2), func_586(iVar332, bVar2));
							func_94(&(Local_1389.f_35), cVar6, Global_35, &(iLocal_1768[iVar332]), 0, 0, 1, 1);
							iVar4 = iVar332;
							func_279(iVar332, 1, 0);
							func_141(func_587(iVar4));
							func_49(1048576);
						}
					}
				}
				if (!func_50(134217728))
				{
					if (func_353(-3.5f, 1, 0, 0) && !func_588(1))
					{
						if (iVar331 == 1 && !func_50(16777216))
						{
						}
						func_279(0, 1, 0);
						func_589(0);
						func_43(134217728);
					}
				}
				else if (iVar332 == 0)
				{
					switch (iVar331)
					{
						case 0:
							if (func_50(8192) && !is_string_null_or_empty(uParam0->f_135))
							{
								func_94(&(Local_1389.f_35), uParam0->f_135, Global_35, &(iLocal_1768[0]), 0, 0, 1, 1);
								func_590(uParam0);
							}
							else
							{
								func_94(&(Local_1389.f_35), func_591(), Global_35, &(iLocal_1768[0]), 0, 0, 1, 1);
								func_43(8388608);
								if (iLocal_18 == 2 && !func_592(&iLocal_1794))
								{
									func_279(1, 1, 0);
									func_279(2, 1, 0);
								}
							}
							func_279(0, 1, 1);
							break;
						case 1:
							if (func_50(8192) && !is_string_null_or_empty(uParam0->f_135))
							{
								func_590(uParam0);
							}
							if (func_50(16777216))
							{
								func_49(16777216);
								func_94(&(Local_1389.f_35), "HMSTD_ASK_QUIT", Global_35, &(iLocal_1768[0]), 0, 0, 1, 1);
								func_43(4194304);
								func_25(Local_1389.f_136, 262144);
								func_9(Local_1389.f_136, 256);
								func_279(0, 1, 0);
							}
							else
							{
								if (func_50(8192) && !is_string_null_or_empty(uParam0->f_5))
								{
									func_94(&(Local_1389.f_35), uParam0->f_5, Global_35, &(iLocal_1768[0]), 0, 0, 1, 1);
									func_590(uParam0);
								}
								else
								{
									func_94(&(Local_1389.f_35), func_593(), Global_35, &(iLocal_1768[0]), 0, 0, 1, 1);
								}
								func_279(0, 1, 1);
							}
							break;
					}
				}
			}
		}
	}
}

void func_364()
{
	if (func_594() && (get_frame_count() % 30) == 0)
	{
		if (func_6(Local_1389.f_136))
		{
			func_5(4);
		}
	}
}

char* func_365()
{
	return "HOME_BLIP_FM";
}

void func_366(int iParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, char* sParam6)
{
	bParam3 = bParam3;
	if (*bParam4)
	{
		if (func_186(Global_35, (*Global_1392194)[uParam2->f_136]->f_6, 1, 0))
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
				func_315(iParam0, iParam1, -89429847, iVar0, 0, sParam6);
			}
		}
	}
}

void func_367(int iParam0, int iParam1)
{
	if ((iVar1636 % 5) != 0)
	{
		return;
	}
	if (func_27(8388608))
	{
		return;
	}
	if (func_353(0, 1, 0, 0))
	{
		if (!func_403(vLocal_1578[5]))
		{
			func_74(vLocal_1578[5]);
		}
		if (func_358(vLocal_1578[5], 14f))
		{
			fVar0 = func_247(*iParam0, 1, 1);
			fVar1 = func_247(*iParam1, 1, 1);
			if (func_595(*iParam0))
			{
				fVar0 = 999f;
			}
			if (func_595(*iParam1))
			{
				fVar1 = 999f;
			}
			if (fVar0 < 8f && fVar1 < 8f)
			{
				if (func_27(4194304))
				{
					fVar0 = 8f;
				}
				else
				{
					fVar1 = 8f;
				}
			}
			if (fVar0 < 8f)
			{
				func_94(&(Local_1389.f_35), func_596(), *iParam0, *iParam1, 0, 0, 0, 1);
				func_262(vLocal_1578[5]);
				func_5(4194304);
			}
			else if (fVar1 < 8f)
			{
				func_94(&(Local_1389.f_35), func_597(), *iParam1, *iParam0, 0, 0, 0, 1);
				func_262(vLocal_1578[5]);
				func_139(4194304);
			}
		}
	}
}

int func_368()
{
	func_598();
	switch (iLocal_20)
	{
		case 0:
			Local_2071.f_12 = 20f;
			Local_2071.f_13 = 15f;
			func_599(1986792065, 0, 1);
			iLocal_20 = 2;
			break;
		case 2:
			if (func_600(Local_1389.f_136, &Local_386, &Local_1389, 50f))
			{
				iLocal_20 = 10;
			}
			break;
		case 10:
			break;
	}
	return 0;
}

int func_369(int iParam0, int iParam1, int iParam2)
{
	if (iLocal_20 > 5)
	{
		func_601(7.5f, 15f, 15f, func_21(64));
	}
	func_602(iParam1, 65);
	func_194(0);
	switch (iLocal_20)
	{
		case 0:
			Local_2071.f_12 = 15f;
			Local_2071.f_13 = 8f;
			func_603(Local_1618[0], *iParam0, "father", 1);
			StringCopy(&(Local_1618[0]->f_4), "bBreakInternalLoop", 24);
			_request_scenario_type(func_604(), 1, func_229(Local_1389.f_138), func_605());
			if (!func_21(64))
			{
				func_606(Local_1618[0], Local_386.f_690[1]->f_8, "CIGARETTE");
				_request_scenario_type(func_607(), 1, func_229(Local_1389.f_138), func_608());
			}
			else
			{
				func_611(Local_1618[0], func_609(), func_610());
			}
			if (func_27(2048))
			{
				_request_scenario_type(func_612(), 262145, func_229(66), -491224884);
				_request_scenario_type(func_613(), 262145, func_229(66), 1727477609);
			}
			else
			{
				func_240(65, 1);
				func_240(66, 1);
			}
			func_279(0, 1, 1);
			func_614(0);
			func_589(1);
			func_589(2);
			func_615(1, 0);
			func_616(1);
			func_617(Local_1618[0]);
			iLocal_20 = 2;
			break;
		case 2:
			if (func_618(*iParam0, Global_35, 0, Local_2071.f_13, 0) || (iVar329 == 0 && iVar330 == 0))
			{
				if (iVar329 == 0 && iVar330 == 0)
				{
					func_95(Global_35, *iParam0, "GREET_MALE", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				func_279(0, 1, 1);
				func_615(1, 0);
				if (func_21(64))
				{
					func_619(iParam0, 0, 0);
					if (!func_21(2))
					{
						func_620(*iParam0, &uLocal_1540, 0f, 0f, 0f, 0, 60f, 20f, -1, 4000, 4000, 3.5f, 0, 1, 1084227584);
					}
					func_621(Local_1618[0]);
					if (func_27(2048))
					{
						func_622(*iParam2, 1448892129, 1f, 0, "MAIN_ACTION_SON", 1, 106);
						_0x2208438012482a1a(*iParam2, false, false);
					}
					func_94(&(Local_1389.f_35), Local_2071.f_1, *iParam0, Global_35, 0, 0, 1, 1);
					iLocal_20 = 3;
				}
				else
				{
					func_619(iParam0, 0, 0);
					if (!func_21(2))
					{
						func_620(*iParam0, &uLocal_1540, 0f, 0f, 0f, 0, 60f, 20f, -1, 4000, 4000, 3.5f, 0, 1, 1084227584);
					}
					vVar1 = { func_623(Global_35, 1065353216) };
					iVar0 = func_624(*iParam0, vVar1, 1060437492);
					switch (iVar0)
					{
						case 0:
							sVar4 = "PBL_action_F";
							break;
						case 2:
							sVar4 = "PBL_action_R";
							break;
						case 3:
							sVar4 = "PBL_action_L";
							break;
						case 1:
							iVar0 = func_624(*iParam0, vVar1, 1f);
							switch (iVar0)
							{
								case 3:
									sVar4 = "PBL_action_back_L";
									break;
								case 2:
									sVar4 = "PBL_action_back_R";
									break;
							}
							break;
					}
					func_625(Local_1618[0], sVar4);
					iLocal_30 = func_626(*iParam0, _create_volume_cylinder(get_entity_coords(*iParam0, true, false), 0f, 0f, get_entity_heading(*iParam0), 5.5f, 5.5f, 5.5f), 148);
					iLocal_20 = 8;
				}
			}
			break;
		case 8:
			if (!func_100(Local_1389.f_138, 0))
			{
				func_57(Local_1389.f_138, 1, 1);
			}
			func_619(iParam0, 0, 0);
			if (func_247(*iParam0, 0, 1) < 5.5f)
			{
				func_619(&Global_35, 0, *iParam0);
			}
			if (func_627(Local_1618[0]))
			{
				func_628(Local_1618[0], 1, 1);
				if (func_27(2048))
				{
					func_622(*iParam2, 1448892129, 1f, 0, "MAIN_ACTION_SON", 1, 106);
					_0x2208438012482a1a(*iParam2, false, false);
				}
				func_94(&(Local_1389.f_35), Local_2071.f_1, *iParam0, Global_35, 0, 0, 1, 1);
				func_200(Local_1389.f_136, 4096);
				if (!func_10(Local_1389.f_136, 16777216))
				{
					func_200(Local_1389.f_136, 16777216);
				}
				iLocal_20 = 3;
			}
			break;
		case 3:
			func_629(1048576000, 1028443341, 0, 106);
			if (func_630(Local_1618[0]))
			{
				func_631(Local_1618[0]);
			}
			if (!func_100(Local_1389.f_138, 0))
			{
				func_57(Local_1389.f_138, 1, 1);
			}
			func_619(iParam0, 0, 0);
			if (func_247(*iParam0, 0, 1) < 5.5f)
			{
				func_619(&Global_35, 0, *iParam0);
			}
			if (!func_21(2))
			{
				func_620(*iParam0, &uLocal_1540, 0f, 0f, 0f, 0, 60f, 20f, -1, 4000, 4000, 3.5f, 0, 1, 1084227584);
			}
			if (!func_27(16777216))
			{
				func_5(16777216);
				func_632(Local_1389.f_136, 131072);
			}
			if (func_247(*iParam0, 1, 1) < 3.5f || func_633(Local_1618[0]) > 0.5f)
			{
				func_634();
				func_262(vLocal_1578[1]);
				func_279(0, 1, 1);
				iLocal_20 = 4;
			}
			break;
		case 4:
			func_629(1048576000, 1028443341, 0, 106);
			func_619(iParam0, 0, 0);
			if (func_353(-3.5f, 1, 0, 0) && !_0x1ecc76792f661cf5(Local_2071.f_1))
			{
				if (!func_403(vLocal_1578[1]))
				{
					func_74(vLocal_1578[1]);
					func_615(1, 0);
					func_279(0, 1, 0);
					func_589(0);
				}
				if (func_278(vLocal_1578[1], 7.5f))
				{
					func_635(&(Local_1389.f_35), Local_2071.f_3, 0);
					func_279(0, 1, 0);
					iLocal_20 = 5;
				}
				if (iVar330 == 0)
				{
					switch (iVar329)
					{
						case 0:
							func_94(&(Local_1389.f_35), Local_2071.f_135, Global_35, *iParam0, 0, 0, 1, 1);
							func_635(&(Local_1389.f_35), Local_2071.f_3, 0);
							func_279(0, 1, 1);
							func_43(512);
							func_262(vLocal_1578[1]);
							iLocal_20 = 5;
							break;
						case 1:
							func_94(&(Local_1389.f_35), Local_2071.f_5, Global_35, *iParam0, 0, 0, 1, 1);
							func_635(&(Local_1389.f_35), Local_2071.f_3, 0);
							func_279(0, 1, 1);
							func_43(512);
							func_262(vLocal_1578[1]);
							iLocal_20 = 5;
							break;
					}
				}
			}
			break;
		case 5:
			if ((!func_50(1024) && !_0x1ecc76792f661cf5(Local_2071.f_135)) && !_0x1ecc76792f661cf5(Local_2071.f_5))
			{
				if (func_21(64) && !func_50(512))
				{
					func_307(Local_1618[0]);
				}
				else
				{
					func_621(Local_1618[0]);
				}
				if (func_50(512))
				{
					func_94(&(Local_1389.f_35), Local_2071.f_3, *iParam0, Global_35, 0, 0, 1, 1);
				}
				func_43(1024);
				func_279(0, 1, 0);
			}
			bVar5 = true;
			if (func_247(*iParam0, 0, 1) < 5.5f)
			{
				func_619(&Global_35, 0, *iParam0);
			}
			if (!func_27(33554432))
			{
				if (func_353(0, 1, 0, 0))
				{
					func_89(&iLocal_30, 1);
					func_5(33554432);
				}
			}
			if (!is_entity_dead(*iParam0) && !is_ped_using_any_scenario(*iParam0))
			{
				bVar5 = false;
				if ((!func_50(512) || func_50(1024)) && func_330(*iParam0, &(Local_1618[0]), "father", -1132719179, 0, 1, 0))
				{
					func_284(uLocal_1790[0]);
					func_616(0);
					func_615(0, 0);
					func_279(0, 1, 0);
					vVar7 = { get_entity_coords(*iParam0, true, false) };
					func_636(&vVar7, 0f);
					if (func_21(64))
					{
						if (func_50(512))
						{
							uVar6 = create_scenario_point(func_604(), vVar7, get_entity_heading(*iParam0), 0, 0, 1);
							_task_use_scenario_point(*iParam0, uVar6, func_637(), -1, false, true, 0, false, -1f, false);
						}
					}
					else
					{
						_task_start_scenario_in_place(*iParam0, func_607(), -1, false, func_608(), -1f, false);
						func_638(&(Local_386.f_690[1]->f_8));
					}
				}
			}
			if (bVar5)
			{
				func_279(1, 1, 0);
				func_279(2, 1, 0);
				func_589(1);
				func_589(2);
				func_139(8388608);
				func_253(vLocal_1578[5], (14f / 2f));
				func_84(&Local_1389);
				func_284(uLocal_1790[0]);
				func_74(vLocal_1578[1]);
				func_141(128);
				func_89(&iLocal_30, 1);
				iLocal_20 = 10;
			}
			break;
		case 7:
			iLocal_20 = 10;
			break;
		case 10:
			break;
	}
	return 0;
}

bool func_370(int iParam0, bool bParam1, bool bParam2)
{
	func_602(iLocal_1768[1], 65);
	func_194(0);
	switch (iLocal_20)
	{
		case 0:
			if (!func_100(Local_1389.f_138, 0))
			{
				func_57(Local_1389.f_138, 1, 1);
			}
			if (!func_10(Local_1389.f_136, 16777216))
			{
				func_200(Local_1389.f_136, 16777216);
			}
			func_589(0);
			func_279(0, 1, 1);
			func_589(1);
			func_589(2);
			stop_ped_speaking(*iParam0, true);
			stop_ped_speaking(func_58(65), true);
			stop_ped_speaking(func_58(66), true);
			iLocal_20 = 2;
			break;
		case 2:
			func_200(Local_1389.f_136, 4096);
			iLocal_20 = 3;
			break;
		case 3:
			if (!func_100(Local_1389.f_138, 0))
			{
				func_57(Local_1389.f_138, 1, 1);
			}
			if (func_247(*iParam0, 1, 1) < 30f)
			{
				func_192(Local_1389.f_136, 8388608);
				func_25(Local_1389.f_136, 16777216);
				func_619(iParam0, 0, 0);
				Local_336.f_40 = *iParam0;
				Local_336.f_43 = 4f;
				Local_336.f_41 = 4f;
				Local_336.f_39 = (*Global_1392194)[Local_1389.f_136]->f_6;
				func_5(65536);
				_0x62fdad5e01d2dd47(*iParam0, Global_36, 1, 0);
				clear_ped_tasks(*iParam0, 1, 0);
				open_sequence_task(&uLocal_1818);
				task_go_to_entity(0, Global_35, -1, 5f, 1.5f, 7f, 0);
				task_turn_ped_to_face_entity(0, Global_35, 5000, -1082130432, -1082130432, -1082130432);
				close_sequence_task(iVar1813);
				_task_perform_sequence_2(*iParam0, iVar1813, 2f, 7.5f);
				clear_sequence_task(&uLocal_1818);
				func_94(&(Local_1389.f_35), Local_2071.f_1, *iParam0, Global_35, 0, 0, 1, 1);
				func_615(1, 0);
				func_279(0, 1, 0);
				func_639(0);
				func_74(vLocal_1578[1]);
				iLocal_20 = 4;
			}
			break;
		case 4:
			switch (iVar329)
			{
				case 0:
					func_94(&(Local_1389.f_35), Local_2071.f_135, *iParam0, Global_35, 0, 0, 1, 1);
					func_361(0);
					func_279(0, 1, 1);
					func_640();
					iLocal_20 = 5;
					return false;
				case 1:
					func_94(&(Local_1389.f_35), Local_2071.f_5, *iParam0, Global_35, 0, 0, 1, 1);
					func_361(0);
					func_279(0, 1, 1);
					func_640();
					iLocal_20 = 5;
					return false;
			}
			func_641(iParam0);
			break;
		case 5:
			func_641(iParam0);
			func_619(iParam0, 0, 0);
			if (func_353(-3.5f, 1, 0, 0))
			{
				if (bParam2)
				{
					func_240(Local_1389.f_138, 1);
				}
				func_615(0, 0);
				func_279(0, 1, 0);
				func_640();
				iLocal_20 = 10;
			}
			break;
		case 10:
			func_641(iParam0);
			if (bParam1)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_371()
{
	if (!func_20(&Local_1389, 2) && func_642(1) > 0)
	{
		switch (iLocal_25)
		{
			case 0:
				iVar0 = func_58(Local_1389.f_138);
				func_59(&(Local_1389.f_35), iVar0, "HOME_FOREMAN", 0);
				Local_2071.f_33 = { Local_1389.f_35 };
				Local_1857.f_81 = { Local_1389.f_35 };
				if (func_350(Global_35, iVar0, 1) < 100f)
				{
					func_643(1, func_642(1), &(iLocal_1759[0]), get_entity_coords(iVar0, true, false), 1069547520, 1075838976, 1056964608, 0, 1106247680, 1);
					func_644(1);
					iLocal_25 = 2;
				}
				break;
		}
	}
}

int func_372(int iParam0, int iParam1, int iParam2)
{
	func_645(func_27(1073741824), 0);
	if (iLocal_20 > 9)
	{
		func_601(30f, 60f, 150f, 0);
	}
	if (func_27(512))
	{
		func_360();
	}
	switch (iLocal_20)
	{
		case 0:
			Local_2071.f_12 = 15f;
			Local_2071.f_13 = 10f;
			func_606(Local_1618[0], Local_386.f_690[0]->f_8, "Frame");
			func_603(Local_1618[0], *iParam0, "father", 1);
			_request_scenario_type(func_607(), 1, func_229(Local_1389.f_138), func_608());
			stop_ped_speaking(*iParam0, true);
			func_606(Local_1618[0], Local_386.f_690[2]->f_8, "HAMMER");
			func_603(Local_1618[0], *iParam2, "son_B", 1);
			stop_ped_speaking(*iParam2, true);
			func_603(Local_1618[0], *iParam1, "son_A", 1);
			func_617(Local_1618[0]);
			stop_ped_speaking(*iParam1, true);
			func_616(1);
			iVar0 = 0;
			while (iVar0 < 4)
			{
				switch (iVar0)
				{
					case 0:
						sVar1 = "PBL_action_enter_F";
						break;
					case 2:
						sVar1 = "PBL_action_enter_R";
						break;
					case 1:
						sVar1 = "PBL_action_enter_B";
						break;
					case 3:
						sVar1 = "PBL_action_enter_L";
						break;
				}
				func_646(Local_1618[0], sVar1);
				iVar0++;
			}
			func_646(Local_1618[0], "PBL_quick_exit");
			func_635(&(Local_1389.f_35), "HMSTD_IG1_ENTER", 0);
			func_635(&(Local_1389.f_35), "HMSTD_ENT_RAIN", 0);
			iLocal_1759[4] = _create_volume_cylinder_with_custom_name(-439.3327f, 501.9627f, 98.96794f, 0f, 0f, 2.018299f, 4.107876f, 7.487784f, 2.224686f, "Castor's Ridge - volHorse");
			func_589(1);
			func_279(1, 1, 0);
			func_589(2);
			func_279(2, 1, 0);
			func_279(0, 1, 1);
			func_614(0);
			func_615(1, 1);
			func_43(16384);
			iLocal_20 = 3;
			break;
		case 1:
			if (func_600(Local_1389.f_136, &Local_386, &Local_1389, 50f))
			{
				func_5(128);
				iLocal_20 = 2;
			}
			break;
		case 2:
			if (!func_10(Local_1389.f_136, 4))
			{
				func_200(Local_1389.f_136, 4);
			}
			if (!is_entity_dead(*iParam0) && func_618(*iParam0, Global_35, 0, 20f, 0))
			{
				iLocal_20 = 3;
			}
			break;
		case 3:
			if (!func_100(Local_1389.f_138, 0))
			{
				func_57(Local_1389.f_138, 1, 1);
			}
			if (!func_10(Local_1389.f_136, 4))
			{
				func_200(Local_1389.f_136, 4);
			}
			if (!func_647(iParam0))
			{
			}
			else
			{
				if ((func_648(&iLocal_1768, &uLocal_34, &uLocal_39, 1073741824, 10f, 0, 0, 7.5f) || func_649(&(iLocal_1768[0]), 20f, vLocal_1578[7], 7f)) || (iVar329 == 0 && iVar330 == 0))
				{
					func_629(1048576000, 1028443341, 0, 106);
					vVar2 = { func_623(Global_35, 1f) };
					if (is_string_null_or_empty(&(Local_1618[0]->f_1)))
					{
						iVar0 = func_624(Local_386.f_690[3]->f_8, vVar2, 0.692f);
						switch (iVar0)
						{
							case 0:
								sVar1 = "PBL_action_enter_F";
								break;
							case 2:
								sVar1 = "PBL_action_enter_R";
								break;
							case 1:
								sVar1 = "PBL_action_enter_B";
								break;
							case 3:
								sVar1 = "PBL_action_enter_L";
								break;
						}
						func_625(Local_1618[0], sVar1);
					}
					if (func_627(Local_1618[0]))
					{
						if (iVar329 == 0 && iVar330 == 0)
						{
							func_95(Global_35, *iParam0, "GREET_MALE", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						func_615(1, 0);
						func_279(0, 1, 1);
						if (!func_10(Local_1389.f_136, 128))
						{
							func_84(&Local_1389);
						}
						func_25(Local_1389.f_136, 524288);
						func_189(iParam0);
						if (!func_21(2))
						{
							func_620(*iParam0, &uLocal_1540, 0f, 0f, 0f, 0, 60f, 10f, -1, 4000, 4000, 1075838976, 0, 1, 1084227584);
						}
						func_619(iParam0, 0, 0);
						func_7(1073741824, func_186(_get_last_mount(Global_35), &(iLocal_1759[4]), 1, 0));
						func_200(Local_1389.f_136, 8);
						func_628(Local_1618[0], 1, 1);
						func_625(Local_1618[0], "PBL_quick_exit");
						if (func_20(&Local_1389, 256))
						{
							func_94(&(Local_1389.f_35), "HMSTD_ENT_RAIN", *iParam0, Global_35, 0, 0, 1, 1);
						}
						else
						{
							func_94(&(Local_1389.f_35), "HMSTD_IG1_ENTER", *iParam0, Global_35, 0, 0, 1, 1);
						}
						func_635(&(Local_1389.f_35), "HMSTD_IG1DAD", 0);
						func_635(&(Local_1389.f_35), "HMSTD_IG1DADb", 0);
						func_635(&(Local_1389.f_35), "HMSTD_IG1DAD2", 0);
						iLocal_20 = 7;
					}
				}
				Jump @4016; //curOff = 1309
				func_103();
				func_650();
				if (!func_21(2))
				{
					func_620(*iParam0, &uLocal_1540, 0f, 0f, 0f, 0, 60f, 10f, -1, 4000, 4000, 1075838976, 0, 1, 1084227584);
				}
				func_619(iParam0, 0, 0);
				func_7(1073741824, func_186(_get_last_mount(Global_35), &(iLocal_1759[4]), 1, 0));
				func_629(1048576000, 1028443341, 0, 106);
				if (!is_entity_dead(Global_35) && (((func_651(iParam0, iParam1, iParam2) || has_anim_event_fired(*iParam0, 1647800955)) && !func_354("HMSTD_IG1_ENTER")) && !func_354("HMSTD_ENT_RAIN")))
				{
					if (func_50(4096))
					{
						func_509(Local_1618[0], *iParam0, "father");
						func_509(Local_1618[0], *iParam1, "son_A");
						func_509(Local_1618[0], *iParam2, "son_B");
						func_511(Local_1618[0], 1.5f);
						_task_smart_flee_style_coord(*iParam0, func_423(), 2, 0, 5f, -1, 0);
						_task_smart_flee_style_coord(*iParam1, func_423(), 2, 0, 5f, -1, 0);
						_task_smart_flee_style_coord(*iParam2, func_423(), 2, 0, 5f, -1, 0);
						iLocal_20 = 6;
					}
					else
					{
						func_94(&(Local_1389.f_35), "HMSTD_IG1DAD", *iParam0, Global_35, 0, 0, 1, 1);
						func_86();
						iLocal_30 = func_626(*iParam0, _create_volume_cylinder(get_entity_coords(*iParam0, true, false), 0f, 0f, get_entity_heading(*iParam0), 5.5f, 5.5f, 5.5f), 148);
						iLocal_20 = 5;
					}
					iVar5 = _get_last_mount(Global_35);
					if (!is_entity_dead(iVar5) && get_ped_config_flag(iVar5, 136, true))
					{
						set_ped_config_flag(iVar5, 136, false);
					}
					func_284(uLocal_1790[0]);
				}
				Jump @4016; //curOff = 1759
				func_629(1048576000, 1028443341, 0, 106);
				func_103();
				func_650();
				if (func_652(iParam0, iParam1, iParam2))
				{
					func_509(Local_1618[0], *iParam0, "father");
					func_509(Local_1618[0], *iParam1, "son_A");
					func_509(Local_1618[0], *iParam2, "son_B");
					func_511(Local_1618[0], 1.5f);
					_task_smart_flee_style_coord(*iParam0, func_423(), 2, 0, 5f, -1, 0);
					_task_smart_flee_style_coord(*iParam1, func_423(), 2, 0, 5f, -1, 0);
					_task_smart_flee_style_coord(*iParam2, func_423(), 2, 0, 5f, -1, 0);
					iLocal_20 = 6;
				}
				func_7(1073741824, func_186(_get_last_mount(Global_35), &(iLocal_1759[4]), 1, 0));
				if (does_entity_exist(*iParam0) && has_anim_event_fired(*iParam0, 1608236143))
				{
					func_615(1, 0);
					func_279(0, 1, 0);
					func_653(0);
				}
				if (iVar330 == 0 && iVar329 == 0)
				{
					func_43(65536);
					func_615(0, 0);
					func_279(0, 1, 0);
				}
				if ((!func_27(268435456) && func_354("HMSTD_IG1DAD")) && get_current_scripted_conversation_line("HMSTD_IG1DAD") >= 4)
				{
					if (!func_50(4096))
					{
						if (func_50(65536))
						{
							func_583("HMSTD_IG1DAD", 0);
							func_94(&(Local_1389.f_35), "HMSTD_IG1DADb", *iParam0, Global_35, 0, 0, 1, 1);
						}
						else
						{
							func_583("HMSTD_IG1DAD", 0);
						}
					}
					func_615(0, 0);
					func_279(0, 1, 1);
					func_5(268435456);
				}
				if (func_27(268435456))
				{
					if (does_entity_exist(*iParam0) && has_anim_event_fired(*iParam0, 1921072203))
					{
						func_94(&(Local_1389.f_35), "HMSTD_IG1DAD2", *iParam0, Global_35, 0, 0, 1, 1);
					}
				}
				if ((func_27(1024) || func_50(4096)) && !func_654(Local_1618[0], "PBL_quick_exit"))
				{
					if (func_627(Local_1618[0]) && func_651(iParam0, iParam1, iParam2))
					{
						func_628(Local_1618[0], 1, 1);
						func_583("HMSTD_IG1DAD", 0);
						func_583("HMSTD_IG1_ENTER", 0);
						func_583("HMSTD_ENT_RAIN", 0);
						func_583("HMSTD_IG1DADb", 0);
					}
				}
				if (func_27(512))
				{
					_0x19c7567d2f2287d6(&(iLocal_1759[1]), 7);
					_0xb56d41a694e42e86(&(iLocal_1759[3]), 524288, 0, 0, -1, -1, 2);
					_0x4c39c95ae5db1329(&(iLocal_1759[3]), 0, 15);
					_0x19c7567d2f2287d6(&(iLocal_1759[3]), 7);
					_0xb56d41a694e42e86(&(iLocal_1759[1]), 524288, 0, 0, -1, -1, 0);
					_0x4c39c95ae5db1329(&(iLocal_1759[1]), 0, 15);
					iLocal_20 = 9;
				}
				Jump @4016; //curOff = 2446
				func_629(1048576000, 1028443341, 0, 106);
				func_103();
				if (!func_654(Local_1618[0], "PBL_quick_exit"))
				{
					if (func_627(Local_1618[0]))
					{
						func_628(Local_1618[0], 1, 1);
					}
				}
				func_81();
				bVar6 = true;
				if (func_186(*iParam0, &(iLocal_1759[1]), 1, 0))
				{
					bVar6 = false;
				}
				if (func_186(*iParam1, &(iLocal_1759[1]), 1, 0))
				{
					bVar6 = false;
				}
				if (func_186(*iParam2, &(iLocal_1759[1]), 1, 0))
				{
					bVar6 = false;
				}
				if (func_21(16384))
				{
					bVar6 = true;
				}
				if (bVar6)
				{
					_0xaab050da48b57978(*iParam0, "Default_Nervous", Global_35, -1, 4);
					_0xaab050da48b57978(*iParam1, "Default_Panic", Global_35, -1, 4);
					_0xaab050da48b57978(*iParam2, "Default_Scared", Global_35, -1, 4);
					func_94(&(Local_1389.f_35), "HMSTD_BUMP", *iParam0, Global_35, 0, 0, 1, 1);
					_0x19c7567d2f2287d6(&(iLocal_1759[1]), 7);
					_0x19c7567d2f2287d6(&(iLocal_1759[3]), 7);
					iLocal_20 = 9;
				}
				Jump @4016; //curOff = 2702
				func_629(1048576000, 1028443341, 0, 106);
				func_103();
				if (func_27(268435456))
				{
					if (does_entity_exist(*iParam0) && has_anim_event_fired(*iParam0, 1921072203))
					{
						func_279(0, 1, 1);
						func_583("HMSTD_IG1DADb", 0);
					}
				}
				if (!func_27(512))
				{
					func_7(1073741824, func_186(_get_last_mount(Global_35), &(iLocal_1759[4]), 1, 0));
					if (func_652(iParam0, iParam1, iParam2))
					{
						func_509(Local_1618[0], *iParam0, "father");
						func_509(Local_1618[0], *iParam1, "son_A");
						func_509(Local_1618[0], *iParam2, "son_B");
						func_511(Local_1618[0], 1.5f);
						_task_smart_flee_style_coord(*iParam0, func_423(), 2, 0, 5f, -1, 0);
						_task_smart_flee_style_coord(*iParam1, func_423(), 2, 0, 5f, -1, 0);
						_task_smart_flee_style_coord(*iParam2, func_423(), 2, 0, 5f, -1, 0);
						iLocal_20 = 6;
					}
				}
				if (!func_27(33554432))
				{
					if (func_27(512))
					{
						func_89(&iLocal_30, 1);
						func_5(33554432);
					}
				}
				if (!func_50(1073741824) && func_330(*iParam1, &(Local_1618[0]), "son_A", -1795669989, 0, 1, 0))
				{
					func_57(65, 1, 1);
					func_49(16384);
					func_189(iParam1);
					func_509(Local_1618[0], *iParam1, "son_A");
					func_43(1073741824);
					func_279(1, 1, 0);
					func_589(1);
					open_sequence_task(&uLocal_1818);
					task_follow_nav_mesh_to_coord(0, -426.0537f, 496.4437f, 97.11671f, 1f, -1, 0.25f, 1, 40000f);
					if (!func_20(&Local_1389, 256))
					{
						_task_use_nearest_scenario_to_coord(0, -424.1754f, 496.6488f, 97.57932f, 5.5f, -1, true, false, false, false);
					}
					else
					{
						task_follow_nav_mesh_to_coord(0, -422.3258f, 494.8378f, 97.33466f, 1f, -1, 0.25f, 0, 40000f);
					}
					close_sequence_task(iVar1813);
					task_perform_sequence(*iParam1, iVar1813);
					clear_sequence_task(&uLocal_1818);
					func_139(1073741824);
					func_101(1);
				}
				if (!func_50(-2147483648) && func_330(*iParam2, &(Local_1618[0]), "son_B", -1795669989, 0, 1, 0))
				{
					func_57(66, 1, 1);
					func_49(16384);
					func_189(iParam2);
					func_509(Local_1618[0], *iParam2, "son_B");
					func_43(-2147483648);
					func_279(2, 1, 0);
					func_589(2);
					open_sequence_task(&uLocal_1818);
					task_follow_nav_mesh_to_coord(0, -427.5399f, 499.9651f, 97.11329f, 1f, -1, 0.25f, 1, 40000f);
					if (!func_20(&Local_1389, 256))
					{
						_task_use_nearest_scenario_to_coord(0, -426.9276f, 500.1004f, 97.11906f, 5.5f, -1, true, false, false, false);
					}
					else
					{
						task_follow_nav_mesh_to_coord(0, -422.4966f, 493.1444f, 97.34264f, 1f, -1, 0.25f, 0, 40000f);
					}
					close_sequence_task(iVar1813);
					task_perform_sequence(*iParam2, iVar1813);
					clear_sequence_task(&uLocal_1818);
					_0x2208438012482a1a(*iParam2, false, false);
				}
				if (!func_50(536870912) && func_330(*iParam0, &(Local_1618[0]), "father", -1795669989, 0, 1, 0))
				{
					func_57(64, 1, 1);
					func_49(16384);
					func_616(0);
					func_189(iParam0);
					func_615(0, 0);
					func_279(0, 1, 0);
					func_589(0);
					open_sequence_task(&uLocal_1818);
					task_follow_nav_mesh_to_coord(0, -442.8645f, 506.2977f, 96.99207f, 1f, -1, 0.25f, 1, 40000f);
					if (!func_20(&Local_1389, 256))
					{
						uVar7 = create_scenario_point(func_607(), -443.6081f, 506.3698f, 97.01981f, -6.53f, 0, 0, 0);
						_task_use_scenario_point(0, uVar7, 0, 0, true, false, 0, false, -1f, false);
					}
					else
					{
						task_follow_nav_mesh_to_coord(0, -421.5728f, 503.3897f, 97.15549f, 1f, -1, 0.25f, 0, 40000f);
					}
					close_sequence_task(iVar1813);
					task_perform_sequence(*iParam0, iVar1813);
					clear_sequence_task(&uLocal_1818);
					if (!func_50(4096))
					{
						_0x2208438012482a1a(*iParam0, false, false);
					}
					else
					{
						func_43(8192);
						Local_2071.f_135 = "HMSTD_BUMP_P";
						Local_2071.f_5 = "HMSTD_BUMP_N";
						func_615(0, 0);
						func_279(0, 1, 0);
						func_655(0);
					}
					func_141(128);
					func_638(&(Local_386.f_690[1]->f_8));
					func_43(536870912);
				}
				if ((func_50(1073741824) && func_50(-2147483648)) && func_50(536870912))
				{
					func_49(16384);
					func_101(0);
					func_253(vLocal_1578[5], (14f / 2f));
					if (!func_50(4096))
					{
						func_93(1);
					}
					func_74(vLocal_1578[1]);
					if (func_20(&Local_1389, 256))
					{
						func_454(65, 0, 1, 0, 0);
						func_454(66, 0, 1, 0, 0);
						func_454(Local_1389.f_138, 0, 1, 0, 0);
					}
					iLocal_20 = 10;
				}
				Jump @4016; //curOff = 4002
				func_656(iParam1, iParam2);
			}
			return 0;
			default:
				break;
	}
}

int func_373(int iParam0, int iParam1, int iParam2)
{
	func_139(32);
	if (func_657(iParam0, iParam1, iParam2))
	{
		iLocal_24 = 9;
	}
	if (func_8(Local_1389.f_136, 64))
	{
		func_658();
	}
	func_194(0);
	switch (iLocal_24)
	{
		case 0:
			func_5(16);
			func_659(0, 1);
			func_659(1, 1);
			func_659(2, 1);
			func_616(1);
			func_660(1);
			Local_1389.f_18 = 3000;
			iLocal_1759[1] = _create_volume_cylinder_with_custom_name(-473.2554f, 497.1866f, 100.6316f, 0f, 0f, 6.802227f, 10.537f, 14.53575f, 6.040145f, "Castor's Ridge - volBandit");
			iLocal_1759[3] = _create_volume_box_with_custom_name(-448.3479f, 500.5164f, 98.75289f, 0f, 0f, 91.21118f, 12.00564f, 6.040755f, 3.434479f, "Castor's Ridge - volCombat");
			iLocal_1759[5] = _create_volume_aggregate_with_custom_name("Castor's Ridge - volHouse");
			_0x39816f6f94f385ad(&(iLocal_1759[5]), -438.5028f, 497.761f, 99.02924f, 0f, 0f, 2.049191f, 13.49764f, 4.540787f, 4.170513f);
			_0x39816f6f94f385ad(&(iLocal_1759[5]), -439.7f, 495.1134f, 99.02924f, 0f, 0f, 1.923922f, 10.80366f, 1.939119f, 4.170513f);
			_0x39816f6f94f385ad(&(iLocal_1759[5]), -441.1678f, 500.8109f, 99.02924f, 0f, 0f, 1.978058f, 8.808822f, 2.322693f, 4.170513f);
			Local_1857.f_79 = 1;
			Local_1857.f_78 = 0;
			func_167(&uLocal_1823);
			func_174(&uLocal_1823, 1);
			func_40(&uLocal_1823, 1);
			func_169(&uLocal_1823, 1);
			func_173(&uLocal_1823, 1);
			func_661(&iLocal_1794, &(iLocal_1759[1]), 0, 0, 1);
			func_662();
			func_297(&Local_1389, 0);
			func_171(&Local_1389, 1);
			func_170(&Local_1389, 1);
			func_176(&Local_1389, 1);
			func_663(&Local_1389, 2000);
			func_664();
			func_59(&(Local_1389.f_35), &(iLocal_1794[0]), "HOME_ATTACKER", 0);
			Local_2071.f_33 = { Local_1389.f_35 };
			Local_1857.f_81 = { Local_1389.f_35 };
			Local_336.f_40 = *iParam0;
			Local_336.f_39 = &iLocal_1759[4];
			Local_336.f_42 = 3f;
			Local_336.f_43 = 3f;
			add_relationship_group("HomesteadAttackers", &iLocal_31);
			add_relationship_group("HomesteadWorkers", &iLocal_32);
			set_relationship_between_groups(1, iLocal_32, 1862763509);
			set_relationship_between_groups(6, iLocal_32, iLocal_31);
			set_relationship_between_groups(6, iLocal_31, iLocal_32);
			if (!is_entity_dead(*iParam1))
			{
				if (!func_100(65, 0))
				{
					if (!func_57(65, 1, 1))
					{
					}
				}
				clear_ped_tasks_immediately(*iParam1, false, true);
				func_238(*iParam1, func_237(65), 0f, 2, 1073741824);
				set_entity_can_be_damaged_by_relationship_group(*iParam1, false, iLocal_31);
				set_entity_only_damaged_by_player(*iParam1, true);
				set_ped_relationship_group_hash(*iParam1, iLocal_32);
				set_ped_config_flag(*iParam1, 277, true);
				set_ped_config_flag(*iParam1, 178, false);
				set_blocking_of_non_temporary_events(*iParam1, true);
				open_sequence_task(&uLocal_1818);
				task_put_ped_directly_into_cover(0, Local_1649[1]->f_1, -1, 0, 1f, 1, 0, &(Local_1649[1]), 0, 1, 0);
				task_seek_cover_from_pos(0, -468.5037f, 496.4268f, 98.5103f, -1, 0, 0, 0);
				task_stay_in_cover(0);
				close_sequence_task(iVar1813);
				task_perform_sequence(*iParam1, iVar1813);
				clear_sequence_task(&uLocal_1818);
				remove_all_ped_weapons(*iParam1, true, true);
				set_ped_sphere_defensive_area(*iParam1, Local_1649[1]->f_1, 1f, 0, 0, 0);
			}
			if (!is_entity_dead(*iParam2))
			{
				if (!func_100(66, 0))
				{
					if (!func_57(66, 1, 1))
					{
					}
				}
				clear_ped_tasks_immediately(*iParam2, false, true);
				func_238(*iParam2, func_237(66), 0f, 2, 1073741824);
				set_entity_can_be_damaged_by_relationship_group(*iParam2, false, iLocal_31);
				set_entity_only_damaged_by_player(*iParam2, true);
				set_ped_relationship_group_hash(*iParam2, iLocal_32);
				set_ped_config_flag(*iParam2, 277, true);
				set_ped_config_flag(*iParam2, 178, false);
				set_blocking_of_non_temporary_events(*iParam2, true);
				open_sequence_task(&uLocal_1818);
				task_put_ped_directly_into_cover(0, Local_1649[2]->f_1, -1, 0, 1f, 1, 1, &(Local_1649[2]), 0, 1, 0);
				task_seek_cover_from_pos(0, -468.5037f, 496.4268f, 98.5103f, -1, 0, 0, 0);
				task_stay_in_cover(0);
				close_sequence_task(iVar1813);
				task_perform_sequence(*iParam2, iVar1813);
				clear_sequence_task(&uLocal_1818);
				remove_all_ped_weapons(*iParam2, true, true);
				set_ped_sphere_defensive_area(*iParam2, Local_1649[2]->f_1, 1f, 0, 0, 0);
			}
			if (!is_entity_dead(*iParam0))
			{
				if (!func_100(Local_1389.f_138, 0))
				{
					if (!func_57(Local_1389.f_138, 1, 1))
					{
					}
				}
				clear_ped_tasks_immediately(*iParam0, false, true);
				func_238(*iParam0, func_237(64), 0f, 2, 1073741824);
				set_entity_can_be_damaged_by_relationship_group(*iParam0, false, iLocal_31);
				set_entity_only_damaged_by_player(*iParam0, true);
				set_ped_relationship_group_hash(*iParam0, iLocal_32);
				_give_weapon_to_ped_2(*iParam0, func_104(268435456, 1056964608, 1065353216), 200, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				_0xaab050da48b57978(*iParam0, func_665(0), 0, -1, 4);
				set_ped_config_flag(*iParam0, 277, true);
				set_ped_config_flag(*iParam0, 178, false);
				set_blocking_of_non_temporary_events(*iParam0, true);
				set_ped_combat_attributes(*iParam0, 0, true);
				set_ped_combat_attributes(*iParam0, 119, true);
				set_ped_combat_attributes(*iParam0, 12, true);
				set_ped_combat_attributes(*iParam0, 44, true);
				set_ped_accuracy(*iParam0, 0);
				set_combat_float(*iParam0, 0, 1f);
				open_sequence_task(&uLocal_1818);
				task_put_ped_directly_into_cover(0, Local_1649[0]->f_1, 2000, 1, 0.125f, 1, 1, &(Local_1649[0]), 0, 1, 0);
				task_combat_hated_targets_in_area(0, get_entity_coords(&(iLocal_1794[0]), true, false), 60f, 0, 16);
				close_sequence_task(iVar1813);
				task_perform_sequence(*iParam0, iVar1813);
				clear_sequence_task(&uLocal_1818);
				set_ped_sphere_defensive_area(*iParam0, Local_1649[0]->f_1, 1f, 0, 0, 0);
				set_ped_config_flag(*iParam0, 277, true);
			}
			iVar0 = 0;
			while (iVar0 < iVar1789)
			{
				if (!is_entity_dead(&(iLocal_1794[iVar0])))
				{
					func_666(&(iLocal_1794[iVar0]));
					set_ped_relationship_group_hash(&(iLocal_1794[iVar0]), iLocal_31);
					set_ped_combat_attributes(&(iLocal_1794[iVar0]), 0, true);
					set_ped_combat_movement(&(iLocal_1794[iVar0]), 1);
					set_ped_config_flag(&(iLocal_1794[iVar0]), 233, true);
					set_current_ped_weapon(&(iLocal_1794[iVar0]), func_104(268435456, 1056964608, 1065353216), true, 0, false, false);
					task_put_ped_directly_into_cover(&(iLocal_1794[iVar0]), get_entity_coords(&(iLocal_1794[iVar0]), true, false), -1, 1, 0f, 0, 0, 0, 0, 0, 0);
					task_combat_hated_targets_in_area(&(iLocal_1794[iVar0]), get_entity_coords(*iParam0, true, false), 60f, 0, 16);
					set_ped_config_flag(&(iLocal_1794[iVar0]), 6, true);
					set_ped_config_flag(&(iLocal_1794[iVar0]), 146, true);
					iLocal_1642 = get_ped_accuracy(&(iLocal_1794[iVar0]));
					set_ped_accuracy(&(iLocal_1794[iVar0]), 0);
					set_ped_using_action_mode(&(iLocal_1794[iVar0]), true, -1, 0);
					if (!is_entity_dead(Local_386.f_369[iVar0]->f_11))
					{
						_0x06aade17334f7a40(Local_386.f_369[iVar0]->f_11, func_667(iVar0));
						_0x06d26a96ca1bca75(Local_386.f_369[iVar0]->f_11, 3, 0f, 0);
						_0x06d26a96ca1bca75(Local_386.f_369[iVar0]->f_11, 1, 0f, 0);
						_0x2eb75fb86c41f026(Local_386.f_369[iVar0]->f_11, 3, 0);
						_0x2eb75fb86c41f026(Local_386.f_369[iVar0]->f_11, 1, 0);
					}
				}
				iVar0++;
			}
			func_74(vLocal_1578[10]);
			func_668();
			iLocal_24 = 1;
			break;
		case 1:
			func_669();
			func_660(1);
			func_670();
			if (func_353(0, 1, 0, 0))
			{
				if (func_671(iParam0, iParam1, iParam2))
				{
					iVar1 = func_672();
					if (!is_entity_dead(iVar1))
					{
						func_94(&(Local_1389.f_35), "HOME_ATAKR", iVar1, *iParam0, 0, 0, 1, 1);
					}
					func_74(vLocal_1578[5]);
					iLocal_24 = 2;
				}
				else if (func_673(iParam0))
				{
					func_74(vLocal_1578[5]);
					iLocal_24 = 2;
				}
			}
			break;
		case 2:
			if (func_278(vLocal_1578[5], 35f))
			{
				func_90(iParam0, iParam1, iParam2, 1);
				func_74(vLocal_1578[1]);
			}
			if (!func_27(16384))
			{
				func_660(1);
			}
			func_670();
			if (func_353(0, 1, 0, 0))
			{
				if (!func_403(vLocal_1578[0]))
				{
					func_74(vLocal_1578[0]);
				}
				if (func_278(vLocal_1578[0], 5f))
				{
					if (!func_27(134217728))
					{
						if (!func_27(32768))
						{
							func_5(32768);
							func_94(&(Local_1389.f_35), "HOME_ATAK", *iParam0, &(iLocal_1794[0]), 0, 0, 1, 1);
						}
						else
						{
							func_94(&(Local_1389.f_35), "HOME_ATAKF", *iParam0, &(iLocal_1794[0]), 0, 0, 1, 1);
						}
					}
					else
					{
						func_139(134217728);
						iVar2 = func_672();
						if (!is_entity_dead(iVar2))
						{
							func_94(&(Local_1389.f_35), "HOME_ATAKR", iVar2, *iParam0, 0, 0, 1, 1);
						}
					}
				}
			}
			if (func_358(vLocal_1578[1], 5f))
			{
				func_674(*iParam0, 1);
				func_262(vLocal_1578[1]);
			}
			if (func_673(iParam0))
			{
				func_139(16384);
				func_5(134217728);
				iLocal_24 = 3;
			}
			break;
		case 3:
			if (func_278(vLocal_1578[5], 35f))
			{
				func_90(iParam0, iParam1, iParam2, 1);
				if (func_110(*iParam0, 0, 1))
				{
					set_ped_accuracy(*iParam0, 55);
				}
				func_74(vLocal_1578[1]);
			}
			if (func_592(&iLocal_1794))
			{
				func_674(*iParam0, 0);
				clear_ped_damage_decal_by_zone(*iParam0, 1, "ALL");
				clear_ped_damage_decal_by_zone(*iParam0, 0, "ALL");
				clear_ped_damage_decal_by_zone(*iParam1, 1, "ALL");
				clear_ped_damage_decal_by_zone(*iParam1, 0, "ALL");
				clear_ped_damage_decal_by_zone(*iParam2, 1, "ALL");
				clear_ped_damage_decal_by_zone(*iParam2, 0, "ALL");
				func_589(0);
				func_279(0, 1, 1);
				func_589(1);
				func_279(1, 1, 1);
				func_589(2);
				func_279(2, 1, 1);
				iVar0 = 0;
				while (iVar0 < Local_386.f_1)
				{
					if (!does_entity_exist(func_675(Local_386.f_369[iVar0]->f_11)))
					{
						_0x0348469daa17576c(Local_386.f_369[iVar0]->f_11);
						_task_smart_flee_style_coord(Local_386.f_369[iVar0]->f_11, func_215(), 4, 0, 999f, -1, 0);
					}
					set_ped_keep_task(Local_386.f_369[iVar0]->f_11, true);
					set_ped_as_no_longer_needed(&(Local_386.f_369[iVar0]->f_11));
					iVar0++;
				}
				func_260(&Local_1389, &(Local_1389.f_28));
				func_39(&Local_1389);
				func_40(&Local_1389, 0);
				func_169(&Local_1389, 0);
				func_178(&Local_1389, 0);
				func_90(iParam0, iParam1, iParam2, 1);
				_0xb6f4825153920582();
				_0xdf94844d474f31e5(*iParam0);
				_0xdf94844d474f31e5(*iParam1);
				_0xdf94844d474f31e5(*iParam2);
				_0x1a5c5d350068a673(*iParam0, 0);
				_0x1a5c5d350068a673(*iParam1, 0);
				_0x1a5c5d350068a673(*iParam2, 0);
				func_279(0, 1, 1);
				func_279(1, 1, 1);
				func_279(2, 1, 1);
				func_262(vLocal_1578[2]);
				func_42(&Local_1389, 128);
				func_25(Local_1389.f_136, 64);
				func_84(&Local_1389);
				func_315(iVar1811, uLocal_1790[0], -89429847, 580546400, 0, func_365());
				func_74(vLocal_1578[1]);
				set_current_ped_weapon(*iParam0, -1569615261, false, 0, false, false);
				_0xaab050da48b57978(*iParam0, func_665(0), 0, -1, 4);
				_0xaab050da48b57978(*iParam1, func_665(1), 0, -1, 4);
				_0xaab050da48b57978(*iParam2, func_665(2), 0, -1, 4);
				set_ped_config_flag(*iParam0, 277, true);
				set_ped_config_flag(*iParam1, 277, true);
				set_ped_config_flag(*iParam2, 277, true);
				vVar3.x = 0;
				vVar3.f_1 = 1;
				vVar3.f_2 = { Global_36 };
				open_sequence_task(&uLocal_1818);
				task_exit_cover(&vVar3);
				task_swap_weapon(0, 1, 0, 0, 0);
				close_sequence_task(iVar1813);
				task_perform_sequence(*iParam0, iVar1813);
				clear_sequence_task(&uLocal_1818);
				func_139(16);
				func_74(vLocal_1578[0]);
				iLocal_24 = 4;
			}
			else if (func_676(&iLocal_1768, 0))
			{
				func_42(&Local_1389, 4);
				func_200(Local_1389.f_136, 512);
				func_84(&Local_1389);
				func_290(&iLocal_1794, Global_35, 0, -1, 1148846080, 0, 4);
				func_289(&uLocal_1805, 0);
				func_262(vLocal_1578[0]);
				iLocal_24 = 9;
			}
			else
			{
				func_677(iParam0);
			}
			break;
		case 4:
			if (!func_50(1073741824))
			{
				func_43(1073741824);
				_0xaab050da48b57978(*iParam1, func_665(1), 0, -1, 4);
			}
			if (!func_50(-2147483648))
			{
				func_43(-2147483648);
				_0xaab050da48b57978(*iParam2, func_665(2), 0, -1, 4);
			}
			if (!func_678(&Local_1389, 4))
			{
				if (!func_403(vLocal_1578[2]))
				{
					func_74(vLocal_1578[2]);
				}
				else if (func_278(vLocal_1578[2], (to_float(3000) / 1000f)))
				{
					func_169(&Local_1389, 1);
					func_40(&Local_1389, 1);
					func_178(&Local_1389, 1);
				}
			}
			if (!func_27(65536) && iVar2065 > 0)
			{
				func_5(65536);
			}
			if (func_679(iParam0, -1569615261))
			{
				func_680();
			}
			func_629(1048576000, 1028443341, 0, 106);
			if (!is_entity_dead(*iParam0))
			{
				if (!func_27(1048576) && func_247(*iParam0, 1, 1) < 20f)
				{
					func_5(1048576);
				}
				if (func_681())
				{
					_0xaab050da48b57978(*iParam0, func_665(0), 0, -1, 4);
					iLocal_24 = 5;
				}
			}
			else
			{
				if (!func_100(65, 0))
				{
					func_57(65, 1, 1);
				}
				if (!func_100(66, 0))
				{
					func_57(66, 1, 1);
				}
				func_200(Local_1389.f_136, 32);
				func_192(Local_1389.f_136, 8388608);
				func_188(Local_1389.f_136);
				iLocal_24 = 7;
			}
			break;
		case 5:
			func_629(1048576000, 1028443341, 0, 106);
			if (!func_678(&Local_1389, 4))
			{
				if (!func_403(vLocal_1578[2]))
				{
					func_74(vLocal_1578[2]);
				}
				else if (func_278(vLocal_1578[2], (to_float(3000) / 1000f)))
				{
					func_169(&Local_1389, 1);
					func_40(&Local_1389, 1);
					func_178(&Local_1389, 1);
				}
			}
			if (func_679(iParam0, -1569615261))
			{
				func_680();
			}
			if (func_682(iParam0))
			{
				if (func_353(-3.5f, 1, 0, 0))
				{
					if (!func_100(Local_1389.f_138, 0))
					{
						func_57(Local_1389.f_138, 1, 1);
					}
					if (!func_100(65, 0))
					{
						func_57(65, 1, 1);
					}
					if (!func_100(66, 0))
					{
						func_57(66, 1, 1);
					}
					func_284(uLocal_1790[0]);
					func_200(Local_1389.f_136, 32);
					func_192(Local_1389.f_136, 8388608);
					func_188(Local_1389.f_136);
					if (func_292(*iParam0, *iParam1, 1, 1) > 7.5f)
					{
						clear_ped_tasks(*iParam0, 1, 0);
						task_go_to_entity(*iParam0, *iParam1, -1, 5f, 1f, 8f, 0);
					}
					iLocal_24 = 6;
				}
			}
			break;
		case 6:
			if (func_292(*iParam0, *iParam1, 1, 1) <= 7.5f)
			{
				clear_ped_tasks(*iParam0, 1, 0);
				task_turn_ped_to_face_entity(*iParam0, *iParam2, -1, -1082130432, -1082130432, -1082130432);
				vVar8.x = 0;
				vVar8.f_1 = 1;
				vVar8.f_2 = { get_entity_coords(*iParam0, true, false) };
				open_sequence_task(&uLocal_1818);
				task_exit_cover(&vVar8);
				task_turn_ped_to_face_entity(0, *iParam0, -1, -1082130432, -1082130432, -1082130432);
				close_sequence_task(iVar1813);
				_task_perform_sequence_2(*iParam1, iVar1813, 0.5f, 0.5f);
				_task_perform_sequence_2(*iParam2, iVar1813, 1.5f, 1.5f);
				clear_sequence_task(&uLocal_1818);
				func_94(&(Local_1389.f_35), "HOME_WLCMA2", *iParam0, *iParam2, 0, 0, 1, 1);
				iLocal_24 = 7;
			}
			break;
		case 7:
			if (func_27(16))
			{
				if (!func_403(vLocal_1578[2]))
				{
					func_683(vLocal_1578[2], 0);
				}
				else if (func_278(vLocal_1578[2], (to_float(3000) / 1000f)))
				{
					func_169(&Local_1389, 1);
					func_139(16);
				}
			}
			if (func_353(-3.5f, 1, 0, 0))
			{
				if (func_20(&Local_1389, 256))
				{
					if (func_100(Local_1389.f_138, 0))
					{
						func_240(Local_1389.f_138, 1);
					}
					if (func_100(65, 0))
					{
						func_240(65, 1);
					}
					if (func_100(66, 0))
					{
						func_240(66, 1);
					}
				}
				else
				{
					func_684();
				}
				if (!is_entity_dead(*iParam0))
				{
					set_ped_config_flag(*iParam0, 277, false);
					set_ped_config_flag(*iParam0, 178, true);
				}
				if (!is_entity_dead(*iParam1))
				{
					set_ped_config_flag(*iParam1, 277, false);
					set_ped_config_flag(*iParam1, 178, true);
				}
				if (!is_entity_dead(*iParam2))
				{
					set_ped_config_flag(*iParam2, 277, false);
					set_ped_config_flag(*iParam2, 178, true);
				}
				func_279(0, 1, 0);
				func_589(0);
				func_279(1, 1, 0);
				func_589(1);
				func_279(2, 1, 0);
				func_589(2);
				func_139(8388608);
				func_253(vLocal_1578[5], (14f / 2f));
				func_40(&Local_1389, 1);
				func_139(1048576);
				func_616(1);
				Local_1389.f_18 = 1000;
				func_141(128);
				iLocal_24 = 8;
			}
			break;
		case 8:
			if (func_20(&Local_1389, 256) || func_685(Global_35, Local_386.f_4, 0) > 50f)
			{
				if (func_100(Local_1389.f_138, 0))
				{
					func_240(Local_1389.f_138, 1);
				}
				if (func_100(65, 0))
				{
					func_240(65, 1);
				}
				if (func_100(66, 0))
				{
					func_240(66, 1);
				}
				iLocal_24 = 9;
			}
			break;
		case 9:
			break;
	}
	return 0;
}

int func_374(int iParam0, int iParam1, int iParam2)
{
	if (func_686() || func_687())
	{
		if (iLocal_22 > 2)
		{
			func_187();
			func_87(&uLocal_1790);
			iLocal_22 = 2;
		}
	}
	func_602(iParam1, 65);
	switch (iLocal_22)
	{
		case 0:
			if (!func_100(Local_1389.f_138, 0))
			{
				func_57(Local_1389.f_138, 1, 1);
			}
			Local_2071.f_12 = 15f;
			Local_2071.f_13 = 10f;
			Local_1857.f_78 = 0;
			func_616(1);
			if (!is_entity_dead(iVar1784))
			{
				set_entity_as_mission_entity(iVar1784, true, true);
				clear_entity_last_damage_entity(iVar1784);
				iVar1 = 0;
				while (iVar1 < 6)
				{
					iVar0 = _get_ped_in_draft_seat(iVar1784, iVar1);
					if (does_entity_exist(iVar0))
					{
						clear_entity_last_damage_entity(iVar0);
					}
					iVar1++;
				}
			}
			func_139(8388608);
			func_253(vLocal_1578[5], (14f / 2f));
			func_589(0);
			func_279(0, 1, 1);
			func_589(1);
			func_589(2);
			func_5(1024);
			iLocal_22 = 2;
			break;
		case 2:
			if (!func_10(Local_1389.f_136, 4))
			{
				func_200(Local_1389.f_136, 4);
			}
			if (func_14(&uLocal_1789))
			{
				func_619(iParam0, 0, 0);
				if (!is_entity_dead(iVar1784))
				{
					set_entity_as_mission_entity(iVar1784, true, true);
				}
				func_688("HOME_OBJ01", 7500, 0, 1, 0, 0, -1, -1, 0);
				func_25(Local_1389.f_136, 8192);
				func_691(func_689(), uLocal_1790[1], 1631143573, 0, func_690(1), 0);
				iLocal_22 = 8;
			}
			else
			{
				iLocal_22 = 3;
			}
			break;
		case 3:
			if (func_618(*iParam0, Global_35, 0, 20f, 0))
			{
				if (!func_100(Local_1389.f_138, 0))
				{
					func_57(Local_1389.f_138, 1, 1);
				}
				open_sequence_task(&uLocal_1818);
				task_go_to_entity(0, Global_35, -1, 5f, 1.5f, 10f, 0);
				task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
				close_sequence_task(iVar1813);
				task_perform_sequence(*iParam0, iVar1813);
				clear_sequence_task(&uLocal_1818);
				func_5(1048576);
				func_5(1024);
				iLocal_30 = func_626(*iParam0, _create_volume_cylinder(get_entity_coords(*iParam0, true, false), 0f, 0f, get_entity_heading(*iParam0), 5.5f, 5.5f, 5.5f), 148);
				func_94(&(Local_1389.f_35), "HMSTD_ASK_3", *iParam0, Global_35, 0, 0, 1, 1);
				iLocal_22 = 4;
			}
			break;
		case 4:
			if (!func_50(33554432) && func_353(-3.5f, 1, 0, 0))
			{
				func_615(1, 1);
				func_279(0, 1, 0);
				func_692(0);
				func_74(vLocal_1578[1]);
			}
			if (iVar330 == 0)
			{
				switch (iVar329)
				{
					case 0:
						func_94(&(Local_1389.f_35), "HMSTD_ASK_RESN", Global_35, *iParam0, 0, 0, 1, 1);
						func_615(1, 0);
						func_279(0, 1, 1);
						iLocal_22 = 15;
						break;
					case 2:
						if (does_entity_exist(iVar1783))
						{
							set_ped_config_flag(iVar1783, 136, false);
						}
						display_radar(false);
						func_619(&Global_35, 0, *iParam0);
						func_5(65536);
						clear_ped_tasks(*iParam0, 1, 0);
						task_turn_ped_to_face_entity(*iParam0, Global_35, -1, -1082130432, -1082130432, -1082130432);
						func_5(65536);
						func_141(128);
						func_615(1, 0);
						func_279(0, 1, 1);
						func_94(&(Local_1389.f_35), "HMSTD_ASK_RESP", Global_35, *iParam0, 0, 0, 1, 1);
						iLocal_22 = 5;
						break;
					case 1:
						func_141(128);
						func_94(&(Local_1389.f_35), "HMSTD_ASK_QUIT", Global_35, *iParam0, 0, 0, 1, 1);
						func_9(Local_1389.f_136, 256);
						func_9(Local_1389.f_136, 2);
						func_42(&Local_1389, 128);
						func_615(1, 0);
						func_279(0, 1, 1);
						iLocal_22 = 15;
						break;
				}
			}
			if (func_278(vLocal_1578[1], 12.5f))
			{
				func_94(&(Local_1389.f_35), "HMSTD_ASK_GUP", Global_35, *iParam0, 0, 0, 1, 1);
				func_615(1, 0);
				func_279(0, 1, 1);
				iLocal_22 = 15;
			}
			break;
		case 5:
			func_619(iParam0, 0, 0);
			func_619(&Global_35, 0, *iParam0);
			if (func_353(-3.5f, 1, 0, 0) && is_ped_facing_ped(*iParam0, Global_35, 45f))
			{
				clear_ped_tasks(*iParam0, 1, 0);
				freeze_entity_position(*iParam0, true);
				func_603(Local_1618[1], *iParam0, "father", 1);
				func_603(Local_1618[1], Global_35, "plr", 1);
				func_606(Local_1618[1], Local_386.f_690[0]->f_8, "MONEY");
				func_611(Local_1618[1], get_entity_coords(*iParam0, true, false), 0f, 0f, get_entity_heading(*iParam0));
				func_693(&Local_1674);
				Local_1674.f_1 = Global_35;
				Local_1674.f_8 = { get_offset_from_entity_in_world_coords(*iParam0, func_694()) };
				Local_1674.f_19 = func_695(Local_1674.f_8, get_entity_coords(*iParam0, true, false));
				Local_1674.f_25 = &Local_1618[1];
				StringCopy(&(Local_1674.f_30), "plr", 24);
				StringCopy(&(Local_1674.f_26), func_415(1), 32);
				func_132(&(Local_1674.f_23), 27648);
				func_42(&Local_1389, 65536);
				func_696(&Local_1674, 106);
				func_265(&Local_1549, 4);
				iLocal_22 = 6;
			}
			break;
		case 6:
			func_619(iParam0, 0, 0);
			func_619(&Global_35, 0, *iParam0);
			if (!func_100(Local_1389.f_138, 0))
			{
				func_57(Local_1389.f_138, 1, 1);
			}
			func_629(1048576000, 1028443341, 0, 106);
			if (func_696(&Local_1674, 106))
			{
				func_697(iParam0);
				iLocal_22 = 7;
			}
			break;
		case 7:
			if (func_330(Global_35, &(Local_1618[1]), "plr", -1132719179, 0, 1, 0))
			{
				func_638(&(Local_386.f_690[0]->f_8));
				task_turn_ped_to_face_entity(*iParam0, Global_35, -1, -1082130432, -1082130432, -1082130432);
				display_radar(true);
				func_25(Local_1389.f_136, 1073741824);
				iLocal_22 = 11;
			}
			break;
		case 8:
			func_619(iParam0, 0, 0);
			if (func_685(iVar1784, func_689(), 0) < 8f)
			{
				if (!func_27(524288))
				{
					bring_vehicle_to_halt(iVar1784, 5f, -1, false);
					func_5(524288);
				}
				if (get_entity_speed(iVar1784) < 2f)
				{
					set_vehicle_forward_speed(iVar1784, 0f);
					if (is_ped_in_any_vehicle(Global_35, false))
					{
						task_leave_any_vehicle(Global_35, 1000, 0);
						func_284(uLocal_1790[1]);
						if (!is_entity_dead(*iParam0))
						{
							task_follow_and_converse_with_ped(*iParam0, Global_35, 0, 0, -1082130432, -1082130432, 8, 0, 0, 1069547520, 1073741824);
						}
					}
					set_vehicle_is_considered_by_player(iVar1784, false);
					func_187();
					iLocal_22 = 9;
				}
			}
			break;
		case 9:
			set_vehicle_forward_speed(iVar1784, 0f);
			func_619(iParam0, 0, 0);
			if (func_247(*iParam0, 1, 1) < 10f && func_618(*iParam0, Global_35, 0, 10f, 0))
			{
				iLocal_22 = 10;
			}
			break;
		case 10:
			if (!func_100(Local_1389.f_138, 0))
			{
				func_57(Local_1389.f_138, 1, 1);
			}
			set_vehicle_forward_speed(iVar1784, 0f);
			func_619(iParam0, 0, 0);
			if (func_698(*iParam0, uLocal_1790[0], Global_35, &iLocal_2070, &Local_1857))
			{
				func_284(uLocal_1790[0]);
				func_84(&Local_1389);
				func_25(Local_1389.f_136, 128);
				func_5(8192);
				func_200(Local_1389.f_136, 16384);
				func_699(Local_1389.f_136);
				func_5(512);
				func_42(&Local_1389, 128);
				set_vehicle_has_been_owned_by_player(iVar1784, false);
				clear_entity_last_damage_entity(iVar1784);
				func_5(262144);
				iLocal_22 = 11;
			}
			break;
		case 11:
			if (!func_100(Local_1389.f_138, 0))
			{
				func_57(Local_1389.f_138, 1, 1);
			}
			if (func_353(-3.5f, 1, 0, 0))
			{
				iLocal_22 = 12;
			}
			break;
		case 12:
			if (!func_100(Local_1389.f_138, 0))
			{
				func_57(Local_1389.f_138, 1, 1);
			}
			if (func_353(-3.5f, 1, 0, 0))
			{
				iLocal_22 = 13;
			}
			break;
		case 13:
			if (!func_100(Local_1389.f_138, 0))
			{
				func_57(Local_1389.f_138, 1, 1);
			}
			iLocal_22 = 14;
			break;
		case 14:
			if (func_353(-3.5f, 1, 0, 0))
			{
				iLocal_22 = 15;
			}
			break;
		case 15:
			if (func_353(0, 1, 0, 0))
			{
				func_139(1048576);
				func_139(8388608);
				func_616(0);
				if (func_100(Local_1389.f_138, 0))
				{
					func_240(Local_1389.f_138, 1);
				}
				func_615(0, 0);
				func_279(0, 1, 0);
				func_89(&iLocal_30, 1);
				func_284(uLocal_1790[0]);
				iLocal_22 = 16;
			}
			break;
		case 16:
			break;
	}
	return 0;
}

int func_375(int iParam0, int iParam1, int iParam2)
{
	func_686();
	func_687();
	func_700(iParam0);
	func_602(iParam1, 65);
	switch (iLocal_21)
	{
		case 0:
			Local_2071.f_12 = 15f;
			Local_2071.f_13 = 10f;
			func_589(0);
			func_279(0, 1, 1);
			func_589(1);
			func_589(2);
			func_616(1);
			Local_336.f_40 = *iParam0;
			Local_336.f_39 = &iLocal_1759[4];
			Local_336.f_42 = 3f;
			Local_336.f_43 = 3f;
			if (!is_entity_dead(iVar1784))
			{
				set_entity_as_mission_entity(iVar1784, true, true);
				clear_entity_last_damage_entity(iVar1784);
				iVar1 = 0;
				while (iVar1 < 6)
				{
					iVar0 = _get_ped_in_draft_seat(iVar1784, iVar1);
					if (does_entity_exist(iVar0))
					{
						clear_entity_last_damage_entity(iVar0);
					}
					iVar1++;
				}
				if (func_10(Local_1389.f_136, 64))
				{
					func_5(131072);
				}
				else
				{
					func_139(8388608);
					func_253(vLocal_1578[5], (14f / 2f));
					clear_ped_tasks_immediately(*iParam0, false, true);
					func_603(Local_1618[0], *iParam0, "FATHER", 1);
					StringCopy(&(Local_1618[0]->f_4), "BOOL_intro_idle", 24);
					func_617(Local_1618[0]);
					if (!func_8(Local_1389.f_136, 256))
					{
						_0xb56d41a694e42e86(&(iLocal_1759[4]), 0, 0, 0, -1, -1, 0);
						_0x4c39c95ae5db1329(&(iLocal_1759[4]), 0, 15);
					}
					func_701(1);
					Jump @3369; //curOff = 459
					if (func_600(Local_1389.f_136, &Local_386, &Local_1389, 50f))
					{
						func_5(128);
						func_701(2);
					}
					Jump @3369; //curOff = 496
					if (!func_10(Local_1389.f_136, 4))
					{
						func_200(Local_1389.f_136, 4);
					}
					if (func_618(*iParam0, Global_35, 0, Local_2071.f_12, 0) && Global_36.f_2 < 100f)
					{
						iLocal_30 = func_626(*iParam0, _create_volume_cylinder(get_entity_coords(*iParam0, true, false), 0f, 0f, get_entity_heading(*iParam0), 5.5f, 5.5f, 5.5f), 660);
						func_619(iParam0, 0, 0);
						func_619(&Global_35, 0, *iParam0);
						func_620(*iParam0, &uLocal_1540, 0f, 0f, 0f, 0, 60f, 20f, -1, 4000, 4000, 3.5f, 0, 1, 1084227584);
						vVar4 = { func_623(Global_35, 1065353216) };
						iVar3 = func_624(*iParam0, vVar4, 0.349f);
						switch (iVar3)
						{
							case 0:
								sVar2 = "PBL_react_F";
								break;
							case 2:
								sVar2 = "PBL_react_R";
								break;
							case 3:
								sVar2 = "PBL_react_L";
								break;
							case 1:
								sVar2 = "PBL_react_B";
								break;
						}
						func_625(Local_1618[0], sVar2);
						func_701(3);
					}
					Jump @3369; //curOff = 790
					func_629(1048576000, 1028443341, 0, 106);
					if (func_627(Local_1618[0]))
					{
						func_628(Local_1618[0], 1, 1);
						func_5(8388608);
						func_5(1024);
						func_94(&(Local_1389.f_35), Local_2071.f_1, *iParam0, Global_35, 0, 0, 1, 1);
						func_701(4);
					}
					Jump @3369; //curOff = 881
					func_629(1048576000, 1028443341, 0, 106);
					if (!func_100(Local_1389.f_138, 0))
					{
						func_57(Local_1389.f_138, 1, 1);
					}
					func_619(iParam0, 0, 0);
					func_619(&Global_35, 0, *iParam0);
					func_620(*iParam0, &uLocal_1540, 0f, 0f, 0f, 0, 60f, 20f, -1, 4000, 4000, 3.5f, 0, 1, 1084227584);
					if (!is_entity_dead(*iParam0) && has_anim_event_fired(*iParam0, -1132719179))
					{
						if (func_186(Global_35, &(iLocal_1759[4]), 1, 0))
						{
							task_follow_nav_mesh_to_coord(*iParam0, Global_36, 1f, -1, 1f, 0, 40000f);
						}
						else
						{
							task_follow_nav_mesh_to_coord(*iParam0, _0xf70f00013a62f866(&(iLocal_1759[4])), 1f, -1, 0.25f, 0, 40000f);
						}
						func_683(vLocal_1578[0], 1);
						func_74(vLocal_1578[1]);
						func_701(5);
					}
					Jump @3369; //curOff = 1116
					func_629(1048576000, 1028443341, 0, 106);
					func_619(iParam0, 0, 0);
					func_620(*iParam0, &uLocal_1540, 0f, 0f, 0f, 0, 60f, 20f, -1, 4000, 4000, 3.5f, 0, 1, 1084227584);
					func_702(iParam0);
					if (func_353(-3.5f, 1, 0, 0))
					{
						if (!func_10(Local_1389.f_136, 64))
						{
							if (func_27(16))
							{
								cVar7 = "HMSTD_ASK_WAG";
							}
							else if (func_703())
							{
								cVar7 = "HMSTD_IG3_ASKM";
							}
							else
							{
								cVar7 = "HMSTD_IG3_ASKW";
							}
							func_94(&(Local_1389.f_35), cVar7, *iParam0, Global_35, 0, 0, 1, 1);
							func_200(Local_1389.f_136, 64);
						}
						func_634();
						func_701(6);
					}
					Jump @3369; //curOff = 1306
					func_619(iParam0, 0, 0);
					func_702(iParam0);
					if (func_353(-3.5f, 1, 0, 0))
					{
						func_683(vLocal_1578[0], 1);
						func_74(vLocal_1578[1]);
						func_615(1, 1);
						func_279(0, 1, 0);
						func_704(0);
						func_701(7);
					}
					Jump @3369; //curOff = 1382
					func_619(iParam0, 0, 0);
					if (func_403(vLocal_1578[1]))
					{
						func_702(iParam0);
					}
					if (func_353(-3.5f, 1, 0, 0))
					{
						switch (iVar329)
						{
							case 0:
								if (func_27(16))
								{
									if (does_entity_exist(iVar1783))
									{
										set_ped_config_flag(iVar1783, 136, false);
									}
									func_619(&Global_35, 0, *iParam0);
									func_94(&(Local_1389.f_35), "HOME_LN03AJA", Global_35, *iParam0, 0, 0, 1, 1);
									func_141(128);
									func_84(&Local_1389);
									func_615(1, 0);
									func_279(0, 1, 1);
									func_701(13);
								}
								else if (func_703())
								{
									if (does_entity_exist(iVar1783))
									{
										set_ped_config_flag(iVar1783, 136, false);
									}
									set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
									task_swap_weapon(Global_35, 1, 0, 0, 0);
									if (func_10(0, 4) && func_24(0) == 1)
									{
										func_200(0, 16);
									}
									func_615(1, 0);
									func_279(0, 1, 1);
									func_701(9);
								}
								break;
							case 2:
								if (does_entity_exist(iVar1783))
								{
									set_ped_config_flag(iVar1783, 136, false);
								}
								display_radar(false);
								func_619(&Global_35, 0, *iParam0);
								func_5(65536);
								func_141(128);
								clear_ped_tasks(*iParam0, 1, 0);
								task_turn_ped_to_face_entity(*iParam0, Global_35, -1, -1082130432, -1082130432, -1082130432);
								func_615(1, 0);
								func_279(0, 1, 1);
								func_701(11);
								break;
							case 1:
								if (does_entity_exist(iVar1783))
								{
									set_ped_config_flag(iVar1783, 136, false);
								}
								func_141(128);
								func_615(1, 0);
								func_279(0, 0, 1);
								func_284(uLocal_1790[0]);
								func_701(18);
								break;
						}
						if (func_247(*iParam0, 1, 1) > 18f)
						{
							if (does_entity_exist(iVar1783))
							{
								set_ped_config_flag(iVar1783, 136, false);
							}
							func_615(1, 0);
							func_279(0, 1, 1);
							func_701(18);
						}
						if (func_278(vLocal_1578[1], (7.5f + 5.5f)))
						{
							func_701(8);
						}
						else if (func_358(vLocal_1578[0], (7.5f + 5.5f)))
						{
							if (does_entity_exist(iVar1783))
							{
								set_ped_config_flag(iVar1783, 136, false);
							}
							func_615(1, 0);
							func_279(0, 1, 1);
							func_701(18);
						}
					}
					Jump @3369; //curOff = 1975
					get_current_ped_weapon(Global_35, &iVar8, true, 0, false);
					if (iVar8 == -1569615261)
					{
						if (does_entity_exist(iVar1783))
						{
							set_ped_config_flag(iVar1783, 136, false);
						}
						func_619(&Global_35, 0, *iParam0);
						func_94(&(Local_1389.f_35), "HMSTD_IG3_PWOOD", Global_35, *iParam0, 0, 0, 1, 1);
						func_25(Local_1389.f_136, 256);
						func_88(&Local_1389);
						func_74(vLocal_1578[0]);
						func_701(10);
					}
					Jump @3369; //curOff = 2091
					func_619(iParam0, 0, 0);
					func_619(&Global_35, 0, *iParam0);
					if (is_ped_facing_ped(*iParam0, Global_35, 45f))
					{
						clear_ped_tasks(*iParam0, 1, 0);
						freeze_entity_position(*iParam0, true);
						func_603(Local_1618[1], *iParam0, "father", 1);
						func_603(Local_1618[1], Global_35, "plr", 1);
						func_606(Local_1618[1], Local_386.f_690[0]->f_8, "MONEY");
						func_611(Local_1618[1], get_entity_coords(*iParam0, true, false), 0f, 0f, get_entity_heading(*iParam0));
						func_693(&Local_1674);
						Local_1674.f_1 = Global_35;
						Local_1674.f_8 = { get_offset_from_entity_in_world_coords(*iParam0, func_694()) };
						Local_1674.f_19 = func_695(Local_1674.f_8, get_entity_coords(*iParam0, true, false));
						Local_1674.f_25 = &Local_1618[1];
						StringCopy(&(Local_1674.f_30), "plr", 24);
						StringCopy(&(Local_1674.f_26), func_415(1), 32);
						func_132(&(Local_1674.f_23), 27648);
						func_42(&Local_1389, 65536);
						func_696(&Local_1674, 106);
						func_265(&Local_1549, 4);
						func_701(12);
					}
					Jump @3369; //curOff = 2376
					func_619(iParam0, 0, 0);
					func_619(&Global_35, 0, *iParam0);
					if (func_27(2097152) || func_696(&Local_1674, 106))
					{
						func_701(14);
					}
					Jump @3369; //curOff = 2430
					func_88(&Local_1389);
					if (iVar329 == 1)
					{
						func_279(0, 1, 1);
						func_94(&(Local_1389.f_35), "HMSTD_IG3_NEG", *iParam0, Global_35, 0, 0, 1, 1);
					}
					else
					{
						func_94(&(Local_1389.f_35), "HMSTD_IG3_WALKS", *iParam0, Global_35, 0, 0, 1, 1);
					}
					func_701(19);
					Jump @3369; //curOff = 2511
					func_619(iParam0, 0, 0);
					if (func_353(-3.5f, 1, 0, 0))
					{
						func_49(2048);
						task_turn_ped_to_face_entity(*iParam0, Global_35, -1, -1082130432, -1082130432, -1082130432);
						func_94(&(Local_1389.f_35), "HMSTD_IG3_NEAR", *iParam0, Global_35, 0, 0, 1, 1);
						func_74(vLocal_1578[0]);
						func_701(7);
					}
					Jump @3369; //curOff = 2609
					func_619(iParam0, 0, 0);
					func_619(&Global_35, 0, *iParam0);
					if ((func_353(-3.5f, 1, Global_35, 1) && func_353(-3.5f, 1, *iParam0, 1)) && func_358(vLocal_1578[0], 6f))
					{
						func_262(vLocal_1578[0]);
						func_42(&Local_1389, 128);
						func_101(0);
						func_5(2097152);
						func_25(Local_1389.f_136, 2);
						func_200(Local_1389.f_136, 512);
						func_465(11, 1);
						func_284(uLocal_1790[0]);
						func_701(19);
					}
					Jump @3369; //curOff = 2760
					if (is_ped_in_any_vehicle(Global_35, false))
					{
						task_leave_any_vehicle(Global_35, 1000, 0);
						set_vehicle_has_been_owned_by_player(iVar1784, false);
						set_vehicle_is_considered_by_player(iVar1784, false);
					}
					if (func_353(-3.5f, 1, 0, 0))
					{
						func_101(0);
						func_5(2097152);
						if (!func_100(Local_1389.f_138, 0))
						{
							func_57(Local_1389.f_138, 1, 1);
						}
						func_284(uLocal_1790[0]);
						func_200(Local_1389.f_136, 16384);
						func_5(512);
						clear_entity_last_damage_entity(iVar1784);
						func_5(262144);
						func_25(Local_1389.f_136, 128);
						func_5(8192);
						func_42(&Local_1389, 128);
						func_94(&(Local_1389.f_35), "HOME_WLCMB", Global_35, *iParam0, 0, 0, 1, 1);
						func_701(19);
					}
					Jump @3369; //curOff = 2956
					func_619(iParam0, 0, 0);
					func_619(&Global_35, 0, *iParam0);
					if (!func_100(Local_1389.f_138, 0))
					{
						func_57(Local_1389.f_138, 1, 1);
					}
					func_629(1048576000, 1028443341, 0, 106);
					if (func_696(&Local_1674, 106))
					{
						func_697(iParam0);
						func_701(16);
					}
					Jump @3369; //curOff = 3046
					if (!func_100(Local_1389.f_138, 0))
					{
						func_57(Local_1389.f_138, 1, 1);
					}
					func_619(iParam0, 0, 0);
					func_619(&Global_35, 0, *iParam0);
					if (func_330(Global_35, &(Local_1618[1]), "plr", -1132719179, 0, 1, 0))
					{
						func_638(&(Local_386.f_690[0]->f_8));
						task_turn_ped_to_face_entity(*iParam0, Global_35, -1, -1082130432, -1082130432, -1082130432);
						display_radar(true);
						func_284(uLocal_1790[0]);
						func_25(Local_1389.f_136, 1073741824);
						func_701(17);
					}
					Jump @3369; //curOff = 3198
					func_619(iParam0, 0, 0);
					if (!func_100(Local_1389.f_138, 0))
					{
						func_57(Local_1389.f_138, 1, 1);
					}
					func_701(19);
					Jump @3369; //curOff = 3241
					if (func_353(0, 1, 0, 0))
					{
						if (func_8(Local_1389.f_136, 2))
						{
							if (func_100(Local_1389.f_138, 0))
							{
								func_240(Local_1389.f_138, 1);
							}
						}
						func_616(0);
						func_284(uLocal_1790[0]);
						func_615(0, 0);
						func_279(0, 1, 0);
						func_89(&iLocal_30, 1);
						func_139(8388608);
						func_701(20);
					}
					Jump @3369; //curOff = 3340
					if (func_100(Local_1389.f_138, 0))
					{
						func_240(Local_1389.f_138, 1);
					}
				}
				return 0;
			}
			default:
				break;
	}
}

int func_376(int iParam0)
{
	if (func_417())
	{
		return func_705(iParam0);
	}
	return func_706(iParam0);
}

int func_377(int iParam0)
{
	switch (iLocal_23)
	{
		case 0:
			if (!func_100(Local_1389.f_138, 0))
			{
				func_57(Local_1389.f_138, 1, 1);
			}
			if (!is_entity_dead(&(iLocal_1794[0])))
			{
				task_stand_still(&(iLocal_1794[0]), -1);
				func_173(&Local_1389, 1);
				func_707(&Local_1389, *iParam0, &(iLocal_1794[0]), 0);
				_0x06aade17334f7a40(&(iLocal_1794[0]), func_708());
				set_ped_config_flag(&(iLocal_1794[0]), 178, true);
				_0x931b241409216c1f(*iParam0, &(iLocal_1794[0]), 0);
			}
			func_589(0);
			func_279(0, 1, 1);
			iLocal_23 = 3;
			break;
		case 3:
			if (func_370(iParam0, 1, 0))
			{
				iLocal_23 = 9;
			}
			break;
		case 9:
			if (func_709(iParam0))
			{
				func_141(128);
				iLocal_23 = 10;
			}
			break;
		case 10:
			if (func_710(iParam0))
			{
				func_42(&Local_1389, 512);
				func_200(Local_1389.f_136, 256);
				func_29(Local_1389.f_138, 32);
				func_29(Local_1389.f_138, 128);
				func_31(Local_1389.f_138, 1);
				_0xb65e7f733956cf25(_0x112ddf56300bc6e5(func_157(Local_1389.f_138)));
				func_711(Local_1389.f_138, 0);
				door_system_set_door_state(1986792065, 1);
				func_712(1986792065, 1);
				iLocal_23 = 11;
			}
			break;
		case 11:
			break;
	}
	return 0;
}

void func_378(var uParam0)
{
	if (is_entity_dead(*uParam0))
	{
		return;
	}
	if (is_entity_a_mission_entity(*uParam0))
	{
		if (func_713(*uParam0) != 0)
		{
			iVar0 = get_blip_from_entity(*uParam0);
			if (does_blip_exist(iVar0))
			{
				remove_blip(&iVar0);
			}
			task_smart_flee_ped(*uParam0, Global_35, 1000f, -1, 0, 1077936128, 0);
			set_ped_keep_task(*uParam0, true);
		}
	}
}

bool func_379(bool bParam0)
{
	if (bParam0)
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	if (!func_186(Global_35, Global_1898092->f_26.f_5, 1, 0))
	{
		return true;
	}
	if (func_127(Global_1898092->f_26.f_2) && func_8(Global_1898092->f_26.f_2, 33554432))
	{
		return true;
	}
	return false;
}

void func_380(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
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
	return func_715(func_714(iParam0));
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

int func_387(int iParam0)
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

int func_388(int iParam0)
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

void func_389(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
{
	if (!func_127(iParam0))
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

bool func_390(int iParam0)
{
	if (decor_exist_on(*iParam0, "bLostLogs") && decor_get_bool(*iParam0, "bLostLogs"))
	{
		return false;
	}
	if (!_0x53784cea0159439b(*iParam0))
	{
		return false;
	}
	iVar0 = _0xce2acd6f602803e5(*iParam0);
	iVar1 = create_itemset(false);
	if (_get_entities_from_propset(iVar0, iVar1, -396171861, false, false) < 1)
	{
		destroy_itemset(iVar1);
		return false;
	}
	iVar2 = get_object_index_from_entity_index(_get_entity_from_item(get_indexed_item_in_itemset(0, iVar1)));
	destroy_itemset(iVar1);
	fVar3 = get_object_fragment_damage_health(iVar2, true);
	if (fVar3 < 0.7f)
	{
		decor_set_bool(*iParam0, "bLostLogs", true);
		func_716(459, 1);
		return false;
	}
	return true;
}

int func_391(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (!bParam8 && network_is_game_in_progress())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_225(vParam0))
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
		if (func_717(vParam0))
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
	func_718(iVar0, bParam8);
	return iVar0;
}

bool func_392(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

bool func_393(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_394(int iParam0)
{
	if (!func_393(iParam0))
	{
		return false;
	}
	return func_129(iParam0, 33554432);
}

bool func_395(int iParam0)
{
	if (!func_393(iParam0))
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

bool func_396(int iParam0)
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

void func_397(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_132(iParam0, 268435456);
	}
	else
	{
		func_185(iParam0, 268435456);
	}
	if (!bParam2)
	{
		func_132(iParam0, 1073741824);
	}
	else
	{
		func_185(iParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_132(iParam0, 536870912);
	}
	else
	{
		func_185(iParam0, 536870912);
	}
}

void func_398(int iParam0, float fParam1)
{
	iParam0->f_27 = fParam1;
}

void func_399(var uParam0, int iParam1)
{
	if (func_392(uParam0))
	{
		_0x9cf1836c03fb67a2(uParam0, iParam1);
	}
}

int func_400(char* sParam0, bool bParam1)
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

void func_401(int iParam0)
{
	func_133(&iLocal_17, iParam0);
}

bool func_402(int iParam0)
{
	return func_154(iLocal_17, iParam0);
}

bool func_403(var uParam0)
{
	return func_719(*uParam0, 1);
}

bool func_404()
{
	return func_720(&Global_1935630, 4096);
}

bool func_405()
{
	if ((!is_player_playing(player_id()) || is_ped_dead_or_dying(Global_35, true)) || _0xc5c395c60b542a3c(1))
	{
		return true;
	}
	return false;
}

bool func_406(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_721(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_722())
	{
		return func_721(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_721(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

void func_407(int iParam0)
{
	if (func_1() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_322(func_723(iVar0), 0))
		{
			if (is_ped_group_member(func_723(iVar0), func_724(), 1))
			{
				func_725(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

void func_408(int iParam0)
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

void func_409(int iParam0)
{
	Global_1898092->f_1 = (Global_1898092->f_1 || iParam0);
}

bool func_410(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_411(int iParam0)
{
	if (((func_412(iParam0, 1) && func_412(iParam0, 2)) && func_412(iParam0, 8)) && func_412(iParam0, 512))
	{
		return true;
	}
	return false;
}

bool func_412(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_413(int iParam0, int iParam1, int iParam2)
{
	if (func_1() != -1)
	{
		return 0;
	}
	if (!func_119(iParam0, 0))
	{
		return 0;
	}
	if (!_does_volume_exist(iParam1))
	{
		return 0;
	}
	iVar0 = func_159(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	_0xe2be6ffa4a13cbb0(iParam1, iVar0, iParam2);
	return 1;
}

void func_414(int iParam0)
{
	if (*iParam0 != 0)
	{
		request_model(*iParam0, false);
	}
}

char* func_415(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (func_10(Local_1389.f_136, 128))
			{
				if (func_21(64))
				{
					return "PBL_sitting_action";
				}
				else
				{
					return "PBL_intro_idle";
				}
			}
			else
			{
				switch (iLocal_18)
				{
					case 1:
						return "PBL_BASE";
					case 4:
						return "PBL_get_money";
					case 3:
						return "PBL_intro_idle";
					default:
						break;
				}
			}
			break;
		case 2:
			return "PBL_ENTER";
	}
	return "";
}

void func_416(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	func_726(uParam0, sParam1, sParam2, iParam3);
	func_727(uParam0);
}

bool func_417()
{
	return func_8(Local_1389.f_136, 128);
}

int func_418(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 13;
				case 1:
					return 14;
				case 2:
					return 15;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 16;
				case 1:
					return 17;
				case 2:
					return 18;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 19;
				case 1:
					return 20;
				case 2:
					return 21;
				default:
					break;
			}
			break;
	}
	return -1;
}

Vector3 func_419(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iLocal_18)
			{
				case 1:
					switch (iParam1)
					{
						case 0:
							return -440.09f, 502.1f, 97.87f;
						case 1:
							return -440.09f, 502.1f, 98.1f;
						case 2:
							return -440.1f, 502.1f, 98.32f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 0:
							return -440.09f, 502.06f, 97.87f;
						case 1:
							return -440.09f, 502.06f, 98.1f;
						case 2:
							return -440.1f, 502.06f, 98.32f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							return -436.71f, 501.08f, 97.87f;
						case 1:
							return -436.71f, 501.08f, 98.1f;
						case 2:
							return -436.71f, 501.08f, 98.32f;
						default:
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iLocal_18)
			{
				case 1:
					switch (iParam1)
					{
						case 0:
							return -438.7f, 502.13f, 97.87f;
						case 1:
							return -438.7f, 502.13f, 98.1f;
						case 2:
							return -438.71f, 502.13f, 98.32f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 0:
							return -438.69f, 502.09f, 97.87f;
						case 1:
							return -438.69f, 502.09f, 98.1f;
						case 2:
							return -438.7f, 502.09f, 98.32f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							return -443.87f, 493.97f, 97.99f;
						case 1:
							return -443.87f, 493.98f, 98.23f;
						case 2:
							return -443.87f, 493.97f, 98.45f;
						default:
							break;
					}
					break;
			}
			break;
		case 2:
			switch (iLocal_18)
			{
				case 2:
					switch (iParam1)
					{
						case 0:
							return -431.66f, 499.88f, 98.03f;
						case 1:
							return -431.66f, 499.89f, 98.27f;
						case 2:
							return -431.67f, 499.89f, 98.49f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							return -433.83f, 499.98f, 98.8f;
						case 1:
							return -433.83f, 499.98f, 99.04f;
						case 2:
							return -433.83f, 499.97f, 99.26f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_420(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iLocal_18)
			{
				case 1:
					switch (iParam1)
					{
						case 0:
							return 9.08f, 0f, -0.18f;
						case 1:
							return 9.08f, 0f, -0.18f;
						case 2:
							return 9.08f, 0f, -0.18f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 0:
							return 9.08f, 0f, -0.18f;
						case 1:
							return 9.08f, 0f, -0.18f;
						case 2:
							return 9.08f, 0f, -0.18f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							return 9.08f, 0f, -89.58f;
						case 1:
							return 9.08f, 0f, -89.58f;
						case 2:
							return 9.08f, 0f, -89.58f;
						default:
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iLocal_18)
			{
				case 1:
					switch (iParam1)
					{
						case 0:
							return 9.08f, 0f, -0.18f;
						case 1:
							return 9.08f, 0f, -0.18f;
						case 2:
							return 9.08f, 0f, -0.18f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 0:
							return 9.08f, 0f, -0.18f;
						case 1:
							return 9.08f, 0f, -0.18f;
						case 2:
							return 9.08f, 0f, -0.18f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							return 9.08f, 0f, -179.49f;
						case 1:
							return 9.08f, 0f, -179.49f;
						case 2:
							return 9.08f, 0f, -179.49f;
						default:
							break;
					}
					break;
			}
			break;
		case 2:
			switch (iLocal_18)
			{
				case 2:
					switch (iParam1)
					{
						case 0:
							return 9.08f, 0f, -87.81f;
						case 1:
							return 9.08f, 0f, -87.81f;
						case 2:
							return 9.08f, 0f, -87.81f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							return 9.08f, 0f, -179.57f;
						case 1:
							return 9.08f, 0f, -179.57f;
						case 2:
							return 9.08f, 0f, -179.57f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_421()
{
	return -439.4036f, 502.0066f, 99.1947f;
}

float func_422()
{
	return 1.43f;
}

Vector3 func_423()
{
	return -439.43f, 503.22f, 97.54f;
}

Vector3 func_424()
{
	return -107.43f, 0.07f, 1.43f;
}

bool func_425(var uParam0)
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

Vector3 func_426()
{
	return -443.438f, 498.2621f, 98.18685f;
}

void func_427(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

bool func_428(var uParam0)
{
	if (!func_429(uParam0->f_1))
	{
		return false;
	}
	if (uParam0->f_12 != 0)
	{
		if (!func_429(uParam0->f_12))
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

bool func_429(int iParam0)
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

int func_430(var uParam0, var uParam1)
{
	vVar0 = { *uParam0 };
	if (func_728(&uParam1))
	{
		return 1;
	}
	if (!func_729(&vVar0, 1, 10, 0))
	{
		return 0;
	}
	*uParam0 = { vVar0 };
	return 1;
}

bool func_431(var uParam0)
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

int func_432(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_730(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_433(int iParam0)
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

bool func_434(var uParam0)
{
	return func_154(*uParam0, 4);
}

bool func_435(var uParam0)
{
	return func_154(*uParam0, 64);
}

bool func_436(var uParam0)
{
	return func_154(*uParam0, 8);
}

bool func_437(var uParam0)
{
	return func_154(*uParam0, 128);
}

bool func_438(var uParam0)
{
	return func_154(*uParam0, 2048);
}

void func_439(int iParam0, bool bParam1)
{
	set_ped_config_flag(iParam0, 130, !bParam1);
	set_ped_config_flag(iParam0, 178, bParam1);
}

bool func_440(var uParam0)
{
	return func_154(*uParam0, 1024);
}

bool func_441(var uParam0)
{
	return func_154(*uParam0, 256);
}

void func_442(int iParam0, bool bParam1)
{
	set_ped_config_flag(iParam0, 146, !bParam1);
	set_ped_config_flag(iParam0, 148, !bParam1);
}

bool func_443(var uParam0)
{
	return func_154(*uParam0, 512);
}

bool func_444(var uParam0)
{
	return func_154(*uParam0, 4096);
}

void func_445(int iParam0, int iParam1)
{
	if (!func_99(iParam0))
	{
		return;
	}
	(*Global_1895087)[iParam0]->f_1 = iParam1;
}

bool func_446(int iParam0)
{
	if (!func_99(iParam0))
	{
		return false;
	}
	if (!func_55(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_447(int iParam0, bool bParam1)
{
	if (!func_99(iParam0))
	{
		return false;
	}
	if ((func_55(iParam0, 1) && !func_302(iParam0)) && func_731(iParam0))
	{
		return false;
	}
	if (!func_55(iParam0, 2))
	{
		return false;
	}
	if (!bParam1)
	{
		if (!func_119(iParam0, 0))
		{
			return false;
		}
	}
	return true;
}

void func_448(int iParam0)
{
	if (!func_99(iParam0))
	{
		return;
	}
	(*Global_1895087)[iParam0]->f_2 = get_id_of_this_thread();
}

void func_449(var uParam0, bool bParam1)
{
	vVar0 = { *uParam0 };
	vVar0.f_2 = (vVar0.z + 5f);
	if (bParam1)
	{
		if (!func_729(&vVar0, 50, 10, 0))
		{
		}
		else
		{
			*uParam0 = { vVar0 };
		}
	}
}

float func_450(float fParam0)
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

bool func_451(var uParam0)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return false;
	}
	return _is_anim_scene_loaded(*uParam0, true, false);
}

int func_452(var uParam0)
{
	return uParam0;
}

bool func_453(int iParam0)
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

void func_454(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_99(iParam0))
	{
		return;
	}
	if (!func_55(iParam0, 1))
	{
		return;
	}
	if (!func_55(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_302(iParam0)) && func_731(iParam0))
	{
		return;
	}
	func_31(iParam0, 1);
	func_732(iParam0);
	if (func_158(func_157(iParam0)))
	{
		iVar0 = func_159(iParam0);
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
		func_31(iParam0, 16);
	}
	if (func_55(iParam0, 128) && !bParam3)
	{
		func_711(iParam0, 0);
	}
}

int func_455(int iParam0)
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

int func_456(int iParam0)
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

int func_457(int iParam0)
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

int func_458(int iParam0)
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

int func_459()
{
	return 676312963;
}

int func_460(int iParam0)
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

int func_461()
{
	return -886879462;
}

char* func_462(int iParam0)
{
	if (!func_127(iParam0))
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

var func_463(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
		return func_733(sParam0, sParam1, iParam2, iParam3, iParam4, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13);
	}
	return func_734(sParam0, sParam1, iParam2, iParam3, iParam4, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13);
}

bool func_464(int iParam0)
{
	return func_8(iParam0, 1);
}

void func_465(int iParam0, bool bParam1)
{
	if (Global_1572887->f_10 && func_1() == 0)
	{
		return;
	}
	if (func_735(128))
	{
		return;
	}
	if (!func_736(iParam0))
	{
		return;
	}
	if (func_129(iParam0, 32))
	{
		return;
	}
	func_130(iParam0, 32);
	func_480(Global_1935630, 8192);
	func_738(func_737(-1532769513, -36357794), 1);
	switch (func_739(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_738(func_737(-1532769513, 213519508), 1);
			break;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_738(func_737(-1532769513, 242571679), 1);
			Jump @354; //curOff = 263
			func_738(func_737(-1532769513, 1349449307), 1);
			Jump @354; //curOff = 285
			func_738(func_737(-1532769513, 1140362070), 1);
			Jump @354; //curOff = 307
			func_738(func_737(-1532769513, -172330899), 1);
			Jump @354; //curOff = 329
			func_738(func_737(-1532769513, -910218296), 1);
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
				func_130(iParam0, 64);
			}
		}

void func_466(int iParam0, int iParam1)
{
	iVar0 = func_740(iParam0);
	if (iVar0 != 0 && func_8(iParam0, 1))
	{
		vVar1 = { func_741(iParam0) };
		if (iParam1 < 1)
		{
			iParam1 = func_24(iParam0);
		}
		func_742(iParam0, iParam1);
		iParam1 = (iParam1 - 1);
		if (func_8(iParam0, 67108864))
		{
			_0xe057fea9a22eb3ee(iVar0);
		}
		_0x1392105da88bbffb(iVar0, vVar1.x, vVar1.y, 0, iParam1);
		func_25(iParam0, 67108864);
	}
}

float func_467()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_468(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_469(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_470(var uParam0)
{
	if (!func_403(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_544(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_4() - round((uParam0->f_1 * 1000f)));
}

int func_471(bool bParam0, bool bParam1, bool bParam2)
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

void func_472(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_132(iParam0, 134217728);
	}
	else
	{
		func_185(iParam0, 134217728);
	}
}

bool func_473(int iParam0, var uParam1)
{
	if (!is_ped_fleeing(*uParam1))
	{
		return false;
	}
	return true;
}

bool func_474(int iParam0)
{
	if (((iParam0->f_16 == 3 || iParam0->f_16 == 1) || iParam0->f_16 == 6) || iParam0->f_16 == 5)
	{
		return true;
	}
	return false;
}

float func_475(int iParam0)
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

bool func_476(int iParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, float fParam7)
{
	uVar10 = 30;
	Stack.Push(&uVar10);
	Call_Loc(iParam1);
	iVar41 = func_743(&iVar0, &uVar10, 9, vParam2, fParam5, 0, 1, 0, -1, 1, 0, -1082130432, 0, 0);
	if (iVar41 <= 0)
	{
		return false;
	}
	iVar42 = func_744(&iVar0, vParam2, 0, 1, 0, -1);
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
			iVar42 = func_744(&iVar0, vParam2, 0, 1, 0, -1);
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

char* func_477(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_478(int iParam0, int iParam1)
{
	iVar0 = func_745(iParam0, iParam1);
	if (does_entity_exist(iVar0) && is_entity_a_ped(iVar0))
	{
		return get_ped_index_from_entity_index(iVar0);
	}
	return 0;
}

void func_479(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_480(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_481(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	iVar0 = func_746(iParam0, 4, iParam2);
	if (does_entity_exist(iVar0))
	{
		*iParam1 = get_entity_model(iVar0);
		return true;
	}
	iVar1 = func_746(iParam0, 5, iParam2);
	if (does_entity_exist(iVar1))
	{
		*iParam1 = get_entity_model(iVar1);
		return true;
	}
	return false;
}

bool func_482(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if (is_entity_dead(iParam0))
		{
			return true;
		}
		else if (!is_vehicle_driveable(iParam0, false, false))
		{
			if (!is_entity_on_fire(iParam0))
			{
				return true;
			}
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_483(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_262(&(iParam0->f_18));
}

void func_484(int iParam0, bool bParam1)
{
	func_747(iParam0, 0, bParam1);
	func_747(iParam0, 1, bParam1);
	func_747(iParam0, 2, bParam1);
}

void func_485(int* iParam0)
{
	if (!is_entity_dead(*iParam0))
	{
		_0xe98d55c5983f2509(*iParam0);
		set_ped_config_flag(*iParam0, 297, false);
	}
}

void func_486(int* iParam0, var uParam1)
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
	func_748(iParam0, uParam1, 1);
	func_576(uParam1, 0, 1, 1, 0);
	_copy_memory(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		_copy_memory((*uParam1)[iVar0], &Var22, 17);
		iVar0++;
	}
}

void func_487(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = get_game_timer();
	func_749(iParam0, iParam1, bParam2);
}

int func_488(int iParam0)
{
	return iParam0;
}

void func_489(int iParam0)
{
	if (!func_750(iParam0))
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

int func_490()
{
	switch (func_1())
	{
		case 0:
			return get_player_ped(player_id());
		default:
			break;
	}
	return Global_35;
}

bool func_491(int iParam0, int iParam1)
{
	if (func_751(iParam0, 1, 1))
	{
		return func_154(Global_1955500[iParam0], iParam1);
	}
	return false;
}

void func_492(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
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

bool func_493()
{
	return (Global_1894899 & 1 != 0 && func_752() != -1);
}

bool func_494(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_495(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
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
	return func_753(iParam0, &Var0);
}

int func_496(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_497(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!func_127(iParam0))
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

void func_498(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_132(iParam0, 64);
	}
	else
	{
		func_185(iParam0, 64);
	}
}

void func_499(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_132(iParam0, 1048576);
	}
	else
	{
		func_185(iParam0, 1048576);
	}
}

int func_500(int iParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_157(iVar2) != 0 && _0x800df3fc913355f3(func_159(iVar2)))
		{
			if (func_159(iVar2) == iVar0)
			{
				return iVar2;
			}
		}
		iVar1++;
	}
	return -1;
}

bool func_501(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = func_502(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

int func_502(int iParam0)
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

void func_503(int iParam0)
{
	iParam0 = func_754(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_755(iParam0, 32);
	func_756();
}

void func_504(int iParam0)
{
	iParam0 = func_754(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_505(iParam0);
	if (!_does_thread_exist(iVar0))
	{
		func_507(iParam0);
	}
	else if (!is_thread_active(iVar0, false))
	{
		func_507(iParam0);
	}
}

int func_505(int iParam0)
{
	iParam0 = func_754(iParam0);
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

bool func_506(int iParam0)
{
	iParam0 = func_754(iParam0);
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

void func_507(int iParam0)
{
	iParam0 = func_754(iParam0);
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

bool func_508(var uParam0, char* sParam1)
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

void func_509(var uParam0, int iParam1, char* sParam2)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return;
	}
	if (!func_757(uParam0, sParam2))
	{
		return;
	}
	remove_anim_scene_entity(*uParam0, sParam2, iParam1);
}

void func_510(var uParam0, char* sParam1, bool bParam2)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return;
	}
	if (!func_508(uParam0, sParam1))
	{
		return;
	}
	_set_anim_scene_playback_list_bool(*uParam0, sParam1, bParam2);
}

void func_511(var uParam0, float fParam1)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return;
	}
	set_anim_scene_rate(*uParam0, fParam1);
}

void func_512(var uParam0, char* sParam1)
{
	func_758(uParam0, sParam1, 1);
}

int func_513(int iParam0, int iParam1, int iParam2)
{
	vVar0 = { get_entity_coords(iParam1, false, false) };
	return func_624(iParam0, vVar0, iParam2);
}

char* func_514(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return "PBL_BRKOUT_F_KNEEL";
				case 3:
					return "PBL_BRKOUT_BL_KNEEL";
				case 2:
					return "PBL_BRKOUT_BR_KNEEL";
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return "PBL_BRKOUT_F_STAND_01";
				case 3:
					return "PBL_BRKOUT_BL_STAND_01";
				case 2:
					return "PBL_BRKOUT_BR_STAND_01";
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return "PBL_BRKOUT_F_STAND_02";
				case 3:
					return "PBL_BRKOUT_BL_STAND_02";
				case 2:
					return "PBL_BRKOUT_BR_STAND_02";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_515(int iParam0, bool bParam1, int iParam2)
{
	func_759(iParam2);
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
		iParam0->f_13 = func_760(0);
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
							func_132(iParam0, 33554432);
						}
					}
					else if (!*iParam0 & 8192 != 0)
					{
						if (func_761(1))
						{
							func_132(iParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_35) && (!func_761(1) || *iParam0 & 8192 != 0))
				{
					func_185(iParam0, 33554432);
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
			if (func_762(iParam0))
			{
				iParam0->f_15 = func_4();
			}
		}
		else if (iParam0->f_15 > 0)
		{
			if ((func_4() - iParam0->f_15) > 500)
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
	func_763(iParam0);
}

bool func_516(int iParam0, int iParam1)
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
			if (!func_764(iParam0, iParam1, iVar2))
			{
				return false;
			}
			if (func_765(iParam0, iVar2) <= func_766(iParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_517(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		iParam1->f_10 = iParam0;
	}
	if (func_767(iParam2, 1, 1, 1, 0))
	{
		func_132(iParam1, 2048);
	}
	iParam1->f_16 = iParam2;
	func_472(iParam1, 1);
	func_283();
}

bool func_518(int iParam0, int iParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_355(iParam0, !*iParam1 & 268435456 != 0, !*iParam1 & 536870912 != 0, !*iParam1 & 1073741824 != 0, 0, 0))
		{
			if (iParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (iParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_768(iParam1);
			if (func_769(iParam1, iParam0, fVar0, fVar1))
			{
				if (iParam1->f_2 == 0)
				{
					iParam1->f_2 = get_game_timer();
				}
				iVar2 = (get_game_timer() - iParam1->f_2);
				iVar3 = func_770(iParam1);
				if (iParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_472(iParam1, 1);
						return true;
					}
					else if (iParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_472(iParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_519(int iParam0, int iParam1, int iParam2)
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
	if (func_771(iParam1, !*iParam2 & 268435456 != 0, !*iParam2 & 536870912 != 0, !*iParam2 & 1073741824 != 0, 0))
	{
		if (iParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (iParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_768(iParam2);
		if (func_769(iParam2, iParam0, fVar0, fVar1))
		{
			if (iParam2->f_2 == 0)
			{
				iParam2->f_2 = get_game_timer();
			}
			if (iParam2->f_2 != 0)
			{
				if (get_game_timer() - iParam2->f_2) > func_770(iParam2)
				{
					func_472(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_520(int iParam0, int iParam1)
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
	if (func_764(iParam0, iParam1, iVar1))
	{
		if (iParam1->f_3 == 0)
		{
			iParam1->f_3 = get_game_timer();
		}
		else if (get_game_timer() - iParam1->f_3) > func_770(iParam1)
		{
			fVar3 = func_768(iParam1);
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

bool func_521(int iParam0, float fParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_4();
	iVar1 = (iVar0 - iParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_522(var uParam0, int iParam1, int iParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_772(iParam2);
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
			if (func_530(iParam2, iParam1))
			{
				func_472(iParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_523(var uParam0, int iParam1, int iParam2)
{
	if (iParam2->f_12 < IntToFloat(func_773(iParam2)))
	{
		if ((is_weapon_valid(Global_1935630->f_46) && !_0x5809dbca0a37c82b(Global_1935630->f_46)) || get_current_ped_vehicle_weapon(Global_35, &uVar0))
		{
			if (func_530(iParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_472(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_524(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_774(iParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, iParam2->f_22))
				{
					func_472(iParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, iParam2->f_27))
				{
					func_472(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, iParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, iParam2->f_26, &vVar4, 0, 0);
					if (func_775(iParam1, vVar0, vVar4))
					{
						func_472(iParam2, 1);
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
					func_472(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, iParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, iParam2->f_26, &vVar7, 0, 0);
					if (func_775(iParam1, vVar0, vVar7))
					{
						func_472(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_525(int iParam0, int iParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *iParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_764(iParam0, iParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_776(&(Global_1935630->f_34[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_777(&(Global_1935630->f_34[iVar0])))
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
			if (func_778(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_779(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_780(iParam1, iParam0, fVar1, iVar0))
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

bool func_526(int iParam0, int iParam1)
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

bool func_527(int iParam0, int iParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_4();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_528(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_781(iVar0, &iVar2))
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
	if (func_782(iVar0, iParam0))
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

int func_529(int iParam0, int iParam1)
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

bool func_530(int iParam0, int iParam1)
{
	if (func_783(iParam0))
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

bool func_531(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_292(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_532()
{
}

bool func_533(int iParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_35);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_784(iVar0, iParam1, vVar1))
		{
			iParam0->f_9 = func_4();
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
						if (func_685(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								iParam0->f_9 = func_4();
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

bool func_534()
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
	if ((func_4() - Global_1935630->f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_535(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0->f_14))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_766(iParam0);
	if (iParam0->f_12 > func_785(iParam0) && iParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_786(iParam1);
	iVar1 = func_787(iParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((iParam0->f_12 <= fVar0 || ((_0x06087579e7aa85a9(iParam1, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam1, Global_35, true, 0) == 1)) || ((_0x06087579e7aa85a9(iParam1, iParam0->f_14, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, iParam0->f_14, 17)) && _0x7f9b9791d4cb71f6(iParam1, iParam0->f_14, true, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_536(int iParam0, int iParam1, int iParam2)
{
	if (iParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *iParam2 & 256 != false;
	bVar1 = *iParam2 & 524288 != false;
	bVar2 = *iParam2 & 128 != false;
	return func_788(iParam0, iParam1, bVar0, bVar2, iParam2->f_12, bVar1);
}

bool func_537(int iParam0, int iParam1)
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
		if (func_789(iParam0, iParam1, 1))
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
					if (!func_790(iParam1, iParam0))
					{
						if (func_685(iVar4, Global_36, 1) < 7f)
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

bool func_538(int iParam0, int iParam1)
{
	if (!func_791(0))
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

bool func_539(int iParam0, int iParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_4();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_540(int iParam0, int iParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

bool func_541(int iParam0, int iParam1)
{
	if (!is_ped_human(iParam0))
	{
		return false;
	}
	if (iParam1->f_4 == 0)
	{
		iParam1->f_4 = func_4();
	}
	else if (func_4() - iParam1->f_4) > func_792(iParam1)
	{
		return func_277(iParam0, iParam1, 0, -1082130432);
	}
	return false;
}

bool func_542(int iParam0, int iParam1)
{
	fVar0 = func_793(iParam1);
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
		fVar2 = func_794(_0x2ba9d7bf629f920c(iParam0), (fVar0 + 5f));
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
					if (func_795())
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

bool func_543(int iParam0, int iParam1)
{
	if (func_595(iParam0))
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

bool func_544(var uParam0)
{
	return func_719(*uParam0, 2);
}

void func_545(var uParam0)
{
	if (!func_403(uParam0))
	{
	}
	if (func_544(uParam0))
	{
		uParam0->f_1 = (func_467() - uParam0->f_2);
		uParam0->f_2 = 0f;
		func_469(uParam0, 2);
	}
}

void func_546(var uParam0)
{
	if (!func_403(uParam0))
	{
	}
	if (!func_544(uParam0))
	{
		uParam0->f_2 = (func_467() - uParam0->f_1);
		func_468(uParam0, 2);
	}
}

bool func_547(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_796(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_797((386 + iVar28), 1);
			if (func_798(iParam0, &Var0, iVar5, 0))
			{
				if (func_799(iParam0, &Var6, iVar5))
				{
					Var29 = { func_800(iParam0, Var0, iVar5, 0) };
					func_801(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_802(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_803(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_804(iParam0, iParam1);
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

bool func_550(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, bool bParam5, bool bParam6)
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

bool func_551(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_552(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_553(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_554(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_496(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_555(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_556(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_557(int iParam0, int iParam1)
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

void func_558(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_805(iParam0, iParam6);
	func_806(iParam0, iParam5);
	func_807(iParam0, iParam4);
	func_808(iParam0, iParam3);
	func_809(iParam0, iParam2);
	func_810(iParam0, iParam1);
}

bool func_559(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_337(iParam1) || !func_337(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

int func_560(int iParam0, int iParam1, int iParam2)
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

int func_561(int* iParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	iVar0 = iParam9;
	func_811(&iVar0);
	if (func_147(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_812(iParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_147(iVar0, 134217728))
	{
		func_813(iParam1, uParam3, iParam0);
	}
	if (!*iParam4)
	{
		if (!is_bit_set(*iParam1, 25))
		{
			if (is_bit_set(*iParam1, 24))
			{
				if (!func_814(558))
				{
					func_716(558, 0);
				}
				set_bit(iParam1, 24);
				set_bit(iParam1, 25);
			}
		}
	}
	return iVar1;
}

char* func_562(int iParam0)
{
	if (func_815(iParam0))
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

void func_563(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
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
		if (func_285(iParam0->f_6))
		{
			if (is_bit_set(*iParam0, 1))
			{
				func_816(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_817(iParam0->f_6, iParam0->f_5, 0);
			}
			func_818(iParam0->f_6, 0, 1);
		}
		else
		{
			set_bit(iParam0, 14);
		}
		set_bit(iParam0, 0);
	}
	else
	{
		func_819(iParam0, iParam0->f_5);
		if (!is_bit_set(*iParam0, 13))
		{
			set_bit(iParam0, 0);
		}
	}
	set_bit(iParam0, 15);
}

void func_564(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_820(iParam0, 13))
	{
		func_821(iParam0, 0);
	}
	else
	{
		func_822(iParam0, 0);
	}
	if (func_285(iParam0->f_6))
	{
		if (bParam2)
		{
			func_286(&(iParam0->f_6), 0, 1);
		}
	}
}

void func_565(int* iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_820(iParam0, 4))
		{
			func_286(&(iParam0->f_6), 1, 1);
			func_821(iParam0, 4);
		}
	}
	else if (func_820(iParam0, 4))
	{
		func_822(iParam0, 4);
		func_821(iParam0, 14);
	}
}

void func_566(int* iParam0, int iParam1)
{
	iParam0->f_14 = iParam1;
}

void func_567(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_821((*uParam0)[iVar0], 9);
		iVar0++;
	}
}

char* func_568(int* iParam0)
{
	switch (iParam0->f_15)
	{
		case 0:
			if (func_121(iParam0, 16))
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
			if (func_121(iParam0, 16))
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
					return func_571(cVar4);
				case 8:
					return "LAW_LOW_SEVERITY_ANTAGONIZE";
			}
			return "LAW_LOW_SEVERITY_ANTAGONIZE";
	}
	return "DEFUSE_ARGUMENT_TOUGH";
}

char* func_569(int* iParam0)
{
	switch (iParam0->f_15)
	{
		case 0:
			if (func_121(iParam0, 16))
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
			if (func_121(iParam0, 16))
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

float func_570(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

char* func_571(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

bool func_572(int iParam0, bool bParam1)
{
	if (func_110(iParam0, 0, 1))
	{
		return (is_scripted_speech_playing(iParam0) || (bParam1 && is_any_speech_playing(iParam0)));
	}
	return false;
}

bool func_573(float fParam0)
{
	if (func_588(1))
	{
		return true;
	}
	if (func_403(&uLocal_0) && !func_278(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

var func_574(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_575(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_823(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

void func_576(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_285((*uParam0)[iVar0]->f_6))
			{
				if (!bParam4 && is_bit_set(uParam0[iVar0], 11))
				{
				}
				else
				{
					func_286(&((*uParam0)[iVar0]->f_6), 1, 1);
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

char* func_577()
{
	return "HMSTD_LOITER";
}

void func_578(char* sParam0, bool bParam1, bool bParam2)
{
	stop_scripted_conversation(sParam0, bParam1, bParam2);
}

void func_579()
{
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (iVar1 == 0)
		{
		}
		else if (!func_21(func_824(iVar1)))
		{
			if (func_21(1024))
			{
				if (func_21(func_825(iVar1)))
				{
					_0xa3db37edf9a74635(get_player_index(), &(iLocal_1768[iVar1]), 3, 2, 1);
					_0xa3db37edf9a74635(get_player_index(), &(iLocal_1768[iVar1]), 4, 2, 1);
				}
				else
				{
					func_279(iVar1, 0, 0);
				}
				func_141(func_824(iVar1));
			}
		}
		else if (!func_21(1024))
		{
			if (func_21(func_825(iVar1)))
			{
				_0xa3db37edf9a74635(get_player_index(), &(iLocal_1768[iVar1]), 3, 2, 0);
				iVar0 = 0;
				if (decor_exist_on(&(iLocal_1768[iVar1]), "interactNeg"))
				{
					iVar0 = decor_get_int(&(iLocal_1768[iVar1]), "interactNeg");
				}
				if (iVar0 >= 3)
				{
					_0xa3db37edf9a74635(get_player_index(), &(iLocal_1768[iVar1]), 4, 2, 1);
				}
				else
				{
					_0xa3db37edf9a74635(get_player_index(), &(iLocal_1768[iVar1]), 4, 2, 0);
				}
			}
			else
			{
				func_589(iVar1);
			}
			func_142(func_824(iVar1));
		}
		iVar1++;
	}
}

void func_580(int iParam0, bool bParam1)
{
	if (!func_21(func_825(iParam0)))
	{
		if (func_21(func_587(iParam0)))
		{
			if (func_584(iParam0, bParam1))
			{
				func_827(&(iLocal_1768[iParam0]), func_826(iParam0), func_825(iParam0), Local_40[iParam0], Local_125[iParam0], 1, 980351091);
			}
		}
	}
}

float func_581(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_582(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

void func_583(char* sParam0, bool bParam1)
{
	func_578(sParam0, bParam1, 0);
}

bool func_584(int iParam0, bool bParam1)
{
	if (!func_353(0, 1, &(iLocal_1768[iParam0]), 1))
	{
		return false;
	}
	if (is_any_speech_playing(&(iLocal_1768[iParam0])))
	{
		return false;
	}
	if (func_354(func_585(iParam0, bParam1)))
	{
		return false;
	}
	if (func_354(func_586(iParam0, bParam1)))
	{
		return false;
	}
	return true;
}

char* func_585(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iLocal_18)
			{
				case 1:
					return "HMSTD_S1_POS1";
				case 2:
					return "HMSTD_S1_POS2";
				case 3:
					if (bParam1)
					{
						return "HMSTD_S1_POS3A";
					}
					else
					{
						return "HMSTD_S1_POS3B";
					}
					break;
			}
			break;
		case 2:
			switch (iLocal_18)
			{
				case 1:
					return "HMSTD_S2_POS1";
				case 2:
					return "HMSTD_S2_POS2";
				case 3:
					if (bParam1)
					{
						return "HMSTD_S2_POS3A";
					}
					else
					{
						return "HMSTD_S2_POS3B";
					}
					break;
			}
			break;
	}
	return "";
}

char* func_586(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iLocal_18)
			{
				case 1:
					return "HMSTD_S1_NEG1";
				case 2:
					return "HMSTD_S1_NEG2";
				case 3:
					if (bParam1)
					{
						return "HMSTD_S1_NEG3A";
					}
					else
					{
						return "HMSTD_S1_NEG3B";
					}
					break;
			}
			break;
		case 2:
			switch (iLocal_18)
			{
				case 1:
					return "HMSTD_S2_NEG1";
				case 2:
					return "HMSTD_S2_NEG2";
				case 3:
					if (bParam1)
					{
						return "HMSTD_S2_NEG3A";
					}
					else
					{
						return "HMSTD_S2_NEG3B";
					}
					break;
			}
			break;
	}
	return "";
}

int func_587(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 524288;
		case 2:
			return 1048576;
		default:
			break;
	}
	return 0;
}

bool func_588(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

void func_589(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_828(iParam0, 0, func_562(7));
	(*Local_125[iParam0])[0]->f_14 = 0;
	func_822((*Local_125[iParam0])[0], 1);
	func_747(iParam0, 0, !func_50(8388608));
	func_829(iParam0, 0, 0);
	func_828(iParam0, 1, func_562(10));
	func_747(iParam0, 1, 1);
	func_829(iParam0, 1, 0);
	func_828(iParam0, 2, func_562(12));
	func_829(iParam0, 2, 1);
	func_830(iParam0);
}

void func_590(var uParam0)
{
	uParam0->f_135 = "";
	uParam0->f_5 = "";
	func_49(8192);
}

char* func_591()
{
	switch (iLocal_18)
	{
		case 1:
			return "HMSTD_IG1DADb";
		case 2:
			if (!func_592(&iLocal_1794))
			{
				return "HOME_ATAKILO";
			}
			else if (func_27(8))
			{
				return "HOME_BYE_2B";
			}
			else
			{
				return "HOME_BYE_2A";
			}
			break;
		case 3:
			if (func_8(Local_1389.f_136, 128))
			{
				return "HOME_BYE_3B";
			}
			else if (func_8(Local_1389.f_136, 256))
			{
				return "HOME_BYE_3AY";
			}
			else
			{
				return "HOME_BYE_3AN";
			}
			break;
		case 4:
			return "HOME_BYE_4";
	}
	return "";
}

bool func_592(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (!is_entity_dead(iParam0[iVar0]))
		{
			if (_0x61914209c36efddb(iParam0[iVar0]) == 0)
			{
				if (!is_ped_fleeing(iParam0[iVar0]))
				{
					return false;
				}
			}
		}
		iVar0++;
	}
	return true;
}

char* func_593()
{
	switch (iLocal_18)
	{
		case 1:
			return "HMSTD_1_NEG_ILO";
		case 2:
			return "HOME2_NEG_ILO";
		case 3:
			return "HMSTD_S3_ILOANT";
		case 4:
			return "HMSTD_4_NEG_ILO";
	}
	return "";
}

bool func_594()
{
	if (func_27(2))
	{
		return true;
	}
	switch (iLocal_18)
	{
		case 3:
			if (func_8(Local_1389.f_136, 2))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_595(int iParam0)
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

char* func_596()
{
	switch (iLocal_18)
	{
		case 1:
			return "HMSTD_S1_AMB1";
		case 2:
			return "HMSTD_S1_AMB2";
		case 3:
			if (!func_27(8))
			{
				if (!func_27(8192))
				{
					if (!func_27(1024) && Global_36.f_2 < 100f)
					{
						func_5(1024);
						return "HMSTD_S1_DIR";
					}
					else
					{
						return "HMSTD_S1_AMB3A";
					}
				}
				else
				{
					return "HMSTD_S1_AMB3C";
				}
			}
			else
			{
				return "HMSTD_S1_AMB3B";
			}
			break;
	}
	return "HMSTD_S1_AMB1";
}

char* func_597()
{
	switch (iLocal_18)
	{
		case 1:
			return "HMSTD_S2_AMB1";
		case 2:
			return "HMSTD_S2_AMB2";
		case 3:
			if (!func_27(8))
			{
				if (!func_27(8192))
				{
					if (!func_27(1024) && Global_36.f_2 < 100f)
					{
						func_5(1024);
						return "HMSTD_S2_DIR";
					}
					else
					{
						return "HMSTD_S2_AMB3A";
					}
				}
				else
				{
					return "HMSTD_S2_AMB3C";
				}
			}
			else
			{
				return "HMSTD_S2_AMB3B";
			}
			break;
	}
	return "HMSTD_S2_AMB1";
}

void func_598()
{
	if (!func_831(1986792065))
	{
	}
	if (!does_entity_exist(iVar1853))
	{
		iLocal_1855 = func_832(1986792065, 1, 0);
	}
	if (!does_entity_exist(iVar1853))
	{
	}
	iVar0 = door_system_get_door_state(1986792065);
	if (iVar0 == 0 || iVar0 == -1)
	{
		if (func_833(iVar1853))
		{
			func_712(1986792065, 1);
		}
	}
	else if (func_15(64))
	{
		func_599(1986792065, 0, 1);
	}
}

void func_599(int iParam0, int iParam1, bool bParam2)
{
	func_834(iParam0, 0, 0);
	if (func_835(iParam0))
	{
		if (door_system_get_door_state(iParam0) != iParam1 || bParam2)
		{
			door_system_set_door_state(iParam0, iParam1);
		}
	}
}

bool func_600(int iParam0, int iParam1, int iParam2, float fParam3)
{
	if (func_20(iParam2, 2))
	{
		func_200(iParam0, 4);
		return true;
	}
	if (func_836(iParam1->f_4, 1) < fParam3)
	{
		func_200(iParam0, 4);
		return true;
	}
	return false;
}

void func_601(float fParam0, float fParam1, float fParam2, bool bParam3)
{
	if (func_27(524288))
	{
		return;
	}
	if (func_27(131072))
	{
		fVar0 = fParam0;
	}
	else if (func_15(16))
	{
		fVar0 = fParam1;
	}
	else
	{
		fVar0 = fParam2;
	}
	if (func_837(fVar0, bParam3))
	{
		if (func_838(64))
		{
			func_454(64, 0, 1, 0, 0);
			func_5(131072);
			func_74(vLocal_1578[1]);
		}
		else if (func_838(65))
		{
			func_454(65, 0, 1, 0, 0);
			func_5(131072);
			func_74(vLocal_1578[1]);
		}
		else if (func_838(66))
		{
			func_454(66, 0, 1, 0, 0);
			func_5(131072);
			func_74(vLocal_1578[1]);
		}
		else
		{
			func_5(524288);
		}
	}
}

int func_602(int iParam0, int iParam1)
{
	if (is_entity_dead(*iParam0))
	{
		return 0;
	}
	bVar0 = has_anim_event_fired(*iParam0, 1824589780);
	func_839(iParam0, iParam1);
	switch (iLocal_27)
	{
		case 1:
			if (func_451(Local_1618[2]))
			{
				if (!func_100(iParam1, 0))
				{
					func_57(iParam1, 1, 1);
				}
				iLocal_1643 = func_840();
				if (iVar1639 < 0)
				{
					func_841(10);
					iLocal_28 = 11;
					return 0;
				}
				func_43(131072);
				func_842(&vVar1, &vVar4, iVar1639);
				func_611(Local_1618[2], vVar1, vVar4);
				if (!_does_volume_exist(&(iLocal_1759[7])))
				{
					iLocal_1759[7] = _create_volume_box_with_custom_name(vVar1, vVar4, 2f, 2f, 5f, "EA CAS - volHammer");
					_0xb56d41a694e42e86(&(iLocal_1759[7]), 524288, 0, 0, -1, -1, 2);
				}
				func_603(Local_1618[2], *iParam0, "Son", 1);
				func_606(Local_1618[2], Local_386.f_690[2]->f_8, "HAMMER");
				func_606(Local_1618[2], Local_386.f_690[4]->f_8, "plank01");
				func_606(Local_1618[2], Local_386.f_690[5]->f_8, "plank02");
				func_606(Local_1618[2], Local_386.f_690[6]->f_8, "plank04");
				func_606(Local_1618[2], Local_386.f_690[7]->f_8, "plank03");
				func_606(Local_1618[2], Local_386.f_690[8]->f_8, "plank05");
				func_606(Local_1618[2], Local_386.f_690[9]->f_8, "nail01");
				func_606(Local_1618[2], Local_386.f_690[10]->f_8, "nail02");
				func_606(Local_1618[2], Local_386.f_690[11]->f_8, "nail03");
				func_606(Local_1618[2], Local_386.f_690[12]->f_8, "nail04");
				func_843();
			}
			break;
		case 2:
			if (!func_308(Local_1618[2]))
			{
				clear_ped_tasks_immediately(*iParam0, false, true);
				func_617(Local_1618[2]);
				iLocal_29 = 0;
				func_844(0);
			}
			break;
		case 3:
			if (!_0x083d497d57b7400f(Local_386.f_690[4]->f_8))
			{
				func_133(&(Global_40.f_9096[Local_1389.f_136]->f_6), func_198(iVar1639, 0));
				freeze_entity_position(Local_386.f_690[4]->f_8, true);
			}
			break;
		case 5:
			iLocal_29 = 1;
			func_844(1);
			if (!_0x083d497d57b7400f(Local_386.f_690[4]->f_8))
			{
				func_133(&(Global_40.f_9096[Local_1389.f_136]->f_6), func_198(iVar1639, 0));
				freeze_entity_position(Local_386.f_690[4]->f_8, true);
			}
			break;
		case 6:
			if (!_0x083d497d57b7400f(Local_386.f_690[5]->f_8))
			{
				func_133(&(Global_40.f_9096[Local_1389.f_136]->f_6), func_198(iVar1639, 1));
				freeze_entity_position(Local_386.f_690[5]->f_8, true);
			}
			break;
		case 8:
			iLocal_29 = 2;
			func_844(2);
			if (!_0x083d497d57b7400f(Local_386.f_690[5]->f_8))
			{
				func_133(&(Global_40.f_9096[Local_1389.f_136]->f_6), func_198(iVar1639, 1));
				freeze_entity_position(Local_386.f_690[5]->f_8, true);
			}
			break;
		case 9:
			if (!_0x083d497d57b7400f(Local_386.f_690[6]->f_8))
			{
				func_133(&(Global_40.f_9096[Local_1389.f_136]->f_6), func_198(iVar1639, 2));
				freeze_entity_position(Local_386.f_690[6]->f_8, true);
			}
			break;
		case 10:
			if (!_0x083d497d57b7400f(Local_386.f_690[6]->f_8))
			{
				func_133(&(Global_40.f_9096[Local_1389.f_136]->f_6), func_198(iVar1639, 2));
				freeze_entity_position(Local_386.f_690[6]->f_8, true);
			}
			if (iVar1639 < 0 || func_330(*iParam0, &(Local_1618[2]), "Son", 0, 0, 1, 0))
			{
				func_638(&(Local_386.f_690[2]->f_8));
				func_638(&(Local_386.f_690[9]->f_8));
				func_638(&(Local_386.f_690[10]->f_8));
				func_638(&(Local_386.f_690[11]->f_8));
				func_638(&(Local_386.f_690[12]->f_8));
				if (func_100(iParam1, 0))
				{
					func_454(iParam1, 0, 1, 0, 0);
				}
				func_83(&(iLocal_1759[7]));
				func_843();
				func_49(131072);
			}
			break;
		case 0:
			func_845(iParam0, 0, 0, 1, 0, 0, 0, 1);
			if (bVar0)
			{
				func_589(func_846(iParam1));
			}
			break;
	}
	if (iLocal_27 < 10)
	{
		if (!is_string_null_or_empty(func_847(iLocal_28)) && !func_508(Local_1618[2], func_847(iLocal_28)))
		{
			func_625(Local_1618[2], func_847(iLocal_28));
		}
		else if (bVar0)
		{
			if (!is_string_null_or_empty(func_847(iLocal_28)))
			{
				func_628(Local_1618[2], 0, 1);
			}
			func_843();
		}
	}
	func_848(iParam0, iParam1);
	return 0;
}

void func_603(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return;
	}
	if (bParam3 && is_entity_dead(iParam1))
	{
		return;
	}
	if (!func_757(uParam0, sParam2))
	{
		return;
	}
	set_anim_scene_entity(*uParam0, sParam2, iParam1, 0);
}

int func_604()
{
	return -2118813809;
}

int func_605()
{
	return -153075883;
}

void func_606(var uParam0, int iParam1, char* sParam2)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return;
	}
	if (!func_757(uParam0, sParam2))
	{
		return;
	}
	set_anim_scene_entity(*uParam0, sParam2, iParam1, 0);
}

int func_607()
{
	return -22664287;
}

int func_608()
{
	return 372732665;
}

Vector3 func_609()
{
	return -425.889f, 499.089f, 97.164f;
}

Vector3 func_610()
{
	return 0f, 0f, -119.391f;
}

void func_611(var uParam0, vector3 vParam1, vector3 vParam4)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return;
	}
	set_anim_scene_origin(*uParam0, vParam1, vParam4, 2);
}

int func_612()
{
	return -491224884;
}

int func_613()
{
	return 753163213;
}

void func_614(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_828(iParam0, 0, func_562(7));
	(*Local_125[iParam0])[0]->f_14 = 0;
	func_822((*Local_125[iParam0])[0], 1);
	func_747(iParam0, 0, !func_50(8388608));
	func_829(iParam0, 0, 0);
	func_828(iParam0, 1, func_562(10));
	func_747(iParam0, 1, 0);
	func_829(iParam0, 1, 0);
	func_828(iParam0, 2, func_562(12));
	func_829(iParam0, 2, 1);
	func_830(iParam0);
}

void func_615(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_43(67108864);
		func_53(33554432, bParam1);
		func_849(0, 20f);
	}
	else
	{
		func_49(67108864);
		func_49(33554432);
		func_849(0, -1082130432);
	}
}

void func_616(bool bParam0)
{
	if (bParam0 != func_21(1024))
	{
		func_261(&Local_1389, &(Local_1389.f_28));
		func_262(vLocal_1578[9]);
	}
	func_12(1024, bParam0);
}

void func_617(var uParam0)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return;
	}
	start_anim_scene(*uParam0);
}

bool func_618(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_850(iParam0, iParam1, 0f))
		{
			return false;
		}
	}
	if (!func_851(iParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (bParam4 && is_entity_a_ped(iParam1))
	{
		return _0x9d9473cb82d83a30(iParam0, get_ped_index_from_entity_index(iParam1), 0) == 1;
	}
	return _0x7f9b9791d4cb71f6(iParam0, iParam1, bParam2, 0) == 1;
}

void func_619(int iParam0, int iParam1, int iParam2)
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
	func_133(&(Var0.f_5), 1);
	Var0.f_13 = 3;
	Var0.f_7 = iParam1;
	if (!is_entity_dead(*iParam0))
	{
		_0x66f9eb44342bb4c5(*iParam0, &Var0);
	}
}

void func_620(int iParam0, var uParam1, vector3 vParam2, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, float fParam11, bool bParam12, bool bParam13, float fParam14)
{
	if (func_852(&(uParam1->f_3), 1))
	{
		func_853(uParam1);
		if (func_854(iParam0, fParam7, fParam11, bParam12, bParam13, fParam14))
		{
			func_86();
		}
	}
	if (func_855(get_entity_coords(iParam0, true, false), uParam1, fParam7))
	{
		set_gameplay_ped_hint(iParam0, Vector(0f, 0f, 0f) + vParam2, bParam5, iParam8, iParam9, iParam10);
		func_856(uParam1, get_entity_coords(iParam0, true, false), fParam6, iParam9);
	}
}

void func_621(var uParam0)
{
	func_512(uParam0, &(uParam0->f_4));
}

int func_622(int iParam0, int iParam1, float fParam2, int iParam3, char* sParam4, bool bParam5, int iParam6)
{
	if (func_110(iParam0, 0, 1))
	{
		_0xd65fdc686a031c83(iParam0, iParam1, fParam2);
		if (!is_string_null_or_empty(sParam4))
		{
		}
		if ((_0x68821369a2ceadd5(iParam0, iParam1) && (bParam5 || !_0x02ebbb3989b7e695(iParam0))) && (iParam3 == 0 || _0x569f1e1237508deb(iParam0) == iParam3))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_623(int iParam0, float fParam1)
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
	func_857(vVar6);
	vVar6 = { FtoV((get_entity_speed(iParam0) * fParam1)) * vVar6 };
	vVar3 = { vVar0 + vVar6 };
	return vVar3;
}

int func_624(int iParam0, vector3 vParam1, float fParam4)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		vVar0 = { get_entity_coords(iParam0, false, false) };
		vVar3 = { get_entity_forward_vector(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_858(vVar3, vVar6);
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
	if (func_859(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

int func_625(var uParam0, char* sParam1)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return 0;
	}
	StringCopy(&(uParam0->f_1), sParam1, 24);
	return func_646(uParam0, &(uParam0->f_1));
}

int func_626(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_860();
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
		if (func_147(iParam2, 128))
		{
			_0x7c00cfc48a782dc0(iParam1, iParam0, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
		}
		if (func_154(Global_1955500[iVar0], 0))
		{
			func_861(iVar0, 1024);
			func_861(iVar0, 16);
			func_861(iVar0, 256);
		}
		func_861(iVar0, iParam2);
	}
	return iVar0;
}

bool func_627(var uParam0)
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

void func_628(var uParam0, bool bParam1, bool bParam2)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return;
	}
	if (func_508(uParam0, &(uParam0->f_1)))
	{
		func_510(uParam0, &(uParam0->f_1), bParam2);
		if (bParam1)
		{
			func_512(uParam0, &(uParam0->f_4));
		}
	}
}

int func_629(float fParam0, int iParam1, bool bParam2, int iParam3)
{
	if (Global_1935630->f_12)
	{
		return 1;
	}
	if (!_0x50f124e6ef188b22(Global_35))
	{
		return 1;
	}
	fVar0 = func_862();
	if (fVar0 <= fParam0)
	{
		return 1;
	}
	if (bParam2)
	{
		if (fParam0 < 0.5f)
		{
			func_863(0);
		}
		else
		{
			func_863(1);
		}
		return 1;
	}
	if (fParam0 < 0.5f)
	{
		func_863(0);
	}
	else
	{
		func_863(1);
	}
	return 0;
}

bool func_630(var uParam0)
{
	return func_864(uParam0, &(uParam0->f_4));
}

void func_631(var uParam0)
{
	func_865(uParam0, &(uParam0->f_4));
}

void func_632(int iParam0, int iParam1)
{
	if (!func_127(iParam0))
	{
		return;
	}
	bVar0 = func_8(iParam0, iParam1);
	func_866(iParam0, iParam1, !bVar0);
}

float func_633(var uParam0)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return 0f;
	}
	return _get_anim_scene_progress(*uParam0);
}

void func_634()
{
	func_86();
}

int func_635(char[4] cParam0, char* sParam1, int iParam2)
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
	else if (func_294(cParam0, cVar0, iVar3, iParam2, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_636(var uParam0, float fParam1)
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

char* func_637()
{
	return "WORLD_HUMAN_SIT_GROUND_MALE_C";
}

void func_638(int* iParam0)
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

void func_639(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_828(iParam0, 0, func_562(8));
	(*Local_125[iParam0])[0]->f_14 = 0;
	func_822((*Local_125[iParam0])[0], 1);
	func_747(iParam0, 0, 1);
	func_829(iParam0, 0, 0);
	func_828(iParam0, 1, func_562(10));
	func_747(iParam0, 1, 1);
	func_829(iParam0, 1, 0);
	func_828(iParam0, 2, func_562(12));
	func_829(iParam0, 2, 1);
	func_830(iParam0);
}

void func_640()
{
	func_867(Local_125[1], 0, 0);
	func_867(Local_125[2], 0, 0);
	func_867(Local_125[0], 0, 0);
}

void func_641(int iParam0)
{
	if (func_186(Global_35, (*Global_1392194)[Local_1389.f_136]->f_6, 1, 0))
	{
		if (!func_100(Local_1389.f_138, 0))
		{
			func_57(Local_1389.f_138, 1, 1);
		}
		if (!func_21(1))
		{
			func_141(1);
			_0xaab050da48b57978(*iParam0, "Default_Angry", Global_35, -1, 4);
			if (iVar1638 == 3)
			{
				func_43(524288);
			}
		}
		if (func_403(vLocal_1578[1]))
		{
			func_262(vLocal_1578[1]);
		}
		if (func_353(-3.5f, 1, 0, 0) && !func_403(vLocal_1578[2]))
		{
			func_74(vLocal_1578[2]);
		}
		if (func_278(vLocal_1578[2], 10f))
		{
			func_94(&(Local_1389.f_35), func_868(), *iParam0, Global_35, 0, 0, 1, 1);
			clear_ped_tasks(*iParam0, 1, 0);
			switch (iVar1638)
			{
				case 1:
					open_sequence_task(&uLocal_1818);
					task_confront(0, Global_35, 2);
					task_turn_ped_to_face_entity(0, Global_35, 5000, -1082130432, -1082130432, -1082130432);
					close_sequence_task(iVar1815);
					_task_perform_sequence_2(*iParam0, iVar1815, 2f, 7.5f);
					clear_sequence_task(&uLocal_1818);
					Local_336 = 0;
					break;
				case 2:
					iVar0 = func_104(268435456, 1056964608, 1065353216);
					_give_weapon_to_ped_2(*iParam0, iVar0, 99, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
					set_current_ped_weapon(*iParam0, iVar0, false, 0, false, false);
					open_sequence_task(&uLocal_1818);
					task_swap_weapon(0, 1, 0, 0, 0);
					task_aim_gun_at_entity(0, Global_35, -1, 0, 1);
					close_sequence_task(iVar1815);
					task_perform_sequence(*iParam0, iVar1815);
					clear_sequence_task(&uLocal_1818);
					Local_336 = 0;
					break;
				case 3:
					func_43(524288);
					break;
			}
			uLocal_1641 = iVar1638 + 1;
		}
	}
	else
	{
		if (func_403(vLocal_1578[2]))
		{
			func_262(vLocal_1578[2]);
		}
		if (func_21(1))
		{
			if (!func_403(vLocal_1578[1]))
			{
				func_74(vLocal_1578[1]);
			}
			if (func_278(vLocal_1578[1], 15f))
			{
				if (iVar1638 == 3)
				{
					clear_ped_tasks(*iParam0, 1, 0);
					_0x935cf6e42baf7f4d(*iParam0);
					func_240(Local_1389.f_138, 1);
				}
				func_142(1);
			}
		}
	}
	if (func_21(1))
	{
		if (!func_254(*iParam0, 242628503))
		{
			func_869(&Local_336, 0);
		}
	}
}

int func_642(bool bParam0)
{
	if (bParam0)
	{
		return func_870(Global_1359489->f_4);
	}
	get_group_size(func_724(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = get_ped_as_group_member(func_724(), iVar3);
		if (func_871(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

void func_643(int iParam0, int iParam1, int iParam2, vector3 vParam3, int iParam6, int iParam7, int iParam8, int iParam9, var uParam10, int iParam11)
{
	if (iParam0 <= -1)
	{
		return;
	}
	if (!_does_volume_exist(iParam2))
	{
		return;
	}
	vVar0 = { 0f, 0f, 0f };
	iVar3 = func_642(1);
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		iVar5 = func_872(iVar4);
		if (!is_entity_dead(iVar5))
		{
			vVar0 = { vVar0 + get_entity_coords(iVar5, true, false) };
		}
		iVar4++;
	}
	vVar0 = { vVar0 / FtoV(to_float(iVar3)) };
	vVar6 = { vVar0 - _0xf70f00013a62f866(iParam2) };
	vVar9 = { func_873(iParam2, vVar6, 1065353216, 100) };
	func_874(iParam0, iParam1, iParam9, vVar9, vParam3, iParam6, iParam7, iParam8, uParam10, -1, 1, iParam11);
}

void func_644(int iParam0)
{
	if (iParam0 <= -1)
	{
		return;
	}
	func_875(iParam0);
	func_407(21);
}

void func_645(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_876(0);
		if (!func_27(2097152))
		{
			if (iLocal_18 == 1 && !func_27(8))
			{
				func_7(2097152, func_878(Global_35, &uLocal_1788, func_877(), &(iLocal_1759[4]), 10f, 0, 1, 129, 0, 0, 1071644672));
			}
			else
			{
				func_7(2097152, func_878(Global_35, &uLocal_1788, func_877(), 0, 10f, 0, 0, 129, 0, 0, 1071644672));
			}
			if (does_entity_exist(iVar1784))
			{
				set_ped_config_flag(iVar1784, 136, bParam1);
				_0xf74e134f40192884(iVar1784, 2);
			}
		}
	}
	else
	{
		func_101(0);
	}
}

int func_646(var uParam0, char* sParam1)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return 0;
	}
	return _0xdf7b5144e25cd3fe(*uParam0, sParam1);
}

bool func_647(int iParam0)
{
	if (func_347(Global_35))
	{
		iVar0 = func_513(Global_35, *iParam0, 0.93f);
		if (iVar0 != 0)
		{
			fVar1 = get_entity_speed(Global_35);
			iVar0 = func_513(Global_35, *iParam0, 1060437492);
			if (fVar1 > 6.5f || iVar0 == 1)
			{
				return false;
			}
		}
	}
	return true;
}

int func_648(int iParam0, var uParam1, int iParam2, int iParam3, float fParam4, bool bParam5, float fParam6, float fParam7)
{
	bVar0 = false;
	bVar1 = false;
	iVar2 = 0;
	while (iVar2 < *iParam0)
	{
		if (func_879(iVar2, bParam5))
		{
			if (func_880(iParam0[iVar2], uParam1, iParam2, &bVar1, iParam3, fParam4, fParam6, 1, fParam7, 1))
			{
				return 1;
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
	return 0;
}

int func_649(int iParam0, float fParam1, var uParam2, float fParam3)
{
	if (func_765(Global_35, iParam0) < fParam1)
	{
		if (!func_403(uParam2))
		{
			func_683(uParam2, 0);
		}
		else
		{
			if (func_544(uParam2))
			{
				func_545(uParam2);
			}
			if (func_348(uParam2) > fParam3 && !is_entity_occluded(iParam0))
			{
				return 1;
			}
		}
	}
	else if (func_403(uParam2) && !func_544(uParam2))
	{
		func_546(uParam2);
	}
	return 0;
}

void func_650()
{
	if (!func_21(32))
	{
		if (_is_anim_scene_started(&(Local_1618[0]), false))
		{
			if (_0x1f0e401031e20146(&(Local_1618[0]), "PBL_quick_exit"))
			{
				func_94(&(Local_1389.f_35), "HMSTD_IG1DAD2", &(iLocal_1768[0]), Global_35, 0, 0, 1, 1);
				func_141(32);
			}
		}
	}
}

bool func_651(int iParam0, int iParam1, int iParam2)
{
	if (func_652(iParam0, iParam1, iParam2))
	{
		return true;
	}
	if (!is_entity_on_screen(*iParam0))
	{
		return true;
	}
	if (func_247(*iParam0, 1, 1) > 20f)
	{
		return true;
	}
	if (func_186(Global_35, &(iLocal_1759[2]), 1, 0))
	{
		return true;
	}
	return false;
}

bool func_652(int iParam0, int iParam1, int iParam2)
{
	if (func_50(4096))
	{
		return true;
	}
	if (func_121(&Local_1549, 1))
	{
		func_43(4096);
		func_5(1024);
		func_93(0);
		return true;
	}
	if (!get_is_task_active(*iParam0, 3))
	{
		func_43(4096);
		func_5(1024);
		func_93(0);
		return true;
	}
	if (!get_is_task_active(*iParam1, 3))
	{
		func_43(4096);
		func_93(0);
		return true;
	}
	if (!get_is_task_active(*iParam2, 3))
	{
		func_43(4096);
		func_93(0);
		return true;
	}
	return false;
}

void func_653(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_828(iParam0, 0, func_562(7));
	(*Local_125[iParam0])[0]->f_14 = 0;
	func_822((*Local_125[iParam0])[0], 1);
	func_747(iParam0, 0, 1);
	func_829(iParam0, 0, 0);
	func_828(iParam0, 1, func_562(10));
	func_747(iParam0, 1, 0);
	func_829(iParam0, 1, 0);
	func_828(iParam0, 2, func_562(12));
	func_829(iParam0, 2, 1);
	func_830(iParam0);
}

bool func_654(var uParam0, char* sParam1)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return false;
	}
	return _0x1f0e401031e20146(*uParam0, sParam1);
}

void func_655(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_828(iParam0, 0, func_562(8));
	(*Local_125[iParam0])[0]->f_14 = 0;
	func_822((*Local_125[iParam0])[0], 1);
	func_747(iParam0, 0, 1);
	func_829(iParam0, 0, 0);
	func_828(iParam0, 1, func_562(10));
	func_747(iParam0, 1, 1);
	func_829(iParam0, 1, 0);
	func_828(iParam0, 2, func_562(12));
	func_829(iParam0, 2, 1);
	func_830(iParam0);
}

void func_656(int iParam0, int iParam1)
{
	if (func_247(*iParam0, 1, 1) < 25f)
	{
		if (((((!func_50(64) && !func_881(player_id(), iParam0)) && !func_881(player_id(), iParam1)) && is_ped_using_any_scenario(*iParam0)) && is_ped_using_any_scenario(*iParam1)) && func_292(*iParam0, *iParam1, 1, 1) < 10f)
		{
			func_94(&(Local_1389.f_35), "HMSTD_SONS_FIRE", *iParam0, *iParam1, 0, 0, 1, 0);
			func_43(64);
			func_49(16384);
			func_279(1, 1, 0);
			func_589(1);
			func_279(2, 1, 0);
			func_589(2);
		}
	}
	else if (func_354("HMSTD_SONS_FIRE"))
	{
		func_583("HMSTD_SONS_FIRE", 1);
	}
	if (func_121(&Local_1549, 1))
	{
		if (func_354("HMSTD_SONS_FIRE"))
		{
			func_583("HMSTD_SONS_FIRE", 0);
		}
	}
}

bool func_657(int iParam0, int iParam1, int iParam2)
{
	switch (iLocal_26)
	{
		case 0:
			if (is_entity_dead(*iParam0))
			{
				func_323(*iParam0);
				iLocal_26 = 1;
			}
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < iVar1789)
			{
				if (!is_entity_dead(&(iLocal_1794[iVar0])))
				{
					iVar2 = &iLocal_1794[iVar0];
				}
				else
				{
					iVar0++;
				}
			}
			if (!is_entity_dead(*iParam1))
			{
				func_74(vLocal_1578[3]);
				if (!is_entity_dead(iVar2))
				{
					_task_smart_flee_style_ped(*iParam1, iVar2, 4, 0, 1000f, -1, 0);
				}
				else
				{
					_task_smart_flee_style_coord(*iParam1, Local_386.f_4, 4, 0, 1000f, -1, 0);
				}
				set_ped_config_flag(*iParam1, 277, false);
				func_94(&(Local_1389.f_35), "HOME_DEAD_1", *iParam1, Global_35, 0, 0, 1, 1);
			}
			else
			{
				func_253(vLocal_1578[3], 3f);
			}
			iLocal_26 = 2;
			break;
		case 2:
			if (!func_403(vLocal_1578[3]) && func_353(0, 1, 0, 0))
			{
				func_74(vLocal_1578[3]);
			}
			if (func_278(vLocal_1578[3], 3f))
			{
				iVar0 = 0;
				while (iVar0 < iVar1789)
				{
					if (!is_entity_dead(&(iLocal_1794[iVar0])))
					{
						iVar2 = &iLocal_1794[iVar0];
					}
					else
					{
						iVar0++;
					}
				}
				if (!is_entity_dead(*iParam2))
				{
					if (!is_entity_dead(iVar2))
					{
						_task_smart_flee_style_ped(*iParam2, iVar2, 4, 0, 1000f, -1, 0);
					}
					else
					{
						_task_smart_flee_style_coord(*iParam2, Local_386.f_4, 4, 0, 1000f, -1, 0);
					}
					set_ped_config_flag(*iParam2, 277, false);
					func_94(&(Local_1389.f_35), "HOME_DEAD_2", *iParam1, Global_35, 0, 0, 1, 1);
				}
				iLocal_26 = 3;
			}
			break;
		case 3:
			if (func_882(Global_35, 0))
			{
				iLocal_26 = 8;
			}
			else
			{
				if (func_353(0, 1, 0, 0) && !func_592(&iLocal_1794))
				{
					iVar4 = func_672();
					if (!is_entity_dead(iVar4))
					{
						func_94(&(Local_1389.f_35), "HOME_ATAK03", iVar4, Global_35, 0, 0, 1, 1);
					}
					func_74(vLocal_1578[3]);
					iLocal_26 = 4;
				}
				Jump @1424; //curOff = 564
				if (func_882(Global_35, 0))
				{
					iLocal_26 = 8;
				}
				else
				{
					if (func_353(0, 1, 0, 0) && func_278(vLocal_1578[3], 3f))
					{
						iVar0 = 0;
						while (iVar0 < Local_386.f_1)
						{
							if (is_entity_dead(&(iLocal_1794[iVar0])))
							{
							}
							else
							{
								iVar1 = iVar0;
								fVar5 = (0.25f * to_float(iVar0));
								open_sequence_task(&uLocal_1818);
								if (!is_entity_dead(Local_386.f_369[iVar0]->f_11))
								{
									task_go_to_entity(0, Local_386.f_369[iVar0]->f_11, -1, 3f, 2f, 0f, 1);
									task_mount_animal(0, Local_386.f_369[iVar0]->f_11, -1, -1, 2f, 1, 0, 0);
								}
								else
								{
									task_follow_nav_mesh_to_coord(0, -1064.463f, 844.4973f, 116.9382f, 2f, -1, 0.25f, 0, 40000f);
								}
								close_sequence_task(iVar1813);
								_task_perform_sequence_2(&(iLocal_1794[iVar0]), iVar1813, fVar5, fVar5);
								clear_sequence_task(&uLocal_1818);
							}
							iVar0++;
						}
						func_5(1024);
						func_42(&Local_1389, 4);
						func_200(Local_1389.f_136, 512);
						func_84(&Local_1389);
						func_289(&uLocal_1805, 0);
						func_262(vLocal_1578[0]);
						set_relationship_between_groups(4, iLocal_31, iLocal_32);
						iVar6 = func_672();
						if (!is_entity_dead(iVar6))
						{
							func_94(&(Local_1389.f_35), "HOME_ATAK04", iVar6, Global_35, 0, 0, 1, 1);
						}
						iLocal_26 = 5;
					}
					Jump @1424; //curOff = 912
					iVar0 = 0;
					iVar0 = 0;
					while (iVar0 < Local_386.f_1)
					{
						iVar3 = get_script_task_status(&(iLocal_1794[iVar0]), 242628503, true);
						if (iVar3 == 0 || iVar3 == 1)
						{
						}
						else
						{
							iVar0++;
							iVar0 = 0;
							iVar0 = 0;
							while (iVar0 < Local_386.f_1)
							{
								if (!is_entity_dead(&(iLocal_1794[iVar0])) && !is_entity_dead(Local_386.f_369[iVar0]->f_11))
								{
									iVar7 = &iLocal_1794[iVar0];
									_task_move_in_traffic_2(&(iLocal_1794[iVar0]), -1064.463f, 844.4973f, 116.9382f, 1073741824, 2.5f, 0, 0);
								}
								else
								{
									iVar0++;
								}
							}
							iVar1 = 0;
							iVar0 = 0;
							while (iVar0 < Local_386.f_1)
							{
								if (is_entity_dead(&(iLocal_1794[iVar0])))
								{
								}
								else if (is_entity_dead(Local_386.f_369[iVar0]->f_11))
								{
								}
								else if (iVar7 == &iLocal_1794[iVar0])
								{
								}
								else
								{
									task_move_be_in_formation(&(iLocal_1794[iVar0]), iVar7, 0f, (1f * IntToFloat(iVar1)), 0f, -1082130432, 0);
									iVar1++;
								}
								iVar0++;
							}
							iLocal_26 = 6;
							Jump @1424; //curOff = 1205
							if (func_673(iParam0))
							{
								iVar0 = 0;
								while (iVar0 < Local_386.f_1)
								{
									task_combat_ped(&(iLocal_1794[iVar0]), Global_35, 16384, 0);
									iVar0++;
								}
								iLocal_26 = 7;
							}
							iVar8 = func_883(&iLocal_1794, func_215(), 1, 0, -1, 60f, -1082130432);
							if (does_entity_exist(iVar8))
							{
								iVar0 = 0;
								while (iVar0 < Local_386.f_1)
								{
									if (!is_entity_dead(&(iLocal_1794[iVar0])))
									{
										set_ped_keep_task(&(iLocal_1794[iVar0]), true);
										set_ped_as_no_longer_needed(iLocal_1794[iVar0]);
									}
									iVar0++;
								}
								iLocal_26 = 8;
							}
							Jump @1424; //curOff = 1359
							Jump @1424; //curOff = 1362
							if (func_673(iParam0))
							{
								iVar0 = 0;
								while (iVar0 < Local_386.f_1)
								{
									task_combat_ped(&(iLocal_1794[iVar0]), Global_35, 16384, 0);
									iVar0++;
								}
								iLocal_26 = 7;
							}
							return true;
						}
						return false;
					}
				}
			}
			default:
				break;
	}
}

void func_658()
{
	if ((iVar1638 % 5) == 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar1792)
		{
			if (func_110(&(iLocal_1794[iVar0]), 0, 1))
			{
				func_116(&(iLocal_1794[iVar0]), 1, Global_35, 0);
			}
			iVar0++;
		}
	}
}

void func_659(int iParam0, bool bParam1)
{
	func_829(iParam0, 0, bParam1);
	func_829(iParam0, 1, bParam1);
	func_829(iParam0, 2, bParam1);
}

int func_660(bool bParam0)
{
	if (!func_403(vLocal_1578[4]))
	{
		func_74(vLocal_1578[4]);
	}
	if (func_358(vLocal_1578[4], 0f) || !bParam0)
	{
		if (bParam0)
		{
			if (!is_entity_dead(func_58(Local_1389.f_138)) && is_ped_shooting(func_58(Local_1389.f_138)))
			{
				func_351(1066055203, func_58(Local_1389.f_138), 1);
				if (!func_50(262144))
				{
					func_884(536870912, 1, 0, 1);
					func_43(262144);
				}
				func_885();
				func_262(vLocal_1578[4]);
			}
		}
		iVar0 = 0;
		while (iVar0 < Local_386.f_1)
		{
			if (!is_entity_dead(&(iLocal_1794[iVar0])) && is_ped_shooting(&(iLocal_1794[iVar0])))
			{
				if (bParam0)
				{
					func_351(1066055203, &(iLocal_1794[iVar0]), 1);
					if (!func_50(262144))
					{
						func_884(536870912, 1, 0, 1);
						func_43(262144);
					}
				}
				func_885();
				func_262(vLocal_1578[4]);
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_661(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (iParam4 == 1 && !func_322(iParam0[iVar0], 0))
		{
		}
		else
		{
			func_886(iParam0[iVar0], uParam1, iParam2, bParam3);
		}
		iVar0++;
	}
}

void func_662()
{
	iVar0 = 0;
	while (iVar0 < Local_386.f_1)
	{
		func_248(&uLocal_1823, &(iLocal_1794[iVar0]), 0);
		func_249(&uLocal_1823, Local_386.f_369[iVar0]->f_11, 0);
		iVar0++;
	}
}

void func_663(var uParam0, int iParam1)
{
	uParam0->f_18 = iParam1;
}

void func_664()
{
	Local_1649[0]->f_1 = { func_237(64) };
	Local_1649[0]->f_4 = 97.95f;
	Local_1649[0]->f_5 = 1;
	Local_1649[0]->f_6 = 0;
	Local_1649[0]->f_7 = 0;
	Local_1649[1]->f_1 = { func_237(65) };
	Local_1649[1]->f_4 = 80.52f;
	Local_1649[1]->f_5 = 1;
	Local_1649[1]->f_6 = 1;
	Local_1649[1]->f_7 = 0;
	Local_1649[2]->f_1 = { func_237(66) };
	Local_1649[2]->f_4 = 101.23f;
	Local_1649[2]->f_5 = 1;
	Local_1649[2]->f_6 = 0;
	Local_1649[2]->f_7 = 0;
	iVar0 = 0;
	while (iVar0 < iVar1647)
	{
		if (!func_225(Local_1649[iVar0]->f_1))
		{
			Local_1649[iVar0] = add_cover_point(Local_1649[iVar0]->f_1, Local_1649[iVar0]->f_4, Local_1649[iVar0]->f_6, Local_1649[iVar0]->f_5, Local_1649[iVar0]->f_7, false);
		}
		iVar0++;
	}
}

char* func_665(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Default_Angry";
		case 1:
			return "Default_Panic";
		case 2:
			return "Default_Shocked";
		default:
			break;
	}
	return "Default_Scared";
}

void func_666(int iParam0)
{
	set_ped_shoot_rate(iParam0, 30);
}

Vector3 func_667(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -492.5699f, 478.279f, 98.5375f;
		case 1:
			return -487.6176f, 473.3265f, 97.04874f;
		case 2:
			return -492.2293f, 478.5967f, 98.59277f;
		case 3:
			return -487.3784f, 473.5992f, 97.41553f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_668()
{
	_0xef51242e35242b47("HOME_ATAK");
	_0xef51242e35242b47("HOME_ATAKF");
	_0xef51242e35242b47("HOME_ATAKFP");
	_0xef51242e35242b47("HOME_ATAKR");
	_0xef51242e35242b47("HOME_ATAKP");
	_0xef51242e35242b47("HOME_ATAKP2");
	_0xef51242e35242b47("HOME_ATAKP3");
	_0xef51242e35242b47("HOME_ATAK02");
	_0xef51242e35242b47("HOME_ATAK03");
	_0xef51242e35242b47("HOME_ATAK04");
}

void func_669()
{
	if (func_358(vLocal_1578[10], 60f))
	{
		func_290(&iLocal_1794, Global_35, 0, -1, 1148846080, 0, 4);
		func_289(&uLocal_1805, 0);
		func_262(vLocal_1578[0]);
		func_290(&iLocal_1768, Global_35, 0, -1, 1148846080, 0, 4);
		iLocal_24 = 9;
	}
}

void func_670()
{
	if (!func_27(16384))
	{
		if (func_353(0, 1, &(iLocal_1794[0]), 1) && func_887())
		{
			iVar0 = 0;
			while (iVar0 < Local_386.f_1)
			{
				if (!does_blip_exist(&(uLocal_1805[iVar0])))
				{
					func_315(&(iLocal_1794[iVar0]), uLocal_1805[iVar0], 831283580, 580546400, 0, 0);
				}
				iVar0++;
			}
			iVar1 = func_672();
			if (!is_entity_dead(iVar1))
			{
				func_94(&(Local_1389.f_35), "HOME_ATAKP", iVar1, Global_35, 0, 0, 1, 1);
			}
			func_5(16384);
			func_74(vLocal_1578[8]);
			func_141(512);
		}
	}
	else if (!func_21(32768))
	{
		if (func_888())
		{
			iVar2 = func_672();
			if (!is_entity_dead(iVar2))
			{
				func_94(&(Local_1389.f_35), "HOME_ATAKP2", iVar2, Global_35, 0, 0, 1, 1);
			}
			func_141(32768);
			func_262(vLocal_1578[8]);
		}
	}
	if (!func_21(512) && func_889(Global_35, &iLocal_1794, 45f, 0, 0))
	{
		iVar0 = 0;
		while (iVar0 < Local_386.f_1)
		{
			if (!does_blip_exist(&(uLocal_1805[iVar0])))
			{
				func_315(&(iLocal_1794[iVar0]), uLocal_1805[iVar0], 831283580, 580546400, 0, 0);
			}
			iVar0++;
		}
		func_141(512);
	}
}

bool func_671(int iParam0, int iParam1, int iParam2)
{
	if (!func_27(67108864))
	{
		if (func_247(*iParam0, 1, 1) < 80f)
		{
			if (!func_403(vLocal_1578[12]))
			{
				func_74(vLocal_1578[12]);
			}
			if (func_358(vLocal_1578[12], 2.5f))
			{
				func_5(67108864);
				func_192(Local_1389.f_136, 8388608);
				func_200(Local_1389.f_136, 64);
				if (!func_10(Local_1389.f_136, 4))
				{
					func_200(Local_1389.f_136, 4);
				}
			}
		}
		else if (func_403(vLocal_1578[12]))
		{
			func_262(vLocal_1578[12]);
		}
	}
	if (!func_27(67108864))
	{
		return false;
	}
	if (!is_entity_dead(*iParam0))
	{
		if (!func_186(*iParam0, &(iLocal_1759[3]), 1, 0) && !is_ped_in_cover(*iParam0, 0, 0))
		{
			return false;
		}
	}
	if (!is_entity_dead(*iParam1))
	{
		if (!func_186(*iParam1, &(iLocal_1759[3]), 1, 0) && !is_ped_in_cover(*iParam1, 0, 0))
		{
			return false;
		}
	}
	if (!is_entity_dead(*iParam2))
	{
		if (!func_186(*iParam2, &(iLocal_1759[3]), 1, 0) && !is_ped_in_cover(*iParam2, 0, 0))
		{
			return false;
		}
	}
	return true;
}

int func_672()
{
	iVar0 = 0;
	while (iVar0 < Local_386.f_1)
	{
		if (!is_entity_dead(&(iLocal_1794[iVar0])))
		{
		}
		else
		{
			iVar0++;
		}
	}
	if (iVar0 >= Local_386.f_1)
	{
		return 0;
	}
	func_59(&(Local_1389.f_35), &(iLocal_1794[iVar0]), "HOME_ATTACKER", 0);
	return &(iLocal_1794[iVar0]);
}

bool func_673(int iParam0)
{
	if (func_258(&iLocal_1794, &uLocal_1823, &uLocal_1851, &uLocal_1645, 0, (Local_386.f_1 - 1), 1) || ((func_27(16384) && func_21(32768)) && func_889(Global_35, &iLocal_1794, 30f, 0, 0)))
	{
		func_5(128);
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < iVar1791)
		{
			if (!is_entity_dead(&(iLocal_1794[iVar0])))
			{
				if (!does_blip_exist(&(uLocal_1805[iVar0])))
				{
					func_315(&(iLocal_1794[iVar0]), uLocal_1805[iVar0], 831283580, 580546400, 0, 0);
				}
				task_combat_hated_targets_in_area(&(iLocal_1794[iVar0]), get_entity_coords(*iParam0, true, false), 60f, 0, 16);
				set_ped_accuracy(&(iLocal_1794[iVar0]), iVar1639);
				iVar1 = iVar0;
			}
			iVar0++;
		}
		set_relationship_between_groups(6, iLocal_31, 1862763509);
		if (func_110(*iParam0, 0, 1))
		{
			set_ped_accuracy(*iParam0, 55);
		}
		if (iVar1 >= 0)
		{
			func_93(0);
			iVar2 = func_672();
			if (!is_entity_dead(iVar2))
			{
				func_94(&(Local_1389.f_35), "HOME_ATAKP3", iVar2, Global_35, 0, 0, 1, 1);
			}
		}
		func_200(Local_1389.f_136, 64);
		if (!func_10(Local_1389.f_136, 4))
		{
			func_200(Local_1389.f_136, 4);
		}
		if (!func_402(2))
		{
			func_400("SP_EVENT_AREA_CASTORS_2_ACTION", 0);
			func_401(2);
		}
		return true;
	}
	return false;
}

void func_674(int iParam0, bool bParam1)
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

int func_675(int iParam0)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		iVar0 = get_ped_index_from_entity_index(get_entity_attached_to(iParam0));
		if (!does_entity_exist(iVar0))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_676(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (!is_entity_dead(iParam0[iVar0]))
		{
			return false;
		}
		iVar0++;
	}
	if (bParam1)
	{
	}
	return true;
}

void func_677(int iParam0)
{
	if (iVar1638 < 4 && func_353(0, 1, 0, 0))
	{
		if (!func_403(vLocal_1578[0]))
		{
			func_74(vLocal_1578[0]);
		}
		if (func_278(vLocal_1578[0], 5f))
		{
			if (!func_27(134217728))
			{
				func_5(134217728);
				iVar0 = func_672();
				if (does_entity_exist(iVar0))
				{
					func_94(&(Local_1389.f_35), "HOME_ATAK02", iVar0, Global_35, 0, 0, 1, 1);
				}
			}
			else
			{
				uLocal_1641 = iVar1638 + 1;
				func_139(134217728);
				func_94(&(Local_1389.f_35), "HOME_ATAKFP", *iParam0, Global_35, 0, 0, 1, 1);
			}
		}
	}
}

bool func_678(var uParam0, int iParam1)
{
	if (func_890(iParam1))
	{
		return !(uParam0->f_1 && iParam1) != 0;
	}
	else
	{
		switch (iParam1)
		{
			case 262144:
				return func_147(*uParam0, 4);
			case 32:
				return func_147(*uParam0, 8);
			case 8192:
				return func_147(*uParam0, 16);
			case 64:
				return func_147(*uParam0, 32);
			case 32768:
				return func_147(*uParam0, 64);
			case 65536:
				return func_147(*uParam0, 1024);
			case 4096:
				return func_147(*uParam0, 262144);
			case 512:
				return func_147(*uParam0, 1048576);
			default:
				break;
		}
	}
	return false;
}

bool func_679(int iParam0, int iParam1)
{
	get_current_ped_weapon(*iParam0, &iVar0, true, 0, false);
	if (iVar0 == iParam1)
	{
		return true;
	}
	return false;
}

void func_680()
{
	if (!func_27(65536))
	{
		func_869(&Local_336, 0);
	}
}

bool func_681()
{
	if (func_891(Global_35))
	{
		return false;
	}
	if (func_358(vLocal_1578[0], 10f))
	{
		return true;
	}
	if (!func_27(1048576))
	{
		return false;
	}
	if (func_186(Global_35, &(iLocal_1759[1]), 1, 0))
	{
		return false;
	}
	return true;
}

bool func_682(int iParam0)
{
	switch (iVar2067)
	{
		case 0:
			if (!does_blip_exist(&(uLocal_1790[0])))
			{
				func_315(*iParam0, uLocal_1790[0], -89429847, 580546400, 0, func_365());
			}
			if (func_358(vLocal_1578[1], 12.5f))
			{
				iLocal_2070 = 6;
				func_892(14, 0, 0, 0, *iParam0, 0, 1065353216, 0);
			}
			else if (func_247(*iParam0, 1, 1) < 20f && func_358(vLocal_1578[1], 5f))
			{
				func_94(&(Local_1389.f_35), "HOME_THXA", *iParam0, Global_35, 0, 0, 1, 1);
				iLocal_2070 = 1;
			}
			break;
		case 1:
			if (func_353(-5f, 1, 0, 0))
			{
				func_892(14, 0, 0, 0, *iParam0, 0, 1065353216, 0);
				func_615(1, 0);
				func_279(0, 1, 0);
				func_893(0);
				func_74(vLocal_1578[1]);
				iLocal_2070 = 4;
			}
			break;
		case 4:
			if (func_278(vLocal_1578[1], 5f))
			{
				func_615(0, 0);
				func_279(0, 1, 0);
				iLocal_2070 = 7;
				return true;
			}
			switch (iVar331)
			{
				case 0:
					func_94(&(Local_1389.f_35), "HOME_WLCMA", Global_35, *iParam0, 0, 0, 1, 1);
					func_279(0, 1, 1);
					iLocal_2070 = 6;
					break;
				case 1:
					func_94(&(Local_1389.f_35), "HOME_WLCMAN", Global_35, *iParam0, 0, 0, 1, 1);
					func_279(0, 1, 1);
					iLocal_2070 = 6;
					break;
			}
			break;
		case 6:
			if (func_353(-3.5f, 1, 0, 0))
			{
				func_615(0, 0);
				func_279(0, 1, 0);
				iLocal_2070 = 7;
				return true;
			}
			break;
		case 7:
			return true;
	}
	return false;
}

void func_683(var uParam0, bool bParam1)
{
	if (bParam1 || !func_403(uParam0))
	{
		func_74(uParam0);
	}
}

void func_684()
{
	func_57(64, 1, 1);
	open_sequence_task(&uLocal_1818);
	_task_use_nearest_scenario_to_coord(0, -444.7836f, 502.7554f, 97.5326f, 1f, 0, false, false, false, false);
	close_sequence_task(iVar1816);
	_task_perform_sequence_2(&(iLocal_1768[0]), iVar1816, 0f, 1f);
	clear_sequence_task(&uLocal_1818);
	func_57(65, 1, 1);
	open_sequence_task(&uLocal_1818);
	_task_use_nearest_scenario_to_coord(0, -421.8968f, 495.1602f, 97.77839f, 1f, 0, false, false, false, false);
	close_sequence_task(iVar1816);
	_task_perform_sequence_2(&(iLocal_1768[1]), iVar1816, 1.5f, 3f);
	clear_sequence_task(&uLocal_1818);
	func_57(66, 1, 1);
	open_sequence_task(&uLocal_1818);
	_task_use_nearest_scenario_to_coord(0, -427.5713f, 500.593f, 97.10954f, 1f, 0, false, false, false, false);
	close_sequence_task(iVar1816);
	_task_perform_sequence_2(&(iLocal_1768[2]), iVar1816, 3f, 5f);
	clear_sequence_task(&uLocal_1818);
}

float func_685(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

int func_686()
{
	if (!func_27(16))
	{
		if (func_14(&uLocal_1789))
		{
			func_5(16);
			func_5(131072);
			return 1;
		}
	}
	return 0;
}

int func_687()
{
	if (func_27(16))
	{
		if (func_191(1))
		{
			func_139(16);
			func_139(131072);
			return 1;
		}
	}
	return 0;
}

var func_688(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	if (bParam2)
	{
		_0xdd1232b332cbb9e7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_894(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_895(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		_uilog_set_cached_objective(sVar0);
	}
	return func_894(sVar0, iParam1, 0, 0, 1, 1);
}

Vector3 func_689()
{
	return -433.5319f, 505.9023f, 96.77488f;
}

char* func_690(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "app";
		case 1:
			return "cas";
		case 2:
			return "cur";
		case 3:
			return "ftr";
		default:
			break;
	}
	return "";
}

void func_691(vector3 vParam0, int* iParam3, int iParam4, int iParam5, char* sParam6, int iParam7)
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

void func_692(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_828(iParam0, 2, "HOME_CTXT2");
	(*Local_125[iParam0])[2]->f_14 = func_117(-2107118268);
	func_816((*Local_125[iParam0])[2]->f_6, "HOME_CTXT2", (*Local_125[iParam0])[2]->f_14, 0);
	func_821((*Local_125[iParam0])[2], 1);
	func_747(iParam0, 2, 1);
	func_829(iParam0, 2, 0);
	func_828(iParam0, 0, func_562(7));
	func_747(iParam0, 0, 1);
	func_829(iParam0, 0, 0);
	func_828(iParam0, 1, func_562(30));
	func_747(iParam0, 1, 1);
	func_829(iParam0, 1, 0);
	func_830(iParam0);
}

void func_693(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 256;
	uParam0->f_4 = 0;
	func_262(&(uParam0->f_5));
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

Vector3 func_694()
{
	return 0.157993f, 1.238588f, -0.004703f;
}

float func_695(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return get_heading_from_vector_2d((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

bool func_696(var uParam0, int iParam1)
{
	if (!is_entity_dead(uParam0->f_1) && !func_147(uParam0->f_23, 4))
	{
		set_ped_reset_flag(uParam0->f_1, 179, true);
	}
	switch (*uParam0)
	{
		case 0:
			if (!is_entity_dead(uParam0->f_1))
			{
				func_74(&(uParam0->f_5));
				if (is_ped_a_player(uParam0->f_1))
				{
					set_player_control(get_player_index(), false, uParam0->f_3, false);
					if (func_147(uParam0->f_23, 2048))
					{
						_display_hud_component(724769646);
					}
				}
				if (uParam0->f_24 == 0)
				{
					_set_ped_crouch_movement(Global_35, false, 0, false);
				}
				if (!func_147(uParam0->f_23, 4))
				{
					clear_ped_secondary_task(uParam0->f_1);
				}
				if (!func_147(uParam0->f_23, 2))
				{
					uParam0->f_2 = _get_last_mount(uParam0->f_1);
					if (!is_entity_dead(uParam0->f_2) && func_347(uParam0->f_1))
					{
						func_896(uParam0->f_1);
						iVar0 = func_624(uParam0->f_1, uParam0->f_8, 1f);
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
						iVar3 = func_624(uParam0->f_1, uParam0->f_8, 1f);
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
						func_132(&(uParam0->f_23), 2);
					}
				}
				if (func_225(uParam0->f_14))
				{
					uParam0->f_14 = { uParam0->f_8 };
				}
				func_897(uParam0, 1, iParam1);
			}
			else
			{
				func_897(uParam0, 6, iParam1);
			}
			break;
		case 1:
			if (func_898(uParam0, iParam1))
			{
				func_74(&(uParam0->f_5));
				if (!func_899(uParam0, iParam1))
				{
					func_900();
				}
				func_897(uParam0, 2, iParam1);
			}
			break;
		case 2:
			if (func_899(uParam0, iParam1))
			{
				func_74(&(uParam0->f_5));
				if (!func_147(uParam0->f_23, 4))
				{
					set_current_ped_weapon(uParam0->f_1, -1569615261, false, 0, false, false);
					set_current_ped_weapon(uParam0->f_1, -1569615261, false, 1, false, false);
					task_swap_weapon(uParam0->f_1, 1, func_147(uParam0->f_23, 512), 0, 0);
				}
				func_897(uParam0, 3, iParam1);
			}
			break;
		case 3:
			if (func_901(uParam0, iParam1))
			{
				func_74(&(uParam0->f_5));
				if (!_is_ped_carrying(uParam0->f_1))
				{
					func_132(&(uParam0->f_23), 256);
				}
				if (func_147(uParam0->f_23, 4096) && !_is_ped_carrying(uParam0->f_1))
				{
					func_132(&(uParam0->f_23), 256);
					iVar6 = _get_last_mount(uParam0->f_1);
					if (func_292(iVar6, uParam0->f_1, 1, 1) < 5f)
					{
						iVar5 = func_902(iVar6);
						task_pickup_carriable_entity(uParam0->f_1, iVar5);
					}
				}
				else if (!func_147(uParam0->f_23, 256))
				{
					iVar5 = _get_first_entity_ped_is_carrying(uParam0->f_1);
					task_place_carried_entity_at_coord(uParam0->f_1, iVar5, uParam0->f_14, uParam0->f_21, uParam0->f_4);
				}
				func_897(uParam0, 4, iParam1);
			}
			break;
		case 4:
			if (func_903(uParam0, iParam1))
			{
				func_74(&(uParam0->f_5));
				if (func_147(uParam0->f_23, 8192))
				{
					if (func_147(uParam0->f_23, 1024))
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
					if (!func_225(uParam0->f_11))
					{
					}
					iVar8 = 0;
					if (!func_147(uParam0->f_23, 1024))
					{
						iVar8 |= 1;
					}
					open_sequence_task(&iVar9);
					if (!func_225(uParam0->f_11))
					{
						if (func_147(uParam0->f_23, 16))
						{
							task_go_straight_to_coord(0, uParam0->f_11, uParam0->f_21, func_496(!func_147(uParam0->f_23, 128), 20000, -1), uParam0->f_19, uParam0->f_17, 0);
						}
						else
						{
							task_follow_nav_mesh_to_coord(0, uParam0->f_11, uParam0->f_21, func_496(!func_147(uParam0->f_23, 128), 20000, -1), uParam0->f_17, iVar8, uParam0->f_19);
						}
					}
					if (func_147(uParam0->f_23, 16))
					{
						task_go_straight_to_coord(0, uParam0->f_8, uParam0->f_21, func_496(!func_147(uParam0->f_23, 128), 20000, -1), uParam0->f_19, uParam0->f_17, 0);
					}
					else
					{
						task_follow_nav_mesh_to_coord(0, uParam0->f_8, uParam0->f_21, func_496(!func_147(uParam0->f_23, 128), 20000, -1), uParam0->f_17, iVar8, uParam0->f_19);
					}
					if (func_147(uParam0->f_23, 1))
					{
						task_achieve_heading(0, uParam0->f_19, 0);
					}
					func_904(uParam0->f_1, &iVar9, 0, 0, 1, 1);
				}
				func_897(uParam0, 5, iParam1);
			}
			break;
		case 5:
			if (func_147(uParam0->f_23, 8192))
			{
				if (_0x337f1cc8ee895601(uParam0->f_25, &(uParam0->f_30)))
				{
					iVar10 = 1;
				}
			}
			else if (!func_147(uParam0->f_23, 1))
			{
				uParam0->f_19 = get_entity_heading(uParam0->f_1);
			}
			if (!func_147(uParam0->f_23, 128) && func_278(&(uParam0->f_5), 15f))
			{
				iVar10 = 1;
			}
			if (!func_147(uParam0->f_23, 8192))
			{
				if (get_script_task_status(uParam0->f_1, 242628503, true) == 8)
				{
					iVar10 = 1;
				}
				if ((func_225(uParam0->f_11) || !func_254(uParam0->f_1, 242628503)) || get_sequence_progress(uParam0->f_1) > 0)
				{
					iVar11 = 1;
				}
				if (func_905(uParam0->f_1, uParam0->f_8, uParam0->f_19, uParam0->f_18, uParam0->f_20, func_147(uParam0->f_23, 8)) && (!func_147(uParam0->f_23, 64) || absf(func_906(uParam0->f_1, uParam0->f_8)) < uParam0->f_22))
				{
					iVar12 = 1;
				}
			}
			if ((iVar11 && iVar12) || iVar10)
			{
				if (func_147(uParam0->f_23, 32))
				{
					task_turn_ped_to_face_coord(uParam0->f_1, uParam0->f_8, 0);
				}
				func_262(&(uParam0->f_5));
				func_897(uParam0, 6, iParam1);
				return true;
			}
			break;
		case 6:
			return true;
	}
	return false;
}

void func_697(int iParam0)
{
	func_629(1048576000, 1028443341, 1, 106);
	func_101(0);
	func_5(2097152);
	freeze_entity_position(*iParam0, false);
	func_617(Local_1618[1]);
	set_player_control(get_player_index(), true, 0, false);
	func_68(&Local_1389, 65536);
	func_907(*iParam0, func_117(-2107118268));
	func_5(512);
	func_908(-2107118268, 0, 0, 0);
	func_25(Local_1389.f_136, 128);
	func_5(8192);
	func_42(&Local_1389, 128);
	func_699(Local_1389.f_136);
	func_200(Local_1389.f_136, 16384);
	func_139(65536);
	func_84(&Local_1389);
	func_74(vLocal_1578[1]);
}

bool func_698(int iParam0, int* iParam1, int iParam2, int iParam3, var uParam4)
{
	if (!func_110(iParam0, 0, 1))
	{
		return true;
	}
	else if (!func_110(iParam2, 0, 1))
	{
		return true;
	}
	switch (*iParam3)
	{
		case 0:
			uParam4->f_183 = func_292(iParam0, iParam2, 0, 1);
			task_look_at_entity(iParam0, iParam2, -1, 0, 51, 0);
			if (!(func_909(iParam0, uParam4->f_188, -1082130432, -1082130432, -1082130432) || func_292(iParam0, iParam2, 1, 1) < 2f) && !uParam4->f_79)
			{
				task_follow_to_offset_of_entity(iParam0, iParam2, 0f, 6f, 0.5f, uParam4->f_212, -1, 1036831949, 1, 1, 0, 0, 1);
			}
			else
			{
				task_turn_ped_to_face_entity(iParam0, iParam2, 0, -1082130432, -1082130432, -1082130432);
			}
			if (uParam4->f_180)
			{
				if (func_350(iParam0, iParam2, 1) >= 16f)
				{
					task_go_to_entity(iParam0, iParam2, 20000, 0.5f, uParam4->f_212, 2f, 0);
					func_74(&(uParam4->f_191));
				}
				else
				{
					uParam4->f_180 = 0;
					uParam4->f_79 = 1;
				}
			}
			*iParam3 = 1;
			break;
		case 1:
			if (func_292(iParam0, iParam2, 0, 1) > (uParam4->f_183 + uParam4->f_1))
			{
				task_smart_flee_ped(iParam0, iParam2, 1000f, -1, 0, 1077936128, 0);
				return true;
			}
			else if ((!uParam4->f_180 && (func_292(iParam0, iParam2, 1, 1) < uParam4->f_188 || uParam4->f_79)) || (uParam4->f_180 && (func_278(&(uParam4->f_191), uParam4->f_189) || func_350(iParam0, iParam2, 1) < 16f)))
			{
				if (((uParam4->f_180 || func_909(iParam0, uParam4->f_188, -1082130432, -1082130432, -1082130432)) || uParam4->f_77) || (uParam4->f_79 && (uParam4->f_77 || has_entity_clear_los_to_entity(iParam0, Global_35, 17))))
				{
					if (uParam4->f_80)
					{
						task_follow_and_converse_with_ped(iParam0, iParam2, &(uParam4->f_62), &(uParam4->f_66), uParam4->f_184, uParam4->f_185, 8, 0, 0, 1069547520, 1073741824);
					}
					else
					{
						func_910(iParam0, &(uParam4->f_181), -1, !uParam4->f_77);
					}
					*iParam3 = 2;
				}
			}
			break;
		case 2:
			if ((uParam4->f_76 || uParam4->f_79) || ((func_618(iParam0, iParam2, 0, uParam4->f_188, 0) && (uParam4->f_80 || func_910(iParam0, &(uParam4->f_181), -1, !uParam4->f_77))) || uParam4->f_180))
			{
				if (func_353(0, 1, iParam0, uParam4->f_182))
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
					func_911(uParam4->f_179, &(uParam4->f_81), iParam0, iParam2, &(uParam4->f_34), 0, 1116471296, 0, 0, 0, 1);
					func_912(uParam4);
					if (uParam4->f_194 && !is_string_null_or_empty(&(uParam4->f_204)))
					{
						*iParam3 = 4;
					}
					else if (!is_string_null_or_empty(&(uParam4->f_42)))
					{
						*iParam3 = 3;
					}
					else
					{
						*iParam3 = 5;
					}
				}
			}
			else if (!func_110(iParam0, 0, 1))
			{
				return true;
			}
			break;
		case 3:
			if (func_353(0, 1, iParam0, uParam4->f_182))
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
				func_911(uParam4->f_179, &(uParam4->f_81), iParam0, iParam2, &(uParam4->f_42), 0, 1116471296, 0, 0, 0, 1);
				*iParam3 = 5;
			}
			break;
		case 4:
			if (func_353(0, 1, iParam0, uParam4->f_182))
			{
				if (func_913(&(uParam4->f_203), &(uParam4->f_204), 0f, 0f, 0f, iParam0, 992265328, 10f, 0f, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1704213876, 0))
				{
					MemCopy(&(uParam4->f_54), {uParam4->f_195}, 8);
					*iParam3 = 5;
				}
				else if ((get_game_timer() - *uParam4) > 18000)
				{
					func_286(&(uParam4->f_203), 1, 1);
					uParam4->f_194 = 0;
					*iParam3 = 6;
				}
			}
			break;
		case 5:
			if ((func_353(uParam4->f_187, 1, iParam0, uParam4->f_182) && !is_ambient_speech_playing(iParam0)) && !is_scripted_speech_playing(iParam0))
			{
				if (!is_string_null(&(uParam4->f_54)))
				{
					*uParam4 = get_game_timer();
					func_911(uParam4->f_179, &(uParam4->f_81), iParam2, iParam0, &(uParam4->f_54), 0, 1116471296, 0, 0, 0, 1);
					*iParam3 = 6;
				}
				else
				{
					if (uParam4->f_75 != 0)
					{
						func_914(uParam4->f_75, 0, 1065353216, 1, 0, 0, 1, 752097756);
					}
					else if (uParam4->f_70 != 0)
					{
						func_915(uParam4->f_70, 0, 1065353216, 1, 0, 0, 0, -1);
					}
					*iParam3 = 6;
				}
			}
			break;
		case 6:
			if (func_353(0, 1, iParam0, uParam4->f_182) || (uParam4->f_190 > 0 && (get_game_timer() - *uParam4) > uParam4->f_190))
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
					func_916(&(uParam4->f_208), 10000, 0, 0, 0, 1);
				}
				*iParam3 = 7;
				return true;
			}
			break;
		case 7:
			return true;
	}
	if (has_entity_been_damaged_by_entity(iParam0, Global_35, 1, 1))
	{
		task_smart_flee_ped(iParam0, Global_35, 1000f, -1, 0, 1077936128, 0);
		return true;
	}
	return false;
}

void func_699(int iParam0)
{
	if (!func_127(iParam0))
	{
		return;
	}
	func_25(iParam0, 1073741824);
}

void func_700(int iParam0)
{
	if (iLocal_21 < 16)
	{
		if (!func_27(1073741824) && func_247(*iParam0, 1, 1) < 10f)
		{
			func_5(1073741824);
		}
		func_645(func_27(1073741824), 1);
	}
	if (iLocal_21 >= 5 && iLocal_21 < 16)
	{
		func_869(&Local_336, 0);
	}
}

void func_701(int iParam0)
{
	iLocal_21 = iParam0;
}

void func_702(int iParam0)
{
	if (!func_50(2048) && func_186(*iParam0, &(iLocal_1759[4]), 1, 0))
	{
		func_43(2048);
	}
}

bool func_703()
{
	return (func_24(0) <= 3 && !func_8(0, 4194304));
}

void func_704(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_27(16))
	{
		func_828(iParam0, 0, "HOME_CTXT1A");
		func_747(iParam0, 0, 1);
	}
	else if (func_703())
	{
		func_828(iParam0, 0, func_562(0));
		func_747(iParam0, 0, 1);
	}
	else
	{
		func_747(iParam0, 0, 0);
	}
	func_829(iParam0, 0, 0);
	func_828(iParam0, 2, "HOME_CTXT2");
	(*Local_125[iParam0])[2]->f_14 = func_117(-2107118268);
	func_816((*Local_125[iParam0])[2]->f_6, "HOME_CTXT2", (*Local_125[iParam0])[2]->f_14, 0);
	func_821((*Local_125[iParam0])[2], 1);
	func_747(iParam0, 2, 1);
	func_829(iParam0, 2, 0);
	func_828(iParam0, 1, func_562(1));
	func_747(iParam0, 1, 1);
	func_829(iParam0, 1, 0);
	func_830(iParam0);
}

int func_705(int iParam0)
{
	if (func_186(Global_35, &(iLocal_1759[2]), 1, 0) || func_186(Global_35, &(iLocal_1759[3]), 1, 0))
	{
		if (func_256(get_player_index(), 1, 1, 1))
		{
			set_ped_max_move_blend_ratio(Global_35, 1f);
		}
	}
	if (iLocal_23 < 11 && is_entity_dead(*iParam0))
	{
		func_305();
	}
	switch (iLocal_23)
	{
		case 0:
			Local_2071.f_12 = 20f;
			Local_2071.f_13 = 15f;
			func_589(0);
			func_279(0, 1, 1);
			func_917(1986792065, 0, -1f, 1, 1, 0, 1, 0);
			iLocal_1759[1] = _0x0eb78c2b156635b1(665633627, -444.2087f, 499.9236f, 99.1105f, 0f, 0f, 0f, 1f, 1f, 1.313758f);
			func_616(1);
			func_603(Local_1618[0], *iParam0, "father", 1);
			func_603(Local_1618[0], Global_35, "plr", 1);
			func_606(Local_1618[0], Local_386.f_690[0]->f_8, "MONEY");
			if (!is_entity_dead(&(iLocal_1794[0])))
			{
				task_stand_still(&(iLocal_1794[0]), -1);
				func_173(&Local_1389, 1);
				func_707(&Local_1389, *iParam0, &(iLocal_1794[0]), 0);
				_0x06aade17334f7a40(&(iLocal_1794[0]), func_708());
				set_ped_config_flag(&(iLocal_1794[0]), 178, true);
				_0x931b241409216c1f(*iParam0, &(iLocal_1794[0]), 0);
			}
			_task_start_scenario_in_place(*iParam0, func_607(), -1, false, 0, -1f, false);
			func_712(-942875190, 1);
			iLocal_23 = 1;
			break;
		case 1:
			if (func_600(Local_1389.f_136, &Local_386, &Local_1389, 50f))
			{
				func_5(128);
				iLocal_23 = 2;
			}
			break;
		case 2:
			if (!func_10(Local_1389.f_136, 4))
			{
				func_200(Local_1389.f_136, 4);
			}
			if (!is_entity_dead(*iParam0) && func_618(*iParam0, Global_35, 0, 20f, 0))
			{
				func_619(iParam0, 0, 0);
				iLocal_30 = func_626(*iParam0, _create_volume_cylinder(get_entity_coords(*iParam0, true, false), 0f, 0f, get_entity_heading(*iParam0), 5.5f, 5.5f, 5.5f), 148);
				iLocal_23 = 3;
			}
			break;
		case 3:
			if (!func_100(Local_1389.f_138, 0))
			{
				func_57(Local_1389.f_138, 1, 1);
			}
			func_619(iParam0, 0, 0);
			if (func_27(2))
			{
				iVar0 = 2;
				iVar1 = 3;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			_0xe7fa07624574b79a(*iParam0, Global_35, iVar1, iVar0, 3f, 1, 0, 0, 0);
			func_94(&(Local_1389.f_35), Local_2071.f_1, *iParam0, Global_35, 0, 0, 1, 1);
			func_284(uLocal_1790[0]);
			func_5(1048576);
			iLocal_23 = 4;
			break;
		case 4:
			func_629(1048576000, 1028443341, 0, 106);
			func_619(iParam0, 0, 0);
			if (func_27(1048576))
			{
				if (func_353(-3.5f, 1, *iParam0, 1))
				{
					func_139(1048576);
				}
			}
			else
			{
				if (!func_50(67108864) && !func_354(Local_2071.f_1))
				{
					func_615(1, 1);
					func_279(0, 1, 0);
					func_589(0);
				}
				switch (iVar331)
				{
					case 0:
						func_615(1, 0);
						func_279(0, 1, 1);
						func_94(&(Local_1389.f_35), "HOME_LN02ERP", *iParam0, Global_35, 0, 0, 1, 1);
						iLocal_23 = 5;
						break;
					case 1:
						func_615(1, 0);
						func_279(0, 1, 1);
						func_94(&(Local_1389.f_35), "HOME_LN02ERN", *iParam0, Global_35, 0, 0, 1, 1);
						iLocal_23 = 5;
						break;
				}
			}
			break;
		case 5:
			func_619(iParam0, 0, 0);
			if (func_353(-3.5f, 1, 0, 0))
			{
				if (!func_100(Local_1389.f_138, 0))
				{
					func_57(Local_1389.f_138, 1, 1);
				}
				func_89(&iLocal_30, 1);
				func_94(&(Local_1389.f_35), "HOME_LN03E1", *iParam0, Global_35, 0, 0, 1, 1);
				func_918(1986792065, 1);
				_0x1bc47a9dedc8df5d(1986792065, 1);
				func_625(Local_1618[0], "PBL_give_money_back");
				StringCopy(&(Local_1618[0]->f_4), "bBreakInternalLoop", 24);
				func_617(Local_1618[0]);
				iLocal_23 = 6;
			}
			break;
		case 6:
			if (!func_919(1986792065, 0))
			{
				if (func_920(0))
				{
					func_917(1986792065, 0, -1f, 1, 1, 0, 0, 0);
				}
			}
			if (!func_186(*iParam0, &(iLocal_1759[3]), 1, 0))
			{
				func_619(iParam0, 0, 0);
			}
			else if (_does_volume_exist(&(iLocal_1759[1])))
			{
				func_83(&(iLocal_1759[1]));
			}
			if ((!func_27(512) && !is_entity_dead(*iParam0)) && has_anim_event_fired(*iParam0, -1568763903))
			{
				func_315(*iParam0, uLocal_1790[0], -89429847, 580546400, 0, func_365());
				func_5(512);
			}
			if ((func_27(512) && !is_entity_dead(Global_35)) && (func_186(Global_35, &(iLocal_1759[2]), 1, 0) || func_186(Global_35, &(iLocal_1759[3]), 1, 0)))
			{
				display_radar(false);
				func_693(&Local_1674);
				Local_1674.f_1 = Global_35;
				Local_1674.f_8 = { func_921(Local_1618[0], "plr", "PBL_give_money_back") };
				Local_1674.f_19 = func_922(Local_1618[0], "plr", "PBL_give_money_back");
				Local_1674.f_25 = &Local_1618[0];
				StringCopy(&(Local_1674.f_30), "plr", 24);
				StringCopy(&(Local_1674.f_26), "PBL_give_money_back", 32);
				func_132(&(Local_1674.f_23), 27648);
				func_42(&Local_1389, 65536);
				func_696(&Local_1674, 106);
				func_265(&Local_1549, 4);
				iLocal_23 = 7;
			}
			break;
		case 7:
			func_629(1048576000, 1028443341, 0, 106);
			if (func_696(&Local_1674, 106) && func_627(Local_1618[0]))
			{
				func_629(1048576000, 1028443341, 1, 106);
				func_628(Local_1618[0], 1, 1);
				func_94(&(Local_1389.f_35), "HOME_LN03E2", *iParam0, Global_35, 0, 0, 1, 1);
				iLocal_23 = 8;
			}
			break;
		case 8:
			if (!is_entity_dead(Global_35) && get_is_task_active(Global_35, 3))
			{
				if (has_anim_event_fired(Global_35, -1898385492))
				{
					set_player_control(get_player_index(), true, 0, false);
					func_68(&Local_1389, 65536);
					func_914(func_117(-1506205562), 0, 1065353216, 1, 0, 0, 1, 752097756);
					func_509(Local_1618[0], Local_386.f_690[0]->f_8, "MONEY");
					func_84(&Local_1389);
					func_192(Local_1389.f_136, 8388608);
					func_42(&Local_1389, 128);
					func_284(uLocal_1790[0]);
					func_638(&(Local_386.f_690[0]->f_8));
				}
			}
			if (!is_entity_dead(Global_35) && has_anim_event_fired(Global_35, 1426724047))
			{
				display_radar(true);
			}
			if (func_710(iParam0))
			{
				door_system_set_door_state(1986792065, 1);
			}
			if (func_923(Local_1618[0]))
			{
				display_radar(true);
				display_hud(true);
				func_615(0, 0);
				func_279(0, 1, 0);
				iLocal_23 = 9;
			}
			break;
		case 9:
			if (func_710(iParam0))
			{
				door_system_set_door_state(1986792065, 1);
			}
			if (func_709(iParam0))
			{
				func_616(0);
				func_141(128);
				iLocal_23 = 10;
			}
			break;
		case 10:
			if (!func_100(Local_1389.f_138, 0))
			{
				func_57(Local_1389.f_138, 1, 1);
			}
			if (func_710(iParam0))
			{
				func_29(Local_1389.f_138, 32);
				func_29(Local_1389.f_138, 128);
				func_31(Local_1389.f_138, 1);
				func_42(&Local_1389, 512);
				_0xb65e7f733956cf25(_0x112ddf56300bc6e5(func_157(Local_1389.f_138)));
				func_711(Local_1389.f_138, 0);
				door_system_set_door_state(1986792065, 1);
				iLocal_23 = 11;
			}
			break;
		case 11:
			break;
	}
	return 0;
}

int func_706(int iParam0)
{
	switch (iLocal_23)
	{
		case 0:
			Local_2071.f_12 = 20f;
			Local_2071.f_13 = 15f;
			func_589(0);
			func_279(0, 1, 1);
			func_616(1);
			func_603(Local_1618[0], *iParam0, "father", 1);
			func_606(Local_1618[0], Local_386.f_690[1]->f_8, "CIGARETTE");
			StringCopy(&(Local_1618[0]->f_4), "bBreakInternalLoop", 24);
			_request_scenario_type(func_607(), 1, func_229(Local_1389.f_138), func_608());
			if (!is_entity_dead(&(iLocal_1794[0])))
			{
				task_stand_still(&(iLocal_1794[0]), -1);
				func_173(&Local_1389, 1);
				func_707(&Local_1389, *iParam0, &(iLocal_1794[0]), 0);
				_0x06aade17334f7a40(&(iLocal_1794[0]), func_708());
				set_ped_config_flag(&(iLocal_1794[0]), 178, true);
				_0x931b241409216c1f(*iParam0, &(iLocal_1794[0]), 0);
			}
			func_712(-942875190, 1);
			func_712(1986792065, 1);
			func_617(Local_1618[0]);
			iLocal_23 = 1;
			break;
		case 1:
			if (func_600(Local_1389.f_136, &Local_386, &Local_1389, 50f))
			{
				func_192(Local_1389.f_136, 8388608);
				func_5(128);
				iLocal_23 = 2;
			}
			break;
		case 2:
			if (func_618(*iParam0, Global_35, 0, Local_2071.f_13, 0))
			{
				func_619(iParam0, 0, 0);
				func_620(*iParam0, &uLocal_1540, 0f, 0f, 0f, 0, 60f, 20f, -1, 4000, 4000, 3.5f, 0, 1, 1084227584);
				vVar1 = { func_623(Global_35, 1065353216) };
				iVar0 = func_624(*iParam0, vVar1, 1060437492);
				switch (iVar0)
				{
					case 0:
						sVar4 = "PBL_action_F";
						break;
					case 2:
						sVar4 = "PBL_action_R";
						break;
					case 3:
						sVar4 = "PBL_action_L";
						break;
					case 1:
						iVar0 = func_624(*iParam0, vVar1, 1f);
						switch (iVar0)
						{
							case 3:
								sVar4 = "PBL_action_back_L";
								break;
							case 2:
								sVar4 = "PBL_action_back_R";
								break;
						}
						break;
				}
				func_625(Local_1618[0], sVar4);
				iLocal_23 = 3;
			}
			break;
		case 3:
			if (func_627(Local_1618[0]))
			{
				func_628(Local_1618[0], 1, 1);
				func_84(&Local_1389);
				func_192(Local_1389.f_136, 8388608);
				func_94(&(Local_1389.f_35), Local_2071.f_1, *iParam0, Global_35, 0, 0, 1, 1);
				iLocal_23 = 6;
			}
			break;
		case 6:
			func_629(1048576000, 1028443341, 0, 106);
			func_620(*iParam0, &uLocal_1540, 0f, 0f, 0f, 0, 60f, 20f, -1, 4000, 4000, 3.5f, 0, 1, 1084227584);
			if (!func_27(1024) && func_353(-3.5f, 1, 0, 0))
			{
				func_589(0);
				func_5(1024);
				func_43(8192);
			}
			func_619(iParam0, 0, 0);
			fVar5 = func_247(*iParam0, 1, 1);
			if ((fVar5 < 3.5f || fVar5 > 20f) || func_633(Local_1618[0]) > 0.5f)
			{
				func_634();
			}
			if (!is_entity_dead(*iParam0) && !is_ped_using_any_scenario(*iParam0))
			{
				if (func_923(Local_1618[0]))
				{
					func_284(uLocal_1790[0]);
					func_615(0, 0);
					func_279(0, 1, 0);
					func_638(&(Local_386.f_690[1]->f_8));
					func_74(vLocal_1578[0]);
					iLocal_23 = 9;
				}
			}
			break;
		case 9:
			if (func_709(iParam0))
			{
				func_616(0);
				func_141(128);
				iLocal_23 = 10;
			}
			break;
		case 10:
			if (func_710(iParam0))
			{
				func_29(Local_1389.f_138, 32);
				func_29(Local_1389.f_138, 128);
				func_31(Local_1389.f_138, 1);
				_0xb65e7f733956cf25(_0x112ddf56300bc6e5(func_157(Local_1389.f_138)));
				func_42(&Local_1389, 512);
				func_711(Local_1389.f_138, 0);
				door_system_set_door_state(1986792065, 1);
				func_712(1986792065, 1);
				iLocal_23 = 11;
			}
			break;
		case 11:
			break;
	}
	return 0;
}

void func_707(var uParam0, int iParam1, int iParam2, int iParam3)
{
	func_248(uParam0, iParam1, iParam3);
	func_249(uParam0, iParam2, iParam3);
}

Vector3 func_708()
{
	return -445.7555f, 498.7224f, 97.94028f;
}

bool func_709(int iParam0)
{
	if (!func_27(536870912))
	{
		if (!func_100(Local_1389.f_138, 0))
		{
			func_57(Local_1389.f_138, 1, 1);
		}
		if (!is_entity_dead(&(iLocal_1794[0])))
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			open_sequence_task(&uLocal_1818);
			task_follow_nav_mesh_to_coord(0, get_entity_coords(&(iLocal_1794[0]), true, false), 1f, -1, 5f, 1, 40000f);
			task_mount_animal(0, &(iLocal_1794[0]), -1, -1, 1f, 1, 0, 0);
			task_follow_nav_mesh_to_coord(0, -450.4879f, 553.2806f, 103.5783f, 1f, -1, 0.25f, 0, 40000f);
			close_sequence_task(iVar1815);
			task_perform_sequence(*iParam0, iVar1815);
			clear_sequence_task(&uLocal_1818);
		}
		func_42(&Local_1389, 512);
		func_43(32768);
		func_5(536870912);
	}
	else if (!func_254(*iParam0, 242628503) && _is_ped_getting_into_a_mount_seat(*iParam0, true))
	{
		func_924(*iParam0, 76, "HMSTD_FOREMAN", 0);
		return true;
	}
	return false;
}

bool func_710(int iParam0)
{
	if (!does_entity_exist(iVar1852))
	{
		iLocal_1855 = func_832(1986792065, 1, 0);
		return false;
	}
	if (is_entity_on_screen(iVar1852) && !is_door_closed(1986792065))
	{
		return false;
	}
	if (!is_entity_dead(*iParam0) && func_186(*iParam0, &(iLocal_1759[3]), 1, 0))
	{
		return false;
	}
	if (!is_entity_dead(Global_35) && func_186(Global_35, &(iLocal_1759[3]), 1, 0))
	{
		return false;
	}
	if (func_247(iVar1852, 1, 1) < 8f)
	{
		return false;
	}
	return true;
}

int func_711(int iParam0, bool bParam1)
{
	if (!func_99(iParam0))
	{
		return 0;
	}
	if (!func_55(iParam0, 2))
	{
		return 0;
	}
	if (func_157(iParam0) == 0)
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_159(iParam0)))
	{
		return 1;
	}
	if (func_55(iParam0, 1) && !bParam1)
	{
		func_29(iParam0, 128);
		return 1;
	}
	func_31(iParam0, 129);
	func_732(iParam0);
	_0xfc77c5b44d5ff7c0(func_159(iParam0));
	func_445(iParam0, 0);
	return 1;
}

void func_712(int iParam0, int iParam1)
{
	func_917(iParam0, 1, 0, 0, 0, 0, 0, 0);
}

int func_713(int iParam0)
{
	if (does_entity_exist(iParam0) && !is_ped_injured(iParam0))
	{
		iVar0 = _0x61914209c36efddb(iParam0);
		if (iVar0 == 1)
		{
			return iVar0;
		}
		else if (_is_ped_hogtied(iParam0))
		{
			return iVar0;
		}
	}
	return 0;
}

int func_714(int iParam0)
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

int func_715(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

void func_716(int iParam0, bool bParam1)
{
	func_925(iParam0, &iVar0, &iVar1);
	if (!func_926(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_927(iVar0, iVar1);
}

bool func_717(vector3 vParam0)
{
	return _0x769bb7626b8cdb06(vParam0, 0.5f, 0, 0, 16384);
}

int func_718(int iParam0, bool bParam1)
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

bool func_719(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_720(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_721(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_722()
{
	return Global_1109400->f_245;
}

int func_723(int iParam0)
{
	if (!func_928(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

int func_724()
{
	return get_player_group(get_player_index());
}

void func_725(int iParam0, int iParam1)
{
	if (!func_929(iParam0))
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

void func_726(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	*uParam0 = _create_anim_scene(sParam1, iParam3, sParam2, false, true);
}

void func_727(var uParam0)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return;
	}
	load_anim_scene(*uParam0);
}

bool func_728(var uParam0)
{
	return func_154(*uParam0, 1);
}

bool func_729(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_930(*uParam0, 0f, 0f, 0f))
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

void func_730(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_931(iParam1))
		{
			func_932(iParam0, 41788943);
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
			func_933(iParam0, 0, 1);
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
			func_934(iParam0, 0);
			bVar0 = true;
		}
		func_935(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

bool func_731(int iParam0)
{
	if (!func_99(iParam0))
	{
		return false;
	}
	return _does_thread_exist((*Global_1895087)[iParam0]->f_2);
}

void func_732(int iParam0)
{
	if (!func_99(iParam0))
	{
		return;
	}
	iVar0 = func_228(iParam0);
	if (does_entity_exist(iVar0))
	{
		if (does_entity_belong_to_this_script(iVar0, false))
		{
			set_ped_as_no_longer_needed(&iVar0);
		}
	}
	(*Global_1895087)[iParam0]->f_2 = 0;
}

var func_733(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

var func_734(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

bool func_735(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_736(int iParam0)
{
	if (func_936(iParam0))
	{
		if (!func_937(45))
		{
			return false;
		}
	}
	iVar0 = func_739(iParam0);
	if (func_938())
	{
		if (!func_939((*Global_1835011)[3]->f_1, 1))
		{
			return (iVar0 == 7 || iVar0 == 6);
		}
	}
	return true;
}

struct<2> func_737(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_738(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

int func_739(int iParam0)
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

int func_740(int iParam0)
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

Vector3 func_741(int iParam0)
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

void func_742(int iParam0, int iParam1)
{
	func_940(iParam0);
	iVar0 = func_941(iParam0, iParam1);
	if (iVar0 != 0 && !_map_is_discovery_active(iVar0))
	{
		_0xd8c7162ab2e2af45(iVar0);
	}
}

int func_743(int iParam0, int iParam1, int iParam2, vector3 vParam3, float fParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, bool bParam12, float fParam13, bool bParam14, bool bParam15)
{
	if (fParam13 <= 0f)
	{
		iVar0 = _create_volume_sphere(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	}
	else
	{
		iVar0 = _create_volume_cylinder(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam13);
	}
	iVar1 = func_942(iParam0, iParam1, iParam2, iVar0, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12, bParam14, bParam15);
	func_83(iVar0);
	return iVar1;
}

int func_744(int iParam0, vector3 vParam1, int iParam4, bool bParam5, int iParam6, int iParam7)
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

int func_745(int iParam0, int iParam1)
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

int func_746(int iParam0, int iParam1, int iParam2)
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

void func_747(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	func_564((*Local_125[iParam0])[iParam1], bParam2, 0);
}

void func_748(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_286(&((*uParam1)[iParam0->f_3]->f_6), 1, 1);
		if (bParam2)
		{
			func_483(iParam0, 0);
		}
	}
}

void func_749(int iParam0, int iParam1, bool bParam2)
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

bool func_750(int iParam0)
{
	return func_943(iParam0, 2);
}

bool func_751(int iParam0, bool bParam1, bool bParam2)
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

int func_752()
{
	return Global_1894899->f_2;
}

bool func_753(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

int func_754(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_755(int iParam0, int iParam1)
{
	iParam0 = func_754(iParam0);
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

void func_756()
{
	if (func_944(0))
	{
		func_945(0);
	}
	if (func_944(1))
	{
		func_945(1);
	}
	if (func_944(5))
	{
		func_945(5);
	}
	if (func_944(6))
	{
		func_946(6);
	}
}

bool func_757(var uParam0, char* sParam1)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return false;
	}
	return _0x6f1f0b17109309da(*uParam0, sParam1);
}

void func_758(var uParam0, char* sParam1, bool bParam2)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return;
	}
	set_anim_scene_bool(*uParam0, sParam1, bParam2, false);
}

void func_759(int iParam0)
{
	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_947();
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
			func_948(&(Global_1935630->f_34), &(Global_1935630->f_39));
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

var func_760(int iParam0)
{
	return &(Global_1109400->f_276[iParam0]);
}

bool func_761(bool bParam0)
{
	if (func_949(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_762(int iParam0)
{
	iVar0 = Global_1935630->f_40;
	if (func_1() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_950(iParam0);
		}
	}
	else if (!does_entity_exist(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_950(iParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_787(iVar0) == -1)
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

void func_763(int iParam0)
{
	if (*iParam0 & 8 != 0 || *iParam0 & 16 != 0)
	{
		func_951(iParam0);
	}
}

bool func_764(int iParam0, int iParam1, int iParam2)
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
		iVar1 = func_787(iParam2);
	}
	else
	{
		iVar1 = func_786(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_787(iParam0);
	}
	else
	{
		iVar0 = func_786(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_147(*iParam1, 8388608))
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

float func_765(int iParam0, int iParam1)
{
	return func_292(iParam0, iParam1, 1, 1);
}

float func_766(int iParam0)
{
	return iParam0->f_26;
}

bool func_767(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

float func_768(int iParam0)
{
	return iParam0->f_17;
}

bool func_769(int iParam0, int iParam1, float fParam2, float fParam3)
{
	if (iParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_147(*iParam0, 4194304))
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

int func_770(int iParam0)
{
	return iParam0->f_18;
}

bool func_771(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (_is_weapon_sniper(func_574(iVar0, 0)))
		{
			if (func_823(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_772(int iParam0)
{
	return iParam0->f_23;
}

int func_773(int iParam0)
{
	return iParam0->f_21;
}

int func_774(int iParam0)
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

bool func_775(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_952(iParam0, vParam4, 0.5f))
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

int func_776(int iParam0)
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
	if (func_953(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_777(int iParam0)
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

bool func_778(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_595(iParam1))
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

bool func_779(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_595(iParam1))
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

bool func_780(int iParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = 40f;
	if (func_595(iParam1))
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

bool func_781(int iParam0, int iParam1)
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

bool func_782(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (func_954(iParam0, 1, 0, 0) != 2055893578)
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

bool func_783(int iParam0)
{
	return !*iParam0 & 2 != 0;
}

bool func_784(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_685(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_785(int iParam0)
{
	return iParam0->f_24;
}

int func_786(int iParam0)
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

int func_787(int iParam0)
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

int func_788(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_781(Global_35, &iVar1))
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
		fVar2 = func_292(iParam0, player_ped_id(), 0, 1);
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
		if (func_292(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

bool func_789(int iParam0, int iParam1, bool bParam2)
{
	func_949(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_790(iParam1, iVar0))
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
				if (!bParam2 || !func_790(iParam1, iVar1))
				{
					if (func_685(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_790(int iParam0, int iParam1)
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

bool func_791(int iParam0)
{
	if (func_955())
	{
		return false;
	}
	return func_939((*Global_1347702)[58]->f_15, 1);
}

int func_792(int iParam0)
{
	return iParam0->f_20;
}

float func_793(int iParam0)
{
	if (!*iParam0 & 1 != 0)
	{
		return func_785(iParam0);
	}
	if (_0x25ca89b2a39dcc69() > 0.833f)
	{
		return func_956(iParam0);
	}
	return func_785(iParam0);
}

float func_794(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_795()
{
	iVar0 = func_146(func_145());
	iVar1 = func_553(func_145());
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

struct<5> func_796(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_957(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_958(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_800(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_959(bParam1) };
			if (bParam2 && func_960(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_798(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_798(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_799(iParam0, &Var5, 1728382685))
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
			Var0 = { func_961(bParam1) };
			switch (func_962(iParam0))
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
			if (func_963(iParam0, -1823706425))
			{
				Var0 = { func_800(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_963(iParam0, -1483207246))
			{
				Var0 = { func_800(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_964(Var0, &Var27, bParam1, 0))
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

int func_797(int iParam0, int iParam1)
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

bool func_798(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_965(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_799(int iParam0, var uParam1, int iParam2)
{
	if (func_966(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_800(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_967(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_968(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_801(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_969(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_964(*uParam1, &Var0, bParam6, 0))
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
	if (!func_802(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_968(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_802(bool bParam0)
{
	if (func_1() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_968(bParam0));
}

bool func_803(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_970(iParam0))
	{
		return false;
	}
	if (!func_802(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return true;
}

void func_804(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_276(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

void func_805(int iParam0, int iParam1)
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

void func_806(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_807(int iParam0, int iParam1)
{
	iVar0 = func_555(*iParam0);
	iVar1 = func_554(*iParam0);
	if (iParam1 < 1 || iParam1 > func_557(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_808(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_809(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_810(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

void func_811(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

int func_812(int* iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	if (!is_entity_dead(*iParam0))
	{
		func_811(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !_does_volume_exist(iParam9)) || is_entity_in_volume(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (is_ambient_speech_playing(*iParam0) || is_scripted_speech_playing(*iParam0));
		fVar8 = func_581(fParam12 >= 0f, fParam12, vdist(Global_36, get_entity_coords(*iParam0, true, false)));
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
			func_74(&(iParam1->f_13));
		}
		if (func_971(*iParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_972(iParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_812(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_485(iParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!get_ped_config_flag(*iParam0, 317, true))
						{
							func_973(*iParam0, 1, 1);
						}
					}
					else if (func_582(iParam1, 22))
					{
						func_973(*iParam0, 0, 1);
					}
				}
				if (func_974(iParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_975(iParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_976(iParam8);
					if (func_977(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (is_bit_set(uParam3[iParam1->f_1], 20))
								{
									func_978(uParam3);
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
					func_979(iParam1, uParam3, fVar8);
					if (func_980(*iParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (is_bit_set(*iParam1, 1))
					{
						func_576(uParam3, 0, 0, 1, 1);
						clear_bit(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_981(iParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_974(iParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_982(*iParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_977(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_975(iParam0, func_974(iParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_976(iParam8);
				}
				else if (is_bit_set(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_576(uParam3, 0, 0, 1, 1);
					}
					func_983(iParam1, 1);
				}
				func_979(iParam1, uParam3, fVar8);
				if (func_981(iParam0, iParam1, fParam4, bVar6))
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
			func_486(iParam1, uParam3);
			set_bit(iParam1, 3);
		}
	}
	return -1;
}

void func_813(int* iParam0, var uParam1, int* iParam2)
{
	iVar0 = func_984(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (*uParam1)[iVar0]->f_13;
		iVar2 = (*uParam1)[iVar0]->f_15;
		if (!is_string_null_or_empty(sVar1))
		{
			func_95(Global_35, *iParam2, sVar1, "", -1082130432, iVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_814(int iParam0)
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

bool func_815(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 38)
	{
		return true;
	}
	return false;
}

void func_816(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_285(iParam0))
	{
		return;
	}
	iVar0 = func_488(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(2, sParam1, sParam2));
}

void func_817(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_285(iParam0))
	{
		return;
	}
	iVar0 = func_488(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, sParam1);
}

void func_818(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_285(iParam0))
	{
		return;
	}
	iVar0 = func_488(iParam0);
	if (bParam1)
	{
		func_985(iParam0, 4);
		func_986(iVar0, 1);
		func_987(iVar0, 1);
	}
	else
	{
		func_988(iParam0, 4);
		func_987(iVar0, 0);
	}
}

void func_819(int* iParam0, char* sParam1)
{
	if (func_285(iParam0->f_6) && !is_string_null_or_empty(sParam1))
	{
		func_817(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_822(iParam0, 1);
}

bool func_820(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

void func_821(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_822(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

bool func_823(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

int func_824(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 65536;
		case 2:
			return 131072;
		default:
			break;
	}
	return 0;
}

int func_825(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 16;
		case 1:
			return 4;
		case 2:
			return 8;
		default:
			break;
	}
	return 0;
}

int func_826(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 536870912;
		case 1:
			return 1073741824;
		case 2:
			return -2147483648;
		default:
			break;
	}
	return 0;
}

void func_827(int iParam0, int iParam1, int iParam2, int* iParam3, var uParam4, bool bParam5, int iParam6)
{
	_0x24c82ef607105faa(iParam0, iParam6);
	_0xe737d5f14304a2ec(iParam0, player_id(), 120000);
	func_280(&iParam0, iParam3, uParam4, bParam5, 1);
	func_227(iParam0, 1, 1);
	func_43(iParam1);
	func_141(iParam2);
	func_141(2097152);
	set_blocking_of_non_temporary_events(iParam0, false);
	_0xa3db37edf9a74635(player_id(), iParam0, 7, 0, 1);
	stop_ped_speaking(iParam0, false);
	if (iParam0 == &iLocal_1768[1] || iParam0 == &iLocal_1768[2])
	{
		func_5(8388608);
	}
}

void func_828(int iParam0, int iParam1, char* sParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	func_817((*Local_125[iParam0])[iParam1]->f_6, sParam2, 0);
	(*Local_125[iParam0])[iParam1]->f_5 = sParam2;
}

void func_829(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	func_565((*Local_125[iParam0])[iParam1], bParam2);
}

void func_830(int iParam0)
{
	if (iParam0 == 0)
	{
		func_43(134217728);
	}
}

bool func_831(int iParam0)
{
	return iParam0 != 0;
}

int func_832(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = func_989(iParam0, iParam1);
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

bool func_833(int iParam0)
{
	if (func_15(64))
	{
		return false;
	}
	if (!(func_186(func_58(67), &(iLocal_1759[3]), 1, 0) && func_186(func_58(68), &(iLocal_1759[3]), 1, 0)))
	{
		return false;
	}
	if (func_186(Global_35, &(iLocal_1759[3]), 1, 0))
	{
		return false;
	}
	if (func_247(iParam0, 1, 1) < 20f)
	{
		return false;
	}
	if (is_door_closed(1986792065))
	{
		return true;
	}
	if (is_entity_on_screen(iParam0))
	{
		return false;
	}
	return true;
}

int func_834(int iParam0, bool bParam1, bool bParam2)
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

bool func_835(int iParam0)
{
	if (func_831(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

float func_836(vector3 vParam0, int iParam3)
{
	return func_685(Global_35, vParam0, iParam3);
}

bool func_837(float fParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_20(&Local_1389, 256))
		{
			return true;
		}
	}
	if (func_358(vLocal_1578[1], fParam0))
	{
		return true;
	}
	return false;
}

bool func_838(int iParam0)
{
	if (!func_100(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_58(iParam0);
	if (is_ped_using_any_scenario(iVar0))
	{
		return true;
	}
	if (get_is_task_active(iVar0, 3))
	{
		return false;
	}
	return true;
}

void func_839(int iParam0, int iParam1)
{
	if ((iLocal_27 > 2 && iLocal_27 < 10) || iLocal_27 == 0)
	{
		if (!get_is_task_active(*iParam0, 3))
		{
			func_990(iParam1);
		}
	}
}

int func_840()
{
	if (iLocal_18 < 4 && !func_20(&Local_1389, 256))
	{
		if (!func_154(Global_40.f_9096[Local_1389.f_136]->f_6, 2))
		{
			return 0;
		}
		else if (!func_154(Global_40.f_9096[Local_1389.f_136]->f_6, 16))
		{
			return 1;
		}
		else if (!func_154(Global_40.f_9096[Local_1389.f_136]->f_6, 128))
		{
			if (iLocal_18 == 2)
			{
				return 2;
			}
		}
	}
	return -1;
}

void func_841(int iParam0)
{
	iLocal_27 = iParam0;
}

void func_842(var uParam0, var uParam1, int iParam2)
{
	switch (iParam2)
	{
		case 0:
		case default:
			switch (iLocal_18)
			{
				case 1:
					*uParam0 = { -439.948f, 502.663f, 96.99f };
					*uParam1 = { 0f, 0f, 179.819f };
					break;
				case 2:
					*uParam0 = { -439.944f, 502.624f, 96.99f };
					*uParam1 = { 0f, 0f, 179.819f };
					break;
				case 3:
					*uParam0 = { -436.153f, 500.937f, 96.99f };
					*uParam1 = { 0f, 0f, 90.416f };
					break;
			}
			break;
		case 1:
			switch (iLocal_18)
			{
				case 1:
					*uParam0 = { -438.552f, 502.693f, 96.99f };
					*uParam1 = { 0f, 0f, 179.819f };
					break;
				case 2:
					*uParam0 = { -438.547f, 502.651f, 96.99f };
					*uParam1 = { 0f, 0f, 179.819f };
					break;
				case 3:
					*uParam0 = { -444.01f, 493.414f, 97.116f };
					*uParam1 = { 0f, 0f, 0.51f };
					break;
			}
			break;
		case 2:
			switch (iLocal_18)
			{
				case 2:
					*uParam0 = { -431.098f, 499.764f, 97.157f };
					*uParam1 = { 0f, 0f, 92.19f };
					break;
				case 3:
					*uParam0 = { -433.973f, 499.416f, 97.928f };
					*uParam1 = { 0f, 0f, 0.425f };
					break;
			}
			break;
	}
}

void func_843()
{
	iLocal_27 = iLocal_28;
	if (iLocal_27 < 11)
	{
		iLocal_28 = iLocal_27 + 1;
	}
}

void func_844(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (iVar1 == 1)
			{
			}
			else
			{
				if (iVar0 == iParam0)
				{
					func_646(Local_1618[2], func_514(iVar0, iVar1));
				}
				else
				{
					func_991(Local_1618[2], func_514(iVar0, iVar1));
				}
				iVar2 = 0;
				while (iVar2 < 3)
				{
					if (iVar2 == 2)
					{
					}
					else if (iVar0 == iParam0)
					{
						if (!func_508(Local_1618[2], func_992(iVar0, iVar1, iVar2)) && !func_993(Local_1618[2], func_992(iVar0, iVar1, iVar2)))
						{
							func_646(Local_1618[2], func_992(iVar0, iVar1, iVar2));
						}
					}
					else if (func_508(Local_1618[2], func_992(iVar0, iVar1, iVar2)) && func_993(Local_1618[2], func_992(iVar0, iVar1, iVar2)))
					{
						func_991(Local_1618[2], func_992(iVar0, iVar1, iVar2));
					}
					iVar2++;
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_845(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_133(&(Var0.f_5), 1);
	}
	Var0.f_13 = 0;
	Var0.f_7 = iParam1;
	func_219(&(Var0.f_5), 1);
	if (!is_entity_dead(*iParam0))
	{
		_0x66f9eb44342bb4c5(*iParam0, &Var0);
	}
}

int func_846(int iParam0)
{
	switch (iParam0)
	{
		case 64:
			return 0;
		case 65:
			return 1;
		case 66:
			return 2;
		default:
			break;
	}
	return -1;
}

char* func_847(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "PBL_ENTER";
		case 3:
			return "PBL_B_01_SEC_01";
		case 4:
			return "PBL_B_01_SEC_02";
		case 5:
			return "PBL_TRANS_01";
		case 6:
			return "PBL_B_02_SEC_01";
		case 7:
			return "PBL_B_02_SEC_02";
		case 8:
			return "PBL_TRANS_02";
		case 9:
			return "PBL_B_03_SEC_01";
		case 10:
			return "PBL_EXIT";
		default:
			break;
	}
	return "";
}

void func_848(int iParam0, int iParam1)
{
	if (func_994(iParam0, iParam1))
	{
		if (func_21(262144))
		{
			return;
		}
		iVar0 = func_513(*iParam0, Global_35, 1060437492);
		if (iVar0 == 1)
		{
			iVar0 = func_513(*iParam0, Global_35, 1f);
		}
		iVar1 = iVar330;
		if (iVar1 == -1)
		{
			if (_0x9337183fda2e9035(*iParam0, get_player_index()))
			{
				iVar1 = 0;
			}
			else
			{
				iVar1 = 1;
			}
		}
		if (func_508(Local_1618[2], func_992(iLocal_29, iVar0, iVar1)))
		{
			func_510(Local_1618[2], func_992(iLocal_29, iVar0, iVar1), 1);
			func_141(262144);
			func_841(0);
			if (iLocal_28 == 11)
			{
				iLocal_28 = 10;
			}
		}
		else
		{
			func_646(Local_1618[2], func_992(iLocal_29, iVar0, iVar1));
		}
	}
}

void func_849(int iParam0, float fParam1)
{
	if (fParam1 < 0f)
	{
		func_995((*Local_125[iParam0])[0], 0);
		func_995((*Local_125[iParam0])[1], 0);
		func_995((*Local_125[iParam0])[2], 0);
	}
	else
	{
		func_996((*Local_125[iParam0])[0], fParam1);
		func_996((*Local_125[iParam0])[1], fParam1);
		func_996((*Local_125[iParam0])[2], fParam1);
	}
}

bool func_850(int iParam0, int iParam1, float fParam2)
{
	return func_952(iParam0, get_entity_coords(iParam1, false, false), fParam2);
}

bool func_851(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_852(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_853(var uParam0)
{
	if (func_852(&(uParam0->f_3), 4))
	{
	}
	if (is_gameplay_hint_active())
	{
		if ((!func_997(uParam0) || func_852(&(uParam0->f_3), 4)) && !func_852(&(uParam0->f_3), 256))
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
	if (func_998(uParam0))
	{
		func_86();
	}
	if (!func_852(&(uParam0->f_3), 16))
	{
		if (func_403(uParam0))
		{
			if (func_470(uParam0) < uParam0->f_4)
			{
				set_ped_max_move_blend_ratio(player_ped_id(), 1f);
			}
		}
	}
}

bool func_854(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, float fParam5)
{
	if (bParam4 && is_ped_injured(iParam0))
	{
		return true;
	}
	if (func_999(iParam0, fParam1, fParam2, bParam3, bParam4, fParam5))
	{
		return true;
	}
	return false;
}

bool func_855(vector3 vParam0, var uParam3, float fParam4)
{
	if (!func_1000(uParam3->f_7, uParam3->f_8))
	{
		return false;
	}
	if (func_852(&(uParam3->f_3), 1))
	{
		return false;
	}
	if (is_gameplay_hint_active())
	{
		return false;
	}
	fVar0 = func_685(Global_35, vParam0, 1);
	if (fVar0 > fParam4)
	{
		return false;
	}
	if (!func_1001(vParam0, uParam3))
	{
		return false;
	}
	if (!func_852(&(uParam3->f_3), 2))
	{
		if (!is_sphere_visible(vParam0, 0.5f))
		{
			return false;
		}
		if (!func_1002(vParam0, uParam3))
		{
			return false;
		}
	}
	return true;
}

void func_856(var uParam0, vector3 vParam1, float fParam4, int iParam5)
{
	if (_0xa24c1d341c6e0d53(1, 0, 0))
	{
		return;
	}
	set_gameplay_hint_fov(fParam4);
	fVar0 = func_1003(vParam1, 1);
	if (!func_852(&(uParam0->f_3), 32))
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
	func_74(uParam0);
	func_1004(&(uParam0->f_3), 1);
}

Vector3 func_857(vector3 vParam0)
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

float func_858(vector3 vParam0, vector3 vParam3)
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

bool func_859(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

int func_860()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_751(iVar0, 1, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_861(int iParam0, int iParam1)
{
	if (func_751(iParam0, 1, 1))
	{
		func_133((*Global_1955500)[iParam0], iParam1);
	}
}

float func_862()
{
	return Global_1935436->f_9;
}

void func_863(int iParam0)
{
	if (iParam0 >= &Global_1935436)
	{
		return;
	}
	Global_1935436->f_1 = iParam0;
}

bool func_864(var uParam0, char* sParam1)
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

void func_865(var uParam0, char* sParam1)
{
	func_758(uParam0, sParam1, 0);
}

void func_866(int iParam0, int iParam1, bool bParam2)
{
	if (!func_127(iParam0))
	{
		return;
	}
	if (bParam2)
	{
		func_25(iParam0, iParam1);
	}
	else
	{
		func_9(iParam0, iParam1);
	}
}

void func_867(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_564((*uParam0)[iVar0], bParam1, bParam2);
		iVar0++;
	}
}

char[] func_868()
{
	switch (iVar1639)
	{
		case 0:
			return "HOME_LN02ANA";
		case 1:
			return "HOME_LN03ANA";
		case 2:
			return "HOME_LN04ANA";
		default:
			break;
	}
	return "";
}

void func_869(int iParam0, bool bParam1)
{
	if (*iParam0 != 3)
	{
		if (!func_110(iParam0->f_40, 0, 1))
		{
			*iParam0 = 3;
		}
	}
	switch (*iParam0)
	{
		case 0:
			func_1005(iParam0->f_40, Global_35, &(iParam0->f_1), iParam0->f_41, 0, 0, iParam0->f_43, iParam0->f_44, 1, 8, 0, 0, 1069547520, 1073741824, 1050253722, 1067030938, 0, 0, -1, 1, -1082130432, -1082130432, 1);
			if (!_does_volume_exist(iParam0->f_39))
			{
				iParam0->f_39 = _create_volume_cylinder(Global_36, 0f, 0f, 0f, 5f, 5f, 5f);
			}
			*iParam0 = 1;
			break;
		case 1:
			if (func_1006(iParam0))
			{
				if (bParam1)
				{
					clear_ped_tasks(iParam0->f_40, 1, 0);
				}
				func_1005(iParam0->f_40, Global_35, &(iParam0->f_1), iParam0->f_41, 0, 0, iParam0->f_43, iParam0->f_44, 1, 8, 0, 0, 1069547520, 1073741824, 1050253722, 1067030938, 0, 0, -1, 1, -1082130432, -1082130432, 1);
				func_1007(iParam0->f_40, Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
				*iParam0 = 2;
			}
			break;
		case 2:
			func_1007(iParam0->f_40, Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
			if (!func_1006(iParam0))
			{
				task_turn_ped_to_face_entity(iParam0->f_40, Global_35, -1, -1082130432, -1082130432, -1082130432);
				*iParam0 = 1;
			}
			break;
		case 3:
			break;
	}
}

int func_870(int iParam0)
{
	iVar1 = iParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_427(&iVar1, -2147483648);
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

bool func_871(int iParam0)
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

int func_872(int iParam0)
{
	if (!func_928(iParam0))
	{
		return 0;
	}
	iVar1 = func_1008(iParam0);
	iVar0 = iVar1;
	if (iVar0 < 0 || iVar0 >= 27)
	{
		return 0;
	}
	return Global_1360165[iVar0];
}

Vector3 func_873(int iParam0, vector3 vParam1, float fParam4, int iParam5)
{
	vVar0 = { func_857(vParam1) };
	vVar3 = { _0xf70f00013a62f866(iParam0) };
	iVar6 = 0;
	while (iVar6 < iParam5)
	{
		vVar7 = { vVar3 + vVar0 * Vector(fParam4, fParam4, fParam4) * FtoV(to_float(iVar6)) };
		if (!_0xf256a75210c5c0eb(iParam0, vVar7))
		{
			return vVar7;
		}
		iVar6++;
	}
	return vVar3;
}

void func_874(int iParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11, var uParam12, int iParam13, bool bParam14, int iParam15)
{
	if (iParam0 <= -1)
	{
		return;
	}
	if (bParam14)
	{
		iVar20 = func_1009(iParam0, iParam1);
		func_1010(&vVar0, &vVar10, iVar20, vParam3, vParam6, iParam9, iParam10, iParam11);
	}
	iVar21 = iParam2;
	iVar22 = 0;
	while (iVar22 < 3)
	{
		StringCopy(&cVar23, "", 32);
		iVar27 = 0;
		if (iVar21 > 0)
		{
			StringCopy(&cVar23, func_1011(iParam0, 3), 32);
			iVar21 = (iVar21 - 1);
			iVar27 = 1;
		}
		func_1013(iParam0, func_1012(iParam0), iVar27, bParam14, &cVar23, *vVar0[iVar22], *vVar10[iVar22], vParam6, iVar22, 0, -1082130432, uParam12, iParam13, iParam15);
		iVar22++;
	}
}

void func_875(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < func_642(1))
	{
		func_1014(Global_1359489[iVar0], iParam0);
		iVar0++;
	}
}

void func_876(bool bParam0)
{
	if (bParam0)
	{
		func_1015(4);
	}
	func_1015(2);
	set_bit(&(Global_1956580->f_1), 0);
}

Vector3 func_877()
{
	return -435.3392f, 524.2387f, 97.60092f;
}

bool func_878(int iParam0, var uParam1, vector3 vParam2, int iParam5, float fParam6, int iParam7, bool bParam8, int iParam9, bool bParam10, bool bParam11, float fParam12)
{
	if (!func_347(iParam0))
	{
		if (bParam11)
		{
			iVar0 = func_1016(7);
		}
		else
		{
			iVar0 = _get_last_mount(iParam0);
		}
		if (!func_322(iVar0, 1) || (!(_does_volume_exist(iParam5) && func_186(iVar0, iParam5, 1, 0)) && func_292(iParam0, iVar0, 1, 1) > fParam6))
		{
			return true;
		}
		if (!does_entity_exist(*uParam1))
		{
			if (func_501(iVar0) && func_502(iVar0) != 1)
			{
				Var2.f_10 = 7;
				Var2.f_1 = 1;
				*uParam1 = func_1017(&uVar1, &Var2);
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
		if (func_322(*uParam1, 1))
		{
			if (!(func_254(*uParam1, 518218985) || func_254(*uParam1, 713668775)))
			{
				clear_ped_tasks(*uParam1, 1, 0);
				iVar13 = 0;
				if (!bParam10)
				{
					iVar13 = 16640;
				}
				_0xff1e339ce40eaaaf(*uParam1, 0);
				_0xf74e134f40192884(*uParam1, 2);
				if (!func_225(vParam2))
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
				if (!bParam8 && func_225(vParam2))
				{
					_task_smart_flee_style_ped(*uParam1, iParam0, iParam7, iVar13, fParam6, 6000, 0);
				}
			}
		}
	}
	return false;
}

bool func_879(int iParam0, bool bParam1)
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

bool func_880(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, float fParam6, bool bParam7, float fParam8, float fParam9)
{
	if (is_entity_dead(iParam0) || is_entity_dead(player_ped_id()))
	{
		return false;
	}
	if (func_350(player_ped_id(), iParam0, 1) < (fParam8 * fParam8))
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
	if (func_1018(iParam0, bParam5))
	{
		if (func_1019(vVar0, iParam0, uParam1, iParam2, bParam3, iParam4, bParam5, bParam7, fParam9))
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

bool func_881(int iParam0, int iParam1)
{
	uVar0 = *iParam1;
	if (_0x3ee1f7a8c32f24e1(iParam0, &uVar0, false, false))
	{
		return true;
	}
	return false;
}

bool func_882(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (is_ped_in_combat(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

int func_883(int iParam0, vector3 vParam1, bool bParam4, int iParam5, int iParam6, float fParam7, float fParam8)
{
	if (iParam5 < 0 || iParam5 >= *iParam0)
	{
		iParam5 = 0;
	}
	if (iParam6 < 0 || iParam6 >= *iParam0)
	{
		iParam6 = (*iParam0 - 1);
	}
	if (fParam7 < 0f)
	{
		fParam7 = 0f;
	}
	if (fParam8 < 0f)
	{
		fParam8 = 999999.9f;
	}
	if (fParam7 > fParam8)
	{
	}
	iVar1 = 0;
	fVar3 = 1E+07f;
	iVar0 = iParam5;
	while (iVar0 <= iParam6)
	{
		if (!bParam4 || !is_entity_dead(iParam0[iVar0]))
		{
			fVar2 = func_685(iParam0[iVar0], vParam1, 1);
			if (fVar2 < fVar3)
			{
				if (fVar2 >= fParam7 && fVar2 <= fParam8)
				{
					fVar3 = fVar2;
					iVar1 = iParam0[iVar0];
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_884(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_1020(Global_1310750[iVar0], iParam0))
		{
			if (!func_1021(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_1022(iVar0) < func_1023(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_1024(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

void func_885()
{
	if (!func_402(1))
	{
		if (func_186(Global_35, (*Global_1392194)[Local_1389.f_136]->f_5, 1, 0))
		{
			func_400("SP_EVENT_AREA_CASTORS_2_START", 0);
			func_401(1);
		}
	}
}

void func_886(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (!is_entity_dead(iParam0))
	{
		remove_ped_defensive_area(iParam0, bParam3);
		_0xfc3db99c8144cd81(iParam0, uParam1, iParam2, bParam3, 0);
	}
}

bool func_887()
{
	if (func_27(32))
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < Local_386.f_1)
	{
		if (func_618(&(iLocal_1794[iVar0]), Global_35, 0, 45f, 0) && is_ped_facing_ped(&(iLocal_1794[iVar0]), Global_35, 67.5f))
		{
			open_sequence_task(&uLocal_1818);
			task_aim_gun_at_entity(0, Global_35, 1000, 0, 1);
			task_combat_hated_targets_in_area(0, get_entity_coords(func_58(Local_1389.f_138), true, false), 60f, 0, 16);
			close_sequence_task(iVar1816);
			task_perform_sequence(&(iLocal_1794[iVar0]), iVar1816);
			clear_sequence_task(&uLocal_1818);
			func_5(32);
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_888()
{
	if (!func_353(0, 1, &(iLocal_1794[0]), 1))
	{
		return false;
	}
	if (!func_358(vLocal_1578[8], 10f))
	{
		return false;
	}
	if (!func_889(Global_35, &iLocal_1794, 45f, 0, 0))
	{
		return false;
	}
	return true;
}

bool func_889(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < *iParam1)
	{
		if ((bParam3 || func_110(iParam1[iVar0], 0, !bParam4)) && func_292(iParam0, iParam1[iVar0], 1, 1) < fParam2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_890(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 8:
		case 16:
		case 128:
		case 256:
		case 1024:
		case 2048:
		case 16384:
		case 131072:
			return true;
		case 32:
		case 64:
		case 512:
		case 4096:
		case 8192:
		case 32768:
		case 65536:
		case 262144:
			return false;
		default:
			break;
	}
	return false;
}

bool func_891(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	if (_0x5463c962bc7777c3(iParam0, 0, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (_0x5463c962bc7777c3(iParam0, 2, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (_0x5463c962bc7777c3(iParam0, 1, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (_0x758f081db204ddde(iParam0))
	{
		return true;
	}
	return false;
}

void func_892(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_1() != -1)
	{
		return;
	}
	if ((Global_36616 && func_1025(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_1026(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_1027(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_1028(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_1027(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

void func_893(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_828(iParam0, 0, func_562(7));
	(*Local_125[iParam0])[0]->f_14 = 0;
	func_822((*Local_125[iParam0])[0], 1);
	func_747(iParam0, 0, !func_50(8388608));
	func_829(iParam0, 0, 0);
	func_828(iParam0, 1, func_562(10));
	func_747(iParam0, 1, 1);
	func_829(iParam0, 1, 0);
	func_828(iParam0, 2, func_562(12));
	func_829(iParam0, 2, 1);
	func_830(iParam0);
}

var func_894(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_895(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return _create_var_string(2, func_1029(sParam1));
}

void func_896(int iParam0)
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

void func_897(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam1;
}

bool func_898(var uParam0, int iParam1)
{
	if (func_278(&(uParam0->f_5), 5f))
	{
		return true;
	}
	if (func_147(uParam0->f_23, 2))
	{
		return true;
	}
	if (((!func_347(uParam0->f_1) && !func_254(uParam0->f_1, 501393341)) && !is_ped_in_any_vehicle(uParam0->f_1, true)) && !func_254(uParam0->f_1, -828834893))
	{
		return true;
	}
	return false;
}

bool func_899(var uParam0, int iParam1)
{
	if (func_278(&(uParam0->f_5), 4f))
	{
		return true;
	}
	if (!func_147(uParam0->f_23, 16384))
	{
		return true;
	}
	if (uParam0->f_1 != Global_35)
	{
		return true;
	}
	if (!func_1030(&uVar0))
	{
		return true;
	}
	return false;
}

int func_900()
{
	if (!func_1031())
	{
		return 0;
	}
	if (!func_1032(&iVar0))
	{
		return 0;
	}
	if (!func_1033(iVar0))
	{
		return 0;
	}
	return func_1034(iVar0, 0);
}

bool func_901(var uParam0, int iParam1)
{
	if (func_278(&(uParam0->f_5), 4f))
	{
		return true;
	}
	if (func_147(uParam0->f_23, 4))
	{
		return true;
	}
	get_current_ped_weapon(uParam0->f_1, &iVar0, true, 0, false);
	get_current_ped_weapon(uParam0->f_1, &iVar1, true, 1, false);
	if (func_147(uParam0->f_23, 512) || (iVar0 == -1569615261 && iVar1 == -1569615261))
	{
		return true;
	}
	return false;
}

int func_902(int iParam0)
{
	iVar0 = func_356(iParam0);
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

bool func_903(var uParam0, int iParam1)
{
	if (func_278(&(uParam0->f_5), 15f))
	{
		return true;
	}
	if (func_147(uParam0->f_23, 4096) && func_254(uParam0->f_1, 1245594896))
	{
		return false;
	}
	if (func_147(uParam0->f_23, 256))
	{
		return true;
	}
	if (get_script_task_status(uParam0->f_1, -208384378, true) == 8)
	{
		return true;
	}
	return false;
}

void func_904(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

bool func_905(int iParam0, vector3 vParam1, float fParam4, bool bParam5, float fParam6, bool bParam7)
{
	fVar0 = func_450(get_entity_heading(iParam0));
	fParam4 = func_450(fParam4);
	if (is_entity_at_coord(iParam0, vParam1, bParam5, bParam5, 2f, false, bParam7, 0) && absf((fVar0 - fParam4)) <= fParam6)
	{
		return true;
	}
	return false;
}

float func_906(int iParam0, vector3 vParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	vVar0 = { get_entity_coords(iParam0, true, false) };
	return (vVar0.z - vParam1.z);
}

bool func_907(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0) && is_entity_a_ped(iParam0))
	{
		iVar0 = func_1035(iParam0);
		return func_1036(iParam0, 2084597891, iParam1, iVar0);
	}
	return decor_set_int(iParam0, "loot_money", iParam1);
}

void func_908(int iParam0, char* sParam1, int iParam2, int iParam3)
{
	iVar0 = func_117(iParam0);
	func_1037(iVar0);
	func_1038(iParam3, sParam1, iParam2);
}

bool func_909(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_685(iParam0, Global_36, 1);
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

int func_910(int iParam0, var uParam1, int iParam2, bool bParam3)
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

bool func_911(bool bParam0, var uParam1, int iParam2, int iParam3, char* sParam4, int iParam5, float fParam6, int iParam7, bool bParam8, bool bParam9, int iParam10)
{
	if (bParam0)
	{
		return func_94(uParam1, sParam4, iParam2, iParam3, iParam7, bParam9, 1, 1);
	}
	return func_95(iParam2, iParam3, sParam4, iParam5, fParam6, iParam7, bParam8, bParam9, iParam10, 0, 1, 1744022339, 1, 0, 0);
}

void func_912(var uParam0)
{
	if (uParam0->f_75 != 0)
	{
		func_914(uParam0->f_75, 0, 1065353216, 1, 0, 0, 1, 752097756);
	}
	else if (uParam0->f_70 != 0)
	{
		func_915(uParam0->f_70, 0, 1065353216, 1, 0, 0, 0, -1);
	}
	if (func_967(uParam0->f_74, 0))
	{
		func_1039(uParam0->f_74, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	}
	if (uParam0->f_72 != 0)
	{
		if (uParam0->f_71)
		{
			iVar0 = (func_1040() + uParam0->f_72);
			func_1041(iVar0);
		}
		else
		{
			func_1042(uParam0->f_72, 1);
		}
	}
	if (uParam0->f_73 != 9)
	{
		func_892(uParam0->f_73, 0, 0, 0, 0, 0, 1065353216, 0);
	}
}

bool func_913(var uParam0, char* sParam1, vector3 vParam2, int iParam5, int iParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15, bool bParam16, bool bParam17, int iParam18, bool bParam19)
{
	if (!func_285(*uParam0))
	{
		iVar0 = 0;
		if (bParam17)
		{
			iVar0 = 5;
		}
		if (!is_entity_dead(iParam5))
		{
			*uParam0 = func_1043(sParam1, iParam6, iParam5, iParam10, fParam9, 0, iParam15, iVar0, 1070386381, 570, 4000, 10, 1073741824, 0, iParam18, 0, 0);
			func_1044(*uParam0, fParam7, 1);
		}
		else if (iParam13 != 0)
		{
			*uParam0 = func_1045(sParam1, iParam6, iParam13, iParam10, fParam9, iParam15, iVar0, 570, 4000, 10, 1073741824, 0, iParam18, 0);
		}
		else
		{
			if (func_225(vParam2))
			{
				return false;
			}
			*uParam0 = func_1046(sParam1, iParam6, vParam2, fParam7, iParam10, fParam9, iParam15, iVar0, 570, 4000, 10, 1073741824, 0, iParam18, 0);
		}
		if (fParam8 != 0f)
		{
			func_816(*uParam0, sParam1, ceil(absf(fParam8)), 1);
			if (ceil(absf(fParam8)) > func_1047(1))
			{
				func_818(*uParam0, 0, 1);
			}
		}
		if (!is_string_null_or_empty(sParam11))
		{
		}
		if (bParam19)
		{
			func_1048(*uParam0, 0, 1);
		}
		return false;
	}
	if (!bParam16)
	{
		if (func_1049(*uParam0, 0))
		{
			if (_is_ped_carrying(Global_35))
			{
				func_818(*uParam0, 0, 1);
			}
		}
		else if (!_is_ped_carrying(Global_35))
		{
			func_818(*uParam0, 1, 1);
		}
	}
	if (fParam8 != 0f)
	{
		if (ceil(absf(fParam8)) > func_1047(1))
		{
			func_818(*uParam0, 0, 1);
		}
	}
	if (bParam12)
	{
		if (does_entity_exist(iParam5) && is_entity_dead(iParam5))
		{
			if (func_285(*uParam0))
			{
				func_286(uParam0, 1, 1);
				return false;
			}
		}
	}
	if ((!bParam17 && func_1050(*uParam0, 1)) || (bParam17 && func_1051(*uParam0, 1)))
	{
		if (!bParam14)
		{
			if (fParam8 < 0f)
			{
				func_1052(ceil(absf(fParam8)), 0, 0, 1, 1);
			}
			else if (fParam8 > 0f)
			{
				func_914(ceil(absf(fParam8)), 0, 1065353216, 1, 0, 0, 1, 752097756);
			}
		}
		func_286(uParam0, 1, 1);
		return true;
	}
	return false;
}

void func_914(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_1053(iParam0, sParam4, iParam5);
	}
	func_1054(iParam0, bParam1, fParam2, iParam3, iParam7);
}

int func_915(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	iVar0 = func_1055(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_1053(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_1054(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

var func_916(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_917(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_834(iParam0, 0, 0);
	if (func_835(iParam0))
	{
		door_system_set_open_ratio(iParam0, iParam2, iParam6);
		if (fParam5 > 0f)
		{
			door_system_set_automatic_rate(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_1056(iParam0, iParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_1057(iParam0, 1);
			}
			else
			{
				func_1058(iParam0, 1);
			}
		}
		else
		{
			func_1059(iParam0, 1);
		}
		if (bParam7)
		{
			_0x276aaf0f1c7f2494(iParam0, 1);
		}
	}
	else if (func_1060())
	{
	}
	else if (network_is_in_session())
	{
	}
}

void func_918(int iParam0, int iParam1)
{
	func_917(iParam0, 0, 0, 0, 1, 0, 0, 0);
}

bool func_919(int iParam0, bool bParam1)
{
	func_834(iParam0, 0, 0);
	if (func_835(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1)
		{
			return false;
		}
		if (bParam1)
		{
			return door_system_get_open_ratio(iParam0) >= 0.99f;
		}
		else
		{
			return door_system_get_open_ratio(iParam0) <= -0.99f;
		}
	}
	return false;
}

bool func_920(bool bParam0)
{
	fVar0 = func_1061(1986792065);
	if (bParam0)
	{
		if (fVar0 < fVar1643)
		{
			return true;
		}
	}
	else if (fVar0 > fVar1643)
	{
		return true;
	}
	fLocal_1646 = fVar0;
	return false;
}

Vector3 func_921(var uParam0, char* sParam1, char* sParam2)
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

float func_922(var uParam0, char* sParam1, char* sParam2)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return 40000f;
	}
	vVar0 = { func_1062(uParam0, sParam1, sParam2) };
	if (!func_225(vVar0))
	{
		return vVar0.z;
	}
	return 40000f;
}

bool func_923(var uParam0)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return true;
	}
	return _is_anim_scene_finished(*uParam0, false);
}

int func_924(int iParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!is_itemset_valid(&Global_1396084))
	{
		return 0;
	}
	if (!func_393(iParam1))
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
		func_331(iParam0, 0);
		if (bParam3)
		{
			func_332(iParam0, 5);
		}
		else
		{
			func_332(iParam0, 6);
		}
		func_1063(iParam0, iParam1);
		if (!is_string_null_or_empty(sParam2))
		{
			iVar0 = get_hash_key(sParam2);
			if (!func_107(iVar0))
			{
				decor_set_int(iParam0, "pedRoam_hashKey", iVar0);
			}
		}
		return 1;
	}
	return 0;
}

void func_925(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_926(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_1064(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_1065(iParam0))
	{
		return false;
	}
	if (func_1066(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_1067(iParam0, 1)) || func_735(32768))
	{
		if (!func_1067(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_1068())
	{
		return false;
	}
	return true;
}

void func_927(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_928(int iParam0)
{
	return iParam0 > -1;
}

bool func_929(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_930(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_931(int iParam0)
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

void func_932(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_1069(iParam0, iParam1))
		{
			if (func_1070(iParam0, iParam1))
			{
				if (func_1071(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_1072(iParam0);
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

void func_933(int iParam0, int iParam1, bool bParam2)
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

void func_934(int iParam0, bool bParam1)
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

void func_935(int iParam0, int iParam1)
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

bool func_936(int iParam0)
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

bool func_937(int iParam0)
{
	if (!func_1073(iParam0))
	{
		return false;
	}
	return func_1074(iParam0);
}

bool func_938()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_939(int iParam0, bool bParam1)
{
	switch (func_1075(iParam0))
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

void func_940(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < func_1076(iParam0))
	{
		iVar1 = func_941(iParam0, iVar0);
		if (iVar1 != 0 && _map_is_discovery_active(iVar1))
		{
			_map_discovery_set_enabled(iVar1);
		}
		iVar0++;
	}
}

int func_941(int iParam0, int iParam1)
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

int func_942(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
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
				if (func_1077(iVar2, bParam4, bParam6, bParam8, bParam9, bParam10) && !decor_exist_on(iVar2, "bIgnoreThisPed"))
				{
					if (!func_269(iVar2, iParam1))
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

bool func_943(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

bool func_944(int iParam0)
{
	iParam0 = func_754(iParam0);
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

void func_945(int iParam0)
{
	if (is_player_dead(player_id()))
	{
		return;
	}
	iVar0 = func_1016(iParam0);
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
	if (func_1078(iParam0, 64))
	{
		func_946(iParam0);
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
	bVar3 = func_937(42);
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
				func_1079(&((*Global_1900383)[iParam0]->f_27));
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
		func_946(iParam0);
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
		if (func_1080(1) < 1)
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
		func_1081(&((*Global_1900383)[iParam0]->f_26), bVar6);
	}
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_1078(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = is_ped_in_writhe(iVar0);
	bVar10 = false;
	iVar11 = func_1082(iParam0);
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
	fVar15 = func_1083(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_1084(iParam0))
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
		func_1085((*Global_1900383)[iParam0]->f_26);
		func_1086((*Global_1900383)[iParam0]->f_26);
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
	if (func_453(iVar0) && !bVar9)
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
	iVar21 = func_1080(iParam0);
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

void func_946(int iParam0)
{
	iParam0 = func_754(iParam0);
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

bool func_947()
{
	if (func_1087())
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

void func_948(var uParam0, var uParam1)
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

bool func_949(bool bParam0, int iParam1, int iParam2)
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

int func_950(int iParam0)
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

void func_951(int iParam0)
{
	if (Global_1935630->f_38 == 0)
	{
		func_185(iParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1935630->f_34[iVar0])))
				{
					func_132(iParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

bool func_952(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_953(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_954(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_955()
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

var func_956(int iParam0)
{
	return iParam0->f_25;
}

struct<4> func_957(bool bParam0)
{
	return func_800(1328661203, func_1088(), -1591664384, bParam0);
}

int func_958(int iParam0)
{
	if (!func_967(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_959(bool bParam0)
{
	iVar0 = func_968(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_800(923904168, func_957(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_800(923904168, func_957(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_800(923904168, func_957(bParam0), -740156546, 0);
}

bool func_960(int iParam0, bool bParam1)
{
	if (func_962(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_937(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_961(bool bParam0)
{
	iVar0 = func_968(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_800(271701509, func_957(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_800(271701509, func_957(bParam0), 12999093, 0);
}

int func_962(int iParam0)
{
	if (!func_967(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_963(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_962(iParam0);
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

bool func_964(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_968(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_965(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_967(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_800(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_968(bParam6), &Var0, 0);
	return uVar4;
}

bool func_966(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_968(0);
	*uParam1 = { func_800(iParam0, func_959(0), iParam3, 0) };
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

bool func_967(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_968(bool bParam0)
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

bool func_969(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

bool func_970(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_971(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_1089(iParam0, iParam1))
		{
			if (!func_147(iParam1->f_10, 1))
			{
				set_ped_config_flag(iParam0, 130, false);
				set_ped_config_flag(iParam0, 315, false);
				set_ped_config_flag(iParam0, 297, false);
				set_ped_config_flag(iParam0, 178, true);
				func_576(uParam2, 0, 0, 1, 0);
				func_132(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_147(iParam1->f_10, 1))
		{
			func_1090(uParam2);
			set_ped_config_flag(iParam0, 130, true);
			set_ped_config_flag(iParam0, 315, true);
			set_ped_config_flag(iParam0, 297, true);
			set_ped_config_flag(iParam0, 178, false);
			func_185(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_972(int* iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!is_entity_dead(*iParam0))
	{
		_0xe98d55c5983f2509(*iParam0);
		bVar4 = func_147(iParam4, 32);
		func_748(iParam1, uParam2, 0);
		iVar5 = func_1091(*iParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			set_ped_config_flag(*iParam0, 178, false);
			return true;
		}
		func_576(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_147(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_147(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_147(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_147(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_147(iParam4, 8388608) || func_147(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_147(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_147(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_582(iParam1, 4))
		{
			iVar6 |= 1024;
			_0xbb1e41dd3d3c6250(*iParam0, "IloGeneralEvents", 2);
		}
		if (!func_582(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_147(iParam4, 67108864))
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
				iParam6 = func_1092(iParam0);
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
			if (func_147(iParam4, 268435456))
			{
				iVar8 = func_1093(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_1094(iParam1, (*uParam2)[iVar8]);
				}
			}
			if (func_582(iParam1, 23))
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
			if (func_147(iParam4, 2) || func_147(iParam4, 16))
			{
				func_973(*iParam0, 1, 1);
			}
			else
			{
				func_973(*iParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_973(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !is_entity_dead(iParam0))
	{
		set_ped_config_flag(iParam0, 317, bParam1);
	}
}

bool func_974(int* iParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_1095(*iParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_975(int* iParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_1096(*iParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_147(iParam10, 32), 1, 0);
			set_bit(iParam2, 1);
		}
	}
	else if (is_bit_set(*iParam2, 1))
	{
		clear_bit(iParam2, 1);
	}
}

void func_976(int iParam0)
{
	if (func_147(iParam0, 4))
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
	if (func_147(iParam0, 16384))
	{
		disable_control_action(0, -485697785, false);
	}
	if (func_147(iParam0, 8))
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
	}
}

bool func_977(int* iParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	iVar1 = func_1047(1);
	bVar2 = is_bit_set(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = is_ped_on_foot(Global_35);
	bVar10 = is_ped_injured(*iParam0);
	bVar11 = (((_is_ped_carrying(Global_35) || func_1097(Global_35)) || func_1098(Global_35)) || func_1099(Global_35));
	fVar12 = -1f;
	if (func_403(&(iParam1->f_13)))
	{
		fVar12 = func_348(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((*uParam4)[iVar0]->f_8 != iParam12)
		{
			iParam12 = (*uParam4)[iVar0]->f_8;
		}
		bVar4 = func_285((*uParam4)[iVar0]->f_6);
		func_1100(*iParam0, (*uParam4)[iVar0], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (is_bit_set(uParam4[iVar0], 20))
		{
			bVar3 = true;
		}
		if (func_1101(*iParam0, iParam1, (*uParam4)[iVar0], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_1102(iParam12, (*uParam4)[iVar0]->f_6))
				{
					if (!bVar7)
					{
						func_576(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_867(uParam4, 0, 0);
					}
					if (is_bit_set(uParam4[iVar0], 11))
					{
						func_748(iParam1, uParam4, is_bit_set(*iParam1, 6));
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
					if (func_1103(iParam1, fParam6, iParam1->f_9))
					{
						func_74(&(iParam1->f_18));
						if (bVar6)
						{
							func_867(uParam4, 0, 0);
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
		func_1104(iParam1, fParam2);
	}
	return bVar5;
}

void func_978(var uParam0)
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

void func_979(int* iParam0, var uParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_1105((*uParam1)[iVar0]))
		{
			if (is_bit_set(uParam1[iVar0], 20))
			{
				func_1104(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_980(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!is_control_pressed(0, -124244224))
		{
			if (func_1106(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_1107(iParam1, 0);
				func_748(iParam1, uParam2, func_582(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_981(int* iParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_74(&(iParam1->f_18));
			return false;
		}
		else if (func_403(&(iParam1->f_18)))
		{
			func_262(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_403(&(iParam1->f_18)))
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
	return func_278(&(iParam1->f_18), fParam2);
	return true;
}

void func_982(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_1100(iParam0, (*uParam2)[iVar0], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_983(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

int func_984(int* iParam0)
{
	if (func_582(iParam0, 0))
	{
		if (func_1108(iParam0))
		{
			func_983(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

void func_985(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_986(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_943(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_987(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_988(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

int func_989(int iParam0, int iParam1)
{
	func_834(iParam0, 0, 0);
	if (func_835(iParam0))
	{
		iVar0 = _0xf7424890e4a094c0(iParam0, iParam1);
		if (does_entity_exist(iVar0))
		{
			return iVar0;
		}
	}
	return 0;
}

void func_990(int iParam0)
{
	if (_does_anim_scene_exist(&(Local_1618[2])))
	{
		func_509(Local_1618[2], Local_386.f_690[2]->f_8, "HAMMER");
		func_281(Local_386.f_690[2]->f_8, 1, 1);
		func_509(Local_1618[2], Local_386.f_690[4]->f_8, "plank01");
		func_509(Local_1618[2], Local_386.f_690[5]->f_8, "plank02");
		func_509(Local_1618[2], Local_386.f_690[6]->f_8, "plank04");
		func_509(Local_1618[2], Local_386.f_690[7]->f_8, "plank03");
		func_509(Local_1618[2], Local_386.f_690[8]->f_8, "plank05");
		func_509(Local_1618[2], Local_386.f_690[9]->f_8, "nail01");
		func_509(Local_1618[2], Local_386.f_690[10]->f_8, "nail02");
		func_509(Local_1618[2], Local_386.f_690[11]->f_8, "nail03");
		func_509(Local_1618[2], Local_386.f_690[12]->f_8, "nail04");
	}
	if (!_0x083d497d57b7400f(Local_386.f_690[2]->f_8))
	{
		activate_physics(Local_386.f_690[2]->f_8);
	}
	iVar0 = 4;
	while (iVar0 <= 12)
	{
		if (!_0x083d497d57b7400f(Local_386.f_690[iVar0]->f_8))
		{
			activate_physics(Local_386.f_690[iVar0]->f_8);
		}
		iVar0++;
	}
	func_307(Local_1618[2]);
	func_841(11);
	if (func_100(iParam0, 0))
	{
		func_454(iParam0, 0, 1, 0, 0);
	}
}

int func_991(var uParam0, char* sParam1)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return 0;
	}
	return _0xae6ada8fe7e84acc(*uParam0, sParam1);
}

char* func_992(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return "PBL_F_POS_KNEEL";
						case 1:
							return "PBL_F_NEG_KNEEL";
					}
					break;
				case 3:
					switch (iParam2)
					{
						case 0:
							return "PBL_BL_POS_KNEEL";
						case 1:
							return "PBL_BL_NEG_KNEEL";
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return "PBL_BR_POS_KNEEL";
						case 1:
							return "PBL_BR_NEG_KNEEL";
					}
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return "PBL_F_POS_STAND01";
						case 1:
							return "PBL_F_NEG_STAND01";
					}
					break;
				case 3:
					switch (iParam2)
					{
						case 0:
							return "PBL_BL_POS_STAND01";
						case 1:
							return "PBL_BL_NEG_STAND01";
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return "PBL_BR_POS_STAND01";
						case 1:
							return "PBL_BR_NEG_STAND01";
					}
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return "PBL_F_POS_STAND02";
						case 1:
							return "PBL_F_NEG_STAND02";
					}
					break;
				case 3:
					switch (iParam2)
					{
						case 0:
							return "PBL_BL_POS_STAND02";
						case 1:
							return "PBL_BL_NEG_STAND02";
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return "PBL_BR_POS_STAND02";
						case 1:
							return "PBL_BR_NEG_STAND02";
					}
					break;
			}
			break;
	}
	return "";
}

bool func_993(var uParam0, char* sParam1)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return false;
	}
	return _0x0df57f86fe71dbe5(*uParam0, sParam1);
}

bool func_994(int iParam0, int iParam1)
{
	if (is_entity_dead(*iParam0))
	{
		return false;
	}
	if (iLocal_27 == 0)
	{
		return false;
	}
	if (iLocal_27 == 5 || iLocal_27 == 8)
	{
		return false;
	}
	if (has_anim_event_fired(*iParam0, -1053617727))
	{
		return false;
	}
	if (_0x9337183fda2e9035(*iParam0, get_player_index()) || _0xa454d234e45bb6e5(*iParam0, get_player_index()))
	{
		return true;
	}
	func_142(262144);
	if (func_1109(iVar331) != iParam1)
	{
		return false;
	}
	if (iVar330 == -1)
	{
		return false;
	}
	return true;
}

void func_995(int* iParam0, bool bParam1)
{
	if (!bParam1)
	{
		iParam0->f_4 = 0f;
	}
	func_822(iParam0, 7);
}

void func_996(int* iParam0, float fParam1)
{
	iParam0->f_4 = fParam1;
	func_821(iParam0, 7);
}

bool func_997(var uParam0)
{
	if (!func_1110(*uParam0, uParam0->f_4))
	{
		return false;
	}
	return true;
}

bool func_998(var uParam0)
{
	if (!func_997(uParam0))
	{
		return false;
	}
	if (func_1111(uParam0->f_7, uParam0->f_8, func_852(&(uParam0->f_3), 4)))
	{
		return true;
	}
	if (!func_852(&(uParam0->f_3), 4))
	{
		if (func_1112())
		{
			return true;
		}
	}
	return false;
}

bool func_999(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, float fParam5)
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
	if (func_1113(get_entity_coords(iParam0, true, false), fParam1, fParam2, 1, fParam5))
	{
		return true;
	}
	return false;
}

bool func_1000(float fParam0, float fParam1)
{
	if (is_ped_on_mount(Global_35))
	{
		return get_entity_speed(Global_35) < fParam0;
	}
	return get_entity_speed(Global_35) < fParam1;
}

bool func_1001(vector3 vParam0, var uParam3)
{
	if (!func_852(&(uParam3->f_3), 8))
	{
		return true;
	}
	if (func_823(vParam0, 0.06f, 0.94f, 0.1f, 0.8f))
	{
		return true;
	}
	return false;
}

bool func_1002(vector3 vParam0, var uParam3)
{
	fVar0 = func_1003(vParam0, 1);
	return fVar0 < uParam3->f_6;
}

float func_1003(vector3 vParam0, bool bParam3)
{
	vVar0 = { func_1114(0) };
	vVar3 = { func_857(vParam0 - get_gameplay_cam_coord()) };
	if (bParam3)
	{
		return absf(get_angle_between_2d_vectors(vVar3.x, vVar3.y, vVar0.x, vVar0.y));
	}
	return get_angle_between_2d_vectors(vVar3.x, vVar3.y, vVar0.x, vVar0.y);
}

void func_1004(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1005(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, bool bParam19, int iParam20, int iParam21, bool bParam22)
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
		func_1115(iParam0, iParam1, iParam18);
	}
}

bool func_1006(int iParam0)
{
	if (!_does_volume_exist(iParam0->f_39))
	{
		return true;
	}
	if (func_247(iParam0->f_40, 1, 1) < iParam0->f_42)
	{
		return false;
	}
	if (func_186(Global_35, iParam0->f_39, 1, 0))
	{
		return true;
	}
	if (!func_186(iParam0->f_40, iParam0->f_39, 1, 0))
	{
		return false;
	}
	return true;
}

void func_1007(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
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
		func_1116(bParam4, bParam5, bParam6, bParam7, bParam3, bParam9, bParam10);
		if (bParam2)
		{
			set_ped_reset_flag(iParam0, 188, true);
		}
	}
}

int func_1008(int iParam0)
{
	if (!func_928(iParam0))
	{
		return -1;
	}
	if (iParam0 >= func_642(1))
	{
		return -1;
	}
	if (iParam0 >= 3 || iParam0 < 0)
	{
		return -1;
	}
	return Global_1359489[iParam0];
}

int func_1009(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			if (iParam1 == 1)
			{
				return 0;
			}
			else if (iParam1 == 2)
			{
				return 1;
			}
			else if (iParam1 == 3)
			{
				return 2;
			}
			break;
		case 2:
			return 0;
	}
	return -1;
}

void func_1010(var uParam0, var uParam1, int iParam2, vector3 vParam3, vector3 vParam6, float fParam9, float fParam10, float fParam11)
{
	fVar0 = (fParam9 / 2f);
	fVar1 = (fParam10 / 2f);
	switch (iParam2)
	{
		case 0:
			vVar5 = { func_857(vParam6 - vParam3) };
			vVar8 = { func_1117(vVar5, 0f, 0f, 1f) };
			*(*uParam0)[0] = { vParam3 + func_1118(0f, 0f, 0f, fParam11, 0.1f) };
			*(*uParam0)[1] = { vParam3 + vVar8 * FtoV(get_random_float_in_range(fParam9, fParam10)) + func_1118(0f, 0f, 0f, fParam11, 0.1f) };
			*(*uParam0)[2] = { vParam3 - vVar8 * FtoV(get_random_float_in_range(fParam9, fParam10)) + func_1118(0f, 0f, 0f, fParam11, 0.1f) };
			*(*uParam1)[0] = { vVar5 };
			*(*uParam1)[1] = { vVar5 };
			*(*uParam1)[2] = { vVar5 };
			break;
		case 1:
			vVar2 = { func_1119() };
			*(*uParam1)[0] = { func_857(vVar2) };
			*(*uParam1)[1] = { -*(*uParam1)[0] };
			*(*uParam0)[0] = { vParam3 - *(*uParam1)[0] * FtoV(get_random_float_in_range(fVar0, fVar1)) + func_1118(0f, 0f, 0f, fParam11, 0.1f) };
			*(*uParam0)[1] = { vParam3 - *(*uParam1)[1] * FtoV(get_random_float_in_range(fVar0, fVar1)) + func_1118(0f, 0f, 0f, fParam11, 0.1f) };
			break;
		case 2:
			vVar2 = { func_1119() };
			*(*uParam1)[0] = { func_857(vVar2) };
			func_1120(&vVar2, &(vVar2.f_1), 120f);
			*(*uParam1)[1] = { func_857(vVar2) };
			func_1120(&vVar2, &(vVar2.f_1), 120f);
			*(*uParam1)[2] = { func_857(vVar2) };
			*(*uParam0)[0] = { vParam3 - *(*uParam1)[0] * FtoV(get_random_float_in_range(fVar0, fVar1)) + func_1118(0f, 0f, 0f, fParam11, 0.1f) };
			*(*uParam0)[1] = { vParam3 - *(*uParam1)[1] * FtoV(get_random_float_in_range(fVar0, fVar1)) + func_1118(0f, 0f, 0f, fParam11, 0.1f) };
			*(*uParam0)[2] = { vParam3 - *(*uParam1)[2] * FtoV(get_random_float_in_range(fVar0, fVar1)) + func_1118(0f, 0f, 0f, fParam11, 0.1f) };
			break;
	}
}

char* func_1011(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = 2;
			sVar1[0] = "INDIFF1";
			sVar1[1] = "INDIFF2";
			break;
		case 1:
			iVar0 = 1;
			if (iParam1 > 1)
			{
				sVar1[0] = "WAIT1";
			}
			else
			{
				sVar1[0] = "WAIT2";
			}
			break;
		case 2:
			iVar0 = 2;
			sVar1[0] = "SHOCK1";
			sVar1[1] = "SHOCK2";
			break;
		default:
			break;
	}
	return &(sVar1[get_random_int_in_range(0, iVar0)]);
}

var func_1012(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = 3;
			iVar1[0] = 830847823;
			iVar1[1] = -22664287;
			iVar1[2] = 2087366558;
			break;
		case 1:
			iVar0 = 3;
			iVar1[0] = -22664287;
			iVar1[1] = -1124614608;
			iVar1[2] = 830847823;
			break;
		case 2:
			iVar0 = 2;
			iVar1[0] = 2087366558;
			iVar1[1] = -1982207864;
			break;
		default:
			break;
	}
	return &(iVar1[get_random_int_in_range(0, iVar0)]);
}

void func_1013(int iParam0, var uParam1, int iParam2, bool bParam3, char* sParam4, vector3 vParam5, struct<2> Param8, int iParam10, vector3 vParam11, int iParam14, int iParam15, int iParam16, float fParam17, int iParam18, int iParam19)
{
	if (Global_1359489->f_63.f_241 >= 10)
	{
		return;
	}
	if (bParam3)
	{
		Var0.f_10 = func_1121(get_heading_from_vector_2d(Param8, Param8.f_1));
		Var0 = 1;
	}
	else
	{
		Var0.f_23 = 0;
		Var0.f_10 = 0f;
		Var0 = 2;
	}
	Var0.f_3 = uParam1;
	Var0.f_4 = { vParam5 };
	Var0.f_7 = { vParam11 };
	Var0.f_11 = iParam15;
	Var0.f_12 = iParam16;
	Var0.f_13 = (fParam17 * fParam17);
	Var0.f_1 = iParam0;
	Var0.f_2 = get_id_of_this_thread();
	Var0.f_14 = iParam18;
	Var0.f_15 = bParam3;
	Var0.f_16 = iParam2;
	StringCopy(&(Var0.f_19), sParam4, 32);
	Var0.f_17 = iParam19;
	*Global_1359489->f_63[iParam14] = { Var0 };
	if (Global_1359489->f_63[iParam14]->f_15)
	{
		func_1122(Global_1359489->f_63[iParam14]);
	}
}

void func_1014(int iParam0, int iParam1)
{
	if (!func_929(iParam0))
	{
		return;
	}
	iVar0 = Global_1360165[iParam0];
	if (does_entity_exist(iVar0))
	{
		if (!is_entity_dead(iVar0))
		{
			decor_set_int(iVar0, "companion_manager_watch_mode", iParam1);
		}
	}
}

void func_1015(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 || iParam0);
}

int func_1016(int iParam0)
{
	iParam0 = func_754(iParam0);
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

int func_1017(var uParam0, var uParam1)
{
	uParam1->f_10 = func_754(uParam1->f_10);
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
		if (func_225(uParam1->f_6))
		{
		}
	}
	bVar0 = func_938();
	if (*uParam1)
	{
		if (bVar0 && !func_939((*Global_1835011)[4]->f_1, 1))
		{
			if (func_1123(5))
			{
				func_1124(5);
				func_1125(5);
				func_1126(0);
				func_1127(0);
			}
		}
	}
	if (func_1128(Global_36) == 8)
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_939((*Global_1835011)[37]->f_1, 1)) && !func_939((*Global_1835011)[43]->f_1, 1))
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_939((*Global_1835011)[43]->f_1, 1)) && !func_939((*Global_1835011)[44]->f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_1016(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_944(iVar1))
	{
		bVar3 = true;
		if (func_1129(iVar1))
		{
			bVar4 = true;
		}
		if (func_1130(iVar1))
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
				func_1131(uParam1->f_10);
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
			if (!func_1123(0) && func_1123(1))
			{
				func_1132(1, 0);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_1133())
			{
				func_1134();
			}
			func_1126(0);
			func_1127(0);
			func_1135(uParam1->f_6);
		}
	}
	if (!func_944(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_1136(uParam1->f_10) == 0 || func_1137(uParam1->f_10) == 0) || func_1138(uParam1->f_10) == 0)
			{
				func_1139(uParam1->f_10);
			}
			func_1140(uParam1->f_10);
			func_1141(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*uParam0 = 0;
			return 0;
		}
		*uParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_1016(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_944(iVar1))
	{
		bVar3 = true;
		if (func_1129(iVar1))
		{
			bVar4 = true;
		}
		if (func_1130(iVar1))
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
			if (!func_225(uParam1->f_6))
			{
				set_entity_coords(iVar2, uParam1->f_6, false, true, true, true);
				set_entity_heading(iVar2, uParam1->f_9);
				_0x9587913b9e772d29(iVar2, 0);
			}
		}
	}
	if (func_1142(uParam1->f_10))
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
			Var8 = { func_1143(uParam1->f_10) };
			Var10 = { func_1144() };
			func_1145(iVar2, &Var8, &Var10, 0);
			_set_ped_as_saddle_horse_for_player(iVar6, iVar2);
			set_ped_config_flag(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*uParam0 = 2;
		return iVar2;
	}
	if (!func_506(uParam1->f_10))
	{
		set_entity_as_mission_entity(iVar2, true, true);
		func_1146(uParam1->f_10);
		if (uParam1->f_2 && !func_225(uParam1->f_6))
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
	func_504(uParam1->f_10);
	if (func_506(uParam1->f_10))
	{
		iVar16 = func_505(uParam1->f_10);
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

bool func_1018(int iParam0, float fParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (!is_entity_occluded(iParam0) && is_entity_on_screen(iParam0))
		{
			if (func_350(player_ped_id(), iParam0, 1) < (fParam1 * fParam1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_1019(vector3 vParam0, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7, float fParam8, bool bParam9, int iParam10)
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
				fVar2 = func_1147(iParam10);
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
			bVar0 = func_1148(bParam4, player_ped_id(), iParam3);
		}
	}
	else
	{
		bVar0 = func_1149(bParam4, player_ped_id(), vParam0);
	}
	if (bVar0)
	{
		*bParam6 = 1;
		if (*iParam5 != 0f)
		{
		}
		if (*iParam5 <= 0f)
		{
			*iParam5 = func_467();
		}
		else if ((func_467() - *iParam5) > bParam7)
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

bool func_1020(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_1021(int iParam0)
{
	if (!func_1150(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0]->f_4 > 0;
}

int func_1022(int iParam0)
{
	if (func_1150(iParam0))
	{
		return Global_17504.f_42[iParam0]->f_4;
	}
	return 0;
}

int func_1023(int iParam0)
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

void func_1024(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	func_1151(iParam0, bParam3, round((fVar0 * fParam2)), round((fVar1 * fParam2)), round((fVar2 * fParam2)), round((fVar3 * fParam2)), bParam4, 1);
}

int func_1025(int iParam0)
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

int func_1026(int iParam0)
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

void func_1027(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_1152();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_1153(iParam0);
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
	if (func_937(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_955())
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
	Global_40.f_11095.f_35 = func_1154(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_1152();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_1155(iVar1);
		func_1157(func_1156(), 0, 4000);
		func_1158(Global_40.f_11095.f_35);
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
		func_1159(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_738(func_1160(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (does_entity_exist(iParam5))
			{
				decor_set_int(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_1026(14))
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
					sParam4 = func_1161(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_1162(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_1162(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_738(func_1160(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_1026(4))
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
					sParam4 = func_1161(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_1162(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_1162(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_1160(-1990689970) };
	stat_id_set_int(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		_0xe6b763c7f4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_1163(10, 1);
	}
}

void func_1028(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

char* func_1029(char* sParam0)
{
	return sParam0;
}

bool func_1030(int iParam0)
{
	if (-1829635046 == func_1164(81053684))
	{
		if (func_1032(iParam0))
		{
			return true;
		}
	}
	else if (func_1165(-525676072, iParam0))
	{
		if (func_1032(iParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_1031()
{
	return Global_1946804->f_2792;
}

bool func_1032(int iParam0)
{
	if (func_1165(81053684, iParam0))
	{
		return true;
	}
	if (func_1165(-525676072, iParam0))
	{
		return true;
	}
	return false;
}

bool func_1033(int iParam0)
{
	if (func_1166())
	{
		return false;
	}
	if (!func_967(iParam0, 0))
	{
		return false;
	}
	if (!func_1167(iParam0, 1, 0))
	{
		_0xbfff81e12a745a5f();
		return false;
	}
	return true;
}

int func_1034(int iParam0, int iParam1)
{
	bVar3 = func_1168(iParam0);
	if (func_1169(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_1030(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_1170();
			}
			else
			{
				iVar0 = func_1171();
			}
		}
		else if (func_154(iParam1, 1))
		{
			iVar0 = 0;
		}
		else if (bVar1)
		{
			iVar0 = func_1172();
		}
		else
		{
			iVar0 = func_1173();
		}
	}
	else if (func_1032(&iVar2))
	{
		if (func_1169(iVar2, -1303648999))
		{
			iVar0 = func_1170();
		}
		else
		{
			iVar0 = func_1171();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_1172();
	}
	else
	{
		iVar0 = func_1173();
	}
	if (iVar0 != 0)
	{
		Global_1946804->f_2791 = get_game_timer();
		_task_item_interaction(Global_35, iParam0, iVar0, 1, iParam1, -1082130432);
		return 1;
	}
	return 0;
}

int func_1035(int iParam0)
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

var func_1036(int iParam0, int iParam1, int iParam2, int iParam3)
{
	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = iParam1;
	Var0.f_12[0] = iParam2;
	iVar23 = 13;
	return _0xa88e215ceb0435c0(iParam0, &Var0, iParam3, iVar23, 2, 0);
}

void func_1037(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_1047(1) < iParam0)
	{
		iParam0 = func_1047(1);
	}
	_money_decrement_cash_balance(iParam0);
	Var0 = { func_1160(1644987397) };
	_0xbd861ae8a5181ed7(&Var0, iParam0);
}

void func_1038(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_1162(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

int func_1039(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_967(iParam0, 0))
	{
		return 0;
	}
	if (!func_1174(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_1175(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_1176(iParam0, bParam2);
	iVar2 = 0;
	if (func_1177(iParam0, 0, 0) == 0)
	{
		if (func_1178(iParam0))
		{
			iVar5 = func_1179(iParam0);
			iVar6 = func_1180(iVar5);
			iVar7 = func_1181(iVar6) + 1;
			func_1182(iVar5);
			if (func_1183(38))
			{
				func_716(483, 0);
			}
			else
			{
				func_716(482, 0);
			}
			if (iVar7 == func_1184(iVar6))
			{
				func_1039(func_1185(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_938() && func_1186(4))
				{
					if (func_938() && (func_1187(38) || func_1183(38)))
					{
						func_1189(38, func_1185(iVar6), 0, 0, func_1188(), 0, -1, 0);
						func_1190(2);
					}
					else
					{
						func_1189(38, func_1185(iVar6), 0, 0, func_1188(), 0, -1, 0);
						func_1190(1);
					}
				}
			}
			else if (func_938() && func_1186(4))
			{
				if (func_938() && (func_1187(38) || func_1183(38)))
				{
					func_1189(38, 0, 0, 0, func_1188(), 0, -1, 0);
					func_1190(2);
				}
				else
				{
					func_1189(38, 0, 0, 0, func_1188(), 0, -1, 0);
					func_1190(1);
				}
			}
			if (func_938() && func_1186(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_938() && (func_1187(38) || func_1183(38)))
					{
						func_1191(38, _0x13aaecda43318bfe(-2076669067, iVar6), _0xd52d20b0c76bb26d(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_1191(38, get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_958(iParam0) == -1037537535)
	{
		if ((!func_1169(iParam0, 866047851) && !func_1169(iParam0, -1979000645)) && !func_1169(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_1192(iParam0, 8388608) && !func_937(28))
	{
		func_1193(28);
	}
	if (!bVar3)
	{
		if (func_1169(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_962(iParam0) == -1447088266)
			{
				iVar1 = func_1195(func_1194(iParam0, 1), 0);
				if (is_weapon_valid(iVar1))
				{
					if (func_1() == -1)
					{
						func_1196(iVar1);
					}
					if (func_802(0) && func_547(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_803(iParam0, iVar0, iParam5);
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
					if (func_1() == -1)
					{
						func_1196(iParam0);
					}
					if (func_802(0) && func_547(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_803(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_958(iParam0) == -427144552)
		{
			if (!func_1197(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_958(iParam0) == 307971639 && func_970(iParam0))
		{
			if (!func_1198(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_1169(iParam0, 866047851))
		{
			func_1199(iParam0);
		}
		else if (func_1169(iParam0, 2000026003))
		{
			func_1200(iParam0);
		}
		else if (func_1169(iParam0, -103750053))
		{
			func_738(func_1201(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_738(func_737(-717883113, 2091222383), iVar0);
		}
		else if (func_1169(iParam0, -121341956) && !func_1169(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_939((*Global_1835011)[4]->f_1, 1))
				{
					func_716(498, 0);
				}
			}
			if (func_1169(iParam0, -2017733358) || func_1169(iParam0, -1369131378))
			{
				func_1202(iParam0);
			}
		}
		else if (func_1169(iParam0, -136654233))
		{
			if (func_1169(iParam0, -1021472396))
			{
			}
		}
		else if (func_1169(iParam0, -1466706512) && func_1169(iParam0, 1147021565))
		{
			func_716(484, 0);
		}
		else if (func_1169(iParam0, 1147021565) && func_1169(iParam0, -524514947))
		{
		}
		else if (func_1169(iParam0, 554195525))
		{
		}
		else if (func_1169(iParam0, 589988438))
		{
			if (func_1203())
			{
				func_915(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_1169(iParam0, 787083290) && func_1169(iParam0, 949916894))
		{
			func_1204(iParam0);
		}
		else if (func_1169(iParam0, -1718133314))
		{
			func_1205(iParam0);
		}
		else if (func_1169(iParam0, -1738650224))
		{
			func_1206(iParam0);
		}
		else if (func_1169(iParam0, -1112814642) && func_1169(iParam0, 949916894))
		{
			func_1207(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_1169(iParam0, 1841149704))
		{
			func_1208();
		}
		else if (func_1169(iParam0, 606799272))
		{
			func_1209(iParam0, iParam1);
			func_1210(iParam0);
		}
		else if (func_1169(iParam0, -1112814642) && func_1169(iParam0, -1697809989))
		{
			func_1211(iParam0, 0, 0, 0);
		}
		else if (func_1169(iParam0, -2017733358) || func_1169(iParam0, -1369131378))
		{
			func_1202(iParam0);
		}
		else if (func_1169(iParam0, -1921346699))
		{
			if (func_1() != -1)
			{
				return 0;
			}
			func_1212(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_1169(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_1167(215778062, 1, 0))
					{
						func_1039(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_1167(670273567, 1, 0))
					{
						func_1039(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_1167(-967317137, 1, 0))
					{
						func_1039(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_1167(526074061, 1, 0))
					{
						func_1039(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_1167(-1045488665, 1, 0))
					{
						func_1039(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_1167(471514780, 1, 0))
					{
						func_1039(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_1169(iParam0, -839724752) && func_1192(iParam0, 4))
		{
			if (!func_1183(42))
			{
				func_1213(iParam0);
			}
		}
		else if (func_1169(iParam0, 1399091007))
		{
			func_1214(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_1169(iParam0, 1248798204))
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
				func_1039(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1193(24);
				if (&Global_1946804->f_1497.f_1[27] == &Global_1946804->f_57[27])
				{
					func_1215(player_ped_id(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_1216(&iVar9, 0))
				{
					func_547(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_1() == -1 && &Global_1946804->f_1497.f_1[25] == &Global_1946804->f_57[25])
				{
					func_1215(player_ped_id(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case -160924582:
				break;
			case 2131771850:
				func_716(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_1217();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_1218();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_1219();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_1220();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_1221();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_1222(499813453, 854119837, 0);
				func_1223(499813453, 0);
				func_1224(1);
				break;
			case 2127812557:
				func_1222(499813453, -1292544588, 0);
				func_1223(499813453, 0);
				func_1224(2);
				break;
			case 808991383:
				func_1222(499813453, -1003325394, 0);
				func_1223(499813453, 0);
				func_1224(4);
				break;
			case 1134518629:
				func_1222(666607663, -335460405, 0);
				func_1223(666607663, 0);
				func_1225(1);
				break;
			case 902940106:
				func_1222(666607663, 903797617, 0);
				func_1223(666607663, 0);
				func_1225(2);
				break;
			case -418174898:
				func_1222(666607663, 669728650, 0);
				func_1223(666607663, 0);
				func_1225(4);
				break;
			case -648114971:
				func_1222(-220219788, 1214120047, 0);
				func_1223(-220219788, 0);
				func_1226(1);
				break;
			case 211153747:
				func_1222(-220219788, 655769340, 0);
				func_1223(-220219788, 0);
				func_1226(2);
				break;
			case -32876996:
				func_1222(-220219788, 885316185, 0);
				func_1223(-220219788, 0);
				func_1226(4);
				break;
			case 1191437462:
				func_1222(218622660, -1491419385, 0);
				func_1223(218622660, 0);
				func_1227(1);
				break;
			case 1119149048:
				func_1222(218622660, 1809565830, 0);
				func_1223(218622660, 0);
				func_1227(2);
				break;
			case 506073827:
				func_1222(390004462, -628873767, 0);
				func_1223(390004462, 0);
				func_1228(1);
				break;
			case -1876986168:
				func_1222(390004462, -405421956, 0);
				func_1223(390004462, 0);
				func_1228(2);
				break;
			case 2142623221:
				func_1222(390004462, -1108972386, 0);
				func_1223(390004462, 0);
				func_1228(4);
				break;
			case 1508215381:
				func_1222(6410548, 1053716392, 0);
				func_1223(6410548, 0);
				func_1229(1);
				break;
			case -888935280:
				func_1222(6410548, 806507056, 0);
				func_1223(6410548, 0);
				func_1229(2);
				break;
			case -1252474566:
				func_1222(6410548, 1571925350, 0);
				func_1223(6410548, 0);
				func_1229(4);
				break;
			case -1465702449:
				func_1222(6410548, 1330352282, 0);
				func_1223(6410548, 0);
				func_1229(8);
				break;
			case -21093309:
				func_1231(242, func_1230(-21093309), 0);
				break;
			case 204375141:
				func_1231(240, func_1230(204375141), 0);
				break;
			case -417963070:
				func_1231(241, func_1230(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_1232(594, 1934060482, 1, 1);
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
					func_1232(594, 1110018439, 1, 1);
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
					func_1232(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_1232(594, -1228016946, 1, 1);
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
					func_1232(595, -103579, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_1232(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case 80178851:
				func_716(488, 0);
				break;
			case 1613651027:
				func_716(491, 0);
				break;
			case -885810591:
				func_716(485, 0);
				if ((get_random_int_in_range(0, 65536) % 3) == 0)
				{
					func_1039(func_1233(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_1039(func_1234(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_937(1))
				{
					func_716(487, 0);
				}
				break;
			case -898386032:
				func_716(486, 0);
				break;
			case -2035110427:
				if (func_1() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_716(496, 0);
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
		func_1235(&iVar10);
		if (!func_1236(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_802(0))
		{
			return 1;
		}
		if (func_958(iParam0) == -1037537535)
		{
			func_1237(iParam0);
		}
		if (func_1169(iParam0, -1979000645))
		{
			func_1238(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_802(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_1039(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_1239(iVar2, 0);
		}
	}
	Var35 = { func_1240(iParam0) };
	if (_stat_id_is_valid(&Var35))
	{
		_0x6a0184e904cdf25e(&Var35, iVar0);
	}
	func_1241(iParam0);
	if (fParam6 > 0f)
	{
		if (func_1169(iParam0, -839724752))
		{
			func_1242(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_1243(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

int func_1040()
{
	if (func_1() != -1)
	{
		return 0;
	}
	return func_1244(661720433);
}

void func_1041(int iParam0)
{
	if (func_1() != -1)
	{
		return;
	}
	if (iParam0 > 3000 || iParam0 < 0)
	{
		return;
	}
	else
	{
		Var0 = { func_1160(661720433) };
		stat_id_set_int(&Var0, iParam0, true);
	}
}

void func_1042(int iParam0, int iParam1)
{
	if (func_1() != -1)
	{
		return;
	}
	if (func_1030(&uVar0))
	{
		return;
	}
	iVar1 = iParam1;
	if (func_1245())
	{
		iVar1 = 0;
	}
	func_1246(iParam0, iVar1);
}

int func_1043(char* sParam0, int iParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16)
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
		if (func_943(iVar0, 2))
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
				func_1247(iVar1, iParam1, sParam0, 5, iParam3, fParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, bParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_1044(int iParam0, float fParam1, bool bParam2)
{
	if (bParam2 && !func_285(iParam0))
	{
		return;
	}
	if (fParam1 <= 0f)
	{
		return;
	}
	iVar0 = func_488(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	(*Global_1945938)[iVar0]->f_9 = fParam1;
	_uiprompt_context_set_size((*Global_1945938)[iVar0]->f_3, fParam1);
}

int func_1045(char* sParam0, int iParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13)
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
		if (func_943(iVar0, 2))
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
		func_1247(iVar1, iParam1, sParam0, 2, iParam3, fParam4, 0f, 0f, 0f, 0f, iParam2, 0, 1, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, 1065353216, 0, 0, 0, iParam12, bParam13);
		return iVar1;
	}
	return 0;
}

int func_1046(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	if (func_225(vParam2))
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
		if (func_943(iVar0, 2))
		{
			if (func_1248(vParam2, (*Global_1945938)[iVar0]->f_6, 0.01f, 1) && iParam1 == (*Global_1945938)[iVar0]->f_4)
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
		func_1247(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

int func_1047(int iParam0)
{
	return _money_get_cash_balance();
}

void func_1048(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_285(iParam0))
	{
		return;
	}
	iVar0 = func_488(iParam0);
	func_986(iVar0, bParam1);
}

bool func_1049(int iParam0, bool bParam1)
{
	if (bParam1 && !func_285(iParam0))
	{
		return false;
	}
	return !func_943(iParam0, 4);
}

bool func_1050(int iParam0, bool bParam1)
{
	if (bParam1 && !func_285(iParam0))
	{
		return false;
	}
	iVar0 = func_488(iParam0);
	return _uiprompt_is_just_pressed((*Global_1945938)[iVar0]->f_3);
}

bool func_1051(int iParam0, bool bParam1)
{
	if (bParam1 && !func_285(iParam0))
	{
		return false;
	}
	iVar0 = func_488(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

void func_1052(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_1037(iParam0);
	if (bParam3)
	{
		func_1038(iParam0, sParam1, iParam2);
	}
}

void func_1053(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_1162(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_1054(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_1249())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_1162(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_1250(iVar0);
			func_1251(iVar0, 0, 0);
		}
		func_1162(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		_money_increment_cash_balance(iVar1, iParam4);
		func_738(func_1160(1644987397), iVar1);
	}
}

int func_1055(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_1167(1811977508, 1, 0))
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
			if (func_967(iVar25, 0) && func_1169(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_1056(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_835(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam2)
		{
			door_system_set_door_state(iParam0, 1);
		}
		door_system_set_open_ratio(iParam0, iParam1, iParam3);
	}
}

void func_1057(int iParam0, bool bParam1)
{
	if (func_835(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 2 || bParam1)
		{
			door_system_set_door_state(iParam0, 2);
		}
	}
}

void func_1058(int iParam0, bool bParam1)
{
	if (func_835(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam1)
		{
			door_system_set_door_state(iParam0, 1);
		}
	}
}

void func_1059(int iParam0, bool bParam1)
{
	if (func_835(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 0 || bParam1)
		{
			door_system_set_door_state(iParam0, 0);
		}
	}
}

bool func_1060()
{
	return true;
}

float func_1061(int iParam0)
{
	func_834(iParam0, 0, 0);
	if (func_835(iParam0))
	{
		return door_system_get_open_ratio(iParam0);
	}
	return -1f;
}

Vector3 func_1062(var uParam0, char* sParam1, char* sParam2)
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

void func_1063(int iParam0, int iParam1)
{
	decor_set_int(iParam0, "pedRoam_targetRegion", iParam1);
}

bool func_1064(int iParam0, int iParam1)
{
	if (func_1() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_1065(int iParam0)
{
	if (func_1() != -1)
	{
		if (func_1067(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_1067(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_1066(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_1067(iParam0, 65536) && !func_1067(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_1067(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_1067(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1067(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_1068()
{
	return Global_1905944->f_5694;
}

bool func_1069(int iParam0, int iParam1)
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

bool func_1070(int iParam0, int iParam1)
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

bool func_1071(int iParam0, int iParam1)
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
	if (!func_1069(iParam0, iVar0))
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

void func_1072(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

bool func_1073(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_1074(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

int func_1075(int iParam0)
{
	if (!func_385(iParam0))
	{
		return -1;
	}
	return func_1252(iParam0);
}

int func_1076(int iParam0)
{
	if (!func_127(iParam0))
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

bool func_1077(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
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
	if (bParam3 && func_1253(iParam0))
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
		if (func_98(iParam0, 0) != -1)
		{
			return false;
		}
	}
	return true;
}

bool func_1078(int iParam0, int iParam1)
{
	iParam0 = func_754(iParam0);
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

void func_1079(var uParam0)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1255(func_1254(255), 109029619));
	}
	else if (func_1256())
	{
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_955();
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_1080(int iParam0)
{
	iParam0 = func_754(iParam0);
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

void func_1081(var uParam0, bool bParam1)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1255(func_1254(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_1256())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_955())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (compare_strings(sVar0, "", false, -1) != 0)
		{
			set_blip_name_from_text_file(*uParam0, sVar0);
		}
	}
}

int func_1082(int iParam0)
{
	iParam0 = func_754(iParam0);
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

float func_1083(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

float func_1084(int iParam0)
{
	iParam0 = func_754(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_1136(iParam0);
	if (!is_model_valid(iVar0))
	{
		return -1f;
	}
	iVar1 = func_1080(iParam0);
	iVar2 = get_default_max_attribute_rank(iVar0, 7);
	fVar3 = _0xeb67d4e056c85a81(iVar1);
	fVar4 = _0x78d8c1d4eb80c588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_1080(iParam0) + 1;
	fVar6 = func_1257(iParam0);
	fVar7 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar1));
	fVar8 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_1258(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_1085(int iParam0)
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

void func_1086(int iParam0)
{
	_set_blip_flash_style(iParam0, 673950256);
	_set_blip_flash_style(iParam0, 561559387);
	_set_blip_flash_style(iParam0, -201249929);
}

bool func_1087()
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

struct<4> func_1088()
{
	return Var0;
}

bool func_1089(int iParam0, int* iParam1)
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
		if (is_ped_in_combat(iParam0, func_1259((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_1090(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_1105((*uParam0)[iVar0]))
		{
			func_821((*uParam0)[iVar0], 14);
		}
		iVar0++;
	}
}

int func_1091(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(*uParam2)[iVar0]->f_8 = 6;
		func_1260(iParam0, (*uParam2)[iVar0], fParam3, 3, 0, 6, bParam4, 0);
		if (func_285((*uParam2)[iVar0]->f_6))
		{
			func_821((*uParam2)[iVar0], 11);
			return (*Global_1945938)[(*uParam2)[iVar0]->f_6]->f_3;
		}
	}
	return 0;
}

int func_1092(int* iParam0)
{
	iVar0 = func_1261(*iParam0);
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

int func_1093(var uParam0, int iParam1)
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

void func_1094(int* iParam0, int* iParam1)
{
	if (!func_582(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_821(iParam1, 19);
			func_1107(iParam0, 23);
			func_1262(iParam1, 2);
		}
	}
}

bool func_1095(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (func_1263(16))
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
					func_1264(16);
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

void func_1096(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_1260(iParam0, (*uParam1)[iVar0], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			clear_bit((*uParam1)[iVar0], 14);
		}
		iVar0++;
	}
}

bool func_1097(int iParam0)
{
	return (func_1265(iParam0, 4) || func_1265(iParam0, 5));
}

int func_1098(int iParam0)
{
	return func_1265(iParam0, 7);
}

int func_1099(int iParam0)
{
	return func_1265(iParam0, 6);
}

void func_1100(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (is_bit_set(*iParam1, 14))
	{
		if (func_1105(iParam1))
		{
			clear_bit(iParam1, 14);
			func_1260(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_1101(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_1266(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_1049(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_818(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_818(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_1267(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_1102(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_1051(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_1268(iParam1, 1))
	{
		func_1269(iParam1, 1);
		return true;
	}
	return false;
}

bool func_1103(int* iParam0, float fParam1, bool bParam2)
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

void func_1104(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		disable_control_action(0, 1101824977, true);
		disable_control_action(0, 966551065, true);
		disable_control_action(0, 668058244, true);
		set_ped_reset_flag(Global_35, 203, true);
	}
}

bool func_1105(int* iParam0)
{
	if (!is_string_null_or_empty(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_1106(int iParam0)
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

void func_1107(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

bool func_1108(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

int func_1109(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 64;
		case 1:
			return 65;
		case 2:
			return 66;
		default:
			break;
	}
	return -1;
}

bool func_1110(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (!func_403(&uParam0))
	{
		return false;
	}
	if (func_470(&uParam0) <= iParam3 + 500)
	{
		return false;
	}
	return true;
}

bool func_1111(float fParam0, float fParam1, bool bParam2)
{
	func_1270(&uVar0, &uVar1, &iVar2, &iVar3, 529461124, 1410914475, -1497929239, 665185216, 2);
	if (!bParam2)
	{
		if (iVar2 != 0 || iVar3 != 0)
		{
			return true;
		}
	}
	if (!func_1000(fParam0, fParam1))
	{
		return true;
	}
	return false;
}

bool func_1112()
{
	if (((((((((((is_control_pressed(0, -1879280170) || is_control_pressed(0, 1537201378)) || is_control_pressed(0, -1175108432)) || is_control_pressed(0, 1520437207)) || is_control_pressed(0, -1292666904)) || is_control_pressed(0, -640622144)) || is_control_pressed(0, -455946723)) || is_control_pressed(0, -1242632265)) || is_control_pressed(0, -485697785)) || is_control_pressed(0, -822242784)) || is_control_pressed(0, 782960533)) || is_control_pressed(0, -874806616))
	{
		return true;
	}
	return false;
}

bool func_1113(vector3 vParam0, float fParam3, float fParam4, bool bParam5, float fParam6)
{
	fVar0 = func_685(Global_35, vParam0, 1);
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

Vector3 func_1114(int iParam0)
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
	return func_857((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

void func_1115(int iParam0, int iParam1, int iParam2)
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

void func_1116(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
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
	func_876(0);
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

Vector3 func_1117(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

Vector3 func_1118(vector3 vParam0, float fParam3, float fParam4)
{
	vVar0 = { get_random_float_in_range(-1f, 1f), get_random_float_in_range(-1f, 1f), 0f };
	fVar3 = (fParam4 / 2f);
	vVar0 = { func_1271(vVar0, get_random_float_in_range(0f, fParam3)) };
	vVar0.f_2 = get_random_float_in_range(-fVar3, fVar3);
	return vParam0 + vVar0;
}

Vector3 func_1119()
{
	vVar0 = { 1f, 0f, 0f };
	func_1120(&vVar0, &(vVar0.f_1), get_random_float_in_range(0f, 360f));
	return vVar0;
}

void func_1120(var uParam0, var uParam1, float fParam2)
{
	fVar0 = *uParam0;
	fVar1 = *uParam1;
	*uParam0 = ((fVar0 * cos(fParam2)) - (fVar1 * sin(fParam2)));
	*uParam1 = ((fVar0 * sin(fParam2)) + (fVar1 * cos(fParam2)));
}

float func_1121(float fParam0)
{
	return (fParam0 * 0.01745329f);
}

int func_1122(var uParam0)
{
	if (_does_scenario_point_exist(uParam0->f_23))
	{
		if (_get_ped_using_scenario_point(uParam0->f_23) != func_1272())
		{
			return 0;
		}
		else
		{
			_delete_scenario_point(uParam0->f_23);
		}
	}
	if (func_729(&(uParam0->f_4), 50, 10, 0))
	{
		if (uParam0->f_3 != 0)
		{
			uParam0->f_23 = func_1274(uParam0->f_3, uParam0->f_4, func_1273(uParam0->f_10), uParam0->f_11, uParam0->f_12, 0);
		}
		_0xe69fda40aac3efc0(uParam0->f_23, 0);
		uParam0->f_15 = 1;
		return 1;
	}
	return 0;
}

bool func_1123(int iParam0)
{
	iParam0 = func_754(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_1138(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_1124(int iParam0)
{
	iParam0 = func_754(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_944(iParam0))
	{
		return;
	}
	iVar0 = func_1016(iParam0);
	func_1275(iParam0);
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	iVar1 = get_entity_model(iVar0);
	if (_0xaa9f048dcf69b6dc(iVar1))
	{
		if (!func_1276(iVar1))
		{
			set_ped_model_is_suppressed(iVar1, false);
		}
	}
	delete_ped(&iVar0);
	func_1277(iParam0, 0);
	func_507(iParam0);
}

void func_1125(int iParam0)
{
	iParam0 = func_754(iParam0);
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
	func_1278(&Var0);
	func_1279(iParam0, Var0);
	func_1280(&(Global_40.f_1095.f_1[iParam0]->f_15));
	func_1281(&(Global_40.f_1095.f_1[iParam0]->f_298));
	func_1282(&(Global_40.f_1095.f_1[iParam0]->f_356));
	func_1283(&(Global_40.f_1095.f_1[iParam0]->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_1284(iVar2, Global_40.f_1095.f_1[iParam0]->f_398[iVar2]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_1285(iVar3, Global_40.f_1095.f_1[iParam0]->f_407[iVar3]);
		iVar3++;
	}
	func_1286(&(Global_40.f_1095.f_1[iParam0]->f_420));
	func_1287(&(Global_40.f_1095.f_1[iParam0]->f_422));
	func_1288(&(Global_40.f_1095.f_1[iParam0]->f_425));
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

void func_1126(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_1127(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

int func_1128(vector3 vParam0)
{
	return func_1289(_get_map_zone_at_coords(vParam0, 10));
}

bool func_1129(int iParam0)
{
	iParam0 = func_754(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_944(iParam0))
	{
		return false;
	}
	iVar0 = func_1016(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

bool func_1130(int iParam0)
{
	iParam0 = func_754(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_944(iParam0))
	{
		return false;
	}
	iVar0 = func_1016(iParam0);
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

void func_1131(int iParam0)
{
	iParam0 = func_754(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_944(iParam0))
	{
		return;
	}
	iVar0 = func_1016(iParam0);
	if (is_entity_dead(iVar0))
	{
		return;
	}
	_set_entity_health(iVar0, 0, 0);
}

void func_1132(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (is_player_dead(iVar0))
	{
	}
	func_946(iParam0);
	func_946(iParam0);
	func_1290(iParam0, iParam1);
	func_1291(iParam0, iParam1);
	func_1292(iParam0, iParam1);
	iVar1 = func_1016(iParam0);
	if (does_entity_exist(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_1293(iVar1);
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
	iVar3 = func_1016(iParam1);
	if (does_entity_exist(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_1293(iVar3);
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
	func_756();
}

bool func_1133()
{
	iVar0 = func_1294();
	if (does_entity_exist(iVar0))
	{
		return true;
	}
	return false;
}

void func_1134()
{
	iVar0 = func_1294();
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	delete_object(&iVar0);
	func_1295(0);
}

void func_1135(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

int func_1136(int iParam0)
{
	iParam0 = func_754(iParam0);
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

int func_1137(int iParam0)
{
	iParam0 = func_754(iParam0);
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

int func_1138(int iParam0)
{
	iParam0 = func_754(iParam0);
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

void func_1139(int iParam0)
{
	iParam0 = func_754(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1296(&uVar0, &uVar1, &uVar2);
	func_1297(iParam0, uVar0);
	func_1298(iParam0, uVar1);
	func_1299(iParam0, uVar2);
	func_1300(iParam0, 1);
	func_1301(iParam0, 1);
}

void func_1140(int iParam0)
{
	iParam0 = func_754(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1302(iParam0, 1);
}

void func_1141(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_754(iParam0);
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

bool func_1142(int iParam0)
{
	iParam0 = func_754(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return func_1078(iParam0, 1);
}

struct<2> func_1143(int iParam0)
{
	iParam0 = func_754(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_1303(iParam0, &uVar2))
	{
	}
	if (!func_1304(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_1144()
{
	if (func_1305(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_1305(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_1305(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_1305(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_1305(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_1305(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_1145(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_1306(iParam0);
	func_1307(iParam0, uParam1);
	func_1308(iParam0);
	func_1309(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_1310(iParam0, iParam3, 0);
	}
	_update_ped_variation(iParam0, false, true, true, true, true);
}

void func_1146(int iParam0)
{
	iParam0 = func_754(iParam0);
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

float func_1147(int iParam0)
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

int func_1148(bool bParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam1))
	{
		return 0;
	}
	if (!does_entity_exist(iParam2))
	{
		return 0;
	}
	vVar0 = { func_1311(iParam1) };
	vVar3 = { func_1311(iParam2) };
	return func_1312(bParam0, vVar0, vVar3, iParam2);
}

int func_1149(bool bParam0, int iParam1, vector3 vParam2)
{
	if (is_entity_dead(iParam1))
	{
		return 0;
	}
	vVar0 = { func_1311(iParam1) };
	return func_1312(bParam0, vVar0, vParam2, 0);
}

bool func_1150(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_1151(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_1313(iParam0) == 1 && bParam7)
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
	if ((bParam1 || bParam6) || func_1() != -1)
	{
		Global_17504.f_42[iParam0]->f_4 = 0;
	}
	Global_17504.f_42[iParam0]->f_4 = (Global_17504.f_42[iParam0]->f_4 + iVar0);
}

int func_1152()
{
	iVar0 = func_1314();
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

int func_1153(int iParam0)
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
	fVar1 = func_581(absf(fVar1) < 1f, func_581(fVar1 < 0f, -1f, 1f), fVar1);
	return ceil(fVar1);
}

int func_1154(int iParam0, int iParam1, int iParam2)
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

int func_1155(int iParam0)
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

int func_1156()
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

void func_1157(int iParam0, bool bParam1, int iParam2)
{
	func_1315((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_1316(iParam0);
}

void func_1158(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), false);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), true);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_1317(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_1159(bool bParam0)
{
	bVar3 = false;
	if (func_1318(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1319(iVar5, &iVar2, &iVar0))
			{
				if (!func_967(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1320(iVar2);
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
							if (func_958(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_1152() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_1152() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_1321();
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

struct<2> func_1160(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

char* func_1161(int iParam0)
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

var func_1162(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_1322(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_1163(int iParam0, int iParam1)
{
	if (!func_1323(iParam0))
	{
		return 0;
	}
	if (!func_938())
	{
		return 0;
	}
	if (!func_1324(iParam0, &iVar0, &iVar1))
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

int func_1164(int iParam0)
{
	iVar0 = func_1326(func_1325(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946804->f_1497.f_1[iVar0]->f_1;
	}
	return 0;
}

bool func_1165(int iParam0, int iParam1)
{
	iVar1 = func_1326(func_1325(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1946804->f_1497.f_1[iVar1] != 0 && &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1];
		if (func_962(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

bool func_1166()
{
	if (Global_1946804->f_2793)
	{
		return true;
	}
	if (absi((get_game_timer() - Global_1946804->f_2791)) < 1250)
	{
		return true;
	}
	if (func_1327())
	{
		return true;
	}
	if (_0xec7e480ff8bd0bed(Global_35))
	{
		return true;
	}
	return false;
}

bool func_1167(int iParam0, int iParam1, bool bParam2)
{
	if (!func_967(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_958(iParam0);
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
		if (!func_1328(iParam0, 1))
		{
			return false;
		}
	}
	return func_1177(iParam0, 0, bParam2) >= iParam1;
}

int func_1168(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_1032(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1169(int iParam0, int iParam1)
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

int func_1170()
{
	iVar0 = 1549701178;
	switch (func_1329())
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

int func_1171()
{
	iVar0 = 614608656;
	switch (func_1329())
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

int func_1172()
{
	iVar0 = -1832677570;
	switch (func_1329())
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

int func_1173()
{
	iVar0 = 1623252156;
	switch (func_1329())
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

bool func_1174(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_1() == -1)
	{
		if (func_1330(iParam0) && func_1331(iParam0))
		{
			func_1332(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_1175(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_1333(iParam0, iParam1);
	Var0 = { func_796(iParam0, 0, 1) };
	iVar5 = func_1334(iParam0, &Var0, 0, 0);
	iVar6 = func_1335(iParam0, 0);
	if ((iVar5 > 1 && !func_1336()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_1169(iParam0, -2051813666))
		{
			func_716(583, 1);
		}
		else
		{
			func_716(582, 0);
		}
	}
	if (func_1337(iParam0, &Var0, *iParam1, 0, 0))
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

void func_1176(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_1338(iParam0, -949239683))
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

int func_1177(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_967(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_958(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_1339(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_1340(iParam0, 0);
	}
	iVar2 = _0xe787f05dfc977bde(func_968(bParam2), iParam0, 0);
	return iVar2;
}

bool func_1178(int iParam0)
{
	if (func_1() != -1)
	{
		return false;
	}
	return func_1179(iParam0) != 0;
}

int func_1179(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1341())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_1342(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_1180(int iParam0)
{
	return _0x6052b4de6657684f(iParam0);
}

int func_1181(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1341())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_1180(iVar0))
		{
			if (func_1167(func_1342(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_1182(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
	func_1343(48);
	func_1344(0, -1);
}

bool func_1183(int iParam0)
{
	if (func_1() != -1)
	{
		return false;
	}
	return func_939((*Global_1347702)[iParam0]->f_15, 1);
}

int func_1184(int iParam0)
{
	return _0x62cab7db62ead434(-2076669067, iParam0);
}

int func_1185(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

bool func_1186(int iParam0)
{
	if (func_1() != -1)
	{
		return false;
	}
	return func_939((*Global_1835011)[iParam0]->f_1, 1);
}

bool func_1187(int iParam0)
{
	if (func_1() != -1)
	{
		return false;
	}
	if (!func_383(iParam0))
	{
		return false;
	}
	return func_1345((*Global_1347702)[iParam0]->f_15);
}

int func_1188()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_1167(func_1346(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_1189(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_938() && (func_1187(38) || func_1183(38)))
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
			if (func_938() && (func_1187(39) || func_1183(39)))
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
			iVar9 = func_1347(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		case 41:
			if (func_938() && (func_1187(41) || func_1183(41)))
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
			if (func_938() && (func_1187(49) || func_1183(49)))
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
			iVar9 = func_1347(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_1348(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar12 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar12 = get_hash_key("toast_log_blips");
	}
	if (func_1349(iParam0, iVar13, iVar14))
	{
	}
	if (func_1350(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_1351(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_1352(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_1353(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_1354(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_1190(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_1191(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_938() && (func_1187(38) || func_1183(38)))
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
			if (func_938() && (func_1187(39) || func_1183(39)))
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
			if (func_938() && (func_1187(49) || func_1183(49)))
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
		if (func_938() && (func_1187(38) || func_1183(38)))
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
			func_733(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_733(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_1356(_create_var_string(2, sVar0), _create_var_string(2, func_1355(func_1185(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_733(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_733(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_938() && (func_1187(39) || func_1183(39)))
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
			func_733(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_733(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_938() && (func_1187(49) || func_1183(49)))
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
			func_733(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_733(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_733(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_733(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

bool func_1192(int iParam0, int iParam1)
{
	if (!func_967(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

void func_1193(int iParam0)
{
	if (!func_1073(iParam0))
	{
		return;
	}
	func_1357(iParam0);
	func_1358(iParam0);
}

int func_1194(int iParam0, bool bParam1)
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
	if (func_967(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_1359(iVar0) || func_313(iVar0))
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

int func_1195(int iParam0, bool bParam1)
{
	if (!func_967(iParam0, 0))
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

void func_1196(int iParam0)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_312(iParam0))
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

bool func_1197(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_1195(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_1() == -1)
		{
			func_1196(iVar0);
			if (iParam1 == 1248274121)
			{
				func_1360(iVar0);
			}
		}
		if (!func_1337(iParam0, &uVar1, 1, 0, 0))
		{
			func_1332(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_1361(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_547(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_547(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_547(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_melee(iVar0))
			{
				if (iVar0 == 494733111 && !func_955())
				{
					return false;
				}
				if (_0x2c83212a7aa51d3d(iParam0))
				{
				}
				else if (!func_549(iVar0))
				{
					func_547(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_547(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_109(Global_35, 2, 0, 1);
				if ((((func_312(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_937(24)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_312(iVar7) && func_937(24))
				{
					if (!func_547(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_547(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_547(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_716(480, 1);
	}
	return true;
}

bool func_1198(int iParam0, int iParam1, int iParam2)
{
	if (!func_970(iParam0))
	{
		return false;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_35, iParam0);
	if (func_312(iVar4))
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
	if (func_1167(611073244, 1, 0) && iParam2 == -897553835)
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
		func_1231(func_1362(iParam0), func_1230(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_1() == -1)
		{
			if (func_939((*Global_1835011)[14]->f_1, 1))
			{
				func_716(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_802(0))
	{
		if (func_803(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_1236(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_1199(int iParam0)
{
	if ((iParam0 == -615217896 && !func_1363()) || iParam0 != -615217896)
	{
		if (func_1364(Global_35, iParam0, &uVar0))
		{
			func_1215(player_ped_id(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_1221();
			break;
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_1221();
			break;
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_1221();
			break;
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_1219();
			break;
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_1217();
			break;
	}
}

void func_1200(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_1217();
			break;
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_1218();
			break;
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_1219();
			break;
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_1220();
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
			func_1221();
			break;
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_1365();
			break;
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_1366();
			break;
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_1201(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

void func_1202(int iParam0)
{
	bVar0 = func_1169(iParam0, -2017733358);
	if (func_1367() < 3)
	{
		if (bVar0)
		{
			if (func_1369(func_1368(iParam0), iParam0))
			{
				func_1231(79, func_1230(func_1368(iParam0)), 1);
			}
			else
			{
				func_1231(78, func_1230(func_1368(iParam0)), 1);
			}
		}
		else
		{
			func_1231(80, func_1230(func_1370(iParam0)), 1);
		}
	}
}

bool func_1203()
{
	if (((((func_1371(839908568, 400) || func_1371(-1134030454, 400)) || func_1371(623353496, 400)) || func_1371(-344413337, 400)) || func_1371(-1664948962, 400)) || func_1371(1795228059, 400))
	{
		return true;
	}
	return false;
}

void func_1204(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_1189(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_1191(51, 0, 0, 0, 0, -1, 0);
			func_1372(8192);
			break;
		case 581047644:
			func_1189(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_1191(51, 0, 0, 0, 0, -1, 0);
			func_1372(524288);
			break;
		case -644199619:
			func_1189(39, 0, 0, 0, 0, 0, 1, 0);
			func_1191(39, 0, 0, 0, 0, -1, 0);
			func_1373(16);
			break;
		case 684296857:
			func_1189(41, 0, 0, 0, 0, 0, 1, 0);
			func_1191(41, 0, 0, 0, 0, -1, 0);
			func_1374(8);
			break;
		case 466137807:
			func_1189(49, 0, 0, 0, 0, 0, 1, 0);
			func_1191(49, 0, 0, 0, 0, -1, 0);
			func_1375(16);
			break;
		case -1087522507:
			func_1189(43, 0, 0, -1791518714, func_1376(1), 0, -1, 0);
			func_1377(1);
			break;
		case -405829000:
			func_1189(43, 0, 0, -2087881550, func_1376(2), 0, -1, 0);
			func_1377(2);
			break;
		case 378660860:
			func_1189(43, 0, 0, 1908068621, func_1376(4), 0, -1, 0);
			func_1377(4);
			break;
		case 1566111097:
			func_1189(43, 0, 0, 1611247019, func_1376(8), 0, -1, 0);
			func_1377(8);
			break;
		case 1276007140:
			func_1189(43, 0, 0, 1319635688, func_1376(16), 0, -1, 0);
			func_1377(16);
			break;
	}
}

void func_1205(int iParam0)
{
	if (func_1378() == 1)
	{
		if (func_1183(39))
		{
			func_716(342, 0);
		}
		else
		{
			func_716(343, 0);
			func_1373(1);
		}
	}
	if (func_1378() >= 30)
	{
		func_716(344, 0);
	}
	func_1189(39, 0, 0, 0, 0, 0, -1, 0);
	func_1191(39, 0, 0, func_1378(), 30, 1, 0);
}

void func_1206(int iParam0)
{
	if (func_1379() == 1)
	{
		if (func_1183(49))
		{
			func_716(409, 0);
		}
		else
		{
			func_716(410, 0);
			func_1375(1);
		}
	}
	if (func_1379() >= 10)
	{
		func_716(411, 0);
	}
	func_1189(49, 0, 0, 0, 0, 0, -1, 0);
	func_1191(49, 0, 0, func_1379(), 10, 1, 0);
}

void func_1207(int iParam0)
{
	switch (iParam0)
	{
		case 1369162587:
			_0x3ea62e56f386c997(-949689219, 1);
			func_716(437, 0);
			func_716(440, 0);
			func_1380(-949689219, 444160793, &sVar0, 1, 0, 0);
			func_1189(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_1191(51, 0, 0, sVar0, func_1347(-949689219, 20), 1, 0);
			func_1372(1);
			func_1381(-748969569, 0, 0);
			break;
		case 1610047510:
			_0x3ea62e56f386c997(-1248968496, 1);
			func_1380(-1248968496, -1969404854, &sVar0, 1, 0, 0);
			func_1189(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_1191(51, 0, 0, sVar0, func_1347(-1248968496, 20), 1, 0);
			func_1372(8);
			break;
		case 1317879106:
			_0x3ea62e56f386c997(1706369307, 1);
			func_1380(1706369307, -832850511, &sVar0, 1, 0, 0);
			func_1189(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_1191(51, 0, 0, sVar0, func_1347(1706369307, 20), 1, 0);
			func_1372(64);
			break;
		case 1062444751:
			_0x3ea62e56f386c997(1520110311, 1);
			func_1380(1520110311, -100913452, &sVar0, 1, 0, 0);
			func_1189(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_1191(51, 0, 0, sVar0, func_1347(1520110311, 20), 1, 0);
			func_1372(512);
			break;
		case 754186760:
			_0x3ea62e56f386c997(-1992824800, 1);
			func_716(438, 0);
			func_1380(-1992824800, 905173572, &sVar0, 1, 0, 0);
			func_1189(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_1191(51, 0, 0, sVar0, func_1347(-1992824800, 20), 1, 0);
			func_1372(32768);
			break;
		default:
			func_716(439, 0);
			break;
	}
}

void func_1208()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

void func_1209(int iParam0, int iParam1)
{
	iVar1 = 0;
	if (func_1() == -1)
	{
		if (!func_1183(43))
		{
			if (iParam0 == 281887510)
			{
				func_716(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_716(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_716(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_716(400, 0);
			}
		}
		else if (func_1169(iParam0, 412399755))
		{
			func_1382(-1791518714);
			if (func_1383() == 0)
			{
				func_1344(0, 10);
				iVar1 = func_1384(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_1385(iParam0) < func_1386(iParam0))
					{
						func_1189(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_1191(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_1183(44))
		{
			if (iParam0 == -222563712)
			{
				func_716(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_716(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_716(401, 0);
			}
		}
		else if (func_1169(iParam0, 709057512))
		{
			func_1382(-2087881550);
			if (func_1383() == 1)
			{
				func_1344(0, 10);
				iVar1 = func_1384(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_1385(iParam0) < func_1386(iParam0))
					{
						func_1189(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_1191(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_1183(45))
		{
			if (iParam0 == 2116770557)
			{
				func_716(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_716(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_716(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_716(398, 0);
			}
		}
		else if (func_1169(iParam0, -1478961327))
		{
			func_1382(1908068621);
			if (func_1383() == 2)
			{
				func_1344(0, 10);
				iVar1 = func_1384(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_1387(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
					{
						func_1388(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
						func_1343(48);
					}
					if (func_1385(iParam0) < func_1386(iParam0))
					{
						func_1189(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_1191(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_1385(iParam0) < func_1386(iParam0))
					{
						func_1189(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_1191(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_1183(46))
		{
			if (iParam0 == 2085530337)
			{
				func_716(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_716(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_716(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_716(406, 0);
			}
		}
		else if (func_1169(iParam0, -1238404098))
		{
			func_1382(1611247019);
			if (func_1383() == 3)
			{
				func_1344(0, 10);
				iVar1 = func_1384(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_1385(iParam0) < func_1386(iParam0))
					{
						func_1189(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_1191(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_1183(47))
		{
			if (iParam0 == -1521783510)
			{
				func_716(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_716(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_716(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_716(403, 0);
			}
		}
		else if (func_1169(iParam0, 1160548794))
		{
			func_1382(1319635688);
			if (func_1383() == 4)
			{
				func_1344(0, 10);
				iVar1 = func_1384(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_1385(iParam0) < func_1386(iParam0))
					{
						func_1189(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_1191(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_1210(int iParam0)
{
	if (iParam0 == 2116770557)
	{
		if (!func_1387(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
		{
			func_1388(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
			func_1343(48);
		}
	}
}

void func_1211(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = _0x126cbebba46693cf(iVar1, 678508515, -1160144609);
		if (func_1167(func_1389(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_1390(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_1391(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_1212(int iParam0, int iParam1, int iParam2)
{
	if (func_1() == -1)
	{
		if (does_entity_exist(iParam2))
		{
			iVar0 = _0x6f02b5e50511721e(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_915(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_915(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493:
			func_915(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627:
			func_915(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377:
			func_915(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086:
			func_915(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686:
			func_915(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991:
			func_915(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101:
			func_915(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918:
			func_915(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765:
			func_915(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903:
			func_915(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684:
			func_915(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340:
			if (!func_1392())
			{
				func_915(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740:
			func_915(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264:
			func_915(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970:
			func_915(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1027115192:
			func_915(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1064332555:
			func_915(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1954478446:
			func_915(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -518592739:
			func_915(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -2010073778:
			func_915(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -700133011:
			func_915(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1415414735:
			func_915(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 2045548742:
			func_915(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 830381058:
			func_915(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_1213(int iParam0)
{
	if (func_1183(41))
	{
		func_716(363, 0);
	}
	else
	{
		func_716(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_1393(-1865241121);
			func_1394(-642026005);
			func_1395(-642026005);
			func_1344(0, 10);
			break;
		case -2108314374:
			func_1393(2117142684);
			func_1394(-940584364);
			func_1395(-940584364);
			func_1344(0, 10);
			break;
		case -1193798153:
			func_1393(-1409326024);
			func_1394(1972645282);
			func_1395(1972645282);
			func_1344(0, 10);
			break;
		case -787702678:
			func_1393(-641744968);
			func_1394(1667205433);
			func_1395(1667205433);
			func_1344(0, 10);
			break;
		case -804542901:
			func_1393(-946988203);
			func_1394(1362715885);
			func_1395(1362715885);
			func_1344(0, 10);
			break;
		case -1696275132:
			func_1393(-646136018);
			func_1394(1053540370);
			func_1395(1053540370);
			func_1344(0, 10);
			break;
		case -161595323:
			func_1393(-955835837);
			func_1394(-1100103852);
			func_1395(-1100103852);
			func_1344(0, 10);
			break;
		case -1114363619:
			func_1393(-179276075);
			func_1394(-1409869209);
			func_1395(-1409869209);
			func_1344(0, 10);
			break;
		case -368407134:
			func_1393(-492711560);
			func_1394(-1760235357);
			func_1395(-1760235357);
			func_1344(0, 10);
			break;
		case 1997759228:
			func_1393(1764383959);
			func_1394(-138366827);
			func_1395(-138366827);
			func_1344(0, 10);
			break;
		case 1265573293:
			func_1393(317501533);
			func_1394(-1261163843);
			func_1395(-1261163843);
			func_1344(0, 10);
			break;
		case -1030441283:
			func_1393(817753087);
			func_1394(-963523016);
			func_1395(-963523016);
			func_1344(0, 10);
			break;
		case -1490884871:
			func_1393(576606016);
			func_1394(560825326);
			func_1395(560825326);
			func_1344(0, 10);
			break;
		case -395458616:
			func_1393(814934957);
			func_1394(858269539);
			func_1395(858269539);
			break;
	}
}

void func_1214(int iParam0, int iParam1)
{
	func_1396(iParam0, iParam1, &uVar0);
}

int func_1215(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_796(iParam1, 1, 0) };
		iParam3 = func_1397(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1398(iParam1, iParam2, func_1326(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_1399(1, (func_1() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_1326(iParam3, 1)])
			{
				func_1400(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_1401(32768) && iParam1 != &Global_1946804->f_57[func_1326(iParam3, 1)])
			{
				func_1402();
				func_1400(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_1400(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_1403(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_1400(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_1404(0);
			func_1405(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_1400(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_1216(int iParam0, bool bParam1)
{
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_109(get_player_ped(get_player_index()), 2, 1, 0);
	iVar19 = func_109(get_player_ped(get_player_index()), 3, 1, 0);
	if (func_1406("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_1407(&Var3, iVar2, iVar0, iVar1))
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
						func_1408(iVar0);
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

void func_1217()
{
	_0x11a7ff918ef6bc66(player_id(), (1f - Global_40.f_11095.f_60));
}

void func_1218()
{
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	_0x497a6539bb0e8787(player_id(), (1f - fVar0), (1f - fVar1));
}

void func_1219()
{
	_0xe0d6c2a146a5c993(player_id(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_1220()
{
	_0xb427911ea6dffef3(player_id(), (1f - Global_40.f_11095.f_63));
}

void func_1221()
{
	func_1409();
	func_1410();
	func_1411();
}

void func_1222(int iParam0, int iParam1, bool bParam2)
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

void func_1223(int iParam0, bool bParam1)
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
	func_733(_create_var_string(2, sVar1), _create_var_string(2, sVar2), get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_TREASURE_HUNTER"), 1433015236, _create_var_string(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_1224(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_1225(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_1226(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_1227(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_1228(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_1229(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_1230(int iParam0)
{
	if (!func_967(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_1231(int iParam0, int iParam1, bool bParam2)
{
	func_925(iParam0, &iVar0, &iVar1);
	if (!func_926(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1067(iParam0, 1024))
	{
		return;
	}
	func_927(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 2;
}

void func_1232(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_925(iParam0, &iVar0, &iVar1);
	if (!func_926(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1067(iParam0, 1024))
	{
		return;
	}
	func_927(iVar0, iVar1);
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

int func_1233()
{
	iVar0 = _0x5461c821d00fe15a(-2076669067, 0);
	if (iVar0 == func_1341())
	{
		return func_1234();
	}
	iVar4 = (func_1341() - iVar0);
	iVar5 = get_random_int_in_range(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_1341())
	{
		iVar1 = _0x126cbebba46693cf(iVar2, -2076669067, 0);
		if (!func_1412(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_1342(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_1234()
{
	iVar0 = get_random_int_in_range(0, func_1341());
	return func_1342(_0x126cbebba46693cf(iVar0, -2076669067, 0));
}

void func_1235(int iParam0)
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

int func_1236(int iParam0, int iParam1, int iParam2)
{
	if (!func_967(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_796(iParam0, 0, 1) };
	Var5 = { func_800(iParam0, Var0, Var0.f_4, 0) };
	return func_1413(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_1237(int iParam0)
{
	if (func_1() != -1)
	{
		return;
	}
	switch (func_962(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_1414(81053684, 0) <= 0)
			{
				func_1400(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_1400(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_1415(iParam0);
			if (func_1416(iVar0))
			{
				func_1417(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_1400(30, iParam0, 0, 0, 0);
			}
			if (func_1418() == -2125499975 || func_1418() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_1400(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_1418() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_1400(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_1419(-525676072, 0))
			{
				if (func_1420(-525676072, &iVar1))
				{
					func_1400(33, iVar1, 0, 0, 0);
				}
			}
			func_1400(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_1421(99217379))
		{
			func_1215(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_1193(24);
		if (func_1216(&iVar2, 0))
		{
			func_547(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_1238(int iParam0)
{
	if (func_1169(iParam0, 943695443))
	{
		func_1422(0, iParam0);
	}
	else if (func_1169(iParam0, -2096528786))
	{
		func_1422(1, iParam0);
	}
	else if (func_1169(iParam0, -1094167013))
	{
		func_1422(2, iParam0);
	}
	else if (func_1169(iParam0, 1936654645))
	{
		func_1422(3, iParam0);
	}
	else if (func_1169(iParam0, 1306489306))
	{
		func_1422(4, iParam0);
	}
	else if (func_1169(iParam0, 435762317))
	{
		func_1422(5, iParam0);
	}
	else if (func_1169(iParam0, 1259363210))
	{
		func_1422(6, iParam0);
	}
	else if (func_1169(iParam0, 881398259))
	{
		func_1422(7, iParam0);
	}
	else if (func_1169(iParam0, -541549214))
	{
		func_1422(8, iParam0);
	}
	else if (func_1169(iParam0, 130796156))
	{
		func_1422(-1, iParam0);
	}
}

int func_1239(int iParam0, int iParam1)
{
	Var4.f_1 = 10;
	func_1423(&Var4, 1356624740);
	return func_1424(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_1240(int iParam0)
{
	if (!func_967(iParam0, 0))
	{
		return Var0;
	}
	if (func_1169(iParam0, -305066475))
	{
		if (func_1() == -1)
		{
			if (func_1169(iParam0, -537818634))
			{
				return func_1160(189951448);
			}
			else
			{
				return func_1160(1176172851);
			}
		}
	}
	else if (func_1169(iParam0, -537818634))
	{
		return func_1160(-963660207);
	}
	if (func_1169(iParam0, 2084895747))
	{
		return func_1160(1694039471);
	}
	return Var2;
}

void func_1241(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_1() == -1)
			{
				if (func_939((*Global_1835011)[4]->f_1, 1))
				{
					func_716(109, 1);
				}
			}
			break;
	}
}

void func_1242(int iParam0, char* sParam1)
{
	sVar0 = func_1426(func_1425(0));
	func_1162(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1427(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_1243(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_967(iParam0, 0))
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
	if (!func_1428())
	{
		func_1429(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_477(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_477(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_1192(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_958(iParam0);
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
	else if (!func_1430(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	sVar15 = func_1431(_create_var_string(10, &cVar2, _create_var_string(0, func_1230(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_1169(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_1230(iParam0));
	}
	func_1162(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

var func_1244(int iParam0)
{
	Var1 = { func_1160(iParam0) };
	stat_id_get_int(&Var1, &uVar0);
	return uVar0;
}

bool func_1245()
{
	return (_does_anim_scene_exist(Global_43800) && _is_anim_scene_started(Global_43800, false));
}

void func_1246(int iParam0, int iParam1)
{
	if (func_1() != -1)
	{
		return;
	}
	iVar0 = func_1040();
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
	iVar4 = func_1154(ceil(((fVar6 / fVar7) * 100f)), 0, 100);
	iVar5 = func_1154(ceil(((fVar8 / fVar7) * 100f)), 0, 100);
	if ((iVar5 - iVar4) == 0)
	{
		return;
	}
	if (iParam1 & 0)
	{
	}
	if (iVar3 < 1000)
	{
		if (!func_1432())
		{
			func_1433(0);
			play_sound_frontend("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (iVar3 >= 1000 && iVar3 < 2000)
	{
		if (!func_1434())
		{
			func_1433(1000);
			play_sound_frontend("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (iVar3 >= 2000 && iVar3 < 3000)
	{
		if (!func_1435())
		{
			func_1433(2000);
			play_sound_frontend("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (!func_1436())
	{
		func_1433(3000);
		play_sound_frontend("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
	}
	func_738(func_1160(661720433), iVar1);
	iVar10 = func_1040();
	_0x078f77fd1a43eab3(iVar0, iVar10);
}

void func_1247(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, float fParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
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
	func_986(iParam0, 1);
	func_987(iParam0, 1);
	func_988(iParam0, 128);
}

bool func_1248(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

bool func_1249()
{
	if (func_1363())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_1250(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1437((Global_40.f_4283.f_325 + iParam0));
}

void func_1251(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_1249())
	{
		func_1162(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_1162(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

int func_1252(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_1438(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

bool func_1253(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_ped_group_member(iParam0, func_724(), 1))
	{
		return true;
	}
	return false;
}

char* func_1254(int iParam0)
{
	if (iParam0 == 255)
	{
		if (func_406(37, iParam0))
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
	if (func_406(37, iParam0))
	{
		return _0xd8402b858f4ddd88(&((*Global_1108178)[iParam0]->f_12), get_length_of_literal_string(&((*Global_1108178)[iParam0]->f_12)));
	}
	return get_player_name(&(Global_1225639->f_120[iParam0]));
}

char* func_1255(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_1431(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

bool func_1256()
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

float func_1257(int iParam0)
{
	iParam0 = func_754(iParam0);
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

float func_1258(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

int func_1259(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_1260(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (func_285(iParam1->f_6))
	{
		if (bParam7 || is_bit_set(*iParam1, 11))
		{
			return;
		}
		func_286(&(iParam1->f_6), 0, 1);
	}
	if (!func_285(iParam1->f_6) && !is_bit_set(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_1105(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_1043(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_285(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_1267(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_1439(iParam1->f_6, 17, 1, 1);
				}
				if (is_bit_set(*iParam1, 1))
				{
					if (is_bit_set(*iParam1, 3))
					{
						func_1440(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_816(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (is_bit_set(*iParam1, 10))
				{
					func_1439(iParam1->f_6, 16, 1, 1);
				}
				if (!is_bit_set(*iParam1, 0) || is_bit_set(*iParam1, 13))
				{
					func_818(iParam1->f_6, 0, 1);
				}
				else
				{
					func_818(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_1261(int iParam0)
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

void func_1262(int* iParam0, int iParam1)
{
	if (!func_820(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_821(iParam0, 14);
		}
	}
}

bool func_1263(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_1264(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_1265(int iParam0, int iParam1)
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

bool func_1266(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

void func_1267(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam3 && !func_285(iParam0))
	{
		return;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = func_488(iParam0);
	func_1439(iParam0, 18, 0, 1);
	func_1439(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = _uiprompt_get_group_id_for_target_entity(iParam1);
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam4, iParam2);
}

bool func_1268(int iParam0, bool bParam1)
{
	if (bParam1 && !func_285(iParam0))
	{
		return false;
	}
	iVar0 = func_488(iParam0);
	return _uiprompt_is_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_1269(int iParam0, bool bParam1)
{
	if (bParam1 && !func_285(iParam0))
	{
		return;
	}
	iVar0 = func_488(iParam0);
	_uiprompt_restart_modes((*Global_1945938)[iVar0]->f_3);
}

void func_1270(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	*uParam0 = floor((get_control_normal(iParam8, iParam4) * 127f));
	*uParam1 = floor((get_control_normal(iParam8, iParam5) * 127f));
	*iParam2 = floor((get_control_normal(iParam8, iParam6) * 127f));
	*iParam3 = floor((get_control_normal(iParam8, iParam7) * 127f));
}

Vector3 func_1271(vector3 vParam0, float fParam3)
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

int func_1272()
{
	return -1;
}

float func_1273(float fParam0)
{
	return (fParam0 * 57.29578f);
}

var func_1274(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	return create_scenario_point(iParam0, vParam1, fParam4, iParam5, iParam6, iParam7);
}

void func_1275(int iParam0)
{
	iParam0 = func_754(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_1016(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_1441(iVar6);
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

bool func_1276(int iParam0)
{
	if (!func_1442(iParam0))
	{
		return false;
	}
	if (!func_1443())
	{
		return true;
	}
	return false;
}

void func_1277(int iParam0, int iParam1)
{
	iParam0 = func_754(iParam0);
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

void func_1278(var uParam0)
{
	*uParam0 = -377364164;
	uParam0->f_1 = 357708345;
}

void func_1279(int iParam0, struct<2> Param1)
{
	iParam0 = func_754(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_1444(iParam0, Param1))
	{
	}
	if (!func_1445(iParam0, Param1.f_1))
	{
	}
}

void func_1280(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_1446((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_1281(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 57)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_1282(var uParam0)
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

void func_1283(var uParam0)
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

void func_1284(int iParam0, var uParam1)
{
	iVar0 = 100;
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_1285(int iParam0, var uParam1)
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

void func_1286(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1f;
}

void func_1287(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -15;
}

void func_1288(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
}

int func_1289(int iParam0)
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

void func_1290(int iParam0, int iParam1)
{
	_copy_memory(&(Global_1900383->f_508), Global_40.f_1095.f_1[iParam1], 436);
	_copy_memory(Global_40.f_1095.f_1[iParam1], Global_40.f_1095.f_1[iParam0], 436);
	_copy_memory(Global_40.f_1095.f_1[iParam0], &(Global_1900383->f_508), 436);
}

void func_1291(int iParam0, int iParam1)
{
	_copy_memory(&(Global_1900383->f_463), (*Global_1900383)[iParam1], 45);
	_copy_memory((*Global_1900383)[iParam1], (*Global_1900383)[iParam0], 45);
	_copy_memory((*Global_1900383)[iParam0], &(Global_1900383->f_463), 45);
}

int func_1292(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	Var29.f_9 = -1591664384;
	if (!func_1447(iParam0, &Var0))
	{
		return 0;
	}
	bVar58 = false;
	if (!func_1447(iParam1, &Var29))
	{
		bVar58 = true;
	}
	if (bVar58)
	{
		iVar59 = func_1448(iParam1);
		if (iVar59 == 0)
		{
			return 0;
		}
		if (!func_1449(Var0, Var0.f_5, iVar59, 0, 0))
		{
			return 0;
		}
	}
	else if (!func_1450(Var0, Var29, 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_1293(int iParam0)
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
	if (func_1451(iParam0))
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
	if (func_501(iParam0))
	{
		iVar3 = func_502(iParam0);
		if (func_1452(iVar3))
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

int func_1294()
{
	return Global_1900383->f_393;
}

void func_1295(int iParam0)
{
	Global_1900383->f_393 = iParam0;
}

int func_1296(var uParam0, int iParam1, var uParam2)
{
	*uParam0 = 0;
	*iParam1 = 0;
	*uParam2 = 0;
	if (func_938())
	{
		if (func_1256())
		{
			bVar0 = false;
			if (!func_939((*Global_1835011)[15]->f_1, 1) && !func_937(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*uParam0 = func_1453();
				*iParam1 = func_1454();
				*uParam2 = func_1455();
				return 1;
			}
			else
			{
				*uParam0 = func_1456();
				*iParam1 = func_1457();
				*uParam2 = func_1458();
				return 1;
			}
		}
		else if (func_955())
		{
			if (!func_939((*Global_1835011)[60]->f_1, 1))
			{
				*uParam0 = func_1459();
				*iParam1 = func_1460();
				*uParam2 = func_1461();
				return 1;
			}
			else
			{
				*uParam0 = func_1462();
				*iParam1 = func_1463();
				*uParam2 = func_1464();
				return 1;
			}
		}
	}
	else if (func_1256())
	{
		*uParam0 = func_1465();
		*iParam1 = func_1466();
		*uParam2 = func_1467();
		return 1;
	}
	else if (func_955())
	{
		*uParam0 = func_1468();
		*iParam1 = func_1469();
		*uParam2 = func_1470();
		return 1;
	}
	return 0;
}

void func_1297(int iParam0, var uParam1)
{
	iParam0 = func_754(iParam0);
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

void func_1298(int iParam0, var uParam1)
{
	iParam0 = func_754(iParam0);
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

void func_1299(int iParam0, var uParam1)
{
	iParam0 = func_754(iParam0);
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

void func_1300(int iParam0, int iParam1)
{
	iParam0 = func_754(iParam0);
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

void func_1301(int iParam0, int iParam1)
{
	iParam0 = func_754(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_1136(iParam0);
	if (!is_model_valid(iVar0))
	{
		func_1296(&uVar1, &iVar0, &uVar2);
	}
	iVar3 = get_default_max_attribute_rank(iVar0, 7);
	if (iParam1 > iVar3)
	{
		return;
	}
	fVar4 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iParam1));
	Global_40.f_1095.f_1[iParam0]->f_372 = iParam1;
	Global_40.f_1095.f_1[iParam0]->f_372.f_1 = fVar4;
	func_1471(iParam1);
	iVar5 = func_1016(iParam0);
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

void func_1302(int iParam0, int iParam1)
{
	iParam0 = func_754(iParam0);
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

bool func_1303(int iParam0, var uParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_1447(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = func_1472(Var0, 1415981582, 0);
	if (!func_967(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_1304(int iParam0, var uParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_1447(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = func_1472(Var0, -2119169513, 0);
	if (!func_967(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_1305(int iParam0, var uParam1)
{
	if (!func_1473(856287005, iParam0))
	{
		return false;
	}
	Var0 = { func_1474() };
	*uParam1 = func_1472(Var0, iParam0, 0);
	if (!func_967(*uParam1, 0))
	{
		return false;
	}
	return true;
}

void func_1306(int iParam0)
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

void func_1307(int iParam0, var uParam1)
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
	func_1475(iParam0, *uParam1);
	func_1475(iParam0, uParam1->f_1);
}

void func_1308(int iParam0)
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

void func_1309(int iParam0, var uParam1)
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
	func_1475(iParam0, *uParam1);
	func_1475(iParam0, uParam1->f_1);
	func_1475(iParam0, uParam1->f_2);
	func_1475(iParam0, uParam1->f_3);
	func_1475(iParam0, uParam1->f_4);
	func_1475(iParam0, uParam1->f_5);
}

int func_1310(int iParam0, int iParam1, bool bParam2)
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

Vector3 func_1311(int iParam0)
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
			vVar0.f_2 = func_1258(vVar3.z, vVar6.z, 0.75f);
		}
	}
	if (func_225(vVar0))
	{
	}
	return vVar0;
}

int func_1312(bool bParam0, vector3 vParam1, vector3 vParam4, int iParam7)
{
	bParam0->f_4 = 0;
	switch (*bParam0)
	{
		case 0:
			func_1476(bParam0);
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

int func_1313(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_5;
}

int func_1314()
{
	return Global_40.f_11095.f_35;
}

void func_1315(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_1477(bParam1);
	}
}

void func_1316(int iParam0)
{
	_0x74bcceb233ad95b2(-156028329, iParam0);
}

char* func_1317(int iParam0)
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

bool func_1318(int iParam0)
{
	if (!func_335(23, &vVar0))
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

bool func_1319(int iParam0, int iParam1, int iParam2)
{
	if (!func_335(23, &Var0))
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

int func_1320(int iParam0)
{
	return iParam0;
}

int func_1321()
{
	iVar0 = func_1152();
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

void func_1322(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

bool func_1323(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_1324(int iParam0, int iParam1, var uParam2)
{
	if (!func_1323(iParam0))
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

int func_1325(int iParam0)
{
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_1397(iVar0);
}

int func_1326(int iParam0, int iParam1)
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

bool func_1327()
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

bool func_1328(int iParam0, int iParam1)
{
	if (!func_967(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_1339(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1406("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1407(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_312(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_1408(iVar1);
				return true;
			}
			iVar3++;
		}
		func_1408(iVar1);
	}
	return false;
}

int func_1329()
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
		else if ((((is_weapon_valid(iVar0) && _is_weapon_two_handed(iVar0)) && !func_1478(iVar0)) && !_is_ped_getting_into_a_mount_seat(Global_35, true)) && !(is_ped_in_any_vehicle(Global_35, false) && !_0xa24c1d341c6e0d53(1, 0, 0)))
		{
			return 3;
		}
		else if (iVar0 == -160924582)
		{
			return 1;
		}
		else if ((is_weapon_valid(iVar0) && func_1478(iVar0)) || iVar0 == 2055893578)
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

bool func_1330(int iParam0)
{
	return func_958(iParam0) == -427144552;
}

bool func_1331(int iParam0)
{
	if (func_1() != -1)
	{
		return false;
	}
	if (func_1192(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_1337(iParam0, &uVar0, 1, 0, 0);
	}
	return func_1167(iParam0, 1, 0);
}

void func_1332(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_958(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_1195(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_313(iVar0))
	{
		if (func_1() == -1)
		{
			func_1196(iVar0);
		}
		if (bParam2 || (!has_ped_got_weapon(Global_35, iVar0, 0, false) && func_1177(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_1243(iParam0, iParam1, 0, 0, 0);
				play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_1333(int iParam0, int iParam1)
{
	if (func_1169(iParam0, 58855631))
	{
		func_1479(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

int func_1334(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_967(iParam0, 0))
	{
		return 0;
	}
	if (!func_802(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_968(bParam3), iParam0);
}

int func_1335(int iParam0, bool bParam1)
{
	if (func_970(iParam0))
	{
		return get_ped_ammo_by_type(Global_35, iParam0);
	}
	return _0xe787f05dfc977bde(func_968(bParam1), iParam0, 0);
}

bool func_1336()
{
	if (func_1() != -1)
	{
		return false;
	}
	if (!func_938())
	{
		return false;
	}
	if (!func_939((*Global_1835011)[1]->f_1, 1))
	{
		return true;
	}
	if ((func_939((*Global_1835011)[2]->f_1, 1) && func_939((*Global_1347702)[120]->f_15, 1)) && !func_939((*Global_1835011)[4]->f_1, 1))
	{
		return true;
	}
	if (func_939((*Global_1835011)[37]->f_1, 1) && !func_939((*Global_1835011)[39]->f_1, 1))
	{
		return true;
	}
	if (func_939((*Global_1835011)[57]->f_1, 1) && !func_939((*Global_1835011)[60]->f_1, 1))
	{
		return true;
	}
	if (func_939((*Global_1835011)[26]->f_1, 1) && !func_939((*Global_1347702)[67]->f_15, 1))
	{
		return true;
	}
	if ((func_939((*Global_1835011)[62]->f_1, 1) && func_939((*Global_1835011)[63]->f_1, 1)) && !func_939((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if (func_939((*Global_1835011)[75]->f_1, 1) && !func_939((*Global_1347702)[1]->f_15, 1))
	{
		return true;
	}
	if (func_939((*Global_1835011)[76]->f_1, 1) && !func_939((*Global_1835011)[77]->f_1, 1))
	{
		return true;
	}
	if ((func_939((*Global_1835011)[40]->f_1, 1) && func_939((*Global_1835011)[41]->f_1, 1)) && !func_939((*Global_1835011)[44]->f_1, 1))
	{
		return true;
	}
	if ((func_939((*Global_1835011)[62]->f_1, 1) && func_939((*Global_1835011)[63]->f_1, 1)) && !func_939((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if ((func_939((*Global_1835011)[65]->f_1, 1) && func_939((*Global_1835011)[66]->f_1, 1)) && !func_939((*Global_1835011)[67]->f_1, 1))
	{
		return true;
	}
	return false;
}

bool func_1337(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1480(&iParam0);
	if (!func_967(iParam0, 0))
	{
		return false;
	}
	if (!func_802(0))
	{
		bParam3 = true;
	}
	if (func_1330(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_one_handed(iParam0))
		{
			Var0 = { func_959(0) };
			Var4.f_9 = -1591664384;
			if (!func_798(iParam0, &Var0, 1728382685, 0))
			{
				return false;
			}
			else if (func_799(iParam0, &Var4, 1728382685))
			{
				return false;
			}
			if (func_960(iParam0, 1))
			{
				if (!func_798(iParam0, &Var0, -649335959, 0))
				{
					return false;
				}
				else if (func_799(iParam0, &Var4, -649335959))
				{
					return false;
				}
			}
		}
		else if (!func_1481(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_1334(iParam0, uParam1, bParam3, bParam4);
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
		iVar28 = func_965(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = _0xe787f05dfc977bde(func_968(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_1338(int iParam0, int iParam1)
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

int func_1339(int iParam0, int iParam1)
{
	if (!func_967(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_958(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_1169(iParam0, 1399091007))
	{
		func_1396(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_1340(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_1482(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1483(&Var0, func_959(0));
	}
	if (!func_1484(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_1408(iVar14);
	return uVar15;
}

int func_1341()
{
	return _0x62cab7db62ead434(-2076669067, 0);
}

int func_1342(int iParam0)
{
	return _0xec3959e9950bf56b(iParam0);
}

void func_1343(int iParam0)
{
	if (func_1() != -1)
	{
		return;
	}
	iVar0 = func_1485(iParam0);
	fVar1 = func_1486(iParam0);
	if ((Global_1347477->f_117 || !func_937(31)) || !func_1487(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_1488(iVar0) >= 7)
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
	func_1489(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_1162(_create_var_string(6, func_1490(iParam0), fVar1), "itemtype_textures", func_1491(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_1344(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_1492(&Global_0, 8);
	}
	if (!func_938() || func_1() != -1)
	{
		return;
	}
	func_1492(&Global_0, 1);
}

bool func_1345(int iParam0)
{
	iVar0 = func_1075(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_1346(int iParam0)
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

int func_1347(int iParam0, int iParam1)
{
	if (!func_335(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_int(&uVar5, &Var0);
	return uVar5;
}

char* func_1348(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_1188() >= 12)
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_POSTED_OBJ", func_1493(), 12);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_FOUND_OBJ", func_1494(), 12);
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
			else if (func_1378() >= 30)
			{
				sParam3 = _create_var_string(2, "COL_DB_POSTED_OBJ", func_1495(), 30);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_DB_FOUND_OBJ", func_1378(), 30);
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
				sParam3 = _create_var_string(2, "COL_LF_CAUGHT_OBJ", func_1496(), 13);
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
			else if (func_1379() >= 10)
			{
				sParam3 = _create_var_string(2, "COL_RC_POSTED_OBJ", func_1497(), 10);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_RC_FOUND_OBJ", func_1379(), 10);
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
				sParam3 = _create_var_string(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_1347(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_1349(int iParam0, int iParam1, int iParam2)
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

bool func_1350(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_add_entry_hash(3, iParam1, vParam2, get_hash_key(sParam5), get_hash_key(sParam6), 0);
	}
	return true;
}

bool func_1351(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	_uilog_add_or_update_objective(3, iParam1, get_hash_key(sParam2), sParam2, false, false, false);
	_uilog_set_entry_pinned(3, iParam1, true);
	_uilog_set_entry_brief_texture(3, iParam1, get_hash_key(sParam4), get_hash_key(sParam5));
	_uilog_set_entry_icon_texture(3, iParam1, iParam6, iParam7);
	_uilog_update_entry_subheader(3, iParam1, _create_var_string(2, sParam3));
	return true;
}

bool func_1352(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_1498(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_1167(iVar2, 1, 0) || func_1500(func_1499(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1355(func_1498(iVar0))), func_1355(func_1498(iVar0)), bVar1, true, false);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1378() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1501(iVar0)), func_1501(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1495() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1501(iVar0)), func_1501(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1501(iVar0)), func_1501(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_1389(iParam3, func_1502(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1385(iVar2) - iParam7) >= func_1347(iParam3, func_1503(iVar0));
				}
				else
				{
					bVar1 = func_1385(iVar2) >= func_1347(iParam3, func_1503(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_1385(iVar2) + iParam7) >= func_1347(iParam3, func_1503(iVar0));
			}
			else
			{
				bVar1 = func_1385(iVar2) >= func_1347(iParam3, func_1503(iVar0));
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1504(iVar2)), func_1504(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1505(_0x126cbebba46693cf(iVar0, 1995362678, 0)))
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
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1506(_0x126cbebba46693cf(iVar0, iParam2, 0))), func_1506(_0x126cbebba46693cf(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1379() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1507(iVar0)), func_1507(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1497() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1507(iVar0)), func_1507(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1507(iVar0)), func_1507(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_1389(iParam3, func_1502(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1385(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1508(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1508(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1509(iVar2)), func_1509(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_1353(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_1496() >= 13)
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

bool func_1354(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_385(func_1510(0)) && ((func_1511(0) == 1 || func_1511(0) == 8) || func_1511(0) == 6))
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

char* func_1355(int iParam0)
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

var func_1356(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

void func_1357(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	set_bit(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_1358(int iParam0)
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
			func_1512(1);
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
			func_1513(1);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_1513(2);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_1513(3);
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
			func_1514(1);
			break;
		case 34:
			func_1515(1);
			break;
		case 35:
			func_1516(1);
			break;
		case 36:
			break;
		case 37:
			func_1517(0);
			break;
		case 38:
			func_1518(0);
			break;
		case 39:
			func_1519(0);
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
			if ((!&Global_1879534 && func_938()) && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_1356("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_716(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_938()) && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_1356("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_716(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_938()) && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_1356("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_716(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_938()) && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_1356("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_716(589, 0);
			break;
		case 24:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			if (func_1() == -1)
			{
				if (!func_1421(99217379) || func_1520(99217379) == 2110595215)
				{
					if (func_955())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = 899611344;
					}
					if (!func_1167(iVar0, 1, 0))
					{
						func_1236(iVar0, 1, 752097756);
					}
					func_1215(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_1() == -1)
			{
				if (!func_1167(1013902307, 1, 0))
				{
					func_1236(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_1() == -1)
			{
				if (!func_1167(1013902307, 1, 0))
				{
					func_1236(1013902307, 1, 752097756);
				}
				if (!func_1167(142640135, 1, 0))
				{
					func_1236(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_1() == -1)
			{
				if (!func_1167(786809402, 1, 0))
				{
					func_1236(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_1() == -1)
			{
				if (!func_1167(786809402, 1, 0))
				{
					func_1236(786809402, 1, 752097756);
				}
				if (!func_1167(-518019409, 1, 0))
				{
					func_1236(-518019409, 1, 752097756);
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
			func_1521();
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

bool func_1359(int iParam0)
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

void func_1360(int iParam0)
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
	iVar2 = func_145();
	func_338(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	decor_set_int(Global_35, sVar1, iVar2);
}

int func_1361(int iParam0)
{
	if (func_1478(iParam0))
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

int func_1362(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_0x705be297eebdb95d(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			if (!func_937(50))
			{
				if (!func_937(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_937(51))
			{
				if (!func_937(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_1363()
{
	return _unlock_is_unlocked(-121456797);
}

bool func_1364(int iParam0, int iParam1, var uParam2)
{
	if (!func_967(iParam1, 0))
	{
		return false;
	}
	if (func_958(iParam1) != -1037537535)
	{
		return false;
	}
	bVar1 = func_1() != -1;
	iVar2 = _get_metaped_type(iParam0);
	if (func_962(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_1522(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_1169(iParam1, 866047851))
	{
		iVar5 = func_1326(iVar4, 1);
		if (func_1523(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5] != iVar8)
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
			iVar3 = func_962(&(Global_1946804->f_1497.f_1[iVar5]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745;
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5] != &Global_1946804->f_57[iVar5] && func_1169(iParam1, -1638171711))
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
			if (func_1165(1868067663, &uVar0))
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
				iVar10 = func_1524(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1524(&(Global_1946804->f_1497.f_1[iVar5]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_962(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6] && func_1169(&(Global_1946804->f_1497.f_1[iVar5]), -1638171711))
				{
					*uParam2 = -357399012;
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != &Global_1946804->f_57[iVar6] && func_1525(&(Global_1946804->f_1497.f_1[iVar5])))
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

void func_1365()
{
	_0xfe7c9cf376d23342(player_id(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_1366()
{
	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	set_player_health_recharge_multiplier(player_id(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	_0x08e22898a6af4905(player_id(), (1f - fVar0));
	_0xfeca17cf3343694b(player_id(), (1f - fVar0));
	_0xbbadfb5e5e5766fb(player_id(), (1f - fVar1));
}

int func_1367()
{
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_1167(func_1526(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1368(int iParam0)
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

bool func_1369(int iParam0, int iParam1)
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
	if (func_1167(iVar0, 1, 0) && func_1167(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_1370(int iParam0)
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

bool func_1371(int iParam0, int iParam1)
{
	iVar0 = func_1527(iParam0);
	if (iVar0 != -15)
	{
		func_338(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_339(iVar0, 1);
	}
	return false;
}

void func_1372(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_1373(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_1374(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_1375(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_1376(int iParam0)
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
	iVar1 = func_1385(iVar9);
	iVar2 = func_1385(iVar10);
	iVar3 = func_1385(iVar11);
	iVar5 = func_1386(iVar9);
	iVar6 = func_1386(iVar10);
	iVar7 = func_1386(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_1385(iVar12);
		iVar8 = func_1386(iVar12);
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

void func_1377(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_1378()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1528(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1379()
{
	return _0x5461c821d00fe15a(2103522376, 0);
}

bool func_1380(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_1508(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1508(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1508(iVar0))
		{
			*sParam2++;
		}
		if (func_1508(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_1508(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1508(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1508(iVar0))
		{
			*sParam2++;
		}
		if (func_1508(iVar1))
		{
			*sParam2++;
		}
		if (func_1508(iVar0) && func_1508(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_1508(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1508(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1508(iVar0))
		{
			*sParam2++;
		}
		if (func_1508(iVar1))
		{
			*sParam2++;
		}
		if (func_1508(iVar2))
		{
			*sParam2++;
		}
		if ((func_1508(iVar0) && func_1508(iVar1)) && func_1508(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1508(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1508(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1508(iVar0))
		{
			*sParam2++;
		}
		if (func_1508(iVar1))
		{
			*sParam2++;
		}
		if (func_1508(iVar2))
		{
			*sParam2++;
		}
		if (func_1508(iVar3))
		{
			*sParam2++;
		}
		if (((func_1508(iVar0) && func_1508(iVar1)) && func_1508(iVar2)) && func_1508(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_1381(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_1529(1497516462);
			func_1530(2016141805);
			func_1530(1010885152);
			func_1530(-502324015);
			break;
		case 2016141805:
			func_1530(1497516462);
			func_1529(2016141805);
			func_1530(1010885152);
			func_1530(-502324015);
			break;
		case 1010885152:
			func_1530(1497516462);
			func_1530(2016141805);
			func_1529(1010885152);
			func_1530(-502324015);
			break;
		case -502324015:
			func_1530(1497516462);
			func_1530(2016141805);
			func_1530(1010885152);
			func_1529(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_1530(-538889627);
			func_1530(-538880323);
			func_1530(-1056767524);
			func_1529(iParam0);
			Jump @2853; //curOff = 711
			func_1531();
			func_1529(iParam0);
			Jump @2853; //curOff = 724
			func_1532();
			func_1529(iParam0);
			Jump @2853; //curOff = 737
			func_1530(-664252410);
			func_1530(2109952320);
			func_1529(2019386373);
			Jump @2853; //curOff = 767
			func_1530(2019386373);
			func_1530(2109952320);
			func_1529(-664252410);
			Jump @2853; //curOff = 797
			func_1530(2019386373);
			func_1530(-664252410);
			func_1529(2109952320);
			Jump @2853; //curOff = 827
			func_1530(-1835851517);
			func_1530(-1838352012);
			func_1529(-1674179981);
			Jump @2853; //curOff = 857
			func_1530(-1674179981);
			func_1530(-1838352012);
			func_1529(-1835851517);
			Jump @2853; //curOff = 887
			func_1530(-1674179981);
			func_1530(-1835851517);
			func_1529(-1838352012);
			Jump @2853; //curOff = 917
			func_1530(210001842);
			func_1529(-1717960576);
			Jump @2853; //curOff = 938
			func_1530(-1717960576);
			func_1529(210001842);
			Jump @2853; //curOff = 959
			func_1530(-1271608261);
			func_1530(1846061697);
			func_1530(-1145519186);
			func_1529(-150493654);
			Jump @2853; //curOff = 998
			func_1530(-150493654);
			func_1530(1846061697);
			func_1530(-1145519186);
			func_1529(-1271608261);
			Jump @2853; //curOff = 1037
			func_1530(-150493654);
			func_1530(-1271608261);
			func_1530(-1145519186);
			func_1529(1846061697);
			Jump @2853; //curOff = 1076
			func_1530(-150493654);
			func_1530(-1271608261);
			func_1530(1846061697);
			func_1529(-1145519186);
			Jump @2853; //curOff = 1115
			func_1530(280705402);
			func_1530(1926308480);
			func_1529(1766284049);
			Jump @2853; //curOff = 1145
			func_1530(1766284049);
			func_1530(1926308480);
			func_1529(280705402);
			Jump @2853; //curOff = 1175
			func_1530(1766284049);
			func_1530(280705402);
			func_1529(1926308480);
			Jump @2853; //curOff = 1205
			if (bParam1)
			{
				func_1530(439465264);
				func_1529(1609506757);
			}
			else
			{
				func_1530(1609506757);
				func_1530(439465264);
			}
			Jump @2853; //curOff = 1252
			if (func_1533(1609506757))
			{
				if (bParam1)
				{
					func_1529(439465264);
				}
				else
				{
					func_1530(439465264);
				}
			}
			Jump @2853; //curOff = 1293
			func_1530(-1612662716);
			func_1529(1822001510);
			Jump @2853; //curOff = 1314
			func_1530(1822001510);
			func_1529(-1612662716);
			Jump @2853; //curOff = 1335
			func_1530(1952610440);
			func_1530(-223469678);
			func_1530(-404698347);
			func_1530(1517904467);
			func_1529(1306158345);
			Jump @2853; //curOff = 1383
			func_1530(1306158345);
			func_1530(-223469678);
			func_1530(-404698347);
			func_1530(1517904467);
			func_1529(1952610440);
			Jump @2853; //curOff = 1431
			func_1530(1306158345);
			func_1530(1952610440);
			func_1530(-404698347);
			func_1530(1517904467);
			func_1529(-223469678);
			Jump @2853; //curOff = 1479
			func_1530(1306158345);
			func_1530(1952610440);
			func_1530(-223469678);
			func_1530(1517904467);
			func_1529(-404698347);
			Jump @2853; //curOff = 1527
			func_1530(1306158345);
			func_1530(1952610440);
			func_1530(-223469678);
			func_1530(-404698347);
			func_1529(1517904467);
			Jump @2853; //curOff = 1575
			func_1530(931649776);
			func_1530(-434590080);
			func_1530(1743048395);
			func_1530(449774763);
			func_1529(1376646519);
			Jump @2853; //curOff = 1623
			func_1530(1376646519);
			func_1530(-434590080);
			func_1530(1743048395);
			func_1530(449774763);
			func_1529(931649776);
			Jump @2853; //curOff = 1671
			func_1530(1376646519);
			func_1530(931649776);
			func_1530(1743048395);
			func_1530(449774763);
			func_1529(-434590080);
			Jump @2853; //curOff = 1719
			func_1530(1376646519);
			func_1530(931649776);
			func_1530(-434590080);
			func_1530(449774763);
			func_1529(1743048395);
			Jump @2853; //curOff = 1767
			func_1530(1376646519);
			func_1530(931649776);
			func_1530(-434590080);
			func_1530(1743048395);
			func_1529(449774763);
			Jump @2853; //curOff = 1815
			func_1530(38162571);
			func_1530(1350391819);
			func_1530(54073871);
			func_1529(-1414537028);
			Jump @2853; //curOff = 1854
			func_1530(-1414537028);
			func_1530(1350391819);
			func_1530(54073871);
			func_1529(38162571);
			Jump @2853; //curOff = 1893
			func_1530(-1414537028);
			func_1530(38162571);
			func_1530(54073871);
			func_1529(1350391819);
			Jump @2853; //curOff = 1932
			func_1530(-1414537028);
			func_1530(38162571);
			func_1530(1350391819);
			func_1529(54073871);
			Jump @2853; //curOff = 1971
			func_1529(198200492);
			func_1530(-1124061431);
			func_1530(52706132);
			func_1530(-259123672);
			Jump @2853; //curOff = 2010
			func_1530(198200492);
			func_1529(-1124061431);
			func_1530(52706132);
			func_1530(-259123672);
			Jump @2853; //curOff = 2049
			func_1530(198200492);
			func_1530(-1124061431);
			func_1529(52706132);
			func_1530(-259123672);
			Jump @2853; //curOff = 2088
			func_1530(198200492);
			func_1530(-1124061431);
			func_1530(52706132);
			func_1529(-259123672);
			Jump @2853; //curOff = 2127
			func_1529(-919512195);
			func_1530(-1925798111);
			func_1530(420709909);
			func_1530(1703426636);
			Jump @2853; //curOff = 2166
			func_1529(-1925798111);
			func_1530(-919512195);
			func_1530(420709909);
			func_1530(1703426636);
			Jump @2853; //curOff = 2205
			func_1529(420709909);
			func_1530(-919512195);
			func_1530(-1925798111);
			func_1530(1703426636);
			Jump @2853; //curOff = 2244
			func_1529(1703426636);
			func_1530(-919512195);
			func_1530(-1925798111);
			func_1530(420709909);
			Jump @2853; //curOff = 2283
			func_1529(-1223121209);
			func_1530(630808005);
			Jump @2853; //curOff = 2304
			func_1529(630808005);
			func_1530(-1223121209);
			Jump @2853; //curOff = 2325
			func_1529(1453909576);
			func_1530(1643531967);
			Jump @2853; //curOff = 2346
			func_1529(1643531967);
			func_1530(1453909576);
			Jump @2853; //curOff = 2367
			func_1529(0);
			func_1530(473295046);
			func_1530(-1738165526);
			Jump @2853; //curOff = 2393
			func_1529(473295046);
			func_1530(0);
			func_1530(-1738165526);
			Jump @2853; //curOff = 2419
			func_1529(-1738165526);
			func_1530(0);
			func_1530(473295046);
			Jump @2853; //curOff = 2445
			func_1529(932909855);
			func_1530(2051822093);
			Jump @2853; //curOff = 2466
			func_1529(2051822093);
			func_1530(932909855);
			Jump @2853; //curOff = 2487
			func_1529(405586984);
			func_1530(1509509592);
			func_1530(-959357075);
			func_1530(-1311865656);
			Jump @2853; //curOff = 2526
			func_1529(1509509592);
			func_1530(405586984);
			func_1530(-959357075);
			func_1530(-1311865656);
			Jump @2853; //curOff = 2565
			func_1529(-959357075);
			func_1530(1509509592);
			func_1530(405586984);
			func_1530(-1311865656);
			Jump @2853; //curOff = 2604
			func_1529(-1311865656);
			func_1530(1509509592);
			func_1530(-959357075);
			func_1530(405586984);
			Jump @2853; //curOff = 2643
			if (bParam1)
			{
				func_1529(-524145696);
			}
			else
			{
				func_1530(-524145696);
			}
			func_1530(1626481264);
			func_1530(282809459);
			Jump @2853; //curOff = 2690
			func_1529(282809459);
			func_1530(1626481264);
			func_1530(-524145696);
			Jump @2853; //curOff = 2720
			func_1529(1626481264);
			func_1530(-524145696);
			func_1530(282809459);
			Jump @2853; //curOff = 2750
			if (bParam1)
			{
				func_1529(885203519);
			}
			else
			{
				func_1530(885203519);
			}
			Jump @2853; //curOff = 2779
			if (bParam1)
			{
				func_1529(-1080627546);
			}
			else
			{
				func_1530(-1080627546);
			}
			Jump @2853; //curOff = 2808
			if (bParam1)
			{
				if (!func_1533(iParam0))
				{
					func_1529(iParam0);
				}
			}
			else if (func_1533(iParam0))
			{
				func_1530(iParam0);
			}
		}

void func_1382(int iParam0)
{
	if (!func_1534(iParam0))
	{
		func_1536(func_1535(iParam0));
	}
}

int func_1383()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1534(_0x126cbebba46693cf(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1384(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_1385(iVar9);
	iVar2 = func_1385(iVar10);
	iVar3 = func_1385(iVar11);
	iVar5 = func_1386(iVar9);
	iVar6 = func_1386(iVar10);
	iVar7 = func_1386(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_1385(iVar12);
		iVar8 = func_1386(iVar12);
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

int func_1385(int iParam0)
{
	if (func_1167(iParam0, 1, 0))
	{
		iVar0 = func_1177(iParam0, 0, 0);
	}
	return iVar0;
}

int func_1386(int iParam0)
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

int func_1387(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0);
}

void func_1388(int iParam0, int iParam1)
{
	_0x3ea62e56f386c997(iParam0, iParam1);
}

int func_1389(int iParam0, int iParam1)
{
	if (!func_335(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

void func_1390(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_1389(iParam1, 5) || iParam0 == func_1389(iParam1, 6)) || iParam0 == func_1389(iParam1, 7)) || iParam0 == func_1389(iParam1, 8)) || iParam0 == func_1389(iParam1, 9))
	{
		func_1380(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_1189(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_1191(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_1391(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if ((((iParam0 == func_1389(iParam1, 5) || iParam0 == func_1389(iParam1, 6)) || iParam0 == func_1389(iParam1, 7)) || iParam0 == func_1389(iParam1, 8)) || iParam0 == func_1389(iParam1, 9))
	{
		if (func_1380(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_1189(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_1191(51, 0, 0, iVar0, func_1347(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_1189(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_1191(51, 0, 0, iVar0, func_1347(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_1392()
{
	if (func_1345((*Global_1347702)[37]->f_15) && Global_1392388->f_7)
	{
		return true;
	}
	return false;
}

void func_1393(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
}

void func_1394(int iParam0)
{
	if (!func_1537(iParam0))
	{
		_0x3ea62e56f386c997(iParam0, 1);
	}
}

void func_1395(int iParam0)
{
	_0x398fab9c96a81924(iParam0, 1);
}

void func_1396(int iParam0, int iParam1, var uParam2)
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

int func_1397(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_1538(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

bool func_1398(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1539();
	if (iParam2 == 39)
	{
		Var0 = { func_796(iParam0, 1, 0) };
		iParam2 = func_1326(func_1397(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_1169(iParam0, 866047851) && func_1523(&(Global_1946804->f_1378)) >= 2)
	{
		return false;
	}
	if ((func_1401(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2])
	{
		func_1540(func_1538(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_1541(iParam2);
	func_1542(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2] != &Global_1946804->f_57[iParam2] && Global_1946804->f_57[iParam2]->f_1 > 1)
	{
		func_1543(Global_1946804->f_1378.f_1[iParam2], 4, 6);
		func_1543(Global_1946804->f_1497.f_1[iParam2], 4, 6);
	}
	func_1544(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804->f_1378.f_1[iParam2]->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2] = iParam0;
	Global_1946804->f_1378.f_1[iParam2]->f_1 = func_1545(iParam0, iParam2, iParam1, func_1() != -1);
	if (bParam4)
	{
		func_1546(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_1546(&(Global_1946804->f_1378), 1, 0);
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
				func_1547(func_1538(&(Global_1946804->f_2589.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_1399(bool bParam0, bool bParam1, bool bParam2)
{
	func_1548(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

void func_1400(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_1549(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1550(Var0);
}

bool func_1401(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_1402()
{
	func_1551(&(Global_1946804->f_2776));
	func_1552(32768);
	func_1547(1108822547, 8, 6);
}

int func_1403(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_1326(iParam0, 1);
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

void func_1404(int iParam0)
{
	if (func_1553(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1554(Var0);
}

void func_1405(int iParam0, int iParam1, int iParam2)
{
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_1554(Var0);
}

bool func_1406(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_968(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_1407(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_1408(int iParam0)
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

float func_1409()
{
	if (func_1555())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_1556(2);
	}
	if (Global_1347477->f_119)
	{
		return func_1556(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1557();
	fVar2 = func_1558();
	fVar3 = func_1559();
	fVar4 = func_1560();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1561()));
	fVar7 = (func_1556(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1562(3, round((to_float(iVar8) * fVar10)), 0);
	func_1563(3, fVar9, fVar9 > 100f);
	return func_1564(fVar7, -100f, 100f);
}

float func_1410()
{
	if (func_1555())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_1556(1);
	}
	if (Global_1347477->f_119)
	{
		return func_1556(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1557();
	fVar2 = func_1558();
	fVar3 = func_1559();
	fVar4 = func_1560();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1561()));
	fVar7 = (func_1556(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1562(2, round((to_float(iVar8) * fVar10)), 0);
	func_1563(2, fVar9, fVar9 > 100f);
	return func_1564(fVar7, -100f, 100f);
}

float func_1411()
{
	if (func_1555())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_1556(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1565())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1566())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_1556(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1557();
	fVar2 = func_1558();
	fVar3 = func_1559();
	fVar4 = func_1560();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1561()));
	fVar7 = (func_1556(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1562(1, round((to_float(iVar8) * fVar10)), 0);
	func_1563(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_1556(0);
	}
	return func_1564(fVar7, -100f, 100f);
}

bool func_1412(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_1413(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_967(iParam0, 0))
	{
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return 0;
	}
	if (func_1337(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return 0;
	}
	if (!func_802(0))
	{
		return 0;
	}
	if (!_0xcb5d11f9508a928d(func_968(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_1414(int iParam0, bool bParam1)
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
				return func_1567();
			}
			break;
	}
	return 0;
}

int func_1415(int iParam0)
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

bool func_1416(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_1417(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1416(iParam0))
	{
		return;
	}
	if (func_1568(iParam0))
	{
		return;
	}
	if (!func_1569(iParam0))
	{
		func_1570(iParam0, 1, 0);
	}
	iVar0 = func_1571(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_1572(iParam0, 512))
		{
			func_1400(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_1573() && !bParam1) && !func_134(0, 0, 1))
	{
		func_916(_create_var_string(10, "OUT_JOURN_DONE", _create_var_string(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_1574(iParam0, 6);
	if (bParam2)
	{
		if (!func_134(0, 0, 1))
		{
			func_1344(1, 4);
		}
	}
}

int func_1418()
{
	return Global_1946804->f_1;
}

bool func_1419(int iParam0, bool bParam1)
{
	return func_1414(iParam0, 0) < func_1575(iParam0, bParam1);
}

bool func_1420(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_962(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1421(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_1326(iParam0, 1)] != &Global_1946804->f_57[func_1326(iParam0, 1)];
}

void func_1422(int iParam0, int iParam1)
{
	if (func_1169(iParam1, 130796156))
	{
		func_1576(iParam1, 0);
	}
	else if (func_1169(iParam1, 930141731))
	{
		func_1576(iParam1, 1);
		func_1577(iParam0);
	}
}

void func_1423(var uParam0, int iParam1)
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

int func_1424(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_1578(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_1579(uParam2, iParam0, Var1);
	return 1;
}

int func_1425(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_1426(int iParam0)
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

int func_1427(int iParam0)
{
	if (!func_1580(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

bool func_1428()
{
	return !&Global_1911774;
}

void func_1429(int iParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_1430(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_1431(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

bool func_1432()
{
	return Global_1347398->f_1 == 0;
}

void func_1433(int iParam0)
{
	Global_1347398->f_1 = iParam0;
}

bool func_1434()
{
	return Global_1347398->f_1 == 1000;
}

bool func_1435()
{
	return Global_1347398->f_1 == 2000;
}

bool func_1436()
{
	return Global_1347398->f_1 == 3000;
}

void func_1437(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_1160(1356759001) };
	stat_id_set_int(&Var0, iParam0, true);
}

int func_1438(int iParam0)
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

void func_1439(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_285(iParam0))
	{
		return;
	}
	iVar0 = func_488(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_1440(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (bParam4 && !func_285(iParam0))
	{
		return;
	}
	iVar0 = func_488(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(10, sParam1, sParam2, sParam3));
}

int func_1441(int iParam0)
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

bool func_1442(int iParam0)
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

bool func_1443()
{
	return _unlock_is_unlocked(99890643);
}

bool func_1444(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_1447(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { func_800(iParam1, Var0, 1415981582, 0) };
	return func_1581(Var29, 1);
}

bool func_1445(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_1447(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { func_800(iParam1, Var0, -2119169513, 0) };
	return func_1581(Var29, 1);
}

void func_1446(var uParam0)
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

bool func_1447(int iParam0, var uParam1)
{
	if (!func_1582(iParam0))
	{
		return false;
	}
	iVar0 = func_1448(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1.f_9 = -1591664384;
	Var15 = { func_957(0) };
	if (!func_1583(Var15, iVar0, &Var1, 0, 0))
	{
		return false;
	}
	if (!func_1584(&Var1, uParam1))
	{
		return false;
	}
	return true;
}

int func_1448(int iParam0)
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

bool func_1449(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10)
{
	if (!func_802(bParam10))
	{
		return func_1585(Param0, Param4, iParam8, 1, bParam9, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_964(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (func_1586(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return true;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, iParam8))
	{
		return false;
	}
	if (!_0xdccaa7c3bfd88862(func_968(0), &Param0, &Param4, iParam8, Var0.f_11, &Var14))
	{
		return false;
	}
	if (bParam9)
	{
		if (!func_1581(Var14, 1))
		{
		}
	}
	return true;
}

bool func_1450(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	if (!func_802(bParam9))
	{
		return func_1587(Param0, Param4, iParam8, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return false;
	}
	if (func_1586(&Param0, &Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_964(Param0, &Var0, bParam9, 1) || !func_964(Param4, &Var14, bParam9, 1))
	{
		return false;
	}
	if (func_1586(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return false;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, Var14.f_9) || !_inventory_fits_slot_id(Var14.f_4, Var0.f_9))
	{
		return false;
	}
	iVar28 = func_968(0);
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

bool func_1451(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_1588(get_entity_model(iParam0)))
	{
		return true;
	}
	if (decor_exist_on(iParam0, "HorseCompanion"))
	{
		return true;
	}
	return false;
}

bool func_1452(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 5)
	{
		return true;
	}
	return false;
}

int func_1453()
{
	return 1342496140;
}

int func_1454()
{
	return 446670976;
}

int func_1455()
{
	return 1;
}

int func_1456()
{
	return -868094182;
}

int func_1457()
{
	return 1074477367;
}

int func_1458()
{
	return 1;
}

int func_1459()
{
	return -997197050;
}

int func_1460()
{
	return -2063289686;
}

int func_1461()
{
	return 2;
}

int func_1462()
{
	return -868094182;
}

int func_1463()
{
	return 1074477367;
}

int func_1464()
{
	return 1;
}

int func_1465()
{
	return 1235275977;
}

int func_1466()
{
	return 2030804811;
}

int func_1467()
{
	return 1;
}

int func_1468()
{
	return 1974379573;
}

int func_1469()
{
	return 2024948086;
}

int func_1470()
{
	return 1;
}

void func_1471(int iParam0)
{
	if (func_1589() < iParam0)
	{
		func_1590(iParam0);
	}
}

int func_1472(struct<4> Param0, int iParam4, int iParam5)
{
	Var0.f_9 = -1591664384;
	if (func_1591(Param0, iParam4, &Var0, iParam5))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_1473(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		iVar5 = func_962(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_1592(iParam0);
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

struct<4> func_1474()
{
	Var0 = { func_957(0) };
	return func_800(856287005, Var0, -218846335, 0);
}

void func_1475(int iParam0, int iParam1)
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

void func_1476(bool bParam0)
{
	*bParam0 = 0;
	bParam0->f_2 = -1;
	bParam0->f_3 = 0;
	bParam0->f_4 = 0;
}

void func_1477(bool bParam0)
{
	func_1593(bParam0);
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

bool func_1478(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

int func_1479(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_967(iParam0, 0))
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

int func_1480(int iParam0)
{
	if (!func_967(*iParam0, 0))
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

bool func_1481(int iParam0, var uParam1, bool bParam2)
{
	if (!func_967(iParam0, 0))
	{
		return false;
	}
	Var0 = { func_796(iParam0, 0, 1) };
	iVar5 = 1728382685;
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_797((386 + iVar29), 1);
		if (func_798(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_799(iParam0, &Var6, iVar5);
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

struct<14> func_1482(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_1483(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_1484(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_968(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_1485(int iParam0)
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

float func_1486(int iParam0)
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
			return func_1594(iParam0);
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
			return func_1594(iParam0);
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
			return func_1594(iParam0);
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

bool func_1487(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_937(18);
		case 2:
			return func_937(20);
		case 1:
			return func_937(19);
		default:
			break;
	}
	return true;
}

int func_1488(int iParam0)
{
	return func_1595(&(Global_40.f_11095.f_11[iParam0]));
}

void func_1489(int iParam0, float fParam1, bool bParam2)
{
	if (func_1() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_937(31))
	{
		return;
	}
	iVar0 = func_1488(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	set_attribute_points(Global_35, iParam0, floor(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_1488(iParam0);
	if (func_1596(iParam0) && func_1597(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_1598(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_1599(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!is_radar_hidden() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_716(func_1600(iParam0), 0);
					}
					func_1601(iParam0, iVar2, iVar3);
					func_1602(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = get_game_timer();
}

char* func_1490(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_1491(int iParam0)
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

void func_1492(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_1493()
{
	return func_1603(Global_40.f_12019);
}

int func_1494()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_1346(iVar1);
		if (func_1167(iVar2, 1, 0) || func_1500(func_1499(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1495()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1604(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1496()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_1505(_0x126cbebba46693cf(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1497()
{
	return _0x3a65f4844913a047(2103522376, 0);
}

int func_1498(int iParam0)
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

int func_1499(int iParam0)
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

bool func_1500(int iParam0)
{
	return (Global_40.f_12019 && iParam0) != 0;
}

char* func_1501(int iParam0)
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

int func_1502(int iParam0)
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

int func_1503(int iParam0)
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

char* func_1504(int iParam0)
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

bool func_1505(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

char* func_1506(int iParam0)
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

char* func_1507(int iParam0)
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

bool func_1508(int iParam0)
{
	if (func_1605(iParam0) && func_1167(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_1606(iParam0) && func_1607(iParam0))
	{
		return true;
	}
	return false;
}

char* func_1509(int iParam0)
{
	if (!func_967(iParam0, 0))
	{
		return "";
	}
	return _get_label_text_by_hash(func_1230(iParam0));
}

int func_1510(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

int func_1511(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

void func_1512(bool bParam0)
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

void func_1513(int iParam0)
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

void func_1514(bool bParam0)
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

void func_1515(bool bParam0)
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

void func_1516(bool bParam0)
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

void func_1517(bool bParam0)
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

void func_1518(bool bParam0)
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

void func_1519(bool bParam0)
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

int func_1520(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_1326(iParam0, 1)]);
}

void func_1521()
{
	if (!_unlock_is_unlocked(-1526891582))
	{
		func_1608();
		_unlock_set_unlocked(-1526891582, true);
		func_1196(-916314281);
		func_1236(-916314281, 1, 752097756);
		set_current_ped_weapon(Global_35, -916314281, true, 2, false, false);
		func_1196(494733111);
		func_1236(494733111, 1, 752097756);
		set_current_ped_weapon(Global_35, 494733111, true, 4, false, false);
	}
}

int func_1522(int iParam0)
{
	Var0 = { func_796(iParam0, 1, 0) };
	return func_1397(Var0.f_4);
}

int func_1523(var uParam0)
{
	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_1169(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_1169(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_1169(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_1169(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_1169(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_1169(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

int func_1524(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam0 == &Global_1946804->f_57[func_1326(iParam1, 1)])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_1401(524288))
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

bool func_1525(int iParam0)
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

int func_1526(int iParam0)
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

int func_1527(int iParam0)
{
	return func_1609(iParam0, -1);
}

bool func_1528(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

void func_1529(int iParam0)
{
	iVar0 = func_1610(iParam0, 1);
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

void func_1530(int iParam0)
{
	iVar0 = func_1610(iParam0, 1);
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

void func_1531()
{
	func_1530(-939420910);
	func_1530(-1187950766);
	func_1530(356365161);
	func_1530(753127042);
	func_1530(-2038424081);
	func_1530(1884271742);
	func_1530(459290420);
}

void func_1532()
{
	func_1530(704802028);
	func_1530(588987611);
	func_1530(2008888900);
	func_1530(1649996811);
	func_1530(227918160);
	func_1530(168171957);
	func_1530(1193080109);
	func_1530(-491981251);
	func_1530(-639037538);
	func_1530(-618620429);
}

bool func_1533(int iParam0)
{
	iVar0 = func_1610(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_1534(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_1535(int iParam0)
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

void func_1536(int iParam0)
{
	Global_40.f_12019.f_43 = (Global_40.f_12019.f_43 || iParam0);
}

bool func_1537(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_1538(int iParam0, int iParam1)
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

void func_1539()
{
	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		iVar0++;
	}
}

void func_1540(int iParam0)
{
	func_1547(iParam0, 8, 6);
}

void func_1541(int iParam0)
{
	func_1611(&(Global_1946804->f_2589), iParam0);
}

void func_1542(int iParam0, int iParam1)
{
	func_1612(&(Global_1946804->f_2589), iParam0, iParam1);
}

void func_1543(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_1544(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_962(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1613(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1542(iVar1, iVar3);
		}
	}
	if (func_1421(-1586649372) && func_1613(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1542(iVar1, iVar3);
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
						func_1542(iVar1, iVar3);
					}
				}
			}
			func_1614(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1614(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_1542(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_1614(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_1542(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_1542(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_1614(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_1614(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_1542(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_1614(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_1542(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1542(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_962(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1542(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_1525(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_962(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1542(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_1169(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1542(iVar1, iVar3);
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
						func_1542(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_1525(&(Global_1946804->f_1497.f_1[iVar1])) || func_1169(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1542(iVar1, iVar3);
					}
				}
			}
			switch (func_962(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_962(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1542(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_962(&(uParam0->f_1[iVar1])) || func_1169(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1542(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_1545(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = func_1615(0);
	if (iParam2 != 0 && func_1616(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_1617(iParam0, func_1538(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_1546(var uParam0, bool bParam1, int iParam2)
{
	bVar6 = func_1() != -1;
	iVar7 = func_1615(0);
	if (func_1401(32768))
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
			iVar5 = func_1538(iVar0, 1);
			if (func_1618(iVar5, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
			{
			}
			else if (func_1618(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
			{
			}
			else
			{
				iVar4 = func_1524(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_1619(uParam0);
				if (iVar3 > 0)
				{
					if (!func_1401(524288))
					{
						func_1549(524288);
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
							iVar5 = func_1538(iVar0, 1);
							if (func_1618(iVar5, 8))
							{
							}
							else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
							{
							}
							else if (func_1618(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
							{
							}
							else
							{
								iVar4 = func_1524(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0] = &Global_1946804->f_57[iVar0];
									uParam0->f_1[iVar0]->f_1 = 0;
									if (bParam1)
									{
										func_1542(iVar0, iParam2);
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
					func_1552(524288);
				}
			}
		}
	}
}

void func_1547(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_1326(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_1326(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_1326(iParam0, 1)])->f_10 && iParam1));
}

void func_1548(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1620(&(uParam0->f_2[iVar0]), bParam1, bParam2);
		iVar0++;
	}
	if (func_1() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_1621(2, Global_26796.f_776)) || Global_1946804->f_1497 != func_1571(0))
		{
			if (Global_40.f_7157[Global_40.f_7729] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729] = (&Global_40.f_7157[Global_40.f_7729] - Global_40.f_7157[Global_40.f_7729] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729] |= 4096;
				Global_1946804->f_1497 = func_1571(Global_40.f_7729);
				Global_1946804->f_1378 = func_1571(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_1622(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_1623(0, 1);
	}
}

void func_1549(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_1550(struct<4> Param0)
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
			if (func_1624(Param0))
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
			func_1625(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_1549(8);
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
			if (func_1624(Param0))
			{
				return;
			}
			func_1625(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_1549(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_1405(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

void func_1551(var uParam0)
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

void func_1552(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

bool func_1553(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_1554(struct<4> Param0)
{
	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_1624(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1] == Param0 && Global_1946804->f_769[iVar1]->f_2 == Param0.f_2) && Global_1946804->f_769[iVar1]->f_3 == Param0.f_3) && Global_1946804->f_769[iVar1]->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1] == 34 && func_1624(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_1625(Param0);
	*Global_1946804->f_769[Global_1946804->f_854] = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_1549(8);
}

bool func_1555()
{
	if (Global_1572887->f_12 != -1)
	{
		return false;
	}
	return Global_1347477->f_203;
}

float func_1556(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

float func_1557()
{
	fVar0 = func_1626(13);
	iVar1 = func_1627(fVar0);
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

float func_1558()
{
	if (is_ped_on_mount(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_1559()
{
	if (func_1363())
	{
		if (_get_special_edition_core_stats_bonus_enabled())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_1560()
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

float func_1561()
{
	return Global_1955565->f_3;
}

void func_1562(int iParam0, char* sParam1, bool bParam2)
{
	sVar0 = func_1628(iParam0, 1, 0, 0);
	sVar0 = _create_var_string(2, sVar0, sParam1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[1]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[1]), bParam2);
}

void func_1563(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_1628(iParam0, 2, 0, 0);
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

float func_1564(float fParam0, float fParam1, float fParam2)
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

bool func_1565()
{
	return func_1626(12) <= -99f;
}

bool func_1566()
{
	return func_1626(12) >= 99f;
}

int func_1567()
{
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_962(iVar1) == -999503751)
		{
			if (func_1629() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_1568(int iParam0)
{
	if (!func_1416(iParam0))
	{
		return false;
	}
	if (func_1572(iParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_1569(int iParam0)
{
	if (!func_1416(iParam0))
	{
		return false;
	}
	if (func_1572(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_1570(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1416(iParam0))
	{
		return;
	}
	if (!func_1569(iParam0))
	{
		func_1574(iParam0, 2);
		if (bParam2)
		{
			if (!func_134(0, 0, 1))
			{
				func_1344(1, 4);
			}
		}
		if ((!func_1573() && !bParam1) && !func_134(0, 0, 1))
		{
			func_916(_create_var_string(10, "OUT_JOURN_ADD", func_1630(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_1571(int iParam0)
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

bool func_1572(int iParam0, int iParam1)
{
	if (!func_1416(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0] && iParam1) != 0;
}

bool func_1573()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

void func_1574(int iParam0, int iParam1)
{
	if (!func_1416(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0] = (Global_40.f_7157[iParam0] || iParam1);
}

int func_1575(int iParam0, bool bParam1)
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

void func_1576(int iParam0, bool bParam1)
{
	iVar0 = func_1631(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_1193(50);
			}
			else
			{
				func_1193(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_1193(51);
			}
			else
			{
				func_1193(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_1632(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_1217();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_1217();
			}
			break;
		case 3:
			func_1193(24);
			if (bParam1)
			{
				if (!func_1632(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_1217();
				}
			}
			break;
	}
}

void func_1577(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_1633(0))
			{
				iVar0++;
			}
			if (func_1633(2))
			{
				iVar0++;
			}
			if (func_1633(4))
			{
				iVar0++;
			}
			if (!func_1634(16))
			{
				if (iVar0 == 1)
				{
					func_1635();
					func_716(456, 1);
					func_1636(16);
				}
			}
			if (!func_1634(32))
			{
				if (iVar0 >= 3)
				{
					func_1635();
					func_716(456, 1);
					func_1636(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_1633(1))
			{
				iVar0++;
			}
			if (func_1633(3))
			{
				iVar0++;
			}
			if (func_1633(7))
			{
				iVar0++;
			}
			if (!func_1634(1))
			{
				if (iVar0 == 1)
				{
					func_1637();
					func_716(457, 1);
					func_1636(1);
				}
			}
			if (!func_1634(2))
			{
				if (iVar0 >= 3)
				{
					func_1637();
					func_716(457, 1);
					func_1636(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_1633(5))
			{
				iVar0++;
			}
			if (func_1633(6))
			{
				iVar0++;
			}
			if (func_1633(8))
			{
				iVar0++;
			}
			if (!func_1634(4))
			{
				if (iVar0 == 1)
				{
					func_1638();
					func_716(455, 1);
					func_1636(4);
				}
			}
			if (!func_1634(8))
			{
				if (iVar0 >= 3)
				{
					func_1638();
					func_716(455, 1);
					func_1636(8);
				}
			}
			break;
	}
}

void func_1578(var uParam0)
{
	func_1423(uParam0, 143479330);
	if (Global_1946804->f_1 == 2026485318)
	{
		func_1423(uParam0, 617531372);
	}
	else
	{
		func_1423(uParam0, 291123060);
	}
}

void func_1579(var uParam0, int iParam1, struct<14> Param2)
{
	if (!func_1639(uParam0))
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

bool func_1580(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_1581(struct<4> Param0, int iParam4)
{
	if (!func_802(0))
	{
		return func_1640(Param0, iParam4, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_964(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!_0x734311e2852760d0(func_968(0), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_1582(int iParam0)
{
	iVar0 = func_1448(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1 = { func_957(0) };
	if (func_1641(&Var1, iVar0, 0) > 0)
	{
		return true;
	}
	return false;
}

bool func_1583(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	iVar0 = func_968(bParam7);
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

bool func_1584(var uParam0, var uParam1)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (!_0x025a1b1fb03fbf61(func_968(0), uParam0, uParam1, 29, 1))
	{
		return false;
	}
	return true;
}

int func_1585(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10, bool bParam11)
{
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	if (!func_964(Param0, &Var0, 1, 0))
	{
		return -1;
	}
	if (func_1586(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return -1;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, iParam8))
	{
		return -1;
	}
	iVar14 = func_965(Var0.f_4, Param4, iParam8, 0);
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
	Var16 = { func_1642(&Var0) };
	Var16.f_4 = { Param4 };
	Var16.f_11 = iParam8;
	Var16.f_10 = bParam10;
	iVar32 = func_1643(1168099063, &Var16, bParam9);
	if (iVar32 == -1)
	{
		return -1;
	}
	return iVar32;
}

bool func_1586(var uParam0, bool bParam1)
{
	if (((*uParam0 == *bParam1 && uParam0->f_1 == bParam1->f_1) && uParam0->f_2 == bParam1->f_2) && uParam0->f_3 == bParam1->f_3)
	{
		return true;
	}
	return false;
}

int func_1587(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return -1;
	}
	if (func_1586(&Param0, &Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_964(Param0, &Var0, 1, 0) || !func_964(Param4, &Var14, 1, 0))
	{
		return -1;
	}
	if (func_1586(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return -1;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, Var14.f_9) || !_inventory_fits_slot_id(Var14.f_4, Var0.f_9))
	{
		return -1;
	}
	Var28 = { func_1642(&Var0) };
	Var28.f_4 = { Var14.f_5 };
	Var28.f_11 = Var14.f_9;
	Var28.f_10 = (Var14.f_10 || iParam8);
	Var44 = { func_1642(&Var14) };
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
					func_1644(iVar60, 1);
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
		iVar60 = func_1643(1168099063, &Var28, 0);
		iVar60 = func_1643(1168099063, &Var44, 0);
	}
	return iVar60;
}

bool func_1588(int iParam0)
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

int func_1589()
{
	return Global_40.f_1095.f_3135;
}

void func_1590(int iParam0)
{
	Global_40.f_1095.f_3135 = iParam0;
}

bool func_1591(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x22e590f108289a9d(func_968(bParam6), &uParam0, iParam4, &Var0))
	{
		return false;
	}
	if (!func_964(Var0, uParam5, bParam6, 0))
	{
		return false;
	}
	return true;
}

int func_1592(int iParam0)
{
	if (!func_967(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_962(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return _item_database_get_has_slot_count(iVar0);
}

void func_1593(bool bParam0)
{
	_0xb6fd96420c0126a1(-1056478928, bParam0);
}

float func_1594(int iParam0)
{
	iVar4 = func_1485(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = &Global_40.f_11095.f_11[iVar4];
			iVar5 = func_1595(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_1645(iVar6) - func_1645(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1f;
}

int func_1595(float fParam0)
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

int func_1596(int iParam0)
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

int func_1597(int iParam0)
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

int func_1598(float fParam0, float fParam1)
{
	iVar0 = func_1595(fParam0);
	fVar1 = to_float(func_1645(iVar0));
	fVar2 = to_float(func_1645(iVar0 + 1));
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

int func_1599(int iParam0)
{
	if (func_1646(iParam0, &iVar0))
	{
		return func_1645(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_1647())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_1647())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_1647())
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

int func_1600(int iParam0)
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

void func_1601(int iParam0, int iParam1, int iParam2)
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
	iVar3 = (iVar3 + func_1648(iParam0));
	sVar4 = func_571(func_1649(iVar3, iParam2));
	sVar6 = func_1650(iParam0);
	if (!is_string_null_or_empty(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = _create_var_string(10, sVar0, func_1651(iParam0));
	iVar8 = func_1652(iParam0);
	iVar9 = get_hash_key(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = iVar8;
		Var10.f_4 = 1;
		Var10.f_5 = func_1653(iParam0);
		_uilog_post_notification(&Var10);
	}
	func_733(sVar7, sVar1, iVar8, iVar9, -479097442, "INPUT_FEED_INTERACT_GENERIC", func_1654(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_1602(int iParam0, int iParam1)
{
	Global_1347477->f_9[iParam0] = (get_game_timer() + iParam1);
}

int func_1603(int iParam0)
{
	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

bool func_1604(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_1605(int iParam0)
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

int func_1606(int iParam0)
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

int func_1607(int iParam0)
{
	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_1655(&iVar0, 0, iVar95, &Var1) && !func_1655(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (is_model_a_ped(Var1))
		{
			func_1656(iVar0, &Var1);
			if (func_967(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

void func_1608()
{
	if (!_0x7c7e4ab748ea3b07())
	{
		return;
	}
	uVar0 = 29;
	func_1657(Global_35, &uVar0);
	Var30 = { func_957(0) };
	_0xe36d4a38d28d9cfb(0);
	_0xc04f47d488ef9eba(5, 1, &Var30, 0);
	_0x5d6182f3bce1333b(5, -142743235);
	func_1658(0);
	func_1659(7);
	func_1660(-1623728698, 1, 1, 0);
	if (func_1418() == 1160113249)
	{
		func_1660(-763730846, 1, 1, 1);
		func_1660(-361635024, 1, 1, 1);
	}
	func_1661(Global_35, &uVar0);
}

int func_1609(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = func_968(0);
	}
	if (!_0x112bca290d2eb53c(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_805(&uVar6, iVar0);
	func_806(&uVar6, iVar1);
	func_807(&uVar6, iVar2);
	func_808(&uVar6, iVar3);
	func_809(&uVar6, iVar4);
	func_810(&uVar6, iVar5);
	return uVar6;
}

int func_1610(int iParam0, int iParam1)
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

void func_1611(var uParam0, int iParam1)
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
			if ((func_1662(uParam0->f_2[iVar0], 2) || &uParam0->f_2[iVar0] == iParam1) || &uParam0->f_2[iVar0] == 39)
			{
				*uParam0->f_2[iVar0] = { Var2 };
			}
			else
			{
				if (func_1662(uParam0->f_2[iVar0], 1))
				{
					func_1663(uParam0->f_2[iVar0], 2, 6);
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

void func_1612(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_1664(uParam0, 1))
	{
		func_1665(uParam0, 1);
	}
	uParam0->f_2[*uParam0]->f_1 = iParam2;
	uParam0->f_2[*uParam0] = iParam1;
	*uParam0++;
}

bool func_1613(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

void func_1614(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_1542(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_1542(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2]->f_1 == -1333118809 || uParam0->f_1[iVar2]->f_1 == -1158926300)
	{
		uParam0->f_1[iVar2]->f_1 = 1155669136;
		if (bParam3)
		{
			func_1542(iVar2, iVar0);
		}
	}
}

int func_1615(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_1418();
	}
	iVar0 = 0;
	if (iParam0 == 24043185)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_1616(int iParam0, int iParam1, int iParam2, bool bParam3)
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

bool func_1617(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

bool func_1618(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_1326(iParam0, 1)])->f_10 && iParam1) != 0;
}

int func_1619(var uParam0)
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

void func_1620(int iParam0, bool bParam1, bool bParam2)
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
		func_1666(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_26796.f_776);
	}
	else
	{
		func_1667(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

bool func_1621(int iParam0, int iParam1)
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

void func_1622(int iParam0, bool bParam1, int iParam2)
{
	func_1668(&(Global_1946804->f_1378), iParam0);
	func_1669(2, iParam0, 6);
	if (bParam1)
	{
		func_1623(0, 1);
	}
}

void func_1623(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1670(0);
	}
	if (bParam0)
	{
		func_1549(8);
		func_1549(512);
	}
	else
	{
		func_1549(8);
		func_1549(16);
	}
}

bool func_1624(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_1625(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

float func_1626(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

int func_1627(float fParam0)
{
	return round(((fParam0 / 100f) * to_float(10)));
}

char* func_1628(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_477(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_477(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

int func_1629()
{
	return Global_1946804->f_1497;
}

char* func_1630(int iParam0)
{
	iVar0 = func_1571(iParam0);
	if (iVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_1509(iVar0);
}

int func_1631(int iParam0)
{
	if (func_1671(iParam0))
	{
		iVar0 = 0;
	}
	else if (func_1672(iParam0))
	{
		iVar0 = 1;
	}
	else if (func_1673(iParam0))
	{
		iVar0 = 2;
	}
	else if (func_1674(iParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

bool func_1632(int iParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_1167(func_1675(iVar0, iParam0), 1, 0))
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

bool func_1633(int iParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_1167(func_1676(iVar0, iParam0), 1, 0))
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

bool func_1634(int iParam0)
{
	return (Global_40.f_12003 && iParam0) != 0;
}

void func_1635()
{
	if (func_1() != -1)
	{
		return;
	}
	func_1236(1654063339, 1, 752097756);
	iVar0 = func_1488(1);
	func_1601(1, iVar0, 0);
}

void func_1636(int iParam0)
{
	Global_40.f_12003 = (Global_40.f_12003 || iParam0);
}

void func_1637()
{
	if (func_1() != -1)
	{
		return;
	}
	func_1236(1623931083, 1, 752097756);
	iVar0 = func_1488(2);
	func_1601(2, iVar0, 0);
}

void func_1638()
{
	if (func_1() != -1)
	{
		return;
	}
	func_1236(-1845241476, 1, 752097756);
	iVar0 = func_1488(0);
	func_1601(0, iVar0, 0);
}

bool func_1639(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_1640(struct<4> Param0, int iParam4, bool bParam5)
{
	iVar0 = -1;
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_964(Param0, &Var1, 1, 0))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_958(Var1.f_4);
	if (iVar15 == -1784221369)
	{
		Var16 = { func_1677(Param0, 1) };
		Var16.f_10 = iParam4;
		iVar0 = func_1678(-1230526146, &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -1037537535)
	{
		Var44 = { func_1679(Param0, 1) };
		Var44.f_10 = iParam4;
		iVar0 = func_1680(-1230526146, &Var44, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var61 = { func_1642(&Var1) };
		Var61.f_10 = iParam4;
		iVar0 = func_1643(-1230526146, &Var61, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_1641(var uParam0, int iParam1, bool bParam2)
{
	return _0x033ee4b89f3ac545(func_968(bParam2), uParam0, iParam1);
}

struct<16> func_1642(var uParam0)
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

int func_1643(int iParam0, var uParam1, bool bParam2)
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
					func_1644(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_1644(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16))
	{
		func_1644(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_1644(int iParam0, int iParam1)
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
	func_1681(iParam0, iParam1);
}

int func_1645(int iParam0)
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

bool func_1646(int iParam0, int iParam1)
{
	return false;
}

bool func_1647()
{
	return false;
}

int func_1648(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return _0xe787f05dfc977bde(func_968(0), -1845241476, 0);
		case 1:
			return _0xe787f05dfc977bde(func_968(0), 1654063339, 0);
		case 2:
			return _0xe787f05dfc977bde(func_968(0), 1623931083, 0);
	}
	return 0;
}

struct<4> func_1649(int iParam0, int iParam1)
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

char* func_1650(int iParam0)
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

char* func_1651(int iParam0)
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

int func_1652(int iParam0)
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

int func_1653(int iParam0)
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

int func_1654(int iParam0)
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

bool func_1655(int iParam0, int iParam1, int iParam2, var uParam3)
{
	if (func_944(iParam1) && !func_1129(iParam1))
	{
		iVar0 = func_1016(iParam1);
	}
	else
	{
		return false;
	}
	func_1446(uParam3);
	iVar5 = func_1441(iParam2);
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

void func_1656(int iParam0, int iParam1)
{
	iVar0 = get_ped_index_from_entity_index(iParam0);
	if (does_entity_exist(iVar0))
	{
		func_1682(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_1683(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

void func_1657(int iParam0, int* iParam1)
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
		if (func_312(iVar31))
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

void func_1658(bool bParam0)
{
	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_967(iVar1, 0))
		{
			func_1684(iVar1, 0, bParam0);
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

void func_1659(int iParam0)
{
	Global_1946804->f_2657.f_26.f_2 = 3;
	Global_1946804->f_2657.f_26.f_1 = 3;
	Global_1946804->f_2657.f_26 = 3;
	if (func_1() == -1)
	{
		func_1685(352481484);
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
		if (func_962(iVar2) != -999503751)
		{
			func_1686(&(Global_1946804->f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_1687(iVar2, 0))
		{
			func_1688(iVar2, &Global_1946804->f_1497.f_1[iVar1] == &Global_1946804->f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_1660(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_1689(iParam0))
	{
		return;
	}
	iVar0 = func_962(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_1690(iParam0, &(Global_1946804->f_2657.f_21), Global_1946804->f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_1690(iParam0, &(Global_1946804->f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_1690(iParam0, &(Global_1946804->f_2657.f_20), Global_1946804->f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_1690(iParam0, &(Global_1946804->f_2657.f_22), Global_1946804->f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_1690(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_1690(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_1691(0))
	{
		func_1692(iParam0, 1);
		if (func_1418() == 1160113249)
		{
			func_1692(func_1691(-2125499975), 0);
		}
		else
		{
			func_1692(func_1691(1160113249), 0);
		}
	}
	func_1693();
	if (func_1694(iVar0))
	{
		_0x766315a564594401(func_968(0), iParam0, 0);
	}
	func_1688(iParam0, bParam3);
	if (bParam2)
	{
		func_1623(0, 0);
	}
}

void func_1661(int iParam0, var uParam1)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 29)
	{
		if (uParam1[iVar0] != 0)
		{
			if (!has_ped_got_weapon(Global_35, uParam1[iVar0], 0, false))
			{
				if (func_313(uParam1[iVar0]))
				{
					_give_weapon_to_ped_2(iParam0, uParam1[iVar0], 0, false, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
			}
			iVar1 = 0;
			get_current_ped_weapon(Global_35, &iVar1, false, iVar0, true);
			if (iVar1 != uParam1[iVar0])
			{
				set_current_ped_weapon(Global_35, uParam1[iVar0], true, iVar0, false, false);
			}
		}
		iVar0++;
	}
}

bool func_1662(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1663(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_1664(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1665(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_1666(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_1667(var uParam0, int iParam1, int iParam2)
{
	*Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_1668(var uParam0, int iParam1)
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
			func_1666(uParam0->f_1[iVar0], iVar0, iParam1);
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
		func_1667(uParam0->f_1[iVar0], iVar0, iParam1);
		iVar0++;
	}
}

void func_1669(int iParam0, int iParam1, int iParam2)
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

void func_1670(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

bool func_1671(int iParam0)
{
	if (!func_967(iParam0, 0))
	{
		return false;
	}
	if (func_1169(iParam0, -1066545920))
	{
		return true;
	}
	return false;
}

bool func_1672(int iParam0)
{
	if (!func_967(iParam0, 0))
	{
		return false;
	}
	if (func_1169(iParam0, -284267618))
	{
		return true;
	}
	return false;
}

bool func_1673(int iParam0)
{
	if (!func_967(iParam0, 0))
	{
		return false;
	}
	if (func_1169(iParam0, 363491182))
	{
		return true;
	}
	return false;
}

bool func_1674(int iParam0)
{
	if (!func_967(iParam0, 0))
	{
		return false;
	}
	if (func_1169(iParam0, 1406113494))
	{
		return true;
	}
	return false;
}

int func_1675(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1695(iParam0);
		case 1:
			return func_1696(iParam0);
		case 2:
			return func_1697(iParam0);
		case 3:
			return func_1698(iParam0);
	}
	return 0;
}

int func_1676(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1699(iParam0);
		case 1:
			return func_1700(iParam0);
		case 2:
			return func_1701(iParam0);
		case 3:
			return func_1702(iParam0);
		case 4:
			return func_1703(iParam0);
		case 5:
			return func_1704(iParam0);
		case 6:
			return func_1705(iParam0);
		case 7:
			return func_1706(iParam0);
		case 8:
			return func_1707(iParam0);
	}
	return 0;
}

struct<28> func_1677(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var28.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_968(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_1642(&Var28) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_1678(int iParam0, var uParam1, bool bParam2)
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
					func_1644(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_1644(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 28))
	{
		func_1644(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<17> func_1679(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_968(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_1642(&Var17) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_1680(int iParam0, var uParam1, bool bParam2)
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
					func_1644(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_1644(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 17))
	{
		func_1644(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_1681(int iParam0, int iParam1)
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

void func_1682(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
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

bool func_1683(var uParam0, int iParam1, int iParam2, int iParam3)
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

void func_1684(int iParam0, bool bParam1, bool bParam2)
{
	switch (func_962(iParam0))
	{
		case -2061583405:
			bVar0 = func_1708(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1708(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1708(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1708(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1708(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1708(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1693();
	}
	if (bParam1)
	{
		func_1623(0, 0);
	}
}

void func_1685(int iParam0)
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
	Var2 = { func_1482(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (func_1484(&Var2, &iVar0, &iVar1, 0))
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
		func_1408(iVar0);
	}
}

void func_1686(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_1709(iParam2, *uParam0);
	func_1710(uParam0->f_1[*uParam0], iParam1, -1, 1, 0);
	*uParam0++;
}

bool func_1687(int iParam0, int iParam1)
{
	Var0 = { func_796(iParam0, 0, 0) };
	Var5 = { func_800(iParam0, Var0, Var0.f_4, 0) };
	if (func_965(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return false;
	}
	_0x9a113c660aea3832(func_968(0), &Var5, iParam1);
	return true;
}

void func_1688(int iParam0, bool bParam1)
{
	Var0 = { func_796(iParam0, 0, 0) };
	Var5 = { func_800(iParam0, Var0, Var0.f_4, 0) };
	if (func_965(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	_0x65a5f70f4a292ebe(func_968(0), &Var5, bParam1);
}

bool func_1689(int iParam0)
{
	if (func_1() == -1)
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

int func_1690(int iParam0, var uParam1, int iParam2, bool bParam3)
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
	if (func_1711(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_1687(iParam0, 0))
	{
		return 0;
	}
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = iVar1;
	if (func_962(iParam0) != -999503751)
	{
		func_1686(&(Global_1946804->f_2657.f_26.f_26), iParam0, Global_1946804->f_2657.f_19);
	}
	Global_1946804->f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_1691(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_1418();
	}
	if (iParam0 == 1160113249)
	{
		return -763730846;
	}
	return -1535516064;
}

int func_1692(int iParam0, int iParam1)
{
	Var0 = { func_796(iParam0, 0, 0) };
	Var5 = { func_800(iParam0, Var0, Var0.f_4, 0) };
	if (func_965(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	_0x0349404a22736740(iParam1, func_968(0), &Var5);
	return 1;
}

void func_1693()
{
	if (func_1() == -1)
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

bool func_1694(int iParam0)
{
	return func_1713(func_1712(iParam0));
}

int func_1695(int iParam0)
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

int func_1696(int iParam0)
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

int func_1697(int iParam0)
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

int func_1698(int iParam0)
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

int func_1699(int iParam0)
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

int func_1700(int iParam0)
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

int func_1701(int iParam0)
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

int func_1702(int iParam0)
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

int func_1703(int iParam0)
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

int func_1704(int iParam0)
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

int func_1705(int iParam0)
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

int func_1706(int iParam0)
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

int func_1707(int iParam0)
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

int func_1708(int iParam0, var uParam1)
{
	iVar1 = iParam0;
	if (!func_1711(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_962(iParam0) != -999503751)
		{
			func_1714(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_962(iParam0) != -999503751)
	{
		func_1714(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1687(iParam0, 1);
	return 1;
}

void func_1709(int iParam0, var uParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_1710(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (_0x93ffd92f05ec32fd(uParam0->f_3.f_1))
	{
		func_1715(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_1326(func_1522(iParam1), 1);
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
		func_1716(uParam0);
	}
}

bool func_1711(int iParam0, int iParam1)
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

int func_1712(int iParam0)
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

bool func_1713(int iParam0)
{
	return (Global_1946804->f_2657.f_26.f_6 && iParam0) != 0;
}

void func_1714(var uParam0, int iParam1, int iParam2)
{
	iVar1 = func_1717(iParam1);
	func_1718(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_1719(&(uParam0->f_26), iVar1);
		if (func_1720(uParam0->f_26, &iVar0))
		{
			func_1721(iVar0, iVar1);
		}
	}
}

void func_1715(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_1722(&(uParam0->f_3));
}

void func_1716(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_1723(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

int func_1717(int iParam0)
{
	return &(Global_1946804->f_2657.f_26.f_7[iParam0]);
}

void func_1718(int iParam0, int iParam1)
{
	uVar0 = &Global_1946804->f_2657.f_26.f_7[iParam0];
	Global_1946804->f_2657.f_26.f_7[iParam0] = &Global_1946804->f_2657.f_26.f_7[iParam1];
	Global_1946804->f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_1719(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - 1);
	func_1715(uParam0->f_1[iParam1]);
	*uParam0->f_1[iParam1] = { *uParam0->f_1[*uParam0] };
}

bool func_1720(int iParam0, int iParam1)
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

void func_1721(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_1722(var uParam0)
{
	if (*uParam0 && _0x93ffd92f05ec32fd(uParam0->f_1))
	{
		_0x13e7320c762f0477(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_1723(var uParam0, var uParam1, var uParam2)
{
	iVar0 = func_1724(func_1418());
	if (*uParam0)
	{
		func_1722(uParam0);
	}
	uParam0->f_1 = _0xf6d9e1f3560cbf8e(iVar0, uParam1, 0, func_1() != -1, uParam2);
	*uParam0 = 1;
}

int func_1724(int iParam0)
{
	if (func_1() == -1)
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

