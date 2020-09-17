void __EntryFunction__()
{
	iLocal_13 = 1;
	fLocal_18 = 1f;
	fLocal_19 = 1f;
	iLocal_22 = -1;
	iLocal_15 = vScriptParam_0.x;
	uLocal_16 = vScriptParam_0.y;
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
	if (is_ped_injured(Global_34))
	{
		iLocal_13 = 0;
		return;
	}
	if (!bLocal_196 && is_ped_active_in_scenario(Global_34, 1))
	{
		bLocal_196 = true;
	}
	sLocal_203 = "scenario@MECH@PLAYER_OPEN_MISCCHEST@EXIT";
	if (!does_entity_exist(Local_23.f_5))
	{
		bLocal_193 = true;
		Local_23.f_6 = uLocal_16;
		Local_23.f_5 = func_12();
	}
	switch (iLocal_204)
	{
		case 0:
			if (does_entity_exist(Local_23.f_5))
			{
				func_13(&Local_23);
				func_14(Local_23.f_5);
				Local_23.f_3 = !func_15(Local_23.f_5);
				Local_23.f_1 = get_entity_model(Local_23.f_5);
				vLocal_188.f_2 = 0.122f;
				vLocal_188.f_1 = 0.736f;
				func_16(&Local_23);
				Local_23.f_12[0] = func_17();
				if (&Local_23.f_12[0] == 0)
				{
					iLocal_204 = 3;
				}
				else
				{
					Local_23.f_12[1] = func_18();
					func_19();
					iLocal_204 = 1;
				}
			}
			break;
		case 1:
			if (&Local_23.f_12[1] == 0)
			{
				if (iLocal_22 < 0)
				{
					iLocal_22 = _create_anim_scene(sLocal_203, 0, 0, false, true);
					load_anim_scene(iLocal_22);
				}
			}
			if (bLocal_193)
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_21(uLocal_197[iVar0], &Local_23, iVar0, uLocal_200[iVar0], func_20(iVar0), 0, 1, 1, 0);
					iVar0++;
				}
			}
			if (&uLocal_197[0] >= 2 && &uLocal_197[1] >= 2)
			{
				iLocal_204 = 2;
			}
			break;
		case 2:
			if (bLocal_193)
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_21(uLocal_197[iVar0], &Local_23, iVar0, uLocal_200[iVar0], func_20(iVar0), 0, 1, 0, 0);
					iVar0++;
				}
			}
			if (&uLocal_197[0] == 4 && &uLocal_197[1] == 4)
			{
				iLocal_204 = 3;
			}
			break;
		case 3:
			break;
	}
	if (!bLocal_194 && _does_anim_scene_exist(vLocal_188.x))
	{
		func_22(&vLocal_188, &bLocal_195, &bLocal_194);
	}
	if (has_anim_event_fired(Global_34, -1755159785))
	{
		if (!bLocal_195)
		{
			vLocal_188.x = _0x2c497bdef897c6df(Global_34);
			bLocal_195 = true;
		}
	}
	if (has_anim_event_fired(Global_34, 2072536589))
	{
		if (iLocal_21 == 0)
		{
			if (does_entity_exist(&(uLocal_200[0])))
			{
				_0xc886cd666add42e1(Global_34, &(Local_23.f_26[0]));
			}
		}
		else if (iLocal_21 == 1)
		{
			if (does_entity_exist(&(uLocal_200[1])))
			{
				_0xc886cd666add42e1(Global_34, &(Local_23.f_26[1]));
			}
		}
	}
	if (has_anim_event_fired(Global_34, -1898385492))
	{
		iLocal_21++;
		if (iLocal_21 == 1)
		{
			if (does_entity_exist(&(uLocal_200[0])))
			{
				func_23(&(uLocal_200[0]), 0, 1);
				delete_object(uLocal_200[0]);
				func_24(&(Local_23.f_23), 2, 0, 752097756);
			}
		}
		else if (iLocal_21 == 2)
		{
			if (does_entity_exist(&(uLocal_200[1])))
			{
				func_23(&(uLocal_200[1]), 0, 1);
				delete_object(uLocal_200[1]);
				func_24(&(Local_23.f_26), 10, 0, 752097756);
			}
			bLocal_194 = true;
		}
	}
	if (has_anim_event_fired(Global_34, 266921527))
	{
		if (&Local_23.f_12[1] == 0)
		{
			_0xd999e379265a4501(Global_34, sLocal_203, 0);
			clear_ped_tasks(Global_34, 1, 0);
			bLocal_194 = true;
		}
	}
	if (!is_ped_using_any_scenario(Global_34))
	{
		clear_ped_tasks(Global_34, 1, 0);
		iLocal_13 = 0;
		bLocal_194 = true;
	}
}

void func_7()
{
	if (does_entity_exist(Local_23.f_5))
	{
		if (bLocal_196)
		{
			if (!func_25(Local_23.f_5))
			{
				func_26(Local_23.f_5);
			}
		}
		else
		{
			func_27(&Local_23);
		}
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_28(uLocal_200[iVar0], bLocal_196);
		iVar0++;
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
		func_29(&iVar0);
	}
}

void func_10(int iParam0)
{
	get_event_data(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		set_event_flag_for_deletion(2, iParam0, 1);
		func_30(&iVar0);
	}
}

void func_11(int iParam0)
{
	get_event_data(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		set_event_flag_for_deletion(2, iParam0, 1);
		func_31(&iVar0);
	}
}

int func_12()
{
	iVar0 = 0;
	if (!is_ped_injured(Global_34))
	{
		iVar1 = _get_scenario_point_ped_is_using(Global_34, false);
		if (_does_scenario_point_exist(iVar1))
		{
			if (!does_entity_exist(iVar0))
			{
				iVar0 = _get_entity_scenario_point_is_attached_to(iVar1);
			}
			if (!does_entity_exist(iVar0))
			{
				iVar0 = _get_scenario_point_entity(iVar1, "PROP");
			}
			if (!does_entity_exist(iVar0))
			{
				iVar0 = _0x4d0d2e3d8bc000eb(Global_34, "PROP", 1);
			}
		}
	}
	return iVar0;
}

void func_13(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		uParam0->f_103[iVar0] = -1;
		uParam0->f_103[iVar0]->f_3 = 0;
		uParam0->f_103[iVar0]->f_1 = 0;
		uParam0->f_103[iVar0]->f_2 = 0f;
		uParam0->f_103[iVar0]->f_4 = 0;
		uParam0->f_154[iVar0] = -1;
		iVar0++;
	}
}

