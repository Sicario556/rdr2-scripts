void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_14 = "mech_skin@BUCK_BUTCHER";
	sLocal_15 = "PBL_BASE";
	sLocal_16 = "PBL_DUMP";
	sLocal_17 = "PBL_DROP_IN";
	sLocal_27 = "beat_gang_camp_reminder";
	iLocal_28 = 23;
	request_streamed_texture_dict("pausemenu_player_update", false);
	uVar0 = _databinding_add_data_bool_from_path("", "AllowedToSave", 0);
	uVar1 = _databinding_add_data_bool_from_path("", "bPauseMenuAllowedToReplay", 0);
	_databinding_add_data_bool(_databinding_add_data_container_from_path("", "sessionInfo"), "isArthur", !func_1());
	Local_29.f_156 = _databinding_add_data_bool_from_path("", "bDisplayMissionChallengeChecklist", 0);
	Local_29.f_157 = _databinding_add_data_bool_from_path("", "bAllowChecklistToggle", 1);
	if (func_2())
	{
		_databinding_add_data_bool_from_path("", "bPauseMenuPhotoModeVisible", 1);
		_databinding_add_data_bool_from_path("", "bEnablePauseMenuPhotoMode", func_3());
	}
	else
	{
		_databinding_add_data_bool_from_path("", "bEnablePauseMenuPhotoMode", 0);
		_databinding_add_data_bool_from_path("", "bPauseMenuPhotoModeVisible", 0);
	}
	if (_databinding_is_data_id_valid(Global_1935689->f_10217))
	{
		Local_29.f_166 = _databinding_read_data_bool(Global_1935689->f_10217);
		_databinding_write_data_bool(Global_1935689->f_10217, false);
	}
	Var2 = { Global_40.f_9 };
	if (_does_streamed_txd_exist(-637848863))
	{
		_request_streamed_txd(-637848863, false);
	}
	network_set_script_is_safe_for_network_game();
	if (has_force_cleanup_occurred(4))
	{
		if (!Global_20)
		{
			Global_40.f_9 = { Var2 };
		}
		func_4(uVar0, uVar1);
	}
	Global_0.f_14 = func_5();
	if (Global_0.f_14)
	{
		Global_20 = 0;
		func_6(0, 0);
		_databinding_write_data_bool(uVar0, true);
	}
	_databinding_write_data_bool(uVar1, func_7());
	func_8(&Local_29);
	wait(0);
	func_9(&Local_29);
	_0xdd1232b332cbb9e7(6, 1, 0);
	Global_43890 = -1;
	func_10();
	iVar34 = _get_attribute_core_value(Global_35, 0);
	func_11(1, to_float(iVar34), 0);
	func_12();
	iVar34 = _get_attribute_core_value(Global_35, 1);
	func_11(2, to_float(iVar34), 0);
	func_13();
	iVar34 = _get_attribute_core_value(Global_35, 2);
	func_11(3, to_float(iVar34), 0);
	func_14();
	while (((!_0x9e4ef615e307fbbe() && !func_15(Global_43890)) && !bVar33) && !Local_29.f_167)
	{
		func_16(&Local_29);
		Global_43890 = func_17(&Local_29, &uVar32);
		bVar33 = func_18();
		wait(0);
	}
	func_19(&Local_29);
	if (!Global_20)
	{
		Global_40.f_9 = { Var2 };
	}
	if (bVar33)
	{
		func_20();
		_0xbc2c927f5c264243(0);
		_0x6339c1ea3979b5f7("Main_Menu", "Load_Menu_Scenes");
	}
	if (func_15(Global_43890))
	{
		_close_all_apps();
		do_screen_fade_out(0);
		if (_get_number_of_references_of_script_with_name_hash(778601866) > 0)
		{
			func_21(778601866, 523);
		}
	}
	if (func_2())
	{
		if (Local_29.f_167)
		{
			_close_all_apps();
			func_22();
		}
	}
	func_4(uVar0, uVar1);
}

bool func_1()
{
	if (func_23() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

bool func_2()
{
	return _unlock_is_unlocked(99890643);
}

int func_3()
{
	if (_is_app_active(1289756680))
	{
		return 0;
	}
	if (((((((animpostfx_is_running("ChapterTitle_IntroCh01") || animpostfx_is_running("ChapterTitle_IntroCh02")) || animpostfx_is_running("ChapterTitle_IntroCh03")) || animpostfx_is_running("ChapterTitle_IntroCh04")) || animpostfx_is_running("ChapterTitle_IntroCh05")) || animpostfx_is_running("ChapterTitle_IntroCh06")) || animpostfx_is_running("ChapterTitle_IntroCh08Epi01")) || animpostfx_is_running("ChapterTitle_IntroCh09Epi02"))
	{
		return 0;
	}
	if (((((((((((((((((((animpostfx_is_running("Title_Gen_FewDaysLater") || animpostfx_is_running("Title_Gen_FewDaysLater_onblack")) || animpostfx_is_running("Title_Gen_FewHoursLater")) || animpostfx_is_running("Title_Gen_FewHoursLater_onblack")) || animpostfx_is_running("Title_Gen_FewMonthsLater")) || animpostfx_is_running("Title_Gen_FewMonthsLater_onblack")) || animpostfx_is_running("Title_Gen_FewWeeksLater")) || animpostfx_is_running("Title_Gen_FewWeeksLater_onblack")) || animpostfx_is_running("Title_Gen_coupledayslater")) || animpostfx_is_running("Title_Gen_coupledayslater_onblack")) || animpostfx_is_running("Title_Gen_couplemonthslater")) || animpostfx_is_running("Title_Gen_couplemonthslater_onblack")) || animpostfx_is_running("Title_Gen_coupleweekslater")) || animpostfx_is_running("Title_Gen_coupleweekslater_onblack")) || animpostfx_is_running("Title_Gen_daylater")) || animpostfx_is_running("Title_Gen_daylater_onblack")) || animpostfx_is_running("Title_Gen_somedaysLater")) || animpostfx_is_running("Title_Gen_somedaysLater_onblack")) || animpostfx_is_running("Title_Gen_someyearsLater")) || animpostfx_is_running("Title_Gen_someyearsLater_onblack"))
	{
		return 0;
	}
	if (decor_exist_on(player_ped_id(), "player_crafting_active"))
	{
		if (decor_get_bool(player_ped_id(), "player_crafting_active"))
		{
			return 0;
		}
	}
	if (func_24(&Global_1935630, 4096))
	{
		return 0;
	}
	if (Global_1392040->f_6)
	{
		return 0;
	}
	if (_is_app_active(1833066477) || _is_app_running(1833066477))
	{
		return 0;
	}
	if (func_24(&Global_1935630, 16384) || _0x99f92061efe908ba())
	{
		return 0;
	}
	if (func_27(func_26(func_25())))
	{
		if (&Global_40.f_9384[func_26(func_25())] == 256)
		{
			return 0;
		}
	}
	if ((animpostfx_is_running("MissionChoice") || animpostfx_is_running("PlayerHonorChoiceGood")) || animpostfx_is_running("PlayerHonorChoiceBad"))
	{
		return 0;
	}
	if (_get_number_of_references_of_script_with_name_hash(-1799469283) > 0)
	{
		if (is_screen_faded_out() || is_screen_fading_out())
		{
			return 0;
		}
	}
	if (func_28() || func_29())
	{
		return 0;
	}
	if (_0x139efb0a71dd9011())
	{
		return 0;
	}
	if (_get_number_of_references_of_script_with_name_hash(-92416669) > 0)
	{
		return 0;
	}
	if (_get_number_of_references_of_script_with_name_hash(1433015236) > 0)
	{
		return 0;
	}
	if (!is_player_playing(player_id()))
	{
		return 0;
	}
	if (_get_number_of_references_of_script_with_name_hash(-2055369659) > 0)
	{
		if (func_30(Global_35, -3704.772f, -2616.527f, -14.9239f, 1) < 4f)
		{
			return 0;
		}
	}
	if (_get_number_of_references_of_script_with_name_hash(-580465115) > 0)
	{
		if (func_30(Global_35, 2435.137f, -1225.753f, 44.8932f, 1) < 4f)
		{
			return 0;
		}
	}
	if (_get_number_of_references_of_script_with_name_hash(-2124103932) > 0)
	{
		if (func_30(Global_35, -1786.264f, -423.6425f, 154.3952f, 1) < 4f)
		{
			return 0;
		}
	}
	if (_get_number_of_references_of_script_with_name_hash(-1176988783) > 0)
	{
		if (func_30(Global_35, 2674.925f, -1389.901f, 45.4948f, 1) < 4f)
		{
			return 0;
		}
	}
	if (_get_number_of_references_of_script_with_name_hash(-1389645547) > 0)
	{
		if (func_30(Global_35, 2944.418f, 1337.022f, 43.1089f, 1) < 4f)
		{
			return 0;
		}
	}
	if (_get_number_of_references_of_script_with_name_hash(-130809593) > 0)
	{
		if (func_30(Global_35, 2644.537f, -1209.317f, 52.3504f, 1) < 4f)
		{
			return 0;
		}
	}
	if (_get_number_of_references_of_script_with_name_hash(-651201458) > 0)
	{
		if (func_30(Global_35, 2780.151f, -1310.231f, 45.5924f, 1) < 4f)
		{
			return 0;
		}
	}
	if (_get_number_of_references_of_script_with_name_hash(-2036486134) > 0)
	{
		if (func_30(Global_35, -283.7343f, 865.7388f, 120.1339f, 1) < 10f)
		{
			return 0;
		}
	}
	return 1;
}

void func_4(var uParam0, var uParam1)
{
	if (func_15(Global_43890))
	{
		_0x64b956f4e761df5c(1);
		func_31();
	}
	_databinding_remove_data_entry(uParam0);
	_databinding_remove_data_entry(uParam1);
	_databinding_remove_data_entry(Local_29.f_156);
	_databinding_remove_data_entry(Local_29.f_157);
	_databinding_remove_data_entry(Local_29.f_158);
	if (_databinding_is_data_id_valid(Global_1935689->f_10217))
	{
		_databinding_write_data_bool(Global_1935689->f_10217, Local_29.f_166);
	}
	if (func_23() == -1)
	{
		func_32();
	}
	terminate_this_thread();
}

int func_5()
{
	if (func_33(0, 1, 0))
	{
		return 0;
	}
	if (func_34(player_id(), 1, 0, 1))
	{
		return 0;
	}
	if (_0x336b3d200ab007cb(Global_35, Global_36, 50f, 0) > 0)
	{
		return 0;
	}
	if (!func_35())
	{
		return 0;
	}
	if (func_36())
	{
		return 0;
	}
	if (func_37() > 0)
	{
		return 0;
	}
	if (Global_1914319->f_18941.f_17)
	{
		return 0;
	}
	iVar0 = func_38(0);
	if (func_15(iVar0) && func_39(iVar0) == 8)
	{
		return 0;
	}
	if (func_40(16) || func_41(8192))
	{
		return 0;
	}
	return 1;
}

void func_6(bool bParam0, bool bParam1)
{
	if (func_23() == -1)
	{
		func_42();
	}
	else
	{
		return;
	}
	func_43();
	Global_40.f_9.f_14 = func_44();
	Global_40.f_9.f_20 = _get_bounty_for_player(get_player_index());
	Global_40.f_11999 = _0xb00ce33465b5406d(1, "startup");
	if (bParam0 && !bParam1)
	{
		if (func_45())
		{
			func_46(Global_1310720->f_1);
		}
		else if (func_47() == func_48(Global_36, 1) && func_49() != 2)
		{
			func_46(Global_40.f_6);
			Global_40.f_9 = 1;
		}
		else
		{
			func_46(Global_36);
		}
		func_50(Global_36, &vVar0, &uVar4);
		if (!func_45())
		{
			if (func_51(vVar0, Global_36) < func_51(Global_40.f_9.f_7, Global_36))
			{
				func_46(vVar0);
				Global_40.f_9 = uVar4;
			}
			else
			{
				Global_40.f_9 = 0;
			}
		}
		Global_40.f_9.f_15 = func_48(Global_40.f_9.f_7, 1);
	}
	else if (!bParam0)
	{
		func_50(Global_36, &(Global_40.f_9.f_7), &(Global_40.f_9));
		override_save_house(true, Global_40.f_9.f_7, 0f, true, &vVar0, &uVar3);
	}
	if (!bParam1)
	{
		func_52(Global_1935630, 8192);
	}
	func_53();
}

int func_7()
{
	if (func_33(0, 0, 1))
	{
		return 0;
	}
	if (func_54())
	{
		return 0;
	}
	if (func_34(player_id(), 1, 0, 1))
	{
		return 0;
	}
	if (_0x72ad59f7b7fb6e24(get_player_index(), 5000))
	{
		return 0;
	}
	if (_0x336b3d200ab007cb(Global_35, Global_36, 50f, 0) > 0)
	{
		return 0;
	}
	if (Global_1934266->f_60)
	{
		return 0;
	}
	if (Global_16)
	{
		return 0;
	}
	if (Global_1914319->f_18969)
	{
		return 0;
	}
	if (&Global_1956584)
	{
		return 0;
	}
	if (func_55(0))
	{
		return 0;
	}
	if (func_56())
	{
		return 0;
	}
	if (func_57())
	{
		return 0;
	}
	if (Global_1357549->f_1641 > 1)
	{
		return 0;
	}
	if (func_15(Global_43890))
	{
		return 0;
	}
	if (_get_number_of_references_of_script_with_name_hash(27496334) > 0)
	{
		return 0;
	}
	if (func_58())
	{
		return 0;
	}
	if (is_ped_falling(Global_35))
	{
		return 0;
	}
	if (is_ped_dead_or_dying(Global_35, true))
	{
		return 0;
	}
	if (is_thread_active(&Global_1900073, false))
	{
		return 0;
	}
	if (func_59())
	{
		return 0;
	}
	if (Global_36560 >= 2 && Global_36560 <= 5)
	{
		return 0;
	}
	if (func_41(4096))
	{
		return 0;
	}
	if (func_40(16) || func_41(8192))
	{
		return 0;
	}
	return 1;
}

void func_8(var uParam0)
{
	if (Global_43891)
	{
		return;
	}
}

void func_9(var uParam0)
{
	if (func_60(76))
	{
		Var0 = { func_61(909007663, 1325140787) };
		_0x91a4f58e01ed5e4c(&Var0, 6);
		Var0 = { func_61(909007663, 2101241783) };
		_0x91a4f58e01ed5e4c(&Var0, 22);
		Var0 = { func_61(909007663, -1296936294) };
		_0x91a4f58e01ed5e4c(&Var0, 19);
		Var0 = { func_61(909007663, -798388728) };
		_0x91a4f58e01ed5e4c(&Var0, 12);
		Var0 = { func_61(909007663, -1787586531) };
		_0x91a4f58e01ed5e4c(&Var0, 6);
		Var0 = { func_61(909007663, -1002834519) };
		_0x91a4f58e01ed5e4c(&Var0, 18);
		Var0 = { func_61(909007663, -50600144) };
		_0x91a4f58e01ed5e4c(&Var0, 1);
		Var0 = { func_61(909007663, -348503123) };
		_0x91a4f58e01ed5e4c(&Var0, 8);
		Var0 = { func_61(909007663, -528798161) };
		_0x91a4f58e01ed5e4c(&Var0, 15);
		Var0 = { func_61(909007663, 532323983) };
		_0x91a4f58e01ed5e4c(&Var0, 107);
		func_53();
	}
	uParam0->f_158 = _databinding_add_data_container_from_path("", "progress");
	fVar2 = func_64(func_63(func_62(1215094015)), 1, 0);
	_databinding_add_data_string(uParam0->f_158, "completionPercent", _create_var_string(6, "PM_SCR_PROG_PERCENT", fVar2));
	uParam0->f_161 = _databinding_add_data_string(uParam0->f_158, "label", "");
	uParam0->f_162 = _databinding_add_data_string(uParam0->f_158, "description", "");
	uParam0->f_163 = _databinding_add_data_bool(uParam0->f_158, "descriptionVisible", false);
	uParam0->f_164 = _databinding_add_data_string(uParam0->f_158, "textureName", "");
	uParam0->f_165 = _databinding_add_data_hash(uParam0->f_158, "textureTxd", -637848863);
	uParam0->f_159 = _databinding_add_ui_item_list(uParam0->f_158, "itemList");
	iVar3 = 0;
	while (iVar3 < 40)
	{
		func_65(uParam0, iVar3);
		iVar3++;
	}
}

float func_10()
{
	if (func_66())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_67(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_68())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_69())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_67(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_70();
	fVar2 = func_71();
	fVar3 = func_72();
	fVar4 = func_73();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_74()));
	fVar7 = (func_67(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_75(1, round((to_float(iVar8) * fVar10)), 0);
	func_76(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_67(0);
	}
	return func_77(fVar7, -100f, 100f);
}

void func_11(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_78(iParam0, 0, 0, 0);
	sVar0 = _create_var_string(2, sVar0, round(fParam1));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[0]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[0]), bParam2);
}

float func_12()
{
	if (func_66())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_67(1);
	}
	if (Global_1347477->f_119)
	{
		return func_67(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_70();
	fVar2 = func_71();
	fVar3 = func_72();
	fVar4 = func_73();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_74()));
	fVar7 = (func_67(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_75(2, round((to_float(iVar8) * fVar10)), 0);
	func_76(2, fVar9, fVar9 > 100f);
	return func_77(fVar7, -100f, 100f);
}

float func_13()
{
	if (func_66())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_67(2);
	}
	if (Global_1347477->f_119)
	{
		return func_67(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_70();
	fVar2 = func_71();
	fVar3 = func_72();
	fVar4 = func_73();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_74()));
	fVar7 = (func_67(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_75(3, round((to_float(iVar8) * fVar10)), 0);
	func_76(3, fVar9, fVar9 > 100f);
	return func_77(fVar7, -100f, 100f);
}

void func_14()
{
	func_79(2, 3, 0);
	func_79(6, 18, 0);
	func_79(34, 13, 1);
	func_79(34, 19, 1);
	func_79(34, 26, 1);
	func_79(34, 13, 0);
	func_79(34, 19, 0);
	func_79(34, 26, 0);
}

bool func_15(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

void func_16(var uParam0)
{
	iVar4 = 29649618;
	while (_event_manager_is_event_pending(iVar4))
	{
		if (_event_manager_peek_event(iVar4, &Var0))
		{
			switch (Var0)
			{
				case -2075827635:
					switch (Var0.f_2)
					{
						case 1979383369:
							break;
						case 2084001267:
							break;
					}
					_event_manager_pop_event(iVar4);
					break;
				case -1740156697:
					switch (Var0.f_2)
					{
						case -1330172908:
							break;
						case 1238474784:
							break;
						case 248393197:
							func_80(Var0.f_3);
							break;
						case 1537860827:
							func_81(uParam0, &Var0);
							break;
					}
					_event_manager_pop_event(iVar4);
					break;
				case -1203660660:
					switch (Var0.f_2)
					{
						case -385109718:
							func_82();
							break;
						case -609314343:
							func_83();
							break;
						case 1371972537:
							func_84();
							break;
						case -17440837:
							func_85();
							break;
						case -1123713079:
							func_86();
							break;
						case -1332231262:
							break;
						case 2096096105:
							break;
						case -1086656831:
							break;
						case 1777696068:
							break;
						case 891622121:
							break;
						case 792408241:
							break;
						case 1070621771:
							break;
						case 1320195282:
							uParam0->f_167 = 1;
							break;
					}
					_event_manager_pop_event(iVar4);
					break;
				default:
					_event_manager_pop_event(iVar4);
					break;
			}
		}
	}
}

int func_17(var uParam0, var uParam1)
{
	iVar4 = -4325789;
	while (_event_manager_is_event_pending(iVar4))
	{
		if (_event_manager_peek_event(iVar4, &vVar0))
		{
			switch (vVar0.x)
			{
				case -1203660660:
					if (vVar0.z == 270525852)
					{
						uParam0->f_155 = !uParam0->f_155;
						_databinding_write_data_bool(uParam0->f_156, uParam0->f_155);
					}
					else if (vVar0.z == 920946524)
					{
						if (func_15(*uParam1))
						{
							return *uParam1;
						}
					}
					break;
				case -1740156697:
					_databinding_write_data_bool(uParam0->f_157, _0x4dac398297981b87(vVar0.z));
					*uParam1 = func_87(vVar0.z);
					break;
				default:
					break;
			}
			_event_manager_pop_event(iVar4);
		}
	}
	return -1;
}

int func_18()
{
	iVar4 = -37892458;
	while (_event_manager_is_event_pending(iVar4))
	{
		if (_event_manager_peek_event(iVar4, &iVar0))
		{
			switch (iVar0)
			{
				case -1203660660:
					_event_manager_pop_event(iVar4);
					return 1;
				case -1740156697:
					_event_manager_pop_event(iVar4);
					break;
				default:
					_event_manager_pop_event(iVar4);
					break;
			}
		}
	}
	return 0;
}

void func_19(var uParam0)
{
}

void func_20()
{
	func_88(1);
	func_89();
}

void func_21(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (!does_script_with_name_hash_exist(iParam0))
	{
		return;
	}
	if (_get_number_of_references_of_script_with_name_hash(iParam0) != 0)
	{
		script_thread_iterator_reset();
		iVar0 = script_thread_iterator_get_next_thread_id();
		while (iVar0 != 0)
		{
			if (iParam0 == _get_hash_of_thread(iVar0))
			{
				if (is_thread_active(iVar0, false))
				{
					force_cleanup_for_thread_with_this_id(iVar0, iParam1);
				}
			}
			iVar0 = script_thread_iterator_get_next_thread_id();
		}
	}
}

void func_22()
{
	if (func_2())
	{
		clear_bit(Global_1357505, 8);
		_0xcdcd7b2d49aee73a(1);
		_0xec3d8c228fe553d7(0);
		Global_1357503 = 1;
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "camera_photomode", 32);
		Var10.f_14 = 1024;
		Var10.f_15 = 0;
		func_90(Var10, 0);
	}
}

int func_23()
{
	return Global_1572887->f_12;
}

bool func_24(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_25()
{
	return Global_1894899->f_2;
}

int func_26(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 7;
		case 79:
			return 0;
		case 43:
			return 1;
		case 98:
			return 2;
		case 58:
			return 3;
		case 71:
			return 4;
		case 4:
			return 5;
		case 76:
			return 8;
		case 9:
			return 6;
		case 5:
			return 9;
		case 38:
			return 10;
		case 105:
			return 11;
		case 92:
			return 12;
		case 78:
			return 13;
		case 26:
			return 14;
		case 37:
			return 15;
		case 115:
			return 16;
		default:
			break;
	}
	return -1;
}

bool func_27(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

bool func_28()
{
	return (Global_1935689->f_1 || &Global_1935689 == 1);
}

bool func_29()
{
	return Global_1935689->f_1;
}

float func_30(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

void func_31()
{
	Global_0.f_6 = get_game_timer();
	Global_0.f_3 = { Global_36 };
	func_91(&Global_0);
}

void func_32()
{
	if (func_23() != -1)
	{
		return;
	}
	func_92();
	func_93();
	func_94();
	func_95();
	func_96();
	func_97();
	func_98();
}

bool func_33(int iParam0, bool bParam1, bool bParam2)
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
		if (func_99())
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
		iVar0 = func_100(&(Global_1898164->f_1[0]));
		if (func_101(iVar0) && func_102((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_15(&(Global_1898164->f_1[0])))
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

int func_34(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_103(bParam1, bParam2, bParam3);
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

bool func_35()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_36()
{
	return Global_1425247->f_53;
}

int func_37()
{
	if (Global_1572887->f_12 != -1)
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < 50)
	{
		if (&Global_1357549->f_1252[iVar1] != 0)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_38(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

int func_39(int iParam0)
{
	if (!func_15(iParam0))
	{
		return 0;
	}
	return func_105(func_104(iParam0));
}

bool func_40(int iParam0)
{
	return (Global_1392040 && iParam0) != 0;
}

bool func_41(int iParam0)
{
	return (Global_1392040->f_1 && iParam0) != 0;
}

void func_42()
{
	if (func_23() != -1)
	{
		return;
	}
	if (!func_35())
	{
		return;
	}
	func_106(&(Global_40.f_40));
}

void func_43()
{
	iVar0 = 0;
	while (iVar0 < Global_40.f_11029)
	{
		if (_0xc29996a337bdd099((*Global_1425371)[iVar0]->f_1))
		{
			Global_40.f_11029[iVar0]->f_1 = { _0x1e8a921112891651((*Global_1425371)[iVar0]->f_1) };
			Global_40.f_11029[iVar0]->f_4 = _0x67995318f5faa496((*Global_1425371)[iVar0]->f_1);
		}
		iVar0++;
	}
}

int func_44()
{
	return &Global_1899515;
}

bool func_45()
{
	return !func_107(Global_1310720->f_1);
}

void func_46(vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 };
}

int func_47()
{
	return Global_40.f_4283.f_1;
}

int func_48(vector3 vParam0, int iParam3)
{
	iVar0 = func_25();
	if (func_108(iVar0))
	{
		if (_0xf256a75210c5c0eb((*Global_1888801)[iVar0]->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_109(vParam0, iParam3);
}

int func_49()
{
	return Global_40.f_4283.f_4;
}

void func_50(vector3 vParam0, var uParam3, var uParam4)
{
	fVar0 = 1E+07f;
	fVar1 = 1E+07f;
	if (func_110())
	{
		fVar0 = func_111(vParam0, Global_40.f_6);
	}
	if (func_40(33554432))
	{
		if (!func_112(Global_40.f_2, 0f, 0f, 0f, 1056964608, 1))
		{
			fVar1 = func_111(vParam0, Global_40.f_2);
		}
	}
	if (fVar1 > 150f && fVar0 > 150f)
	{
		*uParam3 = { Global_36 };
		*uParam4 = 6;
		return;
	}
	if (fVar0 < fVar1)
	{
		*uParam3 = { Global_40.f_6 };
		*uParam4 = 1;
	}
	else
	{
		*uParam3 = { Global_40.f_2 };
		*uParam4 = 3;
	}
}

float func_51(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

void func_52(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_53()
{
	if (!func_24(&Global_1935630, 8192))
	{
		return;
	}
	if (func_113(32768))
	{
		return;
	}
	func_114(Global_1935630, 8192);
	fVar0 = 0f;
	fVar0 = (fVar0 + (0.9259259f * to_float(func_115(909007663, 1325140787))));
	fVar0 = (fVar0 + (0.2525252f * to_float(func_115(909007663, 2101241783))));
	fVar0 = (fVar0 + (0.2923976f * to_float(func_115(909007663, -1296936294))));
	fVar0 = (fVar0 + (0.462963f * to_float(func_115(909007663, -798388728))));
	fVar0 = (fVar0 + (0.9259259f * to_float(func_115(909007663, -1787586531))));
	fVar0 = (fVar0 + (0.308642f * to_float(func_115(909007663, -1002834519))));
	fVar0 = (fVar0 + (5.555555f * to_float(func_115(909007663, -50600144))));
	fVar0 = (fVar0 + (0.6944444f * to_float(func_115(909007663, -348503123))));
	fVar0 = (fVar0 + (0.3703704f * to_float(func_115(909007663, -528798161))));
	fVar0 = (fVar0 + (0.5f * func_116(10f, to_float(func_115(909007663, 551192206)))));
	fVar0 = (fVar0 + (0.6f * func_116(5f, to_float(func_115(909007663, -406093146)))));
	fVar0 = (fVar0 + (0.2f * func_116(25f, to_float(func_117(-1029789297)))));
	fVar0 = (fVar0 + (2f * func_116(1f, to_float(func_117(-843295694)))));
	fVar0 = (fVar0 + (0.3333333f * func_116(6f, to_float(func_117(64058978)))));
	fVar0 = (fVar0 + (3f * func_116(1f, to_float(func_117(795577402)))));
	iVar1 = func_118();
	fVar0 = (fVar0 + (0.1111111f * func_116(9f, to_float(iVar1))));
	fVar2 = (to_float(_0x5461c821d00fe15a(-2076669067, 1665658745)) / to_float(_0x62cab7db62ead434(-2076669067, 1665658745)));
	fVar2 = func_119(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -263938772)) / to_float(_0x62cab7db62ead434(-2076669067, -263938772))));
	fVar2 = func_119(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 228647253)) / to_float(_0x62cab7db62ead434(-2076669067, 228647253))));
	fVar2 = func_119(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1695604435)) / to_float(_0x62cab7db62ead434(-2076669067, 1695604435))));
	fVar2 = func_119(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -379038926)) / to_float(_0x62cab7db62ead434(-2076669067, -379038926))));
	fVar2 = func_119(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1597499323)) / to_float(_0x62cab7db62ead434(-2076669067, 1597499323))));
	fVar2 = func_119(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -278663717)) / to_float(_0x62cab7db62ead434(-2076669067, -278663717))));
	fVar2 = func_119(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 586249988)) / to_float(_0x62cab7db62ead434(-2076669067, 586249988))));
	fVar2 = func_119(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -419800938)) / to_float(_0x62cab7db62ead434(-2076669067, -419800938))));
	fVar2 = func_119(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -1362069171)) / to_float(_0x62cab7db62ead434(-2076669067, -1362069171))));
	fVar2 = func_119(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -740350755)) / to_float(_0x62cab7db62ead434(-2076669067, -740350755))));
	fVar2 = func_119(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1511070393)) / to_float(_0x62cab7db62ead434(-2076669067, 1511070393))));
	fVar0 = (fVar0 + func_116(1f, fVar2));
	fVar0 = (fVar0 + (0.05f * func_116(to_float(20), to_float(func_120()))));
	if (func_121(40))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_121(42))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_121(48))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_121(50))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_121(52))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	fVar2 = (to_float(_0x5461c821d00fe15a(1765845133, 499813453)) / to_float(_0x62cab7db62ead434(1765845133, 499813453)));
	fVar2 = func_119(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 666607663)) / to_float(_0x62cab7db62ead434(1765845133, 666607663))));
	fVar2 = func_119(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, -220219788)) / to_float(_0x62cab7db62ead434(1765845133, -220219788))));
	fVar2 = func_119(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 218622660)) / to_float(_0x62cab7db62ead434(1765845133, 218622660))));
	fVar2 = func_119(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 390004462)) / to_float(_0x62cab7db62ead434(1765845133, 390004462))));
	fVar2 = func_119(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 6410548)) / to_float(_0x62cab7db62ead434(1765845133, 6410548))));
	fVar0 = (fVar0 + (1f * func_116(1f, fVar2)));
	fVar0 = (fVar0 + (0.2f * func_116(5f, to_float(func_117(1933084904)))));
	fVar0 = (fVar0 + (0.2f * func_116(5f, to_float(func_115(-1756227506, -734935893)))));
	fVar0 = (fVar0 + (to_float(func_122(_0x729d52f61a5a9e22(1979337996), 50)) / to_float(50)));
	fVar0 = (fVar0 + (to_float(func_122(_0x729d52f61a5a9e22(-2125891426), 10)) / to_float(10)));
	fVar0 = (fVar0 + (to_float(func_122(_0x729d52f61a5a9e22(1630085303), 10)) / to_float(10)));
	fVar0 = (fVar0 + _0x725d52f21a5e9e22(-1658238931));
	fVar0 = (fVar0 + (to_float(func_122(_0x729d52f61a5a9e22(1807539419), 20)) / to_float(20)));
	fVar0 = (fVar0 + (to_float(func_122(_0x729d52f61a5a9e22(717108105), 10)) / to_float(10)));
	fVar0 = (fVar0 + (to_float(func_122(_0x729d52f61a5a9e22(-2143405780), 48)) / to_float(48)));
	func_123(&iVar3, &iVar4);
	fVar0 = (fVar0 + (2f * func_116((to_float(iVar3) / to_float(iVar4)), 1f)));
	fVar0 = (fVar0 + (2f * func_116(1f, to_float(func_124(-2116919750)))));
	fVar5 = to_float(func_125());
	fVar0 = (fVar0 + ((3f * fVar5) / to_float(9)));
	fVar0 = (fVar0 + ((1f / 4f) * func_116(1f, to_float(func_115(1511238709, -747096482)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_116(1f, to_float(func_115(1511238709, 549911940)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_116(1f, to_float(func_115(1511238709, -760820978)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_116(1f, to_float(func_115(1511238709, -1672018311)))));
	fVar0 = (fVar0 + (0.2f * func_116(5f, to_float(func_117(-1342635612)))));
	fVar0 = (fVar0 + (0.5f * func_116(1f, to_float(func_117(-2061916883)))));
	fVar0 = (fVar0 + (0.5f * func_116(1f, to_float(func_117(281346304)))));
	fVar0 = (fVar0 + (0.5f * func_116(1f, to_float(func_117(-299021541)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_116(1f, to_float(func_115(-1276738576, 307971639)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_116(1f, to_float(func_115(-1276738576, -1555359431)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_116(1f, to_float(func_115(-1276738576, 644069854)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_116(1f, to_float(func_115(-1276738576, -97115714)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_116(1f, to_float(func_115(-1276738576, -2143405780)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_116(1f, to_float(func_115(-1276738576, 1455184052)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_116(1f, to_float(func_115(978382515, -2072933068)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_116(1f, to_float(func_115(978382515, 574993838)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_116(1f, to_float(func_115(978382515, -605765767)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_116(1f, to_float(func_115(978382515, 1015970717)))));
	Var6 = { func_62(1215094015) };
	fVar8 = func_63(Var6);
	_0xe141f6b40b1e3683(&Var6, fVar0);
	if (fVar0 > fVar8)
	{
	}
	if (func_15(&Global_1898437))
	{
		iVar60 = 0;
		iVar61 = 0;
		while (iVar61 < &Global_1898329)
		{
			if (!func_15(Global_1898330[iVar61]))
			{
			}
			else
			{
				iVar62 = func_126(Global_1898330[iVar61]);
				if (iVar62 == 3 || iVar62 == 4)
				{
				}
				else if (iVar62 != 1 && iVar62 != 2)
				{
					func_127(Global_1898330[iVar61]);
				}
				else
				{
					func_128(iVar61, 0);
					if (func_39(Global_1898330[iVar61]) == 1)
					{
						iVar9[iVar60] = func_129(Global_1898330[iVar61]);
						iVar60++;
						if (iVar60 >= 50)
						{
						}
						else
						{
							iVar61++;
						}
						if (iVar60 < 50)
						{
							iVar63 = 0;
							while (iVar63 < Global_40.f_450)
							{
								if (&Global_40.f_450[iVar63] > -1 && &Global_40.f_450[iVar63] < 200)
								{
									iVar9[iVar60] = func_129((*Global_1347702)[&Global_40.f_450[iVar63]]->f_15);
									iVar60++;
									if (iVar60 >= 50)
									{
									}
									else
									{
										iVar63++;
									}
									if (fVar0 > fVar8)
									{
										_0x51ec204a6e5b5a1a(func_129(&Global_1898437), &iVar9);
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

bool func_54()
{
	if (func_23() != -1)
	{
		return false;
	}
	if (!func_35())
	{
		return false;
	}
	if (!func_130((*Global_1835011)[1]->f_1, 1))
	{
		return true;
	}
	if ((func_130((*Global_1835011)[2]->f_1, 1) && func_130((*Global_1347702)[120]->f_15, 1)) && !func_130((*Global_1835011)[4]->f_1, 1))
	{
		return true;
	}
	if (func_130((*Global_1835011)[37]->f_1, 1) && !func_130((*Global_1835011)[39]->f_1, 1))
	{
		return true;
	}
	if (func_130((*Global_1835011)[57]->f_1, 1) && !func_130((*Global_1835011)[60]->f_1, 1))
	{
		return true;
	}
	if (func_130((*Global_1835011)[26]->f_1, 1) && !func_130((*Global_1347702)[67]->f_15, 1))
	{
		return true;
	}
	if ((func_130((*Global_1835011)[62]->f_1, 1) && func_130((*Global_1835011)[63]->f_1, 1)) && !func_130((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if (func_130((*Global_1835011)[75]->f_1, 1) && !func_130((*Global_1347702)[1]->f_15, 1))
	{
		return true;
	}
	if (func_130((*Global_1835011)[76]->f_1, 1) && !func_130((*Global_1835011)[77]->f_1, 1))
	{
		return true;
	}
	if ((func_130((*Global_1835011)[40]->f_1, 1) && func_130((*Global_1835011)[41]->f_1, 1)) && !func_130((*Global_1835011)[44]->f_1, 1))
	{
		return true;
	}
	if ((func_130((*Global_1835011)[62]->f_1, 1) && func_130((*Global_1835011)[63]->f_1, 1)) && !func_130((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if ((func_130((*Global_1835011)[65]->f_1, 1) && func_130((*Global_1835011)[66]->f_1, 1)) && !func_130((*Global_1835011)[67]->f_1, 1))
	{
		return true;
	}
	return false;
}

bool func_55(bool bParam0)
{
	if (bParam0)
	{
		return Global_1914319->f_17370;
	}
	return (Global_1914319->f_17370 || Global_1914319->f_18996.f_1);
}

bool func_56()
{
	return is_bit_set(Global_1357549->f_1893, 0);
}

bool func_57()
{
	if (_get_number_of_references_of_script_with_name_hash(-92416669) > 0)
	{
		return true;
	}
	return false;
}

bool func_58()
{
	return &Global_1935436 == 2;
}

bool func_59()
{
	if (is_entity_dead(Global_35))
	{
		return false;
	}
	if (!_is_ped_carrying(Global_35))
	{
		return false;
	}
	iVar0 = create_itemset(true);
	find_all_attached_carriable_entities(Global_35, iVar0);
	iVar3 = get_itemset_size(iVar0);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		iVar1 = _get_entity_from_item(get_indexed_item_in_itemset(iVar2, iVar0));
		if (!does_entity_exist(iVar1))
		{
		}
		else if (_0xcfda2518f322d836(iVar1))
		{
			destroy_itemset(iVar0);
			return true;
		}
		iVar2++;
	}
	destroy_itemset(iVar0);
	return false;
}

bool func_60(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_130((*Global_1835011)[iParam0]->f_1, 1);
	}
	return (_unlock_is_unlocked((*Global_1835011)[iParam0]->f_2) && !_unlock_is_visible((*Global_1835011)[iParam0]->f_2));
}

struct<2> func_61(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

struct<2> func_62(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

float func_63(var uParam0, var uParam1)
{
	stat_id_get_float(&uParam0, &uVar0);
	return uVar0;
}

float func_64(float fParam0, int iParam1, bool bParam2)
{
	bVar0 = fParam0 >= 0f;
	iVar1 = floor(pow(10f, to_float(iParam1)));
	fVar2 = (fParam0 * IntToFloat(iVar1));
	if (bParam2)
	{
		fVar2 = to_float(ceil(fVar2));
	}
	else
	{
		fVar2 = to_float(floor(fVar2));
	}
	fVar3 = (fVar2 / IntToFloat(iVar1));
	if (fVar3 < 0f && bVar0)
	{
		fVar3 = (fVar3 * -1f);
	}
	return fVar3;
}

void func_65(var uParam0, int iParam1)
{
	_int_to_string(iParam1, "%u", &cVar0);
	uVar4 = _databinding_add_data_container(uParam0->f_158, &cVar0);
	if (func_131(iParam1))
	{
		_databinding_add_data_string(uVar4, "label", func_132(iParam1));
		_databinding_insert_ui_item_to_list_from_context_string_alias(uParam0->f_159, iParam1, "itemEntryGroup", uVar4);
	}
	else
	{
		StringCopy(&cVar0, func_133(iParam1, &iVar5), 32);
		switch (iVar5)
		{
			case 0:
			case 2:
				if (func_134(iParam1, iVar5))
				{
					_databinding_add_data_string(uVar4, "label", func_132(iParam1));
					_databinding_add_data_string(uVar4, "value", &cVar0);
					_databinding_add_data_bool(uVar4, "isActive", true);
				}
				else
				{
					_databinding_add_data_string(uVar4, "label", func_135(iParam1));
					_databinding_add_data_string(uVar4, "value", "");
					_databinding_add_data_bool(uVar4, "isActive", false);
				}
				break;
			case 1:
				_databinding_add_data_string(uVar4, "label", func_132(iParam1));
				_databinding_add_data_bool(uVar4, "isActive", false);
				_databinding_add_data_string(uVar4, "value", "");
				_databinding_add_data_hash(uVar4, "textureName", -1218088854);
				_databinding_add_data_hash(uVar4, "textureTxd", 1442026401);
				_databinding_add_data_bool(uVar4, "textureVisible", true);
				break;
		}
		_databinding_add_data_hash(uVar4, "focus_event_hash", 1537860827);
		_databinding_insert_ui_item_to_list_from_context_string_alias(uParam0->f_159, iParam1, "itemEntry", uVar4);
	}
}

bool func_66()
{
	if (Global_1572887->f_12 != -1)
	{
		return false;
	}
	return Global_1347477->f_203;
}

float func_67(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

bool func_68()
{
	return func_136(12) <= -99f;
}

bool func_69()
{
	return func_136(12) >= 99f;
}

float func_70()
{
	fVar0 = func_136(13);
	iVar1 = func_137(fVar0);
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

float func_71()
{
	if (is_ped_on_mount(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_72()
{
	if (func_138())
	{
		if (_get_special_edition_core_stats_bonus_enabled())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_73()
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

float func_74()
{
	return Global_1955565->f_3;
}

void func_75(int iParam0, char* sParam1, bool bParam2)
{
	sVar0 = func_78(iParam0, 1, 0, 0);
	sVar0 = _create_var_string(2, sVar0, sParam1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[1]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[1]), bParam2);
}

void func_76(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_78(iParam0, 2, 0, 0);
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

float func_77(float fParam0, float fParam1, float fParam2)
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

char* func_78(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_139(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_139(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

void func_79(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = func_140(iParam0);
	iVar1 = func_140(iParam1);
	if (func_141(func_61(-1256705067, iVar1)) < 0)
	{
		return;
	}
	if (func_141(func_61(-1256705067, iVar0)) > 0)
	{
		if (func_141(func_61(-333926856, iVar0)) >= func_141(func_61(-1256705067, iVar0)))
		{
			iVar2 = (func_141(func_61(-1256705067, iVar1)) - func_141(func_61(-372368982, iVar1)));
			if (func_141(func_61(-333926856, iVar1)) < iVar2)
			{
				iVar3 = ((func_141(func_61(-333926856, iVar0)) - func_141(func_61(-1256705067, iVar0))) - func_141(func_61(-372368982, iVar0)));
				if (iVar3 > 0)
				{
					iVar4 = func_122(iVar3, iVar2);
					iVar4 = func_122((iVar2 - func_141(func_61(-333926856, iVar1))), iVar4);
					func_142(func_61(-333926856, iVar1), iVar4);
					func_143(func_61(-333926856, iVar0), iVar4);
				}
			}
		}
		else if ((func_141(func_61(-333926856, iVar0)) > 0 && func_141(func_61(-1256705067, iVar1)) > 0) && func_141(func_61(-333926856, iVar1)) <= 0)
		{
			func_142(func_61(-333926856, iVar1), 1);
			func_143(func_61(-333926856, iVar0), 1);
		}
	}
	else
	{
		iVar5 = func_141(func_61(-333926856, iVar0));
		if (iVar5 > 0)
		{
			iVar6 = (func_141(func_61(-1256705067, iVar1)) - func_141(func_61(-372368982, iVar1)));
			if (func_141(func_61(-333926856, iVar1)) < iVar6)
			{
				if (!bParam2 || func_141(func_61(-333926856, iVar1)) < 1)
				{
					iVar7 = func_122(iVar5, iVar6);
					if (bParam2)
					{
						iVar7 = 1;
					}
					else
					{
						iVar7 = func_122((iVar6 - func_141(func_61(-333926856, iVar1))), iVar7);
					}
					func_142(func_61(-333926856, iVar1), iVar7);
					func_143(func_61(-333926856, iVar0), iVar7);
				}
			}
		}
	}
}

void func_80(var uParam0)
{
	iVar0 = _databinding_read_data_int_from_parent(uParam0, "rpg_pause_item_index");
	switch (Global_1955569->f_5.f_747)
	{
		case 0:
			func_144(iVar0);
			break;
		case 1:
			func_145(iVar0);
			break;
		case 2:
			func_146(iVar0);
			break;
		case 3:
			func_147(iVar0);
			break;
		case 4:
			func_148(iVar0);
			break;
	}
}

void func_81(var uParam0, var uParam1)
{
	iVar0 = uParam1->f_1;
	sVar1 = _databinding_read_data_string_from_parent(uParam1->f_3, "label");
	_databinding_write_data_string(uParam0->f_161, sVar1);
	_databinding_write_data_bool(uParam0->f_163, true);
	if (func_149(iVar0))
	{
		_databinding_write_data_bool(uParam0->f_163, false);
		if (_databinding_is_data_id_valid(uParam0->f_160))
		{
			_databinding_remove_data_entry(uParam0->f_160);
		}
		_databinding_write_data_string(uParam0->f_164, func_150(iVar0));
		uParam0->f_160 = _databinding_add_ui_item_list(uParam0->f_158, "checklist");
		func_151(uParam0, iVar0);
	}
	else
	{
		StringCopy(&cVar2, func_132(iVar0), 128);
		StringConCat(&cVar2, "_DESC", 128);
		if (does_text_label_exist(&cVar2) && !_does_string_exist_in_string(sVar1, "Unknown"))
		{
			_databinding_write_data_string(uParam0->f_162, &cVar2);
			_databinding_write_data_string(uParam0->f_164, func_150(iVar0));
		}
		else
		{
			_databinding_write_data_string(uParam0->f_162, "");
			_databinding_write_data_string(uParam0->f_164, "UNDISCOVERED");
		}
	}
}

void func_82()
{
	func_152(1, 1);
	Global_1955569->f_5.f_747 = 0;
	func_154(_create_var_string(2, func_153(0)));
	func_155(0, "PMPLAYER_STATISTICS");
	func_156(1, "PMPLAYER_OVERVIEW", "", 1, 0, 0, 0, 0);
	func_156(2, "PMPLAYER_HONOR", "", 1, 0, 1, func_157(Global_40.f_11095.f_35), "pausemenu_player");
	func_155(3, "PMPLAYER_CONDITIONS");
	StringCopy(&cVar1, _databinding_read_data_string(&(Global_1955569->f_5.f_2[0]->f_20[0])), 24);
	bVar4 = _databinding_read_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[0]));
	sVar0 = _databinding_read_data_string(&(Global_1955569->f_5.f_2[0]->f_12[0]));
	if (bVar4)
	{
		func_156(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 1, bVar4, &cVar1, "pausemenu_player");
	}
	else
	{
		func_156(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 0, 0, 0, 0);
	}
	sVar0 = _databinding_read_data_string(&(Global_1955569->f_5.f_2[0]->f_12[1]));
	if (func_69())
	{
		func_156(5, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 1, 1, "rpg_hot", "pausemenu_player");
	}
	else if (func_68())
	{
		func_156(5, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 1, 1, "rpg_cold", "pausemenu_player");
	}
	else
	{
		func_156(5, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 0, 0, 0, 0);
	}
	if (Global_40.f_11095.f_43)
	{
		func_156(6, "PMPLAYER_CONDITION_TOXICITY", _create_var_string(2, "PMPLAYER_CONDITION_TOXICITY_POISONED"), 1, 1, 1, "rpg_sick", "pausemenu_player");
	}
	else
	{
		func_156(6, "PMPLAYER_CONDITION_TOXICITY", "", 0, 0, 0, 0, 0);
	}
	func_158(7);
	func_155(8, "PMPLAYER_PERKS");
	func_159(9, -121629511, "PROVISION_TALISMAN_RAVEN_CLAW");
	func_159(10, -224110471, "PROVISION_TRINKET_BEAVER_TOOTH");
	func_159(11, -935153695, "PROVISION_TRINKET_FOX_CLAW");
	func_159(12, -269048282, "PROVISION_TRINKET_BUCK_ANTLER");
	func_159(13, 1816443627, "PROVISION_TRINKET_RAM_HORN");
	func_159(14, -127011478, "PROVISION_TRINKET_WOLF_HEART");
	func_159(15, 1620353486, "PROVISION_TRINKET_PRONGHORN_ANTLER");
	if (func_138())
	{
		func_159(16, -615217896, "PROVISION_TALISMAN_EAGLE_TALON");
	}
	if (func_2())
	{
		func_159(17, -1056342069, "PROVISION_TRINKET_CAT_EYE");
		func_159(18, -1196089647, "PROVISION_TRINKET_SHARK_TOOTH");
		func_159(19, 611073244, "PROVISION_TRINKET_CROW_BEAK");
	}
	func_159(20, -172243588, "PROVISION_DISCO_ARROWHEAD_02");
	func_159(21, 1950809992, "DOCUMENT_FIELD_MANUAL");
	func_159(22, 2131771850, "CLOTHING_LEGENDARY_EAST_OUTFIT");
	func_160(0);
	func_161(0);
	func_144(1);
}

void func_83()
{
	Global_1955569->f_5.f_747 = 1;
	func_152(1, 1);
	func_154(_create_var_string(2, func_153(1)));
	func_155(0, "PMPLAYER_STATISTICS");
	func_156(1, "PMPLAYER_OVERVIEW", "", 1, 0, 0, 0, 0);
	iVar1 = func_162(0);
	func_156(2, "PMPLAYER_PROGRESSION", _create_var_string(2, "PMPLAYER_VALUE_LEVEL", iVar1 + 1), 1, 0, 0, 0, 0);
	func_155(3, "PMPLAYER_CONDITIONS");
	StringCopy(&cVar2, _databinding_read_data_string(&(Global_1955569->f_5.f_2[0]->f_20[0])), 24);
	bVar5 = _databinding_read_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[0]));
	sVar0 = _databinding_read_data_string(&(Global_1955569->f_5.f_2[0]->f_12[0]));
	if (bVar5)
	{
		func_156(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 1, bVar5, &cVar2, "pausemenu_player");
	}
	else
	{
		func_156(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 0, 0, 0, 0);
	}
	sVar0 = _databinding_read_data_string(&(Global_1955569->f_5.f_2[0]->f_12[1]));
	if (func_69())
	{
		func_156(5, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 1, 1, "rpg_hot", "pausemenu_player");
	}
	else if (func_68())
	{
		func_156(5, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 1, 1, "rpg_cold", "pausemenu_player");
	}
	else
	{
		func_156(5, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 0, 0, 0, 0);
	}
	if (Global_40.f_11095.f_43)
	{
		func_156(6, "PMPLAYER_CONDITION_TOXICITY", _create_var_string(2, "PMPLAYER_CONDITION_TOXICITY_POISONED"), 1, 1, 1, "rpg_sick", "pausemenu_player");
	}
	else
	{
		func_156(6, "PMPLAYER_CONDITION_TOXICITY", "", 0, 0, 0, 0, 0);
	}
	func_158(7);
	func_155(8, "PMPLAYER_PERKS");
	func_159(9, 1289585739, "PROVISION_TRINKET_BISON_HORN");
	func_159(10, 1631240196, "PROVISION_TRINKET_MOOSE_ANTLER");
	func_159(11, -832719552, "PROVISION_TALISMAN_BEAR_CLAW");
	func_159(12, 1768869276, "PROVISION_TRINKET_OWL_FEATHER");
	if (func_138())
	{
		func_159(13, 655868243, "PROVISION_TRINKET_IGUANA_SCALE");
	}
	if (func_2())
	{
		func_159(14, -982895431, "PROVISION_TRINKET_TURTLE_SHELL");
	}
	func_159(15, 2131771850, "CLOTHING_LEGENDARY_EAST_OUTFIT");
	func_160(0);
	func_161(0);
	func_145(1);
	func_163("PMPLAYER_HEALTH_OVERVIEW_TOOLTIP");
}

void func_84()
{
	Global_1955569->f_5.f_747 = 2;
	func_152(1, 1);
	func_154(_create_var_string(2, func_153(2)));
	func_155(0, "PMPLAYER_STATISTICS");
	func_156(1, "PMPLAYER_OVERVIEW", "", 1, 0, 0, 0, 0);
	iVar1 = func_162(1);
	func_156(2, "PMPLAYER_PROGRESSION", _create_var_string(2, "PMPLAYER_VALUE_LEVEL", iVar1 + 1), 1, 0, 0, 0, 0);
	func_155(3, "PMPLAYER_CONDITIONS");
	StringCopy(&cVar2, _databinding_read_data_string(&(Global_1955569->f_5.f_2[0]->f_20[0])), 24);
	bVar5 = _databinding_read_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[0]));
	sVar0 = _databinding_read_data_string(&(Global_1955569->f_5.f_2[0]->f_12[0]));
	if (bVar5)
	{
		func_156(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 1, bVar5, &cVar2, "pausemenu_player");
	}
	else
	{
		func_156(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 0, 0, 0, 0);
	}
	func_158(5);
	func_155(6, "PMPLAYER_PERKS");
	func_159(7, 1299744282, "PROVISION_TRINKET_LION_PAW");
	func_159(8, 1441506783, "PROVISION_TRINKET_COUGAR_FANG");
	func_159(9, -1941112926, "PROVISION_TALISMAN_BUFFALO_HORN");
	func_159(10, 1768869276, "PROVISION_TRINKET_OWL_FEATHER");
	if (func_2())
	{
		func_159(11, -569248339, "PROVISION_TRINKET_HAWK_TALON");
	}
	func_159(12, 2131771850, "CLOTHING_LEGENDARY_EAST_OUTFIT");
	func_160(0);
	func_161(0);
	func_146(1);
	func_163("PMPLAYER_STAMINA_OVERVIEW_TOOLTIP");
}

void func_85()
{
	Global_1955569->f_5.f_747 = 3;
	func_152(1, 1);
	func_154(_create_var_string(2, func_153(3)));
	func_155(0, "PMPLAYER_STATISTICS");
	func_156(1, "PMPLAYER_OVERVIEW", "", 1, 0, 0, 0, 0);
	iVar1 = func_162(2);
	func_156(2, "PMPLAYER_PROGRESSION", _create_var_string(2, "PMPLAYER_VALUE_LEVEL", iVar1 + 1), 1, 0, 0, 0, 0);
	func_155(3, "PMPLAYER_CONDITIONS");
	StringCopy(&cVar2, _databinding_read_data_string(&(Global_1955569->f_5.f_2[0]->f_20[0])), 24);
	bVar5 = _databinding_read_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[0]));
	sVar0 = _databinding_read_data_string(&(Global_1955569->f_5.f_2[0]->f_12[0]));
	if (bVar5)
	{
		func_156(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 1, bVar5, &cVar2, "pausemenu_player");
	}
	else
	{
		func_156(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 0, 0, 0, 0);
	}
	func_158(5);
	func_155(6, "PMPLAYER_PERKS");
	func_159(7, -62615415, "PROVISION_TALISMAN_ALLIGATOR_TOOTH");
	func_159(8, 780305678, "PROVISION_TRINKET_COYOTE_FANG");
	func_159(9, 517396587, "PROVISION_TRINKET_PANTHER_EYE");
	func_159(10, 1768869276, "PROVISION_TRINKET_OWL_FEATHER");
	func_159(11, 2131771850, "CLOTHING_LEGENDARY_EAST_OUTFIT");
	func_160(0);
	func_161(0);
	func_147(1);
	func_163("PMPLAYER_DEADEYE_OVERVIEW_TOOLTIP");
}

void func_86()
{
	func_152(1, 1);
	Global_1955569->f_5.f_747 = 4;
	iVar0 = -1;
	iVar1 = -1;
	if (func_164(0))
	{
		iVar0 = 0;
	}
	if (func_164(1))
	{
		iVar1 = 1;
	}
	if (func_166(Global_35, func_165(iVar1), 0) || iVar0 == -1)
	{
		iVar0 = iVar1;
	}
	if (iVar0 == -1)
	{
		return;
	}
	StringCopy(&cVar2, _create_var_string(2, "HORSE_BONDING_LEVEL", func_167(iVar0)), 64);
	iVar47 = func_168(iVar0, 0);
	if (iVar47 <= 50)
	{
		StringCopy(&cVar10, _create_var_string(2, "PMPLAYER_HORSE_CONDITION_CLEANLINESS_CLEAN"), 64);
	}
	else if (iVar47 < 100)
	{
		StringCopy(&cVar10, _create_var_string(2, "PMPLAYER_HORSE_CONDITION_CLEANLINESS_DIRTY"), 64);
		bVar45 = true;
	}
	else
	{
		StringCopy(&cVar10, _create_var_string(2, "PMPLAYER_HORSE_CONDITION_CLEANLINESS_FILTHY"), 64);
		bVar45 = true;
	}
	fVar42 = func_169(iVar0);
	if (fVar42 > 0f)
	{
		StringCopy(&cVar18, _create_var_string(2, "PMPLAYER_HORSE_CONDITION_MOOD_AGITATED"), 64);
		bVar46 = true;
	}
	else
	{
		StringCopy(&cVar18, _create_var_string(2, "PMPLAYER_HORSE_CONDITION_MOOD_CALM"), 64);
	}
	if (func_170(-415648720, &uVar43))
	{
		if (func_171(uVar43, &iVar48, 14460646, 0))
		{
			StringCopy(&cVar26, _get_label_text_by_hash(iVar48), 64);
		}
	}
	if (func_170(986998820, &iVar44))
	{
		StringCopy(&cVar34, func_172(iVar44), 64);
	}
	Var50 = { func_173(iVar0) };
	sVar58 = _create_var_string(2, "AT_HORSE");
	if (!is_string_null_or_empty(&Var50))
	{
		sVar58 = func_174(&Var50);
	}
	func_154(sVar58);
	func_155(0, "PMPLAYER_STATS");
	func_156(1, "PMPLAYER_OVERVIEW", "", 1, 0, 0, 0, 0);
	func_156(2, "PMPLAYER_HORSE_PHYSIQUE_TITLE", "", 1, 0, 0, 0, 0);
	func_156(3, "PMPLAYER_HORSE_BONDING_TITLE", &cVar2, 1, 0, 0, 0, 0);
	func_156(4, "PMPLAYER_HORSE_HEALTH_TITLE", "", 1, 0, 0, 0, 0);
	func_156(5, "PMPLAYER_HORSE_STAMINA_TITLE", "", 1, 0, 0, 0, 0);
	func_155(6, "PMPLAYER_CONDITIONS");
	func_156(7, "PMPLAYER_HORSE_CONDITION_CLEANLINESS", &cVar10, 1, bVar45, bVar45, "rpg_horse_dirty", "pausemenu_player");
	func_156(8, "PMPLAYER_HORSE_CONDITION_MOOD", &cVar18, 1, bVar46, bVar46, "rpg_horse_agitation", "pausemenu_player");
	func_155(9, "PMPLAYER_HORSE_TACK");
	func_156(10, "PMPLAYER_HORSE_TACK_SADDLE_TITLE", &cVar26, 1, 0, 0, 0, 0);
	func_156(11, "PMPLAYER_HORSE_TACK_STIRRUPS_TITLE", &cVar34, 1, 0, 0, 0, 0);
	func_148(1);
}

int func_87(int iParam0)
{
	iVar0 = -1;
	iVar1 = func_175(iParam0);
	if (func_176(iVar1))
	{
		iVar0 = (*Global_1835011)[iVar1]->f_1;
	}
	else
	{
		iVar2 = func_177(iParam0);
		if (func_101(iVar2))
		{
			iVar0 = (*Global_1347702)[iVar2]->f_15;
		}
		else if (iParam0 == 2116153146)
		{
			iVar0 = func_178(0, 10, 11, 2116153146);
		}
	}
	return iVar0;
}

void func_88(bool bParam0)
{
	if (Global_1898077->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_23() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077->f_2 == 4 && Global_1898077->f_12 != Global_1898077->f_13) && !bParam0)
	{
		Global_1898077->f_1 = Global_1898077->f_2;
		Global_1898077->f_12 = Global_1898077->f_13;
		func_179(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_180();
		Global_1898077->f_9 = func_181(Global_1894899->f_2);
		func_182(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

void func_89()
{
	network_set_rich_presence(0, &uVar0, 1, 0);
}

void func_90(struct<16> Param0, int iParam16)
{
	if (is_string_null_or_empty(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1934603->f_161 >= 10)
	{
		return;
	}
	if (!func_183(iParam16, 2))
	{
		if (_get_number_of_references_of_script_with_name_hash(get_hash_key(&(Param0.f_10))) > 0 || func_184(&(Param0.f_10)))
		{
			return;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (is_string_null_or_empty(&((*Global_1934603)[iVar0]->f_10)))
		{
			*(*Global_1934603)[iVar0] = { Param0 };
			Global_1934603->f_161++;
			func_185(iParam16);
			return;
		}
		iVar0++;
	}
}

void func_91(var uParam0)
{
	uParam0->f_2 = 0;
}

void func_92()
{
	bVar0 = is_dlc_present(33819255);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(-121456797))
		{
			_0xe824ce7d13fcb300(2116153146, 0);
			func_186(0);
			_unlock_set_unlocked(-121456797, false);
			func_187();
		}
		return;
	}
	if (!func_130((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	func_188();
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
	func_186(1);
}

void func_93()
{
	if (!func_130((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(304788622))
	{
		return;
	}
	func_189(1351927599, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	_unlock_set_unlocked(304788622, true);
	if (_unlock_is_unlocked(-1968398307))
	{
		return;
	}
	_unlock_set_unlocked(-1968398307, true);
}

void func_94()
{
	bVar0 = is_dlc_present(-751383868);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(1244328330))
		{
			func_190(0);
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
	if (!func_130((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(1244328330, true);
	func_190(1);
}

void func_95()
{
	bVar0 = is_dlc_present(-1499823613);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(398807247))
		{
			func_191(15000, 0, 0, 0, 1);
			func_190(0);
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
	if (!func_130((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(398807247, true);
	func_192(15000, 0, 1065353216, 1, 0, 0, 1, 752097756);
	func_190(1);
}

void func_96()
{
	bVar0 = is_dlc_present(-679138445);
	if (bVar0)
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if ((!func_193(1191437462, 1, 0) && !func_194((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_189(1191437462, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_195(1))
			{
				func_196(1);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if ((!func_193(1119149048, 1, 0) && !func_194((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_189(1119149048, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_195(2))
			{
				func_196(2);
			}
		}
		if (_0xf83d3dda4d3c8169(2056119786) > 0 && !func_195(4))
		{
			func_196(4);
		}
		if (func_195(0))
		{
			func_197(0);
		}
	}
	else
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if (func_193(1191437462, 1, 0))
			{
				func_198(1191437462, 1, 1, -142743235, 0);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if (func_193(1119149048, 1, 0))
			{
				func_198(1119149048, 1, 1, -142743235, 0);
			}
		}
		if (func_195(1))
		{
			func_197(1);
		}
		if (func_195(2))
		{
			func_197(2);
		}
		if (func_195(4))
		{
			func_197(4);
		}
		if (!func_195(0))
		{
			func_196(0);
		}
	}
}

void func_97()
{
	bVar0 = _unlock_is_unlocked(240039223);
	if (!bVar0)
	{
		return;
	}
	if (!func_130((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(-236259196))
	{
		return;
	}
	Var1 = { func_199() };
	if (!_0xb881ca836cc4b6d4(&Var1))
	{
		func_200(127400949);
		if (func_201(127400949, 0, 0, 0, 0, 0, 752097756, 0))
		{
			Var1 = { func_199() };
		}
	}
	if (_0xb881ca836cc4b6d4(&Var1))
	{
		func_202(-2055673461, Var1, 1423542233);
		func_202(-202131179, Var1, -1264898804);
		func_202(2013836545, Var1, 1592019450);
		func_202(1497476650, Var1, 1117400455);
		func_202(1063571467, Var1, 1150213537);
		func_202(2107224237, Var1, 1598825281);
		func_202(1747981656, Var1, -712527121);
		func_202(-1371140647, Var1, 454332195);
		func_202(-19142973, Var1, 256105670);
		func_202(-2074737817, Var1, -1328061889);
		func_202(-1114256243, Var1, -782241404);
		func_202(-1653277288, Var1, 1669853467);
		func_202(1869398132, Var1, -1559225678);
		func_202(459868358, Var1, -266425508);
		if (!_0x3ab6c7b0bb0df4b1(Global_35, -1) && !func_203())
		{
			get_current_ped_weapon(Global_35, &iVar15, false, 2, false);
			get_current_ped_weapon(Global_35, &iVar16, false, 0, false);
			if (func_204(iVar16))
			{
				if (iVar16 != 127400949)
				{
					if (_is_weapon_one_handed(iVar16))
					{
						if (func_205(24))
						{
							set_current_ped_weapon(Global_35, iVar16, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 0, false, false);
					}
					else if (_is_weapon_two_handed(iVar16))
					{
						if ((func_205(24) && func_204(iVar15)) && iVar15 != 127400949)
						{
							set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
					}
				}
			}
			else if (!func_204(iVar15))
			{
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
			else if (iVar15 != 127400949)
			{
				if (func_205(24))
				{
					set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
				}
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
		}
		_unlock_set_unlocked(-236259196, true);
	}
}

void func_98()
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

bool func_99()
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

int func_100(int iParam0)
{
	if (!func_15(iParam0))
	{
		return -1;
	}
	return func_206(func_104(iParam0));
}

bool func_101(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_102(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_103(bool bParam0, bool bParam1, bool bParam2)
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

int func_104(int iParam0)
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

int func_105(int iParam0)
{
	return iParam0 & 31;
}

void func_106(var uParam0)
{
	_copy_memory(uParam0, &(Global_1879534->f_7301), 243);
}

bool func_107(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_108(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_109(vector3 vParam0, bool bParam3)
{
	iVar0 = func_207(vParam0);
	iVar1 = -1;
	if (Global_1894882[iVar0] > 0)
	{
		iVar2 = (Global_1894882[iVar0] - 1);
		bVar3 = false;
		while (iVar2 >= 0 && !bVar3)
		{
			iVar4 = (*Global_1894065)[iVar0][iVar2];
			if (_does_volume_exist((*Global_1888801)[iVar4]->f_3))
			{
				if (_0xf256a75210c5c0eb((*Global_1888801)[iVar4]->f_3, vParam0))
				{
					switch ((*Global_1888801)[iVar4]->f_20)
					{
						case 5:
							if (!bParam3)
							{
								iVar1 = iVar4;
								bVar3 = true;
							}
							break;
						default:
							iVar1 = iVar4;
							bVar3 = true;
							break;
					}
				}
			}
			iVar2 = (iVar2 - 1);
		}
	}
	if (iVar1 != -1)
	{
	}
	return iVar1;
}

bool func_110()
{
	if (func_60(43) && !func_60(44))
	{
		return false;
	}
	if (func_60(67) && func_208() != 8)
	{
		return false;
	}
	return true;
}

float func_111(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

bool func_112(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

bool func_113(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

void func_114(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_115(int iParam0, int iParam1)
{
	Var1 = { func_61(iParam0, iParam1) };
	stat_id_get_int(&Var1, &uVar0);
	return uVar0;
}

float func_116(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_117(int iParam0)
{
	Var1 = { func_62(iParam0) };
	stat_id_get_int(&Var1, &uVar0);
	return uVar0;
}

int func_118()
{
	if (func_209(Global_40.f_8863.f_154, 1))
	{
		iVar0++;
	}
	if (func_209(Global_40.f_8863.f_154, 2))
	{
		iVar0++;
	}
	if (func_209(Global_40.f_8863.f_154, 4))
	{
		iVar0++;
	}
	if (func_209(Global_40.f_8863.f_154, 8))
	{
		iVar0++;
	}
	if (func_209(Global_40.f_8863.f_154, 16))
	{
		iVar0++;
	}
	if (func_209(Global_40.f_8863.f_154, 32))
	{
		iVar0++;
	}
	if (func_209(Global_40.f_8863.f_154, 64))
	{
		iVar0++;
	}
	if (func_209(Global_40.f_8863.f_154, 128))
	{
		iVar0++;
	}
	if (func_209(Global_40.f_8863.f_154, 256))
	{
		iVar0++;
	}
	return iVar0;
}

float func_119(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

int func_120()
{
	iVar0 = 0;
	while (iVar0 <= (20 - 1))
	{
		iVar2 = func_210(iVar0);
		if (func_209(func_211(), iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_121(int iParam0)
{
	if (func_23() != -1)
	{
		return false;
	}
	if (!func_101(iParam0))
	{
		return false;
	}
	return func_130((*Global_1347702)[iParam0]->f_15, 1);
}

int func_122(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_123(int iParam0, int iParam1)
{
	is_entity_dead(Global_35);
	*iParam0 = get_attribute_rank(Global_35, 0);
	*iParam0 = (*iParam0 + get_attribute_rank(Global_35, 1));
	*iParam0 = (*iParam0 + get_attribute_rank(Global_35, 2));
	*iParam1 = get_max_attribute_rank(Global_35, 0);
	*iParam1 = (*iParam1 + get_max_attribute_rank(Global_35, 1));
	*iParam1 = (*iParam1 + get_max_attribute_rank(Global_35, 2));
	*iParam1 += 6;
	iVar0 = func_212(-1845241476, 0, 0);
	iVar1 = func_212(1654063339, 0, 0);
	iVar2 = func_212(1623931083, 0, 0);
	*iParam0 = (*iParam0 + ((iVar0 + iVar1) + iVar2));
}

int func_124(int iParam0)
{
	Var1 = { func_213(iParam0) };
	stat_id_get_int(&Var1, &uVar0);
	return uVar0;
}

int func_125()
{
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar2 = func_214(iVar0);
		if (chal_get_num_ranks_completed(iVar2) >= chal_get_max_ranks(iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_126(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_215(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

void func_127(int iParam0)
{
	if (&Global_1898329 <= 0)
	{
		return;
	}
	if (!func_15(iParam0))
	{
		return;
	}
	if (func_216(iParam0))
	{
		func_217(iParam0, 0, 2);
	}
	iVar0 = func_218(iParam0);
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

void func_128(int iParam0, bool bParam1)
{
	if ((*Global_1898346)[iParam0]->f_2 == 0 || bParam1)
	{
		(*Global_1898346)[iParam0]->f_2 = func_104(Global_1898330[iParam0]);
		func_219((*Global_1898346)[iParam0]->f_2, &((*Global_1898346)[iParam0]->f_4), &((*Global_1898346)[iParam0]->f_5), &((*Global_1898346)[iParam0]->f_3));
	}
}

int func_129(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_5;
	}
	return Global_1058888->f_498[iParam0]->f_1;
}

bool func_130(int iParam0, bool bParam1)
{
	switch (func_220(iParam0))
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

bool func_131(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 7:
		case 18:
		case 26:
		case 30:
			return true;
	}
	return false;
}

char* func_132(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PM_PROG_EVENTS";
		case 1:
			return "PM_PROG_EVENT_STORY";
		case 2:
			return "PM_PROG_EVENT_STRANGER";
		case 3:
			return "PM_PROG_EVENT_BOUNTY";
		case 4:
			return "PM_PROG_EVENT_RANDOM";
		case 5:
			return "PM_PROG_EVENT_AMBUSH";
		case 6:
			return "PM_PROG_EVENT_HIDEOUT";
		case 7:
			return "PM_PROG_COLLECTABLES";
		case 8:
			return "PM_PROG_COLLECT_DISCOVERABLES";
		case 9:
			return "PM_PROG_COLLECT_GRAVES";
		case 10:
			return "PM_PROG_COLLECT_CARDS";
		case 11:
			return "PM_PROG_COLLECT_BONES";
		case 12:
			return "PM_PROG_COLLECT_FISH";
		case 13:
			return "PM_PROG_COLLECT_EXOTICS";
		case 14:
			return "PM_PROG_COLLECT_ROCKS";
		case 15:
			return "PM_PROG_COLLECT_TAXIDERMY";
		case 16:
			return "PM_PROG_COLLECT_TREASURE";
		case 17:
			return "PM_PROG_COLLECT_DREAMCATCHER";
		case 31:
			return "PM_PROG_LOC_SHACKS";
		case 32:
			return "PM_PROG_LOC_LEG_ANIMALS";
		case 18:
			return "PM_PROG_COMPENDIUM";
		case 19:
			return "PM_PROG_COMP_ANIMALS";
		case 20:
			return "PM_PROG_COMP_EQUIP";
		case 21:
			return "PM_PROG_COMP_FISH";
		case 22:
			return "PM_PROG_COMP_GANGS";
		case 23:
			return "PM_PROG_COMP_HORSES";
		case 24:
			return "PM_PROG_COMP_PLANTS";
		case 25:
			return "PM_PROG_COMP_WEAPONS";
		case 26:
			return "PM_PROG_CHARACTER";
		case 27:
			return "PM_PROG_CHAR_RPG";
		case 28:
			return "PM_PROG_CHAR_BOND";
		case 29:
			return "PM_PROG_CHAR_CHALLENGES";
		case 30:
			return "PM_PROG_MISCELLANEOUS";
		case 33:
			return "PM_PROG_MISC_TABLE";
		case 34:
			return "PM_PROG_MISC_SPD";
		case 35:
			return "PM_PROG_MISC_BATH";
		case 36:
			return "PM_PROG_MISC_SHOW";
		case 37:
			return "PM_PROG_MISC_THEATRE";
		case 38:
			return "PM_PROG_MISC_CRAFT";
		case 39:
			return "PM_PROG_MISC_ROBBERY";
		default:
			break;
	}
	return "";
}

char* func_133(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			iVar0 = func_115(909007663, 532323983);
			iVar1 = 107;
			if (iVar0 >= iVar1)
			{
				*iParam1 = 1;
			}
			else
			{
				*iParam1 = 0;
			}
			return _create_var_string(2, "PM_PROG_STORY_VAR_STRING", iVar0);
		case 2:
			iVar0 = func_122(func_115(909007663, 551192206), 10);
			iVar1 = 10;
			break;
		case 3:
			iVar0 = func_122(func_115(909007663, -406093146), 5);
			iVar1 = 5;
			break;
		case 4:
			iVar0 = func_122(func_117(-1029789297), 25);
			iVar1 = 25;
			break;
		case 5:
			iVar0 = func_122(func_117(-843295694), 1);
			iVar1 = 1;
			break;
		case 6:
			iVar0 = func_122(func_117(64058978), 6);
			iVar1 = 6;
			break;
		case 8:
			iVar0 = func_122(func_117(795577402), 1);
			iVar1 = 1;
			break;
		case 9:
			iVar0 = func_118();
			iVar1 = 9;
			break;
		case 10:
			if (((((((((((_0x5461c821d00fe15a(-2076669067, 1665658745) >= _0x62cab7db62ead434(-2076669067, 1665658745) || _0x5461c821d00fe15a(-2076669067, -263938772) >= _0x62cab7db62ead434(-2076669067, -263938772)) || _0x5461c821d00fe15a(-2076669067, 228647253) >= _0x62cab7db62ead434(-2076669067, 228647253)) || _0x5461c821d00fe15a(-2076669067, 1695604435) >= _0x62cab7db62ead434(-2076669067, 1695604435)) || _0x5461c821d00fe15a(-2076669067, -379038926) >= _0x62cab7db62ead434(-2076669067, -379038926)) || _0x5461c821d00fe15a(-2076669067, 1597499323) >= _0x62cab7db62ead434(-2076669067, 1597499323)) || _0x5461c821d00fe15a(-2076669067, -278663717) >= _0x62cab7db62ead434(-2076669067, -278663717)) || _0x5461c821d00fe15a(-2076669067, 586249988) >= _0x62cab7db62ead434(-2076669067, 586249988)) || _0x5461c821d00fe15a(-2076669067, -419800938) >= _0x62cab7db62ead434(-2076669067, -419800938)) || _0x5461c821d00fe15a(-2076669067, -1362069171) >= _0x62cab7db62ead434(-2076669067, -1362069171)) || _0x5461c821d00fe15a(-2076669067, -740350755) >= _0x62cab7db62ead434(-2076669067, -740350755)) || _0x5461c821d00fe15a(-2076669067, 1511070393) >= _0x62cab7db62ead434(-2076669067, 1511070393))
			{
				*iParam1 = 1;
				return _create_var_string(2, "PM_PROG_VAR_STRING", 1, 1);
			}
			else
			{
				if (_0x5461c821d00fe15a(-2076669067, 0) > 0)
				{
					*iParam1 = 0;
				}
				else
				{
					*iParam1 = 2;
				}
				return "";
			}
			break;
		case 11:
			if (func_121(39))
			{
				if (func_121(40))
				{
					*iParam1 = 1;
					return _create_var_string(2, "PM_PROG_VAR_STRING", 1, 1);
				}
				else
				{
					*iParam1 = 0;
					return "";
				}
			}
			else
			{
				*iParam1 = 2;
				return "";
			}
			break;
		case 12:
			if (func_121(41))
			{
				if (func_121(42))
				{
					*iParam1 = 1;
					return _create_var_string(2, "PM_PROG_VAR_STRING", 1, 1);
				}
				else
				{
					*iParam1 = 0;
					return "";
				}
			}
			else
			{
				*iParam1 = 2;
				return "";
			}
			break;
		case 13:
			if (func_121(43))
			{
				if (func_121(48))
				{
					*iParam1 = 1;
					return _create_var_string(2, "PM_PROG_VAR_STRING", 1, 1);
				}
				else
				{
					*iParam1 = 0;
					return "";
				}
			}
			else
			{
				*iParam1 = 2;
				return "";
			}
			break;
		case 14:
			if (func_121(49))
			{
				if (func_121(50))
				{
					*iParam1 = 1;
					return _create_var_string(2, "PM_PROG_VAR_STRING", 1, 1);
				}
				else
				{
					*iParam1 = 0;
					return "";
				}
			}
			else
			{
				*iParam1 = 2;
				return "";
			}
			break;
		case 15:
			if (func_121(51))
			{
				if (func_121(52))
				{
					*iParam1 = 1;
					return _create_var_string(2, "PM_PROG_VAR_STRING", 1, 1);
				}
				else
				{
					*iParam1 = 0;
					return "";
				}
			}
			else
			{
				*iParam1 = 2;
				return "";
			}
			break;
		case 16:
			if (func_221() > 0)
			{
				if (((((func_222(499813453) || func_222(666607663)) || func_222(-220219788)) || func_222(218622660)) || func_222(390004462)) || func_222(6410548))
				{
					*iParam1 = 1;
					return _create_var_string(2, "PM_PROG_VAR_STRING", 1, 1);
				}
				else
				{
					*iParam1 = 0;
					return "";
				}
			}
			else
			{
				*iParam1 = 2;
				return "";
			}
			break;
		case 17:
			iVar0 = func_120();
			iVar1 = 20;
			break;
		case 31:
			iVar0 = func_122(func_117(1933084904), 5);
			iVar1 = 5;
			break;
		case 32:
			iVar0 = func_122(func_115(-1756227506, -734935893), 5);
			iVar1 = 5;
			break;
		case 19:
			iVar0 = func_122(_0x729d52f61a5a9e22(1979337996), 50);
			iVar1 = 50;
			break;
		case 20:
			iVar0 = func_122(_0x729d52f61a5a9e22(-2125891426), 10);
			iVar1 = 10;
			break;
		case 21:
			iVar0 = func_122(_0x729d52f61a5a9e22(1630085303), 10);
			iVar1 = 10;
			break;
		case 22:
			iVar0 = _0x729d52f61a5a9e22(-1658238931);
			iVar1 = _0x729d52461aea9e22(-1658238931);
			break;
		case 23:
			iVar0 = func_122(_0x729d52f61a5a9e22(717108105), 10);
			iVar1 = 10;
			break;
		case 24:
			iVar0 = func_122(_0x729d52f61a5a9e22(1807539419), 20);
			iVar1 = 20;
			break;
		case 25:
			iVar0 = func_122(_0x729d52f61a5a9e22(-2143405780), 48);
			iVar1 = 48;
			break;
		case 27:
			func_123(&iVar0, &iVar1);
			if (iVar0 == iVar1)
			{
				*iParam1 = 1;
			}
			else
			{
				*iParam1 = 0;
			}
			return "";
		case 28:
			iVar0 = func_122(1, func_124(-2116919750));
			iVar1 = 1;
			break;
		case 29:
			iVar0 = func_125();
			iVar1 = 9;
			break;
		case 33:
			iVar0 = func_122(1, func_115(1511238709, -747096482));
			iVar0 = (iVar0 + func_122(1, func_115(1511238709, 549911940)));
			iVar0 = (iVar0 + func_122(1, func_115(1511238709, -760820978)));
			iVar0 = (iVar0 + func_122(1, func_115(1511238709, -1672018311)));
			iVar1 = 4;
			break;
		case 34:
			iVar0 = func_122(5, func_117(-1342635612));
			iVar1 = 5;
			break;
		case 35:
			iVar0 = func_122(1, func_117(-2061916883));
			iVar1 = 1;
			break;
		case 36:
			iVar0 = func_122(1, func_117(281346304));
			iVar1 = 1;
			break;
		case 37:
			iVar0 = func_122(1, func_117(-299021541));
			iVar1 = 1;
			break;
		case 38:
			iVar0 = func_122(1, func_115(-1276738576, 307971639));
			iVar0 = (iVar0 + func_122(1, func_115(-1276738576, -1555359431)));
			iVar0 = (iVar0 + func_122(1, func_115(-1276738576, 644069854)));
			iVar0 = (iVar0 + func_122(1, func_115(-1276738576, -97115714)));
			iVar0 = (iVar0 + func_122(1, func_115(-1276738576, -2143405780)));
			iVar0 = (iVar0 + func_122(1, func_115(-1276738576, 1455184052)));
			iVar1 = 6;
			break;
		case 39:
			iVar0 = func_122(1, func_115(978382515, -2072933068));
			iVar0 = (iVar0 + func_122(1, func_115(978382515, 574993838)));
			iVar0 = (iVar0 + func_122(1, func_115(978382515, -605765767)));
			iVar0 = (iVar0 + func_122(1, func_115(978382515, 1015970717)));
			iVar1 = 4;
			break;
	}
	if (iVar0 > 0)
	{
		if (iVar0 == iVar1)
		{
			*iParam1 = 1;
		}
		else
		{
			*iParam1 = 0;
		}
	}
	else
	{
		*iParam1 = 2;
	}
	if (iVar1 == 1 && iVar0 == 0)
	{
		return "";
	}
	return _create_var_string(2, "PM_PROG_VAR_STRING", iVar0, iVar1);
}

bool func_134(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 9:
			return func_60(76);
		case 3:
		case 5:
		case 11:
		case 12:
		case 13:
		case 14:
			return iParam1 == 0;
		case 15:
			return (func_212(1369162587, 0, 0) > 0 || func_223() >= 1);
	}
	return true;
}

char* func_135(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			return "PM_PROG_EVENT_UNKNOWN";
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
			return "PM_PROG_COLLECT_UNKNOWN";
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			return "PM_PROG_COMP_UNKNOWN";
		case 27:
		case 28:
		case 29:
			return "PM_PROG_CHAR_UNKNOWN";
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
			return "PM_PROG_MISC_UNKNOWN";
	}
	return "";
}

float func_136(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

int func_137(float fParam0)
{
	return round(((fParam0 / 100f) * to_float(10)));
}

bool func_138()
{
	return _unlock_is_unlocked(-121456797);
}

char* func_139(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_140(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -932875117;
		case 3:
			return 1660962977;
		case 4:
			return -131409450;
		case 5:
			return -1487527516;
		case 6:
			return 561629573;
		case 7:
			return 1829679323;
		case 8:
			return -618617794;
		case 11:
			return 653458791;
		case 12:
			return 437319607;
		case 13:
			return -1519488075;
		case 15:
			return 1014445254;
		case 16:
			return 224814421;
		case 18:
			return 1012187868;
		case 19:
			return -1040706491;
		case 20:
			return -1910627346;
		case 23:
			return -1812487593;
		case 26:
			return 1983971282;
		case 27:
			return 1561519041;
		case 28:
			return -980496853;
		case 29:
			return -1738887126;
		case 31:
			return 424771379;
		case 33:
			return 787316814;
		case 34:
			return 984616481;
		case 37:
			return 1078285403;
		case 38:
			return -262897007;
		case 39:
			return -1727702531;
		case 40:
			return 1783324404;
		case 41:
			return 1288848815;
		case 42:
			return 918090738;
		case 43:
			return 170272501;
		case 1:
			return 2056650000;
		case 9:
			return -1195354638;
		case 10:
			return 1077596967;
		case 14:
			return -2145199848;
		case 17:
			return 752824478;
		case 21:
			return -819513569;
		case 22:
			return 1906968775;
		case 24:
			return -135434663;
		case 25:
			return 920123680;
		case 30:
			return 150470908;
		case 32:
			return -1665125257;
		case 35:
			return 1587928307;
		case 36:
			return -1738925422;
	}
	return 0;
}

int func_141(var uParam0, var uParam1)
{
	stat_id_get_int(&uParam0, &uVar0);
	return uVar0;
}

void func_142(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

void func_143(var uParam0, int iParam1, int iParam2)
{
	_0xbd861ae8a5181ed7(&uParam0, iParam2);
}

void func_144(int iParam0)
{
	func_224(0);
	func_225(0);
	func_226(0);
	func_160(0);
	func_161(0);
	func_227(0);
	func_228(0, "", "");
	switch (iParam0)
	{
		case 1:
			func_230(func_229(0, 0), 0);
			func_232(func_231(0));
			func_233("PMPLAYER_OVERVIEW");
			func_152(0, 1);
			func_235(0, _create_var_string(2, "PMPLAYER_GENERAL_OVERVIEW_HAIR"), _create_var_string(2, func_234()), 0, 0, 0, 0, 0, 0, 0, 0);
			func_235(1, _create_var_string(2, "PMPLAYER_GENERAL_OVERVIEW_FACIAL_HAIR"), _create_var_string(2, func_236()), 0, 0, 0, 0, 0, 0, 0, 0);
			func_163("PMPLAYER_OVERVIEW_TOOLTIP");
			func_224(1);
			func_225(1);
			func_226(1);
			break;
		case 2:
			if (func_1())
			{
				func_230("PLAYER_JOHN_HONOR", 0);
			}
			else
			{
				func_230("PLAYER_ARTHUR_HONOR", 0);
			}
			func_232("PMPLAYER_GENERAL_HONOR_DESC");
			func_233("PMPLAYER_HONOR");
			func_152(0, 1);
			fVar0 = ((1f - func_237()) * 100f);
			if (fVar0 == 0f)
			{
				func_235(0, _create_var_string(2, "PMPLAYER_GENERAL_HONOR_STORE_PRICES"), _create_var_string(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 0), 0, 0, 0, 0, 0, 0, 0, 0);
			}
			else
			{
				func_235(0, _create_var_string(2, "PMPLAYER_GENERAL_HONOR_STORE_PRICES"), _create_var_string(2, "PMPLAYER_CORE_PC_MINUS_VALUE", round(fVar0)), 0, 0, 0, 0, 0, 0, 0, 0);
			}
			func_163("PMPLAYER_HONOR_TOOLTIP");
			break;
		case 4:
			func_230(func_238(), 0);
			func_232("PMPLAYER_CONDITION_WEIGHT_DESC");
			func_233("PMPLAYER_HORSE_PHYSIQUE_STAT_WEIGHT");
			func_152(0, 1);
			func_239(0);
			func_163("PMPLAYER_CONDITION_WEIGHT_TOOLTIP");
			break;
		case 5:
			func_230(func_240(), func_241());
			func_232("PMPLAYER_CONDITION_TEMPERATURE_DESC");
			func_233("PMPLAYER_CONDITION_TEMPERATURE");
			func_152(0, 1);
			func_242();
			func_163("PMPLAYER_CONDITION_TEMPERATURE_TOOLTIP");
			break;
		case 6:
			func_230(func_243(), func_244());
			func_232("PMPLAYER_CONDITION_TOXICITY_DESC");
			func_233("PMPLAYER_CONDITION_TOXICITY");
			func_152(0, 1);
			func_245();
			func_163("PMPLAYER_CONDITION_TOXICITY_TOOLTIP");
			break;
		case 7:
			func_230(func_246(), 0);
			func_232("PMPLAYER_CONDITION_WELLBEING_DESC");
			func_233("PMPLAYER_CONDITION_WELLBEING");
			func_152(0, 1);
			func_247(1, 1, 1);
			if (func_1())
			{
				func_163("PMPLAYER_CONDITION_WELLBEING_JOHN_TOOLTIP");
			}
			else
			{
				func_163("PMPLAYER_CONDITION_WELLBEING_TOOLTIP");
			}
			break;
		case 9:
			func_248(-121629511, "PROVISION_TALISMAN_RAVEN_CLAW", "PROVISION_TALISMAN_RAVEN_CLAW_DESC", "TALISMAN_RAVEN_CLAW", 0);
			func_152(0, 1);
			break;
		case 10:
			func_248(-224110471, "PROVISION_TRINKET_BEAVER_TOOTH", "PROVISION_TRINKET_BEAVER_TOOTH_DESC", "TRINKET_BEAVER_TOOTH", 0);
			func_152(0, 1);
			break;
		case 11:
			func_248(-935153695, "PROVISION_TRINKET_FOX_CLAW", "PROVISION_TRINKET_FOX_CLAW_DESC", "TRINKET_FOX_CLAW", 0);
			func_152(0, 1);
			break;
		case 12:
			func_248(-269048282, "PROVISION_TRINKET_BUCK_ANTLER", "PROVISION_TRINKET_BUCK_ANTLER_DESC", "TRINKET_BUCK_ANTLER", 0);
			func_152(0, 1);
			break;
		case 13:
			func_248(1816443627, "PROVISION_TRINKET_RAM_HORN", "PROVISION_TRINKET_RAM_HORN_DESC", "TRINKET_RAM_HORN", 0);
			func_152(0, 1);
			break;
		case 14:
			func_248(-127011478, "PROVISION_TRINKET_WOLF_HEART", "PROVISION_TRINKET_WOLF_HEART_DESC", "TRINKET_WOLF_HEART", 0);
			func_152(0, 1);
			break;
		case 15:
			func_248(1620353486, "PROVISION_TRINKET_PRONGHORN_ANTLER", "PROVISION_TRINKET_PRONGHORN_ANTLER_DESC", "TRINKET_PRONGHORN_ANTLER", 0);
			func_152(0, 1);
			break;
		case 16:
			func_248(-615217896, "PROVISION_TALISMAN_EAGLE_TALON", "PROVISION_TALISMAN_EAGLE_TALON_DESC", "TALISMAN_EAGLE_TALON", 0);
			func_152(0, 1);
			break;
		case 17:
			func_248(-1056342069, "PROVISION_TRINKET_CAT_EYE", "PROVISION_TRINKET_CAT_EYE_DESC", "PROVISION_TRINKET_CAT_EYE", "pausemenu_player_update");
			func_152(0, 1);
			break;
		case 18:
			func_248(-1196089647, "PROVISION_TRINKET_SHARK_TOOTH", "PROVISION_TRINKET_SHARK_TOOTH_DESC", "PROVISION_TRINKET_SHARK_TOOTH", "pausemenu_player_update");
			func_152(0, 1);
			break;
		case 19:
			func_248(611073244, "PROVISION_TRINKET_CROW_BEAK", "PROVISION_TRINKET_CROW_BEAK_DESC", "PROVISION_TRINKET_CROW_BEAK", "pausemenu_player_update");
			func_152(0, 1);
			break;
		case 20:
			func_248(-172243588, "PROVISION_DISCO_ARROWHEAD_02", "PROVISION_DISCO_ARROWHEAD_02_DESC", "PERK_ARROWHEAD", "pausemenu_player_update");
			func_152(0, 1);
			break;
		case 21:
			func_248(1950809992, "DOCUMENT_FIELD_MANUAL", "DOCUMENT_FIELD_MANUAL_DESC", "PERK_MANUAL", "pausemenu_player_update");
			func_152(0, 1);
			break;
		case 22:
			func_152(0, 1);
			func_249(-1);
			break;
	}
}

void func_145(int iParam0)
{
	func_224(0);
	func_225(0);
	func_226(0);
	func_160(0);
	func_161(0);
	func_227(0);
	func_228(0, "", "");
	switch (iParam0)
	{
		case 1:
			func_230(func_229(1, 0), 0);
			func_232(func_231(1));
			func_233("PMPLAYER_OVERVIEW");
			func_152(0, 1);
			sVar0 = _databinding_read_data_string(&(Global_1955569->f_5.f_2[1]->f_12[0]));
			func_235(0, _create_var_string(2, "PMPLAYER_CORE_PC"), sVar0, 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Health");
			sVar0 = _databinding_read_data_string(&(Global_1955569->f_5.f_2[1]->f_12[1]));
			func_235(1, _create_var_string(2, "PMPLAYER_CORE_TIME"), sVar0, 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Health");
			sVar0 = _databinding_read_data_string(&(Global_1955569->f_5.f_2[1]->f_12[2]));
			bVar1 = _databinding_read_data_bool(&(Global_1955569->f_5.f_2[1]->f_16[2]));
			bVar2 = _databinding_read_data_bool(&(Global_1955569->f_5.f_2[1]->f_32[2]));
			func_235(2, _create_var_string(2, "PMPLAYER_CORE_DRAIN_RATE"), sVar0, 1, 0, bVar1, 0, 0f, 0f, 0f, "RPG_Health");
			if (bVar1)
			{
				func_250(2, "RPG_ARROW_DOWN", 0);
			}
			else if (bVar2)
			{
				func_250(2, "RPG_ARROW_UP", 0);
			}
			func_224(1);
			func_163("");
			break;
		case 2:
			func_230(func_229(1, 0), 0);
			func_232("PMPLAYER_HEALTH_PROGRESSION_DESC");
			func_233("PMPLAYER_PROGRESSION");
			func_152(0, 1);
			func_251(0, "PMPLAYER_PROGRESSION_STAT_NEXT", "PMPLAYER_HEALTH_PROGRESSION_STAT_MAX", "toast_rpg_level_health");
			func_163("PMPLAYER_HEALTH_PROGRESSION_TOOLTIP");
			break;
		case 4:
			func_230(func_238(), 0);
			func_232("PMPLAYER_CONDITION_WEIGHT_DESC");
			func_233("PMPLAYER_HORSE_PHYSIQUE_STAT_WEIGHT");
			func_152(0, 1);
			func_239(1);
			func_163("PMPLAYER_CONDITION_WEIGHT_TOOLTIP");
			break;
		case 5:
			func_230(func_240(), func_241());
			func_232("PMPLAYER_CONDITION_TEMPERATURE_DESC");
			func_233("PMPLAYER_CONDITION_TEMPERATURE");
			func_152(0, 1);
			func_242();
			func_163("PMPLAYER_CONDITION_TEMPERATURE_TOOLTIP");
			break;
		case 6:
			func_230(func_243(), func_244());
			func_232("PMPLAYER_CONDITION_TOXICITY_DESC");
			func_233("PMPLAYER_CONDITION_TOXICITY");
			func_152(0, 1);
			func_245();
			func_163("PMPLAYER_CONDITION_TOXICITY_TOOLTIP");
			break;
		case 7:
			func_230(func_246(), 0);
			func_232("PMPLAYER_CONDITION_WELLBEING_DESC");
			func_233("PMPLAYER_CONDITION_WELLBEING");
			func_152(0, 1);
			func_247(1, 0, 0);
			if (func_1())
			{
				func_163("PMPLAYER_CONDITION_WELLBEING_JOHN_TOOLTIP");
			}
			else
			{
				func_163("PMPLAYER_CONDITION_WELLBEING_TOOLTIP");
			}
			break;
		case 9:
			func_248(1289585739, "PROVISION_TRINKET_BISON_HORN", "PROVISION_TRINKET_BISON_HORN_DESC", "TRINKET_BISON_HORN", 0);
			func_152(0, 1);
			break;
		case 10:
			func_248(1631240196, "PROVISION_TRINKET_MOOSE_ANTLER", "PROVISION_TRINKET_MOOSE_ANTLER_DESC", "TRINKET_MOOSE_ANTLER", 0);
			func_152(0, 1);
			break;
		case 11:
			func_248(-832719552, "PROVISION_TALISMAN_BEAR_CLAW", "PROVISION_TALISMAN_BEAR_CLAW_DESC", "TALISMAN_BEAR_CLAW", 0);
			func_152(0, 1);
			break;
		case 12:
			func_248(1768869276, "PROVISION_TRINKET_OWL_FEATHER", "PROVISION_TRINKET_OWL_FEATHER_DESC", "TRINKET_OWL_FEATHER", 0);
			func_152(0, 1);
			break;
		case 13:
			func_248(655868243, "PROVISION_TRINKET_IGUANA_SCALE", "PROVISION_TRINKET_IGUANA_SCALE_DESC", "TRINKET_IGUANA_SCALE", 0);
			func_152(0, 1);
			break;
		case 14:
			func_248(-982895431, "PROVISION_TRINKET_TURTLE_SHELL", "PROVISION_TRINKET_TURTLE_SHELL_DESC", "PROVISION_TRINKET_TURTLE_SHELL", "pausemenu_player_update");
			func_152(0, 1);
			break;
		case 15:
			func_152(0, 1);
			func_249(0);
			break;
	}
}

void func_146(int iParam0)
{
	func_224(0);
	func_225(0);
	func_226(0);
	func_160(0);
	func_161(0);
	func_227(0);
	func_228(0, "", "");
	switch (iParam0)
	{
		case 1:
			func_230(func_229(2, 0), 0);
			func_232(func_231(2));
			func_233("PMPLAYER_OVERVIEW");
			func_152(0, 1);
			sVar0 = _databinding_read_data_string(&(Global_1955569->f_5.f_2[2]->f_12[0]));
			func_235(0, _create_var_string(2, "PMPLAYER_CORE_PC"), sVar0, 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Stamina");
			sVar0 = _databinding_read_data_string(&(Global_1955569->f_5.f_2[2]->f_12[1]));
			func_235(1, _create_var_string(2, "PMPLAYER_CORE_TIME"), sVar0, 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Stamina");
			sVar0 = _databinding_read_data_string(&(Global_1955569->f_5.f_2[2]->f_12[2]));
			bVar1 = _databinding_read_data_bool(&(Global_1955569->f_5.f_2[2]->f_16[2]));
			bVar2 = _databinding_read_data_bool(&(Global_1955569->f_5.f_2[2]->f_32[2]));
			func_235(2, _create_var_string(2, "PMPLAYER_CORE_DRAIN_RATE"), sVar0, 1, 0, bVar1, 0, 0f, 0f, 0f, "RPG_Stamina");
			if (bVar1)
			{
				func_250(2, "RPG_ARROW_DOWN", 0);
			}
			else if (bVar2)
			{
				func_250(2, "RPG_ARROW_UP", 0);
			}
			func_225(1);
			func_163("");
			break;
		case 2:
			func_230(func_229(2, 0), 0);
			func_232("PMPLAYER_STAMINA_PROGRESSION_DESC");
			func_233("PMPLAYER_PROGRESSION");
			func_152(0, 1);
			func_251(1, "PMPLAYER_PROGRESSION_STAT_NEXT", "PMPLAYER_STAMINA_PROGRESSION_STAT_MAX", "toast_rpg_level_stamina");
			func_163("PMPLAYER_STAMINA_PROGRESSION_TOOLTIP");
			break;
		case 4:
			func_230(func_238(), 0);
			func_232("PMPLAYER_CONDITION_WEIGHT_DESC");
			func_233("PMPLAYER_HORSE_PHYSIQUE_STAT_WEIGHT");
			func_152(0, 1);
			func_239(2);
			func_163("PMPLAYER_CONDITION_WEIGHT_TOOLTIP");
			break;
		case 5:
			func_230(func_246(), 0);
			func_232("PMPLAYER_CONDITION_WELLBEING_DESC");
			func_233("PMPLAYER_CONDITION_WELLBEING");
			func_152(0, 1);
			func_247(0, 1, 0);
			if (func_1())
			{
				func_163("PMPLAYER_CONDITION_WELLBEING_JOHN_TOOLTIP");
			}
			else
			{
				func_163("PMPLAYER_CONDITION_WELLBEING_TOOLTIP");
			}
			break;
		case 7:
			func_248(1299744282, "PROVISION_TRINKET_LION_PAW", "PROVISION_TRINKET_LION_PAW_DESC", "TRINKET_LION_PAW", 0);
			func_152(0, 1);
			break;
		case 8:
			func_248(1441506783, "PROVISION_TRINKET_COUGAR_FANG", "PROVISION_TRINKET_COUGAR_FANG_DESC", "TRINKET_COUGAR_FANG", 0);
			func_152(0, 1);
			break;
		case 9:
			func_248(-1941112926, "PROVISION_TALISMAN_BUFFALO_HORN", "PROVISION_TALISMAN_BUFFALO_HORN_DESC", "TALISMAN_BUFFALO_HORN", 0);
			func_152(0, 1);
			break;
		case 10:
			func_248(1768869276, "PROVISION_TRINKET_OWL_FEATHER", "PROVISION_TRINKET_OWL_FEATHER_DESC", "TRINKET_OWL_FEATHER", 0);
			func_152(0, 1);
			break;
		case 11:
			func_248(-569248339, "PROVISION_TRINKET_HAWK_TALON", "PROVISION_TRINKET_HAWK_TALON_DESC", "PROVISION_TRINKET_HAWK_TALON", "pausemenu_player_update");
			func_152(0, 1);
			break;
		case 12:
			func_152(0, 1);
			func_249(1);
			break;
	}
}

void func_147(int iParam0)
{
	func_224(0);
	func_225(0);
	func_226(0);
	func_160(0);
	func_161(0);
	func_227(0);
	func_228(0, "", "");
	switch (iParam0)
	{
		case 1:
			func_230(func_229(3, 0), 0);
			func_232(func_231(3));
			func_233("PMPLAYER_OVERVIEW");
			func_152(0, 1);
			sVar0 = _databinding_read_data_string(&(Global_1955569->f_5.f_2[3]->f_12[0]));
			func_235(0, _create_var_string(2, "PMPLAYER_CORE_PC"), sVar0, 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Dead_Eye");
			sVar0 = _databinding_read_data_string(&(Global_1955569->f_5.f_2[3]->f_12[1]));
			func_235(1, _create_var_string(2, "PMPLAYER_CORE_TIME"), sVar0, 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Dead_Eye");
			sVar0 = _databinding_read_data_string(&(Global_1955569->f_5.f_2[3]->f_12[2]));
			bVar1 = _databinding_read_data_bool(&(Global_1955569->f_5.f_2[3]->f_16[2]));
			bVar2 = _databinding_read_data_bool(&(Global_1955569->f_5.f_2[3]->f_32[2]));
			func_235(2, _create_var_string(2, "PMPLAYER_CORE_DRAIN_RATE"), sVar0, 1, 0, bVar1, 0, 0f, 0f, 0f, "RPG_Dead_Eye");
			if (bVar1)
			{
				func_250(2, "RPG_ARROW_DOWN", 0);
			}
			else if (bVar2)
			{
				func_250(2, "RPG_ARROW_UP", 0);
			}
			func_226(1);
			func_163("");
			break;
		case 2:
			func_230(func_229(3, 0), 0);
			func_232("PMPLAYER_DEAD_EYE_PROGRESSION_DESC");
			func_233("PMPLAYER_PROGRESSION");
			func_152(0, 1);
			func_251(2, "PMPLAYER_PROGRESSION_STAT_NEXT", "PMPLAYER_DEAD_EYE_PROGRESSION_STAT_MAX", "toast_rpg_level_deadeye");
			func_163("PMPLAYER_DEADEYE_PROGRESSION_TOOLTIP");
			break;
		case 4:
			func_230(func_238(), 0);
			func_232("PMPLAYER_CONDITION_WEIGHT_DESC");
			func_233("PMPLAYER_HORSE_PHYSIQUE_STAT_WEIGHT");
			func_152(0, 1);
			func_239(3);
			func_163("PMPLAYER_CONDITION_WEIGHT_TOOLTIP");
			break;
		case 5:
			func_230(func_246(), 0);
			func_232("PMPLAYER_CONDITION_WELLBEING_DESC");
			func_233("PMPLAYER_CONDITION_WELLBEING");
			func_152(0, 1);
			func_247(0, 0, 1);
			if (func_1())
			{
				func_163("PMPLAYER_CONDITION_WELLBEING_JOHN_TOOLTIP");
			}
			else
			{
				func_163("PMPLAYER_CONDITION_WELLBEING_TOOLTIP");
			}
			break;
		case 7:
			func_248(-62615415, "PROVISION_TALISMAN_ALLIGATOR_TOOTH", "PROVISION_TALISMAN_ALLIGATOR_TOOTH_DESC", "TALISMAN_ALLIGATOR_TOOTH", 0);
			func_152(0, 1);
			break;
		case 8:
			func_248(780305678, "PROVISION_TRINKET_COYOTE_FANG", "PROVISION_TRINKET_COYOTE_FANG_DESC", "TRINKET_COYOTE_FANG", 0);
			func_152(0, 1);
			break;
		case 9:
			func_248(517396587, "PROVISION_TRINKET_PANTHER_EYE", "PROVISION_TRINKET_PANTHER_EYE_DESC", "TRINKET_PANTHER_EYE", 0);
			func_152(0, 1);
			break;
		case 10:
			func_248(1768869276, "PROVISION_TRINKET_OWL_FEATHER", "PROVISION_TRINKET_OWL_FEATHER_DESC", "TRINKET_OWL_FEATHER", 0);
			func_152(0, 1);
			break;
		case 11:
			func_152(0, 1);
			func_249(2);
			break;
	}
}

void func_148(int iParam0)
{
	iVar0 = -1;
	iVar1 = -1;
	if (func_164(0))
	{
		iVar0 = 0;
	}
	if (func_164(1))
	{
		iVar1 = 1;
	}
	if (func_166(Global_35, func_165(iVar1), 0) || iVar0 == -1)
	{
		iVar0 = iVar1;
	}
	if (iVar0 == -1)
	{
		return;
	}
	iVar2 = func_252(iVar0);
	iVar3 = func_165(iVar0);
	if (does_entity_exist(iVar3))
	{
		iVar4 = func_253(iVar3);
		iVar6 = func_254(iVar3);
	}
	else
	{
		iVar4 = func_255(iVar2);
		iVar6 = func_256(iVar2);
	}
	iVar5 = func_257(iVar0, 0);
	iVar7 = func_257(iVar0, 1);
	func_224(0);
	func_225(0);
	func_226(0);
	func_160(0);
	func_161(0);
	func_227(0);
	func_228(0, "", "");
	switch (iParam0)
	{
		case 1:
			func_230(func_229(4, 0), 0);
			func_232(func_231(4));
			func_233("PMPLAYER_OVERVIEW");
			func_152(0, 1);
			if (iVar0 == 0 && func_258() == iVar0)
			{
				func_259(&iVar8, &iVar9);
				iVar8 = floor((IntToFloat(iVar8) * 0.01f));
				iVar9 = floor((IntToFloat(iVar9) * 0.01f));
			}
			if (func_260())
			{
				iVar8++;
			}
			fVar10 = (IntToFloat(func_261(iVar2) + 1) * 10f);
			fVar11 = (fVar10 + (to_float(iVar8) * 10f));
			fVar12 = ((fVar10 + (3f * 10f)) * 0.01f);
			fVar13 = (IntToFloat(func_262(iVar2) + 1) * 10f);
			fVar14 = (fVar13 + (to_float(iVar9) * 10f));
			fVar15 = ((fVar13 + (2f * 10f)) * 0.01f);
			func_235(0, _create_var_string(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_SPEED"), "", 0, 0, 0, 1, fVar10, fVar11, fVar12, 0);
			func_235(1, _create_var_string(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_ACCELERATION"), "", 0, 0, 0, 1, fVar13, fVar14, fVar15, 0);
			func_235(2, _create_var_string(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_HANDLING"), _create_var_string(2, func_264(func_263(iVar2))), 0, 0, 0, 0, 0, 0, 0, 0);
			func_160(1);
			func_161(1);
			func_227(1);
			func_265(10, (IntToFloat(iVar4 + 1) / 10f), round(((IntToFloat(iVar5) / 100f) * 15f)));
			func_266(10, (IntToFloat(iVar6 + 1) / 10f), round(((IntToFloat(iVar7) / 100f) * 15f)));
			func_163("PMPLAYER_HORSE_OVERVIEW_TIP");
			break;
		case 2:
			func_230(func_229(4, 0), 0);
			func_232("PMPLAYER_HORSE_PHYSIQUE_DESC");
			func_233("PMPLAYER_HORSE_PHYSIQUE_TITLE");
			func_152(0, 1);
			iVar16 = func_267(iVar2);
			if (!is_entity_dead(iVar3))
			{
				iVar17 = get_attribute_rank(iVar3, 13);
			}
			else
			{
				iVar17 = get_default_attribute_rank(iVar2, 13);
			}
			if (iVar17 < 10)
			{
				StringCopy(&cVar18, "HORSE_WEIGHT_MALNOURISHED", 32);
			}
			else if (iVar17 < 30)
			{
				StringCopy(&cVar18, "HORSE_WEIGHT_THIN", 32);
			}
			else if (iVar17 < 70)
			{
				StringCopy(&cVar18, "HORSE_WEIGHT_FIT", 32);
			}
			else if (iVar17 < 90)
			{
				StringCopy(&cVar18, "HORSE_WEIGHT_OVERWEIGHT", 32);
			}
			else
			{
				StringCopy(&cVar18, "HORSE_WEIGHT_OBESE", 32);
			}
			func_235(0, _create_var_string(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_TYPE"), _create_var_string(2, func_269(func_268(iVar2), iVar16)), 0, 0, 0, 0, 0, 0, 0, 0);
			func_235(1, _create_var_string(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_BREED"), _create_var_string(2, func_270(iVar16)), 0, 0, 0, 0, 0, 0, 0, 0);
			func_235(2, _create_var_string(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_GENDER"), _create_var_string(2, func_272(func_271(iVar0))), 0, 0, 0, 0, 0, 0, 0, 0);
			func_235(3, _create_var_string(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_WEIGHT"), _create_var_string(2, &cVar18), 0, 0, 0, 0, 0, 0, 0, 0);
			func_235(4, _create_var_string(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_COAT"), _create_var_string(2, func_273(iVar16)), 0, 0, 0, 0, 0, 0, 0, 0);
			func_163("PMPLAYER_HORSE_PHYSIQUE_TIP");
			break;
		case 3:
			if (func_1())
			{
				func_230("JOHN_HORSE_BONDING", 0);
			}
			else
			{
				func_230("HORSE_BONDING", 0);
			}
			func_232("PMPLAYER_HORSE_BONDING_DESC");
			func_233("PMPLAYER_HORSE_BONDING_TITLE");
			func_152(0, 1);
			iVar22 = func_167(iVar0);
			iVar23 = floor(func_274(iVar0));
			iVar24 = get_default_attribute_points_needed_for_rank(iVar2, 7, iVar22 + 1);
			func_235(0, _create_var_string(2, "PMPLAYER_VALUE_LEVEL"), _create_var_string(2, "PMPLAYER_VALUE_X_OF_Y", iVar22, 4), 0, 0, 0, 0, 0, 0, 0, 0);
			if (iVar22 < 4)
			{
				func_235(1, _create_var_string(2, "PMPLAYER_PROGRESSION_STAT_NEXT"), _create_var_string(2, "PMPLAYER_VALUE_X_OF_Y", iVar23, iVar24), 0, 0, 0, 0, 0, 0, 0, 0);
			}
			func_163("PMPLAYER_HORSE_BONDING_TIP");
			func_227(1);
			break;
		case 4:
			func_230("HORSE_HEALTH", 0);
			func_232("PMPLAYER_HORSE_HEALTH_DESC");
			func_233("PMPLAYER_HORSE_HEALTH_TITLE");
			func_152(0, 1);
			func_235(0, _create_var_string(2, "PMPLAYER_VALUE_LEVEL"), _create_var_string(2, "PMPLAYER_VALUE_X_OF_Y", iVar4 + 1, 10), 0, 0, 0, 0, 0, 0, 0, 0);
			func_235(1, _create_var_string(2, "PMPLAYER_CORE_PC"), _create_var_string(2, "PMPLAYER_CORE_PC_VALUE", iVar5), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Health");
			func_275(2, iVar0, 0);
			func_163("PMPLAYER_HORSE_HEALTH_TIP");
			break;
		case 5:
			func_230("HORSE_STAMINA", 0);
			func_232("PMPLAYER_HORSE_STAMINA_DESC");
			func_233("PMPLAYER_HORSE_STAMINA_TITLE");
			func_152(0, 1);
			func_235(0, _create_var_string(2, "PMPLAYER_VALUE_LEVEL"), _create_var_string(2, "PMPLAYER_VALUE_X_OF_Y", iVar6 + 1, 10), 0, 0, 0, 0, 0, 0, 0, 0);
			func_235(1, _create_var_string(2, "PMPLAYER_CORE_PC"), _create_var_string(2, "PMPLAYER_CORE_PC_VALUE", iVar7), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
			func_275(2, iVar0, 1);
			func_163("PMPLAYER_HORSE_STAMINA_TIP");
			break;
		case 7:
			if (func_1())
			{
				func_230("JOHN_HORSE_CLEANLINESS", 0);
			}
			else
			{
				func_230("HORSE_CLEANLINESS", 0);
			}
			func_232("PMPLAYER_HORSE_CONDITION_CLEANLINESS_DESC");
			func_233("PMPLAYER_HORSE_CONDITION_CLEANLINESS");
			func_152(0, 1);
			if (func_168(iVar0, 0) > 50)
			{
				func_235(0, _create_var_string(2, "PMPLAYER_CORE_DRAIN_RATE"), _create_var_string(2, "PMPLAYER_CORE_PC_PLUS_VALUE", round(absf((0.25f * 100f)))), 1, 0, 1, 0, 0, 0, 0, "RPG_Horse_Health");
				func_250(0, "RPG_ARROW_DOWN", 0);
			}
			func_163("PMPLAYER_HORSE_CONDITION_CLEANLINESS_TIP");
			break;
		case 10:
			func_230(func_229(4, 0), 0);
			func_232("PMPLAYER_HORSE_TACK_SADDLE_DESC");
			func_233("PMPLAYER_HORSE_TACK_SADDLE_TITLE");
			func_152(0, 1);
			func_276();
			func_163("PMPLAYER_HORSE_TACK_SADDLE_TIP");
			break;
		case 8:
			if (func_1())
			{
				func_230("JOHN_HORSE_TEMPERAMENT", 0);
			}
			else
			{
				func_230("HORSE_TEMPERAMENT", 0);
			}
			func_232("PMPLAYER_HORSE_CONDITION_MOOD_DESC");
			func_233("PMPLAYER_HORSE_CONDITION_MOOD");
			func_152(0, 1);
			func_163("PMPLAYER_HORSE_CONDITION_MOOD_TIP");
			break;
		case 11:
			func_230("HORSE_TACK_STIRRUPS", 0);
			func_232("PMPLAYER_HORSE_TACK_STIRRUPS_DESC");
			func_233("PMPLAYER_HORSE_TACK_STIRRUPS_TITLE");
			func_152(0, 1);
			func_277();
			func_163("PMPLAYER_HORSE_TACK_STIRRUPS_TIP");
			break;
	}
}

bool func_149(int iParam0)
{
	return false;
	switch (iParam0)
	{
		case 6:
		case 29:
		case 33:
		case 38:
		case 39:
			return true;
	}
	return false;
}

char* func_150(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "STORY_MISSIONS";
		case 2:
			return "RANDOM_CHARACTER_MISSIONS";
		case 3:
			return "BOUNTY_HUNTER_MISSIONS";
		case 4:
			return "RANDOM_EVENTS";
		case 5:
			return "RIVAL_GANGS_AMBUSH";
		case 6:
			return "RIVAL_GANGS_HIDEOUTS";
		case 8:
			return "COLLECTABLES_DISCOVERABLES";
		case 9:
			return "COLLECTABLES_GRAVES";
		case 10:
			return "COLLECTABLES_CIG_CARDS";
		case 11:
			return "COLLECTABLES_DINO";
		case 12:
			return "COLLECTABLES_FISH";
		case 13:
			return "COLLECTABLES_EXOTICS";
		case 14:
			return "COLLECTABLES_ROCKS";
		case 15:
			return "COLLECTABLES_TAXIDERMY";
		case 16:
			return "COLLECTABLES_TREASURE";
		case 17:
			return "COLLECTABLES_DREAMCATCHERS";
		case 31:
			return "LOCATION_SHACKS";
		case 32:
			return "LOCATION_LEGENDARY_ANIMALS";
		case 19:
			return "COMPENDIUM_DISCOVER_ANIMALS";
		case 20:
			return "COMPENDIUM_DISCOVER_EQUIPMENT";
		case 21:
			return "COMPENDIUM_DISCOVER_FISH";
		case 22:
			return "COMPENDIUM_DISCOVER_GANGS";
		case 23:
			return "COMPENDIUM_DISCOVER_HORSES";
		case 24:
			return "COMPENDIUM_DISCOVER_PLANTS";
		case 25:
			return "COMPENDIUM_DISCOVER_WEAPONS";
		case 27:
			return "CHARACTER_MAX_RPG_TANKS";
		case 28:
			return "CHARACTER_HORSE_BOND";
		case 29:
			return "CHARACTER_CHALLENGES";
		case 33:
			return "MISC_TABLE_GAMES";
		case 34:
			return "MISC_SPECIAL_PEDS";
		case 35:
			return "MISC_BATH";
		case 36:
			return "MISC_SHOW";
		case 37:
			return "MISC_THEATRE";
		case 38:
			return "MISC_CRAFT_EACH_RECIPE";
		case 39:
			return "MISC_ROBBERIES";
		default:
			break;
	}
	return "STORY_MISSIONS";
}

void func_151(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 33:
			func_278(uParam0, 0, "MAP_CARD_MINIGAMES_BLACKJACK", 1);
			func_278(uParam0, 1, "MAP_CARD_MINIGAMES_DOMINOES_DRAW", 1);
			func_278(uParam0, 2, "MAP_CARD_MINIGAMES_FIVE_FINGER_FILLET_CLASSIC", 1);
			func_278(uParam0, 3, "MAP_CARD_MINIGAMES_POKER", 1);
			break;
	}
}

void func_152(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		_databinding_clear_binding_array(Global_1955569->f_5.f_147.f_22);
	}
	if (bParam1)
	{
		_databinding_clear_binding_array(Global_1955569->f_5.f_147.f_21);
	}
}

char* func_153(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PMPLAYER_GENERAL";
		case 1:
			return "PMPLAYER_HEALTH";
		case 2:
			return "PMPLAYER_STAMINA";
		case 3:
			return "PMPLAYER_DEADEYE";
		case 4:
			return "PMPLAYER_HORSE";
		default:
			break;
	}
	return "";
}

void func_154(char* sParam0)
{
	_databinding_write_data_string(Global_1955569->f_5.f_147, sParam0);
}

void func_155(int iParam0, char* sParam1)
{
	_databinding_write_data_string(Global_1955569->f_5.f_147.f_24[iParam0]->f_16, sParam1);
	_databinding_insert_ui_item_to_list_from_context_string_alias(Global_1955569->f_5.f_147.f_22, iParam0, "player_group_item", Global_1955569->f_5.f_147.f_24[iParam0]->f_15);
}

void func_156(int iParam0, char* sParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5, char* sParam6, char* sParam7)
{
	_databinding_write_data_string(Global_1955569->f_5.f_147.f_24[iParam0]->f_16, sParam1);
	_databinding_write_data_string(Global_1955569->f_5.f_147.f_24[iParam0]->f_17, sParam2);
	_databinding_write_data_bool(Global_1955569->f_5.f_147.f_24[iParam0]->f_18, bParam3);
	_databinding_write_data_bool(Global_1955569->f_5.f_147.f_24[iParam0]->f_19, bParam4);
	_databinding_write_data_bool(Global_1955569->f_5.f_147.f_24[iParam0]->f_22, bParam5);
	_databinding_write_data_string(Global_1955569->f_5.f_147.f_24[iParam0]->f_20, sParam6);
	_databinding_write_data_string(Global_1955569->f_5.f_147.f_24[iParam0]->f_21, sParam7);
	_databinding_insert_ui_item_to_list_from_context_string_alias(Global_1955569->f_5.f_147.f_22, iParam0, "player_list_item", Global_1955569->f_5.f_147.f_24[iParam0]->f_15);
}

char* func_157(int iParam0)
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

void func_158(int iParam0)
{
	if (func_1())
	{
		func_156(iParam0, "PMPLAYER_CONDITION_WELLBEING", "", 0, 0, 0, 0, 0);
		return;
	}
	if (Global_40.f_11095.f_67 >= 9)
	{
		func_156(iParam0, "PMPLAYER_CONDITION_WELLBEING", _create_var_string(2, "PMPLAYER_CONDITION_WELLBEING_SICK2"), 1, 1, 1, "rpg_sick", "pausemenu_player");
	}
	else if (Global_40.f_11095.f_67 >= 7)
	{
		func_156(iParam0, "PMPLAYER_CONDITION_WELLBEING", _create_var_string(2, "PMPLAYER_CONDITION_WELLBEING_SICK1"), 1, 1, 1, "rpg_sick", "pausemenu_player");
	}
	else
	{
		func_156(iParam0, "PMPLAYER_CONDITION_WELLBEING", "", 0, 0, 0, 0, 0);
	}
}

void func_159(int iParam0, int iParam1, char* sParam2)
{
	if (func_193(iParam1, 1, 0))
	{
		func_156(iParam0, sParam2, "", 1, 0, 0, 0, 0);
	}
	else
	{
		func_156(iParam0, "PMPLAYER_PERK_UNDISCOVERED_TALISMAN", "", 0, 0, 0, 0, 0);
	}
}

void func_160(bool bParam0)
{
	_databinding_write_data_bool(Global_1955569->f_5.f_147.f_9, bParam0);
}

void func_161(bool bParam0)
{
	_databinding_write_data_bool(Global_1955569->f_5.f_147.f_10, bParam0);
}

int func_162(int iParam0)
{
	return func_279(&(Global_40.f_11095.f_11[iParam0]));
}

void func_163(char* sParam0)
{
	_databinding_write_data_string(Global_1955569->f_5.f_147.f_5, sParam0);
}

bool func_164(int iParam0)
{
	iParam0 = func_280(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_281(iParam0) == 0)
	{
		return false;
	}
	return true;
}

int func_165(int iParam0)
{
	iParam0 = func_280(iParam0);
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

bool func_166(int iParam0, int iParam1, bool bParam2)
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

int func_167(int iParam0)
{
	iParam0 = func_280(iParam0);
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

int func_168(int iParam0, int iParam1)
{
	iParam0 = func_280(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return &(Global_40.f_1095.f_1[iParam0]->f_407[iParam1]);
}

float func_169(int iParam0)
{
	iParam0 = func_280(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	if (!func_282(iParam0))
	{
		return 0f;
	}
	iVar0 = func_165(iParam0);
	fVar1 = func_283(iVar0);
	return fVar1;
}

bool func_170(int iParam0, int iParam1)
{
	if (!func_284(856287005, iParam0))
	{
		return false;
	}
	Var0 = { func_285() };
	*iParam1 = func_286(Var0, iParam0, 0);
	if (!func_287(*iParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_171(int iParam0, int iParam1, int iParam2, int iParam3)
{
	Var1.f_2 = 5;
	Var1.f_18 = 8;
	if (_item_database_fillout_ui_data(iParam0, &Var1))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (iParam2 != 0 && Var1.f_18[iVar0]->f_1 != iParam2)
			{
				Jump @117; //curOff = 67
			}
			else if (iParam3 != 0 && &Var1.f_18[iVar0] != iParam3)
			{
			}
			else
			{
				*iParam1 = { *Var1.f_18[iVar0] };
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

char* func_172(int iParam0)
{
	if (!func_287(iParam0, 0))
	{
		return "";
	}
	return _get_label_text_by_hash(func_288(iParam0));
}

struct<8> func_173(int iParam0)
{
	StringCopy(&cVar0, "", 64);
	iParam0 = func_280(iParam0);
	if (iParam0 == -1)
	{
		return cVar0;
	}
	if (iParam0 >= 7)
	{
		return cVar0;
	}
	return *Global_40.f_1095.f_1[iParam0];
}

char[] func_174(char[4] cParam0)
{
	return cParam0;
}

int func_175(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < &Global_1835011)
	{
		if (get_hash_key(&((*Global_1835011)[iVar0]->f_8)) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_176(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

int func_177(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (get_hash_key(&((*Global_1347702)[iVar0]->f_3)) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_178(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_289())
	{
		iVar2 = func_289();
	}
	iVar5 = func_290(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_104(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_104(iVar6) == 0)
			{
				return func_291(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_104(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_104(iVar6) == 0)
			{
				return func_291(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_291(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

void func_179(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_180()
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

int func_181(int iParam0)
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

void func_182(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

bool func_183(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_184(char* sParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (are_strings_equal(&((*Global_1934603)[iVar0]->f_10), sParam0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_185(int iParam0)
{
	if (func_183(iParam0, 1))
	{
		func_292(1);
	}
}

void func_186(bool bParam0)
{
	if (bParam0)
	{
		func_189(2032023096, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_189(-615217896, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_189(655868243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_187();
		_unlock_set_unlocked(645322743, true);
	}
	else
	{
		func_293(2032023096);
		func_294(-615217896);
		func_198(655868243, 1, 1, -142743235, 1);
		func_295(146323340, func_285());
		Var0 = { func_296() };
		if (func_297(&Var0) == -1387633835)
		{
			func_298(&Var0);
			func_299(Var0);
		}
		iVar7 = -868094182;
		iVar8 = 1074477367;
		iVar9 = 1;
		func_300(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (func_301(iVar6) == 2010625508)
			{
				func_302(iVar6, iVar7);
				func_303(iVar6, iVar8);
				func_304(iVar6, iVar9);
				func_305(iVar6, 0);
				if (func_306(iVar6))
				{
					func_307(iVar6);
				}
				iVar10 = func_308(iVar8);
				func_309(iVar6, iVar10);
			}
			iVar6++;
		}
		_unlock_set_unlocked(645322743, false);
	}
}

int func_187()
{
	if (!func_310(-1898635967, func_285(), 1))
	{
		return 0;
	}
	if (func_138())
	{
		if (!func_310(146323340, func_285(), 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_188()
{
	func_311(34411519);
	func_311(834124286);
	func_311(-570967010);
}

int func_189(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_287(iParam0, 0))
	{
		return 0;
	}
	if (!func_312(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_313(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_314(iParam0, bParam2);
	iVar2 = 0;
	if (func_212(iParam0, 0, 0) == 0)
	{
		if (func_315(iParam0))
		{
			iVar5 = func_316(iParam0);
			iVar6 = func_317(iVar5);
			iVar7 = func_318(iVar6) + 1;
			func_319(iVar5);
			if (func_320(38))
			{
				func_321(483, 0);
			}
			else
			{
				func_321(482, 0);
			}
			if (iVar7 == func_322(iVar6))
			{
				func_189(func_323(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_35() && func_324(4))
				{
					if (func_35() && (func_325(38) || func_320(38)))
					{
						func_327(38, func_323(iVar6), 0, 0, func_326(), 0, -1, 0);
						func_328(2);
					}
					else
					{
						func_327(38, func_323(iVar6), 0, 0, func_326(), 0, -1, 0);
						func_328(1);
					}
				}
			}
			else if (func_35() && func_324(4))
			{
				if (func_35() && (func_325(38) || func_320(38)))
				{
					func_327(38, 0, 0, 0, func_326(), 0, -1, 0);
					func_328(2);
				}
				else
				{
					func_327(38, 0, 0, 0, func_326(), 0, -1, 0);
					func_328(1);
				}
			}
			if (func_35() && func_324(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_35() && (func_325(38) || func_320(38)))
					{
						func_329(38, _0x13aaecda43318bfe(-2076669067, iVar6), _0xd52d20b0c76bb26d(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_329(38, get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_330(iParam0) == -1037537535)
	{
		if ((!func_331(iParam0, 866047851) && !func_331(iParam0, -1979000645)) && !func_331(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_332(iParam0, 8388608) && !func_205(28))
	{
		func_333(28);
	}
	if (!bVar3)
	{
		if (func_331(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_334(iParam0) == -1447088266)
			{
				iVar1 = func_336(func_335(iParam0, 1), 0);
				if (is_weapon_valid(iVar1))
				{
					if (func_23() == -1)
					{
						func_200(iVar1);
					}
					if (func_337(0) && func_201(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_338(iParam0, iVar0, iParam5);
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
					if (func_23() == -1)
					{
						func_200(iParam0);
					}
					if (func_337(0) && func_201(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_338(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_330(iParam0) == -427144552)
		{
			if (!func_339(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_330(iParam0) == 307971639 && func_340(iParam0))
		{
			if (!func_341(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_331(iParam0, 866047851))
		{
			func_342(iParam0);
		}
		else if (func_331(iParam0, 2000026003))
		{
			func_343(iParam0);
		}
		else if (func_331(iParam0, -103750053))
		{
			func_142(func_213(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_142(func_61(-717883113, 2091222383), iVar0);
		}
		else if (func_331(iParam0, -121341956) && !func_331(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_130((*Global_1835011)[4]->f_1, 1))
				{
					func_321(498, 0);
				}
			}
			if (func_331(iParam0, -2017733358) || func_331(iParam0, -1369131378))
			{
				func_344(iParam0);
			}
		}
		else if (func_331(iParam0, -136654233))
		{
			if (func_331(iParam0, -1021472396))
			{
			}
		}
		else if (func_331(iParam0, -1466706512) && func_331(iParam0, 1147021565))
		{
			func_321(484, 0);
		}
		else if (func_331(iParam0, 1147021565) && func_331(iParam0, -524514947))
		{
		}
		else if (func_331(iParam0, 554195525))
		{
		}
		else if (func_331(iParam0, 589988438))
		{
			if (func_345())
			{
				func_346(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_331(iParam0, 787083290) && func_331(iParam0, 949916894))
		{
			func_347(iParam0);
		}
		else if (func_331(iParam0, -1718133314))
		{
			func_348(iParam0);
		}
		else if (func_331(iParam0, -1738650224))
		{
			func_349(iParam0);
		}
		else if (func_331(iParam0, -1112814642) && func_331(iParam0, 949916894))
		{
			func_350(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_331(iParam0, 1841149704))
		{
			func_351();
		}
		else if (func_331(iParam0, 606799272))
		{
			func_352(iParam0, iParam1);
			func_353(iParam0);
		}
		else if (func_331(iParam0, -1112814642) && func_331(iParam0, -1697809989))
		{
			func_354(iParam0, 0, 0, 0);
		}
		else if (func_331(iParam0, -2017733358) || func_331(iParam0, -1369131378))
		{
			func_344(iParam0);
		}
		else if (func_331(iParam0, -1921346699))
		{
			if (func_23() != -1)
			{
				return 0;
			}
			func_355(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_331(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_193(215778062, 1, 0))
					{
						func_189(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_193(670273567, 1, 0))
					{
						func_189(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_193(-967317137, 1, 0))
					{
						func_189(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_193(526074061, 1, 0))
					{
						func_189(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_193(-1045488665, 1, 0))
					{
						func_189(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_193(471514780, 1, 0))
					{
						func_189(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_331(iParam0, -839724752) && func_332(iParam0, 4))
		{
			if (!func_320(42))
			{
				func_356(iParam0);
			}
		}
		else if (func_331(iParam0, 1399091007))
		{
			func_357(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_331(iParam0, 1248798204))
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
				func_189(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_333(24);
				if (&Global_1946804->f_1497.f_1[27] == &Global_1946804->f_57[27])
				{
					func_358(player_ped_id(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_359(&iVar9, 0))
				{
					func_201(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_23() == -1 && &Global_1946804->f_1497.f_1[25] == &Global_1946804->f_57[25])
				{
					func_358(player_ped_id(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case -160924582:
				break;
			case 2131771850:
				func_321(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_360();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_361();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_362();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_363();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_364();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_365(499813453, 854119837, 0);
				func_366(499813453, 0);
				func_367(1);
				break;
			case 2127812557:
				func_365(499813453, -1292544588, 0);
				func_366(499813453, 0);
				func_367(2);
				break;
			case 808991383:
				func_365(499813453, -1003325394, 0);
				func_366(499813453, 0);
				func_367(4);
				break;
			case 1134518629:
				func_365(666607663, -335460405, 0);
				func_366(666607663, 0);
				func_368(1);
				break;
			case 902940106:
				func_365(666607663, 903797617, 0);
				func_366(666607663, 0);
				func_368(2);
				break;
			case -418174898:
				func_365(666607663, 669728650, 0);
				func_366(666607663, 0);
				func_368(4);
				break;
			case -648114971:
				func_365(-220219788, 1214120047, 0);
				func_366(-220219788, 0);
				func_369(1);
				break;
			case 211153747:
				func_365(-220219788, 655769340, 0);
				func_366(-220219788, 0);
				func_369(2);
				break;
			case -32876996:
				func_365(-220219788, 885316185, 0);
				func_366(-220219788, 0);
				func_369(4);
				break;
			case 1191437462:
				func_365(218622660, -1491419385, 0);
				func_366(218622660, 0);
				func_196(1);
				break;
			case 1119149048:
				func_365(218622660, 1809565830, 0);
				func_366(218622660, 0);
				func_196(2);
				break;
			case 506073827:
				func_365(390004462, -628873767, 0);
				func_366(390004462, 0);
				func_370(1);
				break;
			case -1876986168:
				func_365(390004462, -405421956, 0);
				func_366(390004462, 0);
				func_370(2);
				break;
			case 2142623221:
				func_365(390004462, -1108972386, 0);
				func_366(390004462, 0);
				func_370(4);
				break;
			case 1508215381:
				func_365(6410548, 1053716392, 0);
				func_366(6410548, 0);
				func_371(1);
				break;
			case -888935280:
				func_365(6410548, 806507056, 0);
				func_366(6410548, 0);
				func_371(2);
				break;
			case -1252474566:
				func_365(6410548, 1571925350, 0);
				func_366(6410548, 0);
				func_371(4);
				break;
			case -1465702449:
				func_365(6410548, 1330352282, 0);
				func_366(6410548, 0);
				func_371(8);
				break;
			case -21093309:
				func_372(242, func_288(-21093309), 0);
				break;
			case 204375141:
				func_372(240, func_288(204375141), 0);
				break;
			case -417963070:
				func_372(241, func_288(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_373(594, 1934060482, 1, 1);
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
					func_373(594, 1110018439, 1, 1);
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
					func_373(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_373(594, -1228016946, 1, 1);
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
					func_373(595, -103579, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_373(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case 80178851:
				func_321(488, 0);
				break;
			case 1613651027:
				func_321(491, 0);
				break;
			case -885810591:
				func_321(485, 0);
				if ((get_random_int_in_range(0, 65536) % 3) == 0)
				{
					func_189(func_374(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_189(func_375(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_205(1))
				{
					func_321(487, 0);
				}
				break;
			case -898386032:
				func_321(486, 0);
				break;
			case -2035110427:
				if (func_23() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_321(496, 0);
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
		func_376(&iVar10);
		if (!func_377(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_337(0))
		{
			return 1;
		}
		if (func_330(iParam0) == -1037537535)
		{
			func_378(iParam0);
		}
		if (func_331(iParam0, -1979000645))
		{
			func_379(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_337(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_189(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_380(iVar2, 0);
		}
	}
	Var35 = { func_381(iParam0) };
	if (_stat_id_is_valid(&Var35))
	{
		_0x6a0184e904cdf25e(&Var35, iVar0);
	}
	func_382(iParam0);
	if (fParam6 > 0f)
	{
		if (func_331(iParam0, -839724752))
		{
			func_383(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_384(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

void func_190(bool bParam0)
{
	if (bParam0)
	{
		if (_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_189(-1080874779, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_189(-223790555, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_189(1566032147, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_189(891311852, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_189(-1353737667, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_189(-330313895, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_189(-2051332199, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_189(1237770824, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_189(-1795542128, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_189(-1757588258, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_189(-1921080134, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		_unlock_set_unlocked(-1426541042, true);
	}
	else
	{
		if (!_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_198(-1080874779, 3, 1, -142743235, 1);
		func_198(-223790555, 3, 1, -142743235, 1);
		func_198(1566032147, 3, 1, -142743235, 1);
		func_198(891311852, 5, 1, -142743235, 1);
		func_198(-1353737667, 5, 1, -142743235, 1);
		func_198(-330313895, 5, 1, -142743235, 1);
		func_198(-2051332199, 5, 1, -142743235, 1);
		func_198(1237770824, 5, 1, -142743235, 1);
		func_198(-1795542128, 3, 1, -142743235, 1);
		func_198(-1757588258, 3, 1, -142743235, 1);
		func_198(-1921080134, 10, 1, -142743235, 1);
		iVar1 = -868094182;
		iVar2 = 1074477367;
		iVar3 = 1;
		func_300(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (func_301(iVar0) == 153881023)
			{
				func_302(iVar0, iVar1);
				func_303(iVar0, iVar2);
				func_304(iVar0, iVar3);
				func_305(iVar0, 0);
				if (func_306(iVar0))
				{
					func_307(iVar0);
				}
				iVar4 = func_308(iVar2);
				func_309(iVar0, iVar4);
			}
			iVar0++;
		}
		func_187();
		_unlock_set_unlocked(-1426541042, false);
	}
}

void func_191(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_385(iParam0);
	if (bParam3)
	{
		func_386(iParam0, sParam1, iParam2);
	}
}

void func_192(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_387(iParam0, sParam4, iParam5);
	}
	func_388(iParam0, bParam1, fParam2, iParam3, iParam7);
}

bool func_193(int iParam0, int iParam1, bool bParam2)
{
	if (!func_287(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_330(iParam0);
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
		if (!func_389(iParam0, 1))
		{
			return false;
		}
	}
	return func_212(iParam0, 0, bParam2) >= iParam1;
}

bool func_194(int iParam0)
{
	iVar0 = func_220(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_195(int iParam0)
{
	return (Global_40.f_12004.f_10 && iParam0) != 0;
}

void func_196(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_197(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 - (Global_40.f_12004.f_10 && iParam0));
}

int func_198(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_287(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_390(iParam0, 1);
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
			func_384(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_193(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_381(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_212(iParam0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_212(iParam0, 0, 0) - iParam1) < 0)
		{
			func_198(iParam0, func_212(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_330(iParam0) == -427144552)
	{
		if (!func_391(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_392(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_337(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_384(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_393(iParam0, iParam1);
	return 1;
}

struct<14> func_199()
{
	Var3.f_9 = -1591664384;
	Var17.f_9 = -1591664384;
	if (func_394("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_395(&Var3, iVar2, iVar0, iVar1))
			{
				Jump @136; //curOff = 80
			}
			else if (Var3.f_4 != 127400949)
			{
			}
			else if (func_396(Var3.f_4, &Var17, Var3.f_9))
			{
			}
			else
			{
				func_397(iVar0);
				return Var3;
			}
			iVar2++;
		}
		func_397(iVar0);
	}
	Var39.f_9 = -1591664384;
	return Var39;
}

void func_200(int iParam0)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_204(iParam0))
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

bool func_201(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_398(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_399((386 + iVar28), 1);
			if (func_400(iParam0, &Var0, iVar5, 0))
			{
				if (func_396(iParam0, &Var6, iVar5))
				{
					Var29 = { func_401(iParam0, Var0, iVar5, 0) };
					func_402(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_337(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_338(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_403(iParam0, iParam1);
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

void func_202(int iParam0, struct<4> Param1, int iParam5)
{
	Var0 = { Param1 };
	Var0.f_4 = iParam5;
	Var5.f_9 = -1591664384;
	if (func_404(Param1, iParam5, &Var5, 0))
	{
		func_402(Var5.f_4, &Var5, &Var0, -1, -142743235, 1, 0);
	}
	func_405(iParam0, &Var19, &Var0, 1, 752097756, 0);
	func_406(Var19, 1);
}

bool func_203()
{
	return (_does_anim_scene_exist(Global_43800) && _is_anim_scene_started(Global_43800, false));
}

bool func_204(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_205(int iParam0)
{
	if (!func_407(iParam0))
	{
		return false;
	}
	return func_408(iParam0);
}

int func_206(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_207(vector3 vParam0)
{
	iVar0 = func_409(vParam0, 0f, 0f, 0, 2);
	return func_409(vParam0, (*Global_1894052)[iVar0]->f_1, (*Global_1894052)[iVar0]->f_2, Global_1894052[iVar0], 4);
}

int func_208()
{
	return Global_40.f_4283;
}

bool func_209(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_210(int iParam0)
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
		case 8:
			return 512;
		case 9:
			return 1024;
		case 10:
			return 2048;
		case 11:
			return 4096;
		case 12:
			return 8192;
		case 13:
			return 16384;
		case 14:
			return 32768;
		case 15:
			return 65536;
		case 16:
			return 131072;
		case 17:
			return 262144;
		case 18:
			return 524288;
		case 19:
			return 1048576;
		default:
			break;
	}
	return 1;
}

var func_211()
{
	return Global_40.f_8863.f_148;
}

int func_212(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_287(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_330(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_390(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_410(iParam0, 0);
	}
	iVar2 = _0xe787f05dfc977bde(func_411(bParam2), iParam0, 0);
	return iVar2;
}

struct<2> func_213(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

int func_214(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -707360575;
		case 1:
			return -1278339625;
		case 2:
			return 1880205078;
		case 3:
			return -1201174711;
		case 4:
			return 151582343;
		case 5:
			return 1231074654;
		case 6:
			return -642492359;
		case 7:
			return 1673898385;
		case 8:
			return 5171247;
		default:
			break;
	}
	return 0;
}

int func_215(int iParam0)
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

bool func_216(int iParam0)
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
		iVar0 = func_126(iParam0);
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

void func_217(int iParam0, bool bParam1, int iParam2)
{
	if (!func_15(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_194(iParam0) && !func_216(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_129(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_194(iParam0))
	{
		iParam2 = -1;
	}
	if (func_126(iParam0) == 3 || (func_126(iParam0) == 1 && _0x01f4d242765c6b24(func_129(iParam0))))
	{
		func_412(func_39(iParam0), func_129(iParam0), iParam2);
		if ((!func_15(Global_1572864->f_8) && !func_33(0, 1, 0)) && !func_24(&Global_1935630, 32768))
		{
			iVar0 = func_413(iParam0);
			if (iVar0 != -1)
			{
				func_88(0);
			}
			else if (func_39(iParam0) == 8)
			{
				iVar0 = func_414();
				if (iVar0 != -1)
				{
					func_88(0);
				}
			}
		}
	}
	func_415(iParam0, 0);
	if (func_38(0) == iParam0)
	{
		func_416(1);
		func_417(0);
		func_418(1);
	}
	func_419(iParam0, 1);
	func_420(iParam0);
}

int func_218(int iParam0)
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

void func_219(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam3 = func_105(iParam0);
	*uParam1 = func_206(iParam0);
	*uParam2 = func_421(iParam0);
}

int func_220(int iParam0)
{
	if (!func_15(iParam0))
	{
		return -1;
	}
	return func_126(iParam0);
}

int func_221()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 24)
	{
		if (_0xf83d3dda4d3c8169(func_422(iVar1)) > 0)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_222(int iParam0)
{
	switch (iParam0)
	{
		case 499813453:
			iVar0 = -696705861;
			break;
		case 666607663:
			iVar0 = 1595354593;
			break;
		case -220219788:
			iVar0 = -2016706455;
			break;
		case 218622660:
			iVar0 = 2056119786;
			break;
		case 390004462:
			iVar0 = -878376933;
			break;
		case 6410548:
			iVar0 = 975496781;
			break;
		default:
			return false;
	}
	return _0xf83d3dda4d3c8169(iVar0) > 0;
}

int func_223()
{
	return _0x3a65f4844913a047(678508515, -1160144609);
}

void func_224(bool bParam0)
{
	_databinding_write_data_bool(Global_1955569->f_5.f_147.f_6, bParam0);
}

void func_225(bool bParam0)
{
	_databinding_write_data_bool(Global_1955569->f_5.f_147.f_7, bParam0);
}

void func_226(bool bParam0)
{
	_databinding_write_data_bool(Global_1955569->f_5.f_147.f_8, bParam0);
}

void func_227(bool bParam0)
{
	_databinding_write_data_bool(Global_1955569->f_5.f_147.f_11, bParam0);
}

void func_228(bool bParam0, char* sParam1, char* sParam2)
{
	_databinding_write_data_bool(Global_1955569->f_5.f_147.f_18, bParam0);
	_databinding_write_data_string(Global_1955569->f_5.f_147.f_19, sParam1);
	_databinding_write_data_string(Global_1955569->f_5.f_147.f_20, sParam2);
}

char* func_229(int iParam0, bool bParam1)
{
	if (Global_40.f_39 == 11966224 || bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return "PLAYER_JOHN_GENERAL";
			case 1:
				return "PLAYER_JOHN_HEALTH";
			case 2:
				return "PLAYER_JOHN_STAMINA";
			case 3:
				return "PLAYER_JOHN_DEADEYE";
			case 4:
				return "HORSE_GENERAL";
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return "PLAYER_ARTHUR_GENERAL";
			case 1:
				return "PLAYER_ARTHUR_HEALTH";
			case 2:
				return "PLAYER_ARTHUR_STAMINA";
			case 3:
				return "PLAYER_ARTHUR_DEADEYE";
			case 4:
				return "HORSE_GENERAL";
			default:
				break;
		}
	}
	return "";
}

void func_230(char* sParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = func_423();
	}
	_databinding_write_data_string(Global_1955569->f_5.f_147.f_3, sParam0);
	_databinding_write_data_string(Global_1955569->f_5.f_147.f_4, sParam1);
}

char* func_231(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PMPLAYER_GENERAL_DESC";
		case 1:
			return "PMPLAYER_HEALTH_DESC";
		case 2:
			return "PMPLAYER_STAMINA_DESC";
		case 3:
			return "PMPLAYER_DEADEYE_DESC";
		case 4:
			return "PMPLAYER_HORSE_DESC";
		default:
			break;
	}
	return "";
}

void func_232(char* sParam0)
{
	_databinding_write_data_string(Global_1955569->f_5.f_147.f_2, sParam0);
}

void func_233(char* sParam0)
{
	_databinding_write_data_string(Global_1955569->f_5.f_147.f_1, sParam0);
}

char* func_234()
{
	if (Global_40.f_7748.f_1 >= 7)
	{
		return "PMPLAYER_GENERAL_OVERVIEW_HAIR_LONG";
	}
	else if (Global_40.f_7748.f_1 >= 4)
	{
		return "PMPLAYER_GENERAL_OVERVIEW_HAIR_MEDIUM";
	}
	return "PMPLAYER_GENERAL_OVERVIEW_HAIR_SHORT";
}

void func_235(int iParam0, char* sParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, char* sParam10)
{
	_databinding_write_data_string(Global_1955569->f_5.f_147.f_24[iParam0]->f_4, sParam1);
	_databinding_write_data_string(Global_1955569->f_5.f_147.f_24[iParam0]->f_5, sParam2);
	_databinding_write_data_bool(Global_1955569->f_5.f_147.f_24[iParam0]->f_1, bParam3);
	_databinding_write_data_string(Global_1955569->f_5.f_147.f_24[iParam0]->f_2, sParam10);
	_databinding_write_data_bool(Global_1955569->f_5.f_147.f_24[iParam0]->f_6, bParam4);
	_databinding_write_data_bool(Global_1955569->f_5.f_147.f_24[iParam0]->f_7, bParam5);
	_databinding_write_data_bool(Global_1955569->f_5.f_147.f_24[iParam0]->f_11, bParam6);
	_databinding_write_data_float(Global_1955569->f_5.f_147.f_24[iParam0]->f_8, iParam7);
	_databinding_write_data_float(Global_1955569->f_5.f_147.f_24[iParam0]->f_9, iParam8);
	_databinding_write_data_float(Global_1955569->f_5.f_147.f_24[iParam0]->f_10, iParam9);
	_databinding_write_data_bool(Global_1955569->f_5.f_147.f_24[iParam0]->f_12, false);
	_databinding_insert_ui_item_to_list_from_context_string_alias(Global_1955569->f_5.f_147.f_21, iParam0, "player_attribute_item", &(Global_1955569->f_5.f_147.f_24[iParam0]));
}

char* func_236()
{
	if (&Global_40.f_7731[0] >= 8 || &Global_40.f_7731[2] >= 8)
	{
		return "PMPLAYER_GENERAL_OVERVIEW_HAIR_LONG";
	}
	else if (&Global_40.f_7731[0] >= 4 || &Global_40.f_7731[2] >= 4)
	{
		return "PMPLAYER_GENERAL_OVERVIEW_HAIR_MEDIUM";
	}
	return "PMPLAYER_GENERAL_OVERVIEW_HAIR_SHORT";
}

float func_237()
{
	iVar0 = func_424();
	fVar1 = 1f;
	if (iVar0 < 80)
	{
		return fVar1;
	}
	if (iVar0 >= 280)
	{
		fVar1 = (fVar1 - 0.5f);
	}
	else if (iVar0 >= 200)
	{
		fVar1 = (fVar1 - 0.25f);
	}
	else
	{
		fVar1 = (fVar1 - 0.1f);
	}
	return fVar1;
}

char* func_238()
{
	if (func_1())
	{
		return "PLAYER_JOHN_WEIGHT";
	}
	return "PLAYER_ARTHUR_WEIGHT";
}

void func_239(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			fVar0 = (absf(Global_40.f_11095.f_45) * 100f);
			fVar1 = (absf(Global_40.f_11095.f_62) * 100f);
			if (Global_40.f_11095.f_45 == 0f)
			{
				func_235(0, _create_var_string(2, "PMPLAYER_STAMINA_DRAIN"), _create_var_string(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 0), 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Stamina");
				func_235(1, _create_var_string(2, "PMPLAYER_DAMAGE_ABSORPTION"), _create_var_string(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 0), 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Health");
			}
			else if (Global_40.f_11095.f_45 > 0f)
			{
				func_235(0, _create_var_string(2, "PMPLAYER_STAMINA_DRAIN"), _create_var_string(6, "PMPLAYER_CORE_PC_MINUS_VALUE", fVar0), 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Stamina");
				func_250(0, "RPG_ARROW_UP", 0);
				func_235(1, _create_var_string(2, "PMPLAYER_DAMAGE_ABSORPTION"), _create_var_string(6, "PMPLAYER_CORE_PC_PLUS_VALUE", fVar1), 1, 0, 1, 0, 0f, 0f, 0f, "RPG_Health");
				func_250(1, "RPG_ARROW_DOWN", 0);
			}
			else
			{
				func_235(0, _create_var_string(2, "PMPLAYER_STAMINA_DRAIN"), _create_var_string(6, "PMPLAYER_CORE_PC_PLUS_VALUE", fVar0), 1, 0, 1, 0, 0f, 0f, 0f, "RPG_Stamina");
				func_250(0, "RPG_ARROW_DOWN", 0);
				func_235(1, _create_var_string(2, "PMPLAYER_DAMAGE_ABSORPTION"), _create_var_string(6, "PMPLAYER_CORE_PC_MINUS_VALUE", fVar1), 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Health");
				func_250(1, "RPG_ARROW_UP", 0);
			}
			break;
		case 1:
		case 2:
		case 3:
			fVar2 = func_70();
			if (fVar2 < 0f)
			{
				func_235(0, _create_var_string(2, "PMPLAYER_CORE_DRAIN_RATE"), _create_var_string(2, "PMPLAYER_CORE_PC_PLUS_VALUE", absi(round((100f * fVar2)))), 1, 0, 1, 0, 0f, 0f, 0f, func_425(iParam0));
				func_250(0, "RPG_ARROW_DOWN", 0);
			}
			else if (fVar2 == 0f)
			{
				func_235(0, _create_var_string(2, "PMPLAYER_CORE_DRAIN_RATE"), _create_var_string(2, "PMPLAYER_CORE_PC_PLUS_VALUE", absi(round((100f * fVar2)))), 1, 0, 0, 0, 0f, 0f, 0f, func_425(iParam0));
			}
			else
			{
				func_235(0, _create_var_string(2, "PMPLAYER_CORE_DRAIN_RATE"), _create_var_string(2, "PMPLAYER_CORE_PC_MINUS_VALUE", absi(round((100f * fVar2)))), 1, 0, 0, 0, 0f, 0f, 0f, func_425(iParam0));
				func_250(0, "RPG_ARROW_UP", 0);
			}
			break;
	}
}

char* func_240()
{
	if (func_1())
	{
		return "PLAYER_JOHN_TEMPERATURE";
	}
	return "PLAYER_ARTHUR_TEMPERATURE";
}

char* func_241()
{
	if (func_1())
	{
		return "pausemenu_player_update";
	}
	return "pausemenu_player";
}

void func_242()
{
	if (func_68() || func_69())
	{
		func_235(0, _create_var_string(2, "PMPLAYER_CORE_DRAIN_RATE"), _create_var_string(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 900), 1, 0, 1, 0, 0f, 0f, 0f, "RPG_Health");
		func_250(0, "RPG_ARROW_DOWN", 0);
	}
	else
	{
		func_235(0, _create_var_string(2, "PMPLAYER_CORE_DRAIN_RATE"), _create_var_string(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 0), 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Health");
	}
}

char* func_243()
{
	if (func_1())
	{
		return "PLAYER_JOHN_TOXICITY";
	}
	return "PLAYER_ARTHUR_TOXICITY";
}

char* func_244()
{
	if (func_1())
	{
		return "pausemenu_player_update";
	}
	return "pausemenu_player";
}

void func_245()
{
	if (Global_40.f_11095.f_43)
	{
		func_235(0, _create_var_string(2, "PMPLAYER_CORE_DRAIN_RATE"), _create_var_string(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 900), 1, 0, 1, 0, 0f, 0f, 0f, "RPG_Health");
		func_250(0, "RPG_ARROW_DOWN", 0);
	}
	else
	{
		func_235(0, _create_var_string(2, "PMPLAYER_CORE_DRAIN_RATE"), _create_var_string(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 0), 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Health");
	}
}

char* func_246()
{
	if (func_1())
	{
		return "PLAYER_JOHN_WELLBEING";
	}
	return "PLAYER_ARTHUR_WELLBEING";
}

void func_247(bool bParam0, bool bParam1, bool bParam2)
{
	fVar0 = 0f;
	sVar1 = "PMPLAYER_CORE_PC_PLUS_VALUE";
	if (!func_1())
	{
		if (Global_40.f_11095.f_67 >= 7)
		{
			fVar0 = absf((100f * func_73()));
			sVar1 = "PMPLAYER_CORE_PC_PLUS_VALUE";
			bVar2 = true;
		}
	}
	if (bParam0)
	{
		func_235(iVar3, _create_var_string(2, "PMPLAYER_CORE_DRAIN_RATE"), _create_var_string(2, sVar1, round(fVar0)), 1, 0, bVar2, 0, 0f, 0f, 0f, "RPG_Health");
		if (bVar2)
		{
			func_250(iVar3, "RPG_ARROW_DOWN", 0);
		}
		iVar3++;
	}
	if (bParam1)
	{
		func_235(iVar3, _create_var_string(2, "PMPLAYER_CORE_DRAIN_RATE"), _create_var_string(2, sVar1, round(fVar0)), 1, 0, bVar2, 0, 0f, 0f, 0f, "RPG_Stamina");
		if (bVar2)
		{
			func_250(iVar3, "RPG_ARROW_DOWN", 0);
		}
		iVar3++;
	}
	if (bParam2)
	{
		func_235(iVar3, _create_var_string(2, "PMPLAYER_CORE_DRAIN_RATE"), _create_var_string(2, sVar1, round(fVar0)), 1, 0, bVar2, 0, 0f, 0f, 0f, "RPG_Dead_Eye");
		if (bVar2)
		{
			func_250(iVar3, "RPG_ARROW_DOWN", 0);
		}
	}
}

void func_248(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!func_193(iParam0, 1, 0))
	{
		func_230("UNDISCOVERED", 0);
		func_232("PMPLAYER_PERK_UNDISCOVERED_TALISMAN_DESC");
		func_233("PMPLAYER_PERK_UNDISCOVERED_TALISMAN");
	}
	else
	{
		func_230(sParam3, sParam4);
		func_232(sParam2);
		func_233(sParam1);
	}
	func_163("PMPLAYER_PERK_TOOLTIP");
}

void func_249(int iParam0)
{
	if (!func_193(2131771850, 1, 0))
	{
		func_230("UNDISCOVERED", 0);
		func_232("PMPLAYER_PERK_UNDISCOVERED_TALISMAN_DESC");
		func_233("PMPLAYER_PERK_UNDISCOVERED_TALISMAN");
	}
	else
	{
		func_230("PERK_LEGEND_OUTFIT", "pausemenu_player_update");
		func_232("CLOTHING_LEGENDARY_EAST_OUTFIT_DESC");
		func_233("CLOTHING_LEGENDARY_EAST_OUTFIT");
		switch (iParam0)
		{
			case 0:
			case 1:
			case 2:
				func_235(0, _create_var_string(2, "PMPLAYER_CORE_DRAIN_RATE"), _create_var_string(2, "PMPLAYER_CORE_PC_MINUS_VALUE", 10), 1, 0, 0, 0, 0f, 0f, 0f, func_426(iParam0));
				func_235(1, _create_var_string(2, "PMPLAYER_XP_BONUS"), _create_var_string(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 10), 1, 0, 0, 0, 0f, 0f, 0f, func_426(iParam0));
				break;
			default:
				func_235(0, _create_var_string(2, "PMPLAYER_WEAPON_CONDITION"), _create_var_string(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 10), 1, 0, 0, 0, 0, 0, 0, 0);
				func_235(1, _create_var_string(2, "PMPLAYER_LOOT_BONUS"), _create_var_string(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 10), 1, 0, 0, 0, 0, 0, 0, 0);
				func_235(2, _create_var_string(2, "PMPLAYER_MELEE_RESIST"), _create_var_string(2, "PMPLAYER_CORE_PC_MINUS_VALUE", 10), 1, 0, 0, 0, 0, 0, 0, 0);
				func_235(3, _create_var_string(2, "PMPLAYER_HORSE_DAMAGE_RESIST"), _create_var_string(2, "PMPLAYER_CORE_PC_MINUS_VALUE", 10), 1, 0, 0, 0, 0, 0, 0, 0);
				func_235(4, _create_var_string(2, "PMPLAYER_EAGLE_EYE_DURATION"), _create_var_string(2, "PMPLAYER_TIME_VALUE_SECONDS", 5), 1, 0, 0, 0, 0, 0, 0, 0);
				break;
		}
	}
	func_163("PMPLAYER_PERK_TOOLTIP");
}

void func_250(int iParam0, char* sParam1, char* sParam2)
{
	_databinding_write_data_string(Global_1955569->f_5.f_147.f_24[iParam0]->f_13, sParam1);
	if (!is_string_null_or_empty(sParam2))
	{
		_databinding_write_data_string(Global_1955569->f_5.f_147.f_24[iParam0]->f_14, sParam2);
	}
	else
	{
		_databinding_write_data_string(Global_1955569->f_5.f_147.f_24[iParam0]->f_14, "pausemenu_player_update");
	}
	_databinding_write_data_bool(Global_1955569->f_5.f_147.f_24[iParam0]->f_12, true);
}

void func_251(int iParam0, char* sParam1, char* sParam2, char* sParam3)
{
	fVar0 = &Global_40.f_11095.f_11[iParam0];
	iVar1 = func_279(fVar0);
	fVar2 = to_float(func_427(iVar1 + 1));
	if (iVar1 == 7)
	{
		fVar2 = to_float(1100);
	}
	func_235(0, _create_var_string(2, sParam1), _create_var_string(18, "PMPLAYER_VALUE_X_OF_Y", floor(fVar0), fVar2), 0, 0, 0, 0, 0, 0, 0, 0);
	func_235(1, _create_var_string(2, sParam2), _create_var_string(2, "PMPLAYER_VALUE_X_OF_Y", iVar1 + 1, 7 + 1), 0, 0, 0, 0, 0, 0, 0, 0);
	switch (iParam0)
	{
		case 0:
			iVar3 = func_212(-1845241476, 0, 0);
			if (iVar3 > 0)
			{
				func_235(2, _create_var_string(2, "PMPLAYER_HEALTH_PROGRESSION_STAT_BONUS"), _create_var_string(2, "PMPLAYER_VALUE_X_OF_Y", iVar3, 2), 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		case 1:
			iVar3 = func_212(1654063339, 0, 0);
			if (iVar3 > 0)
			{
				func_235(2, _create_var_string(2, "PMPLAYER_STAMINA_PROGRESSION_STAT_BONUS"), _create_var_string(2, "PMPLAYER_VALUE_X_OF_Y", iVar3, 2), 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		case 2:
			iVar3 = func_212(1623931083, 0, 0);
			if (iVar3 > 0)
			{
				func_235(2, _create_var_string(2, "PMPLAYER_DEAD_EYE_PROGRESSION_STAT_BONUS"), _create_var_string(2, "PMPLAYER_VALUE_X_OF_Y", iVar3, 2), 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
	}
	iVar4 = (iVar1 + iVar3) + 1;
	sVar5 = func_429(func_428(iVar4, 0));
	func_228(1, sVar5, sParam3);
}

int func_252(int iParam0)
{
	iParam0 = func_280(iParam0);
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

int func_253(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
	}
	iVar0 = get_attribute_rank(iParam0, func_430());
	return iVar0;
}

int func_254(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
	}
	iVar0 = get_attribute_rank(iParam0, func_431());
	return iVar0;
}

int func_255(int iParam0)
{
	if (!is_model_valid(iParam0))
	{
		return 0;
	}
	iVar0 = get_default_attribute_rank(iParam0, func_430());
	return iVar0;
}

int func_256(int iParam0)
{
	if (!is_model_valid(iParam0))
	{
		return 0;
	}
	iVar0 = get_default_attribute_rank(iParam0, func_431());
	return iVar0;
}

int func_257(int iParam0, int iParam1)
{
	iParam0 = func_280(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return &(Global_40.f_1095.f_1[iParam0]->f_398[iParam1]);
}

int func_258()
{
	return Global_40.f_1095.f_3054;
}

int func_259(int iParam0, int iParam1)
{
	*iParam0 = 0;
	*iParam1 = 0;
	Var0.f_1 = 20;
	iVar31 = func_432(856287005);
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		iVar30 = func_433(856287005, iVar32);
		if (iVar30 != 0)
		{
			if (func_170(iVar30, &iVar29))
			{
				if (func_287(iVar29, 0))
				{
					if (_item_database_fillout_item_effects_ids(iVar29, &Var0) && Var0 > 0)
					{
						iVar33 = 0;
						while (iVar33 < Var0)
						{
							if (_item_database_fillout_item_effects_id_info(&(Var0.f_1[iVar33]), &vVar22))
							{
								if (vVar22.y == 2086291460)
								{
									*iParam1 = (*iParam1 + vVar22.z);
								}
								else if (vVar22.y == -1620444701)
								{
									*iParam0 = (*iParam0 + vVar22.z);
								}
							}
							iVar33++;
						}
					}
				}
			}
		}
		iVar32++;
	}
	return 1;
}

bool func_260()
{
	return Global_40.f_1095.f_3140.f_1;
}

int func_261(int iParam0)
{
	if (!is_model_valid(iParam0))
	{
		return 0;
	}
	iVar0 = get_default_attribute_rank(iParam0, func_434());
	return iVar0;
}

int func_262(int iParam0)
{
	if (!is_model_valid(iParam0))
	{
		return 0;
	}
	iVar0 = get_default_attribute_rank(iParam0, func_435());
	return iVar0;
}

int func_263(int iParam0)
{
	if (!is_model_valid(iParam0))
	{
		return -1;
	}
	iVar0 = func_436(iParam0);
	switch (iVar0)
	{
		case 0:
		case 1:
			return 0;
		case 2:
		case 3:
			return 1;
		case 4:
		case 5:
			return 2;
		case 6:
		case 7:
		case 8:
		case 9:
			return 3;
	}
	return -1;
}

char* func_264(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HORSE_HANDLING_HEAVY";
		case 1:
			return "HORSE_HANDLING_STANDARD";
		case 2:
			return "HORSE_HANDLING_RACE";
		case 3:
			return "HORSE_HANDLING_ELITE";
		default:
			break;
	}
	return "";
}

void func_265(int iParam0, float fParam1, int iParam2)
{
	_databinding_write_data_int(Global_1955569->f_5.f_147.f_12, iParam0);
	_databinding_write_data_float(Global_1955569->f_5.f_147.f_13, fParam1);
	_databinding_write_data_int(Global_1955569->f_5.f_147.f_14, iParam2);
}

void func_266(int iParam0, float fParam1, int iParam2)
{
	_databinding_write_data_int(Global_1955569->f_5.f_147.f_15, iParam0);
	_databinding_write_data_float(Global_1955569->f_5.f_147.f_16, fParam1);
	_databinding_write_data_int(Global_1955569->f_5.f_147.f_17, iParam2);
}

int func_267(int iParam0)
{
	if (iParam0 == 808655744)
	{
		return -364764277;
	}
	switch (iParam0)
	{
		case -450053710:
			return -974145463;
		case -1679658797:
			return 1432602132;
		case 1792770814:
			return 92296905;
		case -1963397600:
			return -842044823;
		case -1250098797:
			return 1371398552;
		case -318278790:
			return -745453539;
		case 55096099:
			return 1583029039;
		case -458397856:
			return -783061276;
		case -444610976:
			return -1322521536;
		case 746627200:
			return 728055838;
		case 705691988:
			return 1100711204;
		case 2130094044:
			return -1782334639;
		case -1554827654:
			return -1181052732;
		case 604357666:
			return -540812301;
		case -1029277326:
			return -179102320;
		case -1140650619:
			return -1266863668;
		case -1999198818:
			return -2078767648;
		case 1496579364:
			return -2055655009;
		case -1523757120:
			return -1506685618;
		case -403470324:
			return -852553462;
		case 1576849913:
			return -2105447887;
		case -925223936:
			return -80004868;
		case -1547438906:
			return 1813208211;
		case -635239558:
			return 836323303;
		case -2026265047:
			return 153881023;
		case -586898625:
			return -1256798240;
		case 937246805:
			return 2118089359;
		case 1593035738:
			return -1537586382;
		case 861505058:
			return 1440692746;
		case 687445866:
			return 697143532;
		case 1705182311:
			return 281128160;
		case -78273782:
			return 1854519167;
		case -819697512:
			return -1376299681;
		case -247265944:
			return -1955947684;
		case -1516219602:
			return 1427053849;
		case -1265030920:
			return 1361788230;
		case 2024948086:
			return 1974379573;
		case 1696286663:
			return 545109431;
		case -1342159303:
			return 1275638003;
		case -1154406788:
			return 2083573823;
		case 2030804811:
			return 1235275977;
		case 1230359523:
			return 892601357;
		case -1038436471:
			return 1224695367;
		case -1063137731:
			return 955937750;
		case 96930969:
			return 648301150;
		case -1180427609:
			return -1597490733;
		case 2119038574:
			return 2000205872;
		case 43825738:
			return -1428527735;
		case 2145697477:
			return 170010697;
		case -1261814606:
			return -742726637;
		case 107013696:
			return -1714171692;
		case 1066034872:
			return -103101636;
		case 36009259:
			return -1999094324;
		case -1599683008:
			return 1724200240;
		case -1693870200:
			return 237935328;
		case 1072019803:
			return 120848852;
		case 1074477367:
			return -868094182;
		case -85890205:
			return -887362763;
		case 1048964673:
			return 2059232991;
		case -727455979:
			return -847714194;
		case -1667789645:
			return 1756765331;
		case -1924405794:
			return -813071670;
		case 1861665605:
			return -1900569233;
		case -526169133:
			return 1688250187;
		case 2120708491:
			return -1262715164;
		case 900144280:
			return 2010625508;
		case 1133837220:
			return -136225010;
		case 1702024301:
			return -225011104;
		case -1604180548:
			return -1882436593;
		case 1772321403:
			return -1331210307;
		case -1230516683:
			return 122449722;
		case 594040097:
			return -1784502482;
		case 1883159941:
			return -1943445834;
		case -1028075925:
			return -635244104;
		case 84224102:
			return -1427377767;
		case -1896838685:
			return -1293672675;
		case -420599285:
			return -1179079660;
		case 478986344:
			return 805526368;
		case 446670976:
			return 1342496140;
		case 802784330:
			return -126555855;
		case 549900435:
			return 294243421;
		case -2063289686:
			return -997197050;
		case 917402668:
			return -235714362;
		case -914712122:
			return -1678164;
		case -598917269:
			return -977833913;
		case -216303527:
			return 1589164943;
		case -1356425746:
			return -1087523615;
		case -1760684159:
			return -496814209;
		case -548014618:
			return 2109055751;
		case 1800725969:
			return -776673611;
		case -1391147923:
			return 1764402253;
		case -646460384:
			return -1417310078;
		case -1181161469:
			return 1096273915;
		case -1642485146:
			return 772751081;
		case -1486704931:
			return -1140435723;
		case 1139858530:
			return 2002524329;
		case -1053639984:
			return 1151530184;
		case -941733863:
			return -1266525037;
		case -1084397164:
			return -2018137175;
		case -575759638:
			return -574151692;
		case -1718100160:
			return 649786380;
		case 979093383:
			return -1921328920;
		case 1760888205:
			return -837607790;
		case 291878635:
			return 370424594;
		default:
			break;
	}
	return 0;
}

int func_268(int iParam0)
{
	if (iParam0 == 808655744)
	{
		return 779169510;
	}
	switch (iParam0)
	{
		case -450053710:
			return -311956671;
		case -1679658797:
			return -311956671;
		case 1792770814:
			return -311956671;
		case -1963397600:
			return -311956671;
		case -1250098797:
			return 356361174;
		case -318278790:
			return 356361174;
		case 55096099:
			return 356361174;
		case -458397856:
			return 356361174;
		case -444610976:
			return -1771663379;
		case 746627200:
			return -1771663379;
		case 705691988:
			return -1771663379;
		case 2130094044:
			return -311956671;
		case -1554827654:
			return -311956671;
		case 604357666:
			return -311956671;
		case -1029277326:
			return -311956671;
		case -1140650619:
			return -311956671;
		case -1999198818:
			return -2030355032;
		case 1496579364:
			return -2030355032;
		case -1523757120:
			return -2030355032;
		case -403470324:
			return -2030355032;
		case 1576849913:
			return -2030355032;
		case -925223936:
			return -2030355032;
		case -1547438906:
			return -1771663379;
		case -635239558:
			return -1771663379;
		case -2026265047:
			return -1771663379;
		case -586898625:
			return 918497150;
		case 937246805:
			return 918497150;
		case 1593035738:
			return -311956671;
		case 861505058:
			return -311956671;
		case 687445866:
			return -311956671;
		case 1705182311:
			return -1771663379;
		case -78273782:
			return -1771663379;
		case -819697512:
			return -1771663379;
		case -247265944:
			return 997958153;
		case -1516219602:
			return 997958153;
		case -1265030920:
			return 997958153;
		case 2024948086:
			return 997958153;
		case 1696286663:
			return 997958153;
		case -1342159303:
			return -1651618152;
		case -1154406788:
			return -1651618152;
		case 2030804811:
			return 997958153;
		case 1230359523:
			return 997958153;
		case -1038436471:
			return 997958153;
		case -1063137731:
			return 997958153;
		case 96930969:
			return 997958153;
		case -1180427609:
			return -1651618152;
		case 2119038574:
			return -1651618152;
		case 43825738:
			return -1651618152;
		case 2145697477:
			return 356361174;
		case -1261814606:
			return 356361174;
		case 107013696:
			return 356361174;
		case 1066034872:
			return 918497150;
		case 36009259:
			return 918497150;
		case -1599683008:
			return 918497150;
		case -1693870200:
			return 918497150;
		case 1072019803:
			return 997958153;
		case 1074477367:
			return 997958153;
		case -85890205:
			return 997958153;
		case 1048964673:
			return 997958153;
		case -727455979:
			return 997958153;
		case -1667789645:
			return 997958153;
		case -1924405794:
			return 356361174;
		case 1861665605:
			return 356361174;
		case -526169133:
			return 356361174;
		case 2120708491:
			return 356361174;
		case 900144280:
			return 356361174;
		case 1133837220:
			return -1651618152;
		case 1702024301:
			return -1651618152;
		case -1604180548:
			return -1651618152;
		case 1772321403:
			return 1090011026;
		case -1230516683:
			return 1090011026;
		case 594040097:
			return 1090011026;
		case 1883159941:
			return 356361174;
		case -1028075925:
			return -311956671;
		case 84224102:
			return -2030355032;
		case -1896838685:
			return -1771663379;
		case -420599285:
			return -1651618152;
		case 478986344:
			return -1651618152;
		case 446670976:
			return 997958153;
		case 802784330:
			return 918497150;
		case 549900435:
			return -311956671;
		case -2063289686:
			return 356361174;
		case 917402668:
			return 997958153;
		case -914712122:
			return 356361174;
		case -598917269:
			return -311956671;
		case -216303527:
			return 356361174;
		case -1356425746:
			return 779169510;
		case -1760684159:
			return 779169510;
		case -548014618:
			return 779169510;
		case 1800725969:
			return 779169510;
		case -1391147923:
			return 779169510;
		case -646460384:
			return 779169510;
		case -1181161469:
			return 779169510;
		case -1642485146:
			return 779169510;
		case -1486704931:
			return 779169510;
		case 1139858530:
			return 779169510;
		case -1053639984:
			return 779169510;
		case -941733863:
			return 779169510;
		case -1084397164:
			return 779169510;
		case -575759638:
			return 779169510;
		case -1718100160:
			return 779169510;
		case 979093383:
			return 779169510;
		case 1760888205:
			return 779169510;
		case 291878635:
			return 779169510;
		default:
			break;
	}
	return 779169510;
}

char* func_269(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 997958153:
			return "HORSE_CLASS_RIDING";
		case 918497150:
			return "HORSE_CLASS_DRAFT";
		case 356361174:
			return "HORSE_CLASS_RACE";
		case -1771663379:
			return "HORSE_CLASS_WAR";
		case -311956671:
			return "HORSE_CLASS_WORK";
		case -1651618152:
			return func_437(iParam1);
		case -2030355032:
			return "HORSE_CLASS_SUPERIOR";
		case 1090011026:
			return "HORSE_CLASS_OTHER";
		default:
			break;
	}
	return "";
}

char[] func_270(int iParam0)
{
	StringCopy(&cVar0, func_438(iParam0), 64);
	StringConCat(&cVar0, "_BREED", 64);
	return func_174(&cVar0);
}

int func_271(int iParam0)
{
	iParam0 = func_280(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0]->f_10;
}

char* func_272(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "HORSE_GENDER_MALE";
		case 2:
			return "HORSE_GENDER_FEMALE";
	}
	return "HORSE_GENDER_UNKNOWN";
}

char* func_273(int iParam0)
{
	switch (iParam0)
	{
		case -974145463:
			return "COAT_OVERO";
		case 1432602132:
			return "COAT_TOB";
		case 92296905:
			return "COAT_SPLASHWHITE";
		case -842044823:
			return "COAT_GREYOVERO";
		case 1371398552:
			return "COAT_BLACK";
		case -745453539:
			return "COAT_BUCKSKIN";
		case 1583029039:
			return "COAT_PALDAP";
		case -783061276:
			return "COAT_SILVERTAILBUCKSKIN";
		case -1322521536:
			return "COAT_DARKBAY";
		case 1100711204:
			return "COAT_PERLINO";
		case 728055838:
			return "COAT_ROSEGREY";
		case -1782334639:
			return "COAT_BLANKET";
		case -1181052732:
			return "COAT_LEOPBLANKET";
		case -540812301:
			return "COAT_FEWSPOTTED";
		case -179102320:
			return "COAT_BRLEOP";
		case -1266863668:
			return "COAT_LEOP";
		case -2078767648:
			return "COAT_BLACK";
		case -2055655009:
			return "COAT_REDCH";
		case -1506685618:
			return "COAT_REDCH";
		case -852553462:
			return "COAT_ROSEGREYBAY";
		case -2105447887:
			return "COAT_WARPEDBRINDLE";
		case -80004868:
			return "COAT_WHITE";
		case 1813208211:
			return "COAT_BAYR";
		case 836323303:
			return "COAT_STRAWR";
		case 153881023:
			return "COAT_IRONGREYR";
		case -1256798240:
			return "COAT_BLONDCH";
		case 2118089359:
			return "COAT_MEALYCH";
		case -1537586382:
			return "COAT_SOOTYBUCKSKIN";
		case 1440692746:
			return "COAT_SEALBR";
		case 697143532:
			return "COAT_CHOCR";
		case 281128160:
			return "COAT_FLAXCH";
		case 1854519167:
			return "COAT_PIETOB";
		case -1376299681:
			return "COAT_DAPDARKGREY";
		case -1955947684:
			return "COAT_BLACK";
		case 1427053849:
			return "COAT_BUTTERMILKBUCKSKIN";
		case 1361788230:
			return "COAT_CHPIN";
		case 1974379573:
			return "COAT_GREY";
		case 545109431:
			return "COAT_SILVERBAY";
		case 1275638003:
			return "COAT_AMBCHA";
		case 2083573823:
			return "COAT_SILVERDAPPINT";
		case 1235275977:
			return "COAT_BAY";
		case 892601357:
			return "COAT_BAYR";
		case 1224695367:
			return "COAT_FLAXCH";
		case 955937750:
			return "COAT_LIVERCH";
		case 648301150:
			return "COAT_PAL";
		case -1597490733:
			return "COAT_GRULDUN";
		case 2000205872:
			return "COAT_WILDBAY";
		case -1428527735:
			return "COAT_TIGSTRBAY";
		case 170010697:
			return "COAT_BLUER";
		case -742726637:
			return "COAT_WHITER";
		case -1714171692:
			return "COAT_REVDAPR";
		case -103101636:
			return "COAT_DARKBAY";
		case -1999094324:
			return "COAT_LGREY";
		case 1724200240:
			return "COAT_SORREL";
		case 237935328:
			return "COAT_REDCH";
		case 120848852:
			return "COAT_BLACKRAB";
		case -868094182:
			return "COAT_CH";
		case -887362763:
			return "COAT_DAPBAY";
		case 2059232991:
			return "COAT_GOLDPALOMINO";
		case -847714194:
			return "COAT_REDR";
		case 1756765331:
			return "COAT_FLAXR";
		case -813071670:
			return "COAT_BLBAY";
		case -1900569233:
			return "COAT_DAPGREY";
		case 1688250187:
			return "COAT_BRINDLE";
		case -1262715164:
			return "COAT_BLACKCH";
		case 2010625508:
			return "COAT_REVDAPBLACK";
		case -136225010:
			return "COAT_DARKBAY";
		case -225011104:
			return "COAT_GOLD";
		case -1882436593:
			return "COAT_SILVER";
		case -1331210307:
			return "COAT_NONE";
		case 122449722:
			return "COAT_NONE";
		case -1784502482:
			return "COAT_NONE";
		case -1943445834:
			return "COAT_LIGHTBUCKSKIN";
		case -635244104:
			return "COAT_BLACKSNO";
		case -1427377767:
			return "COAT_GREY";
		case -1293672675:
			return "COAT_LIVERCH";
		case -1179079660:
			return "COAT_SABLECHAMP";
		case 805526368:
			return "COAT_GOLDENDUN";
		case 1342496140:
			return "COAT_MAHBAY";
		case -126555855:
			return "COAT_RAVBLACK";
		case 294243421:
			return "COAT_CHEMGOLD";
		case -997197050:
			return "COAT_SEALBR";
		case -235714362:
			return "COAT_BLANKET";
		case -1678164:
			return "COAT_BLUER";
		case -977833913:
			return "COAT_BLACKRAB";
		case 1589164943:
			return "COAT_SILVERBAY";
		case -1087523615:
			return "COAT_SPLASHWHITE";
		case -496814209:
			return "COAT_BROWNR";
		case 2109055751:
			return "COAT_GREYSNOWCAPSPOTTED";
		case -776673611:
			return "COAT_GREYROANSABINO";
		case 1764402253:
			return "COAT_ALBINO";
		case -1417310078:
			return "COAT_SILVER";
		case 1096273915:
			return "COAT_GREYOVERO";
		case 772751081:
			return "COAT_SILVERDARKBAY";
		case -1140435723:
			return "COAT_SMOKYBLACK";
		case 2002524329:
			return "COAT_FLAXR";
		case 1151530184:
			return "COAT_LIGHTPALOMINO";
		case -1266525037:
			return "COAT_BLACK";
		case -2018137175:
			return "COAT_GOLDDAP";
		case -574151692:
			return "COAT_DARKBAYROAN";
		case 649786380:
			return "COAT_SILVERTAILBUCKSKIN";
		case -1921328920:
			return "COAT_BRLEOP";
		case -837607790:
			return "COAT_SABINO";
		case 370424594:
			return "COAT_FEWSPOTBUCKSKIN";
		case -364764277:
			return "COAT_NONE";
		default:
			break;
	}
	return "";
}

float func_274(int iParam0)
{
	iParam0 = func_280(iParam0);
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

void func_275(int iParam0, int iParam1, int iParam2)
{
	fVar0 = (func_439(iParam1, iParam2) * 100f);
	sVar1 = func_139(0 == iParam2, "RPG_Horse_Health", "RPG_Horse_Stamina");
	if (fVar0 > 0f)
	{
		func_235(iParam0, _create_var_string(2, "PMPLAYER_CORE_DRAIN_RATE"), _create_var_string(2, "PMPLAYER_CORE_PC_PLUS_VALUE", round(fVar0)), 1, 0, 1, 0, 0, 0, 0, sVar1);
		func_250(iParam0, "RPG_ARROW_DOWN", 0);
	}
	else if (fVar0 == 0f)
	{
		func_235(iParam0, _create_var_string(2, "PMPLAYER_CORE_DRAIN_RATE"), _create_var_string(2, "PMPLAYER_CORE_PC_PLUS_VALUE", round(fVar0)), 1, 0, 0, 0, 0, 0, 0, sVar1);
	}
	else
	{
		func_235(iParam0, _create_var_string(2, "PMPLAYER_CORE_DRAIN_RATE"), _create_var_string(2, "PMPLAYER_CORE_PC_VALUE", round(fVar0)), 1, 0, 0, 0, 0, 0, 0, sVar1);
		func_250(iParam0, "RPG_ARROW_UP", 0);
	}
}

void func_276()
{
	if (!func_170(-415648720, &iVar0))
	{
		return;
	}
	Var1.f_1 = 20;
	if (!_item_database_fillout_item_effects_ids(iVar0, &Var1))
	{
		return;
	}
	iVar34 = 0;
	while (iVar34 < Var1)
	{
		if (!_item_database_fillout_item_effects_id_info(&(Var1.f_1[iVar34]), &Var23))
		{
		}
		else
		{
			switch (Var23.f_1)
			{
				case -225223329:
					fVar30 = Var23.f_5;
					break;
				case 1167068375:
					fVar31 = Var23.f_5;
					break;
				case -845587290:
					fVar32 = Var23.f_5;
					break;
				case 1605773431:
					fVar33 = Var23.f_5;
					break;
			}
		}
		iVar34++;
	}
	iVar35 = 0;
	sVar36 = "";
	if (fVar30 < 0f)
	{
		sVar36 = _create_var_string(2, "PMPLAYER_CORE_PC_PLUS_VALUE", round(absf(fVar30)));
	}
	else if (fVar30 > 0f)
	{
		sVar36 = _create_var_string(2, "PMPLAYER_CORE_PC_MINUS_VALUE", round(absf(fVar30)));
	}
	if (fVar30 != 0f)
	{
		func_235(iVar35, _create_var_string(2, "PMPLAYER_CORE_DRAIN_RATE"), sVar36, 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Health");
		iVar35++;
	}
	if (fVar31 < 0f)
	{
		sVar36 = _create_var_string(2, "PMPLAYER_CORE_PC_PLUS_VALUE", round(absf(fVar31)));
	}
	else if (fVar31 > 0f)
	{
		sVar36 = _create_var_string(2, "PMPLAYER_CORE_PC_MINUS_VALUE", round(absf(fVar31)));
	}
	if (fVar31 != 0f)
	{
		func_235(iVar35, _create_var_string(2, "PMPLAYER_CORE_DRAIN_RATE"), sVar36, 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
		iVar35++;
	}
	if (fVar32 < 0f)
	{
		sVar36 = _create_var_string(2, "PMPLAYER_CORE_PC_PLUS_VALUE", round(absf(fVar32)));
	}
	else if (fVar32 > 0f)
	{
		sVar36 = _create_var_string(2, "PMPLAYER_CORE_PC_MINUS_VALUE", round(absf(fVar32)));
	}
	if (fVar32 != 0f)
	{
		func_235(iVar35, _create_var_string(2, "PMPLAYER_DRAIN_RATE"), sVar36, 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
		iVar35++;
	}
	if (fVar33 > 0f)
	{
		sVar36 = _create_var_string(2, "PMPLAYER_CORE_PC_PLUS_VALUE", round(absf(fVar33)));
	}
	else if (fVar33 < 0f)
	{
		sVar36 = _create_var_string(2, "PMPLAYER_CORE_PC_MINUS_VALUE", round(absf(fVar33)));
	}
	if (fVar33 != 0f)
	{
		func_235(iVar35, _create_var_string(2, "PMPLAYER_REGEN_RATE"), sVar36, 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
		iVar35++;
	}
}

void func_277()
{
	if (func_170(986998820, &iVar0))
	{
		Var4.f_1 = 20;
		_item_database_fillout_item_effects_ids(iVar0, &Var4);
		iVar33 = 0;
		while (iVar33 < Var4)
		{
			_item_database_fillout_item_effects_id_info(&(Var4.f_1[iVar33]), &Var26);
			switch (Var26.f_1)
			{
				case 2086291460:
					iVar1 = (iVar1 + floor((IntToFloat(Var26.f_2) * 0.01f)));
					break;
				case -1620444701:
					iVar2 = (iVar2 + floor((IntToFloat(Var26.f_2) * 0.01f)));
					break;
				case -845587290:
					fVar3 = (fVar3 + Var26.f_5);
					break;
			}
			iVar33++;
		}
		func_235(0, _create_var_string(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_ACCELERATION"), _create_var_string(2, "PMPLAYER_CORE_PLUS_VALUE", iVar1), 0, 0, 0, 0, 0, 0, 0, 0);
		func_235(1, _create_var_string(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_SPEED"), _create_var_string(2, "PMPLAYER_CORE_PLUS_VALUE", iVar2), 0, 0, 0, 0, 0, 0, 0, 0);
		if (fVar3 <= 0f)
		{
			func_235(2, _create_var_string(2, "PMPLAYER_DRAIN_RATE"), _create_var_string(2, "PMPLAYER_CORE_PC_PLUS_VALUE", round(fVar3)), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
		}
		else
		{
			func_235(2, _create_var_string(2, "PMPLAYER_DRAIN_RATE"), _create_var_string(2, "PMPLAYER_CORE_PC_MINUS_VALUE", round(absf(fVar3))), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
		}
	}
}

void func_278(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	IntToString(&cVar0, iParam1, 32);
	uVar4 = _databinding_add_data_container(uParam0->f_158, &cVar0);
	_databinding_add_data_string(uVar4, "labelText", sParam2);
	_databinding_add_data_bool(uVar4, "isComplete", bParam3);
	_databinding_insert_ui_item_to_list_from_context_string_alias(uParam0->f_160, iParam1, "story_checklist_item", uVar4);
}

int func_279(float fParam0)
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

int func_280(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_281(int iParam0)
{
	iParam0 = func_280(iParam0);
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

bool func_282(int iParam0)
{
	iParam0 = func_280(iParam0);
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

float func_283(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	if (is_entity_dead(iParam0))
	{
		return 0f;
	}
	if (is_ped_injured(iParam0))
	{
		return 0f;
	}
	if (is_ped_in_writhe(iParam0))
	{
		return 0f;
	}
	uVar0 = _0x42688e94e96fd9b4(iParam0, 3, 0);
	return uVar0;
}

bool func_284(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		iVar5 = func_334(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_432(iParam0);
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

struct<4> func_285()
{
	Var0 = { func_440(0) };
	return func_401(856287005, Var0, -218846335, 0);
}

int func_286(struct<4> Param0, int iParam4, int iParam5)
{
	Var0.f_9 = -1591664384;
	if (func_404(Param0, iParam4, &Var0, iParam5))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_287(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_288(int iParam0)
{
	if (!func_287(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

int func_289()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_290(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_291(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_441(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_289())
	{
		return -1;
	}
	iVar0 = func_290(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_442(iVar1, 0);
	func_443(iVar1, 0);
	func_444(iVar1, 0);
	func_445(iVar1, 0);
	func_446(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_447(iVar1, iParam4);
	}
	return iVar1;
}

void func_292(int iParam0)
{
	if (does_entity_exist(player_ped_id()))
	{
		if (iParam0 == 1)
		{
			decor_set_bool(player_ped_id(), "Inspecting_Item", true);
		}
		else if (decor_exist_on(player_ped_id(), "Inspecting_Item"))
		{
			decor_remove(player_ped_id(), "Inspecting_Item");
		}
	}
}

void func_293(int iParam0)
{
	func_198(iParam0, 1, 1, -142743235, 1);
	iVar34 = func_448(iParam0, &uVar18);
	func_449(iParam0, &uVar18, &iVar34, 1);
	if (func_450() == -2125499975)
	{
		iVar38 = 2020890174;
	}
	else
	{
		iVar38 = 1105329772;
	}
	func_451(iParam0, &(Global_26796.f_627.f_121.f_20));
	func_452(iParam0, 1, 1);
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		func_198(&(uVar18[iVar36]), 1, 1, -142743235, 1);
		switch (func_334(&(uVar18[iVar36])))
		{
			case -2061583405:
				func_451(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_21));
				break;
			case 81053684:
				func_451(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_23));
				break;
			case -525676072:
				func_451(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_22));
				break;
			case -1719060085:
				func_451(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_24));
				break;
			case -413129408:
				func_451(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_25));
				break;
		}
		func_452(&(uVar18[iVar36]), 1, 1);
		iVar0[iVar36] = func_454(func_453(&(uVar18[iVar36])), 1);
		iVar36++;
	}
	func_455(&(Global_1946804->f_1616));
	func_456(&(Global_1946804->f_1616), iVar38, &uVar39, 1, 0, 0, 0);
	*Global_1946804->f_1616.f_1[8] = { func_457(8, 0) };
	*Global_1946804->f_1616.f_1[9] = { func_457(9, 0) };
	*Global_1946804->f_1616.f_1[0] = { func_457(0, 0) };
	*Global_1946804->f_1616.f_1[2] = { func_457(2, 0) };
	*Global_1946804->f_1616.f_1[3] = { func_457(3, 0) };
	*Global_1946804->f_1616.f_1[1] = { func_457(1, 0) };
	*Global_1946804->f_1616.f_1[5] = { func_457(5, 0) };
	*Global_1946804->f_1616.f_1[6] = { func_457(6, 0) };
	*Global_1946804->f_1616.f_1[7] = { func_457(7, 0) };
	iVar35 = 0;
	while (iVar35 < 5)
	{
		iVar36 = 0;
		while (iVar36 < iVar34)
		{
			if (&uVar18[iVar36] == func_458(&(iVar0[iVar36]), iVar35))
			{
				func_452(func_459(iVar35), 1, 1);
				func_460(iVar35);
				if (iVar35 == 0)
				{
					bVar17 = true;
					iVar37 = 0;
					while (iVar37 < 39)
					{
						if (!func_461(Global_1946804->f_1616.f_1[iVar37], 2))
						{
						}
						else
						{
							func_462(Global_1946804->f_1616.f_1[iVar37], iVar37, 0);
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
	if ((bVar16 || bVar17) || Global_40.f_7729 == func_463(iParam0))
	{
		if (!func_464(8))
		{
			if (func_450() == -2125499975)
			{
				if (bVar17)
				{
					func_456(&(Global_1946804->f_1616), 1661121390, &uVar39, 0, 1, 0, -2125499975);
					Global_1946804->f_1616 = 166243423;
					func_465(&(Global_1946804->f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						func_466(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == func_463(iParam0))
				{
					Global_1905941 = 6;
				}
			}
			else
			{
				if (bVar17)
				{
					func_456(&(Global_1946804->f_1616), -361635024, &uVar39, 0, 1, 0, 1160113249);
					Global_1946804->f_1616 = 166243423;
					func_465(&(Global_1946804->f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						func_466(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == func_463(iParam0))
				{
					Global_1905941 = 62;
				}
			}
			if (bVar16 || Global_40.f_7729 == func_463(iParam0))
			{
				if (is_entity_dead(get_player_ped(player_id())))
				{
					func_467(Global_40.f_7729, 4096);
					func_468(&Global_1905941, 4096);
					Global_40.f_7729 = &Global_1905941;
				}
				else
				{
					func_469(get_player_ped(player_id()), &Global_1905941, 1, 0, 0);
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
	func_456(&(Global_1946804->f_1616), 1661121390, &uVar39, 0, 1, 0, -2125499975);
	func_456(&(Global_1946804->f_1616), 2020890174, &uVar39, 1, 0, 0, -2125499975);
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

void func_294(int iParam0)
{
	func_198(iParam0, 1, 1, -142743235, 1);
	if (func_470(iParam0))
	{
		func_452(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_454(func_453(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_471(-2124052603);
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = &Global_1946804->f_57[iVar1];
		*Global_1946804->f_1616.f_1[iVar1] = { vVar4 };
		Global_1946804->f_1616.f_1[iVar1]->f_2 = (Global_1946804->f_1497.f_1[iVar1]->f_2 || Global_1946804->f_1378.f_1[iVar1]->f_2);
		iVar1++;
	}
	if (func_450() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_456(&(Global_1946804->f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_456(&(Global_1946804->f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	*Global_1946804->f_1616.f_1[8] = { func_457(8, 0) };
	*Global_1946804->f_1616.f_1[9] = { func_457(9, 0) };
	*Global_1946804->f_1616.f_1[0] = { func_457(0, 0) };
	*Global_1946804->f_1616.f_1[2] = { func_457(2, 0) };
	*Global_1946804->f_1616.f_1[3] = { func_457(3, 0) };
	*Global_1946804->f_1616.f_1[1] = { func_457(1, 0) };
	*Global_1946804->f_1616.f_1[5] = { func_457(5, 0) };
	*Global_1946804->f_1616.f_1[6] = { func_457(6, 0) };
	*Global_1946804->f_1616.f_1[7] = { func_457(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_458(iVar8, iVar0))
				{
					func_462(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_458(iVar8, iVar0))
		{
			func_462(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
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

int func_295(int iParam0, struct<4> Param1)
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
			if (func_287(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (func_472(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					func_473(&uVar7);
					if (func_402(Var3, &uVar7, &Var12, -1, -142743235, 0, 0))
					{
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

struct<6> func_296()
{
	if (func_170(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_170(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_170(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_170(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_170(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_170(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

int func_297(var uParam0)
{
	return uParam0->f_1;
}

void func_298(var uParam0)
{
	func_474(uParam0);
	func_476(uParam0, func_475(-1346384396));
	func_477(uParam0, func_475(-712836614));
	func_478(uParam0, func_475(-1629133289));
	func_479(uParam0, func_475(1302066700));
	func_480(uParam0, func_475(599669344));
	func_481(uParam0, func_475(-1555511632));
}

void func_299(struct<6> Param0)
{
	if (!func_482(Param0.f_4, 1))
	{
	}
	if (!func_482(Param0, 1))
	{
	}
	if (!func_482(Param0.f_2, 1))
	{
	}
	if (!func_482(Param0.f_5, 1))
	{
	}
	if (!func_482(Param0.f_3, 1))
	{
	}
	if (!func_482(Param0.f_1, 1))
	{
	}
}

int func_300(int iParam0, int iParam1, int iParam2)
{
	*iParam0 = 0;
	*iParam1 = 0;
	*iParam2 = 0;
	if (func_35())
	{
		if (func_483())
		{
			bVar0 = false;
			if (!func_130((*Global_1835011)[15]->f_1, 1) && !func_205(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*iParam0 = func_484();
				*iParam1 = func_485();
				*iParam2 = func_486();
				return 1;
			}
			else
			{
				*iParam0 = func_487();
				*iParam1 = func_488();
				*iParam2 = func_489();
				return 1;
			}
		}
		else if (func_1())
		{
			if (!func_130((*Global_1835011)[60]->f_1, 1))
			{
				*iParam0 = func_490();
				*iParam1 = func_491();
				*iParam2 = func_492();
				return 1;
			}
			else
			{
				*iParam0 = func_493();
				*iParam1 = func_494();
				*iParam2 = func_495();
				return 1;
			}
		}
	}
	else if (func_483())
	{
		*iParam0 = func_496();
		*iParam1 = func_497();
		*iParam2 = func_498();
		return 1;
	}
	else if (func_1())
	{
		*iParam0 = func_499();
		*iParam1 = func_500();
		*iParam2 = func_501();
		return 1;
	}
	return 0;
}

int func_301(int iParam0)
{
	iParam0 = func_280(iParam0);
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

void func_302(int iParam0, int iParam1)
{
	iParam0 = func_280(iParam0);
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

void func_303(int iParam0, int iParam1)
{
	iParam0 = func_280(iParam0);
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

void func_304(int iParam0, int iParam1)
{
	iParam0 = func_280(iParam0);
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

void func_305(int iParam0, int iParam1)
{
	iParam0 = func_280(iParam0);
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

bool func_306(int iParam0)
{
	iVar0 = func_502(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1 = { func_440(0) };
	if (func_503(&Var1, iVar0, 0) > 0)
	{
		return true;
	}
	return false;
}

int func_307(int iParam0)
{
	Var0.f_9 = -1591664384;
	if (!func_504(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { Var0.f_5 };
	Var29.f_4 = Var0.f_9;
	if (!func_402(Var0.f_4, &Var0, &Var29, -1, -142743235, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_308(int iParam0)
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

int func_309(int iParam0, int iParam1)
{
	if (!func_287(iParam1, 0))
	{
		return 0;
	}
	if (!func_505(iParam1))
	{
		return 0;
	}
	if (func_306(iParam0))
	{
		return 0;
	}
	iVar0 = func_502(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_440(0) };
	Var1.f_4 = iVar0;
	if (!func_405(iParam1, &uVar6, &Var1, 1, 752097756, 0))
	{
		return 0;
	}
	return 1;
}

bool func_310(int iParam0, struct<4> Param1, bool bParam5)
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
			if (func_287(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (func_472(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					func_473(&Var7);
					if (func_405(Var3, &Var7, &Var12, 1, 752097756, 1))
					{
						if (bParam5)
						{
							func_406(Var7, 1);
						}
					}
				}
			}
		}
		iVar0++;
	}
	return true;
}

void func_311(int iParam0)
{
	if (!func_204(iParam0))
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

bool func_312(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_23() == -1)
	{
		if (func_506(iParam0) && func_507(iParam0))
		{
			func_508(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_313(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_509(iParam0, iParam1);
	Var0 = { func_398(iParam0, 0, 1) };
	iVar5 = func_510(iParam0, &Var0, 0, 0);
	iVar6 = func_511(iParam0, 0);
	if ((iVar5 > 1 && !func_54()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_331(iParam0, -2051813666))
		{
			func_321(583, 1);
		}
		else
		{
			func_321(582, 0);
		}
	}
	if (func_512(iParam0, &Var0, *iParam1, 0, 0))
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

void func_314(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_513(iParam0, -949239683))
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

bool func_315(int iParam0)
{
	if (func_23() != -1)
	{
		return false;
	}
	return func_316(iParam0) != 0;
}

int func_316(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_514())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_515(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_317(int iParam0)
{
	return _0x6052b4de6657684f(iParam0);
}

int func_318(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_514())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_317(iVar0))
		{
			if (func_193(func_515(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_319(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
	func_516(48);
	func_517(0, -1);
}

bool func_320(int iParam0)
{
	if (func_23() != -1)
	{
		return false;
	}
	return func_130((*Global_1347702)[iParam0]->f_15, 1);
}

void func_321(int iParam0, bool bParam1)
{
	func_518(iParam0, &iVar0, &iVar1);
	if (!func_519(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_520(iVar0, iVar1);
}

int func_322(int iParam0)
{
	return _0x62cab7db62ead434(-2076669067, iParam0);
}

int func_323(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

bool func_324(int iParam0)
{
	if (func_23() != -1)
	{
		return false;
	}
	return func_130((*Global_1835011)[iParam0]->f_1, 1);
}

bool func_325(int iParam0)
{
	if (func_23() != -1)
	{
		return false;
	}
	if (!func_101(iParam0))
	{
		return false;
	}
	return func_194((*Global_1347702)[iParam0]->f_15);
}

int func_326()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_193(func_521(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_327(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_35() && (func_325(38) || func_320(38)))
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
			if (func_35() && (func_325(39) || func_320(39)))
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
			iVar9 = func_522(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		case 41:
			if (func_35() && (func_325(41) || func_320(41)))
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
			if (func_35() && (func_325(49) || func_320(49)))
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
			iVar9 = func_522(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_523(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar12 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar12 = get_hash_key("toast_log_blips");
	}
	if (func_524(iParam0, iVar13, iVar14))
	{
	}
	if (func_525(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_526(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_527(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_528(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_529(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_328(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_329(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_35() && (func_325(38) || func_320(38)))
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
			if (func_35() && (func_325(39) || func_320(39)))
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
			if (func_35() && (func_325(49) || func_320(49)))
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
		if (func_35() && (func_325(38) || func_320(38)))
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
			func_530(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_530(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_532(_create_var_string(2, sVar0), _create_var_string(2, func_531(func_323(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_530(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_530(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_35() && (func_325(39) || func_320(39)))
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
			func_530(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_530(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_35() && (func_325(49) || func_320(49)))
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
			func_530(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_530(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_530(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_530(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_330(int iParam0)
{
	if (!func_287(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_331(int iParam0, int iParam1)
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

bool func_332(int iParam0, int iParam1)
{
	if (!func_287(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

void func_333(int iParam0)
{
	if (!func_407(iParam0))
	{
		return;
	}
	func_533(iParam0);
	func_534(iParam0);
}

int func_334(int iParam0)
{
	if (!func_287(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_335(int iParam0, bool bParam1)
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
	if (func_287(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_535(iVar0) || func_536(iVar0))
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

int func_336(int iParam0, bool bParam1)
{
	if (!func_287(iParam0, 0))
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

bool func_337(bool bParam0)
{
	if (func_23() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_411(bParam0));
}

bool func_338(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_340(iParam0))
	{
		return false;
	}
	if (!func_337(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_339(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_336(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_23() == -1)
		{
			func_200(iVar0);
			if (iParam1 == 1248274121)
			{
				func_537(iVar0);
			}
		}
		if (!func_512(iParam0, &uVar1, 1, 0, 0))
		{
			func_508(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_538(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_201(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_201(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_201(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_melee(iVar0))
			{
				if (iVar0 == 494733111 && !func_1())
				{
					return false;
				}
				if (_0x2c83212a7aa51d3d(iParam0))
				{
				}
				else if (!func_539(iVar0))
				{
					func_201(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_201(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_540(Global_35, 2, 0, 1);
				if ((((func_204(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_205(24)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_204(iVar7) && func_205(24))
				{
					if (!func_201(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_201(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_201(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_321(480, 1);
	}
	return true;
}

bool func_340(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_341(int iParam0, int iParam1, int iParam2)
{
	if (!func_340(iParam0))
	{
		return false;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_35, iParam0);
	if (func_204(iVar4))
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
	if (func_193(611073244, 1, 0) && iParam2 == -897553835)
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
		func_372(func_541(iParam0), func_288(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_23() == -1)
		{
			if (func_130((*Global_1835011)[14]->f_1, 1))
			{
				func_321(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_337(0))
	{
		if (func_338(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_377(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_342(int iParam0)
{
	if ((iParam0 == -615217896 && !func_138()) || iParam0 != -615217896)
	{
		if (func_542(Global_35, iParam0, &uVar0))
		{
			func_358(player_ped_id(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_364();
			break;
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_364();
			break;
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_364();
			break;
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_362();
			break;
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_360();
			break;
	}
}

void func_343(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_360();
			break;
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_361();
			break;
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_362();
			break;
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_363();
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
			func_364();
			break;
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_543();
			break;
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_544();
			break;
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

void func_344(int iParam0)
{
	bVar0 = func_331(iParam0, -2017733358);
	if (func_545() < 3)
	{
		if (bVar0)
		{
			if (func_547(func_546(iParam0), iParam0))
			{
				func_372(79, func_288(func_546(iParam0)), 1);
			}
			else
			{
				func_372(78, func_288(func_546(iParam0)), 1);
			}
		}
		else
		{
			func_372(80, func_288(func_548(iParam0)), 1);
		}
	}
}

bool func_345()
{
	if (((((func_549(839908568, 400) || func_549(-1134030454, 400)) || func_549(623353496, 400)) || func_549(-344413337, 400)) || func_549(-1664948962, 400)) || func_549(1795228059, 400))
	{
		return true;
	}
	return false;
}

int func_346(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	iVar0 = func_550(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_387(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_388(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_347(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_327(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_329(51, 0, 0, 0, 0, -1, 0);
			func_551(8192);
			break;
		case 581047644:
			func_327(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_329(51, 0, 0, 0, 0, -1, 0);
			func_551(524288);
			break;
		case -644199619:
			func_327(39, 0, 0, 0, 0, 0, 1, 0);
			func_329(39, 0, 0, 0, 0, -1, 0);
			func_552(16);
			break;
		case 684296857:
			func_327(41, 0, 0, 0, 0, 0, 1, 0);
			func_329(41, 0, 0, 0, 0, -1, 0);
			func_553(8);
			break;
		case 466137807:
			func_327(49, 0, 0, 0, 0, 0, 1, 0);
			func_329(49, 0, 0, 0, 0, -1, 0);
			func_554(16);
			break;
		case -1087522507:
			func_327(43, 0, 0, -1791518714, func_555(1), 0, -1, 0);
			func_556(1);
			break;
		case -405829000:
			func_327(43, 0, 0, -2087881550, func_555(2), 0, -1, 0);
			func_556(2);
			break;
		case 378660860:
			func_327(43, 0, 0, 1908068621, func_555(4), 0, -1, 0);
			func_556(4);
			break;
		case 1566111097:
			func_327(43, 0, 0, 1611247019, func_555(8), 0, -1, 0);
			func_556(8);
			break;
		case 1276007140:
			func_327(43, 0, 0, 1319635688, func_555(16), 0, -1, 0);
			func_556(16);
			break;
	}
}

void func_348(int iParam0)
{
	if (func_557() == 1)
	{
		if (func_320(39))
		{
			func_321(342, 0);
		}
		else
		{
			func_321(343, 0);
			func_552(1);
		}
	}
	if (func_557() >= 30)
	{
		func_321(344, 0);
	}
	func_327(39, 0, 0, 0, 0, 0, -1, 0);
	func_329(39, 0, 0, func_557(), 30, 1, 0);
}

void func_349(int iParam0)
{
	if (func_558() == 1)
	{
		if (func_320(49))
		{
			func_321(409, 0);
		}
		else
		{
			func_321(410, 0);
			func_554(1);
		}
	}
	if (func_558() >= 10)
	{
		func_321(411, 0);
	}
	func_327(49, 0, 0, 0, 0, 0, -1, 0);
	func_329(49, 0, 0, func_558(), 10, 1, 0);
}

void func_350(int iParam0)
{
	switch (iParam0)
	{
		case 1369162587:
			_0x3ea62e56f386c997(-949689219, 1);
			func_321(437, 0);
			func_321(440, 0);
			func_559(-949689219, 444160793, &sVar0, 1, 0, 0);
			func_327(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_329(51, 0, 0, sVar0, func_522(-949689219, 20), 1, 0);
			func_551(1);
			func_560(-748969569, 0, 0);
			break;
		case 1610047510:
			_0x3ea62e56f386c997(-1248968496, 1);
			func_559(-1248968496, -1969404854, &sVar0, 1, 0, 0);
			func_327(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_329(51, 0, 0, sVar0, func_522(-1248968496, 20), 1, 0);
			func_551(8);
			break;
		case 1317879106:
			_0x3ea62e56f386c997(1706369307, 1);
			func_559(1706369307, -832850511, &sVar0, 1, 0, 0);
			func_327(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_329(51, 0, 0, sVar0, func_522(1706369307, 20), 1, 0);
			func_551(64);
			break;
		case 1062444751:
			_0x3ea62e56f386c997(1520110311, 1);
			func_559(1520110311, -100913452, &sVar0, 1, 0, 0);
			func_327(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_329(51, 0, 0, sVar0, func_522(1520110311, 20), 1, 0);
			func_551(512);
			break;
		case 754186760:
			_0x3ea62e56f386c997(-1992824800, 1);
			func_321(438, 0);
			func_559(-1992824800, 905173572, &sVar0, 1, 0, 0);
			func_327(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_329(51, 0, 0, sVar0, func_522(-1992824800, 20), 1, 0);
			func_551(32768);
			break;
		default:
			func_321(439, 0);
			break;
	}
}

void func_351()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

void func_352(int iParam0, int iParam1)
{
	iVar1 = 0;
	if (func_23() == -1)
	{
		if (!func_320(43))
		{
			if (iParam0 == 281887510)
			{
				func_321(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_321(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_321(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_321(400, 0);
			}
		}
		else if (func_331(iParam0, 412399755))
		{
			func_561(-1791518714);
			if (func_562() == 0)
			{
				func_517(0, 10);
				iVar1 = func_563(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_564(iParam0) < func_565(iParam0))
					{
						func_327(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_329(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_320(44))
		{
			if (iParam0 == -222563712)
			{
				func_321(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_321(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_321(401, 0);
			}
		}
		else if (func_331(iParam0, 709057512))
		{
			func_561(-2087881550);
			if (func_562() == 1)
			{
				func_517(0, 10);
				iVar1 = func_563(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_564(iParam0) < func_565(iParam0))
					{
						func_327(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_329(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_320(45))
		{
			if (iParam0 == 2116770557)
			{
				func_321(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_321(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_321(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_321(398, 0);
			}
		}
		else if (func_331(iParam0, -1478961327))
		{
			func_561(1908068621);
			if (func_562() == 2)
			{
				func_517(0, 10);
				iVar1 = func_563(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_566(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
					{
						func_567(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
						func_516(48);
					}
					if (func_564(iParam0) < func_565(iParam0))
					{
						func_327(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_329(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_564(iParam0) < func_565(iParam0))
					{
						func_327(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_329(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_320(46))
		{
			if (iParam0 == 2085530337)
			{
				func_321(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_321(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_321(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_321(406, 0);
			}
		}
		else if (func_331(iParam0, -1238404098))
		{
			func_561(1611247019);
			if (func_562() == 3)
			{
				func_517(0, 10);
				iVar1 = func_563(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_564(iParam0) < func_565(iParam0))
					{
						func_327(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_329(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_320(47))
		{
			if (iParam0 == -1521783510)
			{
				func_321(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_321(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_321(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_321(403, 0);
			}
		}
		else if (func_331(iParam0, 1160548794))
		{
			func_561(1319635688);
			if (func_562() == 4)
			{
				func_517(0, 10);
				iVar1 = func_563(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_564(iParam0) < func_565(iParam0))
					{
						func_327(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_329(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_353(int iParam0)
{
	if (iParam0 == 2116770557)
	{
		if (!func_566(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
		{
			func_567(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
			func_516(48);
		}
	}
}

void func_354(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = _0x126cbebba46693cf(iVar1, 678508515, -1160144609);
		if (func_193(func_568(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_569(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_570(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_355(int iParam0, int iParam1, int iParam2)
{
	if (func_23() == -1)
	{
		if (does_entity_exist(iParam2))
		{
			iVar0 = _0x6f02b5e50511721e(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_346(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_346(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493:
			func_346(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627:
			func_346(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377:
			func_346(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086:
			func_346(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686:
			func_346(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991:
			func_346(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101:
			func_346(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918:
			func_346(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765:
			func_346(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903:
			func_346(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684:
			func_346(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340:
			if (!func_571())
			{
				func_346(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740:
			func_346(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264:
			func_346(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970:
			func_346(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1027115192:
			func_346(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1064332555:
			func_346(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1954478446:
			func_346(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -518592739:
			func_346(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -2010073778:
			func_346(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -700133011:
			func_346(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1415414735:
			func_346(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 2045548742:
			func_346(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 830381058:
			func_346(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_356(int iParam0)
{
	if (func_320(41))
	{
		func_321(363, 0);
	}
	else
	{
		func_321(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_572(-1865241121);
			func_573(-642026005);
			func_574(-642026005);
			func_517(0, 10);
			break;
		case -2108314374:
			func_572(2117142684);
			func_573(-940584364);
			func_574(-940584364);
			func_517(0, 10);
			break;
		case -1193798153:
			func_572(-1409326024);
			func_573(1972645282);
			func_574(1972645282);
			func_517(0, 10);
			break;
		case -787702678:
			func_572(-641744968);
			func_573(1667205433);
			func_574(1667205433);
			func_517(0, 10);
			break;
		case -804542901:
			func_572(-946988203);
			func_573(1362715885);
			func_574(1362715885);
			func_517(0, 10);
			break;
		case -1696275132:
			func_572(-646136018);
			func_573(1053540370);
			func_574(1053540370);
			func_517(0, 10);
			break;
		case -161595323:
			func_572(-955835837);
			func_573(-1100103852);
			func_574(-1100103852);
			func_517(0, 10);
			break;
		case -1114363619:
			func_572(-179276075);
			func_573(-1409869209);
			func_574(-1409869209);
			func_517(0, 10);
			break;
		case -368407134:
			func_572(-492711560);
			func_573(-1760235357);
			func_574(-1760235357);
			func_517(0, 10);
			break;
		case 1997759228:
			func_572(1764383959);
			func_573(-138366827);
			func_574(-138366827);
			func_517(0, 10);
			break;
		case 1265573293:
			func_572(317501533);
			func_573(-1261163843);
			func_574(-1261163843);
			func_517(0, 10);
			break;
		case -1030441283:
			func_572(817753087);
			func_573(-963523016);
			func_574(-963523016);
			func_517(0, 10);
			break;
		case -1490884871:
			func_572(576606016);
			func_573(560825326);
			func_574(560825326);
			func_517(0, 10);
			break;
		case -395458616:
			func_572(814934957);
			func_573(858269539);
			func_574(858269539);
			break;
	}
}

void func_357(int iParam0, int iParam1)
{
	func_575(iParam0, iParam1, &uVar0);
}

int func_358(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_398(iParam1, 1, 0) };
		iParam3 = func_576(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_577(iParam1, iParam2, func_454(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_578(1, (func_23() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_454(iParam3, 1)])
			{
				func_579(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_580(32768) && iParam1 != &Global_1946804->f_57[func_454(iParam3, 1)])
			{
				func_581();
				func_579(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_579(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_582(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_579(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_583(0);
			func_584(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_579(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_359(int iParam0, bool bParam1)
{
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_540(get_player_ped(get_player_index()), 2, 1, 0);
	iVar19 = func_540(get_player_ped(get_player_index()), 3, 1, 0);
	if (func_394("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_395(&Var3, iVar2, iVar0, iVar1))
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
						func_397(iVar0);
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

void func_360()
{
	_0x11a7ff918ef6bc66(player_id(), (1f - Global_40.f_11095.f_60));
}

void func_361()
{
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	_0x497a6539bb0e8787(player_id(), (1f - fVar0), (1f - fVar1));
}

void func_362()
{
	_0xe0d6c2a146a5c993(player_id(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_363()
{
	_0xb427911ea6dffef3(player_id(), (1f - Global_40.f_11095.f_63));
}

void func_364()
{
	func_13();
	func_12();
	func_10();
}

void func_365(int iParam0, int iParam1, bool bParam2)
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

void func_366(int iParam0, bool bParam1)
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
	func_530(_create_var_string(2, sVar1), _create_var_string(2, sVar2), get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_TREASURE_HUNTER"), 1433015236, _create_var_string(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_367(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_368(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_369(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_370(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_371(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

void func_372(int iParam0, int iParam1, bool bParam2)
{
	func_518(iParam0, &iVar0, &iVar1);
	if (!func_519(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_585(iParam0, 1024))
	{
		return;
	}
	func_520(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 2;
}

void func_373(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_518(iParam0, &iVar0, &iVar1);
	if (!func_519(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_585(iParam0, 1024))
	{
		return;
	}
	func_520(iVar0, iVar1);
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

int func_374()
{
	iVar0 = _0x5461c821d00fe15a(-2076669067, 0);
	if (iVar0 == func_514())
	{
		return func_375();
	}
	iVar4 = (func_514() - iVar0);
	iVar5 = get_random_int_in_range(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_514())
	{
		iVar1 = _0x126cbebba46693cf(iVar2, -2076669067, 0);
		if (!func_586(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_515(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_375()
{
	iVar0 = get_random_int_in_range(0, func_514());
	return func_515(_0x126cbebba46693cf(iVar0, -2076669067, 0));
}

void func_376(int iParam0)
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

bool func_377(int iParam0, int iParam1, int iParam2)
{
	if (!func_287(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_398(iParam0, 0, 1) };
	Var5 = { func_401(iParam0, Var0, Var0.f_4, 0) };
	return func_405(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_378(int iParam0)
{
	if (func_23() != -1)
	{
		return;
	}
	switch (func_334(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_587(81053684, 0) <= 0)
			{
				func_579(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_579(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_463(iParam0);
			if (func_588(iVar0))
			{
				func_589(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_579(30, iParam0, 0, 0, 0);
			}
			if (func_450() == -2125499975 || func_450() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_579(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_450() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_579(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_590(-525676072, 0))
			{
				if (func_591(-525676072, &iVar1))
				{
					func_579(33, iVar1, 0, 0, 0);
				}
			}
			func_579(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_592(99217379))
		{
			func_358(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_333(24);
		if (func_359(&iVar2, 0))
		{
			func_201(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_379(int iParam0)
{
	if (func_331(iParam0, 943695443))
	{
		func_593(0, iParam0);
	}
	else if (func_331(iParam0, -2096528786))
	{
		func_593(1, iParam0);
	}
	else if (func_331(iParam0, -1094167013))
	{
		func_593(2, iParam0);
	}
	else if (func_331(iParam0, 1936654645))
	{
		func_593(3, iParam0);
	}
	else if (func_331(iParam0, 1306489306))
	{
		func_593(4, iParam0);
	}
	else if (func_331(iParam0, 435762317))
	{
		func_593(5, iParam0);
	}
	else if (func_331(iParam0, 1259363210))
	{
		func_593(6, iParam0);
	}
	else if (func_331(iParam0, 881398259))
	{
		func_593(7, iParam0);
	}
	else if (func_331(iParam0, -541549214))
	{
		func_593(8, iParam0);
	}
	else if (func_331(iParam0, 130796156))
	{
		func_593(-1, iParam0);
	}
}

int func_380(int iParam0, int iParam1)
{
	Var4.f_1 = 10;
	func_594(&Var4, 1356624740);
	return func_595(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_381(int iParam0)
{
	if (!func_287(iParam0, 0))
	{
		return Var0;
	}
	if (func_331(iParam0, -305066475))
	{
		if (func_23() == -1)
		{
			if (func_331(iParam0, -537818634))
			{
				return func_62(189951448);
			}
			else
			{
				return func_62(1176172851);
			}
		}
	}
	else if (func_331(iParam0, -537818634))
	{
		return func_62(-963660207);
	}
	if (func_331(iParam0, 2084895747))
	{
		return func_62(1694039471);
	}
	return Var2;
}

void func_382(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_23() == -1)
			{
				if (func_130((*Global_1835011)[4]->f_1, 1))
				{
					func_321(109, 1);
				}
			}
			break;
	}
}

void func_383(int iParam0, char* sParam1)
{
	sVar0 = func_597(func_596(0));
	func_599(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_598(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_384(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_287(iParam0, 0))
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
	if (!func_600())
	{
		func_601(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_139(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_139(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_332(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_330(iParam0);
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
	else if (!func_602(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	sVar15 = func_603(_create_var_string(10, &cVar2, _create_var_string(0, func_288(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_331(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_288(iParam0));
	}
	func_599(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

void func_385(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_604(1) < iParam0)
	{
		iParam0 = func_604(1);
	}
	_money_decrement_cash_balance(iParam0);
	Var0 = { func_62(1644987397) };
	_0xbd861ae8a5181ed7(&Var0, iParam0);
}

void func_386(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_599(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

void func_387(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_599(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_388(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_605())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_599(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_606(iVar0);
			func_607(iVar0, 0, 0);
		}
		func_599(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		_money_increment_cash_balance(iVar1, iParam4);
		func_142(func_62(1644987397), iVar1);
	}
}

bool func_389(int iParam0, int iParam1)
{
	if (!func_287(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_390(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_394("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_395(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_204(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_397(iVar1);
				return true;
			}
			iVar3++;
		}
		func_397(iVar1);
	}
	return false;
}

int func_390(int iParam0, int iParam1)
{
	if (!func_287(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_330(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_331(iParam0, 1399091007))
	{
		func_575(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_391(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	Var0 = { func_608(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_610(&Var0, func_609(0));
	}
	if (!func_611(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_395(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_402(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_397(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_392(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_287(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_398(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_612(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_401(iParam0, Var0, Var0.f_4, bParam4) };
	return func_402(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_393(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_331(iParam0, 606799272))
		{
			func_613(iParam0, iParam1);
		}
		if (func_331(iParam0, -1112814642) && func_331(iParam0, -1697809989))
		{
			func_354(iParam0, iParam1, 1, 0);
		}
	}
}

bool func_394(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_411(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_395(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_396(int iParam0, var uParam1, int iParam2)
{
	if (func_614(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

int func_397(int iParam0)
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

struct<5> func_398(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_440(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_330(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_401(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_609(bParam1) };
			if (bParam2 && func_615(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_400(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_400(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_396(iParam0, &Var5, 1728382685))
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
			Var0 = { func_616(bParam1) };
			switch (func_334(iParam0))
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
			if (func_617(iParam0, -1823706425))
			{
				Var0 = { func_401(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_617(iParam0, -1483207246))
			{
				Var0 = { func_401(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_618(Var0, &Var27, bParam1, 0))
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

int func_399(int iParam0, int iParam1)
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

bool func_400(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_472(iParam0, *uParam1, iParam2, bParam3) > 0;
}

struct<4> func_401(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_287(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_411(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_402(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_619(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_618(*uParam1, &Var0, bParam6, 0))
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
	if (!func_337(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_411(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_403(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_122(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

bool func_404(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x22e590f108289a9d(func_411(bParam6), &uParam0, iParam4, &Var0))
	{
		return false;
	}
	if (!func_618(Var0, uParam5, bParam6, 0))
	{
		return false;
	}
	return true;
}

bool func_405(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_287(iParam0, 0))
	{
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return false;
	}
	if (func_512(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return false;
	}
	if (!func_337(0))
	{
		return false;
	}
	if (!_0xcb5d11f9508a928d(func_411(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_406(struct<4> Param0, int iParam4)
{
	if (!func_337(0))
	{
		return func_620(Param0, iParam4, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_618(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!_0x734311e2852760d0(func_411(0), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_407(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_408(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

int func_409(struct<2> Param0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
{
	if (Param0 < fParam3)
	{
		if (Param0.f_1 < fParam4)
		{
			return (iParam5 + iParam6);
		}
		else
		{
			return iParam5;
		}
	}
	if (Param0.f_1 < fParam4)
	{
		return (iParam5 + iParam6) + 1;
	}
	return iParam5 + 1;
}

int func_410(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_608(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_610(&Var0, func_609(0));
	}
	if (!func_611(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_397(iVar14);
	return uVar15;
}

int func_411(bool bParam0)
{
	if (func_23() == -1)
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

void func_412(int iParam0, int iParam1, int iParam2)
{
	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_23() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	_0xd5910ecf81a2278c(iParam0, iParam1, iParam2, &vVar0);
}

int func_413(int iParam0)
{
	switch (func_39(iParam0))
	{
		case 1:
			iVar0 = func_100(iParam0);
			return func_621(iVar0);
		case 8:
			iVar1 = func_100(iParam0);
			if (func_102((*Global_1347702)[iVar1]->f_12, 1))
			{
				return func_622(iVar1);
			}
			break;
	}
	return -1;
}

int func_414()
{
	if (!func_130((*Global_1835011)[4]->f_1, 1))
	{
		return 0;
	}
	else if (!func_130((*Global_1347702)[66]->f_15, 1))
	{
		return 1;
	}
	else if (!func_130((*Global_1347702)[67]->f_15, 1))
	{
		return 2;
	}
	else if (!func_130((*Global_1835011)[38]->f_1, 1))
	{
		return 3;
	}
	else if (!func_130((*Global_1347702)[68]->f_15, 1))
	{
		return 4;
	}
	else if (!func_130((*Global_1835011)[59]->f_1, 1))
	{
		return 5;
	}
	else if (!func_130((*Global_1835011)[67]->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_415(int iParam0, int iParam1)
{
	if (!func_15(iParam0))
	{
		return;
	}
	func_442(iParam0, iParam1);
}

void func_416(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_114(Global_1935630, 4194304);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_52(Global_1935630, 4194304);
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

int func_417(bool bParam0)
{
	if (!bParam0 && func_623(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_418(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_419(int iParam0, bool bParam1)
{
	if (func_23() != -1)
	{
		return;
	}
	if (func_38(0) != iParam0)
	{
		return;
	}
	if (func_624(iParam0))
	{
		if (bParam1)
		{
			func_625(-525676072);
		}
		else
		{
			func_626(-525676072);
		}
	}
}

int func_420(int iParam0)
{
	return func_628(func_627(iParam0));
}

int func_421(int iParam0)
{
	return shift_right(iParam0, 15) & 16383;
}

int func_422(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 854119837;
		case 1:
			return -1292544588;
		case 2:
			return -1003325394;
		case 3:
			return -696705861;
		case 4:
			return -335460405;
		case 5:
			return 903797617;
		case 6:
			return 669728650;
		case 7:
			return 1595354593;
		case 8:
			return 1214120047;
		case 9:
			return 655769340;
		case 10:
			return 885316185;
		case 11:
			return -2016706455;
		case 12:
			return -1491419385;
		case 13:
			return 1809565830;
		case 14:
			return 2056119786;
		case 15:
			return -628873767;
		case 16:
			return -405421956;
		case 17:
			return -1108972386;
		case 18:
			return -878376933;
		case 19:
			return 1053716392;
		case 20:
			return 806507056;
		case 21:
			return 1571925350;
		case 22:
			return 1330352282;
		case 23:
			return 975496781;
		default:
			break;
	}
	return 0;
}

char* func_423()
{
	return "pausemenu_player";
}

int func_424()
{
	iVar0 = func_629();
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

char* func_425(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "RPG_Health";
		case 2:
			return "RPG_Stamina";
		case 3:
			return "RPG_Dead_Eye";
		default:
			break;
	}
	return "";
}

char* func_426(int iParam0)
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

int func_427(int iParam0)
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

struct<4> func_428(int iParam0, int iParam1)
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

char* func_429(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

int func_430()
{
	return 0;
}

int func_431()
{
	return 1;
}

int func_432(int iParam0)
{
	if (!func_287(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_334(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return _item_database_get_has_slot_count(iVar0);
}

int func_433(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		iVar0 = func_334(iParam0);
		if (iVar0 != 0)
		{
			if (iParam1 >= 0 && iParam1 < func_432(iParam0))
			{
				if (_item_database_get_has_slot_info(iVar0, iParam1, &uVar1))
				{
					return uVar1;
				}
			}
		}
	}
	return 0;
}

int func_434()
{
	return 5;
}

int func_435()
{
	return 6;
}

int func_436(int iParam0)
{
	if (!is_model_valid(iParam0))
	{
		return 0;
	}
	iVar0 = get_default_attribute_rank(iParam0, func_630());
	return iVar0;
}

char* func_437(int iParam0)
{
	switch (iParam0)
	{
		case -1179079660:
		case 1275638003:
		case 2083573823:
			return "HORSE_CLASS_RACEWORK";
		case -1597490733:
		case -1428527735:
		case 805526368:
		case 2000205872:
			return "HORSE_CLASS_WARWORK";
		case -1882436593:
		case -225011104:
		case -136225010:
			return "HORSE_CLASS_RACEWAR";
	}
	return "HORSE_CLASS_MULTI";
}

char* func_438(int iParam0)
{
	switch (iParam0)
	{
		case -974145463:
			return "BREED_AMERICANPAINT_OVERO";
		case 1432602132:
			return "BREED_AMERICANPAINT_TOBIANO";
		case 92296905:
			return "BREED_AMERICANPAINT_SPLASHEDWHITE";
		case -842044823:
			return "BREED_AMERICANPAINT_GREYOVERO";
		case 1371398552:
			return "BREED_AMERICANSTANDARDBRED_BLACK";
		case -745453539:
			return "BREED_AMERICANSTANDARDBRED_BUCKSKIN";
		case 1583029039:
			return "BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE";
		case -783061276:
			return "BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN";
		case -1322521536:
			return "BREED_ANDALUSIAN_DARKBAY";
		case 1100711204:
			return "BREED_ANDALUSIAN_PERLINO";
		case 728055838:
			return "BREED_ANDALUSIAN_ROSEGRAY";
		case -1782334639:
			return "BREED_APPALOOSA_BLANKET";
		case -1181052732:
			return "BREED_APPALOOSA_LEOPARDBLANKET";
		case -540812301:
			return "BREED_APPALOOSA_FEWSPOTTED_PC";
		case -179102320:
			return "BREED_APPALOOSA_BROWNLEOPARD";
		case -1266863668:
			return "BREED_APPALOOSA_LEOPARD";
		case -2078767648:
			return "BREED_ARABIAN_BLACK";
		case -2055655009:
			return "BREED_ARABIAN_REDCHESTNUT";
		case -1506685618:
			return "BREED_ARABIAN_REDCHESTNUT_PC";
		case -852553462:
			return "BREED_ARABIAN_ROSEGREYBAY";
		case -2105447887:
			return "BREED_ARABIAN_WARPEDBRINDLE_PC";
		case -80004868:
			return "BREED_ARABIAN_WHITE";
		case 1813208211:
			return "BREED_ARDENNES_BAYROAN";
		case 836323303:
			return "BREED_ARDENNES_STRAWBERRYROAN";
		case 153881023:
			return "BREED_ARDENNES_IRONGREYROAN";
		case -1256798240:
			return "BREED_BELGIAN_BLONDCHESTNUT";
		case 2118089359:
			return "BREED_BELGIAN_MEALYCHESTNUT";
		case -1537586382:
			return "BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN";
		case 1440692746:
			return "BREED_DUTCHWARMBLOOD_SEALBROWN";
		case 697143532:
			return "BREED_DUTCHWARMBLOOD_CHOCOLATEROAN";
		case 281128160:
			return "BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT";
		case 1854519167:
			return "BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO";
		case -1376299681:
			return "BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY";
		case -1955947684:
			return "BREED_KENTUCKYSADDLE_BLACK1";
		case 1427053849:
			return "BREED_KENTUCKYSADDLE_BUTTERMILKBUCKSKIN_PC";
		case 1361788230:
			return "BREED_KENTUCKYSADDLE_CHESTNUTPINTO";
		case 1974379573:
			return "BREED_KENTUCKYSADDLE_GREY";
		case 545109431:
			return "BREED_KENTUCKYSADDLE_SILVERBAY";
		case 1275638003:
			return "BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE";
		case 2083573823:
			return "BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO";
		case 1235275977:
			return "BREED_MORGAN_BAY";
		case 892601357:
			return "BREED_MORGAN_BAYROAN";
		case 1224695367:
			return "BREED_MORGAN_FLAXENCHESTNUT";
		case 955937750:
			return "BREED_MORGAN_LIVERCHESTNUT_PC";
		case 648301150:
			return "BREED_MORGAN_PALOMINO";
		case -1597490733:
			return "BREED_MUSTANG_GRULLODUN";
		case 2000205872:
			return "BREED_MUSTANG_WILDBAY";
		case -1428527735:
			return "BREED_MUSTANG_TIGERSTRIPEDBAY";
		case 170010697:
			return "BREED_NOKOTA_BLUEROAN";
		case -742726637:
			return "BREED_NOKOTA_WHITEROAN";
		case -1714171692:
			return "BREED_NOKOTA_REVERSEDAPPLEROAN";
		case -103101636:
			return "BREED_SHIRE_DARKBAY";
		case -1999094324:
			return "BREED_SHIRE_LIGHTGREY";
		case 1724200240:
			return "BREED_SUFFOLKPUNCH_SORREL";
		case 237935328:
			return "BREED_SUFFOLKPUNCH_REDCHESTNUT";
		case 120848852:
			return "BREED_TENNESSEEWALKER_BLACKRABICANO";
		case -868094182:
			return "BREED_TENNESSEEWALKER_CHESTNUT";
		case -887362763:
			return "BREED_TENNESSEEWALKER_DAPPLEBAY";
		case 2059232991:
			return "BREED_TENNESSEEWALKER_GOLDPALOMINO_PC";
		case -847714194:
			return "BREED_TENNESSEEWALKER_REDROAN";
		case 1756765331:
			return "BREED_TENNESSEEWALKER_FLAXENROAN";
		case -813071670:
			return "BREED_THOROUGHBRED_BLOODBAY";
		case -1900569233:
			return "BREED_THOROUGHBRED_DAPPLEGREY";
		case 1688250187:
			return "BREED_THOROUGHBRED_BRINDLE";
		case -1262715164:
			return "BREED_THOROUGHBRED_BLACKCHESTNUT";
		case 2010625508:
			return "BREED_THOROUGHBRED_REVERSEDAPPLEBLACK";
		case -136225010:
			return "BREED_TURKOMAN_DARKBAY";
		case -225011104:
			return "BREED_TURKOMAN_GOLD";
		case -1882436593:
			return "BREED_TURKOMAN_SILVER";
		case -1331210307:
			return "BREED_DONKEY";
		case 122449722:
			return "BREED_MULE";
		case -1784502482:
			return "BREED_MULE_PAINTED";
		case -1943445834:
			return "BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN";
		case -635244104:
			return "BREED_APPALOOSA_BLACKSNOWFLAKE";
		case -1427377767:
			return "BREED_ARABIAN_GREY";
		case -1293672675:
			return "BREED_HUNGARIANHALFBRED_LIVERCHESTNUT";
		case -1179079660:
			return "BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE";
		case 805526368:
			return "BREED_MUSTANG_GOLDENDUN";
		case 1342496140:
			return "BREED_TENNESSEEWALKER_MAHOGANYBAY";
		case -126555855:
			return "BREED_SHIRE_RAVENBLACK";
		case 294243421:
			return "BREED_BUELL_WARVETS";
		case -997197050:
			return "BREED_JOHN_ENDLESSSUMMER";
		case -235714362:
			return "BREED_MURFREEBROOD_MANGE_01";
		case -1678164:
			return "BREED_MURFREEBROOD_MANGE_02";
		case -977833913:
			return "BREED_MURFREEBROOD_MANGE_03";
		case 1589164943:
			return "BREED_WINTER02_01";
		case -1087523615:
			return "BREED_EAGLEFLIES";
		case -496814209:
			return "BREED_GANG_BILL";
		case 2109055751:
			return "BREED_GANG_CHARLES";
		case -776673611:
			return "BREED_GANG_CHARLES_ENDLESSSUMMER";
		case 1764402253:
			return "BREED_GANG_DUTCH";
		case -1417310078:
			return "BREED_GANG_HOSEA";
		case 1096273915:
			return "BREED_GANG_JAVIER";
		case 772751081:
			return "BREED_GANG_JOHN";
		case -1140435723:
			return "BREED_GANG_KAREN";
		case 2002524329:
			return "BREED_GANG_KIERAN";
		case 1151530184:
			return "BREED_GANG_LENNY";
		case -1266525037:
			return "BREED_GANG_MICAH";
		case -2018137175:
			return "BREED_GANG_SADIE";
		case -574151692:
			return "BREED_GANG_SADIE_ENDLESSSUMMER";
		case 649786380:
			return "BREED_GANG_SEAN";
		case -1921328920:
			return "BREED_GANG_TRELAWNEY";
		case -837607790:
			return "BREED_GANG_UNCLE";
		case 370424594:
			return "BREED_GANG_UNCLE_ENDLESSSUMMER";
		case -364764277:
			return "BREED_MANGY_BACKUP";
		default:
			break;
	}
	return "";
}

float func_439(int iParam0, int iParam1)
{
	fVar0 = 0f;
	if (iParam1 == 0)
	{
		if (func_168(iParam0, 0) > 50)
		{
			fVar0 = (fVar0 + 0.25f);
		}
	}
	if (func_193(-184823984, 1, 0))
	{
		fVar0 = (fVar0 + -0.1f);
	}
	if (func_631() == 0 && func_258() == iParam0)
	{
		fVar1 = func_632(iParam1);
		fVar0 = (fVar0 - fVar1);
	}
	return fVar0;
}

struct<4> func_440(bool bParam0)
{
	return func_401(1328661203, func_633(), -1591664384, bParam0);
}

bool func_441(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_442(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_634(iParam0);
	}
	else
	{
		func_635(iParam0, iParam1);
	}
	func_636();
}

void func_443(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

void func_444(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

void func_445(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_446(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_447(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

int func_448(int iParam0, var uParam1)
{
	iVar8 = 0;
	if (!func_637(iParam0, func_450()))
	{
		return 0;
	}
	Var1 = func_638(func_450());
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

int func_449(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	Var5.f_9 = -1591664384;
	iVar19 = func_638(func_450());
	Var20 = { func_608(0, -1591664384, -1591664384, -1591664384, -999503751, 0) };
	if (!func_611(&Var20, &iVar0, &iVar1, bParam3))
	{
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (!func_395(&Var5, iVar2, iVar0, iVar1))
		{
		}
		else if (iParam0 == Var5.f_4)
		{
		}
		else
		{
			iVar4 = func_463(Var5.f_4);
			if (iVar4 >= 0 && iVar4 <= 5)
			{
			}
			else
			{
				iVar3 = (*iParam2 - 1);
				while (iVar3 >= 0)
				{
					func_639(&(Global_1946804->f_964), iVar19, Var5.f_4, 1373051002, 1, uParam1[iVar3]);
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
	func_397(iVar0);
	return 1;
}

int func_450()
{
	return Global_1946804->f_1;
}

void func_451(int iParam0, var uParam1)
{
	bVar1 = false;
	iVar2 = iParam0;
	if (!func_640(iVar2, &iVar0))
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

void func_452(int iParam0, bool bParam1, bool bParam2)
{
	switch (func_334(iParam0))
	{
		case -2061583405:
			bVar0 = func_641(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_641(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_641(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_641(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_641(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_641(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_642();
	}
	if (bParam1)
	{
		func_643(0, 0);
	}
}

int func_453(int iParam0)
{
	Var0 = { func_398(iParam0, 1, 0) };
	return func_576(Var0.f_4);
}

int func_454(int iParam0, int iParam1)
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

void func_455(var uParam0)
{
	*uParam0 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*uParam0->f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		iVar0++;
	}
}

bool func_456(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	Var4 = func_638(iParam6);
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
		func_645(uParam0, func_644(iVar0), 1);
	}
	while (_0xed4413cee1bf142c(&Var4))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_454(iVar3, 1);
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
							if (func_646(iVar3) && func_647(&(uParam0->f_1[iVar1]), iVar3, &iVar0))
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
							func_648(uParam0, &(uParam0->f_1[&Global_1946804->f_2612[iVar1]]), &(Global_1946804->f_2612[iVar1]), 0, 0);
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

Vector3 func_457(int iParam0, int iParam1)
{
	if (func_23() == -1)
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

int func_458(int iParam0, int iParam1)
{
	vVar0 = { func_457(iParam0, iParam1) };
	return vVar0.x;
}

int func_459(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_649();
	}
	if (func_23() == -1)
	{
		return Global_26796.f_26[iParam0]->f_1;
	}
	return Global_36638.f_45.f_350.f_26[iParam0]->f_1;
}

void func_460(int iParam0)
{
	if (func_23() == -1)
	{
		Global_26796.f_26[iParam0] = 0;
		Global_26796.f_26[iParam0]->f_1 = 0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			uVar1 = &Global_1946804->f_57[iVar0];
			func_462(&uVar1, iVar0, iParam0);
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
		func_650(&uVar1, iVar0, iParam0);
		iVar0++;
	}
}

bool func_461(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

void func_462(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

int func_463(int iParam0)
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

bool func_464(int iParam0)
{
	return (Global_26796.f_774 && iParam0) != 0;
}

void func_465(var uParam0, int iParam1)
{
	if (func_23() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1]->f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_462(uParam0->f_1[iVar0], iVar0, iParam1);
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
		func_650(uParam0->f_1[iVar0], iVar0, iParam1);
		iVar0++;
	}
}

void func_466(int iParam0, int iParam1, int iParam2)
{
	if (func_23() == -1)
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

void func_467(int iParam0, int iParam1)
{
	if (!func_588(iParam0))
	{
		return;
	}
	iVar0 = (Global_40.f_7157[iParam0] && iParam1);
	Global_40.f_7157[iParam0] = (&Global_40.f_7157[iParam0] - iVar0);
}

void func_468(int iParam0, int iParam1)
{
	if (!func_588(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0] = (Global_40.f_7157[iParam0] || iParam1);
}

int func_469(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = func_651(iParam1);
	if (iParam4 != 0)
	{
		iVar0 = iParam4;
	}
	else if (iParam1 > -1 && iParam1 <= 5)
	{
		iVar0 = func_459(iParam1);
	}
	if ((bParam3 && func_652(iParam1, 4096)) && Global_1946804->f_1497 == iParam4)
	{
		return 1;
	}
	Global_1905941 = iParam1;
	if ((iParam1 > 5 || iParam4 != 0) && !func_637(iVar0, Global_1946804->f_1))
	{
		return 0;
	}
	if (bParam2)
	{
		func_467(Global_40.f_7729, 4096);
		func_468(&Global_1905941, 4096);
		Global_40.f_7729 = &Global_1905941;
	}
	if (decor_exist_on(iParam0, "metaped_outfit_request") || decor_exist_on(iParam0, "metaped_outfit_request_name"))
	{
		func_653(iParam0);
	}
	func_654();
	if (!func_655(iParam1))
	{
		func_657(iVar0, iParam0, func_656(iParam1), 1, 0, 1);
	}
	func_658(iParam0);
	return 1;
}

bool func_470(int iParam0)
{
	switch (func_334(iParam0))
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

void func_471(int iParam0)
{
	if (func_23() == -1)
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
		iVar0 = func_454(iVar1, 1);
		if (iVar0 < 0 || iVar0 >= 39)
		{
		}
		else
		{
			func_659(Global_1946804->f_1378.f_1[iVar0], 2, 6);
		}
	}
}

int func_472(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_287(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_401(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_411(bParam6), &Var0, 0);
	return uVar4;
}

void func_473(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_474(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
}

int func_475(int iParam0)
{
	if (func_483())
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
	else if (func_1())
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

void func_476(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_477(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_478(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
}

void func_479(var uParam0, int iParam1)
{
	uParam0->f_3 = iParam1;
}

void func_480(var uParam0, int iParam1)
{
	uParam0->f_4 = iParam1;
}

void func_481(var uParam0, int iParam1)
{
	uParam0->f_5 = iParam1;
}

bool func_482(int iParam0, int iParam1)
{
	if (!func_287(iParam0, 0))
	{
		return false;
	}
	if (!func_660(iParam0, 856287005, &iVar9, &uVar5, &uVar0, 1, 0))
	{
		return false;
	}
	Var10 = { func_285() };
	Var14 = { func_401(iParam0, Var10, iVar9, 0) };
	if (func_406(Var14, iParam1))
	{
		if (func_661(iParam0))
		{
			if (func_170(325139909, &iVar18))
			{
				if (func_482(iVar18, 0))
				{
				}
			}
		}
		else if (func_662(iParam0))
		{
			if (func_170(325139909, &iVar19))
			{
				if (func_482(iVar19, 0))
				{
				}
			}
			if (func_170(986998820, &iVar20))
			{
				if (func_482(iVar20, 0))
				{
				}
			}
			iVar21 = func_663(iParam0);
			if (func_287(iVar21, 0))
			{
				if (func_482(iVar21, 1))
				{
				}
			}
		}
		func_664();
		return true;
	}
	return false;
}

bool func_483()
{
	if (func_23() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

int func_484()
{
	return 1342496140;
}

int func_485()
{
	return 446670976;
}

int func_486()
{
	return 1;
}

int func_487()
{
	return -868094182;
}

int func_488()
{
	return 1074477367;
}

int func_489()
{
	return 1;
}

int func_490()
{
	return -997197050;
}

int func_491()
{
	return -2063289686;
}

int func_492()
{
	return 2;
}

int func_493()
{
	return -868094182;
}

int func_494()
{
	return 1074477367;
}

int func_495()
{
	return 1;
}

int func_496()
{
	return 1235275977;
}

int func_497()
{
	return 2030804811;
}

int func_498()
{
	return 1;
}

int func_499()
{
	return 1974379573;
}

int func_500()
{
	return 2024948086;
}

int func_501()
{
	return 1;
}

int func_502(int iParam0)
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

int func_503(var uParam0, int iParam1, bool bParam2)
{
	return _0x033ee4b89f3ac545(func_411(bParam2), uParam0, iParam1);
}

bool func_504(int iParam0, var uParam1)
{
	if (!func_306(iParam0))
	{
		return false;
	}
	iVar0 = func_502(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1.f_9 = -1591664384;
	Var15 = { func_440(0) };
	if (!func_665(Var15, iVar0, &Var1, 0, 0))
	{
		return false;
	}
	if (!func_666(&Var1, uParam1))
	{
		return false;
	}
	return true;
}

bool func_505(int iParam0)
{
	return func_330(iParam0) == -1784221369;
}

bool func_506(int iParam0)
{
	return func_330(iParam0) == -427144552;
}

bool func_507(int iParam0)
{
	if (func_23() != -1)
	{
		return false;
	}
	if (func_332(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_512(iParam0, &uVar0, 1, 0, 0);
	}
	return func_193(iParam0, 1, 0);
}

void func_508(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_330(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_336(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_536(iVar0))
	{
		if (func_23() == -1)
		{
			func_200(iVar0);
		}
		if (bParam2 || (!has_ped_got_weapon(Global_35, iVar0, 0, false) && func_212(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_384(iParam0, iParam1, 0, 0, 0);
				play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_509(int iParam0, int iParam1)
{
	if (func_331(iParam0, 58855631))
	{
		func_667(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

int func_510(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_287(iParam0, 0))
	{
		return 0;
	}
	if (!func_337(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_411(bParam3), iParam0);
}

int func_511(int iParam0, bool bParam1)
{
	if (func_340(iParam0))
	{
		return get_ped_ammo_by_type(Global_35, iParam0);
	}
	return _0xe787f05dfc977bde(func_411(bParam1), iParam0, 0);
}

bool func_512(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_668(&iParam0);
	if (!func_287(iParam0, 0))
	{
		return false;
	}
	if (!func_337(0))
	{
		bParam3 = true;
	}
	if (func_506(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_one_handed(iParam0))
		{
			Var0 = { func_609(0) };
			Var4.f_9 = -1591664384;
			if (!func_400(iParam0, &Var0, 1728382685, 0))
			{
				return false;
			}
			else if (func_396(iParam0, &Var4, 1728382685))
			{
				return false;
			}
			if (func_615(iParam0, 1))
			{
				if (!func_400(iParam0, &Var0, -649335959, 0))
				{
					return false;
				}
				else if (func_396(iParam0, &Var4, -649335959))
				{
					return false;
				}
			}
		}
		else if (!func_669(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_510(iParam0, uParam1, bParam3, bParam4);
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
		iVar28 = func_472(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = _0xe787f05dfc977bde(func_411(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_513(int iParam0, int iParam1)
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

int func_514()
{
	return _0x62cab7db62ead434(-2076669067, 0);
}

int func_515(int iParam0)
{
	return _0xec3959e9950bf56b(iParam0);
}

void func_516(int iParam0)
{
	if (func_23() != -1)
	{
		return;
	}
	iVar0 = func_670(iParam0);
	fVar1 = func_671(iParam0);
	if ((Global_1347477->f_117 || !func_205(31)) || !func_672(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_162(iVar0) >= 7)
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
	func_673(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_599(_create_var_string(6, func_674(iParam0), fVar1), "itemtype_textures", func_675(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_517(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_676(&Global_0, 8);
	}
	if (!func_35() || func_23() != -1)
	{
		return;
	}
	func_676(&Global_0, 1);
}

void func_518(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_519(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_677(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_678(iParam0))
	{
		return false;
	}
	if (func_679(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_585(iParam0, 1)) || func_113(32768))
	{
		if (!func_585(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_680())
	{
		return false;
	}
	return true;
}

void func_520(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

int func_521(int iParam0)
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

int func_522(int iParam0, int iParam1)
{
	if (!func_681(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_int(&uVar5, &Var0);
	return uVar5;
}

char* func_523(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_326() >= 12)
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_POSTED_OBJ", func_682(), 12);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_FOUND_OBJ", func_683(), 12);
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
			else if (func_557() >= 30)
			{
				sParam3 = _create_var_string(2, "COL_DB_POSTED_OBJ", func_684(), 30);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_DB_FOUND_OBJ", func_557(), 30);
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
				sParam3 = _create_var_string(2, "COL_LF_CAUGHT_OBJ", func_685(), 13);
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
			else if (func_558() >= 10)
			{
				sParam3 = _create_var_string(2, "COL_RC_POSTED_OBJ", func_686(), 10);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_RC_FOUND_OBJ", func_558(), 10);
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
				sParam3 = _create_var_string(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_522(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_524(int iParam0, int iParam1, int iParam2)
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

bool func_525(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_add_entry_hash(3, iParam1, vParam2, get_hash_key(sParam5), get_hash_key(sParam6), 0);
	}
	return true;
}

bool func_526(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	_uilog_add_or_update_objective(3, iParam1, get_hash_key(sParam2), sParam2, false, false, false);
	_uilog_set_entry_pinned(3, iParam1, true);
	_uilog_set_entry_brief_texture(3, iParam1, get_hash_key(sParam4), get_hash_key(sParam5));
	_uilog_set_entry_icon_texture(3, iParam1, iParam6, iParam7);
	_uilog_update_entry_subheader(3, iParam1, _create_var_string(2, sParam3));
	return true;
}

bool func_527(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_687(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_193(iVar2, 1, 0) || func_689(func_688(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_531(func_687(iVar0))), func_531(func_687(iVar0)), bVar1, true, false);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_557() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_690(iVar0)), func_690(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_684() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_690(iVar0)), func_690(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_690(iVar0)), func_690(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_568(iParam3, func_691(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_564(iVar2) - iParam7) >= func_522(iParam3, func_692(iVar0));
				}
				else
				{
					bVar1 = func_564(iVar2) >= func_522(iParam3, func_692(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_564(iVar2) + iParam7) >= func_522(iParam3, func_692(iVar0));
			}
			else
			{
				bVar1 = func_564(iVar2) >= func_522(iParam3, func_692(iVar0));
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_693(iVar2)), func_693(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_694(_0x126cbebba46693cf(iVar0, 1995362678, 0)))
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
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_695(_0x126cbebba46693cf(iVar0, iParam2, 0))), func_695(_0x126cbebba46693cf(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_558() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_696(iVar0)), func_696(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_686() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_696(iVar0)), func_696(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_696(iVar0)), func_696(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_568(iParam3, func_691(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_564(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_697(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_697(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_172(iVar2)), func_172(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_528(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_685() >= 13)
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

bool func_529(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_15(func_38(0)) && ((func_698(0) == 1 || func_698(0) == 8) || func_698(0) == 6))
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

var func_530(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

char* func_531(int iParam0)
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

var func_532(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

void func_533(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	set_bit(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_534(int iParam0)
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
			func_699(1);
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
			func_700(1);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_700(2);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_700(3);
			break;
		case 21:
			_uitutorial_set_rpg_icon_visibility(7, 0);
			_uitutorial_set_rpg_icon_visibility(6, 0);
			break;
		case 22:
			_uitutorial_set_rpg_icon_visibility(9, 0);
			_uitutorial_set_rpg_icon_visibility(8, 0);
			Jump @1577; //curOff = 474
			Jump @1577; //curOff = 477
			Jump @1577; //curOff = 480
			Jump @1577; //curOff = 483
			Jump @1577; //curOff = 486
			Jump @1577; //curOff = 489
			func_701(1);
			Jump @1577; //curOff = 497
			func_702(1);
			Jump @1577; //curOff = 505
			func_703(1);
			Jump @1577; //curOff = 513
			Jump @1577; //curOff = 516
			func_704(0);
			Jump @1577; //curOff = 524
			func_705(0);
			Jump @1577; //curOff = 532
			func_706(0);
			Jump @1577; //curOff = 540
			Jump @1577; //curOff = 543
			Jump @1577; //curOff = 546
			Jump @1577; //curOff = 549
			Jump @1577; //curOff = 552
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_level(get_player_index(), 1);
			Jump @1577; //curOff = 574
			if ((!&Global_1879534 && func_35()) && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_532("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_321(586, 0);
			Jump @1577; //curOff = 677
			if ((!&Global_1879534 && func_35()) && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_532("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_321(587, 0);
			Jump @1577; //curOff = 790
			if ((!&Global_1879534 && func_35()) && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_532("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_321(588, 0);
			Jump @1577; //curOff = 913
			if ((!&Global_1879534 && func_35()) && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_532("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_321(589, 0);
			Jump @1577; //curOff = 1046
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			if (func_23() == -1)
			{
				if (!func_592(99217379) || func_707(99217379) == 2110595215)
				{
					if (func_1())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = 899611344;
					}
					if (!func_193(iVar0, 1, 0))
					{
						func_377(iVar0, 1, 752097756);
					}
					func_358(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			Jump @1577; //curOff = 1191
			if (func_23() == -1)
			{
				if (!func_193(1013902307, 1, 0))
				{
					func_377(1013902307, 1, 752097756);
				}
			}
			Jump @1577; //curOff = 1233
			if (func_23() == -1)
			{
				if (!func_193(1013902307, 1, 0))
				{
					func_377(1013902307, 1, 752097756);
				}
				if (!func_193(142640135, 1, 0))
				{
					func_377(142640135, 1, 752097756);
				}
			}
			Jump @1577; //curOff = 1306
			if (func_23() == -1)
			{
				if (!func_193(786809402, 1, 0))
				{
					func_377(786809402, 1, 752097756);
				}
			}
			Jump @1577; //curOff = 1348
			if (func_23() == -1)
			{
				if (!func_193(786809402, 1, 0))
				{
					func_377(786809402, 1, 752097756);
				}
				if (!func_193(-518019409, 1, 0))
				{
					func_377(-518019409, 1, 752097756);
				}
			}
			Jump @1577; //curOff = 1421
			_0x5b9813ecf7633fe8(0);
			Jump @1577; //curOff = 1429
			Jump @1577; //curOff = 1432
			Jump @1577; //curOff = 1435
			Jump @1577; //curOff = 1438
			Jump @1577; //curOff = 1441
			Jump @1577; //curOff = 1444
			Jump @1577; //curOff = 1447
			Jump @1577; //curOff = 1450
			_unlock_set_unlocked(-843169622, true);
			Global_1935630->f_47 = 1;
			set_ambient_zone_list_state_persistent("AZL_Endlesss_Summer_Enable", true, true);
			set_ambient_zone_list_state_persistent("AZL_Endlesss_Summer_Disable", false, true);
			Jump @1577; //curOff = 1490
			func_708();
			Jump @1577; //curOff = 1497
			_0xa63fcad3a6fec6d2(get_player_index(), 1);
			Jump @1577; //curOff = 1509
			_unlock_set_unlocked(-78935213, true);
			Jump @1577; //curOff = 1522
			_unlock_set_unlocked(-384786155, true);
			Jump @1577; //curOff = 1535
			_unlock_set_unlocked(296662302, true);
			Jump @1577; //curOff = 1548
			_unlock_set_unlocked(-1871453000, true);
			Jump @1577; //curOff = 1561
			_unlock_set_unlocked(1397349651, true);
		}

bool func_535(int iParam0)
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

bool func_536(int iParam0)
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

void func_537(int iParam0)
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
	iVar2 = func_44();
	func_709(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	decor_set_int(Global_35, sVar1, iVar2);
}

int func_538(int iParam0)
{
	if (func_710(iParam0))
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

bool func_539(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_540(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_541(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_0x705be297eebdb95d(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			if (!func_205(50))
			{
				if (!func_205(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_205(51))
			{
				if (!func_205(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_542(int iParam0, int iParam1, var uParam2)
{
	if (!func_287(iParam1, 0))
	{
		return false;
	}
	if (func_330(iParam1) != -1037537535)
	{
		return false;
	}
	bVar1 = func_23() != -1;
	iVar2 = _get_metaped_type(iParam0);
	if (func_334(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_453(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_331(iParam1, 866047851))
	{
		iVar5 = func_454(iVar4, 1);
		if (func_711(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5] != iVar8)
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
			iVar3 = func_334(&(Global_1946804->f_1497.f_1[iVar5]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745;
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5] != &Global_1946804->f_57[iVar5] && func_331(iParam1, -1638171711))
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
			if (func_712(1868067663, &uVar0))
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
				iVar10 = func_713(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_713(&(Global_1946804->f_1497.f_1[iVar5]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_334(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6] && func_331(&(Global_1946804->f_1497.f_1[iVar5]), -1638171711))
				{
					*uParam2 = -357399012;
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != &Global_1946804->f_57[iVar6] && func_714(&(Global_1946804->f_1497.f_1[iVar5])))
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

void func_543()
{
	_0xfe7c9cf376d23342(player_id(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_544()
{
	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	set_player_health_recharge_multiplier(player_id(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	_0x08e22898a6af4905(player_id(), (1f - fVar0));
	_0xfeca17cf3343694b(player_id(), (1f - fVar0));
	_0xbbadfb5e5e5766fb(player_id(), (1f - fVar1));
}

int func_545()
{
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_193(func_715(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_546(int iParam0)
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

bool func_547(int iParam0, int iParam1)
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
	if (func_193(iVar0, 1, 0) && func_193(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_548(int iParam0)
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

bool func_549(int iParam0, int iParam1)
{
	iVar0 = func_716(iParam0);
	if (iVar0 != -15)
	{
		func_709(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_717(iVar0, 1);
	}
	return false;
}

int func_550(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_193(1811977508, 1, 0))
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
			if (func_287(iVar25, 0) && func_331(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_551(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_552(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_553(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_554(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

char* func_555(int iParam0)
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
	iVar1 = func_564(iVar9);
	iVar2 = func_564(iVar10);
	iVar3 = func_564(iVar11);
	iVar5 = func_565(iVar9);
	iVar6 = func_565(iVar10);
	iVar7 = func_565(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_564(iVar12);
		iVar8 = func_565(iVar12);
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

void func_556(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_557()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_718(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_558()
{
	return _0x5461c821d00fe15a(2103522376, 0);
}

bool func_559(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_697(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_697(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_697(iVar0))
		{
			*sParam2++;
		}
		if (func_697(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_697(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_697(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_697(iVar0))
		{
			*sParam2++;
		}
		if (func_697(iVar1))
		{
			*sParam2++;
		}
		if (func_697(iVar0) && func_697(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_697(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_697(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_697(iVar0))
		{
			*sParam2++;
		}
		if (func_697(iVar1))
		{
			*sParam2++;
		}
		if (func_697(iVar2))
		{
			*sParam2++;
		}
		if ((func_697(iVar0) && func_697(iVar1)) && func_697(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_697(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_697(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_697(iVar0))
		{
			*sParam2++;
		}
		if (func_697(iVar1))
		{
			*sParam2++;
		}
		if (func_697(iVar2))
		{
			*sParam2++;
		}
		if (func_697(iVar3))
		{
			*sParam2++;
		}
		if (((func_697(iVar0) && func_697(iVar1)) && func_697(iVar2)) && func_697(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_560(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_719(1497516462);
			func_720(2016141805);
			func_720(1010885152);
			func_720(-502324015);
			break;
		case 2016141805:
			func_720(1497516462);
			func_719(2016141805);
			func_720(1010885152);
			func_720(-502324015);
			break;
		case 1010885152:
			func_720(1497516462);
			func_720(2016141805);
			func_719(1010885152);
			func_720(-502324015);
			break;
		case -502324015:
			func_720(1497516462);
			func_720(2016141805);
			func_720(1010885152);
			func_719(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_720(-538889627);
			func_720(-538880323);
			func_720(-1056767524);
			func_719(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_721();
			func_719(iParam0);
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
			func_722();
			func_719(iParam0);
			break;
		case 2019386373:
			func_720(-664252410);
			func_720(2109952320);
			func_719(2019386373);
			break;
		case -664252410:
			func_720(2019386373);
			func_720(2109952320);
			func_719(-664252410);
			break;
		case 2109952320:
			func_720(2019386373);
			func_720(-664252410);
			func_719(2109952320);
			break;
		case -1674179981:
			func_720(-1835851517);
			func_720(-1838352012);
			func_719(-1674179981);
			break;
		case -1835851517:
			func_720(-1674179981);
			func_720(-1838352012);
			func_719(-1835851517);
			break;
		case -1838352012:
			func_720(-1674179981);
			func_720(-1835851517);
			func_719(-1838352012);
			break;
		case -1717960576:
			func_720(210001842);
			func_719(-1717960576);
			break;
		case 210001842:
			func_720(-1717960576);
			func_719(210001842);
			break;
		case -150493654:
			func_720(-1271608261);
			func_720(1846061697);
			func_720(-1145519186);
			func_719(-150493654);
			break;
		case -1271608261:
			func_720(-150493654);
			func_720(1846061697);
			func_720(-1145519186);
			func_719(-1271608261);
			break;
		case 1846061697:
			func_720(-150493654);
			func_720(-1271608261);
			func_720(-1145519186);
			func_719(1846061697);
			break;
		case -1145519186:
			func_720(-150493654);
			func_720(-1271608261);
			func_720(1846061697);
			func_719(-1145519186);
			break;
		case 1766284049:
			func_720(280705402);
			func_720(1926308480);
			func_719(1766284049);
			break;
		case 280705402:
			func_720(1766284049);
			func_720(1926308480);
			func_719(280705402);
			break;
		case 1926308480:
			func_720(1766284049);
			func_720(280705402);
			func_719(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_720(439465264);
				func_719(1609506757);
			}
			else
			{
				func_720(1609506757);
				func_720(439465264);
			}
			break;
		case 439465264:
			if (func_623(1609506757))
			{
				if (bParam1)
				{
					func_719(439465264);
				}
				else
				{
					func_720(439465264);
				}
			}
			break;
		case 1822001510:
			func_720(-1612662716);
			func_719(1822001510);
			break;
		case -1612662716:
			func_720(1822001510);
			func_719(-1612662716);
			break;
		case 1306158345:
			func_720(1952610440);
			func_720(-223469678);
			func_720(-404698347);
			func_720(1517904467);
			func_719(1306158345);
			break;
		case 1952610440:
			func_720(1306158345);
			func_720(-223469678);
			func_720(-404698347);
			func_720(1517904467);
			func_719(1952610440);
			break;
		case -223469678:
			func_720(1306158345);
			func_720(1952610440);
			func_720(-404698347);
			func_720(1517904467);
			func_719(-223469678);
			break;
		case -404698347:
			func_720(1306158345);
			func_720(1952610440);
			func_720(-223469678);
			func_720(1517904467);
			func_719(-404698347);
			break;
		case 1517904467:
			func_720(1306158345);
			func_720(1952610440);
			func_720(-223469678);
			func_720(-404698347);
			func_719(1517904467);
			break;
		case 1376646519:
			func_720(931649776);
			func_720(-434590080);
			func_720(1743048395);
			func_720(449774763);
			func_719(1376646519);
			break;
		case 931649776:
			func_720(1376646519);
			func_720(-434590080);
			func_720(1743048395);
			func_720(449774763);
			func_719(931649776);
			break;
		case -434590080:
			func_720(1376646519);
			func_720(931649776);
			func_720(1743048395);
			func_720(449774763);
			func_719(-434590080);
			break;
		case 1743048395:
			func_720(1376646519);
			func_720(931649776);
			func_720(-434590080);
			func_720(449774763);
			func_719(1743048395);
			break;
		case 449774763:
			func_720(1376646519);
			func_720(931649776);
			func_720(-434590080);
			func_720(1743048395);
			func_719(449774763);
			break;
		case -1414537028:
			func_720(38162571);
			func_720(1350391819);
			func_720(54073871);
			func_719(-1414537028);
			break;
		case 38162571:
			func_720(-1414537028);
			func_720(1350391819);
			func_720(54073871);
			func_719(38162571);
			break;
		case 1350391819:
			func_720(-1414537028);
			func_720(38162571);
			func_720(54073871);
			func_719(1350391819);
			break;
		case 54073871:
			func_720(-1414537028);
			func_720(38162571);
			func_720(1350391819);
			func_719(54073871);
			break;
		case 198200492:
			func_719(198200492);
			func_720(-1124061431);
			func_720(52706132);
			func_720(-259123672);
			break;
		case -1124061431:
			func_720(198200492);
			func_719(-1124061431);
			func_720(52706132);
			func_720(-259123672);
			break;
		case 52706132:
			func_720(198200492);
			func_720(-1124061431);
			func_719(52706132);
			func_720(-259123672);
			break;
		case -259123672:
			func_720(198200492);
			func_720(-1124061431);
			func_720(52706132);
			func_719(-259123672);
			break;
		case -919512195:
			func_719(-919512195);
			func_720(-1925798111);
			func_720(420709909);
			func_720(1703426636);
			break;
		case -1925798111:
			func_719(-1925798111);
			func_720(-919512195);
			func_720(420709909);
			func_720(1703426636);
			break;
		case 420709909:
			func_719(420709909);
			func_720(-919512195);
			func_720(-1925798111);
			func_720(1703426636);
			break;
		case 1703426636:
			func_719(1703426636);
			func_720(-919512195);
			func_720(-1925798111);
			func_720(420709909);
			break;
		case -1223121209:
			func_719(-1223121209);
			func_720(630808005);
			break;
		case 630808005:
			func_719(630808005);
			func_720(-1223121209);
			break;
		case 1453909576:
			func_719(1453909576);
			func_720(1643531967);
			break;
		case 1643531967:
			func_719(1643531967);
			func_720(1453909576);
			break;
		case 0:
			func_719(0);
			func_720(473295046);
			func_720(-1738165526);
			break;
		case 473295046:
			func_719(473295046);
			func_720(0);
			func_720(-1738165526);
			break;
		case -1738165526:
			func_719(-1738165526);
			func_720(0);
			func_720(473295046);
			break;
		case 932909855:
			func_719(932909855);
			func_720(2051822093);
			break;
		case 2051822093:
			func_719(2051822093);
			func_720(932909855);
			break;
		case 405586984:
			func_719(405586984);
			func_720(1509509592);
			func_720(-959357075);
			func_720(-1311865656);
			break;
		case 1509509592:
			func_719(1509509592);
			func_720(405586984);
			func_720(-959357075);
			func_720(-1311865656);
			break;
		case -959357075:
			func_719(-959357075);
			func_720(1509509592);
			func_720(405586984);
			func_720(-1311865656);
			break;
		case -1311865656:
			func_719(-1311865656);
			func_720(1509509592);
			func_720(-959357075);
			func_720(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_719(-524145696);
			}
			else
			{
				func_720(-524145696);
			}
			func_720(1626481264);
			func_720(282809459);
			break;
		case 282809459:
			func_719(282809459);
			func_720(1626481264);
			func_720(-524145696);
			break;
		case 1626481264:
			func_719(1626481264);
			func_720(-524145696);
			func_720(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_719(885203519);
			}
			else
			{
				func_720(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_719(-1080627546);
			}
			else
			{
				func_720(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_623(iParam0))
				{
					func_719(iParam0);
				}
			}
			else if (func_623(iParam0))
			{
				func_720(iParam0);
			}
			break;
	}
}

void func_561(int iParam0)
{
	if (!func_723(iParam0))
	{
		func_725(func_724(iParam0));
	}
}

int func_562()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_723(_0x126cbebba46693cf(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_563(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_564(iVar9);
	iVar2 = func_564(iVar10);
	iVar3 = func_564(iVar11);
	iVar5 = func_565(iVar9);
	iVar6 = func_565(iVar10);
	iVar7 = func_565(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_564(iVar12);
		iVar8 = func_565(iVar12);
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

int func_564(int iParam0)
{
	if (func_193(iParam0, 1, 0))
	{
		iVar0 = func_212(iParam0, 0, 0);
	}
	return iVar0;
}

int func_565(int iParam0)
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

int func_566(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0);
}

void func_567(int iParam0, int iParam1)
{
	_0x3ea62e56f386c997(iParam0, iParam1);
}

int func_568(int iParam0, int iParam1)
{
	if (!func_681(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

void func_569(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_568(iParam1, 5) || iParam0 == func_568(iParam1, 6)) || iParam0 == func_568(iParam1, 7)) || iParam0 == func_568(iParam1, 8)) || iParam0 == func_568(iParam1, 9))
	{
		func_559(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_327(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_329(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_570(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if ((((iParam0 == func_568(iParam1, 5) || iParam0 == func_568(iParam1, 6)) || iParam0 == func_568(iParam1, 7)) || iParam0 == func_568(iParam1, 8)) || iParam0 == func_568(iParam1, 9))
	{
		if (func_559(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_327(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_329(51, 0, 0, iVar0, func_522(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_327(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_329(51, 0, 0, iVar0, func_522(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_571()
{
	if (func_194((*Global_1347702)[37]->f_15) && Global_1392388->f_7)
	{
		return true;
	}
	return false;
}

void func_572(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
}

void func_573(int iParam0)
{
	if (!func_726(iParam0))
	{
		_0x3ea62e56f386c997(iParam0, 1);
	}
}

void func_574(int iParam0)
{
	_0x398fab9c96a81924(iParam0, 1);
}

void func_575(int iParam0, int iParam1, var uParam2)
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

int func_576(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_727(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

bool func_577(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_728();
	if (iParam2 == 39)
	{
		Var0 = { func_398(iParam0, 1, 0) };
		iParam2 = func_454(func_576(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_331(iParam0, 866047851) && func_711(&(Global_1946804->f_1378)) >= 2)
	{
		return false;
	}
	if ((func_580(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2])
	{
		func_729(func_727(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_730(iParam2);
	func_731(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2] != &Global_1946804->f_57[iParam2] && Global_1946804->f_57[iParam2]->f_1 > 1)
	{
		func_659(Global_1946804->f_1378.f_1[iParam2], 4, 6);
		func_659(Global_1946804->f_1497.f_1[iParam2], 4, 6);
	}
	func_648(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804->f_1378.f_1[iParam2]->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2] = iParam0;
	Global_1946804->f_1378.f_1[iParam2]->f_1 = func_732(iParam0, iParam2, iParam1, func_23() != -1);
	if (bParam4)
	{
		func_733(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_733(&(Global_1946804->f_1378), 1, 0);
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
				func_734(func_727(&(Global_1946804->f_2589.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_578(bool bParam0, bool bParam1, bool bParam2)
{
	func_735(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

void func_579(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_736(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_737(Var0);
}

bool func_580(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_581()
{
	func_738(&(Global_1946804->f_2776));
	func_739(32768);
	func_734(1108822547, 8, 6);
}

int func_582(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_454(iParam0, 1);
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

void func_583(int iParam0)
{
	if (func_740(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_741(Var0);
}

void func_584(int iParam0, int iParam1, int iParam2)
{
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_741(Var0);
}

bool func_585(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_586(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_587(int iParam0, bool bParam1)
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
				return func_742();
			}
			break;
	}
	return 0;
}

bool func_588(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_589(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_588(iParam0))
	{
		return;
	}
	if (func_743(iParam0))
	{
		return;
	}
	if (!func_744(iParam0))
	{
		func_745(iParam0, 1, 0);
	}
	iVar0 = func_651(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_652(iParam0, 512))
		{
			func_579(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_746() && !bParam1) && !func_33(0, 0, 1))
	{
		func_747(_create_var_string(10, "OUT_JOURN_DONE", _create_var_string(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_468(iParam0, 6);
	if (bParam2)
	{
		if (!func_33(0, 0, 1))
		{
			func_517(1, 4);
		}
	}
}

bool func_590(int iParam0, bool bParam1)
{
	return func_587(iParam0, 0) < func_748(iParam0, bParam1);
}

bool func_591(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_334(iVar1) == iParam0)
		{
			*uParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_592(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_454(iParam0, 1)] != &Global_1946804->f_57[func_454(iParam0, 1)];
}

void func_593(int iParam0, int iParam1)
{
	if (func_331(iParam1, 130796156))
	{
		func_749(iParam1, 0);
	}
	else if (func_331(iParam1, 930141731))
	{
		func_749(iParam1, 1);
		func_750(iParam0);
	}
}

void func_594(var uParam0, int iParam1)
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

int func_595(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_751(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_752(uParam2, iParam0, Var1);
	return 1;
}

int func_596(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_597(int iParam0)
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

int func_598(int iParam0)
{
	if (!func_753(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

var func_599(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_754(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_600()
{
	return !&Global_1911774;
}

void func_601(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_602(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_603(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

int func_604(int iParam0)
{
	return _money_get_cash_balance();
}

bool func_605()
{
	if (func_138())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_606(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_755((Global_40.f_4283.f_325 + iParam0));
}

void func_607(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_605())
	{
		func_599(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_599(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

struct<14> func_608(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> func_609(bool bParam0)
{
	iVar0 = func_411(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_401(923904168, func_440(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_401(923904168, func_440(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_401(923904168, func_440(bParam0), -740156546, 0);
}

void func_610(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_611(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_411(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_612(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_619(iParam0))
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return false;
	}
	if (!func_337(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!_0xb4158c8c9a3b5dce(func_411(bParam4), iParam0, iParam1, iParam2))
	{
		return false;
	}
	return true;
}

void func_613(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_23() == -1)
	{
		if (func_320(43))
		{
			if (func_331(iParam0, 412399755))
			{
				func_561(-1791518714);
				if (func_562() == 0)
				{
					func_517(0, 10);
					iVar0 = func_756(iParam0, iParam1, 1);
					if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
					{
						if (func_564(iParam0) < func_565(iParam0))
						{
							func_327(43, iParam0, iParam1, -1791518714, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_320(44))
		{
			if (func_331(iParam0, 709057512))
			{
				func_561(-2087881550);
				if (func_562() == 1)
				{
					func_517(0, 10);
					iVar0 = func_756(iParam0, iParam1, 2);
					if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
					{
						if (func_564(iParam0) < func_565(iParam0))
						{
							func_327(43, iParam0, iParam1, -2087881550, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_320(45))
		{
			if (func_331(iParam0, -1478961327))
			{
				func_561(1908068621);
				if (func_562() == 2)
				{
					func_517(0, 10);
					iVar0 = func_756(iParam0, iParam1, 4);
					if (((iParam0 == 2116770557 || iParam0 == -651064726) || iParam0 == -404270094) || iParam0 == 2093126853)
					{
						if (func_564(iParam0) < func_565(iParam0))
						{
							func_327(43, iParam0, iParam1, 1908068621, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_320(46))
		{
			if (func_331(iParam0, -1238404098))
			{
				func_561(1611247019);
				if (func_562() == 3)
				{
					func_517(0, 10);
					iVar0 = func_756(iParam0, iParam1, 8);
					if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
					{
						if (func_564(iParam0) < func_565(iParam0))
						{
							func_327(43, iParam0, iParam1, 1611247019, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_320(47))
		{
			if (func_331(iParam0, 1160548794))
			{
				func_561(1319635688);
				if (func_562() == 4)
				{
					func_517(0, 10);
					iVar0 = func_756(iParam0, iParam1, 16);
					if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
					{
						if (func_564(iParam0) < func_565(iParam0))
						{
							func_327(43, iParam0, iParam1, 1319635688, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

bool func_614(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_411(0);
	*uParam1 = { func_401(iParam0, func_609(0), iParam3, 0) };
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

bool func_615(int iParam0, bool bParam1)
{
	if (func_334(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_205(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_616(bool bParam0)
{
	iVar0 = func_411(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_401(271701509, func_440(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_401(271701509, func_440(bParam0), 12999093, 0);
}

bool func_617(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_334(iParam0);
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

bool func_618(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_411(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

bool func_619(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

int func_620(struct<4> Param0, int iParam4, bool bParam5)
{
	iVar0 = -1;
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_618(Param0, &Var1, 1, 0))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_330(Var1.f_4);
	if (iVar15 == -1784221369)
	{
		Var16 = { func_757(Param0, 1) };
		Var16.f_10 = iParam4;
		iVar0 = func_758(-1230526146, &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -1037537535)
	{
		Var44 = { func_759(Param0, 1) };
		Var44.f_10 = iParam4;
		iVar0 = func_760(-1230526146, &Var44, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var61 = { func_761(&Var1) };
		Var61.f_10 = iParam4;
		iVar0 = func_762(-1230526146, &Var61, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_621(int iParam0)
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

int func_622(int iParam0)
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

bool func_623(int iParam0)
{
	iVar0 = func_763(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_624(int iParam0)
{
	if (!func_15(iParam0))
	{
		return false;
	}
	switch (func_39(iParam0))
	{
		case 1:
			switch (func_100(iParam0))
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
			switch (func_100(iParam0))
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

void func_625(int iParam0)
{
	iVar2 = func_411(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_334(iVar1) == iParam0)
		{
			_0x6a564540fac12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_765(func_764(iParam0), 6);
}

void func_626(int iParam0)
{
	iVar2 = func_411(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_334(iVar1) == iParam0)
		{
			_0x766315a564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_766(func_764(iParam0), 6);
}

int func_627(int iParam0)
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

int func_628(int iParam0)
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
	func_767(iParam0, Global_1898164->f_162);
	return 1;
}

int func_629()
{
	return Global_40.f_11095.f_35;
}

int func_630()
{
	return 4;
}

int func_631()
{
	return Global_40.f_1095.f_3054.f_1;
}

var func_632(int iParam0)
{
	uVar0 = &Global_1900383->f_393.f_8[iParam0];
	return uVar0;
}

struct<4> func_633()
{
	return Var0;
}

int func_634(int iParam0)
{
	iVar0 = func_215(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_768(iVar0);
}

int func_635(int iParam0, int iParam1)
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
			func_769(iVar2);
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

void func_636()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

bool func_637(int iParam0, int iParam1)
{
	iVar0 = func_638(iParam1);
	func_639(&(Global_1946804->f_964), iVar0, iParam0, -897569541, 1, iParam1);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	return _0xed4413cee1bf142c(&(Global_1946804->f_964));
}

int func_638(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_450();
	}
	if (func_23() == -1)
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

void func_639(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

bool func_640(int iParam0, int iParam1)
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

int func_641(int iParam0, var uParam1)
{
	iVar1 = iParam0;
	if (!func_640(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_334(iParam0) != -999503751)
		{
			func_770(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_334(iParam0) != -999503751)
	{
		func_770(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_771(iParam0, 1);
	return 1;
}

void func_642()
{
	if (func_23() == -1)
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

void func_643(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_772(0);
	}
	if (bParam0)
	{
		func_736(8);
		func_736(512);
	}
	else
	{
		func_736(8);
		func_736(16);
	}
}

int func_644(int iParam0)
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

void func_645(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_461(uParam0->f_1[iVar0], 2))
		{
			iVar7 = func_727(iVar0, 1);
			if (func_773(iVar0, iParam1))
			{
				vVar4 = { func_457(iVar0, -1) };
				if ((vVar4.x != &Global_1946804->f_57[iVar0] && vVar4.x != 0) && (&uParam0->f_1[iVar0] != vVar4.x || uParam0->f_1[iVar0]->f_1 != vVar4.y))
				{
					*uParam0->f_1[iVar0] = { vVar4 };
				}
				if (func_774(iVar7, 4))
				{
					func_734(iVar7, 4, 6);
				}
			}
			else
			{
				func_775(iVar7, 4, 6);
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

bool func_646(int iParam0)
{
	Global_1946804->f_964.f_2 = 0;
	if (func_23() == -1)
	{
		iVar0 = -380731322;
	}
	else
	{
		iVar0 = 1226838104;
	}
	func_639(&(Global_1946804->f_964), iVar0, -367421157, 1409451727, 1, iParam0);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	if (!_0x44b3a36933ac009c(&uVar1, &(Global_1946804->f_964), 1409451727))
	{
		return false;
	}
	return true;
}

bool func_647(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

void func_648(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_334(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_773(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_731(iVar1, iVar3);
		}
	}
	if (func_592(-1586649372) && func_773(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_731(iVar1, iVar3);
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
						func_731(iVar1, iVar3);
					}
				}
			}
			func_776(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_776(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_731(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_776(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_731(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_731(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_776(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_776(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_731(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_776(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_731(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_731(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_334(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_731(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_714(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_334(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_731(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_331(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_731(iVar1, iVar3);
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
						func_731(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_714(&(Global_1946804->f_1497.f_1[iVar1])) || func_331(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_731(iVar1, iVar3);
					}
				}
			}
			switch (func_334(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_334(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_731(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_334(&(uParam0->f_1[iVar1])) || func_331(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_731(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_649()
{
	if (func_23() == -1)
	{
		return Global_26796.f_776;
	}
	return Global_36638.f_45.f_350.f_1011;
}

void func_650(var uParam0, int iParam1, int iParam2)
{
	*Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

int func_651(int iParam0)
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

bool func_652(int iParam0, int iParam1)
{
	if (!func_588(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0] && iParam1) != 0;
}

void func_653(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

void func_654()
{
	if (is_ped_ragdoll(Global_35))
	{
		return;
	}
	if (_0xa24c1d341c6e0d53(1, 1, 1))
	{
		return;
	}
	if (!func_580(1))
	{
		return;
	}
	sVar0 = "outfit_change_unarmed";
	switch (Global_1946804->f_859)
	{
		case 1:
			sVar0 = "outfit_change_longarms";
			break;
		case 0:
			sVar0 = "outfit_change_offhand";
			break;
		case 2:
			sVar0 = "outfit_change_unarmed";
			break;
	}
	task_play_anim(Global_35, func_777(), sVar0, 8f, -8f, -1, 67108880, 0f, false, 0, false, "Satchel_and_ik_hand_helpers_filter", false);
	func_739(1);
	remove_anim_dict(func_777());
}

bool func_655(int iParam0)
{
	return false;
}

int func_656(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 1;
		case 2:
			return 1;
		case 3:
			return 1;
		case 4:
			return 1;
		case 5:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_657(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bVar0 = false;
	iVar1 = 0;
	iVar2 = iParam0;
	iVar3 = -1;
	iVar4 = func_463(iParam0);
	if (iVar4 >= 0 && iVar4 <= 5)
	{
		iVar3 = iVar4;
	}
	if (func_23() != -1)
	{
		return;
	}
	func_728();
	if (bParam5)
	{
		if (!func_778(&(Global_1946804->f_1378), &bVar0, iVar2, iVar3, 1, 0))
		{
			return;
		}
	}
	if (func_580(32768) && &Global_1946804->f_1378.f_1[10] != &Global_1946804->f_57[10])
	{
		func_581();
	}
	func_779(iVar3, 1, 1, 1, 1, 1);
	func_579(31, 0, 0, 0, 0);
	func_583(0);
	if (!bParam3)
	{
		return;
	}
	if (bVar0)
	{
		iVar1 = 8;
	}
	if (!bParam4)
	{
		if (is_ped_a_player(iParam1))
		{
			func_579(2, iVar1, 2, 0, 0);
		}
		else
		{
			func_579(2, iVar1, 3, iParam1, 0);
		}
	}
	else
	{
		func_780(&(Global_1946804->f_1497), iParam1, 1, -1, 1, 1, 1);
	}
}

void func_658(int iParam0)
{
	_0xe3144b932dfdff65(iParam0, 0f, -1, 1, 1);
	clear_ped_env_dirt(iParam0);
	clear_ped_damage_decal_by_zone(iParam0, 10, "ALL");
	clear_ped_blood_damage(Global_35);
}

void func_659(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_660(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5, int iParam6)
{
	if (iParam0 != 0 && iParam1 != 0)
	{
		iVar1 = func_334(iParam1);
		iVar5 = func_432(iParam1);
		iVar0 = 0;
		while (iVar0 < iVar5)
		{
			if (_item_database_get_has_slot_info(iVar1, iVar0, &uVar2))
			{
				if (_item_database_can_equip_item_on_category(iParam0, iVar1, uVar2))
				{
					*uParam4 = { func_398(iParam1, 0, 0) };
					if (iParam6 != 0)
					{
						uParam4->f_4 = iParam6;
					}
					*uParam3 = { func_401(iParam1, *uParam4, uParam4->f_4, 0) };
					*iParam2 = uVar2;
					return true;
				}
			}
			iVar0++;
		}
		if (bParam5)
		{
			Var6.f_9 = -1591664384;
			Var20.f_9 = -1591664384;
			iVar34 = func_411(0);
			Var37 = { func_398(iParam1, 0, 0) };
			if (iParam6 != 0)
			{
				Var37.f_4 = iParam6;
			}
			Var42 = { func_401(iParam1, Var37, Var37.f_4, 0) };
			iVar35 = _0xe843d21a8e2498aa(iVar34, &Var42);
			iVar36 = 0;
			while (iVar36 < iVar35)
			{
				if (_0xcd9a485f2b383b44(iVar34, &Var42, iVar36, &Var6))
				{
					iVar1 = func_334(Var6.f_4);
					iVar5 = _item_database_get_has_slot_count(iVar1);
					iVar0 = 0;
					while (iVar0 < iVar5)
					{
						if (_item_database_get_has_slot_info(iVar1, iVar0, &uVar2))
						{
							if (_item_database_can_equip_item_on_category(iParam0, iVar1, uVar2))
							{
								if (func_404(Var42, Var6.f_9, &Var20, 0))
								{
									uParam4->f_4 = Var6.f_9;
									*uParam4 = { Var6.f_5 };
									*uParam3 = { Var20 };
									*iParam2 = uVar2;
									return true;
								}
							}
						}
						iVar0++;
					}
				}
				iVar36++;
			}
		}
	}
	*iParam2 = 0;
	return false;
}

bool func_661(int iParam0)
{
	if (!func_287(iParam0, 0))
	{
	}
	if (func_331(iParam0, 162787671))
	{
		return true;
	}
	return false;
}

bool func_662(int iParam0)
{
	if (!func_287(iParam0, 0))
	{
		return false;
	}
	if (func_331(iParam0, -251515357))
	{
		return true;
	}
	return false;
}

int func_663(int iParam0)
{
	switch (iParam0)
	{
		case -1249891745:
			return 263080063;
		case -769274720:
			return -34331381;
		case 893370428:
			return -993578318;
		case 736792276:
			return 579268144;
		case -949205287:
			return 1104489688;
	}
	return 0;
}

int func_664()
{
	Var0 = { func_398(856287005, 0, 0) };
	Var5 = { func_401(856287005, Var0, Var0.f_4, 0) };
	iVar10 = func_334(856287005);
	if (_item_database_get_has_slot_info(iVar10, 0, &iVar11))
	{
		iVar14 = func_286(Var5, -415648720, 0);
	}
	if (!func_287(iVar14, 0))
	{
		return 0;
	}
	bVar15 = false;
	iVar20 = func_432(856287005);
	iVar9 = 0;
	while (iVar9 < iVar20)
	{
		if (_item_database_get_has_slot_info(iVar10, iVar9, &iVar11))
		{
			bVar15 = false;
			iVar21 = func_286(Var5, iVar11, 0);
			if (!func_287(iVar21, 0))
			{
				if (iVar11 == 325139909)
				{
					if (func_662(iVar14) || func_661(iVar14))
					{
					}
					else
					{
						Jump @219; //curOff = 194
						if (iVar11 == 986998820)
						{
							if (func_662(iVar14))
							{
							}
							else
							{
								bVar15 = true;
								Jump @259; //curOff = 222
								if (iVar11 == -1189569496)
								{
									if (!func_662(iVar14) && func_781(iVar21))
									{
										bVar15 = true;
									}
								}
								if (bVar15)
								{
									if (func_782(iVar11, &Var16, 1))
									{
										if (!func_406(Var16, 1))
										{
										}
									}
								}
							}
							iVar9++;
							return 1;
						}
					}
				}
			}
		}
	}
}

bool func_665(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	iVar0 = func_411(bParam7);
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

bool func_666(var uParam0, var uParam1)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (!_0x025a1b1fb03fbf61(func_411(0), uParam0, uParam1, 29, 1))
	{
		return false;
	}
	return true;
}

int func_667(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_287(iParam0, 0))
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

int func_668(int iParam0)
{
	if (!func_287(*iParam0, 0))
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

bool func_669(int iParam0, var uParam1, bool bParam2)
{
	if (!func_287(iParam0, 0))
	{
		return false;
	}
	Var0 = { func_398(iParam0, 0, 1) };
	iVar5 = 1728382685;
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_399((386 + iVar29), 1);
		if (func_400(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_396(iParam0, &Var6, iVar5);
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

int func_670(int iParam0)
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

float func_671(int iParam0)
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
			return func_783(iParam0);
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
			return func_783(iParam0);
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
			return func_783(iParam0);
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

bool func_672(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_205(18);
		case 2:
			return func_205(20);
		case 1:
			return func_205(19);
		default:
			break;
	}
	return true;
}

void func_673(int iParam0, float fParam1, bool bParam2)
{
	if (func_23() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_205(31))
	{
		return;
	}
	iVar0 = func_162(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	set_attribute_points(Global_35, iParam0, floor(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_162(iParam0);
	if (func_784(iParam0) && func_785(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_786(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_787(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!is_radar_hidden() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_321(func_788(iParam0), 0);
					}
					func_789(iParam0, iVar2, iVar3);
					func_790(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = get_game_timer();
}

char* func_674(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_675(int iParam0)
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

void func_676(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_677(int iParam0, int iParam1)
{
	if (func_23() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_678(int iParam0)
{
	if (func_23() != -1)
	{
		if (func_585(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_585(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_679(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_585(iParam0, 65536) && !func_585(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_585(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_585(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_680()
{
	return Global_1905944->f_5694;
}

bool func_681(int iParam0, var uParam1)
{
	if (!func_791(iParam0))
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

int func_682()
{
	return func_792(Global_40.f_12019);
}

int func_683()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_521(iVar1);
		if (func_193(iVar2, 1, 0) || func_689(func_688(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_684()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_793(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_685()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_694(_0x126cbebba46693cf(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_686()
{
	return _0x3a65f4844913a047(2103522376, 0);
}

int func_687(int iParam0)
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

int func_688(int iParam0)
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

bool func_689(int iParam0)
{
	return (Global_40.f_12019 && iParam0) != 0;
}

char* func_690(int iParam0)
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

int func_691(int iParam0)
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

int func_692(int iParam0)
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

char* func_693(int iParam0)
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

bool func_694(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

char* func_695(int iParam0)
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

char* func_696(int iParam0)
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

bool func_697(int iParam0)
{
	if (func_794(iParam0) && func_193(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_795(iParam0) && func_796(iParam0))
	{
		return true;
	}
	return false;
}

int func_698(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

void func_699(bool bParam0)
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

void func_700(int iParam0)
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

void func_701(bool bParam0)
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

void func_702(bool bParam0)
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

void func_703(bool bParam0)
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

void func_704(bool bParam0)
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

void func_705(bool bParam0)
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

void func_706(bool bParam0)
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

int func_707(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_454(iParam0, 1)]);
}

void func_708()
{
	if (!_unlock_is_unlocked(-1526891582))
	{
		func_797();
		_unlock_set_unlocked(-1526891582, true);
		func_200(-916314281);
		func_377(-916314281, 1, 752097756);
		set_current_ped_weapon(Global_35, -916314281, true, 2, false, false);
		func_200(494733111);
		func_377(494733111, 1, 752097756);
		set_current_ped_weapon(Global_35, 494733111, true, 4, false, false);
	}
}

void func_709(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_798(*iParam0);
	iVar1 = func_799(*iParam0);
	iVar2 = func_800(*iParam0);
	iVar3 = func_801(*iParam0);
	iVar4 = func_802(*iParam0);
	iVar5 = func_803(*iParam0);
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
	iVar6 = func_804(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_804(iVar1, iVar0);
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
	func_805(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_710(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

int func_711(var uParam0)
{
	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_331(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_331(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_331(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_331(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_331(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_331(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

bool func_712(int iParam0, var uParam1)
{
	iVar1 = func_454(func_806(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1946804->f_1497.f_1[iVar1] != 0 && &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1];
		if (func_334(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return true;
		}
	}
	*uParam1 = 0;
	return false;
}

int func_713(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam0 == &Global_1946804->f_57[func_454(iParam1, 1)])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_580(524288))
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

bool func_714(int iParam0)
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

int func_715(int iParam0)
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

int func_716(int iParam0)
{
	return func_807(iParam0, -1);
}

bool func_717(int iParam0, bool bParam1)
{
	return func_808(func_44(), iParam0, bParam1);
}

bool func_718(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

void func_719(int iParam0)
{
	iVar0 = func_763(iParam0, 1);
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

void func_720(int iParam0)
{
	iVar0 = func_763(iParam0, 1);
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

void func_721()
{
	func_720(-939420910);
	func_720(-1187950766);
	func_720(356365161);
	func_720(753127042);
	func_720(-2038424081);
	func_720(1884271742);
	func_720(459290420);
}

void func_722()
{
	func_720(704802028);
	func_720(588987611);
	func_720(2008888900);
	func_720(1649996811);
	func_720(227918160);
	func_720(168171957);
	func_720(1193080109);
	func_720(-491981251);
	func_720(-639037538);
	func_720(-618620429);
}

bool func_723(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_724(int iParam0)
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

void func_725(int iParam0)
{
	Global_40.f_12019.f_43 = (Global_40.f_12019.f_43 || iParam0);
}

bool func_726(var uParam0)
{
	return _0xf83d3dda4d3c8169(uParam0) > 0;
}

int func_727(int iParam0, int iParam1)
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

void func_728()
{
	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		iVar0++;
	}
}

void func_729(int iParam0)
{
	func_734(iParam0, 8, 6);
}

void func_730(int iParam0)
{
	func_809(&(Global_1946804->f_2589), iParam0);
}

void func_731(int iParam0, int iParam1)
{
	func_810(&(Global_1946804->f_2589), iParam0, iParam1);
}

int func_732(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = func_811(0);
	if (iParam2 != 0 && func_812(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_647(iParam0, func_727(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_733(var uParam0, bool bParam1, int iParam2)
{
	bVar6 = func_23() != -1;
	iVar7 = func_811(0);
	if (func_580(32768))
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
			iVar5 = func_727(iVar0, 1);
			if (func_774(iVar5, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
			{
			}
			else if (func_774(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
			{
			}
			else
			{
				iVar4 = func_713(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_813(uParam0);
				if (iVar3 > 0)
				{
					if (!func_580(524288))
					{
						func_736(524288);
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
							iVar5 = func_727(iVar0, 1);
							if (func_774(iVar5, 8))
							{
							}
							else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
							{
							}
							else if (func_774(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
							{
							}
							else
							{
								iVar4 = func_713(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0] = &Global_1946804->f_57[iVar0];
									uParam0->f_1[iVar0]->f_1 = 0;
									if (bParam1)
									{
										func_731(iVar0, iParam2);
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
					func_739(524288);
				}
			}
		}
	}
}

void func_734(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_454(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_454(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_454(iParam0, 1)])->f_10 && iParam1));
}

void func_735(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_814(&(uParam0->f_2[iVar0]), bParam1, bParam2);
		iVar0++;
	}
	if (func_23() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_815(2, Global_26796.f_776)) || Global_1946804->f_1497 != func_651(0))
		{
			if (Global_40.f_7157[Global_40.f_7729] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729] = (&Global_40.f_7157[Global_40.f_7729] - Global_40.f_7157[Global_40.f_7729] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729] |= 4096;
				Global_1946804->f_1497 = func_651(Global_40.f_7729);
				Global_1946804->f_1378 = func_651(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_816(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_643(0, 1);
	}
}

void func_736(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_737(struct<4> Param0)
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
			if (func_817(Param0))
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
			func_818(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_736(8);
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
			if (func_817(Param0))
			{
				return;
			}
			func_818(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_736(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_584(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

void func_738(var uParam0)
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

void func_739(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

bool func_740(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_741(struct<4> Param0)
{
	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_817(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1] == Param0 && Global_1946804->f_769[iVar1]->f_2 == Param0.f_2) && Global_1946804->f_769[iVar1]->f_3 == Param0.f_3) && Global_1946804->f_769[iVar1]->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1] == 34 && func_817(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_818(Param0);
	*Global_1946804->f_769[Global_1946804->f_854] = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_736(8);
}

int func_742()
{
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_334(iVar1) == -999503751)
		{
			if (func_819() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_743(int iParam0)
{
	if (!func_588(iParam0))
	{
		return false;
	}
	if (func_652(iParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_744(int iParam0)
{
	if (!func_588(iParam0))
	{
		return false;
	}
	if (func_652(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_745(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_588(iParam0))
	{
		return;
	}
	if (!func_744(iParam0))
	{
		func_468(iParam0, 2);
		if (bParam2)
		{
			if (!func_33(0, 0, 1))
			{
				func_517(1, 4);
			}
		}
		if ((!func_746() && !bParam1) && !func_33(0, 0, 1))
		{
			func_747(_create_var_string(10, "OUT_JOURN_ADD", func_820(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

bool func_746()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

var func_747(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_748(int iParam0, bool bParam1)
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

void func_749(int iParam0, bool bParam1)
{
	iVar0 = func_821(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_333(50);
			}
			else
			{
				func_333(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_333(51);
			}
			else
			{
				func_333(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_822(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_360();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_360();
			}
			break;
		case 3:
			func_333(24);
			if (bParam1)
			{
				if (!func_822(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_360();
				}
			}
			break;
	}
}

void func_750(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_823(0))
			{
				iVar0++;
			}
			if (func_823(2))
			{
				iVar0++;
			}
			if (func_823(4))
			{
				iVar0++;
			}
			if (!func_824(16))
			{
				if (iVar0 == 1)
				{
					func_825();
					func_321(456, 1);
					func_826(16);
				}
			}
			if (!func_824(32))
			{
				if (iVar0 >= 3)
				{
					func_825();
					func_321(456, 1);
					func_826(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_823(1))
			{
				iVar0++;
			}
			if (func_823(3))
			{
				iVar0++;
			}
			if (func_823(7))
			{
				iVar0++;
			}
			if (!func_824(1))
			{
				if (iVar0 == 1)
				{
					func_827();
					func_321(457, 1);
					func_826(1);
				}
			}
			if (!func_824(2))
			{
				if (iVar0 >= 3)
				{
					func_827();
					func_321(457, 1);
					func_826(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_823(5))
			{
				iVar0++;
			}
			if (func_823(6))
			{
				iVar0++;
			}
			if (func_823(8))
			{
				iVar0++;
			}
			if (!func_824(4))
			{
				if (iVar0 == 1)
				{
					func_828();
					func_321(455, 1);
					func_826(4);
				}
			}
			if (!func_824(8))
			{
				if (iVar0 >= 3)
				{
					func_828();
					func_321(455, 1);
					func_826(8);
				}
			}
			break;
	}
}

void func_751(var uParam0)
{
	func_594(uParam0, 143479330);
	if (Global_1946804->f_1 == 2026485318)
	{
		func_594(uParam0, 617531372);
	}
	else
	{
		func_594(uParam0, 291123060);
	}
}

void func_752(var uParam0, int iParam1, struct<14> Param2)
{
	if (!func_829(uParam0))
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

bool func_753(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_754(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

void func_755(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_62(1356759001) };
	stat_id_set_int(&Var0, iParam0, true);
}

int func_756(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_564(iVar9);
	iVar2 = func_564(iVar10);
	iVar3 = func_564(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_564(iVar12);
	}
	iVar5 = func_565(iVar9);
	iVar6 = func_565(iVar10);
	iVar7 = func_565(iVar11);
	if (iParam2 != 2)
	{
		iVar8 = func_565(iVar12);
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

struct<28> func_757(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var28.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_411(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_761(&Var28) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_758(int iParam0, var uParam1, bool bParam2)
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
					func_830(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_830(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 28))
	{
		func_830(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<17> func_759(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_411(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_761(&Var17) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_760(int iParam0, var uParam1, bool bParam2)
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
					func_830(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_830(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 17))
	{
		func_830(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<16> func_761(var uParam0)
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

int func_762(int iParam0, var uParam1, bool bParam2)
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
					func_830(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_830(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16))
	{
		func_830(iVar0, 1);
		return iVar0;
	}
	return -1;
}

int func_763(int iParam0, int iParam1)
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

int func_764(int iParam0)
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

void func_765(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && iParam0));
}

void func_766(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || iParam0);
}

void func_767(int iParam0, int iParam1)
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
			func_831((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_831(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_15(&(Global_1898164->f_1[0])))
	{
		func_415(&(Global_1898164->f_1[0]), 3);
	}
}

int func_768(int iParam0)
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

int func_769(int iParam0)
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

void func_770(var uParam0, int iParam1, int iParam2)
{
	iVar1 = func_832(iParam1);
	func_833(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_834(&(uParam0->f_26), iVar1);
		if (func_835(uParam0->f_26, &iVar0))
		{
			func_836(iVar0, iVar1);
		}
	}
}

bool func_771(int iParam0, int iParam1)
{
	Var0 = { func_398(iParam0, 0, 0) };
	Var5 = { func_401(iParam0, Var0, Var0.f_4, 0) };
	if (func_472(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return false;
	}
	_0x9a113c660aea3832(func_411(0), &Var5, iParam1);
	return true;
}

void func_772(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

bool func_773(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

bool func_774(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_454(iParam0, 1)])->f_10 && iParam1) != 0;
}

void func_775(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_454(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_454(iParam0, 1)])->f_10 || iParam1);
}

void func_776(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_731(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_731(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2]->f_1 == -1333118809 || uParam0->f_1[iVar2]->f_1 == -1158926300)
	{
		uParam0->f_1[iVar2]->f_1 = 1155669136;
		if (bParam3)
		{
			func_731(iVar2, iVar0);
		}
	}
}

char* func_777()
{
	return "MECH_INVENTORY@CLOTHING@OUTFIT_CHANGE";
}

bool func_778(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	if (!func_837(uParam0, iParam3, iParam2) && !func_456(uParam0, iParam2, bParam1, 0, bParam4, 0, 0))
	{
		return false;
	}
	iVar0 = 10;
	if (func_580(32768))
	{
		if (!*bParam1 || (*bParam1 && &uParam0->f_1[iVar0] != &Global_1946804->f_57[iVar0]))
		{
			func_729(1108822547);
		}
		else
		{
			func_838(1108822547);
		}
	}
	func_733(uParam0, 0, 0);
	func_772(iParam5);
	return true;
}

void func_779(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	iVar1 = 1;
	if (bParam2)
	{
		if ((iParam0 == -1 || iParam0 == func_649()) || bParam5)
		{
			func_839();
		}
	}
	if (func_23() == -1)
	{
		iVar0 = Global_40.f_7729;
		if (decor_exist_on(Global_35, "playerChangeOutfits") && decor_get_bool(Global_35, "playerChangeOutfits"))
		{
			iVar0 = &Global_1905941;
		}
		if ((bParam4 && iVar0 > 5) && func_840(Global_1946804->f_1497))
		{
			if (Global_40.f_7157[Global_40.f_7729] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729] = (&Global_40.f_7157[Global_40.f_7729] - Global_40.f_7157[Global_40.f_7729] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				iVar0 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729] |= 4096;
				Global_1946804->f_1497 = func_651(Global_40.f_7729);
				Global_1946804->f_1378 = func_651(Global_40.f_7729);
				iParam3 = 1;
			}
		}
		iVar1 = func_656(iVar0);
	}
	if (iParam3 && iVar1)
	{
		func_816(iParam0, 0, 6);
	}
	if (bParam1)
	{
		func_643(0, 1);
	}
	func_772(0);
}

void func_780(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bVar4 = func_23() != -1;
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
			func_736(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_841(iParam1, 29, bVar4, 1, 0);
			func_841(iParam1, 31, bVar4, 1, 0);
			func_841(iParam1, 30, bVar4, 1, 0);
			func_841(iParam1, 22, bVar4, 1, 0);
			func_841(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_580(32768) && func_774(1108822547, 8)) && func_773(10, iParam3))
	{
		func_842(iParam1, 0, 1);
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
			iVar3 = func_727(iVar1, 1);
			if (func_774(iVar3, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar1]->f_2[0] == -1802376732 || &uParam0->f_1[iVar1] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1];
				if (!func_773(iVar1, iParam3))
				{
				}
				else if ((func_774(iVar3, 6) || &uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1]) || uParam0->f_1[iVar1]->f_1 == 289238755)
				{
					if (!func_774(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_841(iParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1]->f_1 == 289238755)
						{
							Global_1946804->f_2456[iVar1]->f_1 = 289238755;
						}
						func_775(iVar3, 1, 6);
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
								func_841(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1]));
							}
							Global_1946804->f_2456[iVar1] = &uParam0->f_1[iVar1];
							Global_1946804->f_2456[iVar1]->f_1 = uParam0->f_1[iVar1]->f_1;
							if (func_774(iVar3, 1))
							{
								func_734(iVar3, 1, 6);
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

bool func_781(int iParam0)
{
	if ((((iParam0 == 263080063 || iParam0 == -34331381) || iParam0 == -993578318) || iParam0 == 579268144) || iParam0 == 1104489688)
	{
		return true;
	}
	return false;
}

bool func_782(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return false;
	}
	Var2 = { func_608(0, iParam0, -1591664384, -1591664384, 0, 0) };
	func_610(&Var2, func_285());
	if (func_611(&Var2, &iVar0, &iVar1, 0))
	{
		Var16.f_9 = -1591664384;
		iVar30 = 0;
		while (iVar30 < iVar1)
		{
			if (func_395(&Var16, iVar30, iVar0, iVar1))
			{
				if (func_287(Var16.f_4, 0) && !Var16.f_10)
				{
					if (bParam2 && func_781(Var16.f_4))
					{
					}
					else
					{
						*uParam1 = { Var16 };
						func_397(iVar0);
						return true;
					}
				}
			}
			iVar30++;
		}
		func_397(iVar0);
	}
	return false;
}

float func_783(int iParam0)
{
	iVar4 = func_670(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = &Global_40.f_11095.f_11[iVar4];
			iVar5 = func_279(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_427(iVar6) - func_427(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1f;
}

int func_784(int iParam0)
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

int func_785(int iParam0)
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

int func_786(float fParam0, float fParam1)
{
	iVar0 = func_279(fParam0);
	fVar1 = to_float(func_427(iVar0));
	fVar2 = to_float(func_427(iVar0 + 1));
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

int func_787(int iParam0)
{
	if (func_843(iParam0, &iVar0))
	{
		return func_427(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_844())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_844())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_844())
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

int func_788(int iParam0)
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

void func_789(int iParam0, int iParam1, int iParam2)
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
	iVar3 = (iVar3 + func_845(iParam0));
	sVar4 = func_429(func_428(iVar3, iParam2));
	sVar6 = func_846(iParam0);
	if (!is_string_null_or_empty(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = _create_var_string(10, sVar0, func_426(iParam0));
	iVar8 = func_847(iParam0);
	iVar9 = get_hash_key(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = iVar8;
		Var10.f_4 = 1;
		Var10.f_5 = func_848(iParam0);
		_uilog_post_notification(&Var10);
	}
	func_530(sVar7, sVar1, iVar8, iVar9, -479097442, "INPUT_FEED_INTERACT_GENERIC", func_849(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_790(int iParam0, int iParam1)
{
	Global_1347477->f_9[iParam0] = (get_game_timer() + iParam1);
}

bool func_791(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_792(int iParam0)
{
	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

bool func_793(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_794(int iParam0)
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

int func_795(int iParam0)
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

int func_796(int iParam0)
{
	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_850(&iVar0, 0, iVar95, &Var1) && !func_850(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (is_model_a_ped(Var1))
		{
			func_851(iVar0, &Var1);
			if (func_287(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

void func_797()
{
	if (!_0x7c7e4ab748ea3b07())
	{
		return;
	}
	uVar0 = 29;
	func_852(Global_35, &uVar0);
	Var30 = { func_440(0) };
	_0xe36d4a38d28d9cfb(0);
	_0xc04f47d488ef9eba(5, 1, &Var30, 0);
	_0x5d6182f3bce1333b(5, -142743235);
	func_853(0);
	func_854(7);
	func_855(-1623728698, 1, 1, 0);
	if (func_450() == 1160113249)
	{
		func_855(-763730846, 1, 1, 1);
		func_855(-361635024, 1, 1, 1);
	}
	func_856(Global_35, &uVar0);
}

int func_798(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_857(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_799(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_800(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_801(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_802(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_803(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_804(int iParam0, int iParam1)
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

void func_805(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_858(iParam0, iParam6);
	func_859(iParam0, iParam5);
	func_860(iParam0, iParam4);
	func_861(iParam0, iParam3);
	func_862(iParam0, iParam2);
	func_863(iParam0, iParam1);
}

int func_806(int iParam0)
{
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_576(iVar0);
}

int func_807(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = func_411(0);
	}
	if (!_0x112bca290d2eb53c(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_858(&uVar6, iVar0);
	func_859(&uVar6, iVar1);
	func_860(&uVar6, iVar2);
	func_861(&uVar6, iVar3);
	func_862(&uVar6, iVar4);
	func_863(&uVar6, iVar5);
	return uVar6;
}

bool func_808(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_864(iParam1) || !func_864(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_809(var uParam0, int iParam1)
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
			if ((func_865(uParam0->f_2[iVar0], 2) || &uParam0->f_2[iVar0] == iParam1) || &uParam0->f_2[iVar0] == 39)
			{
				*uParam0->f_2[iVar0] = { Var2 };
			}
			else
			{
				if (func_865(uParam0->f_2[iVar0], 1))
				{
					func_866(uParam0->f_2[iVar0], 2, 6);
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

void func_810(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_867(uParam0, 1))
	{
		func_868(uParam0, 1);
	}
	uParam0->f_2[*uParam0]->f_1 = iParam2;
	uParam0->f_2[*uParam0] = iParam1;
	*uParam0++;
}

int func_811(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_450();
	}
	iVar0 = 0;
	if (iParam0 == 24043185)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_812(int iParam0, int iParam1, int iParam2, bool bParam3)
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

int func_813(var uParam0)
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

void func_814(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*Global_1946804->f_1497.f_1[iParam0] = { *Global_1946804->f_1378.f_1[iParam0] };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_23() == -1)
	{
		func_462(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_26796.f_776);
	}
	else
	{
		func_650(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

bool func_815(int iParam0, int iParam1)
{
	if (func_23() == -1)
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

void func_816(int iParam0, bool bParam1, int iParam2)
{
	func_465(&(Global_1946804->f_1378), iParam0);
	func_466(2, iParam0, 6);
	if (bParam1)
	{
		func_643(0, 1);
	}
}

bool func_817(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_818(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

int func_819()
{
	return Global_1946804->f_1497;
}

char* func_820(int iParam0)
{
	iVar0 = func_651(iParam0);
	if (iVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_172(iVar0);
}

int func_821(int iParam0)
{
	if (func_869(iParam0))
	{
		iVar0 = 0;
	}
	else if (func_870(iParam0))
	{
		iVar0 = 1;
	}
	else if (func_871(iParam0))
	{
		iVar0 = 2;
	}
	else if (func_872(iParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

bool func_822(int iParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_193(func_873(iVar0, iParam0), 1, 0))
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

bool func_823(int iParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_193(func_874(iVar0, iParam0), 1, 0))
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

bool func_824(int iParam0)
{
	return (Global_40.f_12003 && iParam0) != 0;
}

void func_825()
{
	if (func_23() != -1)
	{
		return;
	}
	func_377(1654063339, 1, 752097756);
	iVar0 = func_162(1);
	func_789(1, iVar0, 0);
}

void func_826(int iParam0)
{
	Global_40.f_12003 = (Global_40.f_12003 || iParam0);
}

void func_827()
{
	if (func_23() != -1)
	{
		return;
	}
	func_377(1623931083, 1, 752097756);
	iVar0 = func_162(2);
	func_789(2, iVar0, 0);
}

void func_828()
{
	if (func_23() != -1)
	{
		return;
	}
	func_377(-1845241476, 1, 752097756);
	iVar0 = func_162(0);
	func_789(0, iVar0, 0);
}

bool func_829(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

void func_830(int iParam0, int iParam1)
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
	func_875(iParam0, iParam1);
}

void func_831(int iParam0, int iParam1)
{
	Var0 = { *Global_1898164->f_1[iParam0] };
	*Global_1898164->f_1[iParam0] = { *Global_1898164->f_1[iParam1] };
	*Global_1898164->f_1[iParam1] = { Var0 };
}

int func_832(int iParam0)
{
	return &(Global_1946804->f_2657.f_26.f_7[iParam0]);
}

void func_833(int iParam0, int iParam1)
{
	uVar0 = &Global_1946804->f_2657.f_26.f_7[iParam0];
	Global_1946804->f_2657.f_26.f_7[iParam0] = &Global_1946804->f_2657.f_26.f_7[iParam1];
	Global_1946804->f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_834(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - 1);
	func_876(uParam0->f_1[iParam1]);
	*uParam0->f_1[iParam1] = { *uParam0->f_1[*uParam0] };
}

bool func_835(int iParam0, int iParam1)
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

void func_836(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = iParam1;
}

bool func_837(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return false;
	}
	if (iParam2 != 0 && func_459(iParam1) != iParam2)
	{
		return false;
	}
	if (func_815(2, iParam1))
	{
		func_877(uParam0, iParam1);
		return true;
	}
	return false;
}

void func_838(int iParam0)
{
	func_775(iParam0, 8, 6);
}

void func_839()
{
	Global_1946804->f_1497 = Global_1946804->f_1378;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1946804->f_1497.f_1[iVar0] = { *Global_1946804->f_1378.f_1[iVar0] };
		iVar0++;
	}
}

bool func_840(int iParam0)
{
	iVar0 = func_638(0);
	iVar1 = 0;
	func_639(&(Global_1946804->f_964), iVar0, iParam0, 0, 0, 0);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	if (!_0xed4413cee1bf142c(&(Global_1946804->f_964)))
	{
		return false;
	}
	if (!_0xa63cd20f19b961ab(&iVar1, &(Global_1946804->f_964), -1516819610))
	{
		return false;
	}
	return iVar1;
}

void func_841(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	iVar2 = func_727(iParam1, 1);
	if (!bParam2 && iVar2 == 1367443060)
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_878(iParam4);
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

void func_842(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 10;
	if (func_774(1108822547, 6))
	{
		if (bParam2)
		{
			func_841(iParam0, iVar0, func_23() != -1, 0, 0);
			func_775(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		_0xbc6df00d7a4a6819(iParam0, Global_1946804->f_2776.f_1, &(Global_1946804->f_2776.f_3[0]), &(Global_1946804->f_2776.f_3[1]), &(Global_1946804->f_2776.f_3[2]), Global_1946804->f_2776.f_8, Global_1946804->f_2776.f_9, Global_1946804->f_2776.f_10, Global_1946804->f_2776.f_11);
		func_734(1108822547, 1, 6);
	}
	Global_1946804->f_857++;
	if (!bParam1)
	{
		return;
	}
	_update_ped_variation(iParam0, false, true, true, true, false);
}

bool func_843(int iParam0, int iParam1)
{
	return false;
}

bool func_844()
{
	return false;
}

int func_845(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return _0xe787f05dfc977bde(func_411(0), -1845241476, 0);
		case 1:
			return _0xe787f05dfc977bde(func_411(0), 1654063339, 0);
		case 2:
			return _0xe787f05dfc977bde(func_411(0), 1623931083, 0);
	}
	return 0;
}

char* func_846(int iParam0)
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

int func_847(int iParam0)
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

int func_848(int iParam0)
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

int func_849(int iParam0)
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

bool func_850(int iParam0, int iParam1, int iParam2, var uParam3)
{
	if (func_282(iParam1) && !func_879(iParam1))
	{
		iVar0 = func_165(iParam1);
	}
	else
	{
		return false;
	}
	func_880(uParam3);
	iVar5 = func_881(iParam2);
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

void func_851(int iParam0, int iParam1)
{
	iVar0 = get_ped_index_from_entity_index(iParam0);
	if (does_entity_exist(iVar0))
	{
		func_882(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_883(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

void func_852(int iParam0, var uParam1)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	uVar0 = 29;
	_copy_memory(uParam1, &uVar0, 30);
	iVar30 = 0;
	while (iVar30 < 29)
	{
		iVar31 = 0;
		get_current_ped_weapon(Global_35, &iVar31, false, iVar30, true);
		if (func_204(iVar31))
		{
			(*uParam1)[iVar30] = iVar31;
		}
		else
		{
			(*uParam1)[iVar30] = 0;
		}
		iVar30++;
	}
}

void func_853(bool bParam0)
{
	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_287(iVar1, 0))
		{
			func_452(iVar1, 0, bParam0);
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

void func_854(int iParam0)
{
	Global_1946804->f_2657.f_26.f_2 = 3;
	Global_1946804->f_2657.f_26.f_1 = 3;
	Global_1946804->f_2657.f_26 = 3;
	if (func_23() == -1)
	{
		func_884(352481484);
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
		if (func_334(iVar2) != -999503751)
		{
			func_885(&(Global_1946804->f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_771(iVar2, 0))
		{
			func_886(iVar2, &Global_1946804->f_1497.f_1[iVar1] == &Global_1946804->f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_855(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_887(iParam0))
	{
		return;
	}
	iVar0 = func_334(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_888(iParam0, &(Global_1946804->f_2657.f_21), Global_1946804->f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_888(iParam0, &(Global_1946804->f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_888(iParam0, &(Global_1946804->f_2657.f_20), Global_1946804->f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_888(iParam0, &(Global_1946804->f_2657.f_22), Global_1946804->f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_888(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_888(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_889(0))
	{
		func_890(iParam0, 1);
		if (func_450() == 1160113249)
		{
			func_890(func_889(-2125499975), 0);
		}
		else
		{
			func_890(func_889(1160113249), 0);
		}
	}
	func_642();
	if (func_891(iVar0))
	{
		_0x766315a564594401(func_411(0), iParam0, 0);
	}
	func_886(iParam0, bParam3);
	if (bParam2)
	{
		func_643(0, 0);
	}
}

void func_856(int iParam0, var uParam1)
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
				if (func_536(uParam1[iVar0]))
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

int func_857(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_858(int iParam0, int iParam1)
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

void func_859(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_860(int iParam0, int iParam1)
{
	iVar0 = func_799(*iParam0);
	iVar1 = func_798(*iParam0);
	if (iParam1 < 1 || iParam1 > func_804(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_861(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_862(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_863(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

bool func_864(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_803(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_802(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_801(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_798(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_799(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_800(iParam0);
	if (iVar5 < 1 || iVar5 > func_804(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_865(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_866(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_867(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_868(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_869(int iParam0)
{
	if (!func_287(iParam0, 0))
	{
		return false;
	}
	if (func_331(iParam0, -1066545920))
	{
		return true;
	}
	return false;
}

bool func_870(int iParam0)
{
	if (!func_287(iParam0, 0))
	{
		return false;
	}
	if (func_331(iParam0, -284267618))
	{
		return true;
	}
	return false;
}

bool func_871(int iParam0)
{
	if (!func_287(iParam0, 0))
	{
		return false;
	}
	if (func_331(iParam0, 363491182))
	{
		return true;
	}
	return false;
}

bool func_872(int iParam0)
{
	if (!func_287(iParam0, 0))
	{
		return false;
	}
	if (func_331(iParam0, 1406113494))
	{
		return true;
	}
	return false;
}

int func_873(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_892(iParam0);
		case 1:
			return func_893(iParam0);
		case 2:
			return func_894(iParam0);
		case 3:
			return func_895(iParam0);
	}
	return 0;
}

int func_874(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_896(iParam0);
		case 1:
			return func_897(iParam0);
		case 2:
			return func_898(iParam0);
		case 3:
			return func_899(iParam0);
		case 4:
			return func_900(iParam0);
		case 5:
			return func_901(iParam0);
		case 6:
			return func_902(iParam0);
		case 7:
			return func_903(iParam0);
		case 8:
			return func_904(iParam0);
	}
	return 0;
}

void func_875(int iParam0, int iParam1)
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

void func_876(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_905(&(uParam0->f_3));
}

void func_877(var uParam0, int iParam1)
{
	if (func_23() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		*uParam0 = Global_26796.f_26[iParam1]->f_1;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			*uParam0->f_1[iVar0] = { *Global_26796.f_26[iParam1]->f_1.f_1[iVar0] };
			iVar0++;
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	*uParam0 = Global_36638.f_45.f_350.f_26[iParam1]->f_1;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*uParam0->f_1[iVar0] = { *Global_36638.f_45.f_350.f_26[iParam1]->f_1.f_1[iVar0] };
		iVar0++;
	}
}

int func_878(int iParam0)
{
	iVar0 = func_334(iParam0);
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

bool func_879(int iParam0)
{
	iParam0 = func_280(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_282(iParam0))
	{
		return false;
	}
	iVar0 = func_165(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

void func_880(var uParam0)
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

int func_881(int iParam0)
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

void func_882(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
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

bool func_883(var uParam0, int iParam1, int iParam2, int iParam3)
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

void func_884(int iParam0)
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
	Var2 = { func_608(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (func_611(&Var2, &iVar0, &iVar1, 0))
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
		func_397(iVar0);
	}
}

void func_885(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_906(iParam2, *uParam0);
	func_907(uParam0->f_1[*uParam0], iParam1, -1, 1, 0);
	*uParam0++;
}

void func_886(int iParam0, bool bParam1)
{
	Var0 = { func_398(iParam0, 0, 0) };
	Var5 = { func_401(iParam0, Var0, Var0.f_4, 0) };
	if (func_472(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	_0x65a5f70f4a292ebe(func_411(0), &Var5, bParam1);
}

bool func_887(int iParam0)
{
	if (func_23() == -1)
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

int func_888(int iParam0, var uParam1, int iParam2, bool bParam3)
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
	if (func_640(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_771(iParam0, 0))
	{
		return 0;
	}
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = iVar1;
	if (func_334(iParam0) != -999503751)
	{
		func_885(&(Global_1946804->f_2657.f_26.f_26), iParam0, Global_1946804->f_2657.f_19);
	}
	Global_1946804->f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_889(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_450();
	}
	if (iParam0 == 1160113249)
	{
		return -763730846;
	}
	return -1535516064;
}

int func_890(int iParam0, int iParam1)
{
	Var0 = { func_398(iParam0, 0, 0) };
	Var5 = { func_401(iParam0, Var0, Var0.f_4, 0) };
	if (func_472(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	_0x0349404a22736740(iParam1, func_411(0), &Var5);
	return 1;
}

bool func_891(int iParam0)
{
	return func_908(func_764(iParam0));
}

int func_892(int iParam0)
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

int func_893(int iParam0)
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

int func_894(int iParam0)
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

int func_895(int iParam0)
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

int func_896(int iParam0)
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

int func_897(int iParam0)
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

int func_898(int iParam0)
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

int func_899(int iParam0)
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

int func_900(int iParam0)
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

int func_901(int iParam0)
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

int func_902(int iParam0)
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

int func_903(int iParam0)
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

int func_904(int iParam0)
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

void func_905(var uParam0)
{
	if (*uParam0 && _0x93ffd92f05ec32fd(uParam0->f_1))
	{
		_0x13e7320c762f0477(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_906(int iParam0, var uParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_907(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (_0x93ffd92f05ec32fd(uParam0->f_3.f_1))
	{
		func_876(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_454(func_453(iParam1), 1);
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
		func_909(uParam0);
	}
}

bool func_908(int iParam0)
{
	return (Global_1946804->f_2657.f_26.f_6 && iParam0) != 0;
}

void func_909(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_910(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

void func_910(var uParam0, var uParam1, var uParam2)
{
	iVar0 = func_911(func_450());
	if (*uParam0)
	{
		func_905(uParam0);
	}
	uParam0->f_1 = _0xf6d9e1f3560cbf8e(iVar0, uParam1, 0, func_23() != -1, uParam2);
	*uParam0 = 1;
}

int func_911(int iParam0)
{
	if (func_23() == -1)
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

