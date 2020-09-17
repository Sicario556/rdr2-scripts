void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	bLocal_19 = true;
	if (has_force_cleanup_occurred(523))
	{
		func_1();
	}
	func_2(8192);
	if (func_3())
	{
		iLocal_62 = 13;
	}
	else
	{
		iLocal_62 = iVar279;
	}
	func_4();
	while (true)
	{
		func_5();
		if (func_6(Local_73, 0))
		{
			if (bLocal_22)
			{
				if (func_7(Local_73, Global_36, 1) > 5f)
				{
					_0xc67a4910425f11f1(get_player_index(), "COACHROB");
					bLocal_22 = false;
				}
			}
			if (!func_8())
			{
				func_10(&Local_73, &iLocal_242, func_9(), &uLocal_263, 0f, 3, 0, 0, 1, 0, 0, 2, -1082130432);
			}
			set_ped_can_play_gesture_anims(Local_73, 0, 1);
		}
		if (func_11())
		{
			func_1();
		}
		func_12();
		switch (iLocal_65)
		{
			case 0:
				func_13();
				break;
			case 1:
				switch (iLocal_67)
				{
					case 0:
						func_14();
						break;
					case 1:
						func_15();
						break;
				}
				break;
			case 2:
				func_16();
				break;
			case 3:
				func_17();
				break;
			case 4:
				func_1();
				break;
		}
		if (!bLocal_16)
		{
			if ((bLocal_15 && !_0x3ab6c7b0bb0df4b1(Global_35, Local_73.f_162)) && func_19(func_18(iLocal_62), 1, 0))
			{
				bLocal_16 = true;
			}
		}
		wait(0);
	}
}

void func_1()
{
	if (bLocal_22)
	{
		_0xc67a4910425f11f1(get_player_index(), "COACHROB");
		bLocal_22 = false;
	}
	if (func_6(Local_73, 0))
	{
		if (_0x083d497d57b7400f(Local_73))
		{
			freeze_entity_position(Local_73, false);
		}
		if (get_ped_config_flag(Local_73, 413, true))
		{
			set_ped_config_flag(Local_73, 413, false);
		}
		if (get_ped_config_flag(Local_73, 330, true))
		{
			set_ped_config_flag(Local_73, 330, false);
		}
		if (_0x0b7cb1300cbfe19c(Local_73, 1))
		{
			stop_anim_playback(Local_73, 0, false);
		}
		if (ped_has_use_scenario_task(Local_73))
		{
			clear_ped_tasks(Local_73, 1, 0);
		}
	}
	func_20(1);
	func_21(0);
	if (func_22(Local_73.f_1, 1))
	{
		func_23(Local_73.f_1, 0, 1, 0, 0);
	}
	_text_database_delete("SCRB");
	func_24(Local_73.f_2, 0);
	if (_does_scenario_point_exist(Local_73.f_168))
	{
		_delete_scenario_point(Local_73.f_168);
	}
	func_25(0);
	terminate_this_thread();
}

void func_2(int iParam0)
{
	Global_1392388->f_4 = (Global_1392388->f_4 - (Global_1392388->f_4 && iParam0));
}

bool func_3()
{
	if (func_26(128, 0) || func_27(128))
	{
		return true;
	}
	return false;
}

void func_4()
{
	switch (iLocal_62)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			iLocal_61 = 0;
			break;
		case 4:
		case 5:
		case 6:
		case 7:
			iLocal_61 = 1;
			break;
		case 13:
			if (vdist(Global_36, func_28(0)) < vdist(Global_36, func_28(1)))
			{
				iLocal_61 = 0;
			}
			else
			{
				iLocal_61 = 1;
			}
			break;
	}
	func_29();
	iLocal_65 = 0;
	iLocal_66 = 0;
	iLocal_67 = 0;
	iLocal_68 = 0;
	iLocal_69 = 0;
	iLocal_70 = 0;
	func_30(&uLocal_32, 0);
	func_31(&uLocal_32, 1);
	func_32(&uLocal_32, 1);
	func_33(&uLocal_32, 1);
	func_34(&uLocal_32, 1);
	func_35(&uLocal_32, 1);
	func_36(&uLocal_32, 1);
}

void func_5()
{
	if (!bLocal_30)
	{
		if (does_entity_exist(Local_73.f_159))
		{
			if (!bLocal_31)
			{
				_request_streamed_txd(func_37(), false);
				bLocal_31 = true;
			}
			else if (_has_streamed_txd_loaded(func_37()))
			{
				decor_set_int(Local_73.f_159, "letter_item", func_18(iLocal_62));
				_set_apply_object_txd(get_object_index_from_entity_index(Local_73.f_159), func_37(), 0, 0);
				bLocal_30 = true;
			}
		}
	}
}

