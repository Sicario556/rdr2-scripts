void __EntryFunction__()
{
	iLocal_0 = 1;
	fLocal_12 = 1f;
	fLocal_13 = 1f;
	sLocal_19 = "mech_skin@BUCK_BUTCHER";
	sLocal_20 = "PBL_BASE";
	sLocal_21 = "PBL_DUMP";
	sLocal_22 = "PBL_DROP_IN";
	iLocal_69 = -1;
	iLocal_2 = vScriptParam_0.x;
	uLocal_3 = vScriptParam_0.y;
	uLocal_4 = vScriptParam_0.z;
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
	_0xe7282390542f570d(iLocal_2);
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
	if (iLocal_1 != 0)
	{
		if (_get_number_of_references_of_script_with_name_hash(iLocal_1) == 0)
		{
			return iLocal_0;
		}
		else
		{
			return true;
		}
	}
	return iLocal_0;
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
	if (!bLocal_37)
	{
		bLocal_37 = true;
	}
	if (is_ped_injured(Global_35))
	{
		iLocal_0 = 0;
		if (bLocal_46)
		{
			Global_1914319->f_16855 = 19;
			bLocal_46 = false;
		}
		return;
	}
	iVar0 = 0;
	bVar1 = false;
	func_12(0);
	set_ped_can_play_gesture_anims(Global_35, 0, 1);
	_0x2804658eb7d8a50b(5, -584683016);
	switch (iLocal_73)
	{
		case 0:
			if (func_13(&uLocal_70))
			{
				if (func_14(&uLocal_70) > 3f)
				{
					func_15(&uLocal_70);
					func_16(1);
					func_17(1);
				}
			}
			else
			{
				func_18(&uLocal_70, 0);
			}
			break;
		case 1:
			if (request_script_audio_bank("TITHE_DONATION") == 0)
			{
				return;
			}
			func_19();
			func_18(&uLocal_53, 0);
			bLocal_36 = func_20(&iLocal_39, &iLocal_38);
			sLocal_68 = "scenario@MECH@PROP_PLAYER_CAMP_CASH_BOX@EXIT_ALT";
			if (iLocal_69 < 0)
			{
				iLocal_69 = _create_anim_scene(sLocal_68, 0, 0, false, true);
				load_anim_scene(iLocal_69);
			}
			if (bLocal_36)
			{
				request_model(iLocal_38, false);
				func_17(6);
			}
			else
			{
				iLocal_44 = func_21(1);
				iLocal_41 = 1;
				if (iLocal_44 >= iVar0)
				{
					iLocal_42 = iVar0;
				}
				else
				{
					iLocal_42 = iLocal_44;
				}
				iLocal_38 = -1281909308;
				request_model(iLocal_38, false);
				if ((is_ped_using_any_scenario(Global_35) && _is_anim_scene_loaded(iLocal_69, true, false)) && func_22())
				{
					func_23();
					_0xa3a9299c4f2adb98(Global_35);
					if ((func_24(iLocal_56) && func_24(iLocal_57)) && func_24(iLocal_58))
					{
						func_17(2);
					}
					if (Global_1914319->f_16855 == 19)
					{
						Global_1914319->f_16855 = -1;
						bLocal_46 = true;
					}
				}
			}
			break;
		case 2:
			if (func_25(iLocal_58, 1))
			{
				func_26();
				play_sound_frontend("Exit", "HUD_Donate_Sounds", true, 0);
				_0xd999e379265a4501(Global_35, sLocal_68, 0);
				clear_ped_tasks(Global_35, 1, 0);
			}
			if (func_25(iLocal_57, 1))
			{
				play_sound_frontend("Give_Item_Enter", "HUD_Donate_Sounds", true, 0);
				func_26();
				func_27(1);
				_launch_app_by_hash_with_entry(-4058091, -605765767);
				iLocal_42 = 0;
				func_17(5);
			}
			if (func_25(iLocal_56, 1))
			{
				play_sound_frontend("Give_Money_Enter", "HUD_Donate_Sounds", true, 0);
				iLocal_42 = iVar0;
				func_26();
				iLocal_61 = func_28("PAY_CASH", 1138488863, Global_35, 1, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
				func_30(iLocal_61, "PAY_CASH", func_29(_0x2b6846401d68e563((to_float(iLocal_42) / 100f), 2), 109029619));
				func_31(iLocal_61, 763444929, 0, 1);
				iLocal_59 = func_28("SET_CASH_UP", 619936437, Global_35, 1, 0, 0, 0, 3, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
				func_31(iLocal_59, 763444929, 0, 1);
				iLocal_60 = func_28("SET_CASH_DOWN", -822125549, Global_35, 1, 0, 0, 0, 3, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
				func_31(iLocal_60, 763444929, 0, 1);
				iLocal_62 = func_28("BACK_TITHE", 814057702, Global_35, 1, 0, 0, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
				func_31(iLocal_62, 763444929, 0, 1);
				func_17(3);
			}
			break;
		case 5:
			if (_is_app_active(-4058091))
			{
				func_17(4);
			}
			break;
		case 4:
			if (func_32(4))
			{
				if (&Global_1935689->f_10181[Global_1935689->f_10187] > 0)
				{
					iLocal_24[iLocal_23] = func_33();
					func_34();
					iLocal_23++;
					func_36(func_35(0), 0, 0);
					func_37(4);
				}
			}
			if (func_32(2))
			{
				func_37(2);
			}
			if (func_32(8))
			{
				func_37(8);
			}
			if (func_32(16))
			{
				func_37(16);
			}
			if (iLocal_23 == 10)
			{
				_close_app_by_hash(-4058091);
			}
			if (!_is_app_active(-4058091))
			{
				if (func_33() == 0)
				{
					func_23();
					func_17(2);
				}
				else
				{
					func_17(11);
				}
			}
			break;
		case 11:
			clear_ped_tasks(Global_35, 1, 0);
			func_38(&uLocal_63, 1, 1);
			func_38(&uLocal_64, 1, 1);
			func_39();
			func_17(10);
			break;
		case 3:
			_uiprompt_set_active_group_this_frame(763444929, "CASH_TITHE", 1, 0, 0, 0);
			if (func_40(iLocal_59, 1) || func_25(iLocal_59, 1))
			{
				if (func_13(&uLocal_47) == 0)
				{
					func_18(&uLocal_47, 0);
				}
			}
			else if (func_13(&uLocal_47))
			{
				func_15(&uLocal_47);
			}
			if (func_40(iLocal_60, 1) || func_25(iLocal_60, 1))
			{
				if (func_13(&uLocal_50) == 0)
				{
					func_18(&uLocal_50, 0);
				}
			}
			else if (func_13(&uLocal_50))
			{
				func_15(&uLocal_50);
			}
			if (func_14(&uLocal_47) > (func_41() * 15f) || func_14(&uLocal_50) > (func_41() * 15f))
			{
				if (func_42(0))
				{
					iLocal_41 = 1000;
				}
				else
				{
					iLocal_41 = 0;
				}
			}
			else if (func_14(&uLocal_47) > (func_41() * 12f) || func_14(&uLocal_50) > (func_41() * 12f))
			{
				if (func_42(0))
				{
					iLocal_41 = 100;
				}
				else
				{
					iLocal_41 = 0;
				}
			}
			else if (func_14(&uLocal_47) > (func_41() * 9f) || func_14(&uLocal_50) > (func_41() * 9f))
			{
				if (func_42(2))
				{
					iLocal_41 = 100;
				}
				else
				{
					iLocal_41 = 0;
				}
			}
			else if ((func_14(&uLocal_47) > (func_41() * 4f) || func_14(&uLocal_50) > (func_41() * 4f)) || func_14(&uLocal_53) < 1f)
			{
				if (func_42(5) || func_43())
				{
					iLocal_41 = 100;
				}
				else
				{
					iLocal_41 = 0;
				}
			}
			else if (func_14(&uLocal_47) > (func_41() * 3f) || func_14(&uLocal_50) > (func_41() * 3f))
			{
				iLocal_41 = 4;
			}
			else if (func_14(&uLocal_47) > (func_41() * 2f) || func_14(&uLocal_50) > (func_41() * 2f))
			{
				iLocal_41 = 3;
			}
			else if (func_14(&uLocal_47) > func_41() || func_14(&uLocal_50) > func_41())
			{
				iLocal_41 = 2;
			}
			else
			{
				iLocal_41 = 1;
			}
			if (func_25(iLocal_59, 1) || func_13(&uLocal_47))
			{
				if (iLocal_41 != 0 && iLocal_42 != iLocal_44)
				{
					if ((iLocal_42 + iLocal_41) > iLocal_44)
					{
						iLocal_42 = iLocal_44;
					}
					else
					{
						iLocal_42 = (iLocal_42 + iLocal_41);
					}
					if (func_44(0))
					{
						_0x0f2a2175734926d8("Amount_Increase", "HUD_Donate_Sounds");
					}
					play_sound_frontend("Amount_Increase", "HUD_Donate_Sounds", true, 0);
				}
				if (func_44(1))
				{
					func_45(&uLocal_53);
				}
			}
			if (func_25(iLocal_60, 1) || func_13(&uLocal_50))
			{
				if (iLocal_41 != 0 && iLocal_42 != iVar0)
				{
					if ((iLocal_42 - iLocal_41) < iVar0)
					{
						iLocal_42 = iVar0;
					}
					else
					{
						iLocal_42 = (iLocal_42 - iLocal_41);
					}
					if (func_44(0))
					{
						_0x0f2a2175734926d8("Amount_Decrease", "HUD_Donate_Sounds");
					}
					play_sound_frontend("Amount_Decrease", "HUD_Donate_Sounds", true, 0);
				}
				if (func_44(1))
				{
					func_45(&uLocal_53);
				}
			}
			if (bLocal_45)
			{
				bLocal_45 = false;
				if (func_24(iLocal_61))
				{
					func_30(iLocal_61, "PAY_CASH", func_29(_0x2b6846401d68e563((to_float(iLocal_42) / 100f), 2), 109029619));
				}
			}
			else
			{
				bLocal_45 = true;
			}
			if (func_46(iLocal_61, 1))
			{
				if (iLocal_42 > 0)
				{
					play_sound_frontend("Donate", "HUD_Donate_Sounds", true, 0);
					clear_ped_tasks(Global_35, 1, 0);
					func_47();
					func_17(7);
				}
				else
				{
					func_48("BROKE_TITHE", 10000, 0, 0, 0, 1);
				}
			}
			else if (func_49(iLocal_62, 1))
			{
				func_47();
				func_23();
				func_17(2);
				play_sound_frontend("Exit", "HUD_Donate_Sounds", true, 0);
			}
			break;
		case 6:
			if (is_entity_playing_anim(Global_35, "script_camp@cash_box", "base", 1))
			{
				if (_get_entity_anim_current_time(Global_35, "script_camp@cash_box", "base") > 0.5f)
				{
					clear_ped_tasks(Global_35, 1, 0);
					func_17(7);
				}
			}
			break;
		case 7:
			if (has_model_loaded(iLocal_38))
			{
				iLocal_40 = create_object(iLocal_38, Global_36, true, true, false, false, true);
				attach_entity_to_entity(iLocal_40, Global_35, get_ped_bone_index(Global_35, 7966), 0f, -0.04f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
				if (bLocal_36)
				{
					func_17(9);
				}
				else
				{
					if (iLocal_42 < 100)
					{
						set_entity_visible(iLocal_40, false);
					}
					func_17(8);
				}
			}
			break;
		case 10:
			bVar1 = false;
			if (!bLocal_35)
			{
				if (!is_ped_using_any_scenario(Global_35))
				{
					bVar1 = true;
				}
				if (has_anim_event_fired(Global_35, -1898385492))
				{
					bVar1 = true;
				}
			}
			if (bVar1)
			{
				bLocal_35 = true;
				iVar2 = 0;
				while (iVar2 < iLocal_23)
				{
					func_51(&(iLocal_24[iVar2]), func_50(&(iLocal_24[iVar2]), 816454899, 0), 1);
					iVar2++;
				}
				func_52(_create_var_string(10, "GIVE_ITEM_TITHE", func_29(_0x2b6846401d68e563((to_float(iLocal_42) * 0.01f), 2), 109029619)), "ITEMTYPE_TEXTURES", 589239430, 0, 109029619, 0, 0, 0, 1);
				func_47();
				func_17(12);
			}
			break;
		case 8:
			bVar1 = false;
			if (!bLocal_35)
			{
				if (!is_ped_using_any_scenario(Global_35))
				{
					bVar1 = true;
				}
				if (has_anim_event_fired(Global_35, -1898385492))
				{
					bVar1 = true;
				}
			}
			if (bVar1)
			{
				bLocal_35 = true;
				func_53(iLocal_42);
				func_47();
				func_17(12);
				if (does_entity_exist(iLocal_40))
				{
					if (is_entity_attached_to_any_ped(iLocal_40))
					{
						detach_entity(iLocal_40, true, false);
					}
				}
				if (func_54(Global_35, 0) && func_54(func_55(0), 0))
				{
					if (func_56(Global_35, func_55(0), 1, 1) < 20f)
					{
						if (has_entity_clear_los_to_entity(func_55(0), Global_35, 17))
						{
							if (func_57(0, 0) == 0)
							{
								func_58(97);
							}
						}
					}
				}
				func_59(iLocal_42, 0, 0, 1, 1);
			}
			break;
		case 9:
			bVar1 = false;
			if (!bLocal_35)
			{
				if (!is_ped_using_any_scenario(Global_35))
				{
					bVar1 = true;
				}
				if (has_anim_event_fired(Global_35, -1898385492))
				{
					bVar1 = true;
				}
			}
			if (bVar1)
			{
				if (does_entity_exist(iLocal_40))
				{
					if (is_entity_attached_to_any_ped(iLocal_40))
					{
						detach_entity(iLocal_40, true, false);
					}
				}
				func_60();
				func_17(12);
				func_39();
				func_61(iLocal_39, 1, 0, -142743235, 0);
				bLocal_35 = true;
			}
			break;
		case 12:
			func_62(iLocal_42);
			func_16(0);
			vVar3 = { get_entity_coords(Global_35, true, false) };
			iVar7 = 0;
			while (iVar7 < 27)
			{
				iVar8 = func_55(iVar7);
				if (((func_63(iVar7) && !func_64(iVar7, 57, 1)) && does_entity_exist(iVar8)) && vdist2(get_entity_coords(iVar8, true, false), vVar3) < 64f)
				{
					func_65(iVar7, 57, 1);
					bVar6 = true;
				}
				iVar7++;
			}
			if (bVar6)
			{
				func_18(&(Global_1359489->f_43), 1);
			}
			if (func_13(&uLocal_47))
			{
				func_15(&uLocal_47);
			}
			if (func_13(&uLocal_50))
			{
				func_15(&uLocal_50);
			}
			if (func_13(&uLocal_53))
			{
				func_15(&uLocal_53);
			}
			iLocal_41 = 1;
			release_named_script_audio_bank("TITHE_DONATION");
			if (bLocal_35)
			{
				func_66(-218211995, 1137976064, 1120952528, 48, 1, 1, 0);
			}
			func_17(13);
			break;
		case 13:
			break;
	}
	func_67();
}

void func_7()
{
	set_player_control(player_id(), true, 0, false);
}

void func_8()
{
	terminate_this_thread();
}

void func_9(int iParam0)
{
	get_event_data(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_2)
	{
		set_event_flag_for_deletion(2, iParam0, 1);
		func_68(&iVar0);
	}
}

void func_10(int iParam0)
{
	get_event_data(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_2)
	{
		set_event_flag_for_deletion(2, iParam0, 1);
		func_69(&iVar0);
	}
}

void func_11(int iParam0)
{
	get_event_data(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_2)
	{
		set_event_flag_for_deletion(2, iParam0, 1);
		func_70(&iVar0);
	}
}

void func_12(bool bParam0)
{
	if (bParam0)
	{
		func_71(4);
	}
	func_71(2);
	set_bit(&(Global_1956580->f_1), 0);
}

bool func_13(var uParam0)
{
	return func_72(*uParam0, 1);
}

float func_14(var uParam0)
{
	if (func_13(uParam0) == 0)
	{
		return 0f;
	}
	return func_73(uParam0);
}

void func_15(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_16(int iParam0)
{
	Global_1347477->f_118 = iParam0;
	Global_1347477->f_6 = iParam0;
}

void func_17(int iParam0)
{
	if (iLocal_73 != iParam0)
	{
		iLocal_73 = iParam0;
	}
}

void func_18(var uParam0, bool bParam1)
{
	if (bParam1 || !func_13(uParam0))
	{
		func_45(uParam0);
	}
}

void func_19()
{
	if (Global_1898068->f_1)
	{
	}
	Global_1898068->f_1 = 0;
}

int func_20(int iParam0, int iParam1)
{
	if (Global_1357549->f_1672 != 0 && Global_1357549->f_1673 != 0)
	{
		*iParam0 = Global_1357549->f_1672;
		*iParam1 = Global_1357549->f_1673;
		return 1;
	}
	return 0;
}

int func_21(int iParam0)
{
	return _money_get_cash_balance();
}

bool func_22()
{
	if (get_distance_between_coords(get_ped_bone_coords(get_ped_index_from_entity_index(Global_35), 22798, 0f, 0f, 0f), get_ped_bone_coords(get_ped_index_from_entity_index(Global_35), 34606, 0f, 0f, 0f), true) < 0.28f)
	{
		return true;
	}
	return false;
}

void func_23()
{
	if (!func_24(iLocal_56))
	{
		iLocal_56 = func_28("MONEY_TITHE", 1138488863, Global_35, 1, 0, 0, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
	}
	if (!func_24(iLocal_57))
	{
		iLocal_57 = func_28("TRINK_TITHE", -69749786, Global_35, 1, 0, 0, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
		if (func_74() == 0 && func_75() == 0)
		{
			func_76(iLocal_57, 1);
		}
	}
	if (!func_24(iLocal_58))
	{
		iLocal_58 = func_28("LEAVE_TITHE", 814057702, Global_35, 1, 0, 0, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
	}
}

bool func_24(int iParam0)
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

bool func_25(int iParam0, bool bParam1)
{
	if (bParam1 && !func_24(iParam0))
	{
		return false;
	}
	iVar0 = func_77(iParam0);
	return _uiprompt_is_just_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_26()
{
	func_38(&iLocal_57, 1, 1);
	func_38(&iLocal_56, 1, 1);
	func_38(&iLocal_58, 1, 1);
	func_38(&iLocal_62, 1, 1);
}

void func_27(bool bParam0)
{
	if (!bParam0)
	{
		func_78(0);
	}
	Global_1935689->f_2 = bParam0;
}

int func_28(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_79(iVar0, 2))
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
				func_80(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

char* func_29(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "LITERAL_STRING", sParam0);
	}
	return func_81(_create_var_string(10, "LITERAL_STRING", sParam0), iParam1);
}

void func_30(int iParam0, char* sParam1, char* sParam2)
{
	if (!func_24(iParam0))
	{
		return;
	}
	iVar0 = func_77(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(10, sParam1, sParam2));
}

void func_31(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_24(iParam0))
	{
		return;
	}
	iVar0 = func_77(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

bool func_32(int iParam0)
{
	return (Global_1935689->f_10165 && iParam0) != 0;
}

int func_33()
{
	return Global_1357549->f_1672;
}

void func_34()
{
	iVar0 = func_50(func_33(), 816454899, 0);
	if (iVar0 > 500)
	{
		play_sound_frontend("Tithe_Donation_Large", "Tithe_Donation_Sounds", true, 0);
	}
	else if (iVar0 > 250)
	{
		play_sound_frontend("Tithe_Donation_Medium", "Tithe_Donation_Sounds", true, 0);
	}
	else if (iVar0 > 0)
	{
		play_sound_frontend("Tithe_Donation_Small", "Tithe_Donation_Sounds", true, 0);
	}
	iLocal_42 = (iLocal_42 + iVar0);
}

bool func_35(bool bParam0)
{
	if (func_82() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_83(bParam0));
}

void func_36(bool bParam0, bool bParam1, int iParam2)
{
	Global_1935689->f_4 = bParam0;
	Global_1935689->f_15 = iParam2;
	if (bParam0)
	{
		Global_1935689->f_5 = 0;
	}
	if (bParam1 || (func_84() && iParam2 == 0))
	{
		func_85(1);
		func_86(1);
	}
}

void func_37(int iParam0)
{
	Global_1935689->f_10165 = (Global_1935689->f_10165 - (Global_1935689->f_10165 && iParam0));
}

void func_38(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_24(*iParam0))
	{
		*iParam0 = 0;
		return;
	}
	iVar0 = func_77(*iParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*iParam0 = 0;
		return;
	}
	func_87(iVar0);
	*iParam0 = 0;
}

void func_39()
{
	Global_1357549->f_1672 = 0;
	Global_1357549->f_1673 = 0;
}

bool func_40(int iParam0, bool bParam1)
{
	if (bParam1 && !func_24(iParam0))
	{
		return false;
	}
	iVar0 = func_77(iParam0);
	if (!_uiprompt_has_hold_mode((*Global_1945938)[iVar0]->f_3))
	{
		return is_control_pressed(2, (*Global_1945938)[iVar0]->f_4);
	}
	return _uiprompt_is_hold_mode_running((*Global_1945938)[iVar0]->f_3);
}

float func_41()
{
	return 0.5f;
}

bool func_42(int iParam0)
{
	if ((iLocal_42 % 100) != 0 && iLocal_42 != func_21(1))
	{
		fVar0 = (IntToFloat(iLocal_42) * 0.01f);
		if (func_13(&uLocal_47))
		{
			iLocal_42 = ceil(fVar0) * 100;
		}
		else
		{
			iLocal_42 = floor(fVar0) * 100;
		}
	}
	if (is_control_just_pressed(2, 619936437) || is_control_just_pressed(2, -822125549))
	{
		return true;
	}
	iLocal_43++;
	if (iLocal_43 > iParam0)
	{
		iLocal_43 = 0;
		return true;
	}
	return false;
}

bool func_43()
{
	if (func_14(&uLocal_53) < 1f)
	{
		if (func_25(iLocal_59, 1))
		{
			return true;
		}
		if (func_25(iLocal_60, 1))
		{
			return true;
		}
	}
	return false;
}

bool func_44(bool bParam0)
{
	if (iLocal_41 == 1000 || iLocal_41 == 100)
	{
		return true;
	}
	if (bParam0)
	{
		if (iLocal_41 == 0)
		{
			return true;
		}
	}
	return false;
}

void func_45(var uParam0)
{
	func_88(uParam0, 0f);
}

bool func_46(int iParam0, bool bParam1)
{
	if (bParam1 && !func_24(iParam0))
	{
		return false;
	}
	iVar0 = func_77(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

void func_47()
{
	func_38(&iLocal_56, 1, 1);
	func_38(&iLocal_57, 1, 1);
	func_38(&iLocal_58, 1, 1);
	func_38(&iLocal_59, 1, 1);
	func_38(&iLocal_60, 1, 1);
	func_38(&iLocal_61, 1, 1);
	func_38(&iLocal_62, 1, 1);
	func_38(&uLocal_65, 1, 1);
	func_38(&uLocal_66, 1, 1);
	func_38(&uLocal_67, 1, 1);
}

var func_48(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_49(int iParam0, bool bParam1)
{
	if (bParam1 && !func_24(iParam0))
	{
		return false;
	}
	iVar0 = func_77(iParam0);
	return _uiprompt_is_released((*Global_1945938)[iVar0]->f_3);
}

int func_50(int iParam0, int iParam1, bool bParam2)
{
	if (!func_89(iParam0, iParam1, &Var0, &iVar21, bParam2))
	{
		if (!bParam2)
		{
		}
		return 0;
	}
	iVar22 = 0;
	while (iVar22 < iVar21)
	{
		if (&Var0[iVar22] == 2084597891)
		{
			return Var0[iVar22]->f_1;
		}
		else if (&Var0[iVar22] == 0)
		{
		}
		else
		{
			iVar22++;
		}
	}
	if (!bParam2)
	{
	}
	return 0;
}

void func_51(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (func_90(-1, iParam0, iParam1, Global_40.f_4283.f_440[0], 1, bParam2))
	{
		return;
	}
	if (func_90(-1, iParam0, iParam1, Global_40.f_4283.f_440[1], 1, bParam2))
	{
		if (&Global_40.f_4283.f_440[1] == 0)
		{
			Global_40.f_4283.f_440[1] = func_91(Global_40.f_4283.f_440[0]);
		}
		return;
	}
	func_92(&(Global_40.f_4283.f_440));
	func_90(-1, iParam0, iParam1, Global_40.f_4283.f_440[1], 1, bParam2);
}

var func_52(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	Var0 = -2;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = _0xb249ebcb30dd88e0(&Var0, &Var13, iParam8);
	func_93(sParam0, sParam1, iParam2);
	return uVar20;
}

void func_53(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_90(-1, 0, iParam0, Global_40.f_4283.f_440[0], 1, 1))
	{
		return;
	}
	if (func_90(-1, 0, iParam0, Global_40.f_4283.f_440[1], 1, 1))
	{
		if (&Global_40.f_4283.f_440[1] == 0)
		{
			Global_40.f_4283.f_440[1] = func_91(Global_40.f_4283.f_440[0]);
		}
		return;
	}
	func_92(&(Global_40.f_4283.f_440));
	func_90(-1, 0, iParam0, Global_40.f_4283.f_440[1], 1, 1);
}

int func_54(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return 1;
	}
	if (func_94(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return 0;
		}
	}
	if (func_94(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return 0;
		}
	}
	if (func_94(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_94(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return 0;
		}
	}
	if (func_94(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return 0;
		}
	}
	if (func_94(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return 0;
		}
	}
	if (func_94(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return 0;
		}
	}
	if (func_94(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_55(int iParam0)
{
	if (!func_95(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

float func_56(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_57(int iParam0, bool bParam1)
{
	if (!func_95(iParam0))
	{
		return false;
	}
	if (!bParam1)
	{
		if (func_96(iParam0) || func_64(iParam0, 44, 1))
		{
			return false;
		}
	}
	if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_1) || !_0xa8120ebeaf290c7a((*Global_1360165)[iParam0]->f_1))
	{
		return false;
	}
	iVar0 = _0xec254c2c9b0f08f1((*Global_1360165)[iParam0]->f_1, (*Global_1360165)[iParam0]->f_47);
	return iVar0 == -285580801;
}

void func_58(int iParam0)
{
	Global_1357549->f_1671 = iParam0;
}

void func_59(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_97(iParam0);
	if (bParam3)
	{
		func_98(iParam0, sParam1, iParam2);
	}
}

void func_60()
{
	iVar0[0] = -774242862;
	iVar0[1] = -498064062;
	iVar0[2] = -2100684454;
	iVar0[3] = -1167047117;
	iVar0[4] = 396444962;
	iVar0[5] = 513694516;
	iVar0[6] = 24657440;
	iVar8 = 0;
	while (iVar8 < 7)
	{
		if (func_99(&(iVar0[iVar8]), 1, 0))
		{
			func_100(-666548248, 1, 0);
			func_66(2071287828, 1017034651, 1120952528, 2, 1, 1, 0);
			iVar9 = func_101(&(iVar0[iVar8]));
			iVar10 = func_102(&(iVar0[iVar8]));
			if (iVar9 > iVar10)
			{
				iVar9 = (iVar9 - iVar10);
			}
			else
			{
				iVar10 = 0;
			}
			func_103(&(iVar0[iVar8]), 1, -142743235, 0, 0);
			func_51(&(iVar0[iVar8]), iVar9, 1);
			if (iVar9 > 0)
			{
				func_52(_create_var_string(2, "FEED_DEBT_RECOVERED", iVar9), "ITEMTYPE_TEXTURES", 589239430, 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
			}
			if (iVar10 > 0)
			{
				func_104(iVar10, 0, 1065353216, 1, 752097756);
				func_52(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar10), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
			}
		}
		iVar8++;
	}
}

int func_61(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_105(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_106(iParam0, 1);
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
			func_107(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_99(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_108(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_109(iParam0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_109(iParam0, 0, 0) - iParam1) < 0)
		{
			func_61(iParam0, func_109(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_110(iParam0) == -427144552)
	{
		if (!func_111(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_103(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_35(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_107(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_112(iParam0, iParam1);
	return 1;
}

void func_62(int iParam0)
{
	if (iParam0 > 2000)
	{
		play_sound_frontend("Tithe_Donation_Large", "Tithe_Donation_Sounds", true, 0);
	}
	else if (iParam0 > 500)
	{
		play_sound_frontend("Tithe_Donation_Medium", "Tithe_Donation_Sounds", true, 0);
	}
	else if (iParam0 > 0)
	{
		play_sound_frontend("Tithe_Donation_Small", "Tithe_Donation_Sounds", true, 0);
	}
	if (iParam0 > 0)
	{
		if (iParam0 >= 2000)
		{
			func_113(11, 0, 1, 0, 0, 0, 1.5f, 0);
		}
		else if (iParam0 >= 500)
		{
			if (func_114(Global_1357549->f_1487, 1))
			{
				Global_1357549->f_1487 = &Global_1899515;
				func_115(&(Global_1357549->f_1487), 0, 0, 24, 0, 0, 0, 0);
				func_113(11, 0, 1, 0, 0, 0, 1065353216, 0);
			}
		}
		else if (func_114(Global_1357549->f_1486, 1))
		{
			Global_1357549->f_1486 = &Global_1899515;
			func_115(&(Global_1357549->f_1486), 0, 0, 24, 0, 0, 0, 0);
			func_113(10, 0, 1, 0, 0, 0, 1065353216, 0);
		}
	}
}

bool func_63(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_64(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_95(iParam0))
		{
			return false;
		}
	}
	func_116(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_58[iVar0]), iVar1);
}

void func_65(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_95(iParam0))
		{
			return;
		}
	}
	func_116(iParam1, &iVar0, &iVar1);
	set_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

int func_66(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
	iVar2 = func_117(iParam0);
	iVar3 = func_118(iParam0);
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == 176656832)
		{
			Global_40.f_4283.f_6[iVar0] = iParam0;
			Global_40.f_4283.f_6[iVar0]->f_2 = iParam1;
			Global_40.f_4283.f_6[iVar0]->f_3 = iVar3;
			if (iParam3 > 0)
			{
				iVar1 = func_119();
				func_115(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0]->f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0]->f_4 = iVar2;
			func_120(iParam0, 1);
			if (func_121(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4]->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4] != iParam0)
					{
						func_122(Global_40.f_4283.f_6[iVar4], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_123(1, iParam0);
				}
				else
				{
					func_124(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_67()
{
	if (!is_ped_using_any_scenario(Global_35))
	{
		switch (iLocal_73)
		{
			case 0:
			case 1:
				return;
			case 8:
			case 9:
			case 10:
			case 12:
				return;
			default:
				break;
		}
		if (bLocal_46)
		{
			Global_1914319->f_16855 = 19;
			bLocal_46 = false;
		}
		if (does_entity_exist(iLocal_40))
		{
			delete_object(&iLocal_40);
		}
		func_125(8192);
		func_39();
		clear_ped_tasks(Global_35, 1, 0);
		if (_is_app_active(-4058091))
		{
			_close_app_by_hash(-4058091);
		}
		func_126();
		if (func_127(0, 0, 1) == 0)
		{
			func_128(1, -1);
		}
		iLocal_0 = 0;
	}
}

void func_68(int iParam0)
{
}

void func_69(int iParam0)
{
}

void func_70(int iParam0)
{
}

void func_71(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 || iParam0);
}

bool func_72(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_73(var uParam0)
{
	if (!func_13(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_129(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_130() - uParam0->f_1);
}

int func_74()
{
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	func_131("ALL SATCHEL", &iVar1, &iVar2, 1084182731, 0);
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		if (func_132(&Var4, iVar3, iVar1, iVar2))
		{
			if (func_105(Var4.f_4, 0))
			{
				if (func_133(Var4.f_4, -111938901))
				{
					iVar0 = 1;
				}
			}
		}
		iVar3++;
	}
	func_134(iVar1);
	return iVar0;
}

int func_75()
{
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	func_131("ALL SATCHEL", &iVar1, &iVar2, -1162387149, 0);
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		if (func_132(&Var4, iVar3, iVar1, iVar2))
		{
			if (func_105(Var4.f_4, 0))
			{
				iVar0 = 1;
			}
		}
		iVar3++;
	}
	func_134(iVar1);
	return iVar0;
}

void func_76(int iParam0, bool bParam1)
{
	if (!func_24(iParam0))
	{
		return;
	}
	iVar0 = func_77(iParam0);
	_uiprompt_set_enabled((*Global_1945938)[iVar0]->f_3, !bParam1);
}

int func_77(int iParam0)
{
	return iParam0;
}

void func_78(bool bParam0)
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

bool func_79(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

void func_80(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_135(iParam0, 1);
	func_136(iParam0, 1);
	func_137(iParam0, 128);
}

char* func_81(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

int func_82()
{
	return Global_1572887->f_12;
}

int func_83(bool bParam0)
{
	if (func_82() == -1)
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

bool func_84()
{
	if ((Global_1935689->f_10195 != (Global_1935689->f_19.f_203 - 1) || func_139(func_138(0), Global_1935689->f_10190, 0) > 0) || Global_1935689->f_10195 == 15)
	{
		return true;
	}
	return false;
}

void func_85(int iParam0)
{
	Global_1935689->f_11 = iParam0;
}

void func_86(int iParam0)
{
	Global_1935689->f_10 = iParam0;
}

void func_87(int iParam0)
{
	if (!func_140(iParam0))
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

void func_88(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_130() - fParam1);
	func_141(uParam0, 1);
	func_142(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_89(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	*iParam3 = 0;
	if (!func_105(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = 10;
	if (!_item_database_fillout_sell_price(iParam0, iParam1, &Var0))
	{
		return false;
	}
	if (!bParam4)
	{
	}
	*iParam3 = Var0.f_3;
	if (*uParam2 < Var0.f_3)
	{
		return false;
	}
	iVar25 = 0;
	while (iVar25 < Var0.f_3)
	{
		if (!bParam4)
		{
		}
		*(*uParam2)[iVar25] = { *Var0.f_4[iVar25] };
		iVar25++;
	}
	return true;
}

bool func_90(int iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	if (uParam3->f_62 >= 12)
	{
		return false;
	}
	if (iParam2 <= 0)
	{
		return false;
	}
	iVar0 = func_143();
	func_144(iParam2, bParam4);
	if (iVar0 != func_143())
	{
		uParam3->f_1[uParam3->f_62] = 0;
		uParam3->f_1[uParam3->f_62]->f_3 = -1;
		uParam3->f_1[uParam3->f_62]->f_1 = iParam0;
		uParam3->f_1[uParam3->f_62]->f_2 = iParam1;
		uParam3->f_1[uParam3->f_62]->f_4 = iParam2;
		uParam3->f_62++;
		if (bParam4)
		{
			if (iParam1 == 0)
			{
				func_145(iParam2);
			}
			else if (bParam5)
			{
				func_146(1);
			}
		}
	}
	return true;
}

int func_91(var uParam0)
{
	iVar0 = *uParam0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_62)
	{
		iVar0 = (iVar0 + uParam0->f_1[iVar1]->f_4);
		iVar1++;
	}
	return iVar0;
}

void func_92(var uParam0)
{
	Var0.f_1 = 12;
	Var0.f_1.f_1.f_1 = -1;
	Var0.f_1.f_1.f_3 = -1;
	Var0.f_1.f_1.f_5.f_1 = -1;
	Var0.f_1.f_1.f_5.f_3 = -1;
	Var0.f_1.f_1.f_5.f_5.f_1 = -1;
	Var0.f_1.f_1.f_5.f_5.f_3 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_1 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_3 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_1 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_3 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_3 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	Var0.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = -1;
	_copy_memory((*uParam0)[0], (*uParam0)[1], 63);
	_copy_memory((*uParam0)[1], &Var0, 63);
	(*uParam0)[1] = func_91((*uParam0)[0]);
}

void func_93(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

bool func_94(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_95(int iParam0)
{
	return iParam0 > -1;
}

bool func_96(int iParam0)
{
	return func_147(iParam0, 16, 1);
}

void func_97(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_21(1) < iParam0)
	{
		iParam0 = func_21(1);
	}
	_money_decrement_cash_balance(iParam0);
	Var0 = { func_148(1644987397) };
	_0xbd861ae8a5181ed7(&Var0, iParam0);
}

void func_98(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_52(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

bool func_99(int iParam0, int iParam1, bool bParam2)
{
	if (!func_105(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_110(iParam0);
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
		if (!func_149(iParam0, 1))
		{
			return false;
		}
	}
	return func_109(iParam0, 0, bParam2) >= iParam1;
}

int func_100(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == iParam0)
		{
			func_122(Global_40.f_4283.f_6[iVar0], bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_101(int iParam0)
{
	switch (iParam0)
	{
		case -1167047117:
			return 4500;
		case -498064062:
			return 3600;
		case 396444962:
			return 2900;
		case -2100684454:
			return 3800;
		case 513694516:
			return 4000;
		case -774242862:
			return 4300;
		default:
			break;
	}
	return 0;
}

int func_102(int iParam0)
{
	switch (iParam0)
	{
		case -2100684454:
		case -1167047117:
		case -774242862:
		case -498064062:
		case 396444962:
		case 513694516:
			return func_150(-2070039152, 0, -1);
		default:
			break;
	}
	return 0;
}

bool func_103(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_105(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_151(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_152(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_153(iParam0, Var0, Var0.f_4, bParam4) };
	return func_154(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_104(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_155())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_52(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_156(iVar0);
			func_157(iVar0, 0, 0);
		}
		func_52(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		_money_increment_cash_balance(iVar1, iParam4);
		func_158(func_148(1644987397), iVar1);
	}
}

bool func_105(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_106(int iParam0, int iParam1)
{
	if (!func_105(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_110(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_133(iParam0, 1399091007))
	{
		func_159(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

void func_107(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_105(iParam0, 0))
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
	if (!func_160())
	{
		func_161(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_162(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_162(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_163(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_110(iParam0);
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
	else if (!func_164(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	sVar15 = func_81(_create_var_string(10, &cVar2, _create_var_string(0, func_165(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_133(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_165(iParam0));
	}
	func_52(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

struct<2> func_108(int iParam0)
{
	if (!func_105(iParam0, 0))
	{
		return Var0;
	}
	if (func_133(iParam0, -305066475))
	{
		if (func_82() == -1)
		{
			if (func_133(iParam0, -537818634))
			{
				return func_148(189951448);
			}
			else
			{
				return func_148(1176172851);
			}
		}
	}
	else if (func_133(iParam0, -537818634))
	{
		return func_148(-963660207);
	}
	if (func_133(iParam0, 2084895747))
	{
		return func_148(1694039471);
	}
	return Var2;
}

int func_109(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_105(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_110(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_106(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_166(iParam0, 0);
	}
	uVar2 = _0xe787f05dfc977bde(func_83(bParam2), iParam0, 0);
	return uVar2;
}

int func_110(int iParam0)
{
	if (!func_105(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_111(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	Var0 = { func_167(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_169(&Var0, func_168(0));
	}
	if (!func_170(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_132(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_154(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_134(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

void func_112(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_133(iParam0, 606799272))
		{
			func_171(iParam0, iParam1);
		}
		if (func_133(iParam0, -1112814642) && func_133(iParam0, -1697809989))
		{
			func_172(iParam0, iParam1, 1, 0);
		}
	}
}

void func_113(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_82() != -1)
	{
		return;
	}
	if ((Global_36616 && func_173(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_174(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_175(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_176(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_175(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

bool func_114(int iParam0, bool bParam1)
{
	return func_177(func_119(), iParam0, bParam1);
}

void func_115(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_178(*iParam0);
	iVar1 = func_179(*iParam0);
	iVar2 = func_180(*iParam0);
	iVar3 = func_181(*iParam0);
	iVar4 = func_182(*iParam0);
	iVar5 = func_183(*iParam0);
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
	iVar6 = func_184(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_184(iVar1, iVar0);
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
	func_185(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_116(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

int func_117(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_186(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_187(iVar6);
	}
	return iVar5;
}

int func_118(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_188(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

int func_119()
{
	return &Global_1899515;
}

void func_120(int iParam0, bool bParam1)
{
	func_189(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		set_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
	else
	{
		clear_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
}

bool func_121(int iParam0)
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

void func_122(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_120(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_123(2, *uParam0);
		}
		else
		{
			func_124(2, *uParam0);
		}
	}
	func_190(uParam0);
}

void func_123(int iParam0, int iParam1)
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

void func_124(int iParam0, int iParam1)
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

void func_125(int iParam0)
{
	switch (func_82())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 - (Global_1357549->f_1494 && iParam0));
			break;
	}
}

void func_126()
{
	if (!Global_1898068->f_1)
	{
	}
	Global_1898068->f_1 = 1;
}

bool func_127(int iParam0, bool bParam1, bool bParam2)
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
		if (func_191())
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
		iVar0 = func_192(&(Global_1898164->f_1[0]));
		if (func_193(iVar0) && func_194((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_195(&(Global_1898164->f_1[0])))
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

void func_128(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_196(&Global_0, 8);
	}
	if (!func_197() || func_82() != -1)
	{
		return;
	}
	func_196(&Global_0, 1);
}

bool func_129(var uParam0)
{
	return func_72(*uParam0, 2);
}

float func_130()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

bool func_131(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_83(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_132(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_133(int iParam0, int iParam1)
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

int func_134(int iParam0)
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

void func_135(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_79(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_136(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_137(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

int func_138(int iParam0)
{
	if (func_198(iParam0))
	{
		if (func_82() == -1)
		{
			iVar0 = _get_last_mount(Global_35);
			if (!does_entity_exist(iVar0))
			{
				iVar0 = func_200(func_199(0));
			}
		}
		else
		{
			iVar0 = _get_last_mount(func_201());
		}
	}
	else if (func_82() == -1)
	{
		iVar0 = func_200(0);
	}
	else
	{
		iVar0 = _0xf49f14462f0ae27c(get_player_index());
	}
	return iVar0;
}

int func_139(int iParam0, int iParam1, bool bParam2)
{
	if (func_202())
	{
		iVar0 = func_203(iParam1, 0);
	}
	else
	{
		iVar0 = func_109(iParam1, bParam2, 0);
		if (does_entity_exist(iParam0))
		{
			iVar0 = (iVar0 + func_204(_inventory_get_ped_inventory_id(iParam0), iParam1));
		}
	}
	if (iParam1 == Global_1935689->f_1224)
	{
		iVar0++;
	}
	return iVar0;
}

bool func_140(int iParam0)
{
	return func_79(iParam0, 2);
}

void func_141(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_142(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_143()
{
	return Global_40.f_4283.f_324;
}

void func_144(int iParam0, bool bParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_324 + iParam0) < 0)
	{
		return;
	}
	func_205((Global_40.f_4283.f_324 + iParam0));
	if (bParam1)
	{
		func_206(9, iParam0);
	}
}

void func_145(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (!func_207(310186733))
	{
		Global_40.f_4283.f_307.f_3 = (Global_40.f_4283.f_307.f_3 + iParam0);
		if (Global_40.f_4283.f_307.f_3 >= 5000)
		{
			func_208(310186733);
		}
	}
}

void func_146(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (!func_207(-1959946884))
	{
		Global_40.f_4283.f_307.f_4 = (Global_40.f_4283.f_307.f_4 + iParam0);
		if (Global_40.f_4283.f_307.f_4 >= 3)
		{
			func_208(-1959946884);
		}
	}
}

bool func_147(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_95(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

struct<2> func_148(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

bool func_149(int iParam0, int iParam1)
{
	if (!func_105(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_106(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_131("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_132(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_209(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_134(iVar1);
				return true;
			}
			iVar3++;
		}
		func_134(iVar1);
	}
	return false;
}

int func_150(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_99(1811977508, 1, 0))
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
			if (func_105(iVar25, 0) && func_133(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

struct<5> func_151(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_210(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_110(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_153(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_168(bParam1) };
			if (bParam2 && func_211(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_212(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_212(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_213(iParam0, &Var5, 1728382685))
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
			Var0 = { func_214(bParam1) };
			switch (func_215(iParam0))
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
			if (func_216(iParam0, -1823706425))
			{
				Var0 = { func_153(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_216(iParam0, -1483207246))
			{
				Var0 = { func_153(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_217(Var0, &Var27, bParam1, 0))
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

bool func_152(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_218(iParam0))
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return false;
	}
	if (!func_35(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!_0xb4158c8c9a3b5dce(func_83(bParam4), iParam0, iParam1, iParam2))
	{
		return false;
	}
	return true;
}

struct<4> func_153(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_105(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_83(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_154(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_218(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_217(*uParam1, &Var0, bParam6, 0))
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
	if (!func_35(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_83(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_155()
{
	if (func_219())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_156(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_220((Global_40.f_4283.f_325 + iParam0));
}

void func_157(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_155())
	{
		func_52(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_52(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

void func_158(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

void func_159(int iParam0, var uParam1, var uParam2)
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

bool func_160()
{
	return !&Global_1911774;
}

void func_161(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

char* func_162(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_163(int iParam0, int iParam1)
{
	if (!func_105(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

bool func_164(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_165(int iParam0)
{
	if (!func_105(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

int func_166(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_167(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_169(&Var0, func_168(0));
	}
	if (!func_170(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_134(iVar14);
	return uVar15;
}

struct<14> func_167(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> func_168(bool bParam0)
{
	iVar0 = func_83(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_153(923904168, func_210(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_153(923904168, func_210(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_153(923904168, func_210(bParam0), -740156546, 0);
}

void func_169(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_170(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_83(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

void func_171(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_82() == -1)
	{
		if (func_221(43))
		{
			if (func_133(iParam0, 412399755))
			{
				func_222(-1791518714);
				if (func_223() == 0)
				{
					func_128(0, 10);
					iVar0 = func_224(iParam0, iParam1, 1);
					if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
					{
						if (func_225(iParam0) < func_226(iParam0))
						{
							func_227(43, iParam0, iParam1, -1791518714, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_221(44))
		{
			if (func_133(iParam0, 709057512))
			{
				func_222(-2087881550);
				if (func_223() == 1)
				{
					func_128(0, 10);
					iVar0 = func_224(iParam0, iParam1, 2);
					if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
					{
						if (func_225(iParam0) < func_226(iParam0))
						{
							func_227(43, iParam0, iParam1, -2087881550, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_221(45))
		{
			if (func_133(iParam0, -1478961327))
			{
				func_222(1908068621);
				if (func_223() == 2)
				{
					func_128(0, 10);
					iVar0 = func_224(iParam0, iParam1, 4);
					if (((iParam0 == 2116770557 || iParam0 == -651064726) || iParam0 == -404270094) || iParam0 == 2093126853)
					{
						if (func_225(iParam0) < func_226(iParam0))
						{
							func_227(43, iParam0, iParam1, 1908068621, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_221(46))
		{
			if (func_133(iParam0, -1238404098))
			{
				func_222(1611247019);
				if (func_223() == 3)
				{
					func_128(0, 10);
					iVar0 = func_224(iParam0, iParam1, 8);
					if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
					{
						if (func_225(iParam0) < func_226(iParam0))
						{
							func_227(43, iParam0, iParam1, 1611247019, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_221(47))
		{
			if (func_133(iParam0, 1160548794))
			{
				func_222(1319635688);
				if (func_223() == 4)
				{
					func_128(0, 10);
					iVar0 = func_224(iParam0, iParam1, 16);
					if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
					{
						if (func_225(iParam0) < func_226(iParam0))
						{
							func_227(43, iParam0, iParam1, 1319635688, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

void func_172(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = _0x126cbebba46693cf(iVar1, 678508515, -1160144609);
		if (func_99(func_228(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_229(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_230(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

int func_173(int iParam0)
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

int func_174(int iParam0)
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

void func_175(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_231();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_232(iParam0);
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
	if (func_233(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_234())
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
	Global_40.f_11095.f_35 = func_235(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_231();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_236(iVar1);
		func_238(func_237(), 0, 4000);
		func_239(Global_40.f_11095.f_35);
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
		func_240(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_158(func_148(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (does_entity_exist(iParam5))
			{
				decor_set_int(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_174(14))
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
					sParam4 = func_241(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_52(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_52(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_158(func_148(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_174(4))
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
					sParam4 = func_241(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_52(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_52(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_148(-1990689970) };
	stat_id_set_int(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		_0xe6b763c7f4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_206(10, 1);
	}
}

void func_176(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

bool func_177(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_242(iParam1) || !func_242(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

int func_178(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_243(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_179(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_180(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_181(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_182(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_183(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_184(int iParam0, int iParam1)
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

void func_185(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_244(iParam0, iParam6);
	func_245(iParam0, iParam5);
	func_246(iParam0, iParam4);
	func_247(iParam0, iParam3);
	func_248(iParam0, iParam2);
	func_249(iParam0, iParam1);
}

bool func_186(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_187(int iParam0)
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

bool func_188(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_189(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_250(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_190(var uParam0)
{
	*uParam0 = 176656832;
	uParam0->f_1 = -15;
	uParam0->f_2 = 1017034651;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

bool func_191()
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

int func_192(int iParam0)
{
	if (!func_195(iParam0))
	{
		return -1;
	}
	return func_252(func_251(iParam0));
}

bool func_193(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_194(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_195(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

void func_196(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_197()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_198(int iParam0)
{
	if (func_82() == -1)
	{
		if ((Global_1914319->f_17370 || iParam0) || Global_1914319->f_16855 == 2)
		{
			iVar0 = _get_last_mount(Global_35);
			if (iVar0 != func_200(7))
			{
				return true;
			}
		}
		else if (is_ped_on_mount(Global_35))
		{
			iVar0 = get_mount(Global_35);
			if (iVar0 != func_200(7))
			{
				return true;
			}
		}
	}
	else
	{
		iVar0 = _get_last_mount(func_201());
		if (iVar0 != _0xf49f14462f0ae27c(get_player_index()))
		{
			return true;
		}
	}
	return false;
}

int func_199(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_200(int iParam0)
{
	iParam0 = func_199(iParam0);
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

int func_201()
{
	return get_player_ped(255);
}

bool func_202()
{
	if ((func_94(Global_1935689->f_10186, 1) || func_94(Global_1935689->f_10186, 2)) || func_94(Global_1935689->f_10186, 4))
	{
		return true;
	}
	return false;
}

int func_203(int iParam0, bool bParam1)
{
	iVar1 = func_109(iParam0, bParam1, 0);
	if (func_94(Global_1935689->f_10186, 1))
	{
		iVar0 = func_200(func_199(0));
		iVar1 = (iVar1 + func_204(_inventory_get_ped_inventory_id(iVar0), iParam0));
	}
	if (func_94(Global_1935689->f_10186, 2))
	{
		iVar0 = func_200(func_199(1));
		iVar1 = (iVar1 + func_204(_inventory_get_ped_inventory_id(iVar0), iParam0));
	}
	if (func_94(Global_1935689->f_10186, 4))
	{
		iVar0 = func_200(func_199(6));
		iVar1 = (iVar1 + func_204(_inventory_get_ped_inventory_id(iVar0), iParam0));
	}
	return iVar1;
}

int func_204(int iParam0, int iParam1)
{
	if (!func_105(iParam1, 0))
	{
		return 0;
	}
	Var0 = { func_253(iParam0, iParam1) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(iParam0, &Var0, 0);
	return uVar4;
}

void func_205(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_324 = iParam0;
	Var0 = { func_148(1736503291) };
	stat_id_set_int(&Var0, iParam0, true);
}

int func_206(int iParam0, int iParam1)
{
	if (!func_254(iParam0))
	{
		return 0;
	}
	if (!func_197())
	{
		return 0;
	}
	if (!func_255(iParam0, &iVar0, &uVar1))
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

bool func_207(int iParam0)
{
	if (!func_256(iParam0))
	{
		return false;
	}
	return is_bit_set(Global_40.f_4283.f_307, func_257(iParam0, 1));
}

void func_208(int iParam0)
{
	if (!func_256(iParam0))
	{
		return;
	}
	set_bit(&(Global_40.f_4283.f_307), func_257(iParam0, 1));
}

bool func_209(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

struct<4> func_210(bool bParam0)
{
	return func_153(1328661203, func_258(), -1591664384, bParam0);
}

bool func_211(int iParam0, bool bParam1)
{
	if (func_215(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_233(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_212(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_259(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_213(int iParam0, var uParam1, int iParam2)
{
	if (func_260(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_214(bool bParam0)
{
	iVar0 = func_83(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_153(271701509, func_210(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_153(271701509, func_210(bParam0), 12999093, 0);
}

int func_215(int iParam0)
{
	if (!func_105(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_216(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_215(iParam0);
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

bool func_217(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_83(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

bool func_218(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

bool func_219()
{
	return _unlock_is_unlocked(-121456797);
}

void func_220(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_148(1356759001) };
	stat_id_set_int(&Var0, iParam0, true);
}

bool func_221(int iParam0)
{
	if (func_82() != -1)
	{
		return false;
	}
	return func_261((*Global_1347702)[iParam0]->f_15, 1);
}

void func_222(int iParam0)
{
	if (!func_262(iParam0))
	{
		func_264(func_263(iParam0));
	}
}

int func_223()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_262(_0x126cbebba46693cf(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_224(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_225(iVar9);
	iVar2 = func_225(iVar10);
	iVar3 = func_225(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_225(iVar12);
	}
	iVar5 = func_226(iVar9);
	iVar6 = func_226(iVar10);
	iVar7 = func_226(iVar11);
	if (iParam2 != 2)
	{
		iVar8 = func_226(iVar12);
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

int func_225(int iParam0)
{
	if (func_99(iParam0, 1, 0))
	{
		iVar0 = func_109(iParam0, 0, 0);
	}
	return iVar0;
}

int func_226(int iParam0)
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

void func_227(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_197() && (func_265(38) || func_221(38)))
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
			if (func_197() && (func_265(39) || func_221(39)))
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
			iVar9 = func_266(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		case 41:
			if (func_197() && (func_265(41) || func_221(41)))
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
			if (func_197() && (func_265(49) || func_221(49)))
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
			iVar9 = func_266(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_267(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar12 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar12 = get_hash_key("toast_log_blips");
	}
	if (func_268(iParam0, iVar13, iVar14))
	{
	}
	if (func_269(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_270(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_271(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_272(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_273(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

int func_228(int iParam0, int iParam1)
{
	if (!func_274(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

void func_229(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_228(iParam1, 5) || iParam0 == func_228(iParam1, 6)) || iParam0 == func_228(iParam1, 7)) || iParam0 == func_228(iParam1, 8)) || iParam0 == func_228(iParam1, 9))
	{
		func_275(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_227(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_276(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_230(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if ((((iParam0 == func_228(iParam1, 5) || iParam0 == func_228(iParam1, 6)) || iParam0 == func_228(iParam1, 7)) || iParam0 == func_228(iParam1, 8)) || iParam0 == func_228(iParam1, 9))
	{
		if (func_275(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_227(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_276(51, 0, 0, iVar0, func_266(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_227(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_276(51, 0, 0, iVar0, func_266(iParam1, 20), 1, 0);
			}
		}
	}
}

int func_231()
{
	iVar0 = func_277();
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

int func_232(int iParam0)
{
	if (func_82() != -1)
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
	fVar1 = func_278(absf(fVar1) < 1f, func_278(fVar1 < 0f, -1f, 1f), fVar1);
	return ceil(fVar1);
}

bool func_233(int iParam0)
{
	if (!func_279(iParam0))
	{
		return false;
	}
	return func_280(iParam0);
}

bool func_234()
{
	if (func_82() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

int func_235(int iParam0, int iParam1, int iParam2)
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

int func_236(int iParam0)
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

int func_237()
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

void func_238(int iParam0, bool bParam1, int iParam2)
{
	func_281((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_282(iParam0);
}

void func_239(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), 0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), 1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_283(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_240(bool bParam0)
{
	bVar3 = false;
	if (func_284(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_285(iVar5, &iVar2, &iVar0))
			{
				if (!func_105(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_286(iVar2);
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
							if (func_110(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_231() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_231() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_287();
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

char* func_241(int iParam0)
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

bool func_242(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_183(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_182(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_181(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_178(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_179(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_180(iParam0);
	if (iVar5 < 1 || iVar5 > func_184(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

int func_243(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_244(int iParam0, int iParam1)
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

void func_245(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_246(int iParam0, int iParam1)
{
	iVar0 = func_179(*iParam0);
	iVar1 = func_178(*iParam0);
	if (iParam1 < 1 || iParam1 > func_184(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_247(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_248(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_249(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

int func_250(int iParam0, int iParam1)
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

int func_251(int iParam0)
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

int func_252(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

struct<4> func_253(int iParam0, int iParam1)
{
	Var0 = { func_288(iParam0) };
	return func_289(iParam0, iParam1, Var0, Var0.f_4);
}

bool func_254(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_255(int iParam0, int iParam1, var uParam2)
{
	if (!func_254(iParam0))
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

bool func_256(int iParam0)
{
	switch (iParam0)
	{
		case -1959946884:
		case -1784068921:
		case -1642438278:
		case -1349086674:
		case 310186733:
		case 456315479:
		case 471747275:
		case 1166592425:
		case 1486898918:
		case 1500419820:
			return true;
		default:
			break;
	}
	return false;
}

int func_257(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1959946884:
			return 6;
		case -1784068921:
			return 7;
		case -1642438278:
			return 2;
		case -1349086674:
			return 8;
		case 310186733:
			return 5;
		case 456315479:
			return 9;
		case 471747275:
			return 3;
		case 1166592425:
			return 4;
		case 1486898918:
			return 0;
		case 1500419820:
			return 1;
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

struct<4> func_258()
{
	return Var0;
}

int func_259(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_105(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_153(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_83(bParam6), &Var0, 0);
	return uVar4;
}

bool func_260(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_83(0);
	*uParam1 = { func_153(iParam0, func_168(0), iParam3, 0) };
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

int func_261(int iParam0, bool bParam1)
{
	switch (func_290(iParam0))
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

bool func_262(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_263(int iParam0)
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

void func_264(int iParam0)
{
	Global_40.f_12019.f_43 = (Global_40.f_12019.f_43 || iParam0);
}

bool func_265(int iParam0)
{
	if (func_82() != -1)
	{
		return false;
	}
	if (!func_193(iParam0))
	{
		return false;
	}
	return func_291((*Global_1347702)[iParam0]->f_15);
}

int func_266(int iParam0, int iParam1)
{
	if (!func_274(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_int(&uVar5, &Var0);
	return uVar5;
}

char* func_267(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_292() >= 12)
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_POSTED_OBJ", func_293(), 12);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_FOUND_OBJ", func_294(), 12);
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
			else if (func_295() >= 30)
			{
				sParam3 = _create_var_string(2, "COL_DB_POSTED_OBJ", func_296(), 30);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_DB_FOUND_OBJ", func_295(), 30);
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
				sParam3 = _create_var_string(2, "COL_LF_CAUGHT_OBJ", func_297(), 13);
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
			else if (func_298() >= 10)
			{
				sParam3 = _create_var_string(2, "COL_RC_POSTED_OBJ", func_299(), 10);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_RC_FOUND_OBJ", func_298(), 10);
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
				sParam3 = _create_var_string(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_266(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_268(int iParam0, int iParam1, int iParam2)
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

bool func_269(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_add_entry_hash(3, iParam1, vParam2, get_hash_key(sParam5), get_hash_key(sParam6), 0);
	}
	return true;
}

bool func_270(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	_uilog_add_or_update_objective(3, iParam1, get_hash_key(sParam2), sParam2, false, false, false);
	_uilog_set_entry_pinned(3, iParam1, true);
	_uilog_set_entry_brief_texture(3, iParam1, get_hash_key(sParam4), get_hash_key(sParam5));
	_uilog_set_entry_icon_texture(3, iParam1, iParam6, iParam7);
	_uilog_update_entry_subheader(3, iParam1, _create_var_string(2, sParam3));
	return true;
}

bool func_271(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_300(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_99(iVar2, 1, 0) || func_302(func_301(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_303(func_300(iVar0))), func_303(func_300(iVar0)), bVar1, true, false);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_295() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_304(iVar0)), func_304(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_296() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_304(iVar0)), func_304(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_304(iVar0)), func_304(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_228(iParam3, func_305(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_225(iVar2) - iParam7) >= func_266(iParam3, func_306(iVar0));
				}
				else
				{
					bVar1 = func_225(iVar2) >= func_266(iParam3, func_306(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_225(iVar2) + iParam7) >= func_266(iParam3, func_306(iVar0));
			}
			else
			{
				bVar1 = func_225(iVar2) >= func_266(iParam3, func_306(iVar0));
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_307(iVar2)), func_307(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_308(_0x126cbebba46693cf(iVar0, 1995362678, 0)))
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
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_309(_0x126cbebba46693cf(iVar0, iParam2, 0))), func_309(_0x126cbebba46693cf(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_298() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_310(iVar0)), func_310(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_299() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_310(iVar0)), func_310(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_310(iVar0)), func_310(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_228(iParam3, func_305(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_225(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_311(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_311(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_312(iVar2)), func_312(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_272(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_297() >= 13)
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

bool func_273(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_195(func_313(0)) && ((func_314(0) == 1 || func_314(0) == 8) || func_314(0) == 6))
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

bool func_274(int iParam0, var uParam1)
{
	if (!func_315(iParam0))
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

bool func_275(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_311(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_311(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_311(iVar0))
		{
			*iParam2++;
		}
		if (func_311(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_311(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_311(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_311(iVar0))
		{
			*iParam2++;
		}
		if (func_311(iVar1))
		{
			*iParam2++;
		}
		if (func_311(iVar0) && func_311(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_311(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_311(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_311(iVar0))
		{
			*iParam2++;
		}
		if (func_311(iVar1))
		{
			*iParam2++;
		}
		if (func_311(iVar2))
		{
			*iParam2++;
		}
		if ((func_311(iVar0) && func_311(iVar1)) && func_311(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_311(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_311(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_311(iVar0))
		{
			*iParam2++;
		}
		if (func_311(iVar1))
		{
			*iParam2++;
		}
		if (func_311(iVar2))
		{
			*iParam2++;
		}
		if (func_311(iVar3))
		{
			*iParam2++;
		}
		if (((func_311(iVar0) && func_311(iVar1)) && func_311(iVar2)) && func_311(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_276(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_197() && (func_265(38) || func_221(38)))
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
			if (func_197() && (func_265(39) || func_221(39)))
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
			if (func_197() && (func_265(49) || func_221(49)))
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
		if (func_197() && (func_265(38) || func_221(38)))
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
			func_316(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_316(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_318(_create_var_string(2, sVar0), _create_var_string(2, func_303(func_317(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_316(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_316(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_197() && (func_265(39) || func_221(39)))
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
			func_316(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_316(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_197() && (func_265(49) || func_221(49)))
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
			func_316(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_316(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_316(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_316(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_277()
{
	return Global_40.f_11095.f_35;
}

float func_278(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_279(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_280(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_281(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_319(bParam1);
	}
}

void func_282(int iParam0)
{
	_0x74bcceb233ad95b2(-156028329, iParam0);
}

char* func_283(int iParam0)
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

bool func_284(int iParam0)
{
	if (!func_274(23, &vVar0))
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

bool func_285(int iParam0, int iParam1, int iParam2)
{
	if (!func_274(23, &Var0))
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

int func_286(int iParam0)
{
	return iParam0;
}

int func_287()
{
	iVar0 = func_231();
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

struct<5> func_288(int iParam0)
{
	Var0 = { func_289(iParam0, 1328661203, func_258(), -1591664384) };
	Var0.f_4 = 1084182731;
	return Var0;
}

struct<4> func_289(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, int iParam6)
{
	if (!func_105(iParam1, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(iParam0, &uParam2, iParam1, iParam6, &Var0);
	return Var0;
}

int func_290(int iParam0)
{
	if (!func_195(iParam0))
	{
		return -1;
	}
	return func_320(iParam0);
}

bool func_291(int iParam0)
{
	iVar0 = func_290(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_292()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_99(func_321(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_293()
{
	return func_322(Global_40.f_12019);
}

int func_294()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_321(iVar1);
		if (func_99(iVar2, 1, 0) || func_302(func_301(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_295()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_323(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_296()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_324(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_297()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_308(_0x126cbebba46693cf(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_298()
{
	return _0x5461c821d00fe15a(2103522376, 0);
}

int func_299()
{
	return _0x3a65f4844913a047(2103522376, 0);
}

int func_300(int iParam0)
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

int func_301(int iParam0)
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

bool func_302(int iParam0)
{
	return (Global_40.f_12019 && iParam0) != 0;
}

char* func_303(int iParam0)
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

char* func_304(int iParam0)
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

int func_305(int iParam0)
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

int func_306(int iParam0)
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

char* func_307(int iParam0)
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

bool func_308(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

char* func_309(int iParam0)
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

char* func_310(int iParam0)
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

bool func_311(int iParam0)
{
	if (func_325(iParam0) && func_99(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_326(iParam0) && func_327(iParam0))
	{
		return true;
	}
	return false;
}

char* func_312(int iParam0)
{
	if (!func_105(iParam0, 0))
	{
		return "";
	}
	return _get_label_text_by_hash(func_165(iParam0));
}

int func_313(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

int func_314(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

bool func_315(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

var func_316(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

int func_317(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

var func_318(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

void func_319(bool bParam0)
{
	func_328(bParam0);
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

int func_320(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_329(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_321(int iParam0)
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

int func_322(int iParam0)
{
	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

bool func_323(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

bool func_324(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_325(int iParam0)
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

int func_326(int iParam0)
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

int func_327(int iParam0)
{
	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_330(&iVar0, 0, iVar95, &Var1) && !func_330(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (is_model_a_ped(Var1))
		{
			func_331(iVar0, &Var1);
			if (func_105(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

void func_328(bool bParam0)
{
	_0xb6fd96420c0126a1(-1056478928, bParam0);
}

int func_329(int iParam0)
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

bool func_330(int iParam0, int iParam1, int iParam2, var uParam3)
{
	if (func_332(iParam1) && !func_333(iParam1))
	{
		iVar0 = func_200(iParam1);
	}
	else
	{
		return false;
	}
	func_334(uParam3);
	iVar5 = func_335(iParam2);
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

void func_331(int iParam0, int iParam1)
{
	iVar0 = get_ped_index_from_entity_index(iParam0);
	if (does_entity_exist(iVar0))
	{
		func_336(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_337(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

bool func_332(int iParam0)
{
	iParam0 = func_199(iParam0);
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

bool func_333(int iParam0)
{
	iParam0 = func_199(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_332(iParam0))
	{
		return false;
	}
	iVar0 = func_200(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

void func_334(var uParam0)
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

int func_335(int iParam0)
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

void func_336(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
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

bool func_337(var uParam0, int iParam1, int iParam2, int iParam3)
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

