void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	vLocal_583 = { -3552.47f, -3009.89f, 10.82f };
	vLocal_586 = { -3552.427f, -3009.681f, 10.798f };
	vLocal_589 = { 0f, 0f, 102.75f };
	iLocal_1102 = -1;
	iLocal_1128 = 1;
	func_1();
	if (has_force_cleanup_occurred(523))
	{
		iLocal_1130 = 1;
	}
	while (true)
	{
		func_3(bVar1128, 324, 0);
		if (bVar1128)
		{
			wait(0);
		}
		else
		{
			if (iLocal_15 < 5)
			{
				if (func_4())
				{
					func_5(5);
				}
			}
			switch (iLocal_15)
			{
				case 0:
					if (func_6(5) != 3)
					{
						if (func_7(ScriptParam_0))
						{
							func_5(1);
						}
					}
					else
					{
						func_2();
					}
					break;
				case 1:
					if (func_8())
					{
						func_5(2);
					}
					break;
				case 2:
					if (func_9())
					{
						func_10(1894337720, 0, 0, 0, 1, 0, 1, 0);
						func_10(120764251, 0, 0, 0, 1, 0, 1, 0);
						func_5(3);
					}
					break;
				case 3:
					if (func_11())
					{
						func_5(4);
					}
					break;
				case 4:
					break;
				case 5:
					func_2();
					break;
			}
			wait(0);
		}
	}
}

void func_1()
{
}

void func_2()
{
	if (_does_anim_scene_exist(iVar457))
	{
		_delete_anim_scene(iVar457);
		return;
	}
	if (iVar1097 != 0)
	{
		if (_0x1ff441d7954f8709(iVar1097))
		{
			_0xd2b9c78537ed5759(iVar1097);
			return;
		}
		else
		{
			_0xd2b9c78537ed5759(iVar1097);
		}
	}
	if (is_screen_faded_out() || (!Local_39.f_48 && !Local_39.f_45))
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (does_entity_exist(&(uLocal_569[iVar0])))
			{
				func_12(uLocal_569[iVar0]);
			}
			func_13(&(uLocal_569[iVar0]), 0, -1082130432, -1082130432, -1, -1, -1, -1082130432);
			iVar0++;
		}
	}
	func_14(&Local_39, &uLocal_569, &iLocal_574, 0, -1, 0, 0, 1, 0, 1);
	if (does_blip_exist(iVar577))
	{
		remove_blip(&uLocal_579);
	}
	_0x411189e51b8020ba(Global_35, "Stealth");
	if (_is_imap_active(25328693))
	{
		_remove_imap(25328693);
	}
	if (is_interior_entity_set_active(func_15(), "ven_int_lights_ON"))
	{
		deactivate_interior_entity_set(func_15(), "ven_int_lights_ON", true);
	}
	if (is_interior_entity_set_active(func_15(), "ven_int_lights_OFF"))
	{
		deactivate_interior_entity_set(func_15(), "ven_int_lights_OFF", true);
	}
	if (is_interior_entity_set_active(func_15(), "ven_int_chair"))
	{
		deactivate_interior_entity_set(func_15(), "ven_int_chair", true);
	}
	if (!is_string_null_or_empty(sVar590))
	{
		remove_waypoint_recording(sVar590);
	}
	terminate_this_thread();
}

void func_3(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!func_16(bParam2) || is_screen_faded_out())
		{
			Call_Loc(iParam1);
		}
	}
}

bool func_4()
{
	if (func_17(vLocal_583, 1) >= 200f)
	{
		return true;
	}
	return false;
}

void func_5(int iParam0)
{
	iLocal_15 = iParam0;
}

int func_6(int iParam0)
{
	return Global_40.f_9571[iParam0]->f_9;
}

bool func_7(struct<7> Param0, var uParam7, var uParam8, var uParam9)
{
	iLocal_14 = Param0;
	vLocal_583 = { Param0.f_6 };
	return true;
}

bool func_8()
{
	switch (iLocal_16)
	{
		case 0:
			iVar0 = func_15();
			if (iVar0 != 0)
			{
				func_18();
				func_19();
				func_20();
				func_21();
				func_22();
				func_23();
				func_24();
				_0xed9582b3da8f02b4(7);
				iLocal_16 = 1;
			}
			break;
		case 1:
			if (!func_25(&Local_233))
			{
				return false;
			}
			if (!func_26(&Local_362))
			{
				return false;
			}
			if (!is_string_null_or_empty(sVar590))
			{
				if (!get_is_waypoint_recording_loaded(sVar590))
				{
					return false;
				}
			}
			if (!func_27(&uLocal_488))
			{
				return false;
			}
			if (!_0x5e420ff293ee5472())
			{
				return false;
			}
			iLocal_16 = 2;
			break;
		case 2:
			return true;
	}
	return false;
}

bool func_9()
{
	switch (iLocal_17)
	{
		case 0:
			if (func_28(vLocal_583, 0f, &Local_233, &uLocal_569, 1, 0, -1, 1))
			{
				if (func_29())
				{
					iLocal_17 = 1;
				}
			}
			break;
		case 1:
			func_30();
			func_31();
			func_32();
			iLocal_17 = 2;
			break;
		case 2:
			if (!_is_anim_scene_loaded(iVar457, true, false))
			{
				return false;
			}
			return true;
	}
	return false;
}

