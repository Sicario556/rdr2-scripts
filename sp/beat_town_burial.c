void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_766 = 1;
	iLocal_769 = -1;
	iLocal_914 = func_1(1, 0, 0);
	iLocal_943 = 1;
	vLocal_995 = { 7f, 7f, 7f };
	sLocal_998 = "";
	sLocal_999 = "";
	sLocal_1000 = "TB";
	Local_87.f_3 = func_2(&vScriptParam_0);
	Local_87.f_43 = func_3();
	if (has_force_cleanup_occurred(523))
	{
		func_4();
	}
	Local_87.f_161 = func_5(vScriptParam_0.z, 2);
	uLocal_763 = uVar761;
	func_6(&Local_87, 1);
	func_7();
	func_8(&(Local_87.f_5), 0);
	func_9(&(Local_87.f_5), 0);
	func_10(&(Local_87.f_5), 1);
	func_11(&(Local_87.f_5), 1);
	func_12(&(Local_87.f_5), 1);
	func_13(&(Local_87.f_5), 1);
	func_14(&(Local_87.f_5), 1);
	func_15(&(Local_87.f_5), 1);
	func_16(&(Local_87.f_5), 20f);
	func_17(&(Local_87.f_5), 50);
	func_18(&(Local_87.f_5), 1);
	func_19(&(Local_87.f_5), 1.25f);
	func_20(&(Local_87.f_5), 5000);
	while (true)
	{
		switch (iVar764)
		{
			case 1:
				if (func_21(&Local_87, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
				{
					func_22(&Local_87, &uLocal_772, &uLocal_917);
					iLocal_766 = 0;
				}
				else if (Local_87.f_160)
				{
					func_4();
				}
				break;
			case 0:
				if (func_23())
				{
					settimera(0);
					func_24(&Local_819);
					func_25(&Local_875);
					iLocal_766 = 3;
				}
				break;
			case 3:
				if (func_26())
				{
					if (func_27() && func_28())
					{
						func_29(&(uLocal_731[0]), &(Local_281[0]->f_23), 0);
						func_29(&(uLocal_731[1]), &(Local_281[1]->f_23), 0);
						func_30();
						func_31();
						func_32(&uLocal_912, Local_87.f_51, 14.75f, 1, 18, 0);
						func_33(&uLocal_910, Local_87.f_51, 20f);
						func_34(&uLocal_911, Local_87.f_51, 20f, 0, 0);
						func_35();
						func_36(&(uLocal_731[0]), &Local_87, 0);
						func_36(&(uLocal_731[1]), &Local_87, 0);
						set_ped_config_flag(&(uLocal_731[1]), 317, true);
						set_ped_config_flag(&(uLocal_731[0]), 317, true);
						func_37(&(uLocal_731[0]), 1142025875);
						if (iLocal_86 == 2)
						{
						}
						else
						{
							_0x18ff3110cf47115d(&(uLocal_731[2]), 7, 0);
							_0x18ff3110cf47115d(&(uLocal_731[2]), 19, 1);
							set_ped_relationship_group_hash(&(uLocal_731[2]), 1269650476);
							set_ped_config_flag(&(uLocal_731[2]), 6, true);
							_0xffebe5aa96bc2e4e(&(uLocal_731[2]), 195938434, 1);
							func_38();
						}
						iLocal_766 = 4;
					}
				}
				break;
			case 4:
				if (!func_39(&Local_87, &uLocal_731, iLocal_86, 0, 1, 0, 1, 0))
				{
					func_4();
				}
				set_ped_reset_flag(&(uLocal_731[0]), 202, true);
				if (func_40())
				{
					if (!Local_87.f_46)
					{
						func_41(uLocal_731[0], &iLocal_798, &Local_819, 1, 1);
						func_41(uLocal_731[1], &iLocal_854, &Local_875, 1, 1);
						iLocal_765 = 4;
						Local_87.f_46 = 1;
					}
				}
				if (!Local_87.f_46)
				{
					if (!bVar942)
					{
						if (func_42())
						{
							iLocal_944 = 1;
						}
					}
					if (bVar942 && !bVar944)
					{
						if (func_43())
						{
							iLocal_946 = 1;
							iLocal_765 = 2;
						}
					}
				}
				if (!bVar964)
				{
					if (func_44(&(uLocal_731[0]), 0))
					{
						func_45(3, 1142025875, 0, 0, 0, 0, 1065353216, 0);
						iLocal_966 = 1;
					}
				}
				if (func_46())
				{
					Local_87.f_50 = 1;
					func_4();
				}
				if (func_47(&Local_87, &uLocal_731, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0))
				{
					func_4();
				}
				func_48(&Local_87, &(uLocal_731[0]), 0f, 0f, 0f, 40);
				break;
		}
		wait(Local_87.f_158);
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

int func_3()
{
	return Global_1894899->f_2;
}

void func_4()
{
	if (_does_scenario_point_exist(iVar978))
	{
		_delete_scenario_point(iVar978);
	}
	if (_does_scenario_point_exist(iVar979))
	{
		_delete_scenario_point(iVar979);
	}
	if (_does_scenario_point_exist(iVar980))
	{
		_delete_scenario_point(iVar980);
	}
	if (_does_scenario_point_exist(iVar981))
	{
		_delete_scenario_point(iVar981);
	}
	if (_does_scenario_point_exist(iVar982))
	{
		_delete_scenario_point(iVar982);
	}
	if (_does_scenario_point_exist(iVar983))
	{
		_delete_scenario_point(iVar983);
	}
	if (iVar992 != 0)
	{
		_0xd2b9c78537ed5759(iVar992);
	}
	if (func_49(&(uLocal_731[0]), 0, 1))
	{
		if (!is_ped_active_in_scenario(&(uLocal_731[0]), 0))
		{
			_task_use_nearest_scenario_to_coord(&(uLocal_731[0]), vLocal_14, 100f, 0, false, false, false, false);
		}
	}
	if (func_49(&(uLocal_731[0]), 0, 1))
	{
		set_ped_keep_task(&(uLocal_731[0]), true);
	}
	if (!Local_87.f_48 && !Local_87.f_44)
	{
		_0x39a2fc5af55a52b1(&(uLocal_731[2]), -1);
	}
	func_50(&iLocal_919);
	func_51(&Local_87, &uLocal_731, &uLocal_969, iLocal_86, uVar770, uVar915, 0, 1, 0, 1);
	func_52();
	func_53(&uLocal_912, 1);
	func_54(Global_35);
	iLocal_947 = 0;
	terminate_this_thread();
}

bool func_5(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_6(var uParam0, bool bParam1)
{
	func_55(&(uParam0->f_5));
	if (uParam0->f_161)
	{
		func_56("BEAT_LAUNCHED", 4000, 0, 1, 0, 0, -1, -1, 0);
	}
	allow_sonar_blips(bParam1);
}

void func_7()
{
	Local_739.f_3[0] = 3f;
	Local_739.f_3[1] = 3f;
}

void func_8(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_57(&(uParam0->f_1), 2048);
	}
	else
	{
		func_58(&(uParam0->f_1), 2048);
	}
}

void func_9(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_58(iParam0, 256);
	}
	else
	{
		func_57(iParam0, 256);
	}
}

void func_10(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_57(&(uParam0->f_1), 256);
	}
	else
	{
		func_58(&(uParam0->f_1), 256);
	}
}

void func_11(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_57(&(uParam0->f_1), 1);
	}
	else
	{
		func_58(&(uParam0->f_1), 1);
	}
}

void func_12(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_57(&(uParam0->f_1), 8);
	}
	else
	{
		func_58(&(uParam0->f_1), 8);
	}
}

void func_13(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_58(iParam0, 1024);
	}
	else
	{
		func_57(iParam0, 1024);
	}
}

void func_14(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_57(&(uParam0->f_1), 16384);
	}
	else
	{
		func_58(&(uParam0->f_1), 16384);
	}
}

void func_15(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_58(iParam0, 32);
	}
	else
	{
		func_57(iParam0, 32);
	}
}

void func_16(var uParam0, float fParam1)
{
	uParam0->f_17 = fParam1;
}

void func_17(var uParam0, int iParam1)
{
	uParam0->f_21 = iParam1;
}

void func_18(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_58(iParam0, 128);
	}
	else
	{
		func_57(iParam0, 128);
	}
}

void func_19(var uParam0, float fParam1)
{
	uParam0->f_19 = fParam1;
}

void func_20(var uParam0, int iParam1)
{
	uParam0->f_20 = iParam1;
}

bool func_21(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (bParam6 || func_59(*uParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *uParam1, &(uParam0->f_160), 1, iParam3, iParam4))
	{
		if (bParam6 || func_60(uParam0, *uParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				fVar0 = 7f;
				if (func_61(uParam0->f_3, 1))
				{
					fVar0 = 20f;
				}
				clear_area(uParam0->f_51, fVar0, 2097152);
			}
			if (iParam5 == 1)
			{
				func_62(uParam0, -1, 0, bParam7);
			}
			_0x9d16896f0dbe78a2(uParam0->f_51, 5f);
			if (bParam2)
			{
				uParam0->f_51.f_3 = func_63(uParam0->f_51);
			}
			return true;
		}
	}
	return false;
}

void func_22(var uParam0, var uParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*uParam1 = 4;
			*uParam2 = 0;
			break;
		case 1:
			*uParam1 = 4;
			*uParam2 = 1;
			break;
		case 2:
			*uParam1 = 11;
			*uParam2 = 0;
			break;
	}
}

bool func_23()
{
	switch (iVar762)
	{
		case 0:
			if (func_64(&Local_87))
			{
				func_65(-1678824488, 15, 0, 0);
				func_65(189691797, 15, 0, 0);
				func_65(-2048655016, 15, 0, 0);
				request_anim_dict("SCRIPT_RE@TOWN_BURIAL@PREACHER@TRANS@RHO@GEN");
				request_anim_dict("SCRIPT_RE@TOWN_BURIAL@PREACHER@TRANS@RHO@DM");
				request_anim_dict("SCRIPT_RE@TOWN_BURIAL@PREACHER@TRANS@VAL@GEN");
				request_anim_dict("SCRIPT_RE@TOWN_BURIAL@PREACHER@TRANS@VAL@LD");
				request_anim_dict("SCRIPT_RE@TOWN_BURIAL@PREACHER@TRANS@VAL@MFH");
				request_anim_dict("SCRIPT_RE@TOWN_BURIAL@PREACHER@TRANS@val@DM");
				request_model(-409100651, false);
				request_model(1170674247, false);
				if (func_66())
				{
				}
				else
				{
					return false;
				}
				func_67();
				func_68();
				func_69(&uLocal_989, Local_87.f_51, 0f, 0f, 0f, 5f, 5f, 5f);
				func_69(&uLocal_990, Local_87.f_51, 0f, 0f, 0f, 15f, 15f, 15f);
				func_70();
				func_71();
				func_72();
				func_73();
				if (iLocal_86 != 2)
				{
					func_74();
				}
				iLocal_764 = 1;
			}
			break;
		case 1:
			if (!func_75(&uLocal_763, uVar998))
			{
				return false;
			}
			if (!func_76(-1678824488))
			{
				return false;
			}
			if (((((!has_anim_dict_loaded("SCRIPT_RE@TOWN_BURIAL@PREACHER@TRANS@RHO@GEN") && !has_anim_dict_loaded("SCRIPT_RE@TOWN_BURIAL@PREACHER@TRANS@RHO@DM")) && !has_anim_dict_loaded("SCRIPT_RE@TOWN_BURIAL@PREACHER@TRANS@VAL@GEN")) && !has_anim_dict_loaded("SCRIPT_RE@TOWN_BURIAL@PREACHER@TRANS@VAL@LD")) && !has_anim_dict_loaded("SCRIPT_RE@TOWN_BURIAL@PREACHER@TRANS@VAL@MFH")) && !has_anim_dict_loaded("SCRIPT_RE@TOWN_BURIAL@PREACHER@TRANS@val@DM"))
			{
				return false;
			}
			if (!has_model_loaded(1170674247))
			{
				return false;
			}
			if (!has_model_loaded(-409100651))
			{
				return false;
			}
			if (!func_77(&Local_281))
			{
				return false;
			}
			if (iLocal_86 != 2)
			{
				if (!func_78())
				{
					return false;
				}
				if (!func_79())
				{
					return false;
				}
			}
			return true;
	}
	return false;
}

void func_24(var uParam0)
{
	func_81((*uParam0)[0], func_80(7), "", -163964935, 0, 0, 0, 1, 0);
	func_81((*uParam0)[1], func_80(10), "", 648122183, 0, 0, 0, 1, 0);
}

void func_25(var uParam0)
{
	func_81((*uParam0)[0], func_80(7), "", -163964935, 0, 0, 0, 1, 0);
	func_81((*uParam0)[1], func_80(10), "", 648122183, 0, 0, 0, 1, 0);
}

bool func_26()
{
	switch (iVar768)
	{
		case 0:
			if (func_77(&Local_281))
			{
				iLocal_770 = 1;
			}
			break;
		case 1:
			if (func_84(func_82(&Local_87), func_83(&Local_87), &Local_281, &uLocal_731, 0, 0, -1, 1))
			{
				iLocal_770 = 2;
			}
			break;
		case 2:
			iVar0 = 0;
			while (iVar0 < 7)
			{
				if (func_49(&(uLocal_731[iVar0]), 0, 1))
				{
					set_entity_coords(&(uLocal_731[iVar0]), Local_281[iVar0]->f_6, true, false, true, true);
					set_entity_heading(&(uLocal_731[iVar0]), Local_281[iVar0]->f_9);
				}
				iVar0++;
			}
			iLocal_770 = 3;
			break;
		case 3:
			iLocal_770 = 5;
			break;
		case 5:
			if (func_85())
			{
				iLocal_770 = 6;
			}
			break;
		case 6:
			if (iLocal_86 == 2)
			{
				func_86(&(uLocal_731[1]), 1, 1);
			}
			return true;
	}
	return false;
}