bool func_6(int iParam0, int iParam1)
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
	if (func_38(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_38(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_38(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_38(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_38(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_38(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_38(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_38(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

float func_7(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

bool func_8()
{
	switch (iLocal_62)
	{
		case 0:
		case 1:
		case 2:
			if (!is_entity_in_angled_area(Global_35, -1761.251f, -386.2874f, 156.2065f, -1768.777f, -380.2981f, 159.7317f, 5.25f, false, true, 0))
			{
				return true;
			}
			break;
		case 4:
		case 5:
		case 6:
			if (!is_entity_in_angled_area(Global_35, 1238.886f, -1303.498f, 75.40268f, 1222.679f, -1288.258f, 78.89932f, 9.25f, false, true, 0))
			{
				return true;
			}
			break;
	}
	return false;
}

float func_9()
{
	return 2.4f;
}

int func_10(int iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	if (!is_entity_dead(*iParam0))
	{
		func_39(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !_does_volume_exist(iParam9)) || is_entity_in_volume(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (is_ambient_speech_playing(*iParam0) || is_scripted_speech_playing(*iParam0));
		fVar8 = func_40(fParam12 >= 0f, fParam12, vdist(Global_36, get_entity_coords(*iParam0, true, false)));
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
			func_41(&(iParam1->f_13));
		}
		if (func_42(*iParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_43(iParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_10(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_44(iParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!get_ped_config_flag(*iParam0, 317, true))
						{
							func_45(*iParam0, 1, 1);
						}
					}
					else if (func_46(iParam1, 22))
					{
						func_45(*iParam0, 0, 1);
					}
				}
				if (func_47(iParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_48(iParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_49(iParam8);
					if (func_50(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (is_bit_set(uParam3[iParam1->f_1], 20))
								{
									func_51(uParam3);
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
					func_52(iParam1, uParam3, fVar8);
					if (func_53(*iParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (is_bit_set(*iParam1, 1))
					{
						func_54(uParam3, 0, 0, 1, 1);
						clear_bit(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_55(iParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_47(iParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_56(*iParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_50(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_48(iParam0, func_47(iParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_49(iParam8);
				}
				else if (is_bit_set(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_54(uParam3, 0, 0, 1, 1);
					}
					func_57(iParam1, 1);
				}
				func_52(iParam1, uParam3, fVar8);
				if (func_55(iParam0, iParam1, fParam4, bVar6))
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
			func_58(iParam1, uParam3);
			set_bit(iParam1, 3);
		}
	}
	return -1;
}

bool func_11()
{
	if (func_59(8192))
	{
		return true;
	}
	else if (is_entity_dead(Global_35))
	{
		return true;
	}
	else if (func_60())
	{
		return true;
	}
	else if (!func_61(2, -1))
	{
		return true;
	}
	else if (func_62(player_id(), 1, 0, 1))
	{
		return true;
	}
	else if (func_63(iLocal_62))
	{
		return true;
	}
	else if (iLocal_65 > 0)
	{
		if (!func_64(Local_73.f_1, 0))
		{
			return true;
		}
		else if (!func_6(Local_73, 3))
		{
			return true;
		}
		else if (is_ped_fleeing(Local_73))
		{
			return true;
		}
		else if (is_ped_in_combat(Local_73, 0))
		{
			return true;
		}
		else if (func_62(player_id(), 1, 0, 1))
		{
			return true;
		}
		else if (func_65(0, 0, 1) && !func_27(128))
		{
			return true;
		}
	}
	return false;
}

void func_12()
{
	if (!_does_anim_scene_exist(Local_73.f_162))
	{
		return;
	}
	if (!_is_anim_scene_started(Local_73.f_162, false))
	{
		return;
	}
	if (iLocal_62 != 0)
	{
		if (!Local_73.f_163)
		{
			if (func_66(&(Local_73.f_29), Local_73.f_134, 0, -1, 0, 0))
			{
				Local_73.f_163 = 1;
			}
		}
	}
	if (!Local_73.f_165)
	{
		if (has_anim_event_fired(Global_35, -329659517))
		{
			func_67();
			Local_73.f_165 = 1;
		}
	}
}

void func_13()
{
	bVar0 = true;
	bVar1 = false;
	bVar2 = false;
	bVar3 = false;
	if (((iLocal_62 == 13 || iLocal_62 == 0) || iLocal_62 == 1) || iLocal_62 == 2)
	{
		bVar1 = true;
		bVar2 = true;
		bLocal_28 = true;
	}
	if (iLocal_62 == 0)
	{
		bVar3 = true;
	}
	switch (iLocal_66)
	{
		case 0:
			func_68();
			iLocal_66 = 1;
			break;
		case 1:
			if (func_69())
			{
				if (func_70(Local_73.f_1))
				{
					if (func_64(Local_73.f_1, 0))
					{
						iLocal_66 = 2;
					}
					else if (iLocal_62 == 13)
					{
						if (!func_71(&(Local_73.f_17)))
						{
							func_41(&(Local_73.f_17));
						}
						else if (func_72(&(Local_73.f_17)) > 10f)
						{
							func_73(Local_73.f_1, 1);
						}
					}
				}
			}
			break;
		case 2:
			_text_database_request("SCRB");
			_text_database_request(Local_73.f_127);
			if (iLocal_62 == 0)
			{
				_text_database_request("crst1a");
			}
			request_anim_dict(func_74());
			request_anim_dict(func_75());
			_request_scenario_type(1041923169, 15, 0, 0);
			_request_scenario_type(-1656207781, 15, 0, 0);
			_request_scenario_type(1258889694, 15, 0, 0);
			if (iLocal_62 == 6)
			{
				request_model(81104014, false);
			}
			iLocal_66 = 3;
			break;
		case 3:
			if (!_text_database_has_loaded("SCRB"))
			{
				bVar0 = false;
			}
			if (!_text_database_has_loaded(Local_73.f_127))
			{
				bVar0 = false;
			}
			if (iLocal_62 == 0)
			{
				if (!_text_database_has_loaded("crst1a"))
				{
					bVar0 = false;
				}
			}
			if (!has_anim_dict_loaded(func_74()))
			{
				bVar0 = false;
			}
			if (!has_anim_dict_loaded(func_75()))
			{
				bVar0 = false;
			}
			if (iLocal_62 == 6)
			{
				if (!has_model_loaded(81104014))
				{
					bVar0 = false;
				}
			}
			if (!func_76())
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				iLocal_66 = 4;
			}
			break;
		case 4:
			if (func_77(bVar1, bVar2, bVar3))
			{
				if (iLocal_62 == 13)
				{
					iLocal_66 = 5;
				}
				else if (func_78())
				{
					if (func_79())
					{
						if (func_80(Local_73, Global_35, 1, 5f, 0))
						{
							func_66(&(Local_73.f_29), Local_73.f_146, 0, -1, 0, 0);
							Global_40.f_9146.f_4[iLocal_62] = 3;
							Global_40.f_9146.f_79[iLocal_62] = -15;
							Global_40.f_9146.f_3 = -1;
							func_81(iLocal_62);
							iLocal_65 = 2;
						}
					}
				}
				else if (func_82())
				{
					iLocal_66 = 5;
				}
				else if (func_79())
				{
					func_66(&(Local_73.f_29), Local_73.f_143, 0, -1, 0, 0);
					iLocal_65 = 2;
				}
			}
			break;
		case 5:
			if (iLocal_62 == 6)
			{
				if (!does_entity_exist(Local_73.f_159))
				{
					Local_73.f_159 = create_object_no_offset(81104014, 1226.21f, -1294.86f, 76.9511f, true, true, false, true);
					set_entity_rotation(Local_73.f_159, -0.207494f, 0.0267885f, 50.0482f, 2, true);
				}
			}
			func_83(Local_73.f_2, 6f, "Coach_robbery_intro", 1, 0, 0, 0, -1082130432);
			if (!func_84(Local_73.f_156))
			{
				Local_73.f_155 = add_scenario_blocking_area(Local_73.f_156 - Vector(1f, 1f, 1f), Local_73.f_156 + Vector(1f, 1f, 1f), 0, 15);
			}
			iLocal_65 = 1;
			break;
	}
}

void func_14()
{
	if (iLocal_68 > 0 && iLocal_68 != 3)
	{
		if (!func_85())
		{
			func_86(&(Local_73.f_23), 1, 1);
			iLocal_68 = 0;
		}
	}
	switch (iLocal_68)
	{
		case 0:
			if (iLocal_62 == 13)
			{
				func_25(1);
				iLocal_68 = 1;
			}
			else if (func_85())
			{
				func_25(1);
				set_ped_config_flag(Local_73, 297, true);
				set_ped_config_flag(Local_73, 315, true);
				iLocal_68 = 1;
			}
			break;
		case 1:
			func_87();
			func_88();
			if (func_79())
			{
				if (func_89())
				{
					func_20(0);
					Local_73.f_27 = 1;
					iLocal_68 = 3;
				}
				else
				{
					if (!Local_73.f_27)
					{
						if (bLocal_17)
						{
							func_66(&(Local_73.f_29), Local_73.f_131, 0, -1, 0, 0);
						}
						else
						{
							func_66(&(Local_73.f_29), Local_73.f_128, 0, -1, 0, 0);
						}
						Local_73.f_27 = 1;
					}
					func_86(&(Local_73.f_23), 1, 1);
					iLocal_68 = 2;
				}
			}
			break;
		case 3:
			if (func_90())
			{
				func_20(1);
				func_21(1);
				iLocal_68 = 2;
			}
			break;
		case 2:
			if (bLocal_17)
			{
				if (func_91(&(Local_73.f_131)))
				{
					return;
				}
			}
			if (!func_71(&(Local_73.f_8)))
			{
				func_41(&(Local_73.f_8));
			}
			if (func_92(&(Local_73.f_8), 0.2f))
			{
				if (bLocal_24)
				{
					func_93(65536);
				}
				if (bLocal_25)
				{
					func_93(131072);
				}
				if (get_ped_config_flag(Local_73, 301, true))
				{
					set_ped_config_flag(Local_73, 301, false);
				}
				iLocal_68 = 4;
			}
			break;
		case 4:
			if (func_79())
			{
				disable_control_action(0, -562475458, false);
				func_94(1094713344);
				if (!func_95(Local_73.f_23))
				{
					fVar0 = 2.5f;
					if (iLocal_62 == 13)
					{
						if (func_96(Local_73, 0, 0, 0))
						{
							Local_73.f_23 = func_97("CR_C_RTL2", -787858890, Local_73, 1, 0, 0, 0, 5, fVar0, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
						}
						else
						{
							func_86(&(Local_73.f_23), 1, 1);
						}
					}
					else
					{
						Local_73.f_23 = func_97("CR_C_PAYTIP", -787858890, Local_73, 1, 0, 0, 0, 5, fVar0, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
						func_98(Local_73.f_23, "CR_C_PAYTIP", 2, 1);
					}
					if (func_95(Local_73.f_23))
					{
						_uiprompt_set_group((*Global_1945938)[func_99(Local_73.f_23)]->f_3, _uiprompt_get_group_id_for_target_entity(Local_73), 0);
						func_100(Local_73.f_23, 0, 1);
						set_entity_can_be_targeted_without_los(Local_73, true);
					}
					if (iLocal_62 == 0)
					{
						disable_control_action(0, -124244224, false);
					}
				}
				else
				{
					iLocal_23 = _0xc22aa08a8adb87d4(Local_73);
					func_101();
					if ((!func_96(Local_73, 0, 0, 0) && bLocal_19) && !bLocal_29)
					{
						func_102(Local_73.f_23, 0, 1);
					}
					else if (func_103(get_entity_coords(Local_73, true, false), Global_35))
					{
						func_102(Local_73.f_23, 1, 1);
						if (((func_104(1) >= 200 || iLocal_62 == 13) && !func_105(1)) && !func_106())
						{
							if (!func_107(Local_73.f_23, 0))
							{
								func_108(Local_73.f_23, 1, 1);
							}
						}
						else if (func_107(Local_73.f_23, 0))
						{
							func_108(Local_73.f_23, 0, 1);
						}
						if (func_109(Local_73.f_23, 1) || bLocal_29)
						{
							if (func_111(func_110(Global_35, 0, 1, 0)) || func_111(func_110(Global_35, 1, 1, 0)))
							{
								_0x94a3c1b804d291ec(Global_35, 1, 0, 1, 0);
								task_swap_weapon(Global_35, 0, 0, 0, 0);
								bLocal_29 = true;
							}
							else
							{
								bLocal_29 = false;
							}
							if (_get_first_entity_ped_is_carrying(Global_35) != 0)
							{
								if (!func_112(Global_35, -208384378))
								{
									task_place_carried_entity_at_coord(Global_35, _get_first_entity_ped_is_carrying(Global_35), Global_36, 1f, 0);
									bLocal_29 = true;
								}
								else
								{
									bLocal_29 = true;
								}
							}
							else
							{
								bLocal_29 = false;
							}
							if (bLocal_29 == 0)
							{
								func_113(-1, 0, 0, 0, 0);
								func_20(0);
								if (iLocal_62 != 13)
								{
									func_114(200, 0, 0, 1, 1);
									func_115(Local_73, (200 + get_random_int_in_range(5, 20)));
								}
								func_116(&(Local_73.f_11));
								func_86(&(Local_73.f_23), 1, 1);
								func_54(&uLocal_263, 1, 1, 1, 0);
								_0xe98d55c5983f2509(Local_73);
								set_ped_config_flag(Local_73, 301, true);
								iLocal_67 = 1;
							}
						}
					}
					else
					{
						func_102(Local_73.f_23, 0, 1);
					}
				}
			}
			else if (vdist(get_entity_coords(Local_73, true, false), Global_36) >= 5f)
			{
				func_116(&(Local_73.f_11));
				func_86(&(Local_73.f_23), 1, 1);
				if (!bLocal_14)
				{
					func_66(&(Local_73.f_29), Local_73.f_140, 0, -1, 0, 0);
					bLocal_14 = true;
				}
				iLocal_68 = 6;
			}
			break;
		case 6:
			if (func_79())
			{
				iLocal_68 = 4;
			}
			break;
	}
}

void func_15()
{
	switch (iLocal_69)
	{
		case 0:
			if (func_117())
			{
				if (iLocal_62 == 0)
				{
					if (does_entity_exist(Local_73.f_159))
					{
						set_entity_as_mission_entity(Local_73.f_159, true, false);
						delete_object(&(Local_73.f_159));
					}
				}
				func_67();
				if (iLocal_62 == 13)
				{
					func_118((*Global_1347702)[128]->f_15, 1);
				}
				func_20(1);
				func_21(1);
				iLocal_69 = 1;
			}
			break;
		case 1:
			iLocal_65 = 2;
			break;
	}
}

void func_16()
{
	if (bLocal_22)
	{
		_0xc67a4910425f11f1(get_player_index(), "COACHROB");
		bLocal_22 = false;
	}
	if (get_ped_config_flag(Local_73, 413, true))
	{
		set_ped_config_flag(Local_73, 413, false);
	}
	if (get_ped_config_flag(Local_73, 330, true))
	{
		set_ped_config_flag(Local_73, 330, false);
	}
	if (get_ped_config_flag(Local_73, 301, true))
	{
		set_ped_config_flag(Local_73, 301, false);
	}
	if (does_entity_exist(Local_73.f_159))
	{
		delete_object(&(Local_73.f_159));
	}
	if (does_entity_exist(Local_73.f_160))
	{
		delete_object(&(Local_73.f_160));
	}
	if (_0x91a5f9cbebb9d936(Local_73.f_155))
	{
		remove_scenario_blocking_area(Local_73.f_155, false);
	}
	func_86(&(Local_73.f_23), 1, 1);
	func_86(&(Local_73.f_24), 1, 1);
	iLocal_65 = 3;
}

void func_17()
{
	if (func_119(Local_73, Global_36, 5f, 1, 1) || is_entity_on_screen(Local_73))
	{
		return;
	}
	iLocal_65 = 4;
}

int func_18(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -1260334554;
		case 5:
			return -1492175229;
		case 6:
			return 1585456486;
		case 12:
			return -884998428;
		case 13:
			return -2114196387;
		case 0:
			return 667072496;
		case 1:
			return 268535918;
		case 2:
			return -866909932;
		default:
			break;
	}
	return -1260334554;
}

bool func_19(int iParam0, int iParam1, bool bParam2)
{
	if (!func_120(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_121(iParam0);
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
		if (!func_122(iParam0, 1))
		{
			return false;
		}
	}
	return func_123(iParam0, 0, bParam2) >= iParam1;
}

void func_20(bool bParam0)
{
	switch (iLocal_61)
	{
		case 0:
			func_124(65, bParam0);
			break;
		case 1:
			func_124(30, bParam0);
			func_124(31, bParam0);
			break;
	}
}

void func_21(bool bParam0)
{
	switch (iLocal_61)
	{
		case 0:
			iVar0 = 65;
			break;
		case 1:
			iVar0 = 30;
			break;
	}
	if (bParam0)
	{
		func_125(iVar0, 16777216);
	}
	else
	{
		func_126(iVar0, 16777216);
	}
}

bool func_22(int iParam0, bool bParam1)
{
	if (func_127() != -1)
	{
		return false;
	}
	if (!func_70(iParam0))
	{
		return false;
	}
	if (!func_128(iParam0) && bParam1)
	{
		return false;
	}
	return func_129(iParam0, 1);
}

void func_23(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_70(iParam0))
	{
		return;
	}
	if (!func_129(iParam0, 1))
	{
		return;
	}
	if (!func_129(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_128(iParam0)) && func_130(iParam0))
	{
		return;
	}
	func_131(iParam0, 1);
	func_132(iParam0);
	if (func_134(func_133(iParam0)))
	{
		iVar0 = func_135(iParam0);
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
		func_131(iParam0, 16);
	}
	if (func_129(iParam0, 128) && !bParam3)
	{
		func_136(iParam0, 0);
	}
}

void func_24(vector3 vParam0, int iParam3)
{
	if (func_84(vParam0))
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
			if (func_137(vVar2, vParam0, 2f, 1))
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

void func_25(bool bParam0)
{
	switch (iLocal_61)
	{
		case 0:
			func_138(65, bParam0);
			break;
		case 1:
			func_138(30, bParam0);
			break;
	}
}

bool func_26(int iParam0, bool bParam1)
{
	if (func_127() != -1)
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

bool func_27(int iParam0)
{
	if (func_127() != -1)
	{
		return false;
	}
	if (!func_139(iParam0))
	{
		return false;
	}
	return func_140((*Global_1347702)[iParam0]->f_15);
}

Vector3 func_28(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1226.71f, -1295.08f, 75.9f;
		case 0:
			if (iLocal_62 == 0)
			{
				return -1763.9f, -385.1f, 156.74f;
			}
			else
			{
				return -1763.73f, -385.23f, 156.74f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_29()
{
	iLocal_63 = func_141(iLocal_62);
	iLocal_64 = func_142(iLocal_62);
}

void func_30(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		uParam0->f_1 = 0;
		func_143(uParam0, 1);
		func_144(uParam0, 1);
		func_145(uParam0, 1);
		func_146(uParam0, 1);
		func_147(uParam0, 1);
		func_148(uParam0, 1);
		func_149(uParam0, 1);
	}
	else
	{
		uParam0->f_1 = -1;
		func_143(uParam0, 0);
		func_144(uParam0, 0);
		func_145(uParam0, 0);
		func_146(uParam0, 0);
		func_147(uParam0, 0);
		func_148(uParam0, 0);
		func_149(uParam0, 0);
	}
}

void func_31(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_150(&(uParam0->f_1), 8);
	}
	else
	{
		func_151(&(uParam0->f_1), 8);
	}
}

void func_32(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_150(&(uParam0->f_1), 256);
	}
	else
	{
		func_151(&(uParam0->f_1), 256);
	}
}

void func_33(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_150(&(uParam0->f_1), 4);
	}
	else
	{
		func_151(&(uParam0->f_1), 4);
	}
}

void func_34(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_150(&(uParam0->f_1), 2);
	}
	else
	{
		func_151(&(uParam0->f_1), 2);
	}
}

void func_35(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_150(&(uParam0->f_1), 1);
	}
	else
	{
		func_151(&(uParam0->f_1), 1);
	}
}

void func_36(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_150(&(uParam0->f_1), 16);
	}
	else
	{
		func_151(&(uParam0->f_1), 16);
	}
}

int func_37()
{
	switch (iLocal_62)
	{
		case 4:
			return -1615258269;
		case 5:
			return 379685582;
		case 6:
			return 1291253624;
		case 12:
			return -215170075;
		case 13:
			return 627779681;
		case 0:
			return 1940145362;
		case 1:
			return 983061179;
		case 2:
			return 1884470831;
		default:
			break;
	}
	return -1615258269;
}

bool func_38(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_39(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

float func_40(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_41(var uParam0)
{
	func_152(uParam0, 0f);
}

bool func_42(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_153(iParam0, iParam1))
		{
			if (!func_154(iParam1->f_10, 1))
			{
				set_ped_config_flag(iParam0, 130, false);
				set_ped_config_flag(iParam0, 315, false);
				set_ped_config_flag(iParam0, 297, false);
				set_ped_config_flag(iParam0, 178, true);
				func_54(uParam2, 0, 0, 1, 0);
				func_151(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_154(iParam1->f_10, 1))
		{
			func_155(uParam2);
			set_ped_config_flag(iParam0, 130, true);
			set_ped_config_flag(iParam0, 315, true);
			set_ped_config_flag(iParam0, 297, true);
			set_ped_config_flag(iParam0, 178, false);
			func_150(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_43(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!is_entity_dead(*iParam0))
	{
		_0xe98d55c5983f2509(*iParam0);
		bVar4 = func_154(iParam4, 32);
		func_156(iParam1, uParam2, 0);
		iVar5 = func_157(*iParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			set_ped_config_flag(*iParam0, 178, false);
			return true;
		}
		func_54(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_154(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_154(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_154(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_154(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_154(iParam4, 8388608) || func_154(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_154(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_154(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_46(iParam1, 4))
		{
			iVar6 |= 1024;
			_0xbb1e41dd3d3c6250(*iParam0, "IloGeneralEvents", 2);
		}
		if (!func_46(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_154(iParam4, 67108864))
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
				iParam6 = func_158(iParam0);
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
			if (func_154(iParam4, 268435456))
			{
				iVar8 = func_159(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_160(iParam1, (*uParam2)[iVar8]);
				}
			}
			if (func_46(iParam1, 23))
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
			if (func_154(iParam4, 2) || func_154(iParam4, 16))
			{
				func_45(*iParam0, 1, 1);
			}
			else
			{
				func_45(*iParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_44(int iParam0)
{
	if (!is_entity_dead(*iParam0))
	{
		_0xe98d55c5983f2509(*iParam0);
		set_ped_config_flag(*iParam0, 297, false);
	}
}

void func_45(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !is_entity_dead(iParam0))
	{
		set_ped_config_flag(iParam0, 317, bParam1);
	}
}

bool func_46(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

bool func_47(int iParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_96(*iParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_48(int iParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_161(*iParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_154(iParam10, 32), 1, 0);
			set_bit(iParam2, 1);
		}
	}
	else if (is_bit_set(*iParam2, 1))
	{
		clear_bit(iParam2, 1);
	}
}

void func_49(int iParam0)
{
	if (func_154(iParam0, 4))
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
	if (func_154(iParam0, 16384))
	{
		disable_control_action(0, -485697785, false);
	}
	if (func_154(iParam0, 8))
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
	}
}

bool func_50(int iParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	iVar1 = func_104(1);
	bVar2 = is_bit_set(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = is_ped_on_foot(Global_35);
	bVar10 = is_ped_injured(*iParam0);
	bVar11 = (((_is_ped_carrying(Global_35) || func_162(Global_35)) || func_163(Global_35)) || func_164(Global_35));
	fVar12 = -1f;
	if (func_71(&(iParam1->f_13)))
	{
		fVar12 = func_72(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((*uParam4)[iVar0]->f_8 != iParam12)
		{
			iParam12 = (*uParam4)[iVar0]->f_8;
		}
		bVar4 = func_95((*uParam4)[iVar0]->f_6);
		func_165(*iParam0, (*uParam4)[iVar0], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (is_bit_set(uParam4[iVar0], 20))
		{
			bVar3 = true;
		}
		if (func_166(*iParam0, iParam1, (*uParam4)[iVar0], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_167(iParam12, (*uParam4)[iVar0]->f_6))
				{
					if (!bVar7)
					{
						func_54(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_168(uParam4, 0, 0);
					}
					if (is_bit_set(uParam4[iVar0], 11))
					{
						func_156(iParam1, uParam4, is_bit_set(*iParam1, 6));
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
					if (func_169(iParam1, fParam6, iParam1->f_9))
					{
						func_41(&(iParam1->f_18));
						if (bVar6)
						{
							func_168(uParam4, 0, 0);
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
		func_170(iParam1, fParam2);
	}
	return bVar5;
}

void func_51(var uParam0)
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

void func_52(int* iParam0, var uParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_171((*uParam1)[iVar0]))
		{
			if (is_bit_set(uParam1[iVar0], 20))
			{
				func_170(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_53(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!is_control_pressed(0, -124244224))
		{
			if (func_172(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_173(iParam1, 0);
				func_156(iParam1, uParam2, func_46(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

void func_54(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_95((*uParam0)[iVar0]->f_6))
			{
				if (!bParam4 && is_bit_set(uParam0[iVar0], 11))
				{
				}
				else
				{
					func_86(&((*uParam0)[iVar0]->f_6), 1, 1);
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

bool func_55(int iParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_41(&(iParam1->f_18));
			return false;
		}
		else if (func_71(&(iParam1->f_18)))
		{
			func_116(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_71(&(iParam1->f_18)))
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
	return func_92(&(iParam1->f_18), fParam2);
	return true;
}

void func_56(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_165(iParam0, (*uParam2)[iVar0], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_57(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

void func_58(int* iParam0, var uParam1)
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
	func_156(iParam0, uParam1, 1);
	func_54(uParam1, 0, 1, 1, 0);
	_copy_memory(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		_copy_memory((*uParam1)[iVar0], &Var22, 17);
		iVar0++;
	}
}

bool func_59(int iParam0)
{
	return (Global_1392388->f_4 && iParam0) != 0;
}

bool func_60()
{
	if (!func_84(Local_73.f_2))
	{
		if (vdist2(Local_73.f_2, Global_36) > (10000f + (10000f / 20f)))
		{
			return true;
		}
	}
	return false;
}

bool func_61(int iParam0, int iParam1)
{
	iVar0 = 1;
	if (func_127() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = func_175(func_174(), iParam0);
		}
		iVar1 = get_frame_count();
		if (Global_1914319->f_3[iParam0]->f_444 >= iVar1)
		{
			return Global_1914319->f_3[iParam0]->f_445;
		}
		iVar0 = (func_176(iParam1) || func_178(func_177(iParam0)));
		Global_1914319->f_3[iParam0]->f_444 = iVar1;
		Global_1914319->f_3[iParam0]->f_445 = iVar0;
	}
	return iVar0;
}

int func_62(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_179(bParam1, bParam2, bParam3);
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

bool func_63(int iParam0)
{
	if (func_180(iParam0))
	{
		iVar0 = 476;
	}
	else
	{
		iVar0 = 72;
	}
	iVar1 = func_181(iVar0);
	if (func_6(iVar1, 0))
	{
		if (_0x4912dfe492db98cd(iVar1, func_182()) || func_183(iVar1, 0, &uLocal_32, &uLocal_60, 0, 0))
		{
			_0xcb9401f918cb0f75(iVar1, func_182(), 1, -1);
			return true;
		}
	}
	return false;
}

bool func_64(int iParam0, bool bParam1)
{
	if (func_127() != -1)
	{
		return false;
	}
	if (!func_70(iParam0))
	{
		return false;
	}
	if (!_0x800df3fc913355f3(func_135(iParam0)))
	{
		return false;
	}
	if (bParam1 && !does_entity_exist(func_181(iParam0)))
	{
		return false;
	}
	return !_0xeb98b38ca60742d7(func_135(iParam0));
}

bool func_65(int iParam0, bool bParam1, bool bParam2)
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
		if (func_184())
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
		iVar0 = func_185(&(Global_1898164->f_1[0]));
		if (func_139(iVar0) && func_186((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_187(&(Global_1898164->f_1[0])))
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

bool func_66(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_188(cParam1, cParam0);
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

void func_67()
{
	if (does_entity_exist(Local_73.f_159))
	{
		if (is_entity_attached(Local_73.f_159))
		{
			detach_entity(Local_73.f_159, true, true);
		}
		delete_object(&(Local_73.f_159));
	}
	if (bLocal_15)
	{
		return;
	}
	if (iLocal_61 == 0)
	{
		func_93(32768);
	}
	else
	{
		func_189(32768);
	}
	Global_40.f_9146.f_110 = func_190();
	func_191(&(Global_40.f_9146.f_110), 0, 0, 8, 0, 0, 0, 0);
	if (iLocal_62 != 13)
	{
		func_192(iLocal_62);
		func_193(iLocal_62, iLocal_63, iLocal_64);
	}
	func_194();
	func_195(func_18(iLocal_62), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	Global_40.f_9146.f_94[iLocal_62] = 0;
	if (!func_196(262144))
	{
		func_93(262144);
	}
	func_197("CR_H_NOTE", 10000, 0, 0, 0, 1);
	if (iLocal_62 == 2)
	{
		if (!has_ped_got_weapon(Global_35, -1504859554, 0, false))
		{
			func_198(Global_35, -1504859554, 0, 0, 0, 0, 0, 1056964608, 1065353216, 3, 0, 0, 0, 0);
		}
		else
		{
			_add_ammo_to_ped(Global_35, -1504859554, 3, 752097756);
		}
	}
	bLocal_15 = true;
}

void func_68()
{
	Local_73.f_25 = 0;
	if (func_199())
	{
		func_200(&(Local_73.f_29), Global_35, "JOHN", 0);
	}
	else
	{
		func_200(&(Local_73.f_29), Global_35, "ARTHUR", 0);
	}
	switch (iLocal_61)
	{
		case 0:
			Local_73.f_2 = { func_28(iLocal_61) };
			Local_73.f_5 = 55.15f;
			Local_73.f_6 = 292812873;
			Local_73.f_1 = 476;
			Local_73.f_7 = "STR_Freight_Clerk";
			break;
		case 1:
			Local_73.f_2 = { func_28(iLocal_61) };
			Local_73.f_5 = 46.3f;
			Local_73.f_6 = 1057932105;
			Local_73.f_1 = 72;
			Local_73.f_7 = "RHO_STATWRK";
			Local_73.f_156 = { 1223.57f, -1295.27f, 75.93f };
			break;
	}
	func_201();
}

bool func_69()
{
	if (bLocal_28)
	{
		return true;
	}
	if (func_202(Global_35))
	{
		return false;
	}
	if (is_ped_in_any_vehicle(Global_35, false))
	{
		return false;
	}
	if (vdist(Global_36, func_28(iLocal_61)) > 20f)
	{
		return false;
	}
	bLocal_28 = true;
	return true;
}

bool func_70(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

bool func_71(var uParam0)
{
	return func_203(*uParam0, 1);
}

float func_72(var uParam0)
{
	if (!func_71(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_204(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_205() - uParam0->f_1);
}

int func_73(int iParam0, bool bParam1)
{
	if (!func_70(iParam0))
	{
		return 0;
	}
	if (!func_129(iParam0, 2))
	{
		return 0;
	}
	if (func_129(iParam0, 32) && !bParam1)
	{
		func_206(iParam0, _create_persistent_character(func_133(iParam0)));
		if (func_127() == -1)
		{
			if (func_129(iParam0, 2048))
			{
				_0x49a8c2cd97815215(func_135(iParam0));
				func_131(iParam0, 2048);
			}
			_0xfcc6db8dbe709bc8(func_135(iParam0));
		}
		return 0;
	}
	if (!func_207(iParam0) && func_127() == -1)
	{
		return 0;
	}
	if (_0x800df3fc913355f3(func_135(iParam0)))
	{
		func_131(iParam0, 128);
		return 1;
	}
	func_206(iParam0, _create_persistent_character(func_133(iParam0)));
	_0x4f81ead1de8fa19b(func_135(iParam0));
	if (func_129(iParam0, 2048))
	{
		_0x49a8c2cd97815215(func_135(iParam0));
		func_131(iParam0, 2048);
	}
	return 1;
}

char* func_74()
{
	return "amb_work@world_human_shopkeeper@MALE_A@base";
}

char* func_75()
{
	return "amb_work@world_human_shopkeeper@MALE_B@base";
}

bool func_76()
{
	iVar0 = 1;
	_0xed9582b3da8f02b4(iVar0);
	if (_0x313778edca9158e2() >= iVar0)
	{
		return true;
	}
	return false;
}

bool func_77(bool bParam0, bool bParam1, bool bParam2)
{
	if (Local_73.f_28)
	{
		return true;
	}
	if (func_70(Local_73.f_1))
	{
		if (bParam0)
		{
			if (!func_128(Local_73.f_1))
			{
				func_132(Local_73.f_1);
			}
			Local_73 = func_208(Local_73.f_1, 0, 0, 0, 1, 1);
		}
		else
		{
			Local_73 = func_181(Local_73.f_1);
		}
		if (!func_6(Local_73, 0))
		{
			return false;
		}
		if (bParam1)
		{
			if ((bParam2 && iLocal_62 == 0) && !func_196(4096))
			{
				Local_73.f_2 = (Local_73.f_2 + 0.055f);
				Local_73.f_2.f_1 = (Local_73.f_2.f_1 + 0.015f);
				Local_73.f_2.f_2 = (Local_73.f_2.f_2 - 0.01f);
			}
			_set_entity_coords_and_heading(Local_73, Local_73.f_2, Local_73.f_5, true, false, true);
			if (bParam2)
			{
				if (iLocal_62 == 0 && !func_196(4096))
				{
					freeze_entity_position(Local_73, true);
				}
				_0xf1c03a5352243a30(Local_73);
				task_play_anim(Local_73, func_74(), "base", 8f, -8f, -1, 5, 0f, false, 0, false, 0, false);
				task_look_at_entity(Local_73, Global_35, -1, 0, 51, 0);
				bLocal_26 = true;
			}
			else
			{
				task_start_scenario_at_position(Local_73, 1041923169, Local_73.f_2, Local_73.f_5, 0, false, true, "WORLD_HUMAN_SHOPKEEPER_MALE_B", -1f, false);
				bLocal_27 = true;
			}
			set_blocking_of_non_temporary_events(Local_73, true);
		}
		set_ped_config_flag(Local_73, 130, true);
		func_200(&(Local_73.f_29), Local_73, Local_73.f_7, 0);
		set_ped_relationship_group_hash(Local_73, -1538724068);
		if ((iLocal_61 == 1 || iLocal_62 == 1) || iLocal_62 == 2)
		{
			_0x946d46cd6dfb9742(get_player_index(), 0, _0x0139637a3bff8b6d(Local_73, &uVar0));
		}
		if (bParam0 || bParam1)
		{
			func_21(1);
		}
		Local_73.f_28 = 1;
		set_ped_config_flag(Local_73, 413, true);
		set_ped_config_flag(Local_73, 330, true);
		return true;
	}
	return false;
}

bool func_78()
{
	switch (iLocal_61)
	{
		case 0:
			if (iLocal_62 == 3)
			{
				return true;
			}
			break;
		case 1:
			if (iLocal_62 == 7)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_79()
{
	if (iLocal_61 == 0)
	{
		if (!is_entity_dead(Local_73))
		{
			if ((is_entity_in_angled_area(Global_35, -1768.272f, -381.6094f, 156.2363f, -1764.41f, -384.2305f, 159.2827f, 2.5f, false, true, 0) && is_ped_facing_ped(Local_73, Global_35, 70f)) && is_ped_on_foot(Global_35))
			{
				return true;
			}
		}
	}
	else if (!is_entity_dead(Local_73))
	{
		if ((vdist(get_entity_coords(Local_73, true, false), Global_36) < 4.5f && is_ped_facing_ped(Local_73, Global_35, 35f)) && is_ped_on_foot(Global_35))
		{
			return true;
		}
	}
	return false;
}

bool func_80(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_209(iParam0, iParam1, 0f))
		{
			return false;
		}
	}
	if (!func_210(iParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (bParam4 && is_entity_a_ped(iParam1))
	{
		return _0x9d9473cb82d83a30(iParam0, get_ped_index_from_entity_index(iParam1), 0) == 1;
	}
	return _0x7f9b9791d4cb71f6(iParam0, iParam1, bParam2, 0) == 1;
}

void func_81(int iParam0)
{
	if (func_211(iParam0))
	{
		if (func_212(iParam0))
		{
			if (iParam0 == 7)
			{
				Global_40.f_9146.f_1 = -1;
			}
			else
			{
				Global_40.f_9146.f_1 = iParam0 + 1;
			}
		}
		else if (func_180(iParam0))
		{
			if (iParam0 == 3)
			{
				Global_40.f_9146.f_2 = -1;
			}
			else
			{
				Global_40.f_9146.f_2 = iParam0 + 1;
			}
		}
	}
	func_213(Global_40.f_9146.f_2);
	func_213(Global_40.f_9146.f_1);
}

bool func_82()
{
	if (!func_214(Global_40.f_9146.f_110) || func_215(Global_40.f_9146.f_110, 1))
	{
		return true;
	}
	return false;
}

int func_83(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, float fParam9)
{
	if (!bParam8 && network_is_game_in_progress())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_84(vParam0))
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
		if (func_216(vParam0))
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
	if (iParam7 != 0)
	{
		_0xb440f4e35393fc39(iVar0, iParam7);
	}
	if (fParam9 >= 0f)
	{
		_0xd460135c98940274(iVar0, fParam9);
	}
	func_217(iVar0, bParam8);
	return iVar0;
}

bool func_84(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_85()
{
	if (!func_6(Local_73, 0))
	{
		return false;
	}
	if (!func_218())
	{
		return false;
	}
	if (iLocal_62 != 13)
	{
		if (func_214(Global_40.f_9146.f_110) && !func_215(Global_40.f_9146.f_110, 1))
		{
			return false;
		}
	}
	return true;
}

void func_86(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_95(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_99(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_219(iVar0);
	*uParam0 = 0;
}

void func_87()
{
	if (bLocal_26)
	{
		if (!is_entity_playing_anim(Local_73, func_74(), "base", 1))
		{
			_set_entity_coords_and_heading(Local_73, Local_73.f_2, Local_73.f_5, true, false, true);
			_0xf1c03a5352243a30(Local_73);
			task_play_anim(Local_73, func_74(), "base", 8f, -8f, -1, 5, 0f, false, 0, false, 0, false);
			task_look_at_entity(Local_73, Global_35, -1, 0, 51, 0);
			_0x2208438012482a1a(Local_73, false, false);
		}
	}
}

void func_88()
{
	if (bLocal_27)
	{
		if (!func_112(Local_73, -1098463898))
		{
			_set_entity_coords_and_heading(Local_73, Local_73.f_2, Local_73.f_5, true, false, true);
			task_start_scenario_at_position(Local_73, 1041923169, Local_73.f_2, Local_73.f_5, 0, false, true, "WORLD_HUMAN_SHOPKEEPER_MALE_A", -1f, false);
			task_look_at_entity(Local_73, Global_35, -1, 0, 51, 0);
			_0x2208438012482a1a(Local_73, false, false);
		}
	}
}

bool func_89()
{
	switch (iLocal_62)
	{
		case 0:
			if (!func_196(4096))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_90()
{
	sVar5 = "SCRIPT_PROC@ROBBERIES@COACH@STRAWBERRY";
	if (func_7(Local_73, Global_36, 1) < 5f)
	{
		disable_control_action(0, -491432029, false);
		set_ped_max_move_blend_ratio(Global_35, 1f);
	}
	switch (iLocal_72)
	{
		case 0:
			fVar3 = func_9();
			if (!func_95(Local_73.f_23))
			{
				request_anim_dict(sVar5);
				Local_73.f_23 = func_97("CR_C_TALK", -163964935, Local_73, 1, 0, 0, 0, 0, fVar3, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
				_uiprompt_set_group((*Global_1945938)[func_99(Local_73.f_23)]->f_3, _uiprompt_get_group_id_for_target_entity(Local_73), 0);
			}
			else if ((!func_96(Local_73, 0, 0, 0) && bLocal_19) || func_7(Local_73, Global_36, 1) > fVar3)
			{
				func_102(Local_73.f_23, 0, 1);
			}
			else
			{
				func_102(Local_73.f_23, 1, 1);
				if (func_220(Local_73.f_23, 1) && has_anim_dict_loaded(sVar5))
				{
					bVar4 = true;
				}
			}
			if (bVar4)
			{
				task_look_at_entity(Global_35, Local_73, -1, 0, 51, 0);
				if (!bLocal_22)
				{
					_0x3946fc742ac305cd(player_id(), Local_73, func_221(), 0f, 0f, 0f, 0, "COACHROB");
					bLocal_22 = true;
				}
				func_86(&(Local_73.f_23), 1, 1);
				set_ped_config_flag(Local_73, 301, true);
				task_look_at_entity(Local_73, Global_35, -1, 0, 51, 0);
				_0xf1c03a5352243a30(Local_73);
				task_play_anim(Local_73, sVar5, "action_pt01_hector", 2f, -4f, -1, 57346, 0f, false, 0, false, 0, false);
				func_20(0);
				iLocal_72 = 1;
			}
			break;
		case 1:
			if (!func_71(&(Local_73.f_20)))
			{
				func_41(&(Local_73.f_20));
			}
			else if (func_72(&(Local_73.f_20)) > 0f)
			{
				if (func_199())
				{
					StringCopy(&cVar0, "CRF1SJ", 24);
				}
				else
				{
					StringCopy(&cVar0, "CRF1S", 24);
				}
				if (func_66(&(Local_73.f_29), cVar0, 0, -1, 0, 0))
				{
					func_116(&(Local_73.f_20));
					iLocal_72 = 2;
				}
			}
			break;
		case 2:
			if (_get_entity_anim_current_time(Local_73, sVar5, "action_pt01_hector") > 0.99f)
			{
				if (bLocal_22)
				{
					_0xc67a4910425f11f1(get_player_index(), "COACHROB");
					bLocal_22 = false;
				}
				_0x946d46cd6dfb9742(get_player_index(), 0, _0x0139637a3bff8b6d(Local_73, &uVar6));
				task_play_anim(Local_73, func_75(), "base", 4f, -4f, -1, 8193, 0f, false, 0, false, 0, false);
				task_look_at_entity(Local_73, Global_35, -1, 0, 51, 0);
				_0x2208438012482a1a(Local_73, true, false);
				clear_ped_tasks(Global_35, 1, 0);
				set_player_control(player_id(), true, 0, false);
				func_93(4096);
				iLocal_72 = 6;
			}
			break;
		case 6:
			return true;
	}
	return false;
}

bool func_91(char* sParam0)
{
	return _0xd89504d9d7d5057d(sParam0);
}

bool func_92(var uParam0, float fParam1)
{
	if (func_222(uParam0, fParam1))
	{
		func_116(uParam0);
		return true;
	}
	return false;
}

void func_93(int iParam0)
{
	Global_40.f_9146.f_126 = (Global_40.f_9146.f_126 || iParam0);
}

void func_94(float fParam0)
{
	if (iLocal_18 >= 6)
	{
		return;
	}
	if (!func_79())
	{
		return;
	}
	if (bLocal_14)
	{
		return;
	}
	if (func_106())
	{
		return;
	}
	if (!func_71(&(Local_73.f_11)))
	{
		func_41(&(Local_73.f_11));
		return;
	}
	else if (func_72(&(Local_73.f_11)) < fParam0)
	{
		return;
	}
	func_66(&(Local_73.f_29), Local_73.f_149, 0, -1, 0, 0);
	func_116(&(Local_73.f_11));
	iLocal_18++;
}

bool func_95(int iParam0)
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

bool func_96(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (func_223(16))
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
					func_224(16);
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

int func_97(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_225(iVar0, 2))
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
				func_226(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_98(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_95(iParam0))
	{
		return;
	}
	iVar0 = func_99(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(2, sParam1, sParam2));
}

int func_99(int iParam0)
{
	return iParam0;
}

void func_100(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_95(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_227(iParam0, 128);
	}
	else
	{
		func_228(iParam0, 128);
	}
}

void func_101()
{
	if (iLocal_62 != 0)
	{
		return;
	}
	if (bLocal_21)
	{
		return;
	}
	if (vdist(get_entity_coords(Local_73, true, false), Global_36) >= 2f && !is_ped_facing_ped(Global_35, Local_73, 70f))
	{
		if (!bLocal_14)
		{
			func_66(&(Local_73.f_29), Local_73.f_140, 0, -1, 0, 0);
			bLocal_14 = true;
		}
		_0x6d07b371e9439019(Local_73);
		_0xd65fdc686a031c83(Local_73, 772225515, 3f);
		bLocal_21 = true;
	}
}

void func_102(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_95(iParam0))
	{
		return;
	}
	iVar0 = func_99(iParam0);
	func_229(iVar0, bParam1);
}

bool func_103(vector3 vParam0, int iParam3)
{
	if (is_entity_dead(iParam3))
	{
		return false;
	}
	vVar0 = { get_entity_forward_vector(iParam3) };
	return func_230(vVar0, vParam0) > func_230(vVar0, get_entity_coords(iParam3, true, false));
}

int func_104(int iParam0)
{
	return _money_get_cash_balance();
}

bool func_105(int iParam0)
{
	return _0xfe5c6177064bd390(iParam0);
}

bool func_106()
{
	if (!is_thread_active((*Global_1347702)[31]->f_42, false))
	{
		return false;
	}
	if (((func_91("RBWCG_ALD_METJ") || func_91("RBWCG_ALD_NOTJ")) || func_91("RBWCG_ALD_META")) || func_91("RBWCG_ALD_NOTA"))
	{
		return true;
	}
	return false;
}

bool func_107(int iParam0, bool bParam1)
{
	if (bParam1 && !func_95(iParam0))
	{
		return false;
	}
	return !func_225(iParam0, 4);
}

void func_108(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_95(iParam0))
	{
		return;
	}
	iVar0 = func_99(iParam0);
	if (bParam1)
	{
		func_227(iParam0, 4);
		func_229(iVar0, 1);
		func_231(iVar0, 1);
	}
	else
	{
		func_228(iParam0, 4);
		func_231(iVar0, 0);
	}
}

bool func_109(int iParam0, bool bParam1)
{
	if (bParam1 && !func_95(iParam0))
	{
		return false;
	}
	iVar0 = func_99(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

int func_110(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_111(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_112(int iParam0, int iParam1)
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

void func_113(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (bParam1)
	{
	}
	if (func_232() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0];
		if (((func_233(iVar1) && !func_234(iVar1, iParam2)) && (!bParam3 || !func_235(iVar1))) && (!bParam4 || !func_236(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_237(iVar0);
			}
		}
		iVar0++;
	}
}

void func_114(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_238(iParam0);
	if (bParam3)
	{
		func_239(iParam0, sParam1, iParam2);
	}
}

bool func_115(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0) && is_entity_a_ped(iParam0))
	{
		iVar0 = func_240(iParam0);
		return func_241(iParam0, 2084597891, iParam1, iVar0);
	}
	return decor_set_int(iParam0, "loot_money", iParam1);
}

void func_116(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_117()
{
	set_ped_can_play_gesture_anims(Global_35, 0, 1);
	disable_control_action(0, -562475458, false);
	switch (iLocal_70)
	{
		case 0:
			_hide_hud_component(724769646);
			task_clear_look_at(Global_35);
			_0xaac0ee3b4999abb5(Global_35, 0);
			func_242();
			iLocal_70 = 1;
			break;
		case 1:
			func_242();
			if (_0x3ab6c7b0bb0df4b1(Global_35, Local_73.f_162))
			{
				if (bLocal_20)
				{
					func_66(&(Local_73.f_29), Local_73.f_152, 0, -1, 0, 0);
				}
				iLocal_70 = 6;
			}
			break;
		case 6:
			func_242();
			if (!_0x3ab6c7b0bb0df4b1(Global_35, Local_73.f_162))
			{
				if (bLocal_22)
				{
					_0xc67a4910425f11f1(get_player_index(), "COACHROB");
					bLocal_22 = false;
				}
				func_243("CR_DG_P_ACP_L", 1);
				func_67();
				if (iLocal_62 == 13)
				{
					func_118((*Global_1347702)[128]->f_15, 1);
				}
				if (does_entity_exist(Local_73.f_159))
				{
					set_object_as_no_longer_needed(&(Local_73.f_159));
				}
				_display_hud_component(724769646);
				func_20(1);
				func_21(1);
				iLocal_70 = 8;
			}
			break;
		case 8:
			func_242();
			if (iLocal_62 == 0)
			{
				if (!func_119(Local_73, Global_36, 5f, 1, 1))
				{
					if (func_91(&(Local_73.f_134)))
					{
						stop_scripted_conversation(&(Local_73.f_134), true, false);
					}
					else if (func_91(&(Local_73.f_137)))
					{
						stop_scripted_conversation(&(Local_73.f_137), true, false);
					}
				}
				iLocal_23 = 1258889694;
				if (_is_anim_scene_started(Local_73.f_162, false))
				{
					if (_0x3ab6c7b0bb0df4b1(Local_73, Local_73.f_162))
					{
						if (_get_anim_scene_progress(Local_73.f_162) > 0.98f)
						{
							if (!is_entity_playing_anim(Local_73, func_75(), "base", 1))
							{
								task_play_anim(Local_73, func_75(), "base", 2f, -2f, -1, 5, 0f, false, 0, false, 0, false);
							}
						}
					}
				}
			}
			if (!_is_anim_scene_started(Local_73.f_162, false) || _is_anim_scene_active(Local_73.f_162))
			{
				if (does_entity_exist(Local_73.f_160))
				{
					set_object_as_no_longer_needed(&(Local_73.f_160));
				}
				if (!_does_scenario_point_exist(Local_73.f_168))
				{
					Local_73.f_168 = func_244(1041923169, get_entity_coords(Local_73, true, false), get_entity_heading(Local_73), 0, 0, 1);
				}
				if (iLocal_23 == -1656207781)
				{
					_task_start_scenario_in_place_2(Local_73, Local_73.f_168, "WORLD_HUMAN_SHOPKEEPER_MALE_A", 0, false, -1f, false);
				}
				else if (iLocal_23 == 1258889694)
				{
					_task_start_scenario_in_place_2(Local_73, Local_73.f_168, "WORLD_HUMAN_SHOPKEEPER_MALE_B", 0, false, -1f, false);
				}
				else if (iLocal_23 == 2021096634)
				{
					_task_start_scenario_in_place_2(Local_73, Local_73.f_168, "WORLD_HUMAN_SHOPKEEPER_MALE_C", 0, false, -1f, false);
				}
				else
				{
					_task_start_scenario_in_place_2(Local_73, Local_73.f_168, 0, 0, false, -1f, false);
				}
				_0x2208438012482a1a(Local_73, false, false);
				set_ped_keep_task(Local_73, true);
				func_245();
				return true;
			}
			break;
	}
	return false;
}

void func_118(int iParam0, int iParam1)
{
	if (!func_187(iParam0))
	{
		return;
	}
	func_246(iParam0, iParam1);
}

bool func_119(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_247(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

bool func_120(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_121(int iParam0)
{
	if (!func_120(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_122(int iParam0, int iParam1)
{
	if (!func_120(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_248(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_249("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_250(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_111(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_251(iVar1);
				return true;
			}
			iVar3++;
		}
		func_251(iVar1);
	}
	return false;
}

int func_123(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_120(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_121(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_248(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_252(iParam0, 0);
	}
	iVar2 = _0xe787f05dfc977bde(func_253(bParam2), iParam0, 0);
	return iVar2;
}

void func_124(int iParam0, bool bParam1)
{
	if (!func_254(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_126(iParam0, 1);
	}
	else
	{
		func_125(iParam0, 1);
	}
	func_256(func_255(iParam0), bParam1);
}

void func_125(int iParam0, int iParam1)
{
	if (!func_254(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (Global_1914319->f_15614[iParam0] || iParam1);
}

void func_126(int iParam0, int iParam1)
{
	if (!func_254(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (&Global_1914319->f_15614[iParam0] - (Global_1914319->f_15614[iParam0] && iParam1));
}

int func_127()
{
	return Global_1572887->f_12;
}

bool func_128(int iParam0)
{
	if (!func_70(iParam0))
	{
		return false;
	}
	return (*Global_1895087)[iParam0]->f_2 == get_id_of_this_thread();
}

bool func_129(int iParam0, int iParam1)
{
	if (func_127() != -1)
	{
		return false;
	}
	if (!func_70(iParam0))
	{
		return false;
	}
	return (Global_24887[iParam0] && iParam1) != 0;
}

bool func_130(int iParam0)
{
	if (!func_70(iParam0))
	{
		return false;
	}
	return _does_thread_exist((*Global_1895087)[iParam0]->f_2);
}

void func_131(int iParam0, int iParam1)
{
	if (func_127() != -1)
	{
		return;
	}
	if (!func_70(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (&Global_24887[iParam0] - (Global_24887[iParam0] && iParam1));
}

void func_132(int iParam0)
{
	if (!func_70(iParam0))
	{
		return;
	}
	iVar0 = func_181(iParam0);
	if (does_entity_exist(iVar0))
	{
		if (does_entity_belong_to_this_script(iVar0, false))
		{
			set_ped_as_no_longer_needed(&iVar0);
		}
	}
	(*Global_1895087)[iParam0]->f_2 = 0;
}

int func_133(int iParam0)
{
	if (!func_70(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0];
}

bool func_134(int iParam0)
{
	return iParam0 != 0;
}

int func_135(int iParam0)
{
	if (!func_70(iParam0))
	{
		return 0;
	}
	return (*Global_1895087)[iParam0]->f_1;
}

int func_136(int iParam0, bool bParam1)
{
	if (!func_70(iParam0))
	{
		return 0;
	}
	if (!func_129(iParam0, 2))
	{
		return 0;
	}
	if (func_133(iParam0) == 0)
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_135(iParam0)))
	{
		return 1;
	}
	if (func_129(iParam0, 1) && !bParam1)
	{
		func_257(iParam0, 128);
		return 1;
	}
	func_131(iParam0, 129);
	func_132(iParam0);
	_0xfc77c5b44d5ff7c0(func_135(iParam0));
	func_206(iParam0, 0);
	return 1;
}

bool func_137(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_138(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_258(iParam0))
		{
			func_125(iParam0, 67108864);
		}
	}
	else if (func_258(iParam0))
	{
		func_126(iParam0, 67108864);
	}
}

bool func_139(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_140(int iParam0)
{
	iVar0 = func_259(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_141(int iParam0)
{
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 0;
			break;
		case 2:
			iVar0 = 0;
			break;
		case 4:
			iVar0 = 3;
			break;
		case 5:
			iVar0 = 1;
			break;
		case 6:
			iVar0 = 2;
			break;
		case 13:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_142(int iParam0)
{
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1;
			break;
		case 1:
			iVar0 = 1;
			break;
		case 2:
			iVar0 = 2;
			break;
		case 4:
			iVar0 = 1;
			break;
		case 5:
			iVar0 = 0;
			break;
		case 6:
			iVar0 = 2;
			break;
		case 13:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

void func_143(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_151(uParam0, 4);
	}
	else
	{
		func_150(uParam0, 4);
	}
}

void func_144(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_151(uParam0, 8);
	}
	else
	{
		func_150(uParam0, 8);
	}
}

void func_145(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_151(uParam0, 16);
	}
	else
	{
		func_150(uParam0, 67108864);
		func_150(uParam0, 16);
	}
}

void func_146(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_151(uParam0, 32);
	}
	else
	{
		func_150(uParam0, 32);
	}
}

void func_147(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_151(uParam0, 64);
	}
	else
	{
		func_150(uParam0, 64);
	}
}

void func_148(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_151(uParam0, 1024);
	}
	else
	{
		func_150(uParam0, 1024);
	}
}

void func_149(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_151(uParam0, 1048576);
	}
	else
	{
		func_150(uParam0, 1048576);
	}
}

void func_150(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_151(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_152(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_205() - fParam1);
	func_260(uParam0, 1);
	func_261(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_153(int iParam0, int* iParam1)
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
		if (is_ped_in_combat(iParam0, func_262((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

bool func_154(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_155(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_171((*uParam0)[iVar0]))
		{
			func_263((*uParam0)[iVar0], 14);
		}
		iVar0++;
	}
}

void func_156(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_86(&((*uParam1)[iParam0->f_3]->f_6), 1, 1);
		if (bParam2)
		{
			func_264(iParam0, 0);
		}
	}
}

int func_157(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(*uParam2)[iVar0]->f_8 = 6;
		func_265(iParam0, (*uParam2)[iVar0], fParam3, 3, 0, 6, bParam4, 0);
		if (func_95((*uParam2)[iVar0]->f_6))
		{
			func_263((*uParam2)[iVar0], 11);
			return (*Global_1945938)[(*uParam2)[iVar0]->f_6]->f_3;
		}
	}
	return 0;
}

int func_158(int iParam0)
{
	iVar0 = func_266(*iParam0);
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

int func_159(var uParam0, int iParam1)
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

void func_160(int* iParam0, int* iParam1)
{
	if (!func_46(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_263(iParam1, 19);
			func_173(iParam0, 23);
			func_267(iParam1, 2);
		}
	}
}

void func_161(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_265(iParam0, (*uParam1)[iVar0], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			clear_bit((*uParam1)[iVar0], 14);
		}
		iVar0++;
	}
}

bool func_162(int iParam0)
{
	return (func_268(iParam0, 4) || func_268(iParam0, 5));
}

bool func_163(int iParam0)
{
	return func_268(iParam0, 7);
}

bool func_164(int iParam0)
{
	return func_268(iParam0, 6);
}

void func_165(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (is_bit_set(*iParam1, 14))
	{
		if (func_171(iParam1))
		{
			clear_bit(iParam1, 14);
			func_265(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_166(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_269(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_107(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_108(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_108(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_270(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_167(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_109(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_271(iParam1, 1))
	{
		func_272(iParam1, 1);
		return true;
	}
	return false;
}

void func_168(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_273((*uParam0)[iVar0], bParam1, bParam2);
		iVar0++;
	}
}

bool func_169(int* iParam0, float fParam1, bool bParam2)
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

void func_170(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		disable_control_action(0, 1101824977, true);
		disable_control_action(0, 966551065, true);
		disable_control_action(0, 668058244, true);
		set_ped_reset_flag(Global_35, 203, true);
	}
}

bool func_171(int* iParam0)
{
	if (!is_string_null_or_empty(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_172(int iParam0)
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

void func_173(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

int func_174()
{
	return Global_1894899->f_2;
}

int func_175(int iParam0, int iParam1)
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

int func_176(int iParam0)
{
	if (!func_254(iParam0))
	{
		return 0;
	}
	iVar0 = func_255(iParam0);
	if ((((((((((iVar0 == 2 && func_274(28)) || (iVar0 == 18 && iParam0 != 55)) || iVar0 == 1) || iVar0 == 11) || iParam0 == 69) || iVar0 == 33) || iVar0 == 20) || iVar0 == 19) || iVar0 == 9) || func_275(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_177(int iParam0)
{
	if (iParam0 == 15)
	{
		return 65539;
	}
	return 7;
}

int func_178(int iParam0)
{
	if (iParam0 == -1)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = func_276(func_190());
	if (func_154(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_154(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return 1;
		}
	}
	if (func_154(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return 1;
		}
	}
	if (func_154(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_154(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_154(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return 1;
		}
	}
	if (func_154(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_154(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return 1;
		}
	}
	if (func_154(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_154(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_154(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_154(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_154(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_154(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return 1;
		}
	}
	if (func_154(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_154(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_154(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return 1;
		}
	}
	return 0;
}

int func_179(bool bParam0, bool bParam1, bool bParam2)
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

bool func_180(int iParam0)
{
	if (((iParam0 == 0 || iParam0 == 1) || iParam0 == 2) || iParam0 == 3)
	{
		return true;
	}
	return false;
}

int func_181(int iParam0)
{
	iVar0 = func_135(iParam0);
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

char* func_182()
{
	return "ClerkAggroed";
}

int func_183(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > uParam2->f_5)
	{
		func_277(uParam2, 1, iVar0);
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
			if (func_278(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_279(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_280(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_279(iParam0, uParam2, *uParam3);
					return 1;
				}
				else if (func_281(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_279(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_282(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_279(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_26 && func_62(player_id(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_279(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_283(uParam2, 1065353216))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_284(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_279(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_285(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_279(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_286(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_279(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			else if (func_286(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_279(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_287(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_279(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_288(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_279(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_289(uParam2, 4000))
				{
					if ((func_290(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_291(uParam2, iParam0)) && func_292(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_279(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_290(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_291(uParam2, iParam0)) && func_292(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_279(iParam0, uParam2, *uParam3);
					return 1;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_293(iParam0, Global_1935630->f_41))
							{
								func_294();
								*uParam3 = 2;
								func_279(iParam0, uParam2, *uParam3);
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
						if (func_293(iParam0, Global_1935630->f_41))
						{
							func_294();
							*uParam3 = 2;
							func_279(iParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_295(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_296() - uParam2->f_9) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_294();
						*uParam3 = 2;
						func_279(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_297())
					{
						if (func_293(iParam0, Global_1935630->f_42))
						{
							func_294();
							*uParam3 = 2;
							func_279(iParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_298(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_279(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_299(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_279(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_300(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_279(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_301(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_279(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_302(uParam2, 4000))
				{
					if (func_303(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_279(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_304(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_279(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_305(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_279(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
	}
	return 0;
}

bool func_184()
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

int func_185(int iParam0)
{
	if (!func_187(iParam0))
	{
		return -1;
	}
	return func_307(func_306(iParam0));
}

bool func_186(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_187(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

void func_188(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
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

void func_189(int iParam0)
{
	Global_40.f_9146.f_126 = (Global_40.f_9146.f_126 - (Global_40.f_9146.f_126 && iParam0));
}

int func_190()
{
	return &Global_1899515;
}

void func_191(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_308(*iParam0);
	iVar1 = func_309(*iParam0);
	iVar2 = func_310(*iParam0);
	iVar3 = func_276(*iParam0);
	iVar4 = func_311(*iParam0);
	iVar5 = func_312(*iParam0);
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
	iVar6 = func_313(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_313(iVar1, iVar0);
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
	func_314(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_192(int iParam0)
{
	if (!func_315(iParam0))
	{
		return;
	}
	Global_40.f_9146.f_49[iParam0] = &Global_40.f_9146.f_49[iParam0] + 1;
}

void func_193(int iParam0, int iParam1, int iParam2)
{
	if (!func_315(iParam0))
	{
		return;
	}
	if (func_211(iParam0))
	{
		Global_1392388->f_10[iParam0]->f_8 = func_317(3, iParam0, 2, func_316(iParam0));
		if (!func_318(Global_1392388->f_10[iParam0]->f_8))
		{
			func_319(Global_1392388->f_10[iParam0]->f_8);
			func_320(Global_1392388->f_10[iParam0]->f_8, 1, 2);
		}
	}
	Global_40.f_9146.f_4[iParam0] = 1;
	Global_40.f_9146.f_64[iParam0] = func_190();
	Global_40.f_9146.f_79[iParam0] = func_190();
	func_191(Global_40.f_9146.f_79[iParam0], 0, 0, 6, 0, 0, 0, 0);
	Global_40.f_9146.f_19[iParam0] = iParam1;
	Global_40.f_9146.f_34[iParam0] = iParam2;
	if (func_211(iParam0))
	{
		Global_40.f_9146.f_3 = iParam0;
		if (func_321(Global_1392388->f_10[iParam0]->f_8, 1))
		{
			func_322(Global_1392388->f_10[iParam0]->f_8);
		}
		func_323(Global_1392388->f_10[iParam0]->f_8);
	}
}

void func_194()
{
	iVar0[0] = -1260334554;
	iVar0[1] = -1492175229;
	iVar0[2] = 1585456486;
	iVar0[3] = -884998428;
	iVar0[4] = 667072496;
	iVar0[5] = 268535918;
	iVar0[6] = -866909932;
	iVar8 = 0;
	while (iVar8 < 7)
	{
		if (func_19(&(iVar0[iVar8]), 1, 0))
		{
			func_324(&(iVar0[iVar8]), 1, 1, -142743235, 0);
		}
		iVar8++;
	}
}

int func_195(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_120(iParam0, 0))
	{
		return 0;
	}
	if (!func_325(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_326(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_327(iParam0, bParam2);
	iVar2 = 0;
	if (func_123(iParam0, 0, 0) == 0)
	{
		if (func_328(iParam0))
		{
			iVar5 = func_329(iParam0);
			iVar6 = func_330(iVar5);
			iVar7 = func_331(iVar6) + 1;
			func_332(iVar5);
			if (func_333(38))
			{
				func_334(483, 0);
			}
			else
			{
				func_334(482, 0);
			}
			if (iVar7 == func_335(iVar6))
			{
				func_195(func_336(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_337() && func_338(4))
				{
					if (func_337() && (func_339(38) || func_333(38)))
					{
						func_341(38, func_336(iVar6), 0, 0, func_340(), 0, -1, 0);
						func_342(2);
					}
					else
					{
						func_341(38, func_336(iVar6), 0, 0, func_340(), 0, -1, 0);
						func_342(1);
					}
				}
			}
			else if (func_337() && func_338(4))
			{
				if (func_337() && (func_339(38) || func_333(38)))
				{
					func_341(38, 0, 0, 0, func_340(), 0, -1, 0);
					func_342(2);
				}
				else
				{
					func_341(38, 0, 0, 0, func_340(), 0, -1, 0);
					func_342(1);
				}
			}
			if (func_337() && func_338(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_337() && (func_339(38) || func_333(38)))
					{
						func_343(38, _0x13aaecda43318bfe(-2076669067, iVar6), _0xd52d20b0c76bb26d(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_343(38, get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_121(iParam0) == -1037537535)
	{
		if ((!func_344(iParam0, 866047851) && !func_344(iParam0, -1979000645)) && !func_344(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_345(iParam0, 8388608) && !func_274(28))
	{
		func_346(28);
	}
	if (!bVar3)
	{
		if (func_344(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_347(iParam0) == -1447088266)
			{
				iVar1 = func_349(func_348(iParam0, 1), 0);
				if (is_weapon_valid(iVar1))
				{
					if (func_127() == -1)
					{
						func_350(iVar1);
					}
					if (func_351(0) && func_352(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_353(iParam0, iVar0, iParam5);
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
					if (func_127() == -1)
					{
						func_350(iParam0);
					}
					if (func_351(0) && func_352(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_353(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_121(iParam0) == -427144552)
		{
			if (!func_354(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_121(iParam0) == 307971639 && func_355(iParam0))
		{
			if (!func_356(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_344(iParam0, 866047851))
		{
			func_357(iParam0);
		}
		else if (func_344(iParam0, 2000026003))
		{
			func_358(iParam0);
		}
		else if (func_344(iParam0, -103750053))
		{
			func_360(func_359(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_360(func_361(-717883113, 2091222383), iVar0);
		}
		else if (func_344(iParam0, -121341956) && !func_344(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_321((*Global_1835011)[4]->f_1, 1))
				{
					func_334(498, 0);
				}
			}
			if (func_344(iParam0, -2017733358) || func_344(iParam0, -1369131378))
			{
				func_362(iParam0);
			}
		}
		else if (func_344(iParam0, -136654233))
		{
			if (func_344(iParam0, -1021472396))
			{
			}
		}
		else if (func_344(iParam0, -1466706512) && func_344(iParam0, 1147021565))
		{
			func_334(484, 0);
		}
		else if (func_344(iParam0, 1147021565) && func_344(iParam0, -524514947))
		{
		}
		else if (func_344(iParam0, 554195525))
		{
		}
		else if (func_344(iParam0, 589988438))
		{
			if (func_363())
			{
				func_364(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_344(iParam0, 787083290) && func_344(iParam0, 949916894))
		{
			func_365(iParam0);
		}
		else if (func_344(iParam0, -1718133314))
		{
			func_366(iParam0);
		}
		else if (func_344(iParam0, -1738650224))
		{
			func_367(iParam0);
		}
		else if (func_344(iParam0, -1112814642) && func_344(iParam0, 949916894))
		{
			func_368(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_344(iParam0, 1841149704))
		{
			func_369();
		}
		else if (func_344(iParam0, 606799272))
		{
			func_370(iParam0, iParam1);
			func_371(iParam0);
		}
		else if (func_344(iParam0, -1112814642) && func_344(iParam0, -1697809989))
		{
			func_372(iParam0, 0, 0, 0);
		}
		else if (func_344(iParam0, -2017733358) || func_344(iParam0, -1369131378))
		{
			func_362(iParam0);
		}
		else if (func_344(iParam0, -1921346699))
		{
			if (func_127() != -1)
			{
				return 0;
			}
			func_373(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_344(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_19(215778062, 1, 0))
					{
						func_195(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_19(670273567, 1, 0))
					{
						func_195(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_19(-967317137, 1, 0))
					{
						func_195(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_19(526074061, 1, 0))
					{
						func_195(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_19(-1045488665, 1, 0))
					{
						func_195(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_19(471514780, 1, 0))
					{
						func_195(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_344(iParam0, -839724752) && func_345(iParam0, 4))
		{
			if (!func_333(42))
			{
				func_374(iParam0);
			}
		}
		else if (func_344(iParam0, 1399091007))
		{
			func_375(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_344(iParam0, 1248798204))
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
				func_195(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_346(24);
				if (&Global_1946804->f_1497.f_1[27] == &Global_1946804->f_57[27])
				{
					func_376(player_ped_id(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_377(&iVar9, 0))
				{
					func_352(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_127() == -1 && &Global_1946804->f_1497.f_1[25] == &Global_1946804->f_57[25])
				{
					func_376(player_ped_id(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case -160924582:
				break;
			case 2131771850:
				func_334(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_378();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_379();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_380();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_381();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_382();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_383(499813453, 854119837, 0);
				func_384(499813453, 0);
				func_385(1);
				break;
			case 2127812557:
				func_383(499813453, -1292544588, 0);
				func_384(499813453, 0);
				func_385(2);
				break;
			case 808991383:
				func_383(499813453, -1003325394, 0);
				func_384(499813453, 0);
				func_385(4);
				break;
			case 1134518629:
				func_383(666607663, -335460405, 0);
				func_384(666607663, 0);
				func_386(1);
				break;
			case 902940106:
				func_383(666607663, 903797617, 0);
				func_384(666607663, 0);
				func_386(2);
				break;
			case -418174898:
				func_383(666607663, 669728650, 0);
				func_384(666607663, 0);
				func_386(4);
				break;
			case -648114971:
				func_383(-220219788, 1214120047, 0);
				func_384(-220219788, 0);
				func_387(1);
				break;
			case 211153747:
				func_383(-220219788, 655769340, 0);
				func_384(-220219788, 0);
				func_387(2);
				break;
			case -32876996:
				func_383(-220219788, 885316185, 0);
				func_384(-220219788, 0);
				func_387(4);
				break;
			case 1191437462:
				func_383(218622660, -1491419385, 0);
				func_384(218622660, 0);
				func_388(1);
				break;
			case 1119149048:
				func_383(218622660, 1809565830, 0);
				func_384(218622660, 0);
				func_388(2);
				break;
			case 506073827:
				func_383(390004462, -628873767, 0);
				func_384(390004462, 0);
				func_389(1);
				break;
			case -1876986168:
				func_383(390004462, -405421956, 0);
				func_384(390004462, 0);
				func_389(2);
				break;
			case 2142623221:
				func_383(390004462, -1108972386, 0);
				func_384(390004462, 0);
				func_389(4);
				break;
			case 1508215381:
				func_383(6410548, 1053716392, 0);
				func_384(6410548, 0);
				func_390(1);
				break;
			case -888935280:
				func_383(6410548, 806507056, 0);
				func_384(6410548, 0);
				func_390(2);
				break;
			case -1252474566:
				func_383(6410548, 1571925350, 0);
				func_384(6410548, 0);
				func_390(4);
				break;
			case -1465702449:
				func_383(6410548, 1330352282, 0);
				func_384(6410548, 0);
				func_390(8);
				break;
			case -21093309:
				func_392(242, func_391(-21093309), 0);
				break;
			case 204375141:
				func_392(240, func_391(204375141), 0);
				break;
			case -417963070:
				func_392(241, func_391(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_393(594, 1934060482, 1, 1);
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
					func_393(594, 1110018439, 1, 1);
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
					func_393(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_393(594, -1228016946, 1, 1);
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
					func_393(595, -103579, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_393(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case 80178851:
				func_334(488, 0);
				break;
			case 1613651027:
				func_334(491, 0);
				break;
			case -885810591:
				func_334(485, 0);
				if ((get_random_int_in_range(0, 65536) % 3) == 0)
				{
					func_195(func_394(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_195(func_395(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_274(1))
				{
					func_334(487, 0);
				}
				break;
			case -898386032:
				func_334(486, 0);
				break;
			case -2035110427:
				if (func_127() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_334(496, 0);
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
		func_396(&iVar10);
		if (!func_397(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_351(0))
		{
			return 1;
		}
		if (func_121(iParam0) == -1037537535)
		{
			func_398(iParam0);
		}
		if (func_344(iParam0, -1979000645))
		{
			func_399(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_351(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_195(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_400(iVar2, 0);
		}
	}
	Var35 = { func_401(iParam0) };
	if (_stat_id_is_valid(&Var35))
	{
		_0x6a0184e904cdf25e(&Var35, iVar0);
	}
	func_402(iParam0);
	if (fParam6 > 0f)
	{
		if (func_344(iParam0, -839724752))
		{
			func_403(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_404(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

bool func_196(int iParam0)
{
	return (Global_40.f_9146.f_126 && iParam0) != 0;
}

var func_197(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_198(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_111(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
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
							if (func_111(iVar4) && iVar4 != iVar0)
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
	if (func_127() == -1 && !func_405(iVar0))
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
				if (func_405(-183018591))
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
		if (iParam0 != Global_35 && func_111(iVar0))
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
		func_352(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_406(iParam0, &iVar0, &fVar25);
		iVar0 = _give_weapon_to_ped_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_407(iVar0))
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

bool func_199()
{
	if (func_127() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

void func_200(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_408(uParam0, iParam1, sParam2))
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

void func_201()
{
	switch (iLocal_62)
	{
		case 0:
			Local_73.f_127 = "CRSTRA";
			StringCopy(&(Local_73.f_128), "CRG1S", 24);
			StringCopy(&(Local_73.f_131), "CRF1S", 24);
			StringCopy(&(Local_73.f_140), "CRB1SB", 24);
			StringCopy(&(Local_73.f_143), "CRT1S", 24);
			StringCopy(&(Local_73.f_146), "CRT2S", 24);
			StringCopy(&(Local_73.f_149), "CRSTL", 24);
			break;
		case 1:
		case 2:
		case 3:
			Local_73.f_127 = "CRSTRA";
			StringCopy(&(Local_73.f_128), "CRG1S", 24);
			StringCopy(&(Local_73.f_131), "CRF1S", 24);
			StringCopy(&(Local_73.f_140), "CRB1S", 24);
			StringCopy(&(Local_73.f_143), "CRT1S", 24);
			StringCopy(&(Local_73.f_146), "CRT2S", 24);
			StringCopy(&(Local_73.f_149), "CRSTL", 24);
			break;
		case 4:
		case 5:
		case 6:
		case 7:
			Local_73.f_127 = "CRRHOA";
			StringCopy(&(Local_73.f_128), "CRG1R", 24);
			if (func_199())
			{
				StringCopy(&(Local_73.f_131), "CRF1R", 24);
			}
			else
			{
				StringCopy(&(Local_73.f_131), "CRRH1_GREET_A", 24);
			}
			StringCopy(&(Local_73.f_140), "CRB1R", 24);
			StringCopy(&(Local_73.f_143), "CRT1R", 24);
			StringCopy(&(Local_73.f_146), "CRT2R", 24);
			StringCopy(&(Local_73.f_149), "CRRHL", 24);
			break;
		case 13:
			if (iLocal_61 == 0)
			{
				Local_73.f_127 = "CRSTRA";
				StringCopy(&(Local_73.f_128), "CRG1S", 24);
				StringCopy(&(Local_73.f_131), "CRF1S", 24);
				StringCopy(&(Local_73.f_140), "CRB1S", 24);
				StringCopy(&(Local_73.f_143), "CRT1S", 24);
				StringCopy(&(Local_73.f_146), "CRT2S", 24);
				StringCopy(&(Local_73.f_149), "CRSTL", 24);
			}
			else
			{
				Local_73.f_127 = "CRRHOA";
				StringCopy(&(Local_73.f_128), "CRRH1_GREET_H", 24);
				if (func_199())
				{
					StringCopy(&(Local_73.f_131), "CRF1R", 24);
				}
				else
				{
					StringCopy(&(Local_73.f_131), "CRG1R", 24);
				}
				StringCopy(&(Local_73.f_140), "CRB1R", 24);
				StringCopy(&(Local_73.f_143), "CRT1R", 24);
				StringCopy(&(Local_73.f_146), "CRT2R", 24);
				StringCopy(&(Local_73.f_149), "CRRHL", 24);
			}
			break;
	}
	switch (iLocal_62)
	{
		case 0:
			StringCopy(&(Local_73.f_134), "CRXS1", 24);
			StringCopy(&(Local_73.f_137), "CRXS1B", 24);
			if (func_196(2048))
			{
				StringCopy(&(Local_73.f_128), "CRL0S", 24);
				func_189(2048);
			}
			break;
		case 1:
			StringCopy(&(Local_73.f_134), "CRXS2", 24);
			if (func_196(2048))
			{
				StringCopy(&(Local_73.f_128), "CRL1S", 24);
				func_189(2048);
			}
			else
			{
				StringCopy(&(Local_73.f_128), "CRG1S", 24);
			}
			break;
		case 2:
			StringCopy(&(Local_73.f_134), "CRXS3", 24);
			if (func_196(2048))
			{
				StringCopy(&(Local_73.f_128), "CRL2S", 24);
				func_189(2048);
			}
			else
			{
				StringCopy(&(Local_73.f_128), "CRG2S", 24);
			}
			break;
		case 4:
			if (!func_199())
			{
				StringCopy(&(Local_73.f_152), "CRRIR", 24);
			}
			StringCopy(&(Local_73.f_134), "CRRH1_ALD_STL", 24);
			if (func_196(1024))
			{
				StringCopy(&(Local_73.f_128), "CRL0R", 24);
				func_189(1024);
			}
			else
			{
				StringCopy(&(Local_73.f_128), "CRRH1_GREET_A", 24);
			}
			break;
		case 5:
			StringCopy(&(Local_73.f_134), "CRRH1_ALD_VIP", 24);
			if (func_196(1024))
			{
				StringCopy(&(Local_73.f_128), "CRL1R", 24);
				func_189(1024);
			}
			else if (func_199() && !bLocal_24)
			{
				StringCopy(&(Local_73.f_128), "CRRH1_GREET_CJ", 24);
			}
			else
			{
				StringCopy(&(Local_73.f_128), "CRRH1_GREET_B", 24);
			}
			break;
		case 6:
			StringCopy(&(Local_73.f_134), "CRRH1_ALD_CNV", 24);
			if (func_196(1024))
			{
				StringCopy(&(Local_73.f_128), "CRL2R", 24);
				func_189(1024);
			}
			else
			{
				StringCopy(&(Local_73.f_128), "CRRH1_GREET_F", 24);
			}
			break;
		case 13:
			if (iLocal_61 == 0)
			{
				StringCopy(&(Local_73.f_134), "CRSRL", 24);
			}
			else
			{
				StringCopy(&(Local_73.f_134), "CRRH1_RTL_ALD", 24);
			}
			break;
	}
	if (func_199())
	{
		if (iLocal_61 == 1 && !func_196(65536))
		{
			bLocal_24 = true;
		}
		if (iLocal_61 == 0 && !func_196(131072))
		{
			bLocal_25 = true;
		}
		StringConCat(&(Local_73.f_131), "J", 24);
		StringConCat(&(Local_73.f_134), "J", 24);
		StringConCat(&(Local_73.f_137), "J", 24);
		StringConCat(&(Local_73.f_149), "J", 24);
		if (!func_196(128))
		{
			func_93(128);
		}
		if (bLocal_24 || bLocal_25)
		{
			iVar0 = 0;
			while (iVar0 < 14)
			{
				Global_40.f_9146.f_49[iVar0] = 0;
				iVar0++;
			}
			func_189(2);
			func_189(4);
			func_189(8);
			func_189(16);
			switch (iLocal_61)
			{
				case 1:
					StringCopy(&(Local_73.f_131), "CRG3RJ", 24);
					break;
				case 0:
					StringCopy(&(Local_73.f_131), "CRG3SJ", 24);
					break;
			}
			bLocal_17 = true;
		}
	}
	else if (iLocal_61 == 1)
	{
		StringConCat(&(Local_73.f_134), "A", 24);
	}
}

bool func_202(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	return is_ped_on_mount(iParam0);
}

bool func_203(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_204(var uParam0)
{
	return func_203(*uParam0, 2);
}

float func_205()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_206(int iParam0, int iParam1)
{
	if (!func_70(iParam0))
	{
		return;
	}
	(*Global_1895087)[iParam0]->f_1 = iParam1;
}

bool func_207(int iParam0)
{
	if (!func_70(iParam0))
	{
		return false;
	}
	if (!func_129(iParam0, 2))
	{
		return false;
	}
	return true;
}

int func_208(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (!func_409(iParam0, 1))
	{
		return 0;
	}
	if (func_134(func_133(iParam0)))
	{
		iVar1 = func_135(iParam0);
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
	if ((bParam4 && !func_128(iParam0)) && !is_entity_dead(iVar0))
	{
		set_ped_config_flag(iVar0, 171, bParam5);
		set_entity_as_mission_entity(iVar0, true, true);
	}
	func_257(iParam0, 1);
	func_410(iParam0);
	if (bParam3)
	{
		func_257(iParam0, 16);
	}
	if (!bParam2)
	{
	}
	return iVar0;
}

bool func_209(int iParam0, int iParam1, float fParam2)
{
	return func_411(iParam0, get_entity_coords(iParam1, false, false), fParam2);
}

bool func_210(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_211(int iParam0)
{
	if (iParam0 != -1 && iParam0 < 8)
	{
		return true;
	}
	return false;
}

bool func_212(int iParam0)
{
	if (((iParam0 == 4 || iParam0 == 5) || iParam0 == 6) || iParam0 == 7)
	{
		return true;
	}
	return false;
}

void func_213(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			func_414(0, 26, 476, func_412(26), func_413(iParam0));
			break;
		case 1:
			func_414(1, 26, 476, func_412(26), func_413(iParam0));
			break;
		case 2:
			func_414(2, 26, 476, func_412(26), func_413(iParam0));
			break;
		case 3:
			func_414(3, 26, 476, func_412(26), func_412(26));
			break;
		case 4:
			func_414(4, 105, 72, func_412(105), func_413(iParam0));
			break;
		case 5:
			func_414(5, 105, 72, func_412(105), func_413(iParam0));
			break;
		case 6:
			func_414(6, 105, 72, func_412(105), func_413(iParam0));
			break;
		case 7:
			func_414(7, 105, 72, func_412(105), func_412(105));
			break;
	}
}

bool func_214(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_312(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_311(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_276(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_308(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_309(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_310(iParam0);
	if (iVar5 < 1 || iVar5 > func_313(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_215(int iParam0, bool bParam1)
{
	return func_415(func_190(), iParam0, bParam1);
}

bool func_216(vector3 vParam0)
{
	return _0x769bb7626b8cdb06(vParam0, 0.5f, 0, 0, 16384);
}

int func_217(int iParam0, bool bParam1)
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

bool func_218()
{
	if (is_entity_at_coord(Local_73, Local_73.f_2, 2f, 2f, 5f, false, true, 0) && func_416(Local_73, Local_73.f_5, 60f))
	{
		return true;
	}
	return false;
}

void func_219(int iParam0)
{
	if (!func_417(iParam0))
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

bool func_220(int iParam0, bool bParam1)
{
	if (bParam1 && !func_95(iParam0))
	{
		return false;
	}
	iVar0 = func_99(iParam0);
	return _uiprompt_is_just_pressed((*Global_1945938)[iVar0]->f_3);
}

char* func_221()
{
	return "COACHROB_HANDOVER";
}

bool func_222(var uParam0, float fParam1)
{
	if (!func_71(uParam0))
	{
		return false;
	}
	if (func_72(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_223(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_224(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

bool func_225(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

void func_226(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_229(iParam0, 1);
	func_231(iParam0, 1);
	func_228(iParam0, 128);
}

void func_227(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_228(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

void func_229(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_225(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

float func_230(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

void func_231(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

int func_232()
{
	return Global_1310750->f_16037;
}

bool func_233(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

bool func_234(int iParam0, int iParam1)
{
	if (!func_233(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0] && iParam1) != 0;
}

bool func_235(int iParam0)
{
	if (!func_233(iParam0))
	{
		return false;
	}
	if (func_418(64) && func_419(iParam0))
	{
		return true;
	}
	return (*Global_1310750)[iParam0]->f_46;
}

bool func_236(int iParam0)
{
	if (!func_233(iParam0))
	{
		return false;
	}
	return (*Global_1310750)[iParam0]->f_47;
}

void func_237(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_233(&(Global_1310750->f_13321[iParam0])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0];
	force_cleanup_for_thread_with_this_id(Global_1310750->f_13321[iParam0]->f_5, 523);
	(*Global_1310750)[iVar0]->f_48 = 0;
	func_420(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_238(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_104(1) < iParam0)
	{
		iParam0 = func_104(1);
	}
	_money_decrement_cash_balance(iParam0);
	Var0 = { func_421(1644987397) };
	_0xbd861ae8a5181ed7(&Var0, iParam0);
}

void func_239(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_422(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

int func_240(int iParam0)
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

var func_241(int iParam0, int iParam1, int iParam2, int iParam3)
{
	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = iParam1;
	Var0.f_12[0] = iParam2;
	iVar23 = 13;
	return _0xa88e215ceb0435c0(iParam0, &Var0, iParam3, iVar23, 2, 0);
}

void func_242()
{
	sVar0 = func_423();
	sVar1 = func_424();
	vVar2 = { 1.23889f, 0.326256f, 0f };
	switch (iLocal_71)
	{
		case 0:
			if (!is_string_null_or_empty(sVar0))
			{
				func_425();
				Local_73.f_162 = _create_anim_scene(sVar0, 0, 0, false, true);
				iLocal_71 = 1;
			}
			break;
		case 1:
			if (_does_anim_scene_exist(Local_73.f_162))
			{
				load_anim_scene(Local_73.f_162);
				iLocal_71 = 2;
			}
			break;
		case 2:
			if (_is_anim_scene_loaded(Local_73.f_162, true, false) && func_426())
			{
				if (iLocal_61 != 1 && iLocal_62 != 0)
				{
					set_anim_scene_origin(Local_73.f_162, _get_object_offset_from_coords(Local_73.f_2, Local_73.f_5, vVar2), 0f, 0f, (Local_73.f_5 - 180f), 2);
				}
				_0xdf7b5144e25cd3fe(Local_73.f_162, sVar1);
				iLocal_71 = 3;
			}
			break;
		case 3:
			if (_0x23e33cb9f4a3f547(Local_73.f_162, sVar1))
			{
				if (iLocal_62 == 0)
				{
					if (func_199())
					{
						set_anim_scene_bool(Local_73.f_162, "b_PlayerArthur", false, false);
					}
					else
					{
						set_anim_scene_bool(Local_73.f_162, "b_PlayerArthur", true, false);
					}
				}
				_set_anim_scene_playback_list_bool(Local_73.f_162, sVar1, true);
				func_427();
				if (get_current_ped_weapon(Global_35, &iVar5, true, 0, false) && iVar5 != -1569615261)
				{
					_0x4820a6939d7cef28(Global_35, 0);
					_hide_ped_weapons(Global_35, 2, false);
					task_swap_weapon(Global_35, 1, 1, 0, 0);
				}
				if (iLocal_62 == 0)
				{
					if (func_199())
					{
						sVar6 = "JOHN";
					}
					else
					{
						sVar6 = "ARTHUR";
					}
				}
				else
				{
					sVar6 = "player";
				}
				task_enter_anim_scene(Global_35, Local_73.f_162, sVar6, sVar1, 1069379748, 1, 0, 20000, -1082130432);
				iLocal_71 = 4;
			}
			break;
		case 4:
			if (_is_anim_scene_started(Local_73.f_162, false))
			{
				iLocal_71 = 5;
			}
			break;
		case 5:
			if (iLocal_62 == 0)
			{
				if (func_199())
				{
					sVar6 = "JOHN";
				}
				else
				{
					sVar6 = "ARTHUR";
				}
			}
			else
			{
				sVar6 = "player";
			}
			if (_is_anim_scene_started(Local_73.f_162, false))
			{
				if (has_anim_event_fired(Global_35, -2049568183) || _0xb89fcff19dafff28(Local_73.f_162, sVar6))
				{
					if (func_8())
					{
						_delete_anim_scene(Local_73.f_162);
					}
				}
			}
			break;
	}
}

void func_243(char* sParam0, int iParam1)
{
	Var0.f_1 = sParam0;
	iVar2 = _0x4e88a65968a55c78(&Var0, iParam1);
	if (func_428(iVar2))
	{
		_0x2f901291ef177b02(iVar2, 0);
	}
}

var func_244(int iParam0, vector3 vParam1, int iParam4, int iParam5, var uParam6, var uParam7)
{
	return create_scenario_point(iParam0, vParam1, iParam4, iParam5, uParam6, uParam7);
}

void func_245()
{
	set_model_as_no_longer_needed(81104014);
	set_model_as_no_longer_needed(-73198488);
	set_model_as_no_longer_needed(-770982987);
	set_model_as_no_longer_needed(-1473388640);
}

void func_246(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

float func_247(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

int func_248(int iParam0, int iParam1)
{
	if (!func_120(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_121(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_344(iParam0, 1399091007))
	{
		func_429(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_249(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_253(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_250(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_251(int iParam0)
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

int func_252(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_430(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_432(&Var0, func_431(0));
	}
	if (!func_433(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_251(iVar14);
	return uVar15;
}

int func_253(bool bParam0)
{
	if (func_127() == -1)
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

bool func_254(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

int func_255(int iParam0)
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

void func_256(int iParam0, bool bParam1)
{
	if (!func_434(iParam0))
	{
		return;
	}
	if ((bParam1 && func_435(iParam0, 512)) || (!bParam1 && !func_435(iParam0, 512)))
	{
		return;
	}
	if (bParam1)
	{
		func_436(iParam0, 512);
	}
	else
	{
		func_437(iParam0, 512);
	}
	if (func_438(iParam0))
	{
		_0x9b4e793b1cb6550a();
	}
}

void func_257(int iParam0, int iParam1)
{
	if (func_127() != -1)
	{
		return;
	}
	if (!func_70(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (Global_24887[iParam0] || iParam1);
}

bool func_258(int iParam0)
{
	return func_439(iParam0, 67108864);
}

int func_259(int iParam0)
{
	if (!func_187(iParam0))
	{
		return -1;
	}
	return func_440(iParam0);
}

void func_260(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_261(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_262(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_263(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_264(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_116(&(iParam0->f_18));
}

void func_265(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (func_95(iParam1->f_6))
	{
		if (bParam7 || is_bit_set(*iParam1, 11))
		{
			return;
		}
		func_86(&(iParam1->f_6), 0, 1);
	}
	if (!func_95(iParam1->f_6) && !is_bit_set(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_171(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_97(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_95(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_270(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_441(iParam1->f_6, 17, 1, 1);
				}
				if (is_bit_set(*iParam1, 1))
				{
					if (is_bit_set(*iParam1, 3))
					{
						func_442(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_98(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (is_bit_set(*iParam1, 10))
				{
					func_441(iParam1->f_6, 16, 1, 1);
				}
				if (!is_bit_set(*iParam1, 0) || is_bit_set(*iParam1, 13))
				{
					func_108(iParam1->f_6, 0, 1);
				}
				else
				{
					func_108(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_266(int iParam0)
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

void func_267(int* iParam0, int iParam1)
{
	if (!func_443(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_263(iParam0, 14);
		}
	}
}

int func_268(int iParam0, int iParam1)
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

bool func_269(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

void func_270(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam3 && !func_95(iParam0))
	{
		return;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = func_99(iParam0);
	func_441(iParam0, 18, 0, 1);
	func_441(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = _uiprompt_get_group_id_for_target_entity(iParam1);
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam4, iParam2);
}

bool func_271(int iParam0, bool bParam1)
{
	if (bParam1 && !func_95(iParam0))
	{
		return false;
	}
	iVar0 = func_99(iParam0);
	return _uiprompt_is_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_272(int iParam0, bool bParam1)
{
	if (bParam1 && !func_95(iParam0))
	{
		return;
	}
	iVar0 = func_99(iParam0);
	_uiprompt_restart_modes((*Global_1945938)[iVar0]->f_3);
}

void func_273(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_443(iParam0, 13))
	{
		func_263(iParam0, 0);
	}
	else
	{
		func_444(iParam0, 0);
	}
	if (func_95(iParam0->f_6))
	{
		if (bParam2)
		{
			func_86(&(iParam0->f_6), 0, 1);
		}
	}
}

bool func_274(int iParam0)
{
	if (!func_445(iParam0))
	{
		return false;
	}
	return func_446(iParam0);
}

bool func_275(int iParam0)
{
	bVar0 = func_439(iParam0, 256);
	return bVar0;
}

int func_276(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

void func_277(var uParam0, bool bParam1, int iParam2)
{
	func_447(iParam2);
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
		uParam0->f_13 = func_448(0);
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
							func_151(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_449(1))
						{
							func_151(uParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_35) && (!func_449(1) || *uParam0 & 8192 != 0))
				{
					func_150(uParam0, 33554432);
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
			if (func_450(uParam0))
			{
				uParam0->f_15 = func_296();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_296() - uParam0->f_15) > 500)
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
	func_451(uParam0);
}

bool func_278(int iParam0, var uParam1)
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
			if (!func_452(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_453(iParam0, iVar2) <= func_454(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_279(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_455(iParam2, 1, 1, 1, 0))
	{
		func_151(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_456(uParam1, 1);
	func_457();
}

bool func_280(int iParam0, var uParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_458(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_459(uParam1);
			if (func_460(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = get_game_timer();
				}
				iVar2 = (get_game_timer() - uParam1->f_2);
				iVar3 = func_461(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_456(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_456(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_281(int iParam0, int iParam1, var uParam2)
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
	if (func_462(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_459(uParam2);
		if (func_460(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = get_game_timer();
			}
			if (uParam2->f_2 != 0)
			{
				if (get_game_timer() - uParam2->f_2) > func_461(uParam2)
				{
					func_456(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_282(int iParam0, var uParam1)
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
	if (func_452(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = get_game_timer();
		}
		else if (get_game_timer() - uParam1->f_3) > func_461(uParam1)
		{
			fVar3 = func_459(uParam1);
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

bool func_283(var uParam0, float fParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_296();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_284(var uParam0, int iParam1, var uParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_463(uParam2);
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
			if (func_292(uParam2, iParam1))
			{
				func_456(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_285(var uParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 < IntToFloat(func_464(uParam2)))
	{
		if ((is_weapon_valid(Global_1935630->f_46) && !_0x5809dbca0a37c82b(Global_1935630->f_46)) || get_current_ped_vehicle_weapon(Global_35, &uVar0))
		{
			if (func_292(uParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_456(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_286(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_465(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, uParam2->f_22))
				{
					func_456(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, uParam2->f_27))
				{
					func_456(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar4, 0, 0);
					if (func_466(iParam1, vVar0, vVar4))
					{
						func_456(uParam2, 1);
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
					func_456(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar7, 0, 0);
					if (func_466(iParam1, vVar0, vVar7))
					{
						func_456(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_287(int iParam0, var uParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_452(iParam0, uParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_467(&(Global_1935630->f_34[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_468(&(Global_1935630->f_34[iVar0])))
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
			if (func_469(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_470(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_471(uParam1, iParam0, fVar1, iVar0))
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

bool func_288(int iParam0, var uParam1)
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

bool func_289(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_296();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_290(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_472(iVar0, &iVar2))
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
	if (func_473(iVar0, iParam0))
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

int func_291(var uParam0, int iParam1)
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

bool func_292(var uParam0, int iParam1)
{
	if (func_474(uParam0))
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

bool func_293(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_475(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_294()
{
}

bool func_295(var uParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_35);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_476(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_296();
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
						if (func_7(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								uParam0->f_9 = func_296();
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

int func_296()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_297()
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
	if ((func_296() - Global_1935630->f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_298(var uParam0, int iParam1)
{
	if (!does_entity_exist(uParam0->f_14))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_454(uParam0);
	if (uParam0->f_12 > func_477(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_478(iParam1);
	iVar1 = func_479(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((_0x06087579e7aa85a9(iParam1, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam1, Global_35, true, 0) == 1)) || ((_0x06087579e7aa85a9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, uParam0->f_14, 17)) && _0x7f9b9791d4cb71f6(iParam1, uParam0->f_14, true, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_299(int iParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_480(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_300(int iParam0, var uParam1)
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
		if (func_481(iParam0, uParam1, 1))
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
					if (!func_482(uParam1, iParam0))
					{
						if (func_7(iVar4, Global_36, 1) < 7f)
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

bool func_301(int iParam0, var uParam1)
{
	if (!func_483(0))
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

bool func_302(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_296();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_303(int iParam0, var uParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

int func_304(int iParam0, var uParam1)
{
	if (!is_ped_human(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_296();
	}
	else if (func_296() - uParam1->f_4) > func_484(uParam1)
	{
		return func_485(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

bool func_305(var uParam0, int iParam1)
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

int func_306(int iParam0)
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

int func_307(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_308(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_486(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_309(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_310(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_311(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_312(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_313(int iParam0, int iParam1)
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

void func_314(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_487(iParam0, iParam6);
	func_488(iParam0, iParam5);
	func_489(iParam0, iParam4);
	func_490(iParam0, iParam3);
	func_491(iParam0, iParam2);
	func_492(iParam0, iParam1);
}

bool func_315(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 14);
}

int func_316(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -113733662;
		case 1:
			return 594732118;
		case 2:
			return 348276469;
		case 3:
			return 95401549;
		case 4:
			return 1235783774;
		case 5:
			return 1763233598;
		case 6:
			return 775149941;
		case 7:
			return 1954629188;
		case 8:
			return -840809348;
		case 9:
			return 381638197;
		case 10:
			return -1303933625;
		case 11:
			return 618820223;
		case 12:
			return -561714800;
		case 13:
			return -135395907;
		default:
			break;
	}
	return 0;
}

int func_317(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_493())
	{
		iVar2 = func_493();
	}
	iVar5 = func_494(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_306(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_306(iVar6) == 0)
			{
				return func_495(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_306(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_306(iVar6) == 0)
			{
				return func_495(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_495(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_318(int iParam0)
{
	return func_259(iParam0) == 0;
}

void func_319(int iParam0)
{
	if (&Global_1898329 <= 0)
	{
		return;
	}
	if (!func_187(iParam0))
	{
		return;
	}
	if (func_496(iParam0))
	{
		func_320(iParam0, 0, 2);
	}
	iVar0 = func_497(iParam0);
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

void func_320(int iParam0, bool bParam1, int iParam2)
{
	if (!func_187(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_140(iParam0) && !func_496(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_498(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_140(iParam0))
	{
		iParam2 = -1;
	}
	if (func_440(iParam0) == 3 || (func_440(iParam0) == 1 && _0x01f4d242765c6b24(func_498(iParam0))))
	{
		func_500(func_499(iParam0), func_498(iParam0), iParam2);
		if ((!func_187(Global_1572864->f_8) && !func_65(0, 1, 0)) && !func_501(&Global_1935630, 32768))
		{
			iVar0 = func_502(iParam0);
			if (iVar0 != -1)
			{
				func_503(0);
			}
			else if (func_499(iParam0) == 8)
			{
				iVar0 = func_504();
				if (iVar0 != -1)
				{
					func_503(0);
				}
			}
		}
	}
	func_505(iParam0, 0);
	if (func_506(0) == iParam0)
	{
		func_507(1);
		func_508(0);
		func_509(1);
	}
	func_510(iParam0, 1);
	func_511(iParam0);
}

bool func_321(int iParam0, bool bParam1)
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

void func_322(int iParam0)
{
	if (!func_187(iParam0))
	{
		return;
	}
	func_505(iParam0, 0);
}

int func_323(int iParam0)
{
	if (&Global_1898329 == 15)
	{
		return -1;
	}
	if (!func_318(iParam0))
	{
		return -1;
	}
	if (func_127() != -1)
	{
		iVar2 = func_497(iParam0);
		if (iVar2 >= 0)
		{
			func_512(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar1 = &Global_1898329;
			(*Global_1898330)[iVar1] = iParam0;
			*(*Global_1898346)[iVar1] = { Var3 };
			func_513(iVar1, 1);
			func_512(iParam0, 1);
			Global_1898329 = &Global_1898329 + 1;
			if (&Global_1898329 > 15)
			{
				Global_1898329 = 15;
			}
			return iVar1;
		}
	}
	else
	{
		iVar2 = func_497(iParam0);
		if (iVar2 >= 0)
		{
			func_512(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < &Global_1898330)
			{
				if (!func_187(Global_1898330[iVar0]))
				{
					(*Global_1898330)[iVar0] = iParam0;
					*(*Global_1898346)[iVar0] = { Var3 };
					func_513(iVar0, 1);
					func_512(iParam0, 1);
					Global_1898329 = &Global_1898329 + 1;
					if (&Global_1898329 > 15)
					{
						Global_1898329 = 15;
					}
					return iVar0;
				}
				iVar0++;
			}
		}
	}
	return -1;
}

int func_324(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_120(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_248(iParam0, 1);
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
			func_404(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_19(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_401(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_123(iParam0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_123(iParam0, 0, 0) - iParam1) < 0)
		{
			func_324(iParam0, func_123(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_121(iParam0) == -427144552)
	{
		if (!func_514(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_515(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_351(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_404(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_516(iParam0, iParam1);
	return 1;
}

bool func_325(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_127() == -1)
	{
		if (func_517(iParam0) && func_518(iParam0))
		{
			func_519(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_326(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_520(iParam0, iParam1);
	Var0 = { func_521(iParam0, 0, 1) };
	iVar5 = func_522(iParam0, &Var0, 0, 0);
	iVar6 = func_523(iParam0, 0);
	if ((iVar5 > 1 && !func_524()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_344(iParam0, -2051813666))
		{
			func_334(583, 1);
		}
		else
		{
			func_334(582, 0);
		}
	}
	if (func_525(iParam0, &Var0, *iParam1, 0, 0))
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

void func_327(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_526(iParam0, -949239683))
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

bool func_328(int iParam0)
{
	if (func_127() != -1)
	{
		return false;
	}
	return func_329(iParam0) != 0;
}

int func_329(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_527())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_528(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_330(int iParam0)
{
	return _0x6052b4de6657684f(iParam0);
}

int func_331(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_527())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_330(iVar0))
		{
			if (func_19(func_528(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_332(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
	func_529(48);
	func_530(0, -1);
}

bool func_333(int iParam0)
{
	if (func_127() != -1)
	{
		return false;
	}
	return func_321((*Global_1347702)[iParam0]->f_15, 1);
}

void func_334(int iParam0, bool bParam1)
{
	func_531(iParam0, &iVar0, &iVar1);
	if (!func_532(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_533(iVar0, iVar1);
}

int func_335(int iParam0)
{
	return _0x62cab7db62ead434(-2076669067, iParam0);
}

int func_336(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

bool func_337()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_338(int iParam0)
{
	if (func_127() != -1)
	{
		return false;
	}
	return func_321((*Global_1835011)[iParam0]->f_1, 1);
}

bool func_339(int iParam0)
{
	if (func_127() != -1)
	{
		return false;
	}
	if (!func_139(iParam0))
	{
		return false;
	}
	return func_140((*Global_1347702)[iParam0]->f_15);
}

int func_340()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_19(func_534(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_341(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_337() && (func_339(38) || func_333(38)))
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
			if (func_337() && (func_339(39) || func_333(39)))
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
			iVar9 = func_535(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		case 41:
			if (func_337() && (func_339(41) || func_333(41)))
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
			if (func_337() && (func_339(49) || func_333(49)))
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
			iVar9 = func_535(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_536(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar12 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar12 = get_hash_key("toast_log_blips");
	}
	if (func_537(iParam0, iVar13, iVar14))
	{
	}
	if (func_538(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_539(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_540(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_541(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_542(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_342(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_343(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_337() && (func_339(38) || func_333(38)))
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
			if (func_337() && (func_339(39) || func_333(39)))
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
			if (func_337() && (func_339(49) || func_333(49)))
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
		if (func_337() && (func_339(38) || func_333(38)))
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
			func_543(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_543(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_545(_create_var_string(2, sVar0), _create_var_string(2, func_544(func_336(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_543(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_543(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_337() && (func_339(39) || func_333(39)))
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
			func_543(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_543(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_337() && (func_339(49) || func_333(49)))
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
			func_543(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_543(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_543(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_543(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

bool func_344(int iParam0, int iParam1)
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

bool func_345(int iParam0, int iParam1)
{
	if (!func_120(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

void func_346(int iParam0)
{
	if (!func_445(iParam0))
	{
		return;
	}
	func_546(iParam0);
	func_547(iParam0);
}

int func_347(int iParam0)
{
	if (!func_120(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_348(int iParam0, bool bParam1)
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
	if (func_120(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_548(iVar0) || func_405(iVar0))
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

int func_349(int iParam0, bool bParam1)
{
	if (!func_120(iParam0, 0))
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

void func_350(int iParam0)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_111(iParam0))
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

bool func_351(bool bParam0)
{
	if (func_127() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_253(bParam0));
}

bool func_352(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_521(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_549((386 + iVar28), 1);
			if (func_550(iParam0, &Var0, iVar5, 0))
			{
				if (func_551(iParam0, &Var6, iVar5))
				{
					Var29 = { func_552(iParam0, Var0, iVar5, 0) };
					func_553(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_351(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_353(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_554(iParam0, iParam1);
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

bool func_353(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_355(iParam0))
	{
		return false;
	}
	if (!func_351(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_354(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_349(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_127() == -1)
		{
			func_350(iVar0);
			if (iParam1 == 1248274121)
			{
				func_555(iVar0);
			}
		}
		if (!func_525(iParam0, &uVar1, 1, 0, 0))
		{
			func_519(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_556(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_352(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_352(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_352(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_melee(iVar0))
			{
				if (iVar0 == 494733111 && !func_199())
				{
					return false;
				}
				if (_0x2c83212a7aa51d3d(iParam0))
				{
				}
				else if (!func_407(iVar0))
				{
					func_352(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_352(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_110(Global_35, 2, 0, 1);
				if ((((func_111(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_274(24)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_111(iVar7) && func_274(24))
				{
					if (!func_352(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_352(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_352(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_334(480, 1);
	}
	return true;
}

bool func_355(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_356(int iParam0, int iParam1, int iParam2)
{
	if (!func_355(iParam0))
	{
		return false;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_35, iParam0);
	if (func_111(iVar4))
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
	if (func_19(611073244, 1, 0) && iParam2 == -897553835)
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
		func_392(func_557(iParam0), func_391(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_127() == -1)
		{
			if (func_321((*Global_1835011)[14]->f_1, 1))
			{
				func_334(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_351(0))
	{
		if (func_353(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_397(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_357(int iParam0)
{
	if ((iParam0 == -615217896 && !func_558()) || iParam0 != -615217896)
	{
		if (func_559(Global_35, iParam0, &uVar0))
		{
			func_376(player_ped_id(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_382();
			break;
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_382();
			break;
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_382();
			break;
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_380();
			break;
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_378();
			break;
	}
}

void func_358(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_378();
			break;
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_379();
			break;
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_380();
			break;
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_381();
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
			func_382();
			break;
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_560();
			break;
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_561();
			break;
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_359(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

void func_360(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

struct<2> func_361(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_362(int iParam0)
{
	bVar0 = func_344(iParam0, -2017733358);
	if (func_562() < 3)
	{
		if (bVar0)
		{
			if (func_564(func_563(iParam0), iParam0))
			{
				func_392(79, func_391(func_563(iParam0)), 1);
			}
			else
			{
				func_392(78, func_391(func_563(iParam0)), 1);
			}
		}
		else
		{
			func_392(80, func_391(func_565(iParam0)), 1);
		}
	}
}

bool func_363()
{
	if (((((func_566(839908568, 400) || func_566(-1134030454, 400)) || func_566(623353496, 400)) || func_566(-344413337, 400)) || func_566(-1664948962, 400)) || func_566(1795228059, 400))
	{
		return true;
	}
	return false;
}

int func_364(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	iVar0 = func_567(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_568(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_569(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_365(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_341(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_343(51, 0, 0, 0, 0, -1, 0);
			func_570(8192);
			break;
		case 581047644:
			func_341(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_343(51, 0, 0, 0, 0, -1, 0);
			func_570(524288);
			break;
		case -644199619:
			func_341(39, 0, 0, 0, 0, 0, 1, 0);
			func_343(39, 0, 0, 0, 0, -1, 0);
			func_571(16);
			break;
		case 684296857:
			func_341(41, 0, 0, 0, 0, 0, 1, 0);
			func_343(41, 0, 0, 0, 0, -1, 0);
			func_572(8);
			break;
		case 466137807:
			func_341(49, 0, 0, 0, 0, 0, 1, 0);
			func_343(49, 0, 0, 0, 0, -1, 0);
			func_573(16);
			break;
		case -1087522507:
			func_341(43, 0, 0, -1791518714, func_574(1), 0, -1, 0);
			func_575(1);
			break;
		case -405829000:
			func_341(43, 0, 0, -2087881550, func_574(2), 0, -1, 0);
			func_575(2);
			break;
		case 378660860:
			func_341(43, 0, 0, 1908068621, func_574(4), 0, -1, 0);
			func_575(4);
			break;
		case 1566111097:
			func_341(43, 0, 0, 1611247019, func_574(8), 0, -1, 0);
			func_575(8);
			break;
		case 1276007140:
			func_341(43, 0, 0, 1319635688, func_574(16), 0, -1, 0);
			func_575(16);
			break;
	}
}

void func_366(int iParam0)
{
	if (func_576() == 1)
	{
		if (func_333(39))
		{
			func_334(342, 0);
		}
		else
		{
			func_334(343, 0);
			func_571(1);
		}
	}
	if (func_576() >= 30)
	{
		func_334(344, 0);
	}
	func_341(39, 0, 0, 0, 0, 0, -1, 0);
	func_343(39, 0, 0, func_576(), 30, 1, 0);
}

void func_367(int iParam0)
{
	if (func_577() == 1)
	{
		if (func_333(49))
		{
			func_334(409, 0);
		}
		else
		{
			func_334(410, 0);
			func_573(1);
		}
	}
	if (func_577() >= 10)
	{
		func_334(411, 0);
	}
	func_341(49, 0, 0, 0, 0, 0, -1, 0);
	func_343(49, 0, 0, func_577(), 10, 1, 0);
}

void func_368(int iParam0)
{
	switch (iParam0)
	{
		case 1369162587:
			_0x3ea62e56f386c997(-949689219, 1);
			func_334(437, 0);
			func_334(440, 0);
			func_578(-949689219, 444160793, &sVar0, 1, 0, 0);
			func_341(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_343(51, 0, 0, sVar0, func_535(-949689219, 20), 1, 0);
			func_570(1);
			func_579(-748969569, 0, 0);
			break;
		case 1610047510:
			_0x3ea62e56f386c997(-1248968496, 1);
			func_578(-1248968496, -1969404854, &sVar0, 1, 0, 0);
			func_341(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_343(51, 0, 0, sVar0, func_535(-1248968496, 20), 1, 0);
			func_570(8);
			break;
		case 1317879106:
			_0x3ea62e56f386c997(1706369307, 1);
			func_578(1706369307, -832850511, &sVar0, 1, 0, 0);
			func_341(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_343(51, 0, 0, sVar0, func_535(1706369307, 20), 1, 0);
			func_570(64);
			break;
		case 1062444751:
			_0x3ea62e56f386c997(1520110311, 1);
			func_578(1520110311, -100913452, &sVar0, 1, 0, 0);
			func_341(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_343(51, 0, 0, sVar0, func_535(1520110311, 20), 1, 0);
			func_570(512);
			break;
		case 754186760:
			_0x3ea62e56f386c997(-1992824800, 1);
			func_334(438, 0);
			func_578(-1992824800, 905173572, &sVar0, 1, 0, 0);
			func_341(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_343(51, 0, 0, sVar0, func_535(-1992824800, 20), 1, 0);
			func_570(32768);
			break;
		default:
			func_334(439, 0);
			break;
	}
}

void func_369()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

void func_370(int iParam0, int iParam1)
{
	iVar1 = 0;
	if (func_127() == -1)
	{
		if (!func_333(43))
		{
			if (iParam0 == 281887510)
			{
				func_334(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_334(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_334(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_334(400, 0);
			}
		}
		else if (func_344(iParam0, 412399755))
		{
			func_580(-1791518714);
			if (func_581() == 0)
			{
				func_530(0, 10);
				iVar1 = func_582(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_583(iParam0) < func_584(iParam0))
					{
						func_341(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_343(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_333(44))
		{
			if (iParam0 == -222563712)
			{
				func_334(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_334(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_334(401, 0);
			}
		}
		else if (func_344(iParam0, 709057512))
		{
			func_580(-2087881550);
			if (func_581() == 1)
			{
				func_530(0, 10);
				iVar1 = func_582(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_583(iParam0) < func_584(iParam0))
					{
						func_341(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_343(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_333(45))
		{
			if (iParam0 == 2116770557)
			{
				func_334(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_334(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_334(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_334(398, 0);
			}
		}
		else if (func_344(iParam0, -1478961327))
		{
			func_580(1908068621);
			if (func_581() == 2)
			{
				func_530(0, 10);
				iVar1 = func_582(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_585(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
					{
						func_586(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
						func_529(48);
					}
					if (func_583(iParam0) < func_584(iParam0))
					{
						func_341(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_343(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_583(iParam0) < func_584(iParam0))
					{
						func_341(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_343(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_333(46))
		{
			if (iParam0 == 2085530337)
			{
				func_334(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_334(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_334(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_334(406, 0);
			}
		}
		else if (func_344(iParam0, -1238404098))
		{
			func_580(1611247019);
			if (func_581() == 3)
			{
				func_530(0, 10);
				iVar1 = func_582(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_583(iParam0) < func_584(iParam0))
					{
						func_341(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_343(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_333(47))
		{
			if (iParam0 == -1521783510)
			{
				func_334(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_334(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_334(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_334(403, 0);
			}
		}
		else if (func_344(iParam0, 1160548794))
		{
			func_580(1319635688);
			if (func_581() == 4)
			{
				func_530(0, 10);
				iVar1 = func_582(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_583(iParam0) < func_584(iParam0))
					{
						func_341(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_343(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_371(int iParam0)
{
	if (iParam0 == 2116770557)
	{
		if (!func_585(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
		{
			func_586(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
			func_529(48);
		}
	}
}

void func_372(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = _0x126cbebba46693cf(iVar1, 678508515, -1160144609);
		if (func_19(func_587(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_588(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_589(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_373(int iParam0, int iParam1, int iParam2)
{
	if (func_127() == -1)
	{
		if (does_entity_exist(iParam2))
		{
			iVar0 = _0x6f02b5e50511721e(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_364(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_364(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493:
			func_364(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627:
			func_364(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377:
			func_364(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086:
			func_364(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686:
			func_364(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991:
			func_364(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101:
			func_364(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918:
			func_364(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765:
			func_364(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903:
			func_364(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684:
			func_364(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340:
			if (!func_590())
			{
				func_364(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740:
			func_364(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264:
			func_364(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970:
			func_364(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1027115192:
			func_364(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1064332555:
			func_364(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1954478446:
			func_364(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -518592739:
			func_364(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -2010073778:
			func_364(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -700133011:
			func_364(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1415414735:
			func_364(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 2045548742:
			func_364(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 830381058:
			func_364(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_374(int iParam0)
{
	if (func_333(41))
	{
		func_334(363, 0);
	}
	else
	{
		func_334(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_591(-1865241121);
			func_592(-642026005);
			func_593(-642026005);
			func_530(0, 10);
			break;
		case -2108314374:
			func_591(2117142684);
			func_592(-940584364);
			func_593(-940584364);
			func_530(0, 10);
			break;
		case -1193798153:
			func_591(-1409326024);
			func_592(1972645282);
			func_593(1972645282);
			func_530(0, 10);
			break;
		case -787702678:
			func_591(-641744968);
			func_592(1667205433);
			func_593(1667205433);
			func_530(0, 10);
			break;
		case -804542901:
			func_591(-946988203);
			func_592(1362715885);
			func_593(1362715885);
			func_530(0, 10);
			break;
		case -1696275132:
			func_591(-646136018);
			func_592(1053540370);
			func_593(1053540370);
			func_530(0, 10);
			break;
		case -161595323:
			func_591(-955835837);
			func_592(-1100103852);
			func_593(-1100103852);
			func_530(0, 10);
			break;
		case -1114363619:
			func_591(-179276075);
			func_592(-1409869209);
			func_593(-1409869209);
			func_530(0, 10);
			break;
		case -368407134:
			func_591(-492711560);
			func_592(-1760235357);
			func_593(-1760235357);
			func_530(0, 10);
			break;
		case 1997759228:
			func_591(1764383959);
			func_592(-138366827);
			func_593(-138366827);
			func_530(0, 10);
			break;
		case 1265573293:
			func_591(317501533);
			func_592(-1261163843);
			func_593(-1261163843);
			func_530(0, 10);
			break;
		case -1030441283:
			func_591(817753087);
			func_592(-963523016);
			func_593(-963523016);
			func_530(0, 10);
			break;
		case -1490884871:
			func_591(576606016);
			func_592(560825326);
			func_593(560825326);
			func_530(0, 10);
			break;
		case -395458616:
			func_591(814934957);
			func_592(858269539);
			func_593(858269539);
			break;
	}
}

void func_375(int iParam0, int iParam1)
{
	func_429(iParam0, iParam1, &uVar0);
}

int func_376(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_521(iParam1, 1, 0) };
		iParam3 = func_594(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_596(iParam1, iParam2, func_595(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_597(1, (func_127() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_595(iParam3, 1)])
			{
				func_598(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_599(32768) && iParam1 != &Global_1946804->f_57[func_595(iParam3, 1)])
			{
				func_600();
				func_598(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_598(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_601(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_598(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_602(0);
			func_603(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_598(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_377(int iParam0, bool bParam1)
{
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_110(get_player_ped(get_player_index()), 2, 1, 0);
	iVar19 = func_110(get_player_ped(get_player_index()), 3, 1, 0);
	if (func_249("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_250(&Var3, iVar2, iVar0, iVar1))
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
						func_251(iVar0);
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

void func_378()
{
	_0x11a7ff918ef6bc66(player_id(), (1f - Global_40.f_11095.f_60));
}

void func_379()
{
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	_0x497a6539bb0e8787(player_id(), (1f - fVar0), (1f - fVar1));
}

void func_380()
{
	_0xe0d6c2a146a5c993(player_id(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_381()
{
	_0xb427911ea6dffef3(player_id(), (1f - Global_40.f_11095.f_63));
}

void func_382()
{
	func_604();
	func_605();
	func_606();
}

void func_383(int iParam0, int iParam1, bool bParam2)
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

void func_384(int iParam0, bool bParam1)
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
	func_543(_create_var_string(2, sVar1), _create_var_string(2, sVar2), get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_TREASURE_HUNTER"), 1433015236, _create_var_string(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_385(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_386(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_387(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_388(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_389(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_390(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_391(int iParam0)
{
	if (!func_120(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_392(int iParam0, int iParam1, bool bParam2)
{
	func_531(iParam0, &iVar0, &iVar1);
	if (!func_532(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_607(iParam0, 1024))
	{
		return;
	}
	func_533(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 2;
}

void func_393(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_531(iParam0, &iVar0, &iVar1);
	if (!func_532(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_607(iParam0, 1024))
	{
		return;
	}
	func_533(iVar0, iVar1);
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

int func_394()
{
	iVar0 = _0x5461c821d00fe15a(-2076669067, 0);
	if (iVar0 == func_527())
	{
		return func_395();
	}
	iVar4 = (func_527() - iVar0);
	iVar5 = get_random_int_in_range(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_527())
	{
		iVar1 = _0x126cbebba46693cf(iVar2, -2076669067, 0);
		if (!func_608(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_528(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_395()
{
	iVar0 = get_random_int_in_range(0, func_527());
	return func_528(_0x126cbebba46693cf(iVar0, -2076669067, 0));
}

void func_396(int iParam0)
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

int func_397(int iParam0, int iParam1, int iParam2)
{
	if (!func_120(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_521(iParam0, 0, 1) };
	Var5 = { func_552(iParam0, Var0, Var0.f_4, 0) };
	return func_609(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_398(int iParam0)
{
	if (func_127() != -1)
	{
		return;
	}
	switch (func_347(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_610(81053684, 0) <= 0)
			{
				func_598(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_598(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_611(iParam0);
			if (func_612(iVar0))
			{
				func_613(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_598(30, iParam0, 0, 0, 0);
			}
			if (func_614() == -2125499975 || func_614() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_598(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_614() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_598(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_615(-525676072, 0))
			{
				if (func_616(-525676072, &iVar1))
				{
					func_598(33, iVar1, 0, 0, 0);
				}
			}
			func_598(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_617(99217379))
		{
			func_376(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_346(24);
		if (func_377(&iVar2, 0))
		{
			func_352(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_399(int iParam0)
{
	if (func_344(iParam0, 943695443))
	{
		func_618(0, iParam0);
	}
	else if (func_344(iParam0, -2096528786))
	{
		func_618(1, iParam0);
	}
	else if (func_344(iParam0, -1094167013))
	{
		func_618(2, iParam0);
	}
	else if (func_344(iParam0, 1936654645))
	{
		func_618(3, iParam0);
	}
	else if (func_344(iParam0, 1306489306))
	{
		func_618(4, iParam0);
	}
	else if (func_344(iParam0, 435762317))
	{
		func_618(5, iParam0);
	}
	else if (func_344(iParam0, 1259363210))
	{
		func_618(6, iParam0);
	}
	else if (func_344(iParam0, 881398259))
	{
		func_618(7, iParam0);
	}
	else if (func_344(iParam0, -541549214))
	{
		func_618(8, iParam0);
	}
	else if (func_344(iParam0, 130796156))
	{
		func_618(-1, iParam0);
	}
}

int func_400(int iParam0, int iParam1)
{
	Var4.f_1 = 10;
	func_619(&Var4, 1356624740);
	return func_620(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_401(int iParam0)
{
	if (!func_120(iParam0, 0))
	{
		return Var0;
	}
	if (func_344(iParam0, -305066475))
	{
		if (func_127() == -1)
		{
			if (func_344(iParam0, -537818634))
			{
				return func_421(189951448);
			}
			else
			{
				return func_421(1176172851);
			}
		}
	}
	else if (func_344(iParam0, -537818634))
	{
		return func_421(-963660207);
	}
	if (func_344(iParam0, 2084895747))
	{
		return func_421(1694039471);
	}
	return Var2;
}

void func_402(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_127() == -1)
			{
				if (func_321((*Global_1835011)[4]->f_1, 1))
				{
					func_334(109, 1);
				}
			}
			break;
	}
}

void func_403(int iParam0, char* sParam1)
{
	sVar0 = func_622(func_621(0));
	func_422(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_623(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_404(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_120(iParam0, 0))
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
	if (!func_624())
	{
		func_625(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_626(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_626(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_345(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_121(iParam0);
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
	else if (!func_627(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	sVar15 = func_628(_create_var_string(10, &cVar2, _create_var_string(0, func_391(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_344(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_391(iParam0));
	}
	func_422(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

bool func_405(int iParam0)
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

void func_406(int iParam0, int iParam1, float fParam2)
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

bool func_407(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

bool func_408(var uParam0, int iParam1, char* sParam2)
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

bool func_409(int iParam0, bool bParam1)
{
	if (!func_70(iParam0))
	{
		return false;
	}
	if ((func_129(iParam0, 1) && !func_128(iParam0)) && func_130(iParam0))
	{
		return false;
	}
	if (!func_129(iParam0, 2))
	{
		return false;
	}
	if (!bParam1)
	{
		if (!func_64(iParam0, 0))
		{
			return false;
		}
	}
	return true;
}

void func_410(int iParam0)
{
	if (!func_70(iParam0))
	{
		return;
	}
	(*Global_1895087)[iParam0]->f_2 = get_id_of_this_thread();
}

bool func_411(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

Vector3 func_412(int iParam0)
{
	switch (iParam0)
	{
		case 26:
			vVar0 = { -1763.9f, -385.1f, 156.74f };
			break;
		case 105:
			vVar0 = { 1226.5f, -1294.9f, 75.9f };
			break;
	}
	if (func_84(vVar0))
	{
	}
	return vVar0;
}

Vector3 func_413(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			vVar0 = { -1410.191f, -963.1737f, 60.5407f };
			break;
		case 1:
			vVar0 = { -1535.618f, 160.3011f, 100.1231f };
			break;
		case 2:
			vVar0 = { -2731.802f, -255.3586f, 148.6638f };
			break;
		case 4:
			vVar0 = { 1103.741f, -390.8806f, 93.3573f };
			break;
		case 5:
			vVar0 = { 1443.614f, -1845.664f, 53.1259f };
			break;
		case 6:
			vVar0 = { 1502.723f, -714.6039f, 47.6706f };
			break;
		case 8:
			vVar0 = { 1701.657f, -746.2404f, 40.7819f };
			break;
		case 9:
			vVar0 = { 1111.63f, -615.53f, 87.37f };
			break;
		case 10:
			vVar0 = { 685.9935f, -170.3752f, 135.5994f };
			break;
		case 11:
			vVar0 = { 1518.102f, -2117.535f, 42.7516f };
			break;
		case 12:
			vVar0 = { 1381.61f, -807.13f, 64.12f };
			break;
		case 13:
			vVar0 = { 2538.571f, -263.3733f, 41.1397f };
			break;
	}
	if (func_84(vVar0))
	{
	}
	return vVar0;
}

void func_414(int iParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam6)
{
	if (!func_315(iParam0))
	{
		return;
	}
	if (!func_629(iParam1))
	{
		return;
	}
	if (func_84(vParam3))
	{
		return;
	}
	if (func_84(vParam6))
	{
		return;
	}
	Global_1392388->f_10[iParam0]->f_1 = iParam1;
	Global_1392388->f_10[iParam0] = iParam2;
	Global_1392388->f_10[iParam0]->f_2 = { vParam3 };
	Global_1392388->f_10[iParam0]->f_5 = { vParam6 };
	if (func_211(iParam0))
	{
		Global_1392388->f_10[iParam0]->f_8 = func_317(3, iParam0, 2, func_316(iParam0));
	}
}

bool func_415(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_214(iParam1) || !func_214(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

bool func_416(int iParam0, float fParam1, float fParam2)
{
	fVar0 = (fParam1 + (fParam2 / 2f));
	if (fVar0 > 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	fVar1 = (fParam1 - (fParam2 / 2f));
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	if (!is_ped_injured(iParam0))
	{
		if (fVar0 > fVar1)
		{
			if (get_entity_heading(iParam0) < fVar0 && get_entity_heading(iParam0) > fVar1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else if (get_entity_heading(iParam0) < fVar0 || get_entity_heading(iParam0) > fVar1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

bool func_417(int iParam0)
{
	return func_225(iParam0, 2);
}

bool func_418(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_419(int iParam0)
{
	return func_234(iParam0, Global_1310750->f_16072 | 64);
}

void func_420(int iParam0)
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

struct<2> func_421(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

var func_422(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_630(sParam0, sParam1, iParam2);
	return uVar20;
}

char* func_423()
{
	if (iLocal_62 == 0)
	{
		return "script@proc@robberies@coach@strawberry@hector";
	}
	if (iLocal_62 == 1 || iLocal_62 == 2)
	{
		switch (iLocal_23)
		{
			case -1656207781:
				return "scenario@proc@robberies@coach@strawberry@scenario_a";
			case 1258889694:
				return "scenario@proc@robberies@coach@strawberry@scenario_b";
			case 2021096634:
				return "scenario@proc@robberies@coach@strawberry@scenario_c";
			default:
				break;
		}
	}
	switch (iLocal_23)
	{
		case -1656207781:
			return "scenario@proc@robberies@coach@rhodes@scenario_a";
		case 1258889694:
			return "scenario@proc@robberies@coach@rhodes@scenario_b";
		case 2021096634:
			return "scenario@proc@robberies@coach@rhodes@scenario_c";
		default:
			break;
	}
	if (iLocal_62 == 1 || iLocal_62 == 2)
	{
		return "scenario@proc@robberies@coach@strawberry@scenario_a";
	}
	return "scenario@proc@robberies@coach@rhodes@scenario_a";
}

char* func_424()
{
	if (iLocal_62 == 13)
	{
		return "PBL_ROB_COACH";
	}
	if (iLocal_62 == 0)
	{
		return "pbl_action";
	}
	switch (iLocal_63)
	{
		case 3:
			return "PBL_STEAL_COACH";
		case 1:
			return "PBL_ROB_VIP";
		case 2:
			return "PBL_ROB_CONVOY";
		case 0:
			return "PBL_ROB_COACH";
		default:
			break;
	}
	return "";
}

void func_425()
{
	request_model(81104014, false);
	request_model(-73198488, false);
	request_model(-770982987, false);
	request_model(-1473388640, false);
}

bool func_426()
{
	if (!has_model_loaded(81104014))
	{
		return false;
	}
	if (!has_model_loaded(-73198488))
	{
		return false;
	}
	if (!has_model_loaded(-770982987))
	{
		return false;
	}
	if (!has_model_loaded(-1473388640))
	{
		return false;
	}
	return true;
}

void func_427()
{
	if (iLocal_62 == 0)
	{
		if (func_6(Local_73, 0))
		{
			set_anim_scene_entity(Local_73.f_162, "Hector", Local_73, 0);
		}
		if (func_6(Global_35, 0))
		{
			if (func_199())
			{
				set_anim_scene_entity(Local_73.f_162, "john", Global_35, 0);
			}
			else
			{
				set_anim_scene_entity(Local_73.f_162, "arthur", Global_35, 0);
			}
		}
		if (!does_entity_exist(Local_73.f_159))
		{
			Local_73.f_159 = create_object_no_offset(81104014, get_entity_coords(Local_73, true, false), true, true, false, true);
		}
		set_anim_scene_entity(Local_73.f_162, "note", Local_73.f_159, 0);
		if (!does_entity_exist(Local_73.f_160))
		{
			Local_73.f_160 = create_object_no_offset(-73198488, get_entity_coords(Local_73, true, false), true, true, false, true);
		}
		set_anim_scene_entity(Local_73.f_162, "MONEY", Local_73.f_160, 1);
		return;
	}
	if (func_6(Local_73, 0))
	{
		set_anim_scene_entity(Local_73.f_162, "Alden", Local_73, 0);
	}
	if (func_6(Global_35, 0))
	{
		set_anim_scene_entity(Local_73.f_162, "player", Global_35, 0);
	}
	if (!does_entity_exist(Local_73.f_159))
	{
		Local_73.f_159 = create_object_no_offset(81104014, get_entity_coords(Local_73, true, false), true, true, false, true);
	}
	set_anim_scene_entity(Local_73.f_162, "routes", Local_73.f_159, 1);
	if (!does_entity_exist(Local_73.f_160))
	{
		Local_73.f_160 = create_object_no_offset(-770982987, get_entity_coords(Local_73, true, false), true, true, false, true);
	}
	set_anim_scene_entity(Local_73.f_162, "money", Local_73.f_160, 1);
	if (!does_entity_exist(Local_73.f_161))
	{
		Local_73.f_161 = create_object_no_offset(-1473388640, get_entity_coords(Local_73, true, false), true, true, false, true);
	}
	set_anim_scene_entity(Local_73.f_162, "PEN", Local_73.f_161, 1);
}

bool func_428(int iParam0)
{
	return iParam0 != 0;
}

void func_429(int iParam0, int iParam1, var uParam2)
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

struct<14> func_430(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> func_431(bool bParam0)
{
	iVar0 = func_253(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_552(923904168, func_631(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_552(923904168, func_631(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_552(923904168, func_631(bParam0), -740156546, 0);
}

void func_432(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_433(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_253(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_434(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 35);
}

bool func_435(int iParam0, int iParam1)
{
	if (!func_434(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_3[iParam0]->f_7 && iParam1) != 0;
}

void func_436(int iParam0, int iParam1)
{
	if (!func_434(iParam0))
	{
		return;
	}
	Global_1914319->f_3[iParam0]->f_7 = (Global_1914319->f_3[iParam0]->f_7 || iParam1);
}

void func_437(int iParam0, int iParam1)
{
	if (!func_434(iParam0))
	{
		return;
	}
	Global_1914319->f_3[iParam0]->f_7 = (Global_1914319->f_3[iParam0]->f_7 - (Global_1914319->f_3[iParam0]->f_7 && iParam1));
}

bool func_438(int iParam0)
{
	if (func_632())
	{
		if (Global_1914319->f_16855 == iParam0)
		{
			return true;
		}
	}
	return false;
}

bool func_439(int iParam0, int iParam1)
{
	if (!func_254(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_15614[iParam0] && iParam1) != 0;
}

int func_440(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_633(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

void func_441(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_95(iParam0))
	{
		return;
	}
	iVar0 = func_99(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_442(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (bParam4 && !func_95(iParam0))
	{
		return;
	}
	iVar0 = func_99(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(10, sParam1, sParam2, sParam3));
}

bool func_443(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

void func_444(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

bool func_445(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_446(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_447(int iParam0)
{
	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_634();
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
			func_635(&(Global_1935630->f_34), &(Global_1935630->f_39));
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

var func_448(int iParam0)
{
	return &(Global_1109400->f_276[iParam0]);
}

bool func_449(bool bParam0)
{
	if (func_636(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_450(var uParam0)
{
	iVar0 = Global_1935630->f_40;
	if (func_127() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_637(uParam0);
		}
	}
	else if (!does_entity_exist(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_637(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_479(iVar0) == -1)
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

void func_451(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_638(uParam0);
	}
}

bool func_452(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_479(iParam2);
	}
	else
	{
		iVar1 = func_478(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_479(iParam0);
	}
	else
	{
		iVar0 = func_478(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_154(*uParam1, 8388608))
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

float func_453(int iParam0, int iParam1)
{
	return func_475(iParam0, iParam1, 1, 1);
}

float func_454(var uParam0)
{
	return uParam0->f_26;
}

bool func_455(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_456(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_151(uParam0, 134217728);
	}
	else
	{
		func_150(uParam0, 134217728);
	}
}

void func_457()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

bool func_458(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_475(iVar0, iParam0, 1, 1) <= 4f)
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
		if (_is_weapon_sniper(func_639(iVar0, 0)))
		{
			if (func_640(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_459(var uParam0)
{
	return uParam0->f_17;
}

bool func_460(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if (uParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_154(*uParam0, 4194304))
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

int func_461(var uParam0)
{
	return uParam0->f_18;
}

bool func_462(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (_is_weapon_sniper(func_639(iVar0, 0)))
		{
			if (func_641(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_463(var uParam0)
{
	return uParam0->f_23;
}

int func_464(var uParam0)
{
	return uParam0->f_21;
}

int func_465(var uParam0)
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

bool func_466(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_411(iParam0, vParam4, 0.5f))
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

int func_467(int iParam0)
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
	if (func_642(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_468(int iParam0)
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

bool func_469(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_643(iParam1))
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

bool func_470(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_643(iParam1))
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

bool func_471(var uParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = 40f;
	if (func_643(iParam1))
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

bool func_472(int iParam0, int iParam1)
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

bool func_473(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (func_644(iParam0, 1, 0, 0) != 2055893578)
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

bool func_474(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

float func_475(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_476(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_7(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_477(var uParam0)
{
	return uParam0->f_24;
}

int func_478(int iParam0)
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

int func_479(int iParam0)
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

int func_480(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_472(Global_35, &iVar1))
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
		fVar2 = func_475(iParam0, player_ped_id(), 0, 1);
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
		if (func_475(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

bool func_481(int iParam0, var uParam1, bool bParam2)
{
	func_636(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_482(uParam1, iVar0))
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
				if (!bParam2 || !func_482(uParam1, iVar1))
				{
					if (func_7(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_482(var uParam0, int iParam1)
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

bool func_483(int iParam0)
{
	if (func_199())
	{
		return false;
	}
	return func_321((*Global_1347702)[58]->f_15, 1);
}

int func_484(var uParam0)
{
	return uParam0->f_20;
}

int func_485(int iParam0, var uParam1, bool bParam2, float fParam3)
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

int func_486(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_487(int iParam0, int iParam1)
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

void func_488(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_489(int iParam0, int iParam1)
{
	iVar0 = func_309(*iParam0);
	iVar1 = func_308(*iParam0);
	if (iParam1 < 1 || iParam1 > func_313(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_490(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_491(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_492(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

int func_493()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_494(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_495(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_645(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_493())
	{
		return -1;
	}
	iVar0 = func_494(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_646(iVar1, 0);
	func_647(iVar1, 0);
	func_246(iVar1, 0);
	func_648(iVar1, 0);
	func_649(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_650(iVar1, iParam4);
	}
	return iVar1;
}

bool func_496(int iParam0)
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
		iVar0 = func_440(iParam0);
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

int func_497(int iParam0)
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

int func_498(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_5;
	}
	return Global_1058888->f_498[iParam0]->f_1;
}

int func_499(int iParam0)
{
	if (!func_187(iParam0))
	{
		return 0;
	}
	return func_651(func_306(iParam0));
}

void func_500(int iParam0, int iParam1, int iParam2)
{
	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_127() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	_0xd5910ecf81a2278c(iParam0, iParam1, iParam2, &vVar0);
}

bool func_501(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_502(int iParam0)
{
	switch (func_499(iParam0))
	{
		case 1:
			iVar0 = func_185(iParam0);
			return func_652(iVar0);
		case 8:
			iVar1 = func_185(iParam0);
			if (func_186((*Global_1347702)[iVar1]->f_12, 1))
			{
				return func_653(iVar1);
			}
			break;
	}
	return -1;
}

void func_503(bool bParam0)
{
	if (Global_1898077->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_127() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077->f_2 == 4 && Global_1898077->f_12 != Global_1898077->f_13) && !bParam0)
	{
		Global_1898077->f_1 = Global_1898077->f_2;
		Global_1898077->f_12 = Global_1898077->f_13;
		func_654(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_655();
		Global_1898077->f_9 = func_656(Global_1894899->f_2);
		func_657(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_504()
{
	if (!func_321((*Global_1835011)[4]->f_1, 1))
	{
		return 0;
	}
	else if (!func_321((*Global_1347702)[66]->f_15, 1))
	{
		return 1;
	}
	else if (!func_321((*Global_1347702)[67]->f_15, 1))
	{
		return 2;
	}
	else if (!func_321((*Global_1835011)[38]->f_1, 1))
	{
		return 3;
	}
	else if (!func_321((*Global_1347702)[68]->f_15, 1))
	{
		return 4;
	}
	else if (!func_321((*Global_1835011)[59]->f_1, 1))
	{
		return 5;
	}
	else if (!func_321((*Global_1835011)[67]->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_505(int iParam0, int iParam1)
{
	if (!func_187(iParam0))
	{
		return;
	}
	func_646(iParam0, iParam1);
}

int func_506(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

void func_507(bool bParam0)
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

int func_508(bool bParam0)
{
	if (!bParam0 && func_660(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_509(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_510(int iParam0, bool bParam1)
{
	if (func_127() != -1)
	{
		return;
	}
	if (func_506(0) != iParam0)
	{
		return;
	}
	if (func_661(iParam0))
	{
		if (bParam1)
		{
			func_662(-525676072);
		}
		else
		{
			func_663(-525676072);
		}
	}
}

int func_511(int iParam0)
{
	return func_665(func_664(iParam0));
}

void func_512(int iParam0, bool bParam1)
{
	if (!func_187(iParam0))
	{
		return;
	}
	if (!func_318(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_498(iParam0) == 0)
		{
		}
		else if (!_0x01f4d242765c6b24(func_498(iParam0)))
		{
			_0xca41e86545413b5b(func_499(iParam0), func_185(iParam0), func_666(iParam0), func_498(iParam0), Global_36);
		}
	}
	func_505(iParam0, 1);
	bParam1 = bParam1;
}

void func_513(int iParam0, bool bParam1)
{
	if ((*Global_1898346)[iParam0]->f_2 == 0 || bParam1)
	{
		(*Global_1898346)[iParam0]->f_2 = func_306(Global_1898330[iParam0]);
		func_667((*Global_1898346)[iParam0]->f_2, &((*Global_1898346)[iParam0]->f_4), &((*Global_1898346)[iParam0]->f_5), &((*Global_1898346)[iParam0]->f_3));
	}
}

bool func_514(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	Var0 = { func_430(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_432(&Var0, func_431(0));
	}
	if (!func_433(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_250(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_553(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_251(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_515(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_120(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_521(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_668(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_552(iParam0, Var0, Var0.f_4, bParam4) };
	return func_553(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_516(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_344(iParam0, 606799272))
		{
			func_669(iParam0, iParam1);
		}
		if (func_344(iParam0, -1112814642) && func_344(iParam0, -1697809989))
		{
			func_372(iParam0, iParam1, 1, 0);
		}
	}
}

bool func_517(int iParam0)
{
	return func_121(iParam0) == -427144552;
}

bool func_518(int iParam0)
{
	if (func_127() != -1)
	{
		return false;
	}
	if (func_345(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_525(iParam0, &uVar0, 1, 0, 0);
	}
	return func_19(iParam0, 1, 0);
}

void func_519(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_121(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_349(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_405(iVar0))
	{
		if (func_127() == -1)
		{
			func_350(iVar0);
		}
		if (bParam2 || (!has_ped_got_weapon(Global_35, iVar0, 0, false) && func_123(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_404(iParam0, iParam1, 0, 0, 0);
				play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_520(int iParam0, int iParam1)
{
	if (func_344(iParam0, 58855631))
	{
		func_670(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

struct<5> func_521(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_631(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_121(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_552(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_431(bParam1) };
			if (bParam2 && func_671(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_550(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_550(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_551(iParam0, &Var5, 1728382685))
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
			Var0 = { func_672(bParam1) };
			switch (func_347(iParam0))
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
			if (func_673(iParam0, -1823706425))
			{
				Var0 = { func_552(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_673(iParam0, -1483207246))
			{
				Var0 = { func_552(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_674(Var0, &Var27, bParam1, 0))
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

int func_522(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_120(iParam0, 0))
	{
		return 0;
	}
	if (!func_351(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_253(bParam3), iParam0);
}

int func_523(int iParam0, bool bParam1)
{
	if (func_355(iParam0))
	{
		return get_ped_ammo_by_type(Global_35, iParam0);
	}
	return _0xe787f05dfc977bde(func_253(bParam1), iParam0, 0);
}

bool func_524()
{
	if (func_127() != -1)
	{
		return false;
	}
	if (!func_337())
	{
		return false;
	}
	if (!func_321((*Global_1835011)[1]->f_1, 1))
	{
		return true;
	}
	if ((func_321((*Global_1835011)[2]->f_1, 1) && func_321((*Global_1347702)[120]->f_15, 1)) && !func_321((*Global_1835011)[4]->f_1, 1))
	{
		return true;
	}
	if (func_321((*Global_1835011)[37]->f_1, 1) && !func_321((*Global_1835011)[39]->f_1, 1))
	{
		return true;
	}
	if (func_321((*Global_1835011)[57]->f_1, 1) && !func_321((*Global_1835011)[60]->f_1, 1))
	{
		return true;
	}
	if (func_321((*Global_1835011)[26]->f_1, 1) && !func_321((*Global_1347702)[67]->f_15, 1))
	{
		return true;
	}
	if ((func_321((*Global_1835011)[62]->f_1, 1) && func_321((*Global_1835011)[63]->f_1, 1)) && !func_321((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if (func_321((*Global_1835011)[75]->f_1, 1) && !func_321((*Global_1347702)[1]->f_15, 1))
	{
		return true;
	}
	if (func_321((*Global_1835011)[76]->f_1, 1) && !func_321((*Global_1835011)[77]->f_1, 1))
	{
		return true;
	}
	if ((func_321((*Global_1835011)[40]->f_1, 1) && func_321((*Global_1835011)[41]->f_1, 1)) && !func_321((*Global_1835011)[44]->f_1, 1))
	{
		return true;
	}
	if ((func_321((*Global_1835011)[62]->f_1, 1) && func_321((*Global_1835011)[63]->f_1, 1)) && !func_321((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if ((func_321((*Global_1835011)[65]->f_1, 1) && func_321((*Global_1835011)[66]->f_1, 1)) && !func_321((*Global_1835011)[67]->f_1, 1))
	{
		return true;
	}
	return false;
}

bool func_525(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_675(&iParam0);
	if (!func_120(iParam0, 0))
	{
		return false;
	}
	if (!func_351(0))
	{
		bParam3 = true;
	}
	if (func_517(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_one_handed(iParam0))
		{
			Var0 = { func_431(0) };
			Var4.f_9 = -1591664384;
			if (!func_550(iParam0, &Var0, 1728382685, 0))
			{
				return false;
			}
			else if (func_551(iParam0, &Var4, 1728382685))
			{
				return false;
			}
			if (func_671(iParam0, 1))
			{
				if (!func_550(iParam0, &Var0, -649335959, 0))
				{
					return false;
				}
				else if (func_551(iParam0, &Var4, -649335959))
				{
					return false;
				}
			}
		}
		else if (!func_676(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_522(iParam0, uParam1, bParam3, bParam4);
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
		iVar28 = func_677(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = _0xe787f05dfc977bde(func_253(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_526(int iParam0, int iParam1)
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

int func_527()
{
	return _0x62cab7db62ead434(-2076669067, 0);
}

int func_528(int iParam0)
{
	return _0xec3959e9950bf56b(iParam0);
}

void func_529(int iParam0)
{
	if (func_127() != -1)
	{
		return;
	}
	iVar0 = func_678(iParam0);
	fVar1 = func_679(iParam0);
	if ((Global_1347477->f_117 || !func_274(31)) || !func_680(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_681(iVar0) >= 7)
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
	func_682(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_422(_create_var_string(6, func_683(iParam0), fVar1), "itemtype_textures", func_684(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_530(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_685(&Global_0, 8);
	}
	if (!func_337() || func_127() != -1)
	{
		return;
	}
	func_685(&Global_0, 1);
}

void func_531(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_532(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_686(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_687(iParam0))
	{
		return false;
	}
	if (func_688(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_607(iParam0, 1)) || func_689(32768))
	{
		if (!func_607(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_690())
	{
		return false;
	}
	return true;
}

void func_533(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

int func_534(int iParam0)
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

int func_535(int iParam0, int iParam1)
{
	if (!func_691(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_int(&uVar5, &Var0);
	return uVar5;
}

char* func_536(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_340() >= 12)
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_POSTED_OBJ", func_692(), 12);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_FOUND_OBJ", func_693(), 12);
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
			else if (func_576() >= 30)
			{
				sParam3 = _create_var_string(2, "COL_DB_POSTED_OBJ", func_694(), 30);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_DB_FOUND_OBJ", func_576(), 30);
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
				sParam3 = _create_var_string(2, "COL_LF_CAUGHT_OBJ", func_695(), 13);
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
			else if (func_577() >= 10)
			{
				sParam3 = _create_var_string(2, "COL_RC_POSTED_OBJ", func_696(), 10);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_RC_FOUND_OBJ", func_577(), 10);
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
				sParam3 = _create_var_string(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_535(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_537(int iParam0, int iParam1, int iParam2)
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

bool func_538(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_add_entry_hash(3, iParam1, vParam2, get_hash_key(sParam5), get_hash_key(sParam6), 0);
	}
	return true;
}

bool func_539(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	_uilog_add_or_update_objective(3, iParam1, get_hash_key(sParam2), sParam2, false, false, false);
	_uilog_set_entry_pinned(3, iParam1, true);
	_uilog_set_entry_brief_texture(3, iParam1, get_hash_key(sParam4), get_hash_key(sParam5));
	_uilog_set_entry_icon_texture(3, iParam1, iParam6, iParam7);
	_uilog_update_entry_subheader(3, iParam1, _create_var_string(2, sParam3));
	return true;
}

bool func_540(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_697(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_19(iVar2, 1, 0) || func_699(func_698(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_544(func_697(iVar0))), func_544(func_697(iVar0)), bVar1, true, false);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_576() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_700(iVar0)), func_700(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_694() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_700(iVar0)), func_700(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_700(iVar0)), func_700(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_587(iParam3, func_701(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_583(iVar2) - iParam7) >= func_535(iParam3, func_702(iVar0));
				}
				else
				{
					bVar1 = func_583(iVar2) >= func_535(iParam3, func_702(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_583(iVar2) + iParam7) >= func_535(iParam3, func_702(iVar0));
			}
			else
			{
				bVar1 = func_583(iVar2) >= func_535(iParam3, func_702(iVar0));
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_703(iVar2)), func_703(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_704(_0x126cbebba46693cf(iVar0, 1995362678, 0)))
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
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_705(_0x126cbebba46693cf(iVar0, iParam2, 0))), func_705(_0x126cbebba46693cf(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_577() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_706(iVar0)), func_706(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_696() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_706(iVar0)), func_706(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_706(iVar0)), func_706(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_587(iParam3, func_701(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_583(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_707(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_707(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_708(iVar2)), func_708(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_541(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_695() >= 13)
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

bool func_542(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_187(func_506(0)) && ((func_709(0) == 1 || func_709(0) == 8) || func_709(0) == 6))
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

var func_543(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

char* func_544(int iParam0)
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

var func_545(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

void func_546(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	set_bit(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_547(int iParam0)
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
			func_710(1);
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
			func_711(1);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_711(2);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_711(3);
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
			func_712(1);
			break;
		case 34:
			func_713(1);
			break;
		case 35:
			func_714(1);
			break;
		case 36:
			break;
		case 37:
			func_715(0);
			break;
		case 38:
			func_716(0);
			break;
		case 39:
			func_717(0);
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
			if ((!&Global_1879534 && func_337()) && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_545("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_334(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_337()) && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_545("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_334(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_337()) && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_545("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_334(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_337()) && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_545("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_334(589, 0);
			break;
		case 24:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			if (func_127() == -1)
			{
				if (!func_617(99217379) || func_718(99217379) == 2110595215)
				{
					if (func_199())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = 899611344;
					}
					if (!func_19(iVar0, 1, 0))
					{
						func_397(iVar0, 1, 752097756);
					}
					func_376(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_127() == -1)
			{
				if (!func_19(1013902307, 1, 0))
				{
					func_397(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_127() == -1)
			{
				if (!func_19(1013902307, 1, 0))
				{
					func_397(1013902307, 1, 752097756);
				}
				if (!func_19(142640135, 1, 0))
				{
					func_397(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_127() == -1)
			{
				if (!func_19(786809402, 1, 0))
				{
					func_397(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_127() == -1)
			{
				if (!func_19(786809402, 1, 0))
				{
					func_397(786809402, 1, 752097756);
				}
				if (!func_19(-518019409, 1, 0))
				{
					func_397(-518019409, 1, 752097756);
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
			func_719();
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

bool func_548(int iParam0)
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

int func_549(int iParam0, int iParam1)
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

bool func_550(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_677(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_551(int iParam0, var uParam1, int iParam2)
{
	if (func_720(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_552(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_120(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_253(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_553(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_721(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_674(*uParam1, &Var0, bParam6, 0))
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
	if (!func_351(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_253(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_554(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_722(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

void func_555(int iParam0)
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
	iVar2 = func_190();
	func_191(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	decor_set_int(Global_35, sVar1, iVar2);
}

int func_556(int iParam0)
{
	if (func_723(iParam0))
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

int func_557(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_0x705be297eebdb95d(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			if (!func_274(50))
			{
				if (!func_274(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_274(51))
			{
				if (!func_274(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_558()
{
	return _unlock_is_unlocked(-121456797);
}

bool func_559(int iParam0, int iParam1, var uParam2)
{
	if (!func_120(iParam1, 0))
	{
		return false;
	}
	if (func_121(iParam1) != -1037537535)
	{
		return false;
	}
	bVar1 = func_127() != -1;
	iVar2 = _get_metaped_type(iParam0);
	if (func_347(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_724(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_344(iParam1, 866047851))
	{
		iVar5 = func_595(iVar4, 1);
		if (func_725(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5] != iVar8)
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
			iVar3 = func_347(&(Global_1946804->f_1497.f_1[iVar5]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745;
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5] != &Global_1946804->f_57[iVar5] && func_344(iParam1, -1638171711))
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
			if (func_726(1868067663, &uVar0))
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
				iVar10 = func_727(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_727(&(Global_1946804->f_1497.f_1[iVar5]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_347(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6] && func_344(&(Global_1946804->f_1497.f_1[iVar5]), -1638171711))
				{
					*uParam2 = -357399012;
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != &Global_1946804->f_57[iVar6] && func_728(&(Global_1946804->f_1497.f_1[iVar5])))
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

void func_560()
{
	_0xfe7c9cf376d23342(player_id(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_561()
{
	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	set_player_health_recharge_multiplier(player_id(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	_0x08e22898a6af4905(player_id(), (1f - fVar0));
	_0xfeca17cf3343694b(player_id(), (1f - fVar0));
	_0xbbadfb5e5e5766fb(player_id(), (1f - fVar1));
}

int func_562()
{
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_19(func_729(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_563(int iParam0)
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

bool func_564(int iParam0, int iParam1)
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
	if (func_19(iVar0, 1, 0) && func_19(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_565(int iParam0)
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

bool func_566(int iParam0, int iParam1)
{
	iVar0 = func_730(iParam0);
	if (iVar0 != -15)
	{
		func_191(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_215(iVar0, 1);
	}
	return false;
}

int func_567(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_19(1811977508, 1, 0))
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
			if (func_120(iVar25, 0) && func_344(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_568(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_422(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_569(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_731())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_422(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_732(iVar0);
			func_733(iVar0, 0, 0);
		}
		func_422(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		_money_increment_cash_balance(iVar1, iParam4);
		func_360(func_421(1644987397), iVar1);
	}
}

void func_570(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_571(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_572(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_573(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_574(int iParam0)
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
	iVar1 = func_583(iVar9);
	iVar2 = func_583(iVar10);
	iVar3 = func_583(iVar11);
	iVar5 = func_584(iVar9);
	iVar6 = func_584(iVar10);
	iVar7 = func_584(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_583(iVar12);
		iVar8 = func_584(iVar12);
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

void func_575(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_576()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_734(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_577()
{
	return _0x5461c821d00fe15a(2103522376, 0);
}

bool func_578(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_707(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_707(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_707(iVar0))
		{
			*iParam2++;
		}
		if (func_707(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_707(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_707(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_707(iVar0))
		{
			*iParam2++;
		}
		if (func_707(iVar1))
		{
			*iParam2++;
		}
		if (func_707(iVar0) && func_707(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_707(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_707(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_707(iVar0))
		{
			*iParam2++;
		}
		if (func_707(iVar1))
		{
			*iParam2++;
		}
		if (func_707(iVar2))
		{
			*iParam2++;
		}
		if ((func_707(iVar0) && func_707(iVar1)) && func_707(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_707(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_707(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_707(iVar0))
		{
			*iParam2++;
		}
		if (func_707(iVar1))
		{
			*iParam2++;
		}
		if (func_707(iVar2))
		{
			*iParam2++;
		}
		if (func_707(iVar3))
		{
			*iParam2++;
		}
		if (((func_707(iVar0) && func_707(iVar1)) && func_707(iVar2)) && func_707(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_579(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_735(1497516462);
			func_736(2016141805);
			func_736(1010885152);
			func_736(-502324015);
			break;
		case 2016141805:
			func_736(1497516462);
			func_735(2016141805);
			func_736(1010885152);
			func_736(-502324015);
			break;
		case 1010885152:
			func_736(1497516462);
			func_736(2016141805);
			func_735(1010885152);
			func_736(-502324015);
			break;
		case -502324015:
			func_736(1497516462);
			func_736(2016141805);
			func_736(1010885152);
			func_735(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_736(-538889627);
			func_736(-538880323);
			func_736(-1056767524);
			func_735(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_737();
			func_735(iParam0);
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
			func_738();
			func_735(iParam0);
			break;
		case 2019386373:
			func_736(-664252410);
			func_736(2109952320);
			func_735(2019386373);
			break;
		case -664252410:
			func_736(2019386373);
			func_736(2109952320);
			func_735(-664252410);
			break;
		case 2109952320:
			func_736(2019386373);
			func_736(-664252410);
			func_735(2109952320);
			break;
		case -1674179981:
			func_736(-1835851517);
			func_736(-1838352012);
			func_735(-1674179981);
			break;
		case -1835851517:
			func_736(-1674179981);
			func_736(-1838352012);
			func_735(-1835851517);
			break;
		case -1838352012:
			func_736(-1674179981);
			func_736(-1835851517);
			func_735(-1838352012);
			break;
		case -1717960576:
			func_736(210001842);
			func_735(-1717960576);
			break;
		case 210001842:
			func_736(-1717960576);
			func_735(210001842);
			break;
		case -150493654:
			func_736(-1271608261);
			func_736(1846061697);
			func_736(-1145519186);
			func_735(-150493654);
			break;
		case -1271608261:
			func_736(-150493654);
			func_736(1846061697);
			func_736(-1145519186);
			func_735(-1271608261);
			break;
		case 1846061697:
			func_736(-150493654);
			func_736(-1271608261);
			func_736(-1145519186);
			func_735(1846061697);
			break;
		case -1145519186:
			func_736(-150493654);
			func_736(-1271608261);
			func_736(1846061697);
			func_735(-1145519186);
			break;
		case 1766284049:
			func_736(280705402);
			func_736(1926308480);
			func_735(1766284049);
			break;
		case 280705402:
			func_736(1766284049);
			func_736(1926308480);
			func_735(280705402);
			break;
		case 1926308480:
			func_736(1766284049);
			func_736(280705402);
			func_735(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_736(439465264);
				func_735(1609506757);
			}
			else
			{
				func_736(1609506757);
				func_736(439465264);
			}
			break;
		case 439465264:
			if (func_660(1609506757))
			{
				if (bParam1)
				{
					func_735(439465264);
				}
				else
				{
					func_736(439465264);
				}
			}
			break;
		case 1822001510:
			func_736(-1612662716);
			func_735(1822001510);
			break;
		case -1612662716:
			func_736(1822001510);
			func_735(-1612662716);
			break;
		case 1306158345:
			func_736(1952610440);
			func_736(-223469678);
			func_736(-404698347);
			func_736(1517904467);
			func_735(1306158345);
			break;
		case 1952610440:
			func_736(1306158345);
			func_736(-223469678);
			func_736(-404698347);
			func_736(1517904467);
			func_735(1952610440);
			break;
		case -223469678:
			func_736(1306158345);
			func_736(1952610440);
			func_736(-404698347);
			func_736(1517904467);
			func_735(-223469678);
			break;
		case -404698347:
			func_736(1306158345);
			func_736(1952610440);
			func_736(-223469678);
			func_736(1517904467);
			func_735(-404698347);
			break;
		case 1517904467:
			func_736(1306158345);
			func_736(1952610440);
			func_736(-223469678);
			func_736(-404698347);
			func_735(1517904467);
			break;
		case 1376646519:
			func_736(931649776);
			func_736(-434590080);
			func_736(1743048395);
			func_736(449774763);
			func_735(1376646519);
			break;
		case 931649776:
			func_736(1376646519);
			func_736(-434590080);
			func_736(1743048395);
			func_736(449774763);
			func_735(931649776);
			break;
		case -434590080:
			func_736(1376646519);
			func_736(931649776);
			func_736(1743048395);
			func_736(449774763);
			func_735(-434590080);
			break;
		case 1743048395:
			func_736(1376646519);
			func_736(931649776);
			func_736(-434590080);
			func_736(449774763);
			func_735(1743048395);
			break;
		case 449774763:
			func_736(1376646519);
			func_736(931649776);
			func_736(-434590080);
			func_736(1743048395);
			func_735(449774763);
			break;
		case -1414537028:
			func_736(38162571);
			func_736(1350391819);
			func_736(54073871);
			func_735(-1414537028);
			break;
		case 38162571:
			func_736(-1414537028);
			func_736(1350391819);
			func_736(54073871);
			func_735(38162571);
			break;
		case 1350391819:
			func_736(-1414537028);
			func_736(38162571);
			func_736(54073871);
			func_735(1350391819);
			break;
		case 54073871:
			func_736(-1414537028);
			func_736(38162571);
			func_736(1350391819);
			func_735(54073871);
			break;
		case 198200492:
			func_735(198200492);
			func_736(-1124061431);
			func_736(52706132);
			func_736(-259123672);
			break;
		case -1124061431:
			func_736(198200492);
			func_735(-1124061431);
			func_736(52706132);
			func_736(-259123672);
			break;
		case 52706132:
			func_736(198200492);
			func_736(-1124061431);
			func_735(52706132);
			func_736(-259123672);
			break;
		case -259123672:
			func_736(198200492);
			func_736(-1124061431);
			func_736(52706132);
			func_735(-259123672);
			break;
		case -919512195:
			func_735(-919512195);
			func_736(-1925798111);
			func_736(420709909);
			func_736(1703426636);
			break;
		case -1925798111:
			func_735(-1925798111);
			func_736(-919512195);
			func_736(420709909);
			func_736(1703426636);
			break;
		case 420709909:
			func_735(420709909);
			func_736(-919512195);
			func_736(-1925798111);
			func_736(1703426636);
			break;
		case 1703426636:
			func_735(1703426636);
			func_736(-919512195);
			func_736(-1925798111);
			func_736(420709909);
			break;
		case -1223121209:
			func_735(-1223121209);
			func_736(630808005);
			break;
		case 630808005:
			func_735(630808005);
			func_736(-1223121209);
			break;
		case 1453909576:
			func_735(1453909576);
			func_736(1643531967);
			break;
		case 1643531967:
			func_735(1643531967);
			func_736(1453909576);
			break;
		case 0:
			func_735(0);
			func_736(473295046);
			func_736(-1738165526);
			break;
		case 473295046:
			func_735(473295046);
			func_736(0);
			func_736(-1738165526);
			break;
		case -1738165526:
			func_735(-1738165526);
			func_736(0);
			func_736(473295046);
			break;
		case 932909855:
			func_735(932909855);
			func_736(2051822093);
			break;
		case 2051822093:
			func_735(2051822093);
			func_736(932909855);
			break;
		case 405586984:
			func_735(405586984);
			func_736(1509509592);
			func_736(-959357075);
			func_736(-1311865656);
			break;
		case 1509509592:
			func_735(1509509592);
			func_736(405586984);
			func_736(-959357075);
			func_736(-1311865656);
			break;
		case -959357075:
			func_735(-959357075);
			func_736(1509509592);
			func_736(405586984);
			func_736(-1311865656);
			break;
		case -1311865656:
			func_735(-1311865656);
			func_736(1509509592);
			func_736(-959357075);
			func_736(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_735(-524145696);
			}
			else
			{
				func_736(-524145696);
			}
			func_736(1626481264);
			func_736(282809459);
			break;
		case 282809459:
			func_735(282809459);
			func_736(1626481264);
			func_736(-524145696);
			break;
		case 1626481264:
			func_735(1626481264);
			func_736(-524145696);
			func_736(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_735(885203519);
			}
			else
			{
				func_736(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_735(-1080627546);
			}
			else
			{
				func_736(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_660(iParam0))
				{
					func_735(iParam0);
				}
			}
			else if (func_660(iParam0))
			{
				func_736(iParam0);
			}
			break;
	}
}

void func_580(int iParam0)
{
	if (!func_739(iParam0))
	{
		func_741(func_740(iParam0));
	}
}

int func_581()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_739(_0x126cbebba46693cf(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_582(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_583(iVar9);
	iVar2 = func_583(iVar10);
	iVar3 = func_583(iVar11);
	iVar5 = func_584(iVar9);
	iVar6 = func_584(iVar10);
	iVar7 = func_584(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_583(iVar12);
		iVar8 = func_584(iVar12);
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

int func_583(int iParam0)
{
	if (func_19(iParam0, 1, 0))
	{
		iVar0 = func_123(iParam0, 0, 0);
	}
	return iVar0;
}

int func_584(int iParam0)
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

int func_585(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0);
}

void func_586(int iParam0, int iParam1)
{
	_0x3ea62e56f386c997(iParam0, iParam1);
}

int func_587(int iParam0, int iParam1)
{
	if (!func_691(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

void func_588(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_587(iParam1, 5) || iParam0 == func_587(iParam1, 6)) || iParam0 == func_587(iParam1, 7)) || iParam0 == func_587(iParam1, 8)) || iParam0 == func_587(iParam1, 9))
	{
		func_578(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_341(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_343(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_589(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if ((((iParam0 == func_587(iParam1, 5) || iParam0 == func_587(iParam1, 6)) || iParam0 == func_587(iParam1, 7)) || iParam0 == func_587(iParam1, 8)) || iParam0 == func_587(iParam1, 9))
	{
		if (func_578(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_341(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_343(51, 0, 0, iVar0, func_535(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_341(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_343(51, 0, 0, iVar0, func_535(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_590()
{
	if (func_140((*Global_1347702)[37]->f_15) && Global_1392388->f_7)
	{
		return true;
	}
	return false;
}

void func_591(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
}

void func_592(int iParam0)
{
	if (!func_742(iParam0))
	{
		_0x3ea62e56f386c997(iParam0, 1);
	}
}

void func_593(int iParam0)
{
	_0x398fab9c96a81924(iParam0, 1);
}

int func_594(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_743(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_595(int iParam0, int iParam1)
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

bool func_596(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_744();
	if (iParam2 == 39)
	{
		Var0 = { func_521(iParam0, 1, 0) };
		iParam2 = func_595(func_594(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_344(iParam0, 866047851) && func_725(&(Global_1946804->f_1378)) >= 2)
	{
		return false;
	}
	if ((func_599(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2])
	{
		func_745(func_743(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_746(iParam2);
	func_747(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2] != &Global_1946804->f_57[iParam2] && Global_1946804->f_57[iParam2]->f_1 > 1)
	{
		func_748(Global_1946804->f_1378.f_1[iParam2], 4, 6);
		func_748(Global_1946804->f_1497.f_1[iParam2], 4, 6);
	}
	func_749(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804->f_1378.f_1[iParam2]->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2] = iParam0;
	Global_1946804->f_1378.f_1[iParam2]->f_1 = func_750(iParam0, iParam2, iParam1, func_127() != -1);
	if (bParam4)
	{
		func_751(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_751(&(Global_1946804->f_1378), 1, 0);
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
				func_752(func_743(&(Global_1946804->f_2589.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_597(bool bParam0, bool bParam1, bool bParam2)
{
	func_753(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

void func_598(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_754(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_755(Var0);
}

bool func_599(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_600()
{
	func_756(&(Global_1946804->f_2776));
	func_757(32768);
	func_752(1108822547, 8, 6);
}

int func_601(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_595(iParam0, 1);
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

void func_602(int iParam0)
{
	if (func_758(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_759(Var0);
}

void func_603(int iParam0, int iParam1, int iParam2)
{
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_759(Var0);
}

float func_604()
{
	if (func_760())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_761(2);
	}
	if (Global_1347477->f_119)
	{
		return func_761(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_762();
	fVar2 = func_763();
	fVar3 = func_764();
	fVar4 = func_765();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_766()));
	fVar7 = (func_761(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_767(3, round((to_float(iVar8) * fVar10)), 0);
	func_768(3, fVar9, fVar9 > 100f);
	return func_769(fVar7, -100f, 100f);
}

float func_605()
{
	if (func_760())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_761(1);
	}
	if (Global_1347477->f_119)
	{
		return func_761(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_762();
	fVar2 = func_763();
	fVar3 = func_764();
	fVar4 = func_765();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_766()));
	fVar7 = (func_761(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_767(2, round((to_float(iVar8) * fVar10)), 0);
	func_768(2, fVar9, fVar9 > 100f);
	return func_769(fVar7, -100f, 100f);
}

float func_606()
{
	if (func_760())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_761(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_770())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_771())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_761(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_762();
	fVar2 = func_763();
	fVar3 = func_764();
	fVar4 = func_765();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_766()));
	fVar7 = (func_761(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_767(1, round((to_float(iVar8) * fVar10)), 0);
	func_768(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_761(0);
	}
	return func_769(fVar7, -100f, 100f);
}

bool func_607(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_608(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_609(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_120(iParam0, 0))
	{
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return 0;
	}
	if (func_525(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return 0;
	}
	if (!func_351(0))
	{
		return 0;
	}
	if (!_0xcb5d11f9508a928d(func_253(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_610(int iParam0, bool bParam1)
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
				return func_772();
			}
			break;
	}
	return 0;
}

int func_611(int iParam0)
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

bool func_612(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_613(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_612(iParam0))
	{
		return;
	}
	if (func_773(iParam0))
	{
		return;
	}
	if (!func_774(iParam0))
	{
		func_775(iParam0, 1, 0);
	}
	iVar0 = func_776(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_777(iParam0, 512))
		{
			func_598(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_778() && !bParam1) && !func_65(0, 0, 1))
	{
		func_197(_create_var_string(10, "OUT_JOURN_DONE", _create_var_string(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_779(iParam0, 6);
	if (bParam2)
	{
		if (!func_65(0, 0, 1))
		{
			func_530(1, 4);
		}
	}
}

int func_614()
{
	return Global_1946804->f_1;
}

bool func_615(int iParam0, bool bParam1)
{
	return func_610(iParam0, 0) < func_780(iParam0, bParam1);
}

bool func_616(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_347(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_617(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_595(iParam0, 1)] != &Global_1946804->f_57[func_595(iParam0, 1)];
}

void func_618(int iParam0, int iParam1)
{
	if (func_344(iParam1, 130796156))
	{
		func_781(iParam1, 0);
	}
	else if (func_344(iParam1, 930141731))
	{
		func_781(iParam1, 1);
		func_782(iParam0);
	}
}

void func_619(var uParam0, int iParam1)
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

int func_620(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_783(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_784(uParam2, iParam0, Var1);
	return 1;
}

int func_621(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_622(int iParam0)
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

int func_623(int iParam0)
{
	if (!func_785(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

bool func_624()
{
	return !&Global_1911774;
}

void func_625(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

char* func_626(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_627(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_628(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

bool func_629(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_630(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

struct<4> func_631(bool bParam0)
{
	return func_552(1328661203, func_786(), -1591664384, bParam0);
}

bool func_632()
{
	return (Global_1914319->f_17369 || Global_1914319->f_18996.f_1);
}

int func_633(int iParam0)
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

bool func_634()
{
	if (func_787())
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

void func_635(var uParam0, var uParam1)
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

bool func_636(bool bParam0, int iParam1, int iParam2)
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

int func_637(var uParam0)
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

void func_638(var uParam0)
{
	if (Global_1935630->f_38 == 0)
	{
		func_150(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1935630->f_34[iVar0])))
				{
					func_151(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_639(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_640(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_641(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_641(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_642(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_643(int iParam0)
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

int func_644(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_645(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_646(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_788(iParam0);
	}
	else
	{
		func_789(iParam0, iParam1);
	}
	func_790();
}

void func_647(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

void func_648(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_649(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_650(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

int func_651(int iParam0)
{
	return iParam0 & 31;
}

int func_652(int iParam0)
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

int func_653(int iParam0)
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

void func_654(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_655()
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

int func_656(int iParam0)
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

void func_657(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
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
	iVar0 = func_791(iParam0, 1);
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
	if (!func_187(iParam0))
	{
		return false;
	}
	switch (func_499(iParam0))
	{
		case 1:
			switch (func_185(iParam0))
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
			switch (func_185(iParam0))
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

void func_662(int iParam0)
{
	iVar2 = func_253(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_347(iVar1) == iParam0)
		{
			_0x6a564540fac12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_793(func_792(iParam0), 6);
}

void func_663(int iParam0)
{
	iVar2 = func_253(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_347(iVar1) == iParam0)
		{
			_0x766315a564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_794(func_792(iParam0), 6);
}

int func_664(int iParam0)
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

int func_665(int iParam0)
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
	func_795(iParam0, Global_1898164->f_162);
	return 1;
}

int func_666(int iParam0)
{
	if (!func_187(iParam0))
	{
		return -1;
	}
	return func_796(func_306(iParam0));
}

void func_667(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam3 = func_651(iParam0);
	*uParam1 = func_307(iParam0);
	*uParam2 = func_796(iParam0);
}

bool func_668(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_721(iParam0))
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return false;
	}
	if (!func_351(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!_0xb4158c8c9a3b5dce(func_253(bParam4), iParam0, iParam1, iParam2))
	{
		return false;
	}
	return true;
}

void func_669(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_127() == -1)
	{
		if (func_333(43))
		{
			if (func_344(iParam0, 412399755))
			{
				func_580(-1791518714);
				if (func_581() == 0)
				{
					func_530(0, 10);
					iVar0 = func_797(iParam0, iParam1, 1);
					if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
					{
						if (func_583(iParam0) < func_584(iParam0))
						{
							func_341(43, iParam0, iParam1, -1791518714, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_333(44))
		{
			if (func_344(iParam0, 709057512))
			{
				func_580(-2087881550);
				if (func_581() == 1)
				{
					func_530(0, 10);
					iVar0 = func_797(iParam0, iParam1, 2);
					if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
					{
						if (func_583(iParam0) < func_584(iParam0))
						{
							func_341(43, iParam0, iParam1, -2087881550, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_333(45))
		{
			if (func_344(iParam0, -1478961327))
			{
				func_580(1908068621);
				if (func_581() == 2)
				{
					func_530(0, 10);
					iVar0 = func_797(iParam0, iParam1, 4);
					if (((iParam0 == 2116770557 || iParam0 == -651064726) || iParam0 == -404270094) || iParam0 == 2093126853)
					{
						if (func_583(iParam0) < func_584(iParam0))
						{
							func_341(43, iParam0, iParam1, 1908068621, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_333(46))
		{
			if (func_344(iParam0, -1238404098))
			{
				func_580(1611247019);
				if (func_581() == 3)
				{
					func_530(0, 10);
					iVar0 = func_797(iParam0, iParam1, 8);
					if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
					{
						if (func_583(iParam0) < func_584(iParam0))
						{
							func_341(43, iParam0, iParam1, 1611247019, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_333(47))
		{
			if (func_344(iParam0, 1160548794))
			{
				func_580(1319635688);
				if (func_581() == 4)
				{
					func_530(0, 10);
					iVar0 = func_797(iParam0, iParam1, 16);
					if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
					{
						if (func_583(iParam0) < func_584(iParam0))
						{
							func_341(43, iParam0, iParam1, 1319635688, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

int func_670(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_120(iParam0, 0))
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

bool func_671(int iParam0, bool bParam1)
{
	if (func_347(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_274(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_672(bool bParam0)
{
	iVar0 = func_253(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_552(271701509, func_631(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_552(271701509, func_631(bParam0), 12999093, 0);
}

bool func_673(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_347(iParam0);
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

bool func_674(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_253(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_675(int iParam0)
{
	if (!func_120(*iParam0, 0))
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

bool func_676(int iParam0, var uParam1, bool bParam2)
{
	if (!func_120(iParam0, 0))
	{
		return false;
	}
	Var0 = { func_521(iParam0, 0, 1) };
	iVar5 = 1728382685;
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_549((386 + iVar29), 1);
		if (func_550(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_551(iParam0, &Var6, iVar5);
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

int func_677(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_120(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_552(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_253(bParam6), &Var0, 0);
	return uVar4;
}

int func_678(int iParam0)
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

float func_679(int iParam0)
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
			return func_798(iParam0);
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
			return func_798(iParam0);
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
			return func_798(iParam0);
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

bool func_680(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_274(18);
		case 2:
			return func_274(20);
		case 1:
			return func_274(19);
		default:
			break;
	}
	return true;
}

int func_681(int iParam0)
{
	return func_799(&(Global_40.f_11095.f_11[iParam0]));
}

void func_682(int iParam0, float fParam1, bool bParam2)
{
	if (func_127() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_274(31))
	{
		return;
	}
	iVar0 = func_681(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	set_attribute_points(Global_35, iParam0, floor(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_681(iParam0);
	if (func_800(iParam0) && func_801(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_802(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_803(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!is_radar_hidden() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_334(func_804(iParam0), 0);
					}
					func_805(iParam0, iVar2, iVar3);
					func_806(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = get_game_timer();
}

char* func_683(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_684(int iParam0)
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

void func_685(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_686(int iParam0, int iParam1)
{
	if (func_127() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_687(int iParam0)
{
	if (func_127() != -1)
	{
		if (func_607(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_607(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_688(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_607(iParam0, 65536) && !func_607(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_607(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_607(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_689(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_690()
{
	return Global_1905944->f_5694;
}

bool func_691(int iParam0, var uParam1)
{
	if (!func_807(iParam0))
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

int func_692()
{
	return func_808(Global_40.f_12019);
}

int func_693()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_534(iVar1);
		if (func_19(iVar2, 1, 0) || func_699(func_698(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_694()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_809(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_695()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_704(_0x126cbebba46693cf(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_696()
{
	return _0x3a65f4844913a047(2103522376, 0);
}

int func_697(int iParam0)
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

int func_698(int iParam0)
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

bool func_699(int iParam0)
{
	return (Global_40.f_12019 && iParam0) != 0;
}

char* func_700(int iParam0)
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

int func_701(int iParam0)
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

int func_702(int iParam0)
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

char* func_703(int iParam0)
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

bool func_704(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

char* func_705(int iParam0)
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

char* func_706(int iParam0)
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

bool func_707(int iParam0)
{
	if (func_810(iParam0) && func_19(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_811(iParam0) && func_812(iParam0))
	{
		return true;
	}
	return false;
}

char* func_708(int iParam0)
{
	if (!func_120(iParam0, 0))
	{
		return "";
	}
	return _get_label_text_by_hash(func_391(iParam0));
}

int func_709(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

void func_710(bool bParam0)
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

void func_711(int iParam0)
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

void func_712(bool bParam0)
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

void func_713(bool bParam0)
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

void func_714(bool bParam0)
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

void func_715(bool bParam0)
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

void func_716(bool bParam0)
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

void func_717(bool bParam0)
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

int func_718(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_595(iParam0, 1)]);
}

void func_719()
{
	if (!_unlock_is_unlocked(-1526891582))
	{
		func_813();
		_unlock_set_unlocked(-1526891582, true);
		func_350(-916314281);
		func_397(-916314281, 1, 752097756);
		set_current_ped_weapon(Global_35, -916314281, true, 2, false, false);
		func_350(494733111);
		func_397(494733111, 1, 752097756);
		set_current_ped_weapon(Global_35, 494733111, true, 4, false, false);
	}
}

bool func_720(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_253(0);
	*uParam1 = { func_552(iParam0, func_431(0), iParam3, 0) };
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

bool func_721(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

int func_722(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_723(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

int func_724(int iParam0)
{
	Var0 = { func_521(iParam0, 1, 0) };
	return func_594(Var0.f_4);
}

int func_725(var uParam0)
{
	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_344(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_344(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_344(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_344(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_344(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_344(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

bool func_726(int iParam0, var uParam1)
{
	iVar1 = func_595(func_814(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1946804->f_1497.f_1[iVar1] != 0 && &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1];
		if (func_347(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return true;
		}
	}
	*uParam1 = 0;
	return false;
}

int func_727(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam0 == &Global_1946804->f_57[func_595(iParam1, 1)])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_599(524288))
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

bool func_728(int iParam0)
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

int func_729(int iParam0)
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

int func_730(int iParam0)
{
	return func_815(iParam0, -1);
}

bool func_731()
{
	if (func_558())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_732(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_816((Global_40.f_4283.f_325 + iParam0));
}

void func_733(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_731())
	{
		func_422(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_422(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

bool func_734(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

void func_735(int iParam0)
{
	iVar0 = func_791(iParam0, 1);
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

void func_736(int iParam0)
{
	iVar0 = func_791(iParam0, 1);
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

void func_737()
{
	func_736(-939420910);
	func_736(-1187950766);
	func_736(356365161);
	func_736(753127042);
	func_736(-2038424081);
	func_736(1884271742);
	func_736(459290420);
}

void func_738()
{
	func_736(704802028);
	func_736(588987611);
	func_736(2008888900);
	func_736(1649996811);
	func_736(227918160);
	func_736(168171957);
	func_736(1193080109);
	func_736(-491981251);
	func_736(-639037538);
	func_736(-618620429);
}

bool func_739(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_740(int iParam0)
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

void func_741(int iParam0)
{
	Global_40.f_12019.f_43 = (Global_40.f_12019.f_43 || iParam0);
}

bool func_742(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_743(int iParam0, int iParam1)
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

void func_744()
{
	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		iVar0++;
	}
}

void func_745(int iParam0)
{
	func_752(iParam0, 8, 6);
}

void func_746(int iParam0)
{
	func_817(&(Global_1946804->f_2589), iParam0);
}

void func_747(int iParam0, int iParam1)
{
	func_818(&(Global_1946804->f_2589), iParam0, iParam1);
}

void func_748(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_749(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_347(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_819(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_747(iVar1, iVar3);
		}
	}
	if (func_617(-1586649372) && func_819(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_747(iVar1, iVar3);
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
						func_747(iVar1, iVar3);
					}
				}
			}
			func_820(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_820(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_747(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_820(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_747(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_747(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_820(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_820(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_747(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_820(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_747(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_747(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_347(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_747(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_728(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_347(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_747(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_344(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_747(iVar1, iVar3);
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
						func_747(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_728(&(Global_1946804->f_1497.f_1[iVar1])) || func_344(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_747(iVar1, iVar3);
					}
				}
			}
			switch (func_347(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_347(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_747(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_347(&(uParam0->f_1[iVar1])) || func_344(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_747(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_750(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = func_821(0);
	if (iParam2 != 0 && func_822(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_823(iParam0, func_743(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_751(var uParam0, bool bParam1, int iParam2)
{
	bVar6 = func_127() != -1;
	iVar7 = func_821(0);
	if (func_599(32768))
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
			iVar5 = func_743(iVar0, 1);
			if (func_824(iVar5, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
			{
			}
			else if (func_824(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
			{
			}
			else
			{
				iVar4 = func_727(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_825(uParam0);
				if (iVar3 > 0)
				{
					if (!func_599(524288))
					{
						func_754(524288);
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
							iVar5 = func_743(iVar0, 1);
							if (func_824(iVar5, 8))
							{
							}
							else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
							{
							}
							else if (func_824(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
							{
							}
							else
							{
								iVar4 = func_727(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0] = &Global_1946804->f_57[iVar0];
									uParam0->f_1[iVar0]->f_1 = 0;
									if (bParam1)
									{
										func_747(iVar0, iParam2);
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
					func_757(524288);
				}
			}
		}
	}
}

void func_752(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_595(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_595(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_595(iParam0, 1)])->f_10 && iParam1));
}

void func_753(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_826(&(uParam0->f_2[iVar0]), bParam1, bParam2);
		iVar0++;
	}
	if (func_127() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_827(2, Global_26796.f_776)) || Global_1946804->f_1497 != func_776(0))
		{
			if (Global_40.f_7157[Global_40.f_7729] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729] = (&Global_40.f_7157[Global_40.f_7729] - Global_40.f_7157[Global_40.f_7729] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729] |= 4096;
				Global_1946804->f_1497 = func_776(Global_40.f_7729);
				Global_1946804->f_1378 = func_776(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_828(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_829(0, 1);
	}
}

void func_754(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_755(struct<4> Param0)
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
			if (func_830(Param0))
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
			func_831(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_754(8);
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
			if (func_830(Param0))
			{
				return;
			}
			func_831(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_754(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_603(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

void func_756(var uParam0)
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

void func_757(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

bool func_758(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_759(struct<4> Param0)
{
	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_830(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1] == Param0 && Global_1946804->f_769[iVar1]->f_2 == Param0.f_2) && Global_1946804->f_769[iVar1]->f_3 == Param0.f_3) && Global_1946804->f_769[iVar1]->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1] == 34 && func_830(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_831(Param0);
	*Global_1946804->f_769[Global_1946804->f_854] = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_754(8);
}

bool func_760()
{
	if (Global_1572887->f_12 != -1)
	{
		return false;
	}
	return Global_1347477->f_203;
}

float func_761(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

float func_762()
{
	fVar0 = func_832(13);
	iVar1 = func_833(fVar0);
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

float func_763()
{
	if (is_ped_on_mount(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_764()
{
	if (func_558())
	{
		if (_get_special_edition_core_stats_bonus_enabled())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_765()
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

float func_766()
{
	return Global_1955565->f_3;
}

void func_767(int iParam0, char* sParam1, bool bParam2)
{
	sVar0 = func_834(iParam0, 1, 0, 0);
	sVar0 = _create_var_string(2, sVar0, sParam1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[1]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[1]), bParam2);
}

void func_768(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_834(iParam0, 2, 0, 0);
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

float func_769(float fParam0, float fParam1, float fParam2)
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

bool func_770()
{
	return func_832(12) <= -99f;
}

bool func_771()
{
	return func_832(12) >= 99f;
}

int func_772()
{
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_347(iVar1) == -999503751)
		{
			if (func_835() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_773(int iParam0)
{
	if (!func_612(iParam0))
	{
		return false;
	}
	if (func_777(iParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_774(int iParam0)
{
	if (!func_612(iParam0))
	{
		return false;
	}
	if (func_777(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_775(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_612(iParam0))
	{
		return;
	}
	if (!func_774(iParam0))
	{
		func_779(iParam0, 2);
		if (bParam2)
		{
			if (!func_65(0, 0, 1))
			{
				func_530(1, 4);
			}
		}
		if ((!func_778() && !bParam1) && !func_65(0, 0, 1))
		{
			func_197(_create_var_string(10, "OUT_JOURN_ADD", func_836(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_776(int iParam0)
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

bool func_777(int iParam0, int iParam1)
{
	if (!func_612(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0] && iParam1) != 0;
}

bool func_778()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

void func_779(int iParam0, int iParam1)
{
	if (!func_612(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0] = (Global_40.f_7157[iParam0] || iParam1);
}

int func_780(int iParam0, bool bParam1)
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

void func_781(int iParam0, bool bParam1)
{
	iVar0 = func_837(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_346(50);
			}
			else
			{
				func_346(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_346(51);
			}
			else
			{
				func_346(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_838(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_378();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_378();
			}
			break;
		case 3:
			func_346(24);
			if (bParam1)
			{
				if (!func_838(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_378();
				}
			}
			break;
	}
}

void func_782(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_839(0))
			{
				iVar0++;
			}
			if (func_839(2))
			{
				iVar0++;
			}
			if (func_839(4))
			{
				iVar0++;
			}
			if (!func_840(16))
			{
				if (iVar0 == 1)
				{
					func_841();
					func_334(456, 1);
					func_842(16);
				}
			}
			if (!func_840(32))
			{
				if (iVar0 >= 3)
				{
					func_841();
					func_334(456, 1);
					func_842(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_839(1))
			{
				iVar0++;
			}
			if (func_839(3))
			{
				iVar0++;
			}
			if (func_839(7))
			{
				iVar0++;
			}
			if (!func_840(1))
			{
				if (iVar0 == 1)
				{
					func_843();
					func_334(457, 1);
					func_842(1);
				}
			}
			if (!func_840(2))
			{
				if (iVar0 >= 3)
				{
					func_843();
					func_334(457, 1);
					func_842(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_839(5))
			{
				iVar0++;
			}
			if (func_839(6))
			{
				iVar0++;
			}
			if (func_839(8))
			{
				iVar0++;
			}
			if (!func_840(4))
			{
				if (iVar0 == 1)
				{
					func_844();
					func_334(455, 1);
					func_842(4);
				}
			}
			if (!func_840(8))
			{
				if (iVar0 >= 3)
				{
					func_844();
					func_334(455, 1);
					func_842(8);
				}
			}
			break;
	}
}

void func_783(var uParam0)
{
	func_619(uParam0, 143479330);
	if (Global_1946804->f_1 == 2026485318)
	{
		func_619(uParam0, 617531372);
	}
	else
	{
		func_619(uParam0, 291123060);
	}
}

void func_784(var uParam0, int iParam1, struct<14> Param2)
{
	if (!func_845(uParam0))
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

bool func_785(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> func_786()
{
	return Var0;
}

bool func_787()
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

int func_788(int iParam0)
{
	iVar0 = func_633(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_846(iVar0);
}

int func_789(int iParam0, int iParam1)
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
			func_847(iVar2);
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

void func_790()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

int func_791(int iParam0, int iParam1)
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

int func_792(int iParam0)
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

void func_793(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && iParam0));
}

void func_794(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || iParam0);
}

void func_795(int iParam0, int iParam1)
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
			func_848((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_848(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_187(&(Global_1898164->f_1[0])))
	{
		func_505(&(Global_1898164->f_1[0]), 3);
	}
}

int func_796(int iParam0)
{
	return shift_right(iParam0, 15) & 16383;
}

int func_797(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_583(iVar9);
	iVar2 = func_583(iVar10);
	iVar3 = func_583(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_583(iVar12);
	}
	iVar5 = func_584(iVar9);
	iVar6 = func_584(iVar10);
	iVar7 = func_584(iVar11);
	if (iParam2 != 2)
	{
		iVar8 = func_584(iVar12);
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

float func_798(int iParam0)
{
	iVar4 = func_678(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = &Global_40.f_11095.f_11[iVar4];
			iVar5 = func_799(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_849(iVar6) - func_849(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1f;
}

int func_799(float fParam0)
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

int func_800(int iParam0)
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

int func_801(int iParam0)
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

int func_802(float fParam0, float fParam1)
{
	iVar0 = func_799(fParam0);
	fVar1 = to_float(func_849(iVar0));
	fVar2 = to_float(func_849(iVar0 + 1));
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

int func_803(int iParam0)
{
	if (func_850(iParam0, &iVar0))
	{
		return func_849(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_851())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_851())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_851())
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

int func_804(int iParam0)
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

void func_805(int iParam0, int iParam1, int iParam2)
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
	iVar3 = (iVar3 + func_852(iParam0));
	sVar4 = func_854(func_853(iVar3, iParam2));
	sVar6 = func_855(iParam0);
	if (!is_string_null_or_empty(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = _create_var_string(10, sVar0, func_856(iParam0));
	iVar8 = func_857(iParam0);
	iVar9 = get_hash_key(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = iVar8;
		Var10.f_4 = 1;
		Var10.f_5 = func_858(iParam0);
		_uilog_post_notification(&Var10);
	}
	func_543(sVar7, sVar1, iVar8, iVar9, -479097442, "INPUT_FEED_INTERACT_GENERIC", func_859(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_806(int iParam0, int iParam1)
{
	Global_1347477->f_9[iParam0] = (get_game_timer() + iParam1);
}

bool func_807(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_808(int iParam0)
{
	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

bool func_809(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_810(int iParam0)
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

int func_811(int iParam0)
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

int func_812(int iParam0)
{
	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_860(&iVar0, 0, iVar95, &Var1) && !func_860(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (is_model_a_ped(Var1))
		{
			func_861(iVar0, &Var1);
			if (func_120(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

void func_813()
{
	if (!_0x7c7e4ab748ea3b07())
	{
		return;
	}
	iVar0 = 29;
	func_862(Global_35, &iVar0);
	Var30 = { func_631(0) };
	_0xe36d4a38d28d9cfb(0);
	_0xc04f47d488ef9eba(5, 1, &Var30, 0);
	_0x5d6182f3bce1333b(5, -142743235);
	func_863(0);
	func_864(7);
	func_865(-1623728698, 1, 1, 0);
	if (func_614() == 1160113249)
	{
		func_865(-763730846, 1, 1, 1);
		func_865(-361635024, 1, 1, 1);
	}
	func_866(Global_35, &iVar0);
}

int func_814(int iParam0)
{
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_594(iVar0);
}

int func_815(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = func_253(0);
	}
	if (!_0x112bca290d2eb53c(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_487(&uVar6, iVar0);
	func_488(&uVar6, iVar1);
	func_489(&uVar6, iVar2);
	func_490(&uVar6, iVar3);
	func_491(&uVar6, iVar4);
	func_492(&uVar6, iVar5);
	return uVar6;
}

void func_816(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_421(1356759001) };
	stat_id_set_int(&Var0, iParam0, true);
}

void func_817(var uParam0, int iParam1)
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
			if ((func_867(uParam0->f_2[iVar0], 2) || &uParam0->f_2[iVar0] == iParam1) || &uParam0->f_2[iVar0] == 39)
			{
				*uParam0->f_2[iVar0] = { Var2 };
			}
			else
			{
				if (func_867(uParam0->f_2[iVar0], 1))
				{
					func_868(uParam0->f_2[iVar0], 2, 6);
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

void func_818(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_869(uParam0, 1))
	{
		func_870(uParam0, 1);
	}
	uParam0->f_2[*uParam0]->f_1 = iParam2;
	uParam0->f_2[*uParam0] = iParam1;
	*uParam0++;
}

bool func_819(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

void func_820(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_747(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_747(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2]->f_1 == -1333118809 || uParam0->f_1[iVar2]->f_1 == -1158926300)
	{
		uParam0->f_1[iVar2]->f_1 = 1155669136;
		if (bParam3)
		{
			func_747(iVar2, iVar0);
		}
	}
}

int func_821(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_614();
	}
	iVar0 = 0;
	if (iParam0 == 24043185)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_822(int iParam0, int iParam1, int iParam2, bool bParam3)
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

bool func_823(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

bool func_824(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_595(iParam0, 1)])->f_10 && iParam1) != 0;
}

int func_825(var uParam0)
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

void func_826(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*Global_1946804->f_1497.f_1[iParam0] = { *Global_1946804->f_1378.f_1[iParam0] };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_127() == -1)
	{
		func_871(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_26796.f_776);
	}
	else
	{
		func_872(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

bool func_827(int iParam0, int iParam1)
{
	if (func_127() == -1)
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

void func_828(int iParam0, bool bParam1, int iParam2)
{
	func_873(&(Global_1946804->f_1378), iParam0);
	func_874(2, iParam0, 6);
	if (bParam1)
	{
		func_829(0, 1);
	}
}

void func_829(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_875(0);
	}
	if (bParam0)
	{
		func_754(8);
		func_754(512);
	}
	else
	{
		func_754(8);
		func_754(16);
	}
}

bool func_830(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_831(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

float func_832(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

int func_833(float fParam0)
{
	return round(((fParam0 / 100f) * to_float(10)));
}

char* func_834(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_626(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_626(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

int func_835()
{
	return Global_1946804->f_1497;
}

char* func_836(int iParam0)
{
	iVar0 = func_776(iParam0);
	if (iVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_708(iVar0);
}

int func_837(int iParam0)
{
	if (func_876(iParam0))
	{
		iVar0 = 0;
	}
	else if (func_877(iParam0))
	{
		iVar0 = 1;
	}
	else if (func_878(iParam0))
	{
		iVar0 = 2;
	}
	else if (func_879(iParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

bool func_838(int iParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_19(func_880(iVar0, iParam0), 1, 0))
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

bool func_839(int iParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_19(func_881(iVar0, iParam0), 1, 0))
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

bool func_840(int iParam0)
{
	return (Global_40.f_12003 && iParam0) != 0;
}

void func_841()
{
	if (func_127() != -1)
	{
		return;
	}
	func_397(1654063339, 1, 752097756);
	iVar0 = func_681(1);
	func_805(1, iVar0, 0);
}

void func_842(int iParam0)
{
	Global_40.f_12003 = (Global_40.f_12003 || iParam0);
}

void func_843()
{
	if (func_127() != -1)
	{
		return;
	}
	func_397(1623931083, 1, 752097756);
	iVar0 = func_681(2);
	func_805(2, iVar0, 0);
}

void func_844()
{
	if (func_127() != -1)
	{
		return;
	}
	func_397(-1845241476, 1, 752097756);
	iVar0 = func_681(0);
	func_805(0, iVar0, 0);
}

bool func_845(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_846(int iParam0)
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

int func_847(int iParam0)
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

void func_848(int iParam0, int iParam1)
{
	Var0 = { *Global_1898164->f_1[iParam0] };
	*Global_1898164->f_1[iParam0] = { *Global_1898164->f_1[iParam1] };
	*Global_1898164->f_1[iParam1] = { Var0 };
}

int func_849(int iParam0)
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

bool func_850(int iParam0, int iParam1)
{
	return false;
}

bool func_851()
{
	return false;
}

int func_852(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return _0xe787f05dfc977bde(func_253(0), -1845241476, 0);
		case 1:
			return _0xe787f05dfc977bde(func_253(0), 1654063339, 0);
		case 2:
			return _0xe787f05dfc977bde(func_253(0), 1623931083, 0);
	}
	return 0;
}

struct<4> func_853(int iParam0, int iParam1)
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

char* func_854(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

char* func_855(int iParam0)
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

char* func_856(int iParam0)
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

int func_857(int iParam0)
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

int func_858(int iParam0)
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

int func_859(int iParam0)
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

bool func_860(int iParam0, int iParam1, int iParam2, var uParam3)
{
	if (func_882(iParam1) && !func_883(iParam1))
	{
		iVar0 = func_884(iParam1);
	}
	else
	{
		return false;
	}
	func_885(uParam3);
	iVar5 = func_886(iParam2);
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

void func_861(int iParam0, int iParam1)
{
	iVar0 = get_ped_index_from_entity_index(iParam0);
	if (does_entity_exist(iVar0))
	{
		func_887(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_888(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

void func_862(int iParam0, int* iParam1)
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
		if (func_111(iVar31))
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

void func_863(bool bParam0)
{
	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_120(iVar1, 0))
		{
			func_889(iVar1, 0, bParam0);
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

void func_864(int iParam0)
{
	Global_1946804->f_2657.f_26.f_2 = 3;
	Global_1946804->f_2657.f_26.f_1 = 3;
	Global_1946804->f_2657.f_26 = 3;
	if (func_127() == -1)
	{
		func_890(352481484);
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
		if (func_347(iVar2) != -999503751)
		{
			func_891(&(Global_1946804->f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_892(iVar2, 0))
		{
			func_893(iVar2, &Global_1946804->f_1497.f_1[iVar1] == &Global_1946804->f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_865(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_894(iParam0))
	{
		return;
	}
	iVar0 = func_347(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_895(iParam0, &(Global_1946804->f_2657.f_21), Global_1946804->f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_895(iParam0, &(Global_1946804->f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_895(iParam0, &(Global_1946804->f_2657.f_20), Global_1946804->f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_895(iParam0, &(Global_1946804->f_2657.f_22), Global_1946804->f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_895(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_895(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_896(0))
	{
		func_897(iParam0, 1);
		if (func_614() == 1160113249)
		{
			func_897(func_896(-2125499975), 0);
		}
		else
		{
			func_897(func_896(1160113249), 0);
		}
	}
	func_898();
	if (func_899(iVar0))
	{
		_0x766315a564594401(func_253(0), iParam0, 0);
	}
	func_893(iParam0, bParam3);
	if (bParam2)
	{
		func_829(0, 0);
	}
}

void func_866(int iParam0, int iParam1)
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
				if (func_405(iParam1[iVar0]))
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

bool func_867(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_868(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_869(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_870(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_871(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_872(var uParam0, int iParam1, int iParam2)
{
	*Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_873(var uParam0, int iParam1)
{
	if (func_127() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1]->f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_871(uParam0->f_1[iVar0], iVar0, iParam1);
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
		func_872(uParam0->f_1[iVar0], iVar0, iParam1);
		iVar0++;
	}
}

void func_874(int iParam0, int iParam1, int iParam2)
{
	if (func_127() == -1)
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

void func_875(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

bool func_876(int iParam0)
{
	if (!func_120(iParam0, 0))
	{
		return false;
	}
	if (func_344(iParam0, -1066545920))
	{
		return true;
	}
	return false;
}

bool func_877(int iParam0)
{
	if (!func_120(iParam0, 0))
	{
		return false;
	}
	if (func_344(iParam0, -284267618))
	{
		return true;
	}
	return false;
}

bool func_878(int iParam0)
{
	if (!func_120(iParam0, 0))
	{
		return false;
	}
	if (func_344(iParam0, 363491182))
	{
		return true;
	}
	return false;
}

bool func_879(int iParam0)
{
	if (!func_120(iParam0, 0))
	{
		return false;
	}
	if (func_344(iParam0, 1406113494))
	{
		return true;
	}
	return false;
}

int func_880(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_900(iParam0);
		case 1:
			return func_901(iParam0);
		case 2:
			return func_902(iParam0);
		case 3:
			return func_903(iParam0);
	}
	return 0;
}

int func_881(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_904(iParam0);
		case 1:
			return func_905(iParam0);
		case 2:
			return func_906(iParam0);
		case 3:
			return func_907(iParam0);
		case 4:
			return func_908(iParam0);
		case 5:
			return func_909(iParam0);
		case 6:
			return func_910(iParam0);
		case 7:
			return func_911(iParam0);
		case 8:
			return func_912(iParam0);
	}
	return 0;
}

bool func_882(int iParam0)
{
	iParam0 = func_913(iParam0);
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

bool func_883(int iParam0)
{
	iParam0 = func_913(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_882(iParam0))
	{
		return false;
	}
	iVar0 = func_884(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

int func_884(int iParam0)
{
	iParam0 = func_913(iParam0);
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

void func_885(var uParam0)
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

int func_886(int iParam0)
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

void func_887(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
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

bool func_888(var uParam0, int iParam1, int iParam2, int iParam3)
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

void func_889(int iParam0, bool bParam1, bool bParam2)
{
	switch (func_347(iParam0))
	{
		case -2061583405:
			bVar0 = func_914(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_914(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_914(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_914(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_914(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_914(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_898();
	}
	if (bParam1)
	{
		func_829(0, 0);
	}
}

void func_890(int iParam0)
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
	Var2 = { func_430(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (func_433(&Var2, &iVar0, &iVar1, 0))
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
		func_251(iVar0);
	}
}

void func_891(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_915(iParam2, *uParam0);
	func_916(uParam0->f_1[*uParam0], iParam1, -1, 1, 0);
	*uParam0++;
}

bool func_892(int iParam0, int iParam1)
{
	Var0 = { func_521(iParam0, 0, 0) };
	Var5 = { func_552(iParam0, Var0, Var0.f_4, 0) };
	if (func_677(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return false;
	}
	_0x9a113c660aea3832(func_253(0), &Var5, iParam1);
	return true;
}

void func_893(int iParam0, bool bParam1)
{
	Var0 = { func_521(iParam0, 0, 0) };
	Var5 = { func_552(iParam0, Var0, Var0.f_4, 0) };
	if (func_677(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	_0x65a5f70f4a292ebe(func_253(0), &Var5, bParam1);
}

bool func_894(int iParam0)
{
	if (func_127() == -1)
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

int func_895(int iParam0, var uParam1, int iParam2, bool bParam3)
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
	if (func_917(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_892(iParam0, 0))
	{
		return 0;
	}
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = iVar1;
	if (func_347(iParam0) != -999503751)
	{
		func_891(&(Global_1946804->f_2657.f_26.f_26), iParam0, Global_1946804->f_2657.f_19);
	}
	Global_1946804->f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_896(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_614();
	}
	if (iParam0 == 1160113249)
	{
		return -763730846;
	}
	return -1535516064;
}

int func_897(int iParam0, int iParam1)
{
	Var0 = { func_521(iParam0, 0, 0) };
	Var5 = { func_552(iParam0, Var0, Var0.f_4, 0) };
	if (func_677(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	_0x0349404a22736740(iParam1, func_253(0), &Var5);
	return 1;
}

void func_898()
{
	if (func_127() == -1)
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

bool func_899(int iParam0)
{
	return func_918(func_792(iParam0));
}

int func_900(int iParam0)
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

int func_901(int iParam0)
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

int func_902(int iParam0)
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

int func_903(int iParam0)
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

int func_904(int iParam0)
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

int func_905(int iParam0)
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

int func_906(int iParam0)
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

int func_907(int iParam0)
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

int func_908(int iParam0)
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

int func_909(int iParam0)
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

int func_910(int iParam0)
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

int func_911(int iParam0)
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

int func_912(int iParam0)
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

int func_913(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_914(int iParam0, var uParam1)
{
	iVar1 = iParam0;
	if (!func_917(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_347(iParam0) != -999503751)
		{
			func_919(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_347(iParam0) != -999503751)
	{
		func_919(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_892(iParam0, 1);
	return 1;
}

void func_915(int iParam0, var uParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_916(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (_0x93ffd92f05ec32fd(uParam0->f_3.f_1))
	{
		func_920(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_595(func_724(iParam1), 1);
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
		func_921(uParam0);
	}
}

bool func_917(int iParam0, int iParam1)
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

bool func_918(int iParam0)
{
	return (Global_1946804->f_2657.f_26.f_6 && iParam0) != 0;
}

void func_919(var uParam0, int iParam1, int iParam2)
{
	iVar1 = func_922(iParam1);
	func_923(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_924(&(uParam0->f_26), iVar1);
		if (func_925(uParam0->f_26, &iVar0))
		{
			func_926(iVar0, iVar1);
		}
	}
}

void func_920(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_927(&(uParam0->f_3));
}

void func_921(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_928(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

int func_922(int iParam0)
{
	return &(Global_1946804->f_2657.f_26.f_7[iParam0]);
}

void func_923(int iParam0, int iParam1)
{
	uVar0 = &Global_1946804->f_2657.f_26.f_7[iParam0];
	Global_1946804->f_2657.f_26.f_7[iParam0] = &Global_1946804->f_2657.f_26.f_7[iParam1];
	Global_1946804->f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_924(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - 1);
	func_920(uParam0->f_1[iParam1]);
	*uParam0->f_1[iParam1] = { *uParam0->f_1[*uParam0] };
}

bool func_925(int iParam0, int iParam1)
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

void func_926(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_927(var uParam0)
{
	if (*uParam0 && _0x93ffd92f05ec32fd(uParam0->f_1))
	{
		_0x13e7320c762f0477(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_928(var uParam0, var uParam1, var uParam2)
{
	iVar0 = func_929(func_614());
	if (*uParam0)
	{
		func_927(uParam0);
	}
	uParam0->f_1 = _0xf6d9e1f3560cbf8e(iVar0, uParam1, 0, func_127() != -1, uParam2);
	*uParam0 = 1;
}

int func_929(int iParam0)
{
	if (func_127() == -1)
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