void func_10(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_33(iParam0, 0, 0);
	if (func_34(iParam0))
	{
		door_system_set_open_ratio(iParam0, iParam2, iParam6);
		if (fParam5 > 0f)
		{
			door_system_set_automatic_rate(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_35(iParam0, iParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_36(iParam0, 1);
			}
			else
			{
				func_37(iParam0, 1);
			}
		}
		else
		{
			func_38(iParam0, 1);
		}
		if (bParam7)
		{
			_0x276aaf0f1c7f2494(iParam0, 1);
		}
	}
	else if (func_39())
	{
	}
	else if (network_is_in_session())
	{
	}
}

bool func_11()
{
	switch (iLocal_14)
	{
		case 0:
			func_40();
			break;
	}
	return false;
}

void func_12(var uParam0)
{
	set_ped_config_flag(*uParam0, 6, false);
	set_ped_config_flag(*uParam0, 4, false);
	set_ped_config_flag(*uParam0, 494, true);
}

void func_13(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, float fParam7)
{
	fVar0 = func_41(iParam0, Global_36, 1);
	switch (iParam1)
	{
		case 1:
			fParam2 = 100f;
			fParam3 = 200f;
			iParam4 = 3000;
			iParam5 = 1000;
			iParam6 = 4000;
			break;
		case 2:
			fParam2 = 60f;
			fParam3 = 120f;
			iParam4 = 1000;
			iParam5 = 1;
			iParam6 = 1000;
			break;
		case 0:
			fParam2 = 75f;
			fParam3 = 140f;
			iParam4 = 1000;
			iParam5 = 1;
			iParam6 = 1500;
			break;
		case 3:
			if (fParam2 < 0f)
			{
			}
			if (fParam3 < 0f)
			{
			}
			if (iParam4 < 0)
			{
			}
			if (iParam5 < 0)
			{
			}
			break;
	}
	if (fParam2 >= fParam3)
	{
	}
	_0x39a2fc5af55a52b1(iParam0, iParam6);
	if (fParam7 > 0f)
	{
		_0x7c08e7cb8d951b70(iParam0, fParam7);
	}
	_0x36e4b61dc56de77c(iParam0, fParam2, fParam3, iParam4, iParam5);
}

void func_14(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (are_strings_equal(_0xf81c53561d15f330(), func_42(uParam0->f_3)))
	{
		_0x1096603b519c905f("");
	}
	if (uParam0->f_48)
	{
		stop_audio_scene("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			func_43(uParam0->f_3, 524288);
		}
	}
	if (func_44(player_ped_id(), 0, 1))
	{
		iVar1 = get_mount(Global_35);
		set_ped_config_flag(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			bVar3 = (bParam8 && decor_exist_on(uParam1[iVar0], "pedRoam_bInPedRoam"));
			if (func_44(uParam1[iVar0], 0, 0))
			{
				func_45(uParam1[iVar0], bVar3);
				if (func_46(uParam0, (*uParam1)[iVar0]))
				{
					func_12((*uParam1)[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (func_44(uParam1[iVar0], 0, 1))
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
							func_48(uParam1[iVar0], 1073741824, func_47(iVar0 < iVar2, &(uParam0->f_98[iVar0]), -1f), iVar1, 0);
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
		func_49(uParam0);
	}
	func_50(uParam0);
	if (!uParam0->f_186)
	{
		func_51(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = func_52(uParam0->f_3, uParam0->f_185);
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
		func_53(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

int func_15()
{
	iVar0 = get_interior_at_coords(-3552.42f, -3010.03f, 10.82f);
	if (is_valid_interior(iVar0))
	{
		return iVar0;
	}
	return 0;
}

bool func_16(bool bParam0)
{
	iVar0 = get_cause_of_most_recent_force_cleanup();
	if (bParam0)
	{
		return true;
	}
	if (func_54(iVar0))
	{
		return false;
	}
	if (func_55(iVar0, 1) || func_55(iVar0, 2))
	{
		return true;
	}
	return false;
}

float func_17(vector3 vParam0, int iParam3)
{
	return func_41(Global_35, vParam0, iParam3);
}

void func_18()
{
	switch (iLocal_14)
	{
		case 0:
			Local_233[0]->f_1 = 424175505;
			StringCopy(&(Local_233[0]->f_23), "1022_G_M_M_UniBanditos_01_HISPANIC_04", 64);
			Local_233[0]->f_3 = -1636871046;
			Local_233[1]->f_1 = 424175505;
			StringCopy(&(Local_233[1]->f_23), "1021_G_M_M_UniBanditos_01_HISPANIC_03", 64);
			Local_233[1]->f_3 = -1411265617;
			Local_233[2]->f_1 = 424175505;
			StringCopy(&(Local_233[2]->f_23), "1019_G_M_M_UniBanditos_01_HISPANIC_01", 64);
			Local_233[2]->f_3 = -366554319;
			Local_233[3]->f_1 = 1894002663;
			StringCopy(&(Local_233[3]->f_23), "GEBS_WOMAN", 64);
			Local_233[3]->f_3 = 812407015;
			Local_233[0]->f_12 = func_56(5, 0, 1);
			Local_233[1]->f_12 = func_56(5, 1, 1);
			Local_233[2]->f_12 = func_56(5, 2, 1);
			Local_233[0]->f_13 = 0;
			Local_233[1]->f_13 = 0;
			Local_233[2]->f_13 = 0;
			break;
	}
	func_57(&Local_233);
}

void func_19()
{
	switch (iLocal_14)
	{
		case 0:
			Local_233[0]->f_6 = { -3553.53f, -3011.71f, 10.81f };
			Local_233[0]->f_9 = 95.99f;
			Local_233[0]->f_15 = { -3534.9f, -3033.89f, 11.01f };
			Local_233[0]->f_18 = -85.37f;
			Local_233[1]->f_6 = { -3554.19f, -3010.97f, 10.81f };
			Local_233[1]->f_9 = 138.08f;
			Local_233[1]->f_15 = { -3535.32f, -3031.96f, 10.97f };
			Local_233[1]->f_18 = -70.49f;
			Local_233[2]->f_6 = { -3555.39f, -3010.93f, 10.81f };
			Local_233[2]->f_9 = -142.54f;
			Local_233[2]->f_15 = { -3535.36f, -3030.59f, 10.95f };
			Local_233[2]->f_18 = -85.03f;
			Local_233[3]->f_6 = { -3554.96f, -3012.12f, 10.83f };
			Local_233[3]->f_9 = 11.26f;
			*Local_18[0] = { -3551.4f, -3007.1f, 12.5f };
			Local_18[0]->f_3 = _create_volume_box_with_custom_name(*Local_18[0], 0f, 0f, 11.558f, 2.3f, 0.5f, 1.6f, "WINDOW_0");
			*Local_18[1] = { 3556.8f, 3011.75f, 12.5f };
			Local_18[1]->f_3 = _create_volume_box_with_custom_name(*Local_18[1], 0f, 0f, -78f, 1.3f, 0.5f, 1.6f, "WINDOW_1");
			*Local_18[2] = { -3553.7f, 3012.4f, 12.5f };
			Local_18[2]->f_3 = _create_volume_box_with_custom_name(*Local_18[2], 0f, 0f, 12f, 1.3f, 0.5f, 1.6f, "WINDOW_2");
			*Local_18[3] = { 3549.85f, -3011.6f, 12.5f };
			Local_18[3]->f_3 = _create_volume_box_with_custom_name(*Local_18[3], 0f, 0f, 12f, 1.3f, 0.5f, 1.6f, "WINDOW_3");
			break;
	}
}

void func_20()
{
	switch (iLocal_14)
	{
		case 0:
			iVar0 = func_15();
			if (_is_interior_entity_set_valid(iVar0, "ven_int_chair"))
			{
				if (!is_interior_entity_set_active(iVar0, "ven_int_chair"))
				{
					activate_interior_entity_set(iVar0, "ven_int_chair", 0);
				}
			}
			iVar1 = _create_volume_box_with_custom_name(-3553.73f, -3009.92f, 11f, 0f, 0f, 15f, 0.6f, 0.6f, 1f, "Chair navmesh block");
			_0x19c7567d2f2287d6(iVar1, 7);
			Local_362[4]->f_7 = 531516298;
			*Local_362[4] = { -3551.59f, -3009.85f, 11.58f };
			Local_362[4]->f_3 = 0f;
			func_58(&(Local_362[4]->f_11), 8);
			func_58(&(Local_362[4]->f_11), 128);
			Local_362[5]->f_7 = 531516298;
			*Local_362[5] = { -3551.59f, -3009.85f, 11.58f };
			Local_362[5]->f_3 = 0f;
			func_58(&(Local_362[5]->f_11), 8);
			func_58(&(Local_362[5]->f_11), 128);
			Local_362[7]->f_7 = 531516298;
			*Local_362[7] = { -3551.8f, -3009.8f, 11.58f };
			Local_362[7]->f_3 = 0f;
			func_58(&(Local_362[7]->f_11), 8);
			func_58(&(Local_362[7]->f_11), 128);
			Local_362[0]->f_7 = -1971689092;
			*Local_362[0] = { -3551.59f, -3009.85f, 11.58f };
			Local_362[0]->f_3 = 0f;
			func_58(&(Local_362[0]->f_11), 8);
			func_58(&(Local_362[0]->f_11), 128);
			Local_362[1]->f_7 = -911874060;
			*Local_362[1] = { -3551.59f, -3009.85f, 11.58f };
			Local_362[1]->f_3 = 0f;
			func_58(&(Local_362[1]->f_11), 8);
			func_58(&(Local_362[1]->f_11), 128);
			Local_362[2]->f_7 = -911874060;
			*Local_362[2] = { -3551.59f, -3009.85f, 11.58f };
			Local_362[2]->f_3 = 0f;
			func_58(&(Local_362[2]->f_11), 8);
			func_58(&(Local_362[2]->f_11), 128);
			Local_362[3]->f_7 = -911874060;
			*Local_362[3] = { -3551.59f, -3009.85f, 11.58f };
			Local_362[3]->f_3 = 0f;
			func_58(&(Local_362[3]->f_11), 8);
			func_58(&(Local_362[3]->f_11), 128);
			Local_362[6]->f_7 = 1843407141;
			*Local_362[6] = { -3551.59f, -3009.85f, 11.58f };
			Local_362[6]->f_3 = 0f;
			func_58(&(Local_362[6]->f_11), 8);
			func_58(&(Local_362[6]->f_11), 128);
			_request_imap(25328693);
			break;
	}
	func_59(&Local_362);
}

void func_21()
{
	switch (iLocal_14)
	{
		case 0:
			sLocal_592 = "bandito_shack_woman_flee";
			request_waypoint_recording(sVar590);
			break;
	}
}

void func_22()
{
	Local_459.f_4 = "script@proc@gangencounters@dellobo@party@main";
}

void func_23()
{
	switch (iLocal_14)
	{
		case 0:
			Local_467[0] = "script_proc@gang_encounter@del_lobo@party";
			Local_467[0]->f_1 = "brkout_01_f_ped01";
			Local_467[1] = "script_proc@gang_encounter@del_lobo@party";
			Local_467[1]->f_1 = "brkout_01_f_ped03";
			Local_467[2] = "script_proc@gang_encounter@del_lobo@party";
			Local_467[2]->f_1 = "brkout_01_r_ped01";
			Local_467[3] = "script_proc@gang_encounter@del_lobo@party";
			Local_467[3]->f_1 = "brkout_01_r_ped03";
			Local_467[4] = "script_proc@gang_encounter@del_lobo@party";
			Local_467[4]->f_1 = "brkout_02_f_ped02";
			Local_467[5] = "script_proc@gang_encounter@del_lobo@party";
			Local_467[5]->f_1 = "brkout_02_f_ped01";
			Local_467[6] = "script_proc@gang_encounter@del_lobo@party";
			Local_467[6]->f_1 = "brkout_02_f_ped03";
			Local_467[7] = "script_proc@gang_encounter@del_lobo@party";
			Local_467[7]->f_1 = "brkout_02_r_ped02";
			Local_467[8] = "script_proc@gang_encounter@del_lobo@party";
			Local_467[8]->f_1 = "brkout_02_r_ped01";
			Local_467[9] = "script_proc@gang_encounter@del_lobo@party";
			Local_467[9]->f_1 = "brkout_02_r_ped03";
			func_60(&(Local_467[0]), &uLocal_488);
			break;
	}
}

void func_24()
{
	func_62(Local_639[2], "RE_INTER_ANTAGONIZE", func_61(88), 648122183, 0, 0, 0, 1, 0);
	func_62(Local_639[1], "RE_INTER_POS", func_61(89), -163964935, 0, 0, 0, 1, 0);
	func_63(Local_639[1], 1, 0);
	func_63(Local_639[2], 1, 0);
	func_62(Local_901[2], "RE_INTER_ANTAGONIZE", func_61(67), 648122183, 0, 0, 0, 1, 0);
	func_62(Local_901[1], "RE_INTER_DEFUSE", func_61(68), -163964935, 0, 0, 0, 1, 0);
	func_63(Local_901[1], 1, 0);
	func_63(Local_901[2], 1, 0);
	func_62(Local_974[2], "RE_INTER_ANTAGONIZE", func_61(73), 648122183, 0, 0, 0, 1, 0);
	func_62(Local_974[1], "RE_INTER_POS", func_61(72), -163964935, 0, 0, 0, 1, 0);
	func_62(Local_974[0], "INTERACT_ROB", func_61(76), -1616532217, 0, 0, 0, 1, 0);
	func_63(Local_974[1], 0, 0);
	func_63(Local_974[2], 0, 0);
	func_63(Local_974[0], 0, 0);
}

bool func_25(var uParam0)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_64((*uParam0)[iVar0]))
		{
			bVar1 = true;
		}
		iVar0++;
	}
	return !bVar1;
}

bool func_26(var uParam0)
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

bool func_27(var uParam0)
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

bool func_28(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, float fParam9)
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
		if (func_65() || !func_66((*iParam4)[iVar0], (*iParam5)[iVar0], vParam0, fParam3, iParam6, fParam9))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_29()
{
	switch (iLocal_14)
	{
		case 0:
			func_67(vLocal_583, &Local_362, 0, 0, 0, -1, 0);
			return true;
	}
	return false;
}

void func_30()
{
	_set_entity_coords_and_heading(&(uLocal_569[0]), Local_233[0]->f_6, Local_233[0]->f_9, true, false, true);
	_set_entity_coords_and_heading(&(uLocal_569[1]), Local_233[1]->f_6, Local_233[1]->f_9, true, false, true);
	_set_entity_coords_and_heading(&(uLocal_569[2]), Local_233[2]->f_6, Local_233[2]->f_9, true, false, true);
	_set_entity_coords_and_heading(&(uLocal_569[3]), Local_233[3]->f_6, Local_233[3]->f_9, true, false, true);
	_set_entity_coords_and_heading(Local_233[0]->f_11, Local_233[0]->f_15, Local_233[0]->f_18, true, false, true);
	_set_entity_coords_and_heading(Local_233[1]->f_11, Local_233[1]->f_15, Local_233[1]->f_18, true, false, true);
	_set_entity_coords_and_heading(Local_233[2]->f_11, Local_233[2]->f_15, Local_233[2]->f_18, true, false, true);
	func_68(&(uLocal_569[0]), &(Local_233[0]->f_23), 0);
	func_68(&(uLocal_569[1]), &(Local_233[1]->f_23), 0);
	func_68(&(uLocal_569[2]), &(Local_233[2]->f_23), 0);
	func_68(&(uLocal_569[3]), &(Local_233[3]->f_23), 0);
	_0x406ccf555b04fad3(&(uLocal_569[0]), 1, 1f);
	_0x406ccf555b04fad3(&(uLocal_569[1]), 1, 0.8f);
	_0x406ccf555b04fad3(&(uLocal_569[2]), 1, 0.5f);
	set_ped_combat_movement(&(uLocal_569[0]), 1);
	set_ped_combat_movement(&(uLocal_569[1]), 1);
	set_ped_combat_movement(&(uLocal_569[2]), 1);
	set_ped_combat_attributes(&(uLocal_569[0]), 5, true);
	set_ped_combat_attributes(&(uLocal_569[1]), 5, true);
	set_ped_combat_attributes(&(uLocal_569[2]), 5, true);
	set_ped_combat_attributes(&(uLocal_569[0]), 51, true);
	set_ped_combat_attributes(&(uLocal_569[0]), 17, false);
	set_ped_combat_attributes(&(uLocal_569[1]), 17, false);
	set_ped_combat_attributes(&(uLocal_569[2]), 17, false);
	set_ped_combat_attributes(&(uLocal_569[0]), 46, true);
	set_ped_combat_attributes(&(uLocal_569[1]), 46, true);
	set_ped_combat_attributes(&(uLocal_569[2]), 46, true);
	set_ped_combat_attributes(&(uLocal_569[0]), 57, false);
	set_ped_combat_attributes(&(uLocal_569[1]), 57, false);
	set_ped_combat_attributes(&(uLocal_569[2]), 57, false);
	_0x8acc0506743a8a5c(&(uLocal_569[0]), -1838134243, 1, 10f);
	_0x8acc0506743a8a5c(&(uLocal_569[1]), -1838134243, 1, 10f);
	_0x8acc0506743a8a5c(&(uLocal_569[2]), -1838134243, 1, 10f);
	_0x815c0074a1bc0d93(&(uLocal_569[0]), 2);
	_0x815c0074a1bc0d93(&(uLocal_569[1]), 2);
	_0x815c0074a1bc0d93(&(uLocal_569[2]), 2);
	set_ped_config_flag(&(uLocal_569[0]), 250, true);
	set_ped_combat_attributes(&(uLocal_569[1]), 0, true);
	_0x50aa09a0da64e73c(&(uLocal_569[1]), -3550.93f, -3011.46f, 10.81f, -3550.93f, -3011.46f, 10.81f);
	set_ped_accuracy(&(uLocal_569[0]), 50);
	set_ped_accuracy(&(uLocal_569[1]), 50);
	set_ped_accuracy(&(uLocal_569[2]), 50);
	set_ped_sphere_defensive_area(&(uLocal_569[0]), -3554.02f, -3019.19f, 10.67f, 3f, 1, 0, 0);
	set_ped_sphere_defensive_area(&(uLocal_569[1]), -3550.86f, -3010.68f, 10.89f, 1.5f, 1, 0, 0);
	set_ped_sphere_defensive_area(&(uLocal_569[2]), -3554.6f, -3013.89f, 10.84f, 1f, 1, 0, 0);
	remove_all_ped_weapons(&(uLocal_569[0]), true, true);
	remove_all_ped_weapons(&(uLocal_569[1]), true, true);
	remove_all_ped_weapons(&(uLocal_569[2]), true, true);
	func_70(&(uLocal_569[0]), func_69(268435456, 1056964608, 1065353216), 999, 0, 0, 1056964608, 1065353216, 0);
	func_70(&(uLocal_569[1]), func_69(268435456, 1056964608, 1065353216), 999, 0, 0, 1056964608, 1065353216, 0);
	func_70(&(uLocal_569[2]), func_69(268435456, 1056964608, 1065353216), 999, 0, 0, 1056964608, 1065353216, 0);
	set_ped_config_flag(&(uLocal_569[0]), 146, true);
	set_ped_config_flag(&(uLocal_569[1]), 146, true);
	set_ped_config_flag(&(uLocal_569[2]), 146, true);
	set_ped_config_flag(&(uLocal_569[3]), 146, true);
	set_ped_config_flag(&(uLocal_569[0]), 6, true);
	set_ped_config_flag(&(uLocal_569[1]), 6, true);
	set_ped_config_flag(&(uLocal_569[2]), 6, true);
	set_ped_config_flag(&(uLocal_569[3]), 6, true);
	set_ped_config_flag(&(uLocal_569[0]), 396, true);
	set_ped_config_flag(&(uLocal_569[1]), 396, true);
	set_ped_config_flag(&(uLocal_569[2]), 396, true);
	set_ped_config_flag(&(uLocal_569[3]), 406, true);
	set_ped_config_flag(&(uLocal_569[0]), 448, true);
	set_ped_config_flag(&(uLocal_569[1]), 448, true);
	set_ped_config_flag(&(uLocal_569[2]), 448, true);
	set_ped_relationship_group_hash(&(uLocal_569[0]), -401180987);
	set_ped_relationship_group_hash(&(uLocal_569[1]), -401180987);
	set_ped_relationship_group_hash(&(uLocal_569[2]), -401180987);
	set_entity_only_damaged_by_player(&(uLocal_569[0]), true);
	set_entity_only_damaged_by_player(&(uLocal_569[1]), true);
	set_entity_only_damaged_by_player(&(uLocal_569[2]), true);
	set_ped_config_flag(&(uLocal_569[0]), 96, true);
	set_ped_config_flag(&(uLocal_569[0]), 250, true);
	set_ped_config_flag(&(uLocal_569[1]), 96, true);
	set_ped_config_flag(&(uLocal_569[1]), 250, true);
	set_ped_config_flag(&(uLocal_569[2]), 96, true);
	set_ped_config_flag(&(uLocal_569[2]), 250, true);
	_0xf7ea250b9a919e03(-1638944626, &(uLocal_569[0]));
	_0xf7ea250b9a919e03(-1638944626, &(uLocal_569[1]));
	_0xf7ea250b9a919e03(-1638944626, &(uLocal_569[2]));
	_request_ped_emotional_preset(&(uLocal_569[0]), "TaskCombat_Panic");
	_request_ped_emotional_preset(&(uLocal_569[1]), "TaskCombat_Panic");
	_request_ped_emotional_preset(&(uLocal_569[2]), "TaskCombat_Panic");
	_0xf7ea250b9a919e03(-372548123, &(uLocal_569[1]));
	_0xf7ea250b9a919e03(-372548123, &(uLocal_569[2]));
	_request_ped_emotional_preset(&(uLocal_569[1]), "Default_Shocked");
	_request_ped_emotional_preset(&(uLocal_569[2]), "Default_Shocked");
	_0xf7ea250b9a919e03(-664314203, &(uLocal_569[3]));
	_request_ped_emotional_preset(&(uLocal_569[3]), "Default_Nervous");
	set_ped_hearing_range(&(uLocal_569[0]), 5f);
	_0x406ccf555b04fad3(&(uLocal_569[0]), 1, 1f);
	_0x406ccf555b04fad3(&(uLocal_569[1]), 1, 1f);
	_0x406ccf555b04fad3(&(uLocal_569[2]), 1, 1f);
}

void func_31()
{
	func_71(&(Local_39.f_5), 1);
	func_72(&(Local_39.f_5), 1);
	func_73(&(Local_39.f_5), 1);
	func_74(&(Local_39.f_5), 1);
	func_75(&(Local_39.f_5), 1);
	func_76(&(Local_39.f_5), 1);
	func_77(&(Local_39.f_5), 1);
	func_78(&(Local_39.f_5), 1);
	func_79(&(Local_39.f_5), 1);
	func_80(&(Local_39.f_5), 0);
	func_81(&(Local_39.f_5), 1);
	func_82(&(Local_39.f_5), 1);
}

void func_32()
{
	switch (iLocal_14)
	{
		case 0:
			Local_459 = _create_anim_scene(Local_459.f_4, 0, 0, false, true);
			set_anim_scene_origin(iVar457, vLocal_586, vLocal_589, 2);
			set_anim_scene_entity(iVar457, "fem", &(uLocal_569[3]), 0);
			set_anim_scene_entity(iVar457, "ped_01", &(uLocal_569[1]), 0);
			set_anim_scene_entity(iVar457, "ped_02", &(uLocal_569[0]), 0);
			set_anim_scene_entity(iVar457, "ped_03", &(uLocal_569[2]), 0);
			set_anim_scene_entity(iVar457, "CASH02", Local_362[4]->f_8, 0);
			set_anim_scene_entity(iVar457, "cash03", Local_362[5]->f_8, 0);
			set_anim_scene_entity(iVar457, "jd01", Local_362[0]->f_8, 0);
			set_anim_scene_entity(iVar457, "shot01", Local_362[1]->f_8, 0);
			set_anim_scene_entity(iVar457, "shot02", Local_362[2]->f_8, 0);
			set_anim_scene_entity(iVar457, "shot03", Local_362[3]->f_8, 0);
			set_anim_scene_entity(iVar457, "beer", Local_362[6]->f_8, 0);
			if (!_is_anim_scene_loaded(iVar457, true, false))
			{
				load_anim_scene(iVar457);
			}
			set_anim_scene_bool(iVar457, "Bool", false, false);
			set_anim_scene_bool(iVar457, "passed_out", false, false);
			_0xdf7b5144e25cd3fe(iVar457, "pbl_action");
			break;
	}
}

int func_33(int iParam0, bool bParam1, bool bParam2)
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

bool func_34(int iParam0)
{
	if (func_83(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

void func_35(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_34(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam2)
		{
			door_system_set_door_state(iParam0, 1);
		}
		door_system_set_open_ratio(iParam0, iParam1, iParam3);
	}
}

void func_36(int iParam0, bool bParam1)
{
	if (func_34(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 2 || bParam1)
		{
			door_system_set_door_state(iParam0, 2);
		}
	}
}

void func_37(int iParam0, bool bParam1)
{
	if (func_34(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam1)
		{
			door_system_set_door_state(iParam0, 1);
		}
	}
}

void func_38(int iParam0, bool bParam1)
{
	if (func_34(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 0 || bParam1)
		{
			door_system_set_door_state(iParam0, 0);
		}
	}
}

bool func_39()
{
	return true;
}

int func_40()
{
	func_84();
	switch (iVar1083)
	{
		case 0:
			func_85();
			break;
		case 1:
			func_86();
			func_87();
			break;
		case 2:
			func_86();
			func_88();
			break;
	}
	return 0;
}

float func_41(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

char* func_42(int iParam0)
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

void func_43(int iParam0, int iParam1)
{
	if (!func_89(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_1 = ((*Global_1310750)[iParam0]->f_1 || iParam1);
}

bool func_44(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_90(iParam0, iParam1);
}

void func_45(int iParam0, bool bParam1)
{
	if (func_44(iParam0, 0, 1))
	{
		set_blocking_of_non_temporary_events(iParam0, false);
		func_91(iParam0, 1088421888, 0, 0);
		if (!bParam1)
		{
			set_ped_as_no_longer_needed(&iParam0);
		}
	}
}

bool func_46(var uParam0, var uParam1)
{
	if (func_92(uParam0->f_3, 16777216))
	{
		if (func_93(*uParam1) != -1 || get_entity_model(*uParam1) == 1478983280)
		{
			return true;
		}
	}
	return false;
}

float func_47(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_48(int iParam0, int iParam1, float fParam2, int iParam3, bool bParam4)
{
	if (!Global_1935630->f_12 && (!bParam4 || func_44(iParam0, 0, 1)))
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
			fVar2 = func_47(fParam2 >= 0f, fParam2, vdist(get_entity_coords(iParam0, true, false), Global_36));
			if (fVar2 > 25f && is_entity_occluded(iParam0))
			{
				func_94(&iParam0);
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

void func_49(var uParam0)
{
	if (_does_volume_exist(uParam0->f_171))
	{
		func_95(uParam0->f_171);
		_0xa1cfb35069d23c23(uParam0->f_171);
		_0x74c2b3dc0b294102(uParam0->f_171);
	}
	if (uParam0->f_51.f_7 != 0)
	{
		destroy_tracked_point(uParam0->f_51.f_7);
		uParam0->f_51.f_7 = 0;
	}
	func_96(uParam0);
	func_97(uParam0);
	func_98(uParam0);
	if (!func_99(uParam0))
	{
		if (_0xf6a8a652a6b186cd(uParam0->f_51.f_11))
		{
			_0xfdfecc6ee4491e11(uParam0->f_51.f_11);
		}
		func_100(uParam0->f_51, 0);
	}
	if (does_blip_exist(uParam0->f_51.f_6))
	{
		remove_blip(&(uParam0->f_51.f_6));
	}
	if (uParam0->f_48)
	{
		func_101();
	}
	if (!func_102(uParam0->f_3) && !func_92(uParam0->f_3, 256))
	{
		func_103(uParam0->f_3, 1, 0, 15, 0, 0, 0, 1);
	}
	func_104(uParam0->f_173);
	func_104(uParam0->f_172);
}

void func_50(var uParam0)
{
	if (does_blip_exist(uParam0->f_181))
	{
		remove_blip(&(uParam0->f_181));
	}
}

void func_51(var uParam0, int iParam1)
{
	vVar0 = { func_105(uParam0) };
	iVar3 = func_52(uParam0->f_3, iParam1);
	uParam0->f_185 = iParam1;
	_0xca41e86545413b5b(7, 1221649453, -585414509, iVar3, vVar0);
	if (_0x01f4d242765c6b24(iVar3))
	{
		uParam0->f_186 = 1;
	}
}

int func_52(int iParam0, int iParam1)
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

void func_53(int iParam0, int iParam1, int iParam2)
{
	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_106() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	_0xd5910ecf81a2278c(iParam0, iParam1, iParam2, &vVar0);
}

bool func_54(int iParam0)
{
	if (((func_55(iParam0, 1) && func_55(iParam0, 2)) && func_55(iParam0, 8)) && func_55(iParam0, 512))
	{
		return true;
	}
	return false;
}

bool func_55(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_56(int iParam0, int iParam1, int iParam2)
{
	iVar2 = 0;
	iVar1 = func_107(iParam0);
	if ((func_108(iParam2, 1) || iParam1 >= iVar1) || iParam1 < 0)
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
					if (func_109())
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
					if (func_109())
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
					if (func_109())
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
					if (func_109())
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
					if (func_109())
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

void func_57(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_110(&((*uParam0)[iVar0]->f_1));
		func_110(&((*uParam0)[iVar0]->f_12));
		iVar0++;
	}
}

void func_58(var uParam0, int iParam1)
{
	func_111(uParam0, iParam1);
}

void func_59(var uParam0)
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

void func_60(char* sParam0, var uParam1)
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

char* func_61(int iParam0)
{
	switch (iLocal_14)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return "GEBS_S1_INITIAL_A";
				case 1:
					return "GEBS_S1_INITIAL_B";
				case 2:
					return "GEBS_S1_INITIAL_C";
				case 3:
					return "GEBS_S1_INITIAL_D";
				case 4:
					return "GEBS_S1_INITIAL_E";
				case 5:
					return "GEBS_S1_INITIAL_F";
				case 6:
					return "GEBS_S1_INITIAL_G";
				case 7:
					return "GEBS_S1_INITIAL_H";
				case 8:
					return "GEBS_S1_INITIAL_I";
				case 9:
					return "GEBS_S1_INITIAL_J";
				case 10:
					return "GEBS_S1_INITIAL_K";
				case 11:
					return "";
				case 12:
					return "GEBS_S1_INITIAL_M";
				case 13:
					return "GEBS_S1_INITIAL_N";
				case 14:
					return "GEBS_S1_INITIAL_LAUGH";
				case 15:
					return "GEBS_S1_INITIAL_REACT";
				case 16:
					return "GEBS_S1_INITIAL_ENDA";
				case 17:
					return "GEBS_S1_INITIAL_ENDB";
				case 18:
					return "GEBS_S1_ALIVE_AA";
				case 19:
					return "GEBS_S1_ALIVE_A";
				case 20:
					return "GEBS_S1_ALIVE_B";
				case 21:
					return "GEBS_S1_ALIVE_C";
				case 22:
					return "GEBS_S1_ALIVE_D";
				case 23:
					return "GEBS_S1_ALIVE_E";
				case 24:
					return "GEBS_S1_ALIVE_F";
				case 25:
					return "GEBS_S1_ALIVE_G";
				case 26:
					return "GEBS_S1_ALIVE_H";
				case 27:
					return "GEBS_S1_ALIVE_I";
				case 28:
					return "GEBS_S1_ALIVE_J";
				case 29:
					return "";
				case 30:
					return "GEBS_S1_ALIVE_LAUGH";
				case 31:
					return "GEBS_S1_DEAD_AA";
				case 32:
					return "GEBS_S1_DEAD_A";
				case 33:
					return "GEBS_S1_DEAD_BC";
				case 34:
					return "";
				case 35:
					return "GEBS_S1_DEAD_D";
				case 36:
					return "GEBS_S1_DEAD_E";
				case 37:
					return "GEBS_S1_DEAD_F";
				case 38:
					return "GEBS_S1_DEAD_G";
				case 39:
					return "GEBS_S1_DEAD_H";
				case 40:
					return "GEBS_S1_DEAD_I";
				case 41:
					return "GEBS_S1_DEAD_J";
				case 42:
					return "";
				case 49:
					return "GEBS_S1_ATTACKED_A";
				case 50:
					return "GEBS_S1_ATTACKED_B";
				case 51:
					return "GEBS_S1_ATTACKED_C";
				case 52:
					return "GEBS_S1_ATTACKED_D";
				case 53:
					return "GEBS_S1_ATTACKED_E";
				case 43:
					return "GEBS_S1_PRE_ATTACK_A";
				case 44:
					return "GEBS_S1_PRE_ATTACK_B";
				case 45:
					return "GEBS_S1_PRE_ATTACK_F";
				case 46:
					return "GEBS_S1_ALERTED_A";
				case 47:
					return "GEBS_S1_ALERTED_B";
				case 48:
					return "GEBS_S1_ALERTED_C";
				case 54:
					return "GEBS_S1_SEARCH_A";
				case 55:
					return "GEBS_S1_SEARCH_B";
				case 56:
					return "GEBS_S1_SEARCH_C";
				case 57:
					return "GEBS_S1_SEARCH_D";
				case 58:
					return "GEBS_S1_SEARCH_E";
				case 59:
					return "GEBS_S1_SEARCH_F";
				case 60:
					return "GEBS_S1_SEARCH_G";
				case 61:
					return "GEBS_S1_SEARCH_H";
				case 62:
					return "GEBS_S1_SEARCH_I";
				case 64:
					return "GEBS_S1_SEARCH_K";
				case 65:
					return "GEBS_S1_PLAYER_HEARD_A";
				case 66:
					return "GEBS_S1_PLAYER_HEARD_B";
				case 67:
					return "GEBS_S1_ILO_NEG_PLAYER_A";
				case 68:
					return "GEBS_S1_ILO_POS_PLAYER_A1";
				case 69:
					return "GEBS_S1_ILO_NEG_PED_A";
				case 70:
					return "GEBS_S1_ILO_NEG_PLAYER_B";
				case 71:
					return "GEBS_S1_ILO_NEG_PED_B";
				case 78:
					return "GEBS_S1_ILO_NEG_PLAYER_C";
				case 72:
					return "GEBS_S1_ILO_POS_WOMAN_PLAYER_A";
				case 73:
					return "GEBS_S1_ILO_NEG_WOMAN_PLAYER_A";
				case 74:
					return "PLAYER_FOLLOWING";
				case 75:
					return "PLAYER_FOLLOWING";
				case 76:
					return "GEBS_S1_ILO_ROB_WOMAN_PLAYER_A";
				case 77:
					return "GET_AWAY_FROM_ME";
				case 79:
					return "GEBS_S1_PISS_SONG_A";
				case 80:
					return "GEBS_S1_PISS_SONG_B";
				case 81:
					return "GEBS_S1_PISS_SONG_C";
				case 82:
					return "GEBS_S1_PISS_SONG_D";
				case 83:
					return "GEBS_S1_PISS_WHISTLE";
				case 84:
					return "GEBS_S1_PISS_RETURN_A";
				case 85:
					return "GEBS_S1_PISS_RETURN_B";
				case 86:
					return "GEBS_S1_PISS_NOTICE_A";
				case 87:
					return "GEBS_S1_PISS_NOTICE_B";
				case 95:
					return "GEBS_S1_SEARCHING_FOR_PLAYER_B";
				case 97:
					return "GEBS_S1_SEARCHING_FOR_PLAYER_D";
				case 88:
					return "GEBS_S1_ILO_PISSER_GREET";
				case 89:
					return "GEBS_S1_ILO_PISSER_ANT";
				case 90:
					return "GEBS_S1_ILO_PISSER_GREET_B";
				case 91:
					return "GEBS_S1_ILO_NEG_PLAYER_B1";
				case 92:
					return "GEBS_S1_ILO_PISSER_GREET_B";
				case 93:
					return "GEBS_S1_ILO_NEG_PLAYER_B3";
				default:
					break;
			}
			return "DIALOGUE_LINE - not a valid line";
		}

void func_62(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
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
		if (func_112(iParam0->f_6))
		{
			if (is_bit_set(*iParam0, 1))
			{
				func_113(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_114(iParam0->f_6, iParam0->f_5, 0);
			}
			func_115(iParam0->f_6, 0, 1);
		}
		else
		{
			set_bit(iParam0, 14);
		}
		set_bit(iParam0, 0);
	}
	else
	{
		func_116(iParam0, iParam0->f_5);
		if (!is_bit_set(*iParam0, 13))
		{
			set_bit(iParam0, 0);
		}
	}
	set_bit(iParam0, 15);
}

void func_63(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_117(iParam0, 13))
	{
		func_118(iParam0, 0);
	}
	else
	{
		func_119(iParam0, 0);
	}
	if (func_112(iParam0->f_6))
	{
		if (bParam2)
		{
			func_120(&(iParam0->f_6), 0, 1);
		}
	}
}

bool func_64(var uParam0)
{
	if (!func_121(uParam0->f_1))
	{
		return false;
	}
	if (uParam0->f_12 != 0)
	{
		if (!func_121(uParam0->f_12))
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

bool func_65()
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

bool func_66(var uParam0, var uParam1, vector3 vParam2, float fParam5, bool bParam6, int iParam7)
{
	if (!does_entity_exist(*uParam1) && uParam0->f_1 != 0)
	{
		if (!does_entity_exist(uParam0->f_11) && uParam0->f_12 != 0)
		{
			if (has_model_loaded(uParam0->f_12))
			{
				Var2 = { func_122(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
				Var2.f_3 = func_123(fParam5, uParam0->f_18, uParam0->f_19);
				uParam0->f_11 = func_124(uParam0->f_12, uParam0, Var2, Var2.f_3, 1, 1, uParam0->f_14, 0, 1);
				if (func_125(uParam0->f_1, 1))
				{
					if (does_entity_exist(uParam0->f_11))
					{
						func_126(uParam0->f_11, 0);
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
					Var2 = { func_122(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
					Var2.f_3 = func_123(fParam5, uParam0->f_18, uParam0->f_19);
				}
				else
				{
					bVar1 = (bParam6 || func_127(&(uParam0->f_22)));
					Var2 = { func_122(vParam2, fParam5, uParam0->f_6, bVar1) };
					Var2.f_3 = func_123(fParam5, uParam0->f_9, bVar1);
				}
				*uParam1 = func_124(uParam0->f_1, uParam0, Var2, Var2.f_3, iParam7, _is_this_model_a_horse(uParam0->f_1), uParam0->f_14, 0, 1);
				set_ped_config_flag(*uParam1, 307, true);
				if (!is_entity_dead(*uParam1))
				{
					if (bVar0)
					{
						func_128(*uParam1, uParam0->f_11, 1, -1, 1);
					}
					if (!is_string_null_or_empty(&(uParam0->f_23)))
					{
						func_68(*uParam1, &(uParam0->f_23), 0);
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

int func_67(vector3 vParam0, int iParam3, float fParam4, bool bParam5, int iParam6, int iParam7, bool bParam8)
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
		else if ((*iParam3)[iVar0]->f_7 != 0 && !func_129((*iParam3)[iVar0]->f_11, 16))
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
					if (func_129((*iParam3)[iVar0]->f_11, 64))
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
					if (!func_129((*iParam3)[iVar0]->f_11, 8))
					{
						vVar5 = { _get_object_offset_from_coords(vParam0, fParam4, *(*iParam3)[iVar0]) };
					}
					else
					{
						vVar5 = { *(*iParam3)[iVar0] };
					}
					if (!func_129((*iParam3)[iVar0]->f_11, 128))
					{
						func_130(&vVar5, (*iParam3)[iVar0]->f_10);
					}
					if (func_129((*iParam3)[iVar0]->f_11, 64))
					{
						(*iParam3)[iVar0]->f_8 = create_object_no_offset((*iParam3)[iVar0]->f_7, vVar5, true, true, false, false);
					}
					else
					{
						(*iParam3)[iVar0]->f_8 = create_object((*iParam3)[iVar0]->f_7, vVar5, true, true, false, false, true);
					}
					if (func_131((*iParam3)[iVar0]->f_4))
					{
						vVar1 = { 0f, 0f, (*iParam3)[iVar0]->f_3 };
					}
					else
					{
						vVar1 = { (*iParam3)[iVar0]->f_4 };
					}
					if (func_129((*iParam3)[iVar0]->f_11, 4))
					{
						vVar1.f_2 = func_132((vVar1.z + fParam4));
					}
					set_entity_rotation((*iParam3)[iVar0]->f_8, vVar1, 2, true);
					if (!func_129((*iParam3)[iVar0]->f_11, 128))
					{
						if ((*iParam3)[iVar0]->f_10)
						{
							_0x9587913b9e772d29((*iParam3)[iVar0]->f_8, 0);
						}
					}
				}
				if (func_129((*iParam3)[iVar0]->f_11, 2))
				{
					freeze_entity_position((*iParam3)[iVar0]->f_8, true);
				}
				if (func_129((*iParam3)[iVar0]->f_11, 32))
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

void func_68(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || func_44(iParam0, 0, 0))
	{
		decor_set_bool(iParam0, "HAS_VOICE", true);
		set_ambient_voice_name(iParam0, sParam1);
	}
}

int func_69(int iParam0, int iParam1, int iParam2)
{
	if ((func_133(iParam0, 16777216) && func_133(iParam0, 33554432)) && func_133(iParam0, 268435456))
	{
		return 379542007;
	}
	iVar0 = _0xf8204ef17410bf43(416676503, iParam1, iParam2, 0);
	iVar1 = _0xf8204ef17410bf43(-1101297303, iParam1, iParam2, 0);
	iVar2 = 392538360;
	iVar3 = 0;
	if (!func_133(iParam0, 33554432))
	{
		iVar3 = iVar1;
	}
	if (!func_133(iParam0, 16777216))
	{
		if (!func_134(iVar3) || _0xf2f585411e748b9c(iVar0, 0) > _0xf2f585411e748b9c(iVar3, 0))
		{
			iVar3 = iVar0;
		}
	}
	if (!func_133(iParam0, 268435456) && func_135(iVar2))
	{
		if (!func_134(iVar3) || _0xf2f585411e748b9c(iVar2, 0) > _0xf2f585411e748b9c(iVar3, 0))
		{
			iVar3 = iVar2;
		}
	}
	if (!func_134(iVar3))
	{
		return 379542007;
	}
	return iVar3;
}

int func_70(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bVar0 = func_136(iParam3, 1);
	bVar1 = func_136(iParam3, 2);
	bVar2 = !func_136(iParam3, 4);
	bVar3 = func_136(iParam3, 8);
	bVar4 = !func_136(iParam3, 16);
	bVar5 = func_136(iParam3, 32);
	bVar6 = func_136(iParam3, 64);
	return func_137(iParam0, iParam1, bVar0, bVar1, iParam4, bVar2, bVar3, iParam5, iParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

void func_71(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_138(&(uParam0->f_1), 8);
	}
	else
	{
		func_139(&(uParam0->f_1), 8);
	}
}

void func_72(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_139(uParam0, 16);
	}
	else
	{
		func_138(uParam0, 67108864);
		func_138(uParam0, 16);
	}
}

void func_73(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_138(&(uParam0->f_1), 2048);
	}
	else
	{
		func_139(&(uParam0->f_1), 2048);
	}
}

void func_74(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_138(&(uParam0->f_1), 16384);
	}
	else
	{
		func_139(&(uParam0->f_1), 16384);
	}
}

void func_75(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_138(&(uParam0->f_1), 4);
	}
	else
	{
		func_139(&(uParam0->f_1), 4);
	}
}

void func_76(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_138(&(uParam0->f_1), 2);
	}
	else
	{
		func_139(&(uParam0->f_1), 2);
	}
}

void func_77(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_138(&(uParam0->f_1), 16);
	}
	else
	{
		func_139(&(uParam0->f_1), 16);
	}
}

void func_78(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_139(uParam0, 256);
	}
	else
	{
		func_138(uParam0, 256);
	}
}

void func_79(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_139(uParam0, 32);
	}
	else
	{
		func_138(uParam0, 32);
	}
}

void func_80(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_138(&(uParam0->f_1), 1024);
	}
	else
	{
		func_139(&(uParam0->f_1), 1024);
	}
}

void func_81(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_138(&(uParam0->f_1), 1);
	}
	else
	{
		func_139(&(uParam0->f_1), 1);
	}
}

void func_82(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_139(uParam0, 8);
	}
	else
	{
		func_138(uParam0, 8);
	}
}

bool func_83(int iParam0)
{
	return iParam0 != 0;
}

void func_84()
{
	func_140(0);
	func_141();
	func_142();
	func_143();
	if (iVar1083 != 2)
	{
		if ((func_144(&(uLocal_569[0]), 1, 1) <= 40f || func_144(&(uLocal_569[1]), 1, 1) <= 40f) || func_144(&(uLocal_569[2]), 1, 1) <= 40f)
		{
			_0x437c08db4febe2bd(Global_35, "Stealth", 1f, -1);
		}
		else
		{
			_0x411189e51b8020ba(Global_35, "Stealth");
		}
		func_145();
		func_146();
		func_147();
		func_148();
	}
	if (_does_anim_scene_exist(iVar457))
	{
		if (_is_anim_scene_started(iVar457, false))
		{
			fLocal_1113 = _get_anim_scene_progress(iVar457);
		}
	}
}

void func_85()
{
	func_149();
	func_150(1);
	func_86();
	if (func_144(&(uLocal_569[0]), 1, 1) <= 65f)
	{
		set_anim_scene_bool(iVar457, "Bool", true, false);
		func_151();
		func_152(1);
	}
}

void func_86()
{
	switch (iVar1098)
	{
		case 0:
			uLocal_1099 = _0x6f3068258a499e52(-1510839859, -3553.851f, -3009.952f, 10.8232f, 7);
			iLocal_1100 = 1;
			break;
		case 1:
			if (_0x1ff441d7954f8709(iVar1097))
			{
				uLocal_1101 = _0x4735e2a4bb83d9da(iVar1097);
				iLocal_1100 = 2;
			}
			break;
		case 2:
			break;
	}
}

void func_87()
{
	func_153();
	switch (iVar1086)
	{
		case 0:
			if (!func_154(&(uLocal_569[0])))
			{
				func_155();
				if (iVar1093 == 0)
				{
					func_156();
				}
			}
			if (!func_154(&(uLocal_569[0])))
			{
				if (!does_blip_exist(&(iLocal_574[0])) && !is_ped_dead_or_dying(&(uLocal_569[0]), true))
				{
					iLocal_574[0] = _blip_add_for_entity(831283580, &(uLocal_569[0]));
					_blip_set_modifier(&(iLocal_574[0]), -1118229366);
				}
			}
			func_157();
			if (fVar1111 >= 0.999f)
			{
				fLocal_1113 = 0f;
				func_63(Local_639[2], 0, 0);
				if (is_ped_dead_or_dying(&(uLocal_569[0]), true) || !_0x3ab6c7b0bb0df4b1(&(uLocal_569[0]), iVar457))
				{
					iLocal_1088 = 2;
					_set_anim_scene_playback_list_bool(iVar457, "PBL_EXIT_B", true);
				}
				else
				{
					iLocal_1088 = 1;
					_set_anim_scene_playback_list_bool(iVar457, "PBL_EXIT_A", true);
				}
			}
			break;
		case 1:
			func_158();
			if (func_154(&(uLocal_569[0])))
			{
				if (does_blip_exist(&(iLocal_574[0])))
				{
					remove_blip(iLocal_574[0]);
				}
			}
			if (fVar1111 >= 0.49f && iVar1121 == 0)
			{
				iLocal_1123 = 1;
				func_159(&uLocal_1147);
				iLocal_1089[0] = 6;
				iLocal_1092[0] = 0;
				func_160(&iLocal_618, 0);
				func_160(&iLocal_691, 0);
				func_160(&iLocal_764, 0);
				func_160(Local_837[0], 0);
				func_160(Local_837[1], 0);
				func_160(Local_837[2], 0);
				func_63(Local_639[1], 0, 0);
				func_161(Local_639[2], 0);
				func_63(Local_639[2], 1, 0);
				Local_639[2]->f_13 = func_61(78);
				func_63(Local_712[1], 0, 0);
				func_161(Local_712[2], 0);
				func_63(Local_712[2], 1, 0);
				Local_712[2]->f_13 = func_61(78);
				func_63(Local_785[1], 0, 0);
				func_161(Local_785[2], 0);
				func_63(Local_785[2], 1, 0);
				Local_785[2]->f_13 = func_61(78);
				func_63(Local_901[1], 0, 0);
				func_161(Local_901[2], 0);
				func_63(Local_901[2], 1, 0);
				Local_901[2]->f_13 = func_61(78);
			}
			if (func_162())
			{
				iLocal_1088 = 8;
			}
			break;
		case 2:
			if (!func_154(&(uLocal_569[0])))
			{
				func_155();
			}
			func_163();
			if (_0x005e6f28dd7ed58d(iVar457, "ped_01") || _0x005e6f28dd7ed58d(iVar457, "ped_03"))
			{
				clear_sequence_task(&uLocal_1116);
				open_sequence_task(&uLocal_1116);
				task_follow_nav_mesh_to_coord(0, -3558.33f, -3025.3f, 10.74f, 1f, -1, 0.25f, 1179652, 40000f);
				task_pause(0, 2000);
				task_follow_nav_mesh_to_coord(0, -3551.63f, -3035.39f, 10.84f, 1f, -1, 0.25f, 1179652, 40000f);
				task_pause(0, 2000);
				task_follow_nav_mesh_to_coord(0, -3542.21f, -3027.86f, 10.88f, 1f, -1, 0.25f, 1179652, 40000f);
				task_pause(0, 2000);
				task_follow_nav_mesh_to_coord(0, -3544.81f, -3016.78f, 10.72f, 1f, -1, 0.25f, 1179652, 40000f);
				task_pause(0, 2000);
				close_sequence_task(iVar1114);
				task_perform_sequence(&(uLocal_569[2]), iVar1114);
				clear_sequence_task(&uLocal_1116);
				clear_sequence_task(&uLocal_1115);
				open_sequence_task(&uLocal_1115);
				task_follow_to_offset_of_entity(0, &(uLocal_569[2]), -1f, -1f, 0f, 1f, -1, 1036831949, 1, 1, 1, 1, 1);
				close_sequence_task(iVar1113);
				_task_perform_sequence_2(&(uLocal_569[1]), iVar1113, 0.5f, 0.5f);
				clear_sequence_task(&uLocal_1115);
				iLocal_1088 = 3;
			}
			break;
		case 3:
			func_163();
			func_164();
			func_162();
			if (!func_154(&(uLocal_569[1])))
			{
				if (!does_blip_exist(&(iLocal_574[1])))
				{
					func_165();
					iLocal_1089[0] = 2;
					iLocal_1092[0] = 0;
					iLocal_574[1] = _blip_add_for_entity(831283580, &(uLocal_569[1]));
					_blip_set_modifier(&(iLocal_574[1]), -1118229366);
				}
			}
			if (!func_154(&(uLocal_569[2])))
			{
				if (!does_blip_exist(&(iLocal_574[2])))
				{
					iLocal_574[2] = _blip_add_for_entity(831283580, &(uLocal_569[2]));
					_blip_set_modifier(&(iLocal_574[2]), -1118229366);
				}
			}
			if (func_166(&(uLocal_569[0]), &(uLocal_569[1]), 1, 1) <= 5f || func_166(&(uLocal_569[0]), &(uLocal_569[2]), 1, 1) <= 5f)
			{
				clear_sequence_task(&uLocal_1116);
				open_sequence_task(&uLocal_1116);
				task_react(0, &(uLocal_569[0]), get_entity_coords(&(uLocal_569[0]), true, false), "Default_Shocked", 1f, 4f, 4);
				close_sequence_task(iVar1114);
				task_perform_sequence(&(uLocal_569[2]), iVar1114);
				clear_sequence_task(&uLocal_1116);
				clear_sequence_task(&uLocal_1115);
				open_sequence_task(&uLocal_1115);
				task_react(0, &(uLocal_569[0]), get_entity_coords(&(uLocal_569[0]), true, false), "Default_Shocked", 1f, 4f, 4);
				close_sequence_task(iVar1113);
				_task_perform_sequence_2(&(uLocal_569[1]), iVar1113, 0.8f, 0.8f);
				clear_sequence_task(&uLocal_1115);
				if (func_167() == 0)
				{
					iLocal_1088 = 4;
				}
				else
				{
					iLocal_1088 = 5;
				}
			}
			else if (((is_entity_at_coord(&(uLocal_569[1]), -3544.81f, -3016.78f, 10.72f, 3f, 3f, 2f, false, true, 0) || !func_168(&(uLocal_569[1]), 242628503)) || is_entity_at_coord(&(uLocal_569[2]), -3544.81f, -3016.78f, 10.72f, 3f, 3f, 2f, false, true, 0)) || !func_168(&(uLocal_569[2]), 242628503))
			{
				if (func_169())
				{
					iLocal_1088 = 6;
				}
			}
			break;
		case 4:
			func_162();
			if (func_170())
			{
				iLocal_1088 = 6;
			}
			break;
		case 6:
			remove_anim_scene_entity(iVar457, "p_door44x", _get_anim_scene_object(iVar457, "p_door44x", false));
			clear_sequence_task(&uLocal_1116);
			open_sequence_task(&uLocal_1116);
			task_start_scenario_at_position(0, -1043454001, -3548.13f, -3010.41f, 11.05f, 96.09f, -1, true, false, 0, -1f, false);
			close_sequence_task(iVar1114);
			task_perform_sequence(&(uLocal_569[2]), iVar1114);
			clear_sequence_task(&uLocal_1116);
			clear_sequence_task(&uLocal_1115);
			open_sequence_task(&uLocal_1115);
			task_start_scenario_at_position(0, 1774730608, -3550.09f, -3010.64f, 10.99f, -86.72f, -1, true, false, 0, -1f, false);
			close_sequence_task(iVar1113);
			_task_perform_sequence_2(&(uLocal_569[1]), iVar1113, 2f, 2f);
			clear_sequence_task(&uLocal_1115);
			iLocal_1088 = 9;
			break;
		case 5:
			func_162();
			if (func_171())
			{
				func_70(&(uLocal_569[2]), func_69(268435456, 1056964608, 1065353216), 999, 1, 0, 1056964608, 1065353216, 0);
				func_70(&(uLocal_569[1]), func_69(268435456, 1056964608, 1065353216), 999, 1, 0, 1056964608, 1065353216, 0);
				clear_sequence_task(&uLocal_1115);
				open_sequence_task(&uLocal_1115);
				task_patrol(0, func_172(1), 1, false, true);
				close_sequence_task(iVar1113);
				task_perform_sequence(&(uLocal_569[1]), iVar1113);
				clear_sequence_task(&uLocal_1115);
				clear_sequence_task(&uLocal_1116);
				open_sequence_task(&uLocal_1116);
				task_patrol(0, func_172(2), 1, false, true);
				close_sequence_task(iVar1114);
				_task_perform_sequence_2(&(uLocal_569[2]), iVar1114, 1f, 1f);
				clear_sequence_task(&uLocal_1116);
				iLocal_1088 = 7;
			}
			break;
		case 7:
			func_173();
			func_162();
			break;
		case 8:
			if (func_174(&uLocal_1147) >= 840f)
			{
				clear_sequence_task(&uLocal_1114);
				open_sequence_task(&uLocal_1114);
				if (func_175())
				{
					task_play_anim_advanced(0, &(Local_467[iVar1133]), Local_467[iVar1133]->f_1, -3552.427f, -3009.681f, 10.798f, 0f, 0f, 102.75f, 1.5f, -1.5f, -1, 33152, 0f, 2, 1, 0);
				}
				if (_is_mount_seat_free(Local_233[0]->f_11, -1))
				{
					task_mount_animal(0, Local_233[0]->f_11, -1, -1, 2f, 1, 0, 0);
				}
				else
				{
					task_mount_animal(0, Local_233[1]->f_11, -1, -1, 2f, 1, 0, 0);
				}
				task_wander_standard(0, 40000f, 0);
				close_sequence_task(iVar1112);
				task_perform_sequence(&(uLocal_569[0]), iVar1112);
				clear_sequence_task(&uLocal_1114);
				clear_sequence_task(&uLocal_1115);
				open_sequence_task(&uLocal_1115);
				if (func_176())
				{
					task_play_anim_advanced(0, &(Local_467[iVar1134]), Local_467[iVar1134]->f_1, -3552.427f, -3009.681f, 10.798f, 0f, 0f, 102.75f, 1.5f, -1.5f, -1, 33152, 0f, 2, 1, 0);
				}
				if (_is_mount_seat_free(Local_233[1]->f_11, -1))
				{
					task_mount_animal(0, Local_233[1]->f_11, -1, -1, 2f, 1, 0, 0);
				}
				else
				{
					task_mount_animal(0, Local_233[2]->f_11, -1, -1, 2f, 1, 0, 0);
				}
				task_wander_standard(0, 40000f, 0);
				close_sequence_task(iVar1113);
				_task_perform_sequence_2(&(uLocal_569[1]), iVar1113, 30f, 30f);
				clear_sequence_task(&uLocal_1115);
				clear_sequence_task(&uLocal_1116);
				open_sequence_task(&uLocal_1116);
				if (func_177())
				{
					task_play_anim_advanced(0, &(Local_467[iVar1135]), Local_467[iVar1135]->f_1, -3552.427f, -3009.681f, 10.798f, 0f, 0f, 102.75f, 1.5f, -1.5f, -1, 33152, 0f, 2, 1, 0);
				}
				if (_is_mount_seat_free(Local_233[2]->f_11, -1))
				{
					task_mount_animal(0, Local_233[2]->f_11, -1, -1, 2f, 1, 0, 0);
				}
				task_wander_standard(0, 40000f, 0);
				close_sequence_task(iVar1114);
				_task_perform_sequence_2(&(uLocal_569[2]), iVar1114, 60f, 60f);
				clear_sequence_task(&uLocal_1116);
				func_178(uLocal_569[0], &iLocal_618, &Local_639, 1, 1);
				func_178(uLocal_569[1], Local_837[1], &Local_901, 1, 1);
				func_178(uLocal_569[2], Local_837[2], &Local_901, 1, 1);
				iLocal_1127 = 1;
				func_179(5, 3);
				iLocal_1088 = 9;
			}
			break;
		case 9:
			break;
	}
}

void func_88()
{
	func_180(&(uLocal_569[0]), Global_35, &uLocal_593, 0, 15);
	func_180(&(uLocal_569[1]), Global_35, &uLocal_593, 0, 15);
	func_180(&(uLocal_569[2]), Global_35, &uLocal_593, 0, 15);
	set_ped_reset_flag(&(uLocal_569[0]), 201, true);
	set_ped_reset_flag(&(uLocal_569[1]), 201, true);
	set_ped_reset_flag(&(uLocal_569[2]), 201, true);
	switch (iVar1085)
	{
		case 0:
			if (((((iVar1096 == 0 || iVar1096 == 8192) || Local_18[0]->f_4) || Local_18[1]->f_4) || Local_18[2]->f_4) || Local_18[3]->f_4)
			{
				if (iVar1120 == 1)
				{
					if (!func_154(&(uLocal_569[1])) && !func_154(&(uLocal_569[2])))
					{
						iLocal_1087 = 1;
					}
					else if (func_181())
					{
						iLocal_1087 = 1;
					}
				}
				else if (bVar1123)
				{
					if (func_182())
					{
						iLocal_1087 = 1;
					}
				}
				else if (func_183() && func_184())
				{
					if (iVar1096 == 256)
					{
						if (!is_ped_dead_or_dying(&(uLocal_569[0]), true))
						{
							task_react(&(uLocal_569[0]), Global_35, get_entity_coords(Global_35, true, false), "TaskCombat_Panic", 1f, 0, 4);
						}
					}
					iLocal_1126 = 1;
					iLocal_1087 = 1;
				}
			}
			else if (func_183() && func_184())
			{
				if (iVar1096 == 256)
				{
					if (!is_ped_dead_or_dying(&(uLocal_569[0]), true))
					{
						task_react(&(uLocal_569[0]), Global_35, get_entity_coords(Global_35, true, false), "TaskCombat_Panic", 1f, 0, 4);
					}
				}
				iLocal_1126 = 1;
				iLocal_1087 = 1;
			}
			break;
		case 1:
			if (!is_ped_injured(&(uLocal_569[0])))
			{
				set_ped_seeing_range(&(uLocal_569[0]), 50f);
			}
			if (!is_ped_injured(&(uLocal_569[1])))
			{
				set_ped_seeing_range(&(uLocal_569[1]), 50f);
			}
			if (!is_ped_injured(&(uLocal_569[2])))
			{
				set_ped_seeing_range(&(uLocal_569[2]), 50f);
			}
			_0x411189e51b8020ba(Global_35, "Stealth");
			func_179(5, 3);
			if (does_blip_exist(iVar577))
			{
				remove_blip(&uLocal_579);
			}
			if (!is_ped_dead_or_dying(&(uLocal_569[0]), true))
			{
				if (!does_blip_exist(&(iLocal_574[0])))
				{
					iLocal_574[0] = _blip_add_for_entity(831283580, &(uLocal_569[0]));
				}
			}
			if (!is_ped_dead_or_dying(&(uLocal_569[1]), true))
			{
				if (!does_blip_exist(&(iLocal_574[1])))
				{
					iLocal_574[1] = _blip_add_for_entity(831283580, &(uLocal_569[1]));
				}
			}
			if (!is_ped_dead_or_dying(&(uLocal_569[2]), true))
			{
				if (!does_blip_exist(&(iLocal_574[2])))
				{
					iLocal_574[2] = _blip_add_for_entity(831283580, &(uLocal_569[2]));
				}
			}
			if (does_blip_exist(&(iLocal_574[0])))
			{
				_blip_set_modifier(&(iLocal_574[0]), 942020339);
			}
			if (does_blip_exist(&(iLocal_574[1])))
			{
				_blip_set_modifier(&(iLocal_574[1]), 942020339);
			}
			if (does_blip_exist(&(iLocal_574[2])))
			{
				_blip_set_modifier(&(iLocal_574[2]), 942020339);
			}
			func_178(uLocal_569[0], &iLocal_618, &Local_639, 1, 1);
			func_178(uLocal_569[1], Local_837[1], &Local_901, 1, 1);
			func_178(uLocal_569[2], Local_837[2], &Local_901, 1, 1);
			func_178(uLocal_569[3], &iLocal_953, &Local_974, 1, 1);
			iLocal_1087 = 2;
			break;
		case 2:
			clear_sequence_task(&uLocal_1114);
			open_sequence_task(&uLocal_1114);
			if (func_175())
			{
				task_play_anim_advanced(0, &(Local_467[iVar1133]), Local_467[iVar1133]->f_1, -3552.427f, -3009.681f, 10.798f, 0f, 0f, 102.75f, 1.5f, -1.5f, -1, 33152, 0f, 2, 1, 0);
				task_combat_ped(0, Global_35, 16793600, 16);
			}
			else
			{
				iLocal_1132 = 1;
				task_react(0, Global_35, get_entity_coords(Global_35, true, false), "TaskCombat_Panic", 1f, 0, 4);
				task_combat_ped(0, Global_35, 16793600, 16);
			}
			close_sequence_task(iVar1112);
			task_perform_sequence(&(uLocal_569[0]), iVar1112);
			clear_sequence_task(&uLocal_1114);
			clear_sequence_task(&uLocal_1115);
			open_sequence_task(&uLocal_1115);
			if (func_176())
			{
				task_play_anim_advanced(0, &(Local_467[iVar1134]), Local_467[iVar1134]->f_1, -3552.427f, -3009.681f, 10.798f, 0f, 0f, 102.75f, 1.5f, -1.5f, -1, 33152, 0f, 2, 1, 0);
				task_combat_ped(0, Global_35, 16793600, 16);
			}
			else
			{
				iLocal_1133 = 1;
				task_combat_ped(0, Global_35, 16793600, 16);
			}
			close_sequence_task(iVar1113);
			_task_perform_sequence_2(&(uLocal_569[1]), iVar1113, 0.3f, 0.3f);
			clear_sequence_task(&uLocal_1115);
			clear_sequence_task(&uLocal_1116);
			open_sequence_task(&uLocal_1116);
			if (func_177())
			{
				task_play_anim_advanced(0, &(Local_467[iVar1135]), Local_467[iVar1135]->f_1, -3552.427f, -3009.681f, 10.798f, 0f, 0f, 102.75f, 1.5f, -1.5f, -1, 33152, 0f, 2, 1, 0);
				task_combat_ped(0, Global_35, 16793600, 16);
			}
			else
			{
				iLocal_1134 = 1;
				task_combat_ped(0, Global_35, 16793600, 16);
			}
			close_sequence_task(iVar1114);
			_task_perform_sequence_2(&(uLocal_569[2]), iVar1114, 0.8f, 0.8f);
			clear_sequence_task(&uLocal_1116);
			clear_sequence_task(&uLocal_1117);
			open_sequence_task(&uLocal_1117);
			_task_flee_from_ped(0, Global_35, 0f, 0f, 0f, -1f, -1, 256, 1077936128, 0);
			close_sequence_task(iVar1115);
			task_perform_sequence(&(uLocal_569[3]), iVar1115);
			clear_sequence_task(&uLocal_1117);
			func_185();
			iLocal_1083 = 1;
			iLocal_1087 = 3;
			break;
		case 3:
			func_186();
			func_187();
			func_188();
			if (func_189())
			{
			}
			break;
	}
}

bool func_89(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

bool func_90(int iParam0, int iParam1)
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
	if (func_129(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_129(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_129(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_129(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_129(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_129(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_129(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_129(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_91(int iParam0, float fParam1, bool bParam2, bool bParam3)
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

bool func_92(int iParam0, int iParam1)
{
	if (!func_89(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0] && iParam1) != 0;
}

int func_93(int iParam0)
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

void func_94(int* iParam0)
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

void func_95(int iParam0)
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

void func_96(var uParam0)
{
	if (func_112(uParam0->f_162))
	{
		func_120(&(uParam0->f_162), 1, 1);
	}
	if (func_112(uParam0->f_163))
	{
		func_120(&(uParam0->f_163), 1, 1);
	}
	if (func_112(uParam0->f_164))
	{
		func_120(&(uParam0->f_164), 1, 1);
	}
	if (func_112(uParam0->f_165))
	{
		func_120(&(uParam0->f_165), 1, 1);
	}
}

void func_97(var uParam0)
{
	if (uParam0->f_170)
	{
		func_190();
	}
}

void func_98(var uParam0)
{
	if (uParam0->f_48 && !uParam0->f_45)
	{
		func_191(32);
		func_103(uParam0->f_3, 1, 0, 0, 2, 0, 0, 1);
	}
}

bool func_99(var uParam0)
{
	if (func_192(uParam0) || uParam0->f_44)
	{
		uParam0->f_44 = 1;
		func_193(uParam0->f_3);
		func_194(uParam0, 0, 1);
		func_195(uParam0->f_3, uParam0->f_51.f_5, 0, uParam0->f_43, -1);
		func_196(0, 0);
		return true;
	}
	return false;
}

void func_100(vector3 vParam0, int iParam3)
{
	if (func_131(vParam0))
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
			if (func_197(vVar2, vParam0, 2f, 1))
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

void func_101()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

bool func_102(int iParam0)
{
	if (!func_89(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0]->f_4 > 0;
}

void func_103(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_198(iParam0) == 1 && bParam7)
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
	if ((bParam1 || bParam6) || func_106() != -1)
	{
		Global_17504.f_42[iParam0]->f_4 = 0;
	}
	Global_17504.f_42[iParam0]->f_4 = (Global_17504.f_42[iParam0]->f_4 + iVar0);
}

void func_104(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

Vector3 func_105(var uParam0)
{
	return uParam0->f_51;
}

int func_106()
{
	return Global_1572887->f_12;
}

int func_107(int iParam0)
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

bool func_108(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_109()
{
	if (is_bit_set(get_random_int_in_range(0, 65536), 0))
	{
		return true;
	}
	return false;
}

void func_110(var uParam0)
{
	if (*uParam0 != 0)
	{
		request_model(*uParam0, false);
	}
}

void func_111(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_112(int iParam0)
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

void func_113(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_112(iParam0))
	{
		return;
	}
	iVar0 = func_199(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(2, sParam1, sParam2));
}

void func_114(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_112(iParam0))
	{
		return;
	}
	iVar0 = func_199(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, sParam1);
}

void func_115(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_112(iParam0))
	{
		return;
	}
	iVar0 = func_199(iParam0);
	if (bParam1)
	{
		func_200(iParam0, 4);
		func_201(iVar0, 1);
		func_202(iVar0, 1);
	}
	else
	{
		func_203(iParam0, 4);
		func_202(iVar0, 0);
	}
}

void func_116(int* iParam0, char* sParam1)
{
	if (func_112(iParam0->f_6) && !is_string_null_or_empty(sParam1))
	{
		func_114(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_119(iParam0, 1);
}

bool func_117(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

void func_118(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_119(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

void func_120(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_112(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_199(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_204(iVar0);
	*uParam0 = 0;
}

bool func_121(int iParam0)
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

Vector3 func_122(vector3 vParam0, bool bParam3, vector3 vParam4, bool bParam7)
{
	if (bParam7)
	{
		return vParam4;
	}
	return _get_object_offset_from_coords(vParam0, bParam3, vParam4);
}

float func_123(float fParam0, float fParam1, bool bParam2)
{
	if (bParam2)
	{
		return fParam1;
	}
	return func_132((fParam0 + fParam1));
}

int func_124(int iParam0, var uParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, int iParam10)
{
	if (bParam6)
	{
		func_205(&vParam2, uParam1->f_22);
	}
	if (!bParam7 && func_206(uParam1))
	{
		iVar0 = _0xeaf682a14f8e5f53(uParam1->f_5, vParam2, bParam5, 1, 1, iParam9, iParam10);
		if (!does_entity_exist(iVar0))
		{
			iVar0 = func_207(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
		}
		else if (_is_metaped_outfit_request_valid(uParam1->f_5))
		{
			_release_metaped_outfit_request(uParam1->f_5);
		}
	}
	else
	{
		iVar0 = func_207(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
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
		if (!is_string_null_or_empty(&(uParam1->f_23)) && !func_208(iVar0))
		{
			func_68(iVar0, &(uParam1->f_23), 0);
		}
		if (func_208(iVar0))
		{
			set_animal_tuning_bool_param(iVar0, 48, true);
		}
		else
		{
			set_ped_config_flag(iVar0, 307, true);
		}
		if (func_209(&(uParam1->f_22)))
		{
			set_ped_can_ragdoll(iVar0, true);
			set_ped_to_ragdoll(iVar0, 1000, 1000, 1, false, false, false);
			set_ped_config_flag(iVar0, 186, !func_210(&(uParam1->f_22)));
			func_212(iVar0, func_211(&(uParam1->f_22)), 0);
		}
		else
		{
			request_ped_visibility_tracking(iVar0);
		}
		if (func_213(&(uParam1->f_22)))
		{
			freeze_entity_position(iVar0, true);
		}
		if (func_214(&(uParam1->f_22)))
		{
			func_215(iVar0, 1);
		}
		_0xa91e6cf94404e8c9(iVar0);
		set_ped_config_flag(iVar0, 6, func_216(&(uParam1->f_22)));
		set_ped_config_flag(iVar0, 393, true);
		if (!func_129(uParam1->f_22, 8192))
		{
			_set_entity_something(iVar0, true);
		}
		if (!func_208(iVar0))
		{
			func_218(iVar0, !func_217(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 4, func_219(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 297, !func_220(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 317, !func_220(&(uParam1->f_22)));
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

bool func_125(int iParam0, int iParam1)
{
	if (func_221(iParam0) != -1)
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

void func_126(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (decor_exist_on(iParam0, "honor_block"))
		{
			iVar0 = decor_get_int(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_222(iParam1));
		decor_set_int(iParam0, "honor_block", iVar0);
	}
}

bool func_127(var uParam0)
{
	return func_129(*uParam0, 32);
}

int func_128(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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

bool func_129(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_130(var uParam0, bool bParam1)
{
	vVar0 = { *uParam0 };
	vVar0.f_2 = (vVar0.z + 5f);
	if (bParam1)
	{
		if (!func_223(&vVar0, 50, 10, 0))
		{
		}
		else
		{
			*uParam0 = { vVar0 };
		}
	}
}

bool func_131(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

float func_132(float fParam0)
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

bool func_133(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_134(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_135(int iParam0)
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

bool func_136(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_137(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_134(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
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
							if (func_134(iVar4) && iVar4 != iVar0)
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
	if (func_106() == -1 && !func_135(iVar0))
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
				if (func_135(-183018591))
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
		if (iParam0 != Global_35 && func_134(iVar0))
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
		func_224(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_225(iParam0, &iVar0, &fVar25);
		iVar0 = _give_weapon_to_ped_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_226(iVar0))
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

void func_138(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_139(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_140(bool bParam0)
{
	if (!bVar1081)
	{
		if (bVar1080)
		{
			if ((!is_ped_in_combat(Global_35, 0) || func_189()) || bParam0)
			{
				compendium_gang_encountered(1033509606);
				iLocal_1084 = 1;
			}
		}
	}
}

void func_141()
{
}

void func_142()
{
	if (iVar1122 == 0)
	{
		if (_0x1f0e401031e20146(uVar457, "PBL_EXIT_A"))
		{
			if (fVar1111 >= 0.64f)
			{
				func_227(&(uLocal_569[3]), 5000);
				iLocal_1124 = 1;
			}
		}
		if (_0x1f0e401031e20146(uVar457, "PBL_EXIT_B"))
		{
			if (fVar1111 >= 0.9f)
			{
				func_227(&(uLocal_569[3]), 5000);
				iLocal_1124 = 1;
			}
		}
	}
}

void func_143()
{
	func_228();
	if (iVar1083 == 2)
	{
		if (func_112(Local_1026.f_17))
		{
			func_120(&(Local_1026.f_17), 1, 1);
		}
		if (func_229())
		{
			Local_1026 = 7;
		}
	}
	if (is_entity_in_volume(Global_35, iVar578, true, 0))
	{
		func_230(&Local_1026, 0, 0, bVar1126, 1, 1);
	}
	else if (is_entity_in_volume(Global_35, iVar579, true, 0))
	{
		func_230(&Local_1026, 0, 0, bVar1126, 1, 1);
	}
	else if (is_entity_in_volume(Global_35, iVar580, true, 0))
	{
		func_230(&Local_1026, 0, 0, bVar1126, 1, 1);
	}
	else if (func_112(Local_1026.f_17))
	{
		Local_1026 = 7;
		func_230(&Local_1026, 1, 0, bVar1126, 1, 1);
	}
}

float func_144(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return -1f;
	}
	return func_166(Global_35, iParam0, bParam1, bParam2);
}

void func_145()
{
	iVar3 = 1;
	if (!is_entity_dead(&(uLocal_569[0])) && iVar1125 == 0)
	{
		iVar0 = func_232(uLocal_569[0], &iLocal_618, 30f, &Local_639, &iVar3, 0f, 1, 0, 0, func_231(3, 0, 0), 0, 0, 2, 1, -1082130432, 0);
	}
	else
	{
		func_233(uLocal_569[0]);
		func_234(&iLocal_618, &Local_639);
		func_178(uLocal_569[0], &iLocal_618, &Local_639, 1, 1);
	}
	if (&iLocal_1089[0] == 2 || &iLocal_1089[0] == 6)
	{
		if (iVar1125 == 0)
		{
			iVar1 = func_232(uLocal_569[1], &iLocal_691, 30f, &Local_712, &iVar3, 0f, 1, 0, 0, func_231(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432, 0);
			iVar2 = func_232(uLocal_569[2], &iLocal_764, 30f, &Local_785, &iVar3, 0f, 1, 0, 0, func_231(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432, 0);
		}
	}
	switch (&iLocal_1089[0])
	{
		case 0:
			switch (&iLocal_1092[0])
			{
				case 0:
					switch (iVar0)
					{
						case 1:
							iLocal_1092[0] = 1;
							func_63(Local_901[1], 0, 0);
							break;
						case 2:
							iLocal_1092[0] = 2;
							func_63(Local_901[2], 0, 0);
							break;
					}
					break;
				case 1:
					if (func_235(0f, 1, Global_35, 1))
					{
						iLocal_1095 = 1;
						iLocal_1089[0] = 7;
					}
					break;
				case 2:
					if (func_235(0f, 1, Global_35, 1))
					{
						iLocal_1095 = 1;
						iLocal_1089[0] = 7;
					}
					break;
			}
			break;
		case 1:
			switch (&iLocal_1092[0])
			{
				case 0:
					switch (iVar0)
					{
						case 1:
							iLocal_1092[0] = 1;
							func_63(Local_901[1], 0, 0);
							break;
						case 2:
							iLocal_1092[0] = 1;
							func_63(Local_901[2], 0, 0);
							break;
					}
					break;
				case 1:
					if (func_235(0f, 1, Global_35, 1))
					{
						iLocal_1089[0] = 7;
						iLocal_1104 = 2;
					}
					break;
				case 2:
					if (func_235(0f, 1, Global_35, 1))
					{
						iLocal_1089[0] = 7;
						iLocal_1104 = 2;
					}
					break;
			}
			break;
		case 2:
			switch (&iLocal_1092[0])
			{
				case 0:
					switch (iVar1)
					{
						case 2:
							iLocal_1092[0] = 2;
							break;
					}
					break;
				case 2:
					if (func_235(0f, 1, Global_35, 1))
					{
						stop_current_playing_speech(&(uLocal_569[1]), 0);
						if (func_236(&(uLocal_569[1]), Global_35, func_61(71), 0f, 0))
						{
							iLocal_1089[0] = 7;
							func_63(Local_712[2], 0, 0);
							func_63(Local_785[2], 0, 0);
							func_152(2);
						}
					}
					break;
			}
			switch (&iLocal_1092[0])
			{
				case 0:
					switch (iVar2)
					{
						case 2:
							iLocal_1092[0] = 2;
							break;
					}
					break;
				case 2:
					if (func_235(0f, 1, Global_35, 1))
					{
						stop_current_playing_speech(&(uLocal_569[2]), 0);
						if (func_236(&(uLocal_569[2]), Global_35, func_61(71), 0f, 0))
						{
							iLocal_1089[0] = 7;
							func_63(Local_712[2], 0, 0);
							func_63(Local_785[2], 0, 0);
							func_152(2);
						}
					}
					break;
			}
			break;
		case 6:
			switch (&iLocal_1092[0])
			{
				case 0:
					switch (iVar0)
					{
						case 2:
							iLocal_1092[0] = 2;
							break;
					}
					switch (iVar1)
					{
						case 2:
							iLocal_1092[0] = 2;
							break;
					}
					switch (iVar2)
					{
						case 2:
							iLocal_1092[0] = 2;
							break;
					}
					break;
				case 2:
					if (func_235(0f, 1, Global_35, 1))
					{
						if (func_236(&(uLocal_569[2]), Global_35, func_61(69), 0f, 0))
						{
							iLocal_1089[0] = 7;
							func_152(2);
						}
					}
					break;
			}
			break;
		case 7:
			break;
	}
}

void func_146()
{
	iVar1 = 1;
	iVar0 = func_232(uLocal_569[3], &iLocal_953, 30f, &Local_974, &iVar1, 0f, 1, 0, 0, func_231(3, 0, 0), 0, 0, 2, 1, -1082130432, 0);
	func_237(uLocal_569[3], 1, 1, 1, 1, 0, 0, 0);
	_0xa3db37edf9a74635(get_player_index(), &(uLocal_569[3]), 7, 0, 1);
	_0xa3db37edf9a74635(get_player_index(), &(uLocal_569[3]), 19, 0, 1);
	_0xa3db37edf9a74635(get_player_index(), &(uLocal_569[3]), 20, 0, 1);
	switch (&iLocal_1089[1])
	{
		case 0:
			switch (&iLocal_1092[1])
			{
				case 0:
					switch (iVar0)
					{
						case 1:
							iLocal_1092[1] = 1;
							break;
						case 2:
							iLocal_1092[1] = 2;
							break;
						case 0:
							iLocal_1092[1] = 3;
							break;
					}
					break;
				case 1:
					if (func_235(0f, 1, Global_35, 1))
					{
						func_238(&(uLocal_569[3]), Global_35, func_61(74), 0, -1082130432, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_63(Local_974[2], 1, 0);
						iLocal_1092[1] = 0;
						func_63(Local_974[0], 1, 0);
						iLocal_1089[1] = 3;
					}
					break;
				case 2:
					if (func_235(0f, 1, Global_35, 1))
					{
						func_238(&(uLocal_569[3]), Global_35, func_61(75), 0, -1082130432, 2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_63(Local_974[1], 0, 0);
						func_63(Local_974[2], 0, 0);
						func_63(Local_974[0], 1, 0);
						func_239();
						iLocal_1092[1] = 0;
						iLocal_1089[1] = 4;
					}
					break;
				case 3:
					if (func_235(0f, 1, Global_35, 1))
					{
						func_238(&(uLocal_569[3]), Global_35, func_61(77), 0, -1082130432, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_1089[1] = 7;
					}
					break;
			}
			break;
		case 3:
			switch (&iLocal_1092[1])
			{
				case 0:
					switch (iVar0)
					{
						case 2:
							iLocal_1092[1] = 2;
							break;
						case 0:
							iLocal_1092[1] = 3;
							break;
					}
					break;
				case 2:
					if (func_235(0f, 1, Global_35, 1))
					{
						func_238(&(uLocal_569[3]), Global_35, func_61(75), 0, -1082130432, 2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_63(Local_974[1], 0, 0);
						func_63(Local_974[2], 0, 0);
						func_239();
						iLocal_1092[1] = 0;
						func_63(Local_974[0], 1, 0);
						iLocal_1089[1] = 5;
					}
					break;
				case 3:
					if (func_235(0f, 1, Global_35, 1))
					{
						func_238(&(uLocal_569[3]), Global_35, func_61(77), 0, -1082130432, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_1089[1] = 7;
					}
					break;
			}
			break;
		case 4:
			switch (&iLocal_1092[1])
			{
				case 0:
					switch (iVar0)
					{
						case 1:
							iLocal_1092[1] = 1;
							break;
						case 0:
							iLocal_1092[1] = 3;
							break;
					}
					break;
				case 1:
					if (func_235(0f, 1, Global_35, 1))
					{
						func_238(&(uLocal_569[3]), Global_35, func_61(74), 0, -1082130432, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_63(Local_974[2], 1, 0);
						iLocal_1092[1] = 0;
						func_63(Local_974[0], 1, 0);
						iLocal_1089[1] = 5;
					}
					break;
				case 3:
					if (func_235(0f, 1, Global_35, 1))
					{
						func_238(&(uLocal_569[3]), Global_35, func_61(77), 0, -1082130432, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_1089[1] = 7;
					}
					break;
			}
			break;
		case 5:
			switch (&iLocal_1092[1])
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							iLocal_1092[1] = 3;
							break;
					}
					break;
				case 3:
					if (func_235(0f, 1, Global_35, 1))
					{
						func_238(&(uLocal_569[3]), Global_35, func_61(77), 0, -1082130432, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_1089[1] = 7;
					}
					break;
			}
			break;
		case 7:
			break;
	}
}

int func_147()
{
	if (iVar1121 == 0)
	{
		if ((func_240(&(uLocal_569[0]), 0, &(Local_39.f_5), &uLocal_1098, 0, 0) && func_240(&(uLocal_569[1]), 0, &(Local_39.f_5), &uLocal_1098, 0, 0)) && func_240(&(uLocal_569[2]), 0, &(Local_39.f_5), &uLocal_1098, 0, 0))
		{
			iVar0 = 1;
		}
		if (bVar1127 == 0)
		{
			if (func_241())
			{
				clear_sequence_task(&uLocal_1117);
				open_sequence_task(&uLocal_1117);
				if (func_17(-3555f, -3007f, 11f, 1) < func_17(-3551f, -3012f, 11f, 1))
				{
					_task_flee_from_ped(0, Global_35, -3557f, -3003f, 10.4f, -1f, -1, 256, 1077936128, 0);
				}
				else
				{
					_task_flee_from_ped(0, Global_35, -3549f, 3019f, 11f, -1f, -1, 256, 1077936128, 0);
				}
				close_sequence_task(iVar1115);
				task_perform_sequence(&(uLocal_569[3]), iVar1115);
				clear_sequence_task(&uLocal_1117);
				func_238(&(uLocal_569[3]), Global_35, "GENERIC_FRIGHTENED_HIGH", 0, -1082130432, 2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_1129 = 1;
			}
		}
		if ((((((((iVar0 || func_242()) || func_243()) || func_244()) || func_245()) || func_246()) || _0x957d7e750216d74b(Global_35) == 4) || func_247()) || bVar1127)
		{
			func_152(2);
			return 1;
		}
	}
	else if (((func_240(&(uLocal_569[0]), 0, &(Local_39.f_5), &uLocal_1098, 0, 0) || func_240(&(uLocal_569[1]), 0, &(Local_39.f_5), &uLocal_1098, 0, 0)) || func_240(&(uLocal_569[2]), 0, &(Local_39.f_5), &uLocal_1098, 0, 0)) || func_248())
	{
		if (((iVar1096 == 256 || iVar1096 == 4) || iVar1096 == 16) || func_248())
		{
			func_152(2);
			return 1;
		}
	}
	return 0;
}

void func_148()
{
	if (((!Local_18[0]->f_4 && !Local_18[1]->f_4) && !Local_18[2]->f_4) && !Local_18[3]->f_4)
	{
		if (is_shocking_event_in_sphere(-1695849405, -3552.6f, -3010.4f, 12.2f, 20f) || is_shocking_event_in_sphere(2044016570, -3552.6f, -3010.4f, 12.2f, 20f))
		{
			iVar0 = 0;
			while (iVar0 < Local_18)
			{
				Local_18[iVar0]->f_4 = 1;
				iVar0++;
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < Local_18)
	{
		if (!Local_18[iVar0]->f_4)
		{
			_0x5737199af2dc609f(Local_18[iVar0]->f_3, &vVar1, &vVar4);
			if (is_bullet_in_box(vVar1, vVar4, true))
			{
				Local_18[iVar0]->f_4 = 1;
			}
		}
		iVar0++;
	}
}

int func_149()
{
	if (_0x23e33cb9f4a3f547(iVar457, "pbl_action"))
	{
		_set_anim_scene_playback_list_bool(iVar457, "pbl_action", true);
	}
	if (_is_anim_scene_loaded(iVar457, true, false) && !_is_anim_scene_started(iVar457, false))
	{
		start_anim_scene(iVar457);
		return 1;
	}
	return 0;
}

void func_150(int iParam0)
{
	if (iParam0 == 1)
	{
		if (_is_interior_entity_set_valid(func_15(), "ven_int_lights_ON"))
		{
			if (!is_interior_entity_set_active(func_15(), "ven_int_lights_ON"))
			{
				activate_interior_entity_set(func_15(), "ven_int_lights_ON", 0);
			}
		}
	}
	else if (_is_interior_entity_set_valid(func_15(), "ven_int_lights_OFF"))
	{
		if (!is_interior_entity_set_active(func_15(), "ven_int_lights_OFF"))
		{
			activate_interior_entity_set(func_15(), "ven_int_lights_OFF", 0);
		}
	}
}

void func_151()
{
	_0xdf7b5144e25cd3fe(iVar457, "PBL_EXIT_A");
	_0xdf7b5144e25cd3fe(iVar457, "PBL_EXIT_B");
}

void func_152(int iParam0)
{
	iLocal_1085 = iParam0;
}

void func_153()
{
	switch (iVar1094)
	{
		case 0:
			if (is_entity_dead(&(uLocal_569[0])))
			{
				if (!func_154(&(uLocal_569[3])) && !func_249())
				{
					if ((_0x550cb89dd7f4fa3d(&(uLocal_569[3]), Global_35) && is_ped_facing_ped(&(uLocal_569[3]), Global_35, 80f)) && func_144(&(uLocal_569[3]), 1, 1) <= 8f)
					{
						iLocal_1096 = 1;
					}
				}
			}
			else if (iVar1121 == 1)
			{
				if (func_154(&(uLocal_569[3])) && func_249())
				{
					if (func_235(-6f, 1, 0, 0))
					{
						iLocal_1096 = 4;
						func_180(&(uLocal_569[3]), Global_35, &uLocal_593, 0, 15);
						clear_ped_tasks(&(uLocal_569[3]), 1, 0);
						clear_sequence_task(&uLocal_1117);
						open_sequence_task(&uLocal_1117);
						_task_smart_flee_style_ped(0, Global_35, 2, 0, -1082130432, -1, 0);
						close_sequence_task(iVar1115);
						task_perform_sequence(&(uLocal_569[3]), iVar1115);
						clear_sequence_task(&uLocal_1117);
						func_185();
					}
				}
				if (!func_154(&(uLocal_569[3])) && !func_249())
				{
					if ((_0x550cb89dd7f4fa3d(&(uLocal_569[3]), Global_35) && is_ped_facing_ped(&(uLocal_569[3]), Global_35, 80f)) && func_144(&(uLocal_569[3]), 1, 1) <= 8f)
					{
						iLocal_1096 = 1;
					}
				}
			}
			break;
		case 1:
			if (is_ped_on_mount(&(uLocal_569[3])))
			{
				iLocal_1096 = 4;
			}
			else
			{
				iLocal_1096 = 2;
			}
			break;
		case 2:
			if (func_235(-6f, 1, 0, 0))
			{
				_0x935cf6e42baf7f4d(&(uLocal_569[3]));
				task_react(&(uLocal_569[3]), Global_35, get_entity_coords(Global_35, true, false), "Default_Nervous", 1.2f, 0, 4);
				func_180(&(uLocal_569[3]), Global_35, &uLocal_593, 0, 15);
				iLocal_1096 = 3;
			}
			break;
		case 3:
			if (!func_168(&(uLocal_569[3]), 2121492476))
			{
				if (is_entity_dead(&(uLocal_569[0])))
				{
					clear_sequence_task(&uLocal_1117);
					open_sequence_task(&uLocal_1117);
					task_wander_in_area(0, -3659.04f, -2609.91f, -15.08f, 70f, 1077936128, 1086324736, 1);
					close_sequence_task(iVar1115);
					task_perform_sequence(&(uLocal_569[3]), iVar1115);
					clear_sequence_task(&uLocal_1117);
				}
				else
				{
					clear_sequence_task(&uLocal_1117);
					open_sequence_task(&uLocal_1117);
					task_mount_animal(0, Local_233[0]->f_11, -1, -1, 2f, 262144, 0, 0);
					_task_move_in_traffic(0, -1082130432, 512, 0);
					close_sequence_task(iVar1115);
					task_perform_sequence(&(uLocal_569[3]), iVar1115);
					clear_sequence_task(&uLocal_1117);
				}
				_0xaab050da48b57978(&(uLocal_569[3]), "Default_Nervous", 0, -1, 4);
				iLocal_1096 = 4;
			}
			break;
		case 4:
			break;
	}
}

bool func_154(int iParam0)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	iVar0 = get_interior_from_entity(iParam0);
	if (is_valid_interior(iVar0))
	{
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

void func_155()
{
	switch (iVar1093)
	{
		case 0:
			if (func_250())
			{
				iLocal_1095 = 1;
			}
			else
			{
				func_251();
			}
			break;
		case 1:
			if (func_252() || is_ped_performing_melee_action(&(uLocal_569[0]), 32768, 0))
			{
				if (is_ped_performing_melee_action(&(uLocal_569[0]), 32768, 0))
				{
				}
				iLocal_1095 = 2;
				func_152(2);
			}
			break;
		case 2:
			break;
	}
}

void func_156()
{
	switch (iVar1109)
	{
		case 0:
			if ((func_235(-4f, 1, 0, 0) && func_235(-4f, 1, &(uLocal_569[0]), 1)) && iVar1101 > 0)
			{
				func_238(&(uLocal_569[0]), &(uLocal_569[0]), func_61(79), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				uLocal_1111 = iVar1109 + 1;
			}
			break;
		case 1:
			if (func_235(-4f, 1, 0, 0) && func_235(-4f, 1, &(uLocal_569[0]), 1))
			{
				func_238(&(uLocal_569[0]), &(uLocal_569[0]), func_61(80), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				uLocal_1111 = iVar1109 + 1;
			}
			break;
		case 2:
			if (func_235(-4f, 1, 0, 0) && func_235(-4f, 1, &(uLocal_569[0]), 1))
			{
				func_238(&(uLocal_569[0]), &(uLocal_569[0]), func_61(81), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				uLocal_1111 = iVar1109 + 1;
			}
			break;
		case 3:
			if (func_235(-4f, 1, 0, 0) && func_235(-4f, 1, &(uLocal_569[0]), 1))
			{
				func_238(&(uLocal_569[0]), &(uLocal_569[0]), func_61(82), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				uLocal_1111 = iVar1109 + 1;
			}
			break;
		case 4:
			if (func_235(-4f, 1, 0, 0) && func_235(-4f, 1, &(uLocal_569[0]), 1))
			{
				func_238(&(uLocal_569[0]), &(uLocal_569[0]), func_61(83), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				uLocal_1111 = iVar1109 + 1;
			}
			break;
		case 5:
			if (func_235(-4f, 1, 0, 0) && func_235(-4f, 1, &(uLocal_569[0]), 1))
			{
				func_238(&(uLocal_569[0]), &(uLocal_569[0]), func_61(83), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				uLocal_1111 = iVar1109 + 1;
			}
			break;
	}
	if (!bVar1081)
	{
		if (iVar1109 > 2 && !func_235(0f, 1, &(uLocal_569[0]), 0))
		{
			if (func_41(&(uLocal_569[0]), Global_36, 1) < 40f)
			{
				iLocal_1083 = 1;
			}
		}
	}
}

int func_157()
{
	fVar0 = 20f;
	switch (iVar1101)
	{
		case 0:
			if (fVar1111 >= 0f)
			{
				func_238(&(uLocal_569[0]), &(uLocal_569[1]), func_61(0), 0, -1082130432, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				func_253(1515458263, &(uLocal_569[0]), 1);
				uLocal_1103 = iVar1101 + 1;
			}
			break;
		case 1:
			if (fVar1111 >= 0.18f)
			{
				func_238(&(uLocal_569[1]), &(uLocal_569[1]), func_61(1), 0, fVar0, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				uLocal_1103 = iVar1101 + 1;
			}
			break;
		case 2:
			if ((fVar1111 >= 0.22f && func_235(-4f, 1, &(uLocal_569[3]), 1)) && func_235(-4f, 1, &(uLocal_569[1]), 1))
			{
				func_238(&(uLocal_569[3]), &(uLocal_569[1]), func_61(2), 0, fVar0, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				uLocal_1103 = iVar1101 + 1;
			}
			break;
		case 3:
			if ((fVar1111 >= 0.27f && func_235(-4f, 1, &(uLocal_569[3]), 1)) && func_235(-4f, 1, &(uLocal_569[1]), 1))
			{
				func_238(&(uLocal_569[1]), &(uLocal_569[1]), func_61(3), 0, fVar0, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				uLocal_1103 = iVar1101 + 1;
			}
			break;
		case 4:
			if ((fVar1111 >= 0.33f && func_235(-4f, 1, &(uLocal_569[3]), 1)) && func_235(-4f, 1, &(uLocal_569[1]), 1))
			{
				func_238(&(uLocal_569[3]), &(uLocal_569[1]), func_61(4), 0, fVar0, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				uLocal_1103 = iVar1101 + 1;
			}
			break;
		case 5:
			if ((fVar1111 >= 0.48f && func_235(-4f, 1, &(uLocal_569[3]), 1)) && func_235(-4f, 1, &(uLocal_569[1]), 1))
			{
				func_238(&(uLocal_569[1]), &(uLocal_569[1]), func_61(5), 0, fVar0, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				uLocal_1103 = iVar1101 + 1;
			}
			break;
		case 6:
			if ((fVar1111 >= 0.52f && func_235(-4f, 1, &(uLocal_569[3]), 1)) && func_235(-4f, 1, &(uLocal_569[1]), 1))
			{
				func_238(&(uLocal_569[3]), &(uLocal_569[1]), func_61(6), 0, fVar0, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				uLocal_1103 = iVar1101 + 1;
			}
			break;
		case 7:
			if ((fVar1111 >= 0.6f && func_235(-4f, 1, &(uLocal_569[3]), 1)) && func_235(-4f, 1, &(uLocal_569[1]), 1))
			{
				func_238(&(uLocal_569[1]), &(uLocal_569[1]), func_61(7), 0, fVar0, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				uLocal_1103 = iVar1101 + 1;
			}
			break;
		case 8:
			if ((fVar1111 >= 0.61f && func_235(-4f, 1, &(uLocal_569[2]), 1)) && func_235(-4f, 1, &(uLocal_569[1]), 1))
			{
				func_238(&(uLocal_569[2]), &(uLocal_569[1]), func_61(8), 0, fVar0, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				func_238(&(uLocal_569[1]), &(uLocal_569[2]), func_61(16), 0, fVar0, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				uLocal_1103 = iVar1101 + 1;
			}
			break;
		case 9:
			if ((fVar1111 >= 0.63f && func_235(-4f, 1, &(uLocal_569[1]), 1)) && func_235(-4f, 1, &(uLocal_569[3]), 1))
			{
				func_238(&(uLocal_569[3]), &(uLocal_569[1]), func_61(9), 0, fVar0, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				func_238(&(uLocal_569[1]), &(uLocal_569[3]), func_61(17), 0, fVar0, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				uLocal_1103 = iVar1101 + 1;
			}
			break;
		case 10:
			if ((fVar1111 >= 0.69f && func_235(-4f, 1, &(uLocal_569[1]), 1)) && func_235(-4f, 1, &(uLocal_569[3]), 1))
			{
				func_238(&(uLocal_569[1]), &(uLocal_569[1]), func_61(10), 0, fVar0, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				uLocal_1103 = iVar1101 + 1;
			}
			break;
		case 11:
			uLocal_1103 = iVar1101 + 1;
			break;
		case 12:
			if ((fVar1111 >= 0.75f && func_235(-4f, 1, &(uLocal_569[2]), 1)) && func_235(-4f, 1, &(uLocal_569[1]), 1))
			{
				func_238(&(uLocal_569[2]), &(uLocal_569[1]), func_61(12), 0, fVar0, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				uLocal_1103 = iVar1101 + 1;
			}
			break;
		case 13:
			if ((fVar1111 >= 0.79f && func_235(-4f, 1, &(uLocal_569[2]), 1)) && func_235(-4f, 1, &(uLocal_569[3]), 1))
			{
				func_238(&(uLocal_569[3]), &(uLocal_569[1]), func_61(13), 0, fVar0, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				uLocal_1103 = iVar1101 + 1;
			}
			break;
		case 14:
			return 1;
	}
	if (iVar1101 > 1)
	{
		if (!bVar1082 && !bVar1081)
		{
			if (!func_235(0f, 1, &(uLocal_569[0]), 1))
			{
				if (func_41(&(uLocal_569[0]), Global_36, 1) < 20f)
				{
					iLocal_1083 = 1;
				}
			}
			if (!func_235(0f, 1, &(uLocal_569[1]), 1))
			{
				if (func_41(&(uLocal_569[1]), Global_36, 1) < 20f)
				{
					iLocal_1083 = 1;
				}
			}
			if (!func_235(0f, 1, &(uLocal_569[2]), 1))
			{
				if (func_41(&(uLocal_569[2]), Global_36, 1) < 20f)
				{
					iLocal_1083 = 1;
				}
			}
		}
	}
	return 0;
}

void func_158()
{
	fVar0 = 20f;
	switch (iVar1108)
	{
		case 0:
			if ((fVar1111 >= 0.02f && func_235(-4f, 1, &(uLocal_569[0]), 1)) && func_235(-4f, 1, &(uLocal_569[1]), 1))
			{
				func_238(&(uLocal_569[0]), &(uLocal_569[1]), func_61(19), 0, fVar0, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				func_238(&(uLocal_569[1]), &(uLocal_569[1]), func_61(18), 0, fVar0, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				uLocal_1110 = iVar1108 + 1;
			}
			break;
		case 1:
			if ((fVar1111 >= 0.07f && func_235(-4f, 1, &(uLocal_569[0]), 1)) && func_235(-4f, 1, &(uLocal_569[1]), 1))
			{
				func_238(&(uLocal_569[1]), &(uLocal_569[1]), func_61(20), 0, fVar0, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				uLocal_1110 = iVar1108 + 1;
			}
			break;
		case 2:
			if ((fVar1111 >= 0.12f && func_235(-4f, 1, &(uLocal_569[3]), 1)) && func_235(-4f, 1, &(uLocal_569[1]), 1))
			{
				func_238(&(uLocal_569[3]), &(uLocal_569[1]), func_61(21), 0, fVar0, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				uLocal_1110 = iVar1108 + 1;
			}
			break;
		case 3:
			if ((fVar1111 >= 0.19f && func_235(-4f, 1, &(uLocal_569[3]), 1)) && func_235(-4f, 1, &(uLocal_569[1]), 1))
			{
				func_238(&(uLocal_569[1]), &(uLocal_569[1]), func_61(22), 0, fVar0, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				uLocal_1110 = iVar1108 + 1;
			}
			break;
		case 4:
			if ((fVar1111 >= 0.24f && func_235(-4f, 1, &(uLocal_569[2]), 1)) && func_235(-4f, 1, &(uLocal_569[1]), 1))
			{
				func_238(&(uLocal_569[2]), &(uLocal_569[1]), func_61(23), 0, fVar0, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				uLocal_1110 = iVar1108 + 1;
			}
			break;
		case 5:
			if ((fVar1111 >= 0.28f && func_235(-4f, 1, &(uLocal_569[2]), 1)) && func_235(-4f, 1, &(uLocal_569[1]), 1))
			{
				func_238(&(uLocal_569[1]), &(uLocal_569[1]), func_61(24), 0, fVar0, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				uLocal_1110 = iVar1108 + 1;
			}
			break;
		case 6:
			if (fVar1111 >= 0.33f && func_235(-4f, 1, &(uLocal_569[1]), 1))
			{
				func_238(&(uLocal_569[1]), &(uLocal_569[1]), func_61(25), 0, fVar0, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				uLocal_1110 = iVar1108 + 1;
			}
			break;
		case 7:
			if ((fVar1111 >= 0.38f && func_235(-4f, 1, &(uLocal_569[3]), 1)) && func_235(-4f, 1, &(uLocal_569[1]), 1))
			{
				func_238(&(uLocal_569[3]), &(uLocal_569[1]), func_61(26), 0, fVar0, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				uLocal_1110 = iVar1108 + 1;
			}
			break;
		case 8:
			if ((fVar1111 >= 0.44f && func_235(-4f, 1, &(uLocal_569[3]), 1)) && func_235(-4f, 1, &(uLocal_569[1]), 1))
			{
				func_238(&(uLocal_569[1]), &(uLocal_569[1]), func_61(27), 0, fVar0, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				uLocal_1110 = iVar1108 + 1;
			}
			break;
		case 9:
			if ((fVar1111 >= 0.55f && func_235(-4f, 1, &(uLocal_569[3]), 1)) && func_235(-4f, 1, &(uLocal_569[1]), 1))
			{
				func_238(&(uLocal_569[3]), &(uLocal_569[1]), func_61(28), 0, fVar0, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				func_238(&(uLocal_569[1]), &(uLocal_569[1]), func_61(30), 0, fVar0, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				uLocal_1110 = iVar1108 + 1;
			}
			break;
		case 10:
			_0xaab050da48b57978(&(uLocal_569[3]), "Default_Nervous", 0, -1, 4);
			uLocal_1110 = iVar1108 + 1;
			break;
	}
}

void func_159(var uParam0)
{
	func_254(uParam0, 0f);
}

void func_160(int iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_255(&(iParam0->f_18));
}

void func_161(int* iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_117(iParam0, 4))
		{
			func_120(&(iParam0->f_6), 1, 1);
			func_118(iParam0, 4);
		}
	}
	else if (func_117(iParam0, 4))
	{
		func_119(iParam0, 4);
		func_118(iParam0, 14);
	}
}

bool func_162()
{
	if (is_entity_dead(&(uLocal_569[0])))
	{
		if (_0x005e6f28dd7ed58d(iVar457, "fem") && !func_168(&(uLocal_569[3]), 242628503))
		{
			func_161(Local_974[1], 0);
			func_161(Local_974[2], 0);
			func_161(Local_974[0], 0);
			func_63(Local_974[1], 1, 0);
			func_63(Local_974[2], 1, 0);
			func_63(Local_974[0], 1, 0);
			_0xa3db37edf9a74635(get_player_index(), &(uLocal_569[3]), 7, 0, 1);
			_0xa3db37edf9a74635(get_player_index(), &(uLocal_569[3]), 19, 0, 1);
			_0xa3db37edf9a74635(get_player_index(), &(uLocal_569[3]), 20, 0, 1);
			clear_sequence_task(&uLocal_1117);
			open_sequence_task(&uLocal_1117);
			task_wander_in_area(0, -3659.04f, -2609.91f, -15.08f, 70f, 1077936128, 1086324736, 1);
			close_sequence_task(iVar1115);
			task_perform_sequence(&(uLocal_569[3]), iVar1115);
			clear_sequence_task(&uLocal_1117);
			return true;
		}
	}
	else if (_0x005e6f28dd7ed58d(iVar457, "fem") && !func_168(&(uLocal_569[3]), 242628503))
	{
		func_161(Local_974[1], 0);
		func_161(Local_974[2], 0);
		func_161(Local_974[0], 0);
		func_63(Local_974[1], 1, 0);
		func_63(Local_974[2], 1, 0);
		func_63(Local_974[0], 1, 0);
		_0xa3db37edf9a74635(get_player_index(), &(uLocal_569[3]), 7, 0, 1);
		_0xa3db37edf9a74635(get_player_index(), &(uLocal_569[3]), 19, 0, 1);
		_0xa3db37edf9a74635(get_player_index(), &(uLocal_569[3]), 20, 0, 1);
		clear_sequence_task(&uLocal_1117);
		open_sequence_task(&uLocal_1117);
		task_mount_animal(0, Local_233[0]->f_11, -1, -1, 2f, 262144, 0, 0);
		_task_move_in_traffic(0, -1082130432, 512, 0);
		close_sequence_task(iVar1115);
		task_perform_sequence(&(uLocal_569[3]), iVar1115);
		clear_sequence_task(&uLocal_1117);
		remove_anim_scene_entity(iVar457, "p_door44x", _get_anim_scene_object(iVar457, "p_door44x", false));
		return true;
	}
	return false;
}

void func_163()
{
	fVar0 = 20f;
	switch (iVar1108)
	{
		case 0:
			if ((fVar1111 >= 0.02f && func_235(-4f, 1, &(uLocal_569[3]), 1)) && func_235(-4f, 1, &(uLocal_569[1]), 1))
			{
				func_238(&(uLocal_569[3]), &(uLocal_569[1]), func_61(32), 0, fVar0, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				func_238(&(uLocal_569[1]), &(uLocal_569[3]), func_61(31), 0, fVar0, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				uLocal_1110 = iVar1108 + 1;
			}
			break;
		case 1:
			if ((fVar1111 >= 0.14f && func_235(-4f, 1, &(uLocal_569[3]), 1)) && func_235(-4f, 1, &(uLocal_569[1]), 1))
			{
				func_238(&(uLocal_569[1]), &(uLocal_569[1]), func_61(33), 0, fVar0, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				uLocal_1110 = iVar1108 + 1;
			}
			break;
		case 2:
			uLocal_1110 = iVar1108 + 1;
			break;
		case 3:
			if ((fVar1111 >= 0.35f && func_235(-4f, 1, &(uLocal_569[3]), 1)) && func_235(-4f, 1, &(uLocal_569[1]), 1))
			{
				func_238(&(uLocal_569[1]), &(uLocal_569[1]), func_61(35), 0, fVar0, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				uLocal_1110 = iVar1108 + 1;
			}
			break;
		case 4:
			if (fVar1111 >= 0.4f && func_235(-4f, 1, &(uLocal_569[1]), 1))
			{
				func_238(&(uLocal_569[2]), &(uLocal_569[1]), func_61(36), 0, fVar0, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				uLocal_1110 = iVar1108 + 1;
			}
			break;
		case 5:
			if ((fVar1111 >= 0.55f && func_235(-4f, 1, &(uLocal_569[3]), 1)) && func_235(-4f, 1, &(uLocal_569[1]), 1))
			{
				func_238(&(uLocal_569[3]), &(uLocal_569[1]), func_61(37), 0, fVar0, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				uLocal_1110 = iVar1108 + 1;
			}
			break;
		case 6:
			if ((fVar1111 >= 0.59f && func_235(-4f, 1, &(uLocal_569[3]), 1)) && func_235(-4f, 1, &(uLocal_569[1]), 1))
			{
				func_238(&(uLocal_569[2]), &(uLocal_569[1]), func_61(38), 0, fVar0, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				uLocal_1110 = iVar1108 + 1;
			}
			break;
		case 7:
			if (fVar1111 >= 0.66f && func_235(-4f, 1, &(uLocal_569[1]), 1))
			{
				func_238(&(uLocal_569[1]), &(uLocal_569[1]), func_61(39), 0, fVar0, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				uLocal_1110 = iVar1108 + 1;
			}
			break;
		case 8:
			if (fVar1111 >= 0.71f && func_235(-4f, 1, &(uLocal_569[1]), 1))
			{
				func_238(&(uLocal_569[2]), &(uLocal_569[1]), func_61(40), 0, fVar0, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				uLocal_1110 = iVar1108 + 1;
			}
			break;
		case 9:
			if (fVar1111 >= 0.78f && func_235(-4f, 1, &(uLocal_569[1]), 1))
			{
				if (func_238(&(uLocal_569[1]), &(uLocal_569[1]), func_61(41), 0, fVar0, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0))
				{
					uLocal_1110 = iVar1108 + 1;
				}
			}
			break;
		case 10:
			if ((fVar1111 >= 0.87f && func_235(-4f, 1, &(uLocal_569[3]), 1)) && func_235(-4f, 1, &(uLocal_569[1]), 1))
			{
				func_238(&(uLocal_569[3]), &(uLocal_569[1]), func_61(42), 0, fVar0, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				_0xaab050da48b57978(&(uLocal_569[3]), "Default_Nervous", 0, -1, 4);
				uLocal_1110 = iVar1108 + 1;
			}
			break;
	}
}

void func_164()
{
	switch (iVar1105)
	{
		case 0:
			if (func_235(5f, 1, 0, 0) && func_235(-4f, 1, &(uLocal_569[1]), 1))
			{
				if (func_109())
				{
					func_238(&(uLocal_569[2]), &(uLocal_569[0]), func_61(54), 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				}
				else
				{
					func_238(&(uLocal_569[1]), &(uLocal_569[0]), func_61(54), 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				}
				uLocal_1107 = iVar1105 + 1;
			}
			break;
		case 1:
			if (func_235(10f, 1, 0, 0) && func_235(-4f, 1, &(uLocal_569[1]), 1))
			{
				if (func_109())
				{
					func_238(&(uLocal_569[2]), &(uLocal_569[0]), func_61(55), 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				}
				else
				{
					func_238(&(uLocal_569[1]), &(uLocal_569[0]), func_61(55), 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				}
				uLocal_1107 = iVar1105 + 1;
			}
			break;
		case 2:
			if (func_235(10f, 1, 0, 0) && func_235(-4f, 1, &(uLocal_569[1]), 1))
			{
				if (func_109())
				{
					func_238(&(uLocal_569[2]), &(uLocal_569[0]), func_61(56), 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				}
				else
				{
					func_238(&(uLocal_569[1]), &(uLocal_569[0]), func_61(56), 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				}
				uLocal_1107 = iVar1105 + 1;
			}
			break;
	}
}

void func_165()
{
	func_160(&iLocal_691, 0);
	func_160(&iLocal_764, 0);
	func_62(Local_712[2], "RE_INTER_ANTAGONIZE", func_61(91), 648122183, 0, 0, 0, 1, 0);
	func_62(Local_712[1], "RE_INTER_POS", func_61(90), -163964935, 0, 0, 0, 1, 0);
	func_63(Local_712[1], 0, 0);
	func_63(Local_712[2], 1, 0);
	func_62(Local_785[2], "RE_INTER_ANTAGONIZE", func_61(93), 648122183, 0, 0, 0, 1, 0);
	func_62(Local_785[1], "RE_INTER_POS", func_61(92), -163964935, 0, 0, 0, 1, 0);
	func_63(Local_785[1], 0, 0);
	func_63(Local_785[2], 1, 0);
}

float func_166(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_167()
{
	if ((((((((((_is_weapon_bow(get_ped_cause_of_death(&(uLocal_569[0]))) || get_ped_cause_of_death(&(uLocal_569[0])) == 567069252) || get_ped_cause_of_death(&(uLocal_569[0])) == -281894307) || get_ped_cause_of_death(&(uLocal_569[0])) == 1247405313) || get_ped_cause_of_death(&(uLocal_569[0])) == 165751297) || get_ped_cause_of_death(&(uLocal_569[0])) == -618550132) || get_ped_cause_of_death(&(uLocal_569[0])) == -164645981) || get_ped_cause_of_death(&(uLocal_569[0])) == 827679807) || get_ped_cause_of_death(&(uLocal_569[0])) == 680856689) || get_ped_cause_of_death(&(uLocal_569[0])) == -1511427369) || get_ped_cause_of_death(&(uLocal_569[0])) == 1742487518)
	{
		return 1;
	}
	return 0;
}

bool func_168(int iParam0, int iParam1)
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

bool func_169()
{
	switch (iVar1106)
	{
		case 0:
			uLocal_1108 = iVar1106 + 1;
			break;
		case 1:
			if (func_235(-4f, 1, 0, 0) && func_235(-4f, 1, &(uLocal_569[1]), 1))
			{
				func_238(&(uLocal_569[1]), &(uLocal_569[0]), func_61(64), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				uLocal_1108 = iVar1106 + 1;
			}
			break;
		case 2:
			if (func_235(-4f, 1, 0, 0) && func_235(-4f, 1, &(uLocal_569[1]), 1))
			{
				if (func_109())
				{
					func_238(&(uLocal_569[2]), &(uLocal_569[0]), func_61(57), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					func_238(&(uLocal_569[1]), &(uLocal_569[0]), func_61(57), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				uLocal_1108 = iVar1106 + 1;
			}
			break;
		case 3:
			return true;
	}
	return false;
}

bool func_170()
{
	switch (iVar1106)
	{
		case 0:
			func_256(&(uLocal_569[1]), 0);
			func_238(&(uLocal_569[1]), &(uLocal_569[0]), func_61(58), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			uLocal_1108 = iVar1106 + 1;
			break;
		case 1:
			if (func_235(-4f, 1, 0, 0) && func_235(-4f, 1, &(uLocal_569[1]), 1))
			{
				func_238(&(uLocal_569[1]), &(uLocal_569[0]), func_61(59), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				uLocal_1108 = iVar1106 + 1;
			}
			break;
		case 2:
			if (func_235(-2f, 1, 0, 0) && func_235(-4f, 1, &(uLocal_569[1]), 1))
			{
				func_238(&(uLocal_569[1]), &(uLocal_569[0]), func_61(60), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				uLocal_1108 = iVar1106 + 1;
			}
			break;
		case 3:
			return true;
	}
	return false;
}

bool func_171()
{
	switch (iVar1106)
	{
		case 0:
			task_react(&(uLocal_569[1]), &(uLocal_569[0]), get_entity_coords(&(uLocal_569[0]), true, false), "Default_Scared", 3f, 0, 4);
			func_256(&(uLocal_569[1]), 0);
			func_238(&(uLocal_569[1]), &(uLocal_569[0]), func_61(61), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			uLocal_1108 = iVar1106 + 1;
			break;
		case 1:
			if (func_235(-4f, 1, 0, 0) && func_235(-4f, 1, &(uLocal_569[1]), 1))
			{
				func_238(&(uLocal_569[1]), &(uLocal_569[0]), func_61(62), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				uLocal_1108 = iVar1106 + 1;
			}
			break;
		case 2:
			return true;
	}
	return false;
}

char* func_172(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			sVar0 = "miss_Bandito2";
			open_patrol_route(sVar0);
			add_patrol_route_node(0, "WORLD_HUMAN_GUARD_SCOUT", -3549.79f, -3055.54f, 11.01f, -3534.32f, -3057.84f, 11.38f, 3000, 0);
			add_patrol_route_node(1, "WORLD_HUMAN_GUARD_SCOUT", -3550.71f, -3042.16f, 10.93f, -3554.83f, -3039.85f, 10.9f, 3000, 0);
			add_patrol_route_node(2, "WORLD_HUMAN_GUARD_SCOUT", -3566.01f, -3028.85f, 10.74f, -3566.21f, -3018.71f, 10.6f, 3000, 0);
			add_patrol_route_node(3, "WORLD_HUMAN_GUARD_SCOUT", -3559.9f, -3014.03f, 10.59f, -3554.43f, -3020.65f, 10.73f, 3000, 0);
			add_patrol_route_link(0, 1);
			add_patrol_route_link(1, 2);
			add_patrol_route_link(2, 3);
			add_patrol_route_link(3, 0);
			close_patrol_route();
			create_patrol_route();
			break;
		case 2:
			sVar0 = "miss_Bandito3";
			open_patrol_route(sVar0);
			add_patrol_route_node(0, "WORLD_HUMAN_GUARD_SCOUT", -3537.44f, -3038.72f, 10.97f, -3527.73f, -3037.01f, 11.27f, 3000, 0);
			add_patrol_route_node(1, "WORLD_HUMAN_GUARD_SCOUT", -3542.76f, -3025.73f, 10.89f, -3551.49f, -3028.19f, 10.76f, 3000, 0);
			add_patrol_route_node(2, "WORLD_HUMAN_GUARD_SCOUT", -3543.43f, -3013.92f, 10.68f, -3543.89f, -2993.73f, 9.22f, 3000, 0);
			add_patrol_route_link(0, 1);
			add_patrol_route_link(1, 2);
			add_patrol_route_link(2, 0);
			close_patrol_route();
			create_patrol_route();
			break;
	}
	return sVar0;
}

void func_173()
{
	switch (iVar1110)
	{
		case 0:
			if (func_235(-2f, 1, 0, 0) && func_235(-4f, 1, &(uLocal_569[2]), 1))
			{
				uLocal_1112 = iVar1110 + 1;
			}
			break;
		case 1:
			if ((func_235(1f, 1, 0, 0) && func_235(-4f, 1, &(uLocal_569[1]), 1)) && func_235(-4f, 1, &(uLocal_569[2]), 1))
			{
				func_238(&(uLocal_569[1]), &(uLocal_569[1]), func_61(95), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				uLocal_1112 = iVar1110 + 1;
			}
			break;
		case 2:
			if ((func_235(1f, 1, 0, 0) && func_235(-4f, 1, &(uLocal_569[1]), 1)) && func_235(-4f, 1, &(uLocal_569[2]), 1))
			{
				uLocal_1112 = iVar1110 + 1;
			}
			break;
		case 3:
			if ((func_235(1f, 1, 0, 0) && func_235(-4f, 1, &(uLocal_569[1]), 1)) && func_235(-4f, 1, &(uLocal_569[2]), 1))
			{
				func_238(&(uLocal_569[1]), &(uLocal_569[1]), func_61(97), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				uLocal_1112 = iVar1110 + 1;
			}
			break;
	}
}

float func_174(var uParam0)
{
	if (!func_257(uParam0))
	{
		return 0f;
	}
	if (func_258(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_259() - uParam0->f_1);
}

bool func_175()
{
	if (iVar1130 == 1)
	{
		return false;
	}
	if (_0x1f0e401031e20146(uVar457, "PBL_EXIT_A"))
	{
		if (fVar1111 >= 0.11f)
		{
			func_260(Global_35, -3552.35f, -3010.33f, 10.82f, 1);
			iLocal_1135 = func_261(0);
			iLocal_1132 = 1;
			return true;
		}
	}
	return false;
}

bool func_176()
{
	if (iVar1131 == 1)
	{
		return false;
	}
	if (_0x1f0e401031e20146(uVar457, "pbl_action"))
	{
		if (fVar1111 >= 0f && fVar1111 <= 0.62f)
		{
			func_260(Global_35, -3552.35f, -3010.33f, 10.82f, 1);
			iLocal_1136 = func_261(1);
			iLocal_1133 = 1;
			return true;
		}
	}
	if (_0x1f0e401031e20146(uVar457, "PBL_EXIT_A"))
	{
		if (fVar1111 >= 0.43f)
		{
			func_260(Global_35, -3552.35f, -3010.33f, 10.82f, 1);
			iLocal_1136 = func_261(1);
			iLocal_1133 = 1;
			return true;
		}
	}
	return false;
}

bool func_177()
{
	if (iVar1132 == 1)
	{
		return false;
	}
	if (_0x1f0e401031e20146(uVar457, "pbl_action"))
	{
		if (fVar1111 >= 0f && fVar1111 <= 0.76f)
		{
			func_260(Global_35, -3552.35f, -3010.33f, 10.82f, 1);
			iLocal_1137 = func_261(2);
			iLocal_1134 = 1;
			return true;
		}
		if (fVar1111 >= 0.86f)
		{
			func_260(Global_35, -3552.35f, -3010.33f, 10.82f, 1);
			iLocal_1137 = func_261(2);
			iLocal_1134 = 1;
			return true;
		}
	}
	if (_0x1f0e401031e20146(uVar457, "PBL_EXIT_A"))
	{
		if (fVar1111 >= 0f)
		{
			func_260(Global_35, -3552.35f, -3010.33f, 10.82f, 1);
			iLocal_1137 = func_261(2);
			iLocal_1134 = 1;
			return true;
		}
	}
	return false;
}

void func_178(var uParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		func_233(uParam0);
		func_234(iParam1, uParam2);
	}
	func_262(*uParam0, 1, bParam4);
}

void func_179(int iParam0, int iParam1)
{
	Global_40.f_9571[iParam0]->f_9 = iParam1;
}

void func_180(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	uParam2->f_3 = iParam1;
	uParam2->f_7 = iParam3;
	if (func_166(iParam0, iParam1, 1, 1) <= IntToFloat(iParam4))
	{
		task_look_at_entity(iParam0, iParam1, -1, 2108, 51, 1);
	}
}

bool func_181()
{
	func_263();
	switch (iVar1102)
	{
		case 0:
			stop_current_playing_speech(&(uLocal_569[1]), 0);
			stop_current_playing_speech(&(uLocal_569[2]), 0);
			stop_current_playing_speech(&(uLocal_569[3]), 0);
			func_238(&(uLocal_569[0]), Global_35, func_61(43), 0, -1082130432, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
			iLocal_1104 = iVar1102 + 1;
			clear_sequence_task(&uLocal_1114);
			open_sequence_task(&uLocal_1114);
			if (func_175())
			{
				task_play_anim_advanced(0, &(Local_467[iVar1133]), Local_467[iVar1133]->f_1, -3552.427f, -3009.681f, 10.798f, 0f, 0f, 102.75f, 1.5f, -1.5f, -1, 33152, 0f, 2, 1, 0);
				task_aim_at_entity(0, Global_35, -1, 0, 0);
			}
			else
			{
				iLocal_1132 = 1;
				task_react(0, Global_35, get_entity_coords(Global_35, true, false), "TaskCombat_Panic", 1f, 0, 4);
			}
			close_sequence_task(iVar1112);
			task_perform_sequence(&(uLocal_569[0]), iVar1112);
			clear_sequence_task(&uLocal_1114);
			clear_sequence_task(&uLocal_1115);
			open_sequence_task(&uLocal_1115);
			if (func_176())
			{
				task_play_anim_advanced(0, &(Local_467[iVar1134]), Local_467[iVar1134]->f_1, -3552.427f, -3009.681f, 10.798f, 0f, 0f, 102.75f, 1.5f, -1.5f, -1, 33152, 0f, 2, 1, 0);
				task_aim_at_entity(0, Global_35, -1, 0, 0);
			}
			else
			{
				iLocal_1133 = 1;
				task_react(0, Global_35, get_entity_coords(Global_35, true, false), "TaskCombat_Panic", 1f, 0, 4);
			}
			close_sequence_task(iVar1113);
			_task_perform_sequence_2(&(uLocal_569[1]), iVar1113, 1f, 1f);
			clear_sequence_task(&uLocal_1115);
			clear_sequence_task(&uLocal_1116);
			open_sequence_task(&uLocal_1116);
			if (func_177())
			{
				task_play_anim_advanced(0, &(Local_467[iVar1135]), Local_467[iVar1135]->f_1, -3552.427f, -3009.681f, 10.798f, 0f, 0f, 102.75f, 1.5f, -1.5f, -1, 33152, 0f, 2, 1, 0);
				task_aim_at_entity(0, Global_35, -1, 0, 0);
			}
			else
			{
				iLocal_1134 = 1;
				task_react(0, Global_35, get_entity_coords(Global_35, true, false), "TaskCombat_Panic", 1f, 0, 4);
			}
			close_sequence_task(iVar1114);
			_task_perform_sequence_2(&(uLocal_569[2]), iVar1114, 1.5f, 1.5f);
			clear_sequence_task(&uLocal_1116);
			clear_sequence_task(&uLocal_1117);
			open_sequence_task(&uLocal_1117);
			task_react(0, Global_35, get_entity_coords(Global_35, true, false), "TaskCombat_Panic", 1f, 0, 4);
			close_sequence_task(iVar1115);
			task_perform_sequence(&(uLocal_569[3]), iVar1115);
			clear_sequence_task(&uLocal_1117);
			break;
		case 1:
			if (func_235(-6f, 1, 0, 0) && func_235(-4f, 1, &(uLocal_569[0]), 1))
			{
				func_238(&(uLocal_569[0]), &(uLocal_569[1]), func_61(44), 0, -1082130432, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_1104 = iVar1102 + 1;
			}
			break;
		case 2:
			return true;
		case 3:
			return true;
	}
	return false;
}

bool func_182()
{
	func_263();
	switch (iVar1102)
	{
		case 0:
			stop_current_playing_speech(&(uLocal_569[1]), 0);
			stop_current_playing_speech(&(uLocal_569[2]), 0);
			stop_current_playing_speech(&(uLocal_569[3]), 0);
			iLocal_1104 = iVar1102 + 1;
			clear_sequence_task(&uLocal_1114);
			open_sequence_task(&uLocal_1114);
			if (func_175())
			{
				task_play_anim_advanced(0, &(Local_467[iVar1133]), Local_467[iVar1133]->f_1, -3552.427f, -3009.681f, 10.798f, 0f, 0f, 102.75f, 1.5f, -1.5f, -1, 33152, 0f, 2, 1, 0);
				task_aim_at_entity(0, Global_35, -1, 0, 0);
			}
			else
			{
				iLocal_1132 = 1;
				task_react(0, Global_35, get_entity_coords(Global_35, true, false), "TaskCombat_Panic", 1f, 0, 4);
			}
			close_sequence_task(iVar1112);
			task_perform_sequence(&(uLocal_569[0]), iVar1112);
			clear_sequence_task(&uLocal_1114);
			clear_sequence_task(&uLocal_1115);
			open_sequence_task(&uLocal_1115);
			if (func_176())
			{
				task_play_anim_advanced(0, &(Local_467[iVar1134]), Local_467[iVar1134]->f_1, -3552.427f, -3009.681f, 10.798f, 0f, 0f, 102.75f, 1.5f, -1.5f, -1, 33152, 0f, 2, 1, 0);
				task_aim_at_entity(0, Global_35, -1, 0, 0);
			}
			else
			{
				iLocal_1133 = 1;
				task_react(0, Global_35, get_entity_coords(Global_35, true, false), "TaskCombat_Panic", 1f, 0, 4);
			}
			close_sequence_task(iVar1113);
			_task_perform_sequence_2(&(uLocal_569[1]), iVar1113, 1f, 1f);
			clear_sequence_task(&uLocal_1115);
			clear_sequence_task(&uLocal_1116);
			open_sequence_task(&uLocal_1116);
			if (func_177())
			{
				task_play_anim_advanced(0, &(Local_467[iVar1135]), Local_467[iVar1135]->f_1, -3552.427f, -3009.681f, 10.798f, 0f, 0f, 102.75f, 1.5f, -1.5f, -1, 33152, 0f, 2, 1, 0);
				task_aim_at_entity(0, Global_35, -1, 0, 0);
			}
			else
			{
				iLocal_1134 = 1;
				task_react(0, Global_35, get_entity_coords(Global_35, true, false), "TaskCombat_Panic", 1f, 0, 4);
			}
			close_sequence_task(iVar1114);
			_task_perform_sequence_2(&(uLocal_569[2]), iVar1114, 1.5f, 1.5f);
			clear_sequence_task(&uLocal_1116);
			clear_sequence_task(&uLocal_1117);
			open_sequence_task(&uLocal_1117);
			task_react(0, Global_35, get_entity_coords(Global_35, true, false), "TaskCombat_Panic", 1f, 0, 4);
			close_sequence_task(iVar1115);
			task_perform_sequence(&(uLocal_569[3]), iVar1115);
			clear_sequence_task(&uLocal_1117);
			break;
		case 1:
			if (func_235(-6f, 1, 0, 0) && func_235(-4f, 1, &(uLocal_569[2]), 1))
			{
				iLocal_1104 = iVar1102 + 1;
			}
			break;
		case 2:
			return true;
	}
	return false;
}

int func_183()
{
	func_263();
	if (func_154(&(uLocal_569[1])) || func_154(&(uLocal_569[2])))
	{
		return 1;
	}
	switch (iVar1103)
	{
		case 0:
			stop_current_playing_speech(&(uLocal_569[1]), 0);
			stop_current_playing_speech(&(uLocal_569[2]), 0);
			uLocal_1105 = iVar1103 + 1;
			clear_sequence_task(&uLocal_1115);
			open_sequence_task(&uLocal_1115);
			if (func_176())
			{
				task_play_anim_advanced(0, &(Local_467[iVar1134]), Local_467[iVar1134]->f_1, -3552.427f, -3009.681f, 10.798f, 0f, 0f, 102.75f, 1.5f, -1.5f, -1, 33152, 0f, 2, 1, 0);
				task_aim_at_entity(0, Global_35, -1, 0, 0);
			}
			else
			{
				iLocal_1133 = 1;
				task_react(0, Global_35, get_entity_coords(Global_35, true, false), "TaskCombat_Panic", 1f, 0, 4);
			}
			close_sequence_task(iVar1113);
			_task_perform_sequence_2(&(uLocal_569[1]), iVar1113, 1f, 1f);
			clear_sequence_task(&uLocal_1115);
			clear_sequence_task(&uLocal_1116);
			open_sequence_task(&uLocal_1116);
			if (func_177())
			{
				task_play_anim_advanced(0, &(Local_467[iVar1135]), Local_467[iVar1135]->f_1, -3552.427f, -3009.681f, 10.798f, 0f, 0f, 102.75f, 1.5f, -1.5f, -1, 33152, 0f, 2, 1, 0);
				task_aim_at_entity(0, Global_35, -1, 0, 0);
			}
			else
			{
				iLocal_1134 = 1;
				task_react(0, Global_35, get_entity_coords(Global_35, true, false), "TaskCombat_Panic", 1f, 0, 4);
			}
			close_sequence_task(iVar1114);
			_task_perform_sequence_2(&(uLocal_569[2]), iVar1114, 1.5f, 1.5f);
			clear_sequence_task(&uLocal_1116);
			clear_ped_tasks(&(uLocal_569[3]), 1, 0);
			break;
		case 1:
			if (func_235(-6f, 1, 0, 0) && func_235(-4f, 1, &(uLocal_569[1]), 1))
			{
				uLocal_1105 = iVar1103 + 1;
			}
			break;
		case 2:
			if (((func_235(-6f, 1, 0, 0) && func_235(0f, 1, &(uLocal_569[1]), 1)) && func_235(0f, 1, &(uLocal_569[0]), 1)) && func_235(0f, 1, Global_35, 1))
			{
				uLocal_1105 = iVar1103 + 1;
			}
			break;
		case 3:
			return 1;
	}
	return 0;
}

int func_184()
{
	if (is_ped_dead_or_dying(&(uLocal_569[0]), true))
	{
		return 1;
	}
	switch (iVar1104)
	{
		case 0:
			if (!is_ped_dead_or_dying(&(uLocal_569[0]), true) && !is_ped_ragdoll(&(uLocal_569[0])))
			{
				func_238(&(uLocal_569[0]), Global_35, func_61(44), 0, -1082130432, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				if (func_175())
				{
					clear_sequence_task(&uLocal_1114);
					open_sequence_task(&uLocal_1114);
					task_play_anim_advanced(0, &(Local_467[iVar1133]), Local_467[iVar1133]->f_1, -3552.427f, -3009.681f, 10.798f, 0f, 0f, 102.75f, 1.5f, -1.5f, -1, 33152, 0f, 2, 1, 0);
					task_aim_at_entity(0, Global_35, -1, 0, 0);
					close_sequence_task(iVar1112);
					task_perform_sequence(&(uLocal_569[0]), iVar1112);
					clear_sequence_task(&uLocal_1114);
				}
				else
				{
					iLocal_1132 = 1;
				}
				uLocal_1106 = iVar1104 + 1;
			}
			break;
		case 1:
			uLocal_1106 = iVar1104 + 1;
			break;
		case 2:
			return 1;
	}
	return 0;
}

void func_185()
{
	iVar0 = _get_anim_scene_object(iVar457, "p_door44x", false);
	if (does_entity_exist(iVar0))
	{
		remove_anim_scene_entity(iVar457, "p_door44x", iVar0);
	}
	iVar0 = Local_362[4]->f_8;
	if (does_entity_exist(iVar0))
	{
		remove_anim_scene_entity(iVar457, "CASH02", iVar0);
	}
	iVar0 = Local_362[5]->f_8;
	if (does_entity_exist(iVar0))
	{
		remove_anim_scene_entity(iVar457, "cash03", iVar0);
	}
	iVar0 = Local_362[0]->f_8;
	if (does_entity_exist(iVar0))
	{
		remove_anim_scene_entity(iVar457, "jd01", iVar0);
	}
	iVar0 = Local_362[1]->f_8;
	if (does_entity_exist(iVar0))
	{
		remove_anim_scene_entity(iVar457, "shot01", iVar0);
	}
	iVar0 = Local_362[2]->f_8;
	if (does_entity_exist(iVar0))
	{
		remove_anim_scene_entity(iVar457, "shot02", iVar0);
	}
	iVar0 = Local_362[3]->f_8;
	if (does_entity_exist(iVar0))
	{
		remove_anim_scene_entity(iVar457, "shot03", iVar0);
	}
	iVar0 = Local_362[6]->f_8;
	if (does_entity_exist(iVar0))
	{
		remove_anim_scene_entity(iVar457, "beer", iVar0);
	}
	func_264(1894337720, 0, 1);
}

void func_186()
{
	switch (iVar1095)
	{
		case 0:
			if (func_154(&(uLocal_569[3])))
			{
				if (!func_168(&(uLocal_569[3]), 242628503))
				{
					func_260(Global_35, get_entity_coords(&(uLocal_569[3]), true, false), 1);
					clear_sequence_task(&uLocal_1117);
					open_sequence_task(&uLocal_1117);
					if (iVar1084 == 0)
					{
						task_follow_waypoint_recording(0, uVar590, 0, 8, -1, 0, 0, -1);
					}
					else if (iVar1084 == 1 || iVar1084 == 1)
					{
						task_follow_waypoint_recording(0, uVar590, 0, 131080, -1, 0, 0, -1);
					}
					else
					{
						task_follow_waypoint_recording(0, uVar590, 0, 8, -1, 0, 0, -1);
					}
					_task_flee_from_ped(0, Global_35, 0f, 0f, 0f, -1f, -1, 256, 1077936128, 0);
					close_sequence_task(iVar1115);
					task_perform_sequence(&(uLocal_569[3]), iVar1115);
					clear_sequence_task(&uLocal_1117);
					iLocal_1097 = 1;
				}
				else if (func_249() && func_154(&(uLocal_569[3])))
				{
					if (func_235(-4f, 1, 0, 0))
					{
					}
				}
			}
			break;
		case 1:
			if (is_waypoint_playback_going_on_for_ped(&(uLocal_569[3]), uVar590))
			{
				waypoint_playback_override_speed(&(uLocal_569[3]), 2f, 0, -1082130432, 0);
			}
			if (!func_154(&(uLocal_569[3])))
			{
				_task_flee_from_ped(&(uLocal_569[3]), Global_35, 0f, 0f, 0f, -1f, -1, 256, 1077936128, 0);
				iLocal_1097 = 2;
			}
			break;
		case 2:
			break;
	}
}

void func_187()
{
	uVar0[0] = &uLocal_569[0];
	uVar0[1] = &uLocal_569[1];
	uVar0[2] = &uLocal_569[2];
	iVar4 = 0;
	while (iVar4 < 3)
	{
		if (!is_entity_dead(&(uVar0[iVar4])))
		{
			func_240(&(uVar0[iVar4]), 0, &(Local_39.f_5), &uLocal_1098, 0, 0);
			if (iVar1124 == 1)
			{
				if (iVar1129 == 0)
				{
					iLocal_1131 = 1;
					stop_current_playing_speech(&(uLocal_569[1]), 0);
					if (iVar1093 == 2)
					{
						iLocal_1102 = 4;
					}
					else
					{
						iLocal_1102 = 5;
					}
				}
			}
			switch (iVar1100)
			{
				case 0:
					if (func_236(&(uVar0[iVar4]), Global_35, func_61(49), 0.8f, 1))
					{
						iLocal_1102 = -1;
					}
					break;
				case 1:
					if (func_236(&(uVar0[iVar4]), Global_35, func_61(50), 0.8f, 1))
					{
						iLocal_1102 = -1;
					}
					break;
				case 2:
					iLocal_1102 = -1;
					break;
				case 3:
					iLocal_1102 = -1;
					break;
				case 4:
					iLocal_1102 = -1;
					break;
				case 5:
					if (func_236(&(uLocal_569[1]), Global_35, func_61(49), 1f, 1))
					{
						iLocal_1102 = -1;
					}
					break;
			}
		}
		iVar4++;
	}
}

void func_188()
{
	if (func_249())
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_44(&(uLocal_569[iVar0]), 0, 0))
			{
				set_ped_combat_movement(&(uLocal_569[iVar0]), 2);
				remove_ped_defensive_area(&(uLocal_569[iVar0]), false);
				set_ped_combat_attributes(&(uLocal_569[iVar0]), 0, false);
			}
			iVar0++;
		}
		return;
	}
	func_260(Global_35, -3552.35f, -3010.33f, 10.82f, 0);
	switch (iVar1084)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 <= 2)
			{
				if (func_44(&(uLocal_569[iVar0]), 0, 0))
				{
					set_ped_combat_movement(&(uLocal_569[iVar0]), 1);
					switch (iVar0)
					{
						case 0:
							set_ped_sphere_defensive_area(&(uLocal_569[0]), -3554.02f, -3019.19f, 10.67f, 3f, 1, 0, 0);
							set_ped_combat_attributes(&(uLocal_569[0]), 51, true);
							break;
						case 1:
							set_ped_combat_attributes(&(uLocal_569[1]), 0, true);
							_0x50aa09a0da64e73c(&(uLocal_569[1]), -3550.93f, -3011.46f, 10.81f, -3550.93f, -3011.46f, 10.81f);
							set_ped_sphere_defensive_area(&(uLocal_569[1]), -3550.86f, -3010.68f, 10.89f, 1.5f, 1, 0, 0);
							break;
						case 2:
							set_ped_sphere_defensive_area(&(uLocal_569[2]), -3554.6f, -3013.89f, 10.84f, 1f, 1, 0, 0);
							break;
					}
				}
				iVar0++;
			}
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 <= 2)
			{
				if (func_44(&(uLocal_569[iVar0]), 0, 0))
				{
					set_ped_combat_movement(&(uLocal_569[iVar0]), 1);
					set_ped_combat_attributes(&(uLocal_569[iVar0]), 51, true);
					switch (iVar0)
					{
						case 0:
							set_ped_sphere_defensive_area(&(uLocal_569[0]), -3561.79f, -3012.39f, 10.47f, 3f, 1, 0, 0);
							break;
						case 1:
							set_ped_sphere_defensive_area(&(uLocal_569[1]), -3545.94f, -3003.47f, 10.16f, 3f, 1, 0, 0);
							break;
						case 2:
							set_ped_sphere_defensive_area(&(uLocal_569[2]), -3556f, -3003.68f, 9.96f, 3f, 1, 0, 0);
							break;
					}
				}
				iVar0++;
			}
			break;
		case 2:
			iVar0 = 0;
			while (iVar0 <= 2)
			{
				if (func_44(&(uLocal_569[iVar0]), 0, 0))
				{
					set_ped_combat_movement(&(uLocal_569[iVar0]), 1);
					set_ped_combat_attributes(&(uLocal_569[iVar0]), 51, true);
					switch (iVar0)
					{
						case 0:
							set_ped_sphere_defensive_area(&(uLocal_569[0]), -3551.66f, -3019.36f, 10.67f, 3f, 1, 0, 0);
							break;
						case 1:
							set_ped_sphere_defensive_area(&(uLocal_569[1]), -3546.23f, -3014.9f, 10.64f, 3f, 1, 0, 0);
							break;
						case 2:
							set_ped_sphere_defensive_area(&(uLocal_569[2]), -3545.41f, -3021.92f, 10.8f, 3f, 1, 0, 0);
							break;
					}
				}
				iVar0++;
			}
			break;
		case 3:
			iVar0 = 0;
			while (iVar0 <= 2)
			{
				if (func_44(&(uLocal_569[iVar0]), 0, 0))
				{
					set_ped_combat_movement(&(uLocal_569[iVar0]), 1);
					set_ped_combat_attributes(&(uLocal_569[iVar0]), 51, true);
					switch (iVar0)
					{
						case 0:
							set_ped_sphere_defensive_area(&(uLocal_569[0]), -3555.84f, -3023.51f, 10.74f, 3f, 1, 0, 0);
							break;
						case 1:
							set_ped_sphere_defensive_area(&(uLocal_569[1]), -3556.05f, -3017.61f, 10.63f, 3f, 1, 0, 0);
							break;
						case 2:
							set_ped_sphere_defensive_area(&(uLocal_569[2]), -3550.94f, -3024.76f, 10.74f, 3f, 1, 0, 0);
							break;
					}
				}
				iVar0++;
			}
			break;
	}
}

bool func_189()
{
	if ((is_ped_dead_or_dying(&(uLocal_569[0]), true) && is_ped_dead_or_dying(&(uLocal_569[1]), true)) && is_ped_dead_or_dying(&(uLocal_569[2]), true))
	{
		return true;
	}
	if ((_is_ped_hogtied(&(uLocal_569[0])) && _is_ped_hogtied(&(uLocal_569[1]))) && _is_ped_hogtied(&(uLocal_569[2])))
	{
		_0x18ff3110cf47115d(&(uLocal_569[0]), 1, 0);
		_0x18ff3110cf47115d(&(uLocal_569[1]), 1, 0);
		_0x18ff3110cf47115d(&(uLocal_569[2]), 1, 0);
		remove_blip(iLocal_574[0]);
		remove_blip(iLocal_574[1]);
		remove_blip(iLocal_574[2]);
		return true;
	}
	return false;
}

void func_190()
{
	func_265(23);
}

void func_191(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 || iParam0);
}

int func_192(var uParam0)
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

void func_193(int iParam0)
{
	iVar0 = func_266(iParam0);
	if (iVar0 != 0)
	{
		func_267(-1, 24, 0, iVar0);
	}
}

void func_194(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_177 != -1 || func_268(Global_1310750[uParam0->f_3], 16777216))
	{
		if (bParam2)
		{
			if (func_92(uParam0->f_3, 1073741824))
			{
				func_269(2, -1, 0, 0, 0);
			}
			else
			{
				func_269(1, -1, 0, 0, 0);
			}
		}
		else if (bParam1)
		{
			if (uParam0->f_45)
			{
				func_269(8, -1, 0, 0, 0);
			}
		}
		if (uParam0->f_177 != -1)
		{
			if (bParam2)
			{
				if (!func_270(1, uParam0->f_177))
				{
					func_271(16, uParam0->f_177);
					func_272(1, uParam0->f_177);
				}
				compendium_gang_encountered(func_273(uParam0->f_177));
			}
		}
	}
	else if (bParam2 || (bParam1 && uParam0->f_45))
	{
		func_269(8, -1, 0, 0, 0);
	}
}

void func_195(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (Global_1310750->f_16071 != iParam0 && !bParam2)
	{
		return;
	}
	if (&Global_17504.f_42[iParam0] == 0)
	{
		func_275(func_274(-1029789297), 1);
	}
	Global_17504.f_4++;
	Global_17504.f_42[iParam0] = &Global_17504.f_42[iParam0] + 1;
	(*Global_1310750)[iParam0]->f_110 |= 8;
	if (func_92(iParam0, 2))
	{
		func_277(iParam0, func_276(iParam3));
	}
	if (func_92(iParam0, 1))
	{
		if (iParam4 == -1)
		{
			iParam4 = func_278();
		}
		func_279(iParam0, iParam4);
	}
	if (iParam1 >= 0 && !func_280(iParam0, 65536))
	{
		func_281(iParam0, iParam1);
		func_283(iParam0, func_282(iParam0, iParam1));
		func_191(128);
	}
	func_284(iParam0, (*Global_1310750)[iParam0]->f_37, 1065353216, 0, 0);
	func_285(iParam0, 1);
	if (!bParam2)
	{
		func_191(16);
		Global_17504.f_5 = iParam0;
		Global_17504.f_9 = 1;
		Global_17504.f_7 = 0;
		Global_17504.f_8 = 0;
		func_286(524288);
	}
	if (func_287(iParam0) != 0)
	{
		if (&Global_17504.f_42[iParam0] >= func_287(iParam0))
		{
			Global_17504.f_42[iParam0]->f_6 = 1;
		}
	}
}

void func_196(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_288(&Global_0, 8);
	}
	if (!func_289() || func_106() != -1)
	{
		return;
	}
	func_288(&Global_0, 1);
}

bool func_197(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

int func_198(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_5;
}

int func_199(int iParam0)
{
	return iParam0;
}

void func_200(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_201(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_290(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_202(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_203(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

void func_204(int iParam0)
{
	if (!func_291(iParam0))
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

int func_205(var uParam0, var uParam1)
{
	vVar0 = { *uParam0 };
	if (func_292(&uParam1))
	{
		return 1;
	}
	if (!func_223(&vVar0, 1, 10, 0))
	{
		return 0;
	}
	*uParam0 = { vVar0 };
	return 1;
}

bool func_206(var uParam0)
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

int func_207(int iParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, bParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_293(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_208(int iParam0)
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

bool func_209(var uParam0)
{
	return func_129(*uParam0, 4);
}

bool func_210(var uParam0)
{
	return func_129(*uParam0, 64);
}

bool func_211(var uParam0)
{
	return func_129(*uParam0, 8);
}

void func_212(int iParam0, bool bParam1, bool bParam2)
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

bool func_213(var uParam0)
{
	return func_129(*uParam0, 128);
}

bool func_214(var uParam0)
{
	return func_129(*uParam0, 2048);
}

void func_215(int iParam0, bool bParam1)
{
	set_ped_config_flag(iParam0, 130, !bParam1);
	set_ped_config_flag(iParam0, 178, bParam1);
}

bool func_216(var uParam0)
{
	return func_129(*uParam0, 1024);
}

bool func_217(var uParam0)
{
	return func_129(*uParam0, 256);
}

void func_218(int iParam0, bool bParam1)
{
	set_ped_config_flag(iParam0, 146, !bParam1);
	set_ped_config_flag(iParam0, 148, !bParam1);
}

bool func_219(var uParam0)
{
	return func_129(*uParam0, 512);
}

bool func_220(var uParam0)
{
	return func_129(*uParam0, 4096);
}

int func_221(int iParam0)
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

int func_222(int iParam0)
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

bool func_223(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_294(*uParam0, 0f, 0f, 0f))
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

int func_224(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_295(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_296((386 + iVar28), 1);
			if (func_297(iParam0, &Var0, iVar5, 0))
			{
				if (func_298(iParam0, &Var6, iVar5))
				{
					Var29 = { func_299(iParam0, Var0, iVar5, 0) };
					func_300(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_301(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					func_302(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_303(iParam0, iParam1);
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

void func_225(int iParam0, int iParam1, float fParam2)
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

bool func_226(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

bool func_227(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0) && is_entity_a_ped(iParam0))
	{
		iVar0 = func_304(iParam0);
		return func_305(iParam0, 2084597891, iParam1, iVar0);
	}
	return decor_set_int(iParam0, "loot_money", iParam1);
}

void func_228()
{
	Local_1026.f_16 = "RE_WINDOW_PEEK";
	func_306(&Local_1026, 128);
	func_306(&Local_1026, 8192);
	func_306(&Local_1026, 64);
	if (!_does_volume_exist(iVar578))
	{
		iLocal_580 = _create_volume_box_with_custom_name(-3553.55f, -3013.3f, 11.789f, 0f, 0f, 12f, 2f, 2f, 2f, "LEFT_PEEK");
	}
	if (is_entity_in_volume(Global_35, iVar578, true, 0))
	{
		Local_1026.f_45 = 2f;
		Local_1026.f_46 = 1000;
		Local_1026.f_51 = { -3555.12f, -3010.82f, 10.81f };
		Local_1026.f_54 = { 0f, 0f, 0f };
		Local_1026.f_39 = -9.6822f;
		Local_1026.f_40 = -2.3301f;
		Local_1026.f_41 = { -3553.921f, -3013.329f, 12.1137f };
		Local_1026.f_48 = { -3554.42f, -3013.41f, 10.83f };
		Local_1026.f_31 = { -3554.1f, -3014.5f, 12.2f };
		Local_1026.f_34 = { -1.7f, 1.1f, -14f };
	}
	if (!_does_volume_exist(iVar579))
	{
		iLocal_581 = _create_volume_box_with_custom_name(-3549.6f, -3012.3f, 11.81f, 0f, 0f, 11f, 2f, 1.5f, 2f, "RIGHT_PEEK");
	}
	if (is_entity_in_volume(Global_35, iVar579, true, 0))
	{
		Local_1026.f_45 = 2f;
		Local_1026.f_46 = 1000;
		Local_1026.f_51 = { -3551.08f, -3010.07f, 10.81f };
		Local_1026.f_54 = { 0f, 0f, 90f };
		Local_1026.f_39 = 38.7249f;
		Local_1026.f_40 = -2.3301f;
		Local_1026.f_41 = { -3549.335f, -3012.173f, 12.1571f };
		Local_1026.f_48 = { -3549.92f, -3012.06f, 10.86f };
		Local_1026.f_31 = { -3548.7f, -3012.9f, 12.2f };
		Local_1026.f_34 = { -3.5f, 0.3f, 20.9f };
	}
	if (!_does_volume_exist(iVar580))
	{
		iLocal_582 = _create_volume_box_with_custom_name(-3551.5f, -3006.32f, 11.607f, 0f, 0f, 9f, 2f, 2f, 3.217f, "BACK_PEEK");
	}
	if (is_entity_in_volume(Global_35, iVar580, true, 0))
	{
		Local_1026.f_45 = 2f;
		Local_1026.f_46 = 1000;
		Local_1026.f_51 = { -3549.62f, -3008.29f, 10.35f };
		Local_1026.f_54 = { 0f, 0f, 270f };
		Local_1026.f_39 = 176.1603f;
		Local_1026.f_40 = 0f;
		Local_1026.f_41 = { -3551.16f, -3005.727f, 12.2452f };
		Local_1026.f_31 = { -3550.6f, -3003.9f, 12.3f };
		Local_1026.f_34 = { -0.6f, 0f, 162.8f };
		Local_1026.f_48 = { -3551.17f, -3006.61f, 10.32f };
	}
}

bool func_229()
{
	if (((iVar1024 == 2 || iVar1024 == 3) || iVar1024 == 4) || iVar1024 == 5)
	{
		return true;
	}
	return false;
}

int func_230(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if ((bParam1 && *iParam0 != 7) && *iParam0 != 8)
	{
		*iParam0 = 7;
	}
	switch (*iParam0)
	{
		case 0:
			if ((func_17(iParam0->f_48, 1) > iParam0->f_45 || _0x74f1d22efa71fab8()) || is_control_pressed(1, 1644850270))
			{
				return 0;
			}
			if (!func_307(iParam0, 8192) && _0xa24c1d341c6e0d53(0, 0, 0))
			{
				if (func_112(iParam0->f_17))
				{
					func_120(&(iParam0->f_17), 1, 1);
				}
				return 0;
			}
			if (_is_ped_carrying(Global_35) || func_168(Global_35, -208384378))
			{
				if (func_112(iParam0->f_17))
				{
					func_120(&(iParam0->f_17), 1, 1);
				}
				return 0;
			}
			if (!is_string_null_or_empty(iParam0->f_1))
			{
				if (_does_anim_scene_exist(iParam0->f_2))
				{
					if (!_0x23e33cb9f4a3f547(iParam0->f_2, "pbl_enter"))
					{
						_delete_anim_scene(iParam0->f_2);
						return 0;
					}
				}
				else
				{
					iParam0->f_2 = _create_anim_scene(iParam0->f_1, 0, "pbl_enter", false, true);
					load_anim_scene(iParam0->f_2);
				}
			}
			if (!func_112(iParam0->f_17))
			{
				iParam0->f_17 = func_308(iParam0->f_16, -1053137564, 3, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			}
			func_309(iParam0, 16384);
			func_115(iParam0->f_17, 1, 1);
			*iParam0 = 1;
			break;
		case 1:
			if ((func_17(iParam0->f_48, 1) > iParam0->f_45 || _0x74f1d22efa71fab8()) || is_control_pressed(1, 1644850270))
			{
				if (func_112(iParam0->f_17))
				{
					func_120(&(iParam0->f_17), 1, 1);
				}
				*iParam0 = 0;
				return 0;
			}
			if (!func_307(iParam0, 8192) && _0xa24c1d341c6e0d53(0, 0, 0))
			{
				if (func_112(iParam0->f_17))
				{
					func_120(&(iParam0->f_17), 1, 1);
				}
				*iParam0 = 0;
				return 0;
			}
			if (_is_ped_carrying(Global_35) || func_168(Global_35, -208384378))
			{
				if (func_112(iParam0->f_17))
				{
					func_120(&(iParam0->f_17), 1, 1);
				}
				*iParam0 = 0;
				return 0;
			}
			if (!is_string_null_or_empty(iParam0->f_1) && _is_anim_scene_loaded(iParam0->f_2, true, false))
			{
				if (!func_131(iParam0->f_51) || !func_131(iParam0->f_54))
				{
					_get_anim_scene_origin(iParam0->f_2, &vVar3, &vVar6, 2);
					if (!func_294(iParam0->f_51, vVar3) && !func_294(iParam0->f_54, vVar6))
					{
						vVar9 = { iParam0->f_51 };
						vVar12 = { iParam0->f_54 };
						if (func_131(vVar9))
						{
							vVar9 = { vVar3 };
						}
						if (func_131(vVar12))
						{
							vVar12 = { vVar6 };
						}
						set_anim_scene_origin(iParam0->f_2, vVar9, vVar12, 2);
					}
				}
				if (!_0x3ab6c7b0bb0df4b1(Global_35, iParam0->f_2))
				{
					set_anim_scene_entity(iParam0->f_2, "arthur", Global_35, 0);
				}
			}
			if (_0x23e33cb9f4a3f547(iParam0->f_2, "pbl_enter"))
			{
				if (func_129(iParam0->f_3, 1) && _0xa9016536015de29d(iParam0->f_2, "pbl_enter_left"))
				{
					if (_0x23e33cb9f4a3f547(iParam0->f_2, "pbl_enter_left"))
					{
					}
					else if (!_0x0df57f86fe71dbe5(iParam0->f_2, "pbl_enter_left"))
					{
						_0xdf7b5144e25cd3fe(iParam0->f_2, "pbl_enter_left");
					}
				}
				if (func_129(iParam0->f_3, 2) && _0xa9016536015de29d(iParam0->f_2, "pbl_enter_right"))
				{
					if (_0x23e33cb9f4a3f547(iParam0->f_2, "pbl_enter_right"))
					{
					}
					else if (!_0x0df57f86fe71dbe5(iParam0->f_2, "pbl_enter_right"))
					{
						_0xdf7b5144e25cd3fe(iParam0->f_2, "pbl_enter_right");
					}
				}
			}
			if (is_string_null_or_empty(iParam0->f_1) || (_is_anim_scene_loaded(iParam0->f_2, true, false) && _0x23e33cb9f4a3f547(iParam0->f_2, "pbl_enter")))
			{
				if (func_310(iParam0->f_17, 1))
				{
					if (is_ped_on_mount(Global_35))
					{
						if (!func_168(Global_35, 501393341))
						{
							task_dismount_animal(Global_35, 0, 0, 0, 0, 0);
						}
						return 0;
					}
					sVar15 = "pbl_enter";
					if (func_131(iParam0->f_48))
					{
						if (_get_anim_scene_entity_matrix(iParam0->f_2, "arthur", &vVar16, true, "pbl_enter", 2))
						{
							iParam0->f_48 = { vVar16 };
						}
						if (((func_129(iParam0->f_3, 1) && _0xa9016536015de29d(iParam0->f_2, "pbl_enter_left")) && _0x23e33cb9f4a3f547(iParam0->f_2, "pbl_enter_left")) && _get_anim_scene_entity_matrix(iParam0->f_2, "arthur", &vVar28, true, "pbl_enter_left", 2))
						{
							if (func_131(vVar28))
							{
							}
							else if (func_131(vVar16) || func_17(vVar28, 1) < func_17(vVar16, 1))
							{
								sVar15 = "pbl_enter_left";
								iParam0->f_48 = { vVar28 };
							}
						}
						if (((func_129(iParam0->f_3, 2) && _0xa9016536015de29d(iParam0->f_2, "pbl_enter_right")) && _0x23e33cb9f4a3f547(iParam0->f_2, "pbl_enter_right")) && _get_anim_scene_entity_matrix(iParam0->f_2, "arthur", &vVar40, true, "pbl_enter_right", 2))
						{
							if (func_131(vVar40))
							{
							}
							else if (func_131(vVar16) || func_17(vVar40, 1) < func_17(vVar16, 1))
							{
								sVar15 = "pbl_enter_right";
								iParam0->f_48 = { vVar40 };
							}
						}
					}
					_set_anim_scene_playback_list_bool(iParam0->f_2, sVar15, true);
					set_player_control(player_id(), false, 0, false);
					if (_get_ped_crouch_movement(Global_35) && !func_307(iParam0, 128))
					{
						_set_ped_crouch_movement(Global_35, false, 0, false);
						func_306(iParam0, 32);
					}
					else
					{
						func_309(iParam0, 32);
					}
					iParam0->f_47 = _0xa29fd00d45311eb7(Global_35, "Stealth");
					if (iParam0->f_47 > 0f)
					{
						func_306(iParam0, 4096);
						_0x411189e51b8020ba(Global_35, "Stealth");
					}
					if (func_307(iParam0, 256))
					{
						set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
						set_current_ped_weapon(Global_35, -1569615261, false, 1, false, false);
						task_swap_weapon(Global_35, 1, func_307(iParam0, 512), 0, 0);
					}
					task_enter_anim_scene(Global_35, iParam0->f_2, "Arthur", sVar15, 1069379748, 1, 0, 20000, -1082130432);
					*iParam0 = 2;
				}
			}
			else if (!_0x0df57f86fe71dbe5(iParam0->f_2, "pbl_enter"))
			{
				_0xdf7b5144e25cd3fe(iParam0->f_2, "pbl_enter");
			}
			break;
		case 2:
			disable_control_action(0, 2139949496, false);
			if ((!func_310(iParam0->f_17, 1) && !is_control_pressed(0, -1053137564)) && !is_disabled_control_pressed(0, -1053137564))
			{
				vVar0 = { iParam0->f_48 };
				iParam0->f_48 = { vVar0 };
				func_311(Global_35);
				set_player_control(player_id(), true, 0, false);
				if (func_307(iParam0, 4096))
				{
					_0x437c08db4febe2bd(Global_35, "Stealth", iParam0->f_47, -1);
					func_309(iParam0, 4096);
				}
				func_309(iParam0, 16384);
				func_115(iParam0->f_17, 1, 1);
				*iParam0 = 1;
			}
			else if ((is_ped_in_cover(Global_35, 0, 1) || _get_ped_crouch_movement(Global_35)) && func_307(iParam0, 64))
			{
				*iParam0 = 3;
			}
			else if (_0x3ab6c7b0bb0df4b1(Global_35, iParam0->f_2) && _0x337f1cc8ee895601(iParam0->f_2, "Arthur"))
			{
				vVar0 = { iParam0->f_48 };
				iParam0->f_48 = { vVar0 };
				*iParam0 = 3;
			}
			else if (bParam4)
			{
				*iParam0 = 3;
			}
			break;
		case 3:
			if (!is_string_null_or_empty(iParam0->f_1) && !_is_anim_scene_started(iParam0->f_2, false))
			{
				start_anim_scene(iParam0->f_2);
			}
			if (func_129(iParam0->f_3, 4))
			{
				func_120(&(iParam0->f_17), 1, 1);
			}
			iParam0->f_37 = iParam0->f_39;
			iParam0->f_38 = iParam0->f_40;
			iParam0->f_18 = { get_final_rendered_cam_coord() };
			iParam0->f_21 = { get_final_rendered_cam_rot(2) };
			iParam0->f_24 = get_final_rendered_cam_fov();
			if (func_307(iParam0, 8192) && _0xa24c1d341c6e0d53(0, 0, 0))
			{
				func_306(iParam0, 16384);
				iParam0->f_44 = create_camera_with_params(26379945, iParam0->f_31, iParam0->f_34, iParam0->f_24, true, 2);
			}
			else
			{
				iParam0->f_44 = create_camera_with_params(26379945, iParam0->f_18, iParam0->f_21, iParam0->f_24, true, 2);
			}
			set_cam_params(iParam0->f_44, iParam0->f_41, iParam0->f_38, 0f, iParam0->f_37, iParam0->f_24, iParam0->f_46, 1, 1, 2, 1, 0);
			set_cam_near_clip(iParam0->f_44, 0f);
			shake_cam(iParam0->f_44, "HAND_SHAKE", 0.2f);
			render_script_cams(true, false, 3000, true, false, 0);
			set_player_control(player_id(), false, 0, false);
			display_radar(false);
			*iParam0 = 4;
			break;
		case 4:
			if (_does_anim_scene_exist(iParam0->f_2) && !_0x0df57f86fe71dbe5(iParam0->f_2, "pbl_exit"))
			{
				_0xdf7b5144e25cd3fe(iParam0->f_2, "pbl_exit");
			}
			if ((_does_anim_scene_exist(iParam0->f_2) && _0xa9016536015de29d(iParam0->f_2, "pbl_exit_alt")) && !_0x0df57f86fe71dbe5(iParam0->f_2, "pbl_exit_alt"))
			{
				_0xdf7b5144e25cd3fe(iParam0->f_2, "pbl_exit_alt");
			}
			if (!does_cam_exist(iParam0->f_44) || !is_cam_interpolating(iParam0->f_44))
			{
				if (does_cam_exist(iParam0->f_44))
				{
					func_312(&uVar52, &uVar53, &iVar54, &iVar55, 529461124, 1410914475, -1497929239, 665185216, 2);
					if (iParam0->f_4 == iVar54 && iParam0->f_5 == iVar55)
					{
						if (iParam0->f_6 < get_game_timer())
						{
							iParam0->f_4 = 0;
							iParam0->f_5 = 0;
						}
					}
					else
					{
						iParam0->f_4 = iVar54;
						iParam0->f_5 = iVar55;
						iParam0->f_6 = get_game_timer() + 4000;
					}
					iParam0->f_10.f_2 = (-(to_float(iVar54) / 127f) * IntToFloat(iParam0->f_7));
					iParam0->f_10.f_1 = ((-iParam0->f_10.f_2 * IntToFloat(iParam0->f_9)) / IntToFloat(iParam0->f_7));
					if (is_look_inverted())
					{
						iParam0->f_10 = ((to_float(iVar55) / 127f) * IntToFloat(iParam0->f_8));
					}
					else
					{
						iParam0->f_10 = (-(to_float(iVar55) / 127f) * IntToFloat(iParam0->f_8));
					}
					fVar56 = (30f * timestep());
					vVar57 = { iParam0->f_10 };
					iParam0->f_13 = (iParam0->f_13 + func_313((((vVar57.x - iParam0->f_13) * 0.05f) * fVar56), -3f, 3f));
					iParam0->f_13.f_1 = (iParam0->f_13.f_1 + func_313((((vVar57.y - iParam0->f_13.f_1) * 0.05f) * fVar56), -3f, 3f));
					iParam0->f_13.f_2 = (iParam0->f_13.f_2 + func_313((((vVar57.z - iParam0->f_13.f_2) * 0.05f) * fVar56), -3f, 3f));
					set_cam_params(iParam0->f_44, iParam0->f_41, Vector(iParam0->f_37, 0f, iParam0->f_38) + iParam0->f_13, iParam0->f_24, 0, 1, 1, 2, 1, 0);
				}
				if (!_does_anim_scene_exist(iParam0->f_2) || _0x23e33cb9f4a3f547(iParam0->f_2, "pbl_exit"))
				{
					if (bParam2 || (((!func_129(iParam0->f_3, 4) && !func_310(iParam0->f_17, 1)) && !is_control_pressed(0, -1053137564)) && !is_disabled_control_pressed(0, -1053137564)))
					{
						if ((func_129(iParam0->f_3, 8) && _0xa9016536015de29d(iParam0->f_2, "pbl_exit_alt")) && _0x23e33cb9f4a3f547(iParam0->f_2, "pbl_exit_alt"))
						{
							_set_anim_scene_playback_list_bool(iParam0->f_2, "pbl_exit_alt", true);
						}
						else if (_does_anim_scene_exist(iParam0->f_2))
						{
							_set_anim_scene_playback_list_bool(iParam0->f_2, "pbl_exit", true);
						}
						if (does_cam_exist(iParam0->f_44))
						{
							if (func_307(iParam0, 16384))
							{
								set_cam_params(iParam0->f_44, iParam0->f_31, iParam0->f_34, iParam0->f_24, iParam0->f_46, 1, 1, 2, 1, 0);
							}
							else if (func_131(iParam0->f_25))
							{
								set_cam_params(iParam0->f_44, iParam0->f_18, iParam0->f_21, iParam0->f_24, iParam0->f_46, 1, 1, 2, 1, 0);
							}
							else
							{
								set_cam_params(iParam0->f_44, iParam0->f_25, iParam0->f_28, iParam0->f_24, iParam0->f_46, 1, 1, 2, 1, 0);
							}
						}
						iParam0->f_13 = { 0f, 0f, 0f };
						*iParam0 = 5;
					}
				}
			}
			break;
		case 5:
			if (does_cam_exist(iParam0->f_44))
			{
				if (is_cam_interpolating(iParam0->f_44))
				{
					return 0;
				}
				else if (func_131(iParam0->f_25))
				{
					func_314(_get_object_offset_from_coords(iParam0->f_18, iParam0->f_21.f_2, 0f, 10f, 0f));
					render_script_cams(false, true, 3000, true, false, 0);
					destroy_cam(iParam0->f_44, false);
				}
				else
				{
					func_314(_get_object_offset_from_coords(iParam0->f_25, iParam0->f_28.f_2, 0f, 10f, 0f));
					render_script_cams(false, true, 3000, true, false, 0);
					destroy_cam(iParam0->f_44, false);
				}
			}
			if ((((!_does_anim_scene_exist(iParam0->f_2) || _0xf94692eb9dc15d74(iParam0->f_2, 0)) || _is_anim_scene_finished(iParam0->f_2, false)) || !_is_anim_scene_started(iParam0->f_2, false)) || (func_307(iParam0, 16) && has_anim_event_fired(Global_35, -180478719)))
			{
				if (_does_anim_scene_exist(iParam0->f_2))
				{
					_delete_anim_scene(iParam0->f_2);
				}
				if (func_307(iParam0, 4096))
				{
					_0x437c08db4febe2bd(Global_35, "Stealth", iParam0->f_47, -1);
					func_309(iParam0, 4096);
				}
				if (func_307(iParam0, 32) && !func_307(iParam0, 128))
				{
					func_309(iParam0, 32);
					_set_ped_crouch_movement(Global_35, true, 0, false);
					*iParam0 = 6;
				}
				else
				{
					display_radar(true);
					set_player_control(player_id(), true, 0, false);
					if (does_cam_exist(iParam0->f_44))
					{
						render_script_cams(false, true, 1500, true, false, 0);
						destroy_cam(iParam0->f_44, false);
					}
					if (bParam2)
					{
						*iParam0 = 7;
					}
					else if (bParam3)
					{
						func_115(iParam0->f_17, 1, 1);
						*iParam0 = 0;
					}
					else
					{
						*iParam0 = 7;
					}
				}
			}
			break;
		case 6:
			if (_get_ped_crouch_movement(Global_35))
			{
				display_radar(true);
				set_player_control(player_id(), true, 0, false);
				render_script_cams(false, true, 1500, true, false, 0);
				destroy_cam(iParam0->f_44, false);
				if (bParam2)
				{
					*iParam0 = 7;
				}
				else if (bParam3)
				{
					func_115(iParam0->f_17, 1, 1);
					*iParam0 = 0;
				}
				else
				{
					*iParam0 = 7;
				}
			}
			break;
		case 7:
			if (does_cam_exist(iParam0->f_44))
			{
				destroy_all_cams(false);
				set_player_control(player_id(), false, 0, false);
				destroy_cam(iParam0->f_44, false);
				render_script_cams(false, true, 1500, true, false, 0);
			}
			if (((!bParam1 && _does_anim_scene_exist(iParam0->f_2)) && !_0x1f0e401031e20146(iParam0->f_2, "pbl_exit")) && _0x23e33cb9f4a3f547(iParam0->f_2, "pbl_exit"))
			{
				_set_anim_scene_playback_list_bool(iParam0->f_2, "pbl_exit", true);
			}
			if ((((bParam1 || !_does_anim_scene_exist(iParam0->f_2)) || !_is_anim_scene_started(iParam0->f_2, false)) || _0xf94692eb9dc15d74(iParam0->f_2, 0)) || _is_anim_scene_finished(iParam0->f_2, false))
			{
				if (func_112(iParam0->f_17))
				{
					func_120(&(iParam0->f_17), 1, 1);
				}
				display_radar(true);
				set_player_control(player_id(), true, 0, false);
				if (_does_anim_scene_exist(iParam0->f_2))
				{
					_delete_anim_scene(iParam0->f_2);
				}
				if (func_307(iParam0, 32))
				{
					if (!func_307(iParam0, 128))
					{
						_set_ped_crouch_movement(Global_35, true, 0, false);
					}
					func_309(iParam0, 32);
				}
				if (func_307(iParam0, 4096))
				{
					_0x437c08db4febe2bd(Global_35, "Stealth", iParam0->f_47, -1);
					func_309(iParam0, 4096);
				}
				if (iParam5 == 0)
				{
					*iParam0 = 8;
				}
				else
				{
					*iParam0 = 0;
				}
			}
			break;
		case 8:
			return 1;
	}
	return 0;
}

int func_231(int iParam0, int iParam1, int iParam2)
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

int func_232(var uParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	iVar0 = iParam9;
	func_315(&iVar0);
	if (func_108(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_316(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_108(iVar0, 134217728))
	{
		func_317(iParam1, uParam3, uParam0);
	}
	if (!*iParam4)
	{
		if (!is_bit_set(*iParam1, 25))
		{
			if (is_bit_set(*iParam1, 24))
			{
				if (!func_318(558))
				{
					func_319(558, 0);
				}
				set_bit(iParam1, 24);
				set_bit(iParam1, 25);
			}
		}
	}
	return iVar1;
}

void func_233(var uParam0)
{
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		set_ped_config_flag(*uParam0, 297, false);
	}
}

void func_234(int* iParam0, var uParam1)
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
	func_320(iParam0, uParam1, 1);
	func_321(uParam1, 0, 1, 1, 0);
	_copy_memory(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		_copy_memory((*uParam1)[iVar0], &Var22, 17);
		iVar0++;
	}
}

bool func_235(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && does_entity_exist(iParam2))
	{
		if (!func_322(iParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_323(fParam0))
	{
		return false;
	}
	return true;
}

bool func_236(int iParam0, int iParam1, char* sParam2, float fParam3, bool bParam4)
{
	if (!func_257(&uLocal_1138))
	{
		func_159(&uLocal_1138);
	}
	else if (func_174(&uLocal_1138) > fParam3)
	{
		if (bParam4)
		{
			func_238(iParam0, iParam1, sParam2, 0, -1082130432, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
		}
		else
		{
			func_238(iParam0, iParam1, sParam2, 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		func_255(&uLocal_1138);
		return true;
	}
	return false;
}

int func_237(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (((_0x3ee1f7a8c32f24e1(get_player_index(), &iVar0, bParam6, bParam7) && (!bParam5 || !is_entity_dead(iVar0))) && is_entity_a_ped(iVar0)) && get_ped_index_from_entity_index(iVar0) == *uParam0)
	{
		_0xa3db37edf9a74635(get_player_index(), *uParam0, 3, 2, iParam1);
		_0xa3db37edf9a74635(get_player_index(), *uParam0, 4, 2, iParam2);
		_0xa3db37edf9a74635(get_player_index(), *uParam0, 7, 2, iParam3);
		return 1;
	}
	if (bParam4)
	{
		_0xa3db37edf9a74635(get_player_index(), *uParam0, 3, 2, 0);
		_0xa3db37edf9a74635(get_player_index(), *uParam0, 4, 2, 0);
		_0xa3db37edf9a74635(get_player_index(), *uParam0, 7, 2, 0);
	}
	return 0;
}

bool func_238(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_324(iParam0, iParam1, sParam2, sParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

void func_239()
{
	if (is_entity_dead(&(uLocal_569[0])))
	{
		clear_sequence_task(&uLocal_1117);
		open_sequence_task(&uLocal_1117);
		_task_smart_flee_style_ped(0, Global_35, 2, 0, -1082130432, -1, 0);
		close_sequence_task(iVar1115);
		task_perform_sequence(&(uLocal_569[3]), iVar1115);
		clear_sequence_task(&uLocal_1117);
	}
	else
	{
		clear_sequence_task(&uLocal_1117);
		open_sequence_task(&uLocal_1117);
		if (is_ped_on_mount(&(uLocal_569[3])))
		{
			_task_smart_flee_style_ped(0, Global_35, 2, 0, -1082130432, -1, 0);
		}
		else
		{
			_task_smart_flee_style_ped(0, Global_35, 2, 0, -1082130432, -1, Local_233[0]->f_11);
		}
		close_sequence_task(iVar1115);
		task_perform_sequence(&(uLocal_569[3]), iVar1115);
		clear_sequence_task(&uLocal_1117);
	}
}

int func_240(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > uParam2->f_5)
	{
		func_325(uParam2, 1, iVar0);
	}
	if (!Global_1935630->f_12 && !is_entity_dead(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = vdist(Global_36, get_entity_coords(iParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (func_326(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_327(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_328(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_327(iParam0, uParam2, *uParam3);
					return 1;
				}
				else if (func_329(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_327(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_330(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_327(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_26 && func_331(player_id(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_327(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_332(uParam2, 1065353216))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_333(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_327(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_334(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_327(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_335(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_327(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			else if (func_335(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_327(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_336(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_327(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_337(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_327(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_338(uParam2, 4000))
				{
					if ((func_339(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_340(uParam2, iParam0)) && func_341(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_327(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_339(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_340(uParam2, iParam0)) && func_341(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_327(iParam0, uParam2, *uParam3);
					return 1;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_342(iParam0, Global_1935630->f_41))
							{
								func_343();
								*uParam3 = 2;
								func_327(iParam0, uParam2, *uParam3);
								return 1;
							}
						}
					}
				}
			}
			else if (Global_1935630->f_40 == 0)
			{
				if (Global_1935630->f_41 != 0)
				{
					if (*uParam2 & 131072 == 0)
					{
						if (func_342(iParam0, Global_1935630->f_41))
						{
							func_343();
							*uParam3 = 2;
							func_327(iParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_344(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_345() - uParam2->f_9) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_343();
						*uParam3 = 2;
						func_327(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_346())
					{
						if (func_342(iParam0, Global_1935630->f_42))
						{
							func_343();
							*uParam3 = 2;
							func_327(iParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_347(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_327(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_348(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_327(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_349(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_327(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_350(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_327(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_351(uParam2, 4000))
				{
					if (func_352(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_327(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_353(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_327(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_354(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_327(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
	}
	return 0;
}

bool func_241()
{
	if (func_249())
	{
		if (((!func_154(&(uLocal_569[0])) && !func_154(&(uLocal_569[1]))) && !func_154(&(uLocal_569[2]))) && func_154(&(uLocal_569[3])))
		{
			return true;
		}
	}
	return false;
}

int func_242()
{
	if (func_249())
	{
		if ((func_154(&(uLocal_569[0])) || func_154(&(uLocal_569[1]))) || func_154(&(uLocal_569[2])))
		{
			return 1;
		}
	}
	return 0;
}

int func_243()
{
	if (func_154(&(uLocal_569[2])))
	{
		return 0;
	}
	if (!func_154(&(uLocal_569[2])) && func_249())
	{
		return 0;
	}
	if ((is_entity_dead(&(uLocal_569[2])) || get_ped_config_flag(&(uLocal_569[2]), 11, true)) || get_ped_config_flag(&(uLocal_569[2]), 9, true))
	{
		return 0;
	}
	if (is_ped_being_stealth_killed(&(uLocal_569[2])))
	{
		iLocal_1119 = 1;
	}
	if (iVar1117 == 1)
	{
		return 0;
	}
	if (_get_ped_crouch_movement(Global_35))
	{
		set_ped_seeing_range(&(uLocal_569[2]), 5f);
	}
	else
	{
		set_ped_seeing_range(&(uLocal_569[2]), 15f);
	}
	if (func_355(&(uLocal_569[2]), &(Local_39.f_5), &uLocal_1098, 0))
	{
		func_152(2);
		return 1;
	}
	if (((Local_18[0]->f_4 || Local_18[1]->f_4) || Local_18[2]->f_4) || Local_18[3]->f_4)
	{
		func_152(2);
		return 1;
	}
	return 0;
}

int func_244()
{
	if (func_154(&(uLocal_569[1])))
	{
		return 0;
	}
	if (!func_154(&(uLocal_569[1])) && func_249())
	{
		return 0;
	}
	if ((is_entity_dead(&(uLocal_569[1])) || get_ped_config_flag(&(uLocal_569[1]), 11, true)) || get_ped_config_flag(&(uLocal_569[1]), 9, true))
	{
		return 0;
	}
	if (is_ped_being_stealth_killed(&(uLocal_569[1])))
	{
		iLocal_1120 = 1;
	}
	if (iVar1118 == 1)
	{
		return 0;
	}
	if (_get_ped_crouch_movement(Global_35))
	{
		set_ped_seeing_range(&(uLocal_569[1]), 5f);
	}
	else
	{
		set_ped_seeing_range(&(uLocal_569[1]), 15f);
	}
	if (func_355(&(uLocal_569[1]), &(Local_39.f_5), &uLocal_1098, 0))
	{
		func_152(2);
		return 1;
	}
	if (((Local_18[0]->f_4 || Local_18[1]->f_4) || Local_18[2]->f_4) || Local_18[3]->f_4)
	{
		func_152(2);
		return 1;
	}
	return 0;
}

int func_245()
{
	fVar0 = 0.5f;
	if ((((door_system_get_open_ratio(1894337720) >= fVar0 && is_entity_at_coord(Global_35, -3551.5f, -3012f, 11.6f, 1.5f, 1.5f, 2f, false, true, 0)) || (door_system_get_open_ratio(1894337720) <= -fVar0 && is_entity_at_coord(Global_35, -3551.5f, -3012f, 11.6f, 1.5f, 1.5f, 2f, false, true, 0))) || (door_system_get_open_ratio(120764251) >= fVar0 && is_entity_at_coord(Global_35, -3555f, -3007.4f, 11.3f, 1.5f, 1.5f, 2f, false, true, 0))) || (door_system_get_open_ratio(120764251) <= -fVar0 && is_entity_at_coord(Global_35, -3555f, -3007.4f, 11.3f, 1.5f, 1.5f, 2f, false, true, 0)))
	{
		return 1;
	}
	if (_get_ped_crouch_movement(Global_35))
	{
		func_255(&uLocal_1141);
		iLocal_1121 = 0;
		return 0;
	}
	if (func_229())
	{
		func_255(&uLocal_1141);
		iLocal_1121 = 0;
		return 0;
	}
	if (!func_257(&uLocal_1141))
	{
		if (is_entity_at_coord(Global_35, -3553.77f, -3012.7f, 10.82f, 0.5f, 0.8f, 2f, false, true, 0) || is_entity_at_coord(Global_35, -3549.75f, -3011.88f, 10.81f, 0.5f, 0.8f, 2f, false, true, 0))
		{
			func_159(&uLocal_1141);
			iLocal_1121 = 1;
		}
	}
	if (func_174(&uLocal_1141) >= 3f)
	{
		if (is_entity_at_coord(Global_35, -3553.77f, -3012.7f, 10.82f, 0.5f, 0.8f, 2f, false, true, 0) || (is_entity_at_coord(Global_35, -3549.75f, -3011.88f, 10.81f, 0.5f, 0.8f, 2f, false, true, 0) && iVar1119 == 1))
		{
			iLocal_1125 = 1;
			return 1;
		}
		else
		{
			iLocal_1121 = 0;
			func_255(&uLocal_1141);
		}
	}
	return 0;
}

int func_246()
{
	if (iVar1086 == 1)
	{
		if (is_entity_dead(&(uLocal_569[0])))
		{
			return 1;
		}
	}
	return 0;
}

bool func_247()
{
	if (((Local_18[0]->f_4 || Local_18[1]->f_4) || Local_18[2]->f_4) || Local_18[3]->f_4)
	{
		func_152(2);
		return true;
	}
	return false;
}

bool func_248()
{
	if ((func_249() && func_154(&(uLocal_569[0]))) && !_0x3ab6c7b0bb0df4b1(&(uLocal_569[0]), iVar457))
	{
		if (!func_257(&uLocal_1150))
		{
			func_159(&uLocal_1150);
		}
		else if (func_174(&uLocal_1150) >= 3f)
		{
			return true;
		}
	}
	if ((func_249() && func_154(&(uLocal_569[1]))) && !_0x3ab6c7b0bb0df4b1(&(uLocal_569[1]), iVar457))
	{
		if (!func_257(&uLocal_1150))
		{
			func_159(&uLocal_1150);
		}
		else if (func_174(&uLocal_1150) >= 3f)
		{
			return true;
		}
	}
	if ((func_249() && func_154(&(uLocal_569[2]))) && !_0x3ab6c7b0bb0df4b1(&(uLocal_569[2]), iVar457))
	{
		if (!func_257(&uLocal_1150))
		{
			func_159(&uLocal_1150);
		}
		else if (func_174(&uLocal_1150) >= 3f)
		{
			return true;
		}
	}
	return false;
}

bool func_249()
{
	iVar0 = get_interior_from_entity(Global_35);
	if (is_valid_interior(iVar0))
	{
		iLocal_1122 = 1;
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

bool func_250()
{
	if (func_154(&(uLocal_569[0])))
	{
		return false;
	}
	if (!func_154(&(uLocal_569[0])) && func_249())
	{
		return false;
	}
	if ((is_entity_dead(&(uLocal_569[0])) || get_ped_config_flag(&(uLocal_569[0]), 11, true)) || get_ped_config_flag(&(uLocal_569[0]), 9, true))
	{
		return false;
	}
	if (is_ped_being_stealth_killed(&(uLocal_569[0])) || is_ped_performing_melee_action(Global_35, 8, 0))
	{
		iLocal_1118 = 1;
	}
	if (iVar1116 == 1)
	{
		return false;
	}
	if (has_entity_been_damaged_by_entity(&(uLocal_569[0]), Global_35, 1, 1))
	{
		if (!is_ped_dead_or_dying(&(uLocal_569[0]), true) && get_entity_health(&(uLocal_569[0])) > 0)
		{
			func_152(2);
		}
	}
	if (_get_ped_crouch_movement(Global_35))
	{
		vVar0 = { 0f, 0f, 0f };
		set_ped_seeing_range(&(uLocal_569[0]), 5f);
	}
	else
	{
		vVar0 = { 5f, 5f, 2f };
		set_ped_seeing_range(&(uLocal_569[0]), 15f);
	}
	bVar3 = false;
	if (is_entity_at_coord(Global_35, -3551.5f, -3005.4f, 11.2f, 5f, 2f, 2f, false, true, 0) && _get_ped_crouch_movement(Global_35))
	{
		bVar3 = true;
	}
	if (((func_166(&(uLocal_569[0]), Global_35, 1, 1) <= 12f && has_entity_clear_los_to_entity_in_front(&(uLocal_569[0]), Global_35, 17)) && !bVar3) && !is_entity_at_coord(Global_35, -3551.5f, -3005.4f, 11.2f, 10f, 2f, 2f, false, true, 0))
	{
		return true;
	}
	if (is_entity_at_coord(Global_35, get_entity_coords(&(uLocal_569[0]), true, false), vVar0, false, true, 0) && has_entity_clear_los_to_entity(&(uLocal_569[0]), Global_35, 17))
	{
		return true;
	}
	if (((Local_18[0]->f_4 || Local_18[1]->f_4) || Local_18[2]->f_4) || Local_18[3]->f_4)
	{
		func_152(2);
		return true;
	}
	return false;
}

void func_251()
{
	switch (iVar1107)
	{
		case 0:
			if (func_356(&(uLocal_569[0]), &(Local_39.f_5)))
			{
				func_256(&(uLocal_569[0]), 0);
				func_238(&(uLocal_569[0]), Global_35, func_61(65), 0, -1082130432, 0, 0, 0, 1, 0, 0, 291934926, 1, 0, 0);
				func_159(&uLocal_1156);
				uLocal_1109 = iVar1107 + 1;
			}
			break;
		case 1:
			if (func_235(-3f, 1, 0, 0) && func_235(-4f, 1, &(uLocal_569[0]), 1))
			{
				if (func_174(&uLocal_1156) > 5f)
				{
					func_238(&(uLocal_569[0]), Global_35, func_61(66), 0, -1082130432, 0, 0, 0, 1, 0, 0, 291934926, 1, 0, 0);
					uLocal_1109 = iVar1107 + 1;
				}
			}
			else
			{
				func_159(&uLocal_1156);
			}
			break;
	}
}

bool func_252()
{
	switch (iVar1102)
	{
		case 0:
			stop_current_playing_speech(&(uLocal_569[0]), 0);
			if (func_236(&(uLocal_569[0]), Global_35, func_61(46), 0.8f, 1))
			{
				func_70(&(uLocal_569[0]), func_69(268435456, 1056964608, 1065353216), 999, 1, 0, 1056964608, 1065353216, 0);
				set_ammo_in_clip(&(uLocal_569[0]), -1, 999);
				_set_entity_health(&(uLocal_569[0]), 80, 0);
				apply_damage_to_ped(&(uLocal_569[0]), 40, 1, 21030, 0);
				clear_sequence_task(&uLocal_1114);
				open_sequence_task(&uLocal_1114);
				task_pause(0, 200);
				task_aim_gun_at_entity(0, Global_35, -1, 0, 1);
				close_sequence_task(iVar1112);
				_task_perform_sequence_2(&(uLocal_569[0]), iVar1112, 0.4f, 0.4f);
				clear_sequence_task(&uLocal_1114);
				func_116(Local_639[1], "RE_INTER_DEFUSE");
				Local_639[1]->f_13 = func_61(68);
				iLocal_1089[0] = 1;
				iLocal_1092[0] = 0;
				func_161(Local_639[1], 0);
				func_63(Local_639[1], 1, 0);
				func_159(&uLocal_1153);
				iLocal_1104 = iVar1102 + 1;
			}
			break;
		case 1:
			if (func_235(-5f, 1, 0, 0) && func_235(-4f, 1, &(uLocal_569[0]), 1))
			{
				if (func_174(&uLocal_1153) > 5f)
				{
					func_238(&(uLocal_569[0]), Global_35, func_61(47), 0, -1082130432, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
					iLocal_1104 = iVar1102 + 1;
				}
			}
			else
			{
				func_159(&uLocal_1153);
			}
			break;
		case 2:
			if (func_235(-5f, 1, 0, 0) && func_235(-4f, 1, &(uLocal_569[0]), 1))
			{
				func_238(&(uLocal_569[0]), Global_35, func_61(48), 0, -1082130432, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_1104 = iVar1102 + 1;
			}
			break;
		case 3:
			if (!is_ped_dead_or_dying(&(uLocal_569[0]), true))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_253(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		allow_sonar_blips(true);
		force_sonar_blips_this_frame();
	}
	_trigger_sonar_blip_2(iParam0, iParam1);
}

void func_254(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_259() - fParam1);
	func_357(uParam0, 1);
	func_358(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_255(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_256(var uParam0, int iParam1)
{
	stop_current_playing_ambient_speech(uParam0, iParam1);
	stop_current_playing_speech(uParam0, iParam1);
}

bool func_257(var uParam0)
{
	return func_359(*uParam0, 1);
}

bool func_258(var uParam0)
{
	return func_359(*uParam0, 2);
}

float func_259()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_260(int iParam0, vector3 vParam1, int iParam4)
{
	vVar0 = { vParam1 };
	vVar3 = { get_entity_coords(iParam0, false, false) + get_entity_forward_vector(iParam0) * FtoV((get_entity_speed(iParam0) * 0f)) };
	vVar6 = { vParam1 };
	vVar9 = { vVar3 - vVar0 };
	fVar12 = func_360(vVar6, vVar9);
	fVar13 = 0.707f;
	if (absf(fVar12) > fVar13)
	{
		if (fVar12 > 0f)
		{
			iLocal_1086 = 3;
		}
		else
		{
			iLocal_1086 = 2;
		}
	}
	else if (func_361(vVar0, vVar0 + vVar6, vVar3))
	{
		iLocal_1086 = 0;
	}
	else
	{
		iLocal_1086 = 1;
	}
	if (iParam4 == 1)
	{
	}
}

int func_261(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			switch (iVar1083)
			{
				case 0:
				case 2:
				case 3:
					return 4;
				case 1:
					return 7;
			}
			break;
		case 1:
			switch (iVar1083)
			{
				case 0:
				case 2:
				case 3:
					if (_0x1f0e401031e20146(uVar456, "pbl_action"))
					{
						return 0;
					}
					else if (_0x1f0e401031e20146(uVar456, "PBL_EXIT_A"))
					{
						return 5;
					}
					break;
				case 1:
					if (_0x1f0e401031e20146(uVar456, "pbl_action"))
					{
						return 2;
					}
					else if (_0x1f0e401031e20146(uVar456, "PBL_EXIT_A"))
					{
						return 8;
					}
					break;
			}
			break;
		case 2:
			switch (iVar1083)
			{
				case 0:
				case 2:
				case 3:
					if (_0x1f0e401031e20146(uVar456, "pbl_action"))
					{
						if (fVar1110 >= 0.86f)
						{
							return 6;
						}
						return 1;
					}
					else if (_0x1f0e401031e20146(uVar456, "PBL_EXIT_A"))
					{
						return 6;
					}
					break;
				case 1:
					if (_0x1f0e401031e20146(uVar456, "pbl_action"))
					{
						if (fVar1110 >= 0.86f)
						{
							return 9;
						}
						return 3;
					}
					else if (_0x1f0e401031e20146(uVar456, "PBL_EXIT_A"))
					{
						return 9;
					}
					break;
			}
			break;
	}
	return 0;
}

void func_262(int iParam0, bool bParam1, bool bParam2)
{
	set_ped_config_flag(iParam0, 297, false);
	set_ped_config_flag(iParam0, 301, false);
	set_ped_config_flag(iParam0, 315, false);
	set_ped_config_flag(iParam0, 130, false);
	set_ped_config_flag(iParam0, 178, bParam2);
	set_ped_config_flag(iParam0, 330, false);
	set_ped_config_flag(iParam0, 317, bParam1);
}

void func_263()
{
	if (!func_257(&uLocal_1144))
	{
		func_159(&uLocal_1144);
	}
	else if (func_174(&uLocal_1144) >= 0f && func_174(&uLocal_1144) <= 0.2f)
	{
		if (func_168(&(uLocal_569[0]), -1098463898))
		{
			_0xe7fa07624574b79a(&(uLocal_569[0]), Global_35, 3, 2, 3000f, 1, 0, 0, 0);
		}
		else
		{
			func_180(&(uLocal_569[0]), Global_35, &uLocal_593, 0, 15);
		}
	}
	else if (func_174(&uLocal_1144) >= 0.2f && func_174(&uLocal_1144) <= 0.4f)
	{
		if (func_168(&(uLocal_569[1]), -1098463898))
		{
			_0xe7fa07624574b79a(&(uLocal_569[1]), Global_35, 3, 2, 3000f, 1, 0, 0, 0);
		}
		else
		{
			func_180(&(uLocal_569[1]), Global_35, &uLocal_593, 0, 15);
		}
	}
	else if (func_174(&uLocal_1144) >= 0.4f && func_174(&uLocal_1144) <= 0.6f)
	{
		if (func_168(&(uLocal_569[2]), -1098463898))
		{
			_0xe7fa07624574b79a(&(uLocal_569[2]), Global_35, 3, 2, 3000f, 1, 0, 0, 0);
		}
		else
		{
			func_180(&(uLocal_569[2]), Global_35, &uLocal_593, 0, 15);
		}
	}
}

void func_264(int iParam0, int iParam1, bool bParam2)
{
	func_33(iParam0, 0, 0);
	if (func_34(iParam0))
	{
		if (door_system_get_door_state(iParam0) != iParam1 || bParam2)
		{
			door_system_set_door_state(iParam0, iParam1);
		}
	}
}

void func_265(int iParam0)
{
	if (func_106() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_90(func_362(iVar0), 0))
		{
			if (is_ped_group_member(func_362(iVar0), func_363(), 1))
			{
				func_364(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

int func_266(int iParam0)
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

void func_267(int iParam0, int iParam1, int iParam2, int iParam3)
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
					if (func_365() > Global_32074.f_2697.f_6[iVar0]->f_5)
					{
						Global_32074.f_2697.f_6[iVar0]->f_5 = func_365();
					}
					func_366(&(Global_32074.f_2697.f_6[iVar0]->f_5), 0, 0, iParam1, iParam2, 0, 0, 0);
					func_138(&(Global_1415419->f_19[iVar0]->f_11), 2);
				}
			}
			iVar0++;
		}
	}
}

bool func_268(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_269(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_367(Global_1393447, 1);
	func_368();
	func_369();
	func_370((to_float(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135->f_54 = (func_345() / 1000);
		if (Global_1392135->f_1 & 4 != 0)
		{
			Global_1392135->f_1 = (Global_1392135->f_1 - Global_1392135->f_1 & 4);
		}
		func_371();
		if (iParam1 == -1)
		{
			if (func_108(iParam0, 1))
			{
				func_372(16777216, 2, 0, 1);
				iVar0 = floor(240f);
			}
			else if (func_108(iParam0, 2))
			{
				func_372(16777216, 0, 0, 1);
				iVar0 = floor(60f);
			}
			else if (func_108(iParam0, 4))
			{
				func_372(16777216, 5, 0, 1);
				iVar0 = floor(900f);
			}
			Global_1392135->f_4 = (Global_1392135->f_54 + iVar0);
		}
		else
		{
			func_373(iParam1, iParam2, iParam3, iParam4);
			Global_1392135->f_5[iParam1] = (((Global_1392135->f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_374(to_float(iVar0), 1, 0);
	}
	else
	{
		func_374((to_float(200) / 3f), 1, 0);
	}
}

bool func_270(int iParam0, int iParam1)
{
	return (Global_40.f_9571[iParam1] && iParam0) != 0;
}

void func_271(int iParam0, int iParam1)
{
	(*Global_1392050)[iParam1]->f_1 = ((*Global_1392050)[iParam1]->f_1 - ((*Global_1392050)[iParam1]->f_1 && iParam0));
}

void func_272(int iParam0, int iParam1)
{
	Global_40.f_9571[iParam1] = (Global_40.f_9571[iParam1] || iParam0);
}

int func_273(int iParam0)
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

struct<2> func_274(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

void func_275(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

int func_276(int iParam0)
{
	if (iParam0 == -1)
	{
		iVar0 = func_375(1);
	}
	else
	{
		iVar0 = func_376(iParam0);
	}
	return iVar0;
}

void func_277(int iParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		iVar0 = func_377(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_378(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2]->f_1++;
	}
}

int func_278()
{
	return Global_1897952->f_41;
}

void func_279(int iParam0, int iParam1)
{
	if (iParam1 != -1 && !func_280(iParam0, 8192))
	{
		iVar0 = func_378(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0]->f_1++;
	}
}

bool func_280(int iParam0, int iParam1)
{
	if (!func_89(iParam0))
	{
		return false;
	}
	return ((*Global_1310750)[iParam0]->f_1 && iParam1) != 0;
}

void func_281(int iParam0, int iParam1)
{
	iVar0 = (func_379(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	set_bit(Global_17504.f_12[iVar1], iVar2);
}

Vector3 func_282(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return 0f, 0f, 0f;
	}
	if (!func_89(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (func_380(iParam0) == 0)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = (func_379(iParam0) + iParam1);
	if (iVar0 >= 892)
	{
		return 0f, 0f, 0f;
	}
	return *Global_1310750->f_13358[iVar0];
}

void func_283(int iParam0, vector3 vParam1)
{
	if (func_92(iParam0, 512))
	{
		vParam1 = { Global_36 };
	}
	if (func_131(vParam1))
	{
		return;
	}
	if (!func_89(iParam0))
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Global_17504.f_2084)
	{
		vVar2 = { *Global_17504.f_2084[iVar0] };
		if (func_131(vVar2))
		{
			if (iVar1 < 0)
			{
				iVar1 = iVar0;
			}
		}
		else if (Global_17504.f_2084[iVar0]->f_3 == iParam0)
		{
			if (func_197(vVar2, vParam1, 1f, 1))
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

void func_284(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	func_103(iParam0, bParam3, round((fVar0 * fParam2)), round((fVar1 * fParam2)), round((fVar2 * fParam2)), round((fVar3 * fParam2)), bParam4, 1);
}

void func_285(int iParam0, bool bParam1)
{
	iVar0 = 1;
	if (bParam1)
	{
		iVar0 = 3;
	}
	if (func_92(iParam0, 262144))
	{
		if (Global_1392135->f_3 == -1)
		{
			func_372(262144, iVar0, 0, 1);
		}
	}
	if (func_92(iParam0, 128))
	{
		func_372(128, iVar0, 0, 1);
	}
	else if (func_92(iParam0, 524288))
	{
		func_372(524288, iVar0, 0, 1);
	}
	else if (func_92(iParam0, 536870912))
	{
		func_372(536870912, iVar0, 0, 1);
	}
	else if (func_92(iParam0, 4194304))
	{
		func_372(4194304, iVar0, 0, 1);
	}
	else if (func_92(iParam0, 8388608))
	{
		func_372(8388608, iVar0, 0, 1);
	}
}

void func_286(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		func_381(iVar0, iParam0);
		iVar0++;
	}
}

int func_287(int iParam0)
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

void func_288(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_289()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_290(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

bool func_291(int iParam0)
{
	return func_290(iParam0, 2);
}

bool func_292(var uParam0)
{
	return func_129(*uParam0, 1);
}

void func_293(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_382(iParam1))
		{
			func_383(iParam0, 41788943);
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
			func_384(iParam0, 0, 1);
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
			func_385(iParam0, 0);
			bVar0 = true;
		}
		func_386(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

bool func_294(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

struct<5> func_295(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_387(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_388(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_299(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_389(bParam1) };
			if (bParam2 && func_390(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_297(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_297(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_298(iParam0, &Var5, 1728382685))
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
			Var0 = { func_391(bParam1) };
			switch (func_392(iParam0))
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
			if (func_393(iParam0, -1823706425))
			{
				Var0 = { func_299(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_393(iParam0, -1483207246))
			{
				Var0 = { func_299(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_394(Var0, &Var27, bParam1, 0))
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

int func_296(int iParam0, int iParam1)
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

bool func_297(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_395(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_298(int iParam0, var uParam1, int iParam2)
{
	if (func_396(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_299(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_397(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_398(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_300(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_399(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_394(*uParam1, &Var0, bParam6, 0))
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
	if (!func_301(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_398(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_301(bool bParam0)
{
	if (func_106() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_398(bParam0));
}

int func_302(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_400(iParam0))
	{
		return 0;
	}
	if (!func_301(0))
	{
		return 0;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_303(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_401(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

int func_304(int iParam0)
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

var func_305(int iParam0, int iParam1, int iParam2, int iParam3)
{
	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = iParam1;
	Var0.f_12[0] = iParam2;
	iVar23 = 13;
	return _0xa88e215ceb0435c0(iParam0, &Var0, iParam3, iVar23, 2, 0);
}

void func_306(int iParam0, int iParam1)
{
	if (!func_129(iParam0->f_3, iParam1))
	{
		func_58(&(iParam0->f_3), iParam1);
	}
}

bool func_307(int iParam0, int iParam1)
{
	return func_129(iParam0->f_3, iParam1);
}

int func_308(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
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
		if (func_290(iVar0, 2))
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
		func_402(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_309(int iParam0, int iParam1)
{
	if (func_129(iParam0->f_3, iParam1))
	{
		func_403(&(iParam0->f_3), iParam1);
	}
}

bool func_310(int iParam0, bool bParam1)
{
	if (bParam1 && !func_112(iParam0))
	{
		return false;
	}
	iVar0 = func_199(iParam0);
	if (!_uiprompt_has_hold_mode((*Global_1945938)[iVar0]->f_3))
	{
		return is_control_pressed(2, (*Global_1945938)[iVar0]->f_4);
	}
	return _uiprompt_is_hold_mode_running((*Global_1945938)[iVar0]->f_3);
}

void func_311(int iParam0)
{
	if (func_44(iParam0, 0, 1))
	{
		clear_ped_tasks(iParam0, 1, 0);
		clear_ped_secondary_task(iParam0);
	}
}

void func_312(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	*uParam0 = floor((get_control_unbound_normal(iParam8, iParam4) * 127f));
	*uParam1 = floor((get_control_unbound_normal(iParam8, iParam5) * 127f));
	*iParam2 = floor((get_control_unbound_normal(iParam8, iParam6) * 127f));
	*iParam3 = floor((get_control_unbound_normal(iParam8, iParam7) * 127f));
}

float func_313(float fParam0, float fParam1, float fParam2)
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

void func_314(vector3 vParam0)
{
	if (!Global_1935630->f_12)
	{
		func_404(vParam0);
		func_405(vParam0);
	}
}

void func_315(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

int func_316(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	if (!is_entity_dead(*uParam0))
	{
		func_315(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !_does_volume_exist(iParam9)) || is_entity_in_volume(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (is_ambient_speech_playing(*uParam0) || is_scripted_speech_playing(*uParam0));
		fVar8 = func_47(fParam12 >= 0f, fParam12, vdist(Global_36, get_entity_coords(*uParam0, true, false)));
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
			func_159(&(iParam1->f_13));
		}
		if (func_406(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_407(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_316(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_233(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!get_ped_config_flag(*uParam0, 317, true))
						{
							func_408(*uParam0, 1, 1);
						}
					}
					else if (func_409(iParam1, 22))
					{
						func_408(*uParam0, 0, 1);
					}
				}
				if (func_410(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_411(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_412(iParam8);
					if (func_413(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (is_bit_set(uParam3[iParam1->f_1], 20))
								{
									func_414(uParam3);
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
					func_415(iParam1, uParam3, fVar8);
					if (func_416(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (is_bit_set(*iParam1, 1))
					{
						func_321(uParam3, 0, 0, 1, 1);
						clear_bit(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_417(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_410(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_418(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_413(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_411(uParam0, func_410(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_412(iParam8);
				}
				else if (is_bit_set(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_321(uParam3, 0, 0, 1, 1);
					}
					func_419(iParam1, 1);
				}
				func_415(iParam1, uParam3, fVar8);
				if (func_417(uParam0, iParam1, fParam4, bVar6))
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
			func_234(iParam1, uParam3);
			set_bit(iParam1, 3);
		}
	}
	return -1;
}

void func_317(int* iParam0, var uParam1, var uParam2)
{
	iVar0 = func_420(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (*uParam1)[iVar0]->f_13;
		iVar2 = (*uParam1)[iVar0]->f_15;
		if (!is_string_null_or_empty(sVar1))
		{
			func_238(Global_35, *uParam2, sVar1, "", -1082130432, iVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_318(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_106() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_319(int iParam0, bool bParam1)
{
	func_421(iParam0, &iVar0, &iVar1);
	if (!func_422(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_423(iVar0, iVar1);
}

void func_320(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_120(&((*uParam1)[iParam0->f_3]->f_6), 1, 1);
		if (bParam2)
		{
			func_160(iParam0, 0);
		}
	}
}

void func_321(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_112((*uParam0)[iVar0]->f_6))
			{
				if (!bParam4 && is_bit_set(uParam0[iVar0], 11))
				{
				}
				else
				{
					func_120(&((*uParam0)[iVar0]->f_6), 1, 1);
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

bool func_322(int iParam0, bool bParam1)
{
	if (func_44(iParam0, 0, 1))
	{
		return (is_scripted_speech_playing(iParam0) || (bParam1 && is_any_speech_playing(iParam0)));
	}
	return false;
}

bool func_323(float fParam0)
{
	if (func_424(1))
	{
		return true;
	}
	if (func_257(&uLocal_0) && !func_425(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

int func_324(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
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
		if (func_426())
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
				if (func_144(iParam0, 1, 1) > fParam4)
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
			fVar1 = func_166(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_159(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!is_entity_dead(iParam1))
				{
					task_look_at_entity(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_427(iParam0, iParam1, fVar1, bParam13))
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
				iVar2 = func_429(func_428(iParam0, sParam2, iParam11, iParam1, network_is_game_in_progress(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

void func_325(var uParam0, bool bParam1, int iParam2)
{
	func_430(iParam2);
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
		uParam0->f_10 = 0;
	}
	uParam0->f_5 = iParam2;
	if (Global_1572887->f_12 == -1)
	{
		uParam0->f_13 = Global_1935630->f_44;
	}
	else
	{
		uParam0->f_13 = func_431(0);
	}
	switch (uParam0->f_6)
	{
		case 0:
			if (*uParam0 & 16 != 0)
			{
				if (!*uParam0 & 33554432 != 0)
				{
					if (uParam0->f_13 == -1504859554)
					{
						if (is_ped_planting_bomb(Global_35))
						{
							func_139(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_432(1))
						{
							func_139(uParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_35) && (!func_432(1) || *uParam0 & 8192 != 0))
				{
					func_138(uParam0, 33554432);
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
	if (!uParam0->f_1 & 1024 != 0)
	{
		if (!does_entity_exist(uParam0->f_14))
		{
			if (func_433(uParam0))
			{
				uParam0->f_15 = func_345();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_345() - uParam0->f_15) > 500)
			{
				if (!is_ped_on_mount(uParam0->f_14))
				{
					uParam0->f_14 = 0;
					uParam0->f_15 = 0;
				}
			}
		}
	}
	uParam0->f_6++;
	if (uParam0->f_6 >= 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_7++;
		if (uParam0->f_7 > 4)
		{
			uParam0->f_7 = 0;
		}
	}
	func_434(uParam0);
}

bool func_326(int iParam0, var uParam1)
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
			if (!func_435(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_436(iParam0, iVar2) <= func_437(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_327(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_438(iParam2, 1, 1, 1, 0))
	{
		func_139(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_439(uParam1, 1);
	func_101();
}

bool func_328(int iParam0, var uParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_440(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_441(uParam1);
			if (func_442(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = get_game_timer();
				}
				iVar2 = (get_game_timer() - uParam1->f_2);
				iVar3 = func_443(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_439(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_439(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_329(int iParam0, int iParam1, var uParam2)
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
	if (func_444(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_441(uParam2);
		if (func_442(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = get_game_timer();
			}
			if (uParam2->f_2 != 0)
			{
				if (get_game_timer() - uParam2->f_2) > func_443(uParam2)
				{
					func_439(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_330(int iParam0, var uParam1)
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
	if (func_435(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = get_game_timer();
		}
		else if (get_game_timer() - uParam1->f_3) > func_443(uParam1)
		{
			fVar3 = func_441(uParam1);
			if (uParam1->f_12 < fVar3)
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

int func_331(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_445(bParam1, bParam2, bParam3);
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

bool func_332(var uParam0, float fParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_345();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_333(var uParam0, int iParam1, var uParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_446(uParam2);
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
			if (func_341(uParam2, iParam1))
			{
				func_439(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_334(var uParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 < IntToFloat(func_447(uParam2)))
	{
		if ((is_weapon_valid(Global_1935630->f_46) && !_0x5809dbca0a37c82b(Global_1935630->f_46)) || get_current_ped_vehicle_weapon(Global_35, &uVar0))
		{
			if (func_341(uParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_439(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_335(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_448(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, uParam2->f_22))
				{
					func_439(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, uParam2->f_27))
				{
					func_439(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar4, 0, 0);
					if (func_449(iParam1, vVar0, vVar4))
					{
						func_439(uParam2, 1);
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
				if (is_shocking_event_in_sphere(217247011, vVar0, uParam2->f_22))
				{
					func_439(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar7, 0, 0);
					if (func_449(iParam1, vVar0, vVar7))
					{
						func_439(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_336(int iParam0, var uParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_435(iParam0, uParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_450(&(Global_1935630->f_34[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_451(&(Global_1935630->f_34[iVar0])))
			{
				if (fVar1 < 35f)
				{
					if ((decor_exist_on(&(Global_1935630->f_34[iVar0]), "HorseTeamA") && decor_exist_on(iParam0, "HorseOwnerTeamA")) || (decor_exist_on(&(Global_1935630->f_34[iVar0]), "HorseTeamB") && decor_exist_on(iParam0, "HorseOwnerTeamB")))
					{
						*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
						*vVar2[1] = { vVar9 };
						uParam1->f_10 = iParam0;
						return true;
					}
				}
			}
			if (func_452(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_453(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_454(uParam1, iParam0, fVar1, iVar0))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_337(int iParam0, var uParam1)
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

bool func_338(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_345();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_339(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_455(iVar0, &iVar2))
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
	if (func_456(iVar0, iParam0))
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

int func_340(var uParam0, int iParam1)
{
	if (!decor_exist_on(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = decor_get_int(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (decor_set_int(iParam1, "iDamageFrame", uParam0->f_5))
		{
		}
	}
	else if (uParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

bool func_341(var uParam0, int iParam1)
{
	if (func_457(uParam0))
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

bool func_342(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_166(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_343()
{
}

bool func_344(var uParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_35);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_458(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_345();
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
						if (func_41(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								uParam0->f_9 = func_345();
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

int func_345()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_346()
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
	if ((func_345() - Global_1935630->f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_347(var uParam0, int iParam1)
{
	if (!does_entity_exist(uParam0->f_14))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_437(uParam0);
	if (uParam0->f_12 > func_459(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_460(iParam1);
	iVar1 = func_461(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((_0x06087579e7aa85a9(iParam1, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam1, Global_35, 1, 0) == 1)) || ((_0x06087579e7aa85a9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, uParam0->f_14, 17)) && _0x7f9b9791d4cb71f6(iParam1, uParam0->f_14, 1, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_348(int iParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_462(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_349(int iParam0, var uParam1)
{
	if (*uParam1 & 67108864 != 0)
	{
		return true;
	}
	if (Global_1935630->f_24)
	{
		return true;
	}
	if (*uParam1 & 33554432 != 0)
	{
		if (func_463(iParam0, uParam1, 1))
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
					if (!func_464(uParam1, iParam0))
					{
						if (func_41(iVar4, Global_36, 1) < 7f)
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

bool func_350(int iParam0, var uParam1)
{
	if (!func_465(0))
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

bool func_351(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_345();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_352(int iParam0, var uParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

int func_353(int iParam0, var uParam1)
{
	if (!is_ped_human(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_345();
	}
	else if (func_345() - uParam1->f_4) > func_466(uParam1)
	{
		return func_467(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

bool func_354(var uParam0, int iParam1)
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

bool func_355(int iParam0, var uParam1, var uParam2, float fParam3)
{
	iVar0 = get_frame_count();
	if (iVar0 > uParam1->f_5)
	{
		func_325(uParam1, 0, iVar0);
	}
	if (fParam3 > 0f)
	{
		uParam1->f_12 = fParam3;
	}
	else
	{
		uParam1->f_12 = vdist(Global_36, get_entity_coords(iParam0, false, false));
	}
	if (!Global_1935630->f_12 && !is_entity_dead(iParam0))
	{
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam1->f_1 & 2 != 0)
			{
				if (func_338(uParam1, 4000))
				{
					if ((func_339(iParam0, Global_1935630->f_41, *uParam1 & 128 != 0, 0, *uParam1 & 256 != 0) && func_340(uParam1, iParam0)) && func_341(uParam1, iParam0))
					{
						func_343();
						*uParam2 = 2;
						func_327(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_1 & 2 != 0)
		{
			if (uParam1->f_12 < 4f)
			{
				if (func_338(uParam1, 4000))
				{
					if ((func_339(iParam0, Global_1935630->f_41, *uParam1 & 128 != 0, 1, *uParam1 & 256 != 0) && func_340(uParam1, iParam0)) && func_341(uParam1, iParam0))
					{
						func_343();
						*uParam2 = 2;
						func_327(iParam0, uParam1, *uParam2);
						return true;
					}
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam1 & 131072 == 0)
						{
							if (func_342(iParam0, Global_1935630->f_41))
							{
								func_343();
								*uParam2 = 2;
								func_327(iParam0, uParam1, *uParam2);
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
					if (*uParam1 & 131072 == 0)
					{
						if (func_342(iParam0, Global_1935630->f_41))
						{
							func_343();
							*uParam2 = 2;
							func_327(iParam0, uParam1, *uParam2);
							return true;
						}
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam1 & 131072 == 0)
				{
					if (func_346())
					{
						if (func_342(iParam0, Global_1935630->f_42))
						{
							func_343();
							*uParam2 = 2;
							func_327(iParam0, uParam1, *uParam2);
							return true;
						}
					}
				}
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_332(uParam1, 1065353216))
			{
				if (!uParam1->f_1 & 4 != 0)
				{
					if (func_333(Global_35, iParam0, uParam1))
					{
						func_343();
						*uParam2 = 4;
						func_327(iParam0, uParam1, *uParam2);
						return true;
					}
				}
				if (!uParam1->f_1 & 256 != 0)
				{
					if (func_334(Global_35, iParam0, uParam1))
					{
						func_343();
						*uParam2 = 256;
						func_327(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_1 & 131072 != 0)
		{
			if (func_468(iParam0, uParam1))
			{
				func_343();
				*uParam2 = 131072;
				func_327(iParam0, uParam1, *uParam2);
				return true;
			}
		}
		if (*uParam1 & 4 != 0)
		{
			if (func_356(iParam0, uParam1))
			{
				func_343();
				*uParam2 = 262144;
				func_327(iParam0, uParam1, *uParam2);
				return true;
			}
		}
	}
	return false;
}

bool func_356(int iParam0, var uParam1)
{
	if (func_469(iParam0))
	{
		set_player_noise_multiplier(player_id(), 0.25f);
	}
	if (((_get_ped_crouch_movement(Global_35) || is_ped_in_cover(Global_35, 0, 0)) || is_ped_going_into_cover(Global_35)) || *uParam1 & 2097152 != 0)
	{
		iVar1 = 0;
	}
	else
	{
		iVar1 = 1;
	}
	if (_0x0ea9eacba3b01601(Global_35, iParam0, iVar1) && get_player_current_stealth_noise(player_id()) > 4f)
	{
		if (*uParam1 & 512 != 0)
		{
			if (is_ped_in_cover(Global_35, 0, 0) || is_ped_going_into_cover(Global_35))
			{
				return false;
			}
			if (_get_ped_crouch_movement(Global_35) || ((_0xa29fd00d45311eb7(Global_35, "stealth") == 1f && get_player_current_stealth_noise(player_id()) < 8f) && *uParam1 & 2097152 != 0))
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

void func_357(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_358(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_359(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_360(vector3 vParam0, vector3 vParam3)
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

bool func_361(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

int func_362(int iParam0)
{
	if (!func_470(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

int func_363()
{
	return get_player_group(get_player_index());
}

void func_364(int iParam0, int iParam1)
{
	if (!func_471(iParam0))
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

int func_365()
{
	return &Global_1899515;
}

void func_366(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_472(*uParam0);
	iVar1 = func_473(*uParam0);
	iVar2 = func_474(*uParam0);
	iVar3 = func_475(*uParam0);
	iVar4 = func_476(*uParam0);
	iVar5 = func_477(*uParam0);
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
	iVar6 = func_478(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_478(iVar1, iVar0);
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
	func_479(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_367(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_368()
{
	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_480(iVar0, 128))
		{
			func_481(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_369()
{
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_480(iVar0, 128) && func_480(iVar0, 1))
		{
			func_481(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_370(float fParam0)
{
	iVar0 = floor((fParam0 * 1000f));
	if (Global_1393237->f_3 < (get_game_timer() + iVar0))
	{
		Global_1393237->f_3 = (get_game_timer() + iVar0);
	}
}

void func_371()
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_92(iVar0, 16777216))
		{
			if (!func_482(iVar0))
			{
				func_381(iVar0, 4096);
			}
		}
		iVar0++;
	}
}

void func_372(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_268(Global_1310750[iVar0], iParam0))
		{
			if (!func_102(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_483(iVar0) < func_484(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_284(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

void func_373(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = ((iParam1 + (60 * iParam2)) + (3600 * iParam3));
	iVar1 = (iVar0 / 2);
	iVar2 = (iVar1 / 60);
	iVar3 = (iVar1 - iVar2 * 60);
	iVar4 = 0;
	switch (iParam0)
	{
		case 0:
			func_103(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_103(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_103(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_103(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_103(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_103(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_103(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_103(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_103(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_103(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_103(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_103(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_103(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_103(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_103(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_103(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_103(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_103(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_103(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_103(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_103(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_103(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_103(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_103(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_103(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_103(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_103(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_103(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_103(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_103(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_103(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_103(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_103(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_103(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_103(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_103(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_374(float fParam0, bool bParam1, bool bParam2)
{
	fVar0 = func_259();
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

int func_375(bool bParam0)
{
	if (bParam0)
	{
		iVar0 = func_485(1, 0, 0);
	}
	else
	{
		iVar0 = func_486();
	}
	return func_376(iVar0);
}

int func_376(int iParam0)
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

int func_377(int iParam0)
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

int func_378(int iParam0, int iParam1)
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

int func_379(int iParam0)
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

int func_380(int iParam0)
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

void func_381(int iParam0, int iParam1)
{
	if (!func_89(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_1 = ((*Global_1310750)[iParam0]->f_1 - ((*Global_1310750)[iParam0]->f_1 && iParam1));
}

bool func_382(int iParam0)
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

void func_383(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_487(iParam0, iParam1))
		{
			if (func_488(iParam0, iParam1))
			{
				if (func_489(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_490(iParam0);
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

void func_384(int iParam0, int iParam1, bool bParam2)
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

void func_385(int iParam0, bool bParam1)
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

void func_386(int iParam0, int iParam1)
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

struct<4> func_387(bool bParam0)
{
	return func_299(1328661203, func_491(), -1591664384, bParam0);
}

int func_388(int iParam0)
{
	if (!func_397(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_389(bool bParam0)
{
	iVar0 = func_398(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_299(923904168, func_387(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_299(923904168, func_387(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_299(923904168, func_387(bParam0), -740156546, 0);
}

bool func_390(int iParam0, bool bParam1)
{
	if (func_392(iParam0) == 1779021115)
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

struct<4> func_391(bool bParam0)
{
	iVar0 = func_398(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_299(271701509, func_387(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_299(271701509, func_387(bParam0), 12999093, 0);
}

int func_392(int iParam0)
{
	if (!func_397(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_393(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_392(iParam0);
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

bool func_394(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_398(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_395(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_397(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_299(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_398(bParam6), &Var0, 0);
	return uVar4;
}

bool func_396(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_398(0);
	*uParam1 = { func_299(iParam0, func_389(0), iParam3, 0) };
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

bool func_397(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_398(bool bParam0)
{
	if (func_106() == -1)
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

bool func_399(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

bool func_400(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_401(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_402(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_201(iParam0, 1);
	func_202(iParam0, 1);
	func_203(iParam0, 128);
}

void func_403(var uParam0, int iParam1)
{
	func_493(uParam0, iParam1);
}

void func_404(vector3 vParam0)
{
	if (!Global_1935630->f_12)
	{
		vVar1 = { get_offset_from_entity_given_world_coords(Global_35, vParam0) };
		fVar0 = get_heading_from_vector_2d(vVar1.x, vVar1.y);
		set_gameplay_cam_relative_heading(fVar0, 1f);
		_0x05bd5e4088b30a66(-180f, 180f);
	}
}

void func_405(vector3 vParam0)
{
	if (!Global_1935630->f_12)
	{
		vVar0 = { get_offset_from_entity_given_world_coords(Global_35, vParam0) };
		fVar3 = atan((vVar0.z / sqrt(((vVar0.y * vVar0.y) + (vVar0.x * vVar0.x)))));
		set_gameplay_cam_relative_pitch(fVar3, 1f);
	}
}

bool func_406(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_494(iParam0, iParam1))
		{
			if (!func_108(iParam1->f_10, 1))
			{
				set_ped_config_flag(iParam0, 130, false);
				set_ped_config_flag(iParam0, 315, false);
				set_ped_config_flag(iParam0, 297, false);
				set_ped_config_flag(iParam0, 178, true);
				func_321(uParam2, 0, 0, 1, 0);
				func_139(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_108(iParam1->f_10, 1))
		{
			func_495(uParam2);
			set_ped_config_flag(iParam0, 130, true);
			set_ped_config_flag(iParam0, 315, true);
			set_ped_config_flag(iParam0, 297, true);
			set_ped_config_flag(iParam0, 178, false);
			func_138(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_407(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		bVar4 = func_108(iParam4, 32);
		func_320(iParam1, uParam2, 0);
		iVar5 = func_496(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			set_ped_config_flag(*uParam0, 178, false);
			return true;
		}
		func_321(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_108(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_108(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_108(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_108(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_108(iParam4, 8388608) || func_108(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_108(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_108(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_409(iParam1, 4))
		{
			iVar6 |= 1024;
			_0xbb1e41dd3d3c6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_409(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_108(iParam4, 67108864))
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
				iParam6 = func_497(uParam0);
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
			if (func_108(iParam4, 268435456))
			{
				iVar8 = func_498(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_499(iParam1, (*uParam2)[iVar8]);
				}
			}
			if (func_409(iParam1, 23))
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
			if (func_108(iParam4, 2) || func_108(iParam4, 16))
			{
				func_408(*uParam0, 1, 1);
			}
			else
			{
				func_408(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_408(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !is_entity_dead(iParam0))
	{
		set_ped_config_flag(iParam0, 317, bParam1);
	}
}

bool func_409(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

bool func_410(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_500(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_411(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_501(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_108(iParam10, 32), 1, 0);
			set_bit(iParam2, 1);
		}
	}
	else if (is_bit_set(*iParam2, 1))
	{
		clear_bit(iParam2, 1);
	}
}

void func_412(int iParam0)
{
	if (func_108(iParam0, 4))
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
	if (func_108(iParam0, 16384))
	{
		disable_control_action(0, -485697785, false);
	}
	if (func_108(iParam0, 8))
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
	}
}

bool func_413(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	iVar1 = func_502(1);
	bVar2 = is_bit_set(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = is_ped_on_foot(Global_35);
	bVar10 = is_ped_injured(*uParam0);
	bVar11 = (((_is_ped_carrying(Global_35) || func_503(Global_35)) || func_504(Global_35)) || func_505(Global_35));
	fVar12 = -1f;
	if (func_257(&(iParam1->f_13)))
	{
		fVar12 = func_506(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((*uParam4)[iVar0]->f_8 != iParam12)
		{
			iParam12 = (*uParam4)[iVar0]->f_8;
		}
		bVar4 = func_112((*uParam4)[iVar0]->f_6);
		func_507(*uParam0, (*uParam4)[iVar0], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (is_bit_set(uParam4[iVar0], 20))
		{
			bVar3 = true;
		}
		if (func_508(*uParam0, iParam1, (*uParam4)[iVar0], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_509(iParam12, (*uParam4)[iVar0]->f_6))
				{
					if (!bVar7)
					{
						func_321(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_510(uParam4, 0, 0);
					}
					if (is_bit_set(uParam4[iVar0], 11))
					{
						func_320(iParam1, uParam4, is_bit_set(*iParam1, 6));
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
					if (func_511(iParam1, fParam6, iParam1->f_9))
					{
						func_159(&(iParam1->f_18));
						if (bVar6)
						{
							func_510(uParam4, 0, 0);
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
		func_512(iParam1, fParam2);
	}
	return bVar5;
}

void func_414(var uParam0)
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

void func_415(int* iParam0, var uParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_513((*uParam1)[iVar0]))
		{
			if (is_bit_set(uParam1[iVar0], 20))
			{
				func_512(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_416(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!is_control_pressed(0, -124244224))
		{
			if (func_514(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_515(iParam1, 0);
				func_320(iParam1, uParam2, func_409(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_417(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_159(&(iParam1->f_18));
			return false;
		}
		else if (func_257(&(iParam1->f_18)))
		{
			func_255(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_257(&(iParam1->f_18)))
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
	return func_425(&(iParam1->f_18), fParam2);
	return true;
}

void func_418(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_507(iParam0, (*uParam2)[iVar0], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_419(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

int func_420(int* iParam0)
{
	if (func_409(iParam0, 0))
	{
		if (func_516(iParam0))
		{
			func_419(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

void func_421(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_422(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_517(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_518(iParam0))
	{
		return false;
	}
	if (func_519(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_520(iParam0, 1)) || func_521(32768))
	{
		if (!func_520(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_522())
	{
		return false;
	}
	return true;
}

void func_423(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_424(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

bool func_425(var uParam0, float fParam1)
{
	if (func_523(uParam0, fParam1))
	{
		func_255(uParam0);
		return true;
	}
	return false;
}

bool func_426()
{
	return (Global_1894899 & 1 != 0 && func_486() != -1);
}

bool func_427(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_428(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
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
	return func_524(iParam0, &Var0);
}

int func_429(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_430(int iParam0)
{
	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_525();
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
			func_526(&(Global_1935630->f_34), &(Global_1935630->f_39));
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

var func_431(int iParam0)
{
	return &(Global_1109400->f_276[iParam0]);
}

bool func_432(bool bParam0)
{
	if (func_527(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_433(var uParam0)
{
	iVar0 = Global_1935630->f_40;
	if (func_106() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_528(uParam0);
		}
	}
	else if (!does_entity_exist(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_528(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_461(iVar0) == -1)
	{
		return false;
	}
	if (!decor_exist_on(iVar0, "HorseScriptCreator") || decor_get_int(iVar0, "HorseScriptCreator") != get_hash_of_this_script_name())
	{
		return false;
	}
	uParam0->f_14 = iVar0;
	return true;
}

void func_434(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_529(uParam0);
	}
}

bool func_435(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_461(iParam2);
	}
	else
	{
		iVar1 = func_460(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_461(iParam0);
	}
	else
	{
		iVar0 = func_460(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_108(*uParam1, 8388608))
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

float func_436(int iParam0, int iParam1)
{
	return func_166(iParam0, iParam1, 1, 1);
}

float func_437(var uParam0)
{
	return uParam0->f_26;
}

bool func_438(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_439(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_139(uParam0, 134217728);
	}
	else
	{
		func_138(uParam0, 134217728);
	}
}

bool func_440(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_166(iVar0, iParam0, 1, 1) <= 4f)
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
		if (_is_weapon_sniper(func_530(iVar0, 0)))
		{
			if (func_531(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_441(var uParam0)
{
	return uParam0->f_17;
}

bool func_442(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if (uParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_108(*uParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (_0x06087579e7aa85a9(iParam1, Global_35, -1f, fParam3, -1f, fVar0))
	{
		return true;
	}
	if (*uParam0 & 32768 != 0)
	{
		if (has_entity_clear_los_to_entity(iParam1, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

int func_443(var uParam0)
{
	return uParam0->f_18;
}

bool func_444(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (_is_weapon_sniper(func_530(iVar0, 0)))
		{
			if (func_532(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_445(bool bParam0, bool bParam1, bool bParam2)
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

float func_446(var uParam0)
{
	return uParam0->f_23;
}

int func_447(var uParam0)
{
	return uParam0->f_21;
}

int func_448(var uParam0)
{
	switch (uParam0->f_7)
	{
		case 0:
			switch (uParam0->f_6)
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
			switch (uParam0->f_6)
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
			switch (uParam0->f_6)
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
			switch (uParam0->f_6)
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
			switch (uParam0->f_6)
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
	if (*uParam0 & 16777216 != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_449(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_533(iParam0, vParam4, 0.5f))
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

int func_450(int iParam0)
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
	if (func_534(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_451(int iParam0)
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

bool func_452(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_469(iParam1))
		{
			return false;
		}
	}
	fVar0 = 5f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = _0x900ca00ce703e1e2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_453(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_469(iParam1))
		{
			return false;
		}
	}
	fVar0 = 10f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = _0x900ca00ce703e1e2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_454(var uParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = 40f;
	if (func_469(iParam1))
	{
		return false;
	}
	if (*uParam0 & 65536 != 0)
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

bool func_455(int iParam0, int iParam1)
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

bool func_456(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (func_535(iParam0, 1, 0, 0) != 2055893578)
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

bool func_457(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

bool func_458(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_41(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_459(var uParam0)
{
	return uParam0->f_24;
}

int func_460(int iParam0)
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

int func_461(int iParam0)
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

int func_462(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_455(Global_35, &iVar1))
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
		fVar2 = func_166(iParam0, player_ped_id(), 0, 1);
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
		if (func_166(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

bool func_463(int iParam0, var uParam1, bool bParam2)
{
	func_527(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_464(uParam1, iVar0))
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
				if (!bParam2 || !func_464(uParam1, iVar1))
				{
					if (func_41(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_464(var uParam0, int iParam1)
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

int func_465(int iParam0)
{
	if (func_536())
	{
		return 0;
	}
	return func_537((*Global_1347702)[58]->f_15, 1);
}

int func_466(var uParam0)
{
	return uParam0->f_20;
}

int func_467(int iParam0, var uParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (uParam1->f_4 == 0)
		{
			return 0;
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = uParam1->f_12;
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

bool func_468(int iParam0, var uParam1)
{
	fVar0 = func_538(uParam1);
	if (uParam1->f_12 > (fVar0 + 5f))
	{
		return false;
	}
	if (!_0x5102307ce88798eb(iParam0))
	{
		request_ped_visibility_tracking(iParam0);
	}
	if (uParam1->f_12 < fVar0 || is_tracked_ped_visible(iParam0))
	{
		fVar1 = -1f;
		fVar2 = func_539(_0x2ba9d7bf629f920c(iParam0), (fVar0 + 5f));
		if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, fVar2, -1f, fVar1) && _0x7f9b9791d4cb71f6(iParam0, Global_35, 1, 0) == 1)
		{
			return true;
		}
		else if (is_weapon_valid(Global_1935630->f_44))
		{
			if (_is_weapon_lantern(Global_1935630->f_44) || _is_weapon_torch(Global_1935630->f_44))
			{
				if (uParam1->f_12 <= 5f)
				{
					if (func_540())
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

bool func_469(int iParam0)
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

bool func_470(int iParam0)
{
	return iParam0 > -1;
}

bool func_471(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

int func_472(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_429(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_473(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_474(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_475(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_476(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_477(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_478(int iParam0, int iParam1)
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

void func_479(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_541(uParam0, iParam6);
	func_542(uParam0, iParam5);
	func_543(uParam0, iParam4);
	func_544(uParam0, iParam3);
	func_545(uParam0, iParam2);
	func_546(uParam0, iParam1);
}

bool func_480(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return false;
	}
	return (Global_1393237->f_11[iParam0]->f_10 && iParam1) != 0;
}

void func_481(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return;
	}
	Global_1393237->f_11[iParam0]->f_10 = (Global_1393237->f_11[iParam0]->f_10 || iParam1);
}

bool func_482(int iParam0)
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

int func_483(int iParam0)
{
	if (func_89(iParam0))
	{
		return Global_17504.f_42[iParam0]->f_4;
	}
	return 0;
}

int func_484(int iParam0)
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

int func_485(int iParam0, bool bParam1, bool bParam2)
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
				if (!bParam1 || func_547(iVar2))
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

int func_486()
{
	return Global_1894899->f_2;
}

bool func_487(int iParam0, int iParam1)
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

bool func_488(int iParam0, int iParam1)
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

bool func_489(int iParam0, int iParam1)
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
	if (!func_487(iParam0, iVar0))
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

void func_490(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

struct<4> func_491()
{
	return Var0;
}

bool func_492(int iParam0)
{
	if (!func_548(iParam0))
	{
		return false;
	}
	return func_549(iParam0);
}

void func_493(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_494(int iParam0, int* iParam1)
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
		if (is_ped_in_combat(iParam0, func_550((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_495(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_513((*uParam0)[iVar0]))
		{
			func_118((*uParam0)[iVar0], 14);
		}
		iVar0++;
	}
}

int func_496(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(*uParam2)[iVar0]->f_8 = 6;
		func_551(iParam0, (*uParam2)[iVar0], fParam3, 3, 0, 6, bParam4, 0);
		if (func_112((*uParam2)[iVar0]->f_6))
		{
			func_118((*uParam2)[iVar0], 11);
			return (*Global_1945938)[(*uParam2)[iVar0]->f_6]->f_3;
		}
	}
	return 0;
}

int func_497(var uParam0)
{
	iVar0 = func_93(*uParam0);
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

int func_498(var uParam0, int iParam1)
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

void func_499(int* iParam0, int* iParam1)
{
	if (!func_409(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_118(iParam1, 19);
			func_515(iParam0, 23);
			func_552(iParam1, 2);
		}
	}
}

bool func_500(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (func_553(16))
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
					func_554(16);
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

void func_501(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_551(iParam0, (*uParam1)[iVar0], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			clear_bit((*uParam1)[iVar0], 14);
		}
		iVar0++;
	}
}

int func_502(int iParam0)
{
	return _money_get_cash_balance();
}

bool func_503(int iParam0)
{
	return (func_555(iParam0, 4) || func_555(iParam0, 5));
}

int func_504(int iParam0)
{
	return func_555(iParam0, 7);
}

int func_505(int iParam0)
{
	return func_555(iParam0, 6);
}

float func_506(var uParam0)
{
	if (!func_257(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_258(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_259() - uParam0->f_1);
}

void func_507(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (is_bit_set(*iParam1, 14))
	{
		if (func_513(iParam1))
		{
			clear_bit(iParam1, 14);
			func_551(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_508(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_556(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_557(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_115(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_115(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_558(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_509(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_559(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_560(iParam1, 1))
	{
		func_561(iParam1, 1);
		return true;
	}
	return false;
}

void func_510(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_63((*uParam0)[iVar0], bParam1, bParam2);
		iVar0++;
	}
}

bool func_511(int* iParam0, float fParam1, bool bParam2)
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

void func_512(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		disable_control_action(0, 1101824977, true);
		disable_control_action(0, 966551065, true);
		disable_control_action(0, 668058244, true);
		set_ped_reset_flag(Global_35, 203, true);
	}
}

bool func_513(int* iParam0)
{
	if (!is_string_null_or_empty(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_514(int iParam0)
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

void func_515(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

bool func_516(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

bool func_517(int iParam0, int iParam1)
{
	if (func_106() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_518(int iParam0)
{
	if (func_106() != -1)
	{
		if (func_520(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_520(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_519(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_520(iParam0, 65536) && !func_520(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_520(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_520(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_520(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_521(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_522()
{
	return Global_1905944->f_5694;
}

bool func_523(var uParam0, float fParam1)
{
	if (!func_257(uParam0))
	{
		return false;
	}
	if (func_506(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_524(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

bool func_525()
{
	if (func_562())
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

void func_526(var uParam0, var uParam1)
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

bool func_527(bool bParam0, int iParam1, int iParam2)
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

int func_528(var uParam0)
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
	if (uParam0->f_6 == 3)
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

void func_529(var uParam0)
{
	if (Global_1935630->f_38 == 0)
	{
		func_138(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1935630->f_34[iVar0])))
				{
					func_139(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_530(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_531(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_532(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_532(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_533(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_534(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_535(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_536()
{
	if (func_106() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

int func_537(int iParam0, bool bParam1)
{
	switch (func_563(iParam0))
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

float func_538(var uParam0)
{
	if (!*uParam0 & 1 != 0)
	{
		return func_459(uParam0);
	}
	if (_0x25ca89b2a39dcc69() > 0.833f)
	{
		return func_564(uParam0);
	}
	return func_459(uParam0);
}

float func_539(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_540()
{
	iVar0 = func_475(func_565());
	iVar1 = func_476(func_565());
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

void func_541(var uParam0, int iParam1)
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

void func_542(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || shift_left(iParam1, 22));
}

void func_543(var uParam0, int iParam1)
{
	iVar0 = func_473(*uParam0);
	iVar1 = func_472(*uParam0);
	if (iParam1 < 1 || iParam1 > func_478(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || shift_left(iParam1, 17));
}

void func_544(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || shift_left(iParam1, 12));
}

void func_545(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || shift_left(iParam1, 6));
}

void func_546(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || shift_left(iParam1, 0));
}

bool func_547(int iParam0)
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

bool func_548(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_549(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

int func_550(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_551(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (func_112(iParam1->f_6))
	{
		if (bParam7 || is_bit_set(*iParam1, 11))
		{
			return;
		}
		func_120(&(iParam1->f_6), 0, 1);
	}
	if (!func_112(iParam1->f_6) && !is_bit_set(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_513(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_566(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_112(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_558(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_567(iParam1->f_6, 17, 1, 1);
				}
				if (is_bit_set(*iParam1, 1))
				{
					if (is_bit_set(*iParam1, 3))
					{
						func_568(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_113(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (is_bit_set(*iParam1, 10))
				{
					func_567(iParam1->f_6, 16, 1, 1);
				}
				if (!is_bit_set(*iParam1, 0) || is_bit_set(*iParam1, 13))
				{
					func_115(iParam1->f_6, 0, 1);
				}
				else
				{
					func_115(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

void func_552(int* iParam0, int iParam1)
{
	if (!func_117(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_118(iParam0, 14);
		}
	}
}

bool func_553(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_554(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_555(int iParam0, int iParam1)
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

bool func_556(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

bool func_557(int iParam0, bool bParam1)
{
	if (bParam1 && !func_112(iParam0))
	{
		return false;
	}
	return !func_290(iParam0, 4);
}

void func_558(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam3 && !func_112(iParam0))
	{
		return;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = func_199(iParam0);
	func_567(iParam0, 18, 0, 1);
	func_567(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = _uiprompt_get_group_id_for_target_entity(iParam1);
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam4, iParam2);
}

bool func_559(int iParam0, bool bParam1)
{
	if (bParam1 && !func_112(iParam0))
	{
		return false;
	}
	iVar0 = func_199(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

bool func_560(int iParam0, bool bParam1)
{
	if (bParam1 && !func_112(iParam0))
	{
		return false;
	}
	iVar0 = func_199(iParam0);
	return _uiprompt_is_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_561(int iParam0, bool bParam1)
{
	if (bParam1 && !func_112(iParam0))
	{
		return;
	}
	iVar0 = func_199(iParam0);
	_uiprompt_restart_modes((*Global_1945938)[iVar0]->f_3);
}

bool func_562()
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

int func_563(int iParam0)
{
	if (!func_569(iParam0))
	{
		return -1;
	}
	return func_570(iParam0);
}

var func_564(var uParam0)
{
	return uParam0->f_25;
}

int func_565()
{
	return &Global_1899515;
}

int func_566(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_290(iVar0, 2))
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
				func_402(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_567(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_112(iParam0))
	{
		return;
	}
	iVar0 = func_199(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_568(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (bParam4 && !func_112(iParam0))
	{
		return;
	}
	iVar0 = func_199(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(10, sParam1, sParam2, sParam3));
}

bool func_569(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_570(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_571(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_571(int iParam0)
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

