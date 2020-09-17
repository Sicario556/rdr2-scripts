void __EntryFunction__()
{
	iLocal_13 = 1;
	fLocal_18 = 1f;
	fLocal_19 = 1f;
	iLocal_15 = vScriptParam_0.x;
	iLocal_16 = vScriptParam_0.y;
	uLocal_17 = vScriptParam_0.z;
	func_1();
	if (has_force_cleanup_occurred(523))
	{
		func_2();
	}
	while (!_0x9e4ef615e307fbbe() && func_3())
	{
		func_4();
		func_5();
		func_6();
		wait(0);
	}
	func_2();
}

void func_1()
{
}

void func_2()
{
	func_7();
	_0xe7282390542f570d(iLocal_15);
	if (network_is_game_in_progress())
	{
		func_8();
	}
	else
	{
		terminate_this_thread();
	}
}

bool func_3()
{
	if (iLocal_14 != 0)
	{
		if (_get_number_of_references_of_script_with_name_hash(iLocal_14) == 0)
		{
			return iLocal_13;
		}
		else
		{
			return true;
		}
	}
	return iLocal_13;
}

void func_4()
{
}

void func_5()
{
	iVar0 = 0;
	while (iVar0 < get_number_of_events(2))
	{
		switch (get_event_at_index(2, iVar0))
		{
			case -45008988:
				func_9(iVar0);
				break;
			case -456923784:
				func_10(iVar0);
				break;
			case -843555838:
				func_11(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_6()
{
	if (!does_entity_exist(Local_21))
	{
		Local_21 = player_ped_id();
	}
	if (!does_entity_exist(Local_21.f_5))
	{
		func_12(&Local_21);
		bLocal_216 = true;
		Local_21.f_6 = iLocal_16;
		Local_21.f_7 = uLocal_17;
		Local_21.f_5 = _get_entity_scenario_point_is_attached_to(iLocal_16);
		func_13();
		if (does_entity_exist(Local_21.f_5))
		{
			iLocal_210 = get_object_index_from_entity_index(Local_21.f_5);
			if (!func_14(uLocal_186, 4))
			{
				if (func_15(&Local_21))
				{
					if (!network_get_entity_is_networked(Local_21.f_5))
					{
						network_register_entity_as_networked(Local_21.f_5);
					}
				}
				else
				{
					func_16(&uLocal_186, 4);
				}
			}
			_0xb6cbd40f8ea69e8a(get_object_index_from_entity_index(Local_21.f_5));
		}
	}
	else if (!func_14(uLocal_186, 1))
	{
		if (!func_14(uLocal_186, 4))
		{
			if (network_has_control_of_entity(Local_21.f_5))
			{
				func_16(&uLocal_186, 1);
			}
			else if (!func_14(uLocal_186, 2))
			{
				network_request_control_of_entity(Local_21.f_5);
				func_16(&uLocal_186, 2);
			}
		}
		else
		{
			func_16(&uLocal_186, 2);
			func_16(&uLocal_186, 1);
		}
	}
	switch (iLocal_215)
	{
		case 0:
			if (!does_entity_exist(Local_21.f_5))
			{
			}
			else if (!func_14(uLocal_186, 1))
			{
			}
			else if (!_0xb6cbd40f8ea69e8a(get_object_index_from_entity_index(Local_21.f_5)))
			{
			}
			else
			{
				if (!_does_scenario_point_exist(Local_21.f_6))
				{
					iLocal_13 = 0;
					return;
				}
				if (_0xb219612b5568e9ec(Local_21.f_5))
				{
					iLocal_13 = 0;
					return;
				}
				func_17(&Local_21);
				func_18(&Local_21);
				bLocal_218 = func_19(&Local_21);
				if (bLocal_218)
				{
					Local_21.f_3 = !func_20(Local_21.f_5);
				}
				else
				{
					Local_21.f_3 = 1;
					func_21(0, 0f, 0f, 0f, &iLocal_210, 0, 0);
				}
				iLocal_211 = func_22(&Local_21, bLocal_218);
				func_23(Local_21.f_5);
				Local_21.f_1 = get_entity_model(Local_21.f_5);
				func_24(&Local_21);
				func_25(&uLocal_212);
				iLocal_215 = 1;
			}
			break;
		case 1:
			if (!_does_scenario_point_exist(Local_21.f_6))
			{
				iLocal_13 = 0;
				return;
			}
			if (bLocal_216)
			{
				iLocal_219 = 0;
				while (iLocal_219 < 10)
				{
					_int_to_string(iLocal_219, "%i", &uVar0);
					func_27(uLocal_187[iLocal_219], &Local_21, iLocal_219, uLocal_199[iLocal_219], &uVar0, 0, 1, 1, func_26(&uLocal_212, 2f));
					iLocal_219++;
				}
				if (does_entity_exist(Local_21.f_5))
				{
					vVar4 = { get_entity_coords(Local_21.f_5, true, false) };
					vVar7 = { get_entity_rotation(Local_21.f_5, 2) };
				}
				else
				{
					vVar4 = { _get_scenario_point_coords(iLocal_16, true) };
					vVar7 = { 0f, 0f, _get_scenario_point_heading(iLocal_16, true) };
				}
				func_28(&iLocal_198, &iLocal_211, &Local_21, vVar4, vVar7);
			}
			bLocal_217 = true;
			iLocal_219 = 0;
			while (iLocal_219 < 10)
			{
				if (&uLocal_187[iLocal_219] < 2)
				{
					bLocal_217 = false;
				}
				else
				{
					iLocal_219++;
					if (iLocal_198 != 4)
					{
						bLocal_217 = false;
					}
					if (bLocal_217)
					{
						func_25(&uLocal_212);
						iLocal_215 = 2;
					}
					Jump @878; //curOff = 691
					if (!_does_scenario_point_exist(Local_21.f_6))
					{
						iLocal_13 = 0;
						return;
					}
					if (bLocal_216)
					{
						iLocal_219 = 0;
						while (iLocal_219 < 10)
						{
							_int_to_string(iLocal_219, "%i", &uVar10);
							func_27(uLocal_187[iLocal_219], &Local_21, iLocal_219, uLocal_199[iLocal_219], &uVar10, 0, 1, 0, func_26(&uLocal_212, 2f));
							iLocal_219++;
						}
					}
					bLocal_217 = true;
					iLocal_219 = 0;
					while (iLocal_219 < 10)
					{
						if (&uLocal_187[iLocal_219] != 4)
						{
							bLocal_217 = false;
						}
						else
						{
							iLocal_219++;
							if (bLocal_217)
							{
								func_29(&uLocal_212);
								func_30(&Local_21);
								iLocal_215 = 3;
							}
							Jump @878; //curOff = 836
							if (!_does_scenario_point_exist(Local_21.f_6) || !_0x9c54041bb66bcf9e(Global_34, Local_21.f_6))
							{
								iLocal_13 = 0;
								return;
							}
						}
					}
				}
			}
			default:
				break;
	}
}

void func_7()
{
	if (does_entity_exist(Local_21.f_5))
	{
		if (_0xb219612b5568e9ec(Local_21.f_5))
		{
			func_31(Local_21.f_5);
		}
	}
}

void func_8()
{
	terminate_this_thread();
}

void func_9(int iParam0)
{
	get_event_data(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		set_event_flag_for_deletion(2, iParam0, 1);
		func_32(&iVar0);
	}
}

void func_10(int iParam0)
{
	get_event_data(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		set_event_flag_for_deletion(2, iParam0, 1);
		func_33(&iVar0);
	}
}

void func_11(int iParam0)
{
	get_event_data(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		set_event_flag_for_deletion(2, iParam0, 1);
		func_34(&iVar0);
	}
}

void func_12(int iParam0)
{
	iParam0->f_1 = 0;
	iParam0->f_7 = 0;
	iParam0->f_8 = -1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iParam0->f_99[iVar0] = -1;
		iVar0++;
	}
}

void func_13()
{
	if (!func_14(uLocal_186, 8))
	{
		if (!does_entity_exist(Local_21.f_5))
		{
			return;
		}
		if (!func_35(&(Local_21.f_5)))
		{
			func_16(&uLocal_186, 4);
		}
		func_16(&uLocal_186, 8);
	}
}

bool func_14(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_15(int iParam0)
{
	switch (_get_scenario_point_type(iParam0->f_6))
	{
		case -2081969392:
		case -1842399202:
		case -1758273751:
		case -1728671945:
		case -1693728831:
		case -1656133042:
		case -1542088648:
		case -1405108472:
		case -1145853489:
		case -391226571:
		case -283234320:
		case 12613321:
		case 202274149:
		case 452617901:
		case 551999935:
		case 718436607:
		case 720741201:
		case 773114028:
		case 843794152:
		case 861345651:
		case 877658416:
		case 1077665754:
		case 1243887494:
		case 1332095703:
		case 1569198532:
		case 1589325060:
		case 1668650375:
		case 1742208934:
		case 1799902997:
		case 1827064155:
		case 1903678225:
		case 1917664300:
		case 2042327162:
			return false;
	}
	return true;
}

void func_16(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_17(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iParam0->f_103[iVar0] = -1;
		iParam0->f_103[iVar0]->f_3 = 0;
		iParam0->f_103[iVar0]->f_1 = 0;
		iParam0->f_103[iVar0]->f_2 = 0f;
		iParam0->f_103[iVar0]->f_4 = 0;
		iParam0->f_154[iVar0] = -1;
		iVar0++;
	}
}

void func_18(int iParam0)
{
	func_36(iParam0);
	func_37(iParam0);
	func_38(iParam0);
}

int func_19(int iParam0)
{
	if (decor_exist_on(iParam0->f_5, "loot_allow_random") && decor_get_bool(iParam0->f_5, "loot_allow_random"))
	{
		return 1;
	}
	if (func_39(iParam0))
	{
		return 1;
	}
	if (_is_scenario_point_flag_set(iParam0->f_6, 25))
	{
		return 0;
	}
	if (func_40(_get_scenario_point_coords(iParam0->f_6, true)))
	{
		return 0;
	}
	return 1;
}

bool func_20(int iParam0)
{
	if ((((((((decor_exist_on(iParam0, "loot_empty") || decor_exist_on(iParam0, "loot_money")) || decor_exist_on(iParam0, "fLoot_money")) || decor_exist_on(iParam0, "loot_item_type1")) || decor_exist_on(iParam0, "loot_item_type2")) || decor_exist_on(iParam0, "loot_ammo1_type")) || decor_exist_on(iParam0, "loot_ammo2_type")) || decor_exist_on(iParam0, "loot_ammo3_type")) || decor_exist_on(iParam0, "loot_weapon"))
	{
		return false;
	}
	return true;
}

void func_21(int iParam0, vector3 vParam1, var uParam4, int iParam5, int iParam6)
{
	if (!does_entity_exist(*uParam4))
	{
		*uParam4 = func_41(iParam0, vParam1, iParam5, iParam6);
	}
	if (does_entity_exist(*uParam4))
	{
		func_42(*uParam4);
	}
}

int func_22(int iParam0, bool bParam1)
{
	if (does_entity_exist(iParam0->f_5) && decor_exist_on(iParam0->f_5, "lootable_interior"))
	{
		iVar0 = decor_get_int(iParam0->f_5, "lootable_interior");
		if (iVar0 == 0)
		{
			bParam1 = true;
		}
		else
		{
			return iVar0;
		}
	}
	if (bParam1)
	{
		switch (iParam0->f_8)
		{
			case 0:
				return func_43();
			case 1:
				return func_44();
			case 16:
				return func_45();
			case 17:
				return func_46(iParam0);
			default:
				break;
		}
	}
	return 0;
}

void func_23(int iParam0)
{
	iVar0 = _0x250ebb11e81a10be(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	if (func_14(_0x2bf1953c0c21ac88(iVar0), 1))
	{
		decor_set_bool(iParam0, "loot_empty", true);
		return;
	}
	_0x7d4411d6736cd295(iVar0, &Var1);
	if (Var1 > 0)
	{
		decor_set_int(iParam0, "loot_money", Var1);
	}
	if (Var1.f_2 > 0)
	{
		decor_set_int(iParam0, "loot_ammo1_type", Var1.f_1);
		decor_set_int(iParam0, "loot_ammo1_amt", Var1.f_2);
	}
	if (Var1.f_4 > 0)
	{
		decor_set_int(iParam0, "loot_ammo2_type", Var1.f_3);
		decor_set_int(iParam0, "loot_ammo2_amt", Var1.f_4);
	}
	if (Var1.f_6 > 0)
	{
		decor_set_int(iParam0, "loot_ammo3_type", Var1.f_5);
		decor_set_int(iParam0, "loot_ammo3_amt", Var1.f_6);
	}
	if (Var1.f_8 > 0)
	{
		decor_set_int(iParam0, "loot_item_type1", Var1.f_7);
		decor_set_int(iParam0, "loot_item_amt1", Var1.f_8);
	}
	if (Var1.f_9 != 0)
	{
		decor_set_int(iParam0, "loot_weapon", Var1.f_9);
	}
}

void func_24(int iParam0)
{
	if (iParam0->f_3 && func_47(iParam0->f_5))
	{
		return;
	}
	Var0.f_1 = 10;
	Var0.f_12 = 10;
	if (!func_48(iParam0->f_5))
	{
		_0x48e4d50f87a96aa5(*iParam0, 1, 1, iParam0->f_1, &Var0, 0);
	}
	if (Var0 <= 0 && !iParam0->f_3)
	{
		return;
	}
	if (iParam0->f_3)
	{
		func_49(iParam0, &Var0, 10);
	}
	if (iParam0->f_2 > 10)
	{
		iParam0->f_2 = 10;
	}
	iVar23 = 0;
	while (iVar23 < iParam0->f_2)
	{
		iParam0->f_26[iVar23] = &Var0.f_1[iVar23];
		if (iParam0->f_103[iVar23]->f_4 != 0)
		{
			iParam0->f_12[iVar23] = iParam0->f_103[iVar23]->f_4;
			iVar25++;
		}
		else
		{
			iVar24 = _0xe47dd64b9f02677d(&(Var0.f_1[iVar23]));
			if (iVar24 == 0 && &iParam0->f_26[iVar23] != 0)
			{
				iParam0->f_12[iVar23] = 1077976463;
			}
			else
			{
				iParam0->f_12[iVar23] = iVar24;
				iVar25++;
			}
		}
		iVar23++;
	}
	if (iVar25 > 0)
	{
		reserve_network_client_mission_objects(iVar25);
	}
}

void func_25(var uParam0)
{
	func_50(uParam0, 0f);
}

bool func_26(var uParam0, float fParam1)
{
	if (!func_51(uParam0))
	{
		return false;
	}
	if (func_52(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_27(var uParam0, int iParam1, int iParam2, var uParam3, char* sParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	switch (*uParam0)
	{
		case 0:
			if (&iParam1->f_12[iParam2] != 0)
			{
				request_model(&(iParam1->f_12[iParam2]), false);
				*uParam0 = 1;
			}
			else
			{
				*uParam0 = 4;
			}
			break;
		case 1:
			if (has_model_loaded(&(iParam1->f_12[iParam2])))
			{
				if (does_entity_exist(iParam1->f_5))
				{
					if (&iParam1->f_154[iParam2] != -1)
					{
						vVar3 = { get_world_position_of_entity_bone(iParam1->f_5, &(iParam1->f_154[iParam2])) };
						vVar0 = { _get_object_offset_from_coords(vVar3, get_entity_heading(iParam1->f_5), *iParam1->f_37[iParam2]) };
					}
					else
					{
						vVar0 = { get_offset_from_entity_in_world_coords(iParam1->f_5, *iParam1->f_37[iParam2]) };
					}
				}
				else if (_does_scenario_point_exist(iParam1->f_6))
				{
					vVar0 = { _get_object_offset_from_coords(_get_scenario_point_coords(iParam1->f_6, true), _get_scenario_point_heading(iParam1->f_6, true), *iParam1->f_37[iParam2]) };
				}
			else
			{
				}
				else
				{
					*uParam3 = create_object(&(iParam1->f_12[iParam2]), vVar0, func_35(&(iParam1->f_5)), true, false, false, bParam5);
					func_53(iParam1, uParam3, &(iParam1->f_12[iParam2]), &(iParam1->f_26[iParam2]));
					set_entity_invincible(*uParam3, true);
					_0x1461df6db886be3f(*uParam3);
					if (bParam6)
					{
						iVar6 = func_54(iParam1->f_4, &(iParam1->f_154[iParam2]), 0);
						vVar0 = { func_55(iParam1->f_4, *iParam1->f_37[iParam2], get_offset_from_entity_given_world_coords(iParam1->f_5, vVar0)) };
						attach_entity_to_entity(*uParam3, iParam1->f_5, iVar6, vVar0, *iParam1->f_68[iParam2], false, false, false, false, 2, true, false, false);
					}
					else
					{
						set_entity_rotation(*uParam3, *iParam1->f_68[iParam2], 2, true);
					}
					*uParam0 = 2;
					Jump @453; //curOff = 442
					if (bParam8)
					{
					}
					Jump @614; //curOff = 453
					if (!bParam7)
					{
						if (&iParam1->f_26[iParam2] != 0)
						{
							iVar7 = 3;
						}
						else
						{
							iVar7 = 4;
						}
						if (is_string_null_or_empty(sParam4))
						{
							*uParam0 = iVar7;
						}
						else if (!does_entity_exist(*uParam3))
						{
							*uParam0 = iVar7;
						}
						else if (!_does_scenario_point_exist(iParam1->f_6))
						{
							*uParam0 = iVar7;
						}
						else if (_0x8360c47380b6f351(iParam1->f_6, *uParam3, sParam4, 1))
						{
							*uParam0 = iVar7;
						}
						else if (bParam8)
						{
							*uParam0 = iVar7;
						}
					}
					Jump @614; //curOff = 574
					if (&iParam1->f_26[iParam2] != 0)
					{
						_0xa6a76d666a281f2d(*uParam3, &(iParam1->f_26[iParam2]));
						*uParam0 = 4;
					}
				}
			}
			default:
				break;
	}
}

void func_28(int iParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam6)
{
	switch (*iParam0)
	{
		case 0:
			if (*iParam1 != 0)
			{
				request_model(*iParam1, false);
				*iParam0 = 1;
			}
			else
			{
				*iParam0 = 4;
			}
			break;
		case 1:
			if (has_model_loaded(*iParam1))
			{
				if (*iParam1 == -180727039)
				{
					vParam3 = { _get_object_offset_from_coords(vParam3, vParam6.z, 0f, 0f, 0.08f) };
				}
				iVar0 = create_object(*iParam1, vParam3, func_35(&(iParam2->f_5)), true, false, false, false);
				if (does_entity_exist(iParam2->f_5))
				{
					iVar1 = func_54(iParam2->f_4, &(iParam2->f_154[0]), 0);
					attach_entity_to_entity(iVar0, iParam2->f_5, iVar1, 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, true, false);
				}
				else
				{
					_set_entity_coords_and_heading_no_offset(iVar0, vParam3, vParam6.z, false, true);
				}
				*iParam0 = 4;
			}
			break;
		case 4:
			break;
	}
}

void func_29(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_30(int iParam0)
{
	if (decor_exist_on(iParam0->f_5, "loot_mp_mission_only") && decor_get_bool(iParam0->f_5, "loot_mp_mission_only"))
	{
		decor_remove(iParam0->f_5, "loot_mp_mission_only");
	}
}

void func_31(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		decor_set_bool(iParam0, "chest_open", true);
	}
	if (network_is_in_session())
	{
		func_57(func_56(-1482693337), 1);
	}
	else
	{
		func_57(func_56(822398076), 1);
	}
}

void func_32(int iParam0)
{
}

void func_33(int iParam0)
{
	if (iParam0->f_1 != Local_21)
	{
		return;
	}
	if (_0xb219612b5568e9ec(Local_21.f_5))
	{
		if (!func_58(Local_21.f_5))
		{
			func_31(Local_21.f_5);
		}
	}
}

void func_34(int iParam0)
{
}

bool func_35(var uParam0)
{
	return !(decor_exist_on(*uParam0, "chest_local_only") && decor_get_bool(*uParam0, "chest_local_only"));
}

void func_36(int iParam0)
{
	switch (iParam0->f_7)
	{
		case -556299774:
			iParam0->f_8 = 0;
			func_60(iParam0, func_59(iParam0, -1));
			break;
		case -1844699338:
			iParam0->f_8 = 1;
			func_60(iParam0, func_59(iParam0, -1));
			break;
		case 934878503:
		case 1753153202:
			if (get_entity_model(iParam0->f_5) == 879616218)
			{
				iParam0->f_8 = 2;
			}
			else
			{
				iParam0->f_8 = 3;
			}
			func_60(iParam0, func_59(iParam0, -1));
			break;
		case -1520256117:
			iParam0->f_8 = 5;
			func_60(iParam0, func_59(iParam0, -1));
			break;
		case -1023377132:
		case -507789686:
			iParam0->f_8 = 6;
			func_60(iParam0, func_59(iParam0, -1));
			break;
		case -580247852:
			iParam0->f_8 = 4;
			func_60(iParam0, func_59(iParam0, -1));
			break;
		case 675799862:
			iParam0->f_8 = 9;
			func_60(iParam0, func_59(iParam0, -1));
			break;
		case -529258369:
			iParam0->f_8 = 10;
			func_60(iParam0, func_59(iParam0, -1));
			break;
		case 2050785088:
			iParam0->f_8 = 7;
			func_60(iParam0, func_59(iParam0, -1));
			break;
		case 113259694:
			iParam0->f_8 = 8;
			func_60(iParam0, func_59(iParam0, -1));
			break;
		case 1954699087:
			iParam0->f_8 = 16;
			func_60(iParam0, func_59(iParam0, 0));
			iParam0->f_4 = 1;
			break;
		case -832608606:
			iParam0->f_8 = 16;
			func_60(iParam0, func_59(iParam0, 1));
			iParam0->f_4 = 1;
			break;
		case -1198581396:
			iParam0->f_8 = 16;
			func_60(iParam0, func_59(iParam0, 2));
			iParam0->f_4 = 1;
			break;
		case -2092256791:
			iParam0->f_8 = 16;
			func_60(iParam0, func_59(iParam0, 3));
			iParam0->f_4 = 1;
			break;
		case -1350870117:
		case -643955342:
		case 425046062:
		case 2113302033:
			iParam0->f_8 = 16;
			func_60(iParam0, func_59(iParam0, 0));
			iParam0->f_4 = 1;
			break;
		case 1021152268:
			iParam0->f_8 = 17;
			func_60(iParam0, func_59(iParam0, 4));
			iParam0->f_4 = 1;
			break;
		case -658509002:
			iParam0->f_8 = 17;
			func_60(iParam0, func_59(iParam0, 5));
			iParam0->f_4 = 1;
			break;
		case -519544825:
			iParam0->f_8 = 17;
			func_60(iParam0, func_59(iParam0, 6));
			iParam0->f_4 = 1;
			break;
		case -1893910834:
			iParam0->f_8 = 17;
			func_60(iParam0, func_59(iParam0, 7));
			iParam0->f_4 = 1;
			break;
		case -1384407567:
		case -1363262734:
		case -733157857:
		case 1956439393:
			iParam0->f_8 = 17;
			func_60(iParam0, func_59(iParam0, 4));
			iParam0->f_4 = 1;
			break;
		case -619465711:
		case -380363474:
		case -308358537:
		case -235670490:
		case -69078291:
		case 434713043:
		case 949215578:
		case 1182859337:
		case 1468081052:
		case 1472197696:
		case 1884809780:
		case 1941854706:
		case 1956408893:
		case 1992236106:
			iParam0->f_8 = 13;
			func_60(iParam0, func_59(iParam0, -1));
			break;
		case -2132089563:
		case -1050797783:
		case -774297062:
		case -602690338:
		case -428719204:
		case -426093511:
		case -371405990:
		case -280896888:
		case 180206120:
		case 322611816:
		case 795742498:
		case 990258706:
		case 1532541314:
		case 1824320289:
			iParam0->f_8 = 14;
			func_60(iParam0, func_59(iParam0, -1));
			break;
		case -1980304607:
		case -1146648371:
		case -1003656747:
		case -749434233:
		case -99422178:
		case 167092195:
		case 419796913:
		case 555612790:
		case 837758692:
		case 884959174:
		case 1186922655:
		case 1609966682:
		case 1921610057:
		case 1947556039:
			iParam0->f_8 = 15;
			func_60(iParam0, func_59(iParam0, -1));
			break;
		case 1681044150:
			iParam0->f_8 = 11;
			func_60(iParam0, func_59(iParam0, -1));
			break;
		case -419231450:
			iParam0->f_8 = 12;
			func_60(iParam0, func_59(iParam0, -1));
			break;
		default:
			iParam0->f_8 = -1;
			break;
	}
}

void func_37(int iParam0)
{
	switch (iParam0->f_8)
	{
		case 0:
			iParam0->f_99[0] = 10;
			break;
		case 1:
			iParam0->f_99[0] = 10;
			break;
		case 2:
			iParam0->f_99[0] = 150;
			break;
		case 3:
			iParam0->f_99[0] = 105;
			iParam0->f_99[1] = 150;
			break;
		case 4:
			iParam0->f_99[0] = 105;
			iParam0->f_99[1] = 150;
			break;
		case 5:
			iParam0->f_99[0] = 105;
			iParam0->f_99[1] = 150;
			break;
		case 6:
			iParam0->f_99[0] = 10;
			break;
		case 7:
			iParam0->f_99[0] = 10;
			break;
		case 8:
			iParam0->f_99[0] = 10;
			break;
		case 9:
			iParam0->f_99[0] = 80;
			iParam0->f_99[1] = 105;
			iParam0->f_99[2] = 150;
			break;
		case 10:
			iParam0->f_99[0] = 10;
			break;
		case 11:
			iParam0->f_99[0] = 10;
			break;
		case 12:
			iParam0->f_99[0] = 10;
			break;
		case 13:
			iParam0->f_99[0] = 5;
			break;
		case 14:
			iParam0->f_99[0] = 5;
			break;
		case 15:
			iParam0->f_99[0] = 5;
			break;
		case 16:
			break;
		case 17:
			break;
	}
}

void func_38(int iParam0)
{
	iVar10 = 1;
	iVar11 = 1;
	iVar12 = 1;
	switch (iParam0->f_8)
	{
		case 4:
			fVar2 = 0.07f;
			fVar3 = 1.13f;
			fVar4 = 0.05f;
			fVar5 = 0.4f;
			fVar9 = 1.6f;
			break;
		case 9:
			fVar2 = 0.07f;
			fVar3 = 1.13f;
			fVar4 = 0.05f;
			fVar5 = 0.4f;
			fVar9 = 1.3f;
			break;
		case 10:
			fVar2 = 0.07f;
			fVar3 = 1.13f;
			fVar4 = 0.05f;
			fVar5 = 0.25f;
			fVar9 = 0.45f;
			break;
		case 3:
			fVar2 = 0.07f;
			fVar3 = 0.63f;
			fVar4 = 0.05f;
			fVar5 = 0.4f;
			fVar9 = 1.6f;
			break;
		case 2:
			fVar2 = 0.14f;
			fVar3 = 0.56f;
			fVar4 = 0.05f;
			fVar5 = 0.16f;
			fVar9 = 1.6f;
			break;
		case 5:
			func_61(iParam0);
			return;
		case 6:
			func_62(iParam0);
			return;
		case 16:
			func_63(iParam0);
			return;
		case 17:
			func_64(iParam0);
			return;
		case 0:
			func_65(iParam0);
			return;
		case 1:
			fVar2 = -0.55f;
			fVar3 = 0.55f;
			fVar4 = -0.2f;
			fVar5 = 0.2f;
			break;
		case 7:
			fVar2 = 0.12f;
			fVar3 = 0.21f;
			fVar4 = 0.05f;
			fVar5 = 0.25f;
			fVar9 = 0.45f;
			break;
		case 8:
			fVar2 = (-1f * 0.21f);
			fVar3 = (-1f * 0.12f);
			fVar4 = 0.05f;
			fVar5 = 0.25f;
			fVar9 = 0.45f;
			break;
		case 11:
			fVar2 = 0.12f;
			fVar3 = 0.48f;
			fVar4 = 0.05f;
			fVar5 = 0.25f;
			fVar9 = 0.45f;
			break;
		case 12:
			fVar2 = (-1f * 0.48f);
			fVar3 = (-1f * 0.12f);
			fVar4 = 0.05f;
			fVar5 = 0.25f;
			fVar9 = 0.45f;
			break;
		case 13:
			func_66(iParam0);
			return;
		case 14:
			func_67(iParam0);
			return;
		case 15:
			func_68(iParam0);
			return;
	}
	fVar7 = fVar4;
	fVar5 = fVar5;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (&iParam0->f_99[iVar0] != -1)
		{
			iVar1++;
		}
		iVar0++;
	}
	func_69(&uVar13, 10, 1);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		fVar6 = func_70(fVar6, fVar2, fVar3, 0.15f, 0.25f, &iVar11);
		if (iVar10 != iVar11)
		{
			fVar7 = func_70(fVar7, fVar4, fVar5, 0.13f, 0.13f, &iVar12);
			iVar10 = iVar11;
		}
		if (iVar1 > 0)
		{
			fVar8 = ((to_float(&(iParam0->f_99[get_random_int_in_range(0, iVar1)])) / 100f) - fVar9);
		}
		*iParam0->f_37[&uVar13[iVar0]] = { fVar6, fVar7, fVar8 };
		iVar0++;
	}
}

bool func_39(int iParam0)
{
	if (!is_entity_attached_to_any_vehicle(iParam0->f_5))
	{
		return false;
	}
	iVar0 = get_entity_attached_to(iParam0->f_5);
	if (is_this_model_a_train(get_entity_model(iVar0)))
	{
		return false;
	}
	if (!_0x53784cea0159439b(get_vehicle_index_from_entity_index(iVar0)))
	{
		return false;
	}
	iVar1 = _0xce2acd6f602803e5(get_vehicle_index_from_entity_index(iVar0));
	iVar2 = create_itemset(true);
	iVar3 = _get_entities_from_propset(iVar1, iVar2, get_entity_model(iParam0->f_5), false, false);
	if (iVar3 <= 0)
	{
		destroy_itemset(iVar2);
		return false;
	}
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		iVar5 = get_indexed_item_in_itemset(iVar4, iVar2);
		if (iParam0->f_5 == _get_entity_from_item(iVar5))
		{
			destroy_itemset(iVar2);
			return true;
		}
		iVar4++;
	}
	destroy_itemset(iVar2);
	return false;
}

bool func_40(vector3 vParam0)
{
	if (!is_collision_marked_outside(vParam0))
	{
		iVar0 = get_interior_from_collision(vParam0);
		if (is_valid_interior(iVar0))
		{
			return true;
		}
	}
	return false;
}

int func_41(int iParam0, vector3 vParam1, int iParam4, int iParam5)
{
	request_model(iParam0, false);
	if (!has_model_loaded(iParam0))
	{
		return 0;
	}
	if (!_does_scenario_point_exist(iParam4) && iParam5 != 0)
	{
		iParam4 = _find_closest_active_scenario_point_of_type(vParam1, iParam5, 1f, 0, false);
	}
	if (_does_scenario_point_exist(iParam4))
	{
		if (_0xea31f199a73801d3(iParam4))
		{
			iVar1 = _get_scenario_point_entity(iParam4, "CONTAINER");
			if (is_entity_an_object(iVar1))
			{
				iVar0 = get_object_index_from_entity_index(iVar1);
			}
		}
	}
	else
	{
		iVar0 = get_closest_object_of_type(vParam1, 0.5f, iParam0, false, false, true);
	}
	return iVar0;
}

void func_42(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		decor_set_bool(iParam0, "scripted_loot_only", true);
		_0x8c03cd6b5e0e85e8(iParam0, -1143637011);
	}
}

int func_43()
{
	return -180727039;
}

int func_44()
{
	iVar0 = get_random_int_in_range(0, 4);
	iVar1 = 0;
	switch (iVar0)
	{
		case 0:
			iVar1 = -1370447667;
			break;
		case 1:
			iVar1 = -608044113;
			break;
		case 2:
			iVar1 = -2145565593;
			break;
		case 3:
			iVar1 = 775037074;
			break;
	}
	return 0;
}

int func_45()
{
	iVar0 = 0;
	return iVar0;
}

int func_46(int iParam0)
{
	iVar0 = 0;
	return iVar0;
}

int func_47(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (decor_exist_on(iParam0, "loot_empty"))
	{
		return 1;
	}
	return 0;
}

bool func_48(int iParam0)
{
	if ((does_entity_exist(iParam0) && decor_exist_on(iParam0, "scripted_loot_only")) && decor_get_bool(iParam0, "scripted_loot_only"))
	{
		return true;
	}
	return false;
}

void func_49(int iParam0, int iParam1, int iParam2)
{
	while (!func_20(iParam0->f_5) && iVar8 < iParam2)
	{
		iVar0 = func_71(iParam0->f_5, &uVar9, &uVar1, &uVar11, &uVar12, &vVar2, &vVar5, &iVar10);
		if (func_72(iVar0, 0))
		{
			func_73(iParam0, uVar1, vVar2, vVar5, iVar0, uVar9, uVar11, uVar12, iVar10);
			iParam1->f_1[iVar8] = iVar0;
			iVar8++;
		}
	}
}

void func_50(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_74() - fParam1);
	func_75(uParam0, 1);
	func_76(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_51(var uParam0)
{
	return func_77(*uParam0, 1);
}

float func_52(var uParam0)
{
	if (!func_51(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_78(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_74() - uParam0->f_1);
}

void func_53(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (iParam2 == 0)
	{
		iParam2 = get_entity_model(*uParam1);
	}
	if (iParam2 == -1205527547 || iParam3 == -1077794372)
	{
		decor_set_bool(*uParam1, "loot_mp_mission_only", true);
	}
}

int func_54(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

Vector3 func_55(bool bParam0, vector3 vParam1, vector3 vParam4)
{
	if (bParam0)
	{
		return vParam1;
	}
	return vParam4;
}

struct<2> func_56(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

void func_57(var uParam0, int iParam1, int iParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return;
	}
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

bool func_58(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		return decor_exist_on(iParam0, "chest_open");
	}
	return false;
}

int func_59(int iParam0, int iParam1)
{
	if (!is_string_null_or_empty(func_79(iParam0, iParam1)))
	{
		iVar0 = get_entity_bone_index_by_name(iParam0->f_5, func_79(iParam0, iParam1));
		return iVar0;
	}
	return 0;
}

void func_60(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iParam0->f_154[iVar0] = iParam1;
		iVar0++;
	}
}

void func_61(int iParam0)
{
	*vVar0[0] = { 0.05f, 0.07f, 0.2f };
	*vVar0[1] = { 0.17f, 0.21f, 0.2f };
	*vVar0[2] = { 0.28f, 0.07f, 0.2f };
	*vVar0[3] = { 0.39f, 0.23f, 0.2f };
	*vVar0[4] = { 0.41f, 0.08f, 0.2f };
	*vVar0[5] = { 0.08f, 0.08f, -0.25f };
	*vVar0[6] = { 0.22f, 0.19f, -0.25f };
	*vVar0[7] = { 0.35f, 0.09f, -0.25f };
	*vVar0[8] = { 0.49f, 0.19f, -0.25f };
	*vVar0[9] = { 0.63f, 0.08f, -0.25f };
	func_69(&uVar31, 10, 1);
	iVar42 = 0;
	while (iVar42 < 9)
	{
		*iParam0->f_37[iVar42] = { *vVar0[&uVar31[iVar42]] };
		iVar42++;
	}
}

void func_62(int iParam0)
{
	*vVar0[0] = { 0.08f, 0.08f, 0.15f };
	*vVar0[1] = { 0.22f, 0.19f, 0.15f };
	*vVar0[2] = { 0.35f, 0.09f, 0.15f };
	*vVar0[3] = { 0.49f, 0.19f, 0.15f };
	*vVar0[4] = { 0.63f, 0.08f, 0.15f };
	*vVar0[5] = { 0.08f, 0.08f, -0.35f };
	*vVar0[6] = { 0.22f, 0.19f, -0.35f };
	*vVar0[7] = { 0.35f, 0.09f, -0.35f };
	*vVar0[8] = { 0.49f, 0.19f, -0.35f };
	*vVar0[9] = { 0.63f, 0.08f, -0.35f };
	func_69(&uVar31, 10, 1);
	iVar42 = 0;
	while (iVar42 < 9)
	{
		*iParam0->f_37[iVar42] = { *vVar0[&uVar31[iVar42]] };
		iVar42++;
	}
}

void func_63(int iParam0)
{
	*vVar0[0] = { 0f, 0.18f, -0.03f };
	*vVar0[1] = { -0.09f, 0.2f, -0.03f };
	*vVar0[2] = { 0f, 0.27f, -0.03f };
	*vVar0[3] = { 0.09f, 0.16f, -0.03f };
	*vVar0[4] = { 0f, 0.09f, -0.03f };
	*vVar0[5] = { -0.12f, 0.31f, -0.03f };
	*vVar0[6] = { 0.12f, 0.13f, -0.03f };
	*vVar0[7] = { 0.12f, 0.13f, -0.03f };
	*vVar0[8] = { -0.12f, 0.31f, -0.03f };
	*vVar0[9] = { -0.08f, 0.15f, -0.03f };
	iVar42 = 0;
	while (iVar42 < 9)
	{
		*iParam0->f_37[iVar42] = { *vVar0[&uVar31[iVar42]] };
		iVar42++;
	}
}

void func_64(int iParam0)
{
	*vVar0[0] = { 0.04f, 0.17f, -0.04f };
	*vVar0[1] = { -0.13f, 0.22f, -0.04f };
	*vVar0[2] = { -0.26f, 0.13f, -0.04f };
	*vVar0[3] = { -0.4f, 0.23f, -0.04f };
	*vVar0[4] = { -0.57f, 0.18f, -0.04f };
	*vVar0[5] = { -0.56f, 0.33f, -0.04f };
	*vVar0[6] = { -0.41f, 0.37f, -0.04f };
	*vVar0[7] = { -0.23f, 0.36f, -0.04f };
	*vVar0[8] = { -0.05f, 0.38f, -0.04f };
	*vVar0[9] = { 0.08f, 0.34f, -0.04f };
	func_69(&uVar31, 10, 1);
	iVar42 = 0;
	while (iVar42 < 9)
	{
		*iParam0->f_37[iVar42] = { *vVar0[&uVar31[iVar42]] };
		iVar42++;
	}
}

void func_65(int iParam0)
{
	*vVar0[0] = { -0.34f, -0.11f, 0.11f };
	*vVar0[1] = { -0.32f, -0.02f, 0.11f };
	*vVar0[2] = { -0.19f, -0.14f, 0.11f };
	*vVar0[3] = { -0.1f, -0.01f, 0.11f };
	*vVar0[4] = { -0.32f, 0.17f, 0.11f };
	*vVar0[5] = { -0.15f, 0.18f, 0.11f };
	*vVar0[6] = { 0.06f, 0.13f, 0.11f };
	*vVar0[7] = { 0.13f, 0.03f, 0.11f };
	*vVar0[8] = { 0.27f, 0.12f, 0.11f };
	*vVar0[9] = { 0.28f, -0.03f, 0.11f };
	func_69(&uVar31, 10, 1);
	iVar42 = 0;
	while (iVar42 < 10)
	{
		*iParam0->f_68[iVar42] = { 0f, 0f, 90f };
		*iParam0->f_37[iVar42] = { *vVar0[&uVar31[iVar42]] };
		iVar42++;
	}
}

void func_66(int iParam0)
{
	*vVar0[0] = { 0f, 0.07f, 0.02f };
	*vVar0[1] = { 0f, -0.07f, 0.02f };
	*vVar0[2] = { -0.16f, -0.07f, 0.02f };
	*vVar0[3] = { 0.16f, -0.07f, 0.02f };
	*vVar0[4] = { -0.16f, 0.07f, 0.02f };
	*vVar0[5] = { 0.16f, 0.07f, 0.02f };
	iParam0->f_2 = 6;
	func_69(&uVar31, iParam0->f_2, 1);
	iVar42 = 0;
	while (iVar42 < iParam0->f_2)
	{
		*iParam0->f_68[iVar42] = { 0f, 0f, 90f };
		*iParam0->f_37[iVar42] = { *vVar0[&uVar31[iVar42]] };
		iVar42++;
	}
}

void func_67(int iParam0)
{
	*vVar0[0] = { -0.11f, 0.07f, 0.02f };
	*vVar0[1] = { 0.11f, 0.07f, 0.02f };
	*vVar0[2] = { -0.11f, -0.07f, 0.02f };
	*vVar0[3] = { 0.11f, -0.07f, 0.02f };
	*vVar0[4] = { 0f, 0f, 0.02f };
	iParam0->f_2 = 5;
	func_69(&uVar31, iParam0->f_2, 1);
	iVar42 = 0;
	while (iVar42 < iParam0->f_2)
	{
		*iParam0->f_68[iVar42] = { 0f, 0f, 90f };
		*iParam0->f_37[iVar42] = { *vVar0[&uVar31[iVar42]] };
		iVar42++;
	}
}

void func_68(int iParam0)
{
	fVar42 = 0.005f;
	iVar43 = 0;
	while (iVar43 < 9)
	{
		*vVar0[iVar43] = { 0f, 0f, fVar42 };
		fVar42 = (fVar42 + 0.02f);
		*iParam0->f_68[iVar43] = { 0f, 0f, 90f };
		iVar43++;
	}
	iParam0->f_2 = 2;
	func_69(&uVar31, iParam0->f_2, 1);
	iVar43 = 0;
	while (iVar43 < iParam0->f_2)
	{
		*iParam0->f_37[iVar43] = { *vVar0[&uVar31[iVar43]] };
		iVar43++;
	}
}

void func_69(var uParam0, int iParam1, bool bParam2)
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

float func_70(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5)
{
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = func_81(func_80(), fParam3, fParam4);
	if (*iParam5)
	{
		if ((fVar0 + fParam0) > fParam2)
		{
			*iParam5 = 0;
			fVar1 = (fParam2 - absf(((fVar0 + fParam0) - fParam2)));
		}
		else
		{
			fVar1 = (fVar0 + fParam0);
		}
	}
	else if ((fParam0 - fVar0) < fParam1)
	{
		*iParam5 = 1;
		fVar1 = (fParam1 + absf(((fParam0 - fVar0) - fParam1)));
	}
	else
	{
		fVar1 = (fParam0 - fVar0);
	}
	return fVar1;
}

int func_71(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7)
{
	iVar0 = 0;
	iVar1 = 0;
	*uParam1 = 0;
	*iParam7 = -1;
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (decor_exist_on(iParam0, "loot_empty"))
	{
		return 0;
	}
	*uParam1 = 1;
	if (decor_exist_on(iParam0, "loot_money"))
	{
		*uParam1 = decor_get_int(iParam0, "loot_money");
		decor_remove(iParam0, "loot_money");
		*uParam2 = 0;
		return 2084597891;
	}
	if (decor_exist_on(iParam0, "fLoot_money"))
	{
		*uParam3 = decor_get_float(iParam0, "fLoot_money");
		decor_remove(iParam0, "fLoot_money");
		*uParam2 = 0;
		return func_82(*uParam3);
	}
	StringCopy(&cVar6, "loot_ammo", 16);
	iVar5 = 1;
	while (iVar5 <= 3)
	{
		Var8 = { cVar6 };
		Var10 = { cVar6 };
		StringIntConCat(&Var8, iVar5, 16);
		StringIntConCat(&Var10, iVar5, 16);
		StringConCat(&Var8, "_type", 16);
		StringConCat(&Var10, "_amt", 16);
		if (decor_exist_on(iParam0, &Var8))
		{
			iVar1 = decor_get_int(iParam0, &Var8);
			if (iVar1 != 0)
			{
				iVar0 = _get_ammo_type_for_weapon(iVar1);
				decor_remove(iParam0, &Var8);
				if (decor_exist_on(iParam0, &Var10))
				{
					*uParam1 = decor_get_int(iParam0, &Var10);
					decor_remove(iParam0, &Var10);
					*uParam2 = 2;
				}
				return iVar0;
			}
		}
		iVar5++;
	}
	if (decor_exist_on(iParam0, "loot_weapon"))
	{
		iVar1 = decor_get_int(iParam0, "loot_weapon");
		if (iVar1 != 0)
		{
			decor_remove(iParam0, "loot_weapon");
			*uParam2 = 3;
			return func_83(iVar1);
		}
	}
	if (decor_exist_on(iParam0, "loot_item_type1"))
	{
		if (decor_exist_on(iParam0, "loot_item_amt1"))
		{
			*uParam1 = decor_get_int(iParam0, "loot_item_amt1");
			decor_remove(iParam0, "loot_item_amt1");
		}
		if (decor_exist_on(iParam0, "loot_item_bone1"))
		{
			*iParam7 = decor_get_int(iParam0, "loot_item_bone1");
			decor_remove(iParam0, "loot_item_bone1");
		}
		if (decor_exist_on(iParam0, "loot_item_model1"))
		{
			*uParam4 = decor_get_int(iParam0, "loot_item_model1");
			decor_remove(iParam0, "loot_item_model1");
		}
		if ((decor_exist_on(iParam0, "loot_item_offset1x") && decor_exist_on(iParam0, "loot_item_offset1y")) && decor_exist_on(iParam0, "loot_item_offset1z"))
		{
			fVar2 = decor_get_float(iParam0, "loot_item_offset1x");
			fVar3 = decor_get_float(iParam0, "loot_item_offset1y");
			fVar4 = decor_get_float(iParam0, "loot_item_offset1z");
			*uParam5 = { fVar2, fVar3, fVar4 };
			decor_remove(iParam0, "loot_item_offset1x");
			decor_remove(iParam0, "loot_item_offset1y");
			decor_remove(iParam0, "loot_item_offset1z");
		}
		if ((decor_exist_on(iParam0, "loot_item_orient1x") && decor_exist_on(iParam0, "loot_item_orient1y")) && decor_exist_on(iParam0, "loot_item_orient1z"))
		{
			fVar2 = decor_get_float(iParam0, "loot_item_orient1x");
			fVar3 = decor_get_float(iParam0, "loot_item_orient1y");
			fVar4 = decor_get_float(iParam0, "loot_item_orient1z");
			*uParam6 = { fVar2, fVar3, fVar4 };
			decor_remove(iParam0, "loot_item_orient1x");
			decor_remove(iParam0, "loot_item_orient1y");
			decor_remove(iParam0, "loot_item_orient1z");
		}
		iVar12 = decor_get_int(iParam0, "loot_item_type1");
		decor_remove(iParam0, "loot_item_type1");
		*uParam2 = 1;
		return iVar12;
	}
	if (decor_exist_on(iParam0, "loot_item_type2"))
	{
		if (decor_exist_on(iParam0, "loot_item_amt2"))
		{
			*uParam1 = decor_get_int(iParam0, "loot_item_amt2");
			decor_remove(iParam0, "loot_item_amt2");
		}
		if (decor_exist_on(iParam0, "loot_item_bone2"))
		{
			*iParam7 = decor_get_int(iParam0, "loot_item_bone2");
			decor_remove(iParam0, "loot_item_bone2");
		}
		if (decor_exist_on(iParam0, "loot_item_model2"))
		{
			*uParam4 = decor_get_int(iParam0, "loot_item_model2");
			decor_remove(iParam0, "loot_item_model2");
		}
		if ((decor_exist_on(iParam0, "loot_item_offset2x") && decor_exist_on(iParam0, "loot_item_offset2y")) && decor_exist_on(iParam0, "loot_item_offset2z"))
		{
			fVar2 = decor_get_float(iParam0, "loot_item_offset2x");
			fVar3 = decor_get_float(iParam0, "loot_item_offset2y");
			fVar4 = decor_get_float(iParam0, "loot_item_offset2z");
			*uParam5 = { fVar2, fVar3, fVar4 };
			decor_remove(iParam0, "loot_item_offset2x");
			decor_remove(iParam0, "loot_item_offset2y");
			decor_remove(iParam0, "loot_item_offset2z");
		}
		if ((decor_exist_on(iParam0, "loot_item_orient2x") && decor_exist_on(iParam0, "loot_item_orient2y")) && decor_exist_on(iParam0, "loot_item_orient2z"))
		{
			fVar2 = decor_get_float(iParam0, "loot_item_orient2x");
			fVar3 = decor_get_float(iParam0, "loot_item_orient2y");
			fVar4 = decor_get_float(iParam0, "loot_item_orient2z");
			*uParam6 = { fVar2, fVar3, fVar4 };
			decor_remove(iParam0, "loot_item_orient2x");
			decor_remove(iParam0, "loot_item_orient2y");
			decor_remove(iParam0, "loot_item_orient2z");
		}
		iVar13 = decor_get_int(iParam0, "loot_item_type2");
		decor_remove(iParam0, "loot_item_type2");
		*uParam2 = 1;
		return iVar13;
	}
	return 0;
}

bool func_72(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

void func_73(int iParam0, var uParam1, vector3 vParam2, vector3 vParam5, int iParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&iParam0->f_103[iVar0] == -1)
		{
			iParam0->f_103[iVar0] = uParam1;
			iParam0->f_154[iVar0] = iParam12;
			iParam0->f_103[iVar0]->f_3 = iParam8;
			iParam0->f_103[iVar0]->f_1 = uParam9;
			iParam0->f_103[iVar0]->f_2 = uParam10;
			iParam0->f_103[iVar0]->f_4 = uParam11;
			if (func_84(iParam0->f_103[iVar0]->f_3) && func_85(iParam0->f_103[iVar0]->f_3))
			{
				func_86(iParam0->f_37[iVar0], iParam0->f_68[iVar0]);
			}
			else
			{
				if (!func_87(vParam2))
				{
					*iParam0->f_37[iVar0] = { vParam2 };
				}
				if (!func_87(vParam5))
				{
					*iParam0->f_68[iVar0] = { vParam5 };
				}
			}
		}
		else
		{
			iVar0++;
		}
	}
}

float func_74()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_75(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_76(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_77(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_78(var uParam0)
{
	return func_77(*uParam0, 2);
}

char* func_79(int iParam0, int iParam1)
{
	switch (iParam0->f_8)
	{
		case -1:
			return "";
		case 0:
			return "Root_p_CHEST_MED";
		case 1:
			return "Root_p_CHEST_LRG";
		case 2:
		case 3:
			return "p_CUPBOARDS_NARROW_TalL";
		case 4:
			return "p_CUPBOARDS_WIDE_TalL";
		case 5:
			return "p_CUPBOARDS_NARROW_MedL";
		case 6:
			return "p_CUPBOARDS_NARROW_LowL";
		case 7:
			return "p_CUPBOARDS_NARROW_LowL";
		case 8:
			return "p_CUPBOARDS_NARROW_LowR";
		case 9:
			return "p_CUPBOARDS_WIDE_MedL";
		case 10:
			return "p_CUPBOARDS_WIDE_LowL";
		case 11:
			return "p_CUPBOARDS_WIDE_LowL";
		case 12:
			return "p_CUPBOARDS_WIDE_LowR";
		case 13:
			return "Root_p_LOCKBOX_LRG";
		case 14:
			return "Root_p_LOCKBOX_MED";
		case 15:
			return "Root_p_LOCKBOX_SML";
		case 16:
			return func_88(iParam1);
		case 17:
			return func_88(iParam1);
	}
	return "";
}

bool func_80()
{
	if (is_bit_set(get_random_int_in_range(0, 65536), 0))
	{
		return true;
	}
	return false;
}

float func_81(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_82(var uParam0)
{
	return 0;
}

int func_83(int iParam0)
{
	if (is_weapon_valid(iParam0))
	{
		return iParam0;
	}
	return 0;
}

bool func_84(int iParam0)
{
	return func_89(iParam0) == -427144552;
}

bool func_85(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

void func_86(var uParam0, var uParam1)
{
	*uParam0 = { -0.12f, 0.12f, 0.12f };
	*uParam1 = { 90f, 0f, 115f };
}

bool func_87(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

char* func_88(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "p_DRAWER_SGL_Drawer1";
		case 1:
			return "p_DRAWER_SGL_Drawer2";
		case 2:
			return "p_DRAWER_SGL_Drawer3";
		case 3:
			return "p_DRAWER_SGL_Drawer4";
		case 4:
			return "p_DRAWER_DBL_Drawer1_NUB";
		case 5:
			return "p_DRAWER_DBL_Drawer2_NUB";
		case 6:
			return "p_DRAWER_DBL_Drawer3_NUB";
		case 7:
			return "p_DRAWER_DBL_Drawer4_NUB";
	}
	return "";
}

int func_89(int iParam0)
{
	if (!func_72(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