void func_14(int iParam0)
{
	iVar0 = _0x250ebb11e81a10be(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	if (func_32(_0x2bf1953c0c21ac88(iVar0), 1))
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

bool func_15(int iParam0)
{
	if ((((((((decor_exist_on(iParam0, "loot_empty") || decor_exist_on(iParam0, "loot_money")) || decor_exist_on(iParam0, "fLoot_money")) || decor_exist_on(iParam0, "loot_item_type1")) || decor_exist_on(iParam0, "loot_item_type2")) || decor_exist_on(iParam0, "loot_ammo1_type")) || decor_exist_on(iParam0, "loot_ammo2_type")) || decor_exist_on(iParam0, "loot_ammo3_type")) || decor_exist_on(iParam0, "loot_weapon"))
	{
		return false;
	}
	return true;
}

void func_16(var uParam0)
{
	if (uParam0->f_3 && func_33(uParam0->f_5))
	{
		return;
	}
	Var0.f_1 = 10;
	Var0.f_12 = 10;
	if (!func_34(uParam0->f_5))
	{
		_0x48e4d50f87a96aa5(*uParam0, 1, 1, uParam0->f_1, &Var0, 0);
	}
	if (Var0 <= 0 && !uParam0->f_3)
	{
		return;
	}
	if (uParam0->f_3)
	{
		func_35(uParam0, &Var0, 10);
	}
	if (uParam0->f_2 > 10)
	{
		uParam0->f_2 = 10;
	}
	iVar23 = 0;
	while (iVar23 < uParam0->f_2)
	{
		uParam0->f_26[iVar23] = &Var0.f_1[iVar23];
		if (uParam0->f_103[iVar23]->f_4 != 0)
		{
			uParam0->f_12[iVar23] = uParam0->f_103[iVar23]->f_4;
			iVar25++;
		}
		else
		{
			iVar24 = _0xe47dd64b9f02677d(&(Var0.f_1[iVar23]));
			if (iVar24 == 0 && &uParam0->f_26[iVar23] != 0)
			{
				uParam0->f_12[iVar23] = 1077976463;
			}
			else
			{
				uParam0->f_12[iVar23] = iVar24;
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

int func_17()
{
	if (func_36(&(Local_23.f_6)))
	{
		iVar0 = func_37(Local_23, Local_23.f_26[0]);
	}
	else
	{
		iVar0 = func_38(&Local_23, Local_23.f_26[0], 0);
	}
	return iVar0;
}

int func_18()
{
	iVar0 = func_38(&Local_23, Local_23.f_26[1], 1);
	return iVar0;
}

void func_19()
{
	*Local_23.f_37[0] = { -0.0131f, 0.052f, 0.0977f };
	*Local_23.f_68[0] = { 0f, 0f, -12.264f };
	*Local_23.f_37[1] = { 0.1751f, -0.0163f, 0.1059f };
	*Local_23.f_68[1] = { 0f, 0f, -52.5738f };
}

char* func_20(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "OBJECT1";
		case 1:
			return "OBJECT2";
		default:
			break;
	}
	return "";
}

void func_21(var uParam0, var uParam1, int iParam2, var uParam3, char* sParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	switch (*uParam0)
	{
		case 0:
			if (&uParam1->f_12[iParam2] != 0)
			{
				request_model(&(uParam1->f_12[iParam2]), false);
				*uParam0 = 1;
			}
			else
			{
				*uParam0 = 4;
			}
			break;
		case 1:
			if (has_model_loaded(&(uParam1->f_12[iParam2])))
			{
				if (does_entity_exist(uParam1->f_5))
				{
					if (&uParam1->f_154[iParam2] != -1)
					{
						vVar3 = { get_world_position_of_entity_bone(uParam1->f_5, &(uParam1->f_154[iParam2])) };
						vVar0 = { _get_object_offset_from_coords(vVar3, get_entity_heading(uParam1->f_5), *uParam1->f_37[iParam2]) };
					}
					else
					{
						vVar0 = { get_offset_from_entity_in_world_coords(uParam1->f_5, *uParam1->f_37[iParam2]) };
					}
				}
				else if (_does_scenario_point_exist(uParam1->f_6))
				{
					vVar0 = { _get_object_offset_from_coords(_get_scenario_point_coords(uParam1->f_6, true), _get_scenario_point_heading(uParam1->f_6, true), *uParam1->f_37[iParam2]) };
				}
			else
			{
				}
				else
				{
					*uParam3 = create_object(&(uParam1->f_12[iParam2]), vVar0, func_39(&(uParam1->f_5)), true, false, false, bParam5);
					func_40(uParam1, uParam3, &(uParam1->f_12[iParam2]), &(uParam1->f_26[iParam2]));
					set_entity_invincible(*uParam3, true);
					_0x1461df6db886be3f(*uParam3);
					if (bParam6)
					{
						iVar6 = func_41(uParam1->f_4, &(uParam1->f_154[iParam2]), 0);
						vVar0 = { func_42(uParam1->f_4, *uParam1->f_37[iParam2], get_offset_from_entity_given_world_coords(uParam1->f_5, vVar0)) };
						attach_entity_to_entity(*uParam3, uParam1->f_5, iVar6, vVar0, *uParam1->f_68[iParam2], false, false, false, false, 2, true, false, false);
					}
					else
					{
						set_entity_rotation(*uParam3, *uParam1->f_68[iParam2], 2, true);
					}
					*uParam0 = 2;
					Jump @453; //curOff = 442
					if (bParam8)
					{
					}
					Jump @614; //curOff = 453
					if (!bParam7)
					{
						if (&uParam1->f_26[iParam2] != 0)
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
						else if (!_does_scenario_point_exist(uParam1->f_6))
						{
							*uParam0 = iVar7;
						}
						else if (_0x8360c47380b6f351(uParam1->f_6, *uParam3, sParam4, 1))
						{
							*uParam0 = iVar7;
						}
						else if (bParam8)
						{
							*uParam0 = iVar7;
						}
					}
					Jump @614; //curOff = 574
					if (&uParam1->f_26[iParam2] != 0)
					{
						_0xa6a76d666a281f2d(*uParam3, &(uParam1->f_26[iParam2]));
						*uParam0 = 4;
					}
				}
			}
			default:
				break;
	}
}

void func_22(int iParam0, bool bParam1, bool bParam2)
{
	if (!_does_anim_scene_exist(*iParam0))
	{
		return;
	}
	if (*bParam1)
	{
		fVar0 = _get_anim_scene_progress(*iParam0);
		fVar1 = ((fVar0 - iParam0->f_2) / (iParam0->f_1 - iParam0->f_2));
		if (fVar1 >= 0f)
		{
			iParam0->f_3 = fVar1;
		}
		if (iParam0->f_3 >= 1f && !*bParam2)
		{
			*bParam2 = 1;
		}
		if (is_control_pressed(0, -719620017))
		{
			iParam0->f_4 = iParam0->f_3;
		}
	}
}

void func_23(int iParam0, bool bParam1, bool bParam2)
{
	if (!is_entity_dead(iParam0))
	{
		if (is_entity_attached(iParam0))
		{
			detach_entity(iParam0, bParam1, bParam2);
		}
	}
}

void func_24(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (func_43(uParam0[iVar0], 0))
		{
			func_44(uParam0[iVar0], 1, bParam2, 0, 0, iParam3, 0, 0, 0, 0);
		}
		iVar0++;
	}
}

bool func_25(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		return decor_exist_on(iParam0, "chest_open");
	}
	return false;
}

void func_26(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		decor_set_bool(iParam0, "chest_open", true);
	}
	if (network_is_in_session())
	{
		func_46(func_45(-1482693337), 1);
	}
	else
	{
		func_46(func_45(822398076), 1);
	}
}

void func_27(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar1 = get_object_index_from_entity_index(uParam0->f_5);
		switch (&uParam0->f_103[iVar0])
		{
			case 0:
				func_47(0, 0f, 0f, 0f, &iVar1, uParam0->f_103[iVar0]->f_2, 0, 0);
				break;
			case 2:
				func_49(0, 0f, 0f, 0f, &iVar1, _get_weapon_type_from_ammo_type(func_48(uParam0->f_103[iVar0]->f_3, 1)), 0, 0, 0);
				break;
			case 3:
				func_51(0, 0f, 0f, 0f, &iVar1, func_50(uParam0->f_103[iVar0]->f_3, 1), 0, 0);
				break;
			case 1:
				func_52(0, 0f, 0f, 0f, *uParam0->f_37[iVar0], *uParam0->f_68[iVar0], &iVar1, uParam0->f_103[iVar0]->f_3, 1, 0, 0, uParam0->f_103[iVar0]->f_4, &(uParam0->f_154[iVar0]));
				break;
			case -1:
				Jump @239; //curOff = 224
				iVar0++;
			}
		}

void func_28(int* iParam0, bool bParam1)
{
	if (does_entity_exist(*iParam0))
	{
		if (!bParam1)
		{
			delete_object(iParam0);
		}
	}
}

void func_29(int iParam0)
{
}

void func_30(int iParam0)
{
}

void func_31(int iParam0)
{
}

bool func_32(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_33(int iParam0)
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

bool func_34(int iParam0)
{
	if ((does_entity_exist(iParam0) && decor_exist_on(iParam0, "scripted_loot_only")) && decor_get_bool(iParam0, "scripted_loot_only"))
	{
		return true;
	}
	return false;
}

void func_35(var uParam0, int iParam1, int iParam2)
{
	while (!func_15(uParam0->f_5) && iVar8 < iParam2)
	{
		iVar0 = func_53(uParam0->f_5, &uVar9, &uVar1, &uVar11, &uVar12, &vVar2, &vVar5, &iVar10);
		if (func_43(iVar0, 0))
		{
			func_54(uParam0, uVar1, vVar2, vVar5, iVar0, uVar9, uVar11, uVar12, iVar10);
			iParam1->f_1[iVar8] = iVar0;
			iVar8++;
		}
	}
}

bool func_36(var uParam0)
{
	return _0x6718f40313a2b5a6(*uParam0) >= 0.99f;
}

int func_37(struct<6> Param0, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165)
{
	switch (func_55())
	{
		case 10:
			if (func_57(Param0.f_5, func_56(1), 1) < 15f)
			{
				iVar0 = 1077976463;
				*uParam165 = 230530039;
			}
			break;
		case -1:
			if (func_57(Param0.f_5, func_56(2), 1) < 15f)
			{
				iVar0 = 1077976463;
				*uParam165 = 230530039;
			}
			break;
	}
	return iVar0;
}

int func_38(var uParam0, var uParam1, int iParam2)
{
	if (iParam2 < 0 || iParam2 >= uParam0->f_26)
	{
		*uParam1 = 0;
		return 1077976463;
	}
	*uParam1 = &uParam0->f_26[iParam2];
	return &(uParam0->f_12[iParam2]);
}

bool func_39(var uParam0)
{
	return !(decor_exist_on(*uParam0, "chest_local_only") && decor_get_bool(*uParam0, "chest_local_only"));
}

void func_40(var uParam0, var uParam1, int iParam2, int iParam3)
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

int func_41(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

Vector3 func_42(bool bParam0, vector3 vParam1, vector3 vParam4)
{
	if (bParam0)
	{
		return vParam1;
	}
	return vParam4;
}

bool func_43(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_44(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_43(iParam0, 0))
	{
		return 0;
	}
	if (!func_58(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_59(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_60(iParam0, bParam2);
	iVar2 = 0;
	if (func_61(iParam0) == -1037537535)
	{
		if (!func_62(iParam0, 866047851) && !func_62(iParam0, -1979000645))
		{
			bVar3 = true;
		}
	}
	if (func_63(iParam0, 8388608) && !func_64(27))
	{
		func_65(27);
	}
	func_66(iParam0);
	if (!bVar3)
	{
		if (func_62(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			iVar1 = func_50(func_67(iParam0, 1), 0);
			if (is_weapon_valid(iVar1))
			{
				if (func_68() == -1)
				{
					func_69(iVar1);
				}
				if (func_70(0) && func_71(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
				{
					func_72(iParam0, iVar0, iParam5);
					if (!bParam9)
					{
						bParam2 = false;
					}
				}
				else
				{
					func_73(iParam0, iVar0, iParam5);
				}
			}
		}
		else if (func_61(iParam0) == -427144552)
		{
			if (!func_74(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_61(iParam0) == 307971639 && func_75(iParam0))
		{
			if (!func_76(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_62(iParam0, -103750053))
		{
			func_46(func_45(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_46(func_77(-717883113, 2091222383), iVar0);
		}
		else if (func_62(iParam0, -121341956) && !func_62(iParam0, 606799272))
		{
			if (iParam0 != 191707516)
			{
				func_78(536, 0);
			}
			if (func_62(iParam0, -2017733358) || func_62(iParam0, -1369131378))
			{
			}
		}
		else if (func_62(iParam0, -136654233))
		{
			if (func_62(iParam0, -1021472396))
			{
			}
		}
		else if (func_62(iParam0, -1466706512) && func_62(iParam0, 1147021565))
		{
			func_78(519, 0);
		}
		else if (func_62(iParam0, 1147021565) && func_62(iParam0, -524514947))
		{
		}
		else if (func_62(iParam0, 554195525))
		{
		}
		else if (func_62(iParam0, 589988438))
		{
			if (func_79())
			{
				func_80(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_62(iParam0, 787083290) && func_62(iParam0, 949916894))
		{
			func_81(iParam0);
		}
		else if (func_62(iParam0, -1718133314))
		{
			func_82(iParam0);
		}
		else if (func_62(iParam0, -1738650224))
		{
			func_83(iParam0);
		}
		else if (func_62(iParam0, -1112814642) && func_62(iParam0, 949916894))
		{
			func_84(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1940144->f_21 = 0;
		}
		else if (func_62(iParam0, 1841149704))
		{
			func_85();
		}
		else if (func_62(iParam0, -1979000645))
		{
		}
		else if (func_62(iParam0, 606799272))
		{
		}
		else if (func_62(iParam0, -1112814642) && func_62(iParam0, -1697809989))
		{
		}
		else if (func_62(iParam0, -2017733358) || func_62(iParam0, -1369131378))
		{
		}
		else if (func_62(iParam0, -1921346699))
		{
			return 0;
		}
		else if (func_62(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_86(215778062, 1))
					{
						func_44(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_86(670273567, 1))
					{
						func_44(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_86(-967317137, 1))
					{
						func_44(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_86(526074061, 1))
					{
						func_44(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_86(-1045488665, 1))
					{
						func_44(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_86(471514780, 1))
					{
						func_44(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_62(iParam0, -839724752) && func_63(iParam0, 4))
		{
		}
		else if (func_62(iParam0, 1399091007))
		{
			func_87(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
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
			case 1127253961:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1531214887;
				break;
			case -160924582:
			case 1652431022:
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -21093309:
				func_89(272, func_88(-21093309), 0);
				break;
			case 204375141:
				func_89(270, func_88(204375141), 0);
				break;
			case -417963070:
				func_89(271, func_88(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1940311->f_10903 + 60000))
				{
					func_90(685, 1934060482, 1, 1);
					Global_1940311->f_10903 = get_game_timer();
				}
				break;
			case -1067476102:
			case -541584777:
			case 206762213:
			case 1566032147:
			case 1973952589:
				if (get_game_timer() >= (Global_1940311->f_10903 + 60000))
				{
					func_90(685, 1110018439, 1, 1);
					Global_1940311->f_10903 = get_game_timer();
				}
				break;
			case -653299524:
			case -486559882:
			case -324053813:
			case -223790555:
			case 998010398:
				if (get_game_timer() >= (Global_1940311->f_10903 + 60000))
				{
					func_90(685, 1408511260, 1, 1);
					Global_1940311->f_10903 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1940311->f_10903 + 60000))
				{
					func_90(685, -1228016946, 1, 1);
					Global_1940311->f_10903 = get_game_timer();
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
				if (get_game_timer() >= (Global_1940311->f_10903 + 60000))
				{
					func_90(686, -103579, 1, 1);
					Global_1940311->f_10903 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1940311->f_10903 + 60000))
				{
					func_90(686, -1531530025, 1, 1);
					Global_1940311->f_10903 = get_game_timer();
				}
				break;
			case 80178851:
				func_78(526, 0);
				break;
			case 1613651027:
				func_78(529, 0);
				break;
			case -885810591:
				break;
			case -601932535:
				if (func_64(1))
				{
					func_78(522, 0);
				}
				break;
			case -898386032:
				func_78(521, 0);
				break;
			case -2035110427:
				if (func_68() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_78(534, 0);
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
		iVar5 = iParam0;
		func_91(&iVar5);
		if (!func_73(iVar5, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_70(0))
		{
			return 1;
		}
		if (func_61(iParam0) == -1037537535)
		{
			func_92(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_70(0) && !func_93())
		{
			Var6.f_1 = 10;
			Var6.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_34, 0, 0, iVar2, &Var6, 0);
			iVar29 = 0;
			while (iVar29 < Var6)
			{
				func_44(&(Var6.f_1[iVar29]), &(Var6.f_12[iVar29]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar29++;
			}
		}
		else
		{
			func_94(iVar2, 0);
		}
	}
	Var30 = { func_95(iParam0) };
	if (_stat_id_is_valid(&Var30))
	{
		_0x6a0184e904cdf25e(&Var30, iVar0);
	}
	func_96(iParam0);
	if (fParam6 > 0f)
	{
		if (func_62(iParam0, -839724752))
		{
			func_97(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar32 = iParam5 == 1248274121;
		func_98(iParam0, iVar0, 0, bVar32, 0, 0, 0);
	}
	return 1;
}

struct<2> func_45(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

void func_46(var uParam0, int iParam1, int iParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return;
	}
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

bool func_47(int iParam0, vector3 vParam1, var uParam4, float fParam5, int iParam6, int iParam7)
{
	if (!does_entity_exist(*uParam4))
	{
		*uParam4 = func_99(iParam0, vParam1, iParam6, iParam7);
	}
	if (does_entity_exist(*uParam4))
	{
		func_100(uParam4);
		return func_101(*uParam4, fParam5);
	}
	return false;
}

int func_48(int iParam0, int iParam1)
{
	if (!func_43(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_61(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_62(iParam0, 1399091007))
	{
		func_102(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

void func_49(int iParam0, vector3 vParam1, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	if (!does_entity_exist(*uParam4))
	{
		*uParam4 = func_99(iParam0, vParam1, iParam7, iParam8);
	}
	if (does_entity_exist(*uParam4))
	{
		func_100(uParam4);
		func_103(*uParam4, iParam5, iParam6, 1);
	}
}

int func_50(int iParam0, bool bParam1)
{
	if (!func_43(iParam0, 0))
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

void func_51(int iParam0, vector3 vParam1, var uParam4, int iParam5, int iParam6, int iParam7)
{
	if (!does_entity_exist(*uParam4))
	{
		*uParam4 = func_99(iParam0, vParam1, iParam6, iParam7);
	}
	if (does_entity_exist(*uParam4))
	{
		func_100(uParam4);
		func_104(*uParam4, iParam5);
	}
}

void func_52(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	if (!does_entity_exist(*iParam10))
	{
		*iParam10 = func_99(iParam0, vParam1, iParam13, iParam14);
	}
	if (does_entity_exist(*iParam10))
	{
		if (!func_105(vParam4) || !func_105(vParam7))
		{
			func_106(*iParam10, vParam4, vParam7);
		}
		func_100(iParam10);
		func_107(*iParam10, iParam16);
		func_108(*iParam10, iParam11, iParam12, iParam15);
	}
}

int func_53(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7)
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
		return func_109(*uParam3);
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
			return func_110(iVar1);
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

void func_54(var uParam0, var uParam1, vector3 vParam2, vector3 vParam5, int iParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&uParam0->f_103[iVar0] == -1)
		{
			uParam0->f_103[iVar0] = uParam1;
			uParam0->f_154[iVar0] = iParam12;
			uParam0->f_103[iVar0]->f_3 = iParam8;
			uParam0->f_103[iVar0]->f_1 = uParam9;
			uParam0->f_103[iVar0]->f_2 = uParam10;
			uParam0->f_103[iVar0]->f_4 = uParam11;
			if (func_111(uParam0->f_103[iVar0]->f_3) && func_112(uParam0->f_103[iVar0]->f_3))
			{
				func_113(uParam0->f_37[iVar0], uParam0->f_68[iVar0]);
			}
			else
			{
				if (!func_105(vParam2))
				{
					*uParam0->f_37[iVar0] = { vParam2 };
				}
				if (!func_105(vParam5))
				{
					*uParam0->f_68[iVar0] = { vParam5 };
				}
			}
		}
		else
		{
			iVar0++;
		}
	}
}

int func_55()
{
	return Global_1896622->f_41;
}

Vector3 func_56(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			vVar0 = { 2313.51f, 1031.721f, 78.5643f };
			break;
		case 2:
			vVar0 = { 159.2609f, -1436.622f, 42f };
			break;
	}
	return vVar0;
}

float func_57(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

bool func_58(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_68() == -1)
	{
		if (func_111(iParam0) && func_114(iParam0))
		{
			func_115(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_59(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_116(iParam0, iParam1);
	Var0 = { func_117(iParam0, 0, 1) };
	iVar5 = func_118(iParam0, &Var0, 0, 0);
	iVar6 = func_119(iParam0, 0, 0, 0);
	if (iVar5 > 1 && (iVar6 + iParam2) >= iVar5)
	{
		if (func_62(iParam0, -2051813666))
		{
			func_78(674, 1);
		}
		else if (func_68() == -1)
		{
			func_78(673, 0);
		}
	}
	if (func_120(iParam0, &Var0, *iParam1, 0, 0, -1, 0))
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

void func_60(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	if (!func_121())
	{
		return;
	}
	switch (func_122(iParam0, -949239683))
	{
		case -1565009253:
		case -1420737577:
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
			Global_1940144->f_70.f_5 = 1;
			Global_1940144->f_70.f_6 = 0;
			Global_1940144->f_70.f_1 = iParam0;
			break;
	}
}

int func_61(int iParam0)
{
	if (!func_43(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_62(int iParam0, int iParam1)
{
	if (!func_43(iParam0, 0))
	{
		return func_124(func_123(iParam0), iParam1);
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (_item_database_does_item_have_tag(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

bool func_63(int iParam0, int iParam1)
{
	if (!func_43(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

bool func_64(int iParam0)
{
	if (!func_125(iParam0))
	{
		return false;
	}
	return func_126(iParam0);
}

void func_65(int iParam0)
{
	if (!func_125(iParam0))
	{
		return;
	}
	func_127(iParam0);
	func_128(iParam0);
}

void func_66(int iParam0)
{
	if (func_62(iParam0, -1522723129))
	{
		func_129(-848633709, 0, 255, 0, 0);
	}
	else if (func_62(iParam0, -283942357))
	{
		func_129(-981153234, 0, 255, 0, 0);
	}
	else if (func_62(iParam0, 683680997))
	{
		func_129(-756350192, 0, 255, 0, 0);
	}
	else if (func_62(iParam0, 1307628809))
	{
		func_129(603094518, 0, 255, 0, 0);
	}
}

int func_67(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1639263599:
			iVar0 = -764310200;
			break;
		case -1860710511:
			iVar0 = -764310200;
			break;
		case 1507636870:
			iVar0 = -764310200;
			break;
		case 1828724907:
			iVar0 = -764310200;
			break;
		case 1222378998:
			iVar0 = -764310200;
			break;
		case 2074469742:
			iVar0 = -764310200;
			break;
		case 1270940175:
			iVar0 = -764310200;
			break;
		case -1857826511:
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
		case 34372170:
			iVar0 = 1151374672;
			break;
		case 963726415:
			iVar0 = -577893115;
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
	if (func_43(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_130(iVar0) || func_131(iVar0))
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

int func_68()
{
	return Global_1572887->f_13;
}

void func_69(int iParam0)
{
	if (Global_1572887->f_13 != -1)
	{
		return;
	}
	if (!func_132(iParam0))
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

bool func_70(bool bParam0)
{
	if (func_68() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_133(bParam0));
}

bool func_71(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	if (_is_weapon_melee(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (has_ped_got_weapon(Global_34, iParam0, 0, false))
	{
		Var0 = { func_117(iParam0, 0, 1) };
		if (func_134(iParam0, &Var0, Var0.f_4, 0, 0))
		{
			Var5.f_9 = -1591664384;
			if (func_135(iParam0, &Var5, Var0.f_4))
			{
				Var27 = { func_136(iParam0, Var0, Var0.f_4, 0) };
				func_137(iParam0, &Var27, &Var0, 1, -142743235, 1, 0);
			}
		}
	}
	if (func_70(0))
	{
		_give_weapon_to_ped_2(Global_34, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
		if (!has_ped_got_weapon(Global_34, iParam0, 0, false))
		{
			return false;
		}
		func_72(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
		func_138(iParam0, iParam1);
		return true;
	}
	if (!has_ped_got_weapon(Global_34, iParam0, 0, false))
	{
		return false;
	}
	if (iParam1 > 0)
	{
	}
	_give_weapon_to_ped_2(Global_34, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
	return true;
}

bool func_72(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_75(iParam0))
	{
		return false;
	}
	if (!func_70(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_34, iParam0, iParam1, iParam2);
	return true;
}

int func_73(int iParam0, int iParam1, int iParam2)
{
	if (!func_43(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	iVar0 = func_139(iParam0, -455129387);
	if (iVar0 != 0)
	{
		return func_140(iParam0, iParam1, iParam2);
	}
	Var1 = { func_117(iParam0, 0, 1) };
	Var6 = { func_136(iParam0, Var1, Var1.f_4, 0) };
	return func_141(iParam0, &Var6, &Var1, iParam1, iParam2, 0);
}

bool func_74(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_50(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_68() == -1)
		{
			func_69(iVar0);
			if (iParam1 == 1248274121)
			{
				func_142(iVar0);
			}
		}
		if (!func_120(iParam0, &uVar1, 1, 0, 0, -1, 0))
		{
			func_115(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_143(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_71(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || _is_weapon_binoculars(iVar0))
			{
				func_71(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_lasso(iVar0))
			{
				func_71(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
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
				else if (!func_145(iVar0))
				{
					func_71(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_71(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_146(Global_34, 2, 0, 1);
				if ((((func_132(iVar7) && !Global_26640) && iVar7 != iVar0) && !func_86(-1185145312, 1)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_34, iVar7);
				}
				if (func_132(iVar7) && func_86(-1185145312, 1))
				{
					if (!func_71(iVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_71(iVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_71(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_78(515, 1);
	}
	return true;
}

bool func_75(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_76(int iParam0, int iParam1, int iParam2)
{
	if (!func_75(iParam0))
	{
		return 0;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_34, iParam0);
	if (func_132(iVar4))
	{
		get_max_ammo(Global_34, &iVar2, iVar4);
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
		func_89(func_147(iParam0), func_88(iParam0), 1);
		return 0;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_70(0))
	{
		if (func_72(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	else
	{
		return func_73(iParam0, *iParam1, iParam2);
	}
	return 0;
}

struct<2> func_77(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_78(int iParam0, bool bParam1)
{
	func_148(iParam0, &iVar0, &iVar1);
	if (!func_149(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_150(iVar0, iVar1);
}

bool func_79()
{
	return false;
}

int func_80(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	if (func_68() == 0)
	{
		func_94(iParam0, 0);
		return 0;
	}
	iVar0 = func_151(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_152(iVar0, sParam4, iParam5, 0);
	}
	func_153(iVar0, bParam1, fParam2, iParam3);
	return iVar0;
}

void func_81(int iParam0)
{
}

void func_82(int iParam0)
{
}

void func_83(int iParam0)
{
}

void func_84(int iParam0)
{
}

void func_85()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

bool func_86(int iParam0, int iParam1)
{
	if (!func_43(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_61(iParam0);
	switch (iVar0)
	{
		case -427144552:
			if (has_ped_got_weapon(Global_34, iParam0, 0, false))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 307971639:
			if (!func_154(iParam0, 1))
			{
				return false;
			}
			break;
		case -1037537535:
			if (func_155(iParam0))
			{
				return true;
			}
			break;
	}
	return func_156(iParam0, 0, 0, 0) >= iParam1;
}

void func_87(int iParam0, int iParam1)
{
	func_102(iParam0, iParam1, &uVar0);
}

int func_88(int iParam0)
{
	if (!func_43(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_157(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

void func_89(int iParam0, int iParam1, bool bParam2)
{
	func_148(iParam0, &iVar0, &iVar1);
	if (!func_149(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_158(iParam0, 1024))
	{
		return;
	}
	func_150(iVar0, iVar1);
	Global_1904651->f_33[iParam0]->f_3[0] = iParam1;
	Global_1904651->f_33[iParam0]->f_3[0]->f_1 = 2;
}

void func_90(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_148(iParam0, &iVar0, &iVar1);
	if (!func_149(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_158(iParam0, 1024))
	{
		return;
	}
	func_150(iVar0, iVar1);
	Global_1904651->f_33[iParam0]->f_3[0] = iParam1;
	if (!bParam3)
	{
		Global_1904651->f_33[iParam0]->f_3[0]->f_1 = 1;
	}
	else
	{
		Global_1904651->f_33[iParam0]->f_3[0]->f_1 = 5;
	}
}

void func_91(int iParam0)
{
	switch (*iParam0)
	{
		case -1424823393:
			*iParam0 = -885810591;
			break;
		case 1358243310:
			*iParam0 = 1463786584;
			break;
		case -541584777:
			*iParam0 = 206762213;
			break;
	}
}

void func_92(int iParam0)
{
	if (func_68() != -1)
	{
		return;
	}
}

bool func_93()
{
	if (_inventory_get_ped_inventory_id(player_ped_id()) != 3)
	{
		return false;
	}
	return _0xfc7563f482781a3d();
}

int func_94(int iParam0, int iParam1)
{
	if (0 == iParam0)
	{
		return 0;
	}
	Var4.f_1 = 10;
	func_159(&Var4, 1356624740);
	return func_160(iParam0, &Var4, &uVar0, iParam1, 0);
}

struct<2> func_95(int iParam0)
{
	if (!func_43(iParam0, 0))
	{
		return Var0;
	}
	if (func_62(iParam0, -305066475))
	{
		if (func_68() == -1)
		{
			if (func_62(iParam0, -537818634))
			{
				return func_161(189951448);
			}
			else
			{
				return func_161(1176172851);
			}
		}
	}
	else if (func_62(iParam0, -537818634))
	{
		return func_161(-963660207);
	}
	if (func_62(iParam0, 2084895747))
	{
		return func_161(1694039471);
	}
	return Var2;
}

void func_96(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			break;
	}
}

void func_97(int iParam0, char* sParam1)
{
	sVar0 = func_162(Global_1903071->f_37);
	func_164(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_163(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_98(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!func_43(iParam0, 0))
	{
		return;
	}
	else if (iParam0 == 1807503187)
	{
		return;
	}
	else if (iParam1 == 0)
	{
		return;
	}
	if (!func_165() || bParam6)
	{
		func_166(iParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_167(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam0 == 1701457723)
	{
		StringCopy(&cVar2, "ITEM_GET_PUMP", 32);
	}
	if (iParam1 > 0)
	{
	}
	else if (bParam3 || bParam4)
	{
		StringCopy(&cVar2, func_167(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		bVar0 = true;
	}
	else if (bParam2 && func_63(iParam0, 2097152))
	{
		StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		bVar0 = true;
	}
	iVar6 = func_61(iParam0);
	iVar10 = 0;
	iVar11 = 805880880;
	if (((((((iVar6 == 307971639 && iParam0 != 424030678) && iParam0 != -1188697038) && iParam0 != 446901936) && iParam0 != -228768324) && iParam0 != 34372170) && iParam0 != 963726415) && iParam0 != 1701457723)
	{
		iVar10 = 622449822;
		iVar11 = 622449822;
	}
	iVar12 = func_168(iParam0);
	if (((((((iVar6 == -1013984273 || iVar6 == 658570475) || iVar12 == -1674363638) || iVar12 == 252325943) || iVar12 == 829857647) || iVar12 == -636562458) || iVar12 == 1341188928) || iVar12 == 1216664798)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_169(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (get_hash_key(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (bParam5)
	{
		Var7 = "ITEMTYPE_ORDERED_ITEM";
		Var7.f_1 = "itemtype_textures";
	}
	if (is_string_null_or_empty(Var7))
	{
		return;
	}
	iVar13 = 109029619;
	sVar14 = "Transaction_Positive";
	sVar15 = "Transaction_Feed_Sounds";
	iVar16 = 0;
	if (bVar0)
	{
		iVar13 = 619977481;
		sVar14 = "Transaction_Negative";
		iVar16 = 1;
	}
	if (func_62(iParam0, 474910316))
	{
		sVar17 = func_170(iParam0);
		if (!is_string_null_or_empty(sVar17))
		{
			sVar14 = sVar17;
			sVar15 = "RDRO_Collectible_Sounds_Travelling_Saleswoman";
		}
	}
	if (_item_database_is_overpowered_item(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar13 = -856358433;
		}
		else
		{
			iVar13 = -1905433004;
		}
	}
	if (func_62(iParam0, 1816585950))
	{
		iVar13 = 76603059;
	}
	if (func_171(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar13 = -1777836132;
		}
		else
		{
			iVar13 = -1905433004;
		}
	}
	iVar18 = func_88(iParam0);
	if ((func_172(iVar12) && func_62(iParam0, -306684263)) && iVar18 != 0)
	{
		iVar18 = func_173(iParam0);
	}
	else if (func_61(iParam0) == -1037537535)
	{
		iVar19 = func_174(iParam0);
		if (func_43(iVar19, 0))
		{
			iVar18 = func_88(iVar19);
		}
	}
	if (func_175(iParam0, 1443104131) && bParam3)
	{
		iVar20 = 1;
		func_176(iParam0, -915411861, &iVar20, 0);
		iVar1 = ceil((to_float(iVar1) / to_float(iVar20)));
		iParam1 = ceil((to_float(iParam1) / to_float(iVar20)));
	}
	sVar21 = func_177(_create_var_string(10, &cVar2, _create_var_string(0, iVar18), iVar1), iVar13);
	if (iParam1 == 1)
	{
		sVar21 = _create_var_string(0, iVar18);
	}
	if ((((((iVar12 == -1839668642 && iParam0 != -1713496139) && iParam0 != 1326838792) && iParam0 != -230310728) || ((iVar12 == 231148558 && iParam0 != 1733464892) && iParam0 != -598283164)) || (iVar12 == 252325943 && iParam0 != -860557048)) || (iVar12 == -636562458 && iParam0 != -2087489409))
	{
		sVar21 = _create_var_string(0, func_178(iParam0, -442898163));
	}
	if (iVar12 == -126813555 || iVar12 == 1946043663)
	{
		StringCopy(&cVar22, "", 128);
		if (func_179(iParam0, &cVar22))
		{
			sVar21 = func_181(func_180(cVar22), 109029619);
		}
	}
	func_164(sVar21, Var7.f_1, get_hash_key(Var7), iVar16, iVar13, sVar15, sVar14, 0, 1);
}

int func_99(int iParam0, vector3 vParam1, int iParam4, int iParam5)
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

void func_100(int iParam0)
{
	if (func_182())
	{
		decor_set_bool(*iParam0, "loot_mp_mission_only", true);
	}
}

bool func_101(int iParam0, float fParam1)
{
	return decor_set_float(iParam0, "fLoot_money", fParam1);
}

void func_102(int iParam0, int iParam1, var uParam2)
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

void func_103(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (does_entity_exist(iParam0) && is_entity_a_ped(iParam0))
	{
		iVar0 = func_183(iParam0);
		func_184(iParam0, iParam1, iParam2, iVar0);
	}
	else if (!decor_exist_on(iParam0, "loot_ammo1_type") || (bParam3 && decor_get_int(iParam0, "loot_ammo1_type") == iParam1))
	{
		decor_set_int(iParam0, "loot_ammo1_type", iParam1);
		decor_set_int(iParam0, "loot_ammo1_amt", iParam2);
	}
	else if (!decor_exist_on(iParam0, "loot_ammo2_type") || (bParam3 && decor_get_int(iParam0, "loot_ammo2_type") == iParam1))
	{
		decor_set_int(iParam0, "loot_ammo2_type", iParam1);
		decor_set_int(iParam0, "loot_ammo2_amt", iParam2);
	}
	else if (!decor_exist_on(iParam0, "loot_ammo3_type") || (bParam3 && decor_get_int(iParam0, "loot_ammo3_type") == iParam1))
	{
		decor_set_int(iParam0, "loot_ammo3_type", iParam1);
		decor_set_int(iParam0, "loot_ammo3_amt", iParam2);
	}
}

void func_104(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0) && is_entity_a_ped(iParam0))
	{
		iVar0 = func_183(iParam0);
		func_184(iParam0, iParam1, 1, iVar0);
	}
	else
	{
		decor_set_int(iParam0, "loot_weapon", iParam1);
	}
}

bool func_105(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_106(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (!decor_exist_on(iParam0, "loot_item_type1"))
	{
		decor_set_float(iParam0, "loot_item_offset1x", vParam1.x);
		decor_set_float(iParam0, "loot_item_offset1y", vParam1.y);
		decor_set_float(iParam0, "loot_item_offset1z", vParam1.z);
		decor_set_float(iParam0, "loot_item_orient1x", vParam4.x);
		decor_set_float(iParam0, "loot_item_orient1y", vParam4.y);
		decor_set_float(iParam0, "loot_item_orient1z", vParam4.z);
	}
	else if (!decor_exist_on(iParam0, "loot_item_type2"))
	{
		decor_set_float(iParam0, "loot_item_offset2x", vParam1.x);
		decor_set_float(iParam0, "loot_item_offset2y", vParam1.y);
		decor_set_float(iParam0, "loot_item_offset2z", vParam1.z);
		decor_set_float(iParam0, "loot_item_orient2x", vParam4.x);
		decor_set_float(iParam0, "loot_item_orient2y", vParam4.y);
		decor_set_float(iParam0, "loot_item_orient2z", vParam4.z);
	}
}

void func_107(int iParam0, int iParam1)
{
	if (!decor_exist_on(iParam0, "loot_item_type1"))
	{
		if (iParam1 >= 0)
		{
			decor_set_int(iParam0, "loot_item_bone1", iParam1);
		}
	}
	else if (!decor_exist_on(iParam0, "loot_item_type2"))
	{
		if (iParam1 >= 0)
		{
			decor_set_int(iParam0, "loot_item_bone2", iParam1);
		}
	}
}

void func_108(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (does_entity_exist(iParam0) && is_entity_a_ped(iParam0))
	{
		iVar0 = func_183(iParam0);
		func_184(iParam0, iParam1, iParam2, iVar0);
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

int func_109(var uParam0)
{
	return 0;
}

int func_110(int iParam0)
{
	if (is_weapon_valid(iParam0))
	{
		return iParam0;
	}
	return 0;
}

bool func_111(int iParam0)
{
	return func_61(iParam0) == -427144552;
}

bool func_112(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

void func_113(var uParam0, var uParam1)
{
	*uParam0 = { -0.12f, 0.12f, 0.12f };
	*uParam1 = { 90f, 0f, 115f };
}

bool func_114(int iParam0)
{
	if (func_68() != -1)
	{
		return false;
	}
	if (func_63(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_120(iParam0, &uVar0, 1, 0, 0, -1, 0);
	}
	return func_86(iParam0, 1);
}

void func_115(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_61(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_50(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_131(iVar0))
	{
		if (bParam2 || (!has_ped_got_weapon(Global_34, iVar0, 0, false) && func_156(iParam0, 0, 0, 0) == 0))
		{
			if (func_68() == -1)
			{
				func_69(iVar0);
			}
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_98(iParam0, iParam1, 0, 0, 0, 0, 0);
				play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_116(int iParam0, int iParam1)
{
	if (func_62(iParam0, 58855631))
	{
		func_176(iParam0, -915411861, iParam1, 1);
	}
}

struct<5> func_117(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_185(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_61(iParam0);
	switch (iVar5)
	{
		case -1037537535:
			Var0 = { func_136(889965687, Var0, 1034665895, bParam1) };
			Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			break;
		case -427144552:
			Var0 = { func_186(bParam1) };
			if (bParam2 && func_187(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_134(iParam0, &Var0, 1728382685, 0, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_134(iParam0, &Var0, -649335959, 0, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_135(iParam0, &Var6, 1728382685))
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
		case -2072933068:
		case -1784221369:
			Var0.f_4 = 1782082944;
			break;
		case -1650247667:
			Var0.f_4 = -1591664384;
			Var0 = { func_188(bParam1) };
			switch (func_168(iParam0))
			{
				case -1070622585:
					Var0.f_4 = -6796437;
					break;
				case -1057349201:
					Var0.f_4 = 1473261684;
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
		case -1962314949:
			if (func_189(iParam0, -1823706425))
			{
				Var0 = { func_136(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_189(iParam0, -1483207246))
			{
				Var0 = { func_136(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1911121386))
			{
				Var0 = { func_136(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_189(iParam0, -1653629781))
			{
				Var0 = { func_136(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 1384535894);
			}
			break;
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
				Var28.f_9 = -1591664384;
				if (!func_190(Var0, &Var28, bParam1, 0, -1))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var28.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else if (_inventory_fits_slot_id(iParam0, -718417579))
			{
				Var0.f_4 = -718417579;
			}
			else if (func_189(iParam0, -1653629781))
			{
				Var0 = { func_136(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 1384535894);
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

int func_118(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_43(iParam0, 0) && !func_191(func_123(iParam0), 2))
	{
		return 0;
	}
	if (func_61(iParam0) == 26423971)
	{
		return -1;
	}
	if (!bParam2 && func_139(iParam0, -455129387) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_133(bParam3), iParam0);
}

int func_119(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_75(iParam0) && !bParam2)
	{
		return get_ped_ammo_by_type(Global_34, iParam0);
	}
	return _0xe787f05dfc977bde(func_133(bParam1), iParam0, iParam3);
}

bool func_120(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	func_192(&iParam0);
	if (!func_43(iParam0, 0) && !func_191(func_123(iParam0), 2))
	{
		return false;
	}
	if (!bParam3 && func_139(iParam0, -455129387) == 0)
	{
		bParam3 = true;
	}
	if (func_111(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		Var0 = { func_186(0) };
		Var4.f_9 = -1591664384;
		if (!func_134(iParam0, &Var0, 1728382685, 0, 0))
		{
			return false;
		}
		else if (func_135(iParam0, &Var4, 1728382685))
		{
			return false;
		}
		if (func_187(iParam0, 1))
		{
			if (!func_134(iParam0, &Var0, -649335959, 0, 0))
			{
				return false;
			}
			else if (func_135(iParam0, &Var4, -649335959))
			{
				return false;
			}
		}
		return true;
	}
	iVar26 = iParam5;
	if (iParam5 < 0)
	{
		iVar26 = func_118(iParam0, uParam1, bParam3, bParam4);
	}
	if (iVar26 < 0)
	{
		return false;
	}
	else if (iVar26 == 0)
	{
		return true;
	}
	iVar27 = func_193(iParam0, *uParam1, uParam1->f_4, bParam4, bParam3, iParam6);
	if ((iVar27 + iParam2) > iVar26)
	{
		return true;
	}
	return false;
}

bool func_121()
{
	if (((((!_0x3ab6c7b0bb0df4b1(Global_34, -1) && !is_ped_using_any_scenario(Global_34)) && !func_194(Global_34, 1369124074)) && !func_194(Global_34, 713668775)) && !_0xec7e480ff8bd0bed(Global_34)) && !is_ped_in_any_vehicle(Global_34, false))
	{
		return true;
	}
	return false;
}

int func_122(int iParam0, int iParam1)
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

int func_123(int iParam0)
{
	return iParam0;
}

int func_124(int iParam0, int iParam1)
{
	if (!func_191(iParam0, 2))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (_0x99c6ea66dfe73757(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

bool func_125(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_126(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_39.f_3643[iVar1]), iVar2);
}

void func_127(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_39.f_3643[iVar1];
	set_bit(&uVar3, iVar2);
	Global_39.f_3643[iVar1] = uVar3;
}

void func_128(int iParam0)
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
			func_195(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			_uitutorial_set_rpg_icon_visibility(5, 0);
			_uitutorial_set_rpg_icon_visibility(4, 0);
			func_196(1);
			break;
		case 18:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_196(2);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_196(3);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(7, 0);
			_uitutorial_set_rpg_icon_visibility(6, 0);
			break;
		case 21:
			_uitutorial_set_rpg_icon_visibility(9, 0);
			_uitutorial_set_rpg_icon_visibility(8, 0);
			break;
		case 30:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 31:
			break;
		case 32:
			func_197(1);
			break;
		case 33:
			func_198(1);
			break;
		case 34:
			func_199(1);
			break;
		case 35:
			break;
		case 36:
			func_200(0);
			break;
		case 37:
			func_201(0);
			break;
		case 38:
			func_202(0);
			break;
		case 39:
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 1:
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_level(get_player_index(), 1);
			break;
		case 2:
			if (func_203() && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_204("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_78(677, 0);
			break;
		case 3:
			if (func_203() && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_204("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_78(678, 0);
			break;
		case 4:
			if (func_203() && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_204("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_78(679, 0);
			break;
		case 5:
			if (func_203() && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_204("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_78(680, 0);
			break;
		case 23:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			break;
		case 47:
			if (func_68() == -1)
			{
				if (!func_86(1013902307, 1))
				{
					func_73(1013902307, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_68() == -1)
			{
				if (!func_86(1013902307, 1))
				{
					func_73(1013902307, 1, 752097756);
				}
				if (!func_86(142640135, 1))
				{
					func_73(142640135, 1, 752097756);
				}
			}
			break;
		case 48:
			if (func_68() == -1)
			{
				if (!func_86(786809402, 1))
				{
					func_73(786809402, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_68() == -1)
			{
				if (!func_86(786809402, 1))
				{
					func_73(786809402, 1, 752097756);
				}
				if (!func_86(-518019409, 1))
				{
					func_73(-518019409, 1, 752097756);
				}
			}
			break;
		case 22:
			_0x5b9813ecf7633fe8(0);
			break;
		case 24:
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
		case 43:
			break;
		case 44:
			_unlock_set_unlocked(-843169622, true);
			Global_1940258->f_41 = 1;
			set_ambient_zone_list_state_persistent("AZL_Endlesss_Summer_Enable", true, true);
			set_ambient_zone_list_state_persistent("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 45:
			break;
		case 46:
			_0xa63fcad3a6fec6d2(get_player_index(), 1);
			break;
		case 51:
			_unlock_set_unlocked(-78935213, true);
			break;
		case 52:
			_unlock_set_unlocked(-384786155, true);
			break;
		case 53:
			_unlock_set_unlocked(296662302, true);
			break;
		case 54:
			_unlock_set_unlocked(-1871453000, true);
			break;
		case 55:
			_unlock_set_unlocked(1397349651, true);
			break;
	}
}

int func_129(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_205(iParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

bool func_130(int iParam0)
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

bool func_131(int iParam0)
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

bool func_132(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

int func_133(bool bParam0)
{
	if (func_68() == -1)
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

bool func_134(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_193(iParam0, *uParam1, iParam2, bParam3, 1, iParam4) > 0;
}

bool func_135(int iParam0, var uParam1, int iParam2)
{
	if (func_206(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_136(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_43(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_133(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_137(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_207(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_190(*uParam1, &Var0, bParam6, 0, -1))
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
	if (!func_70(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_68() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = iParam0;
			Var15 = { *uParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_208(1702063850, &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31.f_16 = -1;
				Var31 = iParam5;
				Var31.f_7 = iParam4;
				func_209(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_133(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_138(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_34, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar2 = func_210(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_34, iParam0, iVar2);
		if (get_max_ammo(Global_34, &iVar1, iParam0) && get_ammo_in_ped_weapon(Global_34, iParam0) > iVar1)
		{
			set_ped_ammo(Global_34, iParam0, iVar1);
		}
	}
}

int func_139(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

int func_140(int iParam0, int iParam1, int iParam2)
{
	if (!func_43(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_139(iParam0, -455129387);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_117(iParam0, 0, 0) };
	if (func_120(iParam0, &Var1, iParam1, 0, 0, -1, 0))
	{
		return 0;
	}
	if (!func_70(0))
	{
		return 0;
	}
	if (!_0xcb5d11f9508a928d(func_133(0), &uVar6, &Var1, iParam0, Var1.f_4, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

int func_141(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_43(iParam0, 0))
	{
		return 0;
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return 0;
	}
	if (func_120(iParam0, uParam2, iParam3, bParam5, 0, -1, 0))
	{
		return 0;
	}
	if (!func_70(0))
	{
		return 0;
	}
	if (!_0xcb5d11f9508a928d(func_133(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

void func_142(int iParam0)
{
	if (!is_weapon_valid(iParam0))
	{
		return;
	}
	if (!does_entity_exist(Global_34) || Global_1940258->f_6)
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
	decor_set_int(Global_34, sVar0, iParam0);
	iVar2 = func_211();
	func_212(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	decor_set_int(Global_34, sVar1, iVar2);
}

int func_143(int iParam0)
{
	if (func_112(iParam0))
	{
		if (get_ped_ammo_by_type(Global_34, 954660191) <= 0)
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
		iVar1 = get_ped_ammo_by_type(Global_34, _get_ammo_type_for_weapon(iParam0));
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

bool func_144()
{
	return false;
}

bool func_145(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_146(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_147(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_0x705be297eebdb95d(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			if (!func_64(49))
			{
				if (!func_64(47))
				{
					return 149;
				}
				return 151;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_64(50))
			{
				if (!func_64(48))
				{
					return 150;
				}
				return 152;
			}
		}
	}
	return 153;
}

void func_148(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_149(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_213(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_214(iParam0))
	{
		return false;
	}
	if (func_215(iParam0))
	{
		return false;
	}
	if ((Global_1900736->f_67 && !func_158(iParam0, 1)) || func_216(32768))
	{
		if (!func_158(iParam0, 262144) || !Global_1904651->f_8686)
		{
			return false;
		}
	}
	if (!func_217())
	{
		return false;
	}
	return true;
}

void func_150(int iParam0, int iParam1)
{
	uVar0 = Global_1904651[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1904651)[iParam0] = uVar0;
}

int func_151(int iParam0, bool bParam1, int iParam2)
{
	if (func_68() == 0)
	{
		return 0;
	}
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_86(1811977508, 1))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	_0x48e4d50f87a96aa5(Global_34, 1, 1, iParam0, &Var1, 0);
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
			if (func_43(iVar25, 0) && func_62(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_152(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		if (bParam3)
		{
			func_218(iParam0, 1000);
			return;
		}
		sParam1 = "FEED_MONEY_EARN";
	}
	func_164(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_153(int iParam0, bool bParam1, float fParam2, int iParam3)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_219() || func_220())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_164(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
		}
		func_164(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		_money_increment_cash_balance(iVar1, 752097756);
		func_46(func_161(1644987397), iVar1);
	}
}

bool func_154(int iParam0, int iParam1)
{
	if (!func_43(iParam0, 0))
	{
		return false;
	}
	if (Global_1940258->f_6)
	{
		return false;
	}
	iVar0 = func_48(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_221("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_222(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_132(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_223(iVar1);
				return true;
			}
			iVar3++;
		}
		func_223(iVar1);
	}
	return false;
}

bool func_155(int iParam0)
{
	if (!func_43(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_168(iParam0);
	switch (iVar0)
	{
		case -636562458:
		case 252325943:
		case 829857647:
		case 1216664798:
		case 1341188928:
			break;
		default:
			return false;
	}
	iVar1 = func_224(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_225(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_226(iParam0);
	iVar2 = func_225(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == &Global_17411.f_55.f_644.f_1354.f_5[iVar2];
}

int func_156(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	iVar0 = 0;
	if (!func_43(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_61(iParam0);
	if (iVar1 == 307971639 || (bParam1 && iVar1 == -427144552))
	{
		iVar2 = func_48(iParam0, 1);
		if (iVar2 != 0)
		{
			return get_ped_ammo_by_type(Global_34, iVar2);
		}
	}
	else if (iVar1 == -427144552)
	{
		return func_227(iParam0, 0);
	}
	if (func_139(iParam0, -455129387) != 0)
	{
		iVar0 = _0xe787f05dfc977bde(func_133(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_228(iParam0, bParam2) };
		if (!_0xb881ca836cc4b6d4(&Var3))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_133(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

int func_157(int iParam0)
{
	switch (iParam0)
	{
		case -59585102:
			return get_hash_key("KIT_POUCH_REMEDIES_MP");
		case 1018123892:
			return get_hash_key("KIT_POUCH_INGREDIENTS_MP");
		case 982182330:
			return get_hash_key("KIT_POUCH_MATERIALS_MP");
		case -1406390556:
			return get_hash_key("KIT_POUCH_VALUABLES_MP");
		case -1455768246:
			return get_hash_key("KIT_POUCH_KIT_MP");
		case -921879912:
			return get_hash_key("KIT_POUCH_PROVISIONS_MP");
	}
	return 0;
}

bool func_158(int iParam0, int iParam1)
{
	return (Global_1904651->f_33[iParam0]->f_2 && iParam1) != 0;
}

void func_159(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (&uParam0->f_1[iVar1] == iParam1)
		{
			return;
		}
		switch (iParam1)
		{
			case 291123060:
			case 617531372:
				if (&uParam0->f_1[iVar1] == 617531372 || &uParam0->f_1[iVar1] == 291123060)
				{
					bVar0 = true;
				}
				break;
			case 1356624740:
			case 1884295263:
				if (&uParam0->f_1[iVar1] == 1356624740 || &uParam0->f_1[iVar1] == 1884295263)
				{
					bVar0 = true;
				}
				break;
			case -1850666435:
			case 1551239286:
			case 1937393363:
				if ((&uParam0->f_1[iVar1] == 1551239286 || &uParam0->f_1[iVar1] == -1850666435) || &uParam0->f_1[iVar1] == 1937393363)
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			uParam0->f_1[iVar1] = iParam1;
			return;
		}
		iVar1++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

int func_160(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_229(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_3.f_1 = 10;
	Var1 = iParam3;
	Var1.f_3 = { *uParam1 };
	Var1.f_2 = iParam4;
	func_230(uParam2, iParam0, Var1);
	return 1;
}

struct<2> func_161(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

char* func_162(int iParam0)
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

int func_163(int iParam0)
{
	if (!func_231(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

var func_164(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_232(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_165()
{
	return !&Global_1913504;
}

void func_166(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	iVar0 = 0;
	while (iVar0 < Global_1913504->f_3)
	{
		if ((((&Global_1913504->f_4[iVar0] == iParam0 && Global_1913504->f_4[iVar0]->f_2 == bParam2) && Global_1913504->f_4[iVar0]->f_3 == iParam3) && Global_1913504->f_4[iVar0]->f_4 == bParam4) && Global_1913504->f_4[iVar0]->f_5 == bParam5)
		{
			Global_1913504->f_4[iVar0]->f_1 = (Global_1913504->f_4[iVar0]->f_1 + iParam1);
			return;
		}
		iVar0++;
	}
	if (Global_1913504->f_3 < 19)
	{
		Global_1913504->f_4[Global_1913504->f_3] = iParam0;
		Global_1913504->f_4[Global_1913504->f_3]->f_1 = iParam1;
		Global_1913504->f_4[Global_1913504->f_3]->f_2 = bParam2;
		Global_1913504->f_4[Global_1913504->f_3]->f_3 = iParam3;
		Global_1913504->f_4[Global_1913504->f_3]->f_4 = bParam4;
		Global_1913504->f_4[Global_1913504->f_3]->f_5 = bParam5;
		Global_1913504->f_3++;
	}
}

char* func_167(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_168(int iParam0)
{
	if (!func_43(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_169(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_170(int iParam0)
{
	if (func_62(iParam0, -1995062316))
	{
		return "collectible_arrowheads";
	}
	if (func_62(iParam0, 1239889275))
	{
		return "collectible_liquor_bottles";
	}
	if (func_62(iParam0, 143267379))
	{
		return "collectible_coins";
	}
	if (func_62(iParam0, -944041124))
	{
		return "colectible_heirlooms";
	}
	if (func_62(iParam0, 1562621600))
	{
		return "collectible_jewelry";
	}
	if (func_62(iParam0, -149719013))
	{
		return "collectible_bird_eggs";
	}
	if (func_62(iParam0, 1940829793))
	{
		return "collectible_tarot_cards";
	}
	if (func_62(iParam0, 781094263))
	{
		return "collectible_flowers";
	}
	if (((func_62(iParam0, -352095726) || func_62(iParam0, -2014783736)) || func_62(iParam0, -545064757)) || func_62(iParam0, 679186220))
	{
		return "collectible_found_fossil";
	}
	return "";
}

bool func_171(int iParam0)
{
	if (func_62(iParam0, -189374246))
	{
		if (((func_233(iParam0, -1305775593) || func_233(iParam0, 1384151091)) || func_233(iParam0, 2075388272)) || func_233(iParam0, -1738780413))
		{
			return true;
		}
	}
	if (func_62(iParam0, -753854379) || func_62(iParam0, 173360570))
	{
		return true;
	}
	return false;
}

bool func_172(int iParam0)
{
	switch (iParam0)
	{
		case -1696039442:
		case 688466329:
		case 759802290:
			return false;
		default:
			break;
	}
	return true;
}

int func_173(int iParam0)
{
	if (!func_43(iParam0, 0))
	{
		return 0;
	}
	Var0.f_2 = 5;
	Var0.f_18 = 8;
	if (_item_database_fillout_ui_data(iParam0, &Var0))
	{
		iVar35 = 0;
		while (iVar35 < 8)
		{
			if (Var0.f_18[iVar35]->f_1 == 14460646)
			{
				if (&Var0.f_18[iVar35] != 0)
				{
					return &(Var0.f_18[iVar35]);
				}
			}
			iVar35++;
		}
	}
	return 0;
}

int func_174(int iParam0)
{
	iVar0 = func_234(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_235(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
	if (func_236(Var1, &iVar11, &iVar12, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar12)
		{
			if (_0x8750f69a720c2e41(iVar11, iVar13, &iVar14) && func_237(iVar14))
			{
				func_238(iVar11);
				return iVar14;
			}
			iVar13++;
		}
		func_238(iVar11);
	}
	return 0;
}

bool func_175(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (_item_database_does_item_have_tag(iParam0, iParam1, -949239683))
	{
		return true;
	}
	return false;
}

int func_176(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_43(iParam0, 0) && !func_191(func_123(iParam0), 2))
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

char* func_177(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

int func_178(int iParam0, int iParam1)
{
	iVar0 = func_239(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	return iVar0;
}

bool func_179(int iParam0, char* sParam1)
{
	if (!func_43(iParam0, 0))
	{
		return false;
	}
	StringCopy(sParam1, func_240(iParam0), 128);
	iVar0 = get_length_of_literal_string(sParam1);
	if (!func_241(iParam0))
	{
		return false;
	}
	StringCopy(&cVar1, func_242(iParam0), 128);
	if (is_string_null_or_empty(&cVar1))
	{
		return false;
	}
	StringConCat(&cVar1, " - ", 128);
	iVar0 = (iVar0 + get_length_of_literal_string(&cVar1));
	StringConCat(&cVar1, sParam1, 128);
	if (iVar0 >= 127)
	{
		return false;
	}
	*sParam1 = { cVar1 };
	return true;
}

char* func_180(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

char* func_181(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "LITERAL_STRING", sParam0);
	}
	return func_177(_create_var_string(10, "LITERAL_STRING", sParam0), iParam1);
}

bool func_182()
{
	return &Global_3145858 != 371211549;
}

int func_183(int iParam0)
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

var func_184(int iParam0, int iParam1, int iParam2, int iParam3)
{
	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = iParam1;
	Var0.f_12[0] = iParam2;
	iVar23 = 13;
	return _0xa88e215ceb0435c0(iParam0, &Var0, iParam3, iVar23, 2, 0);
}

struct<4> func_185(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_133(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_136(1328661203, func_243(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_136(1328661203, func_243(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_136(1328661203, func_243(), -1591664384, bParam0);
}

struct<4> func_186(bool bParam0)
{
	iVar0 = func_133(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_4)))
		{
			Global_1293346->f_4 = { func_136(923904168, func_185(bParam0), -740156546, bParam0) };
		}
		return Global_1293346->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_16)))
		{
			Global_1293346->f_16 = { func_136(923904168, func_185(bParam0), -740156546, 0) };
		}
		return Global_1293346->f_16;
	}
	return func_136(923904168, func_185(bParam0), -740156546, 0);
}

bool func_187(int iParam0, bool bParam1)
{
	if (func_168(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_244();
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_188(bool bParam0)
{
	iVar0 = func_133(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_8)))
		{
			Global_1293346->f_8 = { func_136(271701509, func_185(bParam0), 12999093, 0) };
		}
		return Global_1293346->f_8;
	}
	return func_136(271701509, func_185(bParam0), 12999093, 0);
}

bool func_189(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_168(iParam0);
	if (iVar1 == -1015256479)
	{
		return false;
	}
	iVar3 = _item_database_get_fits_slot_count(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (_item_database_get_fits_slot_info(iVar1, iVar2, &iVar0))
		{
			if (func_245(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_190(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_246(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

bool func_191(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(iParam0, iParam1);
}

int func_192(int iParam0)
{
	if (!func_43(*iParam0, 0))
	{
		return 0;
	}
	if (!func_247(*iParam0))
	{
		return 0;
	}
	switch (*iParam0)
	{
		case -1073808995:
			*iParam0 = -1753819339;
			break;
		case 1903483453:
			*iParam0 = -1527293029;
			break;
		case -541584777:
			*iParam0 = 206762213;
			break;
		case 998010398:
			*iParam0 = -324053813;
			break;
		case -1424823393:
			*iParam0 = -885810591;
			break;
		default:
			return 0;
	}
	return 1;
}

int func_193(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_43(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_139(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_136(iParam0, Param1, iParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_133(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_133(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

bool func_194(int iParam0, int iParam1)
{
	iVar0 = get_script_task_status(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

void func_195(bool bParam0)
{
	if (!does_entity_exist(Global_34))
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

void func_196(int iParam0)
{
	if (!_databinding_is_data_id_valid(Global_1956200->f_5.f_7))
	{
		return;
	}
	if (_databinding_get_array_count(Global_1956200->f_5.f_7) > iParam0)
	{
		iVar0 = _databinding_get_item_context_by_index(Global_1956200->f_5.f_7, iParam0);
		if (iVar0 == &Global_1956200->f_5.f_14[iParam0])
		{
			return;
		}
	}
	_databinding_insert_ui_item_to_list_from_context_string_alias(Global_1956200->f_5.f_7, iParam0, "pause_info_panel_list", &(Global_1956200->f_5.f_14[iParam0]));
}

void func_197(bool bParam0)
{
	if (!does_entity_exist(Global_34))
	{
		return;
	}
	if (is_entity_dead(Global_34) || is_ped_injured(Global_34))
	{
	}
	set_ped_config_flag(Global_34, 440, !bParam0);
}

void func_198(bool bParam0)
{
	if (!does_entity_exist(Global_34))
	{
		return;
	}
	if (is_entity_dead(Global_34) || is_ped_injured(Global_34))
	{
	}
	set_ped_config_flag(Global_34, 439, !bParam0);
}

void func_199(bool bParam0)
{
	if (!does_entity_exist(Global_34))
	{
		return;
	}
	if (is_entity_dead(Global_34) || is_ped_injured(Global_34))
	{
	}
	set_ped_config_flag(Global_34, 438, !bParam0);
}

void func_200(bool bParam0)
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

void func_201(bool bParam0)
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

void func_202(bool bParam0)
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

bool func_203()
{
	return true;
	if (Global_1572887->f_13 == 0)
	{
		return true;
	}
	return Global_39.f_1;
}

var func_204(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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
	Var13.f_7 = 1;
	uVar21 = _show_advanced_notification(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

int func_205(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	if (_0xfbe782b3165ac8ec(iParam0))
	{
		return 1;
	}
	if (bParam7)
	{
		bVar0 = (_0xd6f6acf4392187fb(_0x901e0dc25080c8b9(player_id())) && _0x0f99f6436528a089(_0x901e0dc25080c8b9(player_id())));
		bParam7 = bVar0;
	}
	_0xc08aff658b2e51da(&iVar1);
	if (iVar1 != 0)
	{
		func_248(iParam2, -372840566);
	}
	if (!bParam7)
	{
		if (!_0x64a36ba85ce01a81(&uVar2, &(uParam3->f_1), &(iParam2->f_1), uParam1))
		{
			return 0;
		}
	}
	else if (!_0x7a8e8df782b47eb0(&uVar2, &(iParam2->f_1), uParam1))
	{
		return 0;
	}
	Var3.f_1 = 11;
	Var3.f_16 = 255;
	Var3.f_13 = iParam4;
	Var3.f_16 = iParam5;
	Var3.f_14 = iParam6;
	Var3 = { *iParam2 };
	func_249(uParam1, iParam0, Var3);
	return 1;
}

bool func_206(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_133(0);
	*uParam1 = { func_136(iParam0, func_186(0), iParam3, 0) };
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

bool func_207(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

int func_208(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_250(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_252(func_251(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_253(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_209(int iParam0, struct<17> Param1)
{
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346->f_20)
	{
		if (&Global_1293346->f_20.f_1[iVar0] == iParam0)
		{
			if (Global_1293346->f_20.f_1[iVar0]->f_1 == 1 || Global_1293346->f_20.f_1[iVar0]->f_1 == 5)
			{
				Global_1293346->f_20.f_1[iVar0]->f_4 = { Param1 };
			}
			return;
		}
		iVar0++;
	}
}

int func_210(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_211()
{
	return &Global_1902818;
}

void func_212(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_254(*iParam0);
	iVar1 = func_255(*iParam0);
	iVar2 = func_256(*iParam0);
	iVar3 = func_257(*iParam0);
	iVar4 = func_258(*iParam0);
	iVar5 = func_259(*iParam0);
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
	iVar6 = func_260(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_260(iVar1, iVar0);
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
	func_261(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_213(int iParam0, int iParam1)
{
	return is_bit_set(&(Global_17411.f_2565[iParam0]), iParam1);
}

bool func_214(int iParam0)
{
	if (func_158(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_215(int iParam0)
{
	if (Global_1904651->f_33[iParam0]->f_2 & 98304 == 0)
	{
		return false;
	}
	iVar1 = get_cloud_time_as_int();
	iVar0 = 0;
	while (iVar0 < Global_39.f_3534)
	{
		if (Global_39.f_3534[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (Global_1904651->f_33[iParam0]->f_2 & 131072 != 0)
			{
				iVar3 = 2;
			}
			if (Global_1904651->f_33[iParam0]->f_2 & 524288 != 0)
			{
				iVar3 = 5;
			}
			iVar2 = (&Global_39.f_3534[iVar0] - iVar1);
			if (Global_39.f_3534[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && Global_1904651->f_33[iParam0]->f_2 & 32768 != 0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_216(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_217()
{
	if (!func_262())
	{
		return false;
	}
	return Global_1904651->f_8684;
}

void func_218(int iParam0, int iParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_263())
	{
		Global_1913504->f_125 = get_game_timer();
		Global_1913504->f_126 = iParam1;
	}
	Global_1913504->f_127 = (Global_1913504->f_127 + iParam0);
}

bool func_219()
{
	return _unlock_is_unlocked(-121456797);
}

bool func_220()
{
	return is_dlc_present(-2112896652);
}

bool func_221(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_133(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_222(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_223(int iParam0)
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

int func_224(int iParam0)
{
	switch (iParam0)
	{
		case -577270367:
			return 241235545;
		case 194818087:
			return 1827902148;
		case -845885815:
			return 1301555144;
		case -1869018428:
			return -2056583192;
		case 1710247623:
			return 1015239729;
		case 1964684696:
			return -340627321;
		case -2087489409:
			return -875805376;
		case -860557048:
			return -768760704;
		case -28107610:
			return -2118203104;
		case -896045342:
			return 1285634184;
		case -643819742:
			return -559080197;
		case -1504407916:
			return -1180698265;
		case -1386156083:
			return -487028314;
		case 1687431937:
			return -1811760631;
		case 1613216286:
			return 1858448324;
		default:
			break;
	}
	return 0;
}

int func_225(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if ((*uParam0)[iVar0]->f_1 == -1)
		{
		}
		else
		{
			if ((*uParam0)[iVar0]->f_16 == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_226(int iParam0)
{
	iVar0 = func_168(iParam0);
	switch (iVar0)
	{
		case 1341188928:
			return -2056583192;
		case 1216664798:
			return 1015239729;
		case 829857647:
			return -340627321;
		case -636562458:
			return -875805376;
		case 252325943:
			return -768760704;
		default:
			break;
	}
	return 0;
}

int func_227(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_264(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_265(&Var0, func_186(0));
	}
	if (!func_266(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_223(iVar14);
	return uVar15;
}

struct<4> func_228(int iParam0, bool bParam1)
{
	Var0 = { func_117(iParam0, bParam1, 0) };
	return func_136(iParam0, Var0, Var0.f_4, bParam1);
}

void func_229(var uParam0)
{
	func_159(uParam0, 143479330);
	if (func_267() == 2026485318)
	{
		func_159(uParam0, 617531372);
	}
	else
	{
		func_159(uParam0, 291123060);
	}
}

void func_230(var uParam0, int iParam1, struct<15> Param2)
{
	if (!func_268(uParam0))
	{
		return;
	}
	if (Global_1293346->f_2538 < 20)
	{
		Global_1293346->f_2538++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*Global_1293346->f_2538.f_1[iVar0] = { *(Global_1293346->f_2538.f_1[iVar0 + 1]) };
			iVar0++;
		}
	}
	Var1.f_7.f_3.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	*(Global_1293346->f_2538.f_1[(Global_1293346->f_2538 - 1)]) = { Var1 };
}

bool func_231(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_232(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

int func_233(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (_item_database_does_item_have_tag(iParam0, iParam1, 1224357681))
	{
		return 1;
	}
	return 0;
}

int func_234(int iParam0)
{
	if (!func_43(iParam0, 0))
	{
		return 0;
	}
	iVar6 = _0x8870895ba5ed9385(iParam0, -442898163, &uVar0);
	if (iVar6 > 0)
	{
		return &(uVar0[0]);
	}
	return 0;
}

struct<10> func_235(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_236(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = _item_database_create_item_collection(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_237(int iParam0)
{
	if (!func_43(iParam0, 0))
	{
	}
	if (func_62(iParam0, -393037696))
	{
		return 1;
	}
	return 0;
}

int func_238(int iParam0)
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

int func_239(int iParam0, int iParam1)
{
	iVar41 = 0;
	if (_item_database_fillout_tag_data(iParam0, &Var0, &iVar42, 20))
	{
		iVar43 = 0;
		while (iVar43 < iVar42)
		{
			if (Var0[iVar43]->f_1 == iParam1)
			{
				iVar41 = &Var0[iVar43];
				return iVar41;
			}
			iVar43++;
		}
	}
	return 0;
}

char* func_240(int iParam0)
{
	if (!func_43(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_88(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return _get_label_text_by_hash(iVar0);
}

bool func_241(int iParam0)
{
	if (func_168(iParam0) == -126813555 || func_168(iParam0) == 1946043663)
	{
		return true;
	}
	return false;
}

char* func_242(int iParam0)
{
	if (!func_43(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_173(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return _get_label_text_by_hash(iVar0);
}

struct<4> func_243()
{
	return Var0;
}

bool func_244()
{
	return (func_119(-1185145312, 0, 0, 0) > 0 && func_269(func_136(889965687, func_185(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

bool func_245(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 487172188)
	{
		if (_0xaa29a5f13b2c20b2(iParam1, -455129387) == -1925887917)
		{
			return false;
		}
	}
	return _item_database_can_equip_item_on_category(iParam0, iParam1, iParam2);
}

bool func_246(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_133(bParam2);
	}
	if (!_0x9700e8efc4ab9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

bool func_247(int iParam0)
{
	return func_62(iParam0, 1279601681);
}

void func_248(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	if (RDR_LOCAL_LOAD_S >= 11)
	{
		return;
	}
}

void func_249(var uParam0, int iParam1, struct<17> Param2)
{
	if (!func_268(uParam0))
	{
		return;
	}
	if (Global_1293346->f_2011 < 20)
	{
		Global_1293346->f_2011++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*Global_1293346->f_2011.f_1[iVar0] = { *(Global_1293346->f_2011.f_1[iVar0 + 1]) };
			iVar0++;
		}
	}
	Var1.f_7.f_1 = 11;
	Var1.f_7.f_16 = 255;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_7 = { Param2 };
	Var1.f_6 = 1;
	*(Global_1293346->f_2011.f_1[(Global_1293346->f_2011 - 1)]) = { Var1 };
}

bool func_250(int iParam0, var uParam1)
{
	uVar0 = _0x6c9f12700bce69f4(iParam0, uParam1);
	if (iParam0 == 1702063850)
	{
		if ((func_270(uParam1->f_8, iParam0, uVar0, 2048) || func_270(uParam1->f_8, iParam0, uVar0, 32768)) || func_270(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_270(uParam1->f_8, iParam0, uVar0, 4) || func_270(uParam1->f_8, iParam0, uVar0, 256)) || func_270(uParam1->f_8, iParam0, uVar0, 65536)) || func_270(uParam1->f_8, iParam0, uVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -1406934746)
	{
		if (((func_270(uParam1->f_8, iParam0, uVar0, 1) || func_270(uParam1->f_8, iParam0, uVar0, 8)) || func_270(uParam1->f_8, iParam0, uVar0, 65536)) || func_270(uParam1->f_8, iParam0, uVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -1318406457)
	{
		if (((func_270(uParam1->f_8, iParam0, uVar0, 1) || func_270(uParam1->f_8, iParam0, uVar0, 16)) || func_270(uParam1->f_8, iParam0, uVar0, 2)) || func_270(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_270(uParam1->f_8, iParam0, uVar0, 8) || func_270(uParam1->f_8, iParam0, uVar0, 4096)) || func_270(uParam1->f_8, iParam0, uVar0, 256)) || func_270(uParam1->f_8, iParam0, uVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_251(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 16, uParam2, 0);
}

int func_252(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (_cashinventory_transaction_checkout(iParam1))
		{
			func_271(iParam1, 1, 0, 0);
			return iParam1;
		}
		_cashinventory_transaction_delete(iParam1);
	}
	else if (_cashinventory_transaction_get_num_of_items(iParam1) == 0)
	{
		_cashinventory_transaction_delete(iParam1);
	}
	func_271(iParam1, 2, 0, 0);
	return -1;
}

int func_253(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_271(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

int func_254(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_41(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_255(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_256(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_257(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_258(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_259(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_260(int iParam0, int iParam1)
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

void func_261(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_272(iParam0, iParam6);
	func_273(iParam0, iParam5);
	func_274(iParam0, iParam4);
	func_275(iParam0, iParam3);
	func_276(iParam0, iParam2);
	func_277(iParam0, iParam1);
}

bool func_262()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

bool func_263()
{
	return Global_1913504->f_127 == 0;
}

struct<14> func_264(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
	if (iParam6 != 0)
	{
		Var0.f_8 = iParam6;
	}
	return Var0;
}

void func_265(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_266(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_133(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_267()
{
	return Global_1952637->f_1;
}

bool func_268(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_269(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_278(&uParam0, iParam4, bParam5, iParam6);
}

int func_270(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (func_279(uParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_271(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346->f_20)
	{
		if (&Global_1293346->f_20.f_1[iVar0] == iParam0)
		{
			if (Global_1293346->f_20.f_1[iVar0]->f_1 == iParam1)
			{
			}
			else
			{
				Global_1293346->f_20.f_1[iVar0]->f_1 = iParam1;
			}
			if (iParam2 != 0 && iParam3 != 0)
			{
				Global_1293346->f_20.f_1[iVar0]->f_2 = iParam2;
				Global_1293346->f_20.f_1[iVar0]->f_3 = iParam3;
			}
			return;
		}
		iVar0++;
	}
	func_280(iParam0, iParam1, iParam2, iParam3);
}

void func_272(int iParam0, int iParam1)
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

void func_273(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_274(int iParam0, int iParam1)
{
	iVar0 = func_255(*iParam0);
	iVar1 = func_254(*iParam0);
	if (iParam1 < 1 || iParam1 > func_260(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_275(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_276(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_277(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

int func_278(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (func_281(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_279(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_280(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1293346->f_20 < 20)
	{
		Global_1293346->f_20++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*Global_1293346->f_20.f_1[iVar0] = { *(Global_1293346->f_20.f_1[iVar0 + 1]) };
			iVar0++;
		}
	}
	func_282(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)]);
	Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)] = iParam0;
	(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_2 = iParam2;
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_3 = iParam3;
	}
}

bool func_281(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_133(bParam3);
	}
	if (!_0x22e590f108289a9d(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_246(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

void func_282(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_283(&(uParam0->f_4));
}

void func_283(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = -142743235;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	uParam0->f_8.f_3 = 0;
	StringCopy(&(uParam0->f_12), "", 32);
	uParam0->f_16 = -1;
}

