void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
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
		if (func_2() != -1)
		{
			if (func_5(1, 1))
			{
				bVar0 = true;
			}
			else if (_0x9e4ef615e307fbbe())
			{
				bVar0 = true;
			}
			else
			{
				if (func_6())
				{
					func_7();
					func_8();
					func_9();
					func_10();
				}
				wait(0);
			}
			func_1();
		}
	}
}

void func_1()
{
	func_11();
	terminate_this_thread();
}

int func_2()
{
	return Global_1572887->f_13;
}

bool func_3(int iParam0)
{
	return (Global_18 && iParam0) != 0;
}

void func_4()
{
	func_12();
	func_13();
	func_14(0);
	func_15();
}

bool func_5(bool bParam0, bool bParam1)
{
	if (Global_1572887->f_12)
	{
		return false;
	}
	if (!network_is_game_in_progress())
	{
		if (bParam1 && _0xf2cbc969c4f090c7())
		{
		}
		else if (bParam1 && network_is_session_active())
		{
		}
		else if (bParam1 && &Global_1572887 < 39)
		{
		}
		else
		{
			return true;
		}
	}
	if (!network_is_signed_online())
	{
		return true;
	}
	if (_0x9e4ef615e307fbbe())
	{
		switch (_0x54ae4fdeefeab77e())
		{
			case 0:
				return true;
			case 1:
				return true;
			case 2:
				if (!bParam0)
				{
					return true;
				}
				break;
			case 4:
				return true;
			case 3:
				return true;
			default:
				return true;
		}
	}
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		if (get_event_at_index(1, iVar0) == 1976253964)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_6()
{
	if (!func_3(256))
	{
		return false;
	}
	if (!does_entity_exist(Global_34))
	{
		return false;
	}
	if (Global_1940258->f_6)
	{
		if (func_2() == -1)
		{
			return false;
		}
	}
	if (Global_1572887->f_9)
	{
		return false;
	}
	if (func_16(68))
	{
		return false;
	}
	return true;
}

void func_7()
{
	func_17();
	func_18();
	func_19(&Var0);
	func_20(0, &Var7);
	func_20(1, &Var19);
	func_21(Var7);
	func_21(Var19);
	func_22(Var7);
	func_22(Var19);
	func_23(Var0, Var7, Var19);
	func_24(0, &Var7);
	func_24(1, &Var19);
	func_25(0, &Var7);
	func_25(1, &Var19);
	func_26();
	func_27(Var0);
	func_28(Var0);
	func_29(Var0);
	func_30();
}

void func_8()
{
	if (is_ped_injured(Global_34))
	{
		return;
	}
	if (Global_13)
	{
		return;
	}
	if (func_31())
	{
		return;
	}
	switch (Global_1903136->f_303)
	{
		case 0:
			func_32(0);
			break;
		case 1:
			func_32(1);
			break;
		case 2:
			func_32(6);
			break;
	}
	iVar0 = Global_1903136->f_303;
	iVar0++;
	if (iVar0 >= 3)
	{
		iVar0 = 0;
	}
	Global_1903136->f_303 = iVar0;
}

void func_9()
{
	switch (Global_1903136->f_408)
	{
		case 0:
		case 6:
			func_19(&Var0);
			func_20(0, &Var7);
			func_20(1, &Var19);
			func_20(6, &Var31);
			func_20(5, &Var43);
			func_33(Var0, Var7, 0);
			func_33(Var0, Var19, 1);
			func_33(Var0, Var31, 6);
			func_33(Var0, Var43, 5);
			func_34(Var0);
			func_35(Var0, Var7);
			func_36(Var0, Var7, 0);
			func_36(Var0, Var19, 1);
			func_36(Var0, Var31, 6);
			func_37(0);
			func_37(1);
			func_37(6);
			func_38(Var0, Var7, 0);
			func_38(Var0, Var19, 1);
			func_39(Var7, Var0, 0);
			func_39(Var19, Var0, 1);
			func_40(0);
			func_40(1);
			func_41(Var0, Var7, 0);
			func_41(Var0, Var19, 1);
			func_42(Var0, Var7, 0);
			func_42(Var0, Var19, 1);
			func_43(Var0);
			func_44(Var0);
			func_45();
			func_46();
			func_47(Var0);
			func_48();
			func_49();
			func_50();
			func_51();
			func_52();
			func_53(Var0, Var7, 0);
			func_53(Var0, Var19, 1);
			func_54(Var0, Var7, 0);
			func_54(Var0, Var19, 1);
			func_54(Var0, Var31, 6);
			func_55(Var0, Var7, Var19);
			break;
		case 1:
			func_56();
			break;
		case 2:
			func_57(0, 0);
			func_58(0, 0);
			break;
		case 3:
			func_57(1, 0);
			func_58(1, 0);
			break;
		case 9:
			func_59();
			break;
		case 11:
			func_60();
			break;
		case 4:
			func_61(0);
			break;
		case 5:
			func_61(1);
			break;
		case 7:
			func_61(5);
			break;
		case 8:
			func_62();
			break;
	}
	iVar55 = Global_1903136->f_408;
	iVar55++;
	if (iVar55 >= 12)
	{
		iVar55 = 0;
	}
	Global_1903136->f_408 = iVar55;
}

void func_10()
{
	if (is_ped_injured(Global_34))
	{
		return;
	}
	switch (Global_1903136->f_409)
	{
		case 0:
			func_63();
			break;
		case 1:
			func_64();
			break;
		case 2:
			func_65();
			break;
	}
	iVar0 = Global_1903136->f_409;
	iVar0++;
	if (iVar0 >= 3)
	{
		iVar0 = 0;
	}
	Global_1903136->f_409 = iVar0;
}

void func_11()
{
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (func_66(iVar0))
		{
			if (!func_67(iVar0))
			{
				func_68(iVar0);
			}
		}
		iVar0++;
	}
}

void func_12()
{
	_0xed9582b3da8f02b4(1);
	func_17();
}

int func_13()
{
	iVar0 = func_69();
	request_model(iVar0, false);
	if (!has_model_loaded(iVar0))
	{
		return 0;
	}
	return 1;
}

void func_14(int iParam0)
{
	if (Global_1903136->f_364 != iParam0)
	{
	}
	Global_1903136->f_364 = iParam0;
}

int func_15()
{
	if (!func_71(-1898635967, func_70(), 1))
	{
		return 0;
	}
	if (func_72() || func_73())
	{
		if (!func_71(146323340, func_70(), 0))
		{
			return 0;
		}
	}
	return 1;
}

bool func_16(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

void func_17()
{
	iVar0 = 1;
	if (func_74(0) == 1)
	{
	}
	if (func_74(1) == 1)
	{
		iVar0++;
	}
	if (func_74(5) == 1)
	{
		iVar0++;
	}
	if (func_74(6) == 1)
	{
		iVar0++;
	}
	iVar0 = (iVar0 + func_75(0));
	iVar0 = (iVar0 + func_75(1));
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

void func_18()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_76(iVar0);
		iVar0++;
	}
}

void func_19(var uParam0)
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
	if (does_entity_exist(Global_34))
	{
		uParam0->f_2 = 1;
		if (is_ped_injured(Global_34))
		{
			uParam0->f_4 = 1;
		}
		if (!is_entity_dead(Global_34))
		{
			uParam0->f_3 = 1;
		}
		if (is_ped_on_mount(Global_34))
		{
			uParam0->f_5 = 1;
			uParam0->f_6 = get_mount(Global_34);
		}
	}
}

void func_20(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
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
	if (func_66(iParam0))
	{
		iParam1->f_1 = 1;
		*iParam1 = func_78(iParam0);
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
			if (iParam1->f_9 == Global_34)
			{
				iParam1->f_10 = 1;
			}
		}
		fVar0 = func_79(iParam0);
		if (func_80(iParam1->f_5, Global_35) <= fVar0)
		{
			iParam1->f_11 = 1;
		}
	}
}

void func_21(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11)
{
	if (Param0.f_1)
	{
		if (!_0x88ad6cc10d8d35b2(Param0))
		{
			set_entity_as_mission_entity(Param0, true, true);
		}
	}
}

void func_22(vector3 vParam0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11)
{
	if (vParam0.z)
	{
		if (func_81(64))
		{
			set_ped_reset_flag(vParam0.x, 6, true);
		}
	}
}

void func_23(struct<7> Param0, struct<12> Param7, struct<12> Param19)
{
	if (func_82())
	{
		enable_control_action(0, 613911080, true);
		enable_control_action(0, -403992187, true);
		func_83(Param0, Param7, Param19);
	}
	else
	{
		disable_control_action(0, 613911080, false);
		disable_control_action(0, -403992187, false);
		func_14(1);
	}
	func_84();
}

void func_24(int iParam0, var uParam1)
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
	iVar1 = 388;
	bVar2 = get_ped_config_flag(*uParam1, iVar1, false);
	if (bVar0 != bVar2)
	{
		set_ped_config_flag(*uParam1, iVar1, bVar0);
	}
	if (func_85())
	{
		return;
	}
	bVar3 = func_86(iParam0);
	if (uParam1->f_4 != bVar3)
	{
		func_87(iParam0, uParam1->f_4);
		func_88(iParam0);
	}
	if (!uParam1->f_4)
	{
		return;
	}
	if (func_89(iParam0) == 0)
	{
		func_90(iParam0, get_game_timer());
	}
	fVar4 = _get_ped_remaining_revival_time(*uParam1, false);
	func_91(iParam0, fVar4);
	if (Global_1915715->f_22476)
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
}

void func_25(int iParam0, var uParam1)
{
	if (!uParam1->f_1)
	{
		return;
	}
	if (func_85())
	{
		return;
	}
	if (!uParam1->f_2)
	{
		func_92(iParam0);
		return;
	}
}

void func_26()
{
	iVar0 = 0;
	while (iVar0 < 7)
	{
		func_93(iVar0);
		iVar0++;
	}
}

void func_27(struct<5> Param0, var uParam5, var uParam6)
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
	if (!is_ped_on_mount(Global_34))
	{
		func_94();
		return;
	}
	iVar0 = get_mount(Global_34);
	if (!func_95(iVar0))
	{
		return;
	}
	if (!func_96())
	{
		vVar1 = { get_entity_coords(iVar0, true, false) };
		fVar4 = get_distance_between_coords(vVar1, func_97(), false);
		func_98(vVar1);
		if (fVar4 > 0.01f)
		{
			fVar5 = func_99();
			fVar5 = (fVar5 + fVar4);
			func_100(fVar5);
		}
		if (func_99() >= 40f)
		{
			func_101(1);
		}
	}
	if (!func_96())
	{
		return;
	}
	func_102(iVar0);
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
	if (!func_66(6))
	{
		return;
	}
	if (!is_ped_on_mount(Global_34))
	{
		return;
	}
	iVar0 = get_mount(Global_34);
	iVar1 = func_78(6);
	if (iVar0 != iVar1)
	{
		return;
	}
	if (func_103(6) == 0)
	{
		return;
	}
	if (func_66(1))
	{
		func_104(1, 0);
	}
	func_105(1);
	func_106(iVar0);
	func_105(6);
}

void func_29(struct<7> Param0)
{
	if (!func_107(Param0, &iVar0, 1))
	{
		func_108();
		return;
	}
	iVar1 = get_game_timer();
	if (!does_entity_exist(Global_1903136->f_402))
	{
		Global_1903136->f_402 = iVar0;
		Global_1903136->f_402.f_1 = iVar1;
	}
	if (Global_1903136->f_402.f_1 + 5000 < iVar1)
	{
		func_109(iVar0);
		func_108();
	}
}

void func_30()
{
	if (func_110() > 1)
	{
		disable_control_action(0, -1404316431, false);
		disable_control_action(0, -822242784, false);
		disable_control_action(0, -874806616, false);
		func_111();
	}
	iVar0 = func_110();
	switch (iVar0)
	{
		case 0:
			func_112();
			break;
		case 1:
			func_113();
			break;
		case 2:
			func_114();
			break;
		case 3:
			func_115();
			break;
		case 4:
			func_116();
			break;
		case 5:
			func_117();
			break;
		case 6:
			func_118();
			break;
		case 7:
			func_119();
			break;
	}
	func_120();
}

bool func_31()
{
	return &Global_1957963;
}

void func_32(int iParam0)
{
	iParam0 = func_77(iParam0);
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
		if (!func_121(42))
		{
			return;
		}
	}
	iVar0 = Global_1903136[iParam0];
	if (is_ped_injured(iVar0))
	{
		return;
	}
	if (Global_13)
	{
		return;
	}
	if (func_31())
	{
		return;
	}
	switch (&Global_1903136->f_410[iParam0])
	{
		case 0:
		case 1:
			func_122(iParam0);
			Global_1903136->f_410[iParam0] = 2;
			break;
		case 2:
			func_123(iParam0);
			Global_1903136->f_410[iParam0] = 3;
			break;
		case 3:
			func_124(iParam0);
			Global_1903136->f_410[iParam0] = 0;
			break;
	}
}

void func_33(struct<4> Param0, var uParam4, var uParam5, var uParam6, struct<9> Param7, var uParam16, var uParam17, var uParam18, int iParam19)
{
	if (!Param0.f_3)
	{
		return;
	}
	if (!Param7.f_1)
	{
		return;
	}
	func_125(iParam19, Param7.f_5, Param7.f_8);
}

void func_34(struct<4> Param0, var uParam4, var uParam5, var uParam6)
{
	if (func_81(2048))
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
	iVar1 = func_127(func_126(0));
	switch (iVar1)
	{
		case 2:
		case 3:
		case 4:
			bVar0 = true;
			break;
	}
	bVar2 = false;
	if (!func_121(41))
	{
		bVar2 = true;
	}
	bVar3 = false;
	if (bVar0 || bVar2)
	{
		bVar3 = true;
	}
	iVar4 = 367;
	if (get_ped_config_flag(Global_34, iVar4, true) != bVar3)
	{
		set_ped_config_flag(Global_34, iVar4, bVar3);
	}
	bVar5 = false;
	if (bVar0 && !bVar2)
	{
		bVar5 = true;
	}
	iVar4 = 487;
	if (get_ped_config_flag(Global_34, iVar4, true) != bVar5)
	{
		set_ped_config_flag(Global_34, iVar4, bVar5);
	}
}

void func_35(struct<5> Param0, var uParam5, var uParam6, struct<5> Param7, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18)
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
	if (func_128(Param7, 2043986356))
	{
	}
}

void func_36(struct<4> Param0, var uParam4, var uParam5, var uParam6, struct<5> Param7, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	if (func_67(iParam19))
	{
		return;
	}
	bVar0 = false;
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

void func_37(int iParam0)
{
}

void func_38(struct<2> Param0, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, struct<11> Param7, var uParam18, int iParam19)
{
	if (!Param0.f_1)
	{
		return;
	}
	if (!Param7.f_10)
	{
		return;
	}
	if (func_129(iParam19) == -1)
	{
		return;
	}
	func_130(iParam19, -1);
}

void func_39(struct<12> Param0, struct<2> Param12, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	if (func_131())
	{
		return;
	}
	iParam19 = func_77(iParam19);
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
	if (func_129(iParam19) == 1)
	{
		return;
	}
	if (!is_player_riding_train(Param12))
	{
		return;
	}
	if (func_132(Param0, 2043986356))
	{
		return;
	}
	func_133(Param0, Global_34);
}

void func_40(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_67(iParam0))
	{
		return;
	}
	iVar0 = func_134(iParam0);
	if (_does_thread_exist(iVar0))
	{
		if (is_thread_active(iVar0, false))
		{
			return;
		}
	}
	if (func_66(iParam0))
	{
		iVar1 = func_78(iParam0);
		func_135(iVar1, 1);
	}
	func_136(iParam0);
}

void func_41(struct<4> Param0, var uParam4, var uParam5, var uParam6, struct<5> Param7, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iParam19 = func_77(iParam19);
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
		func_137(iParam19);
		return;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		func_137(iParam19);
		return;
	}
	if (func_81(512))
	{
		return;
	}
	if (iVar0 == Global_34)
	{
		return;
	}
	iVar1 = func_138(iParam19);
	if (!does_entity_exist(iVar1))
	{
		iVar2 = get_ped_relationship_group_hash(iVar0);
		if ((iVar2 != -1538724068 && iVar2 != 1391706777) && iVar2 != 1030835986)
		{
			func_139(iParam19, iVar0);
		}
	}
	iVar1 = func_138(iParam19);
	if (!does_entity_exist(iVar1))
	{
		return;
	}
	if (func_140(Param7, Global_34, 1, 1) > func_79(iParam19))
	{
		func_137(iParam19);
		func_141(iParam19, 2);
	}
}

void func_42(struct<4> Param0, var uParam4, var uParam5, var uParam6, struct<5> Param7, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	if (!func_142(iParam19))
	{
		return;
	}
	fVar0 = func_143(Param7);
	bVar1 = false;
	if (fVar0 > 0f)
	{
		bVar1 = true;
	}
	iVar2 = get_game_timer();
	if (!bVar1 || func_144(iParam19) + 30000 < iVar2)
	{
		func_145(iParam19, 0);
		func_146(iParam19, -1);
		if (func_147(16))
		{
			func_148(16);
		}
		if (func_149(16))
		{
			func_150(16);
		}
	}
}

void func_43(struct<5> Param0, var uParam5, var uParam6)
{
	if (!Param0.f_3)
	{
		return;
	}
	if (Param0.f_4)
	{
		return;
	}
	iVar0 = func_151(5);
	if (iVar0 == 0)
	{
		return;
	}
	func_20(5, &vVar1);
	if (iVar0 == 2)
	{
		if (vVar1.y && !vVar1.z)
		{
			func_137(5);
			func_152(5, 1);
		}
		if (vVar1.z)
		{
			if (func_140(vVar1.x, Global_34, 1, 1) > func_79(5) && !is_entity_on_screen(vVar1.x))
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
				func_68(5);
				func_153(5, 0);
			}
		}
		if (!vVar1.y && func_74(5) == 1)
		{
			func_153(5, 0);
		}
	}
	if (iVar0 == 0)
	{
		return;
	}
	if (!func_121(41))
	{
		return;
	}
	if (func_74(0) == 1 && func_154() == 0)
	{
		func_104(5, 0);
		func_105(5);
	}
}

void func_44(struct<5> Param0, var uParam5, var uParam6)
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
	if (func_121(41))
	{
		return;
	}
	bVar0 = false;
	if ((func_74(0) == 0 && func_74(5) == 1) && func_151(5) == 1)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		return;
	}
	iVar1 = func_127(func_126(0));
	bVar2 = false;
	if (iVar1 == 2)
	{
		bVar2 = true;
	}
	if (!bVar2)
	{
		if (!func_121(41))
		{
			func_155(41);
			func_155(29);
		}
		if (!func_156(55))
		{
			func_157(1);
		}
	}
}

void func_45()
{
	iVar0 = func_158(0);
	iVar1 = func_158(1);
	if (Global_1903136->f_404 != 0)
	{
		if (Global_1903136->f_404 != iVar0)
		{
			if (!func_159(Global_1903136->f_404))
			{
				set_ped_model_is_suppressed(Global_1903136->f_404, false);
			}
			Global_1903136->f_404 = 0;
		}
	}
	if (Global_1903136->f_404.f_1 != 0)
	{
		if (Global_1903136->f_404.f_1 != iVar1)
		{
			if (!func_159(Global_1903136->f_404.f_1))
			{
				set_ped_model_is_suppressed(Global_1903136->f_404.f_1, false);
			}
			Global_1903136->f_404.f_1 = 0;
		}
	}
	if (iVar0 != 0)
	{
		if (!_0xaa9f048dcf69b6dc(iVar0))
		{
			set_ped_model_is_suppressed(iVar0, true);
			Global_1903136->f_404 = iVar0;
		}
	}
	if (iVar1 != 0)
	{
		if (!_0xaa9f048dcf69b6dc(iVar1))
		{
			set_ped_model_is_suppressed(iVar1, true);
			Global_1903136->f_404.f_1 = iVar1;
		}
	}
}

void func_46()
{
	func_160(Global_1903136->f_422);
	iVar0 = Global_1903136->f_422;
	iVar0++;
	if (iVar0 >= 5)
	{
		iVar0 = 0;
	}
	Global_1903136->f_422 = iVar0;
}

void func_47(struct<5> Param0, var uParam5, var uParam6)
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
	if (func_85())
	{
		return;
	}
	bVar0 = func_161();
	if (bVar0)
	{
		iVar1 = func_162();
		if (!_0x88ad6cc10d8d35b2(iVar1))
		{
			set_entity_as_mission_entity(iVar1, true, true);
		}
	}
	bVar2 = false;
	if (bVar0)
	{
		bVar2 = func_163(Global_34, iVar1);
	}
	bVar3 = func_121(41);
	bVar4 = false;
	if (bVar0)
	{
		if (bVar2)
		{
			if (func_164() != 1 && !func_165(0))
			{
				func_166(1);
				bVar4 = true;
			}
		}
		else
		{
			if (func_164() == 1 && !func_165(0))
			{
				func_166(2);
				bVar4 = true;
			}
			if (is_entity_static(iVar1))
			{
				set_entity_dynamic(iVar1, true);
			}
		}
		vVar5 = { get_entity_coords(iVar1, true, false) };
		func_167(vVar5);
	}
	else
	{
		if (func_164() == 0)
		{
			if (func_154() == 5)
			{
				if (func_66(5))
				{
					vVar8 = { get_entity_coords(func_78(5), false, false) };
					func_167(vVar8);
				}
				else if (bVar3)
				{
					vVar11 = { func_168() };
					func_169(-1);
					func_166(2);
					bVar4 = true;
				}
			}
		}
		if (func_164() == 2)
		{
			vVar14 = { func_168() };
			func_170(vVar14, 0f, 1);
		}
	}
	if (bVar4)
	{
		func_62();
	}
}

void func_48()
{
	if (!func_66(6))
	{
		return;
	}
	func_20(6, &vVar0);
	if (!vVar0.z)
	{
		set_ped_as_no_longer_needed(&vVar0);
		func_105(6);
		return;
	}
	func_19(&Var12);
	bVar19 = false;
	if (!Var12.f_3)
	{
		bVar19 = true;
	}
	if (func_140(vVar0.x, Global_34, 1, 1) > 100f)
	{
		bVar19 = true;
	}
	if (bVar19)
	{
		func_104(6, 0);
		func_105(6);
	}
}

void func_49()
{
	if (!func_66(1))
	{
		func_171();
		return;
	}
	func_20(1, &Var0);
	if (!Var0.f_2)
	{
		func_171();
		return;
	}
	if (func_172(1))
	{
		func_171();
		return;
	}
	if (func_103(1) >= 1)
	{
		func_171();
		return;
	}
	if (!func_173(1))
	{
		func_171();
		return;
	}
	if (Var0.f_10)
	{
		func_171();
		return;
	}
	if (does_entity_exist(Var0.f_9))
	{
		func_171();
		return;
	}
	iVar12 = get_game_timer();
	if (!func_174())
	{
		iVar13 = func_175();
		if (iVar13 == 0)
		{
			func_176(iVar12);
		}
		else if (iVar13 + 5000 < iVar12)
		{
			func_177(1);
		}
	}
	if (!func_174())
	{
		return;
	}
	if (!func_128(Var0, 518218985))
	{
		task_smart_flee_ped(Var0, Global_34, 500f, -1, 0, 1f, 0);
		set_ped_keep_task(Var0, true);
	}
	if (func_178(Var0, -1))
	{
		return;
	}
	iVar14 = func_179();
	if (iVar14 == 0)
	{
		func_180(iVar12);
	}
	else if (iVar14 + 15000 < iVar12)
	{
		func_104(1, 1);
		func_171();
	}
}

void func_50()
{
	if (!does_entity_exist(Global_34))
	{
		return;
	}
	if (is_entity_dead(Global_34) || is_ped_injured(Global_34))
	{
		return;
	}
	bVar1 = false;
	if (is_ped_on_mount(Global_34))
	{
		bVar1 = true;
		iVar0 = get_mount(Global_34);
	}
	iVar5 = 0;
	while (iVar5 < 7)
	{
		if (Global_39.f_281.f_1[iVar5]->f_9 == 0)
		{
			if (Global_39.f_281.f_1[iVar5]->f_455 > -1)
			{
				Global_39.f_281.f_1[iVar5]->f_455 = -1;
			}
		}
		else
		{
			bVar3 = false;
			bVar4 = false;
			iVar2 = Global_1903136[iVar5];
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
				if (Global_39.f_281.f_1[iVar5]->f_455 > -1)
				{
					Global_39.f_281.f_1[iVar5]->f_455 = -1;
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
					if (Global_39.f_281.f_1[iVar5]->f_455 != iVar7)
					{
						Global_39.f_281.f_1[iVar5]->f_455 = iVar7;
					}
				}
				else if (Global_39.f_281.f_1[iVar5]->f_455 == -1)
				{
					Global_39.f_281.f_1[iVar5]->f_455 = iVar6;
				}
			}
		}
		iVar5++;
	}
}

void func_51()
{
	iVar0 = player_id();
	iVar1 = 0;
	if (func_181())
	{
		iVar1 = 1;
	}
	if (func_66(0))
	{
		iVar2 = func_78(0);
		_0xa3db37edf9a74635(iVar0, iVar2, 31, 2, iVar1);
		_0xa3db37edf9a74635(iVar0, iVar2, 32, 2, iVar1);
		_0xa3db37edf9a74635(iVar0, iVar2, 33, 2, iVar1);
	}
	if (func_66(1))
	{
		iVar3 = func_78(1);
		_0xa3db37edf9a74635(iVar0, iVar3, 31, 2, iVar1);
		_0xa3db37edf9a74635(iVar0, iVar3, 32, 2, iVar1);
		_0xa3db37edf9a74635(iVar0, iVar3, 33, 2, iVar1);
	}
}

void func_52()
{
	if (func_121(32))
	{
		if (!func_182())
		{
			func_183(1);
		}
	}
	else if (func_182())
	{
		func_183(0);
	}
	if (func_121(33))
	{
		if (!func_184())
		{
			func_185(1);
		}
	}
	else if (func_184())
	{
		func_185(0);
	}
	if (func_121(34))
	{
		if (!func_186())
		{
			func_187(1);
		}
	}
	else if (func_186())
	{
		func_187(0);
	}
}

void func_53(struct<4> Param0, var uParam4, var uParam5, var uParam6, struct<5> Param7, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iParam19 = func_77(iParam19);
	if (iParam19 == -1)
	{
		return;
	}
	if (iParam19 >= 7)
	{
		return;
	}
	fVar0 = func_140(Param7, Global_34, 1, 1);
	if (fVar0 > 40f)
	{
		func_88(iParam19);
		return;
	}
	if (!is_entity_on_screen(Param7))
	{
		func_88(iParam19);
		return;
	}
	iVar1 = get_game_timer();
	if (!func_188(iParam19))
	{
		func_189(iParam19, iVar1);
		return;
	}
	if (func_190(iParam19) + 15000 < iVar1)
	{
		func_189(iParam19, iVar1);
	}
}

void func_54(struct<4> Param0, var uParam4, var uParam5, var uParam6, struct<6> Param7, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iParam19 = func_77(iParam19);
	if (iParam19 == -1)
	{
		return;
	}
	if (iParam19 >= 7)
	{
		return;
	}
	vVar0 = { func_191(iParam19) };
	if (func_192(vVar0))
	{
		return;
	}
	vVar3 = { func_193(iParam19) };
	fVar6 = func_194(iParam19);
	fVar7 = get_distance_between_coords(Param7.f_5, vVar3, true);
	if (fVar7 > 0.01f)
	{
		fVar6 = (fVar6 + fVar7);
		func_195(iParam19, Param7.f_5);
		func_196(iParam19, fVar6);
	}
}

void func_55(struct<7> Param0, struct<12> Param7, struct<12> Param19)
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
	func_197(Param0);
	func_198(Param0);
	func_199(Param0, Param7);
	func_200();
	func_201(Param0, Param7, Param19);
	func_202(Param0);
	func_203(Param0, Param7, Param19);
	func_204(Param0, Param7, Param19);
	func_205();
	func_206(Param0);
	func_207();
	func_208(Param0);
	func_209(Param0);
	func_210(Param0, Param7);
	func_211(Param0, Param7, Param19);
	func_212(Param0);
}

void func_56()
{
	if (does_entity_exist(Global_34))
	{
		return;
	}
	if (is_entity_dead(Global_34) || is_ped_injured(Global_34))
	{
		return;
	}
	Var0 = { func_126(0) };
	if (func_213(Var0))
	{
		if (Var0 == 2)
		{
			return;
		}
	}
	iVar2 = func_214();
	_0x641351e9ad103890(Global_34, iVar2);
}

void func_57(int iParam0, bool bParam1)
{
	if (!func_215(iParam0))
	{
		return;
	}
	iVar0 = _0xf49f14462f0ae27c(get_player_index());
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (_0x8d9bfce3352de47f(iVar0))
	{
		return;
	}
	Var1.f_10 = 10;
	Var97.f_10 = 10;
	func_216(&Var1);
	bVar207 = false;
	bVar208 = ((is_ped_ragdoll(iVar0) || is_ped_dead_or_dying(iVar0, true)) || is_ped_in_writhe(iVar0));
	bVar210 = false;
	if ((((func_217(10) || func_217(9)) || func_217(29)) || func_217(27)) || func_217(15))
	{
		bVar210 = true;
	}
	iVar211 = 1;
	bVar212 = false;
	bVar213 = func_218(131072, 255);
	if (!bVar213)
	{
		if (func_219())
		{
			bVar213 = true;
		}
	}
	iVar209 = 0;
	while (iVar209 < 3)
	{
		iVar193 = func_220(iVar209);
		iVar201 = iVar209;
		func_216(&Var1);
		bVar212 = false;
		bVar207 = bVar208;
		iVar199 = Global_1291734->f_938.f_245[iVar209]->f_3;
		if (!bVar207)
		{
			if (!_0x608bc6a6aacd5036(Global_1291734->f_938.f_245[iVar209], iVar0, iVar193, 0))
			{
				if (bParam1 && !Global_1904087->f_111)
				{
				}
				else
				{
					bVar207 = true;
					Jump @380; //curOff = 318
					if (does_entity_exist(iVar199) && does_entity_exist(Global_1291734->f_938.f_245[iVar209]->f_3))
					{
						if (iVar199 != Global_1291734->f_938.f_245[iVar209]->f_3)
						{
							bVar207 = true;
							bVar212 = true;
						}
					}
					if (!bVar207)
					{
						iVar198 = Global_1291734->f_938.f_245[iVar209]->f_3;
						if (!does_entity_exist(iVar198))
						{
							bVar207 = true;
						}
					}
					if (!bVar207)
					{
						iVar214 = _0x61914209c36efddb(iVar198);
						if (iVar214 != 7)
						{
							bVar207 = true;
							if (!Global_1904087->f_112)
							{
								iVar211 = 0;
							}
							if (&Global_1291734->f_938.f_241[iVar209] == 7)
							{
								bVar212 = true;
							}
						}
						Global_1291734->f_938.f_241[iVar209] = iVar214;
					}
					if (!bVar207)
					{
						if (is_entity_a_mission_entity(iVar198))
						{
							bVar207 = true;
						}
					}
					if (!bVar207)
					{
						if (is_entity_a_ped(iVar198))
						{
							iVar200 = get_ped_index_from_entity_index(iVar198);
							if (is_ped_human(iVar200))
							{
								bVar207 = true;
							}
							Var1.f_4 = _get_ped_quality(iVar200);
							Var1.f_9 = _get_num_components_in_ped(iVar200);
							Var1.f_6 = _get_ped_damage(iVar200);
							Var1.f_7 = _get_ped_damaged(iVar200);
						}
					}
					if (!bVar207)
					{
						Var1 = get_entity_model(iVar198);
						Var1.f_1 = func_221(iVar198);
						Var1.f_2 = _0xd21c7418c590bb40(iVar198);
						Var1.f_3 = _get_entity_carry_config(iVar198);
						Var1.f_93 = _0xb16c780c51e51e2b(iVar198);
						if (bVar210)
						{
							if (!network_has_control_of_entity(iVar198))
							{
								network_request_control_of_entity(iVar198);
							}
						}
						if (Global_39.f_281.f_1[iParam0]->f_15[iVar201]->f_1 != 0)
						{
							if (Global_39.f_281.f_1[iParam0]->f_15[iVar201]->f_1 != Var1.f_1)
							{
								func_222(iVar0, Global_39.f_281.f_1[iParam0]->f_15[iVar201]->f_1, 1, !bVar212, -142743235);
								if (Var1.f_1 != 0)
								{
									if (func_223(iVar0, iParam0, Var1.f_1, iVar209))
									{
										func_224(_inventory_get_ped_inventory_id(iVar0), Var1.f_1, 1);
									}
									Global_39.f_281.f_1[iParam0]->f_15[iVar201]->f_1 = Var1.f_1;
								}
								Global_1940311->f_4 = 1;
							}
						}
						else
						{
							Global_1940311->f_4 = 1;
							if (func_223(iVar0, iParam0, Var1.f_1, iVar209))
							{
								func_224(_inventory_get_ped_inventory_id(iVar0), Var1.f_1, 1);
							}
						}
					}
					else
					{
						if (Global_39.f_281.f_1[iParam0]->f_15[iVar201]->f_1 != 0)
						{
							Global_1940311->f_4 = 1;
							func_222(iVar0, Global_39.f_281.f_1[iParam0]->f_15[iVar201]->f_1, 1, !bVar212, -142743235);
						}
						Global_1291734->f_938.f_241[iVar209] = 0;
						_copy_memory(Global_1291734->f_938.f_245[iVar209], &uVar194, 4);
						func_225(&Var97, Global_39.f_281.f_1[iParam0]->f_15[iVar201]);
					}
					else
					{
						if (is_model_a_ped(Var1))
						{
							Var1.f_8 = _0x30569f348d126a5a(iVar200);
							if (Global_1904087->f_112)
							{
								if (Var1.f_9 <= 1)
								{
								}
								else if (Var1.f_9 > 10)
								{
									Var1.f_9 = 10;
								}
								iVar202 = 0;
								while (iVar202 < Var1.f_9)
								{
									if (iVar202 >= 10)
									{
									}
									else
									{
										if (_0xa9c28516a6dc9d56(iVar200, iVar202, &uVar203, &uVar204, &uVar205, &uVar206))
										{
											Var1.f_10[iVar202] = uVar203;
											Var1.f_10[iVar202]->f_1 = uVar204;
											Var1.f_10[iVar202]->f_2 = uVar205;
											Var1.f_10[iVar202]->f_3 = uVar206;
										}
										if (_0xe7998fec53a33bbe(iVar200, iVar202, &uVar203, &uVar204, &uVar205, &uVar206))
										{
											Var1.f_10[iVar202]->f_4 = uVar203;
											Var1.f_10[iVar202]->f_5 = uVar204;
											Var1.f_10[iVar202]->f_6 = uVar205;
											Var1.f_10[iVar202]->f_7 = uVar206;
										}
										iVar202++;
									}
								}
							}
							Var1.f_91 = _0x2e545965df98d476(iVar198);
							if (_is_metaped_using_component(iVar200, 43391475) || _0x8de41e9902e85756(iVar198))
							{
								Var1.f_92 = 1;
							}
							else
							{
								Var1.f_92 = 0;
							}
							Var1.f_94 = _0x37b01666bae8f7ef(iVar198);
							if (_0x5170dda6d63acaaa(iVar200))
							{
								task_dump_carriable_from_parent(Global_34, iVar0, iVar198);
								_0x18ff3110cf47115d(iVar198, 2, 0);
								_0x674b90be1115846d(iVar200, 1);
								if (func_227(func_226(iVar200), 82))
								{
									func_228(113, 1);
								}
								func_225(&Var97, Global_39.f_281.f_1[iParam0]->f_15[iVar201]);
							}
							else
							{
								if (Var1.f_91 >= 12)
								{
									if (func_229() && func_227(func_226(iVar200), 82))
									{
										func_228(112, 0);
									}
								}
								else if (Var1.f_91 >= 2)
								{
									if (func_229() && func_227(func_226(iVar200), 82))
									{
										func_228(111, 0);
									}
								}
								func_225(&Var1, Global_39.f_281.f_1[iParam0]->f_15[iVar201]);
							}
							iVar209++;
							if (Global_1904087->f_111)
							{
								if (!Global_1904087->f_112)
								{
									if (iVar211 == 1)
									{
										Global_1904087->f_112 = 1;
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

void func_58(int iParam0, bool bParam1)
{
	if (!func_215(iParam0))
	{
		return;
	}
	iVar0 = _0xf49f14462f0ae27c(get_player_index());
	if (!func_230(iVar0))
	{
		return;
	}
	if (bParam1)
	{
		if (!Global_1904087->f_111)
		{
			return;
		}
	}
	if (is_ped_in_writhe(iVar0))
	{
	}
	_0x6f43c351a5d51e2f(iVar0, &(Global_39.f_281.f_1[iParam0]->f_382));
}

void func_59()
{
	iVar6 = 0;
	while (iVar6 < 7)
	{
		if (!func_66(iVar6))
		{
		}
		else
		{
			iVar7 = func_78(iVar6);
			if (func_231(iVar6))
			{
				if (!func_232(iVar7))
				{
					iVar8 = func_233(iVar6);
					func_234(iVar7, iVar8);
				}
				else
				{
					iVar9 = func_235(iVar6);
					func_236(iVar9, &uVar0, &uVar1, &uVar2, &iVar3, &uVar4, &uVar5);
					if (iVar3 >= 1)
					{
						func_237(iVar7);
						func_238(iVar6);
					}
					else if (!func_232(iVar7))
					{
					}
					else if (!func_231(iVar6))
					{
						iVar10 = func_239(iVar7);
						func_240(iVar6, 1);
						func_241(iVar6, iVar10);
						func_243(iVar6, func_242());
					}
				}
				iVar6++;
			}
		}
	}
}

void func_60()
{
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (!func_66(iVar0))
		{
		}
		else
		{
			iVar1 = func_158(iVar0);
			if (!func_244(iVar1))
			{
			}
			else
			{
				Var2 = { func_245(iVar0) };
				if (!is_string_null_or_empty(&Var2))
				{
				}
				else
				{
					StringCopy(&cVar10, func_246(iVar1), 64);
					StringCopy(&Var2, _get_label_text_2(&cVar10), 64);
					if (is_string_null_or_empty(&Var2))
					{
					}
					else
					{
						func_247(iVar0, Var2);
						func_248(iVar0);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_61(int iParam0)
{
	if (is_player_dead(player_id()))
	{
		return;
	}
	iVar0 = func_78(iParam0);
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
	if (func_249(iParam0, 64))
	{
		func_250(iParam0);
		return;
	}
	bVar2 = false;
	if (!does_blip_exist((*Global_1903136)[iParam0]->f_25) && !does_blip_exist((*Global_1903136)[iParam0]->f_26))
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
	bVar3 = func_121(41);
	if (bVar1)
	{
		if (does_blip_exist((*Global_1903136)[iParam0]->f_25))
		{
			remove_blip(&((*Global_1903136)[iParam0]->f_25));
		}
		if (iVar0 == _get_saddle_horse_for_player(player_id()) && bVar3)
		{
			if (!does_blip_exist((*Global_1903136)[iParam0]->f_26))
			{
				(*Global_1903136)[iParam0]->f_26 = _blip_add_for_entity(-515518185, iVar0);
				set_blip_sprite((*Global_1903136)[iParam0]->f_26, -1327110633, true);
				func_251(&((*Global_1903136)[iParam0]->f_26));
			}
		}
		else if (does_blip_exist((*Global_1903136)[iParam0]->f_26))
		{
			remove_blip(&((*Global_1903136)[iParam0]->f_26));
		}
		return;
	}
	else if (does_blip_exist((*Global_1903136)[iParam0]->f_26))
	{
		remove_blip(&((*Global_1903136)[iParam0]->f_26));
	}
	bVar4 = false;
	if (is_ped_on_mount(Global_34))
	{
		if (Global_1940258->f_34 == iVar0)
		{
			bVar4 = true;
		}
	}
	if (does_blip_exist((*Global_1903136)[iParam0]->f_25) && bVar4)
	{
		func_250(iParam0);
	}
	if (bVar4)
	{
		return;
	}
	if (Global_39.f_281.f_1[iParam0]->f_14 == 2)
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
		if (func_103(1) < 1)
		{
			bVar7 = true;
		}
		if (bVar7)
		{
			if (does_blip_exist((*Global_1903136)[iParam0]->f_25))
			{
				remove_blip(&((*Global_1903136)[iParam0]->f_25));
			}
			return;
		}
	}
	if (!does_blip_exist((*Global_1903136)[iParam0]->f_25))
	{
		(*Global_1903136)[iParam0]->f_25 = _blip_add_for_entity(iVar5, iVar0);
		(*Global_1903136)[iParam0]->f_24 = 0;
		func_252(&((*Global_1903136)[iParam0]->f_25), bVar6);
	}
	if (!does_blip_exist((*Global_1903136)[iParam0]->f_25))
	{
		return;
	}
	bVar8 = false;
	if (func_249(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = is_ped_in_writhe(iVar0);
	bVar10 = false;
	iVar11 = func_138(iParam0);
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
	fVar15 = func_80(vVar12, Global_35);
	bVar16 = false;
	if (fVar15 > func_79(iParam0))
	{
		bVar16 = true;
	}
	iVar17 = 0;
	iVar18 = 0;
	if (bVar8)
	{
		if ((*Global_1903136)[iParam0]->f_24 != 3)
		{
			iVar17 = -401963276;
			(*Global_1903136)[iParam0]->f_24 = 3;
		}
	}
	else if (bVar9)
	{
		fVar19 = _get_ped_remaining_revival_time(iVar0, true);
		if (bVar16)
		{
			if (fVar19 < 0.25f)
			{
				if ((*Global_1903136)[iParam0]->f_24 != 9)
				{
					iVar17 = 430539302;
					iVar18 = 1313031610;
					(*Global_1903136)[iParam0]->f_24 = 9;
				}
			}
			else if (fVar19 < 0.5f)
			{
				if ((*Global_1903136)[iParam0]->f_24 != 10)
				{
					iVar17 = -995247980;
					iVar18 = 1313031610;
					(*Global_1903136)[iParam0]->f_24 = 10;
				}
			}
			else if (fVar19 < 0.75f)
			{
				if ((*Global_1903136)[iParam0]->f_24 != 11)
				{
					iVar17 = -25056193;
					iVar18 = 1313031610;
					(*Global_1903136)[iParam0]->f_24 = 11;
				}
			}
			else if (fVar19 <= 1f)
			{
				if ((*Global_1903136)[iParam0]->f_24 != 12)
				{
					iVar17 = -264630352;
					iVar18 = 1313031610;
					(*Global_1903136)[iParam0]->f_24 = 12;
				}
			}
		}
		else if (fVar19 < 0.25f)
		{
			if ((*Global_1903136)[iParam0]->f_24 != 5)
			{
				iVar17 = 430539302;
				iVar18 = -1012863186;
				(*Global_1903136)[iParam0]->f_24 = 5;
			}
		}
		else if (fVar19 < 0.5f)
		{
			if ((*Global_1903136)[iParam0]->f_24 != 6)
			{
				iVar17 = -995247980;
				iVar18 = -1012863186;
				(*Global_1903136)[iParam0]->f_24 = 6;
			}
		}
		else if (fVar19 < 0.75f)
		{
			if ((*Global_1903136)[iParam0]->f_24 != 7)
			{
				iVar17 = -25056193;
				iVar18 = -1012863186;
				(*Global_1903136)[iParam0]->f_24 = 7;
			}
		}
		else if (fVar19 <= 1f)
		{
			if ((*Global_1903136)[iParam0]->f_24 != 8)
			{
				iVar17 = -264630352;
				iVar18 = -1012863186;
				(*Global_1903136)[iParam0]->f_24 = 8;
			}
		}
	}
	else if (bVar10)
	{
		if ((*Global_1903136)[iParam0]->f_24 != 4)
		{
			iVar17 = -1380599892;
			(*Global_1903136)[iParam0]->f_24 = 4;
		}
	}
	else if (bVar16)
	{
		if ((*Global_1903136)[iParam0]->f_24 != 2)
		{
			iVar17 = 1313031610;
			(*Global_1903136)[iParam0]->f_24 = 2;
		}
	}
	else if (!bVar16)
	{
		if ((*Global_1903136)[iParam0]->f_24 != 1)
		{
			iVar17 = -1012863186;
			(*Global_1903136)[iParam0]->f_24 = 1;
		}
	}
	if (iVar17 != 0)
	{
		func_253((*Global_1903136)[iParam0]->f_25);
		func_254((*Global_1903136)[iParam0]->f_25);
		_blip_set_modifier((*Global_1903136)[iParam0]->f_25, iVar17);
		if (iVar17 == -401963276)
		{
			_blip_set_modifier((*Global_1903136)[iParam0]->f_25, 231194138);
		}
	}
	if (iVar18 != 0)
	{
		_blip_set_modifier((*Global_1903136)[iParam0]->f_25, iVar18);
	}
	if ((_get_saddle_horse_for_player(player_id()) == iVar0 && bVar3) && !bVar9)
	{
		_blip_set_modifier((*Global_1903136)[iParam0]->f_25, 673950256);
	}
	else
	{
		_set_blip_flash_style((*Global_1903136)[iParam0]->f_25, 673950256);
	}
	if (func_255(iVar0) && !bVar9)
	{
		if (iVar5 == -1925605092)
		{
			iVar20 = 561559387;
		}
		else if (iVar5 == -1230993421)
		{
			iVar20 = -201249929;
		}
		_blip_set_modifier((*Global_1903136)[iParam0]->f_25, iVar20);
	}
	else
	{
		_set_blip_flash_style((*Global_1903136)[iParam0]->f_25, 561559387);
		_set_blip_flash_style((*Global_1903136)[iParam0]->f_25, -201249929);
	}
	iVar21 = func_103(iParam0);
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
		_0x44813684f72b563c(iVar0, (*Global_1903136)[iParam0]->f_25);
	}
	else
	{
		_0x97f6f158cc5b5ca2(iVar0, (*Global_1903136)[iParam0]->f_25);
		_0x7563cbca99253d1a(iVar0, iVar22);
	}
}

void func_62()
{
	iVar0 = Global_1903136->f_379;
	if (!does_entity_exist(iVar0))
	{
		if (does_blip_exist(Global_1903136->f_379.f_1))
		{
			remove_blip(&(Global_1903136->f_379.f_1));
		}
		return;
	}
	if (Global_1940258->f_6)
	{
		return;
	}
	if (is_ped_injured(Global_34))
	{
		return;
	}
	bVar1 = func_163(Global_34, iVar0);
	if (bVar1)
	{
		if (does_blip_exist(Global_1903136->f_379.f_1))
		{
			remove_blip(&(Global_1903136->f_379.f_1));
		}
	}
	else if (func_164() == 3)
	{
		if (does_blip_exist(Global_1903136->f_379.f_1))
		{
			remove_blip(&(Global_1903136->f_379.f_1));
		}
	}
	else if (!does_blip_exist(Global_1903136->f_379.f_1))
	{
		Global_1903136->f_379.f_1 = _blip_add_for_entity(-515518185, iVar0);
		func_251(&(Global_1903136->f_379.f_1));
	}
}

void func_63()
{
	func_256(Global_1903136->f_418, Global_1903136->f_419);
	bVar0 = false;
	iVar1 = Global_1903136->f_419;
	iVar1++;
	if (iVar1 >= 2)
	{
		iVar1 = 0;
		bVar0 = true;
	}
	Global_1903136->f_419 = iVar1;
	if (bVar0)
	{
		iVar2 = Global_1903136->f_418;
		iVar2++;
		if (iVar2 > 5)
		{
			iVar2 = 0;
		}
		Global_1903136->f_418 = iVar2;
	}
}

void func_64()
{
	func_257(Global_1903136->f_420, Global_1903136->f_421);
	bVar0 = false;
	iVar1 = Global_1903136->f_421;
	iVar1++;
	if (iVar1 >= 3)
	{
		iVar1 = 0;
		bVar0 = true;
	}
	Global_1903136->f_421 = iVar1;
	if (bVar0)
	{
		iVar2 = Global_1903136->f_420;
		iVar2++;
		if (iVar2 > 5)
		{
			iVar2 = 0;
		}
		Global_1903136->f_420 = iVar2;
	}
}

void func_65()
{
	if (is_ped_injured(Global_34))
	{
		return;
	}
	if (Global_13)
	{
		return;
	}
	if (func_31())
	{
		return;
	}
	switch (Global_1903136->f_303.f_1)
	{
		case 0:
			func_258(0);
			break;
		case 1:
			func_258(1);
			break;
		case 2:
			func_258(6);
			break;
	}
	iVar0 = Global_1903136->f_303.f_1;
	iVar0++;
	if (iVar0 >= 3)
	{
		iVar0 = 0;
	}
	Global_1903136->f_303.f_1 = iVar0;
}

bool func_66(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (does_entity_exist(Global_1903136[iParam0]))
	{
		return true;
	}
	return false;
}

bool func_67(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return (*Global_1903136)[iParam0]->f_2;
}

void func_68(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_66(iParam0))
	{
		return;
	}
	iVar0 = func_78(iParam0);
	func_259(iParam0);
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	iVar1 = get_entity_model(iVar0);
	if (_0xaa9f048dcf69b6dc(iVar1))
	{
		if (!func_159(iVar1))
		{
			set_ped_model_is_suppressed(iVar1, false);
		}
	}
	delete_ped(&iVar0);
	func_260(iParam0, 0);
	func_136(iParam0);
}

int func_69()
{
	iVar0 = -1427204870;
	return iVar0;
}

struct<4> func_70()
{
	Var0 = { func_261(0) };
	return func_262(856287005, Var0, -218846335, 0);
}

bool func_71(int iParam0, struct<4> Param1, bool bParam5)
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
			if (func_263(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (func_264(Var3, Param1, Var12.f_4, 0, 1, 0) > 0)
				{
				}
				else
				{
					func_265(&Var7);
					if (func_266(Var3, &Var7, &Var12, 1, 752097756, 0))
					{
						if (bParam5)
						{
							func_267(Var7, 1, 0);
						}
					}
				}
			}
		}
		iVar0++;
	}
	return true;
}

bool func_72()
{
	return is_dlc_present(-2112896652);
}

bool func_73()
{
	return _unlock_is_unlocked(-121456797);
}

int func_74(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_39.f_281.f_1[iParam0]->f_14;
}

int func_75(int iParam0)
{
	iParam0 = func_77(iParam0);
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
			iVar1 = &Global_39.f_281.f_1[iParam0]->f_15[iVar2];
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

void func_76(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_249(iParam0, 1))
	{
		return;
	}
	if (func_268(iParam0))
	{
		return;
	}
	iVar0 = get_player_index();
	if (is_player_dead(iVar0))
	{
	}
	iVar1 = func_78(iParam0);
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
	vVar3 = { func_269(iParam0) };
	fVar6 = func_270(iParam0);
	if (func_192(vVar3))
	{
		return;
	}
	if (!bVar2)
	{
		func_271(iParam0);
		if (!func_272())
		{
			return;
		}
		if (!func_273(iParam0))
		{
			return;
		}
		iVar7 = func_158(iParam0);
		iVar1 = func_274(iVar7, vVar3, fVar6, 0, 0);
		if (!does_entity_exist(iVar1))
		{
			return;
		}
		func_260(iParam0, iVar1);
		func_275(iVar1);
		func_276(iVar1, iParam0);
		func_248(iParam0);
		_set_ped_outfit_preset(iVar1, 0, 0);
		func_277(iParam0);
		func_278(iParam0);
		func_279(iParam0);
		if (iParam0 == 0)
		{
			_0x8fbf9edb378ccb8c(iVar0, iVar1);
		}
		else if (iParam0 == 1)
		{
			_0x227b06324234fb09(iVar0, iVar1);
		}
		if (func_86(iParam0))
		{
			fVar8 = func_280(iParam0);
			_0x4db9d03ac4e1fa84(iVar1, fVar8, fVar8, 0);
			task_animal_writhe(iVar1, 0, 1);
		}
		func_153(iParam0, 1);
		set_model_as_no_longer_needed(iVar7);
	}
	if (!_0xa0bc8faed8cfeb3c(iVar1))
	{
		return;
	}
	bVar9 = false;
	iVar10 = func_154();
	if (iParam0 == iVar10)
	{
		_set_ped_as_saddle_horse_for_player(iVar0, iVar1);
		bVar9 = true;
	}
	iVar11 = func_281(iParam0);
	func_282(iVar1, iVar11);
	Var12 = { func_283(iParam0) };
	if (bVar9)
	{
		Var14 = { func_284() };
	}
	else
	{
		func_285(&Var14);
	}
	iVar22 = func_286(iVar1, 2);
	iVar23 = func_287(iVar22);
	func_288(iParam0, iVar23);
	if (!bVar9 && func_289(iParam0))
	{
		func_290(iVar1, 0);
	}
	func_291(iVar1, &Var12, &Var14, iVar23, 1);
	func_250(iParam0);
	func_61(iParam0);
	func_292(iParam0);
	func_293(iParam0);
}

int func_77(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_39.f_281;
	}
	return iParam0;
}

int func_78(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1903136[iParam0];
}

float func_79(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_158(iParam0);
	if (!is_model_valid(iVar0))
	{
		return -1f;
	}
	iVar1 = func_103(iParam0);
	iVar2 = get_default_max_attribute_rank(iVar0, 7);
	fVar3 = _0xeb67d4e056c85a81(iVar1);
	fVar4 = _0x78d8c1d4eb80c588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_103(iParam0) + 1;
	fVar6 = func_294(iParam0);
	fVar7 = to_float(func_295(iVar0, iVar1));
	fVar8 = to_float(func_295(iVar0, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_296(fVar3, fVar4, fVar11);
	return fVar12;
}

float func_80(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

bool func_81(int iParam0)
{
	return (Global_1903136->f_302 && iParam0) != 0;
}

bool func_82()
{
	if (!func_3(256))
	{
		return false;
	}
	if (func_297())
	{
		return false;
	}
	if (func_298() && !func_121(31))
	{
		return false;
	}
	if (func_81(2) || func_81(4))
	{
		return false;
	}
	if (is_screen_faded_out() || is_screen_fading_out())
	{
		return false;
	}
	if (Global_1940258->f_6)
	{
		return false;
	}
	if (is_scripted_speech_playing(Global_34))
	{
		return false;
	}
	if (_is_ped_hogtied(Global_34))
	{
		return false;
	}
	if (is_ped_swimming(Global_34))
	{
		return false;
	}
	return true;
}

void func_83(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, vector3 vParam7, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, vector3 vParam19, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	bVar0 = false;
	if (vParam7.z)
	{
		if (func_103(0) >= 1)
		{
			bVar0 = true;
		}
	}
	bVar1 = false;
	if (vParam19.z)
	{
		if (func_103(1) >= 1)
		{
			bVar1 = true;
		}
	}
	iVar2 = get_game_timer();
	switch (func_299())
	{
		case 0:
			func_14(1);
		case 1:
			func_300(0);
			func_301(-72209530);
			func_302(0, 0);
			func_302(1, 0);
			func_303(1);
			func_14(2);
		case 2:
			if (!func_81(1))
			{
				return;
			}
			func_14(3);
		case 3:
			func_304(iVar2);
			func_303(1);
			func_14(4);
		case 4:
			bVar3 = false;
			bVar4 = true;
			bVar5 = true;
			if (func_305() == 8)
			{
				if (!bVar3)
				{
					if (!func_306())
					{
						func_228(12, 1);
					}
					bVar3 = true;
				}
				bVar4 = false;
				bVar5 = false;
			}
			if (func_307(5))
			{
				if (func_74(0) == 0 && (func_74(1) == 0 || !bVar1))
				{
					if (!bVar3)
					{
						if (!func_306())
						{
							func_308();
						}
						bVar3 = true;
					}
					bVar4 = false;
					bVar5 = false;
				}
			}
			if ((func_74(0) == 0 && (func_74(1) == 0 || !bVar1)) && func_74(5) == 0)
			{
				if (!bVar3)
				{
					if (!func_306())
					{
						func_228(11, 1);
					}
					bVar3 = true;
				}
				bVar4 = false;
				bVar5 = false;
			}
			if (func_74(0) == 1 || (func_74(1) == 1 && bVar1))
			{
				iVar6 = get_interior_from_entity(Global_34);
				if (is_valid_interior(iVar6))
				{
					if (!bVar3)
					{
						if (func_309(iVar6))
						{
							if (!func_306())
							{
								func_228(14, 1);
							}
						}
						else if (func_310(iVar6))
						{
							if (!func_306())
							{
								func_228(15, 1);
							}
						}
						else if (!func_306())
						{
							func_228(13, 1);
						}
						if (func_66(0))
						{
							fVar7 = func_79(0);
							iVar8 = func_78(0);
							if (!func_311(0) && !func_172(0))
							{
								if (func_140(Global_34, iVar8, 1, 1) <= fVar7)
								{
									task_turn_ped_to_face_entity(iVar8, Global_34, 0, -1082130432, -1082130432, -1082130432);
								}
							}
						}
						if (func_66(1))
						{
							fVar7 = func_79(1);
							iVar8 = func_78(1);
							if (!func_311(1) && !func_172(1))
							{
								if (func_140(Global_34, iVar8, 1, 1) <= fVar7)
								{
									task_turn_ped_to_face_entity(iVar8, Global_34, 0, -1082130432, -1082130432, -1082130432);
								}
							}
						}
						bVar3 = true;
					}
					bVar4 = false;
					bVar5 = false;
				}
			}
			if (func_81(16) || !func_121(31))
			{
				if (!bVar3)
				{
					if (!func_306())
					{
						if (!is_string_null_or_empty(&(Global_1903136->f_364.f_12)))
						{
							func_312(&(Global_1903136->f_364.f_12), 10000, 0, 0, 0, 1);
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
						if (!func_306())
						{
							func_228(7, 1);
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
							if (!func_306())
							{
								func_228(7, 1);
							}
							bVar3 = true;
						}
					}
					bVar5 = false;
				}
			}
			if (vParam7.z)
			{
				if (func_142(0))
				{
					if (!bVar3)
					{
						if (!func_306())
						{
							func_228(16, 1);
						}
						bVar3 = true;
					}
				}
			}
			if (vParam19.z && bVar1)
			{
				if (func_142(1))
				{
					if (!vParam7.z)
					{
						if (!bVar3)
						{
							if (!func_306())
							{
								func_228(16, 1);
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
					func_61(0);
					func_313(0);
				}
			}
			if (!bVar5)
			{
				if (vParam19.z)
				{
					func_61(1);
					func_313(1);
				}
			}
			if (!bVar4 && !bVar5)
			{
				func_14(1);
				return;
			}
			func_14(5);
		case 5:
			func_314(1);
			if (func_315(0) == 6 && func_315(1) == 6)
			{
				func_14(1);
			}
			break;
	}
}

int func_84()
{
	if (func_81(2) || func_81(4))
	{
		func_303(2);
		func_303(4);
		return 1;
	}
	return 0;
}

bool func_85()
{
	return func_316(&Global_1940258, 8192);
}

bool func_86(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return Global_39.f_281.f_1[iParam0]->f_444;
}

void func_87(int iParam0, var uParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_39.f_281.f_1[iParam0]->f_444 = uParam1;
}

void func_88(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1903136)[iParam0]->f_41 = 0;
}

int func_89(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return (*Global_1903136)[iParam0]->f_40;
}

void func_90(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1903136)[iParam0]->f_40 = iParam1;
}

void func_91(int iParam0, float fParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_39.f_281.f_1[iParam0]->f_444.f_1 = fParam1;
}

void func_92(int iParam0)
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
	if (func_147(56))
	{
		func_148(56);
	}
	if (func_149(56))
	{
		func_150(56);
	}
	if (func_147(57))
	{
		func_148(57);
	}
	if (func_149(57))
	{
		func_150(57);
	}
	bVar1 = false;
	if (iParam0 == 0)
	{
		bVar1 = true;
	}
	else if ((iParam0 == 1 && func_74(0) == 0) && func_74(5) == 0)
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		func_141(iParam0, 1);
	}
	else
	{
		func_104(iParam0, 0);
	}
}

void func_93(int iParam0)
{
	if (!func_268(iParam0))
	{
		return;
	}
	bVar0 = false;
	if (func_66(iParam0))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		iVar1 = func_78(iParam0);
		if (!_0x88ad6cc10d8d35b2(iVar1))
		{
			set_entity_as_mission_entity(iVar1, true, true);
		}
		iVar2 = get_entity_model(iVar1);
		if (_0xaa9f048dcf69b6dc(iVar2))
		{
			if (!func_159(iVar2))
			{
				set_ped_model_is_suppressed(iVar2, false);
			}
		}
		if (func_249(iParam0, 4))
		{
			func_68(iParam0);
		}
		else if (func_249(iParam0, 8))
		{
			set_ped_keep_task(iVar1, true);
			task_smart_flee_ped(iVar1, Global_34, 500f, -1, 0, 1f, 0);
			set_ped_as_no_longer_needed(&iVar1);
		}
		else if (func_249(iParam0, 2))
		{
			set_ped_as_no_longer_needed(&iVar1);
		}
	}
	if (func_249(iParam0, 16))
	{
		func_105(iParam0);
	}
	func_260(iParam0, 0);
	func_136(iParam0);
	func_293(iParam0);
	func_317(iParam0, 2);
	func_317(iParam0, 4);
	func_317(iParam0, 8);
	func_317(iParam0, 16);
}

void func_94()
{
	Global_1903136->f_392 = 0;
	Global_1903136->f_392.f_1 = { 0f, 0f, 0f };
	Global_1903136->f_392.f_4 = 0f;
	Global_1903136->f_392.f_5 = 0;
	Global_1903136->f_392.f_6 = 0;
}

bool func_95(int iParam0)
{
	if (func_81(1024))
	{
		return false;
	}
	if (!func_121(42))
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
	if (func_318(iParam0))
	{
		return false;
	}
	if (func_319(iParam0))
	{
		return false;
	}
	if (func_320(iParam0))
	{
		return false;
	}
	if (func_321(iParam0))
	{
		return false;
	}
	iVar0 = get_entity_model(iParam0);
	if (func_322(iVar0))
	{
		return false;
	}
	if (func_323(iVar0))
	{
		return false;
	}
	bVar1 = false;
	if (is_ped_on_mount(Global_34))
	{
		if (get_mount(Global_34) == iParam0)
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
		if (iParam0 != func_324())
		{
			vVar2 = { get_entity_coords(iParam0, true, false) };
			func_94();
			func_325(iParam0);
			func_98(vVar2);
		}
		iVar5 = get_game_timer();
		iVar6 = func_326();
		if (iVar6 == 0)
		{
			func_327(iVar5);
			return false;
		}
		if (iVar6 + 2000 > iVar5)
		{
			return false;
		}
	}
	else
	{
		func_327(0);
	}
	if (func_328(iParam0, &uVar7, 100f))
	{
		return false;
	}
	iVar8 = player_id();
	if (func_329(iVar8, 1, 0, 1))
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
	if (!func_330(iParam0))
	{
		return false;
	}
	return true;
}

bool func_96()
{
	return Global_1903136->f_392.f_5;
}

Vector3 func_97()
{
	return Global_1903136->f_392.f_1;
}

void func_98(vector3 vParam0)
{
	Global_1903136->f_392.f_1 = { vParam0 };
}

float func_99()
{
	return Global_1903136->f_392.f_4;
}

void func_100(float fParam0)
{
	Global_1903136->f_392.f_4 = fParam0;
}

void func_101(int iParam0)
{
	Global_1903136->f_392.f_5 = iParam0;
}

int func_102(int iParam0)
{
	if (func_331(iParam0) > 0)
	{
		if (!func_332(iParam0))
		{
			return 0;
		}
		bVar0 = false;
		if (func_318(iParam0))
		{
			if (func_333(iParam0) == 6)
			{
				bVar0 = true;
			}
		}
		if (bVar0)
		{
			func_334(6, 1);
		}
		else
		{
			func_106(iParam0);
		}
		func_94();
		func_335();
		return 1;
	}
	else
	{
		if (!func_95(iParam0))
		{
			return 0;
		}
		func_336(iParam0, 0);
		func_94();
		func_335();
		return 1;
	}
	return 0;
}

int func_103(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return Global_39.f_281.f_1[iParam0]->f_398;
}

void func_104(int iParam0, bool bParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_337(iParam0);
	if (func_67(iParam0))
	{
		iVar0 = get_id_of_this_thread();
		if (func_134(iParam0) != iVar0)
		{
			return;
		}
	}
	if (!func_66(iParam0))
	{
		return;
	}
	iVar1 = func_78(iParam0);
	bVar2 = false;
	if (!is_entity_dead(iVar1))
	{
		bVar2 = true;
	}
	func_250(iParam0);
	func_338(iVar1);
	if (!_0x88ad6cc10d8d35b2(iVar1))
	{
		set_entity_as_mission_entity(iVar1, true, true);
	}
	if (func_255(iVar1))
	{
		_0x0348469daa17576c(iVar1);
	}
	if (bVar2)
	{
		task_smart_flee_ped(iVar1, Global_34, 500f, -1, 0, 1f, 0);
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
			if (!func_159(iVar4))
			{
				set_ped_model_is_suppressed(iVar4, false);
			}
		}
	}
	func_105(iParam0);
}

void func_105(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	StringCopy(Global_39.f_281.f_1[iParam0], "", 64);
	Global_39.f_281.f_1[iParam0]->f_8 = 0;
	Global_39.f_281.f_1[iParam0]->f_9 = 0;
	Global_39.f_281.f_1[iParam0]->f_10 = 0;
	Global_39.f_281.f_1[iParam0]->f_11 = 0;
	Global_39.f_281.f_1[iParam0]->f_12 = -1;
	Global_39.f_281.f_1[iParam0]->f_13 = -15;
	Global_39.f_281.f_1[iParam0]->f_14 = 0;
	func_339(&Var0);
	func_340(iParam0, Var0);
	func_341(&(Global_39.f_281.f_1[iParam0]->f_15));
	func_342(&(Global_39.f_281.f_1[iParam0]->f_382));
	func_343(&(Global_39.f_281.f_1[iParam0]->f_398));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_344(iVar2, Global_39.f_281.f_1[iParam0]->f_422[iVar2]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_345(iVar3, Global_39.f_281.f_1[iParam0]->f_431[iVar3]);
		iVar3++;
	}
	func_346(&(Global_39.f_281.f_1[iParam0]->f_444));
	func_347(&(Global_39.f_281.f_1[iParam0]->f_446));
	func_348(&(Global_39.f_281.f_1[iParam0]->f_449));
	Global_39.f_281.f_1[iParam0]->f_451 = { 0f, 0f, 0f };
	Global_39.f_281.f_1[iParam0]->f_454 = 0f;
	Global_39.f_281.f_1[iParam0]->f_455 = -1;
	Global_39.f_281.f_1[iParam0]->f_456 = -1;
	Global_39.f_281.f_1[iParam0]->f_457 = 0;
	Global_39.f_281.f_1[iParam0]->f_458 = 0;
	Global_39.f_281.f_1[iParam0]->f_459 = 0;
	(*Global_1903136)[iParam0] = 0;
	(*Global_1903136)[iParam0]->f_1 = 0;
	(*Global_1903136)[iParam0]->f_2 = 0;
	(*Global_1903136)[iParam0]->f_3 = 0;
	(*Global_1903136)[iParam0]->f_19 = { 0f, 0f, 0f };
	(*Global_1903136)[iParam0]->f_22 = 0f;
	(*Global_1903136)[iParam0]->f_23 = 0;
	(*Global_1903136)[iParam0]->f_24 = 0;
	if (does_blip_exist((*Global_1903136)[iParam0]->f_25))
	{
		remove_blip(&((*Global_1903136)[iParam0]->f_25));
	}
	(*Global_1903136)[iParam0]->f_25 = 0;
	if (does_blip_exist((*Global_1903136)[iParam0]->f_26))
	{
		remove_blip(&((*Global_1903136)[iParam0]->f_26));
	}
	(*Global_1903136)[iParam0]->f_26 = 0;
	(*Global_1903136)[iParam0]->f_27 = { 0f, 0f, 0f };
	(*Global_1903136)[iParam0]->f_30 = { 0f, 0f, 0f };
	(*Global_1903136)[iParam0]->f_33 = 0f;
	(*Global_1903136)[iParam0]->f_34 = 0;
	(*Global_1903136)[iParam0]->f_35 = 0;
	(*Global_1903136)[iParam0]->f_36 = 0;
	(*Global_1903136)[iParam0]->f_37 = { 0f, 0f, 0f };
	(*Global_1903136)[iParam0]->f_40 = 0;
	(*Global_1903136)[iParam0]->f_41 = 0;
	(*Global_1903136)[iParam0]->f_42 = -1;
}

void func_106(int iParam0)
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
	if (func_318(iParam0))
	{
		iVar0 = func_333(iParam0);
		func_250(iVar0);
	}
	func_250(1);
	if (func_66(1))
	{
		func_104(1, 0);
	}
	func_105(1);
	func_349(iParam0, 1, 0);
	func_153(1, 1);
	if (func_103(1) == 0)
	{
		func_350(1, 1);
	}
	uVar1 = _0x227b06324234fb09(player_id(), iParam0);
	func_335();
}

bool func_107(struct<5> Param0, var uParam5, var uParam6, var uParam7, bool bParam8)
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
		if (!is_ped_on_mount(Global_34))
		{
			return false;
		}
		*uParam7 = get_mount(Global_34);
	}
	if (!does_entity_exist(*uParam7))
	{
		return false;
	}
	if (is_entity_dead(*uParam7))
	{
		return false;
	}
	if (is_ped_injured(*uParam7))
	{
		return false;
	}
	if (is_ped_in_writhe(*uParam7))
	{
		return false;
	}
	if (func_318(*uParam7))
	{
		return false;
	}
	if (func_319(*uParam7))
	{
		return false;
	}
	if (func_351(*uParam7))
	{
		return false;
	}
	if (func_352(*uParam7))
	{
		return false;
	}
	if (func_321(*uParam7))
	{
		return false;
	}
	if (func_320(*uParam7))
	{
		return false;
	}
	if (func_353(*uParam7))
	{
		return false;
	}
	bVar0 = func_354();
	bVar1 = false;
	iVar2 = _0xf103823ffe72bb49(*uParam7);
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

void func_108()
{
	Global_1903136->f_402 = 0;
	Global_1903136->f_402.f_1 = 0;
}

void func_109(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	if (func_321(iParam0))
	{
		return;
	}
}

int func_110()
{
	return &Global_1904628;
}

void func_111()
{
	disable_control_action(0, 1287709438, false);
	func_355(0);
	Global_1940311->f_5 = 1;
}

void func_112()
{
	func_356(0);
	func_357(1);
}

void func_113()
{
	if (!func_358())
	{
		return;
	}
	iVar0 = func_359();
	iVar1 = func_360();
	if (!does_entity_exist(iVar0))
	{
		func_357(7);
		return;
	}
	if (is_entity_dead(iVar0))
	{
		func_357(7);
		return;
	}
	if (is_ped_injured(iVar0))
	{
		func_357(7);
		return;
	}
	if (is_ped_in_writhe(iVar0))
	{
		func_357(7);
		return;
	}
	if (!func_361(iVar1))
	{
		func_357(7);
		return;
	}
	func_357(2);
}

void func_114()
{
	iVar0 = func_359();
	if (!does_entity_exist(iVar0))
	{
		func_357(7);
		return;
	}
	if (is_entity_dead(iVar0))
	{
		func_357(7);
		return;
	}
	if (is_ped_injured(iVar0))
	{
		func_357(7);
		return;
	}
	if (is_ped_in_writhe(iVar0))
	{
		func_357(7);
		return;
	}
	iVar1 = _get_rider_of_mount(iVar0, false);
	if (iVar1 != 0)
	{
		if (iVar1 != Global_34)
		{
			func_357(7);
			return;
		}
	}
	if (_0xe4770da1b8ff4fd1(iVar0) != 0)
	{
		func_357(7);
		return;
	}
	if (!func_362())
	{
		func_357(7);
		return;
	}
	func_357(3);
}

void func_115()
{
	iVar0 = func_359();
	iVar1 = func_360();
	if (!does_entity_exist(iVar0))
	{
		func_357(7);
		return;
	}
	if (is_entity_dead(iVar0))
	{
		func_357(7);
		return;
	}
	if (is_ped_injured(iVar0))
	{
		func_357(7);
		return;
	}
	if (is_ped_in_writhe(iVar0))
	{
		func_357(7);
		return;
	}
	if (func_363(iVar0, iVar1))
	{
		func_364(get_game_timer());
		func_357(4);
	}
}

void func_116()
{
	iVar0 = func_359();
	iVar1 = func_360();
	if (!does_entity_exist(iVar0))
	{
		func_357(7);
		return;
	}
	if (is_entity_dead(iVar0))
	{
		func_357(7);
		return;
	}
	if (is_ped_injured(iVar0))
	{
		func_357(7);
		return;
	}
	if (is_ped_in_writhe(iVar0))
	{
		func_357(7);
		return;
	}
	bVar2 = false;
	if (_0x7fc84e85d98f063d(Global_34))
	{
		bVar2 = true;
	}
	else if (func_365() + 500 < get_game_timer())
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		iVar3 = get_game_timer();
		func_364(iVar3);
		func_366(iVar3);
		func_357(5);
		if (iVar1 == -1516555556)
		{
			func_367(iVar0);
			iVar4 = func_286(iVar0, 0);
			func_368(iVar4);
			func_369(0);
		}
		else
		{
			func_367(0);
			func_368(0);
			func_369(0);
		}
	}
}

void func_117()
{
	iVar0 = func_359();
	iVar1 = func_360();
	if (!does_entity_exist(iVar0))
	{
		func_357(7);
		return;
	}
	if (is_entity_dead(iVar0))
	{
		func_357(7);
		return;
	}
	if (is_ped_injured(iVar0))
	{
		func_357(7);
		return;
	}
	if (is_ped_in_writhe(iVar0))
	{
		func_357(7);
		return;
	}
	bVar2 = false;
	if (!_0x7fc84e85d98f063d(Global_34))
	{
		if (func_365() + 500 < get_game_timer())
		{
			bVar2 = true;
		}
	}
	if (has_anim_event_fired(Global_34, -1930620551))
	{
		func_370(1);
		bVar2 = true;
	}
	if (bVar2)
	{
		if (func_371())
		{
			if (func_372(iVar1, 1147021565))
			{
				func_373(iVar1, 1, 0, -1387038764);
			}
			func_374(iVar0, iVar1);
		}
		else
		{
			func_357(7);
			return;
		}
		func_364(get_game_timer());
		func_357(6);
	}
}

void func_118()
{
	bVar0 = false;
	if (!_0x7fc84e85d98f063d(Global_34))
	{
		if (func_365() + 500 < get_game_timer())
		{
			bVar0 = true;
		}
	}
	if (func_375())
	{
		bVar0 = true;
	}
	if (func_371())
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_357(7);
	}
}

void func_119()
{
	func_356(0);
	func_357(0);
	_0xd962f8579d702db5();
}

void func_120()
{
	iVar0 = func_376();
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0))
	{
		return;
	}
	iVar1 = get_player_index();
	iVar2 = get_player_ped(iVar1);
	if (!does_entity_exist(iVar2))
	{
		return;
	}
	if (is_entity_dead(iVar2))
	{
		return;
	}
	bVar3 = has_anim_event_fired(iVar2, 1120483657);
	iVar4 = get_game_timer();
	if (bVar3)
	{
		if (!func_377())
		{
			func_378(iVar4);
			func_369(1);
		}
	}
	if (!func_377())
	{
		return;
	}
	bVar5 = _0xf49f14462f0ae27c(iVar1) == iVar0;
	iVar11 = func_379();
	if (bVar5)
	{
		Var6 = { func_380(0, 1, 0, -1) };
		if (!func_381(&Var6, 0, 1))
		{
		}
		iVar10 = func_382(Var6, 0);
	}
	else
	{
		iVar10 = func_286(iVar0, 0);
	}
	iVar12 = (iVar4 - func_383());
	iVar12 = func_384(iVar12, 0, 3000);
	fVar13 = (to_float(iVar12) / to_float(3000));
	fVar13 = func_385(fVar13, 0f, 1f);
	fVar14 = func_296(to_float(iVar11), 0f, fVar13);
	iVar15 = floor(fVar14);
	bVar16 = false;
	if (bVar5)
	{
		if (iVar10 > 0)
		{
			func_386(iVar0, Var6, 0, iVar15);
			bVar16 = true;
		}
	}
	else if (iVar10 > 0)
	{
		func_387(iVar0, 0, iVar15);
		bVar16 = true;
	}
	if (bVar16)
	{
		_0xe29d8cd66553dbaa(iVar0);
	}
	if (func_286(iVar0, 0) == 0)
	{
		func_367(0);
		func_369(0);
		func_378(0);
	}
}

bool func_121(int iParam0)
{
	if (!func_388(iParam0))
	{
		return false;
	}
	return func_389(iParam0);
}

void func_122(int iParam0)
{
	iVar0 = func_158(iParam0);
	if (func_103(iParam0) >= get_default_max_attribute_rank(iVar0, 7))
	{
		return;
	}
	iVar1 = func_78(iParam0);
	fVar2 = get_entity_speed(iVar1);
	bVar3 = false;
	if (_get_rider_of_mount(iVar1, false) != Global_34)
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
		Global_1903136->f_303.f_2[iParam0]->f_1 = -1;
		Global_1903136->f_303.f_2[iParam0] = -1;
		return;
	}
	if (Global_1903136->f_303.f_2[iParam0]->f_2 >= 100f)
	{
		func_390(1, 100f);
		fVar5 = (Global_1903136->f_303.f_2[iParam0]->f_2 - 100f);
		Global_1903136->f_303.f_2[iParam0]->f_2 = fVar5;
	}
	fVar6 = _get_ped_stamina(iVar1);
	if (fVar6 < 1f)
	{
		Global_1903136->f_303.f_2[iParam0]->f_1 = -1;
		Global_1903136->f_303.f_2[iParam0] = -1;
		return;
	}
	if (fVar2 > 0.5f && fVar2 <= 4f)
	{
		if (&Global_1903136->f_303.f_2[iParam0] == -1)
		{
			Global_1903136->f_303.f_2[iParam0] = 0;
		}
	}
	if (fVar2 > 4f && fVar2 <= 6f)
	{
		if (&Global_1903136->f_303.f_2[iParam0] == -1 || &Global_1903136->f_303.f_2[iParam0] == 0)
		{
			Global_1903136->f_303.f_2[iParam0] = 1;
		}
	}
	if (fVar2 > 6f)
	{
		if ((&Global_1903136->f_303.f_2[iParam0] == -1 || &Global_1903136->f_303.f_2[iParam0] == 0) || &Global_1903136->f_303.f_2[iParam0] == 1)
		{
			Global_1903136->f_303.f_2[iParam0] = 2;
		}
	}
	if (fVar2 > 10f)
	{
		if (((&Global_1903136->f_303.f_2[iParam0] == -1 || &Global_1903136->f_303.f_2[iParam0] == 0) || &Global_1903136->f_303.f_2[iParam0] == 1) || &Global_1903136->f_303.f_2[iParam0] == 2)
		{
			Global_1903136->f_303.f_2[iParam0] = 3;
		}
	}
	if (&Global_1903136->f_303.f_2[iParam0] == -1)
	{
		return;
	}
	iVar7 = get_game_timer();
	if (Global_1903136->f_303.f_2[iParam0]->f_1 == -1)
	{
		Global_1903136->f_303.f_2[iParam0]->f_1 = iVar7;
		return;
	}
	if (Global_1903136->f_303.f_2[iParam0]->f_1 + 5000 < iVar7)
	{
		if (&Global_1903136->f_303.f_2[iParam0] == 0 || &Global_1903136->f_303.f_2[iParam0] == 1)
		{
			func_391(iParam0, 1);
		}
		else if (&Global_1903136->f_303.f_2[iParam0] == 2)
		{
			func_391(iParam0, 2);
		}
		else if (&Global_1903136->f_303.f_2[iParam0] == 3)
		{
			func_391(iParam0, 3);
		}
		Global_1903136->f_303.f_2[iParam0]->f_1 = -1;
		Global_1903136->f_303.f_2[iParam0] = -1;
	}
}

void func_123(int iParam0)
{
	iVar0 = func_158(iParam0);
	if (func_103(iParam0) >= get_default_max_attribute_rank(iVar0, 7))
	{
		return;
	}
	iVar1 = func_78(iParam0);
	fVar2 = get_entity_speed(iVar1);
	bVar3 = false;
	if (is_player_control_on(player_id()))
	{
		bVar3 = true;
	}
	if (((!_0xefc4303ddc6e60d3(Global_34) || _0xed1f514af4732258(Global_34) != iVar1) || fVar2 < 0.5f) || !bVar3)
	{
		Global_1903136->f_303.f_2[iParam0]->f_3 = -1;
		return;
	}
	if (Global_1903136->f_303.f_2[iParam0]->f_4 >= 20f)
	{
		func_390(4, 20f);
		fVar4 = (Global_1903136->f_303.f_2[iParam0]->f_4 - 20f);
		Global_1903136->f_303.f_2[iParam0]->f_4 = fVar4;
	}
	iVar5 = get_game_timer();
	if (Global_1903136->f_303.f_2[iParam0]->f_3 == -1)
	{
		Global_1903136->f_303.f_2[iParam0]->f_3 = iVar5;
		return;
	}
	if (Global_1903136->f_303.f_2[iParam0]->f_3 + 5000 < iVar5)
	{
		func_391(iParam0, 4);
		Global_1903136->f_303.f_2[iParam0]->f_3 = -1;
	}
}

void func_124(int iParam0)
{
	iVar0 = func_158(iParam0);
	if (func_103(iParam0) >= get_default_max_attribute_rank(iVar0, 7))
	{
		return;
	}
	iVar1 = func_78(iParam0);
	if (!does_entity_exist(iVar1))
	{
		return;
	}
	if (is_entity_dead(iVar1) || is_ped_injured(iVar1))
	{
		return;
	}
	bVar2 = _get_rider_of_mount(iVar1, false) == Global_34;
	if (!bVar2)
	{
		return;
	}
	iVar3 = _get_lassoed_entity(Global_34);
	if (!does_entity_exist(iVar3))
	{
		return;
	}
	if (decor_exist_on(iVar3, "bHasBeenLassoedFromHorse"))
	{
		return;
	}
	bVar4 = func_392(iVar3, Global_34);
	if (bVar4)
	{
	}
	decor_set_bool(iVar3, "bHasBeenLassoedFromHorse", true);
}

void func_125(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_39.f_281.f_1[iParam0]->f_451 = { vParam1 };
	Global_39.f_281.f_1[iParam0]->f_454 = uParam4;
}

struct<2> func_126(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

var func_127(var uParam0, var uParam1)
{
	return uParam0;
}

bool func_128(int iParam0, int iParam1)
{
	iVar0 = get_script_task_status(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

int func_129(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return (*Global_1903136)[iParam0]->f_42;
}

void func_130(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1903136)[iParam0]->f_42 = iParam1;
}

bool func_131()
{
	if (func_81(8192))
	{
		func_303(8192);
		return true;
	}
	return false;
}

bool func_132(int iParam0, int iParam1)
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

int func_133(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(iParam1))
	{
		return 0;
	}
	if (is_entity_dead(iParam1) || is_ped_injured(iParam1))
	{
		return 0;
	}
	task_go_to_whistle(iParam0, iParam1, 0);
	_0xff1e339ce40eaaaf(iParam0, -1);
	set_animal_tuning_bool_param(iParam0, 48, false);
	_0xf74e134f40192884(iParam0, 1);
	return 1;
}

int func_134(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (*Global_1903136)[iParam0]->f_3;
}

void func_135(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	if (!func_318(iParam0))
	{
		return;
	}
	iVar0 = func_333(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_393(iVar0);
	func_337(iVar0);
	iVar1 = get_id_of_this_thread();
	iVar2 = func_134(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_67(iVar0))
		{
			return;
		}
	}
	func_136(iVar0);
	set_ped_keep_task(iParam0, true);
	if (bParam1 && func_2() == -1)
	{
		if (!_0x88ad6cc10d8d35b2(iParam0))
		{
			set_entity_as_mission_entity(iParam0, true, true);
		}
	}
}

void func_136(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1903136)[iParam0]->f_2 = 0;
	(*Global_1903136)[iParam0]->f_3 = 0;
}

void func_137(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1903136)[iParam0]->f_36 = 0;
}

int func_138(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (*Global_1903136)[iParam0]->f_36;
}

void func_139(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1903136)[iParam0]->f_36 = iParam1;
}

float func_140(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_141(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_78(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0))
	{
	}
	iVar1 = get_player_index();
	if (is_player_dead(iVar1))
	{
		return;
	}
	func_250(iParam0);
	func_250(5);
	func_349(iVar0, 5, iParam1);
	func_153(5, 1);
	if (_0x46fa0ae18f4c7fa9(iVar1) == iVar0)
	{
		_0x8fbf9edb378ccb8c(iVar1, 0);
	}
	if (iVar0 == _get_saddle_horse_for_player(player_id()))
	{
		_0x6569f31a01b4c097(iVar0, 0, 1);
		_0x6569f31a01b4c097(iVar0, 1, 1);
		_decor_set_string(iVar0, "loot_long_custom_anim_data_set", "DEAD_HORSE_SADDLE_SWAP_LONG_LOOT_ANIM_DATA");
		func_169(5);
		func_166(0);
		func_167(get_entity_coords(iVar0, true, false));
	}
	if (iParam1 == 2)
	{
		set_ped_as_no_longer_needed(&iVar0);
	}
	func_279(iParam0);
	func_394(iParam0);
	func_105(iParam0);
	func_335();
}

bool func_142(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return (*Global_1903136)[iParam0]->f_34;
}

float func_143(int iParam0)
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

int func_144(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return (*Global_1903136)[iParam0]->f_35;
}

void func_145(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1903136)[iParam0]->f_34 = iParam1;
}

void func_146(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1903136)[iParam0]->f_35 = iParam1;
}

bool func_147(int iParam0)
{
	iVar0 = _0xc17f69e1418cd11f(1);
	if (iVar0 != 0)
	{
		return iVar0 == Global_1904651->f_33[iParam0]->f_1;
	}
	return false;
}

void func_148(int iParam0)
{
	if (!func_147(iParam0))
	{
		return;
	}
	func_395(1);
}

bool func_149(int iParam0)
{
	func_396(iParam0, &iVar0, &iVar1);
	iVar2 = Global_1904651[iVar0];
	return is_bit_set(iVar2, iVar1);
}

void func_150(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = Global_1904651[iVar1];
	clear_bit(&uVar3, iVar2);
	(*Global_1904651)[iVar1] = uVar3;
}

int func_151(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_39.f_281.f_1[iParam0]->f_11;
}

void func_152(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_39.f_281.f_1[iParam0]->f_11 = iParam1;
}

void func_153(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_39.f_281.f_1[iParam0]->f_14 = iParam1;
}

int func_154()
{
	return Global_39.f_281.f_3222;
}

void func_155(int iParam0)
{
	if (!func_388(iParam0))
	{
		return;
	}
	func_397(iParam0);
	func_398(iParam0);
}

bool func_156(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_17411.f_2565[iVar1]), iVar2);
}

void func_157(int iParam0)
{
	Global_39.f_281.f_3245.f_4 = iParam0;
}

int func_158(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_39.f_281.f_1[iParam0]->f_9;
}

bool func_159(int iParam0)
{
	if (func_399(iParam0))
	{
		return true;
	}
	return false;
}

void func_160(int iParam0)
{
	if (func_74(iParam0) == 0)
	{
		if (func_400(iParam0))
		{
			func_401(iParam0);
		}
		return;
	}
	if (!func_400(iParam0))
	{
		iVar0 = func_158(iParam0);
		iVar1 = func_402(iVar0);
		func_403(iParam0, iVar1);
	}
	Var2.f_9 = -1591664384;
	Var2.f_14 = func_158(iParam0);
	Var2.f_15 = func_404(iParam0);
	Var2.f_16 = { func_245(iParam0) };
	Var2.f_24 = Var2.f_24;
	Var2.f_26 = floor(func_405(iParam0));
	Var2.f_25 = floor(func_294(iParam0));
	Var2.f_27 = func_406(iParam0, 0);
	Var2.f_28 = func_406(iParam0, 1);
	func_407(iParam0, &Var2);
}

bool func_161()
{
	iVar0 = func_162();
	if (does_entity_exist(iVar0))
	{
		return true;
	}
	return false;
}

int func_162()
{
	return Global_1903136->f_379;
}

int func_163(int iParam0, int iParam1)
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

int func_164()
{
	return Global_39.f_281.f_3222.f_1;
}

bool func_165(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915715->f_20638;
	}
	return (Global_1915715->f_20638 || Global_1915715->f_22504.f_1);
}

void func_166(int iParam0)
{
	Global_39.f_281.f_3222.f_1 = iParam0;
}

void func_167(vector3 vParam0)
{
	Global_39.f_281.f_3222.f_19 = { vParam0 };
}

Vector3 func_168()
{
	return Global_39.f_281.f_3222.f_19;
}

void func_169(int iParam0)
{
	Global_39.f_281.f_3222 = iParam0;
}

int func_170(vector3 vParam0, float fParam3, bool bParam4)
{
	if (func_161())
	{
		func_408();
		func_409();
	}
	iVar0 = func_69();
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
	func_410(iVar1);
	set_entity_as_mission_entity(iVar1, true, true);
	set_entity_heading(iVar1, fParam3);
	if (bParam4)
	{
		_0x9587913b9e772d29(iVar1, 0);
	}
	task_carriable(iVar1, 822715387, 0, 0, 0);
	return 1;
}

void func_171()
{
	Global_1903136->f_423 = 0;
	Global_1903136->f_423.f_1 = 0;
	Global_1903136->f_423.f_2 = 0;
}

bool func_172(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_255(Global_1903136[iParam0]))
	{
		return true;
	}
	return false;
}

bool func_173(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return Global_39.f_281.f_1[iParam0]->f_459;
}

bool func_174()
{
	return Global_1903136->f_423.f_1;
}

var func_175()
{
	return Global_1903136->f_423;
}

void func_176(int iParam0)
{
	Global_1903136->f_423 = iParam0;
}

void func_177(int iParam0)
{
	Global_1903136->f_423.f_1 = iParam0;
}

bool func_178(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (iParam1 != -1)
	{
		if (_does_volume_exist((*Global_1887339)[iParam1]->f_5))
		{
			return is_entity_in_volume(iParam0, (*Global_1887339)[iParam1]->f_5, true, 0);
		}
		else
		{
			return false;
		}
	}
	iVar1 = 0;
	while (iVar1 < Global_1893587->f_161)
	{
		iVar0 = &Global_1893587->f_10[iVar1];
		if (!_does_volume_exist((*Global_1887339)[iVar0]->f_5))
		{
		}
		else if (is_entity_in_volume(iParam0, (*Global_1887339)[iVar0]->f_5, true, 0))
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

var func_179()
{
	return Global_1903136->f_423.f_2;
}

void func_180(int iParam0)
{
	Global_1903136->f_423.f_2 = iParam0;
}

bool func_181()
{
	return Global_1893587 & 2 != 0;
}

bool func_182()
{
	if (!does_entity_exist(Global_34))
	{
		return false;
	}
	if (is_entity_dead(Global_34) || is_ped_injured(Global_34))
	{
	}
	if (get_ped_config_flag(Global_34, 440, true))
	{
		return false;
	}
	return true;
}

void func_183(bool bParam0)
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

bool func_184()
{
	if (!does_entity_exist(Global_34))
	{
		return false;
	}
	if (is_entity_dead(Global_34) || is_ped_injured(Global_34))
	{
	}
	if (get_ped_config_flag(Global_34, 439, true))
	{
		return false;
	}
	return true;
}

void func_185(bool bParam0)
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

bool func_186()
{
	if (!does_entity_exist(Global_34))
	{
		return false;
	}
	if (is_entity_dead(Global_34) || is_ped_injured(Global_34))
	{
	}
	if (get_ped_config_flag(Global_34, 438, true))
	{
		return false;
	}
	return true;
}

void func_187(bool bParam0)
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

bool func_188(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if ((*Global_1903136)[iParam0]->f_41 == 0)
	{
		return false;
	}
	return true;
}

void func_189(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1903136)[iParam0]->f_41 = iParam1;
}

int func_190(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (*Global_1903136)[iParam0]->f_41;
}

Vector3 func_191(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f, 0f, 0f;
	}
	return (*Global_1903136)[iParam0]->f_27;
}

bool func_192(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

Vector3 func_193(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f, 0f, 0f;
	}
	return (*Global_1903136)[iParam0]->f_30;
}

float func_194(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return (*Global_1903136)[iParam0]->f_33;
}

void func_195(int iParam0, vector3 vParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1903136)[iParam0]->f_30 = { vParam1 };
}

void func_196(int iParam0, float fParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1903136)[iParam0]->f_33 = fParam1;
}

void func_197(struct<7> Param0)
{
	if (!Param0.f_5)
	{
		return;
	}
	if (func_156(34))
	{
		return;
	}
	iVar0 = get_entity_model(Param0.f_6);
	if (func_322(iVar0) || func_323(iVar0))
	{
		return;
	}
	if (!is_ped_sprinting(Param0.f_6))
	{
		return;
	}
	if (is_ped_swimming(Global_34))
	{
		return;
	}
	if (is_ped_swimming(Param0.f_6))
	{
		return;
	}
	if (func_229())
	{
		func_228(34, 0);
	}
}

void func_198(struct<7> Param0)
{
	if (!Param0.f_5)
	{
		return;
	}
	if (func_411() >= 3)
	{
		return;
	}
	if (func_149(36) || func_147(36))
	{
		return;
	}
	iVar0 = get_game_timer();
	iVar1 = func_412();
	if (iVar1 > 0)
	{
		if (iVar1 + 5000 < iVar0)
		{
			func_413();
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
	if (is_ped_swimming(Global_34))
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
	if (func_149(34))
	{
		func_150(34);
	}
	if (func_147(34))
	{
		func_148(34);
	}
	if (func_149(35))
	{
		func_150(35);
	}
	if (func_147(35))
	{
		func_148(35);
	}
	if (func_229())
	{
		func_228(36, 1);
		func_414();
		func_415(get_game_timer());
	}
}

void func_199(struct<7> Param0, struct<11> Param7, var uParam18)
{
	if (!Param7.f_2)
	{
		return;
	}
	if (!Param0.f_5)
	{
		return;
	}
	if (func_156(45))
	{
		return;
	}
	bVar0 = false;
	if ((func_121(32) && func_121(33)) && func_121(34))
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		return;
	}
	if (!func_318(Param0.f_6))
	{
		return;
	}
	if (!Param7.f_10)
	{
		return;
	}
	if (func_103(7) == 0)
	{
		return;
	}
	if (func_229())
	{
		func_228(45, 0);
	}
}

void func_200()
{
	if (!func_416())
	{
		return;
	}
	iVar0 = get_game_timer();
	if (func_417() < iVar0)
	{
		func_228(59, 0);
		func_418(0);
		func_419();
	}
}

void func_201(struct<4> Param0, var uParam4, var uParam5, var uParam6, vector3 vParam7, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, vector3 vParam19, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
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
	if (!func_66(iVar12))
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
		if (func_147(56))
		{
			func_148(56);
		}
		if (func_149(56))
		{
			func_150(56);
		}
		if (func_147(57))
		{
			func_148(57);
		}
		if (func_149(57))
		{
			func_150(57);
		}
		return;
	}
	if (_0x3f8387db1b9f31b7(Var0, 0) && !func_420())
	{
		if (!func_156(57) && !func_156(58))
		{
			if (func_147(56))
			{
				func_148(56);
			}
			if (func_149(56))
			{
				func_150(56);
			}
			if (func_229())
			{
				if (func_421(-1795542128))
				{
					func_228(57, 0);
				}
				else
				{
					func_228(58, 0);
				}
			}
		}
	}
}

void func_202(struct<4> Param0, var uParam4, var uParam5, var uParam6)
{
	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	iVar0 = func_422();
	bVar1 = false;
	iVar2 = 0;
	if (does_entity_exist(iVar0))
	{
		bVar1 = true;
		iVar2 = _0x454ad4da6c41b5bd(iVar0);
	}
	iVar3 = func_423();
	switch (iVar3)
	{
		case 0:
			func_424(1);
		case 1:
			if (bVar1)
			{
				func_425(iVar0);
				func_424(2);
			}
			break;
		case 2:
			switch (iVar2)
			{
				case 1:
					func_424(3);
					break;
				case 2:
				case 3:
					func_424(5);
					break;
				case 7:
				case 8:
				case 9:
					func_424(7);
					break;
				case 4:
				case 5:
					func_424(9);
					break;
				case 6:
					func_424(11);
					break;
				default:
					if (!bVar1)
					{
						func_424(11);
					}
					break;
			}
			break;
		case 3:
			func_426();
			if (func_427(iVar0))
			{
				if (func_229())
				{
					func_228(48, 1);
				}
			}
			else if (func_229())
			{
				func_228(47, 1);
			}
			func_424(4);
			break;
		case 4:
			switch (iVar2)
			{
				case 1:
					if (func_147(47))
					{
						if (func_427(iVar0))
						{
							func_148(47);
							func_424(3);
						}
					}
					if (!bVar1)
					{
						func_424(11);
					}
					break;
				case 2:
				case 3:
					func_424(5);
					break;
				case 7:
				case 8:
				case 9:
					func_424(7);
					break;
				case 4:
				case 5:
					func_424(9);
					break;
				case 6:
					func_424(11);
					break;
				default:
					if (!bVar1)
					{
						func_424(11);
					}
					break;
			}
			break;
		case 5:
			func_426();
			if (func_229())
			{
				func_228(49, 1);
			}
			func_424(6);
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
					func_424(7);
					break;
				case 4:
				case 5:
					func_424(9);
					break;
				case 6:
					func_424(11);
					break;
				default:
					if (!bVar1)
					{
						func_424(11);
					}
					break;
			}
			break;
		case 7:
			func_426();
			if (func_229())
			{
				func_228(50, 1);
			}
			func_428(get_game_timer());
			func_424(8);
			break;
		case 8:
			if (func_429() + 5000 < get_game_timer())
			{
				func_424(6);
			}
			break;
		case 9:
			func_426();
			if (func_229())
			{
				func_228(51, 1);
			}
			func_424(10);
			break;
		case 10:
			switch (iVar2)
			{
				case 2:
				case 3:
					func_424(5);
					break;
				case 7:
				case 8:
				case 9:
					func_424(7);
					break;
				case 4:
				case 5:
					break;
				case 6:
					func_424(11);
					break;
				default:
					if (!bVar1)
					{
						func_424(11);
					}
					break;
			}
			break;
		case 11:
			func_430();
			func_426();
			func_424(0);
			break;
	}
}

void func_203(struct<6> Param0, var uParam6, struct<11> Param7, var uParam18, struct<11> Param19, var uParam30)
{
	if (!func_431())
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
	iVar13 = func_406(iVar12, 0);
	bVar14 = false;
	iVar15 = -1;
	if (!bVar14)
	{
		if (iVar13 > 50)
		{
			if (func_432() < 3)
			{
				iVar15 = 26;
				bVar14 = true;
			}
		}
	}
	bVar16 = false;
	if (func_433() + 2500 < get_game_timer())
	{
		bVar16 = true;
	}
	if (bVar16)
	{
		if (!bVar14)
		{
			func_434(0);
			func_435();
			return;
		}
	}
	if (!bVar16)
	{
		return;
	}
	if (!func_229())
	{
		return;
	}
	func_228(iVar15, 1);
	func_436(get_game_timer());
	switch (iVar15)
	{
		case 26:
			func_437();
			break;
		default:
			break;
	}
	func_434(0);
	func_435();
}

void func_204(struct<6> Param0, var uParam6, struct<11> Param7, var uParam18, struct<11> Param19, var uParam30)
{
	if (!func_438())
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
	iVar13 = func_439(iVar12, 0);
	iVar14 = func_439(iVar12, 1);
	bVar15 = false;
	iVar16 = -1;
	if (!bVar15)
	{
		if (func_440(32) < 3)
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
			if (func_440(30) < 3)
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
			if (func_440(31) < 3)
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
			if (func_440(28) < 1)
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
			if (func_440(29) < 1)
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
			if (func_440(33) < 3)
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
	if (func_441() + 2500 < get_game_timer())
	{
		bVar17 = true;
	}
	if (bVar17)
	{
		if (!bVar15)
		{
			func_442(0);
			func_443();
			return;
		}
	}
	if (!bVar17)
	{
		return;
	}
	if (!func_229())
	{
		return;
	}
	func_228(iVar16, 1);
	func_436(get_game_timer());
	func_442(0);
	func_443();
}

void func_205()
{
	if (func_444() == 0)
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
		else if (func_147(&(iVar0[iVar9])))
		{
			bVar8 = true;
		}
		iVar9++;
	}
	if (bVar8)
	{
		if (!func_445())
		{
			bVar10 = false;
			bVar11 = false;
			bVar12 = false;
			bVar13 = false;
			if (func_147(32))
			{
				bVar12 = true;
				bVar13 = true;
			}
			if (func_147(30))
			{
				bVar12 = true;
			}
			if (func_147(31))
			{
				bVar13 = true;
			}
			if (func_147(28))
			{
				bVar12 = true;
			}
			if (func_147(29))
			{
				bVar13 = true;
			}
			if (func_147(43))
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
			func_446(1);
		}
	}
	else if (func_445())
	{
		_uitutorial_set_rpg_icon_visibility(6, 0);
		_uitutorial_set_rpg_icon_visibility(8, 0);
		_uitutorial_set_rpg_icon_visibility(7, 0);
		_uitutorial_set_rpg_icon_visibility(9, 0);
		func_446(0);
		func_447();
	}
}

void func_206(struct<5> Param0, var uParam5, var uParam6)
{
	if (!func_448())
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
	if (func_156(55))
	{
		return;
	}
	if (!func_229())
	{
		return;
	}
	func_157(0);
	if (func_74(0) == 1)
	{
		return;
	}
	func_228(55, 0);
	iVar0 = func_449(9, 1, 1, 0);
	if (iVar0 != 86)
	{
		iVar0 = func_449(9, 1, 1, 1);
	}
	if (!func_450(iVar0))
	{
		return;
	}
	vVar1 = { func_451(iVar0) };
	if (func_192(vVar1))
	{
		return;
	}
	iVar4 = _blip_add_for_coord(168093330, vVar1);
	set_blip_sprite(iVar4, 1938782895, true);
	_blip_set_modifier(iVar4, 580546400);
	_blip_set_modifier(iVar4, 847579139);
	func_452(&iVar4);
}

void func_207()
{
	iVar0 = func_453();
	if (!does_blip_exist(iVar0))
	{
		return;
	}
	if (func_149(55))
	{
		return;
	}
	if (func_147(55))
	{
		return;
	}
	remove_blip(&iVar0);
}

void func_208(struct<4> Param0, var uParam4, var uParam5, var uParam6)
{
	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (func_298() && !func_121(41))
	{
		return;
	}
	if (!func_454())
	{
		return;
	}
	if (func_156(65))
	{
		return;
	}
	if (func_455(Global_34))
	{
		return;
	}
	if (func_456())
	{
		return;
	}
	if (!func_229())
	{
		return;
	}
	func_228(65, 0);
}

void func_209(struct<4> Param0, var uParam4, var uParam5, var uParam6)
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
	if (func_298() && !func_121(41))
	{
		return;
	}
	if (func_298() && func_305() == 8)
	{
		return;
	}
	if (!func_161())
	{
		return;
	}
	if (func_457(7))
	{
		func_458();
		return;
	}
	if (func_164() == 3)
	{
		return;
	}
	if (func_455(Global_34))
	{
		return;
	}
	iVar0 = get_game_timer();
	iVar1 = func_459();
	if (iVar1 == 0)
	{
		func_460(get_game_timer());
		return;
	}
	if (iVar1 + 10000 > iVar0)
	{
		return;
	}
	if (func_140(Global_34, func_162(), 1, 1) < 100f)
	{
		return;
	}
	if (func_156(64))
	{
		if ((iVar1 + 600000) > iVar0)
		{
			return;
		}
	}
	func_228(64, 1);
	func_460(get_game_timer());
}

void func_210(struct<7> Param0, int iParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18)
{
	if (!Param0.f_5)
	{
		return;
	}
	iVar0 = func_440(66);
	if (iVar0 >= 3)
	{
		return;
	}
	iVar1 = get_entity_model(Param0.f_6);
	if (func_322(iVar1) || func_323(iVar1))
	{
		return;
	}
	if (!is_ped_sprinting(Param0.f_6))
	{
		return;
	}
	if (is_ped_swimming(Global_34))
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
	if (func_461() == iParam7)
	{
		return;
	}
	if (func_229())
	{
		func_462(iParam7);
		func_228(66, 0);
	}
}

void func_211(struct<4> Param0, var uParam4, var uParam5, var uParam6, struct<11> Param7, var uParam18, struct<11> Param19, var uParam30)
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
		if (func_463())
		{
			func_464(0);
		}
		return;
	}
	if (func_465() < 2)
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
	if (func_103(iVar0) >= 2)
	{
		return;
	}
	iVar1 = func_440(46);
	if (iVar1 >= 1)
	{
		return;
	}
	if (func_463())
	{
		return;
	}
	func_464(1);
	func_466();
	if (func_467() <= 1)
	{
		return;
	}
	if (!func_229())
	{
		return;
	}
	func_228(46, 1);
}

void func_212(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	if (!Param0.f_1)
	{
		return;
	}
	if (!func_455(Global_34))
	{
		return;
	}
	if (!_0x3ee1f7a8c32f24e1(player_id(), &iVar0, 1, 0))
	{
		return;
	}
	if (!func_468(iVar0))
	{
		return;
	}
	iVar1 = get_ped_index_from_entity_index(iVar0);
	if (func_469(iVar1))
	{
		return;
	}
	if (func_229())
	{
		func_228(67, 1);
	}
}

bool func_213(struct<2> Param0)
{
	if (!func_470(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_471(Param0))
	{
		return false;
	}
	return true;
}

int func_214()
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
	if (is_ped_on_mount(Global_34))
	{
		if (get_mount(Global_34) == iVar0)
		{
			iVar1 = 1;
		}
	}
	iVar2 = 0;
	iVar3 = _0xaffd0ccf31f469b8(iVar0);
	if (func_263(iVar3, 0))
	{
		iVar2 = 1;
	}
	bVar4 = false;
	if (func_181() || func_354())
	{
		bVar4 = true;
	}
	if (iVar1 || iVar2)
	{
		if (bVar4)
		{
			return 1;
		}
	}
	return 0;
}

bool func_215(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return true;
}

void func_216(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_5 = 0;
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

int func_217(int iParam0)
{
	if (func_472())
	{
		if (Global_1915715->f_20241 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_218(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = network_player_id_to_int();
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	return ((*Global_1291106)[iParam1]->f_1 && iParam0) != 0;
}

bool func_219()
{
	return func_473() == 4;
}

int func_220(int iParam0)
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

int func_221(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (_0x9a100f1cf4546629(iParam0) || _0xc346a546612c49a9(iParam0))
	{
		iVar0 = func_474(&iParam0);
		if (!func_263(iVar0, 0))
		{
			iVar0 = func_475(iParam0);
		}
	}
	else
	{
		iVar0 = func_475(iParam0);
	}
	return iVar0;
}

int func_222(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_476(_inventory_get_ped_inventory_id(iParam0), iParam1, iParam2, bParam3, iParam4);
}

bool func_223(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = 1;
	switch (iParam3)
	{
		case 0:
			break;
		case 1:
		case 2:
			iVar0 = 2;
			break;
	}
	if (func_477(_inventory_get_ped_inventory_id(iParam0), iParam2) < iVar0)
	{
		return true;
	}
	return false;
}

int func_224(int iParam0, int iParam1, int iParam2)
{
	if (!func_263(iParam1, 0))
	{
		return 0;
	}
	Var0 = { func_478(iParam0) };
	Var5 = { func_479(iParam0, iParam1, Var0, Var0.f_4) };
	if (_0xcb5d11f9508a928d(iParam0, &Var5, &Var0, iParam1, Var0.f_4, iParam2, 752097756))
	{
		return 1;
	}
	return 0;
}

void func_225(var uParam0, var uParam1)
{
	_copy_memory(uParam1, uParam0, 96);
}

int func_226(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	iVar1 = _get_ped_damage(iVar0);
	iVar2 = func_480(iVar0);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	iVar3 = iVar1;
	iVar4 = iVar2;
	if (iVar4 < iVar3)
	{
		iVar1 = iVar4;
	}
	if (!_0x9e7738b291706746(&iVar5, iVar0, iVar1))
	{
		return 0;
	}
	if (iVar5 != 0)
	{
		if (_is_metaped_using_component(iVar0, 43391475) || _0x8de41e9902e85756(iVar0))
		{
			iVar6 = func_481(iVar5);
			return iVar6;
		}
		return iVar5;
	}
	switch (iVar1)
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

bool func_227(int iParam0, int iParam1)
{
	if (iParam1 == 119)
	{
		return func_482(iParam0);
	}
	return func_483(iParam0, iParam1);
}

void func_228(int iParam0, bool bParam1)
{
	func_396(iParam0, &iVar0, &iVar1);
	if (!func_484(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_485(iVar0, iVar1);
}

bool func_229()
{
	if (!func_486() && func_487(1))
	{
		return true;
	}
	return false;
}

bool func_230(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return false;
	}
	return true;
}

bool func_231(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return Global_39.f_281.f_1[iParam0]->f_446;
}

bool func_232(int iParam0)
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

int func_233(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return Global_39.f_281.f_1[iParam0]->f_446.f_1;
}

void func_234(int iParam0, int iParam1)
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

int func_235(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return -15;
	}
	if (iParam0 >= 7)
	{
		return -15;
	}
	return Global_39.f_281.f_1[iParam0]->f_446.f_2;
}

void func_236(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_488(func_242(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_237(int iParam0)
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

void func_238(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_347(&(Global_39.f_281.f_1[iParam0]->f_446));
}

int func_239(int iParam0)
{
	if (!func_232(iParam0))
	{
		return -1;
	}
	iVar0 = decor_get_int(iParam0, "StableOwnedHorse");
	return iVar0;
}

void func_240(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_39.f_281.f_1[iParam0]->f_446 = iParam1;
}

void func_241(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_39.f_281.f_1[iParam0]->f_446.f_1 = iParam1;
}

int func_242()
{
	return &Global_1902818;
}

void func_243(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_39.f_281.f_1[iParam0]->f_446.f_2 = iParam1;
}

bool func_244(int iParam0)
{
	switch (iParam0)
	{
		case -2063289686:
		case 549900435:
			return true;
	}
	return false;
}

struct<8> func_245(int iParam0)
{
	StringCopy(&cVar0, "", 64);
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return cVar0;
	}
	if (iParam0 >= 7)
	{
		return cVar0;
	}
	return *Global_39.f_281.f_1[iParam0];
}

char* func_246(int iParam0)
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

void func_247(int iParam0, struct<8> Param1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	*Global_39.f_281.f_1[iParam0] = { Param1 };
}

void func_248(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = Global_1903136[iParam0];
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
	}
	sVar1 = func_489(func_245(iParam0));
	if (!is_string_null_or_empty(sVar1))
	{
		_set_ped_prompt_name(iVar0, sVar1);
	}
}

bool func_249(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return ((*Global_1903136)[iParam0]->f_23 && iParam1) != 0;
}

void func_250(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (does_blip_exist((*Global_1903136)[iParam0]->f_25))
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		remove_blip(&((*Global_1903136)[iParam0]->f_25));
	}
	(*Global_1903136)[iParam0]->f_24 = 0;
}

void func_251(var uParam0)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_491(func_490(255), 109029619));
	}
	else if (func_492())
	{
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_493();
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

void func_252(var uParam0, bool bParam1)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_491(func_490(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_492())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_493())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (compare_strings(sVar0, "", false, -1) != 0)
		{
			set_blip_name_from_text_file(*uParam0, sVar0);
		}
	}
}

void func_253(int iParam0)
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

void func_254(int iParam0)
{
	_set_blip_flash_style(iParam0, 673950256);
	_set_blip_flash_style(iParam0, 561559387);
	_set_blip_flash_style(iParam0, -201249929);
}

bool func_255(int iParam0)
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

void func_256(int iParam0, int iParam1)
{
	if (is_ped_injured(Global_34))
	{
		return;
	}
	if (!func_66(iParam0))
	{
		return;
	}
	iVar0 = func_78(iParam0);
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
	if (!func_121(39))
	{
		if (func_249(iParam0, 128))
		{
			return;
		}
		if (func_494(iParam1, &uVar1))
		{
			iVar2 = func_495(iParam1);
			if (func_496(iVar0, iParam1) != iVar2)
			{
				func_497(iVar0, iParam1, iVar2);
			}
		}
		return;
	}
	if (func_320(iVar0))
	{
		return;
	}
	iVar3 = get_game_timer();
	fVar4 = func_498(iParam0, iParam1);
	if (fVar4 >= 30f)
	{
		func_499(iParam0, iParam1, iVar3);
		return;
	}
	iVar5 = func_439(iParam0, iParam1);
	func_500(iVar0, iParam0, iParam1);
	if (func_501(iParam0, iParam1) > 0f)
	{
		func_502(iParam0, iParam1);
	}
	else
	{
		func_503(iVar0, iParam0, iParam1);
		iVar6 = func_439(iParam0, iParam1);
		func_504(iParam0, iParam1, iVar5, iVar6);
	}
	func_499(iParam0, iParam1, iVar3);
}

void func_257(int iParam0, int iParam1)
{
	if (is_ped_injured(Global_34))
	{
		return;
	}
	if (!func_66(iParam0))
	{
		return;
	}
	iVar0 = func_78(iParam0);
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
	if (!func_121(40))
	{
		if (func_505(iParam1, &iVar1))
		{
			iVar2 = func_506(iParam1);
			set_attribute_base_rank(iVar0, iVar1, iVar2);
		}
		return;
	}
	if (func_320(iVar0))
	{
		return;
	}
	iVar3 = get_game_timer();
	fVar4 = func_507(iParam0, iParam1);
	if (fVar4 >= 30f)
	{
		func_508(iParam0, iParam1, iVar3);
		return;
	}
	iVar5 = func_406(iParam0, iParam1);
	func_509(iVar0, iParam0, iParam1);
	if (func_510(iParam0, iParam1) > 0f)
	{
		func_511(iParam0, iParam1);
	}
	else
	{
		func_512(iVar0, iParam0, iParam1);
		iVar6 = func_406(iParam0, iParam1);
		func_513(iParam0, iParam1, iVar5, iVar6);
	}
	func_508(iParam0, iParam1, iVar3);
}

void func_258(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 <= -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_66(iParam0))
	{
		return;
	}
	iVar0 = func_78(iParam0);
	fVar1 = 1f;
	fVar2 = 1f;
	fVar3 = 0f;
	fVar4 = 1f;
	fVar5 = 1f;
	fVar6 = 0f;
	iVar7 = 0;
	iVar8 = 0;
	if (iParam0 == func_154())
	{
		Var9 = { func_284() };
		iVar17 = Var9.f_1;
		if (func_263(iVar17, 0))
		{
			Var18.f_1 = 20;
			_item_database_fillout_item_effects_ids(iVar17, &Var18);
			iVar47 = 0;
			while (iVar47 < Var18)
			{
				_item_database_fillout_item_effects_id_info(&(Var18.f_1[iVar47]), &Var40);
				switch (Var40.f_1)
				{
					case 2086291460:
						iVar8 = (iVar8 + floor((IntToFloat(Var40.f_2) * 0.01f)));
						break;
					case -1620444701:
						iVar7 = (iVar7 + floor((IntToFloat(Var40.f_2) * 0.01f)));
						break;
					case -225223329:
						fVar3 = (fVar3 + (Var40.f_5 * 0.01f));
						break;
					case 1167068375:
						fVar6 = (fVar6 + (Var40.f_5 * 0.01f));
						break;
					case -845587290:
						fVar5 = (fVar5 - (Var40.f_5 * 0.01f));
						break;
					case 1605773431:
						fVar4 = (fVar4 + (Var40.f_5 * 0.01f));
						break;
				}
				iVar47++;
			}
		}
		iVar17 = Var9.f_3;
		if (func_263(iVar17, 0))
		{
			Var48.f_1 = 20;
			_item_database_fillout_item_effects_ids(iVar17, &Var48);
			iVar77 = 0;
			while (iVar77 < Var48)
			{
				_item_database_fillout_item_effects_id_info(&(Var48.f_1[iVar77]), &Var70);
				switch (Var70.f_1)
				{
					case 2086291460:
						iVar8 = (iVar8 + floor((IntToFloat(Var70.f_2) * 0.01f)));
						break;
					case -1620444701:
						iVar7 = (iVar7 + floor((IntToFloat(Var70.f_2) * 0.01f)));
						break;
					case -225223329:
						fVar3 = (fVar3 + (Var70.f_5 * 0.01f));
						break;
					case 1167068375:
						fVar6 = (fVar6 + (Var70.f_5 * 0.01f));
						break;
					case -845587290:
						fVar5 = (fVar5 - (Var70.f_5 * 0.01f));
						break;
					case 1605773431:
						fVar4 = (fVar4 + (Var70.f_5 * 0.01f));
						break;
				}
				iVar77++;
			}
		}
	}
	if (func_514())
	{
		iVar7++;
	}
	func_515(0, fVar3);
	func_515(1, fVar6);
	iVar78 = func_516();
	iVar79 = get_attribute_bonus_rank(iVar0, iVar78);
	if (iVar79 != iVar7)
	{
		set_attribute_bonus_rank(iVar0, iVar78, iVar7);
	}
	iVar80 = func_517();
	iVar81 = get_attribute_bonus_rank(iVar0, iVar80);
	if (iVar81 != iVar8)
	{
		set_attribute_bonus_rank(iVar0, iVar80, iVar8);
	}
	fVar82 = _0x95b8e397b8f4360f(iVar0);
	if (fVar82 != fVar1)
	{
		_0xde1b1907a83a1550(iVar0, fVar1);
	}
	fVar2 = fVar2;
	fVar83 = _0xe7687eb2f634abf0(iVar0);
	if (fVar83 != fVar4)
	{
		_0x345c9f993a8ab4a4(iVar0, fVar4);
	}
	fVar84 = _0x825f6dd559a0895b(iVar0);
	if (fVar84 != fVar5)
	{
		_0xef5a3d2285d8924b(iVar0, fVar5);
	}
}

void func_259(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_78(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_220(iVar6);
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

void func_260(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1903136)[iParam0] = iParam1;
}

struct<4> func_261(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_518(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_262(1328661203, func_519(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_262(1328661203, func_519(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_262(1328661203, func_519(), -1591664384, bParam0);
}

struct<4> func_262(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_263(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_518(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_263(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_264(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_263(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_520(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_262(iParam0, Param1, iParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_518(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_518(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

void func_265(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

bool func_266(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_263(iParam0, 0))
	{
		return false;
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return false;
	}
	if (func_521(iParam0, uParam2, iParam3, bParam5, 0, -1, 0))
	{
		return false;
	}
	if (!func_522(0))
	{
		return false;
	}
	if (!_0xcb5d11f9508a928d(func_518(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_267(struct<4> Param0, int iParam4, bool bParam5)
{
	if (!func_522(0))
	{
		return func_523(&Param0, iParam4, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_524(Param0, &Var0, bParam5, 0, -1))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!_0x734311e2852760d0(func_518(bParam5), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_268(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if ((func_249(iParam0, 2) || func_249(iParam0, 4)) || func_249(iParam0, 8))
	{
		return true;
	}
	return false;
}

Vector3 func_269(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f, 0f, 0f;
	}
	return (*Global_1903136)[iParam0]->f_19;
}

float func_270(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return (*Global_1903136)[iParam0]->f_22;
}

void func_271(int iParam0)
{
	func_525(iParam0);
	func_526(iParam0);
}

bool func_272()
{
	bVar0 = _0x5e420ff293ee5472();
	if (bVar0)
	{
		return true;
	}
	return false;
}

bool func_273(int iParam0)
{
	iVar0 = 1;
	if (!func_527(iParam0))
	{
		iVar0 = 0;
	}
	if (!func_528(iParam0))
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_274(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	set_ped_relationship_group_hash(iVar0, _get_default_relationship_group_hash(iParam0));
	return iVar0;
}

void func_275(int iParam0)
{
	if (!does_entity_exist(Global_34))
	{
		return;
	}
	if (is_entity_dead(Global_34))
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
	if (func_319(iParam0))
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
	_0x931b241409216c1f(Global_34, iParam0, 0);
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
	if (func_318(iParam0))
	{
		iVar3 = func_333(iParam0);
		if (func_529(iVar3))
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

void func_276(int iParam0, int iParam1)
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
	iVar0 = func_281(iParam1);
	decor_set_int(iParam0, "HorseGender", iVar0);
	iVar1 = func_103(iParam1);
	func_530(iParam0, iVar1);
	_0xa69899995997a63b(iParam0, iVar1);
	iVar2 = floor(func_294(iParam1));
	func_531(iParam0, iVar2);
	iVar4 = 0;
	while (iVar4 < 2)
	{
		if (func_494(iVar4, &uVar3))
		{
			iVar5 = func_439(iParam1, iVar4);
			func_497(iParam0, iVar4, iVar5);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < 3)
	{
		if (func_505(iVar7, &uVar6))
		{
			iVar5 = func_406(iParam1, iVar7);
			func_387(iParam0, iVar7, iVar5);
		}
		iVar7++;
	}
	iVar8 = player_id();
	_0xa691c10054275290(iParam0, iVar8, func_532(iParam1));
	if (iParam1 == 0)
	{
		_0x6734f0a6a52c371c(iVar8, func_533(iParam1));
		_0x024ec9b649111915(iParam0, 1);
	}
}

void func_277(int iParam0)
{
	if (!func_215(iParam0))
	{
		return;
	}
	iVar0 = _0xf49f14462f0ae27c(get_player_index());
	if (!func_230(iVar0))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		func_534(iVar0, Global_39.f_281.f_1[iParam0]->f_15[iVar1], iVar1);
		iVar1++;
	}
}

void func_278(int iParam0)
{
	if (!func_215(iParam0))
	{
		return;
	}
	iVar0 = _0xf49f14462f0ae27c(get_player_index());
	if (!func_230(iVar0))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = &Global_39.f_281.f_1[iParam0]->f_382[iVar1];
		if (func_263(iVar2, 0))
		{
			iVar3 = iVar2;
			uVar4 = Global_39.f_281.f_1[iParam0]->f_382[iVar1]->f_1;
			uVar5 = Global_39.f_281.f_1[iParam0]->f_382[iVar1]->f_2;
			_0xc412aa1c73111fe0(iVar0, iVar3, uVar4, uVar5, 0);
		}
		iVar1++;
	}
}

void func_279(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_535(iParam0);
	func_536();
}

float func_280(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	return Global_39.f_281.f_1[iParam0]->f_444.f_1;
}

int func_281(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_39.f_281.f_1[iParam0]->f_10;
}

void func_282(int iParam0, int iParam1)
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

struct<2> func_283(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_537(iParam0, &uVar2))
	{
	}
	if (!func_538(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<8> func_284()
{
	if (func_539(802754820, &uVar8))
	{
		Var0.f_6 = uVar8;
	}
	if (func_539(-1886147520, &uVar9))
	{
		Var0.f_7 = uVar9;
	}
	if (func_539(-997150586, &uVar10))
	{
		Var0.f_4 = uVar10;
	}
	if (func_539(-1189569496, &uVar11))
	{
		Var0 = uVar11;
	}
	if (func_539(325139909, &uVar12))
	{
		Var0.f_2 = uVar12;
	}
	if (func_539(1310070322, &uVar13))
	{
		Var0.f_5 = uVar13;
	}
	if (func_539(986998820, &uVar14))
	{
		Var0.f_3 = uVar14;
	}
	if (func_539(-415648720, &uVar15))
	{
		Var0.f_1 = uVar15;
	}
	return Var0;
}

void func_285(var uParam0)
{
	func_540(uParam0);
	func_541(uParam0, 0);
	func_542(uParam0, 0);
	func_543(uParam0, 0);
	func_544(uParam0, 0);
	func_545(uParam0, 0);
	func_546(uParam0, 0);
	func_547(uParam0, 0);
}

int func_286(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return 0;
	}
	if (func_505(iParam1, &iVar0))
	{
		return get_attribute_base_rank(iParam0, iVar0);
	}
	return 0;
}

int func_287(int iParam0)
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

void func_288(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1903136)[iParam0]->f_1 = iParam1;
}

bool func_289(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return Global_39.f_281.f_1[iParam0]->f_457;
}

void func_290(int iParam0, bool bParam1)
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

void func_291(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
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
	func_548(iParam0);
	func_549(iParam0, uParam1);
	func_550(iParam0);
	func_551(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_552(iParam0, iParam3, 0);
	}
	if (bParam4)
	{
		_update_ped_variation(iParam0, false, true, true, true, true);
	}
}

void func_292(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1903136)[iParam0]->f_19 = { 0f, 0f, 0f };
	(*Global_1903136)[iParam0]->f_22 = 0f;
}

void func_293(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_317(iParam0, 1);
}

float func_294(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return Global_39.f_281.f_1[iParam0]->f_398.f_1;
}

int func_295(int iParam0, int iParam1)
{
	if (!is_model_valid(iParam0))
	{
		iParam0 = 1074477367;
	}
	iVar0 = get_default_attribute_points_needed_for_rank(iParam0, 7, iParam1);
	return iVar0;
}

float func_296(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

bool func_297()
{
	return (_does_anim_scene_exist(Global_26538) && _is_anim_scene_started(Global_26538, false));
}

bool func_298()
{
	return true;
	if (Global_1572887->f_13 == 0)
	{
		return true;
	}
	return Global_39.f_1;
}

int func_299()
{
	return Global_1903136->f_364;
}

void func_300(int iParam0)
{
	Global_1903136->f_364.f_9 = iParam0;
}

void func_301(int iParam0)
{
	Global_1903136->f_364.f_10 = iParam0;
}

void func_302(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (&Global_1903136->f_364.f_1[iParam0] != iParam1)
	{
	}
	Global_1903136->f_364.f_1[iParam0] = iParam1;
}

void func_303(int iParam0)
{
	Global_1903136->f_302 = (Global_1903136->f_302 - (Global_1903136->f_302 && iParam0));
}

void func_304(int iParam0)
{
	Global_1903136->f_364.f_11 = iParam0;
}

int func_305()
{
	return Global_1896622->f_41;
}

bool func_306()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

bool func_307(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_151(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_308()
{
	iVar0 = Global_39.f_281.f_1[5]->f_11;
	switch (iVar0)
	{
		case 1:
			if (does_entity_exist(func_78(6)) && func_140(Global_34, func_78(6), 1, 1) <= 80f)
			{
				func_312("WHISTLE_NEAR_UNBONDED", 10000, 0, 0, 0, 1);
			}
			else
			{
				func_312("WHISTLE_HORSE_DEAD", 10000, 0, 0, 0, 1);
			}
			break;
		case 2:
			func_312("WHISTLE_HORSE_STOLEN", 10000, 0, 0, 0, 1);
			break;
	}
}

bool func_309(int iParam0)
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

bool func_310(int iParam0)
{
	if (is_valid_interior(iParam0))
	{
		_get_interior_info(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case 653987431:
			case 1442115297:
			case 1911907177:
				return true;
		}
	}
	return false;
}

bool func_311(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_66(iParam0))
	{
		return false;
	}
	iVar0 = func_78(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

var func_312(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_313(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (does_blip_exist((*Global_1903136)[iParam0]->f_25))
	{
		if ((*Global_1903136)[iParam0]->f_24 == 2)
		{
			_set_blip_flash_style((*Global_1903136)[iParam0]->f_25, -1814032670);
			_blip_set_modifier((*Global_1903136)[iParam0]->f_25, -1814032670);
		}
		else if ((*Global_1903136)[iParam0]->f_24 == 1)
		{
			_set_blip_flash_style((*Global_1903136)[iParam0]->f_25, -272772079);
			_blip_set_modifier((*Global_1903136)[iParam0]->f_25, -272772079);
		}
	}
}

void func_314(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_20(iParam0, &Var0);
	iVar12 = func_158(iParam0);
	if (!is_model_valid(iVar12))
	{
		func_302(iParam0, 6);
		return;
	}
	iVar13 = func_103(iParam0);
	iVar14 = get_default_max_attribute_rank(iVar12, 7);
	func_20(0, &Var15);
	func_20(1, &Var27);
	if (iParam0 == 1 && !Var27.f_2)
	{
		func_302(iParam0, 6);
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
	switch (func_315(iParam0))
	{
		case 0:
			func_302(iParam0, 1);
		case 1:
			if (iParam0 == 0)
			{
				if (func_74(0) == 1 && !func_66(0))
				{
					func_302(iParam0, 2);
					return;
				}
			}
			if (!func_66(iParam0))
			{
				func_302(iParam0, 6);
				return;
			}
			if (func_103(iParam0) < 1)
			{
				func_302(iParam0, 6);
				return;
			}
			if (!Var0.f_11)
			{
				if (func_553())
				{
					func_302(iParam0, 2);
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
				if (!func_229())
				{
					bVar40 = false;
				}
				if (bVar40)
				{
					iVar42 = -1;
					iVar43 = -1;
					if (func_440(1) < 3)
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
						func_228(iVar43, 1);
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
								iVar57 = func_554();
							}
							else if (iParam0 == 1)
							{
								iVar57 = func_555();
							}
							if (!does_blip_exist(iVar57))
							{
								iVar57 = _0x3e593df9c2962ec6(iVar56);
								_blip_set_modifier(iVar57, 1313031610);
								if (iParam0 == 0)
								{
									func_556(&iVar57);
								}
								else if (iParam0 == 1)
								{
									func_557(&iVar57);
								}
							}
							func_558(iVar42, iVar57, 1);
						}
					}
					else if (iVar42 != -1)
					{
						func_228(iVar42, 1);
					}
				}
			}
			func_302(iParam0, 5);
			break;
		case 2:
			func_559(&((*Global_1903136)[iParam0]->f_4));
			func_302(iParam0, 3);
		case 3:
			vVar62 = { func_560(iParam0) };
			if (!func_561(&((*Global_1903136)[iParam0]->f_4), Global_35, vVar62, Var0, 1065353216))
			{
				if ((*Global_1903136)[iParam0]->f_4.f_1)
				{
					if (!func_306())
					{
						func_312("WHISTLE_NOSPAWN_AREA", 10000, 0, 0, 0, 1);
					}
					func_250(iParam0);
					func_562(Global_34, "HORSE_NO_SHOW", 1017772929, 0, 1, 0, 0, 1);
					func_302(iParam0, 6);
				}
				return;
			}
			vVar58 = { func_563(&((*Global_1903136)[iParam0]->f_4)) };
			fVar61 = func_564(vVar58, Global_35, 1);
			if (!func_66(iParam0))
			{
				func_565(iParam0, vVar58, fVar61);
				func_566(iParam0);
			}
			func_302(iParam0, 4);
		case 4:
			if (!does_entity_exist(Var0))
			{
				return;
			}
			if (is_entity_dead(Var0) || is_ped_injured(Var0))
			{
				return;
			}
			vVar58 = { func_563(&((*Global_1903136)[iParam0]->f_4)) };
			fVar61 = func_564(vVar58, Global_35, 1);
			freeze_entity_position(Var0, false);
			set_entity_coords(Var0, vVar58, true, false, true, true);
			set_entity_heading(Var0, fVar61);
			_0x9587913b9e772d29(Var0, 0);
			func_302(iParam0, 5);
		case 5:
			if (!Var0.f_2)
			{
				func_302(iParam0, 6);
				return;
			}
			if (Var0.f_10)
			{
				func_302(iParam0, 6);
				return;
			}
			bVar65 = false;
			if (does_entity_exist(Var0.f_9))
			{
				if (func_567(iParam0))
				{
					bVar65 = true;
				}
			}
			if (bVar65)
			{
				func_568(iParam0, 1);
			}
			bVar66 = false;
			if (Var0.f_11 || func_553())
			{
				bVar66 = true;
			}
			if (!bVar66)
			{
				func_61(iParam0);
				func_313(iParam0);
				func_302(iParam0, 6);
				return;
			}
			bVar67 = true;
			if (bVar67)
			{
				_0x0348469daa17576c(Var0);
				freeze_entity_position(Var0, false);
				if (func_569() == 0)
				{
					if (func_128(Var0, 2043986356))
					{
						func_300(1);
					}
				}
				iVar68 = func_569();
				task_go_to_whistle(Var0, Global_34, iVar68);
				_0xff1e339ce40eaaaf(Var0, -1);
				set_animal_tuning_bool_param(Var0, 48, false);
				func_304(iVar39);
			}
			func_61(iParam0);
			func_313(iParam0);
			func_302(iParam0, 6);
			break;
		case 6:
			break;
	}
}

int func_315(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return &(Global_1903136->f_364.f_1[iParam0]);
}

bool func_316(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_317(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1903136)[iParam0]->f_23 = ((*Global_1903136)[iParam0]->f_23 - ((*Global_1903136)[iParam0]->f_23 && iParam1));
}

bool func_318(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = func_333(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

bool func_319(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_570(get_entity_model(iParam0)))
	{
		return true;
	}
	if (decor_exist_on(iParam0, "HorseCompanion"))
	{
		return true;
	}
	return false;
}

bool func_320(int iParam0)
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

bool func_321(int iParam0)
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

bool func_322(int iParam0)
{
	switch (iParam0)
	{
		case 1772321403:
			return true;
	}
	return false;
}

bool func_323(int iParam0)
{
	switch (iParam0)
	{
		case -1230516683:
		case 594040097:
			return true;
	}
	return false;
}

int func_324()
{
	return Global_1903136->f_392;
}

void func_325(int iParam0)
{
	Global_1903136->f_392 = iParam0;
}

int func_326()
{
	return Global_1903136->f_392.f_6;
}

void func_327(int iParam0)
{
	Global_1903136->f_392.f_6 = iParam0;
}

bool func_328(int iParam0, var uParam1, float fParam2)
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
		fVar1 = func_140(iParam0, iVar0, 0, 1);
		if (fVar1 > fParam2)
		{
			return false;
		}
	}
	return true;
}

bool func_329(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_571(bParam1, bParam2, bParam3);
	}
	if (Global_1572887->f_13 != -1)
	{
		if (iParam0 == Global_1296859->f_10)
		{
			if (!Global_1296859->f_11)
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

bool func_330(int iParam0)
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
	if (func_143(iParam0) == 0f)
	{
		return true;
	}
	return false;
}

int func_331(int iParam0)
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

bool func_332(int iParam0)
{
	if (func_81(1024))
	{
		return false;
	}
	if (!func_121(42))
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
	if (func_318(iParam0))
	{
		if (func_333(iParam0) != 6)
		{
			return false;
		}
	}
	if (func_319(iParam0))
	{
		return false;
	}
	if (func_320(iParam0))
	{
		return false;
	}
	if (func_321(iParam0))
	{
		return false;
	}
	iVar0 = get_entity_model(iParam0);
	if (func_322(iVar0))
	{
		return false;
	}
	if (func_323(iVar0))
	{
		return false;
	}
	if (is_ped_on_mount(Global_34))
	{
		if (get_mount(Global_34) == iParam0)
		{
		}
		else
		{
			return false;
		}
	}
	if (func_328(iParam0, &uVar1, 100f))
	{
		return false;
	}
	iVar2 = player_id();
	if (func_329(iVar2, 1, 0, 1))
	{
		return false;
	}
	if (_0x0bb6de7d23c60626(iVar2))
	{
	}
	if (_0x69e181772886f48b(iVar2))
	{
		return false;
	}
	if (_0xf0fbfb9ab15f7734(iVar2, 1, 0))
	{
		return false;
	}
	if (!func_330(iParam0))
	{
		return false;
	}
	return true;
}

int func_333(int iParam0)
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
		if (iParam0 == Global_1903136[iVar0])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_334(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (is_player_dead(iVar0))
	{
	}
	func_250(iParam0);
	func_250(iParam0);
	func_572(iParam0, iParam1);
	func_573(iParam0, iParam1);
	func_574(iParam0, iParam1);
	iVar1 = func_78(iParam0);
	if (does_entity_exist(iVar1))
	{
		if (iParam0 == 0)
		{
			_0x8fbf9edb378ccb8c(iVar0, iVar1);
		}
		else if (iParam0 == 1)
		{
			_0x227b06324234fb09(iVar0, iVar1);
		}
	}
	iVar2 = func_78(iParam1);
	if (does_entity_exist(iVar2))
	{
		if (iParam1 == 0)
		{
			_0x8fbf9edb378ccb8c(iVar0, iVar2);
		}
		else if (iParam1 == 1)
		{
			_0x227b06324234fb09(iVar0, iVar2);
		}
	}
	func_335();
}

void func_335()
{
	if (func_66(0))
	{
		func_61(0);
	}
	if (func_66(1))
	{
		func_61(1);
	}
	if (func_66(5))
	{
		func_61(5);
	}
	if (func_66(6))
	{
		func_250(6);
	}
}

void func_336(int iParam0, bool bParam1)
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
	if (func_318(iParam0))
	{
		iVar0 = func_333(iParam0);
		func_250(iVar0);
	}
	if (func_66(6))
	{
		func_104(6, 0);
	}
	func_105(6);
	func_349(iParam0, 6, 0);
	func_153(6, 1);
	if (!bParam1)
	{
		func_391(6, 0);
		func_575(get_game_timer());
	}
	func_335();
}

void func_337(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_134(iParam0);
	if (!_does_thread_exist(iVar0))
	{
		func_136(iParam0);
	}
	else if (!is_thread_active(iVar0, false))
	{
		func_136(iParam0);
	}
}

void func_338(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = func_516();
	set_attribute_bonus_rank(iParam0, iVar0, 0);
	iVar1 = func_517();
	set_attribute_bonus_rank(iParam0, iVar1, 0);
	_0xde1b1907a83a1550(iParam0, 1f);
	_0x345c9f993a8ab4a4(iParam0, 1f);
	_0xef5a3d2285d8924b(iParam0, 1f);
}

void func_339(var uParam0)
{
	*uParam0 = -377364164;
	uParam0->f_1 = 357708345;
}

void func_340(int iParam0, struct<2> Param1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_576(iParam0, Param1))
	{
	}
	if (!func_577(iParam0, Param1.f_1))
	{
	}
}

void func_341(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_216((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_342(var uParam0)
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

void func_343(var uParam0)
{
	uParam0->f_1 = 0f;
	*uParam0 = 0;
	iVar0 = 0;
	while (iVar0 < 21)
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

void func_344(int iParam0, var uParam1)
{
	iVar0 = 100;
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_345(int iParam0, var uParam1)
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

void func_346(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1f;
}

void func_347(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -15;
}

void func_348(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
}

void func_349(int iParam0, int iParam1, int iParam2)
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
	if (func_319(iParam0))
	{
		return;
	}
	if (func_320(iParam0))
	{
		return;
	}
	if (!_0x88ad6cc10d8d35b2(iParam0))
	{
		set_entity_as_mission_entity(iParam0, true, true);
	}
	func_260(iParam1, iParam0);
	func_578(iParam1, iParam2);
	iVar0 = get_player_index();
	if (is_player_dead(iVar0))
	{
	}
	if (iParam0 == _get_saddle_horse_for_player(iVar0))
	{
		func_579(iParam1, 0);
	}
	else
	{
		iVar1 = func_580(iParam0);
		func_579(iParam1, iVar1);
	}
	if (iParam1 == 0)
	{
		_0x8fbf9edb378ccb8c(iVar0, iParam0);
	}
	else if (iParam1 == 1)
	{
		_0x227b06324234fb09(iVar0, iParam0);
	}
	if (iParam1 == 6)
	{
		return;
	}
	func_275(iParam0);
	if (func_400(iParam1))
	{
		func_401(iParam1);
	}
	iVar2 = func_158(iParam1);
	iVar3 = func_402(iVar2);
	func_403(iParam1, iVar3);
}

void func_350(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_158(iParam0);
	if (!is_model_valid(iVar0))
	{
		func_581(&uVar1, &iVar0, &uVar2);
	}
	iVar3 = func_582(iVar0);
	if (iParam1 > iVar3)
	{
		return;
	}
	fVar4 = to_float(func_295(iVar0, iParam1));
	Global_39.f_281.f_1[iParam0]->f_398 = iParam1;
	Global_39.f_281.f_1[iParam0]->f_398.f_1 = fVar4;
	func_583(iParam1);
	iVar5 = func_78(iParam0);
	if (!does_entity_exist(iVar5))
	{
		return;
	}
	if (is_entity_dead(iVar5) || is_ped_injured(iVar5))
	{
		return;
	}
	iVar6 = floor(Global_39.f_281.f_1[iParam0]->f_398.f_1);
	func_531(iVar5, iVar6);
	iVar7 = func_331(iVar5);
	Global_39.f_281.f_1[iParam0]->f_398 = iVar7;
	_0xa69899995997a63b(iVar5, iVar7);
}

bool func_351(int iParam0)
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

bool func_352(int iParam0)
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

bool func_353(int iParam0)
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

bool func_354()
{
	return (Global_1893587 & 1 != 0 && func_584() != -1);
}

void func_355(bool bParam0)
{
	if (bParam0)
	{
		Global_1940311 = 1;
	}
	else
	{
		Global_1940311 = 2;
	}
}

void func_356(bool bParam0)
{
	Global_1904628->f_2 = 0;
	Global_1904628->f_1 = 0;
	Global_1904628->f_3 = 0;
	Global_1904628->f_4 = 0;
	Global_1904628->f_5 = 0;
	Global_1904628->f_6 = 0;
	Global_1904628->f_7 = 0;
	if (bParam0)
	{
		Global_1904628->f_8 = 0;
		Global_1904628->f_9 = 0;
		Global_1904628->f_10 = 0;
		Global_1904628->f_11 = 0;
	}
}

void func_357(int iParam0)
{
	Global_1904628 = iParam0;
}

bool func_358()
{
	return Global_1904628->f_5;
}

int func_359()
{
	return Global_1904628->f_2;
}

int func_360()
{
	return Global_1904628->f_1;
}

bool func_361(int iParam0)
{
	if (func_585(iParam0))
	{
		return true;
	}
	if (func_586(iParam0))
	{
		return true;
	}
	if (func_587(iParam0))
	{
		return true;
	}
	if (func_588(iParam0))
	{
		return true;
	}
	if (func_589(iParam0))
	{
		return true;
	}
	if (func_590(iParam0))
	{
		return true;
	}
	if (func_591(iParam0))
	{
		return true;
	}
	return false;
}

bool func_362()
{
	iVar0 = func_359();
	iVar1 = func_360();
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
	if (!_0xd543d3a8fde4f185(Global_34, iVar0))
	{
		return false;
	}
	if (!func_361(iVar1))
	{
		return false;
	}
	if (is_ped_swimming(Global_34))
	{
		return false;
	}
	if (is_ped_swimming(iVar0))
	{
		return false;
	}
	return true;
}

bool func_363(int iParam0, int iParam1)
{
	if (!does_entity_exist(Global_34))
	{
		return false;
	}
	if (is_entity_dead(Global_34) || is_ped_injured(Global_34))
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
	if (func_585(iParam1))
	{
		iVar26 = 0;
		iVar27 = -224471938;
		bVar25 = true;
	}
	if ((func_587(iParam1) || func_588(iParam1)) || func_586(iParam1))
	{
		iVar26 = 574905658;
		iVar27 = -1355254781;
		bVar25 = true;
	}
	if (func_589(iParam1))
	{
		iVar27 = 1968415774;
		bVar25 = true;
	}
	if (func_590(iParam1))
	{
		iVar27 = 554992710;
		bVar25 = true;
	}
	if (!bVar25)
	{
		return false;
	}
	task_animal_interaction(Global_34, iParam0, iVar27, iVar26, 0);
	return true;
}

void func_364(int iParam0)
{
	Global_1904628->f_3 = iParam0;
}

int func_365()
{
	return Global_1904628->f_3;
}

void func_366(int iParam0)
{
	Global_1904628->f_4 = iParam0;
}

void func_367(int iParam0)
{
	Global_1904628->f_8 = iParam0;
}

void func_368(int iParam0)
{
	Global_1904628->f_9 = iParam0;
}

void func_369(int iParam0)
{
	Global_1904628->f_10 = iParam0;
}

void func_370(int iParam0)
{
	Global_1904628->f_7 = iParam0;
}

bool func_371()
{
	return Global_1904628->f_7;
}

int func_372(int iParam0, int iParam1)
{
	if (!func_263(iParam0, 0))
	{
		return func_593(func_592(iParam0), iParam1);
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

int func_373(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!func_263(iParam0, 0))
	{
		return 0;
	}
	if (iParam3 == -142743235)
	{
		if (func_594(iParam0))
		{
			iParam3 = 562618531;
		}
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_595(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = get_ped_ammo_by_type(Global_34, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return 0;
		}
		_remove_ammo_from_ped_by_type(Global_34, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_596(iParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
		}
		return 0;
	}
	if (!func_597(iParam0, 1))
	{
		return 0;
	}
	Var5 = { func_598(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_599(iParam0, 0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_599(iParam0, 0, 0, 0) - iParam1) < 0)
		{
			func_373(iParam0, func_599(iParam0, 0, 0, 0), bParam2, iParam3);
			return 0;
		}
	}
	if (func_600(iParam0) == -427144552)
	{
		if (!func_601(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_602(iParam0, iParam1, iParam3, bParam2, 0))
	{
		return 0;
	}
	else
	{
		Var7 = { func_603(iParam0, 0, 0) };
		if (func_522(0) && Var7.f_4 == 1084182731)
		{
			func_604(1, 0, 0);
		}
	}
	if (iParam0 == -569063887)
	{
		Global_1940144->f_21 = 0;
	}
	if (!func_522(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_596(iParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
	}
	return 1;
}

void func_374(int iParam0, int iParam1)
{
	if (!func_361(iParam1))
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
	bVar0 = func_2() == false;
	if (func_585(iParam1))
	{
		if (bVar0)
		{
			func_605(iParam0, iParam1);
		}
		else
		{
			func_606(iParam0, iParam1);
		}
		return;
	}
	if (func_586(iParam1))
	{
		if (bVar0)
		{
			func_607(iParam0, iParam1);
		}
		else
		{
			func_608(iParam0, iParam1);
		}
		return;
	}
	if (func_587(iParam1))
	{
		if (bVar0)
		{
			func_609(iParam0, iParam1);
		}
		else
		{
			func_610(iParam0, iParam1);
		}
		return;
	}
	if (func_588(iParam1))
	{
		if (bVar0)
		{
			func_611(iParam0, iParam1);
		}
		else
		{
			func_612(iParam0, iParam1);
		}
		return;
	}
	if (func_589(iParam1))
	{
		if (bVar0)
		{
			func_613(iParam0, iParam1);
		}
		else
		{
			func_614(iParam0, iParam1);
		}
		return;
	}
	if (func_591(iParam1))
	{
		if (bVar0)
		{
			func_615(iParam0, iParam1);
		}
		else
		{
			func_616(iParam0, iParam1);
		}
		return;
	}
	if (func_590(iParam1))
	{
		if (bVar0)
		{
			iVar1 = func_379();
			func_617(iParam0, iParam1, iVar1);
		}
		else
		{
			func_618(iParam0, iParam1, func_379());
		}
		return;
	}
}

bool func_375()
{
	return Global_1904628->f_6;
}

int func_376()
{
	return Global_1904628->f_8;
}

bool func_377()
{
	return Global_1904628->f_10;
}

void func_378(int iParam0)
{
	Global_1904628->f_11 = iParam0;
}

int func_379()
{
	return Global_1904628->f_9;
}

struct<4> func_380(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (!func_619(&Var0, bParam0))
	{
	}
	if (!bParam2)
	{
		Var29 = { func_620() };
		if (func_621() && _0xb881ca836cc4b6d4(&Var29))
		{
			Var0 = { Var29 };
		}
		else if (!_0x4c543d5dfcd2dafd(&Var29, &Var0))
		{
			func_622(&Var0, 0);
		}
	}
	if (iParam3 == -1)
	{
		iParam3 = func_623(player_id());
	}
	bVar33 = func_624(75);
	if (bVar33)
	{
		iParam3 = 3;
	}
	iVar34 = func_625(iParam3, 0);
	if (iVar34 != 3)
	{
		if (_0xb881ca836cc4b6d4(Global_17411.f_55.f_61[iVar34]))
		{
			Var0 = { *Global_17411.f_55.f_61[iVar34] };
		}
	}
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		if (!bParam1)
		{
			return func_519();
		}
		if (!func_626(&Var0, 0))
		{
			Var35 = { func_627(bParam0) };
		}
		else
		{
			Var35 = { Var0 };
		}
		return Var35;
	}
	return Var0;
}

bool func_381(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return false;
	}
	func_628(Global_1904087);
	switch (iParam1)
	{
		case 0:
		case 1:
			if (!func_629(uParam0, Global_1904087, &(Global_1904087->f_53), bParam2))
			{
				return false;
			}
			break;
		case 2:
			if (!func_630(uParam0, Global_1904087, &(Global_1904087->f_82), bParam2))
			{
				return false;
			}
			break;
	}
	return true;
}

int func_382(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (_0x4c543d5dfcd2dafd(Global_17411.f_55.f_61.f_41[iVar0], &uParam0))
		{
			return &(Global_17411.f_55.f_61.f_41[iVar0]->f_38[iParam4]);
		}
		iVar0++;
	}
	if (!func_631(&uParam0))
	{
		return 0;
	}
	return 0;
}

int func_383()
{
	return Global_1904628->f_11;
}

int func_384(int iParam0, int iParam1, int iParam2)
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

float func_385(float fParam0, float fParam1, float fParam2)
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

void func_386(int iParam0, struct<4> Param1, int iParam5, int iParam6)
{
	iParam6 = func_384(iParam6, 0, 100);
	func_632(Param1, iParam5, iParam6);
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (!network_has_control_of_entity(iParam0))
	{
		return;
	}
	func_387(iParam0, iParam5, iParam6);
}

void func_387(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	iParam2 = func_384(iParam2, 0, 100);
	if (func_505(iParam1, &iVar0))
	{
		set_attribute_base_rank(iParam0, iVar0, iParam2);
	}
}

bool func_388(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_389(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_39.f_3643[iVar1]), iVar2);
}

void func_390(int iParam0, float fParam1)
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
		case 10:
		case 11:
			sVar0 = "HORSE_XP_HITCH";
			break;
		case 5:
			return;
		case 6:
			sVar0 = "HORSE_XP_BREAK_HORSE";
			break;
		case 12:
		case 13:
		case 14:
			sVar0 = "HORSE_XP_FED";
			break;
		case 15:
			sVar0 = "HORSE_XP_TREAT";
			break;
		case 16:
		case 17:
			sVar0 = "HORSE_XP_GROOM";
			break;
		case 18:
			sVar0 = "HORSE_XP_OINTMENT";
			break;
		case 7:
		case 8:
			sVar0 = "HORSE_XP_PATTED";
			break;
		case 9:
			sVar0 = "HORSE_XP_CALM";
			break;
		case 19:
		case 20:
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
	func_633(sVar0, "ITEMTYPE_TEXTURES", 48560695, 0, 109029619, 0, 0, 0, 1);
}

void func_391(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return;
	}
	iParam0 = func_77(iParam0);
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
		if (!func_121(42))
		{
			return;
		}
	}
	iVar0 = func_158(iParam0);
	if (func_322(iVar0) || func_323(iVar0))
	{
		return;
	}
	iVar1 = func_103(iParam0);
	if (iVar1 >= func_582(iVar0))
	{
		return;
	}
	if (func_634(iParam0, iParam1))
	{
		return;
	}
	if (func_635(iParam0, iParam1))
	{
		return;
	}
	fVar2 = func_636(iParam0, iParam1);
	fVar3 = func_637(iParam1);
	switch (iParam1)
	{
		case 1:
			iVar4 = func_78(iParam0);
			if (func_638(iVar4, 0))
			{
				fVar3 = (fVar3 * 0.5f);
			}
			Global_1903136->f_303.f_2[iParam0]->f_2 = (Global_1903136->f_303.f_2[iParam0]->f_2 + fVar3);
			break;
		case 2:
		case 3:
			if (func_639())
			{
				fVar3 = (fVar3 * 2f);
			}
			Global_1903136->f_303.f_2[iParam0]->f_2 = (Global_1903136->f_303.f_2[iParam0]->f_2 + fVar3);
			break;
		case 4:
			Global_1903136->f_303.f_2[iParam0]->f_4 = (Global_1903136->f_303.f_2[iParam0]->f_4 + fVar3);
			break;
		case 5:
			if (iVar1 < 1)
			{
				fVar5 = func_294(iParam0);
				fVar6 = to_float(func_295(iVar0, iVar1));
				fVar7 = to_float(func_295(iVar0, iVar1 + 1));
				fVar3 = (fVar7 - (fVar6 + fVar5));
			}
			else
			{
				fVar3 = 0f;
			}
			break;
		default:
			func_390(iParam1, fVar3);
			break;
	}
	func_640(iParam0, fVar3);
	func_641(iParam0, iParam1, (fVar2 + fVar3));
}

int func_392(int iParam0, int iParam1)
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

void func_393(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_317(iParam0, 32);
	func_335();
}

void func_394(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_535(iParam0);
	func_350(iParam0, 0);
	func_642(iParam0, 0f);
}

void func_395(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

void func_396(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

void func_397(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_39.f_3643[iVar1];
	set_bit(&uVar3, iVar2);
	Global_39.f_3643[iVar1] = uVar3;
}

void func_398(int iParam0)
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
			func_643(1);
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
			func_644(1);
			break;
		case 18:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_644(2);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_644(3);
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
			func_183(1);
			break;
		case 33:
			func_185(1);
			break;
		case 34:
			func_187(1);
			break;
		case 35:
			break;
		case 36:
			func_645(0);
			break;
		case 37:
			func_646(0);
			break;
		case 38:
			func_647(0);
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
			if (func_298() && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_648("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_228(677, 0);
			break;
		case 3:
			if (func_298() && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_648("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_228(678, 0);
			break;
		case 4:
			if (func_298() && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_648("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_228(679, 0);
			break;
		case 5:
			if (func_298() && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_648("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_228(680, 0);
			break;
		case 23:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			break;
		case 47:
			if (func_2() == -1)
			{
				if (!func_597(1013902307, 1))
				{
					func_649(1013902307, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_2() == -1)
			{
				if (!func_597(1013902307, 1))
				{
					func_649(1013902307, 1, 752097756);
				}
				if (!func_597(142640135, 1))
				{
					func_649(142640135, 1, 752097756);
				}
			}
			break;
		case 48:
			if (func_2() == -1)
			{
				if (!func_597(786809402, 1))
				{
					func_649(786809402, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_2() == -1)
			{
				if (!func_597(786809402, 1))
				{
					func_649(786809402, 1, 752097756);
				}
				if (!func_597(-518019409, 1))
				{
					func_649(-518019409, 1, 752097756);
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

bool func_399(int iParam0)
{
	switch (iParam0)
	{
		case -1523757120:
		case -1516219602:
		case -1063137731:
		case 604357666:
		case 1048964673:
		case 1576849913:
			return true;
	}
	return false;
}

bool func_400(int iParam0)
{
	iVar0 = func_650(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1 = { func_261(0) };
	if (func_651(&Var1, iVar0, 0) > 0)
	{
		return true;
	}
	return false;
}

int func_401(int iParam0)
{
	Var0.f_9 = -1591664384;
	if (!func_652(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { Var0.f_5 };
	Var29.f_4 = Var0.f_9;
	if (!func_653(Var0.f_4, &Var0, &Var29, -1, -142743235, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_402(int iParam0)
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
		case -1029277326:
			return 2002245664;
		case -1140650619:
			return -1120227140;
		case -1999198818:
			return 1142681594;
		case -403470324:
			return -864588185;
		case -925223936:
			return -1040918754;
		case -1547438906:
			return 535545841;
		case -635239558:
			return 1686036388;
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
		case 2120708491:
			return 1999358190;
		case 1133837220:
			return 344528703;
		case 1702024301:
			return -1674873797;
		case -1604180548:
			return 281852151;
		case -683592019:
			return 908445453;
		case 337109765:
			return 1221398025;
		case -619132373:
			return -75300826;
		case 1544366970:
			return -1714239153;
		case -1441144351:
			return 1404133288;
		case -1717674545:
			return -1778967281;
		case 1825358734:
			return -455481432;
		case 1138427579:
			return -835454915;
		case -1720251851:
			return -2058115427;
		case 506887890:
			return -482507775;
		case 766293155:
			return -563118293;
		case 2147082926:
			return -1091105818;
		case -390136947:
			return 1421675990;
		case 1104566530:
			return 230524110;
		case -1142861801:
			return 24661898;
		case -417416199:
			return 1186969907;
		case -1460773772:
			return -1762859680;
		case 1476007840:
			return -2073924608;
		case -1616287563:
			return 2004269960;
		case -127412252:
			return 772515535;
		case -1881155818:
			return 1851524477;
		case -955237712:
			return -1444352669;
		case -647020346:
			return 1950373354;
		case -1846319726:
			return -878000957;
		case 1007570567:
			return -2145947333;
		case 1029339151:
			return 156528857;
		case -1424767799:
			return -1240970285;
		case -217135948:
			return -1933497088;
		case -156439156:
			return -1116314766;
		case 1344011125:
			return -877141885;
		case 1772321403:
			return -285185056;
		case -1028075925:
			return -1692268955;
		case 84224102:
			return 2130706226;
		case 1496579364:
			return 1214981718;
		case -1896838685:
			return -1754375530;
		case -420599285:
			return -71211764;
		case 478986344:
			return -1390353518;
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

int func_403(int iParam0, int iParam1)
{
	if (!func_263(iParam1, 0))
	{
		return 0;
	}
	if (!func_654(iParam1))
	{
		return 0;
	}
	if (func_400(iParam0))
	{
		return 0;
	}
	iVar0 = func_650(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_261(0) };
	Var1.f_4 = iVar0;
	if (!func_266(iParam1, &uVar6, &Var1, 1, 752097756, 0))
	{
		return 0;
	}
	return 1;
}

int func_404(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_39.f_281.f_1[iParam0]->f_8;
}

float func_405(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	if (!func_66(iParam0))
	{
		return 0f;
	}
	iVar0 = func_78(iParam0);
	fVar1 = func_143(iVar0);
	return fVar1;
}

int func_406(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return &(Global_39.f_281.f_1[iParam0]->f_431[iParam1]);
}

int func_407(int iParam0, var uParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_652(iParam0, &Var0))
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
	if (!_0xd80a8854db5cfba5(func_518(0), &Var0, &Var0, 29))
	{
		return 0;
	}
	return 1;
}

void func_408()
{
	if (func_655())
	{
		uVar0 = func_656();
		remove_blip(&uVar0);
		func_657(0);
	}
}

void func_409()
{
	iVar0 = func_162();
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	delete_object(&iVar0);
	func_410(0);
}

void func_410(int iParam0)
{
	Global_1903136->f_379 = iParam0;
}

int func_411()
{
	return Global_39.f_281.f_3245.f_1;
}

var func_412()
{
	return Global_1903136->f_429.f_2;
}

void func_413()
{
	Global_1903136->f_429.f_2 = 0;
}

void func_414()
{
	Global_39.f_281.f_3245.f_1++;
}

void func_415(int iParam0)
{
	Global_1903136->f_429.f_2 = iParam0;
}

bool func_416()
{
	return Global_1903136->f_429.f_3;
}

int func_417()
{
	return Global_1903136->f_429.f_4;
}

void func_418(int iParam0)
{
	Global_1903136->f_429.f_3 = iParam0;
}

void func_419()
{
	Global_1903136->f_429.f_4 = 0;
}

bool func_420()
{
	if (func_597(1627068364, 1) || func_597(-1795542128, 1))
	{
		return true;
	}
	return false;
}

bool func_421(int iParam0)
{
	iVar0 = _item_database_get_acquire_costs_count(iParam0);
	Var1.f_4 = 15;
	Var1.f_36 = 10;
	iVar48 = 0;
	while (iVar48 < iVar0)
	{
		if (_item_database_get_acquire_cost(iParam0, iVar48, &Var1))
		{
			if (Var1.f_2 == 1644203656 && !func_658(iParam0, Var1, 1))
			{
				return true;
			}
		}
		iVar48++;
	}
	return false;
}

int func_422()
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
	if (!func_321(iVar2))
	{
		return 0;
	}
	return iVar2;
}

int func_423()
{
	return Global_1903136->f_399.f_1;
}

void func_424(int iParam0)
{
	Global_1903136->f_399.f_1 = iParam0;
}

void func_425(int iParam0)
{
	Global_1903136->f_399 = iParam0;
}

void func_426()
{
	if (func_147(47))
	{
		func_148(47);
	}
	if (func_149(47))
	{
		func_150(47);
	}
	if (func_147(48))
	{
		func_148(48);
	}
	if (func_149(47))
	{
		func_150(47);
	}
	if (func_147(49))
	{
		func_148(49);
	}
	if (func_149(49))
	{
		func_150(49);
	}
	if (func_147(50))
	{
		func_148(50);
	}
	if (func_149(50))
	{
		func_150(50);
	}
	if (func_147(51))
	{
		func_148(51);
	}
	if (func_149(51))
	{
		func_150(51);
	}
}

bool func_427(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
	}
	uVar1 = _0x0139637a3bff8b6d(iParam0, &uVar0);
	if (_0x354f689c4ffaab37(uVar1))
	{
		return true;
	}
	return false;
}

void func_428(int iParam0)
{
	Global_1903136->f_399.f_2 = iParam0;
}

int func_429()
{
	return Global_1903136->f_399.f_2;
}

void func_430()
{
	func_425(0);
	func_424(0);
	func_428(0);
}

bool func_431()
{
	return Global_1903136->f_429.f_5;
}

int func_432()
{
	return Global_39.f_281.f_3245.f_3;
}

int func_433()
{
	return Global_1903136->f_429.f_6;
}

void func_434(int iParam0)
{
	Global_1903136->f_429.f_5 = iParam0;
}

void func_435()
{
	Global_1903136->f_429.f_6 = 0;
}

void func_436(int iParam0)
{
	Global_1903136->f_429.f_9 = iParam0;
}

void func_437()
{
	Global_39.f_281.f_3245.f_3++;
}

bool func_438()
{
	return Global_1903136->f_429.f_7;
}

int func_439(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return &(Global_39.f_281.f_1[iParam0]->f_422[iParam1]);
}

int func_440(int iParam0)
{
	func_396(iParam0, &iVar0, &iVar1);
	if (!func_659(iParam0, 65536) && !func_659(iParam0, 32768))
	{
		if (func_660(iVar0, iVar1))
		{
			return 1;
		}
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < Global_39.f_3534)
	{
		if (Global_39.f_3534[iVar2]->f_2 == iParam0)
		{
			return Global_39.f_3534[iVar2]->f_1;
		}
		iVar2++;
	}
	return 0;
}

int func_441()
{
	return Global_1903136->f_429.f_8;
}

void func_442(int iParam0)
{
	Global_1903136->f_429.f_7 = iParam0;
}

void func_443()
{
	Global_1903136->f_429.f_8 = 0;
}

int func_444()
{
	return Global_1903136->f_429.f_9;
}

bool func_445()
{
	return Global_1903136->f_429.f_10;
}

void func_446(int iParam0)
{
	Global_1903136->f_429.f_10 = iParam0;
}

void func_447()
{
	Global_1903136->f_429.f_9 = 0;
}

bool func_448()
{
	return Global_39.f_281.f_3245.f_4;
}

int func_449(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = -1;
	iVar1 = -1;
	fVar4 = -1f;
	iVar0 = 0;
	while (iVar0 < 180)
	{
		if (!func_450(iVar0))
		{
		}
		else if (func_661(iVar0) != iParam0)
		{
		}
		else if (bParam1)
		{
			if (!func_662(iVar0))
			{
			}
			else
			{
				iVar2 = func_663(iVar0);
				if (bParam3)
				{
					if (!func_664(iVar2))
					{
					}
					else if (bParam2)
					{
						if (func_665(iVar2))
						{
						}
						else
						{
							fVar3 = func_666(Global_34, func_451(iVar0), 1);
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

bool func_450(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 180);
}

Vector3 func_451(int iParam0)
{
	if (!func_450(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return 2947.055f, 1320.15f, 43.8203f;
		case 1:
			return 2939.063f, 1287.116f, 43.6529f;
		case 2:
			return 2932.97f, 1282.56f, 43.67f;
		case 117:
			return -5227.357f, -3470.067f, -20.49293f;
		case 118:
			return -5228.75f, -3468.28f, -21.57f;
		case 6:
			return -784.49f, -1321.95f, 42.88f;
		case 9:
			return -753.4219f, -1284.24f, 43.20049f;
		case 8:
			return -814.4116f, -1367.243f, 43.7509f;
		case 13:
			return -868.3356f, -1366.207f, 44.75311f;
		case 14:
			return -875.03f, -1327.09f, 42.97f;
		case 15:
			return -875.02f, -1326.71f, 42.97f;
		case 19:
			return -762.0716f, -1293.549f, 42.8355f;
		case 12:
			return -813.6f, -1373.8f, 44.2f;
		case 22:
			return 1417.288f, 273.5687f, 88.4881f;
		case 24:
			return 1521.91f, 441.15f, 89.68f;
		case 25:
			return 1523.63f, 442.65f, 89.68f;
		case 26:
			return 2161.5f, -618.5f, 43f;
		case 27:
			return -1092.88f, -575.69f, 81.41f;
		case 28:
			return -1094.35f, -577.48f, 81.41f;
		case 29:
			return 1294.084f, -1303.102f, 76.0418f;
		case 30:
			return 1297.423f, -1278.412f, 75.65752f;
		case 31:
			return 1319.43f, -1142.08f, 81.41f;
		case 33:
			return 1329.755f, -1294.218f, 76.0092f;
		case 34:
			return 1323.734f, -1321.775f, 77.8924f;
		case 35:
			return 1226.71f, -1295.08f, 75.9f;
		case 39:
			return 1230.34f, -1298.578f, 75.9027f;
		case 41:
			return 1209.053f, -193.1814f, 101.9785f;
		case 42:
			return 2644.188f, -1292.507f, 51.2496f;
		case 43:
			return 2657.466f, -1180.96f, 53.2785f;
		case 44:
			return 2819.495f, -1331.29f, 45.514f;
		case 45:
			return 2721.24f, -1231.66f, 49.37f;
		case 46:
			return 2859.51f, -1202.16f, 48.59f;
		case 48:
			return 2825.607f, -1318.207f, 45.7557f;
		case 49:
			return 2718f, -1287f, 49.6f;
		case 50:
			return 2508.212f, -1449.654f, 48.41523f;
		case 51:
			return 2748.811f, -1398.277f, 45.18309f;
		case 52:
			return 2747.824f, -1396.384f, 45.18309f;
		case 53:
			return 2555.09f, -1166.98f, 52.68f;
		case 63:
			return 2832.02f, -1225.563f, 46.6422f;
		case 60:
			return 2734.174f, -1119.755f, 50.10792f;
		case 68:
			return -1753.404f, -392.557f, 155.2576f;
		case 69:
			return -1790f, -388.27f, 159.33f;
		case 70:
			return -1818.99f, -370.94f, 162.3f;
		case 71:
			return -1819.88f, -561.8194f, 157.2323f;
		case 74:
			return -1763.78f, -385.1118f, 156.7401f;
		case 77:
			return -307.9643f, 773.6048f, 117.7031f;
		case 78:
			return -306.3f, 815.08f, 117.98f;
		case 79:
			return 0f, 0f, 0f;
		case 82:
			return -338.8647f, 767.4334f, 115.5628f;
		case 83:
			return -287.9538f, 804.0544f, 118.3859f;
		case 84:
			return -324f, 803.72f, 116.88f;
		case 85:
			return -281.82f, 778.97f, 118.5f;
		case 86:
			return -369.4457f, 786.6935f, 115.9904f;
		case 87:
			return -178.0316f, 628.0621f, 113.0896f;
		case 88:
			return -175.0377f, 631.7999f, 113.0896f;
		case 90:
			return -325.532f, 773.6285f, 117.5038f;
		case 93:
			return 3025.786f, 562.7253f, 43.7167f;
		case 98:
			return 2986.224f, 569.9468f, 43.62284f;
		case 97:
			return 2986.94f, 574.9f, 43.64f;
		case 96:
			return 2967.273f, 796.7416f, 52.5948f;
		case 99:
			return -1302.951f, 394.6608f, 94.3817f;
		case 101:
			return -1300.83f, 399.7599f, 94.38248f;
		case 100:
			return -1299.891f, 401.3615f, 94.38248f;
		case 105:
			return -5518.071f, -2906.217f, -2.7513f;
		case 102:
			return -5487.197f, -2939.038f, -1.3872f;
		case 103:
			return -5507.993f, -2964.844f, -1.6215f;
		case 104:
			return -5509.019f, -2947.435f, -2.8934f;
		case 107:
			return -5520.701f, -3044.427f, -1.40419f;
		case 108:
			return -3687.3f, -2623.39f, -14.44f;
		case 3:
			return -2842.211f, 137.3398f, 183.8268f;
		case 4:
			return -1005.934f, -540.8262f, 97.9502f;
		case 40:
			return 2076.835f, 1000.829f, 111.4973f;
		case 76:
			return -2251.034f, -1916.911f, 115.9488f;
		case 148:
			return -4730.243f, -2939.088f, -20.1029f;
		case 64:
			return -142.072f, -23.5242f, 95.0883f;
		case 65:
			return 675.3091f, -1251.233f, 43.0152f;
		case 66:
			return 1875.2f, -1859.182f, 41.8f;
		case 67:
			return 2366.084f, 1347.122f, 105.1305f;
		case 130:
			return -1402f, -2317f, 43.6f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_452(int iParam0)
{
	Global_1903136->f_429.f_11 = *iParam0;
}

var func_453()
{
	return Global_1903136->f_429.f_11;
}

bool func_454()
{
	if (func_311(7))
	{
		return true;
	}
	if (func_161())
	{
		return true;
	}
	return false;
}

bool func_455(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	iVar0 = func_162();
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

bool func_456()
{
	if (!func_311(7))
	{
		if (func_457(7))
		{
			func_667();
			return true;
		}
	}
	if (func_311(7))
	{
		if (func_164() == 0)
		{
			if (does_entity_exist(func_78(7)))
			{
				if (!is_entity_in_water(func_78(7)))
				{
					return true;
				}
			}
		}
	}
	if (func_455(Global_34))
	{
		return true;
	}
	iVar0 = get_game_timer();
	iVar1 = func_668();
	if (iVar1 == 0)
	{
		func_669(get_game_timer());
		return true;
	}
	if (iVar1 + 10000 > iVar0)
	{
		return true;
	}
	if (_0x383f64263f946e45(&uVar2, func_162(), 4, Global_34, 0, 1))
	{
		func_667();
		return true;
	}
	return false;
}

bool func_457(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	iVar0 = func_78(iParam0);
	if (!does_entity_exist(iVar0))
	{
		if (iParam0 == func_154())
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

void func_458()
{
	Global_1903136->f_429.f_12 = 0;
}

var func_459()
{
	return Global_1903136->f_429.f_12;
}

void func_460(int iParam0)
{
	Global_1903136->f_429.f_12 = iParam0;
}

int func_461()
{
	return Global_1903136->f_427;
}

void func_462(int iParam0)
{
	Global_1903136->f_427 = iParam0;
}

bool func_463()
{
	return Global_1903136->f_429.f_15;
}

void func_464(int iParam0)
{
	Global_1903136->f_429.f_15 = iParam0;
}

int func_465()
{
	return Global_39.f_281.f_3245;
}

void func_466()
{
	Global_1903136->f_429.f_16++;
}

int func_467()
{
	return Global_1903136->f_429.f_16;
}

bool func_468(int iParam0)
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

bool func_469(int iParam0)
{
	if (func_329(player_id(), 1, 0, 1))
	{
		return false;
	}
	if (!func_330(iParam0))
	{
		return false;
	}
	if (func_328(iParam0, &uVar0, -1082130432))
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

bool func_470(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return true;
		default:
			break;
	}
	return false;
}

int func_471(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1071686->f_636.f_601;
		case 3:
			return Global_1071686->f_636.f_2103;
		case 4:
			return Global_1071686->f_636.f_12605;
		case 5:
			return Global_1071686->f_636.f_12907;
		case 6:
			return Global_1071686->f_636.f_15909;
		case 7:
			return Global_1071686->f_636.f_16511;
		case 8:
			return Global_1071686->f_636.f_18913;
		default:
			break;
	}
	return -1;
}

bool func_472()
{
	return (Global_1915715->f_20637 || Global_1915715->f_22504.f_1);
}

int func_473()
{
	if (&Global_1102219 <= 5)
	{
		return &Global_1102219;
	}
	if (&Global_1102219 <= 22)
	{
		return 4;
	}
	if (&Global_1102219 <= 25)
	{
		return 3;
	}
	return 26;
}

int func_474(int iParam0)
{
	if (!does_entity_exist(*iParam0))
	{
		return 0;
	}
	iVar0 = get_ped_index_from_entity_index(*iParam0);
	return func_226(iVar0);
}

int func_475(int iParam0)
{
	iVar0 = 0;
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	iVar0 = _0x31fef6a20f00b963(iParam0);
	if (iVar0 == 0)
	{
		if (is_entity_a_ped(iParam0))
		{
			iVar0 = func_226(get_ped_index_from_entity_index(iParam0));
		}
	}
	return iVar0;
}

int func_476(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!func_263(iParam1, 0))
	{
		return 0;
	}
	bVar0 = iParam4 == 562618531;
	bVar1 = iParam4 == 1992602754;
	bVar2 = iParam4 == -1387038764;
	if (!func_670(iParam0, iParam1, 1))
	{
		return 0;
	}
	Var3 = { func_598(iParam1) };
	if (_stat_id_is_valid(&Var3))
	{
		if ((func_477(iParam0, iParam1) - iParam2) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var3, iParam2);
		}
		else if ((func_477(iParam0, iParam1) - iParam2) < 0)
		{
			func_476(iParam0, iParam1, func_599(iParam1, 0, 0, 0), bParam3, iParam4);
			return 0;
		}
	}
	if (!func_671(iParam0, iParam1, iParam2, iParam4, bParam3))
	{
		return 0;
	}
	if (!bParam3 && iParam1 != 1309979101)
	{
		func_596(iParam1, -iParam2, bVar0, bVar1, bVar2, 0, 0);
	}
	return 1;
}

int func_477(int iParam0, int iParam1)
{
	if (!func_263(iParam1, 0))
	{
		return 0;
	}
	Var0 = { func_672(iParam0, iParam1) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	iVar4 = _0xc97e0d2302382211(iParam0, &Var0, 0);
	return iVar4;
}

struct<5> func_478(int iParam0)
{
	Var0 = { func_479(iParam0, 1328661203, func_519(), -1591664384) };
	Var0.f_4 = 1084182731;
	return Var0;
}

struct<4> func_479(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, int iParam6)
{
	if (!func_263(iParam1, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(iParam0, &uParam2, iParam1, iParam6, &Var0);
	return Var0;
}

int func_480(int iParam0)
{
	iVar0 = 2;
	if (!does_entity_exist(iParam0))
	{
		return iVar0;
	}
	iVar1 = _get_ped_quality(iParam0);
	switch (iVar1)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 1;
			break;
		case -1:
		case 2:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

int func_481(int iParam0)
{
	switch (iParam0)
	{
		case 915880986:
			return 1908704263;
		case -1424697962:
			return -2112217546;
		case -1643384846:
			return -1745255175;
		case -847420802:
			return -237368063;
		case -662726703:
			return 1598967299;
		case 1760886130:
			return -1809464109;
		case -1243653490:
			return -165201917;
		case 1988467099:
			return 815147738;
		case -674590015:
			return 1287583539;
		case -1480423460:
			return -2126985311;
		case 924882045:
			return -1268352491;
		case 1415608202:
			return -1940225526;
		case -593311590:
			return -212307068;
		case 765085831:
			return 355421032;
		case 2094730711:
			return 1657729714;
		case -1310590179:
			return 1350692346;
		case 992366796:
			return -257850294;
		case -244657613:
			return -918541014;
		case -2026210939:
			return -947573795;
		case -1252472243:
			return -2068302756;
		case -980016656:
			return 1650829985;
		case -758005668:
			return -1808044035;
		case -2139551030:
			return -1952647655;
		case 1607144310:
			return 1293221440;
		case 80093385:
			return -642946194;
		case -867655342:
			return 819214075;
		case 991092621:
			return -858652427;
		case 871746664:
			return 395625948;
		case 1626949878:
			return -2063800922;
		case -1722483116:
			return -2117103642;
		case -1739474417:
			return -1583694057;
		case -161524199:
			return -1550918713;
		case 156979555:
			return 836539658;
		case 322141256:
			return 773062352;
		case 1310120320:
			return 1306100270;
		case -1228376431:
			return -1063194668;
		case 472142656:
			return 337839068;
		case -1837840093:
			return -1426520714;
		case 58634176:
			return -1456429189;
		case 1023080408:
			return -2032809253;
		case 1001171791:
			return 781728005;
		case 1210345318:
			return 1202409779;
		case 399553313:
			return 1520877300;
		case -1422869557:
			return -1736624361;
		case -1378812236:
			return 719465997;
		case 1011003885:
			return -361486526;
		case 651035143:
			return -765274711;
		case 2013022756:
			return -887205673;
		case -1186289527:
			return -784020903;
		case 877935135:
			return -886117938;
		case -39646495:
			return -1416771220;
		case 1582593525:
			return 1648676911;
		case -246542229:
			return 2103833563;
		case -529454751:
			return -831636369;
		case -46978629:
			return -852290935;
		case -1347000030:
			return -1870415962;
		case -505583391:
			return -788684109;
		case 1645887374:
			return 1416435145;
		case -1559227925:
			return -1483088274;
		case 1562528937:
			return -791867098;
		case -1471526136:
			return -1689552552;
		case -1440794801:
			return -1850779170;
		case 2144711797:
			return -121487803;
		case 718825539:
			return -1280499288;
		case 2105263879:
			return 820245961;
		case -905842006:
			return -889526774;
		case 1191274340:
			return -521025998;
		case 1613453781:
			return 1583031244;
		case -1030182399:
			return -2115599211;
		case 987967309:
			return -767176802;
		case -1060737769:
			return -750945821;
		case 553310445:
			return -2135749211;
		case -1838865945:
			return 2063108046;
		case 1418092959:
			return 1299111759;
		case -1315697778:
			return 1595322723;
		case -1772126340:
			return 784918835;
		case -935543049:
			return -676310905;
		case 1772544356:
			return -1719545959;
		case -266273535:
			return -2142423934;
		case -1670544626:
			return 747751566;
		case 1290960696:
			return -1942682403;
		case 1913571052:
			return 1018433784;
		case 1717601520:
			return -796185392;
		case 430397370:
			return -49549406;
		case 16287711:
			return 857788498;
		case -1356230367:
			return 1223148871;
		case 1417331079:
			return 939407236;
		case -884124246:
			return 1608778431;
		case 1884610748:
			return -2033821082;
		case 746558492:
			return -993340234;
		case -892811627:
			return -1861062075;
		case -2040522845:
			return 1645001514;
		case -1224510844:
			return 782371031;
		case 1334837390:
			return 1255529169;
		case 339620522:
			return 70898308;
		case 1770451033:
			return -1050350982;
		case 756657535:
			return 581781784;
		case 862898895:
			return -1363330863;
		case 1997845858:
			return -1780911288;
		case -1930144509:
			return 1018306802;
		case 1846915545:
			return 1615521415;
		case -1816929509:
			return -1499066338;
		case 1197831625:
			return 1711081908;
		case -1866642239:
			return -164705;
		case -1508120809:
			return -2044044647;
		case -1007681885:
			return -859583379;
		case 434924608:
			return -759504052;
		case 1666393029:
			return 700225820;
		case -1814593136:
			return 136458586;
		case -1188120304:
			return 799105420;
		case 1978734761:
			return -481655757;
		case -824902132:
			return 484160931;
		case -1015531226:
			return 1010699907;
		case -581619522:
			return 1550264248;
		case -861854914:
			return -371992731;
		case -545447034:
			return 1090294483;
		case -1824684934:
			return -274175035;
		case 980653387:
			return -1064414912;
		case -1011598664:
			return -2091620305;
		case -177476569:
			return -468684824;
		case 416630124:
			return 1668870118;
		case 1925728375:
			return -534004020;
		case -1080457688:
			return -2126925270;
		case 1742676369:
			return 2008380517;
		case -899751553:
			return -510697884;
		case 431501574:
			return -955209948;
		case 2126795269:
			return 1459836898;
		case 1489051752:
			return 303969766;
		case -1705499323:
			return -1707588662;
		case -2013445740:
			return -1224075784;
		case 102446365:
			return -1806671048;
		case -1927342740:
			return 749765420;
		case -410900360:
			return 462936163;
		case -1073614594:
			return -8888941;
		case 2060013792:
			return 1640227110;
		case 581032175:
			return -1241188722;
		case -581931638:
			return -1030962659;
		case -1528265128:
			return 112552982;
		case -142632645:
			return -1599578931;
		case -2048519180:
			return 1296331626;
		case 1442025993:
			return -1256398198;
		case 441195430:
			return 1297800973;
		case 748665395:
			return 1772582754;
		case 351048413:
			return -1459876379;
		case -914779013:
			return 1127406863;
		case 1323485831:
			return 1779996957;
		case -365111821:
			return 1885306923;
		case 101495387:
			return 1244107697;
		case 157917500:
			return -1201555940;
		case -936537044:
			return -668487833;
		case -1610329427:
			return -1178150148;
		case -1836227998:
			return 1171158615;
		case 619479575:
			return -2123554124;
		case -1444929945:
			return 1806705761;
		case -929322235:
			return 404581836;
		case -548076717:
			return 987197489;
		case -281211381:
			return -1259715647;
		case 493457089:
			return -1716717840;
		case -479485786:
			return -196277007;
		case 27838955:
			return -2064457926;
		case 1641833719:
			return 561267454;
		case -314933180:
			return 686253083;
		case -827518870:
			return -2115566177;
		case 1367447057:
			return -1886936864;
		case -2092697195:
			return 777641606;
		case -2043601589:
			return 1815502722;
		case 1758585485:
			return 1518910503;
		case 1527400190:
			return 1020297399;
		case 1493601140:
			return -438328437;
		case -885592109:
			return -132069363;
		case -1282621313:
			return 1718756614;
		case -70954328:
			return 616254818;
		case -1378208045:
			return 1586020612;
		case 1450608653:
			return 1892902297;
		case 1543592331:
			return 1920759986;
		case 1842740532:
			return 1683741809;
		case 2004357248:
			return 403588059;
		case -229670230:
			return -352805801;
		case 546758456:
			return 1491466288;
		case 1888419655:
			return -1066678466;
		case -2040849706:
			return -375348364;
		case 2014346813:
			return -101301217;
		case -1638839614:
			return 213936563;
		case 1705186999:
			return 897866285;
		case -1821314478:
			return 1135507073;
		case -1434083213:
			return -1671125008;
		default:
			break;
	}
	return 0;
}

int func_482(int iParam0)
{
	iVar0 = 0;
	iVar1 = Global_1915715->f_20646.f_1010.f_201;
	if (iParam0 != 0)
	{
		if (iVar1 < 200)
		{
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				if (&Global_1915715->f_20646.f_1010[iVar0] == iParam0)
				{
					return 1;
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_483(int iParam0, int iParam1)
{
	if (!func_263(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar5 = func_661(iParam1);
	if (iVar5 == -1)
	{
		return 0;
	}
	if (!func_673(6, &Var0))
	{
		return 0;
	}
	Var0.f_2 = -815325344;
	Var0.f_3 = func_674(iVar5);
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

bool func_484(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_660(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_675(iParam0))
	{
		return false;
	}
	if (func_676(iParam0))
	{
		return false;
	}
	if ((Global_1900736->f_67 && !func_659(iParam0, 1)) || func_16(32768))
	{
		if (!func_659(iParam0, 262144) || !Global_1904651->f_8686)
		{
			return false;
		}
	}
	if (!func_677())
	{
		return false;
	}
	return true;
}

void func_485(int iParam0, int iParam1)
{
	uVar0 = Global_1904651[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1904651)[iParam0] = uVar0;
}

bool func_486()
{
	if (func_678())
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Global_1904651[iVar0] != 0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_487(bool bParam0)
{
	if (func_679())
	{
		return false;
	}
	if ((!is_screen_faded_in() || is_screen_fading_in()) || is_screen_fading_out())
	{
		return false;
	}
	if (func_680(&(Global_1102219->f_4), 1, 5))
	{
		return false;
	}
	if (!bParam0)
	{
		if (!func_486())
		{
			return false;
		}
	}
	if ((Global_13 || Global_1048584) // PointerArith || func_681())
	{
		return false;
	}
	if (!func_677())
	{
		return false;
	}
	if (func_682())
	{
		return false;
	}
	if (_0xf236c84c6adfcb2f())
	{
		return false;
	}
	if (is_pause_menu_active())
	{
		return false;
	}
	if ((Global_1915715->f_20638 && Global_1915715->f_20241.f_43 == 2) && Global_1940311->f_1)
	{
		return false;
	}
	if (func_683())
	{
		return false;
	}
	return true;
}

void func_488(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	if (func_684(iParam0, iParam1, 1))
	{
		iVar0 = func_685(iParam1);
		iVar1 = func_686(iParam0);
		iVar2 = (func_686(iParam0) - func_686(iParam1));
		iVar3 = (func_685(iParam0) - func_685(iParam1));
		iVar4 = (func_687(iParam0) - func_687(iParam1));
		iVar5 = (func_688(iParam0) - func_688(iParam1));
		iVar6 = (func_689(iParam0) - func_689(iParam1));
		iVar7 = (func_690(iParam0) - func_690(iParam1));
	}
	else
	{
		iVar0 = func_685(iParam0);
		iVar1 = func_686(iParam1);
		iVar2 = (func_686(iParam1) - func_686(iParam0));
		iVar3 = (func_685(iParam1) - func_685(iParam0));
		iVar4 = (func_687(iParam1) - func_687(iParam0));
		iVar5 = (func_688(iParam1) - func_688(iParam0));
		iVar6 = (func_689(iParam1) - func_689(iParam0));
		iVar7 = (func_690(iParam1) - func_690(iParam0));
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
		iVar4 = (iVar4 + func_691(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_692(to_float(iVar0 + 1), 0f, 12f));
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

char* func_489(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

char* func_490(int iParam0)
{
	if (iParam0 == 255)
	{
		if (func_693(40, iParam0))
		{
			return _0xd8402b858f4ddd88(&(Global_1102219->f_12), get_length_of_literal_string(&(Global_1102219->f_12)));
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
	if (!&Global_1296859->f_22[iParam0])
	{
		return sVar0;
	}
	if (func_693(40, iParam0))
	{
		return _0xd8402b858f4ddd88(&((*Global_1100469)[iParam0]->f_12), get_length_of_literal_string(&((*Global_1100469)[iParam0]->f_12)));
	}
	return get_player_name(&(Global_1296859->f_154[iParam0]));
}

char* func_491(char* sParam0, int iParam1)
{
	sParam0 = _format_player_name_string(sParam0);
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_694(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

bool func_492()
{
	return false;
}

bool func_493()
{
	return false;
}

bool func_494(int iParam0, int iParam1)
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

int func_495(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 100;
	}
	return 0;
}

int func_496(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return 0;
	}
	if (func_494(iParam1, &iVar0))
	{
		return _get_attribute_core_value(iParam0, iVar0);
	}
	return 0;
}

void func_497(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	iParam2 = func_384(iParam2, 0, 100);
	if (func_494(iParam1, &iVar0))
	{
		_set_attribute_core_value(iParam0, iVar0, iParam2);
	}
}

float func_498(int iParam0, int iParam1)
{
	iVar0 = get_game_timer();
	iVar1 = (iVar0 - Global_39.f_281.f_1[iParam0]->f_431[iParam1]->f_3);
	iVar1 = func_384(iVar1, 0, 30000);
	fVar2 = (to_float(iVar1) * 0.001f);
	return fVar2;
}

void func_499(int iParam0, int iParam1, int iParam2)
{
	Global_39.f_281.f_1[iParam0]->f_422[iParam1]->f_3 = iParam2;
}

void func_500(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (func_494(iParam2, &iVar1))
	{
		iVar0 = _get_attribute_core_value(iParam0, iVar1);
	}
	iVar2 = func_439(iParam1, iParam2);
	if (iVar2 != iVar0)
	{
		func_695(iParam1, iParam2, iVar0);
	}
}

float func_501(int iParam0, int iParam1)
{
	return Global_39.f_281.f_1[iParam0]->f_422[iParam1]->f_2;
}

void func_502(int iParam0, int iParam1)
{
	fVar0 = func_501(iParam0, iParam1);
	fVar1 = func_498(iParam0, iParam1);
	fVar0 = (fVar0 - fVar1);
	if (fVar0 < 0f)
	{
		fVar0 = 0f;
	}
	func_696(iParam0, iParam1, fVar0);
}

void func_503(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(Global_34))
	{
		return;
	}
	if (is_entity_dead(Global_34))
	{
	}
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	bVar0 = false;
	if (func_74(iParam1) == 2)
	{
		bVar0 = true;
	}
	bVar1 = false;
	if (func_255(iParam0))
	{
		bVar1 = true;
	}
	bVar2 = false;
	if (is_ped_on_mount(Global_34))
	{
		if (get_mount(Global_34) == iParam0)
		{
			bVar2 = true;
		}
	}
	bVar3 = false;
	if (_0xefc4303ddc6e60d3(Global_34))
	{
		if (_0xed1f514af4732258(Global_34) == iParam0)
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
			iVar5 = func_439(iParam1, iParam2);
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
			else if (func_697(iParam0, iParam2))
			{
				bVar7 = true;
			}
			else
			{
				fVar4 = -60f;
				fVar8 = func_698(iParam1, iParam2);
				fVar4 = (fVar4 - (fVar4 * fVar8));
			}
			break;
	}
	if (fVar4 < 0f)
	{
		if (func_81(4096))
		{
			bVar7 = true;
		}
	}
	if (bVar6)
	{
		if (func_249(iParam1, 128))
		{
			bVar7 = true;
		}
		else
		{
			fVar4 = 1f;
		}
	}
	fVar9 = (fVar4 * 60f);
	fVar10 = func_498(iParam1, iParam2);
	fVar11 = ((fVar10 / fVar9) * 100f);
	fVar12 = func_699(iParam1, iParam2);
	iVar13 = func_439(iParam1, iParam2);
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
		func_700(iParam1, iParam2, fVar12);
	}
	if (iVar14 == 0)
	{
		return;
	}
	func_695(iParam1, iParam2, (iVar13 + iVar14));
}

void func_504(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_20(0, &uVar0);
	func_20(1, &uVar12);
	bVar24 = false;
	if (func_121(39))
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
		func_442(1);
		func_701(get_game_timer());
	}
	if (bVar26)
	{
		func_703(func_702(2009660790), 1);
	}
}

bool func_505(int iParam0, int iParam1)
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

int func_506(int iParam0)
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

float func_507(int iParam0, int iParam1)
{
	iVar0 = get_game_timer();
	iVar1 = (iVar0 - Global_39.f_281.f_1[iParam0]->f_431[iParam1]->f_3);
	iVar1 = func_384(iVar1, 0, 30000);
	fVar2 = (to_float(iVar1) * 0.001f);
	return fVar2;
}

void func_508(int iParam0, int iParam1, int iParam2)
{
	Global_39.f_281.f_1[iParam0]->f_431[iParam1]->f_3 = iParam2;
}

void func_509(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (func_505(iParam2, &iVar0))
	{
		iVar1 = get_attribute_base_rank(iParam0, iVar0);
	}
	iVar2 = func_406(iParam1, iParam2);
	if (iVar2 != iVar1)
	{
		func_704(iParam1, iParam2, iVar1);
	}
}

float func_510(int iParam0, int iParam1)
{
	return Global_39.f_281.f_1[iParam0]->f_431[iParam1]->f_2;
}

void func_511(int iParam0, int iParam1)
{
	fVar0 = func_510(iParam0, iParam1);
	fVar1 = func_507(iParam0, iParam1);
	fVar0 = (fVar0 - fVar1);
	if (fVar0 < 0f)
	{
		fVar0 = 0f;
	}
	func_705(iParam0, iParam1, fVar0);
}

void func_512(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	bVar0 = false;
	if (func_74(iParam1) == 2)
	{
		bVar0 = true;
	}
	bVar1 = false;
	if (func_255(iParam0))
	{
		bVar1 = true;
	}
	bVar2 = false;
	switch (iParam2)
	{
		case 1:
			if (bVar0)
			{
				fVar3 = -60f;
			}
			else if (bVar1)
			{
				fVar3 = 192f;
			}
			else if (func_706(iParam0))
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
				fVar3 = -60f;
			}
			else
			{
				bVar2 = true;
			}
			break;
		case 2:
			iVar4 = func_406(iParam1, 2);
			iVar5 = (100 - func_406(iParam1, 1));
			if (iVar5 < 50)
			{
				fVar3 = -96f;
			}
			else if (iVar4 > 50)
			{
				fVar3 = -60f;
			}
			else if (iVar4 < 50)
			{
				fVar3 = 60f;
			}
			else
			{
				bVar2 = true;
			}
			break;
	}
	fVar6 = (fVar3 * 60f);
	fVar7 = func_507(iParam1, iParam2);
	fVar8 = ((fVar7 / fVar6) * 100f);
	fVar9 = func_707(iParam1, iParam2);
	iVar10 = func_406(iParam1, iParam2);
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
		func_708(iParam1, iParam2, fVar9);
	}
	if (iParam2 == 2)
	{
		if (iVar4 > 50)
		{
			if (iVar10 <= 50)
			{
				iVar10 = 50;
				func_709(iParam1, iParam2);
			}
		}
		else if (iVar4 < 50)
		{
			if (iVar10 >= 50)
			{
				iVar10 = 50;
				func_709(iParam1, iParam2);
			}
		}
	}
	if (iVar11 == 0)
	{
		return;
	}
	func_704(iParam1, iParam2, (iVar10 + iVar11));
}

void func_513(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_20(0, &Var0);
	func_20(1, &Var12);
	iVar24 = func_78(iParam0);
	bVar25 = false;
	if (iParam0 == 0 || (iParam0 == 1 && !Var0.f_2))
	{
		if ((iParam0 == 0 && Var0.f_10) || (iParam0 == 1 && Var12.f_10))
		{
			if (func_121(40))
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
			iVar28 = func_286(iVar24, 2);
			iVar29 = func_710(iParam0);
			iVar30 = func_287(iVar28);
			if (iVar29 != iVar30)
			{
				bVar31 = func_552(iVar24, iVar30, 1);
				if (bVar31)
				{
					func_288(iParam0, iVar30);
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
		func_434(1);
		func_711(get_game_timer());
	}
	if (iVar27 != 0)
	{
		_set_core_icon(iVar27);
	}
}

bool func_514()
{
	return Global_39.f_281.f_3250.f_1;
}

void func_515(int iParam0, float fParam1)
{
	Global_1903136->f_379.f_10[iParam0] = fParam1;
}

int func_516()
{
	return 5;
}

int func_517()
{
	return 6;
}

int func_518(bool bParam0)
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

struct<4> func_519()
{
	return Var0;
}

int func_520(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

bool func_521(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	func_712(&iParam0);
	if (!func_263(iParam0, 0) && !func_713(func_592(iParam0), 2))
	{
		return false;
	}
	if (!bParam3 && func_520(iParam0, -455129387) == 0)
	{
		bParam3 = true;
	}
	if (func_714(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		Var0 = { func_715(0) };
		Var4.f_9 = -1591664384;
		if (!func_716(iParam0, &Var0, 1728382685, 0, 0))
		{
			return false;
		}
		else if (func_717(iParam0, &Var4, 1728382685))
		{
			return false;
		}
		if (func_718(iParam0, 1))
		{
			if (!func_716(iParam0, &Var0, -649335959, 0, 0))
			{
				return false;
			}
			else if (func_717(iParam0, &Var4, -649335959))
			{
				return false;
			}
		}
		return true;
	}
	iVar26 = iParam5;
	if (iParam5 < 0)
	{
		iVar26 = func_719(iParam0, uParam1, bParam3, bParam4);
	}
	if (iVar26 < 0)
	{
		return false;
	}
	else if (iVar26 == 0)
	{
		return true;
	}
	iVar27 = func_264(iParam0, *uParam1, uParam1->f_4, bParam4, bParam3, iParam6);
	if ((iVar27 + iParam2) > iVar26)
	{
		return true;
	}
	return false;
}

bool func_522(bool bParam0)
{
	if (func_2() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_518(bParam0));
}

int func_523(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = -1;
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_524(*uParam0, &Var1, 1, 0, -1))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam1)
	{
		return iVar0;
	}
	if (Var1.f_13)
	{
		return iVar0;
	}
	iVar15 = func_600(Var1.f_4);
	if (iVar15 == -1784221369)
	{
		Var16 = { func_720(*uParam0, 1, 0) };
		Var16.f_10 = iParam1;
		iVar0 = func_721(-1230526146, &Var16, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -2072933068)
	{
		Var44 = { func_722(*uParam0, 1, 0) };
		Var44.f_10 = iParam1;
		iVar0 = func_723(-1230526146, &Var44, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -1037537535)
	{
		Var69 = { func_724(*uParam0, 1, 0) };
		Var69.f_10 = iParam1;
		iVar0 = func_725(-1230526146, &Var69, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var86 = { func_726(&Var1, 0) };
		Var86.f_10 = iParam1;
		iVar0 = func_727(-1230526146, &Var86, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

bool func_524(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_728(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

void func_525(int iParam0)
{
	iVar0 = func_158(iParam0);
	request_model(iVar0, false);
}

void func_526(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar0 = &Global_39.f_281.f_1[iParam0]->f_15[iVar1];
		if (is_model_valid(iVar0))
		{
			request_model(iVar0, false);
		}
		iVar1++;
	}
}

bool func_527(int iParam0)
{
	iVar0 = func_158(iParam0);
	if (!has_model_loaded(iVar0))
	{
		return false;
	}
	return true;
}

bool func_528(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar0 = &Global_39.f_281.f_1[iParam0]->f_15[iVar1];
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

bool func_529(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 5)
	{
		return true;
	}
	return false;
}

void func_530(int iParam0, int iParam1)
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

void func_531(int iParam0, int iParam1)
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

int func_532(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return Global_39.f_281.f_1[iParam0]->f_455;
}

int func_533(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return Global_39.f_281.f_1[iParam0]->f_456;
}

void func_534(int iParam0, var uParam1, int iParam2)
{
	Global_1291734->f_938.f_241[iParam2] = 0;
	if (!is_model_valid(*uParam1))
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			vVar3 = { 0f, -1f, 0f };
			break;
		case 1:
			vVar3 = { -1f, 0f, 0f };
			break;
		case 2:
			vVar3 = { 1f, 0f, 0f };
			break;
	}
	vVar0 = { get_offset_from_entity_in_world_coords(iParam0, vVar3) };
	if (_0x274ee1b90cfa669e(*uParam1))
	{
		iVar6 = create_object(*uParam1, vVar0, true, false, false, false, true);
		set_model_as_no_longer_needed(*uParam1);
		if (!does_entity_exist(iVar6))
		{
			return;
		}
		iVar8 = func_729(iParam2);
		task_carriable(iVar6, uParam1->f_3, iParam0, iVar8, 256);
		_0x399657ed871b3a6c(iVar6, uParam1->f_1);
		_0xef259aa1e097e0ad(iVar6, uParam1->f_93);
		iVar18 = func_730(iParam0, iVar6);
	}
	else if (is_model_a_ped(*uParam1))
	{
		iVar7 = func_731(*uParam1, vVar0, 0, 1, 0, 0, 1, 1, 0, 0, 1);
		set_model_as_no_longer_needed(*uParam1);
		if (!does_entity_exist(iVar7))
		{
			return;
		}
		if (uParam1->f_8 != 0)
		{
			_set_ped_body_component(iVar7, uParam1->f_8);
		}
		iVar9 = 0;
		while (iVar9 < uParam1->f_9)
		{
			uVar10 = &uParam1->f_10[iVar9];
			uVar11 = uParam1->f_10[iVar9]->f_1;
			uVar12 = uParam1->f_10[iVar9]->f_2;
			uVar13 = uParam1->f_10[iVar9]->f_3;
			uVar14 = uParam1->f_10[iVar9]->f_4;
			uVar15 = uParam1->f_10[iVar9]->f_5;
			uVar16 = uParam1->f_10[iVar9]->f_6;
			uVar17 = uParam1->f_10[iVar9]->f_7;
			_0xbc6df00d7a4a6819(iVar7, uVar10, uVar11, uVar12, uVar13, uVar14, uVar15, uVar16, uVar17);
			iVar9++;
		}
		_update_ped_variation(iVar7, false, true, true, true, false);
		if (uParam1->f_2 == 2)
		{
			_set_entity_health(iVar7, 0, 0);
			set_ped_config_flag(iVar7, 517, true);
			_0xf5622fa6acfca7db(iVar7, uParam1->f_91);
		}
		if (_0x9a100f1cf4546629(iVar7))
		{
			_set_ped_quality(iVar7, uParam1->f_4);
			_0x8b6f0f59b1b99801(iVar7, uParam1->f_5);
			_set_ped_damage(iVar7, uParam1->f_6);
			_set_ped_damaged(iVar7, uParam1->f_7);
		}
		if (uParam1->f_92)
		{
			_0x6569f31a01b4c097(iVar7, 0, 0);
			_0x6bcf5f3d8ffe988d(iVar7, 1);
		}
		iVar8 = func_729(iParam2);
		task_carriable(iVar7, uParam1->f_3, iParam0, iVar8, 256);
		_0x399657ed871b3a6c(iVar7, uParam1->f_1);
		_0xef259aa1e097e0ad(iVar7, uParam1->f_93);
		if (uParam1->f_94)
		{
			set_entity_render_scorched(iVar7, true);
			start_entity_fire(iVar7, 0, -1, 8);
		}
		iVar19 = func_732(iVar7);
		iVar20 = func_221(iVar19);
		if (func_263(iVar20, 0))
		{
			if (iVar20 != uParam1->f_1)
			{
				uParam1->f_1 = iVar20;
			}
		}
		iVar21 = func_730(iParam0, iVar7);
	}
}

void func_535(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (iVar0 == -1)
		{
		}
		else
		{
			Global_39.f_281.f_1[iParam0]->f_398.f_2[iVar0] = 0f;
		}
		iVar0++;
	}
}

void func_536()
{
	iVar0 = 0;
	while (iVar0 < 7)
	{
		Global_1903136->f_303.f_2[iVar0] = -1;
		Global_1903136->f_303.f_2[iVar0]->f_1 = -1;
		Global_1903136->f_303.f_2[iVar0]->f_2 = 0f;
		Global_1903136->f_303.f_2[iVar0]->f_3 = -1;
		Global_1903136->f_303.f_2[iVar0]->f_4 = 0f;
		iVar0++;
	}
}

bool func_537(int iParam0, var uParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_652(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = func_733(Var0, 1415981582, 0, -1);
	if (!func_263(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_538(int iParam0, var uParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_652(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = func_733(Var0, -2119169513, 0, -1);
	if (!func_263(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_539(int iParam0, var uParam1)
{
	if (!func_734(856287005, iParam0))
	{
		return false;
	}
	Var0 = { func_70() };
	*uParam1 = func_733(Var0, iParam0, 0, -1);
	if (!func_263(*uParam1, 0))
	{
		return false;
	}
	return true;
}

void func_540(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
}

void func_541(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_542(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_543(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
}

void func_544(var uParam0, int iParam1)
{
	uParam0->f_3 = iParam1;
}

void func_545(var uParam0, int iParam1)
{
	uParam0->f_4 = iParam1;
}

void func_546(var uParam0, int iParam1)
{
	uParam0->f_5 = iParam1;
}

void func_547(var uParam0, int iParam1)
{
	uParam0->f_6 = iParam1;
}

void func_548(int iParam0)
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

void func_549(int iParam0, var uParam1)
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
	func_735(iParam0, *uParam1);
	func_735(iParam0, uParam1->f_1);
}

void func_550(int iParam0)
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
	_0xdf631e4bce1b1fc4(iParam0, 355515932, 0, 0);
	_0xdf631e4bce1b1fc4(iParam0, -749728163, 0, 0);
}

void func_551(int iParam0, var uParam1)
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
	func_735(iParam0, *uParam1);
	func_735(iParam0, uParam1->f_1);
	func_735(iParam0, uParam1->f_2);
	func_735(iParam0, uParam1->f_3);
	func_735(iParam0, uParam1->f_4);
	func_735(iParam0, uParam1->f_5);
	func_735(iParam0, uParam1->f_6);
	func_735(iParam0, uParam1->f_7);
}

int func_552(int iParam0, int iParam1, bool bParam2)
{
	if (!does_entity_exist(iParam0))
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

bool func_553()
{
	if (!func_81(8))
	{
		return false;
	}
	return true;
}

int func_554()
{
	return Global_1903136->f_429;
}

int func_555()
{
	return Global_1903136->f_429.f_1;
}

void func_556(int iParam0)
{
	Global_1903136->f_429 = *iParam0;
}

void func_557(int iParam0)
{
	Global_1903136->f_429.f_1 = *iParam0;
}

void func_558(int iParam0, int iParam1, bool bParam2)
{
	func_396(iParam0, &iVar0, &iVar1);
	if (!func_484(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_659(iParam0, 1024))
	{
		return;
	}
	func_485(iVar0, iVar1);
	Global_1904651->f_33[iParam0]->f_3[0] = iParam1;
	Global_1904651->f_33[iParam0]->f_3[0]->f_1 = 3;
}

void func_559(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	func_736(&(uParam0->f_3));
	uParam0->f_12 = 1;
	uParam0->f_13 = 0;
}

Vector3 func_560(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f, 0f, 0f;
	}
	return (*Global_1903136)[iParam0]->f_37;
}

bool func_561(var uParam0, vector3 vParam1, vector3 vParam4, var uParam7, float fParam8)
{
	iVar6 = 12;
	if (func_192(vParam4))
	{
		vVar8 = { get_gameplay_cam_rot(2) };
		fVar7 = vVar8.z;
	}
	else
	{
		fVar7 = func_564(vParam4, vParam1, 1);
	}
	fVar7 = (fVar7 + ((to_float(uParam0->f_2) * 10f) * func_737((uParam0->f_2 % 2) == 0, 1f, -1f)));
	vVar0 = { vParam1 + Vector(0f, -cos(fVar7), sin(fVar7)) * FtoV(((80f + 40f) * 0.5f)) * Vector(fParam8, fParam8, fParam8) };
	if (uParam0->f_2 > 3)
	{
		iVar6 = 13;
	}
	switch (func_738(uParam0))
	{
		case 0:
			func_739(uParam0, 0f, 0f, 0f);
			uParam0->f_3.f_2 = 0;
			uParam0->f_3 = 0;
			uParam0->f_1 = 0;
			uParam0->f_13 = 0;
			uParam0->f_14 = 0;
			func_740(uParam0, 1);
			break;
		case 1:
			if (get_closest_vehicle_node(vVar0, &vVar3, 1, 3f, 0f))
			{
				if (func_741(vVar3, vParam1, 0, 0))
				{
					func_739(uParam0, vVar3);
					if (uParam0->f_12)
					{
						func_740(uParam0, 3);
					}
					else
					{
						func_740(uParam0, 4);
					}
				}
				else
				{
					func_740(uParam0, 2);
				}
			}
			else
			{
				func_740(uParam0, 2);
			}
			break;
		case 2:
			bVar11 = false;
			if (func_742(vVar0, &(uParam0->f_3), &bVar11, iVar6, 0, 1127481344, 1101004800, -1138501878, -1138501878, 0))
			{
				if (func_741(func_563(uParam0), vParam1, 1, 1))
				{
					if (uParam0->f_12)
					{
						func_740(uParam0, 3);
					}
					else
					{
						func_740(uParam0, 4);
					}
				}
				else
				{
					func_740(uParam0, 5);
				}
			}
			else if (bVar11)
			{
				func_740(uParam0, 5);
			}
			break;
		case 3:
			if (uParam0->f_13 == 0)
			{
				uParam0->f_13 = _0x348f211ca2404039(uParam7, func_563(uParam0), vParam1, 23);
				if (uParam0->f_13 == -1)
				{
					uParam0->f_14++;
					uParam0->f_13 = 0;
					if (uParam0->f_14 >= 50)
					{
						func_740(uParam0, 5);
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
						func_740(uParam0, 5);
						break;
					case 1:
						uVar12 = _0xf61cfedeab627bfa(uParam0->f_13);
						if (func_743(uVar12, 2) && iVar6 != 13)
						{
							func_740(uParam0, 5);
						}
						else
						{
							func_740(uParam0, 4);
						}
						_0x661bb1e1ff77742d(uParam0->f_13);
						break;
				}
			}
			break;
		case 4:
			uParam0->f_2 = 0;
			func_744(&(uParam0->f_3.f_3), 1, 1, 0, 0);
			func_740(uParam0, 0);
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
			func_740(uParam0, 0);
			break;
	}
	return false;
}

bool func_562(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	return func_745(iParam0, &Var0);
}

Vector3 func_563(var uParam0)
{
	return uParam0->f_3.f_3;
}

float func_564(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

void func_565(int iParam0, vector3 vParam1, float fParam4)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1903136)[iParam0]->f_19 = { vParam1 };
	(*Global_1903136)[iParam0]->f_22 = fParam4;
}

void func_566(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_746(iParam0, 1);
}

bool func_567(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_66(iParam0))
	{
		return false;
	}
	iVar0 = func_78(iParam0);
	iVar1 = func_138(iParam0);
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

void func_568(int iParam0, bool bParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = Global_1903136[iParam0];
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

int func_569()
{
	return Global_1903136->f_364.f_9;
}

bool func_570(int iParam0)
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

int func_571(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1940258->f_12)
	{
		if ((bParam2 || Global_1940258->f_13 > 0) || Global_1940258->f_11 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1940258->f_9 == 1370593166)
	{
		return 0;
	}
	if (Global_1940258->f_14 > 0 || (bParam2 && Global_1940258->f_14 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1940258->f_7)
		{
			if (bParam2 || Global_1940258->f_15 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_572(int iParam0, int iParam1)
{
	_copy_memory(&(Global_1903136->f_491), Global_39.f_281.f_1[iParam1], 460);
	_copy_memory(Global_39.f_281.f_1[iParam1], Global_39.f_281.f_1[iParam0], 460);
	_copy_memory(Global_39.f_281.f_1[iParam0], &(Global_1903136->f_491), 460);
}

void func_573(int iParam0, int iParam1)
{
	_copy_memory(&(Global_1903136->f_448), (*Global_1903136)[iParam1], 43);
	_copy_memory((*Global_1903136)[iParam1], (*Global_1903136)[iParam0], 43);
	_copy_memory((*Global_1903136)[iParam0], &(Global_1903136->f_448), 43);
}

int func_574(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	Var29.f_9 = -1591664384;
	if (!func_652(iParam0, &Var0))
	{
		return 0;
	}
	bVar58 = false;
	if (!func_652(iParam1, &Var29))
	{
		bVar58 = true;
	}
	if (bVar58)
	{
		iVar59 = func_650(iParam1);
		if (iVar59 == 0)
		{
			return 0;
		}
		if (!func_747(Var0, Var0.f_5, iVar59, 0, 0))
		{
			return 0;
		}
	}
	else if (!func_748(Var0, Var29, 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_575(int iParam0)
{
	Global_1903136->f_406.f_1 = iParam0;
}

bool func_576(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_652(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { func_262(iParam1, Var0, 1415981582, 0) };
	return func_267(Var29, 1, 0);
}

bool func_577(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_652(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { func_262(iParam1, Var0, -2119169513, 0) };
	return func_267(Var29, 1, 0);
}

void func_578(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_78(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar1 = get_entity_model(iVar0);
	iVar2 = func_749(iVar1);
	if (decor_exist_on(iVar0, "HorseGender"))
	{
		iVar3 = decor_get_int(iVar0, "HorseGender");
	}
	else
	{
		iVar3 = func_750(iVar0);
		decor_set_int(iVar0, "HorseGender", iVar3);
	}
	func_751(iParam0, iVar1);
	func_752(iParam0, iVar2);
	func_753(iParam0, iVar3);
	iVar4 = -1;
	iVar5 = -15;
	if (iParam1 != 0)
	{
		iVar4 = get_game_timer();
		iVar5 = func_242();
	}
	func_152(iParam0, iParam1);
	func_754(iParam0, iVar4);
	func_755(iParam0, iVar5);
	iVar6 = get_attribute_rank(iVar0, 7);
	fVar7 = to_float(get_attribute_points(iVar0, 7));
	func_350(iParam0, iVar6);
	func_642(iParam0, fVar7);
	iVar8 = 0;
	while (iVar8 < 3)
	{
		if (func_505(iVar8, &iVar9))
		{
			iVar10 = get_attribute_rank(iVar0, iVar9);
			func_704(iParam0, iVar8, iVar10);
		}
		iVar8++;
	}
}

void func_579(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_39.f_281.f_1[iParam0]->f_457 = iParam1;
}

int func_580(int iParam0)
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

int func_581(var uParam0, int iParam1, var uParam2)
{
	*uParam0 = 0;
	*iParam1 = 0;
	*uParam2 = 0;
	*uParam0 = func_756();
	*iParam1 = func_757();
	*uParam2 = func_758();
	return 1;
}

int func_582(int iParam0)
{
	if (!is_model_valid(iParam0))
	{
		iParam0 = 1074477367;
	}
	iVar0 = get_default_max_attribute_rank(iParam0, 7);
	return iVar0;
}

void func_583(int iParam0)
{
	if (func_465() < iParam0)
	{
		func_759(iParam0);
	}
}

int func_584()
{
	return Global_1893587->f_2;
}

bool func_585(int iParam0)
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
		case -241666815:
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

bool func_586(int iParam0)
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

bool func_587(int iParam0)
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

bool func_588(int iParam0)
{
	switch (iParam0)
	{
		case -1795542128:
		case 1627068364:
			return true;
	}
	return false;
}

bool func_589(int iParam0)
{
	switch (iParam0)
	{
		case -1632917921:
			return true;
	}
	return false;
}

bool func_590(int iParam0)
{
	switch (iParam0)
	{
		case -1516555556:
			return true;
	}
	return false;
}

bool func_591(int iParam0)
{
	switch (iParam0)
	{
		case -1724045811:
			return true;
	}
	return false;
}

int func_592(int iParam0)
{
	return iParam0;
}

int func_593(int iParam0, int iParam1)
{
	if (!func_713(iParam0, 2))
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

bool func_594(int iParam0)
{
	return func_600(iParam0) == 2085633299;
}

int func_595(int iParam0, int iParam1)
{
	if (!func_263(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_600(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_372(iParam0, 1399091007))
	{
		func_760(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

void func_596(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!func_263(iParam0, 0))
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
	if (!func_761() || bParam6)
	{
		func_762(iParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_763(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam0 == 1701457723)
	{
		StringCopy(&cVar2, "ITEM_GET_PUMP", 32);
	}
	if (iParam1 > 0)
	{
	}
	else if (bParam3 || bParam4)
	{
		StringCopy(&cVar2, func_763(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		bVar0 = true;
	}
	else if (bParam2 && func_764(iParam0, 2097152))
	{
		StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		bVar0 = true;
	}
	iVar6 = func_600(iParam0);
	iVar10 = 0;
	iVar11 = 805880880;
	if (((((((iVar6 == 307971639 && iParam0 != 424030678) && iParam0 != -1188697038) && iParam0 != 446901936) && iParam0 != -228768324) && iParam0 != 34372170) && iParam0 != 963726415) && iParam0 != 1701457723)
	{
		iVar10 = 622449822;
		iVar11 = 622449822;
	}
	iVar12 = func_765(iParam0);
	if (((((((iVar6 == -1013984273 || iVar6 == 658570475) || iVar12 == -1674363638) || iVar12 == 252325943) || iVar12 == 829857647) || iVar12 == -636562458) || iVar12 == 1341188928) || iVar12 == 1216664798)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_766(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	if (func_372(iParam0, 474910316))
	{
		sVar17 = func_767(iParam0);
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
	if (func_372(iParam0, 1816585950))
	{
		iVar13 = 76603059;
	}
	if (func_768(iParam0))
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
	iVar18 = func_769(iParam0);
	if ((func_770(iVar12) && func_372(iParam0, -306684263)) && iVar18 != 0)
	{
		iVar18 = func_771(iParam0);
	}
	else if (func_600(iParam0) == -1037537535)
	{
		iVar19 = func_772(iParam0);
		if (func_263(iVar19, 0))
		{
			iVar18 = func_769(iVar19);
		}
	}
	if (func_773(iParam0, 1443104131) && bParam3)
	{
		iVar20 = 1;
		func_774(iParam0, -915411861, &iVar20, 0);
		iVar1 = ceil((to_float(iVar1) / to_float(iVar20)));
		iParam1 = ceil((to_float(iParam1) / to_float(iVar20)));
	}
	sVar21 = func_694(_create_var_string(10, &cVar2, _create_var_string(0, iVar18), iVar1), iVar13);
	if (iParam1 == 1)
	{
		sVar21 = _create_var_string(0, iVar18);
	}
	if ((((((iVar12 == -1839668642 && iParam0 != -1713496139) && iParam0 != 1326838792) && iParam0 != -230310728) || ((iVar12 == 231148558 && iParam0 != 1733464892) && iParam0 != -598283164)) || (iVar12 == 252325943 && iParam0 != -860557048)) || (iVar12 == -636562458 && iParam0 != -2087489409))
	{
		sVar21 = _create_var_string(0, func_775(iParam0, -442898163));
	}
	if (iVar12 == -126813555 || iVar12 == 1946043663)
	{
		StringCopy(&cVar22, "", 128);
		if (func_776(iParam0, &cVar22))
		{
			sVar21 = func_778(func_777(cVar22), 109029619);
		}
	}
	func_633(sVar21, Var7.f_1, get_hash_key(Var7), iVar16, iVar13, sVar15, sVar14, 0, 1);
}

bool func_597(int iParam0, int iParam1)
{
	if (!func_263(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_600(iParam0);
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
			if (!func_779(iParam0, 1))
			{
				return false;
			}
			break;
		case -1037537535:
			if (func_780(iParam0))
			{
				return true;
			}
			break;
	}
	return func_599(iParam0, 0, 0, 0) >= iParam1;
}

struct<2> func_598(int iParam0)
{
	if (!func_263(iParam0, 0))
	{
		return Var0;
	}
	if (func_372(iParam0, -305066475))
	{
		if (func_2() == -1)
		{
			if (func_372(iParam0, -537818634))
			{
				return func_781(189951448);
			}
			else
			{
				return func_781(1176172851);
			}
		}
	}
	else if (func_372(iParam0, -537818634))
	{
		return func_781(-963660207);
	}
	if (func_372(iParam0, 2084895747))
	{
		return func_781(1694039471);
	}
	return Var2;
}

int func_599(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	iVar0 = 0;
	if (!func_263(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_600(iParam0);
	if (iVar1 == 307971639 || (bParam1 && iVar1 == -427144552))
	{
		iVar2 = func_595(iParam0, 1);
		if (iVar2 != 0)
		{
			return get_ped_ammo_by_type(Global_34, iVar2);
		}
	}
	else if (iVar1 == -427144552)
	{
		return func_782(iParam0, 0);
	}
	if (func_520(iParam0, -455129387) != 0)
	{
		iVar0 = _0xe787f05dfc977bde(func_518(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_783(iParam0, bParam2) };
		if (!_0xb881ca836cc4b6d4(&Var3))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_518(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

int func_600(int iParam0)
{
	if (!func_263(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_601(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	Var0 = { func_784(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam2)
	{
		func_785(&Var0, func_715(0));
	}
	if (!func_786(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_787(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_653(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_788(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_602(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_263(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_520(iParam0, -455129387);
	if (iVar0 != 0)
	{
		return func_789(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var1 = { func_603(iParam0, bParam4, 0) };
	Var6 = { func_262(iParam0, Var1, Var1.f_4, bParam4) };
	return func_653(iParam0, &Var6, &Var1, iParam1, iParam2, bParam3, bParam4);
}

struct<5> func_603(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_261(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_600(iParam0);
	switch (iVar5)
	{
		case -1037537535:
			Var0 = { func_262(889965687, Var0, 1034665895, bParam1) };
			Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			break;
		case -427144552:
			Var0 = { func_715(bParam1) };
			if (bParam2 && func_718(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_716(iParam0, &Var0, 1728382685, 0, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_716(iParam0, &Var0, -649335959, 0, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_717(iParam0, &Var6, 1728382685))
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
			Var0 = { func_790(bParam1) };
			switch (func_765(iParam0))
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
			if (func_791(iParam0, -1823706425))
			{
				Var0 = { func_262(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_791(iParam0, -1483207246))
			{
				Var0 = { func_262(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1911121386))
			{
				Var0 = { func_262(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_791(iParam0, -1653629781))
			{
				Var0 = { func_262(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_524(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_791(iParam0, -1653629781))
			{
				Var0 = { func_262(1384535894, Var0, 1784584921, bParam1) };
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

void func_604(int iParam0, bool bParam1, int iParam2)
{
	Global_1940311->f_4 = iParam0;
	Global_1940311->f_34 = iParam2;
	if (bParam1 || (func_792() && iParam2 == 0))
	{
		func_793(1);
		func_794(1);
	}
}

void func_605(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (!_item_database_is_key_valid(iParam1, 0))
	{
		return;
	}
	func_703(func_702(-1501807946), 1);
	Var0 = { func_380(0, 1, 0, -1) };
	bVar4 = _0x33fa048675821da7(iParam0, 3);
	if (!bVar4)
	{
		_0x2eb75fb86c41f026(iParam0, 3, 1);
	}
	_0x06d26a96ca1bca75(iParam0, 3, 0f, 0);
	if (!bVar4)
	{
		_0x2eb75fb86c41f026(iParam0, 3, 0);
	}
	_0xeb8886e1065654cd(iParam0, 10, "ALL", 10f);
	iVar5 = func_382(Var0, 1);
	func_795(iParam0, iParam1);
	if (!_network_is_player_index_valid(_0xad03b03737ce6810(iParam0)))
	{
		return;
	}
	iVar6 = 23;
	if (func_796(iParam1))
	{
		iVar6 = 15;
	}
	else if (iVar5 >= 50)
	{
		iVar6 = 14;
	}
	else if (iVar5 >= 25)
	{
		iVar6 = 13;
	}
	else
	{
		iVar6 = 12;
	}
	func_381(&Var0, 0, 1);
	iVar7 = get_attribute_rank(iParam0, 0);
	iVar8 = func_797(iVar7);
	func_798(Var0, 1, to_float(iVar8));
	if (iParam0 == _0xf49f14462f0ae27c(player_id()))
	{
		func_799(iParam0, Global_1904087, iVar6, 0);
		func_800(-469672732, 0, 0);
		if (get_attribute_rank(iParam0, 8) < 25 && iVar5 >= 25)
		{
			func_800(941437279, 0, 0);
		}
	}
	else
	{
		func_800(-162385832, 0, 0);
	}
}

void func_606(int iParam0, int iParam1)
{
	if (!_item_database_is_key_valid(iParam1, 0))
	{
		return;
	}
	if (!func_585(iParam1))
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
	func_801(iParam0);
	iVar0 = -1;
	bVar1 = false;
	if (func_318(iParam0))
	{
		iVar0 = func_333(iParam0);
		bVar1 = true;
	}
	_0xeb8886e1065654cd(iParam0, 10, "ALL", 10f);
	func_703(func_702(-1501807946), 1);
	iVar2 = func_496(iParam0, 0);
	iVar3 = func_496(iParam0, 1);
	func_802(iParam0, iParam1);
	iVar4 = func_496(iParam0, 0);
	iVar5 = func_496(iParam0, 1);
	iVar6 = 0;
	iVar6 = (iVar6 + (iVar4 - iVar2));
	iVar6 = (iVar6 + (iVar5 - iVar3));
	func_102(iParam0);
	if (!bVar1)
	{
		return;
	}
	if (func_803(iParam1))
	{
		func_703(func_702(2071017687), 1);
	}
	if (func_804(iParam1))
	{
		return;
	}
	if (func_796(iParam1))
	{
		func_391(iVar0, 15);
		return;
	}
	iVar7 = -1;
	if (iVar6 >= 50)
	{
		iVar7 = 12;
	}
	else if (iVar6 >= 25)
	{
		iVar7 = 13;
	}
	else if (iVar6 >= 0)
	{
		iVar7 = 14;
	}
	if (iVar7 != -1)
	{
		func_391(iVar0, iVar7);
	}
	if (!func_156(43))
	{
		func_228(43, 0);
		func_436(get_game_timer());
	}
}

void func_607(int iParam0, int iParam1)
{
	if (!_item_database_is_key_valid(iParam1, 0))
	{
		return;
	}
	if (!func_586(iParam1))
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
	if (iParam0 == _0xf49f14462f0ae27c(Global_1296859->f_10))
	{
		func_800(-469672732, 0, 0);
	}
	else
	{
		func_800(-162385832, 0, 0);
	}
	func_703(func_702(-1744861754), 1);
	func_795(iParam0, iParam1);
}

void func_608(int iParam0, int iParam1)
{
	if (!_item_database_is_key_valid(iParam1, 0))
	{
		return;
	}
	if (!func_586(iParam1))
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
	func_703(func_702(-1744861754), 1);
	func_802(iParam0, iParam1);
}

void func_609(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (!_item_database_is_key_valid(iParam1, 0))
	{
		return;
	}
	func_703(func_702(-454252884), 1);
	func_795(iParam0, iParam1);
	if (!_network_is_player_index_valid(_0xad03b03737ce6810(iParam0)))
	{
		return;
	}
	if (iParam0 == _0xf49f14462f0ae27c(Global_1296859->f_10))
	{
		func_800(-469672732, 0, 0);
	}
	else
	{
		func_800(-162385832, 0, 0);
	}
}

void func_610(int iParam0, int iParam1)
{
	if (!_item_database_is_key_valid(iParam1, 0))
	{
		return;
	}
	if (!func_587(iParam1))
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
	func_703(func_702(-454252884), 1);
	func_802(iParam0, iParam1);
}

void func_611(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (!is_ped_injured(iParam0))
	{
		return;
	}
	func_795(iParam0, iParam1);
	_0xeb8886e1065654cd(iParam0, 10, "ALL", 10f);
	if (!_network_is_player_index_valid(_0xad03b03737ce6810(iParam0)))
	{
		return;
	}
	if (iParam0 == _0xf49f14462f0ae27c(Global_1296859->f_10))
	{
		func_800(-469672732, 0, 0);
	}
	else
	{
		func_800(-162385832, 0, 0);
	}
}

int func_612(int iParam0, int iParam1)
{
	if (!_item_database_is_key_valid(iParam1, 0))
	{
		return 0;
	}
	if (!func_588(iParam1))
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
	func_802(iParam0, iParam1);
	func_703(func_702(1179720150), 1);
	return 1;
}

void func_613(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = _0x33fa048675821da7(iParam0, 3);
	if (!bVar0)
	{
		_0x2eb75fb86c41f026(iParam0, 3, 1);
	}
	_0x06d26a96ca1bca75(iParam0, 3, 0f, 0);
	if (!bVar0)
	{
		_0x2eb75fb86c41f026(iParam0, 3, 0);
	}
	func_795(iParam0, iParam1);
	if (!_network_is_player_index_valid(_0xad03b03737ce6810(iParam0)))
	{
		return;
	}
	if (iParam0 == _0xf49f14462f0ae27c(Global_1296859->f_10))
	{
		Var1 = { func_380(0, 1, 0, -1) };
		if (!func_381(&Var1, 0, 1))
		{
		}
		iVar5 = get_attribute_rank(iParam0, 0);
		fVar6 = (to_float(func_805(iVar5)) + (60f * 60f));
		func_799(iParam0, Global_1904087, 19, 0);
		func_798(Var1, 0, fVar6);
		func_800(-469672732, 0, 0);
	}
	else
	{
		func_800(-162385832, 0, 0);
	}
}

void func_614(int iParam0, int iParam1)
{
	if (!_item_database_is_key_valid(iParam1, 0))
	{
		return;
	}
	if (!func_589(iParam1))
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
	func_801(iParam0);
	func_802(iParam0, iParam1);
	bVar1 = func_318(iParam0);
	if (bVar1)
	{
		iVar0 = func_333(iParam0);
	}
	func_102(iParam0);
	if (!bVar1)
	{
		return;
	}
	if (!func_697(iParam0, 1))
	{
		func_391(iVar0, 18);
	}
	iVar2 = func_806(iParam0);
	fVar3 = (to_float(func_805(iVar2)) + (60f * 60f));
	func_705(iVar0, 0, fVar3);
}

void func_615(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = _0x33fa048675821da7(iParam0, 3);
	if (!bVar0)
	{
		_0x2eb75fb86c41f026(iParam0, 3, 1);
	}
	_0x06d26a96ca1bca75(iParam0, 3, 0f, 0);
	if (!bVar0)
	{
		_0x2eb75fb86c41f026(iParam0, 3, 0);
	}
	func_795(iParam0, iParam1);
	if (_0xf49f14462f0ae27c(player_id()) != iParam0)
	{
		func_800(-162385832, 0, 0);
		return;
	}
	func_800(-469672732, 0, 0);
	Var1 = { func_380(0, 1, 0, -1) };
	iVar5 = get_attribute_rank(iParam0, 0);
	fVar6 = (to_float(func_805(iVar5)) + (60f * 60f));
	func_798(Var1, 0, fVar6);
}

void func_616(int iParam0, int iParam1)
{
	if (!_item_database_is_key_valid(iParam1, 0))
	{
		return;
	}
	if (!func_591(iParam1))
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
	if (func_318(iParam0))
	{
		iVar0 = func_333(iParam0);
		bVar1 = true;
	}
	if (bVar1)
	{
		iVar2 = func_806(iParam0);
		fVar3 = (to_float(func_805(iVar2)) + (60f * 60f));
		func_705(iVar0, 0, fVar3);
	}
	func_801(iParam0);
	func_802(iParam0, iParam1);
}

void func_617(int iParam0, int iParam1, int iParam2)
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
	iVar0 = _0xf49f14462f0ae27c(get_player_index());
	if (iVar0 != iParam0)
	{
		func_800(-162385832, 0, 0);
		return;
	}
	bVar1 = _0x33fa048675821da7(iParam0, 3);
	if (!bVar1)
	{
		_0x2eb75fb86c41f026(iParam0, 3, 1);
	}
	_0x06d26a96ca1bca75(iParam0, 3, 0f, 0);
	if (!bVar1)
	{
		_0x2eb75fb86c41f026(iParam0, 3, 0);
	}
	_0xeb8886e1065654cd(iParam0, 10, "ALL", 10f);
	func_795(iParam0, iParam1);
	Var2 = { func_380(0, 1, 0, -1) };
	if (!func_381(&Var2, 0, 1))
	{
	}
	iVar6 = func_805(0);
	func_798(Var2, 0, to_float(iVar6));
	bVar7 = false;
	iVar8 = get_game_timer();
	if ((Global_1291734->f_1403.f_19 + 45000) > iVar8)
	{
		bVar7 = true;
	}
	bVar9 = false;
	if (bVar7 && Global_1291734->f_1403.f_19 + 15000 > iVar8)
	{
		bVar9 = true;
	}
	iVar10 = 23;
	if (iParam2 >= 10)
	{
		iVar10 = 18;
	}
	else if (bVar7)
	{
		if (bVar9)
		{
			return;
		}
		else
		{
			iVar10 = 16;
		}
	}
	else
	{
		iVar10 = 17;
	}
	switch (iVar10)
	{
		case 16:
		case 17:
			func_800(-469672732, 0, 0);
			break;
		case 18:
			func_800(1717813521, 0, 0);
			break;
		case 23:
			return;
	}
	func_799(iParam0, Global_1904087, iVar10, 0);
	Global_1291734->f_1403.f_19 = iVar8;
}

void func_618(int iParam0, int iParam1, int iParam2)
{
	if (!_item_database_is_key_valid(iParam1, 0))
	{
		return;
	}
	if (!func_590(iParam1))
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
	func_801(iParam0);
	_0xeb8886e1065654cd(iParam0, 10, "ALL", 10f);
	func_802(iParam0, iParam1);
	func_102(iParam0);
	bVar1 = func_318(iParam0);
	if (bVar1)
	{
		iVar0 = func_333(iParam0);
	}
	if (!bVar1)
	{
		return;
	}
	iVar2 = func_806(iParam0);
	iVar3 = func_805(iVar2);
	func_705(iVar0, 0, to_float(iVar3));
	if (iParam2 >= 10)
	{
		iVar4 = 16;
	}
	else
	{
		iVar4 = 17;
	}
	func_391(iVar0, iVar4);
}

bool func_619(var uParam0, bool bParam1)
{
	Var0.f_9 = -1591664384;
	Var29 = { func_784(0, -1591664384, -1591664384, -1591664384, -1675500494, 0, 0) };
	if (func_786(&Var29, &iVar43, &iVar44, bParam1))
	{
		Var45.f_9 = -1591664384;
		iVar59 = 0;
		while (iVar59 < iVar44)
		{
			if (func_787(&Var45, iVar59, iVar43, iVar44))
			{
				if (func_807(&Var45, &Var0, 0))
				{
					if (func_808(&(Var0.f_24), 16))
					{
						*uParam0 = { Var0 };
						func_788(iVar43);
						return true;
					}
				}
			}
			iVar59++;
		}
		func_788(iVar43);
	}
	return false;
}

struct<4> func_620()
{
	return Global_1291734->f_11.f_310;
}

bool func_621()
{
	return Global_1291734->f_11.f_318 > Global_1296859->f_21;
}

void func_622(var uParam0, bool bParam1)
{
	Global_1291734->f_11.f_310 = { *uParam0 };
	if (bParam1)
	{
		Global_1291734->f_11.f_318 = Global_1296859->f_21 + 10;
	}
}

int func_623(int iParam0)
{
	iVar0 = func_809(iParam0);
	bVar1 = func_811(func_810(), 0, 0);
	if (!bVar1)
	{
		return 3;
	}
	return iVar0;
}

bool func_624(int iParam0)
{
	return func_812(&(Global_3145858->f_6), iParam0);
}

int func_625(int iParam0, int iParam1)
{
	if (iParam1 == 0)
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
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 4;
			case 1:
				return 5;
			case 2:
				return 6;
			case 3:
				return 7;
			default:
				break;
		}
	}
	return -1;
}

bool func_626(var uParam0, bool bParam1)
{
	Var0.f_9 = -1591664384;
	Var29 = { func_784(0, -1591664384, -1591664384, -1591664384, -1675500494, 0, 0) };
	if (func_786(&Var29, &iVar43, &iVar44, bParam1))
	{
		Var45.f_9 = -1591664384;
		iVar59 = 0;
		while (iVar59 < iVar44)
		{
			if (func_787(&Var45, iVar59, iVar43, iVar44))
			{
				if (func_807(&Var45, &Var0, 0))
				{
					if (func_808(&(Var0.f_24), 32))
					{
						*uParam0 = { Var0 };
						func_788(iVar43);
						return true;
					}
				}
			}
			iVar59++;
		}
		func_788(iVar43);
	}
	return false;
}

struct<4> func_627(bool bParam0)
{
	Var2.f_9 = -1591664384;
	if (!func_813("ALL HORSES", &iVar0, &iVar1, -1591664384, bParam0))
	{
		return Var2;
	}
	iVar16 = 0;
	while (iVar16 < iVar1)
	{
		if (!func_787(&Var2, iVar16, iVar0, iVar1))
		{
		}
		else if (_0xb881ca836cc4b6d4(&Var2))
		{
		}
		else
		{
			iVar16++;
		}
	}
	func_788(iVar0);
	return Var2;
}

void func_628(var uParam0)
{
	func_265(uParam0);
	uParam0->f_4 = 0;
	uParam0->f_5 = { func_519() };
	uParam0->f_9 = 0;
	uParam0->f_10 = -1;
	uParam0->f_11 = 0;
	StringCopy(&(uParam0->f_12), "", 64);
	uParam0->f_20 = 0;
	uParam0->f_22 = 0;
	uParam0->f_23 = 0;
}

bool func_629(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (!func_807(uParam0, uParam2, bParam3))
	{
		return false;
	}
	if (!func_814(uParam1, uParam2))
	{
		return false;
	}
	return true;
}

bool func_630(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (!func_815(uParam0, uParam2, bParam3))
	{
		return false;
	}
	if (!func_816(uParam1, uParam2))
	{
		return false;
	}
	return true;
}

bool func_631(var uParam0)
{
	Var0 = { func_519() };
	if (_0x4c543d5dfcd2dafd(uParam0, &Var0))
	{
		return false;
	}
	Var4.f_9 = -1591664384;
	iVar19 = 0;
	while (iVar19 < 10)
	{
		if (_0x4c543d5dfcd2dafd(Global_17411.f_55.f_61.f_41[iVar19], uParam0))
		{
			bVar18 = true;
		}
		else if (_0x4c543d5dfcd2dafd(Global_17411.f_55.f_61.f_41[iVar19], &Var0))
		{
			func_817(Global_17411.f_55.f_61.f_41[iVar19]);
			*Global_17411.f_55.f_61.f_41[iVar19] = { *uParam0 };
			bVar18 = true;
		}
		else
		{
			if (func_524(*Global_17411.f_55.f_61.f_41[iVar19], &Var4, 1, 1, -1))
			{
			}
			else
			{
				func_817(Global_17411.f_55.f_61.f_41[iVar19]);
				*Global_17411.f_55.f_61.f_41[iVar19] = { *uParam0 };
				bVar18 = true;
			}
			else
			{
				iVar19++;
			}
		}
	}
	if (!bVar18)
	{
		return false;
	}
	return true;
}

void func_632(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (_0x4c543d5dfcd2dafd(Global_17411.f_55.f_61.f_41[iVar0], &uParam0))
		{
			Global_17411.f_55.f_61.f_41[iVar0]->f_38[iParam4] = iParam5;
			return;
		}
		iVar0++;
	}
	if (!func_631(&uParam0))
	{
		return;
	}
	Global_17411.f_55.f_61.f_41[iVar0]->f_38[iParam4] = iParam5;
}

var func_633(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	func_818(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_634(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return false;
	}
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	fVar0 = func_819(iParam1);
	if (fVar0 == 1E+09f)
	{
		return false;
	}
	if (func_636(iParam0, iParam1) >= fVar0)
	{
		return true;
	}
	return false;
}

bool func_635(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return false;
	}
	iParam0 = func_77(iParam0);
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
	iVar0 = func_78(iParam0);
	fVar1 = func_143(iVar0);
	if (fVar1 >= 0.1f)
	{
		return true;
	}
	return false;
}

float func_636(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return 0f;
	}
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return &(Global_39.f_281.f_1[iParam0]->f_398.f_2[iParam1]);
}

float func_637(int iParam0)
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
			return 15f;
		case 11:
			return 1f;
		case 12:
			return 15f;
		case 13:
			return 5f;
		case 14:
			return 1f;
		case 15:
			return 5f;
		case 16:
			return 15f;
		case 17:
			return 1f;
		case 18:
			return 5f;
		case 19:
			return 15f;
		case 20:
			return 1f;
	}
	return 0f;
}

bool func_638(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return false;
	}
	iVar0 = func_220(iParam1);
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

bool func_639()
{
	return Global_39.f_281.f_3250;
}

void func_640(int iParam0, float fParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_158(iParam0);
	iVar1 = func_103(iParam0);
	iVar2 = get_default_max_attribute_rank(iVar0, 7);
	if (iVar1 >= iVar2)
	{
		return;
	}
	Global_39.f_281.f_1[iParam0]->f_398.f_1 = (Global_39.f_281.f_1[iParam0]->f_398.f_1 + fParam1);
	iVar3 = func_78(iParam0);
	if (!does_entity_exist(iVar3))
	{
		return;
	}
	if (is_entity_dead(iVar3) || is_ped_injured(iVar3))
	{
		return;
	}
	func_531(iVar3, floor(Global_39.f_281.f_1[iParam0]->f_398.f_1));
	iVar4 = func_331(iVar3);
	Global_39.f_281.f_1[iParam0]->f_398 = iVar4;
	_0xa69899995997a63b(iVar3, iVar4);
	func_583(iVar4);
	if (iVar4 > iVar1)
	{
		func_820(iParam0, iVar4);
		if (iParam0 == 6)
		{
			if (iVar4 == 1)
			{
				if (func_121(41))
				{
					func_228(19, 1);
				}
				else
				{
					func_228(20, 1);
				}
			}
		}
		if (iVar4 == 2)
		{
			func_228(21, 1);
		}
		else if (iVar4 == 3)
		{
			func_228(22, 1);
		}
		else if (iVar4 == 4)
		{
			func_228(23, 1);
		}
		if (iVar4 >= 2)
		{
			iVar5 = func_806(iVar3);
			iVar6 = func_821();
			func_822(iVar6, iVar5);
			iVar7 = func_823(iVar3);
			iVar8 = func_824();
			func_822(iVar8, iVar7);
		}
		compendium_horse_bonding(iVar3, iVar4);
		func_703(func_702(352983236), 1);
		if (iVar4 == iVar2)
		{
			func_703(func_702(-2116919750), 1);
		}
		func_825(0, -1);
	}
}

void func_641(int iParam0, int iParam1, float fParam2)
{
	if (iParam1 == -1)
	{
		return;
	}
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_39.f_281.f_1[iParam0]->f_398.f_2[iParam1] = fParam2;
}

void func_642(int iParam0, float fParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_39.f_281.f_1[iParam0]->f_398.f_1 = fParam1;
	iVar0 = func_78(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return;
	}
	iVar1 = floor(Global_39.f_281.f_1[iParam0]->f_398.f_1);
	func_531(iVar0, iVar1);
	iVar2 = func_331(iVar0);
	Global_39.f_281.f_1[iParam0]->f_398 = iVar2;
	_0xa69899995997a63b(iVar0, iVar2);
	func_583(iVar2);
}

void func_643(bool bParam0)
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

void func_644(int iParam0)
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

void func_645(bool bParam0)
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

void func_646(bool bParam0)
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

void func_647(bool bParam0)
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

var func_648(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	Var0 = -2;
	Var0 = iParam4;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
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

bool func_649(int iParam0, int iParam1, int iParam2)
{
	if (!func_263(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_520(iParam0, -455129387);
	if (iVar0 != 0)
	{
		return func_826(iParam0, iParam1, iParam2);
	}
	Var1 = { func_603(iParam0, 0, 1) };
	Var6 = { func_262(iParam0, Var1, Var1.f_4, 0) };
	return func_266(iParam0, &Var6, &Var1, iParam1, iParam2, 0);
}

int func_650(int iParam0)
{
	return 0;
}

int func_651(var uParam0, int iParam1, bool bParam2)
{
	return _0x033ee4b89f3ac545(func_518(bParam2), uParam0, iParam1);
}

bool func_652(int iParam0, var uParam1)
{
	if (!func_400(iParam0))
	{
		return false;
	}
	iVar0 = func_650(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1.f_9 = -1591664384;
	Var15 = { func_261(0) };
	if (!func_827(Var15, iVar0, &Var1, 0, 0))
	{
		return false;
	}
	if (!func_828(&Var1, uParam1))
	{
		return false;
	}
	return true;
}

bool func_653(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_829(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_524(*uParam1, &Var0, bParam6, 0, -1))
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
	if (!func_522(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_2() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = iParam0;
			Var15 = { *uParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_727(1702063850, &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31.f_16 = -1;
				Var31 = bParam5;
				Var31.f_7 = iParam4;
				func_830(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_518(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_654(int iParam0)
{
	return func_600(iParam0) == -1784221369;
}

bool func_655()
{
	iVar0 = func_656();
	if (does_blip_exist(iVar0))
	{
		return true;
	}
	return false;
}

int func_656()
{
	return Global_1903136->f_379.f_1;
}

void func_657(int iParam0)
{
	Global_1903136->f_379.f_1 = iParam0;
}

bool func_658(int iParam0, int iParam1, bool bParam2)
{
	if (!func_263(iParam0, 0))
	{
		return func_831(func_592(iParam0), iParam1, bParam2);
	}
	if (func_832(iParam0))
	{
		return func_834(func_833(iParam0, 1), iParam1);
	}
	if ((bParam2 && func_2() == 0) && !_unlock_is_visible(iParam0))
	{
		return true;
	}
	if (!func_835(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
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

bool func_659(int iParam0, int iParam1)
{
	return (Global_1904651->f_33[iParam0]->f_2 && iParam1) != 0;
}

bool func_660(int iParam0, int iParam1)
{
	return is_bit_set(&(Global_17411.f_2565[iParam0]), iParam1);
}

int func_661(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 < 180))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 133:
			return 27;
		case 153:
			return 28;
		case 154:
			return 29;
		case 26:
			return 14;
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
			return 38;
		case 134:
			return 37;
		case 3:
		case 4:
		case 40:
		case 63:
		case 76:
		case 148:
			return 15;
		case 64:
		case 65:
		case 66:
		case 67:
			return 16;
		case 120:
		case 122:
		case 124:
		case 126:
		case 127:
		case 129:
			return 25;
		case 45:
		case 83:
		case 155:
		case 159:
		case 164:
		case 168:
		case 172:
			return 0;
		case 6:
		case 23:
		case 33:
		case 48:
		case 69:
		case 84:
		case 99:
		case 102:
		case 108:
		case 156:
		case 160:
		case 165:
		case 169:
		case 173:
			return 3;
		case 0:
		case 7:
		case 34:
		case 49:
		case 85:
		case 103:
		case 157:
		case 161:
		case 166:
		case 170:
		case 174:
			return 6;
		case 19:
		case 53:
			return 7;
		case 22:
		case 31:
		case 46:
		case 93:
		case 116:
		case 130:
			return 4;
		case 20:
			return 33;
		case 21:
		case 32:
		case 47:
		case 92:
		case 115:
		case 131:
			return 33;
		case 9:
		case 30:
		case 44:
		case 68:
		case 82:
		case 104:
			return 10;
		case 1:
		case 14:
		case 24:
		case 27:
		case 35:
		case 51:
		case 74:
		case 87:
		case 98:
		case 101:
		case 111:
		case 117:
			return 2;
		case 2:
		case 15:
		case 25:
		case 28:
		case 39:
		case 52:
		case 88:
		case 97:
		case 100:
		case 112:
		case 118:
			return 1;
		case 8:
		case 43:
		case 78:
			return 8;
		case 13:
		case 41:
		case 50:
		case 71:
		case 86:
		case 96:
		case 107:
			return 9;
		case 121:
		case 123:
		case 125:
		case 128:
			return 26;
		case 163:
			return 5;
		case 5:
		case 29:
		case 42:
		case 77:
			return 12;
		case 10:
		case 36:
		case 54:
		case 56:
		case 75:
		case 79:
		case 81:
		case 91:
		case 94:
		case 105:
		case 110:
			return 30;
		case 11:
		case 37:
		case 55:
		case 57:
		case 80:
		case 95:
		case 106:
			return 31;
		case 16:
		case 17:
		case 18:
		case 38:
		case 58:
		case 59:
		case 72:
		case 73:
		case 132:
			return 32;
		case 70:
		case 90:
			return 17;
		case 119:
			return 11;
		case 176:
			return 19;
		case 177:
			return 20;
		case 178:
			return 21;
		case 12:
		case 60:
			return 18;
		case 152:
			return 34;
		case 158:
		case 162:
		case 167:
		case 171:
		case 175:
			return 23;
		case 179:
			return 20;
		case 109:
		case 113:
		case 114:
			return 35;
		case 61:
		case 62:
		case 89:
			return 36;
		case 149:
		case 150:
		case 151:
			return 39;
		default:
			break;
	}
	return -1;
}

bool func_662(int iParam0)
{
	return !func_836(iParam0, 1);
}

int func_663(int iParam0)
{
	if (!func_450(iParam0))
	{
		return -1;
	}
	if (iParam0 == 40 && func_584() == 139)
	{
		return 139;
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 129:
			return 83;
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
		case 122:
		case 123:
			return 40;
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 140:
			return 74;
		case 26:
			return 3;
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
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 124:
		case 125:
			return 5;
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 126:
			return 111;
		case 27:
		case 28:
			return 23;
		case 41:
			return 107;
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 127:
			return 26;
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
		case 91:
		case 120:
		case 121:
			return 81;
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 128:
			return 98;
		case 3:
			return 13;
		case 155:
		case 156:
		case 157:
		case 158:
			return 84;
		case 159:
		case 160:
		case 161:
		case 162:
		case 163:
			return 104;
		case 4:
			return 14;
		case 164:
		case 165:
		case 166:
		case 167:
			return 76;
		case 168:
		case 169:
		case 170:
		case 171:
			return 4;
		case 40:
			return 95;
		case 172:
		case 173:
		case 174:
		case 175:
			return 9;
		case 76:
			return 119;
		case 99:
		case 100:
		case 101:
			return 28;
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
			return 121;
		case 108:
		case 109:
		case 110:
		case 111:
		case 112:
			return 127;
		case 115:
		case 116:
			return 130;
		case 117:
		case 118:
			return 123;
		case 132:
			return 87;
		case 130:
		case 131:
			return 136;
		case 64:
			return 76;
		case 65:
			return 104;
		case 66:
			return 9;
		case 67:
			return 84;
		case 113:
			return 96;
		case 114:
			return 29;
		case 135:
			return 126;
		case 136:
			return 133;
		case 137:
			return 137;
		case 138:
			return 39;
		case 139:
			return 16;
		case 141:
			return 76;
		case 142:
			return 61;
		case 143:
			return 100;
		case 144:
			return 34;
		case 145:
			return 43;
		case 146:
			return 85;
		case 149:
			return 138;
		case 150:
			return 25;
		case 151:
			return 3;
		case 148:
			return 134;
		case 20:
			return -1;
		case 134:
			return -1;
		default:
			break;
	}
	return -1;
}

bool func_664(int iParam0)
{
	if (!(iParam0 >= 0 && iParam0 <= 150))
	{
		return false;
	}
	if (Global_1572887->f_13 == -1)
	{
		return Global_8123[iParam0] & 32 != 0;
	}
	return Global_1071686->f_19674[iParam0] & 32 != 0;
}

bool func_665(int iParam0)
{
	if (!func_837(iParam0))
	{
		return false;
	}
	return func_838(iParam0, 33554432);
}

float func_666(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

void func_667()
{
	Global_1903136->f_429.f_13 = 0;
}

int func_668()
{
	return Global_1903136->f_429.f_13;
}

void func_669(int iParam0)
{
	Global_1903136->f_429.f_13 = iParam0;
}

bool func_670(int iParam0, int iParam1, int iParam2)
{
	if (!func_263(iParam1, 0))
	{
		return false;
	}
	return func_477(iParam0, iParam1) >= iParam2;
}

int func_671(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (!func_263(iParam1, 0))
	{
		return 0;
	}
	if (iParam2 < 1)
	{
		return 0;
	}
	Var0 = { func_478(iParam0) };
	Var5 = { func_479(iParam0, iParam1, Var0, Var0.f_4) };
	return func_839(iParam0, iParam1, &Var5, iParam2, iParam3, bParam4);
}

struct<4> func_672(int iParam0, int iParam1)
{
	Var0 = { func_478(iParam0) };
	return func_479(iParam0, iParam1, Var0, Var0.f_4);
}

bool func_673(int iParam0, var uParam1)
{
	if (!func_840(iParam0))
	{
		return false;
	}
	*uParam1 = Global_1915666[iParam0];
	if (*uParam1 == 0)
	{
		return false;
	}
	return true;
}

int func_674(int iParam0)
{
	if (func_2() != -1)
	{
		if (Global_1071686->f_12)
		{
			if (iParam0 == 3)
			{
				return -1033589769;
			}
		}
	}
	return func_841(iParam0);
}

bool func_675(int iParam0)
{
	if (func_659(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_676(int iParam0)
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

bool func_677()
{
	if (!func_842())
	{
		return false;
	}
	return Global_1904651->f_8684;
}

bool func_678()
{
	return Global_1904651->f_8683 != -1;
}

bool func_679()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) <= 4);
}

bool func_680(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

bool func_681()
{
	return Global_1071686->f_28662.f_22.f_3 != 0;
}

bool func_682()
{
	return Global_1896738->f_382;
}

bool func_683()
{
	if (!func_842())
	{
		return false;
	}
	uVar0 = Global_1904651->f_8685;
	Global_1904651->f_8685 = 0;
	return uVar0;
}

bool func_684(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_843(iParam1) || !func_843(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

int func_685(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_686(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_844(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_687(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_688(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_689(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_690(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_691(int iParam0, int iParam1)
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

float func_692(float fParam0, float fParam1, float fParam2)
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

bool func_693(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_680(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_845())
	{
		return func_680(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_680(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

char* func_694(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

void func_695(int iParam0, int iParam1, int iParam2)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iParam2 = func_384(iParam2, 0, 100);
	Global_39.f_281.f_1[iParam0]->f_422[iParam1] = iParam2;
	iVar0 = func_78(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
	}
	func_497(iVar0, iParam1, func_439(iParam0, iParam1));
	func_846(iVar0, iParam1);
}

void func_696(int iParam0, int iParam1, float fParam2)
{
	fParam2 = func_385(fParam2, 0f, 1E+09f);
	Global_39.f_281.f_1[iParam0]->f_422[iParam1]->f_2 = fParam2;
}

bool func_697(int iParam0, int iParam1)
{
	if (func_494(iParam1, &uVar0))
	{
		if (_0x200373a8df081f22(iParam0, uVar0))
		{
			return true;
		}
	}
	return false;
}

float func_698(int iParam0, int iParam1)
{
	fVar0 = 0f;
	if (iParam1 == 0)
	{
		if (func_406(iParam0, 0) > 50)
		{
			fVar0 = (fVar0 + 0.25f);
		}
	}
	if (func_597(-184823984, 1))
	{
		fVar0 = (fVar0 - -0.1f);
	}
	if (func_164() == 0 && func_154() == iParam0)
	{
		fVar1 = func_847(iParam1);
		fVar0 = (fVar0 - fVar1);
	}
	return fVar0;
}

float func_699(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return Global_39.f_281.f_1[iParam0]->f_422[iParam1]->f_1;
}

void func_700(int iParam0, int iParam1, float fParam2)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	fParam2 = func_385(fParam2, -1f, 1f);
	Global_39.f_281.f_1[iParam0]->f_422[iParam1]->f_1 = fParam2;
}

void func_701(int iParam0)
{
	Global_1903136->f_429.f_8 = iParam0;
}

struct<2> func_702(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

void func_703(var uParam0, int iParam1, int iParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return;
	}
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

void func_704(int iParam0, int iParam1, int iParam2)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iParam2 = func_384(iParam2, 0, 100);
	Global_39.f_281.f_1[iParam0]->f_431[iParam1] = iParam2;
	iVar0 = func_78(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
	}
	func_387(iVar0, iParam1, iParam2);
}

void func_705(int iParam0, int iParam1, float fParam2)
{
	fParam2 = func_385(fParam2, 0f, 1E+09f);
	Global_39.f_281.f_1[iParam0]->f_431[iParam1]->f_2 = fParam2;
}

bool func_706(int iParam0)
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

float func_707(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return Global_39.f_281.f_1[iParam0]->f_431[iParam1]->f_1;
}

void func_708(int iParam0, int iParam1, float fParam2)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	fParam2 = func_385(fParam2, -1f, 1f);
	Global_39.f_281.f_1[iParam0]->f_431[iParam1]->f_1 = fParam2;
}

void func_709(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_39.f_281.f_1[iParam0]->f_431[iParam1]->f_1 = 0f;
}

int func_710(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (*Global_1903136)[iParam0]->f_1;
}

void func_711(int iParam0)
{
	Global_1903136->f_429.f_6 = iParam0;
}

int func_712(int iParam0)
{
	if (!func_263(*iParam0, 0))
	{
		return 0;
	}
	if (!func_848(*iParam0))
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

bool func_713(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(iParam0, iParam1);
}

bool func_714(int iParam0)
{
	return func_600(iParam0) == -427144552;
}

struct<4> func_715(bool bParam0)
{
	iVar0 = func_518(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_4)))
		{
			Global_1293346->f_4 = { func_262(923904168, func_261(bParam0), -740156546, bParam0) };
		}
		return Global_1293346->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_16)))
		{
			Global_1293346->f_16 = { func_262(923904168, func_261(bParam0), -740156546, 0) };
		}
		return Global_1293346->f_16;
	}
	return func_262(923904168, func_261(bParam0), -740156546, 0);
}

bool func_716(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_264(iParam0, *uParam1, iParam2, bParam3, 1, iParam4) > 0;
}

bool func_717(int iParam0, var uParam1, int iParam2)
{
	if (func_849(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

bool func_718(int iParam0, bool bParam1)
{
	if (func_765(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_850();
		}
		else
		{
			return true;
		}
	}
	return false;
}

int func_719(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_263(iParam0, 0) && !func_713(func_592(iParam0), 2))
	{
		return 0;
	}
	if (func_600(iParam0) == 26423971)
	{
		return -1;
	}
	if (!bParam2 && func_520(iParam0, -455129387) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_518(bParam3), iParam0);
}

struct<28> func_720(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var28.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_518(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_726(&Var28, bParam5) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_721(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_851(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_853(func_852(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_854(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 28), iVar0, uParam1);
	}
	return -1;
}

struct<25> func_722(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var25.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_518(bParam4), &uParam0, &Var25, 24, 1))
	{
		return Var0;
	}
	Var0 = { func_726(&Var25, bParam5) };
	Var0.f_16 = { Var25.f_15 };
	Var0.f_24 = Var25.f_23;
	return Var0;
}

int func_723(int iParam0, var uParam1, bool bParam2)
{
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_853(func_855(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_854(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 25), iVar0, uParam1);
	}
	return -1;
}

struct<17> func_724(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_518(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_726(&Var17, bParam5) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_725(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_851(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_853(func_856(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_854(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 17), iVar0, uParam1);
	}
	return -1;
}

struct<16> func_726(var uParam0, bool bParam1)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { *uParam0 };
	Var0.f_4 = { uParam0->f_5 };
	Var0.f_8 = uParam0->f_4;
	Var0.f_9 = uParam0->f_11;
	Var0.f_11 = uParam0->f_9;
	Var0.f_10 = uParam0->f_10;
	if (bParam1)
	{
		Var0.f_15 = func_520(uParam0->f_4, -455129387);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_519() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_727(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_851(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_853(func_857(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_854(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

bool func_728(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_518(bParam2);
	}
	if (!_0x9700e8efc4ab9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

int func_729(int iParam0)
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

int func_730(int iParam0, int iParam1)
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
	iVar1 = func_221(iParam1);
	iVar2 = func_858(iVar0, iVar1, 1);
	return iVar2;
}

int func_731(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, false, false);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_859(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

int func_732(int iParam0)
{
	return iParam0;
}

int func_733(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_860(&uParam0, iParam4, bParam5, iParam6);
}

bool func_734(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		iVar5 = func_765(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_861(iParam0);
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

void func_735(int iParam0, int iParam1)
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
	_set_ped_component_enabled(iParam0, iVar0, false, func_2() == 0, false);
}

void func_736(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = { 0f, 0f, 0f };
	uParam0->f_6 = { 0f, 0f, 0f };
}

float func_737(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_738(var uParam0)
{
	return *uParam0;
}

void func_739(var uParam0, vector3 vParam1)
{
	uParam0->f_3.f_3 = { vParam1 };
}

void func_740(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_741(vector3 vParam0, vector3 vParam3, bool bParam6, bool bParam7)
{
	bVar0 = is_sphere_visible(vParam0, 5f);
	if (bParam6)
	{
		if (func_862(vParam0 + Vector(0.2f, 0f, 0f)))
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

bool func_742(vector3 vParam0, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7, int iParam8, float fParam9, int iParam10, float fParam11)
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
			func_863(&(iParam3->f_1), iParam3->f_2, vParam0, iParam5, iParam7, iParam8, fParam9, iParam10, fParam11);
			if (!_0x1ac5a8ab50cfaa33(iParam3->f_1))
			{
			}
			else
			{
				func_864(&(iParam3->f_1), iParam5, vParam0);
				if (!func_192(iParam3->f_6))
				{
					_0xce4e669400e5f8aa(iParam3->f_1, func_865(iParam3->f_6));
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

bool func_743(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_744(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_866(*uParam0, 0f, 0f, 0f))
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
	if (bParam4)
	{
		vVar4 = { *uParam0 };
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

bool func_745(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

void func_746(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1903136)[iParam0]->f_23 = ((*Global_1903136)[iParam0]->f_23 || iParam1);
}

bool func_747(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10)
{
	if (!func_522(bParam10))
	{
		return func_867(Param0, Param4, iParam8, 1, bParam9, 1, -1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_524(Param0, &Var0, 0, 0, -1))
	{
		return false;
	}
	if (func_868(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return true;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, iParam8))
	{
		return false;
	}
	if (!_0xdccaa7c3bfd88862(func_518(0), &Param0, &Param4, iParam8, Var0.f_11, &Var14))
	{
		return false;
	}
	if (bParam9)
	{
		if (!func_267(Var14, 1, 0))
		{
		}
	}
	return true;
}

bool func_748(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	if (!func_522(bParam9))
	{
		return func_869(Param0, Param4, iParam8, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return false;
	}
	if (func_868(&Param0, &Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_524(Param0, &Var0, 1, 0, -1) || !func_524(Param4, &Var14, 1, 0, -1))
	{
		return false;
	}
	if (func_868(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return false;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, Var14.f_9) || !_inventory_fits_slot_id(Var14.f_4, Var0.f_9))
	{
		return false;
	}
	iVar28 = func_518(0);
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

int func_749(int iParam0)
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
		case -1029277326:
			return -179102320;
		case -1140650619:
			return -1266863668;
		case -1999198818:
			return -2078767648;
		case -403470324:
			return -852553462;
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
		case -683592019:
			return -757978903;
		case 337109765:
			return 1909854428;
		case -619132373:
			return 1592694494;
		case 1544366970:
			return 981469777;
		case -1441144351:
			return 1064693514;
		case -1717674545:
			return -1365665739;
		case 1825358734:
			return 1577022605;
		case 1138427579:
			return 381495209;
		case -1720251851:
			return 3032834;
		case 506887890:
			return -1722101672;
		case 766293155:
			return -189605757;
		case 2147082926:
			return 863391233;
		case -390136947:
			return -952011226;
		case 1104566530:
			return -356470463;
		case -1142861801:
			return -1750687713;
		case -417416199:
			return -272192064;
		case -1460773772:
			return 1935859332;
		case 1476007840:
			return -1898310680;
		case -1616287563:
			return 885568364;
		case -127412252:
			return -1540355548;
		case -1881155818:
			return -601560591;
		case -955237712:
			return -370362766;
		case -647020346:
			return -1698261864;
		case -1846319726:
			return -670301166;
		case 1007570567:
			return -302057902;
		case 1029339151:
			return 1257620801;
		case -1424767799:
			return 821735821;
		case -217135948:
			return -769035812;
		case -156439156:
			return -1824684932;
		case 1344011125:
			return 1589592948;
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
		case 1496579364:
			return -2055655009;
		case -1896838685:
			return -1293672675;
		case -420599285:
			return -1179079660;
		case 478986344:
			return 805526368;
		case 917402668:
			return -235714362;
		case -914712122:
			return -1678164;
		case -598917269:
			return -977833913;
		default:
			break;
	}
	return 0;
}

int func_750(int iParam0)
{
	iVar0 = 1;
	fVar1 = _get_ped_face_feature(iParam0, 41611);
	if (fVar1 == 1f)
	{
		iVar0 = 2;
	}
	return iVar0;
}

void func_751(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_39.f_281.f_1[iParam0]->f_9 = iParam1;
}

void func_752(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_39.f_281.f_1[iParam0]->f_8 = iParam1;
}

void func_753(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_39.f_281.f_1[iParam0]->f_10 = iParam1;
}

void func_754(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_39.f_281.f_1[iParam0]->f_12 = iParam1;
}

void func_755(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_39.f_281.f_1[iParam0]->f_13 = iParam1;
}

int func_756()
{
	return -364764277;
}

int func_757()
{
	return 808655744;
}

int func_758()
{
	return 1;
}

void func_759(int iParam0)
{
	Global_39.f_281.f_3245 = iParam0;
}

void func_760(int iParam0, var uParam1, var uParam2)
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

bool func_761()
{
	return !&Global_1913504;
}

void func_762(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	iVar0 = 0;
	while (iVar0 < Global_1913504->f_3)
	{
		if ((((&Global_1913504->f_4[iVar0] == iParam0 && Global_1913504->f_4[iVar0]->f_2 == bParam2) && Global_1913504->f_4[iVar0]->f_3 == bParam3) && Global_1913504->f_4[iVar0]->f_4 == bParam4) && Global_1913504->f_4[iVar0]->f_5 == bParam5)
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
		Global_1913504->f_4[Global_1913504->f_3]->f_3 = bParam3;
		Global_1913504->f_4[Global_1913504->f_3]->f_4 = bParam4;
		Global_1913504->f_4[Global_1913504->f_3]->f_5 = bParam5;
		Global_1913504->f_3++;
	}
}

char* func_763(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_764(int iParam0, int iParam1)
{
	if (!func_263(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

int func_765(int iParam0)
{
	if (!func_263(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_766(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_767(int iParam0)
{
	if (func_372(iParam0, -1995062316))
	{
		return "collectible_arrowheads";
	}
	if (func_372(iParam0, 1239889275))
	{
		return "collectible_liquor_bottles";
	}
	if (func_372(iParam0, 143267379))
	{
		return "collectible_coins";
	}
	if (func_372(iParam0, -944041124))
	{
		return "colectible_heirlooms";
	}
	if (func_372(iParam0, 1562621600))
	{
		return "collectible_jewelry";
	}
	if (func_372(iParam0, -149719013))
	{
		return "collectible_bird_eggs";
	}
	if (func_372(iParam0, 1940829793))
	{
		return "collectible_tarot_cards";
	}
	if (func_372(iParam0, 781094263))
	{
		return "collectible_flowers";
	}
	if (((func_372(iParam0, -352095726) || func_372(iParam0, -2014783736)) || func_372(iParam0, -545064757)) || func_372(iParam0, 679186220))
	{
		return "collectible_found_fossil";
	}
	return "";
}

bool func_768(int iParam0)
{
	if (func_372(iParam0, -189374246))
	{
		if (((func_870(iParam0, -1305775593) || func_870(iParam0, 1384151091)) || func_870(iParam0, 2075388272)) || func_870(iParam0, -1738780413))
		{
			return true;
		}
	}
	if (func_372(iParam0, -753854379) || func_372(iParam0, 173360570))
	{
		return true;
	}
	return false;
}

int func_769(int iParam0)
{
	if (!func_263(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_871(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

bool func_770(int iParam0)
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

int func_771(int iParam0)
{
	if (!func_263(iParam0, 0))
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

int func_772(int iParam0)
{
	iVar0 = func_872(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_873(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
	if (func_874(Var1, &iVar11, &iVar12, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar12)
		{
			if (_0x8750f69a720c2e41(iVar11, iVar13, &iVar14) && func_875(iVar14))
			{
				func_876(iVar11);
				return iVar14;
			}
			iVar13++;
		}
		func_876(iVar11);
	}
	return 0;
}

bool func_773(int iParam0, int iParam1)
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

int func_774(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_263(iParam0, 0) && !func_713(func_592(iParam0), 2))
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

int func_775(int iParam0, int iParam1)
{
	iVar0 = func_877(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	return iVar0;
}

bool func_776(int iParam0, char* sParam1)
{
	if (!func_263(iParam0, 0))
	{
		return false;
	}
	StringCopy(sParam1, func_878(iParam0), 128);
	iVar0 = get_length_of_literal_string(sParam1);
	if (!func_879(iParam0))
	{
		return false;
	}
	StringCopy(&cVar1, func_880(iParam0), 128);
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

char* func_777(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

char* func_778(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "LITERAL_STRING", sParam0);
	}
	return func_694(_create_var_string(10, "LITERAL_STRING", sParam0), iParam1);
}

bool func_779(int iParam0, int iParam1)
{
	if (!func_263(iParam0, 0))
	{
		return false;
	}
	if (Global_1940258->f_6)
	{
		return false;
	}
	iVar0 = func_595(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_813("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_787(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_881(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_788(iVar1);
				return true;
			}
			iVar3++;
		}
		func_788(iVar1);
	}
	return false;
}

bool func_780(int iParam0)
{
	if (!func_263(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_765(iParam0);
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
	iVar1 = func_882(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_883(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_884(iParam0);
	iVar2 = func_883(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == &Global_17411.f_55.f_644.f_1354.f_5[iVar2];
}

struct<2> func_781(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

int func_782(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_784(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_785(&Var0, func_715(0));
	}
	if (!func_786(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_788(iVar14);
	return uVar15;
}

struct<4> func_783(int iParam0, bool bParam1)
{
	Var0 = { func_603(iParam0, bParam1, 0) };
	return func_262(iParam0, Var0, Var0.f_4, bParam1);
}

struct<14> func_784(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_785(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_786(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_518(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_787(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_788(int iParam0)
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

int func_789(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_829(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_520(iParam0, -455129387);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_522(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_885(&Var1, &iVar62, iParam0, iVar0, iParam1, 1) || iVar62 < 1)
		{
			return 0;
		}
		iVar64 = -1;
		Var65.f_9 = 1;
		Var65.f_11 = -1591664384;
		iVar63 = 0;
		while (iVar63 < iVar62)
		{
			Var65 = { func_886(iParam0, Var1[iVar63]) };
			Var65.f_12 = iParam2;
			iVar64 = func_727(1702063850, &Var65, 1);
			if (iVar64 == -1)
			{
				return 0;
			}
			iVar63++;
		}
		if (iVar64 != -1)
		{
			Var81.f_7 = -142743235;
			Var81.f_16 = -1;
			Var81 = bParam3;
			Var81.f_7 = iParam2;
			func_830(iVar64, Var81);
			return 1;
		}
		return 0;
	}
	if (!_0xb4158c8c9a3b5dce(func_518(bParam4), iParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

struct<4> func_790(bool bParam0)
{
	iVar0 = func_518(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_8)))
		{
			Global_1293346->f_8 = { func_262(271701509, func_261(bParam0), 12999093, 0) };
		}
		return Global_1293346->f_8;
	}
	return func_262(271701509, func_261(bParam0), 12999093, 0);
}

bool func_791(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_765(iParam0);
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
			if (func_887(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_792()
{
	if ((Global_1940311->f_10901 != (Global_1940311->f_38.f_203 - 1) || func_889(func_888(0), Global_1940311->f_10893, 0, 1, 1) > 0) || Global_1940311->f_10901 == 15)
	{
		return true;
	}
	func_890();
	if (Global_1940311->f_6)
	{
		return true;
	}
	return false;
}

void func_793(int iParam0)
{
	Global_1940311->f_10 = iParam0;
}

void func_794(int iParam0)
{
	Global_1940311->f_9 = iParam0;
}

void func_795(int iParam0, int iParam1)
{
	if (!func_263(iParam1, 0))
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
	if (_0xf49f14462f0ae27c(player_id()) == iParam0)
	{
		Var0 = { func_380(0, 1, 0, -1) };
	}
	Var4.f_1 = 20;
	_item_database_fillout_item_effects_ids(iParam1, &Var4);
	iVar34 = 0;
	while (iVar34 < Var4)
	{
		_item_database_fillout_item_effects_id_info(&(Var4.f_1[iVar34]), &Var26);
		switch (Var26.f_1)
		{
			case 1194731729:
				iVar35 = (100 - func_382(Var0, 1));
				if (iVar35 > 50)
				{
					iVar36 = Var26.f_2;
					func_891(iParam0, Var0, 2, iVar36);
				}
				break;
			case 978049229:
				func_892(iParam0, Var26.f_5);
				break;
			case -1918697215:
				iVar37 = func_496(iParam0, 0);
				fVar38 = Var26.f_5;
				func_497(iParam0, 0, (iVar37 + ceil(fVar38)));
				func_891(iParam0, Var0, 1, floor(-fVar38));
				break;
			case 1136630075:
				fVar33 = func_893(to_float(Var26.f_3), Var26.f_4);
				func_894(iParam0, 19, fVar33, 0);
				break;
			case -778289619:
				fVar33 = func_893(to_float(Var26.f_3), Var26.f_4);
				func_894(iParam0, 0, fVar33, 0);
				break;
			case -1946606248:
				func_895(iParam0, Var26.f_5);
				break;
			case 855745648:
				iVar39 = func_496(iParam0, 1);
				fVar40 = Var26.f_5;
				func_497(iParam0, 1, (iVar39 + ceil(fVar40)));
				break;
			case 1365603835:
				fVar33 = func_893(to_float(Var26.f_3), Var26.f_4);
				func_894(iParam0, 18, fVar33, 0);
				break;
			case 1497139093:
				fVar33 = func_893(to_float(Var26.f_3), Var26.f_4);
				func_894(iParam0, 1, fVar33, 0);
				break;
		}
		iVar34++;
	}
}

bool func_796(int iParam0)
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

int func_797(int iParam0)
{
	return 20;
}

void func_798(var uParam0, int iParam1, float fParam2, var uParam3, int iParam4, float fParam5)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return;
	}
	fParam5 = func_385(fParam5, 0f, 1E+09f);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (_0x4c543d5dfcd2dafd(Global_17411.f_55.f_61.f_41[iVar0], &uParam0))
		{
			Global_17411.f_55.f_61.f_41[iVar0]->f_38[iParam4]->f_2 = fParam5;
			return;
		}
		iVar0++;
	}
	if (!func_631(&uParam0))
	{
		return;
	}
	Global_17411.f_55.f_61.f_41[iVar0]->f_38[iParam4]->f_2 = fParam5;
}

void func_799(int iParam0, var uParam1, int iParam2, float fParam3)
{
	if (func_331(iParam0) >= 4)
	{
		return;
	}
	if (func_896(uParam1, iParam2))
	{
		return;
	}
	if (func_897(iParam0, iParam2))
	{
		return;
	}
	if (fParam3 <= 0f)
	{
		bVar1 = func_898(uParam1, iParam2) == 0f;
		fVar0 = func_899(iParam2, bVar1);
	}
	else
	{
		fVar0 = fParam3;
	}
	if (fVar0 == 0f)
	{
		return;
	}
	fVar2 = (fVar0 * Global_1146212->f_2169[61]->f_201);
	fVar0 = (fVar0 + fVar2);
	fVar3 = func_900(fVar0);
	Global_1291734->f_1403.f_3 = (Global_1291734->f_1403.f_3 + fVar3);
	fVar0 = to_float(floor(fVar0));
	if (Global_1291734->f_1403.f_3 >= 1f)
	{
		fVar4 = to_float(floor(Global_1291734->f_1403.f_3));
		Global_1291734->f_1403.f_3 = (Global_1291734->f_1403.f_3 - fVar4);
		fVar0 = (fVar0 + fVar4);
	}
	switch (iParam2)
	{
		case 0:
			if (func_638(iParam0, 0))
			{
				fVar0 = (fVar0 * 0.5f);
			}
			Global_1291734->f_1403.f_11 = (Global_1291734->f_1403.f_11 + fVar0);
			break;
		case 1:
		case 2:
			Global_1291734->f_1403.f_11 = (Global_1291734->f_1403.f_11 + fVar0);
			break;
		case 3:
			Global_1291734->f_1403.f_13 = (Global_1291734->f_1403.f_13 + fVar0);
			break;
		default:
			func_901(iParam2, fVar0);
			break;
	}
	func_902(iParam0, fVar0);
	func_903(uParam1, iParam2, fVar0);
	Global_1291734->f_1403.f_2 = (Global_1291734->f_1403.f_2 + fVar0);
}

void func_800(int iParam0, bool bParam1, bool bParam2)
{
	if (func_2() != 0)
	{
		return;
	}
	if (func_904())
	{
		return;
	}
	if (_0x0e2f43516f998269(player_ped_id()))
	{
		return;
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (!bParam1)
	{
		if (!&Global_1139381->f_3876.f_2[func_905(iParam0, 1)])
		{
			return;
		}
	}
	(Global_1139381->f_3876.f_2[func_905(iParam0, 1)])->f_2++;
	if (!bParam2)
	{
		return;
	}
	if (Global_1296859->f_16 != &Global_1296859)
	{
		return;
	}
	Var0.f_5 = -1;
	Var0.f_4 = 0;
	Var0.f_5 = iParam0;
	Var0.f_6 = bParam1;
	iVar8 = 0;
	iVar8 = 0;
	while (iVar8 < 32)
	{
		if (!network_is_player_active(&(Global_1296859->f_154[iVar8])))
		{
		}
		else if (!_0x9be7dcb22d32ccbe(Global_1296859->f_15, &(Global_1296859->f_154[iVar8])))
		{
		}
		else if (&Global_1296859->f_154[iVar8] == Global_1296859->f_10)
		{
		}
		else
		{
			_0x31010318ba9897ac(&uVar7, &(Global_1296859->f_154[iVar8]));
		}
		iVar8++;
	}
	func_906(&Var0, uVar7);
}

void func_801(int iParam0)
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
	func_907(iParam0, 0f, 0);
	if (!bVar0)
	{
		_0x2eb75fb86c41f026(iParam0, 3, 0);
	}
}

void func_802(int iParam0, int iParam1)
{
	if (!func_361(iParam1))
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
	if (func_318(iParam0))
	{
		iVar1 = func_333(iParam0);
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
					iVar36 = func_806(iParam0);
					iVar37 = func_797(iVar36);
					func_705(iVar1, 1, to_float(iVar37));
				}
				if (bVar0)
				{
					iVar38 = func_406(iVar1, 1);
				}
				else
				{
					iVar38 = func_286(iParam0, 1);
				}
				if (iVar38 < 50)
				{
					if (bVar0)
					{
						func_908(iVar1, 2, iVar34);
					}
					else
					{
						func_909(iParam0, 2, iVar34);
					}
				}
				if (bVar0)
				{
					func_908(iVar1, 1, floor(fVar35));
				}
				else
				{
					func_909(iParam0, 1, floor(fVar35));
				}
				break;
			case 978049229:
				func_892(iParam0, Var24.f_5);
				break;
			case -1918697215:
				if (func_494(0, &uVar31))
				{
					fVar39 = Var24.f_5;
					if (bVar0)
					{
						func_910(iVar1, 0, floor(fVar39));
					}
					else
					{
						func_911(iParam0, 0, floor(fVar39));
					}
				}
				break;
			case 1136630075:
				if (func_912(0, &uVar31))
				{
					fVar32 = func_893(to_float(Var24.f_3), Var24.f_4);
					func_913(iParam0, 0, fVar32);
				}
				break;
			case -778289619:
				if (func_494(0, &uVar31))
				{
					fVar32 = func_893(to_float(Var24.f_3), Var24.f_4);
					func_914(iParam0, 0, fVar32);
				}
				break;
			case -1946606248:
				func_895(iParam0, Var24.f_5);
				break;
			case 855745648:
				if (func_494(1, &uVar31))
				{
					fVar40 = Var24.f_5;
					if (bVar0)
					{
						func_910(iVar1, 1, floor(fVar40));
					}
					else
					{
						func_911(iParam0, 1, floor(fVar40));
					}
				}
				break;
			case 1365603835:
				if (func_912(1, &uVar31))
				{
					fVar32 = func_893(to_float(Var24.f_3), Var24.f_4);
					func_913(iParam0, 1, fVar32);
				}
				break;
			case 1497139093:
				if (func_494(1, &uVar31))
				{
					fVar32 = func_893(to_float(Var24.f_3), Var24.f_4);
					func_914(iParam0, 1, fVar32);
				}
				break;
		}
		iVar33++;
	}
	func_915(iParam1);
	_0xd962f8579d702db5();
}

bool func_803(int iParam0)
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

bool func_804(int iParam0)
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

int func_805(int iParam0)
{
	return 20;
}

int func_806(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
	}
	iVar0 = get_attribute_rank(iParam0, func_821());
	return iVar0;
}

bool func_807(var uParam0, var uParam1, bool bParam2)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	iVar0 = func_518(bParam2);
	if (!_0x025a1b1fb03fbf61(iVar0, uParam0, uParam1, 29, 1))
	{
		return false;
	}
	return true;
}

bool func_808(var uParam0, int iParam1)
{
	return func_916(*uParam0, iParam1);
}

int func_809(int iParam0)
{
	if (!&Global_1048577)
	{
		return 3;
	}
	iVar0 = (*Global_263042)[iParam0]->f_1.f_21.f_2;
	iVar1 = func_917(iVar0);
	iVar2 = func_918(iVar0, iVar1);
	return iVar2;
}

struct<2> func_810()
{
	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

int func_811(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265377->f_124517.f_135 & 8 != 0)
	{
		Global_1071686->f_28351 = 1;
		return 1;
	}
	if (func_213(*Global_1051213) && !func_919(*Global_1051213, Param0))
	{
		Global_1071686->f_28351 = 2;
		return 1;
	}
	if (iParam2 != 0 && func_920(iParam2))
	{
		return 1;
	}
	if (iParam3 != 0 && func_921(iParam3, 255))
	{
		Global_1071686->f_28351 = 4;
		return 1;
	}
	if (Global_263042[&Global_1296859] > 2)
	{
		Global_1071686->f_28351 = 5;
		return 1;
	}
	if (&Global_262155 >= 1)
	{
		Global_1071686->f_28351 = 6;
		return 1;
	}
	if (func_922())
	{
		Global_1071686->f_28351 = 7;
		return 1;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_213(*Global_1051213))
		{
			Global_1071686->f_28351 = 8;
			return 1;
		}
	}
	if (Global_265377->f_124675 != 0 && _does_thread_exist(Global_265377->f_124675))
	{
		Global_1071686->f_28351 = 9;
		return 1;
	}
	Global_1071686->f_28351 = 0;
	return 0;
}

bool func_812(var uParam0, int iParam1)
{
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 - iVar0 * 32);
	return is_bit_set(uParam0[iVar0], iVar1);
}

bool func_813(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_518(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_814(var uParam0, var uParam1)
{
	*uParam0 = { *uParam1 };
	uParam0->f_4 = uParam1->f_4;
	uParam0->f_5 = { uParam1->f_5 };
	uParam0->f_9 = uParam1->f_9;
	uParam0->f_11 = uParam1->f_14;
	if (!is_model_valid(uParam0->f_11))
	{
		return false;
	}
	uParam0->f_22 = func_749(uParam0->f_11);
	if (uParam0->f_22 == 0)
	{
		return false;
	}
	uParam0->f_12 = { uParam1->f_16 };
	uParam0->f_23 = uParam1->f_25;
	uParam0->f_20 = uParam1->f_24;
	uParam0->f_10 = 0;
	return true;
}

bool func_815(var uParam0, var uParam1, bool bParam2)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	iVar0 = func_518(bParam2);
	if (!_0x025a1b1fb03fbf61(iVar0, uParam0, uParam1, 24, 1))
	{
		return false;
	}
	return true;
}

bool func_816(var uParam0, var uParam1)
{
	*uParam0 = { *uParam1 };
	uParam0->f_4 = uParam1->f_4;
	uParam0->f_5 = { uParam1->f_5 };
	uParam0->f_9 = uParam1->f_9;
	uParam0->f_11 = uParam1->f_14;
	if (!is_model_valid(uParam0->f_11))
	{
		return false;
	}
	uParam0->f_22 = 0;
	uParam0->f_12 = { uParam1->f_15 };
	uParam0->f_20 = uParam1->f_23;
	uParam0->f_10 = 2;
	return true;
}

void func_817(var uParam0)
{
	*uParam0 = { func_519() };
	iVar0 = 0;
	while (iVar0 < 24)
	{
		uParam0->f_4[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_29[iVar0] = 100;
		uParam0->f_29[iVar0]->f_1 = 0f;
		uParam0->f_29[iVar0]->f_2 = 0f;
		uParam0->f_29[iVar0]->f_3 = 0;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		switch (iVar0)
		{
			case 0:
				uParam0->f_38[iVar0] = 100;
				break;
			case 1:
				uParam0->f_38[iVar0] = 0;
				break;
			case 2:
				uParam0->f_38[iVar0] = 50;
				break;
		}
		uParam0->f_38[iVar0]->f_1 = 0f;
		uParam0->f_38[iVar0]->f_2 = 0f;
		uParam0->f_38[iVar0]->f_3 = 0;
		iVar0++;
	}
	uParam0->f_51 = { 0f, 0f, 0f };
}

void func_818(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

float func_819(int iParam0)
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
	}
	return 1E+09f;
}

void func_820(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_158(iParam0);
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
	func_648(sVar2, _create_var_string(2, "HORSE_BONDING_LEVEL", iParam1), 908516622, -961843223, 8000, "HUD_Toast_Soundset", "horse_bonding", 0, 0, 1, 1);
}

int func_821()
{
	return 0;
}

void func_822(int iParam0, char* sParam1)
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
	sVar4 = func_924(func_923(sParam1));
	iVar5 = get_hash_key(sVar4);
	sVar6 = "";
	sVar7 = "HUD_Toast_Soundset";
	func_648(_create_var_string(10, sVar0, sVar1), sVar2, iVar3, iVar5, 8000, sVar7, sVar6, 0, 0, 1, 1);
}

int func_823(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
	}
	iVar0 = get_attribute_rank(iParam0, func_824());
	return iVar0;
}

int func_824()
{
	return 1;
}

void func_825(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_925(&Global_0, 8);
	}
	if (!func_298() || func_2() != -1)
	{
		return;
	}
	func_925(&Global_0, 1);
}

int func_826(int iParam0, int iParam1, int iParam2)
{
	if (!func_263(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_520(iParam0, -455129387);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_603(iParam0, 0, 0) };
	if (func_521(iParam0, &Var1, iParam1, 0, 0, -1, 0))
	{
		return 0;
	}
	if (!func_522(0))
	{
		return 0;
	}
	if (!_0xcb5d11f9508a928d(func_518(0), &uVar6, &Var1, iParam0, Var1.f_4, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

bool func_827(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	iVar0 = func_518(bParam7);
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

bool func_828(var uParam0, var uParam1)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (!_0x025a1b1fb03fbf61(func_518(0), uParam0, uParam1, 29, 0))
	{
		return false;
	}
	return true;
}

bool func_829(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

void func_830(int iParam0, struct<17> Param1)
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

int func_831(int iParam0, int iParam1, bool bParam2)
{
	if (!func_713(iParam0, 2))
	{
		return 0;
	}
	if ((bParam2 && func_2() == 0) && !_unlock_is_visible(iParam0))
	{
		return 1;
	}
	if (!func_926(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return 0;
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
			return 1;
		}
		iVar12++;
	}
	return 0;
}

bool func_832(int iParam0)
{
	if (func_372(iParam0, 75135761))
	{
		return true;
	}
	return false;
}

int func_833(int iParam0, bool bParam1)
{
	if (!func_263(iParam0, 0))
	{
		return func_927(func_592(iParam0), bParam1);
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0) || Var0.f_5 == 0)
	{
		return 0;
	}
	if (bParam1 && _0xfbe782b3165ac8ec(Var0.f_5))
	{
		return 0;
	}
	return Var0.f_5;
}

int func_834(int iParam0, int iParam1)
{
	Var0 = 10;
	Var0.f_1.f_4 = 15;
	Var0.f_1.f_36 = 10;
	Var0.f_1.f_47.f_4 = 15;
	Var0.f_1.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	if (!_item_database_fillout_buy_award_acquire_costs(iParam0, &Var0, &uVar471, 10) || iLocal_475 == 0)
	{
		return 0;
	}
	iVar473 = 0;
	iVar474 = 0;
	while (iLocal_478 < iLocal_475)
	{
		if (&Var0[iLocal_478] == iParam1)
		{
			iVar473 = Var0[iLocal_478]->f_35;
			iVar475 = 0;
			while (iLocal_479 < iLocal_477)
			{
				uVar472 = &Var0[iLocal_478]->f_36[iLocal_479];
				if (iLocal_476 == 0)
				{
				}
				else if (!_unlock_is_unlocked(iLocal_476))
				{
					return 1;
				}
				iVar475 = iLocal_479 + 1;
			}
		}
		iVar474 = iLocal_478 + 1;
	}
	return 0;
}

bool func_835(int iParam0, int iParam1, var uParam2, int iParam3)
{
	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_263(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!_item_database_fillout_acquire_cost(iParam0, iParam1, &Var0))
	{
		return false;
	}
	if (Var0.f_35 > 10)
	{
		Var0.f_35 = 10;
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

bool func_836(int iParam0, int iParam1)
{
	if (!func_450(iParam0))
	{
		return false;
	}
	return (Global_1915715->f_17884[iParam0] && iParam1) != 0;
}

bool func_837(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_838(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		return (Global_8123[iParam0] && iParam1) != 0;
	}
	return (Global_1071686->f_19674[iParam0] && iParam1) != 0;
}

int func_839(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return 0;
	}
	if (func_829(iParam1))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_928(iParam0, *uParam2, &Var0, 0))
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

bool func_840(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_841(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1391860027;
		case 3:
			return -2049683567;
		case 4:
			return -1639750081;
		case 33:
			return -395929392;
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
		case 22:
			return -1433937760;
		case 23:
			return -681691620;
		case 24:
			return -706234936;
		case 25:
			return -282099500;
		case 26:
			return 1450105278;
		case 5:
			return 379756162;
		case 12:
			return 2128397741;
		case 14:
			return -924263120;
		case 30:
			return 1915478031;
		case 31:
			return -1816941102;
		case 32:
			return 1350021532;
		case 15:
			return 1442571063;
		case 16:
			return -997221403;
		case 17:
			return 1489861748;
		case 27:
			return -2132712788;
		case 28:
			return -995716959;
		case 29:
			return 1414815075;
		case 34:
			return 1427539511;
		case 19:
			return -967055532;
		case 20:
			return 662159626;
		case 21:
			return 1743191502;
		case 18:
			return -830712656;
		case 35:
			return 1570650502;
		case 36:
			return -1980461700;
		case 38:
			return -486915945;
		case 37:
			return -1023568458;
		case 39:
			return 374439621;
		default:
			break;
	}
	return 0;
}

bool func_842()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

bool func_843(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_690(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_689(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_688(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_686(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_685(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_687(iParam0);
	if (iVar5 < 1 || iVar5 > func_691(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

int func_844(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_845()
{
	return Global_1102219->f_3672;
}

void func_846(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	if (!func_494(iParam1, &iVar0))
	{
		return;
	}
	sVar1 = func_929(iParam1);
	sVar2 = func_930(iParam1);
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

var func_847(int iParam0)
{
	uVar0 = &Global_1903136->f_379.f_10[iParam0];
	return uVar0;
}

bool func_848(int iParam0)
{
	return func_372(iParam0, 1279601681);
}

bool func_849(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_518(0);
	*uParam1 = { func_262(iParam0, func_715(0), iParam3, 0) };
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

bool func_850()
{
	return (func_931(-1185145312, 0, 0, 0) > 0 && func_733(func_262(889965687, func_261(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

bool func_851(int iParam0, var uParam1)
{
	iVar0 = _0x6c9f12700bce69f4(iParam0, uParam1);
	if (iParam0 == 1702063850)
	{
		if ((func_932(uParam1->f_8, iParam0, iVar0, 2048) || func_932(uParam1->f_8, iParam0, iVar0, 32768)) || func_932(uParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_932(uParam1->f_8, iParam0, iVar0, 4) || func_932(uParam1->f_8, iParam0, iVar0, 256)) || func_932(uParam1->f_8, iParam0, iVar0, 65536)) || func_932(uParam1->f_8, iParam0, iVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -1406934746)
	{
		if (((func_932(uParam1->f_8, iParam0, iVar0, 1) || func_932(uParam1->f_8, iParam0, iVar0, 8)) || func_932(uParam1->f_8, iParam0, iVar0, 65536)) || func_932(uParam1->f_8, iParam0, iVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -1318406457)
	{
		if (((func_932(uParam1->f_8, iParam0, iVar0, 1) || func_932(uParam1->f_8, iParam0, iVar0, 16)) || func_932(uParam1->f_8, iParam0, iVar0, 2)) || func_932(uParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_932(uParam1->f_8, iParam0, iVar0, 8) || func_932(uParam1->f_8, iParam0, iVar0, 4096)) || func_932(uParam1->f_8, iParam0, iVar0, 256)) || func_932(uParam1->f_8, iParam0, iVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_852(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 28, uParam2, 0);
}

int func_853(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (_cashinventory_transaction_checkout(iParam1))
		{
			func_933(iParam1, 1, 0, 0);
			return iParam1;
		}
		_cashinventory_transaction_delete(iParam1);
	}
	else if (_cashinventory_transaction_get_num_of_items(iParam1) == 0)
	{
		_cashinventory_transaction_delete(iParam1);
	}
	func_933(iParam1, 2, 0, 0);
	return -1;
}

int func_854(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_933(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

bool func_855(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 25, uParam2, 0);
}

bool func_856(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 17, uParam2, 0);
}

bool func_857(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 16, uParam2, 0);
}

int func_858(int iParam0, int iParam1, int iParam2)
{
	if (!func_263(iParam1, 0))
	{
		return 0;
	}
	Var0 = { func_478(iParam0) };
	Var5 = { func_479(iParam0, iParam1, Var0, Var0.f_4) };
	if (_0xcb5d11f9508a928d(iParam0, &Var5, &Var0, iParam1, Var0.f_4, iParam2, 752097756))
	{
		return 1;
	}
	return 0;
}

void func_859(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (bParam5)
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
			func_934(iParam0, 0, 1);
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
			func_290(iParam0, 0);
			bVar0 = true;
		}
		func_282(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

int func_860(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (func_935(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_861(int iParam0)
{
	if (!func_263(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_765(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return _item_database_get_has_slot_count(iVar0);
}

bool func_862(vector3 vParam0)
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

void func_863(var uParam0, int iParam1, vector3 vParam2, int iParam5, float fParam6, int iParam7, float fParam8, float fParam9, float fParam10)
{
	if (!func_192(vParam2))
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
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 49:
		case 50:
		case 51:
		case 52:
			break;
		case 48:
			_0x827a58ced9d4d5b4(*uParam0, fParam6);
			break;
		case 42:
			_0xb8e3486d107f4194(*uParam0, fParam10);
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
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
			_0xe9225354fb7437a7(*uParam0, 1);
			break;
	}
	switch (iParam5)
	{
		case 12:
		case 13:
			_0xff8afca532b500d4(*uParam0, 8192);
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
				_0x954451ea2d2120fb(*uParam0, func_936(10f, 40f, 5f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_936(30f, 60f, 5f, iParam1));
				_0x450080ddedb91258(*uParam0, 10f);
				_0xbc3f847ae2c3dc65(*uParam0, 10f);
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			case 37:
				_0x2eb977293923c723(*uParam0, 30f);
				_0x954451ea2d2120fb(*uParam0, func_936(40f, 80f, 5f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_936(50f, 90f, 5f, iParam1));
				_0x450080ddedb91258(*uParam0, 10f);
				_0xbc3f847ae2c3dc65(*uParam0, 15f);
				_0x885d19ac2b6fbff4(*uParam0, 1);
				break;
			case 38:
				_0x2eb977293923c723(*uParam0, 30f);
				_0x954451ea2d2120fb(*uParam0, func_936(30f, 60f, 5f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_936(50f, 80f, 5f, iParam1));
				_0x450080ddedb91258(*uParam0, 5f);
				_0xbc3f847ae2c3dc65(*uParam0, 15f);
				_0x885d19ac2b6fbff4(*uParam0, 1);
				break;
			case 39:
				_0x2eb977293923c723(*uParam0, 10f);
				_0x954451ea2d2120fb(*uParam0, func_936(0f, 10f, 1f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_936(5f, 15f, 1f, iParam1));
				_0x450080ddedb91258(*uParam0, 3f);
				_0xbc3f847ae2c3dc65(*uParam0, 3f);
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			case 40:
				_0x2eb977293923c723(*uParam0, 40f);
				_0x954451ea2d2120fb(*uParam0, func_936(60f, 120f, 10f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_936(100f, 130f, 5f, iParam1));
				_0x450080ddedb91258(*uParam0, 20f);
				_0xbc3f847ae2c3dc65(*uParam0, 20f);
				_0x885d19ac2b6fbff4(*uParam0, 1);
				break;
			case 41:
				_0x2eb977293923c723(*uParam0, 10f);
				_0x954451ea2d2120fb(*uParam0, func_936(10f, 35f, 5f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_936(25f, 50f, 5f, iParam1));
				_0x450080ddedb91258(*uParam0, 2f);
				_0xbc3f847ae2c3dc65(*uParam0, 20f);
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			case 44:
			case 45:
				_0x2eb977293923c723(*uParam0, 60f);
				_0x954451ea2d2120fb(*uParam0, func_936(60f, 80f, 10f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_936(75f, 95f, 5f, iParam1));
				_0xbc3f847ae2c3dc65(*uParam0, 10f);
				_0x450080ddedb91258(*uParam0, 25f);
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			case 50:
				_0x2eb977293923c723(*uParam0, 30f);
				_0x954451ea2d2120fb(*uParam0, func_936(30f, 70f, 10f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_936(65f, 95f, 5f, iParam1));
				_0xbc3f847ae2c3dc65(*uParam0, 25f);
				_0x450080ddedb91258(*uParam0, 25f);
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			case 51:
				_0x2eb977293923c723(*uParam0, 25f);
				_0x954451ea2d2120fb(*uParam0, func_936(25f, 35f, 5f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_936(40f, 50f, 5f, iParam1));
				_0xbc3f847ae2c3dc65(*uParam0, 8f);
				_0x450080ddedb91258(*uParam0, 2f);
				_0x885d19ac2b6fbff4(*uParam0, 1);
				break;
			case 52:
				_0x2eb977293923c723(*uParam0, 0f);
				_0x954451ea2d2120fb(*uParam0, 0f);
				_0x0f4f6c4ce471259d(*uParam0, func_936(40f, 100f, 10f, iParam1));
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			case 42:
				_0x2eb977293923c723(*uParam0, 50f);
				_0x954451ea2d2120fb(*uParam0, func_936(50f, 70f, 10f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_936(65f, 85f, 5f, iParam1));
				_0xbc3f847ae2c3dc65(*uParam0, 10f);
				_0x450080ddedb91258(*uParam0, 25f);
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			case 49:
				_0xbc3f847ae2c3dc65(*uParam0, 10f);
				_0x450080ddedb91258(*uParam0, 25f);
				_0x2eb977293923c723(*uParam0, 50f);
				_0x954451ea2d2120fb(*uParam0, 0f);
				_0x0f4f6c4ce471259d(*uParam0, func_936(10f, 50f, 10f, iParam1));
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			case 43:
				_0x2eb977293923c723(*uParam0, func_936(95f, 90f, 80f, iParam1));
				_0x954451ea2d2120fb(*uParam0, func_936(95f, 90f, 80f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_936(125f, 115f, 100f, iParam1));
				_0x450080ddedb91258(*uParam0, 5f);
				_0xbc3f847ae2c3dc65(*uParam0, 10f);
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			case 46:
				iVar0 = func_937(vParam2, 1);
				iVar1 = func_938(vParam2);
				if ((((iVar1 == 15 || iVar1 == 14) || iVar1 == 13) || (iVar1 == 9 && iVar0 == -1)) || (iVar1 == 4 && iVar0 == -1))
				{
					_0x2eb977293923c723(*uParam0, func_936(100f, 80f, -5f, iParam1));
					_0x954451ea2d2120fb(*uParam0, func_936(100f, 80f, -5f, iParam1));
					_0x0f4f6c4ce471259d(*uParam0, func_936(110f, 160f, 12.5f, iParam1));
				}
				else
				{
					_0x2eb977293923c723(*uParam0, func_936(100f, 70f, -7.5f, iParam1));
					_0x954451ea2d2120fb(*uParam0, 70f);
					_0x0f4f6c4ce471259d(*uParam0, func_936(80f, 150f, 17.5f, iParam1));
				}
				_0xbc3f847ae2c3dc65(*uParam0, 10f);
				_0x450080ddedb91258(*uParam0, 25f);
				_0x885d19ac2b6fbff4(*uParam0, 0);
				if (iParam1 <= 2)
				{
					_0x19bc99c678fba139(*uParam0, 2, 0);
					_0x764db5a48390fbad(*uParam0, 1);
				}
				break;
			case 47:
				_0xbc3f847ae2c3dc65(*uParam0, 10f);
				_0x450080ddedb91258(*uParam0, 25f);
				_0x2eb977293923c723(*uParam0, 50f);
				_0x954451ea2d2120fb(*uParam0, 0f);
				_0x0f4f6c4ce471259d(*uParam0, func_936(50f, 90f, 10f, iParam1));
				_0x885d19ac2b6fbff4(*uParam0, 0);
				if (iParam1 <= 2)
				{
					_0x764db5a48390fbad(*uParam0, 1);
				}
				break;
			case 48:
				_0xbc3f847ae2c3dc65(*uParam0, 10f);
				_0x450080ddedb91258(*uParam0, 25f);
				_0x2eb977293923c723(*uParam0, func_936(100f, 70f, -7.5f, iParam1));
				_0x954451ea2d2120fb(*uParam0, 70f);
				_0x0f4f6c4ce471259d(*uParam0, func_936(150f, 190f, 10f, iParam1));
				_0x885d19ac2b6fbff4(*uParam0, 0);
				if (iParam1 <= 2)
				{
					_0x764db5a48390fbad(*uParam0, 1);
				}
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

void func_864(var uParam0, int iParam1, vector3 vParam2)
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
		case 53:
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
		case 44:
		case 49:
			_0x5d9b0baaf04cf65b(*uParam0, 44, 2, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 50, 3, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 23, 4, 0);
			_0x19bc99c678fba139(*uParam0, 75, 1);
			break;
		case 50:
			_0x5d9b0baaf04cf65b(*uParam0, 44, 2, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 50, 2, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 23, 3, 0);
			_0x19bc99c678fba139(*uParam0, 75, 1);
			break;
		case 51:
			_0x5d9b0baaf04cf65b(*uParam0, 50, 2, 0);
			break;
		case 46:
		case 47:
		case 48:
			if (func_937(vParam2, 1) == 5)
			{
				_0x5d9b0baaf04cf65b(*uParam0, 53, 1, 0);
				_0x5d9b0baaf04cf65b(*uParam0, 74, 1, 0);
			}
			else
			{
				_0x5d9b0baaf04cf65b(*uParam0, 44, 1, 0);
			}
			_0x5d9b0baaf04cf65b(*uParam0, 50, 1, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 23, 3, 0);
			_0x19bc99c678fba139(*uParam0, 75, 1);
			break;
		case 43:
			_0x5d9b0baaf04cf65b(*uParam0, 50, 2, 1);
			_0x19bc99c678fba139(*uParam0, 5, 0);
			break;
		case 52:
			break;
	}
}

Vector3 func_865(vector3 vParam0)
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

bool func_866(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_867(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12)
{
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	if (!func_524(Param0, &Var0, 1, 0, -1))
	{
		return -1;
	}
	if (func_868(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return -1;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, iParam8))
	{
		return -1;
	}
	Var14 = { func_262(Var0.f_4, Param4, iParam8, 1) };
	if (_0xb881ca836cc4b6d4(&Var14))
	{
		if (_0x4a606c17276e1bcc(&Param0) != _0x4a606c17276e1bcc(&Var14))
		{
			return -1;
		}
	}
	if (iParam12 == -1)
	{
		iParam12 = Var0.f_11;
	}
	iVar18 = func_264(Var0.f_4, Param4, iParam8, 1, 1, 0);
	iVar19 = _0xe80e50bee276a54a(Var0.f_4, iParam8);
	if (iVar19 >= 0)
	{
		if (iVar18 >= iVar19)
		{
			return -1;
		}
		else if ((iVar18 + iParam12) > iVar19)
		{
			if (bParam11)
			{
				return -1;
			}
			iParam12 = (iVar19 - iVar18);
		}
	}
	Var0.f_11 = iParam12;
	Var20 = { func_726(&Var0, 0) };
	Var20.f_4 = { Param4 };
	Var20.f_11 = iParam8;
	Var20.f_10 = bParam10;
	iVar36 = func_727(1168099063, &Var20, bParam9);
	if (iVar36 == -1)
	{
		return -1;
	}
	return iVar36;
}

bool func_868(var uParam0, bool bParam1)
{
	if (((*uParam0 == *bParam1 && uParam0->f_1 == bParam1->f_1) && uParam0->f_2 == bParam1->f_2) && uParam0->f_3 == bParam1->f_3)
	{
		return true;
	}
	return false;
}

int func_869(struct<4> Param0, struct<4> Param4, int iParam8, int iParam9)
{
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return -1;
	}
	if (func_868(&Param0, &Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_524(Param0, &Var0, 1, 0, -1) || !func_524(Param4, &Var14, 1, 0, -1))
	{
		return -1;
	}
	if (func_868(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return -1;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, Var14.f_9) || !_inventory_fits_slot_id(Var14.f_4, Var0.f_9))
	{
		return -1;
	}
	Var28 = { func_726(&Var0, 0) };
	Var28.f_4 = { Var14.f_5 };
	Var28.f_11 = Var14.f_9;
	Var28.f_10 = (Var14.f_10 || iParam8);
	Var44 = { func_726(&Var14, 0) };
	Var44.f_4 = { Var0.f_5 };
	Var44.f_11 = Var0.f_9;
	Var44.f_10 = (Var0.f_10 || iParam8);
	iVar60 = -1;
	if (_cashinventory_transaction_start(&iVar60, 712853601, 1168099063))
	{
		if (func_857(iVar60, 1168099063, &Var28) && func_857(iVar60, 1168099063, &Var44))
		{
			if (func_939(iVar60) && _cashinventory_transaction_checkout(iVar60))
			{
				func_933(iVar60, 1, 0, 0);
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
	return iVar60;
}

int func_870(int iParam0, int iParam1)
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

int func_871(int iParam0)
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

int func_872(int iParam0)
{
	if (!func_263(iParam0, 0))
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

struct<10> func_873(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_874(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = _item_database_create_item_collection(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_875(int iParam0)
{
	if (!func_263(iParam0, 0))
	{
	}
	if (func_372(iParam0, -393037696))
	{
		return 1;
	}
	return 0;
}

int func_876(int iParam0)
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

int func_877(int iParam0, int iParam1)
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

char* func_878(int iParam0)
{
	if (!func_263(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_769(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return _get_label_text_by_hash(iVar0);
}

bool func_879(int iParam0)
{
	if (func_765(iParam0) == -126813555 || func_765(iParam0) == 1946043663)
	{
		return true;
	}
	return false;
}

char* func_880(int iParam0)
{
	if (!func_263(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_771(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return _get_label_text_by_hash(iVar0);
}

bool func_881(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

int func_882(int iParam0)
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

int func_883(var uParam0, int iParam1)
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

int func_884(int iParam0)
{
	iVar0 = func_765(iParam0);
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

bool func_885(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	*iParam1 = 0;
	if (iParam4 < 1)
	{
		return false;
	}
	else if (*uParam0 != 10)
	{
		return false;
	}
	if (iParam3 == 0)
	{
		iParam3 = func_520(iParam2, -455129387);
		if (iParam3 == 0)
		{
			return false;
		}
	}
	if (!_0xd1555fbc96c88444(iParam2, iParam3, iParam4, uParam0, 10))
	{
		return false;
	}
	if (!func_940(uParam0, iParam1, iParam4, bParam5))
	{
		return false;
	}
	return true;
}

struct<16> func_886(int iParam0, var uParam1)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { func_262(iParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = iParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

bool func_887(int iParam0, int iParam1, int iParam2)
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

int func_888(int iParam0)
{
	return _0xf49f14462f0ae27c(get_player_index());
}

int func_889(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_599(iParam1, bParam2, 0, 0);
	iVar0 = (iVar0 + func_941(iParam0, iParam1));
	if (bParam3)
	{
		iVar0 = (iVar0 + func_942(iParam1, bParam4));
	}
	return iVar0;
}

void func_890()
{
	if (!func_263(Global_1940311->f_10893, 0))
	{
		Global_1940311->f_6 = 0;
	}
	else if ((((func_943(Global_1940311->f_10893, 1224357681) != 0 && Global_1940311->f_10892 != 0) && Global_1940311->f_10892 != -2074770370) && !Global_1915715->f_20638) && !Global_1915715->f_22504.f_1)
	{
		Global_1940311->f_6 = 1;
	}
	else
	{
		Global_1940311->f_6 = 0;
	}
}

void func_891(int iParam0, struct<4> Param1, int iParam5, int iParam6)
{
	func_386(iParam0, Param1, iParam5, (func_382(Param1, iParam5) + iParam6));
}

void func_892(int iParam0, float fParam1)
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

float func_893(float fParam0, int iParam1)
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

int func_894(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!does_entity_exist(iParam0))
	{
		iParam0 = Global_1296859->f_9;
		if (!does_entity_exist(iParam0))
		{
			return 0;
		}
	}
	return func_944(iParam0, iParam1, fParam2, bParam3);
}

void func_895(int iParam0, float fParam1)
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

bool func_896(var uParam0, int iParam1)
{
	fVar0 = func_945(iParam1);
	if (fVar0 == 1E+09f)
	{
		return false;
	}
	if (func_898(uParam0, iParam1) >= fVar0)
	{
		return true;
	}
	return false;
}

bool func_897(int iParam0, int iParam1)
{
	if (iParam1 == 23)
	{
		return false;
	}
	switch (iParam1)
	{
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			return false;
		default:
			break;
	}
	if (func_143(iParam0) < 0.1f)
	{
		return false;
	}
	return true;
}

float func_898(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (_0x4c543d5dfcd2dafd(Global_17411.f_55.f_61.f_41[iVar0], uParam0))
		{
			return &(Global_17411.f_55.f_61.f_41[iVar0]->f_4[iParam1]);
		}
		iVar0++;
	}
	if (!func_631(uParam0))
	{
		return 0f;
	}
	return 0f;
}

float func_899(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_946(iParam0);
	}
	return func_947(iParam0);
}

float func_900(float fParam0)
{
	fVar0 = to_float(floor(fParam0));
	return (fParam0 - fVar0);
}

void func_901(int iParam0, float fParam1)
{
	sVar0 = "";
	iVar1 = 0;
	iVar2 = 109029619;
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			break;
		case 3:
			sVar0 = "HORSE_XP_LEADING";
			break;
		case 10:
		case 11:
			sVar0 = "HORSE_XP_HITCH";
			break;
		case 4:
			sVar0 = "HORSE_XP_EQUIP_SADDLE";
			break;
		case 5:
			sVar0 = "HORSE_XP_BREAK_HORSE";
			break;
		case 6:
		case 7:
			sVar0 = "HORSE_XP_PATTED";
			break;
		case 12:
		case 13:
		case 14:
			sVar0 = "HORSE_XP_FED";
			break;
		case 15:
			sVar0 = "HORSE_XP_TREAT";
			break;
		case 16:
		case 17:
		case 18:
			sVar0 = "HORSE_XP_GROOM";
			break;
		case 19:
			sVar0 = "HORSE_XP_OINTMENT";
			break;
		case 8:
		case 9:
			sVar0 = "HORSE_XP_CALM";
			break;
		case 20:
		case 21:
			sVar0 = "HORSE_XP_LIGHT_LOAD";
			break;
		case 22:
			sVar0 = "HORSE_XP_KILLED_OWN_HORSE";
			iVar1 = 1;
			iVar2 = 859817522;
			break;
	}
	bVar3 = false;
	if (bVar3)
	{
		sVar0 = _create_var_string(2, sVar0, floor(fParam1));
	}
	else
	{
		sVar0 = _create_var_string(2, "HORSE_XP_GENERIC_EARNED");
	}
	func_633(sVar0, "ITEMTYPE_TEXTURES", 48560695, iVar1, iVar2, 0, 0, 0, 1);
}

void func_902(int iParam0, float fParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	iVar0 = func_331(iParam0);
	if (iVar0 >= 4)
	{
		return;
	}
	func_948(iParam0, floor(fParam1));
	iVar1 = func_331(iParam0);
	if (iVar1 > iVar0)
	{
		iVar2 = (iVar1 - iVar0);
		func_703(func_702(352983236), iVar2);
		_0xa69899995997a63b(iParam0, iVar1);
		if (iVar1 >= 4)
		{
			func_703(func_702(-2116919750), 1);
		}
		if (iVar1 == 2)
		{
			func_228(21, 1);
		}
		else if (iVar1 == 3)
		{
			func_228(22, 1);
		}
		else if (iVar1 == 4)
		{
			func_228(23, 1);
		}
		func_949(iVar1, iParam0);
		func_950();
	}
}

void func_903(var uParam0, int iParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (_0x4c543d5dfcd2dafd(Global_17411.f_55.f_61.f_41[iVar0], uParam0))
		{
			Global_17411.f_55.f_61.f_41[iVar0]->f_4[iParam1] = (&Global_17411.f_55.f_61.f_41[iVar0]->f_4[iParam1] + fParam2);
			return;
		}
		iVar0++;
	}
	if (!func_631(uParam0))
	{
		return;
	}
	Global_17411.f_55.f_61.f_41[iVar0]->f_4[iParam1] = (&Global_17411.f_55.f_61.f_41[iVar0]->f_4[iParam1] + fParam2);
}

bool func_904()
{
	if (func_2() != 0)
	{
		return true;
	}
	if (!_unlock_is_unlocked(-1461907237))
	{
		return true;
	}
	if (Global_1139381->f_3876.f_1 & 2 != 0)
	{
		return true;
	}
	if (Global_1139381->f_3876.f_1 & 4 != 0)
	{
		return true;
	}
	if (!has_network_time_started())
	{
		return true;
	}
	return false;
}

int func_905(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2086327823:
			return 64;
		case -2076515520:
			return 98;
		case -2062348046:
			return 101;
		case -1983943039:
			return 62;
		case -1967078622:
			return 4;
		case -1935655667:
			return 39;
		case -1930919582:
			return 56;
		case -1930399868:
			return 68;
		case -1924130593:
			return 102;
		case -1898294040:
			return 50;
		case -1854780893:
			return 5;
		case -1783181138:
			return 13;
		case -1777144780:
			return 92;
		case -1679013564:
			return 16;
		case -1648877470:
			return 43;
		case -1634863390:
			return 10;
		case -1598949067:
			return 45;
		case -1575244427:
			return 67;
		case -1494363065:
			return 1;
		case -1408563730:
			return 30;
		case -1399051227:
			return 53;
		case -1393798041:
			return 59;
		case -1376314322:
			return 49;
		case -1330378740:
			return 95;
		case -1315007749:
			return 21;
		case -1296513906:
			return 11;
		case -1258163578:
			return 48;
		case -1215742816:
			return 37;
		case -1152882498:
			return 18;
		case -1098645728:
			return 93;
		case -1034424695:
			return 32;
		case -1030655937:
			return 12;
		case -985005225:
			return 57;
		case -892848695:
			return 74;
		case -789758703:
			return 34;
		case -757633599:
			return 31;
		case -706075066:
			return 17;
		case -682435976:
			return 82;
		case -634665876:
			return 15;
		case -545299531:
			return 44;
		case -514316475:
			return 2;
		case -479797100:
			return 105;
		case -469672732:
			return 70;
		case -379874384:
			return 79;
		case -355092128:
			return 75;
		case -326224139:
			return 100;
		case -210274020:
			return 35;
		case -162385832:
			return 73;
		case -114666387:
			return 51;
		case -86995487:
			return 20;
		case -79139194:
			return 77;
		case -71551190:
			return 96;
		case -32613857:
			return 86;
		case -29468993:
			return 103;
		case -1:
			return 0;
		case 5611246:
			return 87;
		case 81846499:
			return 23;
		case 120448958:
			return 27;
		case 151445061:
			return 61;
		case 242857368:
			return 42;
		case 300196727:
			return 41;
		case 334700325:
			return 52;
		case 353568324:
			return 69;
		case 385589027:
			return 24;
		case 396837320:
			return 29;
		case 440583097:
			return 47;
		case 449057693:
			return 22;
		case 457103096:
			return 55;
		case 477974086:
			return 6;
		case 478308321:
			return 46;
		case 499656970:
			return 8;
		case 618068466:
			return 7;
		case 630308764:
			return 89;
		case 633501950:
			return 36;
		case 640330073:
			return 94;
		case 669386338:
			return 104;
		case 796310207:
			return 66;
		case 905156700:
			return 60;
		case 941437279:
			return 72;
		case 946732137:
			return 76;
		case 1232224440:
			return 83;
		case 1248971179:
			return 97;
		case 1250422342:
			return 14;
		case 1257949393:
			return 3;
		case 1316486837:
			return 26;
		case 1345888212:
			return 28;
		case 1382158532:
			return 78;
		case 1398164246:
			return 90;
		case 1427070667:
			return 81;
		case 1571096148:
			return 54;
		case 1623086000:
			return 65;
		case 1717813521:
			return 71;
		case 1723535349:
			return 58;
		case 1791948823:
			return 9;
		case 1841970554:
			return 33;
		case 1872332830:
			return 99;
		case 1889309476:
			return 84;
		case 1898201469:
			return 40;
		case 1918774327:
			return 85;
		case 1951290581:
			return 25;
		case 1971904853:
			return 38;
		case 2002140369:
			return 91;
		case 2018657739:
			return 80;
		case 2021695109:
			return 63;
		case 2078792148:
			return 88;
		case 2108116481:
			return 19;
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

void func_906(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 185;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 7, 7, &uParam1);
}

void func_907(int iParam0, float fParam1, int iParam2)
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

void func_908(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_406(iParam0, iParam1);
	func_704(iParam0, iParam1, (iVar0 + iParam2));
}

void func_909(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_286(iParam0, iParam1);
	func_387(iParam0, iParam1, (iVar0 + iParam2));
}

void func_910(int iParam0, int iParam1, int iParam2)
{
	func_695(iParam0, iParam1, (func_439(iParam0, iParam1) + iParam2));
}

void func_911(int iParam0, int iParam1, int iParam2)
{
	func_497(iParam0, iParam1, (func_496(iParam0, iParam1) + iParam2));
}

bool func_912(int iParam0, var uParam1)
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

void func_913(int iParam0, int iParam1, float fParam2)
{
	if (func_912(iParam1, &iVar0))
	{
		_set_attribute_overpower_amount(iParam0, iVar0, fParam2, false);
	}
}

void func_914(int iParam0, int iParam1, float fParam2)
{
	if (func_494(iParam1, &iVar0))
	{
		_set_attribute_overpower_amount(iParam0, iVar0, fParam2, false);
	}
}

void func_915(int iParam0)
{
	if (func_951(iParam0))
	{
		animpostfx_play("POSTFX_CONSUMABLE_STAMINA_FORT");
		return;
	}
	if (func_587(iParam0))
	{
		animpostfx_play("POSTFX_CONSUMABLE_STAMINA");
		return;
	}
}

bool func_916(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_917(int iParam0)
{
	if (iParam0 == 395262693 || iParam0 == -933924539)
	{
		return 482206342;
	}
	return Global_524288->f_40400;
}

int func_918(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -504335712:
			if (func_952(iParam1))
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 2;
			}
			break;
		case 395262693:
			iVar0 = 2;
			break;
		case -933924539:
			iVar0 = 0;
			break;
		default:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

bool func_919(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_920(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1197740->f_1 && iParam0) != 0;
}

bool func_921(int iParam0, int iParam1)
{
	if (!Global_1071686->f_3)
	{
		return false;
	}
	if (!network_is_in_session())
	{
		return false;
	}
	if (iParam1 == 255)
	{
		iParam1 = network_player_id_to_int();
	}
	return (Global_1197355[iParam1] && iParam0) != 0;
}

bool func_922()
{
	if (&Global_1048576)
	{
		return true;
	}
	if (Global_1572887->f_4)
	{
		return true;
	}
	if (&Global_2883584)
	{
		return true;
	}
	if (&Global_1048577)
	{
		return true;
	}
	if (!func_213(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

struct<4> func_923(int iParam0)
{
	StringCopy(&cVar0, "TOAST_RPG_LEVEL_", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_", 32);
	StringIntConCat(&cVar0, 0, 32);
	return cVar0;
}

char* func_924(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

void func_925(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_926(int iParam0, int iParam1, var uParam2, int iParam3)
{
	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_713(iParam0, 2))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!func_953(iParam0, iParam1, &Var0))
	{
		return false;
	}
	if (Var0.f_35 > 10)
	{
		Var0.f_35 = 10;
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

int func_927(int iParam0, bool bParam1)
{
	if (!func_713(iParam0, 2))
	{
		return 0;
	}
	iVar0 = 0;
	if ((iVar0 != 0 && bParam1) && _0xfbe782b3165ac8ec(iVar0))
	{
		return 0;
	}
	return iVar0;
}

bool func_928(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam1))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(iParam0, &uParam1, iParam5, !bParam6))
	{
		return false;
	}
	return true;
}

char* func_929(int iParam0)
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

char* func_930(int iParam0)
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

int func_931(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_954(iParam0) && !bParam2)
	{
		return get_ped_ammo_by_type(Global_34, iParam0);
	}
	return _0xe787f05dfc977bde(func_518(bParam1), iParam0, iParam3);
}

int func_932(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_916(iParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_933(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_955(iParam0, iParam1, iParam2, iParam3);
}

void func_934(int iParam0, bool bParam1, bool bParam2)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		_0xdf631e4bce1b1fc4(iParam0, -1725579161, 0, 1);
	}
	else
	{
		_set_ped_component_disabled(iParam0, -1725579161, 1);
	}
	if (bParam2)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

bool func_935(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_518(bParam3);
	}
	if (!_0x22e590f108289a9d(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_728(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

float func_936(float fParam0, float fParam1, float fParam2, int iParam3)
{
	fVar0 = fParam0;
	fVar0 = (fVar0 + (fParam2 * IntToFloat(iParam3)));
	if (fVar0 > fParam1)
	{
		fVar0 = fParam1;
	}
	return fVar0;
}

int func_937(vector3 vParam0, int iParam3)
{
	iVar0 = func_584();
	if (func_837(iVar0))
	{
		if (_0xf256a75210c5c0eb((*Global_1887339)[iVar0]->f_4, vParam0))
		{
			return iVar0;
		}
	}
	return func_956(vParam0, iParam3);
}

int func_938(vector3 vParam0)
{
	return func_957(_get_map_zone_at_coords(vParam0, 10));
}

bool func_939(int iParam0)
{
	iVar0 = _0x38640a8c2def011b(iParam0);
	iVar1 = _cashinventory_transaction_get_action(iParam0);
	if (iVar0 == 0)
	{
		return true;
	}
	if (iVar1 == 1168099063)
	{
		if (((func_932(0, iVar1, iVar0, 4) || func_932(0, iVar1, iVar0, 256)) || func_932(0, iVar1, iVar0, 65536)) || func_932(0, iVar1, iVar0, 131072))
		{
			return false;
		}
	}
	else if ((func_932(0, iVar1, iVar0, 8) || func_932(0, iVar1, iVar0, 16)) || func_932(0, iVar1, iVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_940(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = 0;
	if (*uParam0 != 10)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iParam2 < 1)
		{
			Jump @253; //curOff = 37
		}
		else if ((*uParam0)[iVar0]->f_4 == 0)
		{
			Jump @244; //curOff = 55
		}
		else if ((*uParam0)[iVar0]->f_5 == 0)
		{
			Jump @244; //curOff = 73
		}
		else if (func_958((*uParam0)[iVar0]))
		{
		}
		else
		{
			if (iVar0 != *iParam1)
			{
				*(*uParam0)[*iParam1] = { *(*uParam0)[iVar0] };
				(*uParam0)[*iParam1]->f_4 = (*uParam0)[iVar0]->f_4;
			}
			if ((*uParam0)[iVar0]->f_5 > iParam2)
			{
				(*uParam0)[*iParam1]->f_5 = iParam2;
				iParam2 = 0;
			}
			else
			{
				(*uParam0)[*iParam1]->f_5 = (*uParam0)[iVar0]->f_5;
				iParam2 = (iParam2 - (*uParam0)[*iParam1]->f_5);
			}
			if (iVar0 > *iParam1)
			{
				*(*uParam0)[iVar0] = { func_519() };
				(*uParam0)[iVar0]->f_4 = 0;
				(*uParam0)[iVar0]->f_5 = 0;
			}
			*iParam1++;
		}
		iVar0++;
	}
	if (bParam3 && iParam2 > 0)
	{
		*iParam1 = 0;
		return false;
	}
	return true;
}

int func_941(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (func_959(iParam1))
		{
			iVar0 = 0;
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (Global_1904087->f_113[iVar1]->f_1 == iParam1)
				{
					iVar0++;
				}
				iVar1++;
			}
			return iVar0;
		}
		else
		{
			return func_477(_inventory_get_ped_inventory_id(iParam0), iParam1);
		}
	}
	return 0;
}

int func_942(int iParam0, bool bParam1)
{
	if (!bParam1 || func_960())
	{
		return func_264(iParam0, func_261(1), -2015960939, 1, 1, 0);
	}
	return 0;
}

int func_943(int iParam0, int iParam1)
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

int func_944(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (iParam0 == Global_1296859->f_8)
	{
		return func_961(iParam1, fParam2, 1, bParam3);
	}
	if (fParam2 == -1f)
	{
		if (func_962(iParam1))
		{
			fParam2 = 30f;
		}
		else
		{
			fParam2 = 30f;
		}
	}
	else if (fParam2 <= 0f)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			func_963(iParam1, iParam0);
			_set_attribute_overpower_amount(iParam0, iParam1, fParam2, bParam3);
			break;
		case 1:
			func_963(iParam1, iParam0);
			_set_attribute_overpower_amount(iParam0, iParam1, fParam2, bParam3);
			break;
		case 19:
			func_963(iParam1, iParam0);
			_set_attribute_overpower_amount(iParam0, iParam1, fParam2, bParam3);
			break;
		case 18:
			func_963(iParam1, iParam0);
			_set_attribute_overpower_amount(iParam0, iParam1, fParam2, bParam3);
			break;
		default:
			return 0;
	}
	return 1;
}

float func_945(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 50f;
		case 5:
			return 25f;
		default:
			break;
	}
	return 1E+09f;
}

float func_946(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return Global_1901947->f_681.f_2;
		case 0:
			return Global_1901947->f_681.f_3;
		case 1:
			return Global_1901947->f_681.f_4;
		case 2:
			return Global_1901947->f_681.f_5;
		case 4:
			return Global_1901947->f_681.f_7;
		case 5:
			return Global_1901947->f_681.f_9;
		case 6:
			return Global_1901947->f_681.f_10;
		case 7:
			return Global_1901947->f_681.f_11;
		case 8:
			return Global_1901947->f_681.f_12;
		case 9:
			return Global_1901947->f_681.f_13;
		case 10:
			return Global_1901947->f_681.f_14;
		case 11:
			return Global_1901947->f_681.f_15;
		case 12:
			return Global_1901947->f_681.f_16;
		case 13:
			return Global_1901947->f_681.f_17;
		case 14:
			return Global_1901947->f_681.f_18;
		case 15:
			return Global_1901947->f_681.f_19;
		case 16:
			return Global_1901947->f_681.f_20;
		case 17:
			return Global_1901947->f_681.f_21;
		case 18:
			return Global_1901947->f_681.f_22;
		case 19:
			return Global_1901947->f_681.f_23;
		case 20:
			return Global_1901947->f_681.f_25;
		case 21:
			return Global_1901947->f_681.f_26;
		case 22:
			return Global_1901947->f_681.f_27;
		default:
			break;
	}
	return 0f;
}

float func_947(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return Global_1901947->f_681.f_2;
		case 0:
			return Global_1901947->f_681.f_3;
		case 1:
			return Global_1901947->f_681.f_4;
		case 2:
			return Global_1901947->f_681.f_5;
		case 4:
			return Global_1901947->f_681.f_6;
		case 5:
			return Global_1901947->f_681.f_8;
		case 6:
			return Global_1901947->f_681.f_10;
		case 7:
			return Global_1901947->f_681.f_11;
		case 8:
			return Global_1901947->f_681.f_12;
		case 9:
			return Global_1901947->f_681.f_13;
		case 10:
			return Global_1901947->f_681.f_14;
		case 11:
			return Global_1901947->f_681.f_15;
		case 12:
			return Global_1901947->f_681.f_16;
		case 13:
			return Global_1901947->f_681.f_17;
		case 14:
			return Global_1901947->f_681.f_18;
		case 15:
			return Global_1901947->f_681.f_19;
		case 16:
			return Global_1901947->f_681.f_20;
		case 17:
			return Global_1901947->f_681.f_21;
		case 18:
			return Global_1901947->f_681.f_22;
		case 19:
			return Global_1901947->f_681.f_23;
		case 20:
			return Global_1901947->f_681.f_25;
		case 21:
			return Global_1901947->f_681.f_26;
		case 22:
			return Global_1901947->f_681.f_27;
		default:
			break;
	}
	return 0f;
}

void func_948(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	add_attribute_points(iParam0, 7, iParam1);
}

void func_949(int iParam0, int iParam1)
{
	iVar0 = get_entity_model(iParam1);
	iVar1 = get_default_max_attribute_rank(iVar0, 7);
	if (iParam0 == 1)
	{
		sVar2 = "HORSE_BONDED";
	}
	else if (iParam0 == iVar1)
	{
		sVar2 = "HORSE_BONDING_MAXIMUM";
	}
	else
	{
		sVar2 = "HORSE_BONDING_LEVELUP";
	}
	func_648(sVar2, _create_var_string(2, "HORSE_BONDING_LEVEL", iParam0), 908516622, -961843223, 8000, "HUD_Toast_Soundset", "horse_bonding", 0, 0, 1, 1);
}

void func_950()
{
	if (Global_1291734->f_1403.f_5 == 1)
	{
		return;
	}
	Global_1291734->f_1403.f_5 = 1;
}

bool func_951(int iParam0)
{
	switch (iParam0)
	{
		case -801397594:
		case 747460826:
			return true;
	}
	return false;
}

bool func_952(int iParam0)
{
	return ((iParam0 == -1759663922 || iParam0 == -318976023) || iParam0 == 772881414);
}

bool func_953(int iParam0, int iParam1, var uParam2)
{
	iVar1 = _0x7a35a72a692be9db(iParam0);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (_0x3a0b667abff87f6e(iParam0, iVar0, uParam2) && *uParam2 == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_954(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

void func_955(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_964(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)]);
	Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)] = iParam0;
	(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_2 = iParam2;
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_3 = iParam3;
	}
}

int func_956(vector3 vParam0, bool bParam3)
{
	iVar0 = func_965(vParam0);
	iVar1 = -1;
	if (Global_1893570[iVar0] > 0)
	{
		iVar2 = (Global_1893570[iVar0] - 1);
		bVar3 = false;
		while (iVar2 >= 0 && !bVar3)
		{
			iVar4 = (*Global_1892753)[iVar0][iVar2];
			if (_does_volume_exist((*Global_1887339)[iVar4]->f_4))
			{
				if (_0xf256a75210c5c0eb((*Global_1887339)[iVar4]->f_4, vParam0))
				{
					switch ((*Global_1887339)[iVar4]->f_21)
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

int func_957(int iParam0)
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

bool func_958(var uParam0)
{
	if (!func_966(uParam0))
	{
		return false;
	}
	return _0x0137c77a2ec64536(uParam0);
}

bool func_959(int iParam0)
{
	if (!func_773(iParam0, 1955773996))
	{
		return false;
	}
	if (!func_967(iParam0, 1))
	{
		return false;
	}
	return true;
}

bool func_960()
{
	if (!_network_is_player_index_valid(player_id()))
	{
		return false;
	}
	if (!network_is_player_active(player_id()))
	{
		return false;
	}
	iVar0 = _0xb9050a97594c8832(player_id());
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (!func_968(iVar0))
	{
		return false;
	}
	return true;
}

int func_961(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	iVar1 = player_ped_id();
	if (fParam1 == -1f)
	{
		if (func_962(iParam0))
		{
			fParam1 = 30f;
		}
		else
		{
			fParam1 = 30f;
		}
	}
	else if (fParam1 <= 0f)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (bParam2)
			{
				sVar0 = func_969(iParam0);
				if (!animpostfx_is_running(sVar0))
				{
					animpostfx_play(sVar0);
				}
			}
			func_970(-1);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[0] = fParam1;
			break;
		case 1:
			if (bParam2)
			{
				sVar0 = func_969(iParam0);
				if (!animpostfx_is_running(sVar0))
				{
					animpostfx_play(sVar0);
				}
			}
			func_971(1775828486);
			func_972(-1);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[1] = fParam1;
			break;
		case 2:
			if (bParam2)
			{
				sVar0 = func_969(iParam0);
				if (!animpostfx_is_running(sVar0))
				{
					animpostfx_play(sVar0);
				}
			}
			func_973(-1, 0);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[2] = fParam1;
			break;
		case 19:
			func_971(350943398);
			func_974(0, 1, 1);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[0]->f_1 = fParam1;
			break;
		case 18:
			func_974(1, 1, 1);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[1]->f_1 = fParam1;
			break;
		case 20:
			func_974(2, 1, 1);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[2]->f_1 = fParam1;
			break;
		default:
			return 0;
	}
	return 1;
}

bool func_962(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return true;
		case 0:
			return true;
		case 2:
			return true;
		default:
			break;
	}
	return false;
}

void func_963(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			func_975(get_entity_max_health(iParam1, false), iParam1);
			break;
		case 1:
			func_976(_get_ped_max_stamina(iParam1), iParam1);
			break;
		case 19:
			func_977(iParam1, 0, 100f);
			break;
		case 18:
			func_977(iParam1, 1, 100f);
			break;
	}
}

void func_964(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_978(&(uParam0->f_4));
}

int func_965(vector3 vParam0)
{
	iVar0 = func_979(vParam0, 0f, 0f, 0, 2);
	return func_979(vParam0, (*Global_1892740)[iVar0]->f_1, (*Global_1892740)[iVar0]->f_2, Global_1892740[iVar0], 4);
}

bool func_966(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_967(int iParam0, int iParam1)
{
	iVar0 = func_980(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return iVar0 > iParam1;
}

bool func_968(int iParam0)
{
	switch (get_entity_model(iParam0))
	{
		case -1698498246:
			return true;
		default:
			break;
	}
	return false;
}

char* func_969(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PlayerOverpower";
		case 1:
			return "PlayerOverpower";
		case 2:
			return "PlayerOverpower";
		default:
			break;
	}
	return "";
}

void func_970(int iParam0)
{
	iVar0 = player_ped_id();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = _0x16f2c8c084ab2092(iVar0);
	}
	iVar1 = func_981(2);
	func_982(to_float((iParam0 * iVar1)), 0);
}

void func_971(int iParam0)
{
	iVar1 = Global_1146212->f_47689.f_1.f_42;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar0 = &Global_1146212->f_47689.f_1[iVar2];
		iVar3 = func_983(iVar0, 1);
		if (&Global_1146212->f_35859.f_919[iVar3] == iParam0)
		{
			func_984(iVar0);
			Global_1146212->f_47689.f_1.f_42 = (Global_1146212->f_47689.f_1.f_42 - 1);
		}
		else
		{
			*Var6[iVar4] = { *Global_1146212->f_47689.f_1[iVar2] };
			iVar4++;
		}
		iVar2++;
	}
	iVar5 = 0;
	while (iVar5 < iVar4)
	{
		*Global_1146212->f_47689.f_1[iVar5] = { *Var6[iVar5] };
		iVar5++;
	}
}

void func_972(int iParam0)
{
	iVar0 = player_ped_id();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = _0xfc3b580c4380b5b7(iVar0);
	}
	iVar1 = func_985(2);
	func_986(to_float((iParam0 * iVar1)), 0);
}

void func_973(int iParam0, bool bParam1)
{
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = 10;
	}
	iVar0 = func_987(2);
	func_988(to_float((iParam0 * iVar0)), 0, bParam1);
}

void func_974(int iParam0, bool bParam1, bool bParam2)
{
	func_989(iParam0, 100f, bParam1, bParam2, 1, 2);
}

void func_975(int iParam0, int iParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1296859->f_8;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	_set_entity_health(iParam1, iParam0, 0);
}

void func_976(float fParam0, int iParam1)
{
	if (fParam0 < 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1296859->f_8;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	fVar0 = (fParam0 - _get_ped_stamina(iParam1));
	_charge_ped_stamina(iParam1, fVar0);
}

bool func_977(int iParam0, int iParam1, float fParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (fParam2 > 100f)
	{
		fParam2 = 100f;
	}
	else if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	_set_attribute_core_value(iParam0, func_990(iParam1), ceil(fParam2));
	return true;
}

void func_978(var uParam0)
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

int func_979(struct<2> Param0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
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

int func_980(int iParam0)
{
	if (!_item_database_fillout_satchel_data(iParam0, &uVar0))
	{
		return -1;
	}
	return uVar0;
}

int func_981(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_991(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1956200->f_1546;
		case 1:
			return Global_1956200->f_1565.f_136;
		default:
			break;
	}
	return -1;
}

void func_982(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1296859->f_8;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	_0x835f131e7dc8f97a(iParam1, fParam0, 0, 0);
}

int func_983(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2101912686:
			return 13;
		case -2059285007:
			return 167;
		case -2006026692:
			return 176;
		case -1993903481:
			return 124;
		case -1970041458:
			return 142;
		case -1935700575:
			return 136;
		case -1927422497:
			return 127;
		case -1920464018:
			return 58;
		case -1919393558:
			return 27;
		case -1857550353:
			return 173;
		case -1855662261:
			return 55;
		case -1840995238:
			return 15;
		case -1835722213:
			return 88;
		case -1790318144:
			return 106;
		case -1786033368:
			return 62;
		case -1767968552:
			return 86;
		case -1767662471:
			return 32;
		case -1729980669:
			return 108;
		case -1729554078:
			return 49;
		case -1727526861:
			return 109;
		case -1722264360:
			return 18;
		case -1719665775:
			return 37;
		case -1716981503:
			return 107;
		case -1697567574:
			return 72;
		case -1685270562:
			return 181;
		case -1631930150:
			return 166;
		case -1629969648:
			return 174;
		case -1605880447:
			return 120;
		case -1575244501:
			return 61;
		case -1551628748:
			return 74;
		case -1543433893:
			return 70;
		case -1539337723:
			return 121;
		case -1525401254:
			return 64;
		case -1525233154:
			return 47;
		case -1491472827:
			return 94;
		case -1486927560:
			return 112;
		case -1480068681:
			return 50;
		case -1478178768:
			return 148;
		case -1465202595:
			return 104;
		case -1459368569:
			return 116;
		case -1431848307:
			return 76;
		case -1418298797:
			return 155;
		case -1391865428:
			return 171;
		case -1378468884:
			return 60;
		case -1291022662:
			return 117;
		case -1288042557:
			return 19;
		case -1248720641:
			return 7;
		case -1229834518:
			return 89;
		case -1223791123:
			return 79;
		case -1209874968:
			return 45;
		case -1197630873:
			return 153;
		case -1196069774:
			return 180;
		case -1181880939:
			return 80;
		case -1170784825:
			return 38;
		case -1125028284:
			return 137;
		case -1123356036:
			return 147;
		case -1100659165:
			return 6;
		case -1089821002:
			return 85;
		case -1084890102:
			return 172;
		case -1080696981:
			return 92;
		case -1010031245:
			return 39;
		case -992423055:
			return 157;
		case -979738281:
			return 77;
		case -931294997:
			return 111;
		case -920221586:
			return 110;
		case -900877140:
			return 30;
		case -885737328:
			return 114;
		case -885646667:
			return 67;
		case -837774766:
			return 78;
		case -813902658:
			return 182;
		case -799500009:
			return 145;
		case -751329575:
			return 139;
		case -711254121:
			return 132;
		case -660114191:
			return 31;
		case -649929946:
			return 53;
		case -636552746:
			return 123;
		case -587737142:
			return 71;
		case -546870456:
			return 159;
		case -521477124:
			return 82;
		case -481051896:
			return 135;
		case -425216802:
			return 17;
		case -415437740:
			return 103;
		case -415250715:
			return 144;
		case -392183396:
			return 90;
		case -343572565:
			return 21;
		case -340578116:
			return 169;
		case -286632741:
			return 8;
		case -267135864:
			return 138;
		case -233204301:
			return 105;
		case -203268054:
			return 143;
		case -161625840:
			return 177;
		case -126580932:
			return 0;
		case -117284255:
			return 122;
		case -60432888:
			return 44;
		case -56802666:
			return 102;
		case -47513954:
			return 99;
		case -46116991:
			return 163;
		case -35033037:
			return 133;
		case -33431232:
			return 12;
		case -29822088:
			return 40;
		case 0:
			return 1;
		case 1213703:
			return 154;
		case 54499763:
			return 98;
		case 111084081:
			return 56;
		case 114587291:
			return 29;
		case 149216078:
			return 57;
		case 168336706:
			return 149;
		case 173401469:
			return 100;
		case 180714777:
			return 81;
		case 268103762:
			return 97;
		case 282858309:
			return 183;
		case 320758674:
			return 158;
		case 352539363:
			return 179;
		case 362862598:
			return 170;
		case 398279342:
			return 34;
		case 408582472:
			return 5;
		case 420477860:
			return 25;
		case 456199285:
			return 168;
		case 509781427:
			return 93;
		case 550487527:
			return 35;
		case 576694808:
			return 175;
		case 638586808:
			return 118;
		case 659100749:
			return 59;
		case 666050502:
			return 65;
		case 698214003:
			return 2;
		case 713106899:
			return 36;
		case 780689752:
			return 3;
		case 791791441:
			return 125;
		case 797908556:
			return 42;
		case 798283666:
			return 141;
		case 807983049:
			return 150;
		case 839199173:
			return 91;
		case 846387993:
			return 14;
		case 852774198:
			return 113;
		case 878491929:
			return 33;
		case 887717126:
			return 66;
		case 926420921:
			return 51;
		case 946848176:
			return 68;
		case 952755846:
			return 24;
		case 955999834:
			return 134;
		case 956867472:
			return 9;
		case 1036630721:
			return 10;
		case 1037792287:
			return 140;
		case 1052684812:
			return 87;
		case 1075856357:
			return 95;
		case 1078589127:
			return 46;
		case 1095779900:
			return 22;
		case 1110815339:
			return 152;
		case 1138017610:
			return 11;
		case 1156950836:
			return 83;
		case 1195903441:
			return 52;
		case 1278022357:
			return 48;
		case 1281707602:
			return 164;
		case 1323028278:
			return 41;
		case 1374979106:
			return 28;
		case 1405624312:
			return 146;
		case 1444077748:
			return 23;
		case 1449867002:
			return 162;
		case 1498983922:
			return 84;
		case 1547488310:
			return 161;
		case 1554410187:
			return 73;
		case 1585362808:
			return 16;
		case 1636352616:
			return 151;
		case 1662680949:
			return 178;
		case 1698995037:
			return 4;
		case 1769731136:
			return 115;
		case 1801131110:
			return 75;
		case 1806354060:
			return 96;
		case 1811663962:
			return 131;
		case 1828803907:
			return 20;
		case 1829805500:
			return 54;
		case 1830494920:
			return 101;
		case 1838787462:
			return 129;
		case 1865781806:
			return 165;
		case 1899963938:
			return 63;
		case 1900141702:
			return 156;
		case 1903067887:
			return 126;
		case 1907663129:
			return 43;
		case 2040423027:
			return 128;
		case 2050123975:
			return 130;
		case 2096770678:
			return 119;
		case 2110112797:
			return 69;
		case 2119170919:
			return 160;
		case 2132307595:
			return 26;
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

int func_984(int iParam0)
{
	if (!func_992(iParam0))
	{
		return 0;
	}
	iVar0 = func_983(iParam0, 1);
	if (!func_993(&(Global_1146212->f_35859.f_919[iVar0])))
	{
		return 1;
	}
	iVar3 = func_994(&(Global_1146212->f_35859.f_919[iVar0]), 1);
	iVar4 = 0;
	while (iVar4 < Global_1146212->f_35859[iVar3]->f_5)
	{
		iVar1 = Global_1146212->f_35859[iVar3][iVar4];
		switch (func_995(iParam0, iVar1))
		{
			case 0:
				func_996(iVar1, iParam0, iVar4);
				break;
			case 1:
				iVar5 = 0;
				while (iVar5 < Global_1146212->f_35859.f_11700)
				{
					if (&Global_1146212->f_35859.f_9503[iVar5] != iVar1 || Global_1146212->f_35859.f_9503[iVar5]->f_1 != iParam0)
					{
					}
					else
					{
						func_996(iVar1, iParam0, iVar4);
						func_997(Global_1146212->f_35859.f_9503[iVar5]);
						Global_1146212->f_35859.f_11700 = (Global_1146212->f_35859.f_11700 - 1);
						*Global_1146212->f_35859.f_9503[iVar5] = { *Global_1146212->f_35859.f_9503[Global_1146212->f_35859.f_11700] };
						func_997(Global_1146212->f_35859.f_9503[Global_1146212->f_35859.f_11700]);
					}
					else
					{
						iVar5++;
					}
				}
				break;
			case 2:
				Jump @606; //curOff = 387
				iVar2 = func_998(iVar1, 1);
				func_999(iVar2, -1);
				if (Global_1146212->f_35859.f_3116[iVar2]->f_29 <= 0)
				{
					func_1000(iVar2, 0);
					iVar6 = 0;
					while (iVar6 < Global_1146212->f_35859.f_9502)
					{
						if (&Global_1146212->f_35859.f_9302[iVar6] != iVar1)
						{
						}
						else
						{
							Global_1146212->f_35859.f_9302[iVar6] = -1;
							Global_1146212->f_35859.f_9502 = (Global_1146212->f_35859.f_9502 - 1);
							Global_1146212->f_35859.f_9302[iVar6] = &Global_1146212->f_35859.f_9302[Global_1146212->f_35859.f_9502];
							Global_1146212->f_35859.f_9302[Global_1146212->f_35859.f_9502] = -1;
						}
						else
						{
							iVar6++;
						}
					}
				}
				iVar4++;
			}
			Global_1146212->f_35859.f_919[iVar0] = -1;
			func_1001(Global_1146212->f_35859.f_919[iVar0]);
			return 1;
		}

int func_985(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_991(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1956200->f_1546.f_2;
		case 1:
			return Global_1956200->f_1565.f_136.f_2;
		default:
			break;
	}
	return -1;
}

void func_986(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1296859->f_8;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	_charge_ped_stamina(iParam1, fParam0);
}

int func_987(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_991(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1956200->f_1546.f_1;
		case 1:
			return Global_1956200->f_1565.f_136.f_1;
		default:
			break;
	}
	return -1;
}

void func_988(float fParam0, bool bParam1, bool bParam2)
{
	iVar0 = player_id();
	if (fParam0 > 0f && func_1002(iVar0))
	{
		return;
	}
	iVar1 = player_ped_id();
	if (!does_entity_exist(iVar1))
	{
		return;
	}
	if ((_0xb16223cb7da965f0(iVar0) && fParam0 > 0f) && !bParam2)
	{
		return;
	}
	if (fParam0 == 0f)
	{
		return;
	}
	fVar2 = _0xab3773e7aa1e9dcc(iVar0);
	if (fParam0 < 0f && bParam1 == 1)
	{
		bParam1 = false;
	}
	if (!bParam1)
	{
		_0x5a498fca232f71e1(iVar0, 1f);
	}
	if (fParam0 > 0f)
	{
		_0x51345ae20f22c261(iVar0, fParam0, 0, 0, 1);
	}
	else
	{
		_0x200114e99552462b(iVar0, fParam0, 0);
	}
	if (!bParam1)
	{
		_0x5a498fca232f71e1(iVar0, fVar2);
	}
}

int func_989(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if (iParam5 == 2)
	{
		iParam5 = func_991(2);
	}
	iVar0 = player_ped_id();
	if (func_977(iVar0, iParam0, fParam1))
	{
		if (bParam2)
		{
			if (fParam1 >= 100f)
			{
				play_sound_frontend("Core_Full", "Consumption_Sounds", true, 0);
			}
			else
			{
				play_sound_frontend("Core_Fill_Up", "Consumption_Sounds", true, 0);
			}
		}
		if (bParam3)
		{
			func_1003(iParam0, 7000, iParam5);
		}
		func_1004(iVar0, iParam0, fParam1);
		func_1005(iParam0, fParam1, bParam4, iParam5);
	}
	return 1;
}

int func_990(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 0;
		case 2:
			return 2;
		default:
			break;
	}
	return 0;
}

int func_991(int iParam0)
{
	return func_1007(func_1006(iParam0));
}

bool func_992(int iParam0)
{
	iVar0 = func_983(iParam0, 1);
	if (iVar0 < 2 || iVar0 >= 183)
	{
		return false;
	}
	return true;
}

bool func_993(int iParam0)
{
	iVar0 = func_994(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 153)
	{
		return false;
	}
	return true;
}

int func_994(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2137819446:
			return 100;
		case -2131931188:
			return 136;
		case -2130179962:
			return 63;
		case -2082434331:
			return 152;
		case -2059502051:
			return 65;
		case -2056449621:
			return 93;
		case -2038430863:
			return 151;
		case -1973221270:
			return 64;
		case -1969715419:
			return 35;
		case -1968787770:
			return 6;
		case -1957895818:
			return 56;
		case -1952291530:
			return 139;
		case -1950424573:
			return 54;
		case -1910888845:
			return 110;
		case -1883405573:
			return 78;
		case -1844803100:
			return 80;
		case -1831687141:
			return 62;
		case -1810408560:
			return 73;
		case -1805785047:
			return 41;
		case -1759910473:
			return 25;
		case -1756646040:
			return 92;
		case -1741565123:
			return 47;
		case -1609480552:
			return 61;
		case -1596526341:
			return 3;
		case -1573606823:
			return 49;
		case -1510695159:
			return 148;
		case -1504620904:
			return 107;
		case -1462866101:
			return 111;
		case -1405836475:
			return 55;
		case -1360021450:
			return 9;
		case -1356583879:
			return 137;
		case -1246069683:
			return 124;
		case -1242362177:
			return 46;
		case -1235458416:
			return 74;
		case -1234968784:
			return 69;
		case -1234548949:
			return 7;
		case -1143906885:
			return 131;
		case -1140308479:
			return 143;
		case -1105699593:
			return 153;
		case -1047626954:
			return 118;
		case -1008191715:
			return 1;
		case -985141745:
			return 79;
		case -980934770:
			return 125;
		case -974857798:
			return 140;
		case -914097888:
			return 132;
		case -900341092:
			return 142;
		case -859661758:
			return 60;
		case -821191074:
			return 115;
		case -810885450:
			return 40;
		case -750368411:
			return 48;
		case -691826426:
			return 77;
		case -608746625:
			return 17;
		case -567710817:
			return 2;
		case -565327488:
			return 72;
		case -559775780:
			return 121;
		case -549372097:
			return 59;
		case -455491084:
			return 85;
		case -447950391:
			return 94;
		case -418060375:
			return 4;
		case -391691334:
			return 68;
		case -375368707:
			return 58;
		case -357713093:
			return 128;
		case -336340230:
			return 119;
		case -309456186:
			return 10;
		case -300915357:
			return 146;
		case -252777454:
			return 135;
		case -193167881:
			return 127;
		case -190717545:
			return 30;
		case -179898515:
			return 122;
		case -179343615:
			return 150;
		case -132268497:
			return 141;
		case -120658935:
			return 67;
		case -97080319:
			return 43;
		case -93340399:
			return 106;
		case -2338369:
			return 39;
		case -1:
			return 0;
		case 18275459:
			return 8;
		case 47725914:
			return 11;
		case 130533095:
			return 126;
		case 151887407:
			return 18;
		case 153569762:
			return 44;
		case 158579484:
			return 117;
		case 163503896:
			return 101;
		case 183566846:
			return 15;
		case 193887912:
			return 113;
		case 225804550:
			return 133;
		case 267361268:
			return 86;
		case 272084311:
			return 71;
		case 312483235:
			return 29;
		case 349431355:
			return 105;
		case 350943398:
			return 102;
		case 383280474:
			return 12;
		case 467901857:
			return 51;
		case 508502713:
			return 134;
		case 548902645:
			return 109;
		case 549687162:
			return 145;
		case 591249118:
			return 28;
		case 611341556:
			return 16;
		case 618168626:
			return 26;
		case 620773281:
			return 98;
		case 668358831:
			return 149;
		case 677513315:
			return 45;
		case 713112284:
			return 50;
		case 722162219:
			return 88;
		case 730253571:
			return 36;
		case 731266401:
			return 90;
		case 785001351:
			return 144;
		case 793035862:
			return 81;
		case 802887669:
			return 114;
		case 808176588:
			return 116;
		case 828060856:
			return 38;
		case 837742789:
			return 70;
		case 900184247:
			return 21;
		case 924932702:
			return 14;
		case 969398724:
			return 89;
		case 1014273190:
			return 96;
		case 1033330939:
			return 82;
		case 1034286944:
			return 87;
		case 1123546272:
			return 104;
		case 1130659268:
			return 123;
		case 1138545953:
			return 20;
		case 1157170123:
			return 75;
		case 1159895828:
			return 31;
		case 1296512587:
			return 97;
		case 1377989036:
			return 19;
		case 1423325819:
			return 32;
		case 1476796894:
			return 24;
		case 1486559056:
			return 129;
		case 1493749872:
			return 112;
		case 1500545235:
			return 138;
		case 1507470319:
			return 83;
		case 1543468593:
			return 147;
		case 1568867811:
			return 57;
		case 1625043854:
			return 22;
		case 1667258255:
			return 33;
		case 1695199279:
			return 130;
		case 1699722938:
			return 13;
		case 1746978940:
			return 84;
		case 1764814366:
			return 95;
		case 1767031434:
			return 120;
		case 1775828486:
			return 103;
		case 1830439946:
			return 23;
		case 1851839077:
			return 99;
		case 1860260195:
			return 66;
		case 1885285188:
			return 52;
		case 1905466026:
			return 27;
		case 1925734249:
			return 76;
		case 1938325642:
			return 5;
		case 2079700825:
			return 42;
		case 2081475118:
			return 37;
		case 2093509505:
			return 34;
		case 2100718034:
			return 108;
		case 2117355246:
			return 53;
		case 2146493981:
			return 91;
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

int func_995(int iParam0, int iParam1)
{
	iVar0 = func_1008(iParam0);
	iVar1 = &Global_1296859;
	iVar2 = func_998(iParam1, 1);
	switch (Global_1146212->f_35859.f_3116[iVar2]->f_1)
	{
		case -1912291748:
			if (iVar1 == iVar0)
			{
				return 0;
			}
			else
			{
				return 2;
			}
			break;
		case -619998507:
		case -594821844:
		case 348502922:
		case 1002704651:
		case 1270499458:
			return 1;
		default:
			if (iVar1 == iVar0)
			{
				return 1;
			}
			break;
	}
	return 2;
}

int func_996(int iParam0, int iParam1, int iParam2)
{
	if (!func_992(iParam1))
	{
		return 0;
	}
	if (!func_1009(iParam0))
	{
		return 0;
	}
	iVar0 = func_998(iParam0, 1);
	func_1010(iParam0, iParam1, iParam2);
	if (func_1011(*Global_1146212->f_35859.f_3116[iVar0]) && func_1012(iParam0, Global_1146212->f_35859.f_3116[iVar0]->f_4))
	{
		vVar1 = { func_1013(Global_1146212->f_35859.f_3116[iVar0]->f_4) };
		if (func_1014(vVar1))
		{
			if (func_1015(vVar1.x, vVar1.y, vVar1.z))
			{
				func_1016(Global_1146212->f_35859.f_3116[iVar0]->f_4, vVar1.x, vVar1.y, vVar1.z);
			}
			else
			{
				func_1017(Global_1146212->f_35859.f_3116[iVar0]->f_4);
			}
		}
		else
		{
			func_1017(Global_1146212->f_35859.f_3116[iVar0]->f_4);
		}
	}
	return 1;
}

void func_997(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
}

int func_998(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2139291255:
			return 145;
		case -2133203822:
			return 108;
		case -2119961771:
			return 90;
		case -2117138640:
			return 79;
		case -2115524796:
			return 60;
		case -2108980762:
			return 137;
		case -2088744988:
			return 91;
		case -2056483403:
			return 75;
		case -2019073637:
			return 198;
		case -2008161946:
			return 26;
		case -2006179687:
			return 180;
		case -1961023994:
			return 92;
		case -1958950493:
			return 194;
		case -1954641284:
			return 28;
		case -1946267644:
			return 130;
		case -1925826694:
			return 49;
		case -1920322236:
			return 22;
		case -1886192107:
			return 55;
		case -1854279248:
			return 6;
		case -1853627206:
			return 134;
		case -1851126253:
			return 29;
		case -1847886830:
			return 16;
		case -1841577353:
			return 112;
		case -1840959475:
			return 106;
		case -1808210911:
			return 30;
		case -1803458707:
			return 8;
		case -1761885354:
			return 111;
		case -1749044999:
			return 96;
		case -1698597704:
			return 45;
		case -1631537135:
			return 63;
		case -1599892133:
			return 38;
		case -1514337705:
			return 188;
		case -1498884346:
			return 156;
		case -1448841146:
			return 50;
		case -1445919747:
			return 117;
		case -1441068914:
			return 39;
		case -1426414385:
			return 182;
		case -1421504146:
			return 109;
		case -1419242781:
			return 33;
		case -1394912816:
			return 199;
		case -1391351739:
			return 166;
		case -1378028573:
			return 27;
		case -1370534631:
			return 110;
		case -1327315394:
			return 1;
		case -1311380047:
			return 46;
		case -1299791944:
			return 2;
		case -1280685390:
			return 132;
		case -1268916163:
			return 119;
		case -1256990268:
			return 76;
		case -1139172958:
			return 61;
		case -1112015628:
			return 173;
		case -1094465110:
			return 47;
		case -1038422902:
			return 74;
		case -1011126213:
			return 31;
		case -964953325:
			return 123;
		case -955252868:
			return 124;
		case -932897324:
			return 11;
		case -931584677:
			return 103;
		case -925634234:
			return 21;
		case -750441842:
			return 184;
		case -749371485:
			return 164;
		case -649515024:
			return 142;
		case -624920400:
			return 81;
		case -612675573:
			return 148;
		case -572117096:
			return 193;
		case -562496675:
			return 57;
		case -562150430:
			return 181;
		case -560965516:
			return 48;
		case -554207528:
			return 59;
		case -539762089:
			return 97;
		case -529396121:
			return 185;
		case -454200664:
			return 104;
		case -440727241:
			return 19;
		case -423133485:
			return 133;
		case -403292810:
			return 113;
		case -398496662:
			return 23;
		case -343145237:
			return 160;
		case -342633876:
			return 5;
		case -334674962:
			return 13;
		case -332283977:
			return 66;
		case -306011710:
			return 4;
		case -280832639:
			return 51;
		case -276166656:
			return 172;
		case -269291543:
			return 68;
		case -254950601:
			return 152;
		case -242870769:
			return 163;
		case -206787059:
			return 35;
		case -164741307:
			return 105;
		case -158245263:
			return 41;
		case -147416760:
			return 155;
		case -124368414:
			return 197;
		case -106398498:
			return 153;
		case -97000889:
			return 86;
		case -91604267:
			return 169;
		case -1:
			return 0;
		case 25589062:
			return 56;
		case 39330853:
			return 125;
		case 78014060:
			return 9;
		case 81243326:
			return 69;
		case 141777963:
			return 15;
		case 183131704:
			return 177;
		case 200623432:
			return 64;
		case 221495846:
			return 175;
		case 224471061:
			return 98;
		case 233412256:
			return 77;
		case 275909046:
			return 151;
		case 279713143:
			return 171;
		case 285724035:
			return 54;
		case 302482713:
			return 136;
		case 347710188:
			return 89;
		case 350341162:
			return 127;
		case 447464746:
			return 129;
		case 558636891:
			return 187;
		case 570385280:
			return 196;
		case 593083875:
			return 80;
		case 634217179:
			return 150;
		case 639606025:
			return 70;
		case 654960265:
			return 95;
		case 668064801:
			return 195;
		case 671416267:
			return 107;
		case 673708797:
			return 139;
		case 694721787:
			return 20;
		case 702532569:
			return 82;
		case 720207812:
			return 178;
		case 724367341:
			return 65;
		case 726043209:
			return 58;
		case 728769635:
			return 83;
		case 756791452:
			return 149;
		case 763061271:
			return 18;
		case 775646007:
			return 102;
		case 783509408:
			return 170;
		case 794883372:
			return 186;
		case 805902559:
			return 84;
		case 817456409:
			return 100;
		case 835146902:
			return 192;
		case 841152146:
			return 93;
		case 886162534:
			return 131;
		case 937140932:
			return 183;
		case 997052462:
			return 157;
		case 1034295275:
			return 17;
		case 1040501041:
			return 122;
		case 1093424641:
			return 115;
		case 1139016431:
			return 34;
		case 1144080006:
			return 32;
		case 1171151366:
			return 43;
		case 1175961229:
			return 138;
		case 1193587137:
			return 176;
		case 1201719505:
			return 42;
		case 1203687692:
			return 10;
		case 1208331227:
			return 12;
		case 1211076549:
			return 73;
		case 1256374770:
			return 165;
		case 1265311313:
			return 36;
		case 1268462011:
			return 37;
		case 1294394742:
			return 190;
		case 1295163466:
			return 114;
		case 1300622865:
			return 99;
		case 1305406380:
			return 162;
		case 1312155508:
			return 144;
		case 1324420970:
			return 25;
		case 1328995848:
			return 88;
		case 1336349861:
			return 143;
		case 1336429519:
			return 140;
		case 1390582854:
			return 94;
		case 1413720692:
			return 168;
		case 1433853218:
			return 85;
		case 1452940977:
			return 87;
		case 1462245043:
			return 154;
		case 1480202237:
			return 189;
		case 1482822775:
			return 146;
		case 1514854451:
			return 191;
		case 1522457772:
			return 147;
		case 1523275824:
			return 62;
		case 1524301922:
			return 78;
		case 1557116130:
			return 126;
		case 1557362410:
			return 116;
		case 1578015076:
			return 72;
		case 1578708778:
			return 67;
		case 1596748830:
			return 101;
		case 1608803012:
			return 128;
		case 1644017723:
			return 158;
		case 1687654048:
			return 71;
		case 1704907062:
			return 179;
		case 1726722300:
			return 135;
		case 1744707601:
			return 3;
		case 1746613639:
			return 121;
		case 1767173923:
			return 141;
		case 1798083308:
			return 24;
		case 1813411238:
			return 167;
		case 1835150954:
			return 40;
		case 1903955831:
			return 7;
		case 1913593527:
			return 53;
		case 1930815945:
			return 118;
		case 1938151130:
			return 44;
		case 1976949991:
			return 161;
		case 2028487040:
			return 52;
		case 2051020894:
			return 174;
		case 2081856931:
			return 120;
		case 2113464199:
			return 159;
		case 2126590447:
			return 14;
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

void func_999(int iParam0, int iParam1)
{
	Global_1146212->f_35859.f_3116[iParam0]->f_29 = (Global_1146212->f_35859.f_3116[iParam0]->f_29 + iParam1);
}

void func_1000(int iParam0, int iParam1)
{
	Global_1146212->f_35859.f_3116[iParam0]->f_29 = iParam1;
}

void func_1001(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0]->f_1 = 0;
		iVar0++;
	}
}

bool func_1002(int iParam0)
{
	fVar0 = (func_1018(iParam0) - _0xdf66a37936d5f3d9(iParam0));
	return fVar0 <= 1f;
}

void func_1003(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_991(2);
	}
	if (iParam1 > 0)
	{
		iParam1 = (iParam1 + get_game_timer());
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200->f_1431.f_16[iParam0] = iParam1;
			break;
		case 1:
			Global_1956200->f_1565.f_2.f_16[iParam0] = iParam1;
			break;
		default:
			break;
	}
}

void func_1004(int iParam0, int iParam1, float fParam2)
{
	sVar0 = func_1019(iParam1);
	if (!is_string_null_or_empty(sVar0))
	{
		_0x437c08db4febe2bd(iParam0, func_1020(iParam1), fParam2, -1);
	}
}

void func_1005(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (iParam3 == 2)
	{
		iParam3 = func_991(2);
	}
	uVar0 = Global_1296859->f_21;
	func_1021(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_1022(iParam0, uVar0, iParam3);
	}
}

bool func_1006(int iParam0)
{
	return func_680(&(Global_1956200->f_1565), iParam0, 1);
}

int func_1007(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_1008(int iParam0)
{
	if (func_1023(iParam0))
	{
		return (func_1024(iParam0) % 32);
	}
	return &Global_1296859;
}

bool func_1009(int iParam0)
{
	iVar0 = func_998(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 199)
	{
		return false;
	}
	return true;
}

int func_1010(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_983(iParam1, 1);
	iVar1 = func_998(iParam0, 1);
	iVar2 = func_994(&(Global_1146212->f_35859.f_919[iVar0]), 1);
	if (Global_1146212->f_35859[iVar2][iParam2] != iParam0)
	{
		return 0;
	}
	if (!&Global_1146212->f_35859.f_919[iVar0]->f_1[iParam2])
	{
		return 1;
	}
	Global_1146212->f_35859.f_919[iVar0]->f_1[iParam2] = 0;
	iVar4 = 0;
	while (iVar4 < Global_1146212->f_35859.f_3116[iVar1]->f_16)
	{
		iVar3 = &Global_1146212->f_35859.f_3116[iVar1]->f_6[iVar4];
		iVar5 = func_1025(iVar3, 1);
		if (!func_1026(iVar3))
		{
		}
		else
		{
			Global_1146212->f_2169[iVar5]->f_1[iVar1] = (&Global_1146212->f_2169[iVar5]->f_1[iVar1] - 1);
			Global_1146212->f_2169[iVar5]->f_201 = (Global_1146212->f_2169[iVar5]->f_201 - func_1027(Global_1146212->f_35859.f_3116[iVar1]->f_6[iVar4]));
			func_1028(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1146212->f_35859.f_3116[iVar1]->f_28)
	{
		iVar6 = &Global_1146212->f_35859.f_3116[iVar1]->f_17[iVar7];
		if (!func_1029(iVar6))
		{
		}
		else
		{
			iVar8 = func_1030(iVar6, 1);
			(*Global_1146212->f_21645[iVar8])[iVar1] = (Global_1146212->f_21645[iVar8][iVar1] - 1);
			if (Global_1146212->f_21645[iVar8][iVar1] <= 0)
			{
				_0xb909149f2bb5f6da(&(Global_1146212->f_21645[iVar8]->f_200), iVar1);
			}
			if (!_0x80e9c316ef84dd81(&(Global_1146212->f_21645[iVar8]->f_200)))
			{
				Global_1146212->f_21645[iVar8]->f_208 = 0;
				func_1031(iVar6);
			}
		}
		iVar7++;
	}
	return 1;
}

bool func_1011(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	return Param0.f_4 != 0;
}

bool func_1012(int iParam0, int iParam1)
{
	if (!func_1009(iParam0))
	{
		return false;
	}
	if (!func_1032(iParam1))
	{
		return false;
	}
	iVar0 = func_1033(iParam1, 1);
	return &Global_1146212->f_35859.f_9286[iVar0] == iParam0;
}

Vector3 func_1013(int iParam0)
{
	iVar0 = func_1034(iParam0);
	if (iVar0 == -1)
	{
		vVar1 = -1;
		vVar1.f_2 = -1;
		return vVar1;
	}
	return *Global_1146212->f_35859.f_9503[iVar0];
}

bool func_1014(vector3 vParam0)
{
	if (!func_1009(vParam0.x))
	{
		return false;
	}
	if (!func_992(vParam0.y))
	{
		return false;
	}
	if (!func_1035(vParam0.z))
	{
		return false;
	}
	return true;
}

bool func_1015(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_983(iParam1, 1);
	iVar1 = func_998(iParam0, 1);
	iVar2 = func_994(&(Global_1146212->f_35859.f_919[iVar0]), 1);
	if (Global_1146212->f_35859[iVar2][iParam2] != iParam0)
	{
		return false;
	}
	Global_1146212->f_35859.f_919[iVar0]->f_1[iParam2]->f_1 = Global_1296859->f_21;
	if (&Global_1146212->f_35859.f_919[iVar0]->f_1[iParam2])
	{
		return true;
	}
	Global_1146212->f_35859.f_919[iVar0]->f_1[iParam2] = 1;
	iVar4 = 0;
	while (iVar4 < Global_1146212->f_35859.f_3116[iVar1]->f_16)
	{
		iVar3 = &Global_1146212->f_35859.f_3116[iVar1]->f_6[iVar4];
		iVar5 = func_1025(iVar3, 1);
		if (!func_1026(iVar3))
		{
		}
		else
		{
			Global_1146212->f_2169[iVar5]->f_1[iVar1] = &Global_1146212->f_2169[iVar5]->f_1[iVar1] + 1;
			Global_1146212->f_2169[iVar5]->f_201 = (Global_1146212->f_2169[iVar5]->f_201 + func_1027(Global_1146212->f_35859.f_3116[iVar1]->f_6[iVar4]));
			func_1036(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1146212->f_35859.f_3116[iVar1]->f_28)
	{
		iVar6 = &Global_1146212->f_35859.f_3116[iVar1]->f_17[iVar7];
		if (!func_1029(iVar6))
		{
		}
		else if (!func_1037(Global_1146212->f_35859.f_3116[iVar1]->f_17[iVar7]))
		{
		}
		else
		{
			iVar8 = func_1030(iVar6, 1);
			(*Global_1146212->f_21645[iVar8])[iVar1] = Global_1146212->f_21645[iVar8][iVar1] + 1;
			_0xe84aac1b22a73e99(&(Global_1146212->f_21645[iVar8]->f_200), iVar1);
			if (!Global_1146212->f_21645[iVar8]->f_208)
			{
				Global_1146212->f_21645[iVar8]->f_208 = 1;
				func_1038(iVar6);
			}
		}
		iVar7++;
	}
	func_1039(Global_1146212->f_35859.f_3116[iVar1]->f_2);
	return true;
}

void func_1016(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!func_1032(iParam0))
	{
		return;
	}
	iVar0 = func_1033(iParam0, 1);
	if (!func_1009(iParam1))
	{
		return;
	}
	if (!func_992(iParam2))
	{
		return;
	}
	if (!func_1035(iParam3))
	{
		return;
	}
	Global_1146212->f_35859.f_9286[iVar0] = iParam1;
	Global_1146212->f_35859.f_9286[iVar0]->f_1 = iParam2;
	Global_1146212->f_35859.f_9286[iVar0]->f_2 = iParam3;
}

void func_1017(int iParam0)
{
	if (!func_1032(iParam0))
	{
		return;
	}
	iVar0 = func_1033(iParam0, 1);
	Global_1146212->f_35859.f_9286[iVar0] = -1;
	Global_1146212->f_35859.f_9286[iVar0]->f_1 = 0;
	Global_1146212->f_35859.f_9286[iVar0]->f_2 = -1;
}

float func_1018(int iParam0)
{
	return (_0x592f58bc4d2a2cf3(iParam0, 0) - IntToFloat(func_1040(2)));
}

char* func_1019(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HealthCoreValue";
		case 1:
			return "StaminaCoreValue";
		case 2:
			return "DeadEyeCoreValue";
		default:
			break;
	}
	return "";
}

char* func_1020(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "isLowHealthCoreActive";
		case 1:
			return "isLowStaminaCoreActive";
		case 2:
			return "isLowDeadEyeCoreActive";
		default:
			break;
	}
	return "";
}

void func_1021(int iParam0, float fParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_991(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200->f_1431.f_6[iParam0] = fParam1;
			break;
		case 1:
			Global_1956200->f_1565.f_2.f_6[iParam0] = fParam1;
			break;
		default:
			break;
	}
}

void func_1022(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_991(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200->f_1431.f_16[iParam0]->f_2 = uParam1;
			break;
		case 1:
			Global_1956200->f_1565.f_2.f_16[iParam0]->f_2 = uParam1;
			break;
		default:
			break;
	}
}

bool func_1023(int iParam0)
{
	iVar0 = func_983(iParam0, 1);
	if (iVar0 >= 2 && iVar0 <= 129)
	{
		return true;
	}
	return false;
}

int func_1024(int iParam0)
{
	iVar0 = func_983(iParam0, 1);
	if (func_1023(iParam0))
	{
		return (iVar0 - 2);
	}
	else if (func_1041(iParam0))
	{
		return (iVar0 - 130);
	}
	else if (func_1042(iParam0))
	{
		return (iVar0 - 166);
	}
	else if (func_1043(iParam0))
	{
		return (iVar0 - 167);
	}
	else if (func_1044(iParam0))
	{
		return (iVar0 - 172);
	}
	else if (func_1045(iParam0))
	{
		return (iVar0 - 180);
	}
	else if (func_1046(iParam0))
	{
		return (iVar0 - 150);
	}
	return -1;
}

int func_1025(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2123992989:
			return 59;
		case -1988557796:
			return 49;
		case -1936069272:
			return 47;
		case -1926692092:
			return 42;
		case -1846416021:
			return 58;
		case -1721745367:
			return 2;
		case -1701192079:
			return 41;
		case -1659620438:
			return 50;
		case -1607530002:
			return 64;
		case -1589052195:
			return 37;
		case -1575020444:
			return 94;
		case -1572802418:
			return 71;
		case -1514969696:
			return 78;
		case -1397050499:
			return 53;
		case -1349331938:
			return 43;
		case -1345921497:
			return 29;
		case -1309904053:
			return 22;
		case -1290490489:
			return 7;
		case -1202225775:
			return 56;
		case -1080116020:
			return 23;
		case -1079033682:
			return 46;
		case -1059185085:
			return 25;
		case -1003690472:
			return 51;
		case -851757466:
			return 67;
		case -744806636:
			return 52;
		case -516489227:
			return 11;
		case -514416345:
			return 66;
		case -484540420:
			return 36;
		case -483049716:
			return 75;
		case -400566333:
			return 14;
		case -391623459:
			return 73;
		case -377364039:
			return 60;
		case -374018223:
			return 62;
		case -349428415:
			return 39;
		case -231535884:
			return 15;
		case -201802680:
			return 1;
		case -85606741:
			return 65;
		case -77989269:
			return 83;
		case -1:
			return 0;
		case 66478954:
			return 93;
		case 91687087:
			return 79;
		case 146438590:
			return 90;
		case 194431787:
			return 61;
		case 198507096:
			return 72;
		case 222365748:
			return 85;
		case 295732030:
			return 40;
		case 340029732:
			return 70;
		case 374652900:
			return 89;
		case 410940916:
			return 92;
		case 447408404:
			return 81;
		case 515706097:
			return 5;
		case 527883710:
			return 44;
		case 549685826:
			return 63;
		case 641300611:
			return 88;
		case 696211072:
			return 30;
		case 778435476:
			return 19;
		case 808428606:
			return 4;
		case 854463919:
			return 86;
		case 857703729:
			return 48;
		case 874892169:
			return 95;
		case 886907851:
			return 16;
		case 920214733:
			return 91;
		case 995847993:
			return 68;
		case 1061744811:
			return 6;
		case 1149992366:
			return 27;
		case 1221256507:
			return 8;
		case 1247001946:
			return 76;
		case 1275912274:
			return 45;
		case 1333289277:
			return 20;
		case 1341193408:
			return 10;
		case 1356998909:
			return 80;
		case 1447875596:
			return 82;
		case 1495919075:
			return 74;
		case 1509485650:
			return 17;
		case 1546732394:
			return 34;
		case 1572090083:
			return 55;
		case 1608132015:
			return 38;
		case 1664203120:
			return 32;
		case 1679987408:
			return 54;
		case 1727267699:
			return 69;
		case 1728485678:
			return 28;
		case 1742416595:
			return 3;
		case 1766148221:
			return 77;
		case 1768495249:
			return 21;
		case 1900095956:
			return 18;
		case 1946296046:
			return 12;
		case 1968069853:
			return 24;
		case 1997267529:
			return 31;
		case 2000631014:
			return 84;
		case 2019620375:
			return 57;
		case 2037894795:
			return 9;
		case 2048982041:
			return 33;
		case 2063781084:
			return 13;
		case 2082272090:
			return 35;
		case 2089824257:
			return 26;
		case 2128780735:
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

bool func_1026(int iParam0)
{
	iVar0 = func_1025(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 95)
	{
		return false;
	}
	return true;
}

float func_1027(var uParam0)
{
	if (uParam0->f_2 != 0)
	{
		fVar0 = func_1047(794259616, uParam0->f_2, uParam0->f_1, "");
		return fVar0;
	}
	return uParam0->f_1;
}

void func_1028(int iParam0)
{
	if (!func_1026(iParam0))
	{
		return;
	}
	iVar0 = func_1025(iParam0, 1);
	if (!func_1048(&(Global_1146212->f_2169[iVar0])))
	{
		return;
	}
	(*(*Global_1146212)[&Global_1146212->f_2169[iVar0]])[iVar0] = ((*Global_1146212)[&Global_1146212->f_2169[iVar0]][iVar0] - 1);
	if ((*Global_1146212)[&Global_1146212->f_2169[iVar0]][iVar0] > 0)
	{
		return;
	}
	(*(*Global_1146212)[&Global_1146212->f_2169[iVar0]])[iVar0] = 0;
	Global_1146212->f_2169[iVar0]->f_204 = 0;
	if (!func_1049(Global_1146212->f_2169[iVar0]->f_203))
	{
		return;
	}
	iVar1 = func_1050(Global_1146212->f_2169[iVar0]->f_203, 1);
	(*Global_1146212)[&Global_1146212->f_2169[iVar0]]->f_96[iVar1] = (&(*Global_1146212)[&Global_1146212->f_2169[iVar0]]->f_96[iVar1] - 1);
	if (&(*Global_1146212)[&Global_1146212->f_2169[iVar0]]->f_96[iVar1] > 0)
	{
		return;
	}
	iVar2 = 0;
	while (iVar2 < Global_1146212->f_47561[iVar1]->f_23)
	{
		if (Global_1146212->f_47561[iVar1][iVar2] != &Global_1146212->f_2169[iVar0])
		{
		}
		else
		{
			(*Global_1146212->f_47561[iVar1])[iVar2] = -1;
			Global_1146212->f_47561[iVar1]->f_23 = (Global_1146212->f_47561[iVar1]->f_23 - 1);
			(*Global_1146212->f_47561[iVar1])[iVar2] = Global_1146212->f_47561[iVar1][Global_1146212->f_47561[iVar1]->f_23];
			(*Global_1146212->f_47561[iVar1])[Global_1146212->f_47561[iVar1]->f_23] = -1;
		}
		else
		{
			iVar2++;
		}
	}
}

bool func_1029(int iParam0)
{
	iVar0 = func_1030(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 68)
	{
		return false;
	}
	return true;
}

int func_1030(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2116044775:
			return 52;
		case -2103256604:
			return 12;
		case -2073453362:
			return 11;
		case -2041025962:
			return 64;
		case -1930487908:
			return 2;
		case -1913155192:
			return 41;
		case -1771755729:
			return 28;
		case -1751121159:
			return 53;
		case -1730553768:
			return 3;
		case -1655894020:
			return 25;
		case -1651690657:
			return 65;
		case -1604680733:
			return 10;
		case -1583192324:
			return 66;
		case -1511575465:
			return 34;
		case -1486292178:
			return 67;
		case -1328991329:
			return 5;
		case -1136429013:
			return 45;
		case -1115905480:
			return 31;
		case -1026481003:
			return 6;
		case -966751997:
			return 13;
		case -824728332:
			return 33;
		case -718742742:
			return 59;
		case -698163919:
			return 32;
		case -662966589:
			return 1;
		case -549693655:
			return 14;
		case -488644714:
			return 4;
		case -430422799:
			return 36;
		case -350459285:
			return 68;
		case -268774736:
			return 40;
		case -220644763:
			return 26;
		case -199042163:
			return 60;
		case -191252842:
			return 22;
		case -166765081:
			return 55;
		case -106166013:
			return 19;
		case -1:
			return 0;
		case 50982971:
			return 17;
		case 125946764:
			return 20;
		case 367160929:
			return 61;
		case 482459685:
			return 24;
		case 492808644:
			return 18;
		case 539654946:
			return 23;
		case 656937467:
			return 39;
		case 692490127:
			return 15;
		case 718630298:
			return 56;
		case 785261183:
			return 48;
		case 793826854:
			return 21;
		case 892655276:
			return 46;
		case 907911269:
			return 27;
		case 955977457:
			return 43;
		case 966561884:
			return 7;
		case 988751276:
			return 30;
		case 1037859088:
			return 51;
		case 1066450193:
			return 54;
		case 1159158432:
			return 62;
		case 1204983685:
			return 37;
		case 1242495215:
			return 9;
		case 1254069395:
			return 63;
		case 1341326366:
			return 58;
		case 1348456703:
			return 35;
		case 1398483650:
			return 50;
		case 1442295985:
			return 38;
		case 1527078018:
			return 42;
		case 1565429580:
			return 57;
		case 1696309427:
			return 44;
		case 1870637439:
			return 16;
		case 1898374676:
			return 49;
		case 2067881273:
			return 8;
		case 2093700568:
			return 47;
		case 2113555978:
			return 29;
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

void func_1031(int iParam0)
{
	iVar0 = player_ped_id();
	iVar1 = player_id();
	switch (iParam0)
	{
		case -1730553768:
		case -488644714:
			func_1051();
			break;
		case -2103256604:
			func_1052();
			break;
		case 692490127:
			_remove_ped_wound_effect(iVar0, 0f);
			break;
		case 50982971:
			_0xa5950e16b8f31052(iVar0, 0, 0);
			_0xc5cb91d65852ed7e(func_1053(iParam0));
			break;
		case 1870637439:
			_0xc5cb91d65852ed7e(func_1053(iParam0));
			break;
		case 492808644:
			_0xc5cb91d65852ed7e(func_1053(iParam0));
			break;
		case 125946764:
			_0x3fc4c027fd0936f4(5);
			func_228(105, 1);
			break;
		case -106166013:
			_0xc5cb91d65852ed7e(func_1053(iParam0));
			break;
		case 1204983685:
			disable_attribute_overpower(iVar0, 0);
			disable_attribute_overpower(iVar0, 19);
			disable_attribute_overpower(iVar0, 1);
			disable_attribute_overpower(iVar0, 18);
			break;
		case 1442295985:
			_0x442b4347b6ec36e8(iVar0, 0, true);
			break;
		case 656937467:
			_0x3fc4c027fd0936f4(15);
			break;
		case -430422799:
			disable_attribute_overpower(iVar0, 0);
			disable_attribute_overpower(iVar0, 19);
			break;
		case 539654946:
			_0x5f8e0303c229c84b(iVar1, "");
			break;
		case -1655894020:
		case 482459685:
		case 907911269:
			func_1055(func_1054(iParam0));
			break;
		case -1771755729:
		case -220644763:
			_0x768e81ae285a4b67(iVar1, 0);
			_0xe910932f4b30be23(iVar1);
			_0x0e9057a9da78d0f8(iVar1, 8);
			_0x263d69767f76059c(iVar1, 0);
			break;
		case 2113555978:
			_0xaf4d239b8903fcbe();
			_0x768e81ae285a4b67(iVar1, 0);
			_0xe910932f4b30be23(iVar1);
			_0x0e9057a9da78d0f8(iVar1, 8);
			_0x263d69767f76059c(iVar1, 0);
			break;
		case 785261183:
			_0xce285a4413b00b7f(iVar1, 1);
			break;
		case 1898374676:
			_0x39363dfd04e91496(iVar1, 0);
			break;
		case 1398483650:
			_0xdfc85c5199045026(iVar1, 1f);
			_0x6fa957d1b55941c1(iVar1, -1f);
			break;
		case 793826854:
			func_1056();
			break;
		case -166765081:
		case 718630298:
		case 1341326366:
		case 1565429580:
			func_1048(17);
			break;
		case -824728332:
			func_1048(16);
			break;
	}
}

bool func_1032(int iParam0)
{
	iVar0 = func_1033(iParam0, 1);
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_1033(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1290685708:
			return 1;
		case -1038992817:
			return 5;
		case -950874556:
			return 4;
		case -290151400:
			return 3;
		case 0:
			return 0;
		case 1938826026:
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

int func_1034(int iParam0)
{
	iVar0 = func_1057(iParam0);
	Var1.f_3 = 1065353216;
	Var1.f_5 = -1;
	Var1.f_6 = 3;
	Var1.f_6.f_1 = -1;
	Var1.f_6.f_1.f_3 = -1;
	Var1.f_6.f_1.f_3.f_3 = -1;
	Var1.f_17 = 5;
	Var32.f_3 = 1065353216;
	Var32.f_5 = -1;
	Var32.f_6 = 3;
	Var32.f_6.f_1 = -1;
	Var32.f_6.f_1.f_3 = -1;
	Var32.f_6.f_1.f_3.f_3 = -1;
	Var32.f_17 = 5;
	iVar63 = -1;
	iVar65 = 0;
	while (iVar65 < Global_1146212->f_35859.f_11700)
	{
		iVar64 = func_998(&(Global_1146212->f_35859.f_9503[iVar65]), 1);
		if (Global_1146212->f_35859.f_3116[iVar64]->f_4 != iParam0)
		{
		}
		else if (&Global_1146212->f_35859.f_9503[iVar65] == iVar0)
		{
		}
		else if (!func_1058(&(Global_1146212->f_35859.f_9503[iVar65]), Global_1146212->f_35859.f_9503[iVar65]->f_1))
		{
		}
		else
		{
			Var1 = { func_1059(&(Global_1146212->f_35859.f_9503[iVar65])) };
			if (Var1.f_5 > Var32.f_5)
			{
				Var32 = { Var1 };
				iVar63 = iVar65;
			}
		}
		iVar65++;
	}
	return iVar63;
}

bool func_1035(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 4)
	{
		return false;
	}
	return true;
}

void func_1036(int iParam0)
{
	if (!func_1026(iParam0))
	{
		return;
	}
	iVar0 = func_1025(iParam0, 1);
	if (!func_1048(&(Global_1146212->f_2169[iVar0])))
	{
		return;
	}
	(*(*Global_1146212)[&Global_1146212->f_2169[iVar0]])[iVar0] = (*Global_1146212)[&Global_1146212->f_2169[iVar0]][iVar0] + 1;
	Global_1146212->f_2169[iVar0]->f_204 = 1;
	if (!func_1049(Global_1146212->f_2169[iVar0]->f_203))
	{
		return;
	}
	iVar1 = func_1050(Global_1146212->f_2169[iVar0]->f_203, 1);
	(*Global_1146212)[&Global_1146212->f_2169[iVar0]]->f_96[iVar1] = &(*Global_1146212)[&Global_1146212->f_2169[iVar0]]->f_96[iVar1] + 1;
	iVar2 = 0;
	while (iVar2 < Global_1146212->f_47561[iVar1]->f_23)
	{
		if (Global_1146212->f_47561[iVar1][iVar2] == &Global_1146212->f_2169[iVar0])
		{
			return;
		}
		iVar2++;
	}
	(*Global_1146212->f_47561[iVar1])[Global_1146212->f_47561[iVar1]->f_23] = &Global_1146212->f_2169[iVar0];
	Global_1146212->f_47561[iVar1]->f_23++;
}

bool func_1037(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		bVar0 = func_1060(794259616, uParam0->f_1, 1, "");
		return bVar0;
	}
	return true;
}

void func_1038(int iParam0)
{
	iVar0 = player_ped_id();
	iVar1 = player_id();
	switch (iParam0)
	{
		case -1730553768:
		case -488644714:
			func_1051();
			break;
		case -2103256604:
			func_1052();
			break;
		case 692490127:
			_set_ped_wound_effect(iVar0, 2, 2.019411E-41f, 0f, 0f, 0f, 0f, 0f, -1f, 1f);
			break;
		case 50982971:
			_0xa5950e16b8f31052(iVar0, 1, 0);
			animpostfx_play(func_1053(iParam0));
			break;
		case 1870637439:
			animpostfx_play(func_1053(iParam0));
			break;
		case 492808644:
			animpostfx_play(func_1053(iParam0));
			break;
		case 125946764:
			_0xfb6e111908502871(5);
			func_228(104, 1);
			break;
		case -106166013:
			animpostfx_play(func_1053(iParam0));
			break;
		case 1204983685:
			break;
		case 656937467:
			_0xfb6e111908502871(15);
			break;
		case 539654946:
			_0x5f8e0303c229c84b(iVar1, "focusfire");
			break;
		case 482459685:
			iVar2 = func_1054(iParam0);
			iVar3 = get_entity_bone_index_by_name(iVar0, func_1061(iParam0, 0));
			func_1062(iVar2, 0, 1, iVar3, 0);
			iVar3 = get_entity_bone_index_by_name(iVar0, func_1061(iParam0, 1));
			func_1062(iVar2, 1, 1, iVar3, 0);
			iVar3 = get_entity_bone_index_by_name(iVar0, func_1061(iParam0, 2));
			func_1062(iVar2, 2, 1, iVar3, 0);
			iVar3 = get_entity_bone_index_by_name(iVar0, func_1061(iParam0, 3));
			func_1062(iVar2, 2, 1, iVar3, 0);
			break;
		case -1655894020:
			iVar2 = func_1054(iParam0);
			func_1062(iVar2, 3, 1, -1, 1);
			break;
		case 907911269:
			iVar2 = func_1054(iParam0);
			func_1062(iVar2, 4, 1, -1, 0);
			break;
		case -220644763:
			_0x768e81ae285a4b67(iVar1, 1014693585);
			_0x2b12b6fc8b8772ab(iVar1, 8);
			_0x131e294ef60160df(iVar1, 0f, 0f, 0f, 1f, 8);
			_0x263d69767f76059c(iVar1, 1);
			break;
		case -1771755729:
			_0x768e81ae285a4b67(iVar1, 1936842089);
			_0x2b12b6fc8b8772ab(iVar1, 8);
			_0x131e294ef60160df(iVar1, 0f, 0f, 0f, 1f, 8);
			_0x263d69767f76059c(iVar1, 1);
			break;
		case 2113555978:
			_0x249cd6b7285536f2(0f, 2f, 2f);
			_0x768e81ae285a4b67(iVar1, 1979474018);
			_0x2b12b6fc8b8772ab(iVar1, 25);
			_0x263d69767f76059c(iVar1, 2);
			break;
		case 785261183:
			_0xce285a4413b00b7f(iVar1, 0);
			break;
		case 1898374676:
			_0x39363dfd04e91496(iVar1, 1);
			break;
		case 1398483650:
			_0xdfc85c5199045026(iVar1, 0.5f);
			_0x6fa957d1b55941c1(iVar1, 2f);
			break;
		case 793826854:
			func_1063();
			break;
		case -166765081:
		case 718630298:
		case 1341326366:
		case 1565429580:
			func_1048(17);
			break;
		case -824728332:
			func_1048(16);
			break;
	}
}

void func_1039(int iParam0)
{
	if (iParam0 == 0)
	{
		return;
	}
	sVar0 = func_1064(iParam0);
	if (is_string_null_or_empty(sVar0))
	{
		return;
	}
	sVar1 = func_1065(iParam0);
	if (is_string_null_or_empty(sVar1))
	{
		return;
	}
	_play_sound_from_entity(sVar0, Global_1296859->f_8, sVar1, false, 0, 0);
}

int func_1040(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_981(2) * 2;
		case 1:
			return func_985(2) * 2;
		case 2:
			return func_987(2) * 2;
		default:
			break;
	}
	return -1;
}

bool func_1041(int iParam0)
{
	iVar0 = func_983(iParam0, 1);
	if (iVar0 >= 130 && iVar0 <= 149)
	{
		return true;
	}
	return false;
}

bool func_1042(int iParam0)
{
	iVar0 = func_983(iParam0, 1);
	if (iVar0 >= 166 && iVar0 <= 166)
	{
		return true;
	}
	return false;
}

bool func_1043(int iParam0)
{
	iVar0 = func_983(iParam0, 1);
	if (iVar0 >= 167 && iVar0 <= 171)
	{
		return true;
	}
	return false;
}

bool func_1044(int iParam0)
{
	iVar0 = func_983(iParam0, 1);
	if (iVar0 >= 172 && iVar0 <= 179)
	{
		return true;
	}
	return false;
}

bool func_1045(int iParam0)
{
	iVar0 = func_983(iParam0, 1);
	if (iVar0 >= 180 && iVar0 <= 182)
	{
		return true;
	}
	return false;
}

bool func_1046(int iParam0)
{
	iVar0 = func_983(iParam0, 1);
	if (iVar0 >= 150 && iVar0 <= 165)
	{
		return true;
	}
	return false;
}

float func_1047(int iParam0, int iParam1, float fParam2, char* sParam3)
{
	if (func_1066(iParam0, iParam1, &Var0))
	{
		fVar22 = _network_try_access_tunable_float(iParam0, iParam1, Var0.f_10.f_1);
	}
	else
	{
		fVar22 = _network_try_access_tunable_float(iParam0, iParam1, fParam2);
	}
	return fVar22;
}

bool func_1048(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 21)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	if (_0x8f4f050054005c27(&(Global_1146212->f_2166), iParam0))
	{
		return true;
	}
	if (Global_1146212->f_2165 >= 21)
	{
		return false;
	}
	Global_1146212->f_2143[Global_1146212->f_2165] = iParam0;
	Global_1146212->f_2165++;
	return true;
}

bool func_1049(int iParam0)
{
	iVar0 = func_1050(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_1050(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1745889187:
			return 3;
		case -1016837116:
			return 5;
		case 0:
			return 0;
		case 370243254:
			return 4;
		case 1213888609:
			return 2;
		case 1416591065:
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

void func_1051()
{
	if (Global_1146212->f_21645[3]->f_208)
	{
		bVar0 = true;
	}
	set_ped_config_flag(Global_1296859->f_8, 550, bVar0);
	if (Global_1146212->f_21645[4]->f_208)
	{
		if (!func_916((*Global_1298536)[&Global_1296859]->f_86, 1))
		{
			bVar1 = true;
		}
	}
	set_ped_config_flag(Global_1296859->f_8, 556, bVar1);
}

void func_1052()
{
	bVar0 = false;
	if (Global_1146212->f_21645[12]->f_208)
	{
		bVar0 = true;
	}
	set_ped_config_flag(Global_1296859->f_8, 263, bVar0);
}

char* func_1053(int iParam0)
{
	switch (iParam0)
	{
		case 1870637439:
			return "MP_ArrowDrain";
		case 492808644:
			return "MP_ArrowDisorient";
		case 50982971:
			return "MP_ArrowTracking";
		case -106166013:
			return "MP_MoonshineToxic";
		default:
			break;
	}
	return "";
}

int func_1054(int iParam0)
{
	switch (iParam0)
	{
		case 482459685:
			return -843895567;
		case -1655894020:
			return -1655894020;
		case 907911269:
			return 907911269;
		default:
			break;
	}
	return 0;
}

void func_1055(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if ((*Global_1193972)[iVar0]->f_5 == iParam0)
		{
			(*Global_1193972)[iVar0]->f_7 = 1;
			(*Global_1193972)[iVar0]->f_5 = 0;
		}
		iVar0++;
	}
}

void func_1056()
{
	set_ped_config_flag(Global_1296859->f_8, 305, false);
	_0x801917e7d7bce418(Global_1296859->f_8);
}

int func_1057(int iParam0)
{
	if (!func_1032(iParam0))
	{
		return -1;
	}
	iVar0 = func_1033(iParam0, 1);
	return &(Global_1146212->f_35859.f_9286[iVar0]);
}

bool func_1058(int iParam0, int iParam1)
{
	if (!func_1009(iParam0))
	{
		return false;
	}
	iVar0 = func_998(iParam0, 1);
	iVar2 = Global_1146212->f_35859.f_3116[iVar0]->f_4;
	if (func_1011(*Global_1146212->f_35859.f_3116[iVar0]))
	{
		iVar3 = &Global_1146212->f_35859.f_9286[func_1033(iVar2, 1)];
		Var4 = { func_1059(iVar3) };
		if (iVar3 != iParam0 && Global_1146212->f_35859.f_3116[iVar0]->f_5 <= Var4.f_5)
		{
			return false;
		}
	}
	switch (&Global_1146212->f_35859.f_3116[iVar0])
	{
		case -1606735498:
		case -1455211650:
		case -1324410551:
		case -1276912520:
		case -1028878953:
		case -992973338:
		case -971275364:
		case -932644421:
		case -590004554:
		case -528257357:
		case -193993646:
		case -166662497:
		case -23641105:
		case 37083370:
		case 52193493:
		case 180258367:
		case 429965152:
		case 461381338:
		case 522523138:
		case 589907865:
		case 979390476:
		case 1028557598:
		case 1154303630:
		case 1254162401:
		case 1269394302:
		case 1305415806:
		case 1461424861:
		case 1691008805:
		case 1759133423:
		case 1810352391:
		case 1915097582:
		case 1921800945:
		case 2046842849:
		case 2116793692:
			return true;
		case 1245579893:
			if (!func_1067() && !func_1068())
			{
				return false;
			}
			return true;
		case -2010146101:
			if (!func_1067())
			{
				return false;
			}
			return true;
		case -2139108927:
			iVar1 = func_1008(iParam1);
			if (iVar1 == &Global_1296859)
			{
				return false;
			}
			return true;
		case -2129621195:
			iVar1 = func_1008(iParam1);
			if (iVar1 == &Global_1296859)
			{
				return false;
			}
			if (!_0x424b17a7dc5c90bc(&(Global_1296859->f_154[&Global_1296859])))
			{
				return false;
			}
			if (!_0x81fb74c83c2ed69f(&(Global_1296859->f_154[iVar1])))
			{
				return false;
			}
			return true;
		case 190804938:
			iVar1 = func_1008(iParam1);
			if (!_network_is_player_index_valid(&(Global_1296859->f_154[iVar1])))
			{
				return false;
			}
			if (iVar1 != &Global_1296859 && !func_1069(&(Global_1296859->f_154[iVar1])))
			{
				return false;
			}
			if (!func_1070(512, iVar1))
			{
				return false;
			}
			return true;
		case -1503245593:
			if (!&Global_1956200->f_1716[8])
			{
				return false;
			}
			iVar1 = func_1008(iParam1);
			if (!_network_is_player_index_valid(&(Global_1296859->f_154[iVar1])))
			{
				return false;
			}
			if (_0x0c31c51168e80365(Global_1296859->f_8) != get_player_ped(&(Global_1296859->f_154[iVar1])))
			{
				return false;
			}
			return true;
		default:
			break;
	}
	return false;
}

struct<31> func_1059(int iParam0)
{
	iVar0 = func_998(iParam0, 1);
	return *Global_1146212->f_35859.f_3116[iVar0];
}

bool func_1060(int iParam0, int iParam1, bool bParam2, char* sParam3)
{
	if (func_1066(iParam0, iParam1, &Var0))
	{
		bVar22 = _network_try_access_tunable_bool(iParam0, iParam1, Var0.f_10.f_2);
	}
	else
	{
		bVar22 = _network_try_access_tunable_bool(iParam0, iParam1, bParam2);
	}
	return bVar22;
}

char* func_1061(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 482459685:
			switch (iParam1)
			{
				case 0:
					return "PH_HEAD";
				case 1:
					return "CP_CHEST";
				case 2:
					return "CP_R_UpperArm";
				case 3:
					return "CP_L_UpperArm";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_1062(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!does_particle_fx_looped_exist(Global_1193972[iVar0]) && !(*Global_1193972)[iVar0]->f_6)
		{
			(*Global_1193972)[iVar0]->f_5 = iParam0;
			(*Global_1193972)[iVar0]->f_1 = iParam1;
			(*Global_1193972)[iVar0]->f_2 = iParam2;
			(*Global_1193972)[iVar0]->f_3 = iParam3;
			(*Global_1193972)[iVar0]->f_4 = iParam4;
			(*Global_1193972)[iVar0]->f_6 = 1;
			return;
		}
		iVar0++;
	}
}

void func_1063()
{
	set_ped_config_flag(Global_1296859->f_8, 305, true);
	_0x05ce6af4df071d23(Global_1296859->f_8, 0.7f);
}

char* func_1064(int iParam0)
{
	switch (iParam0)
	{
		case -1822335806:
			return "Head_Shot_Ricco";
		default:
			break;
	}
	return "";
}

char* func_1065(int iParam0)
{
	switch (iParam0)
	{
		case -1822335806:
			return "RDRO_Ability_Cards_SFX_Sounds";
		default:
			break;
	}
	return "";
}

bool func_1066(int iParam0, int iParam1, var uParam2)
{
	Var0 = -178401592;
	Var0.f_1 = iParam0;
	Var0.f_2 = -421429484;
	Var0.f_3 = 1;
	Var0.f_4 = iParam1;
	_0x91ded5dd64bb2691(&Var0);
	if (_0x44b3a36933ac009c(&iVar7, &Var0, -421429484))
	{
		*uParam2 = iParam0;
		uParam2->f_9 = iParam1;
		StringCopy(&(uParam2->f_1), "", 64);
		StringIntConCat(&(uParam2->f_1), iVar7, 64);
		_0x44b3a36933ac009c(&iVar7, &Var0, 828747869);
		uParam2->f_10.f_3 = func_1071(iVar7);
		uParam2->f_14.f_3 = uParam2->f_10.f_3;
		uParam2->f_18.f_3 = uParam2->f_10.f_3;
		switch (uParam2->f_10.f_3)
		{
			case 0:
				if (!_0x52fc26d2d2fc2987(&(uParam2->f_10), &Var0, -455129387))
				{
				}
				break;
			case 1:
				if (!_0xb2b42607f7867576(&(uParam2->f_10.f_1), &Var0, -455129387))
				{
				}
				break;
			case 2:
				if (!_0xa63cd20f19b961ab(&(uParam2->f_10.f_2), &Var0, -455129387))
				{
				}
				break;
		}
		switch (uParam2->f_14.f_3)
		{
			case 0:
				_0x52fc26d2d2fc2987(&(uParam2->f_14), &Var0, -30349581);
				break;
			case 1:
				_0xb2b42607f7867576(&(uParam2->f_14.f_1), &Var0, -30349581);
				break;
			case 2:
				_0xa63cd20f19b961ab(&(uParam2->f_14.f_2), &Var0, -30349581);
				break;
		}
		switch (uParam2->f_18.f_3)
		{
			case 0:
				_0x52fc26d2d2fc2987(&(uParam2->f_18), &Var0, 1616931012);
				break;
			case 1:
				_0xb2b42607f7867576(&(uParam2->f_18.f_1), &Var0, 1616931012);
				break;
			case 2:
				_0xa63cd20f19b961ab(&(uParam2->f_18.f_2), &Var0, 1616931012);
				break;
		}
		switch (uParam2->f_10.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		switch (uParam2->f_14.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		switch (uParam2->f_18.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		return true;
	}
	return false;
}

bool func_1067()
{
	return Global_1572887->f_6;
}

bool func_1068()
{
	if (!&Global_1048577)
	{
		return false;
	}
	if (!func_213(func_126(0)))
	{
		return false;
	}
	if (&Global_3145858 != -504335712)
	{
		return false;
	}
	if (func_952(Global_524288->f_40400))
	{
		return true;
	}
	return false;
}

bool func_1069(var uParam0)
{
	if (func_1072(uParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, uParam0) != 1)
		{
			func_1073(uParam0);
		}
		return true;
	}
	return _0xfe53b1f8d43f19bf(Global_1296859->f_10, uParam0) == 1;
}

bool func_1070(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102219->f_3 && iParam0) != 0;
	}
	return ((*Global_1100469)[iParam1]->f_3 && iParam0) != 0;
}

int func_1071(int iParam0)
{
	switch (iParam0)
	{
		case 556453026:
			iVar0 = 0;
			break;
		case -680700887:
			iVar0 = 1;
			break;
		case -945474286:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

bool func_1072(var uParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), uParam0))
	{
		return true;
	}
	return false;
}

void func_1073(var uParam0)
{
	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = uParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (!&Global_1296859->f_22[iVar0])
	{
		func_1074(uParam0);
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 1)
	{
		return;
	}
	func_1075(iVar0);
	_0x51951de06c0d1c40(uParam0, 1);
	Global_1071686->f_21416.f_1[iVar0] = 1;
}

void func_1074(var uParam0)
{
	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = uParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 0)
	{
		return;
	}
	func_1075(iVar0);
	_0x51951de06c0d1c40(uParam0, 0);
	Global_1071686->f_21416.f_1[iVar0] = 0;
}

void func_1075(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = 0;
		Global_1071686->f_21416.f_1[iParam0]->f_1 = 0;
	}
}