int func_27()
{
	func_87();
	if (func_49(&(uLocal_731[0]), 0, 1))
	{
		if (_does_scenario_point_exist(iVar978))
		{
			if (!bVar960)
			{
				if (func_49(&(uLocal_731[0]), 0, 1))
				{
					_task_use_scenario_point(&(uLocal_731[0]), iVar978, sVar996, 0, false, true, 0, false, -1f, false);
					iLocal_962 = 1;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_28()
{
	func_88();
	switch (func_3())
	{
		case 105:
			if (iLocal_86 == 2)
			{
				func_89();
				return 1;
			}
			break;
		case 38:
			func_89();
			return 1;
	}
	return 0;
}

void func_29(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || func_49(iParam0, 0, 0))
	{
		decor_set_bool(iParam0, "HAS_VOICE", true);
		set_ambient_voice_name(iParam0, sParam1);
	}
}

void func_30()
{
	switch (func_3())
	{
		case 105:
			if (iLocal_86 == 2)
			{
				func_90(1164928979, 1, 0);
			}
			break;
		case 38:
			func_90(527226204, 1, 0);
			break;
	}
}

void func_31()
{
	switch (func_3())
	{
		case 105:
			if (iLocal_86 == 2)
			{
				func_91(uLocal_731[0], -1543620048);
				func_91(uLocal_731[1], 379797347);
			}
			break;
		case 38:
			func_91(uLocal_731[0], 1922684772);
			if (iLocal_86 == 0)
			{
				if (func_92(38, 1) == 1921874948)
				{
					func_93(38, 1);
				}
				func_91(uLocal_731[2], 1332724617);
				func_91(uLocal_731[1], 660824291);
			}
			if (iLocal_86 == 1)
			{
				if (func_92(38, 1) == -1910990966)
				{
					func_93(38, 1);
				}
				func_91(uLocal_731[2], -80413685);
				func_91(uLocal_731[1], 564117607);
			}
			func_94(&(uLocal_731[2]), 0);
			func_95(&(uLocal_731[2]), 1, 0);
			break;
	}
}

void func_32(var uParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_96(uParam0))
	{
		*uParam0 = _0xfa50f79257745e74(vParam1, fParam4, iParam5, iParam6, iParam7);
		if (func_96(uParam0))
		{
		}
	}
}

void func_33(var uParam0, vector3 vParam1, float fParam4)
{
	iVar0 = 258;
	func_32(uParam0, vParam1, fParam4, 2, iVar0, 0);
}

void func_34(var uParam0, vector3 vParam1, float fParam4, int iParam5, bool bParam6)
{
	iVar0 = 61;
	if (bParam6)
	{
		iVar0 |= 2 | 256;
	}
	func_32(uParam0, vParam1, fParam4, 1, iVar0, 0);
}

void func_35()
{
	switch (func_3())
	{
		case 105:
			iLocal_987 = _create_volume_box(1298.66f, -1215.718f, 78.3682f, 0f, 0f, 9.999997f, 2f, 3.1f, 9f);
			_0x19c7567d2f2287d6(uVar985, 7);
			break;
		case 38:
			iLocal_987 = _create_volume_box(-954.5598f, -1203.467f, 54.87126f, 0f, 0f, 0f, 1f, 2f, 4f);
			_0x19c7567d2f2287d6(uVar985, 7);
			break;
	}
}

int func_36(int iParam0, var uParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return 0;
	}
	if (func_97(iParam0, &(uParam1->f_121)))
	{
		uParam1->f_120++;
		return 1;
	}
	return 0;
}

void func_37(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (decor_exist_on(iParam0, "honor_block"))
		{
			iVar0 = decor_get_int(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_98(iParam1));
		decor_set_int(iParam0, "honor_block", iVar0);
	}
}

void func_38()
{
	func_99();
	set_anim_scene_entity(iVar750, "Dead", &(uLocal_731[2]), 0);
	start_anim_scene(iVar750);
}

bool func_39(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		func_100(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	func_101(uParam0, uParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !uParam0->f_5 & 16384 != 0)
		{
			if (uParam0->f_5.f_1 & 256 != 0)
			{
				func_102(&(uParam0->f_5));
			}
			func_58(&(uParam0->f_5), 16384);
		}
	}
	if (!uParam0->f_48 && !func_103(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_104(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_105(&(uParam0->f_121));
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
					func_106(uParam0, uParam0->f_193, 2f);
				}
			}
			break;
		case 2:
			if (!func_107(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		case 3:
			break;
	}
	if (func_61(uParam0->f_3, 128))
	{
		if ((does_entity_exist(uParam1[0]) && !is_ped_injured(uParam1[0])) && uParam0->f_3 != 49)
		{
			if (!_0xf6a8a652a6b186cd(_0xf6f5447d418daa82(uParam1[0])))
			{
				func_108(uParam0, uParam1[0]);
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

bool func_40()
{
	if (!Local_87.f_46)
	{
		if (func_109(&uLocal_731, &(Local_87.f_5), &uLocal_913, &uLocal_936, 0, 1, 1))
		{
			if (iVar911 != 2048 && iVar911 != 65536)
			{
				return true;
			}
		}
	}
	return false;
}

void func_41(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		func_110(uParam0);
		func_111(iParam1, uParam2);
	}
	func_86(*uParam0, 1, bParam4);
}

bool func_42()
{
	switch (iVar765)
	{
		case 0:
			if (func_112())
			{
				func_113();
				func_114(0);
				iLocal_943 = 0;
				iLocal_941 = 1;
				func_115(Local_819[0], 0, 0);
				func_115(Local_819[1], 0, 0);
				iLocal_767 = 1;
			}
			break;
		case 1:
			func_116();
			if (iVar763 < 4)
			{
				iLocal_767 = 2;
			}
			else
			{
				iLocal_767 = 4;
			}
			break;
		case 2:
			stop_current_playing_speech(&(uLocal_731[0]), 0);
			if (func_117(Global_35, iVar985, 1, 0))
			{
				func_119(&(uLocal_731[0]), Global_35, func_118(16), "", 100f, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				func_119(&(uLocal_731[0]), Global_35, func_118(17), "", 100f, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			func_120(&uLocal_1001);
			iLocal_767 = 3;
			break;
		case 3:
			if (func_121(&uLocal_1001) > 8f)
			{
				if (!func_117(Global_35, iVar985, 1, 0))
				{
					func_122();
					iLocal_941 = 0;
				}
				iLocal_943 = 0;
				iLocal_944 = 1;
				iLocal_767 = 4;
			}
			break;
		case 4:
			if ((iLocal_86 != 0 && iLocal_86 != 1) && iLocal_86 != 2)
			{
				iLocal_964 = 1;
			}
			return true;
	}
	return false;
}

bool func_43()
{
	switch (iVar766)
	{
		case 0:
			if ((func_121(&uLocal_1001) > 5f && func_112()) || func_117(Global_35, iVar985, 1, 0))
			{
				func_120(&uLocal_1001);
				iLocal_768 = 1;
			}
			break;
		case 1:
			if ((!func_123(&(uLocal_731[1]), 0) && !func_123(Global_35, 0)) && !func_123(&(uLocal_731[0]), 0))
			{
				func_41(uLocal_731[1], &iLocal_854, &Local_875, 1, 1);
				_0xe737d5f14304a2ec(&(uLocal_731[1]), player_id(), 120000);
				_0x24c82ef607105faa(&(uLocal_731[1]), -920810745);
				func_86(&(uLocal_731[1]), 1, 1);
				func_41(uLocal_731[0], &iLocal_798, &Local_819, 1, 1);
				_0xe737d5f14304a2ec(&(uLocal_731[0]), player_id(), 120000);
				_0x24c82ef607105faa(&(uLocal_731[0]), -920810745);
				func_86(&(uLocal_731[0]), 1, 1);
				iLocal_941 = 1;
				iLocal_943 = 0;
				func_116();
				iLocal_768 = 2;
			}
			break;
		case 2:
			func_119(&(uLocal_731[0]), Global_35, func_118(18), "", 100f, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			func_120(&uLocal_1001);
			iLocal_768 = 3;
			break;
		case 3:
			func_120(&uLocal_1001);
			iLocal_768 = 4;
			break;
		case 4:
			_0xf0b67bad53c35bd9(&(uLocal_731[0]), Global_35, &(uLocal_731[0]), get_entity_coords(Global_35, true, false), 1343354387);
			_0xf0b67bad53c35bd9(&(uLocal_731[1]), Global_35, &(uLocal_731[1]), get_entity_coords(Global_35, true, false), 1343354387);
			iLocal_768 = 6;
			break;
		case 6:
			return true;
	}
	return false;
}

bool func_44(int iParam0, bool bParam1)
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

void func_45(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_124() != -1)
	{
		return;
	}
	if ((Global_36616 && func_98(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_125(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_126(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_127(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_126(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

bool func_46()
{
	func_128();
	func_129();
	func_130();
	func_131();
	func_132();
	if (iVar763 > 1)
	{
		func_133();
	}
	if (Local_87.f_48)
	{
		func_134();
		func_135();
	}
	switch (iVar763)
	{
		case 0:
			if ((iLocal_86 == 2 || iLocal_86 == 0) || iLocal_86 == 1)
			{
				func_37(&(uLocal_731[2]), 0);
			}
			iLocal_765 = 1;
			break;
		case 1:
			if (func_136())
			{
				if (func_137(&Local_87, 1f, 1114636288, 22f, 1, 0, 1, -1082130432, 1, 1125515264, 0, 0) && !is_scripted_speech_playing(&(uLocal_731[0])))
				{
					func_138(&Local_87, get_entity_coords(&(uLocal_731[0]), true, false), 25f, 10f, 2, 0, 0, 0);
					func_120(&uLocal_1001);
					iLocal_765 = 3;
				}
			}
			break;
		case 3:
			if (func_139())
			{
				func_120(&uLocal_1001);
				iLocal_765 = 2;
			}
			break;
		case 2:
			switch (iVar928)
			{
				case 0:
					if (bVar944)
					{
						if (iLocal_86 == 2)
						{
							task_follow_nav_mesh_to_coord(&(uLocal_731[0]), 1357.49f, -1311.44f, 75.9f, 1.5f, -1, 0.25f, 0, 40000f);
							uLocal_930 = iVar928 + 1;
						}
						else
						{
							task_follow_nav_mesh_to_coord(&(uLocal_731[0]), -755.42f, -1269.1f, 43.02f, 1.5f, -1, 0.25f, 0, 40000f);
							uLocal_930 = iVar928 + 1;
						}
					}
					else
					{
						if (!func_49(&(uLocal_731[0]), 0, 1))
						{
							uLocal_930 = iVar928 + 1;
						}
						if (func_121(&uLocal_1001) > 2f)
						{
							if (func_140())
							{
								uLocal_930 = iVar928 + 1;
							}
						}
					}
					break;
				case 1:
					if (func_141())
					{
						uLocal_930 = iVar928 + 1;
					}
					break;
				case 2:
					func_120(&uLocal_1001);
					iLocal_765 = 5;
					iLocal_945 = 0;
					break;
			}
			break;
		case 4:
			if (func_142())
			{
				iLocal_945 = 1;
				iLocal_765 = 5;
			}
			break;
		case 5:
			if (!bVar943)
			{
				if (func_121(&uLocal_1001) > 160f || func_143(Global_35, Local_87.f_51, 1) > 30f)
				{
					func_144();
					return true;
				}
			}
			if (bVar943)
			{
				if (is_ped_injured(&(uLocal_731[1])) && is_ped_injured(&(uLocal_731[0])))
				{
					return true;
				}
			}
			break;
	}
	return false;
}

bool func_47(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, int iParam10, int iParam11, int iParam12)
{
	fVar0 = 0f;
	if (uParam0->f_1 >= 4)
	{
		if (bParam6)
		{
			if (func_145())
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
			else if (func_146(uParam0->f_3))
			{
				fVar0 = 250f;
			}
			else if (func_61(uParam0->f_3, 131072))
			{
				fVar0 = 70f;
				fVar0 = (fVar0 + 10f);
			}
			else if (func_61(uParam0->f_3, 1) && iParam12 == 0)
			{
				fVar0 = 215f;
				fVar0 = (fVar0 + 20f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 80f);
				}
			}
			else if (func_61(uParam0->f_3, 2) || iParam12 == 1)
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
				if (func_147(Global_36, uParam0->f_51) > fVar0)
				{
					return true;
				}
			}
			else
			{
				vVar1 = { fParam9, iParam10, iParam11 };
				if (func_147(Global_36, vVar1) > fVar0)
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

void func_48(var uParam0, int iParam1, vector3 vParam2, int iParam5)
{
	if (!uParam0->f_182)
	{
		if (!func_148(vParam2))
		{
			if (func_143(Global_35, vParam2, 1) < IntToFloat(iParam5))
			{
				func_149(uParam0, vParam2, 0);
			}
		}
		else if (does_entity_exist(iParam1))
		{
			if (func_150(Global_35, iParam1, 1, 1) < IntToFloat(iParam5))
			{
				func_151(uParam0, iParam1, 0);
			}
		}
		else if (!func_148(uParam0->f_51))
		{
			if (func_143(Global_35, uParam0->f_51, 1) < IntToFloat(iParam5))
			{
				func_149(uParam0, uParam0->f_51, 0);
			}
		}
		else
		{
			return;
		}
	}
}

bool func_49(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_152(iParam0, iParam1);
}

void func_50(int iParam0)
{
	if (*iParam0 != 0)
	{
		remove_shocking_event(*iParam0);
		*iParam0 = 0;
	}
}

void func_51(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (are_strings_equal(_0xf81c53561d15f330(), func_153(uParam0->f_3)))
	{
		_0x1096603b519c905f("");
	}
	if (uParam0->f_48)
	{
		stop_audio_scene("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			func_154(uParam0->f_3, 524288);
		}
	}
	if (func_49(player_ped_id(), 0, 1))
	{
		iVar1 = get_mount(Global_35);
		set_ped_config_flag(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			bVar3 = (bParam8 && decor_exist_on(uParam1[iVar0], "pedRoam_bInPedRoam"));
			if (func_49(uParam1[iVar0], 0, 0))
			{
				func_155(uParam1[iVar0], bVar3);
				if (func_156(uParam0, (*uParam1)[iVar0]))
				{
					func_157((*uParam1)[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (func_49(uParam1[iVar0], 0, 1))
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
							func_159(uParam1[iVar0], 1073741824, func_158(iVar0 < iVar2, &(uParam0->f_98[iVar0]), -1f), iVar1, 0);
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
		func_160(uParam0);
	}
	func_161(uParam0);
	if (!uParam0->f_186)
	{
		func_100(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = func_162(uParam0->f_3, uParam0->f_185);
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
		func_163(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

void func_52()
{
	if (_does_volume_exist(iVar986))
	{
		_0x74c2b3dc0b294102(iVar986);
		_0xa1cfb35069d23c23(iVar986);
		remove_scenario_blocking_area(uVar977, false);
		_delete_volume(iVar986);
	}
}

void func_53(var uParam0, int iParam1)
{
	if (func_96(uParam0))
	{
		_0x9cf1836c03fb67a2(uParam0, iParam1);
	}
}

void func_54(int iParam0)
{
	task_clear_look_at(iParam0);
	_0xaac0ee3b4999abb5(iParam0, 0);
}

void func_55(int iParam0)
{
	func_14(iParam0, 0);
	func_8(iParam0, 0);
	func_10(iParam0, 1);
	func_164(iParam0, 1);
	func_165(iParam0, 0);
	func_9(iParam0, 1);
	func_166(iParam0, 1, 1, 1);
}

var func_56(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	if (bParam2)
	{
		_0xdd1232b332cbb9e7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_167(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_168(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		_uilog_set_cached_objective(sVar0);
	}
	return func_167(sVar0, iParam1, 0, 0, 1, 1);
}

void func_57(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_58(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_59(int iParam0, var uParam1, bool bParam2, var uParam3, struct<7> Param4, var uParam11, bool bParam12, bool bParam13, int iParam14)
{
	if (Param4.f_6 > -1)
	{
		*uParam1 = { func_169(iParam0, Param4.f_6) };
		uParam1->f_4 = Param4.f_6;
		uParam1->f_5 = uParam1->f_4;
		func_170(iParam0, uParam1, bParam2, bParam12, 0);
		*uParam3 = 0;
		return 1;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (func_103(iParam0, 128))
			{
				if (!func_171(iParam0, &(uParam1->f_10)))
				{
					*uParam11 = 1;
					return 0;
				}
			}
			else
			{
				func_172(iParam0, &uVar1, &uVar2, &iVar0, 0);
				bVar4 = false;
				*uParam1 = { func_173(&bVar4, iParam0, uVar2, uVar1) };
				if (bVar4)
				{
					*uParam11 = 1;
					return 0;
				}
				if (func_148(*uParam1))
				{
					return func_174(uParam1, uParam3, uParam11, bParam2, 12, 1000);
				}
				uParam1->f_4 = func_175(iParam0, *uParam1);
				uParam1->f_5 = uParam1->f_4;
				if (func_5(Param4.f_2, 8))
				{
					func_170(iParam0, uParam1, 0, bParam12, 0);
					*uParam3 = 0;
					return 1;
				}
				func_176(uParam1);
			}
			*uParam3 = 0;
			uParam1->f_9 = 2;
			break;
		case 1:
			if (func_177(uParam1, uParam3, uParam11, bParam2, bParam13))
			{
				if (!bParam13 && func_178(vdist(Global_36, *uParam1), iParam0))
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
			if (func_103(iParam0, 128))
			{
				if (!func_179(uParam1, &bVar3))
				{
					if (bVar3)
					{
						return func_174(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					return 0;
				}
			}
			else
			{
				func_172(iParam0, &uVar1, &uVar2, &iVar0, 0);
				if (vdist2(*uParam1, Global_36) < to_float(iVar0))
				{
					if (!func_176(uParam1))
					{
						return func_174(uParam1, uParam3, uParam11, bParam2, 12, 1000);
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
			if (func_180(iParam0, Param4.f_1, uParam1, Param4, iParam14))
			{
				func_170(iParam0, uParam1, bParam2, bParam12, 0);
				*uParam3 = 0;
				return 1;
			}
			else
			{
				*uParam3 = 0;
				uParam1->f_9 = 5;
				return func_174(uParam1, uParam3, uParam11, bParam2, 12, 1000);
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
		func_56("BEAT_SCAN", 2000, 0, 1, 0, 0, -1, -1, 0);
	}
	if (uParam1->f_8 >= 12)
	{
		if (bParam2)
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_56("BEAT_FAIL", 4000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam11 = 1;
	}
	return 0;
}

bool func_60(var uParam0, int iParam1)
{
	if (func_61(iParam1, 256))
	{
		if (_does_volume_exist(uParam0->f_172) || func_182(iParam1, func_181(uParam0), &(uParam0->f_172)))
		{
			if (func_49(Global_35, 0, 1))
			{
				return is_entity_in_volume(Global_35, uParam0->f_172, true, 0);
			}
		}
	}
	return true;
}

bool func_61(int iParam0, int iParam1)
{
	if (!func_183(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0] && iParam1) != 0;
}

void func_62(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (uParam0->f_176)
	{
		return;
	}
	if (iParam1 != -1)
	{
		func_184(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, IntToFloat(iParam1), IntToFloat(iParam1), 5f, "Custom Sized Ambient Avoidance");
	}
	else if (func_61(uParam0->f_3, 1) && !func_61(uParam0->f_3, 32))
	{
		func_184(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 25f, 25f, 6f, "Ambient Avoidance Wilderness & No Traffic");
	}
	else if (func_61(uParam0->f_3, 2) && !func_61(uParam0->f_3, 32))
	{
		func_184(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 4f, 4f, 5f, "Ambient Avoidance Town & No Traffic");
	}
	else
	{
		return;
	}
	_0xb56d41a694e42e86(uParam0->f_171, 2228255, 262144, 0, -1, -1, uParam0->f_175);
	_0x18262cafebb5fbe1(uParam0->f_171, 0, 0, 0, -1, -1, 0);
	if (bParam3)
	{
		func_185(uParam0->f_171, 1);
	}
	if (func_61(uParam0->f_3, 1))
	{
		func_184(&(uParam0->f_174), uParam0->f_51, 0f, 0f, 0f, _0x3e2a25b2416dd67e(uParam0->f_171) * Vector(3.5f, 3.5f, 3.5f), "Predator Stay Out");
		func_186(uParam0->f_174, 0, 262144, 0, 0);
	}
	if (iParam2 == 0)
	{
	}
	else if (does_entity_exist(iParam2))
	{
		_0x7c00cfc48a782dc0(uParam0->f_171, iParam2, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
}

float func_63(vector3 vParam0)
{
	vVar0 = { Global_36 - vParam0 };
	return get_heading_from_vector_2d(vVar0.x, vVar0.y);
}

bool func_64(var uParam0)
{
	iVar0 = func_187(uParam0->f_3);
	iVar1 = func_188(1);
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

int func_65(int iParam0, int iParam1, int iParam2, int iParam3)
{
	return _request_scenario_type(iParam0, iParam1, iParam2, iParam3);
}

bool func_66()
{
	if (func_189())
	{
		return true;
	}
	return false;
}

void func_67()
{
	switch (func_3())
	{
		case 105:
			vLocal_14 = { 1282.87f, -1224.5f, 81.52f };
			Local_281[0]->f_6 = { 1298.23f, -1214.09f, 81.39f };
			Local_281[0]->f_9 = -157.81f;
			Local_281[1]->f_6 = { 1291.59f, -1219.94f, 80.78f };
			Local_281[1]->f_9 = -83.96f;
			vLocal_17 = { 1304.12f, -1136.88f, 80.25f };
			vLocal_20 = { 1370.99f, -1155.04f, 79.8f };
			vLocal_23 = { 1298.71f, -1216.46f, 79.54f };
			fLocal_762 = -41.88f;
			break;
		case 38:
			Local_281[0]->f_6 = { -955.24f, -1200.35f, 55.41f };
			Local_281[0]->f_9 = -166.91f;
			Local_281[2]->f_6 = { -954.5765f, -1203.323f, 53.5528f };
			Local_281[2]->f_9 = 0f;
			Local_281[1]->f_6 = { -950.65f, -1206.26f, 54.3f };
			Local_281[1]->f_9 = 35.72f;
			vLocal_14 = { -974.81f, -1178.95f, 57.23f };
			vLocal_17 = { -952.19f, -1203.54f, 53.96f };
			fLocal_762 = 68.37f;
			vLocal_23 = { -954.1f, -1203.55f, 54.48f };
			vLocal_26 = { -954.55f, -1203.43f, 53.56f };
			break;
	}
}

void func_68()
{
	func_190(&uLocal_988, Local_87.f_51, 0f, 0f, 0f, vLocal_995);
	if (_does_volume_exist(iVar986))
	{
		_0x18262cafebb5fbe1(iVar986, 0, 0, 0, -1, -1, 0);
		_0xb56d41a694e42e86(iVar986, 0, 0, 0, -1, -1, 0);
		uLocal_979 = _0x4c39c95ae5db1329(iVar986, 0, 15);
	}
}

void func_69(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!_does_volume_exist(*uParam0))
	{
		*uParam0 = _create_volume_cylinder_with_custom_name(vParam1, vParam4, vParam7, func_191());
	}
}

void func_70()
{
	switch (func_3())
	{
		case 105:
			if (iLocal_86 == 2)
			{
				Local_281[0]->f_1 = 329996111;
				Local_281[0] = 4;
				StringCopy(&(Local_281[0]->f_23), "RHD_PREACHER", 64);
				Local_281[0]->f_3 = -1543620048;
				Local_281[1]->f_1 = 329996111;
				Local_281[1] = 4;
				StringCopy(&(Local_281[1]->f_23), "0827_S_M_M_LiveryWorker_01_WHITE_03", 64);
				Local_281[1]->f_3 = 379797347;
			}
			break;
		case 38:
			Local_281[0]->f_1 = 329996111;
			Local_281[0] = 4;
			StringCopy(&(Local_281[0]->f_23), "RHD_PREACHER", 64);
			Local_281[0]->f_3 = 1922684772;
			if (iLocal_86 == 0)
			{
				Local_281[2]->f_1 = 1921874948;
				Local_281[2] = 4;
				Local_281[2]->f_3 = 1332724617;
				Local_281[1]->f_1 = 329996111;
				Local_281[1] = 4;
				Local_281[1]->f_3 = 660824291;
				StringCopy(&(Local_281[1]->f_23), "FAKE_BEGGAR", 64);
			}
			else if (iLocal_86 == 1)
			{
				Local_281[2]->f_1 = -1910990966;
				Local_281[2] = 4;
				Local_281[2]->f_3 = -80413685;
				Local_281[1]->f_1 = 329996111;
				Local_281[1] = 4;
				Local_281[1]->f_3 = 564117607;
				StringCopy(&(Local_281[1]->f_23), "0828_S_M_M_LiveryWorker_01_WHITE_04", 64);
			}
			break;
	}
	func_67();
	func_192(&Local_281);
}

void func_71()
{
	Local_29[11] = "amb@world_human_leaning@male@wall@back@legs_crossed@enter";
	Local_29[11]->f_1 = "enter_front";
	switch (func_3())
	{
		case 105:
			if (iLocal_86 == 2)
			{
				Local_29[0] = "script_re@town_burial@mourner@rhodes@generic";
				Local_29[1]->f_1 = "line_01";
				Local_29[2]->f_1 = "line_02";
				Local_29[3]->f_1 = "";
				Local_29[4]->f_1 = "neg_response";
				func_193(&(Local_29[0]), &uLocal_506);
				Local_29[9] = "amb@world_human_leaning@male@wall@back@legs_crossed@base";
				Local_29[9]->f_1 = "base";
				func_193(&(Local_29[9]), &uLocal_506);
			}
			break;
		case 38:
			if (iLocal_86 == 0 || iLocal_86 == 1)
			{
				Local_29[0] = "script_re@town_burial@mourner@valentine@generic";
				Local_29[1]->f_1 = "line_01";
				Local_29[2]->f_1 = "line_02";
				Local_29[3]->f_1 = "";
				Local_29[4]->f_1 = "neg_response";
				func_193(&(Local_29[0]), &uLocal_506);
				Local_29[9] = "amb@world_human_leaning@male@wall@back@legs_crossed@base";
				Local_29[9]->f_1 = "base";
				func_193(&(Local_29[9]), &uLocal_506);
				Local_29[10] = "amb@world_human_leaning@male@wall@back@legs_crossed@exit";
				Local_29[10]->f_1 = "exit_back";
				func_193(&(Local_29[10]), &uLocal_506);
			}
			break;
	}
}

void func_72()
{
	Local_773 = { 0f, 0f, 0f };
	Local_773.f_4 = 21030;
	Local_773.f_3 = Global_35;
	Local_773.f_8 = 4;
	Local_773.f_19 = 4;
	Local_773.f_21 = 4;
	Local_773.f_17 = 4;
	Local_773.f_18 = 4;
	Local_773.f_7 = 0;
}

void func_73()
{
	Local_29[12] = "props_misc@church_bells";
	Local_29[12]->f_1 = "loop";
	func_193(&(Local_29[12]), &uLocal_506);
}

void func_74()
{
	Local_752.f_4 = "script@beat@town@townburial@coffin";
	sLocal_760[0] = "Pb_dead";
	Local_752 = _create_anim_scene(Local_752.f_4, 0, 0, false, true);
}

bool func_75(var uParam0, var uParam1)
{
	return true;
}

bool func_76(int iParam0)
{
	return _has_scenario_type_loaded(iParam0, false);
}

bool func_77(int iParam0)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (!func_194((*iParam0)[iVar0]))
		{
			bVar1 = true;
		}
		iVar0++;
	}
	return !bVar1;
}

bool func_78()
{
	if (!_is_anim_scene_loaded(iVar750, true, false))
	{
		if (!_is_anim_scene_loading(iVar750, true))
		{
			load_anim_scene(iVar750);
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_79()
{
	if (!_0x23e33cb9f4a3f547(uVar750, &(sLocal_760[0])))
	{
		if (!_0x0df57f86fe71dbe5(uVar750, &(sLocal_760[0])))
		{
			_0xdf7b5144e25cd3fe(uVar750, &(sLocal_760[0]));
		}
		bVar0 = false;
	}
	return !bVar0;
	return false;
}

char* func_80(int iParam0)
{
	if (func_195(iParam0))
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

void func_81(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
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
		if (func_196(iParam0->f_6))
		{
			if (is_bit_set(*iParam0, 1))
			{
				func_197(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_198(iParam0->f_6, iParam0->f_5, 0);
			}
			func_199(iParam0->f_6, 0, 1);
		}
		else
		{
			set_bit(iParam0, 14);
		}
		set_bit(iParam0, 0);
	}
	else
	{
		func_200(iParam0, iParam0->f_5);
		if (!is_bit_set(*iParam0, 13))
		{
			set_bit(iParam0, 0);
		}
	}
	set_bit(iParam0, 15);
}

Vector3 func_82(var uParam0)
{
	return uParam0->f_51;
}

var func_83(var uParam0)
{
	return uParam0->f_51.f_3;
}

bool func_84(vector3 vParam0, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, float fParam9)
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
		if (func_201() || !func_202((*iParam4)[iVar0], (*iParam5)[iVar0], vParam0, uParam3, iParam6, fParam9))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_85()
{
	_request_ped_emotional_preset(&(uLocal_731[1]), "Flee_Scared");
	_request_ped_emotional_preset(&(uLocal_731[1]), "DEFAULT_DEFUSE");
	_request_ped_emotional_preset(&(uLocal_731[0]), "Default_Curious");
	_request_ped_emotional_preset(&(uLocal_731[0]), "DEFAULT_DEFUSE");
	_request_ped_emotional_preset(&(uLocal_731[0]), "Flee_Panic");
	_request_ped_emotional_preset(&(uLocal_731[1]), "Flee_Panic");
	_request_ped_emotional_preset(&(uLocal_731[0]), "Interaction_Panic");
	_request_ped_emotional_preset(&(uLocal_731[1]), "Interaction_Panic");
	_request_ped_emotional_preset(&(uLocal_731[0]), "TaskCombat_Panic");
	_request_ped_emotional_preset(&(uLocal_731[1]), "TaskCombat_Panic");
	if (((((((((_has_ped_emotional_preset_loaded(&(uLocal_731[1]), "Flee_Scared") && _has_ped_emotional_preset_loaded(&(uLocal_731[0]), "Default_Curious")) && _has_ped_emotional_preset_loaded(&(uLocal_731[0]), "DEFAULT_DEFUSE")) && _has_ped_emotional_preset_loaded(&(uLocal_731[1]), "DEFAULT_DEFUSE")) && _has_ped_emotional_preset_loaded(&(uLocal_731[0]), "Flee_Panic")) && _has_ped_emotional_preset_loaded(&(uLocal_731[1]), "Flee_Panic")) && _has_ped_emotional_preset_loaded(&(uLocal_731[0]), "Interaction_Panic")) && _has_ped_emotional_preset_loaded(&(uLocal_731[1]), "Interaction_Panic")) && _has_ped_emotional_preset_loaded(&(uLocal_731[0]), "TaskCombat_Panic")) && _has_ped_emotional_preset_loaded(&(uLocal_731[1]), "TaskCombat_Panic"))
	{
		return true;
	}
	return false;
}

void func_86(int iParam0, bool bParam1, bool bParam2)
{
	set_ped_config_flag(iParam0, 297, false);
	set_ped_config_flag(iParam0, 301, false);
	set_ped_config_flag(iParam0, 315, false);
	set_ped_config_flag(iParam0, 130, false);
	set_ped_config_flag(iParam0, 178, bParam2);
	set_ped_config_flag(iParam0, 330, false);
	set_ped_config_flag(iParam0, 317, bParam1);
}

void func_87()
{
	vVar0 = { Local_281[0]->f_6 - Vector(1f, 0f, 0f) };
	if (does_entity_exist(&(uLocal_731[0])) && !_does_scenario_point_exist(iVar978))
	{
		uLocal_980 = func_203(-1678824488, vVar0, Local_281[0]->f_9, 0, 0, 0);
		sLocal_998 = "SCRIPT_RETB_PREACHER_Aa";
	}
}

void func_88()
{
	vVar0 = { Local_281[1]->f_6 };
	if ((iLocal_86 == 0 || iLocal_86 == 1) || iLocal_86 == 2)
	{
		if (does_entity_exist(&(uLocal_731[1])) && !_does_scenario_point_exist(iVar984))
		{
			uLocal_986 = func_203(-251168298, vVar0, Local_281[1]->f_9, 0, 0, 0);
			sLocal_999 = "WORLD_HUMAN_LEAN_POST_RIGHT_MALE_A";
		}
	}
}

void func_89()
{
	if (_does_scenario_point_exist(iVar984))
	{
		if (func_49(&(uLocal_731[1]), 0, 1))
		{
			_task_use_scenario_point(&(uLocal_731[1]), iVar984, sVar997, 0, true, false, 0, false, -1f, false);
		}
	}
}

void func_90(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_204(1497516462);
			func_205(2016141805);
			func_205(1010885152);
			func_205(-502324015);
			break;
		case 2016141805:
			func_205(1497516462);
			func_204(2016141805);
			func_205(1010885152);
			func_205(-502324015);
			break;
		case 1010885152:
			func_205(1497516462);
			func_205(2016141805);
			func_204(1010885152);
			func_205(-502324015);
			break;
		case -502324015:
			func_205(1497516462);
			func_205(2016141805);
			func_205(1010885152);
			func_204(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_205(-538889627);
			func_205(-538880323);
			func_205(-1056767524);
			func_204(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_206();
			func_204(iParam0);
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
			func_207();
			func_204(iParam0);
			break;
		case 2019386373:
			func_205(-664252410);
			func_205(2109952320);
			func_204(2019386373);
			break;
		case -664252410:
			func_205(2019386373);
			func_205(2109952320);
			func_204(-664252410);
			break;
		case 2109952320:
			func_205(2019386373);
			func_205(-664252410);
			func_204(2109952320);
			break;
		case -1674179981:
			func_205(-1835851517);
			func_205(-1838352012);
			func_204(-1674179981);
			break;
		case -1835851517:
			func_205(-1674179981);
			func_205(-1838352012);
			func_204(-1835851517);
			break;
		case -1838352012:
			func_205(-1674179981);
			func_205(-1835851517);
			func_204(-1838352012);
			break;
		case -1717960576:
			func_205(210001842);
			func_204(-1717960576);
			break;
		case 210001842:
			func_205(-1717960576);
			func_204(210001842);
			break;
		case -150493654:
			func_205(-1271608261);
			func_205(1846061697);
			func_205(-1145519186);
			func_204(-150493654);
			break;
		case -1271608261:
			func_205(-150493654);
			func_205(1846061697);
			func_205(-1145519186);
			func_204(-1271608261);
			break;
		case 1846061697:
			func_205(-150493654);
			func_205(-1271608261);
			func_205(-1145519186);
			func_204(1846061697);
			break;
		case -1145519186:
			func_205(-150493654);
			func_205(-1271608261);
			func_205(1846061697);
			func_204(-1145519186);
			break;
		case 1766284049:
			func_205(280705402);
			func_205(1926308480);
			func_204(1766284049);
			break;
		case 280705402:
			func_205(1766284049);
			func_205(1926308480);
			func_204(280705402);
			break;
		case 1926308480:
			func_205(1766284049);
			func_205(280705402);
			func_204(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_205(439465264);
				func_204(1609506757);
			}
			else
			{
				func_205(1609506757);
				func_205(439465264);
			}
			break;
		case 439465264:
			if (func_208(1609506757))
			{
				if (bParam1)
				{
					func_204(439465264);
				}
				else
				{
					func_205(439465264);
				}
			}
			break;
		case 1822001510:
			func_205(-1612662716);
			func_204(1822001510);
			break;
		case -1612662716:
			func_205(1822001510);
			func_204(-1612662716);
			break;
		case 1306158345:
			func_205(1952610440);
			func_205(-223469678);
			func_205(-404698347);
			func_205(1517904467);
			func_204(1306158345);
			break;
		case 1952610440:
			func_205(1306158345);
			func_205(-223469678);
			func_205(-404698347);
			func_205(1517904467);
			func_204(1952610440);
			break;
		case -223469678:
			func_205(1306158345);
			func_205(1952610440);
			func_205(-404698347);
			func_205(1517904467);
			func_204(-223469678);
			break;
		case -404698347:
			func_205(1306158345);
			func_205(1952610440);
			func_205(-223469678);
			func_205(1517904467);
			func_204(-404698347);
			break;
		case 1517904467:
			func_205(1306158345);
			func_205(1952610440);
			func_205(-223469678);
			func_205(-404698347);
			func_204(1517904467);
			break;
		case 1376646519:
			func_205(931649776);
			func_205(-434590080);
			func_205(1743048395);
			func_205(449774763);
			func_204(1376646519);
			break;
		case 931649776:
			func_205(1376646519);
			func_205(-434590080);
			func_205(1743048395);
			func_205(449774763);
			func_204(931649776);
			break;
		case -434590080:
			func_205(1376646519);
			func_205(931649776);
			func_205(1743048395);
			func_205(449774763);
			func_204(-434590080);
			break;
		case 1743048395:
			func_205(1376646519);
			func_205(931649776);
			func_205(-434590080);
			func_205(449774763);
			func_204(1743048395);
			break;
		case 449774763:
			func_205(1376646519);
			func_205(931649776);
			func_205(-434590080);
			func_205(1743048395);
			func_204(449774763);
			break;
		case -1414537028:
			func_205(38162571);
			func_205(1350391819);
			func_205(54073871);
			func_204(-1414537028);
			break;
		case 38162571:
			func_205(-1414537028);
			func_205(1350391819);
			func_205(54073871);
			func_204(38162571);
			break;
		case 1350391819:
			func_205(-1414537028);
			func_205(38162571);
			func_205(54073871);
			func_204(1350391819);
			break;
		case 54073871:
			func_205(-1414537028);
			func_205(38162571);
			func_205(1350391819);
			func_204(54073871);
			break;
		case 198200492:
			func_204(198200492);
			func_205(-1124061431);
			func_205(52706132);
			func_205(-259123672);
			break;
		case -1124061431:
			func_205(198200492);
			func_204(-1124061431);
			func_205(52706132);
			func_205(-259123672);
			break;
		case 52706132:
			func_205(198200492);
			func_205(-1124061431);
			func_204(52706132);
			func_205(-259123672);
			break;
		case -259123672:
			func_205(198200492);
			func_205(-1124061431);
			func_205(52706132);
			func_204(-259123672);
			break;
		case -919512195:
			func_204(-919512195);
			func_205(-1925798111);
			func_205(420709909);
			func_205(1703426636);
			break;
		case -1925798111:
			func_204(-1925798111);
			func_205(-919512195);
			func_205(420709909);
			func_205(1703426636);
			break;
		case 420709909:
			func_204(420709909);
			func_205(-919512195);
			func_205(-1925798111);
			func_205(1703426636);
			break;
		case 1703426636:
			func_204(1703426636);
			func_205(-919512195);
			func_205(-1925798111);
			func_205(420709909);
			break;
		case -1223121209:
			func_204(-1223121209);
			func_205(630808005);
			break;
		case 630808005:
			func_204(630808005);
			func_205(-1223121209);
			break;
		case 1453909576:
			func_204(1453909576);
			func_205(1643531967);
			break;
		case 1643531967:
			func_204(1643531967);
			func_205(1453909576);
			break;
		case 0:
			func_204(0);
			func_205(473295046);
			func_205(-1738165526);
			break;
		case 473295046:
			func_204(473295046);
			func_205(0);
			func_205(-1738165526);
			break;
		case -1738165526:
			func_204(-1738165526);
			func_205(0);
			func_205(473295046);
			break;
		case 932909855:
			func_204(932909855);
			func_205(2051822093);
			break;
		case 2051822093:
			func_204(2051822093);
			func_205(932909855);
			break;
		case 405586984:
			func_204(405586984);
			func_205(1509509592);
			func_205(-959357075);
			func_205(-1311865656);
			break;
		case 1509509592:
			func_204(1509509592);
			func_205(405586984);
			func_205(-959357075);
			func_205(-1311865656);
			break;
		case -959357075:
			func_204(-959357075);
			func_205(1509509592);
			func_205(405586984);
			func_205(-1311865656);
			break;
		case -1311865656:
			func_204(-1311865656);
			func_205(1509509592);
			func_205(-959357075);
			func_205(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_204(-524145696);
			}
			else
			{
				func_205(-524145696);
			}
			func_205(1626481264);
			func_205(282809459);
			break;
		case 282809459:
			func_204(282809459);
			func_205(1626481264);
			func_205(-524145696);
			break;
		case 1626481264:
			func_204(1626481264);
			func_205(-524145696);
			func_205(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_204(885203519);
			}
			else
			{
				func_205(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_204(-1080627546);
			}
			else
			{
				func_205(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_208(iParam0))
				{
					func_204(iParam0);
				}
			}
			else if (func_208(iParam0))
			{
				func_205(iParam0);
			}
			break;
	}
}

void func_91(var uParam0, int iParam1)
{
	_set_ped_body_component(*uParam0, iParam1);
	_update_ped_variation(*uParam0, false, true, true, true, false);
}

int func_92(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_40.f_9829)
	{
		if (&Global_40.f_9829[iVar0] == iParam0)
		{
			if (iVar1 == iParam1)
			{
				return Global_40.f_9829[iVar0]->f_1;
			}
			iVar1++;
		}
		iVar0++;
	}
	return 0;
}

void func_93(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_40.f_9829)
	{
		if (&Global_40.f_9829[iVar0] == iParam0)
		{
			if (iVar1 == iParam1)
			{
				Global_40.f_9829[iVar0]->f_1 = 0;
				Global_40.f_9829[iVar0]->f_3 = 1;
				iVar2 = func_209(iParam0, iParam1);
				iVar3 = func_210(iParam0);
				_0x70605812abc9ff0f(iVar2, iVar3);
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_94(int iParam0, int iParam1)
{
	func_211(iParam0, iParam1);
}

void func_95(int iParam0, bool bParam1, int iParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_an_object(iParam0))
	{
		return;
	}
	else if (_0x9a100f1cf4546629(iParam0))
	{
		iVar0 = func_212(iParam0);
		func_213(iVar0, _0xc346a546612c49a9(iParam0));
	}
	if (bParam1)
	{
		func_211(iParam0, 0);
	}
}

bool func_96(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

bool func_97(int iParam0, var uParam1)
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

int func_98(int iParam0)
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

void func_99()
{
	set_anim_scene_origin(iVar750, vLocal_26, 0f, 0f, -180f, 2);
}

void func_100(var uParam0, int iParam1)
{
	vVar0 = { func_82(uParam0) };
	iVar3 = func_162(uParam0->f_3, iParam1);
	uParam0->f_185 = iParam1;
	_0xca41e86545413b5b(7, 1221649453, -585414509, iVar3, vVar0);
	if (_0x01f4d242765c6b24(iVar3))
	{
		uParam0->f_186 = 1;
	}
}

void func_101(var uParam0, var uParam1)
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

void func_102(var uParam0)
{
	func_10(uParam0, 1);
	func_17(uParam0, 20);
}

bool func_103(int iParam0, int iParam1)
{
	if (!func_183(iParam0))
	{
		return false;
	}
	return ((*Global_1310750)[iParam0]->f_1 && iParam1) != 0;
}

void func_104(var uParam0, var uParam1, int iParam2, int* iParam3)
{
	if (!func_183(iParam2))
	{
		return;
	}
	if (*uParam1)
	{
		return;
	}
	if (func_214())
	{
		func_215(1);
	}
	func_216(iParam2, uParam0->f_43);
	func_217(iParam2, 0, 0, 0, 0);
	if (func_218(iParam2) != -1)
	{
		_set_weather_type_frozen(true);
	}
	start_audio_scene("RE_active_location_scene");
	_0x1096603b519c905f(func_153(uParam0->f_3));
	if (does_blip_exist(*iParam3))
	{
		remove_blip(iParam3);
	}
	func_219(uParam0, 1, 0);
	*uParam1 = 1;
}

void func_105(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0]->f_7 = 0f;
		(*uParam0)[iVar0]->f_8 = 0f;
		iVar0++;
	}
}

void func_106(var uParam0, int iParam1, float fParam2)
{
	bVar0 = false;
	if (uParam0->f_178 && func_220())
	{
		bVar0 = true;
	}
	if (!uParam0->f_48 && !func_103(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_104(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_105(&(uParam0->f_121));
			return;
		}
		if (_does_volume_exist(uParam0->f_173))
		{
			if (!func_117(Global_35, uParam0->f_173, 1, 0))
			{
				return;
			}
		}
		fVar1 = func_221(uParam0, bVar0);
		func_222(uParam0->f_121[iParam1], fVar1, 1082130432, 0, 90f, 0, &(uParam0->f_98[iParam1]));
		if (func_223(&(uParam0->f_121), uParam0->f_120, fParam2))
		{
			func_104(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_105(&(uParam0->f_121));
		}
	}
}

bool func_107(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	fVar0 = 30f;
	fVar1 = 150f;
	if (func_61(uParam2->f_3, 1))
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
			if (func_224())
			{
				fVar0 = 15f;
			}
		}
		if (func_225(uParam2, fVar0))
		{
			*uParam1 = 1;
		}
	}
	if (!uParam2->f_48)
	{
		if (!bParam3 && func_226(player_id(), 1, 0, 1))
		{
			return false;
		}
		if (!func_225(uParam2, fVar1))
		{
			if (!func_227((*Global_1310750)[uParam2->f_3]->f_38))
			{
				return false;
			}
		}
		if (!func_228(uParam2->f_3, 2) && func_229(2))
		{
			return false;
		}
		if (func_61(iParam0, 4194304) || func_61(iParam0, 33554432))
		{
			if (func_230(1))
			{
				return false;
			}
		}
	}
	if (func_231(Global_35))
	{
		return false;
	}
	if (func_232(0, 1, 1) && !func_233(iParam0))
	{
		return false;
	}
	if (!*uParam1 && func_61(iParam0, 128))
	{
		if (is_player_riding_train(player_id()))
		{
			return false;
		}
		if (func_234(Global_35, 0))
		{
			return false;
		}
		if (Global_16)
		{
			return false;
		}
		if (func_226(player_id(), 1, 0, 1))
		{
			return false;
		}
		if (func_235())
		{
			return false;
		}
		iVar2 = func_236(func_3());
		if (func_237(iVar2))
		{
			if (func_238(Global_36, iVar2))
			{
				return false;
			}
		}
		if (func_239(Global_36) && !uParam2->f_161)
		{
			return false;
		}
		if (!uParam2->f_48)
		{
			if (func_240(&(uParam2->f_91), 0, 1084227584, 1, 1))
			{
				return false;
			}
		}
	}
	return true;
}

void func_108(var uParam0, int iParam1)
{
	if (func_241(uParam0->f_51))
	{
		func_242(uParam0->f_51, 0);
		fVar0 = func_243(uParam0->f_3);
		iVar2 = _create_volume_cylinder_with_custom_name(uParam0->f_51, 0f, 0f, 0f, fVar0, fVar0, fVar0, func_191());
		bVar1 = func_158(!func_61(uParam0->f_3, 1), 20f, -1f);
		uParam0->f_51.f_11 = func_245(iVar2, func_244(uParam0->f_3), 1, iParam1, 8, 0, bVar1);
	}
}

bool func_109(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = func_246(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_247(uParam0[*uParam3], 0, iParam1, uParam2, 0, 0))
		{
			return true;
		}
		*uParam3++;
		if (*uParam3 > iParam5)
		{
			*uParam3 = iParam4;
		}
		iVar1++;
	}
	return false;
}

void func_110(var uParam0)
{
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		set_ped_config_flag(*uParam0, 297, false);
	}
}

void func_111(int* iParam0, var uParam1)
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
	func_248(iParam0, uParam1, 1);
	func_249(uParam1, 0, 1, 1, 0);
	_copy_memory(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		_copy_memory((*uParam1)[iVar0], &Var22, 17);
		iVar0++;
	}
}

bool func_112()
{
	if (func_109(&uLocal_731, &(Local_87.f_5), &uLocal_913, &uLocal_936, 0, 1, 1))
	{
		if (iVar911 == 2048)
		{
			return true;
		}
		if (iVar911 == 64)
		{
			return true;
		}
		if (!bVar946)
		{
			if (iVar911 == 65536)
			{
				return true;
			}
		}
	}
	if (func_117(Global_35, iVar985, 1, 0))
	{
		if (!bVar963)
		{
			func_45(1, 0, 0, 0, &(uLocal_731[0]), 0, 1065353216, 0);
			iLocal_965 = 1;
		}
		return true;
	}
	if (func_250())
	{
		return true;
	}
	if (func_251())
	{
		return true;
	}
	if (bVar962)
	{
		return true;
	}
	return false;
}

void func_113()
{
	func_115(Local_819[1], 0, 0);
	func_115(Local_819[0], 0, 0);
	func_115(Local_875[0], 0, 0);
	func_115(Local_875[1], 0, 0);
}

void func_114(int iParam0)
{
	func_252(&uLocal_0);
	func_253(1, iParam0, 0);
	_0xdd1232b332cbb9e7(3, 1, 0);
	func_254();
}

void func_115(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_255(iParam0, 13))
	{
		func_256(iParam0, 0);
	}
	else
	{
		func_257(iParam0, 0);
	}
	if (func_196(iParam0->f_6))
	{
		if (bParam2)
		{
			func_258(&(iParam0->f_6), 0, 1);
		}
	}
}

void func_116()
{
	func_259();
	func_260(&(uLocal_731[0]), Global_35, 2, 2, -1f);
	if (is_ped_active_in_scenario(&(uLocal_731[1]), 0))
	{
		func_260(&(uLocal_731[1]), Global_35, 2, 2, 1086324736);
	}
	else
	{
		task_turn_ped_to_face_entity(&(uLocal_731[1]), Global_35, -1, -1082130432, -1082130432, -1082130432);
	}
}

bool func_117(int iParam0, int iParam1, bool bParam2, int iParam3)
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

char* func_118(int iParam0)
{
	if (iLocal_86 == 2)
	{
		switch (iParam0)
		{
			case 0:
				return "RE_TB_RHD_V3_FUNERAL_INITIAL_A";
			case 1:
				return "RE_TB_RHD_V3_FUNERAL_INITIAL_B";
			case 2:
				return "RE_TB_RHD_V3_FNL_OUTLAW_A";
			case 3:
				return "RE_TB_RHD_V3_FNL_OUTLAW_B";
			case 4:
				return "RE_TB_RHD_V3_FNL_OUTLAW_C";
			case 5:
				return "RE_TB_RHD_V3_FNL_OUTLAW_D";
			case 6:
				return "RE_TB_RHD_V3_FNL_OUTLAW_E";
			case 7:
				return "RE_TB_RHD_V3_FNL_OUTLAW_F";
			case 8:
				return "RE_TB_RHD_V3_FNL_OUTLAW_G";
			case 9:
				return "RE_TB_RHD_V3_FNL_OUTLAW_E";
			case 10:
				return "RE_TB_RHD_V3_TALK";
			case 11:
				return "RE_TB_RHD_V3_TALK_POS_RPLY";
			case 12:
				return "RE_TB_RHD_V3_TALK_POS";
			case 14:
				return "RE_TB_RHD_V3_TALK_NEG_RPLY";
			case 15:
				return "RE_TB_RHD_V3_TALK_NEG";
			case 16:
				return "RE_TB_RHD_V0_WRN_D";
			case 17:
				return "RE_TB_RHD_V0_WRN_A";
			case 18:
				return "RE_TB_RHD_V0_WRN_C";
			case 19:
				return "";
			case 20:
				return "";
			case 21:
				return "RE_TB_RHD_V3_AGGRO_A";
			case 22:
				return "";
			case 23:
				return "";
			case 24:
				return "";
			case 25:
				return "";
			case 26:
				return "";
			case 33:
				return "RE_TB_RHD_V3_PLAYER_ILO_POS_B";
			case 34:
				return "RE_TB_RHD_V3_PLAYER_ILO_NEG_B";
			case 35:
				return "RE_TB_RHD_V3_PREACHER_ILO_POS_B";
			case 36:
				return "RE_TB_RHD_V3_PREACHER_ILO_NEG_B";
			case 39:
				return "RE_TB_RHD_V3_PLY_ILO_POS";
			case 40:
				return "RE_TB_RHD_V3_PREACHER_ILO_POS";
			case 41:
				return "RE_TB_RHD_V3_PLY_ILO_NEG_A";
			case 42:
				return "RE_TB_RHD_V3_PREACHER_ILO_NEG_A";
			case 43:
				return "RE_TB_RHD_V3_PLY_DEFUSE";
			case 45:
				return "RE_TB_RHD_V3_PREACHER_DEFUSE";
			case 44:
				return "RE_TB_RHD_V3_PLY_ILO_NEG_B";
			case 46:
				return "RE_TB_RHD_V3_PREACHER_ILO_NEG_B2";
			case 47:
				return "RE_TB_RHD_V3_PLY_ILO_NEG_C";
			case 48:
				return "RE_TB_RHD_V3_PREACHER_ILO_NEG_C";
		}
	}
	else if (iLocal_86 == 0)
	{
		switch (iParam0)
		{
			case 0:
				return "RE_TB_BLK_V1_FUNERAL_INITIAL_A";
			case 1:
				return "RE_TB_BLK_V1_FUNERAL_INITIAL_B";
			case 2:
				return "RE_TB_BLK_V1_FNL_OUTLAW_A";
			case 3:
				return "RE_TB_BLK_V1_FNL_OUTLAW_B";
			case 4:
				return "RE_TB_BLK_V1_FNL_OUTLAW_C";
			case 5:
				return "RE_TB_BLK_V1_FNL_OUTLAW_D";
			case 6:
				return "RE_TB_BLK_V1_FNL_OUTLAW_E";
			case 7:
				return "RE_TB_BLK_V1_FNL_OUTLAW_F";
			case 9:
				return "RE_TB_BLK_V1_FNL_OUTLAW_END";
			case 10:
				return "RE_TB_BLK_V1_TALK";
			case 11:
				return "RE_TB_BLK_V1_TALK_POS_RPLY";
			case 12:
				return "RE_TB_BLK_V1_TALK_POS";
			case 14:
				return "RE_TB_BLK_V1_TALK_NEG_RPLY";
			case 15:
				return "RE_TB_BLK_V1_TALK_NEG";
			case 16:
				return "RE_TB_BLK_V0_WRN_D";
			case 17:
				return "RE_TB_BLK_V0_WRN_A";
			case 18:
				return "RE_TB_BLK_V0_WRN_C";
			case 19:
				return "";
			case 20:
				return "";
			case 21:
				return "RE_TB_BLK_V1_AGGRO_A";
			case 22:
				return "";
			case 23:
				return "";
			case 24:
				return "";
			case 25:
				return "";
			case 26:
				return "";
			case 27:
				return "";
			case 28:
				return "";
			case 33:
				return "RE_TB_BLK_V1_PLAYER_ILO_POS_B";
			case 34:
				return "RE_TB_BLK_V1_PLAYER_ILO_NEG_B";
			case 35:
				return "RE_TB_BLK_V1_PREACHER_MID_ILO_POS_B";
			case 36:
				return "RE_TB_BLK_V1_PREACHER_MID_ILO_NEG_B";
			case 39:
				return "RE_TB_BLK_V1_PLY_ILO_POS";
			case 40:
				return "RE_TB_BLK_V1_PREACHER_ILO_POS";
			case 41:
				return "RE_TB_BLK_V1_PLY_ILO_NEG_A";
			case 42:
				return "RE_TB_BLK_V1_PREACHER_ILO_NEG_A";
			case 43:
				return "RE_TB_BLK_V1_PLY_DEFUSE";
			case 45:
				return "RE_TB_BLK_V1_PREACHER_DEFUSE";
			case 44:
				return "RE_TB_BLK_V1_PLY_ILO_NEG_B";
			case 46:
				return "RE_TB_BLK_V1_PREACHER_MID_ILO_POS_B";
			case 47:
				return "RE_TB_BLK_V1_PLY_ILO_NEG_C";
			case 48:
				return "RE_TB_BLK_V1_PREACHER_ILO_NEG_C";
		}
	}
	else if (iLocal_86 == 1)
	{
		switch (iParam0)
		{
			case 0:
				return "RE_TB_BLK_V2_FUNERAL_INITIAL_A";
			case 1:
				return "RE_TB_BLK_V2_FUNERAL_INITIAL_B";
			case 2:
				return "RE_TB_BLK_V2_FNL_OUTLAW_A";
			case 3:
				return "RE_TB_BLK_V2_FNL_OUTLAW_B";
			case 4:
				return "RE_TB_BLK_V2_FNL_OUTLAW_C";
			case 5:
				return "RE_TB_BLK_V2_FNL_OUTLAW_D";
			case 6:
				return "RE_TB_BLK_V2_FNL_OUTLAW_E";
			case 7:
				return "RE_TB_BLK_V2_FNL_OUTLAW_F";
			case 9:
				return "RE_TB_BLK_V2_FNL_OUTLAW_END";
			case 10:
				return "RE_TB_BLK_V2_TALK";
			case 11:
				return "RE_TB_BLK_V2_TALK_POS_RPLY";
			case 12:
				return "RE_TB_BLK_V2_TALK_POS_RPLY";
			case 14:
				return "RE_TB_BLK_V2_TALK_NEG_RPLY";
			case 15:
				return "RE_TB_BLK_V2_TALK_NEG_RPLY";
			case 16:
				return "RE_TB_BLK_V0_WRN_D";
			case 17:
				return "RE_TB_BLK_V0_WRN_A";
			case 18:
				return "RE_TB_BLK_V0_WRN_C";
			case 19:
				return "";
			case 20:
				return "";
			case 21:
				return "RE_TB_BLK_V2_AGGRO_A";
			case 22:
				return "";
			case 23:
				return "";
			case 24:
				return "";
			case 25:
				return "";
			case 26:
				return "";
			case 27:
				return "";
			case 28:
				return "RE_TB_BLK_V2_PREACHER_INTERACTION_B";
			case 33:
				return "RE_TB_BLK_V2_PLAYER_ILO_POS_B";
			case 34:
				return "RE_TB_BLK_V2_PLAYER_ILO_NEG_B";
			case 35:
				return "RE_TB_BLK_V2_PREACHER_MID_ILO_POS_B";
			case 36:
				return "RE_TB_BLK_V2_PREACHER_MID_ILO_NEG_B";
			case 39:
				return "RE_TB_BLK_V2_PLY_ILO_POS";
			case 40:
				return "RE_TB_BLK_V2_PREACHER_ILO_POS";
			case 41:
				return "RE_TB_BLK_V2_PLY_ILO_NEG_A";
			case 42:
				return "RE_TB_BLK_V2_PREACHER_ILO_NEG_A";
			case 43:
				return "RE_TB_BLK_V2_PLY_DEFUSE";
			case 45:
				return "RE_TB_BLK_V2_PREACHER_DEFUSE";
			case 44:
				return "RE_TB_BLK_V2_PLY_ILO_NEG_B";
			case 46:
				return "RE_TB_BLK_V2_PREACHER_MID_ILO_NEG_B";
			case 47:
				return "RE_TB_BLK_V2_PLY_ILO_NEG_C";
			case 48:
				return "RE_TB_BLK_V2_PREACHER_ILO_NEG_C";
		}
	}
	return "RERC_ODR_V1_END_A";
}

bool func_119(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_261(iParam0, iParam1, sParam2, sParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

void func_120(var uParam0)
{
	func_262(uParam0, 0f);
}

float func_121(var uParam0)
{
	if (!func_263(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_264(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_265() - uParam0->f_1);
}

void func_122()
{
	func_266();
	func_267(&(uLocal_731[0]), 2);
	if (is_ped_active_in_scenario(&(uLocal_731[1]), 0))
	{
		func_267(&(uLocal_731[1]), 2);
	}
	else
	{
		func_268();
	}
}

bool func_123(int iParam0, bool bParam1)
{
	if (func_49(iParam0, 0, 1))
	{
		return (is_scripted_speech_playing(iParam0) || (bParam1 && is_any_speech_playing(iParam0)));
	}
	return false;
}

int func_124()
{
	return Global_1572887->f_12;
}

int func_125(int iParam0)
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

void func_126(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_269();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_270(iParam0);
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
	if (func_271(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_272())
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
	Global_40.f_11095.f_35 = func_273(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_269();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_274(iVar1);
		func_276(func_275(), 0, 4000);
		func_277(Global_40.f_11095.f_35);
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
		func_278(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_280(func_279(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (does_entity_exist(iParam5))
			{
				decor_set_int(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_125(14))
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
					sParam4 = func_281(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_282(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_282(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_280(func_279(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_125(4))
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
					sParam4 = func_281(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_282(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_282(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_279(-1990689970) };
	stat_id_set_int(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		_0xe6b763c7f4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_283(10, 1);
	}
}

void func_127(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

void func_128()
{
	if (!bVar961)
	{
		if (iVar763 > 1)
		{
			if (_0x7f9b9791d4cb71f6(Global_35, &(uLocal_731[0]), 0, 0) == 1)
			{
				if (iVar767 > 2)
				{
					Local_87.f_44 = 1;
					iLocal_963 = 1;
					func_284();
				}
			}
		}
	}
}

void func_129()
{
	if (bVar944)
	{
		if (bVar958)
		{
			if (func_285())
			{
				iLocal_960 = 0;
			}
		}
	}
}

void func_130()
{
	if (iVar763 > 1)
	{
		if (!bVar959)
		{
			if (func_247(&(uLocal_731[1]), 0, &(Local_87.f_5), &uLocal_913, 1, 0))
			{
				if (iVar911 == 2048)
				{
					clear_sequence_task(&uLocal_978);
					open_sequence_task(&uLocal_978);
					if (is_entity_in_volume(&(uLocal_731[2]), iVar985, true, 0))
					{
						task_climb(0, true);
					}
					task_follow_nav_mesh_to_coord(0, vLocal_20, 1f, -1, 0.25f, 0, 40000f);
					_task_use_nearest_scenario_to_coord(0, vLocal_20, 5f, 0, false, false, true, false);
					close_sequence_task(iVar976);
					task_perform_sequence(&(uLocal_731[1]), iVar976);
					clear_sequence_task(&uLocal_978);
					set_ped_keep_task(&(uLocal_731[2]), true);
					iLocal_961 = 1;
				}
			}
		}
	}
}

void func_131()
{
	iLocal_918 = func_286(uLocal_731[0], &iLocal_854, 20f, &Local_875, &(Local_87.f_192), 0f, 1, 0, 0, iVar912, 0, 0, 2, 1, -1082130432, 0);
	if (!bVar957)
	{
		switch (iVar926)
		{
			case 0:
				if (func_123(&(uLocal_731[0]), 0))
				{
					func_287(0);
				}
				else
				{
					func_287(1);
				}
				if (iVar916 == 0)
				{
					func_287(0);
					func_115(Local_819[0], 0, 0);
					func_115(Local_819[1], 0, 0);
					func_260(&(uLocal_731[0]), Global_35, 1, 1, 1086324736);
					func_119(Global_35, &(uLocal_731[0]), func_118(33), 0, -1082130432, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					iLocal_968 = 1;
					iLocal_941 = 1;
					iLocal_928 = 1;
				}
				else if (iVar916 == 1)
				{
					func_287(0);
					func_260(&(uLocal_731[0]), Global_35, 3, 1, 1086324736);
					func_119(Global_35, &(uLocal_731[0]), func_118(34), 0, -1082130432, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					func_115(Local_819[0], 0, 0);
					func_115(Local_819[1], 0, 0);
					iLocal_968 = 1;
					iLocal_941 = 1;
					iLocal_928 = 2;
				}
				break;
			case 1:
				if (!func_123(Global_35, 0))
				{
					func_119(&(uLocal_731[0]), Global_35, func_118(35), 0, -1082130432, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					iLocal_928 = 3;
				}
				break;
			case 2:
				if (!func_123(Global_35, 0))
				{
					func_119(&(uLocal_731[0]), Global_35, func_118(36), 0, -1082130432, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					iLocal_928 = 3;
				}
				break;
			case 3:
				if (!func_123(&(uLocal_731[0]), 0))
				{
					iLocal_968 = 0;
					iLocal_941 = 0;
					iLocal_928 = iVar926 + 1;
				}
				break;
		}
	}
	else
	{
		switch (iVar925)
		{
			case 0:
				func_200(Local_875[0], func_80(7));
				func_200(Local_875[1], func_80(10));
				func_288(&iLocal_854, 0);
				iLocal_927 = iVar925 + 1;
				break;
			case 1:
				if (func_123(&(uLocal_731[0]), 0))
				{
					func_287(0);
				}
				else
				{
					func_287(1);
				}
				if (iVar916 == 0)
				{
					func_287(0);
					func_119(Global_35, &(uLocal_731[0]), func_118(39), 0, -1082130432, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					iLocal_927 = 2;
				}
				else if (iVar916 == 1)
				{
					func_287(0);
					func_119(Global_35, &(uLocal_731[0]), func_118(41), 0, -1082130432, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					iLocal_927 = 3;
				}
				break;
			case 2:
				if (!func_123(Global_35, 0))
				{
					func_119(&(uLocal_731[0]), Global_35, func_118(40), 0, -1082130432, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					iLocal_927 = 4;
				}
				break;
			case 3:
				if (!func_123(Global_35, 0))
				{
					func_119(&(uLocal_731[0]), Global_35, func_118(42), 0, -1082130432, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					iLocal_927 = 5;
				}
				break;
			case 4:
				if (!func_123(&(uLocal_731[0]), 0))
				{
					func_115(Local_875[0], 0, 0);
					func_115(Local_875[1], 1, 0);
					if (iVar916 == 1)
					{
						func_287(0);
						func_119(Global_35, &(uLocal_731[0]), func_118(41), 0, -1082130432, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
						iLocal_967 = 1;
						iLocal_927 = 6;
					}
				}
				else
				{
					func_287(0);
				}
				break;
			case 5:
				if (!func_123(&(uLocal_731[0]), 0))
				{
					func_200(Local_875[0], func_80(8));
					func_200(Local_875[1], func_80(10));
					func_288(&iLocal_854, 0);
					iLocal_927 = 6;
				}
				break;
			case 6:
				if (!bVar965)
				{
					if (iVar916 == 0)
					{
						func_287(0);
						func_119(Global_35, &(uLocal_731[0]), func_118(43), 0, -1082130432, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
						iLocal_927 = 7;
					}
				}
				if (iVar916 == 1)
				{
					func_287(0);
					func_119(Global_35, &(uLocal_731[0]), func_118(44), 0, -1082130432, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					iLocal_927 = 8;
				}
				break;
			case 7:
				if (!func_123(Global_35, 0))
				{
					func_119(&(uLocal_731[0]), Global_35, func_118(45), 0, -1082130432, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					iLocal_927 = 9;
				}
				break;
			case 8:
				if (!func_123(Global_35, 0))
				{
					func_119(&(uLocal_731[0]), Global_35, func_118(46), 0, -1082130432, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					iLocal_927 = 9;
				}
				break;
			case 9:
				if (!func_123(&(uLocal_731[0]), 0))
				{
					func_200(Local_875[0], func_80(8));
					func_200(Local_875[1], func_80(10));
					func_288(&iLocal_854, 0);
					func_115(Local_875[0], 0, 0);
					func_115(Local_875[1], 1, 0);
					iLocal_927 = 10;
				}
				break;
			case 10:
				if (iVar916 == 1)
				{
					func_287(0);
					func_119(Global_35, &(uLocal_731[0]), func_118(47), 0, -1082130432, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					iLocal_927 = 11;
				}
				break;
			case 11:
				if (!func_123(Global_35, 0))
				{
					func_119(&(uLocal_731[0]), Global_35, func_118(48), 0, -1082130432, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					_task_flee_from_ped(&(uLocal_731[0]), Global_35, 0f, 0f, 0f, 100f, -1, 0, 3f, 0);
					_0xe737d5f14304a2ec(&(uLocal_731[0]), player_id(), 120000);
					_0x24c82ef607105faa(&(uLocal_731[0]), -920810745);
					func_86(&(uLocal_731[0]), 1, 1);
					func_289(uLocal_731[0], 1, 0, 1);
					iLocal_927 = 12;
				}
				break;
			case 12:
				break;
		}
	}
}

void func_132()
{
	if (iLocal_86 != 2)
	{
		iLocal_940 = func_286(uLocal_731[1], &iLocal_798, 20f, &Local_819, &(Local_87.f_192), 0, 1, 0, "", iVar912, 0, 0, 2, 1, -1082130432, 0);
		if ((bVar941 && !func_112()) && !bVar966)
		{
			iLocal_933 = 15;
			iLocal_934 = 12;
			iLocal_935 = 5;
			if (bVar940)
			{
				if (func_49(&(uLocal_731[1]), 0, 1))
				{
					if (func_290(&(uLocal_731[1]), 1, 1) > IntToFloat(iVar931) || func_117(Global_35, iVar985, 1, 0))
					{
						func_115(Local_819[0], 0, 0);
						func_115(Local_819[1], 0, 0);
						func_291(&uLocal_920, 2);
						func_89();
						set_entity_is_target_priority(&(uLocal_731[1]), false, 0f);
						func_267(&(uLocal_731[0]), 1);
						iLocal_948 = 0;
						iLocal_941 = 0;
						iLocal_942 = 0;
					}
				}
			}
			if (!func_292(iVar918, 2))
			{
				switch (iVar769)
				{
					case 0:
						func_115(Local_819[0], 0, 0);
						func_115(Local_819[1], 0, 0);
						if (func_290(&(uLocal_731[1]), 1, 1) < IntToFloat(iVar932))
						{
							_0x66f9eb44342bb4c5(&(uLocal_731[1]), &Local_773);
							if (func_290(&(uLocal_731[1]), 1, 1) < IntToFloat(iVar933))
							{
								iLocal_771 = 1;
							}
						}
						break;
					case 1:
						if (func_290(&(uLocal_731[1]), 1, 1) < IntToFloat(iVar933) && is_entity_in_volume(Global_35, iVar988, true, 0))
						{
							if (is_ped_active_in_scenario(&(uLocal_731[1]), 0))
							{
								func_260(&(uLocal_731[1]), Global_35, 2, 1, 60f);
							}
							else
							{
								open_sequence_task(&iVar0);
								task_react(0, Global_35, 0f, 0f, 0f, "Default_Curious", 1f, 60f, 4);
								task_turn_ped_to_face_entity(0, Global_35, 0, -1082130432, -1082130432, -1082130432);
								func_293(&(uLocal_731[1]), &iVar0, 0, 0, 1, 1);
							}
							iLocal_942 = 1;
							iLocal_948 = 1;
							set_entity_is_target_priority(&(uLocal_731[1]), true, 0f);
							iLocal_771 = 2;
						}
						break;
					case 2:
						if ((func_49(&(uLocal_731[1]), 0, 1) && bVar946) && !func_123(&(uLocal_731[0]), 0))
						{
							func_119(&(uLocal_731[1]), Global_35, func_118(10), 0, -1082130432, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							func_260(&(uLocal_731[1]), Global_35, 2, 1, 1086324736);
							if (!bVar961)
							{
								Local_87.f_44 = 1;
								iLocal_963 = 1;
								func_284();
							}
							iLocal_949 = 1;
							func_120(&uLocal_1001);
							func_120(&uLocal_1025);
							iLocal_771 = 3;
						}
						break;
					case 3:
						if (!func_123(&(uLocal_731[1]), 0))
						{
							func_115(Local_819[0], 1, 0);
							func_115(Local_819[1], 1, 0);
							if (iVar938 == 0)
							{
								func_115(Local_819[0], 0, 0);
								func_115(Local_819[1], 0, 0);
								iLocal_771 = 4;
							}
							if (iVar938 == 1)
							{
								func_115(Local_819[0], 0, 0);
								func_115(Local_819[1], 0, 0);
								iLocal_771 = 5;
							}
							if (func_121(&uLocal_1001) > 15f)
							{
								func_115(Local_819[0], 0, 0);
								func_115(Local_819[1], 0, 0);
								iLocal_771 = 7;
							}
						}
						break;
					case 4:
						func_119(Global_35, &(uLocal_731[1]), func_118(12), 0, -1082130432, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
						iLocal_771 = 6;
						break;
					case 5:
						func_119(Global_35, &(uLocal_731[1]), func_118(15), 0, -1082130432, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
						iLocal_771 = 7;
						break;
					case 6:
						if (!func_123(Global_35, 0))
						{
							func_260(&(uLocal_731[1]), Global_35, 2, 1, 1086324736);
							func_119(&(uLocal_731[1]), Global_35, func_118(11), 0, -1082130432, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							iLocal_771 = 8;
						}
						break;
					case 7:
						if (!func_123(Global_35, 0))
						{
							func_260(&(uLocal_731[1]), Global_35, 1, 2, 1086324736);
							func_119(&(uLocal_731[1]), Global_35, func_118(14), 0, -1082130432, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							iLocal_771 = 8;
						}
						break;
					case 8:
						if (!func_123(&(uLocal_731[1]), 0))
						{
							iLocal_771 = 13;
						}
						break;
					case 9:
						break;
					case 10:
						break;
					case 11:
						break;
					case 12:
						break;
					case 13:
						func_249(&Local_819, 0, 0, 1, 0);
						_0x24c82ef607105faa(&(uLocal_731[1]), -920810745);
						_0x541e5b41dca45828(&(uLocal_731[0]), 1, 0);
						iLocal_771 = 14;
						break;
					case 14:
						task_clear_look_at(&(uLocal_731[1]));
						set_entity_is_target_priority(&(uLocal_731[1]), false, 0f);
						if (!is_ped_using_any_scenario(&(uLocal_731[1])))
						{
							_task_use_scenario_point(&(uLocal_731[1]), iVar984, sVar997, 0, false, false, 0, false, -1f, false);
						}
						iLocal_947 = 0;
						iLocal_948 = 0;
						iLocal_943 = 0;
						iLocal_941 = 0;
						break;
				}
			}
		}
	}
}

void func_133()
{
	if ((iLocal_86 == 2 || iLocal_86 == 0) || iLocal_86 == 1)
	{
		if (!bVar942)
		{
			iVar0 = 0;
			while (iVar0 < 7)
			{
				if (func_49(&(uLocal_731[iVar0]), 0, 1))
				{
					_0x8b3b71c80a29a4bb(&(uLocal_731[iVar0]), -725351883, 6);
				}
				iVar0++;
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 7)
			{
				if (func_49(&(uLocal_731[iVar0]), 0, 1))
				{
					_0x8b3b71c80a29a4bb(&(uLocal_731[iVar0]), 137506481, 6);
				}
				iVar0++;
			}
		}
	}
}

void func_134()
{
	if (has_anim_event_fired(&(uLocal_731[0]), -1026974320))
	{
		iLocal_950 = 1;
	}
	if (has_anim_event_fired(&(uLocal_731[0]), 2022082827))
	{
		iLocal_951 = 1;
	}
	if (has_anim_event_fired(&(uLocal_731[0]), -432511891))
	{
		iLocal_952 = 1;
	}
	if (has_anim_event_fired(&(uLocal_731[0]), -1707488143))
	{
		iLocal_953 = 1;
	}
	if (has_anim_event_fired(&(uLocal_731[0]), -1949159518))
	{
		iLocal_954 = 1;
	}
	if (has_anim_event_fired(&(uLocal_731[0]), 1118641373))
	{
		iLocal_955 = 1;
	}
	if (has_anim_event_fired(&(uLocal_731[0]), -1353779557))
	{
		iLocal_956 = 1;
	}
}

void func_135()
{
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (func_49(&(uLocal_731[iVar0]), 0, 1))
		{
			set_ped_reset_flag(&(uLocal_731[iVar0]), 12, true);
		}
		iVar0++;
	}
}

bool func_136()
{
	switch (func_3())
	{
		case 105:
			fVar0 = 55f;
			fVar1 = 45f;
			break;
		case 38:
			fVar0 = 50f;
			fVar1 = 30f;
			break;
	}
	switch (iVar930)
	{
		case 0:
			if (func_150(&(uLocal_731[0]), Global_35, 1, 1) < fVar0)
			{
				func_119(&(uLocal_731[0]), Global_35, func_118(0), "", 100f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				func_294(1891783641, &(uLocal_731[0]), 1);
				func_120(&uLocal_1013);
				uLocal_932 = iVar930 + 1;
			}
			break;
		case 1:
			if ((func_121(&uLocal_1013) > 4f && func_150(&(uLocal_731[0]), Global_35, 1, 1) < fVar1) || func_121(&uLocal_1013) > 7f)
			{
				if (!func_123(&(uLocal_731[0]), 0))
				{
					func_119(&(uLocal_731[0]), Global_35, func_118(1), "", 100f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					uLocal_932 = iVar930 + 1;
				}
			}
			break;
		case 2:
			return true;
	}
	return false;
}

bool func_137(var uParam0, float fParam1, int iParam2, float fParam3, int iParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, bool bParam11)
{
	bVar1 = false;
	fVar2 = func_221(uParam0, bVar1);
	fVar3 = fVar2;
	if (!bParam11 && fVar2 < fParam3)
	{
	}
	if (fParam5 > 0f)
	{
		if (get_entity_speed(Global_35) > fParam5)
		{
			return false;
		}
	}
	if (fParam7 > 0f)
	{
		if (absf((Global_36.f_2 - uParam0->f_51.f_2)) >= fParam7)
		{
			return false;
		}
	}
	if (uParam0->f_178 && func_220())
	{
		bVar1 = true;
		fVar3 = func_158(bVar1, fParam9, fVar2);
	}
	if (uParam0->f_48 && (!bParam10 || (!_does_volume_exist(uParam0->f_173) || is_entity_in_volume(Global_35, uParam0->f_173, true, 0))))
	{
		if (iParam4 > 1)
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_121)
			{
				func_222(uParam0->f_121[iVar0], fVar3, 1082130432, 1, 90f, 0, 0);
				iVar0++;
			}
		}
		else
		{
			func_222(uParam0->f_121[0], fVar3, 1082130432, 1, 90f, 0, 0);
		}
		if (func_223(&(uParam0->f_121), iParam4, fParam1))
		{
			func_105(&(uParam0->f_121));
			if (uParam0->f_186)
			{
				_0xb2a38826e5886e83(func_162(uParam0->f_3, uParam0->f_185), 0);
			}
			return true;
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
							return false;
						}
					}
					if (bParam6)
					{
						func_104(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
					}
				}
				func_105(&(uParam0->f_121));
				if (uParam0->f_186)
				{
					_0xb2a38826e5886e83(func_162(uParam0->f_3, uParam0->f_185), 0);
				}
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_138(var uParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, float fParam9)
{
	fVar0 = 35f;
	if (func_224())
	{
		fVar0 = 30f;
	}
	func_295(iParam6, vParam1 + Vector(2f, 0f, 0f), iParam4, iParam5, fParam9, iParam7, 1073741824, uParam8, fVar0, 3, 1, 1);
	uParam0->f_170 = 1;
}

bool func_139()
{
	if (bVar939)
	{
		return false;
	}
	set_ped_can_play_ambient_anims(&(uLocal_731[0]), false);
	switch (iVar767)
	{
		case -1:
			if (_0x02ebbb3989b7e695(&(uLocal_731[0])))
			{
				if (func_121(&uLocal_1001) > 3f && !func_123(&(uLocal_731[0]), 0))
				{
					iLocal_769 = 0;
				}
			}
			break;
		case 0:
			if (func_296(0, 0))
			{
				if (bVar948)
				{
					func_119(&(uLocal_731[0]), Global_35, func_118(2), "", 200f, 0, 0, 0, 1, 0, 0, 291934926, 1, 0, 0);
					iLocal_959 = 0;
					func_120(&uLocal_1001);
					if (iLocal_86 == 2)
					{
						iLocal_769 = 2;
					}
					else
					{
						iLocal_769 = 1;
					}
				}
			}
			break;
		case 1:
			if (func_296(1, 0))
			{
				if (bVar949)
				{
					func_119(&(uLocal_731[0]), Global_35, func_118(3), "", 200f, 0, 0, 0, 2, 1, 0, 291934926, 1, 0, 0);
					func_120(&uLocal_1001);
					iLocal_769 = 2;
				}
			}
			break;
		case 2:
			if (func_296(2, 0) && bVar950)
			{
				func_119(&(uLocal_731[0]), Global_35, func_118(4), "", 200f, 0, 0, 0, 2, 1, 0, 291934926, 1, 0, 0);
				func_120(&uLocal_1001);
				iLocal_769 = 3;
			}
			break;
		case 3:
			if (iLocal_86 == 2)
			{
				if (func_296(3, 0) && bVar951)
				{
					func_119(&(uLocal_731[0]), Global_35, func_118(5), "", 200f, 0, 0, 0, 2, 1, 0, 291934926, 1, 0, 0);
					func_120(&uLocal_1001);
					iLocal_769 = 4;
				}
			}
			if (iLocal_86 == 1 || iLocal_86 == 0)
			{
				if (!bVar955 || bVar956)
				{
					iLocal_769 = 5;
				}
				else if (func_296(3, 0) && bVar951)
				{
					func_119(&(uLocal_731[0]), Global_35, func_118(5), "", 200f, 0, 0, 0, 2, 1, 0, 291934926, 1, 0, 0);
					func_120(&uLocal_1001);
					iLocal_769 = 4;
				}
			}
			break;
		case 4:
			if (iLocal_86 == 2)
			{
				if (func_296(4, 0) && bVar952)
				{
					func_119(&(uLocal_731[0]), Global_35, func_118(6), "", 200f, 0, 0, 0, 2, 1, 0, 291934926, 1, 0, 0);
					func_120(&uLocal_1001);
					iLocal_769 = 6;
				}
			}
			else if (func_296(4, 0) && bVar952)
			{
				func_119(&(uLocal_731[0]), Global_35, func_118(6), "", 200f, 0, 0, 0, 2, 1, 0, 291934926, 1, 0, 0);
				func_120(&uLocal_1001);
				iLocal_769 = 5;
			}
			break;
		case 5:
			if (func_296(5, 0) && bVar953)
			{
				func_119(&(uLocal_731[0]), Global_35, func_118(7), "", 200f, 0, 0, 0, 2, 1, 0, 291934926, 1, 0, 0);
				func_120(&uLocal_1001);
				iLocal_769 = 6;
			}
			break;
		case 6:
			if ((func_296(6, 0) && bVar954) || (iLocal_86 == 2 && func_121(&uLocal_1001) > 3f))
			{
				func_119(&(uLocal_731[0]), Global_35, func_118(9), "", 200f, 0, 0, 0, 2, 1, 0, 291934926, 1, 0, 0);
				func_120(&uLocal_1001);
				iLocal_769 = 7;
			}
			break;
		case 7:
			if (_0x02ebbb3989b7e695(&(uLocal_731[0])))
			{
				func_120(&uLocal_1001);
				iLocal_959 = 1;
				iLocal_769 = 8;
			}
			break;
		case 8:
			if (func_297())
			{
				func_120(&uLocal_1001);
				iLocal_769 = 9;
			}
			break;
		case 9:
			return true;
	}
	return false;
}

bool func_140()
{
	switch (iVar914)
	{
		case 0:
			if (func_49(&(uLocal_731[0]), 0, 1))
			{
				uLocal_915 = _0x6f3068258a499e52(-1305182512, get_entity_coords(&(uLocal_731[0]), true, false), 11);
				uLocal_916 = iVar914 + 1;
			}
			break;
		case 1:
			_0x4735e2a4bb83d9da(uVar913);
			iLocal_993 = get_object_index_from_entity_index(_0x4735e2a4bb83d9da(uVar913));
			_0xce7a6c1d5cde1f9d(&(uLocal_731[0]), uVar991, "p_cs_book04x_PH_R_HAND", "CODE_HUMAN_BOOK_WANDER");
			attach_entity_to_entity(iVar990, &(uLocal_731[0]), get_ped_bone_index(&(uLocal_731[0]), 7966), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
			_0xe8abe3b73fc7fe17(&(uLocal_731[0]), uVar991, "p_cs_book04x_PH_R_HAND", "CODE_HUMAN_BOOK_WANDER");
			uLocal_916 = iVar914 + 1;
			break;
		case 2:
			_0xa3a9299c4f2adb98(&(uLocal_731[0]));
			clear_sequence_task(&iVar0);
			open_sequence_task(&iVar0);
			if (is_entity_in_volume(&(uLocal_731[0]), iVar985, true, 0))
			{
				task_climb(0, true);
			}
			task_follow_nav_mesh_to_coord(0, vLocal_14, 1f, -1, 5f, 1, 40000f);
			_task_use_nearest_scenario_to_coord(0, vLocal_14, 10f, 0, false, false, true, false);
			func_293(&(uLocal_731[0]), &iVar0, 0, 0, 1, 1);
			func_249(&Local_875, 0, 0, 1, 0);
			uLocal_916 = iVar914 + 1;
			break;
		case 3:
			if (!func_123(&(uLocal_731[0]), 0) && !func_123(Global_35, 0))
			{
				func_86(&(uLocal_731[0]), 1, 1);
				uLocal_916 = iVar914 + 1;
			}
			break;
		case 4:
			return true;
	}
	return false;
}

bool func_141()
{
	switch (iVar927)
	{
		case 0:
			_0xe737d5f14304a2ec(&(uLocal_731[1]), player_id(), 120000);
			func_86(&(uLocal_731[1]), 1, 1);
			if (!bVar944)
			{
				func_298(&(uLocal_731[1]), 1285815972, Local_281[1]->f_6, uVar760, -1, 1, 0, "WORLD_HUMAN_DRINK_FLASK_MALE_A", -1082130432);
			}
			else
			{
				_task_smart_flee_style_ped(&(uLocal_731[1]), Global_35, 8, 0, -1082130432, -1, 0);
			}
			uLocal_929 = iVar927 + 1;
			break;
		case 1:
			return true;
	}
	return false;
}

bool func_142()
{
	if (!bVar944)
	{
		if (func_299())
		{
			return true;
		}
	}
	else if (func_300())
	{
		return true;
	}
	return false;
}

float func_143(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

void func_144()
{
	iVar0 = 0;
	while (iVar0 < 7)
	{
		_0xe737d5f14304a2ec(&(uLocal_731[iVar0]), player_id(), 120000);
		func_86(&(uLocal_731[iVar0]), 1, 1);
		func_289(uLocal_731[iVar0], 1, 0, 1);
		iVar0++;
	}
}

bool func_145()
{
	if (!func_301(Global_1395482->f_1))
	{
		return false;
	}
	return func_302(Global_1395482->f_1, 32);
}

bool func_146(int iParam0)
{
	if (func_61(iParam0, 1))
	{
		return false;
	}
	return (1 == func_303(iParam0) || 2 == func_303(iParam0));
}

float func_147(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

bool func_148(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_149(var uParam0, vector3 vParam1, int iParam4)
{
	if (!uParam0->f_182 || iParam4 == 1)
	{
		uParam0->f_183 = _blip_add_for_coord(1260140857, vParam1);
		uParam0->f_182 = 1;
	}
}

float func_150(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_151(var uParam0, int iParam1, int iParam2)
{
	if (!uParam0->f_182 || iParam2 == 1)
	{
		if (does_entity_exist(iParam1))
		{
			uParam0->f_183 = _blip_add_for_entity(1260140857, iParam1);
			uParam0->f_182 = 1;
		}
	}
}

bool func_152(int iParam0, int iParam1)
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
	if (func_292(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_292(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_292(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_292(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_292(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_292(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_292(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_292(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

char* func_153(int iParam0)
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

void func_154(int iParam0, int iParam1)
{
	if (!func_183(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_1 = ((*Global_1310750)[iParam0]->f_1 || iParam1);
}

void func_155(int iParam0, bool bParam1)
{
	if (func_49(iParam0, 0, 1))
	{
		set_blocking_of_non_temporary_events(iParam0, false);
		func_304(iParam0, 1088421888, 0, 0);
		if (!bParam1)
		{
			set_ped_as_no_longer_needed(&iParam0);
		}
	}
}

bool func_156(var uParam0, var uParam1)
{
	if (func_61(uParam0->f_3, 16777216))
	{
		if (func_305(*uParam1) != -1 || get_entity_model(*uParam1) == 1478983280)
		{
			return true;
		}
	}
	return false;
}

void func_157(var uParam0)
{
	set_ped_config_flag(*uParam0, 6, false);
	set_ped_config_flag(*uParam0, 4, false);
	set_ped_config_flag(*uParam0, 494, true);
}

float func_158(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_159(int iParam0, int iParam1, float fParam2, int iParam3, bool bParam4)
{
	if (!Global_1935630->f_12 && (!bParam4 || func_49(iParam0, 0, 1)))
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
			fVar2 = func_158(fParam2 >= 0f, fParam2, vdist(get_entity_coords(iParam0, true, false), Global_36));
			if (fVar2 > 25f && is_entity_occluded(iParam0))
			{
				func_306(&iParam0);
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

void func_160(var uParam0)
{
	if (_does_volume_exist(uParam0->f_171))
	{
		func_307(uParam0->f_171);
		_0xa1cfb35069d23c23(uParam0->f_171);
		_0x74c2b3dc0b294102(uParam0->f_171);
	}
	if (uParam0->f_51.f_7 != 0)
	{
		destroy_tracked_point(uParam0->f_51.f_7);
		uParam0->f_51.f_7 = 0;
	}
	func_308(uParam0);
	func_309(uParam0);
	func_310(uParam0);
	if (!func_311(uParam0))
	{
		if (_0xf6a8a652a6b186cd(uParam0->f_51.f_11))
		{
			_0xfdfecc6ee4491e11(uParam0->f_51.f_11);
		}
		func_242(uParam0->f_51, 0);
	}
	if (does_blip_exist(uParam0->f_51.f_6))
	{
		remove_blip(&(uParam0->f_51.f_6));
	}
	if (uParam0->f_48)
	{
		func_312();
	}
	if (!func_313(uParam0->f_3) && !func_61(uParam0->f_3, 256))
	{
		func_314(uParam0->f_3, 1, 0, 15, 0, 0, 0, 1);
	}
	func_315(uParam0->f_173);
	func_315(uParam0->f_172);
}

void func_161(var uParam0)
{
	if (does_blip_exist(uParam0->f_181))
	{
		remove_blip(&(uParam0->f_181));
	}
}

int func_162(int iParam0, int iParam1)
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
				Jump @3257; //curOff = 2812
				return -1618254924;
				Jump @3257; //curOff = 2823
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
				Jump @3257; //curOff = 2870
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
				Jump @3257; //curOff = 2917
				switch (iParam1)
				{
					case 0:
						return 1806437024;
					default:
						break;
				}
				return 1650308608;
				Jump @3257; //curOff = 2950
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
				Jump @3257; //curOff = 2997
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
				Jump @3257; //curOff = 3044
				return -2137572125;
				Jump @3257; //curOff = 3055
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
				Jump @3257; //curOff = 3102
				return -774894224;
				Jump @3257; //curOff = 3113
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
				Jump @3257; //curOff = 3160
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
				Jump @3257; //curOff = 3221
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

void func_163(int iParam0, int iParam1, int iParam2)
{
	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_124() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	_0xd5910ecf81a2278c(iParam0, iParam1, iParam2, &vVar0);
}

void func_164(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_58(iParam0, 16);
	}
	else
	{
		func_57(iParam0, 67108864);
		func_57(iParam0, 16);
	}
}

void func_165(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_57(&(uParam0->f_1), 128);
	}
	else
	{
		func_58(&(uParam0->f_1), 128);
	}
}

void func_166(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_58(iParam0, 268435456);
	}
	else
	{
		func_57(iParam0, 268435456);
	}
	if (!bParam2)
	{
		func_58(iParam0, 1073741824);
	}
	else
	{
		func_57(iParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_58(iParam0, 536870912);
	}
	else
	{
		func_57(iParam0, 536870912);
	}
}

var func_167(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_168(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return _create_var_string(2, func_316(sParam1));
}

Vector3 func_169(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return 0f, 0f, 0f;
	}
	if (!func_183(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (func_317(iParam0) == 0)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = (func_318(iParam0) + iParam1);
	if (iVar0 >= 892)
	{
		return 0f, 0f, 0f;
	}
	return *Global_1310750->f_13358[iVar0];
}

void func_170(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_61(iParam0, 32))
	{
		if (func_319(iParam0, uParam1->f_4, &(uParam1->f_12)))
		{
			if (bParam4)
			{
				vVar1 = { func_320(Global_35, &(uParam1->f_12)) };
				if (!func_148(vVar1))
				{
					*uParam1 = { vVar1 };
				}
			}
		}
	}
	if (bParam2)
	{
		func_321(uParam1, bParam2);
	}
	if (bParam3)
	{
		fVar4 = func_243(iParam0);
		iVar0 = _create_volume_cylinder_with_custom_name(*uParam1, 0f, 0f, 0f, fVar4, fVar4, fVar4, func_191());
		if (func_322(Global_1310750[iParam0], 33554432))
		{
			func_245(iVar0, func_244(iParam0), 1, 0, 2, 0, -1082130432);
		}
		else
		{
			func_245(iVar0, func_244(iParam0), 1, 0, 8, 0, -1082130432);
		}
		if (func_61(iParam0, 1))
		{
			func_323(*uParam1 + Vector(1f, 0f, 0f), 25f, "Beat Inner", 1, 0, 32, 0, -1082130432);
		}
	}
	func_324(iParam0);
}

bool func_171(int iParam0, var uParam1)
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
			func_325(uParam1, *(*Global_1310750)[iParam0]->f_4.f_4[iVar0]);
		}
		iVar0++;
	}
	if (func_103(iParam0, 16))
	{
		_0xb8e3486d107f4194(*uParam1, 55f);
		_0x827a58ced9d4d5b4(*uParam1, 180f);
		fVar2 = to_float(func_326(iParam0));
		fVar1 = 60f;
	}
	else
	{
		_0x65d281985f2bdfc2(*uParam1, 35f);
		_0x827a58ced9d4d5b4(*uParam1, 65f);
		fVar2 = to_float(func_326(iParam0));
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

void func_172(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4)
{
	switch (func_327(iParam0))
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
			if (!func_61(iParam0, 1))
			{
				if (func_103(iParam0, 2))
				{
				}
			}
			func_328(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		case 2:
			func_329(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		case 3:
			func_329(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = 7f;
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		default:
			break;
	}
	if (func_146(iParam0))
	{
		*fParam2 = 40000f;
	}
}

Vector3 func_173(bool bParam0, int iParam1, var uParam2, var uParam3)
{
	fVar7 = 999999.9f;
	fVar8 = 0f;
	*bParam0 = 1;
	iVar0 = 0;
	while (iVar0 < func_317(iParam1))
	{
		if (!func_330(iParam1, iVar0))
		{
			vVar4 = { func_169(iParam1, iVar0) };
			if (!func_148(vVar4))
			{
				fVar8 = vdist(Global_36, vVar4);
				if (func_178(fVar8, iParam1))
				{
					*bParam0 = 0;
				}
				if (fVar8 < fVar7)
				{
					if (func_331(iParam1, vVar4, uParam2, uParam3))
					{
						fVar7 = vdist(Global_36, vVar4);
						vVar1 = { vVar4 };
					}
				}
			}
		}
		iVar0++;
	}
	if (!func_148(vVar4))
	{
	}
	return vVar1;
}

int func_174(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, int iParam5)
{
	if (uParam0->f_8 >= iParam4)
	{
		if (bParam3)
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_56("BEAT_FAIL", 5000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam2 = 1;
	}
	*uParam1 = iParam5;
	uParam0->f_8++;
	return 0;
}

int func_175(int iParam0, vector3 vParam1)
{
	iVar0 = 0;
	while (iVar0 < func_317(iParam0))
	{
		vVar1 = { func_169(iParam0, iVar0) };
		if (func_332(vVar1, vParam1, 1056964608, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_176(var uParam0)
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

int func_177(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	vVar2 = { *uParam0 };
	func_333(Global_35, *uParam0, &(uParam0->f_37), 1061158912, 0, 0);
	if (func_334(&(uParam0->f_37), 500))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!func_148(*uParam0->f_12[iVar0]))
			{
				vVar5 = { *uParam0->f_12[iVar0] };
				vVar8 = { _0x83acc65d9acec5ef(Global_36, vVar2, vVar5, true) };
				if (vdist2(Global_36, vVar8) <= (35f * 35f) || vdist2(Global_36, *uParam0->f_12[iVar0]) <= (80f * 80f))
				{
					if (bParam4)
					{
						iVar1 = func_335(uParam0);
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
	return func_174(uParam0, uParam1, uParam2, bParam3, 16, 1000);
}

bool func_178(float fParam0, int iParam1)
{
	fVar3 = (fParam0 * fParam0);
	func_172(iParam1, &fVar0, &fVar1, &uVar2, 1);
	if (fVar3 > fVar1)
	{
		return false;
	}
	if (func_61(iParam1, 1))
	{
		if (fVar3 < fVar0)
		{
			return false;
		}
	}
	return true;
}

bool func_179(var uParam0, bool bParam1)
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

bool func_180(int iParam0, var uParam1, var uParam2, struct<7> Param3, bool bParam10)
{
	if (func_336(iParam0, *uParam2))
	{
		return false;
	}
	if (!func_337(iParam0, uParam2))
	{
		return false;
	}
	if (!func_338(Param3))
	{
		return false;
	}
	if (bParam10)
	{
		if (!func_339(*uParam2, Global_35))
		{
			return false;
		}
	}
	return true;
}

int func_181(var uParam0)
{
	return uParam0->f_51.f_4;
}

bool func_182(int iParam0, int iParam1, var uParam2)
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

bool func_183(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_184(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = _create_volume_cylinder_with_custom_name(vParam1, vParam4, vParam7, sParam10);
}

void func_185(int iParam0, int iParam1)
{
	if (func_340(iParam0))
	{
		return;
	}
	if (func_341(iParam0) == iParam1)
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

void func_186(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 0);
	if (bParam3)
	{
		func_57(&iParam1, 8192);
	}
	if (bParam4)
	{
		_0x2161278c6322f740(iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, iParam0);
	}
}

int func_187(int iParam0)
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

int func_188(bool bParam0)
{
	if (bParam0)
	{
		return func_342(Global_1359489->f_4);
	}
	get_group_size(func_343(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = get_ped_as_group_member(func_343(), iVar3);
		if (func_344(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

bool func_189()
{
	switch (func_3())
	{
		case 105:
			if (func_345(113, 3) != 2)
			{
				iLocal_86 = 2;
				return true;
			}
			break;
		case 38:
			if (func_346(17) && func_345(113, 4) != 3)
			{
				iLocal_86 = 0;
				return true;
			}
			else if (func_346(18) && func_345(113, 4) != 4)
			{
				iLocal_86 = 1;
				return true;
			}
			else
			{
				terminate_this_thread();
			}
			break;
	}
	return false;
}

void func_190(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!_does_volume_exist(*uParam0))
	{
		*uParam0 = _create_volume_sphere_with_custom_name(vParam1, vParam4, vParam7, func_191());
	}
}

char* func_191()
{
	return "unnamed";
}

void func_192(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		func_347(&((*iParam0)[iVar0]->f_1));
		func_347(&((*iParam0)[iVar0]->f_12));
		iVar0++;
	}
}

void func_193(char* sParam0, var uParam1)
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

bool func_194(var uParam0)
{
	if (!func_348(uParam0->f_1))
	{
		return false;
	}
	if (uParam0->f_12 != 0)
	{
		if (!func_348(uParam0->f_12))
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

bool func_195(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 38)
	{
		return true;
	}
	return false;
}

bool func_196(int iParam0)
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

void func_197(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_196(iParam0))
	{
		return;
	}
	iVar0 = func_349(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(2, sParam1, sParam2));
}

void func_198(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_196(iParam0))
	{
		return;
	}
	iVar0 = func_349(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, sParam1);
}

void func_199(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_196(iParam0))
	{
		return;
	}
	iVar0 = func_349(iParam0);
	if (bParam1)
	{
		func_350(iParam0, 4);
		func_351(iVar0, 1);
		func_352(iVar0, 1);
	}
	else
	{
		func_353(iParam0, 4);
		func_352(iVar0, 0);
	}
}

void func_200(int* iParam0, char* sParam1)
{
	if (func_196(iParam0->f_6) && !is_string_null_or_empty(sParam1))
	{
		func_198(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_257(iParam0, 1);
}

bool func_201()
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

bool func_202(var uParam0, var uParam1, vector3 vParam2, float fParam5, bool bParam6, int iParam7)
{
	if (!does_entity_exist(*uParam1) && uParam0->f_1 != 0)
	{
		if (!does_entity_exist(uParam0->f_11) && uParam0->f_12 != 0)
		{
			if (has_model_loaded(uParam0->f_12))
			{
				Var2 = { func_354(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
				Var2.f_3 = func_355(fParam5, uParam0->f_18, uParam0->f_19);
				uParam0->f_11 = func_356(uParam0->f_12, uParam0, Var2, Var2.f_3, 1, 1, uParam0->f_14, 0, 1);
				if (func_357(uParam0->f_1, 1))
				{
					if (does_entity_exist(uParam0->f_11))
					{
						func_37(uParam0->f_11, 0);
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
					Var2 = { func_354(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
					Var2.f_3 = func_355(fParam5, uParam0->f_18, uParam0->f_19);
				}
				else
				{
					bVar1 = (bParam6 || func_358(&(uParam0->f_22)));
					Var2 = { func_354(vParam2, fParam5, uParam0->f_6, bVar1) };
					Var2.f_3 = func_355(fParam5, uParam0->f_9, bVar1);
				}
				*uParam1 = func_356(uParam0->f_1, uParam0, Var2, Var2.f_3, iParam7, _is_this_model_a_horse(uParam0->f_1), uParam0->f_14, 0, 1);
				set_ped_config_flag(*uParam1, 307, true);
				if (!is_entity_dead(*uParam1))
				{
					if (bVar0)
					{
						func_359(*uParam1, uParam0->f_11, 1, -1, 1);
					}
					if (!is_string_null_or_empty(&(uParam0->f_23)))
					{
						func_29(*uParam1, &(uParam0->f_23), 0);
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

var func_203(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6, int iParam7)
{
	return create_scenario_point(iParam0, vParam1, iParam4, iParam5, iParam6, iParam7);
}

void func_204(int iParam0)
{
	iVar0 = func_360(iParam0, 1);
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

void func_205(int iParam0)
{
	iVar0 = func_360(iParam0, 1);
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

void func_206()
{
	func_205(-939420910);
	func_205(-1187950766);
	func_205(356365161);
	func_205(753127042);
	func_205(-2038424081);
	func_205(1884271742);
	func_205(459290420);
}

void func_207()
{
	func_205(704802028);
	func_205(588987611);
	func_205(2008888900);
	func_205(1649996811);
	func_205(227918160);
	func_205(168171957);
	func_205(1193080109);
	func_205(-491981251);
	func_205(-639037538);
	func_205(-618620429);
}

bool func_208(int iParam0)
{
	iVar0 = func_360(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

int func_209(int iParam0, int iParam1)
{
	return func_362(func_361(iParam0, iParam1));
}

int func_210(int iParam0)
{
	switch (iParam0)
	{
		case 76:
			return 685634567;
		case 26:
			return -935154888;
		case 105:
			return -1762155239;
		case 78:
			return 550408623;
		case 5:
			return -122235554;
		case 38:
			return -1264444972;
		case 115:
			return -1705419773;
		default:
			break;
	}
	return -1;
}

void func_211(int iParam0, int iParam1)
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

int func_212(int iParam0)
{
	iVar0 = 0;
	if (_0x9a100f1cf4546629(iParam0))
	{
		iVar0 = func_363(iParam0);
	}
	return iVar0;
}

void func_213(int iParam0, var uParam1)
{
	if (does_entity_exist(Global_35) && !Global_1935630->f_12)
	{
		iVar0 = func_364(iParam0);
		if (iVar0 <= 1)
		{
			iVar1 = 462;
			if (func_365(iParam0))
			{
				iVar1 = 463;
			}
			uVar2 = func_366(iParam0);
			func_367(iVar1, uVar2, 1);
		}
	}
}

bool func_214()
{
	return &Global_1935436 == 2;
}

void func_215(int iParam0)
{
	if (iParam0 >= &Global_1935436)
	{
		return;
	}
	Global_1935436->f_1 = iParam0;
}

void func_216(int iParam0, int iParam1)
{
	if (get_random_event_flag())
	{
		return;
	}
	Global_17504.f_3++;
	Global_17504.f_42[iParam0]->f_1++;
	if (func_61(iParam0, 2))
	{
		func_369(iParam0, func_368(iParam1));
	}
	else
	{
		func_371(iParam0, func_370());
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
	func_372(iParam0, (*Global_1310750)[iParam0]->f_36, fVar0, 1, 0);
	func_373(iParam0, 0);
	func_374(iParam0);
	func_375(1);
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
	if (!func_61(iParam0, 16))
	{
		func_217(iParam0, 0, 0, 0, 0);
	}
}

void func_217(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (bParam1)
	{
	}
	if (func_376() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0];
		if (((func_183(iVar1) && !func_61(iVar1, iParam2)) && (!bParam3 || !func_233(iVar1))) && (!bParam4 || !func_377(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_378(iVar0);
			}
		}
		iVar0++;
	}
}

int func_218(int iParam0)
{
	return (*Global_1310750)[iParam0]->f_39;
}

void func_219(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_177 != -1 || func_322(Global_1310750[uParam0->f_3], 16777216))
	{
		if (bParam2)
		{
			if (func_61(uParam0->f_3, 1073741824))
			{
				func_379(2, -1, 0, 0, 0);
			}
			else
			{
				func_379(1, -1, 0, 0, 0);
			}
		}
		else if (bParam1)
		{
			if (uParam0->f_45)
			{
				func_379(8, -1, 0, 0, 0);
			}
		}
		if (uParam0->f_177 != -1)
		{
			if (bParam2)
			{
				if (!func_380(1, uParam0->f_177))
				{
					func_381(16, uParam0->f_177);
					func_382(1, uParam0->f_177);
				}
				compendium_gang_encountered(func_383(uParam0->f_177));
			}
		}
	}
	else if (bParam2 || (bParam1 && uParam0->f_45))
	{
		func_379(8, -1, 0, 0, 0);
	}
}

int func_220()
{
	if (func_384(Global_1935630->f_44))
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
		else if (func_385())
		{
			return 1;
		}
	}
	return 0;
}

float func_221(var uParam0, bool bParam1)
{
	if (uParam0->f_119 == -1f)
	{
		if (func_61(uParam0->f_3, 1024))
		{
			fVar0 = 95f;
		}
		else if (func_61(uParam0->f_3, 2048))
		{
			fVar0 = 80f;
		}
		else if (func_61(uParam0->f_3, 4096))
		{
			fVar0 = 65f;
		}
		else if (func_61(uParam0->f_3, 8192))
		{
			fVar0 = 55f;
		}
		else if (func_61(uParam0->f_3, 16384))
		{
			fVar0 = 30f;
		}
		else
		{
			fVar0 = 85f;
		}
		if (func_61(uParam0->f_3, 1))
		{
		}
		else if (func_61(uParam0->f_3, 2))
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

int func_222(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6)
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
			else if (func_386(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
					if (func_387(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
		uParam0->f_7 = (func_265() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

bool func_223(var uParam0, int iParam1, float fParam2)
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
	func_105(uParam0);
	return true;
}

bool func_224()
{
	return (Global_1894899 & 1 != 0 && func_3() != -1);
}

bool func_225(var uParam0, float fParam1)
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

int func_226(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_388(bParam1, bParam2, bParam3);
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

bool func_227(int iParam0)
{
	if (iParam0 == -1)
	{
		return true;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = func_390(func_389());
	if (func_5(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_5(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_5(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_5(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_5(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_5(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_5(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_5(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_5(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_5(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_5(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_5(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_5(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_5(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_5(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_5(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_5(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

bool func_228(int iParam0, int iParam1)
{
	return (func_218(iParam0) && iParam1) != 0;
}

bool func_229(int iParam0)
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
	if (iParam0 & 1 == 1 && func_391(iVar3))
	{
		return true;
	}
	if (iParam0 & 2 == 2 && func_392(iVar3))
	{
		return true;
	}
	if (iParam0 & 4 == 4 && func_393(iVar3))
	{
		return true;
	}
	if (iParam0 & 8 == 8 && func_394(iVar3))
	{
		return true;
	}
	if (iParam0 & 16 == 16 && func_395(iVar3))
	{
		return true;
	}
	if (iParam0 & 32 == 32 && func_396(iVar3))
	{
		return true;
	}
	if (iParam0 & 64 == 64 && func_397(iVar3))
	{
		return true;
	}
	return false;
}

bool func_230(bool bParam0)
{
	if (func_398(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_231(int iParam0)
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

bool func_232(int iParam0, bool bParam1, bool bParam2)
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
		if (func_399())
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
		iVar0 = func_400(&(Global_1898164->f_1[0]));
		if (func_401(iVar0) && func_402((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_403(&(Global_1898164->f_1[0])))
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

bool func_233(int iParam0)
{
	if (!func_183(iParam0))
	{
		return false;
	}
	if (func_404(64) && func_405(iParam0))
	{
		return true;
	}
	return (*Global_1310750)[iParam0]->f_46;
}

bool func_234(int iParam0, bool bParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_ped_injured(iParam0) || !bParam1)
		{
			iVar0 = get_interior_from_entity(iParam0);
			if (is_valid_interior(iVar0))
			{
				if (func_406(iVar0) || func_407(iVar0))
				{
					return false;
				}
				return true;
			}
		}
	}
	return false;
}

bool func_235()
{
	return Global_1894899 & 4 != 0;
}

int func_236(int iParam0)
{
	if (!func_408(iParam0))
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

bool func_237(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return false;
	}
	return true;
}

bool func_238(vector3 vParam0, int iParam3)
{
	if (!func_237(iParam3))
	{
		return false;
	}
	if (_does_volume_exist((*Global_1392194)[iParam3]->f_5))
	{
		return _0xf256a75210c5c0eb((*Global_1392194)[iParam3]->f_5, vParam0);
	}
	return false;
}

bool func_239(vector3 vParam0)
{
	if (func_148(vParam0))
	{
		return false;
	}
	fVar0 = func_158(func_224(), 6f, 22f);
	return _0x769bb7626b8cdb06(vParam0, fVar0, 1, 0, 16384);
}

bool func_240(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
						func_120(uParam0);
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
		func_120(uParam0);
		return true;
	}
	if (!bParam4)
	{
		if (!func_263(uParam0))
		{
			return false;
		}
		else if (is_scripted_speech_playing(Global_35) || is_any_speech_playing(Global_35))
		{
			return true;
		}
		if (!func_409(uParam0, fParam2))
		{
			return true;
		}
		if (func_263(uParam0))
		{
			func_252(uParam0);
		}
	}
	return false;
}

bool func_241(vector3 vParam0)
{
	return _0x769bb7626b8cdb06(vParam0, 0.5f, 0, 0, 16384);
}

void func_242(vector3 vParam0, int iParam3)
{
	if (func_148(vParam0))
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
			if (func_332(vVar2, vParam0, 2f, 1))
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

float func_243(int iParam0)
{
	if (!func_183(iParam0))
	{
		return 0f;
	}
	if (!func_410(iParam0))
	{
		return 0f;
	}
	return (*Global_1310750)[iParam0]->f_44;
}

char* func_244(int iParam0)
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

int func_245(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (!_does_volume_exist(iParam0))
	{
		return 0;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	vVar3 = { _0x3e2a25b2416dd67e(iParam0) };
	iVar6 = func_323(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

int func_246(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_247(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > iParam2->f_5)
	{
		func_411(iParam2, 1, iVar0);
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
			if (func_412(iParam0, iParam2))
			{
				*uParam3 = 128;
				func_413(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (func_414(iParam0, iParam2))
				{
					*uParam3 = 8;
					func_413(iParam0, iParam2, *uParam3);
					return true;
				}
				else if (func_415(iParam0, iParam1, iParam2))
				{
					*uParam3 = 8;
					func_413(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (func_416(iParam0, iParam2))
				{
					*uParam3 = 64;
					func_413(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_26 && func_226(player_id(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_413(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_417(iParam2, 1065353216))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (func_418(Global_35, iParam0, iParam2))
					{
						*uParam3 = 4;
						func_413(iParam0, iParam2, *uParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (func_419(Global_35, iParam0, iParam2))
					{
						*uParam3 = 256;
						func_413(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_420(Global_35, iParam0, iParam2, 0))
				{
					*uParam3 = 16;
					func_413(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			else if (func_420(Global_35, iParam0, iParam2, 1))
			{
				*uParam3 = 16;
				func_413(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (func_421(iParam0, iParam2))
				{
					*uParam3 = 32;
					func_413(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || iParam2->f_12 < 20f)
			{
				if (func_422(&iParam0, iParam2))
				{
					*uParam3 = 4096;
					func_413(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (func_423(iParam2, 4000))
				{
					if ((func_424(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && func_425(iParam2, iParam0)) && func_426(iParam2, iParam0))
					{
						*uParam3 = 2;
						func_413(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((func_424(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && func_425(iParam2, iParam0)) && func_426(iParam2, iParam0))
				{
					*uParam3 = 2;
					func_413(iParam0, iParam2, *uParam3);
					return true;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (func_427(iParam0, Global_1935630->f_41))
							{
								func_428();
								*uParam3 = 2;
								func_413(iParam0, iParam2, *uParam3);
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
						if (func_427(iParam0, Global_1935630->f_41))
						{
							func_428();
							*uParam3 = 2;
							func_413(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (func_429(iParam2, iParam0) || (iParam2->f_9 > 0 && (func_430() - iParam2->f_9) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_428();
						*uParam3 = 2;
						func_413(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (func_431())
					{
						if (func_427(iParam0, Global_1935630->f_42))
						{
							func_428();
							*uParam3 = 2;
							func_413(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (func_432(iParam2, iParam0))
			{
				*uParam3 = 1024;
				func_413(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (func_433(iParam0, iParam1, iParam2))
				{
					*uParam3 = 2048;
					func_413(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (func_434(iParam0, iParam2))
					{
						*uParam3 = 8192;
						func_413(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (func_435(iParam0, iParam2))
				{
					*uParam3 = 32768;
					func_413(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (func_436(iParam2, 4000))
				{
					if (func_437(&iParam0, iParam2))
					{
						*uParam3 = 512;
						func_413(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (func_438(iParam0, iParam2))
				{
					*uParam3 = 65536;
					iParam2->f_4 = 0;
					func_413(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_439(iParam2, iParam0))
			{
				*uParam3 = 1;
				func_413(iParam0, iParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

void func_248(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_258(&((*uParam1)[iParam0->f_3]->f_6), 1, 1);
		if (bParam2)
		{
			func_288(iParam0, 0);
		}
	}
}

void func_249(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_196((*uParam0)[iVar0]->f_6))
			{
				if (!bParam4 && is_bit_set(uParam0[iVar0], 11))
				{
				}
				else
				{
					func_258(&((*uParam0)[iVar0]->f_6), 1, 1);
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

bool func_250()
{
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (func_49(&(uLocal_731[iVar0]), 0, 1))
		{
			if (_0x29fce825613fefca(&(uLocal_731[iVar0]), 2000))
			{
				if (iVar0 != 1 && iVar0 != 0)
				{
					_task_flee_from_ped(&(uLocal_731[iVar0]), Global_35, vLocal_14, 1f, -1, 0, 1.5f, 0);
					_0xe737d5f14304a2ec(&(uLocal_731[iVar0]), player_id(), 120000);
					_0x24c82ef607105faa(&(uLocal_731[iVar0]), -920810745);
					func_86(&(uLocal_731[iVar0]), 1, 1);
					func_289(uLocal_731[iVar0], 1, 0, 1);
					return true;
				}
				else
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_251()
{
	if (is_ped_on_mount(Global_35))
	{
		if (is_entity_in_volume(Global_35, iVar987, true, 0))
		{
			return true;
		}
	}
	return false;
}

void func_252(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_253(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

void func_254()
{
	_0xdd1232b332cbb9e7(4, 1, 0);
}

bool func_255(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

void func_256(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_257(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

void func_258(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_196(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_349(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_440(iVar0);
	*uParam0 = 0;
}

void func_259()
{
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iVar0 != 1 && iVar0 != 0)
		{
			func_260(&(uLocal_731[iVar0]), Global_35, 2, 2, 1086324736);
		}
		iVar0++;
	}
}

void func_260(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	_0xe7fa07624574b79a(uParam0, uParam1, iParam2, iParam3, iParam4, 1, 0, 0, 0);
}

int func_261(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
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
		if (func_224())
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
				if (func_290(iParam0, 1, 1) > fParam4)
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
			fVar1 = func_150(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_120(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!is_entity_dead(iParam1))
				{
					task_look_at_entity(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_441(iParam0, iParam1, fVar1, bParam13))
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
				iVar2 = func_443(func_442(iParam0, sParam2, iParam11, iParam1, network_is_game_in_progress(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

void func_262(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_265() - fParam1);
	func_444(uParam0, 1);
	func_445(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_263(var uParam0)
{
	return func_446(*uParam0, 1);
}

bool func_264(var uParam0)
{
	return func_446(*uParam0, 2);
}

float func_265()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_266()
{
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iVar0 != 1 && iVar0 != 0)
		{
			func_267(&(uLocal_731[iVar0]), 2);
		}
		iVar0++;
	}
}

void func_267(int iParam0, int iParam1)
{
	_0x541e5b41dca45828(iParam0, iParam1, 0);
	_0x0eabf182fbb63d72(iParam0, 6, 1);
	task_clear_look_at(iParam0);
}

void func_268()
{
	open_sequence_task(&iVar0);
	task_turn_ped_to_face_entity(0, &(uLocal_731[0]), 0, -1082130432, -1082130432, -1082130432);
	if (is_ped_facing_ped(&(uLocal_731[1]), &(uLocal_731[0]), 10f))
	{
		if (_does_scenario_point_exist(iVar984))
		{
			if (func_49(&(uLocal_731[1]), 0, 1))
			{
				_task_use_scenario_point(&(uLocal_731[1]), iVar984, sVar997, 0, false, true, 0, false, -1f, false);
			}
		}
	}
	func_293(&(uLocal_731[1]), &iVar0, 0, 0, 1, 1);
}

int func_269()
{
	iVar0 = func_447();
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

int func_270(int iParam0)
{
	if (func_124() != -1)
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
	fVar1 = func_158(absf(fVar1) < 1f, func_158(fVar1 < 0f, -1f, 1f), fVar1);
	return ceil(fVar1);
}

bool func_271(int iParam0)
{
	if (!func_448(iParam0))
	{
		return false;
	}
	return func_449(iParam0);
}

bool func_272()
{
	if (func_124() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

int func_273(int iParam0, int iParam1, int iParam2)
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

int func_274(int iParam0)
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

int func_275()
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

void func_276(int iParam0, bool bParam1, int iParam2)
{
	func_450((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_451(iParam0);
}

void func_277(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), 0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), 1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_452(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_278(bool bParam0)
{
	bVar3 = false;
	if (func_453(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_454(iVar5, &iVar2, &iVar0))
			{
				if (!func_455(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_456(iVar2);
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
							if (func_457(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_269() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_269() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_458();
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

struct<2> func_279(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

void func_280(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

char* func_281(int iParam0)
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

var func_282(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_459(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_283(int iParam0, int iParam1)
{
	if (!func_460(iParam0))
	{
		return 0;
	}
	if (!func_461())
	{
		return 0;
	}
	if (!func_462(iParam0, &iVar0, &uVar1))
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

void func_284()
{
	if (!Local_87.f_161)
	{
		if (iLocal_86 == 2)
		{
			func_463(113, 3, 2);
		}
		else if (iLocal_86 == 0)
		{
			func_463(113, 4, 3);
		}
		else if (iLocal_86 == 1)
		{
			func_463(113, 4, 4);
		}
	}
}

bool func_285()
{
	switch (iVar929)
	{
		case 0:
			func_120(&uLocal_1010);
			iVar0 = 0;
			while (iVar0 < iVar729)
			{
				iVar0++;
			}
			iLocal_919 = add_shocking_event_for_entity(513747494, Global_35, -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
			uLocal_931 = iVar929 + 1;
			break;
		case 1:
			if (func_49(&(uLocal_731[2]), 0, 1))
			{
				if (func_121(&uLocal_1010) > 0.5f)
				{
					func_289(uLocal_731[2], 1, 0, 1);
					uLocal_931 = iVar929 + 1;
				}
			}
			else
			{
				uLocal_931 = iVar929 + 1;
			}
			break;
		case 3:
			if (func_49(&(uLocal_731[1]), 0, 1))
			{
				if (func_121(&uLocal_1010) > 1.5f)
				{
					_0xe737d5f14304a2ec(&(uLocal_731[1]), player_id(), 120000);
					func_86(&(uLocal_731[1]), 1, 1);
					func_289(uLocal_731[1], 1, 0, 1);
					uLocal_931 = iVar929 + 1;
				}
			}
			else
			{
				uLocal_931 = iVar929 + 1;
			}
			break;
		case 4:
			return true;
	}
	return false;
}

int func_286(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	iVar0 = iParam9;
	func_464(&iVar0);
	if (func_5(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_465(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_5(iVar0, 134217728))
	{
		func_466(iParam1, uParam3, uParam0);
	}
	if (!*uParam4)
	{
		if (!is_bit_set(*iParam1, 25))
		{
			if (is_bit_set(*iParam1, 24))
			{
				if (!func_467(558))
				{
					func_468(558, 0);
				}
				set_bit(iParam1, 24);
				set_bit(iParam1, 25);
			}
		}
	}
	return iVar1;
}

void func_287(bool bParam0)
{
	func_115(Local_875[0], bParam0, 0);
	func_115(Local_875[1], bParam0, 0);
}

void func_288(int iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_252(&(iParam0->f_18));
}

void func_289(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!does_entity_exist(*iParam0))
	{
		return;
	}
	if (_0xa7e51b53309eac97(*iParam0))
	{
		return;
	}
	if (!does_entity_belong_to_this_script(*iParam0, false))
	{
		return;
	}
	if (!is_ped_injured(*iParam0))
	{
		set_entity_load_collision_flag(*iParam0, 0);
		if (!bParam3)
		{
			clear_ped_secondary_task(*iParam0);
		}
		set_ped_keep_task(*iParam0, bParam1);
		if (bParam2)
		{
			set_blocking_of_non_temporary_events(*iParam0, false);
		}
	}
	set_ped_as_no_longer_needed(iParam0);
}

float func_290(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return -1f;
	}
	return func_150(Global_35, iParam0, bParam1, bParam2);
}

void func_291(var uParam0, int iParam1)
{
	func_469(uParam0, iParam1);
}

bool func_292(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_293(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

void func_294(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		allow_sonar_blips(true);
		force_sonar_blips_this_frame();
	}
	_trigger_sonar_blip_2(iParam0, iParam1);
}

void func_295(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, var uParam7, float fParam8, int iParam9, int iParam10, int iParam11, var uParam12, var uParam13)
{
	if (Global_1359489->f_63.f_297 >= 3)
	{
		return;
	}
	iVar18 = 0;
	while (iVar18 < 3)
	{
		if (!Global_1359489->f_63.f_242[iVar18]->f_15)
		{
			Var0 = iParam0;
			Var0.f_2 = { vParam1 };
			Var0.f_5 = (fParam4 * fParam4);
			Var0.f_1 = get_id_of_this_thread();
			Var0.f_15 = 1;
			Var0.f_6 = iParam5;
			Var0.f_7 = iParam11;
			Var0.f_8 = 0;
			Var0.f_13 = iParam6;
			Var0.f_14 = uParam7;
			Var0.f_10 = fParam8;
			Var0.f_11 = iParam9;
			Var0.f_12 = iParam10;
			Var0.f_9 = uParam12;
			Var0.f_17 = uParam13;
			*Global_1359489->f_63.f_242[iVar18] = { Var0 };
			Global_1359489->f_63.f_297++;
			return;
		}
		iVar18++;
	}
}

int func_296(int iParam0, float fParam1)
{
	if (func_470(fParam1))
	{
		return func_471(0, iParam0, 0.1f);
	}
	return 0;
}

bool func_297()
{
	switch (func_3())
	{
		case 105:
			if (iLocal_86 == 2)
			{
			}
			break;
		case 38:
			break;
	}
	switch (iVar920)
	{
		case 0:
			if ((iLocal_86 != 0 && iLocal_86 != 1) && iLocal_86 != 2)
			{
				func_120(&uLocal_1007);
				iLocal_943 = 0;
				func_111(&iLocal_798, &Local_819);
				iLocal_922 = iVar920 + 1;
			}
			else
			{
				iLocal_922 = 7;
			}
			break;
		case 1:
			if (func_121(&uLocal_1001) > fVar0)
			{
				if (func_49(&(uLocal_731[1]), 0, 1))
				{
					_0x923583741dc87bce(&(uLocal_731[1]), "Default");
					_0x89f5e7adecccb49c(&(uLocal_731[1]), "sad");
					_0x62fdad5e01d2dd47(&(uLocal_731[1]), vLocal_23, 2, 0);
					switch (func_3())
					{
						case 38:
						case 105:
							clear_sequence_task(&uLocal_977);
							open_sequence_task(&uLocal_977);
							if (is_entity_in_volume(&(uLocal_731[1]), iVar985, true, 0))
							{
								task_climb(0, true);
							}
							task_follow_nav_mesh_to_coord(0, vLocal_17, 1f, -1, 0.25f, 0, 40000f);
							_task_use_nearest_scenario_to_coord(0, vLocal_17, 10f, 0, false, false, true, false);
							close_sequence_task(iVar975);
							task_perform_sequence(&(uLocal_731[1]), iVar975);
							clear_sequence_task(&uLocal_977);
							break;
					}
					func_120(&uLocal_1007);
					iLocal_922 = iVar920 + 1;
				}
				else
				{
					iLocal_922 = iVar920 + 1;
				}
			}
			break;
		case 7:
			iLocal_922 = iVar920 + 1;
			break;
		case 8:
			return true;
	}
	return false;
}

void func_298(int iParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, bool bParam7, bool bParam8, char* sParam9, float fParam10)
{
	task_start_scenario_at_position(iParam0, iParam1, vParam2, fParam5, iParam6, bParam7, bParam8, sParam9, fParam10, false);
}

bool func_299()
{
	switch (iVar923)
	{
		case 0:
			if (func_49(&(uLocal_731[0]), 0, 0))
			{
				stop_current_playing_speech(&(uLocal_731[0]), 0);
				if (is_ped_active_in_scenario(&(uLocal_731[0]), 0))
				{
					_0xf1c03a5352243a30(&(uLocal_731[0]));
				}
				open_sequence_task(&iVar0);
				if (!is_ped_active_in_scenario(&(uLocal_731[0]), 0))
				{
					task_react(0, Global_35, get_entity_coords(Global_35, true, false), "TaskCombat_Panic", 1f, 60f, 4);
				}
				if (is_entity_in_volume(&(uLocal_731[0]), iVar985, true, 0))
				{
					task_climb(0, true);
				}
				_task_smart_flee_style_ped(0, Global_35, 3, 0, -1082130432, -1, 0);
				func_293(&(uLocal_731[0]), &iVar0, 0, 0, 1, 1);
				_0xf0b67bad53c35bd9(&(uLocal_731[0]), Global_35, &(uLocal_731[1]), get_entity_coords(Global_35, true, false), 195938434);
				func_119(&(uLocal_731[0]), Global_35, func_118(21), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_289(uLocal_731[0], 1, 0, 1);
				uLocal_925 = iVar923 + 1;
			}
			else
			{
				uLocal_925 = iVar923 + 1;
			}
			break;
		case 1:
			if (func_49(&(uLocal_731[1]), 0, 0))
			{
				func_119(&(uLocal_731[1]), Global_35, func_118(21), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				if (is_ped_active_in_scenario(&(uLocal_731[1]), 1))
				{
					_0xf1c03a5352243a30(&(uLocal_731[1]));
				}
				open_sequence_task(&iVar1);
				if (!is_ped_active_in_scenario(&(uLocal_731[0]), 0))
				{
					task_react(0, Global_35, get_entity_coords(Global_35, true, false), "TaskCombat_Panic", 1f, 60f, 4);
				}
				if (is_entity_in_volume(&(uLocal_731[1]), iVar985, true, 0))
				{
					task_climb(0, true);
				}
				_task_smart_flee_style_ped(0, Global_35, 3, 0, -1082130432, -1, 0);
				func_293(&(uLocal_731[1]), &iVar1, 0, 0, 1, 1);
				_0xf0b67bad53c35bd9(&(uLocal_731[1]), Global_35, &(uLocal_731[0]), get_entity_coords(Global_35, true, false), 195938434);
				func_289(uLocal_731[1], 1, 0, 1);
				uLocal_925 = iVar923 + 1;
			}
			else
			{
				uLocal_925 = iVar923 + 1;
			}
			break;
		case 2:
			uLocal_925 = iVar923 + 1;
			break;
		case 3:
			return true;
	}
	return false;
}

bool func_300()
{
	switch (iVar924)
	{
		case 0:
			iLocal_960 = 1;
			_0xf1c03a5352243a30(&(uLocal_731[1]));
			task_combat_ped(&(uLocal_731[1]), Global_35, 68157440, 0);
			set_ped_keep_task(&(uLocal_731[1]), true);
			uLocal_926 = iVar924 + 1;
			break;
		case 1:
			if (func_472(-4f, 1, 0, 0))
			{
				if (is_entity_in_volume(&(uLocal_731[2]), iVar985, true, 0))
				{
					task_climb(&(uLocal_731[0]), true);
				}
				func_119(&(uLocal_731[0]), Global_35, func_118(18), 0, -1082130432, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				uLocal_926 = iVar924 + 1;
			}
			break;
		case 2:
			_task_smart_flee_style_ped(0, Global_35, 0, 0, -1082130432, -1, 0);
			set_ped_keep_task(&(uLocal_731[0]), true);
			uLocal_926 = iVar924 + 1;
			break;
		case 3:
			return true;
	}
	return false;
}

bool func_301(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_302(int iParam0, int iParam1)
{
	if (!func_301(iParam0))
	{
		return false;
	}
	return (Global_1395482->f_2[iParam0] && iParam1) != 0;
}

int func_303(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_5;
}

int func_304(int iParam0, float fParam1, bool bParam2, bool bParam3)
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

int func_305(int iParam0)
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

void func_306(int* iParam0)
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

void func_307(int iParam0)
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

void func_308(var uParam0)
{
	if (func_196(uParam0->f_162))
	{
		func_258(&(uParam0->f_162), 1, 1);
	}
	if (func_196(uParam0->f_163))
	{
		func_258(&(uParam0->f_163), 1, 1);
	}
	if (func_196(uParam0->f_164))
	{
		func_258(&(uParam0->f_164), 1, 1);
	}
	if (func_196(uParam0->f_165))
	{
		func_258(&(uParam0->f_165), 1, 1);
	}
}

void func_309(var uParam0)
{
	if (uParam0->f_170)
	{
		func_473();
	}
}

void func_310(var uParam0)
{
	if (uParam0->f_48 && !uParam0->f_45)
	{
		func_474(32);
		func_314(uParam0->f_3, 1, 0, 0, 2, 0, 0, 1);
	}
}

bool func_311(var uParam0)
{
	if (func_475(uParam0) || uParam0->f_44)
	{
		uParam0->f_44 = 1;
		func_476(uParam0->f_3);
		func_219(uParam0, 0, 1);
		func_477(uParam0->f_3, uParam0->f_51.f_5, 0, uParam0->f_43, -1);
		func_478(0, 0);
		return true;
	}
	return false;
}

void func_312()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

bool func_313(int iParam0)
{
	if (!func_183(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0]->f_4 > 0;
}

void func_314(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_303(iParam0) == 1 && bParam7)
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
	if ((bParam1 || bParam6) || func_124() != -1)
	{
		Global_17504.f_42[iParam0]->f_4 = 0;
	}
	Global_17504.f_42[iParam0]->f_4 = (Global_17504.f_42[iParam0]->f_4 + iVar0);
}

void func_315(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

char* func_316(char* sParam0)
{
	return sParam0;
}

int func_317(int iParam0)
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

int func_318(int iParam0)
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

bool func_319(int iParam0, int iParam1, var uParam2)
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

Vector3 func_320(int iParam0, var uParam1)
{
	iVar1 = -1;
	if (does_entity_exist(iParam0))
	{
		vVar2 = { get_entity_coords(iParam0, true, false) };
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!func_148(*(*uParam1)[iVar0]))
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

void func_321(var uParam0, bool bParam1)
{
	if (!does_blip_exist(uParam0->f_6))
	{
		uParam0->f_6 = _blip_add_for_coord(-1702907713, *uParam0);
		_blip_set_modifier(uParam0->f_6, 580546400);
		set_blip_name_from_text_file(uParam0->f_6, "BLIP_DEBUG");
		if (bParam1)
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_56("BEAT_GLB", 5500, 0, 1, 0, 0, -1, -1, 0);
		}
		_0x9851de7aec10b4e1(*uParam0, 100f, 1, 0);
	}
}

bool func_322(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_323(vector3 vParam0, float fParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (!bParam8 && network_is_game_in_progress())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_148(vParam0))
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
		if (func_241(vParam0))
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
	func_479(iVar0, bParam8);
	return iVar0;
}

void func_324(int iParam0)
{
	if (!func_183(iParam0))
	{
		return;
	}
	func_480(iParam0);
}

void func_325(var uParam0, vector3 vParam1)
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

int func_326(int iParam0)
{
	if (func_103(iParam0, 2))
	{
		return 200;
	}
	if (func_103(iParam0, 4))
	{
		return 70;
	}
	if (func_103(iParam0, 32))
	{
		return 400;
	}
	return 110;
}

int func_327(int iParam0)
{
	if (func_61(iParam0, 131072))
	{
		return 0;
	}
	else
	{
		if (iParam0 == 6)
		{
			if (func_370() == 8)
			{
				return 3;
			}
		}
		bVar0 = func_61(iParam0, 2);
		bVar1 = func_61(iParam0, 1);
		bVar2 = (bVar0 && bVar1);
		if (bVar2)
		{
			if (!func_224())
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

void func_328(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
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
	if (func_103(iParam3, 2097152))
	{
		*fParam0 = (*fParam0 + 15f);
		*iParam2 = ceil((*fParam0 + 50f));
	}
	else
	{
		*iParam2 = 70;
	}
}

void func_329(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
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
	if (func_103(iParam3, 2))
	{
		*fParam0 = (*fParam0 + 60f);
		*fParam1 = (*fParam1 + 60f);
		*iParam2 = ceil((*fParam0 + 110f));
	}
	else if (func_103(iParam3, 2097152))
	{
		*fParam0 = (*fParam0 + 30f);
		*iParam2 = ceil((*fParam0 + 30f));
	}
	else
	{
		*iParam2 = 70;
	}
}

bool func_330(int iParam0, int iParam1)
{
	iVar0 = (func_318(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_17504.f_12[iVar1]), iVar2);
}

bool func_331(int iParam0, vector3 vParam1, float fParam4, float fParam5)
{
	if (func_148(vParam1))
	{
		return false;
	}
	if (func_336(iParam0, vParam1))
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
	if (func_146(iParam0))
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

bool func_332(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_333(int iParam0, vector3 vParam1, int iParam4, float fParam5, bool bParam6, float fParam7)
{
	fVar0 = func_158(bParam6, fParam7, vdist(vParam1, get_entity_coords(iParam0, true, false)));
	if (!iParam4->f_1)
	{
		if (fVar0 < iParam4->f_2 || (func_339(vParam1, iParam0) && get_entity_speed(iParam0) > fParam5))
		{
			*iParam4 = func_430();
			iParam4->f_2 = func_143(iParam0, vParam1, 1);
			iParam4->f_1 = 1;
		}
	}
	else if (fVar0 > iParam4->f_2 || (!func_339(vParam1, iParam0) && get_entity_speed(iParam0) > fParam5))
	{
		*iParam4 = func_430();
		iParam4->f_2 = func_143(iParam0, vParam1, 1);
		iParam4->f_1 = 0;
	}
}

bool func_334(var uParam0, int iParam1)
{
	if (uParam0->f_1 == 1)
	{
		return (func_430() - *uParam0) >= iParam1;
	}
	return false;
}

int func_335(var uParam0)
{
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_148(*uParam0->f_12[iVar0]))
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

bool func_336(int iParam0, vector3 vParam1)
{
	if (!func_61(iParam0, 1))
	{
		iVar0 = 1;
	}
	if (func_481(vParam1, 0, 0, iVar0))
	{
		return true;
	}
	if (func_61(iParam0, 33554432))
	{
		if (func_482(vParam1, 200f, 1, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_337(int iParam0, var uParam1)
{
	iVar0 = 1;
	if (func_103(iParam0, 128))
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
	if (func_61(iParam0, 1) && !func_61(iParam0, 2))
	{
		if (func_61(iParam0, 4096) || func_61(iParam0, 2048))
		{
			if (func_483(*uParam1))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

bool func_338(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	uVar0 = func_2(&uParam0);
	if (!func_484())
	{
		return false;
	}
	return true;
}

bool func_339(vector3 vParam0, int iParam3)
{
	if (is_entity_dead(iParam3))
	{
		return false;
	}
	vVar0 = { get_entity_forward_vector(iParam3) };
	return func_485(vVar0, vParam0) > func_485(vVar0, get_entity_coords(iParam3, true, false));
}

bool func_340(int iParam0)
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

int func_341(int iParam0)
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

int func_342(int iParam0)
{
	iVar1 = iParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_486(&iVar1, -2147483648);
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

int func_343()
{
	return get_player_group(get_player_index());
}

bool func_344(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_124() != -1)
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

int func_345(int iParam0, int iParam1)
{
	iVar0 = func_487(iParam0, iParam1);
	if (iVar0 != -1)
	{
		return Global_17504.f_1003[iVar0]->f_1;
	}
	return 0;
}

int func_346(int iParam0)
{
	if (func_124() != -1)
	{
		return 0;
	}
	if (!func_401(iParam0))
	{
		return 0;
	}
	return func_488((*Global_1347702)[iParam0]->f_15, 1);
}

void func_347(var uParam0)
{
	if (*uParam0 != 0)
	{
		request_model(*uParam0, false);
	}
}

bool func_348(int iParam0)
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

int func_349(int iParam0)
{
	return iParam0;
}

void func_350(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_351(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_489(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_352(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_353(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

Vector3 func_354(vector3 vParam0, bool bParam3, vector3 vParam4, bool bParam7)
{
	if (bParam7)
	{
		return vParam4;
	}
	return _get_object_offset_from_coords(vParam0, bParam3, vParam4);
}

float func_355(float fParam0, float fParam1, bool bParam2)
{
	if (bParam2)
	{
		return fParam1;
	}
	return func_490((fParam0 + fParam1));
}

int func_356(int iParam0, var uParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, int iParam10)
{
	if (bParam6)
	{
		func_491(&vParam2, uParam1->f_22);
	}
	if (!bParam7 && func_492(uParam1))
	{
		iVar0 = _0xeaf682a14f8e5f53(uParam1->f_5, vParam2, bParam5, 1, 1, iParam9, iParam10);
		if (!does_entity_exist(iVar0))
		{
			iVar0 = func_493(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
		}
		else if (_is_metaped_outfit_request_valid(uParam1->f_5))
		{
			_release_metaped_outfit_request(uParam1->f_5);
		}
	}
	else
	{
		iVar0 = func_493(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
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
		if (!is_string_null_or_empty(&(uParam1->f_23)) && !func_494(iVar0))
		{
			func_29(iVar0, &(uParam1->f_23), 0);
		}
		if (func_494(iVar0))
		{
			set_animal_tuning_bool_param(iVar0, 48, true);
		}
		else
		{
			set_ped_config_flag(iVar0, 307, true);
		}
		if (func_495(&(uParam1->f_22)))
		{
			set_ped_can_ragdoll(iVar0, true);
			set_ped_to_ragdoll(iVar0, 1000, 1000, 1, false, false, false);
			set_ped_config_flag(iVar0, 186, !func_496(&(uParam1->f_22)));
			func_498(iVar0, func_497(&(uParam1->f_22)), 0);
		}
		else
		{
			request_ped_visibility_tracking(iVar0);
		}
		if (func_499(&(uParam1->f_22)))
		{
			freeze_entity_position(iVar0, true);
		}
		if (func_500(&(uParam1->f_22)))
		{
			func_501(iVar0, 1);
		}
		_0xa91e6cf94404e8c9(iVar0);
		set_ped_config_flag(iVar0, 6, func_502(&(uParam1->f_22)));
		set_ped_config_flag(iVar0, 393, true);
		if (!func_292(uParam1->f_22, 8192))
		{
			_set_entity_something(iVar0, true);
		}
		if (!func_494(iVar0))
		{
			func_504(iVar0, !func_503(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 4, func_505(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 297, !func_506(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 317, !func_506(&(uParam1->f_22)));
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

bool func_357(int iParam0, int iParam1)
{
	if (func_507(iParam0) != -1)
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

bool func_358(var uParam0)
{
	return func_292(*uParam0, 32);
}

int func_359(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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

int func_360(int iParam0, int iParam1)
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

int func_361(int iParam0, int iParam1)
{
	iVar0 = -1;
	switch (iParam0)
	{
		case 76:
			switch (iParam1)
			{
				case 0:
					iVar0 = 25;
					break;
				case 1:
					iVar0 = 26;
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 0:
					iVar0 = 499;
					break;
				case 1:
					iVar0 = 500;
					break;
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 0:
					iVar0 = 127;
					break;
			}
			break;
		case 78:
			switch (iParam1)
			{
				case 0:
					iVar0 = 430;
					break;
				case 1:
					iVar0 = 431;
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					iVar0 = 281;
					break;
				case 1:
					iVar0 = 282;
					break;
			}
			break;
		case 38:
			switch (iParam1)
			{
				case 0:
					iVar0 = 511;
					break;
				case 1:
					iVar0 = 512;
					break;
			}
			break;
		case 115:
			switch (iParam1)
			{
				case 0:
					iVar0 = 364;
					break;
				case 1:
					iVar0 = 363;
					break;
				case 2:
					iVar0 = 362;
					break;
				case 3:
					iVar0 = 361;
					break;
				case 4:
					iVar0 = 360;
					break;
				case 5:
					iVar0 = 359;
					break;
			}
			break;
	}
	if (iVar0 == -1)
	{
	}
	return iVar0;
}

int func_362(int iParam0)
{
	if (!func_508(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0];
}

int func_363(int iParam0)
{
	return _0x964000d355219fc0(get_ped_index_from_entity_index(iParam0));
}

int func_364(int iParam0)
{
	if (!func_509(iParam0))
	{
		return 0;
	}
	Var1 = { func_510(iParam0) };
	if (stat_id_get_int(&Var1, &uVar0))
	{
		return uVar0;
	}
	return 0;
}

bool func_365(int iParam0)
{
	Var0 = { func_511(-1366121835, func_366(iParam0)) };
	return _stat_id_is_valid(&Var0);
}

int func_366(int iParam0)
{
	return iParam0;
}

void func_367(int iParam0, var uParam1, bool bParam2)
{
	func_512(iParam0, &iVar0, &iVar1);
	if (!func_513(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_514(iParam0, 1024))
	{
		return;
	}
	func_515(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = uParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 2;
}

int func_368(int iParam0)
{
	if (iParam0 == -1)
	{
		iVar0 = func_516(1);
	}
	else
	{
		iVar0 = func_517(iParam0);
	}
	return iVar0;
}

void func_369(int iParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		iVar0 = func_518(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_519(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2] = &Global_17504.f_2205[iVar2] + 1;
	}
}

int func_370()
{
	return Global_1897952->f_41;
}

void func_371(int iParam0, int iParam1)
{
	if (iParam1 != -1 && !func_103(iParam0, 8192))
	{
		iVar0 = func_519(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0] = &Global_17504.f_2205[iVar0] + 1;
	}
}

void func_372(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	func_314(iParam0, bParam3, round((fVar0 * fParam2)), round((fVar1 * fParam2)), round((fVar2 * fParam2)), round((fVar3 * fParam2)), bParam4, 1);
}

void func_373(int iParam0, bool bParam1)
{
	iVar0 = 1;
	if (bParam1)
	{
		iVar0 = 3;
	}
	if (func_61(iParam0, 262144))
	{
		if (Global_1392135->f_3 == -1)
		{
			func_520(262144, iVar0, 0, 1);
		}
	}
	if (func_61(iParam0, 128))
	{
		func_520(128, iVar0, 0, 1);
	}
	else if (func_61(iParam0, 524288))
	{
		func_520(524288, iVar0, 0, 1);
	}
	else if (func_61(iParam0, 536870912))
	{
		func_520(536870912, iVar0, 0, 1);
	}
	else if (func_61(iParam0, 4194304))
	{
		func_520(4194304, iVar0, 0, 1);
	}
	else if (func_61(iParam0, 8388608))
	{
		func_520(8388608, iVar0, 0, 1);
	}
}

void func_374(int iParam0)
{
	Global_1310750->f_16077 = get_id_of_this_thread();
	Global_1310750->f_16071 = iParam0;
}

int func_375(bool bParam0)
{
	if (!bParam0 && func_208(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

int func_376()
{
	return Global_1310750->f_16037;
}

bool func_377(int iParam0)
{
	if (!func_183(iParam0))
	{
		return false;
	}
	return (*Global_1310750)[iParam0]->f_47;
}

void func_378(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_183(&(Global_1310750->f_13321[iParam0])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0];
	force_cleanup_for_thread_with_this_id(Global_1310750->f_13321[iParam0]->f_5, 523);
	(*Global_1310750)[iVar0]->f_48 = 0;
	func_521(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_379(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_522(Global_1393447, 1);
	func_523();
	func_524();
	func_525((to_float(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135->f_54 = (func_430() / 1000);
		if (Global_1392135->f_1 & 4 != 0)
		{
			Global_1392135->f_1 = (Global_1392135->f_1 - Global_1392135->f_1 & 4);
		}
		func_526();
		if (iParam1 == -1)
		{
			if (func_5(iParam0, 1))
			{
				func_520(16777216, 2, 0, 1);
				iVar0 = floor(240f);
			}
			else if (func_5(iParam0, 2))
			{
				func_520(16777216, 0, 0, 1);
				iVar0 = floor(60f);
			}
			else if (func_5(iParam0, 4))
			{
				func_520(16777216, 5, 0, 1);
				iVar0 = floor(900f);
			}
			Global_1392135->f_4 = (Global_1392135->f_54 + iVar0);
		}
		else
		{
			func_527(iParam1, iParam2, iParam3, iParam4);
			Global_1392135->f_5[iParam1] = (((Global_1392135->f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_528(to_float(iVar0), 1, 0);
	}
	else
	{
		func_528((to_float(200) / 3f), 1, 0);
	}
}

bool func_380(int iParam0, int iParam1)
{
	return (Global_40.f_9571[iParam1] && iParam0) != 0;
}

void func_381(int iParam0, int iParam1)
{
	(*Global_1392050)[iParam1]->f_1 = ((*Global_1392050)[iParam1]->f_1 - ((*Global_1392050)[iParam1]->f_1 && iParam0));
}

void func_382(int iParam0, int iParam1)
{
	Global_40.f_9571[iParam1] = (Global_40.f_9571[iParam1] || iParam0);
}

int func_383(int iParam0)
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

bool func_384(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_385()
{
	return (Global_1935630->f_44 == -160924582 && is_first_person_aim_cam_active());
}

bool func_386(var uParam0, float fParam1, float fParam2, int iParam3)
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

bool func_387(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_386(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (func_265() - 0.02f);
		}
		return true;
	}
	uParam0->f_8 = 0f;
	return false;
}

int func_388(bool bParam0, bool bParam1, bool bParam2)
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

int func_389()
{
	return &Global_1899515;
}

int func_390(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

bool func_391(int iParam0)
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

bool func_392(int iParam0)
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

bool func_393(int iParam0)
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

bool func_394(int iParam0)
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

bool func_395(int iParam0)
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

bool func_396(int iParam0)
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

bool func_397(int iParam0)
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

bool func_398(bool bParam0, int iParam1, int iParam2)
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

bool func_399()
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

int func_400(int iParam0)
{
	if (!func_403(iParam0))
	{
		return -1;
	}
	return func_530(func_529(iParam0));
}

bool func_401(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_402(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_403(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_404(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_405(int iParam0)
{
	return func_61(iParam0, Global_1310750->f_16072 | 64);
}

int func_406(int iParam0)
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

int func_407(int iParam0)
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

bool func_408(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_409(var uParam0, float fParam1)
{
	if (!func_263(uParam0))
	{
		return false;
	}
	if (func_121(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_410(int iParam0)
{
	return ((Global_1310750[iParam0] != 0 && !is_string_null_or_empty(&((*Global_1310750)[iParam0]->f_40))) && get_length_of_literal_string(&((*Global_1310750)[iParam0]->f_40)) != 0);
}

void func_411(int iParam0, bool bParam1, int iParam2)
{
	func_531(iParam2);
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
		iParam0->f_13 = func_532(0);
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
							func_58(iParam0, 33554432);
						}
					}
					else if (!*iParam0 & 8192 != 0)
					{
						if (func_230(1))
						{
							func_58(iParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_35) && (!func_230(1) || *iParam0 & 8192 != 0))
				{
					func_57(iParam0, 33554432);
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
			if (func_533(iParam0))
			{
				iParam0->f_15 = func_430();
			}
		}
		else if (iParam0->f_15 > 0)
		{
			if ((func_430() - iParam0->f_15) > 500)
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
	func_534(iParam0);
}

bool func_412(int iParam0, int iParam1)
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
			if (!func_535(iParam0, iParam1, iVar2))
			{
				return false;
			}
			if (func_536(iParam0, iVar2) <= func_537(iParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_413(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		iParam1->f_10 = iParam0;
	}
	if (func_538(iParam2, 1, 1, 1, 0))
	{
		func_58(iParam1, 2048);
	}
	iParam1->f_16 = iParam2;
	func_539(iParam1, 1);
	func_312();
}

bool func_414(int iParam0, int iParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_540(iParam0, !*iParam1 & 268435456 != 0, !*iParam1 & 536870912 != 0, !*iParam1 & 1073741824 != 0, 0, 0))
		{
			if (iParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (iParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_541(iParam1);
			if (func_542(iParam1, iParam0, fVar0, fVar1))
			{
				if (iParam1->f_2 == 0)
				{
					iParam1->f_2 = get_game_timer();
				}
				iVar2 = (get_game_timer() - iParam1->f_2);
				iVar3 = func_543(iParam1);
				if (iParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_539(iParam1, 1);
						return true;
					}
					else if (iParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_539(iParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_415(int iParam0, int iParam1, int iParam2)
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
	if (func_544(iParam1, !*iParam2 & 268435456 != 0, !*iParam2 & 536870912 != 0, !*iParam2 & 1073741824 != 0, 0))
	{
		if (iParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (iParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_541(iParam2);
		if (func_542(iParam2, iParam0, fVar0, fVar1))
		{
			if (iParam2->f_2 == 0)
			{
				iParam2->f_2 = get_game_timer();
			}
			if (iParam2->f_2 != 0)
			{
				if (get_game_timer() - iParam2->f_2) > func_543(iParam2)
				{
					func_539(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_416(int iParam0, int iParam1)
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
	if (func_535(iParam0, iParam1, iVar1))
	{
		if (iParam1->f_3 == 0)
		{
			iParam1->f_3 = get_game_timer();
		}
		else if (get_game_timer() - iParam1->f_3) > func_543(iParam1)
		{
			fVar3 = func_541(iParam1);
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

bool func_417(int iParam0, float fParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_430();
	iVar1 = (iVar0 - iParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_418(var uParam0, int iParam1, int iParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_545(iParam2);
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
			if (func_426(iParam2, iParam1))
			{
				func_539(iParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_419(var uParam0, int iParam1, int iParam2)
{
	if (iParam2->f_12 < IntToFloat(func_546(iParam2)))
	{
		if ((is_weapon_valid(Global_1935630->f_46) && !_0x5809dbca0a37c82b(Global_1935630->f_46)) || get_current_ped_vehicle_weapon(Global_35, &uVar0))
		{
			if (func_426(iParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_539(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_420(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_547(iParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, iParam2->f_22))
				{
					func_539(iParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, iParam2->f_27))
				{
					func_539(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, iParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, iParam2->f_26, &vVar4, 0, 0);
					if (func_548(iParam1, vVar0, vVar4))
					{
						func_539(iParam2, 1);
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
					func_539(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, iParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, iParam2->f_26, &vVar7, 0, 0);
					if (func_548(iParam1, vVar0, vVar7))
					{
						func_539(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_421(int iParam0, int iParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *iParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_535(iParam0, iParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_549(&(Global_1935630->f_34[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_550(&(Global_1935630->f_34[iVar0])))
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
			if (func_551(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_552(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_553(iParam1, iParam0, fVar1, iVar0))
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

bool func_422(int iParam0, int iParam1)
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

bool func_423(int iParam0, int iParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_430();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_424(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_554(iVar0, &iVar2))
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
	if (func_555(iVar0, iParam0))
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

int func_425(int iParam0, int iParam1)
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

bool func_426(int iParam0, int iParam1)
{
	if (func_556(iParam0))
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

bool func_427(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_150(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_428()
{
}

bool func_429(int iParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_35);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_557(iVar0, iParam1, vVar1))
		{
			iParam0->f_9 = func_430();
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
						if (func_143(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								iParam0->f_9 = func_430();
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

int func_430()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_431()
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
	if ((func_430() - Global_1935630->f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_432(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0->f_14))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_537(iParam0);
	if (iParam0->f_12 > func_558(iParam0) && iParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_559(iParam1);
	iVar1 = func_560(iParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((iParam0->f_12 <= fVar0 || ((_0x06087579e7aa85a9(iParam1, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam1, Global_35, 1, 0) == 1)) || ((_0x06087579e7aa85a9(iParam1, iParam0->f_14, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, iParam0->f_14, 17)) && _0x7f9b9791d4cb71f6(iParam1, iParam0->f_14, 1, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

bool func_433(int iParam0, int iParam1, int iParam2)
{
	if (iParam2->f_12 > 4f)
	{
		return false;
	}
	bVar0 = *iParam2 & 256 != false;
	bVar1 = *iParam2 & 524288 != false;
	bVar2 = *iParam2 & 128 != false;
	return func_561(iParam0, iParam1, bVar0, bVar2, iParam2->f_12, bVar1);
}

bool func_434(int iParam0, int iParam1)
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
		if (func_562(iParam0, iParam1, 1))
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
					if (!func_563(iParam1, iParam0))
					{
						if (func_143(iVar4, Global_36, 1) < 7f)
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

bool func_435(int iParam0, int iParam1)
{
	if (!func_564(0))
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

bool func_436(int iParam0, int iParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_430();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_437(int iParam0, int iParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

bool func_438(int iParam0, int iParam1)
{
	if (!is_ped_human(iParam0))
	{
		return false;
	}
	if (iParam1->f_4 == 0)
	{
		iParam1->f_4 = func_430();
	}
	else if (func_430() - iParam1->f_4) > func_565(iParam1)
	{
		return func_566(iParam0, iParam1, 0, -1082130432);
	}
	return false;
}

bool func_439(int iParam0, int iParam1)
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

void func_440(int iParam0)
{
	if (!func_567(iParam0))
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

bool func_441(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_442(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
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
	return func_568(iParam0, &Var0);
}

int func_443(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_444(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_445(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_446(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_447()
{
	return Global_40.f_11095.f_35;
}

bool func_448(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_449(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_450(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_569(bParam1);
	}
}

void func_451(int iParam0)
{
	_0x74bcceb233ad95b2(-156028329, iParam0);
}

char* func_452(int iParam0)
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

bool func_453(int iParam0)
{
	if (!func_570(23, &vVar0))
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

bool func_454(int iParam0, int iParam1, int iParam2)
{
	if (!func_570(23, &Var0))
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

bool func_455(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_456(int iParam0)
{
	return iParam0;
}

int func_457(int iParam0)
{
	if (!func_455(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_458()
{
	iVar0 = func_269();
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

void func_459(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

bool func_460(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_461()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_462(int iParam0, int iParam1, var uParam2)
{
	if (!func_460(iParam0))
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

void func_463(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_571(iParam0, iParam1);
	Global_17504.f_1003[iVar0]->f_1 = iParam2;
}

void func_464(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

int func_465(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	if (!is_entity_dead(*uParam0))
	{
		func_464(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !_does_volume_exist(iParam9)) || is_entity_in_volume(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (is_ambient_speech_playing(*uParam0) || is_scripted_speech_playing(*uParam0));
		fVar8 = func_158(fParam12 >= 0f, fParam12, vdist(Global_36, get_entity_coords(*uParam0, true, false)));
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
			func_120(&(iParam1->f_13));
		}
		if (func_572(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_573(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_465(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_110(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!get_ped_config_flag(*uParam0, 317, true))
						{
							func_574(*uParam0, 1, 1);
						}
					}
					else if (func_575(iParam1, 22))
					{
						func_574(*uParam0, 0, 1);
					}
				}
				if (func_576(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_577(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_578(iParam8);
					if (func_579(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (is_bit_set(uParam3[iParam1->f_1], 20))
								{
									func_580(uParam3);
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
					func_581(iParam1, uParam3, fVar8);
					if (func_582(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (is_bit_set(*iParam1, 1))
					{
						func_249(uParam3, 0, 0, 1, 1);
						clear_bit(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_583(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_576(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_584(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_579(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_577(uParam0, func_576(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_578(iParam8);
				}
				else if (is_bit_set(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_249(uParam3, 0, 0, 1, 1);
					}
					func_585(iParam1, 1);
				}
				func_581(iParam1, uParam3, fVar8);
				if (func_583(uParam0, iParam1, fParam4, bVar6))
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
			func_111(iParam1, uParam3);
			set_bit(iParam1, 3);
		}
	}
	return -1;
}

void func_466(int* iParam0, var uParam1, var uParam2)
{
	iVar0 = func_586(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (*uParam1)[iVar0]->f_13;
		iVar2 = (*uParam1)[iVar0]->f_15;
		if (!is_string_null_or_empty(sVar1))
		{
			func_119(Global_35, *uParam2, sVar1, "", -1082130432, iVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_467(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_124() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_468(int iParam0, bool bParam1)
{
	func_512(iParam0, &iVar0, &iVar1);
	if (!func_513(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_515(iVar0, iVar1);
}

void func_469(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_470(float fParam0)
{
	if (func_587(1))
	{
		return true;
	}
	if (!func_587(0))
	{
		if (func_588())
		{
			if (fParam0 <= 0f)
			{
				func_589(1);
				return true;
			}
			else
			{
				func_589(0);
				func_120(&uLocal_1004);
			}
		}
	}
	else if (func_121(&uLocal_1004) > fParam0)
	{
		func_589(1);
		func_590(0);
		func_252(&uLocal_1004);
		return true;
	}
	return false;
}

int func_471(int iParam0, int iParam1, float fParam2)
{
	func_592(&(uLocal_731[iParam0]), func_591(iParam1), fParam2);
	if (!_0x02ebbb3989b7e695(&(uLocal_731[iParam0])))
	{
		return 1;
	}
	return 0;
}

bool func_472(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && does_entity_exist(iParam2))
	{
		if (!func_123(iParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_593(fParam0))
	{
		return false;
	}
	return true;
}

void func_473()
{
	func_594(23);
}

void func_474(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 || iParam0);
}

int func_475(var uParam0)
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

void func_476(int iParam0)
{
	iVar0 = func_595(iParam0);
	if (iVar0 != 0)
	{
		func_596(-1, 24, 0, iVar0);
	}
}

void func_477(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (Global_1310750->f_16071 != iParam0 && !bParam2)
	{
		return;
	}
	if (&Global_17504.f_42[iParam0] == 0)
	{
		func_280(func_279(-1029789297), 1);
	}
	Global_17504.f_4++;
	Global_17504.f_42[iParam0] = &Global_17504.f_42[iParam0] + 1;
	(*Global_1310750)[iParam0]->f_110 |= 8;
	if (func_61(iParam0, 2))
	{
		func_597(iParam0, func_368(iParam3));
	}
	if (func_61(iParam0, 1))
	{
		if (iParam4 == -1)
		{
			iParam4 = func_370();
		}
		func_598(iParam0, iParam4);
	}
	if (iParam1 >= 0 && !func_103(iParam0, 65536))
	{
		func_599(iParam0, iParam1);
		func_600(iParam0, func_169(iParam0, iParam1));
		func_474(128);
	}
	func_372(iParam0, (*Global_1310750)[iParam0]->f_37, 1065353216, 0, 0);
	func_373(iParam0, 1);
	if (!bParam2)
	{
		func_474(16);
		Global_17504.f_5 = iParam0;
		Global_17504.f_9 = 1;
		Global_17504.f_7 = 0;
		Global_17504.f_8 = 0;
		func_601(524288);
	}
	if (func_602(iParam0) != 0)
	{
		if (&Global_17504.f_42[iParam0] >= func_602(iParam0))
		{
			Global_17504.f_42[iParam0]->f_6 = 1;
		}
	}
}

void func_478(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_603(&Global_0, 8);
	}
	if (!func_461() || func_124() != -1)
	{
		return;
	}
	func_603(&Global_0, 1);
}

int func_479(int iParam0, bool bParam1)
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

void func_480(int iParam0)
{
	Global_17504.f_2++;
	Global_17504.f_42[iParam0]->f_3++;
	(*Global_1310750)[iParam0]->f_110 |= 2;
}

bool func_481(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	if (func_148(vParam0))
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

bool func_482(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (func_148(vParam0))
	{
		return false;
	}
	return _0x769bb7626b8cdb06(vParam0, fParam3, iParam5, iParam4, 16384);
}

bool func_483(vector3 vParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_1310750->f_16043)
	{
		if (!func_148(*Global_1310750->f_16043[iVar0]))
		{
			if (func_147(vParam0, *Global_1310750->f_16043[iVar0]) < 2500f)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_484()
{
	iVar0 = func_604(func_3());
	if (iVar0 == 8)
	{
		iVar1 = func_236(func_3());
		if (func_238(Global_36, iVar1))
		{
			return false;
		}
	}
	if (func_605(func_516(0)))
	{
		return false;
	}
	if (func_606())
	{
		return false;
	}
	if (is_player_riding_train(player_id()))
	{
		return false;
	}
	return true;
}

float func_485(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

void func_486(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

int func_487(int iParam0, int iParam1)
{
	iVar1 = func_607(iParam0, iParam1);
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

int func_488(int iParam0, bool bParam1)
{
	switch (func_608(iParam0))
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

bool func_489(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

float func_490(float fParam0)
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

int func_491(var uParam0, var uParam1)
{
	vVar0 = { *uParam0 };
	if (func_609(&uParam1))
	{
		return 1;
	}
	if (!func_610(&vVar0, 1, 10, 0))
	{
		return 0;
	}
	*uParam0 = { vVar0 };
	return 1;
}

bool func_492(var uParam0)
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

int func_493(int iParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, bParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_611(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_494(int iParam0)
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

bool func_495(var uParam0)
{
	return func_292(*uParam0, 4);
}

bool func_496(var uParam0)
{
	return func_292(*uParam0, 64);
}

bool func_497(var uParam0)
{
	return func_292(*uParam0, 8);
}

void func_498(int iParam0, bool bParam1, bool bParam2)
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

bool func_499(var uParam0)
{
	return func_292(*uParam0, 128);
}

bool func_500(var uParam0)
{
	return func_292(*uParam0, 2048);
}

void func_501(int iParam0, bool bParam1)
{
	set_ped_config_flag(iParam0, 130, !bParam1);
	set_ped_config_flag(iParam0, 178, bParam1);
}

bool func_502(var uParam0)
{
	return func_292(*uParam0, 1024);
}

bool func_503(var uParam0)
{
	return func_292(*uParam0, 256);
}

void func_504(int iParam0, bool bParam1)
{
	set_ped_config_flag(iParam0, 146, !bParam1);
	set_ped_config_flag(iParam0, 148, !bParam1);
}

bool func_505(var uParam0)
{
	return func_292(*uParam0, 512);
}

bool func_506(var uParam0)
{
	return func_292(*uParam0, 4096);
}

int func_507(int iParam0)
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

bool func_508(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

bool func_509(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

struct<2> func_510(int iParam0)
{
	Var0 = { func_511(-212244724, func_366(iParam0)) };
	if (_stat_id_is_valid(&Var0))
	{
		Var0 = { func_511(-1366121835, func_366(iParam0)) };
	}
	return Var0;
}

struct<2> func_511(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_512(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_513(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_612(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_613(iParam0))
	{
		return false;
	}
	if (func_614(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_514(iParam0, 1)) || func_615(32768))
	{
		if (!func_514(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_616())
	{
		return false;
	}
	return true;
}

bool func_514(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

void func_515(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

int func_516(bool bParam0)
{
	if (bParam0)
	{
		iVar0 = func_617(1, 0, 0);
	}
	else
	{
		iVar0 = func_3();
	}
	return func_517(iVar0);
}

int func_517(int iParam0)
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

int func_518(int iParam0)
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

int func_519(int iParam0, int iParam1)
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

void func_520(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_322(Global_1310750[iVar0], iParam0))
		{
			if (!func_313(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_618(iVar0) < func_619(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_372(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

void func_521(int iParam0)
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

void func_522(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_523()
{
	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_620(iVar0, 128))
		{
			func_621(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_524()
{
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_620(iVar0, 128) && func_620(iVar0, 1))
		{
			func_621(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_525(float fParam0)
{
	iVar0 = floor((fParam0 * 1000f));
	if (Global_1393237->f_3 < (get_game_timer() + iVar0))
	{
		Global_1393237->f_3 = (get_game_timer() + iVar0);
	}
}

void func_526()
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_61(iVar0, 16777216))
		{
			if (!func_622(iVar0))
			{
				func_623(iVar0, 4096);
			}
		}
		iVar0++;
	}
}

void func_527(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = ((iParam1 + (60 * iParam2)) + (3600 * iParam3));
	iVar1 = (iVar0 / 2);
	iVar2 = (iVar1 / 60);
	iVar3 = (iVar1 - iVar2 * 60);
	iVar4 = 0;
	switch (iParam0)
	{
		case 0:
			func_314(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_314(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_314(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_314(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_314(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_314(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_314(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_314(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_314(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_314(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_314(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_314(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_314(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_314(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_314(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_314(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_314(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_314(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_314(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_314(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_314(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_314(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_314(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_314(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_314(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_314(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_314(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_314(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_314(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_314(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_314(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_314(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_314(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_314(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_314(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_314(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_528(float fParam0, bool bParam1, bool bParam2)
{
	fVar0 = func_265();
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

int func_529(int iParam0)
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

int func_530(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

void func_531(int iParam0)
{
	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_624();
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
			func_625(&(Global_1935630->f_34), &(Global_1935630->f_39));
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

var func_532(int iParam0)
{
	return &(Global_1109400->f_276[iParam0]);
}

bool func_533(int iParam0)
{
	iVar0 = Global_1935630->f_40;
	if (func_124() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_626(iParam0);
		}
	}
	else if (!does_entity_exist(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_626(iParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_560(iVar0) == -1)
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

void func_534(int iParam0)
{
	if (*iParam0 & 8 != 0 || *iParam0 & 16 != 0)
	{
		func_627(iParam0);
	}
}

bool func_535(int iParam0, int iParam1, int iParam2)
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
		iVar1 = func_560(iParam2);
	}
	else
	{
		iVar1 = func_559(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_560(iParam0);
	}
	else
	{
		iVar0 = func_559(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_5(*iParam1, 8388608))
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

float func_536(int iParam0, int iParam1)
{
	return func_150(iParam0, iParam1, 1, 1);
}

float func_537(int iParam0)
{
	return iParam0->f_26;
}

bool func_538(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_539(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_58(iParam0, 134217728);
	}
	else
	{
		func_57(iParam0, 134217728);
	}
}

bool func_540(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_150(iVar0, iParam0, 1, 1) <= 4f)
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
		if (_is_weapon_sniper(func_628(iVar0, 0)))
		{
			if (func_629(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_541(int iParam0)
{
	return iParam0->f_17;
}

bool func_542(int iParam0, int iParam1, float fParam2, float fParam3)
{
	if (iParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_5(*iParam0, 4194304))
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

int func_543(int iParam0)
{
	return iParam0->f_18;
}

bool func_544(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (_is_weapon_sniper(func_628(iVar0, 0)))
		{
			if (func_630(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_545(int iParam0)
{
	return iParam0->f_23;
}

int func_546(int iParam0)
{
	return iParam0->f_21;
}

int func_547(int iParam0)
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

bool func_548(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_631(iParam0, vParam4, 0.5f))
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

int func_549(int iParam0)
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
	if (func_632(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_550(int iParam0)
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

bool func_551(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_231(iParam1))
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

bool func_552(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_231(iParam1))
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

bool func_553(int iParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = 40f;
	if (func_231(iParam1))
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

bool func_554(int iParam0, int iParam1)
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

bool func_555(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (func_633(iParam0, 1, 0, 0) != 2055893578)
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

bool func_556(int iParam0)
{
	return !*iParam0 & 2 != 0;
}

bool func_557(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_143(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_558(int iParam0)
{
	return iParam0->f_24;
}

int func_559(int iParam0)
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

int func_560(int iParam0)
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

int func_561(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_554(Global_35, &iVar1))
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
		fVar2 = func_150(iParam0, player_ped_id(), 0, 1);
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
		if (func_150(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

bool func_562(int iParam0, int iParam1, bool bParam2)
{
	func_398(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_563(iParam1, iVar0))
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
				if (!bParam2 || !func_563(iParam1, iVar1))
				{
					if (func_143(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_563(int iParam0, int iParam1)
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

int func_564(int iParam0)
{
	if (func_272())
	{
		return 0;
	}
	return func_488((*Global_1347702)[58]->f_15, 1);
}

int func_565(int iParam0)
{
	return iParam0->f_20;
}

int func_566(int iParam0, int iParam1, bool bParam2, float fParam3)
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

bool func_567(int iParam0)
{
	return func_489(iParam0, 2);
}

bool func_568(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

void func_569(bool bParam0)
{
	func_634(bParam0);
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

bool func_570(int iParam0, var uParam1)
{
	if (!func_635(iParam0))
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

int func_571(int iParam0, int iParam1)
{
	iVar1 = func_607(iParam0, iParam1);
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

bool func_572(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_636(iParam0, iParam1))
		{
			if (!func_5(iParam1->f_10, 1))
			{
				set_ped_config_flag(iParam0, 130, false);
				set_ped_config_flag(iParam0, 315, false);
				set_ped_config_flag(iParam0, 297, false);
				set_ped_config_flag(iParam0, 178, true);
				func_249(uParam2, 0, 0, 1, 0);
				func_58(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_5(iParam1->f_10, 1))
		{
			func_637(uParam2);
			set_ped_config_flag(iParam0, 130, true);
			set_ped_config_flag(iParam0, 315, true);
			set_ped_config_flag(iParam0, 297, true);
			set_ped_config_flag(iParam0, 178, false);
			func_57(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_573(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		bVar4 = func_5(iParam4, 32);
		func_248(iParam1, uParam2, 0);
		iVar5 = func_638(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			set_ped_config_flag(*uParam0, 178, false);
			return true;
		}
		func_249(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_5(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_5(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_5(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_5(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_5(iParam4, 8388608) || func_5(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_5(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_5(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_575(iParam1, 4))
		{
			iVar6 |= 1024;
			_0xbb1e41dd3d3c6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_575(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_5(iParam4, 67108864))
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
				iParam6 = func_639(uParam0);
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
			if (func_5(iParam4, 268435456))
			{
				iVar8 = func_640(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_641(iParam1, (*uParam2)[iVar8]);
				}
			}
			if (func_575(iParam1, 23))
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
			if (func_5(iParam4, 2) || func_5(iParam4, 16))
			{
				func_574(*uParam0, 1, 1);
			}
			else
			{
				func_574(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_574(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !is_entity_dead(iParam0))
	{
		set_ped_config_flag(iParam0, 317, bParam1);
	}
}

bool func_575(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

bool func_576(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_642(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_577(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_643(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_5(iParam10, 32), 1, 0);
			set_bit(iParam2, 1);
		}
	}
	else if (is_bit_set(*iParam2, 1))
	{
		clear_bit(iParam2, 1);
	}
}

void func_578(int iParam0)
{
	if (func_5(iParam0, 4))
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
	if (func_5(iParam0, 16384))
	{
		disable_control_action(0, -485697785, false);
	}
	if (func_5(iParam0, 8))
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
	}
}

bool func_579(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	iVar1 = func_644(1);
	bVar2 = is_bit_set(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = is_ped_on_foot(Global_35);
	bVar10 = is_ped_injured(*uParam0);
	bVar11 = (((_is_ped_carrying(Global_35) || func_645(Global_35)) || func_646(Global_35)) || func_647(Global_35));
	fVar12 = -1f;
	if (func_263(&(iParam1->f_13)))
	{
		fVar12 = func_121(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((*uParam4)[iVar0]->f_8 != iParam12)
		{
			iParam12 = (*uParam4)[iVar0]->f_8;
		}
		bVar4 = func_196((*uParam4)[iVar0]->f_6);
		func_648(*uParam0, (*uParam4)[iVar0], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (is_bit_set(uParam4[iVar0], 20))
		{
			bVar3 = true;
		}
		if (func_649(*uParam0, iParam1, (*uParam4)[iVar0], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_650(iParam12, (*uParam4)[iVar0]->f_6))
				{
					if (!bVar7)
					{
						func_249(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_651(uParam4, 0, 0);
					}
					if (is_bit_set(uParam4[iVar0], 11))
					{
						func_248(iParam1, uParam4, is_bit_set(*iParam1, 6));
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
					if (func_652(iParam1, fParam6, iParam1->f_9))
					{
						func_120(&(iParam1->f_18));
						if (bVar6)
						{
							func_651(uParam4, 0, 0);
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
		func_653(iParam1, fParam2);
	}
	return bVar5;
}

void func_580(var uParam0)
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

void func_581(int* iParam0, var uParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_654((*uParam1)[iVar0]))
		{
			if (is_bit_set(uParam1[iVar0], 20))
			{
				func_653(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_582(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!is_control_pressed(0, -124244224))
		{
			if (func_655(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_656(iParam1, 0);
				func_248(iParam1, uParam2, func_575(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_583(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_120(&(iParam1->f_18));
			return false;
		}
		else if (func_263(&(iParam1->f_18)))
		{
			func_252(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_263(&(iParam1->f_18)))
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
	return func_657(&(iParam1->f_18), fParam2);
	return true;
}

void func_584(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_648(iParam0, (*uParam2)[iVar0], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_585(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

int func_586(int* iParam0)
{
	if (func_575(iParam0, 0))
	{
		if (func_658(iParam0))
		{
			func_585(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

bool func_587(int iParam0)
{
	return is_bit_set(iVar918, iParam0);
}

bool func_588()
{
	if (!is_entity_dead(&(uLocal_731[0])))
	{
		if (func_659(0))
		{
			return true;
		}
	}
	return false;
}

void func_589(int iParam0)
{
	set_bit(&uLocal_921, iParam0);
}

void func_590(int iParam0)
{
	clear_bit(&uLocal_921, iParam0);
}

char* func_591(int iParam0)
{
	switch (func_3())
	{
		case 105:
			if (iLocal_86 == 2)
			{
				switch (iParam0)
				{
					case 0:
						return "RETB_RHO_PRE_GEN_LINE01";
					case 1:
						return "RETB_RHO_PRE_GEN_LINE02";
					case 2:
						return "RETB_RHO_PRE_GEN_LINE03";
					case 3:
						return "RETB_RHO_PRE_GEN_LINE04";
					case 4:
						return "RETB_RHO_PRE_GEN_LINE05";
					case 5:
						return "RETB_RHO_PRE_GEN_LINE06";
					case 6:
						return "RETB_RHO_PRE_GEN_LINE07";
					default:
						break;
				}
			}
			break;
		case 38:
			if (iLocal_86 == 0 || iLocal_86 == 1)
			{
				switch (iParam0)
				{
					case 0:
						return "RETB_VAL_PRE_GEN_LINE01";
					case 1:
						return "RETB_VAL_PRE_GEN_LINE02";
					case 2:
						return "RETB_VAL_PRE_GEN_LINE03";
					case 3:
						return "RETB_VAL_PRE_GEN_LINE04";
					case 4:
						return "RETB_VAL_PRE_GEN_LINE05";
					case 5:
						return "RETB_VAL_PRE_GEN_LINE06";
					case 6:
						return "RETB_VAL_PRE_GEN_LINE07";
					default:
						break;
				}
			}
			break;
	}
	return "";
}

void func_592(int iParam0, char* sParam1, float fParam2)
{
	if (!func_49(iParam0, 0, 1))
	{
		return;
	}
	if (_0x68821369a2ceadd5(iParam0, get_hash_key(sParam1)))
	{
		return;
	}
	_0xd65fdc686a031c83(iParam0, get_hash_key(sParam1), fParam2);
}

bool func_593(float fParam0)
{
	if (func_660(1))
	{
		return true;
	}
	if (func_263(&uLocal_0) && !func_657(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

void func_594(int iParam0)
{
	if (func_124() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_152(func_661(iVar0), 0))
		{
			if (is_ped_group_member(func_661(iVar0), func_343(), 1))
			{
				func_662(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

int func_595(int iParam0)
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

void func_596(int iParam0, int iParam1, int iParam2, int iParam3)
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
					if (func_663() > Global_32074.f_2697.f_6[iVar0]->f_5)
					{
						Global_32074.f_2697.f_6[iVar0]->f_5 = func_663();
					}
					func_664(&(Global_32074.f_2697.f_6[iVar0]->f_5), 0, 0, iParam1, iParam2, 0, 0, 0);
					func_57(&(Global_1415419->f_19[iVar0]->f_11), 2);
				}
			}
			iVar0++;
		}
	}
}

void func_597(int iParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		iVar0 = func_518(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_519(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2]->f_1++;
	}
}

void func_598(int iParam0, int iParam1)
{
	if (iParam1 != -1 && !func_103(iParam0, 8192))
	{
		iVar0 = func_519(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0]->f_1++;
	}
}

void func_599(int iParam0, int iParam1)
{
	iVar0 = (func_318(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	set_bit(Global_17504.f_12[iVar1], iVar2);
}

void func_600(int iParam0, vector3 vParam1)
{
	if (func_61(iParam0, 512))
	{
		vParam1 = { Global_36 };
	}
	if (func_148(vParam1))
	{
		return;
	}
	if (!func_183(iParam0))
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Global_17504.f_2084)
	{
		vVar2 = { *Global_17504.f_2084[iVar0] };
		if (func_148(vVar2))
		{
			if (iVar1 < 0)
			{
				iVar1 = iVar0;
			}
		}
		else if (Global_17504.f_2084[iVar0]->f_3 == iParam0)
		{
			if (func_332(vVar2, vParam1, 1f, 1))
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

void func_601(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		func_623(iVar0, iParam0);
		iVar0++;
	}
}

int func_602(int iParam0)
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

void func_603(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_604(int iParam0)
{
	if (!func_408(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_20;
}

bool func_605(int iParam0)
{
	return (Global_1310750->f_16074 && iParam0) != 0;
}

bool func_606()
{
	return Global_1894899 & 2 != 0;
}

int func_607(int iParam0, int iParam1)
{
	if (!func_183(iParam0))
	{
		return -1;
	}
	return (iParam0 + (120 * iParam1));
}

int func_608(int iParam0)
{
	if (!func_403(iParam0))
	{
		return -1;
	}
	return func_665(iParam0);
}

bool func_609(var uParam0)
{
	return func_292(*uParam0, 1);
}

bool func_610(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_666(*uParam0, 0f, 0f, 0f))
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

void func_611(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_667(iParam1))
		{
			func_668(iParam0, 41788943);
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
			func_669(iParam0, 0, 1);
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
			func_670(iParam0, 0);
			bVar0 = true;
		}
		func_671(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

bool func_612(int iParam0, int iParam1)
{
	if (func_124() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_613(int iParam0)
{
	if (func_124() != -1)
	{
		if (func_514(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_514(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_614(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_514(iParam0, 65536) && !func_514(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_514(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_514(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_615(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_616()
{
	return Global_1905944->f_5694;
}

int func_617(int iParam0, bool bParam1, bool bParam2)
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
				if (!bParam1 || func_672(iVar2))
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

int func_618(int iParam0)
{
	if (func_183(iParam0))
	{
		return Global_17504.f_42[iParam0]->f_4;
	}
	return 0;
}

int func_619(int iParam0)
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

bool func_620(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return false;
	}
	return (Global_1393237->f_11[iParam0]->f_10 && iParam1) != 0;
}

void func_621(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return;
	}
	Global_1393237->f_11[iParam0]->f_10 = (Global_1393237->f_11[iParam0]->f_10 || iParam1);
}

bool func_622(int iParam0)
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

void func_623(int iParam0, int iParam1)
{
	if (!func_183(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_1 = ((*Global_1310750)[iParam0]->f_1 - ((*Global_1310750)[iParam0]->f_1 && iParam1));
}

bool func_624()
{
	if (func_673())
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

void func_625(var uParam0, var uParam1)
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

int func_626(int iParam0)
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

void func_627(int iParam0)
{
	if (Global_1935630->f_38 == 0)
	{
		func_57(iParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1935630->f_34[iVar0])))
				{
					func_58(iParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_628(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_629(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_630(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_630(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_631(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_632(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_633(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

void func_634(bool bParam0)
{
	_0xb6fd96420c0126a1(-1056478928, bParam0);
}

bool func_635(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

bool func_636(int iParam0, int* iParam1)
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
		if (is_ped_in_combat(iParam0, func_674((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_637(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_654((*uParam0)[iVar0]))
		{
			func_256((*uParam0)[iVar0], 14);
		}
		iVar0++;
	}
}

int func_638(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(*uParam2)[iVar0]->f_8 = 6;
		func_675(iParam0, (*uParam2)[iVar0], fParam3, 3, 0, 6, bParam4, 0);
		if (func_196((*uParam2)[iVar0]->f_6))
		{
			func_256((*uParam2)[iVar0], 11);
			return (*Global_1945938)[(*uParam2)[iVar0]->f_6]->f_3;
		}
	}
	return 0;
}

int func_639(var uParam0)
{
	iVar0 = func_305(*uParam0);
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

int func_640(var uParam0, int iParam1)
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

void func_641(int* iParam0, int* iParam1)
{
	if (!func_575(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_256(iParam1, 19);
			func_656(iParam0, 23);
			func_676(iParam1, 2);
		}
	}
}

bool func_642(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (func_677(16))
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
					func_678(16);
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

void func_643(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_675(iParam0, (*uParam1)[iVar0], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			clear_bit((*uParam1)[iVar0], 14);
		}
		iVar0++;
	}
}

int func_644(int iParam0)
{
	return _money_get_cash_balance();
}

bool func_645(int iParam0)
{
	return (func_679(iParam0, 4) || func_679(iParam0, 5));
}

int func_646(int iParam0)
{
	return func_679(iParam0, 7);
}

int func_647(int iParam0)
{
	return func_679(iParam0, 6);
}

void func_648(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (is_bit_set(*iParam1, 14))
	{
		if (func_654(iParam1))
		{
			clear_bit(iParam1, 14);
			func_675(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_649(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_680(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_681(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_199(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_199(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_682(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_650(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_683(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_684(iParam1, 1))
	{
		func_685(iParam1, 1);
		return true;
	}
	return false;
}

void func_651(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_115((*uParam0)[iVar0], bParam1, bParam2);
		iVar0++;
	}
}

bool func_652(int* iParam0, float fParam1, bool bParam2)
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

void func_653(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		disable_control_action(0, 1101824977, true);
		disable_control_action(0, 966551065, true);
		disable_control_action(0, 668058244, true);
		set_ped_reset_flag(Global_35, 203, true);
	}
}

bool func_654(int* iParam0)
{
	if (!is_string_null_or_empty(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_655(int iParam0)
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

void func_656(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

bool func_657(var uParam0, float fParam1)
{
	if (func_409(uParam0, fParam1))
	{
		func_252(uParam0);
		return true;
	}
	return false;
}

bool func_658(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

bool func_659(int iParam0)
{
	return _0x02ebbb3989b7e695(&(uLocal_731[iParam0]));
}

bool func_660(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

int func_661(int iParam0)
{
	if (!func_686(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

void func_662(int iParam0, int iParam1)
{
	if (!func_687(iParam0))
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

int func_663()
{
	return &Global_1899515;
}

void func_664(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_688(*uParam0);
	iVar1 = func_689(*uParam0);
	iVar2 = func_690(*uParam0);
	iVar3 = func_390(*uParam0);
	iVar4 = func_691(*uParam0);
	iVar5 = func_692(*uParam0);
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
	iVar6 = func_693(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_693(iVar1, iVar0);
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
	func_694(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_665(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_695(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

bool func_666(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_667(int iParam0)
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

void func_668(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_696(iParam0, iParam1))
		{
			if (func_697(iParam0, iParam1))
			{
				if (func_698(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_699(iParam0);
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

void func_669(int iParam0, int iParam1, bool bParam2)
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

void func_670(int iParam0, bool bParam1)
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

void func_671(int iParam0, int iParam1)
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

bool func_672(int iParam0)
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

bool func_673()
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

int func_674(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_675(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (func_196(iParam1->f_6))
	{
		if (bParam7 || is_bit_set(*iParam1, 11))
		{
			return;
		}
		func_258(&(iParam1->f_6), 0, 1);
	}
	if (!func_196(iParam1->f_6) && !is_bit_set(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_654(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_700(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_196(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_682(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_701(iParam1->f_6, 17, 1, 1);
				}
				if (is_bit_set(*iParam1, 1))
				{
					if (is_bit_set(*iParam1, 3))
					{
						func_702(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_197(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (is_bit_set(*iParam1, 10))
				{
					func_701(iParam1->f_6, 16, 1, 1);
				}
				if (!is_bit_set(*iParam1, 0) || is_bit_set(*iParam1, 13))
				{
					func_199(iParam1->f_6, 0, 1);
				}
				else
				{
					func_199(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

void func_676(int* iParam0, int iParam1)
{
	if (!func_255(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_256(iParam0, 14);
		}
	}
}

bool func_677(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_678(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_679(int iParam0, int iParam1)
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

bool func_680(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

bool func_681(int iParam0, bool bParam1)
{
	if (bParam1 && !func_196(iParam0))
	{
		return false;
	}
	return !func_489(iParam0, 4);
}

void func_682(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam3 && !func_196(iParam0))
	{
		return;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = func_349(iParam0);
	func_701(iParam0, 18, 0, 1);
	func_701(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = _uiprompt_get_group_id_for_target_entity(iParam1);
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam4, iParam2);
}

bool func_683(int iParam0, bool bParam1)
{
	if (bParam1 && !func_196(iParam0))
	{
		return false;
	}
	iVar0 = func_349(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

bool func_684(int iParam0, bool bParam1)
{
	if (bParam1 && !func_196(iParam0))
	{
		return false;
	}
	iVar0 = func_349(iParam0);
	return _uiprompt_is_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_685(int iParam0, bool bParam1)
{
	if (bParam1 && !func_196(iParam0))
	{
		return;
	}
	iVar0 = func_349(iParam0);
	_uiprompt_restart_modes((*Global_1945938)[iVar0]->f_3);
}

bool func_686(int iParam0)
{
	return iParam0 > -1;
}

bool func_687(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

int func_688(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_443(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_689(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_690(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_691(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_692(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_693(int iParam0, int iParam1)
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

void func_694(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_703(uParam0, iParam6);
	func_704(uParam0, iParam5);
	func_705(uParam0, iParam4);
	func_706(uParam0, iParam3);
	func_707(uParam0, iParam2);
	func_708(uParam0, iParam1);
}

int func_695(int iParam0)
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

bool func_696(int iParam0, int iParam1)
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

bool func_697(int iParam0, int iParam1)
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

bool func_698(int iParam0, int iParam1)
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
	if (!func_696(iParam0, iVar0))
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

void func_699(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

int func_700(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_489(iVar0, 2))
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
				func_709(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, uParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_701(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_196(iParam0))
	{
		return;
	}
	iVar0 = func_349(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_702(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (bParam4 && !func_196(iParam0))
	{
		return;
	}
	iVar0 = func_349(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(10, sParam1, sParam2, sParam3));
}

void func_703(var uParam0, int iParam1)
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

void func_704(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || shift_left(iParam1, 22));
}

void func_705(var uParam0, int iParam1)
{
	iVar0 = func_689(*uParam0);
	iVar1 = func_688(*uParam0);
	if (iParam1 < 1 || iParam1 > func_693(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || shift_left(iParam1, 17));
}

void func_706(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || shift_left(iParam1, 12));
}

void func_707(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || shift_left(iParam1, 6));
}

void func_708(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || shift_left(iParam1, 0));
}

void func_709(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, var uParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_351(iParam0, 1);
	func_352(iParam0, 1);
	func_353(iParam0, 128);
}

