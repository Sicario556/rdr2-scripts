void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (has_force_cleanup_occurred(555))
	{
		clear_ped_tasks(ScriptParam_0.f_1, 1, 0);
		func_1(&ScriptParam_0, &cLocal_139, 0);
		terminate_this_thread();
	}
	while (!func_2(&ScriptParam_0, &cLocal_139))
	{
		wait(0);
	}
	terminate_this_thread();
}

void func_1(var uParam0, char* sParam1, bool bParam2)
{
	func_3(uParam0, sParam1);
	if (!bParam2)
	{
		func_4(*uParam0, -2147483642);
	}
	else
	{
		func_5(*uParam0, -2147483648, 0, 12);
	}
	if (func_6(uParam0->f_1, 0))
	{
		set_ped_config_flag(uParam0->f_1, 389, false);
	}
	func_7(*uParam0, 51, 1);
	if (func_8(*uParam0))
	{
		func_9(*uParam0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
		(*Global_1360165)[*uParam0]->f_69 = 234527101;
	}
	if (!bParam2)
	{
		if (func_10(uParam0->f_10))
		{
			func_11(uParam0->f_10, 0, 2);
		}
	}
	if (func_12(uParam0->f_25))
	{
		func_13(&(uParam0->f_25), 1, 1);
	}
	if (func_12(uParam0->f_26))
	{
		func_13(&(uParam0->f_26), 1, 1);
	}
	if (does_script_exist(&(uParam0->f_50)))
	{
		if (has_script_loaded(&(uParam0->f_50)))
		{
			set_script_as_no_longer_needed(&(uParam0->f_50));
		}
	}
	if (!is_string_null_or_empty(&(sParam1->f_17)))
	{
		func_14(&(sParam1->f_35));
	}
	if (_does_volume_exist(uParam0->f_18))
	{
		_0x74c2b3dc0b294102(uParam0->f_18);
		remove_scenario_blocking_area(uParam0->f_19, false);
		func_15(uParam0->f_18);
		_delete_volume(uParam0->f_18);
	}
	if (func_16(531))
	{
		func_17(531);
	}
	if (func_18(sParam1->f_471))
	{
		Global_1391438->f_594 = sParam1->f_471;
	}
	if (sParam1->f_472 != -1)
	{
		func_19(*uParam0, sParam1->f_472);
	}
	Global_40.f_6563.f_274[uParam0->f_13]->f_12 = 0;
	if (!bParam2)
	{
		if (uParam0->f_78.f_15)
		{
			func_20(&(Global_1391438->f_493));
		}
		else if (Global_1391438->f_7[0]->f_9 == uParam0->f_9)
		{
			func_20(Global_1391438->f_7[0]);
		}
		else
		{
			func_20(Global_1391438->f_7[1]);
		}
	}
	else if (Global_1391438->f_7[0]->f_9 == uParam0->f_9)
	{
		Global_1391438->f_7[0]->f_7 = 1;
	}
	else
	{
		Global_1391438->f_7[1]->f_7 = 1;
	}
}

bool func_2(var uParam0, char* sParam1)
{
	if (uParam0->f_27 < 4)
	{
		bVar1 = uParam0->f_27 > 0;
		if (func_21(uParam0, &bVar2, bVar1, 1, 0, 1))
		{
			if (func_22(uParam0, sParam1) || func_23(uParam0))
			{
				clear_ped_tasks(uParam0->f_1, 1, 0);
				func_1(uParam0, sParam1, bVar2);
				return true;
			}
		}
	}
	if (uParam0->f_27 > 0)
	{
		func_24(uParam0, sParam1);
	}
	switch (uParam0->f_27)
	{
		case 0:
			if (func_21(uParam0, &bVar3, 0, 1, 0, 1))
			{
				func_1(uParam0, sParam1, bVar3);
				return true;
			}
			if (func_25() == func_26())
			{
				uParam0->f_27 = 1;
			}
			break;
		case 1:
			if (func_27())
			{
				Global_1391438->f_311[uParam0->f_12] = 1;
			}
			if (func_28(&(uParam0->f_31), 16))
			{
				uParam0->f_27 = 7;
				return true;
			}
			if (func_29(uParam0, sParam1) && func_30(uParam0, sParam1))
			{
				func_31(uParam0, sParam1);
				uParam0->f_27 = 2;
			}
			break;
		case 2:
			if (func_32(uParam0))
			{
				Global_1391438->f_311[uParam0->f_12] = 0;
				(*Global_1360165)[*uParam0]->f_69 = uParam0->f_8;
				func_33(*uParam0, 0, 0, 0);
				if (!func_34(531))
				{
					func_35(531, 0);
				}
				uParam0->f_27 = 3;
			}
			break;
		case 3:
			if (!func_28(&(uParam0->f_31), 2))
			{
				if (func_28(&(uParam0->f_31), 262144))
				{
					if (_does_scenario_point_exist(uParam0->f_33))
					{
						if (func_36(uParam0))
						{
							func_37(&(uParam0->f_31), 2, 1);
							func_37(&(uParam0->f_31), 262144, 0);
							func_38(&(uParam0->f_75));
						}
					}
					else
					{
						func_37(&(uParam0->f_31), 2, 1);
					}
				}
			}
			else if (func_39(&(uParam0->f_75)) && func_40(&(uParam0->f_75)) > IntToFloat(sParam1->f_16))
			{
				if (sParam1->f_16 < 600)
				{
					sParam1->f_16 *= 2;
				}
				else
				{
					sParam1->f_16 = 600;
				}
				func_37(&(uParam0->f_31), 2, 0);
			}
			if (!is_string_null_or_empty(&(sParam1->f_17)))
			{
				if (uParam0->f_9 == -1220302226)
				{
					if (func_42(func_41(iVar0), Global_36, 1) < 50f)
					{
						func_43(&(sParam1->f_35), &(sParam1->f_17), 1, 1);
					}
				}
				else
				{
					func_43(&(sParam1->f_35), &(sParam1->f_17), 0, 1);
				}
			}
			if (func_44(uParam0, sParam1))
			{
				func_45(16384);
				(*Global_1360165)[*uParam0]->f_69 = 234527101;
				uParam0->f_27 = 4;
			}
			else if (!func_46(uParam0->f_25, 1))
			{
				if (!is_ped_active_in_scenario(uParam0->f_1, 1) && !_0x3ab6c7b0bb0df4b1(uParam0->f_1, -1))
				{
					uParam0->f_27 = 2;
				}
			}
			break;
		case 4:
			func_47(&(uParam0->f_1), &(sParam1->f_473), &(sParam1->f_534), 3.75f, -1082130432, 0);
			if (func_28(&(uParam0->f_31), 16384) && !is_thread_active(Global_1391438->f_490, false))
			{
				Global_1391438->f_209 = { *uParam0 };
				func_48(&(Global_1391438->f_5), 64, 1);
			}
			if (func_49(uParam0->f_10))
			{
				func_50(uParam0->f_10);
			}
			if (!func_51(uParam0->f_10))
			{
				func_52(uParam0->f_10, 1, 0);
				func_53(Global_1935630, 256);
			}
			if (!func_54(uParam0, sParam1))
			{
				return false;
			}
			if (func_55())
			{
				if (!is_thread_active(Global_1391438->f_490, false))
				{
					Global_1391438->f_209 = { *uParam0 };
					func_48(&(Global_1391438->f_5), 64, 1);
				}
				if (_does_anim_scene_exist(sParam1->f_35.f_156))
				{
					iVar4 = func_56(uParam0->f_8);
					if (iVar4 != -1)
					{
						func_57(iVar4, sParam1->f_35.f_156);
					}
					if (!func_58(sParam1->f_375))
					{
						set_anim_scene_origin(sParam1->f_35.f_156, sParam1->f_375, 0f, 0f, sParam1->f_378, 2);
					}
				}
				if (!func_58(uParam0->f_21) && !_0x3ab6c7b0bb0df4b1(uParam0->f_2, -1))
				{
					func_59(uParam0->f_2, uParam0->f_21, uParam0->f_24, 2, 1073741824);
				}
				func_60(&(sParam1->f_473), uParam0->f_1);
				func_61(uParam0, sParam1);
				uParam0->f_27 = 5;
			}
			break;
		case 5:
			if (func_61(uParam0, sParam1))
			{
				if (func_28(&(uParam0->f_31), 16384))
				{
					(*Global_1360165)[*uParam0]->f_69 = 234527101;
					iVar0 = 0;
					while (iVar0 < 27)
					{
						if (func_63(&(uParam0->f_3), func_62(iVar0)))
						{
							if (func_8(iVar0))
							{
								func_9(iVar0, 0, 0, 0, -1082130432, 1, 1, 0, 0, 0, 0);
							}
						}
						iVar0++;
					}
					func_64(16384);
					uParam0->f_27 = 7;
				}
				else
				{
					iVar0 = 0;
					while (iVar0 < 27)
					{
						if (func_63(&(uParam0->f_3), func_62(iVar0)))
						{
							if ((uParam0->f_9 != -103573613 && uParam0->f_9 != 194099983) && uParam0->f_9 != 2038046186)
							{
								func_65(iVar0, 0);
							}
							if (func_8(iVar0))
							{
								func_9(iVar0, 0, 0, 0, -1082130432, 1, 1, 0, 0, 0, 0);
							}
						}
						iVar0++;
					}
					(*Global_1360165)[*uParam0]->f_69 = 234527101;
					uParam0->f_27 = 7;
				}
			}
			set_ik_target(uParam0->f_1, 1, Global_35, 21030, 0f, 0f, 0f, 8, -1, -1);
			break;
		case 7:
			func_47(&(uParam0->f_1), &(sParam1->f_473), &(sParam1->f_534), 3.75f, -1082130432, 0);
			if (func_66(uParam0, sParam1))
			{
				if (is_thread_active(Global_1391438->f_490, false))
				{
					func_67("Player accepted invite for ", 1, 1);
					func_1(uParam0, sParam1, 0);
					func_48(&(Global_1391438->f_5), 128, 1);
					return true;
				}
				else
				{
					Global_1391438->f_209 = { *uParam0 };
					func_48(&(Global_1391438->f_5), 64, 1);
				}
			}
			break;
	}
	return false;
}

void func_3(var uParam0, char* sParam1)
{
	if (_does_anim_scene_exist(iLocal_136))
	{
		_delete_anim_scene(iLocal_136);
	}
	if (does_entity_exist(iLocal_18))
	{
		set_object_as_no_longer_needed(&iLocal_18);
	}
	if (does_entity_exist(iLocal_19))
	{
		set_object_as_no_longer_needed(&iLocal_19);
	}
	if (does_entity_exist(iLocal_20))
	{
		set_object_as_no_longer_needed(&iLocal_20);
	}
	if (does_entity_exist(iLocal_21))
	{
		set_object_as_no_longer_needed(&iLocal_21);
	}
	if (does_entity_exist(iLocal_22))
	{
		set_object_as_no_longer_needed(&iLocal_22);
	}
	if (does_entity_exist(iLocal_23))
	{
		delete_object(&iLocal_23);
	}
	if (does_entity_exist(iLocal_24))
	{
		delete_object(&iLocal_24);
	}
	if (does_entity_exist(iLocal_25))
	{
		set_object_as_no_longer_needed(&iLocal_25);
	}
	if (does_entity_exist(iLocal_26))
	{
		delete_object(&iLocal_26);
	}
	if (does_entity_exist(iLocal_27))
	{
		delete_object(&iLocal_27);
	}
	if (does_entity_exist(iLocal_28))
	{
		delete_object(&iLocal_28);
	}
	set_model_as_no_longer_needed(-821290420);
	set_model_as_no_longer_needed(-35440630);
	set_model_as_no_longer_needed(-1006095118);
	set_model_as_no_longer_needed(-50604564);
	set_model_as_no_longer_needed(-1074884633);
	set_model_as_no_longer_needed(-693389207);
	set_model_as_no_longer_needed(-62869733);
	set_model_as_no_longer_needed(812805259);
	set_model_as_no_longer_needed(-1916489787);
	set_model_as_no_longer_needed(-162225711);
	set_model_as_no_longer_needed(_get_weapontype_model(1999408598));
	if (func_68(*uParam0))
	{
		func_69(iLocal_14, *uParam0, 0, 0, 0);
	}
	if (func_68(22))
	{
		func_69(iLocal_14, 22, 0, 0, 0);
	}
	if (func_8(22))
	{
		func_9(22, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
	}
	func_70(iLocal_17, 0);
}

void func_4(int iParam0, int iParam1)
{
	if (!func_71(iParam0))
	{
		return;
	}
	(*Global_1360165)[iParam0]->f_140 = ((*Global_1360165)[iParam0]->f_140 - ((*Global_1360165)[iParam0]->f_140 && iParam1));
	(*Global_1360165)[iParam0]->f_141 = ((*Global_1360165)[iParam0]->f_141 - ((*Global_1360165)[iParam0]->f_141 && iParam1));
}

int func_5(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!func_71(iParam0))
	{
		return 0;
	}
	if (!bParam2)
	{
		if (func_72(iParam0, iParam1, 0))
		{
			return 0;
		}
	}
	if (iParam3 == -1)
	{
		(*Global_1360165)[iParam0]->f_140 = ((*Global_1360165)[iParam0]->f_140 || iParam1);
	}
	else
	{
		(*Global_1360165)[iParam0]->f_141 = ((*Global_1360165)[iParam0]->f_141 || iParam1);
		(*Global_1360165)[iParam0]->f_142 = &Global_1899515;
		func_73(&((*Global_1360165)[iParam0]->f_142), 0, 0, iParam3, 0, 0, 0, 0);
	}
	return 1;
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
	if (func_74(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_74(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_74(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_74(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_74(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_74(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_74(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_74(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_7(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_75(iParam0))
		{
			return;
		}
	}
	func_76(iParam1, &iVar0, &iVar1);
	clear_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

bool func_8(int iParam0)
{
	if (!func_71(iParam0))
	{
		return false;
	}
	if (!func_77(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_129 == get_id_of_this_thread();
}

void func_9(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (!func_71(iParam0))
	{
		return;
	}
	if (func_77(iParam0))
	{
		if ((*Global_1360165)[iParam0]->f_129 != 0 && (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_78(iParam0, 56, 1);
		func_79(&(Global_1359489->f_40), 1);
	}
	func_80(iParam0, 0);
	func_81(iParam0, 4, 0);
	func_82(iParam0);
	func_83(iParam0);
	func_7(iParam0, 37, 1);
	bVar0 = func_6(Global_1360165[iParam0], 0);
	iVar1 = func_84(iParam0, 0);
	bVar2 = _0x800df3fc913355f3(iVar1);
	if (get_ped_config_flag(Global_1360165[iParam0], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		set_ped_config_flag(Global_1360165[iParam0], 503, false);
	}
	if (func_85(iParam0, 64, 1))
	{
		func_7(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_7(iParam0, 33, 1);
		func_7(iParam0, 34, 1);
		func_86(iParam0, 1056964608, -1, 1061158912);
		func_33(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_78(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_78(iParam0, 35, 1);
			if (bParam8)
			{
				func_78(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_87(iParam0, 0);
			if (is_ped_in_group(Global_1360165[iParam0]))
			{
				set_ped_keep_task(Global_1360165[iParam0], true);
			}
			_0xf74e134f40192884(Global_1360165[iParam0], 1);
			set_ped_relationship_group_hash(Global_1360165[iParam0], 1030835986);
		}
		if (bVar2)
		{
			_0xbb68908cd11aebdc(iVar1);
		}
		func_7(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			set_ped_keep_task(Global_1360165[iParam0], true);
		}
		func_78(iParam0, 33, 1);
		func_33(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			(*Global_1360165)[iParam0]->f_133 = fParam4;
			func_79(&((*Global_1360165)[iParam0]->f_130), 1);
		}
		else
		{
			func_88(&((*Global_1360165)[iParam0]->f_130));
		}
		if (bParam9)
		{
			func_78(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (does_entity_exist(Global_1360165[iParam0]))
		{
			func_89(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		set_ped_can_use_auto_conversation_lookat(Global_1360165[iParam0], false);
	}
	if (func_85(iParam0, 45, 1))
	{
		func_7(iParam0, 45, 1);
	}
	func_90(iParam0, 16, 1);
	func_7(iParam0, 44, 1);
	(*Global_1360165)[iParam0]->f_129 = 0;
	Global_40.f_4942[iParam0]->f_4 = 0;
	if (bParam5)
	{
		if (func_6(func_91(iParam0), 0))
		{
			func_69(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

bool func_10(int iParam0)
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
		iVar0 = func_92(iParam0);
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

void func_11(int iParam0, bool bParam1, int iParam2)
{
	if (!func_93(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_51(iParam0) && !func_10(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_94(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_51(iParam0))
	{
		iParam2 = -1;
	}
	if (func_92(iParam0) == 3 || (func_92(iParam0) == 1 && _0x01f4d242765c6b24(func_94(iParam0))))
	{
		func_96(func_95(iParam0), func_94(iParam0), iParam2);
		if ((!func_93(Global_1572864->f_8) && !func_97(0, 1, 0)) && !func_98(&Global_1935630, 32768))
		{
			iVar0 = func_99(iParam0);
			if (iVar0 != -1)
			{
				func_100(0);
			}
			else if (func_95(iParam0) == 8)
			{
				iVar0 = func_101();
				if (iVar0 != -1)
				{
					func_100(0);
				}
			}
		}
	}
	func_102(iParam0, 0);
	if (func_103(0) == iParam0)
	{
		func_104(1);
		func_105(0);
		func_106(1);
	}
	func_107(iParam0, 1);
	func_108(iParam0);
}

bool func_12(int iParam0)
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

void func_13(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_12(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_109(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_110(iVar0);
	*uParam0 = 0;
}

void func_14(var uParam0)
{
	if (_does_anim_scene_exist(uParam0->f_156))
	{
		_delete_anim_scene(uParam0->f_156);
	}
}

void func_15(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	func_111(vVar0, 0);
}

bool func_16(int iParam0)
{
	func_112(iParam0, &iVar0, &iVar1);
	iVar2 = Global_1905944[iVar0];
	return is_bit_set(iVar2, iVar1);
}

void func_17(int iParam0)
{
	func_112(iParam0, &iVar0, &iVar1);
	func_113(iVar0, iVar1);
}

bool func_18(int iParam0)
{
	return iParam0 != 0;
}

void func_19(int iParam0, int iParam1)
{
	if (!func_75(iParam0))
	{
		return;
	}
	if (!func_114(iParam1))
	{
		return;
	}
	iVar0 = -1;
	bVar1 = false;
	if (func_115(iParam0, iParam1, &iVar0, &bVar1))
	{
		if (bVar1)
		{
			func_116(iParam0, &(Global_40.f_4942[iParam0]->f_8));
		}
		if (iVar0 != -1)
		{
			func_117(iParam0, iVar0);
		}
	}
}

void func_20(int* iParam0)
{
	Var0.f_9 = -589165916;
	Var0.f_78.f_11 = 1;
	_copy_memory(iParam0, &Var0, 99);
}

bool func_21(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (Global_1391438->f_1)
	{
		return true;
	}
	uParam0->f_98++;
	if (uParam0->f_98 < 10)
	{
		return false;
	}
	uParam0->f_98 = 0;
	if (func_97(0, 1, 1) && !func_51(uParam0->f_10))
	{
		return true;
	}
	if (bParam4)
	{
		if ((func_77(*uParam0) && !func_118(*uParam0, &(Global_1391438->f_206[0]), 0)) && !func_118(*uParam0, &(Global_1391438->f_206[1]), 0))
		{
			return true;
		}
	}
	if (func_119() != 1)
	{
		return true;
	}
	if (func_85(*uParam0, 29, 1))
	{
		return true;
	}
	if (!func_6(Global_35, 0))
	{
		return true;
	}
	if (bParam2)
	{
		if (!func_6(func_41(*uParam0), 0))
		{
			*bParam1 = 1;
		}
	}
	if (uParam0->f_9 == -103573613 || uParam0->f_9 == 194099983)
	{
		if (func_120(1) < 10)
		{
			return true;
		}
	}
	if (func_6(uParam0->f_1, 0) && _0x331550b212014b92(uParam0->f_1, Global_35))
	{
		return true;
	}
	if (func_121())
	{
		return true;
	}
	if (bParam3)
	{
		if (func_25() != func_26())
		{
			*bParam1 = 1;
		}
		if (!func_58(uParam0->f_14) && get_distance_between_coords(Global_36, uParam0->f_14, true) > 200f)
		{
			*bParam1 = 1;
		}
	}
	if (((!func_122(&(uParam0->f_78)) && !uParam0->f_78.f_15) && !func_123(180573150, 1)) && !func_123(-404697685, 1))
	{
		func_67("Time window expired for ", 0, 1);
		func_67(" - Cancelling launch.", 1, 0);
		*bParam1 = 0;
		return true;
	}
	if (bParam5)
	{
		if (!func_58(uParam0->f_14))
		{
			if (func_124(uParam0->f_14, 6f, 4, 1))
			{
				func_67("A lock volume now blocks ", 0, 1);
				func_67(" - Cancelling launch.", 1, 0);
				*bParam1 = 0;
				return true;
			}
		}
	}
	if (*bParam1)
	{
		return true;
	}
	return false;
}

int func_22(var uParam0, char* sParam1)
{
	return 1;
}

int func_23(var uParam0)
{
	if (Global_1391438->f_1)
	{
		return 1;
	}
	if (func_85(*uParam0, 29, 1))
	{
		return 1;
	}
	return 0;
}

int func_24(var uParam0, char* sParam1)
{
	if (does_entity_exist(uParam0->f_1) && func_42(uParam0->f_1, Global_36, 1) < 8f)
	{
		Var3.f_4 = -1;
		Var3.f_8 = 2;
		Var3.f_9 = 1;
		Var3.f_10 = 1;
		Var3.f_11 = 1;
		Var3.f_13 = 1;
		Var3.f_14 = 2;
		Var3.f_15 = 2;
		Var3.f_16 = 3;
		Var3.f_19 = 3;
		Var3.f_20 = 1;
		Var3.f_21 = 3;
		Var3.f_22 = 3;
		Var3.f_7 = 500;
		Var3.f_3 = uParam0->f_1;
		Var3.f_4 = 14283;
		_0x66f9eb44342bb4c5(Global_35, &Var3);
	}
	if (uParam0->f_27 > 2)
	{
		func_125(uParam0);
	}
	if (uParam0->f_27 >= 5)
	{
		if (func_126(&(sParam1->f_35)) > 7000 || (func_127(&(sParam1->f_35), 512) && !is_screen_fading_out()))
		{
			func_128();
		}
	}
	if (uParam0->f_27 == 7)
	{
		bVar0 = true;
		bVar1 = true;
		bVar2 = true;
		if (func_6(iLocal_15, 0) && func_6(iLocal_16, 0))
		{
			if (!bLocal_33)
			{
				_set_entity_coords_and_heading(iLocal_15, 677.3219f, -1241.196f, 42.7887f, 13.0988f, true, false, true);
				bLocal_33 = true;
			}
			if (!func_129(iLocal_15, 1868526510))
			{
				set_ped_keep_task(iLocal_15, true);
				task_mount_animal(iLocal_15, iLocal_16, -1, -1, 1f, 262145, 0, 0);
			}
		}
	}
	if (uParam0->f_27 == 5)
	{
		if (func_130(&(sParam1->f_35), uParam0->f_1, 0, 0, 1, 1))
		{
			bVar0 = true;
		}
		if (func_130(&(sParam1->f_35), Global_35, 0, 0, 1, 1))
		{
			bVar1 = true;
		}
		if (func_131(&(sParam1->f_35), 1))
		{
			bVar2 = true;
		}
	}
	if (bVar0)
	{
		if (!bLocal_34)
		{
			if (!func_129(uParam0->f_1, 713668775))
			{
				func_132(7);
				force_ped_motion_state(uParam0->f_1, -668482597, false, 1, false);
				task_follow_nav_mesh_to_coord(uParam0->f_1, 672.8916f, -1229.377f, 43.2386f, 1.2f, -1, 1f, 8193, 40000f);
				set_ped_keep_task(uParam0->f_1, true);
				bLocal_34 = true;
			}
		}
	}
	if (bVar1)
	{
		if (!bLocal_35)
		{
			func_132(7);
			func_133(-668482597, 2000, 0, 1, 1, 0, 0, 0);
			bLocal_35 = true;
		}
	}
	if (bVar2)
	{
		if (!bLocal_36)
		{
			bLocal_36 = true;
		}
	}
	return 1;
}

int func_25()
{
	return Global_1894899->f_2;
}

int func_26()
{
	return Global_40.f_4283.f_1;
}

bool func_27()
{
	return func_134(512);
}

bool func_28(var uParam0, int iParam1)
{
	if ((*uParam0 && iParam1) != 0)
	{
		return true;
	}
	return false;
}

int func_29(var uParam0, char* sParam1)
{
	switch (uParam0->f_28)
	{
		case 0:
			uParam0->f_28 = 1;
			break;
		case 1:
			if (func_135(uParam0))
			{
				_0xed9582b3da8f02b4(func_136(uParam0->f_3));
				uParam0->f_6 = 1;
				uParam0->f_28 = 2;
			}
			break;
		case 2:
			if (_0x5e420ff293ee5472())
			{
				func_138(*uParam0, func_137());
				uParam0->f_1 = func_139(*uParam0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
				if (func_6(uParam0->f_1, 0))
				{
					func_78(*uParam0, 51, 1);
					uParam0->f_28 = 3;
				}
			}
			break;
		case 3:
			func_140(uParam0, sParam1);
			uParam0->f_28 = 4;
			break;
		case 4:
			if (func_141(uParam0))
			{
				uParam0->f_28 = 5;
			}
			break;
		case 5:
			if (func_142(uParam0, sParam1))
			{
				uParam0->f_28 = 6;
			}
			break;
		case 6:
			return 1;
	}
	return 0;
}

int func_30(var uParam0, char* sParam1)
{
	if (func_144(uParam0->f_1, func_143(1495063555, -1)))
	{
		func_145(*uParam0, uParam0->f_1, 1495063555);
		if (!func_146(uParam0->f_1))
		{
			return 0;
		}
		func_147(*uParam0, 1495063555, 1);
		func_148(*uParam0, uParam0->f_1, 1495063555, 1);
	}
	if (!bLocal_31)
	{
		request_model(-821290420, false);
		request_model(-35440630, false);
		request_model(-1006095118, false);
		request_model(-50604564, false);
		request_model(-1074884633, false);
		request_model(-693389207, false);
		request_model(-62869733, false);
		request_model(812805259, false);
		request_model(-1916489787, false);
		request_model(-162225711, false);
		request_model(_get_weapontype_model(1999408598), false);
		_text_database_request("CHRC3A");
		bLocal_31 = true;
	}
	if (!has_model_loaded(-821290420))
	{
		return 0;
	}
	if (!has_model_loaded(-35440630))
	{
		return 0;
	}
	if (!has_model_loaded(-1006095118))
	{
		return 0;
	}
	if (!has_model_loaded(-50604564))
	{
		return 0;
	}
	if (!has_model_loaded(-1074884633))
	{
		return 0;
	}
	if (!has_model_loaded(-693389207))
	{
		return 0;
	}
	if (!has_model_loaded(-62869733))
	{
		return 0;
	}
	if (!has_model_loaded(812805259))
	{
		return 0;
	}
	if (!has_model_loaded(-1916489787))
	{
		return 0;
	}
	if (!has_model_loaded(-162225711))
	{
		return 0;
	}
	if (!has_model_loaded(_get_weapontype_model(1999408598)))
	{
		return 0;
	}
	if (!_text_database_has_loaded("CHRC3A"))
	{
		return 0;
	}
	func_149(&uLocal_37, Global_35, "ARTHUR", 0);
	func_37(&(uParam0->f_31), 16384, 1);
	func_150(&(sParam1->f_35));
	return 1;
}

void func_31(var uParam0, char* sParam1)
{
	iVar0 = func_41(*uParam0);
	if (func_6(iVar0, 0))
	{
		func_152(sParam1->f_534[0], func_151(uParam0->f_8), 0, -163964935, 0, 0, 0, 1, 0);
		func_153(&(sParam1->f_473), &(sParam1->f_534), 0, &(Global_1391438->f_308[uParam0->f_12]), 0, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		func_154(&(sParam1->f_473), 15);
		sParam1->f_552.f_3 = Global_35;
		sParam1->f_552.f_8 = 4;
		sParam1->f_552.f_19 = 4;
		sParam1->f_552.f_21 = 4;
		sParam1->f_552.f_17 = 4;
		sParam1->f_552.f_18 = 4;
		sParam1->f_552.f_7 = 0;
		set_ped_config_flag(iVar0, 259, true);
		if (sParam1->f_472 != -1)
		{
			func_155(*uParam0, sParam1->f_472, 0, 0);
		}
	}
}

bool func_32(var uParam0)
{
	if (!func_6(uParam0->f_1, 0))
	{
		return false;
	}
	if (_does_scenario_point_exist(uParam0->f_33))
	{
		if (!func_156(uParam0))
		{
			return false;
		}
	}
	bVar0 = !func_58(uParam0->f_21);
	if (bVar0 && !func_157(uParam0->f_21, 1, 0, 4))
	{
		if (!func_6(uParam0->f_2, 0))
		{
			uParam0->f_2 = func_158(*uParam0, 1, 1, 0, 0, 1, 1, 1, bVar0, uParam0->f_21, uParam0->f_21.f_1, uParam0->f_21.f_2, uParam0->f_24, 0, 0, 0, 0);
			return false;
		}
		else
		{
			vVar1 = { get_entity_coords(uParam0->f_2, true, false) };
			if (!func_159(vVar1, uParam0->f_21, 1f, 0))
			{
				if (!func_160(uParam0->f_2, 1116471296, -1082130432, -1082130432, -1082130432) && !is_sphere_visible(uParam0->f_21, 5f))
				{
					func_59(uParam0->f_2, uParam0->f_21, uParam0->f_24, 2, 1073741824);
					return false;
				}
				if (!func_129(uParam0->f_2, 242628503))
				{
					open_sequence_task(&iVar4);
					task_follow_nav_mesh_to_coord(0, uParam0->f_21, 1f, -1, 0.25f, 0, uParam0->f_24);
					func_161(0, 696740378, -1, 1, 0, -1082130432);
					func_162(uParam0->f_2, &iVar4, 0, 0, 1, 1);
				}
			}
		}
	}
	if (func_163(&(Global_1391438->f_5), 4096))
	{
		if (!func_164(32768) && is_screen_faded_out())
		{
			do_screen_fade_in(500);
		}
	}
	uParam0->f_30 = 0;
	return true;
}

void func_33(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_75(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_7(iParam0, 50, 1);
		func_7(iParam0, 48, 1);
		func_7(iParam0, 49, 1);
		func_7(iParam0, 51, 1);
		func_7(iParam0, 52, 1);
		func_7(iParam0, 54, 1);
		func_7(iParam0, 55, 1);
	}
	else
	{
		func_78(iParam0, 50, 1);
		func_78(iParam0, 48, 1);
		func_78(iParam0, 49, 1);
		func_78(iParam0, 51, 1);
		if (bParam3)
		{
			func_78(iParam0, 54, 1);
		}
		else
		{
			func_7(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_78(iParam0, 52, 1);
			if (bParam3)
			{
				func_78(iParam0, 55, 1);
			}
		}
		else
		{
			func_7(iParam0, 52, 1);
			if (!bParam3)
			{
				func_7(iParam0, 55, 1);
			}
		}
	}
}

bool func_34(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_165() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_35(int iParam0, bool bParam1)
{
	func_112(iParam0, &iVar0, &iVar1);
	if (!func_166(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_167(iVar0, iVar1);
}

bool func_36(var uParam0)
{
	if (!func_6(uParam0->f_1, 0))
	{
		return false;
	}
	if (_does_scenario_point_exist(uParam0->f_33))
	{
		if ((((!_0x68821369a2ceadd5(uParam0->f_1, func_168(uParam0)) && !func_28(&(uParam0->f_31), 64)) && !_0x99f92061efe908ba()) && !func_98(&Global_1935630, 16384)) && uParam0->f_6)
		{
			uParam0->f_6 = 0;
			func_37(&(uParam0->f_31), 64, 1);
			_0xd65fdc686a031c83(uParam0->f_1, func_168(uParam0), 0.5f);
		}
		else if (func_28(&(uParam0->f_31), 64))
		{
			if (!func_129(uParam0->f_1, -2017877118))
			{
				func_37(&(uParam0->f_31), 64, 0);
				return true;
			}
		}
	}
	return false;
}

void func_37(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 = (*uParam0 || iParam1);
	}
	else
	{
		*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	}
}

void func_38(var uParam0)
{
	func_169(uParam0, 0f);
}

bool func_39(var uParam0)
{
	return func_170(*uParam0, 1);
}

float func_40(var uParam0)
{
	if (!func_39(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_171(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_172() - uParam0->f_1);
}

int func_41(int iParam0)
{
	if (!func_75(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

float func_42(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

bool func_43(var uParam0, char* sParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		uParam0->f_223++;
		if (uParam0->f_223 < 10)
		{
			return (func_127(uParam0, 256) && !func_127(uParam0, 4194304));
		}
		uParam0->f_223 = 0;
	}
	if (is_string_null_or_empty(sParam1))
	{
		return false;
	}
	func_173(uParam0, sParam1);
	if (!func_127(uParam0, 64))
	{
		if (!func_58(func_174(uParam0)))
		{
			func_175(uParam0, 64);
		}
		else
		{
			vVar0 = { func_176(uParam0) };
			if (!func_58(vVar0))
			{
				func_177(uParam0, vVar0);
			}
		}
		return false;
	}
	fVar3 = func_42(Global_35, func_174(uParam0), 1);
	if (func_127(uParam0, 128) || func_127(uParam0, 256))
	{
		if ((fVar3 >= func_178(uParam0) && !bParam2) || !_does_anim_scene_exist(uParam0->f_156))
		{
			if (uParam0->f_241)
			{
				func_179();
				uParam0->f_241 = 0;
			}
			func_180(uParam0);
			if (_does_anim_scene_exist(uParam0->f_156))
			{
				_delete_anim_scene(uParam0->f_156);
			}
			func_181(uParam0);
			func_182(uParam0, 128, 1);
			func_182(uParam0, 256, 1);
			func_182(uParam0, 4096, 1);
			func_182(uParam0, 32768, 1);
			func_182(uParam0, 16777216, 1);
		}
	}
	else if (fVar3 <= func_183(uParam0) || bParam2)
	{
		if (!func_127(uParam0, 128))
		{
			if (!_does_anim_scene_exist(uParam0->f_156))
			{
				if (func_183(uParam0) >= func_178(uParam0))
				{
				}
				Var4 = { func_184(uParam0) };
				if (is_string_null_or_empty(&Var4))
				{
					func_185(uParam0);
				}
				Var4 = { func_184(uParam0) };
				iVar12 = 256;
				if (!func_127(uParam0, 1))
				{
					iVar12 |= 2048;
				}
				uParam0->f_156 = _create_anim_scene(&(uParam0->f_152), iVar12, &Var4, false, true);
				func_186(uParam0, 0, 0, 0, 0);
				func_175(uParam0, 128);
			}
		}
	}
	if (func_127(uParam0, 128))
	{
		if (func_127(uParam0, 256) && !func_127(uParam0, 4194304))
		{
			return true;
		}
		func_187(uParam0);
		if (!uParam0->f_241)
		{
			if (func_188())
			{
				func_189(4096);
				uParam0->f_241 = 1;
			}
		}
		if (_is_anim_scene_loaded(uParam0->f_156, true, false))
		{
			bVar13 = true;
			Var15 = { func_190(uParam0) };
			iVar14 = 0;
			while (iVar14 < 4)
			{
				if (!is_string_null_or_empty(uParam0->f_174[iVar14]))
				{
					if (!are_strings_equal(uParam0->f_174[iVar14], &Var15))
					{
						if (!uParam0->f_174[iVar14]->f_8)
						{
							uParam0->f_174[iVar14]->f_8 = 1;
							_0xdf7b5144e25cd3fe(uParam0->f_156, uParam0->f_174[iVar14]);
							bVar13 = false;
						}
						else if (!_0x23e33cb9f4a3f547(uParam0->f_156, uParam0->f_174[iVar14]))
						{
							bVar13 = false;
						}
					}
				}
				iVar14++;
			}
			if (!func_127(uParam0, 8388608))
			{
				if (_0xa9016536015de29d(uParam0->f_156, &Var15))
				{
					if (!func_127(uParam0, 16777216))
					{
						if ((!_0x0df57f86fe71dbe5(uParam0->f_156, &Var15) && !_0x23e33cb9f4a3f547(uParam0->f_156, &Var15)) && !_0x1f0e401031e20146(uParam0->f_156, &Var15))
						{
							_0xdf7b5144e25cd3fe(uParam0->f_156, &Var15);
						}
						func_175(uParam0, 16777216);
					}
					if (!_0x23e33cb9f4a3f547(uParam0->f_156, &Var15))
					{
						bVar13 = false;
					}
				}
			}
			if (!bVar13)
			{
				return false;
			}
			func_175(uParam0, 256);
			func_182(uParam0, 4194304, 1);
			return true;
		}
	}
	return false;
}

bool func_44(var uParam0, char* sParam1)
{
	if (Global_1359489->f_672)
	{
		Global_1359489->f_672 = 0;
		return true;
	}
	if (func_134(4))
	{
		return false;
	}
	iVar0 = func_191(&(uParam0->f_1), &(sParam1->f_473), 3.75f, &(sParam1->f_534), 0f, 3, 1, "", 1, 0, 4, 2, -1082130432);
	if (func_192())
	{
		if (func_12(sParam1->f_534[0]->f_6))
		{
			func_193(sParam1->f_534[0]->f_6, 0, 0);
		}
	}
	if (func_194(Global_35, uParam0->f_1, 1, 1) > sParam1->f_379)
	{
		if (func_12(sParam1->f_534[0]->f_6))
		{
			func_193(sParam1->f_534[0]->f_6, 0, 0);
		}
	}
	iVar1 = iVar0;
	switch (iVar1)
	{
		case 0:
			func_47(&(uParam0->f_1), &(sParam1->f_473), &(sParam1->f_534), 3.75f, -1082130432, 0);
			return true;
		default:
			if (_0x3ee1f7a8c32f24e1(player_id(), &iVar2, false, false) && get_ped_index_from_entity_index(iVar2) == uParam0->f_1)
			{
				if (!func_28(&(uParam0->f_31), 2))
				{
					func_37(&(uParam0->f_31), 262144, 1);
				}
			}
			break;
	}
	return false;
}

void func_45(int iParam0)
{
	switch (func_165())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 || iParam0);
			break;
	}
}

bool func_46(int iParam0, bool bParam1)
{
	if (bParam1 && !func_12(iParam0))
	{
		return false;
	}
	iVar0 = func_109(iParam0);
	if (!_uiprompt_has_hold_mode((*Global_1945938)[iVar0]->f_3))
	{
		return is_control_pressed(2, (*Global_1945938)[iVar0]->f_4);
	}
	return _uiprompt_is_hold_mode_running((*Global_1945938)[iVar0]->f_3);
}

void func_47(int iParam0, int* iParam1, var uParam2, float fParam3, float fParam4, char* sParam5)
{
	if (is_entity_dead(*iParam0) || !is_bit_set(iParam1->f_21, 0))
	{
		return;
	}
	func_195(iParam1, *iParam0, iParam1->f_56, 0);
	fVar0 = func_196(fParam4 >= 0f, fParam4, vdist(Global_36, get_entity_coords(*iParam0, true, false)));
	func_197(iParam1, fParam3);
	func_198(iParam0, iParam1, uParam2, fVar0);
	func_199(iParam1);
	if (is_bit_set(iParam1->f_21, 20))
	{
		bVar1 = is_string_null_or_empty(sParam5);
		func_200(iParam1, uParam2, iParam0, bVar1, sParam5, fVar0);
		if (!is_ped_on_mount(Global_35) && !is_ped_in_any_vehicle(Global_35, false))
		{
			bVar2 = true;
			if (!is_bit_set(*iParam1, 12))
			{
				bVar2 = func_201(iParam1, iParam0);
			}
			if (bVar2 && !is_bit_set(*iParam1, 13))
			{
				func_202(iParam1);
			}
		}
	}
}

void func_48(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 = (*uParam0 || iParam1);
	}
	else
	{
		*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	}
}

bool func_49(int iParam0)
{
	return func_203(iParam0) == 0;
}

int func_50(int iParam0)
{
	if (&Global_1898329 == 15)
	{
		return -1;
	}
	if (!func_49(iParam0))
	{
		return -1;
	}
	if (func_165() != -1)
	{
		iVar2 = func_204(iParam0);
		if (iVar2 >= 0)
		{
			func_205(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar1 = &Global_1898329;
			(*Global_1898330)[iVar1] = iParam0;
			*(*Global_1898346)[iVar1] = { Var3 };
			func_206(iVar1, 1);
			func_205(iParam0, 1);
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
		iVar2 = func_204(iParam0);
		if (iVar2 >= 0)
		{
			func_205(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < &Global_1898330)
			{
				if (!func_93(Global_1898330[iVar0]))
				{
					(*Global_1898330)[iVar0] = iParam0;
					*(*Global_1898346)[iVar0] = { Var3 };
					func_206(iVar0, 1);
					func_205(iParam0, 1);
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

bool func_51(int iParam0)
{
	iVar0 = func_203(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_52(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_93(iParam0))
	{
		return;
	}
	if (!func_10(iParam0))
	{
		return;
	}
	iVar0 = func_95(iParam0);
	if (bParam1)
	{
		if (func_94(iParam0) == 0)
		{
		}
		else if (!_0x01f4d242765c6b24(func_94(iParam0)))
		{
		}
		else
		{
			if (iVar0 == 1 && iParam0 != (*Global_1835011)[77]->f_1)
			{
				func_208(func_207(iParam0));
			}
			if (func_165() != 0)
			{
				_0xb2a38826e5886e83(func_94(iParam0), 0);
			}
			else
			{
				_0xb2a38826e5886e83(func_94(iParam0), Global_265238->f_79565.f_208.f_17);
			}
		}
	}
	func_209(iParam0);
	if (!func_93(func_103(0)))
	{
		func_102(iParam0, 3);
		func_104(bParam2);
		if (func_165() == -1)
		{
			if (bParam2 == 0)
			{
				_0x55f37f5f3f2475e1();
			}
			func_105(1);
		}
		func_210(iParam0, -1);
		if (bParam1 && !func_164(2))
		{
			func_211(&Global_0, 1024);
		}
		if (func_165() == -1)
		{
			func_212(&(Global_1347343->f_11), 536870912);
			func_213(2);
			Global_1357515 = -1;
			if (iVar0 == 1)
			{
				func_214(0);
			}
			if (iVar0 == 1 || iVar0 == 8)
			{
				func_215(0);
			}
		}
		if (func_165() == -1)
		{
			iVar1 = func_99(iParam0);
			if (iVar1 != -1)
			{
				iVar1 = func_101();
				switch (iVar1)
				{
					case 0:
						func_216(0);
						break;
					case 1:
						func_216(1);
						break;
					case 2:
						func_216(2);
						break;
					case 3:
						func_216(3);
						break;
					case 4:
						func_216(4);
						break;
					case 5:
						func_216(5);
						break;
					case 6:
						func_216(5);
						break;
					case 7:
						func_216(7);
						break;
					case 8:
						func_216(8);
						break;
				}
			}
			else if (iVar0 == 1)
			{
				switch (func_207(iParam0))
				{
					case 7:
					case 8:
					case 36:
						func_216(11);
						break;
				}
			}
			else if (iVar0 == 8)
			{
				switch (func_207(iParam0))
				{
					case 6:
					case 7:
					case 21:
					case 24:
					case 25:
					case 69:
					case 70:
					case 139:
						func_216(11);
						break;
					default:
						iVar1 = func_101();
						if (iVar1 != -1)
						{
							switch (iVar1)
							{
								case 0:
									func_217(0);
									break;
								case 1:
									func_217(1);
									break;
								case 2:
									func_217(2);
									break;
								case 3:
									func_217(3);
									break;
								case 4:
									func_217(4);
									break;
								case 5:
									func_217(5);
									break;
								case 6:
									func_217(5);
									break;
								case 7:
									func_217(7);
									break;
								case 8:
									func_217(8);
									break;
								default:
									break;
							}
						}
						break;
				}
			}
		}
		func_106(1);
	}
	else
	{
		func_210(iParam0, -1);
		func_102(iParam0, 4);
	}
	func_107(iParam0, 0);
}

void func_53(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_54(var uParam0, char* sParam1)
{
	vVar0 = { 709.56f, -1266.74f, 43.63f };
	bVar3 = false;
	switch (iLocal_135)
	{
		case 0:
			iLocal_135 = 1;
			break;
		case 1:
			if (iLocal_138 == 5 && (_is_anim_scene_finished(iLocal_136, false) || _get_anim_scene_progress(iLocal_136) > 0.7f))
			{
				iLocal_135 = 5;
				bVar3 = true;
			}
			break;
		case 5:
			bVar3 = true;
			break;
	}
	if (bVar3)
	{
		if (!func_6(iLocal_15, 0))
		{
			iLocal_15 = func_139(22, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
		}
		else if (!bLocal_30)
		{
			func_218(&(sParam1->f_35), Global_35, "ARTHUR", 0, 0, 0);
			func_218(&(sParam1->f_35), uParam0->f_1, "BillWilliamson", 0, 0, 0);
			func_218(&(sParam1->f_35), iLocal_15, "TILLY", 0, 0, 0);
			if (!does_entity_exist(iLocal_27))
			{
				iLocal_27 = create_object(-162225711, vVar0, true, true, false, false, true);
			}
			func_218(&(sParam1->f_35), iLocal_27, "w_melee_knife02", 0, 0, 0);
			if (!does_entity_exist(iLocal_28))
			{
				iLocal_28 = _create_weapon_object(1999408598, -1, vVar0, true, 1f);
			}
			func_218(&(sParam1->f_35), iLocal_28, "w_rifle_boltaction01", 0, 0, 0);
			if (!does_entity_exist(iLocal_23))
			{
				iLocal_23 = create_object(-693389207, vVar0, true, true, false, false, true);
			}
			func_218(&(sParam1->f_35), iLocal_23, "p_dynamite02x", 0, 0, 0);
			if (!does_entity_exist(iLocal_24))
			{
				iLocal_24 = create_object(-62869733, vVar0, true, true, false, false, true);
			}
			func_218(&(sParam1->f_35), iLocal_24, "p_moneystack01x", 1, 0, 0);
			if (!does_entity_exist(iLocal_20))
			{
				iLocal_20 = create_object(-1006095118, vVar0, true, true, false, false, true);
			}
			func_218(&(sParam1->f_35), iLocal_20, "p_chairfolding02x", 0, 0, 0);
			if (!does_entity_exist(iLocal_21))
			{
				iLocal_21 = create_object(-50604564, vVar0, true, true, false, false, true);
			}
			func_218(&(sParam1->f_35), iLocal_21, "p_cs_map01x", 0, 0, 0);
			if (!does_entity_exist(iLocal_18))
			{
				iLocal_18 = create_object(-821290420, vVar0, true, true, false, false, true);
			}
			func_218(&(sParam1->f_35), iLocal_18, "p_basin01x", 0, 0, 0);
			if (!does_entity_exist(iLocal_19))
			{
				iLocal_19 = create_object(-35440630, vVar0, true, true, false, false, true);
			}
			func_218(&(sParam1->f_35), iLocal_19, "p_bucket02x", 0, 0, 0);
			if (!does_entity_exist(iLocal_22))
			{
				iLocal_22 = create_object(-1074884633, vVar0, true, true, false, false, true);
			}
			func_218(&(sParam1->f_35), iLocal_22, "p_cs_rag02x", 0, 0, 0);
			if (!does_entity_exist(iLocal_25))
			{
				iLocal_25 = create_object(812805259, vVar0, true, true, false, false, true);
			}
			func_218(&(sParam1->f_35), iLocal_25, "p_trap05x", 0, 0, 0);
			if (!does_entity_exist(iLocal_26))
			{
				iLocal_26 = create_object(-1916489787, vVar0, true, true, false, false, true);
			}
			func_218(&(sParam1->f_35), iLocal_26, "p_washboard01x", 0, 0, 0);
			remove_all_ped_weapons(uParam0->f_1, true, true);
			_set_ped_body_component(iLocal_15, 464906090);
			_update_ped_variation(iLocal_15, false, true, true, true, false);
			if (_get_ped_crouch_movement(Global_35))
			{
				_set_ped_crouch_movement(Global_35, false, 0, false);
			}
			bLocal_30 = true;
		}
	}
	return bLocal_30;
}

bool func_55()
{
	if (is_ped_on_mount(player_ped_id()))
	{
		if (!func_129(player_ped_id(), 501393341))
		{
			task_dismount_animal(player_ped_id(), 0, 0, 0, 0, 0);
		}
		return false;
	}
	return true;
}

int func_56(int iParam0)
{
	switch (iParam0)
	{
		case -2036347356:
		case -1341684320:
			return 2;
		case -1567081107:
			return 1;
		case -1511391406:
			return 3;
		default:
			break;
	}
	return -1;
}

void func_57(int iParam0, var uParam1)
{
	Global_1899528->f_61.f_4 = uParam1;
}

bool func_58(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_59(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_219(Global_35) && is_player_teleport_active())
	{
	}
	if (func_220(iParam0))
	{
		if (func_221(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_74(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_59(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_59(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_74(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_74(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_74(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_74(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_74(iParam5, 129))
	{
		if (func_74(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		set_entity_coords_no_offset(iParam0, vParam1, func_74(iParam5, 32), true, true);
		set_entity_heading(iParam0, fParam4);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_74(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_74(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_220(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_74(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_35 && !func_74(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

void func_60(int* iParam0, int iParam1)
{
	if (is_bit_set(iParam0->f_21, 20))
	{
		clear_bit(&(iParam0->f_21), 20);
	}
	if (is_bit_set(iParam0->f_21, 0))
	{
		clear_bit(&(iParam0->f_21), 0);
	}
	clear_bit(&(Global_1956580->f_1), 5);
	func_222(iParam0, &iParam1, 0);
	func_223(&iParam1);
	func_224(iParam0, 0);
	if (is_bit_set(iParam0->f_21, 3))
	{
		func_225(iParam0, 0);
	}
	func_226(iParam0);
	func_227(iParam0, iParam1);
	func_228(iParam0);
	func_229(iParam0);
}

int func_61(var uParam0, char* sParam1)
{
	if (!is_string_null_or_empty(&(sParam1->f_17)))
	{
		return func_230(sParam1);
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_62(int iParam0)
{
	return shift_left(1, iParam0);
}

bool func_63(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_64(int iParam0)
{
	switch (func_165())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 - (Global_1357549->f_1494 && iParam0));
			break;
	}
}

int func_65(int iParam0, bool bParam1)
{
	if (!func_71(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		return 0;
	}
	if (is_entity_dead(Global_1360165[iParam0]))
	{
		return 0;
	}
	if (func_231(iParam0, 0))
	{
		func_232(iParam0, 1);
		return 1;
	}
	if (!func_233())
	{
		return 0;
	}
	if (bParam1)
	{
		func_234(iParam0, 0, "Adding to Group");
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1359489[iVar0] == -1)
		{
			(*Global_1359489)[iVar0] = iParam0;
		}
		else
		{
			iVar0++;
		}
	}
	func_232(iParam0, 1);
	Global_1359489->f_15 = func_235(1);
	func_78(iParam0, 32, 1);
	set_ped_relationship_group_hash(Global_1360165[iParam0], -1247684992);
	set_ped_combat_attributes(Global_1360165[iParam0], 83, true);
	_0x9238a3d970bbb0a9(Global_1360165[iParam0], -1972074710);
	set_ped_config_flag(Global_1360165[iParam0], 152, true);
	if (_0xb7e0590c86e1711f(get_player_group(get_player_index())) != 234527101)
	{
		_0x0de02da3c0f66955(func_41(iParam0), _0xb7e0590c86e1711f(get_player_group(get_player_index())));
		_0x61bda07407754a5c(func_41(iParam0), Global_1391438->f_414.f_37);
	}
	_0x89e59dbd15e21177(func_236(), 0);
	func_237(iParam0);
	Var1 = get_player_ped(get_player_index());
	Var1.f_12 = 3;
	Var1.f_3 = Global_1360165[iParam0];
	Var1.f_7 = func_25();
	Var1.f_8 = 0;
	Var1.f_11 = 10;
	Var1.f_14 = Global_1360165[iParam0];
	_0x88bc5f4aef77fc4e(&Var1, 17);
	return 1;
}

bool func_66(var uParam0, char* sParam1)
{
	return true;
}

void func_67(char* sParam0, int iParam1, int iParam2)
{
}

bool func_68(int iParam0)
{
	if (!func_75(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_70.f_11 == get_id_of_this_thread();
}

void func_69(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_75(iParam1))
	{
		return;
	}
	iVar0 = func_91(iParam1);
	if (func_238(iParam1))
	{
		if (!func_68(iParam1))
		{
			return;
		}
	}
	func_7(iParam1, 39, 1);
	func_239(iParam1, 64, 0);
	(*Global_1360165)[iParam1]->f_70.f_11 = 0;
	func_239(iParam1, 8, 0);
	if (does_entity_exist(iVar0))
	{
		if (!bParam2)
		{
			func_239(iParam1, 512, 1);
			set_ped_keep_task(iVar0, true);
		}
		else
		{
			set_blocking_of_non_temporary_events(iVar0, false);
			func_78(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_240(iParam1, 0, 1, 1, 1);
		}
	}
}

void func_70(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	if (!func_241(iParam0))
	{
		return;
	}
	iVar0 = func_242(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_243(iVar0);
	func_244(iVar0);
	iVar1 = get_id_of_this_thread();
	iVar2 = func_245(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_246(iVar0))
		{
			return;
		}
	}
	func_247(iVar0);
	set_ped_keep_task(iParam0, true);
	if (bParam1 && func_165() == -1)
	{
		if (!_0x88ad6cc10d8d35b2(iParam0))
		{
			set_entity_as_mission_entity(iParam0, true, true);
		}
	}
}

bool func_71(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_72(int iParam0, int iParam1, bool bParam2)
{
	if (!func_75(iParam0))
	{
		return false;
	}
	if (!func_248(iParam0))
	{
		return false;
	}
	if (func_249(iParam0, -2147483648))
	{
		return true;
	}
	if (func_249(iParam0, 1073741824))
	{
		return true;
	}
	iVar0 = func_250(iParam1);
	if (iVar0 < (*Global_1360165)[iParam0]->f_22)
	{
		return true;
	}
	if (iVar0 == (*Global_1360165)[iParam0]->f_22)
	{
		if (bParam2)
		{
			return true;
		}
		if (!func_249(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

void func_73(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_251(*iParam0);
	iVar1 = func_252(*iParam0);
	iVar2 = func_253(*iParam0);
	iVar3 = func_254(*iParam0);
	iVar4 = func_255(*iParam0);
	iVar5 = func_256(*iParam0);
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
	iVar6 = func_257(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_257(iVar1, iVar0);
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
	func_258(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_74(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_75(int iParam0)
{
	return iParam0 > -1;
}

int func_76(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

bool func_77(int iParam0)
{
	return func_259(iParam0, 16, 1);
}

void func_78(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_75(iParam0))
		{
			return;
		}
	}
	func_76(iParam1, &iVar0, &iVar1);
	set_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

void func_79(var uParam0, bool bParam1)
{
	if (bParam1 || !func_39(uParam0))
	{
		func_38(uParam0);
	}
}

void func_80(int iParam0, bool bParam1)
{
	if (!func_75(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_260(&((*Global_1360165)[iParam0]->f_12), 1))
		{
			func_81(iParam0, 1, 0);
		}
	}
	func_81(iParam0, 16, bParam1);
}

void func_81(int iParam0, int iParam1, bool bParam2)
{
	if (!func_75(iParam0))
	{
		return;
	}
	func_261(&((*Global_1360165)[iParam0]->f_13), iParam1, bParam2);
}

void func_82(int iParam0)
{
	func_81(iParam0, 8, 0);
}

void func_83(int iParam0)
{
	func_78(iParam0, 36, 1);
}

int func_84(int iParam0, bool bParam1)
{
	if (!func_71(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_1))
		{
			func_262(iParam0);
		}
	}
	return (*Global_1360165)[iParam0]->f_1;
}

bool func_85(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_75(iParam0))
		{
			return false;
		}
	}
	func_76(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_58[iVar0]), iVar1);
}

void func_86(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_71(iParam0))
	{
		iVar1 = func_41(iParam0);
		if (!is_entity_dead(iVar1))
		{
			iVar0 = get_ped_max_health(iVar1);
			set_ped_config_flag(iVar1, 179, true);
			func_263(iParam0);
		}
	}
	if (func_85(iParam0, 5, 1))
	{
		set_ped_config_flag(func_41(iParam0), 137, true);
	}
}

void func_87(int iParam0, bool bParam1)
{
	if (!func_75(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		set_ped_config_flag(func_41(iParam0), 204, true);
	}
	else
	{
		set_ped_config_flag(func_41(iParam0), 204, false);
	}
}

void func_88(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_89(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_71(iParam0))
	{
		return;
	}
	if (func_77(iParam0))
	{
		if (!func_8(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_85(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_84(iParam0, 0);
	if (!_is_base_a_persistent_character(iVar0))
	{
		return;
	}
	iVar1 = func_41(iParam0);
	if (((does_entity_exist(iVar1) && func_264(iParam0) < 10000f) && !bParam3) && !is_screen_faded_out())
	{
		return;
	}
	if (does_entity_exist(iVar1) && is_entity_attached(iVar1))
	{
		if (((is_ped_active_in_scenario(iVar1, 1) || _0x0c3cb2e600c8977d(iVar1, 1)) || is_ped_on_mount(iVar1)) || is_ped_in_any_vehicle(iVar1, false))
		{
			_0xf1c03a5352243a30(iVar1);
			clear_ped_tasks_immediately(iVar1, true, true);
		}
		detach_entity(iVar1, true, true);
	}
	if (bParam4)
	{
		func_78(iParam0, 2, 1);
	}
	else
	{
		func_265(iParam0);
		func_78(iParam0, 1, 1);
	}
}

void func_90(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_71(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (&Global_40.f_4942[iParam0] - (Global_40.f_4942[iParam0] && iParam1));
}

int func_91(int iParam0)
{
	if (!func_71(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist((*Global_1360165)[iParam0]->f_70))
	{
		(*Global_1360165)[iParam0]->f_70 = 0;
	}
	return (*Global_1360165)[iParam0]->f_70;
}

int func_92(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_266(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

bool func_93(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_94(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_5;
	}
	return Global_1058888->f_498[iParam0]->f_1;
}

int func_95(int iParam0)
{
	if (!func_93(iParam0))
	{
		return 0;
	}
	return func_268(func_267(iParam0));
}

void func_96(int iParam0, int iParam1, int iParam2)
{
	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_165() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	_0xd5910ecf81a2278c(iParam0, iParam1, iParam2, &vVar0);
}

bool func_97(int iParam0, bool bParam1, bool bParam2)
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
		if (func_269())
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
		iVar0 = func_207(&(Global_1898164->f_1[0]));
		if (func_270(iVar0) && func_271((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_93(&(Global_1898164->f_1[0])))
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

bool func_98(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_99(int iParam0)
{
	switch (func_95(iParam0))
	{
		case 1:
			iVar0 = func_207(iParam0);
			return func_272(iVar0);
		case 8:
			iVar1 = func_207(iParam0);
			if (func_271((*Global_1347702)[iVar1]->f_12, 1))
			{
				return func_273(iVar1);
			}
			break;
	}
	return -1;
}

void func_100(bool bParam0)
{
	if (Global_1898077->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_165() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077->f_2 == 4 && Global_1898077->f_12 != Global_1898077->f_13) && !bParam0)
	{
		Global_1898077->f_1 = Global_1898077->f_2;
		Global_1898077->f_12 = Global_1898077->f_13;
		func_274(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_275();
		Global_1898077->f_9 = func_276(Global_1894899->f_2);
		func_277(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_101()
{
	if (!func_278((*Global_1835011)[4]->f_1, 1))
	{
		return 0;
	}
	else if (!func_278((*Global_1347702)[66]->f_15, 1))
	{
		return 1;
	}
	else if (!func_278((*Global_1347702)[67]->f_15, 1))
	{
		return 2;
	}
	else if (!func_278((*Global_1835011)[38]->f_1, 1))
	{
		return 3;
	}
	else if (!func_278((*Global_1347702)[68]->f_15, 1))
	{
		return 4;
	}
	else if (!func_278((*Global_1835011)[59]->f_1, 1))
	{
		return 5;
	}
	else if (!func_278((*Global_1835011)[67]->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_102(int iParam0, int iParam1)
{
	if (!func_93(iParam0))
	{
		return;
	}
	func_279(iParam0, iParam1);
}

int func_103(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

void func_104(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_280(Global_1935630, 4194304);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_53(Global_1935630, 4194304);
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

int func_105(bool bParam0)
{
	if (!bParam0 && func_281(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_106(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_107(int iParam0, bool bParam1)
{
	if (func_165() != -1)
	{
		return;
	}
	if (func_103(0) != iParam0)
	{
		return;
	}
	if (func_282(iParam0))
	{
		if (bParam1)
		{
			func_283(-525676072);
		}
		else
		{
			func_284(-525676072);
		}
	}
}

int func_108(int iParam0)
{
	return func_286(func_285(iParam0));
}

int func_109(int iParam0)
{
	return iParam0;
}

void func_110(int iParam0)
{
	if (!func_287(iParam0))
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

void func_111(vector3 vParam0, int iParam3)
{
	if (func_58(vParam0))
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
			if (func_159(vVar2, vParam0, 2f, 1))
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

void func_112(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

void func_113(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	clear_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_114(int iParam0)
{
	return iParam0 != 0;
}

bool func_115(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	*bParam3 = 0;
	*iParam2 = 0;
	if (func_288(iParam0, iParam1))
	{
		*bParam3 = 1;
	}
	if (func_289(iParam0, iParam1, iParam2))
	{
		return true;
	}
	*iParam2 = -1;
	return *bParam3;
}

void func_116(int iParam0, var uParam1)
{
	iVar0 = func_41(iParam0);
	if ((func_6(iVar0, 0) && func_290(iParam0, *uParam1)) && _0x7c8aa850617651d9(iVar0, *uParam1))
	{
		func_291(iParam0, *uParam1);
	}
	if ((!func_6(iVar0, 0) || !func_290(iParam0, *uParam1)) || !_0x7c8aa850617651d9(iVar0, *uParam1))
	{
		func_292(uParam1);
	}
}

void func_117(int iParam0, int iParam1)
{
	func_116(iParam0, Global_40.f_4942[iParam0]->f_11[iParam1]);
	if (func_114(&(Global_40.f_4942[iParam0]->f_11[iParam1])))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iVar0 < iParam1)
		{
		}
		else if (iVar0 < 9 && func_114(&(Global_40.f_4942[iParam0]->f_11[iVar0 + 1])))
		{
			Global_40.f_4942[iParam0]->f_11[iVar0] = &Global_40.f_4942[iParam0]->f_11[iVar0 + 1];
			Global_40.f_4942[iParam0]->f_11[iVar0]->f_1 = (Global_40.f_4942[iParam0]->f_11[iVar0 + 1])->f_1;
			Global_40.f_4942[iParam0]->f_11[iVar0]->f_2 = (Global_40.f_4942[iParam0]->f_11[iVar0 + 1])->f_2;
			func_294(iParam0, iVar0, func_293(iParam0, iVar0 + 1));
			func_292(Global_40.f_4942[iParam0]->f_11[iVar0 + 1]);
			func_294(iParam0, iVar0 + 1, 0);
		}
		iVar0++;
	}
}

bool func_118(int iParam0, int iParam1, bool bParam2)
{
	if (!func_71(iParam0))
	{
		return false;
	}
	if (!func_77(iParam0))
	{
		return false;
	}
	if (!is_thread_active(iParam1, bParam2))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_129 == iParam1;
}

int func_119()
{
	return Global_40.f_4283.f_4;
}

int func_120(int iParam0)
{
	return _money_get_cash_balance();
}

bool func_121()
{
	return &Global_1935436 == 2;
}

bool func_122(var uParam0)
{
	return func_295(&(uParam0->f_17), get_clock_hours());
}

bool func_123(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_296(iParam0);
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

bool func_124(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (func_58(vParam0))
	{
		return false;
	}
	uVar0 = 4;
	iVar5[0] = 16384;
	iVar5[1] = iParam4;
	return _0x51e52c9687fcdeec(vParam0, fParam3, &uVar0, &iVar5, iParam5);
}

void func_125(var uParam0)
{
	vVar0 = { 670.06f, -1240.17f, 43.86f };
	switch (iLocal_138)
	{
		case 0:
			iLocal_136 = _create_anim_scene(func_297(), 0, 0, false, true);
			if (_does_anim_scene_exist(iLocal_136))
			{
				set_anim_scene_entity(iLocal_136, "BillWilliamson", uParam0->f_1, 0);
				set_anim_scene_entity(iLocal_136, "ARTHUR", Global_35, 0);
				if (!does_entity_exist(iLocal_21))
				{
					iLocal_21 = create_object(-50604564, vVar0, true, true, false, false, true);
				}
				set_anim_scene_entity(iLocal_136, "p_cs_map01x", iLocal_21, 0);
				load_anim_scene(iLocal_136);
				iLocal_138 = 1;
			}
			break;
		case 1:
			if (_is_anim_scene_loaded(iLocal_136, true, false))
			{
				sLocal_137 = "pl_Base";
				_0xdf7b5144e25cd3fe(iLocal_136, sLocal_137);
				iLocal_138 = 2;
			}
			break;
		case 2:
			if (_0x23e33cb9f4a3f547(iLocal_136, sLocal_137))
			{
				func_298();
				sLocal_137 = "pl_leadin";
				_0xdf7b5144e25cd3fe(iLocal_136, sLocal_137);
				iLocal_138 = 3;
			}
			break;
		case 3:
			if (iLocal_135 > 0)
			{
				if (_0x23e33cb9f4a3f547(iLocal_136, sLocal_137))
				{
					func_298();
					iLocal_138 = 5;
				}
			}
			break;
	}
}

int func_126(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_156) || !_is_anim_scene_started(uParam0->f_156, false))
	{
		return -1;
	}
	return floor((_get_anim_scene_time(uParam0->f_156) * 1000f));
}

bool func_127(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

void func_128()
{
	if (bLocal_32)
	{
		return;
	}
	if (!does_entity_exist(iLocal_14))
	{
		iLocal_14 = func_299(&uLocal_29, 3, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0);
	}
	if (!does_entity_exist(iLocal_16))
	{
		iLocal_16 = func_299(&uLocal_29, 22, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0);
	}
	if (!does_entity_exist(iLocal_17))
	{
		Var1.f_10 = 7;
		Var1 = 1;
		Var1.f_1 = 1;
		Var1.f_2 = 0;
		Var1.f_6 = { 675.3539f, -1227.777f, 43.5426f };
		Var1.f_9 = 347.9688f;
		iLocal_17 = func_300(&uVar0, &Var1);
	}
	if (!func_6(iLocal_14, 0))
	{
		return;
	}
	if (!func_301(3, 256))
	{
		func_302(3, iLocal_14, 1);
		return;
	}
	if (!func_6(iLocal_16, 0))
	{
		return;
	}
	if (!func_301(22, 256))
	{
		func_302(22, iLocal_16, 1);
		return;
	}
	if (!func_6(iLocal_17, 0))
	{
		return;
	}
	func_303(676.02f, -1225.79f, 44.56f, 5f, 1, 0, 0, 0, 0);
	_set_entity_coords_and_heading(iLocal_17, 675.3539f, -1227.777f, 43.5426f, 347.9688f, true, false, true);
	task_stand_still(iLocal_17, -1);
	_0x06aade17334f7a40(iLocal_17, 676.02f, -1225.79f, 44.56f);
	_set_entity_coords_and_heading(iLocal_16, 676.74f, -1227.52f, 43.58f, 3f, true, false, true);
	task_stand_still(iLocal_16, -1);
	_0x06aade17334f7a40(iLocal_16, 676.02f, -1225.79f, 44.56f);
	_set_entity_coords_and_heading(iLocal_14, 676.22f, -1224.11f, 43.86f, -168.56f, true, false, true);
	task_stand_still(iLocal_14, -1);
	_0x06aade17334f7a40(iLocal_14, 676.02f, -1225.79f, 44.56f);
	bLocal_32 = true;
}

bool func_129(int iParam0, int iParam1)
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

int func_130(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5)
{
	return func_304(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5);
}

bool func_131(var uParam0, int iParam1)
{
	if (func_127(uParam0, 262144))
	{
		return false;
	}
	if (!_does_anim_scene_exist(uParam0->f_156))
	{
		return false;
	}
	if (!_0x6f1f0b17109309da(uParam0->f_156, "ExportCamera"))
	{
		return false;
	}
	if ((_0xb89fcff19dafff28(uParam0->f_156, "ExportCamera") || (_0x005e6f28dd7ed58d(uParam0->f_156, "ExportCamera") && iParam1)) || _is_anim_scene_active(uParam0->f_156))
	{
		func_175(uParam0, 262144);
		func_305(uParam0, 1);
		return true;
	}
	return false;
}

void func_132(int iParam0)
{
	iParam0 = func_306(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_307(iParam0, 32);
	func_308();
}

void func_133(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	fVar0 = 1f;
	switch (iParam0)
	{
		case -1871534317:
		case 1140525470:
			fVar0 = 0f;
			break;
		case -1415276238:
		case 1823606944:
			fVar0 = 1.5f;
			break;
		case -530524:
		case 898879241:
			fVar0 = 2f;
			break;
		case -1115154469:
			fVar0 = 3f;
			break;
		case -668482597:
		case 147004056:
			break;
	}
	force_ped_motion_state(Global_35, iParam0, bParam2, iParam3, false);
	if (bParam4)
	{
		simulate_player_input_gait(player_id(), fVar0, iParam1, get_entity_heading(Global_35), bParam6, bParam7);
	}
	else
	{
		simulate_player_input_gait(player_id(), fVar0, iParam1, fParam5, bParam6, bParam7);
	}
}

bool func_134(int iParam0)
{
	switch (func_165())
	{
		case -1:
			return (Global_1357549->f_1495 && iParam0) != 0;
	}
	return false;
}

bool func_135(var uParam0)
{
	if (func_97(36866, 0, 1))
	{
		return false;
	}
	if (func_28(&(uParam0->f_31), 8))
	{
		iVar0 = 0;
		while (iVar0 < 27)
		{
			if (func_63(&(uParam0->f_3), func_62(iVar0)))
			{
				if (!func_309(iVar0) && !func_8(iVar0))
				{
					return false;
				}
			}
			iVar0++;
		}
	}
	return true;
}

int func_136(int iParam0)
{
	iVar1 = iParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_310(&iVar1, -2147483648);
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

int func_137()
{
	return Global_40.f_4283;
}

void func_138(int iParam0, int iParam1)
{
	iVar0 = func_311(iParam0, iParam1);
	if ((Global_40.f_4942[iParam0]->f_3 == iVar0 && (*Global_1360165)[iParam0]->f_63 == iVar0) && get_clock_hours() >= 6)
	{
		func_147(iParam0, func_312(iParam0, iParam1, 1, 1), 0);
	}
}

int func_139(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	if (!func_71(iParam0))
	{
		return 0;
	}
	vVar0.x = iParam3;
	vVar0.f_1 = iParam4;
	vVar0.f_2 = iParam5;
	if (((Global_1572864->f_13 || Global_1572864->f_14) || Global_1572864->f_8 != 0) || Global_1391438->f_5 & 8 != 0)
	{
		bVar3 = true;
	}
	switch ((*Global_1360165)[iParam0]->f_11)
	{
		case 0:
			if (func_85(iParam0, 2, 1))
			{
				func_7(iParam0, 2, 1);
			}
			if (func_259(iParam0, 16, 1))
			{
				if (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread()
				{
					if (bParam14)
					{
						func_78(iParam0, 29, 1);
						return 0;
					}
					if (is_thread_active((*Global_1360165)[iParam0]->f_129, false))
					{
					}
					else
					{
						func_9(iParam0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (func_6(Global_1360165[iParam0], 0))
				{
					return Global_1360165[iParam0];
				}
			}
			if (func_6(Global_1360165[iParam0], 0))
			{
				if (is_scripted_speech_playing(Global_1360165[iParam0]))
				{
					return 0;
				}
				if (is_ped_ragdoll(Global_1360165[iParam0]))
				{
					if (bParam1)
					{
						func_234(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_78(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_313(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_78(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_313(iParam0, 1);
			}
			else
			{
				return 0;
			}
		case 1:
			if (bVar3)
			{
				if (iParam13 == 0)
				{
					iParam13 = Global_40.f_4942[iParam0]->f_4;
				}
			}
			if (!func_85(iParam0, 44, 0))
			{
				func_78(iParam0, 44, 0);
			}
			if (func_314(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				func_313(iParam0, 2);
			}
			break;
		case 2:
			set_ped_config_flag(Global_1360165[iParam0], 171, true);
			if (!_0x88ad6cc10d8d35b2(Global_1360165[iParam0]))
			{
				set_entity_as_mission_entity(Global_1360165[iParam0], true, true);
			}
			func_7(iParam0, 18, 1);
			set_entity_visible(Global_1360165[iParam0], true);
			set_ped_relationship_group_hash(Global_1360165[iParam0], 1030835986);
			_0xf74e134f40192884(Global_1360165[iParam0], 0);
			_0x6759bee6762e140b((*Global_1360165)[iParam0]->f_1);
			set_ped_config_flag(Global_1360165[iParam0], 130, false);
			func_33(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_315(iParam0, 0, 0, 1);
			}
			func_7(iParam0, 33, 1);
			func_7(iParam0, 34, 1);
			func_7(iParam0, 29, 1);
			if (!func_58(vVar0) && bParam7)
			{
				func_313(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_313(iParam0, 4);
			}
			else
			{
				func_313(iParam0, 5);
			}
			break;
		case 3:
			if (!is_entity_dead(Global_1360165[iParam0]) && !_0x3ab6c7b0bb0df4b1(Global_1360165[iParam0], -1))
			{
				if (is_entity_attached(Global_1360165[iParam0]))
				{
					if (is_ped_on_mount(Global_1360165[iParam0]) && bParam10)
					{
					}
					else if (is_ped_using_any_scenario(Global_1360165[iParam0]))
					{
						func_234(iParam0, 1, "Teleporting a stolen companion using a scenario.");
					}
					else
					{
						detach_entity(Global_1360165[iParam0], true, true);
					}
				}
				iVar4 = 2;
				if (bParam10)
				{
					iVar4 |= 4;
				}
				func_59(Global_1360165[iParam0], vVar0, iParam6, 2, 1073741824);
			}
			else if (bParam16)
			{
				if (is_ped_active_in_scenario(Global_1360165[iParam0], 0) && !_0x0c3cb2e600c8977d(Global_1360165[iParam0], 1))
				{
					clear_ped_tasks(Global_1360165[iParam0], 1, 0);
				}
				return 0;
			}
			if (iParam13 != 0)
			{
				func_313(iParam0, 4);
			}
			else
			{
				func_313(iParam0, 5);
			}
			break;
		case 4:
			if (iParam13 != 0 || bVar3)
			{
				if (bVar3)
				{
					if (iParam13 == 0)
					{
						iParam13 = Global_40.f_4942[iParam0]->f_4;
					}
				}
				if (func_316(iParam0, iParam13))
				{
					if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
					{
						func_147(iParam0, iParam13, 0);
						func_148(iParam0, Global_1360165[iParam0], iParam13, 1);
						if (func_85(iParam0, 25, 0))
						{
							func_7(iParam0, 25, 0);
						}
						func_78(iParam0, 66, 0);
						func_313(iParam0, 5);
						(*Global_1360165)[iParam0]->f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_313(iParam0, 5);
				}
				func_78(iParam0, 28, 1);
			}
			else
			{
				func_313(iParam0, 5);
			}
			break;
		case 5:
			if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
			{
				func_313(iParam0, 6);
			}
			break;
		case 6:
			if (func_6(Global_1360165[iParam0], 0))
			{
				if (bParam24)
				{
					set_ped_can_use_auto_conversation_lookat(Global_1360165[iParam0], true);
				}
				if (bParam18)
				{
					if (!_0x3ab6c7b0bb0df4b1(Global_1360165[iParam0], -1))
					{
						iVar5 = 0;
						while (iVar5 < 10)
						{
							clear_ped_blood_damage_by_zone(Global_1360165[iParam0], iVar5);
							clear_ped_damage_decal_by_zone(Global_1360165[iParam0], iVar5, "ALL");
							iVar5++;
						}
						_0xe3144b932dfdff65(Global_1360165[iParam0], 0f, -1, 1, 1);
						_0xd049920cd29f6cc8(Global_1360165[iParam0], 0f, -1, 1, 1);
					}
				}
				if (bParam19)
				{
					func_317(iParam0);
				}
				if (bParam21)
				{
					clear_ped_secondary_task(Global_1360165[iParam0]);
					func_318(Global_1360165[iParam0], 1);
				}
			}
			func_313(iParam0, 7);
		case 7:
			func_33(iParam0, bParam9, bParam15, 0);
			func_81(iParam0, 4, bParam11);
			func_83(iParam0);
			if (bParam20)
			{
				if (func_319(Global_1360165[iParam0]))
				{
				}
			}
			func_320(iParam0, Global_1360165[iParam0]);
			if (!bParam23 && !get_ped_config_flag(Global_1360165[iParam0], 503, true))
			{
				set_ped_config_flag(Global_1360165[iParam0], 503, true);
			}
			Global_40.f_4942[iParam0]->f_4 = Global_40.f_4942[iParam0]->f_3;
			func_313(iParam0, 0);
			func_321(iParam0, 16, 1);
			func_7(iParam0, 44, 1);
			(*Global_1360165)[iParam0]->f_1156 = 0;
			(*Global_1360165)[iParam0]->f_129 = get_id_of_this_thread();
			return Global_1360165[iParam0];
	}
	return 0;
}

void func_140(var uParam0, char* sParam1)
{
	if (!is_string_null_or_empty(&(uParam0->f_34)))
	{
		func_322(get_hash_key(&(uParam0->f_34)), 1, 0, 0);
	}
	if (!is_string_null_or_empty(&(uParam0->f_67)))
	{
		if (_does_text_database_exist(&(uParam0->f_67)))
		{
			_text_database_request(&(uParam0->f_67));
		}
	}
	_text_database_request("CMPI");
	Var1 = Global_1359489->f_21;
	Var1.f_2 = 429892159;
	Var1.f_3 = func_323(func_137());
	if (_datafile_get_data_node_index(&(Var1.f_1), &Var1))
	{
		Var1.f_3 = uParam0->f_9;
		if (func_324(Var1, -972717455, &uVar0, 0))
		{
			sParam1->f_471 = uVar0;
		}
		Var1.f_3 = uParam0->f_9;
		if (func_324(Var1, -1140954353, &uVar6, 0))
		{
			sParam1->f_472 = uVar6;
		}
		else
		{
			sParam1->f_472 = -1;
		}
		Var1.f_3 = uParam0->f_9;
		Var1.f_4 = -1225075647;
		if (func_325(Var1, -2047775528, &(sParam1->f_17), 0))
		{
			if (func_326(Var1, -1102408038, &(sParam1->f_375), 0))
			{
				func_327(Var1, -1750702392, &(sParam1->f_378), 0);
			}
		}
	}
	if (are_strings_equal(&(sParam1->f_17), "CASEN_DRNK1"))
	{
		func_328(&(sParam1->f_35), "CASEN_DRNK1");
	}
	if (are_strings_equal(&(sParam1->f_17), "CAHSH_FSH3"))
	{
		func_328(&(sParam1->f_35), "CAHSH_FSH3");
	}
	if (are_strings_equal(&(sParam1->f_17), "PRHM6_INT"))
	{
		func_175(&(sParam1->f_35), 8388608);
		if (func_137() == 1)
		{
			StringCopy(&cVar7, "HorseshoeCamp", 64);
			func_328(&(sParam1->f_35), &cVar7);
			func_175(&(sParam1->f_35), 134217728);
		}
		else if (func_137() == 2)
		{
			StringCopy(&cVar7, "ClemensCamp", 64);
			func_329(&(sParam1->f_35), cVar7);
		}
	}
}

bool func_141(var uParam0)
{
	bVar0 = true;
	if (!is_string_null_or_empty(&(uParam0->f_34)))
	{
		if (!func_330(get_hash_key(&(uParam0->f_34))))
		{
			bVar0 = false;
		}
	}
	if (!is_string_null_or_empty(&(uParam0->f_67)))
	{
		if (!_text_database_has_loaded(&(uParam0->f_67)))
		{
			bVar0 = false;
		}
	}
	if (!_text_database_has_loaded("CMPI"))
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
	}
	return bVar0;
}

bool func_142(var uParam0, char* sParam1)
{
	iVar0 = 1;
	if (func_18(sParam1->f_471))
	{
		if (Global_1391438->f_594 == sParam1->f_471)
		{
			Global_1391438->f_594 = func_331();
		}
		if (!_is_imap_active(sParam1->f_471))
		{
			if (((!_is_position_inside_imap_streaming_extents(sParam1->f_471, Global_36) || func_163(&(Global_1391438->f_5), 8)) || func_164(32768)) || is_screen_faded_out())
			{
				_request_imap(sParam1->f_471);
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	if (!is_string_null_or_empty(&(uParam0->f_34)))
	{
		if (!_does_scenario_point_exist(uParam0->f_33))
		{
			iVar1 = get_hash_key(&(uParam0->f_34));
			uParam0->f_33 = _find_closest_active_scenario_point_of_type(uParam0->f_14, iVar1, 1f, 0, false);
			if (!_does_scenario_point_exist(uParam0->f_33))
			{
				uParam0->f_33 = func_332(iVar1, uParam0->f_14, uParam0->f_17, 2f, -1f, 0);
				iVar0 = 0;
			}
		}
	}
	if (!is_string_null_or_empty(&(sParam1->f_17)))
	{
	}
	func_333(&(sParam1->f_35), player_ped_id(), sParam1, 0, 0, 0);
	iVar10 = 0;
	while (iVar10 < 27)
	{
		if (func_334(iVar10, &(uParam0->f_3)))
		{
			if (func_335(uParam0, &uVar2, iVar10))
			{
				if (func_6(func_41(iVar10), 0))
				{
					func_333(&(sParam1->f_35), func_41(iVar10), &uVar2, 0, 0, 0);
				}
			}
		}
		iVar10++;
	}
	func_336(&(sParam1->f_35), 50f);
	func_337(&(sParam1->f_35), 75f);
	if (!func_58(sParam1->f_375))
	{
		func_177(&(sParam1->f_35), sParam1->f_375);
	}
	return iVar0;
}

int func_143(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 178615350:
			return 331645018;
		case 2094043703:
			return -1395382793;
		case -695701225:
			return -1090160065;
		case 404503428:
			return -1704514526;
		case -1268239471:
			return -1832874334;
		case -1874208704:
			return 1680324116;
		case 1593315648:
			return 989578874;
		case -1559986688:
			return 174754238;
		case 1071744295:
			return -2065784734;
		case 977450639:
			return 2111449038;
		case 1901494236:
			return 1245083301;
		case 713940276:
			return -1949892659;
		case 1744281750:
			return -663077666;
		case 283037683:
			return 1996046145;
		case -2051275045:
			return -306710010;
		case 1495063555:
			return -339275545;
		case 1046468203:
			return 393090546;
		case 1018353621:
			return 114272443;
		case -433615745:
			return 643643053;
		case 777603945:
			return -328334844;
		case -1668922931:
			return -1915831038;
		case -1341683964:
			return 1689938120;
		case 928493661:
			return 861275228;
		case 431390894:
			return -20643141;
		case -301101630:
			return -1187204983;
		case -1155031950:
			return 1883650185;
		case -1248623443:
			return -1437962122;
		case 350498312:
			return 1959714099;
		case -481967001:
			return 1833893952;
		case 513932985:
			return 505715365;
		case -193269670:
			return -1774801049;
		case -1684458716:
			return 1976273473;
		case -973332710:
			return -2045878709;
		case 1658153743:
			return -2072429185;
		case 1842975347:
			return 491764525;
		case -1678882891:
			return -1638703055;
		case -268604689:
			return -1496612359;
		case 1818898449:
			return 30596609;
		case -922193456:
			switch (iParam1)
			{
				case 24:
				case 25:
					return 41788943;
				default:
					break;
			}
			return -99272505;
		case 1205492208:
			return 1598276604;
		case 1199580439:
			return -1443192745;
		case -310473775:
			return -877585857;
		case -1632589543:
			return 1052055818;
		case -1862464078:
			return 1895628185;
		case 296923297:
			iVar0 = func_338(296923297, iParam1);
			return func_339(iVar0);
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		case 1237718549:
			iVar0 = func_338(1237718549, iParam1);
			return func_339(iVar0);
		case -23947011:
			return -456769142;
		case 1295334688:
			return 869636257;
		case 1200878026:
			return 1560123389;
		case -1692022104:
			return -1851470579;
		case 707545953:
			return 890352471;
		case -1532979576:
			return 1391951221;
		case -1642335258:
			return -1491647079;
		case 876797088:
			return 1309207681;
		case -1587546924:
			return -1303789247;
		case 961676983:
			return -1527307534;
		case 1300659195:
			return -309158751;
		case -571427255:
			return -251280159;
		case 837028314:
			return -20984612;
		case -1394723994:
			return -1857650992;
		case -1335291723:
			return -1120526485;
		case -445211559:
			return -757536090;
		case -946772361:
			return 646599895;
		case 1950972546:
			return -1699183538;
		case -1092189504:
			return 389057251;
		case 80515440:
			return -2137653778;
		case 6418928:
			return -211106360;
		case -1648322231:
			return 1074183062;
		case -1065026089:
			return 1087308308;
		case 2062813606:
			return 1709174532;
		case 876535472:
			return -1916145078;
		case -1205468859:
			return -757536090;
		case 1484386316:
			return -800489594;
		case 1254970547:
			return -211106360;
		case 867156718:
			return 241911854;
		case -426171916:
			return 41788943;
	}
	return 41788943;
}

bool func_144(int iParam0, int iParam1)
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

int func_145(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam1))
	{
		return 0;
	}
	if (!func_340(iParam2))
	{
		return 0;
	}
	iVar0 = func_143(iParam2, -1);
	if (!func_144(iParam1, iVar0))
	{
		return 1;
	}
	if (decor_exist_on(iParam1, "metaped_outfit_request") && decor_exist_on(iParam1, "metaped_outfit_request_name"))
	{
		iVar1 = decor_get_int(iParam1, "metaped_outfit_request_name");
		if (iVar1 == iVar0)
		{
			return 1;
		}
		else
		{
			func_341(iParam0, iParam1);
		}
	}
	iVar2 = _request_metaped_outfit(get_entity_model(iParam1), iVar0);
	decor_set_int(iParam1, "metaped_outfit_request", iVar2);
	decor_set_int(iParam1, "metaped_outfit_request_name", iVar0);
	return 1;
}

bool func_146(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return true;
	}
	if (!decor_exist_on(iParam0, "metaped_outfit_request") || !decor_exist_on(iParam0, "metaped_outfit_request_name"))
	{
		return true;
	}
	iVar0 = decor_get_int(iParam0, "metaped_outfit_request_name");
	if (!func_144(iParam0, iVar0))
	{
		return true;
	}
	iVar1 = decor_get_int(iParam0, "metaped_outfit_request");
	return _0x610438375e5d1801(iVar1);
}

void func_147(int iParam0, int iParam1, bool bParam2)
{
	if (!func_71(iParam0))
	{
		return;
	}
	if (!func_316(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_4942[iParam0]->f_3 = iParam1;
	if (bParam2)
	{
		func_78(iParam0, 25, 1);
	}
}

void func_148(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!is_entity_dead(iParam1))
	{
		if (func_340(iParam2))
		{
			iVar0 = func_143(iParam2, -1);
			if (func_144(iParam1, iVar0))
			{
				if (func_342(iParam1, iVar0))
				{
					if (func_343(iParam1, iVar0))
					{
						_apply_ped_metaped_outfit(decor_get_int(iParam1, "metaped_outfit_request"), iParam1, true, false);
						func_344(iParam1);
					}
				}
				else
				{
					_set_ped_body_component(iParam1, iVar0);
				}
			}
		}
		func_345(iParam0, iParam1, 0);
		_update_ped_variation(iParam1, false, true, true, true, false);
		_0xe3144b932dfdff65(iParam1, 0f, -1, 1, 1);
		clear_ped_damage_decal_by_zone(iParam1, 10, "ALL");
		clear_ped_blood_damage_by_zone(iParam1, 3);
		clear_ped_blood_damage_by_zone(iParam1, 0);
		clear_ped_blood_damage_by_zone(iParam1, 5);
		clear_ped_blood_damage_by_zone(iParam1, 7);
		clear_ped_blood_damage_by_zone(iParam1, 8);
		clear_ped_blood_damage_by_zone(iParam1, 9);
		if (bParam3)
		{
			func_78(iParam0, 66, 0);
		}
	}
}

void func_149(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_346(uParam0, iParam1, sParam2))
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

void func_150(var uParam0)
{
	Var0 = { func_190(uParam0) };
	func_328(uParam0, &Var0);
}

char* func_151(int iParam0)
{
	switch (iParam0)
	{
		case 1784895540:
			return "ACT_HUNTING_PROMPT";
		case -1511391406:
			return "ACT_FFF_CAMP_PROMPT";
		case 654481153:
			return "ACT_FISHING_PROMPT";
		case 754620122:
			return "ACT_RUSTLING_PROMPT";
		case -2036347356:
			return "ACT_POKER_PROMPT";
		case -1341684320:
			return "ACT_POKER_CAMP_PROMPT";
		case -919476462:
			return "ACT_COACH_PROMPT";
		case -1670940721:
			return "ACT_BANK_PROMPT";
		case 380107708:
			return "ACT_TRAIN_PROMPT";
		case 565221344:
			return "ACT_HOMEROB_PROMPT";
		case -1700356309:
			return "ACT_BLACKJACK_PROMPT";
		case 1523333387:
			return "ACT_CRAPS_PROMPT";
		case 1744128959:
			return "ACT_HIDEOUT_PROMPT";
		case -1567081107:
			return "ACT_DOMINOES_PROMPT";
		case -1739349092:
			return "ACT_RETURN_PROMPT";
		case -301635006:
			return "ACT_MISSION_PROMPT";
		default:
			break;
	}
	return "ACT_INVALID_PROMPT";
}

void func_152(int* iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = sParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = iParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_12(iParam0->f_6))
		{
			if (is_bit_set(*iParam0, 1))
			{
				func_347(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_348(iParam0->f_6, iParam0->f_5, 0);
			}
			func_193(iParam0->f_6, 0, 1);
		}
		else
		{
			set_bit(iParam0, 14);
		}
		set_bit(iParam0, 0);
	}
	else
	{
		func_349(iParam0, iParam0->f_5);
		if (!is_bit_set(*iParam0, 13))
		{
			set_bit(iParam0, 0);
		}
	}
	set_bit(iParam0, 15);
}

void func_153(int* iParam0, var uParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	iParam0->f_57 = { 0f, 0f, 0f };
	func_350(iParam0, iParam3, 0);
	func_351(uParam1, iParam2);
	func_352(iParam0, iParam4);
	if (!is_bit_set(iParam0->f_21, 0))
	{
		set_bit(&(iParam0->f_21), 0);
	}
	if (fParam5 > -1f)
	{
		func_353(iParam0, fParam5);
	}
	if (iParam6 == 1)
	{
		func_154(iParam0, 17);
	}
	if (iParam7 == 1)
	{
		func_154(iParam0, 16);
	}
	if (iParam8 == 1)
	{
		func_154(iParam0, 15);
	}
	if (iParam9 == 1)
	{
		func_154(iParam0, 13);
	}
	if (iParam10 == 1)
	{
		func_154(iParam0, 12);
	}
	if (iParam11 == 1)
	{
		func_154(iParam0, 11);
	}
	if (iParam12 == 1)
	{
		func_154(iParam0, 8);
	}
	if (iParam13 == 1)
	{
		func_154(iParam0, 10);
	}
	if (iParam14 == 1)
	{
		func_154(iParam0, 9);
	}
	if (iParam15 == 1)
	{
		func_154(iParam0, 18);
	}
	if (iParam16 == 1)
	{
		func_154(iParam0, 20);
	}
	if (iParam17 == 1)
	{
		func_154(iParam0, 19);
	}
}

void func_154(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

int func_155(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!func_71(iParam0))
	{
		return 0;
	}
	func_354(iParam0);
	iVar0 = -1;
	if (!func_355(iParam0, iParam1, &iVar0, 1, iParam2, iParam3))
	{
		return 0;
	}
	if (!func_356(iParam0, iParam1))
	{
	}
	return 1;
}

bool func_156(var uParam0)
{
	switch (uParam0->f_30)
	{
		case 0:
			if (!_does_volume_exist(uParam0->f_18))
			{
				uParam0->f_18 = _create_volume_cylinder_with_custom_name(uParam0->f_14, 0f, 0f, uParam0->f_17, func_357(uParam0), "Activity Start Pos");
				_0xb56d41a694e42e86(uParam0->f_18, 0, 0, 0, -1, -1, 0);
				_0x2fcd528a397e5c88(uParam0->f_18, 16384);
				uParam0->f_19 = _0x4c39c95ae5db1329(uParam0->f_18, 0, 15);
				uParam0->f_20 = func_358(uParam0->f_18, "Activity", 1, 0, 0, 0, -1082130432);
			}
			if (func_359(&(uParam0->f_18), uParam0->f_3))
			{
				return false;
			}
			set_ped_config_flag(uParam0->f_1, 389, true);
			if (func_360(uParam0))
			{
				uParam0->f_30 = 3;
			}
			else if (func_361(uParam0->f_9))
			{
			}
			else
			{
				uParam0->f_30 = 1;
			}
			break;
		case 1:
			iVar0 = _get_ped_using_scenario_point(uParam0->f_33);
			if (is_ped_active_in_scenario(uParam0->f_1, 1) && iVar0 != uParam0->f_1)
			{
				if (!_0x0c3cb2e600c8977d(uParam0->f_1, 0))
				{
					clear_ped_tasks(uParam0->f_1, 1, 0);
				}
				return false;
			}
			if (!does_entity_exist(iVar0) || iVar0 == uParam0->f_1)
			{
				clear_ped_tasks(uParam0->f_1, 1, 0);
				uParam0->f_30 = 2;
			}
			break;
		case 2:
			open_sequence_task(&iVar1);
			task_stand_still(0, 1000);
			_task_use_scenario_point(0, uParam0->f_33, 0, -1, true, false, 0, false, -1f, false);
			func_162(uParam0->f_1, &iVar1, 0.1f, 0.2f, 1, 1);
			uParam0->f_30 = 4;
			break;
		case 3:
			if (func_360(uParam0))
			{
				clear_ped_tasks_immediately(uParam0->f_1, false, true);
				func_59(uParam0->f_1, _get_scenario_point_coords(uParam0->f_33, true), 0f, 2, 1073741824);
				_task_use_scenario_point(uParam0->f_1, uParam0->f_33, 0, -1, false, true, 0, false, -1f, false);
				uParam0->f_30 = 5;
			}
			break;
		case 4:
			if (func_360(uParam0))
			{
				uParam0->f_30 = 3;
			}
			else if (_0x9c54041bb66bcf9e(uParam0->f_1, uParam0->f_33) && is_ped_active_in_scenario(uParam0->f_1, 0))
			{
				uParam0->f_30 = 5;
			}
			break;
		case 5:
			return true;
	}
	return false;
}

bool func_157(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	if (func_58(vParam0))
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

int func_158(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16)
{
	if (!func_75(iParam0))
	{
		return 0;
	}
	iVar1 = func_299(&uVar0, iParam0, bParam1, bParam2, iParam3, iParam4, iParam5, bParam7, bParam8, iParam9, iParam10, iParam11, iParam12, bParam13, bParam14, bParam15, bParam6, iParam16);
	if (!does_entity_exist(iVar1))
	{
		return 0;
	}
	if (bParam6)
	{
		if (!is_entity_dead(iVar1) && _0xa0bc8faed8cfeb3c(iVar1))
		{
			return iVar1;
		}
	}
	else
	{
		return iVar1;
	}
	return 0;
}

bool func_159(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

bool func_160(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_42(iParam0, Global_36, 1);
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

void func_161(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, float fParam5)
{
	_task_start_scenario_in_place(iParam0, iParam1, iParam2, bParam3, iParam4, fParam5, false);
}

void func_162(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

bool func_163(var uParam0, int iParam1)
{
	if ((*uParam0 && iParam1) != 0)
	{
		return true;
	}
	return false;
}

bool func_164(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_165()
{
	return Global_1572887->f_12;
}

bool func_166(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_362(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_363(iParam0))
	{
		return false;
	}
	if (func_364(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_365(iParam0, 1)) || func_164(32768))
	{
		if (!func_365(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_366())
	{
		return false;
	}
	return true;
}

void func_167(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

int func_168(var uParam0)
{
	iVar0 = func_367(uParam0->f_1, Global_35, 1060437492);
	switch (iVar0)
	{
		case 0:
			return -700479906;
		case 3:
			return -630213949;
		case 2:
			return -630705751;
		case 1:
			return -1156705763;
		default:
			break;
	}
	return -700479906;
}

void func_169(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_172() - fParam1);
	func_368(uParam0, 1);
	func_369(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_170(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_171(var uParam0)
{
	return func_170(*uParam0, 2);
}

float func_172()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_173(var uParam0, char* sParam1)
{
	if (func_127(uParam0, 8192))
	{
		return;
	}
	if (_does_string_exist_in_string(sParam1, "cutscene@"))
	{
		iVar0 = _0x94e8ca3dee952789(sParam1, "@");
		if (_0x94e8ca3dee952789(sParam1, "@") > 2)
		{
			MemCopy(&(uParam0->f_152), {func_370("cutscene@", _0x5b4a8121a47d844d((iVar0 - 1)), 1, 63)}, 4);
		}
		_0x3c3c7b1b5ec08764();
	}
	else
	{
		MemCopy(&(uParam0->f_152), {func_370("cutscene@", sParam1, 1, 63)}, 4);
	}
	func_175(uParam0, 8192);
}

Vector3 func_174(var uParam0)
{
	return uParam0->f_5;
}

void func_175(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

Vector3 func_176(var uParam0)
{
	MemCopy(&uVar0, {func_371(uParam0)}, 8);
	if (!_does_anim_scene_exist(uParam0->f_157))
	{
		uParam0->f_157 = _create_anim_scene(&(uParam0->f_152), 0, 0, false, true);
	}
	else if (_is_anim_scene_metadata_loaded(uParam0->f_157, false))
	{
		if (_get_anim_scene_entity_matrix(uParam0->f_157, func_372(Global_35), &vVar14, false, 0, 2))
		{
			vVar8 = { vVar14 };
		}
		else
		{
			_get_anim_scene_origin(uParam0->f_157, &vVar8, &uVar11, 2);
		}
		_delete_anim_scene(uParam0->f_157);
		return vVar8;
	}
	return 0f, 0f, 0f;
}

void func_177(var uParam0, vector3 vParam1)
{
	if (func_58(vParam1))
	{
		return;
	}
	uParam0->f_5 = { vParam1 };
}

float func_178(var uParam0)
{
	return uParam0->f_147;
}

void func_179()
{
	Global_1946804->f_858 = (Global_1946804->f_858 - 1);
	if (Global_1946804->f_858 <= 0)
	{
		Var0 = 35;
		func_373(Var0);
	}
}

void func_180(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_156))
	{
		return;
	}
	if (!_is_anim_scene_loaded(uParam0->f_156, true, false))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!is_string_null_or_empty(uParam0->f_174[iVar0]) && (_0x23e33cb9f4a3f547(uParam0->f_156, uParam0->f_174[iVar0]) || _0x0df57f86fe71dbe5(uParam0->f_156, uParam0->f_174[iVar0])))
		{
			_0xae6ada8fe7e84acc(uParam0->f_156, uParam0->f_174[iVar0]);
		}
		uParam0->f_174[iVar0]->f_8 = 0;
		iVar0++;
	}
}

void func_181(var uParam0)
{
	if (_does_volume_exist(uParam0->f_4))
	{
		if (func_127(uParam0, 16))
		{
			_0xa1cfb35069d23c23(uParam0->f_4);
			_0x74c2b3dc0b294102(uParam0->f_4);
			func_374(uParam0);
			_0xd17672447692478e(uParam0->f_4, 0);
		}
	}
	if (func_127(uParam0, 8))
	{
		_delete_volume(uParam0->f_4);
		func_182(uParam0, 8, 1);
	}
	uParam0->f_4 = 0;
	func_182(uParam0, 16, 1);
}

void func_182(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
	if (((iParam1 == 512 && bParam2) && _does_anim_scene_exist(uParam0->f_156)) && _0xef324e9550a394d5(uParam0->f_156))
	{
		_0x8a8208ae92bf87a5(uParam0->f_156);
	}
}

float func_183(var uParam0)
{
	return uParam0->f_146;
}

struct<8> func_184(var uParam0)
{
	return uParam0->f_158;
}

void func_185(var uParam0)
{
	Var0 = { func_375() };
	func_328(uParam0, &Var0);
}

void func_186(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_127(uParam0, 16))
	{
		return;
	}
	if (!_does_volume_exist(uParam0->f_4) && !func_376(uParam0->f_5, 0f, 0f, 0f))
	{
		uParam0->f_4 = _create_volume_box_with_custom_name(uParam0->f_5, 0f, 0f, 0f, 5f, 5f, 5f, func_377());
		func_175(uParam0, 8);
	}
	if (_does_volume_exist(uParam0->f_4))
	{
		_0xb56d41a694e42e86(uParam0->f_4, iParam1, iParam4, 0, -1, -1, iParam3);
		_0x18262cafebb5fbe1(uParam0->f_4, iParam1, 0, 0, -1, -1, 0);
		func_378(uParam0, uParam0->f_4, 0, 1);
		_0xc1799fafd2fdf52b(uParam0->f_4, 0, 0, iParam2);
		func_175(uParam0, 16);
	}
}

void func_187(var uParam0)
{
	if ((!func_127(uParam0, 32768) && _does_anim_scene_exist(uParam0->f_156)) && _is_anim_scene_metadata_loaded(uParam0->f_156, false))
	{
		func_379(uParam0);
		func_380(uParam0, 0);
		if (!_is_anim_scene_loading(uParam0->f_156, true))
		{
			load_anim_scene(uParam0->f_156);
		}
		func_175(uParam0, 32768);
	}
}

bool func_188()
{
	return Global_1946804->f_1497 != Global_1946804->f_2163.f_1;
}

void func_189(int iParam0)
{
	if (func_381(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_373(Var0);
}

struct<8> func_190(var uParam0)
{
	Var0 = { func_382(uParam0) };
	if (is_string_null_or_empty(&Var0))
	{
		Var0 = { func_383() };
	}
	return Var0;
}

int func_191(int iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	if (!is_entity_dead(*iParam0))
	{
		func_384(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !_does_volume_exist(iParam9)) || is_entity_in_volume(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (is_ambient_speech_playing(*iParam0) || is_scripted_speech_playing(*iParam0));
		fVar8 = func_196(fParam12 >= 0f, fParam12, vdist(Global_36, get_entity_coords(*iParam0, true, false)));
		func_47(iParam0, iParam1, uParam3, fParam2, fVar8, sParam7);
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
			func_38(&(iParam1->f_13));
		}
		if (func_385(*iParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_386(iParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_191(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_223(iParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!get_ped_config_flag(*iParam0, 317, true))
						{
							func_387(*iParam0, 1, 1);
						}
					}
					else if (func_388(iParam1, 22))
					{
						func_387(*iParam0, 0, 1);
					}
				}
				if (func_389(iParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_390(iParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_391(iParam8);
					func_392(iParam1, uParam3);
					if (func_393(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (is_bit_set(uParam3[iParam1->f_1], 20))
								{
									func_394(uParam3);
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
					func_395(iParam1, uParam3, fVar8);
					if (func_396(*iParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (is_bit_set(*iParam1, 1))
					{
						func_397(uParam3, 0, 0, 1, 1);
						clear_bit(iParam1, 1);
					}
				}
				break;
			case 3:
				if (func_389(iParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_398(*iParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_393(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_390(iParam0, func_389(iParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_391(iParam8);
					func_392(iParam1, uParam3);
				}
				else if (is_bit_set(*iParam1, 1))
				{
					func_397(uParam3, 0, 0, 1, 1);
					func_399(iParam1, 1);
				}
				if (is_bit_set(iParam1->f_21, 20))
				{
					if (is_ped_on_mount(Global_35))
					{
						if (!func_129(Global_35, 501393341) && !func_129(Global_35, 242628503))
						{
							iVar9 = 0;
							if (func_367(Global_35, *iParam0, 1f) == 3)
							{
								iVar9 = 131072;
							}
							else
							{
								iVar9 = 262144;
							}
							iParam1->f_28 = get_mount(Global_35);
							task_dismount_animal(Global_35, iVar9, 0, 0, 0, 0);
						}
					}
					else if ((((!is_ped_on_mount(Global_35) && func_6(iParam1->f_28, 0)) && func_400(Global_35, iParam1->f_28, iParam1->f_29, 1)) && !func_129(iParam1->f_28, 518218985)) && !func_129(iParam1->f_28, 242628503))
					{
						task_smart_flee_ped(iParam1->f_28, Global_35, (iParam1->f_29 + 3f), -1, 2304, 1f, 0);
						iParam1->f_28 = 0;
					}
					else if (is_ped_in_any_vehicle(Global_35, false))
					{
						if (!func_129(Global_35, -828834893) && !func_129(Global_35, 242628503))
						{
							iVar10 = 0;
							if (func_367(Global_35, *iParam0, 1f) == 3)
							{
								iVar10 = 131072;
							}
							else
							{
								iVar10 = 262144;
							}
							task_leave_any_vehicle(Global_35, 0, iVar10);
						}
					}
					else if (!(is_bit_set(*iParam1, 12) || func_201(iParam1, iParam0)))
					{
					}
					else if (!(is_bit_set(*iParam1, 13) || func_202(iParam1)))
					{
					}
					else if (!func_401(iParam1))
					{
					}
					else
					{
						if (fParam4 > 0f)
						{
							func_38(&(iParam1->f_18));
							bVar11 = iParam8 & 128 != false;
							if (bVar11)
							{
								func_402(uParam3, 0, 0);
							}
							iParam1->f_2 = 4;
						}
						if (iParam1->f_2 != 2 && iParam1->f_2 != 4)
						{
							iVar0 = iParam1->f_1;
							if (iVar0 != -1)
							{
								iParam1->f_1 = -1;
							}
							return iVar0;
						}
					}
				}
				break;
			case 4:
				if (func_403(iParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_389(iParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_398(*iParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_393(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_390(iParam0, func_389(iParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_391(iParam8);
				}
				else if (is_bit_set(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_397(uParam3, 0, 0, 1, 1);
					}
					func_399(iParam1, 1);
				}
				func_395(iParam1, uParam3, fVar8);
				if (func_403(iParam0, iParam1, fParam4, bVar6))
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
			func_404(iParam1, uParam3);
			set_bit(iParam1, 3);
		}
	}
	return -1;
}

bool func_192()
{
	return Global_1327590->f_19745;
}

void func_193(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_12(iParam0))
	{
		return;
	}
	iVar0 = func_109(iParam0);
	if (bParam1)
	{
		func_405(iParam0, 4);
		func_406(iVar0, 1);
		func_407(iVar0, 1);
	}
	else
	{
		func_408(iParam0, 4);
		func_407(iVar0, 0);
	}
}

float func_194(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_195(int* iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!func_6(iParam1, 0))
	{
		return 0;
	}
	if (!is_bit_set(iParam0->f_21, 16))
	{
		return 0;
	}
	if (!does_blip_exist(iParam2) && is_bit_set(iParam0->f_21, 16))
	{
		return 0;
	}
	if (!is_bit_set(iParam0->f_21, 17))
	{
		_0x97f6f158cc5b5ca2(iParam1, iParam2);
		set_bit(&(iParam0->f_21), 17);
	}
	if (!is_bit_set(iParam0->f_21, 18) && iParam3 != 0)
	{
		if (!_0x3cb8859f04763c78(iParam1, iParam2))
		{
			_0xbb68d4d3ca3de402(iParam1, iParam3);
		}
		set_bit(&(iParam0->f_21), 18);
	}
	if (is_bit_set(iParam0->f_21, 17) && is_bit_set(iParam0->f_21, 18))
	{
		return 1;
	}
	return 0;
}

float func_196(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_197(int* iParam0, float fParam1)
{
	if (!is_bit_set(*iParam0, 14))
	{
		iParam0->f_26 = fParam1;
	}
}

void func_198(var uParam0, int* iParam1, var uParam2, float fParam3)
{
	if (is_entity_dead(*uParam0))
	{
		return;
	}
	func_409(uParam0, iParam1);
	fVar0 = func_196(fParam3 >= 0f, fParam3, vdist(Global_36, get_entity_coords(*uParam0, true, false)));
	if (fVar0 <= iParam1->f_26 || is_bit_set(iParam1->f_21, 20))
	{
		func_392(iParam1, uParam2);
		func_410(iParam1);
		func_411(iParam1);
		if (!is_bit_set(*iParam1, 17))
		{
			if (!is_entity_dead(Global_35))
			{
				if (!is_ped_on_mount(player_ped_id()))
				{
					set_ped_max_move_blend_ratio(player_ped_id(), iParam1->f_27);
				}
				else if (!is_entity_dead(get_mount(player_ped_id())))
				{
					set_ped_max_move_blend_ratio(get_mount(player_ped_id()), iParam1->f_27);
				}
			}
		}
		func_412(0);
		_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
		set_all_random_peds_flee_this_frame(get_player_index());
		set_ped_reset_flag(Global_35, 25, true);
		set_ped_reset_flag(Global_35, 134, true);
		_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
		if (!is_bit_set(iParam1->f_21, 2))
		{
			if (!_does_volume_exist(iParam1->f_35))
			{
				iParam1->f_35 = _create_volume_cylinder(get_entity_coords(*uParam0, true, false), 0f, 0f, 0f, iParam1->f_26, iParam1->f_26, 20f);
			}
			else
			{
				func_413(iParam1->f_35, 0, 0);
				set_bit(&(iParam1->f_21), 2);
			}
		}
		if ((is_ped_in_any_vehicle(Global_35, false) && is_bit_set(*iParam1, 16)) || (is_ped_on_mount(Global_35) && is_bit_set(*iParam1, 15)))
		{
			iVar1 = 0;
			if (func_367(Global_35, *uParam0, 1f) == 3)
			{
				iVar1 = 131072;
			}
			else
			{
				iVar1 = 262144;
			}
			if (is_ped_on_mount(Global_35))
			{
				iParam1->f_28 = get_mount(Global_35);
			}
			bVar2 = (((is_ped_in_any_vehicle(Global_35, false) && is_bit_set(*iParam1, 16)) || (is_ped_on_mount(Global_35) && is_bit_set(*iParam1, 15))) && !_0x99f92061efe908ba());
			bVar3 = is_ped_in_any_vehicle(Global_35, false);
			func_414(Global_35, get_entity_coords(*uParam0, true, false), bVar2, iParam1->f_30, iParam1->f_31, iParam1->f_32, func_196(bVar3, iParam1->f_33, iParam1->f_34), 0, 1, 0, iVar1);
		}
		else if (((((is_bit_set(*iParam1, 15) && !is_ped_on_mount(Global_35)) && func_6(iParam1->f_28, 0)) && func_400(Global_35, iParam1->f_28, (iParam1->f_26 + 1.75f), 1)) && !func_129(iParam1->f_28, 518218985)) && !func_129(iParam1->f_28, 242628503))
		{
			clear_ped_tasks(iParam1->f_28, 1, 0);
			task_smart_flee_coord(iParam1->f_28, Global_36, (iParam1->f_26 + 1.75f), -1, 256, 0.101f);
			iParam1->f_28 = 0;
		}
	}
}

void func_199(int* iParam0)
{
	if (is_bit_set(*iParam0, 7))
	{
		if (is_bit_set(iParam0->f_21, 3))
		{
			func_225(iParam0, 0);
		}
		return;
	}
	if (is_bit_set(iParam0->f_21, 3))
	{
		func_79(&(iParam0->f_22), 0);
		if (iParam0->f_25 == 0f || func_415(&(iParam0->f_22), iParam0->f_25))
		{
			set_bit(&(Global_1956580->f_1), 5);
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			_hide_hud_component(724769646);
			if (!is_bit_set(iParam0->f_21, 4))
			{
				set_bit(&(iParam0->f_21), 4);
			}
		}
	}
}

void func_200(int* iParam0, var uParam1, int iParam2, bool bParam3, char* sParam4, float fParam5)
{
	if (is_entity_dead(*iParam2))
	{
		return;
	}
	fVar0 = func_196(fParam5 >= 0f, fParam5, vdist(Global_36, get_entity_coords(*iParam2, true, false)));
	if ((fVar0 >= (iParam0->f_26 + 0.5f) && is_bit_set(iParam0->f_21, 20)) && is_bit_set(*iParam0, 18))
	{
		if (!func_129(Global_35, -875674219))
		{
			task_turn_ped_to_face_entity(Global_35, *iParam2, 5000, -1082130432, -1082130432, -1082130432);
		}
		set_ped_max_move_blend_ratio(Global_35, 0f);
	}
	if (is_bit_set(iParam0->f_21, 5))
	{
		set_ped_reset_flag(Global_35, 175, bParam3);
	}
	set_ped_reset_flag(Global_35, 264, true);
	if (bParam3 == 0)
	{
		func_416(iParam0, uParam1, iParam2, sParam4);
	}
	if (!is_bit_set(iParam0->f_21, 5))
	{
		_0x3946fc742ac305cd(get_player_index(), *iParam2, "ForcedILO", 0f, 0f, 0f, *iParam2, 0);
		set_bit(&(iParam0->f_21), 5);
	}
}

bool func_201(int* iParam0, int iParam1)
{
	if (_0xa24c1d341c6e0d53(1, 0, 0))
	{
		return true;
	}
	if (!_is_ped_carrying(Global_35) && !func_129(Global_35, -208384378))
	{
		if (!is_bit_set(iParam0->f_21, 19) && is_bit_set(iParam0->f_21, 4))
		{
			vVar0 = { iParam0->f_57 };
			iParam0->f_57 = { func_417(*iParam1, Global_35, 2.5f) };
			iParam0->f_57 = { iParam0->f_57 + Global_36 };
			iParam0->f_57.f_2 = (iParam0->f_57.f_2 + 3f);
			func_418(iParam0->f_60, iParam0->f_57);
			iParam0->f_57 = { vVar0 };
			set_bit(&(iParam0->f_21), 19);
		}
		return true;
	}
	else if (_is_ped_carrying(Global_35) && !func_129(Global_35, -208384378))
	{
		if (func_419(Global_35))
		{
			iParam0->f_60 = func_420();
		}
		else
		{
			iParam0->f_60 = _get_first_entity_ped_is_carrying(Global_35);
		}
		if (does_entity_exist(iParam0->f_60))
		{
			clear_ped_tasks(Global_35, 1, 0);
			task_place_carried_entity_at_coord(Global_35, iParam0->f_60, Global_36, 2f, 9);
		}
	}
	return false;
}

bool func_202(int* iParam0)
{
	if (is_bit_set(*iParam0, 13))
	{
		return true;
	}
	if (is_bit_set(iParam0->f_21, 7))
	{
		disable_control_action(0, -128997553, false);
		disable_control_action(0, 130948705, false);
		disable_control_action(0, -654888872, false);
		disable_control_action(0, -1304887797, false);
	}
	if (is_bit_set(iParam0->f_21, 6))
	{
		if (func_422(func_421(Global_35, 0, 1, 0)) || func_422(func_421(Global_35, 1, 1, 0)))
		{
			clear_bit(&(iParam0->f_21), 6);
			clear_bit(&(iParam0->f_21), 7);
		}
		else
		{
			return true;
		}
	}
	if (!is_bit_set(iParam0->f_21, 7))
	{
		if (!func_422(func_421(Global_35, 0, 1, 0)) && !func_422(func_421(Global_35, 1, 1, 0)))
		{
			func_88(&(iParam0->f_52));
			set_bit(&(iParam0->f_21), 7);
			set_bit(&(iParam0->f_21), 6);
			return true;
		}
		else if (((func_422(func_421(Global_35, 0, 1, 0)) || func_422(func_421(Global_35, 1, 1, 0))) && !func_129(Global_35, 716706914)) && !func_129(Global_35, 242628503))
		{
			_0x94a3c1b804d291ec(Global_35, 1, 0, 1, 0);
			_hide_ped_weapons(Global_35, 2, false);
			task_swap_weapon(Global_35, 0, 0, 0, 0);
			_0x2208438012482a1a(Global_35, false, false);
			func_79(&(iParam0->f_52), 0);
			set_bit(&(iParam0->f_21), 7);
		}
	}
	else if (is_bit_set(iParam0->f_21, 7))
	{
		bVar0 = func_423(&(iParam0->f_52)) >= 1.5f;
		if ((!func_422(func_421(Global_35, 0, 1, 0)) && !func_422(func_421(Global_35, 1, 1, 0))) || bVar0)
		{
			func_88(&(iParam0->f_52));
			set_bit(&(iParam0->f_21), 6);
			return true;
		}
	}
	return false;
}

int func_203(int iParam0)
{
	if (!func_93(iParam0))
	{
		return -1;
	}
	return func_92(iParam0);
}

int func_204(int iParam0)
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

void func_205(int iParam0, bool bParam1)
{
	if (!func_93(iParam0))
	{
		return;
	}
	if (!func_49(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_94(iParam0) == 0)
		{
		}
		else if (!_0x01f4d242765c6b24(func_94(iParam0)))
		{
			_0xca41e86545413b5b(func_95(iParam0), func_207(iParam0), func_424(iParam0), func_94(iParam0), Global_36);
		}
	}
	func_102(iParam0, 1);
	bParam1 = bParam1;
}

void func_206(int iParam0, bool bParam1)
{
	if ((*Global_1898346)[iParam0]->f_2 == 0 || bParam1)
	{
		(*Global_1898346)[iParam0]->f_2 = func_267(Global_1898330[iParam0]);
		func_425((*Global_1898346)[iParam0]->f_2, &((*Global_1898346)[iParam0]->f_4), &((*Global_1898346)[iParam0]->f_5), &((*Global_1898346)[iParam0]->f_3));
	}
}

int func_207(int iParam0)
{
	if (!func_93(iParam0))
	{
		return -1;
	}
	return func_426(func_267(iParam0));
}

void func_208(int iParam0)
{
	if (!func_427(iParam0))
	{
		return;
	}
	uVar0 = (*Global_1835011)[iParam0]->f_8;
	iVar1 = get_hash_key(&uVar0);
	if (_uilog_is_entry_registered(1, iVar1))
	{
		_uilog_remove_entry(1, iVar1);
	}
	if (iParam0 == 77 || iParam0 == 38)
	{
		return;
	}
	vVar2 = { (*Global_1835011)[iParam0]->f_18 };
	MemCopy(&Var5, {(*Global_1835011)[iParam0]->f_8}, 8);
	Var13 = { Var5 };
	StringConCat(&Var13, "_DESC", 64);
	_uilog_add_entry_hash(1, iVar1, vVar2, (*Global_1835011)[iParam0]->f_26, get_hash_key(&Var13), uVar21);
	_uilog_set_entry_icon_texture(1, iVar1, (*Global_1835011)[iParam0]->f_26, 676312963);
}

void func_209(int iParam0)
{
	if (!func_93(iParam0))
	{
		return;
	}
	func_429(iParam0, func_428(iParam0) + 1);
}

int func_210(int iParam0, int iParam1)
{
	iVar0 = func_285(iParam0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1898164->f_162 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1898164->f_162;
	func_430(iParam0, iVar0);
	Global_1898164->f_162++;
	if (iParam1 < 0 || iParam1 >= Global_1898164->f_162)
	{
		return iVar0;
	}
	func_431(iVar0, iParam1);
	return iParam1;
}

void func_211(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_212(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_213(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 - (Global_1572864->f_3 && iParam0));
}

void func_214(bool bParam0)
{
	func_432(bParam0);
	func_433(bParam0);
	func_434(bParam0);
	func_435(bParam0);
	func_436(bParam0);
	func_437(bParam0);
	func_438(bParam0);
	func_439(bParam0);
}

void func_215(bool bParam0)
{
	if (func_165() != -1)
	{
		return;
	}
	if (bParam0 && _0x200373a8df081f22(Global_35, 0))
	{
		return;
	}
	if (Global_40.f_11095.f_43 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		func_35(89, 1);
		_0xfb6e111908502871(5);
	}
	else
	{
		func_35(90, 1);
		_0x3fc4c027fd0936f4(5);
	}
	func_440(1, bParam0, 1);
	func_441();
	Global_40.f_11095.f_43 = bParam0;
}

void func_216(int iParam0)
{
	iVar0 = 0;
	if (func_165() != -1)
	{
		iVar0 = 1;
	}
	Global_1898077->f_1 = 2;
	Global_1898077->f_2 = 0;
	Global_1898077->f_3 = iParam0;
	Global_1898077->f_7 = iVar0;
	func_442(Global_1898077->f_7, Global_1898077->f_3);
}

void func_217(int iParam0)
{
	if (Global_1898077->f_1 == 2)
	{
		return;
	}
	iVar0 = 0;
	if (func_165() != -1)
	{
		iVar0 = 1;
	}
	Global_1898077->f_1 = 5;
	Global_1898077->f_2 = 0;
	Global_1898077->f_4 = iParam0;
	Global_1898077->f_7 = iVar0;
	func_443(Global_1898077->f_7, Global_1898077->f_4);
}

void func_218(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	if (iParam3 == 0 && !does_entity_exist(iParam1))
	{
		return;
	}
	if (iParam3 == 0 && (is_entity_dead(iParam1) && !bParam5))
	{
		if (does_entity_exist(iParam1))
		{
		}
		return;
	}
	if (is_string_null_or_empty(sParam2))
	{
		sParam2 = func_444(iParam1);
	}
	if (is_string_null_or_empty(sParam2))
	{
		if (does_entity_exist(iParam1))
		{
		}
		return;
	}
	iVar0 = func_445(uParam0, iParam1);
	if (iVar0 != -1)
	{
		if (!are_strings_equal(&(uParam0->f_13[iVar0]->f_1), sParam2))
		{
		}
		else if (uParam0->f_13[iVar0]->f_9 != iParam3)
		{
		}
		else if (uParam0->f_13[iVar0]->f_10 != iParam4)
		{
		}
		else
		{
			return;
		}
	}
	else
	{
		iVar1 = func_446(uParam0, sParam2);
		if (does_entity_exist(iVar1) && iVar1 != iParam1)
		{
			func_447(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_448(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_13[iVar0] = iParam1;
		StringCopy(&(uParam0->f_13[iVar0]->f_1), sParam2, 64);
		uParam0->f_13[iVar0]->f_9 = iParam3;
		uParam0->f_13[iVar0]->f_10 = iParam4;
		if (bParam5)
		{
			func_449(uParam0->f_13[iVar0], 2);
		}
		else
		{
			func_450(uParam0->f_13[iVar0], 2);
		}
	}
}

int func_219(var uParam0)
{
	return uParam0;
}

bool func_220(int iParam0)
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

bool func_221(int iParam0)
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

int func_222(int* iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam0->f_60) || !func_6(*iParam1, 0))
	{
		return 1;
	}
	if ((is_entity_on_screen(iParam0->f_60) && !is_entity_occluded(iParam0->f_60)) && iParam2 == 0)
	{
		return 0;
	}
	if (func_58(iParam0->f_57))
	{
		func_451(iParam0, iParam1);
	}
	func_418(iParam0->f_60, iParam0->f_57);
	iParam0->f_57 = { 0f, 0f, 0f };
	iParam0->f_60 = 0;
	return 0;
}

void func_223(int iParam0)
{
	if (!is_entity_dead(*iParam0))
	{
		_0xe98d55c5983f2509(*iParam0);
		set_ped_config_flag(*iParam0, 297, false);
	}
}

void func_224(int* iParam0, bool bParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_88(&(iParam0->f_18));
	if (bParam1)
	{
		iParam0->f_21 = 0;
		iParam0->f_25 = 0f;
		iParam0->f_26 = 30f;
		iParam0->f_27 = 1.25f;
		iParam0->f_29 = 10f;
		iParam0->f_30 = 50f;
		iParam0->f_31 = 30f;
		iParam0->f_32 = 21f;
		iParam0->f_33 = 20f;
		iParam0->f_34 = 5f;
		iParam0->f_28 = 0;
		iParam0->f_60 = 0;
		iParam0->f_57 = { 0f, 0f, 0f };
		iParam0->f_55 = 0;
		func_88(&(iParam0->f_22));
		func_88(&(iParam0->f_37));
		func_88(&(iParam0->f_40));
		func_88(&(iParam0->f_43));
		func_88(&(iParam0->f_49));
		func_88(&(iParam0->f_52));
		func_228(iParam0);
		func_229(iParam0);
		if (does_blip_exist(iParam0->f_56))
		{
			remove_blip(&(iParam0->f_56));
		}
	}
}

void func_225(int* iParam0, bool bParam1)
{
	if (!is_bit_set(*iParam0, 7))
	{
		if (bParam1)
		{
			_0xc64abc0676af262b();
		}
		else
		{
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
		}
	}
	if (is_bit_set(iParam0->f_21, 3))
	{
		clear_bit(&(iParam0->f_21), 3);
	}
	if (is_bit_set(iParam0->f_21, 4))
	{
		clear_bit(&(iParam0->f_21), 4);
	}
	_display_hud_component(724769646);
}

void func_226(int* iParam0)
{
	if (is_bit_set(iParam0->f_21, 5))
	{
		_0xc67a4910425f11f1(get_player_index(), 0);
		clear_bit(&(iParam0->f_21), 5);
	}
	func_452();
}

void func_227(int* iParam0, int iParam1)
{
	if (!func_6(iParam1, 0))
	{
		return;
	}
	iVar0 = get_blip_from_entity(iParam1);
	if (!does_blip_exist(iVar0))
	{
		if (does_blip_exist(iParam0->f_56))
		{
			iVar0 = iParam0->f_56;
		}
		else
		{
			return;
		}
	}
	if (is_bit_set(iParam0->f_21, 16))
	{
		clear_bit(&(iParam0->f_21), 16);
	}
	if (is_bit_set(iParam0->f_21, 17))
	{
		clear_bit(&(iParam0->f_21), 17);
	}
	if (is_bit_set(iParam0->f_21, 18))
	{
		clear_bit(&(iParam0->f_21), 18);
	}
	if (_0x3cb8859f04763c78(iParam1, iVar0))
	{
		_0x44813684f72b563c(iParam1, iVar0);
	}
	if (iParam0->f_55 != 0)
	{
		iParam0->f_55 = 0;
	}
}

void func_228(int* iParam0)
{
	if (is_bit_set(iParam0->f_21, 2) && _does_volume_exist(iParam0->f_35))
	{
		func_453(iParam0->f_35);
		func_454(iParam0->f_35);
		clear_bit(&(iParam0->f_21), 2);
	}
}

void func_229(int* iParam0)
{
	func_454(iParam0->f_36);
}

int func_230(char* sParam0)
{
	if (!func_58(sParam0->f_375) && _does_anim_scene_exist(sParam0->f_35.f_156))
	{
		set_anim_scene_origin(sParam0->f_35.f_156, sParam0->f_375, 0f, 0f, sParam0->f_378, 2);
	}
	MemCopy(&Var0, {sParam0->f_17}, 4);
	if (func_455(Var0, &(sParam0->f_35)))
	{
		return 1;
	}
	return 0;
}

bool func_231(int iParam0, bool bParam1)
{
	iVar0 = func_41(iParam0);
	if (bParam1)
	{
		if (!func_6(iVar0, 0))
		{
			return false;
		}
	}
	return is_ped_group_member(iVar0, func_236(), 1);
}

void func_232(int iParam0, bool bParam1)
{
	iVar0 = Global_1360165[iParam0];
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0))
	{
		return;
	}
	if (!func_71(iParam0))
	{
		return;
	}
	iVar1 = get_player_group(get_player_index());
	if (is_ped_group_member(iVar0, iVar1, 0))
	{
		return;
	}
	_0xcbd9ec60495c728c(func_236());
	set_ped_config_flag(iVar0, 279, true);
	set_ped_as_group_member(iVar0, iVar1);
	if (bParam1)
	{
		func_456(iParam0, 1, Global_35);
	}
}

bool func_233()
{
	return func_235(1) < 3;
}

void func_234(int iParam0, bool bParam1, char* sParam2)
{
	iVar0 = func_41(iParam0);
	if (!func_71(iParam0) || is_entity_dead(iVar0))
	{
		return;
	}
	_0xf1c03a5352243a30(iVar0);
	if (bParam1)
	{
		clear_ped_tasks_immediately(iVar0, false, true);
	}
	else
	{
		clear_ped_tasks(iVar0, 1, 0);
	}
}

int func_235(bool bParam0)
{
	if (bParam0)
	{
		return func_136(Global_1359489->f_4);
	}
	get_group_size(func_236(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = get_ped_as_group_member(func_236(), iVar3);
		if (func_457(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

int func_236()
{
	return get_player_group(get_player_index());
}

void func_237(int iParam0)
{
	if (func_71(iParam0))
	{
		iVar0 = 0;
		iVar1 = 0;
		switch (iParam0)
		{
			case 2:
				func_458(&iVar0, 1);
				break;
			case 14:
				func_458(&iVar0, 8);
				func_458(&iVar1, 4);
				func_458(&iVar1, 5);
				func_458(&iVar1, 0);
				break;
			case 13:
			case 15:
			case 16:
			case 17:
			case 18:
			case 19:
			case 20:
			case 22:
				func_458(&iVar0, 8);
				func_458(&iVar0, 5);
				func_458(&iVar1, 4);
				func_458(&iVar1, 0);
				break;
		}
		_0xdeb369f6ad168c58(func_41(iParam0), iVar0);
		_0x1740e3dee0ae4d27(func_41(iParam0), iVar1);
	}
}

bool func_238(int iParam0)
{
	if (!func_75(iParam0))
	{
		return false;
	}
	if ((*Global_1360165)[iParam0]->f_70.f_11 == 0 || (*Global_1360165)[iParam0]->f_70.f_11 == (*Global_1360165)[iParam0]->f_128)
	{
		return false;
	}
	return true;
}

void func_239(int iParam0, int iParam1, bool bParam2)
{
	if (!func_75(iParam0))
	{
		return;
	}
	if (bParam2)
	{
		(*Global_1360165)[iParam0]->f_70.f_1 = ((*Global_1360165)[iParam0]->f_70.f_1 || iParam1);
	}
	else
	{
		(*Global_1360165)[iParam0]->f_70.f_1 = ((*Global_1360165)[iParam0]->f_70.f_1 - ((*Global_1360165)[iParam0]->f_70.f_1 && iParam1));
	}
}

int func_240(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_75(iParam0))
	{
		return 0;
	}
	iVar0 = func_91(iParam0);
	if (func_6(iVar0, 0))
	{
		if (func_6(_get_rider_of_mount(iVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_238(iParam0)) || func_68(iParam0))
		{
			if (bParam2 || !(is_entity_on_screen(iVar0) && func_459(player_ped_id(), iVar0, 1) < 10000f))
			{
				iVar1 = func_460(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!_0x88ad6cc10d8d35b2(iVar0))
					{
						set_entity_as_mission_entity(iVar0, true, true);
					}
					func_461(iParam0);
					_0x7b204f88f6c3d287(func_462(iParam0, 0));
					_0xfcc6db8dbe709bc8(func_462(iParam0, 0));
					func_463(iParam0);
				}
			}
			else
			{
				if (func_259(iParam0, 32768, 1))
				{
					iVar2 = func_462(iParam0, 0);
					_0xb65e7f733956cf25(iVar2);
					_0xfcc6db8dbe709bc8(iVar2);
				}
				else
				{
					set_ped_as_no_longer_needed(&iVar0);
				}
				set_blocking_of_non_temporary_events(iVar0, false);
			}
		}
		else
		{
			return 0;
		}
	}
	else if (bParam3)
	{
		if (func_6((*Global_1360165)[iParam0]->f_124, 0))
		{
			if (func_259(iParam0, 32768, 1))
			{
				if (!_0x88ad6cc10d8d35b2((*Global_1360165)[iParam0]->f_124))
				{
					set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				}
				func_461(iParam0);
				_0x7b204f88f6c3d287(func_462(iParam0, 0));
				_0xfcc6db8dbe709bc8(func_462(iParam0, 0));
			}
			else
			{
				set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				func_461(iParam0);
				delete_ped(&((*Global_1360165)[iParam0]->f_124));
			}
		}
	}
	(*Global_1360165)[iParam0]->f_70.f_1 = 0;
	func_464(iParam0, 0);
	return 1;
}

bool func_241(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = func_242(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

int func_242(int iParam0)
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

void func_243(int iParam0)
{
	iParam0 = func_306(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_465(iParam0, 32);
	func_308();
}

void func_244(int iParam0)
{
	iParam0 = func_306(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_245(iParam0);
	if (!_does_thread_exist(iVar0))
	{
		func_247(iParam0);
	}
	else if (!is_thread_active(iVar0, false))
	{
		func_247(iParam0);
	}
}

int func_245(int iParam0)
{
	iParam0 = func_306(iParam0);
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

bool func_246(int iParam0)
{
	iParam0 = func_306(iParam0);
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

void func_247(int iParam0)
{
	iParam0 = func_306(iParam0);
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

bool func_248(int iParam0)
{
	if (!func_75(iParam0))
	{
		return false;
	}
	if ((*Global_1360165)[iParam0]->f_140 != 0 || (*Global_1360165)[iParam0]->f_141 != 0)
	{
		return true;
	}
	return false;
}

bool func_249(int iParam0, int iParam1)
{
	if (!func_75(iParam0))
	{
		return false;
	}
	if (((*Global_1360165)[iParam0]->f_140 && iParam1) != 0)
	{
		return true;
	}
	if (((*Global_1360165)[iParam0]->f_141 && iParam1) != 0)
	{
		return true;
	}
	return false;
}

int func_250(int iParam0)
{
	switch (iParam0)
	{
		case -2147483648:
		case 2048:
		case 8192:
			return 5;
		case 1:
		case 16:
		case 32:
		case 1024:
		case 4096:
			return 4;
		case 2:
		case 64:
			return 3;
		case 4:
		case 8:
		case 128:
			return 2;
		case 512:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_251(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_466(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_252(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_253(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_254(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_255(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_256(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_257(int iParam0, int iParam1)
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

void func_258(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_467(iParam0, iParam6);
	func_468(iParam0, iParam5);
	func_469(iParam0, iParam4);
	func_470(iParam0, iParam3);
	func_471(iParam0, iParam2);
	func_472(iParam0, iParam1);
}

bool func_259(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_75(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

bool func_260(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_261(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 = (*uParam0 || iParam1);
	}
	else
	{
		*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	}
}

void func_262(int iParam0)
{
	if (!func_75(iParam0))
	{
		return;
	}
	if (!_is_base_a_persistent_character((*Global_1360165)[iParam0]->f_1))
	{
		iVar0 = func_473(iParam0);
		if (iVar0 != 0)
		{
			(*Global_1360165)[iParam0]->f_1 = _create_persistent_character(iVar0);
			_0xfcc6db8dbe709bc8((*Global_1360165)[iParam0]->f_1);
		}
		else
		{
			(*Global_1360165)[iParam0]->f_1 = 0;
		}
	}
}

void func_263(int iParam0)
{
	if (func_71(iParam0))
	{
		if (does_entity_exist(func_41(iParam0)))
		{
			func_321(iParam0, 67108864, 1);
			func_7(iParam0, 19, 1);
		}
	}
}

float func_264(int iParam0)
{
	if (!func_75(iParam0))
	{
		return 0f;
	}
	return (*Global_1360165)[iParam0]->f_134;
}

void func_265(int iParam0)
{
	iVar0 = func_41(iParam0);
	iVar1 = func_84(iParam0, 0);
	func_341(iParam0, iVar0);
	if (does_entity_exist(iVar0))
	{
		if (!_0x88ad6cc10d8d35b2(iVar0))
		{
			_0xf008e0ba1fe1d644(1);
			bVar2 = true;
			set_entity_as_mission_entity(iVar0, true, true);
		}
		_0x7b204f88f6c3d287(iVar1);
		if (bVar2)
		{
			_0x7d4e70a67a651c71(1);
		}
	}
	_0xfcc6db8dbe709bc8(iVar1);
}

int func_266(int iParam0)
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

int func_267(int iParam0)
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

int func_268(int iParam0)
{
	return iParam0 & 31;
}

bool func_269()
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

bool func_270(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_271(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_272(int iParam0)
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

int func_273(int iParam0)
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

void func_274(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_275()
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

int func_276(int iParam0)
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

void func_277(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

bool func_278(int iParam0, bool bParam1)
{
	switch (func_203(iParam0))
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

void func_279(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_474(iParam0);
	}
	else
	{
		func_475(iParam0, iParam1);
	}
	func_476();
}

void func_280(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_281(int iParam0)
{
	iVar0 = func_477(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_282(int iParam0)
{
	if (!func_93(iParam0))
	{
		return false;
	}
	switch (func_95(iParam0))
	{
		case 1:
			switch (func_207(iParam0))
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
			switch (func_207(iParam0))
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

void func_283(int iParam0)
{
	iVar2 = func_478(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_479(iVar1) == iParam0)
		{
			_0x6a564540fac12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_481(func_480(iParam0), 6);
}

void func_284(int iParam0)
{
	iVar2 = func_478(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_479(iVar1) == iParam0)
		{
			_0x766315a564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_482(func_480(iParam0), 6);
}

int func_285(int iParam0)
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

int func_286(int iParam0)
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
	func_431(iParam0, Global_1898164->f_162);
	return 1;
}

bool func_287(int iParam0)
{
	return func_483(iParam0, 2);
}

bool func_288(int iParam0, int iParam1)
{
	return Global_40.f_4942[iParam0]->f_8 == iParam1;
}

bool func_289(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 0;
	while (*iParam2 < 10)
	{
		if (&Global_40.f_4942[iParam0]->f_11[*iParam2] == iParam1)
		{
			return true;
		}
		*iParam2++;
	}
	*iParam2 = -1;
	return false;
}

bool func_290(int iParam0, int iParam1)
{
	if (!func_75(iParam0))
	{
		return false;
	}
	if (func_288(iParam0, iParam1))
	{
		return func_484(iParam0);
	}
	iVar0 = -1;
	if (func_289(iParam0, iParam1, &iVar0))
	{
		return func_293(iParam0, iVar0);
	}
	return false;
}

void func_291(int iParam0, int iParam1)
{
	iVar0 = func_41(iParam0);
	if (does_entity_exist(iVar0))
	{
		_0x2b4ce170de09f346(iVar0, iParam1);
	}
	func_485(iParam0, iParam1, 0);
}

void func_292(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
	uParam0->f_2 = 0;
}

bool func_293(int iParam0, int iParam1)
{
	if ((!func_75(iParam0) || iParam1 < 0) || iParam1 >= 10)
	{
		return false;
	}
	return is_bit_set((*Global_1360165)[iParam0]->f_1155, iParam1);
}

void func_294(int iParam0, int iParam1, bool bParam2)
{
	if ((!func_75(iParam0) || iParam1 < 0) || iParam1 >= 10)
	{
		return;
	}
	if (bParam2)
	{
		if (!is_bit_set((*Global_1360165)[iParam0]->f_1155, iParam1))
		{
			set_bit(&((*Global_1360165)[iParam0]->f_1155), iParam1);
		}
	}
	else if (is_bit_set((*Global_1360165)[iParam0]->f_1155, iParam1))
	{
		clear_bit(&((*Global_1360165)[iParam0]->f_1155), iParam1);
	}
}

bool func_295(var uParam0, int iParam1)
{
	return (*uParam0 && shift_left(1, iParam1)) != 0;
}

bool func_296(int iParam0)
{
	func_486(iParam0, &iVar0, &iVar1);
	return is_bit_set(&(Global_1357549->f_1866[iVar0]), iVar1);
}

char* func_297()
{
	return "script@common@cnv_camp@cabll@crob3@leadin@cabll_crob3_int_leadin@cabll_crob3_int_leadin";
}

void func_298()
{
	_set_anim_scene_playback_list_bool(iLocal_136, sLocal_137, true);
	if (!_is_anim_scene_started(iLocal_136, false))
	{
		start_anim_scene(iLocal_136);
	}
	_0xae6ada8fe7e84acc(iLocal_136, sLocal_137);
}

int func_299(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)
{
	if (!func_75(iParam1))
	{
		return 0;
	}
	iVar0 = func_91(iParam1);
	if ((!does_entity_exist(iVar0) || !func_6(iVar0, 0)) || (bParam3 && !func_68(iParam1)))
	{
		if (bParam2)
		{
			if (func_460(iParam1, 1) != 0)
			{
				iVar0 = func_487(iParam1, bParam3, bParam8, iParam9, iParam10, iParam11, iParam12, bParam7, bParam15, bParam16, iParam17);
			}
			else
			{
				*uParam0 = 1;
				return 0;
			}
		}
		else
		{
			*uParam0 = 1;
			return 0;
		}
	}
	if (does_entity_exist(iVar0) && func_6(iVar0, 0))
	{
		*uParam0 = 2;
		(*Global_1360165)[iParam1]->f_70.f_2 = 0;
		func_488(iParam1, iVar0);
		func_489(iParam1, bParam13, bParam14, 1);
		return iVar0;
	}
	else
	{
		*uParam0 = 0;
		return 0;
	}
	return 0;
}

int func_300(var uParam0, var uParam1)
{
	uParam1->f_10 = func_306(uParam1->f_10);
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
		if (func_58(uParam1->f_6))
		{
		}
	}
	bVar0 = func_490();
	if (*uParam1)
	{
		if (bVar0 && !func_278((*Global_1835011)[4]->f_1, 1))
		{
			if (func_491(5))
			{
				func_492(5);
				func_493(5);
				func_494(0);
				func_495(0);
			}
		}
	}
	if (func_496(Global_36) == 8)
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_278((*Global_1835011)[37]->f_1, 1)) && !func_278((*Global_1835011)[43]->f_1, 1))
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_278((*Global_1835011)[43]->f_1, 1)) && !func_278((*Global_1835011)[44]->f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_497(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_498(iVar1))
	{
		bVar3 = true;
		if (func_499(iVar1))
		{
			bVar4 = true;
		}
		if (func_500(iVar1))
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
				func_501(uParam1->f_10);
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
			if (!func_491(0) && func_491(1))
			{
				func_502(1, 0);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_503())
			{
				func_504();
			}
			func_494(0);
			func_495(0);
			func_505(uParam1->f_6);
		}
	}
	if (!func_498(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_506(uParam1->f_10) == 0 || func_507(uParam1->f_10) == 0) || func_508(uParam1->f_10) == 0)
			{
				func_509(uParam1->f_10);
			}
			func_510(uParam1->f_10);
			func_511(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*uParam0 = 0;
			return 0;
		}
		*uParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_497(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_498(iVar1))
	{
		bVar3 = true;
		if (func_499(iVar1))
		{
			bVar4 = true;
		}
		if (func_500(iVar1))
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
			if (!func_58(uParam1->f_6))
			{
				set_entity_coords(iVar2, uParam1->f_6, false, true, true, true);
				set_entity_heading(iVar2, uParam1->f_9);
				_0x9587913b9e772d29(iVar2, 0);
			}
		}
	}
	if (func_512(uParam1->f_10))
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
			Var8 = { func_513(uParam1->f_10) };
			Var10 = { func_514() };
			func_515(iVar2, &Var8, &Var10, 0);
			_set_ped_as_saddle_horse_for_player(iVar6, iVar2);
			set_ped_config_flag(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*uParam0 = 2;
		return iVar2;
	}
	if (!func_246(uParam1->f_10))
	{
		set_entity_as_mission_entity(iVar2, true, true);
		func_516(uParam1->f_10);
		if (uParam1->f_2 && !func_58(uParam1->f_6))
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
	func_244(uParam1->f_10);
	if (func_246(uParam1->f_10))
	{
		iVar16 = func_245(uParam1->f_10);
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

bool func_301(int iParam0, int iParam1)
{
	if (!func_75(iParam0))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0]->f_70.f_1 && iParam1) != 0;
}

bool func_302(int iParam0, int iParam1, bool bParam2)
{
	if (!func_75(iParam0))
	{
		return false;
	}
	if (func_301(iParam0, 256))
	{
		return true;
	}
	iVar0 = 0;
	if (bParam2)
	{
		iVar0 = 256;
	}
	if (!func_6(iParam1, iVar0))
	{
		return false;
	}
	_set_ped_body_component(iParam1, func_517(iParam0));
	_update_ped_variation(iParam1, false, true, true, true, false);
	func_239(iParam0, 256, 1);
	return true;
}

void func_303(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 3490746;
	if (bParam4)
	{
		iVar0 |= 1;
	}
	if (bParam5)
	{
		iVar0 |= 72;
	}
	if (bParam6)
	{
		iVar0 |= 6;
	}
	if (bParam7)
	{
		iVar0 |= 524288;
	}
	if (bParam8)
	{
		iVar0 |= 131072;
	}
	clear_area(vParam0, fParam3, iVar0);
}

int func_304(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5)
{
	if (!does_entity_exist(iParam1))
	{
		return 0;
	}
	if (bParam4 && is_entity_dead(iParam1))
	{
		return 0;
	}
	if (is_string_null_or_empty(sParam2))
	{
		sParam2 = func_444(iParam1);
	}
	if (iParam3 == 0)
	{
		iParam3 = get_entity_model(iParam1);
	}
	if (is_string_null_or_empty(sParam2))
	{
	}
	if (!func_518(uParam0, iParam1, 4))
	{
		if (_0xb89fcff19dafff28(uParam0->f_156, sParam2))
		{
			func_519(uParam0, iParam1, 4);
			return 1;
		}
		else if (iParam5 && _0x005e6f28dd7ed58d(uParam0->f_156, sParam2))
		{
			func_519(uParam0, iParam1, 4);
			return 1;
		}
	}
	return 0;
}

void func_305(var uParam0, bool bParam1)
{
	_0x67e21acc5c0c970c(Global_35, 3, bParam1);
	if (!bParam1)
	{
		if (!Global_17)
		{
			_set_ped_component_disabled(Global_35, -1229581779, 0);
			Global_17 = !bParam1;
		}
	}
}

int func_306(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_307(int iParam0, int iParam1)
{
	iParam0 = func_306(iParam0);
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

void func_308()
{
	if (func_498(0))
	{
		func_520(0);
	}
	if (func_498(1))
	{
		func_520(1);
	}
	if (func_498(5))
	{
		func_520(5);
	}
	if (func_498(6))
	{
		func_521(6);
	}
}

bool func_309(int iParam0)
{
	return func_259(iParam0, 4, 1);
}

void func_310(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

int func_311(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 13:
		case 14:
			if (iParam1 == 7 || iParam1 == 8)
			{
				return -1205468859;
			}
			return -445211559;
		case 0:
		case 1:
		case 2:
		case 7:
		case 8:
		case 9:
		case 10:
		case 15:
		case 16:
		case 17:
		case 19:
		case 20:
		case 21:
		case 22:
			return -445211559;
		case 3:
		case 4:
		case 18:
			return 1744281750;
		case 11:
			return -946772361;
		default:
			break;
	}
	return 0;
}

int func_312(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_75(iParam0))
	{
		return 0;
	}
	iVar0 = get_clock_hours() + 1;
	if (iVar0 == 25)
	{
		iVar0 = 0;
	}
	iVar7 = 0;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					if (func_278((*Global_1835011)[4]->f_1, 1))
					{
						iVar1[0] = -695701225;
					}
					else
					{
						iVar1[0] = 404503428;
					}
					break;
				default:
					iVar1[0] = 178615350;
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 1:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = 1818898449;
					iVar7 = 3;
					break;
				case 3:
					if (func_522(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					if (!bParam2)
					{
						iVar1[0] = -268604689;
					}
					break;
				case 4:
					iVar1[0] = -268604689;
					break;
				case 5:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 6:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = -268604689;
					iVar1[0] = -1632589543;
					iVar1[1] = 1818898449;
					iVar7 = 3;
					break;
				case 8:
					iVar1[0] = -268604689;
					break;
				case 9:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 10:
					if (func_278((*Global_1347702)[63]->f_15, 1) || func_51((*Global_1347702)[63]->f_15))
					{
						iVar1[0] = -268604689;
					}
					else
					{
						iVar1[0] = -310473775;
					}
					break;
				case 11:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 13:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 14:
					iVar1[0] = -268604689;
					break;
				case 15:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 16:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 17:
					if (func_522(iVar0, 9, 12))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					else
					{
						iVar1[0] = -268604689;
					}
					break;
				case 18:
					if (!func_278((*Global_1835011)[14]->f_1, 1))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar7 = 2;
					}
					else if (func_259(18, 134217728, 1))
					{
						iVar1[0] = 961676983;
					}
					else
					{
						iVar1[0] = -1587546924;
					}
					break;
				case 19:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -23947011;
					iVar7 = 3;
					break;
				default:
					iVar1[0] = -268604689;
					break;
			}
			break;
		case 2:
		case 3:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 3:
					if (func_522(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					break;
				case 4:
					iVar1[0] = -922193456;
					break;
				case 5:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 6:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 8:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 9:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar1[4] = 1744281750;
					iVar7 = 5;
					break;
				case 10:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 11:
					if (func_278((*Global_1347702)[134]->f_15, 1) || func_51((*Global_1347702)[134]->f_15))
					{
						iVar1[0] = -2040275819;
						iVar1[1] = 1205492208;
						iVar7 = 2;
					}
					else
					{
						iVar1[0] = -922193456;
					}
					break;
				case 13:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 14:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 15:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 16:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 17:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 18:
					iVar1[0] = -922193456;
					break;
				case 19:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -922193456;
					iVar1[1] = 1744281750;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 1744281750;
					iVar7 = 3;
					break;
				case 26:
					iVar1[0] = -268604689;
					break;
				default:
					iVar1[0] = -922193456;
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 2:
					if (func_278((*Global_1835011)[38]->f_1, 1))
					{
						iVar1[0] = -1559986688;
					}
					else
					{
						iVar1[0] = -1874208704;
					}
					break;
				default:
					iVar1[0] = 1593315648;
					break;
			}
			break;
		case 5:
		case 6:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 3:
					if (func_522(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					break;
				case 4:
					iVar1[0] = -922193456;
					break;
				case 6:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = 1295334688;
					iVar7 = 1;
					break;
				case 11:
					iVar1[0] = -2051275045;
					break;
				case 13:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 14:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 15:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 16:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 17:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 18:
					iVar1[0] = -922193456;
					break;
				case 19:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -922193456;
					iVar1[1] = 1744281750;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 1744281750;
					iVar7 = 3;
					break;
				case 26:
					iVar1[0] = -268604689;
					break;
				default:
					iVar1[0] = -922193456;
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 13:
					iVar1[0] = -1341683964;
					iVar1[1] = 876797088;
					iVar7 = 2;
					break;
				case 14:
					iVar1[0] = -426171916;
					iVar1[1] = 1484386316;
					iVar1[2] = 1254970547;
					iVar7 = 3;
					break;
				case 4:
					if (func_123(747937920, 1) && !func_278((*Global_1347702)[1]->f_15, 1))
					{
						iVar1[0] = -1155031950;
					}
					else
					{
						iVar1[0] = -1341683964;
					}
					break;
				default:
					iVar1[0] = -1341683964;
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 13:
					iVar1[0] = -1341683964;
					iVar1[1] = 876797088;
					iVar1[2] = 1484386316;
					iVar7 = 3;
					break;
				case 14:
					iVar1[0] = -1092189504;
					iVar1[1] = 80515440;
					iVar7 = 2;
					break;
				case 4:
					iVar1[0] = -1341683964;
					iVar1[1] = 867156718;
					iVar7 = 2;
					break;
				case 7:
					iVar1[0] = -1341683964;
					iVar1[1] = 1484386316;
					iVar7 = 2;
					break;
				default:
					iVar1[0] = -1341683964;
					break;
			}
			break;
	}
	if (bParam3 && does_entity_exist(func_41(iParam0)))
	{
		iVar10 = 0;
		while (iVar10 < iVar7)
		{
			if (&iVar1[iVar10] == Global_40.f_4942[iParam0]->f_3)
			{
				bVar9 = true;
				iVar8 = Global_40.f_4942[iParam0]->f_3;
			}
			iVar10++;
		}
	}
	if (!bVar9)
	{
		iVar11 = 0;
		if (iVar7 > 0 && bParam2)
		{
			iVar11 = get_random_int_in_range(0, iVar7);
		}
		iVar8 = &iVar1[iVar11];
	}
	if (!func_316(iParam0, iVar8))
	{
		iVar8 = Global_40.f_4942[iParam0]->f_3;
	}
	return iVar8;
}

void func_313(int iParam0, int iParam1)
{
	if (!func_75(iParam0))
	{
		return;
	}
	(*Global_1360165)[iParam0]->f_11 = iParam1;
}

bool func_314(int iParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	if (!func_75(iParam0))
	{
		return false;
	}
	switch ((*Global_1360165)[iParam0]->f_3)
	{
		case 0:
			if (!has_script_with_name_hash_loaded(89040947))
			{
				request_script_with_name_hash(89040947);
			}
			(*Global_1360165)[iParam0]->f_3 = 1;
		case 1:
			if (!has_script_with_name_hash_loaded(89040947))
			{
				return false;
			}
			if (Global_1359489->f_9 != -1)
			{
				return false;
			}
			Global_1359489->f_9 = iParam0;
			if (iParam4 == 0)
			{
				if (iParam9 != -1)
				{
					iParam4 = func_312(iParam0, iParam9, bParam7, 1);
				}
				else if (((*Global_1360165)[iParam0]->f_4.f_2 != 0 && (*Global_1360165)[iParam0]->f_4.f_2 == Global_40.f_4942[iParam0]->f_59) && (func_10((*Global_1360165)[iParam0]->f_4.f_2) || func_51((*Global_1360165)[iParam0]->f_4.f_2)))
				{
					iParam4 = (*Global_1360165)[iParam0]->f_4.f_1;
				}
				else
				{
					iParam4 = func_312(iParam0, Global_40.f_4283, bParam7, 1);
				}
				if ((*Global_1360165)[iParam0]->f_63 != iParam4 && func_523((*Global_1360165)[iParam0]->f_63))
				{
					if (!func_524(iParam0, 0))
					{
						func_78(iParam0, 25, 0);
					}
				}
			}
			(*Global_1360165)[iParam0]->f_4 = { func_525(iParam0, iParam4, vParam1, iParam5, bParam6, bParam8, Global_40.f_4942[iParam0]->f_59, bParam11) };
			if (!bParam6)
			{
				func_7(iParam0, 44, 1);
			}
			(*Global_1360165)[iParam0]->f_3 = 2;
		case 2:
			if (!func_6(func_41(iParam0), 0))
			{
				return false;
			}
			if (iParam5 && iParam10)
			{
				if (!func_6(func_91(iParam0), 0))
				{
					return false;
				}
			}
			(*Global_1360165)[iParam0]->f_3 = 3;
		case 3:
			return true;
		default:
			break;
	}
	return false;
}

void func_315(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_71(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_526(iParam0, bParam3);
	}
	else
	{
		func_527(iParam0, bParam3);
	}
	if (bParam2)
	{
		func_528(iParam0, bParam3);
	}
	else
	{
		func_529(iParam0, bParam3);
	}
}

bool func_316(int iParam0, int iParam1)
{
	if (!func_71(iParam0))
	{
		return false;
	}
	if (iParam1 == 296923297 || iParam1 == 1237718549)
	{
		return true;
	}
	bVar0 = func_530(iParam0, iParam1);
	return bVar0;
}

void func_317(int iParam0)
{
	func_531(iParam0);
	func_532(iParam0, 0);
}

void func_318(int iParam0, int iParam1)
{
	if (!is_ped_injured(iParam0))
	{
		set_current_ped_weapon(iParam0, -1569615261, true, 0, false, false);
		set_current_ped_weapon(iParam0, -1569615261, true, 1, false, false);
		if (is_ped_a_player(iParam0) && iParam1 == 1)
		{
			if (is_player_playing(player_id()))
			{
				_0xcffc3eccd7a5cceb(player_id(), -1569615261, 0);
			}
		}
	}
}

bool func_319(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (!is_ped_human(iParam0))
	{
		return false;
	}
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = 0;
		get_current_ped_weapon(iParam0, &iVar1, true, iVar0, true);
		if (!is_weapon_valid(iVar1))
		{
		}
		else if (!_is_weapon_two_handed(iVar1))
		{
		}
		else
		{
			iVar2 = 1;
			_0xe9bd19f8121ade3e(iParam0, iVar1);
		}
		iVar0++;
	}
	return iVar2;
}

void func_320(int iParam0, int iParam1)
{
	if (!func_75(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 11:
			if (Global_40.f_4942[iParam0]->f_3 == -1341683964)
			{
				func_533(iParam1, 1240907314, 0, 0, 2, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
				func_533(iParam1, -2088446466, 0, 0, 3, 1, 1, 1056964608, 1065353216, -1, 0, 1, 0, 0);
			}
			break;
	}
}

void func_321(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_71(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (Global_40.f_4942[iParam0] || iParam1);
}

int func_322(int iParam0, int iParam1, int iParam2, int iParam3)
{
	return _request_scenario_type(iParam0, iParam1, iParam2, iParam3);
}

int func_323(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 695356898;
		case 1:
			return -432333475;
		case 2:
			return 2093317438;
		case 3:
			return -1327067584;
		case 4:
			return -145951480;
		case 5:
			return -2045110373;
		case 6:
			return 2092390181;
		case 7:
			return -1192044061;
		case 8:
			return 1206762561;
		default:
			break;
	}
	return 991030100;
}

bool func_324(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	uVar0 = *uParam6;
	if (_datafile_get_hash(&uVar0, &vParam0))
	{
		*uParam6 = uVar0;
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

bool func_325(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (_datafile_get_string(uParam6, &vParam0))
	{
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

bool func_326(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (_datafile_get_vector(uParam6, &vParam0))
	{
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

int func_327(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (_datafile_get_float(uParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

void func_328(var uParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		return;
	}
	StringCopy(&(uParam0->f_158), sParam1, 64);
}

void func_329(var uParam0, char[32] cParam1)
{
	if (is_string_null_or_empty(&cParam1))
	{
		return;
	}
	uParam0->f_166 = { cParam1 };
}

bool func_330(int iParam0)
{
	return _has_scenario_type_loaded(iParam0, false);
}

int func_331()
{
	return 0;
}

var func_332(int iParam0, vector3 vParam1, float fParam4, float fParam5, float fParam6, int iParam7)
{
	return create_scenario_point(iParam0, vParam1, fParam4, fParam5, fParam6, iParam7);
}

void func_333(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	func_218(uParam0, iParam1, sParam2, iParam3, iParam4, bParam5);
}

bool func_334(int iParam0, var uParam1)
{
	if (!func_71(iParam0))
	{
		return false;
	}
	iVar0 = func_62(iParam0);
	return (*uParam1 && iVar0) != 0;
}

bool func_335(var uParam0, var uParam1, int iParam2)
{
	Var0 = Global_1359489->f_21;
	Var0.f_1 = 0;
	Var0.f_2 = 429892159;
	Var0.f_3 = func_323(func_137());
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 13127246;
		Var0.f_3 = uParam0->f_9;
		if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
		{
			Var0.f_3 = func_534(iParam2);
			if (func_325(Var0, 443199092, uParam1, 0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_336(var uParam0, float fParam1)
{
	uParam0->f_146 = fParam1;
}

void func_337(var uParam0, float fParam1)
{
	uParam0->f_147 = fParam1;
}

int func_338(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 296923297:
			iVar2 = -268604689;
			iVar0 = get_random_int_in_range(0, 3);
			switch (iVar0)
			{
				case 0:
					iVar1 = -268604689;
					break;
				case 1:
					iVar1 = -1632589543;
					break;
				case 2:
					iVar1 = -1862464078;
					break;
			}
			break;
		case 1237718549:
			iVar2 = -922193456;
			iVar0 = get_random_int_in_range(0, 4);
			switch (iVar0)
			{
				case 0:
					iVar1 = -922193456;
					break;
				case 1:
					iVar1 = -2040275819;
					break;
				case 2:
					iVar1 = -1114682645;
					break;
				case 3:
					iVar1 = -1414977761;
					break;
			}
			break;
	}
	if (iParam1 != -1)
	{
		if (func_316(iParam1, iVar1))
		{
			iVar2 = iVar1;
		}
	}
	return iVar2;
}

int func_339(int iParam0)
{
	switch (iParam0)
	{
		case -268604689:
			return -1496612359;
		case -1632589543:
			return 1052055818;
		case -1862464078:
			return 1895628185;
		case -922193456:
			return -99272505;
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		default:
			break;
	}
	return 41788943;
}

bool func_340(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

void func_341(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam1))
	{
		func_535(iParam1);
	}
}

bool func_342(int iParam0, int iParam1)
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

bool func_343(int iParam0, int iParam1)
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
	if (!func_144(iParam0, iVar0))
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

void func_344(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

void func_345(int iParam0, int iParam1, bool bParam2)
{
	if (!does_entity_exist(iParam1) || is_entity_dead(iParam1))
	{
		return;
	}
	if (_is_metaped_using_component(iParam1, 1933068772))
	{
		_set_ped_component_disabled(iParam1, 1933068772, 1);
	}
	if (_is_metaped_using_component(iParam1, 494009478))
	{
		_set_ped_component_disabled(iParam1, 494009478, 1);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1 > 0 && func_144(iParam1, 860729266))
	{
		_set_ped_body_component(iParam1, 860729266);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 4096 > 0 && func_144(iParam1, 879715242))
	{
		_set_ped_body_component(iParam1, 879715242);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 128 > 0 && func_144(iParam1, 1606325429))
	{
		_set_ped_body_component(iParam1, 1606325429);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 256 > 0 && func_144(iParam1, 1743550585))
	{
		_set_ped_body_component(iParam1, 1743550585);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 512 > 0 && func_144(iParam1, 1064646155))
	{
		_set_ped_body_component(iParam1, 1064646155);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1024 > 0 && func_144(iParam1, -536694793))
	{
		_set_ped_body_component(iParam1, -536694793);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 2048 > 0 && func_144(iParam1, -1304053509))
	{
		_set_ped_body_component(iParam1, -1304053509);
	}
	if (Global_40.f_4942[iParam0]->f_5 & -2147483648 > 0 && func_144(iParam1, 718939204))
	{
		_set_ped_body_component(iParam1, 718939204);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 65536 > 0 && func_144(iParam1, -972364774))
	{
		_set_ped_body_component(iParam1, -972364774);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 16384 > 0 && func_144(iParam1, -1100875244))
	{
		if (_is_metaped_using_component(iParam1, -134124598))
		{
			_set_ped_component_disabled(iParam1, -134124598, 1);
		}
		if (_is_metaped_using_component(iParam1, 2071466316))
		{
			_set_ped_component_disabled(iParam1, 2071466316, 1);
		}
		_set_ped_body_component(iParam1, -1100875244);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 262144 > 0 && func_144(iParam1, 1153596794))
	{
		_set_ped_body_component(iParam1, 1153596794);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 524288 > 0 && func_144(iParam1, 1016389820))
	{
		_set_ped_body_component(iParam1, 1016389820);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1048576 > 0 && func_144(iParam1, -726966617))
	{
		_set_ped_body_component(iParam1, -726966617);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 2097152 > 0 && func_144(iParam1, 1365901568))
	{
		_set_ped_body_component(iParam1, 1365901568);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 32768 > 0 && func_144(iParam1, -1658942149))
	{
		_set_ped_body_component(iParam1, -1658942149);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 131072 > 0 && func_144(iParam1, -1980913856))
	{
		_set_ped_body_component(iParam1, -1980913856);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 4194304 > 0 && func_144(iParam1, 491764525))
	{
		_set_ped_body_component(iParam1, 491764525);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 8388608 > 0 && func_144(iParam1, -76015264))
	{
		_set_ped_body_component(iParam1, -76015264);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 16777216 > 0 && func_144(iParam1, 622113465))
	{
		_set_ped_body_component(iParam1, 622113465);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 33554432 > 0 && func_144(iParam1, 781533162))
	{
		_set_ped_body_component(iParam1, 781533162);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 67108864 > 0 && func_144(iParam1, -271415321))
	{
		_set_ped_body_component(iParam1, -271415321);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 134217728 > 0 && func_144(iParam1, -1683207356))
	{
		_set_ped_body_component(iParam1, -1683207356);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 268435456 > 0 && func_144(iParam1, -254794762))
	{
		_set_ped_body_component(iParam1, -254794762);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 536870912 > 0 && func_144(iParam1, 609066278))
	{
		_set_ped_body_component(iParam1, 609066278);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1073741824 > 0 && func_144(iParam1, -1712783565))
	{
		_set_ped_body_component(iParam1, -1712783565);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 8192 > 0 && func_144(iParam1, 1544915253))
	{
		_set_ped_body_component(iParam1, 1544915253);
	}
	if (bParam2)
	{
		(*Global_1360165)[iParam0]->f_57 = 1;
	}
}

bool func_346(var uParam0, int iParam1, char* sParam2)
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

void func_347(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_12(iParam0))
	{
		return;
	}
	iVar0 = func_109(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(2, sParam1, sParam2));
}

void func_348(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_12(iParam0))
	{
		return;
	}
	iVar0 = func_109(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, sParam1);
}

void func_349(int* iParam0, char* sParam1)
{
	if (func_12(iParam0->f_6) && !is_string_null_or_empty(sParam1))
	{
		func_348(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_536(iParam0, 1);
}

void func_350(int* iParam0, int iParam1, int iParam2)
{
	if (does_blip_exist(iParam1))
	{
		iParam0->f_56 = iParam1;
		if (!is_bit_set(iParam0->f_21, 16))
		{
			set_bit(&(iParam0->f_21), 16);
		}
	}
	else if (is_bit_set(iParam0->f_21, 16))
	{
		clear_bit(&(iParam0->f_21), 16);
	}
	if (iParam2 != 0)
	{
		iParam0->f_55 = iParam2;
	}
	if (is_bit_set(iParam0->f_21, 17))
	{
		clear_bit(&(iParam0->f_21), 17);
	}
	if (is_bit_set(iParam0->f_21, 18))
	{
		clear_bit(&(iParam0->f_21), 18);
	}
}

void func_351(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (iVar0 == iParam1)
		{
			if (!is_bit_set(uParam0[iVar0], 12))
			{
				set_bit((*uParam0)[iVar0], 12);
			}
		}
		else if (is_bit_set(uParam0[iVar0], 12))
		{
			clear_bit((*uParam0)[iVar0], 12);
		}
		iVar0++;
	}
}

void func_352(int* iParam0, int iParam1)
{
	func_88(&(iParam0->f_22));
	iParam0->f_25 = iParam1;
}

void func_353(int* iParam0, float fParam1)
{
	if (!is_bit_set(*iParam0, 14))
	{
		iParam0->f_26 = fParam1;
		set_bit(iParam0, 14);
	}
}

void func_354(int iParam0)
{
	if (!func_71(iParam0))
	{
		return;
	}
	func_537(iParam0, 0, &(Global_40.f_4942[iParam0]->f_8));
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_537(iParam0, 0, Global_40.f_4942[iParam0]->f_11[iVar0]);
		iVar0++;
	}
}

bool func_355(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	if (bParam3)
	{
		if (func_289(iParam0, iParam1, iParam2))
		{
			if (iParam4 > 0 || iParam5 > 0)
			{
				iVar0 = func_538();
				func_73(&iVar0, 0, iParam4, iParam5, 0, 0, 0, 1);
				Global_40.f_4942[iParam0]->f_11[*iParam2]->f_1 = iVar0;
			}
			else
			{
				Global_40.f_4942[iParam0]->f_11[*iParam2]->f_1 = -15;
			}
			return true;
		}
	}
	*iParam2 = 0;
	*iParam2 = 0;
	while (*iParam2 < 10)
	{
		if (!func_114(&(Global_40.f_4942[iParam0]->f_11[*iParam2])))
		{
			iVar1 = -15;
			if (iParam4 > 0 || iParam5 > 0)
			{
				iVar1 = func_538();
				func_73(&iVar1, 0, iParam4, iParam5, 0, 0, 0, 1);
			}
			Global_40.f_4942[iParam0]->f_11[*iParam2] = iParam1;
			Global_40.f_4942[iParam0]->f_11[*iParam2]->f_1 = iVar1;
			Global_40.f_4942[iParam0]->f_11[*iParam2]->f_2 = 0;
			return true;
		}
		*iParam2++;
	}
	func_117(iParam0, 0);
	*iParam2 = 9;
	iVar2 = -15;
	if (iParam4 > 0 || iParam5 > 0)
	{
		iVar2 = func_538();
		func_73(&iVar2, 0, iParam4, iParam5, 0, 0, 0, 1);
	}
	Global_40.f_4942[iParam0]->f_11[*iParam2] = iParam1;
	Global_40.f_4942[iParam0]->f_11[*iParam2]->f_1 = iVar2;
	Global_40.f_4942[iParam0]->f_11[*iParam2]->f_2 = 0;
	return true;
}

bool func_356(int iParam0, int iParam1)
{
	if (!func_75(iParam0))
	{
		return false;
	}
	if (func_539(iParam0, iParam1))
	{
		return false;
	}
	iVar0 = func_41(iParam0);
	if (!func_6(iVar0, 0))
	{
		return false;
	}
	iVar1 = -1;
	if (!func_115(iParam0, iParam1, &iVar1, &uVar2))
	{
		return false;
	}
	if (func_290(iParam0, iParam1))
	{
	}
	if (!func_72(iParam0, 512, 0))
	{
		func_5(iParam0, 512, 0, -1);
	}
	if (_0x1e017404784aa6a3(iVar0, iParam1))
	{
		func_485(iParam0, iParam1, 1);
		return true;
	}
	return false;
}

Vector3 func_357(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 581819093:
			return 3.5f, 3.5f, 3f;
		case 673012160:
			return 4.5f, 4.5f, 3f;
	}
	return 3f, 3f, 3f;
}

int func_358(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (!_does_volume_exist(iParam0))
	{
		return 0;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	vVar3 = { _0x3e2a25b2416dd67e(iParam0) };
	iVar6 = func_540(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

bool func_359(var uParam0, var uParam1)
{
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (func_334(iVar1, &uParam1))
		{
		}
		else if (func_541(iVar1))
		{
			if (is_entity_in_volume(func_41(iVar1), *uParam0, true, 0))
			{
				iVar0 = 1;
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_360(var uParam0)
{
	if (Global_1359489->f_672)
	{
		return true;
	}
	iVar0 = 1;
	if (func_264(*uParam0) < 100f)
	{
		iVar0 = 0;
	}
	if (vdist2(Global_36, _get_scenario_point_coords(uParam0->f_33, true)) < 100f)
	{
		iVar0 = 0;
	}
	if (func_160(uParam0->f_1, 1116471296, -1082130432, -1082130432, -1082130432) || is_sphere_visible(_get_scenario_point_coords(uParam0->f_33, true), 3f))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_361(int iParam0)
{
	switch (iParam0)
	{
		case -1891229662:
			return true;
		default:
			break;
	}
	return false;
}

bool func_362(int iParam0, int iParam1)
{
	if (func_165() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_363(int iParam0)
{
	if (func_165() != -1)
	{
		if (func_365(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_365(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_364(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_365(iParam0, 65536) && !func_365(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_365(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_365(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_365(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_366()
{
	return Global_1905944->f_5694;
}

int func_367(int iParam0, int iParam1, int iParam2)
{
	vVar0 = { get_entity_coords(iParam1, false, false) };
	return func_542(iParam0, vVar0, iParam2);
}

void func_368(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_369(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

struct<8> func_370(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	iVar0 = get_length_of_literal_string(sParam0);
	iVar1 = get_length_of_literal_string(sParam1);
	if (iVar0 >= iParam3)
	{
		StringCopy(&cVar2, _0x806862e5d266cf38(sParam0, (iVar0 - iParam3), iVar0), 64);
	}
	else
	{
		StringCopy(&cVar2, sParam0, 64);
	}
	iVar0 = get_length_of_literal_string(&cVar2);
	if (iVar1 >= iParam3)
	{
		StringCopy(&cVar10, _0x806862e5d266cf38(sParam1, (iVar1 - iParam3), iVar1), 64);
	}
	else
	{
		StringCopy(&cVar10, sParam1, 64);
	}
	iVar1 = get_length_of_literal_string(&cVar10);
	if (bParam2)
	{
		if ((iVar0 + iVar1) >= iParam3)
		{
			StringCopy(&cVar10, _0x806862e5d266cf38(&cVar10, iVar0, iVar1), 64);
		}
	}
	else if ((iVar0 + iVar1) >= iParam3)
	{
		StringCopy(&cVar2, _0x806862e5d266cf38(&cVar2, iVar1, iVar0), 64);
	}
	Var18 = { cVar2 };
	StringConCat(&Var18, &cVar10, 64);
	return Var18;
}

struct<4> func_371(var uParam0)
{
	return uParam0->f_152;
}

char* func_372(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	if (iParam0 == Global_35)
	{
		if (get_entity_model(Global_35) == 11966224)
		{
			return "John";
		}
		else
		{
			return "Arthur";
		}
	}
	iVar0 = get_entity_model(iParam0);
	return func_543(iVar0);
}

void func_373(struct<4> Param0)
{
	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_544(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1] == Param0 && Global_1946804->f_769[iVar1]->f_2 == Param0.f_2) && Global_1946804->f_769[iVar1]->f_3 == Param0.f_3) && Global_1946804->f_769[iVar1]->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1] == 34 && func_544(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_545(Param0);
	*Global_1946804->f_769[Global_1946804->f_854] = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_546(8);
}

void func_374(var uParam0)
{
	if (_0x91a5f9cbebb9d936(uParam0->f_9))
	{
		remove_scenario_blocking_area(uParam0->f_9, false);
	}
}

struct<8> func_375()
{
	StringCopy(&cVar0, "NormalStart", 64);
	return cVar0;
}

bool func_376(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

char* func_377()
{
	return "unnamed";
}

void func_378(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	if (_0x91a5f9cbebb9d936(uParam0->f_9))
	{
		remove_scenario_blocking_area(uParam0->f_9, false);
	}
	uParam0->f_4 = uParam1;
	iVar0 = 14;
	if (bParam3)
	{
		iVar0 |= 1;
	}
	uParam0->f_9 = _0x4c39c95ae5db1329(uParam1, iParam2, iVar0);
}

void func_379(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_156))
	{
		return;
	}
	if (!_is_anim_scene_loaded(uParam0->f_156, true, false))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!is_entity_dead(&(uParam0->f_13[iVar0])) || func_547(uParam0->f_13[iVar0], 2))
		{
			if (_0x6f1f0b17109309da(uParam0->f_156, &(uParam0->f_13[iVar0]->f_1)))
			{
				func_449(uParam0->f_13[iVar0], 1);
			}
		}
		iVar0++;
	}
}

void func_380(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!is_entity_dead(&(uParam0->f_13[iVar0])) || func_547(uParam0->f_13[iVar0], 2))
		{
			if (func_547(uParam0->f_13[iVar0], 1) || _0x6f1f0b17109309da(uParam0->f_156, &(uParam0->f_13[iVar0]->f_1)))
			{
				func_548(uParam0, &(uParam0->f_13[iVar0]->f_1), &(uParam0->f_13[iVar0]), uParam0->f_13[iVar0]->f_9);
				if (bParam1 && is_entity_a_ped(&(uParam0->f_13[iVar0])))
				{
					iVar1 = get_ped_index_from_entity_index(&(uParam0->f_13[iVar0]));
					if (iVar1 != Global_35 && !func_547(uParam0->f_13[iVar0], 16))
					{
						func_549(iVar1);
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_381(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

struct<8> func_382(var uParam0)
{
	return uParam0->f_166;
}

struct<8> func_383()
{
	StringCopy(&cVar0, "MultiStart", 64);
	return cVar0;
}

void func_384(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

bool func_385(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_550(iParam0, iParam1))
		{
			if (!func_551(iParam1->f_10, 1))
			{
				set_ped_config_flag(iParam0, 130, false);
				set_ped_config_flag(iParam0, 315, false);
				set_ped_config_flag(iParam0, 297, false);
				set_ped_config_flag(iParam0, 178, true);
				func_397(uParam2, 0, 0, 1, 0);
				func_552(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_551(iParam1->f_10, 1))
		{
			func_553(uParam2);
			set_ped_config_flag(iParam0, 130, true);
			set_ped_config_flag(iParam0, 315, true);
			set_ped_config_flag(iParam0, 297, true);
			set_ped_config_flag(iParam0, 178, false);
			func_554(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_386(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!is_entity_dead(*iParam0))
	{
		_0xe98d55c5983f2509(*iParam0);
		bVar4 = func_551(iParam4, 32);
		func_555(iParam1, uParam2, 0);
		iVar5 = func_556(*iParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			set_ped_config_flag(*iParam0, 178, false);
			return true;
		}
		func_397(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_551(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_551(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_551(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_551(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_551(iParam4, 8388608) || func_551(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_551(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_551(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_388(iParam1, 4))
		{
			iVar6 |= 1024;
			_0xbb1e41dd3d3c6250(*iParam0, "IloGeneralEvents", 2);
		}
		if (!func_388(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_551(iParam4, 67108864))
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
				iParam6 = func_557(iParam0);
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
			if (func_551(iParam4, 268435456))
			{
				iVar8 = func_558(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_559(iParam1, (*uParam2)[iVar8]);
				}
			}
			if (func_388(iParam1, 23))
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
			if (func_551(iParam4, 2) || func_551(iParam4, 16))
			{
				func_387(*iParam0, 1, 1);
			}
			else
			{
				func_387(*iParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_387(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !is_entity_dead(iParam0))
	{
		set_ped_config_flag(iParam0, 317, bParam1);
	}
}

bool func_388(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

bool func_389(int iParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_560(*iParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_390(int iParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_561(*iParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_551(iParam10, 32), 1, 0);
			set_bit(iParam2, 1);
		}
	}
	else if (is_bit_set(*iParam2, 1))
	{
		clear_bit(iParam2, 1);
	}
}

void func_391(int iParam0)
{
	if (func_551(iParam0, 4))
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
	if (func_551(iParam0, 16384))
	{
		disable_control_action(0, -485697785, false);
	}
	if (func_551(iParam0, 8))
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
	}
}

int func_392(int* iParam0, var uParam1)
{
	disable_control_action(0, 1287709438, false);
	disable_control_action(0, 1499911466, false);
	iVar0 = 0;
	if (((((is_control_pressed(0, 1287709438) || is_control_pressed(0, 1499911466)) || is_control_pressed(0, -209515122)) || func_562()) || func_563()) || func_564())
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_38(&(iParam0->f_46));
	}
	if (func_39(&(iParam0->f_46)) && !func_415(&(iParam0->f_46), 0.25f))
	{
		func_565(uParam1);
	}
	if (iVar0 == 1)
	{
		return 0;
	}
	return 1;
}

bool func_393(int iParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	iVar1 = func_120(1);
	bVar2 = is_bit_set(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = is_ped_on_foot(Global_35);
	bVar10 = is_ped_injured(*iParam0);
	bVar11 = (((_is_ped_carrying(Global_35) || func_566(Global_35)) || func_567(Global_35)) || func_568(Global_35));
	fVar12 = -1f;
	if (func_39(&(iParam1->f_13)))
	{
		fVar12 = func_40(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((*uParam4)[iVar0]->f_8 != iParam12)
		{
			iParam12 = (*uParam4)[iVar0]->f_8;
		}
		bVar4 = func_12((*uParam4)[iVar0]->f_6);
		func_569(*iParam0, (*uParam4)[iVar0], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (is_bit_set(uParam4[iVar0], 20))
		{
			bVar3 = true;
		}
		if (func_570(*iParam0, iParam1, (*uParam4)[iVar0], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_571(iParam12, (*uParam4)[iVar0]->f_6))
				{
					if (!bVar7)
					{
						func_397(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_402(uParam4, 0, 0);
					}
					if (is_bit_set(uParam4[iVar0], 11))
					{
						func_555(iParam1, uParam4, is_bit_set(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = is_bit_set(uParam4[iParam1->f_1], 16);
					if (!iParam1->f_9)
					{
						set_bit(iParam1, 0);
					}
					if (is_bit_set(uParam4[iVar0], 12) || is_bit_set(*iParam1, 20))
					{
						if (!is_bit_set(*iParam1, 19))
						{
							func_572(iParam1, uParam4, iParam0, fParam3, sParam9);
							bVar13 = is_string_null_or_empty(sParam9);
							func_200(iParam1, uParam4, iParam0, bVar13, sParam9, fParam2);
						}
						if (!is_bit_set(*iParam1, 7))
						{
							set_bit(&(iParam1->f_21), 3);
						}
						set_bit(&(iParam1->f_21), 20);
					}
					if (is_bit_set(iParam1->f_21, 20))
					{
						if (is_ped_on_mount(Global_35) || is_ped_in_any_vehicle(Global_35, false))
						{
							iParam1->f_2 = 3;
						}
						if (!is_bit_set(*iParam1, 13))
						{
							if (func_422(func_421(Global_35, 0, 1, 0)) || func_422(func_421(Global_35, 1, 1, 0)))
							{
								iParam1->f_2 = 3;
							}
						}
						if (!is_bit_set(*iParam1, 12))
						{
							if (_is_ped_carrying(Global_35))
							{
								iParam1->f_2 = 3;
							}
						}
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
					if (func_573(iParam1, fParam6, iParam1->f_9))
					{
						func_38(&(iParam1->f_18));
						if (bVar6)
						{
							func_402(uParam4, 0, 0);
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
		func_574(iParam1, fParam2);
	}
	return bVar5;
}

void func_394(var uParam0)
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

void func_395(int* iParam0, var uParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_575((*uParam1)[iVar0]))
		{
			if (is_bit_set(uParam1[iVar0], 20))
			{
				func_574(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_396(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!is_control_pressed(0, -124244224))
		{
			if (func_576(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_154(iParam1, 0);
				func_555(iParam1, uParam2, func_388(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

void func_397(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_12((*uParam0)[iVar0]->f_6))
			{
				if (!bParam4 && is_bit_set(uParam0[iVar0], 11))
				{
				}
				else
				{
					func_13(&((*uParam0)[iVar0]->f_6), 1, 1);
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

void func_398(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_569(iParam0, (*uParam2)[iVar0], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_399(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

bool func_400(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_401(int* iParam0)
{
	if (is_bit_set(iParam0->f_21, 8) || is_bit_set(*iParam0, 11))
	{
		return true;
	}
	if (!is_bit_set(iParam0->f_21, 9))
	{
		if (func_577(&uVar0))
		{
			func_79(&(iParam0->f_37), 0);
			set_bit(&(iParam0->f_21), 9);
			if (func_578())
			{
			}
		}
		else
		{
			func_79(&(iParam0->f_37), 0);
			set_bit(&(iParam0->f_21), 9);
		}
	}
	else if (is_bit_set(iParam0->f_21, 9))
	{
		bVar1 = func_423(&(iParam0->f_37)) >= 1.5f;
		if ((!func_577(&uVar0) || func_578()) || bVar1)
		{
			if (bVar1)
			{
				func_579();
			}
			set_bit(&(iParam0->f_21), 8);
			return true;
		}
	}
	return false;
}

void func_402(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_580((*uParam0)[iVar0], bParam1, bParam2);
		iVar0++;
	}
}

int func_403(int iParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (is_ambient_speech_playing(*iParam0) || is_scripted_speech_playing(*iParam0))
		{
			return 0;
		}
		iParam1->f_9 = 0;
		set_bit(iParam1, 0);
		if (fParam2 > 0f)
		{
			func_38(&(iParam1->f_18));
			return 0;
		}
		else if (func_39(&(iParam1->f_18)))
		{
			func_88(&(iParam1->f_18));
			return 0;
		}
	}
	if (!func_39(&(iParam1->f_18)))
	{
		return 1;
	}
	if (fParam2 > 0f && bParam3)
	{
		if (is_ambient_speech_playing(Global_35) || is_scripted_speech_playing(Global_35))
		{
			return 0;
		}
	}
	return func_581(&(iParam1->f_18), fParam2);
	return 1;
}

void func_404(int* iParam0, var uParam1)
{
	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_6 = -1;
	Var1.f_12 = 1073741824;
	Var1.f_16 = 1;
	Var1.f_26 = 1106247680;
	Var1.f_27 = 1067450368;
	Var1.f_29 = 1092616192;
	Var1.f_30 = 1112014848;
	Var1.f_31 = 1106247680;
	Var1.f_32 = 1101529088;
	Var1.f_33 = 1101004800;
	Var1.f_34 = 1084227584;
	Var62.f_2 = 570;
	Var62.f_3 = 1065353216;
	Var62.f_4 = -1082130432;
	Var62.f_9 = 3;
	func_60(iParam0, 0);
	func_555(iParam0, uParam1, 1);
	func_397(uParam1, 0, 1, 1, 0);
	_copy_memory(iParam0, &Var1, 61);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		_copy_memory((*uParam1)[iVar0], &Var62, 17);
		iVar0++;
	}
}

void func_405(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_406(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_483(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_407(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_408(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

void func_409(var uParam0, int* iParam1)
{
	if (is_bit_set(*iParam1, 21))
	{
		func_229(iParam1);
		return;
	}
	if (_does_volume_exist(iParam1->f_36) || !func_6(*uParam0, 0))
	{
		return;
	}
	iParam1->f_36 = _0x0eb78c2b156635b1(665633627, get_entity_coords(*uParam0, true, false), 0f, 0f, 0f, 0.55f, 0.55f, 3f);
	_0x5b23dff8e0948bb2(iParam1->f_36, 1);
}

int func_410(int* iParam0)
{
	if (is_bit_set(*iParam0, 8))
	{
		return 1;
	}
	func_582(64);
	if (is_bit_set(iParam0->f_21, 14))
	{
		if (func_422(func_421(Global_35, 0, 1, 0)) && func_421(Global_35, 0, 1, 0) == -1016714371)
		{
			clear_bit(&(iParam0->f_21), 14);
			clear_bit(&(iParam0->f_21), 15);
			return 0;
		}
		return 1;
	}
	if (!is_bit_set(iParam0->f_21, 15))
	{
		if (((func_422(func_421(Global_35, 0, 1, 0)) && func_421(Global_35, 0, 1, 0) == -1016714371) && !func_129(Global_35, 716706914)) && !func_129(Global_35, 242628503))
		{
			_0x94a3c1b804d291ec(Global_35, 1, 0, 1, 0);
			task_swap_weapon(Global_35, 0, 0, 0, 0);
			_0x2208438012482a1a(Global_35, false, false);
			func_79(&(iParam0->f_49), 0);
			set_bit(&(iParam0->f_21), 15);
		}
	}
	else if (is_bit_set(iParam0->f_21, 15))
	{
		bVar0 = func_423(&(iParam0->f_49)) >= 1.5f;
		if (!func_422(func_421(Global_35, 0, 1, 0)) || bVar0)
		{
			func_583(0);
			func_88(&(iParam0->f_49));
			set_bit(&(iParam0->f_21), 14);
			return 1;
		}
	}
	return 0;
}

int func_411(int* iParam0)
{
	if (is_bit_set(*iParam0, 10))
	{
		return 1;
	}
	disable_control_action(0, -209515122, false);
	if (is_bit_set(iParam0->f_21, 12))
	{
		if (&Global_1357517)
		{
			clear_bit(&(iParam0->f_21), 12);
			clear_bit(&(iParam0->f_21), 13);
			return 0;
		}
		return 1;
	}
	if (!is_bit_set(iParam0->f_21, 13))
	{
		if (&Global_1357517)
		{
			Global_1357516 = 0;
		}
		func_79(&(iParam0->f_40), 0);
		set_bit(&(iParam0->f_21), 13);
	}
	else if (is_bit_set(iParam0->f_21, 13))
	{
		bVar0 = func_423(&(iParam0->f_40)) >= 1.5f;
		if (!&Global_1357517 || bVar0)
		{
			func_88(&(iParam0->f_40));
			set_bit(&(iParam0->f_21), 12);
			return 1;
		}
	}
	return 0;
}

void func_412(bool bParam0)
{
	if (bParam0)
	{
		func_584(4);
	}
	func_584(2);
	set_bit(&(Global_1956580->f_1), 0);
}

void func_413(int iParam0, int iParam1, int iParam2)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0x18262cafebb5fbe1(iParam0, iParam1, iParam2, 0, -1, -1, 0);
	_0xb56d41a694e42e86(iParam0, iParam1, iParam2, 0, -1, -1, 2);
}

void func_414(int iParam0, vector3 vParam1, bool bParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, int iParam10, bool bParam11, int iParam12)
{
	if (bParam4)
	{
	}
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (!is_ped_human(iParam0))
	{
		return;
	}
	if (func_376(vParam1, 0f, 0f, 0f))
	{
		return;
	}
	if (((fParam5 < 0f || fParam6 < 0f) || fParam7 < 0f) || fParam8 < 0f)
	{
		return;
	}
	if (((((!fParam5 > fParam6 || !fParam5 > fParam7) || !fParam5 > fParam8) || !fParam6 > fParam7) || !fParam6 > fParam8) || !fParam7 > fParam8)
	{
		return;
	}
	iVar0 = get_mount(iParam0);
	if (is_ped_in_any_vehicle(iParam0, false))
	{
		iVar1 = get_vehicle_ped_is_in(iParam0, false);
	}
	fVar3 = func_42(iParam0, vParam1, 1);
	if ((fVar3 <= fParam5 && fVar3 > fParam6) && fVar3 > fParam7)
	{
		if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
		{
			set_ped_max_move_blend_ratio(iVar0, 1.75f);
		}
		if ((func_585() && !is_entity_dead(iVar1)) && _is_draft_vehicle(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = _get_ped_in_draft_seat(iVar1, iVar4);
				if (!is_entity_dead(iVar2))
				{
					set_ped_max_move_blend_ratio(iVar2, 1.75f);
					_0x0c3f0f7f92ca847c(iVar1, _0x46bf2a810679d6e6(iVar2, 1.75f));
				}
				iVar4++;
			}
		}
	}
	if (fVar3 <= fParam6 && fVar3 > fParam7)
	{
		if (bParam11)
		{
			set_ped_max_move_blend_ratio(iParam0, 1.5f);
		}
		if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
		{
			set_ped_max_move_blend_ratio(iVar0, 1.25f);
		}
		if (!is_entity_dead(iVar1) && _is_draft_vehicle(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = _get_ped_in_draft_seat(iVar1, iVar4);
				if (!is_entity_dead(iVar2))
				{
					set_ped_max_move_blend_ratio(iVar2, 1.25f);
					_0x0c3f0f7f92ca847c(iVar1, _0x46bf2a810679d6e6(iVar2, 1.25f));
				}
				iVar4++;
			}
		}
	}
	if (fVar3 <= fParam7)
	{
		if (bParam11)
		{
			set_ped_max_move_blend_ratio(iParam0, 1f);
		}
		if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
		{
			set_ped_max_move_blend_ratio(iVar0, 1f);
			if (iParam9 == 1)
			{
				if (_0x33fa048675821da7(iVar0, 3))
				{
					_0x06d26a96ca1bca75(iVar0, 3, 0f, 0);
				}
			}
		}
		if (!is_entity_dead(iVar1) && _is_draft_vehicle(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = _get_ped_in_draft_seat(iVar1, iVar4);
				if (!is_entity_dead(iVar2))
				{
					set_ped_max_move_blend_ratio(iVar2, 1f);
					if (iParam9 == 1)
					{
						if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
						{
							if (_0x33fa048675821da7(iVar0, 3))
							{
								_0x06d26a96ca1bca75(iVar2, 3, 0f, 0);
							}
						}
					}
					_0x0c3f0f7f92ca847c(iVar1, _0x46bf2a810679d6e6(iVar2, 1f));
				}
				iVar4++;
			}
		}
	}
	if (bParam4)
	{
		if (fVar3 <= fParam8)
		{
			if (iParam0 == Global_35)
			{
				set_player_may_not_enter_any_vehicle(player_id());
				_0x9f9a829c6751f3c7(player_id(), 28, 1);
			}
			if (!is_entity_dead(iVar0) && !func_586(iParam0, 501393341))
			{
				task_dismount_animal(iParam0, iParam12, 0, 0, 0, 0);
			}
			if (!is_entity_dead(iVar1) && !func_586(iParam0, -828834893))
			{
				task_leave_any_vehicle(iParam0, 0, iParam12);
			}
		}
	}
}

bool func_415(var uParam0, float fParam1)
{
	if (!func_39(uParam0))
	{
		return false;
	}
	if (func_40(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_416(int* iParam0, var uParam1, int iParam2, char* sParam3)
{
	if (is_entity_dead(*iParam2))
	{
		return;
	}
	if (!is_string_null_or_empty(sParam3))
	{
		iVar0 = _uiprompt_set_ambient_group_this_frame(*iParam2, iParam0->f_26, 3, 1, 0, sParam3, 0);
		iVar1 = 0;
		while (iVar1 < *uParam1)
		{
			if (!func_12((*uParam1)[iVar1]->f_6) || func_587((*uParam1)[iVar1]->f_6) == 0)
			{
			}
			else
			{
				_uiprompt_set_group(func_587((*uParam1)[iVar1]->f_6), iVar0, 0);
			}
			iVar1++;
		}
	}
}

Vector3 func_417(int iParam0, int iParam1, float fParam2)
{
	return func_588(get_entity_coords(iParam0, true, false), get_entity_coords(iParam1, true, false), fParam2);
}

void func_418(int iParam0, vector3 vParam1)
{
	if (does_entity_exist(iParam0))
	{
		vVar0 = { vParam1 };
		if (get_ground_z_for_3d_coord(vVar0, &(vVar0.f_2), false))
		{
			set_entity_coords(iParam0, vVar0, true, false, true, true);
		}
		else
		{
			set_entity_coords(iParam0, vParam1, true, false, true, true);
		}
	}
}

bool func_419(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	iVar0 = create_itemset(false);
	if (!is_itemset_valid(iVar0))
	{
		return false;
	}
	_0x20a4bf0e09bee146(iVar0);
	find_all_attached_carriable_entities(iParam0, iVar0);
	iVar1 = get_itemset_size(iVar0);
	if (iVar1 == 0)
	{
	}
	destroy_itemset(iVar0);
	iVar9 = 0;
	while (iVar9 < 4)
	{
		iVar2 = func_589(iVar9);
		if (!_0x608bc6a6aacd5036(&Var3, iParam0, iVar2, 0))
		{
		}
		else
		{
			iVar7 = Var3.f_3;
			if (!does_entity_exist(iVar7))
			{
			}
			else
			{
				if (is_entity_dead(iVar7))
				{
				}
				iVar8 = _get_entity_carry_config(iVar7);
				if (iVar8 == -1992418870 || iVar8 == 822715387)
				{
					return true;
				}
			}
		}
		iVar9++;
	}
	return false;
}

int func_420()
{
	return Global_1900383->f_393;
}

int func_421(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_422(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

float func_423(var uParam0)
{
	if (!func_39(uParam0))
	{
		return 0f;
	}
	if (func_171(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_172() - uParam0->f_1);
}

int func_424(int iParam0)
{
	if (!func_93(iParam0))
	{
		return -1;
	}
	return func_590(func_267(iParam0));
}

void func_425(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam3 = func_268(iParam0);
	*uParam1 = func_426(iParam0);
	*uParam2 = func_590(iParam0);
}

int func_426(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

bool func_427(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

int func_428(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_2;
	}
	return -1;
}

void func_429(int iParam0, var uParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = uParam1;
}

void func_430(int iParam0, int iParam1)
{
	if (iParam0 == -1 || iParam0 == 0)
	{
		*Global_1898164->f_1[iParam1] = { Var0 };
	}
	else
	{
		Global_1898164->f_1[iParam1] = iParam0;
		Global_1898164->f_1[iParam1]->f_1 = func_267(iParam0);
		func_425(Global_1898164->f_1[iParam1]->f_1, &(Global_1898164->f_1[iParam1]->f_3), &(Global_1898164->f_1[iParam1]->f_4), &(Global_1898164->f_1[iParam1]->f_2));
	}
}

void func_431(int iParam0, int iParam1)
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
			func_591((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_591(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_93(&(Global_1898164->f_1[0])))
	{
		func_102(&(Global_1898164->f_1[0]), 3);
	}
}

void func_432(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 153)
	{
		if (Global_1914319->f_15936[iVar0]->f_5)
		{
			Global_1914319->f_15936[iVar0]->f_5 = 0;
		}
		func_592(Global_1914319->f_15936[iVar0], bParam0);
		iVar0++;
	}
}

void func_433(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_592(Global_1934051->f_23[iVar0], bParam0);
		iVar0++;
	}
}

void func_434(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 33)
	{
		func_592(Global_1899778->f_34[iVar0], bParam0);
		(*Global_1899778)[iVar0] = 0;
		iVar0++;
	}
}

void func_435(bool bParam0)
{
	func_592(Global_1956614, bParam0);
}

void func_436(bool bParam0)
{
	func_592(&(Global_1415412->f_3), bParam0);
}

void func_437(bool bParam0)
{
	if (func_593(Global_1934051->f_33))
	{
		func_594(Global_1934051->f_33, 7148155);
	}
	func_592(&(Global_1934051->f_33), bParam0);
}

void func_438(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		iVar1 = func_596(func_595(iVar0));
		if (iVar1 != 0)
		{
			func_594(Global_1934051[iVar0], iVar1);
		}
		if ((*Global_1934051)[iVar0]->f_1)
		{
			(*Global_1934051)[iVar0]->f_1 = 0;
		}
		func_592((*Global_1934051)[iVar0], bParam0);
		iVar0++;
	}
}

void func_439(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		func_597(iVar0, -1);
		func_598(iVar0, 0);
		func_599(iVar0, 0);
		if (does_blip_exist(&(Global_36308[iVar0])))
		{
			if (bParam0)
			{
				set_radar_zoom(&(Global_36308[iVar0]));
			}
			remove_blip(Global_36308[iVar0]);
		}
		iVar0++;
	}
}

void func_440(int iParam0, bool bParam1, bool bParam2)
{
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_6, bParam1);
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_5, bParam2);
}

void func_441()
{
	func_600();
	func_601();
	func_602();
}

void func_442(var uParam0, var uParam1)
{
	Var0 = uParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(2, &Var0, 2, 2);
}

void func_443(var uParam0, var uParam1)
{
	Var0 = uParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(5, &Var0, 2, 2);
}

char* func_444(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	if (is_entity_a_ped(iParam0))
	{
		return func_372(get_ped_index_from_entity_index(iParam0));
	}
	else if (is_entity_an_object(iParam0))
	{
		return func_603(get_object_index_from_entity_index(iParam0));
	}
	else if (is_entity_a_vehicle(iParam0))
	{
		return func_604(get_vehicle_index_from_entity_index(iParam0));
	}
	return "";
}

int func_445(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (does_entity_exist(&(uParam0->f_13[iVar0])) && &uParam0->f_13[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_446(var uParam0, char* sParam1)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (does_entity_exist(&(uParam0->f_13[iVar0])) && are_strings_equal(&(uParam0->f_13[iVar0]->f_1), sParam1))
		{
			return &(uParam0->f_13[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

void func_447(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar12 = 0;
	while (iVar12 < 11)
	{
		if (&uParam0->f_13[iVar12] == iParam1)
		{
			*uParam0->f_13[iVar12] = { Var0 };
			return;
		}
		iVar12++;
	}
}

int func_448(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!does_entity_exist(&(uParam0->f_13[iVar0])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_449(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 || iParam1);
}

void func_450(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 - (uParam0->f_11 && iParam1));
}

void func_451(int* iParam0, int iParam1)
{
	if (!func_6(*iParam1, 0))
	{
		return;
	}
	iParam0->f_57 = { func_417(*iParam1, Global_35, iParam0->f_26) };
	iParam0->f_57 = { iParam0->f_57 + Global_36 };
	iParam0->f_57.f_2 = (iParam0->f_57.f_2 + 10f);
}

void func_452()
{
	_0x88544c0e3291dcae(1);
	func_605();
}

void func_453(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	clear_ped_non_creation_area();
	_0xa1cfb35069d23c23(iParam0);
	_0x74c2b3dc0b294102(iParam0);
}

void func_454(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

bool func_455(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	func_173(uParam4, &uParam0);
	if (func_127(uParam4, 2) && !func_127(uParam4, 67108864))
	{
		disable_control_action(0, -842734359, false);
	}
	if (func_606(uParam4) != 1)
	{
		func_607(uParam4);
	}
	_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
	set_ped_reset_flag(Global_35, 134, true);
	_uiprompt_enable_prompt_type_this_frame(6);
	_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
	switch (func_606(uParam4))
	{
		case 1:
			if (_does_anim_scene_exist(uParam4->f_156) && _is_anim_scene_loaded(uParam4->f_156, true, false))
			{
				if (!_is_anim_scene_started(uParam4->f_156, false))
				{
					func_608(uParam4, &uParam0);
				}
				else if (_0xef324e9550a394d5(uParam4->f_156))
				{
					func_609(uParam4, 4);
					return false;
				}
				else if (func_610(uParam4, 2))
				{
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_149);
				}
				func_609(uParam4, 3);
			}
			else if (!_does_anim_scene_exist(uParam4->f_156))
			{
				if (!is_screen_fading_out())
				{
					do_screen_fade_out(0);
				}
				if (!is_string_null_or_empty(&(uParam4->f_158)) && func_127(uParam4, 134217728))
				{
				}
				else
				{
					func_150(uParam4);
				}
				func_38(&(uParam4->f_1));
				func_609(uParam4, 2);
			}
			else
			{
				if (!is_screen_fading_out() && !is_screen_faded_out())
				{
					do_screen_fade_out(0);
				}
				func_187(uParam4);
				if (!func_39(&(uParam4->f_1)))
				{
					func_79(&(uParam4->f_1), 0);
				}
				else if (func_40(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_156))
					{
						_delete_anim_scene(uParam4->f_156);
					}
					func_609(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!_does_anim_scene_exist(uParam4->f_156) || !_is_anim_scene_loaded(uParam4->f_156, true, false))
			{
				if (func_43(uParam4, &uParam0, 1, 1))
				{
					if (!_is_anim_scene_loaded(uParam4->f_156, true, false))
					{
						func_609(uParam4, 4);
					}
					else if (!func_58(func_174(uParam4)) && !func_611(Global_35, func_174(uParam4), 100f, 1, 1))
					{
						func_612(1);
						start_player_teleport(get_player_index(), func_174(uParam4), 0f, true, true, true, false);
					}
				}
				else if (func_40(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_156))
					{
						_delete_anim_scene(uParam4->f_156);
					}
					func_609(uParam4, 4);
				}
			}
			else if (!is_player_teleport_active() || _has_player_teleport_finished(get_player_index()))
			{
				if (!get_is_loading_screen_active())
				{
					_0xa565fac215cbc77d();
					func_613(1, 0);
					func_608(uParam4, &uParam0);
					func_609(uParam4, 3);
				}
				else
				{
					shutdown_loading_screen();
				}
			}
			else if (func_40(&(uParam4->f_1)) >= 60f)
			{
				if (_does_anim_scene_exist(uParam4->f_156))
				{
					_delete_anim_scene(uParam4->f_156);
				}
				func_609(uParam4, 4);
			}
			break;
		case 3:
			func_614(uParam4);
			if (func_610(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_149);
			}
			if ((_does_anim_scene_exist(uParam4->f_156) && _is_anim_scene_started(uParam4->f_156, false)) && (_0xef324e9550a394d5(uParam4->f_156) || func_127(uParam4, 512)))
			{
				if (!func_127(uParam4, 1024) && func_131(uParam4, 1))
				{
					set_gameplay_cam_relative_heading(0f, 1f);
					set_gameplay_cam_relative_pitch(0f, 1f);
				}
				if (!func_127(uParam4, 512))
				{
					func_38(&(uParam4->f_1));
					func_175(uParam4, 512);
					func_609(uParam4, 4);
				}
				else if (func_127(uParam4, 524288))
				{
					if (is_screen_faded_in() || is_screen_fading_in())
					{
					}
					do_screen_fade_out(0);
				}
			}
			else
			{
				func_607(uParam4);
			}
			if (func_127(uParam4, 524288))
			{
				if (IntToFloat(absi((func_615(uParam4) - func_126(uParam4)))) <= 2f)
				{
					_0x1b70811d3bf75db9(1, 1);
				}
				if (_does_anim_scene_exist(uParam4->f_156))
				{
					if (_0xef324e9550a394d5(uParam4->f_156))
					{
						_0x1b70811d3bf75db9(1, 1);
					}
				}
				if (func_518(uParam4, Global_35, 4))
				{
					_0x1b70811d3bf75db9(1, 1);
				}
				if ((is_screen_faded_out() || is_screen_fading_out()) && func_126(uParam4) > 5000)
				{
					_0x1b70811d3bf75db9(1, 1);
				}
			}
			if (func_616(uParam4))
			{
				if (!_does_anim_scene_exist(uParam4->f_156))
				{
				}
				func_617(uParam4);
				func_618(uParam4);
				return true;
			}
			else
			{
				if (func_127(uParam4, 67108864))
				{
					if (is_screen_faded_out())
					{
						if (!_is_anim_scene_paused(uParam4->f_156) && !_0xef324e9550a394d5(uParam4->f_156))
						{
							_delete_anim_scene_2(uParam4->f_156);
						}
						func_38(&(uParam4->f_1));
						_0x1b70811d3bf75db9(1, 1);
						func_175(uParam4, 512);
						func_182(uParam4, 67108864, 1);
						func_609(uParam4, 4);
					}
					else if (!is_screen_fading_out() && !is_screen_faded_out())
					{
						do_screen_fade_out(1000);
					}
				}
				else if ((((!func_127(uParam4, 16384) && !_0xef324e9550a394d5(uParam4->f_156)) && is_screen_faded_out()) && func_126(uParam4) <= 5000) && func_126(uParam4) >= 0)
				{
					do_screen_fade_in(1000);
				}
				if (!func_127(uParam4, 536870912) && has_anim_event_fired(Global_35, -1495039362))
				{
					func_619(&(uParam4->f_213), 0);
					func_175(uParam4, 536870912);
				}
				if (func_126(uParam4) >= 5000 && func_126(uParam4) <= (func_615(uParam4) - 5000))
				{
					func_620();
				}
			}
			break;
		case 6:
			if (func_616(uParam4))
			{
				func_617(uParam4);
				func_618(uParam4);
				return true;
			}
			break;
		case 4:
			if (func_127(uParam4, 524288))
			{
				_0x1b70811d3bf75db9(1, 1);
			}
			if (!is_screen_faded_out())
			{
				if (!is_screen_fading_out())
				{
					do_screen_fade_out(1000);
					if (_is_anim_scene_paused(uParam4->f_156))
					{
						func_175(uParam4, 1073741824);
					}
				}
			}
			else
			{
				if (_does_anim_scene_exist(uParam4->f_156))
				{
					if (!_is_anim_scene_paused(uParam4->f_156))
					{
						set_anim_scene_paused(uParam4->f_156, true);
						if (_0xc17f69e1418cd11f(9) != 0)
						{
							_0xdd1232b332cbb9e7(9, 1, 0);
						}
						return false;
					}
					else if (_0x4cdffe3189ebdbd0(uParam4->f_156))
					{
						return false;
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!func_610(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_150);
					if (StackVal || StackVal)
					{
						if (_does_anim_scene_exist(uParam4->f_156) && _is_anim_scene_paused(uParam4->f_156))
						{
							set_anim_scene_paused(uParam4->f_156, false);
						}
						func_609(uParam4, 3);
					}
					else if (func_40(&(uParam4->f_1)) >= 30f)
					{
						if (_does_anim_scene_exist(uParam4->f_156) && _is_anim_scene_paused(uParam4->f_156))
						{
							set_anim_scene_paused(uParam4->f_156, false);
						}
						func_609(uParam4, 3);
					}
				}
				if (func_606(uParam4) == 3)
				{
					if (func_127(uParam4, 524288))
					{
						do_screen_fade_out(0);
					}
				}
			}
			break;
		case 5:
			func_609(uParam4, 4);
			break;
	}
	return false;
}

void func_456(int iParam0, bool bParam1, int iParam2)
{
	if (!func_71(iParam0))
	{
		return;
	}
	if (!func_541(iParam0))
	{
		return;
	}
	if (bParam1 && !does_entity_exist(iParam2))
	{
		return;
	}
	if (bParam1 && is_entity_dead(iParam2))
	{
		return;
	}
	iVar0 = func_41(iParam0);
	if (bParam1)
	{
		set_ped_config_flag(iParam2, 155, true);
		set_blocking_of_non_temporary_events(iVar0, false);
	}
	else
	{
		set_blocking_of_non_temporary_events(iVar0, true);
	}
	set_ped_config_flag(iVar0, 152, bParam1);
	set_ped_config_flag(iVar0, 154, bParam1);
	set_ped_config_flag(iVar0, 156, bParam1);
	set_ped_config_flag(iVar0, 25, bParam1);
	set_ped_combat_attributes(iVar0, 87, bParam1);
	if (bParam1)
	{
		_0xd428c3f92fc3f6f8(iVar0, func_621(iParam0));
		_0x9238a3d970bbb0a9(iVar0, -1972074710);
		_0x9238a3d970bbb0a9(Global_35, -1972074710);
	}
	else
	{
		_0x9a4ac116cc1eee14(iVar0);
		if (!func_622())
		{
			_0x9a4ac116cc1eee14(Global_35);
		}
	}
}

bool func_457(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_165() != -1)
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

void func_458(int iParam0, int iParam1)
{
	iVar0 = iParam1;
	*iParam0 = (*iParam0 || shift_left(1, iVar0));
}

float func_459(int iParam0, int iParam1, bool bParam2)
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
	return func_623(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
}

int func_460(int iParam0, bool bParam1)
{
	if (!func_75(iParam0))
	{
		return 0;
	}
	if ((*Global_1360165)[iParam0]->f_127 != 0)
	{
		return (*Global_1360165)[iParam0]->f_127;
	}
	switch (iParam0)
	{
		case 3:
			return -698095578;
		case 7:
			return 230221572;
		case 0:
			return 47961446;
		case 5:
			return 1268955201;
		case 2:
			return 2103924091;
		case 1:
			return 1554677062;
		case 9:
			return 984702223;
		case 6:
			return -1825091419;
		case 11:
			return 948152617;
		case 8:
			return 795059774;
		case 23:
			return -1880884094;
		case 20:
			return 849012978;
		case 4:
			return 404801781;
		case 10:
			return -1094022447;
		case 26:
			return -1484815615;
		case 12:
		case 14:
			return 0;
		default:
			break;
	}
	if (bParam1)
	{
		(*Global_1360165)[iParam0]->f_127 = func_624(iParam0);
		return (*Global_1360165)[iParam0]->f_127;
	}
	return 0;
}

void func_461(int iParam0)
{
	iVar0 = func_91(iParam0);
	if (!_is_ped_carrying(iVar0))
	{
		return;
	}
	iVar1 = create_itemset(true);
	find_all_attached_carriable_entities(iVar0, iVar1);
	iVar2 = 0;
	while (iVar2 < get_itemset_size(iVar1))
	{
		iVar3 = _get_entity_from_item(get_indexed_item_in_itemset(iVar2, iVar1));
		if (!does_entity_exist(iVar3))
		{
		}
		else
		{
			if (!_0x88ad6cc10d8d35b2(iVar3))
			{
				set_entity_as_mission_entity(iVar3, true, true);
			}
			_0x0d0db2b6af19a987(&iVar3);
		}
		iVar2++;
	}
}

int func_462(int iParam0, bool bParam1)
{
	if (!func_75(iParam0))
	{
		return 0;
	}
	if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_126) && bParam1)
	{
		(*Global_1360165)[iParam0]->f_126 = func_625(iParam0);
	}
	return (*Global_1360165)[iParam0]->f_126;
}

void func_463(int iParam0)
{
	if (!func_75(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1357549->f_1675[iVar0]->f_1 == iParam0)
		{
			Global_1357549->f_1675[iVar0]->f_1 = -1;
			(*Global_1360165)[iParam0]->f_127 = 0;
		}
		iVar0++;
	}
}

void func_464(int iParam0, int iParam1)
{
	if (!func_75(iParam0))
	{
		return;
	}
	(*Global_1360165)[iParam0]->f_70.f_12 = iParam1;
}

void func_465(int iParam0, int iParam1)
{
	iParam0 = func_306(iParam0);
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

int func_466(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_467(int iParam0, int iParam1)
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

void func_468(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_469(int iParam0, int iParam1)
{
	iVar0 = func_252(*iParam0);
	iVar1 = func_251(*iParam0);
	if (iParam1 < 1 || iParam1 > func_257(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_470(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_471(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_472(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

int func_473(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -177936449;
		case 0:
			return -1758735922;
		case 6:
			return -680519380;
		case 3:
			return 263744889;
		case 7:
			return 351057032;
		case 4:
			return 1172283326;
		case 2:
			return -1046310682;
		case 5:
			return 652984488;
		case 8:
			return 1389665576;
		case 9:
			return -1066280913;
		case 13:
			return 1975793632;
		case 14:
			return -1887627202;
		case 15:
			return 1851096281;
		case 16:
			return 47402526;
		case 17:
			return 1762683397;
		case 18:
			return -1154551809;
		case 19:
			return -333682158;
		case 20:
			return 1465089966;
		case 21:
			return 511213393;
		case 22:
			return -1214580355;
		case 23:
			return -1397900723;
		case 10:
			return 541398842;
		case 24:
			return -1960060437;
		case 25:
			return 1634371177;
		case 26:
			return -1308114737;
		case 11:
			return 683250525;
		case 12:
			return -814958461;
	}
	return 0;
}

int func_474(int iParam0)
{
	iVar0 = func_266(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_626(iVar0);
}

int func_475(int iParam0, int iParam1)
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
			func_627(iVar2);
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

void func_476()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

int func_477(int iParam0, int iParam1)
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

int func_478(bool bParam0)
{
	if (func_165() == -1)
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

int func_479(int iParam0)
{
	if (!func_628(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_480(int iParam0)
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

void func_481(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && iParam0));
}

void func_482(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || iParam0);
}

bool func_483(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

int func_484(int iParam0)
{
	if (!func_75(iParam0))
	{
		return 0;
	}
	return (*Global_1360165)[iParam0]->f_1154;
}

void func_485(int iParam0, int iParam1, bool bParam2)
{
	if (!func_75(iParam0))
	{
		return;
	}
	if (func_288(iParam0, iParam1))
	{
		func_629(iParam0, bParam2);
		return;
	}
	iVar0 = -1;
	if (func_289(iParam0, iParam1, &iVar0))
	{
		func_294(iParam0, iVar0, bParam2);
	}
}

int func_486(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_630(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

int func_487(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
{
	if (!func_75(iParam0))
	{
		return 0;
	}
	vVar0 = { iParam3, iParam4, iParam5 };
	iVar3 = func_462(iParam0, 1);
	switch ((*Global_1360165)[iParam0]->f_70.f_12)
	{
		case 0:
			(*Global_1360165)[iParam0]->f_124 = _0x31c70a716cae1fee(iVar3);
			(*Global_1360165)[iParam0]->f_125 = 0;
			if (func_6((*Global_1360165)[iParam0]->f_124, 0))
			{
				func_464(iParam0, 3);
			}
			else
			{
				if (!func_631(iParam0) && func_632(iParam0, &uVar4))
				{
					_0x187d65f3aec5d679(func_460(iParam0, 1), &uVar4);
				}
				func_239(iParam0, 256, 0);
				func_464(iParam0, 1);
			}
			break;
		case 1:
			if (!Global_1359489->f_12)
			{
				if (!_0xa8120ebeaf290c7a(iVar3))
				{
					return func_633();
				}
				if (bParam2 && !func_58(vVar0))
				{
					_0x59c7ad6fea2ac449(iVar3, vVar0);
				}
				else if (bParam2)
				{
					_0xd4b614179bcd0654(iVar3);
				}
				if (!func_634(iParam0, vVar0, iParam6, iParam10))
				{
					return func_633();
				}
				if (func_6((*Global_1360165)[iParam0]->f_124, 0))
				{
					if (_0x31c70a716cae1fee(iVar3) != (*Global_1360165)[iParam0]->f_124)
					{
					}
					if (!does_entity_belong_to_this_script((*Global_1360165)[iParam0]->f_124, true))
					{
						set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
					}
					freeze_entity_position((*Global_1360165)[iParam0]->f_124, true);
					set_entity_invincible((*Global_1360165)[iParam0]->f_124, true);
					func_464(iParam0, 2);
				}
			}
			break;
		case 2:
			if (!func_6((*Global_1360165)[iParam0]->f_124, 0))
			{
				func_464(iParam0, 1);
				return func_633();
			}
			if (!bParam9 || _0xa0bc8faed8cfeb3c((*Global_1360165)[iParam0]->f_124))
			{
				func_464(iParam0, 3);
			}
			break;
		case 3:
			if (!func_6((*Global_1360165)[iParam0]->f_124, 0))
			{
				func_464(iParam0, 1);
				return func_633();
			}
			if (bParam7)
			{
				if (!func_302(iParam0, (*Global_1360165)[iParam0]->f_124, 1))
				{
					return func_633();
				}
			}
			if ((bParam2 && !func_58(vVar0)) && !func_159(vVar0, get_entity_coords((*Global_1360165)[iParam0]->f_124, true, false), 1056964608, 1))
			{
				if (is_entity_attached((*Global_1360165)[iParam0]->f_124))
				{
					detach_entity((*Global_1360165)[iParam0]->f_124, true, true);
				}
				func_59((*Global_1360165)[iParam0]->f_124, vVar0, iParam6, 2, 1073741824);
			}
			if (bParam1)
			{
				if (!_0x88ad6cc10d8d35b2((*Global_1360165)[iParam0]->f_124))
				{
					if (func_85(iParam0, 39, 1))
					{
					}
					set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				}
				func_78(iParam0, 39, 1);
				func_239(iParam0, 8, 1);
				func_239(iParam0, 64, 0);
				(*Global_1360165)[iParam0]->f_70.f_11 = get_id_of_this_thread();
			}
			freeze_entity_position((*Global_1360165)[iParam0]->f_124, false);
			set_entity_invincible((*Global_1360165)[iParam0]->f_124, false);
			func_635((*Global_1360165)[iParam0]->f_124, iParam0);
			if (bParam8)
			{
				_0xf74e134f40192884((*Global_1360165)[iParam0]->f_124, 1);
			}
			sVar12 = func_637(iParam0, func_636());
			if (!is_string_null_or_empty(sVar12))
			{
				_0x63aa2b8eb087886a(func_460(iParam0, 1), get_hash_key(sVar12));
			}
			(*Global_1360165)[iParam0]->f_70 = (*Global_1360165)[iParam0]->f_124;
			(*Global_1360165)[iParam0]->f_124 = 0;
			func_7(iParam0, 40, 0);
			func_239(iParam0, 32, 0);
			func_464(iParam0, 0);
			return (*Global_1360165)[iParam0]->f_70;
	}
	return func_633();
}

void func_488(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 6:
			iVar0 = 0;
			break;
		case 3:
			iVar1 = get_max_attribute_points(iParam1, 16);
			iVar0 = get_random_int_in_range(round((IntToFloat(iVar1) * 0.4f)), round((IntToFloat(iVar1) * 0.75f)));
			break;
		default:
			iVar1 = get_max_attribute_points(iParam1, 16);
			iVar0 = get_random_int_in_range(round((IntToFloat(iVar1) * 0.1f)), round((IntToFloat(iVar1) * 0.4f)));
			break;
	}
	set_attribute_points(iParam1, 16, iVar0);
}

void func_489(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_71(iParam0))
	{
		return;
	}
	if (func_460(iParam0, 1) == 0)
	{
		return;
	}
	if (bParam3)
	{
		func_638(func_91(iParam0), 1f, 0);
	}
	if (bParam1)
	{
		func_639(iParam0);
	}
	else
	{
		func_640(iParam0);
	}
	if (bParam2)
	{
		func_641(iParam0);
	}
	else
	{
		func_642(iParam0);
	}
}

bool func_490()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_491(int iParam0)
{
	iParam0 = func_306(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_508(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_492(int iParam0)
{
	iParam0 = func_306(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_498(iParam0))
	{
		return;
	}
	iVar0 = func_497(iParam0);
	func_643(iParam0);
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	iVar1 = get_entity_model(iVar0);
	if (_0xaa9f048dcf69b6dc(iVar1))
	{
		if (!func_644(iVar1))
		{
			set_ped_model_is_suppressed(iVar1, false);
		}
	}
	delete_ped(&iVar0);
	func_645(iParam0, 0);
	func_247(iParam0);
}

void func_493(int iParam0)
{
	iParam0 = func_306(iParam0);
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
	func_646(&Var0);
	func_647(iParam0, Var0);
	func_648(&(Global_40.f_1095.f_1[iParam0]->f_15));
	func_649(&(Global_40.f_1095.f_1[iParam0]->f_298));
	func_650(&(Global_40.f_1095.f_1[iParam0]->f_356));
	func_651(&(Global_40.f_1095.f_1[iParam0]->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_652(iVar2, Global_40.f_1095.f_1[iParam0]->f_398[iVar2]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_653(iVar3, Global_40.f_1095.f_1[iParam0]->f_407[iVar3]);
		iVar3++;
	}
	func_654(&(Global_40.f_1095.f_1[iParam0]->f_420));
	func_655(&(Global_40.f_1095.f_1[iParam0]->f_422));
	func_656(&(Global_40.f_1095.f_1[iParam0]->f_425));
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

void func_494(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_495(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

int func_496(vector3 vParam0)
{
	return func_657(_get_map_zone_at_coords(vParam0, 10));
}

int func_497(int iParam0)
{
	iParam0 = func_306(iParam0);
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

bool func_498(int iParam0)
{
	iParam0 = func_306(iParam0);
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

bool func_499(int iParam0)
{
	iParam0 = func_306(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_498(iParam0))
	{
		return false;
	}
	iVar0 = func_497(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

bool func_500(int iParam0)
{
	iParam0 = func_306(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_498(iParam0))
	{
		return false;
	}
	iVar0 = func_497(iParam0);
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

void func_501(int iParam0)
{
	iParam0 = func_306(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_498(iParam0))
	{
		return;
	}
	iVar0 = func_497(iParam0);
	if (is_entity_dead(iVar0))
	{
		return;
	}
	_set_entity_health(iVar0, 0, 0);
}

void func_502(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (is_player_dead(iVar0))
	{
	}
	func_521(iParam0);
	func_521(iParam0);
	func_658(iParam0, iParam1);
	func_659(iParam0, iParam1);
	func_660(iParam0, iParam1);
	iVar1 = func_497(iParam0);
	if (does_entity_exist(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_661(iVar1);
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
	iVar3 = func_497(iParam1);
	if (does_entity_exist(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_661(iVar3);
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
	func_308();
}

bool func_503()
{
	iVar0 = func_420();
	if (does_entity_exist(iVar0))
	{
		return true;
	}
	return false;
}

void func_504()
{
	iVar0 = func_420();
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	delete_object(&iVar0);
	func_662(0);
}

void func_505(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

int func_506(int iParam0)
{
	iParam0 = func_306(iParam0);
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

int func_507(int iParam0)
{
	iParam0 = func_306(iParam0);
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

int func_508(int iParam0)
{
	iParam0 = func_306(iParam0);
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

void func_509(int iParam0)
{
	iParam0 = func_306(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_663(&uVar0, &uVar1, &uVar2);
	func_664(iParam0, uVar0);
	func_665(iParam0, uVar1);
	func_666(iParam0, uVar2);
	func_667(iParam0, 1);
	func_668(iParam0, 1);
}

void func_510(int iParam0)
{
	iParam0 = func_306(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_307(iParam0, 1);
}

void func_511(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_306(iParam0);
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

bool func_512(int iParam0)
{
	iParam0 = func_306(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return func_669(iParam0, 1);
}

struct<2> func_513(int iParam0)
{
	iParam0 = func_306(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_670(iParam0, &uVar2))
	{
	}
	if (!func_671(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_514()
{
	if (func_672(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_672(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_672(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_672(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_672(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_672(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_515(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_673(iParam0);
	func_674(iParam0, uParam1);
	func_675(iParam0);
	func_676(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_677(iParam0, iParam3, 0);
	}
	_update_ped_variation(iParam0, false, true, true, true, true);
}

void func_516(int iParam0)
{
	iParam0 = func_306(iParam0);
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

int func_517(int iParam0)
{
	return 1268180497;
}

bool func_518(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if ((does_entity_exist(&(uParam0->f_13[iVar0])) && &uParam0->f_13[iVar0] == iParam1) && func_547(uParam0->f_13[iVar0], iParam2))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_519(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (does_entity_exist(&(uParam0->f_13[iVar0])) && &uParam0->f_13[iVar0] == iParam1)
		{
			func_449(uParam0->f_13[iVar0], iParam2);
		}
		iVar0++;
	}
}

void func_520(int iParam0)
{
	if (is_player_dead(player_id()))
	{
		return;
	}
	iVar0 = func_497(iParam0);
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
	if (func_669(iParam0, 64))
	{
		func_521(iParam0);
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
	bVar3 = func_678(42);
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
				func_679(&((*Global_1900383)[iParam0]->f_27));
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
		func_521(iParam0);
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
		if (func_680(1) < 1)
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
		func_681(&((*Global_1900383)[iParam0]->f_26), bVar6);
	}
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_669(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = is_ped_in_writhe(iVar0);
	bVar10 = false;
	iVar11 = func_682(iParam0);
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
	fVar15 = func_683(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_684(iParam0))
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
		func_685((*Global_1900383)[iParam0]->f_26);
		func_686((*Global_1900383)[iParam0]->f_26);
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
	if (func_221(iVar0) && !bVar9)
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
	iVar21 = func_680(iParam0);
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

void func_521(int iParam0)
{
	iParam0 = func_306(iParam0);
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

bool func_522(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return false;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return false;
	}
	if (iParam1 == iParam2)
	{
		return true;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return true;
	}
	if (!bVar0)
	{
		return false;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return true;
	}
	return false;
}

bool func_523(int iParam0)
{
	switch (iParam0)
	{
		case -1205468859:
		case -946772361:
		case -445211559:
		case 1744281750:
			return true;
		default:
			break;
	}
	return false;
}

bool func_524(int iParam0, bool bParam1)
{
	if (!func_75(iParam0))
	{
		return false;
	}
	if (!bParam1)
	{
		if (func_77(iParam0) || func_85(iParam0, 44, 1))
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

struct<7> func_525(int iParam0, int iParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, var uParam8, bool bParam9)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_3 = { vParam2 };
	Var0.f_2 = uParam8;
	Var0.f_6 = 0;
	if (bParam5)
	{
		set_bit(&(Var0.f_6), 0);
	}
	if (bParam6)
	{
		set_bit(&(Var0.f_6), 1);
	}
	if (bParam7)
	{
		set_bit(&(Var0.f_6), 2);
	}
	if (bParam9)
	{
		set_bit(&(Var0.f_6), 3);
	}
	return Var0;
}

void func_526(int iParam0, bool bParam1)
{
	if (!func_75(iParam0))
	{
		return;
	}
	iVar0 = func_41(iParam0);
	func_687(iVar0);
	func_78(iParam0, 60, 1);
	if (bParam1)
	{
		func_639(iParam0);
	}
}

void func_527(int iParam0, bool bParam1)
{
	if (!func_75(iParam0))
	{
		return;
	}
	iVar0 = func_41(iParam0);
	func_688(iVar0);
	func_7(iParam0, 60, 1);
	if (bParam1)
	{
		func_640(iParam0);
	}
}

void func_528(int iParam0, bool bParam1)
{
	if (!func_75(iParam0))
	{
		return;
	}
	iVar0 = func_41(iParam0);
	func_689(iVar0);
	if (iParam0 == 14)
	{
		func_690(iVar0);
	}
	func_78(iParam0, 61, 1);
	if (bParam1)
	{
		func_641(iParam0);
	}
}

void func_529(int iParam0, bool bParam1)
{
	if (!func_75(iParam0))
	{
		return;
	}
	iVar0 = func_41(iParam0);
	func_691(iVar0);
	func_7(iParam0, 61, 1);
	if (bParam1)
	{
		func_642(iParam0);
	}
}

bool func_530(int iParam0, int iParam1)
{
	if (!func_75(iParam0))
	{
		return false;
	}
	func_692(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_65[iVar0]), iVar1);
}

void func_531(int iParam0)
{
	func_693(iParam0, 1);
	func_693(iParam0, 128);
	func_693(iParam0, 256);
	func_693(iParam0, 512);
	func_693(iParam0, 1024);
	func_693(iParam0, 2048);
	func_693(iParam0, 4096);
	func_693(iParam0, 65536);
	func_693(iParam0, 16384);
	func_693(iParam0, 262144);
	func_693(iParam0, 524288);
	func_693(iParam0, 1048576);
	func_693(iParam0, 2097152);
	func_693(iParam0, 32768);
	func_693(iParam0, 131072);
	func_693(iParam0, 134217728);
	func_693(iParam0, 1073741824);
}

void func_532(int iParam0, bool bParam1)
{
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		return;
	}
	if (!bParam1)
	{
		if (decor_exist_on(Global_1360165[iParam0], "wearing_bandana"))
		{
			decor_remove(Global_1360165[iParam0], "wearing_bandana");
		}
	}
	else if (!decor_exist_on(Global_1360165[iParam0], "wearing_bandana"))
	{
		decor_set_bool(Global_1360165[iParam0], "wearing_bandana", true);
	}
}

int func_533(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_422(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
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
							if (func_422(iVar4) && iVar4 != iVar0)
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
	if (func_165() == -1 && !func_694(iVar0))
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
				if (func_694(-183018591))
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
		if (iParam0 != Global_35 && func_422(iVar0))
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
		func_695(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_696(iParam0, &iVar0, &fVar25);
		iVar0 = _give_weapon_to_ped_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_697(iVar0))
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

int func_534(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 862380358;
		case 1:
			return -624571557;
		case 2:
			return -2106670311;
		case 3:
			return 354018569;
		case 4:
			return -1613499260;
		case 5:
			return -1232184757;
		case 6:
			return -1312036548;
		case 7:
			return 1476138396;
		case 8:
			return 2069287816;
		case 9:
			return -1432916295;
		case 10:
			return -1845132692;
		case 11:
			return 2078646898;
		case 13:
			return 1246854539;
		case 14:
			return 1564353385;
		case 15:
			return 605985418;
		case 16:
			return -1867760364;
		case 17:
			return 1707260254;
		case 18:
			return 1254472765;
		case 19:
			return -283892864;
		case 20:
			return -323279751;
		case 21:
			return -645637806;
		case 22:
			return -429731387;
		case 23:
			return 1605814104;
		case 24:
			return -435322148;
		case 25:
			return -1950029483;
		case 26:
			return 1271180667;
		case 12:
			return 399100316;
	}
	return -1;
}

void func_535(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (!decor_exist_on(iParam0, "metaped_outfit_request") || !decor_exist_on(iParam0, "metaped_outfit_request_name"))
	{
		return;
	}
	iVar0 = decor_get_int(iParam0, "metaped_outfit_request");
	if (_is_metaped_outfit_request_valid(iVar0))
	{
		_release_metaped_outfit_request(iVar0);
	}
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

void func_536(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

void func_537(int iParam0, bool bParam1, var uParam2)
{
	if (!func_114(*uParam2))
	{
		uParam2->f_1 = -15;
		return;
	}
	if (!func_698(iParam0, *uParam2, bParam1))
	{
		if (!uParam2->f_2)
		{
			if (func_699(iParam0, *uParam2, bParam1))
			{
			}
		}
	}
	if (uParam2->f_1 == -15 || (uParam2->f_1 != -15 && !func_700(uParam2->f_1)))
	{
		return;
	}
	func_701(iParam0, *uParam2, bParam1);
}

int func_538()
{
	return &Global_1899515;
}

bool func_539(int iParam0, int iParam1)
{
	if (!func_75(iParam0))
	{
		return false;
	}
	if (!func_115(iParam0, iParam1, &iVar0, &bVar1))
	{
		return false;
	}
	if (bVar1)
	{
		return Global_40.f_4942[iParam0]->f_8.f_2;
	}
	return Global_40.f_4942[iParam0]->f_11[iVar0]->f_2;
}

int func_540(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, float fParam9)
{
	if (!bParam8 && network_is_game_in_progress())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_58(vParam0))
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
		if (func_702(vParam0))
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
	func_703(iVar0, bParam8);
	return iVar0;
}

bool func_541(int iParam0)
{
	if (func_71(iParam0))
	{
		if (func_6(Global_1360165[iParam0], 0))
		{
			return true;
		}
	}
	return false;
}

int func_542(int iParam0, vector3 vParam1, float fParam4)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		vVar0 = { get_entity_coords(iParam0, false, false) };
		vVar3 = { get_entity_forward_vector(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_704(vVar3, vVar6);
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
	if (func_705(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

char* func_543(int iParam0)
{
	switch (iParam0)
	{
		case 225514697:
			return "Arthur";
		case -1464743433:
			return "Abe";
		case 1483156731:
			return "EdmundLowry";
		case -1418951751:
			return "ABERDEENPIGFARMER";
		case 2029634351:
			return "ABERDEENSISTER";
		case -288068792:
			return "AbigailRoberts";
		case 513427234:
			return "AlbertMason";
		case -121985991:
			return "ArchieDown";
		case -205121720:
			return "Baptiste";
		case -77509825:
			return "BartholomewBraithwaite";
		case -55633154:
			return "CS_BEATENUPCAPTAIN";
		case 1266159496:
			return "BeauGray";
		case -2045269112:
			return "PenelopeBraithwaite";
		case 2070393450:
			return "BillWilliamson";
		case 477547053:
			return "BraithwaiteServant";
		case 1382164045:
			return "CatherineBraithwaite";
		case 1407031519:
			return "CharlesSmith";
		case -754733870:
			return "CS_CIGCARDGUY";
		case 1253299569:
			return "CS_DINOBONESLADY";
		case -464684897:
			return "Cleet";
		case -820975767:
			return "ColmODriscoll";
		case -1765531164:
			return "CreoleGuy";
		case -820854800:
			return "SDDoctor_01";
		case 382040614:
			return "DaleMaroney";
		case 1944593012:
			return "Dutch";
		case -450226655:
			return "EdithDown";
		case -1920451728:
			return "Fussar";
		case 1514128030:
			return "cs_fishcollector";
		case -1865855539:
			return "Bronte";
		case -1629501717:
			return "GuidoMartelli";
		case -1208814201:
			return "U_M_M_NBXBRONTEGOON_01";
		case 1478983280:
			return "G_M_M_UNIBRONTEGOONS_01";
		case -1769295812:
			return "GarethBraithwaite";
		case 1020041649:
			return "GenStoryFemale";
		case -639059862:
			return "GenStoryMale";
		case -920985758:
			return "Leon";
		case -1154137714:
			return "GeraldBraithwaite";
		case 1225208808:
			return "HoseaMatthews";
		case 1912073755:
			return "JackMarston";
		case -631664452:
			return "JackMarston_Teen";
		case 4991732:
			return "Jamie";
		case 1843625996:
			return "JavierEscuella";
		case 1815090590:
			return "JimCalloway";
		case -446093729:
			return "Joe";
		case 95866989:
			return "JohnMarston";
		case 2100656433:
			return "CS_JOHNWEATHERS";
		case 1006468445:
			return "JosiahTrelawny";
		case -1707202053:
			return "Karen";
		case 358502875:
			return "MrsAdler";
		case 1939579094:
			return "Kieran";
		case -100461901:
			return "LeoStrauss";
		case 1304311224:
			return "LondonderrySon";
		case -1690877284:
			return "MaryBeth";
		case 1051047356:
			return "MaryLinton";
		case -566878875:
			return "MicahBell";
		case -346700962:
			return "MollyOshea";
		case -272634447:
			return "CS_MrLinton";
		case 984264800:
			return "MrPearson";
		case 1367851675:
			return "MrsLondonderry";
		case -2075588078:
			return "Mud2BigGuy";
		case 2115504616:
			return "ProfessorBell";
		case 1618031732:
			return "RevSwanson";
		case -265719023:
			return "CS_Samaritan";
		case -1483559144:
			return "StrDeputy_01";
		case -572941403:
			return "StrDeputy_02";
		case -2081966149:
		case 2012148102:
			return "StrSheriff_01";
		case 1695129705:
			return "SusanGrimshaw";
		case 1407740785:
			return "TavishGray";
		case 1231309423:
			return "TheodoreLevin";
		case 65010948:
			return "ThomasDown";
		case 1038525765:
			return "Tilly";
		case -969464097:
			return "Uncle";
		case 1057570823:
			return "G_M_M_UniCriminals_01";
		case 347599949:
			return "G_M_M_UNIDUSTER_01";
		case -1884146832:
			return "CS_VALSHERIFF";
		case 826385717:
			return "S_M_M_MARSHALLSRURAL_01";
		case -831368594:
			return "U_M_O_VHTEXOTICSHOPKEEPER_01";
		case -522739022:
			return "Sean";
		case -122790003:
			return "Lenny";
		case 1276534479:
			return "Hercule";
		case -781994133:
			return "CreoleCaptain";
		case -628794682:
			return "U_M_M_CREOLECAPTAIN_01";
		case 1999476738:
			return "RingMaster";
		case -1221341425:
			return "U_M_M_VALBARTENDER_01";
		case -439429058:
			return "A_M_M_EMRFARMHAND_01";
		case -1646366239:
			return "A_M_M_GriSurvivalist_01";
		case 1439158431:
			return "LillyMillet";
		case -1384606398:
			return "A_F_M_STRTOWNFOLK_01";
		case 1127589605:
			return "A_M_M_STRTOWNFOLK_01";
		case 413771941:
			return "S_M_M_STRLUMBERJACK_01";
		case -1990962020:
			return "G_M_M_UniCriminals_02";
		case -1818007055:
			return "G_M_M_UNICORNWALLGOONS_01";
		case 79156795:
			return "A_M_M_NBXUPPERCLASS_01";
		case -1039531072:
			return "A_F_M_NBXUPPERCLASS_01";
		case 525529657:
			return "A_M_M_VALFARMER_01";
		case -2087759666:
			return "A_M_M_VALTOWNFOLK_01";
		case -1789856687:
			return "A_M_M_VALTOWNFOLK_02";
		case -161027961:
			return "A_F_M_VALTOWNFOLK_01";
		case 518339740:
			return "U_M_M_NBXBARTENDER_01";
		case 2041494024:
			return "NBXExecuted";
		case -944019243:
			return "RHODEPUTY_01";
		case -949242502:
			return "RHDSHERIFF_01";
		case -1745321414:
			return "LeighGray";
		case -1038436471:
			return "Horse_01";
		case 273671859:
			return "U_M_M_StrGenStoreOwner_01";
		case -1161832176:
			return "TomDickens";
		case -1632694866:
			return "DavidGeddes";
		case 1446935015:
			return "ANSEL_ATHERTON";
		case -1101883765:
			return "CS_Wrobel";
		case -50684386:
			return "COW";
		case 195700131:
			return "BULL";
		case 686051865:
			return "ALBERTCAKEESQUIRE";
		case 1767420034:
			return "U_M_O_BLWGENERALSTOREOWNER_01";
		case -1033903759:
			return "A_C_DOGCATAHOULACUR_01";
		case 1591685812:
			return "A_C_DOGRUFUS_01";
		case -896926592:
			return "A_C_DOGLION_01";
		case -695175124:
			return "Handler";
		case 1891548111:
			return "VALAUCTIONBOSS_01";
		case -1049237750:
			return "NbxReceptionist_01";
		case -1206299098:
			return "U_M_M_BiVForeman_01";
		case -532378284:
			return "U_M_M_RACFOREMAN_01";
		case -2075028835:
			return "CHAINPRISONER_01";
		case -211291960:
			return "CHAINPRISONER_02";
		case -692960126:
			return "U_M_M_ValPokerPlayer_01";
		case 60202542:
			return "U_M_M_ValPokerPlayer_02";
		case -1614719852:
			return "DUNCANGEDDES";
		case -167880668:
			return "ANGUSGEDDES";
		case 743219360:
			return "EvelynMiller";
		case -2086875988:
			return "SISTERCALDERON";
		case -46607261:
			return "EDGARROSS";
		case 54030454:
			return "U_M_M_GriSurvivalist_01";
		case -378814141:
			return "U_F_M_RKSHOMESTEADTENANT_01";
		case -140869950:
			return "U_F_M_RKSHOMESTEADTENANT_01";
		case 1726657594:
			return "U_M_M_BHT_STRAWBERRYDUEL";
		case 1057932105:
			return "StationWorker";
		case 1294255258:
			return "LEVISIMON";
		case -384354290:
			return "S_M_M_GULFUSSARS_01";
		case 1772321403:
			return "A_C_DONKEY_01";
		case 223197487:
			return "S_M_M_ISPWORKER_01";
		case 355963118:
			return "S_M_M_ISPWORKER_02";
		case -1874017143:
			return "U_M_O_ValBartender_01";
		case 219322615:
			return "U_M_M_NBXBARTENDER_02";
		case -2014377075:
			return "CS_UNIDUSTERJAIL_01";
		case 977834008:
			return "A_M_M_RHDTOWNFOLK_01";
		case 2052768310:
			return "U_M_M_UNIBOUNTYHUNTER_01";
		case -1332334928:
			return "U_M_M_UNIBOUNTYHUNTER_02";
		case 482703333:
			return "BrotherDorkins";
		case 731029607:
			return "G_M_M_UniBraithwaites_01";
		case -1918128574:
			return "A_M_M_GAMHIGHSOCIETY_01";
		case 292812873:
			return "U_M_M_STRFREIGHTSTATIONOWNER_01";
		case -1772051411:
			return "EagleFlies";
		case -2046943672:
			return "CS_RAINSFALL";
		case 830712509:
			return "A_M_M_WapWarriors_01";
		case 264503396:
			return "A_M_Y_NBXSTREETKIDS_01";
		case -2044758506:
			return "U_M_M_BHT_SHACKESCAPE";
		case -1445135526:
			return "A_M_M_HTLROUGHTRAVELLERS_01";
		case 988668512:
			return "LemiuxAssistant";
		case -1608851079:
			return "p_keys01x";
		case 624882545:
			return "CS_BALLOONOPERATOR";
		case -1820002752:
			return "Worker1";
		case 1624257462:
			return "U_M_M_BHT_MINEFOREMAN";
		case 1453686794:
			return "A_M_M_NbxSlums_01";
		case -454661055:
			return "U_M_M_NBXPRIEST_01";
		case -1124266369:
			return "A_C_BEAR_01";
		case 960530301:
			return "MARSHALL_THURWELL";
		case 1347320453:
			return "CS_FAMOUSGUNSLINGER_02";
		case -290265603:
			return "cs_sd_streetkid_01";
		case 1861707396:
			return "cs_sd_streetkid_02";
		case 68512371:
			return "ObediahHinton";
		case 774211111:
			return "PoisonWellShaman";
		case 1923327795:
			return "A_M_M_EMRFARMHAND_01";
		case 722156226:
			return "u_m_m_bht_benedictallbright";
		case -1258801034:
			return "Jules";
		case -1466017978:
			return "MRDEVON";
		case 1101050871:
			return "MRWAYNE";
		case -1135378761:
			return "PAYTAH";
		case 1812458547:
			return "CS_VALDEPUTY_01";
		case 167491564:
			return "MES_SADIE5_MALES_01^1";
		case -310853585:
			return "A_M_M_NBXDOCKWORKERS_01";
		case -1817144219:
			return "U_M_M_VALSHERIFF_01";
		case 1086659483:
			return "S_M_M_BANKCLERK_01";
		case 1112571710:
			return "U_M_M_NBXBRONTEASC_01";
		case -363708904:
			return "P_C_HORSE_01";
	}
	return "";
}

bool func_544(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_545(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

void func_546(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

bool func_547(var uParam0, int iParam1)
{
	return (uParam0->f_11 && iParam1) != 0;
}

void func_548(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	if (!does_entity_exist(iParam2))
	{
		return;
	}
	if (iParam3 == 1)
	{
		if (_0x9d1eca9337be9fc3(uParam0->f_156, sParam1))
		{
			iParam3 = 0;
		}
	}
	set_anim_scene_entity(uParam0->f_156, sParam1, iParam2, iParam3);
}

void func_549(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	clear_ped_blood_damage(iParam0);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		_clear_ped_blood_damage_facial(iParam0, iVar0);
		iVar0++;
	}
}

bool func_550(int iParam0, int* iParam1)
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
		if (is_ped_in_combat(iParam0, func_706((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

bool func_551(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_552(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_553(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_575((*uParam0)[iVar0]))
		{
			func_707((*uParam0)[iVar0], 14);
		}
		iVar0++;
	}
}

void func_554(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_555(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_13(&((*uParam1)[iParam0->f_3]->f_6), 1, 1);
		if (bParam2)
		{
			func_224(iParam0, 0);
		}
	}
}

int func_556(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(*uParam2)[iVar0]->f_8 = 6;
		func_708(iParam0, (*uParam2)[iVar0], fParam3, 3, 0, 6, bParam4, 0);
		if (func_12((*uParam2)[iVar0]->f_6))
		{
			func_707((*uParam2)[iVar0], 11);
			return (*Global_1945938)[(*uParam2)[iVar0]->f_6]->f_3;
		}
	}
	return 0;
}

int func_557(int iParam0)
{
	iVar0 = func_709(*iParam0);
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

int func_558(var uParam0, int iParam1)
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

void func_559(int* iParam0, int* iParam1)
{
	if (!func_388(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_707(iParam1, 19);
			func_154(iParam0, 23);
			func_710(iParam1, 2);
		}
	}
}

bool func_560(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (func_711(16))
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
					func_712(16);
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

void func_561(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_708(iParam0, (*uParam1)[iVar0], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			clear_bit((*uParam1)[iVar0], 14);
		}
		iVar0++;
	}
}

bool func_562()
{
	return (Global_1935689->f_1 || &Global_1935689 == 1);
}

bool func_563()
{
	return Global_1935689->f_1;
}

bool func_564()
{
	return &Global_1357517;
}

void func_565(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_707((*uParam0)[iVar0], 9);
		iVar0++;
	}
}

bool func_566(int iParam0)
{
	return (func_713(iParam0, 4) || func_713(iParam0, 5));
}

bool func_567(int iParam0)
{
	return func_713(iParam0, 7);
}

bool func_568(int iParam0)
{
	return func_713(iParam0, 6);
}

void func_569(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (is_bit_set(*iParam1, 14))
	{
		if (func_575(iParam1))
		{
			clear_bit(iParam1, 14);
			func_708(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_570(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_714(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_715(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_193(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_193(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_716(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_571(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_717(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_718(iParam1, 1))
	{
		func_719(iParam1, 1);
		return true;
	}
	return false;
}

void func_572(int* iParam0, var uParam1, int iParam2, float fParam3, char* sParam4)
{
	func_397(uParam1, 1, 1, 1, 0);
	func_223(iParam2);
	_0x870708a6e147a9ad(*iParam2, sParam4, fParam3, 0f, 8, 0, 0, 0, 0, -1);
}

bool func_573(int* iParam0, float fParam1, bool bParam2)
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

void func_574(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		disable_control_action(0, 1101824977, true);
		disable_control_action(0, 966551065, true);
		disable_control_action(0, 668058244, true);
		set_ped_reset_flag(Global_35, 203, true);
	}
}

bool func_575(int* iParam0)
{
	if (!is_string_null_or_empty(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_576(int iParam0)
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

bool func_577(int iParam0)
{
	if (-1829635046 == func_720(81053684))
	{
		if (func_721(iParam0))
		{
			return true;
		}
	}
	else if (func_722(-525676072, iParam0))
	{
		if (func_721(iParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_578()
{
	if (!func_723())
	{
		return false;
	}
	if (!func_721(&iVar0))
	{
		return false;
	}
	if (!func_724(iVar0))
	{
		return false;
	}
	iVar1 = func_725(iVar0);
	if (iVar1 == -358215195)
	{
		return false;
	}
	func_726(&iVar2, 1);
	return func_727(iVar0, iVar2);
}

int func_579()
{
	if (!func_721(&iVar0))
	{
		return 0;
	}
	_0x2208438012482a1a(Global_35, false, false);
	_0xc494c76a34266e82(Global_35, 13);
	iVar1 = func_725(iVar0);
	if (iVar1 == -358215195)
	{
		return 0;
	}
	func_729(&(Global_1946804->f_57[func_728(iVar1, 1)]), 8);
	func_730(26, 0, 0, 0, 0);
	return 1;
}

void func_580(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_731(iParam0, 13))
	{
		func_707(iParam0, 0);
	}
	else
	{
		func_536(iParam0, 0);
	}
	if (func_12(iParam0->f_6))
	{
		if (bParam2)
		{
			func_13(&(iParam0->f_6), 0, 1);
		}
	}
}

int func_581(var uParam0, float fParam1)
{
	if (func_415(uParam0, fParam1))
	{
		func_88(uParam0);
		return 1;
	}
	return 0;
}

void func_582(int iParam0)
{
	Global_1935496->f_29 = (Global_1935496->f_29 || iParam0);
}

void func_583(bool bParam0)
{
	if (func_732())
	{
		Global_1357509 = 1;
	}
	if (func_733(-92416669))
	{
	}
	if (bParam0 && Global_1935630->f_44 == -1016714371)
	{
		set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
		Global_1935630->f_44 = -1569615261;
	}
}

void func_584(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 || iParam0);
}

bool func_585()
{
	if (func_165() == -1 && func_97(0, 0, 1))
	{
		return (Global_1357549->f_1495 & 512 != 0 && Global_1357549->f_1494 & 2 != 0);
	}
	return false;
}

bool func_586(int iParam0, int iParam1)
{
	iVar0 = get_script_task_status(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

int func_587(int iParam0)
{
	iVar0 = func_109(iParam0);
	if (iVar0 < 0 || iVar0 >= 48)
	{
		return 0;
	}
	return (*Global_1945938)[iVar0]->f_3;
}

Vector3 func_588(vector3 vParam0, vector3 vParam3, float fParam6)
{
	return func_734(vParam3 - vParam0) * Vector(fParam6, fParam6, fParam6);
}

int func_589(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 3;
	}
	return 0;
}

int func_590(int iParam0)
{
	return shift_right(iParam0, 15) & 16383;
}

void func_591(int iParam0, int iParam1)
{
	Var0 = { *Global_1898164->f_1[iParam0] };
	*Global_1898164->f_1[iParam0] = { *Global_1898164->f_1[iParam1] };
	*Global_1898164->f_1[iParam1] = { Var0 };
}

void func_592(var uParam0, bool bParam1)
{
	if (*uParam0 != -1)
	{
		func_597(*uParam0, -1);
		func_598(*uParam0, 0);
		func_599(*uParam0, 0);
		if (does_blip_exist(&(Global_36308[*uParam0])))
		{
			if (bParam1)
			{
				set_radar_zoom(&(Global_36308[*uParam0]));
			}
			remove_blip(Global_36308[*uParam0]);
		}
	}
	*uParam0 = -1;
}

bool func_593(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		return does_blip_exist(&(Global_36308[iParam0]));
	}
	return false;
}

void func_594(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		if (does_blip_exist(&(Global_36308[iParam0])))
		{
			_set_blip_flash_style(&(Global_36308[iParam0]), iParam1);
		}
	}
}

int func_595(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 5;
		case 2:
			return 26;
		case 3:
			return 38;
		case 4:
			return 69;
		case 5:
			return 76;
		case 6:
			return 78;
		case 7:
			return 92;
		case 8:
			return 105;
		case 9:
			return 115;
		case 10:
			return 120;
		default:
			break;
	}
	return -1;
}

int func_596(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 1341870286;
		case 5:
			return -1706412559;
		case 26:
			return 279909480;
		case 38:
			return -412614304;
		case 69:
			return -653335484;
		case 76:
			return 1777802794;
		case 78:
			return 1088576970;
		case 92:
			return 412321676;
		case 105:
			return 1787788681;
		case 115:
			return 1635466279;
		case 120:
			return -410502938;
		case 4:
		case 9:
		case 22:
		case 37:
		case 43:
		case 58:
		case 71:
		case 79:
		case 98:
			return 7148155;
		default:
			break;
	}
	return 0;
}

void func_597(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_7862[iParam0] = iParam1;
		return;
	}
	Global_42606[iParam0] = iParam1;
	return;
}

void func_598(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_7862[iParam0]->f_1 = iParam1;
		return;
	}
	Global_42606[iParam0]->f_1 = iParam1;
	return;
}

void func_599(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_7862[iParam0]->f_2 = iParam1;
		return;
	}
	Global_42606[iParam0]->f_2 = iParam1;
	return;
}

float func_600()
{
	if (func_735())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_736(2);
	}
	if (Global_1347477->f_119)
	{
		return func_736(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_737();
	fVar2 = func_738();
	fVar3 = func_739();
	fVar4 = func_740();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_741()));
	fVar7 = (func_736(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_742(3, round((to_float(iVar8) * fVar10)), 0);
	func_743(3, fVar9, fVar9 > 100f);
	return func_744(fVar7, -100f, 100f);
}

float func_601()
{
	if (func_735())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_736(1);
	}
	if (Global_1347477->f_119)
	{
		return func_736(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_737();
	fVar2 = func_738();
	fVar3 = func_739();
	fVar4 = func_740();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_741()));
	fVar7 = (func_736(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_742(2, round((to_float(iVar8) * fVar10)), 0);
	func_743(2, fVar9, fVar9 > 100f);
	return func_744(fVar7, -100f, 100f);
}

float func_602()
{
	if (func_735())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_736(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_745())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_746())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_736(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_737();
	fVar2 = func_738();
	fVar3 = func_739();
	fVar4 = func_740();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_741()));
	fVar7 = (func_736(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_742(1, round((to_float(iVar8) * fVar10)), 0);
	func_743(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_736(0);
	}
	return func_744(fVar7, -100f, 100f);
}

char* func_603(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	iVar0 = get_entity_model(iParam0);
	return func_747(iVar0);
}

char* func_604(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	iVar0 = get_entity_model(iParam0);
	switch (iVar0)
	{
		case 1468884243:
			return "CANOE";
		case -283162583:
			return "WAGON02X";
		case 1874711736:
			return "WAGON04X";
		case -1758092337:
			return "WAGON05X";
		case 1596452133:
			return "CHUCKWAGON000X";
		case -293448458:
			return "WAGONCIRCUS02X";
		case 1761016051:
			return "COACH2";
		case 1192745176:
			return "PRIVATECOALCAR01X";
		case 703203753:
			return "NORTHPASSENGER01X";
		case 89913743:
			return "PRIVATESTEAMER01X";
		case 572854005:
			return "PRIVATEDINING01X";
		case 822759307:
			return "UTILLIWAG";
		case -623113369:
			return "SKIFF";
		case 1493442814:
			return "HANDCART";
		case -397513868:
			return "ROWBOATSWAMP";
		case -258491284:
			return "ROWBOATSWAMP02";
	}
	return "";
}

void func_605()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

int func_606(var uParam0)
{
	return *uParam0;
}

void func_607(var uParam0)
{
	if (((!_does_anim_scene_exist(uParam0->f_156) || !_is_anim_scene_started(uParam0->f_156, false)) || _0xef324e9550a394d5(uParam0->f_156)) || func_127(uParam0, 512))
	{
		if (!func_748(uParam0->f_213, 128))
		{
			func_749();
		}
		return;
	}
	if ((func_518(uParam0, Global_35, 4) || (_0x6f1f0b17109309da(uParam0->f_156, func_372(Global_35)) && _0xb89fcff19dafff28(uParam0->f_156, func_372(Global_35)))) || !_0x4b85b3cf91972222(uParam0->f_156))
	{
		if (!func_748(uParam0->f_213, 128))
		{
			func_749();
		}
		return;
	}
	bVar0 = true;
	iVar1 = _0xc17f69e1418cd11f(9);
	if (iVar1 != 0)
	{
		if (func_750(iVar1))
		{
			if (func_715(Global_43801, 0))
			{
				bVar0 = false;
			}
		}
	}
	bVar2 = false;
	if (func_748(uParam0->f_213, 512))
	{
		bVar2 = true;
	}
	if (func_751(bVar0, bVar2))
	{
		_delete_anim_scene_2(uParam0->f_156);
		func_749();
	}
}

void func_608(var uParam0, char* sParam1)
{
	if (func_606(uParam0) == 2 && (func_752(uParam0->f_212, 16384) || func_127(uParam0, 268435456)))
	{
		Var0 = { func_190(uParam0) };
		func_753(uParam0, &Var0);
	}
	func_754(uParam0, sParam1);
	if (func_127(uParam0, 131072))
	{
		func_755(uParam0, 0);
	}
	if (func_756())
	{
		set_ped_reset_flag(Global_35, 265, true);
		func_757();
	}
	if (func_732())
	{
		func_583(1);
	}
	func_186(uParam0, 0, 0, 0, 0);
	StringCopy(&cVar8, sParam1, 32);
	func_758(uParam0, cVar8);
	func_613(1, 0);
	func_180(uParam0);
	if (func_759() && _0x6f1f0b17109309da(uParam0->f_156, func_372(Global_35)))
	{
		clear_ped_tasks_immediately(Global_35, false, true);
	}
	if (func_610(uParam0, 1))
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_148);
	}
	func_760(uParam0);
	func_380(uParam0, 1);
	start_anim_scene(uParam0->f_156);
	Global_43800 = uParam0->f_156;
	StringCopy(&Global_43802, sParam1, 24);
}

void func_609(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	func_38(&(uParam0->f_1));
}

bool func_610(var uParam0, int iParam1)
{
	return (uParam0->f_151 && iParam1) != 0;
}

bool func_611(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_623(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

void func_612(int iParam0)
{
	if (!network_is_in_session())
	{
		return;
	}
	if (network_is_in_mp_cutscene())
	{
		return;
	}
	set_entity_visible_in_cutscene(player_ped_id(), iParam0, 0, 256);
	network_set_in_mp_cutscene(true, true, 32, true);
}

void func_613(bool bParam0, int iParam1)
{
	if (func_761())
	{
		_0xdd1232b332cbb9e7(3, 1, 0);
	}
	if (bParam0)
	{
		if (func_762())
		{
			func_763(1);
		}
	}
	_0x36559148b78853b3(0, iParam1, 0);
}

void func_614(var uParam0)
{
	if (!func_127(uParam0, 4))
	{
		if (func_752(uParam0->f_212, 16384))
		{
			animpostfx_play("CamTransition01");
		}
		vVar0 = { func_764(uParam0) };
		if (!func_752(uParam0->f_212, 524288))
		{
			func_765(&(uParam0->f_224));
		}
		func_766(&(uParam0->f_212), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		func_767(uParam0, 0f, 0f, 0f);
		func_768(uParam0);
		func_769(uParam0);
		func_770(uParam0, 0f, 0f, 0f, 0, 0);
		func_771(uParam0);
		func_175(uParam0, 4);
		func_305(uParam0, 0);
		func_772(&(Global_1946804->f_1497), Global_35, 1, 64, 1, 1, 1);
		if (_0x927b810e43e99932(&(uParam0->f_225)))
		{
			_0x0a5a4f1979abb40e(&(uParam0->f_225));
		}
	}
}

int func_615(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_156) || !_is_anim_scene_started(uParam0->f_156, false))
	{
		return -1;
	}
	return floor((_get_anim_scene_duration(uParam0->f_156) * 1000f));
}

bool func_616(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_156))
	{
		return true;
	}
	if (_0xf94692eb9dc15d74(uParam0->f_156, 0))
	{
		if (func_127(uParam0, 524288))
		{
			_0x1b70811d3bf75db9(1, 1);
		}
		return true;
	}
	if (_is_anim_scene_active(uParam0->f_156) && func_127(uParam0, 1048576))
	{
		return true;
	}
	return false;
}

void func_617(var uParam0)
{
	if (((func_127(uParam0, 1073741824) && !func_127(uParam0, 524288)) && func_127(uParam0, 512)) && is_screen_faded_out())
	{
		do_screen_fade_in(1000);
	}
}

void func_618(var uParam0)
{
	if (!func_127(uParam0, 536870912))
	{
		func_305(uParam0, 1);
		func_619(&(uParam0->f_213), uParam0->f_224);
		func_179();
		func_175(uParam0, 536870912);
	}
	if (func_127(uParam0, 524288))
	{
		do_screen_fade_out(0);
	}
	func_773(uParam0);
	func_609(uParam0, 1);
	func_181(uParam0);
	func_774(uParam0);
	func_775(uParam0);
	func_776(uParam0, 4);
	func_185(uParam0);
	func_755(uParam0, 1);
	func_180(uParam0);
	func_88(&(uParam0->f_1));
	if (_does_anim_scene_exist(uParam0->f_156) && check_ownership_of_anim_scene(uParam0->f_156))
	{
		_delete_anim_scene(uParam0->f_156);
	}
	func_777(!func_748(uParam0->f_213, 128));
	if (!func_748(uParam0->f_213, 128))
	{
		func_749();
	}
}

void func_619(var uParam0, int iParam1)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	func_778(2000);
	Global_16 = 0;
	func_779();
	set_entity_invincible(Global_35, func_748(*uParam0, 8));
	if (!func_748(*uParam0, 1))
	{
		set_player_control(get_player_index(), true, 0, false);
	}
	_0xa0cefcea390aab9b(0);
	set_all_random_peds_flee(player_id(), false);
	set_everyone_ignore_player(player_id(), false);
	if (func_748(*uParam0, 2) || func_748(*uParam0, 4))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_748(*uParam0, 16))
	{
		func_780(1);
	}
	if (func_748(*uParam0, 32))
	{
		func_781(Global_35, -383172193, 0, 1742327865, 0, 1, 0, 0, 1, 0);
		func_782(-1623728698, 0);
	}
	func_772(&(Global_1946804->f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489->f_16 & 4194304 != 0)
	{
		Global_1359489->f_16 = (Global_1359489->f_16 - Global_1359489->f_16 & 4194304);
	}
	*uParam0 = 0;
}

void func_620()
{
	Global_1935630->f_52 = 1;
}

char* func_621(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "DUTCH";
		case 3:
			return "BILL";
		case 1:
			return "JOHN";
		case 2:
			return "JAVIER";
		case 4:
			return "UNCLE";
		case 5:
			return "HOSEA";
		case 6:
			return "MICAH";
		case 7:
			return "CHARLES";
		case 8:
			return "SEAN";
		case 9:
			return "LENNY";
		case 13:
			return "ABIGAIL";
		case 10:
			return "KIERAN";
		case 14:
			return "JACK";
		case 15:
			return "MARYBETH";
		case 16:
			return "MOLLY";
		case 17:
			return "PEARSON";
		case 18:
			return "STRAUSS";
		case 19:
			return "GRIMSHAW";
		case 20:
			return "KAREN";
		case 21:
			return "SWANSON";
		case 22:
			return "TILLY";
		case 23:
			return "TRELAWNY";
		case 11:
			return "SADIE";
		case 24:
			return "CLEET";
		case 25:
			return "JOE";
		case 26:
			return "EAGLEFLIES";
		case 12:
			return "DOG";
		default:
			break;
	}
	return "Companion unknown";
}

bool func_622()
{
	if (func_165() != -1)
	{
		return false;
	}
	return func_235(1) > 0;
}

float func_623(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

int func_624(int iParam0)
{
	iVar0 = 0;
	if (!func_75(iParam0))
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (Global_1357549->f_1675[iVar1]->f_1 == iParam0)
			{
				(*Global_1360165)[iParam0]->f_126 = Global_1357549->f_1675[iVar1]->f_4;
				return &(Global_1357549->f_1675[iVar1]);
			}
			iVar1++;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (&Global_1357549->f_1675[iVar1] != 0 && Global_1357549->f_1675[iVar1]->f_1 == -1)
		{
			iVar0 = &Global_1357549->f_1675[iVar1];
			Jump @165; //curOff = 150
		}
		iVar1++;
	}
	if (!func_75(iParam0))
	{
		if (iVar0 != 0)
		{
			Global_1357549->f_1675[iVar1]->f_1 = iParam0;
			(*Global_1360165)[iParam0]->f_126 = Global_1357549->f_1675[iVar1]->f_4;
		}
	}
	return iVar0;
}

int func_625(int iParam0)
{
	if (!func_75(iParam0))
	{
		return 0;
	}
	if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_126))
	{
		iVar0 = func_460(iParam0, 1);
		iVar1 = _0xa00df706c60173d1(iVar0);
		if (Global_40.f_4942[iParam0]->f_7 != 0 && iVar1 != Global_40.f_4942[iParam0]->f_7)
		{
			_0x8bc555034a5a5e8c(iVar0, Global_40.f_4942[iParam0]->f_7);
		}
		(*Global_1360165)[iParam0]->f_126 = _create_persistent_character(iVar0);
		_0xfcc6db8dbe709bc8((*Global_1360165)[iParam0]->f_126);
	}
	return (*Global_1360165)[iParam0]->f_126;
}

int func_626(int iParam0)
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

int func_627(int iParam0)
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

bool func_628(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

void func_629(int iParam0, bool bParam1)
{
	if (!func_75(iParam0))
	{
		return;
	}
	(*Global_1360165)[iParam0]->f_1154 = bParam1;
}

int func_630(int iParam0, int iParam1)
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

bool func_631(int iParam0)
{
	if (!func_75(iParam0))
	{
		return false;
	}
	switch ((*Global_1360165)[iParam0]->f_127)
	{
		case -784953535:
		case -543937540:
		case -233385727:
		case 893704044:
		case 1132950513:
			return true;
		default:
			break;
	}
	return false;
}

bool func_632(int iParam0, char* sParam1)
{
	switch (Global_40.f_4283)
	{
		case 0:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "colter/col_default_horse_bill", 64);
					return true;
				case 7:
					StringCopy(sParam1, "colter/col_default_horse_charles", 64);
					return true;
				case 0:
					StringCopy(sParam1, "colter/col_default_horse_dutch", 64);
					return true;
				case 5:
					StringCopy(sParam1, "colter/col_default_horse_hosea", 64);
					return true;
				case 2:
					StringCopy(sParam1, "colter/col_default_horse_javier", 64);
					return true;
				case 1:
					StringCopy(sParam1, "colter/col_default_horse_john", 64);
					return true;
				case 9:
					StringCopy(sParam1, "colter/col_default_horse_lenny", 64);
					return true;
				case 6:
					StringCopy(sParam1, "colter/col_default_horse_micah", 64);
					return true;
				default:
					break;
			}
			StringCopy(sParam1, "colter/col_default_horses1", 64);
			return true;
		case 1:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_bill", 64);
					return true;
				case 7:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_charles", 64);
					return true;
				case 0:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_dutch", 64);
					return true;
				case 5:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_hosea", 64);
					return true;
				case 2:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_javier", 64);
					return true;
				case 1:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_john", 64);
					return true;
				case 10:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horses1", 64);
					return true;
				case 9:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_lenny", 64);
					return true;
				case 6:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_micah", 64);
					return true;
				case 11:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_sadie", 64);
					return true;
				case 8:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_sean", 64);
					return true;
				case 4:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_uncle", 64);
					return true;
				default:
					break;
			}
			StringCopy(sParam1, "horseshoeOverlook/hso_default_horses1", 64);
			return true;
		case 2:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_bill", 64);
					return true;
				case 7:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_charles", 64);
					return true;
				case 0:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_dutch", 64);
					return true;
				case 5:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_hosea", 64);
					return true;
				case 2:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_javier", 64);
					return true;
				case 1:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_john", 64);
					return true;
				case 10:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_kieran", 64);
					return true;
				case 9:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_lenny", 64);
					return true;
				case 6:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_micah", 64);
					return true;
				case 11:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_sadie", 64);
					return true;
				case 8:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_sean", 64);
					return true;
				case 4:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_uncle", 64);
					return true;
				default:
					break;
			}
			StringCopy(sParam1, "clemensPoint/clm_default_horses1", 64);
			return true;
		case 3:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_bill", 64);
					return true;
				case 7:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_charles", 64);
					return true;
				case 0:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_dutch", 64);
					return true;
				case 5:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_hosea", 64);
					return true;
				case 2:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_javier", 64);
					return true;
				case 1:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_john", 64);
					return true;
				case 10:
					StringCopy(sParam1, "shadyBelle/shb_default_horses1", 64);
					return true;
				case 9:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_lenny", 64);
					return true;
				case 6:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_micah", 64);
					return true;
				case 11:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_sadie", 64);
					return true;
				case 4:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_uncle", 64);
					return true;
				default:
					break;
			}
			StringCopy(sParam1, "shadyBelle/shb_default_horses1", 64);
			return true;
		case 5:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "lakay/lak_default_horse_bill", 64);
					return true;
				case 7:
					StringCopy(sParam1, "lakay/lak_default_horse_charles", 64);
					return true;
				case 0:
					StringCopy(sParam1, "lakay/lak_default_horse_dutch", 64);
					return true;
				case 2:
					StringCopy(sParam1, "lakay/lak_default_horse_javier", 64);
					return true;
				case 1:
					StringCopy(sParam1, "lakay/lak_default_horse_john", 64);
					return true;
				case 6:
					StringCopy(sParam1, "lakay/lak_default_horse_micah", 64);
					return true;
				case 11:
					StringCopy(sParam1, "lakay/lak_default_horse_sadie", 64);
					return true;
				case 4:
					StringCopy(sParam1, "lakay/lak_default_horses1", 64);
					return true;
				default:
					break;
			}
			StringCopy(sParam1, "lakay/lak_default_horses1", 64);
			return true;
		case 6:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_bill", 64);
					return true;
				case 7:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_charles", 64);
					return true;
				case 0:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_dutch", 64);
					return true;
				case 2:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_javier", 64);
					return true;
				case 1:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_john", 64);
					return true;
				case 6:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_micah", 64);
					return true;
				case 11:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_sadie", 64);
					return true;
				case 4:
					StringCopy(sParam1, "beaverHollow/bvh_default_horses1", 64);
					return true;
				default:
					break;
			}
			StringCopy(sParam1, "beaverHollow/bvh_default_horses1", 64);
			return true;
		case 8:
			StringCopy(sParam1, "beechersHope/bch_default_horses", 64);
			return true;
	}
	return false;
}

int func_633()
{
	return -1;
}

bool func_634(int iParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	if (!func_75(iParam0))
	{
		return false;
	}
	if ((!bParam5 && !Global_1359489->f_12) || (bParam5 && Global_1359489->f_13 < 8))
	{
		if ((*Global_1360165)[iParam0]->f_125 <= 300)
		{
			if (_0xeb98b38ca60742d7((*Global_1360165)[iParam0]->f_126))
			{
				_0x49a8c2cd97815215((*Global_1360165)[iParam0]->f_126);
			}
			if (bParam5)
			{
				(*Global_1360165)[iParam0]->f_124 = _0x08fc896d2cb31fcc((*Global_1360165)[iParam0]->f_126, 0);
				Global_1359489->f_13++;
			}
			else
			{
				(*Global_1360165)[iParam0]->f_124 = _0x0cadc3a977997472((*Global_1360165)[iParam0]->f_126, 0);
			}
			_0x6759bee6762e140b((*Global_1360165)[iParam0]->f_126);
			(*Global_1360165)[iParam0]->f_125++;
		}
		else
		{
			iVar0 = _0xa00df706c60173d1(func_460(iParam0, 1));
			request_model(iVar0, false);
			if (has_model_loaded(iVar0))
			{
				(*Global_1360165)[iParam0]->f_124 = func_783(iVar0, vParam1, iParam4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				set_model_as_no_longer_needed(iVar0);
				_0x7b204f88f6c3d287((*Global_1360165)[iParam0]->f_126);
			}
		}
		if (!func_6((*Global_1360165)[iParam0]->f_124, 0))
		{
			return false;
		}
		Global_1359489->f_12 = 1;
		func_239(iParam0, 256, 0);
	}
	else
	{
		return false;
	}
	return true;
}

void func_635(int iParam0, int iParam1)
{
	decor_set_bool(iParam0, "HorseCompanion", true);
	func_785(iParam0, func_784(iParam1));
	if (func_301(iParam1, 8))
	{
		_0xf74e134f40192884(iParam0, 2);
		set_ped_config_flag(iParam0, 412, true);
	}
	else
	{
		set_ped_config_flag(iParam0, 412, false);
	}
	if (does_entity_exist(func_41(iParam1)))
	{
		_0x931b241409216c1f(func_41(iParam1), iParam0, 0);
		_0xed1c764997a86d5a(func_41(iParam1), iParam0);
		set_ped_config_flag(iParam0, 367, true);
	}
	else
	{
		func_78(iParam1, 38, 1);
	}
	set_ped_relationship_group_default_hash(iParam0, -1856989775);
	set_ped_relationship_group_hash(iParam0, -1856989775);
	if (Global_40.f_4283 == 0)
	{
		set_ped_config_flag(iParam0, 172, true);
	}
	set_ped_config_flag(iParam0, 324, true);
	set_ped_config_flag(iParam0, 330, true);
	set_ped_config_flag(iParam0, 331, true);
	set_ped_config_flag(iParam0, 471, true);
	set_ped_config_flag(iParam0, 442, true);
	if (func_301(iParam1, 4096))
	{
		set_ped_config_flag(iParam0, 1, false);
		set_ped_config_flag(iParam0, 54, false);
		set_ped_config_flag(iParam0, 121, false);
		set_ped_config_flag(iParam0, 302, false);
	}
	else
	{
		set_ped_config_flag(iParam0, 1, true);
		set_ped_config_flag(iParam0, 54, true);
		set_ped_config_flag(iParam0, 121, true);
		set_ped_config_flag(iParam0, 302, true);
	}
	_0xae6004120c18df97(iParam0, 2, 0);
	_0xae6004120c18df97(iParam0, 3, 0);
	func_489(iParam1, func_301(iParam1, 8192), func_301(iParam1, 16384), 1);
}

bool func_636()
{
	if (func_165() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

char* func_637(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 3:
			return "HORSE_NAME_GANG_BILL";
		case 7:
			if (bParam1)
			{
				return "HORSE_NAME_GANG_CHARLES_ES";
			}
			else
			{
				return "HORSE_NAME_GANG_CHARLES";
			}
			break;
		case 0:
			return "HORSE_NAME_GANG_DUTCH";
		case 5:
			return "HORSE_NAME_GANG_HOSEA";
		case 2:
			return "HORSE_NAME_GANG_JAVIER";
		case 1:
			return "HORSE_NAME_GANG_JOHN";
		case 20:
			return "HORSE_NAME_GANG_KAREN";
		case 9:
			return "HORSE_NAME_GANG_LENNY";
		case 6:
			return "HORSE_NAME_GANG_MICAH";
		case 10:
			return "HORSE_NAME_GANG_KIERAN";
		case 11:
			if (bParam1)
			{
				return "HORSE_NAME_GANG_SADIE_ES";
			}
			else
			{
				return "HORSE_NAME_GANG_SADIE";
			}
			break;
		case 8:
			return "HORSE_NAME_GANG_SEAN";
		case 23:
			return "HORSE_NAME_GANG_TRELAWNEY";
		case 4:
			if (bParam1)
			{
				return "HORSE_NAME_GANG_UNCLE_ES";
			}
			else
			{
				return "HORSE_NAME_GANG_UNCLE";
			}
			break;
		default:
			break;
	}
	return "";
}

void func_638(int iParam0, float fParam1, bool bParam2)
{
	if (!is_entity_dead(iParam0))
	{
		fParam1 = func_744(fParam1, 0f, 1f);
		iVar0 = floor((fParam1 * IntToFloat(get_entity_max_health(iParam0, bParam2))));
		_set_entity_health(iParam0, iVar0, 0);
	}
}

void func_639(int iParam0)
{
	if (!func_75(iParam0))
	{
		return;
	}
	if (func_460(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_91(iParam0);
	func_687(iVar0);
	func_239(iParam0, 8192, 1);
}

void func_640(int iParam0)
{
	if (!func_75(iParam0))
	{
		return;
	}
	if (func_460(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_91(iParam0);
	func_688(iVar0);
	func_239(iParam0, 8192, 0);
}

void func_641(int iParam0)
{
	if (!func_75(iParam0))
	{
		return;
	}
	if (func_460(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_91(iParam0);
	func_689(iVar0);
	func_239(iParam0, 16384, 1);
}

void func_642(int iParam0)
{
	if (!func_75(iParam0))
	{
		return;
	}
	if (func_460(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_91(iParam0);
	func_691(iVar0);
	func_239(iParam0, 16384, 0);
}

void func_643(int iParam0)
{
	iParam0 = func_306(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_497(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_786(iVar6);
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

bool func_644(int iParam0)
{
	if (!func_787(iParam0))
	{
		return false;
	}
	if (!func_788())
	{
		return true;
	}
	return false;
}

void func_645(int iParam0, int iParam1)
{
	iParam0 = func_306(iParam0);
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

void func_646(var uParam0)
{
	*uParam0 = -377364164;
	uParam0->f_1 = 357708345;
}

void func_647(int iParam0, struct<2> Param1)
{
	iParam0 = func_306(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_789(iParam0, Param1))
	{
	}
	if (!func_790(iParam0, Param1.f_1))
	{
	}
}

void func_648(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_791((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_649(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 57)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_650(var uParam0)
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

void func_651(var uParam0)
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

void func_652(int iParam0, var uParam1)
{
	iVar0 = 100;
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_653(int iParam0, var uParam1)
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

void func_654(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1f;
}

void func_655(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -15;
}

void func_656(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
}

int func_657(int iParam0)
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

void func_658(int iParam0, int iParam1)
{
	_copy_memory(&(Global_1900383->f_508), Global_40.f_1095.f_1[iParam1], 436);
	_copy_memory(Global_40.f_1095.f_1[iParam1], Global_40.f_1095.f_1[iParam0], 436);
	_copy_memory(Global_40.f_1095.f_1[iParam0], &(Global_1900383->f_508), 436);
}

void func_659(int iParam0, int iParam1)
{
	_copy_memory(&(Global_1900383->f_463), (*Global_1900383)[iParam1], 45);
	_copy_memory((*Global_1900383)[iParam1], (*Global_1900383)[iParam0], 45);
	_copy_memory((*Global_1900383)[iParam0], &(Global_1900383->f_463), 45);
}

int func_660(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	Var29.f_9 = -1591664384;
	if (!func_792(iParam0, &Var0))
	{
		return 0;
	}
	bVar58 = false;
	if (!func_792(iParam1, &Var29))
	{
		bVar58 = true;
	}
	if (bVar58)
	{
		iVar59 = func_793(iParam1);
		if (iVar59 == 0)
		{
			return 0;
		}
		if (!func_794(Var0, Var0.f_5, iVar59, 0, 0))
		{
			return 0;
		}
	}
	else if (!func_795(Var0, Var29, 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_661(int iParam0)
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
	if (func_796(iParam0))
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
	if (func_241(iParam0))
	{
		iVar3 = func_242(iParam0);
		if (func_797(iVar3))
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

void func_662(int iParam0)
{
	Global_1900383->f_393 = iParam0;
}

int func_663(var uParam0, int iParam1, var uParam2)
{
	*uParam0 = 0;
	*iParam1 = 0;
	*uParam2 = 0;
	if (func_490())
	{
		if (func_798())
		{
			bVar0 = false;
			if (!func_278((*Global_1835011)[15]->f_1, 1) && !func_678(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*uParam0 = func_799();
				*iParam1 = func_800();
				*uParam2 = func_801();
				return 1;
			}
			else
			{
				*uParam0 = func_802();
				*iParam1 = func_803();
				*uParam2 = func_804();
				return 1;
			}
		}
		else if (func_636())
		{
			if (!func_278((*Global_1835011)[60]->f_1, 1))
			{
				*uParam0 = func_805();
				*iParam1 = func_806();
				*uParam2 = func_807();
				return 1;
			}
			else
			{
				*uParam0 = func_808();
				*iParam1 = func_809();
				*uParam2 = func_810();
				return 1;
			}
		}
	}
	else if (func_798())
	{
		*uParam0 = func_811();
		*iParam1 = func_812();
		*uParam2 = func_813();
		return 1;
	}
	else if (func_636())
	{
		*uParam0 = func_814();
		*iParam1 = func_815();
		*uParam2 = func_816();
		return 1;
	}
	return 0;
}

void func_664(int iParam0, var uParam1)
{
	iParam0 = func_306(iParam0);
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

void func_665(int iParam0, var uParam1)
{
	iParam0 = func_306(iParam0);
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

void func_666(int iParam0, var uParam1)
{
	iParam0 = func_306(iParam0);
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

void func_667(int iParam0, int iParam1)
{
	iParam0 = func_306(iParam0);
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

void func_668(int iParam0, int iParam1)
{
	iParam0 = func_306(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_506(iParam0);
	if (!is_model_valid(iVar0))
	{
		func_663(&uVar1, &iVar0, &uVar2);
	}
	iVar3 = get_default_max_attribute_rank(iVar0, 7);
	if (iParam1 > iVar3)
	{
		return;
	}
	fVar4 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iParam1));
	Global_40.f_1095.f_1[iParam0]->f_372 = iParam1;
	Global_40.f_1095.f_1[iParam0]->f_372.f_1 = fVar4;
	func_817(iParam1);
	iVar5 = func_497(iParam0);
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

bool func_669(int iParam0, int iParam1)
{
	iParam0 = func_306(iParam0);
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

bool func_670(int iParam0, var uParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_792(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = func_818(Var0, 1415981582, 0);
	if (!func_628(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_671(int iParam0, var uParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_792(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = func_818(Var0, -2119169513, 0);
	if (!func_628(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_672(int iParam0, var uParam1)
{
	if (!func_819(856287005, iParam0))
	{
		return false;
	}
	Var0 = { func_820() };
	*uParam1 = func_818(Var0, iParam0, 0);
	if (!func_628(*uParam1, 0))
	{
		return false;
	}
	return true;
}

void func_673(int iParam0)
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

void func_674(int iParam0, var uParam1)
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
	func_821(iParam0, *uParam1);
	func_821(iParam0, uParam1->f_1);
}

void func_675(int iParam0)
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

void func_676(int iParam0, var uParam1)
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
	func_821(iParam0, *uParam1);
	func_821(iParam0, uParam1->f_1);
	func_821(iParam0, uParam1->f_2);
	func_821(iParam0, uParam1->f_3);
	func_821(iParam0, uParam1->f_4);
	func_821(iParam0, uParam1->f_5);
}

int func_677(int iParam0, int iParam1, bool bParam2)
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

bool func_678(int iParam0)
{
	if (!func_822(iParam0))
	{
		return false;
	}
	return func_823(iParam0);
}

void func_679(var uParam0)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_825(func_824(255), 109029619));
	}
	else if (func_798())
	{
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_636();
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_680(int iParam0)
{
	iParam0 = func_306(iParam0);
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

void func_681(var uParam0, bool bParam1)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_825(func_824(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_798())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_636())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (compare_strings(sVar0, "", false, -1) != 0)
		{
			set_blip_name_from_text_file(*uParam0, sVar0);
		}
	}
}

int func_682(int iParam0)
{
	iParam0 = func_306(iParam0);
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

float func_683(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

float func_684(int iParam0)
{
	iParam0 = func_306(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_506(iParam0);
	if (!is_model_valid(iVar0))
	{
		return -1f;
	}
	iVar1 = func_680(iParam0);
	iVar2 = get_default_max_attribute_rank(iVar0, 7);
	fVar3 = _0xeb67d4e056c85a81(iVar1);
	fVar4 = _0x78d8c1d4eb80c588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_680(iParam0) + 1;
	fVar6 = func_826(iParam0);
	fVar7 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar1));
	fVar8 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_827(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_685(int iParam0)
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

void func_686(int iParam0)
{
	_set_blip_flash_style(iParam0, 673950256);
	_set_blip_flash_style(iParam0, 561559387);
	_set_blip_flash_style(iParam0, -201249929);
}

void func_687(int iParam0)
{
	if (func_828(iParam0, 0))
	{
		return;
	}
	set_entity_invincible(iParam0, true);
	set_ped_config_flag(iParam0, 179, true);
	set_entity_proofs(iParam0, 127, false);
	if (is_entity_on_fire(iParam0))
	{
		stop_entity_fire(iParam0, 0);
		_set_entity_health(iParam0, get_entity_max_health(iParam0, false), 0);
	}
}

void func_688(int iParam0)
{
	if (func_828(iParam0, 0))
	{
		return;
	}
	set_entity_invincible(iParam0, false);
	set_ped_config_flag(iParam0, 179, false);
	set_entity_proofs(iParam0, 0, false);
}

void func_689(int iParam0)
{
	if (func_828(iParam0, 0))
	{
		return;
	}
	set_ped_can_ragdoll(iParam0, true);
	clear_ragdoll_blocking_flags(iParam0, 1048575);
	set_ragdoll_blocking_flags(iParam0, 8229);
	set_ped_can_ragdoll_from_player_impact(iParam0, false);
}

void func_690(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (func_77(14))
	{
		return;
	}
	if (Global_40.f_4283 != 7 && Global_40.f_4283 != 8)
	{
		return;
	}
	if (!_does_volume_exist(&(Global_1357549->f_3[4])))
	{
		return;
	}
	if (!is_entity_in_volume(iParam0, &(Global_1357549->f_3[4]), true, 0))
	{
		return;
	}
	set_ragdoll_blocking_flags(iParam0, 909522);
}

void func_691(int iParam0)
{
	if (func_828(iParam0, 0))
	{
		return;
	}
	set_ped_can_ragdoll(iParam0, true);
	clear_ragdoll_blocking_flags(iParam0, 1048575);
	set_ragdoll_blocking_flags(iParam0, 1);
	set_ped_can_ragdoll_from_player_impact(iParam0, true);
}

int func_692(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_829(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_693(int iParam0, int iParam1)
{
	Global_40.f_4942[iParam0]->f_5 = (Global_40.f_4942[iParam0]->f_5 - (Global_40.f_4942[iParam0]->f_5 && iParam1));
}

bool func_694(int iParam0)
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

int func_695(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_830(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_831((386 + iVar28), 1);
			if (func_832(iParam0, &Var0, iVar5, 0))
			{
				if (func_833(iParam0, &Var6, iVar5))
				{
					Var29 = { func_834(iParam0, Var0, iVar5, 0) };
					func_835(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_836(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					func_837(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_838(iParam0, iParam1);
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

void func_696(int iParam0, int iParam1, float fParam2)
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

bool func_697(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

bool func_698(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_839(iParam1);
	}
	return func_290(iParam0, iParam1);
}

bool func_699(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_840(iParam1);
	}
	return func_356(iParam0, iParam1);
}

bool func_700(int iParam0)
{
	return &Global_1899515 > iParam0;
}

void func_701(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_841(iParam1);
	}
	else
	{
		func_19(iParam0, iParam1);
	}
}

bool func_702(vector3 vParam0)
{
	return _0x769bb7626b8cdb06(vParam0, 0.5f, 0, 0, 16384);
}

int func_703(int iParam0, bool bParam1)
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

float func_704(vector3 vParam0, vector3 vParam3)
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

bool func_705(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

int func_706(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_707(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_708(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (func_12(iParam1->f_6))
	{
		if (bParam7 || is_bit_set(*iParam1, 11))
		{
			return;
		}
		func_13(&(iParam1->f_6), 0, 1);
	}
	if (!func_12(iParam1->f_6) && !is_bit_set(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_575(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_842(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_12(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_716(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_843(iParam1->f_6, 17, 1, 1);
				}
				if (is_bit_set(*iParam1, 1))
				{
					if (is_bit_set(*iParam1, 3))
					{
						func_844(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_347(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (is_bit_set(*iParam1, 10))
				{
					func_843(iParam1->f_6, 16, 1, 1);
				}
				if (!is_bit_set(*iParam1, 0) || is_bit_set(*iParam1, 13))
				{
					func_193(iParam1->f_6, 0, 1);
				}
				else
				{
					func_193(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_709(int iParam0)
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

void func_710(int* iParam0, int iParam1)
{
	if (!func_731(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_707(iParam0, 14);
		}
	}
}

bool func_711(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_712(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_713(int iParam0, int iParam1)
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

bool func_714(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

bool func_715(int iParam0, bool bParam1)
{
	if (bParam1 && !func_12(iParam0))
	{
		return false;
	}
	return !func_483(iParam0, 4);
}

void func_716(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam3 && !func_12(iParam0))
	{
		return;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = func_109(iParam0);
	func_843(iParam0, 18, 0, 1);
	func_843(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = _uiprompt_get_group_id_for_target_entity(iParam1);
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam4, iParam2);
}

bool func_717(int iParam0, bool bParam1)
{
	if (bParam1 && !func_12(iParam0))
	{
		return false;
	}
	iVar0 = func_109(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

bool func_718(int iParam0, bool bParam1)
{
	if (bParam1 && !func_12(iParam0))
	{
		return false;
	}
	iVar0 = func_109(iParam0);
	return _uiprompt_is_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_719(int iParam0, bool bParam1)
{
	if (bParam1 && !func_12(iParam0))
	{
		return;
	}
	iVar0 = func_109(iParam0);
	_uiprompt_restart_modes((*Global_1945938)[iVar0]->f_3);
}

int func_720(int iParam0)
{
	iVar0 = func_728(func_845(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946804->f_1497.f_1[iVar0]->f_1;
	}
	return 0;
}

bool func_721(int iParam0)
{
	if (func_722(81053684, iParam0))
	{
		return true;
	}
	if (func_722(-525676072, iParam0))
	{
		return true;
	}
	return false;
}

bool func_722(int iParam0, int iParam1)
{
	iVar1 = func_728(func_845(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1946804->f_1497.f_1[iVar1] != 0 && &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1];
		if (func_479(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

bool func_723()
{
	return Global_1946804->f_2792;
}

bool func_724(int iParam0)
{
	if (func_846())
	{
		return false;
	}
	if (!func_628(iParam0, 0))
	{
		return false;
	}
	if (!func_847(iParam0, 1, 0))
	{
		_0xbfff81e12a745a5f();
		return false;
	}
	return true;
}

int func_725(int iParam0)
{
	Var0 = { func_830(iParam0, 1, 0) };
	return func_848(Var0.f_4);
}

void func_726(int iParam0, int iParam1)
{
	func_849(iParam0, iParam1);
}

int func_727(int iParam0, int iParam1)
{
	bVar3 = func_850(iParam0);
	if (func_851(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_577(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_852();
			}
			else
			{
				iVar0 = func_853();
			}
		}
		else if (func_74(iParam1, 1))
		{
			iVar0 = 0;
		}
		else if (bVar1)
		{
			iVar0 = func_854();
		}
		else
		{
			iVar0 = func_855();
		}
	}
	else if (func_721(&iVar2))
	{
		if (func_851(iVar2, -1303648999))
		{
			iVar0 = func_852();
		}
		else
		{
			iVar0 = func_853();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_854();
	}
	else
	{
		iVar0 = func_855();
	}
	if (iVar0 != 0)
	{
		Global_1946804->f_2791 = get_game_timer();
		_task_item_interaction(Global_35, iParam0, iVar0, 1, iParam1, -1082130432);
		return 1;
	}
	return 0;
}

int func_728(int iParam0, int iParam1)
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

void func_729(int iParam0, int iParam1)
{
	iVar0 = func_725(iParam0);
	iVar1 = func_728(iVar0, 1);
	if (iVar1 == 39)
	{
		return;
	}
	if (func_856(iParam0) && func_857(iParam0))
	{
		iParam1 |= 64;
	}
	if (((iVar0 == 1108822547 && func_858(32768)) || &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1]) && iParam0 != &Global_1946804->f_1497.f_1[iVar1])
	{
		if (func_856(&(Global_1946804->f_1497.f_1[iVar1])) && func_857(&(Global_1946804->f_1497.f_1[iVar1])))
		{
			iParam1 |= 32;
		}
		if (Global_1946804->f_57[iVar1]->f_1 > 1)
		{
			iParam1 |= 16;
		}
		iVar2 = 0;
		switch (func_479(iParam0))
		{
			case 81053684:
				if (func_722(-525676072, &uVar3))
				{
					iVar2 = func_728(func_845(-525676072), 1);
					if (iVar2 == 39)
					{
					}
					else
					{
						Global_1946804->f_2377[iVar2] = &Global_1946804->f_57[iVar2];
						Jump @434; //curOff = 294
						if (func_858(32768))
						{
							func_860(func_859(iVar1, 1));
						}
						if (func_858(32768) || (func_722(-2061583405, &iVar4) && !func_857(iVar4)))
						{
							knock_off_ped_prop(Global_35, false, true, false, true);
						}
						if (func_722(81053684, &iVar4))
						{
							iVar2 = func_728(func_845(81053684), 1);
							if (iVar2 == 39)
							{
							}
							else
							{
								Global_1946804->f_2377[iVar2] = &Global_1946804->f_57[iVar2];
							}
							Global_1946804->f_2377[iVar1] = iParam0;
							func_861(iVar0, iParam1, 6);
						}
					}
				}
				default:
					break;
		}
	}
}

void func_730(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_546(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_862(Var0);
}

bool func_731(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

bool func_732()
{
	if (_get_number_of_references_of_script_with_name_hash(-92416669) > 0)
	{
		return true;
	}
	return false;
}

bool func_733(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (iParam0 == get_hash_key(&((*Global_1934603)[iVar0]->f_10)))
		{
			func_863(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

Vector3 func_734(vector3 vParam0)
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

bool func_735()
{
	if (Global_1572887->f_12 != -1)
	{
		return false;
	}
	return Global_1347477->f_203;
}

float func_736(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

float func_737()
{
	fVar0 = func_864(13);
	iVar1 = func_865(fVar0);
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

float func_738()
{
	if (is_ped_on_mount(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_739()
{
	if (func_866())
	{
		if (_get_special_edition_core_stats_bonus_enabled())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_740()
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

float func_741()
{
	return Global_1955565->f_3;
}

void func_742(int iParam0, char* sParam1, bool bParam2)
{
	sVar0 = func_867(iParam0, 1, 0, 0);
	sVar0 = _create_var_string(2, sVar0, sParam1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[1]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[1]), bParam2);
}

void func_743(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_867(iParam0, 2, 0, 0);
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

float func_744(float fParam0, float fParam1, float fParam2)
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

bool func_745()
{
	return func_864(12) <= -99f;
}

bool func_746()
{
	return func_864(12) >= 99f;
}

char* func_747(int iParam0)
{
	switch (iParam0)
	{
		case -1698780291:
			return "P_CS_LEDGER01X";
		case -2049014994:
			return "P_CS_ROPE01X";
		case -1005172683:
			return "P_DOOR01X";
		case 325782917:
			return "P_DOOR03X";
		case 430302479:
			return "p_door12x";
		case -1819321039:
			return "P_DOOR13X";
		case -1899748000:
			return "p_door45x";
		case -1734239985:
			return "p_chairvictorian01x";
		case 1561132816:
			return "p_crate03x";
		case -607235640:
			return "p_cs_jug01x";
		case -243150339:
			return "p_cs_wagon02x";
		case -1497029950:
			return "P_DOOR37X";
		case -1957055091:
			return "p_door_val_genstore";
		case -1676410507:
			return "p_doorstrawberry01x";
		case 913112519:
			return "p_doorfrench01l";
		case -1004594895:
			return "p_doorfrench01r";
		case -546124888:
			return "p_doormansiongate01x";
		case 367033685:
			return "p_doornbd39x";
		case -398894636:
			return "p_doorsaloon02x";
		case -882474373:
			return "P_DOORVH_SALOON_L";
		case 376903871:
			return "P_DOORVH_SALOON_R";
		case -447184114:
			return "p_cigarlit01x";
		case -502353725:
			return "p_pebble01x";
		case 1590781012:
			return "p_cs_rope03x";
		case 98154799:
			return "P_CARDS01X";
		case 1834866537:
			return "P_CS_POKERHAND01X";
		case 1770671818:
			return "P_CS_POKERHAND02X";
		case -827620392:
			return "P_CS_HOLDEMHAND01X";
		case 343238651:
			return "P_CS_HOLDEMHAND02X";
		case -197909103:
			return "P_CS_BUCKET01X";
		case 574905658:
			return "p_cs_syringe01x";
		case -1971689092:
			return "p_bottleJD01x";
		case 1085457901:
			return "p_rag02x";
		case 1826097446:
			return "p_magneto02x";
		case -789465252:
			return "p_magneto01x";
		case -238490359:
			return "p_cs_wantedalive01x";
		case -997503794:
			return "P_CS_RCRIDETHELIGHTNING";
		case -1473388640:
			return "p_pen01x";
		case -1135604739:
			return "p_cs_letter01a_x";
		case 201002005:
			return "p_cs_electricchair01x";
		case -451122991:
			return "p_cs_generator01x";
		case -580353882:
			return "p_cs_electricHelmet01x";
		case -330691926:
			return "p_cs_gag01x";
		case -832187622:
			return "p_door_sha_man01x";
		case -2104766853:
			return "p_stool01x";
		case -1937484496:
			return "p_stool02x";
		case -156777810:
			return "p_jugglingball01x";
		case -1025740342:
			return "p_chair02x";
		case 998759471:
			return "p_chair04x";
		case -182450036:
			return "p_crate15x";
		case 539662086:
			return "p_cleaver01x";
		case 401116463:
			return "p_bottle003x";
		case -940999254:
			return "p_cs_book02x";
		case -1502733730:
			return "p_stickydymt_single";
		case -776888393:
			return "p_cs_fusedynamite01x";
		case -1901975761:
			return "p_dynamite01x";
		case 1170245472:
			return "p_cs_fusespool01x";
		case 1996775400:
			return "p_cs_detonator01x";
		case -2058893965:
			return "p_cs_bedrollclsd01x";
		case -967333571:
			return "P_CIGARETTE_CS01X";
		case -1413776846:
			return "P_MATCHES01X";
		case 617552302:
			return "P_MATCHSTICK01X";
		case -1321878957:
			return "P_WOODENCHAIR01X";
		case 1230724566:
			return "P_CHAIR_CRATE02X";
		case 164271545:
			return "p_knittingneedle01x";
		case -458984299:
			return "p_knittingsquare01x";
		case -1055906010:
			return "p_cs_rabbitMeat01x";
		case 622322952:
			return "p_cs_rabbitMeat02x";
		case -890087611:
			return "p_bottle03x";
		case -1281909308:
			return "p_cs_billstack01x";
		case 1711925122:
			return "p_cs_billSingle01x";
		case 2514129:
			return "p_binoculars01x";
		case -1866470762:
			return "p_doorrhosheriff02x";
		case -2021274799:
			return "P_BARSTOOL01X";
		case -491019543:
			return "p_cs_shotglass01x";
		case 1698150819:
			return "p_lamp18x";
		case -1963197288:
			return "p_clock06x";
		case 1527379014:
			return "p_bottle02x";
		case 876316748:
			return "p_cs_lootSack01x";
		case 1767344357:
			return "p_wineBox01x";
		case 822933632:
			return "p_strongBox01x";
		case 1497470487:
			return "P_CLOCKTABLE02X";
		case -1149199295:
			return "p_gen_statue03b";
		case 1186910594:
			return "P_STOOLWINTER01X";
		case 1954479996:
			return "P_CS_BARRAG01X";
		case 2003418568:
			return "P_PLATE01X";
		case 624070311:
			return "P_KNIFE01X";
		case 1547859810:
			return "P_KNIFE02X";
		case -1710894930:
			return "P_CS_CATFISH_WHOLE01X";
		case 431926707:
			return "P_CS_CATFISH_WHOLE01BX";
		case -1419711042:
			return "P_WOODWHITTLE01X";
		case 1810315535:
			return "P_STICKFIREPOKER01X";
		case 266900228:
			return "P_CS_WOODPILE01X";
		case 382293518:
			return "P_FORK01X";
		case 389673974:
			return "P_KNIFE04X";
		case -1874205952:
			return "p_knife03x";
		case 1983379698:
			return "P_CS_BOTTLESLIM01X";
		case 1246822101:
			return "P_CS_BLANKET01X";
		case 1496261474:
			return "P_BEDROLLCLOSED01X";
		case -1342227326:
			return "P_CS_KINDLING01X";
		case -1402507254:
			return "P_CIGARTHIN01X";
		case 1081626861:
			return "p_door_wglass01x";
		case 663716280:
			return "p_broom02x";
		case -969349845:
			return "P_AMB_CLIPBOARD_01";
		case -384257010:
			return "P_CHAIR07X";
		case 628727561:
			return "p_cs_cratetnt01x";
		case -1809617345:
			return "p_cs_flourbag01x";
		case 1521462563:
			return "p_cs_supplies01x";
		case -589352772:
			return "p_cs_supplies02x";
		case 1376394832:
			return "p_cs_supplies03x";
		case -542955242:
			return "p_door04x";
		case -29643421:
			return "p_door11x";
		case -856676249:
			return "p_doorrhosaloon01_l";
		case -1333989503:
			return "p_doorrhosaloon01_r";
		case -1403420972:
			return "P_VAL_GATE2M02X";
		case -1205874435:
			return "P_CS_STMDNKY01X";
		case 2051399415:
			return "P_CS_HOOKPULLEY01X";
		case 1932781590:
			return "P_CHAIR_CS05X";
		case 1489783104:
			return "P_CHAIR_18X";
		case -1581225876:
			return "P_CHAIR19X";
		case -895862876:
			return "P_CHAIR20X";
		case -289651159:
			return "P_CHAIR05X";
		case 1407600554:
			return "p_chair22x";
		case 986312695:
			return "p_glass01x";
		case -93693274:
			return "P_DININGCHAIRS01X";
		case 325252933:
			return "P_WINDSORCHAIR03X";
		case 1328906077:
			return "P_WINDSORCHAIR02X";
		case 1045059103:
			return "p_door_val_jail02x";
		case -155999274:
			return "P_CRATETNT01X";
		case -1956230403:
			return "P_CRATETNT02X";
		case -62869733:
			return "P_MONEYSTACK01X";
		case -422220273:
			return "P_AXE01X";
		case 2065139134:
			return "P_HOE01X";
		case 1170674247:
			return "P_SHOVEL01X";
		case 49937914:
			return "P_SHOVEL04X";
		case -296963090:
			return "P_BROOM01X";
		case -811821899:
			return "P_PITCHFORK01X";
		case 1993810557:
			return "P_SCYTHE01X";
		case 1472170582:
			return "P_SKIFF02x";
		case 673153214:
			return "p_door_nbx_doc01x_l";
		case 132005948:
			return "p_door_nbx_doc01x_r";
		case 1661843942:
			return "p_cs_camera";
		case 1765047802:
			return "p_cs_cameratripod";
		case -1329546951:
			return "p_cs_camerabag01x";
		case -569131374:
			return "p_cameraflash01x";
		case -1509314938:
			return "p_cs_shutterrelease";
		case -397513868:
			return "rowboatswamp";
		case -1399874861:
			return "P_CHAIR25X";
		case 1064769829:
			return "P_DOORBRAIT01BX";
		case -50604564:
			return "P_CS_MAP01X";
		case 1058703817:
			return "p_hammer03x";
		case -238593141:
			return "p_cs_nailbarrel01x";
		case 1210783447:
			return "p_cs_book04x";
		case -2118240499:
			return "p_cs_Fan01x";
		case -862949069:
			return "p_cs_ledgerSmall01x";
		case -1311208351:
			return "p_cs_envelope01x";
		case 826392697:
			return "p_wrappedmeat01x";
		case 1455710720:
			return "P_CS_LETTER02X";
		case -2102031605:
			return "p_cs_book03x";
		case 1955831280:
			return "p_cs_giftBox01x";
		case 305182125:
			return "p_boiler01x";
		case 888504590:
			return "p_boiler02x";
		case -82199229:
			return "p_mugCoffee01x";
		case -1174489568:
			return "p_glasstallbeer01x";
		case 1022056778:
			return "p_pitcher02x";
		case 155128635:
			return "p_tray03x";
		case 1971611315:
			return "p_sit_chairwicker01b";
		case -449688053:
			return "S_INV_ORLEANDER01CX";
		case -703216761:
			return "S_INV_ORLEANDER01DX";
		case -1700686082:
			return "P_LADLE02X";
		case -889047922:
			return "P_CS_POT01X";
		case 519549403:
			return "P_CHAIRDINING03X";
		case -755866836:
			return "P_SPOON01X";
		case 196631385:
			return "P_BOWL03X";
		case -569447711:
			return "P_CS_BRIDECATALOGUE01X";
		case -535756918:
			return "P_JEWELRYBOX02BX";
		case 2044431266:
			return "P_CS_LETTERFOLDED01X";
		case -583569159:
			return "P_CS_ARTHURHAT01X";
		case 578898429:
			return "P_OAR03X";
		case -765914358:
			return "P_DOOR_VAL_BANKVAULT";
		case -1190396102:
			return "P_DOOR_COMBANK01X";
		case -436606401:
			return "P_CS_DONATION01X";
		case 1592327736:
			return "p_door_nbx_bank03x_R";
		case -1006516120:
			return "p_door_nbx_bank03x_L";
		case -1078696833:
			return "p_camp_plate_02x";
		case -974192123:
			return "p_stewplate02x";
		case 120221819:
			return "p_cs_log01x";
		case -1814268450:
			return "p_ndb_hotelplank01x";
		case 314775562:
			return "p_glass06x";
		case -1594634038:
			return "p_cs_rag01x";
		case 819493639:
			return "p_inkwell01x";
		case -548150401:
			return "p_cigar02x";
		case 1843407141:
			return "p_bottleBeer01x";
		case -1883578190:
			return "p_beermugglass01x";
		case 851401507:
			return "p_nutBowl01x";
		case 1610236838:
			return "p_cs_sacklarge01x";
		case 633326690:
			return "p_cs_dressbox01x";
		case -300816757:
			return "p_bell05x";
		case 342335375:
			return "p_woodendeskchair01x";
		case -1443906703:
			return "p_chair06x";
		case -1031399461:
			return "p_jug01x";
		case -1907186363:
			return "S_INV_MEDICINE01X";
		case 2067968977:
			return "S_INV_MEDICINE_FTY";
		case -434431529:
			return "S_INV_Milkweed01bx";
		case -2051048367:
			return "p_bottleslim01x";
		case 1267814678:
			return "p_cs_journal01x";
		case -503626004:
			return "p_mortarpestle02x";
		case 197307092:
			return "s_inv_burdock01dx";
		case 604616887:
			return "p_cs_ropeLegSplit";
		case 2038507899:
			return "p_cs_ropeHandsSplit";
		case 388126459:
			return "p_fishingpole01x";
		case -1367341904:
			return "P_FISHINGPOLE02X";
		case -1629442620:
			return "p_cs_flowernecklace";
		case -475791515:
			return "P_CS_FLOWERS01X";
		case -1018099626:
			return "s_inv_yarrow01cx";
		case 1210527888:
			return "P_CS_FISHINGPOLEBAG01X";
		case 1785480577:
			return "P_STICK02X";
		case 1789147356:
			return "P_CS_SOCK01X";
		case 169503210:
			return "P_DOOR_VAL_BANK00_RX";
		case 160636303:
			return "P_DOOR_VAL_BANK00_RX";
		case -1456646750:
			return "p_can10x";
		case 1010765128:
			return "p_cs_rabbitgut";
		case -142576910:
			return "p_cs_rabbitheadless";
		case 2055623882:
			return "p_cs_rabbitfeetless";
		case -808559472:
			return "p_kettle03x";
		case -804436865:
			return "s_che_woodbin01x";
		case 1833396091:
			return "s_lootablepoorcase";
		case -1494278633:
			return "P_CS_BOOKHARDCV01X";
		case -1643891339:
			return "P_LETTERBUNDLE_01X";
		case -459043872:
			return "P_LETTERENVELOPE_CS01X";
		case 1825744405:
			return "P_PACKAGE08X";
		case 1713200946:
			return "P_CIGARBOX02X";
		case 1663122464:
			return "p_crucifix02x";
		case 934706428:
			return "p_bottleCrate01x";
		case -554014433:
			return "p_can05x";
		case -1682372069:
			return "p_cs_suitcase04x";
		case 69604629:
			return "p_cs_bagstrauss01x";
		case 29998454:
			return "P_BOTTLE008X";
		case 161697289:
			return "P_BOTTLE009X";
		case 1045394246:
			return "P_BOTTLE010X";
		case 1623781586:
			return "p_pocketMirror01x";
		case -1671495534:
			return "P_CIGARETTE01X";
		case 1207272102:
			return "P_TRAVELTRUNK02X";
		case -294963065:
			return "P_CHAIRWHITE01X";
		case -1947027049:
			return "P_JOURNAL_OPEN01X";
		case -1945229292:
			return "p_table42_cs";
		case -1028267229:
			return "p_cs_newspaper_02x";
		case -1537933036:
			return "P_CS_POTATOSLICE01X";
		case -1035439448:
			return "S_APLSD_LOG";
		case 1410968406:
			return "S_APLSD_HRSATT";
		case -1216485179:
			return "p_spittoon01x";
		case 787211696:
			return "p_woodbowl01x";
		case -1167561544:
			return "p_pencil01x";
		case 1467658477:
			return "P_SPOONMID01X";
		case -624124479:
			return "P_PAN01X";
		case 1211525499:
			return "P_Pipe01x";
		case 666597548:
			return "p_cs_railroadbond01x";
		case -989609930:
			return "p_sharpeningstone01x";
		case 1540392720:
			return "p_treestump02x";
		case -1638036806:
			return "p_plate17x";
		case -1566727213:
			return "p_cs_newspaper_01x";
		case 1783964157:
			return "p_sadiehat01x";
		case -1093732866:
			return "p_door_bla_jail_l_01x";
		case 784094203:
			return "p_door_bla_jail_r_01x";
		case 441245663:
			return "p_mashedPotato02x";
		case 2064348393:
			return "p_cs_bookHardCv08x";
	}
	return "";
}

bool func_748(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_749()
{
	if (func_12(Global_43801))
	{
		func_13(&Global_43801, 0, 0);
	}
}

bool func_750(int iParam0)
{
	if (func_868(iParam0))
	{
		iVar0 = _0x59fa676177dbe4c9(iParam0);
		return ((((iVar0 == 4 || iVar0 == 0) || iVar0 == 3) || iVar0 == 5) || iVar0 == 2);
	}
	return false;
}

bool func_751(bool bParam0, bool bParam1)
{
	if (!func_12(Global_43801))
	{
		Global_43801 = func_869("CUTSCENE_SKIP", -842734359, 5, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, -2018976333, 0);
		(*Global_1945938)[Global_43801]->f_16 = &Global_23[3];
		func_870(Global_43801, 0, 1);
		func_871(Global_43801, 6, 1);
		if (bParam1)
		{
			func_871(Global_43801, 14, 1);
		}
	}
	else
	{
		if (!func_715(Global_43801, 0))
		{
			func_193(Global_43801, 1, 1);
		}
		if (func_872(Global_43801, 1) != 0f && bParam0)
		{
			func_870(Global_43801, 1, 1);
		}
		else
		{
			func_870(Global_43801, 0, 1);
		}
		return func_717(Global_43801, 1);
	}
	return false;
}

bool func_752(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_753(var uParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		return;
	}
	if (!_does_anim_scene_exist(uParam0->f_156))
	{
		return;
	}
	if (!_is_anim_scene_loaded(uParam0->f_156, true, false))
	{
		return;
	}
	if (!_0x23e33cb9f4a3f547(uParam0->f_156, sParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!is_string_null_or_empty(uParam0->f_174[iVar0]) && are_strings_equal(sParam1, uParam0->f_174[iVar0]))
		{
			Var1 = { uParam0->f_158 };
			*uParam0->f_174[iVar0] = { Var1 };
		}
		iVar0++;
	}
	func_328(uParam0, sParam1);
	func_182(uParam0, 2097152, 1);
	func_175(uParam0, 33554432);
	_set_anim_scene_playback_list_bool(uParam0->f_156, sParam1, true);
}

void func_754(var uParam0, char* sParam1)
{
	if (((!func_127(uParam0, 32) || func_873(uParam0)) || func_127(uParam0, 268435456)) && !func_127(uParam0, 65536))
	{
		func_874(&(uParam0->f_212), 256);
	}
}

void func_755(var uParam0, bool bParam1)
{
	if (get_current_ped_weapon(Global_35, &uVar0, false, 9, false))
	{
		_0x67e21acc5c0c970c(Global_35, 9, bParam1);
	}
	if (get_current_ped_weapon(Global_35, &uVar0, false, 7, false))
	{
		_0x67e21acc5c0c970c(Global_35, 7, bParam1);
	}
	if (get_current_ped_weapon(Global_35, &uVar0, false, 8, false))
	{
		_0x67e21acc5c0c970c(Global_35, 8, bParam1);
	}
	if (get_current_ped_weapon(Global_35, &uVar0, false, 10, false))
	{
		_0x67e21acc5c0c970c(Global_35, 10, bParam1);
	}
}

bool func_756()
{
	return _get_number_of_references_of_script_with_name_hash(130487986) > 0;
}

void func_757()
{
	script_thread_iterator_reset();
	iVar0 = script_thread_iterator_get_next_thread_id();
	while (_does_thread_exist(iVar0))
	{
		if (_get_hash_of_thread(iVar0) == 130487986)
		{
			if (!is_entity_dead(Global_35))
			{
				set_ped_reset_flag(Global_35, 265, true);
			}
			force_cleanup_for_thread_with_this_id(iVar0, 1);
			return;
		}
		iVar0 = script_thread_iterator_get_next_thread_id();
	}
}

void func_758(var uParam0, char[16] cParam1)
{
	uParam0->f_152 = { cParam1 };
}

bool func_759()
{
	if (does_entity_exist(player_ped_id()) && _0x038b1f1674f0e242(Global_35))
	{
		return true;
	}
	return false;
}

void func_760(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!is_string_null_or_empty(uParam0->f_174[iVar0]))
		{
			func_875(uParam0, uParam0->f_174[iVar0]);
		}
		iVar0++;
	}
	Var1 = { func_375() };
	func_875(uParam0, &Var1);
	Var1 = { func_190(uParam0) };
	func_875(uParam0, &Var1);
}

bool func_761()
{
	return func_868(_0xc17f69e1418cd11f(3));
}

bool func_762()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

void func_763(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

Vector3 func_764(var uParam0)
{
	return uParam0->f_214;
}

void func_765(var uParam0)
{
	if (func_577(&iVar0))
	{
		if (func_628(iVar0, 0))
		{
			if (func_479(iVar0) == -525676072)
			{
				_set_ped_component_disabled(Global_35, 1249071452, 0);
				func_781(Global_35, -2065815962, 0, 1108822547, 0, 1, 0, 0, 0, 0);
			}
			else
			{
				_set_ped_component_disabled(Global_35, 1606587013, 0);
			}
			if (!func_628(*uParam0, 0))
			{
				*uParam0 = iVar0;
			}
		}
	}
}

void func_766(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	Global_16 = 1;
	if (!network_is_game_in_progress())
	{
		func_876(0, 0);
		func_877(-1);
	}
	func_612(1);
	set_entity_invincible(Global_35, true);
	if (!func_752(*uParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!func_752(*uParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!func_752(*uParam0, 128))
	{
		iParam1 |= 32;
	}
	if (func_752(*uParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!func_752(*uParam0, 32768))
	{
		set_player_control(get_player_index(), false, iParam1, true);
	}
	if (!func_752(*uParam0, 1))
	{
		_0xf239400e16c23e08(0, 0);
	}
	if (!func_752(*uParam0, 65536))
	{
		set_everyone_ignore_player(player_id(), true);
	}
	if (!func_752(*uParam0, 4) && !func_752(*uParam0, 2))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_752(*uParam0, 2048))
	{
		func_878(0, 0);
	}
	if (func_752(*uParam0, 8))
	{
		clear_ped_tasks_immediately(Global_35, false, true);
	}
	if (func_752(*uParam0, 256))
	{
		_hide_ped_weapons(Global_35, 2, true);
	}
	if (func_752(*uParam0, 8192))
	{
		func_879();
	}
	if (!func_752(*uParam0, 262144))
	{
		set_ped_reset_flag(Global_35, 264, true);
	}
	if (!func_752(*uParam0, 512))
	{
		if (is_gameplay_hint_active())
		{
			stop_gameplay_hint(false);
		}
	}
	if (!func_752(*uParam0, 1024))
	{
		set_cinematic_mode_active(false);
	}
	if (iParam2 != 2)
	{
		set_ped_stealth_movement(Global_35, iParam2 == 1, 0, 0);
	}
	if (is_ped_on_foot(Global_35))
	{
		if (bParam6)
		{
			set_ped_desired_move_blend_ratio(Global_35, 0f);
			set_ped_desired_heading(Global_35, get_entity_heading(Global_35));
			set_entity_velocity(Global_35, 0f, 0f, 0f);
		}
		if (!func_752(*uParam0, 16))
		{
			iVar0 = create_itemset(true);
			bVar1 = false;
			find_all_attached_carriable_entities(Global_35, iVar0);
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < get_itemset_size(iVar0))
			{
				iVar6 = get_indexed_item_in_itemset(iVar2, iVar0);
				iVar7 = _get_entity_from_item(iVar6);
				if (!does_entity_exist(iVar7))
				{
				}
				else
				{
					bVar8 = false;
					if (is_entity_an_object(iVar7))
					{
						if (func_420() == iVar7)
						{
							bVar8 = true;
						}
					}
					vVar3.x = uParam3;
					vVar3.f_1 = uParam4;
					vVar3.f_2 = uParam5;
					if (func_58(vVar3))
					{
						vVar3 = { get_offset_from_entity_in_world_coords(Global_35, 0f, IntToFloat((-1 + iVar2)), 0f) };
						func_880(&vVar3, 50, 10, 0);
					}
					_0xed00d72f81cf7278(iVar7, 0, 1);
					set_entity_coords(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						func_495(2);
						func_494(-1);
						func_505(vVar3);
						func_882(func_881());
					}
					bVar1 = true;
				}
				iVar2++;
			}
			if (bVar1)
			{
				if (!_0x3ab6c7b0bb0df4b1(Global_35, -1))
				{
					clear_ped_tasks_immediately(Global_35, false, true);
					_0x2208438012482a1a(Global_35, false, false);
				}
			}
			destroy_itemset(iVar0);
		}
	}
	if (bParam6 && is_ped_on_mount(Global_35))
	{
		iVar9 = get_mount(Global_35);
		if (!is_entity_dead(iVar9))
		{
			clear_ped_tasks(iVar9, 1, 0);
			task_stand_still(iVar9, -1);
		}
	}
	if (!func_752(*uParam0, 4096))
	{
		func_549(Global_35);
	}
	if (!func_752(*uParam0, 1048576))
	{
		_0xdd1232b332cbb9e7(7, 1, 0);
	}
	if (!func_752(*uParam0, 2097152))
	{
		if (func_883() || _0x50f124e6ef188b22(Global_35))
		{
			func_884(1);
		}
	}
	if (Global_1359489->f_16 & 4194304 == 0)
	{
		Global_1359489->f_16 |= 4194304;
	}
	*uParam0 = 0;
}

void func_767(var uParam0, vector3 vParam1)
{
	uParam0->f_214 = { vParam1 };
}

void func_768(var uParam0)
{
	if (func_127(uParam0, 2048) && !func_58(func_885(uParam0)))
	{
		bVar0 = _does_volume_exist(uParam0->f_4);
		iVar1 = _get_last_mount(Global_35);
		if ((!is_entity_dead(iVar1) && ((bVar0 && is_entity_in_volume(iVar1, uParam0->f_4, true, 0)) || func_127(uParam0, -2147483648))) && get_mount(Global_35) != iVar1)
		{
			iVar2 = 2;
			if (is_ped_in_writhe(iVar1))
			{
				iVar2 |= 32;
			}
			func_59(iVar1, func_885(uParam0), func_886(uParam0), iVar2, 1073741824);
		}
		iVar3 = get_players_last_vehicle();
		if ((!is_entity_dead(iVar3) && ((bVar0 && is_entity_in_volume(iVar3, uParam0->f_4, true, 0)) || func_127(uParam0, -2147483648))) && !is_ped_in_vehicle(Global_35, iVar3, true))
		{
			func_59(iVar3, func_885(uParam0), func_886(uParam0), 2, 1073741824);
		}
	}
}

void func_769(var uParam0)
{
	if ((func_127(uParam0, 268435456) && !func_58(func_885(uParam0))) && is_ped_in_any_vehicle(Global_35, false))
	{
		iVar0 = get_vehicle_ped_is_using(Global_35);
		if (!is_entity_dead(iVar0))
		{
			vVar1 = { func_885(uParam0) };
			func_59(iVar0, vVar1, func_887(vVar1, Global_36, 1), 2, 1073741824);
			set_vehicle_on_ground_properly(iVar0, 0f);
			set_entity_velocity(iVar0, 0f, 0f, 0f);
			set_vehicle_forward_speed(iVar0, 0f);
		}
	}
}

void func_770(var uParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	uParam0->f_217 = { vParam1 };
	uParam0->f_220 = iParam4;
	if (func_58(vParam1))
	{
		func_182(uParam0, 2048, 1);
	}
	else
	{
		func_175(uParam0, 2048);
		if (bParam5)
		{
			func_175(uParam0, -2147483648);
		}
	}
}

void func_771(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if ((!is_entity_dead(&(uParam0->f_13[iVar0])) && is_entity_a_ped(&(uParam0->f_13[iVar0]))) && get_ped_index_from_entity_index(&(uParam0->f_13[iVar0])) != Global_35)
		{
			iVar1 = get_ped_index_from_entity_index(&(uParam0->f_13[iVar0]));
			if (is_ped_human(iVar1))
			{
				if (_0x6f1f0b17109309da(uParam0->f_156, &(uParam0->f_13[iVar0]->f_1)))
				{
					if (!func_547(uParam0->f_13[iVar0], 8))
					{
						if (func_422(func_421(iVar1, 0, 1, 0)))
						{
							if (!func_888(uParam0, get_current_ped_weapon_entity_index(iVar1, 0)))
							{
								set_current_ped_weapon(iVar1, -1569615261, true, 0, false, false);
							}
						}
						if (func_422(func_421(iVar1, 1, 1, 0)))
						{
							if (!func_888(uParam0, get_current_ped_weapon_entity_index(iVar1, 1)))
							{
								set_current_ped_weapon(iVar1, -1569615261, true, 1, false, false);
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_772(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bVar4 = func_165() != -1;
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
			func_546(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_889(iParam1, 29, bVar4, 1, 0);
			func_889(iParam1, 31, bVar4, 1, 0);
			func_889(iParam1, 30, bVar4, 1, 0);
			func_889(iParam1, 22, bVar4, 1, 0);
			func_889(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_858(32768) && func_890(1108822547, 8)) && func_891(10, iParam3))
	{
		func_892(iParam1, 0, 1);
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
			iVar3 = func_859(iVar1, 1);
			if (func_890(iVar3, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar1]->f_2[0] == -1802376732 || &uParam0->f_1[iVar1] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1];
				if (!func_891(iVar1, iParam3))
				{
				}
				else if ((func_890(iVar3, 6) || &uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1]) || uParam0->f_1[iVar1]->f_1 == 289238755)
				{
					if (!func_890(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_889(iParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1]->f_1 == 289238755)
						{
							Global_1946804->f_2456[iVar1]->f_1 = 289238755;
						}
						func_893(iVar3, 1, 6);
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
								func_889(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1]));
							}
							Global_1946804->f_2456[iVar1] = &uParam0->f_1[iVar1];
							Global_1946804->f_2456[iVar1]->f_1 = uParam0->f_1[iVar1]->f_1;
							if (func_890(iVar3, 1))
							{
								func_894(iVar3, 1, 6);
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

void func_773(var uParam0)
{
	StringCopy(&(uParam0->f_152), "", 32);
	func_895(uParam0);
	func_177(uParam0, 0f, 0f, 0f);
	func_896(uParam0);
}

void func_774(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		uParam0->f_13[iVar0]->f_11 = 0;
		iVar0++;
	}
}

void func_775(var uParam0)
{
	uParam0->f_8 = 0;
}

void func_776(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		func_450(uParam0->f_13[iVar0], iParam1);
		iVar0++;
	}
}

void func_777(bool bParam0)
{
	if (_does_anim_scene_exist(Global_43800))
	{
		if (check_ownership_of_anim_scene(Global_43800))
		{
			_delete_anim_scene(Global_43800);
		}
	}
	Global_43800 = -1;
	StringCopy(&Global_43802, "", 24);
	Global_16 = 0;
	if (bParam0)
	{
		func_749();
	}
	_0xa0cefcea390aab9b(0);
}

void func_778(int iParam0)
{
	func_897();
	Global_1911774->f_1 = get_game_timer();
	Global_1911774->f_2 = iParam0;
}

void func_779()
{
	if (!network_is_in_session())
	{
		return;
	}
	if (!network_is_in_mp_cutscene())
	{
		return;
	}
	network_set_in_mp_cutscene(false, false, 32, true);
}

void func_780(bool bParam0)
{
	if (bParam0)
	{
		Global_1945938->f_865 = (Global_1945938->f_865 - Global_1945938->f_865 & 2);
	}
	else
	{
		Global_1945938->f_865 |= 2;
	}
	func_898(bParam0);
}

int func_781(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_830(iParam1, 1, 0) };
		iParam3 = func_848(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_899(iParam1, iParam2, func_728(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_900(1, (func_165() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_728(iParam3, 1)])
			{
				func_730(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_858(32768) && iParam1 != &Global_1946804->f_57[func_728(iParam3, 1)])
			{
				func_901();
				func_730(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_730(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_902(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_730(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_189(0);
			func_903(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_730(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_782(int iParam0, int iParam1)
{
	Var0 = { func_830(iParam0, 0, 0) };
	Var5 = { func_834(iParam0, Var0, Var0.f_4, 0) };
	if (func_904(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	_0x65a5f70f4a292ebe(func_478(0), &Var5, iParam1);
}

int func_783(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_905(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

int func_784(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 5:
		case 6:
		case 8:
		case 10:
		case 23:
			return 1;
		case 4:
		case 9:
		case 20:
			return 2;
		case 7:
			if (func_678(45))
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
		case 11:
			if (func_678(45))
			{
				return 2;
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_785(int iParam0, int iParam1)
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

int func_786(int iParam0)
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

bool func_787(int iParam0)
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

bool func_788()
{
	return _unlock_is_unlocked(99890643);
}

bool func_789(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_792(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { func_834(iParam1, Var0, 1415981582, 0) };
	return func_906(Var29, 1);
}

bool func_790(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_792(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { func_834(iParam1, Var0, -2119169513, 0) };
	return func_906(Var29, 1);
}

void func_791(var uParam0)
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

bool func_792(int iParam0, var uParam1)
{
	if (!func_907(iParam0))
	{
		return false;
	}
	iVar0 = func_793(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1.f_9 = -1591664384;
	Var15 = { func_908(0) };
	if (!func_909(Var15, iVar0, &Var1, 0, 0))
	{
		return false;
	}
	if (!func_910(&Var1, uParam1))
	{
		return false;
	}
	return true;
}

int func_793(int iParam0)
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

bool func_794(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10)
{
	if (!func_836(bParam10))
	{
		return func_911(Param0, Param4, iParam8, 1, bParam9, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_912(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (func_913(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return true;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, iParam8))
	{
		return false;
	}
	if (!_0xdccaa7c3bfd88862(func_478(0), &Param0, &Param4, iParam8, Var0.f_11, &Var14))
	{
		return false;
	}
	if (bParam9)
	{
		if (!func_906(Var14, 1))
		{
		}
	}
	return true;
}

bool func_795(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	if (!func_836(bParam9))
	{
		return func_914(Param0, Param4, iParam8, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return false;
	}
	if (func_913(&Param0, &Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_912(Param0, &Var0, bParam9, 1) || !func_912(Param4, &Var14, bParam9, 1))
	{
		return false;
	}
	if (func_913(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return false;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, Var14.f_9) || !_inventory_fits_slot_id(Var14.f_4, Var0.f_9))
	{
		return false;
	}
	iVar28 = func_478(0);
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

bool func_796(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_915(get_entity_model(iParam0)))
	{
		return true;
	}
	if (decor_exist_on(iParam0, "HorseCompanion"))
	{
		return true;
	}
	return false;
}

bool func_797(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 5)
	{
		return true;
	}
	return false;
}

bool func_798()
{
	if (func_165() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

int func_799()
{
	return 1342496140;
}

int func_800()
{
	return 446670976;
}

int func_801()
{
	return 1;
}

int func_802()
{
	return -868094182;
}

int func_803()
{
	return 1074477367;
}

int func_804()
{
	return 1;
}

int func_805()
{
	return -997197050;
}

int func_806()
{
	return -2063289686;
}

int func_807()
{
	return 2;
}

int func_808()
{
	return -868094182;
}

int func_809()
{
	return 1074477367;
}

int func_810()
{
	return 1;
}

int func_811()
{
	return 1235275977;
}

int func_812()
{
	return 2030804811;
}

int func_813()
{
	return 1;
}

int func_814()
{
	return 1974379573;
}

int func_815()
{
	return 2024948086;
}

int func_816()
{
	return 1;
}

void func_817(int iParam0)
{
	if (func_916() < iParam0)
	{
		func_917(iParam0);
	}
}

int func_818(struct<4> Param0, int iParam4, int iParam5)
{
	Var0.f_9 = -1591664384;
	if (func_918(Param0, iParam4, &Var0, iParam5))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_819(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		iVar5 = func_479(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_919(iParam0);
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

struct<4> func_820()
{
	Var0 = { func_908(0) };
	return func_834(856287005, Var0, -218846335, 0);
}

void func_821(int iParam0, int iParam1)
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

bool func_822(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_823(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

char* func_824(int iParam0)
{
	if (iParam0 == 255)
	{
		if (func_920(37, iParam0))
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
	if (func_920(37, iParam0))
	{
		return _0xd8402b858f4ddd88(&((*Global_1108178)[iParam0]->f_12), get_length_of_literal_string(&((*Global_1108178)[iParam0]->f_12)));
	}
	return get_player_name(&(Global_1225639->f_120[iParam0]));
}

char* func_825(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_921(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

float func_826(int iParam0)
{
	iParam0 = func_306(iParam0);
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

float func_827(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

bool func_828(int iParam0, bool bParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (bParam1)
		{
			return is_ped_dead_or_dying(iParam0, true);
		}
		else
		{
			return is_entity_dead(iParam0);
		}
	}
	return true;
}

int func_829(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2051275045:
			return 14;
		case -2040275819:
			return 46;
		case -1874208704:
			return 5;
		case -1862464078:
			return 44;
		case -1692022104:
			return 63;
		case -1684458716:
			return 31;
		case -1678882891:
			return 36;
		case -1668922931:
			return 20;
		case -1648322231:
			return 72;
		case -1642335258:
			return 66;
		case -1632589543:
			return 43;
		case -1587546924:
			return 54;
		case -1559986688:
			return 7;
		case -1532979576:
			return 65;
		case -1414977761:
			return 48;
		case -1394723994:
			return 59;
		case -1341683964:
			return 21;
		case -1335291723:
			return 60;
		case -1268239471:
			return 68;
		case -1256711921:
			return 35;
		case -1248623443:
			return 26;
		case -1205468859:
			return 76;
		case -1155031950:
			return 25;
		case -1114682645:
			return 47;
		case -1092189504:
			return 69;
		case -1065026089:
			return 73;
		case -973332710:
			return 32;
		case -946772361:
			return 62;
		case -922193456:
			return 39;
		case -695701225:
			return 3;
		case -571427255:
			return 57;
		case -481967001:
			return 28;
		case -445211559:
			return 61;
		case -433615745:
			return 18;
		case -426171916:
			return 80;
		case -310473775:
			return 42;
		case -301101630:
			return 24;
		case -268604689:
			return 37;
		case -193269670:
			return 30;
		case -23947011:
			return 50;
		case 0:
			return 0;
		case 6418928:
			return 71;
		case 80515440:
			return 70;
		case 178615350:
			return 1;
		case 283037683:
			return 13;
		case 296923297:
			return 45;
		case 350498312:
			return 27;
		case 404503428:
			return 4;
		case 431390894:
			return 23;
		case 513932985:
			return 29;
		case 707545953:
			return 64;
		case 713940276:
			return 11;
		case 777603945:
			return 19;
		case 837028314:
			return 58;
		case 867156718:
			return 79;
		case 876535472:
			return 75;
		case 876797088:
			return 53;
		case 928493661:
			return 22;
		case 961676983:
			return 55;
		case 977450639:
			return 9;
		case 1018353621:
			return 17;
		case 1046468203:
			return 16;
		case 1071744295:
			return 8;
		case 1199580439:
			return 41;
		case 1200878026:
			return 52;
		case 1205492208:
			return 40;
		case 1237718549:
			return 49;
		case 1254970547:
			return 78;
		case 1295334688:
			return 51;
		case 1300659195:
			return 56;
		case 1484386316:
			return 77;
		case 1495063555:
			return 15;
		case 1593315648:
			return 6;
		case 1658153743:
			return 33;
		case 1744281750:
			return 12;
		case 1818898449:
			return 38;
		case 1842975347:
			return 34;
		case 1901494236:
			return 10;
		case 1950972546:
			return 67;
		case 2062813606:
			return 74;
		case 2094043703:
			return 2;
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

struct<5> func_830(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_908(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_922(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_834(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_923(bParam1) };
			if (bParam2 && func_924(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_832(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_832(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_833(iParam0, &Var5, 1728382685))
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
			Var0 = { func_925(bParam1) };
			switch (func_479(iParam0))
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
			if (func_926(iParam0, -1823706425))
			{
				Var0 = { func_834(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_926(iParam0, -1483207246))
			{
				Var0 = { func_834(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_912(Var0, &Var27, bParam1, 0))
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

int func_831(int iParam0, int iParam1)
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

bool func_832(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_904(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_833(int iParam0, var uParam1, int iParam2)
{
	if (func_927(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_834(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_628(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_478(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_835(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_928(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_912(*uParam1, &Var0, bParam6, 0))
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
	if (!func_836(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_478(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_836(bool bParam0)
{
	if (func_165() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_478(bParam0));
}

int func_837(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_929(iParam0))
	{
		return 0;
	}
	if (!func_836(0))
	{
		return 0;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_838(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_930(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

bool func_839(int iParam0)
{
	iVar0 = -1;
	if (func_931(iParam0, &iVar0))
	{
		return func_932(iVar0);
	}
	return false;
}

int func_840(int iParam0)
{
	if (func_933(iParam0))
	{
		return 0;
	}
	if (!func_6(Global_35, 0))
	{
		return 0;
	}
	iVar0 = -1;
	if (!func_931(iParam0, &iVar0))
	{
		return 0;
	}
	if (func_839(iParam0))
	{
	}
	if (_0x1e017404784aa6a3(Global_35, iParam0))
	{
		func_934(iParam0, 1);
		return 1;
	}
	return 0;
}

void func_841(int iParam0)
{
	if (!func_114(iParam0))
	{
		return;
	}
	iVar0 = -1;
	if (func_931(iParam0, &iVar0))
	{
		func_935(iVar0);
	}
}

int func_842(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_483(iVar0, 2))
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
				func_936(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_843(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_12(iParam0))
	{
		return;
	}
	iVar0 = func_109(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_844(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (bParam4 && !func_12(iParam0))
	{
		return;
	}
	iVar0 = func_109(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(10, sParam1, sParam2, sParam3));
}

int func_845(int iParam0)
{
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_848(iVar0);
}

bool func_846()
{
	if (Global_1946804->f_2793)
	{
		return true;
	}
	if (absi((get_game_timer() - Global_1946804->f_2791)) < 1250)
	{
		return true;
	}
	if (func_937())
	{
		return true;
	}
	if (_0xec7e480ff8bd0bed(Global_35))
	{
		return true;
	}
	return false;
}

bool func_847(int iParam0, int iParam1, bool bParam2)
{
	if (!func_628(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_922(iParam0);
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
		if (!func_938(iParam0, 1))
		{
			return false;
		}
	}
	return func_939(iParam0, 0, bParam2) >= iParam1;
}

int func_848(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_859(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

void func_849(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_850(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_721(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_851(int iParam0, int iParam1)
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

int func_852()
{
	iVar0 = 1549701178;
	switch (func_940())
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

int func_853()
{
	iVar0 = 614608656;
	switch (func_940())
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

int func_854()
{
	iVar0 = -1832677570;
	switch (func_940())
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

int func_855()
{
	iVar0 = 1623252156;
	switch (func_940())
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

bool func_856(int iParam0)
{
	switch (func_479(iParam0))
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

int func_857(int iParam0)
{
	return func_941(iParam0, &uVar0);
}

bool func_858(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

int func_859(int iParam0, int iParam1)
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

void func_860(int iParam0)
{
	func_894(iParam0, 8, 6);
}

void func_861(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_2377[func_728(iParam0, 1)])->f_1 = ((Global_1946804->f_2377[func_728(iParam0, 1)])->f_1 || iParam1);
}

void func_862(struct<4> Param0)
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
			if (func_544(Param0))
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
			func_545(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_546(8);
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
			if (func_544(Param0))
			{
				return;
			}
			func_545(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_546(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_903(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

void func_863(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 10)
	{
		return;
	}
	if (is_string_null_or_empty(&((*Global_1934603)[iParam0]->f_10)))
	{
		return;
	}
	*(*Global_1934603)[iParam0] = { Var0 };
	Global_1934603->f_161 = (Global_1934603->f_161 - 1);
	if (Global_1934603->f_161 < 0)
	{
		Global_1934603->f_161 = 0;
	}
}

float func_864(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

int func_865(float fParam0)
{
	return round(((fParam0 / 100f) * to_float(10)));
}

bool func_866()
{
	return _unlock_is_unlocked(-121456797);
}

char* func_867(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_942(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_942(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

bool func_868(int iParam0)
{
	return iParam0 != 0;
}

int func_869(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
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
		if (func_483(iVar0, 2))
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
		func_936(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_870(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_12(iParam0))
	{
		return;
	}
	iVar0 = func_109(iParam0);
	func_406(iVar0, bParam1);
}

void func_871(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2 && !func_12(iParam0))
	{
		return;
	}
	iVar0 = func_109(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_0xf4a5c4509bf923b1((*Global_1945938)[iVar0]->f_3, iParam1);
}

float func_872(int iParam0, bool bParam1)
{
	if (bParam1 && !func_12(iParam0))
	{
		return 0f;
	}
	iVar0 = func_109(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_get_mash_mode_progress((*Global_1945938)[iVar0]->f_3);
	}
	return _0x81801291806dbc50((*Global_1945938)[iVar0]->f_3);
}

bool func_873(var uParam0)
{
	Var0 = { func_184(uParam0) };
	Var8 = { func_190(uParam0) };
	return are_strings_equal(&Var0, &Var8);
}

void func_874(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_875(var uParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		return;
	}
	Var0 = { func_184(uParam0) };
	if ((!are_strings_equal(&Var0, sParam1) && _0xa9016536015de29d(uParam0->f_156, sParam1)) && _0x23e33cb9f4a3f547(uParam0->f_156, sParam1))
	{
		_0xae6ada8fe7e84acc(uParam0->f_156, sParam1);
	}
}

void func_876(int iParam0, bool bParam1)
{
	iVar0 = (50 * iParam0);
	iVar1 = (iVar0 + get_entity_health(Global_35));
	if (bParam1 && iVar0 < 0)
	{
		_0x835f131e7dc8f97a(Global_35, to_float(iVar0), 0, 0);
	}
	else if (iParam0 <= 0 || iVar1 > get_entity_max_health(Global_35, false))
	{
		_set_entity_health(Global_35, get_entity_max_health(Global_35, false), 0);
	}
	else
	{
		_set_entity_health(Global_35, iVar1, 0);
	}
}

void func_877(int iParam0)
{
	if (func_165() != -1)
	{
		return;
	}
	if (iParam0 == -1)
	{
		_restore_ped_stamina(Global_35, 100f);
	}
	else
	{
		iVar0 = 8;
		_charge_ped_stamina(Global_35, to_float((iParam0 * iVar0)));
	}
}

void func_878(bool bParam0, bool bParam1)
{
	iVar2 = 0;
	while (iVar2 < 29)
	{
		iVar4 = iVar2;
		if (get_current_ped_weapon(Global_35, &iVar3, false, iVar4, true))
		{
			if (func_422(iVar3) && _0x705be297eebdb95d(iVar3))
			{
				if (bParam0)
				{
					if (get_ammo_in_ped_weapon(Global_35, iVar3) < _get_weapon_clip_size(iVar3) * 4)
					{
						_add_ammo_to_ped_by_type(Global_35, _get_ammo_type_for_weapon(iVar3), (_get_weapon_clip_size(iVar3) * 4 - get_ped_ammo_by_type(Global_35, get_ped_ammo_type_from_weapon(Global_35, iVar3))), 752097756);
					}
				}
				iVar0 = get_ammo_in_ped_weapon(Global_35, iVar3);
				if (iVar0 > _get_weapon_clip_size(iVar3))
				{
					iVar1 = _get_weapon_clip_size(iVar3);
				}
				else
				{
					iVar1 = iVar0;
				}
				if (iVar1 > 0)
				{
					set_ammo_in_clip(Global_35, iVar3, iVar1);
				}
				iVar1 = 0;
				iVar0 = 0;
			}
		}
		iVar2++;
	}
	if (bParam1 && _0x21091b4beb6376ee(get_player_index()) == 0)
	{
		func_943(1);
	}
}

void func_879()
{
	iVar0 = func_421(Global_35, 9, 1, 0);
	if (func_422(iVar0))
	{
		return;
	}
	iVar0 = func_421(Global_35, 7, 1, 0);
	if (func_422(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 8, false, false);
	}
	iVar0 = func_421(Global_35, 0, 1, 0);
	if (func_422(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_421(Global_35, 1, 1, 0);
	if (func_422(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_421(Global_35, 18, 1, 0);
	if (func_422(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_944();
	if (func_422(iVar0))
	{
		if (has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_533(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_945(6291456, 0);
	if (func_422(iVar0))
	{
		if (!has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_533(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
	}
}

int func_880(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_376(*uParam0, 0f, 0f, 0f))
	{
		return 1;
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
		return 1;
	}
	if (bVar2 && bVar3)
	{
		return 0;
	}
	uParam0->f_2 = uVar0;
	return 1;
}

var func_881()
{
	return &Global_1899515;
}

void func_882(var uParam0)
{
	Global_40.f_1095.f_3054.f_2 = uParam0;
}

bool func_883()
{
	return (func_946() || func_121());
}

void func_884(bool bParam0)
{
	if (bParam0)
	{
		Global_1935436->f_9 = 0f;
	}
	Global_1935436->f_8 = 0f;
	Global_1935436->f_12.f_1 = 0f;
	Global_1935436->f_12 = 0f;
	Global_1935436->f_12.f_3 = 0f;
	Global_1935436->f_12.f_2 = 0f;
	Global_1935436->f_12.f_4 = 0;
	_0x3c4ae8506638c7e2(get_player_index(), 1);
	_0x8f44ebb3ba8f6d44(get_player_index(), 0);
	_0x06d26a96ca1bca75(Global_35, 10, 0f, 0);
	set_ped_is_drunk(Global_35, false);
	_0x406ccf555b04fad3(Global_35, 0, 0f);
	func_947(0f);
	Global_1935436->f_11 = 1;
	if (func_798())
	{
		set_ambient_voice_name(Global_35, "ARTHUR");
	}
	else
	{
		set_ambient_voice_name(Global_35, "JOHN_PLAYER");
	}
	if (animpostfx_is_running("PlayerDrunk01"))
	{
		func_948();
	}
	if (is_gameplay_cam_shaking())
	{
		stop_gameplay_cam_shaking(false);
	}
}

Vector3 func_885(var uParam0)
{
	return uParam0->f_217;
}

float func_886(var uParam0)
{
	return uParam0->f_220;
}

float func_887(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

bool func_888(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (does_entity_exist(&(uParam0->f_13[iVar0])) && &uParam0->f_13[iVar0] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_889(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	iVar2 = func_859(iParam1, 1);
	if (!bParam2 && iVar2 == 1367443060)
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_949(iParam4);
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

bool func_890(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_728(iParam0, 1)])->f_10 && iParam1) != 0;
}

bool func_891(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

void func_892(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 10;
	if (func_890(1108822547, 6))
	{
		if (bParam2)
		{
			func_889(iParam0, iVar0, func_165() != -1, 0, 0);
			func_893(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		_0xbc6df00d7a4a6819(iParam0, Global_1946804->f_2776.f_1, &(Global_1946804->f_2776.f_3[0]), &(Global_1946804->f_2776.f_3[1]), &(Global_1946804->f_2776.f_3[2]), Global_1946804->f_2776.f_8, Global_1946804->f_2776.f_9, Global_1946804->f_2776.f_10, Global_1946804->f_2776.f_11);
		func_894(1108822547, 1, 6);
	}
	Global_1946804->f_857++;
	if (!bParam1)
	{
		return;
	}
	_update_ped_variation(iParam0, false, true, true, true, false);
}

void func_893(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_728(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_728(iParam0, 1)])->f_10 || iParam1);
}

void func_894(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_728(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_728(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_728(iParam0, 1)])->f_10 && iParam1));
}

void func_895(var uParam0)
{
	uParam0->f_166 = { Var0 };
}

void func_896(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(uParam0->f_174[iVar0], "", 64);
		iVar0++;
	}
}

void func_897()
{
	Global_1911774 = 1;
}

void func_898(bool bParam0)
{
	Global_1935496->f_18 = !bParam0;
}

bool func_899(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_950();
	if (iParam2 == 39)
	{
		Var0 = { func_830(iParam0, 1, 0) };
		iParam2 = func_728(func_848(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_851(iParam0, 866047851) && func_951(&(Global_1946804->f_1378)) >= 2)
	{
		return false;
	}
	if ((func_858(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2])
	{
		func_860(func_859(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_952(iParam2);
	func_953(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2] != &Global_1946804->f_57[iParam2] && Global_1946804->f_57[iParam2]->f_1 > 1)
	{
		func_954(Global_1946804->f_1378.f_1[iParam2], 4, 6);
		func_954(Global_1946804->f_1497.f_1[iParam2], 4, 6);
	}
	func_955(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804->f_1378.f_1[iParam2]->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2] = iParam0;
	Global_1946804->f_1378.f_1[iParam2]->f_1 = func_956(iParam0, iParam2, iParam1, func_165() != -1);
	if (bParam4)
	{
		func_957(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_957(&(Global_1946804->f_1378), 1, 0);
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
				func_894(func_859(&(Global_1946804->f_2589.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_900(bool bParam0, bool bParam1, bool bParam2)
{
	func_958(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

void func_901()
{
	func_959(&(Global_1946804->f_2776));
	func_960(32768);
	func_894(1108822547, 8, 6);
}

int func_902(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_728(iParam0, 1);
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

void func_903(int iParam0, int iParam1, int iParam2)
{
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_373(Var0);
}

int func_904(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_628(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_834(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_478(bParam6), &Var0, 0);
	return uVar4;
}

void func_905(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_961(iParam1))
		{
			func_962(iParam0, 41788943);
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
			func_963(iParam0, 0, 1);
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
			func_964(iParam0, 0);
			bVar0 = true;
		}
		func_785(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

bool func_906(struct<4> Param0, int iParam4)
{
	if (!func_836(0))
	{
		return func_965(Param0, iParam4, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_912(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!_0x734311e2852760d0(func_478(0), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_907(int iParam0)
{
	iVar0 = func_793(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1 = { func_908(0) };
	if (func_966(&Var1, iVar0, 0) > 0)
	{
		return true;
	}
	return false;
}

struct<4> func_908(bool bParam0)
{
	return func_834(1328661203, func_967(), -1591664384, bParam0);
}

bool func_909(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	iVar0 = func_478(bParam7);
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

bool func_910(var uParam0, var uParam1)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (!_0x025a1b1fb03fbf61(func_478(0), uParam0, uParam1, 29, 1))
	{
		return false;
	}
	return true;
}

int func_911(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10, bool bParam11)
{
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	if (!func_912(Param0, &Var0, 1, 0))
	{
		return -1;
	}
	if (func_913(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return -1;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, iParam8))
	{
		return -1;
	}
	iVar14 = func_904(Var0.f_4, Param4, iParam8, 0);
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
	Var16 = { func_968(&Var0) };
	Var16.f_4 = { Param4 };
	Var16.f_11 = iParam8;
	Var16.f_10 = bParam10;
	iVar32 = func_969(1168099063, &Var16, bParam9);
	if (iVar32 == -1)
	{
		return -1;
	}
	return iVar32;
}

bool func_912(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_478(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

bool func_913(var uParam0, bool bParam1)
{
	if (((*uParam0 == *bParam1 && uParam0->f_1 == bParam1->f_1) && uParam0->f_2 == bParam1->f_2) && uParam0->f_3 == bParam1->f_3)
	{
		return true;
	}
	return false;
}

int func_914(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return -1;
	}
	if (func_913(&Param0, &Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_912(Param0, &Var0, 1, 0) || !func_912(Param4, &Var14, 1, 0))
	{
		return -1;
	}
	if (func_913(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return -1;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, Var14.f_9) || !_inventory_fits_slot_id(Var14.f_4, Var0.f_9))
	{
		return -1;
	}
	Var28 = { func_968(&Var0) };
	Var28.f_4 = { Var14.f_5 };
	Var28.f_11 = Var14.f_9;
	Var28.f_10 = (Var14.f_10 || iParam8);
	Var44 = { func_968(&Var14) };
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
					func_970(iVar60, 1);
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
		iVar60 = func_969(1168099063, &Var28, 0);
		iVar60 = func_969(1168099063, &Var44, 0);
	}
	return iVar60;
}

bool func_915(int iParam0)
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

int func_916()
{
	return Global_40.f_1095.f_3135;
}

void func_917(int iParam0)
{
	Global_40.f_1095.f_3135 = iParam0;
}

bool func_918(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x22e590f108289a9d(func_478(bParam6), &uParam0, iParam4, &Var0))
	{
		return false;
	}
	if (!func_912(Var0, uParam5, bParam6, 0))
	{
		return false;
	}
	return true;
}

int func_919(int iParam0)
{
	if (!func_628(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_479(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return _item_database_get_has_slot_count(iVar0);
}

bool func_920(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_971(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_972())
	{
		return func_971(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_971(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

char* func_921(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

int func_922(int iParam0)
{
	if (!func_628(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_923(bool bParam0)
{
	iVar0 = func_478(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_834(923904168, func_908(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_834(923904168, func_908(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_834(923904168, func_908(bParam0), -740156546, 0);
}

bool func_924(int iParam0, bool bParam1)
{
	if (func_479(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_678(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_925(bool bParam0)
{
	iVar0 = func_478(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_834(271701509, func_908(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_834(271701509, func_908(bParam0), 12999093, 0);
}

bool func_926(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_479(iParam0);
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

bool func_927(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_478(0);
	*uParam1 = { func_834(iParam0, func_923(0), iParam3, 0) };
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

bool func_928(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

bool func_929(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_930(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_931(int iParam0, int iParam1)
{
	*iParam1 = 0;
	while (*iParam1 < 15)
	{
		if (&Global_40.f_4237[*iParam1] == iParam0)
		{
			return true;
		}
		*iParam1++;
	}
	*iParam1 = -1;
	return false;
}

bool func_932(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return false;
	}
	return is_bit_set(&Global_1347701, iParam0);
}

bool func_933(int iParam0)
{
	if (!func_931(iParam0, &iVar0))
	{
		return false;
	}
	return Global_40.f_4237[iVar0]->f_2;
}

void func_934(int iParam0, bool bParam1)
{
	iVar0 = -1;
	if (func_931(iParam0, &iVar0))
	{
		func_973(iVar0, bParam1);
	}
}

void func_935(int iParam0)
{
	func_974(Global_40.f_4237[iParam0]);
	if (func_114(&(Global_40.f_4237[iParam0])))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (iVar0 < iParam0)
		{
		}
		else if (iVar0 < 14 && func_114(&(Global_40.f_4237[iVar0 + 1])))
		{
			Global_40.f_4237[iVar0] = &Global_40.f_4237[iVar0 + 1];
			Global_40.f_4237[iVar0]->f_1 = (Global_40.f_4237[iVar0 + 1])->f_1;
			Global_40.f_4237[iVar0]->f_2 = (Global_40.f_4237[iVar0 + 1])->f_2;
			func_973(iVar0, func_932(iVar0 + 1));
			func_292(Global_40.f_4237[iVar0 + 1]);
			func_973(iVar0 + 1, 0);
		}
		iVar0++;
	}
}

void func_936(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_406(iParam0, 1);
	func_407(iParam0, 1);
	func_408(iParam0, 128);
}

bool func_937()
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

bool func_938(int iParam0, int iParam1)
{
	if (!func_628(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_975(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_976("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_977(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_422(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_978(iVar1);
				return true;
			}
			iVar3++;
		}
		func_978(iVar1);
	}
	return false;
}

int func_939(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_628(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_922(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_975(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_979(iParam0, 0);
	}
	uVar2 = _0xe787f05dfc977bde(func_478(bParam2), iParam0, 0);
	return uVar2;
}

int func_940()
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
		else if ((((is_weapon_valid(iVar0) && _is_weapon_two_handed(iVar0)) && !func_980(iVar0)) && !_is_ped_getting_into_a_mount_seat(Global_35, true)) && !(is_ped_in_any_vehicle(Global_35, false) && !_0xa24c1d341c6e0d53(1, 0, 0)))
		{
			return 3;
		}
		else if (iVar0 == -160924582)
		{
			return 1;
		}
		else if ((is_weapon_valid(iVar0) && func_980(iVar0)) || iVar0 == 2055893578)
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

int func_941(int iParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_1946804->f_2657.f_19)
	{
		if (iParam0 == &Global_1946804->f_2657[*uParam1])
		{
			return 1;
		}
		*uParam1++;
	}
	return 0;
}

char* func_942(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_943(int iParam0)
{
	_0x51345ae20f22c261(player_id(), to_float(iParam0 * 14), 0, 0, 0);
}

int func_944()
{
	if (!func_422(Global_1935630->f_45))
	{
		return -1569615261;
	}
	return Global_1935630->f_45;
}

int func_945(int iParam0, int iParam1)
{
	return func_981(&uVar0, iParam0, iParam1);
}

bool func_946()
{
	return &Global_1935436 == 1;
}

void func_947(float fParam0)
{
	func_982(10, fParam0);
}

void func_948()
{
	animpostfx_stop("PlayerDrunk01");
	Global_1935436->f_12 = 0f;
}

int func_949(int iParam0)
{
	iVar0 = func_479(iParam0);
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

void func_950()
{
	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		iVar0++;
	}
}

int func_951(var uParam0)
{
	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_851(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_851(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_851(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_851(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_851(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_851(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

void func_952(int iParam0)
{
	func_983(&(Global_1946804->f_2589), iParam0);
}

void func_953(int iParam0, int iParam1)
{
	func_984(&(Global_1946804->f_2589), iParam0, iParam1);
}

void func_954(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_955(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_479(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_891(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_953(iVar1, iVar3);
		}
	}
	if (func_985(-1586649372) && func_891(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_953(iVar1, iVar3);
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
						func_953(iVar1, iVar3);
					}
				}
			}
			func_986(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_986(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_953(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_986(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_953(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_953(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_986(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_986(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_953(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_986(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_953(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_953(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_479(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_953(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_987(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_479(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_953(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_851(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_953(iVar1, iVar3);
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
						func_953(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_987(&(Global_1946804->f_1497.f_1[iVar1])) || func_851(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_953(iVar1, iVar3);
					}
				}
			}
			switch (func_479(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_479(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_953(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_479(&(uParam0->f_1[iVar1])) || func_851(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_953(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_956(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = func_988(0);
	if (iParam2 != 0 && func_989(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_990(iParam0, func_859(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_957(var uParam0, bool bParam1, int iParam2)
{
	bVar6 = func_165() != -1;
	iVar7 = func_988(0);
	if (func_858(32768))
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
			iVar5 = func_859(iVar0, 1);
			if (func_890(iVar5, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
			{
			}
			else if (func_890(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
			{
			}
			else
			{
				iVar4 = func_991(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_992(uParam0);
				if (iVar3 > 0)
				{
					if (!func_858(524288))
					{
						func_546(524288);
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
							iVar5 = func_859(iVar0, 1);
							if (func_890(iVar5, 8))
							{
							}
							else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
							{
							}
							else if (func_890(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
							{
							}
							else
							{
								iVar4 = func_991(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0] = &Global_1946804->f_57[iVar0];
									uParam0->f_1[iVar0]->f_1 = 0;
									if (bParam1)
									{
										func_953(iVar0, iParam2);
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
					func_960(524288);
				}
			}
		}
	}
}

void func_958(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_993(&(uParam0->f_2[iVar0]), bParam1, bParam2);
		iVar0++;
	}
	if (func_165() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_994(2, Global_26796.f_776)) || Global_1946804->f_1497 != func_995(0))
		{
			if (Global_40.f_7157[Global_40.f_7729] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729] = (&Global_40.f_7157[Global_40.f_7729] - Global_40.f_7157[Global_40.f_7729] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729] |= 4096;
				Global_1946804->f_1497 = func_995(Global_40.f_7729);
				Global_1946804->f_1378 = func_995(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_996(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_997(0, 1);
	}
}

void func_959(var uParam0)
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

void func_960(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

bool func_961(int iParam0)
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

void func_962(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_144(iParam0, iParam1))
		{
			if (func_342(iParam0, iParam1))
			{
				if (func_343(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_344(iParam0);
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

void func_963(int iParam0, int iParam1, bool bParam2)
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

void func_964(int iParam0, bool bParam1)
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

int func_965(struct<4> Param0, int iParam4, bool bParam5)
{
	iVar0 = -1;
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_912(Param0, &Var1, 1, 0))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_922(Var1.f_4);
	if (iVar15 == -1784221369)
	{
		Var16 = { func_998(Param0, 1) };
		Var16.f_10 = iParam4;
		iVar0 = func_999(-1230526146, &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -1037537535)
	{
		Var44 = { func_1000(Param0, 1) };
		Var44.f_10 = iParam4;
		iVar0 = func_1001(-1230526146, &Var44, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var61 = { func_968(&Var1) };
		Var61.f_10 = iParam4;
		iVar0 = func_969(-1230526146, &Var61, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_966(var uParam0, int iParam1, bool bParam2)
{
	return _0x033ee4b89f3ac545(func_478(bParam2), uParam0, iParam1);
}

struct<4> func_967()
{
	return Var0;
}

struct<16> func_968(var uParam0)
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

int func_969(int iParam0, var uParam1, bool bParam2)
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
					func_970(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_970(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16))
	{
		func_970(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_970(int iParam0, int iParam1)
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
	func_1002(iParam0, iParam1);
}

bool func_971(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_972()
{
	return Global_1109400->f_245;
}

void func_973(int iParam0, bool bParam1)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return;
	}
	if (bParam1)
	{
		if (!is_bit_set(&Global_1347701, iParam0))
		{
			set_bit(Global_1347701, iParam0);
		}
	}
	else if (is_bit_set(&Global_1347701, iParam0))
	{
		clear_bit(Global_1347701, iParam0);
	}
}

void func_974(var uParam0)
{
	if ((func_6(Global_35, 0) && func_839(*uParam0)) && _0x7c8aa850617651d9(Global_35, *uParam0))
	{
		func_1003(*uParam0);
	}
	if ((!func_6(Global_35, 0) || !func_839(*uParam0)) || !_0x7c8aa850617651d9(Global_35, *uParam0))
	{
		func_292(uParam0);
	}
}

int func_975(int iParam0, int iParam1)
{
	if (!func_628(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_922(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_851(iParam0, 1399091007))
	{
		func_1004(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_976(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_478(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_977(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_978(int iParam0)
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

int func_979(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_1005(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1006(&Var0, func_923(0));
	}
	if (!func_1007(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_978(iVar14);
	return uVar15;
}

bool func_980(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

int func_981(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_1008(iParam1, 128);
	if (func_976("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		Var23.f_9 = -1591664384;
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_977(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_422(Var4.f_4))
			{
			}
			else if (!_0x705be297eebdb95d(Var4.f_4) && !_is_weapon_bow(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!func_1008(iParam1, 512) && func_927(Var4.f_4, &uVar19, &Var23, 1728382685)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || _0xf29a186ed428b552(Global_35, Var4.f_4))
			{
				if ((((((_is_weapon_two_handed(Var4.f_4) || func_980(Var4.f_4)) && (!_is_weapon_shotgun(Var4.f_4) || func_1008(iParam1, 16))) && (!_is_weapon_sniper(Var4.f_4) || func_1008(iParam1, 4))) && (!func_980(Var4.f_4) || func_1008(iParam1, 8))) && (!_is_weapon_repeater(Var4.f_4) || !func_1008(iParam1, 8388608))) && (!_is_weapon_rifle(Var4.f_4) || !func_1008(iParam1, 1048576)))
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
		func_978(iVar1);
	}
	if (is_weapon_valid(iVar0))
	{
	}
	else if (!func_1008(iParam1, 512) && !func_1008(iParam1, 1024))
	{
		iParam1 |= 512;
		return func_981(uParam0, iParam1, iParam2);
	}
	else if (func_1008(iParam1, 256))
	{
		iVar0 = -1569615261;
	}
	return iVar0;
}

void func_982(int iParam0, float fParam1)
{
	Global_40.f_11095.f_11[iParam0] = fParam1;
	if (iParam0 == 12)
	{
		bVar1 = fParam1 != 0f;
		sVar2 = func_942(fParam1 < 0f, "rpg_cold", "rpg_hot");
		func_1009(1, bVar1, 1, sVar2);
		func_1010(!bVar1, fParam1 < 0f, bVar1);
		iVar0 = func_1011(ceil(&(Global_40.f_11095.f_11[iParam0])));
		set_attribute_points(Global_35, iParam0, iVar0);
		func_441();
	}
	else if (iParam0 == 10)
	{
		iVar0 = func_1011(ceil(&(Global_40.f_11095.f_11[iParam0])));
		set_attribute_points(Global_35, iParam0, iVar0);
	}
	else if (iParam0 == 16)
	{
		iVar0 = func_1011(ceil(&(Global_40.f_11095.f_11[iParam0])));
		set_attribute_points(Global_35, iParam0, iVar0 * 100);
	}
	else if (iParam0 == 13)
	{
	}
}

void func_983(var uParam0, int iParam1)
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
			if ((func_1012(uParam0->f_2[iVar0], 2) || &uParam0->f_2[iVar0] == iParam1) || &uParam0->f_2[iVar0] == 39)
			{
				*uParam0->f_2[iVar0] = { Var2 };
			}
			else
			{
				if (func_1012(uParam0->f_2[iVar0], 1))
				{
					func_1013(uParam0->f_2[iVar0], 2, 6);
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

void func_984(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_1014(uParam0, 1))
	{
		func_1015(uParam0, 1);
	}
	uParam0->f_2[*uParam0]->f_1 = iParam2;
	uParam0->f_2[*uParam0] = iParam1;
	*uParam0++;
}

bool func_985(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_728(iParam0, 1)] != &Global_1946804->f_57[func_728(iParam0, 1)];
}

void func_986(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_953(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_953(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2]->f_1 == -1333118809 || uParam0->f_1[iVar2]->f_1 == -1158926300)
	{
		uParam0->f_1[iVar2]->f_1 = 1155669136;
		if (bParam3)
		{
			func_953(iVar2, iVar0);
		}
	}
}

bool func_987(int iParam0)
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

int func_988(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_1016();
	}
	iVar0 = 0;
	if (iParam0 == 24043185)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_989(int iParam0, int iParam1, int iParam2, bool bParam3)
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

bool func_990(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

int func_991(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam0 == &Global_1946804->f_57[func_728(iParam1, 1)])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_858(524288))
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

int func_992(var uParam0)
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

void func_993(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*Global_1946804->f_1497.f_1[iParam0] = { *Global_1946804->f_1378.f_1[iParam0] };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_165() == -1)
	{
		func_1017(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_26796.f_776);
	}
	else
	{
		func_1018(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

bool func_994(int iParam0, int iParam1)
{
	if (func_165() == -1)
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

int func_995(int iParam0)
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

void func_996(int iParam0, bool bParam1, int iParam2)
{
	func_1019(&(Global_1946804->f_1378), iParam0);
	func_1020(2, iParam0, 6);
	if (bParam1)
	{
		func_997(0, 1);
	}
}

void func_997(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1021(0);
	}
	if (bParam0)
	{
		func_546(8);
		func_546(512);
	}
	else
	{
		func_546(8);
		func_546(16);
	}
}

struct<28> func_998(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var28.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_478(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_968(&Var28) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_999(int iParam0, var uParam1, bool bParam2)
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
					func_970(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_970(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 28))
	{
		func_970(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<17> func_1000(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_478(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_968(&Var17) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_1001(int iParam0, var uParam1, bool bParam2)
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
					func_970(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_970(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 17))
	{
		func_970(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_1002(int iParam0, int iParam1)
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

void func_1003(int iParam0)
{
	if (does_entity_exist(Global_35))
	{
		_0x2b4ce170de09f346(Global_35, iParam0);
	}
	func_934(iParam0, 0);
}

void func_1004(int iParam0, var uParam1, var uParam2)
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

struct<14> func_1005(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_1006(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_1007(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_478(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_1008(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_1009(int iParam0, bool bParam1, bool bParam2, char* sParam3)
{
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_8, bParam1);
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_7, bParam2);
	_databinding_write_data_string(Global_1955569->f_5.f_2[iParam0]->f_9, sParam3);
}

void func_1010(bool bParam0, bool bParam1, bool bParam2)
{
	sVar0 = func_867(0, 1, bParam0, bParam1);
	sVar0 = _create_var_string(2, sVar0);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_12[1]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[1]), bParam2);
	if (bParam0)
	{
		_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[1]), false);
	}
	else if (bParam1)
	{
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[1]), "rpg_cold");
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[1]), "pausemenu_player");
		_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[1]), true);
	}
	else
	{
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[1]), "rpg_hot");
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[1]), "pausemenu_player");
		_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[1]), true);
	}
}

int func_1011(int iParam0)
{
	fVar0 = (to_float(iParam0 + 100) / 200f);
	return ceil((100f * fVar0));
}

bool func_1012(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1013(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_1014(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1015(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

int func_1016()
{
	return Global_1946804->f_1;
}

void func_1017(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_1018(var uParam0, int iParam1, int iParam2)
{
	*Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_1019(var uParam0, int iParam1)
{
	if (func_165() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1]->f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_1017(uParam0->f_1[iVar0], iVar0, iParam1);
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
		func_1018(uParam0->f_1[iVar0], iVar0, iParam1);
		iVar0++;
	}
}

void func_1020(int iParam0, int iParam1, int iParam2)
{
	if (func_165() == -1)
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

void func_1021(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

