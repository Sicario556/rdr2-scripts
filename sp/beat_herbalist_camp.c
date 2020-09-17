void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_774 = -1;
	if (has_force_cleanup_occurred(523))
	{
		func_1();
	}
	func_2(&Local_14, 1);
	func_3(&Local_14, &uScriptParam_0);
	if (!func_4(&uScriptParam_0, &iVar0))
	{
		func_1();
	}
	while (true)
	{
		switch (iVar0)
		{
			case 1:
				if (func_5(&uScriptParam_0, &iVar0))
				{
					if (Local_14.f_160)
					{
						func_1();
					}
				}
				break;
			case 0:
				if (func_6(&iVar0))
				{
					if (Local_14.f_160)
					{
						func_1();
					}
				}
				break;
			case 3:
				if (func_7(&iVar0))
				{
					if (Local_14.f_160)
					{
						func_1();
					}
				}
				break;
			case 4:
				if (func_8())
				{
					func_1();
				}
				break;
		}
		func_11(&(Local_208.f_477), func_9(&Local_14), func_10(&Local_14));
		wait(Local_14.f_158);
	}
	func_1();
}

void func_1()
{
	uVar2 = 1;
	uVar0[0] = Local_208.f_7;
	func_12(&Local_208, &Local_14, 0);
	if (func_13(&Local_208, 12))
	{
		if (!func_13(&Local_208, 15))
		{
			if (!func_14(Global_35, func_9(&Local_14), 45f, 1, 1))
			{
				func_15();
				Local_14.f_44 = 1;
			}
		}
	}
	if (!Local_14.f_44)
	{
		if (func_13(&Local_208, 12) || func_13(&Local_208, 15))
		{
			Local_14.f_44 = 1;
			if (func_16() && !func_17(5))
			{
				func_18();
			}
		}
	}
	func_19();
	func_20(&Local_208);
	func_21(&Local_208);
	func_22(&Local_208);
	func_23(&Local_208);
	func_25(&Local_14, &uVar0, &uVar2, Local_208.f_2, uVar772, func_24(&Local_14), 0, 1, 0, 1);
	func_26();
}

void func_2(var uParam0, bool bParam1)
{
	func_27(&(uParam0->f_5));
	if (uParam0->f_161)
	{
		func_28("BEAT_LAUNCHED", 4000, 0, 1, 0, 0, -1, -1, 0);
	}
	allow_sonar_blips(bParam1);
}

void func_3(var uParam0, var uParam1)
{
	uParam0->f_3 = func_29(uParam1);
	uParam0->f_161 = func_30(uParam1->f_2, 2);
}

bool func_4(var uParam0, int iParam1)
{
	func_31(&(Local_208.f_2), &uVar0);
	func_32(&(Local_14.f_5), 1);
	*iParam1 = 1;
	return true;
}

bool func_5(var uParam0, int iParam1)
{
	if (func_33(&Local_14, uParam0, 0, 0, 0, 1, 0, 1))
	{
		func_34(&Local_14, &iLocal_774, &(Local_14.f_51.f_4));
		func_36(&Local_14, iVar770, 4346);
		if (!func_37(iVar770, &Local_208, &(Local_208.f_2)))
		{
			Local_14.f_160 = 1;
			return true;
		}
		*iParam1 = 0;
		func_38(&Local_208, &Local_14);
		func_39(&uLocal_745);
		return true;
	}
	return Local_14.f_160;
}

bool func_6(int iParam0)
{
	switch (iVar772)
	{
		case 0:
			if (func_40(&Local_14))
			{
				func_41(&(Local_208.f_20), iVar771);
				func_42(Local_208.f_20.f_1);
				func_43(&(Local_208.f_434), iVar771, func_24(&Local_14), 0);
				Local_208.f_240 = func_44(&Local_208);
				iLocal_773 = 1983582225;
				request_model(func_45(Local_208.f_240), false);
				iLocal_775 = 1;
			}
			break;
		case 1:
			if (!func_46(iVar770, 0))
			{
				return false;
			}
			if (!func_47(&(Local_208.f_20)))
			{
				return false;
			}
			if (!func_48(Local_208))
			{
				return false;
			}
			if (!func_49(2054734837))
			{
				return false;
			}
			if (!func_50(Local_208))
			{
				return false;
			}
			if (!func_51(&Local_208))
			{
				return false;
			}
			if (!func_52(&(Local_208.f_434)))
			{
				return false;
			}
			if (!has_model_loaded(func_45(Local_208.f_240)))
			{
				return false;
			}
			if (func_53(Local_208, &uLocal_776, &(Local_208.f_112), &(Local_208.f_133), &(Local_208.f_154), &(Local_208.f_175)))
			{
				*iParam0 = 3;
				return true;
			}
			break;
	}
	return false;
}

bool func_7(int iParam0)
{
	Var0 = { func_54(3) };
	switch (iVar774)
	{
		case 0:
			if (func_55(&(Local_208.f_85), func_9(&Local_14), func_10(&Local_14), uVar770))
			{
				func_56(&(Local_208.f_90), Local_208, Local_208.f_85);
				iLocal_777 = 3;
			}
			break;
		case 3:
			if (does_entity_exist(&(Local_208.f_90[2])))
			{
				func_57(&(Local_208.f_90), Local_208, func_9(&Local_14), func_10(&Local_14), &(Local_208.f_90[2]), 1);
				func_58(Local_208.f_85, 883569961, &(Local_208.f_111), 0, 0);
				if (func_59(&Local_208) == 19)
				{
					Local_208.f_90[8] = create_object(1451433354, func_9(&Local_14), true, true, false, false, true);
					attach_entity_to_entity(&(Local_208.f_90[8]), Local_208.f_111, 0, -0.075f, 0.225f, 0.85f, 0f, 102f, 0.85f, false, false, false, false, 2, true, false, false);
				}
				else if (func_59(&Local_208) == 18)
				{
					Local_208.f_90[6] = create_object(-1191803341, func_9(&Local_14), true, true, false, false, true);
					attach_entity_to_entity(&(Local_208.f_90[6]), Local_208.f_111, 0, -0.075f, 0.225f, 0.85f, 0f, 102f, 0.85f, false, false, false, false, 2, true, false, false);
				}
				if (does_entity_exist(&(Local_208.f_90[9])))
				{
					attach_entity_to_entity(&(Local_208.f_90[9]), &(Local_208.f_90[2]), 0, -0.4453f, -0.1099f, 0.791f, 0f, 0f, 166.8399f, false, false, false, false, 2, true, false, false);
				}
				if (does_entity_exist(&(Local_208.f_90[3])))
				{
					_set_entity_coords_and_heading(&(Local_208.f_90[3]), get_offset_from_entity_in_world_coords(&(Local_208.f_90[2]), Var0), func_60((get_entity_heading(&(Local_208.f_90[2])) + Var0.f_3.f_2)), true, false, true);
					play_entity_anim(&(Local_208.f_90[3]), "MORTAR_PESTAL_STATIC", "SCRIPT_RE@HERBALISTCAMP", 1000f, false, true, true, 0f, 0);
				}
				if (does_entity_exist(&(Local_208.f_90[4])))
				{
					set_entity_visible(&(Local_208.f_90[4]), false);
					set_entity_collision(&(Local_208.f_90[4]), false, false);
					func_61(&(Local_208.f_90[4]), 0);
				}
				if (does_entity_exist(&(Local_208.f_90[0])))
				{
					freeze_entity_position(&(Local_208.f_90[0]), true);
				}
				Local_208.f_242 = create_object(func_45(Local_208.f_240), func_9(&Local_14), true, true, false, false, true);
				set_entity_visible(Local_208.f_242, false);
				iLocal_777 = 2;
			}
			else
			{
				Local_14.f_160 = 1;
				return true;
			}
			break;
		case 2:
			if (func_40(&Local_14))
			{
				Local_208.f_7 = func_62(&(Local_208.f_20), func_9(&Local_14), func_10(&Local_14));
				if (is_entity_dead(Local_208.f_7))
				{
					Local_14.f_160 = 1;
					return true;
				}
				if (func_16() && !func_17(5))
				{
					func_63(&Local_208);
				}
				else
				{
					func_64(&Local_208);
				}
				iLocal_777 = 1;
			}
			break;
		case 1:
			func_65(&Local_208, func_9(&Local_14), func_10(&Local_14));
			set_can_climb_on_entity(&(Local_208.f_90[2]), false);
			_0x24c82ef607105faa(Local_208.f_7, 980351091);
			set_ped_config_flag(Local_208.f_7, 234, true);
			func_66(&(Local_208.f_434), Local_208.f_7, 1);
			if (func_67(&(Local_208.f_434)))
			{
				iLocal_777 = 4;
			}
			else
			{
				*iParam0 = 4;
				return true;
			}
			break;
		case 4:
			func_68(&Local_208, &Local_14, 1109393408, 1101004800);
			func_69(&Local_208, &Local_14);
			Local_208.f_532 = _create_volume_box_with_custom_name(func_9(&Local_14), 0f, 0f, -3.807318f, 2.1f, 2.043975f, 1.310691f, "m_volHerbReturn");
			Local_208.f_533 = _0x0eb78c2b156635b1(665633627, func_9(&Local_14), 0f, 0f, 0f, 1.033522f, 1.130385f, 1.487637f);
			_0x7c00cfc48a782dc0(Local_208.f_532, &(Local_208.f_90[2]), 0f, -0.9f, 0.7f, _0x18675bc914891122(Local_208.f_532), 2, 1);
			_0x7c00cfc48a782dc0(Local_208.f_533, &(Local_208.f_90[2]), 0.1f, 1.95f, 1.025f, _0x18675bc914891122(Local_208.f_532), 2, 1);
			if (Local_208.f_2 != 2)
			{
				func_70(&Local_208, 0, -1904017806, 0, 1, 1, 0);
			}
			if (does_entity_exist(Local_208.f_434.f_6))
			{
				Local_208.f_86 = _create_propset_3(1592899946, 0f, 0f, 0f, Local_208.f_434.f_6, 0f, false, 1, false);
				if (_does_propset_exist(Local_208.f_86))
				{
					_0x9587913b9e772d29(Local_208.f_434.f_6, 1);
					*iParam0 = 4;
				}
				else
				{
					Local_14.f_160 = 1;
				}
				return true;
			}
			else
			{
				Local_14.f_160 = 1;
				return true;
			}
			break;
	}
	return false;
}

bool func_8()
{
	uVar0[0] = Local_208.f_7;
	if (func_13(&Local_208, 13))
	{
		if (!func_13(&Local_208, 14))
		{
			if (!func_14(Global_35, func_9(&Local_14), 250f, 1, 1))
			{
				func_71("HRB_WARN", 10000, 0, 0, 0, 1);
				func_72(&Local_208, 14);
			}
		}
		else if (func_14(Global_35, func_9(&Local_14), 230f, 1, 1))
		{
			func_73(&Local_208, 14);
		}
		if (!func_14(Global_35, func_9(&Local_14), 280f, 1, 1))
		{
			func_74("HRB_FAIL", 7500, 0, 0, -1, -1, 0);
			return true;
		}
	}
	if (func_75(&Local_208, &Local_14, Local_208.f_2, &uLocal_745))
	{
		Local_14.f_44 = 1;
		return true;
	}
	if (!func_76(&Local_14, &uVar0, Local_208.f_2, 0, 1, 0, 1, 0))
	{
		return true;
	}
	bVar2 = func_13(&Local_208, 13);
	if (func_77(&Local_14, &uVar0, 1, 1, 0, bVar2, 1, 1, bVar2, 0, 0, 0, 0))
	{
		return true;
	}
	return false;
}

Vector3 func_9(var uParam0)
{
	return uParam0->f_51;
}

float func_10(var uParam0)
{
	return uParam0->f_51.f_3;
}

void func_11(var uParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { _get_object_offset_from_coords(vParam1, fParam4, func_78()) };
	if (!func_79(vVar0))
	{
		func_80(uParam0, vVar0, 2, -1082130432);
	}
}

void func_12(var uParam0, var uParam1, bool bParam2)
{
	if (uParam1->f_46)
	{
		func_81();
	}
	if (!bParam2)
	{
		if (_does_scenario_point_exist(uParam0->f_87))
		{
			_delete_scenario_point(uParam0->f_87);
		}
		if (_does_scenario_point_exist(uParam0->f_89))
		{
			_delete_scenario_point(uParam0->f_89);
		}
		if (_does_scenario_point_exist(uParam0->f_88))
		{
			_delete_scenario_point(uParam0->f_88);
		}
		func_82(&(uParam0->f_112));
		func_82(&(uParam0->f_133));
		if (_does_propset_exist(uParam0->f_85))
		{
			_set_propset_as_no_longer_needed(uParam0->f_85);
		}
		if (_does_propset_exist(uParam0->f_86))
		{
			_set_propset_as_no_longer_needed(uParam0->f_86);
		}
		func_20(uParam0);
		func_21(uParam0);
		func_22(uParam0);
	}
	if (!is_entity_dead(uParam0->f_7))
	{
		set_ped_config_flag(uParam0->f_7, 234, false);
	}
	else if (uParam1->f_46 && !func_13(uParam0, 1))
	{
		func_83();
	}
	if (func_13(uParam0, 24))
	{
		func_84();
	}
	if (uParam1->f_44)
	{
		func_85(40, 1, 0, 0, 12, 0, 0, 1);
	}
	if (does_entity_exist(uParam0->f_8))
	{
		func_86(uParam0->f_8, 0);
	}
	func_87(&(uParam0->f_477), 106);
}

bool func_13(int iParam0, int iParam1)
{
	if (iParam1 <= 31)
	{
		return is_bit_set(iParam0->f_3, iParam1);
	}
	else if (iParam1 <= 63)
	{
		return is_bit_set(iParam0->f_4, (iParam1 - 32));
	}
	else if (iParam1 <= 95)
	{
		return is_bit_set(iParam0->f_5, (iParam1 - 64));
	}
	return false;
}

bool func_14(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_88(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

void func_15()
{
	func_89(9);
}

bool func_16()
{
	if (func_90() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

bool func_17(int iParam0)
{
	if (iParam0 != -1)
	{
		iVar0 = func_91(0);
		return is_bit_set(iVar0, iParam0);
	}
	return false;
}

void func_18()
{
	func_89(5);
}

void func_19()
{
	_uilog_clear_cached_objective();
}

void func_20(var uParam0)
{
	if (_does_volume_exist(uParam0->f_531))
	{
		func_92(uParam0->f_531);
	}
}

void func_21(var uParam0)
{
	func_93(uParam0->f_239);
}

void func_22(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_93(&(uParam0->f_234[iVar0]));
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 11)
	{
		func_94(uParam0->f_222[iVar1], 1);
		iVar1++;
	}
}

void func_23(int iParam0)
{
	if (func_13(iParam0, 40))
	{
		func_73(iParam0, 40);
		func_95(Global_1935630, 4);
	}
}

int func_24(var uParam0)
{
	return uParam0->f_51.f_4;
}

void func_25(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (are_strings_equal(_0xf81c53561d15f330(), func_96(uParam0->f_3)))
	{
		_0x1096603b519c905f("");
	}
	if (uParam0->f_48)
	{
		stop_audio_scene("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			func_97(uParam0->f_3, 524288);
		}
	}
	if (func_98(player_ped_id(), 0, 1))
	{
		iVar1 = get_mount(Global_35);
		set_ped_config_flag(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			bVar3 = (bParam8 && decor_exist_on(uParam1[iVar0], "pedRoam_bInPedRoam"));
			if (func_98(uParam1[iVar0], 0, 0))
			{
				func_99(uParam1[iVar0], bVar3);
				if (func_100(uParam0, (*uParam1)[iVar0]))
				{
					func_101((*uParam1)[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (func_98(uParam1[iVar0], 0, 1))
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
							func_103(uParam1[iVar0], 1073741824, func_102(iVar0 < iVar2, &(uParam0->f_98[iVar0]), -1f), iVar1, 0);
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
		func_104(uParam0);
	}
	func_105(uParam0);
	if (!uParam0->f_186)
	{
		func_106(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = func_107(uParam0->f_3, uParam0->f_185);
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
		func_108(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

void func_26()
{
	terminate_this_thread();
}

void func_27(var uParam0)
{
	func_109(uParam0, 0);
	func_32(uParam0, 0);
	func_110(uParam0, 1);
	func_111(uParam0, 1);
	func_112(uParam0, 0);
	func_113(uParam0, 1);
	func_114(uParam0, 1, 1, 1);
}

var func_28(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	if (bParam2)
	{
		_0xdd1232b332cbb9e7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_115(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_116(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		_uilog_set_cached_objective(sVar0);
	}
	return func_115(sVar0, iParam1, 0, 0, 1, 1);
}

var func_29(var uParam0)
{
	return *uParam0;
}

bool func_30(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_31(var uParam0, var uParam1)
{
	*uParam1 = 0;
	if (func_117())
	{
		*uParam0 = 2;
	}
	else
	{
		*uParam0 = 1;
	}
}

void func_32(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_118(&(uParam0->f_1), 2048);
	}
	else
	{
		func_119(&(uParam0->f_1), 2048);
	}
}

bool func_33(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (bParam6 || func_120(*uParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *uParam1, &(uParam0->f_160), 1, iParam3, iParam4))
	{
		if (bParam6 || func_121(uParam0, *uParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				fVar0 = 7f;
				if (func_122(uParam0->f_3, 1))
				{
					fVar0 = 20f;
				}
				clear_area(uParam0->f_51, fVar0, 2097152);
			}
			if (iParam5 == 1)
			{
				func_123(uParam0, -1, 0, bParam7);
			}
			_0x9d16896f0dbe78a2(uParam0->f_51, 5f);
			if (bParam2)
			{
				uParam0->f_51.f_3 = func_124(uParam0->f_51);
			}
			return true;
		}
	}
	return false;
}

void func_34(var uParam0, int iParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*iParam1 = 1;
			*uParam2 = 0;
			break;
		case 1:
			*iParam1 = 4;
			*uParam2 = 0;
			break;
		case 2:
			*iParam1 = 4;
			*uParam2 = 1;
			break;
		case 3:
			*iParam1 = 6;
			*uParam2 = 0;
			break;
		case 4:
			*iParam1 = 6;
			*uParam2 = 1;
			break;
		case 5:
			*iParam1 = 9;
			*uParam2 = 0;
			break;
		case 6:
			*iParam1 = 9;
			*uParam2 = 1;
			break;
		case 7:
			*iParam1 = 10;
			*uParam2 = 0;
			break;
		case 8:
			*iParam1 = 10;
			*uParam2 = 1;
			break;
		case 9:
			*iParam1 = 11;
			*uParam2 = 0;
			break;
		case 10:
			*iParam1 = 11;
			*uParam2 = 1;
			break;
		case 11:
			*iParam1 = 11;
			*uParam2 = 2;
			break;
		case 12:
			*iParam1 = 11;
			*uParam2 = 3;
			break;
		case 13:
			*iParam1 = 12;
			*uParam2 = 0;
			break;
		case 14:
			*iParam1 = 12;
			*uParam2 = 1;
			break;
		case 15:
			*iParam1 = 12;
			*uParam2 = 2;
			break;
		case 16:
			*iParam1 = 15;
			*uParam2 = 0;
			break;
	}
}

Vector3 func_35(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 310.25f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -19.44f;
				case 1:
					return 0f, 0f, 196.56f;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -59.76f;
				case 1:
					return 0f, 0f, -39.6f;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 61.92f;
				case 1:
					return 0f, 0f, -202.32f;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 159.84f;
				case 1:
					return 0f, 0f, 126.72f;
				default:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 261.36f;
				case 1:
					return 0f, 0f, -23.76f;
				case 2:
					return 0f, 0f, 163.44f;
				case 3:
					return 0f, 0f, -174.24f;
				default:
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -295.2f;
				case 1:
					return 0f, 0f, -4.32f;
				case 2:
					return 0f, 0f, -210.96f;
				default:
					break;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 148.32f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_36(var uParam0, int iParam1, int iParam2)
{
	Stack.Push(iParam1);
	Stack.Push(uParam0->f_51.f_4);
	Call_Loc(iParam2);
	vVar0 = { StackVal, StackVal, StackVal };
	uParam0->f_51.f_3 = vVar0.z;
}

bool func_37(int iParam0, var uParam1, var uParam2)
{
	bVar0 = false;
	switch (iParam0)
	{
		case 1:
		case 6:
		case 12:
			*uParam1 = 19;
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			*uParam1 = 40;
			break;
		default:
			*uParam1 = func_125(iParam0, !bVar0, 0, 119, 0);
			break;
	}
	if ((iParam0 == 12 || iParam0 == 1) || iParam0 == 6)
	{
		*uParam1 = 19;
	}
	if (*uParam1 == 0)
	{
		return false;
	}
	if ((func_16() && *uParam1 == 43) && !bVar0)
	{
		return false;
	}
	switch (*uParam1)
	{
		case 18:
		case 19:
		case 40:
		case 43:
			if (*uParam1 != 43 && *uParam2 != 1)
			{
				*uParam2 = 1;
			}
			return true;
	}
	return false;
}

void func_38(var uParam0, var uParam1)
{
	func_126(&(uParam0->f_239), 665633627, func_9(uParam1), 0f, 0f, 0f, 5f, 5f, 5f);
}

void func_39(int iParam0)
{
	func_127(iParam0, 1);
	func_128(iParam0, 1);
	func_129(iParam0, 1);
}

bool func_40(var uParam0)
{
	iVar0 = func_130(uParam0->f_3);
	iVar1 = func_131(1);
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

void func_41(var uParam0, int iParam1)
{
	uParam0->f_1 = 207636298;
	*uParam0 = 4;
	StringCopy(&(uParam0->f_23), "HERBALIST", 64);
	uParam0->f_6 = { -0.6f, 1.95f, 0f };
	func_132(uParam0);
}

bool func_42(int iParam0)
{
	bVar0 = false;
	if (!func_133(2054734837, 262145, iParam0, -1904017806))
	{
		bVar0 = true;
	}
	if (!func_133(2054734837, 262145, iParam0, 2093245709))
	{
		bVar0 = true;
	}
	if (!func_133(2054734837, 262145, iParam0, -1189657660))
	{
		bVar0 = true;
	}
	if (!func_133(2054734837, 262161, iParam0, 494354620))
	{
		bVar0 = true;
	}
	return !bVar0;
}

void func_43(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3)
	{
		func_134(uParam0, 1, 3, 1, 3, 0);
		return;
	}
	switch (iParam1)
	{
		case 1:
			switch (iParam2)
			{
				case 0:
					func_134(uParam0, 0, 0, 0, 0, 0);
					break;
			}
			break;
		case 4:
			switch (iParam2)
			{
				case 0:
					func_134(uParam0, 0, 1, 0, 1, 2);
					break;
				case 1:
					func_134(uParam0, 1, 0, 1, 0, 0);
					break;
			}
			break;
		case 6:
			switch (iParam2)
			{
				case 0:
					func_134(uParam0, 0, 3, 0, 3, 0);
					break;
				case 1:
					func_134(uParam0, 1, 1, 1, 1, 2);
					break;
			}
			break;
		case 9:
			switch (iParam2)
			{
				case 0:
					func_134(uParam0, 0, 4, 0, 4, 2);
					break;
				case 1:
					func_134(uParam0, 0, 5, 0, 5, 0);
					break;
			}
			break;
		case 10:
			switch (iParam2)
			{
				case 0:
					func_134(uParam0, 0, 8, 0, 8, 0);
					break;
				case 1:
					func_134(uParam0, 0, 6, 0, 6, 0);
					break;
			}
			break;
		case 11:
			switch (iParam2)
			{
				case 0:
					func_134(uParam0, 0, 9, 0, 9, 0);
					break;
				case 1:
					func_134(uParam0, 0, 10, 0, 10, 2);
					break;
				case 2:
					func_134(uParam0, 0, 11, 0, 11, 0);
					break;
				case 3:
					func_134(uParam0, 0, 12, 0, 12, 2);
					break;
			}
			break;
		case 12:
			switch (iParam2)
			{
				case 0:
					func_134(uParam0, 0, 13, 0, 13, 0);
					break;
				case 1:
					func_134(uParam0, 0, 14, 0, 14, 2);
					break;
				case 2:
					func_134(uParam0, 0, 15, 0, 15, 0);
					break;
			}
			break;
		case 15:
			switch (iParam2)
			{
				case 0:
					func_134(uParam0, 1, 2, 1, 2, 2);
					break;
			}
			break;
	}
}

int func_44(int iParam0)
{
	switch (func_59(iParam0))
	{
		case 43:
			if (func_136(func_135(0), 0, 0) < 3)
			{
				return 0;
			}
			else if (func_136(func_135(3), 0, 0) < 3)
			{
				return 3;
			}
			else
			{
				return 4;
			}
			break;
		case 19:
			if (!func_137(-142033055, 1, 0) && !func_137(544037666, 1, 0))
			{
				return 1;
			}
			else if (func_136(func_135(3), 0, 0) < 3)
			{
				return 3;
			}
			else
			{
				return 4;
			}
			break;
		case 18:
			if (func_136(func_135(3), 0, 0) < 3)
			{
				return 3;
			}
			else
			{
				return 4;
			}
			break;
		case 40:
			if (!func_137(2141714005, 1, 0) && !func_137(-770894319, 1, 0))
			{
				return 2;
			}
			else if (func_136(func_135(3), 0, 0) < 3)
			{
				return 3;
			}
			else
			{
				return 4;
			}
			break;
	}
	return 3;
}

int func_45(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1230431605;
		case 1:
			return 1615856661;
		case 2:
			return 1615856661;
		case 3:
			return -1483557278;
		case 4:
			return -1483557278;
		default:
			break;
	}
	return -1483557278;
}

bool func_46(int iParam0, int iParam1)
{
	if (iParam1 == 0 || iParam1 == 1)
	{
		if (!_has_propset_loaded(iParam0))
		{
			_request_propset(iParam0);
			return false;
		}
	}
	if (iParam1 == 0 || iParam1 == 2)
	{
		if (!_has_propset_loaded(1592899946))
		{
			_request_propset(1592899946);
			return false;
		}
	}
	return true;
}

bool func_47(var uParam0)
{
	if (func_138(uParam0))
	{
		return true;
	}
	return false;
}

bool func_48(int iParam0)
{
	bVar2 = false;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		iVar1 = func_139(iVar0, iParam0);
		if (iVar1 != 0)
		{
			request_model(iVar1, false);
			if (!has_model_loaded(iVar1))
			{
				bVar2 = true;
			}
		}
		iVar0++;
	}
	return !bVar2;
}

bool func_49(int iParam0)
{
	return _has_scenario_type_loaded(iParam0, false);
}

bool func_50(int iParam0)
{
	bVar0 = false;
	if (!func_141(func_140(iParam0, 0)))
	{
		bVar0 = true;
	}
	if (!func_141(func_140(iParam0, 1)))
	{
		bVar0 = true;
	}
	if (!func_141(func_140(19, 0)))
	{
		bVar0 = true;
	}
	if (!func_141(func_140(43, 0)))
	{
		bVar0 = true;
	}
	if (!func_141(func_140(43, 1)))
	{
		bVar0 = true;
	}
	if (!func_141("SCRIPT_RE@HERBALISTCAMP"))
	{
		bVar0 = true;
	}
	if (!func_141("SCRIPT_RE@HERBALISTCAMP@SERUM_HANDOVER"))
	{
		bVar0 = true;
	}
	if (!func_141("script_common@shared_scenarios@stand@random@herbalist@stand@base"))
	{
		bVar0 = true;
	}
	if (!func_141("SCRIPT_COMMON@SHARED_SCENARIOS@STAND@RANDOM@HERBALIST@LEAN_READ@TRANSITIONS"))
	{
		bVar0 = true;
	}
	if (!func_141("SCRIPT_COMMON@SHARED_SCENARIOS@STAND@RANDOM@HERBALIST@MIX_MORTAR@TRANSITIONS"))
	{
		bVar0 = true;
	}
	if (!func_141("SCRIPT_RE@HERBALISTCAMP@PAMPHLET_HANDOVER"))
	{
		bVar0 = true;
	}
	return !bVar0;
}

bool func_51(int iParam0)
{
	iVar0 = func_45(iParam0->f_240);
	if (is_model_valid(iVar0))
	{
		if (!has_model_loaded(iVar0))
		{
			request_model(iVar0, false);
			return false;
		}
		return true;
	}
	return false;
}

bool func_52(var uParam0)
{
	bVar0 = false;
	if (*uParam0 != -1)
	{
		if (uParam0->f_1 > -1)
		{
			iVar1 = func_142(*uParam0, uParam0->f_1);
			if (is_model_valid(iVar1))
			{
				request_model(iVar1, false);
				if (!has_model_loaded(iVar1))
				{
					bVar0 = true;
				}
			}
		}
	}
	if (uParam0->f_2 != -1)
	{
		if (uParam0->f_3 > -1)
		{
			iVar1 = func_143(uParam0->f_2, uParam0->f_3);
			if (is_model_valid(iVar1))
			{
				request_model(iVar1, false);
				if (!has_model_loaded(iVar1))
				{
					bVar0 = true;
				}
			}
		}
	}
	return !bVar0;
}

bool func_53(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	switch (*uParam1)
	{
		case 0:
			if (!func_145(uParam2, iParam0, 1, func_144(iParam0, 0, 1, 2, 3)))
			{
				return false;
			}
			if (!func_149(uParam3, "script@beat@wilderness@herbalistCamp@playerScene", 27835, 27985, func_148(iParam0), 0, 0, 0, 0))
			{
				return false;
			}
			if (!func_149(uParam4, "script@beat@wilderness@herbalistcamp@directional_exchange_new", 27835, 27985, 4, 0, 0, 0, 0))
			{
				return false;
			}
			if (!func_149(uParam5, "script@beat@wilderness@herbalistcamp@forward_exchange_new", 27835, 27985, 4, 0, 0, 0, 0))
			{
				return false;
			}
			*uParam1 = 1;
			break;
		case 1:
			if (((!func_150(uParam2) || !func_150(uParam3)) || !func_150(uParam4)) || !func_150(uParam5))
			{
				return false;
			}
			return true;
	}
	return false;
}

struct<6> func_54(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			Var0 = { 6.91589f, 19.1461f, 79.96f };
			Var0.f_3 = { -0.93f, 0f, 160f };
			break;
		case 3:
			Var0 = { 28.17f, 7.71f, 79.57f };
			Var0.f_3 = { 0f, 0f, -90.18f };
			break;
		case 4:
			Var0 = { 27.64f, 21.44f, 80.51f };
			Var0.f_3 = { 130.64f, 54.88f, -167.18f };
			break;
		case 0:
			Var0 = { -31.32f, 5.31f, 81.07f };
			Var0.f_3 = { -180f, 0f, -27f };
			break;
		case 9:
			Var0 = { -54.1f, -5.7f, 79.61f };
			Var0.f_3 = { 0f, 0f, 134f };
			break;
		case 10:
			Var0 = { -49.69f, -9.25f, 79.24f };
			Var0.f_3 = { -3.4f, -0.66f, 149.02f };
			break;
		case 11:
			Var0 = { 50.71f, -7.37f, 78.39f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		case 13:
			Var0 = { 3.34f, -1.45f, -1f };
			Var0.f_3 = { 0f, 0f, 156.24f };
			break;
	}
	Var0 = { Var0 * Vector(0.01f, 0.01f, 0.01f) };
	Var0.f_3 = { Vector(Var0.f_3.f_2, 0f, 0f) * Vector(-1f, -1f, -1f) };
	return Var0;
}

bool func_55(var uParam0, vector3 vParam1, float fParam4, int iParam5)
{
	if (!_does_propset_exist(*uParam0))
	{
		*uParam0 = _create_propset(iParam5, vParam1, 0, fParam4, 1200f, false, true);
		return false;
	}
	else
	{
		return _0xf42db680a8b2a4d9(*uParam0);
	}
	return false;
}

void func_56(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!func_151(iVar0, iParam1))
		{
			if (!func_58(iParam2, func_139(iVar0, iParam1), (*uParam0)[iVar0], func_152(iVar0), -1535066799))
			{
			}
		}
		iVar0++;
	}
}

void func_57(var uParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, bool bParam7)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!does_entity_exist(uParam0[iVar0]))
		{
			if (func_151(iVar0, iParam1))
			{
				iVar7 = func_139(iVar0, iParam1);
				if (func_153(iVar0))
				{
					Var1 = { _get_object_offset_from_coords(vParam2, fParam5, func_154(iVar0)) };
					if (bParam7)
					{
						(*uParam0)[iVar0] = create_object(iVar7, Var1, true, true, false, false, true);
					}
					else
					{
						iVar8 = func_155(iVar7, 1);
						if (does_entity_exist(iVar8))
						{
							(*uParam0)[iVar0] = get_object_index_from_entity_index(iVar8);
						}
					}
					if (does_entity_exist(uParam0[iVar0]))
					{
						set_entity_heading(uParam0[iVar0], func_60((fParam5 + func_156(iVar0))));
						set_entity_as_mission_entity(uParam0[iVar0], true, true);
						func_157(uParam0[iVar0]);
					}
				}
				else
				{
					Var1 = { func_54(iVar0) };
					if (!func_79(Var1))
					{
						if (bParam7)
						{
							(*uParam0)[iVar0] = create_object_no_offset(iVar7, vParam2, true, true, false, true);
						}
						else
						{
							iVar9 = func_155(iVar7, 1);
							if (does_entity_exist(iVar9))
							{
								(*uParam0)[iVar0] = get_object_index_from_entity_index(iVar9);
							}
						}
						if (does_entity_exist(uParam0[iVar0]))
						{
							func_157(uParam0[iVar0]);
						}
						if (does_entity_exist(uParam0[iVar0]) && func_158(iVar0))
						{
							attach_entity_to_entity(uParam0[iVar0], iParam6, -1, Var1, Var1.f_3, true, true, false, false, 2, true, false, false);
							set_entity_as_mission_entity(uParam0[iVar0], true, true);
						}
					}
				}
				if (iVar0 == 19)
				{
					if (!bParam7)
					{
						(*uParam0)[iVar0] = create_object_no_offset(iVar7, vParam2, true, true, false, true);
					}
					if (does_entity_exist(uParam0[iVar0]))
					{
						set_entity_visible(uParam0[iVar0], false);
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_58(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	if (does_entity_exist(*uParam2) && is_entity_an_object(*uParam2))
	{
		return true;
	}
	if (_0xf42db680a8b2a4d9(iParam0) || _has_propset_loaded(iParam4))
	{
		iVar0 = create_itemset(false);
		iVar1 = _get_entities_from_propset(iParam0, iVar0, iParam1, false, false);
		if (iVar1 > 0)
		{
			if (iParam3 < 1 && iParam3 < iVar1)
			{
				*uParam2 = _0x18013392501ce5dc(get_indexed_item_in_itemset(0, iVar0));
			}
			else
			{
				*uParam2 = _0x18013392501ce5dc(get_indexed_item_in_itemset(iParam3, iVar0));
			}
		}
		_0x20a4bf0e09bee146(iVar0);
		clean_itemset(iVar0);
		destroy_itemset(iVar0);
		if (does_entity_exist(*uParam2))
		{
			vVar2 = { get_entity_coords(*uParam2, true, false) };
		}
		return (does_entity_exist(*uParam2) && is_entity_an_object(*uParam2));
	}
	return false;
}

int func_59(int iParam0)
{
	return *iParam0;
}

float func_60(float fParam0)
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

void func_61(int iParam0, int iParam1)
{
	func_159(iParam0, iParam1);
}

int func_62(var uParam0, vector3 vParam1, float fParam4)
{
	return func_160(uParam0->f_1, uParam0, vParam1, fParam4, 1, 0, 1, 0, 1);
}

void func_63(int iParam0)
{
	uVar1 = _0x0139637a3bff8b6d(iParam0->f_7, &uVar0);
	_0xcddd4b74660e2335(player_id(), uVar0, uVar1);
}

void func_64(int iParam0)
{
	uVar1 = _0x0139637a3bff8b6d(iParam0->f_7, &uVar0);
	_0x946d46cd6dfb9742(player_id(), uVar0, uVar1);
}

int func_65(int iParam0, var uParam1, float fParam2, var uParam3, float fParam4)
{
	if (!_does_scenario_point_exist(iParam0->f_87))
	{
		if (does_entity_exist(&(iParam0->f_90[2])))
		{
			Var0 = { func_161(iParam0) };
			iParam0->f_87 = create_scenario_point_attached_to_entity(&(iParam0->f_90[2]), 2054734837, Var0, Var0.f_3, 0, -1f, 1);
			func_162(iParam0, 0);
		}
		else
		{
			iParam0->f_90[2] = create_object(1969096843, 556.813f, 172.2274f, 133.3552f, true, true, false, false, true);
			set_entity_rotation(&(iParam0->f_90[2]), 0f, 0f, -142.76f, 2, true);
		}
	}
	if (!_does_scenario_point_exist(iParam0->f_89) && _does_scenario_point_exist(iParam0->f_87))
	{
		vVar4 = { _get_scenario_point_coords(iParam0->f_87, true) };
		fVar7 = _get_scenario_point_heading(iParam0->f_87, true);
		Var0 = { _get_object_offset_from_coords(vVar4, fVar7, -0.284f, -4.8223f, 0f) };
		Var0.f_3 = func_60((fVar7 - 18.87f));
		iParam0->f_89 = create_scenario_point(2054734837, Var0, Var0.f_3, 0, 0, 1);
	}
	if (_does_scenario_point_exist(iParam0->f_89))
	{
		if (_does_scenario_point_exist(iParam0->f_87))
		{
			_set_scenario_point_flag(iParam0->f_87, 14, true);
			_set_scenario_point_flag(iParam0->f_87, 22, true);
			_set_scenario_point_flag(iParam0->f_89, 14, true);
			_set_scenario_point_flag(iParam0->f_89, 22, true);
			return 1;
		}
	}
	return 0;
}

void func_66(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (*uParam0 != -1)
		{
			if (uParam0->f_1 > -1)
			{
				iVar0 = func_142(*uParam0, uParam0->f_1);
				if (is_model_valid(iVar0))
				{
					if (has_model_loaded(iVar0) && !does_entity_exist(uParam0->f_5))
					{
						uParam0->f_5 = func_163(*uParam0, uParam0->f_1);
						_0x931b241409216c1f(iParam1, uParam0->f_5, 0);
						set_ped_keep_task(uParam0->f_5, true);
					}
				}
			}
		}
	}
	if (uParam0->f_2 != -1)
	{
		if (uParam0->f_3 > -1)
		{
			iVar0 = func_143(uParam0->f_2, uParam0->f_3);
			if (is_model_valid(iVar0))
			{
				if (has_model_loaded(iVar0) && !does_entity_exist(uParam0->f_6))
				{
					uParam0->f_6 = func_164(uParam0->f_2, uParam0->f_3);
				}
			}
		}
	}
}

bool func_67(var uParam0)
{
	if (uParam0->f_2 != -1)
	{
		if (uParam0->f_3 > -1)
		{
			if (is_model_valid(func_143(uParam0->f_2, uParam0->f_3)))
			{
				return true;
			}
		}
	}
	return false;
}

void func_68(int iParam0, var uParam1, float fParam2, float fParam3)
{
	func_93(iParam0->f_531);
	iParam0->f_531 = _create_volume_cylinder(func_9(uParam1), 0f, 0f, 0f, fParam2, fParam2, fParam3);
	func_165(iParam0->f_531, 1);
}

void func_69(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		switch (iVar0)
		{
			case 0:
				func_166(iParam0, uParam1, iVar0, -1612834106, 1.55f, -3.1f, 0.96f, 0f, 0f, 28.075f, 6.256512f, 3.460136f, 3f);
				break;
			case 1:
				func_166(iParam0, uParam1, iVar0, -1612834106, -4.76f, -1.15f, 0.96f, 0f, 0f, 25.075f, 3.083873f, 3.275494f, 3f);
				break;
			case 2:
				func_166(iParam0, uParam1, iVar0, -1612834106, 1.56f, -2.29f, -0.11f, 0f, 0f, 25.075f, 2.312612f, 2.058657f, 2.086685f);
				break;
			case 3:
				func_166(iParam0, uParam1, iVar0, -1612834106, -2.88f, -0.27f, 0.96f, 0f, 0f, 25.075f, 1.708217f, 3.275494f, 3f);
				break;
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 11)
	{
		switch (iVar1)
		{
			case 0:
				func_167(iParam0, uParam1, iVar1, 1, 0f, 0f, 0f, 7f, 0);
				break;
			case 7:
				func_168(iParam0, iVar1, 2, 0, 0);
				break;
			case 1:
				func_167(iParam0, uParam1, iVar1, 1, 0f, 0f, 0f, 1.5f, 1);
				break;
			case 8:
				func_167(iParam0, uParam1, iVar1, 2, 0f, 0f, 0f, 2.5f, 0);
				break;
			case 9:
				func_168(iParam0, iVar1, 2, 1, 0);
				break;
			case 2:
				func_168(iParam0, iVar1, 1, 2, 1);
				break;
			case 3:
				func_168(iParam0, iVar1, 1, 3, 1);
				break;
			case 4:
				func_167(iParam0, uParam1, iVar1, 1, 2.03f, 0.67f, 0f, 1f, 1);
				break;
			case 5:
				func_167(iParam0, uParam1, iVar1, 1, 2.48f, 0.21f, 0f, 1f, 1);
				break;
			case 6:
				func_167(iParam0, uParam1, iVar1, 1, 2.89f, 0.69f, 0f, 1.25f, 1);
				break;
			case 10:
				func_167(iParam0, uParam1, iVar1, 2, 0.4f, 3.33f, 0f, 1.25f, 0);
				break;
		}
		iVar1++;
	}
}

void func_70(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, float fParam6)
{
	if (!does_entity_exist(iParam0->f_7))
	{
		return;
	}
	iParam1 = 0;
	iParam2 = -1904017806;
	if (bParam5)
	{
		if (_0x9c54041bb66bcf9e(iParam0->f_7, iParam0->f_87) || func_169(iParam0->f_7, -76381094))
		{
			return;
		}
	}
	if (!bParam3)
	{
		open_sequence_task(&iVar0);
	}
	_task_use_scenario_point(0, iParam0->f_87, func_170(iParam2), -1, !bParam4, bParam4, 0, false, 4f, false);
	iParam0->f_521 = 1;
	if (!bParam3)
	{
		func_171(iParam0->f_7, &iVar0, fParam6, fParam6, 1, 1);
	}
}

var func_71(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_72(int iParam0, int iParam1)
{
	if (iParam1 <= 31)
	{
		set_bit(&(iParam0->f_3), iParam1);
	}
	else if (iParam1 <= 63)
	{
		set_bit(&(iParam0->f_4), (iParam1 - 32));
	}
	else if (iParam1 <= 95)
	{
		set_bit(&(iParam0->f_5), (iParam1 - 64));
	}
}

void func_73(int iParam0, int iParam1)
{
	if (iParam1 <= 31)
	{
		clear_bit(&(iParam0->f_3), iParam1);
	}
	else if (iParam1 <= 63)
	{
		clear_bit(&(iParam0->f_4), (iParam1 - 32));
	}
	else if (iParam1 <= 95)
	{
		clear_bit(&(iParam0->f_5), (iParam1 - 64));
	}
}

void func_74(char* sParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	func_28(sParam0, iParam1, 0, 1, sParam2, sParam3, sParam4, sParam5, iParam6);
}

bool func_75(var uParam0, var uParam1, var uParam2, var uParam3)
{
	iVar0 = 0;
	func_172(uParam0, uParam1);
	func_173(uParam0, uParam1);
	if (uParam0->f_1 > 0)
	{
		if (func_13(uParam0, 46))
		{
			if (!func_13(uParam0, 47))
			{
				func_72(uParam0, 4);
				func_72(uParam0, 47);
				func_72(uParam0, 48);
				func_73(uParam0, 62);
				func_73(uParam0, 67);
				func_174(uParam0, 262144);
				func_23(uParam0);
				func_175(&(uParam0->f_9));
				if (func_176(uParam0->f_215, 1, 1))
				{
					func_177(&(uParam0->f_215), 1);
				}
				if (((func_13(uParam0, 12) && !func_13(uParam0, 38)) && !func_13(uParam0, 23)) && !func_13(uParam0, 15))
				{
					func_74("HRB_FAIL", 7500, 0, 0, -1, -1, 0);
					func_19();
				}
				if (_does_scenario_point_exist(uParam0->f_87))
				{
					_delete_scenario_point(uParam0->f_87);
				}
				if (_does_scenario_point_exist(uParam0->f_88))
				{
					_delete_scenario_point(uParam0->f_88);
				}
				if (_does_scenario_point_exist(uParam0->f_89))
				{
					_delete_scenario_point(uParam0->f_89);
				}
				func_72(uParam0, 65);
				func_89(6);
				func_178(4);
				uParam0->f_1 = 12;
				if (uParam0->f_523 == 7)
				{
					uParam0->f_206 = 6;
				}
			}
		}
	}
	switch (uParam0->f_1)
	{
		case 0:
			if (func_179(uParam0, uParam1, &(uParam1->f_5)))
			{
				func_180(func_9(uParam1), uParam0->f_7, &(uParam0->f_215));
				func_181(uParam0->f_7, uParam1, 0);
				func_181(&(uParam0->f_90[15]), uParam1, 0);
				func_182(uParam0, 1);
				func_72(uParam0, 67);
				func_183(uParam0->f_284.f_21[2], 1, 1);
				remove_all_ped_weapons(uParam0->f_7, true, true);
				func_184(uParam0->f_7, -618550132, 0, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
				func_39(&(uParam0->f_243));
				func_185(uParam0, 1, 1);
				if (func_186())
				{
					func_72(uParam0, 16);
				}
				if (func_13(uParam0, 1))
				{
					if (func_17(12))
					{
						func_187(uParam0, 8);
					}
				}
				_0xbb1e41dd3d3c6250(uParam0->f_7, "SpAggroFocus", 0);
				if (!is_entity_dead(uParam0->f_20.f_11))
				{
					_0x18ff3110cf47115d(uParam0->f_20.f_11, 9, 0);
				}
				if (func_13(uParam0, 1))
				{
					if (func_13(uParam0, 7))
					{
						uParam0->f_1 = 12;
					}
					else if (func_13(uParam0, 6))
					{
						uParam0->f_1 = 11;
					}
					else if (func_13(uParam0, 5) || func_188())
					{
						func_72(uParam0, 12);
						func_72(uParam0, 13);
						func_189(uParam0, 1);
						uParam0->f_196 = 7;
						uParam0->f_1 = 3;
					}
					else
					{
						uParam0->f_1 = 2;
					}
				}
				else
				{
					uParam0->f_1 = 1;
				}
				if (func_188())
				{
					func_190();
					func_72(uParam0, 32);
				}
			}
			break;
		case 1:
			func_191(uParam0);
			set_ped_can_play_ambient_anims(uParam0->f_7, false);
			if (func_192(uParam0, uParam1))
			{
				func_193(uParam0, 1, 1);
				if (!func_17(6))
				{
					uParam0->f_1 = 2;
				}
				else
				{
					func_185(uParam0, 2, 2);
					func_72(uParam0, 46);
					uParam0->f_1 = 12;
				}
			}
			else
			{
				func_194(uParam0);
			}
			break;
		case 2:
			func_191(uParam0);
			if (func_195(uParam0))
			{
				func_196(uParam0, 16);
				func_197(uParam0);
				if (func_13(uParam0, 1))
				{
					func_198();
				}
				func_72(uParam0, 67);
				uParam0->f_1 = 3;
			}
			break;
		case 3:
			if (func_199(uParam0, uParam1))
			{
				func_23(uParam0);
				func_73(uParam0, 62);
				func_73(uParam0, 67);
				uParam0->f_495 = 0;
				uParam0->f_1 = 4;
			}
			break;
		case 4:
			if (func_200(uParam0))
			{
				uParam0->f_1 = 5;
			}
			break;
		case 5:
			if (func_201(uParam0, uParam1))
			{
				func_72(uParam0, 3);
				func_196(uParam0, 16);
				func_196(uParam0, 131072);
				uParam0->f_1 = 11;
			}
			break;
		case 6:
			if (func_202(uParam0))
			{
				uParam0->f_1 = 11;
			}
			break;
		case 8:
			if (func_203(uParam0, uParam1, *uParam3))
			{
				uParam0->f_1 = 11;
			}
			break;
		case 9:
			if (func_204(uParam0))
			{
				if (!func_205(uParam0->f_7, 0) || !is_ped_fleeing(uParam0->f_7))
				{
					if (!is_entity_dead(uParam0->f_7))
					{
						if (!is_ped_in_combat(uParam0->f_7, Global_35))
						{
							if (has_entity_been_damaged_by_entity(uParam0->f_7, Global_35, 1, 1))
							{
								func_206(uParam0->f_7, Global_35, "RE_HEC_UNI_V1_AGGRO", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							else if (!is_entity_dead(uParam0->f_434.f_5) && func_207(Global_35, uParam0->f_434.f_5, 0))
							{
								func_206(uParam0->f_7, Global_35, "RE_HEC_UNI_V1_AGGRO_H", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							else
							{
								func_206(uParam0->f_7, Global_35, "RE_HEC_UNI_V1_AGGRO_B", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
						}
					}
					if (func_13(uParam0, 1))
					{
						func_72(uParam0, 2);
					}
					uParam0->f_1 = 13;
				}
			}
			break;
		case 10:
			if (!func_98(uParam0->f_7, 0, 1) || !func_208(Global_35, uParam0->f_7, 40f, 1))
			{
				return true;
			}
			break;
		case 7:
			if (func_209(uParam0))
			{
				uParam1->f_46 = 1;
				uParam1->f_50 = 1;
				uParam0->f_1 = 11;
			}
			break;
		case 11:
			if (func_210(uParam0, uParam1, uParam1->f_46))
			{
				iVar0 = 1;
			}
			break;
		case 12:
			if (func_211(uParam0))
			{
				iVar0 = 1;
			}
			break;
		case 13:
			break;
	}
	func_212(uParam0);
	func_213(uParam0);
	return iVar0;
}

bool func_76(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		func_106(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	func_214(uParam0, uParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !uParam0->f_5 & 16384 != 0)
		{
			if (uParam0->f_5.f_1 & 256 != 0)
			{
				func_215(&(uParam0->f_5));
			}
			func_119(&(uParam0->f_5), 16384);
		}
	}
	if (!uParam0->f_48 && !func_216(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_217(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_218(&(uParam0->f_121));
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
					func_219(uParam0, uParam0->f_193, 2f);
				}
			}
			break;
		case 2:
			if (!func_220(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		case 3:
			break;
	}
	if (func_122(uParam0->f_3, 128))
	{
		if ((does_entity_exist(uParam1[0]) && !is_ped_injured(uParam1[0])) && uParam0->f_3 != 49)
		{
			if (!_0xf6a8a652a6b186cd(_0xf6f5447d418daa82(uParam1[0])))
			{
				func_221(uParam0, uParam1[0]);
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

bool func_77(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, int iParam10, int iParam11, int iParam12)
{
	fVar0 = 0f;
	if (uParam0->f_1 >= 4)
	{
		if (bParam6)
		{
			if (func_222())
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
			else if (func_223(uParam0->f_3))
			{
				fVar0 = 250f;
			}
			else if (func_122(uParam0->f_3, 131072))
			{
				fVar0 = 70f;
				fVar0 = (fVar0 + 10f);
			}
			else if (func_122(uParam0->f_3, 1) && iParam12 == 0)
			{
				fVar0 = 215f;
				fVar0 = (fVar0 + 20f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 80f);
				}
			}
			else if (func_122(uParam0->f_3, 2) || iParam12 == 1)
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
			if (uParam0->f_188 < *uParam1)
			{
				if (does_entity_exist(uParam1[uParam0->f_188]))
				{
					if (Global_1935630->f_40 != uParam1[uParam0->f_188])
					{
						if ((bParam3 && !is_entity_dead(uParam1[uParam0->f_188])) || !bParam3)
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
				if (func_88(Global_36, uParam0->f_51) > fVar0)
				{
					return true;
				}
			}
			else
			{
				vVar1 = { fParam9, iParam10, iParam11 };
				if (func_88(Global_36, vVar1) > fVar0)
				{
					return true;
				}
			}
		}
	}
	if (bParam3)
	{
		if (uParam0->f_191 < *uParam1)
		{
			if (!is_entity_dead(uParam1[uParam0->f_191]))
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

Vector3 func_78()
{
	return 0f, 0.0368652f, 0f;
}

bool func_79(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_80(var uParam0, vector3 vParam1, int iParam4, int iParam5)
{
	if (func_30(uParam0->f_1, 1))
	{
		if (does_particle_fx_looped_exist(*uParam0))
		{
			if (func_30(uParam0->f_1, 16))
			{
				func_224(uParam0, vParam1, iParam4, iParam5);
			}
			else
			{
				func_225(uParam0, vParam1, iParam4, iParam5);
			}
		}
		return 1;
	}
	request_named_ptfx_asset(-458373790);
	if (has_named_ptfx_asset_loaded(-458373790))
	{
		if (!func_30(uParam0->f_1, 8))
		{
			if (!does_particle_fx_looped_exist(*uParam0))
			{
				use_particle_fx_asset("scr_distance_smoke");
				sVar0 = "scr_campfire_distance_smoke_script";
				uParam0->f_2 = func_226(get_distance_between_coords(get_gameplay_cam_coord(), vParam1, true));
				uParam0->f_3 = func_228(func_227(iParam4));
				if (uParam0->f_3 > 10f)
				{
					uParam0->f_3 = 10f;
				}
				if (uParam0->f_2 > uParam0->f_3)
				{
					uParam0->f_2 = uParam0->f_3;
				}
				uParam0->f_5 = func_229(iParam4);
				uParam0->f_5 = to_float(get_random_int_in_range(floor((uParam0->f_5 - 15f)), floor((uParam0->f_5 + 15f))));
				uParam0->f_5 = (uParam0->f_5 / 255f);
				*uParam0 = start_particle_fx_looped_at_coord(sVar0, vParam1, 0f, 0f, 0f, func_230(iParam4), false, false, false, false);
				uParam0->f_4 = get_frame_count();
				if (func_231(vParam1, 1) > (get_gameplay_cam_fov() + 15f))
				{
					_0x9ddc222d85d5af2a(*uParam0, uParam0->f_3);
					set_particle_fx_looped_alpha(*uParam0, 1f);
					set_particle_fx_looped_colour(*uParam0, uParam0->f_5, uParam0->f_5, uParam0->f_5, false);
					func_119(&(uParam0->f_1), 16);
				}
				else
				{
					_0x9ddc222d85d5af2a(*uParam0, uParam0->f_2);
					set_particle_fx_looped_alpha(*uParam0, 0f);
					set_particle_fx_looped_colour(*uParam0, uParam0->f_5, uParam0->f_5, uParam0->f_5, false);
				}
				func_119(&(uParam0->f_1), 1);
				return 1;
			}
		}
	}
	return 0;
}

void func_81()
{
	func_89(6);
}

void func_82(var uParam0)
{
	if (_does_anim_scene_exist(uParam0->f_1))
	{
		_delete_anim_scene(uParam0->f_1);
		uParam0->f_1 = -1;
	}
}

void func_83()
{
	func_89(7);
}

void func_84()
{
	func_89(8);
}

void func_85(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_232(iParam0) == 1 && bParam7)
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
	if ((bParam1 || bParam6) || func_90() != -1)
	{
		Global_17504.f_42[iParam0]->f_4 = 0;
	}
	Global_17504.f_42[iParam0]->f_4 = (Global_17504.f_42[iParam0]->f_4 + iVar0);
}

void func_86(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	if (!func_233(iParam0))
	{
		return;
	}
	iVar0 = func_234(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_235(iVar0);
	func_236(iVar0);
	iVar1 = get_id_of_this_thread();
	iVar2 = func_237(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_238(iVar0))
		{
			return;
		}
	}
	func_239(iVar0);
	set_ped_keep_task(iParam0, true);
	if (bParam1 && func_90() == -1)
	{
		if (!_0x88ad6cc10d8d35b2(iParam0))
		{
			set_entity_as_mission_entity(iParam0, true, true);
		}
	}
}

void func_87(var uParam0, int iParam1)
{
	if (does_particle_fx_looped_exist(*uParam0))
	{
		stop_particle_fx_looped(*uParam0, false);
		remove_named_ptfx_asset(-458373790);
		func_119(&(uParam0->f_1), 4);
	}
}

float func_88(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

void func_89(int iParam0)
{
	if (iParam0 != -1)
	{
		iVar0 = func_91(0);
		set_bit(&iVar0, iParam0);
		func_240(0, iVar0);
	}
}

int func_90()
{
	return Global_1572887->f_12;
}

int func_91(int iParam0)
{
	return func_241(119, iParam0);
}

void func_92(int iParam0)
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

void func_93(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_94(var uParam0, int iParam1)
{
	if (func_242(uParam0))
	{
		_0x9cf1836c03fb67a2(uParam0, iParam1);
	}
}

void func_95(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

char* func_96(int iParam0)
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

void func_97(int iParam0, int iParam1)
{
	if (!func_243(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_1 = ((*Global_1310750)[iParam0]->f_1 || iParam1);
}

bool func_98(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_244(iParam0, iParam1);
}

void func_99(int iParam0, bool bParam1)
{
	if (func_98(iParam0, 0, 1))
	{
		set_blocking_of_non_temporary_events(iParam0, false);
		func_245(iParam0, 1088421888, 0, 0);
		if (!bParam1)
		{
			set_ped_as_no_longer_needed(&iParam0);
		}
	}
}

bool func_100(var uParam0, var uParam1)
{
	if (func_122(uParam0->f_3, 16777216))
	{
		if (func_246(*uParam1) != -1 || get_entity_model(*uParam1) == 1478983280)
		{
			return true;
		}
	}
	return false;
}

void func_101(var uParam0)
{
	set_ped_config_flag(*uParam0, 6, false);
	set_ped_config_flag(*uParam0, 4, false);
	set_ped_config_flag(*uParam0, 494, true);
}

float func_102(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_103(int iParam0, int iParam1, float fParam2, int iParam3, bool bParam4)
{
	if (!Global_1935630->f_12 && (!bParam4 || func_98(iParam0, 0, 1)))
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
			fVar2 = func_102(fParam2 >= 0f, fParam2, vdist(get_entity_coords(iParam0, true, false), Global_36));
			if (fVar2 > 25f && is_entity_occluded(iParam0))
			{
				func_247(&iParam0);
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

void func_104(var uParam0)
{
	if (_does_volume_exist(uParam0->f_171))
	{
		func_92(uParam0->f_171);
		_0xa1cfb35069d23c23(uParam0->f_171);
		_0x74c2b3dc0b294102(uParam0->f_171);
	}
	if (uParam0->f_51.f_7 != 0)
	{
		destroy_tracked_point(uParam0->f_51.f_7);
		uParam0->f_51.f_7 = 0;
	}
	func_248(uParam0);
	func_249(uParam0);
	func_250(uParam0);
	if (!func_251(uParam0))
	{
		if (_0xf6a8a652a6b186cd(uParam0->f_51.f_11))
		{
			_0xfdfecc6ee4491e11(uParam0->f_51.f_11);
		}
		func_252(uParam0->f_51, 0);
	}
	if (does_blip_exist(uParam0->f_51.f_6))
	{
		remove_blip(&(uParam0->f_51.f_6));
	}
	if (uParam0->f_48)
	{
		func_253();
	}
	if (!func_254(uParam0->f_3) && !func_122(uParam0->f_3, 256))
	{
		func_85(uParam0->f_3, 1, 0, 15, 0, 0, 0, 1);
	}
	func_93(uParam0->f_173);
	func_93(uParam0->f_172);
}

void func_105(var uParam0)
{
	if (does_blip_exist(uParam0->f_181))
	{
		remove_blip(&(uParam0->f_181));
	}
}

void func_106(var uParam0, int iParam1)
{
	vVar0 = { func_9(uParam0) };
	iVar3 = func_107(uParam0->f_3, iParam1);
	uParam0->f_185 = iParam1;
	_0xca41e86545413b5b(7, 1221649453, -585414509, iVar3, vVar0);
	if (_0x01f4d242765c6b24(iVar3))
	{
		uParam0->f_186 = 1;
	}
}

int func_107(int iParam0, int iParam1)
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

void func_108(int iParam0, int iParam1, int iParam2)
{
	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_90() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	_0xd5910ecf81a2278c(iParam0, iParam1, iParam2, &vVar0);
}

void func_109(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_118(&(uParam0->f_1), 16384);
	}
	else
	{
		func_119(&(uParam0->f_1), 16384);
	}
}

void func_110(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_118(&(uParam0->f_1), 256);
	}
	else
	{
		func_119(&(uParam0->f_1), 256);
	}
}

void func_111(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_119(iParam0, 16);
	}
	else
	{
		func_118(iParam0, 67108864);
		func_118(iParam0, 16);
	}
}

void func_112(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_118(&(uParam0->f_1), 128);
	}
	else
	{
		func_119(&(uParam0->f_1), 128);
	}
}

void func_113(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_119(iParam0, 256);
	}
	else
	{
		func_118(iParam0, 256);
	}
}

void func_114(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_119(iParam0, 268435456);
	}
	else
	{
		func_118(iParam0, 268435456);
	}
	if (!bParam2)
	{
		func_119(iParam0, 1073741824);
	}
	else
	{
		func_118(iParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_119(iParam0, 536870912);
	}
	else
	{
		func_118(iParam0, 536870912);
	}
}

var func_115(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_116(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return _create_var_string(2, func_255(sParam1));
}

bool func_117()
{
	return func_17(6);
}

void func_118(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_119(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_120(int iParam0, var uParam1, bool bParam2, var uParam3, struct<7> Param4, var uParam11, bool bParam12, bool bParam13, int iParam14)
{
	if (Param4.f_6 > -1)
	{
		*uParam1 = { func_256(iParam0, Param4.f_6) };
		uParam1->f_4 = Param4.f_6;
		uParam1->f_5 = uParam1->f_4;
		func_257(iParam0, uParam1, bParam2, bParam12, 0);
		*uParam3 = 0;
		return 1;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (func_216(iParam0, 128))
			{
				if (!func_258(iParam0, &(uParam1->f_10)))
				{
					*uParam11 = 1;
					return 0;
				}
			}
			else
			{
				func_259(iParam0, &uVar1, &uVar2, &iVar0, 0);
				bVar4 = false;
				*uParam1 = { func_260(&bVar4, iParam0, uVar2, uVar1) };
				if (bVar4)
				{
					*uParam11 = 1;
					return 0;
				}
				if (func_79(*uParam1))
				{
					return func_261(uParam1, uParam3, uParam11, bParam2, 12, 1000);
				}
				uParam1->f_4 = func_262(iParam0, *uParam1);
				uParam1->f_5 = uParam1->f_4;
				if (func_30(Param4.f_2, 8))
				{
					func_257(iParam0, uParam1, 0, bParam12, 0);
					*uParam3 = 0;
					return 1;
				}
				func_263(uParam1);
			}
			*uParam3 = 0;
			uParam1->f_9 = 2;
			break;
		case 1:
			if (func_264(uParam1, uParam3, uParam11, bParam2, bParam13))
			{
				if (!bParam13 && func_265(vdist(Global_36, *uParam1), iParam0))
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
			if (func_216(iParam0, 128))
			{
				if (!func_266(uParam1, &bVar3))
				{
					if (bVar3)
					{
						return func_261(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					return 0;
				}
			}
			else
			{
				func_259(iParam0, &uVar1, &uVar2, &iVar0, 0);
				if (vdist2(*uParam1, Global_36) < to_float(iVar0))
				{
					if (!func_263(uParam1))
					{
						return func_261(uParam1, uParam3, uParam11, bParam2, 12, 1000);
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
			if (func_267(iParam0, Param4.f_1, uParam1, Param4, iParam14))
			{
				func_257(iParam0, uParam1, bParam2, bParam12, 0);
				*uParam3 = 0;
				return 1;
			}
			else
			{
				*uParam3 = 0;
				uParam1->f_9 = 5;
				return func_261(uParam1, uParam3, uParam11, bParam2, 12, 1000);
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
		func_28("BEAT_SCAN", 2000, 0, 1, 0, 0, -1, -1, 0);
	}
	if (uParam1->f_8 >= 12)
	{
		if (bParam2)
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_28("BEAT_FAIL", 4000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam11 = 1;
	}
	return 0;
}

bool func_121(var uParam0, int iParam1)
{
	if (func_122(iParam1, 256))
	{
		if (_does_volume_exist(uParam0->f_172) || func_268(iParam1, func_24(uParam0), &(uParam0->f_172)))
		{
			if (func_98(Global_35, 0, 1))
			{
				return is_entity_in_volume(Global_35, uParam0->f_172, true, 0);
			}
		}
	}
	return true;
}

bool func_122(int iParam0, int iParam1)
{
	if (!func_243(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0] && iParam1) != 0;
}

void func_123(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (uParam0->f_176)
	{
		return;
	}
	if (iParam1 != -1)
	{
		func_269(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, IntToFloat(iParam1), IntToFloat(iParam1), 5f, "Custom Sized Ambient Avoidance");
	}
	else if (func_122(uParam0->f_3, 1) && !func_122(uParam0->f_3, 32))
	{
		func_269(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 25f, 25f, 6f, "Ambient Avoidance Wilderness & No Traffic");
	}
	else if (func_122(uParam0->f_3, 2) && !func_122(uParam0->f_3, 32))
	{
		func_269(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 4f, 4f, 5f, "Ambient Avoidance Town & No Traffic");
	}
	else
	{
		return;
	}
	_0xb56d41a694e42e86(uParam0->f_171, 2228255, 262144, 0, -1, -1, uParam0->f_175);
	_0x18262cafebb5fbe1(uParam0->f_171, 0, 0, 0, -1, -1, 0);
	if (bParam3)
	{
		func_165(uParam0->f_171, 1);
	}
	if (func_122(uParam0->f_3, 1))
	{
		func_269(&(uParam0->f_174), uParam0->f_51, 0f, 0f, 0f, _0x3e2a25b2416dd67e(uParam0->f_171) * Vector(3.5f, 3.5f, 3.5f), "Predator Stay Out");
		func_270(uParam0->f_174, 0, 262144, 0, 0);
	}
	if (iParam2 == 0)
	{
	}
	else if (does_entity_exist(iParam2))
	{
		_0x7c00cfc48a782dc0(uParam0->f_171, iParam2, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
}

float func_124(vector3 vParam0)
{
	vVar0 = { Global_36 - vParam0 };
	return get_heading_from_vector_2d(vVar0.x, vVar0.y);
}

int func_125(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	iVar0[0] = 0;
	iVar0[1] = 0;
	iVar0[2] = 0;
	iVar0[3] = 0;
	switch (iParam3)
	{
		case -1:
			switch (iParam0)
			{
				case 1:
					iVar0[0] = 7;
					iVar0[1] = 20;
					iVar0[2] = 3;
					break;
				case 5:
				case 6:
				case 7:
					iVar0[0] = 38;
					iVar0[1] = 20;
					iVar0[2] = 3;
					break;
				case 12:
					iVar0[0] = 19;
					iVar0[1] = 38;
					iVar0[2] = 20;
					iVar0[3] = 3;
					break;
				case 9:
					iVar0[0] = 43;
					iVar0[1] = 23;
					iVar0[2] = 20;
					iVar0[3] = 3;
					break;
				case 4:
					iVar0[0] = 18;
					iVar0[1] = 20;
					iVar0[2] = 3;
					break;
				case 11:
					iVar0[0] = 19;
					iVar0[1] = 20;
					iVar0[2] = 3;
					break;
				case 0:
					iVar0[0] = 23;
					iVar0[1] = 20;
					iVar0[2] = 3;
					break;
				case 2:
					iVar0[0] = 23;
					iVar0[1] = 20;
					iVar0[2] = 3;
					break;
				case 3:
					iVar0[0] = 7;
					iVar0[1] = 20;
					iVar0[2] = 3;
					break;
				case 10:
					iVar0[0] = 18;
					iVar0[1] = 20;
					iVar0[2] = 3;
					break;
			}
			break;
		case 119:
			switch (iParam0)
			{
				case 1:
					iVar0[0] = 43;
					iVar0[1] = 19;
					break;
				case 5:
				case 6:
				case 7:
					iVar0[0] = 38;
					break;
				case 12:
					iVar0[0] = 19;
					iVar0[1] = 18;
					break;
				case 9:
					iVar0[0] = 43;
					break;
				case 4:
					iVar0[0] = 18;
					break;
				case 11:
					iVar0[0] = 19;
					break;
				case 10:
					iVar0[0] = 18;
					break;
			}
			break;
		case 40:
			switch (iParam0)
			{
				case 1:
					iVar0[0] = 20;
					iVar0[1] = 3;
					break;
				case 5:
				case 6:
				case 7:
					iVar0[0] = 20;
					iVar0[1] = 3;
					break;
				case 12:
					iVar0[0] = 20;
					iVar0[1] = 3;
					break;
				case 9:
					iVar0[0] = 43;
					iVar0[1] = 23;
					iVar0[2] = 20;
					iVar0[3] = 3;
					break;
				case 4:
					iVar0[0] = 20;
					iVar0[1] = 3;
					break;
				case 11:
					iVar0[0] = 20;
					iVar0[1] = 3;
					iVar0[2] = 26;
					break;
				case 0:
					iVar0[0] = 23;
					iVar0[1] = 20;
					iVar0[2] = 3;
					iVar0[3] = 26;
					break;
				case 2:
					iVar0[0] = 23;
					iVar0[1] = 20;
					iVar0[2] = 3;
					iVar0[3] = 26;
					break;
				case 3:
					iVar0[0] = 20;
					iVar0[1] = 3;
					break;
				case 10:
					iVar0[0] = 20;
					iVar0[1] = 3;
					break;
			}
			break;
	}
	if (bParam1)
	{
		iVar5 = 0;
		while (iVar5 < iVar0)
		{
			if (&iVar0[iVar5] != iParam2 && !func_271(&(iVar0[iVar5])))
			{
				return &(iVar0[iVar5]);
			}
			iVar5++;
		}
	}
	else if (bParam4)
	{
		iVar5 = 0;
		while (iVar5 < iVar0)
		{
			if (&iVar0[iVar5] != iParam2 && !func_273(func_272(&(iVar0[iVar5]))))
			{
				return &(iVar0[iVar5]);
			}
			iVar5++;
		}
	}
	else if (&iVar0[0] != iParam2)
	{
		return &(iVar0[0]);
	}
	else
	{
		return &(iVar0[1]);
	}
	return 0;
}

void func_126(var uParam0, int iParam1, vector3 vParam2, vector3 vParam5, vector3 vParam8)
{
	func_93(*uParam0);
	*uParam0 = _create_volume_by_hash(iParam1, vParam2, vParam5, vParam8);
	_0xb56d41a694e42e86(*uParam0, 0, 0, 0, -1, -1, 0);
	_0x18262cafebb5fbe1(*uParam0, 0, 0, 0, -1, -1, 0);
}

void func_127(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_119(iParam0, 512);
	}
	else
	{
		func_118(iParam0, 512);
	}
}

void func_128(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_119(iParam0, 2);
	}
	else
	{
		func_118(iParam0, 2);
	}
}

void func_129(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_119(iParam0, 8);
	}
	else
	{
		func_118(iParam0, 8);
	}
}

int func_130(int iParam0)
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

int func_131(bool bParam0)
{
	if (bParam0)
	{
		return func_274(Global_1359489->f_4);
	}
	get_group_size(func_275(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = get_ped_as_group_member(func_275(), iVar3);
		if (func_276(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

void func_132(var uParam0)
{
	func_277(&(uParam0->f_1));
	func_277(&(uParam0->f_12));
}

bool func_133(int iParam0, int iParam1, int iParam2, int iParam3)
{
	return _request_scenario_type(iParam0, iParam1, iParam2, iParam3);
}

void func_134(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_2 = iParam3;
	uParam0->f_1 = iParam2;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
}

int func_135(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1627068364;
		case 1:
			return -142033055;
		case 2:
			return 2141714005;
		case 3:
			return -1976480343;
		case 4:
			return -1976480343;
		default:
			break;
	}
	return 0;
}

int func_136(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_279(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_280(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_281(iParam0, 0);
	}
	iVar2 = _0xe787f05dfc977bde(func_282(bParam2), iParam0, 0);
	return iVar2;
}

bool func_137(int iParam0, int iParam1, bool bParam2)
{
	if (!func_278(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_279(iParam0);
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
		if (!func_283(iParam0, 1))
		{
			return false;
		}
	}
	return func_136(iParam0, 0, bParam2) >= iParam1;
}

bool func_138(var uParam0)
{
	if (!func_284(uParam0->f_1))
	{
		return false;
	}
	if (uParam0->f_12 != 0)
	{
		if (!func_284(uParam0->f_12))
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

int func_139(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			return 1969096843;
		case 1:
			return 1547859810;
		case 3:
			return -503626004;
		case 4:
			return 197307092;
		case 0:
			return -1947027049;
		case 9:
			return -157798026;
		case 10:
			return -157798026;
		case 11:
			return -167778705;
		case 5:
			return -1843616050;
		case 12:
			return -941414360;
		case 14:
			return -1907186363;
		case 15:
			return 1321843639;
		case 16:
			return 1872659725;
		case 17:
			return 1174781578;
		case 18:
			return -189418434;
		case 6:
			return 0;
		case 8:
			return 0;
		case 7:
			return 0;
		case 19:
			switch (iParam1)
			{
				case 43:
					return -1843616050;
				case 19:
					return 1451433354;
				case 18:
					return -1191803341;
				case 40:
					return -99531449;
				default:
					break;
			}
			break;
	}
	return 0;
}

char* func_140(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 43:
			return func_285(bParam1, "SCRIPT_RE@HERBALISTCAMP@YARROW_RETURN", "SCRIPT_RE@HERBALISTCAMP@YARROW_INTRO");
		case 19:
			return func_285(bParam1, "SCRIPT_RE@HERBALISTCAMP@HBSASGE_RETURN", "SCRIPT_RE@HERBALISTCAMP@HBSAGE_INTRO");
		case 18:
			return func_285(bParam1, "SCRIPT_RE@HERBALISTCAMP@GCURRANT_RETURN", "SCRIPT_RE@HERBALISTCAMP@GCURRANT_INTRO");
		case 40:
			return func_285(bParam1, "SCRIPT_RE@HERBALISTCAMP@VSNOWDROP_RETURN", "SCRIPT_RE@HERBALISTCAMP@VSNOWDROP_INTRO");
		default:
			break;
	}
	return "INVALID";
}

bool func_141(char* sParam0)
{
	request_anim_dict(sParam0);
	if (!has_anim_dict_loaded(sParam0))
	{
		return false;
	}
	return true;
}

int func_142(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2130094044;
				case 1:
					return 2130094044;
				case 2:
					return 2130094044;
				case 3:
					return 2130094044;
				case 4:
					return 2130094044;
				case 5:
					return 2130094044;
				case 6:
					return 2130094044;
				case 7:
					return 2130094044;
				case 8:
					return 2130094044;
				case 9:
					return 2130094044;
				case 10:
					return 2130094044;
				case 11:
					return 2130094044;
				case 12:
					return 2130094044;
				case 13:
					return 2130094044;
				case 14:
					return 2130094044;
				case 15:
					return 2130094044;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 2130094044;
				case 1:
					return 2130094044;
				case 2:
					return 2130094044;
				case 3:
					return 2130094044;
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_143(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -1832370395;
				case 1:
					return -1832370395;
				case 2:
					return -1832370395;
				case 3:
					return -1832370395;
				case 4:
					return -1832370395;
				case 5:
					return -1832370395;
				case 6:
					return -1832370395;
				case 7:
					return -1832370395;
				case 8:
					return -1832370395;
				case 9:
					return -1832370395;
				case 10:
					return -1832370395;
				case 11:
					return -1832370395;
				case 12:
					return -1832370395;
				case 13:
					return -1832370395;
				case 14:
					return -1832370395;
				case 15:
					return -1832370395;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -1832370395;
				case 1:
					return -1832370395;
				case 2:
					return -1832370395;
				case 3:
					return -1832370395;
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_144(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 43:
			return iParam1;
		case 19:
			return iParam4;
		case 18:
			return iParam2;
		case 40:
			return iParam3;
		default:
			break;
	}
	return -1;
}

bool func_145(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	switch (iParam1)
	{
		case 43:
			break;
		case 19:
			break;
		case 18:
			break;
		case 40:
			break;
		default:
			return false;
	}
	if (bParam2)
	{
		return func_149(uParam0, func_286(iParam1), 27835, 27985, iParam3, 0, 0, 0, 0);
	}
	return func_149(uParam0, func_287(iParam1), 27835, 27985, iParam3, 0, 0, 0, 0);
}

char* func_146(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PB_PLYR_YARROW";
		case 1:
			return "PB_PLYR_GCURRANT";
		case 2:
			return "PB_PLYR_VSNOW";
		case 3:
			return "PB_PLYR_HBSAGE";
		case 4:
			return "PB_HANDOVER";
		case 5:
			return "PB_HANDOVER_PAMPHLET";
		case 6:
			return "PL_GIVE_YARROW";
		case 7:
			return "PB_MTH_ENTER_SAGE";
		case 8:
			return "PB_MTH_ENTER_CURRANT";
		case 9:
			return "PB_MTH_ENTER_SNOWDROP";
		default:
			break;
	}
	return "INVALID";
}

void func_147(var uParam0)
{
}

int func_148(int iParam0)
{
	switch (iParam0)
	{
		case 43:
			return 6;
		case 19:
			return 7;
		case 18:
			return 8;
		case 40:
			return 9;
		default:
			break;
	}
	return -1;
}

bool func_149(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, char* sParam7, bool bParam8)
{
	uParam0->f_2 = iParam4;
	uParam0->f_3 = iParam6;
	if (!is_string_null_or_empty(sParam7))
	{
		uParam0->f_1 = _create_anim_scene(sParam1, iParam5, sParam7, false, true);
	}
	else if (iParam4 != -1)
	{
		Stack.Push(sParam1);
		Stack.Push(iParam5);
		Stack.Push(iParam4);
		Call_Loc(iParam2);
		uParam0->f_1 = _create_anim_scene(StackVal, StackVal, StackVal, false, true);
	}
	else
	{
		uParam0->f_1 = _create_anim_scene(sParam1, iParam5, 0, false, true);
	}
	uParam0->f_4 = sParam1;
	uParam0->f_6 = iParam2;
	uParam0->f_5 = iParam3;
	if (_does_anim_scene_exist(uParam0->f_1))
	{
		if (!bParam8)
		{
			load_anim_scene(uParam0->f_1);
		}
		return true;
	}
	return false;
}

bool func_150(var uParam0)
{
	if (_is_anim_scene_metadata_loaded(uParam0->f_1, false) && _is_anim_scene_loaded(uParam0->f_1, true, false))
	{
		return true;
	}
	if (!_is_anim_scene_loading(uParam0->f_1, true))
	{
		load_anim_scene(uParam0->f_1);
	}
	return false;
}

bool func_151(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 9:
			return true;
		case 3:
			return true;
		case 1:
			return true;
		case 19:
			return true;
		case 4:
			return true;
		case 12:
			return false;
		case 2:
			return false;
		case 0:
			return false;
		case 10:
			return false;
		case 11:
			return false;
		case 15:
			return false;
		case 16:
			return false;
		case 17:
			return false;
		case 18:
			return false;
		default:
			break;
	}
	if (func_139(iParam0, iParam1) != 0)
	{
		return true;
	}
	return false;
}

int func_152(int iParam0)
{
	switch (iParam0)
	{
		case 18:
			return 0;
		default:
			break;
	}
	return 0;
}

bool func_153(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return true;
		case 13:
			return true;
		case 14:
			return true;
		case 5:
			return true;
		case 19:
			return true;
		default:
			break;
	}
	return false;
}

Vector3 func_154(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return -1f, 0f, 0f;
		case 13:
			return 3.34f, -1.45f, 0f;
		case 14:
			return 0f, 0f, -10f;
		case 19:
			return -1f, 1f, 0f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_155(int iParam0, bool bParam1)
{
	if (!is_itemset_valid(Global_43616))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < get_itemset_size(Global_43616))
	{
		iVar1 = _get_entity_from_item(get_indexed_item_in_itemset(iVar0, Global_43616));
		if (does_entity_exist(iVar1))
		{
			if (get_entity_model(iVar1) == iParam0)
			{
				if (!_0x88ad6cc10d8d35b2(iVar1))
				{
					set_entity_as_mission_entity(iVar1, true, true);
				}
				if (bParam1)
				{
					remove_from_itemset(get_indexed_item_in_itemset(iVar0, Global_43616), Global_43616);
				}
				return iVar1;
			}
		}
		iVar0++;
	}
	return 0;
}

float func_156(int iParam0)
{
	switch (iParam0)
	{
		case 13:
			return 156.24f;
		default:
			break;
	}
	return 0f;
}

void func_157(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (!is_itemset_valid(Global_43616))
	{
		Global_43616 = create_itemset(false);
	}
	if (!is_in_itemset(iParam0, Global_43616))
	{
		add_to_itemset(iParam0, Global_43616);
	}
}

bool func_158(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return false;
		default:
			break;
	}
	return true;
}

void func_159(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (!is_entity_a_ped(iParam0))
	{
		return;
	}
	iVar0 = get_ped_index_from_entity_index(iParam0);
	_0x6569f31a01b4c097(iVar0, 0, iParam1);
	_0x6569f31a01b4c097(iVar0, 1, iParam1);
}

int func_160(int iParam0, var uParam1, vector3 vParam2, int iParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, int iParam10)
{
	if (bParam6)
	{
		func_288(&vParam2, uParam1->f_22);
	}
	if (!bParam7 && func_289(uParam1))
	{
		iVar0 = _0xeaf682a14f8e5f53(uParam1->f_5, vParam2, iParam5, 1, 1, iParam9, iParam10);
		if (!does_entity_exist(iVar0))
		{
			iVar0 = func_290(iParam0, vParam2, iParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
		}
		else if (_is_metaped_outfit_request_valid(uParam1->f_5))
		{
			_release_metaped_outfit_request(uParam1->f_5);
		}
	}
	else
	{
		iVar0 = func_290(iParam0, vParam2, iParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
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
		if (!is_string_null_or_empty(&(uParam1->f_23)) && !func_291(iVar0))
		{
			func_292(iVar0, &(uParam1->f_23), 0);
		}
		if (func_291(iVar0))
		{
			set_animal_tuning_bool_param(iVar0, 48, true);
		}
		else
		{
			set_ped_config_flag(iVar0, 307, true);
		}
		if (func_293(&(uParam1->f_22)))
		{
			set_ped_can_ragdoll(iVar0, true);
			set_ped_to_ragdoll(iVar0, 1000, 1000, 1, false, false, false);
			set_ped_config_flag(iVar0, 186, !func_294(&(uParam1->f_22)));
			func_296(iVar0, func_295(&(uParam1->f_22)), 0);
		}
		else
		{
			request_ped_visibility_tracking(iVar0);
		}
		if (func_297(&(uParam1->f_22)))
		{
			freeze_entity_position(iVar0, true);
		}
		if (func_298(&(uParam1->f_22)))
		{
			func_299(iVar0, 1);
		}
		_0xa91e6cf94404e8c9(iVar0);
		set_ped_config_flag(iVar0, 6, func_300(&(uParam1->f_22)));
		set_ped_config_flag(iVar0, 393, true);
		if (!func_301(uParam1->f_22, 8192))
		{
			_set_entity_something(iVar0, true);
		}
		if (!func_291(iVar0))
		{
			func_303(iVar0, !func_302(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 4, func_304(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 297, !func_305(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 317, !func_305(&(uParam1->f_22)));
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

struct<4> func_161(int iParam0)
{
	Var0 = { -0.1937f, 0.7806f, 0f };
	Var0.f_3 = -178f;
	return Var0;
}

int func_162(int iParam0, bool bParam1)
{
	if (bParam1 || !func_13(iParam0, 36))
	{
		if (!_does_scenario_point_exist(iParam0->f_87))
		{
			return 0;
		}
		if (is_entity_attached(&(iParam0->f_90[3])))
		{
			detach_entity(&(iParam0->f_90[3]), false, true);
		}
		if (!_0x8360c47380b6f351(iParam0->f_87, &(iParam0->f_90[3]), "p_mortarPestle02x_PH_R_HAND", 0))
		{
			return 0;
		}
		else
		{
			func_72(iParam0, 36);
		}
	}
	return 1;
}

int func_163(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_142(iParam0, iParam1) != 0)
	{
		iVar1 = func_306(iParam0, iParam1);
		vVar2 = { func_307(iParam0, iParam1) };
		vVar5 = { func_308(iParam0, iParam1) };
		iVar8 = func_142(iParam0, iParam1);
		iVar0 = func_290(iVar8, vVar2, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		set_blocking_of_non_temporary_events(iVar0, true);
		set_entity_rotation(iVar0, vVar5, 2, true);
		freeze_entity_position(iVar0, is_bit_set(iVar1, 0));
		set_entity_collision(iVar0, !is_bit_set(iVar1, 1), false);
		set_ped_can_be_targetted(iVar0, !is_bit_set(iVar1, 2));
	}
	return iVar0;
}

int func_164(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_143(iParam0, iParam1) != 0)
	{
		iVar1 = func_309(iParam0, iParam1);
		vVar2 = { func_310(iParam0, iParam1) };
		vVar5 = { func_311(iParam0, iParam1) };
		iVar8 = func_143(iParam0, iParam1);
		iVar0 = create_object(iVar8, vVar2, true, true, false, false, true);
		set_entity_rotation(iVar0, vVar5, 2, true);
		freeze_entity_position(iVar0, is_bit_set(iVar1, 0));
		set_entity_collision(iVar0, !is_bit_set(iVar1, 1), false);
		set_object_targettable(iVar0, !is_bit_set(iVar1, 2));
	}
	return iVar0;
}

void func_165(int iParam0, int iParam1)
{
	if (func_312(iParam0))
	{
		return;
	}
	if (func_313(iParam0) == iParam1)
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

void func_166(int iParam0, var uParam1, int iParam2, int iParam3, vector3 vParam4, vector3 vParam7, vector3 vParam10)
{
	func_93(&(iParam0->f_234[iParam2]));
	vVar0 = { _get_object_offset_from_coords(func_9(uParam1), func_10(uParam1), vParam4) };
	iParam0->f_234[iParam2] = _create_volume_by_hash(iParam3, vVar0, vParam7.x, vParam7.y, func_60((vParam7.z + func_10(uParam1))), vParam10);
}

void func_167(int iParam0, var uParam1, int iParam2, int iParam3, vector3 vParam4, float fParam7, int iParam8)
{
	vVar0 = { _get_object_offset_from_coords(func_9(uParam1), func_10(uParam1), vParam4) };
	switch (iParam3)
	{
		case 0:
			func_314(iParam0->f_222[iParam2], vVar0, fParam7);
			break;
		case 1:
			func_315(iParam0->f_222[iParam2], vVar0, fParam7, 0, iParam8);
			break;
		case 2:
			func_316(iParam0->f_222[iParam2], vVar0, fParam7);
			break;
	}
}

void func_168(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (iParam3 == -1)
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			func_317(iParam0->f_222[iParam1], iParam0->f_234[iParam3], 0);
			break;
		case 1:
			func_318(iParam0->f_222[iParam1], iParam0->f_234[iParam3], bParam4, 0);
			break;
		case 2:
			func_319(iParam0->f_222[iParam1], iParam0->f_234[iParam3], 0);
			break;
	}
}

bool func_169(int iParam0, int iParam1)
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

char* func_170(int iParam0)
{
	switch (iParam0)
	{
		case -1904017806:
			return "SCRIPT_COMMON_STAND_HERBALIST";
		case 2093245709:
			return "SCRIPT_COMMON_MIX_MORTAR_HERBALIST";
		case 494354620:
			return "SCRIPT_COMMON_LEAN_READ_HERBALIST";
		case -1189657660:
			return "WORLD_HUMAN_SIT_GROUND_MALE_A";
		default:
			break;
	}
	return _get_label_text_by_hash(iParam0);
}

void func_171(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

void func_172(var uParam0, var uParam1)
{
	uParam0->f_530 = 0;
	if (func_320(uParam0->f_7, &(uParam0->f_243), &(uParam0->f_530), 0) || is_entity_touching_entity(Global_35, uParam0->f_7))
	{
		func_72(uParam0, 49);
	}
	else
	{
		func_73(uParam0, 49);
	}
	if (!uParam1->f_46)
	{
		if (func_321(uParam0, &(uParam1->f_5)))
		{
			if (func_176(uParam0->f_215, 1, 1))
			{
				func_177(&(uParam0->f_215), 1);
			}
			func_19();
			func_73(uParam0, 13);
			func_174(uParam0, 262144);
			func_73(uParam0, 67);
			func_23(uParam0);
			func_73(uParam0, 62);
			if (!uParam0->f_221)
			{
				uParam1->f_46 = 1;
				func_182(uParam0, 0);
			}
		}
		else if (uParam0->f_521)
		{
			if (!is_ped_active_in_scenario(uParam0->f_7, 0))
			{
				set_ped_capsule(uParam0->f_7, 0f);
			}
			else
			{
				uParam0->f_521 = 0;
			}
		}
	}
	set_ped_capsule(uParam0->f_7, 0f);
	if (func_13(uParam0, 26) && !is_entity_dead(uParam0->f_7))
	{
		if (func_322(Global_35, 0, 1, 0) != -1569615261 && !_is_weapon_melee(func_322(Global_35, 0, 1, 0)))
		{
			func_73(uParam0, 26);
			func_323(uParam0, 3);
			func_206(uParam0->f_7, Global_35, "RE_HEC_UNI_V1_AGGRO", 0, -1082130432, 0, 0, 0, 1, 1, 1, 1506116031, 1, 0, 0);
		}
	}
	func_325(uParam0->f_7, 0, 0, (func_13(uParam0, 35) || func_324()), func_13(uParam0, 32));
	if (uParam0->f_1 > 0)
	{
		func_326(uParam0->f_284.f_21[2]);
		uParam0->f_433 = func_327(&(uParam0->f_284), &(uParam0->f_7), func_13(uParam0, 21));
		if (!func_13(uParam0, 24))
		{
			switch (uParam0->f_433)
			{
				case 1:
					if (func_13(uParam0, 62))
					{
						func_72(uParam0, 60);
						func_72(uParam0, 38);
						func_73(uParam0, 67);
						func_328(&(uParam0->f_284), 0);
						uParam0->f_197 = 1;
						uParam0->f_198 = 3;
					}
					break;
				case 2:
					func_72(uParam0, 24);
					func_328(&(uParam0->f_284), 0);
					func_206(Global_35, uParam0->f_7, "RE_HEC_UNI_V1_VALUABLE", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_23(uParam0);
					func_182(uParam0, 0);
					uParam0->f_1 = 7;
					break;
			}
		}
	}
	func_329(uParam0, uParam1);
}

void func_173(int iParam0, var uParam1)
{
	if (func_330(iParam0, 1))
	{
		func_331(iParam0->f_7);
		if (!func_13(iParam0, 47))
		{
			func_326(iParam0->f_284.f_21[2]);
			if (!func_13(iParam0, 62))
			{
				func_326(iParam0->f_284.f_21[1]);
			}
			if (!func_13(iParam0, 63))
			{
				func_326(iParam0->f_284.f_21[0]);
			}
		}
		if (iParam0->f_433 == 0)
		{
			func_328(&(iParam0->f_284), 0);
			func_72(iParam0, 50);
			func_73(iParam0, 63);
			func_206(Global_35, iParam0->f_7, "RE_HEC_UNI_V1_DEFUSE", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			if (func_13(iParam0, 62))
			{
				func_332(&(iParam0->f_284), 1, 1);
			}
			if (func_333(&(iParam0->f_496)))
			{
				func_334(&(iParam0->f_496));
			}
			func_72(iParam0, 64);
		}
		else if (func_13(iParam0, 64))
		{
			if (is_scripted_speech_playing(Global_35))
			{
				return;
			}
		}
		switch (iParam0->f_522)
		{
			case 0:
				if (func_335(iParam0, uParam1, iParam0->f_523))
				{
					func_336(iParam0, iParam0->f_523);
					iParam0->f_522 = 1;
				}
				break;
			case 1:
				if (func_337(iParam0, uParam1, iParam0->f_523))
				{
					iParam0->f_529 = func_339(iParam0->f_523, func_338(iParam0, iParam0->f_523));
					iParam0->f_522 = 2;
				}
				break;
			case 2:
				if (func_340(iParam0, uParam1, iParam0->f_523))
				{
					func_341(&(iParam0->f_496));
					iParam0->f_522 = 3;
				}
				break;
			case 3:
				if (!func_333(&(iParam0->f_496)))
				{
					func_341(&(iParam0->f_496));
				}
				else if (func_343(&(iParam0->f_496), func_342(iParam0->f_523)) || func_344(iParam0))
				{
					if (func_345(iParam0, iParam0->f_523))
					{
						if (!func_205(iParam0->f_7, 1))
						{
							iParam0->f_529 = func_339(iParam0->f_523, func_338(iParam0, iParam0->f_523));
							if (func_333(&(iParam0->f_496)))
							{
								func_334(&(iParam0->f_496));
							}
							if (func_333(&(iParam0->f_499)))
							{
								func_334(&(iParam0->f_499));
							}
							iParam0->f_519 = 0;
							iParam0->f_524 = 0;
							iParam0->f_522 = 2;
						}
					}
					else
					{
						iParam0->f_522 = 4;
					}
				}
				break;
			case 4:
				if (func_345(iParam0, iParam0->f_523))
				{
					iParam0->f_529 = func_339(iParam0->f_523, func_338(iParam0, iParam0->f_523));
					if (func_333(&(iParam0->f_496)))
					{
						func_334(&(iParam0->f_496));
					}
					if (func_333(&(iParam0->f_499)))
					{
						func_334(&(iParam0->f_499));
					}
					if (!func_13(iParam0, 57))
					{
						if (func_322(iParam0->f_7, 0, 1, 0) == -618550132)
						{
							func_72(iParam0, 57);
						}
					}
					iParam0->f_519 = 0;
					iParam0->f_524 = 0;
					iParam0->f_522 = 2;
				}
				else if (func_344(iParam0) || func_346(iParam0, uParam1, iParam0->f_523))
				{
					if (!func_13(iParam0, 57))
					{
						if (func_322(iParam0->f_7, 0, 1, 0) == -618550132)
						{
							func_72(iParam0, 57);
						}
					}
					func_347(iParam0);
					func_348(iParam0);
					if (is_ped_using_action_mode(iParam0->f_7))
					{
						set_ped_using_action_mode(iParam0->f_7, false, -1, 0);
						set_ped_using_action_mode(iParam0->f_7, true, 4000, 0);
					}
					iParam0->f_522 = 0;
				}
				break;
		}
	}
}

void func_174(int iParam0, int iParam1)
{
	func_119(&(iParam0->f_473), iParam1);
}

void func_175(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

bool func_176(int iParam0, bool bParam1, bool bParam2)
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

void func_177(var uParam0, bool bParam1)
{
	if (*uParam0 > -1 && *uParam0 < 4)
	{
		if (*Global_1955500)[*uParam0]->f_3 == get_id_of_this_thread()
		{
			if (func_349(1, 1) == *uParam0)
			{
				func_350(-1, 1, 1);
			}
			if (bParam1)
			{
				func_93((*Global_1955500)[*uParam0]->f_1);
			}
			(*Global_1955500)[*uParam0] = 0;
			(*Global_1955500)[*uParam0]->f_2 = 0;
			(*Global_1955500)[*uParam0]->f_3 = 0;
			*uParam0 = -1;
		}
	}
}

void func_178(int iParam0)
{
	Global_17504.f_11 = iParam0;
}

bool func_179(var uParam0, var uParam1, var uParam2)
{
	if (func_324())
	{
		func_72(uParam0, 35);
	}
	func_351(uParam0);
	func_352(&(uParam0->f_284));
	if (func_13(uParam0, 1))
	{
		if (func_13(uParam0, 7))
		{
			task_wander_in_area(uParam0->f_7, func_9(uParam1), 5f, 1077936128, 1086324736, 1);
			if (func_17(0))
			{
				func_72(uParam0, 12);
				func_72(uParam0, 15);
			}
			else
			{
				func_72(uParam0, 38);
				func_72(uParam0, 23);
			}
			func_72(uParam0, 46);
		}
		else if (func_13(uParam0, 6))
		{
			func_193(uParam0, 3, 1);
			func_72(uParam0, 12);
			func_72(uParam0, 15);
		}
		else if (func_13(uParam0, 5))
		{
			func_193(uParam0, 2, 1);
			func_72(uParam0, 12);
		}
		else
		{
			task_turn_ped_to_face_entity(uParam0->f_7, Global_35, -1, -1082130432, -1082130432, -1082130432);
			func_193(uParam0, 1, 1);
		}
		func_353(uParam0, 0);
	}
	else if (func_17(6))
	{
		task_wander_in_area(uParam0->f_7, func_9(uParam1), 5f, 1077936128, 1086324736, 1);
	}
	else
	{
		func_193(uParam0, 0, 1);
	}
	if (func_13(uParam0, 5))
	{
		func_72(uParam0, 12);
		func_72(uParam0, 13);
	}
	if (does_entity_exist(uParam0->f_20.f_11))
	{
		if (!is_entity_dead(uParam0->f_20.f_11))
		{
			func_354(uParam2, uParam0->f_7, uParam0->f_20.f_11, 0);
		}
	}
	return true;
}

bool func_180(vector3 vParam0, int iParam3, var uParam4)
{
	iVar0 = _create_volume_cylinder(vParam0, 0f, 0f, 0f, 5f, 5f, 5f);
	*uParam4 = func_355(iParam3, iVar0, 3076);
	func_356(*uParam4, 256);
	return func_176(*uParam4, 1, 1);
}

int func_181(int iParam0, var uParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return 0;
	}
	if (func_357(iParam0, &(uParam1->f_121)))
	{
		uParam1->f_120++;
		return 1;
	}
	return 0;
}

void func_182(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
		func_72(uParam0, 42);
	}
	else
	{
		func_73(uParam0, 42);
	}
}

void func_183(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (!func_358(iParam0, 13))
		{
			if (bParam2)
			{
				func_359(iParam0, 0, 0);
			}
			func_360(iParam0, 13);
		}
	}
	else if (func_358(iParam0, 13))
	{
		func_361(iParam0, 13);
	}
}

int func_184(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_362(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
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
							if (func_362(iVar4) && iVar4 != iVar0)
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
	if (func_90() == -1 && !func_363(iVar0))
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
				if (func_363(-183018591))
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
		if (iParam0 != Global_35 && func_362(iVar0))
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
		func_364(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_365(iParam0, &iVar0, &fVar25);
		iVar0 = _give_weapon_to_ped_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_366(iVar0))
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

void func_185(int iParam0, int iParam1, int iParam2)
{
	iParam0->f_483 = iParam1;
	iParam0->f_484 = iParam2;
}

bool func_186()
{
	iVar0 = 0;
	if (func_367(43))
	{
		iVar0++;
	}
	if (func_367(18))
	{
		iVar0++;
	}
	if (func_367(40))
	{
		iVar0++;
	}
	if (func_367(19))
	{
		iVar0++;
	}
	return iVar0 >= 3;
}

void func_187(int iParam0, int iParam1)
{
	set_bit(&(iParam0->f_6), iParam1);
}

bool func_188()
{
	return func_17(9);
}

void func_189(int iParam0, int iParam1)
{
	func_72(iParam0, 27);
	func_185(iParam0, 2, 1);
	func_368(iParam0);
	func_334(&(iParam0->f_462));
	iParam0->f_205 = iParam1;
}

void func_190()
{
	func_369(9);
}

void func_191(var uParam0)
{
}

bool func_192(var uParam0, var uParam1)
{
	if (_0x569f1e1237508deb(uParam0->f_7) == 2093245709)
	{
		if (!func_370(uParam0, 2))
		{
			func_174(uParam0, 2);
		}
	}
	else if (func_370(uParam0, 2))
	{
		func_196(uParam0, 2);
	}
	if (func_371(uParam1, 1077936128, 1114636288, 20f, 1, 0, 1, 10f, 1, 1125515264, 0, 0) && uParam1->f_48)
	{
		fVar0 = func_372(Global_35, uParam0->f_7, 1, 1);
		if (fVar0 <= 80f)
		{
			if (!func_370(uParam0, 16))
			{
				func_174(uParam0, 16);
			}
		}
		else if (func_370(uParam0, 16))
		{
			func_196(uParam0, 16);
		}
		if (fVar0 <= 20f)
		{
			if (_0x569f1e1237508deb(uParam0->f_7) != 2093245709)
			{
				if (!func_370(uParam0, 131072))
				{
					func_174(uParam0, 131072);
				}
				if (func_373(uParam0, 0))
				{
					return true;
				}
			}
		}
		else if (func_370(uParam0, 131072))
		{
			func_196(uParam0, 131072);
		}
	}
	else if (func_370(uParam0, 131072))
	{
		func_196(uParam0, 131072);
	}
	return false;
}

void func_193(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_472 = iParam1;
	if (bParam2)
	{
		func_196(uParam0, 8);
		func_196(uParam0, 4);
		func_196(uParam0, 1);
		func_196(uParam0, 2);
		uParam0->f_473 = (uParam0->f_473 || func_374(iParam1));
	}
	else
	{
		uParam0->f_473 = func_374(iParam1);
	}
}

void func_194(var uParam0)
{
	if (func_208(Global_35, uParam0->f_7, 75f, 1))
	{
		if (func_375(1f, 1, 0, 0))
		{
			func_376(1715123483, uParam0->f_7, 1);
			func_206(uParam0->f_7, uParam0->f_7, "RE_HEC_UNI_V1_WHISTLE", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_195(var uParam0)
{
	switch (uParam0->f_196)
	{
		case 0:
			set_ped_can_play_ambient_anims(uParam0->f_7, false);
			if (func_13(uParam0, 1))
			{
				func_72(uParam0, 12);
				func_72(uParam0, 13);
				func_377(uParam0->f_7, *uParam0, "YARROW_SEND_A_UPPER", "GCURRANT_SEND_A_UPPER", "VSNOWDROP_SEND_A_UPPER", "HBSAGE_SEND_A_UPPER", 0);
				uParam0->f_196 = 6;
			}
			else if (_0x916b8e075abc8b4e(uParam0->f_7, 0))
			{
				func_377(uParam0->f_7, 19, "", "", "", "HEY_HELP_ME_AGAIN_UPPER", 0);
				wait(10);
				uParam0->f_10.f_9 = "RE_HERB_HERBALIST";
				func_378(&(uParam0->f_10), uParam0->f_7, &(uParam0->f_9), 0f, 0f, 0f, 1065353216, 1, 5);
				uParam0->f_196 = 1;
			}
			break;
		case 1:
			func_379(&(uParam0->f_10), &(uParam0->f_9), 1);
			if (!is_entity_playing_anim(uParam0->f_7, func_140(19, 0), "HEY_HELP_ME_AGAIN_UPPER", 1))
			{
				if (does_blip_exist(uParam0->f_9))
				{
					if (!func_330(uParam0, 1))
					{
						task_play_anim(uParam0->f_7, func_140(43, 0), "WAIT_01_UPPER", 8f, -8f, -1, 67117072, 0f, false, 0, false, 0, false);
						uParam0->f_196 = 3;
					}
				}
			}
			break;
		case 3:
			if (!is_entity_playing_anim(uParam0->f_7, func_140(43, 0), "WAIT_01_UPPER", 1))
			{
				if (does_blip_exist(uParam0->f_9))
				{
					if (!func_330(uParam0, 1))
					{
						func_341(&uLocal_0);
						func_353(uParam0, 1);
						func_332(&(uParam0->f_284), 0, 1);
						func_381(&(uParam0->f_284), 0, func_380(4));
						if (!func_13(uParam0, 1))
						{
							func_332(&(uParam0->f_284), 1, 1);
							func_381(&(uParam0->f_284), 1, func_380(6));
						}
						else
						{
							func_332(&(uParam0->f_284), 1, 0);
						}
						switch (func_382(119))
						{
							case 0:
								func_383(&(uParam0->f_284), 0, "RE_HEC_UNI_V1_ACCEPT_01");
								func_383(&(uParam0->f_284), 1, "RE_HEC_UNI_V1_PLAYER_REJECT_01");
								break;
							case 1:
								func_383(&(uParam0->f_284), 0, "RE_HEC_UNI_V1_ACCEPT_02");
								func_383(&(uParam0->f_284), 1, "RE_HEC_UNI_V1_PLAYER_REJECT_02");
								break;
							default:
								func_383(&(uParam0->f_284), 0, "RE_HEC_UNI_V1_ACCEPT_03");
								func_383(&(uParam0->f_284), 1, "RE_HEC_UNI_V1_PLAYER_REJECT_03");
								break;
						}
						func_384(&(uParam0->f_284));
						uParam0->f_196 = 4;
					}
				}
			}
			break;
		case 4:
			if (func_330(uParam0, 1))
			{
				return false;
			}
			switch (uParam0->f_433)
			{
				case 0:
					func_353(uParam0, 0);
					func_385(uParam0);
					func_72(uParam0, 12);
					func_72(uParam0, 13);
					func_384(&(uParam0->f_284));
					uParam0->f_196 = 5;
					break;
				case 1:
					func_353(uParam0, 0);
					func_385(uParam0);
					func_384(&(uParam0->f_284));
					uParam0->f_196 = 8;
					break;
				case -1:
					if (!func_330(uParam0, 1))
					{
						if (func_386(uParam0))
						{
							func_353(uParam0, 0);
							func_73(uParam0, 13);
							func_72(uParam0, 23);
							func_384(&(uParam0->f_284));
							uParam0->f_196 = 9;
						}
					}
					break;
			}
			break;
		case 5:
			if (!func_330(uParam0, 1))
			{
				if (!func_205(Global_35, 1) && !func_387(uParam0))
				{
					if (!func_17(5) && func_16())
					{
						func_206(uParam0->f_7, Global_35, "RE_HEC_UNI_V1_ACCEPT_RESP", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						uParam0->f_196 = 2;
					}
					else
					{
						func_377(uParam0->f_7, *uParam0, "YARROW_SEND_A_UPPER", "GCURRANT_SEND_A_UPPER", "VSNOWDROP_SEND_A_UPPER", "HBSAGE_SEND_A_UPPER", 0);
						uParam0->f_196 = 6;
					}
				}
			}
			break;
		case 2:
			if (!func_205(uParam0->f_7, 1))
			{
				func_64(uParam0);
				func_377(uParam0->f_7, *uParam0, "YARROW_SEND_A_UPPER", "GCURRANT_SEND_A_UPPER", "VSNOWDROP_SEND_A_UPPER", "HBSAGE_SEND_A_UPPER", 0);
				uParam0->f_196 = 6;
			}
			break;
		case 8:
			if (!func_330(uParam0, 1))
			{
				if (!func_205(Global_35, 1) && !func_387(uParam0))
				{
					if (!func_13(uParam0, 23))
					{
						task_play_anim(uParam0->f_7, func_140(19, 0), "NEGATIVE_UPPER", 8f, -8f, -1, 67117072, 0f, false, 0, false, 0, false);
					}
					uParam0->f_196 = 9;
				}
			}
			break;
		case 6:
			if (is_any_speech_playing(uParam0->f_7))
			{
				if (func_388(*uParam0) >= func_389(*uParam0))
				{
					func_72(uParam0, 9);
				}
				else
				{
					func_74(func_390(*uParam0, "HRB_OBJ_YR", "HRB_OBJ_HS", "HRB_OBJ_GC", "HRB_OBJ_VS"), 7500, 0, 0, func_389(*uParam0), -1, 1);
				}
			}
			if (!func_330(uParam0, 1))
			{
				if (!func_391(uParam0->f_7, *uParam0, "YARROW_SEND_A_UPPER", "GCURRANT_SEND_A_UPPER", "VSNOWDROP_SEND_A_UPPER", "HBSAGE_SEND_A_UPPER", 0, 1))
				{
					if (*uParam0 != 40 && *uParam0 != 43)
					{
						func_377(uParam0->f_7, *uParam0, "YARROW_SEND_B_UPPER", "GCURRANT_SEND_B_UPPER", "VSNOWDROP_SEND_B_UPPER", "HBSAGE_SEND_B_UPPER", 0);
					}
					func_392(*uParam0, 0, 1);
					if (func_393(uParam0))
					{
						func_72(uParam0, 66);
						return true;
					}
					uParam0->f_196 = 7;
				}
			}
			break;
		case 7:
			if ((*uParam0 == 40 || !func_208(Global_35, uParam0->f_7, 20f, 1)) || !func_391(uParam0->f_7, *uParam0, "YARROW_SEND_B_UPPER", "GCURRANT_SEND_B_UPPER", "VSNOWDROP_SEND_B_UPPER", "HBSAGE_SEND_B_UPPER", 0, 1))
			{
				func_394(uParam0);
				func_196(uParam0, 131072);
				func_395(uParam0, 1f, 0);
				func_70(uParam0, 0, -1904017806, 0, 0, 1, 3f);
				return true;
			}
			break;
		case 9:
			if (!is_entity_playing_anim(uParam0->f_7, func_140(19, 0), "NEGATIVE_UPPER", 1))
			{
				func_175(&(uParam0->f_9));
				func_196(uParam0, 131072);
				func_70(uParam0, 0, 494354620, 0, 0, 1, 0);
				uParam0->f_1 = 11;
			}
			break;
	}
	return false;
}

void func_196(int iParam0, int iParam1)
{
	func_118(&(iParam0->f_473), iParam1);
}

void func_197(var uParam0)
{
	if (_0x569f1e1237508deb(uParam0->f_7) == -1904017806)
	{
		if (!func_396(uParam0, 0, 1, 1))
		{
			uParam0->f_203 = 2;
		}
		else
		{
			uParam0->f_203 = 3;
		}
		func_395(uParam0, 5f, 1);
	}
}

void func_198()
{
	func_89(11);
}

bool func_199(var uParam0, var uParam1)
{
	switch (uParam0->f_197)
	{
		case 0:
			if (func_393(uParam0))
			{
				func_72(uParam0, 9);
				if (!func_13(uParam0, 1))
				{
					if (!does_blip_exist(uParam0->f_9))
					{
						func_397(uParam0->f_7, &(uParam0->f_9), -89429847, 580546400, 0, 0);
					}
				}
				if (!func_13(uParam0, 9))
				{
					func_398(uParam0, func_388(*uParam0), 1);
				}
				else if (!func_13(uParam0, 1))
				{
					func_74("HERB_DONE_EARLY", 7500, 0, 0, -1, -1, 0);
				}
				else
				{
					func_74("HERB_DONE_EARLY_RC", 7500, 0, 0, -1, -1, 0);
				}
				if (does_blip_exist(uParam0->f_9))
				{
					_blip_set_modifier(uParam0->f_9, -981020806);
				}
				func_399(uParam0, 0);
				func_193(uParam0, 2, 1);
				uParam0->f_197 = 1;
			}
			else
			{
				func_400(uParam0, 0);
				func_193(uParam0, 2, 1);
				uParam0->f_197 = 1;
			}
			func_341(&uLocal_0);
			break;
		case 1:
			if (func_401(uParam0, uParam1))
			{
				func_73(uParam0, 13);
				func_402(&(uParam0->f_112), &(uParam0->f_90[2]));
				func_403(uParam0);
				func_404(&(uParam0->f_112), *uParam0, uParam0->f_7, &(uParam0->f_90), 1);
				func_405(&(uParam0->f_112));
				return true;
			}
			break;
	}
	return false;
}

bool func_200(var uParam0)
{
	func_331(uParam0->f_7);
	switch (uParam0->f_199)
	{
		case 0:
			if (!func_330(uParam0, 1))
			{
				if (!_0x3ab6c7b0bb0df4b1(uParam0->f_7, -1) || func_406(&(uParam0->f_112), "base02", 1))
				{
					if (*uParam0 == 19)
					{
						if (!func_205(uParam0->f_7, 1))
						{
							func_206(uParam0->f_7, Global_35, "RE_HEC_UNI_V1_SAGE_TIP", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							func_193(uParam0, 4, 1);
							uParam0->f_199 = 1;
						}
					}
					else
					{
						func_193(uParam0, 4, 1);
						uParam0->f_199 = 1;
					}
				}
			}
			break;
		case 1:
			return !func_205(uParam0->f_7, 1);
	}
	return false;
}

bool func_201(var uParam0, var uParam1)
{
	func_331(uParam0->f_7);
	func_407(uParam0);
	switch (uParam0->f_200)
	{
		case 0:
			if (!func_330(uParam0, 1) && !is_any_speech_playing(uParam0->f_7))
			{
				func_408(uParam0);
				func_328(&(uParam0->f_284), 0);
				func_384(&(uParam0->f_284));
				uParam0->f_200 = 1;
			}
			break;
		case 1:
			if (!func_330(uParam0, 1))
			{
				if (func_375(-4f, 1, 0, 0))
				{
					func_409(&(uParam0->f_154), &(uParam0->f_175), uParam0->f_7, &(uParam0->f_90[2]), uParam0->f_242, func_44(uParam0));
					func_353(uParam0, 1);
					func_332(&(uParam0->f_284), 0, 1);
					func_381(&(uParam0->f_284), 0, func_410(uParam0->f_240));
					func_411(&(uParam0->f_284), 0, 10f);
					func_341(&uLocal_0);
					func_384(&(uParam0->f_284));
					uParam0->f_200 = 2;
				}
			}
			break;
		case 2:
			func_412(&(uParam0->f_154), uParam0->f_7);
			switch (uParam0->f_433)
			{
				case 0:
					vVar4 = { get_entity_coords(uParam0->f_7, true, false) };
					uParam0->f_241 = func_413(uParam0, uParam1, &Var0);
					func_414(&(uParam0->f_52));
					uParam0->f_52.f_8 = { Var0 };
					uParam0->f_52.f_19 = Var0.f_3;
					uParam0->f_52.f_1 = Global_35;
					uParam0->f_52.f_21 = 1f;
					uParam0->f_52.f_18 = 0.25f;
					uParam0->f_52.f_8.f_2 = vVar4.z;
					func_119(&(uParam0->f_52.f_23), 32);
					func_353(uParam0, 0);
					func_328(&(uParam0->f_284), 0);
					func_415(Global_35, &(uParam0->f_8), 0f, 0f, 0f, 0, 7f, 4, 0, 0, 0, 0, 1071644672);
					uParam0->f_200 = 3;
					break;
				default:
					if (!func_330(uParam0, 1))
					{
						if (func_416(uParam0))
						{
							func_206(uParam0->f_7, Global_35, "RE_HEC_UNI_V1_SUITYOURSELF", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							task_play_anim(uParam0->f_7, "SCRIPT_RE@HERBALISTCAMP@SERUM_HANDOVER", "SERUM_DECLINE_HERBALIST", 4f, -4f, -1, 8192, 0f, false, 0, false, 0, false);
							func_353(uParam0, 0);
							func_328(&(uParam0->f_284), 0);
							func_175(&(uParam0->f_9));
							func_417(&(uParam0->f_284), 0);
							if (!func_133(2054734837, 2, 0, 0))
							{
							}
							func_384(&(uParam0->f_284));
							uParam0->f_200 = 5;
						}
					}
					break;
			}
			break;
		case 5:
			if (!is_entity_playing_anim(uParam0->f_7, "SCRIPT_RE@HERBALISTCAMP@SERUM_HANDOVER", "SERUM_DECLINE_HERBALIST", 1))
			{
				if (func_49(2054734837))
				{
					func_162(uParam0, 0);
					func_418(uParam0, 2093245709, 0);
					return true;
				}
			}
			break;
		case 3:
			if (func_419(uParam0))
			{
				uParam0->f_200 = 6;
			}
			break;
		case 6:
			if ((uParam0->f_241 == 0 && _is_anim_scene_finished(uParam0->f_175.f_1, false)) || (uParam0->f_241 == 1 && _is_anim_scene_finished(uParam0->f_154.f_1, false)))
			{
				set_player_control(player_id(), true, 0, false);
				func_175(&(uParam0->f_9));
				task_turn_ped_to_face_entity(uParam0->f_7, Global_35, -1, -1082130432, -1082130432, -1082130432);
				if (!func_133(2054734837, 2, 0, 0))
				{
				}
				uParam0->f_200 = 7;
			}
			break;
		case 7:
			if (!func_330(uParam0, 1))
			{
				if (func_375(-3f, 1, 0, 0) && !func_205(uParam0->f_7, 0))
				{
					if (!func_13(uParam0, 16))
					{
						if (func_49(2054734837))
						{
							task_turn_ped_to_face_entity(uParam0->f_7, Global_35, -1, -1082130432, -1082130432, -1082130432);
							func_206(uParam0->f_7, Global_35, "RE_HEC_UNI_V1_GOODBYE", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							uParam0->f_200 = 8;
						}
					}
					else
					{
						task_turn_ped_to_face_entity(uParam0->f_7, Global_35, -1, -1082130432, -1082130432, -1082130432);
						uParam0->f_200 = 9;
					}
				}
			}
			break;
		case 8:
			if (!func_205(uParam0->f_7, 1))
			{
				func_162(uParam0, 0);
				if (_is_anim_scene_started(uParam0->f_112.f_1, false))
				{
					set_anim_scene_bool(uParam0->f_112.f_1, "BASE02_LOOP", true, false);
				}
				func_70(uParam0, 0, 494354620, 0, 0, 1, 0);
				func_395(uParam0, 7f, 0);
				return true;
			}
			break;
		case 9:
			if (!func_205(uParam0->f_7, 1))
			{
				if (func_49(2054734837))
				{
					func_206(uParam0->f_7, Global_35, "RE_HEC_UNI_V1_FAREWELL", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					uParam0->f_200 = 8;
				}
			}
			break;
	}
	return false;
}

bool func_202(var uParam0)
{
	return false;
}

bool func_203(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29)
{
	fVar1 = func_420(Global_35, func_9(uParam1), 1);
	switch (uParam0->f_201)
	{
		case 0:
			if (func_320(uParam0->f_7, &uParam2, &uVar2, 0) || fVar1 < 4f)
			{
				if (fVar1 < (35f - 7f))
				{
					if (uParam0->f_219 > 3)
					{
						if (is_ped_using_any_scenario(uParam0->f_7))
						{
							_0x802092b07e3b1eea(uParam0->f_7, Global_36, 3);
						}
						func_421(uParam0);
					}
					uParam0->f_220 = 1;
					uParam0->f_201 = 1;
				}
			}
			break;
		case 1:
			if (!func_14(Global_35, func_9(uParam1), 35f, 1, 1))
			{
				if (!func_333(&(uParam0->f_216)))
				{
					func_341(&(uParam0->f_216));
				}
				if (!_0xec6935ebe0847b90(uParam0->f_7, Global_36))
				{
					if (!_0x463803429297117c(uParam0->f_7, Global_36, 1, 0))
					{
						_0xf1c03a5352243a30(uParam0->f_7);
					}
				}
				open_sequence_task(&iVar0);
				set_current_ped_weapon(uParam0->f_7, -1569615261, false, 0, false, false);
				task_swap_weapon(0, 1, 0, 0, 0);
				func_70(uParam0, 1, 494354620, 1, 0, 1, 0);
				func_171(uParam0->f_7, &iVar0, 0, 0, 1, 1);
				if (func_422(&(uParam0->f_216), 3f))
				{
					uParam0->f_201 = 0;
				}
			}
			else
			{
				if (func_333(&(uParam0->f_216)))
				{
					func_334(&(uParam0->f_216));
				}
				switch (uParam0->f_219)
				{
					case 0:
						func_206(uParam0->f_7, Global_35, "RE_HEC_UNI_V1_DEFEND", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						_0xa3a9299c4f2adb98(uParam0->f_7);
						if (!_0xec6935ebe0847b90(uParam0->f_7, Global_36))
						{
							if (!_0x463803429297117c(uParam0->f_7, Global_36, 1, 0))
							{
								_0xf1c03a5352243a30(uParam0->f_7);
							}
						}
						task_turn_ped_to_face_entity(uParam0->f_7, Global_35, -1, -1082130432, -1082130432, -1082130432);
						uParam0->f_219++;
						break;
					case 1:
						if (uParam0->f_220 || func_375(1f, 1, 0, 0))
						{
							func_206(uParam0->f_7, Global_35, "RE_HEC_UNI_V1_HAVETO", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							_0xa3a9299c4f2adb98(uParam0->f_7);
							if (!_0xec6935ebe0847b90(uParam0->f_7, Global_36))
							{
								if (!_0x463803429297117c(uParam0->f_7, Global_36, 1, 0))
								{
									_0xf1c03a5352243a30(uParam0->f_7);
								}
							}
							open_sequence_task(&iVar0);
							if (func_322(uParam0->f_7, 0, 1, 0) == -1569615261)
							{
								set_current_ped_weapon(uParam0->f_7, -618550132, false, 0, false, false);
								task_swap_weapon(0, 1, 0, 0, 0);
							}
							task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
							func_171(uParam0->f_7, &iVar0, 0, 0, 1, 1);
							uParam0->f_219++;
						}
						break;
					case 2:
						if (uParam0->f_220 || func_375(0, 1, 0, 0))
						{
							func_206(uParam0->f_7, Global_35, "RE_HEC_UNI_V1_ISAID", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							_0xa3a9299c4f2adb98(uParam0->f_7);
							if (!_0xec6935ebe0847b90(uParam0->f_7, Global_36))
							{
								if (!_0x463803429297117c(uParam0->f_7, Global_36, 1, 0))
								{
									_0xf1c03a5352243a30(uParam0->f_7);
								}
							}
							open_sequence_task(&iVar0);
							if (func_322(uParam0->f_7, 0, 1, 0) == -1569615261)
							{
								set_current_ped_weapon(uParam0->f_7, -618550132, false, 0, false, false);
								task_swap_weapon(0, 1, 0, 0, 0);
							}
							task_aim_gun_at_entity(0, Global_35, -1, 0, 1);
							func_171(uParam0->f_7, &iVar0, 0, 0, 1, 1);
							uParam0->f_219++;
						}
						break;
					case 3:
						if (uParam0->f_220 || func_375(-3f, 1, 0, 0))
						{
							func_206(uParam0->f_7, Global_35, "RE_HEC_UNI_V1_FORCEDME", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							func_421(uParam0);
							uParam0->f_219++;
						}
						break;
				}
			}
			if (uParam0->f_220)
			{
				uParam0->f_220 = 0;
			}
			break;
	}
	return false;
}

bool func_204(var uParam0)
{
	if (is_ped_active_in_scenario(uParam0->f_7, 0))
	{
		if (_0x02ebbb3989b7e695(uParam0->f_7))
		{
			func_423(uParam0, -1f);
		}
		else if (_0x916b8e075abc8b4e(uParam0->f_7, 0))
		{
			if (!_0xeeed8fafec331a70(uParam0->f_7, Global_36, 3))
			{
				if (!_0x802092b07e3b1eea(uParam0->f_7, Global_36, 3))
				{
					_0xa3a9299c4f2adb98(uParam0->f_7);
				}
			}
			set_blocking_of_non_temporary_events(uParam0->f_7, false);
			if (func_322(uParam0->f_7, 0, 1, 0) != -1569615261)
			{
				func_323(uParam0, 3);
			}
			else
			{
				open_sequence_task(&iVar0);
				task_combat_ped(0, Global_35, 0, 0);
				func_171(uParam0->f_7, &iVar0, 0, 0, 1, 1);
			}
			return true;
		}
	}
	else
	{
		set_blocking_of_non_temporary_events(uParam0->f_7, false);
		if (func_322(uParam0->f_7, 0, 1, 0) != -1569615261)
		{
			func_323(uParam0, 3);
		}
		else
		{
			open_sequence_task(&iVar1);
			task_combat_ped(0, Global_35, 0, 0);
			func_171(uParam0->f_7, &iVar1, 0, 0, 1, 1);
		}
		return true;
	}
	return false;
}

bool func_205(int iParam0, bool bParam1)
{
	if (func_98(iParam0, 0, 1))
	{
		return (is_scripted_speech_playing(iParam0) || (bParam1 && is_any_speech_playing(iParam0)));
	}
	return false;
}

bool func_206(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_424(iParam0, iParam1, sParam2, iParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

bool func_207(int iParam0, int iParam1, bool bParam2)
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

bool func_208(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_209(var uParam0)
{
	Var0.f_1 = 2;
	Var0.f_2 = 493038497;
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	switch (uParam0->f_204)
	{
		case 0:
			func_175(&(uParam0->f_9));
			func_341(&(uParam0->f_212));
			func_425(uParam0);
			func_177(&(uParam0->f_215), 1);
			uParam0->f_204 = 1;
			break;
		case 1:
			if (func_343(&(uParam0->f_212), 2f))
			{
				func_426(&(uParam0->f_284));
				Var0 = 41;
				Var0.f_2 = 1789063806;
				Var0.f_3 = 3;
				Var0.f_4 = 1;
				func_427(&(uParam0->f_7), &Var0, &(uParam0->f_284), &(uParam0->f_284.f_21), uParam0->f_434.f_5);
				func_428(uParam0);
				if (func_429(&(uParam0->f_112), 1, 0, 0))
				{
					func_82(&(uParam0->f_112));
				}
				uParam0->f_204 = 2;
			}
			break;
		case 2:
			return true;
	}
	return false;
}

bool func_210(int iParam0, var uParam1, bool bParam2)
{
	if (!bParam2)
	{
		switch (iParam0->f_202)
		{
			case 0:
				func_353(iParam0, 0);
				func_193(iParam0, 3, 0);
				func_328(&(iParam0->f_284), 1);
				if (!func_13(iParam0, 46))
				{
					func_381(&(iParam0->f_284), 0, func_380(7));
				}
				else
				{
					func_332(&(iParam0->f_284), 0, 0);
				}
				func_381(&(iParam0->f_284), 1, func_380(10));
				func_383(&(iParam0->f_284), 0, "RE_HEC_UNI_V1_STUDIES");
				func_383(&(iParam0->f_284), 1, "RE_HEC_UNI_V1_WASTETIME");
				func_384(&(iParam0->f_284));
				iParam0->f_202 = 1;
				break;
			case 1:
				if (iParam0->f_433 > -1)
				{
					func_328(&(iParam0->f_284), 0);
				}
				switch (iParam0->f_433)
				{
					case 0:
						func_341(&(iParam0->f_212));
						if (func_430(iParam0))
						{
							func_187(iParam0, 4);
						}
						func_368(iParam0);
						if (!func_431(iParam0, 1))
						{
							func_187(iParam0, 0);
						}
						else
						{
							iParam0->f_474 = 3;
							func_383(&(iParam0->f_284), 1, "RE_HEC_UNI_V1_OLDMAN");
							func_381(&(iParam0->f_284), 1, func_380(10));
						}
						func_332(&(iParam0->f_284), 0, 0);
						func_384(&(iParam0->f_284));
						iParam0->f_202 = 2;
						break;
					case 1:
						func_341(&(iParam0->f_212));
						if (func_430(iParam0))
						{
							func_187(iParam0, 4);
						}
						func_368(iParam0);
						if (func_431(iParam0, 1))
						{
							iParam0->f_474 = 2;
						}
						if (iParam0->f_474 > 1)
						{
							func_332(&(iParam0->f_284), 0, 0);
							func_332(&(iParam0->f_284), 1, 0);
						}
						func_384(&(iParam0->f_284));
						iParam0->f_202 = 4;
						break;
					case -1:
						if (func_431(iParam0, 1))
						{
							if (func_343(&(iParam0->f_212), 6f))
							{
								iParam0->f_474 = 3;
								func_432(iParam0);
								func_433(iParam0, 4);
								func_196(iParam0, 131072);
								func_332(&(iParam0->f_284), 0, 0);
								func_383(&(iParam0->f_284), 1, "RE_HEC_UNI_V1_OLDMAN");
								func_381(&(iParam0->f_284), 1, func_380(10));
								func_334(&(iParam0->f_212));
								func_433(iParam0, 1);
								func_384(&(iParam0->f_284));
							}
						}
						break;
				}
				break;
			case 2:
				if (((!is_any_speech_playing(Global_35) && !is_scripted_speech_playing(Global_35)) && !is_scripted_speech_playing(iParam0->f_7)) && !_0xfe5c6177064bd390(1))
				{
					func_341(&(iParam0->f_212));
					if (func_431(iParam0, 1))
					{
						func_206(iParam0->f_7, Global_35, func_434("RE_HEC_UNI_V1_EXCUSEME"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 1506116031, 1, 0, 0);
					}
					else
					{
						func_206(iParam0->f_7, Global_35, func_434("RE_HEC_UNI_V1_TRAVELS"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 1506116031, 1, 0, 0);
					}
					iParam0->f_202 = 3;
				}
				break;
			case 3:
				if (((func_343(&(iParam0->f_212), 2f) && !is_scripted_speech_playing(Global_35)) && !is_scripted_speech_playing(iParam0->f_7)) && !_0xfe5c6177064bd390(1))
				{
					func_432(iParam0);
					func_433(iParam0, 4);
					func_196(iParam0, 131072);
					if (!func_431(iParam0, 3))
					{
						func_332(&(iParam0->f_284), 1, 1);
					}
					func_395(iParam0, 10f, 0);
					iParam0->f_202 = 1;
				}
				break;
			case 4:
				if (func_343(&(iParam0->f_212), 2f))
				{
					if ((!is_scripted_speech_playing(Global_35) && !is_scripted_speech_playing(iParam0->f_7)) && !_0xfe5c6177064bd390(1))
					{
						if (func_431(iParam0, 4) || func_373(iParam0, 0))
						{
							func_341(&(iParam0->f_212));
							func_435(iParam0, iParam0->f_474);
							switch (iParam0->f_474)
							{
								case 2:
									func_72(iParam0, 54);
									break;
								case 3:
									func_187(iParam0, 6);
									break;
							}
							iParam0->f_202 = 5;
						}
					}
				}
				break;
			case 5:
				if (!func_330(iParam0, 1))
				{
					if ((!is_scripted_speech_playing(Global_35) && !is_scripted_speech_playing(iParam0->f_7)) && !_0xfe5c6177064bd390(1))
					{
						if ((func_343(&(iParam0->f_212), 2f) || func_431(iParam0, 6)) || func_431(iParam0, 5))
						{
							if (func_436(iParam0))
							{
								func_425(iParam0);
								if (func_431(iParam0, 6))
								{
									func_437(iParam0, 0);
								}
								else
								{
									func_323(iParam0, 3);
								}
								func_177(&(iParam0->f_215), 1);
								func_23(iParam0);
								uParam1->f_46 = 1;
								iParam0->f_202 = 6;
							}
							else
							{
								func_395(iParam0, 10f, 0);
								if (!func_431(iParam0, 1))
								{
									func_432(iParam0);
									func_433(iParam0, 4);
									func_196(iParam0, 131072);
								}
								else
								{
									func_341(&(iParam0->f_212));
								}
								iParam0->f_202 = 1;
							}
						}
					}
				}
				break;
			case 6:
				break;
		}
	}
	if (func_13(iParam0, 1))
	{
		if (!func_208(Global_35, iParam0->f_7, 300f, 1))
		{
			return true;
		}
	}
	return false;
}

bool func_211(var uParam0)
{
	if (!is_entity_dead(uParam0->f_7))
	{
		if (!uParam0->f_520)
		{
			if (is_ped_in_melee_combat(uParam0->f_7) || is_ped_in_combat(uParam0->f_7, Global_35))
			{
				if (!func_13(uParam0, 56))
				{
					func_72(uParam0, 56);
					func_438(&(uParam0->f_284.f_21), 1, 1);
					func_384(&(uParam0->f_284));
				}
				func_439(&(uParam0->f_9), uParam0->f_7, 0);
				uParam0->f_520 = 1;
			}
		}
		else if (!is_ped_in_melee_combat(uParam0->f_7) && !is_ped_in_combat(uParam0->f_7, Global_35))
		{
			func_175(&(uParam0->f_9));
			uParam0->f_520 = 0;
		}
		if (func_338(uParam0, 1) > 1)
		{
			if (!func_13(uParam0, 63))
			{
				func_326(uParam0->f_284.f_21[0]);
			}
		}
		else if (!func_13(uParam0, 50))
		{
			if (!func_13(uParam0, 52))
			{
				if (!func_330(uParam0, 1))
				{
					func_326(uParam0->f_284.f_21[0]);
				}
			}
		}
		switch (uParam0->f_206)
		{
			case 0:
				func_440(&(uParam0->f_284));
				func_332(&(uParam0->f_284), 1, 1);
				func_383(&(uParam0->f_284), 1, "RE_HEC_UNI_V1_ATAG_AGGRO_1ST");
				func_381(&(uParam0->f_284), 1, func_380(10));
				if (!func_13(uParam0, 50))
				{
					func_332(&(uParam0->f_284), 0, 1);
					func_383(&(uParam0->f_284), 0, "RE_HEC_UNI_V1_DEFUSE");
					func_381(&(uParam0->f_284), 0, func_380(8));
				}
				func_73(uParam0, 21);
				func_441(&(uParam0->f_284));
				func_384(&(uParam0->f_284));
				uParam0->f_206 = 1;
				break;
			case 1:
				switch (uParam0->f_433)
				{
					case 0:
						func_341(&(uParam0->f_212));
						func_72(uParam0, 50);
						uParam0->f_206 = 2;
						break;
					case 1:
						func_341(&(uParam0->f_212));
						func_72(uParam0, 52);
						uParam0->f_206 = 4;
						break;
				}
				break;
			case 2:
				if (func_343(&(uParam0->f_212), 2f))
				{
					uParam0->f_206 = 3;
				}
				break;
			case 3:
				if (func_13(uParam0, 51))
				{
					if (!func_205(uParam0->f_7, 1))
					{
						if (uParam0->f_528 < 2)
						{
							func_332(&(uParam0->f_284), 1, 1);
						}
						func_384(&(uParam0->f_284));
						func_73(uParam0, 50);
						func_73(uParam0, 51);
						uParam0->f_206 = 1;
					}
				}
				break;
			case 4:
				if (func_343(&(uParam0->f_212), 2f))
				{
					uParam0->f_206 = 5;
				}
				break;
			case 5:
				if (func_13(uParam0, 53))
				{
					if (!func_205(uParam0->f_7, 1))
					{
						if (uParam0->f_528 < 2)
						{
							func_332(&(uParam0->f_284), 1, 1);
							func_383(&(uParam0->f_284), 1, "RE_HEC_UNI_V1_ATAG_AGGRO_2ND");
						}
						func_384(&(uParam0->f_284));
						func_73(uParam0, 52);
						func_73(uParam0, 53);
						uParam0->f_206 = 1;
					}
				}
				break;
			case 6:
				if (func_13(uParam0, 55))
				{
					if (!func_205(uParam0->f_7, 1))
					{
						func_73(uParam0, 54);
						func_73(uParam0, 55);
						uParam0->f_206 = 1;
					}
				}
				break;
		}
	}
	return is_entity_dead(uParam0->f_7);
}

void func_212(var uParam0)
{
	if (!is_entity_dead(uParam0->f_7))
	{
		if (uParam0->f_476 != 0)
		{
			_0x8b3b71c80a29a4bb(uParam0->f_7, uParam0->f_475, uParam0->f_476);
		}
	}
}

void func_213(var uParam0)
{
	if (!func_442(uParam0, &iVar4, &bVar0, &bVar1, &bVar2, &bVar3))
	{
		return;
	}
	set_ped_can_play_ambient_anims(uParam0->f_7, true);
	set_ped_can_play_ambient_base_anims(uParam0->f_7, true);
	if (func_30(iVar4, 8))
	{
		if (!func_333(&(uParam0->f_447)))
		{
			func_341(&(uParam0->f_447));
		}
	}
	else if (func_333(&(uParam0->f_447)))
	{
		func_334(&(uParam0->f_447));
	}
	if (has_anim_event_fired(uParam0->f_7, -1958015541))
	{
		if (!is_entity_playing_anim(&(uParam0->f_90[3]), "SCRIPT_RE@HERBALISTCAMP", "MORTAR_PESTAL_STATIC", 1))
		{
			play_entity_anim(&(uParam0->f_90[3]), "MORTAR_PESTAL_STATIC", "SCRIPT_RE@HERBALISTCAMP", 1000f, false, true, true, 0f, 0);
		}
	}
	switch (uParam0->f_203)
	{
		case 0:
			uParam0->f_203 = 2;
			break;
		case 2:
			uParam0->f_203 = func_443(uParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
		case 3:
			uParam0->f_203 = func_444(uParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
		case 4:
			uParam0->f_203 = func_445(uParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
		case 6:
			uParam0->f_203 = func_446(uParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
		case 7:
			uParam0->f_203 = func_447(uParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
		case 10:
			uParam0->f_203 = func_448(uParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
		case 12:
			uParam0->f_203 = func_449(uParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
		case 14:
			uParam0->f_203 = func_450(uParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
		case 15:
			uParam0->f_203 = func_451(uParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
		case 18:
			uParam0->f_203 = func_452(uParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
		case 19:
			uParam0->f_203 = func_453(uParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
		case 20:
			uParam0->f_203 = func_454(uParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
	}
}

void func_214(var uParam0, var uParam1)
{
	if (uParam0->f_2 >= *uParam1)
	{
		if (uParam0->f_2 > uParam0->f_98)
		{
		}
		uParam0->f_2 = 0;
	}
	if (does_entity_exist(uParam1[uParam0->f_2]))
	{
		uParam0->f_98[uParam0->f_2] = get_distance_between_coords(get_entity_coords(uParam1[uParam0->f_2], false, false), Global_36, true);
	}
	else
	{
		uParam0->f_98[uParam0->f_2] = 0f;
	}
}

void func_215(var uParam0)
{
	func_110(uParam0, 1);
	func_455(uParam0, 20);
}

bool func_216(int iParam0, int iParam1)
{
	if (!func_243(iParam0))
	{
		return false;
	}
	return ((*Global_1310750)[iParam0]->f_1 && iParam1) != 0;
}

void func_217(var uParam0, var uParam1, int iParam2, int* iParam3)
{
	if (!func_243(iParam2))
	{
		return;
	}
	if (*uParam1)
	{
		return;
	}
	if (func_456())
	{
		func_457(1);
	}
	func_458(iParam2, uParam0->f_43);
	func_459(iParam2, 0, 0, 0, 0);
	if (func_460(iParam2) != -1)
	{
		_set_weather_type_frozen(true);
	}
	start_audio_scene("RE_active_location_scene");
	_0x1096603b519c905f(func_96(uParam0->f_3));
	if (does_blip_exist(*iParam3))
	{
		remove_blip(iParam3);
	}
	func_461(uParam0, 1, 0);
	*uParam1 = 1;
}

void func_218(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0]->f_7 = 0f;
		(*uParam0)[iVar0]->f_8 = 0f;
		iVar0++;
	}
}

void func_219(var uParam0, int iParam1, float fParam2)
{
	bVar0 = false;
	if (uParam0->f_178 && func_462())
	{
		bVar0 = true;
	}
	if (!uParam0->f_48 && !func_216(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_217(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_218(&(uParam0->f_121));
			return;
		}
		if (_does_volume_exist(uParam0->f_173))
		{
			if (!func_463(Global_35, uParam0->f_173, 1, 0))
			{
				return;
			}
		}
		fVar1 = func_464(uParam0, bVar0);
		func_465(uParam0->f_121[iParam1], fVar1, 1082130432, 0, 90f, 0, &(uParam0->f_98[iParam1]));
		if (func_466(&(uParam0->f_121), uParam0->f_120, fParam2))
		{
			func_217(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_218(&(uParam0->f_121));
		}
	}
}

bool func_220(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	fVar0 = 30f;
	fVar1 = 150f;
	if (func_122(uParam2->f_3, 1))
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
			if (func_467())
			{
				fVar0 = 15f;
			}
		}
		if (func_468(uParam2, fVar0))
		{
			*uParam1 = 1;
		}
	}
	if (!uParam2->f_48)
	{
		if (!bParam3 && func_469(player_id(), 1, 0, 1))
		{
			return false;
		}
		if (!func_468(uParam2, fVar1))
		{
			if (!func_470((*Global_1310750)[uParam2->f_3]->f_38))
			{
				return false;
			}
		}
		if (!func_471(uParam2->f_3, 2) && func_472(2))
		{
			return false;
		}
		if (func_122(iParam0, 4194304) || func_122(iParam0, 33554432))
		{
			if (func_473(1))
			{
				return false;
			}
		}
	}
	if (func_474(Global_35))
	{
		return false;
	}
	if (func_475(0, 1, 1) && !func_476(iParam0))
	{
		return false;
	}
	if (!*uParam1 && func_122(iParam0, 128))
	{
		if (is_player_riding_train(player_id()))
		{
			return false;
		}
		if (func_477(Global_35, 0))
		{
			return false;
		}
		if (Global_16)
		{
			return false;
		}
		if (func_469(player_id(), 1, 0, 1))
		{
			return false;
		}
		if (func_478())
		{
			return false;
		}
		iVar2 = func_480(func_479());
		if (func_481(iVar2))
		{
			if (func_482(Global_36, iVar2))
			{
				return false;
			}
		}
		if (func_483(Global_36) && !uParam2->f_161)
		{
			return false;
		}
		if (!uParam2->f_48)
		{
			if (func_484(&(uParam2->f_91), 0, 1084227584, 1, 1))
			{
				return false;
			}
		}
	}
	return true;
}

void func_221(var uParam0, int iParam1)
{
	if (func_485(uParam0->f_51))
	{
		func_252(uParam0->f_51, 0);
		fVar0 = func_486(uParam0->f_3);
		iVar2 = _create_volume_cylinder_with_custom_name(uParam0->f_51, 0f, 0f, 0f, fVar0, fVar0, fVar0, func_487());
		bVar1 = func_102(!func_122(uParam0->f_3, 1), 20f, -1f);
		uParam0->f_51.f_11 = func_489(iVar2, func_488(uParam0->f_3), 1, iParam1, 8, 0, bVar1);
	}
}

bool func_222()
{
	if (!func_490(Global_1395482->f_1))
	{
		return false;
	}
	return func_491(Global_1395482->f_1, 32);
}

bool func_223(int iParam0)
{
	if (func_122(iParam0, 1))
	{
		return false;
	}
	return (1 == func_232(iParam0) || 2 == func_232(iParam0));
}

void func_224(var uParam0, vector3 vParam1, int iParam4, float fParam5)
{
	fParam5 = func_492(vParam1, fParam5);
	fVar0 = func_493(fParam5, iParam4);
	if (fVar0 < 1f)
	{
		_0x9ddc222d85d5af2a(*uParam0, uParam0->f_3);
		set_particle_fx_looped_alpha(*uParam0, fVar0);
	}
}

void func_225(var uParam0, vector3 vParam1, int iParam4, float fParam5)
{
	fVar0 = (IntToFloat((get_frame_count() - uParam0->f_4)) / 150f);
	if (fVar0 >= 1f)
	{
		func_119(&(uParam0->f_1), 16);
		func_224(uParam0, vParam1, iParam4, fParam5);
		return;
	}
	else
	{
		fParam5 = func_492(vParam1, fParam5);
		fVar1 = func_493(fParam5, iParam4);
		fVar3 = func_494(uParam0->f_2, uParam0->f_3, fVar0);
		fVar2 = func_494(0f, fVar1, fVar0);
	}
	_0x9ddc222d85d5af2a(*uParam0, fVar3);
	set_particle_fx_looped_alpha(*uParam0, fVar2);
}

float func_226(float fParam0)
{
	fVar0 = func_495(fParam0);
	return fVar0;
}

float func_227(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 3:
		case 4:
			return 300f;
		case 2:
			return 1000f;
		default:
			break;
	}
	return 300f;
}

float func_228(float fParam0)
{
	fVar0 = func_495(fParam0);
	return fVar0;
}

float func_229(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 25f;
		case 1:
			return 40f;
		case 3:
			return 200f;
		case 4:
			return 180f;
		case 2:
			return 150f;
		default:
			break;
	}
	return 128f;
}

float func_230(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1f;
		case 3:
			return 0.8f;
		case 4:
			return 0.5f;
		case 0:
			return 0.6f;
		case 2:
			return 0.9f;
		default:
			break;
	}
	return 1f;
}

float func_231(vector3 vParam0, bool bParam3)
{
	vVar0 = { func_496(0) };
	vVar3 = { func_497(vParam0 - get_gameplay_cam_coord()) };
	if (bParam3)
	{
		return absf(get_angle_between_2d_vectors(vVar3.x, vVar3.y, vVar0.x, vVar0.y));
	}
	return get_angle_between_2d_vectors(vVar3.x, vVar3.y, vVar0.x, vVar0.y);
}

int func_232(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_5;
}

bool func_233(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = func_234(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

int func_234(int iParam0)
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

void func_235(int iParam0)
{
	iParam0 = func_498(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_499(iParam0, 32);
	func_500();
}

void func_236(int iParam0)
{
	iParam0 = func_498(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_237(iParam0);
	if (!_does_thread_exist(iVar0))
	{
		func_239(iParam0);
	}
	else if (!is_thread_active(iVar0, false))
	{
		func_239(iParam0);
	}
}

int func_237(int iParam0)
{
	iParam0 = func_498(iParam0);
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

bool func_238(int iParam0)
{
	iParam0 = func_498(iParam0);
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

void func_239(int iParam0)
{
	iParam0 = func_498(iParam0);
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

void func_240(int iParam0, int iParam1)
{
	func_501(119, iParam0, iParam1);
}

int func_241(int iParam0, int iParam1)
{
	iVar0 = func_502(iParam0, iParam1);
	if (iVar0 != -1)
	{
		return Global_17504.f_1003[iVar0]->f_1;
	}
	return 0;
}

bool func_242(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

bool func_243(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

bool func_244(int iParam0, int iParam1)
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
	if (func_301(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_301(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_301(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_301(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_301(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_301(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_301(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_301(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_245(int iParam0, float fParam1, bool bParam2, bool bParam3)
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

int func_246(int iParam0)
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

void func_247(int* iParam0)
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

void func_248(var uParam0)
{
	if (func_503(uParam0->f_162))
	{
		func_504(&(uParam0->f_162), 1, 1);
	}
	if (func_503(uParam0->f_163))
	{
		func_504(&(uParam0->f_163), 1, 1);
	}
	if (func_503(uParam0->f_164))
	{
		func_504(&(uParam0->f_164), 1, 1);
	}
	if (func_503(uParam0->f_165))
	{
		func_504(&(uParam0->f_165), 1, 1);
	}
}

void func_249(var uParam0)
{
	if (uParam0->f_170)
	{
		func_505();
	}
}

void func_250(var uParam0)
{
	if (uParam0->f_48 && !uParam0->f_45)
	{
		func_506(32);
		func_85(uParam0->f_3, 1, 0, 0, 2, 0, 0, 1);
	}
}

bool func_251(var uParam0)
{
	if (func_507(uParam0) || uParam0->f_44)
	{
		uParam0->f_44 = 1;
		func_508(uParam0->f_3);
		func_461(uParam0, 0, 1);
		func_509(uParam0->f_3, uParam0->f_51.f_5, 0, uParam0->f_43, -1);
		func_510(0, 0);
		return true;
	}
	return false;
}

void func_252(vector3 vParam0, int iParam3)
{
	if (func_79(vParam0))
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
			if (func_511(vVar2, vParam0, 2f, 1))
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

void func_253()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

bool func_254(int iParam0)
{
	if (!func_243(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0]->f_4 > 0;
}

char* func_255(char* sParam0)
{
	return sParam0;
}

Vector3 func_256(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return 0f, 0f, 0f;
	}
	if (!func_243(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (func_512(iParam0) == 0)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = (func_513(iParam0) + iParam1);
	if (iVar0 >= 892)
	{
		return 0f, 0f, 0f;
	}
	return *Global_1310750->f_13358[iVar0];
}

void func_257(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_122(iParam0, 32))
	{
		if (func_514(iParam0, uParam1->f_4, &(uParam1->f_12)))
		{
			if (bParam4)
			{
				vVar1 = { func_515(Global_35, &(uParam1->f_12)) };
				if (!func_79(vVar1))
				{
					*uParam1 = { vVar1 };
				}
			}
		}
	}
	if (bParam2)
	{
		func_516(uParam1, bParam2);
	}
	if (bParam3)
	{
		fVar4 = func_486(iParam0);
		iVar0 = _create_volume_cylinder_with_custom_name(*uParam1, 0f, 0f, 0f, fVar4, fVar4, fVar4, func_487());
		if (func_517(Global_1310750[iParam0], 33554432))
		{
			func_489(iVar0, func_488(iParam0), 1, 0, 2, 0, -1082130432);
		}
		else
		{
			func_489(iVar0, func_488(iParam0), 1, 0, 8, 0, -1082130432);
		}
		if (func_122(iParam0, 1))
		{
			func_518(*uParam1 + Vector(1f, 0f, 0f), 25f, "Beat Inner", 1, 0, 32, 0, -1082130432);
		}
	}
	func_519(iParam0);
}

bool func_258(int iParam0, var uParam1)
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
			func_520(uParam1, *(*Global_1310750)[iParam0]->f_4.f_4[iVar0]);
		}
		iVar0++;
	}
	if (func_216(iParam0, 16))
	{
		_0xb8e3486d107f4194(*uParam1, 55f);
		_0x827a58ced9d4d5b4(*uParam1, 180f);
		fVar2 = to_float(func_521(iParam0));
		fVar1 = 60f;
	}
	else
	{
		_0x65d281985f2bdfc2(*uParam1, 35f);
		_0x827a58ced9d4d5b4(*uParam1, 65f);
		fVar2 = to_float(func_521(iParam0));
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

void func_259(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4)
{
	switch (func_522(iParam0))
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
			if (!func_122(iParam0, 1))
			{
				if (func_216(iParam0, 2))
				{
				}
			}
			func_523(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		case 2:
			func_524(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		case 3:
			func_524(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = 7f;
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		default:
			break;
	}
	if (func_223(iParam0))
	{
		*fParam2 = 40000f;
	}
}

Vector3 func_260(bool bParam0, int iParam1, var uParam2, var uParam3)
{
	fVar7 = 999999.9f;
	fVar8 = 0f;
	*bParam0 = 1;
	iVar0 = 0;
	while (iVar0 < func_512(iParam1))
	{
		if (!func_525(iParam1, iVar0))
		{
			vVar4 = { func_256(iParam1, iVar0) };
			if (!func_79(vVar4))
			{
				fVar8 = vdist(Global_36, vVar4);
				if (func_265(fVar8, iParam1))
				{
					*bParam0 = 0;
				}
				if (fVar8 < fVar7)
				{
					if (func_526(iParam1, vVar4, uParam2, uParam3))
					{
						fVar7 = vdist(Global_36, vVar4);
						vVar1 = { vVar4 };
					}
				}
			}
		}
		iVar0++;
	}
	if (!func_79(vVar4))
	{
	}
	return vVar1;
}

int func_261(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, int iParam5)
{
	if (uParam0->f_8 >= iParam4)
	{
		if (bParam3)
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_28("BEAT_FAIL", 5000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam2 = 1;
	}
	*uParam1 = iParam5;
	uParam0->f_8++;
	return 0;
}

int func_262(int iParam0, vector3 vParam1)
{
	iVar0 = 0;
	while (iVar0 < func_512(iParam0))
	{
		vVar1 = { func_256(iParam0, iVar0) };
		if (func_511(vVar1, vParam1, 1056964608, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_263(var uParam0)
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

int func_264(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	vVar2 = { *uParam0 };
	func_527(Global_35, *uParam0, &(uParam0->f_37), 1061158912, 0, 0);
	if (func_528(&(uParam0->f_37), 500))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!func_79(*uParam0->f_12[iVar0]))
			{
				vVar5 = { *uParam0->f_12[iVar0] };
				vVar8 = { _0x83acc65d9acec5ef(Global_36, vVar2, vVar5, true) };
				if (vdist2(Global_36, vVar8) <= (35f * 35f) || vdist2(Global_36, *uParam0->f_12[iVar0]) <= (80f * 80f))
				{
					if (bParam4)
					{
						iVar1 = func_529(uParam0);
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
	return func_261(uParam0, uParam1, uParam2, bParam3, 16, 1000);
}

bool func_265(float fParam0, int iParam1)
{
	fVar3 = (fParam0 * fParam0);
	func_259(iParam1, &fVar0, &fVar1, &uVar2, 1);
	if (fVar3 > fVar1)
	{
		return false;
	}
	if (func_122(iParam1, 1))
	{
		if (fVar3 < fVar0)
		{
			return false;
		}
	}
	return true;
}

bool func_266(var uParam0, bool bParam1)
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

bool func_267(int iParam0, var uParam1, var uParam2, struct<7> Param3, bool bParam10)
{
	if (func_530(iParam0, *uParam2))
	{
		return false;
	}
	if (!func_531(iParam0, uParam2))
	{
		return false;
	}
	if (!func_532(Param3))
	{
		return false;
	}
	if (bParam10)
	{
		if (!func_533(*uParam2, Global_35))
		{
			return false;
		}
	}
	return true;
}

bool func_268(int iParam0, int iParam1, var uParam2)
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

void func_269(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = _create_volume_cylinder_with_custom_name(vParam1, vParam4, vParam7, sParam10);
}

void func_270(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 0);
	if (bParam3)
	{
		func_118(&iParam1, 8192);
	}
	if (bParam4)
	{
		_0x2161278c6322f740(iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, iParam0);
	}
}

bool func_271(int iParam0)
{
	if (!func_534(iParam0))
	{
		return false;
	}
	return func_535(iParam0, 4, 1);
}

int func_272(int iParam0)
{
	if (!func_534(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 2:
			return -1080874779;
		case 3:
			return -755485480;
		case 6:
			return 747460826;
		case 7:
			return 1627068364;
		case 13:
			return -1067476102;
		case 15:
			return -1080874779;
		case 18:
			return -801397594;
		case 19:
			return 730856618;
		case 20:
			return -486559882;
		case 23:
			return -1976480343;
		case 26:
			return 1895068170;
		case 29:
			return -1067476102;
		case 34:
			return 1566032147;
		case 38:
			return 2036955137;
		case 40:
			return 1566032147;
		case 43:
			return -755485480;
	}
	return 0;
}

bool func_273(int iParam0)
{
	iVar0 = _item_database_get_acquire_costs_count(iParam0);
	Var1.f_4 = 15;
	Var1.f_36 = 10;
	iVar48 = 0;
	while (iVar48 < iVar0)
	{
		if (_item_database_get_acquire_cost(iParam0, iVar48, &Var1))
		{
			if (Var1.f_2 == 1644203656 && !func_536(iParam0, Var1, 1))
			{
				return true;
			}
		}
		iVar48++;
	}
	return false;
}

int func_274(int iParam0)
{
	iVar1 = iParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_537(&iVar1, -2147483648);
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

int func_275()
{
	return get_player_group(get_player_index());
}

bool func_276(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_90() != -1)
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

void func_277(var uParam0)
{
	if (*uParam0 != 0)
	{
		request_model(*uParam0, false);
	}
}

bool func_278(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_279(int iParam0)
{
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_280(int iParam0, int iParam1)
{
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_279(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_538(iParam0, 1399091007))
	{
		func_539(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_281(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_540(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_542(&Var0, func_541(0));
	}
	if (!func_543(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_544(iVar14);
	return uVar15;
}

int func_282(bool bParam0)
{
	if (func_90() == -1)
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

bool func_283(int iParam0, int iParam1)
{
	if (!func_278(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_280(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_545("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_546(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_362(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_544(iVar1);
				return true;
			}
			iVar3++;
		}
		func_544(iVar1);
	}
	return false;
}

bool func_284(int iParam0)
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

char* func_285(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

char* func_286(int iParam0)
{
	switch (iParam0)
	{
		case 43:
			return "script@beat@wilderness@herbalistcamp@herbalistYarrowReturn";
		case 18:
			return "script@beat@wilderness@herbalistcamp@herbalistGcurrantReturn";
		case 40:
			return "script@beat@wilderness@herbalistcamp@herbalistVsnowdropReturn";
		case 19:
			return "script@beat@wilderness@herbalistcamp@herbalistHBSageReturn";
		default:
			break;
	}
	return "INVALID";
}

char* func_287(int iParam0)
{
	switch (iParam0)
	{
		case 43:
			return "script@beat@wilderness@herbalistcamp@herbalistInitialYarrow";
		case 18:
			return "script@beat@wilderness@herbalistcamp@herbalistInitialGcurrant";
		case 40:
			return "script@beat@wilderness@herbalistcamp@herbalistInitialVsnowdrop";
		case 19:
			return "script@beat@wilderness@herbalistcamp@herbalistInitialHBSage";
		default:
			break;
	}
	return "INVALID";
}

int func_288(var uParam0, var uParam1)
{
	vVar0 = { *uParam0 };
	if (func_547(&uParam1))
	{
		return 1;
	}
	if (!func_548(&vVar0, 1, 10, 0))
	{
		return 0;
	}
	*uParam0 = { vVar0 };
	return 1;
}

bool func_289(var uParam0)
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

int func_290(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_549(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_291(int iParam0)
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

void func_292(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || func_98(iParam0, 0, 0))
	{
		decor_set_bool(iParam0, "HAS_VOICE", true);
		set_ambient_voice_name(iParam0, sParam1);
	}
}

bool func_293(var uParam0)
{
	return func_301(*uParam0, 4);
}

bool func_294(var uParam0)
{
	return func_301(*uParam0, 64);
}

bool func_295(var uParam0)
{
	return func_301(*uParam0, 8);
}

void func_296(int iParam0, bool bParam1, bool bParam2)
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

bool func_297(var uParam0)
{
	return func_301(*uParam0, 128);
}

bool func_298(var uParam0)
{
	return func_301(*uParam0, 2048);
}

void func_299(int iParam0, bool bParam1)
{
	set_ped_config_flag(iParam0, 130, !bParam1);
	set_ped_config_flag(iParam0, 178, bParam1);
}

bool func_300(var uParam0)
{
	return func_301(*uParam0, 1024);
}

bool func_301(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_302(var uParam0)
{
	return func_301(*uParam0, 256);
}

void func_303(int iParam0, bool bParam1)
{
	set_ped_config_flag(iParam0, 146, !bParam1);
	set_ped_config_flag(iParam0, 148, !bParam1);
}

bool func_304(var uParam0)
{
	return func_301(*uParam0, 512);
}

bool func_305(var uParam0)
{
	return func_301(*uParam0, 4096);
}

int func_306(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 0;
				case 3:
					return 0;
				case 4:
					return 0;
				case 5:
					return 0;
				case 6:
					return 0;
				case 7:
					return 0;
				case 8:
					return 0;
				case 9:
					return 0;
				case 10:
					return 0;
				case 11:
					return 0;
				case 12:
					return 0;
				case 13:
					return 0;
				case 14:
					return 0;
				case 15:
					return 0;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 0;
				case 3:
					return 0;
				default:
					break;
			}
			break;
	}
	return 0;
}

Vector3 func_307(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -1369.092f, 112.5304f, 83.7997f;
				case 1:
					return -1419.432f, -1519.578f, 85.4243f;
				case 2:
					return 2696.483f, 281.4122f, 60.5879f;
				case 3:
					return 887.6382f, 1265.848f, 234.0708f;
				case 4:
					return 1212.406f, 731.8035f, 100.6271f;
				case 5:
					return 1073.291f, 47.2678f, 85.9555f;
				case 6:
					return 2524.885f, 1704.788f, 86.7904f;
				case 7:
					return 2327.495f, 1822.98f, 122.7985f;
				case 8:
					return 2333.665f, 348.8242f, 55.0387f;
				case 9:
					return 1173.026f, -2168.264f, 54.2849f;
				case 10:
					return 1568.686f, -198.235f, 79.6169f;
				case 11:
					return 818.8927f, -1431.735f, 52.9105f;
				case 12:
					return 913.5112f, -560.4623f, 89.0854f;
				case 13:
					return -2249.065f, -1559.684f, 148.8786f;
				case 14:
					return -2433.508f, -1344.774f, 152.7462f;
				case 15:
					return -2063.969f, -1288.022f, 117.0141f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -1576.12f, -1671.869f, 78.1639f;
				case 1:
					return 705.653f, 1890.997f, 238.597f;
				case 2:
					return -4486.521f, -2936.634f, -17.8423f;
				case 3:
					return 567.0672f, 174.5635f, 133.2414f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_308(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 299.52f;
				case 1:
					return 0f, 0f, 275.76f;
				case 2:
					return 0f, 0f, -275.04f;
				case 3:
					return 0f, 0f, -70.56f;
				case 4:
					return 0f, 0f, 175.68f;
				case 5:
					return 0f, 0f, 252.72f;
				case 6:
					return 0f, 0f, 105.84f;
				case 7:
					return 0f, 0f, 190.8f;
				case 8:
					return 0f, 0f, 230.4f;
				case 9:
					return 0f, 0f, 207.36f;
				case 10:
					return 0f, 0f, 4.32f;
				case 11:
					return 0f, 0f, -221.76f;
				case 12:
					return 0f, 0f, 241.92f;
				case 13:
					return 0f, 0f, 301.68f;
				case 14:
					return 0f, 0f, 74.88f;
				case 15:
					return 0f, 0f, 257.76f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -171.36f;
				case 1:
					return 0f, 0f, -99.36f;
				case 2:
					return 0f, 0f, 1f;
				case 3:
					return 0f, 0f, -191.52f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_309(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 0;
				case 3:
					return 0;
				case 4:
					return 0;
				case 5:
					return 0;
				case 6:
					return 0;
				case 7:
					return 0;
				case 8:
					return 0;
				case 9:
					return 0;
				case 10:
					return 0;
				case 11:
					return 0;
				case 12:
					return 0;
				case 13:
					return 0;
				case 14:
					return 0;
				case 15:
					return 0;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 0;
				case 3:
					return 0;
				default:
					break;
			}
			break;
	}
	return 0;
}

Vector3 func_310(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -1375.984f, 108.9796f, 83.7018f;
				case 1:
					return -1408.55f, -1522.986f, 85.1073f;
				case 2:
					return 2696.87f, 278.6988f, 60.5321f;
				case 3:
					return 885.0094f, 1265.08f, 233.7076f;
				case 4:
					return 1211.431f, 719.9561f, 100.3598f;
				case 5:
					return 1071.506f, 51.3335f, 85.8447f;
				case 6:
					return 2516.969f, 1703.515f, 86.3327f;
				case 7:
					return 2325.517f, 1819.271f, 122.1497f;
				case 8:
					return 2331.519f, 360.0928f, 55.4513f;
				case 9:
					return 1171.611f, -2183.105f, 53.9324f;
				case 10:
					return 1571.554f, -199.0512f, 79.4281f;
				case 11:
					return 822.4827f, -1425.274f, 52.6888f;
				case 12:
					return 917.1799f, -565.3954f, 88.9516f;
				case 13:
					return -2250.794f, -1556.735f, 148.8041f;
				case 14:
					return -2424.391f, -1341.52f, 152.5463f;
				case 15:
					return -2063.463f, -1296.856f, 116.1337f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -1574.672f, -1663.685f, 77.9852f;
				case 1:
					return 717.2708f, 1880.057f, 238.5362f;
				case 2:
					return -4477.402f, -2941.413f, -19.301f;
				case 3:
					return 564.3894f, 172.728f, 133.1894f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_311(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -11.52f;
				case 1:
					return 0f, 0f, 30.96f;
				case 2:
					return 9.7f, -1.1f, 115.515f;
				case 3:
					return 0f, -4.9f, 5.76f;
				case 4:
					return 0f, 0f, 8.64f;
				case 5:
					return 0f, 0f, 137.52f;
				case 6:
					return 0f, 0f, 210.96f;
				case 7:
					return 6.05f, 0f, -5.325f;
				case 8:
					return 0f, 0f, -131.04f;
				case 9:
					return 0f, 0f, 249.84f;
				case 10:
					return 0f, 0f, -90.44f;
				case 11:
					return 0f, 0f, -12.96f;
				case 12:
					return 0f, 0f, -5.76f;
				case 13:
					return 0f, 4.7f, -130.32f;
				case 14:
					return 0f, 0f, 133.92f;
				case 15:
					return 0f, 0f, 337.68f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 208.08f;
				case 1:
					return 0.4f, 0f, 11.52f;
				case 2:
					return 0f, 0f, 128.16f;
				case 3:
					return 0f, 0f, 56.16f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_312(int iParam0)
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

int func_313(int iParam0)
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

void func_314(var uParam0, vector3 vParam1, float fParam4)
{
	iVar0 = 258;
	func_550(uParam0, vParam1, fParam4, 1, iVar0, 0);
}

void func_315(var uParam0, vector3 vParam1, float fParam4, int iParam5, bool bParam6)
{
	iVar0 = 61;
	if (bParam6)
	{
		iVar0 |= 2 | 256;
	}
	func_550(uParam0, vParam1, fParam4, 1, iVar0, 0);
}

void func_316(var uParam0, vector3 vParam1, float fParam4)
{
	iVar0 = 258;
	func_550(uParam0, vParam1, fParam4, 2, iVar0, 0);
}

void func_317(var uParam0, var uParam1, int iParam2)
{
	iVar0 = 258;
	func_551(uParam0, 1, iVar0, uParam1, iParam2);
}

void func_318(var uParam0, var uParam1, bool bParam2, int iParam3)
{
	iVar0 = 61;
	if (bParam2)
	{
		iVar0 |= 2 | 256;
	}
	func_551(uParam0, 1, iVar0, uParam1, iParam3);
}

void func_319(var uParam0, var uParam1, int iParam2)
{
	iVar0 = 258;
	func_551(uParam0, 2, iVar0, uParam1, iParam2);
}

bool func_320(int iParam0, int iParam1, int iParam2, float fParam3)
{
	iVar0 = get_frame_count();
	if (iVar0 > iParam1->f_5)
	{
		func_552(iParam1, 0, iVar0);
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
				if (func_553(iParam1, 4000))
				{
					if ((func_554(iParam0, Global_1935630->f_41, *iParam1 & 128 != 0, 0, *iParam1 & 256 != 0) && func_555(iParam1, iParam0)) && func_556(iParam1, iParam0))
					{
						func_557();
						*iParam2 = 2;
						func_558(iParam0, iParam1, *iParam2);
						return true;
					}
				}
			}
		}
		if (!iParam1->f_1 & 2 != 0)
		{
			if (iParam1->f_12 < 4f)
			{
				if (func_553(iParam1, 4000))
				{
					if ((func_554(iParam0, Global_1935630->f_41, *iParam1 & 128 != 0, 1, *iParam1 & 256 != 0) && func_555(iParam1, iParam0)) && func_556(iParam1, iParam0))
					{
						func_557();
						*iParam2 = 2;
						func_558(iParam0, iParam1, *iParam2);
						return true;
					}
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*iParam1 & 131072 == 0)
						{
							if (func_559(iParam0, Global_1935630->f_41))
							{
								func_557();
								*iParam2 = 2;
								func_558(iParam0, iParam1, *iParam2);
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
						if (func_559(iParam0, Global_1935630->f_41))
						{
							func_557();
							*iParam2 = 2;
							func_558(iParam0, iParam1, *iParam2);
							return true;
						}
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*iParam1 & 131072 == 0)
				{
					if (func_560())
					{
						if (func_559(iParam0, Global_1935630->f_42))
						{
							func_557();
							*iParam2 = 2;
							func_558(iParam0, iParam1, *iParam2);
							return true;
						}
					}
				}
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_561(iParam1, 1065353216))
			{
				if (!iParam1->f_1 & 4 != 0)
				{
					if (func_562(Global_35, iParam0, iParam1))
					{
						func_557();
						*iParam2 = 4;
						func_558(iParam0, iParam1, *iParam2);
						return true;
					}
				}
				if (!iParam1->f_1 & 256 != 0)
				{
					if (func_563(Global_35, iParam0, iParam1))
					{
						func_557();
						*iParam2 = 256;
						func_558(iParam0, iParam1, *iParam2);
						return true;
					}
				}
			}
		}
		if (!iParam1->f_1 & 131072 != 0)
		{
			if (func_564(iParam0, iParam1))
			{
				func_557();
				*iParam2 = 131072;
				func_558(iParam0, iParam1, *iParam2);
				return true;
			}
		}
		if (*iParam1 & 4 != 0)
		{
			if (func_565(iParam0, iParam1))
			{
				func_557();
				*iParam2 = 262144;
				func_558(iParam0, iParam1, *iParam2);
				return true;
			}
		}
	}
	return false;
}

bool func_321(int iParam0, int iParam1)
{
	if (!func_13(iParam0, 11))
	{
		bVar1 = func_566(iParam0);
		if (func_567(iParam0->f_7, 0, iParam1, &iVar0, 1, 0) || bVar1)
		{
			if (!bVar1 && iVar0 == 256)
			{
				if (!func_208(Global_35, iParam0->f_7, 7f, 1))
				{
					if (_0xc6a7dc546e94fed5(iParam0->f_7, -1102089407, 0, 0) > -1 || _0xc6a7dc546e94fed5(iParam0->f_7, -1507090758, 0, 0) > -1)
					{
					}
					else
					{
						return false;
					}
				}
			}
			if (!is_entity_dead(iParam0->f_7))
			{
				func_175(&(iParam0->f_9));
				bVar2 = false;
				if (func_13(iParam0, 12))
				{
					if (iParam0->f_1 == 3 && !func_13(iParam0, 15))
					{
						bVar2 = true;
					}
				}
				if (is_entity_dead(iParam0->f_7))
				{
					if (bVar2)
					{
						func_568(4, 1142025875, 0, 0, 0, 0, 1065353216, 0);
					}
					else
					{
						func_568(3, 1142025875, 0, 0, 0, 0, 1065353216, 0);
					}
				}
				else if (bVar2)
				{
					func_568(4, 1877013492, 0, 0, 0, 0, 1065353216, 0);
				}
				else
				{
					func_568(3, 1877013492, 0, 0, 0, 0, 1065353216, 0);
				}
				clear_ped_secondary_task(iParam0->f_7);
				stop_current_playing_speech(iParam0->f_7, 0);
				func_428(iParam0);
				func_426(&(iParam0->f_284));
				func_569(&(iParam0->f_7));
				func_570(&(iParam0->f_7), &(iParam0->f_284), &(iParam0->f_284.f_21), 1, 1);
				func_185(iParam0, 3, 3);
				if (!iParam0->f_221)
				{
					if (!func_571(iVar0, 1024))
					{
						iParam0->f_221 = 1;
					}
				}
				else
				{
					iParam0->f_221 = 0;
				}
				iParam0->f_1 = 9;
			}
			else
			{
				iParam0->f_1 = 11;
			}
			func_425(iParam0);
			func_72(iParam0, 11);
			return true;
		}
	}
	return false;
}

int func_322(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

void func_323(int iParam0, int iParam1)
{
	func_175(&(iParam0->f_9));
	func_174(iParam0, 262144);
	func_426(&(iParam0->f_284));
	func_569(&(iParam0->f_7));
	func_570(&(iParam0->f_7), &(iParam0->f_284), &(iParam0->f_284.f_21), 1, 1);
	_task_smart_flee_style_ped(iParam0->f_7, Global_35, 3, 0, -1082130432, -1, iParam0->f_434.f_5);
	set_ped_keep_task(iParam0->f_7, true);
}

bool func_324()
{
	if (func_16())
	{
		if (!func_17(5))
		{
			return true;
		}
	}
	return false;
}

void func_325(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (bParam1)
		{
			func_572(iParam0, Global_35, 2, 28, bParam2);
			func_572(iParam0, Global_35, 2, 29, bParam2);
		}
		else
		{
			func_572(iParam0, Global_35, 0, 9, bParam2);
			func_572(iParam0, Global_35, 0, 14, bParam2);
		}
		if (has_anim_event_fired(iParam0, -469521200) && !bParam2)
		{
			bVar0 = func_16();
			if (bParam3)
			{
				if (!bVar0)
				{
					func_206(iParam0, Global_35, "RE_HEC_UNI_V1_CALLOVER", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					func_206(iParam0, Global_35, "RE_HEC_UNI_V1_CALLOVER_INTRO", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
			}
			else if (!bParam4)
			{
				func_206(iParam0, Global_35, "RE_HEC_UNI_V1_CALLOVER_2ND", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				func_206(iParam0, Global_35, "RE_HEC_UNI_V1_CALLOVER_LEFT", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
		}
		func_572(iParam0, Global_35, 0, 3, 0);
		if (get_random_int_in_range(0, 2) == 0)
		{
			func_572(iParam0, Global_35, 1, 20, 0);
		}
		else
		{
			func_572(iParam0, Global_35, 1, 21, 0);
		}
		func_572(iParam0, Global_35, 6, 53, 0);
		func_572(iParam0, Global_35, 6, 54, 0);
		func_572(iParam0, Global_35, 6, 51, 0);
		func_572(iParam0, Global_35, 6, 52, 0);
		func_572(iParam0, Global_35, 6, 55, 0);
		func_572(iParam0, Global_35, 6, 56, 0);
		func_572(iParam0, Global_35, 4, 41, 0);
		func_572(iParam0, Global_35, 4, 42, 0);
		func_572(iParam0, Global_35, 4, 39, 0);
		func_572(iParam0, Global_35, 4, 40, 0);
		func_572(iParam0, Global_35, 4, 43, 0);
		func_572(iParam0, Global_35, 4, 44, 0);
		func_572(iParam0, Global_35, 3, 35, 0);
		func_572(iParam0, Global_35, 3, 36, 0);
		func_572(iParam0, Global_35, 3, 33, 0);
		func_572(iParam0, Global_35, 3, 34, 0);
		func_572(iParam0, Global_35, 3, 37, 0);
		func_572(iParam0, Global_35, 3, 38, 0);
		func_572(iParam0, Global_35, 5, 47, 0);
		func_572(iParam0, Global_35, 5, 48, 0);
		func_572(iParam0, Global_35, 5, 45, 0);
		func_572(iParam0, Global_35, 5, 46, 0);
		func_572(iParam0, Global_35, 5, 49, 0);
		func_572(iParam0, Global_35, 5, 50, 0);
	}
}

void func_326(int* iParam0)
{
	func_360(iParam0, 9);
}

int func_327(int* iParam0, var uParam1, bool bParam2)
{
	iVar0 = func_573(3, 0, 0);
	func_118(&iVar0, 8);
	if (bParam2)
	{
		func_119(&iVar0, 16);
	}
	iVar1 = -1;
	if (!func_301(iParam0->f_73, 4))
	{
		iVar1 = func_574(uParam1, iParam0, 15f, &(iParam0->f_21), &(iParam0->f_74), 0, 1, 0, 0, iVar0, 0, 0, 2, 1, -1082130432, 0);
	}
	if (iVar1 > -1)
	{
		if (iVar1 == 0)
		{
			if (!func_301(iParam0->f_73, 1))
			{
				if (func_301(iParam0->f_73, 1))
				{
					func_575(&(iParam0->f_73), 2);
				}
			}
		}
		func_328(iParam0, 0);
		iParam0->f_21[iVar1]->f_13 = "";
	}
	return iVar1;
}

void func_328(int* iParam0, bool bParam1)
{
	func_576(&(iParam0->f_21), bParam1, 0);
}

void func_329(var uParam0, var uParam1)
{
	iVar1 = 0;
	if (func_577(uParam0))
	{
		func_578(uParam0, uParam1);
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (iVar0 > uParam0->f_523)
			{
				if (func_345(uParam0, iVar0))
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar1 != 0)
		{
			if (!func_330(uParam0, 0))
			{
				func_579(uParam0, iVar1);
			}
			else
			{
				func_580(uParam0, iVar1);
			}
		}
	}
}

bool func_330(int iParam0, bool bParam1)
{
	if (bParam1 && !func_577(iParam0))
	{
		return false;
	}
	return func_13(iParam0, 41);
}

void func_331(int iParam0)
{
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
	if (!is_entity_dead(iParam0))
	{
		func_581(&Var0, Global_35, 0, 0, 1, 1, 2, 1, 0, 0, 0, 0);
		_0x66f9eb44342bb4c5(iParam0, &Var0);
	}
}

void func_332(var uParam0, int iParam1, bool bParam2)
{
	func_359(uParam0->f_21[iParam1], bParam2, 0);
}

bool func_333(var uParam0)
{
	return func_582(*uParam0, 1);
}

void func_334(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_335(int iParam0, var uParam1, var uParam2)
{
	return func_583(iParam0, uParam1);
}

void func_336(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 2:
			func_185(iParam0, 2, 2);
			break;
		case 3:
			func_185(iParam0, 3, 2);
			break;
		case 4:
			func_185(iParam0, 1, 1);
			break;
	}
}

bool func_337(int iParam0, var uParam1, var uParam2)
{
	return func_584(iParam0, uParam1);
}

int func_338(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 2:
			return iParam0->f_525;
		case 3:
			return iParam0->f_526;
		case 1:
			return iParam0->f_219;
		case 5:
			return iParam0->f_527;
		case 6:
			return iParam0->f_528;
		default:
			break;
	}
	return 0;
}

int func_339(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 1;
				case 2:
					return 3;
				default:
					break;
			}
			return 5;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1;
				case 1:
					return 3;
				default:
					break;
			}
			return 5;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 3;
				case 1:
					return 3;
				case 2:
					return 3;
				default:
					break;
			}
			return 5;
		case 5:
			return 1;
		case 6:
			switch (iParam1)
			{
				case 1:
					return 4;
				default:
					break;
			}
			return 3;
		case 7:
			return 4;
		case 4:
			return 2;
	}
	return 0;
}

bool func_340(int iParam0, var uParam1, int iParam2)
{
	bVar0 = false;
	switch (func_585(iParam0, uParam1, iParam2, iParam0->f_529))
	{
		case 4:
			switch (iParam2)
			{
				case 5:
					func_72(iParam0, 51);
					break;
				case 6:
					func_72(iParam0, 53);
					break;
				case 7:
					func_72(iParam0, 55);
					break;
			}
			return true;
		case 1:
			if (iParam2 == 5)
			{
				bVar0 = func_13(iParam0, 67);
			}
			func_206(iParam0->f_7, Global_35, func_586(iParam2, func_338(iParam0, iParam2), bVar0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			func_587(iParam0, iParam2);
			break;
		case 2:
			iParam0->f_524 = 0;
			break;
		case 5:
			func_72(iParam0, 44);
			break;
	}
	return false;
}

void func_341(var uParam0)
{
	func_588(uParam0, 0f);
}

float func_342(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 3f;
		case 3:
			return 3f;
		case 1:
			return 3f;
		case 5:
			return 3f;
		case 6:
			return 3f;
		case 7:
			return 3f;
		case 4:
			return 3f;
		default:
			break;
	}
	return 1f;
}

bool func_343(var uParam0, float fParam1)
{
	if (!func_333(uParam0))
	{
		return false;
	}
	if (func_589(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_344(int iParam0)
{
	if (iParam0->f_523 != 1)
	{
		if (func_345(iParam0, 1))
		{
			if (!func_345(iParam0, iParam0->f_523))
			{
				if (!func_205(iParam0->f_7, 0))
				{
					if (!func_333(&(iParam0->f_496)) || func_343(&(iParam0->f_496), 1.5f))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_345(int iParam0, int iParam1)
{
	return is_bit_set(iParam0->f_511, iParam1);
}

bool func_346(int iParam0, var uParam1, var uParam2)
{
	bVar1 = func_13(iParam0, 47);
	if (!bVar1 && _0x9c54041bb66bcf9e(iParam0->f_7, iParam0->f_87))
	{
		if (iParam0->f_514)
		{
			if (!_0x916b8e075abc8b4e(iParam0->f_7, 1))
			{
				func_423(iParam0, -1f);
			}
			else if (_0x916b8e075abc8b4e(iParam0->f_7, 0))
			{
				return true;
			}
		}
		else
		{
			if (_0x916b8e075abc8b4e(iParam0->f_7, 1))
			{
				func_590(iParam0);
			}
			return true;
		}
	}
	else if (func_591(iParam0))
	{
		iParam0->f_512 = -1;
		open_sequence_task(&iVar0);
		task_turn_ped_to_face_entity(0, Global_35, floor(((6f * 0.5f) * 1000f)), -1082130432, -1082130432, -1082130432);
		iParam0->f_512++;
		if (!bVar1)
		{
			task_follow_nav_mesh_to_coord(0, _get_scenario_point_coords(iParam0->f_87, true), 1f, -1, 3f, 0, _get_scenario_point_heading(iParam0->f_87, true));
		}
		if (func_322(iParam0->f_7, 0, 1, 0) != -1569615261)
		{
			set_current_ped_weapon(iParam0->f_7, -1569615261, false, 0, false, false);
			task_swap_weapon(0, 1, 0, 0, 0);
		}
		if (func_13(iParam0, 47))
		{
			task_wander_in_area(0, func_9(uParam1), 5f, 1077936128, 1086324736, 1);
		}
		else
		{
			_task_use_scenario_point(0, iParam0->f_87, func_170(2093245709), -1, true, false, 0, false, -1f, false);
		}
		func_171(iParam0->f_7, &iVar0, 0, 0, 1, 1);
		if (func_333(&(iParam0->f_502)))
		{
			func_341(&(iParam0->f_502));
		}
		iParam0->f_519 = 1;
	}
	else if (bVar1)
	{
		if (func_169(iParam0->f_7, 242628503))
		{
			if (get_sequence_progress(iParam0->f_7) > iParam0->f_512)
			{
				return true;
			}
		}
	}
	return false;
}

void func_347(int iParam0)
{
	if (func_13(iParam0, 63))
	{
		func_592(iParam0->f_284.f_97[0], iParam0->f_284.f_21[0], 1);
		func_73(iParam0, 63);
	}
}

void func_348(int iParam0)
{
	if (func_330(iParam0, 1))
	{
		func_73(iParam0, 41);
		if (func_333(&(iParam0->f_212)))
		{
			func_341(&(iParam0->f_212));
		}
		if (func_333(&(iParam0->f_496)))
		{
			func_334(&(iParam0->f_496));
		}
		if (func_333(&(iParam0->f_499)))
		{
			func_334(&(iParam0->f_499));
		}
		if (func_333(&(iParam0->f_459)))
		{
			if (func_593(&(iParam0->f_459)))
			{
				func_594(&(iParam0->f_459));
			}
		}
		if (iParam0->f_515 && !func_13(iParam0, 46))
		{
			func_196(iParam0, 262144);
			func_395(iParam0, 5f, 0);
		}
		iParam0->f_514 = 0;
		iParam0->f_515 = 0;
		iParam0->f_518 = 0;
		iParam0->f_516 = 0;
		iParam0->f_517 = 0;
		iParam0->f_524 = 0;
		func_196(iParam0, 64);
		func_595(&(iParam0->f_284));
		iParam0->f_523 = 0;
	}
}

int func_349(int iParam0, bool bParam1)
{
	iVar0 = func_596();
	if (bParam1 && is_entity_dead(iVar0))
	{
		return -1;
	}
	return &Global_1955499;
}

void func_350(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = func_596();
	if (!is_entity_dead(iVar0))
	{
		iVar1 = 0;
		iVar2 = iParam0;
		if (iParam0 == -1)
		{
			iVar2 = func_349(iParam1, bParam2);
			if (iVar2 != -1)
			{
				iVar1 = (*Global_1955500)[iVar2]->f_2;
				if (func_597(iVar2, 512))
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

void func_351(var uParam0)
{
	if (!is_entity_dead(uParam0->f_434.f_5))
	{
		switch (uParam0->f_434.f_4)
		{
			case 0:
				func_598(uParam0->f_434.f_5, -1587187585, -1, 1, 0, -1082130432);
				break;
			case 1:
				func_598(uParam0->f_434.f_5, 441729777, -1, 1, 0, -1082130432);
				break;
			case 2:
				func_598(uParam0->f_434.f_5, 696740378, -1, 1, 0, -1082130432);
				break;
			case 3:
				func_598(uParam0->f_434.f_5, -203162028, -1, 1, 0, -1082130432);
				break;
		}
	}
}

void func_352(var uParam0)
{
	func_599(&(uParam0->f_21), 0, 0, 0, 1);
	func_600(uParam0, 0, 1);
	func_600(uParam0, 1, 1);
}

void func_353(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_13(iParam0, 21))
		{
			func_441(&(iParam0->f_284));
			func_72(iParam0, 21);
		}
	}
	else if (func_13(iParam0, 21))
	{
		func_441(&(iParam0->f_284));
		func_73(iParam0, 21);
	}
}

void func_354(var uParam0, int iParam1, int iParam2, int iParam3)
{
	func_601(uParam0, iParam1, iParam3);
	func_602(uParam0, iParam2, iParam3);
}

int func_355(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_603();
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
		if (func_30(iParam2, 128))
		{
			_0x7c00cfc48a782dc0(iParam1, iParam0, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
		}
		if (func_301(Global_1955500[iVar0], 0))
		{
			func_604(iVar0, 1024);
			func_604(iVar0, 16);
			func_604(iVar0, 256);
		}
		func_604(iVar0, iParam2);
	}
	return iVar0;
}

void func_356(int iParam0, int iParam1)
{
	if (func_176(iParam0, 1, 1))
	{
		func_605((*Global_1955500)[iParam0], iParam1);
	}
}

bool func_357(int iParam0, var uParam1)
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

bool func_358(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

void func_359(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_358(iParam0, 13))
	{
		func_360(iParam0, 0);
	}
	else
	{
		func_361(iParam0, 0);
	}
	if (func_503(iParam0->f_6))
	{
		if (bParam2)
		{
			func_504(&(iParam0->f_6), 0, 1);
		}
	}
}

void func_360(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_361(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

bool func_362(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_363(int iParam0)
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

bool func_364(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_606(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_607((386 + iVar28), 1);
			if (func_608(iParam0, &Var0, iVar5, 0))
			{
				if (func_609(iParam0, &Var6, iVar5))
				{
					Var29 = { func_610(iParam0, Var0, iVar5, 0) };
					func_611(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_612(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_613(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_614(iParam0, iParam1);
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

void func_365(int iParam0, int iParam1, float fParam2)
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

bool func_366(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

bool func_367(int iParam0)
{
	iVar0 = func_615(iParam0);
	if (iVar0 != -1)
	{
		return func_17(iVar0);
	}
	return false;
}

void func_368(int iParam0)
{
	func_174(iParam0, 131072);
	func_616(iParam0, 0, 1);
}

void func_369(int iParam0)
{
	if (iParam0 != -1)
	{
		iVar0 = func_91(0);
		clear_bit(&iVar0, iParam0);
		func_240(0, iVar0);
	}
}

bool func_370(int iParam0, int iParam1)
{
	return func_30(iParam0->f_473, iParam1);
}

int func_371(var uParam0, float fParam1, int iParam2, float fParam3, int iParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, bool bParam11)
{
	bVar1 = false;
	fVar2 = func_464(uParam0, bVar1);
	fVar3 = fVar2;
	if (!bParam11 && fVar2 < fParam3)
	{
	}
	if (fParam5 > 0f)
	{
		if (get_entity_speed(Global_35) > fParam5)
		{
			return 0;
		}
	}
	if (fParam7 > 0f)
	{
		if (absf((Global_36.f_2 - uParam0->f_51.f_2)) >= fParam7)
		{
			return 0;
		}
	}
	if (uParam0->f_178 && func_462())
	{
		bVar1 = true;
		fVar3 = func_102(bVar1, fParam9, fVar2);
	}
	if (uParam0->f_48 && (!bParam10 || (!_does_volume_exist(uParam0->f_173) || is_entity_in_volume(Global_35, uParam0->f_173, true, 0))))
	{
		if (iParam4 > 1)
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_121)
			{
				func_465(uParam0->f_121[iVar0], fVar3, 1082130432, 1, 90f, 0, 0);
				iVar0++;
			}
		}
		else
		{
			func_465(uParam0->f_121[0], fVar3, 1082130432, 1, 90f, 0, 0);
		}
		if (func_466(&(uParam0->f_121), iParam4, fParam1))
		{
			func_218(&(uParam0->f_121));
			if (uParam0->f_186)
			{
				_0xb2a38826e5886e83(func_107(uParam0->f_3, uParam0->f_185), 0);
			}
			return 1;
		}
	}
	fVar4 = (fParam3 * fParam3);
	iVar0 = 0;
	while (iVar0 < uParam0->f_121)
	{
		if (!is_entity_dead(uParam0->f_121[iVar0]->f_6))
		{
			if (vdist2(Global_36, get_entity_coords(uParam0->f_121[iVar0]->f_6, true, false)) < fVar4)
			{
				if (!uParam0->f_48)
				{
					if (_does_volume_exist(uParam0->f_173) && !(bParam8 && _is_ped_getting_into_a_mount_seat(Global_35, true)))
					{
						if (!is_entity_in_volume(Global_35, uParam0->f_173, false, 0))
						{
							return 0;
						}
					}
					if (bParam6)
					{
						func_217(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
					}
				}
				func_218(&(uParam0->f_121));
				if (uParam0->f_186)
				{
					_0xb2a38826e5886e83(func_107(uParam0->f_3, uParam0->f_185), 0);
				}
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

float func_372(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_373(int iParam0, bool bParam1)
{
	iVar0 = func_617(iParam0);
	if (iVar0 == 2)
	{
		if (bParam1)
		{
			return true;
		}
		else if (iParam0->f_203 == 19)
		{
			return true;
		}
	}
	return false;
}

int func_374(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 131072;
		case 2:
			return 5;
		case 3:
			return 13;
		case 4:
			return 262144;
		default:
			break;
	}
	return 262144;
}

bool func_375(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && does_entity_exist(iParam2))
	{
		if (!func_205(iParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_618(fParam0))
	{
		return false;
	}
	return true;
}

void func_376(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		allow_sonar_blips(true);
		force_sonar_blips_this_frame();
	}
	_trigger_sonar_blip_2(iParam0, iParam1);
}

void func_377(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, bool bParam6)
{
	task_play_anim(iParam0, func_140(iParam1, bParam6), func_390(iParam1, sParam2, sParam5, sParam3, sParam4), 4f, -4f, -1, 8208, 0f, false, 1118217, false, 0, false);
}

void func_378(var uParam0, var uParam1, var uParam2, vector3 vParam3, int iParam6, int iParam7, int iParam8)
{
	uParam0->f_6 = uParam1;
	uParam0->f_3 = { vParam3 };
	uParam0->f_2 = 0;
	uParam0->f_7 = get_game_timer();
	*uParam0 = *uParam2;
	uParam0->f_8 = iParam8;
}

void func_379(int* iParam0, var uParam1, bool bParam2)
{
	if (!iParam0->f_2 && iParam0->f_7 != 0)
	{
		if ((!bParam2 && !func_619(0)) || (get_game_timer() - iParam0->f_7) > 3500)
		{
			if (does_blip_exist(*iParam0))
			{
				remove_blip(iParam0);
			}
			if (!func_79(iParam0->f_3))
			{
				*uParam1 = _blip_add_for_coord(iParam0->f_1, iParam0->f_3);
				iParam0->f_2 = 1;
			}
			else if (!is_entity_dead(iParam0->f_6))
			{
				*uParam1 = _blip_add_for_entity(iParam0->f_1, iParam0->f_6);
				iParam0->f_2 = 1;
			}
			if (iParam0->f_2)
			{
				if (!is_string_null_or_empty(iParam0->f_9))
				{
					set_blip_name_from_text_file(*uParam1, iParam0->f_9);
				}
			}
		}
	}
}

char* func_380(int iParam0)
{
	if (func_620(iParam0))
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

void func_381(int* iParam0, int iParam1, char* sParam2)
{
	func_621(iParam0->f_21[iParam1], sParam2);
}

int func_382(int iParam0)
{
	if (!func_243(iParam0))
	{
		return 0;
	}
	return &(Global_17504.f_42[iParam0]);
}

void func_383(var uParam0, int iParam1, char* sParam2)
{
	uParam0->f_21[iParam1]->f_13 = sParam2;
}

void func_384(var uParam0)
{
	if (func_301(uParam0->f_73, 16))
	{
		func_622(uParam0, 1);
	}
}

void func_385(var uParam0)
{
	if (!is_entity_dead(uParam0->f_7))
	{
		if (is_entity_playing_anim(uParam0->f_7, func_140(43, 0), "WAIT_01_UPPER", 1))
		{
			stop_anim_task(uParam0->f_7, func_140(43, 0), "WAIT_01_UPPER", -2f);
		}
		else if (is_entity_playing_anim(uParam0->f_7, func_140(43, 0), "WAIT_02_UPPER", 1))
		{
			stop_anim_task(uParam0->f_7, func_140(43, 0), "WAIT_02_UPPER", -2f);
		}
	}
	stop_current_playing_speech(uParam0->f_7, 500);
	stop_current_playing_ambient_speech(uParam0->f_7, 500);
}

bool func_386(var uParam0)
{
	switch (uParam0->f_208)
	{
		case 0:
			func_341(&(uParam0->f_212));
			uParam0->f_208 = 3;
			break;
		case 3:
			if (!is_ambient_speech_playing(uParam0->f_7))
			{
				if (func_343(&(uParam0->f_212), 10f))
				{
					task_play_anim(uParam0->f_7, func_140(43, 0), "WAIT_02_UPPER", 8f, -8f, -1, 67117072, 0f, false, 0, false, 0, false);
					uParam0->f_208++;
				}
			}
			break;
		case 4:
			if (!is_entity_playing_anim(uParam0->f_7, func_140(43, 0), "WAIT_02_UPPER", 1))
			{
				func_341(&(uParam0->f_212));
				uParam0->f_208++;
			}
			break;
		case 5:
			if (func_343(&(uParam0->f_212), 20f))
			{
				task_play_anim(uParam0->f_7, func_140(19, 0), "NEGATIVE_UPPER", 8f, -8f, -1, 67117072, 0f, false, 0, false, 0, false);
				return true;
			}
			break;
	}
	return false;
}

bool func_387(var uParam0)
{
	if ((is_entity_playing_anim(uParam0->f_7, func_140(43, 0), "WAIT_01_UPPER", 1) || is_entity_playing_anim(uParam0->f_7, func_140(43, 0), "WAIT_02_UPPER", 1)) || is_entity_playing_anim(uParam0->f_7, func_140(43, 0), "NEGATIVE_UPPER", 1))
	{
		return true;
	}
	return false;
}

int func_388(int iParam0)
{
	return func_136(func_623(iParam0), 0, 0);
}

int func_389(int iParam0)
{
	switch (iParam0)
	{
		case 43:
			return 4;
		default:
			break;
	}
	return 2;
}

char* func_390(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4)
{
	switch (iParam0)
	{
		case 43:
			return sParam1;
		case 19:
			return sParam2;
		case 18:
			return sParam3;
		case 40:
			return sParam4;
		default:
			break;
	}
	return func_624("[REHOC]", "PICK_HERB_STRING: Invalid Herb Index.");
}

bool func_391(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, bool bParam6, bool bParam7)
{
	if (bParam7)
	{
		if (has_anim_event_fired(iParam0, 1775034443))
		{
			return true;
		}
	}
	return is_entity_playing_anim(iParam0, func_140(iParam1, bParam6), func_390(iParam1, sParam2, sParam5, sParam3, sParam4), 1);
}

void func_392(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_534(iParam0))
	{
		return;
	}
	if (func_625(iParam0))
	{
		return;
	}
	if (!bParam1)
	{
		bParam1 = func_626(iParam0);
	}
	if (!bParam1)
	{
		if (func_90() != -1)
		{
		}
		else
		{
			func_627(iParam0);
		}
	}
	func_628(iParam0, 1);
	if (func_90() == -1)
	{
		func_630(iParam0, func_629());
	}
	func_631(iParam0, 1);
	if (bParam2)
	{
		if (!func_475(0, 0, 1))
		{
			func_510(1, 6);
		}
	}
}

bool func_393(var uParam0)
{
	if (func_388(*uParam0) >= func_389(*uParam0))
	{
		return true;
	}
	return false;
}

void func_394(var uParam0)
{
	if (!func_13(uParam0, 1))
	{
		if (!func_13(uParam0, 40))
		{
			func_632(119);
			func_633(Global_1935630, 4);
			func_72(uParam0, 40);
		}
	}
}

void func_395(int iParam0, float fParam1, bool bParam2)
{
	if (bParam2 || !func_333(&(iParam0->f_459)))
	{
		func_341(&(iParam0->f_459));
	}
	iParam0->f_471 = (iParam0->f_471 + (fParam1 + 5f));
}

bool func_396(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	switch (_0x569f1e1237508deb(uParam0->f_7))
	{
		case 494354620:
			if (bParam3 || ((!bParam1 && !bParam2) && get_random_float_in_range(0f, 1f) >= 0.25f))
			{
				uParam0->f_468 = -576322004;
				uParam0->f_469 = 2093245709;
				uParam0->f_470 = get_random_float_in_range(15f, 25f);
				func_162(uParam0, 1);
			}
			else
			{
				uParam0->f_468 = -816791935;
				uParam0->f_469 = -1904017806;
				uParam0->f_470 = 1f;
			}
			func_341(&(uParam0->f_441));
			return true;
		case -1904017806:
			if (!bParam1 || bParam3)
			{
				uParam0->f_468 = 1747427334;
				uParam0->f_469 = 494354620;
				uParam0->f_470 = get_random_float_in_range(30f, 45f);
			}
			else
			{
				uParam0->f_469 = -1904017806;
				uParam0->f_470 = 1f;
			}
			func_341(&(uParam0->f_441));
			return true;
		case 2093245709:
			if (bParam3 || (!bParam1 && get_random_float_in_range(0f, 1f) >= 0.25f))
			{
				uParam0->f_468 = -2040485339;
				uParam0->f_469 = 494354620;
				uParam0->f_470 = get_random_float_in_range(30f, 45f);
			}
			else
			{
				uParam0->f_468 = 601769528;
				uParam0->f_469 = -1904017806;
				uParam0->f_470 = 1f;
			}
			func_341(&(uParam0->f_441));
			return true;
	}
	return false;
}

void func_397(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
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

void func_398(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = func_389(*uParam0);
	sVar1 = func_390(*uParam0, "REHEC_COL_YARROW", "REHEC_COL_HBSAGE", "REHEC_COL_GCURRANT", "REHEC_COL_VSNOWDROP");
	if (iParam1 >= func_389(*uParam0) || bParam2)
	{
		if (!func_13(uParam0, 1))
		{
			func_74("HERB_DONE", 7500, 0, 0, -1, -1, 0);
		}
		else
		{
			func_74("HERB_DONE_RC", 7500, 0, 0, -1, -1, 0);
		}
		func_71(_create_var_string(2, sVar1, iVar0, iVar0), 10000, 0, 0, 0, 1);
	}
	else
	{
		func_71(_create_var_string(2, sVar1, iParam1, iVar0), 10000, 0, 0, 0, 1);
	}
}

void func_399(var uParam0, bool bParam1)
{
	func_353(uParam0, 1);
	func_328(&(uParam0->f_284), 1);
	if (!func_13(uParam0, 9) || func_13(uParam0, 28))
	{
		func_383(&(uParam0->f_284), 0, "RE_HEC_UNI_V1_LOOKING");
	}
	else
	{
		func_383(&(uParam0->f_284), 0, "RE_HEC_UNI_V1_HANDOVER_PLAYER");
	}
	func_381(&(uParam0->f_284), 0, "BEAT_CON_GIVE_PLANTS");
	if (!func_431(uParam0, 9))
	{
		func_383(&(uParam0->f_284), 1, "RE_HEC_UNI_V1_SECONDTHOUGHT");
		func_381(&(uParam0->f_284), 1, func_380(6));
		func_72(uParam0, 62);
	}
	else
	{
		func_332(&(uParam0->f_284), 1, 0);
	}
	if (!func_13(uParam0, 1))
	{
		if (!does_blip_exist(uParam0->f_9))
		{
		}
	}
	if (does_blip_exist(uParam0->f_9))
	{
		_blip_set_modifier(uParam0->f_9, -981020806);
	}
	if (bParam1)
	{
		func_398(uParam0, func_388(*uParam0), 1);
	}
	func_384(&(uParam0->f_284));
	uParam0->f_198 = 5;
}

void func_400(var uParam0, bool bParam1)
{
	func_353(uParam0, 0);
	if (!func_431(uParam0, 8))
	{
		func_634(&(uParam0->f_284), 1);
		func_332(&(uParam0->f_284), 0, 1);
		func_383(&(uParam0->f_284), 0, func_635(uParam0));
	}
	else
	{
		func_332(&(uParam0->f_284), 0, 0);
	}
	if (!func_13(uParam0, 1))
	{
		if (!func_431(uParam0, 9))
		{
			func_332(&(uParam0->f_284), 1, 1);
			func_383(&(uParam0->f_284), 1, "RE_HEC_UNI_V1_SECONDTHOUGHT");
			func_381(&(uParam0->f_284), 1, func_380(6));
			func_72(uParam0, 62);
		}
		else
		{
			func_73(uParam0, 62);
			func_332(&(uParam0->f_284), 1, 0);
		}
	}
	else
	{
		func_332(&(uParam0->f_284), 1, 0);
		func_381(&(uParam0->f_284), 1, func_380(10));
		func_73(uParam0, 62);
	}
	if (does_blip_exist(uParam0->f_9))
	{
		_set_blip_flash_style(uParam0->f_9, -981020806);
	}
	if (bParam1)
	{
		func_74(func_390(*uParam0, "HRB_OBJ_YR", "HRB_OBJ_HS", "HRB_OBJ_GC", "HRB_OBJ_VS"), 7500, 0, 0, func_389(*uParam0), -1, 1);
	}
	func_384(&(uParam0->f_284));
	uParam0->f_198 = 0;
}

bool func_401(var uParam0, var uParam1)
{
	if (!uParam0->f_536)
	{
		if (uParam0->f_535)
		{
			if (func_636(uParam0))
			{
				uParam0->f_536 = 1;
			}
		}
	}
	switch (uParam0->f_198)
	{
		case 0:
			func_637(uParam0);
			switch (func_638(uParam0))
			{
				case 3:
					func_399(uParam0, 1);
					break;
				case 1:
					func_341(&(uParam0->f_278));
					func_187(uParam0, 7);
					func_368(uParam0);
					uParam0->f_198 = 1;
					break;
			}
			break;
		case 1:
			if (!func_330(uParam0, 1))
			{
				if ((func_343(&(uParam0->f_278), 2f) && !is_any_speech_playing(Global_35)) && !is_any_speech_playing(uParam0->f_7))
				{
					func_206(uParam0->f_7, Global_35, func_639(uParam0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_341(&(uParam0->f_278));
					uParam0->f_198 = 2;
				}
			}
			break;
		case 2:
			if (func_343(&(uParam0->f_278), 3f) && !func_205(uParam0->f_7, 1))
			{
				func_334(&(uParam0->f_278));
				func_196(uParam0, 131072);
				func_433(uParam0, 7);
				func_395(uParam0, 5f, 0);
				func_640(uParam0, 10f);
				func_400(uParam0, 0);
			}
			break;
		case 3:
			if (func_330(uParam0, 1))
			{
				func_19();
				func_334(&(uParam0->f_278));
				func_73(uParam0, 13);
				func_196(uParam0, 131072);
				func_23(uParam0);
				func_175(&(uParam0->f_9));
				uParam0->f_198 = 4;
			}
			break;
		case 4:
			if (!func_330(uParam0, 1))
			{
				func_395(uParam0, 3f, 0);
				uParam0->f_1 = 11;
			}
			break;
		case 5:
			if (!func_393(uParam0))
			{
				if (func_370(uParam0, 131072))
				{
					func_395(uParam0, 3f, 0);
					func_196(uParam0, 131072);
				}
				func_400(uParam0, 1);
			}
			else
			{
				switch (uParam0->f_534)
				{
					case 0:
						if (!is_entity_in_volume(Global_35, uParam0->f_532, false, 0))
						{
							func_332(&(uParam0->f_284), 0, 0);
							uParam0->f_534++;
						}
						break;
					case 1:
						if (is_entity_in_volume(Global_35, uParam0->f_532, false, 0))
						{
							func_332(&(uParam0->f_284), 0, 1);
							uParam0->f_534 = (uParam0->f_534 - 1);
						}
						break;
				}
				switch (func_641(uParam0, uParam1))
				{
					case 4:
						uParam0->f_535 = 1;
						func_642(uParam0);
						func_174(uParam0, 262144);
						func_353(uParam0, 0);
						func_328(&(uParam0->f_284), 0);
						func_72(uParam0, 17);
						func_643(&(uParam0->f_133), *uParam0, &(uParam0->f_112), &(uParam0->f_90));
						func_644(&(uParam0->f_133), func_148(*uParam0));
						func_644(&(uParam0->f_154), 5);
						func_644(&(uParam0->f_175), 5);
						uParam0->f_495 = 0;
						uParam0->f_198 = 6;
						break;
					default:
						func_644(&(uParam0->f_133), func_148(*uParam0));
						func_644(&(uParam0->f_154), 5);
						func_644(&(uParam0->f_175), 5);
						break;
				}
			}
			break;
		case 6:
			if (func_645(uParam0))
			{
				uParam0->f_198 = 7;
			}
			break;
		case 7:
			if (_is_anim_scene_finished(uParam0->f_133.f_1, false))
			{
				set_player_control(player_id(), true, 0, false);
				func_23(uParam0);
				uParam0->f_198 = 8;
			}
			else if (has_anim_event_fired(Global_35, 993600644))
			{
				func_19();
				func_71("HRB_SUCCESS", 10000, 0, 0, 0, 1);
				set_player_control(player_id(), true, 0, false);
				func_647(func_646(*uParam0), func_389(*uParam0), 0, -142743235, 0);
				func_568(12, 0, 0, 0, 0, 0, 1065353216, 0);
				func_72(uParam0, 15);
				func_648(*uParam0);
				func_649(&(uParam0->f_90[19]), 0, 1);
				set_player_control(player_id(), true, 0, false);
				if (does_blip_exist(uParam0->f_9))
				{
					_set_blip_flash_style(uParam0->f_9, -981020806);
				}
				func_178(3);
				uParam0->f_198 = 8;
			}
			break;
		case 8:
			if (uParam0->f_536)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_402(var uParam0, int iParam1)
{
	func_650(uParam0, 0f, 0f, 0f, 0f, 0f, 0f, 2);
	attach_anim_scene_to_entity(uParam0->f_1, iParam1, -1);
}

int func_403(int iParam0)
{
	if (func_13(iParam0, 36))
	{
		if (!_does_scenario_point_exist(iParam0->f_87))
		{
			return 0;
		}
		if (!_0x6ef4e31b4d5d2da0(iParam0->f_87, "p_mortarPestle02x_PH_R_HAND"))
		{
			return 0;
		}
		func_73(iParam0, 36);
	}
	return 1;
}

void func_404(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	func_651(uParam0, "objBook", uParam3[0], 0);
	func_651(uParam0, "objBottle01", uParam3[11], 0);
	func_651(uParam0, "objBurdock01", uParam3[4], 0);
	func_651(uParam0, "objKnife", uParam3[1], 0);
	func_651(uParam0, "objMBottle01", uParam3[9], 0);
	func_651(uParam0, "objMBottle02", uParam3[10], 0);
	func_651(uParam0, "objMortar", uParam3[3], 0);
	func_651(uParam0, "ped_herbalist", iParam2, 0);
	if (bParam4)
	{
		switch (iParam1)
		{
			case 43:
				func_651(uParam0, "objYarrow02", uParam3[19], 0);
				break;
			case 40:
				func_651(uParam0, "Snoedrop", uParam3[19], 0);
				break;
			case 18:
				func_651(uParam0, "Goldcurrant", uParam3[19], 0);
				break;
			case 19:
				func_651(uParam0, "Hbsage", uParam3[19], 0);
				break;
		}
	}
}

void func_405(var uParam0)
{
	if (_does_anim_scene_exist(uParam0->f_1))
	{
		start_anim_scene(uParam0->f_1);
	}
}

bool func_406(var uParam0, char* sParam1, int iParam2)
{
	if (func_429(uParam0, 0, 0, 0))
	{
		return _0x8d81e7824b7753f7(uParam0->f_1, sParam1, iParam2);
	}
	return false;
}

void func_407(var uParam0)
{
	if (has_anim_event_fired(uParam0->f_7, -944481653))
	{
		attach_entity_to_entity(uParam0->f_242, uParam0->f_7, get_ped_bone_index(uParam0->f_7, 7966), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
		set_entity_visible(uParam0->f_242, true);
		func_206(uParam0->f_7, Global_35, func_652(uParam0->f_240), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	if (has_anim_event_fired(uParam0->f_7, -228458952))
	{
		func_649(uParam0->f_242, 1, 1);
		set_entity_visible(uParam0->f_242, false);
		func_653(uParam0->f_7, func_135(uParam0->f_240), 1, 0);
	}
	if (has_anim_event_fired(Global_35, 227258506) || has_anim_event_fired(Global_35, 1308194400))
	{
	}
	if (has_anim_event_fired(Global_35, -228458952))
	{
		func_649(uParam0->f_242, 1, 1);
		set_entity_visible(uParam0->f_242, false);
		func_206(uParam0->f_7, Global_35, func_654(uParam0->f_240), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		if (func_44(uParam0) != 4)
		{
			func_655(func_135(uParam0->f_240), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		}
		else
		{
			func_656(-1768086120, 0, 1065353216, 1, 0, 0);
		}
	}
}

void func_408(var uParam0)
{
	if (func_44(uParam0) == 2 || func_44(uParam0) == 1)
	{
		open_sequence_task(&iVar0);
		task_turn_ped_to_face_entity(0, Global_35, 500, -1082130432, -1082130432, -1082130432);
		task_play_upper_anim_facing_entity(0, "SCRIPT_RE@HERBALISTCAMP@PAMPHLET_HANDOVER", "TAKE_OUT_PAMP_HERBALIST", Global_35, func_657("SCRIPT_RE@HERBALISTCAMP@PAMPHLET_HANDOVER", "TAKE_OUT_PAMP_HERBALIST"), 8f, -8f, 8200, 0f, false, false, -1f, 0, 0, -1f);
		task_play_upper_anim_facing_entity(0, "SCRIPT_RE@HERBALISTCAMP@PAMPHLET_HANDOVER", "PAMP_LOOP_HERBALIST", Global_35, -1, 8f, -8f, 8201, 0f, false, false, -1f, 0, 0, -1f);
		func_171(uParam0->f_7, &iVar0, 0, 0, 1, 1);
	}
	else
	{
		open_sequence_task(&iVar0);
		task_turn_ped_to_face_entity(0, Global_35, 500, -1082130432, -1082130432, -1082130432);
		task_play_upper_anim_facing_entity(0, "SCRIPT_RE@HERBALISTCAMP@SERUM_HANDOVER", "TAKE_OUT_SERUM_HERBALIST", Global_35, func_657("SCRIPT_RE@HERBALISTCAMP@SERUM_HANDOVER", "TAKE_OUT_SERUM_HERBALIST"), 8f, -8f, 8200, 0f, false, false, -1f, 0, 0, -1f);
		task_play_upper_anim_facing_entity(0, "SCRIPT_RE@HERBALISTCAMP@SERUM_HANDOVER", "SERUM_LOOP_HERBALIST", Global_35, -1, 8f, -8f, 8201, 0f, false, false, -1f, 0, 0, -1f);
		func_171(uParam0->f_7, &iVar0, 0, 0, 1, 1);
	}
}

void func_409(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	func_658(uParam0, "herbalist", iParam2, 0);
	func_658(uParam0, "player", Global_35, 0);
	func_658(uParam1, "herbalist", iParam2, 0);
	func_658(uParam1, "player", Global_35, 0);
	if (iParam5 == 2 || iParam5 == 1)
	{
		func_658(uParam0, "object_pamphlet", iParam4, 0);
		func_658(uParam1, "object_pamphlet", iParam4, 0);
	}
	else
	{
		func_658(uParam0, "object", iParam4, 0);
		func_658(uParam1, "object", iParam4, 0);
	}
	func_402(uParam1, iParam3);
}

char* func_410(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RE_HOC_REWARD_REMEDY";
		case 1:
			return "RE_HOC_REWARD_RECIPE";
		case 2:
			return "RE_HOC_REWARD_RECIPE";
		case 3:
			return "RE_HOC_REWARD_TONIC";
		case 4:
			return "RE_HOC_REWARD_TONIC";
		default:
			break;
	}
	return func_624("[RESS]", "REHOC_REWARD_TYPE_INITIAL_DIALOGUE_CONTEXT: Invalid Reward.");
}

void func_411(var uParam0, int iParam1, float fParam2)
{
	func_659(uParam0->f_21[iParam1], fParam2);
}

void func_412(var uParam0, int iParam1)
{
	vVar0 = { get_entity_coords(iParam1, true, false) };
	vVar0 = { vVar0 - Vector(1f, 0f, 0f) };
	func_650(uParam0, vVar0, get_entity_rotation(iParam1, 2), 2);
}

int func_413(var uParam0, var uParam1, var uParam2)
{
	vVar17 = { -2.4f, 2.68f, 0f };
	vVar20 = { 0.77f, 4f, 0f };
	vVar23 = { -2.15f, 1.32f, 0f };
	vVar26 = { 0.21f, 2.2f, 0f };
	vVar29 = { func_660(Global_35, uParam0->f_175.f_1, "player", "PB_HANDOVER", 1) };
	*Var0[0] = { _get_object_offset_from_coords(func_9(uParam1), func_10(uParam1), vVar17) };
	*Var0[1] = { _get_object_offset_from_coords(func_9(uParam1), func_10(uParam1), vVar20) };
	*Var0[2] = { _get_object_offset_from_coords(func_9(uParam1), func_10(uParam1), vVar23) };
	*Var0[3] = { _get_object_offset_from_coords(func_9(uParam1), func_10(uParam1), vVar26) };
	Var0[0]->f_3 = func_88(Global_36, *Var0[0]);
	Var0[1]->f_3 = func_88(Global_36, *Var0[1]);
	Var0[2]->f_3 = func_88(Global_36, *Var0[2]);
	Var0[3]->f_3 = func_88(Global_36, *Var0[3]);
	bVar32 = true;
	if (func_661(*Var0[0], *Var0[1], Global_36))
	{
		bVar32 = true;
	}
	else if (func_661(*Var0[3], *Var0[2], Global_36))
	{
		bVar32 = false;
	}
	else if (Var0[0]->f_3 + Var0[1]->f_3) > (Var0[0]->f_3 + Var0[1]->f_3)
	{
		bVar32 = false;
	}
	if (bVar32)
	{
		*uParam2 = { vVar29 };
		uParam2->f_3 = func_662(*uParam2, get_entity_coords(uParam0->f_7, true, false), 1);
		return 0;
	}
	else if (func_661(*Var0[2], *Var0[3], Global_36))
	{
		vVar33 = { get_entity_coords(uParam0->f_7, true, false) };
		vVar36 = { func_660(Global_35, uParam0->f_154.f_1, "herbalist", "PB_HANDOVER", 1) };
		vVar39 = { func_660(Global_35, uParam0->f_154.f_1, "player", "PB_HANDOVER", 1) };
		fVar42 = vdist(vVar36, vVar39);
		if (Var0[2]->f_3 < Var0[3]->f_3)
		{
			*uParam2 = { vVar33 + Vector(fVar42, fVar42, fVar42) * func_663(vVar33, *Var0[2], 1065353216) };
		}
		else
		{
			*uParam2 = { vVar33 + Vector(fVar42, fVar42, fVar42) * func_663(vVar33, *Var0[3], 1065353216) };
		}
		uParam2->f_3 = func_662(*uParam2, vVar33, 1);
	}
	else
	{
		*uParam2 = { func_660(Global_35, uParam0->f_154.f_1, "player", "PB_HANDOVER", 1) };
		uParam2->f_3 = func_662(*uParam2, get_entity_coords(uParam0->f_7, true, false), 1);
	}
	return 1;
}

void func_414(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 256;
	uParam0->f_4 = 0;
	func_334(&(uParam0->f_5));
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

int func_415(int iParam0, var uParam1, vector3 vParam2, int iParam5, float fParam6, int iParam7, bool bParam8, int iParam9, bool bParam10, bool bParam11, float fParam12)
{
	if (!func_664(iParam0))
	{
		if (bParam11)
		{
			iVar0 = func_665(7);
		}
		else
		{
			iVar0 = _get_last_mount(iParam0);
		}
		if (!func_244(iVar0, 1) || (!(_does_volume_exist(iParam5) && func_463(iVar0, iParam5, 1, 0)) && func_372(iParam0, iVar0, 1, 1) > fParam6))
		{
			return 1;
		}
		if (!does_entity_exist(*uParam1))
		{
			if (func_233(iVar0) && func_234(iVar0) != 1)
			{
				Var2.f_10 = 7;
				Var2.f_1 = 1;
				*uParam1 = func_666(&uVar1, &Var2);
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
			return 1;
		}
		if (func_244(*uParam1, 1))
		{
			if (!(func_169(*uParam1, 518218985) || func_169(*uParam1, 713668775)))
			{
				clear_ped_tasks(*uParam1, 1, 0);
				iVar13 = 0;
				if (!bParam10)
				{
					iVar13 = 16640;
				}
				_0xff1e339ce40eaaaf(*uParam1, 0);
				_0xf74e134f40192884(*uParam1, 2);
				if (!func_79(vParam2))
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
				if (!bParam8 && func_79(vParam2))
				{
					_task_smart_flee_style_ped(*uParam1, iParam0, iParam7, iVar13, fParam6, 6000, 0);
				}
			}
		}
	}
	return 0;
}

bool func_416(var uParam0)
{
	switch (uParam0->f_210)
	{
		case 0:
			func_341(&(uParam0->f_212));
			uParam0->f_210++;
			break;
		case 1:
			if (func_343(&(uParam0->f_212), 14f))
			{
				func_206(uParam0->f_7, Global_35, "RE_HEC_UNI_V1_TAKEORNOT", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				if (func_44(uParam0) == 2 || func_44(uParam0) == 1)
				{
					func_667(uParam0, "SCRIPT_RE@HERBALISTCAMP@PAMPHLET_HANDOVER", "DO_U_WANT_IT_PAMP_HERBALIST");
				}
				else
				{
					func_667(uParam0, "SCRIPT_RE@HERBALISTCAMP@SERUM_HANDOVER", "DO_U_WANT_IT_HERBALIST");
				}
				uParam0->f_210++;
			}
			break;
		case 2:
			if (get_sequence_progress(uParam0->f_7) == 1)
			{
				func_341(&(uParam0->f_212));
				uParam0->f_210++;
			}
			break;
		case 3:
			if (func_343(&(uParam0->f_212), 5f))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_417(var uParam0, int iParam1)
{
	func_668(uParam0->f_21[iParam1], 0);
}

void func_418(var uParam0, int iParam1, bool bParam2)
{
	func_395(uParam0, 10f, 0);
	open_sequence_task(&iVar0);
	if (bParam2)
	{
		if (func_44(uParam0) == 2 || func_44(uParam0) == 1)
		{
			task_play_upper_anim_facing_entity(0, "SCRIPT_RE@HERBALISTCAMP@PAMPHLET_HANDOVER", "DECLINE_PAMP_HERBALIST", Global_35, func_657("SCRIPT_RE@HERBALISTCAMP@PAMPHLET_HANDOVER", "DECLINE_PAMP_HERBALIST"), 8f, -8f, 8200, 0f, false, false, -1f, 0, 0, -1f);
		}
		else
		{
			task_play_upper_anim_facing_entity(0, "SCRIPT_RE@HERBALISTCAMP@SERUM_HANDOVER", "SERUM_DECLINE_HERBALIST", Global_35, func_657("SCRIPT_RE@SUSPENSION_TRAP@HANDOVER", "DONT_TAKE_OFFER_VICTIM"), 8f, -8f, 8200, 0f, false, false, -1f, 0, 0, -1f);
		}
	}
	func_70(uParam0, 1, iParam1, 1, 0, 1, 0);
	func_171(uParam0->f_7, &iVar0, 0, 0, 1, 1);
}

bool func_419(var uParam0)
{
	switch (uParam0->f_241)
	{
		case 0:
			if (func_44(uParam0) == 2 || func_44(uParam0) == 1)
			{
				return func_669(Global_35, &(uParam0->f_175), "player", 5, &(uParam0->f_495), 1065353216, 1, 1);
			}
			else
			{
				return func_669(Global_35, &(uParam0->f_175), "player", 4, &(uParam0->f_495), 1065353216, 1, 1);
			}
			break;
		case 1:
			if (func_44(uParam0) == 2 || func_44(uParam0) == 1)
			{
				return func_669(Global_35, &(uParam0->f_154), "player", 5, &(uParam0->f_495), 1065353216, 1, 1);
			}
			else
			{
				return func_669(Global_35, &(uParam0->f_154), "player", 4, &(uParam0->f_495), 1065353216, 1, 1);
			}
			break;
	}
	return false;
}

float func_420(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

void func_421(var uParam0)
{
	func_439(&(uParam0->f_9), uParam0->f_7, 0);
	_0x802092b07e3b1eea(uParam0->f_7, Global_36, 3);
	if (!_0xec6935ebe0847b90(uParam0->f_7, Global_36))
	{
		if (!_0x463803429297117c(uParam0->f_7, Global_36, 1, 0))
		{
			_0xf1c03a5352243a30(uParam0->f_7);
		}
	}
	open_sequence_task(&iVar0);
	if (func_322(uParam0->f_7, 0, 1, 0) == -1569615261)
	{
		set_current_ped_weapon(uParam0->f_7, -618550132, false, 0, false, false);
		task_swap_weapon(0, 1, 0, 0, 0);
	}
	task_combat_ped(0, Global_35, 0, 0);
	func_171(uParam0->f_7, &iVar0, 0, 0, 1, 1);
}

bool func_422(var uParam0, float fParam1)
{
	if (func_343(uParam0, fParam1))
	{
		func_334(uParam0);
		return true;
	}
	return false;
}

void func_423(int iParam0, float fParam1)
{
	if (!_0x916b8e075abc8b4e(iParam0->f_7, 1) || _0x916b8e075abc8b4e(iParam0->f_7, 0))
	{
		_0xe7fa07624574b79a(iParam0->f_7, Global_35, iParam0->f_483, iParam0->f_484, fParam1, 1, 0, 0, 0);
	}
}

int func_424(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
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
		if (func_467())
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
				if (func_670(iParam0, 1, 1) > fParam4)
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
			fVar1 = func_372(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_341(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!is_entity_dead(iParam1))
				{
					task_look_at_entity(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_671(iParam0, iParam1, fVar1, bParam13))
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
				iVar2 = func_673(func_672(iParam0, sParam2, iParam11, iParam1, network_is_game_in_progress(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

void func_425(int iParam0)
{
	if (!is_entity_dead(iParam0->f_434.f_5))
	{
		if (is_ped_active_in_scenario(iParam0->f_434.f_5, 0))
		{
			if (!_0xeeed8fafec331a70(iParam0->f_7, Global_36, 3))
			{
				if (!_0x802092b07e3b1eea(iParam0->f_7, Global_36, 3))
				{
					_0xa3a9299c4f2adb98(iParam0->f_7);
				}
			}
			clear_ped_tasks(iParam0->f_434.f_5, 1, 0);
			if (is_entity_dead(iParam0->f_7))
			{
				_task_smart_flee_style_ped(iParam0->f_434.f_5, Global_35, 3, 0, -1082130432, -1, 0);
			}
			else
			{
				_0x2e1d6d87346bb7d2(iParam0->f_7, Global_35, 1, 0);
			}
		}
	}
}

void func_426(var uParam0)
{
	func_575(&(uParam0->f_73), 4);
}

void func_427(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	func_570(uParam0, uParam2, uParam3, 1, 1);
	func_674(*uParam0, uParam1, iParam4);
}

void func_428(int iParam0)
{
	func_82(&(iParam0->f_112));
	func_82(&(iParam0->f_133));
	func_82(&(iParam0->f_154));
	func_82(&(iParam0->f_175));
	func_649(iParam0->f_242, 1, 1);
	func_649(&(iParam0->f_90[3]), 1, 1);
	func_649(&(iParam0->f_90[19]), 1, 1);
	if (does_entity_exist(iParam0->f_242))
	{
		activate_physics(iParam0->f_242);
	}
	if (does_entity_exist(&(iParam0->f_90[3])))
	{
		activate_physics(&(iParam0->f_90[3]));
	}
	if (does_entity_exist(&(iParam0->f_90[19])))
	{
		activate_physics(&(iParam0->f_90[19]));
	}
}

bool func_429(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (_does_anim_scene_exist(uParam0->f_1))
	{
		if (bParam1 && !_is_anim_scene_started(uParam0->f_1, false))
		{
			return false;
		}
		if (bParam2 && !_is_anim_scene_finished(uParam0->f_1, false))
		{
			return false;
		}
		if (bParam3 && !_is_anim_scene_metadata_loaded(uParam0->f_1, false))
		{
			return false;
		}
		return true;
	}
	return false;
}

bool func_430(int iParam0)
{
	if (((iParam0->f_203 == 6 || iParam0->f_203 == 7) || iParam0->f_203 == 14) || iParam0->f_203 == 15)
	{
		return true;
	}
	return false;
}

bool func_431(int iParam0, int iParam1)
{
	return is_bit_set(iParam0->f_6, iParam1);
}

void func_432(int iParam0)
{
	if (func_675(iParam0, 2))
	{
		if (iParam0->f_203 != 20)
		{
			func_341(&(iParam0->f_441));
		}
	}
}

void func_433(int iParam0, int iParam1)
{
	clear_bit(&(iParam0->f_6), iParam1);
}

char* func_434(char* sParam0)
{
	StringCopy(&cVar0, sParam0, 64);
	if (func_16())
	{
		StringConCat(&cVar0, "_J", 64);
	}
	return func_676(cVar0);
}

void func_435(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			sVar0 = func_434("RE_HEC_UNI_V1_UNDERSTAND");
			break;
		case 1:
			sVar0 = func_434("RE_HEC_UNI_V1_LEAVEME");
			break;
		case 2:
			sVar0 = func_434("RE_HEC_UNI_V1_YOURECRAZY");
			break;
		case 3:
			sVar0 = func_434("RE_HEC_UNI_V1_HADENOUGH");
			break;
	}
	if (!is_string_null_or_empty(sVar0))
	{
		func_206(iParam0->f_7, Global_35, sVar0, 0, -1082130432, 0, 0, 0, 1, 1, 1, 1506116031, 1, 0, 0);
	}
}

bool func_436(int iParam0)
{
	if ((_0xfe5c6177064bd390(1) || is_any_speech_playing(Global_35)) || is_any_speech_playing(iParam0->f_7))
	{
		func_326(iParam0->f_284.f_21[0]);
		func_326(iParam0->f_284.f_21[1]);
	}
	switch (iParam0->f_474)
	{
		case 0:
			if (!func_431(iParam0, 0))
			{
				func_332(&(iParam0->f_284), 0, 1);
			}
			func_332(&(iParam0->f_284), 1, 1);
			func_383(&(iParam0->f_284), 1, "RE_HEC_UNI_V1_WASTING");
			func_384(&(iParam0->f_284));
			iParam0->f_474 = 1;
			break;
		case 1:
			func_187(iParam0, 0);
			func_187(iParam0, 1);
			func_328(&(iParam0->f_284), 1);
			func_383(&(iParam0->f_284), 0, "RE_HEC_UNI_V1_LEAVEYOU");
			func_381(&(iParam0->f_284), 0, func_380(8));
			func_383(&(iParam0->f_284), 1, "RE_HEC_UNI_V1_KILLYOU");
			func_381(&(iParam0->f_284), 1, func_380(10));
			func_384(&(iParam0->f_284));
			iParam0->f_474 = 2;
			break;
		case 2:
		case 3:
			return true;
	}
	return false;
}

void func_437(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		open_sequence_task(&iVar0);
	}
	_0x802092b07e3b1eea(iParam0->f_7, Global_36, 2);
	if (func_322(Global_35, 0, 1, 0) != -1569615261 && !_is_weapon_melee(func_322(Global_35, 0, 1, 0)))
	{
		task_combat_ped(0, Global_35, 16384, 0);
	}
	else
	{
		task_combat_ped(0, Global_35, 0, 0);
		func_72(iParam0, 26);
		func_677(&(iParam0->f_284), &(iParam0->f_7), 1);
		set_ped_config_flag(iParam0->f_7, 297, false);
		set_ped_config_flag(iParam0->f_7, 301, false);
		set_ped_config_flag(iParam0->f_7, 315, false);
		set_ped_config_flag(iParam0->f_7, 130, false);
		set_ped_config_flag(iParam0->f_7, 178, false);
		set_ped_config_flag(iParam0->f_7, 330, false);
		set_ped_config_flag(iParam0->f_7, 317, true);
	}
	if (!bParam1)
	{
		func_171(iParam0->f_7, &iVar0, 0, 0, 1, 1);
	}
	func_439(&(iParam0->f_9), iParam0->f_7, 0);
}

void func_438(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_183((*uParam0)[iVar0], bParam1, bParam2);
		iVar0++;
	}
}

void func_439(int* iParam0, int iParam1, bool bParam2)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
	func_397(iParam1, iParam0, 831283580, 580546400, 0, 0);
	if (bParam2)
	{
		func_678(iParam1, -1034486097, 1);
	}
	else
	{
		func_678(iParam1, 942020339, 1);
	}
}

void func_440(int* iParam0)
{
	func_328(iParam0, 0);
	func_381(iParam0, 0, func_380(7));
	func_381(iParam0, 1, func_380(10));
}

void func_441(var uParam0)
{
	func_679(uParam0, 0);
	uParam0->f_75 = 0;
}

bool func_442(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!is_ped_active_in_scenario(uParam0->f_7, 0))
	{
		if (uParam0->f_203 != 0)
		{
			uParam0->f_203 = 0;
		}
		return false;
	}
	if (func_370(uParam0, 262144))
	{
		return false;
	}
	*uParam1 = func_680(uParam0);
	*uParam2 = 0;
	*uParam3 = (func_370(uParam0, 65536) || func_681(uParam0, *uParam1, 0));
	*uParam4 = (*uParam3 && !func_682(uParam0, -1904017806));
	*uParam5 = (func_370(uParam0, 16) && _0x569f1e1237508deb(uParam0->f_7) == 2093245709);
	return true;
}

int func_443(var uParam0, int iParam1, bool bParam2, var uParam3, bool bParam4, bool bParam5)
{
	if (bParam4 && func_682(uParam0, -1904017806))
	{
		func_341(&(uParam0->f_441));
		return 4;
	}
	else if (func_683(uParam0, &bParam2, iParam1, 1))
	{
		return func_616(uParam0, bParam2, 1);
	}
	else if (func_396(uParam0, bParam4, bParam5, 0))
	{
		return 3;
	}
	return 2;
}

int func_444(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bVar0 = true;
	bVar1 = _0x68821369a2ceadd5(iParam0->f_7, iParam0->f_468);
	bVar2 = (bParam5 || ((bParam3 && func_682(iParam0, 2093245709)) && iParam0->f_469 != 2093245709));
	iVar3 = _get_scenario_point_type(iParam0->f_87);
	if (_0x916b8e075abc8b4e(iParam0->f_7, 1))
	{
		return 19;
	}
	if (!bVar1)
	{
		if (bParam5)
		{
			if (iParam0->f_469 == 2093245709)
			{
				if (func_684(iParam0, 0, 0))
				{
					return 0;
				}
			}
		}
		if (!bVar2)
		{
			if (func_683(iParam0, &bParam2, iParam1, 1))
			{
				return func_616(iParam0, bParam2, 1);
			}
		}
		else if (_0x916b8e075abc8b4e(iParam0->f_7, 1))
		{
			func_341(&(iParam0->f_444));
			return 20;
		}
	}
	if (func_682(iParam0, iParam0->f_469))
	{
		if (func_684(iParam0, 0, 0))
		{
			switch (get_random_int_in_range(0, 3))
			{
				case 0:
					func_685(iParam0, -1891374763, 5);
					break;
				default:
					func_685(iParam0, -756969178, 5);
					break;
			}
			func_341(&(iParam0->f_441));
			iParam0->f_468 = 0;
			return 4;
		}
	}
	else
	{
		if (!_request_scenario_type(iVar3, 262144, get_entity_model(iParam0->f_7), _0x569f1e1237508deb(iParam0->f_7)))
		{
			bVar0 = false;
		}
		if (!_request_scenario_type(iVar3, 262145, get_entity_model(iParam0->f_7), iParam0->f_469))
		{
			bVar0 = false;
		}
		if (bVar0 && func_684(iParam0, 0, 1))
		{
			if (!bVar1)
			{
				_0xd65fdc686a031c83(iParam0->f_7, iParam0->f_468, 0.5f);
			}
			func_686(iParam0);
		}
	}
	return 3;
}

int func_445(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if ((bParam5 || bParam4) || !is_ped_using_any_scenario(iParam0->f_7))
	{
		return 0;
	}
	else if (func_683(iParam0, &bParam2, iParam1, 1))
	{
		return func_616(iParam0, bParam2, 1);
	}
	else if (func_687(iParam0) && func_681(iParam0, iParam1, 1))
	{
		if (!func_333(&(iParam0->f_441)) || func_343(&(iParam0->f_441), iParam0->f_470))
		{
			if (func_684(iParam0, 0, 1))
			{
				return 6;
			}
		}
	}
	else if (!bParam3)
	{
		if (!func_333(&(iParam0->f_441)) || func_343(&(iParam0->f_441), func_102(func_682(iParam0, -1904017806), 3f, iParam0->f_470)))
		{
			return 0;
		}
	}
	return 4;
}

int func_446(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (_0x79197f7d2bb5e73a(uParam0->f_7, uParam0->f_89, "SCRIPT_COMMON@SHARED_SCENARIOS@STAND@RANDOM@HERBALIST@MIX_MORTAR@TRANSITIONS@STAND_2_SIT", "STAND_2_SIT", func_170(-1189657660), 0))
	{
		return 7;
	}
	return 6;
}

int func_447(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (is_ped_active_in_scenario(iParam0->f_7, 0) && _0x9c54041bb66bcf9e(iParam0->f_7, iParam0->f_89))
	{
		if (func_684(iParam0, 0, 1))
		{
			if (!func_370(iParam0, 64))
			{
				if (func_683(iParam0, &bParam2, iParam1, 1))
				{
					return func_616(iParam0, bParam2, 1);
				}
				else
				{
					return 10;
				}
			}
		}
	}
	return 7;
}

int func_448(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	func_341(&(uParam0->f_447));
	return 12;
}

int func_449(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (func_683(iParam0, &bParam2, iParam1, 1))
	{
		return func_616(iParam0, bParam2, 1);
	}
	else
	{
		if (!func_333(&(iParam0->f_447)))
		{
			func_341(&(iParam0->f_447));
		}
		if ((!func_30(iParam1, 8) || !func_333(&(iParam0->f_447))) || func_343(&(iParam0->f_447), (7f * 60f)))
		{
			if (func_684(iParam0, 0, 1))
			{
				return 14;
			}
		}
	}
	return 12;
}

int func_450(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (_0x79197f7d2bb5e73a(uParam0->f_7, uParam0->f_87, "SCRIPT_COMMON@SHARED_SCENARIOS@STAND@RANDOM@HERBALIST@MIX_MORTAR@TRANSITIONS@SIT_2_STAND", "SIT_2_STAND", func_170(-1904017806), 0))
	{
		return 15;
	}
	return 14;
}

int func_451(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (is_ped_active_in_scenario(iParam0->f_7, 0) && _0x9c54041bb66bcf9e(iParam0->f_7, iParam0->f_87))
	{
		if (func_684(iParam0, 0, 1))
		{
			if (!func_370(iParam0, 64))
			{
				if (func_683(iParam0, &bParam2, iParam1, 1))
				{
					return func_616(iParam0, bParam2, 1);
				}
				else
				{
					return 2;
				}
			}
		}
	}
	return 15;
}

int func_452(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	func_331(iParam0->f_7);
	if (bParam5)
	{
		func_341(&(iParam0->f_444));
		return 20;
	}
	else if (_0x916b8e075abc8b4e(iParam0->f_7, 1))
	{
		if (_0x916b8e075abc8b4e(iParam0->f_7, 0))
		{
			func_341(&(iParam0->f_444));
			return 19;
		}
	}
	else if (func_684(iParam0, 0, 1))
	{
		if (!func_333(&(iParam0->f_444)) || func_343(&(iParam0->f_444), 2f))
		{
			func_341(&(iParam0->f_444));
			func_423(iParam0, -1f);
		}
	}
	return 18;
}

int func_453(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	func_331(uParam0->f_7);
	switch (func_688(uParam0, iParam1))
	{
		case 0:
			func_689(uParam0);
			break;
		case 1:
			func_689(uParam0);
			break;
		case 2:
			func_341(&(uParam0->f_444));
			return 20;
	}
	return 19;
}

int func_454(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bVar0 = func_684(iParam0, 0, 1);
	if (bParam4 || bParam5)
	{
		if (bVar0)
		{
			return 0;
		}
		else
		{
			func_642(iParam0);
		}
	}
	else if (func_683(iParam0, &bParam2, iParam1, 0))
	{
		return func_616(iParam0, 0, 1);
	}
	else if (func_343(&(iParam0->f_444), 2f))
	{
		if (bVar0 && !_0x916b8e075abc8b4e(iParam0->f_7, 1))
		{
			if (!func_682(iParam0, -1189657660))
			{
				func_395(iParam0, get_random_float_in_range(7f, 14f), 0);
				if (!func_682(iParam0, -1904017806) && func_30(iParam1, 65536))
				{
					return 2;
				}
				else
				{
					return 4;
				}
			}
			else
			{
				func_395(iParam0, get_random_float_in_range(7f, 14f), 0);
				return 12;
			}
		}
		else
		{
			func_642(iParam0);
		}
	}
	return 20;
}

void func_455(var uParam0, int iParam1)
{
	uParam0->f_21 = iParam1;
}

bool func_456()
{
	return &Global_1935436 == 2;
}

void func_457(int iParam0)
{
	if (iParam0 >= &Global_1935436)
	{
		return;
	}
	Global_1935436->f_1 = iParam0;
}

void func_458(int iParam0, int iParam1)
{
	if (get_random_event_flag())
	{
		return;
	}
	Global_17504.f_3++;
	Global_17504.f_42[iParam0]->f_1++;
	if (func_122(iParam0, 2))
	{
		func_691(iParam0, func_690(iParam1));
	}
	else
	{
		func_693(iParam0, func_692());
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
	func_694(iParam0, (*Global_1310750)[iParam0]->f_36, fVar0, 1, 0);
	func_695(iParam0, 0);
	func_696(iParam0);
	func_697(1);
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
	if (!func_122(iParam0, 16))
	{
		func_459(iParam0, 0, 0, 0, 0);
	}
}

void func_459(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (bParam1)
	{
	}
	if (func_698() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0];
		if (((func_243(iVar1) && !func_122(iVar1, iParam2)) && (!bParam3 || !func_476(iVar1))) && (!bParam4 || !func_699(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_700(iVar0);
			}
		}
		iVar0++;
	}
}

int func_460(int iParam0)
{
	return (*Global_1310750)[iParam0]->f_39;
}

void func_461(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_177 != -1 || func_517(Global_1310750[uParam0->f_3], 16777216))
	{
		if (bParam2)
		{
			if (func_122(uParam0->f_3, 1073741824))
			{
				func_701(2, -1, 0, 0, 0);
			}
			else
			{
				func_701(1, -1, 0, 0, 0);
			}
		}
		else if (bParam1)
		{
			if (uParam0->f_45)
			{
				func_701(8, -1, 0, 0, 0);
			}
		}
		if (uParam0->f_177 != -1)
		{
			if (bParam2)
			{
				if (!func_702(1, uParam0->f_177))
				{
					func_703(16, uParam0->f_177);
					func_704(1, uParam0->f_177);
				}
				compendium_gang_encountered(func_705(uParam0->f_177));
			}
		}
	}
	else if (bParam2 || (bParam1 && uParam0->f_45))
	{
		func_701(8, -1, 0, 0, 0);
	}
}

int func_462()
{
	if (func_362(Global_1935630->f_44))
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
		else if (func_706())
		{
			return 1;
		}
	}
	return 0;
}

bool func_463(int iParam0, int iParam1, bool bParam2, int iParam3)
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

float func_464(var uParam0, bool bParam1)
{
	if (uParam0->f_119 == -1f)
	{
		if (func_122(uParam0->f_3, 1024))
		{
			fVar0 = 95f;
		}
		else if (func_122(uParam0->f_3, 2048))
		{
			fVar0 = 80f;
		}
		else if (func_122(uParam0->f_3, 4096))
		{
			fVar0 = 65f;
		}
		else if (func_122(uParam0->f_3, 8192))
		{
			fVar0 = 55f;
		}
		else if (func_122(uParam0->f_3, 16384))
		{
			fVar0 = 30f;
		}
		else
		{
			fVar0 = 85f;
		}
		if (func_122(uParam0->f_3, 1))
		{
		}
		else if (func_122(uParam0->f_3, 2))
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

int func_465(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6)
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
			else if (func_707(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
					if (func_708(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
		uParam0->f_7 = (func_709() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

bool func_466(var uParam0, int iParam1, float fParam2)
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
	func_218(uParam0);
	return true;
}

bool func_467()
{
	return (Global_1894899 & 1 != 0 && func_479() != -1);
}

bool func_468(var uParam0, float fParam1)
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

int func_469(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_710(bParam1, bParam2, bParam3);
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

bool func_470(int iParam0)
{
	if (iParam0 == -1)
	{
		return true;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = func_712(func_711());
	if (func_30(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_30(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_30(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_30(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_30(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_30(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_30(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_30(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_30(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_30(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_30(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_30(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_30(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_30(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_30(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_30(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_30(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

bool func_471(int iParam0, int iParam1)
{
	return (func_460(iParam0) && iParam1) != 0;
}

bool func_472(int iParam0)
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
	if (iParam0 & 1 == 1 && func_713(iVar3))
	{
		return true;
	}
	if (iParam0 & 2 == 2 && func_714(iVar3))
	{
		return true;
	}
	if (iParam0 & 4 == 4 && func_715(iVar3))
	{
		return true;
	}
	if (iParam0 & 8 == 8 && func_716(iVar3))
	{
		return true;
	}
	if (iParam0 & 16 == 16 && func_717(iVar3))
	{
		return true;
	}
	if (iParam0 & 32 == 32 && func_718(iVar3))
	{
		return true;
	}
	if (iParam0 & 64 == 64 && func_719(iVar3))
	{
		return true;
	}
	return false;
}

bool func_473(bool bParam0)
{
	if (func_720(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_474(int iParam0)
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

bool func_475(int iParam0, bool bParam1, bool bParam2)
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
		if (func_721())
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
		iVar0 = func_722(&(Global_1898164->f_1[0]));
		if (func_723(iVar0) && func_724((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_725(&(Global_1898164->f_1[0])))
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

bool func_476(int iParam0)
{
	if (!func_243(iParam0))
	{
		return false;
	}
	if (func_726(64) && func_727(iParam0))
	{
		return true;
	}
	return (*Global_1310750)[iParam0]->f_46;
}

bool func_477(int iParam0, bool bParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_ped_injured(iParam0) || !bParam1)
		{
			iVar0 = get_interior_from_entity(iParam0);
			if (is_valid_interior(iVar0))
			{
				if (func_728(iVar0) || func_729(iVar0))
				{
					return false;
				}
				return true;
			}
		}
	}
	return false;
}

bool func_478()
{
	return Global_1894899 & 4 != 0;
}

int func_479()
{
	return Global_1894899->f_2;
}

int func_480(int iParam0)
{
	if (!func_730(iParam0))
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

bool func_481(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return false;
	}
	return true;
}

bool func_482(vector3 vParam0, int iParam3)
{
	if (!func_481(iParam3))
	{
		return false;
	}
	if (_does_volume_exist((*Global_1392194)[iParam3]->f_5))
	{
		return _0xf256a75210c5c0eb((*Global_1392194)[iParam3]->f_5, vParam0);
	}
	return false;
}

bool func_483(vector3 vParam0)
{
	if (func_79(vParam0))
	{
		return false;
	}
	fVar0 = func_102(func_467(), 6f, 22f);
	return _0x769bb7626b8cdb06(vParam0, fVar0, 1, 0, 16384);
}

bool func_484(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
						func_341(uParam0);
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
		func_341(uParam0);
		return true;
	}
	if (!bParam4)
	{
		if (!func_333(uParam0))
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
		if (func_333(uParam0))
		{
			func_334(uParam0);
		}
	}
	return false;
}

bool func_485(vector3 vParam0)
{
	return _0x769bb7626b8cdb06(vParam0, 0.5f, 0, 0, 16384);
}

float func_486(int iParam0)
{
	if (!func_243(iParam0))
	{
		return 0f;
	}
	if (!func_731(iParam0))
	{
		return 0f;
	}
	return (*Global_1310750)[iParam0]->f_44;
}

char* func_487()
{
	return "unnamed";
}

char* func_488(int iParam0)
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

int func_489(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (!_does_volume_exist(iParam0))
	{
		return 0;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	vVar3 = { _0x3e2a25b2416dd67e(iParam0) };
	iVar6 = func_518(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

bool func_490(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_491(int iParam0, int iParam1)
{
	if (!func_490(iParam0))
	{
		return false;
	}
	return (Global_1395482->f_2[iParam0] && iParam1) != 0;
}

float func_492(vector3 vParam0, float fParam3)
{
	if (fParam3 > 0f)
	{
		return fParam3;
	}
	return get_distance_between_coords(Global_36, vParam0, true);
}

float func_493(float fParam0, int iParam1)
{
	fVar0 = (2f * sin((180f * (fParam0 / func_227(iParam1)))));
	if (fVar0 < 0f)
	{
		return 0f;
	}
	else if (fVar0 > 1f)
	{
		return 1f;
	}
	return fVar0;
}

float func_494(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

float func_495(float fParam0)
{
	if (fParam0 < 250f)
	{
		if (fParam0 < 50f)
		{
			fVar0 = 0.25f;
		}
		else if (fParam0 < 100f)
		{
			fVar0 = 0.5f;
		}
		else if (fParam0 < 150f)
		{
			fVar0 = 1f;
		}
		else if (fParam0 < 200f)
		{
			fVar0 = 1.5f;
		}
		else if (fParam0 < 250f)
		{
			fVar0 = 2f;
		}
	}
	else if (fParam0 < 500f)
	{
		if (fParam0 < 300f)
		{
			fVar0 = 2.5f;
		}
		else if (fParam0 < 350f)
		{
			fVar0 = 3f;
		}
		else if (fParam0 < 400f)
		{
			fVar0 = 3.5f;
		}
		else if (fParam0 < 450f)
		{
			fVar0 = 4f;
		}
		else if (fParam0 < 500f)
		{
			fVar0 = 4.5f;
		}
	}
	else if (fParam0 < 750f)
	{
		if (fParam0 < 550f)
		{
			fVar0 = 5f;
		}
		else if (fParam0 < 600f)
		{
			fVar0 = 5.5f;
		}
		else if (fParam0 < 650f)
		{
			fVar0 = 6f;
		}
		else if (fParam0 < 700f)
		{
			fVar0 = 6.5f;
		}
		else if (fParam0 < 750f)
		{
			fVar0 = 7f;
		}
	}
	else if (fParam0 < 1000f)
	{
		if (fParam0 < 800f)
		{
			fVar0 = 7.5f;
		}
		else if (fParam0 < 850f)
		{
			fVar0 = 8f;
		}
		else if (fParam0 < 900f)
		{
			fVar0 = 8.5f;
		}
		else if (fParam0 < 950f)
		{
			fVar0 = 9f;
		}
		else if (fParam0 < 1000f)
		{
			fVar0 = 9.5f;
		}
	}
	else
	{
		fVar0 = 10f;
	}
	return fVar0;
}

Vector3 func_496(int iParam0)
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
	return func_497((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

Vector3 func_497(vector3 vParam0)
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

int func_498(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_499(int iParam0, int iParam1)
{
	iParam0 = func_498(iParam0);
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

void func_500()
{
	if (func_732(0))
	{
		func_733(0);
	}
	if (func_732(1))
	{
		func_733(1);
	}
	if (func_732(5))
	{
		func_733(5);
	}
	if (func_732(6))
	{
		func_734(6);
	}
}

void func_501(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_735(iParam0, iParam1);
	Global_17504.f_1003[iVar0]->f_1 = iParam2;
}

int func_502(int iParam0, int iParam1)
{
	iVar1 = func_736(iParam0, iParam1);
	iVar0 = 0;
	while (iVar0 < Global_17504.f_1003)
	{
		if (&Global_17504.f_1003[iVar0] == iVar1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_503(int iParam0)
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

void func_504(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_503(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_737(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_738(iVar0);
	*uParam0 = 0;
}

void func_505()
{
	func_739(23);
}

void func_506(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 || iParam0);
}

int func_507(var uParam0)
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

void func_508(int iParam0)
{
	iVar0 = func_740(iParam0);
	if (iVar0 != 0)
	{
		func_741(-1, 24, 0, iVar0);
	}
}

void func_509(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (Global_1310750->f_16071 != iParam0 && !bParam2)
	{
		return;
	}
	if (&Global_17504.f_42[iParam0] == 0)
	{
		func_743(func_742(-1029789297), 1);
	}
	Global_17504.f_4++;
	Global_17504.f_42[iParam0] = &Global_17504.f_42[iParam0] + 1;
	(*Global_1310750)[iParam0]->f_110 |= 8;
	if (func_122(iParam0, 2))
	{
		func_744(iParam0, func_690(iParam3));
	}
	if (func_122(iParam0, 1))
	{
		if (iParam4 == -1)
		{
			iParam4 = func_692();
		}
		func_745(iParam0, iParam4);
	}
	if (iParam1 >= 0 && !func_216(iParam0, 65536))
	{
		func_746(iParam0, iParam1);
		func_747(iParam0, func_256(iParam0, iParam1));
		func_506(128);
	}
	func_694(iParam0, (*Global_1310750)[iParam0]->f_37, 1065353216, 0, 0);
	func_695(iParam0, 1);
	if (!bParam2)
	{
		func_506(16);
		Global_17504.f_5 = iParam0;
		Global_17504.f_9 = 1;
		Global_17504.f_7 = 0;
		Global_17504.f_8 = 0;
		func_748(524288);
	}
	if (func_749(iParam0) != 0)
	{
		if (&Global_17504.f_42[iParam0] >= func_749(iParam0))
		{
			Global_17504.f_42[iParam0]->f_6 = 1;
		}
	}
}

void func_510(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_750(&Global_0, 8);
	}
	if (!func_751() || func_90() != -1)
	{
		return;
	}
	func_750(&Global_0, 1);
}

bool func_511(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

int func_512(int iParam0)
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

int func_513(int iParam0)
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

bool func_514(int iParam0, int iParam1, var uParam2)
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

Vector3 func_515(int iParam0, var uParam1)
{
	iVar1 = -1;
	if (does_entity_exist(iParam0))
	{
		vVar2 = { get_entity_coords(iParam0, true, false) };
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!func_79(*(*uParam1)[iVar0]))
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

void func_516(var uParam0, bool bParam1)
{
	if (!does_blip_exist(uParam0->f_6))
	{
		uParam0->f_6 = _blip_add_for_coord(-1702907713, *uParam0);
		_blip_set_modifier(uParam0->f_6, 580546400);
		set_blip_name_from_text_file(uParam0->f_6, "BLIP_DEBUG");
		if (bParam1)
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_28("BEAT_GLB", 5500, 0, 1, 0, 0, -1, -1, 0);
		}
		_0x9851de7aec10b4e1(*uParam0, 100f, 1, 0);
	}
}

bool func_517(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_518(vector3 vParam0, float fParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (!bParam8 && network_is_game_in_progress())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_79(vParam0))
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
		if (func_485(vParam0))
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
	func_752(iVar0, bParam8);
	return iVar0;
}

void func_519(int iParam0)
{
	if (!func_243(iParam0))
	{
		return;
	}
	func_753(iParam0);
}

void func_520(var uParam0, vector3 vParam1)
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

int func_521(int iParam0)
{
	if (func_216(iParam0, 2))
	{
		return 200;
	}
	if (func_216(iParam0, 4))
	{
		return 70;
	}
	if (func_216(iParam0, 32))
	{
		return 400;
	}
	return 110;
}

int func_522(int iParam0)
{
	if (func_122(iParam0, 131072))
	{
		return 0;
	}
	else
	{
		if (iParam0 == 6)
		{
			if (func_692() == 8)
			{
				return 3;
			}
		}
		bVar0 = func_122(iParam0, 2);
		bVar1 = func_122(iParam0, 1);
		bVar2 = (bVar0 && bVar1);
		if (bVar2)
		{
			if (!func_467())
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

void func_523(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
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
	if (func_216(iParam3, 2097152))
	{
		*fParam0 = (*fParam0 + 15f);
		*iParam2 = ceil((*fParam0 + 50f));
	}
	else
	{
		*iParam2 = 70;
	}
}

void func_524(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
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
	if (func_216(iParam3, 2))
	{
		*fParam0 = (*fParam0 + 60f);
		*fParam1 = (*fParam1 + 60f);
		*iParam2 = ceil((*fParam0 + 110f));
	}
	else if (func_216(iParam3, 2097152))
	{
		*fParam0 = (*fParam0 + 30f);
		*iParam2 = ceil((*fParam0 + 30f));
	}
	else
	{
		*iParam2 = 70;
	}
}

bool func_525(int iParam0, int iParam1)
{
	iVar0 = (func_513(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_17504.f_12[iVar1]), iVar2);
}

bool func_526(int iParam0, vector3 vParam1, float fParam4, float fParam5)
{
	if (func_79(vParam1))
	{
		return false;
	}
	if (func_530(iParam0, vParam1))
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
	if (func_223(iParam0))
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

void func_527(int iParam0, vector3 vParam1, int iParam4, float fParam5, bool bParam6, float fParam7)
{
	fVar0 = func_102(bParam6, fParam7, vdist(vParam1, get_entity_coords(iParam0, true, false)));
	if (!iParam4->f_1)
	{
		if (fVar0 < iParam4->f_2 || (func_533(vParam1, iParam0) && get_entity_speed(iParam0) > fParam5))
		{
			*iParam4 = func_754();
			iParam4->f_2 = func_420(iParam0, vParam1, 1);
			iParam4->f_1 = 1;
		}
	}
	else if (fVar0 > iParam4->f_2 || (!func_533(vParam1, iParam0) && get_entity_speed(iParam0) > fParam5))
	{
		*iParam4 = func_754();
		iParam4->f_2 = func_420(iParam0, vParam1, 1);
		iParam4->f_1 = 0;
	}
}

bool func_528(var uParam0, int iParam1)
{
	if (uParam0->f_1 == 1)
	{
		return (func_754() - *uParam0) >= iParam1;
	}
	return false;
}

int func_529(var uParam0)
{
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_79(*uParam0->f_12[iVar0]))
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

bool func_530(int iParam0, vector3 vParam1)
{
	if (!func_122(iParam0, 1))
	{
		iVar0 = 1;
	}
	if (func_755(vParam1, 0, 0, iVar0))
	{
		return true;
	}
	if (func_122(iParam0, 33554432))
	{
		if (func_756(vParam1, 200f, 1, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_531(int iParam0, var uParam1)
{
	iVar0 = 1;
	if (func_216(iParam0, 128))
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
	if (func_122(iParam0, 1) && !func_122(iParam0, 2))
	{
		if (func_122(iParam0, 4096) || func_122(iParam0, 2048))
		{
			if (func_757(*uParam1))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

bool func_532(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	uVar0 = func_29(&uParam0);
	if (!func_758())
	{
		return false;
	}
	return true;
}

bool func_533(vector3 vParam0, int iParam3)
{
	if (is_entity_dead(iParam3))
	{
		return false;
	}
	vVar0 = { get_entity_forward_vector(iParam3) };
	return func_759(vVar0, vParam0) > func_759(vVar0, get_entity_coords(iParam3, true, false));
}

bool func_534(int iParam0)
{
	return !iParam0 <= 0;
}

bool func_535(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_534(iParam0))
		{
			return false;
		}
	}
	if (Global_1572887->f_12 != -1)
	{
		return (Global_36638[iParam0] && iParam1) != 0;
	}
	return (Global_40.f_9274[iParam0] && iParam1) != 0;
}

bool func_536(int iParam0, var uParam1, bool bParam2)
{
	if ((bParam2 && func_90() == 0) && !_unlock_is_visible(iParam0))
	{
		return false;
	}
	if (!func_760(iParam0, uParam1, &uVar0, &iVar11) || iVar11 < 1)
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

void func_537(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

bool func_538(int iParam0, int iParam1)
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

void func_539(int iParam0, int iParam1, var uParam2)
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

struct<14> func_540(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> func_541(bool bParam0)
{
	iVar0 = func_282(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_610(923904168, func_761(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_610(923904168, func_761(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_610(923904168, func_761(bParam0), -740156546, 0);
}

void func_542(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_543(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_282(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_544(int iParam0)
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

bool func_545(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_282(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_546(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_547(var uParam0)
{
	return func_301(*uParam0, 1);
}

bool func_548(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_762(*uParam0, 0f, 0f, 0f))
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

void func_549(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_763(iParam1))
		{
			func_764(iParam0, 41788943);
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
			func_765(iParam0, 0, 1);
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
			func_766(iParam0, 0);
			bVar0 = true;
		}
		func_767(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

void func_550(var uParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_242(uParam0))
	{
		*uParam0 = _0xfa50f79257745e74(vParam1, iParam4, iParam5, iParam6, iParam7);
		if (func_242(uParam0))
		{
		}
	}
}

void func_551(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4)
{
	if (!func_242(uParam0))
	{
		*uParam0 = _0xbd3324281e8b9933(*uParam3, iParam1, iParam2, iParam4);
		if (func_242(uParam0))
		{
		}
	}
}

void func_552(int iParam0, bool bParam1, int iParam2)
{
	func_768(iParam2);
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
		iParam0->f_13 = func_769(0);
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
							func_119(iParam0, 33554432);
						}
					}
					else if (!*iParam0 & 8192 != 0)
					{
						if (func_473(1))
						{
							func_119(iParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_35) && (!func_473(1) || *iParam0 & 8192 != 0))
				{
					func_118(iParam0, 33554432);
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
			if (func_770(iParam0))
			{
				iParam0->f_15 = func_754();
			}
		}
		else if (iParam0->f_15 > 0)
		{
			if ((func_754() - iParam0->f_15) > 500)
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
	func_771(iParam0);
}

bool func_553(int iParam0, int iParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_754();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_554(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_772(iVar0, &iVar2))
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
	if (func_773(iVar0, iParam0))
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

int func_555(int iParam0, int iParam1)
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

bool func_556(int iParam0, int iParam1)
{
	if (func_774(iParam0))
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

void func_557()
{
}

void func_558(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		iParam1->f_10 = iParam0;
	}
	if (func_775(iParam2, 1, 1, 1, 0))
	{
		func_119(iParam1, 2048);
	}
	iParam1->f_16 = iParam2;
	func_776(iParam1, 1);
	func_253();
}

bool func_559(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_372(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_560()
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
	if ((func_754() - Global_1935630->f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_561(int iParam0, float fParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_754();
	iVar1 = (iVar0 - iParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_562(var uParam0, int iParam1, int iParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_777(iParam2);
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
			if (func_556(iParam2, iParam1))
			{
				func_776(iParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_563(var uParam0, int iParam1, int iParam2)
{
	if (iParam2->f_12 < IntToFloat(func_778(iParam2)))
	{
		if ((is_weapon_valid(Global_1935630->f_46) && !_0x5809dbca0a37c82b(Global_1935630->f_46)) || get_current_ped_vehicle_weapon(Global_35, &uVar0))
		{
			if (func_556(iParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_776(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_564(int iParam0, int iParam1)
{
	fVar0 = func_779(iParam1);
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
		fVar2 = func_780(_0x2ba9d7bf629f920c(iParam0), (fVar0 + 5f));
		if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, fVar2, -1f, fVar1) && _0x7f9b9791d4cb71f6(iParam0, Global_35, 1, 0) == 1)
		{
			return true;
		}
		else if (is_weapon_valid(Global_1935630->f_44))
		{
			if (_is_weapon_lantern(Global_1935630->f_44) || _is_weapon_torch(Global_1935630->f_44))
			{
				if (iParam1->f_12 <= 5f)
				{
					if (func_781())
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

bool func_565(int iParam0, int iParam1)
{
	if (func_474(iParam0))
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

int func_566(int iParam0)
{
	if (!is_entity_dead(iParam0->f_434.f_5))
	{
		if (has_entity_been_damaged_by_entity(iParam0->f_434.f_5, Global_35, 1, 1) || func_207(Global_35, iParam0->f_434.f_5, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_567(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > iParam2->f_5)
	{
		func_552(iParam2, 1, iVar0);
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
			if (func_782(iParam0, iParam2))
			{
				*iParam3 = 128;
				func_558(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (func_783(iParam0, iParam2))
				{
					*iParam3 = 8;
					func_558(iParam0, iParam2, *iParam3);
					return true;
				}
				else if (func_784(iParam0, iParam1, iParam2))
				{
					*iParam3 = 8;
					func_558(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (func_785(iParam0, iParam2))
				{
					*iParam3 = 64;
					func_558(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_26 && func_469(player_id(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*iParam3 = 16384;
				func_558(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_561(iParam2, 1065353216))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (func_562(Global_35, iParam0, iParam2))
					{
						*iParam3 = 4;
						func_558(iParam0, iParam2, *iParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (func_563(Global_35, iParam0, iParam2))
					{
						*iParam3 = 256;
						func_558(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_786(Global_35, iParam0, iParam2, 0))
				{
					*iParam3 = 16;
					func_558(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			else if (func_786(Global_35, iParam0, iParam2, 1))
			{
				*iParam3 = 16;
				func_558(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (func_787(iParam0, iParam2))
				{
					*iParam3 = 32;
					func_558(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || iParam2->f_12 < 20f)
			{
				if (func_788(&iParam0, iParam2))
				{
					*iParam3 = 4096;
					func_558(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (func_553(iParam2, 4000))
				{
					if ((func_554(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && func_555(iParam2, iParam0)) && func_556(iParam2, iParam0))
					{
						*iParam3 = 2;
						func_558(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((func_554(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && func_555(iParam2, iParam0)) && func_556(iParam2, iParam0))
				{
					*iParam3 = 2;
					func_558(iParam0, iParam2, *iParam3);
					return true;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (func_559(iParam0, Global_1935630->f_41))
							{
								func_557();
								*iParam3 = 2;
								func_558(iParam0, iParam2, *iParam3);
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
						if (func_559(iParam0, Global_1935630->f_41))
						{
							func_557();
							*iParam3 = 2;
							func_558(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (func_789(iParam2, iParam0) || (iParam2->f_9 > 0 && (func_754() - iParam2->f_9) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_557();
						*iParam3 = 2;
						func_558(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (func_560())
					{
						if (func_559(iParam0, Global_1935630->f_42))
						{
							func_557();
							*iParam3 = 2;
							func_558(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (func_790(iParam2, iParam0))
			{
				*iParam3 = 1024;
				func_558(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (func_791(iParam0, iParam1, iParam2))
				{
					*iParam3 = 2048;
					func_558(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (func_792(iParam0, iParam2))
					{
						*iParam3 = 8192;
						func_558(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (func_793(iParam0, iParam2))
				{
					*iParam3 = 32768;
					func_558(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (func_794(iParam2, 4000))
				{
					if (func_795(&iParam0, iParam2))
					{
						*iParam3 = 512;
						func_558(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (func_796(iParam0, iParam2))
				{
					*iParam3 = 65536;
					iParam2->f_4 = 0;
					func_558(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_797(iParam2, iParam0))
			{
				*iParam3 = 1;
				func_558(iParam0, iParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

void func_568(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_90() != -1)
	{
		return;
	}
	if ((Global_36616 && func_798(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_799(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_800(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_801(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_800(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

void func_569(var uParam0)
{
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		set_ped_config_flag(*uParam0, 297, false);
	}
}

void func_570(var uParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		func_569(uParam0);
		func_802(iParam1, uParam2);
	}
	func_803(*uParam0, 1, bParam4);
}

bool func_571(int iParam0, int iParam1)
{
	if (iParam0 <= 0)
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return true;
	}
	if (iParam0 < iParam1)
	{
		return true;
	}
	return false;
}

int func_572(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	iVar0 = func_804(iParam2, iParam3);
	sVar1 = func_805(iParam2, iParam3);
	if (!is_entity_dead(iParam0))
	{
		if (has_anim_event_fired(iParam0, iVar0))
		{
			if (!bParam4)
			{
				func_206(iParam0, iParam1, sVar1, 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			return 1;
		}
	}
	return 0;
}

int func_573(int iParam0, int iParam1, int iParam2)
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

int func_574(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	iVar0 = iParam9;
	func_806(&iVar0);
	if (func_30(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_807(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_30(iVar0, 134217728))
	{
		func_808(iParam1, uParam3, uParam0);
	}
	if (!*uParam4)
	{
		if (!is_bit_set(*iParam1, 25))
		{
			if (is_bit_set(*iParam1, 24))
			{
				if (!func_809(558))
				{
					func_810(558, 0);
				}
				set_bit(iParam1, 24);
				set_bit(iParam1, 25);
			}
		}
	}
	return iVar1;
}

void func_575(var uParam0, int iParam1)
{
	func_811(uParam0, iParam1);
}

void func_576(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_359((*uParam0)[iVar0], bParam1, bParam2);
		iVar0++;
	}
}

bool func_577(int iParam0)
{
	if (func_13(iParam0, 42))
	{
		return false;
	}
	return true;
}

void func_578(var uParam0, var uParam1)
{
	uParam0->f_511 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (func_812(uParam0, uParam1, iVar0))
		{
			set_bit(&(uParam0->f_511), iVar0);
		}
		iVar0++;
	}
}

void func_579(int iParam0, int iParam1)
{
	if (func_330(iParam0, 1))
	{
	}
	else
	{
		func_72(iParam0, 41);
		iParam0->f_516 = 0;
		if (func_333(&(iParam0->f_459)))
		{
			if (func_593(&(iParam0->f_459)))
			{
				func_813(&(iParam0->f_459));
			}
		}
		func_622(&(iParam0->f_284), 1);
		iParam0->f_523 = iParam1;
	}
}

void func_580(int iParam0, int iParam1)
{
	func_334(&(iParam0->f_496));
	func_334(&(iParam0->f_499));
	iParam0->f_516 = 0;
	iParam0->f_517 = 0;
	iParam0->f_519 = 0;
	iParam0->f_522 = 0;
	iParam0->f_524 = 0;
	iParam0->f_523 = iParam1;
	iParam0->f_529 = func_339(iParam0->f_523, func_338(iParam0, iParam0->f_523));
}

void func_581(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11)
{
	switch (iParam4)
	{
		case 0:
			iVar2 = 1;
			iVar0 = 1;
			iVar3 = 1;
			iVar1 = 1;
			break;
		case 1:
			iVar2 = 2;
			iVar0 = 2;
			iVar3 = 2;
			iVar1 = 2;
			break;
		case 2:
			iVar2 = 3;
			iVar0 = 3;
			iVar3 = 3;
			iVar1 = 3;
			break;
		case 3:
			iVar2 = 4;
			iVar0 = 4;
			iVar3 = 3;
			iVar1 = 3;
			break;
	}
	if (bParam8)
	{
		iVar3 = 0;
	}
	if (bParam9)
	{
		iVar1 = 0;
	}
	uParam0->f_3 = uParam1;
	uParam0->f_7 = iParam3;
	uParam0->f_5 = iParam10;
	uParam0->f_6 = iParam11;
	uParam0->f_8 = iVar0;
	uParam0->f_13 = iParam5;
	uParam0->f_14 = iParam6;
	uParam0->f_15 = iParam6;
	uParam0->f_23 = iVar3;
	uParam0->f_24 = iVar3;
	uParam0->f_16 = iVar1;
	uParam0->f_9 = iParam7;
	uParam0->f_10 = iParam7;
	uParam0->f_11 = iParam7;
	switch (iParam2)
	{
		case 0:
			uParam0->f_4 = 21030;
			uParam0->f_17 = iVar2;
			uParam0->f_18 = iVar2;
			uParam0->f_19 = iVar2;
			uParam0->f_20 = iVar2;
			uParam0->f_21 = iVar2;
			uParam0->f_22 = iVar2;
			break;
		case 1:
			uParam0->f_4 = 21030;
			uParam0->f_19 = iVar2;
			uParam0->f_20 = iVar2;
			uParam0->f_21 = iVar2;
			uParam0->f_22 = iVar2;
			uParam0->f_17 = 0;
			uParam0->f_18 = 0;
			break;
	}
}

bool func_582(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_583(int iParam0, var uParam1)
{
	if (!iParam0->f_518)
	{
		if (func_370(iParam0, 262144))
		{
			iParam0->f_515 = 0;
			if (func_814(iParam0))
			{
				func_72(iParam0, 43);
				func_174(iParam0, 64);
			}
		}
		else
		{
			func_174(iParam0, 262144);
			iParam0->f_515 = 1;
		}
		if (is_ped_using_any_scenario(iParam0->f_7) && _0x916b8e075abc8b4e(iParam0->f_7, 1))
		{
			iParam0->f_514 = 1;
		}
		else
		{
			iParam0->f_514 = 0;
		}
		iParam0->f_518 = 1;
	}
	if (!is_ped_using_any_scenario(iParam0->f_7))
	{
		task_turn_ped_to_face_entity(iParam0->f_7, Global_35, -1, -1082130432, -1082130432, -1082130432);
	}
	iParam0->f_519 = 0;
	return 1;
}

bool func_584(int iParam0, var uParam1)
{
	if (func_13(iParam0, 43) || !is_ped_using_any_scenario(iParam0->f_7))
	{
	}
	else if (!_0x916b8e075abc8b4e(iParam0->f_7, 1))
	{
		func_423(iParam0, -1f);
		return false;
	}
	else
	{
		return _0x916b8e075abc8b4e(iParam0->f_7, 0);
	}
	return true;
}

int func_585(int iParam0, var uParam1, int iParam2, int iParam3)
{
	switch (iParam3)
	{
		case 0:
			return func_815(iParam0, uParam1, iParam2);
		case 1:
			return func_816(iParam0, uParam1, iParam2);
		case 3:
			return func_818(iParam0, uParam1, iParam2, func_817(iParam0, iParam2));
		case 4:
			return func_819(iParam0, uParam1, iParam2);
		case 5:
			return func_820(iParam0, uParam1, iParam2);
		case 2:
			return func_821(iParam0, uParam1, iParam2);
		default:
			break;
	}
	return 4;
}

char* func_586(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 2:
			return func_822(iParam1);
		case 3:
			return func_823(iParam1);
		case 1:
			return func_824(iParam1);
		case 5:
			return func_825(iParam1, bParam2);
		case 6:
			return func_826(iParam1);
		case 7:
			return func_827(iParam1);
		case 4:
			return func_828(iParam1);
		default:
			break;
	}
	return "";
}

void func_587(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 2:
			iParam0->f_525++;
			break;
		case 3:
			iParam0->f_526++;
			break;
		case 1:
			iParam0->f_219++;
			break;
		case 5:
			iParam0->f_527++;
			break;
		case 6:
			iParam0->f_528++;
			break;
	}
}

void func_588(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_709() - fParam1);
	func_829(uParam0, 1);
	func_830(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_589(var uParam0)
{
	if (!func_333(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_593(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_709() - uParam0->f_1);
}

void func_590(int iParam0)
{
	_0x541e5b41dca45828(iParam0->f_7, iParam0->f_484, 0);
	iParam0->f_483 = 1;
	iParam0->f_484 = 1;
}

bool func_591(int iParam0)
{
	if (!iParam0->f_519 || !func_169(iParam0->f_7, 1435919172))
	{
		return true;
	}
	return false;
}

void func_592(int* iParam0, int* iParam1, bool bParam2)
{
	if (func_503(iParam1->f_6))
	{
		if (func_831(iParam1, 1, 0))
		{
			if (0 || func_358(iParam0, 1))
			{
				func_832(iParam1, iParam0->f_5, iParam0->f_14);
			}
			else
			{
				func_621(iParam1, iParam0->f_5);
			}
		}
		func_359(iParam1, func_831(iParam0, 1, 0), 0);
		func_834(iParam1, func_833(iParam0, 0));
	}
	*iParam1 = *iParam0;
	iParam1->f_4 = iParam0->f_4;
	iParam1->f_2 = iParam0->f_2;
	iParam1->f_5 = iParam0->f_5;
	iParam1->f_6 = iParam0->f_6;
	iParam1->f_7 = iParam0->f_7;
	iParam1->f_8 = iParam0->f_8;
	iParam1->f_11 = iParam0->f_11;
	iParam1->f_12 = iParam0->f_12;
	iParam1->f_13 = iParam0->f_13;
	iParam1->f_15 = iParam0->f_15;
	iParam1->f_14 = iParam0->f_14;
	if (!bParam2)
	{
		iParam0->f_6 = 0;
	}
}

bool func_593(var uParam0)
{
	return func_582(*uParam0, 2);
}

void func_594(var uParam0)
{
	if (!func_333(uParam0))
	{
	}
	if (func_593(uParam0))
	{
		uParam0->f_1 = (func_709() - uParam0->f_2);
		uParam0->f_2 = 0f;
		func_830(uParam0, 2);
	}
}

void func_595(var uParam0)
{
	if (func_301(uParam0->f_73, 16))
	{
		func_835(&(uParam0->f_76), uParam0, 0);
		func_836(&(uParam0->f_97), &(uParam0->f_21), 1);
		func_605(&(uParam0->f_73), 16);
	}
}

int func_596()
{
	switch (func_90())
	{
		case 0:
			return get_player_ped(player_id());
		default:
			break;
	}
	return Global_35;
}

bool func_597(int iParam0, int iParam1)
{
	if (func_176(iParam0, 1, 1))
	{
		return func_301(Global_1955500[iParam0], iParam1);
	}
	return false;
}

void func_598(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, float fParam5)
{
	_task_start_scenario_in_place(iParam0, iParam1, iParam2, bParam3, iParam4, fParam5, false);
}

void func_599(var uParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	func_837((*uParam0)[0], func_380(7), sParam1, -163964935, 0, 0, 0, 1, 0);
	func_837((*uParam0)[1], func_380(10), sParam2, 648122183, 0, 0, 0, 1, 0);
	if (!bParam4)
	{
		func_837((*uParam0)[2], func_380(12), sParam3, -1616532217, 0, 0, 0, 1, 0);
		if (is_string_null_or_empty(sParam3))
		{
			func_359((*uParam0)[2], 0, 0);
		}
	}
	if (is_string_null_or_empty(sParam1))
	{
		func_359((*uParam0)[0], 0, 0);
	}
	if (is_string_null_or_empty(sParam2))
	{
		func_359((*uParam0)[1], 0, 0);
	}
}

void func_600(var uParam0, int iParam1, bool bParam2)
{
	func_332(uParam0, iParam1, !bParam2);
}

void func_601(var uParam0, int iParam1, int iParam2)
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

void func_602(var uParam0, int iParam1, int iParam2)
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

int func_603()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_176(iVar0, 1, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_604(int iParam0, int iParam1)
{
	if (func_176(iParam0, 1, 1))
	{
		func_575((*Global_1955500)[iParam0], iParam1);
	}
}

void func_605(int iParam0, int iParam1)
{
	func_537(iParam0, iParam1);
}

struct<5> func_606(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_761(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_279(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_610(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_541(bParam1) };
			if (bParam2 && func_838(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_608(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_608(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_609(iParam0, &Var5, 1728382685))
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
			Var0 = { func_839(bParam1) };
			switch (func_840(iParam0))
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
			if (func_841(iParam0, -1823706425))
			{
				Var0 = { func_610(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_841(iParam0, -1483207246))
			{
				Var0 = { func_610(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_842(Var0, &Var27, bParam1, 0))
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

int func_607(int iParam0, int iParam1)
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

bool func_608(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_843(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_609(int iParam0, var uParam1, int iParam2)
{
	if (func_844(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_610(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_278(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_282(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_611(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_845(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_842(*uParam1, &Var0, bParam6, 0))
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
	if (!func_612(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_282(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_612(bool bParam0)
{
	if (func_90() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_282(bParam0));
}

bool func_613(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_846(iParam0))
	{
		return false;
	}
	if (!func_612(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return true;
}

void func_614(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_847(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

int func_615(int iParam0)
{
	switch (iParam0)
	{
		case 43:
			return 0;
		case 18:
			return 1;
		case 40:
			return 3;
		case 19:
			return 2;
		default:
			break;
	}
	return -1;
}

int func_616(int iParam0, bool bParam1, bool bParam2)
{
	if (func_333(&(iParam0->f_444)))
	{
		func_334(&(iParam0->f_444));
	}
	if (bParam1)
	{
		func_395(iParam0, 25f, 0);
	}
	if (bParam2)
	{
		iParam0->f_203 = 18;
	}
	return 18;
}

int func_617(int iParam0)
{
	if (iParam0->f_203 >= 1 && iParam0->f_203 <= 8)
	{
		return 0;
	}
	if (iParam0->f_203 >= 9 && iParam0->f_203 <= 16)
	{
		return 1;
	}
	if (iParam0->f_203 >= 17 && iParam0->f_203 <= 21)
	{
		return 2;
	}
	return -1;
}

bool func_618(float fParam0)
{
	if (func_848(1))
	{
		return true;
	}
	if (func_333(&uLocal_0) && !func_422(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

bool func_619(float fParam0)
{
	return !func_375(fParam0, 1, 0, 0);
}

bool func_620(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 38)
	{
		return true;
	}
	return false;
}

void func_621(int* iParam0, char* sParam1)
{
	if (func_503(iParam0->f_6) && !is_string_null_or_empty(sParam1))
	{
		func_849(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_361(iParam0, 1);
}

void func_622(var uParam0, bool bParam1)
{
	if (bParam1 || !func_301(uParam0->f_73, 16))
	{
		func_835(uParam0, &(uParam0->f_76), 0);
		func_836(&(uParam0->f_21), &(uParam0->f_97), 1);
		func_575(&(uParam0->f_73), 16);
	}
}

int func_623(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 1433048902;
		case 3:
			return 1433048902;
		case 4:
			return -1602657245;
		case 5:
			return -1991037110;
		case 6:
			return 1047281747;
		case 7:
			return -398744080;
		case 8:
			return -1066874997;
		case 11:
			return -2085219828;
		case 12:
			return 2064962445;
		case 13:
			return -1781387050;
		case 15:
			return -1620920647;
		case 16:
			return -1664530975;
		case 18:
			return 1047281747;
		case 19:
			return -1781387050;
		case 20:
			return -597058368;
		case 23:
			return 128702355;
		case 26:
			return -2051332199;
		case 27:
			return 546981776;
		case 28:
			return -2013384490;
		case 29:
			return 228922461;
		case 31:
			return -746674788;
		case 33:
			return 599861917;
		case 34:
			return -1781387050;
		case 37:
			return 2006811763;
		case 38:
			return -90546043;
		case 39:
			return 1216456215;
		case 40:
			return 746300881;
		case 41:
			return -435006002;
		case 42:
			return -624139784;
		case 43:
			return -529638012;
		case 1:
			return -651064726;
		case 9:
			return -404270094;
		case 10:
			return -1521783510;
		case 14:
			return 1714875242;
		case 17:
			return 2093126853;
		case 21:
			return 728781265;
		case 22:
			return 1794857344;
		case 24:
			return 1952409553;
		case 25:
			return -150591160;
		case 30:
			return 1019229063;
		case 32:
			return -323969289;
		case 35:
			return 927763737;
		case 36:
			return 1504361882;
		default:
			break;
	}
	return 0;
}

char* func_624(char* sParam0, char* sParam1)
{
	return "ERR_STRING";
}

bool func_625(int iParam0)
{
	if (!func_534(iParam0))
	{
		return false;
	}
	return func_535(iParam0, 1, 1);
}

int func_626(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 9:
		case 10:
		case 14:
		case 17:
		case 21:
		case 22:
		case 24:
		case 25:
		case 30:
		case 32:
		case 35:
		case 36:
			return 1;
		default:
			return 0;
	}
	return 0;
}

void func_627(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			func_810(210, 0);
			break;
		case 16:
			func_810(211, 0);
			break;
		case 33:
			func_810(212, 0);
			break;
		case 42:
			func_810(213, 0);
			break;
		case 2:
			func_810(214, 0);
			break;
		case 3:
			func_810(215, 0);
			break;
		case 43:
			func_810(216, 0);
			break;
		case 15:
			func_810(217, 0);
			break;
		case 23:
			func_810(218, 0);
			break;
		case 37:
			func_810(219, 0);
			break;
		case 26:
			func_810(220, 0);
			break;
		case 13:
			func_810(221, 0);
			break;
		case 19:
			func_810(222, 0);
			break;
		case 34:
			func_810(223, 0);
			break;
		case 38:
			func_810(224, 0);
			break;
		case 40:
			func_810(225, 0);
			break;
		case 7:
			func_810(226, 0);
			break;
		case 20:
			func_810(227, 0);
			break;
		case 18:
			func_810(228, 0);
			break;
		case 6:
			func_810(229, 0);
			break;
		case 29:
			func_810(230, 0);
			break;
		case 39:
			func_810(231, 0);
			break;
		case 11:
			break;
		case 4:
			func_810(233, 0);
			break;
		case 8:
			func_810(234, 0);
			break;
		case 28:
			func_810(235, 0);
			break;
		case 31:
			func_810(236, 0);
			break;
		case 12:
			func_810(237, 0);
			break;
		case 27:
			func_810(238, 0);
			break;
		case 41:
			func_810(239, 0);
			break;
	}
}

void func_628(int iParam0, int iParam1)
{
	if (!func_534(iParam0))
	{
		return;
	}
	if (func_90() != -1)
	{
		Global_36638[iParam0] = (Global_36638[iParam0] || iParam1);
		return;
	}
	Global_40.f_9274[iParam0] = (Global_40.f_9274[iParam0] || iParam1);
}

bool func_629()
{
	if (func_90() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

void func_630(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 1:
			if (bParam1 == 1)
			{
				func_850(1849379570, 0);
			}
			else
			{
				func_850(961286348, 0);
			}
			break;
		case 2:
			if (bParam1 == 1)
			{
				func_850(-837750081, 0);
			}
			else
			{
				func_850(340939753, 0);
			}
			break;
		case 3:
			if (bParam1 == 1)
			{
				func_850(-342875345, 0);
			}
			else
			{
				func_850(-1349311606, 0);
			}
			break;
		case 4:
			if (bParam1 == 1)
			{
				func_850(-1083564345, 0);
			}
			else
			{
				func_850(833225684, 0);
			}
			break;
		case 5:
			if (bParam1 == 1)
			{
				func_850(-363984637, 0);
			}
			else
			{
				func_850(1254542371, 0);
			}
			break;
		case 6:
			if (bParam1 == 1)
			{
				func_850(205335377, 0);
			}
			else
			{
				func_850(637367741, 0);
			}
			break;
		case 11:
			if (bParam1 == 1)
			{
				func_850(-1389317844, 0);
			}
			else
			{
				func_850(-556895345, 0);
			}
			break;
		case 7:
			if (bParam1 == 1)
			{
				func_850(-1907629529, 0);
			}
			else
			{
				func_850(1599606732, 0);
			}
			break;
		case 39:
			if (bParam1 == 1)
			{
				func_850(240007023, 0);
			}
			else
			{
				func_850(-1520210138, 0);
			}
			break;
		case 8:
			if (bParam1 == 1)
			{
				func_850(1312152388, 0);
			}
			else
			{
				func_850(-9418953, 0);
			}
			break;
		case 9:
			if (bParam1 == 1)
			{
				func_850(545314598, 0);
			}
			else
			{
				func_850(1529839790, 0);
			}
			break;
		case 10:
			if (bParam1 == 1)
			{
				func_850(1230485961, 0);
			}
			else
			{
				func_850(-1579920715, 0);
			}
			break;
		case 12:
			if (bParam1 == 1)
			{
				func_850(-201902289, 0);
			}
			else
			{
				func_850(1415616009, 0);
			}
			break;
		case 13:
			if (bParam1 == 1)
			{
				func_850(-564622057, 0);
			}
			else
			{
				func_850(-1442109431, 0);
			}
			break;
		case 14:
			if (bParam1 == 1)
			{
				func_850(-1303190422, 0);
			}
			else
			{
				func_850(-1299326860, 0);
			}
			break;
		case 15:
			if (bParam1 == 1)
			{
				func_850(-88060354, 0);
			}
			else
			{
				func_850(-366222423, 0);
			}
			break;
		case 40:
			if (bParam1 == 1)
			{
				func_850(1312248008, 0);
			}
			else
			{
				func_850(621868532, 0);
			}
			break;
		case 17:
			if (bParam1 == 1)
			{
				func_850(428446588, 0);
			}
			else
			{
				func_850(-1730302202, 0);
			}
			break;
		case 18:
			if (bParam1 == 1)
			{
				func_850(37692363, 0);
			}
			else
			{
				func_850(629404512, 0);
			}
			break;
		case 16:
			if (bParam1 == 1)
			{
				func_850(877023893, 0);
			}
			else
			{
				func_850(122486811, 0);
			}
			break;
		case 19:
			if (bParam1 == 1)
			{
				func_850(-706642783, 0);
			}
			else
			{
				func_850(621155065, 0);
			}
			break;
		case 20:
			if (bParam1 == 1)
			{
				func_850(-918250703, 0);
			}
			else
			{
				func_850(1945953943, 0);
			}
			break;
		case 21:
			if (bParam1 == 1)
			{
				func_850(722815515, 0);
			}
			else
			{
				func_850(-80758135, 0);
			}
			break;
		case 22:
			if (bParam1 == 1)
			{
				func_850(1053305061, 0);
			}
			else
			{
				func_850(1789349782, 0);
			}
			break;
		case 23:
			if (bParam1 == 1)
			{
				func_850(1024520106, 0);
			}
			else
			{
				func_850(1105521253, 0);
			}
			break;
		case 41:
			if (bParam1 == 1)
			{
				func_850(1140872184, 0);
			}
			else
			{
				func_850(-237709193, 0);
			}
			break;
		case 24:
			if (bParam1 == 1)
			{
				func_850(-1590595690, 0);
			}
			else
			{
				func_850(1836601784, 0);
			}
			break;
		case 25:
			if (bParam1 == 1)
			{
				func_850(1164380735, 0);
			}
			else
			{
				func_850(-1984992129, 0);
			}
			break;
		case 26:
			if (bParam1 == 1)
			{
				func_850(301696279, 0);
			}
			else
			{
				func_850(152181092, 0);
			}
			break;
		case 27:
			if (bParam1 == 1)
			{
				func_850(-415970359, 0);
			}
			else
			{
				func_850(839837681, 0);
			}
			break;
		case 28:
			if (bParam1 == 1)
			{
				func_850(1669531798, 0);
			}
			else
			{
				func_850(1602454819, 0);
			}
			break;
		case 29:
			if (bParam1 == 1)
			{
				func_850(-977383775, 0);
			}
			else
			{
				func_850(-1875435665, 0);
			}
			break;
		case 30:
			if (bParam1 == 1)
			{
				func_850(1183317680, 0);
			}
			else
			{
				func_850(-247145433, 0);
			}
			break;
		case 31:
			if (bParam1 == 1)
			{
				func_850(667332266, 0);
			}
			else
			{
				func_850(-368365640, 0);
			}
			break;
		case 33:
			if (bParam1 == 1)
			{
				func_850(-1578905205, 0);
			}
			else
			{
				func_850(946087658, 0);
			}
			break;
		case 32:
			if (bParam1 == 1)
			{
				func_850(-448931053, 0);
			}
			else
			{
				func_850(-421010414, 0);
			}
			break;
		case 34:
			if (bParam1 == 1)
			{
				func_850(-1162930163, 0);
			}
			else
			{
				func_850(-1228311530, 0);
			}
			break;
		case 35:
			if (bParam1 == 1)
			{
				func_850(1004123602, 0);
			}
			else
			{
				func_850(1321329534, 0);
			}
			break;
		case 36:
			if (bParam1 == 1)
			{
				func_850(281748406, 0);
			}
			else
			{
				func_850(-173822042, 0);
			}
			break;
		case 37:
			if (bParam1 == 1)
			{
				func_850(-1351305881, 0);
			}
			else
			{
				func_850(-1650817073, 0);
			}
			break;
		case 38:
			if (bParam1 == 1)
			{
				func_850(-1644190131, 0);
			}
			else
			{
				func_850(844678349, 0);
			}
			break;
		case 42:
			if (bParam1 == 1)
			{
				func_850(-926127573, 0);
			}
			else
			{
				func_850(-1260559150, 0);
			}
			break;
		case 43:
			if (bParam1 == 1)
			{
				func_850(758690400, 0);
			}
			else
			{
				func_850(1430679359, 0);
			}
			break;
		default:
			break;
	}
}

void func_631(int iParam0, bool bParam1)
{
	if (!func_534(iParam0))
	{
		return;
	}
	if (func_851(iParam0))
	{
		return;
	}
	func_628(iParam0, 2);
	if (bParam1)
	{
		if (!func_475(0, 0, 1))
		{
			func_510(1, 6);
		}
	}
}

void func_632(int iParam0)
{
	if (!func_243(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_46 = 1;
}

void func_633(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_634(var uParam0, bool bParam1)
{
	if (func_301(uParam0->f_73, 1) != bParam1)
	{
		if (bParam1)
		{
			if (!func_301(uParam0->f_73, 2))
			{
				func_575(&(uParam0->f_73), 1);
				func_381(uParam0, 0, func_380(24));
			}
		}
		else
		{
			func_605(&(uParam0->f_73), 1);
			func_381(uParam0, 0, func_380(7));
		}
	}
}

char* func_635(var uParam0)
{
	switch (*uParam0)
	{
		case 43:
			return "RE_HEC_UNI_V1_YARROWGOOD";
		case 18:
			return "RE_HEC_UNI_V1_FANCY";
		case 19:
			return "RE_HEC_UNI_V1_WHATGOOD";
		case 40:
			return "RE_HEC_UNI_V1_FEVERFEW";
		default:
			break;
	}
	return "";
}

int func_636(int iParam0)
{
	if (!is_ped_using_any_scenario(iParam0->f_7))
	{
		return 1;
	}
	switch (_0x569f1e1237508deb(iParam0->f_7))
	{
		case -1904017806:
			if (!_0x916b8e075abc8b4e(iParam0->f_7, 1))
			{
				if (_0x02ebbb3989b7e695(iParam0->f_7))
				{
					return 1;
				}
			}
			else
			{
				func_642(iParam0);
			}
			break;
		case 494354620:
			if (!_0x916b8e075abc8b4e(iParam0->f_7, 1))
			{
				func_423(iParam0, -1f);
			}
			else if (_0x916b8e075abc8b4e(iParam0->f_7, 0))
			{
				return 1;
			}
			break;
		case 2093245709:
			return func_852(iParam0);
	}
	return 0;
}

void func_637(var uParam0)
{
	if (!func_393(uParam0))
	{
		iVar0 = func_388(*uParam0);
		if (uParam0->f_271 != iVar0)
		{
			func_398(uParam0, iVar0, 0);
			uParam0->f_271 = iVar0;
		}
	}
	else if (!func_431(uParam0, 9))
	{
		func_332(&(uParam0->f_284), 1, 0);
		if (func_13(uParam0, 62))
		{
			func_73(uParam0, 62);
		}
		func_187(uParam0, 9);
	}
}

int func_638(var uParam0)
{
	if (func_330(uParam0, 1))
	{
		return 0;
	}
	switch (uParam0->f_433)
	{
		case 0:
			func_187(uParam0, 8);
			func_332(&(uParam0->f_284), 2, 0);
			func_332(&(uParam0->f_284), 0, 0);
			func_332(&(uParam0->f_284), 1, 0);
			if (func_13(uParam0, 1))
			{
				func_89(12);
			}
			func_384(&(uParam0->f_284));
			return 1;
		case -1:
			func_853(uParam0);
			if (func_393(uParam0))
			{
				if (!func_431(uParam0, 9))
				{
					func_332(&(uParam0->f_284), 1, 0);
					if (func_13(uParam0, 62))
					{
						func_73(uParam0, 62);
					}
					func_187(uParam0, 9);
				}
				return 3;
			}
			else if (!func_330(uParam0, 1))
			{
				if (func_854(uParam0))
				{
					func_73(uParam0, 13);
					func_175(&(uParam0->f_9));
					func_73(uParam0, 62);
					func_23(uParam0);
					func_19();
					uParam0->f_1 = 11;
				}
			}
			else
			{
				func_341(&(uParam0->f_508));
			}
			break;
	}
	return 0;
}

char* func_639(var uParam0)
{
	switch (*uParam0)
	{
		case 43:
			return "RE_HEC_UNI_V1_BENEFITS";
		case 18:
			return "RE_HEC_UNI_V1_BYANYMEANS";
		case 19:
			return "RE_HEC_UNI_V1_ELABORATE";
		case 40:
			return "RE_HEC_UNI_V1_KEEPMEGOING";
		default:
			break;
	}
	return "";
}

void func_640(var uParam0, float fParam1)
{
	if (!func_333(&(uParam0->f_505)))
	{
		func_341(&(uParam0->f_505));
	}
	uParam0->f_211 = (uParam0->f_211 + fParam1);
}

int func_641(var uParam0, var uParam1)
{
	switch (uParam0->f_433)
	{
		case 0:
			func_328(&(uParam0->f_284), 0);
			func_73(uParam0, 62);
			func_384(&(uParam0->f_284));
			return 4;
		case -1:
			func_855(uParam0);
			func_856(&(uParam0->f_284), 0, 5f, func_372(Global_35, uParam0->f_7, 1, 1));
			func_857(uParam0, uParam1, 2f);
			if (!func_330(uParam0, 1))
			{
				if (!func_13(uParam0, 27))
				{
					if (uParam0->f_205 == 0)
					{
						if (func_854(uParam0))
						{
							func_73(uParam0, 13);
							func_175(&(uParam0->f_9));
							func_73(uParam0, 62);
							func_23(uParam0);
							func_19();
							uParam0->f_1 = 11;
						}
					}
				}
			}
			else
			{
				func_341(&(uParam0->f_508));
			}
			break;
	}
	return 0;
}

void func_642(int iParam0)
{
	if (!func_333(&(iParam0->f_453)) || func_343(&(iParam0->f_453), 3f))
	{
		if (!func_684(iParam0, 0, 1))
		{
			if (_0x916b8e075abc8b4e(iParam0->f_7, 0))
			{
				func_590(iParam0);
				func_341(&(iParam0->f_453));
			}
		}
	}
}

void func_643(var uParam0, int iParam1, var uParam2, var uParam3)
{
	func_651(uParam0, "player", Global_35, 0);
	iVar2 = 19;
	iVar3 = -1;
	switch (iParam1)
	{
		case 43:
			iVar3 = 6;
			sVar0 = "YARROW";
			sVar1 = "objYarrow02";
			break;
		case 19:
			iVar3 = 7;
			sVar0 = "hummingbird_sage";
			sVar1 = "objHBSage02";
			break;
		case 18:
			iVar3 = 8;
			sVar0 = "golden_currant";
			sVar1 = "objGCurrant02";
			break;
		case 40:
			iVar3 = 9;
			sVar0 = "violet_snowdrop";
			sVar1 = "objVSnowDrop02";
			break;
		default:
			return;
	}
	if (iVar2 < 20)
	{
		if (does_entity_exist(uParam3[iVar2]))
		{
			set_entity_visible(uParam3[iVar2], true);
			func_858(uParam2, sVar1, uParam3[iVar2], 0);
			func_658(uParam0, sVar0, uParam3[iVar2], 0);
		}
	}
	iVar4 = uParam3[2];
	if (does_entity_exist(iVar4))
	{
		func_402(uParam0, iVar4);
	}
	if (iVar3 != -1)
	{
		func_644(uParam0, iVar3);
	}
}

bool func_644(var uParam0, int iParam1)
{
	if (func_429(uParam0, 0, 0, 0))
	{
		Stack.Push(iParam1);
		Call_Loc(uParam0->f_6);
		sVar0 = StackVal;
		if (!is_string_null_or_empty(sVar0))
		{
			if (_0x23e33cb9f4a3f547(uParam0->f_1, sVar0))
			{
				return true;
			}
			if (!_0x0df57f86fe71dbe5(uParam0->f_1, sVar0))
			{
				_0xdf7b5144e25cd3fe(uParam0->f_1, sVar0);
			}
		}
	}
	return false;
}

bool func_645(var uParam0)
{
	if (func_644(&(uParam0->f_133), func_148(*uParam0)))
	{
		if (func_669(Global_35, &(uParam0->f_133), "player", func_148(*uParam0), &(uParam0->f_495), 1065353216, 1, 1))
		{
			return true;
		}
	}
	return false;
}

int func_646(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 1433048902;
		case 2:
			return 1433048902;
		case 40:
			return 746300881;
		case 7:
			return -398744080;
		case 11:
			return -2085219828;
		case 15:
			return -1620920647;
		case 18:
			return 1047281747;
		case 19:
			return -1781387050;
		case 20:
			return -597058368;
		case 23:
			return 128702355;
		case 26:
			return -2051332199;
		case 43:
			return -529638012;
		default:
			break;
	}
	return 0;
}

int func_647(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_280(iParam0, 1);
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
			func_859(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_137(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_860(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_136(iParam0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_136(iParam0, 0, 0) - iParam1) < 0)
		{
			func_647(iParam0, func_136(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_279(iParam0) == -427144552)
	{
		if (!func_861(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_862(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_612(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_859(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_863(iParam0, iParam1);
	return 1;
}

void func_648(int iParam0)
{
	iVar0 = func_615(iParam0);
	if (iVar0 != -1)
	{
		func_89(iVar0);
	}
	if (func_16())
	{
		func_89(5);
	}
}

void func_649(int iParam0, bool bParam1, bool bParam2)
{
	if (!is_entity_dead(iParam0))
	{
		if (is_entity_attached(iParam0))
		{
			detach_entity(iParam0, bParam1, bParam2);
		}
	}
}

void func_650(var uParam0, vector3 vParam1, vector3 vParam4, int iParam7)
{
	if (func_429(uParam0, 0, 0, 0))
	{
		set_anim_scene_origin(uParam0->f_1, vParam1, vParam4, iParam7);
	}
}

void func_651(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	if (_does_anim_scene_exist(uParam0->f_1) && !is_string_null_or_empty(sParam1))
	{
		set_anim_scene_entity(uParam0->f_1, sParam1, iParam2, iParam3);
	}
}

char* func_652(int iParam0)
{
	iVar0 = get_random_int_in_range(0, 2);
	switch (iParam0)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					return "RE_HEC_UNI_V1_REWARD_HORSEREV";
				case 1:
					return "RE_HEC_UNI_V1_REWARD_HORSEREV_ALT";
			}
			break;
		case 1:
			switch (iVar0)
			{
				case 0:
					return "RE_HEC_UNI_V1_REWARD_RECIPE";
				case 1:
					return "RE_HEC_UNI_V1_REWARD_RECIPE_ALT1";
			}
			break;
		case 2:
			switch (iVar0)
			{
				case 0:
					return "RE_HEC_UNI_V1_REWARD_RECIPE_ALT1";
				case 1:
					return "RE_HEC_UNI_V1_REWARD_RECIPE_ALT2";
			}
			break;
		case 3:
			switch (iVar0)
			{
				case 0:
					return "RE_HEC_UNI_V1_REWARD_TONIC";
				case 1:
					return "RE_HEC_UNI_V1_REWARD_TONIC_ALT";
			}
			break;
	}
	return func_624("[RESS]", "REHOC_REWARD_TYPE_INITIAL_DIALOGUE_CONTEXT: Invalid Reward.");
}

void func_653(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (does_entity_exist(iParam0) && is_entity_a_ped(iParam0))
	{
		iVar0 = func_864(iParam0);
		func_865(iParam0, iParam1, iParam2, iVar0);
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

char* func_654(int iParam0)
{
	iVar0 = get_random_int_in_range(0, 2);
	switch (iParam0)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					return "RE_HEC_UNI_V1_HAND_HORSEREV";
				case 1:
					return "RE_HEC_UNI_V1_HAND_HORSEREV_ALT";
			}
			break;
		case 1:
			return "RE_HEC_UNI_V1_HAND_HORSE_SPECIAL";
		case 2:
			return "RE_HEC_UNI_V1_HAND_POI_ARROW";
		case 3:
			switch (iVar0)
			{
				case 0:
					return "RE_HEC_UNI_V1_HAND_TONIC_SPECIAL";
				case 1:
					return "RE_HEC_UNI_V1_HAND_TONIC_SPECIAL_ALT";
			}
			break;
	}
	return func_624("[RESS]", "REHOC_REWARD_TYPE_HANDOVER_DIALOGUE_CONTEXT: Invalid Reward.");
}

int func_655(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	if (!func_866(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_867(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_868(iParam0, bParam2);
	iVar2 = 0;
	if (func_136(iParam0, 0, 0) == 0)
	{
		if (func_869(iParam0))
		{
			iVar5 = func_870(iParam0);
			iVar6 = func_871(iVar5);
			iVar7 = func_872(iVar6) + 1;
			func_873(iVar5);
			if (func_874(38))
			{
				func_810(483, 0);
			}
			else
			{
				func_810(482, 0);
			}
			if (iVar7 == func_875(iVar6))
			{
				func_655(func_876(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_751() && func_877(4))
				{
					if (func_751() && (func_878(38) || func_874(38)))
					{
						func_880(38, func_876(iVar6), 0, 0, func_879(), 0, -1, 0);
						func_881(2);
					}
					else
					{
						func_880(38, func_876(iVar6), 0, 0, func_879(), 0, -1, 0);
						func_881(1);
					}
				}
			}
			else if (func_751() && func_877(4))
			{
				if (func_751() && (func_878(38) || func_874(38)))
				{
					func_880(38, 0, 0, 0, func_879(), 0, -1, 0);
					func_881(2);
				}
				else
				{
					func_880(38, 0, 0, 0, func_879(), 0, -1, 0);
					func_881(1);
				}
			}
			if (func_751() && func_877(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_751() && (func_878(38) || func_874(38)))
					{
						func_882(38, _0x13aaecda43318bfe(-2076669067, iVar6), _0xd52d20b0c76bb26d(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_882(38, get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_279(iParam0) == -1037537535)
	{
		if ((!func_538(iParam0, 866047851) && !func_538(iParam0, -1979000645)) && !func_538(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_883(iParam0, 8388608) && !func_884(28))
	{
		func_885(28);
	}
	if (!bVar3)
	{
		if (func_538(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_840(iParam0) == -1447088266)
			{
				iVar1 = func_887(func_886(iParam0, 1), 0);
				if (is_weapon_valid(iVar1))
				{
					if (func_90() == -1)
					{
						func_888(iVar1);
					}
					if (func_612(0) && func_364(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_613(iParam0, iVar0, iParam5);
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
					if (func_90() == -1)
					{
						func_888(iParam0);
					}
					if (func_612(0) && func_364(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_613(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_279(iParam0) == -427144552)
		{
			if (!func_889(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_279(iParam0) == 307971639 && func_846(iParam0))
		{
			if (!func_890(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_538(iParam0, 866047851))
		{
			func_891(iParam0);
		}
		else if (func_538(iParam0, 2000026003))
		{
			func_892(iParam0);
		}
		else if (func_538(iParam0, -103750053))
		{
			func_743(func_893(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_743(func_894(-717883113, 2091222383), iVar0);
		}
		else if (func_538(iParam0, -121341956) && !func_538(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_895((*Global_1835011)[4]->f_1, 1))
				{
					func_810(498, 0);
				}
			}
			if (func_538(iParam0, -2017733358) || func_538(iParam0, -1369131378))
			{
				func_896(iParam0);
			}
		}
		else if (func_538(iParam0, -136654233))
		{
			if (func_538(iParam0, -1021472396))
			{
			}
		}
		else if (func_538(iParam0, -1466706512) && func_538(iParam0, 1147021565))
		{
			func_810(484, 0);
		}
		else if (func_538(iParam0, 1147021565) && func_538(iParam0, -524514947))
		{
		}
		else if (func_538(iParam0, 554195525))
		{
		}
		else if (func_538(iParam0, 589988438))
		{
			if (func_897())
			{
				func_898(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_538(iParam0, 787083290) && func_538(iParam0, 949916894))
		{
			func_899(iParam0);
		}
		else if (func_538(iParam0, -1718133314))
		{
			func_900(iParam0);
		}
		else if (func_538(iParam0, -1738650224))
		{
			func_901(iParam0);
		}
		else if (func_538(iParam0, -1112814642) && func_538(iParam0, 949916894))
		{
			func_902(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_538(iParam0, 1841149704))
		{
			func_903();
		}
		else if (func_538(iParam0, 606799272))
		{
			func_904(iParam0, iParam1);
			func_905(iParam0);
		}
		else if (func_538(iParam0, -1112814642) && func_538(iParam0, -1697809989))
		{
			func_906(iParam0, 0, 0, 0);
		}
		else if (func_538(iParam0, -2017733358) || func_538(iParam0, -1369131378))
		{
			func_896(iParam0);
		}
		else if (func_538(iParam0, -1921346699))
		{
			if (func_90() != -1)
			{
				return 0;
			}
			func_907(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_538(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_137(215778062, 1, 0))
					{
						func_655(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_137(670273567, 1, 0))
					{
						func_655(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_137(-967317137, 1, 0))
					{
						func_655(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_137(526074061, 1, 0))
					{
						func_655(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_137(-1045488665, 1, 0))
					{
						func_655(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_137(471514780, 1, 0))
					{
						func_655(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_538(iParam0, -839724752) && func_883(iParam0, 4))
		{
			if (!func_874(42))
			{
				func_908(iParam0);
			}
		}
		else if (func_538(iParam0, 1399091007))
		{
			func_909(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_538(iParam0, 1248798204))
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
				func_655(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_885(24);
				if (&Global_1946804->f_1497.f_1[27] == &Global_1946804->f_57[27])
				{
					func_910(player_ped_id(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_911(&iVar9, 0))
				{
					func_364(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_90() == -1 && &Global_1946804->f_1497.f_1[25] == &Global_1946804->f_57[25])
				{
					func_910(player_ped_id(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case -160924582:
				break;
			case 2131771850:
				func_810(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_912();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_913();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_914();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_915();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_916();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_917(499813453, 854119837, 0);
				func_918(499813453, 0);
				func_919(1);
				break;
			case 2127812557:
				func_917(499813453, -1292544588, 0);
				func_918(499813453, 0);
				func_919(2);
				break;
			case 808991383:
				func_917(499813453, -1003325394, 0);
				func_918(499813453, 0);
				func_919(4);
				break;
			case 1134518629:
				func_917(666607663, -335460405, 0);
				func_918(666607663, 0);
				func_920(1);
				break;
			case 902940106:
				func_917(666607663, 903797617, 0);
				func_918(666607663, 0);
				func_920(2);
				break;
			case -418174898:
				func_917(666607663, 669728650, 0);
				func_918(666607663, 0);
				func_920(4);
				break;
			case -648114971:
				func_917(-220219788, 1214120047, 0);
				func_918(-220219788, 0);
				func_921(1);
				break;
			case 211153747:
				func_917(-220219788, 655769340, 0);
				func_918(-220219788, 0);
				func_921(2);
				break;
			case -32876996:
				func_917(-220219788, 885316185, 0);
				func_918(-220219788, 0);
				func_921(4);
				break;
			case 1191437462:
				func_917(218622660, -1491419385, 0);
				func_918(218622660, 0);
				func_922(1);
				break;
			case 1119149048:
				func_917(218622660, 1809565830, 0);
				func_918(218622660, 0);
				func_922(2);
				break;
			case 506073827:
				func_917(390004462, -628873767, 0);
				func_918(390004462, 0);
				func_923(1);
				break;
			case -1876986168:
				func_917(390004462, -405421956, 0);
				func_918(390004462, 0);
				func_923(2);
				break;
			case 2142623221:
				func_917(390004462, -1108972386, 0);
				func_918(390004462, 0);
				func_923(4);
				break;
			case 1508215381:
				func_917(6410548, 1053716392, 0);
				func_918(6410548, 0);
				func_924(1);
				break;
			case -888935280:
				func_917(6410548, 806507056, 0);
				func_918(6410548, 0);
				func_924(2);
				break;
			case -1252474566:
				func_917(6410548, 1571925350, 0);
				func_918(6410548, 0);
				func_924(4);
				break;
			case -1465702449:
				func_917(6410548, 1330352282, 0);
				func_918(6410548, 0);
				func_924(8);
				break;
			case -21093309:
				func_926(242, func_925(-21093309), 0);
				break;
			case 204375141:
				func_926(240, func_925(204375141), 0);
				break;
			case -417963070:
				func_926(241, func_925(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_927(594, 1934060482, 1, 1);
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
					func_927(594, 1110018439, 1, 1);
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
					func_927(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_927(594, -1228016946, 1, 1);
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
					func_927(595, -103579, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_927(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case 80178851:
				func_810(488, 0);
				break;
			case 1613651027:
				func_810(491, 0);
				break;
			case -885810591:
				func_810(485, 0);
				if ((get_random_int_in_range(0, 65536) % 3) == 0)
				{
					func_655(func_928(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_655(func_929(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_884(1))
				{
					func_810(487, 0);
				}
				break;
			case -898386032:
				func_810(486, 0);
				break;
			case -2035110427:
				if (func_90() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_810(496, 0);
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
		func_930(&iVar10);
		if (!func_931(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_612(0))
		{
			return 1;
		}
		if (func_279(iParam0) == -1037537535)
		{
			func_932(iParam0);
		}
		if (func_538(iParam0, -1979000645))
		{
			func_933(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_612(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_655(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_934(iVar2, 0);
		}
	}
	Var35 = { func_860(iParam0) };
	if (_stat_id_is_valid(&Var35))
	{
		_0x6a0184e904cdf25e(&Var35, iVar0);
	}
	func_935(iParam0);
	if (fParam6 > 0f)
	{
		if (func_538(iParam0, -839724752))
		{
			func_936(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_859(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

void func_656(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5)
{
	iVar0 = func_937(iParam0);
	if (!bParam1)
	{
		func_938(iVar0, sParam4, iParam5);
	}
	func_939(iVar0, bParam1, fParam2, iParam3, 752097756);
}

int func_657(char* sParam0, char* sParam1)
{
	return ceil((1000f * get_anim_duration(sParam0, sParam1)));
}

void func_658(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	if (func_429(uParam0, 0, 0, 0))
	{
		set_anim_scene_entity(uParam0->f_1, sParam1, iParam2, iParam3);
	}
}

void func_659(int* iParam0, float fParam1)
{
	iParam0->f_4 = fParam1;
	func_360(iParam0, 7);
}

Vector3 func_660(int iParam0, int iParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (!bParam4 && is_ped_injured(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (!_does_anim_scene_exist(iParam1))
	{
		return 0f, 0f, 0f;
	}
	if (_get_anim_scene_entity_matrix(iParam1, sParam2, &vVar0, true, sParam3, 2))
	{
		return vVar0;
	}
	return 0f, 0f, 0f;
}

bool func_661(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

float func_662(struct<2> Param0, int iParam2, struct<2> Param3, Vector3 vParam5, int iParam6)
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

Vector3 func_663(vector3 vParam0, vector3 vParam3, float fParam6)
{
	return func_497(vParam3 - vParam0) * Vector(fParam6, fParam6, fParam6);
}

bool func_664(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	return is_ped_on_mount(iParam0);
}

int func_665(int iParam0)
{
	iParam0 = func_498(iParam0);
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

int func_666(var uParam0, var uParam1)
{
	uParam1->f_10 = func_498(uParam1->f_10);
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
		if (func_79(uParam1->f_6))
		{
		}
	}
	bVar0 = func_751();
	if (*uParam1)
	{
		if (bVar0 && !func_895((*Global_1835011)[4]->f_1, 1))
		{
			if (func_940(5))
			{
				func_941(5);
				func_942(5);
				func_943(0);
				func_944(0);
			}
		}
	}
	if (func_945(Global_36) == 8)
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_895((*Global_1835011)[37]->f_1, 1)) && !func_895((*Global_1835011)[43]->f_1, 1))
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_895((*Global_1835011)[43]->f_1, 1)) && !func_895((*Global_1835011)[44]->f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_665(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_732(iVar1))
	{
		bVar3 = true;
		if (func_946(iVar1))
		{
			bVar4 = true;
		}
		if (func_947(iVar1))
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
				func_948(uParam1->f_10);
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
			if (!func_940(0) && func_940(1))
			{
				func_949(1, 0);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_950())
			{
				func_951();
			}
			func_943(0);
			func_944(0);
			func_952(uParam1->f_6);
		}
	}
	if (!func_732(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_953(uParam1->f_10) == 0 || func_954(uParam1->f_10) == 0) || func_955(uParam1->f_10) == 0)
			{
				func_956(uParam1->f_10);
			}
			func_957(uParam1->f_10);
			func_958(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*uParam0 = 0;
			return 0;
		}
		*uParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_665(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_732(iVar1))
	{
		bVar3 = true;
		if (func_946(iVar1))
		{
			bVar4 = true;
		}
		if (func_947(iVar1))
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
			if (!func_79(uParam1->f_6))
			{
				set_entity_coords(iVar2, uParam1->f_6, false, true, true, true);
				set_entity_heading(iVar2, uParam1->f_9);
				_0x9587913b9e772d29(iVar2, 0);
			}
		}
	}
	if (func_959(uParam1->f_10))
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
			Var8 = { func_960(uParam1->f_10) };
			Var10 = { func_961() };
			func_962(iVar2, &Var8, &Var10, 0);
			_set_ped_as_saddle_horse_for_player(iVar6, iVar2);
			set_ped_config_flag(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*uParam0 = 2;
		return iVar2;
	}
	if (!func_238(uParam1->f_10))
	{
		set_entity_as_mission_entity(iVar2, true, true);
		func_963(uParam1->f_10);
		if (uParam1->f_2 && !func_79(uParam1->f_6))
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
	func_236(uParam1->f_10);
	if (func_238(uParam1->f_10))
	{
		iVar16 = func_237(uParam1->f_10);
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

void func_667(var uParam0, char* sParam1, char* sParam2)
{
	if (func_44(uParam0) == 2 || func_44(uParam0) == 1)
	{
		open_sequence_task(&iVar0);
		task_play_upper_anim_facing_entity(0, sParam1, sParam2, Global_35, func_657(sParam1, sParam2), 8f, -8f, 8200, 0f, false, false, -1f, 0, 0, -1f);
		task_play_upper_anim_facing_entity(0, "SCRIPT_RE@HERBALISTCAMP@PAMPHLET_HANDOVER", "PAMP_LOOP_HERBALIST", Global_35, -1, 8f, -8f, 8201, 0f, false, false, -1f, 0, 0, -1f);
		func_171(uParam0->f_7, &iVar0, 0, 0, 1, 1);
	}
	else
	{
		open_sequence_task(&iVar0);
		task_play_upper_anim_facing_entity(0, sParam1, sParam2, Global_35, func_657(sParam1, sParam2), 8f, -8f, 8200, 0f, false, false, -1f, 0, 0, -1f);
		task_play_upper_anim_facing_entity(0, "SCRIPT_RE@HERBALISTCAMP@SERUM_HANDOVER", "SERUM_LOOP_HERBALIST", Global_35, -1, 8f, -8f, 8201, 0f, false, false, -1f, 0, 0, -1f);
		func_171(uParam0->f_7, &iVar0, 0, 0, 1, 1);
	}
}

void func_668(int* iParam0, bool bParam1)
{
	if (!bParam1)
	{
		iParam0->f_4 = 0f;
	}
	func_361(iParam0, 7);
}

int func_669(var uParam0, var uParam1, char* sParam2, int iParam3, var uParam4, int iParam5, bool bParam6, bool bParam7)
{
	Stack.Push(uParam0);
	Stack.Push(uParam1->f_1);
	Stack.Push(sParam2);
	Stack.Push(iParam3);
	Call_Loc(uParam1->f_6);
	return func_964(StackVal, StackVal, StackVal, StackVal, uParam4, iParam5, bParam6, bParam7, 1);
}

float func_670(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return -1f;
	}
	return func_372(Global_35, iParam0, bParam1, bParam2);
}

bool func_671(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_672(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
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
	return func_965(iParam0, &Var0);
}

int func_673(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_674(int iParam0, var uParam1, int iParam2)
{
	if (!is_entity_dead(iParam0))
	{
		if (*uParam1 != 0)
		{
			func_803(iParam0, 1, 1);
			if (does_entity_exist(iParam2))
			{
				if (!is_entity_dead(iParam2))
				{
					if (uParam1->f_5)
					{
						set_blocking_of_non_temporary_events(iParam2, false);
					}
					if (uParam1->f_6)
					{
						clear_ped_tasks(iParam2, 1, 0);
					}
					_0x931b241409216c1f(iParam0, iParam2, 0);
					set_ped_config_flag(iParam0, 167, true);
					set_ped_config_flag(iParam0, 321, true);
					set_ped_config_flag(iParam2, 178, true);
				}
			}
			func_966(iParam0, uParam1, iParam2);
			if (uParam1->f_2 != 493038497)
			{
				_0x24c82ef607105faa(iParam0, uParam1->f_2);
			}
			if (uParam1->f_4 == 0)
			{
				iVar0 = Global_35;
				iVar1 = iParam0;
			}
			else
			{
				iVar0 = iParam0;
				iVar1 = Global_35;
			}
			_0x7c511e91738a0828(iVar0, iVar1, *uParam1, 0);
		}
	}
}

bool func_675(int iParam0, int iParam1)
{
	return func_617(iParam0) == iParam1;
}

var func_676(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

void func_677(int* iParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		func_569(uParam1);
	}
	func_802(iParam0, &(iParam0->f_21));
}

bool func_678(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam0) || (iParam2 == 1 && is_entity_dead(iParam0)))
	{
		return false;
	}
	iVar0 = get_blip_from_entity(iParam0);
	if (!does_blip_exist(iVar0))
	{
		return false;
	}
	return _blip_set_modifier(iVar0, iParam1);
}

void func_679(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_334(&(iParam0->f_18));
}

int func_680(var uParam0)
{
	iVar0 = func_374(uParam0->f_472);
	if (uParam0->f_473 != 0)
	{
		iVar0 = (iVar0 || uParam0->f_473);
	}
	func_118(&iVar0, 1);
	return iVar0;
}

bool func_681(int iParam0, int iParam1, bool bParam2)
{
	if (func_30(iParam1, 8))
	{
		if (!bParam2 || func_682(iParam0, -1904017806))
		{
			if (func_333(&(iParam0->f_447)))
			{
				if (func_343(&(iParam0->f_447), (5f * 60f)))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_682(int iParam0, int iParam1)
{
	if (_0x569f1e1237508deb(iParam0->f_7) == iParam1)
	{
		return true;
	}
	return false;
}

bool func_683(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (func_30(iParam2, 2))
	{
		return false;
	}
	if (!func_684(iParam0, 0, 0))
	{
		return false;
	}
	if (func_967(iParam0, iParam2))
	{
		return true;
	}
	if (func_968(iParam0))
	{
		return false;
	}
	if (func_30(iParam2, 65536))
	{
		if (!func_682(iParam0, -1904017806) || !func_30(iParam2, 131072))
		{
			return false;
		}
	}
	if (bParam3)
	{
		if (func_30(iParam2, 4))
		{
			if (func_969(iParam0, 0))
			{
				*bParam1 = 1;
				return true;
			}
		}
		else if (func_208(Global_35, iParam0->f_7, 20f, 1))
		{
			return true;
		}
	}
	return false;
}

bool func_684(int iParam0, bool bParam1, bool bParam2)
{
	if (is_ped_active_in_scenario(iParam0->f_7, 0))
	{
		if (!bParam1 && _0x916b8e075abc8b4e(iParam0->f_7, 1))
		{
			return false;
		}
		if (iParam0->f_468 != 0)
		{
			if (_0x68821369a2ceadd5(iParam0->f_7, iParam0->f_468))
			{
				return false;
			}
		}
		if (!bParam2)
		{
			return true;
		}
		else
		{
			return _0x02ebbb3989b7e695(iParam0->f_7);
		}
	}
	return false;
}

void func_685(int iParam0, int iParam1, int iParam2)
{
	iParam0->f_475 = iParam1;
	iParam0->f_476 = iParam2;
}

void func_686(int iParam0)
{
	return;
	if (!func_333(&(iParam0->f_456)) || func_343(&(iParam0->f_456), 2f))
	{
		_0x2208438012482a1a(iParam0->f_7, false, false);
		func_341(&(iParam0->f_456));
	}
}

bool func_687(int iParam0)
{
	if (func_370(iParam0, 65536))
	{
		return false;
	}
	return true;
}

int func_688(int iParam0, int iParam1)
{
	bVar0 = (func_30(iParam1, 65536) && !func_682(iParam0, -1904017806));
	if (!bVar0)
	{
		if (func_30(iParam1, 16) && func_682(iParam0, 2093245709))
		{
			bVar0 = true;
		}
	}
	if (bVar0 || !func_30(iParam1, 131072))
	{
		if (bVar0 || func_30(iParam1, 4))
		{
			if (bVar0 || func_343(&(iParam0->f_444), 3f))
			{
				if (bVar0 || !func_205(iParam0->f_7, 0))
				{
					return 2;
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_689(int iParam0)
{
	if (!_0x916b8e075abc8b4e(iParam0->f_7, 1))
	{
		func_423(iParam0, -1f);
	}
}

int func_690(int iParam0)
{
	if (iParam0 == -1)
	{
		iVar0 = func_970(1);
	}
	else
	{
		iVar0 = func_971(iParam0);
	}
	return iVar0;
}

void func_691(int iParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		iVar0 = func_972(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_973(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2] = &Global_17504.f_2205[iVar2] + 1;
	}
}

int func_692()
{
	return Global_1897952->f_41;
}

void func_693(int iParam0, int iParam1)
{
	if (iParam1 != -1 && !func_216(iParam0, 8192))
	{
		iVar0 = func_973(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0] = &Global_17504.f_2205[iVar0] + 1;
	}
}

void func_694(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	func_85(iParam0, bParam3, round((fVar0 * fParam2)), round((fVar1 * fParam2)), round((fVar2 * fParam2)), round((fVar3 * fParam2)), bParam4, 1);
}

void func_695(int iParam0, bool bParam1)
{
	iVar0 = 1;
	if (bParam1)
	{
		iVar0 = 3;
	}
	if (func_122(iParam0, 262144))
	{
		if (Global_1392135->f_3 == -1)
		{
			func_974(262144, iVar0, 0, 1);
		}
	}
	if (func_122(iParam0, 128))
	{
		func_974(128, iVar0, 0, 1);
	}
	else if (func_122(iParam0, 524288))
	{
		func_974(524288, iVar0, 0, 1);
	}
	else if (func_122(iParam0, 536870912))
	{
		func_974(536870912, iVar0, 0, 1);
	}
	else if (func_122(iParam0, 4194304))
	{
		func_974(4194304, iVar0, 0, 1);
	}
	else if (func_122(iParam0, 8388608))
	{
		func_974(8388608, iVar0, 0, 1);
	}
}

void func_696(int iParam0)
{
	Global_1310750->f_16077 = get_id_of_this_thread();
	Global_1310750->f_16071 = iParam0;
}

int func_697(bool bParam0)
{
	if (!bParam0 && func_975(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

int func_698()
{
	return Global_1310750->f_16037;
}

bool func_699(int iParam0)
{
	if (!func_243(iParam0))
	{
		return false;
	}
	return (*Global_1310750)[iParam0]->f_47;
}

void func_700(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_243(&(Global_1310750->f_13321[iParam0])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0];
	force_cleanup_for_thread_with_this_id(Global_1310750->f_13321[iParam0]->f_5, 523);
	(*Global_1310750)[iVar0]->f_48 = 0;
	func_976(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_701(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_977(Global_1393447, 1);
	func_978();
	func_979();
	func_980((to_float(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135->f_54 = (func_754() / 1000);
		if (Global_1392135->f_1 & 4 != 0)
		{
			Global_1392135->f_1 = (Global_1392135->f_1 - Global_1392135->f_1 & 4);
		}
		func_981();
		if (iParam1 == -1)
		{
			if (func_30(iParam0, 1))
			{
				func_974(16777216, 2, 0, 1);
				iVar0 = floor(240f);
			}
			else if (func_30(iParam0, 2))
			{
				func_974(16777216, 0, 0, 1);
				iVar0 = floor(60f);
			}
			else if (func_30(iParam0, 4))
			{
				func_974(16777216, 5, 0, 1);
				iVar0 = floor(900f);
			}
			Global_1392135->f_4 = (Global_1392135->f_54 + iVar0);
		}
		else
		{
			func_982(iParam1, iParam2, iParam3, iParam4);
			Global_1392135->f_5[iParam1] = (((Global_1392135->f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_983(to_float(iVar0), 1, 0);
	}
	else
	{
		func_983((to_float(200) / 3f), 1, 0);
	}
}

bool func_702(int iParam0, int iParam1)
{
	return (Global_40.f_9571[iParam1] && iParam0) != 0;
}

void func_703(int iParam0, int iParam1)
{
	(*Global_1392050)[iParam1]->f_1 = ((*Global_1392050)[iParam1]->f_1 - ((*Global_1392050)[iParam1]->f_1 && iParam0));
}

void func_704(int iParam0, int iParam1)
{
	Global_40.f_9571[iParam1] = (Global_40.f_9571[iParam1] || iParam0);
}

int func_705(int iParam0)
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

bool func_706()
{
	return (Global_1935630->f_44 == -160924582 && is_first_person_aim_cam_active());
}

bool func_707(var uParam0, float fParam1, float fParam2, int iParam3)
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

bool func_708(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_707(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (func_709() - 0.02f);
		}
		return true;
	}
	uParam0->f_8 = 0f;
	return false;
}

float func_709()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

int func_710(bool bParam0, bool bParam1, bool bParam2)
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

int func_711()
{
	return &Global_1899515;
}

int func_712(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

bool func_713(int iParam0)
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

bool func_714(int iParam0)
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

bool func_715(int iParam0)
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

bool func_716(int iParam0)
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

bool func_717(int iParam0)
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

bool func_718(int iParam0)
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

bool func_719(int iParam0)
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

bool func_720(bool bParam0, int iParam1, int iParam2)
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

bool func_721()
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

int func_722(int iParam0)
{
	if (!func_725(iParam0))
	{
		return -1;
	}
	return func_985(func_984(iParam0));
}

bool func_723(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_724(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_725(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_726(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_727(int iParam0)
{
	return func_122(iParam0, Global_1310750->f_16072 | 64);
}

int func_728(int iParam0)
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

int func_729(int iParam0)
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

bool func_730(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_731(int iParam0)
{
	return ((Global_1310750[iParam0] != 0 && !is_string_null_or_empty(&((*Global_1310750)[iParam0]->f_40))) && get_length_of_literal_string(&((*Global_1310750)[iParam0]->f_40)) != 0);
}

bool func_732(int iParam0)
{
	iParam0 = func_498(iParam0);
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

void func_733(int iParam0)
{
	if (is_player_dead(player_id()))
	{
		return;
	}
	iVar0 = func_665(iParam0);
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
	if (func_986(iParam0, 64))
	{
		func_734(iParam0);
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
	bVar3 = func_884(42);
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
				func_987(&((*Global_1900383)[iParam0]->f_27));
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
		func_734(iParam0);
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
		if (func_988(1) < 1)
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
		func_989(&((*Global_1900383)[iParam0]->f_26), bVar6);
	}
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_986(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = is_ped_in_writhe(iVar0);
	bVar10 = false;
	iVar11 = func_990(iParam0);
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
	fVar15 = func_991(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_992(iParam0))
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
		func_993((*Global_1900383)[iParam0]->f_26);
		func_994((*Global_1900383)[iParam0]->f_26);
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
	if (func_995(iVar0) && !bVar9)
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
	iVar21 = func_988(iParam0);
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

void func_734(int iParam0)
{
	iParam0 = func_498(iParam0);
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

int func_735(int iParam0, int iParam1)
{
	iVar1 = func_736(iParam0, iParam1);
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

int func_736(int iParam0, int iParam1)
{
	if (!func_243(iParam0))
	{
		return -1;
	}
	return (iParam0 + (120 * iParam1));
}

int func_737(int iParam0)
{
	return iParam0;
}

void func_738(int iParam0)
{
	if (!func_996(iParam0))
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

void func_739(int iParam0)
{
	if (func_90() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_244(func_997(iVar0), 0))
		{
			if (is_ped_group_member(func_997(iVar0), func_275(), 1))
			{
				func_998(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

int func_740(int iParam0)
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

void func_741(int iParam0, int iParam1, int iParam2, int iParam3)
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
					if (func_999() > Global_32074.f_2697.f_6[iVar0]->f_5)
					{
						Global_32074.f_2697.f_6[iVar0]->f_5 = func_999();
					}
					func_1000(&(Global_32074.f_2697.f_6[iVar0]->f_5), 0, 0, iParam1, iParam2, 0, 0, 0);
					func_118(&(Global_1415419->f_19[iVar0]->f_11), 2);
				}
			}
			iVar0++;
		}
	}
}

struct<2> func_742(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

void func_743(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

void func_744(int iParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		iVar0 = func_972(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_973(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2]->f_1++;
	}
}

void func_745(int iParam0, int iParam1)
{
	if (iParam1 != -1 && !func_216(iParam0, 8192))
	{
		iVar0 = func_973(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0]->f_1++;
	}
}

void func_746(int iParam0, int iParam1)
{
	iVar0 = (func_513(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	set_bit(Global_17504.f_12[iVar1], iVar2);
}

void func_747(int iParam0, vector3 vParam1)
{
	if (func_122(iParam0, 512))
	{
		vParam1 = { Global_36 };
	}
	if (func_79(vParam1))
	{
		return;
	}
	if (!func_243(iParam0))
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Global_17504.f_2084)
	{
		vVar2 = { *Global_17504.f_2084[iVar0] };
		if (func_79(vVar2))
		{
			if (iVar1 < 0)
			{
				iVar1 = iVar0;
			}
		}
		else if (Global_17504.f_2084[iVar0]->f_3 == iParam0)
		{
			if (func_511(vVar2, vParam1, 1f, 1))
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

void func_748(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		func_1001(iVar0, iParam0);
		iVar0++;
	}
}

int func_749(int iParam0)
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

void func_750(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_751()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

int func_752(int iParam0, bool bParam1)
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

void func_753(int iParam0)
{
	Global_17504.f_2++;
	Global_17504.f_42[iParam0]->f_3++;
	(*Global_1310750)[iParam0]->f_110 |= 2;
}

int func_754()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_755(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	if (func_79(vParam0))
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

bool func_756(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (func_79(vParam0))
	{
		return false;
	}
	return _0x769bb7626b8cdb06(vParam0, fParam3, iParam5, iParam4, 16384);
}

bool func_757(vector3 vParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_1310750->f_16043)
	{
		if (!func_79(*Global_1310750->f_16043[iVar0]))
		{
			if (func_88(vParam0, *Global_1310750->f_16043[iVar0]) < 2500f)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_758()
{
	iVar0 = func_1002(func_479());
	if (iVar0 == 8)
	{
		iVar1 = func_480(func_479());
		if (func_482(Global_36, iVar1))
		{
			return false;
		}
	}
	if (func_1003(func_970(0)))
	{
		return false;
	}
	if (func_1004())
	{
		return false;
	}
	if (is_player_riding_train(player_id()))
	{
		return false;
	}
	return true;
}

float func_759(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

bool func_760(int iParam0, int iParam1, var uParam2, int iParam3)
{
	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_278(iParam0, 0))
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

struct<4> func_761(bool bParam0)
{
	return func_610(1328661203, func_1005(), -1591664384, bParam0);
}

bool func_762(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_763(int iParam0)
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

void func_764(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_1006(iParam0, iParam1))
		{
			if (func_1007(iParam0, iParam1))
			{
				if (func_1008(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_1009(iParam0);
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

void func_765(int iParam0, int iParam1, bool bParam2)
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

void func_766(int iParam0, bool bParam1)
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

void func_767(int iParam0, int iParam1)
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

void func_768(int iParam0)
{
	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_1010();
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
			func_1011(&(Global_1935630->f_34), &(Global_1935630->f_39));
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

var func_769(int iParam0)
{
	return &(Global_1109400->f_276[iParam0]);
}

bool func_770(int iParam0)
{
	iVar0 = Global_1935630->f_40;
	if (func_90() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_1012(iParam0);
		}
	}
	else if (!does_entity_exist(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_1012(iParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_1013(iVar0) == -1)
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

void func_771(int iParam0)
{
	if (*iParam0 & 8 != 0 || *iParam0 & 16 != 0)
	{
		func_1014(iParam0);
	}
}

bool func_772(int iParam0, int iParam1)
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

bool func_773(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (func_1015(iParam0, 1, 0, 0) != 2055893578)
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

bool func_774(int iParam0)
{
	return !*iParam0 & 2 != 0;
}

bool func_775(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_776(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_119(iParam0, 134217728);
	}
	else
	{
		func_118(iParam0, 134217728);
	}
}

float func_777(int iParam0)
{
	return iParam0->f_23;
}

int func_778(int iParam0)
{
	return iParam0->f_21;
}

float func_779(int iParam0)
{
	if (!*iParam0 & 1 != 0)
	{
		return func_1016(iParam0);
	}
	if (_0x25ca89b2a39dcc69() > 0.833f)
	{
		return func_1017(iParam0);
	}
	return func_1016(iParam0);
}

float func_780(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_781()
{
	iVar0 = func_712(func_711());
	iVar1 = func_1018(func_711());
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

bool func_782(int iParam0, int iParam1)
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
			if (!func_1019(iParam0, iParam1, iVar2))
			{
				return false;
			}
			if (func_1020(iParam0, iVar2) <= func_1021(iParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_783(int iParam0, int iParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_1022(iParam0, !*iParam1 & 268435456 != 0, !*iParam1 & 536870912 != 0, !*iParam1 & 1073741824 != 0, 0, 0))
		{
			if (iParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (iParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_1023(iParam1);
			if (func_1024(iParam1, iParam0, fVar0, fVar1))
			{
				if (iParam1->f_2 == 0)
				{
					iParam1->f_2 = get_game_timer();
				}
				iVar2 = (get_game_timer() - iParam1->f_2);
				iVar3 = func_1025(iParam1);
				if (iParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_776(iParam1, 1);
						return true;
					}
					else if (iParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_776(iParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_784(int iParam0, int iParam1, int iParam2)
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
	if (func_1026(iParam1, !*iParam2 & 268435456 != 0, !*iParam2 & 536870912 != 0, !*iParam2 & 1073741824 != 0, 0))
	{
		if (iParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (iParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_1023(iParam2);
		if (func_1024(iParam2, iParam0, fVar0, fVar1))
		{
			if (iParam2->f_2 == 0)
			{
				iParam2->f_2 = get_game_timer();
			}
			if (iParam2->f_2 != 0)
			{
				if (get_game_timer() - iParam2->f_2) > func_1025(iParam2)
				{
					func_776(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_785(int iParam0, int iParam1)
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
	if (func_1019(iParam0, iParam1, iVar1))
	{
		if (iParam1->f_3 == 0)
		{
			iParam1->f_3 = get_game_timer();
		}
		else if (get_game_timer() - iParam1->f_3) > func_1025(iParam1)
		{
			fVar3 = func_1023(iParam1);
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

bool func_786(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_1027(iParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, iParam2->f_22))
				{
					func_776(iParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, iParam2->f_27))
				{
					func_776(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, iParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, iParam2->f_26, &vVar4, 0, 0);
					if (func_1028(iParam1, vVar0, vVar4))
					{
						func_776(iParam2, 1);
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
					func_776(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, iParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, iParam2->f_26, &vVar7, 0, 0);
					if (func_1028(iParam1, vVar0, vVar7))
					{
						func_776(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_787(int iParam0, int iParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *iParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_1019(iParam0, iParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_1029(&(Global_1935630->f_34[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_1030(&(Global_1935630->f_34[iVar0])))
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
			if (func_1031(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_1032(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_1033(iParam1, iParam0, fVar1, iVar0))
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

bool func_788(int iParam0, int iParam1)
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

bool func_789(int iParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_35);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_1034(iVar0, iParam1, vVar1))
		{
			iParam0->f_9 = func_754();
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
						if (func_420(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								iParam0->f_9 = func_754();
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

bool func_790(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0->f_14))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_1021(iParam0);
	if (iParam0->f_12 > func_1016(iParam0) && iParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_1035(iParam1);
	iVar1 = func_1013(iParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((iParam0->f_12 <= fVar0 || ((_0x06087579e7aa85a9(iParam1, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam1, Global_35, 1, 0) == 1)) || ((_0x06087579e7aa85a9(iParam1, iParam0->f_14, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, iParam0->f_14, 17)) && _0x7f9b9791d4cb71f6(iParam1, iParam0->f_14, 1, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_791(int iParam0, int iParam1, int iParam2)
{
	if (iParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *iParam2 & 256 != false;
	bVar1 = *iParam2 & 524288 != false;
	bVar2 = *iParam2 & 128 != false;
	return func_1036(iParam0, iParam1, bVar0, bVar2, iParam2->f_12, bVar1);
}

bool func_792(int iParam0, int iParam1)
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
		if (func_1037(iParam0, iParam1, 1))
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
					if (!func_1038(iParam1, iParam0))
					{
						if (func_420(iVar4, Global_36, 1) < 7f)
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

bool func_793(int iParam0, int iParam1)
{
	if (!func_1039(0))
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

bool func_794(int iParam0, int iParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_754();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_795(int iParam0, int iParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

int func_796(int iParam0, int iParam1)
{
	if (!is_ped_human(iParam0))
	{
		return 0;
	}
	if (iParam1->f_4 == 0)
	{
		iParam1->f_4 = func_754();
	}
	else if (func_754() - iParam1->f_4) > func_1040(iParam1)
	{
		return func_1041(iParam0, iParam1, 0, -1082130432);
	}
	return 0;
}

bool func_797(int iParam0, int iParam1)
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

int func_798(int iParam0)
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

int func_799(int iParam0)
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

void func_800(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_1042();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_1043(iParam0);
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
	if (func_884(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_16())
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
	Global_40.f_11095.f_35 = func_1044(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_1042();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_1045(iVar1);
		func_1047(func_1046(), 0, 4000);
		func_1048(Global_40.f_11095.f_35);
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
		func_1049(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_743(func_742(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (does_entity_exist(iParam5))
			{
				decor_set_int(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_799(14))
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
					sParam4 = func_1050(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_1051(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_1051(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_743(func_742(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_799(4))
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
					sParam4 = func_1050(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_1051(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_1051(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_742(-1990689970) };
	stat_id_set_int(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		_0xe6b763c7f4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_1052(10, 1);
	}
}

void func_801(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

void func_802(int* iParam0, var uParam1)
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
	func_1053(iParam0, uParam1, 1);
	func_1054(uParam1, 0, 1, 1, 0);
	_copy_memory(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		_copy_memory((*uParam1)[iVar0], &Var22, 17);
		iVar0++;
	}
}

void func_803(int iParam0, bool bParam1, bool bParam2)
{
	set_ped_config_flag(iParam0, 297, false);
	set_ped_config_flag(iParam0, 301, false);
	set_ped_config_flag(iParam0, 315, false);
	set_ped_config_flag(iParam0, 130, false);
	set_ped_config_flag(iParam0, 178, bParam2);
	set_ped_config_flag(iParam0, 330, false);
	set_ped_config_flag(iParam0, 317, bParam1);
}

int func_804(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 9:
					return -1907492746;
				case 14:
					return 1442567708;
				case 3:
					return -1003815888;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 20:
					return 1921237118;
				case 21:
					return -1888222581;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 28:
					return -1907492746;
				case 29:
					return -1953459798;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 51:
					return -701357827;
				case 52:
					return -1752842811;
				case 53:
					return -151805359;
				case 54:
					return -94588321;
				case 55:
					return -2065406522;
				case 56:
					return 1227633227;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 33:
					return 1577352904;
				case 34:
					return 1260544411;
				case 35:
					return 687004282;
				case 36:
					return -1305947375;
				case 37:
					return 2045403356;
				case 38:
					return 701351040;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 39:
					return -397658967;
				case 40:
					return 1384566166;
				case 41:
					return 1743106650;
				case 42:
					return -299527342;
				case 43:
					return 1446462919;
				case 44:
					return 1212542694;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 45:
					return -875861353;
				case 46:
					return -1931032499;
				case 47:
					return 1561186812;
				case 48:
					return -748114833;
				case 49:
					return 1682340296;
				case 50:
					return -2039338142;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 73:
					return 608667645;
				default:
					break;
			}
			break;
	}
	return 2;
}

char* func_805(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return "RE_HEC_UNI_V1_CALLOVER";
				case 1:
					return "RE_HEC_UNI_V1_CALLOVER_2ND";
				case 2:
					return "RE_HEC_UNI_V1_CALLOVER_RESP";
				case 3:
					return "RE_HEC_UNI_V1_HELP";
				case 4:
					return "RE_HEC_UNI_V1_HELP_SICK";
				case 5:
					return "RE_HEC_UNI_V1_HELP_CONTINUED";
				case 6:
					return "RE_HEC_UNI_V1_HELP_INSIST";
				case 7:
					return "RE_HEC_UNI_V1_HELP_2ND";
				case 8:
					return "RE_HEC_UNI_V1_HELP_SICK_2ND";
				case 9:
					return "RE_HEC_UNI_V1_HELP";
				case 10:
					return "RE_HEC_UNI_V1_HELP_INSIST_2ND";
				case 11:
					return "RE_HEC_UNI_V1_HELP_3RD";
				case 12:
					return "RE_HEC_UNI_V1_HELP_SICK_3RD";
				case 13:
					return "RE_HEC_UNI_V1_HELP_3RD_CONTINUED";
				case 14:
					return "RE_HEC_UNI_V1_HELP_2ND_CONTINUED";
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 15:
					return "RE_HEC_UNI_V1_ACCEPT_01";
				case 16:
					return "RE_HEC_UNI_V1_ACCEPT_02";
				case 17:
					return "RE_HEC_UNI_V1_ACCEPT_03";
				case 18:
					return "RE_HEC_UNI_V1_PLAYER_REJECT_01";
				case 19:
					return "RE_HEC_UNI_V1_PLAYER_REJECT_02";
				case 20:
					return "RE_HEC_UNI_V1_REJECT";
				case 21:
					return "RE_HEC_UNI_V1_REJECT_ALT";
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 22:
					return "RE_HEC_UNI_V1_HANDOVER";
				case 23:
					return "RE_HEC_UNI_V1_HANDOVER_PLAYER";
				case 24:
					return "RE_HEC_UNI_V1_MORE";
				case 25:
					return "RE_HEC_UNI_V1_DISCOVERED";
				case 26:
					return "RE_HEC_UNI_V1_PLAYER_RETURN_01";
				case 27:
					return "RE_HEC_UNI_V1_PLAYER_RETURN_02";
				case 28:
					return "RE_HEC_UNI_V1_HELP";
				case 29:
					return "RE_HEC_UNI_V1_PLAYER_WAIT_01";
				case 30:
					return "RE_HEC_UNI_V1_PLAYER_WAIT_02";
				case 31:
					return "RE_HEC_UNI_V1_PLAYER_WAIT_03";
				case 32:
					return "RE_HEC_UNI_V1_FORGET";
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 33:
					return "RE_HEC_UNI_V1_CURRANT_LOOK";
				case 34:
					return "RE_HEC_UNI_V1_CURRANT_DESC";
				case 35:
					return "RE_HEC_UNI_V1_CURRANT_RETURN";
				case 36:
					return "RE_HEC_UNI_V1_CURRANT_INSPECT";
				case 37:
					return "RE_HEC_UNI_V1_CURRANT_REACT";
				case 38:
					return "RE_HEC_UNI_V1_CURRANT_TIP";
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 39:
					return "RE_HEC_UNI_V1_SAGE_LOOK";
				case 40:
					return "RE_HEC_UNI_V1_SAGE_DESC";
				case 41:
					return "RE_HEC_UNI_V1_SAGE_RETURN";
				case 42:
					return "RE_HEC_UNI_V1_SAGE_TASTE";
				case 43:
					return "RE_HEC_UNI_V1_SAGE_REACT";
				case 44:
					return "RE_HEC_UNI_V1_SAGE_TIP";
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 45:
					return "RE_HEC_UNI_V1_WILD_LOOK";
				case 46:
					return "RE_HEC_UNI_V1_WILD_DESC";
				case 47:
					return "RE_HEC_UNI_V1_WILD_RETURN";
				case 48:
					return "RE_HEC_UNI_V1_WILD_INSPECT";
				case 49:
					return "RE_HEC_UNI_V1_WILD_REACT";
				case 50:
					return "RE_HEC_UNI_V1_WILD_TIP";
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 51:
					return "RE_HEC_UNI_V1_YARROW_LOOK";
				case 52:
					return "RE_HEC_UNI_V1_YARROW_DESC";
				case 53:
					return "RE_HEC_UNI_V1_YARROW_RETURN";
				case 54:
					return "RE_HEC_UNI_V1_YARROW_TASTE";
				case 55:
					return "RE_HEC_UNI_V1_YARROW_REACT";
				case 56:
					return "RE_HEC_UNI_V1_YARROW_TIP";
				default:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 57:
					return "RE_HEC_UNI_V1_HAVEIT";
				case 58:
					return "RE_HEC_UNI_V1_WHATIS";
				case 59:
					return "RE_HEC_UNI_V1_SPECIAL";
				case 60:
					return "RE_HEC_UNI_V1_TAKEIT";
				case 61:
					return "RE_HEC_UNI_V1_SNOOP";
				case 62:
					return "RE_HEC_UNI_V1_HEREYOUARE";
				case 63:
					return "RE_HEC_UNI_V1_THANKS";
				case 64:
					return "RE_HEC_UNI_V1_TAKEORNOT";
				case 65:
					return "RE_HEC_UNI_V1_SUITYOURSELF";
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 66:
					return "RE_HEC_UNI_V1_SPACE";
				case 67:
					return "RE_HEC_UNI_V1_BACKUP";
				case 68:
					return "RE_HEC_UNI_V1_PUSHED";
				case 70:
					return "RE_HEC_UNI_V1_COMEBACK";
				case 69:
					return "RE_HEC_UNI_V1_BOTHERING";
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 71:
					return "RE_HEC_UNI_V1_AGGRO";
				case 72:
					return "RE_HEC_UNI_V1_AGGRO_B";
				case 73:
					return "RE_HEC_UNI_V1_LOOKING";
				case 74:
					return "RE_HEC_UNI_V1_LEAVE";
				case 75:
					return "RE_HEC_UNI_V1_GOODDAY";
				case 76:
					return "RE_HEC_UNI_V1_REMINDER_A";
				case 77:
					return "RE_HEC_UNI_V1_REMINDER_B";
				case 78:
					return "RE_HEC_UNI_V1_MYCAMP";
				default:
					break;
			}
			break;
	}
	return "INVALID";
}

void func_806(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

int func_807(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	if (!is_entity_dead(*uParam0))
	{
		func_806(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !_does_volume_exist(iParam9)) || is_entity_in_volume(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (is_ambient_speech_playing(*uParam0) || is_scripted_speech_playing(*uParam0));
		fVar8 = func_102(fParam12 >= 0f, fParam12, vdist(Global_36, get_entity_coords(*uParam0, true, false)));
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
			func_341(&(iParam1->f_13));
		}
		if (func_1055(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_1056(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_807(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_569(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!get_ped_config_flag(*uParam0, 317, true))
						{
							func_1057(*uParam0, 1, 1);
						}
					}
					else if (func_1058(iParam1, 22))
					{
						func_1057(*uParam0, 0, 1);
					}
				}
				if (func_1059(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_1060(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_1061(iParam8);
					if (func_1062(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (is_bit_set(uParam3[iParam1->f_1], 20))
								{
									func_1063(uParam3);
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
					func_1064(iParam1, uParam3, fVar8);
					if (func_1065(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (is_bit_set(*iParam1, 1))
					{
						func_1054(uParam3, 0, 0, 1, 1);
						clear_bit(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_1066(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_1059(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_1067(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_1062(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_1060(uParam0, func_1059(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_1061(iParam8);
				}
				else if (is_bit_set(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_1054(uParam3, 0, 0, 1, 1);
					}
					func_1068(iParam1, 1);
				}
				func_1064(iParam1, uParam3, fVar8);
				if (func_1066(uParam0, iParam1, fParam4, bVar6))
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
			func_802(iParam1, uParam3);
			set_bit(iParam1, 3);
		}
	}
	return -1;
}

void func_808(int* iParam0, var uParam1, var uParam2)
{
	iVar0 = func_1069(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (*uParam1)[iVar0]->f_13;
		iVar2 = (*uParam1)[iVar0]->f_15;
		if (!is_string_null_or_empty(sVar1))
		{
			func_206(Global_35, *uParam2, sVar1, "", -1082130432, iVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_809(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_90() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_810(int iParam0, bool bParam1)
{
	func_1070(iParam0, &iVar0, &iVar1);
	if (!func_1071(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_1072(iVar0, iVar1);
}

void func_811(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_812(int iParam0, var uParam1, int iParam2)
{
	bVar0 = func_13(iParam0, 49);
	fVar1 = func_372(Global_35, iParam0->f_7, 0, 1);
	switch (iParam2)
	{
		case 2:
			if (func_1073(iParam0, fVar1, iParam0->f_523 != iParam2))
			{
				return true;
			}
			break;
		case 3:
			if (fVar1 < 7f)
			{
				if (_0xd04241bbf6d03a5e(Global_35) != 0)
				{
					return true;
				}
			}
			break;
		case 1:
			if (bVar0)
			{
				if (func_13(iParam0, 48))
				{
					return func_14(Global_35, func_9(uParam1), 10f, 1, 1);
				}
			}
			break;
		case 5:
			if (func_13(iParam0, 50))
			{
				if (!func_13(iParam0, 51))
				{
					return true;
				}
			}
			break;
		case 6:
			if (func_13(iParam0, 52))
			{
				return true;
			}
			break;
		case 7:
			if (!func_13(iParam0, 55))
			{
				if (func_13(iParam0, 54))
				{
					return true;
				}
			}
			break;
		case 4:
			if (!func_13(iParam0, 61))
			{
				if (func_13(iParam0, 60))
				{
					return true;
				}
			}
			break;
	}
	return false;
}

void func_813(var uParam0)
{
	if (!func_333(uParam0))
	{
	}
	if (!func_593(uParam0))
	{
		uParam0->f_2 = (func_709() - uParam0->f_1);
		func_829(uParam0, 2);
	}
}

bool func_814(int iParam0)
{
	switch (iParam0->f_203)
	{
		case 6:
		case 7:
		case 14:
		case 15:
			return true;
		default:
			break;
	}
	return false;
}

int func_815(int iParam0, var uParam1, int iParam2)
{
	if (is_ped_using_any_scenario(iParam0->f_7))
	{
		if (!_0x916b8e075abc8b4e(iParam0->f_7, 1))
		{
			_0xe7fa07624574b79a(iParam0->f_7, Global_35, 2, 2, -1f, 1000, 0, 0, 0);
		}
	}
	switch (iParam0->f_524)
	{
		case 0:
			if (func_1074(iParam0, -1))
			{
				iParam0->f_524 = 2;
				func_341(&(iParam0->f_499));
				return 1;
			}
			break;
		case 2:
			if (func_1074(iParam0, -1))
			{
				iParam0->f_524 = 3;
			}
			break;
		case 3:
			if (func_333(&(iParam0->f_499)))
			{
				if (func_422(&(iParam0->f_499), 2f))
				{
					func_1075(iParam0);
				}
			}
			else if (!func_205(iParam0->f_7, 1))
			{
				func_72(iParam0, 61);
				return 4;
			}
			break;
	}
	return 0;
}

int func_816(int iParam0, var uParam1, int iParam2)
{
	if (is_ped_using_any_scenario(iParam0->f_7))
	{
		if (!_0x916b8e075abc8b4e(iParam0->f_7, 1))
		{
			_0xe7fa07624574b79a(iParam0->f_7, Global_35, 3, 2, -1f, 1000, 0, 0, 0);
		}
	}
	switch (iParam0->f_524)
	{
		case 0:
			if (func_1074(iParam0, -1))
			{
				iParam0->f_524 = 2;
				if (is_ped_using_any_scenario(iParam0->f_7))
				{
					_0xe7fa07624574b79a(iParam0->f_7, Global_35, 3, 2, -1f, 1000, 0, 0, 0);
				}
				if (iParam2 == 5)
				{
					if (iParam0->f_1 != 12)
					{
						func_72(iParam0, 51);
					}
				}
				func_341(&(iParam0->f_499));
				return 1;
			}
			break;
		case 2:
			if (func_1074(iParam0, -1))
			{
				iParam0->f_524 = 3;
			}
			break;
		case 3:
			if (func_333(&(iParam0->f_499)))
			{
				if (func_422(&(iParam0->f_499), 2f))
				{
					func_1075(iParam0);
				}
			}
			else if (!func_205(iParam0->f_7, 1))
			{
				return 4;
			}
			break;
	}
	return 0;
}

bool func_817(int iParam0, int iParam1)
{
	iVar0 = func_338(iParam0, iParam1);
	switch (iParam1)
	{
		case 2:
			switch (iVar0)
			{
				case 2:
					return true;
				default:
					break;
			}
			break;
		case 3:
			switch (iVar0)
			{
				case 1:
					return true;
				default:
					break;
			}
			break;
		case 1:
			switch (iVar0)
			{
				case 2:
					return true;
				default:
					break;
			}
			break;
	}
	return false;
}

int func_818(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	bVar1 = false;
	switch (iParam0->f_524)
	{
		case 0:
			set_entity_no_collision_entity(iParam0->f_7, &(iParam0->f_90[2]), true);
			func_72(iParam0, 46);
			if (!_0x62fdad5e01d2dd47(iParam0->f_7, Global_36, 2, 0))
			{
				if (!_0xec6935ebe0847b90(iParam0->f_7, Global_36))
				{
					_0xa3a9299c4f2adb98(iParam0->f_7);
				}
			}
			iParam0->f_512 = -1;
			iParam0->f_513 = -1;
			open_sequence_task(&iVar0);
			if (!is_ped_on_mount(Global_35))
			{
				if (func_1076(iParam0))
				{
					task_confront(0, Global_35, 2);
					iParam0->f_512++;
					bVar1 = true;
				}
			}
			if (!bVar1)
			{
				if (func_1077(iParam0))
				{
					func_1078(0, Global_35, 0);
					iParam0->f_512++;
					iParam0->f_513++;
					task_turn_ped_to_face_entity(0, Global_35, 1000, -1082130432, -1082130432, -1082130432);
					iParam0->f_512++;
				}
			}
			if (bParam3)
			{
				if (!bVar1)
				{
					task_confront(0, Global_35, 2);
				}
				task_go_to_entity(0, Global_35, -1, 2f, 1f, 2f, 0);
			}
			else
			{
				task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
			}
			func_171(iParam0->f_7, &iVar0, 0, 0, 1, 1);
			iParam0->f_524 = 1;
			break;
		case 1:
			if (func_1074(iParam0, iParam0->f_513))
			{
				func_341(&(iParam0->f_499));
				iParam0->f_524 = 2;
				if (bParam3)
				{
					if (!is_ped_using_action_mode(iParam0->f_7))
					{
						set_ped_using_action_mode(iParam0->f_7, true, -1, 0);
					}
				}
				return 1;
			}
			break;
		case 2:
			if (func_205(iParam0->f_7, 1) || func_343(&(iParam0->f_499), 2f))
			{
				iParam0->f_524 = 3;
			}
			break;
		case 3:
			if (!func_205(iParam0->f_7, 1))
			{
				if ((!func_169(iParam0->f_7, 242628503) || get_sequence_progress(iParam0->f_7) > iParam0->f_512) || !func_14(Global_35, func_9(uParam1), 14f, 1, 1))
				{
					return 4;
				}
			}
			break;
	}
	return 0;
}

int func_819(int iParam0, var uParam1, int iParam2)
{
	switch (iParam0->f_524)
	{
		case 0:
			set_entity_no_collision_entity(iParam0->f_7, &(iParam0->f_90[2]), true);
			func_72(iParam0, 46);
			if (!_0x62fdad5e01d2dd47(iParam0->f_7, Global_36, 3, 0))
			{
				if (!_0xec6935ebe0847b90(iParam0->f_7, Global_36))
				{
					_0xa3a9299c4f2adb98(iParam0->f_7);
				}
			}
			set_ped_using_action_mode(iParam0->f_7, true, -1, 0);
			iParam0->f_512 = -1;
			iParam0->f_513 = -1;
			open_sequence_task(&iVar0);
			if (func_1077(iParam0))
			{
				func_1078(0, Global_35, 0);
				iParam0->f_512++;
				iParam0->f_513++;
				task_turn_ped_to_face_entity(0, Global_35, 1000, -1082130432, -1082130432, -1082130432);
				iParam0->f_512++;
			}
			if (!is_ped_on_mount(Global_35))
			{
				if (func_1076(iParam0))
				{
					task_confront(0, Global_35, 2);
					iParam0->f_512++;
				}
			}
			if (func_322(iParam0->f_7, 0, 1, 0) != -618550132)
			{
				set_current_ped_weapon(iParam0->f_7, -618550132, false, 0, false, false);
				task_swap_weapon(0, 1, 0, 0, 0);
				iParam0->f_512++;
			}
			task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
			func_171(iParam0->f_7, &iVar0, 0, 0, 1, 1);
			iParam0->f_524 = 1;
			break;
		case 1:
			if (func_1074(iParam0, iParam0->f_513))
			{
				func_341(&(iParam0->f_499));
				set_ped_using_action_mode(iParam0->f_7, true, -1, 0);
				iParam0->f_524 = 2;
				return 1;
			}
			break;
		case 2:
			if (func_205(iParam0->f_7, 1) || func_343(&(iParam0->f_499), 2f))
			{
				iParam0->f_524 = 3;
			}
			break;
		case 3:
			if (!func_205(iParam0->f_7, 1))
			{
				if ((!func_169(iParam0->f_7, 242628503) || get_sequence_progress(iParam0->f_7) > iParam0->f_512) || !func_14(Global_35, func_9(uParam1), 14f, 1, 1))
				{
					return 4;
				}
			}
			break;
	}
	return 0;
}

int func_820(int iParam0, var uParam1, int iParam2)
{
	switch (iParam0->f_524)
	{
		case 0:
			set_ped_using_action_mode(iParam0->f_7, true, -1, 0);
			func_72(iParam0, 46);
			iParam0->f_512 = -1;
			iParam0->f_513 = -1;
			open_sequence_task(&iVar0);
			if (func_1077(iParam0))
			{
				func_1078(0, Global_35, 0);
				iParam0->f_512++;
				iParam0->f_513++;
				task_turn_ped_to_face_entity(0, Global_35, 1000, -1082130432, -1082130432, -1082130432);
				iParam0->f_512++;
			}
			if (!is_ped_on_mount(Global_35))
			{
				if (func_1076(iParam0))
				{
					task_confront(0, Global_35, 2);
					iParam0->f_512++;
				}
			}
			else
			{
				task_mount_animal(0, get_mount(Global_35), -1, -1, 1.5f, 524288, 0, 0);
				iParam0->f_512++;
			}
			if (func_13(iParam0, 57))
			{
				if (func_322(iParam0->f_7, 0, 1, 0) != -618550132)
				{
					set_current_ped_weapon(iParam0->f_7, -618550132, false, 0, false, false);
					task_swap_weapon(0, 1, 0, 0, 0);
					iParam0->f_512++;
				}
				task_combat_ped(0, Global_35, 0, 0);
			}
			else
			{
				iParam0->f_512++;
				task_combat_ped(0, Global_35, 0, 0);
			}
			func_171(iParam0->f_7, &iVar0, 0, 0, 1, 1);
			iParam0->f_524 = 1;
			break;
		case 1:
			if (func_1074(iParam0, iParam0->f_513))
			{
				func_341(&(iParam0->f_499));
				iParam0->f_524 = 2;
				return 1;
			}
			break;
		case 2:
			if (func_205(iParam0->f_7, 1) || func_343(&(iParam0->f_499), 2f))
			{
				iParam0->f_524 = 3;
			}
			break;
		case 3:
			if (!func_205(iParam0->f_7, 1))
			{
				if ((!func_169(iParam0->f_7, 242628503) || get_sequence_progress(iParam0->f_7) > iParam0->f_512) || !func_14(Global_35, func_9(uParam1), 14f, 1, 1))
				{
					return 4;
				}
			}
			break;
	}
	return 0;
}

int func_821(int iParam0, var uParam1, int iParam2)
{
	if (is_ped_using_any_scenario(iParam0->f_7))
	{
		if (!_0x916b8e075abc8b4e(iParam0->f_7, 1))
		{
			_0xe7fa07624574b79a(iParam0->f_7, Global_35, 1, 1, -1f, 1000, 0, 0, 0);
		}
	}
	switch (iParam0->f_524)
	{
		case 0:
			if (func_1074(iParam0, -1))
			{
				iParam0->f_524 = 2;
				func_72(iParam0, 61);
				return 1;
			}
			break;
		case 2:
			if (func_1074(iParam0, -1))
			{
				iParam0->f_524 = 3;
			}
			break;
		case 3:
			if (!func_205(iParam0->f_7, 1))
			{
				func_72(iParam0, 61);
				return 4;
			}
			break;
	}
	return 0;
}

char* func_822(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RE_HEC_UNI_V1_SPACE";
		case 1:
			return "RE_HEC_UNI_V1_BACKUP";
		case 3:
			return "RE_HEC_UNI_V1_PUSHED";
		default:
			break;
	}
	return "";
}

char* func_823(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RE_HEC_UNI_V1_STEAL_A";
		case 1:
			return "RE_HEC_UNI_V1_STEAL_B";
		case 2:
			return "RE_HEC_UNI_V1_STEAL_C";
		default:
			break;
	}
	return "";
}

char* func_824(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RE_HEC_UNI_V1_COMEBACK";
		case 1:
			return "RE_HEC_UNI_V1_ISAIDLEAVE";
		case 2:
			return "RE_HEC_UNI_V1_ISAID";
		case 3:
			return "RE_HEC_UNI_V1_AGGRO_M";
		default:
			break;
	}
	return "";
}

char* func_825(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return func_285(bParam1, "WON_DISPUTE_ESCALATED", "RE_HEC_UNI_V1_DONEENOUGH");
		default:
			break;
	}
	return "";
}

char* func_826(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RE_HEC_UNI_V1_PRETHREATENME";
		case 1:
			return "RE_HEC_UNI_V1_THREATENME";
		default:
			break;
	}
	return "";
}

char* func_827(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RE_HEC_UNI_V1_YOURECRAZY";
		default:
			break;
	}
	return "";
}

char* func_828(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RE_HEC_UNI_V1_IUNDERSTAND";
		default:
			break;
	}
	return "";
}

void func_829(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_830(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_831(int* iParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || func_503(iParam0->f_6))
	{
		if (is_bit_set(*iParam0, 0))
		{
			if (!bParam2)
			{
				return true;
			}
			if (func_1079(iParam0->f_6, bParam1))
			{
				return true;
			}
		}
	}
	return false;
}

void func_832(int* iParam0, char* sParam1, char* sParam2)
{
	if (!is_string_null_or_empty(sParam1))
	{
		if (func_503(iParam0->f_6))
		{
			func_1080(iParam0->f_6, sParam1, sParam2, 1);
		}
		iParam0->f_14 = sParam2;
		func_360(iParam0, 1);
		iParam0->f_5 = sParam1;
	}
}

bool func_833(int* iParam0, bool bParam1)
{
	if (!bParam1 || func_503(iParam0->f_6))
	{
		return func_358(iParam0, 4);
	}
	return false;
}

void func_834(int* iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_358(iParam0, 4))
		{
			func_504(&(iParam0->f_6), 1, 1);
			func_360(iParam0, 4);
		}
	}
	else if (func_358(iParam0, 4))
	{
		func_361(iParam0, 4);
		func_360(iParam0, 14);
	}
}

void func_835(var uParam0, var uParam1, bool bParam2)
{
	*uParam1 = *uParam0;
	uParam1->f_1 = uParam0->f_1;
	if (!bParam2)
	{
		uParam1->f_2 = 0;
	}
	else
	{
		uParam1->f_2 = 1;
	}
	uParam1->f_3 = uParam0->f_3;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_18 = { uParam0->f_18 };
}

void func_836(var uParam0, var uParam1, bool bParam2)
{
	if (*uParam0 == *uParam1)
	{
		iVar0 = 0;
		while (iVar0 < *uParam0)
		{
			func_592((*uParam0)[iVar0], (*uParam1)[iVar0], bParam2);
			iVar0++;
		}
	}
}

void func_837(int* iParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = sParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = uParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_503(iParam0->f_6))
		{
			if (is_bit_set(*iParam0, 1))
			{
				func_1080(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_849(iParam0->f_6, iParam0->f_5, 0);
			}
			func_1081(iParam0->f_6, 0, 1);
		}
		else
		{
			set_bit(iParam0, 14);
		}
		set_bit(iParam0, 0);
	}
	else
	{
		func_621(iParam0, iParam0->f_5);
		if (!is_bit_set(*iParam0, 13))
		{
			set_bit(iParam0, 0);
		}
	}
	set_bit(iParam0, 15);
}

bool func_838(int iParam0, bool bParam1)
{
	if (func_840(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_884(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_839(bool bParam0)
{
	iVar0 = func_282(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_610(271701509, func_761(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_610(271701509, func_761(bParam0), 12999093, 0);
}

int func_840(int iParam0)
{
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_841(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_840(iParam0);
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

bool func_842(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_282(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_843(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_610(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_282(bParam6), &Var0, 0);
	return uVar4;
}

bool func_844(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_282(0);
	*uParam1 = { func_610(iParam0, func_541(0), iParam3, 0) };
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

bool func_845(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

bool func_846(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_847(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_848(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

void func_849(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_503(iParam0))
	{
		return;
	}
	iVar0 = func_737(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, sParam1);
}

void func_850(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		func_1082(iParam0, 0);
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
		func_1083(1);
		Global_40.f_11922[0] = iParam0;
	}
}

bool func_851(int iParam0)
{
	if (!func_534(iParam0))
	{
		return false;
	}
	return func_535(iParam0, 2, 1);
}

int func_852(int iParam0)
{
	if (!is_ped_using_any_scenario(iParam0->f_7))
	{
		return 1;
	}
	set_ped_can_play_ambient_anims(iParam0->f_7, false);
	if (func_682(iParam0, -1904017806))
	{
		if (!_0x916b8e075abc8b4e(iParam0->f_7, 1))
		{
			if (_0x02ebbb3989b7e695(iParam0->f_7))
			{
				return 1;
			}
		}
		else
		{
			func_642(iParam0);
		}
	}
	else if (!_0x916b8e075abc8b4e(iParam0->f_7, 1))
	{
		if (_0x02ebbb3989b7e695(iParam0->f_7))
		{
			switch (_0x569f1e1237508deb(iParam0->f_7))
			{
				case 2093245709:
					if (!_0x68821369a2ceadd5(iParam0->f_7, 601769528))
					{
						_0xd65fdc686a031c83(iParam0->f_7, 601769528, 0.5f);
					}
					break;
				case 494354620:
					if (!_0x68821369a2ceadd5(iParam0->f_7, -816791935))
					{
						_0xd65fdc686a031c83(iParam0->f_7, -816791935, 0.5f);
					}
					break;
			}
		}
	}
	else
	{
		func_642(iParam0);
	}
	return 0;
}

void func_853(var uParam0)
{
	if (!func_13(uParam0, 28))
	{
		if (!func_208(Global_35, uParam0->f_7, 20f, 1))
		{
			func_72(uParam0, 28);
			if (!func_1084(uParam0))
			{
				func_383(&(uParam0->f_284), 0, "RE_HEC_UNI_V1_LOOKING");
				func_384(&(uParam0->f_284));
			}
		}
	}
}

bool func_854(var uParam0)
{
	if (!func_333(&(uParam0->f_505)))
	{
		func_341(&(uParam0->f_505));
	}
	if (is_any_speech_playing(uParam0->f_7) || is_any_speech_playing(Global_35))
	{
		func_341(&(uParam0->f_505));
	}
	if (func_333(&(uParam0->f_508)))
	{
		if (!func_343(&(uParam0->f_508), 3f))
		{
			if (uParam0->f_209 < 6)
			{
				return false;
			}
		}
	}
	if (!func_330(uParam0, 1) && !func_431(uParam0, 7))
	{
		if (func_208(Global_35, uParam0->f_7, 10f, 1))
		{
			switch (uParam0->f_209)
			{
				case 0:
					if (func_589(&(uParam0->f_505)) > 8f)
					{
						func_640(uParam0, 10f);
						uParam0->f_209++;
					}
					break;
				case 1:
					if (_0x916b8e075abc8b4e(uParam0->f_7, 0))
					{
						func_206(uParam0->f_7, Global_35, "RE_HEC_UNI_V1_REMINDER_A", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						uParam0->f_209++;
					}
					break;
				case 2:
					if (!_0x916b8e075abc8b4e(uParam0->f_7, 1))
					{
						uParam0->f_209++;
					}
					break;
				case 3:
					if (_0x916b8e075abc8b4e(uParam0->f_7, 0))
					{
						func_206(uParam0->f_7, Global_35, "RE_HEC_UNI_V1_REMINDER_B", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						uParam0->f_209++;
					}
					break;
				case 4:
					if (!_0x916b8e075abc8b4e(uParam0->f_7, 1))
					{
						uParam0->f_209++;
					}
					break;
				case 5:
					if (_0x916b8e075abc8b4e(uParam0->f_7, 0))
					{
						func_206(uParam0->f_7, Global_35, "RE_HEC_UNI_V1_FORGET", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						uParam0->f_209++;
						return false;
					}
					break;
				default:
					return false;
			}
		}
	}
	return false;
}

void func_855(var uParam0)
{
	switch (uParam0->f_205)
	{
		case 0:
			if (!func_330(uParam0, 1))
			{
				set_ped_can_play_ambient_anims(uParam0->f_7, false);
				if (func_13(uParam0, 28))
				{
					if (func_969(uParam0, 131072))
					{
						if (!func_13(uParam0, 30))
						{
							func_189(uParam0, 1);
						}
						else if (!func_13(uParam0, 31))
						{
							if (func_208(Global_35, uParam0->f_7, 20f, 1))
							{
								func_189(uParam0, 3);
							}
						}
					}
				}
				else
				{
					func_853(uParam0);
				}
			}
			break;
		case 1:
			if (!func_330(uParam0, 1))
			{
				if (func_373(uParam0, 0))
				{
					func_72(uParam0, 29);
					if (func_1085(uParam0))
					{
						func_72(uParam0, 59);
						task_play_anim(uParam0->f_7, func_140(43, 1), "HEY_N_HERBALIST", 8f, -8f, -1, 67117072, 0f, false, 0, false, 0, false);
					}
					else
					{
						func_73(uParam0, 59);
						func_206(uParam0->f_7, Global_35, "RE_HEC_UNI_V1_PLAYER_RETURN_01", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					if (func_333(&(uParam0->f_462)))
					{
						func_334(&(uParam0->f_462));
					}
					uParam0->f_205 = 2;
				}
			}
			break;
		case 2:
			if (func_1086(uParam0))
			{
				if (func_208(Global_35, uParam0->f_7, 20f, 1))
				{
					func_72(uParam0, 30);
					func_189(uParam0, 3);
				}
				else if (!func_333(&(uParam0->f_462)))
				{
					func_341(&(uParam0->f_462));
				}
				else if (func_343(&(uParam0->f_462), 5f))
				{
					func_334(&(uParam0->f_462));
					func_73(uParam0, 29);
					func_1087(uParam0, 30);
				}
			}
			break;
		case 3:
			if (!func_330(uParam0, 1))
			{
				if (func_373(uParam0, 0))
				{
					func_72(uParam0, 29);
					if (func_1085(uParam0))
					{
						func_72(uParam0, 59);
						func_377(uParam0->f_7, *uParam0, "YARROW_RETURN_A_UPPER", "GCURRANT_RETURN_A_UPPER", "VSNOWDROP_RETURN_A_UPPER", "HBSAGE_RETURN_A", 1);
					}
					else
					{
						func_73(uParam0, 59);
						func_206(uParam0->f_7, Global_35, func_390(*uParam0, "RE_HEC_UNI_V1_YARROW_RETURN", "RE_HEC_UNI_V1_SAGE_RETURN", "RE_HEC_UNI_V1_CURRANT_RETURN", "RE_HEC_UNI_V1_SNOWDROPS_RETURN"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					uParam0->f_205 = 4;
				}
			}
			break;
		case 4:
			if (func_1088(uParam0))
			{
				if (!func_333(&(uParam0->f_462)))
				{
					func_341(&(uParam0->f_462));
				}
				else if (func_343(&(uParam0->f_462), 5f))
				{
					func_73(uParam0, 29);
					func_1087(uParam0, 31);
				}
			}
			break;
		case 5:
			uParam0->f_205 = 0;
			break;
	}
}

void func_856(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if (fParam3 > fParam2)
	{
		func_360(uParam0->f_21[iParam1], 9);
	}
}

void func_857(var uParam0, var uParam1, float fParam2)
{
	vVar0 = { _get_object_offset_from_coords(func_9(uParam1), func_10(uParam1), -1.17f, 3.39f, 0f) };
	iVar3 = get_mount(Global_35);
	if (does_entity_exist(iVar3) && func_207(Global_35, iVar3, 0))
	{
		if (func_991(Global_36, vVar0) <= fParam2 || func_991(get_entity_coords(iVar3, true, false), vVar0) <= fParam2)
		{
			func_326(uParam0->f_284.f_21[0]);
		}
	}
}

void func_858(var uParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_429(uParam0, 0, 0, 0))
	{
		if (!bParam3 || _0x3ab6c7b0bb0df4b1(iParam2, uParam0->f_1))
		{
			remove_anim_scene_entity(uParam0->f_1, sParam1, iParam2);
		}
	}
}

void func_859(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_278(iParam0, 0))
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
	if (!func_1089())
	{
		func_1090(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_285(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_285(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_883(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_279(iParam0);
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
	else if (!func_1091(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	sVar15 = func_1092(_create_var_string(10, &cVar2, _create_var_string(0, func_925(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_538(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_925(iParam0));
	}
	func_1051(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

struct<2> func_860(int iParam0)
{
	if (!func_278(iParam0, 0))
	{
		return Var0;
	}
	if (func_538(iParam0, -305066475))
	{
		if (func_90() == -1)
		{
			if (func_538(iParam0, -537818634))
			{
				return func_742(189951448);
			}
			else
			{
				return func_742(1176172851);
			}
		}
	}
	else if (func_538(iParam0, -537818634))
	{
		return func_742(-963660207);
	}
	if (func_538(iParam0, 2084895747))
	{
		return func_742(1694039471);
	}
	return Var2;
}

bool func_861(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	Var0 = { func_540(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_542(&Var0, func_541(0));
	}
	if (!func_543(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_546(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_611(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_544(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_862(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_278(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_606(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_1093(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_610(iParam0, Var0, Var0.f_4, bParam4) };
	return func_611(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_863(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_538(iParam0, 606799272))
		{
			func_1094(iParam0, iParam1);
		}
		if (func_538(iParam0, -1112814642) && func_538(iParam0, -1697809989))
		{
			func_906(iParam0, iParam1, 1, 0);
		}
	}
}

int func_864(int iParam0)
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

var func_865(int iParam0, var uParam1, var uParam2, int iParam3)
{
	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = uParam1;
	Var0.f_12[0] = uParam2;
	iVar23 = 13;
	return _0xa88e215ceb0435c0(iParam0, &Var0, iParam3, iVar23, 2, 0);
}

bool func_866(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_90() == -1)
	{
		if (func_1095(iParam0) && func_1096(iParam0))
		{
			func_1097(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_867(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_1098(iParam0, iParam1);
	Var0 = { func_606(iParam0, 0, 1) };
	iVar5 = func_1099(iParam0, &Var0, 0, 0);
	iVar6 = func_1100(iParam0, 0);
	if ((iVar5 > 1 && !func_1101()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_538(iParam0, -2051813666))
		{
			func_810(583, 1);
		}
		else
		{
			func_810(582, 0);
		}
	}
	if (func_1102(iParam0, &Var0, *iParam1, 0, 0))
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

void func_868(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_1103(iParam0, -949239683))
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

bool func_869(int iParam0)
{
	if (func_90() != -1)
	{
		return false;
	}
	return func_870(iParam0) != 0;
}

int func_870(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1104())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_1105(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_871(int iParam0)
{
	return _0x6052b4de6657684f(iParam0);
}

int func_872(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1104())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_871(iVar0))
		{
			if (func_137(func_1105(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_873(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
	func_1106(48);
	func_510(0, -1);
}

bool func_874(int iParam0)
{
	if (func_90() != -1)
	{
		return false;
	}
	return func_895((*Global_1347702)[iParam0]->f_15, 1);
}

int func_875(int iParam0)
{
	return _0x62cab7db62ead434(-2076669067, iParam0);
}

int func_876(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

bool func_877(int iParam0)
{
	if (func_90() != -1)
	{
		return false;
	}
	return func_895((*Global_1835011)[iParam0]->f_1, 1);
}

bool func_878(int iParam0)
{
	if (func_90() != -1)
	{
		return false;
	}
	if (!func_723(iParam0))
	{
		return false;
	}
	return func_1107((*Global_1347702)[iParam0]->f_15);
}

int func_879()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_137(func_1108(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_880(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_751() && (func_878(38) || func_874(38)))
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
			if (func_751() && (func_878(39) || func_874(39)))
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
			iVar9 = func_1109(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		case 41:
			if (func_751() && (func_878(41) || func_874(41)))
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
			if (func_751() && (func_878(49) || func_874(49)))
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
			iVar9 = func_1109(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_1110(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar12 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar12 = get_hash_key("toast_log_blips");
	}
	if (func_1111(iParam0, iVar13, iVar14))
	{
	}
	if (func_1112(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_1113(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_1114(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_1115(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_1116(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_881(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_882(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_751() && (func_878(38) || func_874(38)))
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
			if (func_751() && (func_878(39) || func_874(39)))
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
			if (func_751() && (func_878(49) || func_874(49)))
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
		if (func_751() && (func_878(38) || func_874(38)))
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
			func_1117(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_1117(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_1119(_create_var_string(2, sVar0), _create_var_string(2, func_1118(func_876(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_1117(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_1117(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_751() && (func_878(39) || func_874(39)))
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
			func_1117(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1117(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_751() && (func_878(49) || func_874(49)))
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
			func_1117(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1117(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_1117(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1117(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

bool func_883(int iParam0, int iParam1)
{
	if (!func_278(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

bool func_884(int iParam0)
{
	if (!func_1120(iParam0))
	{
		return false;
	}
	return func_1121(iParam0);
}

void func_885(int iParam0)
{
	if (!func_1120(iParam0))
	{
		return;
	}
	func_1122(iParam0);
	func_1123(iParam0);
}

int func_886(int iParam0, bool bParam1)
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
	if (func_278(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_1124(iVar0) || func_363(iVar0))
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

int func_887(int iParam0, bool bParam1)
{
	if (!func_278(iParam0, 0))
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

void func_888(int iParam0)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_362(iParam0))
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

bool func_889(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_887(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_90() == -1)
		{
			func_888(iVar0);
			if (iParam1 == 1248274121)
			{
				func_1125(iVar0);
			}
		}
		if (!func_1102(iParam0, &uVar1, 1, 0, 0))
		{
			func_1097(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_1126(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_364(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_364(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_364(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_melee(iVar0))
			{
				if (iVar0 == 494733111 && !func_16())
				{
					return false;
				}
				if (_0x2c83212a7aa51d3d(iParam0))
				{
				}
				else if (!func_366(iVar0))
				{
					func_364(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_364(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_322(Global_35, 2, 0, 1);
				if ((((func_362(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_884(24)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_362(iVar7) && func_884(24))
				{
					if (!func_364(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_364(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_364(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_810(480, 1);
	}
	return true;
}

bool func_890(int iParam0, int iParam1, int iParam2)
{
	if (!func_846(iParam0))
	{
		return false;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_35, iParam0);
	if (func_362(iVar4))
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
	if (func_137(611073244, 1, 0) && iParam2 == -897553835)
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
		func_926(func_1127(iParam0), func_925(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_90() == -1)
		{
			if (func_895((*Global_1835011)[14]->f_1, 1))
			{
				func_810(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_612(0))
	{
		if (func_613(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_931(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_891(int iParam0)
{
	if ((iParam0 == -615217896 && !func_1128()) || iParam0 != -615217896)
	{
		if (func_1129(Global_35, iParam0, &uVar0))
		{
			func_910(player_ped_id(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_916();
			break;
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_916();
			break;
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_916();
			break;
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_914();
			break;
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_912();
			break;
	}
}

void func_892(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_912();
			break;
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_913();
			break;
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_914();
			break;
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_915();
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
			func_916();
			break;
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_1130();
			break;
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_1131();
			break;
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_893(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

struct<2> func_894(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

bool func_895(int iParam0, bool bParam1)
{
	switch (func_1132(iParam0))
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

void func_896(int iParam0)
{
	bVar0 = func_538(iParam0, -2017733358);
	if (func_1133() < 3)
	{
		if (bVar0)
		{
			if (func_1135(func_1134(iParam0), iParam0))
			{
				func_926(79, func_925(func_1134(iParam0)), 1);
			}
			else
			{
				func_926(78, func_925(func_1134(iParam0)), 1);
			}
		}
		else
		{
			func_926(80, func_925(func_1136(iParam0)), 1);
		}
	}
}

bool func_897()
{
	if (((((func_1137(839908568, 400) || func_1137(-1134030454, 400)) || func_1137(623353496, 400)) || func_1137(-344413337, 400)) || func_1137(-1664948962, 400)) || func_1137(1795228059, 400))
	{
		return true;
	}
	return false;
}

int func_898(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	iVar0 = func_1138(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_938(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_939(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_899(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_880(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_882(51, 0, 0, 0, 0, -1, 0);
			func_1139(8192);
			break;
		case 581047644:
			func_880(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_882(51, 0, 0, 0, 0, -1, 0);
			func_1139(524288);
			break;
		case -644199619:
			func_880(39, 0, 0, 0, 0, 0, 1, 0);
			func_882(39, 0, 0, 0, 0, -1, 0);
			func_1140(16);
			break;
		case 684296857:
			func_880(41, 0, 0, 0, 0, 0, 1, 0);
			func_882(41, 0, 0, 0, 0, -1, 0);
			func_1141(8);
			break;
		case 466137807:
			func_880(49, 0, 0, 0, 0, 0, 1, 0);
			func_882(49, 0, 0, 0, 0, -1, 0);
			func_1142(16);
			break;
		case -1087522507:
			func_880(43, 0, 0, -1791518714, func_1143(1), 0, -1, 0);
			func_1144(1);
			break;
		case -405829000:
			func_880(43, 0, 0, -2087881550, func_1143(2), 0, -1, 0);
			func_1144(2);
			break;
		case 378660860:
			func_880(43, 0, 0, 1908068621, func_1143(4), 0, -1, 0);
			func_1144(4);
			break;
		case 1566111097:
			func_880(43, 0, 0, 1611247019, func_1143(8), 0, -1, 0);
			func_1144(8);
			break;
		case 1276007140:
			func_880(43, 0, 0, 1319635688, func_1143(16), 0, -1, 0);
			func_1144(16);
			break;
	}
}

void func_900(int iParam0)
{
	if (func_1145() == 1)
	{
		if (func_874(39))
		{
			func_810(342, 0);
		}
		else
		{
			func_810(343, 0);
			func_1140(1);
		}
	}
	if (func_1145() >= 30)
	{
		func_810(344, 0);
	}
	func_880(39, 0, 0, 0, 0, 0, -1, 0);
	func_882(39, 0, 0, func_1145(), 30, 1, 0);
}

void func_901(int iParam0)
{
	if (func_1146() == 1)
	{
		if (func_874(49))
		{
			func_810(409, 0);
		}
		else
		{
			func_810(410, 0);
			func_1142(1);
		}
	}
	if (func_1146() >= 10)
	{
		func_810(411, 0);
	}
	func_880(49, 0, 0, 0, 0, 0, -1, 0);
	func_882(49, 0, 0, func_1146(), 10, 1, 0);
}

void func_902(int iParam0)
{
	switch (iParam0)
	{
		case 1369162587:
			_0x3ea62e56f386c997(-949689219, 1);
			func_810(437, 0);
			func_810(440, 0);
			func_1147(-949689219, 444160793, &sVar0, 1, 0, 0);
			func_880(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_882(51, 0, 0, sVar0, func_1109(-949689219, 20), 1, 0);
			func_1139(1);
			func_1148(-748969569, 0, 0);
			break;
		case 1610047510:
			_0x3ea62e56f386c997(-1248968496, 1);
			func_1147(-1248968496, -1969404854, &sVar0, 1, 0, 0);
			func_880(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_882(51, 0, 0, sVar0, func_1109(-1248968496, 20), 1, 0);
			func_1139(8);
			break;
		case 1317879106:
			_0x3ea62e56f386c997(1706369307, 1);
			func_1147(1706369307, -832850511, &sVar0, 1, 0, 0);
			func_880(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_882(51, 0, 0, sVar0, func_1109(1706369307, 20), 1, 0);
			func_1139(64);
			break;
		case 1062444751:
			_0x3ea62e56f386c997(1520110311, 1);
			func_1147(1520110311, -100913452, &sVar0, 1, 0, 0);
			func_880(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_882(51, 0, 0, sVar0, func_1109(1520110311, 20), 1, 0);
			func_1139(512);
			break;
		case 754186760:
			_0x3ea62e56f386c997(-1992824800, 1);
			func_810(438, 0);
			func_1147(-1992824800, 905173572, &sVar0, 1, 0, 0);
			func_880(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_882(51, 0, 0, sVar0, func_1109(-1992824800, 20), 1, 0);
			func_1139(32768);
			break;
		default:
			func_810(439, 0);
			break;
	}
}

void func_903()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

void func_904(int iParam0, int iParam1)
{
	iVar1 = 0;
	if (func_90() == -1)
	{
		if (!func_874(43))
		{
			if (iParam0 == 281887510)
			{
				func_810(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_810(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_810(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_810(400, 0);
			}
		}
		else if (func_538(iParam0, 412399755))
		{
			func_1149(-1791518714);
			if (func_1150() == 0)
			{
				func_510(0, 10);
				iVar1 = func_1151(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_1152(iParam0) < func_1153(iParam0))
					{
						func_880(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_882(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_874(44))
		{
			if (iParam0 == -222563712)
			{
				func_810(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_810(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_810(401, 0);
			}
		}
		else if (func_538(iParam0, 709057512))
		{
			func_1149(-2087881550);
			if (func_1150() == 1)
			{
				func_510(0, 10);
				iVar1 = func_1151(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_1152(iParam0) < func_1153(iParam0))
					{
						func_880(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_882(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_874(45))
		{
			if (iParam0 == 2116770557)
			{
				func_810(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_810(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_810(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_810(398, 0);
			}
		}
		else if (func_538(iParam0, -1478961327))
		{
			func_1149(1908068621);
			if (func_1150() == 2)
			{
				func_510(0, 10);
				iVar1 = func_1151(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_1154(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
					{
						func_1155(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
						func_1106(48);
					}
					if (func_1152(iParam0) < func_1153(iParam0))
					{
						func_880(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_882(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_1152(iParam0) < func_1153(iParam0))
					{
						func_880(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_882(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_874(46))
		{
			if (iParam0 == 2085530337)
			{
				func_810(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_810(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_810(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_810(406, 0);
			}
		}
		else if (func_538(iParam0, -1238404098))
		{
			func_1149(1611247019);
			if (func_1150() == 3)
			{
				func_510(0, 10);
				iVar1 = func_1151(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_1152(iParam0) < func_1153(iParam0))
					{
						func_880(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_882(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_874(47))
		{
			if (iParam0 == -1521783510)
			{
				func_810(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_810(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_810(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_810(403, 0);
			}
		}
		else if (func_538(iParam0, 1160548794))
		{
			func_1149(1319635688);
			if (func_1150() == 4)
			{
				func_510(0, 10);
				iVar1 = func_1151(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_1152(iParam0) < func_1153(iParam0))
					{
						func_880(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_882(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_905(int iParam0)
{
	if (iParam0 == 2116770557)
	{
		if (!func_1154(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
		{
			func_1155(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
			func_1106(48);
		}
	}
}

void func_906(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = _0x126cbebba46693cf(iVar1, 678508515, -1160144609);
		if (func_137(func_1156(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_1157(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_1158(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_907(int iParam0, int iParam1, int iParam2)
{
	if (func_90() == -1)
	{
		if (does_entity_exist(iParam2))
		{
			iVar0 = _0x6f02b5e50511721e(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_898(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_898(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493:
			func_898(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627:
			func_898(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377:
			func_898(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086:
			func_898(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686:
			func_898(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991:
			func_898(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101:
			func_898(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918:
			func_898(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765:
			func_898(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903:
			func_898(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684:
			func_898(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340:
			if (!func_1159())
			{
				func_898(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740:
			func_898(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264:
			func_898(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970:
			func_898(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1027115192:
			func_898(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1064332555:
			func_898(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1954478446:
			func_898(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -518592739:
			func_898(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -2010073778:
			func_898(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -700133011:
			func_898(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1415414735:
			func_898(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 2045548742:
			func_898(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 830381058:
			func_898(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_908(int iParam0)
{
	if (func_874(41))
	{
		func_810(363, 0);
	}
	else
	{
		func_810(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_1160(-1865241121);
			func_1161(-642026005);
			func_1162(-642026005);
			func_510(0, 10);
			break;
		case -2108314374:
			func_1160(2117142684);
			func_1161(-940584364);
			func_1162(-940584364);
			func_510(0, 10);
			break;
		case -1193798153:
			func_1160(-1409326024);
			func_1161(1972645282);
			func_1162(1972645282);
			func_510(0, 10);
			break;
		case -787702678:
			func_1160(-641744968);
			func_1161(1667205433);
			func_1162(1667205433);
			func_510(0, 10);
			break;
		case -804542901:
			func_1160(-946988203);
			func_1161(1362715885);
			func_1162(1362715885);
			func_510(0, 10);
			break;
		case -1696275132:
			func_1160(-646136018);
			func_1161(1053540370);
			func_1162(1053540370);
			func_510(0, 10);
			break;
		case -161595323:
			func_1160(-955835837);
			func_1161(-1100103852);
			func_1162(-1100103852);
			func_510(0, 10);
			break;
		case -1114363619:
			func_1160(-179276075);
			func_1161(-1409869209);
			func_1162(-1409869209);
			func_510(0, 10);
			break;
		case -368407134:
			func_1160(-492711560);
			func_1161(-1760235357);
			func_1162(-1760235357);
			func_510(0, 10);
			break;
		case 1997759228:
			func_1160(1764383959);
			func_1161(-138366827);
			func_1162(-138366827);
			func_510(0, 10);
			break;
		case 1265573293:
			func_1160(317501533);
			func_1161(-1261163843);
			func_1162(-1261163843);
			func_510(0, 10);
			break;
		case -1030441283:
			func_1160(817753087);
			func_1161(-963523016);
			func_1162(-963523016);
			func_510(0, 10);
			break;
		case -1490884871:
			func_1160(576606016);
			func_1161(560825326);
			func_1162(560825326);
			func_510(0, 10);
			break;
		case -395458616:
			func_1160(814934957);
			func_1161(858269539);
			func_1162(858269539);
			break;
	}
}

void func_909(int iParam0, int iParam1)
{
	func_539(iParam0, iParam1, &uVar0);
}

int func_910(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_606(iParam1, 1, 0) };
		iParam3 = func_1163(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1165(iParam1, iParam2, func_1164(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_1166(1, (func_90() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_1164(iParam3, 1)])
			{
				func_1167(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_1168(32768) && iParam1 != &Global_1946804->f_57[func_1164(iParam3, 1)])
			{
				func_1169();
				func_1167(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_1167(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_1170(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_1167(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_1171(0);
			func_1172(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_1167(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_911(int iParam0, bool bParam1)
{
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_322(get_player_ped(get_player_index()), 2, 1, 0);
	iVar19 = func_322(get_player_ped(get_player_index()), 3, 1, 0);
	if (func_545("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_546(&Var3, iVar2, iVar0, iVar1))
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
						func_544(iVar0);
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

void func_912()
{
	_0x11a7ff918ef6bc66(player_id(), (1f - Global_40.f_11095.f_60));
}

void func_913()
{
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	_0x497a6539bb0e8787(player_id(), (1f - fVar0), (1f - fVar1));
}

void func_914()
{
	_0xe0d6c2a146a5c993(player_id(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_915()
{
	_0xb427911ea6dffef3(player_id(), (1f - Global_40.f_11095.f_63));
}

void func_916()
{
	func_1173();
	func_1174();
	func_1175();
}

void func_917(int iParam0, int iParam1, bool bParam2)
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

void func_918(int iParam0, bool bParam1)
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
	func_1117(_create_var_string(2, sVar1), _create_var_string(2, sVar2), get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_TREASURE_HUNTER"), 1433015236, _create_var_string(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_919(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_920(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_921(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_922(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_923(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_924(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_925(int iParam0)
{
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_926(int iParam0, int iParam1, bool bParam2)
{
	func_1070(iParam0, &iVar0, &iVar1);
	if (!func_1071(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1176(iParam0, 1024))
	{
		return;
	}
	func_1072(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 2;
}

void func_927(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_1070(iParam0, &iVar0, &iVar1);
	if (!func_1071(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1176(iParam0, 1024))
	{
		return;
	}
	func_1072(iVar0, iVar1);
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

int func_928()
{
	iVar0 = _0x5461c821d00fe15a(-2076669067, 0);
	if (iVar0 == func_1104())
	{
		return func_929();
	}
	iVar4 = (func_1104() - iVar0);
	iVar5 = get_random_int_in_range(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_1104())
	{
		iVar1 = _0x126cbebba46693cf(iVar2, -2076669067, 0);
		if (!func_1177(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_1105(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_929()
{
	iVar0 = get_random_int_in_range(0, func_1104());
	return func_1105(_0x126cbebba46693cf(iVar0, -2076669067, 0));
}

void func_930(int iParam0)
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

int func_931(int iParam0, int iParam1, int iParam2)
{
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_606(iParam0, 0, 1) };
	Var5 = { func_610(iParam0, Var0, Var0.f_4, 0) };
	return func_1178(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_932(int iParam0)
{
	if (func_90() != -1)
	{
		return;
	}
	switch (func_840(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_1179(81053684, 0) <= 0)
			{
				func_1167(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_1167(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_1180(iParam0);
			if (func_1181(iVar0))
			{
				func_1182(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_1167(30, iParam0, 0, 0, 0);
			}
			if (func_1183() == -2125499975 || func_1183() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_1167(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_1183() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_1167(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_1184(-525676072, 0))
			{
				if (func_1185(-525676072, &iVar1))
				{
					func_1167(33, iVar1, 0, 0, 0);
				}
			}
			func_1167(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_1186(99217379))
		{
			func_910(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_885(24);
		if (func_911(&iVar2, 0))
		{
			func_364(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_933(int iParam0)
{
	if (func_538(iParam0, 943695443))
	{
		func_1187(0, iParam0);
	}
	else if (func_538(iParam0, -2096528786))
	{
		func_1187(1, iParam0);
	}
	else if (func_538(iParam0, -1094167013))
	{
		func_1187(2, iParam0);
	}
	else if (func_538(iParam0, 1936654645))
	{
		func_1187(3, iParam0);
	}
	else if (func_538(iParam0, 1306489306))
	{
		func_1187(4, iParam0);
	}
	else if (func_538(iParam0, 435762317))
	{
		func_1187(5, iParam0);
	}
	else if (func_538(iParam0, 1259363210))
	{
		func_1187(6, iParam0);
	}
	else if (func_538(iParam0, 881398259))
	{
		func_1187(7, iParam0);
	}
	else if (func_538(iParam0, -541549214))
	{
		func_1187(8, iParam0);
	}
	else if (func_538(iParam0, 130796156))
	{
		func_1187(-1, iParam0);
	}
}

int func_934(int iParam0, int iParam1)
{
	Var4.f_1 = 10;
	func_1188(&Var4, 1356624740);
	return func_1189(iParam0, &Var4, &uVar0, iParam1);
}

void func_935(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_90() == -1)
			{
				if (func_895((*Global_1835011)[4]->f_1, 1))
				{
					func_810(109, 1);
				}
			}
			break;
	}
}

void func_936(int iParam0, char* sParam1)
{
	sVar0 = func_1191(func_1190(0));
	func_1051(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1192(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_937(int iParam0)
{
	if (func_1193())
	{
		return 0;
	}
	if (!func_1194(3, &Var0))
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

void func_938(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_1051(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_939(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_1195())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_1051(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_1196(iVar0);
			func_1197(iVar0, 0, 0);
		}
		func_1051(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		_money_increment_cash_balance(iVar1, iParam4);
		func_743(func_742(1644987397), iVar1);
	}
}

bool func_940(int iParam0)
{
	iParam0 = func_498(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_955(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_941(int iParam0)
{
	iParam0 = func_498(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_732(iParam0))
	{
		return;
	}
	iVar0 = func_665(iParam0);
	func_1198(iParam0);
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	iVar1 = get_entity_model(iVar0);
	if (_0xaa9f048dcf69b6dc(iVar1))
	{
		if (!func_1199(iVar1))
		{
			set_ped_model_is_suppressed(iVar1, false);
		}
	}
	delete_ped(&iVar0);
	func_1200(iParam0, 0);
	func_239(iParam0);
}

void func_942(int iParam0)
{
	iParam0 = func_498(iParam0);
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
	func_1201(&Var0);
	func_1202(iParam0, Var0);
	func_1203(&(Global_40.f_1095.f_1[iParam0]->f_15));
	func_1204(&(Global_40.f_1095.f_1[iParam0]->f_298));
	func_1205(&(Global_40.f_1095.f_1[iParam0]->f_356));
	func_1206(&(Global_40.f_1095.f_1[iParam0]->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_1207(iVar2, Global_40.f_1095.f_1[iParam0]->f_398[iVar2]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_1208(iVar3, Global_40.f_1095.f_1[iParam0]->f_407[iVar3]);
		iVar3++;
	}
	func_1209(&(Global_40.f_1095.f_1[iParam0]->f_420));
	func_1210(&(Global_40.f_1095.f_1[iParam0]->f_422));
	func_1211(&(Global_40.f_1095.f_1[iParam0]->f_425));
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

void func_943(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_944(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

int func_945(vector3 vParam0)
{
	return func_1212(_get_map_zone_at_coords(vParam0, 10));
}

bool func_946(int iParam0)
{
	iParam0 = func_498(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_732(iParam0))
	{
		return false;
	}
	iVar0 = func_665(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

bool func_947(int iParam0)
{
	iParam0 = func_498(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_732(iParam0))
	{
		return false;
	}
	iVar0 = func_665(iParam0);
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

void func_948(int iParam0)
{
	iParam0 = func_498(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_732(iParam0))
	{
		return;
	}
	iVar0 = func_665(iParam0);
	if (is_entity_dead(iVar0))
	{
		return;
	}
	_set_entity_health(iVar0, 0, 0);
}

void func_949(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (is_player_dead(iVar0))
	{
	}
	func_734(iParam0);
	func_734(iParam0);
	func_1213(iParam0, iParam1);
	func_1214(iParam0, iParam1);
	func_1215(iParam0, iParam1);
	iVar1 = func_665(iParam0);
	if (does_entity_exist(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_1216(iVar1);
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
	iVar3 = func_665(iParam1);
	if (does_entity_exist(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_1216(iVar3);
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
	func_500();
}

bool func_950()
{
	iVar0 = func_1217();
	if (does_entity_exist(iVar0))
	{
		return true;
	}
	return false;
}

void func_951()
{
	iVar0 = func_1217();
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	delete_object(&iVar0);
	func_1218(0);
}

void func_952(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

int func_953(int iParam0)
{
	iParam0 = func_498(iParam0);
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

int func_954(int iParam0)
{
	iParam0 = func_498(iParam0);
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

int func_955(int iParam0)
{
	iParam0 = func_498(iParam0);
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

void func_956(int iParam0)
{
	iParam0 = func_498(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1219(&uVar0, &uVar1, &uVar2);
	func_1220(iParam0, uVar0);
	func_1221(iParam0, uVar1);
	func_1222(iParam0, uVar2);
	func_1223(iParam0, 1);
	func_1224(iParam0, 1);
}

void func_957(int iParam0)
{
	iParam0 = func_498(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1225(iParam0, 1);
}

void func_958(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_498(iParam0);
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

bool func_959(int iParam0)
{
	iParam0 = func_498(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return func_986(iParam0, 1);
}

struct<2> func_960(int iParam0)
{
	iParam0 = func_498(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_1226(iParam0, &uVar2))
	{
	}
	if (!func_1227(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_961()
{
	if (func_1228(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_1228(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_1228(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_1228(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_1228(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_1228(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_962(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_1229(iParam0);
	func_1230(iParam0, uParam1);
	func_1231(iParam0);
	func_1232(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_1233(iParam0, iParam3, 0);
	}
	_update_ped_variation(iParam0, false, true, true, true, true);
}

void func_963(int iParam0)
{
	iParam0 = func_498(iParam0);
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

int func_964(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar5 = 0;
	if (!is_entity_dead(iParam0))
	{
		switch (*uParam4)
		{
			case 0:
				if (bParam8 && is_ped_on_mount(iParam0))
				{
					vVar0 = { func_660(iParam0, iParam1, sParam2, sParam3, 0) };
					if (!func_79(vVar0))
					{
						if (func_661(get_entity_coords(iParam0, true, false), get_entity_coords(iParam0, true, false) + get_entity_forward_vector(iParam0), vVar0))
						{
							iVar5 = 131072;
						}
						else
						{
							iVar5 = 262144;
						}
					}
					task_dismount_animal(iParam0, iVar5, 0, 0, 0, 0);
					*uParam4 = 1;
				}
				else
				{
					if (bParam6)
					{
						_0x4820a6939d7cef28(Global_35, 0);
						_hide_ped_weapons(Global_35, 2, false);
					}
					open_sequence_task(&iVar4);
					if (bParam6)
					{
						task_swap_weapon(0, 0, 0, 0, 0);
					}
					if (_is_ped_carrying(iParam0))
					{
						iVar6 = _get_first_entity_ped_is_carrying(iParam0);
						task_place_carried_entity_at_coord(0, iVar6, get_entity_coords(iParam0, true, false), 2f, 8);
					}
					task_enter_anim_scene(0, iParam1, sParam2, sParam3, iParam5, bParam7, 0, 20000, -1082130432);
					func_171(iParam0, &iVar4, 0, 0, 1, 1);
					*uParam4 = 2;
				}
				break;
			case 1:
				if (!is_ped_on_mount(iParam0))
				{
					iVar3 = _get_last_mount(iParam0);
					if (!is_entity_dead(iVar3))
					{
						_task_smart_flee_style_ped(iVar3, iParam0, 6, 0, 4f, -1, 0);
					}
					if (bParam6)
					{
						_0x4820a6939d7cef28(Global_35, 0);
						_hide_ped_weapons(Global_35, 2, false);
					}
					open_sequence_task(&iVar4);
					if (bParam6)
					{
						task_swap_weapon(0, 0, 0, 0, 0);
					}
					task_enter_anim_scene(0, iParam1, sParam2, sParam3, iParam5, bParam7, 0, 20000, -1082130432);
					func_171(iParam0, &iVar4, 0, 0, 1, 1);
					*uParam4 = 2;
				}
				break;
			case 2:
				if (bParam7)
				{
					if (_0x3ab6c7b0bb0df4b1(iParam0, iParam1))
					{
						return 1;
					}
				}
				else if (func_169(iParam0, 242628503))
				{
					if (!bParam6 || get_sequence_progress(iParam0) > 0)
					{
						if (_0x23e33cb9f4a3f547(iParam1, sParam3))
						{
							if (!_0x3b393716c3fd8237(iParam0) && _0x337f1cc8ee895601(iParam1, sParam2))
							{
								*uParam4 = 3;
								return 1;
							}
						}
					}
				}
				break;
			case 3:
				return 1;
		}
	}
	return 0;
}

bool func_965(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

void func_966(int iParam0, var uParam1, int iParam2)
{
	if (uParam1->f_3 != 0)
	{
		open_sequence_task(&iVar0);
		if (uParam1->f_5)
		{
			task_set_blocking_of_non_temporary_events(0, false);
		}
		if (!is_ped_active_in_scenario(iParam0, 0))
		{
			task_turn_ped_to_face_entity(0, Global_35, 2000, -1082130432, -1082130432, -1082130432);
		}
		if (does_entity_exist(iParam2))
		{
			if (!is_entity_dead(iParam2))
			{
				if (uParam1->f_3 != 3)
				{
					task_mount_animal(0, iParam2, 20000, -1, 1f, 1, 0, 0);
				}
			}
		}
		switch (uParam1->f_3)
		{
			case 1:
				task_wander_standard(0, 40000f, 0);
				break;
			case 2:
				_task_move_in_traffic(0, -1082130432, 0, 0);
				break;
			case 3:
				set_ped_flee_attributes(iParam0, 16, true);
				_task_smart_flee_style_ped(0, Global_35, uParam1->f_1, 0, 80f, -1, iParam2);
				break;
		}
		func_171(iParam0, &iVar0, 0, 0, 1, 1);
		set_ped_keep_task(iParam0, true);
	}
}

bool func_967(int iParam0, int iParam1)
{
	if (func_30(iParam1, 2))
	{
		return false;
	}
	if (func_30(iParam1, 131072))
	{
		if (func_30(iParam1, 16))
		{
			if (func_682(iParam0, 2093245709))
			{
				return false;
			}
		}
		if (func_30(iParam1, 65536))
		{
			return false;
		}
		return true;
	}
	return false;
}

bool func_968(int iParam0)
{
	if (func_333(&(iParam0->f_459)))
	{
		if (func_343(&(iParam0->f_459), iParam0->f_471))
		{
			iParam0->f_471 = 0f;
			func_334(&(iParam0->f_459));
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_969(int iParam0, int iParam1)
{
	if (func_320(iParam0->f_7, &(iParam0->f_243), &iVar0, 0))
	{
		if (iParam1 == 0 || iParam1 == iVar0)
		{
			return true;
		}
	}
	return false;
}

int func_970(bool bParam0)
{
	if (bParam0)
	{
		iVar0 = func_1234(1, 0, 0);
	}
	else
	{
		iVar0 = func_479();
	}
	return func_971(iVar0);
}

int func_971(int iParam0)
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

int func_972(int iParam0)
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

int func_973(int iParam0, int iParam1)
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

void func_974(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_517(Global_1310750[iVar0], iParam0))
		{
			if (!func_254(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_1235(iVar0) < func_1236(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_694(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

bool func_975(int iParam0)
{
	iVar0 = func_1237(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

void func_976(int iParam0)
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

void func_977(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_978()
{
	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_1238(iVar0, 128))
		{
			func_1239(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_979()
{
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_1238(iVar0, 128) && func_1238(iVar0, 1))
		{
			func_1239(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_980(float fParam0)
{
	iVar0 = floor((fParam0 * 1000f));
	if (Global_1393237->f_3 < (get_game_timer() + iVar0))
	{
		Global_1393237->f_3 = (get_game_timer() + iVar0);
	}
}

void func_981()
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_122(iVar0, 16777216))
		{
			if (!func_1240(iVar0))
			{
				func_1001(iVar0, 4096);
			}
		}
		iVar0++;
	}
}

void func_982(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = ((iParam1 + (60 * iParam2)) + (3600 * iParam3));
	iVar1 = (iVar0 / 2);
	iVar2 = (iVar1 / 60);
	iVar3 = (iVar1 - iVar2 * 60);
	iVar4 = 0;
	switch (iParam0)
	{
		case 0:
			func_85(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_85(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_85(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_85(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_85(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_85(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_983(float fParam0, bool bParam1, bool bParam2)
{
	fVar0 = func_709();
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

int func_984(int iParam0)
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

int func_985(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

bool func_986(int iParam0, int iParam1)
{
	iParam0 = func_498(iParam0);
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

void func_987(var uParam0)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1242(func_1241(255), 109029619));
	}
	else if (func_629())
	{
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_16();
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_988(int iParam0)
{
	iParam0 = func_498(iParam0);
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

void func_989(var uParam0, bool bParam1)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1242(func_1241(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_629())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_16())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (compare_strings(sVar0, "", false, -1) != 0)
		{
			set_blip_name_from_text_file(*uParam0, sVar0);
		}
	}
}

int func_990(int iParam0)
{
	iParam0 = func_498(iParam0);
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

float func_991(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

float func_992(int iParam0)
{
	iParam0 = func_498(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_953(iParam0);
	if (!is_model_valid(iVar0))
	{
		return -1f;
	}
	iVar1 = func_988(iParam0);
	iVar2 = get_default_max_attribute_rank(iVar0, 7);
	fVar3 = _0xeb67d4e056c85a81(iVar1);
	fVar4 = _0x78d8c1d4eb80c588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_988(iParam0) + 1;
	fVar6 = func_1243(iParam0);
	fVar7 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar1));
	fVar8 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_494(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_993(int iParam0)
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

void func_994(int iParam0)
{
	_set_blip_flash_style(iParam0, 673950256);
	_set_blip_flash_style(iParam0, 561559387);
	_set_blip_flash_style(iParam0, -201249929);
}

bool func_995(int iParam0)
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

bool func_996(int iParam0)
{
	return func_1244(iParam0, 2);
}

int func_997(int iParam0)
{
	if (!func_1245(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

void func_998(int iParam0, int iParam1)
{
	if (!func_1246(iParam0))
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

int func_999()
{
	return &Global_1899515;
}

void func_1000(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_1247(*iParam0);
	iVar1 = func_1248(*iParam0);
	iVar2 = func_1249(*iParam0);
	iVar3 = func_712(*iParam0);
	iVar4 = func_1018(*iParam0);
	iVar5 = func_1250(*iParam0);
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
	iVar6 = func_1251(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_1251(iVar1, iVar0);
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
	func_1252(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_1001(int iParam0, int iParam1)
{
	if (!func_243(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_1 = ((*Global_1310750)[iParam0]->f_1 - ((*Global_1310750)[iParam0]->f_1 && iParam1));
}

int func_1002(int iParam0)
{
	if (!func_730(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_20;
}

bool func_1003(int iParam0)
{
	return (Global_1310750->f_16074 && iParam0) != 0;
}

bool func_1004()
{
	return Global_1894899 & 2 != 0;
}

struct<4> func_1005()
{
	return Var0;
}

bool func_1006(int iParam0, int iParam1)
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

bool func_1007(int iParam0, int iParam1)
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

bool func_1008(int iParam0, int iParam1)
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
	if (!func_1006(iParam0, iVar0))
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

void func_1009(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

bool func_1010()
{
	if (func_1253())
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

void func_1011(var uParam0, var uParam1)
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

int func_1012(int iParam0)
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

int func_1013(int iParam0)
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

void func_1014(int iParam0)
{
	if (Global_1935630->f_38 == 0)
	{
		func_118(iParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1935630->f_34[iVar0])))
				{
					func_119(iParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

int func_1015(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

float func_1016(int iParam0)
{
	return iParam0->f_24;
}

var func_1017(int iParam0)
{
	return iParam0->f_25;
}

int func_1018(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

bool func_1019(int iParam0, int iParam1, int iParam2)
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
		iVar1 = func_1013(iParam2);
	}
	else
	{
		iVar1 = func_1035(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_1013(iParam0);
	}
	else
	{
		iVar0 = func_1035(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_30(*iParam1, 8388608))
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

float func_1020(int iParam0, int iParam1)
{
	return func_372(iParam0, iParam1, 1, 1);
}

float func_1021(int iParam0)
{
	return iParam0->f_26;
}

bool func_1022(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_372(iVar0, iParam0, 1, 1) <= 4f)
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
		if (_is_weapon_sniper(func_1254(iVar0, 0)))
		{
			if (func_1255(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_1023(int iParam0)
{
	return iParam0->f_17;
}

bool func_1024(int iParam0, int iParam1, float fParam2, float fParam3)
{
	if (iParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_30(*iParam0, 4194304))
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

int func_1025(int iParam0)
{
	return iParam0->f_18;
}

bool func_1026(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (_is_weapon_sniper(func_1254(iVar0, 0)))
		{
			if (func_1256(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_1027(int iParam0)
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

bool func_1028(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_1257(iParam0, vParam4, 0.5f))
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

int func_1029(int iParam0)
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
	if (func_1258(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_1030(int iParam0)
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

bool func_1031(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_474(iParam1))
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

bool func_1032(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_474(iParam1))
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

bool func_1033(int iParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = 40f;
	if (func_474(iParam1))
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

bool func_1034(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_420(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

int func_1035(int iParam0)
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

int func_1036(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_772(Global_35, &iVar1))
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
		fVar2 = func_372(iParam0, player_ped_id(), 0, 1);
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
		if (func_372(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

bool func_1037(int iParam0, int iParam1, bool bParam2)
{
	func_720(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_1038(iParam1, iVar0))
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
				if (!bParam2 || !func_1038(iParam1, iVar1))
				{
					if (func_420(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_1038(int iParam0, int iParam1)
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

bool func_1039(int iParam0)
{
	if (func_16())
	{
		return false;
	}
	return func_895((*Global_1347702)[58]->f_15, 1);
}

int func_1040(int iParam0)
{
	return iParam0->f_20;
}

int func_1041(int iParam0, int iParam1, bool bParam2, float fParam3)
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

int func_1042()
{
	iVar0 = func_1259();
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

int func_1043(int iParam0)
{
	if (func_90() != -1)
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
	fVar1 = func_102(absf(fVar1) < 1f, func_102(fVar1 < 0f, -1f, 1f), fVar1);
	return ceil(fVar1);
}

int func_1044(int iParam0, int iParam1, int iParam2)
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

int func_1045(int iParam0)
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

int func_1046()
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

void func_1047(int iParam0, bool bParam1, int iParam2)
{
	func_1260((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_1261(iParam0);
}

void func_1048(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), false);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), true);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_1262(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_1049(bool bParam0)
{
	bVar3 = false;
	if (func_1263(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1264(iVar5, &iVar2, &iVar0))
			{
				if (!func_278(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1265(iVar2);
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
							if (func_279(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_1042() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_1042() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_1266();
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

char* func_1050(int iParam0)
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

var func_1051(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_1267(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_1052(int iParam0, int iParam1)
{
	if (!func_1268(iParam0))
	{
		return 0;
	}
	if (!func_751())
	{
		return 0;
	}
	if (!func_1269(iParam0, &iVar0, &iVar1))
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

void func_1053(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_504(&((*uParam1)[iParam0->f_3]->f_6), 1, 1);
		if (bParam2)
		{
			func_679(iParam0, 0);
		}
	}
}

void func_1054(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_503((*uParam0)[iVar0]->f_6))
			{
				if (!bParam4 && is_bit_set(uParam0[iVar0], 11))
				{
				}
				else
				{
					func_504(&((*uParam0)[iVar0]->f_6), 1, 1);
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

bool func_1055(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_1270(iParam0, iParam1))
		{
			if (!func_30(iParam1->f_10, 1))
			{
				set_ped_config_flag(iParam0, 130, false);
				set_ped_config_flag(iParam0, 315, false);
				set_ped_config_flag(iParam0, 297, false);
				set_ped_config_flag(iParam0, 178, true);
				func_1054(uParam2, 0, 0, 1, 0);
				func_119(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_30(iParam1->f_10, 1))
		{
			func_1271(uParam2);
			set_ped_config_flag(iParam0, 130, true);
			set_ped_config_flag(iParam0, 315, true);
			set_ped_config_flag(iParam0, 297, true);
			set_ped_config_flag(iParam0, 178, false);
			func_118(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_1056(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		bVar4 = func_30(iParam4, 32);
		func_1053(iParam1, uParam2, 0);
		iVar5 = func_1272(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			set_ped_config_flag(*uParam0, 178, false);
			return true;
		}
		func_1054(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_30(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_30(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_30(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_30(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_30(iParam4, 8388608) || func_30(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_30(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_30(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_1058(iParam1, 4))
		{
			iVar6 |= 1024;
			_0xbb1e41dd3d3c6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_1058(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_30(iParam4, 67108864))
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
				iParam6 = func_1273(uParam0);
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
			if (func_30(iParam4, 268435456))
			{
				iVar8 = func_1274(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_1275(iParam1, (*uParam2)[iVar8]);
				}
			}
			if (func_1058(iParam1, 23))
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
			if (func_30(iParam4, 2) || func_30(iParam4, 16))
			{
				func_1057(*uParam0, 1, 1);
			}
			else
			{
				func_1057(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_1057(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !is_entity_dead(iParam0))
	{
		set_ped_config_flag(iParam0, 317, bParam1);
	}
}

bool func_1058(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

bool func_1059(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_1276(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_1060(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_1277(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_30(iParam10, 32), 1, 0);
			set_bit(iParam2, 1);
		}
	}
	else if (is_bit_set(*iParam2, 1))
	{
		clear_bit(iParam2, 1);
	}
}

void func_1061(int iParam0)
{
	if (func_30(iParam0, 4))
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
	if (func_30(iParam0, 16384))
	{
		disable_control_action(0, -485697785, false);
	}
	if (func_30(iParam0, 8))
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
	}
}

bool func_1062(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	iVar1 = func_1278(1);
	bVar2 = is_bit_set(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = is_ped_on_foot(Global_35);
	bVar10 = is_ped_injured(*uParam0);
	bVar11 = (((_is_ped_carrying(Global_35) || func_1279(Global_35)) || func_1280(Global_35)) || func_1281(Global_35));
	fVar12 = -1f;
	if (func_333(&(iParam1->f_13)))
	{
		fVar12 = func_589(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((*uParam4)[iVar0]->f_8 != iParam12)
		{
			iParam12 = (*uParam4)[iVar0]->f_8;
		}
		bVar4 = func_503((*uParam4)[iVar0]->f_6);
		func_1282(*uParam0, (*uParam4)[iVar0], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (is_bit_set(uParam4[iVar0], 20))
		{
			bVar3 = true;
		}
		if (func_1283(*uParam0, iParam1, (*uParam4)[iVar0], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_1284(iParam12, (*uParam4)[iVar0]->f_6))
				{
					if (!bVar7)
					{
						func_1054(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_576(uParam4, 0, 0);
					}
					if (is_bit_set(uParam4[iVar0], 11))
					{
						func_1053(iParam1, uParam4, is_bit_set(*iParam1, 6));
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
					if (func_1285(iParam1, fParam6, iParam1->f_9))
					{
						func_341(&(iParam1->f_18));
						if (bVar6)
						{
							func_576(uParam4, 0, 0);
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
		func_1286(iParam1, fParam2);
	}
	return bVar5;
}

void func_1063(var uParam0)
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

void func_1064(int* iParam0, var uParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_1287((*uParam1)[iVar0]))
		{
			if (is_bit_set(uParam1[iVar0], 20))
			{
				func_1286(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_1065(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!is_control_pressed(0, -124244224))
		{
			if (func_1288(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_1289(iParam1, 0);
				func_1053(iParam1, uParam2, func_1058(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_1066(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_341(&(iParam1->f_18));
			return false;
		}
		else if (func_333(&(iParam1->f_18)))
		{
			func_334(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_333(&(iParam1->f_18)))
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
	return func_422(&(iParam1->f_18), fParam2);
	return true;
}

void func_1067(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_1282(iParam0, (*uParam2)[iVar0], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_1068(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

int func_1069(int* iParam0)
{
	if (func_1058(iParam0, 0))
	{
		if (func_1290(iParam0))
		{
			func_1068(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

void func_1070(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_1071(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_1291(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_1292(iParam0))
	{
		return false;
	}
	if (func_1293(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_1176(iParam0, 1)) || func_1294(32768))
	{
		if (!func_1176(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_1295())
	{
		return false;
	}
	return true;
}

void func_1072(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_1073(int iParam0, float fParam1, bool bParam2)
{
	bVar0 = (_0x9c54041bb66bcf9e(iParam0->f_7, iParam0->f_87) && is_ped_active_in_scenario(iParam0->f_7, 0));
	bVar1 = fParam1 < 1.25f;
	if (bVar0 && bVar1)
	{
		if (!func_333(&(iParam0->f_465)))
		{
			func_341(&(iParam0->f_465));
		}
		if (!bParam2 || func_343(&(iParam0->f_465), 3f))
		{
			return true;
		}
	}
	else if (func_333(&(iParam0->f_465)))
	{
		func_334(&(iParam0->f_465));
	}
	return false;
}

bool func_1074(int iParam0, int iParam1)
{
	if (func_169(iParam0->f_7, 242628503))
	{
		if (!get_sequence_progress(iParam0->f_7) > iParam1)
		{
			return false;
		}
	}
	if (((iParam0->f_523 == 5 || iParam0->f_523 == 6) || iParam0->f_523 == 7) || iParam0->f_523 == 4)
	{
		if (func_205(Global_35, 0))
		{
			return false;
		}
	}
	if (is_ped_active_in_scenario(iParam0->f_7, 1))
	{
		return _0x916b8e075abc8b4e(iParam0->f_7, 0);
	}
	else if (is_ped_facing_ped(iParam0->f_7, Global_35, 45f))
	{
		return true;
	}
	return false;
}

void func_1075(int iParam0)
{
	if (!func_13(iParam0, 63) && !func_13(iParam0, 50))
	{
		if (func_1296(iParam0->f_523))
		{
			func_72(iParam0, 63);
			iParam0->f_284.f_21[0]->f_13 = "";
			func_332(&(iParam0->f_284), 0, 1);
			func_381(&(iParam0->f_284), 0, func_380(8));
			return;
		}
	}
}

bool func_1076(int iParam0)
{
	if (func_322(iParam0->f_7, 0, 1, 0) == -1569615261)
	{
		if (func_1073(iParam0, vdist(Global_36, get_entity_coords(iParam0->f_7, true, false)), 0))
		{
			return true;
		}
	}
	return false;
}

bool func_1077(int iParam0)
{
	if (is_ped_still(iParam0->f_7))
	{
		if (!func_208(Global_35, iParam0->f_7, 1.25f, 1))
		{
			return true;
		}
	}
	return false;
}

int func_1078(int iParam0, var uParam1, int iParam2)
{
	task_turn_ped_to_face_entity(iParam0, uParam1, iParam2, 3f, 0.25f, -1082130432);
	return 1;
}

bool func_1079(int iParam0, bool bParam1)
{
	if (bParam1 && !func_503(iParam0))
	{
		return false;
	}
	return !func_1244(iParam0, 4);
}

void func_1080(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_503(iParam0))
	{
		return;
	}
	iVar0 = func_737(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(2, sParam1, sParam2));
}

void func_1081(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_503(iParam0))
	{
		return;
	}
	iVar0 = func_737(iParam0);
	if (bParam1)
	{
		func_1297(iParam0, 4);
		func_1298(iVar0, 1);
		func_1299(iVar0, 1);
	}
	else
	{
		func_1300(iParam0, 4);
		func_1299(iVar0, 0);
	}
}

void func_1082(int iParam0, int iParam1)
{
	_journal_write_entry(iParam0);
	if (iParam1 == 1)
	{
		func_1301(1);
	}
}

void func_1083(int iParam0)
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
			func_1082(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_1301(1);
	}
}

bool func_1084(var uParam0)
{
	return func_301(uParam0->f_284.f_73, 1);
}

bool func_1085(var uParam0)
{
	if (_0x569f1e1237508deb(uParam0->f_7) == -1904017806 || _0x569f1e1237508deb(uParam0->f_7) == 494354620)
	{
		return true;
	}
	return false;
}

bool func_1086(var uParam0)
{
	if (func_13(uParam0, 59))
	{
		if (!is_entity_playing_anim(uParam0->f_7, func_140(43, 1), "HEY_N_HERBALIST", 1))
		{
			return true;
		}
	}
	else if (!func_205(uParam0->f_7, 1))
	{
		return true;
	}
	return false;
}

void func_1087(var uParam0, int iParam1)
{
	func_73(uParam0, 27);
	func_196(uParam0, 131072);
	func_72(uParam0, iParam1);
	func_395(uParam0, 5f, 0);
	uParam0->f_205 = 5;
}

bool func_1088(var uParam0)
{
	if (func_13(uParam0, 59))
	{
		if (!func_391(uParam0->f_7, *uParam0, "YARROW_RETURN_A_UPPER", "GCURRANT_RETURN_A_UPPER", "VSNOWDROP_RETURN_A_UPPER", "HBSAGE_RETURN_A", 1, 1))
		{
			return true;
		}
	}
	else if (!func_205(uParam0->f_7, 1))
	{
		return true;
	}
	return false;
}

bool func_1089()
{
	return !&Global_1911774;
}

void func_1090(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_1091(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
				Jump @229; //curOff = 58
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
					Jump @229; //curOff = 139
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @229; //curOff = 162
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @229; //curOff = 185
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

char* func_1092(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

bool func_1093(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_845(iParam0))
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return false;
	}
	if (!func_612(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!_0xb4158c8c9a3b5dce(func_282(bParam4), iParam0, iParam1, iParam2))
	{
		return false;
	}
	return true;
}

void func_1094(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_90() == -1)
	{
		if (func_874(43))
		{
			if (func_538(iParam0, 412399755))
			{
				func_1149(-1791518714);
				if (func_1150() == 0)
				{
					func_510(0, 10);
					iVar0 = func_1302(iParam0, iParam1, 1);
					if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
					{
						if (func_1152(iParam0) < func_1153(iParam0))
						{
							func_880(43, iParam0, iParam1, -1791518714, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_874(44))
		{
			if (func_538(iParam0, 709057512))
			{
				func_1149(-2087881550);
				if (func_1150() == 1)
				{
					func_510(0, 10);
					iVar0 = func_1302(iParam0, iParam1, 2);
					if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
					{
						if (func_1152(iParam0) < func_1153(iParam0))
						{
							func_880(43, iParam0, iParam1, -2087881550, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_874(45))
		{
			if (func_538(iParam0, -1478961327))
			{
				func_1149(1908068621);
				if (func_1150() == 2)
				{
					func_510(0, 10);
					iVar0 = func_1302(iParam0, iParam1, 4);
					if (((iParam0 == 2116770557 || iParam0 == -651064726) || iParam0 == -404270094) || iParam0 == 2093126853)
					{
						if (func_1152(iParam0) < func_1153(iParam0))
						{
							func_880(43, iParam0, iParam1, 1908068621, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_874(46))
		{
			if (func_538(iParam0, -1238404098))
			{
				func_1149(1611247019);
				if (func_1150() == 3)
				{
					func_510(0, 10);
					iVar0 = func_1302(iParam0, iParam1, 8);
					if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
					{
						if (func_1152(iParam0) < func_1153(iParam0))
						{
							func_880(43, iParam0, iParam1, 1611247019, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_874(47))
		{
			if (func_538(iParam0, 1160548794))
			{
				func_1149(1319635688);
				if (func_1150() == 4)
				{
					func_510(0, 10);
					iVar0 = func_1302(iParam0, iParam1, 16);
					if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
					{
						if (func_1152(iParam0) < func_1153(iParam0))
						{
							func_880(43, iParam0, iParam1, 1319635688, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

bool func_1095(int iParam0)
{
	return func_279(iParam0) == -427144552;
}

bool func_1096(int iParam0)
{
	if (func_90() != -1)
	{
		return false;
	}
	if (func_883(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_1102(iParam0, &uVar0, 1, 0, 0);
	}
	return func_137(iParam0, 1, 0);
}

void func_1097(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_279(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_887(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_363(iVar0))
	{
		if (func_90() == -1)
		{
			func_888(iVar0);
		}
		if (bParam2 || (!has_ped_got_weapon(Global_35, iVar0, 0, false) && func_136(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_859(iParam0, iParam1, 0, 0, 0);
				play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_1098(int iParam0, int iParam1)
{
	if (func_538(iParam0, 58855631))
	{
		func_1303(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

int func_1099(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	if (!func_612(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_282(bParam3), iParam0);
}

int func_1100(int iParam0, bool bParam1)
{
	if (func_846(iParam0))
	{
		return get_ped_ammo_by_type(Global_35, iParam0);
	}
	return _0xe787f05dfc977bde(func_282(bParam1), iParam0, 0);
}

bool func_1101()
{
	if (func_90() != -1)
	{
		return false;
	}
	if (!func_751())
	{
		return false;
	}
	if (!func_895((*Global_1835011)[1]->f_1, 1))
	{
		return true;
	}
	if ((func_895((*Global_1835011)[2]->f_1, 1) && func_895((*Global_1347702)[120]->f_15, 1)) && !func_895((*Global_1835011)[4]->f_1, 1))
	{
		return true;
	}
	if (func_895((*Global_1835011)[37]->f_1, 1) && !func_895((*Global_1835011)[39]->f_1, 1))
	{
		return true;
	}
	if (func_895((*Global_1835011)[57]->f_1, 1) && !func_895((*Global_1835011)[60]->f_1, 1))
	{
		return true;
	}
	if (func_895((*Global_1835011)[26]->f_1, 1) && !func_895((*Global_1347702)[67]->f_15, 1))
	{
		return true;
	}
	if ((func_895((*Global_1835011)[62]->f_1, 1) && func_895((*Global_1835011)[63]->f_1, 1)) && !func_895((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if (func_895((*Global_1835011)[75]->f_1, 1) && !func_895((*Global_1347702)[1]->f_15, 1))
	{
		return true;
	}
	if (func_895((*Global_1835011)[76]->f_1, 1) && !func_895((*Global_1835011)[77]->f_1, 1))
	{
		return true;
	}
	if ((func_895((*Global_1835011)[40]->f_1, 1) && func_895((*Global_1835011)[41]->f_1, 1)) && !func_895((*Global_1835011)[44]->f_1, 1))
	{
		return true;
	}
	if ((func_895((*Global_1835011)[62]->f_1, 1) && func_895((*Global_1835011)[63]->f_1, 1)) && !func_895((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if ((func_895((*Global_1835011)[65]->f_1, 1) && func_895((*Global_1835011)[66]->f_1, 1)) && !func_895((*Global_1835011)[67]->f_1, 1))
	{
		return true;
	}
	return false;
}

bool func_1102(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1304(&iParam0);
	if (!func_278(iParam0, 0))
	{
		return false;
	}
	if (!func_612(0))
	{
		bParam3 = true;
	}
	if (func_1095(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_one_handed(iParam0))
		{
			Var0 = { func_541(0) };
			Var4.f_9 = -1591664384;
			if (!func_608(iParam0, &Var0, 1728382685, 0))
			{
				return false;
			}
			else if (func_609(iParam0, &Var4, 1728382685))
			{
				return false;
			}
			if (func_838(iParam0, 1))
			{
				if (!func_608(iParam0, &Var0, -649335959, 0))
				{
					return false;
				}
				else if (func_609(iParam0, &Var4, -649335959))
				{
					return false;
				}
			}
		}
		else if (!func_1305(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_1099(iParam0, uParam1, bParam3, bParam4);
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
		iVar28 = func_843(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = _0xe787f05dfc977bde(func_282(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_1103(int iParam0, int iParam1)
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

int func_1104()
{
	return _0x62cab7db62ead434(-2076669067, 0);
}

int func_1105(int iParam0)
{
	return _0xec3959e9950bf56b(iParam0);
}

void func_1106(int iParam0)
{
	if (func_90() != -1)
	{
		return;
	}
	iVar0 = func_1306(iParam0);
	fVar1 = func_1307(iParam0);
	if ((Global_1347477->f_117 || !func_884(31)) || !func_1308(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_1309(iVar0) >= 7)
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
	func_1310(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_1051(_create_var_string(6, func_1311(iParam0), fVar1), "itemtype_textures", func_1312(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

bool func_1107(int iParam0)
{
	iVar0 = func_1132(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_1108(int iParam0)
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

int func_1109(int iParam0, int iParam1)
{
	if (!func_1194(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_int(&uVar5, &Var0);
	return uVar5;
}

char* func_1110(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_879() >= 12)
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_POSTED_OBJ", func_1313(), 12);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_FOUND_OBJ", func_1314(), 12);
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
			else if (func_1145() >= 30)
			{
				sParam3 = _create_var_string(2, "COL_DB_POSTED_OBJ", func_1315(), 30);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_DB_FOUND_OBJ", func_1145(), 30);
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
				sParam3 = _create_var_string(2, "COL_LF_CAUGHT_OBJ", func_1316(), 13);
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
			else if (func_1146() >= 10)
			{
				sParam3 = _create_var_string(2, "COL_RC_POSTED_OBJ", func_1317(), 10);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_RC_FOUND_OBJ", func_1146(), 10);
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
				sParam3 = _create_var_string(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_1109(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_1111(int iParam0, int iParam1, int iParam2)
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

bool func_1112(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_add_entry_hash(3, iParam1, vParam2, get_hash_key(sParam5), get_hash_key(sParam6), 0);
	}
	return true;
}

bool func_1113(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	_uilog_add_or_update_objective(3, iParam1, get_hash_key(sParam2), sParam2, false, false, false);
	_uilog_set_entry_pinned(3, iParam1, true);
	_uilog_set_entry_brief_texture(3, iParam1, get_hash_key(sParam4), get_hash_key(sParam5));
	_uilog_set_entry_icon_texture(3, iParam1, iParam6, iParam7);
	_uilog_update_entry_subheader(3, iParam1, _create_var_string(2, sParam3));
	return true;
}

bool func_1114(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_1318(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_137(iVar2, 1, 0) || func_1320(func_1319(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1118(func_1318(iVar0))), func_1118(func_1318(iVar0)), bVar1, true, false);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1145() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1321(iVar0)), func_1321(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1315() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1321(iVar0)), func_1321(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1321(iVar0)), func_1321(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_1156(iParam3, func_1322(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1152(iVar2) - iParam7) >= func_1109(iParam3, func_1323(iVar0));
				}
				else
				{
					bVar1 = func_1152(iVar2) >= func_1109(iParam3, func_1323(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_1152(iVar2) + iParam7) >= func_1109(iParam3, func_1323(iVar0));
			}
			else
			{
				bVar1 = func_1152(iVar2) >= func_1109(iParam3, func_1323(iVar0));
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1324(iVar2)), func_1324(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1325(_0x126cbebba46693cf(iVar0, 1995362678, 0)))
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
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1326(_0x126cbebba46693cf(iVar0, iParam2, 0))), func_1326(_0x126cbebba46693cf(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1146() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1327(iVar0)), func_1327(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1317() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1327(iVar0)), func_1327(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1327(iVar0)), func_1327(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_1156(iParam3, func_1322(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1152(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1328(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1328(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1329(iVar2)), func_1329(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_1115(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_1316() >= 13)
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

bool func_1116(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_725(func_1330(0)) && ((func_1331(0) == 1 || func_1331(0) == 8) || func_1331(0) == 6))
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

var func_1117(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

char* func_1118(int iParam0)
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

var func_1119(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

bool func_1120(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_1121(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_1122(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	set_bit(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_1123(int iParam0)
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
			func_1332(1);
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
			func_1333(1);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_1333(2);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_1333(3);
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
			func_1334(1);
			break;
		case 34:
			func_1335(1);
			break;
		case 35:
			func_1336(1);
			break;
		case 36:
			break;
		case 37:
			func_1337(0);
			break;
		case 38:
			func_1338(0);
			break;
		case 39:
			func_1339(0);
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
			if ((!&Global_1879534 && func_751()) && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_1119("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_810(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_751()) && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_1119("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_810(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_751()) && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_1119("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_810(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_751()) && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_1119("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_810(589, 0);
			break;
		case 24:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			if (func_90() == -1)
			{
				if (!func_1186(99217379) || func_1340(99217379) == 2110595215)
				{
					if (func_16())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = 899611344;
					}
					if (!func_137(iVar0, 1, 0))
					{
						func_931(iVar0, 1, 752097756);
					}
					func_910(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_90() == -1)
			{
				if (!func_137(1013902307, 1, 0))
				{
					func_931(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_90() == -1)
			{
				if (!func_137(1013902307, 1, 0))
				{
					func_931(1013902307, 1, 752097756);
				}
				if (!func_137(142640135, 1, 0))
				{
					func_931(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_90() == -1)
			{
				if (!func_137(786809402, 1, 0))
				{
					func_931(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_90() == -1)
			{
				if (!func_137(786809402, 1, 0))
				{
					func_931(786809402, 1, 752097756);
				}
				if (!func_137(-518019409, 1, 0))
				{
					func_931(-518019409, 1, 752097756);
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
			func_1341();
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

bool func_1124(int iParam0)
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

void func_1125(int iParam0)
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
	iVar2 = func_711();
	func_1000(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	decor_set_int(Global_35, sVar1, iVar2);
}

int func_1126(int iParam0)
{
	if (func_1342(iParam0))
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

int func_1127(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_0x705be297eebdb95d(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			if (!func_884(50))
			{
				if (!func_884(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_884(51))
			{
				if (!func_884(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_1128()
{
	return _unlock_is_unlocked(-121456797);
}

bool func_1129(int iParam0, int iParam1, var uParam2)
{
	if (!func_278(iParam1, 0))
	{
		return false;
	}
	if (func_279(iParam1) != -1037537535)
	{
		return false;
	}
	bVar1 = func_90() != -1;
	iVar2 = _get_metaped_type(iParam0);
	if (func_840(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_1343(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_538(iParam1, 866047851))
	{
		iVar5 = func_1164(iVar4, 1);
		if (func_1344(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5] != iVar8)
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
			iVar3 = func_840(&(Global_1946804->f_1497.f_1[iVar5]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745;
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5] != &Global_1946804->f_57[iVar5] && func_538(iParam1, -1638171711))
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
			if (func_1345(1868067663, &uVar0))
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
				iVar10 = func_1346(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1346(&(Global_1946804->f_1497.f_1[iVar5]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_840(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6] && func_538(&(Global_1946804->f_1497.f_1[iVar5]), -1638171711))
				{
					*uParam2 = -357399012;
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != &Global_1946804->f_57[iVar6] && func_1347(&(Global_1946804->f_1497.f_1[iVar5])))
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

void func_1130()
{
	_0xfe7c9cf376d23342(player_id(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_1131()
{
	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	set_player_health_recharge_multiplier(player_id(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	_0x08e22898a6af4905(player_id(), (1f - fVar0));
	_0xfeca17cf3343694b(player_id(), (1f - fVar0));
	_0xbbadfb5e5e5766fb(player_id(), (1f - fVar1));
}

int func_1132(int iParam0)
{
	if (!func_725(iParam0))
	{
		return -1;
	}
	return func_1348(iParam0);
}

int func_1133()
{
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_137(func_1349(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1134(int iParam0)
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

bool func_1135(int iParam0, int iParam1)
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
	if (func_137(iVar0, 1, 0) && func_137(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_1136(int iParam0)
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

bool func_1137(int iParam0, int iParam1)
{
	iVar0 = func_1350(iParam0);
	if (iVar0 != -15)
	{
		func_1000(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_1351(iVar0, 1);
	}
	return false;
}

int func_1138(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_137(1811977508, 1, 0))
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
			if (func_278(iVar25, 0) && func_538(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_1139(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_1140(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_1141(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_1142(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

char* func_1143(int iParam0)
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
	iVar1 = func_1152(iVar9);
	iVar2 = func_1152(iVar10);
	iVar3 = func_1152(iVar11);
	iVar5 = func_1153(iVar9);
	iVar6 = func_1153(iVar10);
	iVar7 = func_1153(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_1152(iVar12);
		iVar8 = func_1153(iVar12);
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

void func_1144(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_1145()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1352(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1146()
{
	return _0x5461c821d00fe15a(2103522376, 0);
}

bool func_1147(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_1328(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1328(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1328(iVar0))
		{
			*iParam2++;
		}
		if (func_1328(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_1328(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1328(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1328(iVar0))
		{
			*iParam2++;
		}
		if (func_1328(iVar1))
		{
			*iParam2++;
		}
		if (func_1328(iVar0) && func_1328(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_1328(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1328(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1328(iVar0))
		{
			*iParam2++;
		}
		if (func_1328(iVar1))
		{
			*iParam2++;
		}
		if (func_1328(iVar2))
		{
			*iParam2++;
		}
		if ((func_1328(iVar0) && func_1328(iVar1)) && func_1328(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1328(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1328(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1328(iVar0))
		{
			*iParam2++;
		}
		if (func_1328(iVar1))
		{
			*iParam2++;
		}
		if (func_1328(iVar2))
		{
			*iParam2++;
		}
		if (func_1328(iVar3))
		{
			*iParam2++;
		}
		if (((func_1328(iVar0) && func_1328(iVar1)) && func_1328(iVar2)) && func_1328(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_1148(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_1353(1497516462);
			func_1354(2016141805);
			func_1354(1010885152);
			func_1354(-502324015);
			break;
		case 2016141805:
			func_1354(1497516462);
			func_1353(2016141805);
			func_1354(1010885152);
			func_1354(-502324015);
			break;
		case 1010885152:
			func_1354(1497516462);
			func_1354(2016141805);
			func_1353(1010885152);
			func_1354(-502324015);
			break;
		case -502324015:
			func_1354(1497516462);
			func_1354(2016141805);
			func_1354(1010885152);
			func_1353(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_1354(-538889627);
			func_1354(-538880323);
			func_1354(-1056767524);
			func_1353(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_1355();
			func_1353(iParam0);
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
			func_1356();
			func_1353(iParam0);
			break;
		case 2019386373:
			func_1354(-664252410);
			func_1354(2109952320);
			func_1353(2019386373);
			break;
		case -664252410:
			func_1354(2019386373);
			func_1354(2109952320);
			func_1353(-664252410);
			break;
		case 2109952320:
			func_1354(2019386373);
			func_1354(-664252410);
			func_1353(2109952320);
			break;
		case -1674179981:
			func_1354(-1835851517);
			func_1354(-1838352012);
			func_1353(-1674179981);
			break;
		case -1835851517:
			func_1354(-1674179981);
			func_1354(-1838352012);
			func_1353(-1835851517);
			break;
		case -1838352012:
			func_1354(-1674179981);
			func_1354(-1835851517);
			func_1353(-1838352012);
			break;
		case -1717960576:
			func_1354(210001842);
			func_1353(-1717960576);
			break;
		case 210001842:
			func_1354(-1717960576);
			func_1353(210001842);
			break;
		case -150493654:
			func_1354(-1271608261);
			func_1354(1846061697);
			func_1354(-1145519186);
			func_1353(-150493654);
			break;
		case -1271608261:
			func_1354(-150493654);
			func_1354(1846061697);
			func_1354(-1145519186);
			func_1353(-1271608261);
			break;
		case 1846061697:
			func_1354(-150493654);
			func_1354(-1271608261);
			func_1354(-1145519186);
			func_1353(1846061697);
			break;
		case -1145519186:
			func_1354(-150493654);
			func_1354(-1271608261);
			func_1354(1846061697);
			func_1353(-1145519186);
			break;
		case 1766284049:
			func_1354(280705402);
			func_1354(1926308480);
			func_1353(1766284049);
			break;
		case 280705402:
			func_1354(1766284049);
			func_1354(1926308480);
			func_1353(280705402);
			break;
		case 1926308480:
			func_1354(1766284049);
			func_1354(280705402);
			func_1353(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_1354(439465264);
				func_1353(1609506757);
			}
			else
			{
				func_1354(1609506757);
				func_1354(439465264);
			}
			break;
		case 439465264:
			if (func_975(1609506757))
			{
				if (bParam1)
				{
					func_1353(439465264);
				}
				else
				{
					func_1354(439465264);
				}
			}
			break;
		case 1822001510:
			func_1354(-1612662716);
			func_1353(1822001510);
			break;
		case -1612662716:
			func_1354(1822001510);
			func_1353(-1612662716);
			break;
		case 1306158345:
			func_1354(1952610440);
			func_1354(-223469678);
			func_1354(-404698347);
			func_1354(1517904467);
			func_1353(1306158345);
			break;
		case 1952610440:
			func_1354(1306158345);
			func_1354(-223469678);
			func_1354(-404698347);
			func_1354(1517904467);
			func_1353(1952610440);
			break;
		case -223469678:
			func_1354(1306158345);
			func_1354(1952610440);
			func_1354(-404698347);
			func_1354(1517904467);
			func_1353(-223469678);
			break;
		case -404698347:
			func_1354(1306158345);
			func_1354(1952610440);
			func_1354(-223469678);
			func_1354(1517904467);
			func_1353(-404698347);
			break;
		case 1517904467:
			func_1354(1306158345);
			func_1354(1952610440);
			func_1354(-223469678);
			func_1354(-404698347);
			func_1353(1517904467);
			break;
		case 1376646519:
			func_1354(931649776);
			func_1354(-434590080);
			func_1354(1743048395);
			func_1354(449774763);
			func_1353(1376646519);
			break;
		case 931649776:
			func_1354(1376646519);
			func_1354(-434590080);
			func_1354(1743048395);
			func_1354(449774763);
			func_1353(931649776);
			break;
		case -434590080:
			func_1354(1376646519);
			func_1354(931649776);
			func_1354(1743048395);
			func_1354(449774763);
			func_1353(-434590080);
			break;
		case 1743048395:
			func_1354(1376646519);
			func_1354(931649776);
			func_1354(-434590080);
			func_1354(449774763);
			func_1353(1743048395);
			break;
		case 449774763:
			func_1354(1376646519);
			func_1354(931649776);
			func_1354(-434590080);
			func_1354(1743048395);
			func_1353(449774763);
			break;
		case -1414537028:
			func_1354(38162571);
			func_1354(1350391819);
			func_1354(54073871);
			func_1353(-1414537028);
			break;
		case 38162571:
			func_1354(-1414537028);
			func_1354(1350391819);
			func_1354(54073871);
			func_1353(38162571);
			break;
		case 1350391819:
			func_1354(-1414537028);
			func_1354(38162571);
			func_1354(54073871);
			func_1353(1350391819);
			break;
		case 54073871:
			func_1354(-1414537028);
			func_1354(38162571);
			func_1354(1350391819);
			func_1353(54073871);
			break;
		case 198200492:
			func_1353(198200492);
			func_1354(-1124061431);
			func_1354(52706132);
			func_1354(-259123672);
			break;
		case -1124061431:
			func_1354(198200492);
			func_1353(-1124061431);
			func_1354(52706132);
			func_1354(-259123672);
			break;
		case 52706132:
			func_1354(198200492);
			func_1354(-1124061431);
			func_1353(52706132);
			func_1354(-259123672);
			break;
		case -259123672:
			func_1354(198200492);
			func_1354(-1124061431);
			func_1354(52706132);
			func_1353(-259123672);
			break;
		case -919512195:
			func_1353(-919512195);
			func_1354(-1925798111);
			func_1354(420709909);
			func_1354(1703426636);
			break;
		case -1925798111:
			func_1353(-1925798111);
			func_1354(-919512195);
			func_1354(420709909);
			func_1354(1703426636);
			break;
		case 420709909:
			func_1353(420709909);
			func_1354(-919512195);
			func_1354(-1925798111);
			func_1354(1703426636);
			break;
		case 1703426636:
			func_1353(1703426636);
			func_1354(-919512195);
			func_1354(-1925798111);
			func_1354(420709909);
			break;
		case -1223121209:
			func_1353(-1223121209);
			func_1354(630808005);
			break;
		case 630808005:
			func_1353(630808005);
			func_1354(-1223121209);
			break;
		case 1453909576:
			func_1353(1453909576);
			func_1354(1643531967);
			break;
		case 1643531967:
			func_1353(1643531967);
			func_1354(1453909576);
			break;
		case 0:
			func_1353(0);
			func_1354(473295046);
			func_1354(-1738165526);
			break;
		case 473295046:
			func_1353(473295046);
			func_1354(0);
			func_1354(-1738165526);
			break;
		case -1738165526:
			func_1353(-1738165526);
			func_1354(0);
			func_1354(473295046);
			break;
		case 932909855:
			func_1353(932909855);
			func_1354(2051822093);
			break;
		case 2051822093:
			func_1353(2051822093);
			func_1354(932909855);
			break;
		case 405586984:
			func_1353(405586984);
			func_1354(1509509592);
			func_1354(-959357075);
			func_1354(-1311865656);
			break;
		case 1509509592:
			func_1353(1509509592);
			func_1354(405586984);
			func_1354(-959357075);
			func_1354(-1311865656);
			break;
		case -959357075:
			func_1353(-959357075);
			func_1354(1509509592);
			func_1354(405586984);
			func_1354(-1311865656);
			break;
		case -1311865656:
			func_1353(-1311865656);
			func_1354(1509509592);
			func_1354(-959357075);
			func_1354(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_1353(-524145696);
			}
			else
			{
				func_1354(-524145696);
			}
			func_1354(1626481264);
			func_1354(282809459);
			break;
		case 282809459:
			func_1353(282809459);
			func_1354(1626481264);
			func_1354(-524145696);
			break;
		case 1626481264:
			func_1353(1626481264);
			func_1354(-524145696);
			func_1354(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_1353(885203519);
			}
			else
			{
				func_1354(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_1353(-1080627546);
			}
			else
			{
				func_1354(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_975(iParam0))
				{
					func_1353(iParam0);
				}
			}
			else if (func_975(iParam0))
			{
				func_1354(iParam0);
			}
			break;
	}
}

void func_1149(int iParam0)
{
	if (!func_1357(iParam0))
	{
		func_1359(func_1358(iParam0));
	}
}

int func_1150()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1357(_0x126cbebba46693cf(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1151(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_1152(iVar9);
	iVar2 = func_1152(iVar10);
	iVar3 = func_1152(iVar11);
	iVar5 = func_1153(iVar9);
	iVar6 = func_1153(iVar10);
	iVar7 = func_1153(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_1152(iVar12);
		iVar8 = func_1153(iVar12);
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

int func_1152(int iParam0)
{
	if (func_137(iParam0, 1, 0))
	{
		iVar0 = func_136(iParam0, 0, 0);
	}
	return iVar0;
}

int func_1153(int iParam0)
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

int func_1154(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0);
}

void func_1155(int iParam0, int iParam1)
{
	_0x3ea62e56f386c997(iParam0, iParam1);
}

int func_1156(int iParam0, int iParam1)
{
	if (!func_1194(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

void func_1157(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_1156(iParam1, 5) || iParam0 == func_1156(iParam1, 6)) || iParam0 == func_1156(iParam1, 7)) || iParam0 == func_1156(iParam1, 8)) || iParam0 == func_1156(iParam1, 9))
	{
		func_1147(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_880(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_882(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_1158(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if ((((iParam0 == func_1156(iParam1, 5) || iParam0 == func_1156(iParam1, 6)) || iParam0 == func_1156(iParam1, 7)) || iParam0 == func_1156(iParam1, 8)) || iParam0 == func_1156(iParam1, 9))
	{
		if (func_1147(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_880(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_882(51, 0, 0, iVar0, func_1109(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_880(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_882(51, 0, 0, iVar0, func_1109(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_1159()
{
	if (func_1107((*Global_1347702)[37]->f_15) && Global_1392388->f_7)
	{
		return true;
	}
	return false;
}

void func_1160(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
}

void func_1161(int iParam0)
{
	if (!func_1360(iParam0))
	{
		_0x3ea62e56f386c997(iParam0, 1);
	}
}

void func_1162(int iParam0)
{
	_0x398fab9c96a81924(iParam0, 1);
}

int func_1163(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_1361(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_1164(int iParam0, int iParam1)
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

bool func_1165(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1362();
	if (iParam2 == 39)
	{
		Var0 = { func_606(iParam0, 1, 0) };
		iParam2 = func_1164(func_1163(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_538(iParam0, 866047851) && func_1344(&(Global_1946804->f_1378)) >= 2)
	{
		return false;
	}
	if ((func_1168(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2])
	{
		func_1363(func_1361(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_1364(iParam2);
	func_1365(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2] != &Global_1946804->f_57[iParam2] && Global_1946804->f_57[iParam2]->f_1 > 1)
	{
		func_1366(Global_1946804->f_1378.f_1[iParam2], 4, 6);
		func_1366(Global_1946804->f_1497.f_1[iParam2], 4, 6);
	}
	func_1367(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804->f_1378.f_1[iParam2]->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2] = iParam0;
	Global_1946804->f_1378.f_1[iParam2]->f_1 = func_1368(iParam0, iParam2, iParam1, func_90() != -1);
	if (bParam4)
	{
		func_1369(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_1369(&(Global_1946804->f_1378), 1, 0);
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
				func_1370(func_1361(&(Global_1946804->f_2589.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_1166(bool bParam0, bool bParam1, bool bParam2)
{
	func_1371(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

void func_1167(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_1372(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1373(Var0);
}

bool func_1168(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_1169()
{
	func_1374(&(Global_1946804->f_2776));
	func_1375(32768);
	func_1370(1108822547, 8, 6);
}

int func_1170(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_1164(iParam0, 1);
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

void func_1171(int iParam0)
{
	if (func_1376(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1377(Var0);
}

void func_1172(int iParam0, int iParam1, int iParam2)
{
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_1377(Var0);
}

float func_1173()
{
	if (func_1378())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_1379(2);
	}
	if (Global_1347477->f_119)
	{
		return func_1379(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1380();
	fVar2 = func_1381();
	fVar3 = func_1382();
	fVar4 = func_1383();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1384()));
	fVar7 = (func_1379(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1385(3, round((to_float(iVar8) * fVar10)), 0);
	func_1386(3, fVar9, fVar9 > 100f);
	return func_1387(fVar7, -100f, 100f);
}

float func_1174()
{
	if (func_1378())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_1379(1);
	}
	if (Global_1347477->f_119)
	{
		return func_1379(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1380();
	fVar2 = func_1381();
	fVar3 = func_1382();
	fVar4 = func_1383();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1384()));
	fVar7 = (func_1379(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1385(2, round((to_float(iVar8) * fVar10)), 0);
	func_1386(2, fVar9, fVar9 > 100f);
	return func_1387(fVar7, -100f, 100f);
}

float func_1175()
{
	if (func_1378())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_1379(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1388())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1389())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_1379(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1380();
	fVar2 = func_1381();
	fVar3 = func_1382();
	fVar4 = func_1383();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1384()));
	fVar7 = (func_1379(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1385(1, round((to_float(iVar8) * fVar10)), 0);
	func_1386(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_1379(0);
	}
	return func_1387(fVar7, -100f, 100f);
}

bool func_1176(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_1177(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_1178(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_278(iParam0, 0))
	{
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return 0;
	}
	if (func_1102(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return 0;
	}
	if (!func_612(0))
	{
		return 0;
	}
	if (!_0xcb5d11f9508a928d(func_282(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_1179(int iParam0, bool bParam1)
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
				return func_1390();
			}
			break;
	}
	return 0;
}

int func_1180(int iParam0)
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

bool func_1181(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_1182(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1181(iParam0))
	{
		return;
	}
	if (func_1391(iParam0))
	{
		return;
	}
	if (!func_1392(iParam0))
	{
		func_1393(iParam0, 1, 0);
	}
	iVar0 = func_1394(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_1395(iParam0, 512))
		{
			func_1167(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_1396() && !bParam1) && !func_475(0, 0, 1))
	{
		func_71(_create_var_string(10, "OUT_JOURN_DONE", _create_var_string(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_1397(iParam0, 6);
	if (bParam2)
	{
		if (!func_475(0, 0, 1))
		{
			func_510(1, 4);
		}
	}
}

int func_1183()
{
	return Global_1946804->f_1;
}

bool func_1184(int iParam0, bool bParam1)
{
	return func_1179(iParam0, 0) < func_1398(iParam0, bParam1);
}

bool func_1185(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_840(iVar1) == iParam0)
		{
			*uParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1186(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_1164(iParam0, 1)] != &Global_1946804->f_57[func_1164(iParam0, 1)];
}

void func_1187(int iParam0, int iParam1)
{
	if (func_538(iParam1, 130796156))
	{
		func_1399(iParam1, 0);
	}
	else if (func_538(iParam1, 930141731))
	{
		func_1399(iParam1, 1);
		func_1400(iParam0);
	}
}

void func_1188(var uParam0, int iParam1)
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

int func_1189(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_1401(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_1402(uParam2, iParam0, Var1);
	return 1;
}

int func_1190(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_1191(int iParam0)
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

int func_1192(int iParam0)
{
	if (!func_1403(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

bool func_1193()
{
	return false;
}

bool func_1194(int iParam0, var uParam1)
{
	if (!func_1404(iParam0))
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

bool func_1195()
{
	if (func_1128())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_1196(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1405((Global_40.f_4283.f_325 + iParam0));
}

void func_1197(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_1195())
	{
		func_1051(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_1051(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

void func_1198(int iParam0)
{
	iParam0 = func_498(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_665(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_1406(iVar6);
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

bool func_1199(int iParam0)
{
	if (!func_1407(iParam0))
	{
		return false;
	}
	if (!func_1408())
	{
		return true;
	}
	return false;
}

void func_1200(int iParam0, int iParam1)
{
	iParam0 = func_498(iParam0);
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

void func_1201(var uParam0)
{
	*uParam0 = -377364164;
	uParam0->f_1 = 357708345;
}

void func_1202(int iParam0, struct<2> Param1)
{
	iParam0 = func_498(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_1409(iParam0, Param1))
	{
	}
	if (!func_1410(iParam0, Param1.f_1))
	{
	}
}

void func_1203(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_1411((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_1204(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 57)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_1205(var uParam0)
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

void func_1206(var uParam0)
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

void func_1207(int iParam0, var uParam1)
{
	iVar0 = 100;
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_1208(int iParam0, var uParam1)
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

void func_1209(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1f;
}

void func_1210(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -15;
}

void func_1211(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
}

int func_1212(int iParam0)
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

void func_1213(int iParam0, int iParam1)
{
	_copy_memory(&(Global_1900383->f_508), Global_40.f_1095.f_1[iParam1], 436);
	_copy_memory(Global_40.f_1095.f_1[iParam1], Global_40.f_1095.f_1[iParam0], 436);
	_copy_memory(Global_40.f_1095.f_1[iParam0], &(Global_1900383->f_508), 436);
}

void func_1214(int iParam0, int iParam1)
{
	_copy_memory(&(Global_1900383->f_463), (*Global_1900383)[iParam1], 45);
	_copy_memory((*Global_1900383)[iParam1], (*Global_1900383)[iParam0], 45);
	_copy_memory((*Global_1900383)[iParam0], &(Global_1900383->f_463), 45);
}

int func_1215(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	Var29.f_9 = -1591664384;
	if (!func_1412(iParam0, &Var0))
	{
		return 0;
	}
	bVar58 = false;
	if (!func_1412(iParam1, &Var29))
	{
		bVar58 = true;
	}
	if (bVar58)
	{
		iVar59 = func_1413(iParam1);
		if (iVar59 == 0)
		{
			return 0;
		}
		if (!func_1414(Var0, Var0.f_5, iVar59, 0, 0))
		{
			return 0;
		}
	}
	else if (!func_1415(Var0, Var29, 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_1216(int iParam0)
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
	if (func_1416(iParam0))
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
	if (func_233(iParam0))
	{
		iVar3 = func_234(iParam0);
		if (func_1417(iVar3))
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

int func_1217()
{
	return Global_1900383->f_393;
}

void func_1218(int iParam0)
{
	Global_1900383->f_393 = iParam0;
}

int func_1219(var uParam0, int iParam1, var uParam2)
{
	*uParam0 = 0;
	*iParam1 = 0;
	*uParam2 = 0;
	if (func_751())
	{
		if (func_629())
		{
			bVar0 = false;
			if (!func_895((*Global_1835011)[15]->f_1, 1) && !func_884(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*uParam0 = func_1418();
				*iParam1 = func_1419();
				*uParam2 = func_1420();
				return 1;
			}
			else
			{
				*uParam0 = func_1421();
				*iParam1 = func_1422();
				*uParam2 = func_1423();
				return 1;
			}
		}
		else if (func_16())
		{
			if (!func_895((*Global_1835011)[60]->f_1, 1))
			{
				*uParam0 = func_1424();
				*iParam1 = func_1425();
				*uParam2 = func_1426();
				return 1;
			}
			else
			{
				*uParam0 = func_1427();
				*iParam1 = func_1428();
				*uParam2 = func_1429();
				return 1;
			}
		}
	}
	else if (func_629())
	{
		*uParam0 = func_1430();
		*iParam1 = func_1431();
		*uParam2 = func_1432();
		return 1;
	}
	else if (func_16())
	{
		*uParam0 = func_1433();
		*iParam1 = func_1434();
		*uParam2 = func_1435();
		return 1;
	}
	return 0;
}

void func_1220(int iParam0, var uParam1)
{
	iParam0 = func_498(iParam0);
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

void func_1221(int iParam0, var uParam1)
{
	iParam0 = func_498(iParam0);
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

void func_1222(int iParam0, var uParam1)
{
	iParam0 = func_498(iParam0);
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

void func_1223(int iParam0, int iParam1)
{
	iParam0 = func_498(iParam0);
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

void func_1224(int iParam0, int iParam1)
{
	iParam0 = func_498(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_953(iParam0);
	if (!is_model_valid(iVar0))
	{
		func_1219(&uVar1, &iVar0, &uVar2);
	}
	iVar3 = get_default_max_attribute_rank(iVar0, 7);
	if (iParam1 > iVar3)
	{
		return;
	}
	fVar4 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iParam1));
	Global_40.f_1095.f_1[iParam0]->f_372 = iParam1;
	Global_40.f_1095.f_1[iParam0]->f_372.f_1 = fVar4;
	func_1436(iParam1);
	iVar5 = func_665(iParam0);
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

void func_1225(int iParam0, int iParam1)
{
	iParam0 = func_498(iParam0);
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

bool func_1226(int iParam0, var uParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_1412(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = func_1437(Var0, 1415981582, 0);
	if (!func_278(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_1227(int iParam0, var uParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_1412(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = func_1437(Var0, -2119169513, 0);
	if (!func_278(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_1228(int iParam0, var uParam1)
{
	if (!func_1438(856287005, iParam0))
	{
		return false;
	}
	Var0 = { func_1439() };
	*uParam1 = func_1437(Var0, iParam0, 0);
	if (!func_278(*uParam1, 0))
	{
		return false;
	}
	return true;
}

void func_1229(int iParam0)
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

void func_1230(int iParam0, var uParam1)
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
	func_1440(iParam0, *uParam1);
	func_1440(iParam0, uParam1->f_1);
}

void func_1231(int iParam0)
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

void func_1232(int iParam0, var uParam1)
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
	func_1440(iParam0, *uParam1);
	func_1440(iParam0, uParam1->f_1);
	func_1440(iParam0, uParam1->f_2);
	func_1440(iParam0, uParam1->f_3);
	func_1440(iParam0, uParam1->f_4);
	func_1440(iParam0, uParam1->f_5);
}

int func_1233(int iParam0, int iParam1, bool bParam2)
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

int func_1234(int iParam0, bool bParam1, bool bParam2)
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
				if (!bParam1 || func_1441(iVar2))
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

int func_1235(int iParam0)
{
	if (func_243(iParam0))
	{
		return Global_17504.f_42[iParam0]->f_4;
	}
	return 0;
}

int func_1236(int iParam0)
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

int func_1237(int iParam0, int iParam1)
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

bool func_1238(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return false;
	}
	return (Global_1393237->f_11[iParam0]->f_10 && iParam1) != 0;
}

void func_1239(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return;
	}
	Global_1393237->f_11[iParam0]->f_10 = (Global_1393237->f_11[iParam0]->f_10 || iParam1);
}

bool func_1240(int iParam0)
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

char* func_1241(int iParam0)
{
	if (iParam0 == 255)
	{
		if (func_1442(37, iParam0))
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
	if (func_1442(37, iParam0))
	{
		return _0xd8402b858f4ddd88(&((*Global_1108178)[iParam0]->f_12), get_length_of_literal_string(&((*Global_1108178)[iParam0]->f_12)));
	}
	return get_player_name(&(Global_1225639->f_120[iParam0]));
}

char* func_1242(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_1092(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

float func_1243(int iParam0)
{
	iParam0 = func_498(iParam0);
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

bool func_1244(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

bool func_1245(int iParam0)
{
	return iParam0 > -1;
}

bool func_1246(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

int func_1247(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_673(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_1248(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_1249(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_1250(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_1251(int iParam0, int iParam1)
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

void func_1252(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1443(iParam0, iParam6);
	func_1444(iParam0, iParam5);
	func_1445(iParam0, iParam4);
	func_1446(iParam0, iParam3);
	func_1447(iParam0, iParam2);
	func_1448(iParam0, iParam1);
}

bool func_1253()
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

var func_1254(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_1255(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_1256(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_1256(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_1257(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_1258(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_1259()
{
	return Global_40.f_11095.f_35;
}

void func_1260(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_1449(bParam1);
	}
}

void func_1261(int iParam0)
{
	_0x74bcceb233ad95b2(-156028329, iParam0);
}

char* func_1262(int iParam0)
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

bool func_1263(int iParam0)
{
	if (!func_1194(23, &vVar0))
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

bool func_1264(int iParam0, int iParam1, int iParam2)
{
	if (!func_1194(23, &Var0))
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

int func_1265(int iParam0)
{
	return iParam0;
}

int func_1266()
{
	iVar0 = func_1042();
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

void func_1267(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

bool func_1268(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_1269(int iParam0, int iParam1, var uParam2)
{
	if (!func_1268(iParam0))
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

bool func_1270(int iParam0, int* iParam1)
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
		if (is_ped_in_combat(iParam0, func_1450((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_1271(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_1287((*uParam0)[iVar0]))
		{
			func_360((*uParam0)[iVar0], 14);
		}
		iVar0++;
	}
}

int func_1272(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(*uParam2)[iVar0]->f_8 = 6;
		func_1451(iParam0, (*uParam2)[iVar0], fParam3, 3, 0, 6, bParam4, 0);
		if (func_503((*uParam2)[iVar0]->f_6))
		{
			func_360((*uParam2)[iVar0], 11);
			return (*Global_1945938)[(*uParam2)[iVar0]->f_6]->f_3;
		}
	}
	return 0;
}

int func_1273(var uParam0)
{
	iVar0 = func_246(*uParam0);
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

int func_1274(var uParam0, int iParam1)
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

void func_1275(int* iParam0, int* iParam1)
{
	if (!func_1058(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_360(iParam1, 19);
			func_1289(iParam0, 23);
			func_1452(iParam1, 2);
		}
	}
}

bool func_1276(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (func_1453(16))
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
					func_1454(16);
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

void func_1277(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_1451(iParam0, (*uParam1)[iVar0], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			clear_bit((*uParam1)[iVar0], 14);
		}
		iVar0++;
	}
}

int func_1278(int iParam0)
{
	return _money_get_cash_balance();
}

bool func_1279(int iParam0)
{
	return (func_1455(iParam0, 4) || func_1455(iParam0, 5));
}

int func_1280(int iParam0)
{
	return func_1455(iParam0, 7);
}

int func_1281(int iParam0)
{
	return func_1455(iParam0, 6);
}

void func_1282(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (is_bit_set(*iParam1, 14))
	{
		if (func_1287(iParam1))
		{
			clear_bit(iParam1, 14);
			func_1451(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_1283(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_1456(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_1079(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_1081(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_1081(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_1457(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_1284(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_1458(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_1459(iParam1, 1))
	{
		func_1460(iParam1, 1);
		return true;
	}
	return false;
}

bool func_1285(int* iParam0, float fParam1, bool bParam2)
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

void func_1286(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		disable_control_action(0, 1101824977, true);
		disable_control_action(0, 966551065, true);
		disable_control_action(0, 668058244, true);
		set_ped_reset_flag(Global_35, 203, true);
	}
}

bool func_1287(int* iParam0)
{
	if (!is_string_null_or_empty(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_1288(int iParam0)
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

void func_1289(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

bool func_1290(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

bool func_1291(int iParam0, int iParam1)
{
	if (func_90() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_1292(int iParam0)
{
	if (func_90() != -1)
	{
		if (func_1176(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_1176(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_1293(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_1176(iParam0, 65536) && !func_1176(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_1176(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_1176(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1294(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_1295()
{
	return Global_1905944->f_5694;
}

bool func_1296(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 3:
			return true;
		default:
			break;
	}
	return false;
}

void func_1297(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_1298(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_1244(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_1299(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_1300(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

void func_1301(bool bParam0)
{
	if (bParam0)
	{
		func_119(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_118(&(Global_40.f_12019.f_42), 1);
	}
}

int func_1302(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_1152(iVar9);
	iVar2 = func_1152(iVar10);
	iVar3 = func_1152(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_1152(iVar12);
	}
	iVar5 = func_1153(iVar9);
	iVar6 = func_1153(iVar10);
	iVar7 = func_1153(iVar11);
	if (iParam2 != 2)
	{
		iVar8 = func_1153(iVar12);
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

int func_1303(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_278(iParam0, 0))
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

int func_1304(int iParam0)
{
	if (!func_278(*iParam0, 0))
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

bool func_1305(int iParam0, var uParam1, bool bParam2)
{
	if (!func_278(iParam0, 0))
	{
		return false;
	}
	Var0 = { func_606(iParam0, 0, 1) };
	iVar5 = 1728382685;
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_607((386 + iVar29), 1);
		if (func_608(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_609(iParam0, &Var6, iVar5);
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

int func_1306(int iParam0)
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

float func_1307(int iParam0)
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
			return func_1461(iParam0);
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
			return func_1461(iParam0);
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
			return func_1461(iParam0);
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

bool func_1308(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_884(18);
		case 2:
			return func_884(20);
		case 1:
			return func_884(19);
		default:
			break;
	}
	return true;
}

int func_1309(int iParam0)
{
	return func_1462(&(Global_40.f_11095.f_11[iParam0]));
}

void func_1310(int iParam0, float fParam1, bool bParam2)
{
	if (func_90() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_884(31))
	{
		return;
	}
	iVar0 = func_1309(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	set_attribute_points(Global_35, iParam0, floor(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_1309(iParam0);
	if (func_1463(iParam0) && func_1464(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_1465(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_1466(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!is_radar_hidden() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_810(func_1467(iParam0), 0);
					}
					func_1468(iParam0, iVar2, iVar3);
					func_1469(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = get_game_timer();
}

char* func_1311(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_1312(int iParam0)
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

int func_1313()
{
	return func_1470(Global_40.f_12019);
}

int func_1314()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_1108(iVar1);
		if (func_137(iVar2, 1, 0) || func_1320(func_1319(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1315()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1471(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1316()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_1325(_0x126cbebba46693cf(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1317()
{
	return _0x3a65f4844913a047(2103522376, 0);
}

int func_1318(int iParam0)
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

int func_1319(int iParam0)
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

bool func_1320(int iParam0)
{
	return (Global_40.f_12019 && iParam0) != 0;
}

char* func_1321(int iParam0)
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

int func_1322(int iParam0)
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

int func_1323(int iParam0)
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

char* func_1324(int iParam0)
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

bool func_1325(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

char* func_1326(int iParam0)
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

char* func_1327(int iParam0)
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

bool func_1328(int iParam0)
{
	if (func_1472(iParam0) && func_137(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_1473(iParam0) && func_1474(iParam0))
	{
		return true;
	}
	return false;
}

char* func_1329(int iParam0)
{
	if (!func_278(iParam0, 0))
	{
		return "";
	}
	return _get_label_text_by_hash(func_925(iParam0));
}

int func_1330(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

int func_1331(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

void func_1332(bool bParam0)
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

void func_1333(int iParam0)
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

void func_1334(bool bParam0)
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

void func_1335(bool bParam0)
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

void func_1336(bool bParam0)
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

void func_1337(bool bParam0)
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

void func_1338(bool bParam0)
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

void func_1339(bool bParam0)
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

int func_1340(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_1164(iParam0, 1)]);
}

void func_1341()
{
	if (!_unlock_is_unlocked(-1526891582))
	{
		func_1475();
		_unlock_set_unlocked(-1526891582, true);
		func_888(-916314281);
		func_931(-916314281, 1, 752097756);
		set_current_ped_weapon(Global_35, -916314281, true, 2, false, false);
		func_888(494733111);
		func_931(494733111, 1, 752097756);
		set_current_ped_weapon(Global_35, 494733111, true, 4, false, false);
	}
}

bool func_1342(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

int func_1343(int iParam0)
{
	Var0 = { func_606(iParam0, 1, 0) };
	return func_1163(Var0.f_4);
}

int func_1344(var uParam0)
{
	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_538(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_538(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_538(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_538(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_538(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_538(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

bool func_1345(int iParam0, var uParam1)
{
	iVar1 = func_1164(func_1476(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1946804->f_1497.f_1[iVar1] != 0 && &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1];
		if (func_840(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return true;
		}
	}
	*uParam1 = 0;
	return false;
}

int func_1346(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam0 == &Global_1946804->f_57[func_1164(iParam1, 1)])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_1168(524288))
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

bool func_1347(int iParam0)
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

int func_1348(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_1477(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_1349(int iParam0)
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

int func_1350(int iParam0)
{
	return func_1478(iParam0, -1);
}

bool func_1351(int iParam0, bool bParam1)
{
	return func_1479(func_711(), iParam0, bParam1);
}

bool func_1352(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

void func_1353(int iParam0)
{
	iVar0 = func_1237(iParam0, 1);
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

void func_1354(int iParam0)
{
	iVar0 = func_1237(iParam0, 1);
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

void func_1355()
{
	func_1354(-939420910);
	func_1354(-1187950766);
	func_1354(356365161);
	func_1354(753127042);
	func_1354(-2038424081);
	func_1354(1884271742);
	func_1354(459290420);
}

void func_1356()
{
	func_1354(704802028);
	func_1354(588987611);
	func_1354(2008888900);
	func_1354(1649996811);
	func_1354(227918160);
	func_1354(168171957);
	func_1354(1193080109);
	func_1354(-491981251);
	func_1354(-639037538);
	func_1354(-618620429);
}

bool func_1357(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_1358(int iParam0)
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

void func_1359(int iParam0)
{
	Global_40.f_12019.f_43 = (Global_40.f_12019.f_43 || iParam0);
}

bool func_1360(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_1361(int iParam0, int iParam1)
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

void func_1362()
{
	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		iVar0++;
	}
}

void func_1363(int iParam0)
{
	func_1370(iParam0, 8, 6);
}

void func_1364(int iParam0)
{
	func_1480(&(Global_1946804->f_2589), iParam0);
}

void func_1365(int iParam0, int iParam1)
{
	func_1481(&(Global_1946804->f_2589), iParam0, iParam1);
}

void func_1366(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_1367(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_840(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1482(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1365(iVar1, iVar3);
		}
	}
	if (func_1186(-1586649372) && func_1482(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1365(iVar1, iVar3);
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
						func_1365(iVar1, iVar3);
					}
				}
			}
			func_1483(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1483(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_1365(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_1483(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_1365(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_1365(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_1483(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_1483(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_1365(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_1483(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_1365(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1365(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_840(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1365(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_1347(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_840(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1365(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_538(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1365(iVar1, iVar3);
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
						func_1365(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_1347(&(Global_1946804->f_1497.f_1[iVar1])) || func_538(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1365(iVar1, iVar3);
					}
				}
			}
			switch (func_840(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_840(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1365(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_840(&(uParam0->f_1[iVar1])) || func_538(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1365(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_1368(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = func_1484(0);
	if (iParam2 != 0 && func_1485(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_1486(iParam0, func_1361(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_1369(var uParam0, bool bParam1, int iParam2)
{
	bVar6 = func_90() != -1;
	iVar7 = func_1484(0);
	if (func_1168(32768))
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
			iVar5 = func_1361(iVar0, 1);
			if (func_1487(iVar5, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
			{
			}
			else if (func_1487(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
			{
			}
			else
			{
				iVar4 = func_1346(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_1488(uParam0);
				if (iVar3 > 0)
				{
					if (!func_1168(524288))
					{
						func_1372(524288);
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
							iVar5 = func_1361(iVar0, 1);
							if (func_1487(iVar5, 8))
							{
							}
							else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
							{
							}
							else if (func_1487(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
							{
							}
							else
							{
								iVar4 = func_1346(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0] = &Global_1946804->f_57[iVar0];
									uParam0->f_1[iVar0]->f_1 = 0;
									if (bParam1)
									{
										func_1365(iVar0, iParam2);
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
					func_1375(524288);
				}
			}
		}
	}
}

void func_1370(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_1164(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_1164(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_1164(iParam0, 1)])->f_10 && iParam1));
}

void func_1371(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1489(&(uParam0->f_2[iVar0]), bParam1, bParam2);
		iVar0++;
	}
	if (func_90() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_1490(2, Global_26796.f_776)) || Global_1946804->f_1497 != func_1394(0))
		{
			if (Global_40.f_7157[Global_40.f_7729] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729] = (&Global_40.f_7157[Global_40.f_7729] - Global_40.f_7157[Global_40.f_7729] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729] |= 4096;
				Global_1946804->f_1497 = func_1394(Global_40.f_7729);
				Global_1946804->f_1378 = func_1394(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_1491(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_1492(0, 1);
	}
}

void func_1372(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_1373(struct<4> Param0)
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
			if (func_1493(Param0))
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
			func_1494(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_1372(8);
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
			if (func_1493(Param0))
			{
				return;
			}
			func_1494(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_1372(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_1172(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

void func_1374(var uParam0)
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

void func_1375(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

bool func_1376(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_1377(struct<4> Param0)
{
	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_1493(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1] == Param0 && Global_1946804->f_769[iVar1]->f_2 == Param0.f_2) && Global_1946804->f_769[iVar1]->f_3 == Param0.f_3) && Global_1946804->f_769[iVar1]->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1] == 34 && func_1493(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_1494(Param0);
	*Global_1946804->f_769[Global_1946804->f_854] = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_1372(8);
}

bool func_1378()
{
	if (Global_1572887->f_12 != -1)
	{
		return false;
	}
	return Global_1347477->f_203;
}

float func_1379(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

float func_1380()
{
	fVar0 = func_1495(13);
	iVar1 = func_1496(fVar0);
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

float func_1381()
{
	if (is_ped_on_mount(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_1382()
{
	if (func_1128())
	{
		if (_get_special_edition_core_stats_bonus_enabled())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_1383()
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

float func_1384()
{
	return Global_1955565->f_3;
}

void func_1385(int iParam0, char* sParam1, bool bParam2)
{
	sVar0 = func_1497(iParam0, 1, 0, 0);
	sVar0 = _create_var_string(2, sVar0, sParam1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[1]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[1]), bParam2);
}

void func_1386(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_1497(iParam0, 2, 0, 0);
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

float func_1387(float fParam0, float fParam1, float fParam2)
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

bool func_1388()
{
	return func_1495(12) <= -99f;
}

bool func_1389()
{
	return func_1495(12) >= 99f;
}

int func_1390()
{
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_840(iVar1) == -999503751)
		{
			if (func_1498() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_1391(int iParam0)
{
	if (!func_1181(iParam0))
	{
		return false;
	}
	if (func_1395(iParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_1392(int iParam0)
{
	if (!func_1181(iParam0))
	{
		return false;
	}
	if (func_1395(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_1393(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1181(iParam0))
	{
		return;
	}
	if (!func_1392(iParam0))
	{
		func_1397(iParam0, 2);
		if (bParam2)
		{
			if (!func_475(0, 0, 1))
			{
				func_510(1, 4);
			}
		}
		if ((!func_1396() && !bParam1) && !func_475(0, 0, 1))
		{
			func_71(_create_var_string(10, "OUT_JOURN_ADD", func_1499(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_1394(int iParam0)
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

bool func_1395(int iParam0, int iParam1)
{
	if (!func_1181(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0] && iParam1) != 0;
}

bool func_1396()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

void func_1397(int iParam0, int iParam1)
{
	if (!func_1181(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0] = (Global_40.f_7157[iParam0] || iParam1);
}

int func_1398(int iParam0, bool bParam1)
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

void func_1399(int iParam0, bool bParam1)
{
	iVar0 = func_1500(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_885(50);
			}
			else
			{
				func_885(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_885(51);
			}
			else
			{
				func_885(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_1501(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_912();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_912();
			}
			break;
		case 3:
			func_885(24);
			if (bParam1)
			{
				if (!func_1501(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_912();
				}
			}
			break;
	}
}

void func_1400(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_1502(0))
			{
				iVar0++;
			}
			if (func_1502(2))
			{
				iVar0++;
			}
			if (func_1502(4))
			{
				iVar0++;
			}
			if (!func_1503(16))
			{
				if (iVar0 == 1)
				{
					func_1504();
					func_810(456, 1);
					func_1505(16);
				}
			}
			if (!func_1503(32))
			{
				if (iVar0 >= 3)
				{
					func_1504();
					func_810(456, 1);
					func_1505(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_1502(1))
			{
				iVar0++;
			}
			if (func_1502(3))
			{
				iVar0++;
			}
			if (func_1502(7))
			{
				iVar0++;
			}
			if (!func_1503(1))
			{
				if (iVar0 == 1)
				{
					func_1506();
					func_810(457, 1);
					func_1505(1);
				}
			}
			if (!func_1503(2))
			{
				if (iVar0 >= 3)
				{
					func_1506();
					func_810(457, 1);
					func_1505(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_1502(5))
			{
				iVar0++;
			}
			if (func_1502(6))
			{
				iVar0++;
			}
			if (func_1502(8))
			{
				iVar0++;
			}
			if (!func_1503(4))
			{
				if (iVar0 == 1)
				{
					func_1507();
					func_810(455, 1);
					func_1505(4);
				}
			}
			if (!func_1503(8))
			{
				if (iVar0 >= 3)
				{
					func_1507();
					func_810(455, 1);
					func_1505(8);
				}
			}
			break;
	}
}

void func_1401(var uParam0)
{
	func_1188(uParam0, 143479330);
	if (Global_1946804->f_1 == 2026485318)
	{
		func_1188(uParam0, 617531372);
	}
	else
	{
		func_1188(uParam0, 291123060);
	}
}

void func_1402(var uParam0, int iParam1, struct<14> Param2)
{
	if (!func_1508(uParam0))
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

bool func_1403(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_1404(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

void func_1405(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_742(1356759001) };
	stat_id_set_int(&Var0, iParam0, true);
}

int func_1406(int iParam0)
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

bool func_1407(int iParam0)
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

bool func_1408()
{
	return _unlock_is_unlocked(99890643);
}

bool func_1409(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_1412(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { func_610(iParam1, Var0, 1415981582, 0) };
	return func_1509(Var29, 1);
}

bool func_1410(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_1412(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { func_610(iParam1, Var0, -2119169513, 0) };
	return func_1509(Var29, 1);
}

void func_1411(var uParam0)
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

bool func_1412(int iParam0, var uParam1)
{
	if (!func_1510(iParam0))
	{
		return false;
	}
	iVar0 = func_1413(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1.f_9 = -1591664384;
	Var15 = { func_761(0) };
	if (!func_1511(Var15, iVar0, &Var1, 0, 0))
	{
		return false;
	}
	if (!func_1512(&Var1, uParam1))
	{
		return false;
	}
	return true;
}

int func_1413(int iParam0)
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

bool func_1414(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10)
{
	if (!func_612(bParam10))
	{
		return func_1513(Param0, Param4, iParam8, 1, bParam9, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_842(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (func_1514(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return true;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, iParam8))
	{
		return false;
	}
	if (!_0xdccaa7c3bfd88862(func_282(0), &Param0, &Param4, iParam8, Var0.f_11, &Var14))
	{
		return false;
	}
	if (bParam9)
	{
		if (!func_1509(Var14, 1))
		{
		}
	}
	return true;
}

bool func_1415(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	if (!func_612(bParam9))
	{
		return func_1515(Param0, Param4, iParam8, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return false;
	}
	if (func_1514(&Param0, &Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_842(Param0, &Var0, bParam9, 1) || !func_842(Param4, &Var14, bParam9, 1))
	{
		return false;
	}
	if (func_1514(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return false;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, Var14.f_9) || !_inventory_fits_slot_id(Var14.f_4, Var0.f_9))
	{
		return false;
	}
	iVar28 = func_282(0);
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

bool func_1416(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_1516(get_entity_model(iParam0)))
	{
		return true;
	}
	if (decor_exist_on(iParam0, "HorseCompanion"))
	{
		return true;
	}
	return false;
}

bool func_1417(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 5)
	{
		return true;
	}
	return false;
}

int func_1418()
{
	return 1342496140;
}

int func_1419()
{
	return 446670976;
}

int func_1420()
{
	return 1;
}

int func_1421()
{
	return -868094182;
}

int func_1422()
{
	return 1074477367;
}

int func_1423()
{
	return 1;
}

int func_1424()
{
	return -997197050;
}

int func_1425()
{
	return -2063289686;
}

int func_1426()
{
	return 2;
}

int func_1427()
{
	return -868094182;
}

int func_1428()
{
	return 1074477367;
}

int func_1429()
{
	return 1;
}

int func_1430()
{
	return 1235275977;
}

int func_1431()
{
	return 2030804811;
}

int func_1432()
{
	return 1;
}

int func_1433()
{
	return 1974379573;
}

int func_1434()
{
	return 2024948086;
}

int func_1435()
{
	return 1;
}

void func_1436(int iParam0)
{
	if (func_1517() < iParam0)
	{
		func_1518(iParam0);
	}
}

int func_1437(struct<4> Param0, int iParam4, int iParam5)
{
	Var0.f_9 = -1591664384;
	if (func_1519(Param0, iParam4, &Var0, iParam5))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_1438(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		iVar5 = func_840(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_1520(iParam0);
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

struct<4> func_1439()
{
	Var0 = { func_761(0) };
	return func_610(856287005, Var0, -218846335, 0);
}

void func_1440(int iParam0, int iParam1)
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

bool func_1441(int iParam0)
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

bool func_1442(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_1521(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_1522())
	{
		return func_1521(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_1521(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

void func_1443(int iParam0, int iParam1)
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

void func_1444(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_1445(int iParam0, int iParam1)
{
	iVar0 = func_1248(*iParam0);
	iVar1 = func_1247(*iParam0);
	if (iParam1 < 1 || iParam1 > func_1251(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_1446(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_1447(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_1448(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

void func_1449(bool bParam0)
{
	func_1523(bParam0);
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

int func_1450(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_1451(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (func_503(iParam1->f_6))
	{
		if (bParam7 || is_bit_set(*iParam1, 11))
		{
			return;
		}
		func_504(&(iParam1->f_6), 0, 1);
	}
	if (!func_503(iParam1->f_6) && !is_bit_set(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_1287(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_1524(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_503(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_1457(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_1525(iParam1->f_6, 17, 1, 1);
				}
				if (is_bit_set(*iParam1, 1))
				{
					if (is_bit_set(*iParam1, 3))
					{
						func_1526(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_1080(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (is_bit_set(*iParam1, 10))
				{
					func_1525(iParam1->f_6, 16, 1, 1);
				}
				if (!is_bit_set(*iParam1, 0) || is_bit_set(*iParam1, 13))
				{
					func_1081(iParam1->f_6, 0, 1);
				}
				else
				{
					func_1081(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

void func_1452(int* iParam0, int iParam1)
{
	if (!func_358(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_360(iParam0, 14);
		}
	}
}

bool func_1453(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_1454(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_1455(int iParam0, int iParam1)
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

bool func_1456(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

void func_1457(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam3 && !func_503(iParam0))
	{
		return;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = func_737(iParam0);
	func_1525(iParam0, 18, 0, 1);
	func_1525(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = _uiprompt_get_group_id_for_target_entity(iParam1);
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam4, iParam2);
}

bool func_1458(int iParam0, bool bParam1)
{
	if (bParam1 && !func_503(iParam0))
	{
		return false;
	}
	iVar0 = func_737(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

bool func_1459(int iParam0, bool bParam1)
{
	if (bParam1 && !func_503(iParam0))
	{
		return false;
	}
	iVar0 = func_737(iParam0);
	return _uiprompt_is_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_1460(int iParam0, bool bParam1)
{
	if (bParam1 && !func_503(iParam0))
	{
		return;
	}
	iVar0 = func_737(iParam0);
	_uiprompt_restart_modes((*Global_1945938)[iVar0]->f_3);
}

float func_1461(int iParam0)
{
	iVar4 = func_1306(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = &Global_40.f_11095.f_11[iVar4];
			iVar5 = func_1462(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_1527(iVar6) - func_1527(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1f;
}

int func_1462(float fParam0)
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

int func_1463(int iParam0)
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

int func_1464(int iParam0)
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

int func_1465(float fParam0, float fParam1)
{
	iVar0 = func_1462(fParam0);
	fVar1 = to_float(func_1527(iVar0));
	fVar2 = to_float(func_1527(iVar0 + 1));
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

int func_1466(int iParam0)
{
	if (func_1528(iParam0, &iVar0))
	{
		return func_1527(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_1529())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_1529())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_1529())
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

int func_1467(int iParam0)
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

void func_1468(int iParam0, int iParam1, int iParam2)
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
	iVar3 = (iVar3 + func_1530(iParam0));
	sVar4 = func_1532(func_1531(iVar3, iParam2));
	sVar6 = func_1533(iParam0);
	if (!is_string_null_or_empty(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = _create_var_string(10, sVar0, func_1534(iParam0));
	iVar8 = func_1535(iParam0);
	iVar9 = get_hash_key(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = iVar8;
		Var10.f_4 = 1;
		Var10.f_5 = func_1536(iParam0);
		_uilog_post_notification(&Var10);
	}
	func_1117(sVar7, sVar1, iVar8, iVar9, -479097442, "INPUT_FEED_INTERACT_GENERIC", func_1537(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_1469(int iParam0, int iParam1)
{
	Global_1347477->f_9[iParam0] = (get_game_timer() + iParam1);
}

int func_1470(int iParam0)
{
	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

bool func_1471(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_1472(int iParam0)
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

int func_1473(int iParam0)
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

int func_1474(int iParam0)
{
	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_1538(&iVar0, 0, iVar95, &Var1) && !func_1538(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (is_model_a_ped(Var1))
		{
			func_1539(iVar0, &Var1);
			if (func_278(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

void func_1475()
{
	if (!_0x7c7e4ab748ea3b07())
	{
		return;
	}
	uVar0 = 29;
	func_1540(Global_35, &uVar0);
	Var30 = { func_761(0) };
	_0xe36d4a38d28d9cfb(0);
	_0xc04f47d488ef9eba(5, 1, &Var30, 0);
	_0x5d6182f3bce1333b(5, -142743235);
	func_1541(0);
	func_1542(7);
	func_1543(-1623728698, 1, 1, 0);
	if (func_1183() == 1160113249)
	{
		func_1543(-763730846, 1, 1, 1);
		func_1543(-361635024, 1, 1, 1);
	}
	func_1544(Global_35, &uVar0);
}

int func_1476(int iParam0)
{
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_1163(iVar0);
}

int func_1477(int iParam0)
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

int func_1478(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = func_282(0);
	}
	if (!_0x112bca290d2eb53c(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_1443(&uVar6, iVar0);
	func_1444(&uVar6, iVar1);
	func_1445(&uVar6, iVar2);
	func_1446(&uVar6, iVar3);
	func_1447(&uVar6, iVar4);
	func_1448(&uVar6, iVar5);
	return uVar6;
}

bool func_1479(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1545(iParam1) || !func_1545(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_1480(var uParam0, int iParam1)
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
			if ((func_1546(uParam0->f_2[iVar0], 2) || &uParam0->f_2[iVar0] == iParam1) || &uParam0->f_2[iVar0] == 39)
			{
				*uParam0->f_2[iVar0] = { Var2 };
			}
			else
			{
				if (func_1546(uParam0->f_2[iVar0], 1))
				{
					func_1547(uParam0->f_2[iVar0], 2, 6);
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

void func_1481(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_1548(uParam0, 1))
	{
		func_1549(uParam0, 1);
	}
	uParam0->f_2[*uParam0]->f_1 = iParam2;
	uParam0->f_2[*uParam0] = iParam1;
	*uParam0++;
}

bool func_1482(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

void func_1483(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_1365(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_1365(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2]->f_1 == -1333118809 || uParam0->f_1[iVar2]->f_1 == -1158926300)
	{
		uParam0->f_1[iVar2]->f_1 = 1155669136;
		if (bParam3)
		{
			func_1365(iVar2, iVar0);
		}
	}
}

int func_1484(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_1183();
	}
	iVar0 = 0;
	if (iParam0 == 24043185)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_1485(int iParam0, int iParam1, int iParam2, bool bParam3)
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

bool func_1486(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

bool func_1487(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_1164(iParam0, 1)])->f_10 && iParam1) != 0;
}

int func_1488(var uParam0)
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

void func_1489(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*Global_1946804->f_1497.f_1[iParam0] = { *Global_1946804->f_1378.f_1[iParam0] };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_90() == -1)
	{
		func_1550(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_26796.f_776);
	}
	else
	{
		func_1551(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

bool func_1490(int iParam0, int iParam1)
{
	if (func_90() == -1)
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

void func_1491(int iParam0, bool bParam1, int iParam2)
{
	func_1552(&(Global_1946804->f_1378), iParam0);
	func_1553(2, iParam0, 6);
	if (bParam1)
	{
		func_1492(0, 1);
	}
}

void func_1492(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1554(0);
	}
	if (bParam0)
	{
		func_1372(8);
		func_1372(512);
	}
	else
	{
		func_1372(8);
		func_1372(16);
	}
}

bool func_1493(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_1494(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

float func_1495(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

int func_1496(float fParam0)
{
	return round(((fParam0 / 100f) * to_float(10)));
}

char* func_1497(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_285(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_285(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

int func_1498()
{
	return Global_1946804->f_1497;
}

char* func_1499(int iParam0)
{
	iVar0 = func_1394(iParam0);
	if (iVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_1329(iVar0);
}

int func_1500(int iParam0)
{
	if (func_1555(iParam0))
	{
		iVar0 = 0;
	}
	else if (func_1556(iParam0))
	{
		iVar0 = 1;
	}
	else if (func_1557(iParam0))
	{
		iVar0 = 2;
	}
	else if (func_1558(iParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

bool func_1501(int iParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_137(func_1559(iVar0, iParam0), 1, 0))
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

bool func_1502(int iParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_137(func_1560(iVar0, iParam0), 1, 0))
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

bool func_1503(int iParam0)
{
	return (Global_40.f_12003 && iParam0) != 0;
}

void func_1504()
{
	if (func_90() != -1)
	{
		return;
	}
	func_931(1654063339, 1, 752097756);
	iVar0 = func_1309(1);
	func_1468(1, iVar0, 0);
}

void func_1505(int iParam0)
{
	Global_40.f_12003 = (Global_40.f_12003 || iParam0);
}

void func_1506()
{
	if (func_90() != -1)
	{
		return;
	}
	func_931(1623931083, 1, 752097756);
	iVar0 = func_1309(2);
	func_1468(2, iVar0, 0);
}

void func_1507()
{
	if (func_90() != -1)
	{
		return;
	}
	func_931(-1845241476, 1, 752097756);
	iVar0 = func_1309(0);
	func_1468(0, iVar0, 0);
}

bool func_1508(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_1509(struct<4> Param0, int iParam4)
{
	if (!func_612(0))
	{
		return func_1561(Param0, iParam4, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_842(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!_0x734311e2852760d0(func_282(0), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_1510(int iParam0)
{
	iVar0 = func_1413(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1 = { func_761(0) };
	if (func_1562(&Var1, iVar0, 0) > 0)
	{
		return true;
	}
	return false;
}

bool func_1511(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	iVar0 = func_282(bParam7);
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

bool func_1512(var uParam0, var uParam1)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (!_0x025a1b1fb03fbf61(func_282(0), uParam0, uParam1, 29, 1))
	{
		return false;
	}
	return true;
}

int func_1513(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10, bool bParam11)
{
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	if (!func_842(Param0, &Var0, 1, 0))
	{
		return -1;
	}
	if (func_1514(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return -1;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, iParam8))
	{
		return -1;
	}
	iVar14 = func_843(Var0.f_4, Param4, iParam8, 0);
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
	Var16 = { func_1563(&Var0) };
	Var16.f_4 = { Param4 };
	Var16.f_11 = iParam8;
	Var16.f_10 = bParam10;
	iVar32 = func_1564(1168099063, &Var16, bParam9);
	if (iVar32 == -1)
	{
		return -1;
	}
	return iVar32;
}

bool func_1514(var uParam0, bool bParam1)
{
	if (((*uParam0 == *bParam1 && uParam0->f_1 == bParam1->f_1) && uParam0->f_2 == bParam1->f_2) && uParam0->f_3 == bParam1->f_3)
	{
		return true;
	}
	return false;
}

int func_1515(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return -1;
	}
	if (func_1514(&Param0, &Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_842(Param0, &Var0, 1, 0) || !func_842(Param4, &Var14, 1, 0))
	{
		return -1;
	}
	if (func_1514(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return -1;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, Var14.f_9) || !_inventory_fits_slot_id(Var14.f_4, Var0.f_9))
	{
		return -1;
	}
	Var28 = { func_1563(&Var0) };
	Var28.f_4 = { Var14.f_5 };
	Var28.f_11 = Var14.f_9;
	Var28.f_10 = (Var14.f_10 || iParam8);
	Var44 = { func_1563(&Var14) };
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
					func_1565(iVar60, 1);
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
		iVar60 = func_1564(1168099063, &Var28, 0);
		iVar60 = func_1564(1168099063, &Var44, 0);
	}
	return iVar60;
}

bool func_1516(int iParam0)
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

int func_1517()
{
	return Global_40.f_1095.f_3135;
}

void func_1518(int iParam0)
{
	Global_40.f_1095.f_3135 = iParam0;
}

bool func_1519(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x22e590f108289a9d(func_282(bParam6), &uParam0, iParam4, &Var0))
	{
		return false;
	}
	if (!func_842(Var0, uParam5, bParam6, 0))
	{
		return false;
	}
	return true;
}

int func_1520(int iParam0)
{
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_840(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return _item_database_get_has_slot_count(iVar0);
}

bool func_1521(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_1522()
{
	return Global_1109400->f_245;
}

void func_1523(bool bParam0)
{
	_0xb6fd96420c0126a1(-1056478928, bParam0);
}

int func_1524(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_1244(iVar0, 2))
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
				func_1566(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, uParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_1525(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_503(iParam0))
	{
		return;
	}
	iVar0 = func_737(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_1526(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (bParam4 && !func_503(iParam0))
	{
		return;
	}
	iVar0 = func_737(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(10, sParam1, sParam2, sParam3));
}

int func_1527(int iParam0)
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

bool func_1528(int iParam0, int iParam1)
{
	return false;
}

bool func_1529()
{
	return false;
}

int func_1530(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return _0xe787f05dfc977bde(func_282(0), -1845241476, 0);
		case 1:
			return _0xe787f05dfc977bde(func_282(0), 1654063339, 0);
		case 2:
			return _0xe787f05dfc977bde(func_282(0), 1623931083, 0);
	}
	return 0;
}

struct<4> func_1531(int iParam0, int iParam1)
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

char* func_1532(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

char* func_1533(int iParam0)
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

char* func_1534(int iParam0)
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

int func_1535(int iParam0)
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

int func_1536(int iParam0)
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

int func_1537(int iParam0)
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

bool func_1538(int iParam0, int iParam1, int iParam2, var uParam3)
{
	if (func_732(iParam1) && !func_946(iParam1))
	{
		iVar0 = func_665(iParam1);
	}
	else
	{
		return false;
	}
	func_1411(uParam3);
	iVar5 = func_1406(iParam2);
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

void func_1539(int iParam0, int iParam1)
{
	iVar0 = get_ped_index_from_entity_index(iParam0);
	if (does_entity_exist(iVar0))
	{
		func_1567(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_1568(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

void func_1540(int iParam0, int* iParam1)
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
		if (func_362(iVar31))
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

void func_1541(bool bParam0)
{
	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_278(iVar1, 0))
		{
			func_1569(iVar1, 0, bParam0);
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

void func_1542(int iParam0)
{
	Global_1946804->f_2657.f_26.f_2 = 3;
	Global_1946804->f_2657.f_26.f_1 = 3;
	Global_1946804->f_2657.f_26 = 3;
	if (func_90() == -1)
	{
		func_1570(352481484);
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
		if (func_840(iVar2) != -999503751)
		{
			func_1571(&(Global_1946804->f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_1572(iVar2, 0))
		{
			func_1573(iVar2, &Global_1946804->f_1497.f_1[iVar1] == &Global_1946804->f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_1543(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_1574(iParam0))
	{
		return;
	}
	iVar0 = func_840(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_1575(iParam0, &(Global_1946804->f_2657.f_21), Global_1946804->f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_1575(iParam0, &(Global_1946804->f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_1575(iParam0, &(Global_1946804->f_2657.f_20), Global_1946804->f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_1575(iParam0, &(Global_1946804->f_2657.f_22), Global_1946804->f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_1575(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_1575(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_1576(0))
	{
		func_1577(iParam0, 1);
		if (func_1183() == 1160113249)
		{
			func_1577(func_1576(-2125499975), 0);
		}
		else
		{
			func_1577(func_1576(1160113249), 0);
		}
	}
	func_1578();
	if (func_1579(iVar0))
	{
		_0x766315a564594401(func_282(0), iParam0, 0);
	}
	func_1573(iParam0, bParam3);
	if (bParam2)
	{
		func_1492(0, 0);
	}
}

void func_1544(int iParam0, var uParam1)
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
				if (func_363(uParam1[iVar0]))
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

bool func_1545(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_1250(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_1018(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_712(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_1247(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_1248(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_1249(iParam0);
	if (iVar5 < 1 || iVar5 > func_1251(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_1546(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1547(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_1548(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1549(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_1550(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_1551(var uParam0, int iParam1, int iParam2)
{
	*Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_1552(var uParam0, int iParam1)
{
	if (func_90() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1]->f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_1550(uParam0->f_1[iVar0], iVar0, iParam1);
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
		func_1551(uParam0->f_1[iVar0], iVar0, iParam1);
		iVar0++;
	}
}

void func_1553(int iParam0, int iParam1, int iParam2)
{
	if (func_90() == -1)
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

void func_1554(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

bool func_1555(int iParam0)
{
	if (!func_278(iParam0, 0))
	{
		return false;
	}
	if (func_538(iParam0, -1066545920))
	{
		return true;
	}
	return false;
}

bool func_1556(int iParam0)
{
	if (!func_278(iParam0, 0))
	{
		return false;
	}
	if (func_538(iParam0, -284267618))
	{
		return true;
	}
	return false;
}

bool func_1557(int iParam0)
{
	if (!func_278(iParam0, 0))
	{
		return false;
	}
	if (func_538(iParam0, 363491182))
	{
		return true;
	}
	return false;
}

bool func_1558(int iParam0)
{
	if (!func_278(iParam0, 0))
	{
		return false;
	}
	if (func_538(iParam0, 1406113494))
	{
		return true;
	}
	return false;
}

int func_1559(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1580(iParam0);
		case 1:
			return func_1581(iParam0);
		case 2:
			return func_1582(iParam0);
		case 3:
			return func_1583(iParam0);
	}
	return 0;
}

int func_1560(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1584(iParam0);
		case 1:
			return func_1585(iParam0);
		case 2:
			return func_1586(iParam0);
		case 3:
			return func_1587(iParam0);
		case 4:
			return func_1588(iParam0);
		case 5:
			return func_1589(iParam0);
		case 6:
			return func_1590(iParam0);
		case 7:
			return func_1591(iParam0);
		case 8:
			return func_1592(iParam0);
	}
	return 0;
}

int func_1561(struct<4> Param0, int iParam4, bool bParam5)
{
	iVar0 = -1;
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_842(Param0, &Var1, 1, 0))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_279(Var1.f_4);
	if (iVar15 == -1784221369)
	{
		Var16 = { func_1593(Param0, 1) };
		Var16.f_10 = iParam4;
		iVar0 = func_1594(-1230526146, &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -1037537535)
	{
		Var44 = { func_1595(Param0, 1) };
		Var44.f_10 = iParam4;
		iVar0 = func_1596(-1230526146, &Var44, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var61 = { func_1563(&Var1) };
		Var61.f_10 = iParam4;
		iVar0 = func_1564(-1230526146, &Var61, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_1562(var uParam0, int iParam1, bool bParam2)
{
	return _0x033ee4b89f3ac545(func_282(bParam2), uParam0, iParam1);
}

struct<16> func_1563(var uParam0)
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

int func_1564(int iParam0, var uParam1, bool bParam2)
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
					func_1565(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_1565(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16))
	{
		func_1565(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_1565(int iParam0, int iParam1)
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
	func_1597(iParam0, iParam1);
}

void func_1566(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, var uParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_1298(iParam0, 1);
	func_1299(iParam0, 1);
	func_1300(iParam0, 128);
}

void func_1567(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
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

bool func_1568(var uParam0, int iParam1, int iParam2, int iParam3)
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

void func_1569(int iParam0, bool bParam1, bool bParam2)
{
	switch (func_840(iParam0))
	{
		case -2061583405:
			bVar0 = func_1598(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1598(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1598(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1598(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1598(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1598(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1578();
	}
	if (bParam1)
	{
		func_1492(0, 0);
	}
}

void func_1570(int iParam0)
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
	Var2 = { func_540(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (func_543(&Var2, &iVar0, &iVar1, 0))
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
		func_544(iVar0);
	}
}

void func_1571(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_1599(iParam2, *uParam0);
	func_1600(uParam0->f_1[*uParam0], iParam1, -1, 1, 0);
	*uParam0++;
}

bool func_1572(int iParam0, int iParam1)
{
	Var0 = { func_606(iParam0, 0, 0) };
	Var5 = { func_610(iParam0, Var0, Var0.f_4, 0) };
	if (func_843(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return false;
	}
	_0x9a113c660aea3832(func_282(0), &Var5, iParam1);
	return true;
}

void func_1573(int iParam0, bool bParam1)
{
	Var0 = { func_606(iParam0, 0, 0) };
	Var5 = { func_610(iParam0, Var0, Var0.f_4, 0) };
	if (func_843(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	_0x65a5f70f4a292ebe(func_282(0), &Var5, bParam1);
}

bool func_1574(int iParam0)
{
	if (func_90() == -1)
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

int func_1575(int iParam0, var uParam1, int iParam2, bool bParam3)
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
	if (func_1601(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_1572(iParam0, 0))
	{
		return 0;
	}
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = iVar1;
	if (func_840(iParam0) != -999503751)
	{
		func_1571(&(Global_1946804->f_2657.f_26.f_26), iParam0, Global_1946804->f_2657.f_19);
	}
	Global_1946804->f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_1576(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_1183();
	}
	if (iParam0 == 1160113249)
	{
		return -763730846;
	}
	return -1535516064;
}

int func_1577(int iParam0, int iParam1)
{
	Var0 = { func_606(iParam0, 0, 0) };
	Var5 = { func_610(iParam0, Var0, Var0.f_4, 0) };
	if (func_843(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	_0x0349404a22736740(iParam1, func_282(0), &Var5);
	return 1;
}

void func_1578()
{
	if (func_90() == -1)
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

bool func_1579(int iParam0)
{
	return func_1603(func_1602(iParam0));
}

int func_1580(int iParam0)
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

int func_1581(int iParam0)
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

int func_1582(int iParam0)
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

int func_1583(int iParam0)
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

int func_1584(int iParam0)
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

int func_1585(int iParam0)
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

int func_1586(int iParam0)
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

int func_1587(int iParam0)
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

int func_1588(int iParam0)
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

int func_1589(int iParam0)
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

int func_1590(int iParam0)
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

int func_1591(int iParam0)
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

int func_1592(int iParam0)
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

struct<28> func_1593(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var28.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_282(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_1563(&Var28) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_1594(int iParam0, var uParam1, bool bParam2)
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
					func_1565(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_1565(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 28))
	{
		func_1565(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<17> func_1595(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_282(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_1563(&Var17) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_1596(int iParam0, var uParam1, bool bParam2)
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
					func_1565(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_1565(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 17))
	{
		func_1565(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_1597(int iParam0, int iParam1)
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

int func_1598(int iParam0, var uParam1)
{
	iVar1 = iParam0;
	if (!func_1601(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_840(iParam0) != -999503751)
		{
			func_1604(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_840(iParam0) != -999503751)
	{
		func_1604(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1572(iParam0, 1);
	return 1;
}

void func_1599(int iParam0, var uParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_1600(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (_0x93ffd92f05ec32fd(uParam0->f_3.f_1))
	{
		func_1605(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_1164(func_1343(iParam1), 1);
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
		func_1606(uParam0);
	}
}

bool func_1601(int iParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_1946804->f_2657.f_19)
	{
		if (iParam0 == &Global_1946804->f_2657[*uParam1])
		{
			return true;
		}
		*uParam1++;
	}
	return false;
}

int func_1602(int iParam0)
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

bool func_1603(int iParam0)
{
	return (Global_1946804->f_2657.f_26.f_6 && iParam0) != 0;
}

void func_1604(var uParam0, int iParam1, int iParam2)
{
	iVar1 = func_1607(iParam1);
	func_1608(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_1609(&(uParam0->f_26), iVar1);
		if (func_1610(uParam0->f_26, &iVar0))
		{
			func_1611(iVar0, iVar1);
		}
	}
}

void func_1605(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_1612(&(uParam0->f_3));
}

void func_1606(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_1613(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

var func_1607(int iParam0)
{
	return &(Global_1946804->f_2657.f_26.f_7[iParam0]);
}

void func_1608(int iParam0, int iParam1)
{
	uVar0 = &Global_1946804->f_2657.f_26.f_7[iParam0];
	Global_1946804->f_2657.f_26.f_7[iParam0] = &Global_1946804->f_2657.f_26.f_7[iParam1];
	Global_1946804->f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_1609(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - 1);
	func_1605(uParam0->f_1[iParam1]);
	*uParam0->f_1[iParam1] = { *uParam0->f_1[*uParam0] };
}

bool func_1610(int iParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_1946804->f_2657.f_19)
	{
		if (&Global_1946804->f_2657.f_26.f_7[*uParam1] == iParam0)
		{
			return true;
		}
		*uParam1++;
	}
	return false;
}

void func_1611(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_1612(var uParam0)
{
	if (*uParam0 && _0x93ffd92f05ec32fd(uParam0->f_1))
	{
		_0x13e7320c762f0477(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_1613(var uParam0, var uParam1, var uParam2)
{
	iVar0 = func_1614(func_1183());
	if (*uParam0)
	{
		func_1612(uParam0);
	}
	uParam0->f_1 = _0xf6d9e1f3560cbf8e(iVar0, uParam1, 0, func_90() != -1, uParam2);
	*uParam0 = 1;
}

int func_1614(int iParam0)
{
	if (func_90() == -1)
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

