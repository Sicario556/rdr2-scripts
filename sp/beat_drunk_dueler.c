void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	Local_211.f_3 = func_1(&vScriptParam_0);
	Local_211.f_43 = func_2();
	iLocal_502 = func_2();
	Local_211.f_161 = func_3(vScriptParam_0.z, 2);
	if (Local_211.f_161)
	{
		func_4(143, 0, 0, 1, 0, 0, 0);
		func_4(117, 0, 0, 1, 0, 0, 0);
		func_4(118, 0, 0, 1, 0, 0, 0);
	}
	iLocal_210 = func_5(88, 2, 0);
	if (iVar500 != 76 && iVar500 != 92)
	{
		func_6();
	}
	func_7(&Local_211, 1);
	func_8(&(Local_211.f_5));
	func_9(&(Local_211.f_5), 1);
	func_10(&(Local_211.f_5), 1);
	func_11(&(Local_211.f_5), 1);
	func_12(&(Local_211.f_5), 1);
	func_13(&(Local_211.f_5), 0);
	if (has_force_cleanup_occurred(523))
	{
		iLocal_715 = 1;
	}
	while (true)
	{
		func_14(bVar713, 1769, 0);
		if (bVar713)
		{
			wait(0);
		}
		else
		{
			switch (iVar405)
			{
				case 0:
					if (func_15())
					{
						func_16();
						iLocal_407 = 1;
					}
					break;
				case 1:
					if (func_17(&Local_211, &vScriptParam_0, 0, 0, 0, 0, 0, 1))
					{
						func_18(&Local_211, &uLocal_717, &uLocal_716);
						func_19();
						func_20();
						iLocal_407 = 3;
					}
					if (Local_211.f_160)
					{
						func_6();
					}
					break;
				case 3:
					if (func_21())
					{
						func_22();
						iLocal_407 = 4;
					}
					break;
				case 4:
					if (!func_23(&Local_211, &iLocal_656, iLocal_210, 0, 1, 0, 1, 0))
					{
						func_6();
					}
					if ((((iVar404 != 3 && iVar404 != 8) && iVar404 != 10) && iVar404 != 11) && iVar404 != 9)
					{
						if (!Local_211.f_46)
						{
							if (!func_3(iVar406, 1024) && (func_24(&(iLocal_656[0]), 0, &(Local_211.f_5), &uLocal_451, 0, 0) || func_3(iVar406, 262144)))
							{
								Local_211.f_46 = 1;
							}
							if (iVar404 > 3)
							{
								if (func_25(&(iLocal_656[0]), Global_35, 1, 1) < 1f)
								{
									if (iVar404 < 14 && (is_ped_running_ragdoll_task(&(iLocal_656[0])) || is_ped_ragdoll(&(iLocal_656[0]))))
									{
										func_26(14);
									}
								}
							}
							if (Local_211.f_46)
							{
								if (does_blip_exist(&(uLocal_659[0])))
								{
									remove_blip(uLocal_659[0]);
								}
								func_27(202);
								func_28(202);
								func_27(205);
								func_28(205);
								func_29(1);
								if (iVar449 != 16384)
								{
									if (func_3(iVar406, 2097152))
									{
										func_30(11, 0, 0, 0, Local_211.f_5.f_10, 0, 1065353216, 0);
									}
									else if (is_entity_dead(&(iLocal_656[0])))
									{
										if (func_31())
										{
											if (func_32(0))
											{
												func_30(1, 0, 0, 0, &(iLocal_656[0]), 0, 1065353216, 0);
											}
										}
										else
										{
											func_30(1, 0, 0, 0, &(iLocal_656[0]), 0, 1065353216, 0);
										}
									}
									if (!func_3(iVar406, 16))
									{
										func_33(0);
										if (func_34(Global_35, &(iLocal_656[0])))
										{
											func_35(&uLocal_408, 4096);
										}
										if (func_3(iVar406, 262144))
										{
											func_37(&(iLocal_656[0]), Global_35, func_36("TAUNT_C"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
										}
										else
										{
											func_37(&(iLocal_656[0]), Global_35, "RE_DD_VHT_V2_AGGRO", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
										}
									}
									func_38(&Local_529, 1, 1, 1, 0);
									func_39(&Local_111, &uLocal_17);
									if (func_40(Local_452))
									{
										func_41(Local_452);
									}
									set_ped_can_be_targetted(&(iLocal_656[0]), true);
									func_26(10);
								}
								else
								{
									func_33(0);
									func_42(&iLocal_656, Global_35, 0, -1, 1148846080, 0, 4);
									set_ped_can_be_targetted(&(iLocal_656[0]), false);
									func_26(15);
								}
							}
						}
					}
					if (func_43(&Local_211, &iLocal_656, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0))
					{
						Local_211.f_50 = 1;
						func_6();
					}
					if (func_44())
					{
						Local_211.f_50 = 1;
						func_6();
					}
					break;
			}
			wait(Local_211.f_158);
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

void func_4(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!func_45(iParam0))
	{
		return;
	}
	if (func_31())
	{
		func_46(iParam0, 1);
	}
	if (iParam0 == 85)
	{
		_0xcc3edc5614b03f61(18);
	}
	else if (iParam0 == 86)
	{
		_0xcc3edc5614b03f61(19);
	}
	else if (iParam0 == 87)
	{
		_0xcc3edc5614b03f61(20);
	}
	else if (iParam0 == 135)
	{
		_0xcc3edc5614b03f61(73);
	}
	else if (iParam0 == 20)
	{
		_0xcc3edc5614b03f61(6);
	}
	else if (iParam0 == 19)
	{
		_0xcc3edc5614b03f61(7);
	}
	else if (iParam0 == 12)
	{
		_0xcc3edc5614b03f61(10);
	}
	else if (iParam0 == 16)
	{
		_0xcc3edc5614b03f61(11);
	}
	else if (iParam0 == 17)
	{
		_0xcc3edc5614b03f61(13);
	}
	else if (iParam0 == 18)
	{
		_0xcc3edc5614b03f61(14);
	}
	else if (iParam0 == 14)
	{
		_0xcc3edc5614b03f61(15);
	}
	if (iParam0 == 95)
	{
		if (!func_47(32768))
		{
			if (chal_is_goal_active(-816321659, -1044347982))
			{
				chal_add_goal_progress_int_by_score_id(-1718529554, 1);
			}
		}
	}
	else if (iParam0 == 102)
	{
		if (!func_31())
		{
			(*Global_1347702)[iParam0]->f_35 = 104;
			(*Global_1347702)[104]->f_48 = (*Global_1347702)[iParam0]->f_15;
		}
	}
	func_48(iParam0, 0, iParam3);
	if (func_45((*Global_1347702)[iParam0]->f_35))
	{
		func_49((*Global_1347702)[iParam0]->f_35);
		if (iParam1 == 1)
		{
			func_50((*Global_1347702)[iParam0]->f_35, 0);
			if (func_51(iParam0))
			{
				(*Global_1347702)[(*Global_1347702)[iParam0]->f_35]->f_43 = (*Global_1347702)[iParam0]->f_43;
			}
		}
	}
	else
	{
		func_52();
	}
	if (!func_53((*Global_1347702)[iParam0]->f_12, 1) && !func_53((*Global_1347702)[iParam0]->f_12, 33554432))
	{
		if (func_53((*Global_1347702)[iParam0]->f_12, 262144))
		{
			if (bParam5)
			{
				func_54(iParam0);
			}
			bParam5 = false;
			cVar0 = func_55((*Global_1347702)[iParam0]->f_15);
			if (!is_string_null_or_empty(&cVar0))
			{
				_0xe824ce7d13fcb300(get_hash_key(&cVar0), 2);
			}
			func_56(&((*Global_1347702)[iParam0]->f_12), 262144);
		}
	}
	if (bParam2 == 1)
	{
		bParam2 = func_53((*Global_1347702)[iParam0]->f_12, 4);
	}
	if (!func_47(32768))
	{
		func_57((*Global_1347702)[iParam0]->f_15, bParam4, bParam2, bParam6, bParam5);
	}
	else
	{
		func_58((*Global_1347702)[iParam0]->f_15, bParam6);
	}
	func_59(iParam0);
}

int func_5(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return (func_60(iParam0) % iParam1);
	}
	return (func_61(iParam0) % iParam1);
}

void func_6()
{
	func_62(&Local_211, &iLocal_656, &uLocal_659, iLocal_210, uVar715, uVar714, 0, 1, 0, 1);
	if (does_blip_exist(&(uLocal_659[0])))
	{
		remove_blip(uLocal_659[0]);
	}
	if (!is_entity_dead(&(iLocal_656[0])) && !get_ped_config_flag(&(iLocal_656[0]), 11, false))
	{
		set_ped_config_flag(&(iLocal_656[0]), 6, false);
	}
	else
	{
		func_63();
	}
	if (func_40(Local_452))
	{
		func_41(Local_452);
	}
	if (_does_volume_exist(iVar664))
	{
		_0x74c2b3dc0b294102(iVar664);
	}
	func_64(vLocal_696, 20f, 5);
	func_65(vLocal_693, 8);
	if (iVar706 != 0)
	{
		remove_shocking_event(iVar706);
		iLocal_708 = 0;
	}
	if (_0x91a5f9cbebb9d936(uVar652))
	{
		remove_scenario_blocking_area(uVar652, false);
	}
	if (_does_volume_exist(iVar662))
	{
		_0x74c2b3dc0b294102(iVar662);
		_0xa1cfb35069d23c23(iVar662);
	}
	if (_does_volume_exist(iVar663))
	{
		_0x74c2b3dc0b294102(iVar663);
		_0xa1cfb35069d23c23(iVar663);
	}
	if (_does_volume_exist(iVar666))
	{
		_0x74c2b3dc0b294102(iVar666);
	}
	set_player_forced_aim(get_player_index(), false, 0, -1, false);
	func_39(&Local_111, &uLocal_17);
	func_66(&Local_111, &uLocal_17);
	display_hud(true);
	display_radar(true);
	set_player_control(player_id(), true, 0, false);
	func_67();
	func_68(1);
	terminate_this_thread();
}

void func_7(var uParam0, bool bParam1)
{
	func_8(&(uParam0->f_5));
	if (uParam0->f_161)
	{
		func_69("BEAT_LAUNCHED", 4000, 0, 1, 0, 0, -1, -1, 0);
	}
	allow_sonar_blips(bParam1);
}

void func_8(int iParam0)
{
	func_12(iParam0, 0);
	func_70(iParam0, 0);
	func_71(iParam0, 1);
	func_72(iParam0, 1);
	func_73(iParam0, 0);
	func_74(iParam0, 1);
	func_75(iParam0, 1, 1, 1);
}

void func_9(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_76(&(uParam0->f_1), 8);
	}
	else
	{
		func_35(&(uParam0->f_1), 8);
	}
}

void func_10(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_76(&(uParam0->f_1), 2);
	}
	else
	{
		func_35(&(uParam0->f_1), 2);
	}
}

void func_11(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_76(&(uParam0->f_1), 4);
	}
	else
	{
		func_35(&(uParam0->f_1), 4);
	}
}

void func_12(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_76(&(iParam0->f_1), 16384);
	}
	else
	{
		func_35(&(iParam0->f_1), 16384);
	}
}

void func_13(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_76(&(uParam0->f_1), 1024);
	}
	else
	{
		func_35(&(uParam0->f_1), 1024);
	}
}

void func_14(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!func_77(bParam2) || is_screen_faded_out())
		{
			Call_Loc(iParam1);
		}
	}
}

bool func_15()
{
	switch (iVar403)
	{
		case 0:
			if (func_78(&Local_211))
			{
				func_79();
				func_80(&Local_409);
				request_anim_dict(func_81());
				Local_202.f_4 = func_82();
				Local_202 = _create_anim_scene(Local_202.f_4, 0, "PBL_main_challenge", false, true);
				if (iVar500 == 92)
				{
					set_anim_scene_origin(Local_202, 2945.37f, 522.241f, 44.37555f, 0f, 0f, 10.786f, 2);
				}
				iLocal_405 = 1;
			}
			break;
		case 1:
			if (!has_anim_dict_loaded(func_81()))
			{
				return false;
			}
			if (!_is_anim_scene_metadata_loaded(Local_202, false))
			{
				return false;
			}
			if (!func_83(&Local_409))
			{
				return false;
			}
			return true;
	}
	return false;
}

void func_16()
{
	StringCopy(Local_670[0], func_36("TAUNT_A"), 32);
	StringCopy(Local_670[1], func_36("TAUNT_B"), 32);
	StringCopy(Local_670[2], func_36("TAUNT_C"), 32);
	StringCopy(&(Local_111.f_4), func_36("PSSOUT"), 64);
}

bool func_17(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (bParam6 || func_84(*uParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *uParam1, &(uParam0->f_160), 1, iParam3, iParam4))
	{
		if (bParam6 || func_85(uParam0, *uParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				fVar0 = 7f;
				if (func_86(uParam0->f_3, 1))
				{
					fVar0 = 20f;
				}
				clear_area(uParam0->f_51, fVar0, 2097152);
			}
			if (iParam5 == 1)
			{
				func_87(uParam0, -1, 0, bParam7);
			}
			_0x9d16896f0dbe78a2(uParam0->f_51, 5f);
			if (bParam2)
			{
				uParam0->f_51.f_3 = func_88(uParam0->f_51);
			}
			return true;
		}
	}
	return false;
}

void func_18(var uParam0, var uParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*uParam1 = 9;
			*uParam2 = 0;
			break;
		case 1:
			*uParam1 = 10;
			*uParam2 = 0;
			break;
	}
}

void func_19()
{
	switch (iVar500)
	{
		case 76:
			func_89();
			break;
		case 92:
			func_90();
			break;
	}
}

void func_20()
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iLocal_656[iVar0] = func_91(Local_409[iVar0]->f_1, Local_409[iVar0], Local_211.f_51 + Local_409[iVar0]->f_6, Local_409[iVar0]->f_9, 1, 0, 1, 0, 1);
		iVar0++;
	}
	if (func_92(&(iLocal_656[0]), 0, 1))
	{
		remove_all_ped_weapons(&(iLocal_656[0]), true, true);
		set_ped_can_be_targetted(&(iLocal_656[0]), false);
		_give_weapon_to_ped_2(&(iLocal_656[0]), func_93(268435456, 1056964608, 1065353216), 200, false, true, 2, false, 0.5f, 1f, 752097756, false, 0f, false);
		func_95(&(iLocal_656[0]), func_94(1072590268, 0, -1));
		set_ped_can_arm_ik(&(iLocal_656[0]), true);
		set_blocking_of_non_temporary_events(&(iLocal_656[0]), true);
		_0x24c82ef607105faa(&(iLocal_656[0]), -920810745);
		_0x06d26a96ca1bca75(&(iLocal_656[0]), 10, 1f, 0);
		_0xa1eb5d029e0191d3(&(iLocal_656[0]), 10, 0f);
	}
}

bool func_21()
{
	if (_does_anim_scene_exist(Local_202))
	{
		set_anim_scene_entity(Local_202, "Drunk", &(iLocal_656[0]), 0);
		set_anim_scene_entity(Local_202, "Plr", Global_35, 0);
		load_anim_scene(Local_202);
		return true;
	}
	set_anim_scene_bool(Local_202, "BOOL_intro_idle", false, false);
	return false;
}

void func_22()
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_96(&(iLocal_503[iVar0]), 0, 0, 0, 1, 0, 0, 0);
		iVar0++;
	}
}

bool func_23(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		func_97(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	func_98(uParam0, iParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !uParam0->f_5 & 16384 != 0)
		{
			if (uParam0->f_5.f_1 & 256 != 0)
			{
				func_99(&(uParam0->f_5));
			}
			func_35(&(uParam0->f_5), 16384);
		}
	}
	if (!uParam0->f_48 && !func_100(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_101(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_102(&(uParam0->f_121));
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
					func_103(uParam0, uParam0->f_193, 2f);
				}
			}
			break;
		case 2:
			if (!func_104(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		case 3:
			break;
	}
	if (func_86(uParam0->f_3, 128))
	{
		if ((does_entity_exist(iParam1[0]) && !is_ped_injured(iParam1[0])) && uParam0->f_3 != 49)
		{
			if (!_0xf6a8a652a6b186cd(_0xf6f5447d418daa82(iParam1[0])))
			{
				func_105(uParam0, iParam1[0]);
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

bool func_24(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > iParam2->f_5)
	{
		func_106(iParam2, 1, iVar0);
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
			if (func_107(iParam0, iParam2))
			{
				*uParam3 = 128;
				func_108(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (func_109(iParam0, iParam2))
				{
					*uParam3 = 8;
					func_108(iParam0, iParam2, *uParam3);
					return true;
				}
				else if (func_110(iParam0, iParam1, iParam2))
				{
					*uParam3 = 8;
					func_108(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (func_111(iParam0, iParam2))
				{
					*uParam3 = 64;
					func_108(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_26 && func_112(player_id(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_108(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_113(iParam2, 1065353216))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (func_114(Global_35, iParam0, iParam2))
					{
						*uParam3 = 4;
						func_108(iParam0, iParam2, *uParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (func_115(Global_35, iParam0, iParam2))
					{
						*uParam3 = 256;
						func_108(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_116(Global_35, iParam0, iParam2, 0))
				{
					*uParam3 = 16;
					func_108(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			else if (func_116(Global_35, iParam0, iParam2, 1))
			{
				*uParam3 = 16;
				func_108(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (func_117(iParam0, iParam2))
				{
					*uParam3 = 32;
					func_108(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || iParam2->f_12 < 20f)
			{
				if (func_118(&iParam0, iParam2))
				{
					*uParam3 = 4096;
					func_108(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (func_119(iParam2, 4000))
				{
					if ((func_120(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && func_121(iParam2, iParam0)) && func_122(iParam2, iParam0))
					{
						*uParam3 = 2;
						func_108(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((func_120(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && func_121(iParam2, iParam0)) && func_122(iParam2, iParam0))
				{
					*uParam3 = 2;
					func_108(iParam0, iParam2, *uParam3);
					return true;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (func_123(iParam0, Global_1935630->f_41))
							{
								func_124();
								*uParam3 = 2;
								func_108(iParam0, iParam2, *uParam3);
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
						if (func_123(iParam0, Global_1935630->f_41))
						{
							func_124();
							*uParam3 = 2;
							func_108(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (func_125(iParam2, iParam0) || (iParam2->f_9 > 0 && (func_126() - iParam2->f_9) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_124();
						*uParam3 = 2;
						func_108(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (func_127())
					{
						if (func_123(iParam0, Global_1935630->f_42))
						{
							func_124();
							*uParam3 = 2;
							func_108(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (func_128(iParam2, iParam0))
			{
				*uParam3 = 1024;
				func_108(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (func_129(iParam0, iParam1, iParam2))
				{
					*uParam3 = 2048;
					func_108(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (func_130(iParam0, iParam2))
					{
						*uParam3 = 8192;
						func_108(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (func_131(iParam0, iParam2))
				{
					*uParam3 = 32768;
					func_108(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (func_132(iParam2, 4000))
				{
					if (func_133(&iParam0, iParam2))
					{
						*uParam3 = 512;
						func_108(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (func_134(iParam0, iParam2))
				{
					*uParam3 = 65536;
					iParam2->f_4 = 0;
					func_108(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_135(iParam2, iParam0))
			{
				*uParam3 = 1;
				func_108(iParam0, iParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

float func_25(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_26(int iParam0)
{
	iLocal_406 = iParam0;
}

void func_27(int iParam0)
{
	func_136(iParam0, &iVar0, &iVar1);
	func_137(iVar0, iVar1);
}

void func_28(int iParam0)
{
	if (!func_138(iParam0))
	{
		return;
	}
	func_29(1);
}

void func_29(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

void func_30(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_139() != -1)
	{
		return;
	}
	if ((Global_36616 && func_140(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_141(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_142(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_143(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_142(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

bool func_31()
{
	if (func_139() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

bool func_32(int iParam0)
{
	if (func_144())
	{
		return false;
	}
	return func_145((*Global_1347702)[58]->f_15, 1);
}

void func_33(int iParam0)
{
	func_146(&uLocal_0);
	func_147(1, iParam0, 0);
	_0xdd1232b332cbb9e7(3, 1, 0);
	func_148();
}

bool func_34(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (func_149(iParam0, 1, 0, 0) != 2055893578)
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

void func_35(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

char* func_36(char[4] cParam0)
{
	StringCopy(&cVar0, "DD", 8);
	switch (iVar499)
	{
		case 76:
			StringCopy(&cVar1, "VAL", 8);
			break;
		case 92:
			StringCopy(&cVar1, "VHT", 8);
			break;
	}
	switch (iLocal_210)
	{
		case 0:
			iVar2 = 2;
			break;
		case 1:
			iVar2 = 1;
			break;
	}
	return func_150(&cVar0, &cVar1, cParam0, iVar2);
}

bool func_37(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_151(iParam0, iParam1, sParam2, iParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

void func_38(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_152((*uParam0)[iVar0]->f_6))
			{
				if (!bParam4 && is_bit_set(uParam0[iVar0], 11))
				{
				}
				else
				{
					func_153(&((*uParam0)[iVar0]->f_6), 1, 1);
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

void func_39(var uParam0, var uParam1)
{
	if (!func_3(uParam0->f_88, 1024))
	{
		func_154(uParam0, uParam1);
	}
	func_155();
	set_time_scale(1f);
	func_157(func_156(uParam1, uParam0), 1);
	func_158();
	func_159();
	func_160();
	func_146(&(uParam1->f_26));
	func_146(&(uParam1->f_29));
	func_146(&(uParam1->f_32));
	func_146(&(uParam1->f_35));
	func_146(&(uParam1->f_38));
	func_146(&(uParam1->f_41));
	if (func_161(uParam0->f_1, 0))
	{
		if (func_162(uParam0, 65536))
		{
			set_ped_config_flag(uParam0->f_1, 16, false);
			set_ped_can_ragdoll(uParam0->f_1, true);
			set_ped_config_flag(uParam0->f_1, 263, false);
			set_ragdoll_blocking_flags(uParam0->f_1, 0);
		}
		if (func_162(uParam0, 1024))
		{
			clear_ragdoll_blocking_flags(uParam0->f_1, 1);
		}
		if (func_162(uParam0, 128) || func_162(uParam0, 4096))
		{
			set_ped_using_action_mode(uParam0->f_1, false, -1, 0);
		}
		set_ped_config_flag(uParam0->f_1, 371, false);
		set_ped_config_flag(uParam0->f_1, 392, false);
		set_entity_is_target_priority(uParam0->f_1, false, 0f);
	}
	_0x3c4ae8506638c7e2(get_player_index(), 1);
	if (!func_162(uParam0, 2048))
	{
		_0xde5faa741a781f73(get_player_index(), 0);
	}
	if (func_163(uParam1, 2048))
	{
		set_ped_config_flag(uParam0->f_1, 146, false);
	}
	enable_control_action(0, -1404316431, true);
	enable_control_action(0, 255439828, true);
	if (func_163(uParam1, 2) && !func_162(uParam0, 32768))
	{
		func_164(1, uParam0, uParam1, -1038090240, 1103626240);
		func_165(uParam1, 2);
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
	func_166(uParam0, uParam1, 1);
	if (!is_entity_dead(*uParam0) && (func_163(uParam1, 8) && (!func_163(uParam1, 1) || _0xc8b29d18022ea2b7(*uParam0))))
	{
		_0xeed08a3a98b847e2(*uParam0, (!func_162(uParam0, 256) || is_entity_dead(uParam0->f_1)), 1040187392);
		if (func_163(uParam1, 4096))
		{
			clear_ped_tasks(*uParam0, 1, 0);
		}
	}
	if (!is_entity_dead(uParam0->f_1) && _0xc8b29d18022ea2b7(uParam0->f_1))
	{
		_0xeed08a3a98b847e2(uParam0->f_1, false, 1040187392);
		if (func_163(uParam1, 4096))
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
	if (func_163(uParam1, 16777216))
	{
		func_167();
	}
	set_player_forced_aim(player_id(), false, 0, -1, false);
	_0x4d5c9cc7e7e23e09();
	func_168(uParam1, 9);
}

bool func_40(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	return _does_volume_exist(iParam0);
}

void func_41(struct<6> Param0, var uParam6)
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

void func_42(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6)
{
	if (iParam3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < (*iParam0 - iParam2))
		{
			if (func_92(iParam0[(iVar0 + iParam2)], 0, 1))
			{
				_task_smart_flee_style_ped(iParam0[(iVar0 + iParam2)], iParam1, iParam6, iParam5, fParam4, -1, 0);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iParam2;
		while (iVar0 <= iParam3)
		{
			if (func_92(iParam0[iVar0], 0, 1))
			{
				_task_smart_flee_style_ped(iParam0[iVar0], iParam1, iParam6, iParam5, fParam4, -1, 0);
			}
			iVar0++;
		}
	}
}

bool func_43(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, int iParam10, int iParam11, int iParam12)
{
	fVar0 = 0f;
	if (uParam0->f_1 >= 4)
	{
		if (bParam6)
		{
			if (func_169())
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
			else if (func_170(uParam0->f_3))
			{
				fVar0 = 250f;
			}
			else if (func_86(uParam0->f_3, 131072))
			{
				fVar0 = 70f;
				fVar0 = (fVar0 + 10f);
			}
			else if (func_86(uParam0->f_3, 1) && iParam12 == 0)
			{
				fVar0 = 215f;
				fVar0 = (fVar0 + 20f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 80f);
				}
			}
			else if (func_86(uParam0->f_3, 2) || iParam12 == 1)
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
				if (func_171(Global_36, uParam0->f_51) > fVar0)
				{
					return true;
				}
			}
			else
			{
				vVar1 = { fParam9, iParam10, iParam11 };
				if (func_171(Global_36, vVar1) > fVar0)
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

bool func_44()
{
	func_172();
	func_173();
	func_174();
	func_175(Local_529[2], 9);
	switch (iVar404)
	{
		case 0:
			set_ped_max_move_blend_ratio(&(iLocal_656[0]), 0f);
			func_176(&uLocal_0);
			func_35(&(Local_442.f_3), 2);
			func_177();
			func_178(1);
			func_26(1);
			break;
		case 1:
			if (func_179(Global_35, 0) || (_does_volume_exist(iVar665) && func_180(Global_35, iVar665, 1, 0)))
			{
				if (!is_entity_dead(&(iLocal_656[0])))
				{
					open_sequence_task(&iVar0);
					task_follow_nav_mesh_to_coord(0, vLocal_699, 1f, -1, 0.25f, 1, 40000f);
					task_wander_in_volume(0, func_181(iVar500), 15f, 60f, 1);
					func_182(&(iLocal_656[0]), &iVar0, 0, 0, 1, 1);
					set_ped_keep_task(&(iLocal_656[0]), true);
					set_ped_as_no_longer_needed(iLocal_656[0]);
				}
				func_6();
			}
			if (!_is_anim_scene_started(Local_202, false))
			{
				if (_is_anim_scene_loaded(Local_202, true, false))
				{
					start_anim_scene(Local_202);
				}
			}
			if (is_entity_in_volume(Global_35, iVar659, true, 1))
			{
				set_ped_reset_flag(Global_35, 108, true);
			}
			if (is_ped_on_mount(Global_35))
			{
			}
			else if (is_entity_in_volume(Global_35, iVar660, true, 1))
			{
				func_26(2);
			}
			else if (is_entity_in_volume(Global_35, iVar664, true, 1))
			{
				iVar1 = func_183(Global_35, _0xf70f00013a62f866(iVar664), 0.88f);
				if (iVar1 == 0)
				{
					func_184(vLocal_699, 20f, 0, 0, 4);
					_0x94a3c1b804d291ec(Global_35, 0, 0, 1, 1);
					_get_anim_scene_entity_matrix(Local_202, "plr", &Var2, true, "PBL_main_challenge", 2);
					set_anim_scene_entity(Local_202, "Plr", Global_35, 0);
					func_185(&Local_468);
					Local_468.f_1 = Global_35;
					func_35(&(Local_468.f_23), 2054);
					Local_468.f_8 = { Var2 };
					Local_468.f_19 = Var2.f_3.f_2;
					Local_468.f_18 = 0.15f;
					Local_468.f_17 = 0.1f;
					func_186(&Local_468, 106);
					func_68(0);
					func_26(2);
				}
			}
			break;
		case 2:
			if (is_entity_in_volume(Global_35, iVar659, true, 1))
			{
				set_ped_reset_flag(Global_35, 108, true);
			}
			if (is_entity_in_volume(Global_35, iVar664, true, 1))
			{
				set_ped_max_move_blend_ratio(Global_35, 1f);
			}
			if (func_186(&Local_468, 106) || is_entity_in_volume(Global_35, iVar660, true, 1))
			{
				if (is_ped_on_mount(Global_35))
				{
					func_6();
				}
				if (_is_anim_scene_started(Local_202, false))
				{
					func_101(&Local_211, &(Local_211.f_48), Local_211.f_3, &(Local_211.f_51.f_6));
					func_102(&(Local_211.f_121));
					func_187(vLocal_693, 2f, "DD_DOORWAY_RESTRICTION", 1, 0, 8, 0, -1082130432);
					set_anim_scene_bool(Local_202, "BOOL_intro_idle", true, false);
					set_player_control(get_player_index(), true, 0, false);
					func_26(3);
				}
			}
			break;
		case 3:
			if (!func_3(iVar406, 1))
			{
			}
			set_ped_max_move_blend_ratio(&(iLocal_656[0]), 0f);
			if (_is_anim_scene_finished(Local_202, false) || _get_anim_scene_progress(Local_202) >= 0.3f)
			{
				func_188(&(iLocal_656[0]), &Local_442, 0f, 0f, 0f, 0, 1106247680, 1092616192, -1, 4000, 1000, 0.1f, 1, 1, 1084227584);
				if (iVar712 == 0)
				{
					func_189(249295937, &(iLocal_656[0]), 1);
					iLocal_714 = 1;
				}
			}
			if (!func_3(iVar406, 1) && (_is_anim_scene_finished(Local_202, false) || _get_anim_scene_progress(Local_202) >= 0.5222f))
			{
				func_190(iVar662, 0);
				func_192(&(iLocal_656[0]), uLocal_659[0], -89429847, 580546400, 0, func_191());
				func_35(&uLocal_408, 1);
			}
			if (_is_anim_scene_finished(Local_202, false) || _get_anim_scene_progress(Local_202) >= 0.5861f)
			{
				remove_anim_scene_entity(Local_202, "Plr", Global_35);
				func_176(&uLocal_0);
				if (iVar706 == 0)
				{
					iLocal_708 = add_shocking_event_at_position(748896394, get_entity_coords(&(iLocal_656[0]), true, false), 100f, -1f, -1f, -1f, -1f, -1, -1);
				}
				func_26(4);
			}
			break;
		case 4:
			func_188(&(iLocal_656[0]), &Local_442, 0f, 0f, 0f, 0, 1106247680, 1092616192, -1, 4000, 1000, 0.1f, 1, 1, 1084227584);
			if (!func_193(iVar499, 1, 1))
			{
				iLocal_501 = func_194(&(iLocal_656[0]), _create_volume_cylinder(get_entity_coords(&(iLocal_656[0]), true, false), 0f, 0f, get_entity_heading(&(iLocal_656[0])), 2f, 2f, 4f), 144);
			}
			set_ped_max_move_blend_ratio(&(iLocal_656[0]), 0f);
			if (_is_anim_scene_finished(Local_202, false) || _get_anim_scene_progress(Local_202) >= 0.8306f)
			{
				if (func_195())
				{
					iLocal_713 = 1;
					func_196(202, 0);
				}
				else
				{
					iLocal_713 = 0;
					func_196(205, 0);
				}
				func_176(&uLocal_0);
				func_26(5);
			}
			break;
		case 5:
			func_188(&(iLocal_656[0]), &Local_442, 0f, 0f, 0f, 0, 1106247680, 1092616192, -1, 4000, 1000, 0.1f, 1, 1, 1084227584);
			task_look_at_entity(&(iLocal_656[0]), Global_35, 0, 12, 51, 1);
			if (!func_3(iVar406, 2))
			{
				set_ped_max_move_blend_ratio(&(iLocal_656[0]), 0f);
			}
			if (!func_3(iVar406, 4) && func_197(&(iLocal_656[0]), Local_202, "Drunk", 0, 0, 1, 0))
			{
				task_turn_ped_to_face_entity(&(iLocal_656[0]), Global_35, -1, -1082130432, -1082130432, -1082130432);
				func_35(&uLocal_408, 4);
			}
			if (!func_3(iVar406, 1048576))
			{
				if (iLocal_210 == 0)
				{
					if (func_3(iVar406, 2) && func_198(-3.5f, 1, &(iLocal_656[0]), 1))
					{
						func_35(&uLocal_408, 524288);
						func_178(1);
						func_199();
						func_35(&uLocal_408, 1048576);
						func_189(249295937, &(iLocal_656[0]), 1);
					}
				}
				else if (func_3(iVar406, 4) && func_198(-3.5f, 1, &(iLocal_656[0]), 1))
				{
					func_35(&uLocal_408, 524288);
					func_178(1);
					func_199();
					func_35(&uLocal_408, 1048576);
					func_189(249295937, &(iLocal_656[0]), 1);
				}
			}
			if (iLocal_210 == 1 || func_3(iVar406, 2))
			{
				if (iVar504 == 0)
				{
					func_155();
					if (does_blip_exist(&(uLocal_659[0])))
					{
						remove_blip(uLocal_659[0]);
					}
					func_200();
					func_201(iVar663, 0, 0);
					func_190(iVar663, 0);
					func_202(iVar663, 0, 0, 0, 0, 0);
					if (_does_volume_exist(iVar666))
					{
						_0x74c2b3dc0b294102(iVar666);
					}
					_0x18262cafebb5fbe1(iVar663, 0, 0, 0, -1, -1, 0);
					_0xb56d41a694e42e86(iVar663, 2762751, 0, 0, -1, -1, 2);
					_0x18262cafebb5fbe1(iVar662, 0, 0, 0, -1, -1, 0);
					_0xb56d41a694e42e86(iVar662, 2762751, 0, 0, -1, -1, 2);
					uLocal_654 = _0x4c39c95ae5db1329(iVar662, 0, 15);
					if (iVar706 != 0)
					{
						remove_shocking_event(iVar706);
						iLocal_708 = 0;
					}
					func_203(&iLocal_501, 1);
					func_76(&uLocal_408, 524288);
					stop_current_playing_speech(&(iLocal_656[0]), 0);
					func_178(1);
					func_26(7);
				}
				else if ((((iVar504 == 1 || func_204(&uLocal_0, 20f)) || func_180(Global_35, iVar663, 1, 0)) || func_180(Global_35, iVar665, 1, 0)) || &Local_211.f_98[0] > 10f)
				{
					func_155();
					func_64(vLocal_696, 20f, 5);
					if (does_blip_exist(&(uLocal_659[0])))
					{
						remove_blip(uLocal_659[0]);
					}
					if (iVar706 != 0)
					{
						remove_shocking_event(iVar706);
						iLocal_708 = 0;
					}
					if (_does_volume_exist(iVar666))
					{
						_0x74c2b3dc0b294102(iVar666);
					}
					func_203(&iLocal_501, 1);
					func_76(&uLocal_408, 524288);
					stop_current_playing_speech(&(iLocal_656[0]), 0);
					func_178(1);
					func_205();
					func_35(&uLocal_408, 131072);
					func_206(&(iLocal_656[0]), 1);
					func_158();
					func_26(12);
				}
			}
			if ((!func_3(iVar406, 2) && func_204(&uLocal_0, func_207(iLocal_210 == 0, 2.5f, 10f))) && func_198(0f, 1, &(iLocal_656[0]), 1))
			{
				if (iLocal_210 == 1 && &Local_211.f_98[0] < 5f)
				{
					open_sequence_task(&iVar14);
					task_confront(0, Global_35, 2);
					task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
					func_182(&(iLocal_656[0]), &iVar14, 0, 0, 1, 1);
				}
				func_37(&(iLocal_656[0]), Global_35, func_36("CHAL_B"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_35(&uLocal_408, 2);
			}
			break;
		case 7:
			task_look_at_entity(&(iLocal_656[0]), Global_35, 0, 12, 51, 1);
			set_ped_max_move_blend_ratio(&(iLocal_656[0]), 0f);
			func_208(iLocal_656[0], vLocal_693, 1082130432);
			if (!func_3(iVar406, 2048))
			{
				if (func_198(-5f, 1, &(iLocal_656[0]), 1))
				{
					func_33(0);
					func_37(Global_35, &(iLocal_656[0]), func_36("PLR_CALL"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_35(&uLocal_408, 2048);
				}
			}
			else if (!func_3(iVar406, 8))
			{
				if (func_198(-4f, 1, 0, 0))
				{
					func_37(&(iLocal_656[0]), Global_35, func_36("CALL"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_189(249295937, &(iLocal_656[0]), 1);
					func_209(&uLocal_459, 1);
					func_35(&uLocal_408, 8);
				}
			}
			else if (func_204(&uLocal_459, 0.1f) && !get_is_task_active(&(iLocal_656[0]), 3))
			{
				func_210();
				if (func_92(&(iLocal_656[0]), 0, 1))
				{
					open_sequence_task(&iLocal_655);
					task_follow_nav_mesh_to_coord(0, *vLocal_683[0], 1f, -1, 0.25f, 1, 40000f);
					task_follow_nav_mesh_to_coord(0, *vLocal_683[1], 1.5f, -1, 0.25f, 0, func_211(*vLocal_683[1], *vLocal_683[2]));
					task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
					func_182(&(iLocal_656[0]), &iLocal_655, 0, 0, 1, 1);
				}
				iLocal_707 = 0;
				if (func_212())
				{
					func_213(&Local_211, 0f, 0f, 0f, iVar663, 0, 1114636288);
				}
				func_65(vLocal_693, 8);
				func_26(6);
			}
			break;
		case 6:
			func_208(iLocal_656[0], vLocal_693, 1082130432);
			if ((!func_214(&uLocal_459) && func_215(&(iLocal_656[0]), Local_111.f_45, 1) < 1.5f) && func_198(-3f, 1, 0, 0))
			{
				func_176(&uLocal_459);
			}
			if (!func_214(&uLocal_465))
			{
				func_176(&uLocal_465);
			}
			if (iVar504 == 1)
			{
				func_33(0);
				func_37(Global_35, &(iLocal_656[0]), func_36("PLR_QUIT"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_35(&uLocal_408, 16384);
				func_35(&uLocal_408, 2048);
				if (iVar706 != 0)
				{
					remove_shocking_event(iVar706);
					iLocal_708 = 0;
				}
				if (!is_entity_dead(&(iLocal_656[0])))
				{
					clear_ped_tasks(&(iLocal_656[0]), 1, 0);
					func_216(&(iLocal_656[0]), Global_35, -1);
					task_look_at_entity(&(iLocal_656[0]), Global_35, 0, 12, 51, 1);
				}
				func_41(Local_452);
				func_205();
				func_178(1);
				func_35(&uLocal_408, 131072);
				func_35(&uLocal_408, 8388608);
				func_206(&(iLocal_656[0]), 1);
				func_158();
				func_26(12);
			}
			if (func_92(&(iLocal_656[0]), 0, 1))
			{
				if ((func_180(Global_35, iVar665, 1, 0) || &Local_211.f_98[0] > 45f) || func_217(&uLocal_465) > 20f)
				{
					func_33(0);
					func_35(&uLocal_408, 16384);
					if (iVar706 != 0)
					{
						remove_shocking_event(iVar706);
						iLocal_708 = 0;
					}
					func_205();
					func_178(1);
					func_35(&uLocal_408, 131072);
					func_206(&(iLocal_656[0]), 1);
					func_158();
					func_26(12);
				}
				if (!bVar708)
				{
					if (func_180(Global_35, iVar664, 1, 0) || func_180(Global_35, iVar663, 1, 0))
					{
						iLocal_708 = add_shocking_event_for_entity(-1130398329, Global_35, 100f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
						iLocal_710 = 1;
					}
				}
				else if (func_3(iVar406, 8192) && func_218(&uLocal_459, 15f))
				{
					func_33(0);
					func_35(&uLocal_408, 16384);
					if (iVar706 != 0)
					{
						remove_shocking_event(iVar706);
						iLocal_708 = 0;
					}
					func_205();
					func_178(1);
					func_35(&uLocal_408, 131072);
					func_206(&(iLocal_656[0]), 1);
					func_158();
					func_26(12);
				}
				else if (!func_3(iVar406, 16384))
				{
					if (iVar705 < 3 && func_218(&uLocal_459, 7.5f))
					{
						func_37(&(iLocal_656[0]), Global_35, Local_670[iVar705], 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_189(249295937, &(iLocal_656[0]), 1);
						iLocal_707 = iVar705 + 1;
					}
				}
				if (func_215(&(iLocal_656[0]), *vLocal_683[1], 0) < 5f)
				{
					task_look_at_entity(&(iLocal_656[0]), Global_35, 0, 12, 51, 1);
				}
				if (func_219())
				{
					func_178(1);
					if (iVar706 != 0)
					{
						remove_shocking_event(iVar706);
						iLocal_708 = 0;
					}
					set_ped_config_flag(&(iLocal_656[0]), 6, true);
					func_158();
					func_35(&uLocal_408, 1024);
					clear_ped_tasks(Global_35, 1, 0);
					func_41(Local_452);
					func_26(8);
				}
			}
			else
			{
				func_26(15);
			}
			break;
		case 8:
			if (func_220(&Local_111, &uLocal_17))
			{
				Local_211.f_44 = 1;
				if (iVar706 != 0)
				{
					remove_shocking_event(iVar706);
					iLocal_708 = 0;
				}
				func_64(vLocal_696, 20f, 5);
				if (func_92(&(iLocal_656[0]), 0, 1))
				{
					func_35(&uLocal_408, 2097152);
					set_ped_config_flag(&(iLocal_656[0]), 6, false);
					if (iLocal_210 == 1)
					{
						func_209(&uLocal_462, 1);
						task_stand_still(&(iLocal_656[0]), -1);
						func_30(11, 0, 0, 0, Local_211.f_5.f_10, 0, 1065353216, 0);
						set_ped_relationship_group_hash(&(iLocal_656[0]), -1976316465);
						clear_entity_last_damage_entity(&(iLocal_656[0]));
						func_76(&uLocal_408, 1024);
						func_26(9);
					}
					else
					{
						func_176(&uLocal_462);
						func_26(14);
					}
				}
				else
				{
					iLocal_16 = 1;
					if (func_31())
					{
						if (func_32(0))
						{
							func_30(1, 0, 0, 0, &(iLocal_656[0]), 0, 1065353216, 0);
						}
					}
					else
					{
						func_30(1, 0, 0, 0, &(iLocal_656[0]), 0, 1065353216, 0);
					}
					if (func_2() == 92)
					{
						func_221(Local_211.f_3, 1, 3, 0, 0);
					}
					else
					{
						func_221(Local_211.f_3, 0, 3, 0, 0);
					}
					func_26(15);
				}
				func_64(vLocal_696, 20f, 5);
				remove_scenario_blocking_area(uVar652, false);
				_0x74c2b3dc0b294102(iVar662);
				_0xa1cfb35069d23c23(iVar662);
				_0x74c2b3dc0b294102(iVar663);
				_0xa1cfb35069d23c23(iVar663);
			}
			break;
		case 9:
			func_222();
			task_look_at_entity(&(iLocal_656[0]), Global_35, 0, 12, 51, 1);
			if (!func_3(iVar406, 32))
			{
				if (func_223(&uLocal_462) >= 1.5f)
				{
					func_216(&(iLocal_656[0]), Global_35, -1);
					func_33(0);
					if (iVar500 == 76)
					{
						func_37(&(iLocal_656[0]), Global_35, "RE_DD_VAL_V1_SORRY", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						func_37(&(iLocal_656[0]), Global_35, "RE_DD_VHT_V1_RUNOFF", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					func_189(249295937, &(iLocal_656[0]), 1);
					func_146(&uLocal_462);
					func_35(&uLocal_408, 32);
				}
			}
			else if (!func_3(iVar406, 64))
			{
				if (func_198(0, 1, &(iLocal_656[0]), 1))
				{
					if (iVar500 == 76)
					{
						if (func_224(0, -1))
						{
							func_37(&(iLocal_656[0]), Global_35, "RE_DD_VAL_V1_TO_DOCTOR", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
					}
					func_35(&uLocal_408, 64);
				}
			}
			else if (func_198(-4f, 1, 0, 0))
			{
				func_178(1);
				func_225();
				func_226();
				iLocal_16 = 2;
				if (iVar500 == 76 && func_224(0, -1))
				{
					set_current_ped_weapon(&(iLocal_656[0]), -1569615261, false, 0, false, false);
					open_sequence_task(&iVar0);
					task_swap_weapon(0, 1, false, 0, 0);
					task_follow_nav_mesh_to_coord(0, vLocal_696, 1f, -1, 0.25f, 0, fVar704);
					task_stand_still(0, -1);
					func_182(&(iLocal_656[0]), &iVar0, 0, 0, 1, 1);
					set_blocking_of_non_temporary_events(&(iLocal_656[0]), false);
					func_26(13);
				}
				else
				{
					set_current_ped_weapon(&(iLocal_656[0]), -1569615261, false, 0, false, false);
					open_sequence_task(&iVar0);
					task_swap_weapon(0, 1, false, 0, 0);
					_task_smart_flee_style_ped(0, Global_35, 1, 20736, 1000f, -1, 0);
					func_182(&(iLocal_656[0]), &iVar0, 0, 0, 1, 1);
					set_ped_keep_task(&(iLocal_656[0]), true);
					func_26(15);
				}
			}
			break;
		case 13:
			func_222();
			func_226();
			func_227();
			if (!func_3(iVar406, 128))
			{
				if (((func_198(-2f, 1, 0, 0) && func_228(&(iLocal_656[0]), 1)) && func_229(&(iLocal_656[0]), vLocal_696, 2f, 1, 1)) && (!func_230(&(iLocal_656[0]), 242628503) || get_sequence_progress(&(iLocal_656[0])) >= 1))
				{
					task_look_at_entity(iVar656, &(iLocal_656[0]), 10000, 0, 31, 0);
					func_37(&(iLocal_656[0]), iVar656, "RE_DD_VAL_V1_DOCTOR_HELP", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_35(&uLocal_408, 128);
				}
			}
			else if (!func_3(iVar406, 256))
			{
				if (func_198(-2f, 1, 0, 0))
				{
					task_look_at_entity(iVar656, &(iLocal_656[0]), 4000, 0, 31, 0);
					open_sequence_task(&iVar0);
					task_turn_ped_to_face_entity(0, iVar656, 2500, -1082130432, -1082130432, -1082130432);
					_task_use_nearest_scenario_to_coord(0, -285.4102f, 808.0832f, 118.8794f, 1f, 0, false, false, false, false);
					func_182(&(iLocal_656[0]), &iVar0, 0, 0, 1, 1);
					func_37(iVar656, &(iLocal_656[0]), "RE_DD_VAL_V1_DOCTOR_WAIT", 0, 8.5f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_35(&uLocal_408, 256);
				}
			}
			else if (!func_3(iVar406, 33554432))
			{
				if (func_198(0f, 1, iVar656, 1))
				{
					func_231();
					func_37(iVar656, &(iLocal_656[0]), "RE_DD_VAL_V1_DOCTOR_WAIT_B", 0, 8.5f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_35(&uLocal_408, 33554432);
				}
			}
			else if (!func_3(iVar406, 512))
			{
				if (func_198(-2f, 1, 0, 0))
				{
					func_37(&(iLocal_656[0]), iVar656, "RE_DD_VAL_V1_DOCTOR_THANKS", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_35(&uLocal_408, 512);
				}
			}
			break;
		case 14:
			if (func_40(Local_452))
			{
				func_41(Local_452);
				func_158();
			}
			func_35(&uLocal_408, 16);
			func_232(&(Local_211.f_5), 0);
			func_10(&(Local_211.f_5), 1);
			func_233(&(Local_211.f_5), 1);
			func_74(&(Local_211.f_5), 1);
			func_234(&(iLocal_656[0]), 1);
			if (!get_ped_config_flag(&(iLocal_656[0]), 11, true))
			{
				clear_ped_tasks(&(iLocal_656[0]), 1, 0);
				clear_ped_secondary_task(&(iLocal_656[0]));
				task_knocked_out(&(iLocal_656[0]), 0f, 1);
			}
			iLocal_16 = 3;
			if (func_2() == 92)
			{
				func_221(Local_211.f_3, 1, 3, 0, 0);
			}
			else
			{
				func_221(Local_211.f_3, 0, 3, 0, 0);
			}
			func_146(&uLocal_462);
			Local_211.f_50 = 1;
			func_26(15);
			break;
		case 10:
			if (func_3(iVar406, 4096))
			{
				if (_is_ped_hogtied(&(iLocal_656[0])))
				{
					func_235(0);
					func_37(&(iLocal_656[0]), Global_35, "PLEAD_HOGTIED", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_26(11);
				}
				else if (((func_92(&(iLocal_656[0]), 198, 1) && !_is_ped_lassoed(&(iLocal_656[0]))) && !_is_ped_hogtied(&(iLocal_656[0]))) && !func_34(Global_35, &(iLocal_656[0])))
				{
					func_76(&uLocal_408, 4096);
				}
			}
			else
			{
				if (func_92(&(iLocal_656[0]), 0, 1))
				{
					if (!func_3(iVar406, 16))
					{
						func_192(&(iLocal_656[0]), uLocal_659[0], 831283580, 580546400, 0, func_191());
						if (func_3(iVar406, 16777216))
						{
							iVar15 = 1048576;
							iVar16 = 16;
							set_ped_combat_attributes(&(iLocal_656[0]), 93, true);
							set_ped_combat_attributes(&(iLocal_656[0]), 85, true);
							set_ped_config_flag(&(iLocal_656[0]), 249, true);
						}
						else
						{
							iVar15 = 0;
							iVar16 = 0;
						}
						task_combat_ped(&(iLocal_656[0]), Global_35, iVar15, iVar16);
					}
				}
				func_26(11);
			}
			break;
		case 11:
			if (!func_92(&(iLocal_656[0]), 0, 1))
			{
				func_26(15);
			}
			break;
		case 12:
			func_208(iLocal_656[0], vLocal_693, 1082130432);
			if (func_3(iVar406, 16384))
			{
				task_look_at_entity(&(iLocal_656[0]), Global_35, 0, 12, 51, 1);
			}
			if (!is_entity_dead(&(iLocal_656[0])) && func_198(-4f, 1, 0, 0))
			{
				if (!func_3(iVar406, 2048))
				{
					if (&Local_211.f_98[0] < 10f && !func_180(Global_35, iVar665, 1, 0))
					{
						func_37(Global_35, &(iLocal_656[0]), func_36("PLR_CALLNO"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					func_30(12, 0, 0, 0, &(iLocal_656[0]), 0, 1065353216, 0);
					func_35(&uLocal_408, 2048);
				}
				else if (func_198(0, 1, Global_35, 1))
				{
					func_37(&(iLocal_656[0]), Global_35, func_36("COWARD"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_189(249295937, &(iLocal_656[0]), 1);
					uLocal_669 = func_236(uVar707, vLocal_702, fVar703, 0, 0, 0);
					Var17.f_3 = 1065353216;
					Var17.f_4 = -1;
					Var17.f_5 = 1048576000;
					Var17.f_6 = 1193033728;
					Var17 = { vLocal_702 };
					Var17.f_3 = 1f;
					Var17.f_5 = 3f;
					Var17.f_4 = -1;
					open_sequence_task(&iVar0);
					if (!func_3(iVar406, 16384) && !func_3(iVar406, 8388608))
					{
						task_follow_nav_mesh_to_coord(0, vLocal_699, 1f, -1, 0.25f, 1, 40000f);
					}
					task_follow_pavement_to_coord(0, &Var17);
					_task_use_scenario_point(0, uVar667, 0, -1, true, false, 0, false, -1f, false);
					func_182(&(iLocal_656[0]), &iVar0, 0, 0, 1, 1);
					add_shocking_event_for_entity(-23350179, &(iLocal_656[0]), 100f, 1.5f, 1.5f, -1f, -1f, 180f, false, false, -1, -1);
					set_ped_keep_task(&(iLocal_656[0]), true);
					Local_211.f_50 = 1;
					func_41(Local_452);
					func_237();
					func_26(15);
				}
			}
			break;
		case 15:
			func_226();
			if (!func_92(&(iLocal_656[0]), 0, 1))
			{
				return true;
			}
			func_238();
			if (&Local_211.f_98[0] > 55f)
			{
				set_ped_as_no_longer_needed(iLocal_656[0]);
				set_blocking_of_non_temporary_events(&(iLocal_656[0]), false);
				iLocal_656[0] = 0;
				Local_211.f_50 = 1;
				return true;
			}
			break;
	}
	return false;
}

bool func_45(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

void func_46(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

bool func_47(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

void func_48(int iParam0, int iParam1, int iParam2)
{
	func_239(iParam0, iParam2);
	if (func_240(iParam0))
	{
		func_241((*Global_1347702)[iParam0]->f_15);
	}
	if (iParam1 == 1)
	{
		if (func_242((*Global_1347702)[iParam0]->f_15))
		{
			func_243((*Global_1347702)[iParam0]->f_15, 0, 2);
		}
	}
}

void func_49(int iParam0)
{
	func_52();
	if (!func_45(iParam0))
	{
		return;
	}
	Global_40.f_1093 = Global_1347702[iParam0];
}

int func_50(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_53((*Global_1347702)[iParam0]->f_12, 2097152))
		{
			if (func_145((*Global_1835011)[59]->f_1, 1))
			{
				return 0;
			}
		}
		else if (func_53((*Global_1347702)[iParam0]->f_12, 256))
		{
			if (!func_145((*Global_1835011)[59]->f_1, 1))
			{
				return 0;
			}
		}
	}
	return func_244(iParam0);
}

bool func_51(int iParam0)
{
	if (!does_entity_exist((*Global_1347702)[iParam0]->f_43))
	{
		return false;
	}
	else if (does_entity_exist((*Global_1347702)[(*Global_1347702)[iParam0]->f_35]->f_43))
	{
		return false;
	}
	else if ((*Global_1347702)[iParam0]->f_28 != (*Global_1347702)[(*Global_1347702)[iParam0]->f_35]->f_28)
	{
		return false;
	}
	else if (Global_1347702[iParam0] != Global_1347702[(*Global_1347702)[iParam0]->f_35])
	{
		return false;
	}
	else if (!func_245(iParam0))
	{
		return false;
	}
	fVar0 = vdist2(get_entity_coords((*Global_1347702)[iParam0]->f_43, false, false), func_246((*Global_1347702)[iParam0]->f_35));
	if (fVar0 > (7.5f * 7.5f))
	{
		return false;
	}
	return true;
}

void func_52()
{
	iVar0 = Global_40.f_1093;
	Global_40.f_1093 = -1;
	if (func_247(iVar0))
	{
		iVar1 = 0;
		while (iVar1 < &Global_1347702)
		{
			if (func_45(iVar1) && Global_1347702[iVar1] == iVar0)
			{
				if (does_blip_exist((*Global_1347702)[iVar1]->f_37))
				{
					func_248(iVar1, 0);
					func_249(iVar1, func_246(iVar1), 0, 0);
				}
			}
			iVar1++;
		}
	}
}

bool func_53(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_54(int iParam0)
{
	if (func_53((*Global_1347702)[iParam0]->f_12, 4))
	{
		iVar0 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar1 = 908516622;
	}
	else
	{
		iVar2 = func_250(iParam0, 1);
		iVar0 = iVar2;
		iVar1 = get_hash_key("toast_log_blips");
	}
	if (func_53((*Global_1347702)[iParam0]->f_12, 67108864))
	{
		func_251("MISSION_COMPLETE", &((*Global_1347702)[iParam0]->f_3), iVar1, iVar0, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 1, 1, 1);
	}
	else
	{
		_uilog_set_pending_details_id(1, func_252(iParam0));
		func_253("MISSION_COMPLETE", &((*Global_1347702)[iParam0]->f_3), iVar1, iVar0, 1433015236, "MISSION_COMPLETE_DETAILS", -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 1, 1, 1);
	}
}

char[] func_55(int iParam0)
{
	if (!func_254(iParam0))
	{
		return cVar0;
	}
	switch (func_255(iParam0))
	{
		case 1:
			cVar0 = (*Global_1835011)[func_256(iParam0)]->f_8;
			break;
		case 8:
			cVar0 = (*Global_1347702)[func_257(iParam0)]->f_3;
			break;
		case 11:
			if (iParam0 == func_258(0, 10, 11, 2116153146))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

void func_56(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_57(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_254(iParam0))
	{
		return;
	}
	if (func_259(iParam0) == 4)
	{
		func_261(iParam0, func_260());
		if (!func_262(iParam0) == 5 && !func_262(iParam0) == 6)
		{
			if (bParam3)
			{
				func_263(iParam0, 6);
			}
			else
			{
				func_263(iParam0, 5);
			}
			func_264(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_265(1);
	}
	iVar0 = func_255(iParam0);
	bVar1 = func_139() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_266(0, 2);
		if (!bVar1 && bParam1)
		{
			func_267();
		}
	}
	else
	{
		func_268(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_269(iParam0);
	}
	else
	{
		Var2 = { func_270(-1876607090) };
		_0x0fee2561120f3333(&Var2);
		if (!func_47(32768))
		{
			Var4 = { func_270(773573510) };
			if (!network_is_game_in_progress())
			{
				if (bParam1 && func_262(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_257(iParam0) == 77)
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[76]->f_8), true);
						}
						else
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_257(iParam0)]->f_8), true);
						}
					}
					else if ((func_257(iParam0) != 95 && func_257(iParam0) != 82) && !func_53((*Global_1347702)[func_257(iParam0)]->f_12, 512))
					{
						stat_id_set_gxt_label(&Var4, &((*Global_1347702)[func_257(iParam0)]->f_3), true);
					}
				}
			}
			else
			{
				switch (_0x225640e09effdc3f())
				{
					case 0:
						stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_257(iParam0)]->f_8), true);
						break;
				}
			}
		}
	}
	if (iVar0 == 1)
	{
		Global_40.f_1093 = -1;
	}
	iVar6 = 0;
	if (iVar0 == 1)
	{
		func_272(func_257(iParam0), iVar6, func_271());
	}
	else if (iVar0 == 8)
	{
		func_273(func_257(iParam0), iVar6, func_271(), func_31());
	}
	if (!func_262(iParam0) == 5 && !func_262(iParam0) == 6)
	{
		iVar9 = func_274(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_275(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!&Global_1879534 && !Global_1879534->f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_276(func_257(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_277((iVar10 - 20), 0, iVar10);
					iVar11 = func_277((iVar11 - 10), 0, iVar11);
				}
				func_278(1);
				func_279(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				Global_1899528->f_217 = 1;
				break;
			case 4:
				func_279(45, 0, 1);
				break;
			case 8:
				iVar10 = func_280(func_257(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_277((iVar10 - 20), 0, iVar10);
					iVar11 = func_277((iVar11 - 10), 0, iVar11);
				}
				func_279(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				if (func_281(func_257(iParam0)))
				{
					func_30(14, 0, 0, 0, 0, 0, 1065353216, 0);
				}
				Global_1899528->f_217 = 1;
				break;
			case 9:
				func_279(120, 0, 1);
				break;
			case 2:
				func_279(120, 0, 1);
				break;
			case 6:
				func_279(func_283(func_282(iParam0)), 0, 1);
				break;
			case 5:
				func_279(120, 0, 1);
				break;
		}
	}
	func_284(iParam0, 1);
	func_261(iParam0, func_260());
	func_264(iParam0);
	if ((!func_262(iParam0) == 0 && bParam1) && func_139() == -1)
	{
		iVar12 = func_285(iParam0);
		if (iVar12 != -1)
		{
			func_286(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_287();
			if (iVar12 != -1)
			{
				func_286(0);
			}
		}
	}
	if (bParam1)
	{
		Global_1898437 = iParam0;
		switch (iVar0)
		{
			case 1:
				Global_1898438 = get_game_timer();
				break;
			case 6:
				switch (func_257(iParam0))
				{
					case 0:
						Global_1898438 = (get_game_timer() - 5000);
						break;
					case 1:
						Global_1898438 = get_game_timer();
						break;
				}
				break;
			case 2:
			case 4:
			case 5:
			case 9:
			case 11:
				Global_1898438 = get_game_timer();
				break;
			case 8:
				if (func_45(func_257(iParam0)) && func_53((*Global_1347702)[func_257(iParam0)]->f_12, 4))
				{
					Global_1898438 = get_game_timer();
				}
				else
				{
					Global_1898438 = (get_game_timer() - 5000);
				}
				break;
			default:
				break;
		}
	}
	if (bParam4)
	{
		switch (iVar0)
		{
			case 1:
				if (func_257(iParam0) != 77)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_288();
				}
				break;
			case 8:
				if (func_257(iParam0) != 58)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_288();
				}
				break;
		}
	}
	if (!func_262(iParam0) == 5 && !func_262(iParam0) == 6)
	{
		if (bParam3)
		{
			func_263(iParam0, 6);
		}
		else
		{
			func_263(iParam0, 5);
		}
		func_264(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_257(iParam0))
				{
					case 0:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						_0xd8c7162ab2e2af45(-1753910767);
						break;
					case 1:
						func_289();
						_0xbb697756309d77ee(1);
						break;
					case 4:
						func_290(-1781387050, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_290(1433048902, 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_290(-597058368, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_290(-529638012, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_290(500564674, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_290(-875449072, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_290(1237770824, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_290(236757114, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_290(-601932535, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_290(-1267972061, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_291(-1267972061);
						func_290(1619534881, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_291(1619534881);
						func_290(-755457379, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_291(-755457379);
						func_290(1015404643, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_291(1015404643);
						func_290(-1724192342, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_291(-1724192342);
						func_290(1310680212, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_291(1310680212);
						func_290(-566881549, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_291(-566881549);
						func_290(-1753730528, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_291(-1753730528);
						func_290(147796381, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_291(147796381);
						func_290(-378547623, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_291(-378547623);
						func_290(829545206, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_291(829545206);
						func_290(891318243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_291(891318243);
						func_290(-1016714371, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_290(-1838434463, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_290(-1448210800, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_290(-248960099, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_292();
						func_293(967523420);
						func_294();
						func_295();
						break;
					case 5:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key(func_296(10, 0)));
						break;
					case 8:
						_0x946d46cd6dfb9742(get_player_index(), 0, 621714131);
						break;
					case 15:
						func_290(1030791766, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!_unlock_is_visible(1231074654))
						{
							_unlock_set_visible(1231074654, true);
							func_196(449, 0);
						}
						break;
					case 10:
						if (!_unlock_is_visible(1880205078))
						{
							_unlock_set_visible(1880205078, true);
							func_196(446, 0);
						}
						break;
					case 16:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_LEIGHGRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_ARCHIBALD"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						func_297(304805134, 1, 1);
						if (!func_145((*Global_1347702)[21]->f_15, 1))
						{
							func_57((*Global_1347702)[21]->f_15, 0, 0, 0, 0);
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 2;
							}
							_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[21]->f_3)), iVar14);
						}
						break;
					case 20:
						func_298();
						break;
					case 26:
						func_299();
						break;
					case 17:
						func_300(Global_35, 176992230, 0, -358215195, 1, 1);
						if (func_301())
						{
							func_302(1905553950);
						}
						break;
					case 19:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TAVISH_GRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!func_303(-514575035, -1))
						{
							iVar15 = func_260();
							func_304(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_305(-514575035, iVar15, 0);
						}
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_301())
						{
							func_302(1529685685);
						}
						break;
					case 34:
						if (func_301())
						{
							func_302(-2082646505);
						}
						break;
					case 28:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						func_306();
						break;
					case 37:
						func_307();
						if (func_308())
						{
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							_0xe824ce7d13fcb300(2116153146, iVar14);
						}
						break;
					case 38:
						func_309();
						break;
					case 43:
						func_310();
						break;
					case 44:
						if (!func_145((*Global_1347702)[82]->f_15, 1))
						{
							func_57((*Global_1347702)[82]->f_15, 0, 0, 0, 0);
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[82]->f_3)), iVar14);
						}
						if (!func_145((*Global_1347702)[83]->f_15, 1))
						{
							func_57((*Global_1347702)[83]->f_15, 0, 0, 0, 0);
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[83]->f_3)), iVar14);
						}
						break;
					case 45:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ARTURO"));
						break;
					case 48:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_MONROE"));
						break;
					case 49:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_FAVOURS"));
						break;
					case 58:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLEET_GOON"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_JOE_GOON"));
						break;
					case 50:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_PAYTAH"));
						break;
					case 52:
						break;
					case 47:
						func_311();
						break;
					case 59:
						func_312();
						break;
					case 60:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						func_313();
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_DAVID_GEDDES"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ABE"));
						break;
					case 62:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ANGUS_GEDDES"));
						break;
					case 63:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_DUNCAN_GEDDES"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_MRS_GEDDES"));
						break;
					case 67:
						func_314();
						if (!_unlock_is_visible(1673898385))
						{
							_unlock_set_visible(1673898385, true);
							func_196(451, 0);
						}
						if (!func_315(-1992824800))
						{
							if (func_315(1520110311))
							{
								iVar16 = func_260();
								func_304(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_305(1937177603, iVar16, 1);
							}
						}
						if (func_316(4))
						{
							if (!func_317(684296857, 1, 0))
							{
								iVar17 = func_260();
								func_304(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_305(-1439688706, iVar17, 1);
							}
						}
						func_290(1224687176, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_290(-4440804, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_318(89200);
						func_318(2300);
						func_318(2300);
						break;
					case 68:
						func_319();
						break;
					case 76:
						if (Global_1425247->f_53)
						{
							iVar14 = 0;
						}
						else
						{
							iVar14 = 1;
						}
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[108]->f_3)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[69]->f_3)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[70]->f_3)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[7]->f_3)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[22]->f_3)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[23]->f_3)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[65]->f_3)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1835011)[7]->f_8)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1835011)[8]->f_8)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1835011)[36]->f_8)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1835011)[48]->f_8)), iVar14);
						func_320();
						func_318(-139100);
						break;
					case 69:
						if (func_145((*Global_1347702)[9]->f_15, 1))
						{
							func_318(-6000);
						}
						break;
					case 70:
						func_318(23400);
						func_318(1900);
						func_318(-15000);
						break;
					case 71:
						func_318(-5500);
						break;
				}
				break;
			case 8:
				switch (func_257(iParam0))
				{
					case 0:
						if (!_0x0772f87d7b07719a(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_MILTON")))
						{
							_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_MILTON"));
						}
						if (!_0x0772f87d7b07719a(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_EDGAR")))
						{
							_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_EDGAR"));
						}
						break;
					case 4:
						_0x946d46cd6dfb9742(get_player_index(), 0, -812886857);
						_0x946d46cd6dfb9742(get_player_index(), 0, -751847444);
						break;
					case 5:
						_0x946d46cd6dfb9742(get_player_index(), 0, -1843499806);
						_0x946d46cd6dfb9742(get_player_index(), 0, -259499455);
						_0x946d46cd6dfb9742(get_player_index(), 0, 1193930411);
						break;
					case 22:
						_0x946d46cd6dfb9742(get_player_index(), 0, -433459459);
						break;
					case 24:
						_0x946d46cd6dfb9742(player_id(), 0, -1230369426);
						break;
					case 26:
						_0x946d46cd6dfb9742(get_player_index(), 0, 2049954876);
						_0x946d46cd6dfb9742(get_player_index(), 0, 1851064008);
						_0x946d46cd6dfb9742(get_player_index(), 0, -511263105);
						_0x946d46cd6dfb9742(get_player_index(), 0, -837057898);
						_0x946d46cd6dfb9742(get_player_index(), 0, -258195548);
						_0x946d46cd6dfb9742(get_player_index(), 0, -1110794082);
						break;
					case 28:
						_0x946d46cd6dfb9742(get_player_index(), 0, -1324848767);
						break;
					case 30:
						_0x946d46cd6dfb9742(get_player_index(), 0, -461700465);
						_0x946d46cd6dfb9742(get_player_index(), 0, -489179187);
						break;
					case 37:
						_0x946d46cd6dfb9742(get_player_index(), 0, 1595707554);
						break;
					case 56:
						_0x946d46cd6dfb9742(get_player_index(), 0, 883682516);
						break;
					case 57:
						_0x946d46cd6dfb9742(get_player_index(), 0, 780151577);
						break;
					case 58:
						func_321();
						break;
					case 59:
						_0x946d46cd6dfb9742(get_player_index(), 0, -121001171);
						_0x946d46cd6dfb9742(get_player_index(), 0, 727067922);
						break;
					case 61:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_THOMAS_DOWNES"));
						break;
					case 62:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_EDITH_DOWNES"));
						func_322();
						break;
					case 66:
						func_323();
						func_324();
						break;
					case 67:
						if (!func_325(6))
						{
							func_326(6);
						}
						if (!func_325(3))
						{
							func_326(3);
						}
						if (func_301())
						{
							func_302(1534638301);
						}
						break;
					case 68:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_MEREDITH"));
						break;
					case 89:
						_0x946d46cd6dfb9742(get_player_index(), 0, 1085773120);
						break;
					case 91:
						_0x946d46cd6dfb9742(get_player_index(), 0, 753448360);
						break;
					case 98:
						_0x946d46cd6dfb9742(get_player_index(), 0, 1853266833);
						break;
					case 101:
						_0x946d46cd6dfb9742(get_player_index(), 0, 709011912);
						break;
					case 115:
						_0x946d46cd6dfb9742(player_id(), 0, get_hash_key("ALLY_RAINSFALL"));
						_0x946d46cd6dfb9742(player_id(), 0, get_hash_key("COMP_EAGLE_FLIES"));
						break;
					case 120:
						_0xd8c7162ab2e2af45(1720279629);
						break;
					case 138:
						_0x946d46cd6dfb9742(get_player_index(), 0, -831543589);
						_0x946d46cd6dfb9742(get_player_index(), 0, -1687814239);
						break;
					case 139:
						_0x946d46cd6dfb9742(get_player_index(), 0, -831543589);
						_0x946d46cd6dfb9742(get_player_index(), 0, -1687814239);
						_0x946d46cd6dfb9742(get_player_index(), 0, 989551914);
						break;
					case 140:
						_0x946d46cd6dfb9742(get_player_index(), 0, 2131140554);
						break;
					case 143:
						_0x946d46cd6dfb9742(get_player_index(), 0, 240200131);
						_0x946d46cd6dfb9742(get_player_index(), 0, -480463506);
						_0x946d46cd6dfb9742(get_player_index(), 0, 1901360117);
						break;
					case 147:
						_0x946d46cd6dfb9742(get_player_index(), 0, -1841532568);
						break;
					case 9:
						if (func_145((*Global_1835011)[69]->f_1, 1))
						{
							func_327(0);
							func_318(40500);
						}
						else
						{
							func_327(0);
							func_318(46500);
						}
						break;
				}
				break;
			case 6:
				switch (func_257(iParam0))
				{
					case 0:
						switch (func_282(iParam0))
						{
							case 5:
								_0x946d46cd6dfb9742(get_player_index(), 0, 1014740297);
								break;
						}
						break;
				}
				break;
		}
		func_328(iParam0);
		func_329();
		switch (iVar0)
		{
			case 1:
				switch (func_257(iParam0))
				{
					case 4:
						func_330(iParam0, 1000, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						func_330(iParam0, 300, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 25:
						func_330(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						func_330(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						func_330(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						func_330(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						func_330(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = func_331(iParam0);
						func_330(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						func_330(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						func_330(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!func_317(-2046502963, 1, 0))
						{
							func_290(-2046502963, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						func_330(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						func_330(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						func_330(iParam0, 2042100, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 72:
						if (func_331(iParam0) == 0)
						{
							func_330(iParam0, 20000, 0, 1065353216, 1, 0, 0, 1);
						}
						else
						{
							func_330(iParam0, 15000, 0, 1065353216, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (func_53((*Global_1347702)[func_257(iParam0)]->f_12, 536870912))
				{
					func_332(11, 1);
				}
				switch (func_257(iParam0))
				{
					case 109:
						func_330(iParam0, 1500, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 55:
						func_332(8, 1);
						break;
					case 138:
						set_bit(&(Global_40.f_9052), 1);
						set_bit(&(Global_40.f_9052), 3);
						break;
					case 94:
						func_330(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						func_330(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						func_330(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						func_330(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == func_258(0, 10, 11, 2116153146))
				{
					func_330(iParam0, func_331(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_258(0, 7, 11, -379687487))
				{
					func_330(iParam0, func_333(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_258(0, 8, 11, -1386089015))
				{
					func_330(iParam0, func_333(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == func_258(0, 11, 11, -1952009645))
				{
					func_330(iParam0, func_333(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_258(0, 12, 11, 2065895756))
				{
					func_330(iParam0, func_333(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!func_262(iParam0) == 0)
			{
				if (func_334(iParam0) == 0)
				{
				}
				else if (_0x01f4d242765c6b24(func_334(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					func_335(func_255(iParam0), func_334(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && func_257(iParam0) == 58)
						{
							Global_1879514->f_1 = iParam0;
						}
						func_336(func_55(Global_1879514->f_1));
						if (iVar0 == 8 && func_257(iParam0) == 58)
						{
							Global_1879514->f_1 = -1;
						}
					}
				}
			}
			if (bParam2)
			{
				switch (iVar0)
				{
					case 1:
						iVar20 = 3;
						break;
					case 4:
						iVar20 = 2;
						break;
					case 6:
						iVar20 = 1;
						break;
					case 2:
						iVar20 = 9;
						break;
					case 8:
						if (func_45(func_257(iParam0)) && func_53((*Global_1347702)[func_257(iParam0)]->f_12, 1))
						{
							iVar20 = 3;
						}
						else
						{
							iVar20 = 8;
						}
						break;
					case 7:
						iVar20 = 0;
						break;
					case 5:
						iVar20 = 12;
						break;
					case 9:
					case 11:
						iVar20 = 0;
						break;
				}
			}
			func_337(bParam2, iVar20);
		}
	}
	func_338(1);
	if ((bVar13 || func_288()) && (func_255(iParam0) == 1 || func_255(iParam0) == 8))
	{
		Global_1879534->f_6 = 1;
		Global_1879534->f_7 = 1;
	}
}

void func_58(int iParam0, bool bParam1)
{
	if (_0x01f4d242765c6b24(func_334(iParam0)))
	{
		iVar0 = 0;
		if (bParam1)
		{
			iVar0 = 3;
		}
		func_335(func_255(iParam0), func_334(iParam0), iVar0);
		if (func_47(32768))
		{
			iVar1 = func_255(iParam0);
			if ((iVar1 == 1 || iVar1 == 8) || (iVar1 == 11 && iParam0 == func_258(0, 10, 11, 2116153146)))
			{
				Global_1898438 = get_game_timer();
				Global_1879514->f_1 = iParam0;
				Global_1879514->f_19 = func_339();
				Global_1879514->f_18 = 1;
			}
		}
	}
	if (func_340(iParam0))
	{
		func_243(iParam0, 0, 2);
	}
	else if (func_242(iParam0))
	{
		if (!func_262(iParam0) == 5 && !func_262(iParam0) == 6)
		{
			if (bParam1)
			{
				func_263(iParam0, 6);
			}
			else
			{
				func_263(iParam0, 5);
			}
			func_264(iParam0);
		}
	}
	switch (func_255(iParam0))
	{
		case 1:
			switch (func_257(iParam0))
			{
				case 12:
				case 19:
				case 20:
				case 24:
				case 25:
				case 28:
				case 29:
				case 34:
				case 53:
				case 57:
					Global_1879514->f_12 = 1;
					break;
				case 69:
				case 70:
				case 71:
				case 74:
				case 76:
					Global_1879514->f_14 = 1;
					break;
			}
			break;
		case 8:
			switch (func_257(iParam0))
			{
				case 37:
				case 63:
				case 94:
				case 116:
					Global_1879514->f_12 = 1;
					break;
				case 9:
					Global_1879514->f_14 = 1;
					break;
			}
			break;
	}
}

void func_59(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_12 & 67108864 != 0)
	{
		return;
	}
	iVar0 = func_341(iParam0);
	if (iVar0 == 1)
	{
		if (_uilog_is_entry_registered(iVar0, func_252(iParam0)))
		{
			_uilog_mark_mission_completed(func_252(iParam0));
		}
		func_342(iParam0, 4);
		func_342(iParam0, 8);
		return;
	}
	else if (func_53((*Global_1347702)[iParam0]->f_12, 4))
	{
		func_343(Global_1347702[iParam0]);
		func_344(iParam0);
		if (_uilog_is_entry_registered(iVar0, func_252(iParam0)))
		{
			StringCopy(&cVar1, "", 24);
			cVar4 = func_345(0, &cVar1, 0, 0, -1, -1);
			func_346(iParam0, &cVar1, cVar4, -1082130432);
			_uilog_set_entry_icon_texture(iVar0, func_252(iParam0), get_hash_key("TOAST_MEDAL_COLLECTABLE"), get_hash_key("hud_toasts"));
		}
		func_342(iParam0, 4);
		func_342(iParam0, 8);
		return;
	}
	bVar5 = false;
	if (func_347(iParam0, 8))
	{
		bVar5 = true;
	}
	bVar6 = false;
	if (func_347(iParam0, 16))
	{
		bVar6 = true;
	}
	func_343(Global_1347702[iParam0]);
	func_344(iParam0);
	MemCopy(&cVar1, {(*Global_1347702)[iParam0]->f_1}, 3);
	StringConCat(&cVar1, "_obj", 24);
	if (func_347(iParam0, 64))
	{
		StringConCat(&cVar1, "3", 24);
	}
	else if (func_347(iParam0, 32))
	{
		StringConCat(&cVar1, "2", 24);
	}
	if (does_text_label_exist(&cVar1))
	{
		cVar4 = func_345(0, &cVar1, 0, 0, -1, -1);
		func_346(iParam0, &cVar1, cVar4, -1082130432);
		if (func_347(iParam0, 16) || bVar6)
		{
			func_348(iParam0, 1);
		}
		if (func_347(iParam0, 8) || bVar5)
		{
			func_349(iParam0, 1);
		}
	}
	else
	{
		StringCopy(&cVar1, "", 24);
		cVar4 = func_345(0, &cVar1, 0, 0, -1, -1);
		func_346(iParam0, &cVar1, cVar4, -1082130432);
		func_349(iParam0, 1);
		if (func_347(iParam0, 16) || bVar6)
		{
			func_348(iParam0, 1);
		}
	}
}

int func_60(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_1;
}

int func_61(int iParam0)
{
	return &(Global_17504.f_42[iParam0]);
}

void func_62(var uParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (are_strings_equal(_0xf81c53561d15f330(), func_350(uParam0->f_3)))
	{
		_0x1096603b519c905f("");
	}
	if (uParam0->f_48)
	{
		stop_audio_scene("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			func_351(uParam0->f_3, 524288);
		}
	}
	if (func_92(player_ped_id(), 0, 1))
	{
		iVar1 = get_mount(Global_35);
		set_ped_config_flag(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *iParam1)
		{
			bVar3 = (bParam8 && decor_exist_on(iParam1[iVar0], "pedRoam_bInPedRoam"));
			if (func_92(iParam1[iVar0], 0, 0))
			{
				func_352(iParam1[iVar0], bVar3);
				if (func_353(uParam0, (*iParam1)[iVar0]))
				{
					func_354((*iParam1)[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (func_92(iParam1[iVar0], 0, 1))
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
							func_355(iParam1[iVar0], 1073741824, func_207(iVar0 < iVar2, &(uParam0->f_98[iVar0]), -1f), iVar1, 0);
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
		func_356(uParam0);
	}
	func_357(uParam0);
	if (!uParam0->f_186)
	{
		func_97(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = func_358(uParam0->f_3, uParam0->f_185);
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
		func_335(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

void func_63()
{
	iVar0 = 0 * 10 + 6;
	func_35(Global_23118.f_1651[iVar0], 2048);
}

void func_64(vector3 vParam0, float fParam3, int iParam4)
{
	vVar3 = { _get_object_offset_from_coords(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { _get_object_offset_from_coords(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_359(vVar0, vVar3, 0f) };
	vVar9 = { func_360(vVar0, vVar3, 0f) };
	if (iParam4 == 5)
	{
		set_roads_back_to_original(vVar6, vVar9, 0, 1);
	}
	else
	{
		_0x6c3f12eceb6d2e2a(vVar6, vVar9, iParam4, 1);
	}
}

void func_65(vector3 vParam0, int iParam3)
{
	if (func_361(vParam0))
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
			if (func_362(vVar2, vParam0, 2f, 1))
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

void func_66(var uParam0, var uParam1)
{
	func_155();
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

void func_67()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

void func_68(bool bParam0)
{
	func_363(1, !bParam0);
}

var func_69(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	if (bParam2)
	{
		_0xdd1232b332cbb9e7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_364(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_345(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		_uilog_set_cached_objective(sVar0);
	}
	return func_364(sVar0, iParam1, 0, 0, 1, 1);
}

void func_70(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_76(&(iParam0->f_1), 2048);
	}
	else
	{
		func_35(&(iParam0->f_1), 2048);
	}
}

void func_71(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_76(&(iParam0->f_1), 256);
	}
	else
	{
		func_35(&(iParam0->f_1), 256);
	}
}

void func_72(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_35(iParam0, 16);
	}
	else
	{
		func_76(iParam0, 67108864);
		func_76(iParam0, 16);
	}
}

void func_73(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_76(&(iParam0->f_1), 128);
	}
	else
	{
		func_35(&(iParam0->f_1), 128);
	}
}

void func_74(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_35(iParam0, 256);
	}
	else
	{
		func_76(iParam0, 256);
	}
}

void func_75(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_35(iParam0, 268435456);
	}
	else
	{
		func_76(iParam0, 268435456);
	}
	if (!bParam2)
	{
		func_35(iParam0, 1073741824);
	}
	else
	{
		func_76(iParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_35(iParam0, 536870912);
	}
	else
	{
		func_76(iParam0, 536870912);
	}
}

void func_76(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

bool func_77(bool bParam0)
{
	iVar0 = get_cause_of_most_recent_force_cleanup();
	if (bParam0)
	{
		return true;
	}
	if (func_365(iVar0))
	{
		return false;
	}
	if (func_366(iVar0, 1) || func_366(iVar0, 2))
	{
		return true;
	}
	return false;
}

bool func_78(var uParam0)
{
	iVar0 = func_367(uParam0->f_3);
	iVar1 = func_368(1);
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

void func_79()
{
	switch (iVar500)
	{
		case 76:
			Local_409[0]->f_1 = 1487888533;
			StringCopy(&(Local_409[0]->f_23), "0466_A_M_M_ValTownfolk_02_WHITE_01", 64);
			Local_409[0]->f_3 = -1135245718;
			break;
		case 92:
			Local_409[0]->f_1 = 1487888533;
			StringCopy(&(Local_409[0]->f_23), "0495_A_M_M_VhtTownfolk_01_BLACK_01", 64);
			Local_409[0]->f_3 = -364813759;
			break;
	}
	Local_409[0] = 22;
	func_369(&(Local_409[0]->f_22));
	func_370(&(Local_409[0]->f_22));
}

void func_80(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		func_371(&((*iParam0)[iVar0]->f_1));
		func_371(&((*iParam0)[iVar0]->f_12));
		iVar0++;
	}
}

char* func_81()
{
	return "script_re@drunk_dueler";
}

char* func_82()
{
	return "script@beat@town@drunkDueler@drunkDueler";
}

bool func_83(int iParam0)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (!func_372((*iParam0)[iVar0]))
		{
			bVar1 = true;
		}
		iVar0++;
	}
	return !bVar1;
}

bool func_84(int iParam0, var uParam1, bool bParam2, var uParam3, struct<7> Param4, var uParam11, bool bParam12, bool bParam13, int iParam14)
{
	if (Param4.f_6 > -1)
	{
		*uParam1 = { func_373(iParam0, Param4.f_6) };
		uParam1->f_4 = Param4.f_6;
		uParam1->f_5 = uParam1->f_4;
		func_374(iParam0, uParam1, bParam2, bParam12, 0);
		*uParam3 = 0;
		return true;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (func_100(iParam0, 128))
			{
				if (!func_375(iParam0, &(uParam1->f_10)))
				{
					*uParam11 = 1;
					return false;
				}
			}
			else
			{
				func_376(iParam0, &uVar1, &uVar2, &iVar0, 0);
				bVar4 = false;
				*uParam1 = { func_377(&bVar4, iParam0, uVar2, uVar1) };
				if (bVar4)
				{
					*uParam11 = 1;
					return false;
				}
				if (func_361(*uParam1))
				{
					return func_378(uParam1, uParam3, uParam11, bParam2, 12, 1000);
				}
				uParam1->f_4 = func_379(iParam0, *uParam1);
				uParam1->f_5 = uParam1->f_4;
				if (func_3(Param4.f_2, 8))
				{
					func_374(iParam0, uParam1, 0, bParam12, 0);
					*uParam3 = 0;
					return true;
				}
				func_380(uParam1);
			}
			*uParam3 = 0;
			uParam1->f_9 = 2;
			break;
		case 1:
			if (func_381(uParam1, uParam3, uParam11, bParam2, bParam13))
			{
				if (!bParam13 && func_382(vdist(Global_36, *uParam1), iParam0))
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
			if (func_100(iParam0, 128))
			{
				if (!func_383(uParam1, &bVar3))
				{
					if (bVar3)
					{
						return func_378(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					return false;
				}
			}
			else
			{
				func_376(iParam0, &uVar1, &uVar2, &iVar0, 0);
				if (vdist2(*uParam1, Global_36) < to_float(iVar0))
				{
					if (!func_380(uParam1))
					{
						return func_378(uParam1, uParam3, uParam11, bParam2, 12, 1000);
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
			if (func_384(iParam0, Param4.f_1, uParam1, Param4, iParam14))
			{
				func_374(iParam0, uParam1, bParam2, bParam12, 0);
				*uParam3 = 0;
				return true;
			}
			else
			{
				*uParam3 = 0;
				uParam1->f_9 = 5;
				return func_378(uParam1, uParam3, uParam11, bParam2, 12, 1000);
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
		func_69("BEAT_SCAN", 2000, 0, 1, 0, 0, -1, -1, 0);
	}
	if (uParam1->f_8 >= 12)
	{
		if (bParam2)
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_69("BEAT_FAIL", 4000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam11 = 1;
	}
	return false;
}

bool func_85(var uParam0, int iParam1)
{
	if (func_86(iParam1, 256))
	{
		if (_does_volume_exist(uParam0->f_172) || func_386(iParam1, func_385(uParam0), &(uParam0->f_172)))
		{
			if (func_92(Global_35, 0, 1))
			{
				return is_entity_in_volume(Global_35, uParam0->f_172, true, 0);
			}
		}
	}
	return true;
}

bool func_86(int iParam0, int iParam1)
{
	if (!func_387(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0] && iParam1) != 0;
}

void func_87(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (uParam0->f_176)
	{
		return;
	}
	if (iParam1 != -1)
	{
		func_388(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, IntToFloat(iParam1), IntToFloat(iParam1), 5f, "Custom Sized Ambient Avoidance");
	}
	else if (func_86(uParam0->f_3, 1) && !func_86(uParam0->f_3, 32))
	{
		func_388(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 25f, 25f, 6f, "Ambient Avoidance Wilderness & No Traffic");
	}
	else if (func_86(uParam0->f_3, 2) && !func_86(uParam0->f_3, 32))
	{
		func_388(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 4f, 4f, 5f, "Ambient Avoidance Town & No Traffic");
	}
	else
	{
		return;
	}
	_0xb56d41a694e42e86(uParam0->f_171, 2228255, 262144, 0, -1, -1, uParam0->f_175);
	_0x18262cafebb5fbe1(uParam0->f_171, 0, 0, 0, -1, -1, 0);
	if (bParam3)
	{
		func_389(uParam0->f_171, 1);
	}
	if (func_86(uParam0->f_3, 1))
	{
		func_388(&(uParam0->f_174), uParam0->f_51, 0f, 0f, 0f, _0x3e2a25b2416dd67e(uParam0->f_171) * Vector(3.5f, 3.5f, 3.5f), "Predator Stay Out");
		func_390(uParam0->f_174, 0, 262144, 0, 0);
	}
	if (iParam2 == 0)
	{
	}
	else if (does_entity_exist(iParam2))
	{
		_0x7c00cfc48a782dc0(uParam0->f_171, iParam2, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
}

float func_88(vector3 vParam0)
{
	vVar0 = { Global_36 - vParam0 };
	return get_heading_from_vector_2d(vVar0.x, vVar0.y);
}

void func_89()
{
	Local_409[0]->f_6 = { 0f, 0f, 0f };
	Local_409[0]->f_9 = 0f;
	*vLocal_683[0] = { -306.7711f, 794.0446f, 116.9377f };
	*vLocal_683[1] = { -295.5699f, 792.4971f, 117.4441f };
	*vLocal_683[2] = { -306.4566f, 792.1155f, 117.0001f };
	vLocal_693 = { -307.5273f, 799.3851f, 117.9846f };
	vLocal_696 = { -284.692f, 804.5229f, 118.3859f };
	fLocal_706 = 102.6968f;
	vLocal_699 = { -307.1362f, 796.5485f, 117.9482f };
	vLocal_702 = { -298.8752f, 804.004f, 117.4571f };
	iLocal_709 = 984062573;
	fLocal_705 = 94.87f;
	iLocal_503[0] = -908482159;
	iLocal_503[1] = -1147728628;
	func_391(&uLocal_661, -307.2447f, 796.9744f, 118.9108f, 0f, 0f, 9.4511f, 3.4452f, 3.3857f, 2.3769f, "volSlow");
	func_391(&uLocal_662, -307.5374f, 798.4976f, 118.9412f, 0f, 0f, 10.61f, 1.8858f, 0.5928f, 2.4717f, "volWalkTrigger");
	func_391(&uLocal_663, -307.3922f, 797.7228f, 118.8536f, 0f, 0f, 10.61f, 2.5524f, 1.3177f, 2f, "volRunTrigger");
	func_391(&uLocal_664, -301.6725f, 792.4606f, 117.924f, 0f, 0f, 0f, 33.2656f, 4.616f, 3.4388f, "volDuel");
	func_391(&iLocal_665, -305.9505f, 789.8896f, 117.924f, 0f, 0f, 10.3386f, 94.21973f, 12.00852f, 8.132535f, "volOutside");
	func_391(&uLocal_668, -307.6545f, 799.3917f, 119.2521f, 0f, 0f, 7.925574f, 2.727079f, 4.353341f, 2.674541f, "volRestrict");
	_0xb56d41a694e42e86(iVar666, 2762751, 0, 0, -1, -1, 2);
	func_388(&uLocal_666, -307.5522f, 798.4532f, 119.2795f, 0f, 0f, 12.65583f, 0.823f, 1.644f, 1.426f, "volDoor");
	iLocal_667 = _create_volume_aggregate_with_custom_name("volBackDoor");
	_0x39816f6f94f385ad(uVar665, -306.6119f, 819.8782f, 119.0862f, 0f, 0f, 9.982491f, 1.347484f, 1f, 2.367232f);
	_0x39816f6f94f385ad(uVar665, -315.8594f, 818.2241f, 119.0862f, 0f, 0f, 9.982491f, 1.347484f, 1f, 2.367232f);
	_0x39816f6f94f385ad(uVar665, -306.5987f, 819.9038f, 122.0898f, 0f, 0f, 9.982491f, 1.347484f, 1f, 2.367232f);
	_0x39816f6f94f385ad(uVar665, -316.3106f, 816.9984f, 122.0898f, 0f, 0f, -78.61539f, 1.347484f, 1f, 2.367232f);
}

void func_90()
{
	Local_409[0]->f_6 = { 0f, 0f, 0f };
	Local_409[0]->f_9 = 0f;
	*vLocal_683[0] = { 2955.639f, 523.1965f, 43.96562f };
	*vLocal_683[1] = { 2959.422f, 512.3481f, 44.2814f };
	*vLocal_683[2] = { 2957.896f, 523.2081f, 43.8097f };
	vLocal_693 = { 2950.425f, 523.4773f, 44.3583f };
	vLocal_699 = { 2953.204f, 523.2537f, 44.4918f };
	vLocal_702 = { 2935.42f, 518.3702f, 44.36332f };
	iLocal_709 = 984062573;
	fLocal_705 = 89.79f;
	iLocal_503[0] = -1069042457;
	iLocal_503[1] = 244699522;
	func_391(&uLocal_661, 2953.026f, 523.3306f, 45.5098f, 0f, 0f, 0f, 3.349408f, 3.1616f, 3.3916f, "volSlow");
	func_391(&uLocal_662, 2951.701f, 523.3306f, 45.5098f, 0f, 0f, 0f, 0.2418f, 1.9936f, 3.3916f, "volWalkTrigger");
	func_391(&uLocal_663, 2952.446f, 523.3306f, 45.5098f, 0f, 0f, 0f, 1.4948f, 3.1616f, 3.3916f, "volRunTrigger");
	func_391(&uLocal_664, 2958.899f, 513.1832f, 45.0602f, 0f, 0f, 8.0446f, 4.1509f, 34.5933f, 4.4361f, "volDuel");
	func_391(&uLocal_668, 2950.595f, 523.3251f, 45.66394f, 0f, 0f, 0f, 3.28325f, 2.085436f, 2.598443f, "volRestrict");
	_0xb56d41a694e42e86(iVar666, 2762751, 0, 0, -1, -1, 2);
	iLocal_665 = _create_volume_aggregate_with_custom_name("volOutside");
	_0x39816f6f94f385ad(uVar663, 2959.43f, 523.2339f, 46.89788f, 0f, 0f, 0f, 8.964821f, 26.30948f, 7.91115f);
	_0x39816f6f94f385ad(uVar663, 2962.266f, 498.4694f, 47.87248f, 0f, 0f, 10.27591f, 8.964821f, 26.30948f, 8.249818f);
	_0x39816f6f94f385ad(uVar663, 2969.171f, 474.8641f, 48.86748f, 0f, 0f, 21.87796f, 8.964821f, 26.30948f, 8.249818f);
	_0x39816f6f94f385ad(uVar663, 2964.016f, 561.515f, 47.12326f, 0f, 0f, -10.44218f, 8.964821f, 53.24431f, 8.249818f);
	func_388(&uLocal_666, 2951.624f, 523.3085f, 45.86937f, 0f, 0f, 0f, 2.20361f, 0.790309f, 1.76461f, "volDoor");
	iLocal_667 = _create_volume_aggregate_with_custom_name("volBackDoor");
	_0x39816f6f94f385ad(uVar665, 2943.594f, 517.0298f, 45.55835f, 0f, 0f, 0f, 1.443096f, 1f, 2.38259f);
	_0x39816f6f94f385ad(uVar665, 2937.532f, 527.8441f, 45.486f, 0f, 0f, 0f, 1.443735f, 1f, 2.360056f);
}

int func_91(int iParam0, var uParam1, vector3 vParam2, int iParam5, bool bParam6, bool bParam7, int iParam8, var uParam9, var uParam10)
{
	if (bParam6)
	{
		func_392(&vParam2, uParam1->f_22);
	}
	if (!bParam7 && func_393(uParam1))
	{
		iVar0 = _0xeaf682a14f8e5f53(uParam1->f_5, vParam2, iParam5, 1, 1, uParam9, uParam10);
		if (!does_entity_exist(iVar0))
		{
			iVar0 = func_394(iParam0, vParam2, iParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
		}
		else if (_is_metaped_outfit_request_valid(uParam1->f_5))
		{
			_release_metaped_outfit_request(uParam1->f_5);
		}
	}
	else
	{
		iVar0 = func_394(iParam0, vParam2, iParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
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
		if (!is_string_null_or_empty(&(uParam1->f_23)) && !func_395(iVar0))
		{
			func_396(iVar0, &(uParam1->f_23), 0);
		}
		if (func_395(iVar0))
		{
			set_animal_tuning_bool_param(iVar0, 48, true);
		}
		else
		{
			set_ped_config_flag(iVar0, 307, true);
		}
		if (func_397(&(uParam1->f_22)))
		{
			set_ped_can_ragdoll(iVar0, true);
			set_ped_to_ragdoll(iVar0, 1000, 1000, 1, false, false, false);
			set_ped_config_flag(iVar0, 186, !func_398(&(uParam1->f_22)));
			func_400(iVar0, func_399(&(uParam1->f_22)), 0);
		}
		else
		{
			request_ped_visibility_tracking(iVar0);
		}
		if (func_401(&(uParam1->f_22)))
		{
			freeze_entity_position(iVar0, true);
		}
		if (func_402(&(uParam1->f_22)))
		{
			func_206(iVar0, 1);
		}
		_0xa91e6cf94404e8c9(iVar0);
		set_ped_config_flag(iVar0, 6, func_403(&(uParam1->f_22)));
		set_ped_config_flag(iVar0, 393, true);
		if (!func_404(uParam1->f_22, 8192))
		{
			_set_entity_something(iVar0, true);
		}
		if (!func_395(iVar0))
		{
			func_406(iVar0, !func_405(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 4, func_407(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 297, !func_408(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 317, !func_408(&(uParam1->f_22)));
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

bool func_92(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_161(iParam0, iParam1);
}

int func_93(int iParam0, int iParam1, int iParam2)
{
	if ((func_409(iParam0, 16777216) && func_409(iParam0, 33554432)) && func_409(iParam0, 268435456))
	{
		return 379542007;
	}
	iVar0 = _0xf8204ef17410bf43(416676503, iParam1, iParam2, 0);
	iVar1 = _0xf8204ef17410bf43(-1101297303, iParam1, iParam2, 0);
	iVar2 = 392538360;
	iVar3 = 0;
	if (!func_409(iParam0, 33554432))
	{
		iVar3 = iVar1;
	}
	if (!func_409(iParam0, 16777216))
	{
		if (!func_410(iVar3) || _0xf2f585411e748b9c(iVar0, 0) > _0xf2f585411e748b9c(iVar3, 0))
		{
			iVar3 = iVar0;
		}
	}
	if (!func_409(iParam0, 268435456) && func_411(iVar2))
	{
		if (!func_410(iVar3) || _0xf2f585411e748b9c(iVar2, 0) > _0xf2f585411e748b9c(iVar3, 0))
		{
			iVar3 = iVar2;
		}
	}
	if (!func_410(iVar3))
	{
		return 379542007;
	}
	return iVar3;
}

int func_94(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_317(1811977508, 1, 0))
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
			if (func_412(iVar25, 0) && func_413(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

bool func_95(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0) && is_entity_a_ped(iParam0))
	{
		iVar0 = func_414(iParam0);
		return func_415(iParam0, 2084597891, iParam1, iVar0);
	}
	return decor_set_int(iParam0, "loot_money", iParam1);
}

void func_96(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_416(iParam0, 0, 0);
	if (func_417(iParam0))
	{
		door_system_set_open_ratio(iParam0, iParam2, iParam6);
		if (fParam5 > 0f)
		{
			door_system_set_automatic_rate(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_418(iParam0, iParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_419(iParam0, 1);
			}
			else
			{
				func_420(iParam0, 1);
			}
		}
		else
		{
			func_421(iParam0, 1);
		}
		if (bParam7)
		{
			_0x276aaf0f1c7f2494(iParam0, 1);
		}
	}
	else if (func_422())
	{
	}
	else if (network_is_in_session())
	{
	}
}

void func_97(var uParam0, int iParam1)
{
	vVar0 = { func_423(uParam0) };
	iVar3 = func_358(uParam0->f_3, iParam1);
	uParam0->f_185 = iParam1;
	_0xca41e86545413b5b(7, 1221649453, -585414509, iVar3, vVar0);
	if (_0x01f4d242765c6b24(iVar3))
	{
		uParam0->f_186 = 1;
	}
}

void func_98(var uParam0, int iParam1)
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

void func_99(var uParam0)
{
	func_71(uParam0, 1);
	func_424(uParam0, 20);
}

bool func_100(int iParam0, int iParam1)
{
	if (!func_387(iParam0))
	{
		return false;
	}
	return ((*Global_1310750)[iParam0]->f_1 && iParam1) != 0;
}

void func_101(var uParam0, var uParam1, int iParam2, int* iParam3)
{
	if (!func_387(iParam2))
	{
		return;
	}
	if (*uParam1)
	{
		return;
	}
	if (func_425())
	{
		func_426(1);
	}
	func_427(iParam2, uParam0->f_43);
	func_428(iParam2, 0, 0, 0, 0);
	if (func_429(iParam2) != -1)
	{
		_set_weather_type_frozen(true);
	}
	start_audio_scene("RE_active_location_scene");
	_0x1096603b519c905f(func_350(uParam0->f_3));
	if (does_blip_exist(*iParam3))
	{
		remove_blip(iParam3);
	}
	func_430(uParam0, 1, 0);
	*uParam1 = 1;
}

void func_102(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0]->f_7 = 0f;
		(*uParam0)[iVar0]->f_8 = 0f;
		iVar0++;
	}
}

void func_103(var uParam0, int iParam1, float fParam2)
{
	bVar0 = false;
	if (uParam0->f_178 && func_431())
	{
		bVar0 = true;
	}
	if (!uParam0->f_48 && !func_100(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_101(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_102(&(uParam0->f_121));
			return;
		}
		if (_does_volume_exist(uParam0->f_173))
		{
			if (!func_180(Global_35, uParam0->f_173, 1, 0))
			{
				return;
			}
		}
		fVar1 = func_432(uParam0, bVar0);
		func_433(uParam0->f_121[iParam1], fVar1, 1082130432, 0, 90f, 0, &(uParam0->f_98[iParam1]));
		if (func_434(&(uParam0->f_121), uParam0->f_120, fParam2))
		{
			func_101(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_102(&(uParam0->f_121));
		}
	}
}

bool func_104(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	fVar0 = 30f;
	fVar1 = 150f;
	if (func_86(uParam2->f_3, 1))
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
			if (func_435())
			{
				fVar0 = 15f;
			}
		}
		if (func_436(uParam2, fVar0))
		{
			*uParam1 = 1;
		}
	}
	if (!uParam2->f_48)
	{
		if (!bParam3 && func_112(player_id(), 1, 0, 1))
		{
			return false;
		}
		if (!func_436(uParam2, fVar1))
		{
			if (!func_437((*Global_1310750)[uParam2->f_3]->f_38))
			{
				return false;
			}
		}
		if (!func_438(uParam2->f_3, 2) && func_439(2))
		{
			return false;
		}
		if (func_86(iParam0, 4194304) || func_86(iParam0, 33554432))
		{
			if (func_440(1))
			{
				return false;
			}
		}
	}
	if (func_441(Global_35))
	{
		return false;
	}
	if (func_442(0, 1, 1) && !func_443(iParam0))
	{
		return false;
	}
	if (!*uParam1 && func_86(iParam0, 128))
	{
		if (is_player_riding_train(player_id()))
		{
			return false;
		}
		if (func_228(Global_35, 0))
		{
			return false;
		}
		if (Global_16)
		{
			return false;
		}
		if (func_112(player_id(), 1, 0, 1))
		{
			return false;
		}
		if (func_444())
		{
			return false;
		}
		iVar2 = func_445(func_2());
		if (func_446(iVar2))
		{
			if (func_447(Global_36, iVar2))
			{
				return false;
			}
		}
		if (func_448(Global_36) && !uParam2->f_161)
		{
			return false;
		}
		if (!uParam2->f_48)
		{
			if (func_449(&(uParam2->f_91), 0, 1084227584, 1, 1))
			{
				return false;
			}
		}
	}
	return true;
}

void func_105(var uParam0, int iParam1)
{
	if (func_450(uParam0->f_51))
	{
		func_65(uParam0->f_51, 0);
		fVar0 = func_451(uParam0->f_3);
		iVar2 = _create_volume_cylinder_with_custom_name(uParam0->f_51, 0f, 0f, 0f, fVar0, fVar0, fVar0, func_452());
		fVar1 = func_207(!func_86(uParam0->f_3, 1), 20f, -1f);
		uParam0->f_51.f_11 = func_454(iVar2, func_453(uParam0->f_3), 1, iParam1, 8, 0, fVar1);
	}
}

void func_106(int iParam0, bool bParam1, int iParam2)
{
	func_455(iParam2);
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
		iParam0->f_13 = func_456(0);
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
							func_35(iParam0, 33554432);
						}
					}
					else if (!*iParam0 & 8192 != 0)
					{
						if (func_440(1))
						{
							func_35(iParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_35) && (!func_440(1) || *iParam0 & 8192 != 0))
				{
					func_76(iParam0, 33554432);
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
			if (func_457(iParam0))
			{
				iParam0->f_15 = func_126();
			}
		}
		else if (iParam0->f_15 > 0)
		{
			if ((func_126() - iParam0->f_15) > 500)
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
	func_458(iParam0);
}

bool func_107(int iParam0, int iParam1)
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
			if (!func_459(iParam0, iParam1, iVar2))
			{
				return false;
			}
			if (func_460(iParam0, iVar2) <= func_461(iParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_108(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		iParam1->f_10 = iParam0;
	}
	if (func_462(iParam2, 1, 1, 1, 0))
	{
		func_35(iParam1, 2048);
	}
	iParam1->f_16 = iParam2;
	func_463(iParam1, 1);
	func_67();
}

bool func_109(int iParam0, int iParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_464(iParam0, !*iParam1 & 268435456 != 0, !*iParam1 & 536870912 != 0, !*iParam1 & 1073741824 != 0, 0, 0))
		{
			if (iParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (iParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_465(iParam1);
			if (func_466(iParam1, iParam0, fVar0, fVar1))
			{
				if (iParam1->f_2 == 0)
				{
					iParam1->f_2 = get_game_timer();
				}
				iVar2 = (get_game_timer() - iParam1->f_2);
				iVar3 = func_467(iParam1);
				if (iParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_463(iParam1, 1);
						return true;
					}
					else if (iParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_463(iParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_110(int iParam0, int iParam1, int iParam2)
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
	if (func_468(iParam1, !*iParam2 & 268435456 != 0, !*iParam2 & 536870912 != 0, !*iParam2 & 1073741824 != 0, 0))
	{
		if (iParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (iParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_465(iParam2);
		if (func_466(iParam2, iParam0, fVar0, fVar1))
		{
			if (iParam2->f_2 == 0)
			{
				iParam2->f_2 = get_game_timer();
			}
			if (iParam2->f_2 != 0)
			{
				if (get_game_timer() - iParam2->f_2) > func_467(iParam2)
				{
					func_463(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_111(int iParam0, int iParam1)
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
	if (func_459(iParam0, iParam1, iVar1))
	{
		if (iParam1->f_3 == 0)
		{
			iParam1->f_3 = get_game_timer();
		}
		else if (get_game_timer() - iParam1->f_3) > func_467(iParam1)
		{
			fVar3 = func_465(iParam1);
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

bool func_112(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_469(bParam1, bParam2, bParam3);
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

bool func_113(int iParam0, float fParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_126();
	iVar1 = (iVar0 - iParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_114(var uParam0, int iParam1, int iParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_470(iParam2);
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
			if (func_122(iParam2, iParam1))
			{
				func_463(iParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_115(var uParam0, int iParam1, int iParam2)
{
	if (iParam2->f_12 < IntToFloat(func_471(iParam2)))
	{
		if ((is_weapon_valid(Global_1935630->f_46) && !_0x5809dbca0a37c82b(Global_1935630->f_46)) || get_current_ped_vehicle_weapon(Global_35, &uVar0))
		{
			if (func_122(iParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_463(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_116(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_472(iParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, iParam2->f_22))
				{
					func_463(iParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, iParam2->f_27))
				{
					func_463(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, iParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, iParam2->f_26, &vVar4, 0, 0);
					if (func_473(iParam1, vVar0, vVar4))
					{
						func_463(iParam2, 1);
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
					func_463(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, iParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, iParam2->f_26, &vVar7, 0, 0);
					if (func_473(iParam1, vVar0, vVar7))
					{
						func_463(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_117(int iParam0, int iParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *iParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_459(iParam0, iParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_474(&(Global_1935630->f_34[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_475(&(Global_1935630->f_34[iVar0])))
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
			if (func_476(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_477(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_478(iParam1, iParam0, fVar1, iVar0))
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

bool func_118(int iParam0, int iParam1)
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

bool func_119(int iParam0, int iParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_126();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_120(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_479(iVar0, &iVar2))
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
	if (func_34(iVar0, iParam0))
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

int func_121(int iParam0, int iParam1)
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

bool func_122(int iParam0, int iParam1)
{
	if (func_480(iParam0))
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

bool func_123(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_25(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_124()
{
}

bool func_125(int iParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_35);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_481(iVar0, iParam1, vVar1))
		{
			iParam0->f_9 = func_126();
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
						if (func_215(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								iParam0->f_9 = func_126();
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

int func_126()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_127()
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
	if ((func_126() - Global_1935630->f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_128(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0->f_14))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_461(iParam0);
	if (iParam0->f_12 > func_482(iParam0) && iParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_483(iParam1);
	iVar1 = func_484(iParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((iParam0->f_12 <= fVar0 || ((_0x06087579e7aa85a9(iParam1, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam1, Global_35, 1, 0) == 1)) || ((_0x06087579e7aa85a9(iParam1, iParam0->f_14, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, iParam0->f_14, 17)) && _0x7f9b9791d4cb71f6(iParam1, iParam0->f_14, 1, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

bool func_129(int iParam0, int iParam1, int iParam2)
{
	if (iParam2->f_12 > 4f)
	{
		return false;
	}
	bVar0 = *iParam2 & 256 != false;
	bVar1 = *iParam2 & 524288 != false;
	bVar2 = *iParam2 & 128 != false;
	return func_485(iParam0, iParam1, bVar0, bVar2, iParam2->f_12, bVar1);
}

bool func_130(int iParam0, int iParam1)
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
		if (func_486(iParam0, iParam1, 1))
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
					if (!func_487(iParam1, iParam0))
					{
						if (func_215(iVar4, Global_36, 1) < 7f)
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

bool func_131(int iParam0, int iParam1)
{
	if (!func_32(0))
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

bool func_132(int iParam0, int iParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_126();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_133(int iParam0, int iParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

bool func_134(int iParam0, int iParam1)
{
	if (!is_ped_human(iParam0))
	{
		return false;
	}
	if (iParam1->f_4 == 0)
	{
		iParam1->f_4 = func_126();
	}
	else if (func_126() - iParam1->f_4) > func_488(iParam1)
	{
		return func_489(iParam0, iParam1, 0, -1082130432);
	}
	return false;
}

bool func_135(int iParam0, int iParam1)
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

void func_136(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

void func_137(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	clear_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_138(int iParam0)
{
	iVar0 = _0xc17f69e1418cd11f(1);
	if (iVar0 != 0)
	{
		return iVar0 == Global_1905944->f_22[iParam0]->f_1;
	}
	return false;
}

int func_139()
{
	return Global_1572887->f_12;
}

int func_140(int iParam0)
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

int func_141(int iParam0)
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

void func_142(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_490();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_491(iParam0);
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
	if (func_492(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_144())
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
	Global_40.f_11095.f_35 = func_277(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_490();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_493(iVar1);
		func_495(func_494(), 0, 4000);
		func_496(Global_40.f_11095.f_35);
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
		func_497(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_498(func_270(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (does_entity_exist(iParam5))
			{
				decor_set_int(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_141(14))
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
					sParam4 = func_499(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_500(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_500(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_498(func_270(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_141(4))
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
					sParam4 = func_499(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_500(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_500(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_270(-1990689970) };
	stat_id_set_int(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		_0xe6b763c7f4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_332(10, 1);
	}
}

void func_143(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

bool func_144()
{
	if (func_139() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

bool func_145(int iParam0, bool bParam1)
{
	switch (func_259(iParam0))
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

void func_146(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_147(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

void func_148()
{
	_0xdd1232b332cbb9e7(4, 1, 0);
}

int func_149(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

var func_150(char* sParam0, char* sParam1, char* sParam2, int iParam3)
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
	return func_501(cVar0);
}

int func_151(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
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
		if (func_435())
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
				if (func_502(iParam0, 1, 1) > fParam4)
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
			fVar1 = func_25(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_176(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!is_entity_dead(iParam1))
				{
					task_look_at_entity(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_503(iParam0, iParam1, fVar1, bParam13))
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
				iVar2 = func_505(func_504(iParam0, sParam2, iParam11, iParam1, network_is_game_in_progress(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

bool func_152(int iParam0)
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

void func_153(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_152(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_506(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_507(iVar0);
	*uParam0 = 0;
}

void func_154(var uParam0, var uParam1)
{
	if (func_163(uParam1, 4))
	{
		if (!func_508(uParam0->f_1))
		{
			func_165(uParam1, 4);
		}
	}
}

void func_155()
{
	_0x88544c0e3291dcae(1);
	func_67();
}

char* func_156(var uParam0, var uParam1)
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
				return func_509(uParam1->f_36);
			}
			else
			{
				return "DUEL_OBJ_FIRE";
			}
			break;
	}
	return "";
}

void func_157(char* sParam0, int iParam1)
{
	Var0.f_1 = sParam0;
	iVar2 = _0x4e88a65968a55c78(&Var0, iParam1);
	if (func_510(iVar2))
	{
		_0x2f901291ef177b02(iVar2, 0);
	}
}

void func_158()
{
	_uilog_clear_cached_objective();
}

void func_159()
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

void func_160()
{
}

bool func_161(int iParam0, int iParam1)
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
	if (func_404(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_404(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_404(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_404(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_404(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_404(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_404(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_404(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_162(var uParam0, int iParam1)
{
	return (uParam0->f_88 && iParam1) != 0;
}

bool func_163(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_164(bool bParam0, var uParam1, var uParam2, float fParam3, int iParam4)
{
	fVar6 = func_511(uParam1->f_42, uParam1->f_45, 1);
	fVar7 = func_511(uParam1->f_45, uParam1->f_42, 1);
	if (func_2() == 76)
	{
		vVar0 = { -269.649f, 791.1334f, 17.58054f };
		vVar3 = { -342.3348f, 777.1977f, 215.2967f };
	}
	else if (func_2() == 105)
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
		if (func_163(uParam2, 2))
		{
			set_roads_back_to_original_in_angled_area(vVar0, vVar3, iParam4, 0, 1);
		}
	}
	else if (!func_163(uParam2, 2))
	{
		set_roads_in_angled_area(vVar0, vVar3, iParam4, 0, bParam0, 1, 0);
		func_512(uParam2, 2);
	}
}

void func_165(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 - (uParam0->f_1 && iParam1));
}

void func_166(var uParam0, var uParam1, bool bParam2)
{
	if (func_163(uParam1, 1024) || bParam2)
	{
		if (func_161(uParam0->f_3, 0))
		{
			if (does_entity_exist(uParam0->f_3))
			{
				set_ped_config_flag(uParam0->f_3, 136, false);
				func_513(uParam0->f_3, 0);
			}
		}
		func_165(uParam1, 1024);
	}
}

void func_167()
{
	func_514(Global_35, &(Global_1347400->f_46));
}

void func_168(var uParam0, int iParam1)
{
	uParam0->f_55 = iParam1;
}

bool func_169()
{
	if (!func_515(Global_1395482->f_1))
	{
		return false;
	}
	return func_516(Global_1395482->f_1, 32);
}

bool func_170(int iParam0)
{
	if (func_86(iParam0, 1))
	{
		return false;
	}
	return (1 == func_517(iParam0) || 2 == func_517(iParam0));
}

float func_171(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

void func_172()
{
	func_518(iLocal_656[0], Global_35, func_36("BUMP"));
	func_518(iLocal_656[0], Global_35, func_36("CHAL"));
}

void func_173()
{
	if (func_519())
	{
		set_ped_reset_flag(Global_35, 187, true);
	}
}

void func_174()
{
	if (!is_entity_dead(&(iLocal_656[0])))
	{
		iVar0 = func_520(1, 0, 0);
		if (func_3(iVar406, 524288))
		{
			iVar0 = 1;
		}
		func_521();
		iVar1 = func_522(iLocal_656[0], Local_507[0], 8f, &Local_529, &(Local_211.f_192), 0, 1, 0, 0, iVar0, 0, 0, 2, 0, -1082130432, 0);
		if (iVar504 <= -1)
		{
			iLocal_506 = iVar1;
		}
	}
}

void func_175(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_176(var uParam0)
{
	func_523(uParam0, 0f);
}

void func_177()
{
	func_525(Local_529[0], func_524(7), "", -163964935, 0, 0, 0, 1, 0);
	func_525(Local_529[1], func_524(10), "", 648122183, 0, 0, 0, 1, 0);
	func_525(Local_529[2], func_524(12), "", -1616532217, 0, 0, 0, 1, 0);
}

void func_178(bool bParam0)
{
	func_526(Local_507[0], 0);
	func_527(0);
	if (bParam0)
	{
		iLocal_506 = -1;
	}
}

bool func_179(int iParam0, int iParam1)
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

bool func_180(int iParam0, int iParam1, bool bParam2, int iParam3)
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

int func_181(int iParam0)
{
	if (!func_528(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_3;
}

void func_182(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

int func_183(int iParam0, vector3 vParam1, float fParam4)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		vVar0 = { get_entity_coords(iParam0, false, false) };
		vVar3 = { get_entity_forward_vector(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_529(vVar3, vVar6);
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
	if (func_530(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

void func_184(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	vVar3 = { _get_object_offset_from_coords(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { _get_object_offset_from_coords(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_359(vVar0, vVar3, 0f) };
	vVar9 = { func_360(vVar0, vVar3, 0f) };
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

void func_185(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 256;
	uParam0->f_4 = 0;
	func_146(&(uParam0->f_5));
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

bool func_186(var uParam0, int iParam1)
{
	if (!is_entity_dead(uParam0->f_1) && !func_3(uParam0->f_23, 4))
	{
		set_ped_reset_flag(uParam0->f_1, 179, true);
	}
	switch (*uParam0)
	{
		case 0:
			if (!is_entity_dead(uParam0->f_1))
			{
				func_176(&(uParam0->f_5));
				if (is_ped_a_player(uParam0->f_1))
				{
					set_player_control(get_player_index(), false, uParam0->f_3, false);
					if (func_3(uParam0->f_23, 2048))
					{
						_display_hud_component(724769646);
					}
				}
				if (uParam0->f_24 == 0)
				{
					_set_ped_crouch_movement(Global_35, false, 0, false);
				}
				if (!func_3(uParam0->f_23, 4))
				{
					clear_ped_secondary_task(uParam0->f_1);
				}
				if (!func_3(uParam0->f_23, 2))
				{
					uParam0->f_2 = _get_last_mount(uParam0->f_1);
					if (!is_entity_dead(uParam0->f_2) && func_531(uParam0->f_1))
					{
						func_532(uParam0->f_1);
						iVar0 = func_183(uParam0->f_1, uParam0->f_8, 1f);
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
						iVar3 = func_183(uParam0->f_1, uParam0->f_8, 1f);
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
						func_35(&(uParam0->f_23), 2);
					}
				}
				if (func_361(uParam0->f_14))
				{
					uParam0->f_14 = { uParam0->f_8 };
				}
				func_533(uParam0, 1, iParam1);
			}
			else
			{
				func_533(uParam0, 6, iParam1);
			}
			break;
		case 1:
			if (func_534(uParam0, iParam1))
			{
				func_176(&(uParam0->f_5));
				if (!func_535(uParam0, iParam1))
				{
					func_536();
				}
				func_533(uParam0, 2, iParam1);
			}
			break;
		case 2:
			if (func_535(uParam0, iParam1))
			{
				func_176(&(uParam0->f_5));
				if (!func_3(uParam0->f_23, 4))
				{
					set_current_ped_weapon(uParam0->f_1, -1569615261, false, 0, false, false);
					set_current_ped_weapon(uParam0->f_1, -1569615261, false, 1, false, false);
					task_swap_weapon(uParam0->f_1, 1, func_3(uParam0->f_23, 512), 0, 0);
				}
				func_533(uParam0, 3, iParam1);
			}
			break;
		case 3:
			if (func_537(uParam0, iParam1))
			{
				func_176(&(uParam0->f_5));
				if (!_is_ped_carrying(uParam0->f_1))
				{
					func_35(&(uParam0->f_23), 256);
				}
				if (func_3(uParam0->f_23, 4096) && !_is_ped_carrying(uParam0->f_1))
				{
					func_35(&(uParam0->f_23), 256);
					iVar6 = _get_last_mount(uParam0->f_1);
					if (func_25(iVar6, uParam0->f_1, 1, 1) < 5f)
					{
						iVar5 = func_538(iVar6);
						task_pickup_carriable_entity(uParam0->f_1, iVar5);
					}
				}
				else if (!func_3(uParam0->f_23, 256))
				{
					iVar5 = _get_first_entity_ped_is_carrying(uParam0->f_1);
					task_place_carried_entity_at_coord(uParam0->f_1, iVar5, uParam0->f_14, uParam0->f_21, uParam0->f_4);
				}
				func_533(uParam0, 4, iParam1);
			}
			break;
		case 4:
			if (func_539(uParam0, iParam1))
			{
				func_176(&(uParam0->f_5));
				if (func_3(uParam0->f_23, 8192))
				{
					if (func_3(uParam0->f_23, 1024))
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
					if (!func_361(uParam0->f_11))
					{
					}
					iVar8 = 0;
					if (!func_3(uParam0->f_23, 1024))
					{
						iVar8 |= 1;
					}
					open_sequence_task(&iVar9);
					if (!func_361(uParam0->f_11))
					{
						if (func_3(uParam0->f_23, 16))
						{
							task_go_straight_to_coord(0, uParam0->f_11, uParam0->f_21, func_505(!func_3(uParam0->f_23, 128), 20000, -1), uParam0->f_19, uParam0->f_17, 0);
						}
						else
						{
							task_follow_nav_mesh_to_coord(0, uParam0->f_11, uParam0->f_21, func_505(!func_3(uParam0->f_23, 128), 20000, -1), uParam0->f_17, iVar8, uParam0->f_19);
						}
					}
					if (func_3(uParam0->f_23, 16))
					{
						task_go_straight_to_coord(0, uParam0->f_8, uParam0->f_21, func_505(!func_3(uParam0->f_23, 128), 20000, -1), uParam0->f_19, uParam0->f_17, 0);
					}
					else
					{
						task_follow_nav_mesh_to_coord(0, uParam0->f_8, uParam0->f_21, func_505(!func_3(uParam0->f_23, 128), 20000, -1), uParam0->f_17, iVar8, uParam0->f_19);
					}
					if (func_3(uParam0->f_23, 1))
					{
						task_achieve_heading(0, uParam0->f_19, 0);
					}
					func_182(uParam0->f_1, &iVar9, 0, 0, 1, 1);
				}
				func_533(uParam0, 5, iParam1);
			}
			break;
		case 5:
			if (func_3(uParam0->f_23, 8192))
			{
				if (_0x337f1cc8ee895601(uParam0->f_25, &(uParam0->f_30)))
				{
					iVar10 = 1;
				}
			}
			else if (!func_3(uParam0->f_23, 1))
			{
				uParam0->f_19 = get_entity_heading(uParam0->f_1);
			}
			if (!func_3(uParam0->f_23, 128) && func_218(&(uParam0->f_5), 15f))
			{
				iVar10 = 1;
			}
			if (!func_3(uParam0->f_23, 8192))
			{
				if (get_script_task_status(uParam0->f_1, 242628503, true) == 8)
				{
					iVar10 = 1;
				}
				if ((func_361(uParam0->f_11) || !func_230(uParam0->f_1, 242628503)) || get_sequence_progress(uParam0->f_1) > 0)
				{
					iVar11 = 1;
				}
				if (func_540(uParam0->f_1, uParam0->f_8, uParam0->f_19, uParam0->f_18, uParam0->f_20, func_3(uParam0->f_23, 8)) && (!func_3(uParam0->f_23, 64) || absf(func_541(uParam0->f_1, uParam0->f_8)) < uParam0->f_22))
				{
					iVar12 = 1;
				}
			}
			if ((iVar11 && iVar12) || iVar10)
			{
				if (func_3(uParam0->f_23, 32))
				{
					task_turn_ped_to_face_coord(uParam0->f_1, uParam0->f_8, 0);
				}
				func_146(&(uParam0->f_5));
				func_533(uParam0, 6, iParam1);
				return true;
			}
			break;
		case 6:
			return true;
	}
	return false;
}

int func_187(vector3 vParam0, float fParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, float fParam9)
{
	if (!bParam8 && network_is_game_in_progress())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_361(vParam0))
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
		if (func_450(vParam0))
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
	func_542(iVar0, bParam8);
	return iVar0;
}

void func_188(int iParam0, var uParam1, vector3 vParam2, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, float fParam11, bool bParam12, bool bParam13, float fParam14)
{
	if (func_543(&(uParam1->f_3), 1))
	{
		func_544(uParam1);
		if (func_545(iParam0, iParam7, fParam11, bParam12, bParam13, fParam14))
		{
			func_155();
		}
	}
	if (func_546(get_entity_coords(iParam0, true, false), uParam1, iParam7))
	{
		set_gameplay_ped_hint(iParam0, Vector(0f, 0f, 0f) + vParam2, bParam5, iParam8, iParam9, iParam10);
		func_547(uParam1, get_entity_coords(iParam0, true, false), iParam6, iParam9);
	}
}

void func_189(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		allow_sonar_blips(true);
		force_sonar_blips_this_frame();
	}
	_trigger_sonar_blip_2(iParam0, iParam1);
}

void func_190(int iParam0, bool bParam1)
{
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(iParam0, iVar0);
}

char* func_191()
{
	return "RE_DD_BLIP_DRUNK";
}

void func_192(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
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

bool func_193(int iParam0, bool bParam1, bool bParam2)
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

int func_194(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_548();
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
		if (func_3(iParam2, 128))
		{
			_0x7c00cfc48a782dc0(iParam1, iParam0, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
		}
		if (func_404(Global_1955500[iVar0], 0))
		{
			func_549(iVar0, 1024);
			func_549(iVar0, 16);
			func_549(iVar0, 256);
		}
		func_549(iVar0, iParam2);
	}
	return iVar0;
}

bool func_195()
{
	get_current_ped_weapon(Global_35, &iVar0, true, 0, false);
	if (!func_550(&iVar0))
	{
		get_current_ped_weapon(Global_35, &iVar0, true, 3, false);
	}
	if (!func_550(&iVar0))
	{
		get_current_ped_weapon(Global_35, &iVar0, true, 0, false);
	}
	if (!func_550(&iVar0))
	{
		get_current_ped_weapon(Global_35, &iVar0, true, 1, false);
	}
	if (!func_550(&iVar0))
	{
		iVar0 = 0;
	}
	if (!func_550(&iVar0))
	{
		iVar0 = func_551(268435584, 0);
	}
	if (!func_550(&iVar0))
	{
		return false;
	}
	return true;
}

void func_196(int iParam0, bool bParam1)
{
	func_136(iParam0, &iVar0, &iVar1);
	if (!func_552(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_553(iVar0, iVar1);
}

bool func_197(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, bool bParam5, int iParam6)
{
	if (func_554(iParam0, iParam1, sParam2, iParam3, fParam4, bParam5, iParam6 == 0))
	{
		return true;
	}
	return false;
}

bool func_198(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && does_entity_exist(iParam2))
	{
		if (!func_555(iParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_556(fParam0))
	{
		return false;
	}
	return true;
}

void func_199()
{
	func_557(0, "RE_DD_CHALLENGE");
	if (bVar711)
	{
		func_558(0, 1);
	}
	else
	{
		func_558(0, 0);
	}
	func_557(1, func_524(1));
	func_558(1, 1);
	func_558(2, 0);
}

void func_200()
{
	Local_111 = Global_35;
	Local_111.f_1 = &iLocal_656[0];
	Local_111.f_42 = { *vLocal_683[2] };
	Local_111.f_45 = { *vLocal_683[1] };
	Local_111.f_86 = uVar662;
	Local_111.f_89 = 4;
	if (iVar500 == 76)
	{
		StringCopy(&(Local_111.f_12), "PASS_OUT_FWD_V1_DRUNK", 32);
		*Local_111.f_51[2] = { -308.702f, 791.2099f, 117.727f };
		*Local_111.f_61[2] = { 5.962f, 0f, -80.9781f };
		Local_111.f_71[2] = 30.1956f;
	}
	else
	{
		StringCopy(&(Local_111.f_12), "PASS_OUT_FWD_V2_DRUNK", 32);
		*Local_111.f_51[2] = { 2956.214f, 525.3224f, 44.566f };
		*Local_111.f_61[2] = { 2.6287f, 0f, -157.6387f };
		Local_111.f_71[2] = 29.981f;
	}
	func_559(&Local_111, 128);
	func_559(&Local_111, 1);
	if (iLocal_210 == 0)
	{
		func_559(&Local_111, 1024);
	}
	else
	{
		func_559(&Local_111, 536870912);
	}
}

void func_201(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 1048576;
	if (bParam1)
	{
		iVar0 |= 131072;
	}
	if (bParam2)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(iParam0, iVar0);
}

void func_202(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
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
	_0x2fcd528a397e5c88(iParam0, iVar0);
}

void func_203(int iParam0, bool bParam1)
{
	if (*iParam0 > -1 && *iParam0 < 4)
	{
		if (*Global_1955500)[*iParam0]->f_3 == get_id_of_this_thread()
		{
			if (func_560(1, 1) == *iParam0)
			{
				func_561(-1, 1, 1);
			}
			if (bParam1)
			{
				func_562((*Global_1955500)[*iParam0]->f_1);
			}
			(*Global_1955500)[*iParam0] = 0;
			(*Global_1955500)[*iParam0]->f_2 = 0;
			(*Global_1955500)[*iParam0]->f_3 = 0;
			*iParam0 = -1;
		}
	}
}

bool func_204(var uParam0, float fParam1)
{
	if (!func_214(uParam0))
	{
		return false;
	}
	if (func_223(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_205()
{
	func_557(0, func_524(7));
	func_558(0, 0);
	func_557(1, func_524(10));
	func_558(1, 0);
	func_558(2, 1);
	func_175(Local_529[0], 8);
	func_175(Local_529[1], 8);
}

void func_206(int iParam0, bool bParam1)
{
	set_ped_config_flag(iParam0, 130, !bParam1);
	set_ped_config_flag(iParam0, 178, bParam1);
}

float func_207(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_208(var uParam0, vector3 vParam1, float fParam4)
{
	if (func_92(*uParam0, 0, 1) && func_215(*uParam0, vParam1, 0) < fParam4)
	{
		set_ped_reset_flag(*uParam0, 94, true);
		_0xc6981aff6d2a71c2(*uParam0);
	}
}

void func_209(var uParam0, bool bParam1)
{
	if (bParam1 || !func_214(uParam0))
	{
		func_176(uParam0);
	}
}

void func_210()
{
	func_558(0, 0);
	func_557(1, func_524(30));
	func_558(1, 1);
	func_558(2, 0);
}

float func_211(vector3 vParam0, vector3 vParam3)
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

bool func_212()
{
	if (func_139() != -1)
	{
		return false;
	}
	return func_368(1) > 0;
}

void func_213(var uParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6)
{
	if (_does_volume_exist(iParam4))
	{
		func_563(iParam5, func_368(1), iParam4, vParam1, 1069547520, 1075838976, 1056964608, 0, iParam6, 1);
	}
	else
	{
		func_564(iParam5, func_368(1), vParam1, uParam0->f_51, 1069547520, 1075838976, 1056964608, 0, iParam6, 1);
	}
	func_565(iParam5);
	uParam0->f_170 = 1;
}

bool func_214(var uParam0)
{
	return func_566(*uParam0, 1);
}

float func_215(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

int func_216(int iParam0, int iParam1, int iParam2)
{
	task_turn_ped_to_face_entity(iParam0, iParam1, iParam2, 3f, 0.25f, -1082130432);
	return 1;
}

float func_217(var uParam0)
{
	if (!func_214(uParam0))
	{
		return 0f;
	}
	if (func_567(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_568() - uParam0->f_1);
}

bool func_218(var uParam0, float fParam1)
{
	if (func_204(uParam0, fParam1))
	{
		func_146(uParam0);
		return true;
	}
	return false;
}

bool func_219()
{
	if (!func_3(iVar406, 8192) && func_218(&uLocal_459, 10f))
	{
		func_176(&uLocal_459);
		func_569("DUEL_OBJ", 7500, 0, 0, -1, -1, 0);
		func_35(&uLocal_408, 8192);
	}
	if (!bVar709 && func_198(-4f, 1, 0, 0))
	{
		Local_452 = { func_570(2, Global_35, *vLocal_683[2], 0f, 0f, 0f, 2.5f, 2.5f, 3.5f, 1, 1, 1) };
		_0xdd1232b332cbb9e7(3, 1, 0);
		set_blip_name_from_text_file(Local_452.f_5, "DUEL_OBJ_BLIP");
		func_569("DUEL_OBJ", 7500, 0, 0, -1, -1, 0);
		iLocal_711 = 1;
	}
	if (func_92(&(iLocal_656[0]), 0, 1))
	{
		if (func_215(&(iLocal_656[0]), Local_111.f_45, 1) < 5f && func_571(Local_452))
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			return true;
		}
	}
	else if (func_40(Local_452))
	{
		func_41(Local_452);
	}
	return false;
}

bool func_220(var uParam0, var uParam1)
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
	func_572();
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
	func_573(uParam1, uParam0);
	if (func_161(uParam0->f_1, 0) && is_ped_a_player(*uParam0))
	{
		set_ped_reset_flag(uParam0->f_1, 25, true);
	}
	set_all_random_peds_flee_this_frame(player_id());
	func_574();
	switch (uParam1->f_55)
	{
		case 0:
			if (func_575(uParam1))
			{
				func_512(uParam1, 33554432);
				if (func_162(uParam0, 2))
				{
					func_576(get_entity_coords(uParam0->f_1, true, false));
				}
			}
			if (func_575(uParam1))
			{
				set_player_control(get_player_index(), false, 0, false);
			}
			else
			{
				set_player_control(get_player_index(), false, 4480, false);
			}
			func_577();
			func_578(0, 1065353216);
			if (func_162(uParam0, 2))
			{
				func_579(uParam0, uParam1);
			}
			func_580(uParam0, uParam1);
			if (func_581(uParam0, uParam1))
			{
				func_39(uParam0, uParam1);
				func_168(uParam1, 9);
				return true;
			}
			if (func_161(*uParam0, 0) && func_582(uParam0, uParam1))
			{
				func_168(uParam1, 1);
			}
			break;
		case 1:
			func_577();
			func_580(uParam0, uParam1);
			if (func_162(uParam0, 2))
			{
				func_579(uParam0, uParam1);
			}
			if (is_screen_faded_out())
			{
				return false;
			}
			if (func_583(uParam0, uParam1) && func_584(uParam0, uParam1))
			{
				func_585(uParam0, uParam1, 0);
				Global_19 = 0;
				func_586(uParam0, uParam1);
				func_587(uParam0, uParam1);
				if (does_entity_exist(uParam0->f_1))
				{
					uParam1->f_4 = add_shocking_event_for_entity(748896394, uParam0->f_1, 0f, 30f, 35f, -1f, 20f, 180f, false, false, -1, -1);
				}
				if (!func_162(uParam0, 1024))
				{
					set_player_control(get_player_index(), true, 0, false);
					if (func_162(uParam0, 64))
					{
						task_duel(*uParam0, uParam1->f_63, uParam0->f_48, uParam0->f_1, func_588(uParam0), 0, 0f, 0f, 0f, func_511(uParam0->f_42, uParam0->f_45, 1), 1);
					}
					else if (func_162(uParam0, 32))
					{
						task_duel(*uParam0, uParam1->f_63, uParam0->f_48, uParam0->f_1, func_588(uParam0), 0, 0f, 0f, 0f, func_511(uParam0->f_42, uParam0->f_45, 1), 1);
					}
					else
					{
						task_duel(*uParam0, uParam1->f_63, uParam0->f_48, uParam0->f_1, func_588(uParam0), 0, uParam0->f_42, func_511(uParam0->f_42, uParam0->f_45, 1), 1);
					}
				}
				_0x2208438012482a1a(*uParam0, true, true);
				uParam1->f_2 = get_game_timer();
				if (!get_ped_config_flag(uParam0->f_1, 146, true))
				{
					set_ped_config_flag(uParam0->f_1, 146, true);
					func_512(uParam1, 2048);
				}
				if (!func_162(uParam0, 262144))
				{
					_hide_ped_weapons(*uParam0, 2, true);
					_hide_ped_weapons(uParam0->f_1, 2, true);
				}
				if ((func_162(uParam0, 32) || func_162(uParam0, 2)) || (func_575(uParam1) && !func_575(uParam1)))
				{
					if (!func_162(uParam0, 1024))
					{
						func_589(&(uParam0->f_16), 0);
					}
					if (!func_575(uParam1))
					{
						func_590(uParam0, uParam1, 1);
					}
					func_168(uParam1, 7);
				}
				else
				{
					func_591(uParam1, 0);
					display_radar(false);
					func_168(uParam1, 3);
				}
			}
			break;
		case 3:
			func_577();
			func_578(0, 1065353216);
			func_586(uParam0, uParam1);
			bVar0 = func_579(uParam0, uParam1);
			if (func_581(uParam0, uParam1))
			{
				func_39(uParam0, uParam1);
				func_168(uParam1, 9);
				return true;
			}
			if (is_screen_faded_out())
			{
				return false;
			}
			if (get_game_timer() > uParam1->f_2 + 1000 || func_3(uParam0->f_88, 2))
			{
				if ((func_3(uParam0->f_88, 32) || bVar0) && (func_162(uParam0, 2) || (is_ped_facing_ped(uParam0->f_1, *uParam0, 20f) && is_ped_facing_ped(*uParam0, uParam0->f_1, 20f))))
				{
					if (!func_162(uParam0, 2048))
					{
						_0xde5faa741a781f73(get_player_index(), 1);
					}
					if (!func_162(uParam0, 1024))
					{
						func_589(&(uParam0->f_16), 0);
					}
					if (func_3(uParam0->f_88, 1024))
					{
						if (func_215(uParam0->f_1, uParam0->f_45, 0) < 0.5f || func_230(uParam0->f_1, -717627678))
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
							func_182(uParam0->f_1, &iVar1, 0, 0, 1, 1);
							func_168(uParam1, 8);
						}
					}
					else
					{
						func_168(uParam1, 7);
					}
				}
			}
			break;
		case 7:
			display_radar(false);
			func_586(uParam0, uParam1);
			if (func_592(uParam0, uParam1))
			{
				func_39(uParam0, uParam1);
				func_168(uParam1, 9);
				func_589(&(uParam0->f_32), 1);
				return true;
			}
			break;
		case 8:
			func_586(uParam0, uParam1);
			func_593(uParam0);
			if (!func_3(uParam1->f_1, 512) && has_anim_event_fired(uParam0->f_1, -529482553))
			{
				remove_shocking_event(uParam1->f_4);
				uParam1->f_4 = add_shocking_event_at_position(-180122789, get_entity_coords(uParam0->f_1, true, false), -1f, -1f, -1f, -1f, -1f, -1, -1);
				clear_ped_tasks(uParam0->f_1, 1, 0);
				remove_all_ped_weapons(uParam0->f_1, false, true);
				set_ped_config_flag(uParam0->f_1, 243, true);
				task_knocked_out(uParam0->f_1, 60f, 1);
				func_35(&(uParam1->f_1), 512);
				func_39(uParam0, uParam1);
				if (!func_162(uParam0, 2048))
				{
					_0xde5faa741a781f73(get_player_index(), 0);
				}
				func_589(&(uParam0->f_32), 1);
				render_script_cams(false, true, 5000, true, false, 0);
				display_radar(true);
				set_player_control(get_player_index(), true, 0, false);
				clear_ped_tasks(*uParam0, 1, 0);
				func_168(uParam1, 9);
				return true;
			}
			break;
		case 9:
			func_39(uParam0, uParam1);
			return true;
	}
	if (func_162(uParam0, 4))
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

void func_221(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam3 != 0)
	{
		iVar0 = get_entity_model(iParam3);
		if (iVar0 != 0)
		{
			func_594(iParam0, iParam1, iVar0);
			func_596(iParam0, iParam1, func_595(iParam3));
		}
	}
	else if (iParam4 != 0)
	{
		func_594(iParam0, iParam1, iParam4);
		func_596(iParam0, iParam1, func_595(iParam3));
	}
	func_597(iParam0, iParam1, iParam2);
	func_599(iParam0, iParam1, func_598(1));
	func_600(iParam0, iParam1, func_260());
}

void func_222()
{
	if ((does_entity_exist(iVar656) || func_2() != 76) || !func_224(0, -1))
	{
		return;
	}
	if (func_601(11) != 0)
	{
		iLocal_658 = func_602(11, 0, 0, 0, 1, 1);
		if (does_entity_exist(iVar656))
		{
			func_396(iVar656, "0477_U_M_M_ValDoctor_01", 0);
		}
	}
}

float func_223(var uParam0)
{
	if (!func_214(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_567(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_568() - uParam0->f_1);
}

bool func_224(int iParam0, int iParam1)
{
	bVar0 = true;
	if (func_139() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = func_603(func_2(), iParam0);
		}
		iVar1 = get_frame_count();
		if (Global_1914319->f_3[iParam0]->f_444 >= iVar1)
		{
			return Global_1914319->f_3[iParam0]->f_445;
		}
		bVar0 = (func_604(iParam1) || func_437(func_605(iParam0)));
		Global_1914319->f_3[iParam0]->f_444 = iVar1;
		Global_1914319->f_3[iParam0]->f_445 = bVar0;
	}
	return bVar0;
}

void func_225()
{
	func_557(0, func_524(7));
	func_558(0, 1);
	func_557(1, func_524(10));
	func_558(1, 1);
	func_558(2, 0);
}

void func_226()
{
	if (func_198(-3.5f, 1, 0, 0))
	{
		if (!func_3(iVar406, 32768))
		{
			switch (iVar504)
			{
				case 0:
					func_37(Global_35, &(iLocal_656[0]), func_36("PLR_GOODBYE"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_178(0);
					func_35(&uLocal_408, 32768);
					break;
				case 1:
					func_37(Global_35, &(iLocal_656[0]), func_36("PLR_ANT"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					if (func_3(iVar406, 131072))
					{
						clear_ped_tasks(&(iLocal_656[0]), 1, 0);
						func_216(&(iLocal_656[0]), Global_35, -1);
					}
					func_178(0);
					set_ped_config_flag(&(iLocal_656[0]), 6, false);
					func_35(&uLocal_408, 32768);
					break;
				case 2:
					func_37(Global_35, &(iLocal_656[0]), "WITNESS_INTIMIDATION_END_NOW_ROB", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					if (func_3(iVar406, 131072))
					{
						clear_ped_tasks(&(iLocal_656[0]), 1, 0);
						func_216(&(iLocal_656[0]), Global_35, -1);
					}
					func_178(0);
					func_35(&uLocal_408, 32768);
					break;
			}
		}
		else if (!func_3(iVar406, 65536))
		{
			switch (iVar504)
			{
				case 0:
					if (func_198(0f, 1, Global_35, 1))
					{
						func_37(&(iLocal_656[0]), Global_35, "DISMISSIVE_REACT", 0, -1082130432, 0, 0, 0, 1, 1, 1, 1506116031, 1, 0, 0);
						func_178(1);
						func_35(&uLocal_408, 65536);
					}
					break;
				case 1:
					if (func_198(0f, 1, Global_35, 1))
					{
						if (func_3(iVar406, 131072))
						{
							func_35(&uLocal_408, 262144);
							func_35(&uLocal_408, 16777216);
						}
						else
						{
							func_37(&(iLocal_656[0]), Global_35, "WHATS_YOUR_PROBLEM", 0, -1082130432, 0, 0, 0, 1, 1, 1, 1506116031, 1, 0, 0);
						}
						func_178(1);
						func_35(&uLocal_408, 65536);
					}
					break;
				case 2:
					func_35(&uLocal_408, 262144);
					func_178(1);
					func_35(&uLocal_408, 32768);
					break;
			}
		}
	}
}

void func_227()
{
	iVar0 = func_520(3, 0, 0);
	iVar1 = func_522(&iLocal_658, &iLocal_581, 8f, &Local_602, &(Local_211.f_192), 0, 1, 0, 0, iVar0, 0, 0, 2, 0, -1082130432, 0);
	switch (iLocal_14)
	{
		case 0:
			switch (iLocal_15)
			{
				case 0:
					switch (iVar1)
					{
						case 0:
							func_606(Local_602[0], 0, 0);
							iLocal_15 = 1;
							break;
						case 1:
							iLocal_15 = 2;
							break;
					}
					break;
				case 1:
					if (func_198(0f, 1, iVar656, 0))
					{
						func_37(iVar656, Global_35, "RE_DD_VAL_V1_DOC_POS", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_712 = 1;
						iLocal_15 = 4;
					}
					break;
				case 2:
					if (func_198(0f, 1, iVar656, 0))
					{
						func_37(iVar656, Global_35, "RE_DD_VAL_V1_DOC_NEG_A", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_15 = 5;
					}
					break;
				case 4:
					if (func_198(-4f, 1, iVar656, 1))
					{
						func_606(Local_602[1], 1, 0);
						func_607(Local_602[1], 0);
						iLocal_15 = 0;
					}
					break;
				case 5:
					if (func_198(-4f, 1, iVar656, 1))
					{
						if (iVar710 == 0)
						{
							func_606(Local_602[0], 1, 0);
							func_607(Local_602[0], 0);
						}
						func_606(Local_602[1], 1, 0);
						func_607(Local_602[1], 0);
						Local_602[1]->f_13 = "RE_DD_VAL_V1_DOC_NEG_B";
						iLocal_14 = 1;
						iLocal_15 = 0;
					}
					break;
			}
			break;
		case 1:
			switch (iLocal_15)
			{
				case 0:
					switch (iVar1)
					{
						case 0:
							func_606(Local_602[0], 0, 0);
							iLocal_15 = 1;
							break;
						case 1:
							iLocal_15 = 2;
							break;
					}
					break;
				case 1:
					if (func_198(0f, 1, iVar656, 0))
					{
						iLocal_712 = 1;
						func_37(iVar656, Global_35, "RE_DD_VAL_V1_DOC_POS", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_15 = 4;
					}
					break;
				case 2:
					if (func_198(0f, 1, iVar656, 0))
					{
						func_37(iVar656, Global_35, "RE_DD_VAL_V1_DOC_NEG_B", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_15 = 5;
					}
					break;
				case 4:
					if (func_198(-4f, 1, iVar656, 1))
					{
						func_606(Local_602[1], 1, 0);
						func_607(Local_602[1], 0);
						iLocal_15 = 0;
					}
					break;
				case 5:
					if (func_198(-4f, 1, iVar656, 1))
					{
						if (iVar710 == 0)
						{
							func_606(Local_602[0], 1, 0);
							func_607(Local_602[0], 0);
						}
						func_606(Local_602[1], 1, 0);
						func_607(Local_602[1], 0);
						Local_602[1]->f_13 = "RE_DD_VAL_V1_DOC_NEG_C";
						iLocal_14 = 2;
						iLocal_15 = 0;
					}
					break;
			}
			break;
		case 2:
			switch (iLocal_15)
			{
				case 0:
					switch (iVar1)
					{
						case 0:
							func_606(Local_602[0], 0, 0);
							iLocal_15 = 1;
							break;
						case 1:
							func_606(Local_602[1], 0, 0);
							iLocal_15 = 2;
							break;
						case 2:
							iLocal_14 = 3;
							break;
					}
					break;
				case 1:
					if (func_198(0f, 1, iVar656, 0))
					{
						iLocal_712 = 1;
						func_37(iVar656, Global_35, "RE_DD_VAL_V1_DOC_POS", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_15 = 4;
					}
					break;
				case 2:
					if (func_198(0f, 1, iVar656, 0))
					{
						func_37(iVar656, Global_35, "RE_DD_VAL_V1_DOC_NEG_C", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_15 = 5;
					}
					break;
				case 4:
					if (func_198(-4f, 1, iVar656, 1))
					{
						func_606(Local_602[1], 1, 0);
						func_607(Local_602[1], 0);
						iLocal_15 = 0;
					}
					break;
				case 5:
					if (func_198(-4f, 1, iVar656, 1))
					{
						_0xeeed8fafec331a70(iVar656, get_entity_coords(Global_35, true, false), 3);
						_task_smart_flee_style_ped(iVar656, Global_35, 2, 0, -1f, -1, 0);
						_0xd7494ded50c6ef52(player_id(), 1481148278, 2);
						_0xc6c4e15cf7d52fea(iVar656, 1000f);
						_0x10827b5a0aac56a7(player_id(), 1481148278, iVar656);
						func_265(1);
						set_ped_config_flag(iVar656, 146, false);
						set_ped_config_flag(iVar656, 148, false);
						_0xf0b67bad53c35bd9(iVar656, Global_35, iVar656, Global_36, 1481148278);
						iLocal_14 = 3;
						iLocal_15 = 0;
					}
					break;
			}
			break;
	}
}

bool func_228(int iParam0, bool bParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_ped_injured(iParam0) || !bParam1)
		{
			iVar0 = get_interior_from_entity(iParam0);
			if (is_valid_interior(iVar0))
			{
				if (func_608(iVar0) || func_609(iVar0))
				{
					return false;
				}
				return true;
			}
		}
	}
	return false;
}

bool func_229(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_171(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

bool func_230(int iParam0, int iParam1)
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

void func_231()
{
	func_525(Local_602[0], func_524(7), "RE_DD_VAL_V1_DOC_POS", -163964935, 0, 0, 0, 1, 0);
	func_525(Local_602[1], func_524(10), "RE_DD_VAL_V1_DOC_NEG_A", 648122183, 0, 0, 0, 1, 0);
	func_606(Local_602[0], 1, 0);
	func_606(Local_602[1], 1, 0);
	func_606(Local_602[2], 0, 0);
}

void func_232(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		iParam0->f_1 = 0;
		func_610(iParam0, 1);
		func_611(iParam0, 1);
		func_72(iParam0, 1);
		func_612(iParam0, 1);
		func_613(iParam0, 1);
		func_614(iParam0, 1);
		func_615(iParam0, 1);
	}
	else
	{
		iParam0->f_1 = -1;
		func_610(iParam0, 0);
		func_611(iParam0, 0);
		func_72(iParam0, 0);
		func_612(iParam0, 0);
		func_613(iParam0, 0);
		func_614(iParam0, 0);
		func_615(iParam0, 0);
	}
}

void func_233(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_76(&(uParam0->f_1), 1);
	}
	else
	{
		func_35(&(uParam0->f_1), 1);
	}
}

void func_234(int iParam0, bool bParam1)
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

void func_235(int iParam0)
{
	func_147(1, iParam0, 0);
}

var func_236(var uParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	return create_scenario_point(uParam0, vParam1, fParam4, iParam5, iParam6, iParam7);
}

void func_237()
{
	func_558(1, 1);
}

void func_238()
{
	if (iVar719 == 0)
	{
		if (!func_214(&uLocal_718))
		{
			func_209(&uLocal_718, 0);
		}
		else if (func_217(&uLocal_718) > 8f)
		{
			switch (iLocal_16)
			{
				case 2:
					func_37(Global_35, &(iLocal_656[0]), func_36("PLYFINAL_DISARM"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					break;
				case 1:
					func_37(Global_35, &(iLocal_656[0]), func_36("PLYFINAL_KILL"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					break;
				case 3:
					func_37(Global_35, &(iLocal_656[0]), func_36("PLYFINAL_PASSOUT"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					break;
			}
			iLocal_721 = 1;
		}
	}
}

void func_239(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (&Global_40.f_450[iVar0] == iParam0)
		{
			func_616(&((*Global_1347702)[iParam0]->f_13), 2);
			_0x748c5f51a18cb8f0(0);
			func_617(iParam0, 1, 1, iParam1, 32);
			_0x748c5f51a18cb8f0(1);
			iVar1 = (Global_40.f_1094 - 1);
			if (iVar0 < iVar1)
			{
				if (func_45(&(Global_40.f_450[iVar1])))
				{
					Global_40.f_450[iVar0] = &Global_40.f_450[iVar1];
					Global_40.f_450[iVar1] = -1;
				}
			}
			else
			{
				Global_40.f_450[iVar0] = -1;
			}
			Global_40.f_1094 = (Global_40.f_1094 - 1);
			return;
		}
		iVar0++;
	}
}

bool func_240(int iParam0)
{
	if (func_139() != -1)
	{
		return false;
	}
	if (!func_45(iParam0))
	{
		return false;
	}
	return func_340((*Global_1347702)[iParam0]->f_15);
}

void func_241(int iParam0)
{
	if (&Global_1898329 <= 0)
	{
		return;
	}
	if (!func_254(iParam0))
	{
		return;
	}
	if (func_340(iParam0))
	{
		func_243(iParam0, 0, 2);
	}
	iVar0 = func_618(iParam0);
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = iVar0;
	if (&Global_1898329 > 1)
	{
		(*Global_1898330)[iVar1] = Global_1898330[(&Global_1898329 - 1)];
		*(*Global_1898346)[iVar1] = { *((*Global_1898346)[(&Global_1898329 - 1)]) };
		(*Global_1898330)[(&Global_1898329 - 1)] = -1;
		*((*Global_1898346)[(&Global_1898329 - 1)]) = { Var2 };
	}
	else
	{
		(*Global_1898330)[iVar1] = -1;
		*(*Global_1898346)[iVar1] = { Var2 };
	}
	Global_1898329 = (&Global_1898329 - 1);
	if (&Global_1898329 < 0)
	{
		Global_1898329 = 0;
	}
}

bool func_242(int iParam0)
{
	iVar0 = func_259(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_243(int iParam0, bool bParam1, int iParam2)
{
	if (!func_254(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_242(iParam0) && !func_340(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_334(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_242(iParam0))
	{
		iParam2 = -1;
	}
	if (func_262(iParam0) == 3 || (func_262(iParam0) == 1 && _0x01f4d242765c6b24(func_334(iParam0))))
	{
		func_335(func_255(iParam0), func_334(iParam0), iParam2);
		if ((!func_254(Global_1572864->f_8) && !func_442(0, 1, 0)) && !func_619(&Global_1935630, 32768))
		{
			iVar0 = func_285(iParam0);
			if (iVar0 != -1)
			{
				func_286(0);
			}
			else if (func_255(iParam0) == 8)
			{
				iVar0 = func_287();
				if (iVar0 != -1)
				{
					func_286(0);
				}
			}
		}
	}
	func_263(iParam0, 0);
	if (func_620(0) == iParam0)
	{
		func_265(1);
		func_268(0);
		func_338(1);
	}
	func_284(iParam0, 1);
	func_264(iParam0);
}

int func_244(int iParam0)
{
	if (func_621(iParam0))
	{
		return 0;
	}
	if (func_622(iParam0, 0))
	{
		func_623(iParam0);
		return 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_40.f_450)
		{
			if (&Global_40.f_450[iVar0] == -1)
			{
				func_623(iParam0);
				Global_40.f_450[iVar0] = iParam0;
				Global_40.f_1094++;
				Global_1430257 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_245(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_48 == -1)
	{
		return true;
	}
	if ((*Global_1347702)[iParam0]->f_47 == 0)
	{
		return true;
	}
	iVar0 = func_624(iParam0);
	return func_625(iVar0, 1);
}

Vector3 func_246(int iParam0)
{
	if (!func_45(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	if (func_626(iParam0, &vVar0))
	{
		(*Global_1347702)[iParam0]->f_24 = { vVar0 };
	}
	return (*Global_1347702)[iParam0]->f_24;
}

bool func_247(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 81);
}

void func_248(int iParam0, bool bParam1)
{
	if (!func_45(iParam0))
	{
		return;
	}
	if (does_blip_exist((*Global_1347702)[iParam0]->f_37))
	{
		func_627(&((*Global_1347702)[iParam0]->f_14));
		func_616(&((*Global_1347702)[iParam0]->f_13), 16);
		func_628(iParam0);
		if ((!func_629(player_id(), 1, 0, 1) || Global_43891) || bParam1)
		{
			set_this_script_can_remove_blips_created_by_any_script(true);
			_0x2f901291ef177b02((*Global_1347702)[iParam0]->f_40, 0);
			func_616(&((*Global_1347702)[iParam0]->f_13), 4096);
			func_630(&((*Global_1347702)[iParam0]->f_37));
		}
		else
		{
			func_631(iParam0, 16384);
			func_632(iParam0, 1, func_246(iParam0));
		}
	}
}

void func_249(int iParam0, vector3 vParam1, bool bParam4, bool bParam5)
{
	if (!func_45(iParam0))
	{
		return;
	}
	if ((*Global_1347702)[iParam0]->f_13 & 256 != 0 && func_442(0, 0, 1))
	{
		return;
	}
	if ((*Global_1347702)[iParam0]->f_12 & 16 != 0)
	{
		return;
	}
	if ((*Global_1347702)[iParam0]->f_36 == 0)
	{
		return;
	}
	if (func_47(32768))
	{
		return;
	}
	if (does_blip_exist((*Global_1347702)[iParam0]->f_37))
	{
		return;
	}
	(*Global_1347702)[iParam0]->f_38 = func_633(iParam0);
	if (!bParam5 && func_634(iParam0))
	{
		(*Global_1347702)[iParam0]->f_37 = _blip_add_for_radius((*Global_1347702)[iParam0]->f_38, func_635(iParam0), (*Global_1347702)[iParam0]->f_18);
		if (!does_blip_exist((*Global_1347702)[iParam0]->f_37))
		{
			return;
		}
		set_blip_sprite((*Global_1347702)[iParam0]->f_37, (*Global_1347702)[iParam0]->f_36, true);
	}
	else
	{
		(*Global_1347702)[iParam0]->f_37 = _blip_add_for_coord((*Global_1347702)[iParam0]->f_38, vParam1);
		if (!does_blip_exist((*Global_1347702)[iParam0]->f_37))
		{
			return;
		}
		set_blip_sprite((*Global_1347702)[iParam0]->f_37, (*Global_1347702)[iParam0]->f_36, true);
	}
	if (iParam0 == 61)
	{
		func_636(8);
	}
	else if (iParam0 == 62)
	{
		set_blip_name_from_text_file((*Global_1347702)[iParam0]->f_37, "BLIP_THOMAS_DOWNES");
	}
	else if (iParam0 == 95)
	{
		_blip_set_modifier((*Global_1347702)[iParam0]->f_37, 838722941);
		set_blip_name_from_text_file((*Global_1347702)[iParam0]->f_37, "BLIP_RHMRB");
	}
	else if (iParam0 == 42)
	{
		set_blip_name_from_text_file((*Global_1347702)[iParam0]->f_37, "BLIP_RCFSH");
	}
	else if (iParam0 == 40)
	{
		set_blip_name_from_text_file((*Global_1347702)[iParam0]->f_37, "BLIP_RCDIN");
	}
	else if (iParam0 == 50)
	{
		set_blip_name_from_text_file((*Global_1347702)[iParam0]->f_37, "BLIP_RCRKF");
	}
	else if ((((iParam0 == 44 || iParam0 == 45) || iParam0 == 46) || iParam0 == 47) || iParam0 == 48)
	{
		set_blip_name_from_text_file((*Global_1347702)[iParam0]->f_37, "BLIP_RCEXO");
	}
	func_637(iParam0);
	set_blip_flash_timer((*Global_1347702)[iParam0]->f_37, 64, iParam0);
	if (func_139() == -1)
	{
		func_638(iParam0);
		iVar0 = func_639(Global_40.f_4283);
		if (func_528(iVar0) && func_640((*Global_1888801)[iVar0]->f_13))
		{
			bVar1 = true;
			bVar2 = func_641(iVar0);
		}
		if (func_642(iParam0, bVar1, iVar0))
		{
			func_643((*Global_1347702)[iParam0]->f_15, bVar2, bVar1, iVar0);
		}
	}
	if (bParam4)
	{
		if (_0x66f35dd9d2b58579() || is_screen_faded_out())
		{
			return;
		}
	}
	if ((*Global_1347702)[iParam0]->f_13 & 1 == 0)
	{
		func_644(&((*Global_1347702)[iParam0]->f_13), 1);
		if (((!func_634(iParam0) || func_53((*Global_1347702)[iParam0]->f_12, 1)) || func_53((*Global_1347702)[iParam0]->f_12, 512)) || func_645((*Global_1347702)[iParam0]->f_13, 2048))
		{
			_blip_set_modifier((*Global_1347702)[iParam0]->f_37, 580546400);
		}
	}
	if ((*Global_1347702)[iParam0]->f_13 & 32768 == 0)
	{
		if (((*Global_1347702)[iParam0]->f_36 == -1822497728 && (*Global_1347702)[iParam0]->f_12 & 1 == 0) && (*Global_1347702)[iParam0]->f_12 & 2 != 0)
		{
			_blip_set_modifier((*Global_1347702)[iParam0]->f_37, -211388321);
		}
		else
		{
			func_644(&((*Global_1347702)[iParam0]->f_13), 32768);
		}
	}
	if ((*Global_1347702)[iParam0]->f_12 & 8 != 0 && Global_40.f_490.f_402[iParam0] & 2 == 0)
	{
		if (func_646(iParam0))
		{
			if (iParam0 == 97)
			{
				func_196(185, 0);
			}
			else
			{
				func_196(186, 1);
			}
		}
		else
		{
			MemCopy(&cVar3, {(*Global_1347702)[iParam0]->f_3}, 3);
			StringConCat(&cVar3, "_FIRST", 24);
			sVar6 = (*Global_1347702)[iParam0]->f_37;
			(*Global_1347702)[iParam0]->f_40 = func_647(_create_var_string(2, &cVar3, sVar6), 10000, 0, 0, 0, 1);
		}
		func_46(iParam0, 2);
	}
}

int func_250(int iParam0, bool bParam1)
{
	if (iParam0 == 22 || iParam0 == 23)
	{
		return 332378857;
	}
	else if (iParam0 == 26)
	{
		return -1744398657;
	}
	else if ((iParam0 == 30 || iParam0 == 33) || iParam0 == 36)
	{
		return -622951465;
	}
	else if (iParam0 == 53 || iParam0 == 55)
	{
		return 877823184;
	}
	else if (iParam0 == 58)
	{
		return -1739686743;
	}
	else if (iParam0 == 60 || iParam0 == 61)
	{
		return 2145479193;
	}
	else if ((iParam0 == 71 || iParam0 == 74) || iParam0 == 75)
	{
		return -1610853131;
	}
	else if (iParam0 == 77)
	{
		return -434412386;
	}
	else if (iParam0 == 82 || iParam0 == 83)
	{
		return -1489164512;
	}
	else if (iParam0 == 89)
	{
		return 1970061205;
	}
	else if (iParam0 == 101)
	{
		return -1259688762;
	}
	else if (iParam0 == 115)
	{
		return 1079956634;
	}
	else if ((iParam0 == 117 || iParam0 == 118) || iParam0 == 119)
	{
		return -1280269885;
	}
	else if (iParam0 == 121)
	{
		if (bParam1 || func_145((*Global_1347702)[iParam0]->f_15, 1))
		{
			return 415367144;
		}
	}
	else if (iParam0 == 127)
	{
		return -1962480616;
	}
	else if (iParam0 == 136)
	{
		return 194953189;
	}
	else if (iParam0 == 143)
	{
		return 825960713;
	}
	else if (iParam0 == 147)
	{
		if (bParam1 || func_145((*Global_1347702)[iParam0]->f_15, 1))
		{
			return 1770336866;
		}
	}
	if (iParam0 == 151)
	{
		return -1176045274;
	}
	return (*Global_1347702)[iParam0]->f_36;
}

var func_251(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	Var0 = -2;
	Var0 = iParam4;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
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

int func_252(int iParam0)
{
	uVar0 = (*Global_1347702)[iParam0]->f_3;
	return get_hash_key(&uVar0);
}

var func_253(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

bool func_254(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_255(int iParam0)
{
	if (!func_254(iParam0))
	{
		return 0;
	}
	return func_649(func_648(iParam0));
}

int func_256(int iParam0)
{
	if (func_255(iParam0) == 1)
	{
		return func_257(iParam0);
	}
	return -1;
}

int func_257(int iParam0)
{
	if (!func_254(iParam0))
	{
		return -1;
	}
	return func_650(func_648(iParam0));
}

int func_258(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar3 = iParam0;
	iVar4 = iParam1;
	if (Global_1572887->f_12 == -1)
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 100;
				iParam3 = get_hash_key(&((*Global_1835011)[iParam0]->f_8));
				break;
			case 2:
				iVar1 = 101;
				iVar2 = 170;
				break;
			case 3:
				iVar1 = 171;
				iVar2 = 190;
				break;
			case 4:
				iVar1 = 191;
				iVar2 = 230;
				break;
			case 5:
				iVar1 = 231;
				iVar2 = 260;
				break;
			case 6:
				iVar1 = 261;
				iVar2 = 290;
				break;
			case 7:
				iVar1 = 291;
				iVar2 = 370;
				break;
			case 8:
				iVar1 = 371;
				iVar2 = 570;
				iParam3 = get_hash_key(&((*Global_1347702)[iParam0]->f_3));
				break;
			case 9:
				iVar1 = 571;
				iVar2 = 650;
				break;
			case 11:
				iVar1 = 651;
				iVar2 = 750;
				break;
			case 10:
				return -1;
			case 12:
				return -1;
			default:
				return -1;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 200;
				break;
			case 2:
				iVar1 = 201;
				iVar2 = 15700;
				break;
			case 4:
				iVar1 = 15701;
				iVar2 = 16200;
				break;
			case 12:
				iVar1 = 16201;
				iVar2 = 19200;
				break;
			case 10:
				iVar1 = 19201;
				iVar2 = 20000;
				break;
			case 8:
				return -1;
			case 7:
				return -1;
			case 6:
				return -1;
			default:
				return -1;
		}
	}
	if (iVar2 >= func_651())
	{
		iVar2 = func_651();
	}
	iVar5 = func_652(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_648(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_648(iVar6) == 0)
			{
				return func_653(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
		iVar1 = 751;
		iVar2 = 770;
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_648(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_648(iVar6) == 0)
			{
				return func_653(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0] == iVar5)
			{
				return iVar0;
			}
			iVar0++;
		}
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0] == 0)
			{
				return func_653(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_259(int iParam0)
{
	if (!func_254(iParam0))
	{
		return -1;
	}
	return func_262(iParam0);
}

int func_260()
{
	return &Global_1899515;
}

void func_261(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_6 = iParam1;
}

int func_262(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_654(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

void func_263(int iParam0, int iParam1)
{
	if (!func_254(iParam0))
	{
		return;
	}
	func_655(iParam0, iParam1);
}

int func_264(int iParam0)
{
	return func_657(func_656(iParam0));
}

void func_265(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_658(Global_1935630, 4194304);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_659(Global_1935630, 4194304);
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

int func_266(bool bParam0, int iParam1)
{
	if (!bParam0 && func_660(373691918))
	{
		return 0;
	}
	iVar0 = 0;
	if (_0x76cf93d4b416b288(752193127) < 2)
	{
		iVar0 = (_0x76cf93d4b416b288(752193127) + iParam1);
	}
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	_0xf19706b1f8ffa88f(752193127, iVar0);
	func_268(bParam0);
	return 1;
}

void func_267()
{
	Var0 = Global_35;
	Var0.f_12 = 8;
	Var0.f_8 = 0;
	iVar17 = 0;
	while (iVar17 < 27)
	{
		if (func_661(iVar17))
		{
			iVar18 = func_662(iVar17);
			if (does_entity_exist(iVar18))
			{
				Var0.f_14 = iVar18;
				Var0.f_3 = iVar18;
				_0x88bc5f4aef77fc4e(&Var0, 17);
			}
		}
		iVar17++;
	}
	Global_1359489->f_58 = -15;
	func_146(&(Global_1359489->f_55));
	if (func_663(1777191912, 1))
	{
		func_664(1777191912, 1, 0);
	}
}

int func_268(bool bParam0)
{
	if (!bParam0 && func_660(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_269(int iParam0)
{
	if (!func_254(iParam0))
	{
		return;
	}
	func_666(iParam0, (func_665(iParam0) + shift_left(1, 16)));
}

struct<2> func_270(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

bool func_271()
{
	return func_667() > 0;
}

void func_272(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 67:
			func_668(-1032423150, iParam1);
			break;
		case 18:
			func_668(294066959, iParam1);
			func_668(-1925639563, iParam1);
			func_668(-378582304, iParam1);
			func_668(-338306437, iParam1);
			break;
		case 20:
			func_668(437270255, iParam1);
			break;
		case 2:
			func_668(-304000413, iParam1);
			func_668(-533612796, iParam1);
			func_668(48036954, iParam1);
			break;
		case 23:
			func_668(193108691, iParam1);
			func_668(491732588, iParam1);
			func_668(671962088, iParam1);
			func_669(1);
			break;
		case 16:
			func_668(-1836056650, iParam1);
			func_668(-754657922, iParam1);
			func_668(-1752355838, iParam1);
			func_668(-1375324510, iParam1);
			break;
		case 59:
			func_668(-514392105, iParam1);
			func_668(-822060246, iParam1);
			if (func_670(146))
			{
				func_668(1372748575, iParam1);
			}
			func_669(1);
			break;
		case 76:
			func_668(1991352213, iParam1);
			if (func_671() == 0)
			{
				func_668(1852488616, iParam1);
			}
			else
			{
				func_668(-9866350, iParam1);
			}
			break;
		case 44:
			func_668(863852599, iParam1);
			func_668(1228374935, iParam1);
			func_668(1517889050, iParam1);
			func_668(830657578, iParam1);
			func_668(1901354958, iParam1);
			break;
		case 46:
			func_668(-582805654, iParam1);
			func_668(250378940, iParam1);
			func_668(-2143265426, iParam1);
			break;
		case 17:
			func_668(-941494139, iParam1);
			func_668(1641489521, iParam1);
			break;
		case 19:
			func_668(-1829423531, iParam1);
			func_668(-1590504752, iParam1);
			func_668(1357221321, iParam1);
			break;
		case 21:
			func_668(-1037992610, iParam1);
			func_668(-1286414399, iParam1);
			func_669(0);
			break;
		case 15:
			func_668(-1014460309, iParam1);
			func_668(-1030502825, iParam1);
			break;
		case 33:
			func_668(479388090, iParam1);
			func_668(-1396342239, iParam1);
			func_668(-619618632, iParam1);
			break;
		case 34:
			func_668(1193561641, iParam1);
			break;
		case 64:
			func_668(1363960851, iParam1);
			break;
		case 60:
			func_668(-1232453926, iParam1);
			func_668(-882833584, iParam1);
			break;
		case 73:
			func_668(2023205767, iParam1);
			break;
		case 74:
			func_668(-2135286513, iParam1);
			if (func_671() == 0)
			{
				func_668(33799444, iParam1);
			}
			else
			{
				func_668(-161343203, iParam1);
			}
			break;
		case 8:
			func_668(841639693, iParam1);
			func_668(358952323, iParam1);
			break;
		case 36:
			func_668(852538149, iParam1);
			func_668(689020839, iParam1);
			if (&Global_1357515 == 0)
			{
				func_668(-404049058, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_668(1116039310, iParam1);
			}
			break;
		case 27:
			func_668(107633428, iParam1);
			func_668(335902282, iParam1);
			func_668(575673055, iParam1);
			func_668(-425944207, iParam1);
			break;
		case 28:
			func_668(-1941530250, iParam1);
			func_668(1399269304, iParam1);
			func_668(1839684664, iParam1);
			func_668(923168503, iParam1);
			func_668(-1485078322, iParam1);
			break;
		case 29:
			func_668(574995900, iParam1);
			func_668(-1691275407, iParam1);
			func_668(-1725307861, iParam1);
			break;
		case 31:
			func_668(-2108383238, iParam1);
			func_668(-1321828931, iParam1);
			func_668(-1632118592, iParam1);
			func_668(334938948, iParam1);
			break;
		case 4:
			func_668(115823701, iParam1);
			func_668(-1896939736, iParam1);
			func_668(-1830746356, iParam1);
			func_668(-1235169781, iParam1);
			func_669(0);
			break;
		case 6:
			func_668(1801727621, iParam1);
			if (&Global_1357515 == -1)
			{
				func_668(-999872881, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_668(-1227289741, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_668(-384176140, iParam1);
			}
			break;
		case 25:
			func_668(1056132658, iParam1);
			break;
		case 24:
			if (&Global_1357515 == -1)
			{
				func_668(1343889751, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_668(-948326001, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_668(-1374849484, iParam1);
			}
			break;
		case 48:
			func_668(-1632856601, iParam1);
			if (&Global_1357515 == -1)
			{
				func_668(217772674, iParam1);
			}
			else
			{
				func_668(2071798160, iParam1);
			}
			if (func_672(51))
			{
				func_668(-792802286, iParam1);
			}
			break;
		case 49:
			func_668(-1972727021, iParam1);
			if (&Global_1357515 == 0)
			{
				func_668(-1444030885, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_668(-1272255787, iParam1);
			}
			else if (&Global_1357515 == 2)
			{
				func_668(1402120602, iParam1);
			}
			break;
		case 58:
			func_668(-1661934591, iParam1);
			break;
		case 50:
			func_668(-1713759426, iParam1);
			break;
		case 52:
			func_668(-314799932, iParam1);
			func_668(-462260432, iParam1);
			func_668(822929377, iParam1);
			if (bParam2 == 1)
			{
				func_668(345256028, iParam1);
				func_668(-1635084094, iParam1);
			}
			else
			{
				func_668(114267347, iParam1);
			}
			break;
		case 32:
			func_668(615304157, iParam1);
			break;
		case 47:
			func_668(415434835, iParam1);
			break;
		case 69:
			func_668(1373465877, iParam1);
			if (func_145((*Global_1347702)[9]->f_15, 1))
			{
				func_668(-2058273527, iParam1);
			}
			break;
		case 70:
			func_668(451334985, iParam1);
			if (func_671() == 0)
			{
				func_668(-224150200, iParam1);
			}
			else
			{
				func_668(289012628, iParam1);
			}
			break;
		case 71:
			if (func_671() == 0)
			{
				func_668(-41692120, iParam1);
			}
			else
			{
				func_668(1537840678, iParam1);
			}
			break;
		case 37:
			func_668(1520478365, iParam1);
			break;
		case 9:
			if (&Global_1357515 == -1)
			{
				func_668(1842132550, iParam1);
			}
			else
			{
				func_668(-785735240, iParam1);
			}
			func_668(-1605690566, iParam1);
			break;
		case 13:
			func_668(-731367459, iParam1);
			func_668(224176585, iParam1);
			func_668(-14545580, iParam1);
			break;
		case 53:
			func_668(1095274522, iParam1);
			break;
		case 54:
			func_668(-572027988, iParam1);
			break;
		case 56:
			func_668(1339307101, iParam1);
			func_668(2102267732, iParam1);
			break;
		case 57:
			func_668(710102686, iParam1);
			break;
		case 22:
			func_668(-1754368482, iParam1);
			func_668(-2071408557, iParam1);
			break;
		case 12:
			func_668(-181334543, iParam1);
			break;
		case 0:
			func_668(-2134669864, iParam1);
			func_668(-548289709, iParam1);
			func_668(-911271922, iParam1);
			func_668(-604455775, iParam1);
			break;
		case 1:
			func_669(1);
			break;
		case 3:
			if (func_308())
			{
				if (_journal_can_write_entry(-1478534115))
				{
					func_668(-1286192062, iParam1);
				}
			}
			else if (_journal_can_write_entry(-1286192062))
			{
				func_668(-1478534115, iParam1);
			}
			break;
		default:
			break;
	}
}

void func_273(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			func_668(-145926707, iParam1);
			func_668(-604922090, iParam1);
			func_668(-848690769, iParam1);
			break;
		case 1:
			func_668(-1477631591, iParam1);
			break;
		case 2:
			func_668(76112544, iParam1);
			break;
		case 9:
			func_668(1396404308, iParam1);
			func_668(-1357381228, iParam1);
			if (func_145((*Global_1835011)[69]->f_1, 1))
			{
				func_668(1902679064, iParam1);
			}
			else
			{
				func_668(-2146422425, iParam1);
			}
			break;
		case 22:
			func_668(-1534761730, iParam1);
			break;
		case 26:
			if (bParam3 == 1)
			{
				func_668(-1934184559, iParam1);
				func_668(1281755988, iParam1);
			}
			else
			{
				func_668(-1745220872, iParam1);
				func_668(-1044976796, iParam1);
			}
			break;
		case 29:
			if (bParam3 == 1)
			{
				func_668(-1641504538, iParam1);
				func_668(-988014485, iParam1);
			}
			else if (func_670(26))
			{
				func_668(-343043950, iParam1);
				func_668(-640062214, iParam1);
			}
			else
			{
				func_668(-1272028496, iParam1);
			}
			break;
		case 32:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_668(-1816782797, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_668(-176175898, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_668(1711460080, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_668(-2108576508, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_668(-1103692224, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_668(1301690984, iParam1);
				}
			}
			else
			{
				func_668(699457343, iParam1);
				if (&Global_1357515 == -1)
				{
					func_668(-908444626, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_668(-1475448104, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_668(1727640249, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_668(-2050867743, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_668(-996445915, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_668(-1868882771, iParam1);
				}
			}
			break;
		case 35:
			if (bParam3 == 1)
			{
				func_668(-754570528, iParam1);
			}
			else
			{
				func_668(1690083163, iParam1);
			}
			break;
		case 36:
			if (bParam3 == 1)
			{
				func_668(-2072125821, iParam1);
			}
			else
			{
				func_668(270040030, iParam1);
			}
			break;
		case 37:
			func_668(-870030001, iParam1);
			break;
		case 53:
			if (bParam3 == 1)
			{
				func_668(-505314737, iParam1);
				func_668(-1853052860, iParam1);
			}
			else
			{
				func_668(-1975624994, iParam1);
				func_668(1648135852, iParam1);
			}
			break;
		case 54:
			if (bParam3 == 1)
			{
				func_668(1690231002, iParam1);
			}
			else
			{
				func_668(517031924, iParam1);
			}
			break;
		case 55:
			if (bParam3 == 1)
			{
				func_668(1225386280, iParam1);
			}
			else if (func_670(54))
			{
				func_668(-283235773, iParam1);
			}
			else
			{
				func_668(701962369, iParam1);
			}
			break;
		case 38:
			if (bParam3 == 1)
			{
				func_668(1355398007, iParam1);
			}
			else
			{
				func_668(-1900349467, iParam1);
			}
			break;
		case 39:
			if (bParam3 == 1)
			{
				func_668(574636806, iParam1);
			}
			else
			{
				func_668(-196256251, iParam1);
			}
			break;
		case 40:
			if (bParam3 == 1)
			{
				func_668(821118338, iParam1);
			}
			else if (func_670(39))
			{
				func_668(846829260, iParam1);
			}
			else
			{
				func_668(-1212247553, iParam1);
			}
			break;
		case 43:
			if (bParam3 == 1)
			{
				if (func_331((*Global_1835011)[33]->f_1) == 1)
				{
					func_668(1422779093, iParam1);
				}
				else
				{
					func_668(-1769536986, iParam1);
				}
			}
			else
			{
				func_668(-600786233, iParam1);
			}
			break;
		case 45:
			if (bParam3 == 1)
			{
				func_668(352134789, iParam1);
			}
			else if (func_670(43))
			{
				func_668(260723113, iParam1);
			}
			else
			{
				func_668(1080243038, iParam1);
			}
			break;
		case 41:
			if (bParam3 == 1)
			{
				func_668(-457958799, iParam1);
			}
			else
			{
				func_668(2076458086, iParam1);
			}
			break;
		case 42:
			if (func_670(41))
			{
				func_668(-546824600, iParam1);
			}
			else
			{
				func_668(-308364587, iParam1);
			}
			break;
		case 49:
			if (bParam3 == 1)
			{
				func_668(1297261593, iParam1);
			}
			else
			{
				func_668(1940089142, iParam1);
			}
			break;
		case 50:
			if (bParam3 == 1)
			{
				func_668(2068484886, iParam1);
			}
			else if (func_670(49))
			{
				func_668(-1489080639, iParam1);
				func_668(-2102244050, iParam1);
			}
			else
			{
				func_668(-1863040467, iParam1);
			}
			break;
		case 51:
			func_668(-2055943209, iParam1);
			break;
		case 58:
			if (func_145((*Global_1347702)[23]->f_15, 1))
			{
				func_668(1650066845, iParam1);
			}
			else
			{
				func_668(151370023, iParam1);
			}
			func_668(1426057961, iParam1);
			func_668(476379584, iParam1);
			break;
		case 59:
			func_668(-1638117866, iParam1);
			break;
		case 62:
			func_668(199541730, iParam1);
			break;
		case 63:
			func_668(1703485804, iParam1);
			func_668(-800449045, iParam1);
			break;
		case 65:
			func_668(-1678210868, iParam1);
			func_668(-1448238026, iParam1);
			func_668(-1200864845, iParam1);
			func_668(1473511536, iParam1);
			break;
		case 66:
			func_668(-1774490051, iParam1);
			func_668(-34645921, iParam1);
			func_668(174027075, iParam1);
			func_668(-1155999, iParam1);
			func_669(1);
			break;
		case 67:
			func_668(701612593, iParam1);
			func_668(-1069631343, iParam1);
			func_668(1673428882, iParam1);
			break;
		case 68:
			func_668(-739133286, iParam1);
			func_668(-2130089358, iParam1);
			func_668(2056190391, iParam1);
			func_668(1941753817, iParam1);
			func_669(0);
			break;
		case 70:
			func_668(-1217555753, iParam1);
			break;
		case 71:
			func_668(697048821, iParam1);
			break;
		case 73:
			func_668(-553148661, iParam1);
			break;
		case 75:
			func_668(1349250531, iParam1);
			break;
		case 77:
			if (bParam3 == 1)
			{
				func_668(1414263863, iParam1);
			}
			else
			{
				func_668(-1772294468, iParam1);
			}
			break;
		case 79:
			if (bParam3 == 1)
			{
				func_668(1835465936, iParam1);
				func_668(523715611, iParam1);
			}
			else if (func_670(78))
			{
				func_668(1420338873, iParam1);
			}
			else
			{
				func_668(-46362051, iParam1);
			}
			break;
		case 80:
			if (bParam3 == 1)
			{
				func_668(10180941, iParam1);
			}
			else if (func_670(79))
			{
				func_668(768420635, iParam1);
			}
			else
			{
				func_668(-1734012650, iParam1);
			}
			break;
		case 85:
			if (bParam3 == 1)
			{
				func_668(-383601523, iParam1);
			}
			else
			{
				func_668(1004812390, iParam1);
			}
			break;
		case 86:
			if (bParam3 == 1)
			{
				func_668(1606472408, iParam1);
			}
			else
			{
				func_668(1405690220, iParam1);
			}
			break;
		case 87:
			if (bParam3 == 1)
			{
				func_668(-203571927, iParam1);
			}
			else
			{
				func_668(640033630, iParam1);
			}
			break;
		case 88:
			if (bParam3 == 1)
			{
				func_668(729886222, iParam1);
			}
			else
			{
				func_668(-158717807, iParam1);
			}
			break;
		case 89:
			if (bParam3 == 1)
			{
				func_668(-714816362, iParam1);
			}
			else
			{
				func_668(1160146336, iParam1);
			}
			break;
		case 92:
			if (bParam3 == 1)
			{
				func_668(-932932179, iParam1);
				func_668(-1458537240, iParam1);
			}
			else
			{
				func_668(-1764383885, iParam1);
				func_668(894349517, iParam1);
			}
			break;
		case 93:
			if (bParam3 == 1)
			{
				func_668(1741466706, iParam1);
			}
			else
			{
				func_668(1405815775, iParam1);
			}
			break;
		case 94:
			func_668(1163067702, iParam1);
			if (&Global_1357515 == -1)
			{
				func_668(1905280979, iParam1);
			}
			else
			{
				func_668(-1966245299, iParam1);
			}
			func_668(721468880, iParam1);
			break;
		case 99:
			func_668(800644248, iParam1);
			break;
		case 101:
			if (bParam3 == 1)
			{
				func_668(1502176860, iParam1);
				if (&Global_1357515 == -1)
				{
					func_668(-1117781095, iParam1);
				}
				else
				{
					func_668(-618709225, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_668(141494548, iParam1);
			}
			else
			{
				func_668(-633957459, iParam1);
			}
			break;
		case 102:
			if (bParam3 == 1)
			{
				func_668(-369525697, iParam1);
			}
			else if (func_670(101))
			{
				func_668(1595015219, iParam1);
			}
			else
			{
				func_668(-321486961, iParam1);
			}
			break;
		case 103:
			func_668(1422724221, iParam1);
			break;
		case 104:
			if (bParam3 == 1)
			{
				func_668(793460477, iParam1);
				func_668(-1610242176, iParam1);
			}
			else if (func_670(103))
			{
				func_668(1830897187, iParam1);
			}
			else
			{
				func_668(1419017828, iParam1);
			}
			break;
		case 105:
			if (bParam3 == 1)
			{
				func_668(1528309077, iParam1);
			}
			else if (func_670(104))
			{
				func_668(1864966105, iParam1);
			}
			else
			{
				func_668(-103336013, iParam1);
			}
			break;
		case 108:
			func_668(1175579551, iParam1);
			break;
		case 109:
			if (bParam3 == 1)
			{
				func_668(-1123227713, iParam1);
				func_668(-889574341, iParam1);
			}
			else
			{
				func_668(2065385917, iParam1);
				func_668(780305039, iParam1);
			}
			break;
		case 110:
			if (bParam3 == 1)
			{
				func_668(-887421691, iParam1);
			}
			else if (func_670(109))
			{
				func_668(-1318117949, iParam1);
			}
			else
			{
				func_668(1632244327, iParam1);
			}
			break;
		case 111:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 0)
				{
					func_668(284822762, iParam1);
				}
				else
				{
					func_668(-1425017554, iParam1);
				}
			}
			else if (func_670(110))
			{
				if (&Global_1357515 == 0)
				{
					func_668(553087292, iParam1);
				}
				else
				{
					func_668(-1766870331, iParam1);
					func_668(1971788022, iParam1);
				}
			}
			else if (&Global_1357515 == 0)
			{
				func_668(-1980598735, iParam1);
			}
			else
			{
				func_668(-442732098, iParam1);
				func_668(1955756409, iParam1);
			}
			break;
		case 115:
			func_668(394303528, iParam1);
			func_668(-2040171028, iParam1);
			break;
		case 143:
			if (bParam3 == 1)
			{
				func_668(1182403394, iParam1);
			}
			else
			{
				func_668(-2116547899, iParam1);
			}
			break;
		case 144:
			if (bParam3 == 1)
			{
				func_668(924445424, iParam1);
			}
			else
			{
				func_668(1227062271, iParam1);
			}
			break;
		case 117:
			if (bParam3 == 1)
			{
				func_668(430755273, iParam1);
				func_668(-1473879802, iParam1);
			}
			else
			{
				func_668(1121266049, iParam1);
			}
			break;
		case 118:
			if (bParam3 == 1)
			{
				func_668(73885747, iParam1);
			}
			else if (func_670(117))
			{
				func_668(1559707913, iParam1);
			}
			else
			{
				func_668(926897873, iParam1);
			}
			break;
		case 119:
			if (bParam3 == 1)
			{
				func_668(-2103887972, iParam1);
			}
			else if (func_670(118))
			{
				func_668(-435828462, iParam1);
			}
			else
			{
				func_668(-516020583, iParam1);
			}
			break;
		case 121:
			if (bParam3 == 1)
			{
				func_668(2054486196, iParam1);
			}
			else
			{
				func_668(1809320262, iParam1);
			}
			break;
		case 122:
			if (bParam3 == 1)
			{
				func_668(-570086056, iParam1);
			}
			else if (func_670(121))
			{
				func_668(32337856, iParam1);
			}
			else
			{
				func_668(-206811842, iParam1);
			}
			break;
		case 124:
			if (bParam3 == 1)
			{
				func_668(813493663, iParam1);
			}
			else if (func_670(122))
			{
				func_668(-2132763590, iParam1);
			}
			else
			{
				func_668(477901035, iParam1);
			}
			break;
		case 125:
			if (bParam3 == 1)
			{
				func_668(-66240572, iParam1);
				func_668(1563075046, iParam1);
			}
			else
			{
				func_668(-787011772, iParam1);
				func_668(-1523377438, iParam1);
			}
			break;
		case 127:
			func_668(61020800, iParam1);
			break;
		case 129:
			func_668(428985222, iParam1);
			break;
		case 131:
			func_668(-1393851036, iParam1);
			break;
		case 133:
			func_668(1559531342, iParam1);
			break;
		case 134:
			func_668(-718846442, iParam1);
			break;
		case 135:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_668(-1374407408, iParam1);
				}
				else
				{
					func_668(471210931, iParam1);
				}
			}
			else if ((_journal_can_write_entry(1732474719) && _journal_can_write_entry(801682048)) && _journal_can_write_entry(-1986404392))
			{
				if (&Global_1357515 == -1)
				{
					func_668(-472672138, iParam1);
				}
				else
				{
					func_668(-2132098614, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_668(-1678710489, iParam1);
			}
			else
			{
				func_668(1522210661, iParam1);
			}
			break;
		case 136:
			if (bParam3 == 1)
			{
				func_668(1717582460, iParam1);
			}
			else
			{
				func_668(343644664, iParam1);
			}
			break;
		case 137:
			if (bParam3 == 1)
			{
				func_668(1568112362, iParam1);
				func_668(1388317526, iParam1);
			}
			else if (func_670(136))
			{
				func_668(-1597534828, iParam1);
				func_668(-1207918353, iParam1);
			}
			else
			{
				func_668(-1940891082, iParam1);
				func_668(-598277294, iParam1);
			}
			break;
		case 142:
			if (bParam2 == 1)
			{
				func_668(448334530, iParam1);
				func_668(2145375502, iParam1);
			}
			else
			{
				func_668(-1891994685, iParam1);
			}
			break;
		case 146:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 1)
				{
					func_668(1159121660, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_668(-1968554187, iParam1);
				}
			}
			else if (&Global_1357515 == 1)
			{
				func_668(841927377, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_668(848633571, iParam1);
			}
			break;
		case 147:
			if (bParam3 == 1)
			{
				func_668(-66616327, iParam1);
			}
			else
			{
				func_668(1978361607, iParam1);
			}
			break;
		case 148:
			if (bParam3 == 1)
			{
				func_668(1862916706, iParam1);
			}
			else if (func_670(147))
			{
				func_668(675105199, iParam1);
			}
			else
			{
				func_668(-1993800776, iParam1);
			}
			break;
		case 149:
			if (bParam3 == 1)
			{
				func_668(174409701, iParam1);
			}
			else if (func_670(148))
			{
				func_668(-1730895475, iParam1);
			}
			else
			{
				func_668(-342396910, iParam1);
			}
			break;
		case 150:
			if (bParam3 == 1)
			{
				func_668(1295237052, iParam1);
			}
			else if (func_670(149))
			{
				func_668(-788577684, iParam1);
			}
			else
			{
				func_668(1527015024, iParam1);
			}
			break;
		default:
			break;
	}
}

int func_274(int iParam0, var uParam1, int iParam2)
{
	*uParam1 = 1137976064;
	*iParam2 = -1;
	iVar0 = func_255(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = func_256(iParam0);
			switch (iVar1)
			{
				case 0:
					return -1340559426;
				case 1:
					return -694047360;
				case 2:
					return -757336127;
				case 3:
					return -164763388;
				case 4:
					*uParam1 = -2060316038;
					return -2030965067;
				case 5:
					return 2030928096;
				case 6:
					return -332258016;
				case 10:
					return 1817180056;
				case 13:
					return 545240164;
				case 15:
					return 1141344854;
				case 8:
					return 1796786552;
				case 25:
					return 1783253542;
				case 14:
					return -2129915369;
				case 7:
					return -1393633441;
				case 9:
					if (func_331((*Global_1835011)[9]->f_1) == 0)
					{
						return 1819621703;
					}
					else
					{
						return 1456958671;
					}
					break;
				case 11:
					return 278608719;
				case 12:
					return -561040434;
				case 16:
					return 95619635;
				case 17:
					return 1185998732;
				case 53:
					return -221923309;
				case 18:
					return -620369863;
				case 19:
					return -1738185394;
				case 20:
					return -637873918;
				case 22:
					return 561912024;
				case 23:
					return 951007010;
				case 24:
					return -1512720465;
				case 21:
					return 920901415;
				case 26:
					return -1664107227;
				case 27:
					return -1934704933;
				case 28:
					return -582523927;
				case 29:
					return -259827569;
				case 30:
					return -1633236438;
				case 31:
					return -1396074730;
				case 32:
					return -248683070;
				case 33:
					return 1454698172;
				case 34:
					return -1548165899;
				case 35:
					return -1486701482;
				case 36:
					return 1249990864;
				case 37:
					return -164125056;
				case 38:
					return -1198456774;
				case 39:
					return -820014425;
				case 40:
					return -2071373019;
				case 41:
					return -162152912;
				case 42:
					return -532430534;
				case 43:
					return -695655810;
				case 44:
					return -1238376790;
				case 45:
					return 1927460276;
				case 46:
					return 1824331150;
				case 47:
					return 1888528254;
				case 48:
					return 1971155641;
				case 49:
					return -1757085331;
				case 50:
					return 1264235360;
				case 51:
					return 1157034909;
				case 52:
					return 512067206;
				case 54:
					return -258855820;
				case 55:
					return 2143139308;
				case 56:
					return -18183703;
				case 57:
					return 692218123;
				case 58:
					return 127002552;
				case 59:
					return 1769573516;
				case 60:
					return 501194998;
				case 61:
					return -219249641;
				case 62:
					return 1935952956;
				case 63:
					return 121222228;
				case 64:
					return -1381943684;
				case 65:
					return -1417145007;
				case 66:
					return -314300362;
				case 67:
					return -445710060;
				case 68:
					return 122725574;
				case 69:
					return -935212592;
				case 70:
					return -597010176;
				case 71:
					return 534386033;
				case 72:
					return -330340613;
				case 73:
					return 1425403638;
				case 74:
					return 124507607;
				case 75:
					return 747937920;
				case 76:
					return 1636680094;
			}
			break;
		case 8:
			iVar2 = func_257(iParam0);
			switch (iVar2)
			{
				case 120:
					return -895048976;
				case 0:
					return -172442174;
				case 63:
					return 569547151;
				case 97:
					return 1150653348;
				case 98:
					return -2075517304;
				case 94:
					return -1048889581;
				case 59:
					return 2137967386;
				case 61:
					return -1955429862;
				case 62:
					return 1899640864;
				case 112:
					return 1469701481;
				case 113:
					return -954047483;
				case 114:
					return -1868521635;
				case 66:
					*uParam1 = -2060316038;
					return -402973141;
				case 76:
					return 281905065;
				case 134:
					return 1132574871;
				case 3:
					return 709886296;
				case 5:
					return -1646431667;
				case 21:
					return 2143106360;
				case 37:
					return 1073595144;
				case 138:
					return -1582252733;
				case 67:
					*uParam1 = -2060316038;
					return 1415827953;
				case 106:
					return 195634974;
				case 107:
					return 1508162848;
				case 115:
					return -1971110347;
				case 116:
					return 446631778;
				case 22:
					return 1909655985;
				case 23:
					return -303175962;
				case 82:
					return 437096661;
				case 68:
					*uParam1 = -2060316038;
					return 1046168872;
				case 140:
					return 1593516439;
				case 142:
					return 1234351222;
				case 58:
					return -1988547710;
				case 64:
					return 98434060;
				case 65:
					return 1937922313;
				case 108:
					return -713369135;
				case 8:
					return -1538781541;
				case 10:
					return -925475803;
				case 2:
					return -1479860879;
				case 96:
					return -1025265051;
				case 52:
					return -270246276;
				default:
					break;
			}
			break;
		case 11:
			iVar3 = func_257(iParam0);
			switch (iVar3)
			{
				case 581819093:
					return -1202860612;
				case -1220302226:
					return 703663141;
				case -839878969:
					return 1534808110;
				case -360730635:
					return -742985447;
				case 687859577:
					return -331451824;
				case 1202375449:
					return 1344816618;
				case -1891229662:
					return 597768834;
				case -668333238:
					return -120359954;
				case 99378894:
					return -290258665;
				default:
					break;
			}
			break;
	}
	return 176656832;
}

int func_275(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar2 = func_673(iParam0);
	iVar3 = func_674(iParam0);
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == 176656832)
		{
			Global_40.f_4283.f_6[iVar0] = iParam0;
			Global_40.f_4283.f_6[iVar0]->f_2 = uParam1;
			Global_40.f_4283.f_6[iVar0]->f_3 = iVar3;
			if (iParam3 > 0)
			{
				iVar1 = func_260();
				func_304(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0]->f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0]->f_4 = iVar2;
			func_675(iParam0, 1);
			if (func_676(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4]->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4] != iParam0)
					{
						func_677(Global_40.f_4283.f_6[iVar4], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_678(1, iParam0);
				}
				else
				{
					func_679(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_276(int iParam0, int iParam1)
{
	*iParam1 = 0;
	switch (iParam0)
	{
		case 68:
			*iParam1 = 35;
			return 70;
		case 76:
			*iParam1 = 35;
			return 70;
		case 70:
			*iParam1 = 35;
			return 70;
		case 73:
			*iParam1 = 35;
			return 70;
		case 19:
			*iParam1 = 25;
			return 50;
		case 21:
			*iParam1 = 35;
			return 70;
		case 60:
			*iParam1 = 35;
			return 70;
		case 61:
			*iParam1 = 35;
			return 70;
		case 62:
			*iParam1 = 35;
			return 70;
		case 63:
			*iParam1 = 35;
			return 70;
		case 64:
			*iParam1 = 35;
			return 70;
		case 65:
			*iParam1 = 35;
			return 70;
		case 66:
			*iParam1 = 35;
			return 70;
		case 67:
			*iParam1 = 35;
			return 70;
		case 32:
			*iParam1 = 35;
			return 70;
		case 48:
			*iParam1 = 35;
			return 70;
		case 49:
			*iParam1 = 35;
			return 70;
		case 47:
			*iParam1 = 30;
			return 60;
		case 58:
			*iParam1 = 30;
			return 60;
		case 27:
			*iParam1 = 30;
			return 60;
		case 29:
			*iParam1 = 40;
			return 100;
		case 30:
			*iParam1 = 50;
			return 100;
		case 33:
			*iParam1 = 30;
			return 60;
		case 23:
			*iParam1 = 30;
			return 60;
		case 10:
			*iParam1 = 30;
			return 60;
		case 5:
			*iParam1 = 45;
			return 60;
		case 11:
			*iParam1 = 35;
			return 70;
		case 9:
			*iParam1 = 45;
			return 70;
		case 15:
			*iParam1 = 15;
			return 35;
		case 35:
			*iParam1 = 50;
			return 70;
		case 8:
			*iParam1 = 50;
			return 100;
		case 36:
			*iParam1 = 40;
			return 80;
		case 22:
			*iParam1 = 25;
			return 45;
		case 39:
		case 41:
		case 42:
		case 43:
			*iParam1 = 20;
			return 40;
	}
	return 120;
}

int func_277(int iParam0, int iParam1, int iParam2)
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

void func_278(bool bParam0)
{
	if (bParam0)
	{
		Global_1894899 |= 64;
	}
	else
	{
		Global_1894899 = (&Global_1894899 - Global_1894899 & 64);
	}
}

void func_279(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = iParam0 * 1000;
	if ((iVar0 + get_game_timer()) > Global_1327479->f_4)
	{
		func_680(iParam0, iParam1, bParam2);
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

int func_280(int iParam0, int iParam1)
{
	*iParam1 = 0;
	switch (iParam0)
	{
		case 55:
			*iParam1 = 45;
			return 75;
		case 60:
			*iParam1 = 0;
			return 0;
		case 74:
			*iParam1 = 45;
			return 75;
		case 119:
			*iParam1 = 45;
			return 75;
		case 84:
			*iParam1 = 45;
			return 75;
		case 85:
			*iParam1 = 45;
			return 75;
		case 106:
			*iParam1 = 20;
			return 35;
		case 107:
			*iParam1 = 20;
			return 35;
		case 8:
			*iParam1 = 45;
			return 75;
		case 9:
			*iParam1 = 45;
			return 75;
		case 10:
			*iParam1 = 45;
			return 75;
		case 98:
			*iParam1 = 30;
			return 50;
		case 82:
			*iParam1 = 30;
			return 50;
		case 83:
			*iParam1 = 30;
			return 50;
		case 99:
			*iParam1 = 30;
			return 50;
		case 138:
			*iParam1 = 30;
			return 50;
		case 139:
			*iParam1 = 30;
			return 50;
		case 140:
			*iParam1 = 30;
			return 50;
		case 141:
			*iParam1 = 30;
			return 50;
		case 142:
			*iParam1 = 30;
			return 50;
		case 21:
			*iParam1 = 30;
			return 50;
		case 136:
			*iParam1 = 30;
			return 50;
		case 137:
			*iParam1 = 40;
			return 80;
		case 124:
			*iParam1 = 30;
			return 50;
		case 125:
			*iParam1 = 30;
			return 50;
		case 127:
			*iParam1 = 30;
			return 50;
		case 128:
			*iParam1 = 30;
			return 50;
		case 131:
			*iParam1 = 30;
			return 50;
		case 133:
			*iParam1 = 30;
			return 50;
		case 105:
			*iParam1 = 30;
			return 50;
		case 89:
			*iParam1 = 30;
			return 50;
		case 93:
			*iParam1 = 30;
			return 50;
		case 75:
			*iParam1 = 30;
			return 50;
		case 5:
			*iParam1 = 50;
			return 100;
		case 6:
			*iParam1 = 30;
			return 50;
		case 77:
			*iParam1 = 30;
			return 50;
		case 78:
			*iParam1 = 30;
			return 50;
		case 30:
			*iParam1 = 30;
			return 50;
		case 31:
			*iParam1 = 30;
			return 50;
		case 32:
			*iParam1 = 30;
			return 50;
		case 33:
			*iParam1 = 30;
			return 50;
		case 34:
			*iParam1 = 30;
			return 50;
		case 35:
			*iParam1 = 30;
			return 50;
		case 36:
			*iParam1 = 30;
			return 50;
		case 24:
			*iParam1 = 30;
			return 50;
		case 25:
			*iParam1 = 30;
			return 50;
		case 26:
			*iParam1 = 30;
			return 50;
		case 27:
			*iParam1 = 30;
			return 50;
		case 28:
			*iParam1 = 30;
			return 50;
		case 66:
			*iParam1 = 30;
			return 50;
		case 67:
			*iParam1 = 50;
			return 100;
		case 146:
			*iParam1 = 30;
			return 50;
		case 38:
			*iParam1 = 30;
			return 45;
		case 39:
			*iParam1 = 30;
			return 45;
		case 40:
			*iParam1 = 30;
			return 45;
		case 41:
			*iParam1 = 30;
			return 45;
		case 42:
			*iParam1 = 30;
			return 45;
		case 43:
			*iParam1 = 30;
			return 45;
		case 44:
			*iParam1 = 30;
			return 45;
		case 45:
			*iParam1 = 30;
			return 45;
		case 46:
			*iParam1 = 30;
			return 45;
		case 47:
			*iParam1 = 30;
			return 45;
		case 48:
			*iParam1 = 30;
			return 45;
		case 49:
			*iParam1 = 30;
			return 45;
		case 50:
			*iParam1 = 30;
			return 45;
		case 51:
			*iParam1 = 30;
			return 45;
		case 112:
			*iParam1 = 10;
			return 20;
		case 113:
			*iParam1 = 25;
			return 45;
		case 114:
			*iParam1 = 10;
			return 20;
		case 59:
			*iParam1 = 15;
			return 35;
		case 61:
			*iParam1 = 15;
			return 35;
		case 97:
			*iParam1 = 15;
			return 35;
		case 94:
			*iParam1 = 20;
			return 30;
		case 0:
			*iParam1 = 45;
			return 75;
		case 115:
			*iParam1 = 30;
			return 60;
	}
	return 120;
}

bool func_281(int iParam0)
{
	switch (iParam0)
	{
		case 57:
		case 125:
		case 150:
			return true;
	}
	return false;
}

int func_282(int iParam0)
{
	if (!func_254(iParam0))
	{
		return -1;
	}
	return func_681(func_648(iParam0));
}

int func_283(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 120;
	}
	return 60;
}

void func_284(int iParam0, bool bParam1)
{
	if (func_139() != -1)
	{
		return;
	}
	if (func_620(0) != iParam0)
	{
		return;
	}
	if (func_682(iParam0))
	{
		if (bParam1)
		{
			func_683(-525676072);
		}
		else
		{
			func_684(-525676072);
		}
	}
}

int func_285(int iParam0)
{
	switch (func_255(iParam0))
	{
		case 1:
			iVar0 = func_257(iParam0);
			return func_685(iVar0);
		case 8:
			iVar1 = func_257(iParam0);
			if (func_53((*Global_1347702)[iVar1]->f_12, 1))
			{
				return func_686(iVar1);
			}
			break;
	}
	return -1;
}

void func_286(bool bParam0)
{
	if (Global_1898077->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_139() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077->f_2 == 4 && Global_1898077->f_12 != Global_1898077->f_13) && !bParam0)
	{
		Global_1898077->f_1 = Global_1898077->f_2;
		Global_1898077->f_12 = Global_1898077->f_13;
		func_687(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_688();
		Global_1898077->f_9 = func_689(Global_1894899->f_2);
		func_690(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_287()
{
	if (!func_145((*Global_1835011)[4]->f_1, 1))
	{
		return 0;
	}
	else if (!func_145((*Global_1347702)[66]->f_15, 1))
	{
		return 1;
	}
	else if (!func_145((*Global_1347702)[67]->f_15, 1))
	{
		return 2;
	}
	else if (!func_145((*Global_1835011)[38]->f_1, 1))
	{
		return 3;
	}
	else if (!func_145((*Global_1347702)[68]->f_15, 1))
	{
		return 4;
	}
	else if (!func_145((*Global_1835011)[59]->f_1, 1))
	{
		return 5;
	}
	else if (!func_145((*Global_1835011)[67]->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

bool func_288()
{
	if (func_139() != -1)
	{
		return false;
	}
	if (!func_691())
	{
		return false;
	}
	if (!func_145((*Global_1835011)[1]->f_1, 1))
	{
		return true;
	}
	if ((func_145((*Global_1835011)[2]->f_1, 1) && func_145((*Global_1347702)[120]->f_15, 1)) && !func_145((*Global_1835011)[4]->f_1, 1))
	{
		return true;
	}
	if (func_145((*Global_1835011)[37]->f_1, 1) && !func_145((*Global_1835011)[39]->f_1, 1))
	{
		return true;
	}
	if (func_145((*Global_1835011)[57]->f_1, 1) && !func_145((*Global_1835011)[60]->f_1, 1))
	{
		return true;
	}
	if (func_145((*Global_1835011)[26]->f_1, 1) && !func_145((*Global_1347702)[67]->f_15, 1))
	{
		return true;
	}
	if ((func_145((*Global_1835011)[62]->f_1, 1) && func_145((*Global_1835011)[63]->f_1, 1)) && !func_145((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if (func_145((*Global_1835011)[75]->f_1, 1) && !func_145((*Global_1347702)[1]->f_15, 1))
	{
		return true;
	}
	if (func_145((*Global_1835011)[76]->f_1, 1) && !func_145((*Global_1835011)[77]->f_1, 1))
	{
		return true;
	}
	if ((func_145((*Global_1835011)[40]->f_1, 1) && func_145((*Global_1835011)[41]->f_1, 1)) && !func_145((*Global_1835011)[44]->f_1, 1))
	{
		return true;
	}
	if ((func_145((*Global_1835011)[62]->f_1, 1) && func_145((*Global_1835011)[63]->f_1, 1)) && !func_145((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if ((func_145((*Global_1835011)[65]->f_1, 1) && func_145((*Global_1835011)[66]->f_1, 1)) && !func_145((*Global_1835011)[67]->f_1, 1))
	{
		return true;
	}
	return false;
}

void func_289()
{
	_sc_feed_submit_preset_message(2, 1);
	if (is_orbis_version())
	{
		iVar0 = func_692(13);
		(*Global_1898441)[iVar0] = 13;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_WIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_WIN2_COM", 24);
	}
}

bool func_290(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_412(iParam0, 0))
	{
		return false;
	}
	if (!func_693(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_694(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	func_695(iParam0, bParam2);
	iVar2 = 0;
	if (func_696(iParam0, 0, 0) == 0)
	{
		if (func_697(iParam0))
		{
			iVar5 = func_698(iParam0);
			iVar6 = func_699(iVar5);
			iVar7 = func_700(iVar6) + 1;
			func_701(iVar5);
			if (func_702(38))
			{
				func_196(483, 0);
			}
			else
			{
				func_196(482, 0);
			}
			if (iVar7 == func_703(iVar6))
			{
				func_290(func_704(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_691() && func_705(4))
				{
					if (func_691() && (func_706(38) || func_702(38)))
					{
						func_708(38, func_704(iVar6), 0, 0, func_707(), 0, -1, 0);
						func_709(2);
					}
					else
					{
						func_708(38, func_704(iVar6), 0, 0, func_707(), 0, -1, 0);
						func_709(1);
					}
				}
			}
			else if (func_691() && func_705(4))
			{
				if (func_691() && (func_706(38) || func_702(38)))
				{
					func_708(38, 0, 0, 0, func_707(), 0, -1, 0);
					func_709(2);
				}
				else
				{
					func_708(38, 0, 0, 0, func_707(), 0, -1, 0);
					func_709(1);
				}
			}
			if (func_691() && func_705(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_691() && (func_706(38) || func_702(38)))
					{
						func_710(38, _0x13aaecda43318bfe(-2076669067, iVar6), _0xd52d20b0c76bb26d(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_710(38, get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_711(iParam0) == -1037537535)
	{
		if ((!func_413(iParam0, 866047851) && !func_413(iParam0, -1979000645)) && !func_413(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_712(iParam0, 8388608) && !func_492(28))
	{
		func_713(28);
	}
	if (!bVar3)
	{
		if (func_413(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_714(iParam0) == -1447088266)
			{
				iVar1 = func_716(func_715(iParam0, 1), 0);
				if (is_weapon_valid(iVar1))
				{
					if (func_139() == -1)
					{
						func_717(iVar1);
					}
					if (func_718(0) && func_719(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_720(iParam0, iVar0, iParam5);
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
					if (func_139() == -1)
					{
						func_717(iParam0);
					}
					if (func_718(0) && func_719(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_720(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_711(iParam0) == -427144552)
		{
			if (!func_721(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_711(iParam0) == 307971639 && func_722(iParam0))
		{
			if (!func_723(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_413(iParam0, 866047851))
		{
			func_724(iParam0);
		}
		else if (func_413(iParam0, 2000026003))
		{
			func_725(iParam0);
		}
		else if (func_413(iParam0, -103750053))
		{
			func_498(func_726(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_498(func_727(-717883113, 2091222383), iVar0);
		}
		else if (func_413(iParam0, -121341956) && !func_413(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_145((*Global_1835011)[4]->f_1, 1))
				{
					func_196(498, 0);
				}
			}
			if (func_413(iParam0, -2017733358) || func_413(iParam0, -1369131378))
			{
				func_728(iParam0);
			}
		}
		else if (func_413(iParam0, -136654233))
		{
			if (func_413(iParam0, -1021472396))
			{
			}
		}
		else if (func_413(iParam0, -1466706512) && func_413(iParam0, 1147021565))
		{
			func_196(484, 0);
		}
		else if (func_413(iParam0, 1147021565) && func_413(iParam0, -524514947))
		{
		}
		else if (func_413(iParam0, 554195525))
		{
		}
		else if (func_413(iParam0, 589988438))
		{
			if (func_729())
			{
				func_730(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_413(iParam0, 787083290) && func_413(iParam0, 949916894))
		{
			func_731(iParam0);
		}
		else if (func_413(iParam0, -1718133314))
		{
			func_732(iParam0);
		}
		else if (func_413(iParam0, -1738650224))
		{
			func_733(iParam0);
		}
		else if (func_413(iParam0, -1112814642) && func_413(iParam0, 949916894))
		{
			func_734(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_413(iParam0, 1841149704))
		{
			func_735();
		}
		else if (func_413(iParam0, 606799272))
		{
			func_736(iParam0, iParam1);
			func_737(iParam0);
		}
		else if (func_413(iParam0, -1112814642) && func_413(iParam0, -1697809989))
		{
			func_738(iParam0, 0, 0, 0);
		}
		else if (func_413(iParam0, -2017733358) || func_413(iParam0, -1369131378))
		{
			func_728(iParam0);
		}
		else if (func_413(iParam0, -1921346699))
		{
			if (func_139() != -1)
			{
				return false;
			}
			func_739(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_413(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_317(215778062, 1, 0))
					{
						func_290(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_317(670273567, 1, 0))
					{
						func_290(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_317(-967317137, 1, 0))
					{
						func_290(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_317(526074061, 1, 0))
					{
						func_290(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_317(-1045488665, 1, 0))
					{
						func_290(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_317(471514780, 1, 0))
					{
						func_290(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_413(iParam0, -839724752) && func_712(iParam0, 4))
		{
			if (!func_702(42))
			{
				func_740(iParam0);
			}
		}
		else if (func_413(iParam0, 1399091007))
		{
			func_741(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_413(iParam0, 1248798204))
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
				func_290(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_713(24);
				if (&Global_1946804->f_1497.f_1[27] == &Global_1946804->f_57[27])
				{
					func_742(player_ped_id(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_743(&iVar9, 0))
				{
					func_719(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_139() == -1 && &Global_1946804->f_1497.f_1[25] == &Global_1946804->f_57[25])
				{
					func_742(player_ped_id(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case -160924582:
				break;
			case 2131771850:
				func_196(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_744();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_745();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_746();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_747();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_748();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_749(499813453, 854119837, 0);
				func_750(499813453, 0);
				func_751(1);
				break;
			case 2127812557:
				func_749(499813453, -1292544588, 0);
				func_750(499813453, 0);
				func_751(2);
				break;
			case 808991383:
				func_749(499813453, -1003325394, 0);
				func_750(499813453, 0);
				func_751(4);
				break;
			case 1134518629:
				func_749(666607663, -335460405, 0);
				func_750(666607663, 0);
				func_752(1);
				break;
			case 902940106:
				func_749(666607663, 903797617, 0);
				func_750(666607663, 0);
				func_752(2);
				break;
			case -418174898:
				func_749(666607663, 669728650, 0);
				func_750(666607663, 0);
				func_752(4);
				break;
			case -648114971:
				func_749(-220219788, 1214120047, 0);
				func_750(-220219788, 0);
				func_753(1);
				break;
			case 211153747:
				func_749(-220219788, 655769340, 0);
				func_750(-220219788, 0);
				func_753(2);
				break;
			case -32876996:
				func_749(-220219788, 885316185, 0);
				func_750(-220219788, 0);
				func_753(4);
				break;
			case 1191437462:
				func_749(218622660, -1491419385, 0);
				func_750(218622660, 0);
				func_754(1);
				break;
			case 1119149048:
				func_749(218622660, 1809565830, 0);
				func_750(218622660, 0);
				func_754(2);
				break;
			case 506073827:
				func_749(390004462, -628873767, 0);
				func_750(390004462, 0);
				func_755(1);
				break;
			case -1876986168:
				func_749(390004462, -405421956, 0);
				func_750(390004462, 0);
				func_755(2);
				break;
			case 2142623221:
				func_749(390004462, -1108972386, 0);
				func_750(390004462, 0);
				func_755(4);
				break;
			case 1508215381:
				func_749(6410548, 1053716392, 0);
				func_750(6410548, 0);
				func_756(1);
				break;
			case -888935280:
				func_749(6410548, 806507056, 0);
				func_750(6410548, 0);
				func_756(2);
				break;
			case -1252474566:
				func_749(6410548, 1571925350, 0);
				func_750(6410548, 0);
				func_756(4);
				break;
			case -1465702449:
				func_749(6410548, 1330352282, 0);
				func_750(6410548, 0);
				func_756(8);
				break;
			case -21093309:
				func_758(242, func_757(-21093309), 0);
				break;
			case 204375141:
				func_758(240, func_757(204375141), 0);
				break;
			case -417963070:
				func_758(241, func_757(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_759(594, 1934060482, 1, 1);
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
					func_759(594, 1110018439, 1, 1);
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
					func_759(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_759(594, -1228016946, 1, 1);
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
					func_759(595, -103579, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_759(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case 80178851:
				func_196(488, 0);
				break;
			case 1613651027:
				func_196(491, 0);
				break;
			case -885810591:
				func_196(485, 0);
				if ((get_random_int_in_range(0, 65536) % 3) == 0)
				{
					func_290(func_760(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_290(func_761(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_492(1))
				{
					func_196(487, 0);
				}
				break;
			case -898386032:
				func_196(486, 0);
				break;
			case -2035110427:
				if (func_139() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_196(496, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return false;
		}
		iVar10 = iParam0;
		func_762(&iVar10);
		if (!func_763(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!func_718(0))
		{
			return true;
		}
		if (func_711(iParam0) == -1037537535)
		{
			func_764(iParam0);
		}
		if (func_413(iParam0, -1979000645))
		{
			func_765(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_718(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_290(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_766(iVar2, 0);
		}
	}
	Var35 = { func_767(iParam0) };
	if (_stat_id_is_valid(&Var35))
	{
		_0x6a0184e904cdf25e(&Var35, iVar0);
	}
	func_768(iParam0);
	if (fParam6 > 0f)
	{
		if (func_413(iParam0, -839724752))
		{
			func_769(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_770(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

void func_291(int iParam0)
{
	if (func_413(iParam0, 1989861793))
	{
		iVar0 = func_771(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { func_772(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (func_773(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = func_774(iVar14, iVar1);
					if (iVar15 != iParam0 && func_412(iVar15, 0))
					{
						if (func_775(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				func_776(iVar1);
				if (bVar13)
				{
					func_777(iParam0);
				}
				else
				{
					func_196(306, 0);
				}
			}
		}
	}
}

void func_292()
{
	if (func_139() != -1)
	{
		return;
	}
	func_778();
	func_779();
	func_780();
	func_781();
	func_782();
	func_783();
	func_784();
}

void func_293(int iParam0)
{
	func_785(iParam0, 1, 1, -142743235, 1);
	if (func_786(iParam0))
	{
		func_787(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_789(func_788(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_790(-2124052603);
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = &Global_1946804->f_57[iVar1];
		*Global_1946804->f_1616.f_1[iVar1] = { vVar4 };
		Global_1946804->f_1616.f_1[iVar1]->f_2 = (Global_1946804->f_1497.f_1[iVar1]->f_2 || Global_1946804->f_1378.f_1[iVar1]->f_2);
		iVar1++;
	}
	if (func_791() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_792(&(Global_1946804->f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_792(&(Global_1946804->f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	*Global_1946804->f_1616.f_1[8] = { func_793(8, 0) };
	*Global_1946804->f_1616.f_1[9] = { func_793(9, 0) };
	*Global_1946804->f_1616.f_1[0] = { func_793(0, 0) };
	*Global_1946804->f_1616.f_1[2] = { func_793(2, 0) };
	*Global_1946804->f_1616.f_1[3] = { func_793(3, 0) };
	*Global_1946804->f_1616.f_1[1] = { func_793(1, 0) };
	*Global_1946804->f_1616.f_1[5] = { func_793(5, 0) };
	*Global_1946804->f_1616.f_1[6] = { func_793(6, 0) };
	*Global_1946804->f_1616.f_1[7] = { func_793(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_794(iVar8, iVar0))
				{
					func_795(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_794(iVar8, iVar0))
		{
			func_795(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
		}
		iVar0++;
	}
	if (bVar7)
	{
		iVar8 = 0;
		while (iVar8 < 39)
		{
			if (iParam0 == &Global_1946804->f_1497.f_1[iVar8])
			{
				*Global_1946804->f_1497.f_1[iVar8] = { *Global_1946804->f_1616.f_1[iVar8] };
				bVar3 = true;
			}
			if (iParam0 == &Global_26796.f_627.f_1.f_1.f_1[iVar8])
			{
				*Global_26796.f_627.f_1.f_1.f_1[iVar8] = { *Global_1946804->f_1616.f_1[iVar8] };
				bVar3 = true;
			}
			if (bVar3)
			{
			}
			else
			{
				iVar8++;
			}
		}
	}
	else
	{
		if (iParam0 == &Global_1946804->f_1497.f_1[iVar8])
		{
			*Global_1946804->f_1497.f_1[iVar8] = { *Global_1946804->f_1616.f_1[iVar8] };
		}
		if (iParam0 == &Global_26796.f_627.f_1.f_1.f_1[iVar8])
		{
			*Global_26796.f_627.f_1.f_1.f_1[iVar8] = { *Global_1946804->f_1616.f_1[iVar8] };
		}
	}
	iVar1 = 0;
	while (iVar1 < 39)
	{
		*Global_1946804->f_1378.f_1[iVar1] = { *Global_1946804->f_1616.f_1[iVar1] };
		iVar1++;
	}
}

void func_294()
{
	iVar5 = 16;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_794(iVar5, iVar0);
		if (iVar1 == &Global_1946804->f_57[iVar5] || iVar1 == 0)
		{
			if (func_791() == -2125499975 || func_791() == -449205311)
			{
				vVar2.x = -2018863109;
				vVar2.f_1 = 1530758430;
				func_795(&vVar2, iVar5, iVar0);
			}
			else
			{
				vVar2.x = 1734931872;
				vVar2.f_1 = 1155669136;
				func_795(&vVar2, iVar5, iVar0);
			}
		}
		iVar0++;
	}
	vVar2.x = -2018863109;
	vVar2.f_1 = 1530758430;
	if (&Global_1946804->f_57[iVar5] == &Global_26796.f_627.f_1.f_1.f_1[iVar5] || 0 == &Global_26796.f_627.f_1.f_1.f_1[iVar5])
	{
		*Global_26796.f_627.f_1.f_1.f_1[iVar5] = { vVar2 };
	}
}

void func_295()
{
	_sc_feed_submit_preset_message(2, 2);
	if (is_orbis_version())
	{
		iVar0 = func_692(14);
		(*Global_1898441)[iVar0] = 14;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MUD1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MUD1_COM", 24);
	}
}

char* func_296(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "COMP_DUTCH";
		case 1:
			return "COMP_JOHN";
		case 2:
			return "COMP_JAVIER";
		case 3:
			return "COMP_BILL";
		case 4:
			return "COMP_UNCLE";
		case 5:
			return "COMP_HOSEA";
		case 6:
			return "COMP_MICAH";
		case 7:
			return "COMP_CHARLES";
		case 8:
			return "COMP_SEAN";
		case 9:
			return "COMP_LENNY";
		case 10:
			return "COMP_KIERAN";
		case 23:
			return "COMP_TRELAWNY";
		case 17:
			return "COMP_PEARSON";
		case 18:
			return "COMP_STRAUSS";
		case 13:
			return "COMP_ABIGAIL";
		case 14:
			return "COMP_JACK";
		case 16:
			return "COMP_MOLLY_OSHEA";
		case 19:
			return "COMP_SUSAN_GRIMSHAW";
		case 15:
			return "COMP_MARY_BETH";
		case 20:
			return "COMP_KAREN";
		case 22:
			return "COMP_TILLY";
		case 11:
			return "COMP_SADIE";
		case 24:
			return "COMP_CLEET";
		case 25:
			return "COMP_JOE";
		case 26:
			return "COMP_EAGLE_FLIES";
		case 12:
			if ((func_145((*Global_1835011)[59]->f_1, 1) || func_145((*Global_1347702)[1]->f_15, 1)) || func_242((*Global_1347702)[1]->f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_663(403634348, 1))
			{
				return "COMP_CAIN";
			}
			return "COMP_DOG";
		case 21:
			if (bParam1)
			{
				return "COMP_SWANSON_S";
			}
			else
			{
				return "COMP_SWANSON";
			}
			break;
	}
	return "";
}

void func_297(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = func_789(iParam0, 1);
	func_796(Global_1946804->f_1497.f_1[iVar0], 2, 6);
	func_796(Global_1946804->f_1378.f_1[iVar0], 2, 6);
	if (bParam1)
	{
		Global_1946804->f_1497.f_1[iVar0] = &Global_1946804->f_57[iVar0];
		Global_1946804->f_1497.f_1[iVar0]->f_1 = 0;
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		if (bParam2)
		{
			func_797(17, iParam0, 0, 0, 0);
		}
	}
	if (func_139() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_796(Global_26796.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
			if (bParam1)
			{
				Global_26796.f_26[iVar1]->f_1.f_1[iVar0] = &Global_1946804->f_57[iVar0];
				Global_26796.f_26[iVar1]->f_1.f_1[iVar0]->f_1 = 0;
			}
			iVar1++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_796(Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
			if (bParam1)
			{
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0] = &Global_1946804->f_57[iVar0];
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0]->f_1 = 0;
			}
			iVar1++;
		}
	}
}

void func_298()
{
	_sc_feed_submit_preset_message(2, 5);
	if (is_orbis_version())
	{
		iVar0 = func_692(17);
		(*Global_1898441)[iVar0] = 17;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA2_COM", 24);
	}
}

void func_299()
{
	_sc_feed_submit_preset_message(2, 6);
	if (is_orbis_version())
	{
		iVar0 = func_692(18);
		(*Global_1898441)[iVar0] = 18;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA3_COM", 24);
	}
}

int func_300(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_798(iParam1, 1, 0) };
		iParam3 = func_799(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	func_800(iParam3);
	return func_742(iParam0, iParam1, iParam2, iParam3, bParam4, bParam5, 1, 0, 1, 0);
}

bool func_301()
{
	return _unlock_is_unlocked(99890643);
}

void func_302(int iParam0)
{
	if (!func_410(iParam0))
	{
		return;
	}
	iVar0 = _get_weapon_unlock(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	_unlock_set_visible(iVar0, true);
}

bool func_303(int iParam0, int iParam1)
{
	if (!func_801(iParam0))
	{
		return false;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_802(iParam0);
	}
	if (iParam1 == -1)
	{
		return false;
	}
	return func_803(Global_40.f_9910[iParam1], 4);
}

void func_304(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_804(*iParam0);
	iVar1 = func_805(*iParam0);
	iVar2 = func_806(*iParam0);
	iVar3 = func_807(*iParam0);
	iVar4 = func_808(*iParam0);
	iVar5 = func_809(*iParam0);
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
	iVar6 = func_810(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_810(iVar1, iVar0);
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
	func_811(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_305(int iParam0, int iParam1, bool bParam2)
{
	if (!func_801(iParam0))
	{
		return;
	}
	if (!func_812(iParam1))
	{
		return;
	}
	if (func_625(iParam1, 1))
	{
		return;
	}
	iVar0 = func_802(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (func_303(iParam0, -1))
	{
		return;
	}
	else
	{
		func_813(Global_40.f_9910[iVar0], 2);
	}
	Global_40.f_9910[iVar0]->f_4 = iParam1;
	if (bParam2)
	{
		if (!func_442(0, 0, 1))
		{
			func_337(0, 17);
		}
	}
}

void func_306()
{
	_sc_feed_submit_preset_message(2, 7);
	if (is_orbis_version())
	{
		iVar0 = func_692(19);
		(*Global_1898441)[iVar0] = 19;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MOB5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MOB5_COM", 24);
	}
}

void func_307()
{
	_sc_feed_submit_preset_message(2, 8);
	if (is_orbis_version())
	{
		iVar0 = func_692(20);
		(*Global_1898441)[iVar0] = 20;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_SAI1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_SAI1_COM", 24);
	}
}

bool func_308()
{
	return _unlock_is_unlocked(-121456797);
}

void func_309()
{
	_sc_feed_submit_preset_message(2, 9);
	if (is_orbis_version())
	{
		iVar0 = func_692(21);
		(*Global_1898441)[iVar0] = 21;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA1_COM", 24);
	}
}

void func_310()
{
	_sc_feed_submit_preset_message(2, 10);
	if (is_orbis_version())
	{
		iVar0 = func_692(22);
		(*Global_1898441)[iVar0] = 22;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA3_COM", 24);
	}
}

void func_311()
{
	_sc_feed_submit_preset_message(2, 12);
	if (is_orbis_version())
	{
		iVar0 = func_692(24);
		(*Global_1898441)[iVar0] = 24;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ODR5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ODR5_COM", 24);
	}
}

void func_312()
{
	_sc_feed_submit_preset_message(2, 13);
	if (is_orbis_version())
	{
		iVar0 = func_692(25);
		(*Global_1898441)[iVar0] = 25;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN1_COM", 24);
	}
}

void func_313()
{
	_sc_feed_submit_preset_message(2, 14);
	if (is_orbis_version())
	{
		iVar0 = func_692(27);
		(*Global_1898441)[iVar0] = 27;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MAR51_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MAR51_COM", 24);
	}
}

void func_314()
{
	_sc_feed_submit_preset_message(2, 15);
	if (is_orbis_version())
	{
		iVar0 = func_692(28);
		(*Global_1898441)[iVar0] = 28;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ABI21_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ABI_21_COM", 24);
	}
}

bool func_315(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_316(int iParam0)
{
	return (Global_40.f_12019.f_4 && iParam0) != 0;
}

bool func_317(int iParam0, int iParam1, bool bParam2)
{
	if (!func_412(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_711(iParam0);
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
		if (!func_814(iParam0, 1))
		{
			return false;
		}
	}
	return func_696(iParam0, 0, bParam2) >= iParam1;
}

void func_318(int iParam0)
{
	if (func_47(32768))
	{
		return;
	}
	if (iParam0 < 0)
	{
		func_500(_create_var_string(2, "MISSION_COMPLETE_BANK_FEED", absi(iParam0)), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
		Global_1879514->f_14 = 1;
		Global_1879514->f_15 = 0;
	}
	else
	{
		func_500(_create_var_string(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
		Global_1879514->f_14 = 0;
		Global_1879514->f_15 = 1;
	}
}

void func_319()
{
	_sc_feed_submit_preset_message(2, 16);
	if (is_orbis_version())
	{
		iVar0 = func_692(29);
		(*Global_1898441)[iVar0] = 29;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BEE22_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BEE22_COM", 24);
	}
}

void func_320()
{
	_sc_feed_submit_preset_message(2, 17);
	if (is_orbis_version())
	{
		iVar0 = func_692(26);
		(*Global_1898441)[iVar0] = 26;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN2_COM", 24);
	}
}

void func_321()
{
	_sc_feed_submit_preset_message(2, 11);
	if (is_orbis_version())
	{
		iVar0 = func_692(23);
		(*Global_1898441)[iVar0] = 23;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOC_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOC_COM", 24);
	}
}

void func_322()
{
	_sc_feed_submit_preset_message(2, 3);
	if (is_orbis_version())
	{
		iVar0 = func_692(15);
		(*Global_1898441)[iVar0] = 15;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOW3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOW3_COM", 24);
	}
}

void func_323()
{
	_sc_feed_submit_preset_message(2, 4);
	if (is_orbis_version())
	{
		iVar0 = func_692(16);
		(*Global_1898441)[iVar0] = 16;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DUT1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DUT1_COM", 24);
	}
}

void func_324()
{
	if (func_815() > 1)
	{
		func_816();
	}
	else
	{
		if (!_unlock_is_visible(-707360575))
		{
			_unlock_set_visible(-707360575, true);
			func_196(444, 1);
		}
		if (!_unlock_is_visible(-1201174711))
		{
			_unlock_set_visible(-1201174711, true);
			func_196(447, 1);
		}
		if (!_unlock_is_visible(151582343))
		{
			_unlock_set_visible(151582343, true);
			func_196(448, 1);
		}
		if (!_unlock_is_visible(-642492359))
		{
			_unlock_set_visible(-642492359, true);
			func_196(450, 1);
		}
		if (!_unlock_is_visible(5171247))
		{
			_unlock_set_visible(5171247, true);
			func_196(452, 1);
		}
	}
}

bool func_325(int iParam0)
{
	return func_817(iParam0, 4, 1);
}

void func_326(int iParam0)
{
	func_818(iParam0, 4, 1);
}

void func_327(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_326 = iParam0;
	Var0 = { func_270(-160912108) };
	stat_id_set_int(&Var0, iParam0, true);
}

void func_328(int iParam0)
{
	if (func_47(32768))
	{
		return;
	}
	if (!func_254(iParam0))
	{
		return;
	}
	func_659(Global_1935630, 8192);
	iVar2 = 1;
	switch (func_255(iParam0))
	{
		case 1:
			func_498(func_727(909007663, -587839005), 1);
			iVar0 = func_257(iParam0);
			func_498(func_270(-634848880), 1);
			switch (func_685(iVar0))
			{
				case 0:
					func_498(func_727(909007663, 1325140787), 1);
					break;
				case 1:
					func_498(func_727(909007663, 2101241783), 1);
					break;
				case 2:
					func_498(func_727(909007663, -1296936294), 1);
					break;
				case 3:
					func_498(func_727(909007663, -798388728), 1);
					break;
				case 4:
					func_498(func_727(909007663, -1787586531), 1);
					break;
				case 5:
					func_498(func_727(909007663, -1002834519), 1);
					break;
				case 6:
					func_498(func_727(909007663, -50600144), 1);
					break;
				case 7:
					func_498(func_727(909007663, -348503123), 1);
					break;
				case 8:
					func_498(func_727(909007663, -528798161), 1);
					break;
				default:
					iVar2 = 0;
					break;
			}
			if (iVar0 == 7)
			{
				func_498(func_727(909007663, -406093146), 1);
			}
			if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1835011)[iVar0]->f_8))))
			{
				func_498(func_727(909007663, 532323983), 1);
			}
			break;
		case 8:
			iVar1 = func_257(iParam0);
			if (func_53((*Global_1347702)[iVar1]->f_12, 1))
			{
				func_498(func_270(-634848880), 1);
			}
			if (func_53((*Global_1347702)[iVar1]->f_12, 4) || iVar1 == 59)
			{
				if (func_53((*Global_1347702)[iVar1]->f_12, 1))
				{
					func_498(func_727(909007663, -587839005), 1);
				}
				else
				{
					func_498(func_727(909007663, -2049243343), 1);
				}
			}
			if (func_53((*Global_1347702)[iVar1]->f_12, 1))
			{
				switch (func_686(iVar1))
				{
					case 0:
						func_498(func_727(909007663, 1325140787), 1);
						break;
					case 1:
						func_498(func_727(909007663, 2101241783), 1);
						break;
					case 2:
						func_498(func_727(909007663, -1296936294), 1);
						break;
					case 3:
						func_498(func_727(909007663, -798388728), 1);
						break;
					case 4:
						func_498(func_727(909007663, -1787586531), 1);
						break;
					case 5:
						func_498(func_727(909007663, -1002834519), 1);
						break;
					case 6:
						func_498(func_727(909007663, -50600144), 1);
						break;
					case 7:
						func_498(func_727(909007663, -348503123), 1);
						break;
					case 8:
						func_498(func_727(909007663, -528798161), 1);
						break;
					default:
						iVar2 = 0;
						break;
				}
				if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1347702)[iVar1]->f_3))))
				{
					func_498(func_727(909007663, 532323983), 1);
				}
			}
			else if (func_53((*Global_1347702)[iVar1]->f_12, 4))
			{
				if (func_53((*Global_1347702)[iVar1]->f_12, 4194304))
				{
				}
				else if (!func_53((*Global_1347702)[iVar1]->f_12, 512))
				{
					func_498(func_727(909007663, 551192206), 1);
				}
				else
				{
					func_498(func_727(909007663, -406093146), 1);
				}
			}
			break;
	}
}

void func_329()
{
	if (func_139() != -1)
	{
		return;
	}
	if (&Global_1956575 != 2)
	{
		return;
	}
	if (Global_1956575->f_4)
	{
		return;
	}
	if (!func_819(64))
	{
		return;
	}
	else if (func_619(&Global_1935630, 131072))
	{
		return;
	}
	else if ((func_442(0, 0, 1) || func_820()) || func_288())
	{
		return;
	}
	iVar0 = func_287();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (_spactionproxy_get_next_pending_buy_action(&uVar4))
	{
		if (!_spactionproxy_process_action(uVar4, func_821(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		func_251(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		func_251(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		func_822(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		func_337(0, -1);
	}
	if (iVar2 > 0)
	{
		func_647("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	func_823(1, 0);
	Global_1956575->f_4 = 1;
}

void func_330(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (func_47(32768))
	{
		return;
	}
	func_824(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
	if (bParam2)
	{
		if (!_unlock_is_unlocked(-843169622))
		{
			Global_1879514->f_12 = 1;
		}
		else
		{
			Global_1879514->f_12 = 0;
		}
		func_825(iParam0, iParam1, fParam3, iParam4);
	}
}

int func_331(int iParam0)
{
	if (!func_254(iParam0))
	{
		return -1;
	}
	return func_826(iParam0);
}

int func_332(int iParam0, int iParam1)
{
	if (!func_827(iParam0))
	{
		return 0;
	}
	if (!func_691())
	{
		return 0;
	}
	if (!func_828(iParam0, &iVar0, &iVar1))
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

int func_333(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_94(1330954593, 0, -1);
		case 1:
			return func_94(1330954593, 0, -1);
		case 2:
			return func_94(1330954593, 0, -1) * 2;
		case 4:
			return func_94(1330954593, 0, -1);
		case 5:
			return func_94(1330954593, 0, -1);
		case 6:
			return func_94(1330954593, 0, -1) * 2;
		case 12:
			return 75000;
		case 8:
			return func_94(1330954593, 0, -1) * 3;
		case 9:
			return func_94(1330954593, 0, -1) * 3;
		case 10:
			return func_94(1330954593, 0, -1) * 3;
		case 11:
			return func_94(1330954593, 0, -1);
		default:
			break;
	}
	return 0;
}

int func_334(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_5;
	}
	return Global_1058888->f_498[iParam0]->f_1;
}

void func_335(int iParam0, int iParam1, int iParam2)
{
	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_139() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	_0xd5910ecf81a2278c(iParam0, iParam1, iParam2, &vVar0);
}

void func_336(char[4] cParam0)
{
	if (!Global_1879514->f_11)
	{
		iVar0 = func_339();
		iVar1 = get_hash_key(&cParam0);
		if (_0x57e798b54c45ee1a(iVar1) != 5 && iVar0 == 5)
		{
			if (func_255(Global_1879514->f_1) == 1)
			{
				func_332(5, 1);
			}
			else if (func_255(Global_1879514->f_1) == 8 && (func_53((*Global_1347702)[func_257(Global_1879514->f_1)]->f_12, 1) || func_53((*Global_1347702)[func_257(Global_1879514->f_1)]->f_12, 33554432)))
			{
				func_332(5, 1);
			}
		}
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), iVar0);
	}
	else
	{
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), 3);
	}
}

void func_337(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_829(&Global_0, 8);
	}
	if (!func_691() || func_139() != -1)
	{
		return;
	}
	func_829(&Global_0, 1);
}

void func_338(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

int func_339()
{
	iVar0 = func_830(Global_1879514->f_1);
	if (Global_1425247->f_53)
	{
		return 0;
	}
	if (func_831(iVar0))
	{
		if (Global_1879514->f_18)
		{
			return Global_1879514->f_19;
		}
		iVar1 = chal_mission_get_num_goals(iVar0);
		iVar2 = chal_mission_get_num_goals_complete(iVar0);
		if (iVar1 > 0)
		{
			iVar3 = ((100 * iVar2) / iVar1);
			if (iVar3 >= 100)
			{
				return 5;
			}
			else if (iVar3 >= 50)
			{
				return 4;
			}
			else
			{
				return 3;
			}
		}
	}
	return 3;
}

bool func_340(int iParam0)
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
		iVar0 = func_262(iParam0);
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

int func_341(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_12 & 1 != 0 || (*Global_1347702)[iParam0]->f_12 & 33554432 != 0)
	{
		return 1;
	}
	return 3;
}

void func_342(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (&Global_40.f_490.f_402[iParam0] - (Global_40.f_490.f_402[iParam0] && iParam1));
}

void func_343(int iParam0)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_45(iVar0) && Global_1347702[iVar0] == iParam0)
		{
			bVar1 = true;
			func_832(iVar0, 1);
		}
		else if (bVar1)
		{
		}
		else
		{
			iVar0++;
		}
	}
}

void func_344(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_12 & 67108864 != 0)
	{
		return;
	}
	iVar10 = func_250(iParam0, 0);
	iVar11 = iVar10;
	iVar12 = iVar10;
	if (iParam0 == 82 || iParam0 == 83)
	{
		iVar12 = get_hash_key("LAW_UI_DUTCH_GANG");
	}
	MemCopy(&cVar0, {(*Global_1347702)[iParam0]->f_3}, 8);
	StringConCat(&cVar0, "_DESC", 64);
	iVar13 = func_341(iParam0);
	_uilog_add_entry_hash(iVar13, func_252(iParam0), (*Global_1347702)[iParam0]->f_24, iVar12, get_hash_key(&cVar0), (*Global_1347702)[iParam0]->f_37);
	_uilog_set_entry_icon_texture(iVar13, func_252(iParam0), iVar11, get_hash_key("toast_log_blips"));
	if (!is_string_null_or_empty(sVar8) && !is_string_null_or_empty(sVar9))
	{
		_uilog_set_entry_brief_texture(iVar13, func_252(iParam0), get_hash_key(sVar8), get_hash_key(sVar9));
	}
	if (_uilog_is_entry_registered(iVar13, func_252(iParam0)))
	{
		func_46(iParam0, 4);
	}
}

char* func_345(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return _create_var_string(2, func_833(sParam1));
}

void func_346(int iParam0, char* sParam1, char* sParam2, float fParam3)
{
	if ((*Global_1347702)[iParam0]->f_12 & 67108864 != 0)
	{
		return;
	}
	iVar0 = func_341(iParam0);
	if (!_uilog_is_entry_registered(iVar0, func_252(iParam0)))
	{
		return;
	}
	_uilog_add_or_update_objective(iVar0, func_252(iParam0), get_hash_key(sParam1), sParam2, fParam3 >= 0.9f, false, false);
}

bool func_347(int iParam0, int iParam1)
{
	return (Global_40.f_490.f_402[iParam0] && iParam1) != 0;
}

void func_348(int iParam0, bool bParam1)
{
	if (!func_347(iParam0, 4))
	{
		return;
	}
	if (!_uilog_is_entry_registered(func_341(iParam0), func_252(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		_uilog_mark_entry_availability(func_341(iParam0), func_252(iParam0), 2, "");
		func_46(iParam0, 16);
	}
	else
	{
		if (func_347(iParam0, 8))
		{
			_uilog_mark_entry_availability(func_341(iParam0), func_252(iParam0), 1, "");
		}
		else
		{
			_uilog_mark_entry_availability(func_341(iParam0), func_252(iParam0), 0, "");
		}
		func_342(iParam0, 16);
	}
}

void func_349(int iParam0, bool bParam1)
{
	if ((*Global_1347702)[iParam0]->f_12 & 67108864 != 0)
	{
		return;
	}
	if (!func_347(iParam0, 4))
	{
		return;
	}
	if (!_uilog_is_entry_registered(func_341(iParam0), func_252(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		if (func_347(iParam0, 16))
		{
		}
		else
		{
			_uilog_mark_entry_availability(func_341(iParam0), func_252(iParam0), 1, "");
		}
		func_46(iParam0, 8);
	}
	else
	{
		if (func_347(iParam0, 16))
		{
		}
		else
		{
			_uilog_mark_entry_availability(func_341(iParam0), func_252(iParam0), 0, "");
		}
		func_342(iParam0, 8);
	}
}

char* func_350(int iParam0)
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

void func_351(int iParam0, int iParam1)
{
	if (!func_387(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_1 = ((*Global_1310750)[iParam0]->f_1 || iParam1);
}

void func_352(int iParam0, bool bParam1)
{
	if (func_92(iParam0, 0, 1))
	{
		set_blocking_of_non_temporary_events(iParam0, false);
		func_834(iParam0, 1088421888, 0, 0);
		if (!bParam1)
		{
			set_ped_as_no_longer_needed(&iParam0);
		}
	}
}

bool func_353(var uParam0, var uParam1)
{
	if (func_86(uParam0->f_3, 16777216))
	{
		if (func_835(*uParam1) != -1 || get_entity_model(*uParam1) == 1478983280)
		{
			return true;
		}
	}
	return false;
}

void func_354(var uParam0)
{
	set_ped_config_flag(*uParam0, 6, false);
	set_ped_config_flag(*uParam0, 4, false);
	set_ped_config_flag(*uParam0, 494, true);
}

void func_355(int iParam0, int iParam1, float fParam2, int iParam3, bool bParam4)
{
	if (!Global_1935630->f_12 && (!bParam4 || func_92(iParam0, 0, 1)))
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
			fVar2 = func_207(fParam2 >= 0f, fParam2, vdist(get_entity_coords(iParam0, true, false), Global_36));
			if (fVar2 > 25f && is_entity_occluded(iParam0))
			{
				func_836(&iParam0);
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

void func_356(var uParam0)
{
	if (_does_volume_exist(uParam0->f_171))
	{
		func_837(uParam0->f_171);
		_0xa1cfb35069d23c23(uParam0->f_171);
		_0x74c2b3dc0b294102(uParam0->f_171);
	}
	if (uParam0->f_51.f_7 != 0)
	{
		destroy_tracked_point(uParam0->f_51.f_7);
		uParam0->f_51.f_7 = 0;
	}
	func_838(uParam0);
	func_839(uParam0);
	func_840(uParam0);
	if (!func_841(uParam0))
	{
		if (_0xf6a8a652a6b186cd(uParam0->f_51.f_11))
		{
			_0xfdfecc6ee4491e11(uParam0->f_51.f_11);
		}
		func_65(uParam0->f_51, 0);
	}
	if (does_blip_exist(uParam0->f_51.f_6))
	{
		remove_blip(&(uParam0->f_51.f_6));
	}
	if (uParam0->f_48)
	{
		func_67();
	}
	if (!func_842(uParam0->f_3) && !func_86(uParam0->f_3, 256))
	{
		func_843(uParam0->f_3, 1, 0, 15, 0, 0, 0, 1);
	}
	func_562(uParam0->f_173);
	func_562(uParam0->f_172);
}

void func_357(var uParam0)
{
	if (does_blip_exist(uParam0->f_181))
	{
		remove_blip(&(uParam0->f_181));
	}
}

int func_358(int iParam0, int iParam1)
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
				Jump @3259; //curOff = 845
				switch (iParam1)
				{
					case 0:
						return 124534071;
					default:
						break;
				}
				return -2125510912;
				Jump @3259; //curOff = 878
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
				Jump @3259; //curOff = 925
				return 1004100858;
				Jump @3259; //curOff = 936
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
				Jump @3259; //curOff = 983
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
				Jump @3259; //curOff = 1030
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
				Jump @3259; //curOff = 1091
				return 1583531269;
				Jump @3259; //curOff = 1102
				return -728402510;
				Jump @3259; //curOff = 1113
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
				Jump @3259; //curOff = 1160
				switch (iParam1)
				{
					case 0:
						return -93589059;
					default:
						break;
				}
				return -110846632;
				Jump @3259; //curOff = 1193
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
				Jump @3259; //curOff = 1254
				return 856957155;
				Jump @3259; //curOff = 1265
				return 199192985;
				Jump @3259; //curOff = 1276
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
				Jump @3259; //curOff = 1351
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
				Jump @3259; //curOff = 1398
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
				Jump @3259; //curOff = 1445
				return -1065165983;
				Jump @3259; //curOff = 1456
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
				Jump @3259; //curOff = 1517
				return -1641231995;
				Jump @3259; //curOff = 1528
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
				Jump @3259; //curOff = 1575
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
				Jump @3259; //curOff = 1622
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
				Jump @3259; //curOff = 1669
				return -800701784;
				Jump @3259; //curOff = 1680
				return -1599472750;
				Jump @3259; //curOff = 1691
				return 239043929;
				Jump @3259; //curOff = 1702
				return -1534174498;
				Jump @3259; //curOff = 1713
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
				Jump @3259; //curOff = 1760
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
				Jump @3259; //curOff = 1807
				return 1895786957;
				Jump @3259; //curOff = 1818
				return -2058137475;
				Jump @3259; //curOff = 1829
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
				Jump @3259; //curOff = 1918
				return 598461796;
				Jump @3259; //curOff = 1929
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
				Jump @3259; //curOff = 1976
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
				Jump @3259; //curOff = 2051
				return 544369376;
				Jump @3259; //curOff = 2062
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
				Jump @3259; //curOff = 2109
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
				Jump @3259; //curOff = 2156
				switch (iParam1)
				{
					case 0:
						return 1723732770;
					default:
						break;
				}
				return 516059168;
				Jump @3259; //curOff = 2189
				switch (iParam1)
				{
					case 0:
						return -1862350799;
					default:
						break;
				}
				return 138359424;
				Jump @3259; //curOff = 2222
				return 1602493990;
				Jump @3259; //curOff = 2233
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
				Jump @3259; //curOff = 2322
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
				Jump @3259; //curOff = 2369
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
				Jump @3259; //curOff = 2416
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
				Jump @3259; //curOff = 2463
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
				Jump @3259; //curOff = 2510
				return 1762656414;
				Jump @3259; //curOff = 2521
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
				Jump @3259; //curOff = 2582
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
				Jump @3259; //curOff = 2643
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
				Jump @3259; //curOff = 2690
				return -2018341642;
				Jump @3259; //curOff = 2701
				switch (iParam1)
				{
					case 0:
						return 1901777355;
					default:
						break;
				}
				return 922910144;
				Jump @3259; //curOff = 2734
				switch (iParam1)
				{
					case 0:
						return -195996461;
					default:
						break;
				}
				return 1967427328;
				Jump @3259; //curOff = 2767
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
				Jump @3259; //curOff = 2814
				return -1618254924;
				Jump @3259; //curOff = 2825
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
				Jump @3259; //curOff = 2872
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
				Jump @3259; //curOff = 2919
				switch (iParam1)
				{
					case 0:
						return 1806437024;
					default:
						break;
				}
				return 1650308608;
				Jump @3259; //curOff = 2952
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
				Jump @3259; //curOff = 2999
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
				Jump @3259; //curOff = 3046
				return -2137572125;
				Jump @3259; //curOff = 3057
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
				Jump @3259; //curOff = 3104
				return -774894224;
				Jump @3259; //curOff = 3115
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
				Jump @3259; //curOff = 3162
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
				Jump @3259; //curOff = 3223
				switch (iParam1)
				{
					case 0:
						return -211653282;
					default:
						break;
				}
				return -301233792;
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

Vector3 func_359(vector3 vParam0, vector3 vParam3, float fParam6)
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

Vector3 func_360(vector3 vParam0, vector3 vParam3, float fParam6)
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

bool func_361(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_362(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_363(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_844(iParam0);
	}
	else
	{
		func_845(iParam0);
	}
}

var func_364(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_365(int iParam0)
{
	if (((func_366(iParam0, 1) && func_366(iParam0, 2)) && func_366(iParam0, 8)) && func_366(iParam0, 512))
	{
		return true;
	}
	return false;
}

bool func_366(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_367(int iParam0)
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

int func_368(bool bParam0)
{
	if (bParam0)
	{
		return func_846(Global_1359489->f_4);
	}
	get_group_size(func_847(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = get_ped_as_group_member(func_847(), iVar3);
		if (func_848(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

void func_369(var uParam0)
{
	func_849(uParam0, 256);
}

void func_370(var uParam0)
{
	func_849(uParam0, 2);
}

void func_371(var uParam0)
{
	if (*uParam0 != 0)
	{
		request_model(*uParam0, false);
	}
}

bool func_372(var uParam0)
{
	if (!func_850(uParam0->f_1))
	{
		return false;
	}
	if (uParam0->f_12 != 0)
	{
		if (!func_850(uParam0->f_12))
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

Vector3 func_373(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return 0f, 0f, 0f;
	}
	if (!func_387(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (func_851(iParam0) == 0)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = (func_852(iParam0) + iParam1);
	if (iVar0 >= 892)
	{
		return 0f, 0f, 0f;
	}
	return *Global_1310750->f_13358[iVar0];
}

void func_374(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_86(iParam0, 32))
	{
		if (func_853(iParam0, uParam1->f_4, &(uParam1->f_12)))
		{
			if (bParam4)
			{
				vVar1 = { func_854(Global_35, &(uParam1->f_12)) };
				if (!func_361(vVar1))
				{
					*uParam1 = { vVar1 };
				}
			}
		}
	}
	if (bParam2)
	{
		func_855(uParam1, bParam2);
	}
	if (bParam3)
	{
		fVar4 = func_451(iParam0);
		iVar0 = _create_volume_cylinder_with_custom_name(*uParam1, 0f, 0f, 0f, fVar4, fVar4, fVar4, func_452());
		if (func_856(Global_1310750[iParam0], 33554432))
		{
			func_454(iVar0, func_453(iParam0), 1, 0, 2, 0, -1082130432);
		}
		else
		{
			func_454(iVar0, func_453(iParam0), 1, 0, 8, 0, -1082130432);
		}
		if (func_86(iParam0, 1))
		{
			func_187(*uParam1 + Vector(1f, 0f, 0f), 25f, "Beat Inner", 1, 0, 32, 0, -1082130432);
		}
	}
	func_857(iParam0);
}

bool func_375(int iParam0, var uParam1)
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
			func_858(uParam1, *(*Global_1310750)[iParam0]->f_4.f_4[iVar0]);
		}
		iVar0++;
	}
	if (func_100(iParam0, 16))
	{
		_0xb8e3486d107f4194(*uParam1, 55f);
		_0x827a58ced9d4d5b4(*uParam1, 180f);
		fVar2 = to_float(func_859(iParam0));
		fVar1 = 60f;
	}
	else
	{
		_0x65d281985f2bdfc2(*uParam1, 35f);
		_0x827a58ced9d4d5b4(*uParam1, 65f);
		fVar2 = to_float(func_859(iParam0));
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

void func_376(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4)
{
	switch (func_860(iParam0))
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
			if (!func_86(iParam0, 1))
			{
				if (func_100(iParam0, 2))
				{
				}
			}
			func_861(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		case 2:
			func_862(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		case 3:
			func_862(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = 7f;
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		default:
			break;
	}
	if (func_170(iParam0))
	{
		*fParam2 = 40000f;
	}
}

Vector3 func_377(bool bParam0, int iParam1, var uParam2, var uParam3)
{
	fVar7 = 999999.9f;
	fVar8 = 0f;
	*bParam0 = 1;
	iVar0 = 0;
	while (iVar0 < func_851(iParam1))
	{
		if (!func_863(iParam1, iVar0))
		{
			vVar4 = { func_373(iParam1, iVar0) };
			if (!func_361(vVar4))
			{
				fVar8 = vdist(Global_36, vVar4);
				if (func_382(fVar8, iParam1))
				{
					*bParam0 = 0;
				}
				if (fVar8 < fVar7)
				{
					if (func_864(iParam1, vVar4, uParam2, uParam3))
					{
						fVar7 = vdist(Global_36, vVar4);
						vVar1 = { vVar4 };
					}
				}
			}
		}
		iVar0++;
	}
	if (!func_361(vVar4))
	{
	}
	return vVar1;
}

int func_378(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, int iParam5)
{
	if (uParam0->f_8 >= iParam4)
	{
		if (bParam3)
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_69("BEAT_FAIL", 5000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam2 = 1;
	}
	*uParam1 = iParam5;
	uParam0->f_8++;
	return 0;
}

int func_379(int iParam0, vector3 vParam1)
{
	iVar0 = 0;
	while (iVar0 < func_851(iParam0))
	{
		vVar1 = { func_373(iParam0, iVar0) };
		if (func_362(vVar1, vParam1, 1056964608, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_380(var uParam0)
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

int func_381(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	vVar2 = { *uParam0 };
	func_865(Global_35, *uParam0, &(uParam0->f_37), 1061158912, 0, 0);
	if (func_866(&(uParam0->f_37), 500))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!func_361(*uParam0->f_12[iVar0]))
			{
				vVar5 = { *uParam0->f_12[iVar0] };
				vVar8 = { _0x83acc65d9acec5ef(Global_36, vVar2, vVar5, true) };
				if (vdist2(Global_36, vVar8) <= (35f * 35f) || vdist2(Global_36, *uParam0->f_12[iVar0]) <= (80f * 80f))
				{
					if (bParam4)
					{
						iVar1 = func_867(uParam0);
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
	return func_378(uParam0, uParam1, uParam2, bParam3, 16, 1000);
}

bool func_382(float fParam0, int iParam1)
{
	fVar3 = (fParam0 * fParam0);
	func_376(iParam1, &fVar0, &fVar1, &uVar2, 1);
	if (fVar3 > fVar1)
	{
		return false;
	}
	if (func_86(iParam1, 1))
	{
		if (fVar3 < fVar0)
		{
			return false;
		}
	}
	return true;
}

bool func_383(var uParam0, bool bParam1)
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

bool func_384(int iParam0, var uParam1, var uParam2, struct<7> Param3, bool bParam10)
{
	if (func_868(iParam0, *uParam2))
	{
		return false;
	}
	if (!func_869(iParam0, uParam2))
	{
		return false;
	}
	if (!func_870(Param3))
	{
		return false;
	}
	if (bParam10)
	{
		if (!func_871(*uParam2, Global_35))
		{
			return false;
		}
	}
	return true;
}

int func_385(var uParam0)
{
	return uParam0->f_51.f_4;
}

bool func_386(int iParam0, int iParam1, var uParam2)
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

bool func_387(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_388(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = _create_volume_cylinder_with_custom_name(vParam1, vParam4, vParam7, sParam10);
}

void func_389(int iParam0, int iParam1)
{
	if (func_872(iParam0))
	{
		return;
	}
	if (func_873(iParam0) == iParam1)
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

void func_390(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 0);
	if (bParam3)
	{
		func_76(&iParam1, 8192);
	}
	if (bParam4)
	{
		_0x2161278c6322f740(iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, iParam0);
	}
}

void func_391(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*iParam0 = _create_volume_box_with_custom_name(vParam1, vParam4, vParam7, sParam10);
}

int func_392(var uParam0, var uParam1)
{
	vVar0 = { *uParam0 };
	if (func_874(&uParam1))
	{
		return 1;
	}
	if (!func_875(&vVar0, 1, 10, 0))
	{
		return 0;
	}
	*uParam0 = { vVar0 };
	return 1;
}

bool func_393(var uParam0)
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

int func_394(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_876(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_395(int iParam0)
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

void func_396(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || func_92(iParam0, 0, 0))
	{
		decor_set_bool(iParam0, "HAS_VOICE", true);
		set_ambient_voice_name(iParam0, sParam1);
	}
}

bool func_397(var uParam0)
{
	return func_404(*uParam0, 4);
}

bool func_398(var uParam0)
{
	return func_404(*uParam0, 64);
}

bool func_399(var uParam0)
{
	return func_404(*uParam0, 8);
}

void func_400(int iParam0, bool bParam1, bool bParam2)
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

bool func_401(var uParam0)
{
	return func_404(*uParam0, 128);
}

bool func_402(var uParam0)
{
	return func_404(*uParam0, 2048);
}

bool func_403(var uParam0)
{
	return func_404(*uParam0, 1024);
}

bool func_404(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_405(var uParam0)
{
	return func_404(*uParam0, 256);
}

void func_406(int iParam0, bool bParam1)
{
	set_ped_config_flag(iParam0, 146, !bParam1);
	set_ped_config_flag(iParam0, 148, !bParam1);
}

bool func_407(var uParam0)
{
	return func_404(*uParam0, 512);
}

bool func_408(var uParam0)
{
	return func_404(*uParam0, 4096);
}

bool func_409(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_410(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_411(int iParam0)
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

bool func_412(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_413(int iParam0, int iParam1)
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

int func_414(int iParam0)
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

var func_415(int iParam0, int iParam1, int iParam2, int iParam3)
{
	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = iParam1;
	Var0.f_12[0] = iParam2;
	iVar23 = 13;
	return _0xa88e215ceb0435c0(iParam0, &Var0, iParam3, iVar23, 2, 0);
}

int func_416(int iParam0, bool bParam1, bool bParam2)
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

bool func_417(int iParam0)
{
	if (func_877(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

void func_418(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_417(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam2)
		{
			door_system_set_door_state(iParam0, 1);
		}
		door_system_set_open_ratio(iParam0, iParam1, iParam3);
	}
}

void func_419(int iParam0, bool bParam1)
{
	if (func_417(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 2 || bParam1)
		{
			door_system_set_door_state(iParam0, 2);
		}
	}
}

void func_420(int iParam0, bool bParam1)
{
	if (func_417(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam1)
		{
			door_system_set_door_state(iParam0, 1);
		}
	}
}

void func_421(int iParam0, bool bParam1)
{
	if (func_417(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 0 || bParam1)
		{
			door_system_set_door_state(iParam0, 0);
		}
	}
}

bool func_422()
{
	return true;
}

Vector3 func_423(var uParam0)
{
	return uParam0->f_51;
}

void func_424(var uParam0, int iParam1)
{
	uParam0->f_21 = iParam1;
}

bool func_425()
{
	return &Global_1935436 == 2;
}

void func_426(int iParam0)
{
	if (iParam0 >= &Global_1935436)
	{
		return;
	}
	Global_1935436->f_1 = iParam0;
}

void func_427(int iParam0, int iParam1)
{
	if (get_random_event_flag())
	{
		return;
	}
	Global_17504.f_3++;
	Global_17504.f_42[iParam0]->f_1++;
	if (func_86(iParam0, 2))
	{
		func_879(iParam0, func_878(iParam1));
	}
	else
	{
		func_881(iParam0, func_880());
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
	func_882(iParam0, (*Global_1310750)[iParam0]->f_36, fVar0, 1, 0);
	func_883(iParam0, 0);
	func_884(iParam0);
	func_268(1);
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
	if (!func_86(iParam0, 16))
	{
		func_428(iParam0, 0, 0, 0, 0);
	}
}

void func_428(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (bParam1)
	{
	}
	if (func_885() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0];
		if (((func_387(iVar1) && !func_86(iVar1, iParam2)) && (!bParam3 || !func_443(iVar1))) && (!bParam4 || !func_886(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_887(iVar0);
			}
		}
		iVar0++;
	}
}

int func_429(int iParam0)
{
	return (*Global_1310750)[iParam0]->f_39;
}

void func_430(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_177 != -1 || func_856(Global_1310750[uParam0->f_3], 16777216))
	{
		if (bParam2)
		{
			if (func_86(uParam0->f_3, 1073741824))
			{
				func_888(2, -1, 0, 0, 0);
			}
			else
			{
				func_888(1, -1, 0, 0, 0);
			}
		}
		else if (bParam1)
		{
			if (uParam0->f_45)
			{
				func_888(8, -1, 0, 0, 0);
			}
		}
		if (uParam0->f_177 != -1)
		{
			if (bParam2)
			{
				if (!func_889(1, uParam0->f_177))
				{
					func_890(16, uParam0->f_177);
					func_891(1, uParam0->f_177);
				}
				compendium_gang_encountered(func_892(uParam0->f_177));
			}
		}
	}
	else if (bParam2 || (bParam1 && uParam0->f_45))
	{
		func_888(8, -1, 0, 0, 0);
	}
}

int func_431()
{
	if (func_410(Global_1935630->f_44))
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
		else if (func_893())
		{
			return 1;
		}
	}
	return 0;
}

float func_432(var uParam0, bool bParam1)
{
	if (uParam0->f_119 == -1f)
	{
		if (func_86(uParam0->f_3, 1024))
		{
			fVar0 = 95f;
		}
		else if (func_86(uParam0->f_3, 2048))
		{
			fVar0 = 80f;
		}
		else if (func_86(uParam0->f_3, 4096))
		{
			fVar0 = 65f;
		}
		else if (func_86(uParam0->f_3, 8192))
		{
			fVar0 = 55f;
		}
		else if (func_86(uParam0->f_3, 16384))
		{
			fVar0 = 30f;
		}
		else
		{
			fVar0 = 85f;
		}
		if (func_86(uParam0->f_3, 1))
		{
		}
		else if (func_86(uParam0->f_3, 2))
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

int func_433(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, var uParam6)
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
			else if (func_894(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
					if (func_895(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
		uParam0->f_7 = (func_568() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

bool func_434(var uParam0, int iParam1, float fParam2)
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
	func_102(uParam0);
	return true;
}

bool func_435()
{
	return (Global_1894899 & 1 != 0 && func_2() != -1);
}

bool func_436(var uParam0, float fParam1)
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

bool func_437(int iParam0)
{
	if (iParam0 == -1)
	{
		return true;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = func_807(func_260());
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

bool func_438(int iParam0, int iParam1)
{
	return (func_429(iParam0) && iParam1) != 0;
}

bool func_439(int iParam0)
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
	if (iParam0 & 1 == 1 && func_896(iVar3))
	{
		return true;
	}
	if (iParam0 & 2 == 2 && func_897(iVar3))
	{
		return true;
	}
	if (iParam0 & 4 == 4 && func_898(iVar3))
	{
		return true;
	}
	if (iParam0 & 8 == 8 && func_899(iVar3))
	{
		return true;
	}
	if (iParam0 & 16 == 16 && func_900(iVar3))
	{
		return true;
	}
	if (iParam0 & 32 == 32 && func_901(iVar3))
	{
		return true;
	}
	if (iParam0 & 64 == 64 && func_902(iVar3))
	{
		return true;
	}
	return false;
}

bool func_440(bool bParam0)
{
	if (func_903(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_441(int iParam0)
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

bool func_442(int iParam0, bool bParam1, bool bParam2)
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
		if (func_904())
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
		iVar0 = func_257(&(Global_1898164->f_1[0]));
		if (func_45(iVar0) && func_53((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_254(&(Global_1898164->f_1[0])))
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

bool func_443(int iParam0)
{
	if (!func_387(iParam0))
	{
		return false;
	}
	if (func_905(64) && func_906(iParam0))
	{
		return true;
	}
	return (*Global_1310750)[iParam0]->f_46;
}

bool func_444()
{
	return Global_1894899 & 4 != 0;
}

int func_445(int iParam0)
{
	if (!func_528(iParam0))
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

bool func_446(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return false;
	}
	return true;
}

bool func_447(vector3 vParam0, int iParam3)
{
	if (!func_446(iParam3))
	{
		return false;
	}
	if (_does_volume_exist((*Global_1392194)[iParam3]->f_5))
	{
		return _0xf256a75210c5c0eb((*Global_1392194)[iParam3]->f_5, vParam0);
	}
	return false;
}

bool func_448(vector3 vParam0)
{
	if (func_361(vParam0))
	{
		return false;
	}
	fVar0 = func_207(func_435(), 6f, 22f);
	return _0x769bb7626b8cdb06(vParam0, fVar0, 1, 0, 16384);
}

bool func_449(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
						func_176(uParam0);
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
		func_176(uParam0);
		return true;
	}
	if (!bParam4)
	{
		if (!func_214(uParam0))
		{
			return false;
		}
		else if (is_scripted_speech_playing(Global_35) || is_any_speech_playing(Global_35))
		{
			return true;
		}
		if (!func_204(uParam0, fParam2))
		{
			return true;
		}
		if (func_214(uParam0))
		{
			func_146(uParam0);
		}
	}
	return false;
}

bool func_450(vector3 vParam0)
{
	return _0x769bb7626b8cdb06(vParam0, 0.5f, 0, 0, 16384);
}

float func_451(int iParam0)
{
	if (!func_387(iParam0))
	{
		return 0f;
	}
	if (!func_907(iParam0))
	{
		return 0f;
	}
	return (*Global_1310750)[iParam0]->f_44;
}

char* func_452()
{
	return "unnamed";
}

char* func_453(int iParam0)
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

int func_454(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (!_does_volume_exist(iParam0))
	{
		return 0;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	vVar3 = { _0x3e2a25b2416dd67e(iParam0) };
	iVar6 = func_187(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

void func_455(int iParam0)
{
	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_908();
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
			func_909(&(Global_1935630->f_34), &(Global_1935630->f_39));
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

var func_456(int iParam0)
{
	return &(Global_1109400->f_276[iParam0]);
}

bool func_457(int iParam0)
{
	iVar0 = Global_1935630->f_40;
	if (func_139() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_910(iParam0);
		}
	}
	else if (!does_entity_exist(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_910(iParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_484(iVar0) == -1)
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

void func_458(int iParam0)
{
	if (*iParam0 & 8 != 0 || *iParam0 & 16 != 0)
	{
		func_911(iParam0);
	}
}

bool func_459(int iParam0, int iParam1, int iParam2)
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
		iVar1 = func_484(iParam2);
	}
	else
	{
		iVar1 = func_483(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_484(iParam0);
	}
	else
	{
		iVar0 = func_483(iParam0);
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

float func_460(int iParam0, int iParam1)
{
	return func_25(iParam0, iParam1, 1, 1);
}

float func_461(int iParam0)
{
	return iParam0->f_26;
}

bool func_462(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_463(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_35(iParam0, 134217728);
	}
	else
	{
		func_76(iParam0, 134217728);
	}
}

bool func_464(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_25(iVar0, iParam0, 1, 1) <= 4f)
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
		if (_is_weapon_sniper(func_912(iVar0, 0)))
		{
			if (func_913(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_465(int iParam0)
{
	return iParam0->f_17;
}

bool func_466(int iParam0, int iParam1, float fParam2, float fParam3)
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

int func_467(int iParam0)
{
	return iParam0->f_18;
}

bool func_468(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (_is_weapon_sniper(func_912(iVar0, 0)))
		{
			if (func_914(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_469(bool bParam0, bool bParam1, bool bParam2)
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

float func_470(int iParam0)
{
	return iParam0->f_23;
}

int func_471(int iParam0)
{
	return iParam0->f_21;
}

int func_472(int iParam0)
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

bool func_473(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_915(iParam0, vParam4, 0.5f))
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

int func_474(int iParam0)
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
	if (func_916(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_475(int iParam0)
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

bool func_476(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_441(iParam1))
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

bool func_477(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_441(iParam1))
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

bool func_478(int iParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = 40f;
	if (func_441(iParam1))
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

bool func_479(int iParam0, int iParam1)
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

bool func_480(int iParam0)
{
	return !*iParam0 & 2 != 0;
}

bool func_481(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_215(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_482(int iParam0)
{
	return iParam0->f_24;
}

int func_483(int iParam0)
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

int func_484(int iParam0)
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

int func_485(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_479(Global_35, &iVar1))
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
		fVar2 = func_25(iParam0, player_ped_id(), 0, 1);
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
		if (func_25(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

bool func_486(int iParam0, int iParam1, bool bParam2)
{
	func_903(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_487(iParam1, iVar0))
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
				if (!bParam2 || !func_487(iParam1, iVar1))
				{
					if (func_215(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_487(int iParam0, int iParam1)
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

int func_488(int iParam0)
{
	return iParam0->f_20;
}

int func_489(int iParam0, int iParam1, bool bParam2, float fParam3)
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

int func_490()
{
	iVar0 = func_667();
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

int func_491(int iParam0)
{
	if (func_139() != -1)
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
	fVar1 = func_207(absf(fVar1) < 1f, func_207(fVar1 < 0f, -1f, 1f), fVar1);
	return ceil(fVar1);
}

bool func_492(int iParam0)
{
	if (!func_917(iParam0))
	{
		return false;
	}
	return func_918(iParam0);
}

int func_493(int iParam0)
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

int func_494()
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

void func_495(int iParam0, bool bParam1, int iParam2)
{
	func_919((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_920(iParam0);
}

void func_496(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), false);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), true);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_921(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_497(bool bParam0)
{
	bVar3 = false;
	if (func_922(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_923(iVar5, &iVar2, &iVar0))
			{
				if (!func_412(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_924(iVar2);
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
							if (func_711(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_490() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_490() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_925();
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

void func_498(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

char* func_499(int iParam0)
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

var func_500(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_926(sParam0, sParam1, iParam2);
	return uVar20;
}

var func_501(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

float func_502(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return -1f;
	}
	return func_25(Global_35, iParam0, bParam1, bParam2);
}

bool func_503(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_504(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
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
	return func_927(iParam0, &Var0);
}

int func_505(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_506(int iParam0)
{
	return iParam0;
}

void func_507(int iParam0)
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

bool func_508(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		return false;
	}
	return false;
}

var func_509(var uParam0, var uParam1, var uParam2)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

bool func_510(int iParam0)
{
	return iParam0 != 0;
}

float func_511(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

void func_512(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_513(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	if (!func_929(iParam0))
	{
		return;
	}
	iVar0 = func_930(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_931(iVar0);
	func_932(iVar0);
	iVar1 = get_id_of_this_thread();
	iVar2 = func_933(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_934(iVar0))
		{
			return;
		}
	}
	func_935(iVar0);
	set_ped_keep_task(iParam0, true);
	if (bParam1 && func_139() == -1)
	{
		if (!_0x88ad6cc10d8d35b2(iParam0))
		{
			set_entity_as_mission_entity(iParam0, true, true);
		}
	}
}

void func_514(int iParam0, int iParam1)
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
				if (func_411(iParam1[iVar0]))
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

bool func_515(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_516(int iParam0, int iParam1)
{
	if (!func_515(iParam0))
	{
		return false;
	}
	return (Global_1395482->f_2[iParam0] && iParam1) != 0;
}

int func_517(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_5;
}

void func_518(var uParam0, int iParam1, char* sParam2)
{
	if ((!is_entity_dead(*uParam0) && !is_string_null_or_empty(sParam2)) && has_anim_event_fired(*uParam0, get_hash_key(sParam2)))
	{
		func_37(*uParam0, iParam1, sParam2, 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
}

bool func_519()
{
	if (&Local_211.f_98[0] > 8f)
	{
		return false;
	}
	if (iVar404 < 3)
	{
		return false;
	}
	if (iVar404 > 5)
	{
		return false;
	}
	return true;
}

int func_520(int iParam0, int iParam1, int iParam2)
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

void func_521()
{
	if (!func_3(iVar406, 4194304))
	{
		if (func_936())
		{
			func_937(0);
			func_35(&uLocal_408, 4194304);
		}
	}
	else if (!func_936())
	{
		func_937(1);
		func_76(&uLocal_408, 4194304);
	}
}

int func_522(int iParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	iVar0 = iParam9;
	func_938(&iVar0);
	if (func_3(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_939(iParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_3(iVar0, 134217728))
	{
		func_940(iParam1, uParam3, iParam0);
	}
	if (!*uParam4)
	{
		if (!is_bit_set(*iParam1, 25))
		{
			if (is_bit_set(*iParam1, 24))
			{
				if (!func_941(558))
				{
					func_196(558, 0);
				}
				set_bit(iParam1, 24);
				set_bit(iParam1, 25);
			}
		}
	}
	return iVar1;
}

void func_523(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_568() - fParam1);
	func_942(uParam0, 1);
	func_943(uParam0, 2);
	uParam0->f_2 = 0f;
}

char* func_524(int iParam0)
{
	if (func_944(iParam0))
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

void func_525(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
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
		if (func_152(iParam0->f_6))
		{
			if (is_bit_set(*iParam0, 1))
			{
				func_945(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_946(iParam0->f_6, iParam0->f_5, 0);
			}
			func_947(iParam0->f_6, 0, 1);
		}
		else
		{
			set_bit(iParam0, 14);
		}
		set_bit(iParam0, 0);
	}
	else
	{
		func_948(iParam0, iParam0->f_5);
		if (!is_bit_set(*iParam0, 13))
		{
			set_bit(iParam0, 0);
		}
	}
	set_bit(iParam0, 15);
}

void func_526(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_146(&(iParam0->f_18));
}

void func_527(bool bParam0)
{
	func_558(0, bParam0);
	func_558(1, bParam0);
	func_558(2, bParam0);
}

bool func_528(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

float func_529(vector3 vParam0, vector3 vParam3)
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

bool func_530(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

bool func_531(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	return is_ped_on_mount(iParam0);
}

void func_532(int iParam0)
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

void func_533(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam1;
}

bool func_534(var uParam0, int iParam1)
{
	if (func_218(&(uParam0->f_5), 5f))
	{
		return true;
	}
	if (func_3(uParam0->f_23, 2))
	{
		return true;
	}
	if (((!func_531(uParam0->f_1) && !func_230(uParam0->f_1, 501393341)) && !is_ped_in_any_vehicle(uParam0->f_1, true)) && !func_230(uParam0->f_1, -828834893))
	{
		return true;
	}
	return false;
}

bool func_535(var uParam0, int iParam1)
{
	if (func_218(&(uParam0->f_5), 4f))
	{
		return true;
	}
	if (!func_3(uParam0->f_23, 16384))
	{
		return true;
	}
	if (uParam0->f_1 != Global_35)
	{
		return true;
	}
	if (!func_949(&uVar0))
	{
		return true;
	}
	return false;
}

int func_536()
{
	if (!func_950())
	{
		return 0;
	}
	if (!func_951(&iVar0))
	{
		return 0;
	}
	if (!func_952(iVar0))
	{
		return 0;
	}
	return func_953(iVar0, 0);
}

bool func_537(var uParam0, int iParam1)
{
	if (func_218(&(uParam0->f_5), 4f))
	{
		return true;
	}
	if (func_3(uParam0->f_23, 4))
	{
		return true;
	}
	get_current_ped_weapon(uParam0->f_1, &iVar0, true, 0, false);
	get_current_ped_weapon(uParam0->f_1, &iVar1, true, 1, false);
	if (func_3(uParam0->f_23, 512) || (iVar0 == -1569615261 && iVar1 == -1569615261))
	{
		return true;
	}
	return false;
}

int func_538(int iParam0)
{
	iVar0 = func_954(iParam0);
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

bool func_539(var uParam0, int iParam1)
{
	if (func_218(&(uParam0->f_5), 15f))
	{
		return true;
	}
	if (func_3(uParam0->f_23, 4096) && func_230(uParam0->f_1, 1245594896))
	{
		return false;
	}
	if (func_3(uParam0->f_23, 256))
	{
		return true;
	}
	if (get_script_task_status(uParam0->f_1, -208384378, true) == 8)
	{
		return true;
	}
	return false;
}

bool func_540(int iParam0, vector3 vParam1, float fParam4, bool bParam5, float fParam6, bool bParam7)
{
	fVar0 = func_955(get_entity_heading(iParam0));
	fParam4 = func_955(fParam4);
	if (is_entity_at_coord(iParam0, vParam1, bParam5, bParam5, 2f, false, bParam7, 0) && absf((fVar0 - fParam4)) <= fParam6)
	{
		return true;
	}
	return false;
}

float func_541(int iParam0, vector3 vParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	vVar0 = { get_entity_coords(iParam0, true, false) };
	return (vVar0.z - vParam1.z);
}

int func_542(int iParam0, bool bParam1)
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

bool func_543(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_544(var uParam0)
{
	if (func_543(&(uParam0->f_3), 4))
	{
	}
	if (is_gameplay_hint_active())
	{
		if ((!func_956(uParam0) || func_543(&(uParam0->f_3), 4)) && !func_543(&(uParam0->f_3), 256))
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
	if (func_957(uParam0))
	{
		func_155();
	}
	if (!func_543(&(uParam0->f_3), 16))
	{
		if (func_214(uParam0))
		{
			if (func_958(uParam0) < uParam0->f_4)
			{
				set_ped_max_move_blend_ratio(player_ped_id(), 1f);
			}
		}
	}
}

bool func_545(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, float fParam5)
{
	if (bParam4 && is_ped_injured(iParam0))
	{
		return true;
	}
	if (func_959(iParam0, iParam1, fParam2, bParam3, bParam4, fParam5))
	{
		return true;
	}
	return false;
}

bool func_546(vector3 vParam0, var uParam3, float fParam4)
{
	if (!func_960(uParam3->f_7, uParam3->f_8))
	{
		return false;
	}
	if (func_543(&(uParam3->f_3), 1))
	{
		return false;
	}
	if (is_gameplay_hint_active())
	{
		return false;
	}
	fVar0 = func_215(Global_35, vParam0, 1);
	if (fVar0 > fParam4)
	{
		return false;
	}
	if (!func_961(vParam0, uParam3))
	{
		return false;
	}
	if (!func_543(&(uParam3->f_3), 2))
	{
		if (!is_sphere_visible(vParam0, 0.5f))
		{
			return false;
		}
		if (!func_962(vParam0, uParam3))
		{
			return false;
		}
	}
	return true;
}

void func_547(var uParam0, vector3 vParam1, float fParam4, int iParam5)
{
	if (_0xa24c1d341c6e0d53(1, 0, 0))
	{
		return;
	}
	set_gameplay_hint_fov(fParam4);
	fVar0 = func_963(vParam1, 1);
	if (!func_543(&(uParam0->f_3), 32))
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
	func_176(uParam0);
	func_964(&(uParam0->f_3), 1);
}

int func_548()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_193(iVar0, 1, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_549(int iParam0, int iParam1)
{
	if (func_193(iParam0, 1, 1))
	{
		func_849((*Global_1955500)[iParam0], iParam1);
	}
}

bool func_550(int iParam0)
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

int func_551(int iParam0, int iParam1)
{
	return func_965(&uVar0, iParam0, iParam1);
}

bool func_552(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_966(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_967(iParam0))
	{
		return false;
	}
	if (func_968(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_969(iParam0, 1)) || func_47(32768))
	{
		if (!func_969(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_970())
	{
		return false;
	}
	return true;
}

void func_553(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_554(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, bool bParam5, bool bParam6)
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

bool func_555(int iParam0, bool bParam1)
{
	if (func_92(iParam0, 0, 1))
	{
		return (is_scripted_speech_playing(iParam0) || (bParam1 && is_any_speech_playing(iParam0)));
	}
	return false;
}

bool func_556(float fParam0)
{
	if (func_971(1))
	{
		return true;
	}
	if (func_214(&uLocal_0) && !func_218(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

void func_557(int iParam0, char* sParam1)
{
	func_946(Local_529[iParam0]->f_6, sParam1, 0);
	Local_529[iParam0]->f_5 = sParam1;
}

void func_558(int iParam0, bool bParam1)
{
	func_606(Local_529[iParam0], bParam1, 0);
}

void func_559(var uParam0, int iParam1)
{
	uParam0->f_88 = (uParam0->f_88 || iParam1);
}

int func_560(int iParam0, bool bParam1)
{
	iVar0 = func_972();
	if (bParam1 && is_entity_dead(iVar0))
	{
		return -1;
	}
	return &Global_1955499;
}

void func_561(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = func_972();
	if (!is_entity_dead(iVar0))
	{
		iVar1 = 0;
		iVar2 = iParam0;
		if (iParam0 == -1)
		{
			iVar2 = func_560(iParam1, bParam2);
			if (iVar2 != -1)
			{
				iVar1 = (*Global_1955500)[iVar2]->f_2;
				if (func_973(iVar2, 512))
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

void func_562(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_563(int iParam0, int iParam1, int iParam2, vector3 vParam3, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
	iVar3 = func_368(1);
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		iVar5 = func_974(iVar4);
		if (!is_entity_dead(iVar5))
		{
			vVar0 = { vVar0 + get_entity_coords(iVar5, true, false) };
		}
		iVar4++;
	}
	vVar0 = { vVar0 / FtoV(to_float(iVar3)) };
	vVar6 = { vVar0 - _0xf70f00013a62f866(iParam2) };
	vVar9 = { func_975(iParam2, vVar6, 1065353216, 100) };
	func_976(iParam0, iParam1, iParam9, vVar9, vParam3, iParam6, iParam7, iParam8, iParam10, -1, 1, iParam11);
}

void func_564(int iParam0, int iParam1, vector3 vParam2, vector3 vParam5, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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
	func_976(iParam0, iParam1, iParam11, vParam2, vParam5, iParam8, iParam9, iParam10, iParam12, -1, iParam13, 1);
}

void func_565(int iParam0)
{
	if (iParam0 <= -1)
	{
		return;
	}
	func_977(iParam0);
	func_978(21);
}

bool func_566(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_567(var uParam0)
{
	return func_566(*uParam0, 2);
}

float func_568()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_569(char* sParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	func_69(sParam0, iParam1, 0, 1, sParam2, sParam3, sParam4, sParam5, iParam6);
}

struct<7> func_570(int iParam0, int iParam1, vector3 vParam2, vector3 vParam5, vector3 vParam8, int iParam11, bool bParam12, var uParam13)
{
	Var0.f_3 = -1;
	Var0.f_6 = 1;
	if (!does_entity_exist(iParam1))
	{
		return Var0;
	}
	if (func_362(vParam8, 0f, 0f, 0f, 1056964608, 1))
	{
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Var0 = _create_volume_cylinder_with_custom_name(vParam2, vParam5, vParam8, func_452());
			break;
		default:
			Var0 = _create_volume_cylinder_with_custom_name(vParam2, vParam5, vParam8, func_452());
			break;
	}
	Var0 = { func_979(iParam0, iParam1, Var0, iParam11, bParam12, uParam13) };
	return Var0;
}

bool func_571(struct<7> Param0)
{
	if (!func_40(Param0))
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

void func_572()
{
	Global_1357516 = 0;
}

void func_573(var uParam0, var uParam1)
{
	if (is_entity_dead(*uParam1))
	{
		return;
	}
	if (func_163(uParam0, 524288) && _0xa81d24ae0af99a5e(get_player_index()) > 0f)
	{
		iVar2 = func_980(*uParam1, 0, 1, 0);
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
		if (iVar0 == iVar1 && func_981(uParam0) == 0)
		{
			set_ped_reset_flag(Global_35, 159, true);
		}
	}
}

void func_574()
{
	disable_control_action(0, 1287709438, false);
	func_982(0);
	Global_1935689->f_6 = 1;
}

bool func_575(var uParam0)
{
	if (func_163(uParam0, 33554432))
	{
		return true;
	}
	if (_0xa24c1d341c6e0d53(0, 0, 0) || is_first_person_aim_cam_active())
	{
		return true;
	}
	return false;
}

void func_576(vector3 vParam0)
{
	if (!Global_1935630->f_12)
	{
		func_983(vParam0);
		func_984(vParam0);
	}
}

void func_577()
{
	disable_control_action(0, -1450761377, false);
	disable_control_action(0, -771458680, false);
	disable_control_action(1, -1450761377, false);
	disable_control_action(1, -771458680, false);
}

void func_578(int iParam0, float fParam1)
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
	if (!func_985(iParam0, 8))
	{
		disable_control_action(0, -640622144, false);
	}
	if (!func_985(iParam0, 4))
	{
		disable_control_action(0, -485697785, false);
	}
	if (!func_985(iParam0, 16))
	{
		disable_control_action(0, -128997553, false);
		disable_control_action(0, 130948705, false);
		disable_control_action(0, 42190210, false);
	}
	if (!func_985(iParam0, 128))
	{
		disable_control_action(0, -562475458, false);
	}
	if (!func_985(iParam0, 512))
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
	}
	if (!func_985(iParam0, 64))
	{
		disable_control_action(0, -620139643, false);
	}
	if (!(func_986(17) && func_215(Global_35, (*Global_1835011)[17]->f_18, 0) < 10f))
	{
		if (!func_985(iParam0, 2048))
		{
			disable_control_action(0, -822242784, false);
		}
	}
	if (!func_985(iParam0, 4096))
	{
		disable_control_action(0, -1664638556, false);
	}
	if (!is_entity_dead(Global_35))
	{
		if (!func_985(iParam0, 1024))
		{
			set_ped_reset_flag(Global_35, 2, true);
			set_ped_reset_flag(Global_35, 21, true);
		}
		if (!func_985(iParam0, 8))
		{
			set_ped_reset_flag(Global_35, 168, true);
		}
		set_ped_reset_flag(Global_35, 33, true);
		if (!func_985(iParam0, 32))
		{
			if (_get_ped_crouch_movement(Global_35))
			{
				_set_ped_crouch_movement(Global_35, false, 0, false);
			}
		}
	}
}

int func_579(var uParam0, var uParam1)
{
	if (func_575(uParam1))
	{
		return 1;
	}
	if (!func_214(&(uParam1->f_26)))
	{
		func_209(&(uParam1->f_26), 0);
	}
	switch (uParam1->f_59)
	{
		case 0:
			func_590(uParam0, uParam1, 0);
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
				func_591(uParam1, 3);
			}
			else
			{
				func_987(uParam0, uParam1);
				func_591(uParam1, 1);
			}
			break;
		case 1:
			func_988("DCS: INTRO START TO INTRO END");
			if (does_cam_exist(&(uParam1->f_20[1])))
			{
				set_cam_active(&(uParam1->f_20[1]), true);
			}
			render_script_cams(true, true, uParam0->f_84, true, false, 0);
			func_591(uParam1, 2);
			break;
		case 2:
			func_988("DCS: INTRO START TO INTRO END");
			if (!does_cam_exist(&(uParam1->f_20[1])) || !is_cam_interpolating(&(uParam1->f_20[1])))
			{
				func_988("DCS: INTRO END TO DUEL");
				if (does_cam_exist(&(uParam1->f_20[2])))
				{
					set_cam_active_with_interp(&(uParam1->f_20[2]), &(uParam1->f_20[1]), uParam0->f_85, 1, 1);
				}
				func_591(uParam1, 3);
			}
			break;
		case 3:
			func_988("DCS: INTRO END TO DUEL");
			if ((!does_cam_exist(&(uParam1->f_20[2])) || !is_cam_interpolating(&(uParam1->f_20[2]))) && (!does_cam_exist(&(uParam1->f_20[0])) || !is_cam_interpolating(&(uParam1->f_20[0]))))
			{
				if (!func_3(uParam0->f_88, 1024))
				{
					func_989();
				}
				func_146(&(uParam1->f_26));
				func_591(uParam1, 4);
				func_155();
				func_988("DCS: DUEL");
				return 1;
			}
			break;
		case 4:
			return 1;
	}
	return 0;
}

void func_580(var uParam0, var uParam1)
{
	if (func_575(uParam1))
	{
		return;
	}
	if (&uParam0->f_75[2])
	{
		func_988("DCS: DUEL ATTACHED");
		if (!is_entity_dead(*uParam0))
		{
			vVar6 = { get_entity_coords(*uParam0, true, false) };
			func_990(&vVar6, 1088421888);
		}
		if (!is_entity_dead(uParam0->f_1))
		{
			vVar3 = { get_entity_coords(uParam0->f_1, true, false) };
		}
		if (!func_361(*uParam0->f_51[2]))
		{
			fVar9 = func_511(vVar3, vVar6, 1);
			vVar0 = { _get_object_offset_from_coords(vVar3, fVar9, *uParam0->f_51[2]) };
		}
		else
		{
			fVar9 = func_511(vVar3, vVar6, 1);
			if (func_162(uParam0, 64))
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

bool func_581(var uParam0, var uParam1)
{
	if (is_entity_dead(*uParam0) && !is_entity_dead(uParam0->f_1))
	{
		func_512(uParam1, 4096);
		return true;
	}
	else if (is_entity_dead(uParam0->f_1) && !is_entity_dead(*uParam0))
	{
		func_512(uParam1, 4096);
		return true;
	}
	return false;
}

bool func_582(var uParam0, var uParam1)
{
	if (!func_3(Global_40.f_9145, 1))
	{
		func_559(uParam0, 4);
		uParam1->f_67 = 1;
		uParam0->f_89 = 3;
	}
	if (uParam0->f_89 == -1)
	{
		uParam0->f_89 = 0;
	}
	if (func_361(uParam0->f_42))
	{
		uParam0->f_42 = { get_entity_coords(*uParam0, true, false) };
	}
	if (func_361(uParam0->f_45))
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
		if (func_162(uParam0, 65536))
		{
			set_ped_config_flag(uParam0->f_1, 16, true);
			set_ped_can_ragdoll(uParam0->f_1, false);
			set_ped_config_flag(uParam0->f_1, 263, true);
			set_ragdoll_blocking_flags(uParam0->f_1, 4097);
		}
		if (func_162(uParam0, 131072))
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
				func_991(2);
			}
		}
		set_ped_using_action_mode(*uParam0, true, -1, 0);
	}
	func_992(uParam1, uParam0);
	func_993(uParam0, uParam1);
	iVar1 = func_149(Global_35, 1, 2, 0);
	if ((iVar1 == -1569615261 || iVar1 != uParam0->f_48) && !func_163(uParam1, 16777216))
	{
		func_994();
		func_512(uParam1, 16777216);
		func_995(*uParam0, uParam0->f_48, 0, 0, 2, 1, 0, 1056964608, 1065353216, -1, 1, 0, 0, 0);
	}
	set_current_ped_weapon(*uParam0, -1569615261, false, 0, false, false);
	set_current_ped_weapon(*uParam0, -1569615261, false, 1, false, false);
	task_swap_weapon(*uParam0, 1, true, 0, 0);
	iVar2 = 0;
	if (func_162(uParam0, 512))
	{
		iVar2 = 1;
	}
	if (!func_162(uParam0, 262144))
	{
		set_current_ped_weapon(uParam0->f_1, -1569615261, false, 0, false, false);
		set_current_ped_weapon(uParam0->f_1, -1569615261, false, 1, false, false);
		task_swap_weapon(uParam0->f_1, 1, true, 0, 0);
		func_995(uParam0->f_1, uParam0->f_49, 0, 0, iVar2, 1, func_162(uParam0, 512), 1056964608, 1065353216, -1, 1, 0, 0, 0);
	}
	func_996(uParam0->f_1);
	if (!func_997(uParam1->f_53))
	{
		uParam1->f_53 = { func_998() };
	}
	if (uParam0->f_50 == -1)
	{
		if (func_162(uParam0, 8))
		{
			if (func_162(uParam0, 512))
			{
				uParam0->f_50 = 34606;
			}
			else
			{
				uParam0->f_50 = 22798;
			}
		}
		else if (func_162(uParam0, 16))
		{
			uParam0->f_50 = 21030;
		}
	}
	if (!_does_item_have_valid_base(*uParam1))
	{
		*uParam1 = create_itemset(true);
	}
	func_999(uParam0, uParam1);
	if (!_does_volume_exist(uParam0->f_87))
	{
		uParam0->f_87 = func_1000(uParam0->f_42, uParam0->f_45, 2.5f, 5f, 2f, 0);
		add_to_itemset(uParam0->f_87, *uParam1);
	}
	return true;
}

int func_583(var uParam0, var uParam1)
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

int func_584(var uParam0, var uParam1)
{
	func_586(uParam0, uParam1);
	disable_control_action(0, 130948705, false);
	if (func_162(uParam0, 2))
	{
		return 1;
	}
	fVar0 = func_511(uParam0->f_42, uParam0->f_45, 1);
	iVar1 = 1;
	iVar2 = 1;
	if (!func_362(get_entity_coords(*uParam0, true, false), uParam0->f_42, 0.1f, 0))
	{
		iVar1 = 0;
		if (!func_230(Global_35, 242628503))
		{
			func_165(uParam1, 16384);
		}
	}
	if (!func_162(uParam0, 8388608) && !func_362(get_entity_coords(uParam0->f_1, true, false), uParam0->f_45, 0.1f, 0))
	{
		iVar1 = 0;
		if (!func_230(uParam0->f_1, 242628503))
		{
			func_165(uParam1, 32768);
		}
	}
	if (!func_1001(*uParam0, uParam0->f_1, 0.99f))
	{
		if (!func_230(Global_35, 242628503))
		{
			func_165(uParam1, 16384);
		}
		iVar2 = 0;
	}
	if (!func_1001(uParam0->f_1, *uParam0, 0.99f))
	{
		if (get_script_task_status(uParam0->f_1, 242628503, true) != 1)
		{
			func_165(uParam1, 32768);
		}
		iVar2 = 0;
	}
	if (iVar1 && iVar2)
	{
		if (func_575(uParam1))
		{
			iVar2 = func_1002(uParam1, uParam0);
		}
	}
	if (iVar1 && iVar2)
	{
		clear_ped_tasks(*uParam0, 1, 0);
		if (!func_162(uParam0, 8388608))
		{
			clear_ped_tasks(uParam0->f_1, 1, 0);
		}
		return 1;
	}
	if (!func_163(uParam1, 16384))
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
		task_turn_ped_to_face_entity(0, uParam0->f_1, 0, -1082130432, -1082130432, -1082130432);
		func_182(*uParam0, &iVar3, 0, 0, 1, 1);
		func_512(uParam1, 16384);
	}
	if (!func_163(uParam1, 32768))
	{
		task_swap_weapon(uParam0->f_1, 1, true, 0, 0);
		if (!func_162(uParam0, 8388608))
		{
			open_sequence_task(&iVar3);
			if (!func_362(get_entity_coords(uParam0->f_1, true, false), uParam0->f_45, 0.1f, 0))
			{
				task_follow_nav_mesh_to_coord(0, uParam0->f_45, 1f, -1, 0f, 512, (fVar0 + 180f));
			}
			task_turn_ped_to_face_entity(0, *uParam0, 0, -1082130432, -1082130432, -1082130432);
			func_182(uParam0->f_1, &iVar3, 0, 0, 1, 1);
		}
		func_964(&(uParam1->f_44.f_3), 2);
		func_188(uParam0->f_1, &(uParam1->f_44), 0f, 0f, 0f, 0, 1106247680, 30f, 99999, 4000, 1000, 0f, 1, 1, 1084227584);
		func_512(uParam1, 32768);
	}
	return 0;
}

void func_585(var uParam0, var uParam1, int iParam2)
{
	uParam1->f_57 = iParam2;
	func_1003(*uParam0, iParam2);
}

void func_586(var uParam0, var uParam1)
{
	if (!func_163(uParam1, 1024))
	{
		if (func_1005(*uParam0, &(uParam0->f_3), func_1004(), uParam0->f_86, 1097859072, 2, 1, 0, 0, 1, 1071644672))
		{
			if (does_entity_exist(uParam0->f_3))
			{
				set_ped_config_flag(uParam0->f_3, 136, true);
			}
			func_512(uParam1, 1024);
		}
	}
}

void func_587(var uParam0, var uParam1)
{
	if (is_entity_dead(uParam0->f_1))
	{
		func_39(uParam0, uParam1);
		func_168(uParam1, 9);
	}
	if (_does_volume_exist(uParam0->f_86))
	{
		if (!func_162(uParam0, 32768))
		{
			func_164(0, uParam0, uParam1, -1038090240, 1103626240);
			func_512(uParam1, 2);
		}
	}
	func_1006(uParam1, uParam0, *uParam0, uParam0->f_42, uParam0->f_45, uParam0->f_48);
	func_1007(uParam1, uParam0, uParam0->f_1, *uParam0, uParam0->f_45, uParam0->f_42, uParam0->f_49);
	Global_19 = 1;
	display_radar(false);
	if (is_screen_faded_out() && !is_screen_faded_in())
	{
		do_screen_fade_in(1000);
	}
	func_1008(*uParam0);
	func_512(uParam1, 8);
}

float func_588(var uParam0)
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

int func_589(char* sParam0, bool bParam1)
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

void func_590(var uParam0, var uParam1, bool bParam2)
{
	if (func_575(uParam1))
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
		if (!func_361(uParam0->f_45))
		{
			vVar10 = { uParam0->f_45 };
		}
		else if (!is_entity_dead(uParam0->f_1))
		{
			vVar10 = { get_entity_coords(uParam0->f_1, true, false) };
		}
		if (!func_361(*uParam0->f_51[2]))
		{
			vVar4 = { *uParam0->f_51[2] };
		}
		else
		{
			vVar4 = { _get_object_offset_from_coords(vVar7, func_511(vVar7, vVar10, 1), 0.8385f, -2.5071f, 0f) };
		}
		set_cam_coord(&(uParam1->f_20[2]), vVar4);
		if (&uParam0->f_75[2])
		{
			attach_cam_to_entity(&(uParam1->f_20[2]), Global_35, vVar4, true);
		}
		if (!func_361(*uParam0->f_61[2]))
		{
			set_cam_rot(&(uParam1->f_20[2]), *uParam0->f_61[2], 2);
		}
		else
		{
			fVar0 = func_511(vVar10, vVar7, 1);
			if (func_162(uParam0, 64))
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
			func_155();
			set_cam_active(&(uParam1->f_20[2]), true);
			render_script_cams(true, false, 3000, true, false, 0);
		}
	}
}

void func_591(var uParam0, int iParam1)
{
	func_176(&(uParam0->f_26));
	uParam0->f_59 = iParam1;
}

bool func_592(var uParam0, var uParam1)
{
	func_1009(uParam0, uParam1);
	if (uParam1->f_56 > 0)
	{
		func_1010(uParam0, uParam1);
	}
	switch (uParam1->f_56)
	{
		case 0:
			func_577();
			func_580(uParam0, uParam1);
			func_576(get_entity_coords(uParam0->f_1, true, false));
			if (func_162(uParam0, 32) || (!does_cam_exist(&(uParam1->f_20[2])) || !is_cam_interpolating(&(uParam1->f_20[2]))))
			{
				if (!does_entity_exist(uParam0->f_1))
				{
					return true;
				}
				if (!func_162(uParam0, 524288) && !_0xc8b29d18022ea2b7(uParam0->f_1))
				{
					func_1007(uParam1, uParam0, uParam0->f_1, *uParam0, uParam0->f_45, uParam0->f_42, uParam0->f_49);
					return false;
				}
				if (_0xc8b29d18022ea2b7(uParam0->f_1))
				{
					_0x3feb770d8ed9047a(uParam0->f_1);
				}
				func_1011(uParam0->f_89, uParam1);
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
					uParam1->f_24 = func_647("DUEL_HELP_DRAW_GUNSLINGER", 10000, 0, 0, 0, 1);
				}
				else
				{
					uParam1->f_24 = func_647("DUEL_HELP_DRAW_ALT", 10000, 0, 0, 0, 1);
				}
				play_sound_frontend("HUD_DRAW", "HUD_DUEL_SOUNDSET", true, 0);
				if (!func_162(uParam0, 1024))
				{
					_0x94a3c1b804d291ec(Global_35, 1, 0, 1, 1);
					_0x908bb14bce85c80e(Global_35);
					if (!func_162(uParam0, 524288))
					{
						_0x908bb14bce85c80e(uParam0->f_1);
					}
					set_entity_is_target_priority(uParam0->f_1, true, 50f);
					func_155();
					func_176(&(uParam1->f_35));
					uParam1->f_5 = _get_game_timer_non_scaled_clipped();
					if (!func_162(uParam0, 4194304))
					{
						_0x986f7a51ee3e1f92(uParam0->f_1, 1);
					}
					uParam1->f_72 = func_1012(uParam0);
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
				func_1013(uParam1, 3);
			}
			break;
		case 3:
			func_1014(uParam1);
			if (func_1015(uParam0, uParam1))
			{
				if (func_1016(uParam1->f_24))
				{
					func_29(1);
				}
				func_1017(uParam0, uParam1);
			}
			else
			{
				func_577();
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
			func_1018(uParam0, uParam1);
			func_1019(uParam0, uParam1);
			func_580(uParam0, uParam1);
			if (func_162(uParam0, 33554432))
			{
				if (_0xa54000d4bfd90bde(player_id()) && _0xccd9b77f70d31c9d(player_id()) > 1)
				{
					_0x5b637d6f3b67716a(uParam0->f_1);
					func_559(uParam0, 4194304);
				}
			}
			if (func_1020(uParam0, uParam1))
			{
				_remove_all_shocking_events_of_type(1722245163, false);
				func_512(uParam1, 2097152);
				if (func_161(uParam0->f_1, 0))
				{
					clear_ragdoll_blocking_flags(uParam0->f_1, 1);
				}
				if (func_1016(uParam1->f_25))
				{
					func_29(1);
				}
				switch (func_981(uParam1))
				{
					case 1:
						uParam1->f_62 = func_2();
						if (func_1021(uParam1->f_62))
						{
							func_1022(&(uParam0->f_1));
							func_1023(uParam1->f_62);
							func_1024(get_entity_coords(uParam0->f_1, true, false));
						}
						if (!func_163(uParam1, 1))
						{
							if (func_161(uParam0->f_1, 0))
							{
								set_ped_config_flag(uParam0->f_1, 243, true);
								if (!func_162(uParam0, 65536))
								{
									func_400(uParam0->f_1, 0, 0);
								}
								if (!func_162(uParam0, 4194304))
								{
									_0xe3639db78b3b5400(uParam0->f_1);
								}
							}
							remove_shocking_event(uParam1->f_4);
							uParam1->f_4 = add_shocking_event_at_position(1498498500, get_entity_coords(uParam0->f_1, true, false), -1f, 30f, 30f, -1f, -1f, -1, -1);
							func_512(uParam1, 1);
						}
						func_1013(uParam1, 4);
						break;
					case 2:
						if (!func_163(uParam1, 1))
						{
							fVar2 = 0.125f;
							if (func_161(uParam0->f_1, 0))
							{
								_0x5b637d6f3b67716a(uParam0->f_1);
								if (func_1025(uParam0, uParam1, 0))
								{
									if (func_149(uParam0->f_1, 1, 0, 0) != -1569615261)
									{
										_0xcef4c65de502d367(uParam0->f_1, 1, 0, 1, 0);
									}
									if (func_162(uParam0, 512))
									{
										_0x89f5e7adecccb49c(uParam0->f_1, "injured_left_arm");
									}
									else
									{
										_0x89f5e7adecccb49c(uParam0->f_1, "injured_right_arm");
									}
									fVar2 = 0.25f;
								}
								if (!func_162(uParam0, 524288))
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
							if (!func_162(uParam0, 536870912))
							{
								func_30(13, 0, 0, 0, uParam0->f_1, 0, 1065353216, 0);
							}
							_0xeed08a3a98b847e2(*uParam0, !func_162(uParam0, 256), fVar2);
							func_512(uParam1, 1);
						}
						func_1013(uParam1, 5);
						break;
					case 3:
						func_1026(uParam1);
						if (!func_163(uParam1, 1))
						{
							if (does_entity_exist(uParam0->f_1) && (func_162(uParam0, 524288) || _0xc8b29d18022ea2b7(uParam0->f_1)))
							{
								if (!func_162(uParam0, 524288))
								{
									_0x748d5e0d2a1a4c61(uParam0->f_1, 2f, 1);
								}
								_0x5b637d6f3b67716a(uParam0->f_1);
								func_512(uParam1, 1);
								set_player_invincible(player_id(), false);
								disable_attribute_overpower(Global_35, 0);
								if (is_player_control_on(player_id()))
								{
									set_player_control(player_id(), false, 4992, false);
								}
							}
							else
							{
								func_585(uParam0, uParam1, 4);
								if (does_entity_exist(uParam0->f_1))
								{
									_0x5b637d6f3b67716a(uParam0->f_1);
									if (!func_3(uParam0->f_88, 128))
									{
										task_combat_ped(uParam0->f_1, *uParam0, 0, 0);
										set_ped_keep_task(uParam0->f_1, true);
									}
								}
								func_66(uParam0, uParam1);
								func_1013(uParam1, 8);
							}
						}
						else
						{
							if (func_161(Global_35, 0))
							{
								_0x5b637d6f3b67716a(uParam0->f_1);
								func_1027(uParam0, uParam1);
							}
							if (!func_161(*uParam0, 9))
							{
								func_1013(uParam1, 6);
							}
						}
						break;
					case 5:
						func_1026(uParam1);
						if (!func_162(uParam0, 2097152))
						{
							func_400(uParam0->f_2, 0, 0);
						}
					case 4:
						if (!func_163(uParam1, 1))
						{
							_0xeed08a3a98b847e2(*uParam0, !func_162(uParam0, 256), 1040187392);
							if (does_entity_exist(uParam0->f_1))
							{
								_0x5b637d6f3b67716a(uParam0->f_1);
								if (_0xc8b29d18022ea2b7(uParam0->f_1))
								{
									_0xeed08a3a98b847e2(uParam0->f_1, !func_162(uParam0, 256), 1040187392);
								}
								if (!func_3(uParam0->f_88, 128))
								{
									if (func_3(uParam0->f_88, 16777216))
									{
										set_ped_config_flag(uParam0->f_1, 263, false);
										_0xcef4c65de502d367(uParam0->f_1, 0, 0, 0, 0);
										if (func_149(uParam0->f_1, 1, 0, 0) != -618550132)
										{
											_give_weapon_to_ped_2(uParam0->f_1, -618550132, 1, false, true, 4, false, 0.5f, 1f, 752097756, false, 0f, false);
										}
										if (!func_230(uParam0->f_1, -2055662961))
										{
											set_current_ped_weapon(uParam0->f_1, -618550132, false, 4, true, false);
											task_swap_weapon(uParam0->f_1, 1, false, 0, 0);
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
							func_512(uParam1, 1);
							func_1013(uParam1, 5);
						}
						break;
				}
			}
			break;
		case 5:
			if (func_1028(uParam1, uParam0))
			{
				uParam1->f_8 = _get_game_timer_non_scaled_clipped();
				func_1013(uParam1, 7);
			}
			break;
		case 4:
			if (func_1021(uParam1->f_62))
			{
				func_1023(uParam1->f_62);
			}
			if (func_228(Global_35, 0))
			{
				vVar3 = { -1f, 4f, 0.5f };
			}
			else
			{
				vVar3 = { -2f, -4f, 2f };
			}
			if (func_1029(uParam0, uParam1, *uParam0, uParam0->f_1, vVar3, 0) && (!func_1021(uParam1->f_62) || func_1023(uParam1->f_62)))
			{
				func_66(uParam0, uParam1);
				func_1013(uParam1, 8);
				return true;
			}
			break;
		case 6:
			func_66(uParam0, uParam1);
			func_1013(uParam1, 8);
			return true;
		case 7:
			func_1030();
			iVar6 = (_get_game_timer_non_scaled_clipped() - uParam1->f_8);
			if (func_162(uParam0, 4194304) || iVar6 > 1000)
			{
				func_66(uParam0, uParam1);
				func_1013(uParam1, 8);
				return true;
			}
			break;
		case 8:
			return true;
	}
	return false;
}

void func_593(var uParam0)
{
	if (is_entity_dead(uParam0->f_1))
	{
		return;
	}
	if (!is_string_null_or_empty(&(uParam0->f_4)) && has_anim_event_fired(uParam0->f_1, get_hash_key(&(uParam0->f_4))))
	{
		func_504(uParam0->f_1, &(uParam0->f_4), 1744022339, 0, 1, 0, 0, 1);
	}
}

void func_594(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1031(iParam0, iParam1);
	Global_17504.f_1003[iVar0]->f_3 = iParam2;
}

int func_595(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	iVar0 = (get_entity_model(iParam0) + get_hash_of_this_script_name());
	_0xcb1a3864c524f784(iParam0, iVar0);
	return iVar0;
}

void func_596(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1031(iParam0, iParam1);
	Global_17504.f_1003[iVar0]->f_2 = iParam2;
}

void func_597(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1031(iParam0, iParam1);
	Global_17504.f_1003[iVar0]->f_1 = iParam2;
}

int func_598(bool bParam0)
{
	if (bParam0)
	{
		iVar0 = func_1032(1, 0, 0);
	}
	else
	{
		iVar0 = func_2();
	}
	return func_1033(iVar0);
}

void func_599(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1031(iParam0, iParam1);
	Global_17504.f_1003[iVar0]->f_4 = iParam2;
}

void func_600(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1031(iParam0, iParam1);
	Global_17504.f_1003[iVar0]->f_5 = iParam2;
}

int func_601(int iParam0)
{
	if (!func_1034(iParam0))
	{
		return 0;
	}
	return (*Global_1895087)[iParam0]->f_1;
}

int func_602(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (!func_1035(iParam0, 1))
	{
		return 0;
	}
	if (func_1037(func_1036(iParam0)))
	{
		iVar1 = func_601(iParam0);
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
	if ((bParam4 && !func_1038(iParam0)) && !is_entity_dead(iVar0))
	{
		set_ped_config_flag(iVar0, 171, bParam5);
		set_entity_as_mission_entity(iVar0, true, true);
	}
	func_1039(iParam0, 1);
	func_1040(iParam0);
	if (bParam3)
	{
		func_1039(iParam0, 16);
	}
	if (!bParam2)
	{
	}
	return iVar0;
}

int func_603(int iParam0, int iParam1)
{
	if (iParam1 == 11)
	{
		return 101;
	}
	else if (iParam1 == 32)
	{
		return 126;
	}
	else if (iParam1 == 34)
	{
		return 127;
	}
	switch (iParam0)
	{
		case 79:
			switch (iParam1)
			{
				case 0:
					return 128;
				case 6:
					return 130;
				case 27:
					return 131;
				case 26:
					return 129;
				case 19:
					return 59;
				default:
					break;
			}
			break;
		case 38:
			switch (iParam1)
			{
				case 15:
					return 6;
				case 33:
					return 11;
				case 29:
					return 106;
				case 30:
					return 107;
				case 3:
					return 7;
				case 8:
					return 9;
				case 10:
					return 10;
				case 9:
					return 13;
				case 2:
					return 14;
				case 1:
					return 15;
				case 31:
					return 108;
				case 22:
					return 16;
				case 7:
					return 17;
				case 21:
					return 12;
				default:
					break;
			}
			break;
		case 98:
			switch (iParam1)
			{
				case 0:
					return 132;
				case 6:
					return 134;
				case 27:
					return 135;
				case 26:
					return 133;
				case 19:
					return 57;
				default:
					break;
			}
			break;
		case 69:
			switch (iParam1)
			{
				case 4:
					return 18;
				case 3:
					return 19;
				case 2:
					return 20;
				case 1:
					return 21;
				case 31:
					return 105;
				default:
					break;
			}
			break;
		case 71:
			switch (iParam1)
			{
				case 0:
					return 137;
				case 6:
					return 139;
				case 27:
					return 140;
				case 26:
					return 138;
				case 19:
					return 56;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 141;
				case 6:
					return 143;
				case 27:
					return 144;
				case 26:
					return 142;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 17:
					return 22;
				case 31:
					return 118;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 15:
					return 36;
				case 8:
					return 37;
				case 33:
					return 52;
				case 29:
					return 109;
				case 10:
					return 38;
				case 30:
					return 110;
				case 0:
					return 39;
				case 4:
					return 41;
				case 3:
					return 42;
				case 6:
					return 43;
				case 9:
					return 44;
				case 2:
					return 45;
				case 1:
					return 46;
				case 31:
					return 111;
				case 22:
					return 51;
				case 7:
					return 47;
				case 12:
					return 48;
				case 13:
					return 49;
				case 14:
					return 50;
				case 18:
					return 55;
				case 21:
					return 54;
				default:
					break;
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 15:
					return 25;
				case 33:
					return 33;
				case 29:
					return 112;
				case 10:
					return 26;
				case 4:
					return 27;
				case 3:
					return 28;
				case 6:
					return 29;
				case 2:
					return 30;
				case 31:
					return 113;
				case 22:
					return 32;
				case 1:
					return 31;
				default:
					break;
			}
			break;
		case 101:
			switch (iParam1)
			{
				case 9:
					return 35;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 18:
					return 4;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 2:
					return 23;
				case 1:
					return 24;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 145;
				case 26:
					return 146;
				case 6:
					return 147;
				case 27:
					return 148;
				case 19:
					return 58;
				default:
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 29:
					return 114;
				case 33:
					return 66;
				case 10:
					return 60;
				case 3:
					return 61;
				case 20:
					return 62;
				case 9:
					return 63;
				case 31:
					return 115;
				case 22:
					return 64;
				case 2:
					return 65;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 18:
					return 5;
				default:
					break;
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 15:
					return 68;
				case 8:
					return 69;
				case 33:
					return 70;
				case 29:
					return 102;
				case 10:
					return 72;
				case 30:
					return 103;
				case 0:
					return 73;
				case 3:
					return 74;
				case 6:
					return 75;
				case 9:
					return 76;
				case 2:
					return 77;
				case 31:
					return 104;
				case 1:
					return 78;
				case 22:
					return 80;
				case 20:
					return 79;
				default:
					break;
			}
			break;
		case 92:
			switch (iParam1)
			{
				case 30:
					return 116;
				case 4:
					return 82;
				case 2:
					return 86;
				case 1:
					return 85;
				case 31:
					return 117;
				case 9:
					return 84;
				default:
					break;
			}
			break;
		case 78:
			switch (iParam1)
			{
				case 29:
					return 120;
				case 6:
					return 0;
				case 2:
					return 2;
				case 31:
					return 121;
				case 22:
					return 1;
				case 1:
					return 3;
				default:
					break;
			}
			break;
		case 90:
		case 128:
			switch (iParam1)
			{
				case 18:
					return 34;
				default:
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 2:
					return 89;
				case 1:
					return 88;
				case 3:
					return 87;
				default:
					break;
			}
			break;
		case 65:
			switch (iParam1)
			{
				case 31:
					return 119;
				default:
					break;
			}
			break;
		case 82:
			switch (iParam1)
			{
				case 31:
					return 122;
				default:
					break;
			}
			break;
		case 110:
			switch (iParam1)
			{
				case 31:
					return 124;
				default:
					break;
			}
			break;
		case 115:
			switch (iParam1)
			{
				case 33:
					return 93;
				case 3:
					return 90;
				case 6:
					return 91;
				case 9:
					return 94;
				case 10:
					return 92;
				default:
					break;
			}
			break;
		case 120:
			switch (iParam1)
			{
				case 3:
					return 95;
				case 2:
					return 96;
				default:
					break;
			}
			break;
		case 123:
			switch (iParam1)
			{
				case 4:
					return 98;
				default:
					break;
			}
			break;
		case 117:
			switch (iParam1)
			{
				case 31:
					return 123;
				case 2:
					return 99;
				case 1:
					return 100;
				default:
					break;
			}
			break;
		case 113:
			switch (iParam1)
			{
				case 18:
					return 67;
				default:
					break;
			}
			break;
		case 127:
			switch (iParam1)
			{
				case 4:
					return 125;
				default:
					break;
			}
			break;
	}
	return -1;
}

bool func_604(int iParam0)
{
	if (!func_1041(iParam0))
	{
		return false;
	}
	iVar0 = func_1042(iParam0);
	if ((((((((((iVar0 == 2 && func_492(28)) || (iVar0 == 18 && iParam0 != 55)) || iVar0 == 1) || iVar0 == 11) || iParam0 == 69) || iVar0 == 33) || iVar0 == 20) || iVar0 == 19) || iVar0 == 9) || func_1043(iParam0))
	{
		return true;
	}
	return false;
}

int func_605(int iParam0)
{
	if (iParam0 == 15)
	{
		return 65539;
	}
	return 7;
}

void func_606(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_1044(iParam0, 13))
	{
		func_175(iParam0, 0);
	}
	else
	{
		func_1045(iParam0, 0);
	}
	if (func_152(iParam0->f_6))
	{
		if (bParam2)
		{
			func_153(&(iParam0->f_6), 0, 1);
		}
	}
}

void func_607(int* iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_1044(iParam0, 4))
		{
			func_153(&(iParam0->f_6), 1, 1);
			func_175(iParam0, 4);
		}
	}
	else if (func_1044(iParam0, 4))
	{
		func_1045(iParam0, 4);
		func_175(iParam0, 14);
	}
}

int func_608(int iParam0)
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

int func_609(int iParam0)
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

void func_610(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_35(iParam0, 4);
	}
	else
	{
		func_76(iParam0, 4);
	}
}

void func_611(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_35(iParam0, 8);
	}
	else
	{
		func_76(iParam0, 8);
	}
}

void func_612(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_35(iParam0, 32);
	}
	else
	{
		func_76(iParam0, 32);
	}
}

void func_613(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_35(iParam0, 64);
	}
	else
	{
		func_76(iParam0, 64);
	}
}

void func_614(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_35(iParam0, 1024);
	}
	else
	{
		func_76(iParam0, 1024);
	}
}

void func_615(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_35(iParam0, 1048576);
	}
	else
	{
		func_76(iParam0, 1048576);
	}
}

void func_616(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_617(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_45(iParam0))
	{
		return;
	}
	if (iParam2 == 1)
	{
		func_1046(iParam0);
	}
	if (func_645((*Global_1347702)[iParam0]->f_13, 256))
	{
		func_616(&((*Global_1347702)[iParam0]->f_13), 256);
	}
	if (func_53((*Global_1347702)[iParam0]->f_12, 1024))
	{
		func_56(&((*Global_1347702)[iParam0]->f_12), 1024);
	}
	if (iParam1 == 1)
	{
		func_248(iParam0, 0);
	}
	func_1047(iParam0);
	if (iParam3 == 1)
	{
		if (is_thread_active((*Global_1347702)[iParam0]->f_42, false))
		{
			force_cleanup_for_thread_with_this_id((*Global_1347702)[iParam0]->f_42, iParam4);
		}
		else
		{
			(*Global_1347702)[iParam0]->f_43 = 0;
		}
	}
}

int func_618(int iParam0)
{
	if (&Global_1898329 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (&Global_1898329 - 1))
	{
		if (Global_1898330[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_619(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_620(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

bool func_621(int iParam0)
{
	if (func_139() != -1)
	{
		return false;
	}
	if (!func_45(iParam0))
	{
		return false;
	}
	return func_145((*Global_1347702)[iParam0]->f_15, 1);
}

bool func_622(int iParam0, bool bParam1)
{
	if (func_139() != -1)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (&Global_40.f_450[iVar0] == iParam0)
		{
			if (!bParam1 || (*Global_1347702)[iVar0]->f_13 & 16384 == 0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_623(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_13 & 2 == 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			if (func_661(&((*Global_1347702)[iParam0]->f_29[iVar1])))
			{
				func_1049(&iVar0, func_1048(&((*Global_1347702)[iParam0]->f_29[iVar1])));
			}
			iVar1++;
		}
		if (iVar0 == 0)
		{
			func_644(&((*Global_1347702)[iParam0]->f_13), 2);
		}
		else if ((*Global_1347702)[iParam0]->f_12 & 1 != 0)
		{
			if (func_1051(iVar0, (*Global_1347702)[iParam0]->f_15, 1, (*Global_1347702)[iParam0]->f_27, func_1050()))
			{
				func_644(&((*Global_1347702)[iParam0]->f_13), 2);
			}
		}
		else
		{
			func_644(&((*Global_1347702)[iParam0]->f_13), 2);
		}
	}
}

int func_624(int iParam0)
{
	iVar0 = func_1052((*Global_1347702)[iParam0]->f_48);
	func_304(&iVar0, 0, 0, (*Global_1347702)[iParam0]->f_47, 0, 0, 0, 0);
	return iVar0;
}

bool func_625(int iParam0, bool bParam1)
{
	return func_1053(func_260(), iParam0, bParam1);
}

bool func_626(int iParam0, var uParam1)
{
	if (iParam0 == 90)
	{
		if (func_331((*Global_1347702)[iParam0]->f_15) != 0)
		{
			(*Global_1347702)[iParam0]->f_18 = 80f;
			*uParam1 = { 1015.113f, 159.7295f, 103.0175f };
			return true;
		}
	}
	else if (iParam0 == 96)
	{
		if ((*Global_1347702)[iParam0]->f_13 & 65536 != 0)
		{
			*uParam1 = { -1646.77f, -1362.89f, 83.4f };
			return true;
		}
		else
		{
			*uParam1 = { -1629.71f, -1338.377f, 82.0174f };
			return true;
		}
	}
	return false;
}

void func_627(var uParam0)
{
	*uParam0 = 0;
}

void func_628(int iParam0)
{
	if (func_138(179) || func_138(180))
	{
		if (does_blip_exist((*Global_1347702)[iParam0]->f_37))
		{
			if ((*Global_1347702)[iParam0]->f_37 == Global_1905944->f_5698)
			{
				func_1054(1);
			}
		}
	}
	if (func_1055(179))
	{
		func_27(179);
	}
	if (func_1055(180))
	{
		func_27(180);
	}
}

bool func_629(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_112(iParam0, bParam1, bParam2, bParam3))
	{
		return true;
	}
	if (bParam1)
	{
		if (_0x0bb6de7d23c60626(player_id()))
		{
			return true;
		}
	}
	return false;
}

void func_630(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

void func_631(int iParam0, int iParam1)
{
	if (!func_45(iParam0))
	{
		return;
	}
	func_1056(&((*Global_1347702)[iParam0]->f_14), iParam1);
	func_1056(&((*Global_1347702)[iParam0]->f_14), 2);
	func_1057(&((*Global_1347702)[iParam0]->f_12), 16384);
	func_616(&((*Global_1347702)[iParam0]->f_13), 32);
	if (iParam1 != 16384)
	{
		iVar0 = 0;
		while (iVar0 < Global_40.f_450)
		{
			if (func_45(&(Global_40.f_450[iVar0])))
			{
				if (&Global_40.f_450[iVar0] == iParam0)
				{
					Global_1430257 = iVar0;
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

void func_632(int iParam0, bool bParam1, vector3 vParam2)
{
	if (!func_45(iParam0))
	{
		return;
	}
	if ((*Global_1347702)[iParam0]->f_13 & 32 != 0)
	{
		return;
	}
	else if ((*Global_1347702)[iParam0]->f_13 & 4096 != 0)
	{
		if (bParam1)
		{
			return;
		}
	}
	func_628(iParam0);
	if ((*Global_1347702)[iParam0]->f_12 & 1048576 != 0 && (*Global_1347702)[iParam0]->f_13 & 2048 == 0)
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		if (bParam1)
		{
			remove_blip(&((*Global_1347702)[iParam0]->f_37));
		}
		func_249(iParam0, func_635(iParam0), 0, 1);
	}
	else if ((*Global_1347702)[iParam0]->f_18 > -1f)
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		if (bParam1)
		{
			remove_blip(&((*Global_1347702)[iParam0]->f_37));
		}
		func_249(iParam0, vParam2, 0, 1);
	}
	else if (!bParam1)
	{
		func_249(iParam0, vParam2, 0, 0);
	}
	_blip_set_modifier((*Global_1347702)[iParam0]->f_37, 724623647);
	func_644(&((*Global_1347702)[iParam0]->f_13), 4096);
}

int func_633(int iParam0)
{
	iVar0 = -1337945352;
	if (!func_45(iParam0))
	{
		return iVar0;
	}
	if ((*Global_1347702)[iParam0]->f_12 & 1 != 0)
	{
		iVar0 = 1673015813;
	}
	else if ((*Global_1347702)[iParam0]->f_12 & 512 != 0)
	{
		if (Global_40.f_1093 == Global_1347702[iParam0])
		{
			iVar0 = 2103462781;
		}
		else
		{
			iVar0 = -1337945352;
		}
	}
	else if (Global_40.f_1093 == Global_1347702[iParam0])
	{
		iVar0 = 2103462781;
	}
	else
	{
		iVar0 = -1337945352;
	}
	return iVar0;
}

bool func_634(int iParam0)
{
	if (func_139() != -1)
	{
		return false;
	}
	if (!func_45(iParam0))
	{
		return false;
	}
	if ((*Global_1347702)[iParam0]->f_12 & 1048576 != 0 && (*Global_1347702)[iParam0]->f_13 & 2048 != 0)
	{
		return false;
	}
	if ((*Global_1347702)[iParam0]->f_18 > -1f)
	{
		return true;
	}
	return false;
}

Vector3 func_635(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 1794.04f, -1314.792f, 43.0923f;
		case 26:
			return -235.2066f, 763.6583f, 117.085f;
		case 30:
			return 1288.87f, -1397.85f, 77.93f;
		case 32:
			return 1234.24f, -1425.58f, 71.18f;
		case 33:
			return 905.92f, -421.19f, 88.23f;
		case 36:
			return -2476.07f, 832.13f, 141.25f;
		case 38:
			return -329.32f, -366.6f, 87f;
		case 39:
			return 97.4f, -212.47f, 111.6f;
		case 43:
			return 2586.494f, -1009.154f, 43.24f;
		case 41:
			return 337.3075f, -684.5404f, 41.8362f;
		case 49:
			return -2178.646f, -245.6886f, 191.1569f;
		case 51:
			return -1709.38f, -335.07f, 176.95f;
		case 53:
			return 2480.1f, -1377.69f, 45.32f;
		case 56:
			return 2011.776f, -504.0132f, 40.983f;
		case 57:
			return 1383.38f, -1336.83f, 77.59f;
		case 65:
			return -2095.11f, 656.32f, 119.87f;
		case 69:
			return 2943.93f, 1377.15f, 43.22f;
		case 70:
			return 2945.42f, 1342.78f, 43.92f;
		case 77:
			return 2793.35f, -1174.5f, 46.89f;
		case 78:
			return 2734.359f, -1207.682f, 48.6752f;
		case 80:
			return 2740.808f, -1312.805f, 46.648f;
		case 81:
			return 2503.755f, -1164.531f, 48.1928f;
		case 84:
			return -73.18f, -392.3f, 70.84f;
		case 88:
			return 2480.53f, -399.62f, 41.42f;
		case 89:
			return 1576.261f, -251.85f, 79.21f;
		case 91:
			return 1496.348f, -1083.286f, 54.1105f;
		case 92:
			return 1407.31f, 316.83f, 88.9555f;
		case 94:
			return 1414.4f, 248.2f, 88.85f;
		case 101:
			return -1378.656f, -735.3399f, 90.8243f;
		case 102:
			return -1666.59f, 610.82f, 124.03f;
		case 103:
			return 1356.44f, 533.95f, 86.12f;
		case 104:
			return 2407f, -585.32f, 40.66f;
		case 105:
			return -219.25f, 212.93f, 94.15f;
		case 116:
			return 211.99f, 512.98f, 126.54f;
		case 117:
			return -329.2f, 797.9f, 116.89f;
		case 118:
			return -300.3652f, 814.9069f, 117.4111f;
		case 119:
			return -1043.989f, 434.5095f, 53.6802f;
		case 121:
			return 2520.88f, 421.94f, 65.91f;
		case 127:
			return 2834.68f, -1048.04f, 42.86f;
		case 133:
			return 2688.427f, -1121.766f, 49.6782f;
		case 135:
			return -576.08f, 524.9f, 97.86f;
		case 136:
			return 1248.01f, -1280.07f, 75.17f;
		case 143:
			return 2954.45f, 523.05f, 44.47f;
		case 144:
			return 2304.697f, -0.13289f, 45.70486f;
		case 151:
			return 556.271f, 172.08f, 133.3435f;
		case 152:
			return 556.271f, 172.08f, 133.3435f;
		case 146:
			return -585.6761f, -347.216f, 81.28532f;
		default:
			break;
	}
	return (*Global_1347702)[iParam0]->f_24;
}

void func_636(int iParam0)
{
	switch (func_139())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 || iParam0);
			break;
	}
}

void func_637(int iParam0)
{
	if (!func_634(iParam0))
	{
		if ((*Global_1347702)[iParam0]->f_13 & 16 != 0)
		{
			if ((*Global_1347702)[iParam0]->f_12 & 1 != 0)
			{
				if (does_blip_exist((*Global_1347702)[iParam0]->f_37))
				{
					_blip_set_modifier((*Global_1347702)[iParam0]->f_37, -1446646876);
				}
				func_644(&((*Global_1347702)[iParam0]->f_13), 32);
			}
		}
		else
		{
			if (does_blip_exist((*Global_1347702)[iParam0]->f_37))
			{
				_set_blip_flash_style((*Global_1347702)[iParam0]->f_37, -1446646876);
			}
			func_616(&((*Global_1347702)[iParam0]->f_13), 32);
		}
	}
}

void func_638(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_12 & 1 != 0)
	{
		_blip_set_modifier((*Global_1347702)[iParam0]->f_37, -1986290853);
		switch (iParam0)
		{
			case 140:
			case 142:
				_blip_set_modifier((*Global_1347702)[iParam0]->f_37, 495758964);
				break;
		}
	}
}

int func_639(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 5:
			return 4;
		case 6:
			return 79;
		case 0:
			return 43;
		case 2:
			return 98;
		case 4:
			return 58;
		case 1:
			return 71;
		case 3:
			return 9;
		case 7:
			return 22;
		case 8:
			return 37;
		default:
			break;
	}
	if (iParam0 != -1)
	{
	}
	return -1;
}

bool func_640(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		return does_blip_exist(&(Global_36308[iParam0]));
	}
	return false;
}

bool func_641(int iParam0)
{
	if (!func_1058(Global_40.f_4283))
	{
		if (!does_entity_exist(Global_35))
		{
			return true;
		}
		if (func_1059(iParam0))
		{
			if (vdist(Global_36, func_1060(iParam0)) < vdist(Global_36, (*Global_1888801)[iParam0]->f_15))
			{
				return get_distance_between_coords(Global_36, func_1060(iParam0), false) <= func_1061();
			}
		}
		return get_distance_between_coords(Global_36, (*Global_1888801)[iParam0]->f_15, false) <= func_1061();
	}
	return func_1062();
}

bool func_642(int iParam0, bool bParam1, int iParam2)
{
	if ((bParam1 && does_blip_exist((*Global_1347702)[iParam0]->f_37)) && (*Global_1347702)[iParam0]->f_12 & 1 != 0)
	{
		return (*Global_1347702)[iParam0]->f_27 == iParam2;
	}
	return false;
}

void func_643(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!func_254(iParam0))
	{
		return;
	}
	switch (func_255(iParam0))
	{
		case 1:
			iVar0 = func_257(iParam0);
			if (func_1063(iVar0, bParam1, bParam2, iParam3) && Global_1357549->f_1709 > 1)
			{
				if ((func_1064(iVar0, -1) && !(*Global_1835011)[iVar0]->f_70) && (*Global_1835011)[iVar0]->f_63 & 2 == 0)
				{
					iVar2 = 1986697381;
				}
				else
				{
					iVar2 = -592708248;
				}
			}
			else if ((func_1064(iVar0, -1) && !(*Global_1835011)[iVar0]->f_70) && (*Global_1835011)[iVar0]->f_63 & 2 == 0)
			{
				iVar2 = -1559907306;
			}
			else
			{
				iVar2 = 1673015813;
			}
			if ((*Global_1835011)[iVar0]->f_28 != iVar2)
			{
				_0xbd62d98799a3daf0((*Global_1835011)[iVar0]->f_27, iVar2);
				if (!func_1065(iVar0))
				{
					_blip_set_modifier((*Global_1835011)[iVar0]->f_27, -1986290853);
				}
				if (func_1066((*Global_1835011)[iVar0], 2))
				{
					_blip_set_modifier((*Global_1835011)[iVar0]->f_27, 724623647);
				}
				(*Global_1835011)[iVar0]->f_28 = iVar2;
			}
			break;
		case 8:
			iVar1 = func_257(iParam0);
			if (func_1067(iVar1, bParam1, bParam2, iParam3) && Global_1357549->f_1709 > 1)
			{
				switch (func_633(iVar1))
				{
					case -1337945352:
						iVar2 = 588610391;
						break;
					case 2103462781:
						iVar2 = -1032930804;
						break;
					case -1485222547:
						iVar2 = 13700166;
						break;
					case 1673015813:
						iVar2 = -592708248;
						break;
					default:
						iVar2 = 588610391;
						break;
				}
			}
			else
			{
				iVar2 = func_633(iVar1);
			}
			if ((*Global_1347702)[iVar1]->f_38 != iVar2)
			{
				_0xbd62d98799a3daf0((*Global_1347702)[iVar1]->f_37, iVar2);
				func_638(iVar1);
				(*Global_1347702)[iVar1]->f_38 = iVar2;
			}
			break;
	}
}

void func_644(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_645(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_646(int iParam0)
{
	if ((iParam0 == 97 || iParam0 == 99) || iParam0 == 6)
	{
		return true;
	}
	return false;
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

int func_648(int iParam0)
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

int func_649(int iParam0)
{
	return iParam0 & 31;
}

int func_650(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_651()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_652(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_653(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_1068(iParam2))
	{
		return -1;
	}
	if (iParam0 < 0 || iParam0 > 511)
	{
		return -1;
	}
	if (iParam1 < 0 || iParam1 > 255)
	{
		return -1;
	}
	if (iParam3 < 0 || iParam3 > func_651())
	{
		return -1;
	}
	iVar0 = func_652(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_655(iVar1, 0);
	func_666(iVar1, 0);
	func_1069(iVar1, 0);
	func_1070(iVar1, 0);
	func_1071(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_1072(iVar1, iParam4);
	}
	return iVar1;
}

int func_654(int iParam0)
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

void func_655(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_1073(iParam0);
	}
	else
	{
		func_1074(iParam0, iParam1);
	}
	func_1075();
}

int func_656(int iParam0)
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

int func_657(int iParam0)
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
	func_1076(iParam0, Global_1898164->f_162);
	return 1;
}

void func_658(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_659(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_660(int iParam0)
{
	iVar0 = func_1077(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_661(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

int func_662(int iParam0)
{
	if (!func_1078(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

bool func_663(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_1079(iParam0);
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_664(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == iParam0)
		{
			func_677(Global_40.f_4283.f_6[iVar0], bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_665(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_2;
	}
	return -1;
}

void func_666(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

int func_667()
{
	return Global_40.f_11095.f_35;
}

void func_668(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		func_1080(iParam0, 0);
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
		func_669(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_669(int iParam0)
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
			func_1080(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_1081(1);
	}
}

bool func_670(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

int func_671()
{
	iVar0 = func_1052((*Global_1347702)[9]->f_15);
	iVar1 = func_1052((*Global_1835011)[69]->f_1);
	if (func_1053(iVar0, iVar1, 1))
	{
		return 0;
	}
	return 1;
}

bool func_672(int iParam0)
{
	if (!func_1082(iParam0))
	{
		return false;
	}
	return func_145((*Global_1835011)[iParam0]->f_1, 1);
}

int func_673(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_1083(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_1084(iVar6);
	}
	return iVar5;
}

int func_674(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_1085(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_675(int iParam0, bool bParam1)
{
	func_1086(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		set_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
	else
	{
		clear_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
}

bool func_676(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return false;
		case 1:
			return true;
		case 2:
			return true;
		case 3:
			return true;
		case 4:
			return true;
		case 5:
			return false;
		case 7:
			return false;
		case 9:
			return true;
		case 10:
			return false;
		case 11:
			return true;
		case 8:
			return true;
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
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
			return false;
		default:
			break;
	}
	return false;
}

void func_677(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_675(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_678(2, *uParam0);
		}
		else
		{
			func_679(2, *uParam0);
		}
	}
	func_1087(uParam0);
}

void func_678(int iParam0, int iParam1)
{
	if (Global_1357549->f_1483 >= 25)
	{
		Global_1357549->f_1483 = 0;
	}
	Global_1357549->f_1407[Global_1357549->f_1483] = iParam0;
	Global_1357549->f_1407[Global_1357549->f_1483]->f_1 = iParam1;
	Global_1357549->f_1407[Global_1357549->f_1483]->f_2 = 0;
	Global_1357549->f_1483++;
}

void func_679(int iParam0, int iParam1)
{
	if (Global_1357549->f_1406 >= 50)
	{
		return;
	}
	if (&Global_1357549->f_1252[Global_1357549->f_1406] != 0)
	{
		return;
	}
	Global_1357549->f_1252[Global_1357549->f_1406] = iParam0;
	Global_1357549->f_1252[Global_1357549->f_1406]->f_1 = iParam1;
	Global_1357549->f_1252[Global_1357549->f_1406]->f_2 = 0;
	Global_1357549->f_1403++;
	Global_1357549->f_1406++;
}

void func_680(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = get_game_timer();
	func_1088(iParam0, iParam1, bParam2);
}

int func_681(int iParam0)
{
	return shift_right(iParam0, 15) & 16383;
}

bool func_682(int iParam0)
{
	if (!func_254(iParam0))
	{
		return false;
	}
	switch (func_255(iParam0))
	{
		case 1:
			switch (func_257(iParam0))
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
			switch (func_257(iParam0))
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

void func_683(int iParam0)
{
	iVar2 = func_1089(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_714(iVar1) == iParam0)
		{
			_0x6a564540fac12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_1091(func_1090(iParam0), 6);
}

void func_684(int iParam0)
{
	iVar2 = func_1089(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_714(iVar1) == iParam0)
		{
			_0x766315a564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_1092(func_1090(iParam0), 6);
}

int func_685(int iParam0)
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

int func_686(int iParam0)
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

void func_687(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_688()
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

int func_689(int iParam0)
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

void func_690(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

bool func_691()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

int func_692(int iParam0)
{
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_1898441[iVar1] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_1898441[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_693(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_139() == -1)
	{
		if (func_1093(iParam0) && func_1094(iParam0))
		{
			func_1095(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_694(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_1096(iParam0, iParam1);
	Var0 = { func_798(iParam0, 0, 1) };
	iVar5 = func_1097(iParam0, &Var0, 0, 0);
	iVar6 = func_1098(iParam0, 0);
	if ((iVar5 > 1 && !func_288()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_413(iParam0, -2051813666))
		{
			func_196(583, 1);
		}
		else
		{
			func_196(582, 0);
		}
	}
	if (func_1099(iParam0, &Var0, *iParam1, 0, 0))
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

void func_695(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_771(iParam0, -949239683))
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

int func_696(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_412(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_711(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_1100(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_1101(iParam0, 0);
	}
	iVar2 = _0xe787f05dfc977bde(func_1089(bParam2), iParam0, 0);
	return iVar2;
}

bool func_697(int iParam0)
{
	if (func_139() != -1)
	{
		return false;
	}
	return func_698(iParam0) != 0;
}

int func_698(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1102())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_1103(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_699(int iParam0)
{
	return _0x6052b4de6657684f(iParam0);
}

int func_700(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1102())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_699(iVar0))
		{
			if (func_317(func_1103(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_701(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
	func_1104(48);
	func_337(0, -1);
}

bool func_702(int iParam0)
{
	if (func_139() != -1)
	{
		return false;
	}
	return func_145((*Global_1347702)[iParam0]->f_15, 1);
}

int func_703(int iParam0)
{
	return _0x62cab7db62ead434(-2076669067, iParam0);
}

int func_704(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

bool func_705(int iParam0)
{
	if (func_139() != -1)
	{
		return false;
	}
	return func_145((*Global_1835011)[iParam0]->f_1, 1);
}

bool func_706(int iParam0)
{
	if (func_139() != -1)
	{
		return false;
	}
	if (!func_45(iParam0))
	{
		return false;
	}
	return func_242((*Global_1347702)[iParam0]->f_15);
}

int func_707()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_317(func_1105(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_708(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_691() && (func_706(38) || func_702(38)))
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
			if (func_691() && (func_706(39) || func_702(39)))
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
			iVar9 = func_1106(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		case 41:
			if (func_691() && (func_706(41) || func_702(41)))
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
			if (func_691() && (func_706(49) || func_702(49)))
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
			iVar9 = func_1106(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_1107(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar12 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar12 = get_hash_key("toast_log_blips");
	}
	if (func_1108(iParam0, iVar13, iVar14))
	{
	}
	if (func_1109(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_1110(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_1111(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_1112(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_1113(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_709(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_710(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_691() && (func_706(38) || func_702(38)))
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
			if (func_691() && (func_706(39) || func_702(39)))
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
			if (func_691() && (func_706(49) || func_702(49)))
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
		if (func_691() && (func_706(38) || func_702(38)))
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
			func_253(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_253(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_251(_create_var_string(2, sVar0), _create_var_string(2, func_1114(func_704(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_253(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_253(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_691() && (func_706(39) || func_702(39)))
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
			func_253(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_253(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_691() && (func_706(49) || func_702(49)))
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
			func_253(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_253(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_253(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_253(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_711(int iParam0)
{
	if (!func_412(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_712(int iParam0, int iParam1)
{
	if (!func_412(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

void func_713(int iParam0)
{
	if (!func_917(iParam0))
	{
		return;
	}
	func_1115(iParam0);
	func_1116(iParam0);
}

int func_714(int iParam0)
{
	if (!func_412(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_715(int iParam0, bool bParam1)
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
	if (func_412(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_1117(iVar0) || func_411(iVar0))
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

int func_716(int iParam0, bool bParam1)
{
	if (!func_412(iParam0, 0))
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

void func_717(int iParam0)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_410(iParam0))
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

bool func_718(bool bParam0)
{
	if (func_139() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_1089(bParam0));
}

bool func_719(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_798(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_1118((386 + iVar28), 1);
			if (func_1119(iParam0, &Var0, iVar5, 0))
			{
				if (func_1120(iParam0, &Var6, iVar5))
				{
					Var29 = { func_1121(iParam0, Var0, iVar5, 0) };
					func_1122(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_718(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_720(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_1123(iParam0, iParam1);
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

bool func_720(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_722(iParam0))
	{
		return false;
	}
	if (!func_718(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_721(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_716(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_139() == -1)
		{
			func_717(iVar0);
			if (iParam1 == 1248274121)
			{
				func_1124(iVar0);
			}
		}
		if (!func_1099(iParam0, &uVar1, 1, 0, 0))
		{
			func_1095(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_1125(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_719(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_719(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_719(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_melee(iVar0))
			{
				if (iVar0 == 494733111 && !func_144())
				{
					return false;
				}
				if (_0x2c83212a7aa51d3d(iParam0))
				{
				}
				else if (!func_1126(iVar0))
				{
					func_719(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_719(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_980(Global_35, 2, 0, 1);
				if ((((func_410(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_492(24)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_410(iVar7) && func_492(24))
				{
					if (!func_719(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_719(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_719(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_196(480, 1);
	}
	return true;
}

bool func_722(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_723(int iParam0, int iParam1, int iParam2)
{
	if (!func_722(iParam0))
	{
		return false;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_35, iParam0);
	if (func_410(iVar4))
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
	if (func_317(611073244, 1, 0) && iParam2 == -897553835)
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
		func_758(func_1127(iParam0), func_757(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_139() == -1)
		{
			if (func_145((*Global_1835011)[14]->f_1, 1))
			{
				func_196(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_718(0))
	{
		if (func_720(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_763(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_724(int iParam0)
{
	if ((iParam0 == -615217896 && !func_308()) || iParam0 != -615217896)
	{
		if (func_1128(Global_35, iParam0, &uVar0))
		{
			func_742(player_ped_id(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_748();
			break;
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_748();
			break;
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_748();
			break;
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_746();
			break;
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_744();
			break;
	}
}

void func_725(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_744();
			break;
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_745();
			break;
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_746();
			break;
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_747();
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
			func_748();
			break;
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_1129();
			break;
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_1130();
			break;
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_726(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

struct<2> func_727(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_728(int iParam0)
{
	bVar0 = func_413(iParam0, -2017733358);
	if (func_1131() < 3)
	{
		if (bVar0)
		{
			if (func_1133(func_1132(iParam0), iParam0))
			{
				func_758(79, func_757(func_1132(iParam0)), 1);
			}
			else
			{
				func_758(78, func_757(func_1132(iParam0)), 1);
			}
		}
		else
		{
			func_758(80, func_757(func_1134(iParam0)), 1);
		}
	}
}

bool func_729()
{
	if (((((func_1135(839908568, 400) || func_1135(-1134030454, 400)) || func_1135(623353496, 400)) || func_1135(-344413337, 400)) || func_1135(-1664948962, 400)) || func_1135(1795228059, 400))
	{
		return true;
	}
	return false;
}

int func_730(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	iVar0 = func_94(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_1136(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_1137(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_731(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_708(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_710(51, 0, 0, 0, 0, -1, 0);
			func_1138(8192);
			break;
		case 581047644:
			func_708(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_710(51, 0, 0, 0, 0, -1, 0);
			func_1138(524288);
			break;
		case -644199619:
			func_708(39, 0, 0, 0, 0, 0, 1, 0);
			func_710(39, 0, 0, 0, 0, -1, 0);
			func_1139(16);
			break;
		case 684296857:
			func_708(41, 0, 0, 0, 0, 0, 1, 0);
			func_710(41, 0, 0, 0, 0, -1, 0);
			func_1140(8);
			break;
		case 466137807:
			func_708(49, 0, 0, 0, 0, 0, 1, 0);
			func_710(49, 0, 0, 0, 0, -1, 0);
			func_1141(16);
			break;
		case -1087522507:
			func_708(43, 0, 0, -1791518714, func_1142(1), 0, -1, 0);
			func_1143(1);
			break;
		case -405829000:
			func_708(43, 0, 0, -2087881550, func_1142(2), 0, -1, 0);
			func_1143(2);
			break;
		case 378660860:
			func_708(43, 0, 0, 1908068621, func_1142(4), 0, -1, 0);
			func_1143(4);
			break;
		case 1566111097:
			func_708(43, 0, 0, 1611247019, func_1142(8), 0, -1, 0);
			func_1143(8);
			break;
		case 1276007140:
			func_708(43, 0, 0, 1319635688, func_1142(16), 0, -1, 0);
			func_1143(16);
			break;
	}
}

void func_732(int iParam0)
{
	if (func_1144() == 1)
	{
		if (func_702(39))
		{
			func_196(342, 0);
		}
		else
		{
			func_196(343, 0);
			func_1139(1);
		}
	}
	if (func_1144() >= 30)
	{
		func_196(344, 0);
	}
	func_708(39, 0, 0, 0, 0, 0, -1, 0);
	func_710(39, 0, 0, func_1144(), 30, 1, 0);
}

void func_733(int iParam0)
{
	if (func_1145() == 1)
	{
		if (func_702(49))
		{
			func_196(409, 0);
		}
		else
		{
			func_196(410, 0);
			func_1141(1);
		}
	}
	if (func_1145() >= 10)
	{
		func_196(411, 0);
	}
	func_708(49, 0, 0, 0, 0, 0, -1, 0);
	func_710(49, 0, 0, func_1145(), 10, 1, 0);
}

void func_734(int iParam0)
{
	switch (iParam0)
	{
		case 1369162587:
			_0x3ea62e56f386c997(-949689219, 1);
			func_196(437, 0);
			func_196(440, 0);
			func_1146(-949689219, 444160793, &sVar0, 1, 0, 0);
			func_708(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_710(51, 0, 0, sVar0, func_1106(-949689219, 20), 1, 0);
			func_1138(1);
			func_1147(-748969569, 0, 0);
			break;
		case 1610047510:
			_0x3ea62e56f386c997(-1248968496, 1);
			func_1146(-1248968496, -1969404854, &sVar0, 1, 0, 0);
			func_708(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_710(51, 0, 0, sVar0, func_1106(-1248968496, 20), 1, 0);
			func_1138(8);
			break;
		case 1317879106:
			_0x3ea62e56f386c997(1706369307, 1);
			func_1146(1706369307, -832850511, &sVar0, 1, 0, 0);
			func_708(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_710(51, 0, 0, sVar0, func_1106(1706369307, 20), 1, 0);
			func_1138(64);
			break;
		case 1062444751:
			_0x3ea62e56f386c997(1520110311, 1);
			func_1146(1520110311, -100913452, &sVar0, 1, 0, 0);
			func_708(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_710(51, 0, 0, sVar0, func_1106(1520110311, 20), 1, 0);
			func_1138(512);
			break;
		case 754186760:
			_0x3ea62e56f386c997(-1992824800, 1);
			func_196(438, 0);
			func_1146(-1992824800, 905173572, &sVar0, 1, 0, 0);
			func_708(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_710(51, 0, 0, sVar0, func_1106(-1992824800, 20), 1, 0);
			func_1138(32768);
			break;
		default:
			func_196(439, 0);
			break;
	}
}

void func_735()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

void func_736(int iParam0, int iParam1)
{
	iVar1 = 0;
	if (func_139() == -1)
	{
		if (!func_702(43))
		{
			if (iParam0 == 281887510)
			{
				func_196(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_196(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_196(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_196(400, 0);
			}
		}
		else if (func_413(iParam0, 412399755))
		{
			func_1148(-1791518714);
			if (func_1149() == 0)
			{
				func_337(0, 10);
				iVar1 = func_1150(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_1151(iParam0) < func_1152(iParam0))
					{
						func_708(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_710(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_702(44))
		{
			if (iParam0 == -222563712)
			{
				func_196(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_196(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_196(401, 0);
			}
		}
		else if (func_413(iParam0, 709057512))
		{
			func_1148(-2087881550);
			if (func_1149() == 1)
			{
				func_337(0, 10);
				iVar1 = func_1150(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_1151(iParam0) < func_1152(iParam0))
					{
						func_708(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_710(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_702(45))
		{
			if (iParam0 == 2116770557)
			{
				func_196(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_196(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_196(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_196(398, 0);
			}
		}
		else if (func_413(iParam0, -1478961327))
		{
			func_1148(1908068621);
			if (func_1149() == 2)
			{
				func_337(0, 10);
				iVar1 = func_1150(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_1153(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
					{
						func_1154(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
						func_1104(48);
					}
					if (func_1151(iParam0) < func_1152(iParam0))
					{
						func_708(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_710(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_1151(iParam0) < func_1152(iParam0))
					{
						func_708(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_710(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_702(46))
		{
			if (iParam0 == 2085530337)
			{
				func_196(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_196(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_196(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_196(406, 0);
			}
		}
		else if (func_413(iParam0, -1238404098))
		{
			func_1148(1611247019);
			if (func_1149() == 3)
			{
				func_337(0, 10);
				iVar1 = func_1150(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_1151(iParam0) < func_1152(iParam0))
					{
						func_708(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_710(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_702(47))
		{
			if (iParam0 == -1521783510)
			{
				func_196(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_196(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_196(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_196(403, 0);
			}
		}
		else if (func_413(iParam0, 1160548794))
		{
			func_1148(1319635688);
			if (func_1149() == 4)
			{
				func_337(0, 10);
				iVar1 = func_1150(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_1151(iParam0) < func_1152(iParam0))
					{
						func_708(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_710(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_737(int iParam0)
{
	if (iParam0 == 2116770557)
	{
		if (!func_1153(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
		{
			func_1154(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
			func_1104(48);
		}
	}
}

void func_738(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = _0x126cbebba46693cf(iVar1, 678508515, -1160144609);
		if (func_317(func_1155(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_1156(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_1157(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_739(int iParam0, int iParam1, int iParam2)
{
	if (func_139() == -1)
	{
		if (does_entity_exist(iParam2))
		{
			iVar0 = _0x6f02b5e50511721e(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_730(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_730(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493:
			func_730(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627:
			func_730(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377:
			func_730(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086:
			func_730(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686:
			func_730(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991:
			func_730(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101:
			func_730(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918:
			func_730(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765:
			func_730(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903:
			func_730(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684:
			func_730(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340:
			if (!func_1158())
			{
				func_730(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740:
			func_730(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264:
			func_730(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970:
			func_730(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1027115192:
			func_730(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1064332555:
			func_730(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1954478446:
			func_730(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -518592739:
			func_730(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -2010073778:
			func_730(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -700133011:
			func_730(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1415414735:
			func_730(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 2045548742:
			func_730(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 830381058:
			func_730(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_740(int iParam0)
{
	if (func_702(41))
	{
		func_196(363, 0);
	}
	else
	{
		func_196(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_1159(-1865241121);
			func_1160(-642026005);
			func_1161(-642026005);
			func_337(0, 10);
			break;
		case -2108314374:
			func_1159(2117142684);
			func_1160(-940584364);
			func_1161(-940584364);
			func_337(0, 10);
			break;
		case -1193798153:
			func_1159(-1409326024);
			func_1160(1972645282);
			func_1161(1972645282);
			func_337(0, 10);
			break;
		case -787702678:
			func_1159(-641744968);
			func_1160(1667205433);
			func_1161(1667205433);
			func_337(0, 10);
			break;
		case -804542901:
			func_1159(-946988203);
			func_1160(1362715885);
			func_1161(1362715885);
			func_337(0, 10);
			break;
		case -1696275132:
			func_1159(-646136018);
			func_1160(1053540370);
			func_1161(1053540370);
			func_337(0, 10);
			break;
		case -161595323:
			func_1159(-955835837);
			func_1160(-1100103852);
			func_1161(-1100103852);
			func_337(0, 10);
			break;
		case -1114363619:
			func_1159(-179276075);
			func_1160(-1409869209);
			func_1161(-1409869209);
			func_337(0, 10);
			break;
		case -368407134:
			func_1159(-492711560);
			func_1160(-1760235357);
			func_1161(-1760235357);
			func_337(0, 10);
			break;
		case 1997759228:
			func_1159(1764383959);
			func_1160(-138366827);
			func_1161(-138366827);
			func_337(0, 10);
			break;
		case 1265573293:
			func_1159(317501533);
			func_1160(-1261163843);
			func_1161(-1261163843);
			func_337(0, 10);
			break;
		case -1030441283:
			func_1159(817753087);
			func_1160(-963523016);
			func_1161(-963523016);
			func_337(0, 10);
			break;
		case -1490884871:
			func_1159(576606016);
			func_1160(560825326);
			func_1161(560825326);
			func_337(0, 10);
			break;
		case -395458616:
			func_1159(814934957);
			func_1160(858269539);
			func_1161(858269539);
			break;
	}
}

void func_741(int iParam0, int iParam1)
{
	func_1162(iParam0, iParam1, &uVar0);
}

int func_742(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_798(iParam1, 1, 0) };
		iParam3 = func_799(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1163(iParam1, iParam2, func_789(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_1164(1, (func_139() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_789(iParam3, 1)])
			{
				func_797(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_1165(32768) && iParam1 != &Global_1946804->f_57[func_789(iParam3, 1)])
			{
				func_1166();
				func_797(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_797(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_1167(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_797(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_1168(0);
			func_1169(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_797(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_743(int iParam0, bool bParam1)
{
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_980(get_player_ped(get_player_index()), 2, 1, 0);
	iVar19 = func_980(get_player_ped(get_player_index()), 3, 1, 0);
	if (func_1170("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_1171(&Var3, iVar2, iVar0, iVar1))
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
						func_1172(iVar0);
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

void func_744()
{
	_0x11a7ff918ef6bc66(player_id(), (1f - Global_40.f_11095.f_60));
}

void func_745()
{
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	_0x497a6539bb0e8787(player_id(), (1f - fVar0), (1f - fVar1));
}

void func_746()
{
	_0xe0d6c2a146a5c993(player_id(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_747()
{
	_0xb427911ea6dffef3(player_id(), (1f - Global_40.f_11095.f_63));
}

void func_748()
{
	func_1173();
	func_1174();
	func_1175();
}

void func_749(int iParam0, int iParam1, bool bParam2)
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

void func_750(int iParam0, bool bParam1)
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
	func_253(_create_var_string(2, sVar1), _create_var_string(2, sVar2), get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_TREASURE_HUNTER"), 1433015236, _create_var_string(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_751(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_752(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_753(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_754(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_755(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_756(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_757(int iParam0)
{
	if (!func_412(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_758(int iParam0, int iParam1, bool bParam2)
{
	func_136(iParam0, &iVar0, &iVar1);
	if (!func_552(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_969(iParam0, 1024))
	{
		return;
	}
	func_553(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 2;
}

void func_759(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_136(iParam0, &iVar0, &iVar1);
	if (!func_552(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_969(iParam0, 1024))
	{
		return;
	}
	func_553(iVar0, iVar1);
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

int func_760()
{
	iVar0 = _0x5461c821d00fe15a(-2076669067, 0);
	if (iVar0 == func_1102())
	{
		return func_761();
	}
	iVar4 = (func_1102() - iVar0);
	iVar5 = get_random_int_in_range(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_1102())
	{
		iVar1 = _0x126cbebba46693cf(iVar2, -2076669067, 0);
		if (!func_1176(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_1103(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_761()
{
	iVar0 = get_random_int_in_range(0, func_1102());
	return func_1103(_0x126cbebba46693cf(iVar0, -2076669067, 0));
}

void func_762(int iParam0)
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

bool func_763(int iParam0, int iParam1, int iParam2)
{
	if (!func_412(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_798(iParam0, 0, 1) };
	Var5 = { func_1121(iParam0, Var0, Var0.f_4, 0) };
	return func_1177(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_764(int iParam0)
{
	if (func_139() != -1)
	{
		return;
	}
	switch (func_714(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_1178(81053684, 0) <= 0)
			{
				func_797(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_797(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_1179(iParam0);
			if (func_1180(iVar0))
			{
				func_1181(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_797(30, iParam0, 0, 0, 0);
			}
			if (func_791() == -2125499975 || func_791() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_797(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_791() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_797(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_1182(-525676072, 0))
			{
				if (func_1183(-525676072, &iVar1))
				{
					func_797(33, iVar1, 0, 0, 0);
				}
			}
			func_797(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_1184(99217379))
		{
			func_742(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_713(24);
		if (func_743(&iVar2, 0))
		{
			func_719(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_765(int iParam0)
{
	if (func_413(iParam0, 943695443))
	{
		func_1185(0, iParam0);
	}
	else if (func_413(iParam0, -2096528786))
	{
		func_1185(1, iParam0);
	}
	else if (func_413(iParam0, -1094167013))
	{
		func_1185(2, iParam0);
	}
	else if (func_413(iParam0, 1936654645))
	{
		func_1185(3, iParam0);
	}
	else if (func_413(iParam0, 1306489306))
	{
		func_1185(4, iParam0);
	}
	else if (func_413(iParam0, 435762317))
	{
		func_1185(5, iParam0);
	}
	else if (func_413(iParam0, 1259363210))
	{
		func_1185(6, iParam0);
	}
	else if (func_413(iParam0, 881398259))
	{
		func_1185(7, iParam0);
	}
	else if (func_413(iParam0, -541549214))
	{
		func_1185(8, iParam0);
	}
	else if (func_413(iParam0, 130796156))
	{
		func_1185(-1, iParam0);
	}
}

int func_766(int iParam0, int iParam1)
{
	Var4.f_1 = 10;
	func_1186(&Var4, 1356624740);
	return func_1187(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_767(int iParam0)
{
	if (!func_412(iParam0, 0))
	{
		return Var0;
	}
	if (func_413(iParam0, -305066475))
	{
		if (func_139() == -1)
		{
			if (func_413(iParam0, -537818634))
			{
				return func_270(189951448);
			}
			else
			{
				return func_270(1176172851);
			}
		}
	}
	else if (func_413(iParam0, -537818634))
	{
		return func_270(-963660207);
	}
	if (func_413(iParam0, 2084895747))
	{
		return func_270(1694039471);
	}
	return Var2;
}

void func_768(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_139() == -1)
			{
				if (func_145((*Global_1835011)[4]->f_1, 1))
				{
					func_196(109, 1);
				}
			}
			break;
	}
}

void func_769(int iParam0, char* sParam1)
{
	sVar0 = func_1189(func_1188(0));
	func_500(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1190(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_770(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_412(iParam0, 0))
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
	if (!func_1191())
	{
		func_1192(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_1193(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_1193(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_712(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_711(iParam0);
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
	else if (!func_1194(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	sVar15 = func_1195(_create_var_string(10, &cVar2, _create_var_string(0, func_757(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_413(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_757(iParam0));
	}
	func_500(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

int func_771(int iParam0, int iParam1)
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

struct<10> func_772(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_773(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = _item_database_create_item_collection(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_774(int iParam0, int iParam1)
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

bool func_775(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!func_412(iParam0, 0))
	{
		return false;
	}
	if (iParam1 != 0 && !func_1196(iParam0, iParam1, 1))
	{
		return false;
	}
	bVar0 = false;
	if (iParam1 == 0)
	{
		iVar1 = _item_database_get_acquire_costs_count(iParam0);
		Var2.f_4 = 15;
		Var2.f_36 = 10;
		iVar49 = 0;
		while (iVar49 < iVar1)
		{
			if (_item_database_get_acquire_cost(iParam0, iVar49, &Var2))
			{
				if (Var2.f_2 == 1644203656 && func_1196(iParam0, Var2, 1))
				{
					if (func_1197(iParam0, Var2))
					{
						bVar0 = true;
					}
				}
			}
			iVar49++;
		}
	}
	else if (func_1197(iParam0, iParam1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam2)
		{
			func_196(206, 0);
		}
	}
	if (bParam3)
	{
		if (!func_442(0, 0, 1))
		{
			func_337(1, 5);
		}
	}
	if (bVar0)
	{
		return true;
	}
	return false;
}

int func_776(int iParam0)
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

void func_777(int iParam0)
{
	iVar0 = -1;
	switch (iParam0)
	{
		case -1375947476:
			iVar0 = 307;
			break;
		case -1704241585:
			iVar0 = 308;
			break;
		case -1267972061:
			iVar0 = 309;
			break;
		case -142033055:
			iVar0 = 310;
			break;
		case 890514341:
			iVar0 = 311;
			break;
		case -58963793:
			iVar0 = 312;
			break;
		case 1882019322:
			iVar0 = 313;
			break;
		case 807302083:
			iVar0 = 314;
			break;
		case 617759310:
			iVar0 = 315;
			break;
		case -378547623:
			iVar0 = 316;
			break;
		case 829545206:
			iVar0 = 317;
			break;
		case 891318243:
			iVar0 = 319;
			break;
		case 431374225:
			iVar0 = 320;
			break;
		case 1619534881:
			iVar0 = 321;
			break;
		case -755457379:
			iVar0 = 322;
			break;
		case 2141714005:
			iVar0 = 323;
			break;
		case 1015404643:
			iVar0 = 324;
			break;
		case 983875052:
			iVar0 = 325;
			break;
		case -1753730528:
			iVar0 = 326;
			break;
		case 2131765035:
			iVar0 = 327;
			break;
		case -1740272183:
			iVar0 = 328;
			break;
		case 1310680212:
			iVar0 = 329;
			break;
		case -1724192342:
			iVar0 = 330;
			break;
		case 912296423:
			iVar0 = 331;
			break;
		case -566881549:
			iVar0 = 332;
			break;
		case 147796381:
			iVar0 = 333;
			break;
		case -120865369:
			iVar0 = 334;
			break;
		case 1158808845:
			iVar0 = 335;
			break;
	}
	if (iVar0 != -1)
	{
		func_196(iVar0, 0);
	}
}

void func_778()
{
	bVar0 = is_dlc_present(33819255);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(-121456797))
		{
			_0xe824ce7d13fcb300(2116153146, 0);
			func_1198(0);
			_unlock_set_unlocked(-121456797, false);
			func_1199();
		}
		return;
	}
	if (!func_145((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	func_1200();
	if (_0x57e798b54c45ee1a(1685912227) >= 2)
	{
		if (_0x57e798b54c45ee1a(2116153146) < 2)
		{
			_0xe824ce7d13fcb300(2116153146, 2);
		}
	}
	if (_unlock_is_unlocked(-121456797))
	{
		return;
	}
	_unlock_set_unlocked(-121456797, true);
	if (_unlock_is_unlocked(645322743))
	{
		return;
	}
	func_1198(1);
}

void func_779()
{
	if (!func_145((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(304788622))
	{
		return;
	}
	func_290(1351927599, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	_unlock_set_unlocked(304788622, true);
	if (_unlock_is_unlocked(-1968398307))
	{
		return;
	}
	_unlock_set_unlocked(-1968398307, true);
}

void func_780()
{
	bVar0 = is_dlc_present(-751383868);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(1244328330))
		{
			func_1201(0);
			_unlock_set_unlocked(1244328330, false);
		}
		return;
	}
	if (_unlock_is_unlocked(1244328330))
	{
		return;
	}
	if (_unlock_is_unlocked(-1383789777))
	{
		return;
	}
	if (!func_145((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(1244328330, true);
	func_1201(1);
}

void func_781()
{
	bVar0 = is_dlc_present(-1499823613);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(398807247))
		{
			func_1202(15000, 0, 0, 0, 1);
			func_1201(0);
			_unlock_set_unlocked(398807247, false);
		}
		return;
	}
	if (_unlock_is_unlocked(398807247))
	{
		return;
	}
	if (_unlock_is_unlocked(-1651350587))
	{
		return;
	}
	if (!func_145((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(398807247, true);
	func_824(15000, 0, 1065353216, 1, 0, 0, 1, 752097756);
	func_1201(1);
}

void func_782()
{
	bVar0 = is_dlc_present(-679138445);
	if (bVar0)
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if ((!func_317(1191437462, 1, 0) && !func_242((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_290(1191437462, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1203(1))
			{
				func_754(1);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if ((!func_317(1119149048, 1, 0) && !func_242((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_290(1119149048, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1203(2))
			{
				func_754(2);
			}
		}
		if (_0xf83d3dda4d3c8169(2056119786) > 0 && !func_1203(4))
		{
			func_754(4);
		}
		if (func_1203(0))
		{
			func_1204(0);
		}
	}
	else
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if (func_317(1191437462, 1, 0))
			{
				func_785(1191437462, 1, 1, -142743235, 0);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if (func_317(1119149048, 1, 0))
			{
				func_785(1119149048, 1, 1, -142743235, 0);
			}
		}
		if (func_1203(1))
		{
			func_1204(1);
		}
		if (func_1203(2))
		{
			func_1204(2);
		}
		if (func_1203(4))
		{
			func_1204(4);
		}
		if (!func_1203(0))
		{
			func_754(0);
		}
	}
}

void func_783()
{
	bVar0 = _unlock_is_unlocked(240039223);
	if (!bVar0)
	{
		return;
	}
	if (!func_145((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(-236259196))
	{
		return;
	}
	Var1 = { func_1205() };
	if (!_0xb881ca836cc4b6d4(&Var1))
	{
		func_717(127400949);
		if (func_719(127400949, 0, 0, 0, 0, 0, 752097756, 0))
		{
			Var1 = { func_1205() };
		}
	}
	if (_0xb881ca836cc4b6d4(&Var1))
	{
		func_1206(-2055673461, Var1, 1423542233);
		func_1206(-202131179, Var1, -1264898804);
		func_1206(2013836545, Var1, 1592019450);
		func_1206(1497476650, Var1, 1117400455);
		func_1206(1063571467, Var1, 1150213537);
		func_1206(2107224237, Var1, 1598825281);
		func_1206(1747981656, Var1, -712527121);
		func_1206(-1371140647, Var1, 454332195);
		func_1206(-19142973, Var1, 256105670);
		func_1206(-2074737817, Var1, -1328061889);
		func_1206(-1114256243, Var1, -782241404);
		func_1206(-1653277288, Var1, 1669853467);
		func_1206(1869398132, Var1, -1559225678);
		func_1206(459868358, Var1, -266425508);
		if (!_0x3ab6c7b0bb0df4b1(Global_35, -1) && !func_1207())
		{
			get_current_ped_weapon(Global_35, &iVar15, false, 2, false);
			get_current_ped_weapon(Global_35, &iVar16, false, 0, false);
			if (func_410(iVar16))
			{
				if (iVar16 != 127400949)
				{
					if (_is_weapon_one_handed(iVar16))
					{
						if (func_492(24))
						{
							set_current_ped_weapon(Global_35, iVar16, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 0, false, false);
					}
					else if (_is_weapon_two_handed(iVar16))
					{
						if ((func_492(24) && func_410(iVar15)) && iVar15 != 127400949)
						{
							set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
					}
				}
			}
			else if (!func_410(iVar15))
			{
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
			else if (iVar15 != 127400949)
			{
				if (func_492(24))
				{
					set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
				}
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
		}
		_unlock_set_unlocked(-236259196, true);
	}
}

void func_784()
{
	if (_unlock_is_unlocked(99890643))
	{
		return;
	}
	if (is_pc_version() || _is_stadia_version())
	{
		_unlock_set_unlocked(99890643, true);
	}
	if (is_orbis_version())
	{
		_unlock_set_unlocked(99890643, true);
	}
	if (is_durango_version())
	{
		_unlock_set_unlocked(99890643, true);
	}
}

int func_785(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_412(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_1100(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = get_ped_ammo_by_type(Global_35, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return 0;
		}
		_remove_ammo_from_ped_by_type(Global_35, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_770(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_317(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_767(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_696(iParam0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_696(iParam0, 0, 0) - iParam1) < 0)
		{
			func_785(iParam0, func_696(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_711(iParam0) == -427144552)
	{
		if (!func_1208(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_1209(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_718(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_770(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_1210(iParam0, iParam1);
	return 1;
}

bool func_786(int iParam0)
{
	switch (func_714(iParam0))
	{
		case -2061583405:
			return true;
		case -1719060085:
			return true;
		case -999503751:
			return true;
		case -525676072:
			return true;
		case 81053684:
			return true;
		case -413129408:
			return true;
		default:
			break;
	}
	return false;
}

void func_787(int iParam0, bool bParam1, bool bParam2)
{
	switch (func_714(iParam0))
	{
		case -2061583405:
			bVar0 = func_1211(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1211(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1211(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1211(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1211(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1211(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1212();
	}
	if (bParam1)
	{
		func_1213(0, 0);
	}
}

int func_788(int iParam0)
{
	Var0 = { func_798(iParam0, 1, 0) };
	return func_799(Var0.f_4);
}

int func_789(int iParam0, int iParam1)
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

void func_790(int iParam0)
{
	if (func_139() == -1)
	{
		Var2 = -1394038466;
	}
	else
	{
		Var2 = 545953470;
	}
	Var2.f_1 = iParam0;
	Var2.f_3 = 0;
	_0x91ded5dd64bb2691(&Var2);
	while (_0xed4413cee1bf142c(&Var2))
	{
		if (!_0x44b3a36933ac009c(&iVar1, &Var2, -2008906477))
		{
			return;
		}
		iVar0 = func_789(iVar1, 1);
		if (iVar0 < 0 || iVar0 >= 39)
		{
		}
		else
		{
			func_1214(Global_1946804->f_1378.f_1[iVar0], 2, 6);
		}
	}
}

int func_791()
{
	return Global_1946804->f_1;
}

bool func_792(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	Var4 = func_1215(iParam6);
	Var4.f_1 = iParam1;
	Var4.f_3 = 0;
	_0x91ded5dd64bb2691(&Var4);
	if (!_0xed4413cee1bf142c(&Var4))
	{
		return false;
	}
	_0xa63cd20f19b961ab(&bVar2, &Var4, -1516819610);
	_0x44b3a36933ac009c(&iVar0, &Var4, 2049745650);
	*bParam2 = bVar2;
	Global_1946804->f_2652 = 0;
	if (!bVar2 && !bParam3)
	{
		func_1217(uParam0, func_1216(iVar0), 1);
	}
	while (_0xed4413cee1bf142c(&Var4))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_789(iVar3, 1);
			if (iVar1 < 0 || iVar1 > 39)
			{
			}
			else if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1373051002))
			{
			}
			else
			{
				Global_1946804->f_2612[Global_1946804->f_2652] = iVar1;
				Global_1946804->f_2652++;
				uParam0->f_1[iVar1] = iVar0;
				if (bParam5)
				{
					if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1441384))
					{
						uParam0->f_1[iVar1]->f_1 = 1155669136;
					}
					else
					{
						Jump @343; //curOff = 278
						if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1194786549))
						{
							if (func_1218(iVar3) && func_1219(&(uParam0->f_1[iVar1]), iVar3, &iVar0))
							{
								uParam0->f_1[iVar1]->f_1 = iVar0;
							}
						}
						else
						{
							uParam0->f_1[iVar1]->f_1 = iVar0;
						}
					}
					if (bVar2)
					{
						iVar1 = 0;
						while (iVar1 < Global_1946804->f_2652)
						{
							func_1220(uParam0, &(uParam0->f_1[&Global_1946804->f_2612[iVar1]]), &(Global_1946804->f_2612[iVar1]), 0, 0);
							iVar1++;
						}
					}
					if (bParam4)
					{
						*uParam0 = iParam1;
					}
					return true;
				}
			}
		}
	}
}

Vector3 func_793(int iParam0, int iParam1)
{
	if (func_139() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		return *Global_26796.f_26[iParam1]->f_1.f_1[iParam0];
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	return *Global_36638.f_45.f_350.f_26[iParam1]->f_1.f_1[iParam0];
}

int func_794(int iParam0, int iParam1)
{
	vVar0 = { func_793(iParam0, iParam1) };
	return vVar0.x;
}

void func_795(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_796(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

void func_797(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_1221(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1222(Var0);
}

struct<5> func_798(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_1223(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_711(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_1121(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_1224(bParam1) };
			if (bParam2 && func_1225(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_1119(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_1119(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_1120(iParam0, &Var5, 1728382685))
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
			Var0 = { func_1226(bParam1) };
			switch (func_714(iParam0))
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
			if (func_1227(iParam0, -1823706425))
			{
				Var0 = { func_1121(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_1227(iParam0, -1483207246))
			{
				Var0 = { func_1121(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_1228(Var0, &Var27, bParam1, 0))
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

int func_799(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_1229(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

void func_800(int iParam0)
{
	func_1214(Global_1946804->f_1497.f_1[func_789(iParam0, 1)], 2, 6);
	func_1214(Global_1946804->f_1378.f_1[func_789(iParam0, 1)], 2, 6);
}

bool func_801(int iParam0)
{
	return iParam0 != 0;
}

int func_802(int iParam0)
{
	iVar0 = -1;
	if (!func_801(iParam0))
	{
		return iVar0;
	}
	iVar1 = 0;
	while (iVar1 < 180)
	{
		if (&Global_40.f_9910[iVar1] == iParam0)
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

bool func_803(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

int func_804(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_505(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_805(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_806(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_807(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_808(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_809(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_810(int iParam0, int iParam1)
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

void func_811(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1230(iParam0, iParam6);
	func_1231(iParam0, iParam5);
	func_1232(iParam0, iParam4);
	func_1233(iParam0, iParam3);
	func_1234(iParam0, iParam2);
	func_1235(iParam0, iParam1);
}

bool func_812(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_809(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_808(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_807(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_804(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_805(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_806(iParam0);
	if (iVar5 < 1 || iVar5 > func_810(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

void func_813(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_814(int iParam0, int iParam1)
{
	if (!func_412(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_1100(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1170("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1171(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_410(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_1172(iVar1);
				return true;
			}
			iVar3++;
		}
		func_1172(iVar1);
	}
	return false;
}

int func_815()
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = func_1236(iVar1);
		if (!_unlock_is_visible(func_1237(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_816()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_1236(iVar0);
		if (!_unlock_is_visible(func_1237(iVar1)))
		{
			_unlock_set_visible(func_1237(iVar1), true);
		}
		iVar0++;
	}
}

bool func_817(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1078(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

void func_818(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_661(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (Global_40.f_4942[iParam0] || iParam1);
}

bool func_819(int iParam0)
{
	return (Global_21 && iParam0) != 0;
}

bool func_820()
{
	return (func_619(&Global_1935630, 4096) || _get_number_of_references_of_script_with_name_hash(1637780761) > 0);
}

int func_821(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_139() != -1)
	{
		return 0;
	}
	if (&Global_1956575 != 2)
	{
		return 0;
	}
	iVar0 = uParam0->f_5;
	iVar1 = uParam0->f_5.f_1;
	iVar2 = uParam0->f_5.f_3;
	if (!func_412(iVar0, 0))
	{
		return 0;
	}
	if (!func_1238(iVar0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	func_1239(iVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (func_413(iVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { func_798(iVar0, 0, 1) };
	iVar10 = func_1240(iVar0, &Var5, 0, 0);
	if (iVar10 == 0)
	{
		return 0;
	}
	else if (iVar10 < iVar4)
	{
		iVar2 = ceil((to_float(iVar10) / to_float(iVar3)));
		iVar4 = iVar10;
	}
	iVar11 = (func_1241(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!func_1242(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_290(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	func_1202(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

void func_822(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_500(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

void func_823(bool bParam0, bool bParam1)
{
	if (func_139() != -1)
	{
		return;
	}
	if (&Global_1956575 != 2)
	{
		return;
	}
	if (bParam0)
	{
		while (_spactionproxy_get_next_pending_crafting_action(&uVar0))
		{
			if (!_spactionproxy_process_action(uVar0, false))
			{
			}
		else
		{
			}
		}
	}
	if (bParam1)
	{
		while (_spactionproxy_get_next_pending_buy_action(&uVar9))
		{
			if (!_spactionproxy_process_action(uVar9, false))
			{
			}
		else
		{
			}
		}
	}
}

void func_824(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_1136(iParam0, sParam4, iParam5);
	}
	func_1137(iParam0, bParam1, fParam2, iParam3, iParam7);
}

void func_825(int iParam0, int iParam1, float fParam2, int iParam3)
{
	iVar0 = floor((to_float(iParam1) * fParam2));
	iVar1 = ((iParam1 - iVar0) / iParam3);
	if (func_1243())
	{
		iVar2 = floor((to_float(iVar1) * 0.1f));
		_uilog_add_total_take_entry(1072517412, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	else
	{
		_uilog_add_total_take_entry(2067252994, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	iVar3 = iVar1;
	if (func_1243())
	{
		iVar3 = (iVar3 + iVar2);
	}
	_0xe6dc9b21ac7a8729(func_334(iParam0), iVar3, iVar1, iParam3);
	iVar4 = func_257(iParam0);
	if (func_255(iParam0) != 1 || (iVar4 != 37 && iVar4 != 58))
	{
		_uilog_add_total_take_entry(-1391579956, 1997120069, _create_var_string(2, "MISSION_COMPLETE_TAKE_ARTHUR"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar3), 601389479);
	}
	switch (func_255(iParam0))
	{
		case 1:
			switch (iVar4)
			{
				case 25:
					func_1244(1, iVar1);
					func_1244(8, iVar1);
					func_1244(7, iVar1);
					break;
				case 12:
					func_1244(6, iVar1);
					break;
				case 53:
					func_1244(3, iVar1);
					func_1244(7, iVar1);
					func_1244(4, iVar1);
					break;
				case 20:
					func_1244(8, iVar1);
					break;
				case 19:
					func_1244(1, iVar1);
					func_1244(2, iVar1);
					break;
				case 24:
					func_1244(3, iVar1);
					func_1244(9, iVar1);
					func_1244(20, iVar1);
					break;
				case 28:
					func_1244(1, iVar1);
					break;
				case 34:
					func_1244(23, iVar1);
					func_1244(2, iVar1);
					func_1244(18, iVar1);
					break;
				case 29:
					func_1244(0, iVar1);
					func_1244(9, iVar1);
					break;
				case 37:
					break;
				case 58:
					break;
				case 57:
					func_1244(0, iVar1);
					func_1244(3, iVar1);
					func_1244(2, iVar1);
					func_1244(11, iVar1);
					func_1244(6, iVar1);
					func_1244(25, iVar1);
					func_1244(24, iVar1);
					break;
			}
			break;
		case 8:
			switch (iVar4)
			{
				case 94:
					func_1244(5, iVar1);
					break;
				case 63:
					func_1244(1, iVar1);
					func_1244(3, iVar1);
					break;
				case 37:
					func_1244(23, iVar1);
					break;
				case 116:
					break;
			}
			break;
		case 11:
			if (iParam0 == func_258(0, 10, 11, 2116153146))
			{
				func_1244(7, iVar1);
				func_1244(4, iVar1);
			}
			else if (iParam0 == func_258(0, 7, 11, -379687487))
			{
				func_1244(8, iVar1);
				func_1244(15, iVar1);
			}
			else if (iParam0 == func_258(0, 8, 11, -1386089015))
			{
				func_1244(3, iVar1);
			}
			else if (iParam0 == func_258(0, 11, 11, -1952009645))
			{
				func_1244(6, iVar1);
				func_1244(3, iVar1);
			}
			else if (iParam0 == func_258(0, 12, 11, 2065895756))
			{
				func_1244(9, iVar1);
			}
			break;
	}
	_uilog_set_total_take_summary(_create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL", iParam1), _create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL_GANG", func_1245()));
	if (!func_941(629))
	{
		func_196(629, 0);
	}
}

int func_826(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

bool func_827(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_828(int iParam0, int iParam1, int iParam2)
{
	if (!func_827(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			*iParam1 = -816321659;
			*iParam2 = -987026056;
			break;
		case 1:
			*iParam1 = -816321659;
			*iParam2 = -1822602787;
			break;
		case 2:
			*iParam1 = -816321659;
			*iParam2 = -1602329569;
			break;
		case 3:
			*iParam1 = -816321659;
			*iParam2 = 1881899898;
			break;
		case 4:
			*iParam1 = -816321659;
			*iParam2 = -1906196506;
			break;
		case 5:
			*iParam1 = -816321659;
			*iParam2 = -674995867;
			break;
		case 6:
			*iParam1 = -816321659;
			*iParam2 = -734156617;
			break;
		case 7:
			*iParam1 = -816321659;
			*iParam2 = 261758426;
			break;
		case 8:
			*iParam1 = -816321659;
			*iParam2 = 1545586131;
			break;
		case 9:
			*iParam1 = -816321659;
			*iParam2 = -489125522;
			break;
		case 10:
			*iParam1 = -816321659;
			*iParam2 = 1190367681;
			break;
		case 11:
			*iParam1 = -816321659;
			*iParam2 = -1179367301;
			break;
		case 12:
			*iParam1 = -816321659;
			*iParam2 = 1154513253;
			break;
		case 13:
			*iParam1 = -816321659;
			*iParam2 = -1825640214;
			break;
		case 14:
			*iParam1 = -816321659;
			*iParam2 = 1209829059;
			break;
		case 15:
			*iParam1 = -816321659;
			*iParam2 = -1713230487;
			break;
		case 16:
			*iParam1 = -816321659;
			*iParam2 = 2092309893;
			break;
		default:
			return false;
	}
	return true;
}

void func_829(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_830(int iParam0)
{
	if (!func_254(iParam0))
	{
		return 0;
	}
	cVar0 = func_55(iParam0);
	if (is_string_null_or_empty(&cVar0))
	{
		return 0;
	}
	iVar1 = get_hash_key(&cVar0);
	iVar2 = iVar1;
	return iVar2;
}

bool func_831(int iParam0)
{
	return _0x4dac398297981b87(iParam0);
}

void func_832(int iParam0, bool bParam1)
{
	iVar0 = func_341(iParam0);
	if (_uilog_is_entry_registered(iVar0, func_252(iParam0)))
	{
		_uilog_remove_entry(iVar0, func_252(iParam0));
	}
	if (bParam1)
	{
		if (iVar0 == 1)
		{
			if (_uilog_is_entry_registered(2, func_252(iParam0)))
			{
				_uilog_remove_entry(2, func_252(iParam0));
			}
		}
	}
	func_342(iParam0, 4);
	func_342(iParam0, 8);
	func_342(iParam0, 16);
}

char* func_833(char* sParam0)
{
	return sParam0;
}

int func_834(int iParam0, float fParam1, bool bParam2, bool bParam3)
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

int func_835(int iParam0)
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

void func_836(int* iParam0)
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

void func_837(int iParam0)
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

void func_838(var uParam0)
{
	if (func_152(uParam0->f_162))
	{
		func_153(&(uParam0->f_162), 1, 1);
	}
	if (func_152(uParam0->f_163))
	{
		func_153(&(uParam0->f_163), 1, 1);
	}
	if (func_152(uParam0->f_164))
	{
		func_153(&(uParam0->f_164), 1, 1);
	}
	if (func_152(uParam0->f_165))
	{
		func_153(&(uParam0->f_165), 1, 1);
	}
}

void func_839(var uParam0)
{
	if (uParam0->f_170)
	{
		func_1246();
	}
}

void func_840(var uParam0)
{
	if (uParam0->f_48 && !uParam0->f_45)
	{
		func_1247(32);
		func_843(uParam0->f_3, 1, 0, 0, 2, 0, 0, 1);
	}
}

bool func_841(var uParam0)
{
	if (func_1248(uParam0) || uParam0->f_44)
	{
		uParam0->f_44 = 1;
		func_1249(uParam0->f_3);
		func_430(uParam0, 0, 1);
		func_1250(uParam0->f_3, uParam0->f_51.f_5, 0, uParam0->f_43, -1);
		func_337(0, 0);
		return true;
	}
	return false;
}

bool func_842(int iParam0)
{
	if (!func_387(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0]->f_4 > 0;
}

void func_843(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_517(iParam0) == 1 && bParam7)
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
	if ((bParam1 || bParam6) || func_139() != -1)
	{
		Global_17504.f_42[iParam0]->f_4 = 0;
	}
	Global_17504.f_42[iParam0]->f_4 = (Global_17504.f_42[iParam0]->f_4 + iVar0);
}

void func_844(int iParam0)
{
	func_35(&(Global_1935369->f_39), iParam0);
}

void func_845(int iParam0)
{
	func_76(&(Global_1935369->f_39), iParam0);
}

int func_846(int iParam0)
{
	iVar1 = iParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_1251(&iVar1, -2147483648);
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

int func_847()
{
	return get_player_group(get_player_index());
}

bool func_848(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_139() != -1)
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

void func_849(var uParam0, int iParam1)
{
	func_1252(uParam0, iParam1);
}

bool func_850(int iParam0)
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

int func_851(int iParam0)
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

int func_852(int iParam0)
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

bool func_853(int iParam0, int iParam1, var uParam2)
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

Vector3 func_854(int iParam0, var uParam1)
{
	iVar1 = -1;
	if (does_entity_exist(iParam0))
	{
		vVar2 = { get_entity_coords(iParam0, true, false) };
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!func_361(*(*uParam1)[iVar0]))
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

void func_855(var uParam0, bool bParam1)
{
	if (!does_blip_exist(uParam0->f_6))
	{
		uParam0->f_6 = _blip_add_for_coord(-1702907713, *uParam0);
		_blip_set_modifier(uParam0->f_6, 580546400);
		set_blip_name_from_text_file(uParam0->f_6, "BLIP_DEBUG");
		if (bParam1)
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_69("BEAT_GLB", 5500, 0, 1, 0, 0, -1, -1, 0);
		}
		_0x9851de7aec10b4e1(*uParam0, 100f, 1, 0);
	}
}

bool func_856(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_857(int iParam0)
{
	if (!func_387(iParam0))
	{
		return;
	}
	func_1253(iParam0);
}

void func_858(var uParam0, vector3 vParam1)
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

int func_859(int iParam0)
{
	if (func_100(iParam0, 2))
	{
		return 200;
	}
	if (func_100(iParam0, 4))
	{
		return 70;
	}
	if (func_100(iParam0, 32))
	{
		return 400;
	}
	return 110;
}

int func_860(int iParam0)
{
	if (func_86(iParam0, 131072))
	{
		return 0;
	}
	else
	{
		if (iParam0 == 6)
		{
			if (func_880() == 8)
			{
				return 3;
			}
		}
		bVar0 = func_86(iParam0, 2);
		bVar1 = func_86(iParam0, 1);
		bVar2 = (bVar0 && bVar1);
		if (bVar2)
		{
			if (!func_435())
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

void func_861(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
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
	if (func_100(iParam3, 2097152))
	{
		*fParam0 = (*fParam0 + 15f);
		*iParam2 = ceil((*fParam0 + 50f));
	}
	else
	{
		*iParam2 = 70;
	}
}

void func_862(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
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
	if (func_100(iParam3, 2))
	{
		*fParam0 = (*fParam0 + 60f);
		*fParam1 = (*fParam1 + 60f);
		*iParam2 = ceil((*fParam0 + 110f));
	}
	else if (func_100(iParam3, 2097152))
	{
		*fParam0 = (*fParam0 + 30f);
		*iParam2 = ceil((*fParam0 + 30f));
	}
	else
	{
		*iParam2 = 70;
	}
}

bool func_863(int iParam0, int iParam1)
{
	iVar0 = (func_852(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_17504.f_12[iVar1]), iVar2);
}

bool func_864(int iParam0, vector3 vParam1, float fParam4, float fParam5)
{
	if (func_361(vParam1))
	{
		return false;
	}
	if (func_868(iParam0, vParam1))
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
	if (func_170(iParam0))
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

void func_865(int iParam0, vector3 vParam1, int iParam4, float fParam5, bool bParam6, float fParam7)
{
	fVar0 = func_207(bParam6, fParam7, vdist(vParam1, get_entity_coords(iParam0, true, false)));
	if (!iParam4->f_1)
	{
		if (fVar0 < iParam4->f_2 || (func_871(vParam1, iParam0) && get_entity_speed(iParam0) > fParam5))
		{
			*iParam4 = func_126();
			iParam4->f_2 = func_215(iParam0, vParam1, 1);
			iParam4->f_1 = 1;
		}
	}
	else if (fVar0 > iParam4->f_2 || (!func_871(vParam1, iParam0) && get_entity_speed(iParam0) > fParam5))
	{
		*iParam4 = func_126();
		iParam4->f_2 = func_215(iParam0, vParam1, 1);
		iParam4->f_1 = 0;
	}
}

bool func_866(var uParam0, int iParam1)
{
	if (uParam0->f_1 == 1)
	{
		return (func_126() - *uParam0) >= iParam1;
	}
	return false;
}

int func_867(var uParam0)
{
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_361(*uParam0->f_12[iVar0]))
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

bool func_868(int iParam0, vector3 vParam1)
{
	if (!func_86(iParam0, 1))
	{
		iVar0 = 1;
	}
	if (func_1254(vParam1, 0, 0, iVar0))
	{
		return true;
	}
	if (func_86(iParam0, 33554432))
	{
		if (func_1255(vParam1, 200f, 1, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_869(int iParam0, var uParam1)
{
	iVar0 = 1;
	if (func_100(iParam0, 128))
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
	if (func_86(iParam0, 1) && !func_86(iParam0, 2))
	{
		if (func_86(iParam0, 4096) || func_86(iParam0, 2048))
		{
			if (func_1256(*uParam1))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

bool func_870(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	uVar0 = func_1(&uParam0);
	if (!func_1257())
	{
		return false;
	}
	return true;
}

bool func_871(vector3 vParam0, int iParam3)
{
	if (is_entity_dead(iParam3))
	{
		return false;
	}
	vVar0 = { get_entity_forward_vector(iParam3) };
	return func_1258(vVar0, vParam0) > func_1258(vVar0, get_entity_coords(iParam3, true, false));
}

bool func_872(int iParam0)
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

int func_873(int iParam0)
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

bool func_874(var uParam0)
{
	return func_404(*uParam0, 1);
}

bool func_875(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_1259(*uParam0, 0f, 0f, 0f))
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

void func_876(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_1260(iParam1))
		{
			func_1261(iParam0, 41788943);
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
			func_1262(iParam0, 0, 1);
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
			func_1263(iParam0, 0);
			bVar0 = true;
		}
		func_1264(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

bool func_877(int iParam0)
{
	return iParam0 != 0;
}

int func_878(int iParam0)
{
	if (iParam0 == -1)
	{
		iVar0 = func_598(1);
	}
	else
	{
		iVar0 = func_1033(iParam0);
	}
	return iVar0;
}

void func_879(int iParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		iVar0 = func_1265(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_1266(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2] = &Global_17504.f_2205[iVar2] + 1;
	}
}

int func_880()
{
	return Global_1897952->f_41;
}

void func_881(int iParam0, int iParam1)
{
	if (iParam1 != -1 && !func_100(iParam0, 8192))
	{
		iVar0 = func_1266(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0] = &Global_17504.f_2205[iVar0] + 1;
	}
}

void func_882(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	func_843(iParam0, bParam3, round((fVar0 * fParam2)), round((fVar1 * fParam2)), round((fVar2 * fParam2)), round((fVar3 * fParam2)), bParam4, 1);
}

void func_883(int iParam0, bool bParam1)
{
	iVar0 = 1;
	if (bParam1)
	{
		iVar0 = 3;
	}
	if (func_86(iParam0, 262144))
	{
		if (Global_1392135->f_3 == -1)
		{
			func_1267(262144, iVar0, 0, 1);
		}
	}
	if (func_86(iParam0, 128))
	{
		func_1267(128, iVar0, 0, 1);
	}
	else if (func_86(iParam0, 524288))
	{
		func_1267(524288, iVar0, 0, 1);
	}
	else if (func_86(iParam0, 536870912))
	{
		func_1267(536870912, iVar0, 0, 1);
	}
	else if (func_86(iParam0, 4194304))
	{
		func_1267(4194304, iVar0, 0, 1);
	}
	else if (func_86(iParam0, 8388608))
	{
		func_1267(8388608, iVar0, 0, 1);
	}
}

void func_884(int iParam0)
{
	Global_1310750->f_16077 = get_id_of_this_thread();
	Global_1310750->f_16071 = iParam0;
}

int func_885()
{
	return Global_1310750->f_16037;
}

bool func_886(int iParam0)
{
	if (!func_387(iParam0))
	{
		return false;
	}
	return (*Global_1310750)[iParam0]->f_47;
}

void func_887(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_387(&(Global_1310750->f_13321[iParam0])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0];
	force_cleanup_for_thread_with_this_id(Global_1310750->f_13321[iParam0]->f_5, 523);
	(*Global_1310750)[iVar0]->f_48 = 0;
	func_1268(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_888(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_1269(Global_1393447, 1);
	func_1270();
	func_1271();
	func_1272((to_float(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135->f_54 = (func_126() / 1000);
		if (Global_1392135->f_1 & 4 != 0)
		{
			Global_1392135->f_1 = (Global_1392135->f_1 - Global_1392135->f_1 & 4);
		}
		func_1273();
		if (iParam1 == -1)
		{
			if (func_3(iParam0, 1))
			{
				func_1267(16777216, 2, 0, 1);
				iVar0 = floor(240f);
			}
			else if (func_3(iParam0, 2))
			{
				func_1267(16777216, 0, 0, 1);
				iVar0 = floor(60f);
			}
			else if (func_3(iParam0, 4))
			{
				func_1267(16777216, 5, 0, 1);
				iVar0 = floor(900f);
			}
			Global_1392135->f_4 = (Global_1392135->f_54 + iVar0);
		}
		else
		{
			func_1274(iParam1, iParam2, iParam3, iParam4);
			Global_1392135->f_5[iParam1] = (((Global_1392135->f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_1275(to_float(iVar0), 1, 0);
	}
	else
	{
		func_1275((to_float(200) / 3f), 1, 0);
	}
}

bool func_889(int iParam0, int iParam1)
{
	return (Global_40.f_9571[iParam1] && iParam0) != 0;
}

void func_890(int iParam0, int iParam1)
{
	(*Global_1392050)[iParam1]->f_1 = ((*Global_1392050)[iParam1]->f_1 - ((*Global_1392050)[iParam1]->f_1 && iParam0));
}

void func_891(int iParam0, int iParam1)
{
	Global_40.f_9571[iParam1] = (Global_40.f_9571[iParam1] || iParam0);
}

int func_892(int iParam0)
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

bool func_893()
{
	return (Global_1935630->f_44 == -160924582 && is_first_person_aim_cam_active());
}

bool func_894(var uParam0, float fParam1, float fParam2, int iParam3)
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

bool func_895(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_894(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (func_568() - 0.02f);
		}
		return true;
	}
	uParam0->f_8 = 0f;
	return false;
}

bool func_896(int iParam0)
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

bool func_897(int iParam0)
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

bool func_898(int iParam0)
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

bool func_899(int iParam0)
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

bool func_900(int iParam0)
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

bool func_901(int iParam0)
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

bool func_902(int iParam0)
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

bool func_903(bool bParam0, int iParam1, int iParam2)
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

bool func_904()
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

bool func_905(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_906(int iParam0)
{
	return func_86(iParam0, Global_1310750->f_16072 | 64);
}

bool func_907(int iParam0)
{
	return ((Global_1310750[iParam0] != 0 && !is_string_null_or_empty(&((*Global_1310750)[iParam0]->f_40))) && get_length_of_literal_string(&((*Global_1310750)[iParam0]->f_40)) != 0);
}

bool func_908()
{
	if (func_1276())
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

void func_909(var uParam0, var uParam1)
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

int func_910(int iParam0)
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

void func_911(int iParam0)
{
	if (Global_1935630->f_38 == 0)
	{
		func_76(iParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1935630->f_34[iVar0])))
				{
					func_35(iParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_912(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_913(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_914(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_914(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_915(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_916(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_917(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_918(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_919(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_1277(bParam1);
	}
}

void func_920(int iParam0)
{
	_0x74bcceb233ad95b2(-156028329, iParam0);
}

char* func_921(int iParam0)
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

bool func_922(int iParam0)
{
	if (!func_1278(23, &vVar0))
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

bool func_923(int iParam0, int iParam1, int iParam2)
{
	if (!func_1278(23, &Var0))
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

int func_924(int iParam0)
{
	return iParam0;
}

int func_925()
{
	iVar0 = func_490();
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

void func_926(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

bool func_927(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

bool func_928(int iParam0)
{
	return func_1279(iParam0, 2);
}

bool func_929(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = func_930(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

int func_930(int iParam0)
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

void func_931(int iParam0)
{
	iParam0 = func_1280(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1281(iParam0, 32);
	func_1282();
}

void func_932(int iParam0)
{
	iParam0 = func_1280(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_933(iParam0);
	if (!_does_thread_exist(iVar0))
	{
		func_935(iParam0);
	}
	else if (!is_thread_active(iVar0, false))
	{
		func_935(iParam0);
	}
}

int func_933(int iParam0)
{
	iParam0 = func_1280(iParam0);
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

bool func_934(int iParam0)
{
	iParam0 = func_1280(iParam0);
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

void func_935(int iParam0)
{
	iParam0 = func_1280(iParam0);
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

bool func_936()
{
	if ((is_ped_using_any_scenario(Global_35) || _0x84d0bf2b21862059(Global_35)) || func_441(Global_35))
	{
		return true;
	}
	return false;
}

void func_937(bool bParam0)
{
	func_1283(0, bParam0);
	func_1283(1, bParam0);
	func_1283(2, bParam0);
}

void func_938(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

int func_939(int iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	if (!is_entity_dead(*iParam0))
	{
		func_938(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !_does_volume_exist(iParam9)) || is_entity_in_volume(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (is_ambient_speech_playing(*iParam0) || is_scripted_speech_playing(*iParam0));
		fVar8 = func_207(fParam12 >= 0f, fParam12, vdist(Global_36, get_entity_coords(*iParam0, true, false)));
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
			func_176(&(iParam1->f_13));
		}
		if (func_1284(*iParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_1285(iParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_939(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_1286(iParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!get_ped_config_flag(*iParam0, 317, true))
						{
							func_1287(*iParam0, 1, 1);
						}
					}
					else if (func_1288(iParam1, 22))
					{
						func_1287(*iParam0, 0, 1);
					}
				}
				if (func_1289(iParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_1290(iParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_1291(iParam8);
					if (func_1292(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (is_bit_set(uParam3[iParam1->f_1], 20))
								{
									func_1293(uParam3);
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
					func_1294(iParam1, uParam3, fVar8);
					if (func_1295(*iParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (is_bit_set(*iParam1, 1))
					{
						func_38(uParam3, 0, 0, 1, 1);
						clear_bit(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_1296(iParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_1289(iParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_1297(*iParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_1292(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_1290(iParam0, func_1289(iParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_1291(iParam8);
				}
				else if (is_bit_set(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_38(uParam3, 0, 0, 1, 1);
					}
					func_1298(iParam1, 1);
				}
				func_1294(iParam1, uParam3, fVar8);
				if (func_1296(iParam0, iParam1, fParam4, bVar6))
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
			func_1299(iParam1, uParam3);
			set_bit(iParam1, 3);
		}
	}
	return -1;
}

void func_940(int* iParam0, var uParam1, int iParam2)
{
	iVar0 = func_1300(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (*uParam1)[iVar0]->f_13;
		iVar2 = (*uParam1)[iVar0]->f_15;
		if (!is_string_null_or_empty(sVar1))
		{
			func_37(Global_35, *iParam2, sVar1, "", -1082130432, iVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_941(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_139() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_942(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_943(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_944(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 38)
	{
		return true;
	}
	return false;
}

void func_945(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_152(iParam0))
	{
		return;
	}
	iVar0 = func_506(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(2, sParam1, sParam2));
}

void func_946(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_152(iParam0))
	{
		return;
	}
	iVar0 = func_506(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, sParam1);
}

void func_947(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_152(iParam0))
	{
		return;
	}
	iVar0 = func_506(iParam0);
	if (bParam1)
	{
		func_1301(iParam0, 4);
		func_1302(iVar0, 1);
		func_1303(iVar0, 1);
	}
	else
	{
		func_1304(iParam0, 4);
		func_1303(iVar0, 0);
	}
}

void func_948(int* iParam0, char* sParam1)
{
	if (func_152(iParam0->f_6) && !is_string_null_or_empty(sParam1))
	{
		func_946(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_1045(iParam0, 1);
}

bool func_949(int iParam0)
{
	if (-1829635046 == func_1305(81053684))
	{
		if (func_951(iParam0))
		{
			return true;
		}
	}
	else if (func_1306(-525676072, iParam0))
	{
		if (func_951(iParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_950()
{
	return Global_1946804->f_2792;
}

bool func_951(int iParam0)
{
	if (func_1306(81053684, iParam0))
	{
		return true;
	}
	if (func_1306(-525676072, iParam0))
	{
		return true;
	}
	return false;
}

bool func_952(int iParam0)
{
	if (func_1307())
	{
		return false;
	}
	if (!func_412(iParam0, 0))
	{
		return false;
	}
	if (!func_317(iParam0, 1, 0))
	{
		_0xbfff81e12a745a5f();
		return false;
	}
	return true;
}

int func_953(int iParam0, int iParam1)
{
	bVar3 = func_1308(iParam0);
	if (func_413(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_949(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_1309();
			}
			else
			{
				iVar0 = func_1310();
			}
		}
		else if (func_404(iParam1, 1))
		{
			iVar0 = 0;
		}
		else if (bVar1)
		{
			iVar0 = func_1311();
		}
		else
		{
			iVar0 = func_1312();
		}
	}
	else if (func_951(&iVar2))
	{
		if (func_413(iVar2, -1303648999))
		{
			iVar0 = func_1309();
		}
		else
		{
			iVar0 = func_1310();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_1311();
	}
	else
	{
		iVar0 = func_1312();
	}
	if (iVar0 != 0)
	{
		Global_1946804->f_2791 = get_game_timer();
		_task_item_interaction(Global_35, iParam0, iVar0, 1, iParam1, -1082130432);
		return 1;
	}
	return 0;
}

int func_954(int iParam0)
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

float func_955(float fParam0)
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

bool func_956(var uParam0)
{
	if (!func_1313(*uParam0, uParam0->f_4))
	{
		return false;
	}
	return true;
}

bool func_957(var uParam0)
{
	if (!func_956(uParam0))
	{
		return false;
	}
	if (func_1314(uParam0->f_7, uParam0->f_8, func_543(&(uParam0->f_3), 4)))
	{
		return true;
	}
	if (!func_543(&(uParam0->f_3), 4))
	{
		if (func_1315())
		{
			return true;
		}
	}
	return false;
}

int func_958(var uParam0)
{
	if (!func_214(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_567(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_126() - round((uParam0->f_1 * 1000f)));
}

bool func_959(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, float fParam5)
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
	if (func_1316(get_entity_coords(iParam0, true, false), iParam1, fParam2, 1, fParam5))
	{
		return true;
	}
	return false;
}

bool func_960(float fParam0, float fParam1)
{
	if (is_ped_on_mount(Global_35))
	{
		return get_entity_speed(Global_35) < fParam0;
	}
	return get_entity_speed(Global_35) < fParam1;
}

bool func_961(vector3 vParam0, var uParam3)
{
	if (!func_543(&(uParam3->f_3), 8))
	{
		return true;
	}
	if (func_914(vParam0, 0.06f, 0.94f, 0.1f, 0.8f))
	{
		return true;
	}
	return false;
}

bool func_962(vector3 vParam0, var uParam3)
{
	fVar0 = func_963(vParam0, 1);
	return fVar0 < uParam3->f_6;
}

float func_963(vector3 vParam0, bool bParam3)
{
	vVar0 = { func_1317(0) };
	vVar3 = { func_1318(vParam0 - get_gameplay_cam_coord()) };
	if (bParam3)
	{
		return absf(get_angle_between_2d_vectors(vVar3.x, vVar3.y, vVar0.x, vVar0.y));
	}
	return get_angle_between_2d_vectors(vVar3.x, vVar3.y, vVar0.x, vVar0.y);
}

void func_964(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_965(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_409(iParam1, 128);
	Var23.f_9 = -1591664384;
	if (func_1170("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1171(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_410(Var4.f_4))
			{
			}
			else if (!_0x705be297eebdb95d(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!func_409(iParam1, 512) && func_1319(Var4.f_4, &uVar19, &Var23, 1728382685)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || _0xf29a186ed428b552(Global_35, Var4.f_4))
			{
				if (((_is_weapon_one_handed(Var4.f_4) && (!_is_weapon_shotgun(Var4.f_4) || func_409(iParam1, 32))) && (!_is_weapon_pistol(Var4.f_4) || !func_409(iParam1, 16777216))) && (!_is_weapon_revolver(Var4.f_4) || !func_409(iParam1, 33554432)))
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
		func_1172(iVar1);
	}
	if (func_410(iVar0))
	{
	}
	else if (!func_409(iParam1, 512))
	{
		iParam1 |= 512;
		return func_965(uParam0, iParam1, iParam2);
	}
	else if (func_409(iParam1, 256))
	{
		iVar0 = -1569615261;
	}
	return iVar0;
}

bool func_966(int iParam0, int iParam1)
{
	if (func_139() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_967(int iParam0)
{
	if (func_139() != -1)
	{
		if (func_969(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_969(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_968(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_969(iParam0, 65536) && !func_969(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_969(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_969(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_969(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_970()
{
	return Global_1905944->f_5694;
}

bool func_971(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

int func_972()
{
	switch (func_139())
	{
		case 0:
			return get_player_ped(player_id());
		default:
			break;
	}
	return Global_35;
}

bool func_973(int iParam0, int iParam1)
{
	if (func_193(iParam0, 1, 1))
	{
		return func_404(Global_1955500[iParam0], iParam1);
	}
	return false;
}

int func_974(int iParam0)
{
	if (!func_1078(iParam0))
	{
		return 0;
	}
	iVar1 = func_1320(iParam0);
	iVar0 = iVar1;
	if (iVar0 < 0 || iVar0 >= 27)
	{
		return 0;
	}
	return Global_1360165[iVar0];
}

Vector3 func_975(int iParam0, vector3 vParam1, float fParam4, int iParam5)
{
	vVar0 = { func_1318(vParam1) };
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

void func_976(int iParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, int iParam15)
{
	if (iParam0 <= -1)
	{
		return;
	}
	if (bParam14)
	{
		iVar20 = func_1321(iParam0, iParam1);
		func_1322(&vVar0, &vVar10, iVar20, vParam3, vParam6, iParam9, iParam10, iParam11);
	}
	iVar21 = iParam2;
	iVar22 = 0;
	while (iVar22 < 3)
	{
		StringCopy(&cVar23, "", 32);
		iVar27 = 0;
		if (iVar21 > 0)
		{
			StringCopy(&cVar23, func_1323(iParam0, 3), 32);
			iVar21 = (iVar21 - 1);
			iVar27 = 1;
		}
		func_1325(iParam0, func_1324(iParam0), iVar27, bParam14, &cVar23, *vVar0[iVar22], *vVar10[iVar22], vParam6, iVar22, 0, -1082130432, iParam12, iParam13, iParam15);
		iVar22++;
	}
}

void func_977(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < func_368(1))
	{
		func_1326(Global_1359489[iVar0], iParam0);
		iVar0++;
	}
}

void func_978(int iParam0)
{
	if (func_139() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_161(func_662(iVar0), 0))
		{
			if (is_ped_group_member(func_662(iVar0), func_847(), 1))
			{
				func_1327(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

struct<7> func_979(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, var uParam5)
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

int func_980(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_981(var uParam0)
{
	return uParam0->f_57;
}

void func_982(bool bParam0)
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

void func_983(vector3 vParam0)
{
	if (!Global_1935630->f_12)
	{
		vVar1 = { get_offset_from_entity_given_world_coords(Global_35, vParam0) };
		fVar0 = get_heading_from_vector_2d(vVar1.x, vVar1.y);
		set_gameplay_cam_relative_heading(fVar0, 1f);
		_0x05bd5e4088b30a66(-180f, 180f);
	}
}

void func_984(vector3 vParam0)
{
	if (!Global_1935630->f_12)
	{
		vVar0 = { get_offset_from_entity_given_world_coords(Global_35, vParam0) };
		fVar3 = atan((vVar0.z / sqrt(((vVar0.y * vVar0.y) + (vVar0.x * vVar0.x)))));
		set_gameplay_cam_relative_pitch(fVar3, 1f);
	}
}

bool func_985(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_986(int iParam0)
{
	if (!func_1082(iParam0))
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

void func_987(var uParam0, var uParam1)
{
	fVar10 = func_511(uParam0->f_45, uParam0->f_42, 1);
	if (func_162(uParam0, 64))
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
		func_1328(uParam0, *uParam1);
		if (!does_cam_exist(&(uParam1->f_20[1])))
		{
			uParam1->f_20[1] = create_cam("DEFAULT_SCRIPTED_CAMERA", false);
			if (!func_361(uParam0->f_42))
			{
				vVar0 = { uParam0->f_42 };
			}
			else
			{
				vVar0 = { get_entity_coords(Global_35, true, false) };
			}
			fVar9 = func_511(vVar0, uParam0->f_45, 1);
			if (!func_361(*uParam0->f_51[1]))
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
				if (!func_361(*uParam0->f_61[1]))
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

void func_988(char* sParam0)
{
}

void func_989()
{
}

int func_990(var uParam0, float fParam1)
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

void func_991(int iParam0)
{
	_0x51345ae20f22c261(player_id(), to_float(iParam0 * 14), 0, 0, 0);
}

void func_992(var uParam0, var uParam1)
{
	if (func_162(uParam1, 64))
	{
		uParam0->f_63 = 529077016;
		uParam0->f_65 = "MINI_DUEL@PLAYER@MISSION@MUD4";
	}
	else if (func_162(uParam1, 32))
	{
		uParam0->f_63 = 2002375312;
		uParam0->f_65 = "MINI_DUEL@PLAYER@MISSION@IND3@IG9";
	}
	else
	{
		uParam0->f_63 = -1910137495;
		uParam0->f_65 = "MINI_DUEL@PLAYER@BASE";
	}
	if (func_162(uParam1, 32))
	{
		uParam0->f_64 = -1516447524;
		uParam0->f_66 = "MINI_DUEL@CHALLENGER@MISSION@IND3@IG9";
	}
	else if (func_162(uParam1, 512))
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

void func_993(var uParam0, var uParam1)
{
	uParam0->f_88 = uParam0->f_88;
	uParam1->f_1 = uParam1->f_1;
	request_anim_dict("MINI_DUEL@REPOSITION@BASE");
	request_anim_dict(uParam1->f_65);
	request_anim_dict(uParam1->f_66);
	request_anim_dict("MINI_DUEL@PLAYER@ACTION");
	request_anim_dict("MINI_DUEL@PLAYER@NORMAL");
	if (!func_550(&(uParam0->f_48)))
	{
		get_current_ped_weapon(*uParam0, &(uParam0->f_48), true, 2, false);
		if (!func_550(&(uParam0->f_48)))
		{
			get_current_ped_weapon(*uParam0, &(uParam0->f_48), true, 3, false);
		}
		if (!func_550(&(uParam0->f_48)))
		{
			get_current_ped_weapon(*uParam0, &(uParam0->f_48), true, 0, false);
		}
		if (!func_550(&(uParam0->f_48)))
		{
			get_current_ped_weapon(*uParam0, &(uParam0->f_48), true, 1, false);
		}
		if (!func_550(&(uParam0->f_48)))
		{
			uParam0->f_48 = 0;
		}
		if (!func_550(&(uParam0->f_48)))
		{
			uParam0->f_48 = func_551(268435584, 0);
		}
		if (!func_550(&(uParam0->f_48)))
		{
			uParam0->f_48 = 379542007;
		}
	}
	if (!func_550(&(uParam0->f_49)))
	{
		get_current_ped_weapon(uParam0->f_1, &(uParam0->f_49), true, 2, false);
		if (!func_550(&(uParam0->f_49)))
		{
			get_current_ped_weapon(uParam0->f_1, &(uParam0->f_49), true, 3, false);
		}
		if (!func_550(&(uParam0->f_49)))
		{
			get_current_ped_weapon(uParam0->f_1, &(uParam0->f_49), true, 0, false);
		}
		if (!func_550(&(uParam0->f_49)))
		{
			get_current_ped_weapon(uParam0->f_1, &(uParam0->f_49), true, 1, false);
		}
		if (!func_550(&(uParam0->f_49)))
		{
			uParam0->f_49 = 0;
		}
		if (!func_550(&(uParam0->f_49)))
		{
			uParam0->f_49 = func_93(268435456, 1056964608, 1065353216);
		}
		if (!func_550(&(uParam0->f_49)))
		{
			uParam0->f_49 = 379542007;
		}
	}
	if (!func_163(uParam1, 8192))
	{
		if (uParam0->f_48 != 0)
		{
			_0x72d4cb5db927009c(uParam0->f_48, -1, 0);
		}
		if (uParam0->f_49 != 0)
		{
			_0x72d4cb5db927009c(uParam0->f_49, -1, 0);
		}
		func_512(uParam1, 8192);
	}
	if (!func_162(uParam0, 16384))
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

void func_994()
{
	func_1329(Global_35, &(Global_1347400->f_46));
}

int func_995(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_410(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
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
							if (func_410(iVar4) && iVar4 != iVar0)
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
	if (func_139() == -1 && !func_411(iVar0))
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
				if (func_411(-183018591))
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
		if (iParam0 != Global_35 && func_410(iVar0))
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
		func_719(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_1330(iParam0, &iVar0, &fVar25);
		iVar0 = _give_weapon_to_ped_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_1126(iVar0))
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

void func_996(int iParam0)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	iVar2 = 0;
	while (iVar2 < 5)
	{
		iVar0 = func_1331(iVar2);
		if (iVar0 != 0 && has_ped_got_weapon(iParam0, iVar0, 0, false))
		{
			iVar1 = get_max_ammo_in_clip(iParam0, iVar0, true);
			set_ammo_in_clip(iParam0, iVar0, iVar1);
		}
		iVar2++;
	}
}

bool func_997(int iParam0, var uParam1)
{
	return is_itemset_valid(iParam0);
}

struct<2> func_998()
{
	Var0 = create_itemset(true);
	return Var0;
}

void func_999(var uParam0, var uParam1)
{
	if (!_does_volume_exist(uParam0->f_86))
	{
		vVar0 = { func_1332(uParam0->f_42, uParam0->f_45, 0.5f) };
		vVar3 = { 0f, 0f, func_511(uParam0->f_42, uParam0->f_45, 1) };
		vVar6 = { 12f, (get_distance_between_coords(uParam0->f_42, uParam0->f_45, true) + 30f), 25f };
		uParam0->f_86 = _create_volume_box(vVar0, vVar3, vVar6);
		add_to_itemset(uParam0->f_86, *uParam1);
		_0x18262cafebb5fbe1(uParam0->f_86, 534496, 0, 0, -1, -1, 0);
		_0xb56d41a694e42e86(uParam0->f_86, 534496, 0, 0, -1, -1, 2);
	}
}

int func_1000(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, float fParam8, char* sParam9)
{
	if (is_string_null_or_empty(sParam9))
	{
		sParam9 = func_452();
	}
	return _create_volume_box_with_custom_name(vParam0 - vParam3 * Vector(0.5f, 0.5f, 0.5f) + vParam3, 0f, 0f, -func_211(vParam0, vParam3), fParam6, (vdist(vParam0, vParam3) + (fParam8 * 2f)), fParam7, sParam9);
}

bool func_1001(int iParam0, int iParam1, float fParam2)
{
	return func_915(iParam0, get_entity_coords(iParam1, false, false), fParam2);
}

int func_1002(var uParam0, var uParam1)
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
			func_209(&(uParam0->f_32), 0);
			if (func_204(&(uParam0->f_32), fVar0))
			{
				if (_0x927b810e43e99932(&(uParam0->f_74)))
				{
					_0x0a5a4f1979abb40e(&(uParam0->f_74));
				}
				func_146(&(uParam0->f_32));
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

void func_1003(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		iVar0 = iParam1;
		vVar1 = { func_1333() };
		decor_set_int(iParam0, &vVar1, iVar0);
	}
}

Vector3 func_1004()
{
	return 0f, 0f, 0f;
}

bool func_1005(int iParam0, var uParam1, vector3 vParam2, int iParam5, float fParam6, int iParam7, bool bParam8, int iParam9, bool bParam10, bool bParam11, float fParam12)
{
	if (!func_531(iParam0))
	{
		if (bParam11)
		{
			iVar0 = func_1334(7);
		}
		else
		{
			iVar0 = _get_last_mount(iParam0);
		}
		if (!func_161(iVar0, 1) || (!(_does_volume_exist(iParam5) && func_180(iVar0, iParam5, 1, 0)) && func_25(iParam0, iVar0, 1, 1) > fParam6))
		{
			return true;
		}
		if (!does_entity_exist(*uParam1))
		{
			if (func_929(iVar0) && func_930(iVar0) != 1)
			{
				Var2.f_10 = 7;
				Var2.f_1 = 1;
				*uParam1 = func_1335(&uVar1, &Var2);
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
		if (func_161(*uParam1, 1))
		{
			if (!(func_230(*uParam1, 518218985) || func_230(*uParam1, 713668775)))
			{
				clear_ped_tasks(*uParam1, 1, 0);
				iVar13 = 0;
				if (!bParam10)
				{
					iVar13 = 16640;
				}
				_0xff1e339ce40eaaaf(*uParam1, 0);
				_0xf74e134f40192884(*uParam1, 2);
				if (!func_361(vParam2))
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
				if (!bParam8 && func_361(vParam2))
				{
					_task_smart_flee_style_ped(*uParam1, iParam0, iParam7, iVar13, fParam6, 6000, 0);
				}
			}
		}
	}
	return false;
}

void func_1006(var uParam0, var uParam1, int iParam2, vector3 vParam3, vector3 vParam6, float fParam9)
{
	if (!is_entity_dead(iParam2))
	{
		func_1336(uParam0, uParam1, iParam2, vParam3, vParam6, fParam9);
		if (!func_3(uParam1->f_88, 32))
		{
			if (is_player_control_on(player_id()))
			{
				set_player_control(player_id(), false, 4992, false);
			}
		}
		func_1008(iParam2);
	}
}

void func_1007(var uParam0, var uParam1, int iParam2, int iParam3, vector3 vParam4, vector3 vParam7, float fParam10)
{
	if (!is_entity_dead(iParam2))
	{
		if (func_361(vParam7))
		{
			vParam7 = { get_entity_coords(iParam3, true, false) };
		}
		if (func_162(uParam1, 1))
		{
			func_1336(uParam0, uParam1, iParam2, 0f, 0f, 0f, vParam7, fParam10);
		}
		else
		{
			func_1336(uParam0, uParam1, iParam2, vParam4, vParam7, fParam10);
		}
		set_ped_relationship_group_hash(iParam2, 1269650476);
		set_ped_config_flag(iParam2, 6, true);
		if (func_508(iParam2))
		{
			func_512(uParam0, 4);
		}
		_0x2208438012482a1a(iParam2, false, false);
		fVar0 = func_511(vParam4, vParam7, 1);
		if (!func_162(uParam1, 524288))
		{
			if ((func_3(uParam1->f_88, 32) || func_3(uParam1->f_88, 2)) || func_162(uParam1, 1))
			{
				task_duel(iParam2, uParam0->f_64, fParam10, iParam3, func_1337(uParam1), 0, 0f, 0f, 0f, fVar0, 0);
			}
			else
			{
				task_duel(iParam2, uParam0->f_64, fParam10, iParam3, func_1337(uParam1), 0, vParam4, fVar0, 0);
			}
		}
	}
}

void func_1008(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	vVar0 = { func_1333() };
	if (!decor_exist_on(iParam0, &vVar0))
	{
		return;
	}
	decor_remove(iParam0, &vVar0);
}

void func_1009(var uParam0, var uParam1)
{
	if (!func_163(uParam1, 4194304))
	{
		if (func_162(uParam0, 524288) && has_anim_event_fired(uParam0->f_1, 200432249))
		{
			func_512(uParam1, 4194304);
		}
	}
}

void func_1010(var uParam0, var uParam1)
{
	if (func_162(uParam0, 4))
	{
		if (func_163(uParam1, 8388608))
		{
			if (func_1338(uParam1))
			{
				func_1339(uParam1->f_3);
				func_1340(func_156(uParam1, uParam0), -1, 0, 0, 1);
			}
		}
		if (!func_163(uParam1, 8388608))
		{
			set_time_scale(0.25f);
			func_512(uParam1, 8388608);
			func_1341(3);
			func_1339(uParam1->f_3);
			func_1340(func_156(uParam1, uParam0), -1, 0, 0, 1);
		}
		else
		{
			switch (uParam1->f_3)
			{
				case 0:
					if (func_163(uParam1, 1048576))
					{
						uParam1->f_3++;
						func_1339(uParam1->f_3);
						func_1340(func_156(uParam1, uParam0), -1, 0, 0, 1);
					}
					if (func_163(uParam1, 16))
					{
						set_time_scale(1f);
						uParam1->f_3++;
						func_1339(uParam1->f_3);
						func_1340(func_156(uParam1, uParam0), -1, 0, 0, 1);
					}
					break;
				case 1:
					if (func_163(uParam1, 16))
					{
						set_time_scale(1f);
						uParam1->f_3++;
						uParam1->f_25 = func_647("DUEL_HELP_SHOWDOWN", 10000, 0, 0, 0, 1);
						func_1339(uParam1->f_3);
						func_1340(func_156(uParam1, uParam0), -1, 0, 0, 1);
					}
					break;
				case 2:
					if (func_981(uParam1) > 0)
					{
						func_35(&(Global_40.f_9145), 1);
						func_157(func_156(uParam1, uParam0), 1);
						func_158();
						func_159();
						uParam1->f_3++;
					}
					break;
			}
		}
	}
}

void func_1011(int iParam0, var uParam1)
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

int func_1012(var uParam0)
{
	iVar0 = 0;
	iVar1 = get_random_int_in_range(0, 9);
	switch (iVar1)
	{
		case 0:
			if (func_162(uParam0, 512))
			{
				iVar0 = 22798;
			}
			else
			{
				iVar0 = 34606;
			}
			break;
		case 1:
			if (func_162(uParam0, 512))
			{
				iVar0 = 46065;
			}
			else
			{
				iVar0 = 37873;
			}
			break;
		case 2:
			if (func_162(uParam0, 512))
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

void func_1013(var uParam0, int iParam1)
{
	uParam0->f_56 = iParam1;
}

void func_1014(var uParam0)
{
	if (!func_163(uParam0, 1048576))
	{
		if (_0xe956c2340a76272e(player_id()) > 0.5f)
		{
			func_176(&(uParam0->f_38));
			uParam0->f_6 = _get_game_timer_non_scaled_clipped();
			func_512(uParam0, 1048576);
		}
	}
}

bool func_1015(var uParam0, var uParam1)
{
	if (func_163(uParam1, 16))
	{
		return true;
	}
	if (!is_entity_dead(*uParam0))
	{
		iVar0 = func_980(*uParam0, 0, 1, 0);
		if (func_412(iVar0, 0) && iVar0 != -1569615261)
		{
			func_589(&(uParam0->f_20), 0);
			func_176(&(uParam1->f_41));
			uParam1->f_7 = _get_game_timer_non_scaled_clipped();
			func_512(uParam1, 16);
			return true;
		}
	}
	return false;
}

bool func_1016(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x59fa676177dbe4c9(iParam0) == 4;
}

void func_1017(var uParam0, var uParam1)
{
	if (func_162(uParam0, 4))
	{
	}
	else if (!func_163(uParam1, 64))
	{
		uParam1->f_25 = func_647("DUEL_HELP_SHOWDOWN", 10000, 0, 0, 0, 1);
		func_512(uParam1, 64);
	}
}

void func_1018(var uParam0, var uParam1)
{
	if (uParam1->f_18 < 0f)
	{
		if (uParam1->f_17 > 0.9f)
		{
			if (uParam0->f_90 != -1)
			{
				uParam1->f_73 = uParam0->f_90;
			}
			else if (func_271() && !func_162(uParam0, 16))
			{
				if (func_162(uParam0, 512))
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

void func_1019(var uParam0, var uParam1)
{
	if (!func_163(uParam1, 65536))
	{
		if (func_1342(uParam0, uParam1))
		{
			if (func_162(uParam0, 524288))
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
			func_512(uParam1, 65536);
		}
	}
}

bool func_1020(var uParam0, var uParam1)
{
	if (!func_161(*uParam0, 9))
	{
		func_585(uParam0, uParam1, 3);
		return true;
	}
	if (!func_163(uParam1, 131072) && func_1343(uParam0->f_1))
	{
		func_589(&(uParam0->f_24), 0);
		func_512(uParam1, 131072);
	}
	if (!func_163(uParam1, 262144))
	{
		if (_0x285d36c5c72b0569(*uParam0) < 0.5f || _0x285d36c5c72b0569(uParam0->f_1) < 0.5f)
		{
			func_589(&(uParam0->f_28), 0);
			func_512(uParam1, 262144);
		}
	}
	if (!func_163(uParam1, 1))
	{
		if ((((((((((is_entity_dead(uParam0->f_1) || func_163(uParam1, 4194304)) || func_1344(uParam0, uParam1)) || func_1345(uParam0, uParam1, 1)) || func_1346(uParam0, uParam1, 1)) || func_1025(uParam0, uParam1, 1)) || func_1347(uParam0, uParam1, 1)) || func_1348(uParam0, uParam1, 1)) || func_1349(uParam0, uParam1, 1)) || func_1350(uParam0, uParam1, 1)) || (func_162(uParam0, 4096) && func_1351(uParam0, uParam1, 1)))
		{
			func_1352(uParam1);
			if ((!func_162(uParam0, 4096) && func_1351(uParam0, uParam1, 0)) || func_1345(uParam0, uParam1, 0))
			{
				func_512(uParam1, 128);
				_0x914071ff93af2692(player_id(), 999f);
				_0x651f0530083c0e5a(uParam0->f_1, 0);
				set_ped_shoot_rate(uParam0->f_1, 200);
			}
			if (func_162(uParam0, 64) && ((!does_entity_exist(uParam0->f_2) || !func_161(uParam0->f_2, 1)) || (uParam0->f_2 != uParam0->f_1 && has_entity_been_damaged_by_entity(uParam0->f_2, *uParam0, 0, 0))))
			{
				func_585(uParam0, uParam1, 5);
				return true;
			}
			else if (func_1344(uParam0, uParam1))
			{
				func_585(uParam0, uParam1, 4);
				return true;
			}
			else if (((func_1347(uParam0, uParam1, 0) || func_1353(uParam0, uParam1, 0) >= 2) || func_1349(uParam0, uParam1, 0)) || is_entity_dead(uParam0->f_1))
			{
				func_585(uParam0, uParam1, 1);
				return true;
			}
			else if (func_1025(uParam0, uParam1, 0))
			{
				func_585(uParam0, uParam1, 2);
				return true;
			}
			else if (func_1353(uParam0, uParam1, 0) == 1)
			{
				if (func_162(uParam0, 8192))
				{
					func_585(uParam0, uParam1, 1);
				}
				else
				{
					func_585(uParam0, uParam1, 4);
				}
				return true;
			}
			else if (func_1345(uParam0, uParam1, 0) || func_163(uParam1, 4194304))
			{
				if (func_162(uParam0, 64))
				{
					func_585(uParam0, uParam1, 4);
				}
				else if (func_162(uParam0, 4096))
				{
					func_585(uParam0, uParam1, 4);
				}
				else
				{
					func_585(uParam0, uParam1, 3);
				}
				return true;
			}
			else
			{
				if (func_162(uParam0, 4096) && func_1351(uParam0, uParam1, 0))
				{
					func_585(uParam0, uParam1, 4);
				}
				else if (func_162(uParam0, 67108864) && func_1350(uParam0, uParam1, 0))
				{
					func_585(uParam0, uParam1, 4);
				}
				else if (func_162(uParam0, 134217728))
				{
					func_585(uParam0, uParam1, 4);
				}
				else
				{
					func_585(uParam0, uParam1, 3);
					if (func_161(Global_35, 0))
					{
						func_1027(uParam0, uParam1);
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

bool func_1021(int iParam0)
{
	if (!func_528(iParam0))
	{
		return false;
	}
	return (((*Global_1888801)[iParam0]->f_20 == 1 || (*Global_1888801)[iParam0]->f_20 == 2) && !func_1354(iParam0));
}

void func_1022(var uParam0)
{
	set_ped_config_flag(*uParam0, 186, false);
	decor_set_bool(*uParam0, func_1355(), true);
}

bool func_1023(var uParam0)
{
	Global_1425351->f_18 = uParam0;
	func_1356(1);
	return true;
}

int func_1024(vector3 vParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_361(*(*Global_1425351)[iVar0]))
		{
			*(*Global_1425351)[iVar0] = { vParam0 };
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_1025(var uParam0, var uParam1, bool bParam2)
{
	if (func_3(uParam1->f_58, 8))
	{
		return true;
	}
	if (func_162(uParam0, 16) && func_162(uParam0, 8192))
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
		if (func_1357(iVar0, func_162(uParam0, 512)))
		{
			func_35(&(uParam1->f_58), 8);
			return true;
		}
		if (func_162(uParam0, 268435456) && func_163(uParam1, 65536))
		{
			func_35(&(uParam1->f_58), 8);
			return true;
		}
	}
	iVar1 = 0;
	if (func_162(uParam0, 512))
	{
		iVar1 = 1;
	}
	iVar2 = get_current_ped_weapon_entity_index(uParam0->f_1, iVar1);
	if (func_1358(iVar2))
	{
		if (!is_entity_dead(iVar2))
		{
			if (_0x7a76104cc2cc69e8(iVar2, 1, 1))
			{
				if (bParam2)
				{
					func_35(&(uParam1->f_58), 8);
				}
				return true;
			}
		}
	}
	if (func_3(uParam1->f_58, -2147483648))
	{
		if (func_204(&(uParam1->f_29), 0.05f))
		{
			if (bParam2)
			{
				func_35(&(uParam1->f_58), 8);
			}
			return true;
		}
	}
	else if (is_bullet_in_area(get_entity_coords(iVar2, true, false), uParam0->f_83, true))
	{
		func_176(&(uParam1->f_29));
		func_35(&(uParam1->f_58), -2147483648);
	}
	return false;
}

void func_1026(var uParam0)
{
	if (uParam0->f_67 == 1)
	{
		if (func_3(Global_40.f_9145, 1))
		{
			func_76(&(Global_40.f_9145), 1);
		}
	}
}

void func_1027(var uParam0, var uParam1)
{
	set_player_invincible(player_id(), false);
	disable_attribute_overpower(Global_35, 0);
	if (func_163(uParam1, 4194304))
	{
		func_400(Global_35, 0, 0);
	}
	else if (func_1348(uParam0, uParam1, 0))
	{
		if (func_162(uParam0, 524288))
		{
			func_400(Global_35, 0, 0);
		}
		else
		{
			explode_ped_head(Global_35, -506285289);
		}
	}
	else if (func_1359(uParam0, uParam1))
	{
		func_400(Global_35, 0, 0);
	}
}

bool func_1028(var uParam0, var uParam1)
{
	if (func_162(uParam1, 4194304))
	{
		return true;
	}
	func_1030();
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

bool func_1029(var uParam0, var uParam1, int iParam2, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	if (func_162(uParam0, 33554432) && _0xa54000d4bfd90bde(player_id()))
	{
		return false;
	}
	if (func_162(uParam0, 4194304))
	{
		return true;
	}
	switch (uParam1->f_59)
	{
		case 0:
			func_35(&(uParam1->f_60), 2048);
			destroy_all_cams(false);
			_0x6e969927cf632608(1);
			_0xe3639db78b3b5400(iParam3);
			func_176(&(uParam1->f_26));
			func_591(uParam1, 3);
			break;
		case 3:
			func_1030();
			if (!_0x1204eb53a5fbc63d())
			{
				if (iParam3 != player_ped_id())
				{
					render_script_cams(false, bParam7, 3000, true, false, 0);
				}
				func_591(uParam1, 0);
				clear_ped_tasks(iParam2, 1, 0);
				return true;
			}
			break;
		default:
			func_591(uParam1, 0);
			break;
	}
	return false;
}

void func_1030()
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

int func_1031(int iParam0, int iParam1)
{
	iVar1 = func_1360(iParam0, iParam1);
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

int func_1032(int iParam0, bool bParam1, bool bParam2)
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
				if (!bParam1 || func_1361(iVar2))
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

int func_1033(int iParam0)
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

bool func_1034(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

bool func_1035(int iParam0, bool bParam1)
{
	if (!func_1034(iParam0))
	{
		return false;
	}
	if ((func_1362(iParam0, 1) && !func_1038(iParam0)) && func_1363(iParam0))
	{
		return false;
	}
	if (!func_1362(iParam0, 2))
	{
		return false;
	}
	if (!bParam1)
	{
		if (!func_1364(iParam0, 0))
		{
			return false;
		}
	}
	return true;
}

int func_1036(int iParam0)
{
	if (!func_1034(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0];
}

bool func_1037(int iParam0)
{
	return iParam0 != 0;
}

bool func_1038(int iParam0)
{
	if (!func_1034(iParam0))
	{
		return false;
	}
	return (*Global_1895087)[iParam0]->f_2 == get_id_of_this_thread();
}

void func_1039(int iParam0, int iParam1)
{
	if (func_139() != -1)
	{
		return;
	}
	if (!func_1034(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (Global_24887[iParam0] || iParam1);
}

void func_1040(int iParam0)
{
	if (!func_1034(iParam0))
	{
		return;
	}
	(*Global_1895087)[iParam0]->f_2 = get_id_of_this_thread();
}

bool func_1041(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

int func_1042(int iParam0)
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

bool func_1043(int iParam0)
{
	bVar0 = func_1365(iParam0, 256);
	return bVar0;
}

bool func_1044(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

void func_1045(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

void func_1046(int iParam0)
{
	if (_does_volume_exist((*Global_1347702)[iParam0]->f_41))
	{
		func_1366((*Global_1347702)[iParam0]->f_41);
		if (iParam0 == 91 || iParam0 == 129)
		{
			_0xd17672447692478e((*Global_1347702)[iParam0]->f_41, 0);
		}
		_delete_volume((*Global_1347702)[iParam0]->f_41);
	}
}

void func_1047(int iParam0)
{
	if (func_1367(iParam0, &iVar1, &iVar0))
	{
		if (func_1368(iVar1, iVar0, 1))
		{
			func_1369(iVar1, iVar0);
		}
	}
}

int func_1048(int iParam0)
{
	return shift_left(1, iParam0);
}

void func_1049(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_1050()
{
	return Global_40.f_4283.f_1;
}

bool func_1051(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_139() != -1)
	{
		return true;
	}
	if (iParam2 == 0 && func_442(0, 1, 1))
	{
		return false;
	}
	if (&Global_1879534)
	{
		return false;
	}
	if (func_1370(iParam0, iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_1371(iVar0, &iParam0))
		{
			Global_40.f_4942[iVar0]->f_59 = iParam1;
			if (iParam3 == iParam4)
			{
				func_818(iVar0, 512, 1);
			}
			else
			{
				func_1372(iVar0, 512, 1);
			}
		}
		iVar0++;
	}
	return true;
}

int func_1052(int iParam0)
{
	if (!func_254(iParam0))
	{
		return -15;
	}
	return func_1373(iParam0);
}

bool func_1053(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_812(iParam1) || !func_812(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_1054(int iParam0)
{
	func_29(1);
}

bool func_1055(int iParam0)
{
	func_136(iParam0, &iVar0, &iVar1);
	iVar2 = Global_1905944[iVar0];
	return is_bit_set(iVar2, iVar1);
}

void func_1056(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1057(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_1058(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 6:
		case 7:
		case 8:
			return false;
	}
	return true;
}

bool func_1059(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return true;
	}
	return false;
}

Vector3 func_1060(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return -2578.509f, 389.3037f, 148.3825f;
	}
	return (*Global_1888801)[iParam0]->f_15;
}

float func_1061()
{
	switch (Global_40.f_4283)
	{
		case 2:
		case 6:
		case 7:
		case 8:
			return 70f;
	}
	return 25f;
}

bool func_1062()
{
	return Global_1894899 & 2 != 0;
}

bool func_1063(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1 && func_1374(iParam0, bParam2, iParam3))
	{
		return true;
	}
	return false;
}

bool func_1064(int iParam0, int iParam1)
{
	if (iParam1 != -1)
	{
		return false;
	}
	if (func_1375(iParam0))
	{
		switch (iParam0)
		{
			case 14:
			case 34:
				return false;
		}
	}
	switch (iParam0)
	{
		case 5:
		case 8:
		case 10:
		case 12:
		case 13:
		case 14:
		case 18:
		case 21:
		case 27:
		case 28:
		case 29:
		case 34:
		case 40:
		case 41:
		case 44:
		case 46:
		case 48:
		case 51:
		case 54:
		case 55:
		case 63:
			return true;
	}
	return false;
}

int func_1065(int iParam0)
{
	return func_1376(iParam0);
}

bool func_1066(var uParam0, int iParam1)
{
	return (uParam0->f_63 && iParam1) != 0;
}

bool func_1067(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1 && func_642(iParam0, bParam2, iParam3))
	{
		return true;
	}
	return false;
}

bool func_1068(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_1069(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

void func_1070(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_1071(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_1072(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

int func_1073(int iParam0)
{
	iVar0 = func_654(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1377(iVar0);
}

int func_1074(int iParam0, int iParam1)
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
			func_1378(iVar2);
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

void func_1075()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

void func_1076(int iParam0, int iParam1)
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
			func_1379((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1379(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_254(&(Global_1898164->f_1[0])))
	{
		func_263(&(Global_1898164->f_1[0]), 3);
	}
}

int func_1077(int iParam0, int iParam1)
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

bool func_1078(int iParam0)
{
	return iParam0 > -1;
}

bool func_1079(int iParam0)
{
	func_1086(iParam0, &iVar0, &iVar1);
	return is_bit_set(&(Global_1357549->f_1866[iVar0]), iVar1);
}

void func_1080(int iParam0, int iParam1)
{
	_journal_write_entry(iParam0);
	if (iParam1 == 1)
	{
		func_1081(1);
	}
}

void func_1081(bool bParam0)
{
	if (bParam0)
	{
		func_35(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_76(&(Global_40.f_12019.f_42), 1);
	}
}

bool func_1082(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_1083(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	uVar0 = *iParam6;
	if (_datafile_get_hash(&uVar0, &vParam0))
	{
		*iParam6 = uVar0;
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

int func_1084(int iParam0)
{
	switch (iParam0)
	{
		case 1928985868:
			return 7;
		case 1784174017:
			return 8;
		case 1763160914:
			return 10;
		case 2051438686:
			return 11;
		case 1155669136:
			return 1;
		case 1871598:
			return 9;
		case -1379218218:
			return 6;
		case 1059981727:
			return 2;
		case -1216736853:
			return 4;
		case 1191674135:
			return 3;
		case -112322057:
			return 12;
		case -823778732:
			return 25;
		case 1338623152:
			return 16;
		case 1401247110:
			return 20;
		case 1007627076:
			return 13;
		case 864606355:
			return 31;
		case 1338525796:
			return 18;
		case -2076625074:
			return 26;
		case -288774278:
			return 15;
		case 1934998953:
			return 14;
		case -1148482643:
			return 32;
		case 603776282:
			return 22;
		case 1339344423:
			return 27;
		case 1562395675:
			return 19;
		case 1316832864:
			return 28;
		case -1619448191:
			return 29;
		case -520130198:
			return 24;
		case 1418253584:
			return 30;
		case -348149883:
			return 33;
		case 814591385:
			return 34;
		case 981348373:
			return 17;
		case -1100417366:
			return 35;
		case 1438856241:
			return 23;
		case -1989143022:
			return 21;
		default:
			break;
	}
	return 0;
}

bool func_1085(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (_datafile_get_int(iParam6, &vParam0))
	{
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

int func_1086(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1380(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1087(var uParam0)
{
	*uParam0 = 176656832;
	uParam0->f_1 = -15;
	uParam0->f_2 = 1017034651;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_1088(int iParam0, int iParam1, bool bParam2)
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

int func_1089(bool bParam0)
{
	if (func_139() == -1)
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

int func_1090(int iParam0)
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

void func_1091(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && iParam0));
}

void func_1092(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || iParam0);
}

bool func_1093(int iParam0)
{
	return func_711(iParam0) == -427144552;
}

bool func_1094(int iParam0)
{
	if (func_139() != -1)
	{
		return false;
	}
	if (func_712(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_1099(iParam0, &uVar0, 1, 0, 0);
	}
	return func_317(iParam0, 1, 0);
}

void func_1095(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_711(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_716(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_411(iVar0))
	{
		if (func_139() == -1)
		{
			func_717(iVar0);
		}
		if (bParam2 || (!has_ped_got_weapon(Global_35, iVar0, 0, false) && func_696(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_770(iParam0, iParam1, 0, 0, 0);
				play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_1096(int iParam0, int iParam1)
{
	if (func_413(iParam0, 58855631))
	{
		func_1239(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

int func_1097(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_412(iParam0, 0))
	{
		return 0;
	}
	if (!func_718(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_1089(bParam3), iParam0);
}

int func_1098(int iParam0, bool bParam1)
{
	if (func_722(iParam0))
	{
		return get_ped_ammo_by_type(Global_35, iParam0);
	}
	return _0xe787f05dfc977bde(func_1089(bParam1), iParam0, 0);
}

bool func_1099(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1381(&iParam0);
	if (!func_412(iParam0, 0))
	{
		return false;
	}
	if (!func_718(0))
	{
		bParam3 = true;
	}
	if (func_1093(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_one_handed(iParam0))
		{
			Var0 = { func_1224(0) };
			Var4.f_9 = -1591664384;
			if (!func_1119(iParam0, &Var0, 1728382685, 0))
			{
				return false;
			}
			else if (func_1120(iParam0, &Var4, 1728382685))
			{
				return false;
			}
			if (func_1225(iParam0, 1))
			{
				if (!func_1119(iParam0, &Var0, -649335959, 0))
				{
					return false;
				}
				else if (func_1120(iParam0, &Var4, -649335959))
				{
					return false;
				}
			}
		}
		else if (!func_1382(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_1097(iParam0, uParam1, bParam3, bParam4);
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
		iVar28 = func_1383(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = _0xe787f05dfc977bde(func_1089(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_1100(int iParam0, int iParam1)
{
	if (!func_412(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_711(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_413(iParam0, 1399091007))
	{
		func_1162(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_1101(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_1384(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1385(&Var0, func_1224(0));
	}
	if (!func_1386(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_1172(iVar14);
	return uVar15;
}

int func_1102()
{
	return _0x62cab7db62ead434(-2076669067, 0);
}

int func_1103(int iParam0)
{
	return _0xec3959e9950bf56b(iParam0);
}

void func_1104(int iParam0)
{
	if (func_139() != -1)
	{
		return;
	}
	iVar0 = func_1387(iParam0);
	fVar1 = func_1388(iParam0);
	if ((Global_1347477->f_117 || !func_492(31)) || !func_1389(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_1390(iVar0) >= 7)
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
	func_1391(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_500(_create_var_string(6, func_1392(iParam0), fVar1), "itemtype_textures", func_1393(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_1105(int iParam0)
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

int func_1106(int iParam0, int iParam1)
{
	if (!func_1278(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_int(&uVar5, &Var0);
	return uVar5;
}

char* func_1107(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_707() >= 12)
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_POSTED_OBJ", func_1394(), 12);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_FOUND_OBJ", func_1395(), 12);
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
			else if (func_1144() >= 30)
			{
				sParam3 = _create_var_string(2, "COL_DB_POSTED_OBJ", func_1396(), 30);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_DB_FOUND_OBJ", func_1144(), 30);
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
				sParam3 = _create_var_string(2, "COL_LF_CAUGHT_OBJ", func_1397(), 13);
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
			else if (func_1145() >= 10)
			{
				sParam3 = _create_var_string(2, "COL_RC_POSTED_OBJ", func_1398(), 10);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_RC_FOUND_OBJ", func_1145(), 10);
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
				sParam3 = _create_var_string(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_1106(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_1108(int iParam0, int iParam1, int iParam2)
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

bool func_1109(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_add_entry_hash(3, iParam1, vParam2, get_hash_key(sParam5), get_hash_key(sParam6), 0);
	}
	return true;
}

bool func_1110(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	_uilog_add_or_update_objective(3, iParam1, get_hash_key(sParam2), sParam2, false, false, false);
	_uilog_set_entry_pinned(3, iParam1, true);
	_uilog_set_entry_brief_texture(3, iParam1, get_hash_key(sParam4), get_hash_key(sParam5));
	_uilog_set_entry_icon_texture(3, iParam1, iParam6, iParam7);
	_uilog_update_entry_subheader(3, iParam1, _create_var_string(2, sParam3));
	return true;
}

bool func_1111(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_1399(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_317(iVar2, 1, 0) || func_1401(func_1400(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1114(func_1399(iVar0))), func_1114(func_1399(iVar0)), bVar1, true, false);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1144() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1402(iVar0)), func_1402(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1396() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1402(iVar0)), func_1402(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1402(iVar0)), func_1402(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_1155(iParam3, func_1403(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1151(iVar2) - iParam7) >= func_1106(iParam3, func_1404(iVar0));
				}
				else
				{
					bVar1 = func_1151(iVar2) >= func_1106(iParam3, func_1404(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_1151(iVar2) + iParam7) >= func_1106(iParam3, func_1404(iVar0));
			}
			else
			{
				bVar1 = func_1151(iVar2) >= func_1106(iParam3, func_1404(iVar0));
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1405(iVar2)), func_1405(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1406(_0x126cbebba46693cf(iVar0, 1995362678, 0)))
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
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1407(_0x126cbebba46693cf(iVar0, iParam2, 0))), func_1407(_0x126cbebba46693cf(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1145() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1408(iVar0)), func_1408(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1398() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1408(iVar0)), func_1408(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1408(iVar0)), func_1408(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_1155(iParam3, func_1403(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1151(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1409(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1409(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1410(iVar2)), func_1410(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_1112(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_1397() >= 13)
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

bool func_1113(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_254(func_620(0)) && ((func_1411(0) == 1 || func_1411(0) == 8) || func_1411(0) == 6))
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

char* func_1114(int iParam0)
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

void func_1115(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	set_bit(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_1116(int iParam0)
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
			func_1412(1);
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
			func_1413(1);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_1413(2);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_1413(3);
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
			func_1414(1);
			break;
		case 34:
			func_1415(1);
			break;
		case 35:
			func_1416(1);
			break;
		case 36:
			break;
		case 37:
			func_1417(0);
			break;
		case 38:
			func_1418(0);
			break;
		case 39:
			func_1419(0);
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
			if ((!&Global_1879534 && func_691()) && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_251("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_196(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_691()) && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_251("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_196(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_691()) && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_251("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_196(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_691()) && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_251("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_196(589, 0);
			break;
		case 24:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			if (func_139() == -1)
			{
				if (!func_1184(99217379) || func_1420(99217379) == 2110595215)
				{
					if (func_144())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = 899611344;
					}
					if (!func_317(iVar0, 1, 0))
					{
						func_763(iVar0, 1, 752097756);
					}
					func_742(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_139() == -1)
			{
				if (!func_317(1013902307, 1, 0))
				{
					func_763(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_139() == -1)
			{
				if (!func_317(1013902307, 1, 0))
				{
					func_763(1013902307, 1, 752097756);
				}
				if (!func_317(142640135, 1, 0))
				{
					func_763(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_139() == -1)
			{
				if (!func_317(786809402, 1, 0))
				{
					func_763(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_139() == -1)
			{
				if (!func_317(786809402, 1, 0))
				{
					func_763(786809402, 1, 752097756);
				}
				if (!func_317(-518019409, 1, 0))
				{
					func_763(-518019409, 1, 752097756);
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
			func_1421();
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

bool func_1117(int iParam0)
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

int func_1118(int iParam0, int iParam1)
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

bool func_1119(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_1383(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_1120(int iParam0, var uParam1, int iParam2)
{
	if (func_1319(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_1121(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_412(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_1089(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_1122(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_1422(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1228(*uParam1, &Var0, bParam6, 0))
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
	if (!func_718(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_1089(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_1123(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_1423(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

void func_1124(int iParam0)
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
	iVar2 = func_260();
	func_304(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	decor_set_int(Global_35, sVar1, iVar2);
}

int func_1125(int iParam0)
{
	if (func_1424(iParam0))
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

bool func_1126(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_1127(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_0x705be297eebdb95d(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			if (!func_492(50))
			{
				if (!func_492(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_492(51))
			{
				if (!func_492(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_1128(int iParam0, int iParam1, var uParam2)
{
	if (!func_412(iParam1, 0))
	{
		return false;
	}
	if (func_711(iParam1) != -1037537535)
	{
		return false;
	}
	bVar1 = func_139() != -1;
	iVar2 = _get_metaped_type(iParam0);
	if (func_714(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_788(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_413(iParam1, 866047851))
	{
		iVar5 = func_789(iVar4, 1);
		if (func_1425(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5] != iVar8)
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
			iVar3 = func_714(&(Global_1946804->f_1497.f_1[iVar5]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745;
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5] != &Global_1946804->f_57[iVar5] && func_413(iParam1, -1638171711))
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
			if (func_1306(1868067663, &uVar0))
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
				iVar10 = func_1426(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1426(&(Global_1946804->f_1497.f_1[iVar5]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_714(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6] && func_413(&(Global_1946804->f_1497.f_1[iVar5]), -1638171711))
				{
					*uParam2 = -357399012;
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != &Global_1946804->f_57[iVar6] && func_1427(&(Global_1946804->f_1497.f_1[iVar5])))
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

void func_1129()
{
	_0xfe7c9cf376d23342(player_id(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_1130()
{
	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	set_player_health_recharge_multiplier(player_id(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	_0x08e22898a6af4905(player_id(), (1f - fVar0));
	_0xfeca17cf3343694b(player_id(), (1f - fVar0));
	_0xbbadfb5e5e5766fb(player_id(), (1f - fVar1));
}

int func_1131()
{
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_317(func_1428(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1132(int iParam0)
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

bool func_1133(int iParam0, int iParam1)
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
	if (func_317(iVar0, 1, 0) && func_317(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_1134(int iParam0)
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

bool func_1135(int iParam0, int iParam1)
{
	iVar0 = func_1429(iParam0);
	if (iVar0 != -15)
	{
		func_304(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_625(iVar0, 1);
	}
	return false;
}

void func_1136(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_500(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_1137(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_1243())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_500(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_1430(iVar0);
			func_1431(iVar0, 0, 0);
		}
		func_500(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		_money_increment_cash_balance(iVar1, iParam4);
		func_498(func_270(1644987397), iVar1);
	}
}

void func_1138(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_1139(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_1140(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_1141(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_1142(int iParam0)
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
	iVar1 = func_1151(iVar9);
	iVar2 = func_1151(iVar10);
	iVar3 = func_1151(iVar11);
	iVar5 = func_1152(iVar9);
	iVar6 = func_1152(iVar10);
	iVar7 = func_1152(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_1151(iVar12);
		iVar8 = func_1152(iVar12);
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

void func_1143(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_1144()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1432(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1145()
{
	return _0x5461c821d00fe15a(2103522376, 0);
}

bool func_1146(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_1409(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1409(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1409(iVar0))
		{
			*sParam2++;
		}
		if (func_1409(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_1409(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1409(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1409(iVar0))
		{
			*sParam2++;
		}
		if (func_1409(iVar1))
		{
			*sParam2++;
		}
		if (func_1409(iVar0) && func_1409(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_1409(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1409(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1409(iVar0))
		{
			*sParam2++;
		}
		if (func_1409(iVar1))
		{
			*sParam2++;
		}
		if (func_1409(iVar2))
		{
			*sParam2++;
		}
		if ((func_1409(iVar0) && func_1409(iVar1)) && func_1409(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1409(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1409(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1409(iVar0))
		{
			*sParam2++;
		}
		if (func_1409(iVar1))
		{
			*sParam2++;
		}
		if (func_1409(iVar2))
		{
			*sParam2++;
		}
		if (func_1409(iVar3))
		{
			*sParam2++;
		}
		if (((func_1409(iVar0) && func_1409(iVar1)) && func_1409(iVar2)) && func_1409(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_1147(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_1433(1497516462);
			func_1434(2016141805);
			func_1434(1010885152);
			func_1434(-502324015);
			break;
		case 2016141805:
			func_1434(1497516462);
			func_1433(2016141805);
			func_1434(1010885152);
			func_1434(-502324015);
			break;
		case 1010885152:
			func_1434(1497516462);
			func_1434(2016141805);
			func_1433(1010885152);
			func_1434(-502324015);
			break;
		case -502324015:
			func_1434(1497516462);
			func_1434(2016141805);
			func_1434(1010885152);
			func_1433(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_1434(-538889627);
			func_1434(-538880323);
			func_1434(-1056767524);
			func_1433(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_1435();
			func_1433(iParam0);
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
			func_1436();
			func_1433(iParam0);
			break;
		case 2019386373:
			func_1434(-664252410);
			func_1434(2109952320);
			func_1433(2019386373);
			break;
		case -664252410:
			func_1434(2019386373);
			func_1434(2109952320);
			func_1433(-664252410);
			break;
		case 2109952320:
			func_1434(2019386373);
			func_1434(-664252410);
			func_1433(2109952320);
			break;
		case -1674179981:
			func_1434(-1835851517);
			func_1434(-1838352012);
			func_1433(-1674179981);
			break;
		case -1835851517:
			func_1434(-1674179981);
			func_1434(-1838352012);
			func_1433(-1835851517);
			break;
		case -1838352012:
			func_1434(-1674179981);
			func_1434(-1835851517);
			func_1433(-1838352012);
			break;
		case -1717960576:
			func_1434(210001842);
			func_1433(-1717960576);
			break;
		case 210001842:
			func_1434(-1717960576);
			func_1433(210001842);
			break;
		case -150493654:
			func_1434(-1271608261);
			func_1434(1846061697);
			func_1434(-1145519186);
			func_1433(-150493654);
			break;
		case -1271608261:
			func_1434(-150493654);
			func_1434(1846061697);
			func_1434(-1145519186);
			func_1433(-1271608261);
			break;
		case 1846061697:
			func_1434(-150493654);
			func_1434(-1271608261);
			func_1434(-1145519186);
			func_1433(1846061697);
			break;
		case -1145519186:
			func_1434(-150493654);
			func_1434(-1271608261);
			func_1434(1846061697);
			func_1433(-1145519186);
			break;
		case 1766284049:
			func_1434(280705402);
			func_1434(1926308480);
			func_1433(1766284049);
			break;
		case 280705402:
			func_1434(1766284049);
			func_1434(1926308480);
			func_1433(280705402);
			break;
		case 1926308480:
			func_1434(1766284049);
			func_1434(280705402);
			func_1433(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_1434(439465264);
				func_1433(1609506757);
			}
			else
			{
				func_1434(1609506757);
				func_1434(439465264);
			}
			break;
		case 439465264:
			if (func_660(1609506757))
			{
				if (bParam1)
				{
					func_1433(439465264);
				}
				else
				{
					func_1434(439465264);
				}
			}
			break;
		case 1822001510:
			func_1434(-1612662716);
			func_1433(1822001510);
			break;
		case -1612662716:
			func_1434(1822001510);
			func_1433(-1612662716);
			break;
		case 1306158345:
			func_1434(1952610440);
			func_1434(-223469678);
			func_1434(-404698347);
			func_1434(1517904467);
			func_1433(1306158345);
			break;
		case 1952610440:
			func_1434(1306158345);
			func_1434(-223469678);
			func_1434(-404698347);
			func_1434(1517904467);
			func_1433(1952610440);
			break;
		case -223469678:
			func_1434(1306158345);
			func_1434(1952610440);
			func_1434(-404698347);
			func_1434(1517904467);
			func_1433(-223469678);
			break;
		case -404698347:
			func_1434(1306158345);
			func_1434(1952610440);
			func_1434(-223469678);
			func_1434(1517904467);
			func_1433(-404698347);
			break;
		case 1517904467:
			func_1434(1306158345);
			func_1434(1952610440);
			func_1434(-223469678);
			func_1434(-404698347);
			func_1433(1517904467);
			break;
		case 1376646519:
			func_1434(931649776);
			func_1434(-434590080);
			func_1434(1743048395);
			func_1434(449774763);
			func_1433(1376646519);
			break;
		case 931649776:
			func_1434(1376646519);
			func_1434(-434590080);
			func_1434(1743048395);
			func_1434(449774763);
			func_1433(931649776);
			break;
		case -434590080:
			func_1434(1376646519);
			func_1434(931649776);
			func_1434(1743048395);
			func_1434(449774763);
			func_1433(-434590080);
			break;
		case 1743048395:
			func_1434(1376646519);
			func_1434(931649776);
			func_1434(-434590080);
			func_1434(449774763);
			func_1433(1743048395);
			break;
		case 449774763:
			func_1434(1376646519);
			func_1434(931649776);
			func_1434(-434590080);
			func_1434(1743048395);
			func_1433(449774763);
			break;
		case -1414537028:
			func_1434(38162571);
			func_1434(1350391819);
			func_1434(54073871);
			func_1433(-1414537028);
			break;
		case 38162571:
			func_1434(-1414537028);
			func_1434(1350391819);
			func_1434(54073871);
			func_1433(38162571);
			break;
		case 1350391819:
			func_1434(-1414537028);
			func_1434(38162571);
			func_1434(54073871);
			func_1433(1350391819);
			break;
		case 54073871:
			func_1434(-1414537028);
			func_1434(38162571);
			func_1434(1350391819);
			func_1433(54073871);
			break;
		case 198200492:
			func_1433(198200492);
			func_1434(-1124061431);
			func_1434(52706132);
			func_1434(-259123672);
			break;
		case -1124061431:
			func_1434(198200492);
			func_1433(-1124061431);
			func_1434(52706132);
			func_1434(-259123672);
			break;
		case 52706132:
			func_1434(198200492);
			func_1434(-1124061431);
			func_1433(52706132);
			func_1434(-259123672);
			break;
		case -259123672:
			func_1434(198200492);
			func_1434(-1124061431);
			func_1434(52706132);
			func_1433(-259123672);
			break;
		case -919512195:
			func_1433(-919512195);
			func_1434(-1925798111);
			func_1434(420709909);
			func_1434(1703426636);
			break;
		case -1925798111:
			func_1433(-1925798111);
			func_1434(-919512195);
			func_1434(420709909);
			func_1434(1703426636);
			break;
		case 420709909:
			func_1433(420709909);
			func_1434(-919512195);
			func_1434(-1925798111);
			func_1434(1703426636);
			break;
		case 1703426636:
			func_1433(1703426636);
			func_1434(-919512195);
			func_1434(-1925798111);
			func_1434(420709909);
			break;
		case -1223121209:
			func_1433(-1223121209);
			func_1434(630808005);
			break;
		case 630808005:
			func_1433(630808005);
			func_1434(-1223121209);
			break;
		case 1453909576:
			func_1433(1453909576);
			func_1434(1643531967);
			break;
		case 1643531967:
			func_1433(1643531967);
			func_1434(1453909576);
			break;
		case 0:
			func_1433(0);
			func_1434(473295046);
			func_1434(-1738165526);
			break;
		case 473295046:
			func_1433(473295046);
			func_1434(0);
			func_1434(-1738165526);
			break;
		case -1738165526:
			func_1433(-1738165526);
			func_1434(0);
			func_1434(473295046);
			break;
		case 932909855:
			func_1433(932909855);
			func_1434(2051822093);
			break;
		case 2051822093:
			func_1433(2051822093);
			func_1434(932909855);
			break;
		case 405586984:
			func_1433(405586984);
			func_1434(1509509592);
			func_1434(-959357075);
			func_1434(-1311865656);
			break;
		case 1509509592:
			func_1433(1509509592);
			func_1434(405586984);
			func_1434(-959357075);
			func_1434(-1311865656);
			break;
		case -959357075:
			func_1433(-959357075);
			func_1434(1509509592);
			func_1434(405586984);
			func_1434(-1311865656);
			break;
		case -1311865656:
			func_1433(-1311865656);
			func_1434(1509509592);
			func_1434(-959357075);
			func_1434(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_1433(-524145696);
			}
			else
			{
				func_1434(-524145696);
			}
			func_1434(1626481264);
			func_1434(282809459);
			break;
		case 282809459:
			func_1433(282809459);
			func_1434(1626481264);
			func_1434(-524145696);
			break;
		case 1626481264:
			func_1433(1626481264);
			func_1434(-524145696);
			func_1434(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_1433(885203519);
			}
			else
			{
				func_1434(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_1433(-1080627546);
			}
			else
			{
				func_1434(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_660(iParam0))
				{
					func_1433(iParam0);
				}
			}
			else if (func_660(iParam0))
			{
				func_1434(iParam0);
			}
			break;
	}
}

void func_1148(int iParam0)
{
	if (!func_1437(iParam0))
	{
		func_1439(func_1438(iParam0));
	}
}

int func_1149()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1437(_0x126cbebba46693cf(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1150(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_1151(iVar9);
	iVar2 = func_1151(iVar10);
	iVar3 = func_1151(iVar11);
	iVar5 = func_1152(iVar9);
	iVar6 = func_1152(iVar10);
	iVar7 = func_1152(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_1151(iVar12);
		iVar8 = func_1152(iVar12);
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

int func_1151(int iParam0)
{
	if (func_317(iParam0, 1, 0))
	{
		iVar0 = func_696(iParam0, 0, 0);
	}
	return iVar0;
}

int func_1152(int iParam0)
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

int func_1153(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0);
}

void func_1154(int iParam0, int iParam1)
{
	_0x3ea62e56f386c997(iParam0, iParam1);
}

int func_1155(int iParam0, int iParam1)
{
	if (!func_1278(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

void func_1156(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_1155(iParam1, 5) || iParam0 == func_1155(iParam1, 6)) || iParam0 == func_1155(iParam1, 7)) || iParam0 == func_1155(iParam1, 8)) || iParam0 == func_1155(iParam1, 9))
	{
		func_1146(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_708(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_710(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_1157(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if ((((iParam0 == func_1155(iParam1, 5) || iParam0 == func_1155(iParam1, 6)) || iParam0 == func_1155(iParam1, 7)) || iParam0 == func_1155(iParam1, 8)) || iParam0 == func_1155(iParam1, 9))
	{
		if (func_1146(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_708(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_710(51, 0, 0, iVar0, func_1106(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_708(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_710(51, 0, 0, iVar0, func_1106(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_1158()
{
	if (func_242((*Global_1347702)[37]->f_15) && Global_1392388->f_7)
	{
		return true;
	}
	return false;
}

void func_1159(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
}

void func_1160(int iParam0)
{
	if (!func_1440(iParam0))
	{
		_0x3ea62e56f386c997(iParam0, 1);
	}
}

void func_1161(int iParam0)
{
	_0x398fab9c96a81924(iParam0, 1);
}

void func_1162(int iParam0, int iParam1, var uParam2)
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

bool func_1163(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1441();
	if (iParam2 == 39)
	{
		Var0 = { func_798(iParam0, 1, 0) };
		iParam2 = func_789(func_799(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_413(iParam0, 866047851) && func_1425(&(Global_1946804->f_1378)) >= 2)
	{
		return false;
	}
	if ((func_1165(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2])
	{
		func_1442(func_1229(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_1443(iParam2);
	func_1444(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2] != &Global_1946804->f_57[iParam2] && Global_1946804->f_57[iParam2]->f_1 > 1)
	{
		func_1214(Global_1946804->f_1378.f_1[iParam2], 4, 6);
		func_1214(Global_1946804->f_1497.f_1[iParam2], 4, 6);
	}
	func_1220(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804->f_1378.f_1[iParam2]->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2] = iParam0;
	Global_1946804->f_1378.f_1[iParam2]->f_1 = func_1445(iParam0, iParam2, iParam1, func_139() != -1);
	if (bParam4)
	{
		func_1446(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_1446(&(Global_1946804->f_1378), 1, 0);
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
				func_1447(func_1229(&(Global_1946804->f_2589.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_1164(bool bParam0, bool bParam1, bool bParam2)
{
	func_1448(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

bool func_1165(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_1166()
{
	func_1449(&(Global_1946804->f_2776));
	func_1450(32768);
	func_1447(1108822547, 8, 6);
}

int func_1167(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_789(iParam0, 1);
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

void func_1168(int iParam0)
{
	if (func_1451(iParam0, 4096))
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

void func_1169(int iParam0, int iParam1, int iParam2)
{
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_1452(Var0);
}

bool func_1170(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_1089(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_1171(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_1172(int iParam0)
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

float func_1173()
{
	if (func_1453())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_1454(2);
	}
	if (Global_1347477->f_119)
	{
		return func_1454(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1455();
	fVar2 = func_1456();
	fVar3 = func_1457();
	fVar4 = func_1458();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1459()));
	fVar7 = (func_1454(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1460(3, round((to_float(iVar8) * fVar10)), 0);
	func_1461(3, fVar9, fVar9 > 100f);
	return func_1462(fVar7, -100f, 100f);
}

float func_1174()
{
	if (func_1453())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_1454(1);
	}
	if (Global_1347477->f_119)
	{
		return func_1454(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1455();
	fVar2 = func_1456();
	fVar3 = func_1457();
	fVar4 = func_1458();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1459()));
	fVar7 = (func_1454(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1460(2, round((to_float(iVar8) * fVar10)), 0);
	func_1461(2, fVar9, fVar9 > 100f);
	return func_1462(fVar7, -100f, 100f);
}

float func_1175()
{
	if (func_1453())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_1454(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1463())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1464())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_1454(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1455();
	fVar2 = func_1456();
	fVar3 = func_1457();
	fVar4 = func_1458();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1459()));
	fVar7 = (func_1454(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1460(1, round((to_float(iVar8) * fVar10)), 0);
	func_1461(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_1454(0);
	}
	return func_1462(fVar7, -100f, 100f);
}

bool func_1176(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

bool func_1177(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_412(iParam0, 0))
	{
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return false;
	}
	if (func_1099(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return false;
	}
	if (!func_718(0))
	{
		return false;
	}
	if (!_0xcb5d11f9508a928d(func_1089(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_1178(int iParam0, bool bParam1)
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
				return func_1465();
			}
			break;
	}
	return 0;
}

int func_1179(int iParam0)
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

bool func_1180(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_1181(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1180(iParam0))
	{
		return;
	}
	if (func_1466(iParam0))
	{
		return;
	}
	if (!func_1467(iParam0))
	{
		func_1468(iParam0, 1, 0);
	}
	iVar0 = func_1469(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_1470(iParam0, 512))
		{
			func_797(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_1471() && !bParam1) && !func_442(0, 0, 1))
	{
		func_647(_create_var_string(10, "OUT_JOURN_DONE", _create_var_string(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_1472(iParam0, 6);
	if (bParam2)
	{
		if (!func_442(0, 0, 1))
		{
			func_337(1, 4);
		}
	}
}

bool func_1182(int iParam0, bool bParam1)
{
	return func_1178(iParam0, 0) < func_1473(iParam0, bParam1);
}

bool func_1183(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_714(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1184(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_789(iParam0, 1)] != &Global_1946804->f_57[func_789(iParam0, 1)];
}

void func_1185(int iParam0, int iParam1)
{
	if (func_413(iParam1, 130796156))
	{
		func_1474(iParam1, 0);
	}
	else if (func_413(iParam1, 930141731))
	{
		func_1474(iParam1, 1);
		func_1475(iParam0);
	}
}

void func_1186(var uParam0, int iParam1)
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

int func_1187(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_1476(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_1477(uParam2, iParam0, Var1);
	return 1;
}

int func_1188(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_1189(int iParam0)
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

int func_1190(int iParam0)
{
	if (!func_1478(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

bool func_1191()
{
	return !&Global_1911774;
}

void func_1192(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	Global_1911774->f_4[Global_1911774->f_3] = iParam0;
	Global_1911774->f_4[Global_1911774->f_3]->f_1 = iParam1;
	Global_1911774->f_4[Global_1911774->f_3]->f_2 = bParam2;
	Global_1911774->f_4[Global_1911774->f_3]->f_3 = bParam3;
	if (Global_1911774->f_3 < 20)
	{
		Global_1911774->f_3++;
	}
}

char* func_1193(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_1194(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_1195(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

bool func_1196(int iParam0, int iParam1, bool bParam2)
{
	if ((bParam2 && func_139() == 0) && !_unlock_is_visible(iParam0))
	{
		return false;
	}
	if (!func_1479(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
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

bool func_1197(int iParam0, int iParam1)
{
	if (func_139() != -1)
	{
		return false;
	}
	if (func_1479(iParam0, iParam1, &uVar2, &iVar1))
	{
		iVar14 = 0;
		while (iVar14 < iVar1)
		{
			iVar13 = &uVar2[iVar14];
			if (iVar13 == 0)
			{
			}
			else
			{
				if (!bVar0)
				{
					if (!_unlock_is_unlocked(iVar13))
					{
						bVar0 = true;
					}
				}
				_unlock_set_unlocked(iVar13, true);
			}
			iVar14++;
		}
	}
	return bVar0;
}

void func_1198(bool bParam0)
{
	if (bParam0)
	{
		func_290(2032023096, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_290(-615217896, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_290(655868243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_1199();
		_unlock_set_unlocked(645322743, true);
	}
	else
	{
		func_1480(2032023096);
		func_293(-615217896);
		func_785(655868243, 1, 1, -142743235, 1);
		func_1482(146323340, func_1481());
		Var0 = { func_1483() };
		if (func_1484(&Var0) == -1387633835)
		{
			func_1485(&Var0);
			func_1486(Var0);
		}
		iVar7 = -868094182;
		iVar8 = 1074477367;
		iVar9 = 1;
		func_1487(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (func_1488(iVar6) == 2010625508)
			{
				func_1489(iVar6, iVar7);
				func_1490(iVar6, iVar8);
				func_1491(iVar6, iVar9);
				func_1492(iVar6, 0);
				if (func_1493(iVar6))
				{
					func_1494(iVar6);
				}
				iVar10 = func_1495(iVar8);
				func_1496(iVar6, iVar10);
			}
			iVar6++;
		}
		_unlock_set_unlocked(645322743, false);
	}
}

int func_1199()
{
	if (!func_1497(-1898635967, func_1481(), 1))
	{
		return 0;
	}
	if (func_308())
	{
		if (!func_1497(146323340, func_1481(), 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_1200()
{
	func_302(34411519);
	func_302(834124286);
	func_302(-570967010);
}

void func_1201(bool bParam0)
{
	if (bParam0)
	{
		if (_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_290(-1080874779, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_290(-223790555, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_290(1566032147, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_290(891311852, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_290(-1353737667, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_290(-330313895, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_290(-2051332199, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_290(1237770824, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_290(-1795542128, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_290(-1757588258, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_290(-1921080134, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		_unlock_set_unlocked(-1426541042, true);
	}
	else
	{
		if (!_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_785(-1080874779, 3, 1, -142743235, 1);
		func_785(-223790555, 3, 1, -142743235, 1);
		func_785(1566032147, 3, 1, -142743235, 1);
		func_785(891311852, 5, 1, -142743235, 1);
		func_785(-1353737667, 5, 1, -142743235, 1);
		func_785(-330313895, 5, 1, -142743235, 1);
		func_785(-2051332199, 5, 1, -142743235, 1);
		func_785(1237770824, 5, 1, -142743235, 1);
		func_785(-1795542128, 3, 1, -142743235, 1);
		func_785(-1757588258, 3, 1, -142743235, 1);
		func_785(-1921080134, 10, 1, -142743235, 1);
		iVar1 = -868094182;
		iVar2 = 1074477367;
		iVar3 = 1;
		func_1487(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (func_1488(iVar0) == 153881023)
			{
				func_1489(iVar0, iVar1);
				func_1490(iVar0, iVar2);
				func_1491(iVar0, iVar3);
				func_1492(iVar0, 0);
				if (func_1493(iVar0))
				{
					func_1494(iVar0);
				}
				iVar4 = func_1495(iVar2);
				func_1496(iVar0, iVar4);
			}
			iVar0++;
		}
		func_1199();
		_unlock_set_unlocked(-1426541042, false);
	}
}

void func_1202(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_1498(iParam0);
	if (bParam3)
	{
		func_822(iParam0, sParam1, iParam2);
	}
}

bool func_1203(int iParam0)
{
	return (Global_40.f_12004.f_10 && iParam0) != 0;
}

void func_1204(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 - (Global_40.f_12004.f_10 && iParam0));
}

struct<14> func_1205()
{
	Var3.f_9 = -1591664384;
	Var17.f_9 = -1591664384;
	if (func_1170("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_1171(&Var3, iVar2, iVar0, iVar1))
			{
				Jump @136; //curOff = 80
			}
			else if (Var3.f_4 != 127400949)
			{
			}
			else if (func_1120(Var3.f_4, &Var17, Var3.f_9))
			{
			}
			else
			{
				func_1172(iVar0);
				return Var3;
			}
			iVar2++;
		}
		func_1172(iVar0);
	}
	Var39.f_9 = -1591664384;
	return Var39;
}

void func_1206(int iParam0, struct<4> Param1, int iParam5)
{
	Var0 = { Param1 };
	Var0.f_4 = iParam5;
	Var5.f_9 = -1591664384;
	if (func_1499(Param1, iParam5, &Var5, 0))
	{
		func_1122(Var5.f_4, &Var5, &Var0, -1, -142743235, 1, 0);
	}
	func_1177(iParam0, &Var19, &Var0, 1, 752097756, 0);
	func_1500(Var19, 1);
}

bool func_1207()
{
	return (_does_anim_scene_exist(Global_43800) && _is_anim_scene_started(Global_43800, false));
}

bool func_1208(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	Var0 = { func_1384(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_1385(&Var0, func_1224(0));
	}
	if (!func_1386(&Var0, &iVar14, &iVar15, 0))
	{
		return false;
	}
	Var16.f_9 = -1591664384;
	iVar35 = 0;
	while (iVar35 < iVar15)
	{
		if (iVar36 >= iParam1)
		{
		}
		else
		{
			if (!func_1171(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_1122(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_1172(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_1209(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_412(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_798(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_1501(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_1121(iParam0, Var0, Var0.f_4, bParam4) };
	return func_1122(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_1210(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_413(iParam0, 606799272))
		{
			func_1502(iParam0, iParam1);
		}
		if (func_413(iParam0, -1112814642) && func_413(iParam0, -1697809989))
		{
			func_738(iParam0, iParam1, 1, 0);
		}
	}
}

int func_1211(int iParam0, var uParam1)
{
	iVar1 = iParam0;
	if (!func_1503(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_714(iParam0) != -999503751)
		{
			func_1504(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_714(iParam0) != -999503751)
	{
		func_1504(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1505(iParam0, 1);
	return 1;
}

void func_1212()
{
	if (func_139() == -1)
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

void func_1213(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1506(0);
	}
	if (bParam0)
	{
		func_1221(8);
		func_1221(512);
	}
	else
	{
		func_1221(8);
		func_1221(16);
	}
}

void func_1214(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_1215(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_791();
	}
	if (func_139() == -1)
	{
		if (iParam0 == 1160113249)
		{
			iVar0 = 1583685020;
		}
		else
		{
			iVar0 = -572793833;
		}
	}
	else
	{
		iVar0 = -2109211296;
	}
	return iVar0;
}

int func_1216(int iParam0)
{
	switch (iParam0)
	{
		case 708211766:
			return 1;
		case -1815871154:
			return 2;
		case 1053922635:
			return 4;
		case -1248203249:
			return 8;
		case -1275860049:
			return 16;
		case -473313046:
			return 32;
		case 1009605579:
			return 64;
		case -92538845:
			return 128;
		case 350097565:
			return 256;
		case 346761890:
			return 512;
		case -915377750:
			return 1024;
		case -1283403230:
			return 2048;
		case 1024778115:
			return 4096;
		case 75507907:
			return 8192;
		case -1678578495:
			return 16384;
		case -1925540957:
			return 32768;
		case -2125161702:
			return 131072;
		case 1929486675:
			return 262144;
		case -1932005642:
			return 65536;
		case 315750675:
			return 524288;
		case -376594188:
			return -1;
		case -663436545:
			return 112;
		case 1042019528:
			return 1136;
		case -141044514:
			return 4208;
		case 884232794:
			return 8304;
		case 836721350:
			return 20480;
		case -1062102573:
			return 32833;
		case -884591393:
			return 96;
		case -1886898087:
			return 16496;
		case -1674046782:
			return 139376;
		case 1481630954:
			return 262256;
		case -366477279:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_1217(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1507(uParam0->f_1[iVar0], 2))
		{
			iVar7 = func_1229(iVar0, 1);
			if (func_1508(iVar0, iParam1))
			{
				vVar4 = { func_793(iVar0, -1) };
				if ((vVar4.x != &Global_1946804->f_57[iVar0] && vVar4.x != 0) && (&uParam0->f_1[iVar0] != vVar4.x || uParam0->f_1[iVar0]->f_1 != vVar4.y))
				{
					*uParam0->f_1[iVar0] = { vVar4 };
				}
				if (func_1509(iVar7, 4))
				{
					func_1447(iVar7, 4, 6);
				}
			}
			else
			{
				func_1510(iVar7, 4, 6);
				Jump @201; //curOff = 167
				if (bParam2)
				{
					vVar1.x = &Global_1946804->f_57[iVar0];
					*uParam0->f_1[iVar0] = { vVar1 };
				}
			}
			iVar0++;
		}
	}
}

bool func_1218(int iParam0)
{
	Global_1946804->f_964.f_2 = 0;
	if (func_139() == -1)
	{
		iVar0 = -380731322;
	}
	else
	{
		iVar0 = 1226838104;
	}
	func_1511(&(Global_1946804->f_964), iVar0, -367421157, 1409451727, 1, iParam0);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	if (!_0x44b3a36933ac009c(&uVar1, &(Global_1946804->f_964), 1409451727))
	{
		return false;
	}
	return true;
}

bool func_1219(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

void func_1220(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_714(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1508(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1444(iVar1, iVar3);
		}
	}
	if (func_1184(-1586649372) && func_1508(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1444(iVar1, iVar3);
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
						func_1444(iVar1, iVar3);
					}
				}
			}
			func_1512(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1512(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_1444(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_1512(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_1444(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_1444(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_1512(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_1512(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_1444(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_1512(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_1444(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1444(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_714(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1444(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_1427(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_714(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1444(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_413(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1444(iVar1, iVar3);
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
						func_1444(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_1427(&(Global_1946804->f_1497.f_1[iVar1])) || func_413(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1444(iVar1, iVar3);
					}
				}
			}
			switch (func_714(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_714(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1444(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_714(&(uParam0->f_1[iVar1])) || func_413(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1444(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

void func_1221(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_1222(struct<4> Param0)
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
			if (func_1513(Param0))
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
			func_1514(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_1221(8);
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
			if (func_1513(Param0))
			{
				return;
			}
			func_1514(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_1221(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_1169(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

struct<4> func_1223(bool bParam0)
{
	return func_1121(1328661203, func_1515(), -1591664384, bParam0);
}

struct<4> func_1224(bool bParam0)
{
	iVar0 = func_1089(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_1121(923904168, func_1223(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_1121(923904168, func_1223(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_1121(923904168, func_1223(bParam0), -740156546, 0);
}

bool func_1225(int iParam0, bool bParam1)
{
	if (func_714(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_492(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_1226(bool bParam0)
{
	iVar0 = func_1089(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_1121(271701509, func_1223(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_1121(271701509, func_1223(bParam0), 12999093, 0);
}

bool func_1227(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_714(iParam0);
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

bool func_1228(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_1089(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_1229(int iParam0, int iParam1)
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

void func_1230(int iParam0, int iParam1)
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

void func_1231(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_1232(int iParam0, int iParam1)
{
	iVar0 = func_805(*iParam0);
	iVar1 = func_804(*iParam0);
	if (iParam1 < 1 || iParam1 > func_810(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_1233(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_1234(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_1235(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

int func_1236(int iParam0)
{
	return floor(pow(2f, to_float(iParam0)));
}

int func_1237(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -707360575;
		case 2:
			return -1201174711;
		case 4:
			return 151582343;
		case 8:
			return -642492359;
		case 16:
			return 5171247;
		default:
			break;
	}
	return 0;
}

bool func_1238(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_139() == -1)
	{
		if (func_1093(iParam0))
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

int func_1239(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_412(iParam0, 0))
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

int func_1240(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	func_1381(&iParam0);
	if (!func_412(iParam0, 0))
	{
		return 0;
	}
	if (!func_718(0))
	{
		bParam2 = true;
	}
	iVar0 = func_1097(iParam0, uParam1, bParam2, bParam3);
	if (iVar0 < 0)
	{
		return 2147483647;
	}
	if (bParam2)
	{
		iVar1 = func_1383(iParam0, *uParam1, uParam1->f_4, bParam3);
	}
	else
	{
		iVar1 = _0xe787f05dfc977bde(func_1089(bParam3), iParam0, 0);
	}
	if (iVar0 > iVar1)
	{
		return (iVar0 - iVar1);
	}
	return 0;
}

int func_1241(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_413(iParam0, -5284486))
	{
		Var35 = -1;
		Var35.f_1 = -1;
		Var35.f_2 = -1;
		Var35.f_3 = -1;
		Var35.f_4 = -1;
		Var35.f_5 = -1;
		Var35.f_6 = -1;
		Var35.f_7 = -1;
		Var35.f_8 = -1;
		Var35.f_13 = -1;
		Var35 = iParam0;
		iVar33 = _0x640f890c3e5a3ffd(1, &Var35, &iVar34);
		if (iVar33 != -1)
		{
			if (iVar34 > 0)
			{
				bParam4 = true;
			}
			_0x42a2f33a1942e865(iVar33);
		}
		iVar49 = 0;
		if (func_1516(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
		{
			iVar32 = 0;
			while (iVar32 < iVar31)
			{
				if (&Var0[iVar32] == 2084597891 || &Var0[iVar32] == 773203532)
				{
					iVar49 = (iVar49 + Var0[iVar32]->f_1);
					Jump @229; //curOff = 201
				}
				else if (&Var0[iVar32] == 0)
				{
				}
				else
				{
					iVar32++;
				}
			}
		}
		Var50 = -1;
		Var50.f_1 = -1;
		Var50.f_2 = -1;
		Var50.f_3 = -1;
		Var50.f_4 = -1;
		Var50.f_5 = -1;
		Var50.f_6 = -1;
		Var50.f_7 = -1;
		Var50.f_8 = -1;
		iVar64 = func_771(iParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = _item_database_create_item_collection(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					iVar63 = func_774(iVar62, iVar61);
					if (func_412(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_1241(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = _0x640f890c3e5a3ffd(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1241(iVar63, -915411861, 1, 0, 0));
								}
								_0x42a2f33a1942e865(iVar33);
							}
						}
					}
					iVar62++;
				}
				_0xcbb7b6edfa933ade(iVar61);
			}
		}
		return iVar49;
	}
	if (!func_1516(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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
	if (!bParam3)
	{
	}
	return 0;
}

bool func_1242(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return iParam0 <= func_1517(1);
}

bool func_1243()
{
	if (func_308())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_1244(int iParam0, char* sParam1)
{
	if (iParam0 != 18 && iParam0 != 7)
	{
		_uilog_add_total_take_entry(get_hash_key(func_1518(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP", _create_var_string(2, func_296(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
	else
	{
		_uilog_add_total_take_entry(get_hash_key(func_1518(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP_NOS", _create_var_string(2, func_296(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
}

var func_1245()
{
	return Global_40.f_4283.f_325;
}

void func_1246()
{
	func_978(23);
}

void func_1247(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 || iParam0);
}

int func_1248(var uParam0)
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

void func_1249(int iParam0)
{
	iVar0 = func_1519(iParam0);
	if (iVar0 != 0)
	{
		func_1520(-1, 24, 0, iVar0);
	}
}

void func_1250(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (Global_1310750->f_16071 != iParam0 && !bParam2)
	{
		return;
	}
	if (&Global_17504.f_42[iParam0] == 0)
	{
		func_498(func_270(-1029789297), 1);
	}
	Global_17504.f_4++;
	Global_17504.f_42[iParam0] = &Global_17504.f_42[iParam0] + 1;
	(*Global_1310750)[iParam0]->f_110 |= 8;
	if (func_86(iParam0, 2))
	{
		func_1521(iParam0, func_878(iParam3));
	}
	if (func_86(iParam0, 1))
	{
		if (iParam4 == -1)
		{
			iParam4 = func_880();
		}
		func_1522(iParam0, iParam4);
	}
	if (iParam1 >= 0 && !func_100(iParam0, 65536))
	{
		func_1523(iParam0, iParam1);
		func_1524(iParam0, func_373(iParam0, iParam1));
		func_1247(128);
	}
	func_882(iParam0, (*Global_1310750)[iParam0]->f_37, 1065353216, 0, 0);
	func_883(iParam0, 1);
	if (!bParam2)
	{
		func_1247(16);
		Global_17504.f_5 = iParam0;
		Global_17504.f_9 = 1;
		Global_17504.f_7 = 0;
		Global_17504.f_8 = 0;
		func_1525(524288);
	}
	if (func_1526(iParam0) != 0)
	{
		if (&Global_17504.f_42[iParam0] >= func_1526(iParam0))
		{
			Global_17504.f_42[iParam0]->f_6 = 1;
		}
	}
}

void func_1251(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_1252(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1253(int iParam0)
{
	Global_17504.f_2++;
	Global_17504.f_42[iParam0]->f_3++;
	(*Global_1310750)[iParam0]->f_110 |= 2;
}

bool func_1254(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	if (func_361(vParam0))
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

bool func_1255(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (func_361(vParam0))
	{
		return false;
	}
	return _0x769bb7626b8cdb06(vParam0, fParam3, iParam5, iParam4, 16384);
}

bool func_1256(vector3 vParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_1310750->f_16043)
	{
		if (!func_361(*Global_1310750->f_16043[iVar0]))
		{
			if (func_171(vParam0, *Global_1310750->f_16043[iVar0]) < 2500f)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1257()
{
	iVar0 = func_1527(func_2());
	if (iVar0 == 8)
	{
		iVar1 = func_445(func_2());
		if (func_447(Global_36, iVar1))
		{
			return false;
		}
	}
	if (func_1528(func_598(0)))
	{
		return false;
	}
	if (func_1062())
	{
		return false;
	}
	if (is_player_riding_train(player_id()))
	{
		return false;
	}
	return true;
}

float func_1258(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

bool func_1259(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_1260(int iParam0)
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

void func_1261(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_1529(iParam0, iParam1))
		{
			if (func_1530(iParam0, iParam1))
			{
				if (func_1531(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_1532(iParam0);
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

void func_1262(int iParam0, int iParam1, bool bParam2)
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

void func_1263(int iParam0, bool bParam1)
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

void func_1264(int iParam0, int iParam1)
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

int func_1265(int iParam0)
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

int func_1266(int iParam0, int iParam1)
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

void func_1267(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_856(Global_1310750[iVar0], iParam0))
		{
			if (!func_842(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_1533(iVar0) < func_1534(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_882(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

void func_1268(int iParam0)
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

void func_1269(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_1270()
{
	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_1535(iVar0, 128))
		{
			func_1536(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_1271()
{
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_1535(iVar0, 128) && func_1535(iVar0, 1))
		{
			func_1536(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_1272(float fParam0)
{
	iVar0 = floor((fParam0 * 1000f));
	if (Global_1393237->f_3 < (get_game_timer() + iVar0))
	{
		Global_1393237->f_3 = (get_game_timer() + iVar0);
	}
}

void func_1273()
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_86(iVar0, 16777216))
		{
			if (!func_1537(iVar0))
			{
				func_1538(iVar0, 4096);
			}
		}
		iVar0++;
	}
}

void func_1274(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = ((iParam1 + (60 * iParam2)) + (3600 * iParam3));
	iVar1 = (iVar0 / 2);
	iVar2 = (iVar1 / 60);
	iVar3 = (iVar1 - iVar2 * 60);
	iVar4 = 0;
	switch (iParam0)
	{
		case 0:
			func_843(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_843(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_843(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_843(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_843(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_843(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_843(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_843(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_843(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_843(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_843(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_843(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_843(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_843(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_843(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_843(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_843(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_843(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_843(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_843(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_843(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_843(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_843(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_843(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_843(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_843(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_843(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_843(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_843(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_843(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_843(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_843(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_843(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_843(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_843(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_843(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_1275(float fParam0, bool bParam1, bool bParam2)
{
	fVar0 = func_568();
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

bool func_1276()
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

void func_1277(bool bParam0)
{
	func_1539(bParam0);
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

bool func_1278(int iParam0, var uParam1)
{
	if (!func_1540(iParam0))
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

bool func_1279(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

int func_1280(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_1281(int iParam0, int iParam1)
{
	iParam0 = func_1280(iParam0);
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

void func_1282()
{
	if (func_1541(0))
	{
		func_1542(0);
	}
	if (func_1541(1))
	{
		func_1542(1);
	}
	if (func_1541(5))
	{
		func_1542(5);
	}
	if (func_1541(6))
	{
		func_1543(6);
	}
}

void func_1283(int iParam0, bool bParam1)
{
	func_606(Local_529[iParam0], bParam1, 0);
}

bool func_1284(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_1544(iParam0, iParam1))
		{
			if (!func_3(iParam1->f_10, 1))
			{
				set_ped_config_flag(iParam0, 130, false);
				set_ped_config_flag(iParam0, 315, false);
				set_ped_config_flag(iParam0, 297, false);
				set_ped_config_flag(iParam0, 178, true);
				func_38(uParam2, 0, 0, 1, 0);
				func_35(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_3(iParam1->f_10, 1))
		{
			func_1545(uParam2);
			set_ped_config_flag(iParam0, 130, true);
			set_ped_config_flag(iParam0, 315, true);
			set_ped_config_flag(iParam0, 297, true);
			set_ped_config_flag(iParam0, 178, false);
			func_76(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_1285(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!is_entity_dead(*iParam0))
	{
		_0xe98d55c5983f2509(*iParam0);
		bVar4 = func_3(iParam4, 32);
		func_1546(iParam1, uParam2, 0);
		iVar5 = func_1547(*iParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			set_ped_config_flag(*iParam0, 178, false);
			return true;
		}
		func_38(uParam2, 0, 0, 1, 0);
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
		if (func_1288(iParam1, 4))
		{
			iVar6 |= 1024;
			_0xbb1e41dd3d3c6250(*iParam0, "IloGeneralEvents", 2);
		}
		if (!func_1288(iParam1, 26))
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
		if (_0x870708a6e147a9ad(*iParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, 0, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = func_1548(iParam0);
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
			if (func_3(iParam4, 268435456))
			{
				iVar8 = func_1549(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_1550(iParam1, (*uParam2)[iVar8]);
				}
			}
			if (func_1288(iParam1, 23))
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
			if (func_3(iParam4, 2) || func_3(iParam4, 16))
			{
				func_1287(*iParam0, 1, 1);
			}
			else
			{
				func_1287(*iParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_1286(int iParam0)
{
	if (!is_entity_dead(*iParam0))
	{
		_0xe98d55c5983f2509(*iParam0);
		set_ped_config_flag(*iParam0, 297, false);
	}
}

void func_1287(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !is_entity_dead(iParam0))
	{
		set_ped_config_flag(iParam0, 317, bParam1);
	}
}

bool func_1288(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

bool func_1289(int iParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_1551(*iParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_1290(int iParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_1552(*iParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_3(iParam10, 32), 1, 0);
			set_bit(iParam2, 1);
		}
	}
	else if (is_bit_set(*iParam2, 1))
	{
		clear_bit(iParam2, 1);
	}
}

void func_1291(int iParam0)
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

bool func_1292(int iParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	iVar1 = func_1517(1);
	bVar2 = is_bit_set(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = is_ped_on_foot(Global_35);
	bVar10 = is_ped_injured(*iParam0);
	bVar11 = (((_is_ped_carrying(Global_35) || func_1553(Global_35)) || func_1554(Global_35)) || func_1555(Global_35));
	fVar12 = -1f;
	if (func_214(&(iParam1->f_13)))
	{
		fVar12 = func_223(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((*uParam4)[iVar0]->f_8 != iParam12)
		{
			iParam12 = (*uParam4)[iVar0]->f_8;
		}
		bVar4 = func_152((*uParam4)[iVar0]->f_6);
		func_1556(*iParam0, (*uParam4)[iVar0], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (is_bit_set(uParam4[iVar0], 20))
		{
			bVar3 = true;
		}
		if (func_1557(*iParam0, iParam1, (*uParam4)[iVar0], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_1558(iParam12, (*uParam4)[iVar0]->f_6))
				{
					if (!bVar7)
					{
						func_38(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_1559(uParam4, 0, 0);
					}
					if (is_bit_set(uParam4[iVar0], 11))
					{
						func_1546(iParam1, uParam4, is_bit_set(*iParam1, 6));
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
					if (func_1560(iParam1, fParam6, iParam1->f_9))
					{
						func_176(&(iParam1->f_18));
						if (bVar6)
						{
							func_1559(uParam4, 0, 0);
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
		func_1561(iParam1, fParam2);
	}
	return bVar5;
}

void func_1293(var uParam0)
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

void func_1294(int* iParam0, var uParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_1562((*uParam1)[iVar0]))
		{
			if (is_bit_set(uParam1[iVar0], 20))
			{
				func_1561(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_1295(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!is_control_pressed(0, -124244224))
		{
			if (func_1563(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_1564(iParam1, 0);
				func_1546(iParam1, uParam2, func_1288(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_1296(int iParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_176(&(iParam1->f_18));
			return false;
		}
		else if (func_214(&(iParam1->f_18)))
		{
			func_146(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_214(&(iParam1->f_18)))
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
	return func_218(&(iParam1->f_18), fParam2);
	return true;
}

void func_1297(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_1556(iParam0, (*uParam2)[iVar0], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_1298(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

void func_1299(int* iParam0, var uParam1)
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
	func_1546(iParam0, uParam1, 1);
	func_38(uParam1, 0, 1, 1, 0);
	_copy_memory(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		_copy_memory((*uParam1)[iVar0], &Var22, 17);
		iVar0++;
	}
}

int func_1300(int* iParam0)
{
	if (func_1288(iParam0, 0))
	{
		if (func_1565(iParam0))
		{
			func_1298(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

void func_1301(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_1302(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_1279(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_1303(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_1304(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

int func_1305(int iParam0)
{
	iVar0 = func_789(func_1566(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946804->f_1497.f_1[iVar0]->f_1;
	}
	return 0;
}

bool func_1306(int iParam0, int iParam1)
{
	iVar1 = func_789(func_1566(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1946804->f_1497.f_1[iVar1] != 0 && &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1];
		if (func_714(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

bool func_1307()
{
	if (Global_1946804->f_2793)
	{
		return true;
	}
	if (absi((get_game_timer() - Global_1946804->f_2791)) < 1250)
	{
		return true;
	}
	if (func_1567())
	{
		return true;
	}
	if (_0xec7e480ff8bd0bed(Global_35))
	{
		return true;
	}
	return false;
}

int func_1308(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_951(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_1309()
{
	iVar0 = 1549701178;
	switch (func_1568())
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

int func_1310()
{
	iVar0 = 614608656;
	switch (func_1568())
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

int func_1311()
{
	iVar0 = -1832677570;
	switch (func_1568())
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

int func_1312()
{
	iVar0 = 1623252156;
	switch (func_1568())
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

bool func_1313(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (!func_214(&uParam0))
	{
		return false;
	}
	if (func_958(&uParam0) <= iParam3 + 500)
	{
		return false;
	}
	return true;
}

bool func_1314(float fParam0, float fParam1, bool bParam2)
{
	func_1569(&uVar0, &uVar1, &iVar2, &iVar3, 529461124, 1410914475, -1497929239, 665185216, 2);
	if (!bParam2)
	{
		if (iVar2 != 0 || iVar3 != 0)
		{
			return true;
		}
	}
	if (!func_960(fParam0, fParam1))
	{
		return true;
	}
	return false;
}

bool func_1315()
{
	if (((((((((((is_control_pressed(0, -1879280170) || is_control_pressed(0, 1537201378)) || is_control_pressed(0, -1175108432)) || is_control_pressed(0, 1520437207)) || is_control_pressed(0, -1292666904)) || is_control_pressed(0, -640622144)) || is_control_pressed(0, -455946723)) || is_control_pressed(0, -1242632265)) || is_control_pressed(0, -485697785)) || is_control_pressed(0, -822242784)) || is_control_pressed(0, 782960533)) || is_control_pressed(0, -874806616))
	{
		return true;
	}
	return false;
}

bool func_1316(vector3 vParam0, float fParam3, float fParam4, bool bParam5, float fParam6)
{
	fVar0 = func_215(Global_35, vParam0, 1);
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

Vector3 func_1317(int iParam0)
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
	return func_1318((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

Vector3 func_1318(vector3 vParam0)
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

bool func_1319(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_1089(0);
	*uParam1 = { func_1121(iParam0, func_1224(0), iParam3, 0) };
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

int func_1320(int iParam0)
{
	if (!func_1078(iParam0))
	{
		return -1;
	}
	if (iParam0 >= func_368(1))
	{
		return -1;
	}
	if (iParam0 >= 3 || iParam0 < 0)
	{
		return -1;
	}
	return Global_1359489[iParam0];
}

int func_1321(int iParam0, int iParam1)
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

void func_1322(var uParam0, var uParam1, int iParam2, vector3 vParam3, vector3 vParam6, float fParam9, float fParam10, float fParam11)
{
	fVar0 = (fParam9 / 2f);
	fVar1 = (fParam10 / 2f);
	switch (iParam2)
	{
		case 0:
			vVar5 = { func_1318(vParam6 - vParam3) };
			vVar8 = { func_1570(vVar5, 0f, 0f, 1f) };
			*(*uParam0)[0] = { vParam3 + func_1571(0f, 0f, 0f, fParam11, 0.1f) };
			*(*uParam0)[1] = { vParam3 + vVar8 * FtoV(get_random_float_in_range(fParam9, fParam10)) + func_1571(0f, 0f, 0f, fParam11, 0.1f) };
			*(*uParam0)[2] = { vParam3 - vVar8 * FtoV(get_random_float_in_range(fParam9, fParam10)) + func_1571(0f, 0f, 0f, fParam11, 0.1f) };
			*(*uParam1)[0] = { vVar5 };
			*(*uParam1)[1] = { vVar5 };
			*(*uParam1)[2] = { vVar5 };
			break;
		case 1:
			vVar2 = { func_1572() };
			*(*uParam1)[0] = { func_1318(vVar2) };
			*(*uParam1)[1] = { -*(*uParam1)[0] };
			*(*uParam0)[0] = { vParam3 - *(*uParam1)[0] * FtoV(get_random_float_in_range(fVar0, fVar1)) + func_1571(0f, 0f, 0f, fParam11, 0.1f) };
			*(*uParam0)[1] = { vParam3 - *(*uParam1)[1] * FtoV(get_random_float_in_range(fVar0, fVar1)) + func_1571(0f, 0f, 0f, fParam11, 0.1f) };
			break;
		case 2:
			vVar2 = { func_1572() };
			*(*uParam1)[0] = { func_1318(vVar2) };
			func_1573(&vVar2, &(vVar2.f_1), 120f);
			*(*uParam1)[1] = { func_1318(vVar2) };
			func_1573(&vVar2, &(vVar2.f_1), 120f);
			*(*uParam1)[2] = { func_1318(vVar2) };
			*(*uParam0)[0] = { vParam3 - *(*uParam1)[0] * FtoV(get_random_float_in_range(fVar0, fVar1)) + func_1571(0f, 0f, 0f, fParam11, 0.1f) };
			*(*uParam0)[1] = { vParam3 - *(*uParam1)[1] * FtoV(get_random_float_in_range(fVar0, fVar1)) + func_1571(0f, 0f, 0f, fParam11, 0.1f) };
			*(*uParam0)[2] = { vParam3 - *(*uParam1)[2] * FtoV(get_random_float_in_range(fVar0, fVar1)) + func_1571(0f, 0f, 0f, fParam11, 0.1f) };
			break;
	}
}

char* func_1323(int iParam0, int iParam1)
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

var func_1324(int iParam0)
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

void func_1325(int iParam0, var uParam1, int iParam2, bool bParam3, char* sParam4, vector3 vParam5, struct<2> Param8, int iParam10, vector3 vParam11, int iParam14, int iParam15, int iParam16, float fParam17, int iParam18, int iParam19)
{
	if (Global_1359489->f_63.f_241 >= 10)
	{
		return;
	}
	if (bParam3)
	{
		Var0.f_10 = func_1574(get_heading_from_vector_2d(Param8, Param8.f_1));
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
		func_1575(Global_1359489->f_63[iParam14]);
	}
}

void func_1326(int iParam0, int iParam1)
{
	if (!func_661(iParam0))
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

void func_1327(int iParam0, int iParam1)
{
	if (!func_661(iParam0))
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

void func_1328(var uParam0, struct<21> Param1, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94)
{
	if (!func_361(*uParam0->f_51[0]))
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
		if (!func_361(*uParam0->f_61[0]))
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

void func_1329(int iParam0, int* iParam1)
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
		if (func_410(iVar31))
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

void func_1330(int iParam0, int iParam1, float fParam2)
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

int func_1331(int iParam0)
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

Vector3 func_1332(vector3 vParam0, vector3 vParam3, float fParam6)
{
	return FtoV((1f - fParam6)) * vParam0 + Vector(fParam6, fParam6, fParam6) * vParam3;
}

Vector3 func_1333()
{
	StringCopy(&cVar0, "eDuelResult", 24);
	return cVar0;
}

int func_1334(int iParam0)
{
	iParam0 = func_1280(iParam0);
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

int func_1335(var uParam0, var uParam1)
{
	uParam1->f_10 = func_1280(uParam1->f_10);
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
		if (func_361(uParam1->f_6))
		{
		}
	}
	bVar0 = func_691();
	if (*uParam1)
	{
		if (bVar0 && !func_145((*Global_1835011)[4]->f_1, 1))
		{
			if (func_1576(5))
			{
				func_1577(5);
				func_1578(5);
				func_1579(0);
				func_1580(0);
			}
		}
	}
	if (func_1581(Global_36) == 8)
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_145((*Global_1835011)[37]->f_1, 1)) && !func_145((*Global_1835011)[43]->f_1, 1))
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_145((*Global_1835011)[43]->f_1, 1)) && !func_145((*Global_1835011)[44]->f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_1334(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_1541(iVar1))
	{
		bVar3 = true;
		if (func_1582(iVar1))
		{
			bVar4 = true;
		}
		if (func_1583(iVar1))
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
				func_1584(uParam1->f_10);
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
			if (!func_1576(0) && func_1576(1))
			{
				func_1585(1, 0);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_1586())
			{
				func_1587();
			}
			func_1579(0);
			func_1580(0);
			func_1588(uParam1->f_6);
		}
	}
	if (!func_1541(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_1589(uParam1->f_10) == 0 || func_1488(uParam1->f_10) == 0) || func_1590(uParam1->f_10) == 0)
			{
				func_1591(uParam1->f_10);
			}
			func_1592(uParam1->f_10);
			func_1593(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*uParam0 = 0;
			return 0;
		}
		*uParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_1334(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_1541(iVar1))
	{
		bVar3 = true;
		if (func_1582(iVar1))
		{
			bVar4 = true;
		}
		if (func_1583(iVar1))
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
			if (!func_361(uParam1->f_6))
			{
				set_entity_coords(iVar2, uParam1->f_6, false, true, true, true);
				set_entity_heading(iVar2, uParam1->f_9);
				_0x9587913b9e772d29(iVar2, 0);
			}
		}
	}
	if (func_1594(uParam1->f_10))
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
			Var8 = { func_1595(uParam1->f_10) };
			Var10 = { func_1483() };
			func_1596(iVar2, &Var8, &Var10, 0);
			_set_ped_as_saddle_horse_for_player(iVar6, iVar2);
			set_ped_config_flag(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*uParam0 = 2;
		return iVar2;
	}
	if (!func_934(uParam1->f_10))
	{
		set_entity_as_mission_entity(iVar2, true, true);
		func_1597(uParam1->f_10);
		if (uParam1->f_2 && !func_361(uParam1->f_6))
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
	func_932(uParam1->f_10);
	if (func_934(uParam1->f_10))
	{
		iVar16 = func_933(uParam1->f_10);
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

void func_1336(var uParam0, var uParam1, int iParam2, vector3 vParam3, vector3 vParam6, float fParam9)
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
				_task_smart_flee_style_ped(iVar1, iParam2, 1, 0, -1f, -1, 0);
			}
		}
		if (!func_162(uParam1, 32) && (!func_162(uParam1, 524288) || iParam2 == *uParam1))
		{
			if (!func_361(vParam3))
			{
				fVar0 = func_511(vParam3, vParam6, 1);
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

float func_1337(var uParam0)
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

bool func_1338(var uParam0)
{
	iVar0 = _0xbd629c1c4f501c80(0);
	if (iVar0 != uParam0->f_69)
	{
		uParam0->f_69 = iVar0;
		return true;
	}
	return false;
}

void func_1339(int iParam0)
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

var func_1340(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	_0xdd1232b332cbb9e7(3, 1, 0);
	return func_364(sParam0, iParam1, iParam2, iParam3, 0, iParam4);
}

void func_1341(int iParam0)
{
	if (iParam0 > 6)
	{
		return;
	}
	if (&Global_1911643 != 0)
	{
		func_159();
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

bool func_1342(var uParam0, var uParam1)
{
	if (func_1598(uParam0, uParam1))
	{
		return true;
	}
	if (!func_162(uParam0, 1048576))
	{
		if (uParam0->f_82)
		{
			iVar0 = _get_game_timer_non_scaled_clipped();
			iVar1 = (iVar0 - uParam1->f_5);
			fVar2 = func_1599(uParam0, 0);
			if (IntToFloat(iVar1) >= (fVar2 * 1000f))
			{
				return true;
			}
			if (func_163(uParam1, 1048576))
			{
				iVar3 = (iVar0 - uParam1->f_6);
				fVar4 = func_1599(uParam0, 1);
				if (IntToFloat(iVar3) >= (fVar4 * 1000f))
				{
					return true;
				}
			}
			if (func_163(uParam1, 16))
			{
				iVar5 = (iVar0 - uParam1->f_7);
				fVar6 = func_1599(uParam0, 2);
				if (IntToFloat(iVar5) >= (fVar6 * 1000f))
				{
					return true;
				}
			}
		}
		else
		{
			if (func_204(&(uParam1->f_35), func_1599(uParam0, 0)))
			{
				return true;
			}
			if (func_204(&(uParam1->f_38), func_1599(uParam0, 1)))
			{
				return true;
			}
			if (func_204(&(uParam1->f_41), func_1599(uParam0, 2)))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_1343(int iParam0)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	return is_player_free_aiming_at_entity(player_id(), iParam0);
}

bool func_1344(var uParam0, var uParam1)
{
	if ((func_162(uParam0, 64) && uParam0->f_1 != uParam0->f_2) && func_163(uParam1, 65536))
	{
		if (!func_163(uParam1, 4096))
		{
			func_512(uParam1, 4096);
		}
		return true;
	}
	return false;
}

bool func_1345(var uParam0, var uParam1, bool bParam2)
{
	if (is_entity_dead(*uParam0))
	{
		return true;
	}
	if (func_3(uParam1->f_58, 512))
	{
		return true;
	}
	if (!func_163(uParam1, 524288))
	{
		if (_0xb16223cb7da965f0(get_player_index()))
		{
			func_512(uParam1, 524288);
		}
	}
	else
	{
		iVar2 = func_980(*uParam0, 0, 1, 0);
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
				func_35(&(uParam1->f_58), 512);
			}
			return true;
		}
	}
	return false;
}

bool func_1346(var uParam0, var uParam1, bool bParam2)
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
			if (func_410(func_149(*uParam0, 1, 0, 0)))
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
					func_35(&(uParam1->f_58), 256);
				}
				return true;
			}
		}
	}
	return false;
}

bool func_1347(var uParam0, var uParam1, bool bParam2)
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
		if (func_1600(iVar0))
		{
			if (bParam2)
			{
				func_35(&(uParam1->f_58), 16);
			}
			return true;
		}
	}
	return false;
}

bool func_1348(var uParam0, var uParam1, bool bParam2)
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
	if (func_162(uParam0, 524288) && has_anim_event_fired(uParam0->f_1, 200432249))
	{
		if (bParam2)
		{
			func_35(&(uParam1->f_58), 64);
		}
		return true;
	}
	if (_0xbd6b242b8bd5543a(*uParam0))
	{
		if (bParam2)
		{
			func_35(&(uParam1->f_58), 64);
		}
		return true;
	}
	if (_0x3ec28da1ffac9ddd(*uParam0, uParam0->f_1, 0, 0))
	{
		get_ped_last_damage_bone(*uParam0, &iVar0);
		if (func_1600(iVar0))
		{
			if (bParam2)
			{
				func_35(&(uParam1->f_58), 64);
			}
			return true;
		}
	}
	return false;
}

bool func_1349(var uParam0, var uParam1, bool bParam2)
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
		if (func_1601(iVar0))
		{
			if (bParam2)
			{
				func_35(&(uParam1->f_58), 32);
			}
			return true;
		}
	}
	return false;
}

bool func_1350(var uParam0, var uParam1, bool bParam2)
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
			func_35(&(uParam1->f_58), 4);
		}
		return true;
	}
	return false;
}

bool func_1351(var uParam0, var uParam1, bool bParam2)
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
	if (func_3(uParam1->f_58, -2147483648) && !func_204(&(uParam1->f_29), 0.05f))
	{
		return false;
	}
	iVar2 = func_980(*uParam0, 0, 1, 0);
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
		if (func_162(uParam0, 512))
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
		if (!func_162(uParam0, 33554432))
		{
			if ((((iVar0 < iVar1 && bVar9) && !_0x3ec28da1ffac9ddd(uParam0->f_1, *uParam0, 0, 0)) && !is_player_free_aiming_at_entity(get_player_index(), uParam0->f_1)) && !is_player_free_aiming_at_entity(get_player_index(), iVar8))
			{
				if (bParam2)
				{
					func_35(&(uParam1->f_58), 1);
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
			if (!_0xb16223cb7da965f0(get_player_index()) && func_163(uParam1, 524288))
			{
				bVar11 = true;
			}
			if (bVar11)
			{
				if (!_0x3ec28da1ffac9ddd(uParam0->f_1, *uParam0, 0, 0) && bVar9 == 1)
				{
					if (bParam2)
					{
						func_35(&(uParam1->f_58), 1);
					}
					return true;
				}
			}
		}
	}
	return false;
}

void func_1352(var uParam0)
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

int func_1353(var uParam0, var uParam1, bool bParam2)
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
			func_35(&(uParam1->f_58), 2);
		}
	}
	return iVar0;
}

bool func_1354(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 37) && !func_144())
	{
		return true;
	}
	if (iParam0 == 61)
	{
		return true;
	}
	return false;
}

char* func_1355()
{
	return "bPickupThisCorpse";
}

void func_1356(int iParam0)
{
	func_35(&(Global_1425351->f_17), iParam0);
}

bool func_1357(int iParam0, bool bParam1)
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

bool func_1358(int iParam0)
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

bool func_1359(var uParam0, var uParam1)
{
	if (is_entity_dead(*uParam0))
	{
		return true;
	}
	if (!does_entity_exist(uParam0->f_1))
	{
		return false;
	}
	if (func_162(uParam0, 524288) && has_anim_event_fired(uParam0->f_1, 200432249))
	{
		return true;
	}
	if (!func_162(uParam0, 262144))
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

int func_1360(int iParam0, int iParam1)
{
	if (!func_387(iParam0))
	{
		return -1;
	}
	return (iParam0 + (120 * iParam1));
}

bool func_1361(int iParam0)
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

bool func_1362(int iParam0, int iParam1)
{
	if (func_139() != -1)
	{
		return false;
	}
	if (!func_1034(iParam0))
	{
		return false;
	}
	return (Global_24887[iParam0] && iParam1) != 0;
}

bool func_1363(int iParam0)
{
	if (!func_1034(iParam0))
	{
		return false;
	}
	return _does_thread_exist((*Global_1895087)[iParam0]->f_2);
}

bool func_1364(int iParam0, bool bParam1)
{
	if (func_139() != -1)
	{
		return false;
	}
	if (!func_1034(iParam0))
	{
		return false;
	}
	if (!_0x800df3fc913355f3(func_601(iParam0)))
	{
		return false;
	}
	if (bParam1 && !does_entity_exist(func_1602(iParam0)))
	{
		return false;
	}
	return !_0xeb98b38ca60742d7(func_601(iParam0));
}

bool func_1365(int iParam0, int iParam1)
{
	if (!func_1041(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_15614[iParam0] && iParam1) != 0;
}

void func_1366(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	func_65(vVar0, 0);
}

bool func_1367(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 143:
			*iParam2 = 1754500170;
			*iParam1 = 14;
			return true;
		default:
			break;
	}
	*iParam2 = -1600776215;
	*iParam1 = -1;
	return false;
}

bool func_1368(int iParam0, int iParam1, bool bParam2)
{
	if (!func_1603(iParam0))
	{
		return false;
	}
	if (!func_1604(iParam1))
	{
		return false;
	}
	if (bParam2)
	{
		return func_1605(iParam0, iParam1);
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

int func_1369(int iParam0, int iParam1)
{
	if (!func_1603(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_40.f_11206[iParam0][iVar0] == iParam1)
		{
			func_1606(iParam0, (*Global_40.f_11206[iParam0])[iVar0]);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_1370(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_1371(iVar0, &iParam0))
		{
			if (Global_40.f_4942[iVar0]->f_59 != 0 && Global_40.f_4942[iVar0]->f_59 != iParam1)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1371(int iParam0, int iParam1)
{
	if (!func_661(iParam0))
	{
		return false;
	}
	iVar0 = func_1048(iParam0);
	return (*iParam1 && iVar0) != 0;
}

void func_1372(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_661(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (&Global_40.f_4942[iParam0] - (Global_40.f_4942[iParam0] && iParam1));
}

int func_1373(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_6;
	}
	return -15;
}

bool func_1374(int iParam0, bool bParam1, int iParam2)
{
	if (iParam0 == 18)
	{
		return false;
	}
	if (iParam0 == 71)
	{
		return false;
	}
	if ((bParam1 && does_blip_exist((*Global_1835011)[iParam0]->f_27)) && (*Global_1835011)[iParam0]->f_21 == iParam2)
	{
		return true;
	}
	return false;
}

bool func_1375(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_1607((*Global_1835011)[iParam0]);
	}
	return false;
}

int func_1376(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 36:
			return 1;
	}
	return 0;
}

int func_1377(int iParam0)
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

int func_1378(int iParam0)
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

void func_1379(int iParam0, int iParam1)
{
	Var0 = { *Global_1898164->f_1[iParam0] };
	*Global_1898164->f_1[iParam0] = { *Global_1898164->f_1[iParam1] };
	*Global_1898164->f_1[iParam1] = { Var0 };
}

int func_1380(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2147332013:
			return 129;
		case -2137730706:
			return 13;
		case -2129915369:
			return 383;
		case -2122981486:
			return 179;
		case -2104294676:
			return 83;
		case -2098336883:
			return 145;
		case -2093351659:
			return 297;
		case -2093199573:
			return 185;
		case -2082302444:
			return 259;
		case -2075517304:
			return 393;
		case -2071373019:
			return 440;
		case -2063047758:
			return 190;
		case -2047114234:
			return 351;
		case -2041153728:
			return 277;
		case -2038346064:
			return 244;
		case -2033572567:
			return 92;
		case -2030965067:
			return 380;
		case -2023813568:
			return 125;
		case -2006082799:
			return 56;
		case -1994410205:
			return 499;
		case -1988547710:
			return 457;
		case -1981702243:
			return 96;
		case -1971110347:
			return 435;
		case -1955429862:
			return 387;
		case -1949364492:
			return 285;
		case -1943655584:
			return 460;
		case -1935893216:
			return 124;
		case -1934704933:
			return 423;
		case -1922834065:
			return 320;
		case -1917134080:
			return 309;
		case -1916588959:
			return 29;
		case -1897704131:
			return 225;
		case -1888506091:
			return 142;
		case -1885734028:
			return 110;
		case -1868521635:
			return 396;
		case -1866112883:
			return 257;
		case -1856459307:
			return 219;
		case -1837343824:
			return 496;
		case -1832590852:
			return 326;
		case -1827461037:
			return 233;
		case -1827211287:
			return 197;
		case -1827011525:
			return 98;
		case -1825730216:
			return 18;
		case -1818590041:
			return 246;
		case -1812183035:
			return 97;
		case -1805142260:
			return 273;
		case -1804466187:
			return 77;
		case -1802212639:
			return 10;
		case -1790474454:
			return 331;
		case -1771575988:
			return 16;
		case -1757085331:
			return 454;
		case -1738185394:
			return 411;
		case -1728071186:
			return 108;
		case -1719149624:
			return 131;
		case -1689239424:
			return 312;
		case -1675752723:
			return 249;
		case -1671819791:
			return 196;
		case -1667151809:
			return 139;
		case -1664107227:
			return 405;
		case -1648173738:
			return 22;
		case -1646431667:
			return 415;
		case -1633236438:
			return 426;
		case -1596446207:
			return 252;
		case -1584659518:
			return 210;
		case -1582252733:
			return 409;
		case -1565979762:
			return 507;
		case -1564254711:
			return 158;
		case -1557862414:
			return 88;
		case -1557856056:
			return 112;
		case -1548165899:
			return 422;
		case -1538781541:
			return 483;
		case -1526278254:
			return 338;
		case -1520159291:
			return 17;
		case -1512720465:
			return 413;
		case -1501120273:
			return 57;
		case -1486701482:
			return 437;
		case -1483924019:
			return 27;
		case -1482329777:
			return 369;
		case -1479860879:
			return 482;
		case -1466029365:
			return 223;
		case -1461741225:
			return 280;
		case -1426009748:
			return 119;
		case -1425653701:
			return 199;
		case -1417145007:
			return 472;
		case -1409307734:
			return 289;
		case -1408927269:
			return 21;
		case -1405475146:
			return 329;
		case -1396074730:
			return 427;
		case -1393633441:
			return 377;
		case -1383535454:
			return 135;
		case -1381943684:
			return 470;
		case -1377327596:
			return 205;
		case -1370062029:
			return 148;
		case -1355784201:
			return 311;
		case -1340559426:
			return 373;
		case -1333840726:
			return 236;
		case -1318290630:
			return 254;
		case -1316284753:
			return 114;
		case -1302664729:
			return 294;
		case -1299405763:
			return 206;
		case -1276847784:
			return 229;
		case -1238376790:
			return 445;
		case -1235200494:
			return 165;
		case -1233518925:
			return 318;
		case -1220678266:
			return 120;
		case -1211711936:
			return 26;
		case -1205318041:
			return 23;
		case -1202860612:
			return 327;
		case -1198456774:
			return 442;
		case -1190705999:
			return 9;
		case -1179993139:
			return 284;
		case -1171086122:
			return 41;
		case -1164176475:
			return 138;
		case -1152282847:
			return 33;
		case -1143028112:
			return 25;
		case -1117048125:
			return 238;
		case -1088604829:
			return 247;
		case -1077843421:
			return 324;
		case -1061998329:
			return 164;
		case -1061765120:
			return 169;
		case -1048889581:
			return 391;
		case -1045864225:
			return 510;
		case -1036305792:
			return 58;
		case -1032742879:
			return 61;
		case -1025265051:
			return 485;
		case -978287173:
			return 12;
		case -954047483:
			return 395;
		case -948342953:
			return 359;
		case -935212592:
			return 486;
		case -925475803:
			return 484;
		case -916887991:
			return 76;
		case -908082222:
			return 187;
		case -895048976:
			return 374;
		case -890266811:
			return 172;
		case -872824399:
			return 170;
		case -860304527:
			return 186;
		case -850999370:
			return 2;
		case -833577856:
			return 86;
		case -830432609:
			return 492;
		case -825056768:
			return 149;
		case -820146008:
			return 52;
		case -820014425:
			return 439;
		case -818926670:
			return 200;
		case -813365276:
			return 243;
		case -811804990:
			return 293;
		case -807742826:
			return 3;
		case -807680461:
			return 68;
		case -807112425:
			return 180;
		case -803062666:
			return 65;
		case -779264865:
			return 106;
		case -757336127:
			return 372;
		case -742985447:
			return 302;
		case -736212459:
			return 275;
		case -715535005:
			return 362;
		case -713369135:
			return 461;
		case -710247698:
			return 251;
		case -697342513:
			return 242;
		case -695655810:
			return 443;
		case -694047360:
			return 375;
		case -693094356:
			return 89;
		case -692943180:
			return 341;
		case -681593414:
			return 175;
		case -671103079:
			return 504;
		case -670201310:
			return 313;
		case -666548248:
			return 345;
		case -650501093:
			return 509;
		case -646454939:
			return 94;
		case -637873918:
			return 404;
		case -636774257:
			return 146;
		case -625309660:
			return 343;
		case -625171987:
			return 234;
		case -620369863:
			return 403;
		case -619139736:
			return 104;
		case -604891653:
			return 237;
		case -597010176:
			return 487;
		case -582523927:
			return 424;
		case -574426587:
			return 261;
		case -561040434:
			return 400;
		case -558867971:
			return 266;
		case -554271718:
			return 232;
		case -550689301:
			return 283;
		case -544885621:
			return 310;
		case -544096309:
			return 337;
		case -534913305:
			return 174;
		case -532430534:
			return 444;
		case -527348304:
			return 253;
		case -515663690:
			return 330;
		case -505205920:
			return 39;
		case -453449739:
			return 182;
		case -449489613:
			return 140;
		case -445710060:
			return 469;
		case -435161770:
			return 150;
		case -426458298:
			return 59;
		case -423162607:
			return 133;
		case -413943699:
			return 141;
		case -404697685:
			return 308;
		case -402973141:
			return 418;
		case -399703928:
			return 155;
		case -384358266:
			return 295;
		case -381477663:
			return 37;
		case -365550600:
			return 30;
		case -332258016:
			return 382;
		case -331451824:
			return 303;
		case -330340613:
			return 489;
		case -328226663:
			return 323;
		case -324786054:
			return 288;
		case -319093529:
			return 260;
		case -317452243:
			return 128;
		case -314300362:
			return 473;
		case -308211771:
			return 194;
		case -303175962:
			return 431;
		case -302690754:
			return 67;
		case -302574837:
			return 24;
		case -290258665:
			return 317;
		case -286479684:
			return 269;
		case -285172118:
			return 505;
		case -270246276:
			return 490;
		case -266920872:
			return 357;
		case -259827569:
			return 425;
		case -258855820:
			return 464;
		case -248683070:
			return 429;
		case -231638975:
			return 34;
		case -222982511:
			return 204;
		case -221923309:
			return 406;
		case -221398783:
			return 354;
		case -219249641:
			return 474;
		case -218211995:
			return 344;
		case -207368052:
			return 361;
		case -172442174:
			return 385;
		case -170673728:
			return 156;
		case -165538585:
			return 127;
		case -164763388:
			return 376;
		case -164125056:
			return 438;
		case -162152912:
			return 441;
		case -144509608:
			return 113;
		case -134086241:
			return 222;
		case -125979788:
			return 95;
		case -123719783:
			return 151;
		case -121904458:
			return 208;
		case -120359954:
			return 316;
		case -117389654:
			return 93;
		case -115054321:
			return 325;
		case -110297889:
			return 290;
		case -98209688:
			return 55;
		case -94582539:
			return 239;
		case -72799657:
			return 287;
		case -66788599:
			return 19;
		case -58963831:
			return 105;
		case -58291054:
			return 201;
		case -56411631:
			return 342;
		case -54575589:
			return 353;
		case -21372580:
			return 46;
		case -18183703:
			return 466;
		case -8269375:
			return 137;
		case 13460468:
			return 350;
		case 15906262:
			return 321;
		case 16938930:
			return 81;
		case 61425283:
			return 51;
		case 65871884:
			return 54;
		case 70047950:
			return 188;
		case 72162222:
			return 43;
		case 72854145:
			return 1;
		case 85572330:
			return 147;
		case 94814634:
			return 228;
		case 95619635:
			return 408;
		case 98434060:
			return 458;
		case 108841201:
			return 358;
		case 121222228:
			return 476;
		case 121466883:
			return 498;
		case 122725574:
			return 477;
		case 124507607:
			return 480;
		case 127002552:
			return 455;
		case 132239274:
			return 494;
		case 132287504:
			return 184;
		case 137433874:
			return 227;
		case 139790602:
			return 60;
		case 171363131:
			return 47;
		case 176656832:
			return 0;
		case 180573150:
			return 279;
		case 187832713:
			return 282;
		case 195634974:
			return 433;
		case 200640922:
			return 35;
		case 207369059:
			return 64;
		case 209896562:
			return 304;
		case 217189690:
			return 241;
		case 220165734:
			return 134;
		case 228261307:
			return 74;
		case 229393477:
			return 270;
		case 278608719:
			return 399;
		case 281905065:
			return 419;
		case 289706151:
			return 364;
		case 290238735:
			return 250;
		case 291150162:
			return 103;
		case 299577191:
			return 90;
		case 315283201:
			return 240;
		case 315850182:
			return 193;
		case 319124397:
			return 506;
		case 340819214:
			return 84;
		case 388356689:
			return 101;
		case 397857304:
			return 335;
		case 400034151:
			return 71;
		case 403634348:
			return 291;
		case 404260466:
			return 73;
		case 408875702:
			return 80;
		case 411591903:
			return 132;
		case 437096661:
			return 446;
		case 443165194:
			return 332;
		case 446631778:
			return 436;
		case 448165982:
			return 220;
		case 474959407:
			return 255;
		case 477580579:
			return 493;
		case 487107418:
			return 370;
		case 490619049:
			return 163;
		case 500323776:
			return 40;
		case 501194998:
			return 471;
		case 512067206:
			return 452;
		case 525567468:
			return 160;
		case 531203229:
			return 245;
		case 532176461:
			return 203;
		case 533929296:
			return 346;
		case 534386033:
			return 488;
		case 534766068:
			return 349;
		case 542655528:
			return 360;
		case 545240164:
			return 398;
		case 553023190:
			return 78;
		case 561912024:
			return 420;
		case 569547151:
			return 389;
		case 579829077:
			return 178;
		case 597768834:
			return 315;
		case 627421591:
			return 268;
		case 634843927:
			return 66;
		case 643583911:
			return 401;
		case 652625673:
			return 501;
		case 654830082:
			return 371;
		case 676394410:
			return 8;
		case 678897243:
			return 211;
		case 679257961:
			return 126;
		case 685466172:
			return 217;
		case 692218123:
			return 467;
		case 693884302:
			return 177;
		case 703663141:
			return 328;
		case 705436149:
			return 365;
		case 709886296:
			return 414;
		case 720937389:
			return 115;
		case 727456822:
			return 153;
		case 730196087:
			return 157;
		case 737744809:
			return 50;
		case 747937920:
			return 481;
		case 753501669:
			return 367;
		case 761196368:
			return 218;
		case 766757422:
			return 296;
		case 772151702:
			return 28;
		case 779383250:
			return 336;
		case 787526397:
			return 202;
		case 794696385:
			return 14;
		case 812866778:
			return 355;
		case 833697503:
			return 298;
		case 837366581:
			return 118;
		case 847641699:
			return 192;
		case 852724290:
			return 136;
		case 853563984:
			return 49;
		case 856952521:
			return 42;
		case 866755445:
			return 4;
		case 870594813:
			return 173;
		case 881844660:
			return 11;
		case 920901415:
			return 412;
		case 921753284:
			return 272;
		case 951007010:
			return 407;
		case 951777606:
			return 212;
		case 953460136:
			return 159;
		case 960236560:
			return 70;
		case 1004978630:
			return 333;
		case 1005520287:
			return 38;
		case 1019519723:
			return 256;
		case 1025198797:
			return 171;
		case 1046168872:
			return 456;
		case 1057391314:
			return 356;
		case 1059753202:
			return 198;
		case 1061621862:
			return 299;
		case 1073595144:
			return 417;
		case 1080053708:
			return 189;
		case 1086705486:
			return 265;
		case 1092859156:
			return 116;
		case 1098143971:
			return 305;
		case 1130474589:
			return 264;
		case 1132574871:
			return 402;
		case 1134064472:
			return 271;
		case 1138578991:
			return 286;
		case 1141344854:
			return 378;
		case 1150653348:
			return 392;
		case 1156064998:
			return 366;
		case 1157034909:
			return 451;
		case 1165920102:
			return 292;
		case 1166284695:
			return 363;
		case 1176031365:
			return 224;
		case 1176450045:
			return 87;
		case 1185998732:
			return 410;
		case 1188734721:
			return 214;
		case 1219566057:
			return 166;
		case 1234351222:
			return 463;
		case 1249990864:
			return 428;
		case 1264235360:
			return 450;
		case 1267596926:
			return 7;
		case 1267957796:
			return 32;
		case 1292421672:
			return 215;
		case 1296800590:
			return 107;
		case 1297331434:
			return 130;
		case 1300783988:
			return 45;
		case 1305416676:
			return 495;
		case 1314347520:
			return 122;
		case 1328264128:
			return 258;
		case 1330480767:
			return 102;
		case 1335382896:
			return 248;
		case 1338855384:
			return 152;
		case 1344816618:
			return 314;
		case 1344986053:
			return 168;
		case 1349313303:
			return 6;
		case 1354948947:
			return 300;
		case 1357649685:
			return 267;
		case 1358951864:
			return 368;
		case 1360004037:
			return 322;
		case 1365311568:
			return 85;
		case 1366067161:
			return 91;
		case 1402899606:
			return 195;
		case 1406459015:
			return 53;
		case 1410684624:
			return 181;
		case 1415827953:
			return 432;
		case 1425403638:
			return 479;
		case 1427678219:
			return 230;
		case 1437607594:
			return 306;
		case 1438982821:
			return 111;
		case 1441230304:
			return 502;
		case 1447433250:
			return 352;
		case 1448617333:
			return 99;
		case 1454698172:
			return 421;
		case 1456958671:
			return 397;
		case 1467569385:
			return 69;
		case 1469701481:
			return 394;
		case 1508162848:
			return 434;
		case 1522535287:
			return 48;
		case 1524405765:
			return 79;
		case 1534808110:
			return 301;
		case 1549419655:
			return 216;
		case 1566844391:
			return 63;
		case 1571380021:
			return 75;
		case 1578693170:
			return 144;
		case 1593516439:
			return 462;
		case 1618734891:
			return 339;
		case 1621135203:
			return 44;
		case 1623482561:
			return 503;
		case 1636680094:
			return 478;
		case 1647502903:
			return 20;
		case 1665139197:
			return 278;
		case 1674863702:
			return 281;
		case 1675028401:
			return 109;
		case 1685749736:
			return 334;
		case 1688887348:
			return 209;
		case 1699962800:
			return 263;
		case 1701503387:
			return 207;
		case 1707661169:
			return 167;
		case 1723031480:
			return 161;
		case 1731971171:
			return 262;
		case 1750892420:
			return 183;
		case 1756182884:
			return 162;
		case 1759111208:
			return 72;
		case 1769573516:
			return 468;
		case 1773135364:
			return 231;
		case 1777191912:
			return 340;
		case 1783253542:
			return 384;
		case 1784248599:
			return 143;
		case 1786449168:
			return 31;
		case 1791780428:
			return 117;
		case 1792418811:
			return 100;
		case 1796786552:
			return 379;
		case 1817180056:
			return 390;
		case 1819621703:
			return 276;
		case 1824331150:
			return 449;
		case 1852529797:
			return 307;
		case 1863892775:
			return 274;
		case 1874987418:
			return 191;
		case 1888528254:
			return 447;
		case 1889392998:
			return 508;
		case 1890596065:
			return 235;
		case 1899640864:
			return 388;
		case 1909655985:
			return 430;
		case 1914552023:
			return 176;
		case 1927460276:
			return 448;
		case 1935952956:
			return 475;
		case 1937922313:
			return 459;
		case 1945593927:
			return 62;
		case 1955664182:
			return 226;
		case 1964695690:
			return 491;
		case 1971155641:
			return 453;
		case 1974689262:
			return 500;
		case 1978339427:
			return 154;
		case 2011168490:
			return 123;
		case 2011368334:
			return 221;
		case 2016323151:
			return 36;
		case 2030928096:
			return 381;
		case 2033246305:
			return 82;
		case 2045192987:
			return 319;
		case 2045388447:
			return 121;
		case 2050878222:
			return 497;
		case 2057380366:
			return 348;
		case 2071287828:
			return 347;
		case 2080199877:
			return 213;
		case 2082303678:
			return 5;
		case 2091083291:
			return 15;
		case 2137967386:
			return 386;
		case 2143106360:
			return 416;
		case 2143139308:
			return 465;
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

int func_1381(int iParam0)
{
	if (!func_412(*iParam0, 0))
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

bool func_1382(int iParam0, var uParam1, bool bParam2)
{
	if (!func_412(iParam0, 0))
	{
		return false;
	}
	Var0 = { func_798(iParam0, 0, 1) };
	iVar5 = 1728382685;
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_1118((386 + iVar29), 1);
		if (func_1119(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_1120(iParam0, &Var6, iVar5);
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

int func_1383(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_412(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_1121(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_1089(bParam6), &Var0, 0);
	return uVar4;
}

struct<14> func_1384(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_1385(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_1386(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_1089(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_1387(int iParam0)
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

float func_1388(int iParam0)
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
			return func_1608(iParam0);
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
			return func_1608(iParam0);
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
			return func_1608(iParam0);
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

bool func_1389(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_492(18);
		case 2:
			return func_492(20);
		case 1:
			return func_492(19);
		default:
			break;
	}
	return true;
}

int func_1390(int iParam0)
{
	return func_1609(&(Global_40.f_11095.f_11[iParam0]));
}

void func_1391(int iParam0, float fParam1, bool bParam2)
{
	if (func_139() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_492(31))
	{
		return;
	}
	iVar0 = func_1390(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	set_attribute_points(Global_35, iParam0, floor(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_1390(iParam0);
	if (func_1610(iParam0) && func_1611(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_1612(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_1613(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!is_radar_hidden() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_196(func_1614(iParam0), 0);
					}
					func_1615(iParam0, iVar2, iVar3);
					func_1616(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = get_game_timer();
}

char* func_1392(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_1393(int iParam0)
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

int func_1394()
{
	return func_1617(Global_40.f_12019);
}

int func_1395()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_1105(iVar1);
		if (func_317(iVar2, 1, 0) || func_1401(func_1400(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1396()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1618(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1397()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_1406(_0x126cbebba46693cf(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1398()
{
	return _0x3a65f4844913a047(2103522376, 0);
}

int func_1399(int iParam0)
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

int func_1400(int iParam0)
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

bool func_1401(int iParam0)
{
	return (Global_40.f_12019 && iParam0) != 0;
}

char* func_1402(int iParam0)
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

int func_1403(int iParam0)
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

int func_1404(int iParam0)
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

char* func_1405(int iParam0)
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

bool func_1406(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

char* func_1407(int iParam0)
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

char* func_1408(int iParam0)
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

bool func_1409(int iParam0)
{
	if (func_1619(iParam0) && func_317(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_1620(iParam0) && func_1621(iParam0))
	{
		return true;
	}
	return false;
}

char* func_1410(int iParam0)
{
	if (!func_412(iParam0, 0))
	{
		return "";
	}
	return _get_label_text_by_hash(func_757(iParam0));
}

int func_1411(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

void func_1412(bool bParam0)
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

void func_1413(int iParam0)
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

void func_1414(bool bParam0)
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

void func_1415(bool bParam0)
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

void func_1416(bool bParam0)
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

void func_1417(bool bParam0)
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

void func_1418(bool bParam0)
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

void func_1419(bool bParam0)
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

int func_1420(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_789(iParam0, 1)]);
}

void func_1421()
{
	if (!_unlock_is_unlocked(-1526891582))
	{
		func_1622();
		_unlock_set_unlocked(-1526891582, true);
		func_717(-916314281);
		func_763(-916314281, 1, 752097756);
		set_current_ped_weapon(Global_35, -916314281, true, 2, false, false);
		func_717(494733111);
		func_763(494733111, 1, 752097756);
		set_current_ped_weapon(Global_35, 494733111, true, 4, false, false);
	}
}

bool func_1422(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

int func_1423(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_1424(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

int func_1425(var uParam0)
{
	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_413(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_413(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_413(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_413(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_413(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_413(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

int func_1426(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam0 == &Global_1946804->f_57[func_789(iParam1, 1)])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_1165(524288))
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

bool func_1427(int iParam0)
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

int func_1428(int iParam0)
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

int func_1429(int iParam0)
{
	return func_1623(iParam0, -1);
}

void func_1430(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1624((Global_40.f_4283.f_325 + iParam0));
}

void func_1431(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_1243())
	{
		func_500(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_500(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

bool func_1432(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

void func_1433(int iParam0)
{
	iVar0 = func_1077(iParam0, 1);
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

void func_1434(int iParam0)
{
	iVar0 = func_1077(iParam0, 1);
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

void func_1435()
{
	func_1434(-939420910);
	func_1434(-1187950766);
	func_1434(356365161);
	func_1434(753127042);
	func_1434(-2038424081);
	func_1434(1884271742);
	func_1434(459290420);
}

void func_1436()
{
	func_1434(704802028);
	func_1434(588987611);
	func_1434(2008888900);
	func_1434(1649996811);
	func_1434(227918160);
	func_1434(168171957);
	func_1434(1193080109);
	func_1434(-491981251);
	func_1434(-639037538);
	func_1434(-618620429);
}

bool func_1437(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_1438(int iParam0)
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

void func_1439(int iParam0)
{
	Global_40.f_12019.f_43 = (Global_40.f_12019.f_43 || iParam0);
}

bool func_1440(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

void func_1441()
{
	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		iVar0++;
	}
}

void func_1442(int iParam0)
{
	func_1447(iParam0, 8, 6);
}

void func_1443(int iParam0)
{
	func_1625(&(Global_1946804->f_2589), iParam0);
}

void func_1444(int iParam0, int iParam1)
{
	func_1626(&(Global_1946804->f_2589), iParam0, iParam1);
}

int func_1445(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = func_1627(0);
	if (iParam2 != 0 && func_1628(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_1219(iParam0, func_1229(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_1446(var uParam0, bool bParam1, int iParam2)
{
	bVar6 = func_139() != -1;
	iVar7 = func_1627(0);
	if (func_1165(32768))
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
			iVar5 = func_1229(iVar0, 1);
			if (func_1509(iVar5, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
			{
			}
			else if (func_1509(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
			{
			}
			else
			{
				iVar4 = func_1426(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_1629(uParam0);
				if (iVar3 > 0)
				{
					if (!func_1165(524288))
					{
						func_1221(524288);
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
							iVar5 = func_1229(iVar0, 1);
							if (func_1509(iVar5, 8))
							{
							}
							else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
							{
							}
							else if (func_1509(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
							{
							}
							else
							{
								iVar4 = func_1426(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0] = &Global_1946804->f_57[iVar0];
									uParam0->f_1[iVar0]->f_1 = 0;
									if (bParam1)
									{
										func_1444(iVar0, iParam2);
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
					func_1450(524288);
				}
			}
		}
	}
}

void func_1447(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_789(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_789(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_789(iParam0, 1)])->f_10 && iParam1));
}

void func_1448(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1630(&(uParam0->f_2[iVar0]), bParam1, bParam2);
		iVar0++;
	}
	if (func_139() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_1631(2, Global_26796.f_776)) || Global_1946804->f_1497 != func_1469(0))
		{
			if (Global_40.f_7157[Global_40.f_7729] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729] = (&Global_40.f_7157[Global_40.f_7729] - Global_40.f_7157[Global_40.f_7729] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729] |= 4096;
				Global_1946804->f_1497 = func_1469(Global_40.f_7729);
				Global_1946804->f_1378 = func_1469(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_1632(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_1213(0, 1);
	}
}

void func_1449(var uParam0)
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

void func_1450(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

bool func_1451(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_1452(struct<4> Param0)
{
	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_1513(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1] == Param0 && Global_1946804->f_769[iVar1]->f_2 == Param0.f_2) && Global_1946804->f_769[iVar1]->f_3 == Param0.f_3) && Global_1946804->f_769[iVar1]->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1] == 34 && func_1513(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_1514(Param0);
	*Global_1946804->f_769[Global_1946804->f_854] = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_1221(8);
}

bool func_1453()
{
	if (Global_1572887->f_12 != -1)
	{
		return false;
	}
	return Global_1347477->f_203;
}

float func_1454(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

float func_1455()
{
	fVar0 = func_1633(13);
	iVar1 = func_1634(fVar0);
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

float func_1456()
{
	if (is_ped_on_mount(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_1457()
{
	if (func_308())
	{
		if (_get_special_edition_core_stats_bonus_enabled())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_1458()
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

float func_1459()
{
	return Global_1955565->f_3;
}

void func_1460(int iParam0, char* sParam1, bool bParam2)
{
	sVar0 = func_1635(iParam0, 1, 0, 0);
	sVar0 = _create_var_string(2, sVar0, sParam1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[1]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[1]), bParam2);
}

void func_1461(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_1635(iParam0, 2, 0, 0);
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

float func_1462(float fParam0, float fParam1, float fParam2)
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

bool func_1463()
{
	return func_1633(12) <= -99f;
}

bool func_1464()
{
	return func_1633(12) >= 99f;
}

int func_1465()
{
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_714(iVar1) == -999503751)
		{
			if (func_1636() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_1466(int iParam0)
{
	if (!func_1180(iParam0))
	{
		return false;
	}
	if (func_1470(iParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_1467(int iParam0)
{
	if (!func_1180(iParam0))
	{
		return false;
	}
	if (func_1470(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_1468(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1180(iParam0))
	{
		return;
	}
	if (!func_1467(iParam0))
	{
		func_1472(iParam0, 2);
		if (bParam2)
		{
			if (!func_442(0, 0, 1))
			{
				func_337(1, 4);
			}
		}
		if ((!func_1471() && !bParam1) && !func_442(0, 0, 1))
		{
			func_647(_create_var_string(10, "OUT_JOURN_ADD", func_1637(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_1469(int iParam0)
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

bool func_1470(int iParam0, int iParam1)
{
	if (!func_1180(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0] && iParam1) != 0;
}

bool func_1471()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

void func_1472(int iParam0, int iParam1)
{
	if (!func_1180(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0] = (Global_40.f_7157[iParam0] || iParam1);
}

int func_1473(int iParam0, bool bParam1)
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

void func_1474(int iParam0, bool bParam1)
{
	iVar0 = func_1638(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_713(50);
			}
			else
			{
				func_713(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_713(51);
			}
			else
			{
				func_713(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_1639(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_744();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_744();
			}
			break;
		case 3:
			func_713(24);
			if (bParam1)
			{
				if (!func_1639(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_744();
				}
			}
			break;
	}
}

void func_1475(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_1640(0))
			{
				iVar0++;
			}
			if (func_1640(2))
			{
				iVar0++;
			}
			if (func_1640(4))
			{
				iVar0++;
			}
			if (!func_1641(16))
			{
				if (iVar0 == 1)
				{
					func_1642();
					func_196(456, 1);
					func_1643(16);
				}
			}
			if (!func_1641(32))
			{
				if (iVar0 >= 3)
				{
					func_1642();
					func_196(456, 1);
					func_1643(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_1640(1))
			{
				iVar0++;
			}
			if (func_1640(3))
			{
				iVar0++;
			}
			if (func_1640(7))
			{
				iVar0++;
			}
			if (!func_1641(1))
			{
				if (iVar0 == 1)
				{
					func_1644();
					func_196(457, 1);
					func_1643(1);
				}
			}
			if (!func_1641(2))
			{
				if (iVar0 >= 3)
				{
					func_1644();
					func_196(457, 1);
					func_1643(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_1640(5))
			{
				iVar0++;
			}
			if (func_1640(6))
			{
				iVar0++;
			}
			if (func_1640(8))
			{
				iVar0++;
			}
			if (!func_1641(4))
			{
				if (iVar0 == 1)
				{
					func_1645();
					func_196(455, 1);
					func_1643(4);
				}
			}
			if (!func_1641(8))
			{
				if (iVar0 >= 3)
				{
					func_1645();
					func_196(455, 1);
					func_1643(8);
				}
			}
			break;
	}
}

void func_1476(var uParam0)
{
	func_1186(uParam0, 143479330);
	if (Global_1946804->f_1 == 2026485318)
	{
		func_1186(uParam0, 617531372);
	}
	else
	{
		func_1186(uParam0, 291123060);
	}
}

void func_1477(var uParam0, int iParam1, struct<14> Param2)
{
	if (!func_1646(uParam0))
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

bool func_1478(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_1479(int iParam0, int iParam1, var uParam2, int iParam3)
{
	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_412(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!_item_database_fillout_acquire_cost(iParam0, iParam1, &Var0))
	{
		return false;
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

void func_1480(int iParam0)
{
	func_785(iParam0, 1, 1, -142743235, 1);
	iVar34 = func_1647(iParam0, &uVar18);
	func_1648(iParam0, &uVar18, &iVar34, 1);
	if (func_791() == -2125499975)
	{
		iVar38 = 2020890174;
	}
	else
	{
		iVar38 = 1105329772;
	}
	func_1649(iParam0, &(Global_26796.f_627.f_121.f_20));
	func_787(iParam0, 1, 1);
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		func_785(&(uVar18[iVar36]), 1, 1, -142743235, 1);
		switch (func_714(&(uVar18[iVar36])))
		{
			case -2061583405:
				func_1649(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_21));
				break;
			case 81053684:
				func_1649(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_23));
				break;
			case -525676072:
				func_1649(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_22));
				break;
			case -1719060085:
				func_1649(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_24));
				break;
			case -413129408:
				func_1649(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_25));
				break;
		}
		func_787(&(uVar18[iVar36]), 1, 1);
		iVar0[iVar36] = func_789(func_788(&(uVar18[iVar36])), 1);
		iVar36++;
	}
	func_1650(&(Global_1946804->f_1616));
	func_792(&(Global_1946804->f_1616), iVar38, &uVar39, 1, 0, 0, 0);
	*Global_1946804->f_1616.f_1[8] = { func_793(8, 0) };
	*Global_1946804->f_1616.f_1[9] = { func_793(9, 0) };
	*Global_1946804->f_1616.f_1[0] = { func_793(0, 0) };
	*Global_1946804->f_1616.f_1[2] = { func_793(2, 0) };
	*Global_1946804->f_1616.f_1[3] = { func_793(3, 0) };
	*Global_1946804->f_1616.f_1[1] = { func_793(1, 0) };
	*Global_1946804->f_1616.f_1[5] = { func_793(5, 0) };
	*Global_1946804->f_1616.f_1[6] = { func_793(6, 0) };
	*Global_1946804->f_1616.f_1[7] = { func_793(7, 0) };
	iVar35 = 0;
	while (iVar35 < 5)
	{
		iVar36 = 0;
		while (iVar36 < iVar34)
		{
			if (&uVar18[iVar36] == func_794(&(iVar0[iVar36]), iVar35))
			{
				func_787(func_1651(iVar35), 1, 1);
				func_1652(iVar35);
				if (iVar35 == 0)
				{
					bVar17 = true;
					iVar37 = 0;
					while (iVar37 < 39)
					{
						if (!func_1507(Global_1946804->f_1616.f_1[iVar37], 2))
						{
						}
						else
						{
							func_795(Global_1946804->f_1616.f_1[iVar37], iVar37, 0);
							*Global_1946804->f_1497.f_1[iVar37] = { *Global_1946804->f_1616.f_1[iVar37] };
						}
						iVar37++;
					}
				}
			}
			else
			{
				iVar36++;
			}
		}
		iVar35++;
	}
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		if (&uVar18[iVar36] == &Global_1946804->f_1497.f_1[&iVar0[iVar36]])
		{
			bVar16 = true;
		}
		else
		{
			iVar36++;
		}
	}
	if ((bVar16 || bVar17) || Global_40.f_7729 == func_1179(iParam0))
	{
		if (!func_1653(8))
		{
			if (func_791() == -2125499975)
			{
				if (bVar17)
				{
					func_792(&(Global_1946804->f_1616), 1661121390, &uVar39, 0, 1, 0, -2125499975);
					Global_1946804->f_1616 = 166243423;
					func_1654(&(Global_1946804->f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						func_1655(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == func_1179(iParam0))
				{
					Global_1905941 = 6;
				}
			}
			else
			{
				if (bVar17)
				{
					func_792(&(Global_1946804->f_1616), -361635024, &uVar39, 0, 1, 0, 1160113249);
					Global_1946804->f_1616 = 166243423;
					func_1654(&(Global_1946804->f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						func_1655(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == func_1179(iParam0))
				{
					Global_1905941 = 62;
				}
			}
			if (bVar16 || Global_40.f_7729 == func_1179(iParam0))
			{
				if (is_entity_dead(get_player_ped(player_id())))
				{
					func_1656(Global_40.f_7729, 4096);
					func_1472(&Global_1905941, 4096);
					Global_40.f_7729 = &Global_1905941;
				}
				else
				{
					func_1657(get_player_ped(player_id()), &Global_1905941, 1, 0, 0);
				}
			}
		}
	}
	bVar40 = false;
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		if (&uVar18[iVar36] == &Global_26796.f_627.f_1.f_1.f_1[&iVar0[iVar36]])
		{
			bVar40 = true;
		}
		else
		{
			iVar36++;
		}
	}
	if (!bVar40)
	{
		return;
	}
	func_792(&(Global_1946804->f_1616), 1661121390, &uVar39, 0, 1, 0, -2125499975);
	func_792(&(Global_1946804->f_1616), 2020890174, &uVar39, 1, 0, 0, -2125499975);
	*Global_1946804->f_1616.f_1[8] = { *Global_26796.f_627.f_1.f_1.f_1[8] };
	*Global_1946804->f_1616.f_1[9] = { *Global_26796.f_627.f_1.f_1.f_1[9] };
	*Global_1946804->f_1616.f_1[0] = { *Global_26796.f_627.f_1.f_1.f_1[0] };
	*Global_1946804->f_1616.f_1[2] = { *Global_26796.f_627.f_1.f_1.f_1[2] };
	*Global_1946804->f_1616.f_1[3] = { *Global_26796.f_627.f_1.f_1.f_1[3] };
	*Global_1946804->f_1616.f_1[1] = { *Global_26796.f_627.f_1.f_1.f_1[1] };
	*Global_1946804->f_1616.f_1[5] = { *Global_26796.f_627.f_1.f_1.f_1[5] };
	*Global_1946804->f_1616.f_1[6] = { *Global_26796.f_627.f_1.f_1.f_1[6] };
	*Global_1946804->f_1616.f_1[7] = { *Global_26796.f_627.f_1.f_1.f_1[7] };
	Global_26796.f_627 = Global_1946804->f_1616;
	Global_26796.f_627.f_1.f_1 = Global_1946804->f_1616;
	iVar36 = 0;
	while (iVar36 < 39)
	{
		*Global_26796.f_627.f_1.f_1.f_1[iVar36] = { *Global_1946804->f_1616.f_1[iVar36] };
		iVar36++;
	}
}

struct<4> func_1481()
{
	Var0 = { func_1223(0) };
	return func_1121(856287005, Var0, -218846335, 0);
}

int func_1482(int iParam0, struct<4> Param1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	uVar1 = 1;
	iVar11 = _item_database_get_bundle_item_count(iParam0, &uVar1);
	Var12 = { Param1 };
	iVar0 = 0;
	while (iVar0 < iVar11)
	{
		if (_item_database_get_bundle_item_info(iParam0, &uVar1, iVar0, &Var3))
		{
			if (func_412(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (func_1383(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					func_1658(&uVar7);
					if (func_1122(Var3, &uVar7, &Var12, -1, -142743235, 0, 0))
					{
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

struct<6> func_1483()
{
	if (func_1659(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_1659(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_1659(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_1659(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_1659(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_1659(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

int func_1484(var uParam0)
{
	return uParam0->f_1;
}

void func_1485(var uParam0)
{
	func_1660(uParam0);
	func_1662(uParam0, func_1661(-1346384396));
	func_1663(uParam0, func_1661(-712836614));
	func_1664(uParam0, func_1661(-1629133289));
	func_1665(uParam0, func_1661(1302066700));
	func_1666(uParam0, func_1661(599669344));
	func_1667(uParam0, func_1661(-1555511632));
}

void func_1486(struct<6> Param0)
{
	if (!func_1668(Param0.f_4, 1))
	{
	}
	if (!func_1668(Param0, 1))
	{
	}
	if (!func_1668(Param0.f_2, 1))
	{
	}
	if (!func_1668(Param0.f_5, 1))
	{
	}
	if (!func_1668(Param0.f_3, 1))
	{
	}
	if (!func_1668(Param0.f_1, 1))
	{
	}
}

int func_1487(int iParam0, int iParam1, int iParam2)
{
	*iParam0 = 0;
	*iParam1 = 0;
	*iParam2 = 0;
	if (func_691())
	{
		if (func_31())
		{
			bVar0 = false;
			if (!func_145((*Global_1835011)[15]->f_1, 1) && !func_492(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*iParam0 = func_1669();
				*iParam1 = func_1670();
				*iParam2 = func_1671();
				return 1;
			}
			else
			{
				*iParam0 = func_1672();
				*iParam1 = func_1673();
				*iParam2 = func_1674();
				return 1;
			}
		}
		else if (func_144())
		{
			if (!func_145((*Global_1835011)[60]->f_1, 1))
			{
				*iParam0 = func_1675();
				*iParam1 = func_1676();
				*iParam2 = func_1677();
				return 1;
			}
			else
			{
				*iParam0 = func_1678();
				*iParam1 = func_1679();
				*iParam2 = func_1680();
				return 1;
			}
		}
	}
	else if (func_31())
	{
		*iParam0 = func_1681();
		*iParam1 = func_1682();
		*iParam2 = func_1683();
		return 1;
	}
	else if (func_144())
	{
		*iParam0 = func_1684();
		*iParam1 = func_1685();
		*iParam2 = func_1686();
		return 1;
	}
	return 0;
}

int func_1488(int iParam0)
{
	iParam0 = func_1280(iParam0);
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

void func_1489(int iParam0, int iParam1)
{
	iParam0 = func_1280(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0]->f_8 = iParam1;
}

void func_1490(int iParam0, int iParam1)
{
	iParam0 = func_1280(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0]->f_9 = iParam1;
}

void func_1491(int iParam0, int iParam1)
{
	iParam0 = func_1280(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0]->f_10 = iParam1;
}

void func_1492(int iParam0, int iParam1)
{
	iParam0 = func_1280(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0]->f_434 = iParam1;
}

bool func_1493(int iParam0)
{
	iVar0 = func_1687(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1 = { func_1223(0) };
	if (func_1688(&Var1, iVar0, 0) > 0)
	{
		return true;
	}
	return false;
}

int func_1494(int iParam0)
{
	Var0.f_9 = -1591664384;
	if (!func_1689(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { Var0.f_5 };
	Var29.f_4 = Var0.f_9;
	if (!func_1122(Var0.f_4, &Var0, &Var29, -1, -142743235, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_1495(int iParam0)
{
	if (iParam0 == 808655744)
	{
		return 559905966;
	}
	switch (iParam0)
	{
		case -450053710:
			return 1538827865;
		case -1679658797:
			return -1792561227;
		case 1792770814:
			return 1033678910;
		case -1963397600:
			return -1942141178;
		case -1250098797:
			return 671599957;
		case -318278790:
			return -1554935503;
		case 55096099:
			return 694610769;
		case -458397856:
			return 1941463607;
		case -444610976:
			return -887316537;
		case 746627200:
			return 1762474047;
		case 705691988:
			return -828859553;
		case 2130094044:
			return 1410237043;
		case -1554827654:
			return -2026073756;
		case 604357666:
			return 729407854;
		case -1029277326:
			return 2002245664;
		case -1140650619:
			return -1120227140;
		case -1999198818:
			return 1142681594;
		case 1496579364:
			return 1214981718;
		case -1523757120:
			return -845373950;
		case -403470324:
			return -864588185;
		case 1576849913:
			return 1482814085;
		case -925223936:
			return -1040918754;
		case -1547438906:
			return 535545841;
		case -635239558:
			return 1686036388;
		case -2026265047:
			return -621245377;
		case -586898625:
			return 2125477381;
		case 937246805:
			return 1808724704;
		case 1593035738:
			return -1745871311;
		case 861505058:
			return -1366099125;
		case 687445866:
			return -1900776854;
		case 1705182311:
			return 1381855825;
		case -78273782:
			return -470894301;
		case -819697512:
			return -58297715;
		case -247265944:
			return 919533729;
		case -1516219602:
			return -1158763155;
		case -1265030920:
			return 1112812928;
		case 2024948086:
			return 753764318;
		case 1696286663:
			return 2100045093;
		case -1342159303:
			return 1097965086;
		case -1154406788:
			return -2136667309;
		case 2030804811:
			return -376463594;
		case 1230359523:
			return -1917318030;
		case -1038436471:
			return 1631640006;
		case -1063137731:
			return -1565311117;
		case 96930969:
			return 1714576673;
		case -1180427609:
			return 210760725;
		case 2119038574:
			return 2051021144;
		case 43825738:
			return 1924406350;
		case 2145697477:
			return -1990143531;
		case -1261814606:
			return 1741899492;
		case 107013696:
			return -1629575335;
		case 1066034872:
			return 1096294193;
		case 36009259:
			return -1162498792;
		case -1599683008:
			return -212500005;
		case -1693870200:
			return -538557079;
		case 1072019803:
			return 171150858;
		case 1074477367:
			return 67538819;
		case -85890205:
			return -126472599;
		case 1048964673:
			return -1219957736;
		case -727455979:
			return -332060056;
		case -1667789645:
			return 1917500091;
		case -1924405794:
			return -1043453945;
		case 1861665605:
			return 1723487083;
		case -526169133:
			return 2044230644;
		case 900144280:
			return 1680713143;
		case 1133837220:
			return 344528703;
		case 1702024301:
			return -1674873797;
		case -1604180548:
			return 281852151;
		case 1772321403:
			return -285185056;
		case -1028075925:
			return -1692268955;
		case 84224102:
			return 2130706226;
		case -1896838685:
			return -1754375530;
		case -420599285:
			return -71211764;
		case 478986344:
			return -1390353518;
		case 446670976:
			return 330935532;
		case 802784330:
			return -935042458;
		case 549900435:
			return -41062704;
		case -2063289686:
			return 887669186;
		case 917402668:
			return 2102774612;
		case -914712122:
			return -2011111190;
		case -598917269:
			return -535752499;
		default:
			break;
	}
	return 0;
}

int func_1496(int iParam0, int iParam1)
{
	if (!func_412(iParam1, 0))
	{
		return 0;
	}
	if (!func_1690(iParam1))
	{
		return 0;
	}
	if (func_1493(iParam0))
	{
		return 0;
	}
	iVar0 = func_1687(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_1223(0) };
	Var1.f_4 = iVar0;
	if (!func_1177(iParam1, &uVar6, &Var1, 1, 752097756, 0))
	{
		return 0;
	}
	return 1;
}

bool func_1497(int iParam0, struct<4> Param1, bool bParam5)
{
	if (iParam0 == 0)
	{
		return false;
	}
	uVar1 = 1;
	iVar11 = _item_database_get_bundle_item_count(iParam0, &uVar1);
	Var12 = { Param1 };
	iVar0 = 0;
	while (iVar0 < iVar11)
	{
		if (_item_database_get_bundle_item_info(iParam0, &uVar1, iVar0, &Var3))
		{
			if (func_412(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (func_1383(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					func_1658(&Var7);
					if (func_1177(Var3, &Var7, &Var12, 1, 752097756, 1))
					{
						if (bParam5)
						{
							func_1500(Var7, 1);
						}
					}
				}
			}
		}
		iVar0++;
	}
	return true;
}

void func_1498(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_1517(1) < iParam0)
	{
		iParam0 = func_1517(1);
	}
	_money_decrement_cash_balance(iParam0);
	Var0 = { func_270(1644987397) };
	_0xbd861ae8a5181ed7(&Var0, iParam0);
}

bool func_1499(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x22e590f108289a9d(func_1089(bParam6), &uParam0, iParam4, &Var0))
	{
		return false;
	}
	if (!func_1228(Var0, uParam5, bParam6, 0))
	{
		return false;
	}
	return true;
}

bool func_1500(struct<4> Param0, int iParam4)
{
	if (!func_718(0))
	{
		return func_1691(Param0, iParam4, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1228(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!_0x734311e2852760d0(func_1089(0), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_1501(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_1422(iParam0))
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return false;
	}
	if (!func_718(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!_0xb4158c8c9a3b5dce(func_1089(bParam4), iParam0, iParam1, iParam2))
	{
		return false;
	}
	return true;
}

void func_1502(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_139() == -1)
	{
		if (func_702(43))
		{
			if (func_413(iParam0, 412399755))
			{
				func_1148(-1791518714);
				if (func_1149() == 0)
				{
					func_337(0, 10);
					iVar0 = func_1692(iParam0, iParam1, 1);
					if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
					{
						if (func_1151(iParam0) < func_1152(iParam0))
						{
							func_708(43, iParam0, iParam1, -1791518714, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_702(44))
		{
			if (func_413(iParam0, 709057512))
			{
				func_1148(-2087881550);
				if (func_1149() == 1)
				{
					func_337(0, 10);
					iVar0 = func_1692(iParam0, iParam1, 2);
					if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
					{
						if (func_1151(iParam0) < func_1152(iParam0))
						{
							func_708(43, iParam0, iParam1, -2087881550, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_702(45))
		{
			if (func_413(iParam0, -1478961327))
			{
				func_1148(1908068621);
				if (func_1149() == 2)
				{
					func_337(0, 10);
					iVar0 = func_1692(iParam0, iParam1, 4);
					if (((iParam0 == 2116770557 || iParam0 == -651064726) || iParam0 == -404270094) || iParam0 == 2093126853)
					{
						if (func_1151(iParam0) < func_1152(iParam0))
						{
							func_708(43, iParam0, iParam1, 1908068621, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_702(46))
		{
			if (func_413(iParam0, -1238404098))
			{
				func_1148(1611247019);
				if (func_1149() == 3)
				{
					func_337(0, 10);
					iVar0 = func_1692(iParam0, iParam1, 8);
					if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
					{
						if (func_1151(iParam0) < func_1152(iParam0))
						{
							func_708(43, iParam0, iParam1, 1611247019, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_702(47))
		{
			if (func_413(iParam0, 1160548794))
			{
				func_1148(1319635688);
				if (func_1149() == 4)
				{
					func_337(0, 10);
					iVar0 = func_1692(iParam0, iParam1, 16);
					if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
					{
						if (func_1151(iParam0) < func_1152(iParam0))
						{
							func_708(43, iParam0, iParam1, 1319635688, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

bool func_1503(int iParam0, int iParam1)
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

void func_1504(var uParam0, int iParam1, int iParam2)
{
	iVar1 = func_1693(iParam1);
	func_1694(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_1695(&(uParam0->f_26), iVar1);
		if (func_1696(uParam0->f_26, &iVar0))
		{
			func_1697(iVar0, iVar1);
		}
	}
}

bool func_1505(int iParam0, int iParam1)
{
	Var0 = { func_798(iParam0, 0, 0) };
	Var5 = { func_1121(iParam0, Var0, Var0.f_4, 0) };
	if (func_1383(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return false;
	}
	_0x9a113c660aea3832(func_1089(0), &Var5, iParam1);
	return true;
}

void func_1506(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

bool func_1507(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_1508(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

bool func_1509(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_789(iParam0, 1)])->f_10 && iParam1) != 0;
}

void func_1510(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_789(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_789(iParam0, 1)])->f_10 || iParam1);
}

void func_1511(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

void func_1512(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_1444(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_1444(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2]->f_1 == -1333118809 || uParam0->f_1[iVar2]->f_1 == -1158926300)
	{
		uParam0->f_1[iVar2]->f_1 = 1155669136;
		if (bParam3)
		{
			func_1444(iVar2, iVar0);
		}
	}
}

bool func_1513(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_1514(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

struct<4> func_1515()
{
	return Var0;
}

bool func_1516(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_412(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!_item_database_fillout_acquire_cost(iParam0, iParam1, &Var0))
	{
		if (!bParam5)
		{
		}
		return false;
	}
	if (!bParam5)
	{
	}
	*iParam3 = Var0.f_3;
	iVar47 = 0;
	while (iVar47 < Var0.f_3)
	{
		if (!bParam5)
		{
		}
		*(*uParam2)[iVar47] = { *Var0.f_4[iVar47] };
		iVar47++;
	}
	if (bParam4)
	{
		func_1698(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

int func_1517(int iParam0)
{
	return _money_get_cash_balance();
}

char* func_1518(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HEADSHOT_DUTCH";
		case 1:
			return "HEADSHOT_JOHN";
		case 2:
			return "HEADSHOT_JAVIER";
		case 3:
			return "HEADSHOT_BILL";
		case 4:
			return "HEADSHOT_UNCLE";
		case 5:
			return "HEADSHOT_HOSEA";
		case 6:
			return "HEADSHOT_MICAH";
		case 7:
			return "HEADSHOT_CHARLES";
		case 8:
			return "HEADSHOT_SEAN";
		case 9:
			return "HEADSHOT_LENNY";
		case 10:
			return "HEADSHOT_KIERAN";
		case 11:
			return "HEADSHOT_SADIE";
		case 13:
			return "HEADSHOT_ABIGAIL";
		case 14:
			return "HEADSHOT_JACK";
		case 15:
			return "HEADSHOT_MARYBETH";
		case 16:
			return "HEADSHOT_MOLLY";
		case 17:
			return "HEADSHOT_PEARSON";
		case 18:
			return "HEADSHOT_STRAUSS";
		case 19:
			return "HEADSHOT_SUSAN";
		case 20:
			return "HEADSHOT_KAREN";
		case 21:
			return "HEADSHOT_SWANSON";
		case 22:
			return "HEADSHOT_TILLY";
		case 23:
			return "HEADSHOT_TRELAWNY";
		case 24:
			return "HEADSHOT_CLEET";
		case 25:
			return "HEADSHOT_JOE";
		default:
			break;
	}
	return "";
}

int func_1519(int iParam0)
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

void func_1520(int iParam0, int iParam1, int iParam2, int iParam3)
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
					if (func_1699() > Global_32074.f_2697.f_6[iVar0]->f_5)
					{
						Global_32074.f_2697.f_6[iVar0]->f_5 = func_1699();
					}
					func_304(&(Global_32074.f_2697.f_6[iVar0]->f_5), 0, 0, iParam1, iParam2, 0, 0, 0);
					func_76(&(Global_1415419->f_19[iVar0]->f_11), 2);
				}
			}
			iVar0++;
		}
	}
}

void func_1521(int iParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		iVar0 = func_1265(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_1266(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2]->f_1++;
	}
}

void func_1522(int iParam0, int iParam1)
{
	if (iParam1 != -1 && !func_100(iParam0, 8192))
	{
		iVar0 = func_1266(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0]->f_1++;
	}
}

void func_1523(int iParam0, int iParam1)
{
	iVar0 = (func_852(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	set_bit(Global_17504.f_12[iVar1], iVar2);
}

void func_1524(int iParam0, vector3 vParam1)
{
	if (func_86(iParam0, 512))
	{
		vParam1 = { Global_36 };
	}
	if (func_361(vParam1))
	{
		return;
	}
	if (!func_387(iParam0))
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Global_17504.f_2084)
	{
		vVar2 = { *Global_17504.f_2084[iVar0] };
		if (func_361(vVar2))
		{
			if (iVar1 < 0)
			{
				iVar1 = iVar0;
			}
		}
		else if (Global_17504.f_2084[iVar0]->f_3 == iParam0)
		{
			if (func_362(vVar2, vParam1, 1f, 1))
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

void func_1525(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		func_1538(iVar0, iParam0);
		iVar0++;
	}
}

int func_1526(int iParam0)
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

int func_1527(int iParam0)
{
	if (!func_528(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_20;
}

bool func_1528(int iParam0)
{
	return (Global_1310750->f_16074 && iParam0) != 0;
}

bool func_1529(int iParam0, int iParam1)
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

bool func_1530(int iParam0, int iParam1)
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

bool func_1531(int iParam0, int iParam1)
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
	if (!func_1529(iParam0, iVar0))
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

void func_1532(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

int func_1533(int iParam0)
{
	if (func_387(iParam0))
	{
		return Global_17504.f_42[iParam0]->f_4;
	}
	return 0;
}

int func_1534(int iParam0)
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

bool func_1535(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return false;
	}
	return (Global_1393237->f_11[iParam0]->f_10 && iParam1) != 0;
}

void func_1536(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return;
	}
	Global_1393237->f_11[iParam0]->f_10 = (Global_1393237->f_11[iParam0]->f_10 || iParam1);
}

bool func_1537(int iParam0)
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

void func_1538(int iParam0, int iParam1)
{
	if (!func_387(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_1 = ((*Global_1310750)[iParam0]->f_1 - ((*Global_1310750)[iParam0]->f_1 && iParam1));
}

void func_1539(bool bParam0)
{
	_0xb6fd96420c0126a1(-1056478928, bParam0);
}

bool func_1540(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

bool func_1541(int iParam0)
{
	iParam0 = func_1280(iParam0);
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

void func_1542(int iParam0)
{
	if (is_player_dead(player_id()))
	{
		return;
	}
	iVar0 = func_1334(iParam0);
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
	if (func_1700(iParam0, 64))
	{
		func_1543(iParam0);
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
	bVar3 = func_492(42);
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
				func_1701(&((*Global_1900383)[iParam0]->f_27));
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
		func_1543(iParam0);
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
		if (func_1702(1) < 1)
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
		func_1703(&((*Global_1900383)[iParam0]->f_26), bVar6);
	}
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_1700(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = is_ped_in_writhe(iVar0);
	bVar10 = false;
	iVar11 = func_1704(iParam0);
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
	fVar15 = func_1705(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_1706(iParam0))
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
		func_1707((*Global_1900383)[iParam0]->f_26);
		func_1708((*Global_1900383)[iParam0]->f_26);
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
	if (func_1709(iVar0) && !bVar9)
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
	iVar21 = func_1702(iParam0);
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

void func_1543(int iParam0)
{
	iParam0 = func_1280(iParam0);
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

bool func_1544(int iParam0, int* iParam1)
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
		if (is_ped_in_combat(iParam0, func_1710((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_1545(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_1562((*uParam0)[iVar0]))
		{
			func_175((*uParam0)[iVar0], 14);
		}
		iVar0++;
	}
}

void func_1546(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_153(&((*uParam1)[iParam0->f_3]->f_6), 1, 1);
		if (bParam2)
		{
			func_526(iParam0, 0);
		}
	}
}

int func_1547(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(*uParam2)[iVar0]->f_8 = 6;
		func_1711(iParam0, (*uParam2)[iVar0], fParam3, 3, 0, 6, bParam4, 0);
		if (func_152((*uParam2)[iVar0]->f_6))
		{
			func_175((*uParam2)[iVar0], 11);
			return (*Global_1945938)[(*uParam2)[iVar0]->f_6]->f_3;
		}
	}
	return 0;
}

int func_1548(int iParam0)
{
	iVar0 = func_835(*iParam0);
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

int func_1549(var uParam0, int iParam1)
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

void func_1550(int* iParam0, int* iParam1)
{
	if (!func_1288(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_175(iParam1, 19);
			func_1564(iParam0, 23);
			func_1712(iParam1, 2);
		}
	}
}

bool func_1551(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (func_1713(16))
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
					func_1714(16);
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

void func_1552(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_1711(iParam0, (*uParam1)[iVar0], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			clear_bit((*uParam1)[iVar0], 14);
		}
		iVar0++;
	}
}

bool func_1553(int iParam0)
{
	return (func_1715(iParam0, 4) || func_1715(iParam0, 5));
}

int func_1554(int iParam0)
{
	return func_1715(iParam0, 7);
}

int func_1555(int iParam0)
{
	return func_1715(iParam0, 6);
}

void func_1556(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (is_bit_set(*iParam1, 14))
	{
		if (func_1562(iParam1))
		{
			clear_bit(iParam1, 14);
			func_1711(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_1557(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_1716(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_1717(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_947(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_947(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_1718(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_1558(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_1719(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_1720(iParam1, 1))
	{
		func_1721(iParam1, 1);
		return true;
	}
	return false;
}

void func_1559(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_606((*uParam0)[iVar0], bParam1, bParam2);
		iVar0++;
	}
}

bool func_1560(int* iParam0, float fParam1, bool bParam2)
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

void func_1561(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		disable_control_action(0, 1101824977, true);
		disable_control_action(0, 966551065, true);
		disable_control_action(0, 668058244, true);
		set_ped_reset_flag(Global_35, 203, true);
	}
}

bool func_1562(int* iParam0)
{
	if (!is_string_null_or_empty(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_1563(int iParam0)
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

void func_1564(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

bool func_1565(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

int func_1566(int iParam0)
{
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_799(iVar0);
}

bool func_1567()
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

int func_1568()
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
		else if ((((is_weapon_valid(iVar0) && _is_weapon_two_handed(iVar0)) && !func_1424(iVar0)) && !_is_ped_getting_into_a_mount_seat(Global_35, true)) && !(is_ped_in_any_vehicle(Global_35, false) && !_0xa24c1d341c6e0d53(1, 0, 0)))
		{
			return 3;
		}
		else if (iVar0 == -160924582)
		{
			return 1;
		}
		else if ((is_weapon_valid(iVar0) && func_1424(iVar0)) || iVar0 == 2055893578)
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

void func_1569(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	*uParam0 = floor((get_control_normal(iParam8, iParam4) * 127f));
	*uParam1 = floor((get_control_normal(iParam8, iParam5) * 127f));
	*iParam2 = floor((get_control_normal(iParam8, iParam6) * 127f));
	*iParam3 = floor((get_control_normal(iParam8, iParam7) * 127f));
}

Vector3 func_1570(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

Vector3 func_1571(vector3 vParam0, float fParam3, float fParam4)
{
	vVar0 = { get_random_float_in_range(-1f, 1f), get_random_float_in_range(-1f, 1f), 0f };
	fVar3 = (fParam4 / 2f);
	vVar0 = { func_1722(vVar0, get_random_float_in_range(0f, fParam3)) };
	vVar0.f_2 = get_random_float_in_range(-fVar3, fVar3);
	return vParam0 + vVar0;
}

Vector3 func_1572()
{
	vVar0 = { 1f, 0f, 0f };
	func_1573(&vVar0, &(vVar0.f_1), get_random_float_in_range(0f, 360f));
	return vVar0;
}

void func_1573(var uParam0, var uParam1, float fParam2)
{
	fVar0 = *uParam0;
	fVar1 = *uParam1;
	*uParam0 = ((fVar0 * cos(fParam2)) - (fVar1 * sin(fParam2)));
	*uParam1 = ((fVar0 * sin(fParam2)) + (fVar1 * cos(fParam2)));
}

float func_1574(float fParam0)
{
	return (fParam0 * 0.01745329f);
}

int func_1575(var uParam0)
{
	if (_does_scenario_point_exist(uParam0->f_23))
	{
		if (_get_ped_using_scenario_point(uParam0->f_23) != func_1723())
		{
			return 0;
		}
		else
		{
			_delete_scenario_point(uParam0->f_23);
		}
	}
	if (func_875(&(uParam0->f_4), 50, 10, 0))
	{
		if (uParam0->f_3 != 0)
		{
			uParam0->f_23 = func_236(uParam0->f_3, uParam0->f_4, func_1724(uParam0->f_10), uParam0->f_11, uParam0->f_12, 0);
		}
		_0xe69fda40aac3efc0(uParam0->f_23, 0);
		uParam0->f_15 = 1;
		return 1;
	}
	return 0;
}

bool func_1576(int iParam0)
{
	iParam0 = func_1280(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_1590(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_1577(int iParam0)
{
	iParam0 = func_1280(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_1541(iParam0))
	{
		return;
	}
	iVar0 = func_1334(iParam0);
	func_1725(iParam0);
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	iVar1 = get_entity_model(iVar0);
	if (_0xaa9f048dcf69b6dc(iVar1))
	{
		if (!func_1726(iVar1))
		{
			set_ped_model_is_suppressed(iVar1, false);
		}
	}
	delete_ped(&iVar0);
	func_1727(iParam0, 0);
	func_935(iParam0);
}

void func_1578(int iParam0)
{
	iParam0 = func_1280(iParam0);
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
	func_1728(&Var0);
	func_1729(iParam0, Var0);
	func_1730(&(Global_40.f_1095.f_1[iParam0]->f_15));
	func_1731(&(Global_40.f_1095.f_1[iParam0]->f_298));
	func_1732(&(Global_40.f_1095.f_1[iParam0]->f_356));
	func_1733(&(Global_40.f_1095.f_1[iParam0]->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_1734(iVar2, Global_40.f_1095.f_1[iParam0]->f_398[iVar2]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_1735(iVar3, Global_40.f_1095.f_1[iParam0]->f_407[iVar3]);
		iVar3++;
	}
	func_1736(&(Global_40.f_1095.f_1[iParam0]->f_420));
	func_1737(&(Global_40.f_1095.f_1[iParam0]->f_422));
	func_1738(&(Global_40.f_1095.f_1[iParam0]->f_425));
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

void func_1579(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_1580(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

int func_1581(vector3 vParam0)
{
	return func_1739(_get_map_zone_at_coords(vParam0, 10));
}

bool func_1582(int iParam0)
{
	iParam0 = func_1280(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_1541(iParam0))
	{
		return false;
	}
	iVar0 = func_1334(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

bool func_1583(int iParam0)
{
	iParam0 = func_1280(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_1541(iParam0))
	{
		return false;
	}
	iVar0 = func_1334(iParam0);
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

void func_1584(int iParam0)
{
	iParam0 = func_1280(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_1541(iParam0))
	{
		return;
	}
	iVar0 = func_1334(iParam0);
	if (is_entity_dead(iVar0))
	{
		return;
	}
	_set_entity_health(iVar0, 0, 0);
}

void func_1585(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (is_player_dead(iVar0))
	{
	}
	func_1543(iParam0);
	func_1543(iParam0);
	func_1740(iParam0, iParam1);
	func_1741(iParam0, iParam1);
	func_1742(iParam0, iParam1);
	iVar1 = func_1334(iParam0);
	if (does_entity_exist(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_1743(iVar1);
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
	iVar3 = func_1334(iParam1);
	if (does_entity_exist(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_1743(iVar3);
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
	func_1282();
}

bool func_1586()
{
	iVar0 = func_1744();
	if (does_entity_exist(iVar0))
	{
		return true;
	}
	return false;
}

void func_1587()
{
	iVar0 = func_1744();
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	delete_object(&iVar0);
	func_1745(0);
}

void func_1588(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

int func_1589(int iParam0)
{
	iParam0 = func_1280(iParam0);
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

int func_1590(int iParam0)
{
	iParam0 = func_1280(iParam0);
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

void func_1591(int iParam0)
{
	iParam0 = func_1280(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1487(&iVar0, &iVar1, &iVar2);
	func_1489(iParam0, iVar0);
	func_1490(iParam0, iVar1);
	func_1491(iParam0, iVar2);
	func_1746(iParam0, 1);
	func_1747(iParam0, 1);
}

void func_1592(int iParam0)
{
	iParam0 = func_1280(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1748(iParam0, 1);
}

void func_1593(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_1280(iParam0);
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

bool func_1594(int iParam0)
{
	iParam0 = func_1280(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return func_1700(iParam0, 1);
}

struct<2> func_1595(int iParam0)
{
	iParam0 = func_1280(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_1749(iParam0, &uVar2))
	{
	}
	if (!func_1750(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

void func_1596(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_1751(iParam0);
	func_1752(iParam0, uParam1);
	func_1753(iParam0);
	func_1754(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_1755(iParam0, iParam3, 0);
	}
	_update_ped_variation(iParam0, false, true, true, true, true);
}

void func_1597(int iParam0)
{
	iParam0 = func_1280(iParam0);
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

bool func_1598(var uParam0, var uParam1)
{
	if ((func_1351(uParam0, uParam1, 0) || func_1345(uParam0, uParam1, 0)) || func_1346(uParam0, uParam1, 0))
	{
		return true;
	}
	return false;
}

float func_1599(var uParam0, int iParam1)
{
	iVar0 = uParam0->f_89;
	bVar1 = true;
	if (func_162(uParam0, 4))
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
			if ((bVar1 || func_162(uParam0, 524288)) && uParam0->f_81 >= 0f)
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

bool func_1600(int iParam0)
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

bool func_1601(int iParam0)
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

int func_1602(int iParam0)
{
	iVar0 = func_601(iParam0);
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

bool func_1603(int iParam0)
{
	if (iParam0 != -1)
	{
		return true;
	}
	return false;
}

bool func_1604(int iParam0)
{
	if (iParam0 != 0)
	{
		return true;
	}
	return false;
}

bool func_1605(int iParam0, int iParam1)
{
	if (!func_1603(iParam0))
	{
		return false;
	}
	func_1756(iParam1, &iVar0, &iVar1);
	return is_bit_set(Global_1935183->f_73[iParam0][iVar0], iVar1);
}

void func_1606(int iParam0, var uParam1)
{
	if (!func_1603(iParam0))
	{
		return;
	}
	if (*uParam1 == -1600776215)
	{
		return;
	}
	func_1757(iParam0, *uParam1, 0);
	func_1758(uParam1);
	Global_1935183->f_24 = 1;
}

bool func_1607(var uParam0)
{
	if (func_1759(&(uParam0->f_29), 62))
	{
		switch (func_1760())
		{
			case 1:
				if (!func_1759(&(uParam0->f_29), 6))
				{
					return false;
				}
				break;
			case 2:
				if (!func_1759(&(uParam0->f_29), 8))
				{
					return false;
				}
				break;
			case 4:
				if (!func_1759(&(uParam0->f_29), 16))
				{
					return false;
				}
				break;
			case 8:
				if (!func_1759(&(uParam0->f_29), 32))
				{
					if (func_1759(&(uParam0->f_29), 2))
					{
						if (func_807(func_260()) < 5)
						{
							return false;
						}
					}
					else
					{
						return false;
					}
				}
				break;
		}
	}
	return true;
}

float func_1608(int iParam0)
{
	iVar4 = func_1387(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = &Global_40.f_11095.f_11[iVar4];
			iVar5 = func_1609(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_1761(iVar6) - func_1761(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1f;
}

int func_1609(float fParam0)
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

int func_1610(int iParam0)
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

int func_1611(int iParam0)
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

int func_1612(float fParam0, float fParam1)
{
	iVar0 = func_1609(fParam0);
	fVar1 = to_float(func_1761(iVar0));
	fVar2 = to_float(func_1761(iVar0 + 1));
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

int func_1613(int iParam0)
{
	if (func_1762(iParam0, &iVar0))
	{
		return func_1761(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_1763())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_1763())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_1763())
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

int func_1614(int iParam0)
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

void func_1615(int iParam0, int iParam1, int iParam2)
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
	iVar3 = (iVar3 + func_1764(iParam0));
	sVar4 = func_1766(func_1765(iVar3, iParam2));
	sVar6 = func_1767(iParam0);
	if (!is_string_null_or_empty(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = _create_var_string(10, sVar0, func_1768(iParam0));
	iVar8 = func_1769(iParam0);
	iVar9 = get_hash_key(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = iVar8;
		Var10.f_4 = 1;
		Var10.f_5 = func_1770(iParam0);
		_uilog_post_notification(&Var10);
	}
	func_253(sVar7, sVar1, iVar8, iVar9, -479097442, "INPUT_FEED_INTERACT_GENERIC", func_1771(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_1616(int iParam0, int iParam1)
{
	Global_1347477->f_9[iParam0] = (get_game_timer() + iParam1);
}

int func_1617(int iParam0)
{
	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

bool func_1618(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_1619(int iParam0)
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

int func_1620(int iParam0)
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

int func_1621(int iParam0)
{
	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_1772(&iVar0, 0, iVar95, &Var1) && !func_1772(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (is_model_a_ped(Var1))
		{
			func_1773(iVar0, &Var1);
			if (func_412(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

void func_1622()
{
	if (!_0x7c7e4ab748ea3b07())
	{
		return;
	}
	iVar0 = 29;
	func_1329(Global_35, &iVar0);
	Var30 = { func_1223(0) };
	_0xe36d4a38d28d9cfb(0);
	_0xc04f47d488ef9eba(5, 1, &Var30, 0);
	_0x5d6182f3bce1333b(5, -142743235);
	func_1774(0);
	func_1775(7);
	func_1776(-1623728698, 1, 1, 0);
	if (func_791() == 1160113249)
	{
		func_1776(-763730846, 1, 1, 1);
		func_1776(-361635024, 1, 1, 1);
	}
	func_514(Global_35, &iVar0);
}

int func_1623(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = func_1089(0);
	}
	if (!_0x112bca290d2eb53c(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_1230(&uVar6, iVar0);
	func_1231(&uVar6, iVar1);
	func_1232(&uVar6, iVar2);
	func_1233(&uVar6, iVar3);
	func_1234(&uVar6, iVar4);
	func_1235(&uVar6, iVar5);
	return uVar6;
}

void func_1624(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_270(1356759001) };
	stat_id_set_int(&Var0, iParam0, true);
}

void func_1625(var uParam0, int iParam1)
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
			if ((func_1777(uParam0->f_2[iVar0], 2) || &uParam0->f_2[iVar0] == iParam1) || &uParam0->f_2[iVar0] == 39)
			{
				*uParam0->f_2[iVar0] = { Var2 };
			}
			else
			{
				if (func_1777(uParam0->f_2[iVar0], 1))
				{
					func_1778(uParam0->f_2[iVar0], 2, 6);
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

void func_1626(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_1779(uParam0, 1))
	{
		func_1780(uParam0, 1);
	}
	uParam0->f_2[*uParam0]->f_1 = iParam2;
	uParam0->f_2[*uParam0] = iParam1;
	*uParam0++;
}

int func_1627(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_791();
	}
	iVar0 = 0;
	if (iParam0 == 24043185)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_1628(int iParam0, int iParam1, int iParam2, bool bParam3)
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

int func_1629(var uParam0)
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

void func_1630(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*Global_1946804->f_1497.f_1[iParam0] = { *Global_1946804->f_1378.f_1[iParam0] };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_139() == -1)
	{
		func_795(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_26796.f_776);
	}
	else
	{
		func_1781(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

bool func_1631(int iParam0, int iParam1)
{
	if (func_139() == -1)
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

void func_1632(int iParam0, bool bParam1, int iParam2)
{
	func_1654(&(Global_1946804->f_1378), iParam0);
	func_1655(2, iParam0, 6);
	if (bParam1)
	{
		func_1213(0, 1);
	}
}

float func_1633(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

int func_1634(float fParam0)
{
	return round(((fParam0 / 100f) * to_float(10)));
}

char* func_1635(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_1193(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_1193(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

int func_1636()
{
	return Global_1946804->f_1497;
}

char* func_1637(int iParam0)
{
	iVar0 = func_1469(iParam0);
	if (iVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_1410(iVar0);
}

int func_1638(int iParam0)
{
	if (func_1782(iParam0))
	{
		iVar0 = 0;
	}
	else if (func_1783(iParam0))
	{
		iVar0 = 1;
	}
	else if (func_1784(iParam0))
	{
		iVar0 = 2;
	}
	else if (func_1785(iParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

bool func_1639(int iParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_317(func_1786(iVar0, iParam0), 1, 0))
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

bool func_1640(int iParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_317(func_1787(iVar0, iParam0), 1, 0))
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

bool func_1641(int iParam0)
{
	return (Global_40.f_12003 && iParam0) != 0;
}

void func_1642()
{
	if (func_139() != -1)
	{
		return;
	}
	func_763(1654063339, 1, 752097756);
	iVar0 = func_1390(1);
	func_1615(1, iVar0, 0);
}

void func_1643(int iParam0)
{
	Global_40.f_12003 = (Global_40.f_12003 || iParam0);
}

void func_1644()
{
	if (func_139() != -1)
	{
		return;
	}
	func_763(1623931083, 1, 752097756);
	iVar0 = func_1390(2);
	func_1615(2, iVar0, 0);
}

void func_1645()
{
	if (func_139() != -1)
	{
		return;
	}
	func_763(-1845241476, 1, 752097756);
	iVar0 = func_1390(0);
	func_1615(0, iVar0, 0);
}

bool func_1646(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_1647(int iParam0, var uParam1)
{
	iVar8 = 0;
	if (!func_1788(iParam0, func_791()))
	{
		return 0;
	}
	Var1 = func_1215(func_791());
	Var1.f_1 = iParam0;
	_0x91ded5dd64bb2691(&Var1);
	if (!_0xed4413cee1bf142c(&Var1))
	{
		return 0;
	}
	while (_0xed4413cee1bf142c(&Var1))
	{
		if (!_0x44b3a36933ac009c(&uVar0, &Var1, 1373051002))
		{
		}
		else
		{
			(*uParam1)[iVar8] = uVar0;
			iVar8++;
		}
	}
	return iVar8;
}

int func_1648(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	Var5.f_9 = -1591664384;
	iVar19 = func_1215(func_791());
	Var20 = { func_1384(0, -1591664384, -1591664384, -1591664384, -999503751, 0) };
	if (!func_1386(&Var20, &iVar0, &iVar1, bParam3))
	{
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (!func_1171(&Var5, iVar2, iVar0, iVar1))
		{
		}
		else if (iParam0 == Var5.f_4)
		{
		}
		else
		{
			iVar4 = func_1179(Var5.f_4);
			if (iVar4 >= 0 && iVar4 <= 5)
			{
			}
			else
			{
				iVar3 = (*iParam2 - 1);
				while (iVar3 >= 0)
				{
					func_1511(&(Global_1946804->f_964), iVar19, Var5.f_4, 1373051002, 1, uParam1[iVar3]);
					_0x91ded5dd64bb2691(&(Global_1946804->f_964));
					if (!_0xed4413cee1bf142c(&(Global_1946804->f_964)))
					{
					}
					else
					{
						*iParam2 = (*iParam2 - 1);
						(*uParam1)[iVar3] = uParam1[*iParam2];
						(*uParam1)[*iParam2] = 0;
					}
					iVar3 = (iVar3 + -1);
				}
			}
		}
		iVar2++;
	}
	func_1172(iVar0);
	return 1;
}

void func_1649(int iParam0, var uParam1)
{
	bVar1 = false;
	iVar2 = iParam0;
	if (!func_1503(iVar2, &iVar0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_26796.f_627.f_121.f_19)
	{
		if (iVar2 == &Global_26796.f_627.f_121[iVar0])
		{
			bVar1 = true;
		}
		else
		{
			iVar0++;
		}
	}
	if (!bVar1)
	{
		return;
	}
	if (Global_26796.f_627.f_121.f_19 == 1)
	{
		Global_26796.f_627.f_121.f_19 = 0;
		*uParam1 = 0;
		Global_26796.f_627.f_121[0] = 0;
		return;
	}
	Global_26796.f_627.f_121.f_19 = (Global_26796.f_627.f_121.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_26796.f_627.f_121[iVar0] = &Global_26796.f_627.f_121[Global_26796.f_627.f_121.f_19];
	Global_26796.f_627.f_121[Global_26796.f_627.f_121.f_19] = 0;
}

void func_1650(var uParam0)
{
	*uParam0 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*uParam0->f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		iVar0++;
	}
}

int func_1651(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_1789();
	}
	if (func_139() == -1)
	{
		return Global_26796.f_26[iParam0]->f_1;
	}
	return Global_36638.f_45.f_350.f_26[iParam0]->f_1;
}

void func_1652(int iParam0)
{
	if (func_139() == -1)
	{
		Global_26796.f_26[iParam0] = 0;
		Global_26796.f_26[iParam0]->f_1 = 0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			uVar1 = &Global_1946804->f_57[iVar0];
			func_795(&uVar1, iVar0, iParam0);
			iVar0++;
		}
		return;
	}
	Global_36638.f_45.f_350.f_26[iParam0] = 0;
	Global_36638.f_45.f_350.f_26[iParam0]->f_1 = 0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		uVar1 = &Global_1946804->f_57[iVar0];
		func_1781(&uVar1, iVar0, iParam0);
		iVar0++;
	}
}

bool func_1653(int iParam0)
{
	return (Global_26796.f_774 && iParam0) != 0;
}

void func_1654(var uParam0, int iParam1)
{
	if (func_139() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1]->f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_795(uParam0->f_1[iVar0], iVar0, iParam1);
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
		func_1781(uParam0->f_1[iVar0], iVar0, iParam1);
		iVar0++;
	}
}

void func_1655(int iParam0, int iParam1, int iParam2)
{
	if (func_139() == -1)
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

void func_1656(int iParam0, int iParam1)
{
	if (!func_1180(iParam0))
	{
		return;
	}
	iVar0 = (Global_40.f_7157[iParam0] && iParam1);
	Global_40.f_7157[iParam0] = (&Global_40.f_7157[iParam0] - iVar0);
}

int func_1657(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = func_1469(iParam1);
	if (iParam4 != 0)
	{
		iVar0 = iParam4;
	}
	else if (iParam1 > -1 && iParam1 <= 5)
	{
		iVar0 = func_1651(iParam1);
	}
	if ((bParam3 && func_1470(iParam1, 4096)) && Global_1946804->f_1497 == iParam4)
	{
		return 1;
	}
	Global_1905941 = iParam1;
	if ((iParam1 > 5 || iParam4 != 0) && !func_1788(iVar0, Global_1946804->f_1))
	{
		return 0;
	}
	if (bParam2)
	{
		func_1656(Global_40.f_7729, 4096);
		func_1472(&Global_1905941, 4096);
		Global_40.f_7729 = &Global_1905941;
	}
	if (decor_exist_on(iParam0, "metaped_outfit_request") || decor_exist_on(iParam0, "metaped_outfit_request_name"))
	{
		func_1532(iParam0);
	}
	func_1790();
	if (!func_1791(iParam1))
	{
		func_1793(iVar0, iParam0, func_1792(iParam1), 1, 0, 1);
	}
	func_1794(iParam0);
	return 1;
}

void func_1658(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

bool func_1659(int iParam0, int iParam1)
{
	if (!func_1795(856287005, iParam0))
	{
		return false;
	}
	Var0 = { func_1481() };
	*iParam1 = func_1796(Var0, iParam0, 0);
	if (!func_412(*iParam1, 0))
	{
		return false;
	}
	return true;
}

void func_1660(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
}

int func_1661(int iParam0)
{
	if (func_31())
	{
		switch (iParam0)
		{
			case -1346384396:
				return 1351319737;
			case -712836614:
				return 1832924306;
			case -1629133289:
				return -960265739;
			case 1302066700:
				return 1484641439;
			case 599669344:
				return -1742648548;
			case -1555511632:
				return -288915854;
		}
	}
	else if (func_144())
	{
		switch (iParam0)
		{
			case -1346384396:
				return -5120398;
			case -712836614:
				return 540384851;
			case -1629133289:
				return 859626502;
			case 1302066700:
				return -415239647;
			case 599669344:
				return 1436607742;
			case -1555511632:
				return 691935155;
		}
	}
	return 0;
}

void func_1662(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_1663(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_1664(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
}

void func_1665(var uParam0, int iParam1)
{
	uParam0->f_3 = iParam1;
}

void func_1666(var uParam0, int iParam1)
{
	uParam0->f_4 = iParam1;
}

void func_1667(var uParam0, int iParam1)
{
	uParam0->f_5 = iParam1;
}

bool func_1668(int iParam0, int iParam1)
{
	if (!func_412(iParam0, 0))
	{
		return false;
	}
	if (!func_1797(iParam0, 856287005, &iVar9, &uVar5, &uVar0, 1, 0))
	{
		return false;
	}
	Var10 = { func_1481() };
	Var14 = { func_1121(iParam0, Var10, iVar9, 0) };
	if (func_1500(Var14, iParam1))
	{
		if (func_1798(iParam0))
		{
			if (func_1659(325139909, &iVar18))
			{
				if (func_1668(iVar18, 0))
				{
				}
			}
		}
		else if (func_1799(iParam0))
		{
			if (func_1659(325139909, &iVar19))
			{
				if (func_1668(iVar19, 0))
				{
				}
			}
			if (func_1659(986998820, &iVar20))
			{
				if (func_1668(iVar20, 0))
				{
				}
			}
			iVar21 = func_1800(iParam0);
			if (func_412(iVar21, 0))
			{
				if (func_1668(iVar21, 1))
				{
				}
			}
		}
		func_1801();
		return true;
	}
	return false;
}

int func_1669()
{
	return 1342496140;
}

int func_1670()
{
	return 446670976;
}

int func_1671()
{
	return 1;
}

int func_1672()
{
	return -868094182;
}

int func_1673()
{
	return 1074477367;
}

int func_1674()
{
	return 1;
}

int func_1675()
{
	return -997197050;
}

int func_1676()
{
	return -2063289686;
}

int func_1677()
{
	return 2;
}

int func_1678()
{
	return -868094182;
}

int func_1679()
{
	return 1074477367;
}

int func_1680()
{
	return 1;
}

int func_1681()
{
	return 1235275977;
}

int func_1682()
{
	return 2030804811;
}

int func_1683()
{
	return 1;
}

int func_1684()
{
	return 1974379573;
}

int func_1685()
{
	return 2024948086;
}

int func_1686()
{
	return 1;
}

int func_1687(int iParam0)
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

int func_1688(var uParam0, int iParam1, bool bParam2)
{
	return _0x033ee4b89f3ac545(func_1089(bParam2), uParam0, iParam1);
}

bool func_1689(int iParam0, var uParam1)
{
	if (!func_1493(iParam0))
	{
		return false;
	}
	iVar0 = func_1687(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1.f_9 = -1591664384;
	Var15 = { func_1223(0) };
	if (!func_1802(Var15, iVar0, &Var1, 0, 0))
	{
		return false;
	}
	if (!func_1803(&Var1, uParam1))
	{
		return false;
	}
	return true;
}

bool func_1690(int iParam0)
{
	return func_711(iParam0) == -1784221369;
}

int func_1691(struct<4> Param0, int iParam4, bool bParam5)
{
	iVar0 = -1;
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_1228(Param0, &Var1, 1, 0))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_711(Var1.f_4);
	if (iVar15 == -1784221369)
	{
		Var16 = { func_1804(Param0, 1) };
		Var16.f_10 = iParam4;
		iVar0 = func_1805(-1230526146, &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -1037537535)
	{
		Var44 = { func_1806(Param0, 1) };
		Var44.f_10 = iParam4;
		iVar0 = func_1807(-1230526146, &Var44, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var61 = { func_1808(&Var1) };
		Var61.f_10 = iParam4;
		iVar0 = func_1809(-1230526146, &Var61, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_1692(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_1151(iVar9);
	iVar2 = func_1151(iVar10);
	iVar3 = func_1151(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_1151(iVar12);
	}
	iVar5 = func_1152(iVar9);
	iVar6 = func_1152(iVar10);
	iVar7 = func_1152(iVar11);
	if (iParam2 != 2)
	{
		iVar8 = func_1152(iVar12);
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
	if (iParam2 != 2)
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

int func_1693(int iParam0)
{
	return &(Global_1946804->f_2657.f_26.f_7[iParam0]);
}

void func_1694(int iParam0, int iParam1)
{
	uVar0 = &Global_1946804->f_2657.f_26.f_7[iParam0];
	Global_1946804->f_2657.f_26.f_7[iParam0] = &Global_1946804->f_2657.f_26.f_7[iParam1];
	Global_1946804->f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_1695(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - 1);
	func_1810(uParam0->f_1[iParam1]);
	*uParam0->f_1[iParam1] = { *uParam0->f_1[*uParam0] };
}

bool func_1696(int iParam0, int iParam1)
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

void func_1697(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_1698(int iParam0, int iParam1, var uParam2, int iParam3)
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
		Var21[iVar0] = uParam2[iVar0];
		Var21[iVar0]->f_1 = 1f;
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
							if (&Var21[iVar0] == Var19)
							{
								Var21[iVar0]->f_1 = (Var21[iVar0]->f_1 - Var19.f_1);
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
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (Var21[iVar0]->f_1 != 1f)
		{
			(*uParam2)[iVar0]->f_1 = floor((IntToFloat((*uParam2)[iVar0]->f_1) * (Var21[iVar0]->f_1 / 1f)));
		}
		iVar0++;
	}
}

int func_1699()
{
	return &Global_1899515;
}

bool func_1700(int iParam0, int iParam1)
{
	iParam0 = func_1280(iParam0);
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

void func_1701(var uParam0)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1812(func_1811(255), 109029619));
	}
	else if (func_31())
	{
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_144();
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_1702(int iParam0)
{
	iParam0 = func_1280(iParam0);
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

void func_1703(var uParam0, bool bParam1)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1812(func_1811(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_31())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_144())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (compare_strings(sVar0, "", false, -1) != 0)
		{
			set_blip_name_from_text_file(*uParam0, sVar0);
		}
	}
}

int func_1704(int iParam0)
{
	iParam0 = func_1280(iParam0);
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

float func_1705(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

float func_1706(int iParam0)
{
	iParam0 = func_1280(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_1589(iParam0);
	if (!is_model_valid(iVar0))
	{
		return -1f;
	}
	iVar1 = func_1702(iParam0);
	iVar2 = get_default_max_attribute_rank(iVar0, 7);
	fVar3 = _0xeb67d4e056c85a81(iVar1);
	fVar4 = _0x78d8c1d4eb80c588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_1702(iParam0) + 1;
	fVar6 = func_1813(iParam0);
	fVar7 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar1));
	fVar8 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_1814(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_1707(int iParam0)
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

void func_1708(int iParam0)
{
	_set_blip_flash_style(iParam0, 673950256);
	_set_blip_flash_style(iParam0, 561559387);
	_set_blip_flash_style(iParam0, -201249929);
}

bool func_1709(int iParam0)
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

int func_1710(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_1711(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (func_152(iParam1->f_6))
	{
		if (bParam7 || is_bit_set(*iParam1, 11))
		{
			return;
		}
		func_153(&(iParam1->f_6), 0, 1);
	}
	if (!func_152(iParam1->f_6) && !is_bit_set(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_1562(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_1815(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_152(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_1718(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_1816(iParam1->f_6, 17, 1, 1);
				}
				if (is_bit_set(*iParam1, 1))
				{
					if (is_bit_set(*iParam1, 3))
					{
						func_1817(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_945(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (is_bit_set(*iParam1, 10))
				{
					func_1816(iParam1->f_6, 16, 1, 1);
				}
				if (!is_bit_set(*iParam1, 0) || is_bit_set(*iParam1, 13))
				{
					func_947(iParam1->f_6, 0, 1);
				}
				else
				{
					func_947(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

void func_1712(int* iParam0, int iParam1)
{
	if (!func_1044(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_175(iParam0, 14);
		}
	}
}

bool func_1713(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_1714(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_1715(int iParam0, int iParam1)
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

bool func_1716(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

bool func_1717(int iParam0, bool bParam1)
{
	if (bParam1 && !func_152(iParam0))
	{
		return false;
	}
	return !func_1279(iParam0, 4);
}

void func_1718(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam3 && !func_152(iParam0))
	{
		return;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = func_506(iParam0);
	func_1816(iParam0, 18, 0, 1);
	func_1816(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = _uiprompt_get_group_id_for_target_entity(iParam1);
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam4, iParam2);
}

bool func_1719(int iParam0, bool bParam1)
{
	if (bParam1 && !func_152(iParam0))
	{
		return false;
	}
	iVar0 = func_506(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

bool func_1720(int iParam0, bool bParam1)
{
	if (bParam1 && !func_152(iParam0))
	{
		return false;
	}
	iVar0 = func_506(iParam0);
	return _uiprompt_is_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_1721(int iParam0, bool bParam1)
{
	if (bParam1 && !func_152(iParam0))
	{
		return;
	}
	iVar0 = func_506(iParam0);
	_uiprompt_restart_modes((*Global_1945938)[iVar0]->f_3);
}

Vector3 func_1722(vector3 vParam0, float fParam3)
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

int func_1723()
{
	return -1;
}

float func_1724(float fParam0)
{
	return (fParam0 * 57.29578f);
}

void func_1725(int iParam0)
{
	iParam0 = func_1280(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_1334(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_1818(iVar6);
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

bool func_1726(int iParam0)
{
	if (!func_1819(iParam0))
	{
		return false;
	}
	if (!func_301())
	{
		return true;
	}
	return false;
}

void func_1727(int iParam0, int iParam1)
{
	iParam0 = func_1280(iParam0);
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

void func_1728(var uParam0)
{
	*uParam0 = -377364164;
	uParam0->f_1 = 357708345;
}

void func_1729(int iParam0, struct<2> Param1)
{
	iParam0 = func_1280(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_1820(iParam0, Param1))
	{
	}
	if (!func_1821(iParam0, Param1.f_1))
	{
	}
}

void func_1730(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_1822((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_1731(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 57)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_1732(var uParam0)
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

void func_1733(var uParam0)
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

void func_1734(int iParam0, var uParam1)
{
	iVar0 = 100;
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_1735(int iParam0, var uParam1)
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

void func_1736(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1f;
}

void func_1737(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -15;
}

void func_1738(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
}

int func_1739(int iParam0)
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

void func_1740(int iParam0, int iParam1)
{
	_copy_memory(&(Global_1900383->f_508), Global_40.f_1095.f_1[iParam1], 436);
	_copy_memory(Global_40.f_1095.f_1[iParam1], Global_40.f_1095.f_1[iParam0], 436);
	_copy_memory(Global_40.f_1095.f_1[iParam0], &(Global_1900383->f_508), 436);
}

void func_1741(int iParam0, int iParam1)
{
	_copy_memory(&(Global_1900383->f_463), (*Global_1900383)[iParam1], 45);
	_copy_memory((*Global_1900383)[iParam1], (*Global_1900383)[iParam0], 45);
	_copy_memory((*Global_1900383)[iParam0], &(Global_1900383->f_463), 45);
}

int func_1742(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	Var29.f_9 = -1591664384;
	if (!func_1689(iParam0, &Var0))
	{
		return 0;
	}
	bVar58 = false;
	if (!func_1689(iParam1, &Var29))
	{
		bVar58 = true;
	}
	if (bVar58)
	{
		iVar59 = func_1687(iParam1);
		if (iVar59 == 0)
		{
			return 0;
		}
		if (!func_1823(Var0, Var0.f_5, iVar59, 0, 0))
		{
			return 0;
		}
	}
	else if (!func_1824(Var0, Var29, 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_1743(int iParam0)
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
	if (func_1825(iParam0))
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
	if (func_929(iParam0))
	{
		iVar3 = func_930(iParam0);
		if (func_1826(iVar3))
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

int func_1744()
{
	return Global_1900383->f_393;
}

void func_1745(int iParam0)
{
	Global_1900383->f_393 = iParam0;
}

void func_1746(int iParam0, int iParam1)
{
	iParam0 = func_1280(iParam0);
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

void func_1747(int iParam0, int iParam1)
{
	iParam0 = func_1280(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_1589(iParam0);
	if (!is_model_valid(iVar0))
	{
		func_1487(&uVar1, &iVar0, &uVar2);
	}
	iVar3 = get_default_max_attribute_rank(iVar0, 7);
	if (iParam1 > iVar3)
	{
		return;
	}
	fVar4 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iParam1));
	Global_40.f_1095.f_1[iParam0]->f_372 = iParam1;
	Global_40.f_1095.f_1[iParam0]->f_372.f_1 = fVar4;
	func_1827(iParam1);
	iVar5 = func_1334(iParam0);
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

void func_1748(int iParam0, int iParam1)
{
	iParam0 = func_1280(iParam0);
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

bool func_1749(int iParam0, var uParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_1689(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = func_1796(Var0, 1415981582, 0);
	if (!func_412(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_1750(int iParam0, var uParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_1689(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = func_1796(Var0, -2119169513, 0);
	if (!func_412(*uParam1, 0))
	{
		return false;
	}
	return true;
}

void func_1751(int iParam0)
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

void func_1752(int iParam0, var uParam1)
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
	func_1828(iParam0, *uParam1);
	func_1828(iParam0, uParam1->f_1);
}

void func_1753(int iParam0)
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

void func_1754(int iParam0, var uParam1)
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
	func_1828(iParam0, *uParam1);
	func_1828(iParam0, uParam1->f_1);
	func_1828(iParam0, uParam1->f_2);
	func_1828(iParam0, uParam1->f_3);
	func_1828(iParam0, uParam1->f_4);
	func_1828(iParam0, uParam1->f_5);
}

int func_1755(int iParam0, int iParam1, bool bParam2)
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

int func_1756(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1829(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1757(int iParam0, int iParam1, bool bParam2)
{
	if (!func_1603(iParam0))
	{
		return;
	}
	func_1756(iParam1, &iVar0, &iVar1);
	if (bParam2)
	{
		set_bit((*Global_1935183->f_73[iParam0])[iVar0], iVar1);
	}
	else
	{
		clear_bit((*Global_1935183->f_73[iParam0])[iVar0], iVar1);
	}
}

void func_1758(var uParam0)
{
	Var0 = -1600776215;
	Var0.f_1 = 820723243;
	Var0.f_2 = 1;
	*uParam0 = { Var0 };
}

bool func_1759(var uParam0, int iParam1)
{
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 == 0)
	{
		return true;
	}
	return false;
}

int func_1760()
{
	return &Global_1899516;
}

int func_1761(int iParam0)
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

bool func_1762(int iParam0, int iParam1)
{
	return false;
}

bool func_1763()
{
	return false;
}

int func_1764(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return _0xe787f05dfc977bde(func_1089(0), -1845241476, 0);
		case 1:
			return _0xe787f05dfc977bde(func_1089(0), 1654063339, 0);
		case 2:
			return _0xe787f05dfc977bde(func_1089(0), 1623931083, 0);
	}
	return 0;
}

struct<4> func_1765(int iParam0, int iParam1)
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

char* func_1766(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

char* func_1767(int iParam0)
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

char* func_1768(int iParam0)
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

int func_1769(int iParam0)
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

int func_1770(int iParam0)
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

int func_1771(int iParam0)
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

bool func_1772(int iParam0, int iParam1, int iParam2, var uParam3)
{
	if (func_1541(iParam1) && !func_1582(iParam1))
	{
		iVar0 = func_1334(iParam1);
	}
	else
	{
		return false;
	}
	func_1822(uParam3);
	iVar5 = func_1818(iParam2);
	if (!_0x608bc6a6aacd5036(&Var1, iVar0, iVar5, 0))
	{
		return false;
	}
	*iParam0 = Var1.f_3;
	if (!does_entity_exist(*iParam0))
	{
	}
	{
	}
