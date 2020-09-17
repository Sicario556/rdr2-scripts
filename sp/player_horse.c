void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (has_force_cleanup_occurred(512))
	{
		if (get_cause_of_most_recent_force_cleanup() != 2)
		{
		}
		func_1();
	}
	network_set_script_is_safe_for_network_game();
	if (func_2() == -1)
	{
		while (!func_3(64))
		{
			wait(0);
		}
	}
	func_4();
	bVar0 = false;
	while (!bVar0)
	{
		if (_0x9e4ef615e307fbbe())
		{
			bVar0 = true;
		}
		else
		{
			if (func_5())
			{
				func_6();
				func_7();
				func_8();
				func_9();
				func_10();
			}
			wait(0);
		}
	}
	func_1();
}

void func_1()
{
	func_11();
	terminate_this_thread();
}

int func_2()
{
	return Global_1572887->f_12;
}

bool func_3(int iParam0)
{
	return (Global_21 && iParam0) != 0;
}

void func_4()
{
	func_12();
	func_13();
	func_14(1);
	func_15(0);
	func_16();
}

bool func_5()
{
	if (!func_3(256))
	{
		return false;
	}
	if (&Global_1879534)
	{
		return false;
	}
	if (!does_entity_exist(Global_35))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		if (func_2() == -1)
		{
			return false;
		}
	}
	if (Global_1572887->f_8)
	{
		return false;
	}
	if (func_17(68))
	{
		return false;
	}
	return true;
}

void func_6()
{
	func_18();
	func_19();
	func_20(&Var0);
	func_21(0, &Var7);
	func_21(1, &Var19);
	func_22(Var7);
	func_22(Var19);
	func_23(Var7);
	func_23(Var19);
	func_24(Var0, Var7, Var19);
	func_25(0, &Var7);
	func_25(1, &Var19);
	func_26(0, &Var7);
	func_26(1, &Var19);
	func_27();
	func_28(Var0);
	func_29(Var0);
	func_30(Var0);
	func_31();
	func_32();
	func_33();
}

void func_7()
{
	if (is_ped_injured(Global_35))
	{
		return;
	}
	if (Global_16)
	{
		return;
	}
	if (func_34())
	{
		return;
	}
	switch (Global_1900383->f_317)
	{
		case 0:
			func_35(0);
			break;
		case 1:
			func_35(1);
			break;
		case 2:
			func_35(6);
			break;
	}
	iVar0 = Global_1900383->f_317;
	iVar0++;
	if (iVar0 >= 3)
	{
		iVar0 = 0;
	}
	Global_1900383->f_317 = iVar0;
}

void func_8()
{
	iVar1 = get_number_of_events(0);
	if (iVar1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		func_36(iVar0);
		iVar0++;
	}
}

void func_9()
{
	switch (Global_1900383->f_422)
	{
		case 0:
		case 6:
			func_20(&Var0);
			func_21(0, &Var7);
			func_21(1, &Var19);
			func_21(6, &Var31);
			func_21(5, &Var43);
			func_37(Var0, Var7, 0);
			func_37(Var0, Var19, 1);
			func_37(Var0, Var31, 6);
			func_37(Var0, Var43, 5);
			func_38(Var0);
			func_39(Var0, Var7);
			func_40(Var0, Var7, 0);
			func_40(Var0, Var19, 1);
			func_40(Var0, Var31, 6);
			func_41(0);
			func_41(1);
			func_41(6);
			func_42(Var0, Var7, 0);
			func_42(Var0, Var19, 1);
			func_43(Var7, Var0, 0);
			func_43(Var19, Var0, 1);
			func_44(0);
			func_44(1);
			func_45(Var0, Var7, 0);
			func_45(Var0, Var19, 1);
			func_46(Var0, Var7, 0);
			func_46(Var0, Var19, 1);
			func_47(Var0);
			func_48(Var0);
			func_49();
			func_50();
			func_51(Var0);
			func_52();
			func_53();
			func_54();
			func_55();
			func_56();
			func_57(Var0, Var7, 0);
			func_57(Var0, Var19, 1);
			func_58(Var0, Var7, 0);
			func_58(Var0, Var19, 1);
			func_58(Var0, Var31, 6);
			func_59(Var0, Var7, Var19);
			break;
		case 1:
			func_60();
			break;
		case 2:
			func_61(0);
			func_62(0);
			break;
		case 3:
			func_61(1);
			func_62(1);
			break;
		case 9:
			func_63();
			break;
		case 10:
			func_64(0);
			func_64(1);
			break;
		case 11:
			func_65();
			break;
		case 4:
			func_66(0);
			break;
		case 5:
			func_66(1);
			break;
		case 7:
			func_66(5);
			break;
		case 8:
			func_67();
			break;
	}
	iVar55 = Global_1900383->f_422;
	iVar55++;
	if (iVar55 >= 12)
	{
		iVar55 = 0;
	}
	Global_1900383->f_422 = iVar55;
}

void func_10()
{
	if (is_ped_injured(Global_35))
	{
		return;
	}
	switch (Global_1900383->f_423)
	{
		case 0:
			func_68();
			break;
		case 1:
			func_69();
			break;
		case 2:
			func_70();
			break;
	}
	iVar0 = Global_1900383->f_423;
	iVar0++;
	if (iVar0 >= 3)
	{
		iVar0 = 0;
	}
	Global_1900383->f_423 = iVar0;
}

void func_11()
{
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (func_71(iVar0))
		{
			if (!func_72(iVar0))
			{
				func_73(iVar0);
			}
		}
		iVar0++;
	}
	func_74();
}

void func_12()
{
	_0xed9582b3da8f02b4(1);
	func_18();
}

int func_13()
{
	iVar0 = func_75();
	request_model(iVar0, false);
	if (!has_model_loaded(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_14(bool bParam0)
{
	if (func_76(128) || func_77(6))
	{
		return 1;
	}
	if (bParam0)
	{
		if (!_0x603ac35fd4602c76(Global_1913814->f_202) && !func_78(1625871738, &(Global_1913814->f_202), 600, -1, 0, 0))
		{
			func_79(128);
			func_80(6);
			return 0;
		}
	}
	else
	{
		if (!_0x7907969497ea92f5(Global_1913814->f_202))
		{
			Global_1913814->f_202 = _0xd97d8d905f1562f2(1625871738);
		}
		if (!_0x603ac35fd4602c76(Global_1913814->f_202))
		{
			return 0;
		}
	}
	_datafile_register_query(Global_1913814->f_202, 893391757, "MOUNT_TYPES/MOUNT(type=%x)/WHISTLE:id");
	_datafile_register_query(Global_1913814->f_202, 1616037958, "MOUNT_TYPES/MOUNT(type=%x)/LOADOUT_SLOT:id");
	_datafile_register_query(Global_1913814->f_202, 1555915504, "MOUNT_TYPES/MOUNT(type=%x)/REPOSITORY:id");
	_datafile_register_query(Global_1913814->f_202, -298851427, "MOUNT_TYPES/MOUNT(type=%x)/ITEM_CATEGORY:id");
	_datafile_register_query(Global_1913814->f_202, 834733495, "MOUNT_TYPES/MOUNT(type=%x)/BONDING:id");
	_datafile_register_query(Global_1913814->f_202, 808825305, "MOUNT_TYPES/MOUNT(type=%x)/UI_FILTERS:start");
	_datafile_register_query(Global_1913814->f_202, -748933974, "MOUNT_TYPES/MOUNT(type=%x)/UI_FILTERS:end");
	_datafile_register_query(Global_1913814->f_202, -1543589730, "MOUNT_TYPES/MOUNT(type=%x)/ARCHETYPES:start");
	_datafile_register_query(Global_1913814->f_202, -143743697, "MOUNT_TYPES/MOUNT(type=%x)/ARCHETYPES:end");
	_datafile_register_query(Global_1913814->f_202, 116835447, "MOUNT_TYPES/MOUNT(type=%x)/BLIP_STYLE:id");
	_datafile_register_query(Global_1913814->f_202, -1255580663, "MOUNT_TYPES/MOUNT(type=%x)/BLIP_SPRITE:id");
	_datafile_register_query(Global_1913814->f_202, 1292413058, "MOUNT_TYPES/MOUNT(type=%x)/BLIP_NAME:id");
	_datafile_register_query(Global_1913814->f_202, 2112095068, "MOUNT_TYPES/MOUNT(type=%x)/COMPATIBLE_TYPES/MOUNT_TYPE(id=%x)");
	_datafile_register_query(Global_1913814->f_202, -1379316512, "MOUNT_TYPES/MOUNT(type=%x)/EQUIPMENT_DATA/EQUIPMENT_SLOT(%i)");
	_datafile_register_query(Global_1913814->f_202, -223927384, "MOUNT_TYPES/MOUNT(type=%x)/EQUIPMENT_DATA/EQUIPMENT_SLOT(%i):slot_id");
	_datafile_register_query(Global_1913814->f_202, 267140771, "MOUNT_TYPES/MOUNT(type=%x)/EQUIPMENT_DATA/EQUIPMENT_SLOT(%i):metaped_tag");
	_datafile_register_query(Global_1913814->f_202, -675686015, "MOUNT_TYPES/MOUNT(type=%x)/EQUIPMENT_DATA/EQUIPMENT_SLOT(%i):none_item");
	_datafile_register_query(Global_1913814->f_202, -1507362072, "MOUNT_TYPES/MOUNT(type=%x)/EQUIPMENT_DATA/EQUIPMENT_SLOT(slot=%x):metaped_tag");
	_datafile_register_query(Global_1913814->f_202, 1979684523, "MOUNT_TYPES/MOUNT(type=%x)/EQUIPMENT_DATA/EQUIPMENT_SLOT(slot=%x):none_item");
	_datafile_register_query(Global_1913814->f_202, 42812586, "MOUNT_TYPES/MOUNT(type=%x)/EQUIPMENT_DATA/EQUIPMENT_SLOT(slot=%x):id");
	_datafile_register_query(Global_1913814->f_202, 1318388873, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL:id");
	_datafile_register_query(Global_1913814->f_202, -571823039, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)");
	_datafile_register_query(Global_1913814->f_202, 1894757327, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(%i)");
	_datafile_register_query(Global_1913814->f_202, -385264207, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/INVENTORY_ITEM:id");
	_datafile_register_query(Global_1913814->f_202, 38531101, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/DEFAULT_EQUIPMENT:id");
	_datafile_register_query(Global_1913814->f_202, -509881626, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/STABLING_COST:id");
	_datafile_register_query(Global_1913814->f_202, -1239479495, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/INSURANCE_COST:id");
	_datafile_register_query(Global_1913814->f_202, -1224542537, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/REVIVE_COST:id");
	_datafile_register_query(Global_1913814->f_202, 1192923488, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/MOUNT_CLASS:id");
	_datafile_register_query(Global_1913814->f_202, 737763634, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/MOUNT_QUALITY:id");
	_datafile_register_query(Global_1913814->f_202, 735225176, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/BASE_HEALTH:id");
	_datafile_register_query(Global_1913814->f_202, -1306132799, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/BASE_STRENGTH:id");
	_datafile_register_query(Global_1913814->f_202, 1611478627, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/BASE_SPEED:id");
	_datafile_register_query(Global_1913814->f_202, -221622390, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/BASE_AGILITY:id");
	_datafile_register_query(Global_1913814->f_202, 1695792563, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/BASE_FITNESS:id");
	_datafile_register_query(Global_1913814->f_202, 1454482041, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/BASE_GRIT:id");
	_datafile_register_query(Global_1913814->f_202, -1699214685, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/BONDING_XP_LEVEL1:id");
	_datafile_register_query(Global_1913814->f_202, -926718279, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/BONDING_XP_LEVEL2:id");
	_datafile_register_query(Global_1913814->f_202, 1186063008, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/BONDING_XP_LEVEL3:id");
	_datafile_register_query(Global_1913814->f_202, 1105713420, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/BONDING_XP_LEVEL4:id");
	func_79(128);
	func_80(6);
	return 1;
}

void func_15(int iParam0)
{
	if (Global_1900383->f_378 != iParam0)
	{
	}
	Global_1900383->f_378 = iParam0;
}

int func_16()
{
	if (!func_82(-1898635967, func_81(), 1))
	{
		return 0;
	}
	if (func_83())
	{
		if (!func_82(146323340, func_81(), 0))
		{
			return 0;
		}
	}
	return 1;
}

bool func_17(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

void func_18()
{
	iVar0 = 1;
	if (func_84(0) == 1)
	{
	}
	if (func_84(1) == 1)
	{
		iVar0++;
	}
	if (func_84(5) == 1)
	{
		iVar0++;
	}
	if (func_84(6) == 1)
	{
		iVar0++;
	}
	iVar0 = (iVar0 + func_85(0));
	iVar0 = (iVar0 + func_85(1));
	iVar1 = _0x62de46f061caa468();
	if (iVar0 > iVar1)
	{
		iVar2 = (iVar0 - iVar1);
		_0xf008e0ba1fe1d644(iVar2);
	}
	else if (iVar0 < iVar1)
	{
		iVar3 = (iVar1 - iVar0);
		_0x7d4e70a67a651c71(iVar3);
	}
}

void func_19()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_86(iVar0);
		iVar0++;
	}
}

void func_20(var uParam0)
{
	*uParam0 = player_id();
	if (!is_player_dead(*uParam0))
	{
		uParam0->f_1 = 1;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	if (does_entity_exist(Global_35))
	{
		uParam0->f_2 = 1;
		if (is_ped_injured(Global_35))
		{
			uParam0->f_4 = 1;
		}
		if (!is_entity_dead(Global_35))
		{
			uParam0->f_3 = 1;
		}
		if (is_ped_on_mount(Global_35))
		{
			uParam0->f_5 = 1;
			uParam0->f_6 = get_mount(Global_35);
		}
	}
}

void func_21(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	*iParam1 = 0;
	iParam1->f_1 = 0;
	iParam1->f_2 = 0;
	iParam1->f_3 = 0;
	iParam1->f_4 = 0;
	iParam1->f_5 = { 0f, 0f, 0f };
	iParam1->f_8 = 0f;
	iParam1->f_10 = 0;
	iParam1->f_9 = 0;
	iParam1->f_10 = 0;
	iParam1->f_11 = 0;
	if (func_71(iParam0))
	{
		iParam1->f_1 = 1;
		*iParam1 = func_88(iParam0);
		if (!is_entity_dead(*iParam1))
		{
			iParam1->f_2 = 1;
		}
		if (is_ped_injured(*iParam1))
		{
			iParam1->f_3 = 1;
		}
		if (is_ped_in_writhe(*iParam1))
		{
			iParam1->f_4 = 1;
		}
		iParam1->f_5 = { get_entity_coords(*iParam1, true, false) };
		iParam1->f_8 = get_entity_heading(*iParam1);
		iParam1->f_9 = _get_rider_of_mount(*iParam1, false);
		if (does_entity_exist(iParam1->f_9))
		{
			if (iParam1->f_9 == Global_35)
			{
				iParam1->f_10 = 1;
			}
		}
		fVar0 = func_89(iParam0);
		if (func_90(iParam1->f_5, Global_36) <= fVar0)
		{
			iParam1->f_11 = 1;
		}
	}
}

void func_22(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11)
{
	if (Param0.f_1)
	{
		if (!_0x88ad6cc10d8d35b2(Param0))
		{
			set_entity_as_mission_entity(Param0, true, true);
		}
	}
}

void func_23(vector3 vParam0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11)
{
	if (vParam0.z)
	{
		if (func_76(64))
		{
			set_ped_reset_flag(vParam0.x, 6, true);
		}
	}
}

void func_24(struct<7> Param0, struct<12> Param7, struct<12> Param19)
{
	if (func_91())
	{
		enable_control_action(0, 613911080, true);
		enable_control_action(0, -403992187, true);
		func_92(Param0, Param7, Param19);
	}
	else
	{
		disable_control_action(0, 613911080, false);
		disable_control_action(0, -403992187, false);
		func_15(1);
	}
	func_93();
}

void func_25(int iParam0, var uParam1)
{
	if (!uParam1->f_1)
	{
		return;
	}
	if (!uParam1->f_2)
	{
		return;
	}
	bVar0 = false;
	if (func_94() && !func_95(4))
	{
		bVar0 = true;
	}
	iVar1 = 388;
	bVar2 = get_ped_config_flag(*uParam1, iVar1, false);
	if (bVar0 != bVar2)
	{
		set_ped_config_flag(*uParam1, iVar1, bVar0);
	}
	if (func_96())
	{
		return;
	}
	bVar3 = func_97(iParam0);
	if (uParam1->f_4 != bVar3)
	{
		func_98(iParam0, uParam1->f_4);
		func_99(iParam0);
	}
	if (!uParam1->f_4)
	{
		return;
	}
	if (func_100(iParam0) == 0)
	{
		func_101(iParam0, get_game_timer());
	}
	fVar4 = _get_ped_remaining_revival_time(*uParam1, false);
	func_102(iParam0, fVar4);
	if (Global_1914319->f_18969)
	{
		if (!_0x12eb4e31f092c9b3(*uParam1))
		{
			_0x925a160133003ac6(*uParam1, 1);
		}
	}
	else if (_0x12eb4e31f092c9b3(*uParam1))
	{
		_0x925a160133003ac6(*uParam1, 0);
	}
	if (func_103())
	{
		_set_entity_health(*uParam1, 0, 0);
	}
}

void func_26(int iParam0, var uParam1)
{
	if (!uParam1->f_1)
	{
		return;
	}
	if (func_96())
	{
		return;
	}
	if (!uParam1->f_2)
	{
		func_104(iParam0);
		return;
	}
}

void func_27()
{
	iVar0 = 0;
	while (iVar0 < 7)
	{
		func_105(iVar0);
		iVar0++;
	}
}

void func_28(struct<5> Param0, var uParam5, var uParam6)
{
	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (Param0.f_4)
	{
		return;
	}
	if (!is_ped_on_mount(Global_35))
	{
		func_106();
		return;
	}
	iVar0 = get_mount(Global_35);
	if (!func_107(iVar0))
	{
		return;
	}
	if (!func_108())
	{
		vVar1 = { get_entity_coords(iVar0, true, false) };
		fVar4 = get_distance_between_coords(vVar1, func_109(), false);
		func_110(vVar1);
		if (fVar4 > 0.01f)
		{
			fVar5 = func_111();
			fVar5 = (fVar5 + fVar4);
			func_112(fVar5);
		}
		if (func_111() >= 40f)
		{
			func_113(1);
		}
	}
	if (!func_108())
	{
		return;
	}
	func_114(iVar0);
}

void func_29(struct<5> Param0, var uParam5, var uParam6)
{
	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (Param0.f_4)
	{
		return;
	}
	if (!func_71(6))
	{
		return;
	}
	if (!is_ped_on_mount(Global_35))
	{
		return;
	}
	iVar0 = get_mount(Global_35);
	iVar1 = func_88(6);
	if (iVar0 != iVar1)
	{
		return;
	}
	if (func_115(6) == 0)
	{
		return;
	}
	func_116(6, 1);
}

void func_30(struct<7> Param0)
{
	if (!func_117(Param0, &iVar0, 1))
	{
		func_118();
		return;
	}
	iVar1 = get_game_timer();
	if (!does_entity_exist(Global_1900383->f_414))
	{
		Global_1900383->f_414 = iVar0;
		Global_1900383->f_414.f_1 = iVar1;
	}
	if (Global_1900383->f_414.f_1 + 5000 < iVar1)
	{
		func_119(iVar0);
		func_118();
	}
}

void func_31()
{
	if (func_120() > 1)
	{
		disable_control_action(0, -1404316431, false);
		disable_control_action(0, -822242784, false);
		disable_control_action(0, -874806616, false);
		func_121();
	}
	iVar0 = func_120();
	switch (iVar0)
	{
		case 0:
			func_122();
			break;
		case 1:
			func_123();
			break;
		case 2:
			func_124();
			break;
		case 3:
			func_125();
			break;
		case 4:
			func_126();
			break;
		case 5:
			func_127();
			break;
		case 6:
			func_128();
			break;
		case 7:
			func_129();
			break;
	}
	func_130();
}

void func_32()
{
	iVar0 = 0;
	if (func_131(0) || func_131(1))
	{
		iVar0 = 1;
	}
	func_132(iVar0);
}

void func_33()
{
	if (!func_133())
	{
		return;
	}
	bVar0 = false;
	if (!func_131(1))
	{
		bVar0 = true;
	}
	bVar1 = func_94();
	if (bVar1 && func_134() == 8)
	{
		bVar0 = true;
	}
	if ((bVar1 && func_135((*Global_1835011)[37]->f_1, 1)) && !func_135((*Global_1835011)[43]->f_1, 1))
	{
		bVar0 = true;
	}
	if ((bVar1 && func_135((*Global_1835011)[43]->f_1, 1)) && !func_135((*Global_1835011)[44]->f_1, 1))
	{
		bVar0 = true;
	}
	func_136(1, &vVar2, &uVar5);
	if (func_137(vVar2))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_138();
		return;
	}
	Var7.f_10 = 7;
	Var7.f_10 = 1;
	Var7 = 1;
	Var7.f_6 = { vVar2 };
	Var7.f_9 = uVar5;
	func_139(&iVar6, &Var7);
	switch (iVar6)
	{
		case 0:
			break;
		case 1:
			func_138();
			break;
		case 2:
			func_138();
			break;
	}
}

bool func_34()
{
	return &Global_1956584;
}

void func_35(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 <= -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (iParam0 != 0)
	{
		if (!func_140(43))
		{
			return;
		}
	}
	iVar0 = Global_1900383[iParam0];
	if (is_ped_injured(iVar0))
	{
		return;
	}
	if (Global_16)
	{
		return;
	}
	if (func_34())
	{
		return;
	}
	switch (&Global_1900383->f_424[iParam0])
	{
		case 0:
		case 1:
			func_141(iParam0);
			Global_1900383->f_424[iParam0] = 2;
			break;
		case 2:
			func_142(iParam0);
			Global_1900383->f_424[iParam0] = 3;
			break;
		case 3:
			func_143(iParam0);
			Global_1900383->f_424[iParam0] = 0;
			break;
	}
}

void func_36(int iParam0)
{
	switch (get_event_at_index(0, iParam0))
	{
		case 347157807:
			func_144(iParam0);
			break;
		case -1102089407:
			func_145(iParam0);
			break;
		case 402722103:
			func_146(iParam0);
			break;
		case 2145012826:
			func_147(iParam0);
			break;
		case 1417095237:
			func_148(134217728);
			func_149(iParam0);
			break;
		case 1638298852:
			func_150(iParam0);
			break;
		case -1246119244:
			func_151(iParam0);
			break;
		case -1651585854:
			func_152(iParam0);
			break;
		case -462231716:
			func_153(iParam0);
			break;
		case -1985279805:
			func_154(iParam0);
			break;
		case 1379175797:
			func_155(iParam0);
			break;
		case 218595333:
			func_156(iParam0);
			break;
		case 1327216456:
			func_157(iParam0);
			break;
		case 1387172233:
			func_158(iParam0);
			break;
		case 1553659161:
			func_159(iParam0);
			break;
		case 1784289253:
			func_160(iParam0);
			break;
		case 1655597605:
			func_161(iParam0);
			break;
		case 1208357138:
			break;
		case 1082572570:
			func_162(iParam0);
			break;
		case -687266558:
			func_163(iParam0);
			func_164(iParam0);
			break;
	}
}

void func_37(struct<4> Param0, var uParam4, var uParam5, var uParam6, struct<9> Param7, var uParam16, var uParam17, var uParam18, int iParam19)
{
	if (!Param0.f_3)
	{
		return;
	}
	if (!Param7.f_1)
	{
		return;
	}
	if (func_96())
	{
		return;
	}
	if (func_165(iParam19))
	{
		return;
	}
	func_166(iParam19, Param7.f_5, Param7.f_8);
}

void func_38(struct<4> Param0, var uParam4, var uParam5, var uParam6)
{
	if (func_76(4096))
	{
		return;
	}
	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = func_167(0);
	switch (iVar1)
	{
		case 1:
		case 2:
		case 6:
		case 8:
		case 11:
			bVar0 = true;
			break;
	}
	bVar2 = false;
	if (!func_140(42))
	{
		bVar2 = true;
	}
	bVar3 = false;
	if (bVar0 || bVar2)
	{
		bVar3 = true;
	}
	iVar4 = 367;
	if (get_ped_config_flag(Global_35, iVar4, true) != bVar3)
	{
		set_ped_config_flag(Global_35, iVar4, bVar3);
	}
	bVar5 = false;
	if (bVar0 && !bVar2)
	{
		bVar5 = true;
	}
	iVar4 = 487;
	if (get_ped_config_flag(Global_35, iVar4, true) != bVar5)
	{
		set_ped_config_flag(Global_35, iVar4, bVar5);
	}
}

void func_39(struct<5> Param0, var uParam5, var uParam6, struct<5> Param7, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18)
{
	if (!Param0.f_3)
	{
		return;
	}
	if (Param0.f_4)
	{
		return;
	}
	if (!Param7.f_1)
	{
		return;
	}
	if (!Param7.f_2)
	{
		return;
	}
	if (Param7.f_3)
	{
		return;
	}
	if (Param7.f_4)
	{
		return;
	}
	if (func_168(Param7, 2043986356))
	{
		if (func_169(Param7))
		{
			iVar0 = func_170();
			if (!func_171(iVar0))
			{
				task_stand_still(Param7, -1);
			}
		}
	}
}

void func_40(struct<4> Param0, var uParam4, var uParam5, var uParam6, struct<5> Param7, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	if (!Param0.f_3)
	{
		return;
	}
	if (!Param7.f_1)
	{
		return;
	}
	if (!Param7.f_2)
	{
		return;
	}
	if (Param7.f_3)
	{
		return;
	}
	if (Param7.f_4)
	{
		return;
	}
	if (iParam19 == -1)
	{
		return;
	}
	if (iParam19 >= 7)
	{
		return;
	}
	if (func_72(iParam19))
	{
		return;
	}
	bVar0 = func_172(iParam19);
	iVar1 = 48;
	if (bVar0)
	{
		if (!get_animal_tuning_bool_param(Param7, iVar1))
		{
			set_animal_tuning_bool_param(Param7, iVar1, true);
		}
	}
	else if (get_animal_tuning_bool_param(Param7, iVar1))
	{
		set_animal_tuning_bool_param(Param7, iVar1, false);
	}
}

void func_41(int iParam0)
{
	if (func_173(iParam0, 256))
	{
		return;
	}
	if (!func_71(iParam0))
	{
		return;
	}
	iVar0 = func_88(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0))
	{
		return;
	}
	if (!_is_mount_seat_free(iVar0, -1))
	{
		return;
	}
	if (func_174(iVar0, 713668775))
	{
		return;
	}
	if ((func_174(iVar0, -76381094) || func_174(iVar0, -1098463898)) || func_174(iVar0, 993674639))
	{
		return;
	}
	iVar1 = func_175(0);
	iVar2 = func_175(2);
	if (!_does_volume_exist(iVar1))
	{
		return;
	}
	if (!is_entity_in_volume(iVar0, iVar1, false, 0))
	{
		return;
	}
	if (!_does_volume_exist(iVar2))
	{
		return;
	}
	if (!is_entity_in_volume(iVar0, iVar2, false, 0))
	{
		return;
	}
	vVar3 = { get_entity_coords(iVar0, true, false) };
	iVar6 = func_176(vVar3, iVar2, iVar1);
	if (_does_scenario_point_exist(iVar6))
	{
		vVar7 = { _get_scenario_point_coords(iVar6, true) };
		set_ped_config_flag(iVar0, 355, true);
		task_follow_nav_mesh_to_coord(iVar0, vVar7, 1f, 20000, 0.25f, 0, 40000f);
	}
}

void func_42(struct<2> Param0, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, struct<11> Param7, var uParam18, int iParam19)
{
	if (!Param0.f_1)
	{
		return;
	}
	if (!Param7.f_10)
	{
		return;
	}
	if (func_177(iParam19) == -1)
	{
		return;
	}
	func_178(iParam19, -1);
}

void func_43(struct<12> Param0, struct<2> Param12, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	if (func_179())
	{
		return;
	}
	iParam19 = func_87(iParam19);
	if (iParam19 == -1)
	{
		return;
	}
	if (iParam19 >= 7)
	{
		return;
	}
	if (!Param12.f_1)
	{
		return;
	}
	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_11)
	{
		return;
	}
	if (func_177(iParam19) == 1)
	{
		return;
	}
	if (!is_player_riding_train(Param12) && !Global_1430231->f_4)
	{
		return;
	}
	if (func_174(Param0, 2043986356))
	{
		return;
	}
	func_180(Param0, Global_35);
}

void func_44(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_72(iParam0))
	{
		return;
	}
	iVar0 = func_181(iParam0);
	if (_does_thread_exist(iVar0))
	{
		if (is_thread_active(iVar0, false))
		{
			return;
		}
	}
	if (func_71(iParam0))
	{
		iVar1 = func_88(iParam0);
		func_182(iVar1, 1);
	}
	func_183(iParam0);
}

void func_45(struct<4> Param0, var uParam4, var uParam5, var uParam6, struct<5> Param7, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	if (!Param0.f_3)
	{
		return;
	}
	if (!Param7.f_1)
	{
		return;
	}
	if (!Param7.f_2)
	{
		return;
	}
	if (Param7.f_3)
	{
		return;
	}
	if (Param7.f_4)
	{
		return;
	}
	iParam19 = func_87(iParam19);
	if (iParam19 == -1)
	{
		return;
	}
	if (iParam19 >= 7)
	{
		return;
	}
	iVar0 = _get_rider_of_mount(Param7, false);
	if (!does_entity_exist(iVar0))
	{
		func_184(iParam19);
		return;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		func_184(iParam19);
		return;
	}
	if (func_76(512))
	{
		return;
	}
	if (iVar0 == Global_35)
	{
		return;
	}
	iVar1 = func_185(iParam19);
	if (!does_entity_exist(iVar1))
	{
		iVar2 = get_ped_relationship_group_hash(iVar0);
		if ((iVar2 != -1538724068 && iVar2 != 1391706777) && iVar2 != 1030835986)
		{
			func_186(iParam19, iVar0);
		}
	}
	iVar1 = func_185(iParam19);
	if (!does_entity_exist(iVar1))
	{
		return;
	}
	if (func_187(Param7, Global_35, 1, 1) > func_89(iParam19))
	{
		func_184(iParam19);
		func_188(iParam19, 2);
	}
}

void func_46(struct<4> Param0, var uParam4, var uParam5, var uParam6, struct<5> Param7, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	if (!Param0.f_3)
	{
		return;
	}
	if (!Param7.f_1)
	{
		return;
	}
	if (!Param7.f_2)
	{
		return;
	}
	if (Param7.f_3)
	{
		return;
	}
	if (Param7.f_4)
	{
		return;
	}
	if (iParam19 == -1)
	{
		return;
	}
	if (iParam19 >= 7)
	{
		return;
	}
	if (!func_189(iParam19))
	{
		return;
	}
	fVar0 = func_190(Param7);
	bVar1 = false;
	if (fVar0 > 0f)
	{
		bVar1 = true;
	}
	iVar2 = get_game_timer();
	if (!bVar1 || func_191(iParam19) + 30000 < iVar2)
	{
		func_192(iParam19, 0);
		func_193(iParam19, -1);
		if (func_194(16))
		{
			func_195(16);
		}
		if (func_196(16))
		{
			func_197(16);
		}
	}
}

void func_47(struct<5> Param0, var uParam5, var uParam6)
{
	if (!Param0.f_3)
	{
		return;
	}
	if (Param0.f_4)
	{
		return;
	}
	iVar0 = func_198(5);
	if (iVar0 == 0)
	{
		return;
	}
	func_21(5, &vVar1);
	if (iVar0 == 2)
	{
		if (vVar1.y && !vVar1.z)
		{
			func_184(5);
			func_199(5, 1);
		}
		if (vVar1.z)
		{
			if (func_187(vVar1.x, Global_35, 1, 1) > func_89(5) && !is_entity_on_screen(vVar1.x))
			{
				iVar13 = _get_rider_of_mount(vVar1.x, false);
				if (does_entity_exist(iVar13))
				{
					if (is_entity_dead(iVar13) || is_ped_injured(iVar13))
					{
					}
					if (!_0x88ad6cc10d8d35b2(iVar13))
					{
						set_entity_as_mission_entity(iVar13, true, true);
						delete_ped(&iVar13);
					}
				}
				func_73(5);
				func_200(5, 0);
			}
		}
		if (!vVar1.y && func_84(5) == 1)
		{
			func_200(5, 0);
		}
	}
	if (iVar0 == 0)
	{
		return;
	}
	if (!func_140(42))
	{
		return;
	}
	if (func_84(0) == 1 && func_201() == 0)
	{
		func_202(5, 0);
		func_203(5);
	}
}

void func_48(struct<5> Param0, var uParam5, var uParam6)
{
	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (Param0.f_4)
	{
		return;
	}
	if (func_140(42))
	{
		return;
	}
	bVar0 = false;
	if ((func_84(0) == 0 && func_84(5) == 1) && func_198(5) == 1)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		return;
	}
	iVar1 = func_167(0);
	bVar2 = false;
	if (iVar1 == 1 || iVar1 == 8)
	{
		bVar2 = true;
	}
	if (!bVar2)
	{
		if (func_94() && func_95(4))
		{
			if (!func_140(42))
			{
				func_204(42);
				func_204(30);
			}
		}
		if (!func_205(55))
		{
			func_206(1);
		}
	}
}

void func_49()
{
	iVar0 = func_207(0);
	iVar1 = func_207(1);
	if (Global_1900383->f_416 != 0)
	{
		if (Global_1900383->f_416 != iVar0)
		{
			if (!func_208(Global_1900383->f_416))
			{
				set_ped_model_is_suppressed(Global_1900383->f_416, false);
			}
			Global_1900383->f_416 = 0;
		}
	}
	if (Global_1900383->f_416.f_1 != 0)
	{
		if (Global_1900383->f_416.f_1 != iVar1)
		{
			if (!func_208(Global_1900383->f_416.f_1))
			{
				set_ped_model_is_suppressed(Global_1900383->f_416.f_1, false);
			}
			Global_1900383->f_416.f_1 = 0;
		}
	}
	if (iVar0 != 0)
	{
		if (!_0xaa9f048dcf69b6dc(iVar0))
		{
			set_ped_model_is_suppressed(iVar0, true);
			Global_1900383->f_416 = iVar0;
		}
	}
	if (iVar1 != 0)
	{
		if (!_0xaa9f048dcf69b6dc(iVar1))
		{
			set_ped_model_is_suppressed(iVar1, true);
			Global_1900383->f_416.f_1 = iVar1;
		}
	}
}

void func_50()
{
	func_209(Global_1900383->f_436);
	iVar0 = Global_1900383->f_436;
	iVar0++;
	if (iVar0 >= 5)
	{
		iVar0 = 0;
	}
	Global_1900383->f_436 = iVar0;
}

void func_51(struct<5> Param0, var uParam5, var uParam6)
{
	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (Param0.f_4)
	{
		return;
	}
	if (func_96())
	{
		return;
	}
	bVar0 = func_210();
	if (bVar0)
	{
		iVar1 = func_211();
		if (!_0x88ad6cc10d8d35b2(iVar1))
		{
			set_entity_as_mission_entity(iVar1, true, true);
		}
	}
	bVar2 = false;
	if (bVar0)
	{
		if (_get_carrier_as_ped(iVar1) == Global_35)
		{
			iVar3 = _0x61914209c36efddb(iVar1);
			switch (iVar3)
			{
				case 4:
				case 5:
				case 6:
				case 8:
				case 9:
					bVar2 = true;
					break;
			}
		}
	}
	bVar4 = func_140(42);
	bVar5 = func_212(0);
	bVar6 = false;
	if (bVar0)
	{
		if (bVar2)
		{
			if (func_213() != 1 && !bVar5)
			{
				func_214(1);
				bVar6 = true;
			}
		}
		else
		{
			if (func_213() == 1 && !bVar5)
			{
				func_214(2);
				bVar6 = true;
			}
			if (is_entity_static(iVar1))
			{
				set_entity_dynamic(iVar1, true);
			}
		}
		vVar7 = { get_entity_coords(iVar1, true, false) };
		func_215(vVar7);
	}
	else
	{
		if (func_213() == 0)
		{
			iVar10 = func_201();
			if (func_71(iVar10))
			{
				iVar11 = func_88(iVar10);
				vVar12 = { get_entity_coords(iVar11, false, false) };
				func_215(vVar12);
			}
			if (iVar10 == 5)
			{
				if (!func_71(5))
				{
					if (bVar4)
					{
						vVar15 = { func_216() };
						func_217(-1);
						func_214(2);
						bVar6 = true;
					}
				}
			}
		}
		bVar18 = false;
		if (func_213() == 2)
		{
			bVar18 = true;
		}
		if (func_213() == 1)
		{
			bVar18 = true;
		}
		if (bVar18)
		{
			vVar19 = { func_216() };
			if (func_137(vVar19))
			{
				func_214(3);
				func_217(-1);
				func_215(0f, 0f, 0f);
				func_218(-15);
			}
			else
			{
				func_219(vVar19, 0f, 1);
				func_214(2);
				func_217(-1);
				if (func_220() == -15)
				{
					func_218(func_221());
				}
			}
			bVar6 = true;
		}
	}
	if (bVar6)
	{
		func_67();
	}
}

void func_52()
{
	if (!func_71(6))
	{
		return;
	}
	func_21(6, &vVar0);
	if (!vVar0.z)
	{
		set_ped_as_no_longer_needed(&vVar0);
		func_203(6);
		return;
	}
	func_20(&Var12);
	bVar19 = false;
	if (!Var12.f_3)
	{
		bVar19 = true;
	}
	if (func_187(vVar0.x, Global_35, 1, 1) > 100f)
	{
		bVar19 = true;
	}
	if (bVar19)
	{
		func_202(6, 0);
		func_203(6);
	}
}

void func_53()
{
	if (!func_71(1))
	{
		func_222();
		return;
	}
	func_21(1, &Var0);
	if (!Var0.f_2)
	{
		func_222();
		return;
	}
	if (func_223(1))
	{
		func_222();
		return;
	}
	if (func_115(1) >= 1)
	{
		func_222();
		return;
	}
	if (!func_224(1))
	{
		func_222();
		return;
	}
	if (Var0.f_10)
	{
		func_222();
		return;
	}
	if (does_entity_exist(Var0.f_9))
	{
		func_222();
		return;
	}
	iVar12 = get_game_timer();
	if (!func_225())
	{
		iVar13 = func_226();
		if (iVar13 == 0)
		{
			func_227(iVar12);
		}
		else if (iVar13 + 5000 < iVar12)
		{
			func_228(1);
		}
	}
	if (!func_225())
	{
		return;
	}
	if (!func_168(Var0, 518218985))
	{
		task_smart_flee_ped(Var0, Global_35, 500f, -1, 0, 1f, 0);
		set_ped_keep_task(Var0, true);
	}
	if (func_229(Var0, -1))
	{
		return;
	}
	iVar14 = func_230();
	if (iVar14 == 0)
	{
		func_231(iVar12);
	}
	else if (iVar14 + 15000 < iVar12)
	{
		func_202(1, 1);
		func_222();
	}
}

void func_54()
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35) || is_ped_injured(Global_35))
	{
		return;
	}
	bVar1 = false;
	if (is_ped_on_mount(Global_35))
	{
		bVar1 = true;
		iVar0 = get_mount(Global_35);
	}
	iVar5 = 0;
	while (iVar5 < 7)
	{
		if (Global_40.f_1095.f_1[iVar5]->f_9 == 0)
		{
			if (Global_40.f_1095.f_1[iVar5]->f_431 > -1)
			{
				Global_40.f_1095.f_1[iVar5]->f_431 = -1;
			}
		}
		else
		{
			bVar3 = false;
			bVar4 = false;
			iVar2 = Global_1900383[iVar5];
			if (does_entity_exist(iVar2))
			{
				bVar3 = true;
				if (bVar1)
				{
					if (iVar0 == iVar2)
					{
						bVar4 = true;
					}
				}
			}
			if (bVar4)
			{
				if (Global_40.f_1095.f_1[iVar5]->f_431 > -1)
				{
					Global_40.f_1095.f_1[iVar5]->f_431 = -1;
				}
			}
			else
			{
				iVar6 = _get_seconds_since_base_year();
				if (bVar3)
				{
					iVar7 = _0xe8d1ccb9375c101b(iVar2, player_id());
					if (iVar7 == -1 || iVar7 == 0)
					{
						iVar7 = iVar6;
						_0xa691c10054275290(iVar2, player_id(), iVar7);
					}
					if (Global_40.f_1095.f_1[iVar5]->f_431 != iVar7)
					{
						Global_40.f_1095.f_1[iVar5]->f_431 = iVar7;
					}
				}
				else if (Global_40.f_1095.f_1[iVar5]->f_431 == -1)
				{
					Global_40.f_1095.f_1[iVar5]->f_431 = iVar6;
				}
			}
		}
		iVar5++;
	}
}

void func_55()
{
	iVar0 = player_id();
	iVar1 = 0;
	if (func_232())
	{
		iVar1 = 1;
	}
	if (func_71(0))
	{
		iVar2 = func_88(0);
		_0xa3db37edf9a74635(iVar0, iVar2, 31, 2, iVar1);
		_0xa3db37edf9a74635(iVar0, iVar2, 32, 2, iVar1);
		_0xa3db37edf9a74635(iVar0, iVar2, 33, 2, iVar1);
	}
	if (func_71(1))
	{
		iVar3 = func_88(1);
		_0xa3db37edf9a74635(iVar0, iVar3, 31, 2, iVar1);
		_0xa3db37edf9a74635(iVar0, iVar3, 32, 2, iVar1);
		_0xa3db37edf9a74635(iVar0, iVar3, 33, 2, iVar1);
	}
}

void func_56()
{
	if (func_140(33))
	{
		if (!func_233())
		{
			func_234(1);
		}
	}
	else if (func_233())
	{
		func_234(0);
	}
	if (func_140(34))
	{
		if (!func_235())
		{
			func_236(1);
		}
	}
	else if (func_235())
	{
		func_236(0);
	}
	if (func_140(35))
	{
		if (!func_237())
		{
			func_238(1);
		}
	}
	else if (func_237())
	{
		func_238(0);
	}
}

void func_57(struct<4> Param0, var uParam4, var uParam5, var uParam6, struct<5> Param7, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (!Param7.f_1)
	{
		return;
	}
	if (!Param7.f_2)
	{
		return;
	}
	if (!Param7.f_4)
	{
		return;
	}
	iParam19 = func_87(iParam19);
	if (iParam19 == -1)
	{
		return;
	}
	if (iParam19 >= 7)
	{
		return;
	}
	if (func_239(iParam19) >= 40)
	{
		return;
	}
	fVar0 = func_187(Param7, Global_35, 1, 1);
	if (fVar0 > 40f)
	{
		func_99(iParam19);
		return;
	}
	if (!is_entity_on_screen(Param7))
	{
		func_99(iParam19);
		return;
	}
	iVar1 = get_game_timer();
	if (!func_240(iParam19))
	{
		func_241(iParam19, iVar1);
		return;
	}
	if (func_242(iParam19) + 15000 < iVar1)
	{
		func_243(0, 446961221, 0, 0, 0, 0, 1065353216, 0);
		func_244(iParam19);
		func_241(iParam19, iVar1);
	}
}

void func_58(struct<4> Param0, var uParam4, var uParam5, var uParam6, struct<6> Param7, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (!Param7.f_1)
	{
		return;
	}
	if (!Param7.f_2)
	{
		return;
	}
	if (Param7.f_4)
	{
		return;
	}
	iParam19 = func_87(iParam19);
	if (iParam19 == -1)
	{
		return;
	}
	if (iParam19 >= 7)
	{
		return;
	}
	vVar0 = { func_245(iParam19) };
	if (func_137(vVar0))
	{
		return;
	}
	vVar3 = { func_246(iParam19) };
	fVar6 = func_247(iParam19);
	fVar7 = get_distance_between_coords(Param7.f_5, vVar3, true);
	if (fVar7 > 0.01f)
	{
		fVar6 = (fVar6 + fVar7);
		func_248(iParam19, Param7.f_5);
		func_249(iParam19, fVar6);
	}
}

void func_59(struct<7> Param0, struct<12> Param7, struct<12> Param19)
{
	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (Param0.f_4)
	{
		return;
	}
	func_250(Param0);
	func_251(Param0);
	func_252(Param0, Param7);
	func_253();
	func_254(Param0, Param7, Param19);
	func_255(Param0);
	func_256(Param0, Param7, Param19);
	func_257(Param0, Param7, Param19);
	func_258();
	func_259(Param0);
	func_260();
	func_261(Param0);
	func_262(Param0);
	func_263(Param0, Param7);
	func_264(Param0, Param7, Param19);
	func_265(Param0);
	func_266();
}

void func_60()
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35) || is_ped_injured(Global_35))
	{
		return;
	}
	if (func_267())
	{
		return;
	}
	iVar0 = func_268(0);
	if (func_269(iVar0))
	{
		if (func_270(iVar0) == 1)
		{
			return;
		}
	}
	iVar1 = func_271();
	if (_0x5a695bd328586b44(Global_35, 0) != iVar1)
	{
		_0xb832f1a686b9b810(Global_35, iVar1, 0);
	}
}

void func_61(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (func_96())
	{
		return;
	}
	if (!func_71(iParam0))
	{
		return;
	}
	iVar0 = func_88(iParam0);
	if (is_entity_dead(iVar0))
	{
		return;
	}
	if (is_ped_injured(iVar0))
	{
		return;
	}
	if (func_165(iParam0))
	{
		return;
	}
	Var1.f_10 = 10;
	Var95.f_10 = 10;
	func_272(&Var1);
	iVar198 = 0;
	while (iVar198 < 3)
	{
		iVar189 = func_273(iVar198);
		iVar196 = iVar198;
		func_272(&Var1);
		bVar199 = false;
		if (!_0x608bc6a6aacd5036(&Var190, iVar0, iVar189, 0))
		{
			bVar199 = true;
		}
		if (!bVar199)
		{
			iVar194 = Var190.f_3;
			if (!does_entity_exist(iVar194))
			{
				bVar199 = true;
			}
		}
		if (!bVar199)
		{
			if (is_entity_a_mission_entity(iVar194) && !_0x88ad6cc10d8d35b2(iVar194))
			{
				bVar199 = true;
			}
		}
		if (!bVar199)
		{
			if (is_entity_a_ped(iVar194))
			{
				iVar195 = get_ped_index_from_entity_index(iVar194);
				if (is_ped_human(iVar195))
				{
					bVar199 = true;
				}
			}
		}
		if (bVar199)
		{
			func_274(&Var95, Global_40.f_1095.f_1[iParam0]->f_15[iVar196]);
		}
		else
		{
			Var1 = get_entity_model(iVar194);
			Var1.f_1 = _0x31fef6a20f00b963(iVar194);
			Var1.f_2 = _0xd21c7418c590bb40(iVar194);
			Var1.f_3 = _get_entity_carry_config(iVar194);
			Var1.f_93 = _0xb16c780c51e51e2b(iVar194);
			if (is_model_a_ped(Var1))
			{
				func_275(iParam0, iVar194);
				iVar195 = get_ped_index_from_entity_index(iVar194);
				func_276(iVar195, &(Var1.f_5), &(Var1.f_6), &(Var1.f_7), &(Var1.f_4));
				bVar200 = func_277(&(Var1.f_1), iVar195, Var1.f_7, Var1.f_5);
				if (!bVar200)
				{
				}
				uVar201 = _0x30569f348d126a5a(iVar195);
				Var1.f_8 = uVar201;
				Var1.f_9 = _get_num_components_in_ped(iVar195);
				if (Var1.f_9 > 10)
				{
					Var1.f_9 = 10;
				}
				iVar197 = 0;
				while (iVar197 < Var1.f_9)
				{
					if (iVar197 >= 10)
					{
					}
					else
					{
						if (!_0xa9c28516a6dc9d56(iVar195, iVar197, Var1.f_10[iVar197], &(Var1.f_10[iVar197]->f_1), &(Var1.f_10[iVar197]->f_2), &(Var1.f_10[iVar197]->f_3)))
						{
						}
						if (!_0xe7998fec53a33bbe(iVar195, iVar197, &(Var1.f_10[iVar197]->f_4), &(Var1.f_10[iVar197]->f_5), &(Var1.f_10[iVar197]->f_6), &(Var1.f_10[iVar197]->f_7)))
						{
						}
					}
					iVar197++;
				}
				Var1.f_91 = _0x2e545965df98d476(iVar194);
				Var1.f_92 = 0;
				if (_is_metaped_using_component(iVar195, 43391475) || _0x8de41e9902e85756(iVar194))
				{
					Var1.f_92 = 1;
				}
				if (_0x5170dda6d63acaaa(iVar195))
				{
					iVar202 = 1;
					func_278(Var1.f_1, iVar202);
					bVar203 = true;
					if (!func_279(Global_35, iVar0, 0))
					{
						bVar203 = false;
					}
					if (_0x3ab6c7b0bb0df4b1(Global_35, -1) || _0x3ab6c7b0bb0df4b1(iVar0, -1))
					{
						bVar203 = false;
					}
					if (bVar203)
					{
						_0x36d188aecb26094b(iVar194);
					}
					else
					{
						_0x36d188aecb26094b(iVar194);
					}
					if (func_280())
					{
						if (func_282(func_281(iVar195), 72))
						{
							func_283(98, 1);
						}
					}
					func_274(&Var95, Global_40.f_1095.f_1[iParam0]->f_15[iVar196]);
				}
				else
				{
					if (Var1.f_91 >= 12)
					{
						if (func_280())
						{
							if (func_282(func_281(iVar195), 72))
							{
								func_283(97, 0);
							}
						}
					}
					else if (Var1.f_91 >= 2)
					{
						if (func_280())
						{
							if (func_282(func_281(iVar195), 72))
							{
								func_283(96, 0);
							}
						}
					}
					iVar204 = Global_40.f_1095.f_1[iParam0]->f_15[iVar196]->f_1;
					if (func_284(Var1.f_1, 0) && func_284(iVar204, 0))
					{
						if (Var1.f_1 != iVar204)
						{
							if (func_285(iVar0, iVar204, 1, 1, -142743235))
							{
								func_286(iVar0, iVar195);
							}
						}
					}
					func_274(&Var1, Global_40.f_1095.f_1[iParam0]->f_15[iVar196]);
				}
				iVar198++;
			}
		}
	}
}

void func_62(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_71(iParam0))
	{
		return;
	}
	iVar0 = func_88(iParam0);
	if (is_entity_dead(iVar0))
	{
	}
	if (is_ped_injured(iVar0))
	{
	}
	if (is_ped_in_writhe(iVar0))
	{
	}
	_0x6f43c351a5d51e2f(iVar0, &(Global_40.f_1095.f_1[iParam0]->f_356));
}

void func_63()
{
	iVar6 = 0;
	while (iVar6 < 7)
	{
		if (!func_71(iVar6))
		{
		}
		else
		{
			iVar7 = func_88(iVar6);
			if (func_287(iVar6))
			{
				if (!func_288(iVar7))
				{
					iVar8 = func_289(iVar6);
					func_290(iVar7, iVar8);
				}
				else
				{
					iVar9 = func_291(iVar6);
					func_292(iVar9, &uVar0, &uVar1, &uVar2, &iVar3, &uVar4, &uVar5);
					if (iVar3 >= 1)
					{
						func_293(iVar7);
						func_294(iVar6);
					}
					else if (!func_288(iVar7))
					{
					}
					else if (!func_287(iVar6))
					{
						iVar10 = func_295(iVar7);
						func_296(iVar6, 1);
						func_297(iVar6, iVar10);
						func_298(iVar6, func_221());
					}
				}
				iVar6++;
			}
		}
	}
}

void func_64(int iParam0)
{
	bVar0 = func_299(iParam0);
	bVar1 = func_300(iParam0);
	if (bVar0)
	{
		if (func_301(iParam0))
		{
			if (bVar1)
			{
				return;
			}
			iVar3 = func_302(iParam0);
			iVar4 = func_221();
			iVar2 = func_303(iVar3, iVar4);
			if (iVar2 < 2)
			{
				return;
			}
			func_304(iParam0, 1);
		}
		else
		{
			iVar4 = func_221();
			func_305(iParam0, iVar4);
			func_304(iParam0, 0);
			func_306(iParam0);
		}
	}
	else
	{
		if (!func_301(iParam0))
		{
			return;
		}
		func_305(iParam0, -15);
		func_307(iParam0);
	}
	if (!func_308(iParam0))
	{
		return;
	}
	if (!func_309(iParam0, 3.5f))
	{
		return;
	}
	func_304(iParam0, 0);
	func_306(iParam0);
}

void func_65()
{
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (!func_71(iVar0))
		{
		}
		else
		{
			iVar1 = func_207(iVar0);
			if (!func_310(iVar1))
			{
			}
			else
			{
				Var2 = { func_311(iVar0) };
				if (!is_string_null_or_empty(&Var2))
				{
				}
				else
				{
					StringCopy(&cVar10, func_312(iVar1), 64);
					StringCopy(&Var2, _get_label_text_2(&cVar10), 64);
					if (is_string_null_or_empty(&Var2))
					{
					}
					else
					{
						func_313(iVar0, Var2);
						func_314(iVar0);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_66(int iParam0)
{
	if (is_player_dead(player_id()))
	{
		return;
	}
	iVar0 = func_88(iParam0);
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
	if (func_173(iParam0, 64))
	{
		func_315(iParam0);
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
	bVar3 = func_140(42);
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
				func_316(&((*Global_1900383)[iParam0]->f_27));
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
		func_315(iParam0);
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
		if (func_115(1) < 1)
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
		func_317(&((*Global_1900383)[iParam0]->f_26), bVar6);
	}
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_173(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = is_ped_in_writhe(iVar0);
	bVar10 = false;
	iVar11 = func_185(iParam0);
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
	fVar15 = func_90(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_89(iParam0))
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
		func_318((*Global_1900383)[iParam0]->f_26);
		func_319((*Global_1900383)[iParam0]->f_26);
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
	if (func_320(iVar0) && !bVar9)
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
	iVar21 = func_115(iParam0);
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

void func_67()
{
	iVar0 = Global_1900383->f_393;
	if (!does_entity_exist(iVar0))
	{
		if (does_blip_exist(Global_1900383->f_393.f_1))
		{
			remove_blip(&(Global_1900383->f_393.f_1));
		}
		return;
	}
	if (Global_1935630->f_12)
	{
		return;
	}
	if (is_ped_injured(Global_35))
	{
		return;
	}
	bVar1 = func_321(Global_35, iVar0);
	if (bVar1)
	{
		if (does_blip_exist(Global_1900383->f_393.f_1))
		{
			remove_blip(&(Global_1900383->f_393.f_1));
		}
	}
	else if (func_213() == 3)
	{
		if (does_blip_exist(Global_1900383->f_393.f_1))
		{
			remove_blip(&(Global_1900383->f_393.f_1));
		}
	}
	else if (!does_blip_exist(Global_1900383->f_393.f_1))
	{
		Global_1900383->f_393.f_1 = _blip_add_for_entity(-515518185, iVar0);
		func_316(&(Global_1900383->f_393.f_1));
	}
}

void func_68()
{
	func_322(Global_1900383->f_432, Global_1900383->f_433);
	bVar0 = false;
	iVar1 = Global_1900383->f_433;
	iVar1++;
	if (iVar1 >= 2)
	{
		iVar1 = 0;
		bVar0 = true;
	}
	Global_1900383->f_433 = iVar1;
	if (bVar0)
	{
		iVar2 = Global_1900383->f_432;
		iVar2++;
		if (iVar2 > 5)
		{
			iVar2 = 0;
		}
		Global_1900383->f_432 = iVar2;
	}
}

void func_69()
{
	func_323(Global_1900383->f_434, Global_1900383->f_435);
	bVar0 = false;
	iVar1 = Global_1900383->f_435;
	iVar1++;
	if (iVar1 >= 3)
	{
		iVar1 = 0;
		bVar0 = true;
	}
	Global_1900383->f_435 = iVar1;
	if (bVar0)
	{
		iVar2 = Global_1900383->f_434;
		iVar2++;
		if (iVar2 > 5)
		{
			iVar2 = 0;
		}
		Global_1900383->f_434 = iVar2;
	}
}

void func_70()
{
	if (is_ped_injured(Global_35))
	{
		return;
	}
	if (Global_16)
	{
		return;
	}
	if (func_34())
	{
		return;
	}
	switch (Global_1900383->f_317.f_1)
	{
		case 0:
			func_324(0);
			break;
		case 1:
			func_324(1);
			break;
		case 2:
			func_324(6);
			break;
	}
	iVar0 = Global_1900383->f_317.f_1;
	iVar0++;
	if (iVar0 >= 3)
	{
		iVar0 = 0;
	}
	Global_1900383->f_317.f_1 = iVar0;
}

bool func_71(int iParam0)
{
	iParam0 = func_87(iParam0);
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

bool func_72(int iParam0)
{
	iParam0 = func_87(iParam0);
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

void func_73(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_71(iParam0))
	{
		return;
	}
	iVar0 = func_88(iParam0);
	func_325(iParam0);
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	iVar1 = get_entity_model(iVar0);
	if (_0xaa9f048dcf69b6dc(iVar1))
	{
		if (!func_208(iVar1))
		{
			set_ped_model_is_suppressed(iVar1, false);
		}
	}
	delete_ped(&iVar0);
	func_326(iParam0, 0);
	func_183(iParam0);
}

void func_74()
{
	if (_0x603ac35fd4602c76(Global_1913814->f_202))
	{
		_datafile_unload(Global_1913814->f_202);
	}
	func_327(128);
	func_328(6);
}

int func_75()
{
	iVar0 = -1427204870;
	return iVar0;
}

bool func_76(int iParam0)
{
	return (Global_1900383->f_316 && iParam0) != 0;
}

bool func_77(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 108)
	{
		return false;
	}
	return &(Global_1913814->f_209[iParam0]);
}

bool func_78(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	iVar0 = 0;
	if (iParam2 < 1)
	{
		iParam2 = 10;
	}
	bVar1 = false;
	*uParam1 = _0xd97d8d905f1562f2(iParam0);
	while ((!_0x603ac35fd4602c76(*uParam1) && iVar0 < iParam2) && !bVar1)
	{
		iVar0++;
		wait(0);
	}
	if (bVar1)
	{
		func_329();
	}
	if (iVar0 >= iParam2)
	{
		iVar0 = 0;
		return false;
	}
	iVar0 = 0;
	return true;
}

void func_79(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 || iParam0);
}

void func_80(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 108)
	{
		return;
	}
	Global_1913814->f_209[iParam0] = 1;
}

struct<4> func_81()
{
	Var0 = { func_330(0) };
	return func_331(856287005, Var0, -218846335, 0);
}

bool func_82(int iParam0, struct<4> Param1, bool bParam5)
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
			if (func_284(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (func_332(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					func_333(&Var7);
					if (func_334(Var3, &Var7, &Var12, 1, 752097756, 1))
					{
						if (bParam5)
						{
							func_335(Var7, 1);
						}
					}
				}
			}
		}
		iVar0++;
	}
	return true;
}

bool func_83()
{
	return _unlock_is_unlocked(-121456797);
}

int func_84(int iParam0)
{
	iParam0 = func_87(iParam0);
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

int func_85(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	iVar0 = 0;
	iVar2 = 0;
	while (iVar2 < 3)
	{
		if (iVar2 == -1)
		{
		}
		else if (iVar2 == 3)
		{
		}
		else
		{
			iVar1 = &Global_40.f_1095.f_1[iParam0]->f_15[iVar2];
			if (iVar1 == 0)
			{
			}
			else if (!is_model_valid(iVar1))
			{
			}
			else if (!is_model_a_ped(iVar1))
			{
			}
			else
			{
				iVar0++;
			}
		}
		iVar2++;
	}
	return iVar0;
}

void func_86(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_173(iParam0, 1))
	{
		return;
	}
	if (func_336(iParam0))
	{
		return;
	}
	iVar0 = get_player_index();
	if (is_player_dead(iVar0))
	{
	}
	iVar1 = func_88(iParam0);
	if (does_entity_exist(iVar1))
	{
		bVar2 = true;
	}
	else
	{
		bVar2 = false;
	}
	if (bVar2)
	{
		if (is_entity_dead(iVar1) || is_ped_injured(iVar1))
		{
			return;
		}
	}
	vVar3 = { func_337(iParam0) };
	fVar6 = func_338(iParam0);
	if (func_137(vVar3))
	{
		return;
	}
	iVar7 = func_207(iParam0);
	request_collision_for_model(iVar7);
	request_collision_at_coord(vVar3);
	iVar8 = get_game_timer();
	if (!bVar2)
	{
		func_339(iParam0);
		if (!func_340())
		{
			return;
		}
		if (!func_341(iParam0))
		{
			return;
		}
		iVar1 = func_342(iVar7, vVar3, fVar6, 0, 0);
		if (!does_entity_exist(iVar1))
		{
			return;
		}
		func_326(iParam0, iVar1);
		func_343(iVar1);
		func_344(iVar1, iParam0);
		func_314(iParam0);
		_set_ped_outfit_preset(iVar1, 0, 0);
		uVar9 = 57;
		func_345(iParam0, &uVar9);
		func_346(iParam0, &uVar9);
		func_347(iParam0);
		func_348(iParam0);
		if (iParam0 == 0)
		{
			_0x8fbf9edb378ccb8c(iVar0, iVar1);
		}
		else if (iParam0 == 1)
		{
			uVar67 = _0x227b06324234fb09(iVar0, iVar1);
		}
		if (func_97(iParam0))
		{
			fVar68 = func_349(iParam0);
			_0x4db9d03ac4e1fa84(iVar1, fVar68, fVar68, 0);
			task_animal_writhe(iVar1, 0, 1);
		}
		func_200(iParam0, 1);
		set_model_as_no_longer_needed(iVar7);
		func_350(iParam0, iVar8);
	}
	bVar69 = false;
	if (!_0xa0bc8faed8cfeb3c(iVar1))
	{
		bVar69 = true;
	}
	if (is_entity_waiting_for_world_collision(iVar1))
	{
		iVar70 = func_351(iParam0) + 5000;
		if (iVar70 < iVar8)
		{
		}
		else
		{
			bVar69 = true;
		}
	}
	if (bVar69)
	{
		return;
	}
	bVar71 = false;
	iVar72 = func_201();
	if (iParam0 == iVar72)
	{
		_set_ped_as_saddle_horse_for_player(iVar0, iVar1);
		bVar71 = true;
	}
	if (bVar71)
	{
		set_ped_config_flag(iVar1, 186, false);
	}
	else
	{
		set_ped_config_flag(iVar1, 186, true);
	}
	iVar73 = func_352(iParam0);
	func_353(iVar1, iVar73);
	Var74 = { func_354(iParam0) };
	if (bVar71)
	{
		Var76 = { func_355() };
	}
	else
	{
		func_356(&Var76);
	}
	iVar82 = func_357(iVar1, 2);
	iVar83 = func_358(iVar82);
	func_359(iParam0, iVar83);
	if (!bVar71 && func_360(iParam0))
	{
		func_361(iVar1, 0);
	}
	func_362(iVar1, &Var74, &Var76, iVar83);
	func_363(iParam0);
	func_315(iParam0);
	func_66(iParam0);
	func_364(iParam0);
	func_365(iParam0);
	func_366(iParam0);
}

int func_87(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_88(int iParam0)
{
	iParam0 = func_87(iParam0);
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

float func_89(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_207(iParam0);
	if (!is_model_valid(iVar0))
	{
		return -1f;
	}
	iVar1 = func_115(iParam0);
	iVar2 = get_default_max_attribute_rank(iVar0, 7);
	fVar3 = _0xeb67d4e056c85a81(iVar1);
	fVar4 = _0x78d8c1d4eb80c588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_115(iParam0) + 1;
	fVar6 = func_367(iParam0);
	fVar7 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar1));
	fVar8 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_368(fVar3, fVar4, fVar11);
	return fVar12;
}

float func_90(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

bool func_91()
{
	if (!func_3(256))
	{
		return false;
	}
	if (&Global_1879534)
	{
		return false;
	}
	if (func_369())
	{
		return false;
	}
	if (func_94() && !func_140(32))
	{
		return false;
	}
	if (func_76(2) || func_76(4))
	{
		return false;
	}
	if (is_screen_faded_out() || is_screen_fading_out())
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	if (is_scripted_speech_playing(Global_35))
	{
		return false;
	}
	if (_is_ped_hogtied(Global_35))
	{
		return false;
	}
	if (is_ped_swimming(Global_35))
	{
		return false;
	}
	return true;
}

void func_92(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, vector3 vParam7, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, vector3 vParam19, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	bVar0 = false;
	if (vParam7.z)
	{
		if (func_115(0) >= 1)
		{
			bVar0 = true;
		}
	}
	bVar1 = false;
	if (vParam19.z)
	{
		if (func_115(1) >= 1)
		{
			bVar1 = true;
		}
	}
	iVar2 = get_game_timer();
	switch (func_370())
	{
		case 0:
			func_15(1);
		case 1:
			func_371(0);
			func_372(-72209530);
			func_373(0, 0);
			func_373(1, 0);
			func_327(1);
			func_15(2);
		case 2:
			if (!func_76(1))
			{
				return;
			}
			func_15(3);
		case 3:
			func_374(iVar2);
			func_327(1);
			func_15(4);
		case 4:
			bVar3 = false;
			bVar4 = true;
			bVar5 = true;
			if (func_134() == 8)
			{
				if (!bVar3)
				{
					if (!func_375())
					{
						func_283(12, 1);
					}
					bVar3 = true;
				}
				bVar4 = false;
				bVar5 = false;
			}
			if (func_95(37) && !func_95(43))
			{
				if (!bVar3)
				{
					if (!func_375())
					{
						func_283(10, 1);
					}
					bVar3 = true;
				}
				bVar4 = false;
				bVar5 = false;
			}
			if (func_95(43) && !func_95(44))
			{
				if (func_84(0) == 1)
				{
					if (!bVar3)
					{
						if (!func_375())
						{
							func_283(10, 1);
						}
						bVar3 = true;
					}
					bVar4 = false;
				}
				if (vParam19.z)
				{
					if (bVar1)
					{
					}
				}
			}
			if (func_376(5))
			{
				if (func_84(0) == 0 && (func_84(1) == 0 || !bVar1))
				{
					if (!bVar3)
					{
						if (!func_375())
						{
							func_377();
						}
						bVar3 = true;
					}
					bVar4 = false;
					bVar5 = false;
				}
			}
			if ((func_84(0) == 0 && (func_84(1) == 0 || !bVar1)) && func_84(5) == 0)
			{
				if (!bVar3)
				{
					if (!func_375())
					{
						func_283(11, 1);
					}
					bVar3 = true;
				}
				bVar4 = false;
				bVar5 = false;
			}
			if (func_84(0) == 1 || (func_84(1) == 1 && bVar1))
			{
				iVar6 = get_interior_from_entity(Global_35);
				if (is_valid_interior(iVar6))
				{
					if (!bVar3)
					{
						if (func_378(iVar6))
						{
							if (!func_375())
							{
								func_283(14, 1);
							}
						}
						else if (func_379(iVar6))
						{
							if (!func_375())
							{
								func_283(15, 1);
							}
						}
						else if (!func_375())
						{
							func_283(13, 1);
						}
						if (func_71(0))
						{
							fVar7 = func_89(0);
							iVar8 = func_88(0);
							if (!func_380(0) && !func_223(0))
							{
								if (func_187(Global_35, iVar8, 1, 1) <= fVar7)
								{
									task_turn_ped_to_face_entity(iVar8, Global_35, 0, -1082130432, -1082130432, -1082130432);
								}
							}
						}
						if (func_71(1))
						{
							fVar7 = func_89(1);
							iVar8 = func_88(1);
							if (!func_380(1) && !func_223(1))
							{
								if (func_187(Global_35, iVar8, 1, 1) <= fVar7)
								{
									task_turn_ped_to_face_entity(iVar8, Global_35, 0, -1082130432, -1082130432, -1082130432);
								}
							}
						}
						bVar3 = true;
					}
					bVar4 = false;
					bVar5 = false;
				}
			}
			if (func_76(16) || !func_140(32))
			{
				if (!bVar3)
				{
					if (!func_375())
					{
						if (!is_string_null_or_empty(&(Global_1900383->f_378.f_12)))
						{
							func_381(&(Global_1900383->f_378.f_12), 10000, 0, 0, 0, 1);
						}
					}
					bVar3 = true;
				}
				bVar4 = false;
				bVar5 = false;
			}
			if (vParam7.z)
			{
				if (!bVar0)
				{
					if (!bVar3)
					{
						if (!func_375())
						{
							func_283(7, 1);
						}
						bVar3 = true;
					}
					bVar4 = false;
				}
			}
			if (vParam19.z)
			{
				if (!bVar1)
				{
					if (!vParam7.z)
					{
						if (!bVar3)
						{
							if (!func_375())
							{
								func_283(7, 1);
							}
							bVar3 = true;
						}
					}
					bVar5 = false;
				}
			}
			if (vParam7.z)
			{
				if (func_189(0))
				{
					if (!bVar3)
					{
						if (!func_375())
						{
							func_283(16, 1);
						}
						bVar3 = true;
					}
				}
			}
			if (vParam19.z && bVar1)
			{
				if (func_189(1))
				{
					if (!vParam7.z)
					{
						if (!bVar3)
						{
							if (!func_375())
							{
								func_283(16, 1);
							}
							bVar3 = true;
						}
					}
				}
			}
			_0x9044835be9d9dbfe(uParam0, (bVar4 || bVar5));
			if (!bVar4)
			{
				if (vParam7.z)
				{
					func_66(0);
					func_382(0);
				}
			}
			if (!bVar5)
			{
				if (vParam19.z)
				{
					func_66(1);
					func_382(1);
				}
			}
			if (!bVar4 && !bVar5)
			{
				func_15(1);
				return;
			}
			func_15(5);
		case 5:
			if (func_95(43) && !func_95(44))
			{
				func_373(0, 6);
			}
			else
			{
				func_383(0);
			}
			func_383(1);
			if (func_384(0) == 6 && func_384(1) == 6)
			{
				func_15(1);
			}
			break;
	}
}

int func_93()
{
	if (func_76(2) || func_76(4))
	{
		func_327(2);
		func_327(4);
		return 1;
	}
	return 0;
}

bool func_94()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_95(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_135((*Global_1835011)[iParam0]->f_1, 1);
	}
	return (_unlock_is_unlocked((*Global_1835011)[iParam0]->f_2) && !_unlock_is_visible((*Global_1835011)[iParam0]->f_2));
}

bool func_96()
{
	return func_385(&Global_1935630, 4096);
}

bool func_97(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return Global_40.f_1095.f_1[iParam0]->f_420;
}

void func_98(int iParam0, var uParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0]->f_420 = uParam1;
}

void func_99(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0]->f_42 = 0;
}

int func_100(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return (*Global_1900383)[iParam0]->f_41;
}

void func_101(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0]->f_41 = iParam1;
}

void func_102(int iParam0, float fParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0]->f_420.f_1 = fParam1;
}

bool func_103()
{
	return Global_1392040->f_6;
}

void func_104(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = player_id();
	if (is_player_dead(iVar0))
	{
	}
	func_315(iParam0);
	if (func_194(56))
	{
		func_195(56);
	}
	if (func_196(56))
	{
		func_197(56);
	}
	if (func_194(57))
	{
		func_195(57);
	}
	if (func_196(57))
	{
		func_197(57);
	}
	bVar1 = false;
	if (iParam0 == 0)
	{
		bVar1 = true;
	}
	else if ((iParam0 == 1 && func_84(0) == 0) && func_84(5) == 0)
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		func_188(iParam0, 1);
	}
	else
	{
		func_202(iParam0, 0);
	}
}

void func_105(int iParam0)
{
	if (!func_336(iParam0))
	{
		return;
	}
	bVar0 = false;
	if (func_71(iParam0))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		iVar1 = func_88(iParam0);
		if (!_0x88ad6cc10d8d35b2(iVar1))
		{
			set_entity_as_mission_entity(iVar1, true, true);
		}
		iVar2 = get_entity_model(iVar1);
		if (_0xaa9f048dcf69b6dc(iVar2))
		{
			if (!func_208(iVar2))
			{
				set_ped_model_is_suppressed(iVar2, false);
			}
		}
		if (func_173(iParam0, 4))
		{
			func_73(iParam0);
		}
		else if (func_173(iParam0, 8))
		{
			func_315(iParam0);
			func_386(iParam0);
			set_ped_keep_task(iVar1, true);
			task_smart_flee_ped(iVar1, Global_35, 500f, -1, 0, 1f, 0);
			set_ped_as_no_longer_needed(&iVar1);
		}
		else if (func_173(iParam0, 2))
		{
			func_315(iParam0);
			func_386(iParam0);
			set_ped_as_no_longer_needed(&iVar1);
		}
	}
	if (func_173(iParam0, 16))
	{
		func_203(iParam0);
	}
	func_326(iParam0, 0);
	func_183(iParam0);
	func_366(iParam0);
	func_387(iParam0, 2);
	func_387(iParam0, 4);
	func_387(iParam0, 8);
	func_387(iParam0, 16);
}

void func_106()
{
	Global_1900383->f_404 = 0;
	Global_1900383->f_404.f_1 = { 0f, 0f, 0f };
	Global_1900383->f_404.f_4 = 0f;
	Global_1900383->f_404.f_5 = 0;
	Global_1900383->f_404.f_6 = 0;
}

bool func_107(int iParam0)
{
	if (func_76(1024))
	{
		return false;
	}
	if (!func_140(43))
	{
		return false;
	}
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	if (is_ped_in_writhe(iParam0))
	{
		return false;
	}
	if (func_388(iParam0))
	{
		return false;
	}
	if (func_389(iParam0))
	{
		return false;
	}
	if (func_390(iParam0))
	{
		return false;
	}
	if (func_391(iParam0))
	{
		return false;
	}
	iVar0 = get_entity_model(iParam0);
	if (func_392(iVar0))
	{
		return false;
	}
	if (func_393(iVar0))
	{
		return false;
	}
	bVar1 = false;
	if (is_ped_on_mount(Global_35))
	{
		if (get_mount(Global_35) == iParam0)
		{
			bVar1 = true;
		}
		else
		{
			return false;
		}
	}
	if (bVar1)
	{
		if (iParam0 != func_394())
		{
			vVar2 = { get_entity_coords(iParam0, true, false) };
			func_106();
			func_395(iParam0);
			func_110(vVar2);
		}
		iVar5 = get_game_timer();
		iVar6 = func_396();
		if (iVar6 == 0)
		{
			func_397(iVar5);
			return false;
		}
		if (iVar6 + 2000 > iVar5)
		{
			return false;
		}
	}
	else
	{
		func_397(0);
	}
	if (func_398(iParam0, &uVar7, 100f))
	{
		return false;
	}
	iVar8 = player_id();
	if (func_399(iVar8, 1, 0, 1))
	{
		return false;
	}
	if (_0x0bb6de7d23c60626(iVar8))
	{
	}
	if (_0x69e181772886f48b(iVar8))
	{
		return false;
	}
	if (_0xf0fbfb9ab15f7734(iVar8, 1, 0))
	{
		return false;
	}
	if (!func_400(iParam0))
	{
		return false;
	}
	return true;
}

bool func_108()
{
	return Global_1900383->f_404.f_5;
}

Vector3 func_109()
{
	return Global_1900383->f_404.f_1;
}

void func_110(vector3 vParam0)
{
	Global_1900383->f_404.f_1 = { vParam0 };
}

float func_111()
{
	return Global_1900383->f_404.f_4;
}

void func_112(float fParam0)
{
	Global_1900383->f_404.f_4 = fParam0;
}

void func_113(int iParam0)
{
	Global_1900383->f_404.f_5 = iParam0;
}

int func_114(int iParam0)
{
	if (func_76(1024))
	{
		return 0;
	}
	if (!func_140(43))
	{
		return 0;
	}
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	if (is_ped_injured(iParam0))
	{
		return 0;
	}
	if (is_ped_in_writhe(iParam0))
	{
		return 0;
	}
	if (func_388(iParam0))
	{
		if (func_401(iParam0) != 6)
		{
			return 0;
		}
	}
	if (func_402(iParam0) > 0)
	{
		bVar0 = false;
		if (func_388(iParam0))
		{
			if (func_401(iParam0) == 6)
			{
				bVar0 = true;
			}
		}
		if (bVar0)
		{
			func_116(6, 1);
		}
		else
		{
			func_403(iParam0);
		}
		func_106();
		func_404();
		return 1;
	}
	else
	{
		if (!func_107(iParam0))
		{
			return 0;
		}
		func_405(iParam0, 0);
		func_106();
		func_404();
		return 1;
	}
	return 0;
}

int func_115(int iParam0)
{
	iParam0 = func_87(iParam0);
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

void func_116(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (is_player_dead(iVar0))
	{
	}
	func_315(iParam0);
	func_315(iParam0);
	func_406(iParam0, iParam1);
	func_407(iParam0, iParam1);
	func_408(iParam0, iParam1);
	iVar1 = func_88(iParam0);
	if (does_entity_exist(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_343(iVar1);
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
	iVar3 = func_88(iParam1);
	if (does_entity_exist(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_343(iVar3);
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
	func_404();
}

bool func_117(struct<5> Param0, var uParam5, var uParam6, int iParam7, bool bParam8)
{
	if (!Param0.f_2)
	{
		return false;
	}
	if (!Param0.f_3)
	{
		return false;
	}
	if (Param0.f_4)
	{
		return false;
	}
	if (bParam8)
	{
		if (!is_ped_on_mount(Global_35))
		{
			return false;
		}
		*iParam7 = get_mount(Global_35);
	}
	if (!does_entity_exist(*iParam7))
	{
		return false;
	}
	if (is_entity_dead(*iParam7))
	{
		return false;
	}
	if (is_ped_injured(*iParam7))
	{
		return false;
	}
	if (is_ped_in_writhe(*iParam7))
	{
		return false;
	}
	if (func_388(*iParam7))
	{
		return false;
	}
	if (func_389(*iParam7))
	{
		return false;
	}
	if (func_409(*iParam7))
	{
		return false;
	}
	if (func_410(*iParam7))
	{
		return false;
	}
	if (func_391(*iParam7))
	{
		return false;
	}
	if (func_390(*iParam7))
	{
		return false;
	}
	if (func_411(*iParam7))
	{
		return false;
	}
	bVar0 = func_412();
	bVar1 = false;
	iVar2 = _0xf103823ffe72bb49(*iParam7);
	if (does_entity_exist(iVar2))
	{
		if (!is_entity_dead(iVar2))
		{
			bVar1 = true;
		}
	}
	if (bVar0 || bVar1)
	{
	}
	else
	{
		return false;
	}
	return true;
}

void func_118()
{
	Global_1900383->f_414 = 0;
	Global_1900383->f_414.f_1 = 0;
}

void func_119(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	if (func_391(iParam0))
	{
		return;
	}
	sVar0 = "bHorseHasBeenStolen";
	bVar1 = false;
	if (!decor_exist_on(iParam0, sVar0))
	{
		decor_set_bool(iParam0, sVar0, true);
		bVar1 = true;
	}
	else if (!decor_get_bool(iParam0, sVar0))
	{
		decor_set_bool(iParam0, sVar0, true);
		bVar1 = true;
	}
	if (get_ped_config_flag(iParam0, 6, true))
	{
		bVar1 = false;
	}
	if (bVar1)
	{
		func_413(iParam0);
	}
}

int func_120()
{
	return &Global_1900372;
}

void func_121()
{
	disable_control_action(0, 1287709438, false);
	func_414(0);
	Global_1935689->f_6 = 1;
}

void func_122()
{
	func_415(0);
	func_416(1);
}

void func_123()
{
	if (!func_417())
	{
		return;
	}
	iVar0 = func_418();
	iVar1 = func_419();
	if (!does_entity_exist(iVar0))
	{
		func_416(7);
		return;
	}
	if (is_entity_dead(iVar0))
	{
		func_416(7);
		return;
	}
	if (is_ped_injured(iVar0))
	{
		func_416(7);
		return;
	}
	if (is_ped_in_writhe(iVar0))
	{
		func_416(7);
		return;
	}
	if (!func_420(iVar1))
	{
		func_416(7);
		return;
	}
	func_416(2);
}

void func_124()
{
	iVar0 = func_418();
	if (!does_entity_exist(iVar0))
	{
		func_416(7);
		return;
	}
	if (is_entity_dead(iVar0))
	{
		func_416(7);
		return;
	}
	if (is_ped_injured(iVar0))
	{
		func_416(7);
		return;
	}
	if (is_ped_in_writhe(iVar0))
	{
		func_416(7);
		return;
	}
	iVar1 = _get_rider_of_mount(iVar0, false);
	if (iVar1 != 0)
	{
		if (iVar1 != Global_35)
		{
			func_416(7);
			return;
		}
	}
	if (_0xe4770da1b8ff4fd1(iVar0) != 0)
	{
		func_416(7);
		return;
	}
	if (!func_421())
	{
		func_416(7);
		return;
	}
	func_416(3);
}

void func_125()
{
	iVar0 = func_418();
	iVar1 = func_419();
	if (!does_entity_exist(iVar0))
	{
		func_416(7);
		return;
	}
	if (is_entity_dead(iVar0))
	{
		func_416(7);
		return;
	}
	if (is_ped_injured(iVar0))
	{
		func_416(7);
		return;
	}
	if (is_ped_in_writhe(iVar0))
	{
		func_416(7);
		return;
	}
	if (func_422(iVar0, iVar1))
	{
		func_423(get_game_timer());
		func_416(4);
	}
}

void func_126()
{
	iVar0 = func_418();
	iVar1 = func_419();
	if (!does_entity_exist(iVar0))
	{
		func_416(7);
		return;
	}
	if (is_entity_dead(iVar0))
	{
		func_416(7);
		return;
	}
	if (is_ped_injured(iVar0))
	{
		func_416(7);
		return;
	}
	if (is_ped_in_writhe(iVar0))
	{
		func_416(7);
		return;
	}
	bVar2 = false;
	if (_0x7fc84e85d98f063d(Global_35))
	{
		bVar2 = true;
	}
	else if (func_424() + 500 < get_game_timer())
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		iVar3 = get_game_timer();
		func_423(iVar3);
		func_425(iVar3);
		func_416(5);
		if (iVar1 == -1516555556)
		{
			func_426(iVar0);
			iVar4 = func_357(iVar0, 0);
			func_427(iVar4);
			func_428(0);
		}
		else
		{
			func_426(0);
			func_427(0);
			func_428(0);
		}
	}
}

void func_127()
{
	iVar0 = func_418();
	iVar1 = func_419();
	if (!does_entity_exist(iVar0))
	{
		func_416(7);
		return;
	}
	if (is_entity_dead(iVar0))
	{
		func_416(7);
		return;
	}
	if (is_ped_injured(iVar0))
	{
		func_416(7);
		return;
	}
	if (is_ped_in_writhe(iVar0))
	{
		func_416(7);
		return;
	}
	bVar2 = false;
	if (!_0x7fc84e85d98f063d(Global_35))
	{
		if (func_424() + 500 < get_game_timer())
		{
			bVar2 = true;
		}
	}
	if (has_anim_event_fired(Global_35, -1930620551))
	{
		func_429(1);
		bVar2 = true;
	}
	if (bVar2)
	{
		if (func_430())
		{
			if (func_431(iVar1, 1147021565))
			{
				func_432(iVar1, 1, 0, 562618531, 0);
			}
			func_433(iVar0, iVar1);
		}
		else
		{
			func_416(7);
			return;
		}
		func_423(get_game_timer());
		func_416(6);
	}
}

void func_128()
{
	bVar0 = false;
	if (!_0x7fc84e85d98f063d(Global_35))
	{
		if (func_424() + 500 < get_game_timer())
		{
			bVar0 = true;
		}
	}
	if (func_434())
	{
		bVar0 = true;
	}
	if (func_430())
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_416(7);
	}
}

void func_129()
{
	func_415(0);
	func_416(0);
	_0xd962f8579d702db5();
}

void func_130()
{
	iVar0 = func_435();
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0))
	{
	}
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35))
	{
	}
	bVar1 = has_anim_event_fired(Global_35, 1120483657);
	if (bVar1)
	{
		if (!func_436())
		{
			func_428(1);
		}
	}
	if (!func_436())
	{
		return;
	}
	bVar2 = false;
	if (func_388(iVar0))
	{
		iVar3 = func_401(iVar0);
		iVar4 = func_437(iVar3, 0);
		if (iVar4 > 0)
		{
			func_438(iVar3, 0, -1);
			bVar2 = true;
		}
	}
	else
	{
		iVar5 = func_357(iVar0, 0);
		if (iVar5 > 0)
		{
			func_439(iVar0, 0, -1);
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		_0xe29d8cd66553dbaa(iVar0);
	}
	if (func_357(iVar0, 0) == 0)
	{
		func_426(0);
		func_428(0);
	}
}

bool func_131(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_84(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_132(int iParam0)
{
	_databinding_write_data_bool(Global_1955569->f_5.f_147.f_23, iParam0);
}

bool func_133()
{
	return Global_1900383->f_443;
}

int func_134()
{
	return Global_1897952->f_41;
}

bool func_135(int iParam0, bool bParam1)
{
	switch (func_440(iParam0))
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

int func_136(int iParam0, var uParam1, var uParam2)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	*uParam1 = { Global_40.f_1095.f_1[iParam0]->f_427 };
	*uParam2 = Global_40.f_1095.f_1[iParam0]->f_430;
	return 1;
}

bool func_137(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_138()
{
	Global_1900383->f_443 = 0;
}

int func_139(var uParam0, var uParam1)
{
	uParam1->f_10 = func_87(uParam1->f_10);
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
		if (func_137(uParam1->f_6))
		{
		}
	}
	bVar0 = func_94();
	if (*uParam1)
	{
		if (bVar0 && !func_135((*Global_1835011)[4]->f_1, 1))
		{
			if (func_131(5))
			{
				func_73(5);
				func_203(5);
				func_217(0);
				func_214(0);
			}
		}
	}
	if (func_441(Global_36) == 8)
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_135((*Global_1835011)[37]->f_1, 1)) && !func_135((*Global_1835011)[43]->f_1, 1))
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_135((*Global_1835011)[43]->f_1, 1)) && !func_135((*Global_1835011)[44]->f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_88(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_71(iVar1))
	{
		bVar3 = true;
		if (func_380(iVar1))
		{
			bVar4 = true;
		}
		if (func_442(iVar1))
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
				func_443(uParam1->f_10);
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
			if (!func_131(0) && func_131(1))
			{
				func_116(1, 0);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_210())
			{
				func_444();
			}
			func_217(0);
			func_214(0);
			func_215(uParam1->f_6);
		}
	}
	if (!func_71(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_207(uParam1->f_10) == 0 || func_445(uParam1->f_10) == 0) || func_84(uParam1->f_10) == 0)
			{
				func_446(uParam1->f_10);
			}
			func_447(uParam1->f_10);
			func_448(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*uParam0 = 0;
			return 0;
		}
		*uParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_88(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_71(iVar1))
	{
		bVar3 = true;
		if (func_380(iVar1))
		{
			bVar4 = true;
		}
		if (func_442(iVar1))
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
			if (!func_137(uParam1->f_6))
			{
				set_entity_coords(iVar2, uParam1->f_6, false, true, true, true);
				set_entity_heading(iVar2, uParam1->f_9);
				_0x9587913b9e772d29(iVar2, 0);
			}
		}
	}
	if (func_165(uParam1->f_10))
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
			Var8 = { func_354(uParam1->f_10) };
			Var10 = { func_355() };
			func_362(iVar2, &Var8, &Var10, 0);
			_set_ped_as_saddle_horse_for_player(iVar6, iVar2);
			set_ped_config_flag(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*uParam0 = 2;
		return iVar2;
	}
	if (!func_72(uParam1->f_10))
	{
		set_entity_as_mission_entity(iVar2, true, true);
		func_449(uParam1->f_10);
		if (uParam1->f_2 && !func_137(uParam1->f_6))
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
	func_450(uParam1->f_10);
	if (func_72(uParam1->f_10))
	{
		iVar16 = func_181(uParam1->f_10);
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

bool func_140(int iParam0)
{
	if (!func_451(iParam0))
	{
		return false;
	}
	return func_452(iParam0);
}

void func_141(int iParam0)
{
	iVar0 = func_207(iParam0);
	if (func_115(iParam0) >= get_default_max_attribute_rank(iVar0, 7))
	{
		return;
	}
	iVar1 = func_88(iParam0);
	fVar2 = get_entity_speed(iVar1);
	bVar3 = false;
	if (_get_rider_of_mount(iVar1, false) != Global_35)
	{
		bVar3 = true;
	}
	bVar4 = false;
	if (is_player_control_on(player_id()))
	{
		bVar4 = true;
	}
	if ((fVar2 < 0.5f || bVar3) || !bVar4)
	{
		Global_1900383->f_317.f_2[iParam0]->f_1 = -1;
		Global_1900383->f_317.f_2[iParam0] = -1;
		return;
	}
	if (Global_1900383->f_317.f_2[iParam0]->f_2 >= 100f)
	{
		func_453(1, 100f);
		fVar5 = (Global_1900383->f_317.f_2[iParam0]->f_2 - 100f);
		Global_1900383->f_317.f_2[iParam0]->f_2 = fVar5;
	}
	fVar6 = _get_ped_stamina(iVar1);
	if (fVar6 < 1f)
	{
		Global_1900383->f_317.f_2[iParam0]->f_1 = -1;
		Global_1900383->f_317.f_2[iParam0] = -1;
		return;
	}
	if (fVar2 > 0.5f && fVar2 <= 4f)
	{
		if (&Global_1900383->f_317.f_2[iParam0] == -1)
		{
			Global_1900383->f_317.f_2[iParam0] = 0;
		}
	}
	if (fVar2 > 4f && fVar2 <= 6f)
	{
		if (&Global_1900383->f_317.f_2[iParam0] == -1 || &Global_1900383->f_317.f_2[iParam0] == 0)
		{
			Global_1900383->f_317.f_2[iParam0] = 1;
		}
	}
	if (fVar2 > 6f)
	{
		if ((&Global_1900383->f_317.f_2[iParam0] == -1 || &Global_1900383->f_317.f_2[iParam0] == 0) || &Global_1900383->f_317.f_2[iParam0] == 1)
		{
			Global_1900383->f_317.f_2[iParam0] = 2;
		}
	}
	if (fVar2 > 10f)
	{
		if (((&Global_1900383->f_317.f_2[iParam0] == -1 || &Global_1900383->f_317.f_2[iParam0] == 0) || &Global_1900383->f_317.f_2[iParam0] == 1) || &Global_1900383->f_317.f_2[iParam0] == 2)
		{
			Global_1900383->f_317.f_2[iParam0] = 3;
		}
	}
	if (&Global_1900383->f_317.f_2[iParam0] == -1)
	{
		return;
	}
	iVar7 = get_game_timer();
	if (Global_1900383->f_317.f_2[iParam0]->f_1 == -1)
	{
		Global_1900383->f_317.f_2[iParam0]->f_1 = iVar7;
		return;
	}
	if (Global_1900383->f_317.f_2[iParam0]->f_1 + 5000 < iVar7)
	{
		if (&Global_1900383->f_317.f_2[iParam0] == 0 || &Global_1900383->f_317.f_2[iParam0] == 1)
		{
			func_454(iParam0, 1);
		}
		else if (&Global_1900383->f_317.f_2[iParam0] == 2)
		{
			func_454(iParam0, 2);
		}
		else if (&Global_1900383->f_317.f_2[iParam0] == 3)
		{
			func_454(iParam0, 3);
		}
		Global_1900383->f_317.f_2[iParam0]->f_1 = -1;
		Global_1900383->f_317.f_2[iParam0] = -1;
	}
}

void func_142(int iParam0)
{
	iVar0 = func_207(iParam0);
	if (func_115(iParam0) >= get_default_max_attribute_rank(iVar0, 7))
	{
		return;
	}
	iVar1 = func_88(iParam0);
	fVar2 = get_entity_speed(iVar1);
	bVar3 = false;
	if (is_player_control_on(player_id()))
	{
		bVar3 = true;
	}
	if (((!_0xefc4303ddc6e60d3(Global_35) || _0xed1f514af4732258(Global_35) != iVar1) || fVar2 < 0.5f) || !bVar3)
	{
		Global_1900383->f_317.f_2[iParam0]->f_3 = -1;
		return;
	}
	if (Global_1900383->f_317.f_2[iParam0]->f_4 >= 20f)
	{
		func_453(4, 20f);
		fVar4 = (Global_1900383->f_317.f_2[iParam0]->f_4 - 20f);
		Global_1900383->f_317.f_2[iParam0]->f_4 = fVar4;
	}
	iVar5 = get_game_timer();
	if (Global_1900383->f_317.f_2[iParam0]->f_3 == -1)
	{
		Global_1900383->f_317.f_2[iParam0]->f_3 = iVar5;
		return;
	}
	if (Global_1900383->f_317.f_2[iParam0]->f_3 + 5000 < iVar5)
	{
		func_454(iParam0, 4);
		Global_1900383->f_317.f_2[iParam0]->f_3 = -1;
	}
}

void func_143(int iParam0)
{
	iVar0 = func_207(iParam0);
	if (func_115(iParam0) >= get_default_max_attribute_rank(iVar0, 7))
	{
		return;
	}
	iVar1 = func_88(iParam0);
	if (!does_entity_exist(iVar1))
	{
		return;
	}
	if (is_entity_dead(iVar1) || is_ped_injured(iVar1))
	{
		return;
	}
	bVar2 = _get_rider_of_mount(iVar1, false) == Global_35;
	if (!bVar2)
	{
		return;
	}
	iVar3 = _get_lassoed_entity(Global_35);
	if (!does_entity_exist(iVar3))
	{
		return;
	}
	if (decor_exist_on(iVar3, "bHasBeenLassoedFromHorse"))
	{
		return;
	}
	bVar4 = func_455(iVar3, Global_35);
	if (bVar4)
	{
	}
	decor_set_bool(iVar3, "bHasBeenLassoedFromHorse", true);
}

void func_144(int iParam0)
{
	if (!get_event_data(0, iParam0, &Var0, 2))
	{
		return;
	}
	if (!does_entity_exist(Var0))
	{
		return;
	}
	if (!does_entity_exist(Var0.f_1))
	{
		return;
	}
	if (func_456(Var0.f_1))
	{
		return;
	}
	if (Var0.f_1 == Global_35)
	{
		return;
	}
	iVar2 = Global_1935630->f_40;
	if (is_ped_injured(iVar2))
	{
		return;
	}
	if (func_388(iVar2))
	{
	}
	if (is_entity_a_ped(Var0))
	{
		iVar3 = get_ped_index_from_entity_index(Var0);
		if (!iVar3 == iVar2)
		{
			return;
		}
	}
	else
	{
		return;
	}
	iVar4 = Var0.f_1;
	if (!has_entity_been_damaged_by_entity(iVar4, iVar2, 1, 1))
	{
		return;
	}
	if (!is_ped_human(iVar4))
	{
		return;
	}
	if (decor_exist_on(iVar4, "bHasBeenTrampledByHorse"))
	{
		return;
	}
	bVar5 = func_455(iVar4, Global_35);
	if (bVar5)
	{
		if (func_457(iVar4, -735200598))
		{
			func_243(0, -735200598, 0, 0, iVar4, 0, 1065353216, 0);
		}
	}
	else if (func_456(iVar4))
	{
	}
	else if (!func_458(iVar4, -735200598))
	{
		func_243(0, -735200598, 0, 0, iVar4, 0, 1065353216, 0);
	}
	decor_set_bool(iVar4, "bHasBeenTrampledByHorse", true);
}

void func_145(int iParam0)
{
	if (!get_event_data(0, iParam0, &iVar0, 1))
	{
		return;
	}
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!is_entity_a_ped(iVar0))
	{
		return;
	}
	if (!func_388(get_ped_index_from_entity_index(iVar0)))
	{
		return;
	}
	func_459();
}

void func_146(int iParam0)
{
	if (!get_event_data(0, iParam0, &Var0, 9))
	{
		return;
	}
	if (!does_entity_exist(Var0.f_1))
	{
		return;
	}
	if (!does_entity_exist(Var0))
	{
		return;
	}
	if (!is_entity_a_ped(Var0.f_1))
	{
		return;
	}
	if (!is_entity_a_ped(Var0))
	{
		return;
	}
	iVar9 = get_ped_index_from_entity_index(Var0.f_1);
	iVar10 = get_ped_index_from_entity_index(Var0);
	if (!func_388(iVar10))
	{
		return;
	}
	if (iVar9 == Global_35)
	{
		iVar11 = func_401(iVar10);
		if ((iVar11 != -1 && Var0.f_2 != 0) && Var0.f_4 > 5f)
		{
		}
	}
}

void func_147(int iParam0)
{
	if (!get_event_data(0, iParam0, &Var0, 9))
	{
		return;
	}
	if (!does_entity_exist(Var0))
	{
		return;
	}
	if (!is_entity_a_ped(Var0.f_1))
	{
		return;
	}
	if (!is_entity_a_ped(Var0))
	{
		return;
	}
	iVar9 = get_ped_index_from_entity_index(Var0.f_1);
	iVar10 = get_ped_index_from_entity_index(Var0);
	if (!does_entity_exist(iVar9))
	{
		return;
	}
	if (!is_entity_a_ped(iVar9))
	{
		return;
	}
	if (!does_entity_exist(iVar10))
	{
		return;
	}
	if (!is_entity_a_ped(iVar10))
	{
		return;
	}
	if (func_388(iVar10))
	{
		return;
	}
	if (iVar9 != Global_35)
	{
		return;
	}
	func_460(iVar10, Var0.f_2, Var0.f_3);
}

void func_148(int iParam0)
{
	Global_1359489->f_16 = (Global_1359489->f_16 || iParam0);
}

void func_149(int iParam0)
{
	if (!get_event_data(0, iParam0, &vVar0, 3))
	{
		return;
	}
	if (!does_entity_exist(Global_35))
	{
	}
	if (is_entity_dead(Global_35) || is_ped_injured(Global_35))
	{
		return;
	}
	iVar3 = get_ped_index_from_entity_index(vVar0.y);
	if (!does_entity_exist(iVar3))
	{
		return;
	}
	iVar4 = get_ped_index_from_entity_index(vVar0.x);
	if (!does_entity_exist(iVar4))
	{
		return;
	}
	if (iVar4 != Global_35)
	{
		return;
	}
	if (is_entity_a_ped(vVar0.z))
	{
		iVar5 = get_ped_index_from_entity_index(vVar0.z);
		if (does_entity_exist(iVar5))
		{
			if (_0x9a100f1cf4546629(iVar5) && _0x5594afe9de0c01b7(iVar5))
			{
				if (func_388(iVar3))
				{
					iVar6 = func_401(iVar3);
					iVar7 = func_207(iVar6);
					iVar8 = get_default_max_attribute_rank(iVar7, 7);
					if (func_115(iVar6) < iVar8)
					{
						func_283(37, 0);
					}
					func_192(iVar6, 1);
					func_193(iVar6, get_game_timer());
				}
			}
		}
	}
}

void func_150(int iParam0)
{
	if (!get_event_data(0, iParam0, &Var0, 6))
	{
		return;
	}
	if (!does_entity_exist(Global_35))
	{
	}
	if (is_entity_dead(Global_35) || is_ped_injured(Global_35))
	{
		return;
	}
	iVar6 = get_ped_index_from_entity_index(Var0.f_1);
	if (!does_entity_exist(iVar6))
	{
		return;
	}
	iVar7 = get_ped_index_from_entity_index(Var0);
	if (!does_entity_exist(iVar7))
	{
		return;
	}
	if (iVar7 != Global_35)
	{
		return;
	}
}

void func_151(int iParam0)
{
	if (!get_event_data(0, iParam0, &vVar0, 3))
	{
		return;
	}
	if (does_entity_exist(vVar0.x))
	{
		return;
	}
	if (!is_entity_a_ped(vVar0.x))
	{
		return;
	}
	if (does_entity_exist(vVar0.y))
	{
		return;
	}
	if (!is_entity_a_ped(vVar0.y))
	{
		return;
	}
	iVar3 = get_ped_index_from_entity_index(vVar0.x);
	iVar4 = vVar0.z;
	if (iVar3 != Global_35)
	{
		return;
	}
	switch (iVar4)
	{
		case -1897367196:
		case 391681984:
			break;
		case 637277148:
			break;
		case 25367022:
			if (iVar4 == 554992710)
			{
			}
			func_461(1);
			break;
	}
}

void func_152(int iParam0)
{
	if (!get_event_data(0, iParam0, &Var0, 4))
	{
		return;
	}
	if (is_ped_injured(Global_35))
	{
		return;
	}
	if (!does_entity_exist(Var0))
	{
		return;
	}
	if (!does_entity_exist(Var0.f_1))
	{
		return;
	}
	iVar4 = Var0;
	iVar5 = Var0.f_1;
	if (iVar4 != Global_35)
	{
		return;
	}
	if (!func_388(iVar5))
	{
		return;
	}
	iVar6 = func_401(iVar5);
	vVar7 = { func_245(iVar6) };
	vVar10 = { get_entity_coords(iVar5, true, false) };
	if (!Var0.f_2)
	{
		func_462(iVar6, vVar10);
		func_248(iVar6, vVar10);
		func_249(iVar6, 0f);
		return;
	}
	if (Var0.f_3 == 0)
	{
		return;
	}
	if (!func_137(vVar7))
	{
		fVar13 = func_247(iVar6);
		if (fVar13 < 200f)
		{
			func_462(iVar6, vVar10);
			func_454(iVar6, 12);
			return;
		}
	}
	func_454(iVar6, 11);
	func_462(iVar6, vVar10);
	func_248(iVar6, vVar10);
	func_249(iVar6, 0f);
	func_114(iVar5);
	if (func_205(44))
	{
		return;
	}
	if (!func_140(40))
	{
		return;
	}
	if (!func_280())
	{
		return;
	}
	func_283(44, 0);
}

void func_153(int iParam0)
{
	if (!get_event_data(0, iParam0, &Var0, 5))
	{
		return;
	}
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (!does_entity_exist(Var0))
	{
		return;
	}
	if (!does_entity_exist(Var0.f_1))
	{
		return;
	}
	iVar5 = get_ped_index_from_entity_index(Var0);
	if (iVar5 != Global_35)
	{
		return;
	}
	iVar6 = get_player_index();
	iVar7 = get_ped_index_from_entity_index(Var0.f_1);
	switch (Var0.f_2)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			if (!Var0.f_4)
			{
				func_463();
			}
			break;
		case 4:
			break;
		case 5:
			if (is_entity_dead(iVar7))
			{
				return;
			}
			if (Global_1900383->f_442)
			{
				iVar8 = _0x3e593df9c2962ec6(-1925605092);
				_blip_set_modifier(iVar8, 673950256);
				func_464(41, iVar8, 1);
			}
			func_454(0, 5);
			break;
	}
	if (Var0.f_4 && func_465(Var0.f_2))
	{
		if (Var0.f_3 == 0)
		{
			return;
		}
		set_ped_config_flag(iVar7, 186, true);
		bVar9 = is_entity_dead(iVar7);
		if (bVar9)
		{
			if (_0x46fa0ae18f4c7fa9(iVar6) == iVar7)
			{
				_0x8fbf9edb378ccb8c(iVar6, 0);
			}
			_0xe225cef1901f6108(iVar7, 0);
			_0xdc0a1f0ecec9f0c0(iVar7, 1f);
		}
		func_466(Var0.f_3);
		iVar10 = func_211();
		if (does_entity_exist(iVar10))
		{
			if (!_0x88ad6cc10d8d35b2(iVar10))
			{
				set_entity_as_mission_entity(iVar10, true, false);
			}
		}
		iVar11 = func_401(iVar7);
		func_467(iVar11);
		Var12 = { func_354(iVar11) };
		func_356(&uVar14);
		func_468(iVar7);
		func_362(iVar7, &Var12, &uVar14, 0);
		_set_ped_as_saddle_horse_for_player(iVar6, 0);
		func_217(-1);
		func_214(1);
		func_469(iVar11, 0);
		if (!func_470(iVar11, 5))
		{
			func_472(iVar11, 5, func_471(5));
		}
		func_315(iVar11);
		func_404();
		func_473(iVar7);
	}
	if (Var0.f_4 && func_474(Var0.f_2))
	{
		if (is_entity_dead(iVar7))
		{
			return;
		}
		func_315(0);
		func_315(1);
		func_315(5);
		if (func_84(0) == 1)
		{
			if (!func_71(0))
			{
				func_203(0);
			}
		}
		Var20.f_1 = 1;
		Var20.f_5 = 0;
		Var20.f_3 = 1;
		Var20.f_2 = 1;
		Var20.f_4 = 0;
		Var20.f_6 = 0;
		Var20 = player_id();
		if (func_117(Var20, &iVar7, 0))
		{
			func_119(iVar7);
			func_118();
		}
		Global_1900383->f_442 = 0;
		if (func_388(iVar7))
		{
			if (iVar7 == func_88(0))
			{
			}
			else if (iVar7 == func_88(1))
			{
				func_116(1, 0);
				Global_1900383->f_442 = 1;
			}
			else if (iVar7 == func_88(6))
			{
				bVar27 = false;
				if (!bVar27)
				{
					if (func_131(0) && func_131(1))
					{
						func_116(0, 1);
						func_116(0, 6);
						bVar27 = true;
					}
				}
				if (!bVar27)
				{
					if (func_131(0) && !func_131(1))
					{
						func_116(0, 1);
						func_116(0, 6);
						bVar27 = true;
					}
				}
				if (!bVar27)
				{
					if (!func_131(0))
					{
						func_116(0, 6);
						bVar27 = true;
					}
				}
				Global_1900383->f_442 = 1;
			}
		}
		else
		{
			if (func_131(0))
			{
				if (func_131(1))
				{
					if (func_131(6))
					{
						func_202(6, 0);
						func_203(6);
					}
					func_116(1, 6);
				}
				func_116(0, 1);
			}
			func_475(iVar7);
			Global_1900383->f_442 = 1;
		}
		func_343(iVar7);
		if (func_71(0))
		{
			iVar28 = func_88(0);
			_0x8fbf9edb378ccb8c(iVar6, iVar28);
		}
		if (func_71(1))
		{
			iVar29 = func_88(1);
			uVar30 = _0x227b06324234fb09(iVar6, iVar29);
		}
		else
		{
			_0x227b06324234fb09(iVar6, 0);
		}
		iVar31 = func_211();
		if (does_entity_exist(iVar31))
		{
			if (!_0x88ad6cc10d8d35b2(iVar31))
			{
				set_entity_as_mission_entity(iVar31, false, true);
			}
			delete_object(&iVar31);
		}
		func_466(0);
		func_476(iVar7);
		func_477(iVar7);
		if (!_0x808077647856de62(iVar7, 9))
		{
			_0x18ff3110cf47115d(iVar7, 9, 1);
		}
		set_ped_config_flag(iVar7, 186, false);
		_set_ped_as_saddle_horse_for_player(iVar6, iVar7);
		func_217(0);
		func_214(0);
		func_469(0, 0);
		Var32 = { func_354(0) };
		Var34 = { func_355() };
		func_362(iVar7, &Var32, &Var34, 0);
		func_478(0);
		func_404();
		func_479();
	}
}

void func_154(int iParam0)
{
	if (!get_event_data(0, iParam0, &Var0, 4))
	{
		return;
	}
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (!does_entity_exist(Var0))
	{
		return;
	}
	if (!does_entity_exist(Var0.f_1))
	{
		return;
	}
	iVar4 = get_ped_index_from_entity_index(Var0);
	iVar5 = get_ped_index_from_entity_index(Var0.f_1);
	iVar6 = Var0.f_2;
	bVar7 = Var0.f_3;
	if (iVar4 != Global_35)
	{
		return;
	}
	if (is_entity_dead(iVar4) || is_ped_injured(iVar4))
	{
		return;
	}
	if (is_entity_dead(iVar5) || is_ped_injured(iVar5))
	{
		return;
	}
	fVar8 = func_190(iVar5);
	bVar9 = false;
	if (fVar8 == 0f)
	{
		bVar9 = true;
	}
	if (func_389(iVar5))
	{
		return;
	}
	if (func_391(iVar5))
	{
		return;
	}
	if (func_390(iVar5))
	{
		return;
	}
	iVar10 = get_entity_model(iVar5);
	if (func_392(iVar10) || func_393(iVar10))
	{
		return;
	}
	iVar11 = _0xe4770da1b8ff4fd1(iVar5);
	if (does_entity_exist(iVar11))
	{
		return;
	}
	if (func_480() != iVar5)
	{
		func_481(iVar5);
		func_482(0);
		func_483(0);
	}
	bVar12 = false;
	iVar13 = get_game_timer();
	iVar14 = func_484();
	if ((iVar14 + 45000) > iVar13)
	{
		bVar12 = true;
	}
	bVar15 = false;
	if (bVar12 && iVar14 + 15000 > iVar13)
	{
		bVar15 = true;
	}
	bVar16 = func_388(iVar5);
	bVar17 = true;
	if (iVar6 == 1 || iVar6 == 3)
	{
		bVar17 = false;
	}
	bVar18 = func_279(Global_35, iVar5, 0);
	bVar19 = func_485(iVar5);
	bVar20 = _0xd4d403ea031f351c(iVar5);
	bVar21 = func_94();
	bVar22 = func_135((*Global_1835011)[0]->f_1, 1);
	bVar23 = false;
	if (bVar21 && !bVar22)
	{
		bVar23 = true;
	}
	func_114(iVar5);
	if (!bVar16)
	{
		return;
	}
	iVar24 = func_401(iVar5);
	if ((((bVar17 && !bVar18) && !bVar19) && !bVar20) && !bVar23)
	{
		func_486(iVar5);
	}
	iVar25 = -1;
	switch (iVar6)
	{
		case 0:
			if (bVar7)
			{
				if (bVar12)
				{
					if (!bVar15)
					{
						iVar25 = 10;
					}
				}
				else if (get_ped_desired_move_blend_ratio(iVar5) > 1.5f)
				{
					iVar25 = 10;
				}
				else
				{
					iVar25 = 9;
				}
			}
			break;
		case 1:
		case 3:
			if (bVar12)
			{
				if (!bVar15)
				{
					iVar25 = 8;
				}
			}
			else if (bVar7)
			{
				iVar25 = 9;
			}
			else if (bVar9)
			{
				iVar25 = 7;
			}
			break;
	}
	if (iVar25 != -1)
	{
		func_454(iVar24, iVar25);
		if ((bVar7 || !bVar12) || !bVar15)
		{
			func_481(iVar5);
			func_482(iVar13);
		}
	}
	func_487(iVar24);
}

void func_155(int iParam0)
{
}

void func_156(int iParam0)
{
	if (!get_event_data(0, iParam0, &vVar0, 3))
	{
		return;
	}
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (!does_entity_exist(vVar0.x))
	{
		return;
	}
	if (!is_entity_a_ped(vVar0.x))
	{
		return;
	}
	iVar3 = get_ped_index_from_entity_index(vVar0.x);
	if (is_entity_dead(iVar3) || is_ped_injured(iVar3))
	{
		return;
	}
	if (iVar3 != Global_35)
	{
		return;
	}
	if (!does_entity_exist(vVar0.y))
	{
		return;
	}
	if (!is_entity_a_ped(vVar0.y))
	{
		return;
	}
	iVar4 = get_ped_index_from_entity_index(vVar0.y);
	if (is_entity_dead(iVar4) || is_ped_injured(iVar4))
	{
		return;
	}
	if (func_389(iVar4))
	{
		return;
	}
	if (func_390(iVar4))
	{
		return;
	}
	if (vVar0.z == 0)
	{
		if (!func_488())
		{
			func_283(52, 1);
		}
	}
	iVar5 = get_game_timer();
	if (vVar0.z == 1)
	{
		iVar6 = func_489();
		if (func_490(54) == 0)
		{
			func_491(get_game_timer());
			func_283(54, 0);
		}
		else if (func_490(54) < 3)
		{
			if ((iVar6 + 1800000) <= iVar5)
			{
				func_283(54, 1);
				func_491(get_game_timer());
			}
		}
		func_492(0);
	}
	if (vVar0.z == 2)
	{
		if (func_196(52))
		{
			func_197(52);
		}
		if (func_194(52))
		{
			func_195(52);
		}
		func_283(53, 1);
		func_492(1);
	}
	if (vVar0.z != 2)
	{
		return;
	}
	func_494(func_493(-1811330370, -591306697), 1);
	compendium_horse_wild_broken(iVar4);
	if (func_388(iVar4))
	{
		return;
	}
	if (func_402(iVar4) > 0)
	{
		if (func_71(1))
		{
			func_202(1, 0);
			func_203(1);
		}
		func_403(iVar4);
	}
	else
	{
		if (func_71(6))
		{
			func_202(6, 0);
			func_203(6);
		}
		func_405(iVar4, 1);
	}
	if (!func_388(iVar4))
	{
		return;
	}
	iVar7 = func_401(iVar4);
	if (iVar7 == -1)
	{
		return;
	}
	if (!func_224(iVar7))
	{
		func_454(iVar7, 6);
		func_495(iVar7, 1);
		func_481(iVar4);
		func_482(iVar5);
	}
}

void func_157(int iParam0)
{
	if (func_2() == 0)
	{
		return;
	}
	if (!get_event_data(0, iParam0, &Var0, 2))
	{
		return;
	}
	if (!does_entity_exist(Global_35) || !does_entity_exist(Var0))
	{
		return;
	}
	if (Global_1935630->f_12)
	{
		return;
	}
	if (is_ped_injured(Global_35))
	{
		return;
	}
	if (get_ped_index_from_entity_index(Var0) != Global_35)
	{
		return;
	}
	if (Global_1900383->f_378 != 2)
	{
		return;
	}
	switch (Var0.f_1)
	{
		case -72209530:
			iVar2 = 0;
			break;
		case 1704957293:
			iVar2 = 0;
			break;
		case 869278708:
			iVar2 = 4;
			break;
		case 640210656:
			iVar2 = 0;
			break;
		case 1051485804:
			iVar2 = 2;
			break;
		default:
			iVar2 = 0;
			break;
	}
	func_371(iVar2);
	func_372(Var0.f_1);
	func_79(1);
	decor_set_bool(Global_35, "Whistling", true);
}

void func_158(int iParam0)
{
	if (!get_event_data(0, iParam0, &vVar0, 10))
	{
		return;
	}
	uVar10 = vVar0.x;
	iVar11 = uVar10;
	switch (iVar11)
	{
		case 28:
			func_414(1);
			func_496(-283002878);
			break;
	}
	if (func_2() == 0)
	{
		return;
	}
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35) || is_ped_injured(Global_35))
	{
		return;
	}
	iVar12 = vVar0.z;
	if (!does_entity_exist(iVar12))
	{
		return;
	}
	if (!is_entity_a_ped(iVar12))
	{
		return;
	}
	iVar13 = get_ped_index_from_entity_index(iVar12);
	if (is_entity_dead(iVar13) || is_ped_injured(iVar13))
	{
		return;
	}
	switch (iVar11)
	{
		case 28:
			func_414(1);
			func_496(-283002878);
			break;
		case 31:
		case 32:
		case 33:
			func_497(iParam0);
			break;
		case 49:
			func_498(iParam0);
			break;
		case 50:
			func_499(iParam0);
			break;
		default:
			return;
	}
}

void func_159(int iParam0)
{
	if (!get_event_data(0, iParam0, &vVar0, 3))
	{
		return;
	}
	if (!does_entity_exist(vVar0.y))
	{
		return;
	}
	if (!is_entity_a_ped(vVar0.y))
	{
		return;
	}
	iVar3 = get_ped_index_from_entity_index(vVar0.y);
	if (iVar3 != Global_35)
	{
		return;
	}
	if (!does_entity_exist(vVar0.x))
	{
		return;
	}
	if (!is_entity_a_ped(vVar0.x))
	{
		return;
	}
	iVar4 = get_ped_index_from_entity_index(vVar0.x);
	if (!func_388(iVar4))
	{
		return;
	}
	iVar5 = func_401(iVar4);
	func_500();
	func_501(iVar5);
	func_199(iVar5, 0);
	func_502(iVar5, 0);
	func_503(iVar5, -15);
	if (func_194(56))
	{
		func_195(56);
	}
	if (func_196(56))
	{
		func_197(56);
	}
	if (func_194(57))
	{
		func_195(57);
	}
	if (func_196(57))
	{
		func_197(57);
	}
	iVar6 = vVar0.z;
	func_504(iVar4, iVar6);
	_0xeb8886e1065654cd(iVar4, 10, "ALL", 10f);
}

void func_160(int iParam0)
{
	if (!get_event_data(0, iParam0, &Var0, 2))
	{
		return;
	}
	if (!does_entity_exist(Var0.f_1))
	{
	}
	if (!does_entity_exist(Var0))
	{
		return;
	}
	iVar2 = Var0;
	if (!func_388(iVar2))
	{
		return;
	}
	if (func_505())
	{
		if (func_194(57))
		{
			func_195(57);
		}
		if (func_196(57))
		{
			func_197(57);
		}
		if (!func_194(56) && !func_196(56))
		{
			if (func_506() < 3)
			{
				func_283(56, 1);
			}
		}
	}
}

void func_161(int iParam0)
{
	if (!get_event_data(0, iParam0, &Var0, 4))
	{
		return;
	}
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35))
	{
		return;
	}
	if (!does_entity_exist(Var0.f_1))
	{
	}
	if (is_entity_dead(Var0.f_1))
	{
		return;
	}
	if (!is_entity_a_ped(Var0.f_1))
	{
		return;
	}
	if (!does_entity_exist(Var0))
	{
		return;
	}
	if (is_entity_dead(Var0))
	{
		return;
	}
	if (!is_entity_a_ped(Var0))
	{
		return;
	}
	if (Global_16 || func_369())
	{
		return;
	}
	iVar4 = get_interior_from_entity(Global_35);
	if (is_valid_interior(iVar4))
	{
		return;
	}
	iVar5 = get_ped_index_from_entity_index(Var0);
	iVar6 = get_ped_index_from_entity_index(Var0.f_1);
	if (is_ped_injured(iVar5))
	{
		return;
	}
	if (is_ped_in_writhe(iVar5))
	{
		return;
	}
	if (!func_388(iVar5))
	{
		return;
	}
	if (iVar6 == Global_1900383->f_440)
	{
		return;
	}
	if (((func_194(61) || func_196(61)) || func_194(62)) || func_196(62))
	{
		return;
	}
	bVar7 = false;
	if (is_ped_on_mount(Global_35))
	{
		if (_get_rider_of_mount(iVar5, false) == Global_35)
		{
			bVar7 = true;
		}
	}
	bVar8 = false;
	if (!bVar7)
	{
		if (func_187(Global_35, iVar5, 1, 1) <= 5f)
		{
			bVar8 = true;
		}
	}
	iVar9 = -1;
	if (bVar7)
	{
		iVar9 = 62;
	}
	else if (bVar8)
	{
		iVar9 = 61;
	}
	if (iVar9 == -1)
	{
		return;
	}
	if (!func_280())
	{
		return;
	}
	iVar10 = (func_490(61) + func_490(62));
	if (iVar10 >= 3)
	{
		return;
	}
	iVar11 = get_game_timer();
	iVar12 = func_507();
	if (iVar10 > 0)
	{
		if (iVar12 == 0)
		{
			func_508(get_game_timer());
			return;
		}
		if ((iVar12 + 600000) > iVar11)
		{
			return;
		}
	}
	func_283(iVar9, 1);
	func_509();
	Global_1900383->f_440 = iVar6;
}

void func_162(int iParam0)
{
	if (!get_event_data(0, iParam0, &vVar0, 6))
	{
		return;
	}
	if (!does_entity_exist(vVar0.y))
	{
		return;
	}
	if (!does_entity_exist(vVar0.x))
	{
		return;
	}
	if (!does_entity_exist(vVar0.z))
	{
		return;
	}
	if (!is_entity_a_ped(vVar0.z))
	{
		return;
	}
	iVar6 = vVar0.y;
	iVar7 = vVar0.x;
	iVar8 = get_ped_index_from_entity_index(vVar0.z);
	if (iVar7 != Global_35)
	{
		return;
	}
	if (is_entity_a_ped(iVar6))
	{
		iVar9 = get_ped_index_from_entity_index(iVar6);
		if (is_ped_human(iVar9))
		{
			return;
		}
	}
	if (func_388(iVar8))
	{
		iVar10 = func_401(iVar8);
		iVar11 = 0;
		iVar11 = func_510(iVar6);
		if (func_284(iVar11, 0))
		{
			if (func_511(iVar11))
			{
				if (_0xf59fde7b4d31a630(iVar6))
				{
					func_512(iVar10, iVar11, 1);
				}
			}
		}
	}
	else
	{
		iVar12 = func_510(iVar6);
		if (func_284(iVar12, 0))
		{
			if ((func_511(iVar12) && func_513(iVar12) != 0) && func_514(func_513(iVar12), &iVar13))
			{
				Global_1425228->f_2[iVar13] = iVar8;
			}
		}
	}
	iVar14 = func_286(iVar8, iVar6);
}

void func_163(int iParam0)
{
	if (!get_event_data(0, iParam0, &Var0, 4))
	{
		return;
	}
	if (!does_entity_exist(Var0.f_1))
	{
		return;
	}
	if (!does_entity_exist(Var0.f_3))
	{
		return;
	}
	if (!Var0.f_2)
	{
		return;
	}
	if (!is_entity_a_ped(Var0.f_3))
	{
		return;
	}
	iVar4 = Var0.f_1;
	iVar5 = get_ped_index_from_entity_index(Var0.f_3);
	if (!does_entity_exist(Var0))
	{
		func_516(func_515(iVar4));
	}
	else
	{
		iVar6 = Var0;
		if (iVar6 != Global_35)
		{
			return;
		}
	}
	bVar7 = false;
	if (is_entity_a_mission_entity(iVar4))
	{
		bVar7 = true;
	}
	if (!bVar7)
	{
		_0xdc0a1f0ecec9f0c0(iVar4, 1f);
	}
	iVar8 = func_517(iVar5, iVar4);
}

void func_164(int iParam0)
{
	if (!get_event_data(0, iParam0, &Var0, 4))
	{
		return;
	}
	if (!does_entity_exist(Var0))
	{
		return;
	}
	if (Var0 != Global_35)
	{
		return;
	}
	if (!does_entity_exist(Var0.f_1))
	{
		return;
	}
	if (!Var0.f_2)
	{
		return;
	}
	if (!does_entity_exist(Var0.f_3))
	{
		return;
	}
	iVar4 = get_ped_index_from_entity_index(Var0.f_3);
	iVar5 = func_401(iVar4);
	switch (iVar5)
	{
		case 0:
		case 1:
			break;
		default:
			return;
	}
	if (!func_308(iVar5))
	{
		return;
	}
	if (func_518(iVar4, 0))
	{
		return;
	}
	iVar6 = Var0.f_1;
	if (!is_entity_a_ped(iVar6) && !_0x255b6db4e3ad3c3e(iVar6))
	{
		return;
	}
	func_306(iVar5);
	if (!func_300(iVar5))
	{
		func_454(iVar5, 22);
		return;
	}
	func_304(iVar5, 0);
	func_454(iVar5, 21);
}

bool func_165(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return func_173(iParam0, 1);
}

void func_166(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0]->f_427 = { vParam1 };
	Global_40.f_1095.f_1[iParam0]->f_430 = uParam4;
}

int func_167(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

bool func_168(int iParam0, int iParam1)
{
	iVar0 = get_script_task_status(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

bool func_169(int iParam0)
{
	return func_519(iParam0, 0);
}

int func_170()
{
	return Global_40.f_4283.f_1;
}

bool func_171(int iParam0)
{
	if ((iParam0 == 43 || iParam0 == 37) || iParam0 == 22)
	{
		return true;
	}
	return false;
}

bool func_172(int iParam0)
{
	return func_520(iParam0, 2);
}

bool func_173(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
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

bool func_174(int iParam0, int iParam1)
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

int func_175(int iParam0)
{
	if (iParam0 == 7)
	{
		return 0;
	}
	if (_does_volume_exist(&(Global_1357549->f_3[iParam0])))
	{
		return &(Global_1357549->f_3[iParam0]);
	}
	return 0;
}

int func_176(vector3 vParam0, int iParam3, int iParam4)
{
	if (!_does_volume_exist(iParam3))
	{
		return 0;
	}
	bVar0 = false;
	if (_does_volume_exist(iParam4))
	{
		bVar0 = true;
	}
	iVar1 = create_itemset(true);
	_0xb8e213d02f37947d(iParam3, iVar1, -1805387726, 1, 1, 0, 0);
	iVar2 = get_itemset_size(iVar1);
	fVar4 = 1E+07f;
	iVar5 = 0;
	while (iVar5 < iVar2)
	{
		iVar6 = get_indexed_scenario_point_index_in_itemset(iVar5, iVar1);
		if (!_does_scenario_point_exist(iVar6))
		{
		}
		else
		{
			vVar7 = { _get_scenario_point_coords(iVar6, true) };
			if (bVar0)
			{
				if (_0xf256a75210c5c0eb(iParam4, vVar7))
				{
				}
				else
				{
					fVar10 = get_distance_between_coords(vParam0, vVar7, true);
					if (fVar10 < fVar4)
					{
						iVar3 = iVar6;
						fVar4 = fVar10;
					}
				}
				iVar5++;
				destroy_itemset(iVar1);
				return iVar3;
			}
		}
	}
}

int func_177(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return (*Global_1900383)[iParam0]->f_44;
}

void func_178(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0]->f_44 = iParam1;
}

bool func_179()
{
	if (func_76(16384))
	{
		func_327(16384);
		return true;
	}
	return false;
}

bool func_180(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	if (is_ped_in_writhe(iParam0))
	{
		return false;
	}
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	if (is_entity_dead(iParam1) || is_ped_injured(iParam1))
	{
		return false;
	}
	task_go_to_whistle(iParam0, iParam1, 0);
	_0xff1e339ce40eaaaf(iParam0, -1);
	set_animal_tuning_bool_param(iParam0, 48, false);
	_0xf74e134f40192884(iParam0, 1);
	return true;
}

int func_181(int iParam0)
{
	iParam0 = func_87(iParam0);
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

void func_182(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	if (!func_388(iParam0))
	{
		return;
	}
	iVar0 = func_401(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_521(iVar0);
	func_450(iVar0);
	iVar1 = get_id_of_this_thread();
	iVar2 = func_181(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_72(iVar0))
		{
			return;
		}
	}
	func_183(iVar0);
	set_ped_keep_task(iParam0, true);
	if (bParam1 && func_2() == -1)
	{
		if (!_0x88ad6cc10d8d35b2(iParam0))
		{
			set_entity_as_mission_entity(iParam0, true, true);
		}
	}
}

void func_183(int iParam0)
{
	iParam0 = func_87(iParam0);
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

void func_184(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0]->f_37 = 0;
}

int func_185(int iParam0)
{
	iParam0 = func_87(iParam0);
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

void func_186(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0]->f_37 = iParam1;
}

float func_187(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_188(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = get_player_index();
	if (is_player_dead(iVar0))
	{
		return;
	}
	iVar1 = func_88(iParam0);
	if (!does_entity_exist(iVar1))
	{
		return;
	}
	bVar2 = is_entity_dead(iVar1);
	bVar3 = false;
	if (iVar1 == _get_saddle_horse_for_player(iVar0))
	{
		bVar3 = true;
	}
	vVar4 = { get_entity_coords(iVar1, true, false) };
	func_315(iParam0);
	func_315(5);
	if (func_131(5))
	{
		func_202(5, 0);
	}
	func_203(5);
	func_116(5, iParam0);
	func_200(5, 1);
	func_199(5, iParam1);
	if (_0x46fa0ae18f4c7fa9(iVar0) == iVar1)
	{
		_0x8fbf9edb378ccb8c(iVar0, 0);
	}
	if (_0xd3f7445cea2e5035(iVar0) == iVar1)
	{
		_0x227b06324234fb09(iVar0, 0);
	}
	if (bVar2)
	{
		if (bVar3)
		{
			_0x6569f31a01b4c097(iVar1, 0, 1);
			_0x6569f31a01b4c097(iVar1, 1, 1);
			_decor_set_string(iVar1, "loot_long_custom_anim_data_set", "DEAD_HORSE_SADDLE_SWAP_LONG_LOOT_ANIM_DATA");
		}
	}
	if (iParam1 == 2)
	{
		set_ped_as_no_longer_needed(&iVar1);
	}
	if (bVar3)
	{
		if (func_137(vVar4))
		{
			func_217(-1);
			func_214(3);
			func_215(0f, 0f, 0f);
			func_218(-15);
		}
		else
		{
			func_217(5);
			func_214(0);
			func_215(vVar4);
			func_218(func_221());
		}
	}
	func_348(iParam0);
	func_522(iParam0);
	func_203(iParam0);
	func_404();
}

bool func_189(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return (*Global_1900383)[iParam0]->f_35;
}

float func_190(int iParam0)
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

int func_191(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return (*Global_1900383)[iParam0]->f_36;
}

void func_192(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0]->f_35 = iParam1;
}

void func_193(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0]->f_36 = iParam1;
}

bool func_194(int iParam0)
{
	iVar0 = _0xc17f69e1418cd11f(1);
	if (iVar0 != 0)
	{
		return iVar0 == Global_1905944->f_22[iParam0]->f_1;
	}
	return false;
}

void func_195(int iParam0)
{
	if (!func_194(iParam0))
	{
		return;
	}
	func_523(1);
}

bool func_196(int iParam0)
{
	func_524(iParam0, &iVar0, &iVar1);
	iVar2 = Global_1905944[iVar0];
	return is_bit_set(iVar2, iVar1);
}

void func_197(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = Global_1905944[iVar1];
	clear_bit(&uVar3, iVar2);
	(*Global_1905944)[iVar1] = uVar3;
}

int func_198(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0]->f_11;
}

void func_199(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0]->f_11 = iParam1;
}

void func_200(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
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

int func_201()
{
	return Global_40.f_1095.f_3054;
}

void func_202(int iParam0, bool bParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_450(iParam0);
	if (func_72(iParam0))
	{
		iVar0 = get_id_of_this_thread();
		if (func_181(iParam0) != iVar0)
		{
			return;
		}
	}
	if (!func_71(iParam0))
	{
		return;
	}
	iVar1 = func_88(iParam0);
	bVar2 = false;
	if (!is_entity_dead(iVar1))
	{
		bVar2 = true;
	}
	func_315(iParam0);
	func_386(iParam0);
	func_473(iVar1);
	if (!_0x88ad6cc10d8d35b2(iVar1))
	{
		set_entity_as_mission_entity(iVar1, true, true);
	}
	if (func_320(iVar1))
	{
		_0x0348469daa17576c(iVar1);
	}
	if (bVar2)
	{
		task_smart_flee_ped(iVar1, Global_35, 500f, -1, 0, 1f, 0);
		set_ped_keep_task(iVar1, true);
	}
	iVar3 = player_id();
	if (is_player_dead(iVar3))
	{
	}
	if (iParam0 == 0)
	{
		_0x8fbf9edb378ccb8c(iVar3, 0);
	}
	else if (iParam0 == 1)
	{
		_0x227b06324234fb09(iVar3, 0);
	}
	_0xbcc76708e5677e1d(iVar1, 1);
	if (bVar2)
	{
		if (bParam1)
		{
			_0xaeb97d84cdf3c00b(iVar1, 1);
		}
		_0x329772c47dbb2fbc(iVar1);
	}
	set_ped_as_no_longer_needed(&iVar1);
	iVar4 = get_entity_model(iVar1);
	if (is_model_valid(iVar4))
	{
		if (_0xaa9f048dcf69b6dc(iVar4))
		{
			if (!func_208(iVar4))
			{
				set_ped_model_is_suppressed(iVar4, false);
			}
		}
	}
	func_203(iParam0);
}

void func_203(int iParam0)
{
	iParam0 = func_87(iParam0);
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
	func_525(&Var0);
	func_526(iParam0, Var0);
	func_527(&(Global_40.f_1095.f_1[iParam0]->f_15));
	func_528(&(Global_40.f_1095.f_1[iParam0]->f_298));
	func_529(&(Global_40.f_1095.f_1[iParam0]->f_356));
	func_530(&(Global_40.f_1095.f_1[iParam0]->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_531(iVar2, Global_40.f_1095.f_1[iParam0]->f_398[iVar2]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_532(iVar3, Global_40.f_1095.f_1[iParam0]->f_407[iVar3]);
		iVar3++;
	}
	func_533(&(Global_40.f_1095.f_1[iParam0]->f_420));
	func_534(&(Global_40.f_1095.f_1[iParam0]->f_422));
	func_535(&(Global_40.f_1095.f_1[iParam0]->f_425));
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

void func_204(int iParam0)
{
	if (!func_451(iParam0))
	{
		return;
	}
	func_536(iParam0);
	func_537(iParam0);
}

bool func_205(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_2() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_206(int iParam0)
{
	Global_40.f_1095.f_3135.f_4 = iParam0;
}

int func_207(int iParam0)
{
	iParam0 = func_87(iParam0);
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

bool func_208(int iParam0)
{
	if (!func_538(iParam0))
	{
		return false;
	}
	if (!func_539())
	{
		return true;
	}
	return false;
}

void func_209(int iParam0)
{
	if (func_84(iParam0) == 0)
	{
		if (func_540(iParam0))
		{
			func_541(iParam0);
		}
		return;
	}
	if (!func_540(iParam0))
	{
		iVar0 = func_207(iParam0);
		iVar1 = func_542(iVar0);
		func_543(iParam0, iVar1);
	}
	Var2.f_9 = -1591664384;
	Var2.f_14 = func_207(iParam0);
	Var2.f_15 = func_445(iParam0);
	Var2.f_16 = { func_311(iParam0) };
	Var2.f_24 = Var2.f_24;
	Var2.f_26 = floor(func_544(iParam0));
	Var2.f_25 = floor(func_367(iParam0));
	Var2.f_27 = func_437(iParam0, 0);
	Var2.f_28 = func_437(iParam0, 1);
	func_545(iParam0, &Var2);
}

bool func_210()
{
	iVar0 = func_211();
	if (does_entity_exist(iVar0))
	{
		return true;
	}
	return false;
}

int func_211()
{
	return Global_1900383->f_393;
}

bool func_212(bool bParam0)
{
	if (bParam0)
	{
		return Global_1914319->f_17370;
	}
	return (Global_1914319->f_17370 || Global_1914319->f_18996.f_1);
}

int func_213()
{
	return Global_40.f_1095.f_3054.f_1;
}

void func_214(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

void func_215(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

Vector3 func_216()
{
	return Global_40.f_1095.f_3054.f_77;
}

void func_217(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_218(int iParam0)
{
	Global_40.f_1095.f_3054.f_2 = iParam0;
}

int func_219(vector3 vParam0, float fParam3, bool bParam4)
{
	if (func_210())
	{
		func_546();
		func_444();
	}
	iVar0 = func_75();
	if (!has_model_loaded(iVar0))
	{
		request_model(iVar0, false);
		return 0;
	}
	iVar1 = create_object(iVar0, vParam0, true, true, false, false, true);
	if (!does_entity_exist(iVar1))
	{
		return 0;
	}
	func_466(iVar1);
	bVar2 = false;
	if (is_entity_a_mission_entity(iVar1))
	{
		bVar2 = true;
	}
	bVar3 = false;
	if (_0x88ad6cc10d8d35b2(iVar1))
	{
		bVar3 = true;
	}
	if (!bVar2 || !bVar3)
	{
		set_entity_as_mission_entity(iVar1, true, true);
	}
	set_entity_heading(iVar1, fParam3);
	if (bParam4)
	{
		_0x9587913b9e772d29(iVar1, 0);
	}
	task_carriable(iVar1, 822715387, 0, 0, 0);
	return 1;
}

int func_220()
{
	return Global_40.f_1095.f_3054.f_2;
}

int func_221()
{
	return &Global_1899515;
}

void func_222()
{
	Global_1900383->f_437 = 0;
	Global_1900383->f_437.f_1 = 0;
	Global_1900383->f_437.f_2 = 0;
}

bool func_223(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_320(Global_1900383[iParam0]))
	{
		return true;
	}
	return false;
}

bool func_224(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return Global_40.f_1095.f_1[iParam0]->f_435;
}

bool func_225()
{
	return Global_1900383->f_437.f_1;
}

var func_226()
{
	return Global_1900383->f_437;
}

void func_227(int iParam0)
{
	Global_1900383->f_437 = iParam0;
}

void func_228(int iParam0)
{
	Global_1900383->f_437.f_1 = iParam0;
}

bool func_229(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (iParam1 != -1)
	{
		if (_does_volume_exist((*Global_1888801)[iParam1]->f_4))
		{
			return is_entity_in_volume(iParam0, (*Global_1888801)[iParam1]->f_4, true, 0);
		}
		else
		{
			return false;
		}
	}
	iVar1 = 0;
	while (iVar1 < Global_1894899->f_161)
	{
		iVar0 = &Global_1894899->f_10[iVar1];
		if (!_does_volume_exist((*Global_1888801)[iVar0]->f_4))
		{
		}
		else if (is_entity_in_volume(iParam0, (*Global_1888801)[iVar0]->f_4, true, 0))
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

var func_230()
{
	return Global_1900383->f_437.f_2;
}

void func_231(int iParam0)
{
	Global_1900383->f_437.f_2 = iParam0;
}

bool func_232()
{
	return Global_1894899 & 2 != 0;
}

bool func_233()
{
	if (!does_entity_exist(Global_35))
	{
		return false;
	}
	if (is_entity_dead(Global_35) || is_ped_injured(Global_35))
	{
	}
	if (get_ped_config_flag(Global_35, 440, true))
	{
		return false;
	}
	return true;
}

void func_234(bool bParam0)
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

bool func_235()
{
	if (!does_entity_exist(Global_35))
	{
		return false;
	}
	if (is_entity_dead(Global_35) || is_ped_injured(Global_35))
	{
	}
	if (get_ped_config_flag(Global_35, 439, true))
	{
		return false;
	}
	return true;
}

void func_236(bool bParam0)
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

bool func_237()
{
	if (!does_entity_exist(Global_35))
	{
		return false;
	}
	if (is_entity_dead(Global_35) || is_ped_injured(Global_35))
	{
	}
	if (get_ped_config_flag(Global_35, 438, true))
	{
		return false;
	}
	return true;
}

void func_238(bool bParam0)
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

int func_239(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (*Global_1900383)[iParam0]->f_43;
}

bool func_240(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if ((*Global_1900383)[iParam0]->f_42 == 0)
	{
		return false;
	}
	return true;
}

void func_241(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0]->f_42 = iParam1;
}

int func_242(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (*Global_1900383)[iParam0]->f_42;
}

void func_243(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_2() != -1)
	{
		return;
	}
	if ((Global_36616 && func_547(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_548(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_549(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_550(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_549(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

void func_244(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0]->f_43++;
}

Vector3 func_245(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f, 0f, 0f;
	}
	return (*Global_1900383)[iParam0]->f_28;
}

Vector3 func_246(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f, 0f, 0f;
	}
	return (*Global_1900383)[iParam0]->f_31;
}

float func_247(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return (*Global_1900383)[iParam0]->f_34;
}

void func_248(int iParam0, vector3 vParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0]->f_31 = { vParam1 };
}

void func_249(int iParam0, float fParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0]->f_34 = fParam1;
}

void func_250(struct<7> Param0)
{
	if (!Param0.f_5)
	{
		return;
	}
	if (func_205(34))
	{
		return;
	}
	iVar0 = get_entity_model(Param0.f_6);
	if (func_392(iVar0) || func_393(iVar0))
	{
		return;
	}
	if (!is_ped_sprinting(Param0.f_6))
	{
		return;
	}
	if (is_ped_swimming(Global_35))
	{
		return;
	}
	if (is_ped_swimming(Param0.f_6))
	{
		return;
	}
	if (func_280())
	{
		func_283(34, 0);
	}
}

void func_251(struct<7> Param0)
{
	if (!Param0.f_5)
	{
		return;
	}
	if (func_551() >= 3)
	{
		return;
	}
	if (func_196(36) || func_194(36))
	{
		return;
	}
	iVar0 = get_game_timer();
	iVar1 = func_552();
	if (iVar1 > 0)
	{
		if (iVar1 + 5000 < iVar0)
		{
			func_553();
		}
		else
		{
			return;
		}
	}
	if (!does_entity_exist(Param0.f_6))
	{
		return;
	}
	if (is_entity_dead(Param0.f_6))
	{
		return;
	}
	if (is_ped_injured(Param0.f_6))
	{
		return;
	}
	bVar2 = false;
	if (is_ped_sprinting(Param0.f_6))
	{
		bVar2 = true;
	}
	if (is_ped_running(Param0.f_6))
	{
		bVar2 = true;
	}
	if (!bVar2)
	{
		return;
	}
	if (is_ped_swimming(Global_35))
	{
		return;
	}
	if (is_ped_swimming(Param0.f_6))
	{
		return;
	}
	fVar3 = _0x22f2a386d43048a9(Param0.f_6);
	if (fVar3 > 0.15f)
	{
		return;
	}
	if (func_196(34))
	{
		func_197(34);
	}
	if (func_194(34))
	{
		func_195(34);
	}
	if (func_196(35))
	{
		func_197(35);
	}
	if (func_194(35))
	{
		func_195(35);
	}
	if (func_280())
	{
		func_283(36, 1);
		func_554();
		func_555(get_game_timer());
	}
}

void func_252(struct<7> Param0, struct<11> Param7, var uParam18)
{
	if (!Param7.f_2)
	{
		return;
	}
	if (!Param0.f_5)
	{
		return;
	}
	if (func_205(45))
	{
		return;
	}
	if (func_94() && !func_95(4))
	{
		return;
	}
	bVar0 = false;
	if ((func_140(33) && func_140(34)) && func_140(35))
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		return;
	}
	if (!func_388(Param0.f_6))
	{
		return;
	}
	if (!Param7.f_10)
	{
		return;
	}
	if (func_115(7) == 0)
	{
		return;
	}
	if (func_280())
	{
		func_283(45, 0);
	}
}

void func_253()
{
	if (!func_556())
	{
		return;
	}
	iVar0 = get_game_timer();
	if (func_557() < iVar0)
	{
		func_283(59, 0);
		func_558(0);
		func_559();
	}
}

void func_254(struct<4> Param0, var uParam4, var uParam5, var uParam6, vector3 vParam7, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, vector3 vParam19, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	iVar12 = -1;
	if (vParam7.z)
	{
		iVar12 = 0;
		_copy_memory(&Var0, &vParam7, 12);
	}
	else if (vParam19.z)
	{
		iVar12 = 1;
		_copy_memory(&Var0, &vParam19, 12);
	}
	if (!func_71(iVar12))
	{
		return;
	}
	if (!Var0.f_1)
	{
		return;
	}
	if (!Var0.f_2)
	{
		return;
	}
	if (!Var0.f_4)
	{
		if (func_194(56))
		{
			func_195(56);
		}
		if (func_196(56))
		{
			func_197(56);
		}
		if (func_194(57))
		{
			func_195(57);
		}
		if (func_196(57))
		{
			func_197(57);
		}
		return;
	}
	if (_0x3f8387db1b9f31b7(Var0, 0) && !func_505())
	{
		if (!func_205(57) && !func_205(58))
		{
			if (func_194(56))
			{
				func_195(56);
			}
			if (func_196(56))
			{
				func_197(56);
			}
			if (func_280())
			{
				if (func_560(-1795542128))
				{
					func_283(57, 0);
				}
				else
				{
					func_283(58, 0);
				}
			}
		}
	}
}

void func_255(struct<4> Param0, var uParam4, var uParam5, var uParam6)
{
	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	iVar0 = func_561();
	bVar1 = false;
	iVar2 = 0;
	if (does_entity_exist(iVar0))
	{
		bVar1 = true;
		iVar2 = _0x454ad4da6c41b5bd(iVar0);
	}
	iVar3 = func_562();
	switch (iVar3)
	{
		case 0:
			func_563(1);
		case 1:
			if (bVar1)
			{
				func_564(iVar0);
				func_563(2);
			}
			break;
		case 2:
			switch (iVar2)
			{
				case 1:
					func_563(3);
					break;
				case 2:
				case 3:
					func_563(5);
					break;
				case 7:
				case 8:
				case 9:
					func_563(7);
					break;
				case 4:
				case 5:
					func_563(9);
					break;
				case 6:
					func_563(11);
					break;
				default:
					if (!bVar1)
					{
						func_563(11);
					}
					break;
			}
			break;
		case 3:
			func_565();
			if (func_566(iVar0))
			{
				if (func_280())
				{
					func_283(48, 1);
				}
			}
			else if (func_280())
			{
				func_283(47, 1);
			}
			func_563(4);
			break;
		case 4:
			switch (iVar2)
			{
				case 1:
					if (func_194(47))
					{
						if (func_566(iVar0))
						{
							func_195(47);
							func_563(3);
						}
					}
					if (!bVar1)
					{
						func_563(11);
					}
					break;
				case 2:
				case 3:
					func_563(5);
					break;
				case 7:
				case 8:
				case 9:
					func_563(7);
					break;
				case 4:
				case 5:
					func_563(9);
					break;
				case 6:
					func_563(11);
					break;
				default:
					if (!bVar1)
					{
						func_563(11);
					}
					break;
			}
			break;
		case 5:
			func_565();
			if (func_280())
			{
				func_283(49, 1);
			}
			func_563(6);
			break;
		case 6:
			switch (iVar2)
			{
				case 2:
				case 3:
					break;
				case 7:
				case 8:
				case 9:
					func_563(7);
					break;
				case 4:
				case 5:
					func_563(9);
					break;
				case 6:
					func_563(11);
					break;
				default:
					if (!bVar1)
					{
						func_563(11);
					}
					break;
			}
			break;
		case 7:
			func_565();
			if (func_280())
			{
				func_283(50, 1);
			}
			func_567(get_game_timer());
			func_563(8);
			break;
		case 8:
			if (func_568() + 5000 < get_game_timer())
			{
				func_563(6);
			}
			break;
		case 9:
			func_565();
			if (func_280())
			{
				func_283(51, 1);
			}
			func_563(10);
			break;
		case 10:
			switch (iVar2)
			{
				case 2:
				case 3:
					func_563(5);
					break;
				case 7:
				case 8:
				case 9:
					func_563(7);
					break;
				case 4:
				case 5:
					break;
				case 6:
					func_563(11);
					break;
				default:
					if (!bVar1)
					{
						func_563(11);
					}
					break;
			}
			break;
		case 11:
			func_569();
			func_565();
			func_563(0);
			break;
	}
}

void func_256(struct<6> Param0, var uParam6, struct<11> Param7, var uParam18, struct<11> Param19, var uParam30)
{
	if (!func_570())
	{
		return;
	}
	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (Param0.f_4)
	{
		return;
	}
	if (!Param0.f_5)
	{
		return;
	}
	if (Param7.f_10)
	{
		iVar12 = 0;
		_copy_memory(&Var0, &Param7, 12);
	}
	else if (Param19.f_10)
	{
		iVar12 = 1;
		_copy_memory(&Var0, &Param19, 12);
	}
	else
	{
		return;
	}
	if (!Var0.f_1)
	{
		return;
	}
	if (!Var0.f_2)
	{
		return;
	}
	if (Var0.f_3)
	{
		return;
	}
	if (Var0.f_4)
	{
		return;
	}
	iVar13 = func_437(iVar12, 0);
	bVar14 = false;
	iVar15 = -1;
	if (!bVar14)
	{
		if (iVar13 > 50)
		{
			if (func_571() < 3)
			{
				iVar15 = 26;
				bVar14 = true;
			}
		}
	}
	bVar16 = false;
	if (func_572() + 2500 < get_game_timer())
	{
		bVar16 = true;
	}
	if (bVar16)
	{
		if (!bVar14)
		{
			func_573(0);
			func_574();
			return;
		}
	}
	if (!bVar16)
	{
		return;
	}
	if (!func_280())
	{
		return;
	}
	func_283(iVar15, 1);
	func_575(get_game_timer());
	switch (iVar15)
	{
		case 26:
			func_576();
			break;
		default:
			break;
	}
	func_573(0);
	func_574();
}

void func_257(struct<6> Param0, var uParam6, struct<11> Param7, var uParam18, struct<11> Param19, var uParam30)
{
	if (!func_577())
	{
		return;
	}
	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (Param0.f_4)
	{
		return;
	}
	if (!Param0.f_5)
	{
		return;
	}
	if (Param7.f_10)
	{
		iVar12 = 0;
		_copy_memory(&Var0, &Param7, 12);
	}
	else if (Param19.f_10)
	{
		iVar12 = 1;
		_copy_memory(&Var0, &Param19, 12);
	}
	else
	{
		return;
	}
	if (!Var0.f_1)
	{
		return;
	}
	if (!Var0.f_2)
	{
		return;
	}
	if (Var0.f_3)
	{
		return;
	}
	if (Var0.f_4)
	{
		return;
	}
	iVar13 = func_578(iVar12, 0);
	iVar14 = func_578(iVar12, 1);
	bVar15 = false;
	iVar16 = -1;
	if (!bVar15)
	{
		if (func_490(32) < 3)
		{
			if (iVar13 == 0 && iVar14 == 0)
			{
				iVar16 = 32;
				bVar15 = true;
			}
		}
	}
	if (!bVar15)
	{
		if (iVar13 == 0)
		{
			if (func_490(30) < 3)
			{
				iVar16 = 30;
				bVar15 = true;
			}
		}
	}
	if (!bVar15)
	{
		if (iVar14 == 0)
		{
			if (func_490(31) < 3)
			{
				if (!is_ped_swimming(Var0))
				{
					iVar16 = 31;
					bVar15 = true;
				}
			}
		}
	}
	if (!bVar15)
	{
		if (iVar13 < 50)
		{
			if (func_490(28) < 1)
			{
				iVar16 = 28;
				bVar15 = true;
			}
		}
	}
	if (!bVar15)
	{
		if (iVar14 < 50)
		{
			if (func_490(29) < 1)
			{
				iVar16 = 29;
				bVar15 = true;
			}
		}
	}
	if (!bVar15)
	{
		if (iVar14 == 0)
		{
			if (func_490(33) < 3)
			{
				if (is_ped_swimming(Var0))
				{
					iVar16 = 33;
					bVar15 = true;
				}
			}
		}
	}
	bVar17 = false;
	if (func_579() + 2500 < get_game_timer())
	{
		bVar17 = true;
	}
	if (bVar17)
	{
		if (!bVar15)
		{
			func_580(0);
			func_581();
			return;
		}
	}
	if (!bVar17)
	{
		return;
	}
	if (!func_280())
	{
		return;
	}
	func_283(iVar16, 1);
	func_575(get_game_timer());
	func_580(0);
	func_581();
}

void func_258()
{
	if (func_582() == 0)
	{
		return;
	}
	iVar7 = 0;
	iVar0[iVar7] = 32;
	iVar7++;
	iVar0[iVar7] = 30;
	iVar7++;
	iVar0[iVar7] = 31;
	iVar7++;
	iVar0[iVar7] = 28;
	iVar7++;
	iVar0[iVar7] = 29;
	iVar7++;
	iVar0[iVar7] = 43;
	iVar7++;
	bVar8 = false;
	iVar9 = 0;
	while (iVar9 < iVar7)
	{
		if (bVar8)
		{
		}
		else if (func_194(&(iVar0[iVar9])))
		{
			bVar8 = true;
		}
		iVar9++;
	}
	if (bVar8)
	{
		if (!func_583())
		{
			bVar10 = false;
			bVar11 = false;
			bVar12 = false;
			bVar13 = false;
			if (func_194(32))
			{
				bVar12 = true;
				bVar13 = true;
			}
			if (func_194(30))
			{
				bVar12 = true;
			}
			if (func_194(31))
			{
				bVar13 = true;
			}
			if (func_194(28))
			{
				bVar12 = true;
			}
			if (func_194(29))
			{
				bVar13 = true;
			}
			if (func_194(43))
			{
				bVar12 = true;
				bVar13 = true;
			}
			if (bVar10)
			{
				_uitutorial_set_rpg_icon_visibility(6, 3);
			}
			if (bVar11)
			{
				_uitutorial_set_rpg_icon_visibility(8, 3);
			}
			if (bVar12)
			{
				_uitutorial_set_rpg_icon_visibility(7, 3);
			}
			if (bVar13)
			{
				_uitutorial_set_rpg_icon_visibility(9, 3);
			}
			func_584(1);
		}
	}
	else if (func_583())
	{
		_uitutorial_set_rpg_icon_visibility(6, 0);
		_uitutorial_set_rpg_icon_visibility(8, 0);
		_uitutorial_set_rpg_icon_visibility(7, 0);
		_uitutorial_set_rpg_icon_visibility(9, 0);
		func_584(0);
		func_585();
	}
}

void func_259(struct<5> Param0, var uParam5, var uParam6)
{
	if (!func_586())
	{
		return;
	}
	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (Param0.f_4)
	{
		return;
	}
	if (func_205(55))
	{
		return;
	}
	if (!func_280())
	{
		return;
	}
	if (func_94() && !func_95(4))
	{
		return;
	}
	func_206(0);
	if (func_84(0) == 1)
	{
		return;
	}
	func_283(55, 0);
	iVar0 = func_587(9, 1, 1, 0);
	if (iVar0 != 76)
	{
		iVar0 = func_587(9, 1, 1, 1);
	}
	if (!func_588(iVar0))
	{
		return;
	}
	vVar1 = { func_589(iVar0) };
	if (func_137(vVar1))
	{
		return;
	}
	iVar4 = _blip_add_for_coord(168093330, vVar1);
	set_blip_sprite(iVar4, 1938782895, true);
	_blip_set_modifier(iVar4, 580546400);
	_blip_set_modifier(iVar4, 847579139);
	func_590(&iVar4);
}

void func_260()
{
	iVar0 = func_591();
	if (!does_blip_exist(iVar0))
	{
		return;
	}
	if (func_196(55))
	{
		return;
	}
	if (func_194(55))
	{
		return;
	}
	remove_blip(&iVar0);
}

void func_261(struct<4> Param0, var uParam4, var uParam5, var uParam6)
{
	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (func_94() && !func_140(42))
	{
		return;
	}
	if (!func_592())
	{
		return;
	}
	if (func_205(65))
	{
		return;
	}
	if (func_593(Global_35))
	{
		return;
	}
	if (func_594())
	{
		return;
	}
	if (!func_280())
	{
		return;
	}
	func_283(65, 0);
}

void func_262(struct<4> Param0, var uParam4, var uParam5, var uParam6)
{
	if (!Param0.f_1)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (!Param0.f_2)
	{
		return;
	}
	if (func_94() && !func_140(42))
	{
		return;
	}
	if (func_94() && func_134() == 8)
	{
		return;
	}
	if (!func_210())
	{
		return;
	}
	if (func_595(7))
	{
		func_596();
		return;
	}
	if (func_213() == 3)
	{
		return;
	}
	if (func_593(Global_35))
	{
		return;
	}
	iVar0 = get_game_timer();
	iVar1 = func_597();
	if (iVar1 == 0)
	{
		func_598(get_game_timer());
		return;
	}
	if (iVar1 + 10000 > iVar0)
	{
		return;
	}
	if (func_187(Global_35, func_211(), 1, 1) < 100f)
	{
		return;
	}
	if (func_205(64))
	{
		if ((iVar1 + 600000) > iVar0)
		{
			return;
		}
	}
	func_283(64, 1);
	func_598(get_game_timer());
}

void func_263(struct<7> Param0, int iParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18)
{
	if (!Param0.f_5)
	{
		return;
	}
	iVar0 = func_490(66);
	if (iVar0 >= 3)
	{
		return;
	}
	iVar1 = get_entity_model(Param0.f_6);
	if (func_392(iVar1) || func_393(iVar1))
	{
		return;
	}
	if (!is_ped_sprinting(Param0.f_6))
	{
		return;
	}
	if (is_ped_swimming(Global_35))
	{
		return;
	}
	if (is_ped_swimming(Param0.f_6))
	{
		return;
	}
	if (!_is_ped_carrying(iParam7))
	{
		return;
	}
	if (!_0x608bc6a6aacd5036(&uVar2, iParam7, 4, 0))
	{
		return;
	}
	if (func_599() == iParam7)
	{
		return;
	}
	if (func_280())
	{
		func_600(iParam7);
		func_283(66, 0);
	}
}

void func_264(struct<4> Param0, var uParam4, var uParam5, var uParam6, struct<11> Param7, var uParam18, struct<11> Param19, var uParam30)
{
	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (!Param7.f_10 && !Param19.f_10)
	{
		if (func_601())
		{
			func_602(0);
		}
		return;
	}
	if (func_603() < 2)
	{
		return;
	}
	if (Param7.f_10)
	{
		iVar0 = 0;
	}
	else if (Param19.f_10)
	{
		iVar0 = 1;
	}
	if (func_115(iVar0) >= 2)
	{
		return;
	}
	iVar1 = func_490(46);
	if (iVar1 >= 1)
	{
		return;
	}
	if (func_601())
	{
		return;
	}
	func_602(1);
	func_604();
	if (func_605() <= 1)
	{
		return;
	}
	if (!func_280())
	{
		return;
	}
	func_283(46, 1);
}

void func_265(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	if (!Param0.f_1)
	{
		return;
	}
	if (!func_593(Global_35))
	{
		return;
	}
	if (!_0x3ee1f7a8c32f24e1(player_id(), &iVar0, 1, 0))
	{
		return;
	}
	if (!func_606(iVar0))
	{
		return;
	}
	iVar1 = get_ped_index_from_entity_index(iVar0);
	if (func_607(iVar1))
	{
		return;
	}
	if (func_280())
	{
		func_283(67, 1);
	}
}

void func_266()
{
	if (func_608(0, 0, 1))
	{
		return;
	}
	iVar0 = func_609();
	if (iVar0 == 2)
	{
		if (!func_610())
		{
			if (!func_205(621))
			{
				func_283(621, 0);
			}
		}
	}
	if (iVar0 == 3)
	{
		if (!func_610())
		{
			if (!func_205(622))
			{
				func_283(622, 0);
			}
		}
	}
	if (iVar0 == 5)
	{
		if (!func_610())
		{
			if (!func_205(623))
			{
				func_283(623, 0);
			}
		}
	}
	if (iVar0 == 7)
	{
		if (!func_610())
		{
			if (!func_205(624))
			{
				func_283(624, 0);
			}
		}
	}
}

bool func_267()
{
	return Global_1894899 & 4 != 0;
}

int func_268(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

bool func_269(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_270(int iParam0)
{
	if (!func_269(iParam0))
	{
		return 0;
	}
	return func_612(func_611(iParam0));
}

int func_271()
{
	iVar0 = _get_saddle_horse_for_player(player_id());
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return 0;
	}
	iVar1 = 0;
	if (is_ped_on_mount(Global_35))
	{
		if (get_mount(Global_35) == iVar0)
		{
			iVar1 = 1;
		}
	}
	iVar2 = 0;
	iVar3 = _0xaffd0ccf31f469b8(iVar0);
	if (func_284(iVar3, 0))
	{
		iVar2 = 1;
	}
	bVar4 = false;
	if (func_232() || func_412())
	{
		bVar4 = true;
	}
	bVar5 = false;
	if (Global_1935630->f_24 || func_613(1, 0, 1))
	{
		bVar5 = true;
	}
	if (iVar1 || iVar2)
	{
		if (bVar4 && !bVar5)
		{
			return 1;
		}
	}
	return 0;
}

void func_272(var uParam0)
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

int func_273(int iParam0)
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

void func_274(var uParam0, var uParam1)
{
	_copy_memory(uParam1, uParam0, 94);
}

void func_275(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!is_entity_dead(iParam1))
	{
		return;
	}
	if (!func_71(iParam0))
	{
		return;
	}
	iVar0 = func_88(iParam0);
	if (is_entity_dead(iVar0))
	{
		return;
	}
	if (is_ped_injured(iVar0))
	{
		return;
	}
	if (is_entity_a_mission_entity(iParam1))
	{
		if (!_0x88ad6cc10d8d35b2(iParam1))
		{
			return;
		}
	}
	if (func_614())
	{
		if (_0x5a79220f6d38d7c3(iParam1) != 1E+08f)
		{
			_0xdc0a1f0ecec9f0c0(iParam1, 1E+08f);
		}
		return;
	}
	bVar1 = false;
	if (func_167(0) == 1 || func_167(0) == 8)
	{
		bVar1 = true;
	}
	if (bVar1 && func_615(iVar0, 0, 1) < 5f)
	{
		if (_0x5a79220f6d38d7c3(iParam1) != 1E+08f)
		{
			_0xdc0a1f0ecec9f0c0(iParam1, 1E+08f);
		}
		return;
	}
	if (func_616())
	{
		if (_0x5a79220f6d38d7c3(iParam1) != 1.2f)
		{
			_0xdc0a1f0ecec9f0c0(iParam1, 1.2f);
		}
		return;
	}
	if (_0x5a79220f6d38d7c3(iParam1) != 1f)
	{
		_0xdc0a1f0ecec9f0c0(iParam1, 1f);
	}
}

void func_276(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4)
{
	*iParam3 = _get_ped_damage(iParam0);
	*uParam2 = _0xf8b48a361dc388ae(iParam0);
	if (*uParam2 == 2)
	{
		*iParam1 = 4;
	}
	else if (*uParam2 == 1)
	{
		*iParam1 = 3;
	}
	else
	{
		*uParam4 = _get_ped_quality(iParam0);
		switch (*uParam4)
		{
			case 0:
				*iParam1 = 0;
				break;
			case 1:
				*iParam1 = 1;
				break;
			case -1:
			case 2:
				*iParam1 = 2;
				break;
		}
	}
}

bool func_277(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = iParam3;
	iVar1 = iParam2;
	if (iVar0 < iVar1)
	{
		iParam2 = iVar0;
	}
	uVar2 = _0x9e7738b291706746(iParam0, iParam1, iParam2);
	return uVar2;
}

void func_278(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_431(iParam0, 606799272))
		{
			func_617(iParam0, iParam1);
		}
		if (func_431(iParam0, -1112814642) && func_431(iParam0, -1697809989))
		{
			func_618(iParam0, iParam1, 1, 0);
		}
	}
}

bool func_279(int iParam0, int iParam1, bool bParam2)
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

bool func_280()
{
	if (!func_610() && func_619(1))
	{
		return true;
	}
	return false;
}

int func_281(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (!_0x9a100f1cf4546629(iParam0) && !_0xc346a546612c49a9(iParam0))
	{
		return 0;
	}
	func_276(iParam0, &iVar1, &uVar2, &iVar0, &uVar3);
	func_277(&iVar4, iParam0, iVar0, iVar1);
	if (iVar4 != 0)
	{
		return iVar4;
	}
	switch (iVar0)
	{
		case 2:
			return -776155824;
		case 1:
			return 1715058708;
		case 0:
			return -45650221;
		default:
			break;
	}
	return -45650221;
}

int func_282(int iParam0, int iParam1)
{
	if (iParam1 == 101)
	{
		return func_620(iParam0);
	}
	if (func_621(iParam0, iParam1))
	{
		return 0;
	}
	return func_622(iParam0, iParam1);
}

void func_283(int iParam0, bool bParam1)
{
	func_524(iParam0, &iVar0, &iVar1);
	if (!func_623(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_624(iVar0, iVar1);
}

bool func_284(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_285(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	iVar0 = _inventory_get_ped_inventory_id(iParam0);
	if (func_388(iParam0))
	{
		iVar1 = func_401(iParam0);
		if (func_284(iParam1, 0))
		{
			if (func_511(iParam1))
			{
				func_625(iVar1, iParam1, iParam2);
			}
		}
	}
	return func_626(iVar0, iParam1, iParam2, bParam3, iParam4);
}

int func_286(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(iParam1))
	{
		return 0;
	}
	iVar0 = _inventory_get_ped_inventory_id(iParam0);
	if (_0x9a100f1cf4546629(iParam1) || _0xc346a546612c49a9(iParam1))
	{
		iVar1 = func_515(iParam1);
		if (!func_284(iVar1, 0))
		{
			iVar1 = func_510(iParam1);
		}
	}
	else
	{
		iVar1 = func_510(iParam1);
	}
	iVar2 = func_627(iVar0, iVar1, 1);
	return iVar2;
}

bool func_287(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return Global_40.f_1095.f_1[iParam0]->f_422;
}

bool func_288(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
	}
	if (decor_exist_on(iParam0, "StableOwnedHorse"))
	{
		return true;
	}
	return false;
}

int func_289(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return Global_40.f_1095.f_1[iParam0]->f_422.f_1;
}

void func_290(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
	}
	decor_set_int(iParam0, "StableOwnedHorse", iParam1);
}

int func_291(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return -15;
	}
	if (iParam0 >= 7)
	{
		return -15;
	}
	return Global_40.f_1095.f_1[iParam0]->f_422.f_2;
}

void func_292(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_628(func_221(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_293(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
	}
	sVar0 = "StableOwnedHorse";
	if (decor_exist_on(iParam0, sVar0))
	{
		decor_remove(iParam0, sVar0);
	}
}

void func_294(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_534(&(Global_40.f_1095.f_1[iParam0]->f_422));
}

int func_295(int iParam0)
{
	if (!func_288(iParam0))
	{
		return -1;
	}
	iVar0 = decor_get_int(iParam0, "StableOwnedHorse");
	return iVar0;
}

void func_296(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0]->f_422 = iParam1;
}

void func_297(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0]->f_422.f_1 = iParam1;
}

void func_298(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0]->f_422.f_2 = iParam1;
}

int func_299(int iParam0)
{
	bVar0 = false;
	if (!func_71(iParam0))
	{
		bVar0 = true;
	}
	iVar1 = func_88(iParam0);
	if (!bVar0)
	{
		if (!func_518(iVar1, 0))
		{
			bVar0 = true;
		}
	}
	if (!bVar0)
	{
		iVar2 = func_629(iVar1, 0);
		if (!is_entity_a_ped(iVar2) && !_0x255b6db4e3ad3c3e(iVar2))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		return 0;
	}
	return 1;
}

bool func_300(int iParam0)
{
	return Global_40.f_1095.f_1[iParam0]->f_425;
}

bool func_301(int iParam0)
{
	return Global_40.f_1095.f_1[iParam0]->f_425.f_1 != -15;
}

var func_302(int iParam0)
{
	return Global_40.f_1095.f_1[iParam0]->f_425.f_1;
}

int func_303(int iParam0, int iParam1)
{
	if (func_630(iParam0, iParam1, 1))
	{
		iVar0 = (func_631(iParam0) - func_631(iParam1));
	}
	else
	{
		iVar0 = (func_631(iParam1) - func_631(iParam0));
	}
	while (iVar0 < 0)
	{
		iVar0 += 24;
	}
	while (iVar0 > 23)
	{
		iVar0 = (iVar0 - 24);
	}
	return iVar0;
}

void func_304(int iParam0, int iParam1)
{
	Global_40.f_1095.f_1[iParam0]->f_425 = iParam1;
}

void func_305(int iParam0, int iParam1)
{
	Global_40.f_1095.f_1[iParam0]->f_425.f_1 = iParam1;
}

void func_306(int iParam0)
{
	func_632(Global_1900383->f_317.f_38[iParam0]);
}

void func_307(int iParam0)
{
	func_633(Global_1900383->f_317.f_38[iParam0]);
}

bool func_308(int iParam0)
{
	return func_634(Global_1900383->f_317.f_38[iParam0]);
}

bool func_309(int iParam0, float fParam1)
{
	return func_635(Global_1900383->f_317.f_38[iParam0], fParam1);
}

bool func_310(int iParam0)
{
	switch (iParam0)
	{
		case -2063289686:
		case 549900435:
			return true;
	}
	return false;
}

struct<8> func_311(int iParam0)
{
	StringCopy(&cVar0, "", 64);
	iParam0 = func_87(iParam0);
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

char* func_312(int iParam0)
{
	switch (iParam0)
	{
		case 549900435:
			return "HORSE_NAME_BUELL_WARVETS";
		case -2063289686:
			return "HORSE_NAME_JOHN_ENDLESSSUMMER";
	}
	return "";
}

void func_313(int iParam0, struct<8> Param1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	*Global_40.f_1095.f_1[iParam0] = { Param1 };
}

void func_314(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = Global_1900383[iParam0];
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
	}
	sVar1 = func_636(func_311(iParam0));
	if (!is_string_null_or_empty(sVar1))
	{
		_set_ped_prompt_name(iVar0, sVar1);
	}
}

void func_315(int iParam0)
{
	iParam0 = func_87(iParam0);
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

void func_316(var uParam0)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_638(func_637(255), 109029619));
	}
	else if (func_639())
	{
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_640();
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

void func_317(var uParam0, bool bParam1)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_638(func_637(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_639())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_640())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (compare_strings(sVar0, "", false, -1) != 0)
		{
			set_blip_name_from_text_file(*uParam0, sVar0);
		}
	}
}

void func_318(int iParam0)
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

void func_319(int iParam0)
{
	_set_blip_flash_style(iParam0, 673950256);
	_set_blip_flash_style(iParam0, 561559387);
	_set_blip_flash_style(iParam0, -201249929);
}

bool func_320(int iParam0)
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

int func_321(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return 0;
	}
	if (_get_carrier_as_ped(iParam1) != iParam0)
	{
		return 0;
	}
	iVar0 = _0x61914209c36efddb(iParam1);
	if (iVar0 == 5)
	{
		return 1;
	}
	if (iVar0 == 7)
	{
		return 1;
	}
	return 0;
}

void func_322(int iParam0, int iParam1)
{
	if (is_ped_injured(Global_35))
	{
		return;
	}
	if (!func_71(iParam0))
	{
		return;
	}
	iVar0 = func_88(iParam0);
	if (is_entity_dead(iVar0))
	{
		return;
	}
	if (is_ped_injured(iVar0))
	{
		return;
	}
	if (is_ped_in_writhe(iVar0))
	{
		return;
	}
	if (!func_140(40))
	{
		if (func_173(iParam0, 128))
		{
			return;
		}
		if (func_641(iParam1, &uVar1))
		{
			iVar2 = func_642(iParam1);
			if (func_643(iVar0, iParam1) != iVar2)
			{
				func_644(iVar0, iParam1, iVar2);
			}
		}
		return;
	}
	if (func_390(iVar0))
	{
		return;
	}
	iVar3 = get_game_timer();
	fVar4 = func_645(iParam0, iParam1);
	if (fVar4 >= 30f)
	{
		func_646(iParam0, iParam1, iVar3);
		return;
	}
	iVar5 = func_578(iParam0, iParam1);
	func_647(iVar0, iParam0, iParam1);
	if (func_648(iParam0, iParam1) > 0f)
	{
		func_649(iParam0, iParam1);
	}
	else
	{
		func_650(iVar0, iParam0, iParam1);
		iVar6 = func_578(iParam0, iParam1);
		func_651(iParam0, iParam1, iVar5, iVar6);
	}
	func_646(iParam0, iParam1, iVar3);
}

void func_323(int iParam0, int iParam1)
{
	if (is_ped_injured(Global_35))
	{
		return;
	}
	if (!func_71(iParam0))
	{
		return;
	}
	iVar0 = func_88(iParam0);
	if (is_entity_dead(iVar0))
	{
		return;
	}
	if (is_ped_injured(iVar0))
	{
		return;
	}
	if (is_ped_in_writhe(iVar0))
	{
		return;
	}
	if (!func_140(41))
	{
		if (func_652(iParam1, &iVar1))
		{
			iVar2 = func_653(iParam1);
			set_attribute_base_rank(iVar0, iVar1, iVar2);
		}
		return;
	}
	if (func_390(iVar0))
	{
		return;
	}
	iVar3 = get_game_timer();
	fVar4 = func_654(iParam0, iParam1);
	if (fVar4 >= 30f)
	{
		func_655(iParam0, iParam1, iVar3);
		return;
	}
	iVar5 = func_437(iParam0, iParam1);
	func_656(iVar0, iParam0, iParam1);
	if (func_657(iParam0, iParam1) > 0f)
	{
		func_658(iParam0, iParam1);
	}
	else
	{
		func_659(iVar0, iParam0, iParam1);
		iVar6 = func_437(iParam0, iParam1);
		func_660(iParam0, iParam1, iVar5, iVar6);
	}
	func_655(iParam0, iParam1, iVar3);
}

void func_324(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 <= -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_71(iParam0))
	{
		return;
	}
	iVar0 = func_88(iParam0);
	fVar1 = 1f;
	fVar2 = 1f;
	fVar3 = 0f;
	fVar4 = 1f;
	fVar5 = 1f;
	fVar6 = 0f;
	iVar7 = 0;
	iVar8 = 0;
	if (iParam0 == func_201())
	{
		Var9 = { func_355() };
		iVar15 = Var9.f_1;
		if (func_284(iVar15, 0))
		{
			Var16.f_1 = 20;
			_item_database_fillout_item_effects_ids(iVar15, &Var16);
			iVar45 = 0;
			while (iVar45 < Var16)
			{
				_item_database_fillout_item_effects_id_info(&(Var16.f_1[iVar45]), &Var38);
				switch (Var38.f_1)
				{
					case 2086291460:
						iVar8 = (iVar8 + floor((IntToFloat(Var38.f_2) * 0.01f)));
						break;
					case -1620444701:
						iVar7 = (iVar7 + floor((IntToFloat(Var38.f_2) * 0.01f)));
						break;
					case -225223329:
						fVar3 = (fVar3 + (Var38.f_5 * 0.01f));
						break;
					case 1167068375:
						fVar6 = (fVar6 + (Var38.f_5 * 0.01f));
						break;
					case -845587290:
						fVar5 = (fVar5 - (Var38.f_5 * 0.01f));
						break;
					case 1605773431:
						fVar4 = (fVar4 + (Var38.f_5 * 0.01f));
						break;
				}
				iVar45++;
			}
		}
		iVar15 = Var9.f_3;
		if (func_284(iVar15, 0))
		{
			Var46.f_1 = 20;
			_item_database_fillout_item_effects_ids(iVar15, &Var46);
			iVar75 = 0;
			while (iVar75 < Var46)
			{
				_item_database_fillout_item_effects_id_info(&(Var46.f_1[iVar75]), &Var68);
				switch (Var68.f_1)
				{
					case 2086291460:
						iVar8 = (iVar8 + floor((IntToFloat(Var68.f_2) * 0.01f)));
						break;
					case -1620444701:
						iVar7 = (iVar7 + floor((IntToFloat(Var68.f_2) * 0.01f)));
						break;
					case -225223329:
						fVar3 = (fVar3 + (Var68.f_5 * 0.01f));
						break;
					case 1167068375:
						fVar6 = (fVar6 + (Var68.f_5 * 0.01f));
						break;
					case -845587290:
						fVar5 = (fVar5 - (Var68.f_5 * 0.01f));
						break;
					case 1605773431:
						fVar4 = (fVar4 + (Var68.f_5 * 0.01f));
						break;
				}
				iVar75++;
			}
		}
	}
	if (func_661())
	{
		iVar7++;
	}
	func_662(0, fVar3);
	func_662(1, fVar6);
	iVar76 = func_663();
	iVar77 = get_attribute_bonus_rank(iVar0, iVar76);
	if (iVar77 != iVar7)
	{
		set_attribute_bonus_rank(iVar0, iVar76, iVar7);
	}
	iVar78 = func_664();
	iVar79 = get_attribute_bonus_rank(iVar0, iVar78);
	if (iVar79 != iVar8)
	{
		set_attribute_bonus_rank(iVar0, iVar78, iVar8);
	}
	fVar80 = _0x95b8e397b8f4360f(iVar0);
	if (fVar80 != fVar1)
	{
		_0xde1b1907a83a1550(iVar0, fVar1);
	}
	fVar2 = fVar2;
	fVar81 = _0xe7687eb2f634abf0(iVar0);
	if (fVar81 != fVar4)
	{
		_0x345c9f993a8ab4a4(iVar0, fVar4);
	}
	fVar82 = _0x825f6dd559a0895b(iVar0);
	if (fVar82 != fVar5)
	{
		_0xef5a3d2285d8924b(iVar0, fVar5);
	}
}

void func_325(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_88(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_273(iVar6);
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

void func_326(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
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

void func_327(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 - (Global_1900383->f_316 && iParam0));
}

void func_328(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 108)
	{
		return;
	}
	Global_1913814->f_209[iParam0] = 0;
}

void func_329()
{
	terminate_this_thread();
}

struct<4> func_330(bool bParam0)
{
	return func_331(1328661203, func_665(), -1591664384, bParam0);
}

struct<4> func_331(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_284(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_666(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_332(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_284(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_331(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_666(bParam6), &Var0, 0);
	return uVar4;
}

void func_333(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

bool func_334(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_284(iParam0, 0))
	{
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return false;
	}
	if (func_667(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return false;
	}
	if (!func_668(0))
	{
		return false;
	}
	if (!_0xcb5d11f9508a928d(func_666(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_335(struct<4> Param0, int iParam4)
{
	if (!func_668(0))
	{
		return func_669(Param0, iParam4, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_670(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!_0x734311e2852760d0(func_666(0), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_336(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if ((func_173(iParam0, 2) || func_173(iParam0, 4)) || func_173(iParam0, 8))
	{
		return true;
	}
	return false;
}

Vector3 func_337(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f, 0f, 0f;
	}
	return (*Global_1900383)[iParam0]->f_19;
}

float func_338(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return (*Global_1900383)[iParam0]->f_22;
}

void func_339(int iParam0)
{
	func_671(iParam0);
	func_672(iParam0);
}

bool func_340()
{
	bVar0 = _0x5e420ff293ee5472();
	if (bVar0)
	{
		return true;
	}
	return false;
}

bool func_341(int iParam0)
{
	iVar0 = 1;
	if (!func_673(iParam0))
	{
		iVar0 = 0;
	}
	if (!func_674(iParam0))
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_342(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	if (!_is_this_model_a_horse(iParam0))
	{
		return 0;
	}
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, false, false);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	_0x9587913b9e772d29(iVar0, 0);
	set_ped_relationship_group_hash(iVar0, _get_default_relationship_group_hash(iParam0));
	return iVar0;
}

void func_343(int iParam0)
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
	if (func_389(iParam0))
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
	if (func_388(iParam0))
	{
		iVar3 = func_401(iParam0);
		if (func_675(iVar3))
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

void func_344(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam1 >= 7)
	{
		return;
	}
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = func_352(iParam1);
	decor_set_int(iParam0, "HorseGender", iVar0);
	iVar1 = func_115(iParam1);
	func_676(iParam0, iVar1);
	_0xa69899995997a63b(iParam0, iVar1);
	iVar2 = floor(func_367(iParam1));
	func_677(iParam0, iVar2);
	iVar4 = 0;
	while (iVar4 < 2)
	{
		if (func_641(iVar4, &uVar3))
		{
			iVar5 = func_578(iParam1, iVar4);
			func_644(iParam0, iVar4, iVar5);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < 3)
	{
		if (func_652(iVar7, &uVar6))
		{
			iVar5 = func_437(iParam1, iVar7);
			func_678(iParam0, iVar7, iVar5);
		}
		iVar7++;
	}
	iVar8 = player_id();
	_0xa691c10054275290(iParam0, iVar8, func_679(iParam1));
	if (iParam1 == 0)
	{
		_0x6734f0a6a52c371c(iVar8, func_680(iParam1));
		_0x024ec9b649111915(iParam0, 1);
	}
}

void func_345(int iParam0, var uParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 57)
	{
		_copy_memory((*uParam1)[iVar0], Global_40.f_1095.f_1[iParam0]->f_298[iVar0], 1);
		iVar0++;
	}
}

void func_346(int iParam0, var uParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_88(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return;
	}
	iVar1 = _inventory_get_ped_inventory_id(iVar0);
	iVar2 = 0;
	while (iVar2 < 57)
	{
		iVar3 = func_681(iVar2, 1);
		iVar4 = iVar3;
		if (!func_284(iVar4, 0))
		{
		}
		else
		{
			iVar5 = uParam1[iVar2];
			if (iVar5 <= 0)
			{
			}
			else
			{
				iVar6 = func_627(iVar1, iVar4, iVar5);
			}
		}
		iVar2++;
	}
}

void func_347(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_88(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = &Global_40.f_1095.f_1[iParam0]->f_356[iVar1];
		if (func_284(iVar2, 0))
		{
			iVar3 = iVar2;
			uVar4 = Global_40.f_1095.f_1[iParam0]->f_356[iVar1]->f_1;
			uVar5 = Global_40.f_1095.f_1[iParam0]->f_356[iVar1]->f_2;
			_0xc412aa1c73111fe0(iVar0, iVar3, uVar4, uVar5, 0);
		}
		iVar1++;
	}
}

void func_348(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_682(iParam0);
	func_683();
}

float func_349(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	return Global_40.f_1095.f_1[iParam0]->f_420.f_1;
}

void func_350(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0]->f_23 = iParam1;
}

int func_351(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (*Global_1900383)[iParam0]->f_23;
}

int func_352(int iParam0)
{
	iParam0 = func_87(iParam0);
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

void func_353(int iParam0, int iParam1)
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

struct<2> func_354(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_684(iParam0, &uVar2))
	{
	}
	if (!func_685(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_355()
{
	if (func_686(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_686(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_686(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_686(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_686(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_686(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_356(var uParam0)
{
	func_687(uParam0);
	func_688(uParam0, 0);
	func_689(uParam0, 0);
	func_690(uParam0, 0);
	func_691(uParam0, 0);
	func_692(uParam0, 0);
	func_693(uParam0, 0);
}

int func_357(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return 0;
	}
	if (func_652(iParam1, &iVar0))
	{
		return get_attribute_base_rank(iParam0, iVar0);
	}
	return 0;
}

int func_358(int iParam0)
{
	iVar0 = 1745919061;
	if (iParam0 <= 0)
	{
		iVar0 = -2045421226;
	}
	else if (iParam0 < 5)
	{
		iVar0 = -1745814259;
	}
	else if (iParam0 < 10)
	{
		iVar0 = -325933489;
	}
	else if (iParam0 < 15)
	{
		iVar0 = -1065791927;
	}
	else if (iParam0 < 20)
	{
		iVar0 = -844699484;
	}
	else if (iParam0 < 25)
	{
		iVar0 = -1273449080;
	}
	else if (iParam0 < 30)
	{
		iVar0 = 927185840;
	}
	else if (iParam0 < 35)
	{
		iVar0 = 149872391;
	}
	else if (iParam0 < 40)
	{
		iVar0 = 399015098;
	}
	else if (iParam0 < 45)
	{
		iVar0 = -644349862;
	}
	else if (iParam0 < 50)
	{
		iVar0 = 1745919061;
	}
	else if (iParam0 < 55)
	{
		iVar0 = 1004225511;
	}
	else if (iParam0 < 60)
	{
		iVar0 = 1278600348;
	}
	else if (iParam0 < 65)
	{
		iVar0 = 502499352;
	}
	else if (iParam0 < 70)
	{
		iVar0 = -2093198664;
	}
	else if (iParam0 < 75)
	{
		iVar0 = -1837436619;
	}
	else if (iParam0 < 80)
	{
		iVar0 = 1736416063;
	}
	else if (iParam0 < 85)
	{
		iVar0 = 2040610690;
	}
	else if (iParam0 < 90)
	{
		iVar0 = -1173634986;
	}
	else if (iParam0 < 95)
	{
		iVar0 = -867801909;
	}
	else if (iParam0 >= 95)
	{
		iVar0 = 1960266524;
	}
	return iVar0;
}

void func_359(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0]->f_1 = iParam1;
}

bool func_360(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return Global_40.f_1095.f_1[iParam0]->f_433;
}

void func_361(int iParam0, bool bParam1)
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

void func_362(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_694(iParam0);
	func_695(iParam0, uParam1);
	func_468(iParam0);
	func_696(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_697(iParam0, iParam3, 0);
	}
	_update_ped_variation(iParam0, false, true, true, true, true);
}

void func_363(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_88(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return;
	}
	Var10.f_10 = 10;
	iVar114 = 0;
	while (iVar114 < 3)
	{
		iVar112 = iVar114;
		func_272(&Var10);
		func_274(Global_40.f_1095.f_1[iParam0]->f_15[iVar112], &Var10);
		if (!is_model_valid(Var10))
		{
		}
		else if (!has_model_loaded(Var10))
		{
		}
		else
		{
			switch (iVar114)
			{
				case 0:
					vVar6 = { 0f, -1f, 0f };
					break;
				case 1:
					vVar6 = { -1f, 0f, 0f };
					break;
				case 2:
					vVar6 = { 1f, 0f, 0f };
					break;
			}
			vVar3 = { get_offset_from_entity_in_world_coords(iVar0, vVar6) };
			if (_0x274ee1b90cfa669e(Var10))
			{
				iVar1 = create_object(Var10, vVar3, true, true, false, false, true);
				if (!does_entity_exist(iVar1))
				{
				}
				else
				{
					iVar9 = func_698(iVar114);
					task_carriable(iVar1, Var10.f_3, iVar0, iVar9, 0);
					_0x399657ed871b3a6c(iVar1, Var10.f_1);
					_0xef259aa1e097e0ad(iVar1, Var10.f_93);
					iVar115 = func_286(iVar0, iVar1);
					Jump @798; //curOff = 318
					if (is_model_a_ped(Var10))
					{
						iVar2 = func_699(Var10, vVar3, 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 0);
						if (!does_entity_exist(iVar2))
						{
						}
						else
						{
							if (_0x9a100f1cf4546629(iVar2))
							{
								if (Var10.f_6 == 2)
								{
									_0x8de104bec243a73b(Var10);
								}
								_set_ped_quality(iVar2, Var10.f_4);
								_0x8b6f0f59b1b99801(iVar2, Var10.f_6);
								_set_ped_damage(iVar2, Var10.f_7);
							}
							if (Var10.f_8 != 0)
							{
								_set_ped_body_component(iVar2, Var10.f_8);
								if (Var10.f_92)
								{
									iVar116 = 787732969;
									if (_0x4ff3c2b4e6a196c1(Var10.f_8, iVar116, Var10))
									{
										_0x66ff395445a88a6e(iVar2, iVar116, 0);
									}
								}
							}
							iVar113 = 0;
							while (iVar113 < Var10.f_9)
							{
								uVar104 = &Var10.f_10[iVar113];
								uVar105 = Var10.f_10[iVar113]->f_1;
								uVar106 = Var10.f_10[iVar113]->f_2;
								uVar107 = Var10.f_10[iVar113]->f_3;
								uVar108 = Var10.f_10[iVar113]->f_4;
								uVar109 = Var10.f_10[iVar113]->f_5;
								uVar110 = Var10.f_10[iVar113]->f_6;
								uVar111 = Var10.f_10[iVar113]->f_7;
								_0xbc6df00d7a4a6819(iVar2, uVar104, uVar105, uVar106, uVar107, uVar108, uVar109, uVar110, uVar111);
								iVar113++;
							}
							_update_ped_variation(iVar2, false, true, true, true, false);
							if (Var10.f_2 == 2)
							{
								_set_entity_health(iVar2, 0, 0);
								set_ped_config_flag(iVar2, 517, true);
								_0xf5622fa6acfca7db(iVar2, 0);
							}
							if (Var10.f_92)
							{
								_0x6569f31a01b4c097(iVar2, 0, 0);
								_0x6bcf5f3d8ffe988d(iVar2, 1);
							}
							iVar9 = func_698(iVar114);
							task_carriable(iVar2, Var10.f_3, iVar0, iVar9, 0);
							_0x399657ed871b3a6c(iVar2, Var10.f_1);
							_0xef259aa1e097e0ad(iVar2, Var10.f_93);
							iVar117 = func_515(iVar2);
							if (func_284(iVar117, 0))
							{
								if (iVar117 != Var10.f_1)
								{
									Global_40.f_1095.f_1[iParam0]->f_15[iVar112]->f_1 = iVar117;
									Var10.f_1 = iVar117;
								}
							}
							iVar118 = func_286(iVar0, iVar2);
							func_618(Var10.f_1, 0, 0, 1);
						}
					}
				}
				iVar114++;
			}
		}
	}
}

void func_364(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0]->f_19 = { 0f, 0f, 0f };
	(*Global_1900383)[iParam0]->f_22 = 0f;
}

void func_365(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0]->f_23 = 0;
}

void func_366(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_387(iParam0, 1);
}

float func_367(int iParam0)
{
	iParam0 = func_87(iParam0);
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

float func_368(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

bool func_369()
{
	return (_does_anim_scene_exist(Global_43800) && _is_anim_scene_started(Global_43800, false));
}

int func_370()
{
	return Global_1900383->f_378;
}

void func_371(int iParam0)
{
	Global_1900383->f_378.f_9 = iParam0;
}

void func_372(int iParam0)
{
	Global_1900383->f_378.f_10 = iParam0;
}

void func_373(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (&Global_1900383->f_378.f_1[iParam0] != iParam1)
	{
	}
	Global_1900383->f_378.f_1[iParam0] = iParam1;
}

void func_374(int iParam0)
{
	Global_1900383->f_378.f_11 = iParam0;
}

bool func_375()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

bool func_376(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_198(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_377()
{
	iVar0 = Global_40.f_1095.f_1[5]->f_11;
	switch (iVar0)
	{
		case 1:
			if (does_entity_exist(func_88(6)) && func_187(Global_35, func_88(6), 1, 1) <= 80f)
			{
				func_381("WHISTLE_NEAR_UNBONDED", 10000, 0, 0, 0, 1);
			}
			else
			{
				func_381("WHISTLE_HORSE_DEAD", 10000, 0, 0, 0, 1);
			}
			break;
		case 2:
			func_381("WHISTLE_HORSE_STOLEN", 10000, 0, 0, 0, 1);
			break;
	}
}

bool func_378(int iParam0)
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
				return true;
		}
	}
	return false;
}

bool func_379(int iParam0)
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
				return true;
		}
	}
	return false;
}

bool func_380(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_71(iParam0))
	{
		return false;
	}
	iVar0 = func_88(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

var func_381(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_382(int iParam0)
{
	iParam0 = func_87(iParam0);
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
		if ((*Global_1900383)[iParam0]->f_25 == 2)
		{
			_set_blip_flash_style((*Global_1900383)[iParam0]->f_26, -1814032670);
			_blip_set_modifier((*Global_1900383)[iParam0]->f_26, -1814032670);
		}
		else if ((*Global_1900383)[iParam0]->f_25 == 1)
		{
			_set_blip_flash_style((*Global_1900383)[iParam0]->f_26, -272772079);
			_blip_set_modifier((*Global_1900383)[iParam0]->f_26, -272772079);
		}
	}
}

void func_383(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_21(iParam0, &Var0);
	iVar12 = func_207(iParam0);
	if (!is_model_valid(iVar12))
	{
		func_373(iParam0, 6);
		return;
	}
	iVar13 = func_115(iParam0);
	iVar14 = get_default_max_attribute_rank(iVar12, 7);
	func_21(0, &Var15);
	func_21(1, &Var27);
	if (iParam0 == 1 && !Var27.f_2)
	{
		func_373(iParam0, 6);
		return;
	}
	iVar39 = get_game_timer();
	bVar40 = false;
	if (iParam0 == 0)
	{
		bVar40 = true;
		if (!Var15.f_11)
		{
			if (Var27.f_11 && !Var27.f_10)
			{
				bVar40 = false;
			}
		}
	}
	if (iParam0 == 1)
	{
		if (!Var15.f_2)
		{
			bVar40 = true;
		}
	}
	if (bVar40)
	{
	}
	switch (func_384(iParam0))
	{
		case 0:
			func_373(iParam0, 1);
		case 1:
			if (iParam0 == 0)
			{
				if (func_84(0) == 1 && !func_71(0))
				{
					func_373(iParam0, 2);
					return;
				}
			}
			if (!func_71(iParam0))
			{
				func_373(iParam0, 6);
				return;
			}
			if (func_115(iParam0) < 1)
			{
				func_373(iParam0, 6);
				return;
			}
			if (!Var0.f_11)
			{
				if (func_700())
				{
					func_373(iParam0, 2);
					return;
				}
				bVar41 = false;
				if (iParam0 == 0)
				{
					if (Var27.f_10)
					{
						bVar41 = true;
					}
				}
				if (iParam0 == 1)
				{
					if (Var15.f_10)
					{
						bVar41 = true;
					}
				}
				if (!bVar40 && bVar41)
				{
					bVar40 = true;
				}
				if (!func_280())
				{
					bVar40 = false;
				}
				if (bVar40)
				{
					iVar42 = -1;
					iVar43 = -1;
					if (func_490(1) < 3)
					{
						iVar42 = 1;
						if (iVar13 < iVar14)
						{
							iVar43 = 6;
						}
					}
					else
					{
						iVar42 = 2;
					}
					if (bVar41)
					{
						if (iParam0 == 0)
						{
							iVar42 = 3;
						}
						else if (iParam0 == 1)
						{
							iVar42 = 4;
						}
					}
					else
					{
						if (iParam0 == 0)
						{
							_copy_memory(&Var44, &Var27, 12);
						}
						else if (iParam0 == 1)
						{
							_copy_memory(&Var44, &Var15, 12);
						}
						if (Var44.f_1)
						{
							if (!Var44.f_11)
							{
								iVar42 = 5;
							}
						}
					}
					if (iVar43 != -1)
					{
						func_283(iVar43, 1);
					}
					if ((iVar42 == 1 || iVar42 == 3) || iVar42 == 4)
					{
						iVar56 = 0;
						if (iParam0 == 0)
						{
							iVar56 = -1925605092;
						}
						else if (iParam0 == 1)
						{
							iVar56 = -1230993421;
						}
						if (iVar56 != 0)
						{
							if (iParam0 == 0)
							{
								iVar57 = func_701();
							}
							else if (iParam0 == 1)
							{
								iVar57 = func_702();
							}
							if (!does_blip_exist(iVar57))
							{
								iVar57 = _0x3e593df9c2962ec6(iVar56);
								_blip_set_modifier(iVar57, 1313031610);
								if (iParam0 == 0)
								{
									func_703(&iVar57);
								}
								else if (iParam0 == 1)
								{
									func_704(&iVar57);
								}
							}
							func_464(iVar42, iVar57, 1);
						}
					}
					else if (iVar42 != -1)
					{
						func_283(iVar42, 1);
					}
				}
			}
			func_373(iParam0, 5);
			break;
		case 2:
			func_705(&((*Global_1900383)[iParam0]->f_4));
			func_373(iParam0, 3);
		case 3:
			vVar62 = { func_706(iParam0) };
			if (!func_707(&((*Global_1900383)[iParam0]->f_4), Global_36, vVar62, Var0, 1065353216))
			{
				if ((*Global_1900383)[iParam0]->f_4.f_1)
				{
					if (!func_375())
					{
						func_381("WHISTLE_NOSPAWN_AREA", 10000, 0, 0, 0, 1);
					}
					func_315(iParam0);
					func_708(Global_35, "HORSE_NO_SHOW", 1017772929, 0, 1, 0, 0, 1);
					func_373(iParam0, 6);
				}
				return;
			}
			vVar58 = { func_709(&((*Global_1900383)[iParam0]->f_4)) };
			fVar61 = func_710(vVar58, Global_36, 1);
			if (!func_71(iParam0))
			{
				func_448(iParam0, vVar58, fVar61);
				func_447(iParam0);
			}
			func_373(iParam0, 4);
		case 4:
			if (!does_entity_exist(Var0))
			{
				return;
			}
			if (is_entity_dead(Var0) || is_ped_injured(Var0))
			{
				return;
			}
			vVar58 = { func_709(&((*Global_1900383)[iParam0]->f_4)) };
			fVar61 = func_710(vVar58, Global_36, 1);
			freeze_entity_position(Var0, false);
			set_entity_coords(Var0, vVar58, true, false, true, true);
			set_entity_heading(Var0, fVar61);
			_0x9587913b9e772d29(Var0, 0);
			func_373(iParam0, 5);
		case 5:
			if (!Var0.f_2)
			{
				func_373(iParam0, 6);
				return;
			}
			if (Var0.f_10)
			{
				func_373(iParam0, 6);
				return;
			}
			bVar65 = false;
			if (does_entity_exist(Var0.f_9))
			{
				if (func_456(Var0.f_9))
				{
					if (func_76(256))
					{
					}
					else
					{
						bVar65 = true;
					}
				}
				if (func_711(iParam0))
				{
					bVar65 = true;
				}
			}
			if (bVar65)
			{
				func_712(iParam0, 1);
			}
			bVar66 = false;
			if (Var0.f_11 || func_700())
			{
				bVar66 = true;
			}
			if (!bVar66)
			{
				func_66(iParam0);
				func_382(iParam0);
				func_373(iParam0, 6);
				return;
			}
			bVar67 = false;
			if (func_76(32))
			{
				bVar67 = true;
			}
			bVar68 = true;
			bVar69 = func_713();
			bVar70 = func_172(iParam0);
			if (!bVar67)
			{
				if (bVar69)
				{
					if (bVar70)
					{
						iVar71 = func_170();
						if (!func_171(iVar71))
						{
							func_714(&vVar72, &uVar75);
							bVar76 = false;
							if (get_distance_between_coords(Var0.f_5, vVar72, true) < 3f)
							{
								bVar76 = true;
							}
							if (func_223(iParam0) || bVar76)
							{
								if (bVar40)
								{
									if (func_280())
									{
										func_283(9, 1);
									}
								}
							}
							else if (bVar40)
							{
								if (func_280())
								{
									func_283(8, 1);
								}
							}
							bVar68 = false;
						}
					}
				}
			}
			if (bVar68)
			{
				_0x0348469daa17576c(Var0);
				freeze_entity_position(Var0, false);
				if (func_715() == 0)
				{
					if (func_168(Var0, 2043986356))
					{
						func_371(1);
					}
				}
				iVar77 = func_715();
				task_go_to_whistle(Var0, Global_35, iVar77);
				_0xff1e339ce40eaaaf(Var0, -1);
				set_animal_tuning_bool_param(Var0, 48, false);
				func_374(iVar39);
			}
			func_66(iParam0);
			func_382(iParam0);
			func_373(iParam0, 6);
			break;
		case 6:
			break;
	}
}

int func_384(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return &(Global_1900383->f_378.f_1[iParam0]);
}

bool func_385(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_386(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (does_blip_exist((*Global_1900383)[iParam0]->f_27))
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		remove_blip(&((*Global_1900383)[iParam0]->f_27));
	}
}

void func_387(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
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

bool func_388(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = func_401(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

bool func_389(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_716(get_entity_model(iParam0)))
	{
		return true;
	}
	if (decor_exist_on(iParam0, "HorseCompanion"))
	{
		return true;
	}
	return false;
}

bool func_390(int iParam0)
{
	sVar0 = "HorseMission";
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (decor_exist_on(iParam0, sVar0))
	{
		return true;
	}
	return false;
}

bool func_391(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	iVar0 = get_entity_model(iParam0);
	if (!_is_this_model_a_horse(iVar0))
	{
		return false;
	}
	if (_0x3b005ff0538ed2a9(iParam0) == 1)
	{
		return true;
	}
	return false;
}

bool func_392(int iParam0)
{
	switch (iParam0)
	{
		case 1772321403:
			return true;
	}
	return false;
}

bool func_393(int iParam0)
{
	switch (iParam0)
	{
		case -1230516683:
		case 594040097:
			return true;
	}
	return false;
}

int func_394()
{
	return Global_1900383->f_404;
}

void func_395(int iParam0)
{
	Global_1900383->f_404 = iParam0;
}

int func_396()
{
	return Global_1900383->f_404.f_6;
}

void func_397(int iParam0)
{
	Global_1900383->f_404.f_6 = iParam0;
}

bool func_398(int iParam0, var uParam1, float fParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
	}
	iVar0 = _0xf103823ffe72bb49(iParam0);
	if (!does_entity_exist(*uParam1))
	{
		return false;
	}
	*uParam1 = iVar0;
	if (is_entity_dead(iVar0))
	{
		return false;
	}
	if (_is_ped_hogtied(iVar0))
	{
		return false;
	}
	if (fParam2 > 0f)
	{
		fVar1 = func_187(iParam0, iVar0, 0, 1);
		if (fVar1 > fParam2)
		{
			return false;
		}
	}
	return true;
}

bool func_399(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_613(bParam1, bParam2, bParam3);
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

bool func_400(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	if (is_ped_in_writhe(iParam0))
	{
		return false;
	}
	if (func_190(iParam0) == 0f)
	{
		return true;
	}
	return false;
}

int func_401(int iParam0)
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

int func_402(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = get_attribute_rank(iParam0, 7);
	return iVar0;
}

void func_403(int iParam0)
{
	if (func_2() == 0)
	{
		return;
	}
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	if (func_388(iParam0))
	{
		iVar0 = func_401(iParam0);
		func_315(iVar0);
	}
	func_315(1);
	if (func_71(1))
	{
		func_202(1, 0);
	}
	func_203(1);
	func_717(iParam0, 1, 0);
	func_200(1, 1);
	if (func_115(1) == 0)
	{
		func_718(1, 1);
	}
	uVar1 = _0x227b06324234fb09(player_id(), iParam0);
	func_404();
}

void func_404()
{
	if (func_71(0))
	{
		func_66(0);
	}
	if (func_71(1))
	{
		func_66(1);
	}
	if (func_71(5))
	{
		func_66(5);
	}
	if (func_71(6))
	{
		func_315(6);
	}
}

void func_405(int iParam0, bool bParam1)
{
	if (func_2() == 0)
	{
		return;
	}
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	if (func_388(iParam0))
	{
		iVar0 = func_401(iParam0);
		func_315(iVar0);
	}
	if (func_71(6))
	{
		func_202(6, 0);
	}
	func_203(6);
	func_717(iParam0, 6, 0);
	func_200(6, 1);
	if (!bParam1)
	{
		func_454(6, 0);
		func_482(get_game_timer());
	}
	func_404();
}

void func_406(int iParam0, int iParam1)
{
	_copy_memory(&(Global_1900383->f_508), Global_40.f_1095.f_1[iParam1], 436);
	_copy_memory(Global_40.f_1095.f_1[iParam1], Global_40.f_1095.f_1[iParam0], 436);
	_copy_memory(Global_40.f_1095.f_1[iParam0], &(Global_1900383->f_508), 436);
}

void func_407(int iParam0, int iParam1)
{
	_copy_memory(&(Global_1900383->f_463), (*Global_1900383)[iParam1], 45);
	_copy_memory((*Global_1900383)[iParam1], (*Global_1900383)[iParam0], 45);
	_copy_memory((*Global_1900383)[iParam0], &(Global_1900383->f_463), 45);
}

int func_408(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	Var29.f_9 = -1591664384;
	if (!func_719(iParam0, &Var0))
	{
		return 0;
	}
	bVar58 = false;
	if (!func_719(iParam1, &Var29))
	{
		bVar58 = true;
	}
	if (bVar58)
	{
		iVar59 = func_720(iParam1);
		if (iVar59 == 0)
		{
			return 0;
		}
		if (!func_721(Var0, Var0.f_5, iVar59, 0, 0))
		{
			return 0;
		}
	}
	else if (!func_722(Var0, Var29, 0, 0))
	{
		return 0;
	}
	return 1;
}

bool func_409(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
	}
	if (decor_exist_on(iParam0, "CaravanCommonHorse"))
	{
		return true;
	}
	return false;
}

bool func_410(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
	}
	if (decor_exist_on(iParam0, "CaravanLivestock"))
	{
		return true;
	}
	return false;
}

bool func_411(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return false;
	}
	sVar0 = "bHorseHasBeenStolen";
	if (!decor_exist_on(iParam0, sVar0))
	{
		return false;
	}
	else if (decor_exist_on(iParam0, sVar0))
	{
		return true;
	}
	return false;
}

bool func_412()
{
	return (Global_1894899 & 1 != 0 && func_723() != -1);
}

void func_413(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	iVar0 = get_entity_model(iParam0);
	bVar1 = false;
	if (func_392(iVar0))
	{
		bVar1 = true;
	}
	bVar2 = false;
	if (func_393(iVar0))
	{
		bVar2 = true;
	}
	iVar3 = 0;
	if (!func_76(2048))
	{
		if (bVar1)
		{
			if (!func_458(iParam0, 953325896))
			{
				iVar3 = 953325896;
			}
		}
		else if (bVar2)
		{
			if (!func_458(iParam0, 508358508))
			{
				iVar3 = 508358508;
			}
		}
		else if (!func_458(iParam0, 1022576842))
		{
			iVar3 = 1022576842;
		}
		if (iVar3 != 0)
		{
			func_243(0, iVar3, 0, 0, 0, 0, 1065353216, 0);
		}
	}
}

void func_414(bool bParam0)
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

void func_415(bool bParam0)
{
	Global_1900372->f_2 = 0;
	Global_1900372->f_1 = 0;
	Global_1900372->f_3 = 0;
	Global_1900372->f_4 = 0;
	Global_1900372->f_5 = 0;
	Global_1900372->f_6 = 0;
	Global_1900372->f_7 = 0;
	if (bParam0)
	{
		Global_1900372->f_8 = 0;
		Global_1900372->f_9 = 0;
		Global_1900372->f_10 = 0;
	}
}

void func_416(int iParam0)
{
	Global_1900372 = iParam0;
}

bool func_417()
{
	return Global_1900372->f_5;
}

int func_418()
{
	return Global_1900372->f_2;
}

int func_419()
{
	return Global_1900372->f_1;
}

bool func_420(int iParam0)
{
	if (func_724(iParam0))
	{
		return true;
	}
	if (func_725(iParam0))
	{
		return true;
	}
	if (func_726(iParam0))
	{
		return true;
	}
	if (func_727(iParam0))
	{
		return true;
	}
	if (func_728(iParam0))
	{
		return true;
	}
	if (func_729(iParam0))
	{
		return true;
	}
	if (func_730(iParam0))
	{
		return true;
	}
	return false;
}

bool func_421()
{
	iVar0 = func_418();
	iVar1 = func_419();
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (is_entity_dead(iVar0))
	{
		return false;
	}
	if (is_ped_injured(iVar0))
	{
		return false;
	}
	if (!_0xd543d3a8fde4f185(Global_35, iVar0))
	{
		return false;
	}
	if (!func_420(iVar1))
	{
		return false;
	}
	if (is_ped_swimming(Global_35))
	{
		return false;
	}
	if (is_ped_swimming(iVar0))
	{
		return false;
	}
	return true;
}

bool func_422(int iParam0, int iParam1)
{
	if (!does_entity_exist(Global_35))
	{
		return false;
	}
	if (is_entity_dead(Global_35) || is_ped_injured(Global_35))
	{
		return false;
	}
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	if (is_ped_in_writhe(iParam0))
	{
		return false;
	}
	Var0.f_3 = -1;
	Var0.f_12 = 4;
	Var0.f_17 = 4;
	if (_0x0c093c1787f18519(iParam1, &Var0))
	{
	}
	bVar25 = false;
	iVar26 = Var0;
	if (func_724(iParam1))
	{
		iVar26 = 0;
		iVar27 = -224471938;
		bVar25 = true;
	}
	if ((func_726(iParam1) || func_727(iParam1)) || func_725(iParam1))
	{
		iVar26 = 574905658;
		iVar27 = -1355254781;
		bVar25 = true;
	}
	if (func_728(iParam1))
	{
		iVar27 = 1968415774;
		bVar25 = true;
	}
	if (func_729(iParam1))
	{
		iVar27 = 554992710;
		bVar25 = true;
	}
	if (!bVar25)
	{
		return false;
	}
	task_animal_interaction(Global_35, iParam0, iVar27, iVar26, 0);
	return true;
}

void func_423(int iParam0)
{
	Global_1900372->f_3 = iParam0;
}

int func_424()
{
	return Global_1900372->f_3;
}

void func_425(int iParam0)
{
	Global_1900372->f_4 = iParam0;
}

void func_426(int iParam0)
{
	Global_1900372->f_8 = iParam0;
}

void func_427(int iParam0)
{
	Global_1900372->f_9 = iParam0;
}

void func_428(int iParam0)
{
	Global_1900372->f_10 = iParam0;
}

void func_429(int iParam0)
{
	Global_1900372->f_7 = iParam0;
}

bool func_430()
{
	return Global_1900372->f_7;
}

bool func_431(int iParam0, int iParam1)
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

int func_432(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_284(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_731(iParam0, 1);
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
			func_732(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_733(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_734(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_735(iParam0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_735(iParam0, 0, 0) - iParam1) < 0)
		{
			func_432(iParam0, func_735(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_736(iParam0) == -427144552)
	{
		if (!func_737(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_738(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_668(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_732(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_278(iParam0, iParam1);
	return 1;
}

void func_433(int iParam0, int iParam1)
{
	if (!func_420(iParam1))
	{
		return;
	}
	if (!_item_database_is_key_valid(iParam1, 0))
	{
		return;
	}
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (is_ped_injured(iParam0))
	{
		return;
	}
	if (is_ped_in_writhe(iParam0))
	{
		return;
	}
	if (func_724(iParam1))
	{
		func_739(iParam0, iParam1);
		return;
	}
	if (func_725(iParam1))
	{
		func_740(iParam0, iParam1);
		return;
	}
	if (func_726(iParam1))
	{
		func_741(iParam0, iParam1);
		return;
	}
	if (func_727(iParam1))
	{
		func_504(iParam0, iParam1);
		return;
	}
	if (func_728(iParam1))
	{
		func_742(iParam0, iParam1);
		return;
	}
	if (func_730(iParam1))
	{
		func_743(iParam0, iParam1);
		return;
	}
	if (func_729(iParam1))
	{
		iVar0 = func_744();
		func_745(iParam0, iParam1, iVar0);
		return;
	}
}

bool func_434()
{
	return Global_1900372->f_6;
}

int func_435()
{
	return Global_1900372->f_8;
}

bool func_436()
{
	return Global_1900372->f_10;
}

int func_437(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
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

void func_438(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_437(iParam0, iParam1);
	func_746(iParam0, iParam1, (iVar0 + iParam2));
}

void func_439(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_357(iParam0, iParam1);
	func_678(iParam0, iParam1, (iVar0 + iParam2));
}

int func_440(int iParam0)
{
	if (!func_269(iParam0))
	{
		return -1;
	}
	return func_747(iParam0);
}

int func_441(vector3 vParam0)
{
	return func_748(_get_map_zone_at_coords(vParam0, 10));
}

bool func_442(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_71(iParam0))
	{
		return false;
	}
	iVar0 = func_88(iParam0);
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

void func_443(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_71(iParam0))
	{
		return;
	}
	iVar0 = func_88(iParam0);
	if (is_entity_dead(iVar0))
	{
		return;
	}
	_set_entity_health(iVar0, 0, 0);
}

void func_444()
{
	iVar0 = func_211();
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	delete_object(&iVar0);
	func_466(0);
}

int func_445(int iParam0)
{
	iParam0 = func_87(iParam0);
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

void func_446(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_749(&iVar0, &iVar1, &iVar2);
	func_750(iParam0, iVar0);
	func_751(iParam0, iVar1);
	func_752(iParam0, iVar2);
	func_200(iParam0, 1);
	func_718(iParam0, 1);
}

void func_447(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_753(iParam0, 1);
}

void func_448(int iParam0, vector3 vParam1, float fParam4)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0]->f_19 = { vParam1 };
	(*Global_1900383)[iParam0]->f_22 = fParam4;
}

void func_449(int iParam0)
{
	iParam0 = func_87(iParam0);
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

void func_450(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_181(iParam0);
	if (!_does_thread_exist(iVar0))
	{
		func_183(iParam0);
	}
	else if (!is_thread_active(iVar0, false))
	{
		func_183(iParam0);
	}
}

bool func_451(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_452(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_453(int iParam0, float fParam1)
{
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "HORSE_XP_TRUST_EARNED";
			break;
		case 1:
		case 2:
		case 3:
			return;
		case 4:
			sVar0 = "HORSE_XP_LEADING";
			break;
		case 11:
		case 12:
			sVar0 = "HORSE_XP_HITCH";
			break;
		case 5:
			return;
		case 6:
			sVar0 = "HORSE_XP_BREAK_HORSE";
			break;
		case 13:
		case 14:
		case 15:
			sVar0 = "HORSE_XP_FED";
			break;
		case 16:
			sVar0 = "HORSE_XP_TREAT";
			break;
		case 17:
		case 18:
		case 19:
			sVar0 = "HORSE_XP_GROOM";
			break;
		case 20:
			sVar0 = "HORSE_XP_OINTMENT";
			break;
		case 7:
		case 8:
			sVar0 = "HORSE_XP_PATTED";
			break;
		case 9:
		case 10:
			sVar0 = "HORSE_XP_CALM";
			break;
		case 21:
		case 22:
			sVar0 = "HORSE_XP_LIGHT_LOAD";
			break;
		default:
			return;
	}
	bVar1 = false;
	if (bVar1)
	{
		sVar0 = _create_var_string(2, sVar0, floor(fParam1));
	}
	else
	{
		sVar0 = _create_var_string(2, "HORSE_XP_GENERIC_EARNED");
	}
	func_754(sVar0, "ITEMTYPE_TEXTURES", 48560695, 0, 109029619, 0, 0, 0, 1);
}

void func_454(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return;
	}
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (iParam0 != 0)
	{
		if (!func_140(43))
		{
			return;
		}
	}
	iVar0 = func_207(iParam0);
	if (func_392(iVar0) || func_393(iVar0))
	{
		return;
	}
	iVar1 = func_115(iParam0);
	if (iVar1 >= func_755(iVar0))
	{
		return;
	}
	if (func_470(iParam0, iParam1))
	{
		return;
	}
	if (func_756(iParam0, iParam1))
	{
		return;
	}
	fVar2 = func_757(iParam0, iParam1);
	fVar3 = func_758(iParam1);
	fVar3 = (fVar3 * (1f + Global_40.f_11095.f_68));
	switch (iParam1)
	{
		case 1:
			iVar4 = func_88(iParam0);
			if (func_518(iVar4, 0))
			{
				fVar3 = (fVar3 * 0.5f);
			}
			Global_1900383->f_317.f_2[iParam0]->f_2 = (Global_1900383->f_317.f_2[iParam0]->f_2 + fVar3);
			break;
		case 2:
		case 3:
			if (func_759())
			{
				fVar3 = (fVar3 * 2f);
			}
			Global_1900383->f_317.f_2[iParam0]->f_2 = (Global_1900383->f_317.f_2[iParam0]->f_2 + fVar3);
			break;
		case 4:
			Global_1900383->f_317.f_2[iParam0]->f_4 = (Global_1900383->f_317.f_2[iParam0]->f_4 + fVar3);
			break;
		case 5:
			if (iVar1 < 1)
			{
				fVar5 = func_367(iParam0);
				fVar6 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar1));
				fVar7 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar1 + 1));
				fVar3 = (fVar7 - (fVar6 + fVar5));
			}
			else
			{
				fVar3 = 0f;
			}
			break;
		default:
			func_453(iParam1, fVar3);
			break;
	}
	func_760(iParam0, fVar3);
	func_472(iParam0, iParam1, (fVar2 + fVar3));
}

int func_455(int iParam0, int iParam1)
{
	if (!is_entity_a_ped(iParam0))
	{
		return 0;
	}
	if (decor_exist_on(iParam0, "not_enemy"))
	{
		return 0;
	}
	switch (_get_default_relationship_group_hash(get_entity_model(iParam0)))
	{
		case -1996978098:
		case -1663301869:
		case -1535431934:
		case -1448293989:
		case -886193798:
		case -401180987:
		case -350226955:
		case -50399569:
		case 106566339:
		case 266218800:
		case 555364152:
		case 707888648:
		case 1078461828:
		case 1222652248:
		case 1269650476:
			return 1;
	}
	if (does_entity_exist(iParam1))
	{
		iVar0 = get_relationship_between_groups(get_ped_relationship_group_hash(get_ped_index_from_entity_index(iParam0)), get_ped_relationship_group_hash(iParam1));
		if ((iVar0 == 6 || iVar0 == 4) || iVar0 == 5)
		{
			if (!decor_exist_on(iParam0, "instigated_by_player"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_456(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_2() != -1)
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

bool func_457(int iParam0, int iParam1)
{
	if ((((_0x40851bcc33acd9ab(iParam0) && func_134() != 8) && !func_608(0, 0, 1)) && !func_458(iParam0, iParam1)) && !func_399(player_id(), 0, 0, 1))
	{
		return true;
	}
	return false;
}

bool func_458(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (decor_exist_on(iParam0, "honor_block"))
		{
			iVar0 = decor_get_int(iParam0, "honor_block");
			iVar1 = func_547(iParam1);
			if ((iVar0 && iVar1) != 0)
			{
				return true;
			}
		}
	}
	return false;
}

void func_459()
{
	iVar0 = func_401(func_761(Global_35));
	if (iVar0 == -1)
	{
		return;
	}
}

void func_460(int iParam0, var uParam1, var uParam2)
{
	iVar0 = func_401(func_761(Global_35));
	if (iVar0 == -1)
	{
		return;
	}
}

void func_461(int iParam0)
{
	Global_1900372->f_6 = iParam0;
}

void func_462(int iParam0, vector3 vParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0]->f_28 = { vParam1 };
}

void func_463()
{
	Var0 = { func_355() };
	iVar6 = Var0;
	iVar7 = Var0.f_1;
	iVar8 = Var0.f_2;
	iVar9 = Var0.f_3;
	iVar10 = Var0.f_4;
	iVar11 = Var0.f_5;
	iVar12 = 3;
	iVar19 = 1155669136;
	if (func_762(iVar6))
	{
		iVar20 = iVar6;
		Var13 = _0xf6d9e1f3560cbf8e(iVar12, iVar20, iVar19, 0, 0);
	}
	if (func_762(iVar7))
	{
		iVar21 = iVar7;
		Var13.f_1 = _0xf6d9e1f3560cbf8e(iVar12, iVar21, iVar19, 0, 0);
	}
	if (func_762(iVar8))
	{
		iVar22 = iVar8;
		Var13.f_2 = _0xf6d9e1f3560cbf8e(iVar12, iVar22, iVar19, 0, 0);
	}
	if (func_762(iVar9))
	{
		iVar23 = iVar9;
		Var13.f_3 = _0xf6d9e1f3560cbf8e(iVar12, iVar23, iVar19, 0, 0);
	}
	if (func_762(iVar10))
	{
		iVar24 = iVar10;
		Var13.f_4 = _0xf6d9e1f3560cbf8e(iVar12, iVar24, iVar19, 0, 0);
	}
	if (func_762(iVar11))
	{
		iVar25 = iVar11;
		Var13.f_5 = _0xf6d9e1f3560cbf8e(iVar12, iVar25, iVar19, 0, 0);
	}
	func_763(Var13);
}

void func_464(int iParam0, int iParam1, bool bParam2)
{
	func_524(iParam0, &iVar0, &iVar1);
	if (!func_623(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_764(iParam0, 1024))
	{
		return;
	}
	func_624(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 3;
}

int func_465(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_466(int iParam0)
{
	Global_1900383->f_393 = iParam0;
}

void func_467(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	uVar0 = 57;
	uVar58 = 57;
	uVar116 = 57;
	uVar174 = 57;
	func_345(iParam0, &uVar0);
	func_765(&uVar58);
	func_766(iParam0, &uVar0, 1);
	func_767(&uVar0, &uVar58, &uVar116);
	func_768(&uVar116);
	func_769(iParam0, &uVar174);
	uVar232 = 3;
	uVar248 = 3;
	uVar264 = 3;
	func_770(iParam0, &uVar232);
	func_771(&uVar248);
	iVar280 = func_772(&uVar232);
	iVar281 = func_772(&uVar248);
	if (iLocal_284 > iLocal_283)
	{
		func_773(&uVar248);
	}
	else
	{
		func_773(&uVar232);
	}
	func_774(iParam0);
	func_775(iParam0, &uVar264);
}

void func_468(int iParam0)
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

void func_469(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0]->f_433 = iParam1;
}

bool func_470(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return false;
	}
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	fVar0 = func_471(iParam1);
	if (fVar0 == 1E+09f)
	{
		return false;
	}
	if (func_757(iParam0, iParam1) >= fVar0)
	{
		return true;
	}
	return false;
}

float func_471(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15f;
		case 4:
			return 1E+09f;
		case 1:
			return 1E+09f;
		case 2:
			return 1E+09f;
		case 3:
			return 1E+09f;
		case 5:
			return 100f;
		case 6:
			return 30f;
		case 7:
			return 1E+09f;
		case 8:
			return 1E+09f;
		case 9:
			return 1E+09f;
		case 10:
			return 1E+09f;
		case 11:
			return 1E+09f;
		case 12:
			return 1E+09f;
		case 13:
			return 1E+09f;
		case 14:
			return 1E+09f;
		case 15:
			return 1E+09f;
		case 16:
			return 1E+09f;
		case 17:
			return 1E+09f;
		case 18:
			return 1E+09f;
		case 19:
			return 1E+09f;
		case 20:
			return 1E+09f;
		case 21:
			return 1E+09f;
		case 22:
			return 1E+09f;
	}
	return 1E+09f;
}

void func_472(int iParam0, int iParam1, float fParam2)
{
	if (iParam1 == -1)
	{
		return;
	}
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0]->f_372.f_2[iParam1] = fParam2;
}

void func_473(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = func_663();
	set_attribute_bonus_rank(iParam0, iVar0, 0);
	iVar1 = func_664();
	set_attribute_bonus_rank(iParam0, iVar1, 0);
	_0xde1b1907a83a1550(iParam0, 1f);
	_0x345c9f993a8ab4a4(iParam0, 1f);
	_0xef5a3d2285d8924b(iParam0, 1f);
}

int func_474(int iParam0)
{
	switch (iParam0)
	{
		case 3:
		case 4:
		case 5:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_475(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	if (func_388(iParam0))
	{
		iVar0 = func_401(iParam0);
		func_315(iVar0);
	}
	func_315(0);
	func_717(iParam0, 0, 0);
	func_200(0, 1);
	func_776(0);
	_0x8fbf9edb378ccb8c(player_id(), iParam0);
	if (func_201() == 0)
	{
		_set_ped_as_saddle_horse_for_player(player_id(), iParam0);
		func_217(0);
		func_214(0);
	}
	set_ped_config_flag(iParam0, 136, false);
	func_404();
}

void func_476(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
	}
	if (_is_metaped_using_component(iParam0, 1522539835))
	{
		_set_ped_component_disabled(iParam0, 1522539835, 1);
	}
	if (_is_metaped_using_component(iParam0, 2044190614))
	{
		_set_ped_component_disabled(iParam0, 2044190614, 1);
	}
	if (_is_metaped_using_component(iParam0, -749728163))
	{
		_set_ped_component_disabled(iParam0, -749728163, 1);
	}
	if (_is_metaped_using_component(iParam0, 149557334))
	{
		_set_ped_component_disabled(iParam0, 149557334, 1);
	}
}

void func_477(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
	}
	iVar0 = create_itemset(true);
	vVar1 = { get_entity_coords(iParam0, true, false) };
	iVar4 = _0x59b57c4b06531e1e(vVar1, 5f, iVar0, 3);
	iVar5 = 0;
	while (iVar5 < iVar4)
	{
		iVar6 = get_indexed_item_in_itemset(iVar5, iVar0);
		if (!is_an_entity(iVar6))
		{
		}
		else
		{
			iVar7 = _get_entity_from_item(iVar6);
			if (!does_entity_exist(iVar7))
			{
			}
			else if (!is_entity_an_object(iVar7))
			{
			}
			else if (!is_entity_attached_to_entity(iVar7, iParam0))
			{
			}
			else if (_0x0ccfe72b43c9cf96(iVar7))
			{
			}
			else
			{
				set_entity_as_mission_entity(iVar7, true, true);
				uVar8 = _0x18013392501ce5dc(iVar6);
				delete_object(&uVar8);
			}
		}
		iVar5++;
	}
	destroy_itemset(iVar0);
}

void func_478(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	uVar0 = 57;
	uVar58 = 57;
	uVar116 = 57;
	uVar174 = 57;
	func_765(&uVar0);
	func_345(iParam0, &uVar58);
	func_346(iParam0, &uVar0);
	func_767(&uVar0, &uVar58, &uVar116);
	func_769(iParam0, &uVar116);
	func_768(&uVar174);
	uVar232 = 3;
	uVar248 = 3;
	uVar264 = 3;
	func_771(&uVar232);
	func_770(iParam0, &uVar248);
	iVar280 = func_772(&uVar232);
	iVar281 = func_772(&uVar248);
	if (iLocal_284 > iLocal_283)
	{
		func_775(iParam0, &uVar248);
	}
	else
	{
		func_775(iParam0, &uVar232);
	}
	func_773(&uVar264);
	func_774(iParam0);
	func_777(iParam0);
}

void func_479()
{
	Var0 = { func_778() };
	_0x13e7320c762f0477(Var0);
	_0x13e7320c762f0477(Var0.f_1);
	_0x13e7320c762f0477(Var0.f_2);
	_0x13e7320c762f0477(Var0.f_3);
	_0x13e7320c762f0477(Var0.f_4);
	_0x13e7320c762f0477(Var0.f_5);
	func_779();
}

int func_480()
{
	return Global_1900383->f_418;
}

void func_481(int iParam0)
{
	Global_1900383->f_418 = iParam0;
}

void func_482(int iParam0)
{
	Global_1900383->f_418.f_1 = iParam0;
}

void func_483(int iParam0)
{
	Global_1900383->f_418.f_2 = iParam0;
}

int func_484()
{
	return Global_1900383->f_418.f_1;
}

int func_485(int iParam0)
{
	if ((((func_780(iParam0) || func_320(iParam0)) || func_781(iParam0)) || func_782(iParam0)) || func_783(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_486(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	if (is_ped_in_writhe(iParam0))
	{
		return false;
	}
	if (!func_168(iParam0, -982327190))
	{
		task_stand_still(iParam0, -1);
	}
	_0xff1e339ce40eaaaf(iParam0, 0);
	set_animal_tuning_bool_param(iParam0, 48, true);
	_0xf74e134f40192884(iParam0, 2);
	return true;
}

void func_487(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_115(iParam0);
	if (iVar0 < 2)
	{
		return;
	}
	bVar1 = false;
	iVar2 = get_game_timer();
	iVar3 = func_784();
	if (iVar3 + 15000 > iVar2)
	{
		bVar1 = true;
	}
	if (!bVar1)
	{
		iVar4 = func_88(iParam0);
		if (_get_ped_stamina(iVar4) == _get_ped_max_stamina(iVar4))
		{
			return;
		}
		switch (iVar0)
		{
			case 2:
				fVar5 = 2.5f;
				break;
			case 3:
				fVar5 = 5f;
				break;
			case 4:
				fVar5 = 10f;
				break;
		}
		func_785(iVar4, fVar5);
		func_483(iVar2);
	}
}

bool func_488()
{
	return Global_40.f_1095.f_3134;
}

int func_489()
{
	return Global_1900383->f_444.f_18;
}

int func_490(int iParam0)
{
	func_524(iParam0, &iVar0, &iVar1);
	if (!func_764(iParam0, 65536) && !func_764(iParam0, 32768))
	{
		if (func_786(iVar0, iVar1))
		{
			return 1;
		}
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar2]->f_2 == iParam0)
		{
			return Global_40.f_7756[iVar2]->f_1;
		}
		iVar2++;
	}
	return 0;
}

void func_491(int iParam0)
{
	Global_1900383->f_444.f_18 = iParam0;
}

void func_492(int iParam0)
{
	Global_40.f_1095.f_3134 = iParam0;
}

struct<2> func_493(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_494(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

void func_495(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0]->f_435 = iParam1;
}

void func_496(int iParam0)
{
	Global_1935689->f_18 = iParam0;
}

void func_497(int iParam0)
{
	if (func_2() == 0)
	{
		return;
	}
	if (!get_event_data(0, iParam0, &vVar0, 10))
	{
		return;
	}
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35) || is_ped_injured(Global_35))
	{
		return;
	}
	iVar10 = vVar0.z;
	if (!does_entity_exist(iVar10))
	{
		return;
	}
	if (!is_entity_a_ped(iVar10))
	{
		return;
	}
	iVar11 = get_ped_index_from_entity_index(iVar10);
	if (is_entity_dead(iVar11) || is_ped_injured(iVar11))
	{
		return;
	}
	iVar12 = vVar0.x;
	iVar13 = iVar12;
	switch (iVar13)
	{
		case 31:
			iVar14 = 0;
			break;
		case 32:
			iVar14 = 1;
			break;
		case 33:
			iVar14 = 2;
			break;
		default:
			return;
	}
	iVar15 = -1;
	bVar16 = false;
	if (func_388(iVar11))
	{
		bVar16 = true;
		iVar15 = func_401(iVar11);
	}
	bVar17 = false;
	if (!bVar16)
	{
		if (iVar14 != 2)
		{
			return;
		}
		if (_0x3ab6c7b0bb0df4b1(iVar11, -1))
		{
			return;
		}
		if (func_389(iVar11))
		{
			bVar17 = true;
		}
		if (func_390(iVar11))
		{
			bVar17 = true;
		}
		if (func_320(iVar11))
		{
			bVar17 = true;
		}
		iVar18 = get_entity_population_type(iVar11);
		if (iVar18 != 6 && iVar18 != 2)
		{
			bVar17 = true;
		}
	}
	if (bVar16)
	{
		if (func_232())
		{
			iVar19 = func_170();
			if (iVar19 == 22 || iVar19 == 37)
			{
				func_283(18, 1);
			}
			else
			{
				func_283(17, 1);
			}
			return;
		}
	}
	if (bVar16)
	{
		if (func_189(iVar15))
		{
			if (!func_194(16) && !func_196(16))
			{
				func_283(16, 1);
			}
			return;
		}
	}
	func_787(iVar11, iVar14, bVar17);
}

void func_498(int iParam0)
{
	if (func_2() == 0)
	{
		return;
	}
	if (!get_event_data(0, iParam0, &vVar0, 10))
	{
		return;
	}
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35) || is_ped_injured(Global_35))
	{
		return;
	}
	iVar10 = vVar0.z;
	if (!does_entity_exist(iVar10))
	{
		return;
	}
	if (!is_entity_a_ped(iVar10))
	{
		return;
	}
	iVar11 = get_ped_index_from_entity_index(iVar10);
	if (is_entity_dead(iVar11) || is_ped_injured(iVar11))
	{
		return;
	}
	bVar12 = false;
	if (func_388(iVar11))
	{
		bVar12 = true;
	}
	if (!bVar12)
	{
		if (func_389(iVar11))
		{
			return;
		}
		if (func_390(iVar11))
		{
			return;
		}
		if (is_entity_a_mission_entity(iVar11))
		{
			return;
		}
	}
	func_788(-1516555556, iVar11);
}

void func_499(int iParam0)
{
	if (func_2() == 0)
	{
		return;
	}
	if (!get_event_data(0, iParam0, &vVar0, 10))
	{
		return;
	}
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35) || is_ped_injured(Global_35))
	{
		return;
	}
	iVar10 = vVar0.z;
	if (!does_entity_exist(iVar10))
	{
		return;
	}
	if (!is_entity_a_ped(iVar10))
	{
		return;
	}
	iVar11 = get_ped_index_from_entity_index(iVar10);
	if (is_entity_dead(iVar11) || is_ped_injured(iVar11))
	{
		return;
	}
	bVar12 = false;
	if (func_388(iVar11))
	{
		bVar12 = true;
	}
	if (!bVar12)
	{
		if (func_389(iVar11))
		{
			return;
		}
		if (func_390(iVar11))
		{
			return;
		}
		if (is_entity_a_mission_entity(iVar11))
		{
			return;
		}
	}
	iVar13 = func_789();
	if (iVar13 != 0)
	{
		func_788(iVar13, iVar11);
	}
}

void func_500()
{
	Global_40.f_1095.f_3135.f_2++;
}

void func_501(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0]->f_43 = 0;
}

void func_502(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0]->f_12 = iParam1;
}

void func_503(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0]->f_13 = iParam1;
}

int func_504(int iParam0, int iParam1)
{
	if (!_item_database_is_key_valid(iParam1, 0))
	{
		return 0;
	}
	if (!func_727(iParam1))
	{
		return 0;
	}
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	if (is_ped_injured(iParam0))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1627068364:
			break;
	}
	func_790(iParam0, iParam1);
	func_494(func_791(1179720150), 1);
	return 1;
}

bool func_505()
{
	if (func_733(1627068364, 1, 0) || func_733(-1795542128, 1, 0))
	{
		return true;
	}
	return false;
}

int func_506()
{
	return Global_40.f_1095.f_3135.f_2;
}

var func_507()
{
	return Global_1900383->f_444.f_17;
}

void func_508(int iParam0)
{
	Global_1900383->f_444.f_17 = iParam0;
}

void func_509()
{
	Global_1900383->f_444.f_17 = 0;
}

int func_510(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	iVar0 = _0x31fef6a20f00b963(iParam0);
	if (iVar0 == 0)
	{
		if (is_entity_a_ped(iParam0))
		{
			iVar1 = get_ped_index_from_entity_index(iParam0);
			iVar0 = func_281(iVar1);
		}
	}
	return iVar0;
}

bool func_511(int iParam0)
{
	if (!func_792(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 57)
	{
		iVar1 = func_681(iVar0, 1);
		iVar2 = iVar1;
		if (iParam0 == iVar2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_512(int iParam0, int iParam1, int iParam2)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_284(iParam1, 0))
	{
		return;
	}
	if (!func_511(iParam1))
	{
		return;
	}
	iVar0 = func_793(iParam1);
	iVar1 = func_794(iVar0, 1);
	Global_40.f_1095.f_1[iParam0]->f_298[iVar1] = (&Global_40.f_1095.f_1[iParam0]->f_298[iVar1] + iParam2);
	Global_40.f_1095.f_1[iParam0]->f_298[iVar1] = func_795(&(Global_40.f_1095.f_1[iParam0]->f_298[iVar1]), 0, 10);
}

int func_513(int iParam0)
{
	switch (iParam0)
	{
		case -514494287:
			return -1124266369;
		case -150200864:
			return 759906147;
		case -734947450:
			return -1568716381;
		case 2022985736:
			return 1556473961;
		case 2109269555:
			return 2028722809;
		case -888740979:
			return -1963605336;
		case -987731097:
			return 367637652;
		case -444893329:
			return -1598866821;
		case 1528935719:
			return 90264823;
		case -1517904196:
			return 480688259;
		case 229379699:
			return -2021043433;
		case 1642484975:
			return 252669332;
		case -687487191:
			return -1098441944;
		case 657906142:
			return 1654513481;
		case -103050851:
			return 1755643085;
		case 552246565:
			return -1143398950;
		default:
			break;
	}
	return 0;
}

bool func_514(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1124266369:
			*iParam1 = 0;
			return true;
		case 759906147:
			*iParam1 = 1;
			return true;
		case -1568716381:
			*iParam1 = 2;
			return true;
		case 1556473961:
			*iParam1 = 3;
			return true;
		case 2028722809:
			*iParam1 = 4;
			return true;
		case -1963605336:
			*iParam1 = 5;
			return true;
		case 367637652:
			*iParam1 = 6;
			return true;
		case -1598866821:
			*iParam1 = 7;
			return true;
		case 90264823:
			*iParam1 = 8;
			return true;
		case 480688259:
			*iParam1 = 9;
			return true;
		case -2021043433:
			*iParam1 = 10;
			return true;
		case 252669332:
			*iParam1 = 11;
			return true;
		case -1098441944:
			*iParam1 = 12;
			return true;
		case 1654513481:
			*iParam1 = 13;
			return true;
		case 1755643085:
			*iParam1 = 14;
			return true;
		case -1143398950:
			*iParam1 = 15;
			return true;
	}
	return false;
}

int func_515(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (!is_entity_a_ped(iParam0))
	{
		return 0;
	}
	iVar0 = get_ped_index_from_entity_index(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_276(iVar0, &iVar2, &uVar3, &iVar1, &uVar4);
	if (func_277(&uVar5, iVar0, iVar1, iVar2))
	{
	}
	return uVar5;
}

void func_516(int iParam0)
{
	if (func_796(iParam0))
	{
		if (func_94() && func_797(4))
		{
			if (!func_799(func_798(iParam0)))
			{
				if (func_801(func_800(iParam0)))
				{
					_0xd8c7162ab2e2af45(func_802(func_800(iParam0)));
					_map_discovery_set_enabled(func_803(func_800(iParam0)));
				}
			}
		}
	}
}

int func_517(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(iParam1))
	{
		return 0;
	}
	if (_0x9a100f1cf4546629(iParam1) || _0xc346a546612c49a9(iParam1))
	{
		iVar0 = func_515(iParam1);
		if (!func_284(iVar0, 0))
		{
			iVar0 = func_510(iParam1);
		}
	}
	else
	{
		iVar0 = func_510(iParam1);
	}
	iVar1 = func_285(iParam0, iVar0, 1, 1, -142743235);
	return iVar1;
}

bool func_518(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return false;
	}
	iVar0 = func_273(iParam1);
	if (!_0x608bc6a6aacd5036(&Var1, iParam0, iVar0, 0))
	{
		return false;
	}
	iVar5 = Var1.f_3;
	if (!does_entity_exist(iVar5))
	{
		return false;
	}
	return true;
}

bool func_519(int iParam0, int iParam1)
{
	if (iParam1 == 7)
	{
		return false;
	}
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (!_does_volume_exist(&(Global_1357549->f_3[iParam1])))
	{
		return false;
	}
	return is_entity_in_volume(iParam0, &(Global_1357549->f_3[iParam1]), true, 0);
}

bool func_520(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return func_519(func_88(iParam0), iParam1);
}

void func_521(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_387(iParam0, 32);
	func_404();
}

void func_522(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_682(iParam0);
	func_718(iParam0, 0);
	func_804(iParam0, 0f);
}

void func_523(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

void func_524(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

void func_525(var uParam0)
{
	*uParam0 = -377364164;
	uParam0->f_1 = 357708345;
}

void func_526(int iParam0, struct<2> Param1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_805(iParam0, Param1))
	{
	}
	if (!func_806(iParam0, Param1.f_1))
	{
	}
}

void func_527(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_272((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_528(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 57)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_529(var uParam0)
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

void func_530(var uParam0)
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

void func_531(int iParam0, var uParam1)
{
	iVar0 = 100;
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_532(int iParam0, var uParam1)
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

void func_533(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1f;
}

void func_534(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -15;
}

void func_535(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
}

void func_536(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	set_bit(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_537(int iParam0)
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
			func_807(1);
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
			func_808(1);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_808(2);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_808(3);
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
			func_234(1);
			break;
		case 34:
			func_236(1);
			break;
		case 35:
			func_238(1);
			break;
		case 36:
			break;
		case 37:
			func_809(0);
			break;
		case 38:
			func_810(0);
			break;
		case 39:
			func_811(0);
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
			if ((!&Global_1879534 && func_94()) && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_812("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_283(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_94()) && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_812("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_283(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_94()) && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_812("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_283(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_94()) && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_812("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_283(589, 0);
			break;
		case 24:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			if (func_2() == -1)
			{
				if (!func_813(99217379) || func_814(99217379) == 2110595215)
				{
					if (func_640())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = 899611344;
					}
					if (!func_733(iVar0, 1, 0))
					{
						func_815(iVar0, 1, 752097756);
					}
					func_816(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_2() == -1)
			{
				if (!func_733(1013902307, 1, 0))
				{
					func_815(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_2() == -1)
			{
				if (!func_733(1013902307, 1, 0))
				{
					func_815(1013902307, 1, 752097756);
				}
				if (!func_733(142640135, 1, 0))
				{
					func_815(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_2() == -1)
			{
				if (!func_733(786809402, 1, 0))
				{
					func_815(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_2() == -1)
			{
				if (!func_733(786809402, 1, 0))
				{
					func_815(786809402, 1, 752097756);
				}
				if (!func_733(-518019409, 1, 0))
				{
					func_815(-518019409, 1, 752097756);
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
			func_817();
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

bool func_538(int iParam0)
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

bool func_539()
{
	return _unlock_is_unlocked(99890643);
}

bool func_540(int iParam0)
{
	iVar0 = func_720(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1 = { func_330(0) };
	if (func_818(&Var1, iVar0, 0) > 0)
	{
		return true;
	}
	return false;
}

int func_541(int iParam0)
{
	Var0.f_9 = -1591664384;
	if (!func_719(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { Var0.f_5 };
	Var29.f_4 = Var0.f_9;
	if (!func_819(Var0.f_4, &Var0, &Var29, -1, -142743235, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_542(int iParam0)
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
			return -2026073756;
			return 729407854;
			return 2002245664;
			return -1120227140;
			return 1142681594;
			return 1214981718;
			return -845373950;
			return -864588185;
			return 1482814085;
			return -1040918754;
			return 535545841;
			return 1686036388;
			return -621245377;
			return 2125477381;
			return 1808724704;
			return -1745871311;
			return -1366099125;
			return -1900776854;
			return 1381855825;
			return -470894301;
			return -58297715;
			return 919533729;
			return -1158763155;
			return 1112812928;
			return 753764318;
			return 2100045093;
			return 1097965086;
			return -2136667309;
			return -376463594;
			return -1917318030;
			return 1631640006;
			return -1565311117;
			return 1714576673;
			return 210760725;
			return 2051021144;
			return 1924406350;
			return -1990143531;
			return 1741899492;
			return -1629575335;
			return 1096294193;
			return -1162498792;
			return -212500005;
			return -538557079;
			return 171150858;
			return 67538819;
			return -126472599;
			return -1219957736;
			return -332060056;
			return 1917500091;
			return -1043453945;
			return 1723487083;
			return 2044230644;
			return 1680713143;
			return 344528703;
			return -1674873797;
			return 281852151;
			return -285185056;
			return -1692268955;
			return 2130706226;
			return -1754375530;
			return -71211764;
			return -1390353518;
			return 330935532;
			return -935042458;
			return -41062704;
			return 887669186;
			return 2102774612;
			return -2011111190;
			return -535752499;
			return 0;
		}

int func_543(int iParam0, int iParam1)
{
	if (!func_284(iParam1, 0))
	{
		return 0;
	}
	if (!func_820(iParam1))
	{
		return 0;
	}
	if (func_540(iParam0))
	{
		return 0;
	}
	iVar0 = func_720(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_330(0) };
	Var1.f_4 = iVar0;
	if (!func_334(iParam1, &uVar6, &Var1, 1, 752097756, 0))
	{
		return 0;
	}
	return 1;
}

float func_544(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	if (!func_71(iParam0))
	{
		return 0f;
	}
	iVar0 = func_88(iParam0);
	fVar1 = func_190(iVar0);
	return fVar1;
}

int func_545(int iParam0, var uParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_719(iParam0, &Var0))
	{
		return 0;
	}
	Var0.f_14 = uParam1->f_14;
	Var0.f_15 = uParam1->f_15;
	Var0.f_16 = { uParam1->f_16 };
	Var0.f_24 = uParam1->f_24;
	Var0.f_25 = uParam1->f_25;
	Var0.f_26 = uParam1->f_26;
	Var0.f_27 = uParam1->f_27;
	Var0.f_28 = uParam1->f_28;
	if (is_string_null_or_empty(&(Var0.f_16)))
	{
		StringCopy(&(Var0.f_16), func_821(), 64);
	}
	if (!_0xd80a8854db5cfba5(func_666(0), &Var0, &Var0, 29))
	{
		return 0;
	}
	return 1;
}

void func_546()
{
	if (func_822())
	{
		uVar0 = func_823();
		remove_blip(&uVar0);
		func_824(0);
	}
}

int func_547(int iParam0)
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

int func_548(int iParam0)
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

void func_549(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_825();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_826(iParam0);
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
	if (func_140(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_640())
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
	Global_40.f_11095.f_35 = func_795(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_825();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_827(iVar1);
		func_829(func_828(), 0, 4000);
		func_830(Global_40.f_11095.f_35);
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
		func_831(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_494(func_832(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (does_entity_exist(iParam5))
			{
				decor_set_int(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_548(14))
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
					sParam4 = func_833(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_754(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_754(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_494(func_832(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_548(4))
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
					sParam4 = func_833(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_754(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_754(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_832(-1990689970) };
	stat_id_set_int(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		_0xe6b763c7f4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_834(10, 1);
	}
}

void func_550(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

int func_551()
{
	return Global_40.f_1095.f_3135.f_1;
}

var func_552()
{
	return Global_1900383->f_444.f_2;
}

void func_553()
{
	Global_1900383->f_444.f_2 = 0;
}

void func_554()
{
	Global_40.f_1095.f_3135.f_1++;
}

void func_555(int iParam0)
{
	Global_1900383->f_444.f_2 = iParam0;
}

bool func_556()
{
	return Global_1900383->f_444.f_3;
}

int func_557()
{
	return Global_1900383->f_444.f_4;
}

void func_558(int iParam0)
{
	Global_1900383->f_444.f_3 = iParam0;
}

void func_559()
{
	Global_1900383->f_444.f_4 = 0;
}

bool func_560(int iParam0)
{
	iVar0 = _item_database_get_acquire_costs_count(iParam0);
	Var1.f_4 = 15;
	Var1.f_36 = 10;
	iVar48 = 0;
	while (iVar48 < iVar0)
	{
		if (_item_database_get_acquire_cost(iParam0, iVar48, &Var1))
		{
			if (Var1.f_2 == 1644203656 && !func_835(iParam0, Var1, 1))
			{
				return true;
			}
		}
		iVar48++;
	}
	return false;
}

int func_561()
{
	iVar0 = player_id();
	if (is_player_dead(iVar0))
	{
		return 0;
	}
	if (!_0x3ee1f7a8c32f24e1(iVar0, &iVar1, 0, 0))
	{
		return 0;
	}
	if (!is_entity_a_ped(iVar1))
	{
		return 0;
	}
	if (is_entity_dead(iVar1))
	{
		return 0;
	}
	iVar2 = get_ped_index_from_entity_index(iVar1);
	if (is_ped_injured(iVar2))
	{
		return 0;
	}
	if (is_ped_in_writhe(iVar2))
	{
		return 0;
	}
	if (!func_391(iVar2))
	{
		return 0;
	}
	return iVar2;
}

int func_562()
{
	return Global_1900383->f_411.f_1;
}

void func_563(int iParam0)
{
	Global_1900383->f_411.f_1 = iParam0;
}

void func_564(int iParam0)
{
	Global_1900383->f_411 = iParam0;
}

void func_565()
{
	if (func_194(47))
	{
		func_195(47);
	}
	if (func_196(47))
	{
		func_197(47);
	}
	if (func_194(48))
	{
		func_195(48);
	}
	if (func_196(47))
	{
		func_197(47);
	}
	if (func_194(49))
	{
		func_195(49);
	}
	if (func_196(49))
	{
		func_197(49);
	}
	if (func_194(50))
	{
		func_195(50);
	}
	if (func_196(50))
	{
		func_197(50);
	}
	if (func_194(51))
	{
		func_195(51);
	}
	if (func_196(51))
	{
		func_197(51);
	}
}

bool func_566(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
	}
	uVar1 = _0x0139637a3bff8b6d(iParam0, &uVar0);
	if (_0x0772f87d7b07719a(player_id(), uVar0, uVar1))
	{
		return true;
	}
	return false;
}

void func_567(int iParam0)
{
	Global_1900383->f_411.f_2 = iParam0;
}

int func_568()
{
	return Global_1900383->f_411.f_2;
}

void func_569()
{
	func_564(0);
	func_563(0);
	func_567(0);
}

bool func_570()
{
	return Global_1900383->f_444.f_5;
}

int func_571()
{
	return Global_40.f_1095.f_3135.f_3;
}

int func_572()
{
	return Global_1900383->f_444.f_6;
}

void func_573(int iParam0)
{
	Global_1900383->f_444.f_5 = iParam0;
}

void func_574()
{
	Global_1900383->f_444.f_6 = 0;
}

void func_575(int iParam0)
{
	Global_1900383->f_444.f_9 = iParam0;
}

void func_576()
{
	Global_40.f_1095.f_3135.f_3++;
}

bool func_577()
{
	return Global_1900383->f_444.f_7;
}

int func_578(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
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

int func_579()
{
	return Global_1900383->f_444.f_8;
}

void func_580(int iParam0)
{
	Global_1900383->f_444.f_7 = iParam0;
}

void func_581()
{
	Global_1900383->f_444.f_8 = 0;
}

int func_582()
{
	return Global_1900383->f_444.f_9;
}

bool func_583()
{
	return Global_1900383->f_444.f_10;
}

void func_584(int iParam0)
{
	Global_1900383->f_444.f_10 = iParam0;
}

void func_585()
{
	Global_1900383->f_444.f_9 = 0;
}

bool func_586()
{
	return Global_40.f_1095.f_3135.f_4;
}

int func_587(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = -1;
	iVar1 = -1;
	fVar4 = -1f;
	iVar0 = 0;
	while (iVar0 < 153)
	{
		if (!func_588(iVar0))
		{
		}
		else if (func_836(iVar0) != iParam0)
		{
		}
		else if (bParam1)
		{
			if (!func_837(iVar0))
			{
			}
			else
			{
				iVar2 = func_838(iVar0);
				if (bParam3)
				{
					if (!func_839(iVar2))
					{
					}
					else if (bParam2)
					{
						if (func_840(iVar2))
						{
						}
						else
						{
							fVar3 = func_841(Global_35, func_589(iVar0), 1);
							if (fVar3 < fVar4 || fVar4 == -1f)
							{
								iVar1 = iVar0;
								fVar4 = fVar3;
							}
						}
						iVar0++;
						return iVar1;
					}
				}
			}
		}
	}
}

bool func_588(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

Vector3 func_589(int iParam0)
{
	if (!func_588(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return 2947.055f, 1320.15f, 43.8203f;
		case 2:
			return 2939.063f, 1287.116f, 43.6529f;
		case 3:
			return 2932.97f, 1282.56f, 43.67f;
		case 1:
			return 2947.64f, 1344.901f, 43.899f;
		case 99:
			return -5227.357f, -3470.067f, -20.49293f;
		case 100:
			return -5228.75f, -3468.28f, -21.57f;
		case 7:
			return -784.49f, -1321.95f, 42.88f;
		case 10:
			return -753.4219f, -1284.24f, 43.20049f;
		case 9:
			return -814.4116f, -1367.243f, 43.7509f;
		case 13:
			return -868.3356f, -1366.207f, 44.75311f;
		case 14:
			return -875.03f, -1327.09f, 42.97f;
		case 15:
			return -875.02f, -1326.71f, 42.97f;
		case 17:
			return -762.0716f, -1293.549f, 42.8355f;
		case 12:
			return -813.6f, -1373.8f, 44.2f;
		case 16:
			return -805.72f, -1330.5f, 42.67f;
		case 18:
			return 1417.288f, 273.5687f, 88.4881f;
		case 20:
			return 1521.91f, 441.15f, 89.68f;
		case 21:
			return 1523.63f, 442.65f, 89.68f;
		case 22:
			return 2161.5f, -618.5f, 43f;
		case 23:
			return -1092.88f, -575.69f, 81.41f;
		case 24:
			return -1094.35f, -577.48f, 81.41f;
		case 25:
			return 1294.084f, -1303.102f, 76.0418f;
		case 26:
			return 1297.423f, -1278.412f, 75.65752f;
		case 27:
			return 1319.43f, -1142.08f, 81.41f;
		case 28:
			return 1329.755f, -1294.218f, 76.0092f;
		case 29:
			return 1323.734f, -1321.775f, 77.8924f;
		case 30:
			return 1226.71f, -1295.08f, 75.9f;
		case 31:
			return 1230.34f, -1298.578f, 75.9027f;
		case 32:
			return 1332.55f, -1298.679f, 75.35602f;
		case 35:
			return 1209.053f, -193.1814f, 101.9785f;
		case 36:
			return 2644.188f, -1292.507f, 51.2496f;
		case 37:
			return 2657.466f, -1180.96f, 53.2785f;
		case 38:
			return 2819.495f, -1331.29f, 45.514f;
		case 39:
			return 2721.24f, -1231.66f, 49.37f;
		case 41:
			return 2859.51f, -1202.16f, 48.59f;
		case 42:
			return 2825.607f, -1318.207f, 45.7557f;
		case 43:
			return 2718f, -1287f, 49.6f;
		case 44:
			return 2508.212f, -1449.654f, 48.41523f;
		case 45:
			return 2748.811f, -1398.277f, 45.18309f;
		case 46:
			return 2747.824f, -1396.384f, 45.18309f;
		case 47:
			return 2555.09f, -1166.97f, 52.68f;
		case 48:
			return 2842.45f, -1227.66f, 46.66f;
		case 49:
			return 2817.64f, -1325.011f, 47.00512f;
		case 50:
			return 2836.992f, -1305.805f, 45.6964f;
		case 55:
			return 2832.02f, -1225.563f, 46.6422f;
		case 54:
			return 2734.174f, -1119.755f, 50.10792f;
		case 51:
			return 2683.84f, -1399.642f, 45.37881f;
		case 60:
			return -1753.404f, -392.557f, 155.2576f;
		case 61:
			return -1790f, -388.27f, 159.33f;
		case 62:
			return -1818.99f, -370.94f, 162.3f;
		case 63:
			return -1819.88f, -561.8194f, 157.2323f;
		case 65:
			return -1763.78f, -385.1118f, 156.7401f;
		case 64:
			return -1773.314f, -393.9122f, 155.5647f;
		case 68:
			return -307.9643f, 773.6048f, 117.7031f;
		case 69:
			return -306.3f, 815.08f, 117.98f;
		case 70:
			return 0f, 0f, 0f;
		case 72:
			return -338.8647f, 767.4334f, 115.5628f;
		case 73:
			return -287.9538f, 804.0544f, 118.3859f;
		case 74:
			return -324f, 803.72f, 116.88f;
		case 75:
			return -281.82f, 778.97f, 118.5f;
		case 76:
			return -369.4457f, 786.6935f, 115.9904f;
		case 77:
			return -178.0316f, 628.0621f, 113.0896f;
		case 78:
			return -175.0377f, 631.7999f, 113.0896f;
		case 80:
			return -272.7182f, 785.6115f, 117.4202f;
		case 79:
			return -325.532f, 773.6285f, 117.5038f;
		case 82:
			return 3025.786f, 562.7253f, 43.7167f;
		case 86:
			return 2986.224f, 569.9468f, 43.62284f;
		case 85:
			return 2986.94f, 574.9f, 43.64f;
		case 84:
			return 2967.273f, 796.7416f, 52.5948f;
		case 87:
			return -1302.951f, 394.6608f, 94.3817f;
		case 89:
			return -1300.83f, 399.7599f, 94.38248f;
		case 88:
			return -1299.891f, 401.3615f, 94.38248f;
		case 93:
			return -5518.071f, -2906.217f, -2.7513f;
		case 90:
			return -5487.197f, -2939.038f, -1.3872f;
		case 91:
			return -5507.993f, -2964.844f, -1.6215f;
		case 92:
			return -5509.019f, -2947.435f, -2.8934f;
		case 94:
			return -5520.701f, -3044.427f, -1.40419f;
		case 95:
			return -3687.3f, -2623.39f, -14.44f;
		case 4:
			return -2842.211f, 137.3398f, 183.8268f;
		case 5:
			return -1005.934f, -540.8262f, 97.9502f;
		case 34:
			return 2076.835f, 1000.829f, 111.4973f;
		case 67:
			return -2251.034f, -1916.911f, 115.9488f;
		case 56:
			return -142.072f, -23.5242f, 95.0883f;
		case 57:
			return 675.3091f, -1251.233f, 43.0152f;
		case 58:
			return 1875.2f, -1859.182f, 41.8f;
		case 59:
			return 2366.084f, 1347.122f, 105.1305f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_590(int iParam0)
{
	Global_1900383->f_444.f_11 = *iParam0;
}

var func_591()
{
	return Global_1900383->f_444.f_11;
}

bool func_592()
{
	if (func_380(7))
	{
		return true;
	}
	if (func_210())
	{
		return true;
	}
	return false;
}

bool func_593(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	iVar0 = func_211();
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	iVar1 = create_itemset(false);
	if (!is_itemset_valid(iVar1))
	{
		return false;
	}
	_0x20a4bf0e09bee146(iVar1);
	find_all_attached_carriable_entities(iParam0, iVar1);
	bVar2 = false;
	iVar3 = get_itemset_size(iVar1);
	if (iVar3 > 0)
	{
		if (is_in_itemset(iVar0, iVar1))
		{
			bVar2 = true;
		}
	}
	destroy_itemset(iVar1);
	if (bVar2)
	{
		return true;
	}
	return false;
}

bool func_594()
{
	if (!func_380(7))
	{
		if (func_595(7))
		{
			func_842();
			return true;
		}
	}
	if (func_380(7))
	{
		if (func_213() == 0)
		{
			if (does_entity_exist(func_88(7)))
			{
				if (!is_entity_in_water(func_88(7)))
				{
					return true;
				}
			}
		}
	}
	if (func_593(Global_35))
	{
		return true;
	}
	iVar0 = get_game_timer();
	iVar1 = func_843();
	if (iVar1 == 0)
	{
		func_844(get_game_timer());
		return true;
	}
	if (iVar1 + 10000 > iVar0)
	{
		return true;
	}
	if (_0x383f64263f946e45(&uVar2, func_211(), 4, Global_35, 0, 1))
	{
		func_842();
		return true;
	}
	return false;
}

bool func_595(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	iVar0 = func_88(iParam0);
	if (!does_entity_exist(iVar0))
	{
		if (iParam0 == func_201())
		{
			return true;
		}
		return false;
	}
	if (iVar0 == _get_saddle_horse_for_player(player_id()))
	{
		return true;
	}
	return false;
}

void func_596()
{
	Global_1900383->f_444.f_12 = 0;
}

var func_597()
{
	return Global_1900383->f_444.f_12;
}

void func_598(int iParam0)
{
	Global_1900383->f_444.f_12 = iParam0;
}

int func_599()
{
	return Global_1900383->f_441;
}

void func_600(int iParam0)
{
	Global_1900383->f_441 = iParam0;
}

bool func_601()
{
	return Global_1900383->f_444.f_15;
}

void func_602(int iParam0)
{
	Global_1900383->f_444.f_15 = iParam0;
}

int func_603()
{
	return Global_40.f_1095.f_3135;
}

void func_604()
{
	Global_1900383->f_444.f_16++;
}

int func_605()
{
	return Global_1900383->f_444.f_16;
}

bool func_606(int iParam0)
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

bool func_607(int iParam0)
{
	if (func_399(player_id(), 1, 0, 1))
	{
		return false;
	}
	if (!func_400(iParam0))
	{
		return false;
	}
	if (func_398(iParam0, &uVar0, -1082130432))
	{
		if (_0x7f9b9791d4cb71f6(iParam0, uVar0, 0, 0) == 1)
		{
			return false;
		}
		if (_0x69e181772886f48b(player_id()))
		{
			return false;
		}
	}
	return true;
}

bool func_608(int iParam0, bool bParam1, bool bParam2)
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
		if (func_845())
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
		iVar0 = func_846(&(Global_1898164->f_1[0]));
		if (func_847(iVar0) && func_848((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_269(&(Global_1898164->f_1[0])))
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

int func_609()
{
	if (!func_135((*Global_1835011)[4]->f_1, 1))
	{
		return 0;
	}
	else if (!func_135((*Global_1347702)[66]->f_15, 1))
	{
		return 1;
	}
	else if (!func_135((*Global_1347702)[67]->f_15, 1))
	{
		return 2;
	}
	else if (!func_135((*Global_1835011)[38]->f_1, 1))
	{
		return 3;
	}
	else if (!func_135((*Global_1347702)[68]->f_15, 1))
	{
		return 4;
	}
	else if (!func_135((*Global_1835011)[59]->f_1, 1))
	{
		return 5;
	}
	else if (!func_135((*Global_1835011)[67]->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

bool func_610()
{
	if (func_849())
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Global_1905944[iVar0] != 0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_611(int iParam0)
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

int func_612(int iParam0)
{
	return iParam0 & 31;
}

int func_613(bool bParam0, bool bParam1, bool bParam2)
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

bool func_614()
{
	if (func_733(1620353486, 1, 0))
	{
		return true;
	}
	return false;
}

float func_615(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return -1f;
	}
	return func_187(Global_35, iParam0, bParam1, bParam2);
}

bool func_616()
{
	if (func_733(-224110471, 1, 0))
	{
		return true;
	}
	return false;
}

void func_617(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_2() == -1)
	{
		if (func_850(43))
		{
			if (func_431(iParam0, 412399755))
			{
				func_851(-1791518714);
				if (func_852() == 0)
				{
					func_853(0, 10);
					iVar0 = func_854(iParam0, iParam1, 1);
					if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
					{
						if (func_855(iParam0) < func_856(iParam0))
						{
							func_857(43, iParam0, iParam1, -1791518714, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_850(44))
		{
			if (func_431(iParam0, 709057512))
			{
				func_851(-2087881550);
				if (func_852() == 1)
				{
					func_853(0, 10);
					iVar0 = func_854(iParam0, iParam1, 2);
					if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
					{
						if (func_855(iParam0) < func_856(iParam0))
						{
							func_857(43, iParam0, iParam1, -2087881550, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_850(45))
		{
			if (func_431(iParam0, -1478961327))
			{
				func_851(1908068621);
				if (func_852() == 2)
				{
					func_853(0, 10);
					iVar0 = func_854(iParam0, iParam1, 4);
					if (((iParam0 == 2116770557 || iParam0 == -651064726) || iParam0 == -404270094) || iParam0 == 2093126853)
					{
						if (func_855(iParam0) < func_856(iParam0))
						{
							func_857(43, iParam0, iParam1, 1908068621, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_850(46))
		{
			if (func_431(iParam0, -1238404098))
			{
				func_851(1611247019);
				if (func_852() == 3)
				{
					func_853(0, 10);
					iVar0 = func_854(iParam0, iParam1, 8);
					if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
					{
						if (func_855(iParam0) < func_856(iParam0))
						{
							func_857(43, iParam0, iParam1, 1611247019, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_850(47))
		{
			if (func_431(iParam0, 1160548794))
			{
				func_851(1319635688);
				if (func_852() == 4)
				{
					func_853(0, 10);
					iVar0 = func_854(iParam0, iParam1, 16);
					if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
					{
						if (func_855(iParam0) < func_856(iParam0))
						{
							func_857(43, iParam0, iParam1, 1319635688, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

void func_618(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = _0x126cbebba46693cf(iVar1, 678508515, -1160144609);
		if (func_733(func_858(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_859(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_860(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

bool func_619(bool bParam0)
{
	if (func_861())
	{
		return false;
	}
	if (_0x7ec0d68233e391ac(5) == 2)
	{
		return false;
	}
	if ((!is_screen_faded_in() || is_screen_fading_in()) || is_screen_fading_out())
	{
		return false;
	}
	if (!bParam0)
	{
		if (!func_610())
		{
			return false;
		}
	}
	if (Global_16)
	{
		return false;
	}
	if (!func_862())
	{
		return false;
	}
	if (_0xf236c84c6adfcb2f())
	{
		return false;
	}
	if (func_863())
	{
		return false;
	}
	return true;
}

int func_620(int iParam0)
{
	iVar0 = 0;
	iVar1 = Global_1914319->f_17378.f_1010.f_201;
	if (iParam0 != 0)
	{
		if (iVar1 < 200)
		{
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				if (&Global_1914319->f_17378.f_1010[iVar0] == iParam0)
				{
					return 1;
				}
				iVar0++;
			}
		}
	}
	return 0;
}

bool func_621(int iParam0, int iParam1)
{
	if (func_2() == -1)
	{
		if (iParam1 == 61)
		{
			if (func_431(iParam0, 1490540191))
			{
				return true;
			}
		}
	}
	return false;
}

int func_622(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar5 = func_836(iParam1);
	if (iVar5 == -1)
	{
		return 0;
	}
	if (!func_864(6, &Var0))
	{
		return 0;
	}
	Var0.f_2 = -815325344;
	Var0.f_3 = func_865(iVar5);
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		iVar6 = iParam0;
		Var0.f_2 = 549615901;
		Var0.f_3 = iVar6;
		if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_623(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_786(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_866(iParam0))
	{
		return false;
	}
	if (func_867(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_764(iParam0, 1)) || func_17(32768))
	{
		if (!func_764(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_862())
	{
		return false;
	}
	return true;
}

void func_624(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_625(int iParam0, int iParam1, int iParam2)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_793(iParam1);
	iVar1 = func_794(iVar0, 1);
	Global_40.f_1095.f_1[iParam0]->f_298[iVar1] = (&Global_40.f_1095.f_1[iParam0]->f_298[iVar1] - iParam2);
	Global_40.f_1095.f_1[iParam0]->f_298[iVar1] = func_795(&(Global_40.f_1095.f_1[iParam0]->f_298[iVar1]), 0, 10);
}

int func_626(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!func_284(iParam1, 0))
	{
		return 0;
	}
	bVar0 = iParam4 == 562618531;
	bVar1 = iParam4 == 1992602754;
	bVar2 = iParam4 == -1387038764;
	if (!func_868(iParam0, iParam1, 1))
	{
		return 0;
	}
	Var3 = { func_734(iParam1) };
	if (_stat_id_is_valid(&Var3))
	{
		if ((func_869(iParam0, iParam1) - iParam2) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var3, iParam2);
		}
		else if ((func_869(iParam0, iParam1) - iParam2) < 0)
		{
			func_626(iParam0, iParam1, func_735(iParam1, 0, 0), bParam3, iParam4);
			return 0;
		}
	}
	if (!func_870(iParam0, iParam1, iParam2, iParam4, bParam3))
	{
		return 0;
	}
	if (!func_668(0))
	{
		bParam3 = true;
	}
	if (!bParam3 && iParam1 != 1309979101)
	{
		func_732(iParam1, -iParam2, bVar0, bVar1, bVar2);
	}
	return 1;
}

int func_627(int iParam0, int iParam1, int iParam2)
{
	if (!func_284(iParam1, 0))
	{
		return 0;
	}
	Var0 = { func_871(iParam0) };
	Var5 = { func_872(iParam0, iParam1, Var0, Var0.f_4) };
	if (_0xcb5d11f9508a928d(iParam0, &Var5, &Var0, iParam1, Var0.f_4, iParam2, 752097756))
	{
		if (func_431(iParam1, -839724752) && func_873(iParam1, 4))
		{
			if (!func_850(42))
			{
				func_874(iParam1);
			}
		}
		return 1;
	}
	return 0;
}

void func_628(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	if (func_630(iParam0, iParam1, 1))
	{
		iVar0 = func_875(iParam1);
		iVar1 = func_876(iParam0);
		iVar2 = (func_876(iParam0) - func_876(iParam1));
		iVar3 = (func_875(iParam0) - func_875(iParam1));
		iVar4 = (func_877(iParam0) - func_877(iParam1));
		iVar5 = (func_631(iParam0) - func_631(iParam1));
		iVar6 = (func_878(iParam0) - func_878(iParam1));
		iVar7 = (func_879(iParam0) - func_879(iParam1));
	}
	else
	{
		iVar0 = func_875(iParam0);
		iVar1 = func_876(iParam1);
		iVar2 = (func_876(iParam1) - func_876(iParam0));
		iVar3 = (func_875(iParam1) - func_875(iParam0));
		iVar4 = (func_877(iParam1) - func_877(iParam0));
		iVar5 = (func_631(iParam1) - func_631(iParam0));
		iVar6 = (func_878(iParam1) - func_878(iParam0));
		iVar7 = (func_879(iParam1) - func_879(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_880(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_881(to_float(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

int func_629(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = func_273(iParam1);
	if (!_0x608bc6a6aacd5036(&Var1, iParam0, iVar0, 0))
	{
		return 0;
	}
	iVar5 = Var1.f_3;
	if (!does_entity_exist(iVar5))
	{
		return 0;
	}
	return iVar5;
}

bool func_630(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_882(iParam1) || !func_882(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

int func_631(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

void func_632(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_633(var uParam0)
{
	func_883(uParam0, 0f);
}

bool func_634(var uParam0)
{
	return func_884(*uParam0, 1);
}

int func_635(var uParam0, float fParam1)
{
	if (!func_634(uParam0))
	{
		return 0;
	}
	if (func_885(uParam0) > fParam1)
	{
		return 1;
	}
	return 0;
}

char* func_636(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

char* func_637(int iParam0)
{
	if (iParam0 == 255)
	{
		if (func_886(37, iParam0))
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
	if (func_886(37, iParam0))
	{
		return _0xd8402b858f4ddd88(&((*Global_1108178)[iParam0]->f_12), get_length_of_literal_string(&((*Global_1108178)[iParam0]->f_12)));
	}
	return get_player_name(&(Global_1225639->f_120[iParam0]));
}

char* func_638(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_887(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

bool func_639()
{
	if (func_2() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

bool func_640()
{
	if (func_2() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

bool func_641(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = 0;
			break;
		case 1:
			*iParam1 = 1;
			break;
		default:
			return false;
	}
	return true;
}

int func_642(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 100;
	}
	return 0;
}

int func_643(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return 0;
	}
	if (func_641(iParam1, &iVar0))
	{
		return _get_attribute_core_value(iParam0, iVar0);
	}
	return 0;
}

void func_644(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	iParam2 = func_795(iParam2, 0, 100);
	if (func_641(iParam1, &iVar0))
	{
		_set_attribute_core_value(iParam0, iVar0, iParam2);
	}
}

float func_645(int iParam0, int iParam1)
{
	iVar0 = get_game_timer();
	iVar1 = (iVar0 - Global_40.f_1095.f_1[iParam0]->f_407[iParam1]->f_3);
	iVar1 = func_795(iVar1, 0, 30000);
	fVar2 = (to_float(iVar1) * 0.001f);
	return fVar2;
}

void func_646(int iParam0, int iParam1, int iParam2)
{
	Global_40.f_1095.f_1[iParam0]->f_398[iParam1]->f_3 = iParam2;
}

void func_647(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (func_641(iParam2, &iVar1))
	{
		iVar0 = _get_attribute_core_value(iParam0, iVar1);
	}
	iVar2 = func_578(iParam1, iParam2);
	if (iVar2 != iVar0)
	{
		func_888(iParam1, iParam2, iVar0);
	}
}

float func_648(int iParam0, int iParam1)
{
	return Global_40.f_1095.f_1[iParam0]->f_398[iParam1]->f_2;
}

void func_649(int iParam0, int iParam1)
{
	fVar0 = func_648(iParam0, iParam1);
	fVar1 = func_645(iParam0, iParam1);
	fVar0 = (fVar0 - fVar1);
	if (fVar0 < 0f)
	{
		fVar0 = 0f;
	}
	func_889(iParam0, iParam1, fVar0);
}

void func_650(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35))
	{
	}
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	bVar0 = false;
	if (func_84(iParam1) == 2)
	{
		bVar0 = true;
	}
	bVar1 = false;
	if (func_320(iParam0))
	{
		bVar1 = true;
	}
	bVar2 = false;
	if (is_ped_on_mount(Global_35))
	{
		if (get_mount(Global_35) == iParam0)
		{
			bVar2 = true;
		}
	}
	bVar3 = false;
	if (_0xefc4303ddc6e60d3(Global_35))
	{
		if (_0xed1f514af4732258(Global_35) == iParam0)
		{
			bVar3 = true;
		}
	}
	bVar6 = false;
	bVar7 = false;
	switch (iParam2)
	{
		case 0:
		case 1:
			iVar5 = func_578(iParam1, iParam2);
			if (bVar0)
			{
				if (iVar5 < 100)
				{
					bVar6 = true;
				}
				else
				{
					bVar7 = true;
				}
			}
			else if (bVar1)
			{
				if (iVar5 < 55)
				{
					bVar6 = true;
				}
				else
				{
					bVar7 = true;
				}
			}
			else if (bVar3)
			{
				if (iVar5 < 45)
				{
					bVar6 = true;
				}
				else
				{
					bVar7 = true;
				}
			}
			else if (!bVar2)
			{
				if (iVar5 < 30)
				{
					bVar6 = true;
				}
				else
				{
					bVar7 = true;
				}
			}
			else if (func_890(iParam0, iParam2))
			{
				bVar7 = true;
			}
			else
			{
				fVar4 = -48f;
				fVar8 = func_891(iParam1, iParam2);
				fVar4 = (fVar4 - (fVar4 * fVar8));
			}
			break;
	}
	if (fVar4 < 0f)
	{
		if (func_76(8192))
		{
			bVar7 = true;
		}
	}
	if (bVar6)
	{
		if (func_173(iParam1, 128))
		{
			bVar7 = true;
		}
		else
		{
			fVar4 = 1f;
		}
	}
	fVar9 = (fVar4 * 60f);
	fVar10 = func_645(iParam1, iParam2);
	fVar11 = ((fVar10 / fVar9) * 100f);
	fVar12 = func_892(iParam1, iParam2);
	iVar13 = func_578(iParam1, iParam2);
	iVar14 = 0;
	if (!bVar7)
	{
		if ((fVar12 < 0f && fVar11 > 0f) || (fVar12 > 0f && fVar11 < 0f))
		{
			fVar12 = 0f;
		}
		fVar12 = (fVar12 + fVar11);
		if (fVar12 >= 1f)
		{
			fVar12 = (fVar12 - 1f);
			iVar14++;
		}
		else if (fVar12 <= -1f)
		{
			fVar12 = (fVar12 + 1f);
			iVar14 = (iVar14 - 1);
		}
		func_893(iParam1, iParam2, fVar12);
	}
	if (iVar14 == 0)
	{
		return;
	}
	func_888(iParam1, iParam2, (iVar13 + iVar14));
}

void func_651(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_21(0, &uVar0);
	func_21(1, &uVar12);
	bVar24 = false;
	if (func_140(40))
	{
		bVar24 = true;
	}
	bVar25 = false;
	bVar26 = false;
	switch (iParam1)
	{
		case 0:
			if (iParam2 >= 50 && iParam3 < 50)
			{
				if (bVar24)
				{
					bVar25 = true;
				}
			}
			if (iParam2 > 0 && iParam3 == 0)
			{
				if (bVar24)
				{
					bVar25 = true;
				}
				bVar26 = true;
			}
			break;
		case 1:
			if (iParam2 >= 50 && iParam3 < 50)
			{
				if (bVar24)
				{
					bVar25 = true;
				}
			}
			if (iParam2 > 0 && iParam3 == 0)
			{
				if (bVar24)
				{
					bVar25 = true;
				}
				bVar26 = true;
			}
			break;
	}
	if (bVar25)
	{
		func_580(1);
		func_894(get_game_timer());
	}
	if (bVar26)
	{
		func_494(func_791(2009660790), 1);
	}
}

bool func_652(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = 16;
			break;
		case 1:
			*iParam1 = 8;
			break;
		case 2:
			*iParam1 = 13;
			break;
		default:
			return false;
	}
	return true;
}

int func_653(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 0;
		case 2:
			return 50;
	}
	return 0;
}

float func_654(int iParam0, int iParam1)
{
	iVar0 = get_game_timer();
	iVar1 = (iVar0 - Global_40.f_1095.f_1[iParam0]->f_407[iParam1]->f_3);
	iVar1 = func_795(iVar1, 0, 30000);
	fVar2 = (to_float(iVar1) * 0.001f);
	return fVar2;
}

void func_655(int iParam0, int iParam1, int iParam2)
{
	Global_40.f_1095.f_1[iParam0]->f_407[iParam1]->f_3 = iParam2;
}

void func_656(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (func_652(iParam2, &iVar0))
	{
		iVar1 = get_attribute_base_rank(iParam0, iVar0);
	}
	iVar2 = func_437(iParam1, iParam2);
	if (iVar2 != iVar1)
	{
		func_746(iParam1, iParam2, iVar1);
	}
}

float func_657(int iParam0, int iParam1)
{
	return Global_40.f_1095.f_1[iParam0]->f_407[iParam1]->f_2;
}

void func_658(int iParam0, int iParam1)
{
	fVar0 = func_657(iParam0, iParam1);
	fVar1 = func_654(iParam0, iParam1);
	fVar0 = (fVar0 - fVar1);
	if (fVar0 < 0f)
	{
		fVar0 = 0f;
	}
	func_895(iParam0, iParam1, fVar0);
}

void func_659(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	bVar0 = false;
	if (func_896(iParam0))
	{
		bVar0 = true;
	}
	if (func_84(iParam1) == 2)
	{
		bVar0 = true;
	}
	bVar1 = false;
	if (func_320(iParam0))
	{
		bVar1 = true;
	}
	bVar2 = false;
	switch (iParam2)
	{
		case 1:
			if (bVar0)
			{
				fVar3 = -48f;
			}
			else if (bVar1)
			{
				fVar3 = 192f;
			}
			else if (func_897(iParam0))
			{
				bVar2 = true;
			}
			else
			{
				fVar3 = 96f;
			}
			break;
		case 0:
			if (bVar0)
			{
				fVar3 = -48f;
			}
			else
			{
				bVar2 = true;
			}
			break;
		case 2:
			iVar4 = func_437(iParam1, 2);
			iVar5 = (100 - func_437(iParam1, 1));
			if (iVar5 < 50)
			{
				fVar3 = -96f;
			}
			else if (iVar4 > 50)
			{
				fVar3 = -48f;
			}
			else if (iVar4 < 50)
			{
				fVar3 = 48f;
			}
			else
			{
				bVar2 = true;
			}
			break;
	}
	fVar6 = (fVar3 * 60f);
	fVar7 = func_654(iParam1, iParam2);
	fVar8 = ((fVar7 / fVar6) * 100f);
	fVar9 = func_898(iParam1, iParam2);
	iVar10 = func_437(iParam1, iParam2);
	iVar11 = 0;
	if (!bVar2)
	{
		fVar9 = (fVar9 + fVar8);
		if (fVar9 >= 1f)
		{
			fVar9 = (fVar9 - 1f);
			iVar11++;
		}
		else if (fVar9 <= -1f)
		{
			fVar9 = (fVar9 + 1f);
			iVar11 = (iVar11 - 1);
		}
		func_899(iParam1, iParam2, fVar9);
	}
	if (iParam2 == 2)
	{
		if (iVar4 > 50)
		{
			if (iVar10 <= 50)
			{
				iVar10 = 50;
				func_900(iParam1, iParam2);
			}
		}
		else if (iVar4 < 50)
		{
			if (iVar10 >= 50)
			{
				iVar10 = 50;
				func_900(iParam1, iParam2);
			}
		}
	}
	if (iVar11 == 0)
	{
		return;
	}
	func_746(iParam1, iParam2, (iVar10 + iVar11));
}

void func_660(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_21(0, &Var0);
	func_21(1, &Var12);
	iVar24 = func_88(iParam0);
	bVar25 = false;
	if (iParam0 == 0 || (iParam0 == 1 && !Var0.f_2))
	{
		if ((iParam0 == 0 && Var0.f_10) || (iParam0 == 1 && Var12.f_10))
		{
			if (func_140(41))
			{
				bVar25 = true;
			}
		}
	}
	bVar26 = false;
	iVar27 = 0;
	switch (iParam1)
	{
		case 0:
			if (iParam2 <= 50 && iParam3 > 50)
			{
				if (bVar25)
				{
					bVar26 = true;
					iVar27 = 4;
				}
			}
			if (iParam2 < 100 && iParam3 == 100)
			{
				if (bVar25)
				{
				}
			}
			break;
		case 1:
			if (iParam2 <= 50 && iParam3 > 50)
			{
				if (bVar25)
				{
				}
			}
			if (iParam2 < 100 && iParam3 == 100)
			{
				if (bVar25)
				{
				}
			}
			break;
		case 2:
			iVar28 = func_357(iVar24, 2);
			iVar29 = func_901(iParam0);
			iVar30 = func_358(iVar28);
			if (iVar29 != iVar30)
			{
				bVar31 = func_697(iVar24, iVar30, 1);
				if (bVar31)
				{
					func_359(iParam0, iVar30);
				}
			}
			if (iParam3 > 70)
			{
				set_attribute_points(iVar24, 14, 100);
			}
			else
			{
				set_attribute_points(iVar24, 14, 50);
			}
			break;
	}
	if (bVar26)
	{
		func_573(1);
		func_902(get_game_timer());
	}
	if (iVar27 != 0)
	{
		_set_core_icon(iVar27);
	}
}

bool func_661()
{
	return Global_40.f_1095.f_3140.f_1;
}

void func_662(int iParam0, float fParam1)
{
	Global_1900383->f_393.f_8[iParam0] = fParam1;
}

int func_663()
{
	return 5;
}

int func_664()
{
	return 6;
}

struct<4> func_665()
{
	return Var0;
}

int func_666(bool bParam0)
{
	if (func_2() == -1)
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

bool func_667(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_903(&iParam0);
	if (!func_284(iParam0, 0))
	{
		return false;
	}
	if (!func_668(0))
	{
		bParam3 = true;
	}
	if (func_904(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_one_handed(iParam0))
		{
			Var0 = { func_905(0) };
			Var4.f_9 = -1591664384;
			if (!func_906(iParam0, &Var0, 1728382685, 0))
			{
				return false;
			}
			else if (func_907(iParam0, &Var4, 1728382685))
			{
				return false;
			}
			if (func_908(iParam0, 1))
			{
				if (!func_906(iParam0, &Var0, -649335959, 0))
				{
					return false;
				}
				else if (func_907(iParam0, &Var4, -649335959))
				{
					return false;
				}
			}
		}
		else if (!func_909(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_910(iParam0, uParam1, bParam3, bParam4);
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
		iVar28 = func_332(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = _0xe787f05dfc977bde(func_666(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

bool func_668(bool bParam0)
{
	if (func_2() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_666(bParam0));
}

int func_669(struct<4> Param0, int iParam4, bool bParam5)
{
	iVar0 = -1;
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_670(Param0, &Var1, 1, 0))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_736(Var1.f_4);
	if (iVar15 == -1784221369)
	{
		Var16 = { func_911(Param0, 1) };
		Var16.f_10 = iParam4;
		iVar0 = func_912(-1230526146, &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -1037537535)
	{
		Var44 = { func_913(Param0, 1) };
		Var44.f_10 = iParam4;
		iVar0 = func_914(-1230526146, &Var44, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var61 = { func_915(&Var1) };
		Var61.f_10 = iParam4;
		iVar0 = func_916(-1230526146, &Var61, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

bool func_670(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_666(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

void func_671(int iParam0)
{
	iVar0 = func_207(iParam0);
	request_model(iVar0, false);
}

void func_672(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar0 = &Global_40.f_1095.f_1[iParam0]->f_15[iVar1];
		if (is_model_valid(iVar0))
		{
			request_model(iVar0, false);
		}
		iVar1++;
	}
}

bool func_673(int iParam0)
{
	iVar0 = func_207(iParam0);
	if (!has_model_loaded(iVar0))
	{
		return false;
	}
	return true;
}

bool func_674(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar0 = &Global_40.f_1095.f_1[iParam0]->f_15[iVar1];
		if (is_model_valid(iVar0))
		{
			if (!has_model_loaded(iVar0))
			{
				return false;
			}
		}
		iVar1++;
	}
	return true;
}

bool func_675(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 5)
	{
		return true;
	}
	return false;
}

void func_676(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	set_attribute_base_rank(iParam0, 7, iParam1);
}

void func_677(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	set_attribute_points(iParam0, 7, iParam1);
}

void func_678(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	iParam2 = func_795(iParam2, 0, 100);
	if (func_652(iParam1, &iVar0))
	{
		set_attribute_base_rank(iParam0, iVar0, iParam2);
	}
}

int func_679(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return Global_40.f_1095.f_1[iParam0]->f_431;
}

int func_680(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return Global_40.f_1095.f_1[iParam0]->f_432;
}

int func_681(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -2059726619;
		case 1:
			return -1569450319;
		case 2:
			return 854596618;
		case 3:
			return -150200864;
		case 4:
			return 2109269555;
		case 5:
			return 2116849039;
		case 6:
			return 1248540072;
		case 7:
			return -1858513856;
		case 8:
			return -868657362;
		case 9:
			return 1603936352;
		case 10:
			return -702790226;
		case 11:
			return -888740979;
		case 12:
			return 459744337;
		case 13:
			return 1914602340;
		case 14:
			return -1791452194;
		case 15:
			return 1528935719;
		case 16:
			return 1150939141;
		case 17:
			return -1558096473;
		case 18:
			return -794277189;
		case 19:
			return -1517904196;
		case 20:
			return -1827027577;
		case 21:
			return -662178186;
		case 22:
			return -1035515486;
		case 23:
			return 238733925;
		case 24:
			return 1647012424;
		case 25:
			return 500722008;
		case 26:
			return 1642484975;
		case 27:
			return 1710714415;
		case 28:
			return 699990316;
		case 29:
			return -1648383828;
		case 30:
			return -1379330323;
		case 31:
			return -99092070;
		case 32:
			return 1963510418;
		case 33:
			return 2047376405;
		case 34:
			return -395646254;
		case 35:
			return 1584468323;
		case 36:
			return 1969175294;
		case 37:
			return 657906142;
		case 38:
			return -57190831;
		case 39:
			return -308965548;
		case 40:
			return -1102272634;
		case 41:
			return 554578289;
		case 42:
			return -983605026;
		case 43:
			return -1544126829;
		case 44:
			return -103050851;
		case 45:
			return -476045512;
		case 46:
			return 1796037447;
		case 47:
			return 1795984405;
		case 48:
			return -734947450;
		case 49:
			return -1317365569;
		case 50:
			return 1729948479;
		case 51:
			return 1466150167;
		case 52:
			return 1145777975;
		case 53:
			return 85441452;
		case 54:
			return 653400939;
		case 55:
			return 552246565;
		case 56:
			return 0;
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

void func_682(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 23)
	{
		if (iVar0 == -1)
		{
		}
		else
		{
			Global_40.f_1095.f_1[iParam0]->f_372.f_2[iVar0] = 0f;
		}
		iVar0++;
	}
}

void func_683()
{
	iVar0 = 0;
	while (iVar0 < 7)
	{
		Global_1900383->f_317.f_2[iVar0] = -1;
		Global_1900383->f_317.f_2[iVar0]->f_1 = -1;
		Global_1900383->f_317.f_2[iVar0]->f_2 = 0f;
		Global_1900383->f_317.f_2[iVar0]->f_3 = -1;
		Global_1900383->f_317.f_2[iVar0]->f_4 = 0f;
		iVar0++;
	}
}

bool func_684(int iParam0, var uParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_719(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = func_917(Var0, 1415981582, 0);
	if (!func_284(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_685(int iParam0, var uParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_719(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = func_917(Var0, -2119169513, 0);
	if (!func_284(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_686(int iParam0, var uParam1)
{
	if (!func_918(856287005, iParam0))
	{
		return false;
	}
	Var0 = { func_81() };
	*uParam1 = func_917(Var0, iParam0, 0);
	if (!func_284(*uParam1, 0))
	{
		return false;
	}
	return true;
}

void func_687(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
}

void func_688(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_689(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_690(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
}

void func_691(var uParam0, int iParam1)
{
	uParam0->f_3 = iParam1;
}

void func_692(var uParam0, int iParam1)
{
	uParam0->f_4 = iParam1;
}

void func_693(var uParam0, int iParam1)
{
	uParam0->f_5 = iParam1;
}

void func_694(int iParam0)
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

void func_695(int iParam0, var uParam1)
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
	func_919(iParam0, *uParam1);
	func_919(iParam0, uParam1->f_1);
}

void func_696(int iParam0, var uParam1)
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
	func_919(iParam0, *uParam1);
	func_919(iParam0, uParam1->f_1);
	func_919(iParam0, uParam1->f_2);
	func_919(iParam0, uParam1->f_3);
	func_919(iParam0, uParam1->f_4);
	func_919(iParam0, uParam1->f_5);
}

int func_697(int iParam0, int iParam1, bool bParam2)
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

int func_698(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		case 1:
			return 6;
		case 2:
			return 7;
	}
	return 0;
}

int func_699(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_920(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_700()
{
	if (!func_76(8))
	{
		return false;
	}
	return true;
}

int func_701()
{
	return Global_1900383->f_444;
}

int func_702()
{
	return Global_1900383->f_444.f_1;
}

void func_703(int iParam0)
{
	Global_1900383->f_444 = *iParam0;
}

void func_704(int iParam0)
{
	Global_1900383->f_444.f_1 = *iParam0;
}

void func_705(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	func_921(&(uParam0->f_3));
	uParam0->f_12 = 1;
	uParam0->f_13 = 0;
}

Vector3 func_706(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f, 0f, 0f;
	}
	return (*Global_1900383)[iParam0]->f_38;
}

bool func_707(var uParam0, vector3 vParam1, vector3 vParam4, var uParam7, float fParam8)
{
	iVar6 = 12;
	if (func_137(vParam4))
	{
		vVar8 = { get_gameplay_cam_rot(2) };
		fVar7 = vVar8.z;
	}
	else
	{
		fVar7 = func_710(vParam4, vParam1, 1);
	}
	fVar7 = (fVar7 + ((to_float(uParam0->f_2) * 10f) * func_922((uParam0->f_2 % 2) == 0, 1f, -1f)));
	vVar0 = { vParam1 + Vector(0f, -cos(fVar7), sin(fVar7)) * FtoV(((80f + 40f) * 0.5f)) * Vector(fParam8, fParam8, fParam8) };
	if (uParam0->f_2 > 3)
	{
		iVar6 = 13;
	}
	switch (func_923(uParam0))
	{
		case 0:
			func_924(uParam0, 0f, 0f, 0f);
			uParam0->f_3.f_2 = 0;
			uParam0->f_3 = 0;
			uParam0->f_1 = 0;
			uParam0->f_13 = 0;
			uParam0->f_14 = 0;
			func_925(uParam0, 1);
			break;
		case 1:
			if (get_closest_vehicle_node(vVar0, &vVar3, 1, 3f, 0f))
			{
				if (func_926(vVar3, vParam1, 0, 0))
				{
					func_924(uParam0, vVar3);
					if (uParam0->f_12)
					{
						func_925(uParam0, 3);
					}
					else
					{
						func_925(uParam0, 4);
					}
				}
				else
				{
					func_925(uParam0, 2);
				}
			}
			else
			{
				func_925(uParam0, 2);
			}
			break;
		case 2:
			bVar11 = false;
			if (func_927(vVar0, &(uParam0->f_3), &bVar11, iVar6, 0, 1127481344, 1101004800, -1138501878, -1138501878, 0))
			{
				if (func_926(func_709(uParam0), vParam1, 1, 1))
				{
					if (uParam0->f_12)
					{
						func_925(uParam0, 3);
					}
					else
					{
						func_925(uParam0, 4);
					}
				}
				else
				{
					func_925(uParam0, 5);
				}
			}
			else if (bVar11)
			{
				func_925(uParam0, 5);
			}
			break;
		case 3:
			if (uParam0->f_13 == 0)
			{
				uParam0->f_13 = _0x348f211ca2404039(uParam7, func_709(uParam0), vParam1, 23);
				if (uParam0->f_13 == -1)
				{
					uParam0->f_14++;
					uParam0->f_13 = 0;
					if (uParam0->f_14 >= 50)
					{
						func_925(uParam0, 5);
					}
				}
			}
			else
			{
				switch (_0x3a0f82f6ee2291c8(uParam0->f_13))
				{
					case 2:
						break;
					case 0:
						_0x661bb1e1ff77742d(uParam0->f_13);
						func_925(uParam0, 5);
						break;
					case 1:
						uVar12 = _0xf61cfedeab627bfa(uParam0->f_13);
						if (func_928(uVar12, 2) && iVar6 != 13)
						{
							func_925(uParam0, 5);
						}
						else
						{
							func_925(uParam0, 4);
						}
						_0x661bb1e1ff77742d(uParam0->f_13);
						break;
				}
			}
			break;
		case 4:
			uParam0->f_2 = 0;
			func_929(&(uParam0->f_3.f_3), 1, 1, 0);
			func_925(uParam0, 0);
			return true;
		case 5:
			uParam0->f_2++;
			if (uParam0->f_2 > 12)
			{
				uParam0->f_2 = 0;
				uParam0->f_1 = 1;
			}
			else
			{
				uParam0->f_1 = 0;
			}
			func_925(uParam0, 0);
			break;
	}
	return false;
}

bool func_708(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_930(iParam0, &Var0);
}

Vector3 func_709(var uParam0)
{
	return uParam0->f_3.f_3;
}

float func_710(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

bool func_711(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_71(iParam0))
	{
		return false;
	}
	iVar0 = func_88(iParam0);
	iVar1 = func_185(iParam0);
	if (!does_entity_exist(iVar1))
	{
		return false;
	}
	if (get_mount(iVar1) == iVar0)
	{
		return true;
	}
	return false;
}

void func_712(int iParam0, bool bParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = Global_1900383[iParam0];
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return;
	}
	iVar1 = _get_rider_of_mount(iVar0, false);
	iVar2 = _get_rider_of_mount(iVar0, true);
	if (iVar1 != iVar2)
	{
		return;
	}
	if (bParam1)
	{
		iVar3 = 2;
	}
	else
	{
		iVar3 = 1;
	}
	task_horse_action(iVar0, iVar3, 0, 0);
}

bool func_713()
{
	return func_931(1073741824);
}

int func_714(var uParam0, var uParam1)
{
	iVar0 = func_170();
	switch (iVar0)
	{
		case 43:
			*uParam0 = { -1340.417f, 2447.74f, 307.6064f };
			*uParam1 = 69.2479f;
			break;
		case 71:
			*uParam0 = { -112.9493f, -14.3514f, 94.8418f };
			*uParam1 = 78.7552f;
			break;
		case 98:
			*uParam0 = { 676.6314f, -1223.84f, 43.8567f };
			*uParam1 = 174.642f;
			break;
		case 9:
			*uParam0 = { 1853.359f, -1835.935f, 42.0656f };
			*uParam1 = 25.3398f;
			break;
		case 4:
			*uParam0 = { 2279.679f, -753.1292f, 40.9928f };
			*uParam1 = 65.2774f;
			break;
		case 79:
			*uParam0 = { 2370.169f, 1336.931f, 105.273f };
			*uParam1 = 302.1729f;
			break;
		case 22:
			*uParam0 = { -2590.198f, 465.025f, 145.1573f };
			*uParam1 = 77.3385f;
			break;
		case 37:
			*uParam0 = { -1644.85f, -1376.873f, 82.9681f };
			*uParam1 = 340.856f;
			break;
		case 58:
			*uParam0 = { func_932(4) };
			*uParam1 = 0f;
			break;
		default:
			return 0;
	}
	return 1;
}

int func_715()
{
	return Global_1900383->f_378.f_9;
}

bool func_716(int iParam0)
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

void func_717(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		if (iParam2 == 0)
		{
			return;
		}
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam1 >= 7)
	{
		return;
	}
	if (func_389(iParam0))
	{
		return;
	}
	if (func_390(iParam0))
	{
		return;
	}
	if (!_0x88ad6cc10d8d35b2(iParam0))
	{
		set_entity_as_mission_entity(iParam0, true, true);
	}
	func_326(iParam1, iParam0);
	func_933(iParam1, iParam2);
	iVar0 = get_player_index();
	if (is_player_dead(iVar0))
	{
	}
	if (iParam0 == _get_saddle_horse_for_player(iVar0))
	{
		func_469(iParam1, 0);
	}
	else
	{
		iVar1 = func_934(iParam0);
		func_469(iParam1, iVar1);
	}
	if (iParam1 == 0 || iParam1 == 1)
	{
		func_343(iParam0);
	}
	if (iParam1 == 0)
	{
		_0x8fbf9edb378ccb8c(iVar0, iParam0);
	}
	else if (iParam1 == 1)
	{
		uVar2 = _0x227b06324234fb09(iVar0, iParam0);
	}
	if (iParam1 == 6)
	{
		return;
	}
	if (func_540(iParam1))
	{
		func_541(iParam1);
	}
	iVar3 = func_207(iParam1);
	iVar4 = func_542(iVar3);
	func_543(iParam1, iVar4);
}

void func_718(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_207(iParam0);
	if (!is_model_valid(iVar0))
	{
		func_749(&uVar1, &iVar0, &uVar2);
	}
	iVar3 = get_default_max_attribute_rank(iVar0, 7);
	if (iParam1 > iVar3)
	{
		return;
	}
	fVar4 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iParam1));
	Global_40.f_1095.f_1[iParam0]->f_372 = iParam1;
	Global_40.f_1095.f_1[iParam0]->f_372.f_1 = fVar4;
	func_935(iParam1);
	iVar5 = func_88(iParam0);
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

bool func_719(int iParam0, var uParam1)
{
	if (!func_540(iParam0))
	{
		return false;
	}
	iVar0 = func_720(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1.f_9 = -1591664384;
	Var15 = { func_330(0) };
	if (!func_936(Var15, iVar0, &Var1, 0, 0))
	{
		return false;
	}
	if (!func_937(&Var1, uParam1))
	{
		return false;
	}
	return true;
}

int func_720(int iParam0)
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

bool func_721(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10)
{
	if (!func_668(bParam10))
	{
		return func_938(Param0, Param4, iParam8, 1, bParam9, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_670(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (func_939(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return true;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, iParam8))
	{
		return false;
	}
	if (!_0xdccaa7c3bfd88862(func_666(0), &Param0, &Param4, iParam8, Var0.f_11, &Var14))
	{
		return false;
	}
	if (bParam9)
	{
		if (!func_335(Var14, 1))
		{
		}
	}
	return true;
}

bool func_722(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	if (!func_668(bParam9))
	{
		return func_940(Param0, Param4, iParam8, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return false;
	}
	if (func_939(&Param0, &Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_670(Param0, &Var0, bParam9, 1) || !func_670(Param4, &Var14, bParam9, 1))
	{
		return false;
	}
	if (func_939(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return false;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, Var14.f_9) || !_inventory_fits_slot_id(Var14.f_4, Var0.f_9))
	{
		return false;
	}
	iVar28 = func_666(0);
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

int func_723()
{
	return Global_1894899->f_2;
}

bool func_724(int iParam0)
{
	switch (iParam0)
	{
		case -2085219828:
		case -2051332199:
		case -2013384490:
		case -2006599970:
		case -1991037110:
		case -1921080134:
		case -1781387050:
		case -1757588258:
		case -1683269219:
		case -1664530975:
		case -1620920647:
		case -1602657245:
		case -1477273558:
		case -1066874997:
		case -947702135:
		case -746674788:
		case -635441454:
		case -624139784:
		case -597058368:
		case -529638012:
		case -435006002:
		case -398744080:
		case -249994063:
		case -196740052:
		case -118748546:
		case -90546043:
		case -56806045:
		case 128702355:
		case 228922461:
		case 335540214:
		case 428582000:
		case 516844411:
		case 546981776:
		case 599861917:
		case 746300881:
		case 1047281747:
		case 1209486044:
		case 1216456215:
		case 1433048902:
		case 1448771675:
		case 1533677103:
		case 1668084914:
		case 1987629749:
		case 2006811763:
		case 2064962445:
			return true;
	}
	return false;
}

bool func_725(int iParam0)
{
	switch (iParam0)
	{
		case -2042563684:
		case -1871448371:
		case -834705084:
		case -623409049:
			return true;
	}
	return false;
}

bool func_726(int iParam0)
{
	switch (iParam0)
	{
		case -2076104686:
		case -1527567292:
		case -801397594:
		case 747460826:
			return true;
	}
	return false;
}

bool func_727(int iParam0)
{
	switch (iParam0)
	{
		case -1795542128:
		case 1627068364:
			return true;
	}
	return false;
}

bool func_728(int iParam0)
{
	switch (iParam0)
	{
		case -1632917921:
			return true;
	}
	return false;
}

bool func_729(int iParam0)
{
	switch (iParam0)
	{
		case -1516555556:
			return true;
	}
	return false;
}

bool func_730(int iParam0)
{
	switch (iParam0)
	{
		case -1724045811:
			return true;
	}
	return false;
}

int func_731(int iParam0, int iParam1)
{
	if (!func_284(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_736(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_431(iParam0, 1399091007))
	{
		func_941(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

void func_732(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_284(iParam0, 0))
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
	if (!func_942())
	{
		func_943(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_944(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_944(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_873(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_736(iParam0);
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
	else if (!func_945(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	sVar15 = func_887(_create_var_string(10, &cVar2, _create_var_string(0, func_946(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_431(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_946(iParam0));
	}
	func_754(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

bool func_733(int iParam0, int iParam1, bool bParam2)
{
	if (!func_284(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_736(iParam0);
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
		if (!func_947(iParam0, 1))
		{
			return false;
		}
	}
	return func_735(iParam0, 0, bParam2) >= iParam1;
}

struct<2> func_734(int iParam0)
{
	if (!func_284(iParam0, 0))
	{
		return Var0;
	}
	if (func_431(iParam0, -305066475))
	{
		if (func_2() == -1)
		{
			if (func_431(iParam0, -537818634))
			{
				return func_832(189951448);
			}
			else
			{
				return func_832(1176172851);
			}
		}
	}
	else if (func_431(iParam0, -537818634))
	{
		return func_832(-963660207);
	}
	if (func_431(iParam0, 2084895747))
	{
		return func_832(1694039471);
	}
	return Var2;
}

int func_735(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_284(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_736(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_731(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_948(iParam0, 0);
	}
	iVar2 = _0xe787f05dfc977bde(func_666(bParam2), iParam0, 0);
	return iVar2;
}

int func_736(int iParam0)
{
	if (!func_284(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_737(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	Var0 = { func_949(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_950(&Var0, func_905(0));
	}
	if (!func_951(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_952(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_819(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_953(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_738(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_284(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_954(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_955(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_331(iParam0, Var0, Var0.f_4, bParam4) };
	return func_819(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_739(int iParam0, int iParam1)
{
	if (!_item_database_is_key_valid(iParam1, 0))
	{
		return;
	}
	if (!func_724(iParam1))
	{
		return;
	}
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (is_ped_injured(iParam0))
	{
		return;
	}
	if (is_ped_in_writhe(iParam0))
	{
		return;
	}
	func_956(iParam0);
	iVar0 = -1;
	bVar1 = false;
	if (func_388(iParam0))
	{
		iVar0 = func_401(iParam0);
		bVar1 = true;
	}
	_0xeb8886e1065654cd(iParam0, 10, "ALL", 10f);
	func_494(func_791(-1501807946), 1);
	iVar2 = func_643(iParam0, 0);
	iVar3 = func_643(iParam0, 1);
	func_790(iParam0, iParam1);
	iVar4 = func_643(iParam0, 0);
	iVar5 = func_643(iParam0, 1);
	iVar6 = 0;
	iVar6 = (iVar6 + (iVar4 - iVar2));
	iVar6 = (iVar6 + (iVar5 - iVar3));
	func_114(iParam0);
	if (!bVar1)
	{
		return;
	}
	if (func_957(iParam1))
	{
		func_494(func_791(2071017687), 1);
	}
	if (func_958(iParam1))
	{
		return;
	}
	if (func_959(iParam1))
	{
		func_454(iVar0, 16);
		return;
	}
	bVar7 = false;
	iVar8 = func_357(iParam0, 2);
	if (iVar8 < 30)
	{
		bVar7 = true;
	}
	iVar9 = -1;
	if (iVar6 >= 50 || bVar7)
	{
		iVar9 = 13;
	}
	else if (iVar6 >= 25)
	{
		iVar9 = 14;
	}
	else if (iVar6 >= 0)
	{
		iVar9 = 15;
	}
	if (iVar9 != -1)
	{
		func_454(iVar0, iVar9);
	}
	if (!func_205(43))
	{
		func_283(43, 0);
		func_575(get_game_timer());
	}
}

void func_740(int iParam0, int iParam1)
{
	if (!_item_database_is_key_valid(iParam1, 0))
	{
		return;
	}
	if (!func_725(iParam1))
	{
		return;
	}
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (is_ped_injured(iParam0))
	{
		return;
	}
	func_790(iParam0, iParam1);
}

void func_741(int iParam0, int iParam1)
{
	if (!_item_database_is_key_valid(iParam1, 0))
	{
		return;
	}
	if (!func_726(iParam1))
	{
		return;
	}
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (is_ped_injured(iParam0))
	{
		return;
	}
	func_494(func_791(-454252884), 1);
	func_790(iParam0, iParam1);
}

void func_742(int iParam0, int iParam1)
{
	if (!_item_database_is_key_valid(iParam1, 0))
	{
		return;
	}
	if (!func_728(iParam1))
	{
		return;
	}
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (is_ped_injured(iParam0))
	{
		return;
	}
	func_956(iParam0);
	func_790(iParam0, iParam1);
	bVar1 = func_388(iParam0);
	if (bVar1)
	{
		iVar0 = func_401(iParam0);
	}
	func_114(iParam0);
	if (!bVar1)
	{
		return;
	}
	if (!func_890(iParam0, 1))
	{
		func_454(iVar0, 20);
	}
	iVar2 = func_960(iParam0);
	fVar3 = (to_float(func_961(iVar2)) + (48f * 60f));
	func_895(iVar0, 0, fVar3);
}

void func_743(int iParam0, int iParam1)
{
	if (!_item_database_is_key_valid(iParam1, 0))
	{
		return;
	}
	if (!func_730(iParam1))
	{
		return;
	}
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (is_ped_injured(iParam0))
	{
		return;
	}
	bVar1 = false;
	if (func_388(iParam0))
	{
		iVar0 = func_401(iParam0);
		bVar1 = true;
	}
	if (bVar1)
	{
		iVar2 = func_960(iParam0);
		fVar3 = (to_float(func_961(iVar2)) + (48f * 60f));
		func_895(iVar0, 0, fVar3);
	}
	func_956(iParam0);
	func_790(iParam0, iParam1);
}

int func_744()
{
	return Global_1900372->f_9;
}

void func_745(int iParam0, int iParam1, int iParam2)
{
	if (!_item_database_is_key_valid(iParam1, 0))
	{
		return;
	}
	if (!func_729(iParam1))
	{
		return;
	}
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (is_ped_injured(iParam0))
	{
		return;
	}
	func_956(iParam0);
	_0xeb8886e1065654cd(iParam0, 10, "ALL", 10f);
	func_790(iParam0, iParam1);
	func_114(iParam0);
	bVar1 = func_388(iParam0);
	if (bVar1)
	{
		iVar0 = func_401(iParam0);
	}
	if (!bVar1)
	{
		return;
	}
	iVar2 = func_960(iParam0);
	iVar3 = func_961(iVar2);
	func_895(iVar0, 0, to_float(iVar3));
	bVar4 = false;
	iVar5 = get_game_timer();
	iVar6 = func_962();
	if ((iVar6 + 45000) > iVar5)
	{
		bVar4 = true;
	}
	bVar7 = false;
	if (bVar4 && iVar6 + 15000 > iVar5)
	{
		bVar7 = true;
	}
	if (iParam2 >= 10)
	{
		iVar8 = 17;
	}
	else if (bVar4)
	{
		if (bVar7)
		{
			return;
		}
		else
		{
			iVar8 = 19;
		}
	}
	else
	{
		iVar8 = 18;
	}
	if (iVar8 != -1)
	{
		func_454(iVar0, iVar8);
		func_963(iVar5);
	}
}

void func_746(int iParam0, int iParam1, int iParam2)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iParam2 = func_795(iParam2, 0, 100);
	Global_40.f_1095.f_1[iParam0]->f_407[iParam1] = iParam2;
	iVar0 = func_88(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
	}
	func_678(iVar0, iParam1, iParam2);
}

int func_747(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_964(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_748(int iParam0)
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

int func_749(int iParam0, int iParam1, int iParam2)
{
	*iParam0 = 0;
	*iParam1 = 0;
	*iParam2 = 0;
	if (func_94())
	{
		if (func_639())
		{
			bVar0 = false;
			if (!func_135((*Global_1835011)[15]->f_1, 1) && !func_140(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*iParam0 = func_965();
				*iParam1 = func_966();
				*iParam2 = func_967();
				return 1;
			}
			else
			{
				*iParam0 = func_968();
				*iParam1 = func_969();
				*iParam2 = func_970();
				return 1;
			}
		}
		else if (func_640())
		{
			if (!func_135((*Global_1835011)[60]->f_1, 1))
			{
				*iParam0 = func_971();
				*iParam1 = func_972();
				*iParam2 = func_973();
				return 1;
			}
			else
			{
				*iParam0 = func_974();
				*iParam1 = func_975();
				*iParam2 = func_976();
				return 1;
			}
		}
	}
	else if (func_639())
	{
		*iParam0 = func_977();
		*iParam1 = func_978();
		*iParam2 = func_979();
		return 1;
	}
	else if (func_640())
	{
		*iParam0 = func_980();
		*iParam1 = func_981();
		*iParam2 = func_982();
		return 1;
	}
	return 0;
}

void func_750(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
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

void func_751(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
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

void func_752(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
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

void func_753(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
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

var func_754(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	func_983(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_755(int iParam0)
{
	if (!is_model_valid(iParam0))
	{
		iParam0 = 1074477367;
	}
	iVar0 = get_default_max_attribute_rank(iParam0, 7);
	return iVar0;
}

bool func_756(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return false;
	}
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	switch (iParam1)
	{
		case 0:
		case 5:
		case 6:
		case 7:
		case 9:
			return false;
	}
	iVar0 = func_88(iParam0);
	fVar1 = func_190(iVar0);
	if (fVar1 >= 0.1f)
	{
		return true;
	}
	return false;
}

float func_757(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return 0f;
	}
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return &(Global_40.f_1095.f_1[iParam0]->f_372.f_2[iParam1]);
}

float func_758(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15f;
		case 4:
			return 4f;
		case 1:
			return 2f;
		case 2:
			return 1f;
		case 3:
			return 1f;
		case 5:
			return 100f;
		case 6:
			return 25f;
		case 7:
			return 5f;
		case 8:
			return 1f;
		case 9:
			return 15f;
		case 10:
			return 1f;
		case 11:
			return 15f;
		case 12:
			return 1f;
		case 13:
			return 15f;
		case 14:
			return 5f;
		case 15:
			return 1f;
		case 16:
			return 5f;
		case 17:
			return 15f;
		case 18:
			return 5f;
		case 19:
			return 1f;
		case 20:
			return 5f;
		case 21:
			return 15f;
		case 22:
			return 1f;
	}
	return 0f;
}

bool func_759()
{
	return Global_40.f_1095.f_3140;
}

void func_760(int iParam0, float fParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_207(iParam0);
	iVar1 = func_115(iParam0);
	iVar2 = get_default_max_attribute_rank(iVar0, 7);
	if (iVar1 >= iVar2)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0]->f_372.f_1 = (Global_40.f_1095.f_1[iParam0]->f_372.f_1 + fParam1);
	iVar3 = func_88(iParam0);
	if (!does_entity_exist(iVar3))
	{
		return;
	}
	if (is_entity_dead(iVar3) || is_ped_injured(iVar3))
	{
		return;
	}
	func_677(iVar3, floor(Global_40.f_1095.f_1[iParam0]->f_372.f_1));
	iVar4 = func_402(iVar3);
	Global_40.f_1095.f_1[iParam0]->f_372 = iVar4;
	_0xa69899995997a63b(iVar3, iVar4);
	func_935(iVar4);
	if (iVar4 > iVar1)
	{
		func_984(iParam0, iVar4);
		if (iParam0 == 6)
		{
			if (iVar4 == 1)
			{
				if (func_140(42))
				{
					func_283(19, 1);
				}
				else
				{
					func_283(20, 1);
				}
			}
		}
		if (iVar4 == 2)
		{
			func_283(21, 1);
		}
		else if (iVar4 == 3)
		{
			func_283(22, 1);
		}
		else if (iVar4 == 4)
		{
			func_283(23, 1);
		}
		if (iVar4 >= 2)
		{
			iVar5 = func_960(iVar3);
			iVar6 = func_985();
			func_986(iVar6, iVar5 + 1);
			iVar7 = func_987(iVar3);
			iVar8 = func_988();
			func_986(iVar8, iVar7 + 1);
		}
		compendium_horse_bonding(iVar3, iVar4);
		func_494(func_791(352983236), 1);
		if (iVar4 == iVar2)
		{
			func_494(func_791(-2116919750), 1);
		}
		func_853(0, -1);
	}
}

int func_761(int iParam0)
{
	if (!is_ped_injured(iParam0))
	{
		return get_mount(iParam0);
	}
	return 0;
}

bool func_762(int iParam0)
{
	if (_get_ped_component_category(iParam0, 3, false) == 0)
	{
		return false;
	}
	return true;
}

void func_763(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	_copy_memory(&(Global_1900383->f_393.f_2), &uParam0, 6);
}

bool func_764(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

void func_765(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 57)
	{
		_copy_memory((*uParam0)[iVar0], Global_40.f_1095.f_3054.f_3[iVar0], 1);
		iVar0++;
	}
}

void func_766(int iParam0, var uParam1, bool bParam2)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_88(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 57)
	{
		iVar2 = func_681(iVar1, 1);
		iVar3 = iVar2;
		if (!func_284(iVar3, 0))
		{
		}
		else
		{
			iVar4 = uParam1[iVar1];
			if (iVar4 <= 0)
			{
			}
			else
			{
				iVar5 = func_285(iVar0, iVar3, iVar4, bParam2, -142743235);
			}
		}
		iVar1++;
	}
}

void func_767(var uParam0, var uParam1, var uParam2)
{
	func_528(uParam2);
	iVar0 = 0;
	while (iVar0 < 57)
	{
		iVar1 = 0;
		iVar1 = (iVar1 + uParam0[iVar0]);
		iVar1 = (iVar1 + uParam1[iVar0]);
		iVar1 = func_795(iVar1, 0, 10);
		(*uParam2)[iVar0] = iVar1;
		iVar0++;
	}
}

void func_768(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 57)
	{
		_copy_memory(Global_40.f_1095.f_3054.f_3[iVar0], (*uParam0)[iVar0], 1);
		iVar0++;
	}
}

void func_769(int iParam0, var uParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 57)
	{
		_copy_memory(Global_40.f_1095.f_1[iParam0]->f_298[iVar0], (*uParam1)[iVar0], 1);
		iVar0++;
	}
}

void func_770(int iParam0, var uParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		_copy_memory((*uParam1)[iVar0], Global_40.f_1095.f_1[iParam0]->f_356[iVar0], 5);
		iVar0++;
	}
}

void func_771(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		_copy_memory((*uParam0)[iVar0], Global_40.f_1095.f_3054.f_61[iVar0], 5);
		iVar0++;
	}
}

int func_772(var uParam0)
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (uParam0[iVar1] != 0)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_773(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		_copy_memory(Global_40.f_1095.f_3054.f_61[iVar0], (*uParam0)[iVar0], 5);
		iVar0++;
	}
}

void func_774(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_71(iParam0))
	{
		return;
	}
	iVar0 = func_88(iParam0);
	func_989(iVar0);
}

void func_775(int iParam0, var uParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		_copy_memory(Global_40.f_1095.f_1[iParam0]->f_356[iVar0], (*uParam1)[iVar0], 5);
		iVar0++;
	}
}

void func_776(int iParam0)
{
	Global_40.f_1095 = iParam0;
}

void func_777(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_71(iParam0))
	{
		return;
	}
	iVar0 = func_88(iParam0);
	if (is_entity_dead(iVar0))
	{
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = &Global_40.f_1095.f_1[iParam0]->f_356[iVar1];
		if (func_284(iVar2, 0))
		{
			iVar3 = iVar2;
			uVar4 = Global_40.f_1095.f_1[iParam0]->f_356[iVar1]->f_1;
			uVar5 = Global_40.f_1095.f_1[iParam0]->f_356[iVar1]->f_2;
			_0xc412aa1c73111fe0(iVar0, iVar3, uVar4, uVar5, 0);
		}
		iVar1++;
	}
}

struct<6> func_778()
{
	return Global_1900383->f_393.f_2;
}

void func_779()
{
	func_763(Var0);
}

bool func_780(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return false;
	}
	if (_is_ped_using_scenario_hash(iParam0, 502001704))
	{
		return true;
	}
	return false;
}

bool func_781(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return false;
	}
	if (_is_ped_using_scenario_hash(iParam0, -493351432))
	{
		return true;
	}
	return false;
}

bool func_782(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return false;
	}
	if (_is_ped_using_scenario_hash(iParam0, -1452925867))
	{
		return true;
	}
	return false;
}

bool func_783(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return false;
	}
	if (_is_ped_using_scenario_hash(iParam0, 751811579))
	{
		return true;
	}
	return false;
}

int func_784()
{
	return Global_1900383->f_418.f_2;
}

void func_785(int iParam0, float fParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	fParam1 = (fParam1 * 0.01f);
	fVar1 = _get_ped_stamina(iParam0);
	fVar2 = _get_ped_max_stamina(iParam0);
	fVar0 = (fVar2 * fParam1);
	fVar3 = fVar0;
	if ((fVar1 + fVar0) > fVar2)
	{
		fVar3 = (fVar2 - fVar1);
	}
	fVar4 = (fVar1 + fVar3);
	_charge_ped_stamina(iParam0, fVar3);
}

bool func_786(int iParam0, int iParam1)
{
	if (func_2() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

void func_787(int iParam0, int iParam1, bool bParam2)
{
	if (func_2() == 0)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			if (func_180(iParam0, Global_35))
			{
				if (func_990(iParam0) == 2)
				{
					sVar0 = "HORSE_FOLLOW_ME_FEMALE";
				}
				else
				{
					sVar0 = "HORSE_FOLLOW_ME_MALE";
				}
				func_708(Global_35, sVar0, 1017772929, iParam0, 1, 0, 0, 1);
				if (func_388(iParam0))
				{
					iVar1 = func_401(iParam0);
					func_178(iVar1, 0);
				}
			}
			break;
		case 2:
			if (func_991(iParam0, Global_35, bParam2))
			{
				func_708(Global_35, "HORSE_RUN_AWAY", -1254440351, iParam0, 1, 0, 0, 1);
				Var2.f_6 = -1082130432;
				Var2.f_7 = -1082130432;
				Var2.f_8 = -1082130432;
				Var2.f_9 = -1082130432;
				Var2.f_10 = -1082130432;
				Var2.f_11 = -1082130432;
				Var2.f_12 = -1;
				Var2.f_13 = -1;
				Var2 = -367958370;
				Var2.f_1 = iParam0;
				Var2.f_2 = Global_35;
				_0xca1315c33b9a2847(&Var2);
				Global_1935630->f_42 = iParam0;
				Global_1935630->f_43 = func_992();
				if (func_388(iParam0))
				{
					iVar19 = func_401(iParam0);
					func_178(iVar19, 2);
				}
			}
			break;
		case 1:
			if (func_486(iParam0))
			{
				func_708(Global_35, "HORSE_STAY_HERE", 1017772929, iParam0, 1, 0, 0, 1);
				if (func_388(iParam0))
				{
					iVar20 = func_401(iParam0);
					func_178(iVar20, 1);
				}
			}
			break;
	}
}

int func_788(int iParam0, int iParam1)
{
	if (!func_284(iParam0, 0))
	{
		return 0;
	}
	if (func_727(iParam0))
	{
		_0xd962f8579d702db5();
	}
	if (!does_entity_exist(iParam1))
	{
		return 0;
	}
	if (!is_entity_a_ped(iParam1))
	{
		return 0;
	}
	iVar0 = get_ped_index_from_entity_index(iParam1);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	if (func_727(iParam0) && is_ped_in_writhe(iVar0))
	{
		if (func_993(iVar0, iParam0))
		{
			return 1;
		}
		return 0;
	}
	if (is_entity_dead(iVar0))
	{
		return 0;
	}
	if (is_ped_injured(iVar0))
	{
		return 0;
	}
	if (is_ped_in_writhe(iVar0))
	{
		return 0;
	}
	if (func_120() == 1)
	{
		func_994(iVar0);
		func_995(iParam0);
		func_996(1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_789()
{
	iVar0[0] = 1448771675;
	iVar0[1] = -1921080134;
	iVar0[2] = 1533677103;
	iVar0[3] = -1683269219;
	iVar0[4] = 1209486044;
	iVar0[5] = 335540214;
	iVar0[6] = 1987629749;
	iVar0[7] = 516844411;
	iVar0[8] = -947702135;
	iVar0[9] = -1477273558;
	iVar0[10] = -635441454;
	iVar12 = 0;
	while (iVar12 < iVar0)
	{
		if (func_735(&(iVar0[iVar12]), 0, 0) > 0)
		{
			return &(iVar0[iVar12]);
		}
		iVar12++;
	}
	iVar13[0] = 1668084914;
	iVar13[1] = -196740052;
	iVar13[2] = -1602657245;
	iVar13[3] = -1991037110;
	iVar13[4] = -249994063;
	iVar13[5] = -398744080;
	iVar13[6] = -1066874997;
	iVar13[7] = 2064962445;
	iVar13[8] = 428582000;
	iVar13[9] = -2006599970;
	iVar13[10] = -118748546;
	iVar13[11] = -2051332199;
	iVar13[12] = -2013384490;
	iVar13[13] = -746674788;
	iVar13[14] = 599861917;
	iVar13[15] = -56806045;
	iVar13[16] = 746300881;
	iVar13[17] = -435006002;
	iVar13[18] = 1433048902;
	iVar13[19] = -1781387050;
	iVar13[20] = -624139784;
	iVar13[21] = 1047281747;
	iVar13[22] = 546981776;
	iVar13[23] = 1216456215;
	iVar13[24] = -2085219828;
	iVar13[25] = -1620920647;
	iVar12 = 0;
	iVar12 = 0;
	while (iVar12 < iVar13)
	{
		iVar40 = &iVar13[iVar12];
		if (func_724(iVar40) && func_735(iVar40, 0, 0) > 0)
		{
			return iVar40;
		}
		iVar12++;
	}
	return 0;
}

void func_790(int iParam0, int iParam1)
{
	if (!func_420(iParam1))
	{
		return;
	}
	if (!_item_database_is_key_valid(iParam1, 0))
	{
		return;
	}
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (is_ped_injured(iParam0))
	{
		return;
	}
	bVar0 = false;
	if (func_388(iParam0))
	{
		iVar1 = func_401(iParam0);
		bVar0 = true;
	}
	Var2.f_1 = 20;
	_item_database_fillout_item_effects_ids(iParam1, &Var2);
	iVar33 = 0;
	while (iVar33 < Var2)
	{
		_item_database_fillout_item_effects_id_info(&(Var2.f_1[iVar33]), &Var24);
		switch (Var24.f_1)
		{
			case 1194731729:
				iVar34 = Var24.f_2;
				fVar35 = -Var24.f_5;
				if (bVar0 && iVar34 > 0)
				{
					iVar36 = func_960(iParam0);
					iVar37 = func_997(iVar36);
					func_895(iVar1, 1, to_float(iVar37));
				}
				if (bVar0)
				{
					iVar38 = func_437(iVar1, 1);
				}
				else
				{
					iVar38 = func_357(iParam0, 1);
				}
				if (iVar38 < 50)
				{
					if (bVar0)
					{
						func_438(iVar1, 2, iVar34);
					}
					else
					{
						func_439(iParam0, 2, iVar34);
					}
				}
				if (bVar0)
				{
					func_438(iVar1, 1, floor(fVar35));
				}
				else
				{
					func_439(iParam0, 1, floor(fVar35));
				}
				break;
			case 978049229:
				func_998(iParam0, Var24.f_5);
				break;
			case -1918697215:
				if (func_641(0, &uVar31))
				{
					fVar39 = Var24.f_5;
					if (bVar0)
					{
						func_999(iVar1, 0, floor(fVar39));
					}
					else
					{
						func_1000(iParam0, 0, floor(fVar39));
					}
				}
				break;
			case 1136630075:
				if (func_1001(0, &uVar31))
				{
					fVar32 = func_1002(to_float(Var24.f_3), Var24.f_4);
					if (bVar0)
					{
						func_999(iVar1, 0, floor(100f));
					}
					else
					{
						func_1000(iParam0, 0, floor(100f));
					}
					func_1003(iParam0, 0, fVar32);
				}
				break;
			case -778289619:
				if (func_641(0, &uVar31))
				{
					fVar32 = func_1002(to_float(Var24.f_3), Var24.f_4);
					func_1004(iParam0, 0, fVar32);
				}
				break;
			case -1946606248:
				func_785(iParam0, Var24.f_5);
				break;
			case 855745648:
				if (func_641(1, &uVar31))
				{
					fVar40 = Var24.f_5;
					if (bVar0)
					{
						func_999(iVar1, 1, floor(fVar40));
					}
					else
					{
						func_1000(iParam0, 1, floor(fVar40));
					}
				}
				break;
			case 1365603835:
				if (func_1001(1, &uVar31))
				{
					fVar32 = func_1002(to_float(Var24.f_3), Var24.f_4);
					if (bVar0)
					{
						func_999(iVar1, 1, floor(100f));
					}
					else
					{
						func_1000(iParam0, 1, floor(100f));
					}
					func_1003(iParam0, 1, fVar32);
				}
				break;
			case 1497139093:
				if (func_641(1, &uVar31))
				{
					fVar32 = func_1002(to_float(Var24.f_3), Var24.f_4);
					func_1004(iParam0, 1, fVar32);
				}
				break;
		}
		iVar33++;
	}
	func_1005(iParam1);
	_0xd962f8579d702db5();
}

struct<2> func_791(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

bool func_792(int iParam0)
{
	if (!func_284(iParam0, 0))
	{
		return false;
	}
	return _0x4aef1fb5b9011d75(iParam0);
}

int func_793(int iParam0)
{
	if (!func_511(iParam0))
	{
		return 0;
	}
	return iParam0;
}

int func_794(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2059726619:
			return 0;
		case -1858513856:
			return 7;
		case -1827027577:
			return 20;
		case -1791452194:
			return 14;
		case -1648383828:
			return 29;
		case -1569450319:
			return 1;
		case -1558096473:
			return 17;
		case -1544126829:
			return 43;
		case -1517904196:
			return 19;
		case -1379330323:
			return 30;
		case -1317365569:
			return 49;
		case -1102272634:
			return 40;
		case -1035515486:
			return 22;
		case -983605026:
			return 42;
		case -888740979:
			return 11;
		case -868657362:
			return 8;
		case -794277189:
			return 18;
		case -734947450:
			return 48;
		case -702790226:
			return 10;
		case -662178186:
			return 21;
		case -476045512:
			return 45;
		case -395646254:
			return 34;
		case -308965548:
			return 39;
		case -150200864:
			return 3;
		case -103050851:
			return 44;
		case -99092070:
			return 31;
		case -57190831:
			return 38;
		case 0:
			return 56;
		case 85441452:
			return 53;
		case 238733925:
			return 23;
		case 459744337:
			return 12;
		case 500722008:
			return 25;
		case 552246565:
			return 55;
		case 554578289:
			return 41;
		case 653400939:
			return 54;
		case 657906142:
			return 37;
		case 699990316:
			return 28;
		case 854596618:
			return 2;
		case 1145777975:
			return 52;
		case 1150939141:
			return 16;
		case 1248540072:
			return 6;
		case 1466150167:
			return 51;
		case 1528935719:
			return 15;
		case 1584468323:
			return 35;
		case 1603936352:
			return 9;
		case 1642484975:
			return 26;
		case 1647012424:
			return 24;
		case 1710714415:
			return 27;
		case 1729948479:
			return 50;
		case 1795984405:
			return 47;
		case 1796037447:
			return 46;
		case 1914602340:
			return 13;
		case 1963510418:
			return 32;
		case 1969175294:
			return 36;
		case 2047376405:
			return 33;
		case 2109269555:
			return 4;
		case 2116849039:
			return 5;
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

int func_795(int iParam0, int iParam1, int iParam2)
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

bool func_796(int iParam0)
{
	switch (iParam0)
	{
		case -1696275132:
		case -1193798153:
		case -1030441283:
		case -804542901:
		case -787702678:
		case 1265573293:
		case 1997759228:
			return true;
	}
	return false;
}

bool func_797(int iParam0)
{
	if (func_2() != -1)
	{
		return false;
	}
	return func_135((*Global_1835011)[iParam0]->f_1, 1);
}

int func_798(int iParam0)
{
	switch (iParam0)
	{
		case 323124696:
			return -1865241121;
		case -2108314374:
			return 2117142684;
		case -1193798153:
			return -1409326024;
		case -787702678:
			return -641744968;
		case -804542901:
			return -946988203;
		case -1696275132:
			return -646136018;
		case -161595323:
			return -955835837;
		case -1114363619:
			return -179276075;
		case -368407134:
			return -492711560;
		case 1997759228:
			return 1764383959;
		case 1265573293:
			return 317501533;
		case -1030441283:
			return 817753087;
		case -1490884871:
			return 576606016;
		default:
			break;
	}
	return 0;
}

bool func_799(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

int func_800(int iParam0)
{
	switch (iParam0)
	{
		case 323124696:
			return -642026005;
		case -2108314374:
			return -940584364;
		case -1193798153:
			return 1972645282;
		case -787702678:
			return 1667205433;
		case -804542901:
			return 1362715885;
		case -1696275132:
			return 1053540370;
		case -161595323:
			return -1100103852;
		case -1114363619:
			return -1409869209;
		case -368407134:
			return -1760235357;
		case 1997759228:
			return -138366827;
		case 1265573293:
			return -1261163843;
		case -1030441283:
			return -963523016;
		case -1490884871:
			return 560825326;
		default:
			break;
	}
	return 0;
}

bool func_801(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_802(int iParam0)
{
	switch (iParam0)
	{
		case -642026005:
			return 1791726215;
		case -940584364:
			return -1553566002;
		case 1972645282:
			return -528070704;
		case 1667205433:
			return 1214218277;
		case 1362715885:
			return -1424874851;
		case 1053540370:
			return -414895106;
		case -1100103852:
			return -1560294747;
		case -1409869209:
			return 1937997726;
		case -1760235357:
			return 505929754;
		case -138366827:
			return -312076753;
		case -1261163843:
			return 235447783;
		case -963523016:
			return 1793239293;
		case 560825326:
			return -1142443514;
		default:
			break;
	}
	return 0;
}

int func_803(int iParam0)
{
	switch (iParam0)
	{
		case -642026005:
			return -695777111;
		case -940584364:
			return 1671816740;
		case 1972645282:
			return 1467033526;
		case 1667205433:
			return 1178765838;
		case 1362715885:
			return -1385591042;
		case 1053540370:
			return -1508614120;
		case -1100103852:
			return -116204733;
		case -1409869209:
			return 1041505554;
		case -1760235357:
			return 756063611;
		case -138366827:
			return 1035814529;
		case -1261163843:
			return -1052716565;
		case -963523016:
			return 1265504095;
		case 560825326:
			return 1343260208;
		default:
			break;
	}
	return 0;
}

void func_804(int iParam0, float fParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0]->f_372.f_1 = fParam1;
	iVar0 = func_88(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return;
	}
	iVar1 = floor(Global_40.f_1095.f_1[iParam0]->f_372.f_1);
	set_attribute_points(iVar0, 7, iVar1);
	iVar2 = get_attribute_rank(iVar0, 7);
	Global_40.f_1095.f_1[iParam0]->f_372 = iVar2;
	_0xa69899995997a63b(iVar0, iVar2);
	func_935(iVar2);
}

bool func_805(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_719(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { func_331(iParam1, Var0, 1415981582, 0) };
	return func_335(Var29, 1);
}

bool func_806(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_719(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { func_331(iParam1, Var0, -2119169513, 0) };
	return func_335(Var29, 1);
}

void func_807(bool bParam0)
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

void func_808(int iParam0)
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

void func_809(bool bParam0)
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

void func_810(bool bParam0)
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

void func_811(bool bParam0)
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

var func_812(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

bool func_813(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_1006(iParam0, 1)] != &Global_1946804->f_57[func_1006(iParam0, 1)];
}

int func_814(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_1006(iParam0, 1)]);
}

bool func_815(int iParam0, int iParam1, int iParam2)
{
	if (!func_284(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_954(iParam0, 0, 1) };
	Var5 = { func_331(iParam0, Var0, Var0.f_4, 0) };
	return func_334(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

int func_816(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_954(iParam1, 1, 0) };
		iParam3 = func_1007(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1008(iParam1, iParam2, func_1006(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_1009(1, (func_2() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_1006(iParam3, 1)])
			{
				func_1010(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_1011(32768) && iParam1 != &Global_1946804->f_57[func_1006(iParam3, 1)])
			{
				func_1012();
				func_1010(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_1010(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_1013(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_1010(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_1014(0);
			func_1015(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_1010(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_817()
{
	if (!_unlock_is_unlocked(-1526891582))
	{
		func_1016();
		_unlock_set_unlocked(-1526891582, true);
		func_1017(-916314281);
		func_815(-916314281, 1, 752097756);
		set_current_ped_weapon(Global_35, -916314281, true, 2, false, false);
		func_1017(494733111);
		func_815(494733111, 1, 752097756);
		set_current_ped_weapon(Global_35, 494733111, true, 4, false, false);
	}
}

int func_818(var uParam0, int iParam1, bool bParam2)
{
	return _0x033ee4b89f3ac545(func_666(bParam2), uParam0, iParam1);
}

bool func_819(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_1018(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_670(*uParam1, &Var0, bParam6, 0))
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
	if (!func_668(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_666(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_820(int iParam0)
{
	return func_736(iParam0) == -1784221369;
}

char* func_821()
{
	return "UNNAMED_HORSE";
}

bool func_822()
{
	iVar0 = func_823();
	if (does_blip_exist(iVar0))
	{
		return true;
	}
	return false;
}

int func_823()
{
	return Global_1900383->f_393.f_1;
}

void func_824(int iParam0)
{
	Global_1900383->f_393.f_1 = iParam0;
}

int func_825()
{
	iVar0 = func_1019();
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

int func_826(int iParam0)
{
	if (func_2() != -1)
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
	fVar1 = func_922(absf(fVar1) < 1f, func_922(fVar1 < 0f, -1f, 1f), fVar1);
	return ceil(fVar1);
}

int func_827(int iParam0)
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

int func_828()
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

void func_829(int iParam0, bool bParam1, int iParam2)
{
	func_1020((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_1021(iParam0);
}

void func_830(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), 0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), 1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_1022(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_831(bool bParam0)
{
	bVar3 = false;
	if (func_1023(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1024(iVar5, &iVar2, &iVar0))
			{
				if (!func_284(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1025(iVar2);
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
							if (func_736(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_825() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_825() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_1026();
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

struct<2> func_832(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

char* func_833(int iParam0)
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

int func_834(int iParam0, int iParam1)
{
	if (!func_1027(iParam0))
	{
		return 0;
	}
	if (!func_94())
	{
		return 0;
	}
	if (!func_1028(iParam0, &iVar0, &uVar1))
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

bool func_835(int iParam0, var uParam1, bool bParam2)
{
	if ((bParam2 && func_2() == 0) && !_unlock_is_visible(iParam0))
	{
		return false;
	}
	if (!func_1029(iParam0, uParam1, &uVar0, &iVar11) || iVar11 < 1)
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

int func_836(int iParam0)
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

bool func_837(int iParam0)
{
	return !func_1030(iParam0, 1);
}

int func_838(int iParam0)
{
	if (!func_588(iParam0))
	{
		return -1;
	}
	if (iParam0 == 34 && func_723() == 128)
	{
		return 128;
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 120:
		case 121:
			return 78;
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
		case 106:
		case 107:
		case 108:
			return 38;
		case 18:
		case 19:
		case 20:
		case 21:
		case 105:
			return 69;
		case 22:
		case 118:
			return 3;
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 109:
		case 110:
		case 111:
			return 5;
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 112:
		case 113:
			return 105;
		case 23:
		case 24:
			return 23;
		case 35:
			return 101;
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 114:
		case 115:
			return 26;
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 102:
		case 103:
		case 104:
			return 76;
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 116:
		case 117:
			return 92;
		case 4:
			return 13;
		case 128:
		case 129:
		case 130:
		case 131:
			return 79;
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
			return 98;
		case 5:
			return 14;
		case 137:
		case 138:
		case 139:
		case 140:
			return 71;
		case 141:
		case 142:
		case 143:
		case 144:
			return 4;
		case 34:
			return 90;
		case 145:
		case 146:
		case 147:
		case 148:
			return 9;
		case 67:
			return 113;
		case 87:
		case 88:
		case 89:
			return 28;
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
			return 115;
		case 95:
		case 96:
		case 97:
			return 120;
		case 98:
			return 123;
		case 99:
		case 100:
		case 123:
			return 117;
		case 119:
			return 65;
		case 122:
			return 82;
		case 124:
			return 110;
		case 125:
			return 127;
		case 56:
			return 71;
		case 57:
			return 98;
		case 58:
			return 9;
		case 59:
			return 79;
		default:
			break;
	}
	return -1;
}

bool func_839(int iParam0)
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

bool func_840(int iParam0)
{
	if (!func_1031(iParam0))
	{
		return false;
	}
	return func_1032(iParam0, 33554432);
}

float func_841(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

void func_842()
{
	Global_1900383->f_444.f_13 = 0;
}

int func_843()
{
	return Global_1900383->f_444.f_13;
}

void func_844(int iParam0)
{
	Global_1900383->f_444.f_13 = iParam0;
}

bool func_845()
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

int func_846(int iParam0)
{
	if (!func_269(iParam0))
	{
		return -1;
	}
	return func_1033(func_611(iParam0));
}

bool func_847(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_848(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_849()
{
	return Global_1905944->f_5693 != -1;
}

bool func_850(int iParam0)
{
	if (func_2() != -1)
	{
		return false;
	}
	return func_135((*Global_1347702)[iParam0]->f_15, 1);
}

void func_851(int iParam0)
{
	if (!func_1034(iParam0))
	{
		func_1036(func_1035(iParam0));
	}
}

int func_852()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1034(_0x126cbebba46693cf(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_853(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_1037(&Global_0, 8);
	}
	if (!func_94() || func_2() != -1)
	{
		return;
	}
	func_1037(&Global_0, 1);
}

int func_854(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_855(iVar9);
	iVar2 = func_855(iVar10);
	iVar3 = func_855(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_855(iVar12);
	}
	iVar5 = func_856(iVar9);
	iVar6 = func_856(iVar10);
	iVar7 = func_856(iVar11);
	if (iParam2 != 2)
	{
		iVar8 = func_856(iVar12);
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

int func_855(int iParam0)
{
	if (func_733(iParam0, 1, 0))
	{
		iVar0 = func_735(iParam0, 0, 0);
	}
	return iVar0;
}

int func_856(int iParam0)
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

void func_857(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_94() && (func_1038(38) || func_850(38)))
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
			if (func_94() && (func_1038(39) || func_850(39)))
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
			iVar9 = func_1039(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		case 41:
			if (func_94() && (func_1038(41) || func_850(41)))
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
			if (func_94() && (func_1038(49) || func_850(49)))
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
			iVar9 = func_1039(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_1040(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar12 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar12 = get_hash_key("toast_log_blips");
	}
	if (func_1041(iParam0, iVar13, iVar14))
	{
	}
	if (func_1042(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_1043(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_1044(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_1045(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_1046(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

int func_858(int iParam0, int iParam1)
{
	if (!func_864(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

void func_859(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_858(iParam1, 5) || iParam0 == func_858(iParam1, 6)) || iParam0 == func_858(iParam1, 7)) || iParam0 == func_858(iParam1, 8)) || iParam0 == func_858(iParam1, 9))
	{
		func_1047(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_857(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_1048(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_860(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if ((((iParam0 == func_858(iParam1, 5) || iParam0 == func_858(iParam1, 6)) || iParam0 == func_858(iParam1, 7)) || iParam0 == func_858(iParam1, 8)) || iParam0 == func_858(iParam1, 9))
	{
		if (func_1047(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_857(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_1048(51, 0, 0, iVar0, func_1039(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_857(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_1048(51, 0, 0, iVar0, func_1039(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_861()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) <= 4);
}

bool func_862()
{
	return Global_1905944->f_5694;
}

bool func_863()
{
	uVar0 = Global_1905944->f_5695;
	Global_1905944->f_5695 = 0;
	return uVar0;
}

bool func_864(int iParam0, var uParam1)
{
	if (!func_1049(iParam0))
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

int func_865(int iParam0)
{
	return func_1050(iParam0);
}

bool func_866(int iParam0)
{
	if (func_2() != -1)
	{
		if (func_764(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_764(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_867(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_764(iParam0, 65536) && !func_764(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_764(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_764(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_868(int iParam0, int iParam1, int iParam2)
{
	if (!func_284(iParam1, 0))
	{
		return false;
	}
	return func_869(iParam0, iParam1) >= iParam2;
}

int func_869(int iParam0, int iParam1)
{
	if (!func_284(iParam1, 0))
	{
		return 0;
	}
	Var0 = { func_1051(iParam0, iParam1) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(iParam0, &Var0, 0);
	return uVar4;
}

int func_870(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (!func_284(iParam1, 0))
	{
		return 0;
	}
	if (iParam2 < 1)
	{
		return 0;
	}
	Var0 = { func_871(iParam0) };
	Var5 = { func_872(iParam0, iParam1, Var0, Var0.f_4) };
	return func_1052(iParam0, iParam1, &Var5, iParam2, iParam3, bParam4);
}

struct<5> func_871(int iParam0)
{
	Var0 = { func_872(iParam0, 1328661203, func_665(), -1591664384) };
	Var0.f_4 = 1084182731;
	return Var0;
}

struct<4> func_872(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, int iParam6)
{
	if (!func_284(iParam1, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(iParam0, &uParam2, iParam1, iParam6, &Var0);
	return Var0;
}

bool func_873(int iParam0, int iParam1)
{
	if (!func_284(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

void func_874(int iParam0)
{
	if (func_850(41))
	{
		func_283(363, 0);
	}
	else
	{
		func_283(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_1053(-1865241121);
			func_1054(-642026005);
			func_1055(-642026005);
			func_853(0, 10);
			break;
		case -2108314374:
			func_1053(2117142684);
			func_1054(-940584364);
			func_1055(-940584364);
			func_853(0, 10);
			break;
		case -1193798153:
			func_1053(-1409326024);
			func_1054(1972645282);
			func_1055(1972645282);
			func_853(0, 10);
			break;
		case -787702678:
			func_1053(-641744968);
			func_1054(1667205433);
			func_1055(1667205433);
			func_853(0, 10);
			break;
		case -804542901:
			func_1053(-946988203);
			func_1054(1362715885);
			func_1055(1362715885);
			func_853(0, 10);
			break;
		case -1696275132:
			func_1053(-646136018);
			func_1054(1053540370);
			func_1055(1053540370);
			func_853(0, 10);
			break;
		case -161595323:
			func_1053(-955835837);
			func_1054(-1100103852);
			func_1055(-1100103852);
			func_853(0, 10);
			break;
		case -1114363619:
			func_1053(-179276075);
			func_1054(-1409869209);
			func_1055(-1409869209);
			func_853(0, 10);
			break;
		case -368407134:
			func_1053(-492711560);
			func_1054(-1760235357);
			func_1055(-1760235357);
			func_853(0, 10);
			break;
		case 1997759228:
			func_1053(1764383959);
			func_1054(-138366827);
			func_1055(-138366827);
			func_853(0, 10);
			break;
		case 1265573293:
			func_1053(317501533);
			func_1054(-1261163843);
			func_1055(-1261163843);
			func_853(0, 10);
			break;
		case -1030441283:
			func_1053(817753087);
			func_1054(-963523016);
			func_1055(-963523016);
			func_853(0, 10);
			break;
		case -1490884871:
			func_1053(576606016);
			func_1054(560825326);
			func_1055(560825326);
			func_853(0, 10);
			break;
		case -395458616:
			func_1053(814934957);
			func_1054(858269539);
			func_1055(858269539);
			break;
	}
}

int func_875(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_876(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_1056(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_877(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_878(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_879(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_880(int iParam0, int iParam1)
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

float func_881(float fParam0, float fParam1, float fParam2)
{
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(round(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

bool func_882(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_879(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_878(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_631(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_876(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_875(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_877(iParam0);
	if (iVar5 < 1 || iVar5 > func_880(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

void func_883(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_1057() - fParam1);
	func_1058(uParam0, 1);
	func_1059(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_884(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_885(var uParam0)
{
	if (!func_634(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_1060(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_1057() - uParam0->f_1);
}

bool func_886(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_1061(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_1062())
	{
		return func_1061(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_1061(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

char* func_887(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

void func_888(int iParam0, int iParam1, int iParam2)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iParam2 = func_795(iParam2, 0, 100);
	Global_40.f_1095.f_1[iParam0]->f_398[iParam1] = iParam2;
	iVar0 = func_88(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
	}
	func_644(iVar0, iParam1, func_578(iParam0, iParam1));
	func_1063(iVar0, iParam1);
}

void func_889(int iParam0, int iParam1, float fParam2)
{
	fParam2 = func_1064(fParam2, 0f, 1E+09f);
	Global_40.f_1095.f_1[iParam0]->f_398[iParam1]->f_2 = fParam2;
}

bool func_890(int iParam0, int iParam1)
{
	if (func_641(iParam1, &uVar0))
	{
		if (_0x200373a8df081f22(iParam0, uVar0))
		{
			return true;
		}
	}
	return false;
}

float func_891(int iParam0, int iParam1)
{
	fVar0 = 0f;
	if (iParam1 == 0)
	{
		if (func_437(iParam0, 0) > 50)
		{
			fVar0 = (fVar0 + 0.25f);
		}
	}
	if (func_733(-184823984, 1, 0))
	{
		fVar0 = (fVar0 + -0.1f);
	}
	if (func_213() == 0 && func_201() == iParam0)
	{
		fVar1 = func_1065(iParam1);
		fVar0 = (fVar0 - fVar1);
	}
	return fVar0;
}

float func_892(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return Global_40.f_1095.f_1[iParam0]->f_398[iParam1]->f_1;
}

void func_893(int iParam0, int iParam1, float fParam2)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	fParam2 = func_1064(fParam2, -1f, 1f);
	Global_40.f_1095.f_1[iParam0]->f_398[iParam1]->f_1 = fParam2;
}

void func_894(int iParam0)
{
	Global_1900383->f_444.f_8 = iParam0;
}

void func_895(int iParam0, int iParam1, float fParam2)
{
	fParam2 = func_1064(fParam2, 0f, 1E+09f);
	Global_40.f_1095.f_1[iParam0]->f_407[iParam1]->f_2 = fParam2;
}

bool func_896(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	vVar0 = { func_932(func_1066()) };
	fVar3 = func_1067();
	if (func_1068(get_entity_coords(iParam0, true, false), vVar0, fVar3, 0))
	{
		return true;
	}
	return false;
}

bool func_897(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return false;
	}
	if (_is_ped_using_scenario_hash(iParam0, 696740378) || _is_ped_using_scenario_hash(iParam0, 197929875))
	{
		return true;
	}
	return false;
}

float func_898(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return Global_40.f_1095.f_1[iParam0]->f_407[iParam1]->f_1;
}

void func_899(int iParam0, int iParam1, float fParam2)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	fParam2 = func_1064(fParam2, -1f, 1f);
	Global_40.f_1095.f_1[iParam0]->f_407[iParam1]->f_1 = fParam2;
}

void func_900(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0]->f_407[iParam1]->f_1 = 0f;
}

int func_901(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (*Global_1900383)[iParam0]->f_1;
}

void func_902(int iParam0)
{
	Global_1900383->f_444.f_6 = iParam0;
}

int func_903(int iParam0)
{
	if (!func_284(*iParam0, 0))
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

bool func_904(int iParam0)
{
	return func_736(iParam0) == -427144552;
}

struct<4> func_905(bool bParam0)
{
	iVar0 = func_666(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_331(923904168, func_330(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_331(923904168, func_330(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_331(923904168, func_330(bParam0), -740156546, 0);
}

bool func_906(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_332(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_907(int iParam0, var uParam1, int iParam2)
{
	if (func_1069(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

bool func_908(int iParam0, bool bParam1)
{
	if (func_1070(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_140(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_909(int iParam0, var uParam1, bool bParam2)
{
	if (!func_284(iParam0, 0))
	{
		return false;
	}
	Var0 = { func_954(iParam0, 0, 1) };
	iVar5 = 1728382685;
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_1071((386 + iVar29), 1);
		if (func_906(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_907(iParam0, &Var6, iVar5);
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

int func_910(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_284(iParam0, 0))
	{
		return 0;
	}
	if (!func_668(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_666(bParam3), iParam0);
}

struct<28> func_911(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var28.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_666(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_915(&Var28) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_912(int iParam0, var uParam1, bool bParam2)
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
					func_1072(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_1072(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 28))
	{
		func_1072(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<17> func_913(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_666(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_915(&Var17) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_914(int iParam0, var uParam1, bool bParam2)
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
					func_1072(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_1072(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 17))
	{
		func_1072(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<16> func_915(var uParam0)
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

int func_916(int iParam0, var uParam1, bool bParam2)
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
					func_1072(iVar0, 1);
					return iVar0;
				}
				_cashinventory_transaction_delete(iVar0);
			}
			else if (_cashinventory_transaction_get_num_of_items(iVar0) == 0)
			{
				_cashinventory_transaction_delete(iVar0);
			}
			func_1072(iVar0, 2);
			return -1;
		}
	}
	else if (_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16))
	{
		func_1072(iVar0, 1);
		return iVar0;
	}
	return -1;
}

int func_917(struct<4> Param0, int iParam4, int iParam5)
{
	Var0.f_9 = -1591664384;
	if (func_1073(Param0, iParam4, &Var0, iParam5))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_918(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		iVar5 = func_1070(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_1074(iParam0);
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

void func_919(int iParam0, int iParam1)
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

void func_920(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_1075(iParam1))
		{
			func_1076(iParam0, 41788943);
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
			func_1077(iParam0, 0, 1);
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
			func_361(iParam0, 0);
			bVar0 = true;
		}
		func_353(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

void func_921(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = { 0f, 0f, 0f };
	uParam0->f_6 = { 0f, 0f, 0f };
}

float func_922(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_923(var uParam0)
{
	return *uParam0;
}

void func_924(var uParam0, vector3 vParam1)
{
	uParam0->f_3.f_3 = { vParam1 };
}

void func_925(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_926(vector3 vParam0, vector3 vParam3, bool bParam6, bool bParam7)
{
	bVar0 = is_sphere_visible(vParam0, 5f);
	if (bParam6)
	{
		if (func_1078(vParam0 + Vector(0.2f, 0f, 0f)))
		{
			return false;
		}
	}
	if (!get_ground_z_for_3d_coord(vParam0 + Vector(1f, 0f, 0f), &uVar1, false))
	{
		return false;
	}
	if (is_any_vehicle_near_point(vParam0, 7f))
	{
		return false;
	}
	if (bVar0)
	{
	}
	else
	{
		if (bParam7)
		{
			if (vParam0.z > (vParam3.z + 10f))
			{
				return false;
			}
		}
		fVar2 = vdist(vParam0, vParam3);
		if (fVar2 > 40f && fVar2 < 80f)
		{
			return true;
		}
	}
	return false;
}

bool func_927(vector3 vParam0, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7, int iParam8, float fParam9, int iParam10, float fParam11)
{
	switch (*iParam3)
	{
		case 0:
			if (iParam3->f_2 > 4)
			{
				*bParam4 = 1;
				return false;
			}
			iParam3->f_1 = _0x74f0209674864cbd();
			func_1079(&(iParam3->f_1), iParam3->f_2, vParam0, iParam5, iParam7, iParam8, fParam9, iParam10, fParam11);
			if (!_0x1ac5a8ab50cfaa33(iParam3->f_1))
			{
			}
			else
			{
				func_1080(&(iParam3->f_1), iParam5);
				if (!func_137(iParam3->f_6))
				{
					_0xce4e669400e5f8aa(iParam3->f_1, func_1081(iParam3->f_6));
				}
				_0x2b8af29a78024bd3(iParam3->f_1);
			}
			*iParam3 = 3;
			break;
		case 3:
			if (!_0x1ac5a8ab50cfaa33(iParam3->f_1))
			{
				iVar0 = 4;
			}
			else
			{
				iVar0 = _0x0365000d8bf86531(&(iParam3->f_1));
			}
			switch (iVar0)
			{
				case 4:
					if (bParam6 && iParam3->f_2 < 4)
					{
						iParam3->f_2++;
						*iParam3 = 0;
					}
					else
					{
						*bParam4 = 1;
					}
					break;
				case 3:
					iParam3->f_3 = { _0x865732725536ee39(&(iParam3->f_1)) };
					*iParam3 = 4;
					if (!bParam6)
					{
						return true;
					}
					break;
			}
			break;
		case 4:
			return true;
	}
	return false;
}

bool func_928(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_929(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_1082(*uParam0, 0f, 0f, 0f))
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

bool func_930(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

bool func_931(int iParam0)
{
	switch (func_2())
	{
		case -1:
			return (Global_1357549->f_1494 && iParam0) != 0;
	}
	return false;
}

Vector3 func_932(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1343.699f, 2429.397f, 307.0626f;
		case 1:
			return -123.1805f, -28.8611f, 94.8478f;
		case 2:
			return 667.9077f, -1252.78f, 42.9221f;
		case 3:
			return 1880.807f, -1873.231f, 41.8094f;
		case 4:
			return 1422.625f, -7332.473f, 80.5977f;
		case 5:
			return 2254.96f, -758.12f, 41.75f;
		case 6:
			return 2351.282f, 1362.077f, 104.9752f;
		case 7:
			return -2593.21f, 453.9533f, 145.9973f;
		case 8:
			return func_1083();
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_933(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_88(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar1 = get_entity_model(iVar0);
	iVar2 = func_1084(iVar1);
	if (decor_exist_on(iVar0, "HorseGender"))
	{
		iVar3 = decor_get_int(iVar0, "HorseGender");
	}
	else
	{
		iVar3 = func_990(iVar0);
		decor_set_int(iVar0, "HorseGender", iVar3);
	}
	func_751(iParam0, iVar1);
	func_750(iParam0, iVar2);
	func_752(iParam0, iVar3);
	iVar4 = -1;
	iVar5 = -15;
	if (iParam1 != 0)
	{
		iVar4 = get_game_timer();
		iVar5 = func_221();
	}
	func_199(iParam0, iParam1);
	func_502(iParam0, iVar4);
	func_503(iParam0, iVar5);
	iVar6 = get_attribute_rank(iVar0, 7);
	fVar7 = to_float(get_attribute_points(iVar0, 7));
	func_718(iParam0, iVar6);
	func_804(iParam0, fVar7);
	iVar8 = 0;
	while (iVar8 < 3)
	{
		if (func_652(iVar8, &iVar9))
		{
			iVar10 = get_attribute_rank(iVar0, iVar9);
			func_746(iParam0, iVar8, iVar10);
		}
		iVar8++;
	}
}

int func_934(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = get_entity_model(iParam0);
	if (!_does_metaped_outfit_exist_for_ped_model(1268180497, iVar0))
	{
		return 0;
	}
	iVar1 = 1268180497;
	if (_0x98082246107a6acf(iParam0, iVar1))
	{
		return 1;
	}
	return 0;
}

void func_935(int iParam0)
{
	if (func_603() < iParam0)
	{
		func_1085(iParam0);
	}
}

bool func_936(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	iVar0 = func_666(bParam7);
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

bool func_937(var uParam0, var uParam1)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (!_0x025a1b1fb03fbf61(func_666(0), uParam0, uParam1, 29, 1))
	{
		return false;
	}
	return true;
}

int func_938(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10, bool bParam11)
{
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	if (!func_670(Param0, &Var0, 1, 0))
	{
		return -1;
	}
	if (func_939(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return -1;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, iParam8))
	{
		return -1;
	}
	iVar14 = func_332(Var0.f_4, Param4, iParam8, 0);
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
	Var16 = { func_915(&Var0) };
	Var16.f_4 = { Param4 };
	Var16.f_11 = iParam8;
	Var16.f_10 = bParam10;
	iVar32 = func_916(1168099063, &Var16, bParam9);
	if (iVar32 == -1)
	{
		return -1;
	}
	return iVar32;
}

bool func_939(var uParam0, bool bParam1)
{
	if (((*uParam0 == *bParam1 && uParam0->f_1 == bParam1->f_1) && uParam0->f_2 == bParam1->f_2) && uParam0->f_3 == bParam1->f_3)
	{
		return true;
	}
	return false;
}

int func_940(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return -1;
	}
	if (func_939(&Param0, &Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_670(Param0, &Var0, 1, 0) || !func_670(Param4, &Var14, 1, 0))
	{
		return -1;
	}
	if (func_939(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return -1;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, Var14.f_9) || !_inventory_fits_slot_id(Var14.f_4, Var0.f_9))
	{
		return -1;
	}
	Var28 = { func_915(&Var0) };
	Var28.f_4 = { Var14.f_5 };
	Var28.f_11 = Var14.f_9;
	Var28.f_10 = (Var14.f_10 || iParam8);
	Var44 = { func_915(&Var14) };
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
					func_1072(iVar60, 1);
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
		iVar60 = func_916(1168099063, &Var28, 0);
		iVar60 = func_916(1168099063, &Var44, 0);
	}
	return iVar60;
}

void func_941(int iParam0, var uParam1, var uParam2)
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

bool func_942()
{
	return !&Global_1911774;
}

void func_943(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

char* func_944(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_945(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_946(int iParam0)
{
	if (!func_284(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

bool func_947(int iParam0, int iParam1)
{
	if (!func_284(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_731(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1086("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_952(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_1087(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_953(iVar1);
				return true;
			}
			iVar3++;
		}
		func_953(iVar1);
	}
	return false;
}

int func_948(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_949(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_950(&Var0, func_905(0));
	}
	if (!func_951(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_953(iVar14);
	return uVar15;
}

struct<14> func_949(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_950(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_951(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_666(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_952(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_953(int iParam0)
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

struct<5> func_954(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_330(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_736(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_331(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_905(bParam1) };
			if (bParam2 && func_908(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_906(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_906(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_907(iParam0, &Var5, 1728382685))
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
			Var0 = { func_1088(bParam1) };
			switch (func_1070(iParam0))
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
			if (func_1089(iParam0, -1823706425))
			{
				Var0 = { func_331(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_1089(iParam0, -1483207246))
			{
				Var0 = { func_331(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_670(Var0, &Var27, bParam1, 0))
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

bool func_955(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_1018(iParam0))
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return false;
	}
	if (!func_668(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!_0xb4158c8c9a3b5dce(func_666(bParam4), iParam0, iParam1, iParam2))
	{
		return false;
	}
	return true;
}

void func_956(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (is_ped_injured(iParam0))
	{
		return;
	}
	bVar0 = _0x33fa048675821da7(iParam0, 3);
	if (!bVar0)
	{
		_0x2eb75fb86c41f026(iParam0, 3, 1);
	}
	func_1090(iParam0, 0f, 0);
	if (!bVar0)
	{
		_0x2eb75fb86c41f026(iParam0, 3, 0);
	}
}

bool func_957(int iParam0)
{
	switch (iParam0)
	{
		case -2013384490:
		case -1602657245:
		case -1066874997:
		case -746674788:
			return true;
	}
	return false;
}

bool func_958(int iParam0)
{
	switch (iParam0)
	{
		case -2051332199:
		case -1664530975:
		case -597058368:
		case -529638012:
		case -90546043:
		case 128702355:
		case 228922461:
		case 2006811763:
			return true;
	}
	return false;
}

bool func_959(int iParam0)
{
	switch (iParam0)
	{
		case -2085219828:
		case -1620920647:
		case -1477273558:
		case -635441454:
			return true;
	}
	return false;
}

int func_960(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
	}
	iVar0 = get_attribute_rank(iParam0, func_985());
	return iVar0;
}

int func_961(int iParam0)
{
	return 20;
}

var func_962()
{
	return Global_1900383->f_421;
}

void func_963(int iParam0)
{
	Global_1900383->f_421 = iParam0;
}

int func_964(int iParam0)
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

int func_965()
{
	return 1342496140;
}

int func_966()
{
	return 446670976;
}

int func_967()
{
	return 1;
}

int func_968()
{
	return -868094182;
}

int func_969()
{
	return 1074477367;
}

int func_970()
{
	return 1;
}

int func_971()
{
	return -997197050;
}

int func_972()
{
	return -2063289686;
}

int func_973()
{
	return 2;
}

int func_974()
{
	return -868094182;
}

int func_975()
{
	return 1074477367;
}

int func_976()
{
	return 1;
}

int func_977()
{
	return 1235275977;
}

int func_978()
{
	return 2030804811;
}

int func_979()
{
	return 1;
}

int func_980()
{
	return 1974379573;
}

int func_981()
{
	return 2024948086;
}

int func_982()
{
	return 1;
}

void func_983(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

void func_984(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_207(iParam0);
	iVar1 = get_default_max_attribute_rank(iVar0, 7);
	if (iParam1 == 1)
	{
		sVar2 = "HORSE_BONDED";
	}
	else if (iParam1 == iVar1)
	{
		sVar2 = "HORSE_BONDING_MAXIMUM";
	}
	else
	{
		sVar2 = "HORSE_BONDING_LEVELUP";
	}
	func_812(sVar2, _create_var_string(2, "HORSE_BONDING_LEVEL", iParam1), 908516622, -961843223, -2, "HUD_Toast_Soundset", "horse_bonding", 0, 0, 1, 1);
}

int func_985()
{
	return 0;
}

void func_986(int iParam0, char* sParam1)
{
	sVar0 = "RPG_LEVEL_PROGRESS_TOAST";
	switch (iParam0)
	{
		case 0:
			sVar1 = "RPG_HEALTH";
			break;
		case 1:
			sVar1 = "RPG_STAMINA";
			break;
		default:
			return;
	}
	sVar2 = _create_var_string(2, "HORSE_RPG_LEVEL_PROGRESS", sParam1);
	switch (iParam0)
	{
		case 0:
			iVar3 = -1114634884;
			break;
		case 1:
			iVar3 = 1944692767;
			break;
		default:
			return;
	}
	sVar4 = func_1092(func_1091(sParam1));
	iVar5 = get_hash_key(sVar4);
	sVar6 = "";
	sVar7 = "HUD_Toast_Soundset";
	func_812(_create_var_string(10, sVar0, sVar1), sVar2, iVar3, iVar5, -2, sVar7, sVar6, 0, 0, 1, 1);
}

int func_987(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
	}
	iVar0 = get_attribute_rank(iParam0, func_988());
	return iVar0;
}

int func_988()
{
	return 1;
}

void func_989(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
	}
	iVar5 = 0;
	while (iVar5 < 3)
	{
		uVar0[iVar5] = _0x0ceeb6f4780b1f2f(iParam0, iVar5);
		iVar5++;
	}
	iVar5 = 0;
	while (iVar5 < 3)
	{
		iVar6 = &uVar0[iVar5];
		if (iVar6 == 0)
		{
		}
		else
		{
			_0x627f7f3a0c4c51ff(iParam0, &(uVar0[iVar5]));
		}
		iVar5++;
	}
	iVar5 = 0;
	while (iVar5 < 3)
	{
		uVar4 = _0x0ceeb6f4780b1f2f(iParam0, iVar5);
		uVar7 = uVar4;
		iVar5++;
	}
}

int func_990(int iParam0)
{
	iVar0 = 1;
	fVar1 = _get_ped_face_feature(iParam0, 41611);
	if (fVar1 == 1f)
	{
		iVar0 = 2;
	}
	return iVar0;
}

bool func_991(int iParam0, int iParam1, bool bParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return false;
	}
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	if (is_entity_dead(iParam1) || is_ped_injured(iParam1))
	{
		return false;
	}
	vVar0 = { get_entity_coords(iParam1, true, false) };
	fVar3 = func_187(iParam1, iParam0, 1, 1);
	if (bParam2)
	{
		fVar4 = func_190(iParam0);
		if (fVar4 >= 0.25f)
		{
			return false;
		}
		func_1090(iParam0, 0.25f, iParam1);
		return true;
	}
	else if (!is_ped_fleeing(iParam0))
	{
		open_sequence_task(&iVar5);
		_task_smart_flee_style_coord(0, vVar0, 3, 1048576, (100f - fVar3), -1, 0);
		close_sequence_task(iVar5);
		_task_perform_sequence_2(iParam0, iVar5, 1.5f, 1.5f);
		clear_sequence_task(&iVar5);
	}
	_0xff1e339ce40eaaaf(iParam0, 0);
	set_animal_tuning_bool_param(iParam0, 48, false);
	_0xf74e134f40192884(iParam0, 1);
	return true;
}

int func_992()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_993(int iParam0, int iParam1)
{
	_0xd962f8579d702db5();
	if (!does_entity_exist(Global_35))
	{
		return false;
	}
	if (is_entity_dead(Global_35) || is_ped_injured(Global_35))
	{
		return false;
	}
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!is_ped_in_writhe(iParam0))
	{
		return false;
	}
	if (_0x7fc84e85d98f063d(Global_35))
	{
		return false;
	}
	set_ped_config_flag(Global_35, 176, true);
	clear_ped_tasks(Global_35, 1, 0);
	task_revive_target(Global_35, iParam0, iParam1);
	func_432(iParam1, 1, 0, -142743235, 0);
	return true;
}

void func_994(int iParam0)
{
	Global_1900372->f_2 = iParam0;
}

void func_995(int iParam0)
{
	Global_1900372->f_1 = iParam0;
}

void func_996(int iParam0)
{
	Global_1900372->f_5 = iParam0;
}

int func_997(int iParam0)
{
	return 20;
}

void func_998(int iParam0, float fParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	fParam1 = (fParam1 * 0.01f);
	iVar1 = get_entity_health(iParam0);
	iVar2 = get_entity_max_health(iParam0, false);
	iVar0 = floor((fParam1 * IntToFloat(iVar2)));
	iVar3 = iVar0;
	if ((iVar1 + iVar0) > iVar2)
	{
		iVar3 = (iVar2 - iVar1);
	}
	iVar4 = (iVar1 + iVar3);
	_set_entity_health(iParam0, iVar4, 0);
}

void func_999(int iParam0, int iParam1, int iParam2)
{
	func_888(iParam0, iParam1, (func_578(iParam0, iParam1) + iParam2));
}

void func_1000(int iParam0, int iParam1, int iParam2)
{
	func_644(iParam0, iParam1, (func_643(iParam0, iParam1) + iParam2));
}

bool func_1001(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 19;
			break;
		case 1:
			*uParam1 = 18;
			break;
		default:
			return false;
	}
	return true;
}

float func_1002(float fParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return (fParam0 * 0.033f);
		case 1:
			return (fParam0 * 2f);
		case 2:
			return (fParam0 * 120f);
		case 3:
			return (fParam0 * 2880f);
		default:
			break;
	}
	return fParam0;
}

void func_1003(int iParam0, int iParam1, float fParam2)
{
	if (func_1001(iParam1, &iVar0))
	{
		_set_attribute_overpower_amount(iParam0, iVar0, fParam2, false);
	}
}

void func_1004(int iParam0, int iParam1, float fParam2)
{
	if (func_641(iParam1, &iVar0))
	{
		_set_attribute_overpower_amount(iParam0, iVar0, fParam2, false);
	}
}

void func_1005(int iParam0)
{
	if (func_1093(iParam0))
	{
		animpostfx_play("POSTFX_CONSUMABLE_STAMINA_FORT");
		return;
	}
	if (func_726(iParam0))
	{
		animpostfx_play("POSTFX_CONSUMABLE_STAMINA");
		return;
	}
}

int func_1006(int iParam0, int iParam1)
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

int func_1007(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_1094(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

bool func_1008(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1095();
	if (iParam2 == 39)
	{
		Var0 = { func_954(iParam0, 1, 0) };
		iParam2 = func_1006(func_1007(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_431(iParam0, 866047851) && func_1096(&(Global_1946804->f_1378)) >= 2)
	{
		return false;
	}
	if ((func_1011(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2])
	{
		func_1097(func_1094(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_1098(iParam2);
	func_1099(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2] != &Global_1946804->f_57[iParam2] && Global_1946804->f_57[iParam2]->f_1 > 1)
	{
		func_1100(Global_1946804->f_1378.f_1[iParam2], 4, 6);
		func_1100(Global_1946804->f_1497.f_1[iParam2], 4, 6);
	}
	func_1101(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804->f_1378.f_1[iParam2]->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2] = iParam0;
	Global_1946804->f_1378.f_1[iParam2]->f_1 = func_1102(iParam0, iParam2, iParam1, func_2() != -1);
	if (bParam4)
	{
		func_1103(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_1103(&(Global_1946804->f_1378), 1, 0);
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
				func_1104(func_1094(&(Global_1946804->f_2589.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_1009(bool bParam0, bool bParam1, bool bParam2)
{
	func_1105(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

void func_1010(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_1106(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1107(Var0);
}

bool func_1011(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_1012()
{
	func_1108(&(Global_1946804->f_2776));
	func_1109(32768);
	func_1104(1108822547, 8, 6);
}

int func_1013(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_1006(iParam0, 1);
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

void func_1014(int iParam0)
{
	if (func_1110(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1111(Var0);
}

void func_1015(int iParam0, int iParam1, int iParam2)
{
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_1111(Var0);
}

void func_1016()
{
	if (!_0x7c7e4ab748ea3b07())
	{
		return;
	}
	uVar0 = 29;
	func_1112(Global_35, &uVar0);
	Var30 = { func_330(0) };
	_0xe36d4a38d28d9cfb(0);
	_0xc04f47d488ef9eba(5, 1, &Var30, 0);
	_0x5d6182f3bce1333b(5, -142743235);
	func_1113(0);
	func_1114(7);
	func_1115(-1623728698, 1, 1, 0);
	if (func_1116() == 1160113249)
	{
		func_1115(-763730846, 1, 1, 1);
		func_1115(-361635024, 1, 1, 1);
	}
	func_1117(Global_35, &uVar0);
}

void func_1017(int iParam0)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_1087(iParam0))
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

bool func_1018(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

int func_1019()
{
	return Global_40.f_11095.f_35;
}

void func_1020(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_1118(bParam1);
	}
}

void func_1021(int iParam0)
{
	_0x74bcceb233ad95b2(-156028329, iParam0);
}

char* func_1022(int iParam0)
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

bool func_1023(int iParam0)
{
	if (!func_864(23, &vVar0))
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

bool func_1024(int iParam0, int iParam1, int iParam2)
{
	if (!func_864(23, &Var0))
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

int func_1025(int iParam0)
{
	return iParam0;
}

int func_1026()
{
	iVar0 = func_825();
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

bool func_1027(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_1028(int iParam0, int iParam1, var uParam2)
{
	if (!func_1027(iParam0))
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

bool func_1029(int iParam0, var uParam1, var uParam2, int iParam3)
{
	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_284(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!_item_database_fillout_acquire_cost(iParam0, uParam1, &Var0))
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

bool func_1030(int iParam0, int iParam1)
{
	if (!func_588(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_15614[iParam0] && iParam1) != 0;
}

bool func_1031(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_1032(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

int func_1033(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

bool func_1034(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_1035(int iParam0)
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

void func_1036(int iParam0)
{
	Global_40.f_12019.f_43 = (Global_40.f_12019.f_43 || iParam0);
}

void func_1037(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_1038(int iParam0)
{
	if (func_2() != -1)
	{
		return false;
	}
	if (!func_847(iParam0))
	{
		return false;
	}
	return func_1119((*Global_1347702)[iParam0]->f_15);
}

int func_1039(int iParam0, int iParam1)
{
	if (!func_864(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_int(&uVar5, &Var0);
	return uVar5;
}

char* func_1040(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_1120() >= 12)
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_POSTED_OBJ", func_1121(), 12);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_FOUND_OBJ", func_1122(), 12);
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
			else if (func_1123() >= 30)
			{
				sParam3 = _create_var_string(2, "COL_DB_POSTED_OBJ", func_1124(), 30);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_DB_FOUND_OBJ", func_1123(), 30);
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
				sParam3 = _create_var_string(2, "COL_LF_CAUGHT_OBJ", func_1125(), 13);
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
			else if (func_1126() >= 10)
			{
				sParam3 = _create_var_string(2, "COL_RC_POSTED_OBJ", func_1127(), 10);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_RC_FOUND_OBJ", func_1126(), 10);
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
				sParam3 = _create_var_string(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_1039(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_1041(int iParam0, int iParam1, int iParam2)
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

bool func_1042(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_add_entry_hash(3, iParam1, vParam2, get_hash_key(sParam5), get_hash_key(sParam6), 0);
	}
	return true;
}

bool func_1043(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	_uilog_add_or_update_objective(3, iParam1, get_hash_key(sParam2), sParam2, false, false, false);
	_uilog_set_entry_pinned(3, iParam1, true);
	_uilog_set_entry_brief_texture(3, iParam1, get_hash_key(sParam4), get_hash_key(sParam5));
	_uilog_set_entry_icon_texture(3, iParam1, iParam6, iParam7);
	_uilog_update_entry_subheader(3, iParam1, _create_var_string(2, sParam3));
	return true;
}

bool func_1044(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_1128(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_733(iVar2, 1, 0) || func_1130(func_1129(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1131(func_1128(iVar0))), func_1131(func_1128(iVar0)), bVar1, true, false);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1123() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1132(iVar0)), func_1132(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1124() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1132(iVar0)), func_1132(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1132(iVar0)), func_1132(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_858(iParam3, func_1133(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_855(iVar2) - iParam7) >= func_1039(iParam3, func_1134(iVar0));
				}
				else
				{
					bVar1 = func_855(iVar2) >= func_1039(iParam3, func_1134(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_855(iVar2) + iParam7) >= func_1039(iParam3, func_1134(iVar0));
			}
			else
			{
				bVar1 = func_855(iVar2) >= func_1039(iParam3, func_1134(iVar0));
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1135(iVar2)), func_1135(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_799(_0x126cbebba46693cf(iVar0, 1995362678, 0)))
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
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1136(_0x126cbebba46693cf(iVar0, iParam2, 0))), func_1136(_0x126cbebba46693cf(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1126() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1137(iVar0)), func_1137(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1127() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1137(iVar0)), func_1137(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1137(iVar0)), func_1137(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_858(iParam3, func_1133(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_855(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1138(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1138(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1139(iVar2)), func_1139(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_1045(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_1125() >= 13)
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

bool func_1046(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_269(func_268(0)) && ((func_167(0) == 1 || func_167(0) == 8) || func_167(0) == 6))
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

bool func_1047(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_1138(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1138(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1138(iVar0))
		{
			*iParam2++;
		}
		if (func_1138(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_1138(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1138(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1138(iVar0))
		{
			*iParam2++;
		}
		if (func_1138(iVar1))
		{
			*iParam2++;
		}
		if (func_1138(iVar0) && func_1138(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_1138(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1138(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1138(iVar0))
		{
			*iParam2++;
		}
		if (func_1138(iVar1))
		{
			*iParam2++;
		}
		if (func_1138(iVar2))
		{
			*iParam2++;
		}
		if ((func_1138(iVar0) && func_1138(iVar1)) && func_1138(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1138(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1138(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1138(iVar0))
		{
			*iParam2++;
		}
		if (func_1138(iVar1))
		{
			*iParam2++;
		}
		if (func_1138(iVar2))
		{
			*iParam2++;
		}
		if (func_1138(iVar3))
		{
			*iParam2++;
		}
		if (((func_1138(iVar0) && func_1138(iVar1)) && func_1138(iVar2)) && func_1138(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_1048(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_94() && (func_1038(38) || func_850(38)))
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
			if (func_94() && (func_1038(39) || func_850(39)))
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
			if (func_94() && (func_1038(49) || func_850(49)))
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
		if (func_94() && (func_1038(38) || func_850(38)))
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
			func_1140(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_1140(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_812(_create_var_string(2, sVar0), _create_var_string(2, func_1131(func_1141(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_1140(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_1140(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_94() && (func_1038(39) || func_850(39)))
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
			func_1140(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1140(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_94() && (func_1038(49) || func_850(49)))
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
			func_1140(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1140(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_1140(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1140(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

bool func_1049(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_1050(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1391860027;
		case 3:
			return -2049683567;
		case 4:
			return -1639750081;
		case 6:
			return -543306319;
		case 7:
			return 93160283;
		case 8:
			return -1838611891;
		case 1:
			return 1619762084;
		case 2:
			return -2104053099;
		case 9:
			return -1431073983;
		case 10:
			return 887432345;
		case 11:
			return -238320361;
		case 26:
			return -1433937760;
		case 27:
			return -681691620;
		case 28:
			return -706234936;
		case 29:
			return -282099500;
		case 30:
			return 1450105278;
		case 31:
			return -732027686;
		case 5:
			return 379756162;
		case 15:
			return 2128397741;
		case 17:
			return -924263120;
		case 33:
			return 1915478031;
		case 12:
			return -1775364220;
		case 13:
			return -1504845897;
		case 14:
			return -1227686818;
		case 18:
			return 1442571063;
		case 19:
			return -997221403;
		case 22:
			return 285759500;
		case 20:
			return 1489861748;
		case 32:
			return -2132712788;
		case 34:
			return 1427539511;
		case 23:
			return -967055532;
		case 24:
			return 662159626;
		case 25:
			return 1743191502;
		case 21:
			return -830712656;
		default:
			break;
	}
	return 0;
}

struct<4> func_1051(int iParam0, int iParam1)
{
	Var0 = { func_871(iParam0) };
	return func_872(iParam0, iParam1, Var0, Var0.f_4);
}

int func_1052(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return 0;
	}
	if (func_1018(iParam1))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_1142(iParam0, *uParam2, &Var0, 0))
	{
		return 0;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!_0x3e4e811480b3ae79(iParam0, uParam2, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

void func_1053(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
}

void func_1054(int iParam0)
{
	if (!func_801(iParam0))
	{
		_0x3ea62e56f386c997(iParam0, 1);
	}
}

void func_1055(int iParam0)
{
	_0x398fab9c96a81924(iParam0, 1);
}

int func_1056(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

float func_1057()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_1058(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1059(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_1060(var uParam0)
{
	return func_884(*uParam0, 2);
}

bool func_1061(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_1062()
{
	return Global_1109400->f_245;
}

void func_1063(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	if (!func_641(iParam1, &iVar0))
	{
		return;
	}
	sVar1 = func_1143(iParam1);
	sVar2 = func_1144(iParam1);
	if (!is_string_null_or_empty(sVar1))
	{
		iVar3 = _get_attribute_core_value(iParam0, iVar0);
		_0x437c08db4febe2bd(iParam0, sVar1, to_float(iVar3), -1);
		if (iVar3 <= 20)
		{
			_0xcb9401f918cb0f75(iParam0, sVar2, 1, -1);
		}
		else
		{
			_0xa6f67bec53379a32(iParam0, sVar2);
		}
	}
}

float func_1064(float fParam0, float fParam1, float fParam2)
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

var func_1065(int iParam0)
{
	uVar0 = &Global_1900383->f_393.f_8[iParam0];
	return uVar0;
}

int func_1066()
{
	return Global_40.f_4283;
}

float func_1067()
{
	iVar0 = func_170();
	switch (iVar0)
	{
		case 79:
			return 50f;
		case 58:
			return 50f;
		case 71:
			return 50f;
		case 43:
			return 50f;
		case 4:
			return 50f;
		case 9:
			return 50f;
		case 22:
			return 120f;
		case 98:
			return 60f;
		case 37:
			return 120f;
	}
	return 25f;
}

bool func_1068(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (bParam7)
	{
		return vdist2(vParam0, vParam3) <= (fParam6 * fParam6);
	}
	return func_1145(vParam0, vParam3) <= (fParam6 * fParam6);
}

bool func_1069(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_666(0);
	*uParam1 = { func_331(iParam0, func_905(0), iParam3, 0) };
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

int func_1070(int iParam0)
{
	if (!func_284(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_1071(int iParam0, int iParam1)
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
			return -1915385310;
			return 1315162488;
			return -361152079;
			return -2041626192;
			return -2077812539;
			return -1371514637;
			return 1730017037;
			return 892816668;
			return -1994943603;
			return 603133554;
			return -30160144;
			return -1248299493;
			return 727393558;
			return 755611221;
			return -170255458;
			return 1011151573;
			return 1122339631;
			return 454815308;
			return 990701735;
			return -246340825;
			return -1410671073;
			return 1547608292;
			return -714132970;
			return 732290690;
			return 971340545;
			return -234132662;
			return -2143057988;
			return -993947465;
			return -486552269;
			return -1156317860;
			return 1229625803;
			return -388596167;
			return -1204639465;
			return -1384685096;
			return -2026728113;
			return -1228057307;
			return 1835126290;
			return 1890833594;
			return -751549960;
			return -1682270750;
			return -1839865333;
			return -1990383629;
			return 1712094016;
			return 1532953697;
			return 1620318083;
			return -307230331;
			return -1034549620;
			return -1293064293;
			return -1540142553;
			return -1769886012;
			return -1983081126;
			return -1106117124;
			return -1873108338;
			return -2097543219;
			return 155413195;
			return -1162387149;
			return 1728382685;
			return -649335959;
			return -1876502240;
			return -2107032155;
			return 1570861011;
			return 1075981185;
			return 960195961;
			return 1150460649;
			return 1689424794;
			return 619103418;
			return 1355448197;
			return 1681762005;
			return 1026887814;
			return 354352628;
			return 1519366642;
			return -82757515;
			return 386306655;
			return 1243962119;
			return 756214903;
			return -718417579;
			return -1445516411;
			return 1232060796;
			return -672392892;
			return 1465341584;
			return -427758369;
			return -735647142;
			return 1535838048;
			return -602272282;
			return 2051264661;
			return 487172188;
			return 282270687;
			return 1607708943;
			return 1686264939;
			return 314786149;
			return 1402841185;
			return 1099170772;
			return 2125676786;
			return -363896735;
			return -468790222;
			return -1779133048;
			return 1732537631;
			return 1755095401;
			return 835771095;
			return 1963317232;
			return 259627919;
			return 1299075397;
			return -1509094230;
			return 61132362;
			return 1549741908;
			return 288484254;
			return -1877032947;
			return -1395676456;
			return 1136146715;
			return 468034421;
			return 1079459546;
			return -140369351;
			return 1822341990;
			return 1219701681;
			return 1601295268;
			return -1692460667;
			return 1471419228;
			return 907446160;
			return -1126482585;
			return 1911050315;
			return -1343525599;
			return 1261891225;
			return 763162704;
			return 1335861197;
			return 526744654;
			return -1177461517;
			return -241638635;
			return 1024262875;
			return 853355463;
			return -337288221;
			return 361381308;
			return -1264898804;
			return -585289073;
			return 1423542233;
			return -948489286;
			return 2063859257;
			return -1652627327;
			return -1959697839;
			return -1532267859;
			return -1410062763;
			return -901428716;
			return -1628873469;
			return 144855571;
			return -617589883;
			return -1306457086;
			return 1713542477;
			return -305542365;
			return 1985390213;
			return -2145069367;
			return -1674390752;
			return -2117214398;
			return 1880805647;
			return -62390436;
			return 1815288415;
			return 196214097;
			return -201958220;
			return 244353594;
			return 302954672;
			return -1870144662;
			return 257892944;
			return -607182722;
			return -13254502;
			return 1400281261;
			return 1601515402;
			return -940704970;
			return -548371721;
			return -1022384613;
			return -357406394;
			return 1077068189;
			return -782241404;
			return 1669853467;
			return 1592019450;
			return 635273153;
			return -1559225678;
			return -266425508;
			return 1117400455;
			return 454332195;
			return -1328061889;
			return 561650932;
			return 256105670;
			return 1976779618;
			return -269095126;
			return 2145617267;
			return 1150213537;
			return 1598825281;
			return -712527121;
			return 1308553072;
			return 852866398;
			return -1794417972;
			return 293062146;
			return 95360094;
			return 807631773;
			return 1603958275;
			return 860052020;
			return -1885979781;
			return 746147970;
			return 666663006;
			return -2096186453;
			return 859409444;
			return -671427187;
			return 100192478;
			return 307812616;
			return 1670843243;
			return 899615863;
			return -298901850;
			return 1379186917;
			return -817206030;
			return -1150323212;
			return -247466821;
			return 427124242;
			return 855418120;
			return -777015093;
			return -722462870;
			return -937454324;
			return -339438116;
			return 2135639035;
			return 1254273765;
			return -792172668;
			return 1905987493;
			return 495693044;
			return -1693422950;
			return -205873076;
			return -2143114654;
			return -1420574021;
			return -1959250381;
			return -1088328663;
			return 513602003;
			return 359221401;
			return 1005272;
			return 1583044470;
			return 348853959;
			return 1045621973;
			return 1084576580;
			return 1651573695;
			return 1463321587;
			return -997505963;
			return -1649851713;
			return -386012962;
			return 1386101789;
			return 1227915917;
			return -218846335;
			return -352578118;
			return 1426626782;
			return -714081520;
			return 74547781;
			return 1271463052;
			return 1983140194;
			return 677262775;
			return -832337898;
			return -319249747;
			return -16955722;
			return -1535425646;
			return -1063641743;
			return -1041133401;
			return 1380479304;
			return 600890828;
			return 733333190;
			return 1843035435;
			return -304127320;
			return 122470371;
			return 0;
			return -1591664384;
			return -673000374;
			return -1150938404;
			return -1756997214;
			return -813824107;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
		}

void func_1072(int iParam0, int iParam1)
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
	func_1146(iParam0, iParam1);
}

bool func_1073(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x22e590f108289a9d(func_666(bParam6), &uParam0, iParam4, &Var0))
	{
		return false;
	}
	if (!func_670(Var0, uParam5, bParam6, 0))
	{
		return false;
	}
	return true;
}

int func_1074(int iParam0)
{
	if (!func_284(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_1070(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return _item_database_get_has_slot_count(iVar0);
}

bool func_1075(int iParam0)
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

void func_1076(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_1147(iParam0, iParam1))
		{
			if (func_1148(iParam0, iParam1))
			{
				if (func_1149(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_1150(iParam0);
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

void func_1077(int iParam0, int iParam1, bool bParam2)
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

bool func_1078(vector3 vParam0)
{
	if (is_valid_interior(get_interior_at_coords(vParam0)))
	{
		if (!is_collision_marked_outside(vParam0))
		{
			return true;
		}
	}
	return false;
}

void func_1079(var uParam0, int iParam1, vector3 vParam2, int iParam5, float fParam6, int iParam7, float fParam8, float fParam9, float fParam10)
{
	if (!func_137(vParam2))
	{
		_0x2064b33f6e6b92d4(*uParam0, vParam2);
	}
	_0x9b6a58fdb0024f12(*uParam0, iParam7);
	switch (iParam5)
	{
		case 27:
			_0xb8e3486d107f4194(*uParam0, 90f);
			_0x827a58ced9d4d5b4(*uParam0, 180f);
			break;
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
			break;
		default:
			_0x827a58ced9d4d5b4(*uParam0, fParam6);
			if (fParam10 != 0f)
			{
				_0xb8e3486d107f4194(*uParam0, fParam10);
			}
			break;
	}
	switch (iParam5)
	{
		case 0:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 11:
		case 14:
		case 15:
		case 16:
		case 18:
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
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
			_0xe9225354fb7437a7(*uParam0, 1);
			break;
	}
	switch (iParam5)
	{
		case 12:
		case 13:
			_0xff8afca532b500d4(*uParam0, 16384);
			break;
	}
	switch (iParam5)
	{
		case 2:
		case 3:
			_0xff8afca532b500d4(*uParam0, 5);
			break;
	}
	switch (iParam5)
	{
		case 35:
		case 43:
			_0x764db5a48390fbad(*uParam0, 1);
			break;
	}
	if (fParam8 == -0.01f)
	{
		switch (iParam5)
		{
			case 12:
			case 13:
				_0x954451ea2d2120fb(*uParam0, 0f);
				_0x0f4f6c4ce471259d(*uParam0, ((80f - 40f) / 2f));
				_0xb79817db31ff72b9(*uParam0, 0f);
				break;
			case 4:
				_0x954451ea2d2120fb(*uParam0, 0.5f);
				_0x0f4f6c4ce471259d(*uParam0, 2.5f);
				break;
			case 5:
				_0x954451ea2d2120fb(*uParam0, 3f);
				_0x0f4f6c4ce471259d(*uParam0, 6f);
				break;
			case 6:
				_0x954451ea2d2120fb(*uParam0, 5f);
				_0x0f4f6c4ce471259d(*uParam0, 10f);
				break;
			case 7:
				_0x954451ea2d2120fb(*uParam0, 2f);
				_0x0f4f6c4ce471259d(*uParam0, 10f);
				break;
			case 8:
				_0x954451ea2d2120fb(*uParam0, 5f);
				_0x0f4f6c4ce471259d(*uParam0, 10f);
				break;
			case 9:
				_0x954451ea2d2120fb(*uParam0, 12f);
				_0x0f4f6c4ce471259d(*uParam0, 18f);
				break;
			case 10:
				_0x4a7d73989f52eb37(*uParam0, 1f);
				_0xb79817db31ff72b9(*uParam0, 65f);
				_0x954451ea2d2120fb(*uParam0, 0f);
				_0x0f4f6c4ce471259d(*uParam0, 100f);
				break;
			case 0:
				_0x954451ea2d2120fb(*uParam0, 0f);
				_0x0f4f6c4ce471259d(*uParam0, 55f);
				break;
			case 11:
				_0x954451ea2d2120fb(*uParam0, 0f);
				_0x0f4f6c4ce471259d(*uParam0, 15f);
				break;
			case 15:
				_0x954451ea2d2120fb(*uParam0, 0f);
				_0x0f4f6c4ce471259d(*uParam0, 40f);
				break;
			case 14:
				_0x954451ea2d2120fb(*uParam0, 50f);
				_0x0f4f6c4ce471259d(*uParam0, 80f);
				break;
			case 16:
				_0x954451ea2d2120fb(*uParam0, 60f);
				_0x0f4f6c4ce471259d(*uParam0, 100f);
				break;
			case 30:
				_0x954451ea2d2120fb(*uParam0, 0f);
				_0x0f4f6c4ce471259d(*uParam0, 150f);
				break;
			case 2:
				_0x4a7d73989f52eb37(*uParam0, 1f);
				_0xb79817db31ff72b9(*uParam0, 25f);
				_0x954451ea2d2120fb(*uParam0, 0f);
				_0x0f4f6c4ce471259d(*uParam0, 150f);
				break;
			case 18:
				_0x954451ea2d2120fb(*uParam0, 1f);
				_0x0f4f6c4ce471259d(*uParam0, 20f);
				break;
			case 20:
				_0x954451ea2d2120fb(*uParam0, 0f);
				_0x0f4f6c4ce471259d(*uParam0, 10f);
				break;
			case 21:
				_0x954451ea2d2120fb(*uParam0, 80f);
				_0x0f4f6c4ce471259d(*uParam0, 100f);
				break;
			case 22:
				_0x954451ea2d2120fb(*uParam0, 70f);
				_0x0f4f6c4ce471259d(*uParam0, 100f);
				break;
			case 23:
			case 24:
			case 25:
				_0x954451ea2d2120fb(*uParam0, 2f);
				_0x0f4f6c4ce471259d(*uParam0, 10f);
				break;
			case 26:
				_0x954451ea2d2120fb(*uParam0, 50f);
				_0x0f4f6c4ce471259d(*uParam0, 80f);
				break;
			case 27:
				_0x954451ea2d2120fb(*uParam0, 3f);
				_0x0f4f6c4ce471259d(*uParam0, 6f);
				break;
			case 28:
				_0x954451ea2d2120fb(*uParam0, 40f);
				_0x0f4f6c4ce471259d(*uParam0, 50f);
				_0xb79817db31ff72b9(*uParam0, 45f);
				break;
			case 29:
				_0x954451ea2d2120fb(*uParam0, 15f);
				_0x0f4f6c4ce471259d(*uParam0, 25f);
				_0xb79817db31ff72b9(*uParam0, 20f);
				break;
			case 31:
				_0x954451ea2d2120fb(*uParam0, 80f);
				_0x0f4f6c4ce471259d(*uParam0, 140f);
				break;
			case 32:
				_0x954451ea2d2120fb(*uParam0, 40f);
				_0x0f4f6c4ce471259d(*uParam0, 125f);
				break;
			case 33:
				_0x954451ea2d2120fb(*uParam0, 0f);
				_0x0f4f6c4ce471259d(*uParam0, 10f);
				break;
			case 34:
				_0x954451ea2d2120fb(*uParam0, 0f);
				_0x0f4f6c4ce471259d(*uParam0, 10f);
				break;
			case 35:
				_0x954451ea2d2120fb(*uParam0, 60f);
				_0x0f4f6c4ce471259d(*uParam0, 80f);
				break;
			case 36:
				_0x2eb977293923c723(*uParam0, 10f);
				_0x954451ea2d2120fb(*uParam0, func_1151(10f, 40f, 5f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_1151(30f, 60f, 5f, iParam1));
				_0x450080ddedb91258(*uParam0, 10f);
				_0xbc3f847ae2c3dc65(*uParam0, 10f);
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			case 37:
				_0x2eb977293923c723(*uParam0, 30f);
				_0x954451ea2d2120fb(*uParam0, func_1151(40f, 80f, 5f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_1151(50f, 90f, 5f, iParam1));
				_0x450080ddedb91258(*uParam0, 10f);
				_0xbc3f847ae2c3dc65(*uParam0, 15f);
				_0x885d19ac2b6fbff4(*uParam0, 1);
				break;
			case 38:
				_0x2eb977293923c723(*uParam0, 30f);
				_0x954451ea2d2120fb(*uParam0, func_1151(30f, 60f, 5f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_1151(50f, 80f, 5f, iParam1));
				_0x450080ddedb91258(*uParam0, 5f);
				_0xbc3f847ae2c3dc65(*uParam0, 15f);
				_0x885d19ac2b6fbff4(*uParam0, 1);
				break;
			case 39:
				_0x2eb977293923c723(*uParam0, 10f);
				_0x954451ea2d2120fb(*uParam0, func_1151(0f, 10f, 1f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_1151(5f, 15f, 1f, iParam1));
				_0x450080ddedb91258(*uParam0, 3f);
				_0xbc3f847ae2c3dc65(*uParam0, 3f);
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			case 40:
				_0x2eb977293923c723(*uParam0, 40f);
				_0x954451ea2d2120fb(*uParam0, func_1151(60f, 120f, 10f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_1151(100f, 130f, 5f, iParam1));
				_0x450080ddedb91258(*uParam0, 20f);
				_0xbc3f847ae2c3dc65(*uParam0, 20f);
				_0x885d19ac2b6fbff4(*uParam0, 1);
				break;
			case 41:
				_0x2eb977293923c723(*uParam0, 10f);
				_0x954451ea2d2120fb(*uParam0, func_1151(10f, 35f, 5f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_1151(25f, 50f, 5f, iParam1));
				_0x450080ddedb91258(*uParam0, 2f);
				_0xbc3f847ae2c3dc65(*uParam0, 20f);
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			case 42:
			case 44:
			case 45:
				_0x2eb977293923c723(*uParam0, 40f);
				_0x954451ea2d2120fb(*uParam0, func_1151(50f, 80f, 10f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_1151(75f, 95f, 5f, iParam1));
				_0x450080ddedb91258(*uParam0, 15f);
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			case 43:
				_0x2eb977293923c723(*uParam0, func_1151(95f, 90f, 80f, iParam1));
				_0x954451ea2d2120fb(*uParam0, func_1151(95f, 90f, 80f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_1151(125f, 115f, 100f, iParam1));
				_0x450080ddedb91258(*uParam0, 5f);
				_0xbc3f847ae2c3dc65(*uParam0, 10f);
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			default:
				if (iParam1 == 0)
				{
					_0x954451ea2d2120fb(*uParam0, 1f);
					_0x0f4f6c4ce471259d(*uParam0, 5f);
				}
				else if (iParam1 == 1)
				{
					_0x954451ea2d2120fb(*uParam0, 5f);
					_0x0f4f6c4ce471259d(*uParam0, 15f);
				}
				else if (iParam1 == 2)
				{
					_0x954451ea2d2120fb(*uParam0, 15f);
					_0x0f4f6c4ce471259d(*uParam0, 35f);
				}
				else
				{
					iParam1 = 3;
					_0x4a7d73989f52eb37(*uParam0, 1f);
					_0xb79817db31ff72b9(*uParam0, 65f);
					_0x954451ea2d2120fb(*uParam0, 35f);
					if (iParam5 != 19)
					{
						_0x0f4f6c4ce471259d(*uParam0, 160f);
					}
					else
					{
						_0x0f4f6c4ce471259d(*uParam0, 65f);
					}
				}
				break;
		}
	}
	else
	{
		_0x954451ea2d2120fb(*uParam0, fParam8);
		_0x0f4f6c4ce471259d(*uParam0, fParam9);
	}
}

void func_1080(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			_0x5d9b0baaf04cf65b(*uParam0, 64, 1, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 1, 0);
			_0x19bc99c678fba139(*uParam0, 80, 0);
			_0x19bc99c678fba139(*uParam0, 81, 0);
			break;
		case 1:
		case 19:
		case 20:
		case 45:
			_0x5d9b0baaf04cf65b(*uParam0, 31, 1, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 1, 0);
			_0x19bc99c678fba139(*uParam0, 68, 0);
			break;
		case 2:
			_0x5d9b0baaf04cf65b(*uParam0, 31, 4, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 4, 0);
			_0x19bc99c678fba139(*uParam0, 73, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 50, 3, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 47, 3, 0);
			_0x19bc99c678fba139(*uParam0, 81, 0);
			_0x19bc99c678fba139(*uParam0, 54, 1);
			break;
		case 3:
			_0x5d9b0baaf04cf65b(*uParam0, 34, 2, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 2, 0);
			_0x19bc99c678fba139(*uParam0, 73, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 50, 2, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 47, 2, 0);
			_0x19bc99c678fba139(*uParam0, 81, 0);
			_0x19bc99c678fba139(*uParam0, 54, 1);
			break;
		case 4:
		case 5:
		case 6:
			_0x885d19ac2b6fbff4(*uParam0, 1);
			_0x19bc99c678fba139(*uParam0, 21, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 17, 1, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 1, 0);
			break;
		case 7:
			_0x885d19ac2b6fbff4(*uParam0, 1);
			_0x19bc99c678fba139(*uParam0, 21, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 17, 1, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 1, 0);
			break;
		case 8:
			_0x19bc99c678fba139(*uParam0, 21, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 17, 1, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 1, 0);
			break;
		case 9:
			_0x19bc99c678fba139(*uParam0, 21, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 17, 1, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 1, 0);
			break;
		case 10:
			_0x5d9b0baaf04cf65b(*uParam0, 34, 3, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 3, 0);
			_0x19bc99c678fba139(*uParam0, 80, 0);
			_0x19bc99c678fba139(*uParam0, 81, 0);
			break;
		case 12:
		case 13:
			_0x5d9b0baaf04cf65b(*uParam0, 23, 4, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 3, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 50, 3, 0);
			_0x19bc99c678fba139(*uParam0, 75, 1);
			_0xbc3f847ae2c3dc65(*uParam0, 25f);
			_0x450080ddedb91258(*uParam0, 25f);
			break;
		case 11:
		case 30:
			_0x19bc99c678fba139(*uParam0, 77, 0);
			_0x19bc99c678fba139(*uParam0, 80, 0);
			break;
		case 15:
			_0x19bc99c678fba139(*uParam0, 54, 0);
			break;
		case 14:
			_0x19bc99c678fba139(*uParam0, 54, 0);
			_0x19bc99c678fba139(*uParam0, 68, 0);
			break;
		case 46:
			_0x885d19ac2b6fbff4(*uParam0, 1);
			_0x19bc99c678fba139(*uParam0, 21, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 9, 3, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 50, 3, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 3, 0);
			break;
		case 16:
			_0x19bc99c678fba139(*uParam0, 54, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 50, 4, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 23, 4, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 5, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 47, 4, 0);
			_0x19bc99c678fba139(*uParam0, 80, 0);
			break;
		case 17:
			_0x2eb977293923c723(*uParam0, 40f);
			_0x764db5a48390fbad(*uParam0, 1);
			_0x5d9b0baaf04cf65b(*uParam0, 50, 2, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 47, 2, 0);
			_0x19bc99c678fba139(*uParam0, 68, 0);
			break;
		case 18:
			_0x5d9b0baaf04cf65b(*uParam0, 50, 2, 0);
			_0x19bc99c678fba139(*uParam0, 80, 0);
			_0x19bc99c678fba139(*uParam0, 81, 0);
			break;
		case 21:
			_0x5d9b0baaf04cf65b(*uParam0, 31, 2, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 3, 0);
			_0x19bc99c678fba139(*uParam0, 68, 0);
			_0x19bc99c678fba139(*uParam0, 54, 0);
			break;
		case 22:
			_0x5d9b0baaf04cf65b(*uParam0, 31, 2, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 3, 0);
			_0x19bc99c678fba139(*uParam0, 68, 0);
			_0x19bc99c678fba139(*uParam0, 80, 0);
			break;
		case 23:
			_0x5d9b0baaf04cf65b(*uParam0, 50, 4, 1);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 4, 0);
			_0x19bc99c678fba139(*uParam0, 80, 0);
			break;
		case 24:
			_0x5d9b0baaf04cf65b(*uParam0, 50, 3, 1);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 3, 0);
			_0x19bc99c678fba139(*uParam0, 80, 0);
			break;
		case 25:
			_0x5d9b0baaf04cf65b(*uParam0, 50, 2, 1);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 2, 0);
			_0x19bc99c678fba139(*uParam0, 80, 0);
			break;
		case 26:
			_0x5d9b0baaf04cf65b(*uParam0, 31, 3, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 4, 0);
			_0x19bc99c678fba139(*uParam0, 80, 0);
			_0x19bc99c678fba139(*uParam0, 81, 0);
			break;
		case 27:
			_0x5d9b0baaf04cf65b(*uParam0, 31, 1, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 1, 0);
			_0x19bc99c678fba139(*uParam0, 68, 0);
			_0x19bc99c678fba139(*uParam0, 74, 0);
			break;
		case 28:
			_0x5d9b0baaf04cf65b(*uParam0, 17, 2, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 2, 0);
			_0x19bc99c678fba139(*uParam0, 77, 1);
			_0x19bc99c678fba139(*uParam0, 75, 1);
			break;
		case 29:
			_0x5d9b0baaf04cf65b(*uParam0, 23, 1, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 2, 1);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 1, 0);
			_0x19bc99c678fba139(*uParam0, 12, 0);
			_0x19bc99c678fba139(*uParam0, 68, 0);
			break;
		case 31:
			_0x5d9b0baaf04cf65b(*uParam0, 44, 3, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 64, 1, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 47, 3, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 50, 3, 0);
			break;
		case 32:
			_0x5d9b0baaf04cf65b(*uParam0, 44, 3, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 23, 3, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 50, 3, 0);
			break;
		case 33:
			_0x5d9b0baaf04cf65b(*uParam0, 44, 2, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 17, 3, 0);
			break;
		case 34:
			_0x5d9b0baaf04cf65b(*uParam0, 47, 2, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 47, 4, 1);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 1, 0);
			break;
		case 35:
			_0x5d9b0baaf04cf65b(*uParam0, 23, 2, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 3, 0);
			_0x19bc99c678fba139(*uParam0, 68, 0);
			_0x19bc99c678fba139(*uParam0, 54, 0);
			break;
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
			_0x19bc99c678fba139(*uParam0, 80, 0);
			_0x19bc99c678fba139(*uParam0, 81, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 23, 1, 0);
			break;
		case 41:
			_0x19bc99c678fba139(*uParam0, 80, 0);
			_0x19bc99c678fba139(*uParam0, 81, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 47, 4, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 17, 1, 0);
			break;
		case 42:
			_0x19bc99c678fba139(*uParam0, 2, 1);
		case 44:
			_0x5d9b0baaf04cf65b(*uParam0, 44, 2, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 50, 3, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 23, 4, 0);
			_0x19bc99c678fba139(*uParam0, 75, 1);
			break;
		case 43:
			_0x5d9b0baaf04cf65b(*uParam0, 50, 2, 1);
			_0x19bc99c678fba139(*uParam0, 5, 0);
			break;
		case 47:
			_0x5d9b0baaf04cf65b(*uParam0, 28, 4, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 1, 0);
			_0x19bc99c678fba139(*uParam0, 68, 0);
			break;
	}
}

Vector3 func_1081(vector3 vParam0)
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

bool func_1082(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

Vector3 func_1083()
{
	if (func_95(70))
	{
		return -1634.252f, -1358.577f, 83.9077f;
	}
	if (func_95(73))
	{
		return -1665.419f, -1346.258f, 84.11175f;
	}
	return -1641.1f, -1359.979f, 83.4932f;
}

int func_1084(int iParam0)
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

void func_1085(int iParam0)
{
	Global_40.f_1095.f_3135 = iParam0;
}

bool func_1086(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_666(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_1087(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

struct<4> func_1088(bool bParam0)
{
	iVar0 = func_666(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_331(271701509, func_330(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_331(271701509, func_330(bParam0), 12999093, 0);
}

bool func_1089(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_1070(iParam0);
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

void func_1090(int iParam0, float fParam1, int iParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (is_ped_injured(iParam0))
	{
		return;
	}
	if (is_ped_in_writhe(iParam0))
	{
		return;
	}
	_0x06d26a96ca1bca75(iParam0, 3, fParam1, iParam2);
}

struct<4> func_1091(int iParam0)
{
	StringCopy(&cVar0, "TOAST_RPG_LEVEL_", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_", 32);
	StringIntConCat(&cVar0, 0, 32);
	return cVar0;
}

char* func_1092(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

bool func_1093(int iParam0)
{
	switch (iParam0)
	{
		case -801397594:
		case 747460826:
			return true;
	}
	return false;
}

int func_1094(int iParam0, int iParam1)
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

void func_1095()
{
	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		iVar0++;
	}
}

int func_1096(var uParam0)
{
	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_431(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_431(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_431(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_431(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_431(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_431(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

void func_1097(int iParam0)
{
	func_1104(iParam0, 8, 6);
}

void func_1098(int iParam0)
{
	func_1152(&(Global_1946804->f_2589), iParam0);
}

void func_1099(int iParam0, int iParam1)
{
	func_1153(&(Global_1946804->f_2589), iParam0, iParam1);
}

void func_1100(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_1101(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_1070(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1154(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1099(iVar1, iVar3);
		}
	}
	if (func_813(-1586649372) && func_1154(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1099(iVar1, iVar3);
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
						func_1099(iVar1, iVar3);
					}
				}
			}
			func_1155(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1155(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_1099(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_1155(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_1099(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_1099(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_1155(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_1155(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_1099(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_1155(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_1099(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1099(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_1070(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1099(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_1156(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_1070(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1099(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_431(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1099(iVar1, iVar3);
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
						func_1099(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_1156(&(Global_1946804->f_1497.f_1[iVar1])) || func_431(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1099(iVar1, iVar3);
					}
				}
			}
			switch (func_1070(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_1070(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1099(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_1070(&(uParam0->f_1[iVar1])) || func_431(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1099(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_1102(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = func_1157(0);
	if (iParam2 != 0 && func_1158(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_1159(iParam0, func_1094(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_1103(var uParam0, bool bParam1, int iParam2)
{
	bVar6 = func_2() != -1;
	iVar7 = func_1157(0);
	if (func_1011(32768))
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
			iVar5 = func_1094(iVar0, 1);
			if (func_1160(iVar5, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
			{
			}
			else if (func_1160(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
			{
			}
			else
			{
				iVar4 = func_1161(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_1162(uParam0);
				if (iVar3 > 0)
				{
					if (!func_1011(524288))
					{
						func_1106(524288);
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
							iVar5 = func_1094(iVar0, 1);
							if (func_1160(iVar5, 8))
							{
							}
							else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
							{
							}
							else if (func_1160(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
							{
							}
							else
							{
								iVar4 = func_1161(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0] = &Global_1946804->f_57[iVar0];
									uParam0->f_1[iVar0]->f_1 = 0;
									if (bParam1)
									{
										func_1099(iVar0, iParam2);
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
					func_1109(524288);
				}
			}
		}
	}
}

void func_1104(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_1006(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_1006(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_1006(iParam0, 1)])->f_10 && iParam1));
}

void func_1105(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1163(&(uParam0->f_2[iVar0]), bParam1, bParam2);
		iVar0++;
	}
	if (func_2() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_1164(2, Global_26796.f_776)) || Global_1946804->f_1497 != func_1165(0))
		{
			if (Global_40.f_7157[Global_40.f_7729] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729] = (&Global_40.f_7157[Global_40.f_7729] - Global_40.f_7157[Global_40.f_7729] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729] |= 4096;
				Global_1946804->f_1497 = func_1165(Global_40.f_7729);
				Global_1946804->f_1378 = func_1165(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_1166(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_1167(0, 1);
	}
}

void func_1106(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_1107(struct<4> Param0)
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
			if (func_1168(Param0))
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
			func_1169(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_1106(8);
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
			if (func_1168(Param0))
			{
				return;
			}
			func_1169(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_1106(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_1015(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

void func_1108(var uParam0)
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

void func_1109(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

bool func_1110(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_1111(struct<4> Param0)
{
	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_1168(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1] == Param0 && Global_1946804->f_769[iVar1]->f_2 == Param0.f_2) && Global_1946804->f_769[iVar1]->f_3 == Param0.f_3) && Global_1946804->f_769[iVar1]->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1] == 34 && func_1168(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_1169(Param0);
	*Global_1946804->f_769[Global_1946804->f_854] = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_1106(8);
}

void func_1112(int iParam0, var uParam1)
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
		if (func_1087(iVar31))
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

void func_1113(bool bParam0)
{
	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_284(iVar1, 0))
		{
			func_1170(iVar1, 0, bParam0);
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

void func_1114(int iParam0)
{
	Global_1946804->f_2657.f_26.f_2 = 3;
	Global_1946804->f_2657.f_26.f_1 = 3;
	Global_1946804->f_2657.f_26 = 3;
	if (func_2() == -1)
	{
		func_1171(352481484);
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
		if (func_1070(iVar2) != -999503751)
		{
			func_1172(&(Global_1946804->f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_1173(iVar2, 0))
		{
			func_1174(iVar2, &Global_1946804->f_1497.f_1[iVar1] == &Global_1946804->f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_1115(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_1175(iParam0))
	{
		return;
	}
	iVar0 = func_1070(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_1176(iParam0, &(Global_1946804->f_2657.f_21), Global_1946804->f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_1176(iParam0, &(Global_1946804->f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_1176(iParam0, &(Global_1946804->f_2657.f_20), Global_1946804->f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_1176(iParam0, &(Global_1946804->f_2657.f_22), Global_1946804->f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_1176(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_1176(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_1177(0))
	{
		func_1178(iParam0, 1);
		if (func_1116() == 1160113249)
		{
			func_1178(func_1177(-2125499975), 0);
		}
		else
		{
			func_1178(func_1177(1160113249), 0);
		}
	}
	func_1179();
	if (func_1180(iVar0))
	{
		_0x766315a564594401(func_666(0), iParam0, 0);
	}
	func_1174(iParam0, bParam3);
	if (bParam2)
	{
		func_1167(0, 0);
	}
}

int func_1116()
{
	return Global_1946804->f_1;
}

void func_1117(int iParam0, var uParam1)
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
				if (func_1181(uParam1[iVar0]))
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

void func_1118(bool bParam0)
{
	func_1182(bParam0);
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

bool func_1119(int iParam0)
{
	iVar0 = func_440(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_1120()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_733(func_1183(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1121()
{
	return func_1184(Global_40.f_12019);
}

int func_1122()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_1183(iVar1);
		if (func_733(iVar2, 1, 0) || func_1130(func_1129(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1123()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1185(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1124()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1186(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1125()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_799(_0x126cbebba46693cf(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1126()
{
	return _0x5461c821d00fe15a(2103522376, 0);
}

int func_1127()
{
	return _0x3a65f4844913a047(2103522376, 0);
}

int func_1128(int iParam0)
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

int func_1129(int iParam0)
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

bool func_1130(int iParam0)
{
	return (Global_40.f_12019 && iParam0) != 0;
}

char* func_1131(int iParam0)
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

char* func_1132(int iParam0)
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

int func_1133(int iParam0)
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

int func_1134(int iParam0)
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

char* func_1135(int iParam0)
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

char* func_1136(int iParam0)
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

char* func_1137(int iParam0)
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

bool func_1138(int iParam0)
{
	if (func_1187(iParam0) && func_733(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_1188(iParam0) && func_1189(iParam0))
	{
		return true;
	}
	return false;
}

char* func_1139(int iParam0)
{
	if (!func_284(iParam0, 0))
	{
		return "";
	}
	return _get_label_text_by_hash(func_946(iParam0));
}

var func_1140(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

int func_1141(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

bool func_1142(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam1))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(iParam0, &uParam1, uParam5, !bParam6))
	{
		return false;
	}
	return true;
}

char* func_1143(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			sVar0 = "HealthCoreValue";
			break;
		case 1:
			sVar0 = "StaminaCoreValue";
			break;
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

char* func_1144(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			sVar0 = "isLowHealthCoreActive";
			break;
		case 1:
			sVar0 = "isLowStaminaCoreActive";
			break;
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

float func_1145(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

void func_1146(int iParam0, int iParam1)
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

bool func_1147(int iParam0, int iParam1)
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

bool func_1148(int iParam0, int iParam1)
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

bool func_1149(int iParam0, int iParam1)
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
	if (!func_1147(iParam0, iVar0))
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

void func_1150(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

float func_1151(float fParam0, float fParam1, float fParam2, int iParam3)
{
	fVar0 = fParam0;
	fVar0 = (fVar0 + (fParam2 * IntToFloat(iParam3)));
	if (fVar0 > fParam1)
	{
		fVar0 = fParam1;
	}
	return fVar0;
}

void func_1152(var uParam0, int iParam1)
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
			if ((func_1190(uParam0->f_2[iVar0], 2) || &uParam0->f_2[iVar0] == iParam1) || &uParam0->f_2[iVar0] == 39)
			{
				*uParam0->f_2[iVar0] = { Var2 };
			}
			else
			{
				if (func_1190(uParam0->f_2[iVar0], 1))
				{
					func_1191(uParam0->f_2[iVar0], 2, 6);
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

void func_1153(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_1192(uParam0, 1))
	{
		func_1193(uParam0, 1);
	}
	uParam0->f_2[*uParam0]->f_1 = iParam2;
	uParam0->f_2[*uParam0] = iParam1;
	*uParam0++;
}

bool func_1154(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

void func_1155(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_1099(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_1099(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2]->f_1 == -1333118809 || uParam0->f_1[iVar2]->f_1 == -1158926300)
	{
		uParam0->f_1[iVar2]->f_1 = 1155669136;
		if (bParam3)
		{
			func_1099(iVar2, iVar0);
		}
	}
}

bool func_1156(int iParam0)
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

int func_1157(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_1116();
	}
	iVar0 = 0;
	if (iParam0 == 24043185)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_1158(int iParam0, int iParam1, int iParam2, bool bParam3)
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

bool func_1159(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

bool func_1160(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_1006(iParam0, 1)])->f_10 && iParam1) != 0;
}

int func_1161(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam0 == &Global_1946804->f_57[func_1006(iParam1, 1)])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_1011(524288))
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

int func_1162(var uParam0)
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

void func_1163(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*Global_1946804->f_1497.f_1[iParam0] = { *Global_1946804->f_1378.f_1[iParam0] };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_2() == -1)
	{
		func_1194(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_26796.f_776);
	}
	else
	{
		func_1195(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

bool func_1164(int iParam0, int iParam1)
{
	if (func_2() == -1)
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

int func_1165(int iParam0)
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

void func_1166(int iParam0, bool bParam1, int iParam2)
{
	func_1196(&(Global_1946804->f_1378), iParam0);
	func_1197(2, iParam0, 6);
	if (bParam1)
	{
		func_1167(0, 1);
	}
}

void func_1167(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1198(0);
	}
	if (bParam0)
	{
		func_1106(8);
		func_1106(512);
	}
	else
	{
		func_1106(8);
		func_1106(16);
	}
}

bool func_1168(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_1169(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

void func_1170(int iParam0, bool bParam1, bool bParam2)
{
	switch (func_1070(iParam0))
	{
		case -2061583405:
			bVar0 = func_1199(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1199(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1199(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1199(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1199(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1199(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1179();
	}
	if (bParam1)
	{
		func_1167(0, 0);
	}
}

void func_1171(int iParam0)
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
	Var2 = { func_949(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (func_951(&Var2, &iVar0, &iVar1, 0))
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
		func_953(iVar0);
	}
}

void func_1172(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_1200(iParam2, *uParam0);
	func_1201(uParam0->f_1[*uParam0], iParam1, -1, 1, 0);
	*uParam0++;
}

bool func_1173(int iParam0, int iParam1)
{
	Var0 = { func_954(iParam0, 0, 0) };
	Var5 = { func_331(iParam0, Var0, Var0.f_4, 0) };
	if (func_332(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return false;
	}
	_0x9a113c660aea3832(func_666(0), &Var5, iParam1);
	return true;
}

void func_1174(int iParam0, bool bParam1)
{
	Var0 = { func_954(iParam0, 0, 0) };
	Var5 = { func_331(iParam0, Var0, Var0.f_4, 0) };
	if (func_332(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	_0x65a5f70f4a292ebe(func_666(0), &Var5, bParam1);
}

bool func_1175(int iParam0)
{
	if (func_2() == -1)
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

int func_1176(int iParam0, var uParam1, int iParam2, bool bParam3)
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
	if (func_1202(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_1173(iParam0, 0))
	{
		return 0;
	}
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = iVar1;
	if (func_1070(iParam0) != -999503751)
	{
		func_1172(&(Global_1946804->f_2657.f_26.f_26), iParam0, Global_1946804->f_2657.f_19);
	}
	Global_1946804->f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_1177(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_1116();
	}
	if (iParam0 == 1160113249)
	{
		return -763730846;
	}
	return -1535516064;
}

int func_1178(int iParam0, int iParam1)
{
	Var0 = { func_954(iParam0, 0, 0) };
	Var5 = { func_331(iParam0, Var0, Var0.f_4, 0) };
	if (func_332(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	_0x0349404a22736740(iParam1, func_666(0), &Var5);
	return 1;
}

void func_1179()
{
	if (func_2() == -1)
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

bool func_1180(int iParam0)
{
	return func_1204(func_1203(iParam0));
}

bool func_1181(int iParam0)
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

void func_1182(bool bParam0)
{
	_0xb6fd96420c0126a1(-1056478928, bParam0);
}

int func_1183(int iParam0)
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

int func_1184(int iParam0)
{
	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

bool func_1185(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

bool func_1186(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_1187(int iParam0)
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

int func_1188(int iParam0)
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

int func_1189(int iParam0)
{
	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_1205(&iVar0, 0, iVar95, &Var1) && !func_1205(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (is_model_a_ped(Var1))
		{
			func_1206(iVar0, &Var1);
			if (func_284(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

bool func_1190(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1191(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_1192(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1193(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_1194(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_1195(var uParam0, int iParam1, int iParam2)
{
	*Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_1196(var uParam0, int iParam1)
{
	if (func_2() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1]->f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_1194(uParam0->f_1[iVar0], iVar0, iParam1);
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
		func_1195(uParam0->f_1[iVar0], iVar0, iParam1);
		iVar0++;
	}
}

void func_1197(int iParam0, int iParam1, int iParam2)
{
	if (func_2() == -1)
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

void func_1198(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

int func_1199(int iParam0, var uParam1)
{
	iVar1 = iParam0;
	if (!func_1202(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_1070(iParam0) != -999503751)
		{
			func_1207(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_1070(iParam0) != -999503751)
	{
		func_1207(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1173(iParam0, 1);
	return 1;
}

void func_1200(int iParam0, var uParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_1201(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (_0x93ffd92f05ec32fd(uParam0->f_3.f_1))
	{
		func_1208(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_1006(func_1209(iParam1), 1);
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
		func_1210(uParam0);
	}
}

bool func_1202(int iParam0, var uParam1)
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

int func_1203(int iParam0)
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

bool func_1204(int iParam0)
{
	return (Global_1946804->f_2657.f_26.f_6 && iParam0) != 0;
}

bool func_1205(int iParam0, int iParam1, int iParam2, var uParam3)
{
	if (func_71(iParam1) && !func_380(iParam1))
	{
		iVar0 = func_88(iParam1);
	}
	else
	{
		return false;
	}
	func_272(uParam3);
	iVar5 = func_273(iParam2);
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

void func_1206(int iParam0, int iParam1)
{
	iVar0 = get_ped_index_from_entity_index(iParam0);
	if (does_entity_exist(iVar0))
	{
		func_276(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_277(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

void func_1207(var uParam0, int iParam1, int iParam2)
{
	iVar1 = func_1211(iParam1);
	func_1212(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_1213(&(uParam0->f_26), iVar1);
		if (func_1214(uParam0->f_26, &iVar0))
		{
			func_1215(iVar0, iVar1);
		}
	}
}

void func_1208(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_1216(&(uParam0->f_3));
}

int func_1209(int iParam0)
{
	Var0 = { func_954(iParam0, 1, 0) };
	return func_1007(Var0.f_4);
}

void func_1210(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_1217(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

var func_1211(int iParam0)
{
	return &(Global_1946804->f_2657.f_26.f_7[iParam0]);
}

void func_1212(int iParam0, int iParam1)
{
	uVar0 = &Global_1946804->f_2657.f_26.f_7[iParam0];
	Global_1946804->f_2657.f_26.f_7[iParam0] = &Global_1946804->f_2657.f_26.f_7[iParam1];
	Global_1946804->f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_1213(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - 1);
	func_1208(uParam0->f_1[iParam1]);
	*uParam0->f_1[iParam1] = { *uParam0->f_1[*uParam0] };
}

bool func_1214(int iParam0, var uParam1)
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

void func_1215(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_1216(var uParam0)
{
	if (*uParam0 && _0x93ffd92f05ec32fd(uParam0->f_1))
	{
		_0x13e7320c762f0477(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_1217(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_1218(func_1116());
	if (*uParam0)
	{
		func_1216(uParam0);
	}
	uParam0->f_1 = _0xf6d9e1f3560cbf8e(iVar0, iParam1, 0, func_2() != -1, iParam2);
	*uParam0 = 1;
}

int func_1218(int iParam0)
{
	if (func_2() == -1)
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

