void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_15 = 1;
	iLocal_16 = 4;
	iLocal_17 = 4;
	iLocal_796 = 1;
	iLocal_804 = func_1(3, 0, 0);
	iLocal_872 = 1;
	Local_19.f_3 = func_2(&vScriptParam_0);
	Local_19.f_161 = func_3(vScriptParam_0.z, 2);
	Local_19.f_43 = func_4();
	iLocal_18 = func_5(89, 1, 0);
	Local_19.f_176 = 1;
	func_6(&Local_19, 1);
	func_7(&(Local_19.f_5));
	func_8(&(Local_19.f_5), 1);
	func_9(&(Local_19.f_5), 1);
	func_10(&(Local_19.f_5), 0);
	func_11(&(Local_19.f_5), 1);
	func_12(&(Local_19.f_5), 1);
	func_13(&(Local_19.f_5), 1);
	func_14(&(Local_19.f_5), 1);
	if (has_force_cleanup_occurred(523))
	{
		iLocal_798 = 1;
	}
	while (true)
	{
		func_16(bVar796, 2019, 0);
		if (bVar796)
		{
			wait(0);
		}
		else
		{
			switch (iLocal_216)
			{
				case 0:
					if (func_17())
					{
						iLocal_216 = 1;
					}
					break;
				case 1:
					if (func_18(&Local_19, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_19(&Local_19, &uLocal_802, &uLocal_801);
						func_20();
						iLocal_216 = 3;
					}
					if (Local_19.f_160)
					{
						func_15();
					}
					break;
				case 3:
					if (is_interior_ready(iVar747) && func_21())
					{
						func_22(0f, 0f, 0f, &Local_652, 0, 0, 0, -1, 0);
						if (does_entity_exist(Local_652[1]->f_8))
						{
							set_entity_visible(Local_652[1]->f_8, false);
						}
						if (does_entity_exist(Local_652[3]->f_8))
						{
							set_entity_visible(Local_652[3]->f_8, false);
						}
						if (does_entity_exist(Local_652[2]->f_8))
						{
							set_entity_visible(Local_652[2]->f_8, false);
						}
						if (does_entity_exist(Local_652[4]->f_8))
						{
							set_entity_visible(Local_652[4]->f_8, false);
						}
						if (does_entity_exist(Local_652[0]->f_8))
						{
							set_entity_visible(Local_652[0]->f_8, false);
						}
						if (does_entity_exist(Local_652[5]->f_8))
						{
							set_entity_visible(Local_652[5]->f_8, false);
						}
						func_23(0);
						func_24(0, 1, 0);
						func_23(1);
						func_24(1, 1, 0);
						func_25();
						iLocal_216 = 4;
					}
					break;
				case 4:
					if (!func_26(&Local_19, &iLocal_727, iLocal_18, 0, 1, 0, 1, 0))
					{
						func_15();
					}
					func_27();
					if (((!func_3(iVar287, 64) && iLocal_215 != 5) && iLocal_215 != 6) && (iLocal_215 != 10 || func_28(&uLocal_486) >= 6f))
					{
						if (!Local_19.f_46)
						{
							if (func_29())
							{
								if (func_3(iVar287, 4194304))
								{
									Local_19.f_5.f_10 = &iLocal_727[0];
								}
								if (func_3(iVar287, 64))
								{
									func_30(&(Local_19.f_5), &uLocal_290);
								}
								else
								{
									func_31();
									Local_19.f_46 = 1;
								}
							}
							if (iLocal_215 < 2)
							{
								if (func_32(&(iLocal_727[0]), Global_35, 1, 1) < 1f)
								{
									if (is_ped_running_ragdoll_task(&(iLocal_727[0])) || is_ped_ragdoll(&(iLocal_727[0])))
									{
										Local_19.f_46 = 1;
									}
								}
							}
							if (iLocal_215 < 2)
							{
								if (func_32(&(iLocal_727[1]), Global_35, 1, 1) < 1f)
								{
									if (is_ped_running_ragdoll_task(&(iLocal_727[1])) || is_ped_ragdoll(&(iLocal_727[1])))
									{
										Local_19.f_46 = 1;
									}
								}
							}
							if (Local_19.f_46)
							{
								Local_19.f_46 = 1;
								if (!is_player_control_on(get_player_index()))
								{
									clear_ped_tasks(Global_35, 1, 0);
									set_player_control(get_player_index(), true, 0, false);
								}
								if (is_ped_using_any_scenario(&(iLocal_727[0])))
								{
									_0x90703a8f75ee4abd(&(iLocal_727[0]), 1048576000);
								}
								if (is_ped_using_any_scenario(&(iLocal_727[1])))
								{
									_0x90703a8f75ee4abd(&(iLocal_727[1]), 1048576000);
								}
								func_33(&uLocal_731);
								if (iVar288 != 16384)
								{
									if (func_3(iVar287, 4194304))
									{
										func_34(0);
										func_36(iLocal_727[0], &Global_35, func_35(71), 0);
										_0xeeed8fafec331a70(&(iLocal_727[0]), Global_36, 2);
										_0xeeed8fafec331a70(&(iLocal_727[1]), Global_36, 2);
										iLocal_215 = 5;
									}
									else
									{
										_0xeeed8fafec331a70(&(iLocal_727[0]), Global_36, 2);
										_0xeeed8fafec331a70(&(iLocal_727[1]), Global_36, 3);
										func_34(0);
										if (_is_ped_hogtied(&(iLocal_727[0])) || _is_ped_lassoed(&(iLocal_727[0])))
										{
											func_36(iLocal_727[0], &Global_35, func_35(73), 0);
										}
										if (_is_ped_hogtied(&(iLocal_727[1])) || _is_ped_lassoed(&(iLocal_727[1])))
										{
											func_36(iLocal_727[1], &Global_35, func_35(77), 0);
										}
										if (func_3(iVar287, 16384))
										{
											if (Local_19.f_5.f_10 != &iLocal_727[0])
											{
											}
											else if (iVar288 != 8)
											{
												func_36(iLocal_727[0], &Global_35, func_35(72), 0);
											}
											else
											{
												func_36(iLocal_727[0], &Global_35, func_35(70), 0);
											}
										}
										if (func_3(iVar287, 16384))
										{
											if (Local_19.f_5.f_10 == &iLocal_727[1])
											{
												if (iVar288 != 8)
												{
													func_36(iLocal_727[1], &Global_35, func_35(76), 0);
												}
												else
												{
													func_36(iLocal_727[1], &Global_35, func_35(74), 0);
												}
											}
										}
										iLocal_215 = 5;
									}
								}
								else
								{
									func_34(0);
									_0xeeed8fafec331a70(&(iLocal_727[0]), Global_36, 3);
									_0xeeed8fafec331a70(&(iLocal_727[1]), Global_36, 3);
									iLocal_215 = 11;
								}
							}
						}
					}
					if (func_37(&Local_19, &iLocal_727, 0, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0))
					{
						Local_19.f_50 = 1;
						func_15();
					}
					if (func_38())
					{
						Local_19.f_50 = 1;
						func_15();
					}
					break;
			}
			wait(Local_19.f_158);
		}
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

bool func_3(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_4()
{
	return Global_1894899->f_2;
}

int func_5(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return (func_39(iParam0) % iParam1);
	}
	return (func_40(iParam0) % iParam1);
}

void func_6(var uParam0, bool bParam1)
{
	func_7(&(uParam0->f_5));
	if (uParam0->f_161)
	{
		func_41("BEAT_LAUNCHED", 4000, 0, 1, 0, 0, -1, -1, 0);
	}
	allow_sonar_blips(bParam1);
}

void func_7(var uParam0)
{
	func_9(uParam0, 0);
	func_42(uParam0, 0);
	func_43(uParam0, 1);
	func_14(uParam0, 1);
	func_44(uParam0, 0);
	func_8(uParam0, 1);
	func_45(uParam0, 1, 1, 1);
}

void func_8(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_46(iParam0, 256);
	}
	else
	{
		func_47(iParam0, 256);
	}
}

void func_9(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_47(&(uParam0->f_1), 16384);
	}
	else
	{
		func_46(&(uParam0->f_1), 16384);
	}
}

void func_10(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_47(&(uParam0->f_1), 1024);
	}
	else
	{
		func_46(&(uParam0->f_1), 1024);
	}
}

void func_11(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_47(&(uParam0->f_1), 8);
	}
	else
	{
		func_46(&(uParam0->f_1), 8);
	}
}

void func_12(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_46(iParam0, 32);
	}
	else
	{
		func_47(iParam0, 32);
	}
}

void func_13(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_46(iParam0, 8);
	}
	else
	{
		func_47(iParam0, 8);
	}
}

void func_14(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_46(iParam0, 16);
	}
	else
	{
		func_47(iParam0, 67108864);
		func_47(iParam0, 16);
	}
}

void func_15()
{
	if (iLocal_215 == 4)
	{
		func_48(&Local_385, &uLocal_291);
	}
	func_49(1);
	func_50(33, 0);
	if (is_ped_using_any_scenario(&(iLocal_727[0])))
	{
		clear_ped_tasks_immediately(&(iLocal_727[0]), false, true);
	}
	if (is_ped_using_any_scenario(&(iLocal_727[1])))
	{
		clear_ped_tasks_immediately(&(iLocal_727[1]), false, true);
	}
	func_51(&Local_19, &iLocal_727, &uLocal_731, 0, uVar800, uVar799, 0, 1, 0, 1);
	if (func_52(Local_476))
	{
		func_53(Local_476);
	}
	if (!is_player_control_on(get_player_index()))
	{
		clear_ped_tasks(Global_35, 1, 0);
		set_player_control(get_player_index(), true, 0, false);
	}
	func_54(&uLocal_496, 0);
	set_audio_flag("OpenWorldMusicOnMission", true);
	if (_0x91a5f9cbebb9d936(uVar745))
	{
		remove_scenario_blocking_area(uVar745, false);
	}
	if (iVar788 != 0)
	{
		remove_shocking_event(iVar788);
	}
	if (_is_popzone_valid(iVar746))
	{
		_delete_script_popzone(iVar746);
	}
	set_player_forced_aim(player_id(), false, 0, -1, false);
	if (is_valid_interior(iVar747))
	{
		unpin_interior(iVar747);
	}
	func_55(1);
	_0x20c5459379d75c1c(&(iLocal_727[1]), "");
	_0xa3c53cde922bc78b(&(iLocal_727[1]), "");
	_0x8af46e5159a5b620(&(iLocal_727[1]), 0);
	_0xc6366a585659d15c(get_player_index(), "");
	_0x98cd760de43b612e(get_player_index(), "");
	_0x8af46e5159a5b620(Global_35, 0);
	terminate_this_thread();
}

void func_16(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!func_56(bParam2) || is_screen_faded_out())
		{
			Call_Loc(iParam1);
		}
	}
}

bool func_17()
{
	switch (iLocal_214)
	{
		case 0:
			if (func_57(&Local_19))
			{
				func_58();
				iLocal_214 = 1;
			}
			break;
		case 1:
			if (!func_59(&Local_224))
			{
				return false;
			}
			if (!func_60(&Local_652))
			{
				return false;
			}
			if (!func_61(&uLocal_754))
			{
				return false;
			}
			return true;
	}
	return false;
}

bool func_18(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (bParam6 || func_62(*uParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *uParam1, &(uParam0->f_160), 1, iParam3, iParam4))
	{
		if (bParam6 || func_63(uParam0, *uParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				fVar0 = 7f;
				if (func_64(uParam0->f_3, 1))
				{
					fVar0 = 20f;
				}
				clear_area(uParam0->f_51, fVar0, 2097152);
			}
			if (iParam5 == 1)
			{
				func_65(uParam0, -1, 0, bParam7);
			}
			_0x9d16896f0dbe78a2(uParam0->f_51, 5f);
			if (bParam2)
			{
				uParam0->f_51.f_3 = func_66(uParam0->f_51);
			}
			return true;
		}
	}
	return false;
}

void func_19(var uParam0, var uParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*uParam1 = 11;
			*uParam2 = 0;
			break;
	}
}

void func_20()
{
	switch (iLocal_18)
	{
		case 0:
			iLocal_495 = 1;
			break;
	}
	switch (func_4())
	{
		case 105:
			iLocal_498 = 390157385;
			func_67();
			*Local_652[3] = { 1341.218f, -1377.62f, 79.48064f };
			func_68(&(Local_652[3]->f_11), 11);
			*Local_652[1] = { 1342.652f, -1376.325f, 80.48064f };
			func_68(&(Local_652[1]->f_11), 11);
			*Local_652[5] = { 1343.486f, -1375.246f, 80.48064f };
			func_68(&(Local_652[5]->f_11), 11);
			*Local_652[2] = { 1343.023f, -1373.844f, 79.48064f };
			func_68(&(Local_652[2]->f_11), 11);
			*Local_652[4] = { 1342.154f, -1372.628f, 79.48064f };
			func_68(&(Local_652[4]->f_11), 11);
			*Local_652[0] = { 1339.51f, -1374.471f, 79.48064f };
			func_68(&(Local_652[0]->f_11), 11);
			Var0 = { 1339.725f, -1374.543f, 80.4843f };
			Var0.f_3 = -90f;
			Local_224[0]->f_6 = { 1341.922f, -1374.872f, 79.4837f };
			Local_224[0]->f_9 = 81.33f;
			Local_224[1]->f_6 = { _get_object_offset_from_coords(Var0, Var0.f_3, -0.5684f, 2.38f, -1f) };
			Local_224[1]->f_9 = func_69((Var0.f_3 + -106.04f));
			Local_385.f_42 = { func_70(0) };
			Local_385.f_45 = { 1360.666f, -1388.479f, 78.6084f };
			StringCopy(&(Local_385.f_16), "REDB_START", 32);
			StringCopy(&(Local_385.f_20), "REDB_DRAW", 32);
			StringCopy(&(Local_385.f_28), "REDB_STOP", 32);
			vLocal_779 = { 1354.508f, -1382.335f, 79.539f };
			fLocal_785 = 261.7859f;
			vLocal_782 = { 1353.505f, -1382.656f, 79.53284f };
			fLocal_786 = -153.97f;
			iLocal_734 = _create_volume_aggregate_with_custom_name("volSaloon");
			_0x39816f6f94f385ad(iVar732, 1344.2f, -1375.426f, 80.765f, 0f, 0f, 79.8932f, 12.1303f, 17.526f, 4.8047f);
			_0x39816f6f94f385ad(iVar732, 1344.2f, -1375.426f, 84.9139f, 0f, 0f, 79.8932f, 12.1303f, 16.8467f, 3.764f);
			iLocal_746 = _create_volume_box_with_custom_name(1338.246f, -1374.335f, 80.81509f, 0f, 0f, -9.983499f, 5.115f, 4.137f, 3.652f, "volBartender");
			func_71(&uLocal_735, 1361.434f, -1384f, 79.2191f, 0f, 0f, -10.5124f, 5f, 22.1353f, 2.1688f, "volDuel");
			iLocal_736[4] = _create_volume_box_with_custom_name(1344.078f, -1375.219f, 80.62646f, 0f, 0f, -51.76701f, 2.75f, 2.75f, 2.308819f, "volChallenge[BACK]");
			iLocal_736[3] = _create_volume_box_with_custom_name(1341.694f, -1377.848f, 80.40992f, 0f, 0f, -51.767f, 4.169084f, 4.039036f, 2.308819f, "volChallenge[LEFT]");
			iLocal_736[6] = _create_volume_box_with_custom_name(1342.284f, -1372.076f, 80.40992f, 0f, 0f, -51.767f, 4.169084f, 4.039036f, 2.308819f, "volChallenge[RIGHT]");
			iLocal_736[5] = _create_volume_box_with_custom_name(1343.519f, -1373.62f, 80.40992f, 0f, 0f, -51.54488f, 1.494018f, 4.163698f, 2.308819f, "volChallenge[CHAL_ZONE_RIGHT45]");
			iLocal_736[2] = _create_volume_box_with_custom_name(1343.185f, -1376.627f, 80.40992f, 0f, 0f, 38.455f, 1.310623f, 4.163698f, 2.308819f, "volChallenge[CHAL_ZONE_LEFT45]");
			iLocal_736[0] = _create_volume_aggregate_with_custom_name("volChallenge");
			_0x6e0d3c3f828da773(&(iLocal_736[0]), &(iLocal_736[4]));
			_0x6e0d3c3f828da773(&(iLocal_736[0]), &(iLocal_736[3]));
			_0x6e0d3c3f828da773(&(iLocal_736[0]), &(iLocal_736[6]));
			iLocal_744 = _create_volume_aggregate_with_custom_name("volExclude");
			_0x39816f6f94f385ad(iVar742, 1339.468f, -1374.555f, 81.38598f, 0f, 0f, -9.947394f, 3.081772f, 4.137059f, 3.652488f);
			_0x39816f6f94f385ad(iVar742, 1341.007f, -1374.796f, 81.33398f, 0f, 0f, -9.638036f, 1f, 3.217011f, 3.628817f);
			_0x39816f6f94f385ad(iVar742, 1341.318f, -1374.901f, 81.30914f, 0f, 0f, 38.6829f, 1f, 1f, 3.796397f);
			iLocal_745 = _create_volume_aggregate_with_custom_name("volDoors");
			_0x39816f6f94f385ad(iVar743, 1354.162f, -1377.107f, 80.61854f, 0f, 0f, -9.499849f, 3.665382f, 2.427748f, 2.726485f);
			_0x39816f6f94f385ad(iVar743, 1334.621f, -1380.546f, 80.59122f, 0f, 0f, -7.89779f, 1.818892f, 1.289443f, 2.691259f);
			_0x39816f6f94f385ad(iVar743, 1330.142f, -1367.826f, 80.42966f, 0f, 0f, -99.08302f, 1.855522f, 1.851879f, 3.210238f);
			_0x39816f6f94f385ad(iVar743, 1335.427f, -1371.224f, 84.48379f, 0f, 0f, -7.453985f, 2.190183f, 1.994719f, 2.476272f);
			_0xb56d41a694e42e86(iVar743, 0, 262144, 0, -1, -1, 8);
			StringCopy(&(Local_224[0]->f_23), "1057_G_M_M_UniCriminals_01_WHITE_04", 64);
			Local_224[0]->f_4 = -1406986790;
			Local_224[0]->f_10 = 1;
			StringCopy(&(Local_224[1]->f_23), "1034_S_M_M_CoachTaxiDriver_01_WHITE_06", 64);
			Local_224[1]->f_4 = 788161705;
			Local_224[1]->f_10 = 1;
			iLocal_749 = get_interior_at_coords(1344.2f, -1375.426f, 80.765f);
			if (is_valid_interior(iVar747))
			{
				pin_interior_in_memory(iVar747);
			}
			break;
	}
	Local_19.f_173 = iVar732;
	Local_224[0] = 22;
	Local_224[1] = 4;
	func_72(&(Local_224[0]->f_22));
	func_72(&(Local_224[1]->f_22));
}

bool func_21()
{
	if (iLocal_213 >= 2)
	{
		return true;
	}
	if (!func_73(iLocal_213))
	{
		return false;
	}
	iLocal_727[iLocal_213] = func_74(Local_224[iLocal_213]->f_1, Local_224[iLocal_213], Local_224[iLocal_213]->f_6, Local_224[iLocal_213]->f_9, 1, 0, 1, 0, 1);
	if (func_75(&(iLocal_727[iLocal_213]), 0, 1))
	{
		remove_all_ped_weapons(&(iLocal_727[iLocal_213]), true, true);
		_give_weapon_to_ped_2(&(iLocal_727[iLocal_213]), func_76(268435456, 1056964608, 1065353216), 200, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
		if (!is_string_null_or_empty(&(Local_224[iLocal_213]->f_23)))
		{
			func_77(&(iLocal_727[iLocal_213]), &(Local_224[iLocal_213]->f_23), 0);
		}
		switch (iLocal_213)
		{
			case 0:
				func_78(&(iLocal_727[iLocal_213]), &Local_19, 0);
				func_80(&(iLocal_727[iLocal_213]), func_79(1072590268, 0, -1));
				set_ped_config_flag(&(iLocal_727[iLocal_213]), 6, true);
				_give_weapon_to_ped_2(&(iLocal_727[iLocal_213]), func_76(268435456, 1056964608, 1065353216), 200, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				uLocal_750[iLocal_213] = func_82(func_81(), Local_224[iLocal_213]->f_6, Local_224[iLocal_213]->f_9, 0, 0, 0);
				if (_does_scenario_point_exist(&(uLocal_750[iLocal_213])))
				{
					_task_use_scenario_point(&(iLocal_727[iLocal_213]), &(uLocal_750[iLocal_213]), func_83(), -1, false, true, 0, false, -1f, false);
				}
				else
				{
					task_use_nearest_scenario_to_coord_warp(&(iLocal_727[iLocal_213]), Local_224[iLocal_213]->f_6, 1.5f, -1, true, false, false, false);
				}
				set_ped_reset_flag(&(iLocal_727[iLocal_213]), 49, true);
				break;
			case 1:
				func_78(&(iLocal_727[iLocal_213]), &Local_19, 0);
				uLocal_753 = func_82(-545460140, Local_224[1]->f_6, Local_224[1]->f_9, 0, 0, 0);
				_give_weapon_to_ped_2(&(iLocal_727[iLocal_213]), func_76(268435456, 1056964608, 1065353216), 200, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				uLocal_750[iLocal_213] = func_82(func_84(), Local_224[iLocal_213]->f_6, Local_224[iLocal_213]->f_9, 0, 0, 0);
				if (_does_scenario_point_exist(&(uLocal_750[iLocal_213])))
				{
					_task_use_scenario_point(&(iLocal_727[iLocal_213]), &(uLocal_750[iLocal_213]), func_85(), -1, false, true, 0, false, -1f, false);
				}
				else
				{
					task_use_nearest_scenario_to_coord_warp(&(iLocal_727[iLocal_213]), Local_224[iLocal_213]->f_6, 1.5f, -1, true, false, false, false);
				}
				set_ped_reset_flag(&(iLocal_727[iLocal_213]), 49, true);
				break;
		}
		iLocal_213++;
	}
	return iLocal_213 >= 2;
}

int func_22(vector3 vParam0, var uParam3, float fParam4, bool bParam5, int iParam6, int iParam7, bool bParam8)
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
		else if ((*uParam3)[iVar0]->f_7 != 0 && !func_86((*uParam3)[iVar0]->f_11, 16))
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
					if (func_86((*uParam3)[iVar0]->f_11, 64))
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
					if (!func_86((*uParam3)[iVar0]->f_11, 8))
					{
						vVar5 = { _get_object_offset_from_coords(vParam0, fParam4, *(*uParam3)[iVar0]) };
					}
					else
					{
						vVar5 = { *(*uParam3)[iVar0] };
					}
					if (!func_86((*uParam3)[iVar0]->f_11, 128))
					{
						func_87(&vVar5, (*uParam3)[iVar0]->f_10);
					}
					if (func_86((*uParam3)[iVar0]->f_11, 64))
					{
						(*uParam3)[iVar0]->f_8 = create_object_no_offset((*uParam3)[iVar0]->f_7, vVar5, true, true, false, false);
					}
					else
					{
						(*uParam3)[iVar0]->f_8 = create_object((*uParam3)[iVar0]->f_7, vVar5, true, true, false, false, true);
					}
					if (func_88((*uParam3)[iVar0]->f_4))
					{
						vVar1 = { 0f, 0f, (*uParam3)[iVar0]->f_3 };
					}
					else
					{
						vVar1 = { (*uParam3)[iVar0]->f_4 };
					}
					if (func_86((*uParam3)[iVar0]->f_11, 4))
					{
						vVar1.f_2 = func_69((vVar1.z + fParam4));
					}
					set_entity_rotation((*uParam3)[iVar0]->f_8, vVar1, 2, true);
					if (!func_86((*uParam3)[iVar0]->f_11, 128))
					{
						if ((*uParam3)[iVar0]->f_10)
						{
							_0x9587913b9e772d29((*uParam3)[iVar0]->f_8, 0);
						}
					}
				}
				if (func_86((*uParam3)[iVar0]->f_11, 2))
				{
					freeze_entity_position((*uParam3)[iVar0]->f_8, true);
				}
				if (func_86((*uParam3)[iVar0]->f_11, 32))
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

void func_23(int iParam0)
{
	func_90((*Local_545[iParam0])[0], func_89(7), "", -163964935, 0, 0, 0, 1, 0);
	func_90((*Local_545[iParam0])[1], func_89(10), "", 648122183, 0, 0, 0, 1, 0);
	func_90((*Local_545[iParam0])[2], func_89(12), "", -1616532217, 0, 0, 0, 1, 0);
}

void func_24(int iParam0, bool bParam1, bool bParam2)
{
	func_91(Local_502[iParam0], 0);
	if (bParam2)
	{
		func_92(iParam0, 0);
	}
	if (bParam1)
	{
		iLocal_650 = -1;
		iLocal_651 = -1;
	}
}

void func_25()
{
	iLocal_748 = _create_popzone_from_volume(iVar732);
	if (_is_popzone_valid(iVar746))
	{
		set_popzone_population_set(iVar746, iVar496);
		_0x7e6bc0b94f5928f0(iVar746, 20, 50);
		_0x0f1861101c9a9944(iVar746, true);
		_0x08892122769770d5(iVar746, true);
		_0x578e2fa64e847c60(iVar746, 0);
	}
}

bool func_26(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		func_93(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	func_94(uParam0, iParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !uParam0->f_5 & 16384 != 0)
		{
			if (uParam0->f_5.f_1 & 256 != 0)
			{
				func_95(&(uParam0->f_5));
			}
			func_46(&(uParam0->f_5), 16384);
		}
	}
	if (!uParam0->f_48 && !func_96(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_97(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_98(&(uParam0->f_121));
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
					func_99(uParam0, uParam0->f_193, 2f);
				}
			}
			break;
		case 2:
			if (!func_100(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		case 3:
			break;
	}
	if (func_64(uParam0->f_3, 128))
	{
		if ((does_entity_exist(iParam1[0]) && !is_ped_injured(iParam1[0])) && uParam0->f_3 != 49)
		{
			if (!_0xf6a8a652a6b186cd(_0xf6f5447d418daa82(iParam1[0])))
			{
				func_101(uParam0, iParam1[0]);
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

void func_27()
{
	if (!func_3(iVar287, 8388608))
	{
		if (func_102(Global_35, iVar744, 1, 0))
		{
			func_46(&uLocal_289, 8388608);
			func_55(1);
		}
	}
	else if (!func_3(iVar287, 4194304))
	{
		if (!func_102(Global_35, iVar744, 1, 0))
		{
			func_47(&uLocal_289, 8388608);
			func_55(0);
		}
	}
}

float func_28(var uParam0)
{
	if (!func_103(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_104(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_105() - uParam0->f_1);
}

int func_29()
{
	if (func_106())
	{
		return 1;
	}
	else if (func_3(iVar287, 16777216) && !func_3(iVar287, 2))
	{
		return func_107(&(iLocal_727[1]), 0, &(Local_19.f_5), &uLocal_290, 0, 0);
	}
	else
	{
		return func_108(&iLocal_727, &(Local_19.f_5), &uLocal_290, &uLocal_789, 0, 1, 2);
	}
	return 0;
}

void func_30(int iParam0, var uParam1)
{
	if (iParam0->f_16 != 0 || *uParam1 != 0)
	{
		Global_1935630->f_30 = 0;
		Global_1935630->f_31 = 0;
		Global_1935630->f_25 = 0;
		Global_1935630->f_39 = 0;
		iParam0->f_8 = func_109();
		_0xeacebaae0a33fb3f(player_id());
	}
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	iParam0->f_5 = 0;
	iParam0->f_10 = 0;
	func_110(iParam0, 0);
	*uParam1 = 0;
	iParam0->f_16 = 0;
}

void func_31()
{
	_uilog_clear_cached_objective();
}

float func_32(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_33(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_111((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_34(int iParam0)
{
	func_112(&uLocal_0);
	func_113(1, iParam0, 0);
	_0xdd1232b332cbb9e7(3, 1, 0);
	func_114();
}

char* func_35(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RE_DUELB_RHD_V1_DB_LN3";
		case 1:
			return "RE_DUELB_RHD_V1_DB_LN4";
		case 2:
			return "RE_DUELB_RHD_V1_DB_LN5";
		case 3:
			return "RE_DUELB_RHD_V1_DB_LN6";
		case 4:
			return "RE_DUELB_RHD_V1_DB_LN7";
		case 5:
			return "RE_DUELB_RHD_V1_DB_LN8";
		case 6:
			return "RE_DUELB_RHD_V1_DB_LNRIGHT";
		case 7:
			return "RE_DUELB_RHD_V1_DB_LN9";
		case 8:
			return "RE_DUELB_RHD_V1_DB_LN9B";
		case 9:
			return "RE_DUELB_RHD_V1_DB_LN10";
		case 10:
			return "RE_DUELB_RHD_V1_DB_LN11";
		case 11:
			return "RE_DUELB_RHD_V1_DB_LN11B";
		case 12:
			return "RE_DUELB_RHD_V1_DB_APROCH";
		case 13:
			return "RE_DUELB_RHD_V1_DB_APROCH_SCK";
		case 14:
			return "RE_DUELB_RHD_V1_DB_APROCH_SHORT";
		case 15:
			return "RE_DUELB_RHD_V1_INTRO_POS";
		case 16:
			return "RE_DUELB_RHD_V1_INTRO_POS_SICK";
		case 17:
			return "RE_DUELB_RHD_V1_INTRO_NEG";
		case 18:
			return "RE_DUELB_RHD_V1_INTRO_NEG_SICK";
		case 19:
			return "RE_DUELB_RHD_V1_DB_CALL";
		case 20:
			return "RE_DUELB_RHD_V1_DB_CALL_SICK";
		case 21:
			return "RE_DUELB_RHD_V1_DB_CALLNO";
		case 22:
			return "RE_DUELB_RHD_V1_DB_CALLNO_SICK";
		case 23:
			return "RE_DUELB_RHD_V1_DB_DECLINE";
		case 24:
			return "RE_DUELB_RHD_V1_DB_CALL_A";
		case 25:
			return "RE_DUELB_RHD_V1_DB_CALL_B";
		case 26:
			return "RE_DUELB_RHD_V1_DB_CALL_B2";
		case 27:
			return "RE_DUELB_RHD_V1_DB_CALL_C";
		case 28:
			return "RE_DUELB_RHD_V1_DB_CALL_D";
		case 29:
			return "RE_DUELB_RHD_V1_PLR_GRT1";
		case 30:
			return "RE_DUELB_RHD_V1_PLR_GRT1_SICK";
		case 31:
			return "RE_DUELB_RHD_V1_PLR_ANT1";
		case 32:
			return "RE_DUELB_RHD_V1_PLR_ANT1_SICK";
		case 33:
			return "RE_DUELB_RHD_V1_PLR_ANT1_SICK_B";
		case 34:
			return "RE_DUELB_RHD_V1_LIST_GRT1";
		case 35:
			return "RE_DUELB_RHD_V1_LIST_ANT1";
		case 36:
			return "RE_DUELB_RHD_V1_TO_THE_DUEL_POS";
		case 37:
			return "RE_DUELB_RHD_V1_TO_THE_DUEL_POS_SICK";
		case 38:
			return "RE_DUELB_RHD_V1_TO_THE_DUEL_NEG";
		case 39:
			return "RE_DUELB_RHD_V1_TO_THE_DUEL_NEG_SICK";
		case 40:
			return "RE_DUELB_RHD_V1_DB_TAUNT";
		case 41:
			return "RE_DUELB_RHD_V1_DB_LIST_TAUNT";
		case 42:
			return "RE_DUELB_RHD_V1_DB_WATCH";
		case 43:
			return "RE_DUELB_RHD_V1_DB_BEGIN";
		case 44:
			return "RE_DUELB_RHD_V1_DB_LREACT_A";
		case 45:
			return "RE_DUELB_RHD_V1_DB_LREACT_B";
		case 46:
			return "RE_DUELB_RHD_V1_DB_LREACT_C";
		case 47:
			return "RE_DUELB_RHD_V1_DB_KREACT_A";
		case 48:
			return "RE_DUELB_RHD_V1_DB_KREACT_B";
		case 49:
			return "RE_DUELB_RHD_V1_DB_KREACT_C";
		case 50:
			return "RE_DUELB_RHD_V1_PLR_GRT2";
		case 51:
			return "RE_DUELB_RHD_V1_PLR_GRT2_SICK";
		case 52:
			return "RE_DUELB_RHD_V1_PLR_ANT2";
		case 53:
			return "RE_DUELB_RHD_V1_PLR_ANT2 _SICK";
		case 54:
			return "RE_DUELB_RHD_V1_LIST_GRT2";
		case 55:
			return "RE_DUELB_RHD_V1_LIST_GRT2_DEAD";
		case 56:
			return "RE_DUELB_RHD_V1_LIST_ANT2";
		case 57:
			return "RE_DUELB_RHD_V1_LIST_ANT2_DEAD";
		case 68:
			return "RE_DUELB_RHD_V1_PLYFINAL_DISARM";
		case 69:
			return "RE_DUELB_RHD_V1_PLYFINAL_KILL";
		case 58:
			return "RE_DUELB_RHD_V1_LIST_POST ";
		case 59:
			return "RE_DUELB_RHD_V1_PLR_QUIT";
		case 60:
			return "RE_DUELB_RHD_V1_POST_DUEL_ANT_A";
		case 61:
			return "RE_DUELB_RHD_V1_POST_DUEL_ANT_B";
		case 62:
			return "RE_DUELB_RHD_V1_POST_DUEL_ANT_A_SICK";
		case 63:
			return "RE_DUELB_RHD_V1_POST_DUEL_ANT_B_SICK";
		case 64:
			return "RE_DUELB_RHD_V1_DB_COWARD";
		case 65:
			return "RE_DUELB_RHD_V1_DB_COWARD_SCK";
		case 66:
			return "RE_DUELB_RHD_V1_DB_RUNOFF";
		case 67:
			return "RE_DUELB_RHD_V1_DB_RUNOFF_B";
		case 70:
			return "RE_DUELB_RHD_V1_DB_AGGRO_GUN";
		case 71:
			return "RE_DUELB_RHD_V1_DB_AGGRO_REG";
		case 72:
			return "RE_DUELB_RHD_V1_DB_AGGRO";
		case 73:
			return "RE_DUELB_RHD_V1_DB_AGGRO_HOGT";
		case 74:
			return "RE_DUELB_RHD_V1_DB_AGGRO_GUN";
		case 75:
			return "RE_DUELB_RHD_V1_DB_AGGRO_REG";
		case 76:
			return "RE_DUELB_RHD_V1_DB_AGGRO";
		case 77:
			return "RE_DUELB_RHD_V1_DB_AGGRO_HOGT";
		default:
			break;
	}
	return "";
}

void func_36(var uParam0, var uParam1, char* sParam2, int iParam3)
{
	if (iParam3 == 0)
	{
		func_115(*uParam0, *uParam1, sParam2, 0, -1082130432, 0, 0, 0, 1, 1, 1, -417894478, 1, 1, 0, 0);
	}
	else
	{
		func_115(*uParam0, *uParam1, sParam2, 0, -1082130432, 0, 0, 0, 1, 1, 1, -417894478, 1, 1, 0, 0);
	}
}

bool func_37(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, int iParam10, int iParam11, int iParam12)
{
	fVar0 = 0f;
	if (uParam0->f_1 >= 4)
	{
		if (bParam6)
		{
			if (func_116())
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
			else if (func_117(uParam0->f_3))
			{
				fVar0 = 250f;
			}
			else if (func_64(uParam0->f_3, 131072))
			{
				fVar0 = 70f;
				fVar0 = (fVar0 + 10f);
			}
			else if (func_64(uParam0->f_3, 1) && iParam12 == 0)
			{
				fVar0 = 215f;
				fVar0 = (fVar0 + 20f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 80f);
				}
			}
			else if (func_64(uParam0->f_3, 2) || iParam12 == 1)
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
			if (uParam0->f_188 < *iParam1)
			{
				if (does_entity_exist(iParam1[uParam0->f_188]))
				{
					if (Global_1935630->f_40 != iParam1[uParam0->f_188])
					{
						if ((bParam3 && !is_entity_dead(iParam1[uParam0->f_188])) || !bParam3)
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
				if (func_118(Global_36, uParam0->f_51) > fVar0)
				{
					return true;
				}
			}
			else
			{
				vVar1 = { fParam9, iParam10, iParam11 };
				if (func_118(Global_36, vVar1) > fVar0)
				{
					return true;
				}
			}
		}
	}
	if (bParam3)
	{
		if (uParam0->f_191 < *iParam1)
		{
			if (!is_entity_dead(iParam1[uParam0->f_191]))
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

bool func_38()
{
	func_119();
	func_120();
	func_121();
	iLocal_725 = 79;
	iLocal_726 = func_122(iVar723);
	if (iLocal_215 >= 1)
	{
		if (iLocal_215 < 11)
		{
			if (!func_123(Global_35, Local_385.f_42, 55f, 1, 1))
			{
				func_15();
			}
		}
	}
	func_124();
	func_125(0, &iLocal_16);
	func_125(1, &iLocal_17);
	func_126();
	if (is_ped_on_mount(Global_35))
	{
		iLocal_730 = get_mount(Global_35);
	}
	func_127();
	if ((iLocal_215 < 4 || iLocal_215 == 8) || iLocal_215 == 3)
	{
		iVar1 = func_128();
		func_129(0, iVar1, &uLocal_799, &iLocal_16, 1024, 3);
		func_129(1, iVar1, &uLocal_800, &iLocal_17, 2048, 2);
	}
	if (!is_entity_dead(&(iLocal_727[0])))
	{
		if (has_anim_event_fired(&(iLocal_727[0]), -878670098))
		{
			func_130(Local_545[0]);
			func_130(Local_545[1]);
		}
	}
	switch (iLocal_215)
	{
		case 0:
			func_131();
			if (func_102(Global_35, iVar732, 1, 0) || func_102(Global_35, iVar743, 1, 0))
			{
				iLocal_499 = -947520689;
				iLocal_500 = 746733444;
				func_55(0);
				func_50(33, 1);
				func_132(0);
				func_132(1);
				func_24(0, 1, 0);
				func_24(1, 1, 0);
				func_133(1);
			}
			break;
		case 1:
			if (func_134())
			{
			}
			break;
		case 2:
			func_135();
			func_137(iLocal_727[0], func_136(), 4f);
			func_137(iLocal_727[1], func_136(), 4f);
			func_138();
			if (!func_3(iLocal_14, 8388608))
			{
				if (func_139(&(iLocal_727[1]), 1, 1) < 2f)
				{
					func_36(iLocal_727[1], &Global_35, func_35(41), 0);
					func_46(&iLocal_14, 8388608);
				}
			}
			if (func_75(&(iLocal_727[1]), 0, 1))
			{
				if (!func_3(iVar287, 67108864))
				{
					if (func_140(&(iLocal_727[1]), vLocal_779, 1) < 1.5f)
					{
						_0x923583741dc87bce(&(iLocal_727[1]), "Default");
						_0x89f5e7adecccb49c(&(iLocal_727[1]), "Scared");
						func_46(&uLocal_289, 67108864);
					}
				}
				else if (func_3(iLocal_14, 8388608))
				{
					switch (iVar786)
					{
						case 0:
							if (func_141(3f, 1, 0, 0))
							{
								func_36(iLocal_727[1], &Global_35, func_35(42), 0);
								func_142(249295937, &(iLocal_727[1]), 1);
								iLocal_788 = iVar786 + 1;
							}
							break;
						case 1:
							if (func_141(1f, 1, 0, 0))
							{
								func_36(iLocal_727[1], &Global_35, func_35(42), 0);
								func_142(249295937, &(iLocal_727[1]), 1);
								iLocal_788 = iVar786 + 1;
							}
							break;
						case 2:
							if (func_141(3f, 1, 0, 0))
							{
								func_36(iLocal_727[1], &Global_35, func_35(42), 0);
								func_142(249295937, &(iLocal_727[1]), 1);
								iLocal_788 = iVar786 + 1;
							}
							break;
					}
				}
			}
			if (func_75(&(iLocal_727[0]), 0, 1))
			{
				if (get_sequence_progress(&(iLocal_727[0])) >= 1)
				{
					switch (iVar785)
					{
						case 0:
							if (func_141(3f, 1, 0, 0))
							{
								func_36(iLocal_727[0], &Global_35, func_35(40), 0);
								func_142(249295937, &(iLocal_727[0]), 1);
								iLocal_787 = iVar785 + 1;
							}
							break;
						case 1:
							if (func_141(2f, 1, 0, 0))
							{
								func_36(iLocal_727[0], &Global_35, func_35(40), 0);
								func_142(249295937, &(iLocal_727[0]), 1);
								iLocal_787 = iVar785 + 1;
							}
							break;
						case 2:
							if (func_141(3f, 1, 0, 0))
							{
								func_36(iLocal_727[0], &Global_35, func_35(40), 0);
								func_142(249295937, &(iLocal_727[0]), 1);
								iLocal_787 = iVar785 + 1;
							}
							break;
					}
				}
				if (!func_103(&uLocal_483))
				{
					func_143(&uLocal_483);
				}
				if ((func_28(&uLocal_483) >= 60f || func_139(&(iLocal_727[0]), 1, 1) >= 30f) || (iVar649 == 0 && iVar648 == 1))
				{
					func_112(&uLocal_483);
					func_34(0);
					if ((iVar649 == 0 && iVar648 == 1) || (func_28(&uLocal_483) >= 60f && func_139(&(iLocal_727[0]), 1, 1) < 5f))
					{
						clear_sequence_task(&iVar2);
						open_sequence_task(&iVar2);
						func_144(0, Global_35, -1);
						close_sequence_task(iVar2);
						_task_perform_sequence_2(&(iLocal_727[0]), iVar2, 0.3f, 0.3f);
						clear_sequence_task(&iVar2);
						open_sequence_task(&iVar2);
						func_144(0, Global_35, -1);
						close_sequence_task(iVar2);
						_task_perform_sequence_2(&(iLocal_727[1]), iVar2, 0.7f, 0.7f);
						func_145(Global_35, &(iLocal_727[0]), func_35(59), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					func_24(0, 1, 0);
					func_46(&uLocal_289, 512);
					func_33(&uLocal_731);
					func_53(Local_476);
					func_133(8);
				}
				if (func_146())
				{
					add_shocking_event_for_entity(748896394, &(iLocal_727[0]), -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
					add_shocking_event_for_entity(748896394, Global_35, -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
					func_31();
					func_46(&uLocal_289, 64);
					func_24(0, 1, 0);
					Local_385 = Global_35;
					Local_385.f_1 = &iLocal_727[0];
					Local_385.f_86 = iVar733;
					func_147();
					func_148(iVar733);
					func_53(Local_476);
					func_49(1);
					func_50(33, 0);
					func_149(&Local_385, &uLocal_291);
					func_46(&uLocal_289, 16777216);
					func_47(&uLocal_289, 1073741824);
					func_47(&uLocal_289, -2147483648);
					disable_control_action(2, -209515122, false);
					func_133(4);
				}
			}
			else
			{
				func_24(0, 1, 0);
				func_133(11);
			}
			break;
		case 4:
			func_150(iLocal_727[0], 0, 0, 1, 0, 0, 0, 1);
			func_150(iLocal_727[1], 0, 0, 1, 0, 0, 0, 1);
			if (func_149(&Local_385, &uLocal_291))
			{
				func_24(1, 1, 0);
				func_151(1);
				iLocal_499 = -578377130;
				iLocal_500 = -217808743;
				_0xd2f0fe8805d91647(&(iLocal_727[0]), 1598480633);
				_0xb6f4825153920582();
				if (func_75(&(iLocal_727[0]), 0, 1))
				{
					func_46(&uLocal_289, 2);
					clear_entity_last_damage_entity(&(iLocal_727[0]));
					clear_ped_tasks(&(iLocal_727[0]), 1, 0);
					open_sequence_task(&iVar0);
					task_follow_nav_mesh_to_coord(0, func_152(iVar495, 0), 2f, -1, 0.25f, 1, 40000f);
					task_follow_nav_mesh_to_coord(0, func_152(iVar495, 1), 2f, -1, 0.25f, 1, 40000f);
					_task_smart_flee_style_ped(0, Global_35, 2, 16640, -1082130432, -1, 0);
					func_153(&(iLocal_727[0]), &iVar0, 0, 0, 1, 1);
					func_34(0);
					func_36(&Global_35, iLocal_727[0], func_35(68), 0);
					func_36(iLocal_727[0], &Global_35, func_35(66), 0);
					func_142(249295937, &(iLocal_727[0]), 1);
				}
				else
				{
					func_36(&Global_35, iLocal_727[0], func_35(69), 0);
				}
				set_audio_flag("OpenWorldMusicOnMission", true);
				Local_19.f_44 = 1;
				if (func_3(iVar287, 64))
				{
					if (func_3(iVar287, 2))
					{
						func_154(11, 0, 0, 0, Local_19.f_5.f_10, 0, 1065353216, 0);
					}
					else
					{
						if (func_155())
						{
							if (func_156(0))
							{
								func_154(1, 0, 0, 0, Local_19.f_5.f_10, 0, 1065353216, 0);
							}
						}
						if (func_157())
						{
							func_154(1, 0, 0, 0, Local_19.f_5.f_10, 0, 1065353216, 0);
						}
					}
				}
				enable_control_action(2, -209515122, true);
				open_sequence_task(&iVar0);
				task_react(0, Global_35, 0f, 0f, 0f, "DEFAULT_SHOCKED", 3f, 15f, 4);
				task_turn_ped_to_face_entity(0, Global_35, -1, -1f, -1f, -1082130432);
				func_153(&(iLocal_727[1]), &iVar0, 0, 0, 1, 1);
				func_133(10);
			}
			else if (!func_3(iVar287, 32))
			{
				if (func_141(-4f, 1, 0, 0))
				{
					func_36(iLocal_727[1], iLocal_727[0], func_35(43), 0);
					func_46(&uLocal_289, 32);
				}
			}
			break;
		case 8:
			func_49(1);
			if (func_141(-3f, 1, 0, 0))
			{
				set_player_control(get_player_index(), true, 0, false);
				func_33(&uLocal_731);
				func_53(Local_476);
				func_158((*Local_545[0])[0], 0, 0);
				func_158((*Local_545[0])[1], 0, 0);
				func_158((*Local_545[0])[2], 0, 0);
				func_159((*Local_545[0])[0], "RE_INTER_POS");
				func_159((*Local_545[0])[1], "RE_INTER_ANTAGONIZE");
				func_159((*Local_545[0])[2], "INTERACT_ROB");
				func_158((*Local_545[1])[0], 0, 0);
				func_158((*Local_545[1])[1], 0, 0);
				func_158((*Local_545[1])[2], 0, 0);
				func_159((*Local_545[1])[0], "RE_INTER_POS");
				func_159((*Local_545[1])[1], "RE_INTER_ANTAGONIZE");
				func_159((*Local_545[1])[2], "INTERACT_ROB");
				if (func_156(0))
				{
					func_36(iLocal_727[0], &Global_35, func_35(65), 0);
				}
				else
				{
					func_36(iLocal_727[0], &Global_35, func_35(64), 0);
				}
				func_142(249295937, &(iLocal_727[0]), 1);
				if (!is_ped_using_any_scenario(&(iLocal_727[0])))
				{
					open_sequence_task(&iVar3);
					task_follow_nav_mesh_to_coord(0, 1341.302f, -1378.364f, 83.28135f, 1f, -1, 0.25f, 131072, 315f);
					_task_start_scenario_in_place(0, -1122379099, -1, true, 0, -1f, false);
					func_153(&(iLocal_727[0]), &iVar3, 0, 0, 1, 1);
				}
				if (!is_ped_using_any_scenario(&(iLocal_727[1])))
				{
					open_sequence_task(&iVar3);
					task_follow_nav_mesh_to_coord(0, 1338.938f, -1374.628f, 83.28929f, 1f, -1, 0.25f, 131072, 352f);
					_task_start_scenario_in_place(0, -1122379099, -1, true, 0, -1f, false);
					func_153(&(iLocal_727[1]), &iVar3, 0, 0, 1, 1);
				}
				func_133(9);
			}
			break;
		case 5:
			enable_control_action(2, -209515122, true);
			iVar4 = 0;
			if (func_3(iVar287, 16777216))
			{
				iVar4 = 16640;
			}
			if (func_75(&(iLocal_727[0]), 0, 1))
			{
				if (is_ped_using_any_scenario(&(iLocal_727[0])))
				{
					_0xeeed8fafec331a70(&(iLocal_727[0]), Global_36, 3);
				}
				clear_sequence_task(&iVar0);
				open_sequence_task(&iVar0);
				_task_smart_flee_style_ped(0, Global_35, 3, iVar4, -1082130432, -1, 0);
				func_153(&(iLocal_727[0]), &iVar0, 0.1f, 0.1f, 1, 1);
			}
			if (func_75(&(iLocal_727[1]), 0, 1))
			{
				if (is_ped_using_any_scenario(&(iLocal_727[1])))
				{
					_0xeeed8fafec331a70(&(iLocal_727[1]), Global_36, 3);
				}
				_task_smart_flee_style_ped(&(iLocal_727[1]), Global_35, 3, iVar4, -1082130432, -1, 0);
			}
			func_53(Local_476);
			func_133(11);
			break;
		case 6:
			if (!func_75(&(iLocal_727[0]), 0, 1))
			{
				if (!func_75(&(iLocal_727[1]), 0, 1))
				{
					func_133(11);
				}
			}
			break;
		case 10:
			func_137(iLocal_727[1], func_136(), 4f);
			func_160();
			if (!func_103(&uLocal_486))
			{
				func_143(&uLocal_486);
			}
			if (bVar789 == 0)
			{
				if (func_3(iVar287, 16777216) && func_3(iVar287, 2))
				{
					if (func_141(-3f, 1, 0, 0))
					{
						iLocal_791 = 1;
						if (func_156(0))
						{
							func_145(Global_35, &(iLocal_727[0]), func_35(62), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						else
						{
							func_145(Global_35, &(iLocal_727[0]), func_35(60), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
					}
				}
			}
			if (bVar790 == 0 && bVar789)
			{
				if (func_3(iVar287, 16777216) && func_3(iVar287, 2))
				{
					if (func_141(2f, 1, Global_35, 1))
					{
						iLocal_792 = 1;
						if (func_156(0))
						{
							func_145(Global_35, &(iLocal_727[0]), func_35(63), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						else
						{
							func_145(Global_35, &(iLocal_727[0]), func_35(61), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
					}
				}
			}
			if (func_3(iVar287, 64))
			{
				_0xb6f4825153920582();
				if (func_28(&uLocal_486) >= 1f)
				{
					func_47(&uLocal_289, 64);
				}
			}
			if (((func_28(&uLocal_486) >= 2f && bVar789) && bVar790) && func_141(-2f, 1, 0, 0))
			{
				open_sequence_task(&iVar0);
				task_play_upper_anim_facing_entity(0, &(Local_217[2]), Local_217[2]->f_1, Global_35, 12899, 8f, -8f, 0, 0f, false, false, -1f, 0, 0, -1f);
				task_follow_nav_mesh_to_coord(0, Local_224[1]->f_6, 1f, -1, 0.25f, 0, 40000f);
				_task_use_nearest_scenario_to_coord(0, Local_224[1]->f_6, 4f, 0, false, false, false, false);
				func_153(&(iLocal_727[1]), &iVar0, 0, 0, 1, 1);
				Local_19.f_50 = 1;
				if (iVar791 == 0)
				{
					if (func_141(0f, 1, &(iLocal_727[0]), 0))
					{
						func_36(iLocal_727[0], &Global_35, func_35(67), 1);
						iLocal_793 = 1;
					}
				}
				func_112(&uLocal_486);
				func_133(11);
			}
			if (is_entity_dead(&(iLocal_727[0])) && func_28(&uLocal_486) >= 2f)
			{
				open_sequence_task(&iVar0);
				task_play_upper_anim_facing_entity(0, &(Local_217[2]), Local_217[2]->f_1, Global_35, 12899, 8f, -8f, 0, 0f, false, false, -1f, 0, 0, -1f);
				task_follow_nav_mesh_to_coord(0, Local_224[1]->f_6, 1f, -1, 0.25f, 0, 40000f);
				_task_use_nearest_scenario_to_coord(0, Local_224[1]->f_6, 4f, 0, false, false, false, false);
				func_153(&(iLocal_727[1]), &iVar0, 0, 0, 1, 1);
				Local_19.f_50 = 1;
				func_112(&uLocal_486);
				func_133(11);
			}
			break;
		case 11:
			func_137(iLocal_727[1], func_136(), 4f);
			func_160();
			func_49(1);
			if ((!func_75(&(iLocal_727[0]), 0, 1) || func_139(&(iLocal_727[0]), 1, 1) > 55f) && (!func_75(&(iLocal_727[1]), 0, 1) || func_139(&(iLocal_727[1]), 1, 1) > 55f))
			{
				return true;
			}
			break;
	}
	return false;
}

int func_39(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_1;
}

int func_40(int iParam0)
{
	return &(Global_17504.f_42[iParam0]);
}

var func_41(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	if (bParam2)
	{
		_0xdd1232b332cbb9e7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_161(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_162(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		_uilog_set_cached_objective(sVar0);
	}
	return func_161(sVar0, iParam1, 0, 0, 1, 1);
}

void func_42(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_47(&(uParam0->f_1), 2048);
	}
	else
	{
		func_46(&(uParam0->f_1), 2048);
	}
}

void func_43(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_47(&(uParam0->f_1), 256);
	}
	else
	{
		func_46(&(uParam0->f_1), 256);
	}
}

void func_44(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_47(&(uParam0->f_1), 128);
	}
	else
	{
		func_46(&(uParam0->f_1), 128);
	}
}

void func_45(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_46(iParam0, 268435456);
	}
	else
	{
		func_47(iParam0, 268435456);
	}
	if (!bParam2)
	{
		func_46(iParam0, 1073741824);
	}
	else
	{
		func_47(iParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_46(iParam0, 536870912);
	}
	else
	{
		func_47(iParam0, 536870912);
	}
}

void func_46(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_47(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_48(var uParam0, var uParam1)
{
	if (!func_3(uParam0->f_88, 1024))
	{
		func_163(uParam0, uParam1);
	}
	func_164();
	set_time_scale(1f);
	func_166(func_165(uParam1, uParam0), 1);
	func_31();
	func_167();
	func_168();
	func_112(&(uParam1->f_26));
	func_112(&(uParam1->f_29));
	func_112(&(uParam1->f_32));
	func_112(&(uParam1->f_35));
	func_112(&(uParam1->f_38));
	func_112(&(uParam1->f_41));
	if (func_169(uParam0->f_1, 0))
	{
		if (func_170(uParam0, 65536))
		{
			set_ped_config_flag(uParam0->f_1, 16, false);
			set_ped_can_ragdoll(uParam0->f_1, true);
			set_ped_config_flag(uParam0->f_1, 263, false);
			set_ragdoll_blocking_flags(uParam0->f_1, 0);
		}
		if (func_170(uParam0, 1024))
		{
			clear_ragdoll_blocking_flags(uParam0->f_1, 1);
		}
		if (func_170(uParam0, 128) || func_170(uParam0, 4096))
		{
			set_ped_using_action_mode(uParam0->f_1, false, -1, 0);
		}
		set_ped_config_flag(uParam0->f_1, 371, false);
		set_ped_config_flag(uParam0->f_1, 392, false);
		set_entity_is_target_priority(uParam0->f_1, false, 0f);
	}
	_0x3c4ae8506638c7e2(get_player_index(), 1);
	if (!func_170(uParam0, 2048))
	{
		_0xde5faa741a781f73(get_player_index(), 0);
	}
	if (func_171(uParam1, 2048))
	{
		set_ped_config_flag(uParam0->f_1, 146, false);
	}
	enable_control_action(0, -1404316431, true);
	enable_control_action(0, 255439828, true);
	if (func_171(uParam1, 2) && !func_170(uParam0, 32768))
	{
		func_172(1, uParam0, uParam1, -1038090240, 1103626240);
		func_173(uParam1, 2);
	}
	if (_does_volume_exist(uParam0->f_86))
	{
		_0x74c2b3dc0b294102(uParam0->f_86);
		_0xa1cfb35069d23c23(uParam0->f_86);
	}
	if (_does_item_have_valid_base(*uParam1))
	{
		destroy_itemset(*uParam1);
	}
	func_174(uParam0, uParam1, 1);
	if (!is_entity_dead(*uParam0) && (func_171(uParam1, 8) && (!func_171(uParam1, 1) || _0xc8b29d18022ea2b7(*uParam0))))
	{
		_0xeed08a3a98b847e2(*uParam0, (!func_170(uParam0, 256) || is_entity_dead(uParam0->f_1)), 1040187392);
		if (func_171(uParam1, 4096))
		{
			clear_ped_tasks(*uParam0, 1, 0);
		}
	}
	if (!is_entity_dead(uParam0->f_1) && _0xc8b29d18022ea2b7(uParam0->f_1))
	{
		_0xeed08a3a98b847e2(uParam0->f_1, false, 1040187392);
		if (func_171(uParam1, 4096))
		{
			clear_ped_tasks(uParam0->f_1, 1, 0);
		}
	}
	display_radar(true);
	if (!is_entity_dead(*uParam0))
	{
		if (is_ped_a_player(*uParam0))
		{
			set_player_control(get_player_index(), true, 0, false);
		}
		set_ped_using_action_mode(*uParam0, false, -1, 0);
	}
	animpostfx_stop("Duel");
	_0x914071ff93af2692(player_id(), 1f);
	if (!is_string_null_or_empty(&(uParam0->f_16)))
	{
		if (!cancel_music_event(&(uParam0->f_16)))
		{
		}
	}
	if (!is_string_null_or_empty(&(uParam0->f_20)))
	{
		if (!cancel_music_event(&(uParam0->f_20)))
		{
		}
	}
	if (!is_string_null_or_empty(&(uParam0->f_28)))
	{
		if (!cancel_music_event(&(uParam0->f_28)))
		{
		}
	}
	_text_database_delete("MGDUL");
	if (func_171(uParam1, 16777216))
	{
		func_175();
	}
	set_player_forced_aim(player_id(), false, 0, -1, false);
	_0x4d5c9cc7e7e23e09();
	func_176(uParam1, 9);
}

void func_49(bool bParam0)
{
	if (bParam0)
	{
		if (iVar793 == 0)
		{
			if (does_entity_exist(iVar723))
			{
				_0xc4cfce4c656ef480(iVar723);
			}
			iLocal_796 = 1;
		}
	}
	else if (iVar793 == 1)
	{
		if (does_entity_exist(iVar723))
		{
			_0x8e901b65206c2d3e(iVar723);
		}
		iLocal_796 = 0;
	}
}

void func_50(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_177(iParam0))
		{
			func_178(iParam0, 67108864);
		}
	}
	else if (func_177(iParam0))
	{
		func_179(iParam0, 67108864);
	}
}

void func_51(var uParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (are_strings_equal(_0xf81c53561d15f330(), func_180(uParam0->f_3)))
	{
		_0x1096603b519c905f("");
	}
	if (uParam0->f_48)
	{
		stop_audio_scene("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			func_181(uParam0->f_3, 524288);
		}
	}
	if (func_75(player_ped_id(), 0, 1))
	{
		iVar1 = get_mount(Global_35);
		set_ped_config_flag(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *iParam1)
		{
			bVar3 = (bParam8 && decor_exist_on(iParam1[iVar0], "pedRoam_bInPedRoam"));
			if (func_75(iParam1[iVar0], 0, 0))
			{
				func_182(iParam1[iVar0], bVar3);
				if (func_183(uParam0, (*iParam1)[iVar0]))
				{
					func_184((*iParam1)[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (func_75(iParam1[iVar0], 0, 1))
				{
					if (bParam9)
					{
						if (get_ped_stealth_movement(iParam1[iVar0]))
						{
							set_ped_stealth_movement(iParam1[iVar0], 0, 0, 0);
						}
						else if (_get_ped_crouch_movement(iParam1[iVar0]))
						{
							_set_ped_crouch_movement(iParam1[iVar0], false, 0, false);
						}
					}
					if (!bVar3)
					{
						if (!bParam6)
						{
							func_186(iParam1[iVar0], 1073741824, func_185(iVar0 < iVar2, &(uParam0->f_98[iVar0]), -1f), iVar1, 0);
						}
						else
						{
							task_wander_standard(iParam1[iVar0], 40000f, 0);
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam7)
	{
		func_187(uParam0);
	}
	func_188(uParam0);
	if (!uParam0->f_186)
	{
		func_93(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = func_189(uParam0->f_3, uParam0->f_185);
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
		func_190(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

bool func_52(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	return _does_volume_exist(iParam0);
}

void func_53(struct<6> Param0, var uParam6)
{
	if (_does_volume_exist(Param0))
	{
		_delete_volume(Param0);
	}
	Param0.f_1 = 0;
	Param0.f_2 = -1;
	Param0.f_3 = -1;
	Param0.f_4 = 0;
	if (does_blip_exist(Param0.f_5))
	{
		remove_blip(&(Param0.f_5));
	}
}

void func_54(var uParam0, bool bParam1)
{
	if (*uParam0 > -1 && *uParam0 < 4)
	{
		if (*Global_1955500)[*uParam0]->f_3 == get_id_of_this_thread()
		{
			if (func_191(1, 1) == *uParam0)
			{
				func_192(-1, 1, 1);
			}
			if (bParam1)
			{
				func_193((*Global_1955500)[*uParam0]->f_1);
			}
			(*Global_1955500)[*uParam0] = 0;
			(*Global_1955500)[*uParam0]->f_2 = 0;
			(*Global_1955500)[*uParam0]->f_3 = 0;
			*uParam0 = -1;
		}
	}
}

void func_55(bool bParam0)
{
	func_194(1, !bParam0);
}

bool func_56(bool bParam0)
{
	iVar0 = get_cause_of_most_recent_force_cleanup();
	if (bParam0)
	{
		return true;
	}
	if (func_195(iVar0))
	{
		return false;
	}
	if (func_196(iVar0, 1) || func_196(iVar0, 2))
	{
		return true;
	}
	return false;
}

bool func_57(var uParam0)
{
	iVar0 = func_197(uParam0->f_3);
	iVar1 = func_198(1);
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

void func_58()
{
	switch (func_4())
	{
		case 105:
			Local_224[0]->f_1 = -282719801;
			Local_224[0]->f_3 = 566957611;
			Local_224[1]->f_1 = -282719801;
			Local_224[1]->f_3 = 1493140631;
			break;
	}
	func_199();
	func_200(&Local_652);
	func_201(&Local_224);
	Local_217[0] = "script_re@duel_boaster";
	Local_217[0]->f_1 = "accept_player";
	Local_217[1] = "script_re@duel_boaster";
	Local_217[1]->f_1 = "decline_player";
	Local_217[2] = "script_re@duel_boaster";
	Local_217[2]->f_1 = "win_reaction_friend";
	func_202(&(Local_217[0]), &uLocal_754);
}

bool func_59(int iParam0)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (!func_203((*iParam0)[iVar0]))
		{
			bVar1 = true;
		}
		iVar0++;
	}
	return !bVar1;
}

bool func_60(var uParam0)
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

bool func_61(var uParam0)
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

int func_62(int iParam0, var uParam1, bool bParam2, var uParam3, struct<7> Param4, var uParam11, bool bParam12, bool bParam13, int iParam14)
{
	if (Param4.f_6 > -1)
	{
		*uParam1 = { func_204(iParam0, Param4.f_6) };
		uParam1->f_4 = Param4.f_6;
		uParam1->f_5 = uParam1->f_4;
		func_205(iParam0, uParam1, bParam2, bParam12, 0);
		*uParam3 = 0;
		return 1;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (func_96(iParam0, 128))
			{
				if (!func_206(iParam0, &(uParam1->f_10)))
				{
					*uParam11 = 1;
					return 0;
				}
			}
			else
			{
				func_207(iParam0, &uVar1, &uVar2, &iVar0, 0);
				bVar4 = false;
				*uParam1 = { func_208(&bVar4, iParam0, uVar2, uVar1) };
				if (bVar4)
				{
					*uParam11 = 1;
					return 0;
				}
				if (func_88(*uParam1))
				{
					return func_209(uParam1, uParam3, uParam11, bParam2, 12, 1000);
				}
				uParam1->f_4 = func_210(iParam0, *uParam1);
				uParam1->f_5 = uParam1->f_4;
				if (func_3(Param4.f_2, 8))
				{
					func_205(iParam0, uParam1, 0, bParam12, 0);
					*uParam3 = 0;
					return 1;
				}
				func_211(uParam1);
			}
			*uParam3 = 0;
			uParam1->f_9 = 2;
			break;
		case 1:
			if (func_212(uParam1, uParam3, uParam11, bParam2, bParam13))
			{
				if (!bParam13 && func_213(vdist(Global_36, *uParam1), iParam0))
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
			if (func_96(iParam0, 128))
			{
				if (!func_214(uParam1, &bVar3))
				{
					if (bVar3)
					{
						return func_209(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					return 0;
				}
			}
			else
			{
				func_207(iParam0, &uVar1, &uVar2, &iVar0, 0);
				if (vdist2(*uParam1, Global_36) < to_float(iVar0))
				{
					if (!func_211(uParam1))
					{
						return func_209(uParam1, uParam3, uParam11, bParam2, 12, 1000);
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
			if (func_215(iParam0, Param4.f_1, uParam1, Param4, iParam14))
			{
				func_205(iParam0, uParam1, bParam2, bParam12, 0);
				*uParam3 = 0;
				return 1;
			}
			else
			{
				*uParam3 = 0;
				uParam1->f_9 = 5;
				return func_209(uParam1, uParam3, uParam11, bParam2, 12, 1000);
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
		func_41("BEAT_SCAN", 2000, 0, 1, 0, 0, -1, -1, 0);
	}
	if (uParam1->f_8 >= 12)
	{
		if (bParam2)
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_41("BEAT_FAIL", 4000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam11 = 1;
	}
	return 0;
}

bool func_63(var uParam0, int iParam1)
{
	if (func_64(iParam1, 256))
	{
		if (_does_volume_exist(uParam0->f_172) || func_217(iParam1, func_216(uParam0), &(uParam0->f_172)))
		{
			if (func_75(Global_35, 0, 1))
			{
				return is_entity_in_volume(Global_35, uParam0->f_172, true, 0);
			}
		}
	}
	return true;
}

bool func_64(int iParam0, int iParam1)
{
	if (!func_218(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0] && iParam1) != 0;
}

void func_65(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (uParam0->f_176)
	{
		return;
	}
	if (iParam1 != -1)
	{
		func_219(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, IntToFloat(iParam1), IntToFloat(iParam1), 5f, "Custom Sized Ambient Avoidance");
	}
	else if (func_64(uParam0->f_3, 1) && !func_64(uParam0->f_3, 32))
	{
		func_219(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 25f, 25f, 6f, "Ambient Avoidance Wilderness & No Traffic");
	}
	else if (func_64(uParam0->f_3, 2) && !func_64(uParam0->f_3, 32))
	{
		func_219(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 4f, 4f, 5f, "Ambient Avoidance Town & No Traffic");
	}
	else
	{
		return;
	}
	_0xb56d41a694e42e86(uParam0->f_171, 2228255, 262144, 0, -1, -1, uParam0->f_175);
	_0x18262cafebb5fbe1(uParam0->f_171, 0, 0, 0, -1, -1, 0);
	if (bParam3)
	{
		func_220(uParam0->f_171, 1);
	}
	if (func_64(uParam0->f_3, 1))
	{
		func_219(&(uParam0->f_174), uParam0->f_51, 0f, 0f, 0f, _0x3e2a25b2416dd67e(uParam0->f_171) * Vector(3.5f, 3.5f, 3.5f), "Predator Stay Out");
		func_221(uParam0->f_174, 0, 262144, 0, 0);
	}
	if (iParam2 == 0)
	{
	}
	else if (does_entity_exist(iParam2))
	{
		_0x7c00cfc48a782dc0(uParam0->f_171, iParam2, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
}

float func_66(vector3 vParam0)
{
	vVar0 = { Global_36 - vParam0 };
	return get_heading_from_vector_2d(vVar0.x, vVar0.y);
}

void func_67()
{
	_0x7b204f88f6c3d287(_0x112ddf56300bc6e5(384816425));
	_0x7b204f88f6c3d287(_0x112ddf56300bc6e5(-1531318061));
	_0x7b204f88f6c3d287(_0x112ddf56300bc6e5(126109302));
	_0x7b204f88f6c3d287(_0x112ddf56300bc6e5(1912531847));
	_0x7b204f88f6c3d287(_0x112ddf56300bc6e5(-356221147));
}

void func_68(var uParam0, int iParam1)
{
	func_222(uParam0, iParam1);
}

float func_69(float fParam0)
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

Vector3 func_70(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1361.964f, -1379.899f, 78.38198f;
		case 1:
			return 1360.184f, -1395.189f, 78.49597f;
		case 2:
			return 1352.301f, -1387.826f, 79.00426f;
		default:
			break;
	}
	return 1361.964f, -1379.899f, 78.38198f;
}

void func_71(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = _create_volume_box_with_custom_name(vParam1, vParam4, vParam7, sParam10);
}

void func_72(var uParam0)
{
	func_68(uParam0, 2);
}

bool func_73(int iParam0)
{
	iVar0 = func_223(iParam0);
	if (!&iLocal_863[iParam0])
	{
		iLocal_863[iParam0] = _request_scenario_type(iVar0, 262161, Local_224[iParam0]->f_1, func_224(iParam0));
	}
	else
	{
		return _has_scenario_type_loaded(iVar0, false);
	}
	return false;
}

int func_74(int iParam0, var uParam1, vector3 vParam2, int iParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, int iParam10)
{
	if (bParam6)
	{
		func_225(&vParam2, uParam1->f_22);
	}
	if (!bParam7 && func_226(uParam1))
	{
		iVar0 = _0xeaf682a14f8e5f53(uParam1->f_5, vParam2, iParam5, 1, 1, iParam9, iParam10);
		if (!does_entity_exist(iVar0))
		{
			iVar0 = func_227(iParam0, vParam2, iParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
		}
		else if (_is_metaped_outfit_request_valid(uParam1->f_5))
		{
			_release_metaped_outfit_request(uParam1->f_5);
		}
	}
	else
	{
		iVar0 = func_227(iParam0, vParam2, iParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
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
		if (!is_string_null_or_empty(&(uParam1->f_23)) && !func_228(iVar0))
		{
			func_77(iVar0, &(uParam1->f_23), 0);
		}
		if (func_228(iVar0))
		{
			set_animal_tuning_bool_param(iVar0, 48, true);
		}
		else
		{
			set_ped_config_flag(iVar0, 307, true);
		}
		if (func_229(&(uParam1->f_22)))
		{
			set_ped_can_ragdoll(iVar0, true);
			set_ped_to_ragdoll(iVar0, 1000, 1000, 1, false, false, false);
			set_ped_config_flag(iVar0, 186, !func_230(&(uParam1->f_22)));
			func_232(iVar0, func_231(&(uParam1->f_22)), 0);
		}
		else
		{
			request_ped_visibility_tracking(iVar0);
		}
		if (func_233(&(uParam1->f_22)))
		{
			freeze_entity_position(iVar0, true);
		}
		if (func_234(&(uParam1->f_22)))
		{
			func_235(iVar0, 1);
		}
		_0xa91e6cf94404e8c9(iVar0);
		set_ped_config_flag(iVar0, 6, func_236(&(uParam1->f_22)));
		set_ped_config_flag(iVar0, 393, true);
		if (!func_86(uParam1->f_22, 8192))
		{
			_set_entity_something(iVar0, true);
		}
		if (!func_228(iVar0))
		{
			func_238(iVar0, !func_237(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 4, func_239(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 297, !func_240(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 317, !func_240(&(uParam1->f_22)));
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

bool func_75(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_169(iParam0, iParam1);
}

int func_76(int iParam0, int iParam1, int iParam2)
{
	if ((func_241(iParam0, 16777216) && func_241(iParam0, 33554432)) && func_241(iParam0, 268435456))
	{
		return 379542007;
	}
	iVar0 = _0xf8204ef17410bf43(416676503, iParam1, iParam2, 0);
	iVar1 = _0xf8204ef17410bf43(-1101297303, iParam1, iParam2, 0);
	iVar2 = 392538360;
	iVar3 = 0;
	if (!func_241(iParam0, 33554432))
	{
		iVar3 = iVar1;
	}
	if (!func_241(iParam0, 16777216))
	{
		if (!func_242(iVar3) || _0xf2f585411e748b9c(iVar0, 0) > _0xf2f585411e748b9c(iVar3, 0))
		{
			iVar3 = iVar0;
		}
	}
	if (!func_241(iParam0, 268435456) && func_243(iVar2))
	{
		if (!func_242(iVar3) || _0xf2f585411e748b9c(iVar2, 0) > _0xf2f585411e748b9c(iVar3, 0))
		{
			iVar3 = iVar2;
		}
	}
	if (!func_242(iVar3))
	{
		return 379542007;
	}
	return iVar3;
}

void func_77(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || func_75(iParam0, 0, 0))
	{
		decor_set_bool(iParam0, "HAS_VOICE", true);
		set_ambient_voice_name(iParam0, sParam1);
	}
}

int func_78(int iParam0, var uParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return 0;
	}
	if (func_244(iParam0, &(uParam1->f_121)))
	{
		uParam1->f_120++;
		return 1;
	}
	return 0;
}

int func_79(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_245(1811977508, 1, 0))
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
			if (func_246(iVar25, 0) && func_247(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

bool func_80(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0) && is_entity_a_ped(iParam0))
	{
		iVar0 = func_248(iParam0);
		return func_249(iParam0, 2084597891, iParam1, iVar0);
	}
	return decor_set_int(iParam0, "loot_money", iParam1);
}

int func_81()
{
	return 295645990;
}

var func_82(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6, int iParam7)
{
	return create_scenario_point(iParam0, vParam1, iParam4, iParam5, iParam6, iParam7);
}

char* func_83()
{
	return "DUAL_BOASTER_NO_DRINK_BOASTER";
}

int func_84()
{
	return -844362279;
}

char* func_85()
{
	return "DUEL_BOASTER_HAS_WHISKEY_FRIEND";
}

bool func_86(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_87(var uParam0, bool bParam1)
{
	vVar0 = { *uParam0 };
	vVar0.f_2 = (vVar0.z + 5f);
	if (bParam1)
	{
		if (!func_250(&vVar0, 50, 10, 0))
		{
		}
		else
		{
			*uParam0 = { vVar0 };
		}
	}
}

bool func_88(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

char* func_89(int iParam0)
{
	if (func_251(iParam0))
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

void func_90(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
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
		if (func_252(iParam0->f_6))
		{
			if (is_bit_set(*iParam0, 1))
			{
				func_253(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_254(iParam0->f_6, iParam0->f_5, 0);
			}
			func_255(iParam0->f_6, 0, 1);
		}
		else
		{
			set_bit(iParam0, 14);
		}
		set_bit(iParam0, 0);
	}
	else
	{
		func_159(iParam0, iParam0->f_5);
		if (!is_bit_set(*iParam0, 13))
		{
			set_bit(iParam0, 0);
		}
	}
	set_bit(iParam0, 15);
}

void func_91(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_112(&(iParam0->f_18));
}

void func_92(int iParam0, bool bParam1)
{
	func_158((*Local_545[iParam0])[0], bParam1, 0);
	func_158((*Local_545[iParam0])[1], bParam1, 0);
	func_158((*Local_545[iParam0])[2], bParam1, 0);
}

void func_93(var uParam0, int iParam1)
{
	vVar0 = { func_256(uParam0) };
	iVar3 = func_189(uParam0->f_3, iParam1);
	uParam0->f_185 = iParam1;
	_0xca41e86545413b5b(7, 1221649453, -585414509, iVar3, vVar0);
	if (_0x01f4d242765c6b24(iVar3))
	{
		uParam0->f_186 = 1;
	}
}

void func_94(var uParam0, int iParam1)
{
	if (uParam0->f_2 >= *iParam1)
	{
		if (uParam0->f_2 > uParam0->f_98)
		{
		}
		uParam0->f_2 = 0;
	}
	if (does_entity_exist(iParam1[uParam0->f_2]))
	{
		uParam0->f_98[uParam0->f_2] = get_distance_between_coords(get_entity_coords(iParam1[uParam0->f_2], false, false), Global_36, true);
	}
	else
	{
		uParam0->f_98[uParam0->f_2] = 0f;
	}
}

void func_95(var uParam0)
{
	func_43(uParam0, 1);
	func_257(uParam0, 20);
}

bool func_96(int iParam0, int iParam1)
{
	if (!func_218(iParam0))
	{
		return false;
	}
	return ((*Global_1310750)[iParam0]->f_1 && iParam1) != 0;
}

void func_97(var uParam0, var uParam1, int iParam2, int* iParam3)
{
	if (!func_218(iParam2))
	{
		return;
	}
	if (*uParam1)
	{
		return;
	}
	if (func_258())
	{
		func_259(1);
	}
	func_260(iParam2, uParam0->f_43);
	func_261(iParam2, 0, 0, 0, 0);
	if (func_262(iParam2) != -1)
	{
		_set_weather_type_frozen(true);
	}
	start_audio_scene("RE_active_location_scene");
	_0x1096603b519c905f(func_180(uParam0->f_3));
	if (does_blip_exist(*iParam3))
	{
		remove_blip(iParam3);
	}
	func_263(uParam0, 1, 0);
	*uParam1 = 1;
}

void func_98(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0]->f_7 = 0f;
		(*uParam0)[iVar0]->f_8 = 0f;
		iVar0++;
	}
}

void func_99(var uParam0, int iParam1, float fParam2)
{
	bVar0 = false;
	if (uParam0->f_178 && func_264())
	{
		bVar0 = true;
	}
	if (!uParam0->f_48 && !func_96(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_97(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_98(&(uParam0->f_121));
			return;
		}
		if (_does_volume_exist(uParam0->f_173))
		{
			if (!func_102(Global_35, uParam0->f_173, 1, 0))
			{
				return;
			}
		}
		fVar1 = func_265(uParam0, bVar0);
		func_266(uParam0->f_121[iParam1], fVar1, 1082130432, 0, 90f, 0, &(uParam0->f_98[iParam1]));
		if (func_267(&(uParam0->f_121), uParam0->f_120, fParam2))
		{
			func_97(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_98(&(uParam0->f_121));
		}
	}
}

bool func_100(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	fVar0 = 30f;
	fVar1 = 150f;
	if (func_64(uParam2->f_3, 1))
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
			if (func_268())
			{
				fVar0 = 15f;
			}
		}
		if (func_269(uParam2, fVar0))
		{
			*uParam1 = 1;
		}
	}
	if (!uParam2->f_48)
	{
		if (!bParam3 && func_270(player_id(), 1, 0, 1))
		{
			return false;
		}
		if (!func_269(uParam2, fVar1))
		{
			if (!func_271((*Global_1310750)[uParam2->f_3]->f_38))
			{
				return false;
			}
		}
		if (!func_272(uParam2->f_3, 2) && func_273(2))
		{
			return false;
		}
		if (func_64(iParam0, 4194304) || func_64(iParam0, 33554432))
		{
			if (func_274(1))
			{
				return false;
			}
		}
	}
	if (func_275(Global_35))
	{
		return false;
	}
	if (func_276(0, 1, 1) && !func_277(iParam0))
	{
		return false;
	}
	if (!*uParam1 && func_64(iParam0, 128))
	{
		if (is_player_riding_train(player_id()))
		{
			return false;
		}
		if (func_278(Global_35, 0))
		{
			return false;
		}
		if (Global_16)
		{
			return false;
		}
		if (func_270(player_id(), 1, 0, 1))
		{
			return false;
		}
		if (func_279())
		{
			return false;
		}
		iVar2 = func_280(func_4());
		if (func_281(iVar2))
		{
			if (func_282(Global_36, iVar2))
			{
				return false;
			}
		}
		if (func_283(Global_36) && !uParam2->f_161)
		{
			return false;
		}
		if (!uParam2->f_48)
		{
			if (func_284(&(uParam2->f_91), 0, 1084227584, 1, 1))
			{
				return false;
			}
		}
	}
	return true;
}

void func_101(var uParam0, int iParam1)
{
	if (func_285(uParam0->f_51))
	{
		func_286(uParam0->f_51, 0);
		fVar0 = func_287(uParam0->f_3);
		iVar2 = _create_volume_cylinder_with_custom_name(uParam0->f_51, 0f, 0f, 0f, fVar0, fVar0, fVar0, func_288());
		bVar1 = func_185(!func_64(uParam0->f_3, 1), 20f, -1f);
		uParam0->f_51.f_11 = func_290(iVar2, func_289(uParam0->f_3), 1, iParam1, 8, 0, bVar1);
	}
}

bool func_102(int iParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_103(var uParam0)
{
	return func_291(*uParam0, 1);
}

bool func_104(var uParam0)
{
	return func_291(*uParam0, 2);
}

float func_105()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

bool func_106()
{
	if (((func_292(Global_35, -319279711) && is_ped_active_in_scenario(Global_35, 0)) && iLocal_16 == 1) && !func_3(iVar287, 32768))
	{
		func_46(&uLocal_289, 4194304);
		func_55(1);
		return true;
	}
	return false;
}

bool func_107(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > iParam2->f_5)
	{
		func_293(iParam2, 1, iVar0);
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
			if (func_294(iParam0, iParam2))
			{
				*uParam3 = 128;
				func_295(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (func_296(iParam0, iParam2))
				{
					*uParam3 = 8;
					func_295(iParam0, iParam2, *uParam3);
					return true;
				}
				else if (func_297(iParam0, iParam1, iParam2))
				{
					*uParam3 = 8;
					func_295(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (func_298(iParam0, iParam2))
				{
					*uParam3 = 64;
					func_295(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_26 && func_270(player_id(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_295(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_299(iParam2, 1065353216))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (func_300(Global_35, iParam0, iParam2))
					{
						*uParam3 = 4;
						func_295(iParam0, iParam2, *uParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (func_301(Global_35, iParam0, iParam2))
					{
						*uParam3 = 256;
						func_295(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_302(Global_35, iParam0, iParam2, 0))
				{
					*uParam3 = 16;
					func_295(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			else if (func_302(Global_35, iParam0, iParam2, 1))
			{
				*uParam3 = 16;
				func_295(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (func_303(iParam0, iParam2))
				{
					*uParam3 = 32;
					func_295(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || iParam2->f_12 < 20f)
			{
				if (func_304(&iParam0, iParam2))
				{
					*uParam3 = 4096;
					func_295(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (func_305(iParam2, 4000))
				{
					if ((func_306(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && func_307(iParam2, iParam0)) && func_308(iParam2, iParam0))
					{
						*uParam3 = 2;
						func_295(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((func_306(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && func_307(iParam2, iParam0)) && func_308(iParam2, iParam0))
				{
					*uParam3 = 2;
					func_295(iParam0, iParam2, *uParam3);
					return true;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (func_309(iParam0, Global_1935630->f_41))
							{
								func_310();
								*uParam3 = 2;
								func_295(iParam0, iParam2, *uParam3);
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
						if (func_309(iParam0, Global_1935630->f_41))
						{
							func_310();
							*uParam3 = 2;
							func_295(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (func_311(iParam2, iParam0) || (iParam2->f_9 > 0 && (func_109() - iParam2->f_9) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_310();
						*uParam3 = 2;
						func_295(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (func_312())
					{
						if (func_309(iParam0, Global_1935630->f_42))
						{
							func_310();
							*uParam3 = 2;
							func_295(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (func_313(iParam2, iParam0))
			{
				*uParam3 = 1024;
				func_295(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (func_314(iParam0, iParam1, iParam2))
				{
					*uParam3 = 2048;
					func_295(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (func_315(iParam0, iParam2))
					{
						*uParam3 = 8192;
						func_295(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (func_316(iParam0, iParam2))
				{
					*uParam3 = 32768;
					func_295(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (func_317(iParam2, 4000))
				{
					if (func_318(&iParam0, iParam2))
					{
						*uParam3 = 512;
						func_295(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (func_319(iParam0, iParam2))
				{
					*uParam3 = 65536;
					iParam2->f_4 = 0;
					func_295(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_320(iParam2, iParam0))
			{
				*uParam3 = 1;
				func_295(iParam0, iParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

int func_108(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = func_321(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_107(iParam0[*uParam3], 0, iParam1, uParam2, 0, 0))
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

int func_109()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

void func_110(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_46(iParam0, 134217728);
	}
	else
	{
		func_47(iParam0, 134217728);
	}
}

void func_111(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

void func_112(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_113(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

void func_114()
{
	_0xdd1232b332cbb9e7(4, 1, 0);
}

int func_115(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
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
		if (func_268())
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
				if (func_139(iParam0, 1, 1) > fParam4)
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
			fVar1 = func_32(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_143(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!is_entity_dead(iParam1))
				{
					task_look_at_entity(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_322(iParam0, iParam1, fVar1, bParam13))
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
				iVar2 = func_324(func_323(iParam0, sParam2, iParam11, iParam1, network_is_game_in_progress(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

bool func_116()
{
	if (!func_325(Global_1395482->f_1))
	{
		return false;
	}
	return func_326(Global_1395482->f_1, 32);
}

bool func_117(int iParam0)
{
	if (func_64(iParam0, 1))
	{
		return false;
	}
	return (1 == func_327(iParam0) || 2 == func_327(iParam0));
}

float func_118(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

void func_119()
{
	if (func_3(iVar287, 64))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = func_1(3, 0, 0);
		if (!is_entity_dead(&(iLocal_727[iVar0])))
		{
			if (iVar0 == 0)
			{
				iVar1 = iVar802;
			}
			iVar2 = func_328(iLocal_727[iVar0], Local_502[iVar0], 6f, Local_545[iVar0], &(Local_19.f_192), 0f, 1, 0, 0, iVar1, 0, 0, 2, 1, -1082130432, 0);
			iVar3 = iVar2;
			if (iVar2 != -1)
			{
				iLocal_651 = iVar0;
				iLocal_650 = iVar3;
			}
		}
		iVar0++;
	}
}

void func_120()
{
	if (func_3(iVar287, 16384) && iVar649 == 1)
	{
		if (!func_3(iVar287, 1073741824))
		{
			switch (iVar648)
			{
				case 1:
					if (!func_3(iVar287, 16777216))
					{
						if (func_156(0))
						{
							cVar0 = func_35(32);
						}
						else
						{
							cVar0 = func_35(31);
						}
					}
					else if (func_156(0))
					{
						cVar0 = func_35(53);
					}
					else
					{
						cVar0 = func_35(52);
					}
					func_145(Global_35, &(iLocal_727[1]), cVar0, 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					if (func_3(iVar287, 536870912))
					{
						clear_ped_tasks(&(iLocal_727[1]), 1, 0);
						func_144(&(iLocal_727[1]), Global_35, -1);
					}
					func_24(1, 0, 0);
					func_46(&uLocal_289, 1073741824);
					break;
				case 0:
					if (!func_3(iVar287, 16777216))
					{
						if (func_156(0))
						{
							cVar0 = func_35(30);
						}
						else
						{
							cVar0 = func_35(29);
						}
					}
					else if (func_156(0))
					{
						cVar0 = func_35(51);
					}
					else
					{
						cVar0 = func_35(50);
					}
					func_145(Global_35, &(iLocal_727[1]), cVar0, 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					if (func_3(iVar287, 536870912))
					{
						clear_ped_tasks(&(iLocal_727[1]), 1, 0);
						func_144(&(iLocal_727[1]), Global_35, -1);
					}
					func_24(1, 0, 0);
					func_46(&uLocal_289, 1073741824);
					break;
			}
		}
		else if (!func_3(iVar287, -2147483648))
		{
			switch (iVar648)
			{
				case 1:
					if (!is_any_speech_playing(Global_35) && func_141(0f, 1, &(iLocal_727[1]), 1))
					{
						if (!func_3(iVar287, 16777216))
						{
							func_145(&(iLocal_727[1]), Global_35, func_35(35), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						else if (is_entity_dead(&(iLocal_727[0])))
						{
							cVar0 = func_35(57);
							func_145(&(iLocal_727[1]), Global_35, func_35(57), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						else
						{
							func_145(&(iLocal_727[1]), Global_35, func_35(56), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						func_24(1, 1, 0);
						func_46(&uLocal_289, -2147483648);
					}
					break;
				case 0:
					if (!is_any_speech_playing(Global_35) && func_141(0f, 1, &(iLocal_727[1]), 1))
					{
						if (!func_3(iVar287, 16777216))
						{
							cVar0 = func_35(34);
						}
						else if (is_entity_dead(&(iLocal_727[0])))
						{
							cVar0 = func_35(55);
						}
						else
						{
							cVar0 = func_35(54);
						}
						func_145(&(iLocal_727[1]), Global_35, cVar0, 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_24(1, 1, 0);
						func_46(&uLocal_289, -2147483648);
					}
					break;
			}
		}
	}
}

void func_121()
{
	_0x8b3b71c80a29a4bb(&(iLocal_727[0]), uVar497, 6);
	_0x8b3b71c80a29a4bb(&(iLocal_727[1]), uVar498, 6);
}

int func_122(int iParam0)
{
	iVar0 = func_329(iParam0);
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

bool func_123(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_118(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

void func_124()
{
	func_330(iLocal_727[0], iLocal_727[1], 0, 16);
	func_330(iLocal_727[1], iLocal_727[0], 1, 32);
	func_330(iLocal_727[0], iLocal_727[1], 2, 64);
	func_330(iLocal_727[0], iLocal_727[1], 3, 128);
	func_330(iLocal_727[1], iLocal_727[0], 4, 256);
	func_330(iLocal_727[0], iLocal_727[1], 5, 512);
	func_330(iLocal_727[1], iLocal_727[0], 6, 1024);
	func_330(iLocal_727[0], &Global_35, 7, 2048);
	func_330(iLocal_727[0], &Global_35, 8, 4096);
	func_330(iLocal_727[0], &Global_35, 9, 8192);
	func_330(iLocal_727[0], &Global_35, 10, 16384);
	func_330(iLocal_727[0], &Global_35, 11, 32768);
	if (func_3(iVar287, 33554432) || func_3(iVar287, 16384))
	{
		if (!func_3(iVar287, 536870912))
		{
			func_330(iLocal_727[0], &Global_35, 24, 65536);
		}
	}
	if (func_3(iVar287, 16384))
	{
		func_330(iLocal_727[1], iLocal_727[0], 25, 131072);
		func_330(iLocal_727[0], iLocal_727[1], 27, 262144);
		func_330(iLocal_727[0], &Global_35, 28, 524288);
	}
	if (func_3(iVar287, 536870912))
	{
		if (has_anim_event_fired(&(iLocal_727[0]), get_hash_key(func_35(24))))
		{
			func_36(iLocal_727[0], &Global_35, func_35(23), 0);
		}
	}
}

void func_125(int iParam0, int iParam1)
{
	return;
	if (!is_entity_dead(&(iLocal_727[iParam0])) && _0x02ebbb3989b7e695(&(iLocal_727[iParam0])))
	{
		iVar0 = func_331(&(iLocal_727[iParam0]), Local_652[3]->f_8, 0.8192f);
		iVar1 = func_331(&(iLocal_727[iParam0]), Local_652[1]->f_8, 0.8192f);
		iVar2 = func_331(&(iLocal_727[iParam0]), Local_652[5]->f_8, 0.8192f);
		iVar3 = func_331(&(iLocal_727[iParam0]), Local_652[2]->f_8, 0.8192f);
		iVar4 = func_331(&(iLocal_727[iParam0]), Local_652[4]->f_8, 0.8192f);
		if (iVar2 == 0)
		{
			if (*iParam1 != 4)
			{
				*iParam1 = 4;
			}
		}
		else if (iVar1 == 0)
		{
			if (*iParam1 != 2)
			{
				*iParam1 = 2;
			}
		}
		else if (iVar3 == 0)
		{
			if (*iParam1 != 5)
			{
				*iParam1 = 5;
			}
		}
		else if (iVar0 == 0)
		{
			if (*iParam1 != 3)
			{
				*iParam1 = 3;
			}
		}
		else if (iVar4 == 0)
		{
			if (*iParam1 != 6)
			{
				*iParam1 = 6;
			}
		}
		else if (*iParam1 != 1)
		{
			*iParam1 = 1;
		}
	}
}

void func_126()
{
	iLocal_15 = func_332();
}

void func_127()
{
	if (does_entity_exist(iVar728))
	{
		if (func_333(iVar728, iVar743, 0, 1))
		{
			if (!func_334(iVar728, 518218985))
			{
				if (!is_ped_on_mount(Global_35))
				{
					_task_smart_flee_style_ped(iVar728, Global_35, 1, 0, -1082130432, -1, 0);
				}
			}
		}
	}
}

int func_128()
{
	if (func_3(iVar287, 65536))
	{
		return 1;
	}
	if (func_3(iVar287, 131072))
	{
		return 1;
	}
	return 0;
}

void func_129(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	bVar0 = false;
	if (!func_335())
	{
		bVar0 = true;
		if (&iLocal_826[iParam0] == 0)
		{
			if (!_0x916b8e075abc8b4e(&(iLocal_727[iParam0]), 1))
			{
				return;
			}
		}
	}
	func_150(iLocal_727[iParam0], 0, 0, 1, 0, 0, 0, 1);
	switch (&iLocal_826[iParam0])
	{
		case 0:
			if (func_336(*iParam3, iLocal_15))
			{
				if (_0x916b8e075abc8b4e(&(iLocal_727[iParam0]), 1))
				{
					iLocal_832[iParam0] = 0;
					func_337(iParam0);
					func_112(vLocal_819[iParam0]);
					iLocal_826[iParam0] = 4;
				}
				else if (!bVar0)
				{
					if (func_338(*iParam3, uLocal_838[iParam0], uLocal_835[iParam0]))
					{
						func_337(iParam0);
						iLocal_826[iParam0] = 1;
					}
				}
			}
			else if (!bVar0)
			{
				if (!func_339(iParam0))
				{
					if (!_0x916b8e075abc8b4e(&(iLocal_727[iParam0]), 1))
					{
						if (_0x02ebbb3989b7e695(&(iLocal_727[iParam0])))
						{
							_0xe7fa07624574b79a(&(iLocal_727[iParam0]), Global_35, 2, iParam5, -1f, 100, 0, 1, 0);
						}
					}
				}
			}
			else if (_0x916b8e075abc8b4e(&(iLocal_727[iParam0]), 1))
			{
				iLocal_832[iParam0] = 0;
				func_337(iParam0);
				func_112(vLocal_819[iParam0]);
				iLocal_826[iParam0] = 4;
			}
			break;
		case 1:
			if (bVar0)
			{
				iLocal_826[iParam0] = 0;
			}
			else if (!func_340(iParam0))
			{
				if (!func_341(&(iLocal_727[iParam0]), 0))
				{
					if (func_342(iParam0, &(uLocal_838[iParam0]), uParam2, 1f, 0, 0, 1, 0, 0))
					{
						iLocal_826[iParam0] = 2;
					}
				}
			}
			break;
		case 2:
			if (!_0x68821369a2ceadd5(&(iLocal_727[iParam0]), &(uLocal_838[iParam0])))
			{
				if (_0x02ebbb3989b7e695(&(iLocal_727[iParam0])))
				{
					*iParam3 = &uLocal_835[iParam0];
					iLocal_826[iParam0] = 0;
				}
			}
			break;
		case 4:
			if (!_0x916b8e075abc8b4e(&(iLocal_727[iParam0]), 1))
			{
				if (_0x02ebbb3989b7e695(&(iLocal_727[iParam0])))
				{
					if (!func_103(vLocal_819[iParam0]))
					{
						func_143(vLocal_819[iParam0]);
					}
					else if (func_343(vLocal_819[iParam0], 1f))
					{
						iLocal_826[iParam0] = 0;
					}
				}
			}
			else if (!&iLocal_832[iParam0])
			{
				if (!func_340(iParam0))
				{
					task_look_at_entity(&(iLocal_727[iParam0]), Global_35, -1, 0, 51, 1);
					_0x541e5b41dca45828(&(iLocal_727[iParam0]), iParam5, 1);
					iLocal_832[iParam0] = 1;
				}
			}
			break;
	}
}

void func_130(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_344((*uParam0)[iVar0], 9);
		iVar0++;
	}
}

void func_131()
{
	if (!is_entity_dead(&(iLocal_727[0])))
	{
		set_ped_can_play_ambient_anims(&(iLocal_727[0]), false);
	}
	if (!is_entity_dead(&(iLocal_727[1])))
	{
		set_ped_can_play_ambient_anims(&(iLocal_727[1]), false);
	}
}

void func_132(int iParam0)
{
	func_345(iParam0, 0, func_89(7));
	func_158((*Local_545[iParam0])[0], 1, 0);
	func_345(iParam0, 1, func_89(10));
	func_158((*Local_545[iParam0])[1], 1, 0);
	func_158((*Local_545[iParam0])[2], 1, 0);
}

void func_133(int iParam0)
{
	iLocal_215 = iParam0;
}

bool func_134()
{
	func_131();
	func_346();
	switch (iVar855)
	{
		case 0:
			if (func_102(Global_35, iVar732, 1, 0))
			{
				func_347();
				iLocal_857 = 1;
			}
			break;
		case 1:
			if (!bVar891)
			{
				if (has_anim_event_fired(&(iLocal_727[1]), 389643704))
				{
					func_348();
					iLocal_879 = 0;
				}
			}
			if (bVar877)
			{
				if (func_349())
				{
					func_36(&Global_35, iLocal_727[0], "RE_DUELB_RHD_V1_INTRO_POS", 0);
					func_143(&uLocal_848);
					iLocal_879 = 0;
					iLocal_650 = -1;
					iLocal_651 = -1;
					iLocal_857 = 8;
					return false;
				}
				else if (func_350())
				{
					func_145(Global_35, &(iLocal_727[0]), "RE_DUELB_RHD_V1_INTRO_NEG", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_46(&uLocal_289, 33554432);
					func_143(&uLocal_848);
					func_49(0);
					iLocal_879 = 0;
					iLocal_650 = -1;
					iLocal_651 = -1;
					iLocal_857 = 10;
					return false;
				}
			}
			else if (func_349())
			{
				if (func_156(0))
				{
					func_36(&Global_35, iLocal_727[0], func_35(20), 0);
				}
				else
				{
					func_36(&Global_35, iLocal_727[0], func_35(19), 0);
				}
				func_46(&uLocal_289, 16384);
				func_143(&uLocal_848);
				func_351();
				func_49(0);
				iLocal_857 = 10;
				return false;
			}
			else if (func_350())
			{
				func_145(Global_35, &(iLocal_727[0]), "RE_DUELB_RHD_V1_INTRO_NEG", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_46(&uLocal_289, 33554432);
				func_143(&uLocal_848);
				func_351();
				func_49(0);
				iLocal_857 = 10;
				return false;
			}
			if (func_352(3))
			{
				func_130(Local_545[0]);
				iLocal_857 = 2;
			}
			break;
		case 8:
			set_ped_reset_flag(&(iLocal_727[0]), 290, true);
			set_ped_reset_flag(&(iLocal_727[1]), 290, true);
			if (func_343(&uLocal_848, 1f))
			{
				_0x90703a8f75ee4abd(&(iLocal_727[0]), 1048576000);
				_0x90703a8f75ee4abd(&(iLocal_727[1]), 1048576000);
				func_353();
				func_354(&(iLocal_727[0]), 500);
				func_354(&(iLocal_727[1]), 500);
				func_143(&uLocal_848);
				iLocal_495 = 3;
				iLocal_893 = 1;
				iLocal_790 = add_shocking_event_at_position(-23350179, get_entity_coords(&(iLocal_727[0]), true, false), 100f, -1f, -1f, -1f, -1f, -1, -1);
				iLocal_857 = 9;
			}
			break;
		case 9:
			if (!is_any_speech_playing(Global_35))
			{
				if (!is_any_speech_playing(&(iLocal_727[0])))
				{
					if (!is_any_speech_playing(&(iLocal_727[1])))
					{
						iLocal_857 = 1;
					}
				}
			}
			break;
		case 10:
			set_ped_reset_flag(&(iLocal_727[0]), 290, true);
			set_ped_reset_flag(&(iLocal_727[1]), 290, true);
			if (func_343(&uLocal_848, 1f))
			{
				_0x90703a8f75ee4abd(&(iLocal_727[0]), 1048576000);
				_0x90703a8f75ee4abd(&(iLocal_727[1]), 1048576000);
				func_353();
				func_354(&(iLocal_727[0]), 500);
				func_354(&(iLocal_727[1]), 500);
				func_143(&uLocal_848);
				iLocal_790 = add_shocking_event_at_position(-23350179, get_entity_coords(&(iLocal_727[0]), true, false), 100f, -1f, -1f, -1f, -1f, -1, -1);
				iLocal_857 = 7;
			}
			break;
		case 7:
			func_150(iLocal_727[0], 0, 0, 1, 0, 0, 0, 1);
			func_150(iLocal_727[1], 0, 0, 1, 0, 0, 0, 1);
			if (!is_any_speech_playing(Global_35) || func_343(&uLocal_848, 2f))
			{
				iLocal_857 = 13;
			}
			break;
		case 13:
			func_150(iLocal_727[0], 0, 0, 1, 0, 0, 0, 1);
			func_150(iLocal_727[1], 0, 0, 1, 0, 0, 0, 1);
			if (func_355())
			{
				if (func_3(iVar287, 16384))
				{
					iLocal_857 = 11;
				}
				else if (func_3(iVar287, 33554432))
				{
					iLocal_857 = 6;
				}
			}
			break;
		case 11:
			func_150(iLocal_727[0], 0, 0, 1, 0, 0, 0, 1);
			func_150(iLocal_727[1], 0, 0, 1, 0, 0, 0, 1);
			if (func_356(-1216782656, 71076839))
			{
				iLocal_857 = 12;
			}
			break;
		case 12:
			func_150(iLocal_727[0], 0, 0, 1, 0, 0, 0, 1);
			func_150(iLocal_727[1], 0, 0, 1, 0, 0, 0, 1);
			if (func_357())
			{
				iLocal_857 = 15;
			}
			break;
		case 15:
			if (func_356(-798036636, -1121260474))
			{
				func_358();
				iLocal_857 = 14;
			}
			break;
		case 14:
			func_150(iLocal_727[0], 0, 0, 1, 0, 0, 0, 1);
			func_150(iLocal_727[1], 0, 0, 1, 0, 0, 0, 1);
			if (func_355())
			{
				iLocal_857 = 16;
			}
			break;
		case 16:
			func_150(iLocal_727[0], 0, 0, 1, 0, 0, 0, 1);
			func_150(iLocal_727[1], 0, 0, 1, 0, 0, 0, 1);
			if (func_359())
			{
				func_360();
			}
			break;
		case 2:
			func_130(Local_545[0]);
			if (func_352(4) || func_361())
			{
				func_362();
				if (!func_363())
				{
					func_364(205, 0);
				}
				else
				{
					func_364(204, 0);
				}
				func_49(0);
				func_142(2001176446, &(iLocal_727[0]), 1);
				iLocal_790 = add_shocking_event_at_position(-23350179, get_entity_coords(&(iLocal_727[0]), true, false), 100f, -1f, -1f, -1f, -1f, -1, -1);
				iLocal_857 = 3;
			}
			break;
		case 3:
			if (func_352(6))
			{
				func_365(Local_545[1], 0, 0);
				func_365(Local_545[0], 0, 0);
				func_351();
				func_111(uLocal_731[0]);
				iLocal_857 = 23;
			}
			else if (!has_anim_event_fired(&(iLocal_727[0]), -878670098))
			{
				if (!is_any_speech_playing(&(iLocal_727[0])))
				{
					if (func_366(1086324736, 1067030938))
					{
						func_150(iLocal_727[0], 0, 0, 1, 0, 0, 0, 1);
						func_150(iLocal_727[1], 0, 0, 1, 0, 0, 0, 1);
						func_367();
						iLocal_857 = 18;
					}
				}
			}
			break;
		case 4:
			func_150(iLocal_727[0], 0, 0, 1, 0, 0, 0, 1);
			func_150(iLocal_727[1], 0, 0, 1, 0, 0, 0, 1);
			if (func_343(&uLocal_890, 2f))
			{
				if (func_366(1086324736, 1067030938) || (func_343(&uLocal_887, 4f) && !func_368(0)))
				{
					iLocal_790 = add_shocking_event_at_position(-23350179, get_entity_coords(&(iLocal_727[0]), true, false), 100f, -1f, -1f, -1f, -1f, -1, -1);
					iLocal_857 = 5;
				}
			}
			break;
		case 5:
			func_150(iLocal_727[0], 0, 0, 1, 0, 0, 0, 1);
			func_150(iLocal_727[1], 0, 0, 1, 0, 0, 0, 1);
			if (func_369())
			{
				if (func_3(iVar287, 33554432))
				{
					func_46(&uLocal_289, 536870912);
					iLocal_857 = 6;
				}
				else
				{
					iLocal_857 = 12;
				}
			}
			break;
		case 6:
			func_150(iLocal_727[0], 0, 0, 1, 0, 0, 0, 1);
			func_150(iLocal_727[1], 0, 0, 1, 0, 0, 0, 1);
			if (func_370())
			{
				func_49(1);
				func_111(uLocal_731[0]);
				iLocal_857 = 24;
			}
			break;
		case 18:
			func_150(iLocal_727[0], 0, 0, 1, 0, 0, 0, 1);
			func_150(iLocal_727[1], 0, 0, 1, 0, 0, 0, 1);
			if (func_371())
			{
				if (!func_156(0))
				{
					func_145(&(iLocal_727[0]), Global_35, "RE_DUELB_RHD_V1_DB_APROCH", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					func_145(&(iLocal_727[0]), Global_35, "RE_DUELB_RHD_V1_DB_APROCH_SCK", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				iLocal_857 = 19;
			}
			break;
		case 19:
			func_150(iLocal_727[0], 0, 0, 1, 0, 0, 0, 1);
			if (!is_any_speech_playing(&(iLocal_727[0])))
			{
				iLocal_857 = 20;
			}
			break;
		case 20:
			func_143(&uLocal_851);
			iLocal_857 = 21;
			break;
		case 21:
			if (func_343(&uLocal_851, 15f))
			{
				if (func_369())
				{
					iLocal_857 = 22;
				}
			}
			break;
		case 22:
			if (func_357())
			{
				func_49(1);
				func_111(uLocal_731[0]);
				iLocal_857 = 24;
			}
			break;
		case 23:
			if (func_356(267478604, 1902170138))
			{
				func_111(uLocal_731[0]);
				iLocal_857 = 24;
			}
			break;
		case 24:
			break;
	}
	return false;
}

void func_135()
{
	if (!func_3(iVar287, 4096))
	{
		if (iLocal_16 != 1)
		{
			func_46(&uLocal_289, 4096);
		}
	}
	else if (iLocal_16 == 1)
	{
		func_47(&uLocal_289, 4096);
	}
}

Vector3 func_136()
{
	return 1352.775f, -1376.879f, 79.50199f;
}

void func_137(var uParam0, vector3 vParam1, float fParam4)
{
	if (func_75(*uParam0, 0, 1) && func_140(*uParam0, vParam1, 0) < fParam4)
	{
		set_ped_reset_flag(*uParam0, 94, true);
		_0xc6981aff6d2a71c2(*uParam0);
	}
}

void func_138()
{
	if (func_3(iVar287, 268435456))
	{
		return;
	}
	if (!func_75(&(iLocal_727[1]), 0, 1))
	{
		return;
	}
	if (!func_3(iVar287, 134217728))
	{
		vVar0 = { vLocal_779 };
		fVar3 = fVar783;
	}
	else
	{
		vVar0 = { vLocal_782 };
		fVar3 = fVar784;
	}
	clear_ped_tasks(&(iLocal_727[1]), 1, 0);
	open_sequence_task(&iVar4);
	task_follow_nav_mesh_to_coord(0, vVar0, 1f, -1, 0.25f, 0, fVar3);
	task_stand_still(0, -1);
	func_153(&(iLocal_727[1]), &iVar4, 1f, 1f, 1, 1);
	func_46(&uLocal_289, 268435456);
}

float func_139(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return -1f;
	}
	return func_32(Global_35, iParam0, bParam1, bParam2);
}

float func_140(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

bool func_141(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && does_entity_exist(iParam2))
	{
		if (!func_372(iParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_373(fParam0))
	{
		return false;
	}
	return true;
}

void func_142(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		allow_sonar_blips(true);
		force_sonar_blips_this_frame();
	}
	_trigger_sonar_blip_2(iParam0, iParam1);
}

void func_143(var uParam0)
{
	func_374(uParam0, 0f);
}

int func_144(int iParam0, var uParam1, int iParam2)
{
	task_turn_ped_to_face_entity(iParam0, uParam1, iParam2, 3f, 0.25f, -1082130432);
	return 1;
}

bool func_145(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_115(iParam0, iParam1, sParam2, iParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

bool func_146()
{
	if (((!func_3(iVar287, 8) && func_141(-3f, 1, 0, 0)) && iLocal_215 != 8) && iLocal_215 != 11)
	{
		func_33(&uLocal_731);
		Local_476 = { func_375(2, Global_35, Local_385.f_42, 0f, 0f, 0f, 3f, 3f, 2.5f, -1, 1, 1) };
		func_376("DUEL_OBJ", 7500, 0, 0, -1, -1, 0);
		func_46(&uLocal_289, 8);
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (iVar1 != iVar495 && !func_88(func_70(iVar1)))
		{
			fVar2 = func_377(func_70(iVar1), 1);
			if (fVar3 <= 0f || fVar2 < fVar3)
			{
				iVar0 = iVar1;
				fVar3 = fVar2;
			}
		}
		iVar1++;
	}
	if (fVar3 < (0.5f * func_377(func_70(iVar1), 1)))
	{
		iLocal_497 = iVar0;
		func_378(Local_476, func_70(iVar495));
		Local_385.f_42 = { func_70(iVar495) };
		if (iVar0 == 0)
		{
			func_47(&uLocal_289, 134217728);
		}
		else
		{
			func_46(&uLocal_289, 134217728);
		}
		func_47(&uLocal_289, 268435456);
	}
	if (func_75(&(iLocal_727[0]), 0, 1))
	{
		if ((func_379(Local_476) && func_140(&(iLocal_727[0]), Local_385.f_45, 1) < 5f) && !is_ped_on_mount(Global_35))
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			return true;
		}
	}
	else if (func_52(Local_476))
	{
		func_53(Local_476);
	}
	return false;
}

void func_147()
{
	switch (iVar495)
	{
		case 0:
			*Local_385.f_51[2] = { 1361.262f, -1377.528f, 79.3325f };
			*Local_385.f_61[2] = { 2.3406f, 0f, -178.2651f };
			Local_385.f_71[2] = 29.9655f;
			break;
		case 1:
			*Local_385.f_51[2] = { 1360.914f, -1397.627f, 79.5004f };
			*Local_385.f_61[2] = { 1.3735f, 0f, 6.4722f };
			Local_385.f_71[2] = 29.9655f;
			break;
		case 2:
			*Local_385.f_51[2] = { 1349.855f, -1388.979f, 80.004f };
			*Local_385.f_61[2] = { -0.4564f, 0f, -82.0066f };
			Local_385.f_71[2] = 29.9655f;
			break;
	}
}

void func_148(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	func_286(vVar0, 0);
}

bool func_149(var uParam0, var uParam1)
{
	_0xb6f4825153920582();
	disable_control_action(0, -1404316431, false);
	disable_control_action(0, -1304887797, false);
	disable_control_action(0, 1301263553, false);
	disable_control_action(0, -39308912, false);
	disable_control_action(0, -128997553, false);
	disable_control_action(0, 255439828, false);
	disable_control_action(0, 1287709438, false);
	disable_control_action(0, -2131587435, false);
	disable_control_action(0, -209515122, false);
	func_380();
	disable_control_action(0, -640622144, false);
	disable_control_action(0, 101002513, false);
	disable_control_action(0, -432665970, false);
	disable_control_action(0, -349518703, false);
	disable_control_action(0, -1591726981, false);
	disable_control_action(0, -1098542161, false);
	disable_control_action(0, 2139949496, false);
	_0x8910c24b7e0046ec();
	disable_control_action(0, 1644850270, false);
	disable_control_action(0, -672681099, false);
	func_381(uParam1, uParam0);
	if (func_169(uParam0->f_1, 0) && is_ped_a_player(*uParam0))
	{
		set_ped_reset_flag(uParam0->f_1, 25, true);
	}
	set_all_random_peds_flee_this_frame(player_id());
	func_382();
	switch (uParam1->f_55)
	{
		case 0:
			if (func_383(uParam1))
			{
				func_384(uParam1, 33554432);
				if (func_170(uParam0, 2))
				{
					func_385(get_entity_coords(uParam0->f_1, true, false));
				}
			}
			if (func_383(uParam1))
			{
				set_player_control(get_player_index(), false, 0, false);
			}
			else
			{
				set_player_control(get_player_index(), false, 4480, false);
			}
			func_386();
			func_387(0, 1065353216);
			if (func_170(uParam0, 2))
			{
				func_388(uParam0, uParam1);
			}
			func_389(uParam0, uParam1);
			if (func_390(uParam0, uParam1))
			{
				func_48(uParam0, uParam1);
				func_176(uParam1, 9);
				return true;
			}
			if (func_169(*uParam0, 0) && func_391(uParam0, uParam1))
			{
				func_176(uParam1, 1);
			}
			break;
		case 1:
			func_386();
			func_389(uParam0, uParam1);
			if (func_170(uParam0, 2))
			{
				func_388(uParam0, uParam1);
			}
			if (is_screen_faded_out())
			{
				return false;
			}
			if (func_392(uParam0, uParam1) && func_393(uParam0, uParam1))
			{
				func_394(uParam0, uParam1, 0);
				Global_19 = 0;
				func_395(uParam0, uParam1);
				func_396(uParam0, uParam1);
				if (does_entity_exist(uParam0->f_1))
				{
					uParam1->f_4 = add_shocking_event_for_entity(748896394, uParam0->f_1, 0f, 30f, 35f, -1f, 20f, 180f, false, false, -1, -1);
				}
				if (!func_170(uParam0, 1024))
				{
					set_player_control(get_player_index(), true, 0, false);
					if (func_170(uParam0, 64))
					{
						task_duel(*uParam0, uParam1->f_63, uParam0->f_48, uParam0->f_1, func_397(uParam0), 0, 0f, 0f, 0f, func_398(uParam0->f_42, uParam0->f_45, 1), 1);
					}
					else if (func_170(uParam0, 32))
					{
						task_duel(*uParam0, uParam1->f_63, uParam0->f_48, uParam0->f_1, func_397(uParam0), 0, 0f, 0f, 0f, func_398(uParam0->f_42, uParam0->f_45, 1), 1);
					}
					else
					{
						task_duel(*uParam0, uParam1->f_63, uParam0->f_48, uParam0->f_1, func_397(uParam0), 0, uParam0->f_42, func_398(uParam0->f_42, uParam0->f_45, 1), 1);
					}
				}
				_0x2208438012482a1a(*uParam0, true, true);
				uParam1->f_2 = get_game_timer();
				if (!get_ped_config_flag(uParam0->f_1, 146, true))
				{
					set_ped_config_flag(uParam0->f_1, 146, true);
					func_384(uParam1, 2048);
				}
				if (!func_170(uParam0, 262144))
				{
					_hide_ped_weapons(*uParam0, 2, true);
					_hide_ped_weapons(uParam0->f_1, 2, true);
				}
				if ((func_170(uParam0, 32) || func_170(uParam0, 2)) || (func_383(uParam1) && !func_383(uParam1)))
				{
					if (!func_170(uParam0, 1024))
					{
						func_399(&(uParam0->f_16), 0);
					}
					if (!func_383(uParam1))
					{
						func_400(uParam0, uParam1, 1);
					}
					func_176(uParam1, 7);
				}
				else
				{
					func_401(uParam1, 0);
					display_radar(false);
					func_176(uParam1, 3);
				}
			}
			break;
		case 3:
			func_386();
			func_387(0, 1065353216);
			func_395(uParam0, uParam1);
			bVar0 = func_388(uParam0, uParam1);
			if (func_390(uParam0, uParam1))
			{
				func_48(uParam0, uParam1);
				func_176(uParam1, 9);
				return true;
			}
			if (is_screen_faded_out())
			{
				return false;
			}
			if (get_game_timer() > uParam1->f_2 + 1000 || func_3(uParam0->f_88, 2))
			{
				if ((func_3(uParam0->f_88, 32) || bVar0) && (func_170(uParam0, 2) || (is_ped_facing_ped(uParam0->f_1, *uParam0, 20f) && is_ped_facing_ped(*uParam0, uParam0->f_1, 20f))))
				{
					if (!func_170(uParam0, 2048))
					{
						_0xde5faa741a781f73(get_player_index(), 1);
					}
					if (!func_170(uParam0, 1024))
					{
						func_399(&(uParam0->f_16), 0);
					}
					if (func_3(uParam0->f_88, 1024))
					{
						if (func_140(uParam0->f_1, uParam0->f_45, 0) < 0.5f || func_334(uParam0->f_1, -717627678))
						{
							clear_ped_tasks(uParam0->f_1, 1, 0);
							open_sequence_task(&iVar1);
							if (!is_string_null_or_empty(&(uParam0->f_12)))
							{
								task_play_anim(0, "script_re@drunk_dueler", &(uParam0->f_12), 2f, -4f, -1, 4, 0f, false, 0, false, 0, false);
							}
							else
							{
								task_play_anim(0, "script_re@drunk_dueler", "intro_idle_drunk", 2f, -4f, -1, 4, 0f, false, 0, false, 0, false);
								task_play_anim(0, "script_re@drunk_dueler", "pass_out_drunk", 2f, -4f, -1, 4, 0f, false, 0, false, 0, false);
							}
							func_153(uParam0->f_1, &iVar1, 0, 0, 1, 1);
							func_176(uParam1, 8);
						}
					}
					else
					{
						func_176(uParam1, 7);
					}
				}
			}
			break;
		case 7:
			display_radar(false);
			func_395(uParam0, uParam1);
			if (func_402(uParam0, uParam1))
			{
				func_48(uParam0, uParam1);
				func_176(uParam1, 9);
				func_399(&(uParam0->f_32), 1);
				return true;
			}
			break;
		case 8:
			func_395(uParam0, uParam1);
			func_403(uParam0);
			if (!func_3(uParam1->f_1, 512) && has_anim_event_fired(uParam0->f_1, -529482553))
			{
				remove_shocking_event(uParam1->f_4);
				uParam1->f_4 = add_shocking_event_at_position(-180122789, get_entity_coords(uParam0->f_1, true, false), -1f, -1f, -1f, -1f, -1f, -1, -1);
				clear_ped_tasks(uParam0->f_1, 1, 0);
				remove_all_ped_weapons(uParam0->f_1, false, true);
				set_ped_config_flag(uParam0->f_1, 243, true);
				task_knocked_out(uParam0->f_1, 60f, 1);
				func_46(&(uParam1->f_1), 512);
				func_48(uParam0, uParam1);
				if (!func_170(uParam0, 2048))
				{
					_0xde5faa741a781f73(get_player_index(), 0);
				}
				func_399(&(uParam0->f_32), 1);
				render_script_cams(false, true, 5000, true, false, 0);
				display_radar(true);
				set_player_control(get_player_index(), true, 0, false);
				clear_ped_tasks(*uParam0, 1, 0);
				func_176(uParam1, 9);
				return true;
			}
			break;
		case 9:
			func_48(uParam0, uParam1);
			return true;
	}
	if (func_170(uParam0, 4))
	{
		bVar2 = true;
		iVar3 = _get_game_timer_non_scaled_clipped();
		if (uParam1->f_10 == -1)
		{
			uParam1->f_10 = iVar3;
		}
		else if ((iVar3 - uParam1->f_10) > 2000)
		{
			bVar2 = false;
		}
		if (bVar2)
		{
			disable_control_action(0, 130948705, true);
			disable_control_action(0, 42190210, true);
		}
	}
	return false;
}

void func_150(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_68(&(Var0.f_5), 1);
	}
	Var0.f_13 = 0;
	Var0.f_7 = iParam1;
	func_404(&(Var0.f_5), 1);
	if (!is_entity_dead(*uParam0))
	{
		_0x66f9eb44342bb4c5(*uParam0, &Var0);
	}
}

void func_151(int iParam0)
{
	func_345(iParam0, 0, func_89(7));
	func_345(iParam0, 1, func_89(10));
	func_158((*Local_545[iParam0])[0], 1, 0);
	func_158((*Local_545[iParam0])[1], 1, 0);
	func_158((*Local_545[iParam0])[2], 0, 0);
}

Vector3 func_152(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 1321.585f, -1377.29f, 78.71848f;
				case 1:
					return 1348.175f, -1351.6f, 77.24657f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1360.599f, -1368.853f, 78.11948f;
				case 1:
					return 1348.175f, -1351.6f, 77.24657f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1364.88f, -1379.064f, 78.23975f;
				case 1:
					return 1374.104f, -1364.997f, 77.67146f;
				default:
					break;
			}
			break;
	}
	return 1368.803f, -1352.745f, 76.63999f;
}

void func_153(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

void func_154(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_405() != -1)
	{
		return;
	}
	if ((Global_36616 && func_406(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_407(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_408(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_409(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_408(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

bool func_155()
{
	if (func_405() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

bool func_156(int iParam0)
{
	if (func_157())
	{
		return false;
	}
	return func_410((*Global_1347702)[58]->f_15, 1);
}

bool func_157()
{
	if (func_405() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

void func_158(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_411(iParam0, 13))
	{
		func_344(iParam0, 0);
	}
	else
	{
		func_412(iParam0, 0);
	}
	if (func_252(iParam0->f_6))
	{
		if (bParam2)
		{
			func_413(&(iParam0->f_6), 0, 1);
		}
	}
}

void func_159(int* iParam0, char* sParam1)
{
	if (func_252(iParam0->f_6) && !is_string_null_or_empty(sParam1))
	{
		func_254(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_412(iParam0, 1);
}

void func_160()
{
	if (!is_entity_dead(&(iLocal_727[0])))
	{
		func_330(iLocal_727[1], &Global_35, 44, 1048576);
		func_330(iLocal_727[1], &Global_35, 45, 2097152);
		func_330(iLocal_727[1], &Global_35, 46, 4194304);
	}
	else
	{
		func_330(iLocal_727[1], &Global_35, 47, 1048576);
		func_330(iLocal_727[1], &Global_35, 48, 2097152);
		func_330(iLocal_727[1], &Global_35, 49, 4194304);
	}
}

var func_161(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_162(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return _create_var_string(2, func_414(sParam1));
}

void func_163(var uParam0, var uParam1)
{
	if (func_171(uParam1, 4))
	{
		if (!func_415(uParam0->f_1))
		{
			func_173(uParam1, 4);
		}
	}
}

void func_164()
{
	_0x88544c0e3291dcae(1);
	func_416();
}

char* func_165(var uParam0, var uParam1)
{
	switch (uParam0->f_3)
	{
		case 0:
			if (uParam0->f_69)
			{
				return "DUEL_OBJ_FILL";
			}
			else
			{
				return "DUEL_OBJ_FILL_ALT";
			}
			break;
		case 1:
			if (uParam0->f_69)
			{
				return "DUEL_OBJ_DRAW";
			}
			else
			{
				return "DUEL_OBJ_DRAW_ALT";
			}
			break;
		case 2:
			if (!is_string_null_or_empty(&(uParam1->f_36)))
			{
				return func_417(uParam1->f_36);
			}
			else
			{
				return "DUEL_OBJ_FIRE";
			}
			break;
	}
	return "";
}

void func_166(char* sParam0, int iParam1)
{
	Var0.f_1 = sParam0;
	iVar2 = _0x4e88a65968a55c78(&Var0, iParam1);
	if (func_418(iVar2))
	{
		_0x2f901291ef177b02(iVar2, 0);
	}
}

void func_167()
{
	_databinding_write_data_bool(Global_1911643->f_3, false);
	iVar0 = 0;
	while (iVar0 < &Global_1911643)
	{
		_databinding_remove_data_entry(&(Global_1911643->f_5[iVar0]));
		iVar0++;
	}
	_databinding_clear_binding_array(Global_1911643->f_4);
	Global_1911643 = 0;
	Global_1911643->f_1 = 0;
}

void func_168()
{
}

bool func_169(int iParam0, int iParam1)
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
	if (func_86(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_86(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_86(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_86(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_86(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_86(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_86(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_86(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_170(var uParam0, int iParam1)
{
	return (uParam0->f_88 && iParam1) != 0;
}

bool func_171(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_172(bool bParam0, var uParam1, var uParam2, float fParam3, int iParam4)
{
	fVar6 = func_398(uParam1->f_42, uParam1->f_45, 1);
	fVar7 = func_398(uParam1->f_45, uParam1->f_42, 1);
	if (func_4() == 76)
	{
		vVar0 = { -269.649f, 791.1334f, 17.58054f };
		vVar3 = { -342.3348f, 777.1977f, 215.2967f };
	}
	else if (func_4() == 105)
	{
		vVar0 = { 1312.238f, -1296.278f, 0.850876f };
		vVar3 = { 1432.387f, -1431.857f, 179.1864f };
	}
	else
	{
		vVar0 = { _get_object_offset_from_coords(uParam1->f_42, fVar6, 0f, fParam3, -100f) };
		vVar3 = { _get_object_offset_from_coords(uParam1->f_45, fVar7, 0f, fParam3, 100f) };
	}
	if (bParam0)
	{
		if (func_171(uParam2, 2))
		{
			set_roads_back_to_original_in_angled_area(vVar0, vVar3, iParam4, 0, 1);
		}
	}
	else if (!func_171(uParam2, 2))
	{
		set_roads_in_angled_area(vVar0, vVar3, iParam4, 0, bParam0, 1, 0);
		func_384(uParam2, 2);
	}
}

void func_173(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 - (uParam0->f_1 && iParam1));
}

void func_174(var uParam0, var uParam1, bool bParam2)
{
	if (func_171(uParam1, 1024) || bParam2)
	{
		if (func_169(uParam0->f_3, 0))
		{
			if (does_entity_exist(uParam0->f_3))
			{
				set_ped_config_flag(uParam0->f_3, 136, false);
				func_419(uParam0->f_3, 0);
			}
		}
		func_173(uParam1, 1024);
	}
}

void func_175()
{
	func_420(Global_35, &(Global_1347400->f_46));
}

void func_176(var uParam0, int iParam1)
{
	uParam0->f_55 = iParam1;
}

bool func_177(int iParam0)
{
	return func_421(iParam0, 67108864);
}

void func_178(int iParam0, int iParam1)
{
	if (!func_422(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (Global_1914319->f_15614[iParam0] || iParam1);
}

void func_179(int iParam0, int iParam1)
{
	if (!func_422(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (&Global_1914319->f_15614[iParam0] - (Global_1914319->f_15614[iParam0] && iParam1));
}

char* func_180(int iParam0)
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

void func_181(int iParam0, int iParam1)
{
	if (!func_218(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_1 = ((*Global_1310750)[iParam0]->f_1 || iParam1);
}

void func_182(int iParam0, bool bParam1)
{
	if (func_75(iParam0, 0, 1))
	{
		set_blocking_of_non_temporary_events(iParam0, false);
		func_423(iParam0, 1088421888, 0, 0);
		if (!bParam1)
		{
			set_ped_as_no_longer_needed(&iParam0);
		}
	}
}

bool func_183(var uParam0, var uParam1)
{
	if (func_64(uParam0->f_3, 16777216))
	{
		if (func_424(*uParam1) != -1 || get_entity_model(*uParam1) == 1478983280)
		{
			return true;
		}
	}
	return false;
}

void func_184(var uParam0)
{
	set_ped_config_flag(*uParam0, 6, false);
	set_ped_config_flag(*uParam0, 4, false);
	set_ped_config_flag(*uParam0, 494, true);
}

float func_185(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_186(int iParam0, int iParam1, float fParam2, int iParam3, bool bParam4)
{
	if (!Global_1935630->f_12 && (!bParam4 || func_75(iParam0, 0, 1)))
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
			fVar2 = func_185(fParam2 >= 0f, fParam2, vdist(get_entity_coords(iParam0, true, false), Global_36));
			if (fVar2 > 25f && is_entity_occluded(iParam0))
			{
				func_425(&iParam0);
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

void func_187(var uParam0)
{
	if (_does_volume_exist(uParam0->f_171))
	{
		func_426(uParam0->f_171);
		_0xa1cfb35069d23c23(uParam0->f_171);
		_0x74c2b3dc0b294102(uParam0->f_171);
	}
	if (uParam0->f_51.f_7 != 0)
	{
		destroy_tracked_point(uParam0->f_51.f_7);
		uParam0->f_51.f_7 = 0;
	}
	func_427(uParam0);
	func_428(uParam0);
	func_429(uParam0);
	if (!func_430(uParam0))
	{
		if (_0xf6a8a652a6b186cd(uParam0->f_51.f_11))
		{
			_0xfdfecc6ee4491e11(uParam0->f_51.f_11);
		}
		func_286(uParam0->f_51, 0);
	}
	if (does_blip_exist(uParam0->f_51.f_6))
	{
		remove_blip(&(uParam0->f_51.f_6));
	}
	if (uParam0->f_48)
	{
		func_416();
	}
	if (!func_431(uParam0->f_3) && !func_64(uParam0->f_3, 256))
	{
		func_432(uParam0->f_3, 1, 0, 15, 0, 0, 0, 1);
	}
	func_193(uParam0->f_173);
	func_193(uParam0->f_172);
}

void func_188(var uParam0)
{
	if (does_blip_exist(uParam0->f_181))
	{
		remove_blip(&(uParam0->f_181));
	}
}

int func_189(int iParam0, int iParam1)
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

void func_190(int iParam0, int iParam1, int iParam2)
{
	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_405() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	_0xd5910ecf81a2278c(iParam0, iParam1, iParam2, &vVar0);
}

int func_191(int iParam0, bool bParam1)
{
	iVar0 = func_433();
	if (bParam1 && is_entity_dead(iVar0))
	{
		return -1;
	}
	return &Global_1955499;
}

void func_192(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = func_433();
	if (!is_entity_dead(iVar0))
	{
		iVar1 = 0;
		iVar2 = iParam0;
		if (iParam0 == -1)
		{
			iVar2 = func_191(iParam1, bParam2);
			if (iVar2 != -1)
			{
				iVar1 = (*Global_1955500)[iVar2]->f_2;
				if (func_434(iVar2, 512))
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

void func_193(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_194(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_435(iParam0);
	}
	else
	{
		func_436(iParam0);
	}
}

bool func_195(int iParam0)
{
	if (((func_196(iParam0, 1) && func_196(iParam0, 2)) && func_196(iParam0, 8)) && func_196(iParam0, 512))
	{
		return true;
	}
	return false;
}

bool func_196(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_197(int iParam0)
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

int func_198(bool bParam0)
{
	if (bParam0)
	{
		return func_437(Global_1359489->f_4);
	}
	get_group_size(func_438(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = get_ped_as_group_member(func_438(), iVar3);
		if (func_439(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

void func_199()
{
	Local_652[0]->f_7 = 1077976463;
	Local_652[3]->f_7 = 1077976463;
	Local_652[1]->f_7 = 1077976463;
	Local_652[5]->f_7 = 1077976463;
	Local_652[2]->f_7 = 1077976463;
	Local_652[4]->f_7 = 1077976463;
}

void func_200(var uParam0)
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

void func_201(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		func_440(&((*iParam0)[iVar0]->f_1));
		func_440(&((*iParam0)[iVar0]->f_12));
		iVar0++;
	}
}

void func_202(char* sParam0, var uParam1)
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

bool func_203(var uParam0)
{
	if (!func_441(uParam0->f_1))
	{
		return false;
	}
	if (uParam0->f_12 != 0)
	{
		if (!func_441(uParam0->f_12))
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

Vector3 func_204(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return 0f, 0f, 0f;
	}
	if (!func_218(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (func_442(iParam0) == 0)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = (func_443(iParam0) + iParam1);
	if (iVar0 >= 892)
	{
		return 0f, 0f, 0f;
	}
	return *Global_1310750->f_13358[iVar0];
}

void func_205(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_64(iParam0, 32))
	{
		if (func_444(iParam0, uParam1->f_4, &(uParam1->f_12)))
		{
			if (bParam4)
			{
				vVar1 = { func_445(Global_35, &(uParam1->f_12)) };
				if (!func_88(vVar1))
				{
					*uParam1 = { vVar1 };
				}
			}
		}
	}
	if (bParam2)
	{
		func_446(uParam1, bParam2);
	}
	if (bParam3)
	{
		fVar4 = func_287(iParam0);
		iVar0 = _create_volume_cylinder_with_custom_name(*uParam1, 0f, 0f, 0f, fVar4, fVar4, fVar4, func_288());
		if (func_447(Global_1310750[iParam0], 33554432))
		{
			func_290(iVar0, func_289(iParam0), 1, 0, 2, 0, -1082130432);
		}
		else
		{
			func_290(iVar0, func_289(iParam0), 1, 0, 8, 0, -1082130432);
		}
		if (func_64(iParam0, 1))
		{
			func_448(*uParam1 + Vector(1f, 0f, 0f), 25f, "Beat Inner", 1, 0, 32, 0, -1082130432);
		}
	}
	func_449(iParam0);
}

bool func_206(int iParam0, var uParam1)
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
			func_450(uParam1, *(*Global_1310750)[iParam0]->f_4.f_4[iVar0]);
		}
		iVar0++;
	}
	if (func_96(iParam0, 16))
	{
		_0xb8e3486d107f4194(*uParam1, 55f);
		_0x827a58ced9d4d5b4(*uParam1, 180f);
		fVar2 = to_float(func_451(iParam0));
		fVar1 = 60f;
	}
	else
	{
		_0x65d281985f2bdfc2(*uParam1, 35f);
		_0x827a58ced9d4d5b4(*uParam1, 65f);
		fVar2 = to_float(func_451(iParam0));
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

void func_207(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4)
{
	switch (func_452(iParam0))
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
			if (!func_64(iParam0, 1))
			{
				if (func_96(iParam0, 2))
				{
				}
			}
			func_453(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		case 2:
			func_454(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		case 3:
			func_454(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = 7f;
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		default:
			break;
	}
	if (func_117(iParam0))
	{
		*fParam2 = 40000f;
	}
}

Vector3 func_208(bool bParam0, int iParam1, var uParam2, var uParam3)
{
	fVar7 = 999999.9f;
	fVar8 = 0f;
	*bParam0 = 1;
	iVar0 = 0;
	while (iVar0 < func_442(iParam1))
	{
		if (!func_455(iParam1, iVar0))
		{
			vVar4 = { func_204(iParam1, iVar0) };
			if (!func_88(vVar4))
			{
				fVar8 = vdist(Global_36, vVar4);
				if (func_213(fVar8, iParam1))
				{
					*bParam0 = 0;
				}
				if (fVar8 < fVar7)
				{
					if (func_456(iParam1, vVar4, uParam2, uParam3))
					{
						fVar7 = vdist(Global_36, vVar4);
						vVar1 = { vVar4 };
					}
				}
			}
		}
		iVar0++;
	}
	if (!func_88(vVar4))
	{
	}
	return vVar1;
}

int func_209(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, int iParam5)
{
	if (uParam0->f_8 >= iParam4)
	{
		if (bParam3)
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_41("BEAT_FAIL", 5000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam2 = 1;
	}
	*uParam1 = iParam5;
	uParam0->f_8++;
	return 0;
}

int func_210(int iParam0, vector3 vParam1)
{
	iVar0 = 0;
	while (iVar0 < func_442(iParam0))
	{
		vVar1 = { func_204(iParam0, iVar0) };
		if (func_457(vVar1, vParam1, 1056964608, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_211(var uParam0)
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

int func_212(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	vVar2 = { *uParam0 };
	func_458(Global_35, *uParam0, &(uParam0->f_37), 1061158912, 0, 0);
	if (func_459(&(uParam0->f_37), 500))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!func_88(*uParam0->f_12[iVar0]))
			{
				vVar5 = { *uParam0->f_12[iVar0] };
				vVar8 = { _0x83acc65d9acec5ef(Global_36, vVar2, vVar5, true) };
				if (vdist2(Global_36, vVar8) <= (35f * 35f) || vdist2(Global_36, *uParam0->f_12[iVar0]) <= (80f * 80f))
				{
					if (bParam4)
					{
						iVar1 = func_460(uParam0);
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
	return func_209(uParam0, uParam1, uParam2, bParam3, 16, 1000);
}

bool func_213(float fParam0, int iParam1)
{
	fVar3 = (fParam0 * fParam0);
	func_207(iParam1, &fVar0, &fVar1, &uVar2, 1);
	if (fVar3 > fVar1)
	{
		return false;
	}
	if (func_64(iParam1, 1))
	{
		if (fVar3 < fVar0)
		{
			return false;
		}
	}
	return true;
}

bool func_214(var uParam0, bool bParam1)
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

bool func_215(int iParam0, var uParam1, var uParam2, struct<7> Param3, bool bParam10)
{
	if (func_461(iParam0, *uParam2))
	{
		return false;
	}
	if (!func_462(iParam0, uParam2))
	{
		return false;
	}
	if (!func_463(Param3))
	{
		return false;
	}
	if (bParam10)
	{
		if (!func_464(*uParam2, Global_35))
		{
			return false;
		}
	}
	return true;
}

int func_216(var uParam0)
{
	return uParam0->f_51.f_4;
}

bool func_217(int iParam0, int iParam1, var uParam2)
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

bool func_218(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_219(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = _create_volume_cylinder_with_custom_name(vParam1, vParam4, vParam7, sParam10);
}

void func_220(int iParam0, int iParam1)
{
	if (func_465(iParam0))
	{
		return;
	}
	if (func_466(iParam0) == iParam1)
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

void func_221(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 0);
	if (bParam3)
	{
		func_47(&iParam1, 8192);
	}
	if (bParam4)
	{
		_0x2161278c6322f740(iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, iParam0);
	}
}

void func_222(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_223(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_81();
		case 1:
			return func_84();
		default:
			break;
	}
	return 0;
}

int func_224(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return func_467();
		default:
			break;
	}
	return 0;
}

int func_225(var uParam0, var uParam1)
{
	vVar0 = { *uParam0 };
	if (func_468(&uParam1))
	{
		return 1;
	}
	if (!func_250(&vVar0, 1, 10, 0))
	{
		return 0;
	}
	*uParam0 = { vVar0 };
	return 1;
}

bool func_226(var uParam0)
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

int func_227(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_469(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_228(int iParam0)
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

bool func_229(var uParam0)
{
	return func_86(*uParam0, 4);
}

bool func_230(var uParam0)
{
	return func_86(*uParam0, 64);
}

bool func_231(var uParam0)
{
	return func_86(*uParam0, 8);
}

void func_232(int iParam0, bool bParam1, bool bParam2)
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

bool func_233(var uParam0)
{
	return func_86(*uParam0, 128);
}

bool func_234(var uParam0)
{
	return func_86(*uParam0, 2048);
}

void func_235(int iParam0, bool bParam1)
{
	set_ped_config_flag(iParam0, 130, !bParam1);
	set_ped_config_flag(iParam0, 178, bParam1);
}

bool func_236(var uParam0)
{
	return func_86(*uParam0, 1024);
}

bool func_237(var uParam0)
{
	return func_86(*uParam0, 256);
}

void func_238(int iParam0, bool bParam1)
{
	set_ped_config_flag(iParam0, 146, !bParam1);
	set_ped_config_flag(iParam0, 148, !bParam1);
}

bool func_239(var uParam0)
{
	return func_86(*uParam0, 512);
}

bool func_240(var uParam0)
{
	return func_86(*uParam0, 4096);
}

bool func_241(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_242(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_243(int iParam0)
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

bool func_244(int iParam0, var uParam1)
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

bool func_245(int iParam0, int iParam1, bool bParam2)
{
	if (!func_246(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_470(iParam0);
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
		if (!func_471(iParam0, 1))
		{
			return false;
		}
	}
	return func_472(iParam0, 0, bParam2) >= iParam1;
}

bool func_246(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_247(int iParam0, int iParam1)
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

int func_248(int iParam0)
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

var func_249(int iParam0, int iParam1, int iParam2, int iParam3)
{
	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = iParam1;
	Var0.f_12[0] = iParam2;
	iVar23 = 13;
	return _0xa88e215ceb0435c0(iParam0, &Var0, iParam3, iVar23, 2, 0);
}

bool func_250(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_473(*uParam0, 0f, 0f, 0f))
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

bool func_251(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 38)
	{
		return true;
	}
	return false;
}

bool func_252(int iParam0)
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

void func_253(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_252(iParam0))
	{
		return;
	}
	iVar0 = func_474(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(2, sParam1, sParam2));
}

void func_254(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_252(iParam0))
	{
		return;
	}
	iVar0 = func_474(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, sParam1);
}

void func_255(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_252(iParam0))
	{
		return;
	}
	iVar0 = func_474(iParam0);
	if (bParam1)
	{
		func_475(iParam0, 4);
		func_476(iVar0, 1);
		func_477(iVar0, 1);
	}
	else
	{
		func_478(iParam0, 4);
		func_477(iVar0, 0);
	}
}

Vector3 func_256(var uParam0)
{
	return uParam0->f_51;
}

void func_257(var uParam0, int iParam1)
{
	uParam0->f_21 = iParam1;
}

bool func_258()
{
	return &Global_1935436 == 2;
}

void func_259(int iParam0)
{
	if (iParam0 >= &Global_1935436)
	{
		return;
	}
	Global_1935436->f_1 = iParam0;
}

void func_260(int iParam0, int iParam1)
{
	if (get_random_event_flag())
	{
		return;
	}
	Global_17504.f_3++;
	Global_17504.f_42[iParam0]->f_1++;
	if (func_64(iParam0, 2))
	{
		func_480(iParam0, func_479(iParam1));
	}
	else
	{
		func_482(iParam0, func_481());
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
	func_483(iParam0, (*Global_1310750)[iParam0]->f_36, fVar0, 1, 0);
	func_484(iParam0, 0);
	func_485(iParam0);
	func_486(1);
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
	if (!func_64(iParam0, 16))
	{
		func_261(iParam0, 0, 0, 0, 0);
	}
}

void func_261(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (bParam1)
	{
	}
	if (func_487() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0];
		if (((func_218(iVar1) && !func_64(iVar1, iParam2)) && (!bParam3 || !func_277(iVar1))) && (!bParam4 || !func_488(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_489(iVar0);
			}
		}
		iVar0++;
	}
}

int func_262(int iParam0)
{
	return (*Global_1310750)[iParam0]->f_39;
}

void func_263(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_177 != -1 || func_447(Global_1310750[uParam0->f_3], 16777216))
	{
		if (bParam2)
		{
			if (func_64(uParam0->f_3, 1073741824))
			{
				func_490(2, -1, 0, 0, 0);
			}
			else
			{
				func_490(1, -1, 0, 0, 0);
			}
		}
		else if (bParam1)
		{
			if (uParam0->f_45)
			{
				func_490(8, -1, 0, 0, 0);
			}
		}
		if (uParam0->f_177 != -1)
		{
			if (bParam2)
			{
				if (!func_491(1, uParam0->f_177))
				{
					func_492(16, uParam0->f_177);
					func_493(1, uParam0->f_177);
				}
				compendium_gang_encountered(func_494(uParam0->f_177));
			}
		}
	}
	else if (bParam2 || (bParam1 && uParam0->f_45))
	{
		func_490(8, -1, 0, 0, 0);
	}
}

int func_264()
{
	if (func_242(Global_1935630->f_44))
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
		else if (func_495())
		{
			return 1;
		}
	}
	return 0;
}

float func_265(var uParam0, bool bParam1)
{
	if (uParam0->f_119 == -1f)
	{
		if (func_64(uParam0->f_3, 1024))
		{
			fVar0 = 95f;
		}
		else if (func_64(uParam0->f_3, 2048))
		{
			fVar0 = 80f;
		}
		else if (func_64(uParam0->f_3, 4096))
		{
			fVar0 = 65f;
		}
		else if (func_64(uParam0->f_3, 8192))
		{
			fVar0 = 55f;
		}
		else if (func_64(uParam0->f_3, 16384))
		{
			fVar0 = 30f;
		}
		else
		{
			fVar0 = 85f;
		}
		if (func_64(uParam0->f_3, 1))
		{
		}
		else if (func_64(uParam0->f_3, 2))
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

int func_266(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, var uParam6)
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
			else if (func_496(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
					if (func_497(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
		uParam0->f_7 = (func_105() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

bool func_267(var uParam0, int iParam1, float fParam2)
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
	func_98(uParam0);
	return true;
}

bool func_268()
{
	return (Global_1894899 & 1 != 0 && func_4() != -1);
}

bool func_269(var uParam0, float fParam1)
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

int func_270(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_498(bParam1, bParam2, bParam3);
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

bool func_271(int iParam0)
{
	if (iParam0 == -1)
	{
		return true;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = func_500(func_499());
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

bool func_272(int iParam0, int iParam1)
{
	return (func_262(iParam0) && iParam1) != 0;
}

bool func_273(int iParam0)
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
	if (iParam0 & 1 == 1 && func_501(iVar3))
	{
		return true;
	}
	if (iParam0 & 2 == 2 && func_502(iVar3))
	{
		return true;
	}
	if (iParam0 & 4 == 4 && func_503(iVar3))
	{
		return true;
	}
	if (iParam0 & 8 == 8 && func_504(iVar3))
	{
		return true;
	}
	if (iParam0 & 16 == 16 && func_505(iVar3))
	{
		return true;
	}
	if (iParam0 & 32 == 32 && func_506(iVar3))
	{
		return true;
	}
	if (iParam0 & 64 == 64 && func_507(iVar3))
	{
		return true;
	}
	return false;
}

bool func_274(bool bParam0)
{
	if (func_508(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_275(int iParam0)
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

bool func_276(int iParam0, bool bParam1, bool bParam2)
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
		if (func_509())
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
		iVar0 = func_510(&(Global_1898164->f_1[0]));
		if (func_511(iVar0) && func_512((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_513(&(Global_1898164->f_1[0])))
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

bool func_277(int iParam0)
{
	if (!func_218(iParam0))
	{
		return false;
	}
	if (func_514(64) && func_515(iParam0))
	{
		return true;
	}
	return (*Global_1310750)[iParam0]->f_46;
}

bool func_278(int iParam0, bool bParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_ped_injured(iParam0) || !bParam1)
		{
			iVar0 = get_interior_from_entity(iParam0);
			if (is_valid_interior(iVar0))
			{
				if (func_516(iVar0) || func_517(iVar0))
				{
					return false;
				}
				return true;
			}
		}
	}
	return false;
}

bool func_279()
{
	return Global_1894899 & 4 != 0;
}

int func_280(int iParam0)
{
	if (!func_518(iParam0))
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

bool func_281(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return false;
	}
	return true;
}

bool func_282(vector3 vParam0, int iParam3)
{
	if (!func_281(iParam3))
	{
		return false;
	}
	if (_does_volume_exist((*Global_1392194)[iParam3]->f_5))
	{
		return _0xf256a75210c5c0eb((*Global_1392194)[iParam3]->f_5, vParam0);
	}
	return false;
}

bool func_283(vector3 vParam0)
{
	if (func_88(vParam0))
	{
		return false;
	}
	fVar0 = func_185(func_268(), 6f, 22f);
	return _0x769bb7626b8cdb06(vParam0, fVar0, 1, 0, 16384);
}

bool func_284(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
						func_143(uParam0);
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
		func_143(uParam0);
		return true;
	}
	if (!bParam4)
	{
		if (!func_103(uParam0))
		{
			return false;
		}
		else if (is_scripted_speech_playing(Global_35) || is_any_speech_playing(Global_35))
		{
			return true;
		}
		if (!func_343(uParam0, fParam2))
		{
			return true;
		}
		if (func_103(uParam0))
		{
			func_112(uParam0);
		}
	}
	return false;
}

bool func_285(vector3 vParam0)
{
	return _0x769bb7626b8cdb06(vParam0, 0.5f, 0, 0, 16384);
}

void func_286(vector3 vParam0, int iParam3)
{
	if (func_88(vParam0))
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
			if (func_457(vVar2, vParam0, 2f, 1))
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

float func_287(int iParam0)
{
	if (!func_218(iParam0))
	{
		return 0f;
	}
	if (!func_519(iParam0))
	{
		return 0f;
	}
	return (*Global_1310750)[iParam0]->f_44;
}

char* func_288()
{
	return "unnamed";
}

char* func_289(int iParam0)
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

int func_290(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (!_does_volume_exist(iParam0))
	{
		return 0;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	vVar3 = { _0x3e2a25b2416dd67e(iParam0) };
	iVar6 = func_448(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

bool func_291(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_292(int iParam0, int iParam1)
{
	return _is_ped_using_scenario_hash(iParam0, iParam1);
}

void func_293(int iParam0, bool bParam1, int iParam2)
{
	func_520(iParam2);
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
		iParam0->f_13 = func_521(0);
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
							func_46(iParam0, 33554432);
						}
					}
					else if (!*iParam0 & 8192 != 0)
					{
						if (func_274(1))
						{
							func_46(iParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_35) && (!func_274(1) || *iParam0 & 8192 != 0))
				{
					func_47(iParam0, 33554432);
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
			if (func_522(iParam0))
			{
				iParam0->f_15 = func_109();
			}
		}
		else if (iParam0->f_15 > 0)
		{
			if ((func_109() - iParam0->f_15) > 500)
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
	func_523(iParam0);
}

bool func_294(int iParam0, int iParam1)
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
			if (!func_524(iParam0, iParam1, iVar2))
			{
				return false;
			}
			if (func_525(iParam0, iVar2) <= func_526(iParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_295(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		iParam1->f_10 = iParam0;
	}
	if (func_527(iParam2, 1, 1, 1, 0))
	{
		func_46(iParam1, 2048);
	}
	iParam1->f_16 = iParam2;
	func_110(iParam1, 1);
	func_416();
}

bool func_296(int iParam0, int iParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_528(iParam0, !*iParam1 & 268435456 != 0, !*iParam1 & 536870912 != 0, !*iParam1 & 1073741824 != 0, 0, 0))
		{
			if (iParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (iParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_529(iParam1);
			if (func_530(iParam1, iParam0, fVar0, fVar1))
			{
				if (iParam1->f_2 == 0)
				{
					iParam1->f_2 = get_game_timer();
				}
				iVar2 = (get_game_timer() - iParam1->f_2);
				iVar3 = func_531(iParam1);
				if (iParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_110(iParam1, 1);
						return true;
					}
					else if (iParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_110(iParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_297(int iParam0, int iParam1, int iParam2)
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
	if (func_532(iParam1, !*iParam2 & 268435456 != 0, !*iParam2 & 536870912 != 0, !*iParam2 & 1073741824 != 0, 0))
	{
		if (iParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (iParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_529(iParam2);
		if (func_530(iParam2, iParam0, fVar0, fVar1))
		{
			if (iParam2->f_2 == 0)
			{
				iParam2->f_2 = get_game_timer();
			}
			if (iParam2->f_2 != 0)
			{
				if (get_game_timer() - iParam2->f_2) > func_531(iParam2)
				{
					func_110(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_298(int iParam0, int iParam1)
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
	if (func_524(iParam0, iParam1, iVar1))
	{
		if (iParam1->f_3 == 0)
		{
			iParam1->f_3 = get_game_timer();
		}
		else if (get_game_timer() - iParam1->f_3) > func_531(iParam1)
		{
			fVar3 = func_529(iParam1);
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

bool func_299(int iParam0, float fParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_109();
	iVar1 = (iVar0 - iParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_300(var uParam0, int iParam1, int iParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_533(iParam2);
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
			if (func_308(iParam2, iParam1))
			{
				func_110(iParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_301(var uParam0, int iParam1, int iParam2)
{
	if (iParam2->f_12 < IntToFloat(func_534(iParam2)))
	{
		if ((is_weapon_valid(Global_1935630->f_46) && !_0x5809dbca0a37c82b(Global_1935630->f_46)) || get_current_ped_vehicle_weapon(Global_35, &uVar0))
		{
			if (func_308(iParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_110(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_302(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_535(iParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, iParam2->f_22))
				{
					func_110(iParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, iParam2->f_27))
				{
					func_110(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, iParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, iParam2->f_26, &vVar4, 0, 0);
					if (func_536(iParam1, vVar0, vVar4))
					{
						func_110(iParam2, 1);
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
					func_110(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, iParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, iParam2->f_26, &vVar7, 0, 0);
					if (func_536(iParam1, vVar0, vVar7))
					{
						func_110(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_303(int iParam0, int iParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *iParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_524(iParam0, iParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_537(&(Global_1935630->f_34[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_538(&(Global_1935630->f_34[iVar0])))
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
			if (func_539(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_540(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_541(iParam1, iParam0, fVar1, iVar0))
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

bool func_304(int iParam0, int iParam1)
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

bool func_305(int iParam0, int iParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_109();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_306(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_542(iVar0, &iVar2))
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
	if (func_543(iVar0, iParam0))
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

int func_307(int iParam0, int iParam1)
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

bool func_308(int iParam0, int iParam1)
{
	if (func_544(iParam0))
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

bool func_309(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_32(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_310()
{
}

bool func_311(int iParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_35);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_545(iVar0, iParam1, vVar1))
		{
			iParam0->f_9 = func_109();
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
						if (func_140(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								iParam0->f_9 = func_109();
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

bool func_312()
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
	if ((func_109() - Global_1935630->f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_313(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0->f_14))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_526(iParam0);
	if (iParam0->f_12 > func_546(iParam0) && iParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_547(iParam1);
	iVar1 = func_548(iParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((iParam0->f_12 <= fVar0 || ((_0x06087579e7aa85a9(iParam1, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam1, Global_35, 1, 0) == 1)) || ((_0x06087579e7aa85a9(iParam1, iParam0->f_14, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, iParam0->f_14, 17)) && _0x7f9b9791d4cb71f6(iParam1, iParam0->f_14, 1, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_314(int iParam0, int iParam1, int iParam2)
{
	if (iParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *iParam2 & 256 != false;
	bVar1 = *iParam2 & 524288 != false;
	bVar2 = *iParam2 & 128 != false;
	return func_549(iParam0, iParam1, bVar0, bVar2, iParam2->f_12, bVar1);
}

bool func_315(int iParam0, int iParam1)
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
		if (func_550(iParam0, iParam1, 1))
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
					if (!func_551(iParam1, iParam0))
					{
						if (func_140(iVar4, Global_36, 1) < 7f)
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

bool func_316(int iParam0, int iParam1)
{
	if (!func_156(0))
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

bool func_317(int iParam0, int iParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_109();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_318(int iParam0, int iParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

int func_319(int iParam0, int iParam1)
{
	if (!is_ped_human(iParam0))
	{
		return 0;
	}
	if (iParam1->f_4 == 0)
	{
		iParam1->f_4 = func_109();
	}
	else if (func_109() - iParam1->f_4) > func_552(iParam1)
	{
		return func_553(iParam0, iParam1, 0, -1082130432);
	}
	return 0;
}

bool func_320(int iParam0, int iParam1)
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

int func_321(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_322(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_323(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
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
	return func_554(iParam0, &Var0);
}

int func_324(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_325(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_326(int iParam0, int iParam1)
{
	if (!func_325(iParam0))
	{
		return false;
	}
	return (Global_1395482->f_2[iParam0] && iParam1) != 0;
}

int func_327(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_5;
}

int func_328(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	iVar0 = iParam9;
	func_555(&iVar0);
	if (func_3(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_556(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_3(iVar0, 134217728))
	{
		func_557(iParam1, uParam3, uParam0);
	}
	if (!*uParam4)
	{
		if (!is_bit_set(*iParam1, 25))
		{
			if (is_bit_set(*iParam1, 24))
			{
				if (!func_558(558))
				{
					func_364(558, 0);
				}
				set_bit(iParam1, 24);
				set_bit(iParam1, 25);
			}
		}
	}
	return iVar1;
}

int func_329(int iParam0)
{
	if (!func_559(iParam0))
	{
		return 0;
	}
	return (*Global_1895087)[iParam0]->f_1;
}

void func_330(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (func_3(iLocal_14, iParam3))
	{
		return;
	}
	sVar0 = func_35(iParam2);
	if (has_anim_event_fired(*uParam0, get_hash_key(sVar0)))
	{
		func_36(uParam0, uParam1, sVar0, 0);
		func_46(&iLocal_14, iParam3);
	}
}

int func_331(int iParam0, int iParam1, float fParam2)
{
	vVar0 = { get_entity_coords(iParam1, false, false) };
	return func_560(iParam0, vVar0, fParam2);
}

int func_332()
{
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < iVar650)
	{
		if (does_entity_exist(Local_652[iVar0]->f_8))
		{
			if (iVar1 < 0)
			{
				iVar1 = iVar0;
				fVar2 = func_118(Global_36, get_entity_coords(Local_652[iVar0]->f_8, true, false));
			}
			else
			{
				fVar3 = func_118(Global_36, get_entity_coords(Local_652[iVar0]->f_8, true, false));
				if (fVar3 < fVar2)
				{
					iVar1 = iVar0;
					fVar2 = fVar3;
				}
			}
		}
		iVar0++;
	}
	if (iVar1 > -1)
	{
		switch (iVar1)
		{
			case 0:
				return 1;
			case 1:
				return 2;
			case 2:
				return 5;
			case 3:
				return 3;
			case 4:
				return 6;
			case 5:
				return 4;
			default:
				break;
		}
	}
	return 1;
}

bool func_333(int iParam0, int iParam1, int iParam2, bool bParam3)
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

bool func_334(int iParam0, int iParam1)
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

bool func_335()
{
	if (func_371())
	{
		if (_0x569f1e1237508deb(&(iLocal_727[0])) == 332317174)
		{
			return true;
		}
	}
	return false;
}

bool func_336(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		if (iParam0 == 3 || iParam0 == 6)
		{
			return false;
		}
		return true;
	}
	if (iParam0 != iParam1)
	{
		return true;
	}
	return false;
}

void func_337(int iParam0)
{
	if (iParam0 == 1)
	{
		func_143(&uLocal_805);
		fLocal_808 = get_random_float_in_range(0.5f, 1.5f);
	}
}

bool func_338(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 1:
			switch (iLocal_15)
			{
				case 3:
					*uParam1 = 253080715;
					*uParam2 = 3;
					return true;
				case 2:
					*uParam1 = 253080715;
					*uParam2 = 3;
					return true;
				case 4:
					*uParam1 = 253080715;
					*uParam2 = 3;
					return true;
				case 6:
					*uParam1 = 151392176;
					*uParam2 = 6;
					return true;
				case 5:
					*uParam1 = 151392176;
					*uParam2 = 6;
					return true;
				default:
					break;
			}
			break;
		case 3:
			switch (iLocal_15)
			{
				case 6:
					*uParam1 = 253080715;
					*uParam2 = 4;
					return true;
				case 5:
					*uParam1 = 253080715;
					*uParam2 = 4;
					return true;
				case 4:
					*uParam1 = 253080715;
					*uParam2 = 4;
					return true;
				case 1:
					*uParam1 = 151392176;
					*uParam2 = 1;
					return false;
				case 2:
					*uParam1 = 287555703;
					*uParam2 = 2;
					return true;
				default:
					break;
			}
			break;
		case 2:
			switch (iLocal_15)
			{
				case 3:
					*uParam1 = -1254494159;
					*uParam2 = 3;
					return true;
				case 4:
					*uParam1 = 287555703;
					*uParam2 = 4;
					return true;
				case 6:
					*uParam1 = 253080715;
					*uParam2 = 5;
					return true;
				case 5:
					*uParam1 = 253080715;
					*uParam2 = 5;
					return true;
				case 1:
					*uParam1 = -1254494159;
					*uParam2 = 3;
					return true;
				default:
					break;
			}
			break;
		case 4:
			switch (iLocal_15)
			{
				case 2:
					*uParam1 = -1254494159;
					*uParam2 = 2;
					return true;
				case 3:
					*uParam1 = 151392176;
					*uParam2 = 3;
					return true;
				case 5:
					*uParam1 = 287555703;
					*uParam2 = 5;
					return true;
				case 6:
					*uParam1 = 253080715;
					*uParam2 = 6;
					return true;
				case 1:
					*uParam1 = 151392176;
					*uParam2 = 3;
					return true;
				default:
					break;
			}
			break;
		case 5:
			switch (iLocal_15)
			{
				case 6:
					*uParam1 = 287555703;
					*uParam2 = 6;
					return true;
				case 4:
					*uParam1 = -1254494159;
					*uParam2 = 4;
					return true;
				case 2:
					*uParam1 = 151392176;
					*uParam2 = 2;
					return true;
				case 3:
					*uParam1 = 151392176;
					*uParam2 = 2;
					return true;
				case 1:
					*uParam1 = 287555703;
					*uParam2 = 6;
					return true;
				default:
					break;
			}
			break;
		case 6:
			switch (iLocal_15)
			{
				case 1:
					*uParam1 = 253080715;
					*uParam2 = 1;
					return true;
				case 4:
					*uParam1 = 151392176;
					*uParam2 = 4;
					return true;
				case 2:
					*uParam1 = 151392176;
					*uParam2 = 4;
					return true;
				case 3:
					*uParam1 = 253080715;
					*uParam2 = 1;
					return true;
				case 5:
					*uParam1 = -1254494159;
					*uParam2 = 5;
					return true;
				default:
					break;
			}
			break;
	}
	return false;
}

bool func_339(int iParam0)
{
	if (iParam0 == 1)
	{
		if (iLocal_17 != iLocal_16)
		{
			return true;
		}
	}
	return false;
}

bool func_340(int iParam0)
{
	if (iParam0 == 1)
	{
		if (func_103(&uLocal_805))
		{
			if (!func_343(&uLocal_805, fVar805))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_341(int iParam0, bool bParam1)
{
	if (((_0x68821369a2ceadd5(iParam0, 287555703) || _0x68821369a2ceadd5(iParam0, 253080715)) || _0x68821369a2ceadd5(iParam0, -1254494159)) || _0x68821369a2ceadd5(iParam0, 151392176))
	{
		if (!bParam1 || !has_anim_event_fired(iParam0, -417316134))
		{
			return true;
		}
	}
	return false;
}

bool func_342(int iParam0, int iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	if (!_0x68821369a2ceadd5(&(iLocal_727[iParam0]), iParam1))
	{
		if (_0x02ebbb3989b7e695(&(iLocal_727[iParam0])))
		{
			_0xd65fdc686a031c83(&(iLocal_727[iParam0]), iParam1, fParam3);
			_0x2208438012482a1a(&(iLocal_727[iParam0]), false, false);
			*uParam2 = get_game_timer() + 500;
		}
	}
	return _0x68821369a2ceadd5(&(iLocal_727[iParam0]), iParam1);
}

bool func_343(var uParam0, float fParam1)
{
	if (!func_103(uParam0))
	{
		return false;
	}
	if (func_28(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_344(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_345(int iParam0, int iParam1, char* sParam2)
{
	func_254((*Local_545[iParam0])[iParam1]->f_6, sParam2, 0);
	(*Local_545[iParam0])[iParam1]->f_5 = sParam2;
}

void func_346()
{
	bVar0 = false;
	if (bVar878)
	{
		if (func_349())
		{
			if (func_156(0))
			{
				func_36(&Global_35, iLocal_727[0], func_35(20), 0);
			}
			else
			{
				func_36(&Global_35, iLocal_727[0], func_35(19), 0);
			}
			func_351();
			func_46(&uLocal_289, 16384);
			bVar0 = true;
		}
		else if (func_350())
		{
			if (func_156(0))
			{
				func_36(&Global_35, iLocal_727[0], func_35(22), 0);
			}
			else
			{
				func_36(&Global_35, iLocal_727[0], func_35(21), 0);
			}
			func_351();
			func_46(&uLocal_289, 33554432);
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		func_143(&uLocal_887);
		func_143(&uLocal_890);
		func_354(&(iLocal_727[0]), 750);
		func_354(&(iLocal_727[1]), 750);
		iLocal_650 = -1;
		iLocal_651 = -1;
		func_49(0);
		iLocal_857 = 4;
	}
}

void func_347()
{
	func_345(0, 0, func_89(7));
	func_345(0, 1, func_89(10));
	func_158((*Local_545[0])[0], 1, 0);
	func_158((*Local_545[0])[1], 1, 0);
	func_561((*Local_545[0])[2], 1);
	func_158((*Local_545[1])[0], 0, 0);
	func_158((*Local_545[1])[1], 0, 0);
	func_561((*Local_545[1])[2], 1);
	func_24(0, 1, 0);
	iLocal_879 = 1;
}

void func_348()
{
	func_562(&(iLocal_727[0]), uLocal_731[0], -1749618580, 580546400, 0, 0);
	func_345(0, 0, "RE_DB_CHALLENGE");
	func_345(0, 1, "RE_INTER_ANTAGONIZE");
	if (func_363())
	{
		func_158((*Local_545[0])[0], 1, 0);
	}
	else
	{
		func_158((*Local_545[0])[0], 0, 0);
	}
	func_158((*Local_545[0])[1], 1, 0);
	func_561((*Local_545[0])[2], 1);
	func_158((*Local_545[1])[0], 0, 0);
	func_158((*Local_545[1])[1], 0, 0);
	func_561((*Local_545[1])[2], 1);
	iLocal_879 = 0;
	iLocal_804 = func_1(2, 0, 0);
	func_24(0, 1, 0);
	func_24(0, 1, 0);
	func_24(1, 1, 0);
}

bool func_349()
{
	if (iVar649 == 0)
	{
		if (iVar648 == 0)
		{
			return true;
		}
	}
	return false;
}

bool func_350()
{
	if (iVar649 == 0)
	{
		if (iVar648 == 1)
		{
			return true;
		}
	}
	return false;
}

void func_351()
{
	iLocal_804 = func_1(3, 0, 0);
	func_24(0, 1, 0);
}

bool func_352(int iParam0)
{
	if (!is_entity_dead(&(iLocal_727[0])))
	{
		if (has_anim_event_fired(&(iLocal_727[0]), 1818372206))
		{
			func_142(2001176446, &(iLocal_727[0]), 1);
		}
	}
	if (iVar492 == iParam0)
	{
		if (iVar492 != 6)
		{
			if (!_0x02ebbb3989b7e695(&(iLocal_727[0])) || !_0x02ebbb3989b7e695(&(iLocal_727[1])))
			{
				return false;
			}
			return true;
		}
	}
	switch (iVar863)
	{
		case 0:
			if (func_563(0))
			{
				if (!is_any_speech_playing(&(iLocal_727[0])))
				{
					if (!is_any_speech_playing(&(iLocal_727[1])))
					{
						if (func_564(iVar492))
						{
							iLocal_866 = 1;
						}
					}
				}
			}
			break;
		case 1:
			if (func_565())
			{
				iLocal_866 = 2;
			}
			break;
		case 2:
			if (func_563(1))
			{
				func_566(iVar492 + 1);
				if (iVar492 != 6)
				{
					iLocal_866 = 0;
				}
				else
				{
					iLocal_866 = 3;
				}
			}
			break;
		case 3:
			return true;
	}
	return false;
}

void func_353()
{
	iLocal_873[0] = 0;
	iLocal_876[0] = 0;
	iLocal_873[1] = 0;
	iLocal_876[1] = 0;
}

void func_354(var uParam0, int iParam1)
{
	stop_current_playing_ambient_speech(uParam0, iParam1);
	stop_current_playing_speech(uParam0, iParam1);
}

bool func_355()
{
	if (!bVar840)
	{
		if (!func_368(0))
		{
			if (iVar856 == 0)
			{
				iLocal_858 = func_567(&uLocal_856);
			}
			if (iVar856 != 0)
			{
				if (func_356(iVar856, iVar856))
				{
					iLocal_17 = iVar854;
					iLocal_16 = iVar854;
					iLocal_842 = 1;
				}
			}
		}
	}
	if (bVar840)
	{
		return func_563(0);
	}
	return false;
}

bool func_356(int iParam0, int iParam1)
{
	if (!&iLocal_876[0])
	{
		if (iParam0 == 0)
		{
			iLocal_876[0] = 1;
		}
		else if (!&iLocal_873[0])
		{
			if (func_342(0, iParam0, &uLocal_799, 1f, 1, 1, 0, 0, 0))
			{
				iLocal_803 = get_game_timer();
				iLocal_873[0] = 1;
			}
		}
		else if (!&iLocal_876[0])
		{
			if (_0x02ebbb3989b7e695(&(iLocal_727[0])))
			{
				iLocal_876[0] = 1;
			}
		}
	}
	if (!&iLocal_876[1])
	{
		if (iParam1 == 0)
		{
			iLocal_876[1] = 1;
		}
		else if (&iLocal_873[0])
		{
			if (get_game_timer() >= iVar799 + 500)
			{
				if (!&iLocal_873[1])
				{
					if (func_342(1, iParam1, &uLocal_800, 1f, 0, 0, 0, 0, 0))
					{
						iLocal_873[1] = 1;
					}
				}
				else if (!&iLocal_876[1])
				{
					if (_0x02ebbb3989b7e695(&(iLocal_727[1])))
					{
						iLocal_876[1] = 1;
					}
				}
			}
		}
	}
	if (iLocal_876[0] || !is_ped_using_any_scenario(&(iLocal_727[0])))
	{
		if (iLocal_876[1] || !is_ped_using_any_scenario(&(iLocal_727[1])))
		{
			func_353();
			iLocal_499 = -988409641;
			return true;
		}
	}
	return false;
}

bool func_357()
{
	if (!bVar842)
	{
		if (func_568())
		{
			if (iVar857 == 0 || iVar858 == 0)
			{
				iLocal_859 = func_569(0, iLocal_16);
				iLocal_860 = func_569(1, iLocal_17);
			}
			if (iVar857 != 0 && iVar858 != 0)
			{
				if (func_356(iVar857, iVar858))
				{
					iLocal_844 = 1;
				}
			}
		}
	}
	if (bVar842)
	{
		return func_563(0);
	}
	return false;
}

void func_358()
{
	iLocal_858 = 0;
	iLocal_842 = 0;
}

bool func_359()
{
	if (!bVar892)
	{
		bLocal_894 = func_356(-1821833035, 1280558562);
	}
	if (bVar892)
	{
		return func_563(1);
	}
	return false;
}

void func_360()
{
	func_150(iLocal_727[0], 0, 0, 1, 0, 0, 0, 1);
	func_150(iLocal_727[1], 0, 0, 1, 0, 0, 0, 1);
	if (func_75(&(iLocal_727[0]), 0, 1))
	{
		clear_ped_tasks(Global_35, 1, 0);
		set_player_control(get_player_index(), true, 0, false);
		clear_ped_tasks(&(iLocal_727[0]), 1, 0);
		func_570(Local_385.f_45, 5f, 0, 0, 0, 0, 0);
		func_570(Local_385.f_42, 5f, 0, 0, 0, 0, 0);
		open_sequence_task(&iVar0);
		task_follow_nav_mesh_to_coord(0, Local_385.f_45, 1f, -1, 0.25f, 0, func_571(Local_385.f_45, Local_385.f_42));
		task_turn_ped_to_face_entity(0, Global_35, -1, -1f, -1f, -1082130432);
		func_153(&(iLocal_727[0]), &iVar0, 0, 0, 1, 1);
		func_138();
		func_54(&uLocal_496, 0);
	}
	func_24(0, 1, 0);
	func_572(0);
	func_24(1, 1, 0);
	func_132(1);
	iLocal_787 = 0;
	iLocal_788 = 0;
	func_573(&Local_19, 0f, 0f, 0f, iVar733, 0, 1114636288);
	func_143(&uLocal_483);
	func_49(1);
	if (func_363() == 0)
	{
		func_364(205, 0);
	}
	else
	{
		func_364(204, 0);
	}
	func_133(2);
}

bool func_361()
{
	if (!func_103(&uLocal_884))
	{
		if (has_anim_event_fired(&(iLocal_727[0]), -1066284769))
		{
			func_143(&uLocal_884);
		}
		return false;
	}
	return func_343(&uLocal_884, 2f);
}

void func_362()
{
	func_345(0, 0, func_89(0));
	func_345(0, 1, func_89(1));
	if (func_363())
	{
		func_158((*Local_545[0])[0], 1, 0);
	}
	else
	{
		func_158((*Local_545[0])[0], 0, 0);
	}
	func_158((*Local_545[0])[1], 1, 0);
	func_158((*Local_545[0])[2], 0, 0);
	iLocal_879 = 0;
	func_158((*Local_545[1])[0], 0, 0);
	func_158((*Local_545[1])[1], 0, 0);
	func_561((*Local_545[1])[2], 1);
	iLocal_804 = func_1(2, 0, 0);
	func_24(0, 1, 0);
	iLocal_880 = 1;
}

bool func_363()
{
	get_current_ped_weapon(Global_35, &iVar0, true, 0, false);
	if (!func_574(&iVar0))
	{
		get_current_ped_weapon(Global_35, &iVar0, true, 3, false);
	}
	if (!func_574(&iVar0))
	{
		get_current_ped_weapon(Global_35, &iVar0, true, 0, false);
	}
	if (!func_574(&iVar0))
	{
		get_current_ped_weapon(Global_35, &iVar0, true, 1, false);
	}
	if (!func_574(&iVar0))
	{
		iVar0 = 0;
	}
	if (!func_574(&iVar0))
	{
		iVar0 = func_575(268435584, 0);
	}
	if (!func_574(&iVar0))
	{
		return false;
	}
	return true;
}

void func_364(int iParam0, bool bParam1)
{
	func_576(iParam0, &iVar0, &iVar1);
	if (!func_577(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_578(iVar0, iVar1);
}

void func_365(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_158((*uParam0)[iVar0], bParam1, bParam2);
		iVar0++;
	}
}

bool func_366(float fParam0, float fParam1)
{
	fVar0 = vdist(Global_36, get_entity_coords(&(iLocal_727[0]), true, false));
	fVar1 = vdist(Global_36, get_entity_coords(&(iLocal_727[1]), true, false));
	if (fVar0 < fParam1 || fVar1 < fParam1)
	{
		return true;
	}
	if (fVar0 < fParam0 || fVar1 < fParam0)
	{
		switch (iLocal_15)
		{
			case 2:
			case 4:
			case 5:
				return true;
			default:
				break;
		}
	}
	return false;
}

void func_367()
{
	iLocal_872 = 0;
}

bool func_368(bool bParam0)
{
	if (func_341(&(iLocal_727[0]), bParam0) || func_341(&(iLocal_727[1]), bParam0))
	{
		return true;
	}
	return false;
}

bool func_369()
{
	if (func_579())
	{
		if (func_563(0))
		{
			return true;
		}
	}
	return false;
}

bool func_370()
{
	if (!bVar879)
	{
		if (!func_368(0))
		{
			if (iVar880 == 0 || iVar881 == 0)
			{
				uLocal_882 = func_580(0, iLocal_16);
				uLocal_883 = func_580(1, iLocal_17);
			}
			if (iVar880 != 0)
			{
				if (iVar881 != 0)
				{
					bLocal_881 = func_356(iVar880, iVar881);
				}
			}
		}
	}
	if (bVar879)
	{
		return func_563(0);
	}
	return false;
}

bool func_371()
{
	return !bVar870;
}

bool func_372(int iParam0, bool bParam1)
{
	if (func_75(iParam0, 0, 1))
	{
		return (is_scripted_speech_playing(iParam0) || (bParam1 && is_any_speech_playing(iParam0)));
	}
	return false;
}

bool func_373(float fParam0)
{
	if (func_581(1))
	{
		return true;
	}
	if (func_103(&uLocal_0) && !func_582(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

void func_374(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_105() - fParam1);
	func_583(uParam0, 1);
	func_584(uParam0, 2);
	uParam0->f_2 = 0f;
}

struct<7> func_375(int iParam0, int iParam1, vector3 vParam2, vector3 vParam5, vector3 vParam8, int iParam11, bool bParam12, var uParam13)
{
	Var0.f_3 = -1;
	Var0.f_6 = 1;
	if (!does_entity_exist(iParam1))
	{
		return Var0;
	}
	if (func_457(vParam8, 0f, 0f, 0f, 1056964608, 1))
	{
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Var0 = _create_volume_cylinder_with_custom_name(vParam2, vParam5, vParam8, func_288());
			break;
		default:
			Var0 = _create_volume_cylinder_with_custom_name(vParam2, vParam5, vParam8, func_288());
			break;
	}
	Var0 = { func_585(iParam0, iParam1, Var0, iParam11, bParam12, uParam13) };
	return Var0;
}

void func_376(char* sParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	func_41(sParam0, iParam1, 0, 1, sParam2, sParam3, sParam4, sParam5, iParam6);
}

float func_377(vector3 vParam0, int iParam3)
{
	return func_140(Global_35, vParam0, iParam3);
}

void func_378(struct<7> Param0, vector3 vParam7)
{
	if (!func_52(Param0))
	{
		return;
	}
	if (func_457(vParam7, 0f, 0f, 0f, 1056964608, 1))
	{
		return;
	}
	if (!_does_volume_exist(Param0))
	{
		return;
	}
	if (does_blip_exist(Param0.f_5))
	{
		set_blip_coords(Param0.f_5, vParam7);
	}
	_0x541b8576615c33de(Param0, vParam7);
}

bool func_379(struct<7> Param0)
{
	if (!func_52(Param0))
	{
		return false;
	}
	if (!does_entity_exist(Param0.f_1))
	{
		return false;
	}
	if (is_entity_dead(Param0.f_1))
	{
		return false;
	}
	vVar0 = { get_entity_coords(Param0.f_1, true, false) };
	if (_0xf256a75210c5c0eb(Param0, vVar0))
	{
		switch (Param0.f_3)
		{
			case 2:
				if (!is_ped_on_mount(get_ped_index_from_entity_index(Param0.f_1)))
				{
					return false;
				}
				break;
			case 4:
				if (!is_ped_sitting_in_any_vehicle(get_ped_index_from_entity_index(Param0.f_1)))
				{
					return false;
				}
				break;
			case 1:
				if (is_ped_sitting_in_any_vehicle(get_ped_index_from_entity_index(Param0.f_1)) || is_ped_on_mount(get_ped_index_from_entity_index(Param0.f_1)))
				{
					return false;
				}
				break;
		}
		return true;
	}
	return false;
}

void func_380()
{
	Global_1357516 = 0;
}

void func_381(var uParam0, var uParam1)
{
	if (is_entity_dead(*uParam1))
	{
		return;
	}
	if (func_171(uParam0, 524288) && _0xa81d24ae0af99a5e(get_player_index()) > 0f)
	{
		iVar2 = func_586(*uParam1, 0, 1, 0);
		if (iVar2 != -1569615261)
		{
			get_ammo_in_clip(*uParam1, &iVar0, iVar2);
			if (iVar0 <= 0)
			{
				_0x6929e22158e52265(*uParam1, 0, &uVar3);
				_0x678f00858980f516(*uParam1, &iVar0, &uVar3);
			}
			iVar1 = get_max_ammo_in_clip(*uParam1, iVar2, true);
		}
		if (iVar0 == iVar1 && func_587(uParam0) == 0)
		{
			set_ped_reset_flag(Global_35, 159, true);
		}
	}
}

void func_382()
{
	disable_control_action(0, 1287709438, false);
	func_588(0);
	Global_1935689->f_6 = 1;
}

bool func_383(var uParam0)
{
	if (func_171(uParam0, 33554432))
	{
		return true;
	}
	if (_0xa24c1d341c6e0d53(0, 0, 0) || is_first_person_aim_cam_active())
	{
		return true;
	}
	return false;
}

void func_384(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_385(vector3 vParam0)
{
	if (!Global_1935630->f_12)
	{
		func_589(vParam0);
		func_590(vParam0);
	}
}

void func_386()
{
	disable_control_action(0, -1450761377, false);
	disable_control_action(0, -771458680, false);
	disable_control_action(1, -1450761377, false);
	disable_control_action(1, -771458680, false);
}

void func_387(int iParam0, float fParam1)
{
	if (!is_entity_dead(Global_35))
	{
		if (!is_ped_on_mount(player_ped_id()))
		{
			set_ped_max_move_blend_ratio(player_ped_id(), fParam1);
		}
		else if (!is_entity_dead(get_mount(player_ped_id())))
		{
			set_ped_max_move_blend_ratio(get_mount(player_ped_id()), fParam1);
		}
	}
	if (!func_591(iParam0, 8))
	{
		disable_control_action(0, -640622144, false);
	}
	if (!func_591(iParam0, 4))
	{
		disable_control_action(0, -485697785, false);
	}
	if (!func_591(iParam0, 16))
	{
		disable_control_action(0, -128997553, false);
		disable_control_action(0, 130948705, false);
		disable_control_action(0, 42190210, false);
	}
	if (!func_591(iParam0, 128))
	{
		disable_control_action(0, -562475458, false);
	}
	if (!func_591(iParam0, 512))
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
	}
	if (!func_591(iParam0, 64))
	{
		disable_control_action(0, -620139643, false);
	}
	if (!(func_592(17) && func_140(Global_35, (*Global_1835011)[17]->f_18, 0) < 10f))
	{
		if (!func_591(iParam0, 2048))
		{
			disable_control_action(0, -822242784, false);
		}
	}
	if (!func_591(iParam0, 4096))
	{
		disable_control_action(0, -1664638556, false);
	}
	if (!is_entity_dead(Global_35))
	{
		if (!func_591(iParam0, 1024))
		{
			set_ped_reset_flag(Global_35, 2, true);
			set_ped_reset_flag(Global_35, 21, true);
		}
		if (!func_591(iParam0, 8))
		{
			set_ped_reset_flag(Global_35, 168, true);
		}
		set_ped_reset_flag(Global_35, 33, true);
		if (!func_591(iParam0, 32))
		{
			if (_get_ped_crouch_movement(Global_35))
			{
				_set_ped_crouch_movement(Global_35, false, 0, false);
			}
		}
	}
}

int func_388(var uParam0, var uParam1)
{
	if (func_383(uParam1))
	{
		return 1;
	}
	if (!func_103(&(uParam1->f_26)))
	{
		func_593(&(uParam1->f_26), 0);
	}
	switch (uParam1->f_59)
	{
		case 0:
			func_400(uParam0, uParam1, 0);
			if (func_3(uParam0->f_88, 2))
			{
				if (does_cam_exist(&(uParam1->f_20[0])))
				{
					detach_cam(&(uParam1->f_20[0]));
					set_cam_active(&(uParam1->f_20[0]), false);
				}
				if (does_cam_exist(&(uParam1->f_20[2])))
				{
					set_cam_active(&(uParam1->f_20[2]), true);
					render_script_cams(true, false, 3000, true, false, 0);
				}
				display_radar(false);
				func_401(uParam1, 3);
			}
			else
			{
				func_594(uParam0, uParam1);
				func_401(uParam1, 1);
			}
			break;
		case 1:
			func_595("DCS: INTRO START TO INTRO END");
			if (does_cam_exist(&(uParam1->f_20[1])))
			{
				set_cam_active(&(uParam1->f_20[1]), true);
			}
			render_script_cams(true, true, uParam0->f_84, true, false, 0);
			func_401(uParam1, 2);
			break;
		case 2:
			func_595("DCS: INTRO START TO INTRO END");
			if (!does_cam_exist(&(uParam1->f_20[1])) || !is_cam_interpolating(&(uParam1->f_20[1])))
			{
				func_595("DCS: INTRO END TO DUEL");
				if (does_cam_exist(&(uParam1->f_20[2])))
				{
					set_cam_active_with_interp(&(uParam1->f_20[2]), &(uParam1->f_20[1]), uParam0->f_85, 1, 1);
				}
				func_401(uParam1, 3);
			}
			break;
		case 3:
			func_595("DCS: INTRO END TO DUEL");
			if ((!does_cam_exist(&(uParam1->f_20[2])) || !is_cam_interpolating(&(uParam1->f_20[2]))) && (!does_cam_exist(&(uParam1->f_20[0])) || !is_cam_interpolating(&(uParam1->f_20[0]))))
			{
				if (!func_3(uParam0->f_88, 1024))
				{
					func_596();
				}
				func_112(&(uParam1->f_26));
				func_401(uParam1, 4);
				func_164();
				func_595("DCS: DUEL");
				return 1;
			}
			break;
		case 4:
			return 1;
	}
	return 0;
}

void func_389(var uParam0, var uParam1)
{
	if (func_383(uParam1))
	{
		return;
	}
	if (&uParam0->f_75[2])
	{
		func_595("DCS: DUEL ATTACHED");
		if (!is_entity_dead(*uParam0))
		{
			vVar6 = { get_entity_coords(*uParam0, true, false) };
			func_597(&vVar6, 1088421888);
		}
		if (!is_entity_dead(uParam0->f_1))
		{
			vVar3 = { get_entity_coords(uParam0->f_1, true, false) };
		}
		if (!func_88(*uParam0->f_51[2]))
		{
			fVar9 = func_398(vVar3, vVar6, 1);
			vVar0 = { _get_object_offset_from_coords(vVar3, fVar9, *uParam0->f_51[2]) };
		}
		else
		{
			fVar9 = func_398(vVar3, vVar6, 1);
			if (func_170(uParam0, 64))
			{
				vVar0 = { _get_object_offset_from_coords(vVar3, fVar9, 0.25f, 0f, 0f) };
			}
			else
			{
				vVar0 = { _get_object_offset_from_coords(vVar3, fVar9, 0.25f, 0f, 1f) };
			}
		}
		if (does_cam_exist(&(uParam1->f_20[2])))
		{
			point_cam_at_coord(&(uParam1->f_20[2]), vVar0);
		}
	}
}

bool func_390(var uParam0, var uParam1)
{
	if (is_entity_dead(*uParam0) && !is_entity_dead(uParam0->f_1))
	{
		func_384(uParam1, 4096);
		return true;
	}
	else if (is_entity_dead(uParam0->f_1) && !is_entity_dead(*uParam0))
	{
		func_384(uParam1, 4096);
		return true;
	}
	return false;
}

bool func_391(var uParam0, var uParam1)
{
	if (!func_3(Global_40.f_9145, 1))
	{
		func_598(uParam0, 4);
		uParam1->f_67 = 1;
		uParam0->f_89 = 3;
	}
	if (uParam0->f_89 == -1)
	{
		uParam0->f_89 = 0;
	}
	if (func_88(uParam0->f_42))
	{
		uParam0->f_42 = { get_entity_coords(*uParam0, true, false) };
	}
	if (func_88(uParam0->f_45))
	{
		uParam0->f_45 = { get_entity_coords(uParam0->f_1, true, false) };
	}
	if (!is_entity_dead(uParam0->f_1))
	{
		set_ped_config_flag(uParam0->f_1, 297, false);
		set_ped_config_flag(uParam0->f_1, 317, false);
		set_ped_config_flag(uParam0->f_1, 392, true);
		set_ped_config_flag(uParam0->f_1, 371, true);
		_0x3c4ae8506638c7e2(get_player_index(), 0);
		if (func_170(uParam0, 65536))
		{
			set_ped_config_flag(uParam0->f_1, 16, true);
			set_ped_can_ragdoll(uParam0->f_1, false);
			set_ped_config_flag(uParam0->f_1, 263, true);
			set_ragdoll_blocking_flags(uParam0->f_1, 4097);
		}
		if (func_170(uParam0, 131072))
		{
			set_ped_config_flag(uParam0->f_1, 263, true);
			set_ragdoll_blocking_flags(uParam0->f_1, 1044479);
		}
		set_ped_using_action_mode(uParam0->f_1, true, -1, 0);
	}
	if (!is_entity_dead(*uParam0))
	{
		if (is_ped_a_player(*uParam0))
		{
			fVar0 = _0xa81d24ae0af99a5e(get_player_index());
			if (fVar0 < 28f)
			{
				func_599(2);
			}
		}
		set_ped_using_action_mode(*uParam0, true, -1, 0);
	}
	func_600(uParam1, uParam0);
	func_601(uParam0, uParam1);
	iVar1 = func_602(Global_35, 1, 2, 0);
	if ((iVar1 == -1569615261 || iVar1 != uParam0->f_48) && !func_171(uParam1, 16777216))
	{
		func_603();
		func_384(uParam1, 16777216);
		func_604(*uParam0, uParam0->f_48, 0, 0, 2, 1, 0, 1056964608, 1065353216, -1, 1, 0, 0, 0);
	}
	set_current_ped_weapon(*uParam0, -1569615261, false, 0, false, false);
	set_current_ped_weapon(*uParam0, -1569615261, false, 1, false, false);
	task_swap_weapon(*uParam0, 1, 1, 0, 0);
	iVar2 = 0;
	if (func_170(uParam0, 512))
	{
		iVar2 = 1;
	}
	if (!func_170(uParam0, 262144))
	{
		set_current_ped_weapon(uParam0->f_1, -1569615261, false, 0, false, false);
		set_current_ped_weapon(uParam0->f_1, -1569615261, false, 1, false, false);
		task_swap_weapon(uParam0->f_1, 1, 1, 0, 0);
		func_604(uParam0->f_1, uParam0->f_49, 0, 0, iVar2, 1, func_170(uParam0, 512), 1056964608, 1065353216, -1, 1, 0, 0, 0);
	}
	func_605(uParam0->f_1);
	if (!func_606(uParam1->f_53))
	{
		uParam1->f_53 = { func_607() };
	}
	if (uParam0->f_50 == -1)
	{
		if (func_170(uParam0, 8))
		{
			if (func_170(uParam0, 512))
			{
				uParam0->f_50 = 34606;
			}
			else
			{
				uParam0->f_50 = 22798;
			}
		}
		else if (func_170(uParam0, 16))
		{
			uParam0->f_50 = 21030;
		}
	}
	if (!_does_item_have_valid_base(*uParam1))
	{
		*uParam1 = create_itemset(true);
	}
	func_608(uParam0, uParam1);
	if (!_does_volume_exist(uParam0->f_87))
	{
		uParam0->f_87 = func_609(uParam0->f_42, uParam0->f_45, 2.5f, 5f, 2f, 0);
		add_to_itemset(uParam0->f_87, *uParam1);
	}
	return true;
}

int func_392(var uParam0, var uParam1)
{
	if (!_text_database_has_loaded("MGDUL"))
	{
		return 0;
	}
	if (!has_anim_dict_loaded("MINI_DUEL@REPOSITION@BASE"))
	{
		return 0;
	}
	if (!has_anim_dict_loaded(uParam1->f_65))
	{
		return 0;
	}
	if (!has_anim_dict_loaded(uParam1->f_66))
	{
		return 0;
	}
	if (!has_anim_dict_loaded("MINI_DUEL@PLAYER@ACTION"))
	{
		return 0;
	}
	if (!has_anim_dict_loaded("MINI_DUEL@PLAYER@NORMAL"))
	{
		return 0;
	}
	return 1;
}

int func_393(var uParam0, var uParam1)
{
	func_395(uParam0, uParam1);
	disable_control_action(0, 130948705, false);
	if (func_170(uParam0, 2))
	{
		return 1;
	}
	fVar0 = func_398(uParam0->f_42, uParam0->f_45, 1);
	iVar1 = 1;
	iVar2 = 1;
	if (!func_457(get_entity_coords(*uParam0, true, false), uParam0->f_42, 0.1f, 0))
	{
		iVar1 = 0;
		if (!func_334(Global_35, 242628503))
		{
			func_173(uParam1, 16384);
		}
	}
	if (!func_170(uParam0, 8388608) && !func_457(get_entity_coords(uParam0->f_1, true, false), uParam0->f_45, 0.1f, 0))
	{
		iVar1 = 0;
		if (!func_334(uParam0->f_1, 242628503))
		{
			func_173(uParam1, 32768);
		}
	}
	if (!func_610(*uParam0, uParam0->f_1, 0.99f))
	{
		if (!func_334(Global_35, 242628503))
		{
			func_173(uParam1, 16384);
		}
		iVar2 = 0;
	}
	if (!func_610(uParam0->f_1, *uParam0, 0.99f))
	{
		if (get_script_task_status(uParam0->f_1, 242628503, true) != 1)
		{
			func_173(uParam1, 32768);
		}
		iVar2 = 0;
	}
	if (iVar1 && iVar2)
	{
		if (func_383(uParam1))
		{
			iVar2 = func_611(uParam1, uParam0);
		}
	}
	if (iVar1 && iVar2)
	{
		clear_ped_tasks(*uParam0, 1, 0);
		if (!func_170(uParam0, 8388608))
		{
			clear_ped_tasks(uParam0->f_1, 1, 0);
		}
		return 1;
	}
	if (!func_171(uParam1, 16384))
	{
		if (is_player_control_on(get_player_index()))
		{
			set_player_control(get_player_index(), false, 4480, false);
		}
		open_sequence_task(&iVar3);
		if (_is_ped_carrying(*uParam0))
		{
			iVar4 = _get_first_entity_ped_is_carrying(*uParam0);
			task_place_carried_entity_at_coord(0, iVar4, get_entity_coords(*uParam0, true, false), 1f, 0);
		}
		task_follow_nav_mesh_to_coord(0, uParam0->f_42, 1f, -1, 0f, 512, fVar0);
		task_turn_ped_to_face_entity(0, uParam0->f_1, 0, -1f, -1f, -1082130432);
		func_153(*uParam0, &iVar3, 0, 0, 1, 1);
		func_384(uParam1, 16384);
	}
	if (!func_171(uParam1, 32768))
	{
		task_swap_weapon(uParam0->f_1, 1, 1, 0, 0);
		if (!func_170(uParam0, 8388608))
		{
			open_sequence_task(&iVar3);
			if (!func_457(get_entity_coords(uParam0->f_1, true, false), uParam0->f_45, 0.1f, 0))
			{
				task_follow_nav_mesh_to_coord(0, uParam0->f_45, 1f, -1, 0f, 512, (fVar0 + 180f));
			}
			task_turn_ped_to_face_entity(0, *uParam0, 0, -1f, -1f, -1082130432);
			func_153(uParam0->f_1, &iVar3, 0, 0, 1, 1);
		}
		func_612(&(uParam1->f_44.f_3), 2);
		func_613(uParam0->f_1, &(uParam1->f_44), 0f, 0f, 0f, 0, 1106247680, 30f, 99999, 4000, 1000, 0f, 1, 1, 1084227584);
		func_384(uParam1, 32768);
	}
	return 0;
}

void func_394(var uParam0, var uParam1, int iParam2)
{
	uParam1->f_57 = iParam2;
	func_614(*uParam0, iParam2);
}

void func_395(var uParam0, var uParam1)
{
	if (!func_171(uParam1, 1024))
	{
		if (func_616(*uParam0, &(uParam0->f_3), func_615(), uParam0->f_86, 1097859072, 2, 1, 0, 0, 1, 1071644672))
		{
			if (does_entity_exist(uParam0->f_3))
			{
				set_ped_config_flag(uParam0->f_3, 136, true);
			}
			func_384(uParam1, 1024);
		}
	}
}

void func_396(var uParam0, var uParam1)
{
	if (is_entity_dead(uParam0->f_1))
	{
		func_48(uParam0, uParam1);
		func_176(uParam1, 9);
	}
	if (_does_volume_exist(uParam0->f_86))
	{
		if (!func_170(uParam0, 32768))
		{
			func_172(0, uParam0, uParam1, -1038090240, 1103626240);
			func_384(uParam1, 2);
		}
	}
	func_617(uParam1, uParam0, *uParam0, uParam0->f_42, uParam0->f_45, uParam0->f_48);
	func_618(uParam1, uParam0, uParam0->f_1, *uParam0, uParam0->f_45, uParam0->f_42, uParam0->f_49);
	Global_19 = 1;
	display_radar(false);
	if (is_screen_faded_out() && !is_screen_faded_in())
	{
		do_screen_fade_in(1000);
	}
	func_619(*uParam0);
	func_384(uParam1, 8);
}

float func_397(var uParam0)
{
	switch (uParam0->f_89)
	{
		case 3:
			return 0.22f;
		case 0:
			return 0.28f;
		case 1:
			return 0.34f;
		case 2:
			return 0.44f;
		case 4:
			return 0.28f;
		default:
			break;
	}
	return 0.25f;
}

float func_398(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

int func_399(char* sParam0, bool bParam1)
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

void func_400(var uParam0, var uParam1, bool bParam2)
{
	if (func_383(uParam1))
	{
		return;
	}
	if (!does_cam_exist(&(uParam1->f_20[2])))
	{
		uParam1->f_20[2] = create_cam("DEFAULT_SCRIPTED_CAMERA", false);
		iVar13 = 1;
	}
	if (does_cam_exist(&(uParam1->f_20[2])) && iVar13 == 1)
	{
		if (!is_entity_dead(*uParam0))
		{
			vVar7 = { get_entity_coords(*uParam0, true, false) };
		}
		if (!func_88(uParam0->f_45))
		{
			vVar10 = { uParam0->f_45 };
		}
		else if (!is_entity_dead(uParam0->f_1))
		{
			vVar10 = { get_entity_coords(uParam0->f_1, true, false) };
		}
		if (!func_88(*uParam0->f_51[2]))
		{
			vVar4 = { *uParam0->f_51[2] };
		}
		else
		{
			vVar4 = { _get_object_offset_from_coords(vVar7, func_398(vVar7, vVar10, 1), 0.8385f, -2.5071f, 0f) };
		}
		set_cam_coord(&(uParam1->f_20[2]), vVar4);
		if (&uParam0->f_75[2])
		{
			attach_cam_to_entity(&(uParam1->f_20[2]), Global_35, vVar4, true);
		}
		if (!func_88(*uParam0->f_61[2]))
		{
			set_cam_rot(&(uParam1->f_20[2]), *uParam0->f_61[2], 2);
		}
		else
		{
			fVar0 = func_398(vVar10, vVar7, 1);
			if (func_170(uParam0, 64))
			{
				vVar1 = { _get_object_offset_from_coords(vVar10, fVar0, 0.25f, 0f, 0f) };
			}
			else
			{
				vVar1 = { _get_object_offset_from_coords(vVar10, fVar0, 0.25f, 0f, 1f) };
			}
			point_cam_at_coord(&(uParam1->f_20[2]), vVar1);
		}
		if (&uParam0->f_71[2] != 0f)
		{
			set_cam_fov(&(uParam1->f_20[2]), &(uParam0->f_71[2]));
		}
		else
		{
			set_cam_fov(&(uParam1->f_20[2]), 17f);
		}
		if (bParam2)
		{
			func_164();
			set_cam_active(&(uParam1->f_20[2]), true);
			render_script_cams(true, false, 3000, true, false, 0);
		}
	}
}

void func_401(var uParam0, int iParam1)
{
	func_143(&(uParam0->f_26));
	uParam0->f_59 = iParam1;
}

bool func_402(var uParam0, var uParam1)
{
	func_620(uParam0, uParam1);
	if (uParam1->f_56 > 0)
	{
		func_621(uParam0, uParam1);
	}
	switch (uParam1->f_56)
	{
		case 0:
			func_386();
			func_389(uParam0, uParam1);
			func_385(get_entity_coords(uParam0->f_1, true, false));
			if (func_170(uParam0, 32) || (!does_cam_exist(&(uParam1->f_20[2])) || !is_cam_interpolating(&(uParam1->f_20[2]))))
			{
				if (!does_entity_exist(uParam0->f_1))
				{
					return true;
				}
				if (!func_170(uParam0, 524288) && !_0xc8b29d18022ea2b7(uParam0->f_1))
				{
					func_618(uParam1, uParam0, uParam0->f_1, *uParam0, uParam0->f_45, uParam0->f_42, uParam0->f_49);
					return false;
				}
				if (_0xc8b29d18022ea2b7(uParam0->f_1))
				{
					_0x3feb770d8ed9047a(uParam0->f_1);
				}
				func_622(uParam0->f_89, uParam1);
				if (_0xc8b29d18022ea2b7(uParam0->f_1))
				{
					_0x30146c25686b7836(uParam0->f_1, -1f);
					_0x59ae5ca4ffb4e378(uParam0->f_1, -1f);
				}
				_0x30146c25686b7836(*uParam0, -1f);
				_0x59ae5ca4ffb4e378(*uParam0, -1f);
				set_player_control(player_id(), true, 0, false);
				set_text_scale(0.5f, 0.5f);
				uParam1->f_69 = _0xbd629c1c4f501c80(0);
				if (uParam1->f_69)
				{
					uParam1->f_24 = func_623("DUEL_HELP_DRAW_GUNSLINGER", 10000, 0, 0, 0, 1);
				}
				else
				{
					uParam1->f_24 = func_623("DUEL_HELP_DRAW_ALT", 10000, 0, 0, 0, 1);
				}
				play_sound_frontend("HUD_DRAW", "HUD_DUEL_SOUNDSET", true, 0);
				if (!func_170(uParam0, 1024))
				{
					_0x94a3c1b804d291ec(Global_35, 1, 0, 1, 1);
					_0x908bb14bce85c80e(Global_35);
					if (!func_170(uParam0, 524288))
					{
						_0x908bb14bce85c80e(uParam0->f_1);
					}
					set_entity_is_target_priority(uParam0->f_1, true, 50f);
					func_164();
					func_143(&(uParam1->f_35));
					uParam1->f_5 = _get_game_timer_non_scaled_clipped();
					if (!func_170(uParam0, 4194304))
					{
						_0x986f7a51ee3e1f92(uParam0->f_1, 1);
					}
					uParam1->f_72 = func_624(uParam0);
					set_ped_can_be_targetted(uParam0->f_1, true);
					set_ped_config_flag(uParam0->f_1, 277, false);
					_0xcc9c4393523833e2(*uParam0, uParam0->f_48, _0xec97101a8f311282(uParam0->f_48));
					set_ammo_in_clip(*uParam0, uParam0->f_48, get_max_ammo_in_clip(*uParam0, uParam0->f_48, true));
					get_current_ped_weapon(*uParam0, &iVar0, true, 3, false);
					if (iVar0 != 0 && iVar0 != -1569615261)
					{
						_0xcc9c4393523833e2(*uParam0, iVar0, _0xec97101a8f311282(iVar0));
						set_ammo_in_clip(*uParam0, iVar0, get_max_ammo_in_clip(*uParam0, iVar0, true));
					}
				}
				func_625(uParam1, 3);
			}
			break;
		case 3:
			func_626(uParam1);
			if (func_627(uParam0, uParam1))
			{
				if (func_628(uParam1->f_24))
				{
					func_629(1);
				}
				func_630(uParam0, uParam1);
			}
			else
			{
				func_386();
				fVar1 = _0xe956c2340a76272e(player_id());
				if (uParam1->f_18 < 0f)
				{
					if (uParam1->f_17 > 0.1f && (fVar1 - uParam1->f_17) == -uParam1->f_17)
					{
						uParam1->f_18 = uParam1->f_17;
					}
				}
				uParam1->f_17 = fVar1;
			}
			func_631(uParam0, uParam1);
			func_632(uParam0, uParam1);
			func_389(uParam0, uParam1);
			if (func_170(uParam0, 33554432))
			{
				if (_0xa54000d4bfd90bde(player_id()) && _0xccd9b77f70d31c9d(player_id()) > 1)
				{
					_0x5b637d6f3b67716a(uParam0->f_1);
					func_598(uParam0, 4194304);
				}
			}
			if (func_633(uParam0, uParam1))
			{
				_remove_all_shocking_events_of_type(1722245163, false);
				func_384(uParam1, 2097152);
				if (func_169(uParam0->f_1, 0))
				{
					clear_ragdoll_blocking_flags(uParam0->f_1, 1);
				}
				if (func_628(uParam1->f_25))
				{
					func_629(1);
				}
				switch (func_587(uParam1))
				{
					case 1:
						uParam1->f_62 = func_4();
						if (func_634(uParam1->f_62))
						{
							func_635(&(uParam0->f_1));
							func_636(uParam1->f_62);
							func_637(get_entity_coords(uParam0->f_1, true, false));
						}
						if (!func_171(uParam1, 1))
						{
							if (func_169(uParam0->f_1, 0))
							{
								set_ped_config_flag(uParam0->f_1, 243, true);
								if (!func_170(uParam0, 65536))
								{
									func_232(uParam0->f_1, 0, 0);
								}
								if (!func_170(uParam0, 4194304))
								{
									_0xe3639db78b3b5400(uParam0->f_1);
								}
							}
							remove_shocking_event(uParam1->f_4);
							uParam1->f_4 = add_shocking_event_at_position(1498498500, get_entity_coords(uParam0->f_1, true, false), -1f, 30f, 30f, -1f, -1f, -1, -1);
							func_384(uParam1, 1);
						}
						func_625(uParam1, 4);
						break;
					case 2:
						if (!func_171(uParam1, 1))
						{
							fVar2 = 0.125f;
							if (func_169(uParam0->f_1, 0))
							{
								_0x5b637d6f3b67716a(uParam0->f_1);
								if (func_638(uParam0, uParam1, 0))
								{
									if (func_602(uParam0->f_1, 1, 0, 0) != -1569615261)
									{
										_0xcef4c65de502d367(uParam0->f_1, 1, 0, 1, 0);
									}
									if (func_170(uParam0, 512))
									{
										_0x89f5e7adecccb49c(uParam0->f_1, "injured_left_arm");
									}
									else
									{
										_0x89f5e7adecccb49c(uParam0->f_1, "injured_right_arm");
									}
									fVar2 = 0.25f;
								}
								if (!func_170(uParam0, 524288))
								{
									if (_0xc8b29d18022ea2b7(uParam0->f_1))
									{
										_0xeed08a3a98b847e2(uParam0->f_1, false, fVar2);
									}
									else
									{
										clear_ped_tasks(uParam0->f_1, 1, 0);
									}
								}
							}
							remove_shocking_event(uParam1->f_4);
							if (!func_170(uParam0, 536870912))
							{
								func_154(13, 0, 0, 0, uParam0->f_1, 0, 1065353216, 0);
							}
							_0xeed08a3a98b847e2(*uParam0, !func_170(uParam0, 256), fVar2);
							func_384(uParam1, 1);
						}
						func_625(uParam1, 5);
						break;
					case 3:
						func_639(uParam1);
						if (!func_171(uParam1, 1))
						{
							if (does_entity_exist(uParam0->f_1) && (func_170(uParam0, 524288) || _0xc8b29d18022ea2b7(uParam0->f_1)))
							{
								if (!func_170(uParam0, 524288))
								{
									_0x748d5e0d2a1a4c61(uParam0->f_1, 2f, 1);
								}
								_0x5b637d6f3b67716a(uParam0->f_1);
								func_384(uParam1, 1);
								set_player_invincible(player_id(), false);
								disable_attribute_overpower(Global_35, 0);
								if (is_player_control_on(player_id()))
								{
									set_player_control(player_id(), false, 4992, false);
								}
							}
							else
							{
								func_394(uParam0, uParam1, 4);
								if (does_entity_exist(uParam0->f_1))
								{
									_0x5b637d6f3b67716a(uParam0->f_1);
									if (!func_3(uParam0->f_88, 128))
									{
										task_combat_ped(uParam0->f_1, *uParam0, 0, 0);
										set_ped_keep_task(uParam0->f_1, true);
									}
								}
								func_640(uParam0, uParam1);
								func_625(uParam1, 8);
							}
						}
						else
						{
							if (func_169(Global_35, 0))
							{
								_0x5b637d6f3b67716a(uParam0->f_1);
								func_641(uParam0, uParam1);
							}
							if (!func_169(*uParam0, 9))
							{
								func_625(uParam1, 6);
							}
						}
						break;
					case 5:
						func_639(uParam1);
						if (!func_170(uParam0, 2097152))
						{
							func_232(uParam0->f_2, 0, 0);
						}
					case 4:
						if (!func_171(uParam1, 1))
						{
							_0xeed08a3a98b847e2(*uParam0, !func_170(uParam0, 256), 1040187392);
							if (does_entity_exist(uParam0->f_1))
							{
								_0x5b637d6f3b67716a(uParam0->f_1);
								if (_0xc8b29d18022ea2b7(uParam0->f_1))
								{
									_0xeed08a3a98b847e2(uParam0->f_1, !func_170(uParam0, 256), 1040187392);
								}
								if (!func_3(uParam0->f_88, 128))
								{
									if (func_3(uParam0->f_88, 16777216))
									{
										set_ped_config_flag(uParam0->f_1, 263, false);
										_0xcef4c65de502d367(uParam0->f_1, 0, 0, 0, 0);
										if (func_602(uParam0->f_1, 1, 0, 0) != -618550132)
										{
											_give_weapon_to_ped_2(uParam0->f_1, -618550132, 1, false, true, 4, false, 0.5f, 1f, 752097756, false, 0f, false);
										}
										if (!func_334(uParam0->f_1, -2055662961))
										{
											set_current_ped_weapon(uParam0->f_1, -618550132, false, 4, true, false);
											task_swap_weapon(uParam0->f_1, 1, 0, 0, 0);
											task_melee(uParam0->f_1, *uParam0, 0, 0, 1, 2f, 1, -1082130432);
										}
									}
									else
									{
										task_combat_ped(uParam0->f_1, *uParam0, 0, 0);
									}
									set_ped_keep_task(uParam0->f_1, true);
								}
							}
							func_384(uParam1, 1);
							func_625(uParam1, 5);
						}
						break;
				}
			}
			break;
		case 5:
			if (func_642(uParam1, uParam0))
			{
				uParam1->f_8 = _get_game_timer_non_scaled_clipped();
				func_625(uParam1, 7);
			}
			break;
		case 4:
			if (func_634(uParam1->f_62))
			{
				func_636(uParam1->f_62);
			}
			if (func_278(Global_35, 0))
			{
				vVar3 = { -1f, 4f, 0.5f };
			}
			else
			{
				vVar3 = { -2f, -4f, 2f };
			}
			if (func_643(uParam0, uParam1, *uParam0, uParam0->f_1, vVar3, 0) && (!func_634(uParam1->f_62) || func_636(uParam1->f_62)))
			{
				func_640(uParam0, uParam1);
				func_625(uParam1, 8);
				return true;
			}
			break;
		case 6:
			func_640(uParam0, uParam1);
			func_625(uParam1, 8);
			return true;
		case 7:
			func_644();
			iVar6 = (_get_game_timer_non_scaled_clipped() - uParam1->f_8);
			if (func_170(uParam0, 4194304) || iVar6 > 1000)
			{
				func_640(uParam0, uParam1);
				func_625(uParam1, 8);
				return true;
			}
			break;
		case 8:
			return true;
	}
	return false;
}

void func_403(var uParam0)
{
	if (is_entity_dead(uParam0->f_1))
	{
		return;
	}
	if (!is_string_null_or_empty(&(uParam0->f_4)) && has_anim_event_fired(uParam0->f_1, get_hash_key(&(uParam0->f_4))))
	{
		func_323(uParam0->f_1, &(uParam0->f_4), 1744022339, 0, 1, 0, 0, 1);
	}
}

void func_404(int iParam0, int iParam1)
{
	func_645(iParam0, iParam1);
}

int func_405()
{
	return Global_1572887->f_12;
}

int func_406(int iParam0)
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

int func_407(int iParam0)
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

void func_408(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_646();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_647(iParam0);
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
	if (func_648(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_157())
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
	Global_40.f_11095.f_35 = func_649(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_646();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_650(iVar1);
		func_652(func_651(), 0, 4000);
		func_653(Global_40.f_11095.f_35);
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
		func_654(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_656(func_655(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (does_entity_exist(iParam5))
			{
				decor_set_int(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_407(14))
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
					sParam4 = func_657(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_658(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_658(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_656(func_655(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_407(4))
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
					sParam4 = func_657(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_658(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_658(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_655(-1990689970) };
	stat_id_set_int(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		_0xe6b763c7f4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_659(10, 1);
	}
}

void func_409(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

bool func_410(int iParam0, bool bParam1)
{
	switch (func_660(iParam0))
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

bool func_411(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

void func_412(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

void func_413(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_252(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_474(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_661(iVar0);
	*uParam0 = 0;
}

char* func_414(char* sParam0)
{
	return sParam0;
}

bool func_415(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		return false;
	}
	return false;
}

void func_416()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

var func_417(var uParam0, var uParam1, var uParam2)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

bool func_418(int iParam0)
{
	return iParam0 != 0;
}

void func_419(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	if (!func_662(iParam0))
	{
		return;
	}
	iVar0 = func_663(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_664(iVar0);
	func_665(iVar0);
	iVar1 = get_id_of_this_thread();
	iVar2 = func_666(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_667(iVar0))
		{
			return;
		}
	}
	func_668(iVar0);
	set_ped_keep_task(iParam0, true);
	if (bParam1 && func_405() == -1)
	{
		if (!_0x88ad6cc10d8d35b2(iParam0))
		{
			set_entity_as_mission_entity(iParam0, true, true);
		}
	}
}

void func_420(int iParam0, var uParam1)
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
				if (func_243(uParam1[iVar0]))
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

bool func_421(int iParam0, int iParam1)
{
	if (!func_422(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_15614[iParam0] && iParam1) != 0;
}

bool func_422(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

int func_423(int iParam0, float fParam1, bool bParam2, bool bParam3)
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

int func_424(int iParam0)
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

void func_425(int* iParam0)
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

void func_426(int iParam0)
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

void func_427(var uParam0)
{
	if (func_252(uParam0->f_162))
	{
		func_413(&(uParam0->f_162), 1, 1);
	}
	if (func_252(uParam0->f_163))
	{
		func_413(&(uParam0->f_163), 1, 1);
	}
	if (func_252(uParam0->f_164))
	{
		func_413(&(uParam0->f_164), 1, 1);
	}
	if (func_252(uParam0->f_165))
	{
		func_413(&(uParam0->f_165), 1, 1);
	}
}

void func_428(var uParam0)
{
	if (uParam0->f_170)
	{
		func_669();
	}
}

void func_429(var uParam0)
{
	if (uParam0->f_48 && !uParam0->f_45)
	{
		func_670(32);
		func_432(uParam0->f_3, 1, 0, 0, 2, 0, 0, 1);
	}
}

bool func_430(var uParam0)
{
	if (func_671(uParam0) || uParam0->f_44)
	{
		uParam0->f_44 = 1;
		func_672(uParam0->f_3);
		func_263(uParam0, 0, 1);
		func_673(uParam0->f_3, uParam0->f_51.f_5, 0, uParam0->f_43, -1);
		func_674(0, 0);
		return true;
	}
	return false;
}

bool func_431(int iParam0)
{
	if (!func_218(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0]->f_4 > 0;
}

void func_432(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_327(iParam0) == 1 && bParam7)
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
	if ((bParam1 || bParam6) || func_405() != -1)
	{
		Global_17504.f_42[iParam0]->f_4 = 0;
	}
	Global_17504.f_42[iParam0]->f_4 = (Global_17504.f_42[iParam0]->f_4 + iVar0);
}

int func_433()
{
	switch (func_405())
	{
		case 0:
			return get_player_ped(player_id());
		default:
			break;
	}
	return Global_35;
}

bool func_434(int iParam0, int iParam1)
{
	if (func_675(iParam0, 1, 1))
	{
		return func_86(Global_1955500[iParam0], iParam1);
	}
	return false;
}

void func_435(int iParam0)
{
	func_46(&(Global_1935369->f_39), iParam0);
}

void func_436(int iParam0)
{
	func_47(&(Global_1935369->f_39), iParam0);
}

int func_437(int iParam0)
{
	iVar1 = iParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_645(&iVar1, -2147483648);
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

int func_438()
{
	return get_player_group(get_player_index());
}

bool func_439(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_405() != -1)
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

void func_440(var uParam0)
{
	if (*uParam0 != 0)
	{
		request_model(*uParam0, false);
	}
}

bool func_441(int iParam0)
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

int func_442(int iParam0)
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

int func_443(int iParam0)
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

bool func_444(int iParam0, int iParam1, var uParam2)
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

Vector3 func_445(int iParam0, var uParam1)
{
	iVar1 = -1;
	if (does_entity_exist(iParam0))
	{
		vVar2 = { get_entity_coords(iParam0, true, false) };
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!func_88(*(*uParam1)[iVar0]))
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

void func_446(var uParam0, bool bParam1)
{
	if (!does_blip_exist(uParam0->f_6))
	{
		uParam0->f_6 = _blip_add_for_coord(-1702907713, *uParam0);
		_blip_set_modifier(uParam0->f_6, 580546400);
		set_blip_name_from_text_file(uParam0->f_6, "BLIP_DEBUG");
		if (bParam1)
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_41("BEAT_GLB", 5500, 0, 1, 0, 0, -1, -1, 0);
		}
		_0x9851de7aec10b4e1(*uParam0, 100f, 1, 0);
	}
}

bool func_447(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_448(vector3 vParam0, float fParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (!bParam8 && network_is_game_in_progress())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_88(vParam0))
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
		if (func_285(vParam0))
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
	func_676(iVar0, bParam8);
	return iVar0;
}

void func_449(int iParam0)
{
	if (!func_218(iParam0))
	{
		return;
	}
	func_677(iParam0);
}

void func_450(var uParam0, vector3 vParam1)
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

int func_451(int iParam0)
{
	if (func_96(iParam0, 2))
	{
		return 200;
	}
	if (func_96(iParam0, 4))
	{
		return 70;
	}
	if (func_96(iParam0, 32))
	{
		return 400;
	}
	return 110;
}

int func_452(int iParam0)
{
	if (func_64(iParam0, 131072))
	{
		return 0;
	}
	else
	{
		if (iParam0 == 6)
		{
			if (func_481() == 8)
			{
				return 3;
			}
		}
		bVar0 = func_64(iParam0, 2);
		bVar1 = func_64(iParam0, 1);
		bVar2 = (bVar0 && bVar1);
		if (bVar2)
		{
			if (!func_268())
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

void func_453(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
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
	if (func_96(iParam3, 2097152))
	{
		*fParam0 = (*fParam0 + 15f);
		*iParam2 = ceil((*fParam0 + 50f));
	}
	else
	{
		*iParam2 = 70;
	}
}

void func_454(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
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
	if (func_96(iParam3, 2))
	{
		*fParam0 = (*fParam0 + 60f);
		*fParam1 = (*fParam1 + 60f);
		*iParam2 = ceil((*fParam0 + 110f));
	}
	else if (func_96(iParam3, 2097152))
	{
		*fParam0 = (*fParam0 + 30f);
		*iParam2 = ceil((*fParam0 + 30f));
	}
	else
	{
		*iParam2 = 70;
	}
}

bool func_455(int iParam0, int iParam1)
{
	iVar0 = (func_443(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_17504.f_12[iVar1]), iVar2);
}

bool func_456(int iParam0, vector3 vParam1, float fParam4, float fParam5)
{
	if (func_88(vParam1))
	{
		return false;
	}
	if (func_461(iParam0, vParam1))
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
	if (func_117(iParam0))
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

bool func_457(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_458(int iParam0, vector3 vParam1, int iParam4, float fParam5, bool bParam6, int iParam7)
{
	fVar0 = func_185(bParam6, iParam7, vdist(vParam1, get_entity_coords(iParam0, true, false)));
	if (!iParam4->f_1)
	{
		if (fVar0 < iParam4->f_2 || (func_464(vParam1, iParam0) && get_entity_speed(iParam0) > fParam5))
		{
			*iParam4 = func_109();
			iParam4->f_2 = func_140(iParam0, vParam1, 1);
			iParam4->f_1 = 1;
		}
	}
	else if (fVar0 > iParam4->f_2 || (!func_464(vParam1, iParam0) && get_entity_speed(iParam0) > fParam5))
	{
		*iParam4 = func_109();
		iParam4->f_2 = func_140(iParam0, vParam1, 1);
		iParam4->f_1 = 0;
	}
}

bool func_459(var uParam0, int iParam1)
{
	if (uParam0->f_1 == 1)
	{
		return (func_109() - *uParam0) >= iParam1;
	}
	return false;
}

int func_460(var uParam0)
{
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_88(*uParam0->f_12[iVar0]))
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

bool func_461(int iParam0, vector3 vParam1)
{
	if (!func_64(iParam0, 1))
	{
		iVar0 = 1;
	}
	if (func_678(vParam1, 0, 0, iVar0))
	{
		return true;
	}
	if (func_64(iParam0, 33554432))
	{
		if (func_679(vParam1, 200f, 1, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_462(int iParam0, var uParam1)
{
	iVar0 = 1;
	if (func_96(iParam0, 128))
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
	if (func_64(iParam0, 1) && !func_64(iParam0, 2))
	{
		if (func_64(iParam0, 4096) || func_64(iParam0, 2048))
		{
			if (func_680(*uParam1))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

bool func_463(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	uVar0 = func_2(&uParam0);
	if (!func_681())
	{
		return false;
	}
	return true;
}

bool func_464(vector3 vParam0, int iParam3)
{
	if (is_entity_dead(iParam3))
	{
		return false;
	}
	vVar0 = { get_entity_forward_vector(iParam3) };
	return func_682(vVar0, vParam0) > func_682(vVar0, get_entity_coords(iParam3, true, false));
}

bool func_465(int iParam0)
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

int func_466(int iParam0)
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

int func_467()
{
	return -1518995632;
}

bool func_468(var uParam0)
{
	return func_86(*uParam0, 1);
}

void func_469(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_683(iParam1))
		{
			func_684(iParam0, 41788943);
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
			func_685(iParam0, 0, 1);
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
			func_686(iParam0, 0);
			bVar0 = true;
		}
		func_687(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

int func_470(int iParam0)
{
	if (!func_246(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_471(int iParam0, int iParam1)
{
	if (!func_246(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_688(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_689("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_690(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_242(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_691(iVar1);
				return true;
			}
			iVar3++;
		}
		func_691(iVar1);
	}
	return false;
}

int func_472(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_246(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_470(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_688(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_692(iParam0, 0);
	}
	uVar2 = _0xe787f05dfc977bde(func_693(bParam2), iParam0, 0);
	return uVar2;
}

bool func_473(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_474(int iParam0)
{
	return iParam0;
}

void func_475(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_476(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_694(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_477(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_478(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

int func_479(int iParam0)
{
	if (iParam0 == -1)
	{
		iVar0 = func_695(1);
	}
	else
	{
		iVar0 = func_696(iParam0);
	}
	return iVar0;
}

void func_480(int iParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		iVar0 = func_697(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_698(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2] = &Global_17504.f_2205[iVar2] + 1;
	}
}

int func_481()
{
	return Global_1897952->f_41;
}

void func_482(int iParam0, int iParam1)
{
	if (iParam1 != -1 && !func_96(iParam0, 8192))
	{
		iVar0 = func_698(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0] = &Global_17504.f_2205[iVar0] + 1;
	}
}

void func_483(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	func_432(iParam0, bParam3, round((fVar0 * fParam2)), round((fVar1 * fParam2)), round((fVar2 * fParam2)), round((fVar3 * fParam2)), bParam4, 1);
}

void func_484(int iParam0, bool bParam1)
{
	iVar0 = 1;
	if (bParam1)
	{
		iVar0 = 3;
	}
	if (func_64(iParam0, 262144))
	{
		if (Global_1392135->f_3 == -1)
		{
			func_699(262144, iVar0, 0, 1);
		}
	}
	if (func_64(iParam0, 128))
	{
		func_699(128, iVar0, 0, 1);
	}
	else if (func_64(iParam0, 524288))
	{
		func_699(524288, iVar0, 0, 1);
	}
	else if (func_64(iParam0, 536870912))
	{
		func_699(536870912, iVar0, 0, 1);
	}
	else if (func_64(iParam0, 4194304))
	{
		func_699(4194304, iVar0, 0, 1);
	}
	else if (func_64(iParam0, 8388608))
	{
		func_699(8388608, iVar0, 0, 1);
	}
}

void func_485(int iParam0)
{
	Global_1310750->f_16077 = get_id_of_this_thread();
	Global_1310750->f_16071 = iParam0;
}

int func_486(bool bParam0)
{
	if (!bParam0 && func_700(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

int func_487()
{
	return Global_1310750->f_16037;
}

bool func_488(int iParam0)
{
	if (!func_218(iParam0))
	{
		return false;
	}
	return (*Global_1310750)[iParam0]->f_47;
}

void func_489(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_218(&(Global_1310750->f_13321[iParam0])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0];
	force_cleanup_for_thread_with_this_id(Global_1310750->f_13321[iParam0]->f_5, 523);
	(*Global_1310750)[iVar0]->f_48 = 0;
	func_701(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_490(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_702(Global_1393447, 1);
	func_703();
	func_704();
	func_705((to_float(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135->f_54 = (func_109() / 1000);
		if (Global_1392135->f_1 & 4 != 0)
		{
			Global_1392135->f_1 = (Global_1392135->f_1 - Global_1392135->f_1 & 4);
		}
		func_706();
		if (iParam1 == -1)
		{
			if (func_3(iParam0, 1))
			{
				func_699(16777216, 2, 0, 1);
				iVar0 = floor(240f);
			}
			else if (func_3(iParam0, 2))
			{
				func_699(16777216, 0, 0, 1);
				iVar0 = floor(60f);
			}
			else if (func_3(iParam0, 4))
			{
				func_699(16777216, 5, 0, 1);
				iVar0 = floor(900f);
			}
			Global_1392135->f_4 = (Global_1392135->f_54 + iVar0);
		}
		else
		{
			func_707(iParam1, iParam2, iParam3, iParam4);
			Global_1392135->f_5[iParam1] = (((Global_1392135->f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_708(to_float(iVar0), 1, 0);
	}
	else
	{
		func_708((to_float(200) / 3f), 1, 0);
	}
}

bool func_491(int iParam0, int iParam1)
{
	return (Global_40.f_9571[iParam1] && iParam0) != 0;
}

void func_492(int iParam0, int iParam1)
{
	(*Global_1392050)[iParam1]->f_1 = ((*Global_1392050)[iParam1]->f_1 - ((*Global_1392050)[iParam1]->f_1 && iParam0));
}

void func_493(int iParam0, int iParam1)
{
	Global_40.f_9571[iParam1] = (Global_40.f_9571[iParam1] || iParam0);
}

int func_494(int iParam0)
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

bool func_495()
{
	return (Global_1935630->f_44 == -160924582 && is_first_person_aim_cam_active());
}

bool func_496(var uParam0, float fParam1, float fParam2, int iParam3)
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

bool func_497(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_496(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (func_105() - 0.02f);
		}
		return true;
	}
	uParam0->f_8 = 0f;
	return false;
}

int func_498(bool bParam0, bool bParam1, bool bParam2)
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

int func_499()
{
	return &Global_1899515;
}

int func_500(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

bool func_501(int iParam0)
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

bool func_502(int iParam0)
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

bool func_503(int iParam0)
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

bool func_504(int iParam0)
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

bool func_505(int iParam0)
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

bool func_506(int iParam0)
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

bool func_507(int iParam0)
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

bool func_508(bool bParam0, int iParam1, int iParam2)
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

bool func_509()
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

int func_510(int iParam0)
{
	if (!func_513(iParam0))
	{
		return -1;
	}
	return func_710(func_709(iParam0));
}

bool func_511(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_512(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_513(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_514(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_515(int iParam0)
{
	return func_64(iParam0, Global_1310750->f_16072 | 64);
}

int func_516(int iParam0)
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

int func_517(int iParam0)
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

bool func_518(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_519(int iParam0)
{
	return ((Global_1310750[iParam0] != 0 && !is_string_null_or_empty(&((*Global_1310750)[iParam0]->f_40))) && get_length_of_literal_string(&((*Global_1310750)[iParam0]->f_40)) != 0);
}

void func_520(int iParam0)
{
	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_711();
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
			func_712(&(Global_1935630->f_34), &(Global_1935630->f_39));
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

var func_521(int iParam0)
{
	return &(Global_1109400->f_276[iParam0]);
}

bool func_522(int iParam0)
{
	iVar0 = Global_1935630->f_40;
	if (func_405() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_713(iParam0);
		}
	}
	else if (!does_entity_exist(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_713(iParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_548(iVar0) == -1)
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

void func_523(int iParam0)
{
	if (*iParam0 & 8 != 0 || *iParam0 & 16 != 0)
	{
		func_714(iParam0);
	}
}

bool func_524(int iParam0, int iParam1, int iParam2)
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
		iVar1 = func_548(iParam2);
	}
	else
	{
		iVar1 = func_547(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_548(iParam0);
	}
	else
	{
		iVar0 = func_547(iParam0);
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

float func_525(int iParam0, int iParam1)
{
	return func_32(iParam0, iParam1, 1, 1);
}

float func_526(int iParam0)
{
	return iParam0->f_26;
}

bool func_527(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

bool func_528(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_32(iVar0, iParam0, 1, 1) <= 4f)
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
		if (_is_weapon_sniper(func_715(iVar0, 0)))
		{
			if (func_716(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_529(int iParam0)
{
	return iParam0->f_17;
}

bool func_530(int iParam0, int iParam1, float fParam2, float fParam3)
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

int func_531(int iParam0)
{
	return iParam0->f_18;
}

bool func_532(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (_is_weapon_sniper(func_715(iVar0, 0)))
		{
			if (func_717(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_533(int iParam0)
{
	return iParam0->f_23;
}

int func_534(int iParam0)
{
	return iParam0->f_21;
}

int func_535(int iParam0)
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

bool func_536(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_718(iParam0, vParam4, 0.5f))
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

int func_537(int iParam0)
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
	if (func_719(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_538(int iParam0)
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

bool func_539(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_275(iParam1))
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

bool func_540(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_275(iParam1))
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

bool func_541(int iParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = 40f;
	if (func_275(iParam1))
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

bool func_542(int iParam0, int iParam1)
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

bool func_543(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (func_602(iParam0, 1, 0, 0) != 2055893578)
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

bool func_544(int iParam0)
{
	return !*iParam0 & 2 != 0;
}

bool func_545(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_140(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_546(int iParam0)
{
	return iParam0->f_24;
}

int func_547(int iParam0)
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

int func_548(int iParam0)
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

int func_549(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_542(Global_35, &iVar1))
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
		fVar2 = func_32(iParam0, player_ped_id(), 0, 1);
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
		if (func_32(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

bool func_550(int iParam0, int iParam1, bool bParam2)
{
	func_508(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_551(iParam1, iVar0))
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
				if (!bParam2 || !func_551(iParam1, iVar1))
				{
					if (func_140(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_551(int iParam0, int iParam1)
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

int func_552(int iParam0)
{
	return iParam0->f_20;
}

int func_553(int iParam0, int iParam1, bool bParam2, float fParam3)
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

bool func_554(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

void func_555(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

int func_556(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	if (!is_entity_dead(*uParam0))
	{
		func_555(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !_does_volume_exist(iParam9)) || is_entity_in_volume(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (is_ambient_speech_playing(*uParam0) || is_scripted_speech_playing(*uParam0));
		fVar8 = func_185(fParam12 >= 0f, fParam12, vdist(Global_36, get_entity_coords(*uParam0, true, false)));
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
			func_143(&(iParam1->f_13));
		}
		if (func_720(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_721(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_556(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_722(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!get_ped_config_flag(*uParam0, 317, true))
						{
							func_723(*uParam0, 1, 1);
						}
					}
					else if (func_724(iParam1, 22))
					{
						func_723(*uParam0, 0, 1);
					}
				}
				if (func_725(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_726(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_727(iParam8);
					if (func_728(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (is_bit_set(uParam3[iParam1->f_1], 20))
								{
									func_729(uParam3);
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
					func_730(iParam1, uParam3, fVar8);
					if (func_731(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (is_bit_set(*iParam1, 1))
					{
						func_732(uParam3, 0, 0, 1, 1);
						clear_bit(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_733(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_725(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_734(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_728(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_726(uParam0, func_725(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_727(iParam8);
				}
				else if (is_bit_set(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_732(uParam3, 0, 0, 1, 1);
					}
					func_735(iParam1, 1);
				}
				func_730(iParam1, uParam3, fVar8);
				if (func_733(uParam0, iParam1, fParam4, bVar6))
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
			func_736(iParam1, uParam3);
			set_bit(iParam1, 3);
		}
	}
	return -1;
}

void func_557(int* iParam0, var uParam1, var uParam2)
{
	iVar0 = func_737(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (*uParam1)[iVar0]->f_13;
		iVar2 = (*uParam1)[iVar0]->f_15;
		if (!is_string_null_or_empty(sVar1))
		{
			func_145(Global_35, *uParam2, sVar1, "", -1082130432, iVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_558(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_405() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_40.f_7832[iVar1]), iVar2);
}

bool func_559(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

int func_560(int iParam0, vector3 vParam1, float fParam4)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		vVar0 = { get_entity_coords(iParam0, false, false) };
		vVar3 = { get_entity_forward_vector(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_738(vVar3, vVar6);
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
	if (func_739(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

void func_561(int* iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_411(iParam0, 4))
		{
			func_413(&(iParam0->f_6), 1, 1);
			func_344(iParam0, 4);
		}
	}
	else if (func_411(iParam0, 4))
	{
		func_412(iParam0, 4);
		func_344(iParam0, 14);
	}
}

void func_562(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
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

bool func_563(bool bParam0)
{
	if (!_0x02ebbb3989b7e695(&(iLocal_727[0])))
	{
		if (!bParam0 || !has_anim_event_fired(&(iLocal_727[0]), -417316134))
		{
			return false;
		}
	}
	if (!_0x02ebbb3989b7e695(&(iLocal_727[1])))
	{
		if (!bParam0 || !has_anim_event_fired(&(iLocal_727[1]), -417316134))
		{
			return false;
		}
	}
	return true;
}

bool func_564(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			iLocal_867 = 1016348355;
			iLocal_868 = 1016348355;
			break;
		case 1:
			iLocal_867 = -1945412176;
			iLocal_868 = -1945412176;
			break;
		case 2:
			iLocal_867 = 1092601818;
			iLocal_868 = 1092601818;
			break;
		case 3:
			iLocal_867 = 710908506;
			iLocal_868 = 710908506;
			break;
		case 4:
			iLocal_867 = 1939713237;
			iLocal_868 = -637303560;
			break;
		case 5:
			iLocal_867 = -1095023857;
			iLocal_868 = 1868033692;
			break;
		case 6:
			return false;
	}
	return true;
}

bool func_565()
{
	if (!&iLocal_869[0])
	{
		if (func_342(0, iVar865, &uLocal_799, 1f, 0, 1, 1, 0, 0))
		{
			iLocal_869[0] = 1;
		}
	}
	if (!&iLocal_869[1])
	{
		if (func_342(1, iVar866, &uLocal_800, 1f, 0, 1, 1, 0, 0))
		{
			iLocal_869[1] = 1;
		}
	}
	if (&iLocal_869[0])
	{
		if (&iLocal_869[1])
		{
			func_740();
			return true;
		}
	}
	return false;
}

void func_566(int iParam0)
{
	iLocal_495 = iParam0;
}

int func_567(var uParam0)
{
	switch (iLocal_15)
	{
		case 1:
		case 3:
			*uParam0 = 3;
			return -306749922;
		case 2:
			*uParam0 = 2;
			return 446989954;
		case 4:
			*uParam0 = 4;
			return -1667843202;
		case 5:
			*uParam0 = 5;
			return 1472693064;
		case 6:
			*uParam0 = 6;
			return -1180043876;
		default:
			break;
	}
	*uParam0 = 4;
	return -1667843202;
}

bool func_568()
{
	uVar0 = func_741(0, &uLocal_799, &iLocal_16);
	uVar1 = func_741(1, &uLocal_800, &iLocal_17);
	return (uVar0 && uVar1);
}

int func_569(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 4:
					iVar0 = 267478604;
					break;
				case 2:
					iVar0 = 1156017282;
					break;
				case 1:
				case 3:
					iVar0 = 886288400;
					break;
				case 5:
					iVar0 = -1670932405;
					break;
				case 6:
					iVar0 = 2102051097;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 4:
					iVar0 = 1902170138;
					break;
				case 2:
					iVar0 = 1156017282;
					break;
				case 1:
				case 3:
					iVar0 = 232581792;
					break;
				case 5:
					iVar0 = -1670932405;
					break;
				case 6:
					iVar0 = 1970728267;
					break;
			}
			break;
	}
	return iVar0;
}

void func_570(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 8;
	if (bParam4)
	{
		iVar0 |= 72;
	}
	if (bParam5)
	{
		iVar0 |= 131072;
	}
	if (bParam6)
	{
		iVar0 |= 24;
	}
	if (bParam7)
	{
		iVar0 |= 40;
	}
	if (bParam8)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

float func_571(vector3 vParam0, vector3 vParam3)
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

void func_572(int iParam0)
{
	func_345(iParam0, 0, func_89(7));
	func_345(iParam0, 1, func_89(30));
	func_158((*Local_545[iParam0])[0], 0, 0);
	func_158((*Local_545[iParam0])[1], 1, 0);
	func_158((*Local_545[iParam0])[2], 0, 0);
}

void func_573(var uParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6)
{
	if (_does_volume_exist(iParam4))
	{
		func_742(iParam5, func_198(1), iParam4, vParam1, 1069547520, 1075838976, 1056964608, 0, iParam6, 1);
	}
	else
	{
		func_743(iParam5, func_198(1), vParam1, uParam0->f_51, 1069547520, 1075838976, 1056964608, 0, iParam6, 1);
	}
	func_744(iParam5);
	uParam0->f_170 = 1;
}

bool func_574(int iParam0)
{
	if (!is_weapon_valid(*iParam0))
	{
		return false;
	}
	if (*iParam0 == -1569615261)
	{
		return false;
	}
	if (_is_weapon_shotgun(*iParam0))
	{
		return false;
	}
	if (_is_weapon_pistol(*iParam0) || _is_weapon_revolver(*iParam0))
	{
		return true;
	}
	return false;
}

int func_575(int iParam0, int iParam1)
{
	return func_745(&uVar0, iParam0, iParam1);
}

void func_576(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_577(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_746(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_747(iParam0))
	{
		return false;
	}
	if (func_748(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_749(iParam0, 1)) || func_750(32768))
	{
		if (!func_749(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_751())
	{
		return false;
	}
	return true;
}

void func_578(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_579()
{
	iLocal_841 = 1;
	iLocal_872 = 1;
	if (!is_ped_using_any_scenario(&(iLocal_727[0])))
	{
		if (!is_ped_using_any_scenario(&(iLocal_727[1])))
		{
			return true;
		}
	}
	bVar0 = func_752(0, 3);
	bVar1 = func_752(1, 2);
	if (bVar0 && bVar1)
	{
		iLocal_809[0] = 0;
		iLocal_809[1] = 0;
		func_112(vLocal_812[0]);
		func_112(vLocal_812[1]);
		return true;
	}
	return false;
}

var func_580(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 4:
			return func_753(iParam0, 267478604, 1902170138);
		case 1:
		case 3:
			return func_753(iParam0, 886288400, 232581792);
		case 2:
			return func_753(iParam0, 1156017282, 1156017282);
		case 6:
			return func_753(iParam0, 2102051097, 1970728267);
		case 5:
			return func_753(iParam0, -1670932405, -1670932405);
		default:
			break;
	}
	return func_753(iParam0, 267478604, 1902170138);
}

bool func_581(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

bool func_582(var uParam0, float fParam1)
{
	if (func_343(uParam0, fParam1))
	{
		func_112(uParam0);
		return true;
	}
	return false;
}

void func_583(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_584(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

struct<7> func_585(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, var uParam5)
{
	Var0.f_3 = -1;
	Var0.f_6 = 1;
	if (!_does_volume_exist(iParam2))
	{
		return Var0;
	}
	if (!does_entity_exist(iParam1))
	{
		return Var0;
	}
	Var0 = iParam2;
	if (_does_volume_exist(Var0))
	{
		Var0.f_1 = iParam1;
		Var0.f_2 = iParam0;
		Var0.f_3 = iParam3;
		if (bParam4)
		{
			Var0.f_5 = _blip_add_for_coord(408396114, _0xf70f00013a62f866(Var0));
		}
		Var0.f_4 = 0;
		Var0.f_6 = uParam5;
		return Var0;
	}
	return Var0;
}

int func_586(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_587(var uParam0)
{
	return uParam0->f_57;
}

void func_588(bool bParam0)
{
	if (bParam0)
	{
		Global_1935689 = 1;
	}
	else
	{
		Global_1935689 = 2;
	}
}

void func_589(vector3 vParam0)
{
	if (!Global_1935630->f_12)
	{
		vVar1 = { get_offset_from_entity_given_world_coords(Global_35, vParam0) };
		fVar0 = get_heading_from_vector_2d(vVar1.x, vVar1.y);
		set_gameplay_cam_relative_heading(fVar0, 1f);
		_0x05bd5e4088b30a66(-180f, 180f);
	}
}

void func_590(vector3 vParam0)
{
	if (!Global_1935630->f_12)
	{
		vVar0 = { get_offset_from_entity_given_world_coords(Global_35, vParam0) };
		fVar3 = atan((vVar0.z / sqrt(((vVar0.y * vVar0.y) + (vVar0.x * vVar0.x)))));
		set_gameplay_cam_relative_pitch(fVar3, 1f);
	}
}

bool func_591(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_592(int iParam0)
{
	if (!func_754(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_1879534->f_7300)
	{
		if (!is_bit_set(&(Global_1879534->f_7301.f_2[iVar0]), 2))
		{
			if (is_bit_set(&(Global_1879534->f_7301.f_2[iVar0]), 1))
			{
				switch (&Global_1879534->f_1911[Global_1879534->f_7301.f_2[iVar0]->f_1])
				{
					case -2093459088:
						if (Global_1879534->f_1911[Global_1879534->f_7301.f_2[iVar0]->f_1]->f_2 == iParam0)
						{
							return true;
						}
						break;
				}
			}
		}
		iVar0++;
	}
	return false;
}

void func_593(var uParam0, bool bParam1)
{
	if (bParam1 || !func_103(uParam0))
	{
		func_143(uParam0);
	}
}

void func_594(var uParam0, var uParam1)
{
	fVar10 = func_398(uParam0->f_45, uParam0->f_42, 1);
	if (func_170(uParam0, 64))
	{
		vVar3 = { _get_object_offset_from_coords(uParam0->f_45, fVar10, 0.25f, 0f, 0f) };
	}
	else
	{
		vVar3 = { _get_object_offset_from_coords(uParam0->f_45, fVar10, 0.25f, 0f, 1f) };
	}
	if (!func_3(uParam0->f_88, 2))
	{
		if (!does_cam_exist(&(uParam1->f_20[0])))
		{
			uParam1->f_20[0] = create_cam("DEFAULT_SCRIPTED_CAMERA", false);
		}
		func_755(uParam0, *uParam1);
		if (!does_cam_exist(&(uParam1->f_20[1])))
		{
			uParam1->f_20[1] = create_cam("DEFAULT_SCRIPTED_CAMERA", false);
			if (!func_88(uParam0->f_42))
			{
				vVar0 = { uParam0->f_42 };
			}
			else
			{
				vVar0 = { get_entity_coords(Global_35, true, false) };
			}
			fVar9 = func_398(vVar0, uParam0->f_45, 1);
			if (!func_88(*uParam0->f_51[1]))
			{
				vVar6 = { *uParam0->f_51[1] };
			}
			else
			{
				vVar6 = { _get_object_offset_from_coords(vVar0, fVar9, 0.8385f, -2.5071f, 1.5f) };
			}
			if (does_cam_exist(&(uParam1->f_20[1])))
			{
				set_cam_coord(&(uParam1->f_20[1]), vVar6);
				if (&uParam0->f_75[1])
				{
					attach_cam_to_entity(&(uParam1->f_20[1]), Global_35, vVar6, true);
				}
				if (!func_88(*uParam0->f_61[1]))
				{
					set_cam_rot(&(uParam1->f_20[1]), *uParam0->f_61[1], 2);
				}
				else
				{
					point_cam_at_coord(&(uParam1->f_20[1]), vVar3);
				}
				if (&uParam0->f_71[1] > 0f)
				{
					set_cam_fov(&(uParam1->f_20[1]), &(uParam0->f_71[1]));
				}
				else
				{
					set_cam_fov(&(uParam1->f_20[1]), 35f);
				}
			}
		}
	}
}

void func_595(char* sParam0)
{
}

void func_596()
{
}

int func_597(var uParam0, float fParam1)
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

void func_598(var uParam0, int iParam1)
{
	uParam0->f_88 = (uParam0->f_88 || iParam1);
}

void func_599(int iParam0)
{
	_0x51345ae20f22c261(player_id(), to_float(iParam0 * 14), 0, 0, 0);
}

void func_600(var uParam0, var uParam1)
{
	if (func_170(uParam1, 64))
	{
		uParam0->f_63 = 529077016;
		uParam0->f_65 = "MINI_DUEL@PLAYER@MISSION@MUD4";
	}
	else if (func_170(uParam1, 32))
	{
		uParam0->f_63 = 2002375312;
		uParam0->f_65 = "MINI_DUEL@PLAYER@MISSION@IND3@IG9";
	}
	else
	{
		uParam0->f_63 = -1910137495;
		uParam0->f_65 = "MINI_DUEL@PLAYER@BASE";
	}
	if (func_170(uParam1, 32))
	{
		uParam0->f_64 = -1516447524;
		uParam0->f_66 = "MINI_DUEL@CHALLENGER@MISSION@IND3@IG9";
	}
	else if (func_170(uParam1, 512))
	{
		uParam0->f_64 = 986377420;
		uParam0->f_66 = "MINI_DUEL@CHALLENGER@RC@RCAL@RC3_IG1";
	}
	else if (_0x50f124e6ef188b22(uParam1->f_1) && _0x6fb76442469abd68(uParam1->f_1) >= 0.4f)
	{
		uParam0->f_64 = -298479946;
		uParam0->f_66 = "MINI_DUEL@CHALLENGER@DRUNK";
	}
	else
	{
		uParam0->f_64 = -1925057680;
		uParam0->f_66 = "MINI_DUEL@CHALLENGER@BASE";
	}
}

void func_601(var uParam0, var uParam1)
{
	uParam0->f_88 = uParam0->f_88;
	uParam1->f_1 = uParam1->f_1;
	request_anim_dict("MINI_DUEL@REPOSITION@BASE");
	request_anim_dict(uParam1->f_65);
	request_anim_dict(uParam1->f_66);
	request_anim_dict("MINI_DUEL@PLAYER@ACTION");
	request_anim_dict("MINI_DUEL@PLAYER@NORMAL");
	if (!func_574(&(uParam0->f_48)))
	{
		get_current_ped_weapon(*uParam0, &(uParam0->f_48), true, 2, false);
		if (!func_574(&(uParam0->f_48)))
		{
			get_current_ped_weapon(*uParam0, &(uParam0->f_48), true, 3, false);
		}
		if (!func_574(&(uParam0->f_48)))
		{
			get_current_ped_weapon(*uParam0, &(uParam0->f_48), true, 0, false);
		}
		if (!func_574(&(uParam0->f_48)))
		{
			get_current_ped_weapon(*uParam0, &(uParam0->f_48), true, 1, false);
		}
		if (!func_574(&(uParam0->f_48)))
		{
			uParam0->f_48 = 0;
		}
		if (!func_574(&(uParam0->f_48)))
		{
			uParam0->f_48 = func_575(268435584, 0);
		}
		if (!func_574(&(uParam0->f_48)))
		{
			uParam0->f_48 = 379542007;
		}
	}
	if (!func_574(&(uParam0->f_49)))
	{
		get_current_ped_weapon(uParam0->f_1, &(uParam0->f_49), true, 2, false);
		if (!func_574(&(uParam0->f_49)))
		{
			get_current_ped_weapon(uParam0->f_1, &(uParam0->f_49), true, 3, false);
		}
		if (!func_574(&(uParam0->f_49)))
		{
			get_current_ped_weapon(uParam0->f_1, &(uParam0->f_49), true, 0, false);
		}
		if (!func_574(&(uParam0->f_49)))
		{
			get_current_ped_weapon(uParam0->f_1, &(uParam0->f_49), true, 1, false);
		}
		if (!func_574(&(uParam0->f_49)))
		{
			uParam0->f_49 = 0;
		}
		if (!func_574(&(uParam0->f_49)))
		{
			uParam0->f_49 = func_76(268435456, 1056964608, 1065353216);
		}
		if (!func_574(&(uParam0->f_49)))
		{
			uParam0->f_49 = 379542007;
		}
	}
	if (!func_171(uParam1, 8192))
	{
		if (uParam0->f_48 != 0)
		{
			_0x72d4cb5db927009c(uParam0->f_48, -1, 0);
		}
		if (uParam0->f_49 != 0)
		{
			_0x72d4cb5db927009c(uParam0->f_49, -1, 0);
		}
		func_384(uParam1, 8192);
	}
	if (!func_170(uParam0, 16384))
	{
		if (is_string_null_or_empty(&(uParam0->f_16)))
		{
			StringCopy(&(uParam0->f_16), "DUEL_GENERAL_START", 32);
		}
		if (is_string_null_or_empty(&(uParam0->f_20)))
		{
			StringCopy(&(uParam0->f_20), "DUEL_GENERAL_DRAW", 32);
		}
		if (is_string_null_or_empty(&(uParam0->f_24)))
		{
			StringCopy(&(uParam0->f_24), "DUEL_GENERAL_CROSSHAIRS", 32);
		}
		if (is_string_null_or_empty(&(uParam0->f_28)))
		{
			StringCopy(&(uParam0->f_28), "DUEL_GENERAL_STOP", 32);
		}
		if (is_string_null_or_empty(&(uParam0->f_32)))
		{
			StringCopy(&(uParam0->f_32), "DUEL_GENERAL_END_OS", 32);
		}
	}
	if (!is_string_null_or_empty(&(uParam0->f_32)))
	{
		prepare_music_event(&(uParam0->f_32));
	}
	_text_database_request("MGDUL");
}

int func_602(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

void func_603()
{
	func_756(Global_35, &(Global_1347400->f_46));
}

int func_604(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_242(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
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
							if (func_242(iVar4) && iVar4 != iVar0)
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
	if (func_405() == -1 && !func_243(iVar0))
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
				if (func_243(-183018591))
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
		if (iParam0 != Global_35 && func_242(iVar0))
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
		func_757(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_758(iParam0, &iVar0, &fVar25);
		iVar0 = _give_weapon_to_ped_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_759(iVar0))
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

void func_605(int iParam0)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	iVar2 = 0;
	while (iVar2 < 5)
	{
		iVar0 = func_760(iVar2);
		if (iVar0 != 0 && has_ped_got_weapon(iParam0, iVar0, 0, false))
		{
			iVar1 = get_max_ammo_in_clip(iParam0, iVar0, true);
			set_ammo_in_clip(iParam0, iVar0, iVar1);
		}
		iVar2++;
	}
}

bool func_606(int iParam0, var uParam1)
{
	return is_itemset_valid(iParam0);
}

struct<2> func_607()
{
	Var0 = create_itemset(true);
	return Var0;
}

void func_608(var uParam0, var uParam1)
{
	if (!_does_volume_exist(uParam0->f_86))
	{
		vVar0 = { func_761(uParam0->f_42, uParam0->f_45, 0.5f) };
		vVar3 = { 0f, 0f, func_398(uParam0->f_42, uParam0->f_45, 1) };
		vVar6 = { 12f, (get_distance_between_coords(uParam0->f_42, uParam0->f_45, true) + 30f), 25f };
		uParam0->f_86 = _create_volume_box(vVar0, vVar3, vVar6);
		add_to_itemset(uParam0->f_86, *uParam1);
		_0x18262cafebb5fbe1(uParam0->f_86, 534496, 0, 0, -1, -1, 0);
		_0xb56d41a694e42e86(uParam0->f_86, 534496, 0, 0, -1, -1, 2);
	}
}

int func_609(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, float fParam8, char* sParam9)
{
	if (is_string_null_or_empty(sParam9))
	{
		sParam9 = func_288();
	}
	return _create_volume_box_with_custom_name(vParam0 - vParam3 * Vector(0.5f, 0.5f, 0.5f) + vParam3, 0f, 0f, -func_571(vParam0, vParam3), fParam6, (vdist(vParam0, vParam3) + (fParam8 * 2f)), fParam7, sParam9);
}

bool func_610(int iParam0, int iParam1, float fParam2)
{
	return func_718(iParam0, get_entity_coords(iParam1, false, false), fParam2);
}

int func_611(var uParam0, var uParam1)
{
	switch (uParam0->f_68)
	{
		case 0:
			StringCopy(&(uParam0->f_74), "generic_hint_cam", 64);
			StringCopy(&(uParam0->f_74.f_8), "GENERIC_HINT_CAM", 64);
			uParam0->f_74.f_19 = uParam1->f_1;
			_0x6a4d224fc7643941(&(uParam0->f_74));
			uParam0->f_68 = 1;
			break;
		case 1:
			if (_0xdd0b7c5ae58f721d(&(uParam0->f_74)))
			{
				uParam0->f_68 = 2;
			}
			break;
		case 2:
			fVar0 = 1f;
			func_593(&(uParam0->f_32), 0);
			if (func_343(&(uParam0->f_32), fVar0))
			{
				if (_0x927b810e43e99932(&(uParam0->f_74)))
				{
					_0x0a5a4f1979abb40e(&(uParam0->f_74));
				}
				func_112(&(uParam0->f_32));
				uParam0->f_68 = 3;
			}
			else if (!_0x927b810e43e99932(&(uParam0->f_74)))
			{
				_0xb8b207c34285e978(&(uParam0->f_74));
			}
			else
			{
				_0x7b0279170961a73f(&(uParam0->f_74));
			}
			break;
		case 3:
			return 1;
	}
	return 0;
}

void func_612(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_613(int iParam0, var uParam1, vector3 vParam2, bool bParam5, int iParam6, float fParam7, int iParam8, int iParam9, int iParam10, float fParam11, bool bParam12, bool bParam13, float fParam14)
{
	if (func_762(&(uParam1->f_3), 1))
	{
		func_763(uParam1);
		if (func_764(iParam0, fParam7, fParam11, bParam12, bParam13, fParam14))
		{
			func_164();
		}
	}
	if (func_765(get_entity_coords(iParam0, true, false), uParam1, fParam7))
	{
		set_gameplay_ped_hint(iParam0, Vector(0f, 0f, 0f) + vParam2, bParam5, iParam8, iParam9, iParam10);
		func_766(uParam1, get_entity_coords(iParam0, true, false), iParam6, iParam9);
	}
}

void func_614(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		iVar0 = iParam1;
		vVar1 = { func_767() };
		decor_set_int(iParam0, &vVar1, iVar0);
	}
}

Vector3 func_615()
{
	return 0f, 0f, 0f;
}

bool func_616(int iParam0, var uParam1, vector3 vParam2, int iParam5, float fParam6, int iParam7, bool bParam8, int iParam9, bool bParam10, bool bParam11, float fParam12)
{
	if (!func_768(iParam0))
	{
		if (bParam11)
		{
			iVar0 = func_769(7);
		}
		else
		{
			iVar0 = _get_last_mount(iParam0);
		}
		if (!func_169(iVar0, 1) || (!(_does_volume_exist(iParam5) && func_102(iVar0, iParam5, 1, 0)) && func_32(iParam0, iVar0, 1, 1) > fParam6))
		{
			return true;
		}
		if (!does_entity_exist(*uParam1))
		{
			if (func_662(iVar0) && func_663(iVar0) != 1)
			{
				Var2.f_10 = 7;
				Var2.f_1 = 1;
				*uParam1 = func_770(&uVar1, &Var2);
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
		if (func_169(*uParam1, 1))
		{
			if (!(func_334(*uParam1, 518218985) || func_334(*uParam1, 713668775)))
			{
				clear_ped_tasks(*uParam1, 1, 0);
				iVar13 = 0;
				if (!bParam10)
				{
					iVar13 = 16640;
				}
				_0xff1e339ce40eaaaf(*uParam1, 0);
				_0xf74e134f40192884(*uParam1, 2);
				if (!func_88(vParam2))
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
				if (!bParam8 && func_88(vParam2))
				{
					_task_smart_flee_style_ped(*uParam1, iParam0, iParam7, iVar13, fParam6, 6000, 0);
				}
			}
		}
	}
	return false;
}

void func_617(var uParam0, var uParam1, int iParam2, vector3 vParam3, vector3 vParam6, float fParam9)
{
	if (!is_entity_dead(iParam2))
	{
		func_771(uParam0, uParam1, iParam2, vParam3, vParam6, fParam9);
		if (!func_3(uParam1->f_88, 32))
		{
			if (is_player_control_on(player_id()))
			{
				set_player_control(player_id(), false, 4992, false);
			}
		}
		func_619(iParam2);
	}
}

void func_618(var uParam0, var uParam1, int iParam2, int iParam3, vector3 vParam4, vector3 vParam7, float fParam10)
{
	if (!is_entity_dead(iParam2))
	{
		if (func_88(vParam7))
		{
			vParam7 = { get_entity_coords(iParam3, true, false) };
		}
		if (func_170(uParam1, 1))
		{
			func_771(uParam0, uParam1, iParam2, 0f, 0f, 0f, vParam7, fParam10);
		}
		else
		{
			func_771(uParam0, uParam1, iParam2, vParam4, vParam7, fParam10);
		}
		set_ped_relationship_group_hash(iParam2, 1269650476);
		set_ped_config_flag(iParam2, 6, true);
		if (func_415(iParam2))
		{
			func_384(uParam0, 4);
		}
		_0x2208438012482a1a(iParam2, false, false);
		fVar0 = func_398(vParam4, vParam7, 1);
		if (!func_170(uParam1, 524288))
		{
			if ((func_3(uParam1->f_88, 32) || func_3(uParam1->f_88, 2)) || func_170(uParam1, 1))
			{
				task_duel(iParam2, uParam0->f_64, fParam10, iParam3, func_772(uParam1), 0, 0f, 0f, 0f, fVar0, 0);
			}
			else
			{
				task_duel(iParam2, uParam0->f_64, fParam10, iParam3, func_772(uParam1), 0, vParam4, fVar0, 0);
			}
		}
	}
}

void func_619(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	vVar0 = { func_767() };
	if (!decor_exist_on(iParam0, &vVar0))
	{
		return;
	}
	decor_remove(iParam0, &vVar0);
}

void func_620(var uParam0, var uParam1)
{
	if (!func_171(uParam1, 4194304))
	{
		if (func_170(uParam0, 524288) && has_anim_event_fired(uParam0->f_1, 200432249))
		{
			func_384(uParam1, 4194304);
		}
	}
}

void func_621(var uParam0, var uParam1)
{
	if (func_170(uParam0, 4))
	{
		if (func_171(uParam1, 8388608))
		{
			if (func_773(uParam1))
			{
				func_774(uParam1->f_3);
				func_775(func_165(uParam1, uParam0), -1, 0, 0, 1);
			}
		}
		if (!func_171(uParam1, 8388608))
		{
			set_time_scale(0.25f);
			func_384(uParam1, 8388608);
			func_776(3);
			func_774(uParam1->f_3);
			func_775(func_165(uParam1, uParam0), -1, 0, 0, 1);
		}
		else
		{
			switch (uParam1->f_3)
			{
				case 0:
					if (func_171(uParam1, 1048576))
					{
						uParam1->f_3++;
						func_774(uParam1->f_3);
						func_775(func_165(uParam1, uParam0), -1, 0, 0, 1);
					}
					if (func_171(uParam1, 16))
					{
						set_time_scale(1f);
						uParam1->f_3++;
						func_774(uParam1->f_3);
						func_775(func_165(uParam1, uParam0), -1, 0, 0, 1);
					}
					break;
				case 1:
					if (func_171(uParam1, 16))
					{
						set_time_scale(1f);
						uParam1->f_3++;
						uParam1->f_25 = func_623("DUEL_HELP_SHOWDOWN", 10000, 0, 0, 0, 1);
						func_774(uParam1->f_3);
						func_775(func_165(uParam1, uParam0), -1, 0, 0, 1);
					}
					break;
				case 2:
					if (func_587(uParam1) > 0)
					{
						func_46(&(Global_40.f_9145), 1);
						func_166(func_165(uParam1, uParam0), 1);
						func_31();
						func_167();
						uParam1->f_3++;
					}
					break;
			}
		}
	}
}

void func_622(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 3:
			uParam1->f_12 = 2f;
			break;
		case 0:
			uParam1->f_12 = 2f;
			break;
		case 1:
			uParam1->f_12 = 2f;
			break;
		case 2:
			uParam1->f_12 = 2f;
			break;
		case 4:
			uParam1->f_12 = 2f;
			break;
	}
	_0x914071ff93af2692(player_id(), uParam1->f_12);
}

var func_623(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_624(var uParam0)
{
	iVar0 = 0;
	iVar1 = get_random_int_in_range(0, 9);
	switch (iVar1)
	{
		case 0:
			if (func_170(uParam0, 512))
			{
				iVar0 = 22798;
			}
			else
			{
				iVar0 = 34606;
			}
			break;
		case 1:
			if (func_170(uParam0, 512))
			{
				iVar0 = 46065;
			}
			else
			{
				iVar0 = 37873;
			}
			break;
		case 2:
			if (func_170(uParam0, 512))
			{
				iVar0 = 54187;
			}
			else
			{
				iVar0 = 53675;
			}
			break;
		case 3:
			iVar0 = 55120;
			break;
		case 4:
			iVar0 = 43312;
			break;
		case 5:
			iVar0 = 65478;
			break;
		case 6:
			iVar0 = 6884;
			break;
		case 7:
			iVar0 = 45454;
			break;
		case 8:
			iVar0 = 33646;
			break;
	}
	return iVar0;
}

void func_625(var uParam0, int iParam1)
{
	uParam0->f_56 = iParam1;
}

void func_626(var uParam0)
{
	if (!func_171(uParam0, 1048576))
	{
		if (_0xe956c2340a76272e(player_id()) > 0.5f)
		{
			func_143(&(uParam0->f_38));
			uParam0->f_6 = _get_game_timer_non_scaled_clipped();
			func_384(uParam0, 1048576);
		}
	}
}

bool func_627(var uParam0, var uParam1)
{
	if (func_171(uParam1, 16))
	{
		return true;
	}
	if (!is_entity_dead(*uParam0))
	{
		iVar0 = func_586(*uParam0, 0, 1, 0);
		if (func_246(iVar0, 0) && iVar0 != -1569615261)
		{
			func_399(&(uParam0->f_20), 0);
			func_143(&(uParam1->f_41));
			uParam1->f_7 = _get_game_timer_non_scaled_clipped();
			func_384(uParam1, 16);
			return true;
		}
	}
	return false;
}

bool func_628(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x59fa676177dbe4c9(iParam0) == 4;
}

void func_629(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

void func_630(var uParam0, var uParam1)
{
	if (func_170(uParam0, 4))
	{
	}
	else if (!func_171(uParam1, 64))
	{
		uParam1->f_25 = func_623("DUEL_HELP_SHOWDOWN", 10000, 0, 0, 0, 1);
		func_384(uParam1, 64);
	}
}

void func_631(var uParam0, var uParam1)
{
	if (uParam1->f_18 < 0f)
	{
		if (uParam1->f_17 > 0.9f)
		{
			if (uParam0->f_90 != -1)
			{
				uParam1->f_73 = uParam0->f_90;
			}
			else if (func_777() && !func_170(uParam0, 16))
			{
				if (func_170(uParam0, 512))
				{
					uParam1->f_73 = 34606;
				}
				else
				{
					uParam1->f_73 = 22798;
				}
			}
			else
			{
				uParam1->f_73 = 21030;
			}
		}
		else
		{
			uParam1->f_73 = uParam1->f_72;
		}
	}
	_0x310ce349e0c0ec4b(player_id(), uParam0->f_1, uParam1->f_73);
}

void func_632(var uParam0, var uParam1)
{
	if (!func_171(uParam1, 65536))
	{
		if (func_778(uParam0, uParam1))
		{
			if (func_170(uParam0, 524288))
			{
				if (_does_anim_scene_exist(uParam0->f_39))
				{
					if (_is_anim_scene_started(uParam0->f_39, false))
					{
						if (!is_string_null_or_empty(uParam0->f_39.f_1))
						{
							_set_anim_scene_playback_list_bool(uParam0->f_39, uParam0->f_39.f_1, true);
						}
						if (!is_string_null_or_empty(uParam0->f_39.f_2))
						{
							set_anim_scene_bool(uParam0->f_39, uParam0->f_39.f_2, true, false);
						}
					}
					else
					{
						start_anim_scene(uParam0->f_39);
					}
				}
			}
			else
			{
				_0x1f7a9a9c38c13a56(uParam0->f_1);
			}
			func_384(uParam1, 65536);
		}
	}
}

bool func_633(var uParam0, var uParam1)
{
	if (!func_169(*uParam0, 9))
	{
		func_394(uParam0, uParam1, 3);
		return true;
	}
	if (!func_171(uParam1, 131072) && func_779(uParam0->f_1))
	{
		func_399(&(uParam0->f_24), 0);
		func_384(uParam1, 131072);
	}
	if (!func_171(uParam1, 262144))
	{
		if (_0x285d36c5c72b0569(*uParam0) < 0.5f || _0x285d36c5c72b0569(uParam0->f_1) < 0.5f)
		{
			func_399(&(uParam0->f_28), 0);
			func_384(uParam1, 262144);
		}
	}
	if (!func_171(uParam1, 1))
	{
		if ((((((((((is_entity_dead(uParam0->f_1) || func_171(uParam1, 4194304)) || func_780(uParam0, uParam1)) || func_781(uParam0, uParam1, 1)) || func_782(uParam0, uParam1, 1)) || func_638(uParam0, uParam1, 1)) || func_783(uParam0, uParam1, 1)) || func_784(uParam0, uParam1, 1)) || func_785(uParam0, uParam1, 1)) || func_786(uParam0, uParam1, 1)) || (func_170(uParam0, 4096) && func_787(uParam0, uParam1, 1)))
		{
			func_788(uParam1);
			if ((!func_170(uParam0, 4096) && func_787(uParam0, uParam1, 0)) || func_781(uParam0, uParam1, 0))
			{
				func_384(uParam1, 128);
				_0x914071ff93af2692(player_id(), 999f);
				_0x651f0530083c0e5a(uParam0->f_1, 0);
				set_ped_shoot_rate(uParam0->f_1, 200);
			}
			if (func_170(uParam0, 64) && ((!does_entity_exist(uParam0->f_2) || !func_169(uParam0->f_2, 1)) || (uParam0->f_2 != uParam0->f_1 && has_entity_been_damaged_by_entity(uParam0->f_2, *uParam0, 0, 0))))
			{
				func_394(uParam0, uParam1, 5);
				return true;
			}
			else if (func_780(uParam0, uParam1))
			{
				func_394(uParam0, uParam1, 4);
				return true;
			}
			else if (((func_783(uParam0, uParam1, 0) || func_789(uParam0, uParam1, 0) >= 2) || func_785(uParam0, uParam1, 0)) || is_entity_dead(uParam0->f_1))
			{
				func_394(uParam0, uParam1, 1);
				return true;
			}
			else if (func_638(uParam0, uParam1, 0))
			{
				func_394(uParam0, uParam1, 2);
				return true;
			}
			else if (func_789(uParam0, uParam1, 0) == 1)
			{
				if (func_170(uParam0, 8192))
				{
					func_394(uParam0, uParam1, 1);
				}
				else
				{
					func_394(uParam0, uParam1, 4);
				}
				return true;
			}
			else if (func_781(uParam0, uParam1, 0) || func_171(uParam1, 4194304))
			{
				if (func_170(uParam0, 64))
				{
					func_394(uParam0, uParam1, 4);
				}
				else if (func_170(uParam0, 4096))
				{
					func_394(uParam0, uParam1, 4);
				}
				else
				{
					func_394(uParam0, uParam1, 3);
				}
				return true;
			}
			else
			{
				if (func_170(uParam0, 4096) && func_787(uParam0, uParam1, 0))
				{
					func_394(uParam0, uParam1, 4);
				}
				else if (func_170(uParam0, 67108864) && func_786(uParam0, uParam1, 0))
				{
					func_394(uParam0, uParam1, 4);
				}
				else if (func_170(uParam0, 134217728))
				{
					func_394(uParam0, uParam1, 4);
				}
				else
				{
					func_394(uParam0, uParam1, 3);
					if (func_169(Global_35, 0))
					{
						func_641(uParam0, uParam1);
					}
				}
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

bool func_634(int iParam0)
{
	if (!func_518(iParam0))
	{
		return false;
	}
	return (((*Global_1888801)[iParam0]->f_20 == 1 || (*Global_1888801)[iParam0]->f_20 == 2) && !func_790(iParam0));
}

void func_635(var uParam0)
{
	set_ped_config_flag(*uParam0, 186, false);
	decor_set_bool(*uParam0, func_791(), true);
}

bool func_636(var uParam0)
{
	Global_1425351->f_18 = uParam0;
	func_792(1);
	return true;
}

int func_637(vector3 vParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_88(*(*Global_1425351)[iVar0]))
		{
			*(*Global_1425351)[iVar0] = { vParam0 };
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_638(var uParam0, var uParam1, bool bParam2)
{
	if (func_3(uParam1->f_58, 8))
	{
		return true;
	}
	if (func_170(uParam0, 16) && func_170(uParam0, 8192))
	{
		return false;
	}
	if (!does_entity_exist(uParam0->f_1))
	{
		return false;
	}
	if (!does_entity_exist(*uParam0))
	{
		return false;
	}
	if (_0x3ec28da1ffac9ddd(uParam0->f_1, *uParam0, 0, 0))
	{
		get_ped_last_damage_bone(uParam0->f_1, &iVar0);
		if (func_793(iVar0, func_170(uParam0, 512)))
		{
			func_46(&(uParam1->f_58), 8);
			return true;
		}
		if (func_170(uParam0, 268435456) && func_171(uParam1, 65536))
		{
			func_46(&(uParam1->f_58), 8);
			return true;
		}
	}
	iVar1 = 0;
	if (func_170(uParam0, 512))
	{
		iVar1 = 1;
	}
	iVar2 = get_current_ped_weapon_entity_index(uParam0->f_1, iVar1);
	if (func_794(iVar2))
	{
		if (!is_entity_dead(iVar2))
		{
			if (_0x7a76104cc2cc69e8(iVar2, 1, 1))
			{
				if (bParam2)
				{
					func_46(&(uParam1->f_58), 8);
				}
				return true;
			}
		}
	}
	if (func_3(uParam1->f_58, -2147483648))
	{
		if (func_343(&(uParam1->f_29), 0.05f))
		{
			if (bParam2)
			{
				func_46(&(uParam1->f_58), 8);
			}
			return true;
		}
	}
	else if (is_bullet_in_area(get_entity_coords(iVar2, true, false), uParam0->f_83, true))
	{
		func_143(&(uParam1->f_29));
		func_46(&(uParam1->f_58), -2147483648);
	}
	return false;
}

void func_639(var uParam0)
{
	if (uParam0->f_67 == 1)
	{
		if (func_3(Global_40.f_9145, 1))
		{
			func_47(&(Global_40.f_9145), 1);
		}
	}
}

void func_640(var uParam0, var uParam1)
{
	func_164();
	if (uParam1->f_57 != 3)
	{
		if (uParam1->f_57 == 4)
		{
			render_script_cams(false, true, 3000, true, false, 0);
		}
		else
		{
			render_script_cams(false, true, 3000, true, false, 0);
		}
	}
	if (_0xb16223cb7da965f0(player_id()))
	{
		_0xae637bb8ef017875(player_id(), 1);
	}
	if (!is_entity_dead(*uParam0))
	{
		_0x9f9a829c6751f3c7(get_player_index(), 6, 0);
		_0x914071ff93af2692(player_id(), 1f);
	}
	set_time_scale(1f);
}

void func_641(var uParam0, var uParam1)
{
	set_player_invincible(player_id(), false);
	disable_attribute_overpower(Global_35, 0);
	if (func_171(uParam1, 4194304))
	{
		func_232(Global_35, 0, 0);
	}
	else if (func_784(uParam0, uParam1, 0))
	{
		if (func_170(uParam0, 524288))
		{
			func_232(Global_35, 0, 0);
		}
		else
		{
			explode_ped_head(Global_35, -506285289);
		}
	}
	else if (func_795(uParam0, uParam1))
	{
		func_232(Global_35, 0, 0);
	}
}

bool func_642(var uParam0, var uParam1)
{
	if (func_170(uParam1, 4194304))
	{
		return true;
	}
	func_644();
	if (uParam0->f_8 == 0)
	{
		uParam0->f_8 = _get_game_timer_non_scaled_clipped();
	}
	iVar0 = (_get_game_timer_non_scaled_clipped() - uParam0->f_8);
	if (iVar0 >= 1000)
	{
		render_script_cams(false, true, 1000, true, false, 0);
		return true;
	}
	return false;
}

bool func_643(var uParam0, var uParam1, int iParam2, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	if (func_170(uParam0, 33554432) && _0xa54000d4bfd90bde(player_id()))
	{
		return false;
	}
	if (func_170(uParam0, 4194304))
	{
		return true;
	}
	switch (uParam1->f_59)
	{
		case 0:
			func_46(&(uParam1->f_60), 2048);
			destroy_all_cams(false);
			_0x6e969927cf632608(1);
			_0xe3639db78b3b5400(iParam3);
			func_143(&(uParam1->f_26));
			func_401(uParam1, 3);
			break;
		case 3:
			func_644();
			if (!_0x1204eb53a5fbc63d())
			{
				if (iParam3 != player_ped_id())
				{
					render_script_cams(false, bParam7, 3000, true, false, 0);
				}
				func_401(uParam1, 0);
				clear_ped_tasks(iParam2, 1, 0);
				return true;
			}
			break;
		default:
			func_401(uParam1, 0);
			break;
	}
	return false;
}

void func_644()
{
	if (_0x1204eb53a5fbc63d())
	{
		disable_control_action(0, -128997553, false);
		disable_control_action(0, -1450761377, false);
		disable_control_action(0, -771458680, false);
		disable_control_action(1, -128997553, false);
		disable_control_action(1, -1450761377, false);
		disable_control_action(1, -771458680, false);
	}
}

void func_645(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

int func_646()
{
	iVar0 = func_796();
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

int func_647(int iParam0)
{
	if (func_405() != -1)
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
	fVar1 = func_185(absf(fVar1) < 1f, func_185(fVar1 < 0f, -1f, 1f), fVar1);
	return ceil(fVar1);
}

bool func_648(int iParam0)
{
	if (!func_797(iParam0))
	{
		return false;
	}
	return func_798(iParam0);
}

int func_649(int iParam0, int iParam1, int iParam2)
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

int func_650(int iParam0)
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

int func_651()
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

void func_652(int iParam0, bool bParam1, int iParam2)
{
	func_799((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_800(iParam0);
}

void func_653(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), false);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), true);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_801(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_654(bool bParam0)
{
	bVar3 = false;
	if (func_802(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_803(iVar5, &iVar2, &iVar0))
			{
				if (!func_246(iVar2, 0))
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
							if (func_470(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_646() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_646() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_805();
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

struct<2> func_655(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

void func_656(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

char* func_657(int iParam0)
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

var func_658(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_806(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_659(int iParam0, int iParam1)
{
	if (!func_807(iParam0))
	{
		return 0;
	}
	if (!func_808())
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

int func_660(int iParam0)
{
	if (!func_513(iParam0))
	{
		return -1;
	}
	return func_810(iParam0);
}

void func_661(int iParam0)
{
	if (!func_811(iParam0))
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

bool func_662(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = func_663(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

int func_663(int iParam0)
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

void func_664(int iParam0)
{
	iParam0 = func_812(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_813(iParam0, 32);
	func_814();
}

void func_665(int iParam0)
{
	iParam0 = func_812(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_666(iParam0);
	if (!_does_thread_exist(iVar0))
	{
		func_668(iParam0);
	}
	else if (!is_thread_active(iVar0, false))
	{
		func_668(iParam0);
	}
}

int func_666(int iParam0)
{
	iParam0 = func_812(iParam0);
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

bool func_667(int iParam0)
{
	iParam0 = func_812(iParam0);
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

void func_668(int iParam0)
{
	iParam0 = func_812(iParam0);
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

void func_669()
{
	func_815(23);
}

void func_670(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 || iParam0);
}

int func_671(var uParam0)
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

void func_672(int iParam0)
{
	iVar0 = func_816(iParam0);
	if (iVar0 != 0)
	{
		func_817(-1, 24, 0, iVar0);
	}
}

void func_673(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (Global_1310750->f_16071 != iParam0 && !bParam2)
	{
		return;
	}
	if (&Global_17504.f_42[iParam0] == 0)
	{
		func_656(func_655(-1029789297), 1);
	}
	Global_17504.f_4++;
	Global_17504.f_42[iParam0] = &Global_17504.f_42[iParam0] + 1;
	(*Global_1310750)[iParam0]->f_110 |= 8;
	if (func_64(iParam0, 2))
	{
		func_818(iParam0, func_479(iParam3));
	}
	if (func_64(iParam0, 1))
	{
		if (iParam4 == -1)
		{
			iParam4 = func_481();
		}
		func_819(iParam0, iParam4);
	}
	if (iParam1 >= 0 && !func_96(iParam0, 65536))
	{
		func_820(iParam0, iParam1);
		func_821(iParam0, func_204(iParam0, iParam1));
		func_670(128);
	}
	func_483(iParam0, (*Global_1310750)[iParam0]->f_37, 1065353216, 0, 0);
	func_484(iParam0, 1);
	if (!bParam2)
	{
		func_670(16);
		Global_17504.f_5 = iParam0;
		Global_17504.f_9 = 1;
		Global_17504.f_7 = 0;
		Global_17504.f_8 = 0;
		func_822(524288);
	}
	if (func_823(iParam0) != 0)
	{
		if (&Global_17504.f_42[iParam0] >= func_823(iParam0))
		{
			Global_17504.f_42[iParam0]->f_6 = 1;
		}
	}
}

void func_674(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_824(&Global_0, 8);
	}
	if (!func_808() || func_405() != -1)
	{
		return;
	}
	func_824(&Global_0, 1);
}

bool func_675(int iParam0, bool bParam1, bool bParam2)
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

int func_676(int iParam0, bool bParam1)
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

void func_677(int iParam0)
{
	Global_17504.f_2++;
	Global_17504.f_42[iParam0]->f_3++;
	(*Global_1310750)[iParam0]->f_110 |= 2;
}

bool func_678(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	if (func_88(vParam0))
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

bool func_679(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (func_88(vParam0))
	{
		return false;
	}
	return _0x769bb7626b8cdb06(vParam0, fParam3, iParam5, iParam4, 16384);
}

bool func_680(vector3 vParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_1310750->f_16043)
	{
		if (!func_88(*Global_1310750->f_16043[iVar0]))
		{
			if (func_118(vParam0, *Global_1310750->f_16043[iVar0]) < 2500f)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_681()
{
	iVar0 = func_825(func_4());
	if (iVar0 == 8)
	{
		iVar1 = func_280(func_4());
		if (func_282(Global_36, iVar1))
		{
			return false;
		}
	}
	if (func_826(func_695(0)))
	{
		return false;
	}
	if (func_827())
	{
		return false;
	}
	if (is_player_riding_train(player_id()))
	{
		return false;
	}
	return true;
}

float func_682(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

bool func_683(int iParam0)
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

void func_684(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_828(iParam0, iParam1))
		{
			if (func_829(iParam0, iParam1))
			{
				if (func_830(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_831(iParam0);
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

void func_685(int iParam0, int iParam1, bool bParam2)
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

void func_686(int iParam0, bool bParam1)
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

void func_687(int iParam0, int iParam1)
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

int func_688(int iParam0, int iParam1)
{
	if (!func_246(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_470(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_247(iParam0, 1399091007))
	{
		func_832(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_689(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_693(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_690(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_691(int iParam0)
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

int func_692(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_833(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_835(&Var0, func_834(0));
	}
	if (!func_836(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_691(iVar14);
	return uVar15;
}

int func_693(bool bParam0)
{
	if (func_405() == -1)
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

bool func_694(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

int func_695(bool bParam0)
{
	if (bParam0)
	{
		iVar0 = func_837(1, 0, 0);
	}
	else
	{
		iVar0 = func_4();
	}
	return func_696(iVar0);
}

int func_696(int iParam0)
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

int func_697(int iParam0)
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

int func_698(int iParam0, int iParam1)
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

void func_699(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_447(Global_1310750[iVar0], iParam0))
		{
			if (!func_431(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_838(iVar0) < func_839(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_483(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

bool func_700(int iParam0)
{
	iVar0 = func_840(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

void func_701(int iParam0)
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

void func_702(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_703()
{
	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_841(iVar0, 128))
		{
			func_842(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_704()
{
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_841(iVar0, 128) && func_841(iVar0, 1))
		{
			func_842(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_705(float fParam0)
{
	iVar0 = floor((fParam0 * 1000f));
	if (Global_1393237->f_3 < (get_game_timer() + iVar0))
	{
		Global_1393237->f_3 = (get_game_timer() + iVar0);
	}
}

void func_706()
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_64(iVar0, 16777216))
		{
			if (!func_843(iVar0))
			{
				func_844(iVar0, 4096);
			}
		}
		iVar0++;
	}
}

void func_707(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = ((iParam1 + (60 * iParam2)) + (3600 * iParam3));
	iVar1 = (iVar0 / 2);
	iVar2 = (iVar1 / 60);
	iVar3 = (iVar1 - iVar2 * 60);
	iVar4 = 0;
	switch (iParam0)
	{
		case 0:
			func_432(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_432(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_432(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_432(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_432(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_432(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_432(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_432(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_432(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_432(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_432(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_432(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_432(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_432(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_432(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_432(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_432(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_432(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_432(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_432(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_432(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_432(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_432(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_432(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_432(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_432(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_432(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_432(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_432(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_432(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_432(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_432(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_432(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_432(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_432(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_432(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_708(float fParam0, bool bParam1, bool bParam2)
{
	fVar0 = func_105();
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

int func_709(int iParam0)
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

int func_710(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

bool func_711()
{
	if (func_845())
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

void func_712(var uParam0, var uParam1)
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

int func_713(int iParam0)
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

void func_714(int iParam0)
{
	if (Global_1935630->f_38 == 0)
	{
		func_47(iParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1935630->f_34[iVar0])))
				{
					func_46(iParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_715(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_716(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_717(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_717(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_718(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_719(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_720(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_846(iParam0, iParam1))
		{
			if (!func_3(iParam1->f_10, 1))
			{
				set_ped_config_flag(iParam0, 130, false);
				set_ped_config_flag(iParam0, 315, false);
				set_ped_config_flag(iParam0, 297, false);
				set_ped_config_flag(iParam0, 178, true);
				func_732(uParam2, 0, 0, 1, 0);
				func_46(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_3(iParam1->f_10, 1))
		{
			func_847(uParam2);
			set_ped_config_flag(iParam0, 130, true);
			set_ped_config_flag(iParam0, 315, true);
			set_ped_config_flag(iParam0, 297, true);
			set_ped_config_flag(iParam0, 178, false);
			func_47(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_721(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
		func_848(iParam1, uParam2, 0);
		iVar5 = func_849(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			set_ped_config_flag(*uParam0, 178, false);
			return true;
		}
		func_732(uParam2, 0, 0, 1, 0);
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
		if (func_724(iParam1, 4))
		{
			iVar6 |= 1024;
			_0xbb1e41dd3d3c6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_724(iParam1, 26))
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
				iParam6 = func_850(uParam0);
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
				iVar8 = func_851(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_852(iParam1, (*uParam2)[iVar8]);
				}
			}
			if (func_724(iParam1, 23))
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
				func_723(*uParam0, 1, 1);
			}
			else
			{
				func_723(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_722(var uParam0)
{
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		set_ped_config_flag(*uParam0, 297, false);
	}
}

void func_723(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !is_entity_dead(iParam0))
	{
		set_ped_config_flag(iParam0, 317, bParam1);
	}
}

bool func_724(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

bool func_725(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_853(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_726(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_854(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_3(iParam10, 32), 1, 0);
			set_bit(iParam2, 1);
		}
	}
	else if (is_bit_set(*iParam2, 1))
	{
		clear_bit(iParam2, 1);
	}
}

void func_727(int iParam0)
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

bool func_728(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	iVar1 = func_855(1);
	bVar2 = is_bit_set(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = is_ped_on_foot(Global_35);
	bVar10 = is_ped_injured(*uParam0);
	bVar11 = (((_is_ped_carrying(Global_35) || func_856(Global_35)) || func_857(Global_35)) || func_858(Global_35));
	fVar12 = -1f;
	if (func_103(&(iParam1->f_13)))
	{
		fVar12 = func_28(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((*uParam4)[iVar0]->f_8 != iParam12)
		{
			iParam12 = (*uParam4)[iVar0]->f_8;
		}
		bVar4 = func_252((*uParam4)[iVar0]->f_6);
		func_859(*uParam0, (*uParam4)[iVar0], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (is_bit_set(uParam4[iVar0], 20))
		{
			bVar3 = true;
		}
		if (func_860(*uParam0, iParam1, (*uParam4)[iVar0], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_861(iParam12, (*uParam4)[iVar0]->f_6))
				{
					if (!bVar7)
					{
						func_732(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_365(uParam4, 0, 0);
					}
					if (is_bit_set(uParam4[iVar0], 11))
					{
						func_848(iParam1, uParam4, is_bit_set(*iParam1, 6));
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
					if (func_862(iParam1, fParam6, iParam1->f_9))
					{
						func_143(&(iParam1->f_18));
						if (bVar6)
						{
							func_365(uParam4, 0, 0);
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
		func_863(iParam1, fParam2);
	}
	return bVar5;
}

void func_729(var uParam0)
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

void func_730(int* iParam0, var uParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_864((*uParam1)[iVar0]))
		{
			if (is_bit_set(uParam1[iVar0], 20))
			{
				func_863(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_731(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!is_control_pressed(0, -124244224))
		{
			if (func_865(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_866(iParam1, 0);
				func_848(iParam1, uParam2, func_724(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

void func_732(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_252((*uParam0)[iVar0]->f_6))
			{
				if (!bParam4 && is_bit_set(uParam0[iVar0], 11))
				{
				}
				else
				{
					func_413(&((*uParam0)[iVar0]->f_6), 1, 1);
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

bool func_733(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_143(&(iParam1->f_18));
			return false;
		}
		else if (func_103(&(iParam1->f_18)))
		{
			func_112(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_103(&(iParam1->f_18)))
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
	return func_582(&(iParam1->f_18), fParam2);
	return true;
}

void func_734(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_859(iParam0, (*uParam2)[iVar0], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_735(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

void func_736(int* iParam0, var uParam1)
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
	func_848(iParam0, uParam1, 1);
	func_732(uParam1, 0, 1, 1, 0);
	_copy_memory(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		_copy_memory((*uParam1)[iVar0], &Var22, 17);
		iVar0++;
	}
}

int func_737(int* iParam0)
{
	if (func_724(iParam0, 0))
	{
		if (func_867(iParam0))
		{
			func_735(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

float func_738(vector3 vParam0, vector3 vParam3)
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

bool func_739(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

void func_740()
{
	iLocal_869[0] = 0;
	iLocal_869[1] = 0;
}

var func_741(int iParam0, var uParam1, int iParam2)
{
	if (!&iLocal_845[iParam0])
	{
		if (*iParam2 == 1)
		{
			if (func_342(iParam0, 253080715, uParam1, 1f, 0, 0, 1, 0, 0))
			{
				iLocal_845[iParam0] = 1;
				*iParam2 = 3;
			}
		}
		else
		{
			iLocal_845[iParam0] = 1;
		}
	}
	return &(iLocal_845[iParam0]);
}

void func_742(int iParam0, int iParam1, int iParam2, vector3 vParam3, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
	iVar3 = func_198(1);
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		iVar5 = func_868(iVar4);
		if (!is_entity_dead(iVar5))
		{
			vVar0 = { vVar0 + get_entity_coords(iVar5, true, false) };
		}
		iVar4++;
	}
	vVar0 = { vVar0 / FtoV(to_float(iVar3)) };
	vVar6 = { vVar0 - _0xf70f00013a62f866(iParam2) };
	vVar9 = { func_869(iParam2, vVar6, 1065353216, 100) };
	func_870(iParam0, iParam1, iParam9, vVar9, vParam3, iParam6, iParam7, iParam8, iParam10, -1, 1, iParam11);
}

void func_743(int iParam0, int iParam1, vector3 vParam2, vector3 vParam5, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	if (iParam0 <= -1)
	{
		return;
	}
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 3)
	{
		iParam1 = 3;
	}
	func_870(iParam0, iParam1, iParam11, vParam2, vParam5, iParam8, iParam9, iParam10, iParam12, -1, iParam13, 1);
}

void func_744(int iParam0)
{
	if (iParam0 <= -1)
	{
		return;
	}
	func_871(iParam0);
	func_815(21);
}

int func_745(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_241(iParam1, 128);
	Var23.f_9 = -1591664384;
	if (func_689("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_690(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_242(Var4.f_4))
			{
			}
			else if (!_0x705be297eebdb95d(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!func_241(iParam1, 512) && func_872(Var4.f_4, &uVar19, &Var23, 1728382685)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || _0xf29a186ed428b552(Global_35, Var4.f_4))
			{
				if (((_is_weapon_one_handed(Var4.f_4) && (!_is_weapon_shotgun(Var4.f_4) || func_241(iParam1, 32))) && (!_is_weapon_pistol(Var4.f_4) || !func_241(iParam1, 16777216))) && (!_is_weapon_revolver(Var4.f_4) || !func_241(iParam1, 33554432)))
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
		func_691(iVar1);
	}
	if (func_242(iVar0))
	{
	}
	else if (!func_241(iParam1, 512))
	{
		iParam1 |= 512;
		return func_745(uParam0, iParam1, iParam2);
	}
	else if (func_241(iParam1, 256))
	{
		iVar0 = -1569615261;
	}
	return iVar0;
}

bool func_746(int iParam0, int iParam1)
{
	if (func_405() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_747(int iParam0)
{
	if (func_405() != -1)
	{
		if (func_749(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_749(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_748(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_749(iParam0, 65536) && !func_749(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_749(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_749(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_749(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_750(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_751()
{
	return Global_1905944->f_5694;
}

bool func_752(int iParam0, int iParam1)
{
	if (!&iLocal_809[iParam0])
	{
		if (!_0x916b8e075abc8b4e(&(iLocal_727[iParam0]), 1))
		{
			iLocal_809[iParam0] = 1;
		}
		else if (!func_103(vLocal_812[iParam0]) || func_343(vLocal_812[iParam0], 3f))
		{
			_0x541e5b41dca45828(&(iLocal_727[iParam0]), iParam1, 1);
			func_143(vLocal_812[iParam0]);
		}
	}
	return (iLocal_809[iParam0] && _0x02ebbb3989b7e695(&(iLocal_727[iParam0])));
}

int func_753(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 1)
	{
		return iParam2;
	}
	return iParam1;
}

bool func_754(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

void func_755(var uParam0, struct<21> Param1, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94)
{
	if (!func_88(*uParam0->f_51[0]))
	{
		vVar0 = { *uParam0->f_51[0] };
	}
	else
	{
		vVar0 = { get_offset_from_entity_in_world_coords(*uParam0, 0.4567f, -1.6522f, 0.4558f) };
	}
	if (does_cam_exist(&(Param1.f_20[0])))
	{
		set_cam_coord(&(Param1.f_20[0]), vVar0);
		if (&uParam0->f_75[0])
		{
			attach_cam_to_entity(&(Param1.f_20[0]), Global_35, vVar0, true);
		}
		if (!func_88(*uParam0->f_61[0]))
		{
			set_cam_rot(&(Param1.f_20[0]), *uParam0->f_61[0], 2);
		}
		else
		{
			point_cam_at_entity(&(Param1.f_20[0]), *uParam0, 0.3524f, 1.3349f, 0.1018f, true);
		}
		if (&uParam0->f_71[0] > 0f)
		{
			set_cam_fov(&(Param1.f_20[0]), &(uParam0->f_71[0]));
		}
		else
		{
			set_cam_fov(&(Param1.f_20[0]), 35f);
		}
	}
}

void func_756(int iParam0, int* iParam1)
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
		if (func_242(iVar31))
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

int func_757(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_873(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_874((386 + iVar28), 1);
			if (func_875(iParam0, &Var0, iVar5, 0))
			{
				if (func_876(iParam0, &Var6, iVar5))
				{
					Var29 = { func_877(iParam0, Var0, iVar5, 0) };
					func_878(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_879(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					func_880(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_881(iParam0, iParam1);
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

void func_758(int iParam0, int iParam1, float fParam2)
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

bool func_759(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_760(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 127400949;
		case 1:
			return 1701864918;
		case 2:
			return 2075992054;
		case 3:
			return 34411519;
		case 4:
			return 379542007;
		default:
			break;
	}
	return 0;
}

Vector3 func_761(vector3 vParam0, vector3 vParam3, float fParam6)
{
	return FtoV((1f - fParam6)) * vParam0 + Vector(fParam6, fParam6, fParam6) * vParam3;
}

bool func_762(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_763(var uParam0)
{
	if (func_762(&(uParam0->f_3), 4))
	{
	}
	if (is_gameplay_hint_active())
	{
		if ((!func_882(uParam0) || func_762(&(uParam0->f_3), 4)) && !func_762(&(uParam0->f_3), 256))
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
	if (func_883(uParam0))
	{
		func_164();
	}
	if (!func_762(&(uParam0->f_3), 16))
	{
		if (func_103(uParam0))
		{
			if (func_884(uParam0) < uParam0->f_4)
			{
				set_ped_max_move_blend_ratio(player_ped_id(), 1f);
			}
		}
	}
}

bool func_764(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, float fParam5)
{
	if (bParam4 && is_ped_injured(iParam0))
	{
		return true;
	}
	if (func_885(iParam0, fParam1, fParam2, bParam3, bParam4, fParam5))
	{
		return true;
	}
	return false;
}

bool func_765(vector3 vParam0, var uParam3, float fParam4)
{
	if (!func_886(uParam3->f_7, uParam3->f_8))
	{
		return false;
	}
	if (func_762(&(uParam3->f_3), 1))
	{
		return false;
	}
	if (is_gameplay_hint_active())
	{
		return false;
	}
	fVar0 = func_140(Global_35, vParam0, 1);
	if (fVar0 > fParam4)
	{
		return false;
	}
	if (!func_887(vParam0, uParam3))
	{
		return false;
	}
	if (!func_762(&(uParam3->f_3), 2))
	{
		if (!is_sphere_visible(vParam0, 0.5f))
		{
			return false;
		}
		if (!func_888(vParam0, uParam3))
		{
			return false;
		}
	}
	return true;
}

void func_766(var uParam0, vector3 vParam1, float fParam4, int iParam5)
{
	if (_0xa24c1d341c6e0d53(1, 0, 0))
	{
		return;
	}
	set_gameplay_hint_fov(fParam4);
	fVar0 = func_889(vParam1, 1);
	if (!func_762(&(uParam0->f_3), 32))
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
	func_143(uParam0);
	func_612(&(uParam0->f_3), 1);
}

Vector3 func_767()
{
	StringCopy(&cVar0, "eDuelResult", 24);
	return cVar0;
}

bool func_768(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	return is_ped_on_mount(iParam0);
}

int func_769(int iParam0)
{
	iParam0 = func_812(iParam0);
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

int func_770(var uParam0, var uParam1)
{
	uParam1->f_10 = func_812(uParam1->f_10);
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
		if (func_88(uParam1->f_6))
		{
		}
	}
	bVar0 = func_808();
	if (*uParam1)
	{
		if (bVar0 && !func_410((*Global_1835011)[4]->f_1, 1))
		{
			if (func_890(5))
			{
				func_891(5);
				func_892(5);
				func_893(0);
				func_894(0);
			}
		}
	}
	if (func_895(Global_36) == 8)
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_410((*Global_1835011)[37]->f_1, 1)) && !func_410((*Global_1835011)[43]->f_1, 1))
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_410((*Global_1835011)[43]->f_1, 1)) && !func_410((*Global_1835011)[44]->f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_769(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_896(iVar1))
	{
		bVar3 = true;
		if (func_897(iVar1))
		{
			bVar4 = true;
		}
		if (func_898(iVar1))
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
				func_899(uParam1->f_10);
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
			if (!func_890(0) && func_890(1))
			{
				func_900(1, 0);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_901())
			{
				func_902();
			}
			func_893(0);
			func_894(0);
			func_903(uParam1->f_6);
		}
	}
	if (!func_896(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_904(uParam1->f_10) == 0 || func_905(uParam1->f_10) == 0) || func_906(uParam1->f_10) == 0)
			{
				func_907(uParam1->f_10);
			}
			func_908(uParam1->f_10);
			func_909(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*uParam0 = 0;
			return 0;
		}
		*uParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_769(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_896(iVar1))
	{
		bVar3 = true;
		if (func_897(iVar1))
		{
			bVar4 = true;
		}
		if (func_898(iVar1))
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
			if (!func_88(uParam1->f_6))
			{
				set_entity_coords(iVar2, uParam1->f_6, false, true, true, true);
				set_entity_heading(iVar2, uParam1->f_9);
				_0x9587913b9e772d29(iVar2, 0);
			}
		}
	}
	if (func_910(uParam1->f_10))
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
			Var8 = { func_911(uParam1->f_10) };
			Var10 = { func_912() };
			func_913(iVar2, &Var8, &Var10, 0);
			_set_ped_as_saddle_horse_for_player(iVar6, iVar2);
			set_ped_config_flag(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*uParam0 = 2;
		return iVar2;
	}
	if (!func_667(uParam1->f_10))
	{
		set_entity_as_mission_entity(iVar2, true, true);
		func_914(uParam1->f_10);
		if (uParam1->f_2 && !func_88(uParam1->f_6))
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
	func_665(uParam1->f_10);
	if (func_667(uParam1->f_10))
	{
		iVar16 = func_666(uParam1->f_10);
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

void func_771(var uParam0, var uParam1, int iParam2, vector3 vParam3, vector3 vParam6, float fParam9)
{
	if (!is_entity_dead(iParam2))
	{
		if (is_entity_on_fire(iParam2))
		{
			stop_entity_fire(iParam2, 0);
		}
		set_entity_can_be_damaged(iParam2, true);
		if (is_ped_on_mount(iParam2))
		{
			iVar1 = get_mount(iParam2);
			_remove_ped_from_mount(iParam2, true, false);
			if (does_entity_exist(iVar1))
			{
				_task_smart_flee_style_ped(iVar1, iParam2, 1, 0, -1082130432, -1, 0);
			}
		}
		if (!func_170(uParam1, 32) && (!func_170(uParam1, 524288) || iParam2 == *uParam1))
		{
			if (!func_88(vParam3))
			{
				fVar0 = func_398(vParam3, vParam6, 1);
				task_follow_nav_mesh_to_coord(iParam2, vParam3, 1f, 20000, 0.5f, 64, fVar0);
			}
			else
			{
				task_turn_ped_to_face_coord(iParam2, vParam6, 0);
			}
		}
		if (iParam2 != Global_35)
		{
			set_blocking_of_non_temporary_events(iParam2, true);
		}
	}
}

float func_772(var uParam0)
{
	switch (uParam0->f_89)
	{
		case 3:
			return 0.2f;
		case 0:
			return 0.25f;
		case 1:
			return 0.31f;
		case 2:
			return 0.4f;
		case 4:
			return 0.25f;
		default:
			break;
	}
	return 0.25f;
}

bool func_773(var uParam0)
{
	iVar0 = _0xbd629c1c4f501c80(0);
	if (iVar0 != uParam0->f_69)
	{
		uParam0->f_69 = iVar0;
		return true;
	}
	return false;
}

void func_774(int iParam0)
{
	if (iParam0 >= &Global_1911643 || iParam0 < 0)
	{
		return;
	}
	_databinding_write_data_bool(Global_1911643->f_5[Global_1911643->f_1]->f_2, false);
	_databinding_write_data_bool(Global_1911643->f_5[Global_1911643->f_1]->f_1, false);
	bVar0 = iParam0 < Global_1911643->f_1;
	Global_1911643->f_1 = iParam0;
	_databinding_write_data_bool(Global_1911643->f_5[Global_1911643->f_1]->f_1, true);
	_databinding_write_data_bool(Global_1911643->f_5[Global_1911643->f_1]->f_2, bVar0);
}

var func_775(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	_0xdd1232b332cbb9e7(3, 1, 0);
	return func_161(sParam0, iParam1, iParam2, iParam3, 0, iParam4);
}

void func_776(int iParam0)
{
	if (iParam0 > 6)
	{
		return;
	}
	if (&Global_1911643 != 0)
	{
		func_167();
	}
	_databinding_write_data_bool(Global_1911643->f_3, true);
	Global_1911643 = iParam0;
	Global_1911643->f_1 = 0;
	iVar5 = 0;
	while (iVar5 < iParam0)
	{
		StringCopy(&cVar1, "Objective", 32);
		StringIntConCat(&cVar1, iVar5, 32);
		uVar0 = _databinding_add_data_container(Global_1911643->f_2, &cVar1);
		Global_1911643->f_5[iVar5] = uVar0;
		Global_1911643->f_5[iVar5]->f_1 = _databinding_add_data_bool(uVar0, "IsCurrent", 0);
		Global_1911643->f_5[iVar5]->f_2 = _databinding_add_data_bool(uVar0, "Failed", 0);
		_databinding_insert_ui_item_to_list_from_context_string_alias(Global_1911643->f_4, iVar5, "objective_breadcrumb", uVar0);
		iVar5++;
	}
}

bool func_777()
{
	return func_796() > 0;
}

bool func_778(var uParam0, var uParam1)
{
	if (func_915(uParam0, uParam1))
	{
		return true;
	}
	if (!func_170(uParam0, 1048576))
	{
		if (uParam0->f_82)
		{
			iVar0 = _get_game_timer_non_scaled_clipped();
			iVar1 = (iVar0 - uParam1->f_5);
			fVar2 = func_916(uParam0, 0);
			if (IntToFloat(iVar1) >= (fVar2 * 1000f))
			{
				return true;
			}
			if (func_171(uParam1, 1048576))
			{
				iVar3 = (iVar0 - uParam1->f_6);
				fVar4 = func_916(uParam0, 1);
				if (IntToFloat(iVar3) >= (fVar4 * 1000f))
				{
					return true;
				}
			}
			if (func_171(uParam1, 16))
			{
				iVar5 = (iVar0 - uParam1->f_7);
				fVar6 = func_916(uParam0, 2);
				if (IntToFloat(iVar5) >= (fVar6 * 1000f))
				{
					return true;
				}
			}
		}
		else
		{
			if (func_343(&(uParam1->f_35), func_916(uParam0, 0)))
			{
				return true;
			}
			if (func_343(&(uParam1->f_38), func_916(uParam0, 1)))
			{
				return true;
			}
			if (func_343(&(uParam1->f_41), func_916(uParam0, 2)))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_779(int iParam0)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	return is_player_free_aiming_at_entity(player_id(), iParam0);
}

bool func_780(var uParam0, var uParam1)
{
	if ((func_170(uParam0, 64) && uParam0->f_1 != uParam0->f_2) && func_171(uParam1, 65536))
	{
		if (!func_171(uParam1, 4096))
		{
			func_384(uParam1, 4096);
		}
		return true;
	}
	return false;
}

bool func_781(var uParam0, var uParam1, bool bParam2)
{
	if (is_entity_dead(*uParam0))
	{
		return true;
	}
	if (func_3(uParam1->f_58, 512))
	{
		return true;
	}
	if (!func_171(uParam1, 524288))
	{
		if (_0xb16223cb7da965f0(get_player_index()))
		{
			func_384(uParam1, 524288);
		}
	}
	else
	{
		iVar2 = func_586(*uParam0, 0, 1, 0);
		if (iVar2 != -1569615261)
		{
			get_ammo_in_clip(*uParam0, &iVar0, iVar2);
			if (iVar0 <= 0)
			{
				_0x6929e22158e52265(*uParam0, 0, &uVar3);
				_0x678f00858980f516(*uParam0, &iVar0, &uVar3);
			}
			iVar1 = get_max_ammo_in_clip(*uParam0, iVar2, true);
		}
		if (iVar1 == iVar0 && !_0xb16223cb7da965f0(get_player_index()))
		{
			if (bParam2)
			{
				func_46(&(uParam1->f_58), 512);
			}
			return true;
		}
	}
	return false;
}

bool func_782(var uParam0, var uParam1, bool bParam2)
{
	if (func_3(uParam1->f_58, 256))
	{
		return true;
	}
	if (!does_entity_exist(*uParam0))
	{
		return false;
	}
	if (get_ammo_in_clip(*uParam0, &iVar0, uParam0->f_48))
	{
		if (iVar0 <= 0)
		{
			if (func_242(func_602(*uParam0, 1, 0, 0)))
			{
				_0x6929e22158e52265(*uParam0, 0, &uVar1);
			}
			else
			{
				_0x6929e22158e52265(*uParam0, 2, &uVar1);
			}
			_0x678f00858980f516(*uParam0, &iVar0, &uVar1);
			if (iVar0 <= 0)
			{
				if (bParam2)
				{
					func_46(&(uParam1->f_58), 256);
				}
				return true;
			}
		}
	}
	return false;
}

bool func_783(var uParam0, var uParam1, bool bParam2)
{
	if (func_3(uParam1->f_58, 16))
	{
		return true;
	}
	if (!does_entity_exist(uParam0->f_1))
	{
		return false;
	}
	if (!does_entity_exist(*uParam0))
	{
		return false;
	}
	if (_0xbd6b242b8bd5543a(uParam0->f_1))
	{
		return true;
	}
	if (_0x3ec28da1ffac9ddd(uParam0->f_1, *uParam0, 0, 0))
	{
		get_ped_last_damage_bone(uParam0->f_1, &iVar0);
		if (func_917(iVar0))
		{
			if (bParam2)
			{
				func_46(&(uParam1->f_58), 16);
			}
			return true;
		}
	}
	return false;
}

bool func_784(var uParam0, var uParam1, bool bParam2)
{
	if (func_3(uParam1->f_58, 64))
	{
		return true;
	}
	if (!does_entity_exist(uParam0->f_1))
	{
		return false;
	}
	if (!does_entity_exist(*uParam0))
	{
		return false;
	}
	if (func_170(uParam0, 524288) && has_anim_event_fired(uParam0->f_1, 200432249))
	{
		if (bParam2)
		{
			func_46(&(uParam1->f_58), 64);
		}
		return true;
	}
	if (_0xbd6b242b8bd5543a(*uParam0))
	{
		if (bParam2)
		{
			func_46(&(uParam1->f_58), 64);
		}
		return true;
	}
	if (_0x3ec28da1ffac9ddd(*uParam0, uParam0->f_1, 0, 0))
	{
		get_ped_last_damage_bone(*uParam0, &iVar0);
		if (func_917(iVar0))
		{
			if (bParam2)
			{
				func_46(&(uParam1->f_58), 64);
			}
			return true;
		}
	}
	return false;
}

bool func_785(var uParam0, var uParam1, bool bParam2)
{
	if (func_3(uParam1->f_58, 32))
	{
		return true;
	}
	if (!does_entity_exist(uParam0->f_1))
	{
		return false;
	}
	if (!does_entity_exist(*uParam0))
	{
		return false;
	}
	if (_0x3ec28da1ffac9ddd(uParam0->f_1, *uParam0, 0, 0))
	{
		get_ped_last_damage_bone(uParam0->f_1, &iVar0);
		if (func_918(iVar0))
		{
			if (bParam2)
			{
				func_46(&(uParam1->f_58), 32);
			}
			return true;
		}
	}
	return false;
}

bool func_786(var uParam0, var uParam1, bool bParam2)
{
	if (func_3(uParam1->f_58, 4))
	{
		return true;
	}
	if (!does_entity_exist(uParam0->f_1))
	{
		return false;
	}
	if (!does_entity_exist(*uParam0))
	{
		return false;
	}
	if (_0x3ec28da1ffac9ddd(uParam0->f_1, *uParam0, 0, 0))
	{
		if (bParam2)
		{
			func_46(&(uParam1->f_58), 4);
		}
		return true;
	}
	return false;
}

bool func_787(var uParam0, var uParam1, bool bParam2)
{
	if (is_entity_dead(*uParam0))
	{
		return true;
	}
	if (func_3(uParam1->f_58, 1))
	{
		return true;
	}
	if (!does_entity_exist(uParam0->f_1))
	{
		return false;
	}
	if (func_3(uParam1->f_58, -2147483648) && !func_343(&(uParam1->f_29), 0.05f))
	{
		return false;
	}
	iVar2 = func_586(*uParam0, 0, 1, 0);
	if (iVar2 == 0)
	{
		return false;
	}
	if (iVar2 != -1569615261)
	{
		get_ammo_in_clip(*uParam0, &iVar0, iVar2);
		if (iVar0 <= 0)
		{
			_0x6929e22158e52265(*uParam0, 0, &uVar3);
			_0x678f00858980f516(*uParam0, &iVar0, &uVar3);
		}
		iVar1 = get_max_ammo_in_clip(*uParam0, iVar2, true);
		iVar7 = 0;
		if (func_170(uParam0, 512))
		{
			iVar7 = 1;
		}
		iVar8 = get_current_ped_weapon_entity_index(uParam0->f_1, iVar7);
		if (iVar0 < iVar1)
		{
			if (uParam1->f_11 == -1)
			{
				uParam1->f_11 = _get_game_timer_non_scaled_clipped();
			}
			iVar10 = (_get_game_timer_non_scaled_clipped() - uParam1->f_11);
			if (iVar10 > 200)
			{
				bVar9 = true;
			}
		}
		if (!func_170(uParam0, 33554432))
		{
			if ((((iVar0 < iVar1 && bVar9) && !_0x3ec28da1ffac9ddd(uParam0->f_1, *uParam0, 0, 0)) && !is_player_free_aiming_at_entity(get_player_index(), uParam0->f_1)) && !is_player_free_aiming_at_entity(get_player_index(), iVar8))
			{
				if (bParam2)
				{
					func_46(&(uParam1->f_58), 1);
				}
				return true;
			}
		}
		else
		{
			if (iVar0 == 0)
			{
				bVar11 = true;
			}
			if (iVar0 < iVar1 && _0xa54000d4bfd90bde(player_id()) == 0)
			{
				bVar11 = true;
			}
			if (!_0xb16223cb7da965f0(get_player_index()) && func_171(uParam1, 524288))
			{
				bVar11 = true;
			}
			if (bVar11)
			{
				if (!_0x3ec28da1ffac9ddd(uParam0->f_1, *uParam0, 0, 0) && bVar9 == 1)
				{
					if (bParam2)
					{
						func_46(&(uParam1->f_58), 1);
					}
					return true;
				}
			}
		}
	}
	return false;
}

void func_788(var uParam0)
{
	iVar0 = 1;
	while (iVar0 <= 512)
	{
		iVar1 = iVar0;
		if (func_3(uParam0->f_58, iVar1))
		{
		}
		iVar0 *= 2;
	}
}

int func_789(var uParam0, var uParam1, bool bParam2)
{
	if (func_3(uParam1->f_58, 2))
	{
		return 1;
	}
	if (!does_entity_exist(uParam0->f_1))
	{
		return 0;
	}
	if (!does_entity_exist(*uParam0))
	{
		return 0;
	}
	if (_0x3ec28da1ffac9ddd(uParam0->f_1, *uParam0, 0, 0))
	{
		iVar0 = 1;
		if (bParam2)
		{
			func_46(&(uParam1->f_58), 2);
		}
	}
	return iVar0;
}

bool func_790(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 37) && !func_157())
	{
		return true;
	}
	if (iParam0 == 61)
	{
		return true;
	}
	return false;
}

char* func_791()
{
	return "bPickupThisCorpse";
}

void func_792(int iParam0)
{
	func_46(&(Global_1425351->f_17), iParam0);
}

bool func_793(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		switch (iParam0)
		{
			case 16731:
			case 16732:
			case 16733:
			case 16734:
			case 16747:
			case 16748:
			case 16749:
			case 16750:
			case 16763:
			case 16764:
			case 16765:
			case 16766:
			case 16779:
			case 16780:
			case 16781:
			case 16782:
			case 16827:
			case 16828:
			case 16829:
			case 22798:
			case 46065:
			case 54187:
			case 54802:
				return true;
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 30226:
			case 34606:
			case 37873:
			case 41307:
			case 41308:
			case 41309:
			case 41310:
			case 41323:
			case 41324:
			case 41325:
			case 41326:
			case 41339:
			case 41340:
			case 41341:
			case 41342:
			case 41355:
			case 41356:
			case 41357:
			case 41358:
			case 41403:
			case 41404:
			case 41405:
			case 53675:
				return true;
			default:
				break;
		}
	}
	return false;
}

bool func_794(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if ((!is_entity_a_ped(iParam0) && !is_entity_a_vehicle(iParam0)) && !is_entity_an_object(iParam0))
	{
		return false;
	}
	return true;
}

bool func_795(var uParam0, var uParam1)
{
	if (is_entity_dead(*uParam0))
	{
		return true;
	}
	if (!does_entity_exist(uParam0->f_1))
	{
		return false;
	}
	if (func_170(uParam0, 524288) && has_anim_event_fired(uParam0->f_1, 200432249))
	{
		return true;
	}
	if (!func_170(uParam0, 262144))
	{
		get_ammo_in_clip(uParam0->f_1, &iVar0, uParam0->f_49);
		iVar1 = get_max_ammo_in_clip(uParam0->f_1, uParam0->f_49, true);
		if (iVar0 < iVar1)
		{
			return true;
		}
	}
	return false;
}

int func_796()
{
	return Global_40.f_11095.f_35;
}

bool func_797(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_798(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_799(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_919(bParam1);
	}
}

void func_800(int iParam0)
{
	_0x74bcceb233ad95b2(-156028329, iParam0);
}

char* func_801(int iParam0)
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

bool func_802(int iParam0)
{
	if (!func_920(23, &vVar0))
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

bool func_803(int iParam0, int iParam1, int iParam2)
{
	if (!func_920(23, &Var0))
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

int func_804(int iParam0)
{
	return iParam0;
}

int func_805()
{
	iVar0 = func_646();
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

void func_806(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

bool func_807(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_808()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_809(int iParam0, int iParam1, var uParam2)
{
	if (!func_807(iParam0))
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

int func_810(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_921(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

bool func_811(int iParam0)
{
	return func_694(iParam0, 2);
}

int func_812(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_813(int iParam0, int iParam1)
{
	iParam0 = func_812(iParam0);
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

void func_814()
{
	if (func_896(0))
	{
		func_922(0);
	}
	if (func_896(1))
	{
		func_922(1);
	}
	if (func_896(5))
	{
		func_922(5);
	}
	if (func_896(6))
	{
		func_923(6);
	}
}

void func_815(int iParam0)
{
	if (func_405() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_169(func_924(iVar0), 0))
		{
			if (is_ped_group_member(func_924(iVar0), func_438(), 1))
			{
				func_925(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

int func_816(int iParam0)
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

void func_817(int iParam0, int iParam1, int iParam2, int iParam3)
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
					if (func_926() > Global_32074.f_2697.f_6[iVar0]->f_5)
					{
						Global_32074.f_2697.f_6[iVar0]->f_5 = func_926();
					}
					func_927(&(Global_32074.f_2697.f_6[iVar0]->f_5), 0, 0, iParam1, iParam2, 0, 0, 0);
					func_47(&(Global_1415419->f_19[iVar0]->f_11), 2);
				}
			}
			iVar0++;
		}
	}
}

void func_818(int iParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		iVar0 = func_697(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_698(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2]->f_1++;
	}
}

void func_819(int iParam0, int iParam1)
{
	if (iParam1 != -1 && !func_96(iParam0, 8192))
	{
		iVar0 = func_698(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0]->f_1++;
	}
}

void func_820(int iParam0, int iParam1)
{
	iVar0 = (func_443(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	set_bit(Global_17504.f_12[iVar1], iVar2);
}

void func_821(int iParam0, vector3 vParam1)
{
	if (func_64(iParam0, 512))
	{
		vParam1 = { Global_36 };
	}
	if (func_88(vParam1))
	{
		return;
	}
	if (!func_218(iParam0))
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Global_17504.f_2084)
	{
		vVar2 = { *Global_17504.f_2084[iVar0] };
		if (func_88(vVar2))
		{
			if (iVar1 < 0)
			{
				iVar1 = iVar0;
			}
		}
		else if (Global_17504.f_2084[iVar0]->f_3 == iParam0)
		{
			if (func_457(vVar2, vParam1, 1f, 1))
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

void func_822(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		func_844(iVar0, iParam0);
		iVar0++;
	}
}

int func_823(int iParam0)
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

void func_824(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_825(int iParam0)
{
	if (!func_518(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_20;
}

bool func_826(int iParam0)
{
	return (Global_1310750->f_16074 && iParam0) != 0;
}

bool func_827()
{
	return Global_1894899 & 2 != 0;
}

bool func_828(int iParam0, int iParam1)
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

bool func_829(int iParam0, int iParam1)
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

bool func_830(int iParam0, int iParam1)
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
	if (!func_828(iParam0, iVar0))
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

void func_831(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

void func_832(int iParam0, var uParam1, var uParam2)
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

struct<14> func_833(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> func_834(bool bParam0)
{
	iVar0 = func_693(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_877(923904168, func_928(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_877(923904168, func_928(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_877(923904168, func_928(bParam0), -740156546, 0);
}

void func_835(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_836(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_693(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_837(int iParam0, bool bParam1, bool bParam2)
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
				if (!bParam1 || func_929(iVar2))
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

int func_838(int iParam0)
{
	if (func_218(iParam0))
	{
		return Global_17504.f_42[iParam0]->f_4;
	}
	return 0;
}

int func_839(int iParam0)
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

int func_840(int iParam0, int iParam1)
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

bool func_841(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return false;
	}
	return (Global_1393237->f_11[iParam0]->f_10 && iParam1) != 0;
}

void func_842(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return;
	}
	Global_1393237->f_11[iParam0]->f_10 = (Global_1393237->f_11[iParam0]->f_10 || iParam1);
}

bool func_843(int iParam0)
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

void func_844(int iParam0, int iParam1)
{
	if (!func_218(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_1 = ((*Global_1310750)[iParam0]->f_1 - ((*Global_1310750)[iParam0]->f_1 && iParam1));
}

bool func_845()
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

bool func_846(int iParam0, int* iParam1)
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
		if (is_ped_in_combat(iParam0, func_930((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_847(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_864((*uParam0)[iVar0]))
		{
			func_344((*uParam0)[iVar0], 14);
		}
		iVar0++;
	}
}

void func_848(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_413(&((*uParam1)[iParam0->f_3]->f_6), 1, 1);
		if (bParam2)
		{
			func_91(iParam0, 0);
		}
	}
}

int func_849(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(*uParam2)[iVar0]->f_8 = 6;
		func_931(iParam0, (*uParam2)[iVar0], fParam3, 3, 0, 6, bParam4, 0);
		if (func_252((*uParam2)[iVar0]->f_6))
		{
			func_344((*uParam2)[iVar0], 11);
			return (*Global_1945938)[(*uParam2)[iVar0]->f_6]->f_3;
		}
	}
	return 0;
}

int func_850(var uParam0)
{
	iVar0 = func_424(*uParam0);
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

int func_851(var uParam0, int iParam1)
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

void func_852(int* iParam0, int* iParam1)
{
	if (!func_724(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_344(iParam1, 19);
			func_866(iParam0, 23);
			func_932(iParam1, 2);
		}
	}
}

bool func_853(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (func_933(16))
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
					func_934(16);
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

void func_854(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_931(iParam0, (*uParam1)[iVar0], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			clear_bit((*uParam1)[iVar0], 14);
		}
		iVar0++;
	}
}

int func_855(int iParam0)
{
	return _money_get_cash_balance();
}

bool func_856(int iParam0)
{
	return (func_935(iParam0, 4) || func_935(iParam0, 5));
}

int func_857(int iParam0)
{
	return func_935(iParam0, 7);
}

int func_858(int iParam0)
{
	return func_935(iParam0, 6);
}

void func_859(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (is_bit_set(*iParam1, 14))
	{
		if (func_864(iParam1))
		{
			clear_bit(iParam1, 14);
			func_931(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_860(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_936(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_937(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_255(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_255(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_938(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_861(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_939(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_940(iParam1, 1))
	{
		func_941(iParam1, 1);
		return true;
	}
	return false;
}

bool func_862(int* iParam0, float fParam1, bool bParam2)
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

void func_863(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		disable_control_action(0, 1101824977, true);
		disable_control_action(0, 966551065, true);
		disable_control_action(0, 668058244, true);
		set_ped_reset_flag(Global_35, 203, true);
	}
}

bool func_864(int* iParam0)
{
	if (!is_string_null_or_empty(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_865(int iParam0)
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

void func_866(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

bool func_867(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

int func_868(int iParam0)
{
	if (!func_942(iParam0))
	{
		return 0;
	}
	iVar1 = func_943(iParam0);
	iVar0 = iVar1;
	if (iVar0 < 0 || iVar0 >= 27)
	{
		return 0;
	}
	return Global_1360165[iVar0];
}

Vector3 func_869(int iParam0, vector3 vParam1, float fParam4, int iParam5)
{
	vVar0 = { func_944(vParam1) };
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

void func_870(int iParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, int iParam15)
{
	if (iParam0 <= -1)
	{
		return;
	}
	if (bParam14)
	{
		iVar20 = func_945(iParam0, iParam1);
		func_946(&vVar0, &vVar10, iVar20, vParam3, vParam6, iParam9, iParam10, iParam11);
	}
	iVar21 = iParam2;
	iVar22 = 0;
	while (iVar22 < 3)
	{
		StringCopy(&cVar23, "", 32);
		iVar27 = 0;
		if (iVar21 > 0)
		{
			StringCopy(&cVar23, func_947(iParam0, 3), 32);
			iVar21 = (iVar21 - 1);
			iVar27 = 1;
		}
		func_949(iParam0, func_948(iParam0), iVar27, bParam14, &cVar23, *vVar0[iVar22], *vVar10[iVar22], vParam6, iVar22, 0, -1082130432, iParam12, iParam13, iParam15);
		iVar22++;
	}
}

void func_871(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < func_198(1))
	{
		func_950(Global_1359489[iVar0], iParam0);
		iVar0++;
	}
}

bool func_872(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_693(0);
	*uParam1 = { func_877(iParam0, func_834(0), iParam3, 0) };
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

struct<5> func_873(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_928(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_470(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_877(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_834(bParam1) };
			if (bParam2 && func_951(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_875(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_875(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_876(iParam0, &Var5, 1728382685))
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
			Var0 = { func_952(bParam1) };
			switch (func_953(iParam0))
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
			if (func_954(iParam0, -1823706425))
			{
				Var0 = { func_877(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_954(iParam0, -1483207246))
			{
				Var0 = { func_877(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_955(Var0, &Var27, bParam1, 0))
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

int func_874(int iParam0, int iParam1)
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

bool func_875(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_956(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_876(int iParam0, var uParam1, int iParam2)
{
	if (func_872(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_877(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_246(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_693(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_878(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_957(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_955(*uParam1, &Var0, bParam6, 0))
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
	if (!func_879(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_693(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_879(bool bParam0)
{
	if (func_405() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_693(bParam0));
}

int func_880(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_958(iParam0))
	{
		return 0;
	}
	if (!func_879(0))
	{
		return 0;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_881(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_321(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

bool func_882(var uParam0)
{
	if (!func_959(*uParam0, uParam0->f_4))
	{
		return false;
	}
	return true;
}

bool func_883(var uParam0)
{
	if (!func_882(uParam0))
	{
		return false;
	}
	if (func_960(uParam0->f_7, uParam0->f_8, func_762(&(uParam0->f_3), 4)))
	{
		return true;
	}
	if (!func_762(&(uParam0->f_3), 4))
	{
		if (func_961())
		{
			return true;
		}
	}
	return false;
}

int func_884(var uParam0)
{
	if (!func_103(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_104(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_109() - round((uParam0->f_1 * 1000f)));
}

bool func_885(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, float fParam5)
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
	if (func_962(get_entity_coords(iParam0, true, false), fParam1, fParam2, 1, fParam5))
	{
		return true;
	}
	return false;
}

bool func_886(float fParam0, float fParam1)
{
	if (is_ped_on_mount(Global_35))
	{
		return get_entity_speed(Global_35) < fParam0;
	}
	return get_entity_speed(Global_35) < fParam1;
}

bool func_887(vector3 vParam0, var uParam3)
{
	if (!func_762(&(uParam3->f_3), 8))
	{
		return true;
	}
	if (func_717(vParam0, 0.06f, 0.94f, 0.1f, 0.8f))
	{
		return true;
	}
	return false;
}

bool func_888(vector3 vParam0, var uParam3)
{
	fVar0 = func_889(vParam0, 1);
	return fVar0 < uParam3->f_6;
}

float func_889(vector3 vParam0, bool bParam3)
{
	vVar0 = { func_963(0) };
	vVar3 = { func_944(vParam0 - get_gameplay_cam_coord()) };
	if (bParam3)
	{
		return absf(get_angle_between_2d_vectors(vVar3.x, vVar3.y, vVar0.x, vVar0.y));
	}
	return get_angle_between_2d_vectors(vVar3.x, vVar3.y, vVar0.x, vVar0.y);
}

bool func_890(int iParam0)
{
	iParam0 = func_812(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_906(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_891(int iParam0)
{
	iParam0 = func_812(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_896(iParam0))
	{
		return;
	}
	iVar0 = func_769(iParam0);
	func_964(iParam0);
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	iVar1 = get_entity_model(iVar0);
	if (_0xaa9f048dcf69b6dc(iVar1))
	{
		if (!func_965(iVar1))
		{
			set_ped_model_is_suppressed(iVar1, false);
		}
	}
	delete_ped(&iVar0);
	func_966(iParam0, 0);
	func_668(iParam0);
}

void func_892(int iParam0)
{
	iParam0 = func_812(iParam0);
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
	func_967(&Var0);
	func_968(iParam0, Var0);
	func_969(&(Global_40.f_1095.f_1[iParam0]->f_15));
	func_970(&(Global_40.f_1095.f_1[iParam0]->f_298));
	func_971(&(Global_40.f_1095.f_1[iParam0]->f_356));
	func_972(&(Global_40.f_1095.f_1[iParam0]->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_973(iVar2, Global_40.f_1095.f_1[iParam0]->f_398[iVar2]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_974(iVar3, Global_40.f_1095.f_1[iParam0]->f_407[iVar3]);
		iVar3++;
	}
	func_975(&(Global_40.f_1095.f_1[iParam0]->f_420));
	func_976(&(Global_40.f_1095.f_1[iParam0]->f_422));
	func_977(&(Global_40.f_1095.f_1[iParam0]->f_425));
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

void func_893(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_894(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

int func_895(vector3 vParam0)
{
	return func_978(_get_map_zone_at_coords(vParam0, 10));
}

bool func_896(int iParam0)
{
	iParam0 = func_812(iParam0);
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

bool func_897(int iParam0)
{
	iParam0 = func_812(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_896(iParam0))
	{
		return false;
	}
	iVar0 = func_769(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

bool func_898(int iParam0)
{
	iParam0 = func_812(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_896(iParam0))
	{
		return false;
	}
	iVar0 = func_769(iParam0);
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

void func_899(int iParam0)
{
	iParam0 = func_812(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_896(iParam0))
	{
		return;
	}
	iVar0 = func_769(iParam0);
	if (is_entity_dead(iVar0))
	{
		return;
	}
	_set_entity_health(iVar0, 0, 0);
}

void func_900(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (is_player_dead(iVar0))
	{
	}
	func_923(iParam0);
	func_923(iParam0);
	func_979(iParam0, iParam1);
	func_980(iParam0, iParam1);
	func_981(iParam0, iParam1);
	iVar1 = func_769(iParam0);
	if (does_entity_exist(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_982(iVar1);
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
	iVar3 = func_769(iParam1);
	if (does_entity_exist(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_982(iVar3);
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
	func_814();
}

bool func_901()
{
	iVar0 = func_983();
	if (does_entity_exist(iVar0))
	{
		return true;
	}
	return false;
}

void func_902()
{
	iVar0 = func_983();
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	delete_object(&iVar0);
	func_984(0);
}

void func_903(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

int func_904(int iParam0)
{
	iParam0 = func_812(iParam0);
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

int func_905(int iParam0)
{
	iParam0 = func_812(iParam0);
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

int func_906(int iParam0)
{
	iParam0 = func_812(iParam0);
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

void func_907(int iParam0)
{
	iParam0 = func_812(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_985(&uVar0, &uVar1, &uVar2);
	func_986(iParam0, uVar0);
	func_987(iParam0, uVar1);
	func_988(iParam0, uVar2);
	func_989(iParam0, 1);
	func_990(iParam0, 1);
}

void func_908(int iParam0)
{
	iParam0 = func_812(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_991(iParam0, 1);
}

void func_909(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_812(iParam0);
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

bool func_910(int iParam0)
{
	iParam0 = func_812(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return func_992(iParam0, 1);
}

struct<2> func_911(int iParam0)
{
	iParam0 = func_812(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_993(iParam0, &uVar2))
	{
	}
	if (!func_994(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_912()
{
	if (func_995(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_995(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_995(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_995(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_995(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_995(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_913(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_996(iParam0);
	func_997(iParam0, uParam1);
	func_998(iParam0);
	func_999(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_1000(iParam0, iParam3, 0);
	}
	_update_ped_variation(iParam0, false, true, true, true, true);
}

void func_914(int iParam0)
{
	iParam0 = func_812(iParam0);
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

bool func_915(var uParam0, var uParam1)
{
	if ((func_787(uParam0, uParam1, 0) || func_781(uParam0, uParam1, 0)) || func_782(uParam0, uParam1, 0))
	{
		return true;
	}
	return false;
}

float func_916(var uParam0, int iParam1)
{
	iVar0 = uParam0->f_89;
	bVar1 = true;
	if (func_170(uParam0, 4))
	{
		bVar1 = false;
	}
	switch (iParam1)
	{
		case 0:
			if (bVar1 && uParam0->f_79 >= 0f)
			{
				return uParam0->f_79;
			}
			switch (iVar0)
			{
				case 3:
					return 8f;
				case 4:
					return 5f;
				case 0:
					return 4f;
				case 1:
					return 3.5f;
				case 2:
					return 3f;
				default:
					break;
			}
			break;
		case 1:
			if (bVar1 && uParam0->f_80 >= 0f)
			{
				return uParam0->f_80;
			}
			switch (iVar0)
			{
				case 3:
					return 4f;
				case 4:
					return 3f;
				case 0:
					return 2f;
				case 1:
					return 1.5f;
				case 2:
					return 1f;
				default:
					break;
			}
			break;
		case 2:
			if ((bVar1 || func_170(uParam0, 524288)) && uParam0->f_81 >= 0f)
			{
				return uParam0->f_81;
			}
			switch (iVar0)
			{
				case 3:
					return 2f;
				case 4:
					return 2f;
				case 0:
					return 1f;
				case 1:
					return 0.5f;
				case 2:
					return 0.25f;
				default:
					break;
			}
			break;
	}
	return 0f;
}

bool func_917(int iParam0)
{
	switch (iParam0)
	{
		case 14283:
		case 14284:
		case 14285:
		case 21030:
			return true;
		default:
			break;
	}
	return false;
}

bool func_918(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 11569:
		case 14410:
		case 14411:
		case 14412:
		case 14413:
		case 14414:
		case 14415:
		case 14416:
		case 56200:
			return true;
		default:
			break;
	}
	return false;
}

void func_919(bool bParam0)
{
	func_1001(bParam0);
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

bool func_920(int iParam0, var uParam1)
{
	if (!func_1002(iParam0))
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

int func_921(int iParam0)
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

void func_922(int iParam0)
{
	if (is_player_dead(player_id()))
	{
		return;
	}
	iVar0 = func_769(iParam0);
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
	if (func_992(iParam0, 64))
	{
		func_923(iParam0);
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
	bVar3 = func_648(42);
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
				func_1003(&((*Global_1900383)[iParam0]->f_27));
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
		func_923(iParam0);
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
		if (func_1004(1) < 1)
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
		func_1005(&((*Global_1900383)[iParam0]->f_26), bVar6);
	}
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_992(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = is_ped_in_writhe(iVar0);
	bVar10 = false;
	iVar11 = func_1006(iParam0);
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
	fVar15 = func_1007(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_1008(iParam0))
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
		func_1009((*Global_1900383)[iParam0]->f_26);
		func_1010((*Global_1900383)[iParam0]->f_26);
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
	if (func_1011(iVar0) && !bVar9)
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
	iVar21 = func_1004(iParam0);
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

void func_923(int iParam0)
{
	iParam0 = func_812(iParam0);
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

int func_924(int iParam0)
{
	if (!func_942(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

void func_925(int iParam0, int iParam1)
{
	if (!func_1012(iParam0))
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

int func_926()
{
	return &Global_1899515;
}

void func_927(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_1013(*uParam0);
	iVar1 = func_1014(*uParam0);
	iVar2 = func_1015(*uParam0);
	iVar3 = func_500(*uParam0);
	iVar4 = func_1016(*uParam0);
	iVar5 = func_1017(*uParam0);
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
	iVar6 = func_1018(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_1018(iVar1, iVar0);
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
	func_1019(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

struct<4> func_928(bool bParam0)
{
	return func_877(1328661203, func_1020(), -1591664384, bParam0);
}

bool func_929(int iParam0)
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

int func_930(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_931(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (func_252(iParam1->f_6))
	{
		if (bParam7 || is_bit_set(*iParam1, 11))
		{
			return;
		}
		func_413(&(iParam1->f_6), 0, 1);
	}
	if (!func_252(iParam1->f_6) && !is_bit_set(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_864(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_1021(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_252(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_938(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_1022(iParam1->f_6, 17, 1, 1);
				}
				if (is_bit_set(*iParam1, 1))
				{
					if (is_bit_set(*iParam1, 3))
					{
						func_1023(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_253(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (is_bit_set(*iParam1, 10))
				{
					func_1022(iParam1->f_6, 16, 1, 1);
				}
				if (!is_bit_set(*iParam1, 0) || is_bit_set(*iParam1, 13))
				{
					func_255(iParam1->f_6, 0, 1);
				}
				else
				{
					func_255(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

void func_932(int* iParam0, int iParam1)
{
	if (!func_411(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_344(iParam0, 14);
		}
	}
}

bool func_933(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_934(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_935(int iParam0, int iParam1)
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

bool func_936(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

bool func_937(int iParam0, bool bParam1)
{
	if (bParam1 && !func_252(iParam0))
	{
		return false;
	}
	return !func_694(iParam0, 4);
}

void func_938(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam3 && !func_252(iParam0))
	{
		return;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = func_474(iParam0);
	func_1022(iParam0, 18, 0, 1);
	func_1022(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = _uiprompt_get_group_id_for_target_entity(iParam1);
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam4, iParam2);
}

bool func_939(int iParam0, bool bParam1)
{
	if (bParam1 && !func_252(iParam0))
	{
		return false;
	}
	iVar0 = func_474(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

bool func_940(int iParam0, bool bParam1)
{
	if (bParam1 && !func_252(iParam0))
	{
		return false;
	}
	iVar0 = func_474(iParam0);
	return _uiprompt_is_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_941(int iParam0, bool bParam1)
{
	if (bParam1 && !func_252(iParam0))
	{
		return;
	}
	iVar0 = func_474(iParam0);
	_uiprompt_restart_modes((*Global_1945938)[iVar0]->f_3);
}

bool func_942(int iParam0)
{
	return iParam0 > -1;
}

int func_943(int iParam0)
{
	if (!func_942(iParam0))
	{
		return -1;
	}
	if (iParam0 >= func_198(1))
	{
		return -1;
	}
	if (iParam0 >= 3 || iParam0 < 0)
	{
		return -1;
	}
	return Global_1359489[iParam0];
}

Vector3 func_944(vector3 vParam0)
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

int func_945(int iParam0, int iParam1)
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

void func_946(var uParam0, var uParam1, int iParam2, vector3 vParam3, vector3 vParam6, float fParam9, float fParam10, float fParam11)
{
	fVar0 = (fParam9 / 2f);
	fVar1 = (fParam10 / 2f);
	switch (iParam2)
	{
		case 0:
			vVar5 = { func_944(vParam6 - vParam3) };
			vVar8 = { func_1024(vVar5, 0f, 0f, 1f) };
			*(*uParam0)[0] = { vParam3 + func_1025(0f, 0f, 0f, fParam11, 0.1f) };
			*(*uParam0)[1] = { vParam3 + vVar8 * FtoV(get_random_float_in_range(fParam9, fParam10)) + func_1025(0f, 0f, 0f, fParam11, 0.1f) };
			*(*uParam0)[2] = { vParam3 - vVar8 * FtoV(get_random_float_in_range(fParam9, fParam10)) + func_1025(0f, 0f, 0f, fParam11, 0.1f) };
			*(*uParam1)[0] = { vVar5 };
			*(*uParam1)[1] = { vVar5 };
			*(*uParam1)[2] = { vVar5 };
			break;
		case 1:
			vVar2 = { func_1026() };
			*(*uParam1)[0] = { func_944(vVar2) };
			*(*uParam1)[1] = { -*(*uParam1)[0] };
			*(*uParam0)[0] = { vParam3 - *(*uParam1)[0] * FtoV(get_random_float_in_range(fVar0, fVar1)) + func_1025(0f, 0f, 0f, fParam11, 0.1f) };
			*(*uParam0)[1] = { vParam3 - *(*uParam1)[1] * FtoV(get_random_float_in_range(fVar0, fVar1)) + func_1025(0f, 0f, 0f, fParam11, 0.1f) };
			break;
		case 2:
			vVar2 = { func_1026() };
			*(*uParam1)[0] = { func_944(vVar2) };
			func_1027(&vVar2, &(vVar2.f_1), 120f);
			*(*uParam1)[1] = { func_944(vVar2) };
			func_1027(&vVar2, &(vVar2.f_1), 120f);
			*(*uParam1)[2] = { func_944(vVar2) };
			*(*uParam0)[0] = { vParam3 - *(*uParam1)[0] * FtoV(get_random_float_in_range(fVar0, fVar1)) + func_1025(0f, 0f, 0f, fParam11, 0.1f) };
			*(*uParam0)[1] = { vParam3 - *(*uParam1)[1] * FtoV(get_random_float_in_range(fVar0, fVar1)) + func_1025(0f, 0f, 0f, fParam11, 0.1f) };
			*(*uParam0)[2] = { vParam3 - *(*uParam1)[2] * FtoV(get_random_float_in_range(fVar0, fVar1)) + func_1025(0f, 0f, 0f, fParam11, 0.1f) };
			break;
	}
}

char* func_947(int iParam0, int iParam1)
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

var func_948(int iParam0)
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

void func_949(int iParam0, var uParam1, int iParam2, bool bParam3, char* sParam4, vector3 vParam5, struct<2> Param8, int iParam10, vector3 vParam11, int iParam14, int iParam15, int iParam16, float fParam17, int iParam18, int iParam19)
{
	if (Global_1359489->f_63.f_241 >= 10)
	{
		return;
	}
	if (bParam3)
	{
		Var0.f_10 = func_1028(get_heading_from_vector_2d(Param8, Param8.f_1));
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
		func_1029(Global_1359489->f_63[iParam14]);
	}
}

void func_950(int iParam0, int iParam1)
{
	if (!func_1012(iParam0))
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

bool func_951(int iParam0, bool bParam1)
{
	if (func_953(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_648(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_952(bool bParam0)
{
	iVar0 = func_693(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_877(271701509, func_928(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_877(271701509, func_928(bParam0), 12999093, 0);
}

int func_953(int iParam0)
{
	if (!func_246(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_954(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_953(iParam0);
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

bool func_955(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_693(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_956(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_246(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_877(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_693(bParam6), &Var0, 0);
	return uVar4;
}

bool func_957(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

bool func_958(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_959(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (!func_103(&uParam0))
	{
		return false;
	}
	if (func_884(&uParam0) <= iParam3 + 500)
	{
		return false;
	}
	return true;
}

bool func_960(float fParam0, float fParam1, bool bParam2)
{
	func_1030(&uVar0, &uVar1, &iVar2, &iVar3, 529461124, 1410914475, -1497929239, 665185216, 2);
	if (!bParam2)
	{
		if (iVar2 != 0 || iVar3 != 0)
		{
			return true;
		}
	}
	if (!func_886(fParam0, fParam1))
	{
		return true;
	}
	return false;
}

bool func_961()
{
	if (((((((((((is_control_pressed(0, -1879280170) || is_control_pressed(0, 1537201378)) || is_control_pressed(0, -1175108432)) || is_control_pressed(0, 1520437207)) || is_control_pressed(0, -1292666904)) || is_control_pressed(0, -640622144)) || is_control_pressed(0, -455946723)) || is_control_pressed(0, -1242632265)) || is_control_pressed(0, -485697785)) || is_control_pressed(0, -822242784)) || is_control_pressed(0, 782960533)) || is_control_pressed(0, -874806616))
	{
		return true;
	}
	return false;
}

bool func_962(vector3 vParam0, float fParam3, float fParam4, bool bParam5, float fParam6)
{
	fVar0 = func_140(Global_35, vParam0, 1);
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

Vector3 func_963(int iParam0)
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
	return func_944((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

void func_964(int iParam0)
{
	iParam0 = func_812(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_769(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_1031(iVar6);
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

bool func_965(int iParam0)
{
	if (!func_1032(iParam0))
	{
		return false;
	}
	if (!func_1033())
	{
		return true;
	}
	return false;
}

void func_966(int iParam0, int iParam1)
{
	iParam0 = func_812(iParam0);
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

void func_967(var uParam0)
{
	*uParam0 = -377364164;
	uParam0->f_1 = 357708345;
}

void func_968(int iParam0, struct<2> Param1)
{
	iParam0 = func_812(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_1034(iParam0, Param1))
	{
	}
	if (!func_1035(iParam0, Param1.f_1))
	{
	}
}

void func_969(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_1036((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_970(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 57)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_971(var uParam0)
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

void func_972(var uParam0)
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

void func_973(int iParam0, var uParam1)
{
	iVar0 = 100;
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_974(int iParam0, var uParam1)
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

void func_975(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1f;
}

void func_976(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -15;
}

void func_977(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
}

int func_978(int iParam0)
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

void func_979(int iParam0, int iParam1)
{
	_copy_memory(&(Global_1900383->f_508), Global_40.f_1095.f_1[iParam1], 436);
	_copy_memory(Global_40.f_1095.f_1[iParam1], Global_40.f_1095.f_1[iParam0], 436);
	_copy_memory(Global_40.f_1095.f_1[iParam0], &(Global_1900383->f_508), 436);
}

void func_980(int iParam0, int iParam1)
{
	_copy_memory(&(Global_1900383->f_463), (*Global_1900383)[iParam1], 45);
	_copy_memory((*Global_1900383)[iParam1], (*Global_1900383)[iParam0], 45);
	_copy_memory((*Global_1900383)[iParam0], &(Global_1900383->f_463), 45);
}

int func_981(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	Var29.f_9 = -1591664384;
	if (!func_1037(iParam0, &Var0))
	{
		return 0;
	}
	bVar58 = false;
	if (!func_1037(iParam1, &Var29))
	{
		bVar58 = true;
	}
	if (bVar58)
	{
		iVar59 = func_1038(iParam1);
		if (iVar59 == 0)
		{
			return 0;
		}
		if (!func_1039(Var0, Var0.f_5, iVar59, 0, 0))
		{
			return 0;
		}
	}
	else if (!func_1040(Var0, Var29, 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_982(int iParam0)
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
	if (func_1041(iParam0))
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
	if (func_662(iParam0))
	{
		iVar3 = func_663(iParam0);
		if (func_1042(iVar3))
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

int func_983()
{
	return Global_1900383->f_393;
}

void func_984(int iParam0)
{
	Global_1900383->f_393 = iParam0;
}

int func_985(var uParam0, int iParam1, var uParam2)
{
	*uParam0 = 0;
	*iParam1 = 0;
	*uParam2 = 0;
	if (func_808())
	{
		if (func_155())
		{
			bVar0 = false;
			if (!func_410((*Global_1835011)[15]->f_1, 1) && !func_648(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*uParam0 = func_1043();
				*iParam1 = func_1044();
				*uParam2 = func_1045();
				return 1;
			}
			else
			{
				*uParam0 = func_1046();
				*iParam1 = func_1047();
				*uParam2 = func_1048();
				return 1;
			}
		}
		else if (func_157())
		{
			if (!func_410((*Global_1835011)[60]->f_1, 1))
			{
				*uParam0 = func_1049();
				*iParam1 = func_1050();
				*uParam2 = func_1051();
				return 1;
			}
			else
			{
				*uParam0 = func_1052();
				*iParam1 = func_1053();
				*uParam2 = func_1054();
				return 1;
			}
		}
	}
	else if (func_155())
	{
		*uParam0 = func_1055();
		*iParam1 = func_1056();
		*uParam2 = func_1057();
		return 1;
	}
	else if (func_157())
	{
		*uParam0 = func_1058();
		*iParam1 = func_1059();
		*uParam2 = func_1060();
		return 1;
	}
	return 0;
}

void func_986(int iParam0, var uParam1)
{
	iParam0 = func_812(iParam0);
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

void func_987(int iParam0, var uParam1)
{
	iParam0 = func_812(iParam0);
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

void func_988(int iParam0, var uParam1)
{
	iParam0 = func_812(iParam0);
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

void func_989(int iParam0, int iParam1)
{
	iParam0 = func_812(iParam0);
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

void func_990(int iParam0, int iParam1)
{
	iParam0 = func_812(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_904(iParam0);
	if (!is_model_valid(iVar0))
	{
		func_985(&uVar1, &iVar0, &uVar2);
	}
	iVar3 = get_default_max_attribute_rank(iVar0, 7);
	if (iParam1 > iVar3)
	{
		return;
	}
	fVar4 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iParam1));
	Global_40.f_1095.f_1[iParam0]->f_372 = iParam1;
	Global_40.f_1095.f_1[iParam0]->f_372.f_1 = fVar4;
	func_1061(iParam1);
	iVar5 = func_769(iParam0);
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

void func_991(int iParam0, int iParam1)
{
	iParam0 = func_812(iParam0);
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

bool func_992(int iParam0, int iParam1)
{
	iParam0 = func_812(iParam0);
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

bool func_993(int iParam0, var uParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_1037(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = func_1062(Var0, 1415981582, 0);
	if (!func_246(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_994(int iParam0, var uParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_1037(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = func_1062(Var0, -2119169513, 0);
	if (!func_246(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_995(int iParam0, var uParam1)
{
	if (!func_1063(856287005, iParam0))
	{
		return false;
	}
	Var0 = { func_1064() };
	*uParam1 = func_1062(Var0, iParam0, 0);
	if (!func_246(*uParam1, 0))
	{
		return false;
	}
	return true;
}

void func_996(int iParam0)
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

void func_997(int iParam0, var uParam1)
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
	func_1065(iParam0, *uParam1);
	func_1065(iParam0, uParam1->f_1);
}

void func_998(int iParam0)
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

void func_999(int iParam0, var uParam1)
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
	func_1065(iParam0, *uParam1);
	func_1065(iParam0, uParam1->f_1);
	func_1065(iParam0, uParam1->f_2);
	func_1065(iParam0, uParam1->f_3);
	func_1065(iParam0, uParam1->f_4);
	func_1065(iParam0, uParam1->f_5);
}

int func_1000(int iParam0, int iParam1, bool bParam2)
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

void func_1001(bool bParam0)
{
	_0xb6fd96420c0126a1(-1056478928, bParam0);
}

bool func_1002(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

void func_1003(var uParam0)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1067(func_1066(255), 109029619));
	}
	else if (func_155())
	{
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_157();
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_1004(int iParam0)
{
	iParam0 = func_812(iParam0);
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

void func_1005(var uParam0, bool bParam1)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1067(func_1066(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_155())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_157())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (compare_strings(sVar0, "", false, -1) != 0)
		{
			set_blip_name_from_text_file(*uParam0, sVar0);
		}
	}
}

int func_1006(int iParam0)
{
	iParam0 = func_812(iParam0);
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

float func_1007(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

float func_1008(int iParam0)
{
	iParam0 = func_812(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_904(iParam0);
	if (!is_model_valid(iVar0))
	{
		return -1f;
	}
	iVar1 = func_1004(iParam0);
	iVar2 = get_default_max_attribute_rank(iVar0, 7);
	fVar3 = _0xeb67d4e056c85a81(iVar1);
	fVar4 = _0x78d8c1d4eb80c588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_1004(iParam0) + 1;
	fVar6 = func_1068(iParam0);
	fVar7 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar1));
	fVar8 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_1069(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_1009(int iParam0)
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

void func_1010(int iParam0)
{
	_set_blip_flash_style(iParam0, 673950256);
	_set_blip_flash_style(iParam0, 561559387);
	_set_blip_flash_style(iParam0, -201249929);
}

bool func_1011(int iParam0)
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

bool func_1012(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

int func_1013(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_324(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_1014(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_1015(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_1016(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_1017(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_1018(int iParam0, int iParam1)
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

void func_1019(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1070(uParam0, iParam6);
	func_1071(uParam0, iParam5);
	func_1072(uParam0, iParam4);
	func_1073(uParam0, iParam3);
	func_1074(uParam0, iParam2);
	func_1075(uParam0, iParam1);
}

struct<4> func_1020()
{
	return Var0;
}

int func_1021(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_694(iVar0, 2))
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
				func_1076(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, uParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_1022(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_252(iParam0))
	{
		return;
	}
	iVar0 = func_474(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_1023(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (bParam4 && !func_252(iParam0))
	{
		return;
	}
	iVar0 = func_474(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(10, sParam1, sParam2, sParam3));
}

Vector3 func_1024(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

Vector3 func_1025(vector3 vParam0, float fParam3, float fParam4)
{
	vVar0 = { get_random_float_in_range(-1f, 1f), get_random_float_in_range(-1f, 1f), 0f };
	fVar3 = (fParam4 / 2f);
	vVar0 = { func_1077(vVar0, get_random_float_in_range(0f, fParam3)) };
	vVar0.f_2 = get_random_float_in_range(-fVar3, fVar3);
	return vParam0 + vVar0;
}

Vector3 func_1026()
{
	vVar0 = { 1f, 0f, 0f };
	func_1027(&vVar0, &(vVar0.f_1), get_random_float_in_range(0f, 360f));
	return vVar0;
}

void func_1027(var uParam0, var uParam1, float fParam2)
{
	fVar0 = *uParam0;
	fVar1 = *uParam1;
	*uParam0 = ((fVar0 * cos(fParam2)) - (fVar1 * sin(fParam2)));
	*uParam1 = ((fVar0 * sin(fParam2)) + (fVar1 * cos(fParam2)));
}

float func_1028(float fParam0)
{
	return (fParam0 * 0.01745329f);
}

int func_1029(var uParam0)
{
	if (_does_scenario_point_exist(uParam0->f_23))
	{
		if (_get_ped_using_scenario_point(uParam0->f_23) != func_1078())
		{
			return 0;
		}
		else
		{
			_delete_scenario_point(uParam0->f_23);
		}
	}
	if (func_250(&(uParam0->f_4), 50, 10, 0))
	{
		if (uParam0->f_3 != 0)
		{
			uParam0->f_23 = func_82(uParam0->f_3, uParam0->f_4, func_1079(uParam0->f_10), uParam0->f_11, uParam0->f_12, 0);
		}
		_0xe69fda40aac3efc0(uParam0->f_23, 0);
		uParam0->f_15 = 1;
		return 1;
	}
	return 0;
}

void func_1030(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	*uParam0 = floor((get_control_normal(iParam8, iParam4) * 127f));
	*uParam1 = floor((get_control_normal(iParam8, iParam5) * 127f));
	*iParam2 = floor((get_control_normal(iParam8, iParam6) * 127f));
	*iParam3 = floor((get_control_normal(iParam8, iParam7) * 127f));
}

int func_1031(int iParam0)
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

bool func_1032(int iParam0)
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

bool func_1033()
{
	return _unlock_is_unlocked(99890643);
}

bool func_1034(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_1037(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { func_877(iParam1, Var0, 1415981582, 0) };
	return func_1080(Var29, 1);
}

bool func_1035(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_1037(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { func_877(iParam1, Var0, -2119169513, 0) };
	return func_1080(Var29, 1);
}

void func_1036(var uParam0)
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

bool func_1037(int iParam0, var uParam1)
{
	if (!func_1081(iParam0))
	{
		return false;
	}
	iVar0 = func_1038(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1.f_9 = -1591664384;
	Var15 = { func_928(0) };
	if (!func_1082(Var15, iVar0, &Var1, 0, 0))
	{
		return false;
	}
	if (!func_1083(&Var1, uParam1))
	{
		return false;
	}
	return true;
}

int func_1038(int iParam0)
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

bool func_1039(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10)
{
	if (!func_879(bParam10))
	{
		return func_1084(Param0, Param4, iParam8, 1, bParam9, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_955(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (func_1085(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return true;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, iParam8))
	{
		return false;
	}
	if (!_0xdccaa7c3bfd88862(func_693(0), &Param0, &Param4, iParam8, Var0.f_11, &Var14))
	{
		return false;
	}
	if (bParam9)
	{
		if (!func_1080(Var14, 1))
		{
		}
	}
	return true;
}

bool func_1040(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	if (!func_879(bParam9))
	{
		return func_1086(Param0, Param4, iParam8, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return false;
	}
	if (func_1085(&Param0, &Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_955(Param0, &Var0, bParam9, 1) || !func_955(Param4, &Var14, bParam9, 1))
	{
		return false;
	}
	if (func_1085(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return false;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, Var14.f_9) || !_inventory_fits_slot_id(Var14.f_4, Var0.f_9))
	{
		return false;
	}
	iVar28 = func_693(0);
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

bool func_1041(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_1087(get_entity_model(iParam0)))
	{
		return true;
	}
	if (decor_exist_on(iParam0, "HorseCompanion"))
	{
		return true;
	}
	return false;
}

bool func_1042(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 5)
	{
		return true;
	}
	return false;
}

int func_1043()
{
	return 1342496140;
}

int func_1044()
{
	return 446670976;
}

int func_1045()
{
	return 1;
}

int func_1046()
{
	return -868094182;
}

int func_1047()
{
	return 1074477367;
}

int func_1048()
{
	return 1;
}

int func_1049()
{
	return -997197050;
}

int func_1050()
{
	return -2063289686;
}

int func_1051()
{
	return 2;
}

int func_1052()
{
	return -868094182;
}

int func_1053()
{
	return 1074477367;
}

int func_1054()
{
	return 1;
}

int func_1055()
{
	return 1235275977;
}

int func_1056()
{
	return 2030804811;
}

int func_1057()
{
	return 1;
}

int func_1058()
{
	return 1974379573;
}

int func_1059()
{
	return 2024948086;
}

int func_1060()
{
	return 1;
}

void func_1061(int iParam0)
{
	if (func_1088() < iParam0)
	{
		func_1089(iParam0);
	}
}

int func_1062(struct<4> Param0, int iParam4, int iParam5)
{
	Var0.f_9 = -1591664384;
	if (func_1090(Param0, iParam4, &Var0, iParam5))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_1063(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		iVar5 = func_953(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_1091(iParam0);
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

struct<4> func_1064()
{
	Var0 = { func_928(0) };
	return func_877(856287005, Var0, -218846335, 0);
}

void func_1065(int iParam0, int iParam1)
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

char* func_1066(int iParam0)
{
	if (iParam0 == 255)
	{
		if (func_1092(37, iParam0))
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
	if (func_1092(37, iParam0))
	{
		return _0xd8402b858f4ddd88(&((*Global_1108178)[iParam0]->f_12), get_length_of_literal_string(&((*Global_1108178)[iParam0]->f_12)));
	}
	return get_player_name(&(Global_1225639->f_120[iParam0]));
}

char* func_1067(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_1093(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

float func_1068(int iParam0)
{
	iParam0 = func_812(iParam0);
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

float func_1069(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

void func_1070(var uParam0, int iParam1)
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

void func_1071(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || shift_left(iParam1, 22));
}

void func_1072(var uParam0, int iParam1)
{
	iVar0 = func_1014(*uParam0);
	iVar1 = func_1013(*uParam0);
	if (iParam1 < 1 || iParam1 > func_1018(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || shift_left(iParam1, 17));
}

void func_1073(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || shift_left(iParam1, 12));
}

void func_1074(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || shift_left(iParam1, 6));
}

void func_1075(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || shift_left(iParam1, 0));
}

void func_1076(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, var uParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_476(iParam0, 1);
	func_477(iParam0, 1);
	func_478(iParam0, 128);
}

Vector3 func_1077(vector3 vParam0, float fParam3)
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

int func_1078()
{
	return -1;
}

float func_1079(float fParam0)
{
	return (fParam0 * 57.29578f);
}

bool func_1080(struct<4> Param0, int iParam4)
{
	if (!func_879(0))
	{
		return func_1094(Param0, iParam4, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_955(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!_0x734311e2852760d0(func_693(0), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_1081(int iParam0)
{
	iVar0 = func_1038(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1 = { func_928(0) };
	if (func_1095(&Var1, iVar0, 0) > 0)
	{
		return true;
	}
	return false;
}

bool func_1082(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	iVar0 = func_693(bParam7);
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

bool func_1083(var uParam0, var uParam1)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (!_0x025a1b1fb03fbf61(func_693(0), uParam0, uParam1, 29, 1))
	{
		return false;
	}
	return true;
}

int func_1084(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10, bool bParam11)
{
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	if (!func_955(Param0, &Var0, 1, 0))
	{
		return -1;
	}
	if (func_1085(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return -1;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, iParam8))
	{
		return -1;
	}
	iVar14 = func_956(Var0.f_4, Param4, iParam8, 0);
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
	Var16 = { func_1096(&Var0) };
	Var16.f_4 = { Param4 };
	Var16.f_11 = iParam8;
	Var16.f_10 = bParam10;
	iVar32 = func_1097(1168099063, &Var16, bParam9);
	if (iVar32 == -1)
	{
		return -1;
	}
	return iVar32;
}

bool func_1085(var uParam0, bool bParam1)
{
	if (((*uParam0 == *bParam1 && uParam0->f_1 == bParam1->f_1) && uParam0->f_2 == bParam1->f_2) && uParam0->f_3 == bParam1->f_3)
	{
		return true;
	}
	return false;
}

int func_1086(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return -1;
	}
	if (func_1085(&Param0, &Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_955(Param0, &Var0, 1, 0) || !func_955(Param4, &Var14, 1, 0))
	{
		return -1;
	}
	if (func_1085(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return -1;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, Var14.f_9) || !_inventory_fits_slot_id(Var14.f_4, Var0.f_9))
	{
		return -1;
	}
	Var28 = { func_1096(&Var0) };
	Var28.f_4 = { Var14.f_5 };
	Var28.f_11 = Var14.f_9;
	Var28.f_10 = (Var14.f_10 || iParam8);
	Var44 = { func_1096(&Var14) };
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
					func_1098(iVar60, 1);
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
		iVar60 = func_1097(1168099063, &Var28, 0);
		iVar60 = func_1097(1168099063, &Var44, 0);
	}
	return iVar60;
}

bool func_1087(int iParam0)
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

int func_1088()
{
	return Global_40.f_1095.f_3135;
}

void func_1089(int iParam0)
{
	Global_40.f_1095.f_3135 = iParam0;
}

bool func_1090(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x22e590f108289a9d(func_693(bParam6), &uParam0, iParam4, &Var0))
	{
		return false;
	}
	if (!func_955(Var0, uParam5, bParam6, 0))
	{
		return false;
	}
	return true;
}

int func_1091(int iParam0)
{
	if (!func_246(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_953(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return _item_database_get_has_slot_count(iVar0);
}

bool func_1092(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_1099(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_1100())
	{
		return func_1099(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_1099(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

char* func_1093(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

int func_1094(struct<4> Param0, int iParam4, bool bParam5)
{
	iVar0 = -1;
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_955(Param0, &Var1, 1, 0))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_470(Var1.f_4);
	if (iVar15 == -1784221369)
	{
		Var16 = { func_1101(Param0, 1) };
		Var16.f_10 = iParam4;
		iVar0 = func_1102(-1230526146, &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -1037537535)
	{
		Var44 = { func_1103(Param0, 1) };
		Var44.f_10 = iParam4;
		iVar0 = func_1104(-1230526146, &Var44, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var61 = { func_1096(&Var1) };
		Var61.f_10 = iParam4;
		iVar0 = func_1097(-1230526146, &Var61, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_1095(var uParam0, int iParam1, bool bParam2)
{
	return _0x033ee4b89f3ac545(func_693(bParam2), uParam0, iParam1);
}

struct<16> func_1096(var uParam0)
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

int func_1097(int iParam0, var uParam1, bool bParam2)
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
					func_1098(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_1098(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16))
	{
		func_1098(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_1098(int iParam0, int iParam1)
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
	func_1105(iParam0, iParam1);
}

bool func_1099(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_1100()
{
	return Global_1109400->f_245;
}

struct<28> func_1101(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var28.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_693(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_1096(&Var28) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_1102(int iParam0, var uParam1, bool bParam2)
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
					func_1098(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_1098(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 28))
	{
		func_1098(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<17> func_1103(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_693(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_1096(&Var17) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_1104(int iParam0, var uParam1, bool bParam2)
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
					func_1098(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_1098(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 17))
	{
		func_1098(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_1105(int iParam0, int iParam1)
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

