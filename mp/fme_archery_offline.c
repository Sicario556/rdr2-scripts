void __EntryFunction__()
{
	fLocal_112 = 1f;
	fLocal_113 = 1f;
	func_1();
	func_2(&Local_114);
	while (!func_3(Local_114.f_4))
	{
		func_4();
		wait(0);
	}
	func_5();
	func_6();
}

void func_1()
{
	network_set_script_is_safe_for_network_game();
	set_this_script_can_be_paused(false);
	register_script_with_audio(1);
}

void func_2(var uParam0)
{
	Local_13.f_1 = { *uParam0 };
	func_7();
	Local_13.f_14 = { func_8(*uParam0, uParam0->f_2) };
	Local_13.f_22 = { func_9(*uParam0, uParam0->f_2) };
	Local_13.f_30 = get_game_timer();
	func_10(&Local_13);
}

bool func_3(struct<2> Param0)
{
	if (func_11(1, 1))
	{
		return true;
	}
	else if (func_12(Param0, 0, 128))
	{
		return true;
	}
	else if (!func_13())
	{
		return true;
	}
	else if (!func_7())
	{
		return true;
	}
	else if (func_14(Local_13, 64))
	{
		return true;
	}
	else if (Local_13.f_11 == 0)
	{
		return true;
	}
	return false;
}

void func_4()
{
	switch (Local_13.f_10)
	{
		case 0:
			func_15();
			break;
		case 1:
			func_16();
			break;
		case 2:
			func_17();
			break;
		case 3:
			func_18();
			break;
		case 4:
			func_19();
			break;
	}
}

void func_5()
{
	func_20();
	func_21(1);
	func_22(Local_13, Local_13.f_1.f_4, 0);
	func_23(Local_13.f_1.f_6, Local_13.f_1.f_3);
	func_24();
}

void func_6()
{
	terminate_this_thread();
}

bool func_7()
{
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (func_25(Global_1196898->f_78[iVar0]->f_7, Local_13.f_1.f_4))
		{
			func_26(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

struct<8> func_8(int iParam0, int iParam1)
{
	if (((func_27(&Var8, iParam0) && func_28(&Var8)) && func_29(&Var8, iParam1)) && func_30(&Var8))
	{
		func_31(Var8, 37194763, &Var0, 1);
	}
	return Var0;
}

struct<8> func_9(int iParam0, var uParam1)
{
	if (((func_27(&Var8, iParam0) && func_28(&Var8)) && func_29(&Var8, uParam1)) && func_30(&Var8))
	{
		func_31(Var8, -1771940760, &Var0, 0);
	}
	return Var0;
}

void func_10(var uParam0)
{
}

bool func_11(bool bParam0, bool bParam1)
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

bool func_12(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265377->f_124517.f_135 & 8 != 0)
	{
		Global_1071686->f_28351 = 1;
		return true;
	}
	if (func_32(*Global_1051213) && !func_25(*Global_1051213, Param0))
	{
		Global_1071686->f_28351 = 2;
		return true;
	}
	if (iParam2 != 0 && func_33(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_34(iParam3, 255))
	{
		Global_1071686->f_28351 = 4;
		return true;
	}
	if (Global_263042[&Global_1296859] > 2)
	{
		Global_1071686->f_28351 = 5;
		return true;
	}
	if (&Global_262155 >= 1)
	{
		Global_1071686->f_28351 = 6;
		return true;
	}
	if (func_35())
	{
		Global_1071686->f_28351 = 7;
		return true;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_32(*Global_1051213))
		{
			Global_1071686->f_28351 = 8;
			return true;
		}
	}
	if (Global_265377->f_124675 != 0 && _does_thread_exist(Global_265377->f_124675))
	{
		Global_1071686->f_28351 = 9;
		return true;
	}
	Global_1071686->f_28351 = 0;
	return false;
}

bool func_13()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

bool func_14(int iParam0, int iParam1)
{
	return func_36(Global_1196898->f_78[iParam0]->f_6, iParam1);
}

void func_15()
{
	bVar0 = true;
	if (func_37())
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		func_38(1);
	}
	else if (Local_13.f_30 == -1 || (get_game_timer() - Local_13.f_30) > Global_1901947->f_308.f_179)
	{
		if (Local_13.f_30 == -1)
		{
		}
		func_38(1);
	}
}

void func_16()
{
	if (func_14(Local_13, 32768))
	{
		Var0.f_44 = 4;
		Var0.f_52 = -1;
		Local_13.f_37 = { Var0 };
		StringCopy(&(Local_13.f_37.f_1), "FME_ALERT_TITLE", 16);
		StringCopy(&(Local_13.f_37.f_3), "FME_ALERT_J", 16);
		Local_13.f_37.f_43 = 2;
		Local_13.f_37.f_44[0] = -767935747;
		Local_13.f_37.f_44[1] = 359624985;
		func_39(&(Local_13.f_37), 0);
		func_38(4);
	}
	else if (func_14(Local_13, 65536))
	{
		Var61.f_44 = 4;
		Var61.f_52 = -1;
		Local_13.f_37 = { Var61 };
		StringCopy(&(Local_13.f_37.f_1), "FME_ALERT_TITLE", 16);
		StringCopy(&(Local_13.f_37.f_3), "FME_ALERT_J_PLS", 16);
		iVar122 = func_40();
		if (iVar122 > 1)
		{
			StringCopy(&(Local_13.f_37.f_3), "FME_ALERT_J_PL", 16);
		}
		Local_13.f_37.f_43 = 2;
		Local_13.f_37.f_44[0] = -767935747;
		Local_13.f_37.f_44[1] = 359624985;
		func_39(&(Local_13.f_37), 0);
		func_38(4);
	}
	else if (func_14(Local_13, 131072))
	{
		Var123.f_44 = 4;
		Var123.f_52 = -1;
		Local_13.f_37 = { Var123 };
		StringCopy(&(Local_13.f_37.f_1), "FME_ALERT_TITLE", 16);
		StringCopy(&(Local_13.f_37.f_3), "FME_ALERT_J_NM", 16);
		Local_13.f_37.f_43 = 1;
		Local_13.f_37.f_44[0] = -767935747;
		func_39(&(Local_13.f_37), 0);
		func_38(4);
	}
	else if (func_14(Local_13, 32))
	{
		func_41(2);
		func_42();
		func_38(2);
		return;
	}
	func_43();
	if (Local_13.f_11 >= 1)
	{
		func_44();
		func_45();
		func_46(&Local_13);
	}
	else
	{
		func_20();
	}
}

void func_17()
{
	if (func_14(Local_13, 2))
	{
		func_38(3);
		return;
	}
	func_47();
	if (Local_13.f_11 == 2)
	{
		if (!func_48(Local_13, 128, network_player_id_to_int()))
		{
			func_21(0);
		}
		else
		{
			func_21(1);
		}
		func_44();
		func_46(&Local_13);
	}
	else
	{
		func_21(1);
		func_20();
		func_38(5);
	}
}

void func_18()
{
	if (func_14(Local_13, 4))
	{
		func_21(1);
		func_20();
		func_38(5);
		return;
	}
	func_49();
	func_21(1);
	if (Local_13.f_11 == 2)
	{
		func_46(&Local_13);
	}
	else
	{
		func_20();
		func_38(5);
	}
}

void func_19()
{
	if (_0x07954320d77f6a3d(Local_13.f_37) >= 3)
	{
		iVar0 = func_50(&(Local_13.f_37), -1218098620, &(Local_13.f_37.f_49), 1);
		if (func_14(Local_13, 32768))
		{
			if (iVar0 == 0)
			{
				_0x00a15b94cba4f76f(Local_13.f_37);
				Local_13.f_37 = 0;
				func_51(Local_13, 32768);
				iVar1 = Local_13;
				if (iVar1 != -1)
				{
					iVar2 = Global_1196339->f_1[iVar1]->f_3;
					Var3 = { Global_1196898->f_78[iVar1]->f_7 };
					if (iVar2 != 0 && func_52(iVar1, Var3, iVar2))
					{
					}
				}
				func_38(1);
			}
			else if (iVar0 == 1)
			{
				_0x00a15b94cba4f76f(Local_13.f_37);
				Local_13.f_37 = 0;
				func_51(Local_13, 32768);
				func_38(1);
			}
		}
		else if (func_14(Local_13, 65536))
		{
			if (iVar0 == 0)
			{
				_0x00a15b94cba4f76f(Local_13.f_37);
				Local_13.f_37 = 0;
				func_51(Local_13, 65536);
				iVar5 = Local_13;
				if (iVar5 != -1)
				{
					iVar6 = Global_1196339->f_1[iVar5]->f_3;
					Var7 = { Global_1196898->f_78[iVar5]->f_7 };
					if (iVar6 != 0 && func_52(iVar5, Var7, iVar6))
					{
					}
				}
				func_38(1);
			}
			else if (iVar0 == 1)
			{
				_0x00a15b94cba4f76f(Local_13.f_37);
				Local_13.f_37 = 0;
				func_51(Local_13, 65536);
				func_38(1);
			}
		}
		else if (func_14(Local_13, 131072))
		{
			if (iVar0 == 0)
			{
				_0x00a15b94cba4f76f(Local_13.f_37);
				Local_13.f_37 = 0;
				func_51(Local_13, 131072);
				func_38(1);
			}
		}
	}
}

void func_20()
{
	func_53();
	func_42();
}

void func_21(bool bParam0)
{
	if (Local_13.f_1.f_6 == -1125105727 || Local_13.f_1.f_6 == 1232677007)
	{
		if (!bParam0)
		{
			if (!func_54(256))
			{
				if (does_entity_exist(Global_34))
				{
					if (is_ped_using_any_scenario(Global_34))
					{
						clear_ped_tasks(Global_34, 1, 0);
						_0xfdecca06e8b81346(Global_34);
					}
					else if (_is_ped_carrying(Global_34))
					{
						task_place_carried_entity_at_coord(Global_34, _get_first_entity_ped_is_carrying(Global_34), Global_35, 2f, 1);
					}
				}
				func_55(0);
				func_56(256);
			}
		}
		else if (func_54(256))
		{
			func_55(1);
			func_57(256);
		}
	}
}

int func_22(int iParam0, struct<2> Param1, bool bParam3)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (!func_32(Param1))
	{
		return 0;
	}
	if (!func_58(Param1) && !func_59(Param1))
	{
		return 0;
	}
	if (bParam3 && network_is_player_active(player_id()))
	{
		iVar0 = _0x901e0dc25080c8b9(player_id());
		if (_0x0f99f6436528a089(iVar0) && _0x149a2751ab66ac02(iVar0) > 1)
		{
			func_60(1);
		}
	}
	if (func_14(iParam0, 32))
	{
		func_61(Param1, 0, 2, 0, 0);
	}
	else
	{
		func_61(Param1, 0, -1, 0, 0);
	}
	func_62(iParam0, Param1);
	if (func_14(iParam0, 64))
	{
		return 0;
	}
	func_63(iParam0, 64);
	return 1;
}

int func_23(int iParam0, int iParam1)
{
	if (iParam0 == -785841056)
	{
		return 0;
	}
	if (!does_entity_exist(Global_34))
	{
		return 0;
	}
	decor_set_int(Global_34, "iFmeLastEventPlayed", iParam1);
	return 1;
}

void func_24()
{
}

bool func_25(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

void func_26(int iParam0)
{
	if (Local_13 != iParam0)
	{
		Local_13 = iParam0;
	}
}

bool func_27(var uParam0, int iParam1)
{
	if (!_0x7907969497ea92f5(Global_1196898->f_455))
	{
		return false;
	}
	*uParam0 = Global_1196898->f_455;
	uParam0->f_2 = -1093317127;
	uParam0->f_3 = func_64(iParam1);
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

bool func_28(var uParam0)
{
	uParam0->f_2 = -310067910;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

bool func_29(var uParam0, int iParam1)
{
	uParam0->f_2 = -1739269194;
	uParam0->f_3 = iParam1;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

bool func_30(var uParam0)
{
	uParam0->f_2 = 1701407264;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

int func_31(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (_datafile_get_string(uParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

bool func_32(struct<2> Param0)
{
	if (!func_65(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_66(Param0))
	{
		return false;
	}
	return true;
}

bool func_33(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1197740->f_1 && iParam0) != 0;
}

bool func_34(int iParam0, int iParam1)
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

bool func_35()
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
	if (!func_32(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

bool func_36(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_37()
{
	return Global_1071686->f_28662.f_22.f_3 != 0;
}

void func_38(int iParam0)
{
	Local_13.f_10 = iParam0;
}

void func_39(var uParam0, bool bParam1)
{
	*uParam0 = 0;
	func_67(&(uParam0->f_49), 0, 0);
	Var19 = &uParam0->f_44[0];
	Var19.f_3 = uParam0->f_42;
	Var0.f_3 = { Var19 };
	if (uParam0->f_43 > 1)
	{
		Var23 = &uParam0->f_44[1];
		Var23.f_3 = uParam0->f_42;
		Var0.f_7 = { Var23 };
		if (uParam0->f_43 > 2)
		{
			Var27 = &uParam0->f_44[2];
			Var27.f_3 = uParam0->f_42;
			Var0.f_11 = { Var27 };
			if (uParam0->f_43 > 3)
			{
				Var31 = &uParam0->f_44[3];
				Var31.f_3 = uParam0->f_42;
				Var0.f_15 = { Var31 };
			}
		}
	}
	Var0.f_2 = 0;
	if (uParam0->f_41)
	{
		Var0 = "DEATH_FAIL_RESPAWN_SOUNDS";
		Var0.f_1 = "TITLE_SCREEN_ENTER";
	}
	if (!is_string_null_or_empty(&(uParam0->f_5)))
	{
		cVar35 = _create_var_string(10, &(uParam0->f_3), &(uParam0->f_5));
	}
	else
	{
		cVar35 = func_68(uParam0->f_3);
	}
	if (!is_string_null_or_empty(&(uParam0->f_7)))
	{
		if (!is_string_null_or_empty(&(uParam0->f_23)))
		{
			if (uParam0->f_39)
			{
				cVar35 = _create_var_string(42, cVar35, func_69(&(uParam0->f_7), 109029619), func_69(&(uParam0->f_23), 109029619), uParam0->f_40);
			}
			else
			{
				cVar35 = _create_var_string(42, cVar35, func_69(&(uParam0->f_7), 109029619), func_69(&(uParam0->f_23), 109029619));
			}
		}
		else if (uParam0->f_39)
		{
			cVar35 = _create_var_string(10, cVar35, func_69(&(uParam0->f_7), 109029619), uParam0->f_40);
		}
		else
		{
			cVar35 = _create_var_string(10, cVar35, func_69(&(uParam0->f_7), 109029619));
		}
	}
	else if (uParam0->f_39)
	{
		cVar35 = _create_var_string(2, cVar35, uParam0->f_40);
	}
	if (bParam1)
	{
		*uParam0 = func_70(&Var0, &(uParam0->f_1), cVar35, 0, 1);
	}
	else
	{
		*uParam0 = func_71(&Var0, &(uParam0->f_1), cVar35, 0, 0, 1);
	}
}

int func_40()
{
	iVar1 = _0xd1bf325c8252a982(_0x901e0dc25080c8b9(player_id()), &Var3);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar53 = network_get_player_from_gamer_handle(Var3[iVar0]);
		if (!network_is_player_active(iVar53) || is_player_dead(iVar53))
		{
		}
		else if (func_72(1048576, iVar53))
		{
			iVar2++;
		}
		iVar0++;
	}
	return iVar2;
}

void func_41(int iParam0)
{
	if (Local_13.f_11 != iParam0)
	{
		Local_13.f_11 = iParam0;
	}
}

void func_42()
{
	if (_databinding_is_data_id_valid(Local_13.f_36))
	{
		func_73(Local_13.f_36);
	}
}

void func_43()
{
	if (!func_74(0, 30))
	{
		return;
	}
	if (func_14(Local_13, 256))
	{
		func_41(0);
		return;
	}
	if (!func_32(Local_13.f_1.f_4))
	{
		func_41(0);
		func_75(&(Local_13.f_32), 4);
	}
	else if (!func_76(Local_13.f_1.f_4))
	{
		func_41(0);
		func_75(&(Local_13.f_32), 5);
	}
	else if (!func_78(func_77(Local_13)))
	{
		func_56(2048);
		if (!network_is_player_active(player_id()))
		{
			return;
		}
		iVar0 = _0x901e0dc25080c8b9(player_id());
		if ((_0xd6f6acf4392187fb(iVar0) && _0x0f99f6436528a089(iVar0)) && _0x9be7dcb22d32ccbe(iVar0, player_id()))
		{
			func_41(1);
			func_75(&(Local_13.f_32), 0);
		}
	}
	else if (!func_79(Local_13.f_1.f_4))
	{
		func_41(0);
		func_75(&(Local_13.f_32), 6);
	}
	else if (func_80(&Local_13))
	{
		func_41(0);
		func_75(&(Local_13.f_32), 3);
	}
	else if (!func_81() == 0)
	{
		func_41(0);
		func_75(&(Local_13.f_32), 1);
	}
	else
	{
		if (!func_82(Local_13.f_1.f_3))
		{
			func_41(0);
			func_75(&(Local_13.f_32), 7);
			return;
		}
		func_57(2048);
		Var1 = { func_83() };
		if (func_32(Var1))
		{
			if (!func_25(Var1, Local_13.f_1.f_4))
			{
				func_41(1);
				if (func_84() || func_14(Local_13, 262144))
				{
					func_75(&(Local_13.f_32), 0);
				}
				else
				{
					func_75(&(Local_13.f_32), 1);
				}
			}
			else
			{
				func_41(2);
				func_75(&(Local_13.f_32), 0);
			}
		}
		else
		{
			func_41(1);
			func_75(&(Local_13.f_32), 0);
		}
	}
}

void func_44()
{
	if (!func_85() || !func_86(255))
	{
		return;
	}
	if (!func_14(Local_13, 32))
	{
		if (func_54(1) && !func_54(512))
		{
			if (func_87())
			{
				func_56(512);
			}
		}
		if (((!func_54(1024) && func_54(512)) && func_54(1)) && func_88(Local_13.f_13))
		{
			Local_13.f_13 = func_89("FME_HELP_CARGO");
			func_56(1024);
		}
		else if ((!func_54(128) && func_54(1)) && func_88(Local_13.f_13))
		{
			Local_13.f_13 = func_89("FME_HELP_RULES");
			func_56(128);
		}
	}
	else if (!func_54(4))
	{
		if (func_54(8))
		{
			if (func_90(Local_13.f_13))
			{
				func_53();
				return;
			}
			func_57(8);
		}
		else if (func_91())
		{
			func_56(4);
		}
		else if (func_88(Local_13.f_13) && network_is_player_active(player_id()))
		{
			Var0 = { Local_13.f_22 };
			if (is_string_null_or_empty(&Var0))
			{
				Var0 = { Local_13.f_14 };
			}
			if (func_54(16) && network_is_player_active(_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id()))))
			{
				iVar8 = _0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id()));
				if (Local_13.f_1 == 1)
				{
					Local_13.f_13 = func_89(_create_var_string(10, "FME_HELP_OPTED_IN_LEADER_CHALLENGES", func_92(get_player_name(iVar8), 109029619)));
				}
				else
				{
					Local_13.f_13 = func_89(_create_var_string(10, "FME_HELP_OPTED_IN_LEADER", func_92(get_player_name(iVar8), 109029619)));
				}
				func_56(4);
			}
			else
			{
				if (Local_13.f_1 == 1)
				{
					Local_13.f_13 = func_89(_create_var_string(10, "FME_HELP_OPTED_IN_CHALLENGES", &Var0));
				}
				else
				{
					Local_13.f_13 = func_89(_create_var_string(10, "FME_HELP_OPTED_IN", &Var0));
				}
				func_56(4);
			}
		}
	}
}

void func_45()
{
	if (!func_54(64) && func_93() != 2)
	{
		func_56(64);
	}
	if (!func_85())
	{
		return;
	}
	if (!func_54(32) && func_54(64))
	{
		if ((func_94() && func_25(func_95(), Local_13.f_1.f_4)) && func_52(Local_13, Local_13.f_1.f_4, Local_13.f_1.f_2))
		{
			func_56(32);
		}
		func_42();
		return;
	}
	if (!func_54(16))
	{
		iVar0 = _0x901e0dc25080c8b9(player_id());
		if (_0x0f99f6436528a089(iVar0))
		{
			iVar1 = _0x4be6c13a45cca8ec(iVar0);
			if (((((iVar1 != 255 && network_is_player_active(iVar1)) && iVar1 != player_id()) && !func_96()) && func_48(Local_13, 64, iVar1)) && func_52(Local_13, Local_13.f_1.f_4, Local_13.f_1.f_2))
			{
				if (func_97(0))
				{
					func_99(func_98(), 0);
				}
				func_56(16);
				func_42();
				return;
			}
		}
	}
	if (!func_54(1))
	{
		if ((((Local_13.f_11 >= 1 && Local_13.f_32 == 0) && !func_100()) && !func_54(2048)) && (_0x424b17a7dc5c90bc(player_id()) || !_0x0f99f6436528a089(_0x901e0dc25080c8b9(player_id()))))
		{
			Local_13.f_36 = func_101(Local_13, Local_13.f_1, Local_13.f_1.f_2, Local_13.f_1.f_4);
			if (_databinding_is_data_id_valid(Local_13.f_36))
			{
				func_102(Local_13, Local_13.f_1.f_4);
				func_56(1);
			}
		}
	}
	else if (Local_13.f_32 == 1 || (_0x0f99f6436528a089(_0x901e0dc25080c8b9(player_id())) && !_0x424b17a7dc5c90bc(player_id())))
	{
		func_42();
	}
}

int func_46(var uParam0)
{
	return 1;
}

void func_47()
{
	if (!func_74(0, 15))
	{
		return;
	}
	if (func_14(Local_13, 256))
	{
		func_41(0);
		return;
	}
	else if (func_14(Local_13, 512) && !func_94())
	{
		func_41(0);
		func_75(&(Local_13.f_32), 8);
	}
	else if (func_80(&Local_13))
	{
		func_41(0);
		func_75(&(Local_13.f_32), 3);
	}
	else
	{
		Var0 = { func_83() };
		if ((func_32(Var0) && !func_25(Var0, Local_13.f_1.f_4)) && !(func_84() || func_14(Local_13, 262144)))
		{
			func_41(0);
			func_75(&(Local_13.f_32), 1);
		}
	}
}

bool func_48(int iParam0, int iParam1, int iParam2)
{
	return func_36((*Global_1196567)[iParam2][iParam0], iParam1);
}

void func_49()
{
	if (!func_74(0, 15))
	{
		return;
	}
	if (func_14(Local_13, 256))
	{
		func_41(0);
		return;
	}
	else if (func_80(&Local_13))
	{
		func_41(0);
		func_75(&(Local_13.f_32), 3);
	}
	else
	{
		Var0 = { func_83() };
		if ((func_32(Var0) && !func_25(Var0, Local_13.f_1.f_4)) && !(func_84() || func_14(Local_13, 262144)))
		{
			func_41(0);
			func_75(&(Local_13.f_32), 1);
		}
	}
}

int func_50(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	iVar0 = -1;
	if (_event_manager_is_event_pending(iParam1))
	{
		if (_event_manager_peek_event(iParam1, &vVar1))
		{
			if (func_103(uParam2))
			{
				if (func_104(uParam2, 0, 0) > 250)
				{
					switch (vVar1.x)
					{
						case -1203660660:
							if (vVar1.y == *uParam0)
							{
								if (vVar1.z == 2074623703)
								{
									if (bParam3)
									{
										_0x00a15b94cba4f76f(*uParam0);
										*uParam0 = 0;
									}
									iVar0 = 0;
								}
								else if (vVar1.z == 1400745903)
								{
									if (bParam3)
									{
										_0x00a15b94cba4f76f(*uParam0);
										*uParam0 = 0;
									}
									iVar0 = 1;
								}
								else if (vVar1.z == 444632721)
								{
									if (bParam3)
									{
										_0x00a15b94cba4f76f(*uParam0);
										*uParam0 = 0;
									}
									iVar0 = 2;
								}
							}
							break;
					}
				}
				_event_manager_pop_event(iParam1);
			}
			else
			{
				func_67(uParam2, 0, 0);
			}
		}
	}
	return iVar0;
}

void func_51(int iParam0, int iParam1)
{
	func_105(&(Global_1196898->f_78[iParam0]->f_6), iParam1);
}

bool func_52(int iParam0, struct<2> Param1, int iParam3)
{
	if (func_12(Param1, 0, 128))
	{
		return false;
	}
	func_102(iParam0, Param1);
	if (iParam0 == -1)
	{
		return false;
	}
	if (Global_1196898->f_78[iParam0]->f_3 == -1)
	{
		return false;
	}
	if (func_14(iParam0, 32))
	{
		return true;
	}
	if (!func_32(Param1))
	{
		return false;
	}
	else if (!func_58(Param1))
	{
		return false;
	}
	else if (func_59(Param1))
	{
		return false;
	}
	Var0 = { func_83() };
	if (func_32(Var0) && !func_25(Var0, Param1))
	{
		if (func_84())
		{
			func_63(iParam0, 262144);
			func_106(1);
		}
		else
		{
			return false;
		}
	}
	func_107(Param1, 1, 1, 1);
	func_108(Param1, 1, 0, -1);
	func_109(2);
	func_110(Global_1196898->f_78[iParam0]->f_3, iParam3);
	func_63(iParam0, 32);
	func_111(7);
	if (func_112(Global_1196898->f_78[iParam0]->f_3) != -785841056)
	{
		func_113();
		_0x7d654266025e921b(1638906956);
	}
	else
	{
		_0x7d654266025e921b(784116709);
		_0xe5a680a5d8b1f687(1);
	}
	return true;
}

void func_53()
{
	if (func_90(Local_13.f_13))
	{
		_0x2f901291ef177b02(Local_13.f_13, 0);
	}
}

bool func_54(int iParam0)
{
	return func_36(Local_13.f_12, iParam0);
}

void func_55(bool bParam0)
{
	if (bParam0)
	{
		Global_1951255->f_1381 = (Global_1951255->f_1381 - Global_1951255->f_1381 & 2);
	}
	else
	{
		Global_1951255->f_1381 |= 2;
	}
	func_114(bParam0);
}

void func_56(int iParam0)
{
	func_115(&(Local_13.f_12), iParam0);
}

void func_57(int iParam0)
{
	func_105(&(Local_13.f_12), iParam0);
}

bool func_58(struct<2> Param0)
{
	iVar0 = func_116(Param0);
	return (iVar0 == 1 || iVar0 == 2);
}

bool func_59(struct<2> Param0)
{
	iVar0 = func_116(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_60(int iParam0)
{
	_0xc08aff658b2e51da(&iVar0);
	if (iVar0 != 0)
	{
		func_117(&(Global_1194053->f_3), 32);
		func_117(&(Global_1194053->f_4), 12);
		Global_1194053->f_498 = iVar0;
		if (network_is_player_active(player_id()) && _0x424b17a7dc5c90bc(player_id()))
		{
			func_117(&(Global_1194053->f_4), 2);
		}
		_0xc08bff658b2e51da(0);
		Global_1194053->f_5[5] = 0;
		func_117(Global_1194053->f_5[5], 1);
	}
	Global_1194053->f_5[3] = 0;
	func_117(Global_1194053->f_5[3], 1);
	iVar1 = _0x901e0dc25080c8b9(player_id());
	if (!_0xd6f6acf4392187fb(iVar1))
	{
		func_117(Global_1194053->f_5[3], 6);
		return;
	}
	if (!_0x0f99f6436528a089(iVar1))
	{
		func_117(Global_1194053->f_5[3], 6);
		return;
	}
	_0x0a04a07bc3074edb(iParam0);
}

void func_61(struct<2> Param0, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_32(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (!func_59(Param0) && !func_58(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (func_118(Param0) == 0)
	{
	}
	if ((iParam3 == 0 || iParam3 == 1) || iParam3 == 4)
	{
		if (func_116(Param0) == 3)
		{
			func_119(1, -1706799532);
		}
		else if (func_116(Param0) == 4)
		{
			func_119(0, -1706799532);
		}
	}
	if ((func_116(Param0) == 3 || func_116(Param0) == 1) || ((bParam5 && func_116(Param0) == 4) && _0x01f4d242765c6b24(func_118(Param0))))
	{
		if (iParam3 != -1)
		{
			func_120(Param0, iParam3, iParam4, 255, 0);
		}
		else
		{
			func_120(Param0, 2, iParam4, 255, 0);
		}
	}
	func_121(Param0, 0);
	if (func_25(func_122(0), Param0))
	{
		func_123(1);
		func_124(0);
		func_125(0);
		func_126(1);
	}
	func_127(Param0);
	Global_1051252->f_45.f_1 = 1;
	iVar0 = func_128(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		_0x1096603b519c905f("");
	}
}

void func_62(int iParam0, struct<2> Param1)
{
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	func_129(Param1, &Var0);
	func_130(0);
	func_131(1);
	if (func_112(Global_1196898->f_78[iParam0]->f_3) == -785841056)
	{
		_0x50b72a754ee64a71(784116709);
		_0xe5a680a5d8b1f687(0);
	}
	else
	{
		_0x50b72a754ee64a71(1638906956);
	}
}

void func_63(int iParam0, int iParam1)
{
	func_115(&(Global_1196898->f_78[iParam0]->f_6), iParam1);
}

int func_64(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1697883736;
		case 1:
			return 1927192818;
		case 2:
			return -1363591469;
		case 3:
			return 1635448909;
		case 4:
			return -604494871;
		case 5:
			return -993281498;
		case 6:
			return -1871525158;
		case 15:
			return -596286663;
		case 16:
			return 923956646;
		case 17:
			return 1459450644;
		case 18:
			return -2071675432;
		case 8:
			return -552339597;
		case 10:
			return 2144670272;
		case 9:
			return 996459079;
		case 11:
			return 1996177174;
		case 12:
			return -1702168032;
		case 13:
			return -27117790;
		case 14:
			return 1653867545;
		case 7:
			return -142235487;
		default:
			break;
	}
	return 0;
}

bool func_65(int iParam0)
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

int func_66(int iParam0)
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

void func_67(var uParam0, bool bParam1, bool bParam2)
{
	if (network_is_game_in_progress() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = get_network_time();
		}
		else
		{
			*uParam0 = get_network_time_accurate();
		}
	}
	else
	{
		*uParam0 = get_game_timer();
	}
	uParam0->f_1 = 1;
}

char* func_68(var uParam0, var uParam1)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

char* func_69(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "LITERAL_STRING", sParam0);
	}
	return func_132(_create_var_string(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_70(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4)
{
	vVar0.x = iParam3;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = sParam2;
	uVar3 = _0x9f2cc2439a04e7ba(uParam0, &vVar0, iParam4);
	return uVar3;
}

var func_71(var uParam0, var uParam1, char[4] cParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = iParam4;
	Var0.f_1 = iParam3;
	Var0.f_2 = uParam1;
	Var0.f_3 = cParam2;
	uVar4 = _0x339e16b41780fc35(uParam0, &Var0, iParam5);
	return uVar4;
}

bool func_72(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102219->f_3 && iParam0) != 0;
	}
	return ((*Global_1100469)[iParam1]->f_3 && iParam0) != 0;
}

void func_73(var uParam0)
{
	if (!_databinding_is_data_id_valid(uParam0))
	{
		return;
	}
	_databinding_remove_binding_array_item_by_data_context_id(Global_1940311->f_242.f_5, uParam0);
	func_133(uParam0);
	_databinding_remove_data_entry(uParam0);
	func_134((Global_1940311->f_242.f_1186 - 1));
}

bool func_74(int iParam0, int iParam1)
{
	Local_13.f_34[iParam0] = &Local_13.f_34[iParam0] + 1;
	if (&Local_13.f_34[iParam0] >= iParam1)
	{
		Local_13.f_34[iParam0] = 0;
		return true;
	}
	return false;
}

int func_75(var uParam0, int iParam1)
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
		return 1;
	}
	return 0;
}

bool func_76(struct<2> Param0)
{
	return _unlock_is_unlocked(func_135(Param0));
}

int func_77(int iParam0)
{
	return Global_1196339->f_1[iParam0]->f_1;
}

bool func_78(int iParam0)
{
	if (iParam0 == -1)
	{
		iVar0 = 0;
	}
	else
	{
		iVar3 = &Global_1196898->f_1[iParam0];
		iVar1 = func_136(iParam0);
		if (iVar3 == 1232677007)
		{
			iVar2 = func_138(func_137(iParam0));
			if (iVar2 >= iVar1)
			{
				iVar0 = 1;
			}
		}
		else
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

bool func_79(struct<2> Param0)
{
	return _unlock_is_visible(func_135(Param0));
}

bool func_80(int iParam0)
{
	return false;
}

int func_81()
{
	return Global_1130592->f_24;
}

bool func_82(int iParam0)
{
	if (!does_entity_exist(Global_34))
	{
		return false;
	}
	if (decor_exist_on(Global_34, "iFmeLastEventPlayed") && decor_get_int(Global_34, "iFmeLastEventPlayed") == iParam0)
	{
		return false;
	}
	return true;
}

struct<2> func_83()
{
	if (Global_1196205->f_129 <= 0)
	{
		return func_122(0);
	}
	if (Global_1196205->f_130 < 0 || Global_1196205->f_131 == 0)
	{
		return func_122(0);
	}
	return (*Global_1196205)[Global_1196205->f_130]->f_1;
}

bool func_84()
{
	return (func_139() != 0 || func_140(1));
}

bool func_85()
{
	if (!func_141())
	{
		return false;
	}
	iVar0 = func_142();
	if (iVar0 == 255)
	{
		return false;
	}
	if (!network_is_player_active(iVar0))
	{
		return false;
	}
	if (!network_is_player_active(player_id()))
	{
		return false;
	}
	return true;
}

bool func_86(int iParam0)
{
	return !func_143(iParam0);
}

bool func_87()
{
	iVar0 = _0xf49f14462f0ae27c(player_id());
	if (does_entity_exist(iVar0))
	{
		if (((func_144(player_id(), 0) > 0 || _0x608bc6a6aacd5036(&uVar1, iVar0, 5, 0)) || _0x608bc6a6aacd5036(&uVar1, iVar0, 6, 0)) || _0x608bc6a6aacd5036(&uVar1, iVar0, 4, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_88(int iParam0)
{
	if (func_145())
	{
		return false;
	}
	else if (func_90(iParam0))
	{
		return false;
	}
	else if (func_143(255))
	{
		return false;
	}
	else if (&Global_1048585)
	{
		return false;
	}
	else if (!is_screen_faded_in())
	{
		return false;
	}
	return true;
}

var func_89(char* sParam0)
{
	if (is_entity_dead(Global_34))
	{
		return 0;
	}
	return func_146(sParam0, 10000, 0, 0, 0, 1);
}

bool func_90(int iParam0)
{
	iVar0 = 6;
	if (func_147(iParam0))
	{
		iVar0 = _0x59fa676177dbe4c9(iParam0);
	}
	return iVar0 != 6;
}

bool func_91()
{
	return func_148(Global_1572887->f_7, 1);
}

char* func_92(char* sParam0, int iParam1)
{
	sParam0 = _format_player_name_string(sParam0);
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_132(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

int func_93()
{
	if (!func_148(Global_1572887->f_266.f_63, 8))
	{
		return 2;
	}
	if (Global_1572887->f_266.f_2 != 4)
	{
		return 1;
	}
	if (Global_1572887->f_266 > 7 && Global_1572887->f_266 < 23)
	{
		return 0;
	}
	return 2;
}

bool func_94()
{
	return Global_1572887->f_106.f_75 != 1;
}

struct<2> func_95()
{
	return Global_1572887->f_106.f_11;
}

bool func_96()
{
	return (Global_1296851->f_2.f_1 == 2 || Global_1296851->f_2.f_1 == 1);
}

bool func_97(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915715->f_20638;
	}
	return (Global_1915715->f_20638 || Global_1915715->f_22504.f_1);
}

int func_98()
{
	return Global_1915715->f_20241;
}

void func_99(int iParam0, bool bParam1)
{
	if (!func_149(iParam0))
	{
		return;
	}
	if ((bParam1 && func_150(iParam0, 512)) || (!bParam1 && !func_150(iParam0, 512)))
	{
		return;
	}
	if (bParam1)
	{
		func_151(iParam0, 512);
	}
	else
	{
		func_152(iParam0, 512);
	}
	if (func_153(iParam0))
	{
		_0x9b4e793b1cb6550a();
	}
}

bool func_100()
{
	return func_154(_0xc17f69e1418cd11f(6));
}

var func_101(int iParam0, int iParam1, var uParam2, struct<2> Param3)
{
	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = 1105014447;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_18 = 1105014447;
	Var0.f_19 = 1105014447;
	Var0.f_23 = 300;
	Var0.f_31.f_8 = 1105014447;
	Var0.f_31.f_11 = 1105014447;
	Var0.f_31.f_12 = 8000;
	Var0.f_31.f_13 = 1511356879;
	Var0.f_31.f_15 = 1433015236;
	Var0.f_31.f_21 = 1;
	Var53 = { func_8(iParam1, uParam2) };
	Var0.f_20 = func_155(iParam1);
	Var0.f_21 = func_156(iParam1);
	Var0.f_24 = 6;
	Var0.f_25 = func_135(Param3);
	Var0.f_23 = 180;
	if (func_112(iParam1) != -785841056)
	{
		Var0.f_31.f_2 = _create_var_string(10, "FME_TOAST_OPT_IN_TITLE", &Var53);
		Var0.f_16 = _create_var_string(2, &Var53);
		Var0.f_17 = _create_var_string(2, "FME_PI_MENU_BODY");
		Var0.f_2 = -276653911;
		Var0.f_19 = -276653911;
	}
	else
	{
		iVar61 = Global_1196339->f_1[iParam0]->f_7;
		if (!network_is_player_active(iVar61))
		{
			return 0;
		}
		Var0.f_31.f_2 = _create_var_string(10, "FME_TOAST_OPT_IN_TITLE_POSSE_VERSUS", &Var53);
		Var0.f_16 = _create_var_string(10, "FME_PI_MENU_TITLE_POSSE_VERSUS", get_player_name(iVar61));
		Var0.f_17 = _create_var_string(2, &Var53);
	}
	Var0.f_31.f_3 = _create_var_string(2, "NM_TI_VIEW_INVITE_FREE_MODE_EVENT");
	Var0.f_31.f_6 = func_155(iParam1);
	Var0.f_31.f_7 = func_156(iParam1);
	Var0.f_31.f_17 = func_157();
	Var0.f_31.f_18 = func_158();
	Var0.f_22 = 1;
	return func_159(Var0);
}

int func_102(int iParam0, struct<2> Param1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (func_14(iParam0, 16))
	{
		return 1;
	}
	if (!func_32(Param1))
	{
		return 0;
	}
	else if (func_58(Param1))
	{
		return 0;
	}
	else if (func_59(Param1))
	{
		return 0;
	}
	func_160(Param1);
	func_63(iParam0, 16);
	return 1;
}

bool func_103(var uParam0)
{
	return uParam0->f_1;
}

int func_104(var uParam0, bool bParam1, bool bParam2)
{
	if (network_is_game_in_progress() && !bParam1)
	{
		if (!bParam2)
		{
			return get_time_difference(*uParam0, get_network_time());
		}
		else
		{
			return get_time_difference(*uParam0, get_network_time_accurate());
		}
	}
	return get_time_difference(*uParam0, get_game_timer());
}

void func_105(var uParam0, int iParam1)
{
	func_161(uParam0, iParam1);
}

int func_106(int iParam0)
{
	if (func_162())
	{
		return 0;
	}
	if (!func_84())
	{
		return 0;
	}
	if (func_163())
	{
		func_164(2);
	}
	else
	{
		func_164(1);
	}
	func_165(iParam0);
	return 1;
}

void func_107(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_32(Param0))
	{
		return;
	}
	if (!func_58(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_166(Param0);
	}
	if (!func_32(func_122(0)))
	{
		func_121(Param0, 3);
		func_123(bParam3);
		func_124(!bParam4);
		func_167(Param0, -1);
		if (bParam2 && !func_168(2))
		{
			func_169(&Global_0, 1024);
		}
		func_126(1);
	}
	else
	{
		func_167(Param0, -1);
		func_121(Param0, 4);
		func_170(Param0, 0);
	}
	Global_1051252->f_45.f_1 = 1;
	iVar0 = func_128(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		if (func_171(Param0, &Var1))
		{
			_0x1096603b519c905f(&(Var1.f_17));
		}
	}
}

int func_108(struct<2> Param0, bool bParam2, int iParam3, int iParam4)
{
	if (func_172(Param0) >= 0)
	{
		return 0;
	}
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	Var0.f_1 = { Param0 };
	Var0 = func_135(Param0);
	Var0.f_3 = iParam3;
	func_173(&Var0, bParam2, iParam4);
	return 1;
}

void func_109(int iParam0)
{
	if (Global_1194053->f_440 != 2)
	{
		return;
	}
	if (Global_1194053->f_440.f_1 != 0)
	{
		return;
	}
	Global_1194053->f_440.f_1 = iParam0;
	_0xc584ff658b2e55da(iParam0);
}

void func_110(int iParam0, int iParam1)
{
	iVar0 = func_112(iParam0);
	if (iVar0 == -785841056)
	{
		func_175(func_174(1511238709, -785841056), 1);
	}
	else
	{
		func_175(func_174(1511238709, -1666944573), 1);
	}
	if (func_176(iParam0, iParam1, &iVar1))
	{
		func_175(func_174(1511238709, iVar1), 1);
	}
}

void func_111(int iParam0)
{
	if ((Global_1900688->f_1 == 2 || Global_1900688->f_1 == 5) || Global_1900688->f_1 == 3)
	{
		return;
	}
	iVar0 = 0;
	if (func_177() != -1)
	{
		iVar0 = 1;
	}
	iVar1 = func_178(Global_1893587->f_2);
	Global_1900688->f_1 = 3;
	Global_1900688->f_2 = 0;
	Global_1900688->f_7 = iVar0;
	Global_1900688->f_8 = iParam0;
	Global_1900688->f_9 = iVar1;
	if (Global_1900688->f_9 != -1 && Global_1900688->f_9 != 0)
	{
		func_179(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_9);
	}
	else if (Global_1900688->f_11 != -1)
	{
		func_179(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_11);
	}
}

int func_112(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return &(Global_1196898->f_1[iParam0]);
}

void func_113()
{
	if (network_is_player_active(player_id()))
	{
		if (func_72(1048576, player_id()) || Global_1296851->f_2.f_1 == 2)
		{
			func_180();
		}
	}
	if (_get_wanted_intensity_for_player(Global_1296859->f_10) > 0)
	{
		if (func_181())
		{
			func_182();
		}
		func_183();
	}
}

void func_114(bool bParam0)
{
	Global_1940144->f_19 = !bParam0;
}

void func_115(var uParam0, int iParam1)
{
	func_184(uParam0, iParam1);
}

int func_116(struct<2> Param0)
{
	if (!func_32(Param0))
	{
		return -1;
	}
	iVar0 = func_185(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1071686->f_19550.f_1[iVar0]->f_2;
}

void func_117(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_118(struct<2> Param0)
{
	return func_135(Param0);
}

int func_119(bool bParam0, int iParam1)
{
	if (!network_is_in_session())
	{
		return 0;
	}
	if (!Global_1102219->f_16)
	{
		return 0;
	}
	if (!func_186())
	{
		return 0;
	}
	if (!func_13())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_169(&Global_0, 8);
	}
	func_169(&Global_0, 1);
	return 1;
}

void func_120(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5)
{
	iVar0 = func_187(func_128(Param0));
	iVar1 = func_118(Param0);
	Var2.f_1 = iParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_177() == 0)
	{
		Var2 = Global_265377->f_124517.f_71.f_17;
		func_188(Param0, &Var2);
	}
	if (network_is_player_active(iParam4))
	{
		Var2.f_4 = iParam4;
		Var2.f_3 = iParam5;
	}
	else
	{
		Var2.f_4 = 255;
		Var2.f_3 = 0;
	}
	_0xd5910ecf81a2278c(iVar0, iVar1, iParam2, &Var2);
}

void func_121(struct<2> Param0, int iParam2)
{
	if (!func_32(Param0))
	{
		return;
	}
	if (iParam2 == 0 || iParam2 == -1)
	{
		func_189(Param0);
	}
	else
	{
		func_190(Param0, iParam2);
	}
	func_191();
}

struct<2> func_122(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

void func_123(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_192(Global_1940258, 8388608);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_193(Global_1940258, 8388608);
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

void func_124(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 <= 58)
	{
		iVar1 = func_194(iVar0, 1);
		if ((iVar1 == -173287735 || iVar1 == -715363719) || iVar1 == 1972833301)
		{
		}
		else
		{
			if (bParam0)
			{
				StringCopy(&cVar2, "LAW_UI_DEAD_OR_ALIVE", 24);
				func_195(cVar2);
			}
			else
			{
				func_196();
			}
			_0xf611de44aeb36a1d(iVar1, bParam0);
		}
		iVar0++;
	}
}

int func_125(bool bParam0)
{
	if (!bParam0 && func_197(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_126(int iParam0)
{
	Global_1900736 = (Global_1900736 || iParam0);
}

int func_127(struct<2> Param0)
{
	return func_199(func_198(Param0));
}

int func_128(var uParam0, var uParam1)
{
	return uParam0;
}

int func_129(struct<2> Param0, var uParam2)
{
	iVar0 = func_172(Param0);
	if (func_172(Param0) < 0)
	{
		return 0;
	}
	func_200(iVar0, uParam2);
	return 1;
}

void func_130(bool bParam0)
{
	if (Global_1900688->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_177() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1900688->f_2 == 4 && Global_1900688->f_12 != Global_1900688->f_13) && !bParam0)
	{
		Global_1900688->f_1 = Global_1900688->f_2;
		Global_1900688->f_12 = Global_1900688->f_13;
		func_201(iVar0, Global_1900688->f_12);
	}
	else
	{
		Global_1900688->f_1 = 0;
		Global_1900688->f_7 = iVar0;
		Global_1900688->f_8 = func_202();
		Global_1900688->f_9 = func_178(Global_1893587->f_2);
		Global_1900688->f_11 = func_203(Global_1896622->f_41);
		if (Global_1900688->f_9 != -1 && Global_1900688->f_9 != 0)
		{
			func_179(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_9);
		}
		else if (Global_1900688->f_11 != -1)
		{
			func_179(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_11);
		}
		else
		{
			func_179(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_9);
		}
	}
	Global_1900688->f_2 = 0;
}

void func_131(int iParam0)
{
	if (Global_1194053->f_440 != 2)
	{
		return;
	}
	if (Global_1194053->f_440.f_1 == 0)
	{
		return;
	}
	Global_1194053->f_440.f_1 = 0;
	_0xc684ff658b2e55da(iParam0);
}

char* func_132(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

void func_133(var uParam0)
{
	iVar0 = _databinding_read_data_int_from_parent(uParam0, func_204(91));
	if (func_147(iVar0))
	{
		_0x2f901291ef177b02(iVar0, 1);
	}
}

void func_134(int iParam0)
{
	Global_1940311->f_242.f_1186 = iParam0;
	_databinding_write_data_string(Global_1940311->f_242.f_6, _0x2b6846401d68e563(to_float(Global_1940311->f_242.f_1186), 0));
}

int func_135(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_205(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_136(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1196898->f_1[iParam0]->f_3;
}

int func_137(int iParam0)
{
	switch (iParam0)
	{
		case 8:
		case 9:
			iVar0 = 7;
			break;
		case 11:
		case 12:
			iVar0 = 12;
			break;
		case 10:
			iVar0 = 11;
			break;
		case 13:
		case 14:
			iVar0 = 18;
			break;
		default:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_138(int iParam0)
{
	if (!func_206(iParam0))
	{
		return 0;
	}
	iVar0 = func_207(iParam0);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	else
	{
		return func_208(iParam0, 1);
	}
	return 0;
}

int func_139()
{
	return Global_1301323->f_150;
}

bool func_140(int iParam0)
{
	return (Global_1301323->f_288.f_2 && iParam0) != 0;
}

bool func_141()
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return Global_1071686->f_4;
}

int func_142()
{
	if ((!_does_thread_exist(&(Global_1051252->f_16[4])) || !is_thread_active(&(Global_1051252->f_16[4]), false)) || !_0x31dad2cd6d49546e(&(Global_1051252->f_16[4])))
	{
		return 255;
	}
	return _0xb4a25351d79b444c(&(Global_1051252->f_16[4]));
}

bool func_143(int iParam0)
{
	return func_209(1, iParam0);
}

int func_144(int iParam0, bool bParam1)
{
	if (!_network_is_player_index_valid(iParam0))
	{
		return func_210(0);
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return func_210(0);
	}
	return func_211(iVar0, bParam1);
}

bool func_145()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

var func_146(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_147(int iParam0)
{
	return iParam0 != 0;
}

bool func_148(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_149(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 40);
}

bool func_150(int iParam0, int iParam1)
{
	if (!func_149(iParam0))
	{
		return false;
	}
	if (func_177() == -1)
	{
		return (Global_1915715->f_3[iParam0]->f_6 && iParam1) != 0;
	}
	else
	{
		return (Global_1051439->f_72[iParam0]->f_1 && iParam1) != 0;
	}
	return false;
}

void func_151(int iParam0, int iParam1)
{
	if (!func_149(iParam0))
	{
		return;
	}
	if (func_177() == -1)
	{
		Global_1915715->f_3[iParam0]->f_6 = (Global_1915715->f_3[iParam0]->f_6 || iParam1);
	}
	else
	{
		Global_1051439->f_72[iParam0]->f_1 = (Global_1051439->f_72[iParam0]->f_1 || iParam1);
	}
}

void func_152(int iParam0, int iParam1)
{
	if (!func_149(iParam0))
	{
		return;
	}
	if (func_177() == -1)
	{
		Global_1915715->f_3[iParam0]->f_6 = (Global_1915715->f_3[iParam0]->f_6 - (Global_1915715->f_3[iParam0]->f_6 && iParam1));
	}
	else
	{
		Global_1051439->f_72[iParam0]->f_1 = (Global_1051439->f_72[iParam0]->f_1 - (Global_1051439->f_72[iParam0]->f_1 && iParam1));
	}
}

bool func_153(int iParam0)
{
	if (func_212())
	{
		if (Global_1915715->f_20241 == iParam0)
		{
			return true;
		}
	}
	return false;
}

bool func_154(int iParam0)
{
	if (func_147(iParam0))
	{
		iVar0 = _0x59fa676177dbe4c9(iParam0);
		return ((((iVar0 == 4 || iVar0 == 0) || iVar0 == 3) || iVar0 == 5) || iVar0 == 2);
	}
	return false;
}

int func_155(int iParam0)
{
	iVar0 = -50383753;
	if (func_27(&Var1, iParam0) && func_30(&Var1))
	{
		func_213(Var1, -1641329203, &iVar0, 0);
	}
	return iVar0;
}

var func_156(int iParam0)
{
	if (func_27(&Var1, iParam0) && func_30(&Var1))
	{
		func_213(Var1, -1268019774, &uVar0, 0);
	}
	return uVar0;
}

char* func_157()
{
	return "HUD_Toast_Soundset";
}

char* func_158()
{
	return "Toast_On";
}

var func_159(struct<32> Param0, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52)
{
	iVar0 = func_214();
	iVar1 = get_cloud_time_as_int();
	iVar2 = (iVar1 + Param0.f_23);
	_int_to_string(iVar1, "%i", &cVar11);
	Global_1940311->f_242.f_1188++;
	StringCopy(&cVar3, "Invite_Root_", 64);
	StringConCat(&cVar3, &cVar11, 64);
	StringConCat(&cVar3, "_", 64);
	StringIntConCat(&cVar3, Global_1940311->f_242.f_1188, 64);
	func_215(Global_1940311->f_242.f_14[iVar0], Global_1940311->f_242.f_4, cVar3, Param0);
	Global_1940311->f_242.f_14[iVar0]->f_35 = _databinding_add_data_int(&(Global_1940311->f_242.f_14[iVar0]), func_204(84), Global_1940311->f_242.f_1188);
	Global_1940311->f_242.f_14[iVar0]->f_37 = _databinding_add_data_bool(&(Global_1940311->f_242.f_14[iVar0]), func_204(85), 1);
	Global_1940311->f_242.f_14[iVar0]->f_38 = _databinding_add_data_bool(&(Global_1940311->f_242.f_14[iVar0]), func_204(86), 0);
	Global_1940311->f_242.f_14[iVar0]->f_33 = _databinding_add_data_bool(&(Global_1940311->f_242.f_14[iVar0]), func_204(74), Param0.f_30);
	if (Param0.f_30)
	{
		Global_1940311->f_242.f_14[iVar0]->f_32 = _databinding_add_data_string(&(Global_1940311->f_242.f_14[iVar0]), func_204(72), Param0.f_29);
		Global_1940311->f_242.f_14[iVar0]->f_31 = _databinding_add_data_int(&(Global_1940311->f_242.f_14[iVar0]), func_204(75), Param0.f_28);
	}
	Global_1940311->f_242.f_14[iVar0]->f_26 = _databinding_add_data_int(&(Global_1940311->f_242.f_14[iVar0]), func_204(87), Param0.f_24);
	iVar15 = 0;
	Global_1940311->f_242.f_14[iVar0]->f_34 = _databinding_add_data_bool_by_hash(&(Global_1940311->f_242.f_14[iVar0]), 707094655, iVar15);
	Global_1940311->f_242.f_14[iVar0]->f_27 = _databinding_add_data_int(&(Global_1940311->f_242.f_14[iVar0]), func_204(50), Param0.f_25);
	Global_1940311->f_242.f_14[iVar0]->f_28 = _databinding_add_data_int(&(Global_1940311->f_242.f_14[iVar0]), func_204(51), Param0.f_25.f_1);
	Global_1940311->f_242.f_14[iVar0]->f_29 = _databinding_add_data_gang_id(&(Global_1940311->f_242.f_14[iVar0]), func_204(88), Param0.f_25.f_2);
	Global_1940311->f_242.f_14[iVar0]->f_25 = _databinding_add_data_int(&(Global_1940311->f_242.f_14[iVar0]), func_204(89), iVar2);
	Global_1940311->f_242.f_14[iVar0]->f_24 = _databinding_add_data_int(&(Global_1940311->f_242.f_14[iVar0]), func_204(90), Param0.f_22);
	func_134(Global_1940311->f_242.f_1186 + 1);
	if (Global_1940311->f_242.f_1188 == 2147483647)
	{
		Global_1940311->f_242.f_1188 = 0;
	}
	if (func_216(Param0.f_24))
	{
		Param0.f_31 = 5;
		Param0.f_31.f_1 = 1;
		Param0.f_31.f_13 = 778915895;
		Param0.f_31.f_14 = &Global_1940311->f_242.f_14[iVar0];
		iVar16 = func_217(&(Param0.f_31));
		Global_1940311->f_242.f_14[iVar0]->f_36 = _databinding_add_data_int(&(Global_1940311->f_242.f_14[iVar0]), func_204(91), iVar16);
	}
	iVar17 = func_218();
	if (iVar17 == 0 || Param0.f_22 == iVar17)
	{
		Global_1940311->f_242.f_1187++;
		_databinding_insert_ui_item_to_list_from_context_string_alias(Global_1940311->f_242.f_5, 0, "pm_invite_item", &(Global_1940311->f_242.f_14[iVar0]));
	}
	return &(Global_1940311->f_242.f_14[iVar0]);
}

int func_160(struct<2> Param0)
{
	if (&Global_1900806 == 15)
	{
		return -1;
	}
	if (!func_219(Param0))
	{
		return -1;
	}
	iVar1 = func_220(Param0);
	if (iVar1 >= 0)
	{
		func_221(Param0, 1);
		return iVar1;
	}
	else
	{
		iVar0 = &Global_1900806;
		*(*Global_1900807)[iVar0] = { Param0 };
		*(*Global_1900838)[iVar0] = { Var2 };
		func_221(Param0, 1);
		Global_1900806 = &Global_1900806 + 1;
		if (&Global_1900806 > 15)
		{
			Global_1900806 = 15;
		}
		return iVar0;
	}
	return -1;
}

void func_161(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_162()
{
	return func_222() != 0;
}

bool func_163()
{
	iVar0 = func_223();
	if (!_does_thread_exist(iVar0))
	{
		return false;
	}
	return is_thread_active(iVar0, false);
}

void func_164(int iParam0)
{
	Global_1301323->f_288 = iParam0;
}

void func_165(int iParam0)
{
	Global_1301323->f_288.f_1 = iParam0;
}

void func_166(struct<2> Param0)
{
	if (func_118(Param0) == 0)
	{
	}
	else if (!_0x01f4d242765c6b24(func_118(Param0)))
	{
	}
	else
	{
		_0xb2a38826e5886e83(func_118(Param0), Global_265377->f_124517.f_71.f_17);
		if (func_171(Param0, &Var0))
		{
			if (Var0.f_29 == -681494152)
			{
				_0xf21a5d66874fcedd(Var0.f_2, 0, -1423748980);
			}
			_0xf21a5d66874fcedd(Var0.f_2, Var0.f_29, 0);
			_0xf21a5d66874fcedd(Var0.f_2, Var0.f_30, 0);
			_0xf21a5d66874fcedd(Var0.f_2, Var0.f_31, 0);
		}
	}
}

int func_167(struct<2> Param0, int iParam2)
{
	iVar0 = func_198(Param0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1900736->f_66 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1900736->f_66;
	func_224(Param0, iVar0);
	Global_1900736->f_66++;
	if (iParam2 < 0 || iParam2 >= Global_1900736->f_66)
	{
		return iVar0;
	}
	func_225(iVar0, iParam2);
	return iParam2;
}

bool func_168(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

void func_169(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_170(struct<2> Param0, int iParam2)
{
	if (!func_32(Param0))
	{
		return 0;
	}
	iVar0 = func_198(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	if (!func_226(Param0, func_122(0), iParam2))
	{
		func_121(func_122(0), 3);
		func_121(func_122(iVar0), 4);
		return 0;
	}
	func_225(iVar0, 0);
	func_121(func_122(0), 3);
	func_121(func_122(1), 4);
	return 1;
}

bool func_171(struct<2> Param0, var uParam2)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_205(Param0, &vVar0);
	if (func_227(Param0, vVar0.x, uParam2))
	{
		return true;
	}
	return false;
}

int func_172(struct<2> Param0)
{
	if (Global_1196205->f_129 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1196205->f_129)
	{
		if (func_25((*Global_1196205)[iVar0]->f_1, Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_173(var uParam0, bool bParam1, int iParam2)
{
	func_228(uParam0, iParam2);
	if (Global_1196205->f_129 == 1)
	{
		iParam2 = 0;
		bParam1 = true;
	}
	if (bParam1)
	{
		func_229(func_172(uParam0->f_1));
	}
	else
	{
		func_230();
	}
}

struct<2> func_174(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_175(var uParam0, int iParam1, int iParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return;
	}
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

bool func_176(int iParam0, int iParam1, int iParam2)
{
	if ((func_27(&Var0, iParam0) && func_28(&Var0)) && func_29(&Var0, iParam1))
	{
		if (func_213(Var0, 915697271, &uVar5, 1))
		{
			*iParam2 = uVar5;
			return true;
		}
	}
	return false;
}

int func_177()
{
	return Global_1572887->f_13;
}

int func_178(int iParam0)
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
		case 30:
			return 27;
		case 52:
			return 28;
		case 31:
			return 29;
		case 32:
			return 30;
		case 33:
			return 31;
		case 127:
			return 32;
		case 131:
			return 33;
		case 132:
			return 34;
		case 35:
			return 35;
		case 88:
			return 40;
		case 37:
			return 42;
		case 38:
			return 43;
		case 94:
			return 44;
		case 121:
			return 46;
		case 39:
			return 47;
		case 40:
			return 48;
		case 41:
			return 49;
		case 42:
			return 50;
		case 53:
			return 51;
		case 44:
			return 52;
		case 55:
			return 53;
		case 45:
			return 54;
		case 47:
			return 57;
		case 51:
			return 61;
		case 60:
			return 63;
		case 62:
			return 64;
		case 63:
			return 65;
		case 64:
			return 66;
		case 65:
			return 67;
		case 66:
			return 68;
		case 135:
			return 69;
		case 136:
			return 70;
		case 67:
			return 71;
		case 82:
			return 72;
		case 69:
			return 73;
		case 70:
			return 74;
		case 72:
			return 76;
		case 73:
			return 78;
		case 74:
			return 79;
		case 75:
			return 80;
		case 76:
			return 81;
		case 77:
			return 82;
		case 80:
			return 84;
		case 81:
			return 85;
		case 123:
			return 86;
		case 83:
			return 87;
		case 84:
			return 88;
		case 85:
			return 90;
		case 86:
			return 91;
		case 87:
			return 92;
		case 92:
			return 96;
		case 93:
			return 97;
		case 98:
			return 99;
		case 99:
			return 100;
		case 100:
			return 101;
		case 101:
			return 102;
		case 102:
			return 103;
		case 103:
			return 104;
		case 104:
			return 105;
		case 105:
			return 106;
		case 106:
			return 107;
		case 110:
			return 114;
		case 111:
			return 115;
		case 113:
			return 118;
		case 115:
			return 119;
		case 116:
			return 120;
		case 117:
			return 121;
		case 118:
			return 122;
		case 139:
			return 123;
		default:
			break;
	}
	return 0;
}

void func_179(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

void func_180()
{
	if (!_0x424b17a7dc5c90bc(Global_1296859->f_10))
	{
		return;
	}
	iVar0 = func_231();
	if (iVar0 > 0)
	{
		func_232(-1228177771, iVar0, 0);
	}
}

bool func_181()
{
	return (func_233(Global_1296859->f_10, 1, 0, 1) && func_234() > 0);
}

void func_182()
{
	if (!_0x424b17a7dc5c90bc(Global_1296859->f_10))
	{
		return;
	}
	iVar0 = func_234();
	if (iVar0 > 0)
	{
		func_235(iVar0, 0, -142743235, 0);
	}
}

void func_183()
{
	iVar0 = player_id();
	_0x062b4a4a3396351d(iVar0);
	func_236();
}

void func_184(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_185(struct<2> Param0)
{
	if (Global_1071686->f_19550 <= 0)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_205(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1071686->f_19550 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_205(*Global_1071686->f_19550.f_1[iVar8], &vVar3);
		if (vVar3.x > vVar0.x)
		{
			iVar7 = (iVar8 - 1);
		}
		else if (vVar3.x < vVar0.x)
		{
			iVar6 = iVar8 + 1;
		}
		else
		{
			return iVar8;
		}
	}
	return -1;
}

bool func_186()
{
	return !Global_1572887->f_9;
}

int func_187(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -1690863991;
		case 3:
			return 1286170048;
		case 4:
			return -342492333;
		case 5:
			return 1140089012;
		case 8:
			return 634321112;
		case 7:
			return -2079273178;
		case 6:
			return -147846054;
		default:
			break;
	}
	return 0;
}

void func_188(struct<2> Param0, var uParam2)
{
	if (!network_is_game_in_progress())
	{
		return;
	}
	iVar2 = -1;
	iVar3 = _0x901e0dc25080c8b9(player_id());
	if (iVar3 == 0)
	{
		return;
	}
	switch (func_128(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_238(func_237(Param0));
			iVar5 = func_239(iVar4);
			if (!func_240(iVar5, 0))
			{
				return;
			}
			break;
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (&Global_1107216->f_33[iVar1] == iVar3)
		{
			iVar2 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	if (iVar2 == -1)
	{
		return;
	}
	iVar0 = Global_1107216->f_33[iVar2]->f_3.f_1;
	if (iVar0 == -1)
	{
		return;
	}
	uParam2->f_2 = Global_1116202[iVar0];
}

int func_189(struct<2> Param0)
{
	iVar0 = func_185(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_241(iVar0);
}

int func_190(struct<2> Param0, int iParam2)
{
	if (Global_1071686->f_19550 >= 32)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_205(Param0, &vVar0))
	{
		return -1;
	}
	vVar6 = -1;
	vVar6.f_1 = -1;
	vVar6 = { Param0 };
	vVar6.f_2 = iParam2;
	if (Global_1071686->f_19550 == 0)
	{
		*Global_1071686->f_19550.f_1[Global_1071686->f_19550] = { vVar6 };
		Global_1071686->f_19550++;
		return 0;
	}
	iVar9 = 0;
	while (iVar9 < Global_1071686->f_19550)
	{
		func_205(*Global_1071686->f_19550.f_1[iVar9], &vVar3);
		if (vVar0.x == vVar3.x)
		{
			*Global_1071686->f_19550.f_1[iVar9] = { vVar6 };
			return iVar9;
		}
		else if (vVar0.x > vVar3.x)
		{
			iVar9++;
		}
		else if (vVar0.x < vVar3.x)
		{
			func_242(iVar9);
			*Global_1071686->f_19550.f_1[iVar9] = { vVar6 };
			return iVar9;
		}
	}
	if (Global_1071686->f_19550 < 31)
	{
		iVar9 = Global_1071686->f_19550;
		*Global_1071686->f_19550.f_1[iVar9] = { vVar6 };
		Global_1071686->f_19550++;
		if (Global_1071686->f_19550 > 32)
		{
			Global_1071686->f_19550 = 32;
		}
		return iVar9;
	}
	return -1;
}

void func_191()
{
	iVar0 = 0;
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	while (iVar0 < Global_1071686->f_19550)
	{
		if (func_205(*Global_1071686->f_19550.f_1[iVar0], &vVar1))
		{
		}
		iVar0++;
	}
}

void func_192(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_193(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_194(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1746095559;
		case 1:
			return 195938434;
		case 2:
			return 416962030;
		case 3:
			return 1314857970;
		case 4:
			return -999071359;
		case 5:
			return -683250308;
		case 6:
			return -857617219;
		case 7:
			return 1780145725;
		case 8:
			return -1521715232;
		case 9:
			return -1560342203;
		case 10:
			return 1343354387;
		case 11:
			return 1052408375;
		case 12:
			return -1759599185;
		case 13:
			return 1481148278;
		case 14:
			return -16106300;
		case 15:
			return 105387183;
		case 16:
			return -2095449173;
		case 17:
			return -2097683294;
		case 18:
			return 1805131596;
		case 19:
			return 314693001;
		case 20:
			return -1728509733;
		case 21:
			return -42817558;
		case 22:
			return 1458462042;
		case 23:
			return 481893872;
		case 24:
			return 1714017012;
		case 25:
			return 1437412331;
		case 26:
			return -493957506;
		case 27:
			return 1224055398;
		case 28:
			return -953803399;
		case 29:
			return 2006449383;
		case 30:
			return -1788230330;
		case 31:
			return 1396375613;
		case 32:
			return -547914843;
		case 33:
			return -1547772340;
		case 34:
			return -59535775;
		case 35:
			return -1701536647;
		case 36:
			return 1923998736;
		case 37:
			return -1103472584;
		case 38:
			return -2051405571;
		case 39:
			return 1135209633;
		case 40:
			return -1810065318;
		case 41:
			return 2140177766;
		case 42:
			return 1685924442;
		case 43:
			return 1171995096;
		case 44:
			return -267442581;
		case 45:
			return -1361146315;
		case 46:
			return 1352191066;
		case 47:
			return -2130852007;
		case 48:
			return -102241052;
		case 49:
			return 1420320220;
		case 50:
			return -1715130379;
		case 51:
			return -661550833;
		case 52:
			return -1358475411;
		case 53:
			return -1848598303;
		case 54:
			return -173287735;
		case 55:
			return -715363719;
		case 56:
			return -1117123933;
		case 57:
			return 1972833301;
		case 58:
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

void func_195(char[12] cParam0)
{
	Global_1939161->f_75.f_67 = { cParam0 };
}

void func_196()
{
	StringCopy(&(Global_1939161->f_75.f_67), "", 24);
}

bool func_197(int iParam0)
{
	iVar0 = func_243(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_244(iVar1))
	{
		if (Global_1071686->f_19648.f_24 && !func_245(iParam0))
		{
			return false;
		}
		return (is_bit_set(&(Global_1071686->f_19648[iVar1]), iVar2) || is_bit_set(&(Global_39.f_110[iVar1]), iVar2));
	}
	return is_bit_set(&(Global_39.f_110[iVar1]), iVar2);
}

int func_198(struct<2> Param0)
{
	if (!func_32(Param0))
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_25(*Global_1900736->f_1[iVar0], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_199(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1900736->f_66 == 0)
	{
		return 0;
	}
	if (Global_1900736->f_66 == 1)
	{
		Global_1900736->f_66 = 0;
		func_246(Global_1900736->f_1[0]);
		return 1;
	}
	func_246(Global_1900736->f_1[iParam0]);
	Global_1900736->f_66 = (Global_1900736->f_66 - 1);
	func_225(iParam0, Global_1900736->f_66);
	return 1;
}

void func_200(int iParam0, var uParam1)
{
	func_247(uParam1, iParam0);
	if (Global_1196205->f_129 > 0)
	{
		if (Global_1196205->f_130 == iParam0)
		{
			func_229(0);
		}
	}
	func_230();
}

void func_201(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_202()
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

int func_203(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 170;
		case 1:
			return 171;
		case 2:
			return 172;
		case 3:
			return 173;
		case 4:
			return 174;
		case 5:
			return 175;
		case 6:
			return 175;
		case 7:
			return 175;
		case 8:
			return 176;
		case 9:
			return 177;
		case 10:
			return 178;
		case 11:
			return 179;
		case 12:
			return 180;
		case 13:
			return 181;
		case 14:
			return 182;
		case 15:
			return 183;
		case 16:
			return 184;
		default:
			break;
	}
	return -1;
}

char* func_204(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "dynamic_list_item_enabled";
		case 1:
			return "dynamic_list_item_visible";
		case 2:
			return "dynamic_list_item_main_color";
		case 3:
			return "dynamic_list_item_secondary_color";
		case 4:
			return "dynamic_list_item_tertiary_color";
		case 5:
			return "dynamic_list_item_main_img_texture_dic";
		case 6:
			return "dynamic_list_item_main_img_texture";
		case 7:
			return "dynamic_list_item_main_img_visible";
		case 8:
			return "dynamic_list_item_main_img_enabled";
		case 9:
			return "dynamic_list_item_status_icon_texture_dic";
		case 10:
			return "dynamic_list_item_status_icon_texture";
		case 11:
			return "dynamic_list_item_status_icon_visible";
		case 12:
			return "dynamic_list_item_deco_texture_dic";
		case 13:
			return "dynamic_list_item_deco__texture";
		case 14:
			return "dynamic_list_item_deco_visible";
		case 15:
			return "dynamic_list_item_raw_text_entry";
		case 16:
			return "dynamic_list_item_text_label_entry";
		case 17:
			return "dynamic_list_item_secondary_raw_text_entry";
		case 18:
			return "dynamic_list_item_secondary_text_label_entry";
		case 19:
			return "dynamic_list_item_secondary_text_visible";
		case 20:
			return "dynamic_list_item_secondary_text_enabled";
		case 21:
			return "dynamic_list_item_end_img_texture_dic";
		case 22:
			return "dynamic_list_item_end_img_texture";
		case 23:
			return "dynamic_list_item_end_img_visible";
		case 24:
			return "dynamic_list_item_corner_end_img_texture_dic";
		case 25:
			return "dynamic_list_item_corner_end_img_texture";
		case 26:
			return "dynamic_list_item_corner_end_img_visible";
		case 27:
			return "dynamic_list_item_entry_player_index";
		case 28:
			return "dynamic_list_item_entry_friend_index";
		case 29:
			return "dynamic_list_item_player_gamer_handle";
		case 30:
			return "dynamic_list_item_option_stepper_visible";
		case 31:
			return "dynamic_list_item_option_stepper_text_enabled";
		case 32:
			return "dynamic_list_item_option_stepper_items";
		case 33:
			return "dynamic_list_item_option_stepper_current_hash";
		case 34:
			return "dynamic_list_item_option_stepper_current_index";
		case 35:
			return "dynamic_list_item_option_stepper_max_index";
		case 36:
			return "dynamic_list_item_left_chevron_enabled";
		case 37:
			return "dynamic_list_item_right_chevron_enabled";
		case 38:
			return "dynamic_list_item_option_stepper_index_change_ui_event_hash";
		case 39:
			return "dynamic_list_item_main_fill_maximum";
		case 40:
			return "dynamic_list_item_main_fill_value";
		case 41:
			return "dynamic_list_item_extra_text_field_entry_one_raw_text";
		case 42:
			return "dynamic_list_item_extra_text_field_entry_two_raw_text";
		case 43:
			return "dynamic_list_item_extra_text_field_entry_three_raw_text";
		case 44:
			return "dynamic_list_item_extra_text_field_entry_one_visibility";
		case 45:
			return "dynamic_list_item_extra_text_field_entry_two_visibility";
		case 46:
			return "dynamic_list_item_extra_text_field_entry_three_visibility";
		case 47:
			return "dynamic_list_item_extra_img_texture_one_dic";
		case 48:
			return "dynamic_list_item_extra_img_one_texture";
		case 49:
			return "dynamic_list_item_extra_img_one_visible";
		case 50:
			return "dynamic_list_item_extra_int_field_one_value";
		case 51:
			return "dynamic_list_item_extra_int_field_two_value";
		case 52:
			return "dynamic_list_item_extra_vector_field_one_value";
		case 53:
			return "dynamic_list_item_extra_bool_field_one_value";
		case 54:
			return "dynamic_list_item_link";
		case 55:
			return "dynamic_list_item_event_channel_hash";
		case 56:
			return "dynamic_list_item_focus_hash";
		case 57:
			return "dynamic_list_item_select_hash";
		case 58:
			return "dynamic_list_item_prompt_text";
		case 59:
			return "dynamic_list_item_prompt_enabled";
		case 60:
			return "dynamic_list_item_prompt_visible";
		case 64:
			return "dynamic_list_item_prompt_option_text";
		case 65:
			return "dynamic_list_item_prompt_option_enabled";
		case 66:
			return "dynamic_list_item_prompt_option_visible";
		case 67:
			return "dynamic_list_item_prompt_option_select_hash";
		case 68:
			return "dynamic_list_item_prompt_toggle_text";
		case 69:
			return "dynamic_list_item_prompt_toggle_enabled";
		case 70:
			return "dynamic_list_item_prompt_toggle_visible";
		case 71:
			return "dynamic_list_item_prompt_toggle_select_hash";
		case 72:
			return "dynamic_list_item_prompt_r3_text";
		case 73:
			return "dynamic_list_item_prompt_r3_enabled";
		case 74:
			return "dynamic_list_item_prompt_r3_visible";
		case 75:
			return "dynamic_list_item_select_r3_select_hash";
		case 76:
			return "dynamic_list_item_prompt_dpad_left_right_text";
		case 77:
			return "dynamic_list_item_prompt_dpad_left_right_enabled";
		case 78:
			return "dynamic_list_item_prompt_dpad_left_right_visible";
		case 79:
			return "dynamic_list_item_select_dpad_left_right_select_hash";
		case 80:
			return "mount_collection_index";
		case 81:
			return "dynamic_list_item_rename_prompt_enabled";
		case 82:
			return "dynamic_list_item_rename_prompt_visible";
		case 83:
			return "dynamic_list_item_stats_info_toggle_prompt_text";
		case 84:
			return "invite_unique_id";
		case 85:
			return "invite_tracked";
		case 86:
			return "invite_processed";
		case 87:
			return "invite_script_type";
		case 88:
			return "invite_gang_id";
		case 89:
			return "invite_expiration_time";
		case 90:
			return "invite_filter_type";
		case 91:
			return "invite_feed_message_id";
		case 92:
			return "invite_all_enabled";
		case 93:
			return "invite_all_visible";
		default:
			break;
	}
	return "null";
}

bool func_205(struct<2> Param0, var uParam2)
{
	if (!func_32(Param0))
	{
		return false;
	}
	func_248(uParam2);
	switch (Param0)
	{
		case 2:
			_copy_memory(uParam2, Global_1071686->f_636[Param0.f_1], 3);
			return true;
		case 3:
			_copy_memory(uParam2, Global_1071686->f_636.f_602[Param0.f_1], 3);
			return true;
		case 4:
			_copy_memory(uParam2, Global_1071686->f_636.f_2104[Param0.f_1], 3);
			return true;
		case 5:
			_copy_memory(uParam2, Global_1071686->f_636.f_12606[Param0.f_1], 3);
			return true;
		case 6:
			_copy_memory(uParam2, Global_1071686->f_636.f_12908[Param0.f_1], 3);
			return true;
		case 7:
			_copy_memory(uParam2, Global_1071686->f_636.f_15910[Param0.f_1], 3);
			return true;
		case 8:
			_copy_memory(uParam2, Global_1071686->f_636.f_16512[Param0.f_1], 3);
			return true;
		default:
			break;
	}
	return false;
}

bool func_206(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 22)
	{
		return false;
	}
	return true;
}

int func_207(int iParam0)
{
	if (!func_206(iParam0))
	{
		return 0;
	}
	return &(Global_1293346->f_3009[iParam0]);
}

int func_208(int iParam0, bool bParam1)
{
	if (!func_206(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		iVar0 = func_249(iParam0);
		if (func_250(iVar0, 0))
		{
			if (iParam0 == 0)
			{
				iVar1 = func_251(255);
			}
			else
			{
				iVar1 = func_253(iVar0, func_252(1), -1990194462, 1, 0, 0);
			}
			Global_1293346->f_3009[iParam0] = iVar1;
			return iVar1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		iVar0 = func_254(iParam0);
		if (func_250(iVar0, 0))
		{
			if (iParam0 == 0)
			{
				iVar1 = _0xdb438cc9bc6f4022();
			}
			else
			{
				iVar1 = func_253(iVar0, func_252(1), -1990194462, 1, 0, 0);
			}
			Global_1293346->f_2985[iParam0] = iVar1;
			return iVar1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

bool func_209(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_255(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_256())
	{
		return func_255(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_255(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

int func_210(bool bParam0)
{
	return func_257(bParam0, Global_1901947->f_681.f_30, Global_1901947->f_681.f_29);
}

int func_211(int iParam0, bool bParam1)
{
	return func_257(bParam1, (*Global_1291106)[iParam0]->f_8, (*Global_1291106)[iParam0]->f_7);
}

bool func_212()
{
	return (Global_1915715->f_20637 || Global_1915715->f_22504.f_1);
}

bool func_213(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_214()
{
	iVar1 = Global_1296859->f_21;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		Var2 = { *Global_1940311->f_242.f_14[iVar0] };
		iVar41 = _databinding_read_data_int(Var2.f_25);
		if (iVar41 < iVar1)
		{
			if (func_258(Var2))
			{
				func_73(Var2);
			}
			return iVar0;
		}
		iVar0++;
	}
	return func_259();
}

void func_215(var uParam0, var uParam1, char[32] cParam2, struct<22> Param10)
{
	func_260(uParam0, uParam1, cParam2, Param10);
	uParam0->f_18 = _databinding_add_data_string(*uParam0, func_204(15), Param10.f_16);
	uParam0->f_19 = _databinding_add_data_string(*uParam0, func_204(17), Param10.f_17);
	uParam0->f_20 = _databinding_add_data_hash(*uParam0, func_204(3), Param10.f_18);
	uParam0->f_21 = _databinding_add_data_hash(*uParam0, func_204(4), Param10.f_19);
	uParam0->f_22 = _databinding_add_data_hash(*uParam0, func_204(5), Param10.f_20);
	uParam0->f_23 = _databinding_add_data_hash(*uParam0, func_204(6), Param10.f_21);
}

bool func_216(var uParam0)
{
	return true;
}

int func_217(var uParam0)
{
	if (is_string_null_or_empty(uParam0->f_2))
	{
		return 0;
	}
	else if (is_string_null_or_empty(uParam0->f_3))
	{
		return 0;
	}
	else if (uParam0->f_6 == 0)
	{
		return 0;
	}
	else if (uParam0->f_7 == 0)
	{
		return 0;
	}
	if (uParam0->f_13 == 778915895)
	{
		if (Global_1896738->f_384)
		{
			uParam0->f_4 = _create_var_string(2, "NM_TI_VIEW_INVITE");
		}
		else
		{
			uParam0->f_4 = _create_var_string(2, "NM_TI_ACCEPT_INVITE");
		}
	}
	if (*uParam0 == 5)
	{
		return func_261(func_69(uParam0->f_2, 109029619), func_69(uParam0->f_3, 109029619), uParam0->f_6, uParam0->f_7, uParam0->f_15, uParam0->f_14, uParam0->f_13, uParam0->f_16, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1, uParam0->f_4, uParam0->f_21);
	}
	else if (*uParam0 == 6)
	{
		return func_262(func_69(uParam0->f_2, 109029619), func_69(uParam0->f_3, 109029619), uParam0->f_6, uParam0->f_7, uParam0->f_9, uParam0->f_10, uParam0->f_11, uParam0->f_15, uParam0->f_14, uParam0->f_13, uParam0->f_16, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1, uParam0->f_4, uParam0->f_21);
	}
	else if (*uParam0 == 1)
	{
		return func_263(func_69(uParam0->f_2, 109029619), func_69(uParam0->f_3, 109029619), uParam0->f_6, uParam0->f_7, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 3)
	{
		return func_264(func_69(uParam0->f_2, 109029619), func_69(uParam0->f_3, 109029619), uParam0->f_6, uParam0->f_7, uParam0->f_9, uParam0->f_10, uParam0->f_11, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 2)
	{
		return func_265(func_69(uParam0->f_2, 109029619), func_69(uParam0->f_3, 109029619), uParam0->f_6, uParam0->f_7, uParam0->f_8, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 4)
	{
		return func_266(func_69(uParam0->f_2, 109029619), func_69(uParam0->f_3, 109029619), uParam0->f_5, uParam0->f_6, uParam0->f_7, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 0)
	{
		return func_267(func_69(uParam0->f_2, 109029619), func_69(uParam0->f_3, 109029619), uParam0->f_6, uParam0->f_7, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	return 0;
}

int func_218()
{
	return Global_1940311->f_242.f_1185;
}

bool func_219(struct<2> Param0)
{
	return func_116(Param0) == 0;
}

int func_220(struct<2> Param0)
{
	if (&Global_1900806 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (&Global_1900806 - 1))
	{
		if (func_25(*(*Global_1900807)[iVar0], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_221(struct<2> Param0, bool bParam2)
{
	if (!func_32(Param0))
	{
		return;
	}
	if (!func_219(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_268(Param0);
	}
	func_121(Param0, 1);
	bParam2 = bParam2;
}

int func_222()
{
	return Global_1301323->f_288;
}

int func_223()
{
	return Global_1301323->f_150.f_4;
}

void func_224(struct<2> Param0, int iParam2)
{
	if (!func_32(Param0))
	{
		func_246(Global_1900736->f_1[iParam2]);
	}
	else
	{
		*Global_1900736->f_1[iParam2] = { Param0 };
	}
	func_108(Param0, 0, 1, -1);
}

void func_225(int iParam0, int iParam1)
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
			func_269((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_269(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_32(*Global_1900736->f_1[0]))
	{
		func_121(*Global_1900736->f_1[0], 3);
	}
}

bool func_226(struct<2> Param0, struct<2> Param2, bool bParam4)
{
	if (!func_32(Param0))
	{
		return false;
	}
	if (!func_32(Param2))
	{
		return true;
	}
	iVar0 = func_128(Param0);
	iVar1 = func_128(Param2);
	if (iVar1 == iVar0)
	{
		if (bParam4)
		{
			return true;
		}
	}
	if (iVar1 == 2 || iVar1 == 7)
	{
		if (bParam4 && (iVar0 == 2 || iVar0 == 7))
		{
			return true;
		}
		return false;
	}
	if (iVar0 == 2 || iVar0 == 7)
	{
		return true;
	}
	if (iVar1 == 6)
	{
		return false;
	}
	if (iVar0 == 6)
	{
		return true;
	}
	if (iVar1 == 5)
	{
		return false;
	}
	if (iVar0 == 5)
	{
		return true;
	}
	if (iVar1 == 3)
	{
		if (bParam4 && iVar0 == 3)
		{
			return true;
		}
		return false;
	}
	if (iVar0 == 3)
	{
		return true;
	}
	if (iVar1 == 4)
	{
		if (bParam4 && iVar0 == 4)
		{
			return true;
		}
		return false;
	}
	if (iVar0 == 4)
	{
		return true;
	}
	return false;
}

bool func_227(int iParam0, var uParam1, var uParam2)
{
	if (!func_270(iParam0))
	{
		return false;
	}
	if (func_271(iParam0, uParam1, &uVar0))
	{
		func_272(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

void func_228(var uParam0, int iParam1)
{
	if (Global_1196205->f_129 >= 32)
	{
		Global_1196205->f_129 = 32;
		return;
	}
	if (iParam1 >= Global_1196205->f_129)
	{
		iParam1 = -1;
	}
	if (iParam1 <= -1)
	{
		*(*Global_1196205)[Global_1196205->f_129] = { *uParam0 };
		Global_1196205->f_129++;
		return;
	}
	iVar0 = iParam1;
	iVar1 = (Global_1196205->f_129 - 1);
	Var2.f_1 = -1;
	Var2.f_1.f_1 = -1;
	while (iVar1 >= iVar0)
	{
		Var2 = { *(*Global_1196205)[iVar1] };
		*(*Global_1196205)[iVar1] = { *((*Global_1196205)[iVar1 + 1]) };
		*((*Global_1196205)[iVar1 + 1]) = { Var2 };
		iVar1 = (iVar1 - 1);
	}
	*(*Global_1196205)[iParam1] = { *uParam0 };
	Global_1196205->f_129++;
}

void func_229(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= Global_1196205->f_129)
	{
		return;
	}
	Global_1196205->f_130 = iParam0;
	Global_1196205->f_131 = Global_1196205[iParam0];
}

void func_230()
{
	if (Global_1196205->f_131 == 0)
	{
		return;
	}
	Global_1196205->f_130 = func_273(Global_1196205->f_131);
	if (Global_1196205->f_130 < 0)
	{
		Global_1196205->f_131 = 0;
	}
}

int func_231()
{
	iVar0 = Global_1296851->f_2.f_4;
	if (!func_274(iVar0))
	{
		iVar0 = _network_get_cash_balance();
	}
	return iVar0;
}

int func_232(int iParam0, int iParam1, int iParam2)
{
	return func_275(iParam0, iParam1, iParam2);
}

int func_233(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_276(bParam1, bParam2, bParam3);
	}
	if (Global_1572887->f_13 != -1)
	{
		if (iParam0 == Global_1296859->f_10)
		{
			if (!Global_1296859->f_11)
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

int func_234()
{
	iVar0 = func_277(120839576, 59806960, 1, 0, 1, 0);
	if (!func_274(iVar0))
	{
		iVar0 = _network_get_cash_balance();
	}
	return iVar0;
}

int func_235(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	iVar0 = -1;
	Var1 = { func_278(2084597891, 1, 0) };
	Var6 = { func_279(2084597891, Var1, Var1.f_4, iParam0, 1) };
	Var6.f_12 = iParam2;
	iVar0 = func_280(1702063850, &Var6, bParam3);
	if (iVar0 == -1)
	{
	}
	else
	{
		Var22.f_7 = -142743235;
		Var22.f_16 = -1;
		StringCopy(&(Var22.f_12), sParam1, 32);
		func_281(iVar0, Var22);
	}
	return iVar0;
}

void func_236()
{
	_0x748c5f51a18cb8f0(0);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_282(iVar0))
		{
			func_283(iVar0);
		}
		iVar0++;
	}
	_0x748c5f51a18cb8f0(1);
}

int func_237(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_205(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_238(int iParam0)
{
	iVar0 = -1;
	if (func_284(&Var1, iParam0))
	{
		iVar0 = ((func_285() - _0xe13634bb6baf0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_239(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return (*Global_1257541)[iParam0]->f_2;
}

bool func_240(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1777724963:
		case -1165569262:
		case -697789102:
		case -260420884:
		case -232478158:
		case 78055447:
		case 195932838:
		case 850213441:
		case 974227447:
		case 1532822440:
		case 1918154385:
			return true;
		case 1539023636:
			return iParam1;
		default:
			break;
	}
	return false;
}

int func_241(int iParam0)
{
	iVar0 = iParam0;
	while (iVar0 < Global_1071686->f_19550)
	{
		if (iVar0 + 1 < 32)
		{
			*Global_1071686->f_19550.f_1[iVar0] = { *(Global_1071686->f_19550.f_1[iVar0 + 1]) };
		}
		iVar0++;
	}
	vVar1 = -1;
	vVar1.f_1 = -1;
	if (Global_1071686->f_19550 < 32)
	{
		*Global_1071686->f_19550.f_1[Global_1071686->f_19550] = { vVar1 };
	}
	Global_1071686->f_19550 = (Global_1071686->f_19550 - 1);
	if (Global_1071686->f_19550 < 0)
	{
		Global_1071686->f_19550 = 0;
	}
	return 1;
}

int func_242(int iParam0)
{
	iVar0 = (Global_1071686->f_19550 - 1);
	vVar1 = -1;
	vVar1.f_1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1071686->f_19550.f_1[iVar0 + 1]) = { *Global_1071686->f_19550.f_1[iVar0] };
		}
		iVar0 = (iVar0 - 1);
	}
	*Global_1071686->f_19550.f_1[iParam0] = { vVar1 };
	Global_1071686->f_19550++;
	if (Global_1071686->f_19550 > 32)
	{
		Global_1071686->f_19550 = 32;
	}
	return 1;
}

int func_243(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2142074819:
			return 521;
		case -2141419899:
			return 404;
		case -2106445152:
			return 277;
		case -2106214197:
			return 102;
		case -2101264851:
			return 192;
		case -2100409704:
			return 470;
		case -2073072369:
			return 57;
		case -2069570138:
			return 25;
		case -2066272360:
			return 394;
		case -2058120606:
			return 194;
		case -2056579774:
			return 464;
		case -2043909922:
			return 338;
		case -2038424081:
			return 49;
		case -2034257789:
			return 90;
		case -2022369555:
			return 251;
		case -2021582629:
			return 110;
		case -2020023971:
			return 263;
		case -1957523409:
			return 205;
		case -1952856164:
			return 163;
		case -1949204933:
			return 261;
		case -1943367752:
			return 387;
		case -1939389836:
			return 416;
		case -1932919229:
			return 428;
		case -1925798111:
			return 41;
		case -1914141706:
			return 439;
		case -1906892166:
			return 403;
		case -1882707460:
			return 463;
		case -1861414976:
			return 380;
		case -1852605133:
			return 10;
		case -1848799275:
			return 409;
		case -1847672446:
			return 312;
		case -1842033327:
			return 504;
		case -1840704908:
			return 274;
		case -1838712533:
			return 26;
		case -1838352012:
			return 55;
		case -1835851517:
			return 54;
		case -1831552326:
			return 121;
		case -1827602683:
			return 446;
		case -1825294305:
			return 252;
		case -1824738758:
			return 262;
		case -1818850842:
			return 239;
		case -1808329564:
			return 411;
		case -1799960545:
			return 243;
		case -1764522338:
			return 308;
		case -1763509974:
			return 139;
		case -1753769127:
			return 398;
		case -1749433374:
			return 479;
		case -1749043433:
			return 524;
		case -1741667789:
			return 62;
		case -1738165526:
			return 3;
		case -1719055206:
			return 519;
		case -1718674470:
			return 23;
		case -1717960576:
			return 59;
		case -1711895055:
			return 13;
		case -1706438978:
			return 220;
		case -1705799799:
			return 421;
		case -1700452710:
			return 317;
		case -1684974589:
			return 466;
		case -1674179981:
			return 53;
		case -1673998598:
			return 527;
		case -1666278201:
			return 33;
		case -1664435783:
			return 486;
		case -1624627591:
			return 438;
		case -1612662716:
			return 198;
		case -1610966108:
			return 354;
		case -1608141409:
			return 538;
		case -1585840296:
			return 336;
		case -1582926490:
			return 144;
		case -1579419919:
			return 145;
		case -1578292898:
			return 434;
		case -1573753524:
			return 503;
		case -1558439474:
			return 286;
		case -1556041029:
			return 410;
		case -1547280108:
			return 518;
		case -1532284567:
			return 114;
		case -1530132748:
			return 296;
		case -1524512402:
			return 206;
		case -1523910291:
			return 153;
		case -1502194556:
			return 523;
		case -1462313959:
			return 462;
		case -1455998786:
			return 370;
		case -1447311849:
			return 321;
		case -1445041595:
			return 528;
		case -1442844448:
			return 465;
		case -1436021162:
			return 170;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1422877860:
			return 472;
		case -1419919497:
			return 22;
		case -1414537028:
			return 71;
		case -1405998267:
			return 103;
		case -1395855864:
			return 478;
		case -1387772214:
			return 407;
		case -1378911044:
			return 475;
		case -1369678628:
			return 487;
		case -1344601768:
			return 347;
		case -1341750998:
			return 476;
		case -1340339190:
			return 362;
		case -1339871203:
			return 532;
		case -1329135070:
			return 138;
		case -1319875891:
			return 437;
		case -1311865656:
			return 37;
		case -1296807958:
			return 352;
		case -1290997627:
			return 461;
		case -1287894233:
			return 426;
		case -1283202000:
			return 353;
		case -1282804314:
			return 255;
		case -1278074582:
			return 169;
		case -1271608261:
			return 96;
		case -1262828457:
			return 423;
		case -1257057567:
			return 21;
		case -1241340344:
			return 285;
		case -1236261996:
			return 222;
		case -1232809834:
			return 111;
		case -1230112817:
			return 168;
		case -1223121209:
			return 124;
		case -1215445344:
			return 129;
		case -1209597203:
			return 365;
		case -1206122982:
			return 154;
		case -1187950766:
			return 45;
		case -1181950077:
			return 400;
		case -1179948750:
			return 134;
		case -1170496998:
			return 46;
		case -1164215952:
			return 221;
		case -1161687045:
			return 391;
		case -1151084372:
			return 122;
		case -1145519186:
			return 98;
		case -1145153057:
			return 339;
		case -1124061431:
			return 229;
		case -1123615607:
			return 29;
		case -1120447016:
			return 443;
		case -1095341658:
			return 408;
		case -1080627546:
			return 314;
		case -1077783786:
			return 191;
		case -1063147448:
			return 149;
		case -1062490780:
			return 77;
		case -1060078174:
			return 226;
		case -1056767524:
			return 174;
		case -1053549743:
			return 56;
		case -1042021329:
			return 382;
		case -1029225159:
			return 104;
		case -1023919011:
			return 431;
		case -1014145132:
			return 273;
		case -1004266677:
			return 460;
		case -978957786:
			return 237;
		case -959357075:
			return 36;
		case -950054349:
			return 150;
		case -947815572:
			return 399;
		case -941648233:
			return 511;
		case -939420910:
			return 44;
		case -931337253:
			return 424;
		case -925071604:
			return 541;
		case -919512195:
			return 40;
		case -911126844:
			return 368;
		case -897750037:
			return 366;
		case -895307590:
			return 500;
		case -895073533:
			return 393;
		case -889906510:
			return 389;
		case -888632790:
			return 505;
		case -879507474:
			return 223;
		case -868076593:
			return 82;
		case -857964358:
			return 81;
		case -853383233:
			return 63;
		case -852602679:
			return 432;
		case -851626677:
			return 371;
		case -839820438:
			return 419;
		case -828139293:
			return 246;
		case -812641169:
			return 534;
		case -811637947:
			return 232;
		case -800891377:
			return 493;
		case -797689456:
			return 514;
		case -796902762:
			return 86;
		case -792853067:
			return 240;
		case -789397228:
			return 248;
		case -785605431:
			return 236;
		case -781631220:
			return 328;
		case -764163380:
			return 215;
		case -748969569:
			return 76;
		case -741351766:
			return 58;
		case -736853952:
			return 302;
		case -734416508:
			return 372;
		case -729679654:
			return 530;
		case -699277634:
			return 4;
		case -693828600:
			return 355;
		case -683458244:
			return 78;
		case -677920206:
			return 458;
		case -666014935:
			return 155;
		case -664512648:
			return 65;
		case -664252410:
			return 188;
		case -644722288:
			return 247;
		case -640663440:
			return 320;
		case -639037538:
			return 183;
		case -635323621:
			return 512;
		case -632127260:
			return 342;
		case -630295963:
			return 494;
		case -628542779:
			return 69;
		case -622554983:
			return 306;
		case -618620429:
			return 185;
		case -604603161:
			return 471;
		case -591815673:
			return 383;
		case -583127403:
			return 506;
		case -574190021:
			return 492;
		case -554519756:
			return 535;
		case -545450213:
			return 313;
		case -538889627:
			return 173;
		case -538880323:
			return 172;
		case -534215902:
			return 128;
		case -524787708:
			return 379;
		case -524145696:
			return 115;
		case -523522517:
			return 300;
		case -515561750:
			return 225;
		case -510945576:
			return 337;
		case -503955743:
			return 235;
		case -502473159:
			return 326;
		case -502324015:
			return 8;
		case -500245243:
			return 515;
		case -492731190:
			return 418;
		case -491981251:
			return 184;
		case -489737721:
			return 401;
		case -468693731:
			return 109;
		case -464836488:
			return 254;
		case -460024530:
			return 349;
		case -448554447:
			return 531;
		case -441204543:
			return 533;
		case -434590080:
			return 212;
		case -414883443:
			return 459;
		case -404698347:
			return 202;
		case -397760715:
			return 141;
		case -396624371:
			return 373;
		case -389056691:
			return 257;
		case -381925743:
			return 507;
		case -371827125:
			return 388;
		case -364475655:
			return 429;
		case -360036154:
			return 304;
		case -356975260:
			return 101;
		case -355531636:
			return 369;
		case -350863510:
			return 160;
		case -349064220:
			return 298;
		case -334729750:
			return 67;
		case -333135263:
			return 334;
		case -330120947:
			return 333;
		case -329176208:
			return 491;
		case -311373772:
			return 539;
		case -306246697:
			return 311;
		case -299522880:
			return 319;
		case -297483764:
			return 433;
		case -279765076:
			return 345;
		case -270094635:
			return 253;
		case -261141318:
			return 30;
		case -259123672:
			return 231;
		case -254562075:
			return 130;
		case -243260793:
			return 417;
		case -238080464:
			return 119;
		case -233743613:
			return 258;
		case -226366310:
			return 522;
		case -223469678:
			return 201;
		case -220282381:
			return 137;
		case -211583122:
			return 516;
		case -209894800:
			return 344;
		case -207792846:
			return 482;
		case -191424539:
			return 147;
		case -182889087:
			return 175;
		case -154581735:
			return 294;
		case -150493654:
			return 95;
		case -129643890:
			return 11;
		case -110352060:
			return 430;
		case -108780030:
			return 350;
		case -108307814:
			return 28;
		case -102827640:
			return 402;
		case -101740709:
			return 498;
		case -99303535:
			return 165;
		case -90486812:
			return 490;
		case -89829333:
			return 422;
		case -86199844:
			return 143;
		case -80522843:
			return 152;
		case -76237062:
			return 309;
		case -75928821:
			return 508;
		case -75024673:
			return 244;
		case -74031276:
			return 440;
		case -70727482:
			return 452;
		case -63926460:
			return 87;
		case -61411516:
			return 357;
		case -38135693:
			return 467;
		case -35658630:
			return 24;
		case -25901845:
			return 275;
		case -9438024:
			return 127;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 151;
		case 8924991:
			return 282;
		case 16844748:
			return 405;
		case 26054262:
			return 323;
		case 26245360:
			return 224;
		case 38162571:
			return 72;
		case 52706132:
			return 230;
		case 54073871:
			return 74;
		case 61537448:
			return 540;
		case 64896505:
			return 390;
		case 74872959:
			return 331;
		case 84709454:
			return 453;
		case 93964309:
			return 395;
		case 94263042:
			return 276;
		case 106479759:
			return 99;
		case 141950038:
			return 112;
		case 148595040:
			return 529;
		case 153152452:
			return 84;
		case 168171957:
			return 181;
		case 171499483:
			return 268;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 228;
		case 210001842:
			return 60;
		case 215903338:
			return 489;
		case 224551212:
			return 140;
		case 227918160:
			return 180;
		case 229371495:
			return 327;
		case 235928616:
			return 271;
		case 237155783:
			return 517;
		case 249726958:
			return 162;
		case 269047710:
			return 52;
		case 273461605:
			return 79;
		case 280705402:
			return 93;
		case 282809459:
			return 117;
		case 299694527:
			return 260;
		case 300221584:
			return 136;
		case 302205488:
			return 322;
		case 311708813:
			return 195;
		case 320943355:
			return 131;
		case 321629486:
			return 509;
		case 330026330:
			return 64;
		case 345808947:
			return 272;
		case 356365161:
			return 47;
		case 371850993:
			return 266;
		case 373691918:
			return 186;
		case 374115931:
			return 88;
		case 404823609:
			return 484;
		case 405586984:
			return 34;
		case 407136781:
			return 171;
		case 409602249:
			return 278;
		case 417081698:
			return 17;
		case 417525590:
			return 288;
		case 420709909:
			return 42;
		case 424920933:
			return 544;
		case 426191476:
			return 15;
		case 434558613:
			return 196;
		case 439465264:
			return 106;
		case 440043364:
			return 31;
		case 442317566:
			return 287;
		case 449774763:
			return 214;
		case 459290420:
			return 316;
		case 468797819:
			return 341;
		case 469053995:
			return 218;
		case 473295046:
			return 2;
		case 476714362:
			return 219;
		case 478884033:
			return 146;
		case 479419429:
			return 290;
		case 509781469:
			return 377;
		case 514932331:
			return 233;
		case 522677506:
			return 264;
		case 526003171:
			return 392;
		case 527226204:
			return 157;
		case 544152906:
			return 113;
		case 559573222:
			return 238;
		case 560154875:
			return 455;
		case 565812320:
			return 447;
		case 582380806:
			return 358;
		case 588987611:
			return 177;
		case 589380360:
			return 340;
		case 618699440:
			return 75;
		case 619839857:
			return 375;
		case 630808005:
			return 126;
		case 640520536:
			return 469;
		case 642824856:
			return 481;
		case 651395116:
			return 279;
		case 664571177:
			return 297;
		case 665676602:
			return 281;
		case 673606600:
			return 499;
		case 689024866:
			return 132;
		case 689930684:
			return 204;
		case 704802028:
			return 176;
		case 715735881:
			return 483;
		case 723021499:
			return 250;
		case 730069127:
			return 474;
		case 747514327:
			return 381;
		case 753127042:
			return 48;
		case 757752139:
			return 107;
		case 784360470:
			return 361;
		case 791041526:
			return 18;
		case 799106423:
			return 454;
		case 803929300:
			return 468;
		case 804063423:
			return 502;
		case 817925178:
			return 227;
		case 826868753:
			return 473;
		case 831940854:
			return 406;
		case 846837291:
			return 450;
		case 865557632:
			return 536;
		case 868326136:
			return 270;
		case 883901517:
			return 384;
		case 885203519:
			return 315;
		case 885378256:
			return 378;
		case 885777893:
			return 374;
		case 896725436:
			return 510;
		case 929582877:
			return 367;
		case 931649776:
			return 211;
		case 932909855:
			return 283;
		case 943561238:
			return 415;
		case 945612176:
			return 234;
		case 965467037:
			return 343;
		case 965986934:
			return 19;
		case 976539083:
			return 295;
		case 982765715:
			return 442;
		case 1010885152:
			return 7;
		case 1015669983:
			return 120;
		case 1028084603:
			return 445;
		case 1032791043:
			return 501;
		case 1050128548:
			return 269;
		case 1064154891:
			return 108;
		case 1074873669:
			return 142;
		case 1112996351:
			return 537;
		case 1126565489:
			return 485;
		case 1140218954:
			return 27;
		case 1151197909:
			return 242;
		case 1153686207:
			return 451;
		case 1157309080:
			return 513;
		case 1159471771:
			return 360;
		case 1160698568:
			return 133;
		case 1164928979:
			return 156;
		case 1166612791:
			return 330;
		case 1167397384:
			return 292;
		case 1177464213:
			return 38;
		case 1186594126:
			return 217;
		case 1193080109:
			return 182;
		case 1195508693:
			return 542;
		case 1203043430:
			return 259;
		case 1205826474:
			return 83;
		case 1207048789:
			return 167;
		case 1213993593:
			return 158;
		case 1221801385:
			return 310;
		case 1232840551:
			return 480;
		case 1238086793:
			return 346;
		case 1248935549:
			return 414;
		case 1250636944:
			return 245;
		case 1279586666:
			return 448;
		case 1280406542:
			return 441;
		case 1287917122:
			return 386;
		case 1302228510:
			return 348;
		case 1306158345:
			return 199;
		case 1321892118:
			return 356;
		case 1325325699:
			return 420;
		case 1341699707:
			return 525;
		case 1350371763:
			return 20;
		case 1350391819:
			return 73;
		case 1352699670:
			return 256;
		case 1358491857:
			return 249;
		case 1360745816:
			return 80;
		case 1362354162:
			return 496;
		case 1376646519:
			return 210;
		case 1399676951:
			return 207;
		case 1410198831:
			return 209;
		case 1421300489:
			return 413;
		case 1433244935:
			return 164;
		case 1441416901:
			return 208;
		case 1453909576:
			return 123;
		case 1466547629:
			return 118;
		case 1478132521:
			return 303;
		case 1480425906:
			return 449;
		case 1485195808:
			return 50;
		case 1485494263:
			return 100;
		case 1488286867:
			return 280;
		case 1488453464:
			return 318;
		case 1494062795:
			return 425;
		case 1497516462:
			return 5;
		case 1500064347:
			return 70;
		case 1509509592:
			return 35;
		case 1512816328:
			return 166;
		case 1517904467:
			return 203;
		case 1517951665:
			return 435;
		case 1521272922:
			return 457;
		case 1522511407:
			return 265;
		case 1549124796:
			return 325;
		case 1557082963:
			return 161;
		case 1561093093:
			return 385;
		case 1582370975:
			return 332;
		case 1583012985:
			return 289;
		case 1591451572:
			return 301;
		case 1601722481:
			return 520;
		case 1607768502:
			return 9;
		case 1609506757:
			return 105;
		case 1626481264:
			return 116;
		case 1643531967:
			return 125;
		case 1649996811:
			return 179;
		case 1660024373:
			return 148;
		case 1665756137:
			return 91;
		case 1666964801:
			return 526;
		case 1691618738:
			return 66;
		case 1698972798:
			return 351;
		case 1703398561:
			return 364;
		case 1703426636:
			return 43;
		case 1708045337:
			return 329;
		case 1713221411:
			return 135;
		case 1743048395:
			return 213;
		case 1744443559:
			return 376;
		case 1766284049:
			return 92;
		case 1774060092:
			return 543;
		case 1776302352:
			return 299;
		case 1788424349:
			return 444;
		case 1812677765:
			return 397;
		case 1822001510:
			return 197;
		case 1846061697:
			return 97;
		case 1850082804:
			return 193;
		case 1866434585:
			return 412;
		case 1867912207:
			return 68;
		case 1881028477:
			return 363;
		case 1884271742:
			return 51;
		case 1891256113:
			return 436;
		case 1908151693:
			return 335;
		case 1926308480:
			return 94;
		case 1932172605:
			return 359;
		case 1944170089:
			return 159;
		case 1947931439:
			return 216;
		case 1952610440:
			return 200;
		case 1954026328:
			return 307;
		case 1982676972:
			return 89;
		case 2008888900:
			return 178;
		case 2013720626:
			return 488;
		case 2016141805:
			return 6;
		case 2019386373:
			return 187;
		case 2024121624:
			return 190;
		case 2024383613:
			return 305;
		case 2024769126:
			return 293;
		case 2037589949:
			return 61;
		case 2048790450:
			return 497;
		case 2051822093:
			return 284;
		case 2068208444:
			return 427;
		case 2068253437:
			return 477;
		case 2077022393:
			return 291;
		case 2079292950:
			return 456;
		case 2080210939:
			return 267;
		case 2091701359:
			return 39;
		case 2103908624:
			return 396;
		case 2109952320:
			return 189;
		case 2113625508:
			return 324;
		case 2127412005:
			return 495;
		case 2127577956:
			return 241;
		case 2136753624:
			return 85;
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

bool func_244(int iParam0)
{
	iVar0 = func_286(iParam0);
	if (iVar0 < 336)
	{
		return false;
	}
	return true;
}

bool func_245(int iParam0)
{
	if (iParam0 == 1932172605)
	{
		return true;
	}
	return false;
}

void func_246(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
}

void func_247(var uParam0, int iParam1)
{
	if (Global_1196205->f_129 <= 0)
	{
		Global_1196205->f_129 = 0;
		return;
	}
	if (iParam1 >= Global_1196205->f_129)
	{
		iParam1 = 0;
	}
	if (iParam1 >= 32)
	{
		iParam1 = (Global_1196205->f_129 - 1);
	}
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	if (Global_1196205->f_129 == 1)
	{
		*uParam0 = { *(*Global_1196205)[0] };
		*(*Global_1196205)[0] = { Var0 };
		Global_1196205->f_129 = 0;
		return;
	}
	*uParam0 = { *(*Global_1196205)[iParam1] };
	Global_1196205->f_129 = (Global_1196205->f_129 - 1);
	iVar4 = (Global_1196205->f_129 - 1);
	iVar5 = iParam1;
	while (iVar5 <= iVar4)
	{
		*(*Global_1196205)[iVar5] = { *((*Global_1196205)[iVar5 + 1]) };
		*((*Global_1196205)[iVar5 + 1]) = { Var0 };
		iVar5++;
	}
}

void func_248(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

int func_249(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -697100746;
		case 7:
			return -999519443;
		case 12:
			return 128291088;
		case 11:
			return -1399517481;
		case 13:
			return 705255263;
		case 14:
			return -471215553;
		case 15:
			return 1371028520;
		case 16:
			return 1479488426;
		case 17:
			return -170363364;
		case 18:
			return -296143963;
		case 19:
			return -575193412;
		case 20:
			return 1364208910;
		case 21:
			return 1936286816;
		case 22:
			return -361115047;
		default:
			break;
	}
	return 0;
}

bool func_250(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_251(int iParam0)
{
	if (iParam0 == 255 || iParam0 == network_player_id_to_int())
	{
		return _0x32c90cdfaf40514c();
	}
	return Global_1145091[iParam0];
}

struct<4> func_252(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_287(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_289(1328661203, func_288(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_289(1328661203, func_288(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_289(1328661203, func_288(), -1591664384, bParam0);
}

int func_253(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_250(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_290(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_289(iParam0, Param1, iParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_287(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_287(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

int func_254(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1152215114;
		case 7:
			return -390042476;
		case 12:
			return -1108993414;
		case 11:
			return -657484822;
		case 13:
			return -138573168;
		case 14:
			return -1834731109;
		case 15:
			return -2024553896;
		case 16:
			return 712011765;
		case 17:
			return -494315136;
		case 18:
			return -399749454;
		case 19:
			return 1428145499;
		case 20:
			return -1318783204;
		case 21:
			return 893948884;
		case 22:
			return -187008013;
		default:
			break;
	}
	return 0;
}

bool func_255(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_256()
{
	return Global_1102219->f_3672;
}

int func_257(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_258(struct<38> Param0, var uParam38)
{
	if (!_databinding_is_data_id_valid(Param0.f_37))
	{
		return _databinding_is_data_id_valid(Param0);
	}
	return _databinding_read_data_bool(Param0.f_37);
}

int func_259()
{
	iVar4 = _databinding_read_data_int(Global_1940311->f_242.f_14[0]->f_25);
	iVar5 = _databinding_read_data_int(Global_1940311->f_242.f_14[0]->f_35);
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = _databinding_read_data_int(Global_1940311->f_242.f_14[iVar0]->f_25);
		iVar2 = _databinding_read_data_int(Global_1940311->f_242.f_14[iVar0]->f_35);
		if (iVar1 < iVar4)
		{
			iVar3 = iVar0;
			iVar4 = iVar1;
			iVar5 = iVar2;
		}
		else if (iVar1 == iVar4)
		{
			if (iVar2 < iVar5)
			{
				iVar3 = iVar0;
				iVar4 = iVar1;
				iVar5 = iVar2;
			}
		}
		iVar0++;
	}
	func_73(&(Global_1940311->f_242.f_14[iVar3]));
	return iVar3;
}

void func_260(var uParam0, var uParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, struct<16> Param10)
{
	*uParam0 = _databinding_add_data_container(uParam1, &cParam2);
	uParam0->f_1 = _databinding_add_data_bool(*uParam0, func_204(0), Param10);
	uParam0->f_2 = _databinding_add_data_bool(*uParam0, func_204(1), Param10.f_1);
	uParam0->f_3 = _databinding_add_data_hash(*uParam0, func_204(2), Param10.f_2);
	uParam0->f_4 = _databinding_add_data_hash(*uParam0, func_204(54), Param10.f_3);
	uParam0->f_5 = _databinding_add_data_hash(*uParam0, func_204(55), Param10.f_4);
	uParam0->f_7 = _databinding_add_data_hash(*uParam0, func_204(57), Param10.f_5);
	uParam0->f_6 = _databinding_add_data_hash(*uParam0, func_204(56), Param10.f_6);
	if (Param10.f_7 == 0)
	{
		Param10.f_7 = -672301300;
	}
	uParam0->f_8 = _databinding_add_data_hash(*uParam0, func_204(58), Param10.f_7);
	uParam0->f_9 = _databinding_add_data_bool(*uParam0, func_204(59), Param10.f_8);
	uParam0->f_10 = _databinding_add_data_bool(*uParam0, func_204(60), Param10.f_9);
	uParam0->f_11 = _databinding_add_data_hash(*uParam0, func_204(61), Param10.f_10);
	uParam0->f_13 = _databinding_add_data_hash(*uParam0, func_204(67), Param10.f_11);
	uParam0->f_12 = _databinding_add_data_hash(*uParam0, func_204(62), Param10.f_12);
	if (Param10.f_13 == 0)
	{
		Param10.f_13 = -672301300;
	}
	uParam0->f_14 = _databinding_add_data_hash(*uParam0, func_204(64), Param10.f_13);
	uParam0->f_15 = _databinding_add_data_bool(*uParam0, func_204(65), Param10.f_14);
	uParam0->f_16 = _databinding_add_data_bool(*uParam0, func_204(66), Param10.f_15);
}

var func_261(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14, var uParam15, var uParam16)
{
	Var0 = -2;
	Var0 = uParam8;
	Var0.f_1 = uParam9;
	Var0.f_2 = uParam10;
	Var0.f_3 = iParam12;
	Var0.f_9 = uParam4;
	Var0.f_9.f_1 = uParam5;
	Var0.f_9.f_2 = uParam6;
	Var0.f_9.f_3 = uParam7;
	Var0.f_4.f_2 = uParam15;
	Var13.f_7 = 1;
	Var13 = uParam11;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_7 = uParam16;
	uVar21 = _show_advanced_notification(&Var0, &Var13, iParam13, iParam14);
	return uVar21;
}

var func_262(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, int iParam15, int iParam16, int iParam17, var uParam18, var uParam19)
{
	Var0 = -2;
	Var0 = uParam11;
	Var0.f_1 = uParam12;
	Var0.f_2 = uParam13;
	Var0.f_3 = iParam15;
	Var0.f_9 = uParam7;
	Var0.f_9.f_1 = uParam8;
	Var0.f_9.f_2 = uParam9;
	Var0.f_9.f_3 = uParam10;
	Var0.f_4.f_2 = uParam18;
	Var13.f_9 = 1;
	Var13 = uParam14;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_6 = uParam4;
	Var13.f_7 = uParam5;
	Var13.f_8 = uParam6;
	Var13.f_9 = uParam19;
	uVar23 = _show_notification(&Var0, &Var13, iParam16, iParam17);
	return uVar23;
}

var func_263(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, int iParam12, int iParam13)
{
	Var0 = -2;
	Var0 = uParam7;
	Var0.f_1 = uParam8;
	Var0.f_2 = uParam9;
	Var0.f_3 = iParam11;
	Var0.f_4 = uParam4;
	Var0.f_4.f_1 = uParam6;
	Var0.f_4.f_2 = uParam5;
	Var13.f_7 = 1;
	Var13 = uParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_7 = 1;
	uVar21 = _show_advanced_notification(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

var func_264(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15, int iParam16)
{
	Var0 = -2;
	Var0 = uParam10;
	Var0.f_1 = uParam11;
	Var0.f_2 = uParam12;
	Var0.f_3 = iParam14;
	Var0.f_4 = uParam7;
	Var0.f_4.f_1 = uParam9;
	Var0.f_4.f_2 = uParam8;
	Var13.f_9 = 1;
	Var13 = uParam13;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_6 = uParam4;
	Var13.f_7 = uParam5;
	Var13.f_8 = uParam6;
	Var13.f_9 = 1;
	uVar23 = _show_notification(&Var0, &Var13, iParam15, iParam16);
	return uVar23;
}

var func_265(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14)
{
	Var0 = -2;
	Var0 = uParam8;
	Var0.f_1 = uParam9;
	Var0.f_2 = uParam10;
	Var0.f_3 = iParam12;
	Var0.f_4 = uParam5;
	Var0.f_4.f_1 = uParam7;
	Var0.f_4.f_2 = uParam6;
	Var13.f_7 = 1;
	Var13 = uParam11;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_6 = uParam4;
	Var13.f_7 = 1;
	uVar21 = _show_advanced_notification(&Var0, &Var13, iParam13, iParam14);
	return uVar21;
}

var func_266(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14)
{
	Var0 = -2;
	Var0 = uParam8;
	Var0.f_1 = uParam9;
	Var0.f_2 = uParam10;
	Var0.f_3 = iParam12;
	Var0.f_4 = uParam5;
	Var0.f_4.f_1 = uParam7;
	Var0.f_4.f_2 = uParam6;
	Var13.f_7 = 1;
	Var13 = uParam11;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = uParam2;
	Var13.f_4 = uParam3;
	Var13.f_5 = uParam4;
	Var13.f_7 = 1;
	uVar21 = _0x3f9fddba79117c69(&Var0, &Var13, iParam13, iParam14);
	return uVar21;
}

var func_267(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8, int iParam9, int iParam10)
{
	Var0 = -2;
	Var0 = uParam4;
	Var0.f_1 = uParam5;
	Var0.f_2 = uParam6;
	Var0.f_3 = iParam8;
	Var13.f_7 = 1;
	Var13 = uParam7;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_7 = 1;
	uVar21 = _show_advanced_notification(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

void func_268(struct<2> Param0)
{
	if (func_118(Param0) == 0)
	{
	}
	else if (!_0x01f4d242765c6b24(func_118(Param0)))
	{
		_0x99230691875fc218(func_128(Param0), func_118(Param0), Global_35);
	}
}

void func_269(int iParam0, int iParam1)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { *Global_1900736->f_1[iParam0] };
	*Global_1900736->f_1[iParam0] = { *Global_1900736->f_1[iParam1] };
	*Global_1900736->f_1[iParam1] = { Var0 };
}

bool func_270(int iParam0)
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

bool func_271(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_291(iParam0);
	uParam2->f_4 = uParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_272(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	_datafile_get_int(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_292(iParam0, uParam2->f_1);
	uParam1->f_2 = -2140901307;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_2 = iVar0;
	uParam1->f_2 = -2140901307;
	_datafile_get_string(&(uParam2->f_9), uParam1);
	uParam1->f_2 = 1292053410;
	_datafile_get_string(&(uParam2->f_17), uParam1);
	if (*uParam2 == 3)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_293(iVar0);
		}
	}
	else if (*uParam2 == 4)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = iVar0;
		}
	}
	else if (*uParam2 == 5)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_294(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_295(iVar0);
		}
		uParam1->f_2 = 162343104;
		_datafile_get_int(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_296(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		_datafile_get_int(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_7 = func_297(iVar0);
	uParam1->f_2 = 1060782978;
	_datafile_get_hash(&(uParam2->f_8), uParam1);
	uParam1->f_2 = 162343104;
	_datafile_get_int(&(uParam2->f_6), uParam1);
	uParam1->f_2 = -733480474;
	_datafile_get_int(&(uParam2->f_25), uParam1);
	uParam1->f_2 = 492825771;
	_datafile_get_int(&(uParam2->f_26), uParam1);
	uParam1->f_2 = -839279581;
	_datafile_get_int(&(uParam2->f_27), uParam1);
	uParam1->f_2 = -640941103;
	_datafile_get_int(&(uParam2->f_28), uParam1);
	iVar0 = 0;
	uParam1->f_2 = -2025968302;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_29 = iVar0;
	iVar0 = 0;
	uParam1->f_2 = -1829781569;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_30 = iVar0;
	iVar0 = 0;
	uParam1->f_2 = -1999176766;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_31 = iVar0;
	iVar0 = 0;
	uParam1->f_2 = -739728609;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_32 = iVar0;
}

int func_273(int iParam0)
{
	if (Global_1196205->f_129 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1196205->f_129)
	{
		if (Global_1196205[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_274(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_177() == 0)
	{
		return func_298(iParam0);
	}
	return iParam0 <= func_299();
}

int func_275(int iParam0, int iParam1, int iParam2)
{
	if (Global_1248240->f_8903.f_97 >= 10)
	{
		return -1;
	}
	if (iParam0 == 1393257577)
	{
		iVar0 = Global_1248240->f_8903.f_99;
		iVar1 = Global_1248240->f_8903.f_97;
		while (iVar1 > 0)
		{
			iVar0 = (iVar0 - 1);
			if (iVar0 < 0)
			{
				iVar0 = 9;
			}
			if (&Global_1248240->f_8903.f_16[iVar0] == iParam0)
			{
				return -1;
			}
			iVar1 = (iVar1 - 1);
		}
	}
	iVar2 = Global_1248240->f_8903.f_99;
	Global_1248240->f_8903.f_16[iVar2] = iParam0;
	Global_1248240->f_8903.f_16[iVar2]->f_5 = iParam2;
	Global_1248240->f_8903.f_16[iVar2]->f_6 = iParam1;
	Global_1248240->f_8903.f_97++;
	Global_1248240->f_8903.f_99 = (Global_1248240->f_8903.f_99 + 1 % 10);
	return iVar2;
}

int func_276(bool bParam0, bool bParam1, bool bParam2)
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

int func_277(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if ((bParam4 && iParam1 == -915411861) && func_300(iParam0, 59806960))
	{
		iParam1 = 59806960;
	}
	if (func_301(iParam0))
	{
		return func_303(func_302(iParam0, 0), iParam1, bParam3, 1);
	}
	if (!func_304(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32] == 2084597891 || &Var0[iVar32] == 773203532)
		{
			if (iParam5 != 0 && &Var0[iVar32] != iParam5)
			{
			}
			else
			{
				return Var0[iVar32]->f_1;
				Jump @204; //curOff = 188
				if (&Var0[iVar32] == 0)
				{
				}
				else
				{
					iVar32++;
				}
				if (!bParam3)
				{
				}
				return 0;
			}
		}
	}
}

struct<5> func_278(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_252(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_305(iParam0);
	switch (iVar5)
	{
		case -1037537535:
			Var0 = { func_289(889965687, Var0, 1034665895, bParam1) };
			Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			break;
		case -427144552:
			Var0 = { func_306(bParam1) };
			if (bParam2 && func_307(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_308(iParam0, &Var0, 1728382685, 0, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_308(iParam0, &Var0, -649335959, 0, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_309(iParam0, &Var6, 1728382685))
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
			Var0 = { func_310(bParam1) };
			switch (func_311(iParam0))
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
			if (func_312(iParam0, -1823706425))
			{
				Var0 = { func_289(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_312(iParam0, -1483207246))
			{
				Var0 = { func_289(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1911121386))
			{
				Var0 = { func_289(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_312(iParam0, -1653629781))
			{
				Var0 = { func_289(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_313(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_312(iParam0, -1653629781))
			{
				Var0 = { func_289(1384535894, Var0, 1784584921, bParam1) };
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

struct<16> func_279(int iParam0, struct<4> Param1, int iParam5, int iParam6, bool bParam7)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_4 = { Param1 };
	Var0 = { func_289(iParam0, Var0.f_4, iParam5, 1) };
	Var0.f_8 = iParam0;
	Var0.f_9 = iParam6;
	Var0.f_11 = iParam5;
	if (bParam7)
	{
		Var0.f_15 = func_290(iParam0, -455129387);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_288() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_280(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_314(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_316(func_315(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_317(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_281(int iParam0, struct<17> Param1)
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

bool func_282(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

void func_283(int iParam0)
{
	_0x748c5f51a18cb8f0(0);
	if (!func_282(iParam0))
	{
		return;
	}
	func_318(iParam0, 0);
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (func_319(iVar0))
		{
			if (func_321(func_320(iVar0, 1, 1)) == iParam0)
			{
				func_322(iVar0, 0);
				func_323(iVar0, 0, 350);
			}
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 17)
	{
		if (func_324(iVar1))
		{
			if (func_325(iVar1) == iParam0)
			{
				func_326(iVar1, 0);
			}
		}
		iVar1++;
	}
	_0x748c5f51a18cb8f0(1);
}

bool func_284(var uParam0, int iParam1)
{
	*uParam0 = Global_1257541->f_8863;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (_0x603ac35fd4602c76(*uParam0) && _datafile_get_data_node_index(&(uParam0->f_1), uParam0));
}

int func_285()
{
	iVar0 = 0;
	vVar1.x = Global_1257541->f_8863;
	vVar1.f_2 = -1041770777;
	if (_datafile_get_data_node_index(&(vVar1.f_1), &vVar1))
	{
		iVar0 = _datafile_get_num_children(vVar1.x, vVar1.y);
	}
	return iVar0;
}

int func_286(int iParam0)
{
	return func_327(iParam0) + 30;
}

int func_287(bool bParam0)
{
	if (func_177() == -1)
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

struct<4> func_288()
{
	return Var0;
}

struct<4> func_289(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_250(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_287(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_290(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

int func_291(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = -1649591222;
			break;
		case -3:
			iVar0 = 1300413597;
			break;
		case 1:
			iVar0 = -1841318328;
			break;
		case -2:
			iVar0 = 1293082345;
			break;
		case 2:
			iVar0 = -1599460565;
			break;
		case 3:
			iVar0 = 1610555441;
			break;
		case 4:
			iVar0 = 2080488347;
			break;
		case 5:
			iVar0 = 1107336882;
			break;
		case 6:
			iVar0 = -1307562954;
			break;
		case 7:
			iVar0 = 1198585370;
			break;
		case 8:
			iVar0 = 1753821005;
			break;
		case 9:
			iVar0 = -1480791665;
			break;
		case 10:
			iVar0 = 1894568478;
			break;
		case 11:
			iVar0 = 1923799069;
			break;
		case 12:
			iVar0 = -605765767;
			break;
		case 13:
			iVar0 = 1252941330;
			break;
		case 14:
			iVar0 = -1930354636;
			break;
		case 15:
			iVar0 = 1332629624;
			break;
		case 16:
			iVar0 = 1746212499;
			break;
		case 17:
			iVar0 = 1859328971;
			break;
		case 18:
			iVar0 = 1151893103;
			break;
		case 19:
			iVar0 = -312924468;
			break;
	}
	return iVar0;
}

int func_292(int iParam0, var uParam1)
{
	if (func_328(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_293(int iParam0)
{
	switch (iParam0)
	{
		case 1336837986:
			return 0;
		case 2124631622:
			return 1;
		case -66250361:
			return 2;
		case 1443764480:
			return 3;
		case -668110249:
			return 4;
		case -1381389849:
			return 5;
		case 536699577:
			return 6;
		case 541147288:
			return 7;
		case 377122918:
			return 8;
		case 1158195437:
			return 9;
		case -1261475678:
			return 10;
		case -621956193:
			return 11;
		case 1081776803:
			return 12;
		case -218697175:
			return 13;
		case -867762478:
			return 14;
		case 602097925:
			return 15;
		case 1724417419:
			return 16;
		case -728200180:
			return 17;
		case 1404415665:
			return 18;
		case 339077182:
			return 20;
		case 650120418:
			return 21;
		case 1695693301:
			return 28;
		case -1809176396:
			return 19;
		case 349772825:
			return 22;
		case 1657045547:
			return 23;
		case -590482787:
			return 24;
		case -1711308722:
			return 25;
		case -409129282:
			return 26;
		case -1790985606:
			return 27;
		case 1518877519:
			return 30;
		default:
			break;
	}
	return -1;
}

int func_294(int iParam0)
{
	switch (iParam0)
	{
		case -747096482:
			return 0;
		case 390152599:
			return 1;
		case 348001928:
			return 2;
		case 687137831:
			return 3;
		case 1221273613:
			return 4;
		case -669486032:
			return 5;
		case -1044132584:
			return 6;
		default:
			break;
	}
	return -1;
}

int func_295(int iParam0)
{
	switch (iParam0)
	{
		case 1697883736:
			return 0;
		case 1927192818:
			return 1;
		case -1363591469:
			return 2;
		case 1635448909:
			return 3;
		case -604494871:
			return 4;
		case -993281498:
			return 5;
		case -1871525158:
			return 6;
		case -596286663:
			return 15;
		case 923956646:
			return 16;
		case 1459450644:
			return 17;
		case -2071675432:
			return 18;
		case -552339597:
			return 8;
		case 2144670272:
			return 10;
		case 996459079:
			return 9;
		case 1996177174:
			return 11;
		case -1702168032:
			return 12;
		case -27117790:
			return 13;
		case 1653867545:
			return 14;
		case -142235487:
			return 7;
		default:
			break;
	}
	return -1;
}

int func_296(int iParam0)
{
	switch (iParam0)
	{
		case 2049341823:
			return 0;
		case 1655635003:
			return 1;
		case -435635781:
			return 2;
		case 2006131499:
			return 3;
		case -1641798436:
			return 4;
		case 352400957:
			return 5;
		case 1211286129:
			return 6;
		case 787592898:
			return 7;
		case -568832219:
			return 8;
		case -1103026985:
			return 9;
		case 1039801657:
			return 10;
		default:
			break;
	}
	return 0;
}

int func_297(int iParam0)
{
	switch (iParam0)
	{
		case 987444055:
			return -1;
		case 1330140418:
			return 0;
		case -640677282:
			return 1;
		case -1950303839:
			return 2;
		case 1322114923:
			return 3;
		case -525004462:
			return 4;
		case 1419735597:
			return 5;
		case 1004744465:
			return 6;
		case 672178273:
			return 7;
		case 1777227915:
			return 8;
		case 408825843:
			return 9;
		case -42959138:
			return 10;
		case 64621749:
			return 11;
		case -1346830927:
			return 12;
		case -218234180:
			return 13;
		case 751663875:
			return 14;
		case 1766283257:
			return 15;
		case -269943670:
			return 16;
		case 522313648:
			return 17;
		case 1976336482:
			return 18;
		case -713504854:
			return 19;
		case 753957709:
			return 20;
		case 1054483531:
			return 21;
		case 547199896:
			return 22;
		default:
			break;
	}
	return -1;
}

bool func_298(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	return _network_is_money_balance_not_less_than(iParam0, 0);
}

int func_299()
{
	if (func_177() == 0)
	{
		return _network_get_cash_balance();
	}
	return _money_get_cash_balance();
}

bool func_300(int iParam0, int iParam1)
{
	if (!func_250(iParam0, 0))
	{
		return false;
	}
	if (func_301(iParam0))
	{
		return func_329(func_302(iParam0, 0), iParam1, 0);
	}
	return _0xdee7b3c76ed664be(iParam0, iParam1) > 0;
}

bool func_301(int iParam0)
{
	if (func_330(iParam0, 75135761))
	{
		return true;
	}
	return false;
}

int func_302(int iParam0, bool bParam1)
{
	if (!func_250(iParam0, 0))
	{
		return func_332(func_331(iParam0), bParam1);
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

int func_303(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_333(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam2)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if ((&Var0[iVar32] == 2084597891 || &Var0[iVar32] == 773203532) || &Var0[iVar32] == -1295114026)
		{
			return Var0[iVar32]->f_1;
		}
		else if (&Var0[iVar32] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam2)
	{
	}
	return 0;
}

bool func_304(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_250(iParam0, 0))
	{
		return false;
	}
	*iParam3 = _0xdee7b3c76ed664be(iParam0, iParam1);
	if (*iParam3 == 0)
	{
		if (!bParam5)
		{
		}
		return false;
	}
	if (!bParam5)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!_0xad73b614df26cf8a(iParam0, iParam1, iVar0, (*uParam2)[iVar0]))
		{
			Jump @113; //curOff = 101
		}
		else if (!bParam5)
		{
		}
		iVar0++;
	}
	if (bParam4)
	{
		func_334(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

int func_305(int iParam0)
{
	if (!func_250(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_306(bool bParam0)
{
	iVar0 = func_287(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_4)))
		{
			Global_1293346->f_4 = { func_289(923904168, func_252(bParam0), -740156546, bParam0) };
		}
		return Global_1293346->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_16)))
		{
			Global_1293346->f_16 = { func_289(923904168, func_252(bParam0), -740156546, 0) };
		}
		return Global_1293346->f_16;
	}
	return func_289(923904168, func_252(bParam0), -740156546, 0);
}

bool func_307(int iParam0, bool bParam1)
{
	if (func_311(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_335();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_308(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_253(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

bool func_309(int iParam0, var uParam1, int iParam2)
{
	if (func_336(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_310(bool bParam0)
{
	iVar0 = func_287(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_8)))
		{
			Global_1293346->f_8 = { func_289(271701509, func_252(bParam0), 12999093, 0) };
		}
		return Global_1293346->f_8;
	}
	return func_289(271701509, func_252(bParam0), 12999093, 0);
}

int func_311(int iParam0)
{
	if (!func_250(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_312(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_311(iParam0);
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
			if (func_337(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_313(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_338(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

bool func_314(int iParam0, var uParam1)
{
	uVar0 = _0x6c9f12700bce69f4(iParam0, uParam1);
	if (iParam0 == 1702063850)
	{
		if ((func_339(uParam1->f_8, iParam0, uVar0, 2048) || func_339(uParam1->f_8, iParam0, uVar0, 32768)) || func_339(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_339(uParam1->f_8, iParam0, uVar0, 4) || func_339(uParam1->f_8, iParam0, uVar0, 256)) || func_339(uParam1->f_8, iParam0, uVar0, 65536)) || func_339(uParam1->f_8, iParam0, uVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -1406934746)
	{
		if (((func_339(uParam1->f_8, iParam0, uVar0, 1) || func_339(uParam1->f_8, iParam0, uVar0, 8)) || func_339(uParam1->f_8, iParam0, uVar0, 65536)) || func_339(uParam1->f_8, iParam0, uVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -1318406457)
	{
		if (((func_339(uParam1->f_8, iParam0, uVar0, 1) || func_339(uParam1->f_8, iParam0, uVar0, 16)) || func_339(uParam1->f_8, iParam0, uVar0, 2)) || func_339(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_339(uParam1->f_8, iParam0, uVar0, 8) || func_339(uParam1->f_8, iParam0, uVar0, 4096)) || func_339(uParam1->f_8, iParam0, uVar0, 256)) || func_339(uParam1->f_8, iParam0, uVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_315(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 16, uParam2, 0);
}

int func_316(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (_cashinventory_transaction_checkout(iParam1))
		{
			func_340(iParam1, 1, 0, 0);
			return iParam1;
		}
		_cashinventory_transaction_delete(iParam1);
	}
	else if (_cashinventory_transaction_get_num_of_items(iParam1) == 0)
	{
		_cashinventory_transaction_delete(iParam1);
	}
	func_340(iParam1, 2, 0, 0);
	return -1;
}

int func_317(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_340(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

void func_318(int iParam0, bool bParam1)
{
	if (!func_282(iParam0))
	{
		return;
	}
	if (func_341(iParam0, 2) && !bParam1)
	{
		return;
	}
	if (bParam1)
	{
		func_342(iParam0, 1);
	}
	else
	{
		func_343(iParam0, 1);
	}
	func_344(iParam0, bParam1);
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (func_325(iVar0) == iParam0)
		{
			func_326(iVar0, 0);
		}
		iVar0++;
	}
}

bool func_319(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_320(int iParam0, bool bParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 81:
			if (func_345(iParam0))
			{
				return 305496830;
			}
			else
			{
				return -1482428221;
			}
			break;
		case 111:
			if (func_345(iParam0))
			{
				return -1323821455;
			}
			else
			{
				return -1994249944;
			}
			break;
		case 5:
			if (func_177() != -1 && func_346() == 1339372314)
			{
				return 1339372314;
			}
			else
			{
				return 1559741032;
			}
			break;
		case 66:
			return 60667583;
		case 83:
			return 1758133584;
		case 26:
			return -577559008;
		case 40:
			if (!bParam1 || func_177() != -1)
			{
				return 1624541293;
			}
			if (func_347(44))
			{
				return 1624541293;
			}
			else
			{
				return 1716860278;
			}
			break;
		case 98:
			if (func_177() != -1)
			{
				return 1178102426;
			}
			else
			{
				return 1637569166;
			}
			break;
		case 70:
			return -867798278;
		case 74:
			return 1543937523;
		case 99:
			return 1030875135;
		case 101:
			return -201437056;
		case 62:
			return 794246846;
		case 3:
			return -968357677;
		case 33:
			return 728480338;
		case 87:
			if (func_177() != -1)
			{
				return 1178102426;
			}
			else
			{
				return 725489698;
			}
			break;
		case 37:
			return 183652754;
		case 60:
			if (func_177() != -1)
			{
				return -1147969487;
			}
			else
			{
				return 2056744450;
			}
			break;
		case 135:
			return 963280223;
		case 127:
			return -256309418;
		case 131:
			return 1666986024;
		case 121:
			return 251328732;
		case 136:
			if (func_177() != -1)
			{
				return -877373104;
			}
			if (!bParam1)
			{
				return 1024208566;
			}
			if (func_347(44))
			{
				return 1024208566;
			}
			else
			{
				return 1640255731;
			}
			break;
		case 22:
			return 965626876;
		case 39:
			return -497792649;
		case 4:
		case 9:
		case 45:
		case 63:
		case 76:
		case 84:
		case 104:
			break;
		case 116:
			return -1990305778;
	}
	if (bParam2)
	{
		iVar0 = func_348(iParam0);
		if (iVar0 != -1)
		{
			return func_349(iVar0, bParam1);
		}
	}
	return 0;
}

int func_321(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2126166785:
			return -1;
		case -2119728378:
		case -1482428221:
		case -1391142299:
		case -867798278:
		case 183652754:
		case 305496830:
		case 725489698:
		case 1178102426:
		case 1543937523:
		case 1637569166:
		case 1758133584:
		case 2056744450:
			return 1;
		case -2137625828:
		case -1994249944:
		case -1323821455:
		case -968357677:
		case -201437056:
		case 493546894:
		case 728480338:
		case 1030875135:
		case 1559741032:
		case 1608357655:
			return 2;
		case -1147969487:
			return 0;
		case 60667583:
		case 537788226:
		case 794246846:
			return 5;
		case -1990305778:
		case -1738342532:
		case -1679988168:
		case -1308265478:
		case -650528936:
		case -577559008:
		case -497792649:
		case 139139039:
		case 965626876:
		case 1039226266:
		case 1624541293:
		case 1716860278:
			return 3;
		case -1618764825:
		case -877373104:
		case -256309418:
		case 251328732:
		case 963280223:
		case 1024208566:
		case 1640255731:
		case 1666986024:
			return 4;
	}
	return -1;
}

void func_322(int iParam0, bool bParam1)
{
	if (!func_319(iParam0))
	{
		return;
	}
	bVar0 = func_350(iParam0, 67108864);
	if (bParam1)
	{
		if (!bVar0)
		{
			func_352(iParam0, func_351());
			func_353(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_354(iParam0, 67108864);
		func_352(iParam0, -15);
	}
	func_355(iParam0);
}

void func_323(int iParam0, bool bParam1, int iParam2)
{
	if (!func_319(iParam0))
	{
		return;
	}
	if (func_356(iParam0) && !bParam1)
	{
		return;
	}
	if (_does_volume_exist((*Global_1887339)[iParam0]->f_6))
	{
		iVar0 = (*Global_1887339)[iParam0]->f_6;
	}
	else
	{
		iVar0 = func_357(iParam0);
	}
	bVar1 = func_350(iParam0, 33554432);
	if (bParam1)
	{
		iVar2 = func_358(iParam0);
		if (iParam2 > iVar2)
		{
			func_359(iParam0, func_351());
			func_360(iParam0, iParam2);
		}
		if (!bVar1)
		{
			func_353(iParam0, 33554432);
			if (_does_volume_exist(iVar0))
			{
				if (iParam0 == 40)
				{
					iVar3 = 0;
				}
				else
				{
					iVar3 = 1;
				}
				_0xf2a2177ac848b3a8(iVar0, 0, iVar3);
			}
		}
	}
	else if (bVar1)
	{
		func_354(iParam0, 33554432);
		func_359(iParam0, -15);
		if (_does_volume_exist(iVar0))
		{
			_0xf2a2177ac848b3a8(iVar0, 1, 1);
		}
	}
	func_361(iParam0);
}

bool func_324(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

int func_325(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 2:
			return 2;
		case 11:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 3:
			return 1;
		case 4:
			return 3;
		case 12:
			return 3;
		case 1:
			return 3;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 5;
		case 13:
			return 4;
		case 14:
			return 4;
		case 15:
			return 4;
		case 16:
			return 4;
		default:
			break;
	}
	return -1;
}

void func_326(int iParam0, bool bParam1)
{
	if (!func_324(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_362(iParam0, 1);
	}
	else
	{
		if (func_363(iParam0))
		{
			return;
		}
		func_364(iParam0, 1);
	}
	func_365(iParam0, bParam1);
}

int func_327(int iParam0)
{
	return iParam0 * 31;
}

bool func_328(int iParam0, var uParam1, var uParam2)
{
	if (func_366(iParam0, uParam1, &uVar0))
	{
		func_367(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_329(int iParam0, int iParam1, bool bParam2)
{
	if (!func_368(iParam0))
	{
		return false;
	}
	if (_0xf540239f9937033b(iParam0, iParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_369(iParam0, iParam1);
	}
	return true;
}

int func_330(int iParam0, int iParam1)
{
	if (!func_250(iParam0, 0))
	{
		return func_370(func_331(iParam0), iParam1);
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

int func_331(int iParam0)
{
	return iParam0;
}

int func_332(int iParam0, bool bParam1)
{
	if (!func_371(iParam0, 2))
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

bool func_333(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_368(iParam0))
	{
		return false;
	}
	*iParam3 = _0xf540239f9937033b(iParam0, iParam1);
	if (*iParam3 == 0)
	{
		if (!bParam4)
		{
		}
		return false;
	}
	if (!bParam4)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!_0xf27f01bbf5acd3f3(iParam0, iParam1, iVar0, (*uParam2)[iVar0]))
		{
			Jump @112; //curOff = 100
		}
		else if (!bParam4)
		{
		}
		iVar0++;
	}
	if (bParam5)
	{
		func_372(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

void func_334(int iParam0, int iParam1, var uParam2, int iParam3)
{
	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!_item_database_get_item_price_modifiers(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		fVar21[iVar0] = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = &Var7.f_1[iVar1];
		iVar4 = _item_database_get_number_of_modified_prices(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (_item_database_get_modified_price(uVar6, iVar2) != iParam1)
			{
			}
			else
			{
				iVar5 = _item_database_get_number_of_modifiers(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!_item_database_fillout_modifier(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if (uParam2[iVar0] == Var19)
							{
								fVar21[iVar0] = (&fVar21[iVar0] + (Var19.f_1 - 1f));
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (&fVar21[iVar0] != 1f && (*uParam2)[iVar0]->f_1 > 0)
		{
			if (uParam2[iVar0] == 773203532)
			{
				(*uParam2)[iVar0]->f_1 = (((100 * (*uParam2)[iVar0]->f_1) * round((&fVar21[iVar0] * 100f))) / 1000000) * 100;
			}
			else
			{
				(*uParam2)[iVar0]->f_1 = (((100 * (*uParam2)[iVar0]->f_1) * round((&fVar21[iVar0] * 100f))) / 10000);
			}
			if ((*uParam2)[iVar0]->f_1 == 0 && func_311(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_335()
{
	return (func_373(-1185145312, 0, 0, 0) > 0 && func_374(func_289(889965687, func_252(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

bool func_336(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_287(0);
	*uParam1 = { func_289(iParam0, func_306(0), iParam3, 0) };
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

bool func_337(int iParam0, int iParam1, int iParam2)
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

bool func_338(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_287(bParam2);
	}
	if (!_0x9700e8efc4ab9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

int func_339(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (func_36(uParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_340(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_375(iParam0, iParam1, iParam2, iParam3);
}

bool func_341(int iParam0, int iParam1)
{
	if (!func_282(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_13 == -1)
	{
		return (Global_39.f_190[iParam0]->f_5 && iParam1) != 0;
	}
	return (Global_1071686->f_21325[iParam0]->f_5 && iParam1) != 0;
}

void func_342(int iParam0, int iParam1)
{
	if (!func_282(iParam0))
	{
		return;
	}
	if (!func_341(iParam0, iParam1))
	{
	}
	if (Global_1572887->f_13 == -1)
	{
		Global_39.f_190[iParam0]->f_5 = (Global_39.f_190[iParam0]->f_5 || iParam1);
		return;
	}
	Global_1071686->f_21325[iParam0]->f_5 = (Global_1071686->f_21325[iParam0]->f_5 || iParam1);
}

void func_343(int iParam0, int iParam1)
{
	if (!func_282(iParam0))
	{
		return;
	}
	if (Global_1572887->f_13 == -1)
	{
		Global_39.f_190[iParam0]->f_5 = (Global_39.f_190[iParam0]->f_5 - (Global_39.f_190[iParam0]->f_5 && iParam1));
		return;
	}
	Global_1071686->f_21325[iParam0]->f_5 = (Global_1071686->f_21325[iParam0]->f_5 - (Global_1071686->f_21325[iParam0]->f_5 && iParam1));
}

void func_344(int iParam0, bool bParam1)
{
	if (!func_282(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_377(func_376(iParam0));
	}
	else
	{
		func_378(func_376(iParam0));
	}
}

bool func_345(int iParam0)
{
	if (!func_319(iParam0))
	{
		return false;
	}
	return func_350(iParam0, 33554432);
}

int func_346()
{
	return Global_1939161->f_26;
}

bool func_347(int iParam0)
{
	if (!func_379(iParam0))
	{
		return false;
	}
	return func_380(iParam0);
}

int func_348(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 30)
	{
		return 1;
	}
	else if (iParam0 <= 34)
	{
		return 2;
	}
	else if (iParam0 <= 38)
	{
		return 3;
	}
	else if (iParam0 <= 41)
	{
		return 4;
	}
	else if (iParam0 <= 52)
	{
		return 7;
	}
	else if (iParam0 <= 61)
	{
		return 6;
	}
	else if (iParam0 <= 66)
	{
		return 8;
	}
	else if (iParam0 <= 81)
	{
		return 9;
	}
	else if (iParam0 <= 98)
	{
		return 10;
	}
	else if (iParam0 <= 112)
	{
		return 11;
	}
	else if (iParam0 <= 119)
	{
		return 12;
	}
	else if (iParam0 <= 121)
	{
		return 13;
	}
	else if (iParam0 <= 126)
	{
		return 14;
	}
	else if (iParam0 <= 134)
	{
		return 15;
	}
	else if (iParam0 <= 138)
	{
		return 16;
	}
	return -1;
}

int func_349(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return -2137625828;
		case 1:
			return 1039226266;
		case 2:
			return 493546894;
		case 3:
			return -2119728378;
		case 4:
			if (!bParam1 || func_177() != -1)
			{
				return -1308265478;
			}
			if (func_347(44))
			{
				return -1308265478;
			}
			else
			{
				return -1738342532;
			}
			break;
		case 5:
			return -1147969487;
		case 6:
			return -1147969487;
		case 7:
			return -1147969487;
		case 8:
			return 537788226;
		case 9:
			return -1391142299;
		case 10:
			return 1178102426;
		case 11:
			return 1608357655;
		case 12:
			if (!bParam1 || func_177() != -1)
			{
				return -650528936;
			}
			if (func_347(44))
			{
				return -650528936;
			}
			else
			{
				return 139139039;
			}
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			if (!bParam1 || func_177() != -1)
			{
				return -877373104;
			}
			if (func_347(44))
			{
				return -877373104;
			}
			else
			{
				return -1618764825;
			}
			break;
	}
	return 0;
}

bool func_350(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		return (Global_8123[iParam0] && iParam1) != 0;
	}
	return (Global_1071686->f_19674[iParam0] && iParam1) != 0;
}

int func_351()
{
	return &Global_1902818;
}

void func_352(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		Global_8123[iParam0]->f_2 = iParam1;
		return;
	}
	Global_1071686->f_19674[iParam0]->f_2 = iParam1;
}

void func_353(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		Global_8123[iParam0] = (Global_8123[iParam0] || iParam1);
	}
	else
	{
		Global_1071686->f_19674[iParam0] = (Global_1071686->f_19674[iParam0] || iParam1);
	}
}

void func_354(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		Global_8123[iParam0] = (&Global_8123[iParam0] - (Global_8123[iParam0] && iParam1));
		return;
	}
	Global_1071686->f_19674[iParam0] = (&Global_1071686->f_19674[iParam0] - (Global_1071686->f_19674[iParam0] && iParam1));
}

void func_355(int iParam0)
{
	if (!func_319(iParam0))
	{
		return;
	}
	if (func_381(iParam0))
	{
		func_382(iParam0);
	}
	else
	{
		func_383(iParam0);
	}
}

bool func_356(int iParam0)
{
	if (!func_319(iParam0))
	{
		return false;
	}
	return func_350(iParam0, 16777216);
}

int func_357(int iParam0)
{
	if (!func_319(iParam0))
	{
		return 0;
	}
	return (*Global_1887339)[iParam0]->f_4;
}

int func_358(int iParam0)
{
	if (!func_319(iParam0))
	{
		return 0;
	}
	iVar0 = func_384(iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	iVar1 = func_386(func_385(iParam0));
	iVar2 = (iVar0 - iVar1);
	if (iVar2 < 0)
	{
		iVar2 = 0;
	}
	return iVar2;
}

void func_359(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		Global_8123[iParam0]->f_1 = iParam1;
		return;
	}
	Global_1071686->f_19674[iParam0]->f_1 = iParam1;
}

void func_360(int iParam0, int iParam1)
{
	if (!func_319(iParam0))
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	Global_8123[iParam0]->f_3 = iParam1;
}

void func_361(int iParam0)
{
	if (!func_319(iParam0))
	{
		return;
	}
	if (func_345(iParam0) && func_387(iParam0))
	{
		func_377(func_388(iParam0, 0));
	}
	else
	{
		func_378(func_388(iParam0, 0));
	}
}

void func_362(int iParam0, int iParam1)
{
	if (!func_324(iParam0))
	{
		return;
	}
	if (!func_389(iParam0, iParam1))
	{
	}
	if (Global_1572887->f_13 == -1)
	{
		Global_39.f_263[iParam0] = (Global_39.f_263[iParam0] || iParam1);
		return;
	}
	Global_1071686->f_21398[iParam0] = (Global_1071686->f_21398[iParam0] || iParam1);
}

bool func_363(int iParam0)
{
	if (!func_324(iParam0))
	{
		return false;
	}
	return func_389(iParam0, 2);
}

void func_364(int iParam0, int iParam1)
{
	if (!func_324(iParam0))
	{
		return;
	}
	if (Global_1572887->f_13 == -1)
	{
		Global_39.f_263[iParam0] = (&Global_39.f_263[iParam0] - (Global_39.f_263[iParam0] && iParam1));
		return;
	}
	Global_1071686->f_21398[iParam0] = (&Global_1071686->f_21398[iParam0] - (Global_1071686->f_21398[iParam0] && iParam1));
}

void func_365(int iParam0, bool bParam1)
{
	if (!func_324(iParam0))
	{
		return;
	}
	if (iParam0 == 8)
	{
		return;
	}
	iVar0 = func_390(iParam0);
	if (bParam1)
	{
		func_377(iVar0);
	}
	else
	{
		func_378(iVar0);
	}
}

bool func_366(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_291(iParam0);
	uParam2->f_4 = uParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_367(var uParam0, int iParam1, var uParam2)
{
	*uParam2 = iParam1;
	uParam0->f_2 = -611386243;
	_datafile_get_int(&(uParam2->f_1), uParam0);
	uParam0->f_2 = -2140901307;
	if (_datafile_get_hash(&uVar0, uParam0))
	{
		uParam2->f_2 = uVar0;
	}
	uParam0->f_2 = -2140901307;
	_datafile_get_string(&(uParam2->f_11), uParam0);
	uParam0->f_2 = 1292053410;
	_datafile_get_string(&(uParam2->f_19), uParam0);
	uParam0->f_2 = 1234058424;
	_datafile_get_string(&(uParam2->f_3), uParam0);
}

bool func_368(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_buy_award_key_valid(iParam0);
}

bool func_369(int iParam0, int iParam1)
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
	if (!_item_database_fillout_buy_award_acquire_costs(iParam0, &Var0, &uVar471, 10) || iScriptParam_4 == 0)
	{
		return false;
	}
	iVar473 = 0;
	iVar474 = 0;
	while (iScriptParam_7 < iScriptParam_4)
	{
		if (&Var0[iScriptParam_7] == iParam1)
		{
			iVar473 = Var0[iScriptParam_7]->f_35;
			iVar475 = 0;
			while (iScriptParam_8 < iScriptParam_6)
			{
				uVar472 = &Var0[iScriptParam_7]->f_36[iScriptParam_8];
				if (iScriptParam_5 == 0)
				{
				}
				else if (!_unlock_is_unlocked(iScriptParam_5))
				{
					return true;
				}
				iVar475 = iScriptParam_8 + 1;
			}
		}
		iVar474 = iScriptParam_7 + 1;
	}
	return false;
}

int func_370(int iParam0, int iParam1)
{
	if (!func_371(iParam0, 2))
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

bool func_371(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(iParam0, iParam1);
}

void func_372(int iParam0, int iParam1, var uParam2, int iParam3)
{
	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!_0xe81d0378a384e755(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		fVar21[iVar0] = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = &Var7.f_1[iVar1];
		iVar4 = _item_database_get_number_of_modified_prices(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (_item_database_get_modified_price(uVar6, iVar2) != iParam1)
			{
			}
			else
			{
				iVar5 = _item_database_get_number_of_modifiers(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!_item_database_fillout_modifier(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if (uParam2[iVar0] == Var19)
							{
								fVar21[iVar0] = (&fVar21[iVar0] + (Var19.f_1 - 1f));
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (&fVar21[iVar0] != 1f && (*uParam2)[iVar0]->f_1 > 0)
		{
			if (uParam2[iVar0] == 773203532)
			{
				(*uParam2)[iVar0]->f_1 = (((100 * (*uParam2)[iVar0]->f_1) * round((&fVar21[iVar0] * 100f))) / 1000000) * 100;
			}
			else
			{
				(*uParam2)[iVar0]->f_1 = (((100 * (*uParam2)[iVar0]->f_1) * round((&fVar21[iVar0] * 100f))) / 10000);
			}
			if ((*uParam2)[iVar0]->f_1 == 0 && func_311(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

int func_373(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_391(iParam0) && !bParam2)
	{
		return get_ped_ammo_by_type(Global_34, iParam0);
	}
	return _0xe787f05dfc977bde(func_287(bParam1), iParam0, iParam3);
}

int func_374(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_392(&uParam0, iParam4, bParam5, iParam6);
}

void func_375(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_393(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)]);
	Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)] = iParam0;
	(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_2 = iParam2;
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_3 = iParam3;
	}
}

int func_376(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -1806461473;
		case 3:
			return -694461623;
		case 1:
			return 1093870742;
		case 0:
			return 999150106;
		case 4:
			return 1098225713;
		case 5:
			return -1828192959;
		default:
			break;
	}
	return 0;
}

void func_377(int iParam0)
{
	if (func_394(iParam0) == 62)
	{
		_0x563fcb6620523917(-1145496915, -1482012664);
		_0x563fcb6620523917(-1043953850, -1482012664);
		_0x563fcb6620523917(-1783502982, -1482012664);
	}
	else
	{
		iVar0 = -1482012664;
		if (((func_395(iParam0) == 4 || func_395(iParam0) == 12) || func_325(func_395(iParam0)) == 4) || (func_389(func_395(iParam0), 8) && ((func_395(iParam0) == 2 || func_395(iParam0) == 0) || func_395(iParam0) == 10)))
		{
			iVar0 = -1305340593;
		}
		_0x563fcb6620523917(iParam0, iVar0);
	}
}

void func_378(int iParam0)
{
	if (func_394(iParam0) == 62)
	{
		_0x6786d7afac3162b3(-1145496915);
		_0x6786d7afac3162b3(-1043953850);
		_0x6786d7afac3162b3(-1783502982);
	}
	else if (_0xe38450dbcbc70e3d(iParam0, -1305340593) || _0xe38450dbcbc70e3d(iParam0, -1482012664))
	{
		_0x6786d7afac3162b3(iParam0);
	}
}

bool func_379(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_380(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_39.f_3643[iVar1]), iVar2);
}

bool func_381(int iParam0)
{
	if (!func_319(iParam0))
	{
		return false;
	}
	return func_350(iParam0, 67108864);
}

void func_382(int iParam0)
{
	StringCopy(&cVar0, func_396(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_397(cVar0);
	_0x563fcb6620523917(get_hash_key(sVar8), -1482012664);
}

void func_383(int iParam0)
{
	StringCopy(&cVar0, func_396(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_397(cVar0);
	iVar9 = get_hash_key(sVar8);
	if (_0xe38450dbcbc70e3d(iVar9, -1305340593) || _0xe38450dbcbc70e3d(iVar9, -1482012664))
	{
		_0x6786d7afac3162b3(iVar9);
	}
}

int func_384(int iParam0)
{
	if (!func_319(iParam0))
	{
		return 0;
	}
	if (func_356(iParam0))
	{
		return -1;
	}
	return Global_8123[iParam0]->f_3;
}

int func_385(int iParam0)
{
	if (!func_319(iParam0))
	{
		return -15;
	}
	if (Global_1572887->f_13 == -1)
	{
		return Global_8123[iParam0]->f_1;
	}
	return Global_1071686->f_19674[iParam0]->f_1;
}

int func_386(int iParam0)
{
	if (!func_398(iParam0))
	{
		return 0;
	}
	func_399(iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	fVar6 = ((((((to_float(iVar0) / 60f) + to_float(iVar1)) + (to_float(iVar2) * 60f)) + ((to_float(iVar3) * 24f) * 60f)) + (((to_float(iVar4) * 30.4375f) * 24f) * 60f)) + (((to_float(iVar5) * 365.25f) * 24f) * 60f));
	iVar7 = round(fVar6);
	return iVar7;
}

bool func_387(int iParam0)
{
	if (!func_319(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 26:
		case 33:
		case 37:
		case 40:
		case 62:
		case 66:
		case 81:
		case 83:
		case 99:
		case 101:
		case 111:
		case 121:
			return true;
	}
	return false;
}

int func_388(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return -4613767;
		case 1:
			return 1567162363;
		case 2:
			return 456471693;
		case 3:
			return -1772963474;
		case 4:
			return 1881496386;
		case 5:
			return 711768994;
		case 6:
			return -440834066;
		case 7:
			return -1363847832;
		case 8:
			return 967769300;
		case 9:
			return -1436873944;
		case 10:
			return -1585669139;
		case 11:
			return 16791368;
		case 12:
			return 1452922822;
		case 13:
			return 549538301;
		case 14:
			return 974698954;
		case 15:
			return 445881012;
		case 16:
			return -2043891857;
		case 17:
			return 419656993;
		case 18:
			return -1732457315;
		case 19:
			return 1794318026;
		case 20:
			return 2035159966;
		case 21:
			return 770832805;
		case 22:
			return -1109814766;
		case 24:
			return -1075550363;
		case 23:
			return -1080317735;
		case 25:
			return 2138576151;
		case 26:
			return 1180954297;
		case 27:
			return 783603394;
		case 28:
			return 1162337247;
		case 30:
			return -170458336;
		case 29:
			return 2023240596;
		case 31:
			return 1285083821;
		case 32:
			return -1840907462;
		case 33:
			return 756710130;
		case 34:
			return 1634157321;
		case 35:
			return 388370024;
		case 36:
			return 1092296123;
		case 37:
			return 467491346;
		case 38:
			return -1391584612;
		case 39:
			return -152111346;
		case 40:
			return 1447551317;
		case 41:
			return 153136092;
		case 42:
			return 1304405732;
		case 43:
			return 1074984055;
		case 53:
			return 1087476368;
		case 54:
			return -1768057340;
		case 44:
			return 1218874593;
		case 55:
			return -1438443836;
		case 45:
			return -2036340415;
		case 56:
			return -597278150;
		case 46:
			return 803939643;
		case 57:
			return -632496195;
		case 47:
			return -965943619;
		case 48:
			return 283532073;
		case 49:
			return -462827524;
		case 50:
			return -69067491;
		case 51:
			return -1864895118;
		case 58:
			return -1929806571;
		case 59:
			return -698525417;
		case 60:
			return -1149739894;
		case 52:
			return 380507325;
		case 61:
			return -875142075;
		case 62:
			return 407796241;
		case 63:
			return -152267914;
		case 64:
			return -1675443320;
		case 65:
			return 1940341639;
		case 66:
			return 1846596114;
		case 67:
			return 907708501;
		case 69:
			return 1825644981;
		case 70:
			return 2065937607;
		case 71:
			return -211317417;
		case 72:
			return 1801307910;
		case 73:
			return -4118897;
		case 74:
			return 1853610692;
		case 75:
			return -1574644415;
		case 76:
			return 2133055515;
		case 77:
			return -1413401932;
		case 78:
			return 801090761;
		case 79:
			return 2131218644;
		case 80:
			return 1708823660;
		case 81:
			return 7976942;
		case 82:
			return 2111120505;
		case 83:
			return 176893118;
		case 84:
			return 1179148161;
		case 68:
			return 602306665;
		case 85:
			return 547412068;
		case 86:
			return -1539748801;
		case 87:
			return -1605119912;
		case 88:
			return -884464063;
		case 89:
			return -1420970720;
		case 90:
			return 1017024547;
		case 91:
			return -1204497306;
		case 92:
			return -1621069480;
		case 93:
			return -458604261;
		case 94:
			return -923391614;
		case 95:
			return -689247089;
		case 97:
			return 44049568;
		case 98:
			return 1350259552;
		case 96:
			return 620414938;
		case 99:
			return -61661574;
		case 100:
			return -725338054;
		case 101:
			return -770123507;
		case 102:
			return 1322486734;
		case 103:
			return -460939553;
		case 104:
			return -1451863552;
		case 105:
			return 173833068;
		case 106:
			return -1681004136;
		case 107:
			return 713715980;
		case 108:
			return -31204969;
		case 109:
			return -1720064790;
		case 110:
			return -532172775;
		case 111:
			return -739067737;
		case 112:
			return -1203133835;
		case 113:
			return -1947411598;
		case 115:
			return -1298718762;
		case 116:
			return -595083064;
		case 117:
			return 884833917;
		case 118:
			return 2141950651;
		case 114:
			return -1049753365;
		case 119:
			return -1437650729;
		case 135:
			return 672925454;
		case 136:
			return 846062774;
		case 137:
			return 1713550306;
		case 138:
			return -1573562784;
		case 127:
			return 1369756178;
		case 128:
			return -736172423;
		case 129:
			return 1597070291;
		case 131:
			return -159501564;
		case 130:
			return -1438809608;
		case 132:
			return -102682392;
		case 133:
			return 676673543;
		case 134:
			return 1869665995;
		case 120:
			return -81068979;
		case 121:
			return 227618407;
		case 122:
			return 2106043438;
		case 123:
			return -1380256064;
		case 124:
			return -2118469183;
		case 125:
			return -558997834;
		case 126:
			return 1563120499;
		case 139:
			return 658339366;
		default:
			break;
	}
	if (bParam1)
	{
		return 1757124778;
	}
	return 0;
}

bool func_389(int iParam0, int iParam1)
{
	if (!func_324(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_13 == -1)
	{
		return (Global_39.f_263[iParam0] && iParam1) != 0;
	}
	return (Global_1071686->f_21398[iParam0] && iParam1) != 0;
}

int func_390(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 675537701;
		case 1:
			return -1915988145;
		case 2:
			return 38535626;
		case 3:
			return 1904167574;
		case 4:
			return 244711249;
		case 5:
			return -1859792564;
		case 6:
			return -1808688941;
		case 7:
			return -736296038;
		case 8:
			return -909439131;
		case 9:
			return 1917744724;
		case 10:
			return 821748379;
		case 11:
			return 196685551;
		case 12:
			return 1983548039;
		case 15:
			return -1716084250;
		case 13:
			return 985737465;
		case 16:
			return 869827975;
		case 14:
			return -735550853;
		default:
			break;
	}
	return 1776960747;
}

bool func_391(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_392(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (func_400(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

void func_393(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_401(&(uParam0->f_4));
}

int func_394(int iParam0)
{
	switch (iParam0)
	{
		case -2085163631:
			return 0;
		case -4613767:
			return 0;
		case 1567162363:
			return 1;
		case 456471693:
			return 2;
		case -1772963474:
			return 3;
		case 1881496386:
			return 4;
		case 711768994:
			return 5;
		case -440834066:
			return 6;
		case -1363847832:
			return 7;
		case 967769300:
			return 8;
		case -1436873944:
			return 9;
		case -1585669139:
			return 10;
		case 16791368:
			return 11;
		case 1452922822:
			return 12;
		case 549538301:
			return 13;
		case 974698954:
			return 14;
		case 445881012:
			return 15;
		case -2043891857:
			return 16;
		case 419656993:
			return 17;
		case -1732457315:
			return 18;
		case 1794318026:
			return 19;
		case 2035159966:
			return 20;
		case 770832805:
			return 21;
		case -1109814766:
			return 22;
		case -1080317735:
			return 23;
		case -1075550363:
			return 24;
		case 2138576151:
			return 25;
		case 1180954297:
			return 26;
		case 783603394:
			return 27;
		case -170458336:
			return 30;
		case 2023240596:
			return 29;
		case 1285083821:
			return 31;
		case -1840907462:
			return 32;
		case 756710130:
			return 33;
		case 1634157321:
			return 34;
		case 388370024:
			return 35;
		case 1092296123:
			return 36;
		case 467491346:
			return 37;
		case -1391584612:
			return 38;
		case -152111346:
			return 39;
		case 1447551317:
			return 40;
		case 153136092:
			return 41;
		case 1304405732:
			return 42;
		case 1074984055:
			return 43;
		case 1087476368:
			return 53;
		case -1768057340:
			return 54;
		case 1218874593:
			return 44;
		case -1438443836:
			return 55;
		case -2036340415:
			return 45;
		case -597278150:
			return 56;
		case 803939643:
			return 46;
		case -632496195:
			return 57;
		case -965943619:
			return 47;
		case 283532073:
			return 48;
		case -462827524:
			return 49;
		case -69067491:
			return 50;
		case -1864895118:
			return 51;
		case -1929806571:
			return 58;
		case 1162337247:
			return 28;
		case -698525417:
			return 59;
		case -1149739894:
			return 60;
		case 380507325:
			return 52;
		case -875142075:
			return 61;
		case 407796241:
			return 62;
		case -152267914:
			return 63;
		case -1675443320:
			return 64;
		case 1940341639:
			return 65;
		case 1846596114:
			return 66;
		case 907708501:
			return 67;
		case 1825644981:
			return 69;
		case 2065937607:
			return 70;
		case -211317417:
			return 71;
		case 1801307910:
			return 72;
		case -4118897:
			return 73;
		case 1853610692:
			return 74;
		case -1574644415:
			return 75;
		case 2133055515:
			return 76;
		case -1413401932:
			return 77;
		case 801090761:
			return 78;
		case 2131218644:
			return 79;
		case 1708823660:
			return 80;
		case 7976942:
			return 81;
		case 2111120505:
			return 82;
		case 176893118:
			return 83;
		case 602306665:
			return 68;
		case 1179148161:
			return 84;
		case 547412068:
			return 85;
		case -1539748801:
			return 86;
		case -1605119912:
			return 87;
		case -884464063:
			return 88;
		case -1420970720:
			return 89;
		case 1017024547:
			return 90;
		case -1204497306:
			return 91;
		case -1621069480:
			return 92;
		case -458604261:
			return 93;
		case -923391614:
			return 94;
		case -689247089:
			return 95;
		case 44049568:
			return 97;
		case 1350259552:
			return 98;
		case 620414938:
			return 96;
		case -61661574:
			return 99;
		case -725338054:
			return 100;
		case -770123507:
			return 101;
		case 1322486734:
			return 102;
		case -460939553:
			return 103;
		case -1451863552:
			return 104;
		case 713715980:
			return 107;
		case -31204969:
			return 108;
		case -1720064790:
			return 109;
		case 173833068:
			return 105;
		case -1681004136:
			return 106;
		case -532172775:
			return 110;
		case -739067737:
			return 111;
		case -1203133835:
			return 112;
		case -1947411598:
			return 113;
		case -1049753365:
			return 114;
		case -1298718762:
			return 115;
		case -595083064:
			return 116;
		case 884833917:
			return 117;
		case 2141950651:
			return 118;
		case -1437650729:
			return 119;
		case 672925454:
			return 135;
		case 846062774:
			return 136;
		case 1713550306:
			return 137;
		case -1573562784:
			return 138;
		case 1369756178:
			return 127;
		case -736172423:
			return 128;
		case 1597070291:
			return 129;
		case -159501564:
			return 131;
		case -1438809608:
			return 130;
		case -102682392:
			return 132;
		case 676673543:
			return 133;
		case 1869665995:
			return 134;
		case -81068979:
			return 120;
		case 227618407:
			return 121;
		case 2106043438:
			return 122;
		case -1380256064:
			return 123;
		case -2118469183:
			return 124;
		case -558997834:
			return 125;
		case 1563120499:
			return 126;
		case 658339366:
			return 139;
		default:
			break;
	}
	return -1;
}

int func_395(int iParam0)
{
	switch (iParam0)
	{
		case 675537701:
			return 0;
		case -1915988145:
			return 1;
		case 38535626:
			return 2;
		case 1904167574:
			return 3;
		case 244711249:
			return 4;
		case -1859792564:
			return 5;
		case -1808688941:
			return 6;
		case -736296038:
			return 7;
		case -909439131:
			return 8;
		case 1917744724:
			return 9;
		case 821748379:
			return 10;
		case 196685551:
			return 11;
		case 1983548039:
			return 12;
		case 985737465:
			return 13;
		case -735550853:
			return 14;
		case -1716084250:
			return 15;
		case 869827975:
			return 16;
		default:
			break;
	}
	return -1;
}

char* func_396(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "REGION_INVALID";
		case 0:
			return "REGION_BAY_CRAWDADWILLIES";
		case 1:
			return "REGION_BAY_MACOMBS_END";
		case 2:
			return "REGION_BAY_MERKINSWALLER";
		case 3:
			return "REGION_BAY_LAGRAS";
		case 4:
			return "REGION_BAY_LAKAY";
		case 5:
			return "REGION_BAY_SAINT_DENIS";
		case 6:
			return "REGION_BAY_ORANGE_PLANTATION";
		case 7:
			return "REGION_BAY_SERIAL_KILLER";
		case 8:
			return "REGION_BAY_SERENDIPITY";
		case 9:
			return "REGION_BAY_SHADYBELLE";
		case 10:
			return "REGION_BAY_SILTWATERSTRAND";
		case 11:
			return "REGION_BGV_APPLESEEDTIMBER";
		case 12:
			return "REGION_BGV_BERYLS_DREAM";
		case 13:
			return "REGION_BGV_BLACKBONEFOREST_TRAPPER";
		case 14:
			return "REGION_BGV_DAKOTARIVER_TRAPPER";
		case 15:
			return "REGION_BGV_FORTRIGGS";
		case 16:
			return "REGION_BGV_HANGINGDOG";
		case 17:
			return "REGION_BGV_LONEMULESTEAD";
		case 18:
			return "REGION_BGV_MISSING_HUSBAND";
		case 19:
			return "REGION_BGV_MONTO_REST";
		case 20:
			return "REGION_BGV_OWANJILA_DAM";
		case 21:
			return "REGION_BGV_PAINTEDSKY";
		case 22:
			return "REGION_BGV_PRONGHORN";
		case 23:
			return "REGION_BGV_RIGGS_STATION";
		case 24:
			return "REGION_BGV_SHACK";
		case 25:
			return "REGION_BGV_SHEPHERDS_RISE";
		case 26:
			return "REGION_BGV_STRAWBERRY";
		case 27:
			return "REGION_BGV_VALLEY_VIEW";
		case 28:
			return "REGION_BGV_WALLACE_STATION";
		case 30:
			return "REGION_BGV_WATSONSCABIN";
		case 29:
			return "REGION_BGV_OLD_MAN_JONES";
		case 31:
			return "REGION_BLU_CANEBREAK_MANOR";
		case 32:
			return "REGION_BLU_COPPERHEAD";
		case 33:
			return "REGION_BLU_SISIKA";
		case 34:
			return "REGION_BLU_TRAVELLING_SALESMAN";
		case 35:
			return "REGION_CML_BACCHUSBRIDGE";
		case 36:
			return "REGION_CML_DINO_LADY";
		case 37:
			return "REGION_CML_OLDFORTWALLACE";
		case 38:
			return "REGION_CML_SIXPOINTCABIN";
		case 39:
			return "REGION_GRT_BEECHERS";
		case 40:
			return "REGION_GRT_BLACKWATER";
		case 41:
			return "REGION_GRT_QUAKERS_COVE";
		case 42:
			return "REGION_GRZ_ADLERRANCH";
		case 43:
			return "REGION_GRZ_DEAD_RIVAL";
		case 53:
			return "REGION_GRZ_CALUMETRAVINE";
		case 54:
			return "REGION_GRE_CIVIL_WAR_BRIDE";
		case 44:
			return "REGION_GRZ_CHEZPORTER";
		case 55:
			return "REGION_GRZ_COHUTTA";
		case 45:
			return "REGION_GRZ_COLTER";
		case 56:
			return "REGION_GRZ_COTORRA_SPRINGS";
		case 46:
			return "REGION_GRZ_FROZEN_EXPLORER";
		case 57:
			return "REGION_GRZ_GUNFIGHT";
		case 47:
			return "REGION_GRZ_MILLESANI_CLAIM";
		case 48:
			return "REGION_GRZ_MOUNTAIN_MAN";
		case 49:
			return "REGION_GRZ_MOUNT_HAGEN_PEAK";
		case 50:
			return "REGION_GRZ_STARVING_CHILDREN";
		case 51:
			return "REGION_GRZ_TEMPEST_RIM";
		case 58:
			return "REGION_GRZ_THELOFT";
		case 59:
			return "REGION_GRE_VETERAN";
		case 60:
			return "REGION_GRZ_WAPITI";
		case 52:
			return "REGION_GRZ_WINTERMINING_TOWN";
		case 61:
			return "REGION_GRZ_TRAVELLING_SALESMAN";
		case 62:
			return "REGION_GUA_AGUASDULCES";
		case 63:
			return "REGION_GUA_CAMP";
		case 64:
			return "REGION_GUA_CINCOTORRES";
		case 65:
			return "REGION_GUA_LACAPILLA";
		case 66:
			return "REGION_GUA_MANICATO";
		case 67:
			return "REGION_HRT_ABANDONED_MILL";
		case 69:
			return "REGION_HRT_CARMODYDELL";
		case 70:
			return "REGION_HRT_CORNWALLKEROSENE";
		case 71:
			return "REGION_HRT_CROP_FARM";
		case 72:
			return "REGION_HRT_CUMBERLANDFALLS";
		case 73:
			return "REGION_HRT_DOWNSRANCH";
		case 74:
			return "REGION_HRT_EMERALDRANCH";
		case 75:
			return "REGION_HRT_GRANGERS_HOGGERY";
		case 76:
			return "REGION_HRT_HORSESHOEOVERLOOK";
		case 77:
			return "REGION_HRT_LARNEDSOD";
		case 78:
			return "REGION_HRT_LOONY_CULT";
		case 79:
			return "REGION_HRT_LUCKYSCABIN";
		case 80:
			return "REGION_HRT_SWANSONS_STATION";
		case 81:
			return "REGION_HRT_VALENTINE";
		case 82:
			return "REGION_ROA_ABERDEENPIGFARM";
		case 83:
			return "REGION_ROA_ANNESBURG";
		case 84:
			return "REGION_ROA_BEAVERHOLLOW";
		case 68:
			return "REGION_ROA_BEECHERS_C";
		case 85:
			return "REGION_ROA_BLACK_BALSAM_RISE";
		case 86:
			return "REGION_ROA_BRANDYWINE_DROP";
		case 87:
			return "REGION_ROA_BUTCHERCREEK";
		case 88:
			return "REGION_ROA_DOVERHILL";
		case 89:
			return "REGION_ROA_HAPPY_FAMILY";
		case 90:
			return "REGION_ROA_ISOLATIONIST";
		case 91:
			return "REGION_ROA_MACLEANSHOUSE";
		case 92:
			return "REGION_ROA_MOSSY_FLATS";
		case 93:
			return "REGION_ROA_ROANOKE_VALLEY";
		case 94:
			return "REGION_ROA_ROCKYSEVEN";
		case 95:
			return "REGION_ROA_TRAPPER";
		case 97:
			return "REGION_ROA_VANHORNMANSION";
		case 98:
			return "REGION_ROA_VANHORNPOST";
		case 96:
			return "REGION_ROA_OLD_MAN_JONES";
		case 99:
			return "REGION_SCM_BRAITHWAITEMANOR";
		case 100:
			return "REGION_SCM_BULGERGLADE";
		case 101:
			return "REGION_SCM_CALIGAHALL";
		case 102:
			return "REGION_SCM_CATFISHJACKSONS";
		case 103:
			return "REGION_SCM_CLEMENSCOVE";
		case 104:
			return "REGION_SCM_CLEMENSPOINT";
		case 105:
			return "REGION_SCM_COMPSONS_STEAD";
		case 106:
			return "REGION_SCM_DAIRY_FARM";
		case 107:
			return "REGION_SCM_HORSE_SHOP";
		case 108:
			return "REGION_SCM_LONNIESSHACK";
		case 109:
			return "REGION_SCM_LOVE_TRIANGLE";
		case 110:
			return "REGION_SCM_RADLEYS_PASTURE";
		case 111:
			return "REGION_SCM_RHODES";
		case 112:
			return "REGION_SCM_SLAVE_PEN";
		case 113:
			return "REGION_TAL_AURORA_BASIN";
		case 114:
			return "REGION_TAL_DEAD_SETTLER";
		case 115:
			return "REGION_TAL_COCHINAY";
		case 116:
			return "REGION_TAL_MANZANITAPOST";
		case 117:
			return "REGION_TAL_PACIFICUNIONRR";
		case 118:
			return "REGION_TAL_TANNERSREACH";
		case 119:
			return "REGION_TAL_TRAPPER";
		case 135:
			return "REGION_HEN_MACFARLANES_RANCH";
		case 136:
			return "REGION_HEN_THIEVES_LANDING";
		case 137:
			return "REGION_HEN_TRAVELLING_SALESMAN";
		case 138:
			return "REGION_HEN_HARRIET";
		case 127:
			return "REGION_CHO_ARMADILLO";
		case 128:
			return "REGION_CHO_COOTS_CHAPEL";
		case 129:
			return "REGION_CHO_DON_JULIO_HOUSE";
		case 131:
			return "REGION_CHO_RIDGEWOOD_FARM";
		case 130:
			return "REGION_CHO_RILEYS_CHARGE";
		case 132:
			return "REGION_CHO_TWIN_ROCKS";
		case 133:
			return "REGION_CHO_TRAVELLING_SALESMAN";
		case 134:
			return "REGION_CHO_TRAPPER";
		case 120:
			return "REGION_GAP_GAPTOOTH_BREACH";
		case 121:
			return "REGION_GAP_TUMBLEWEED";
		case 122:
			return "REGION_GAP_RATHSKELLER_FORK";
		case 123:
			return "REGION_RIO_BENEDICT_POINT";
		case 124:
			return "REGION_RIO_FORT_MERCER";
		case 125:
			return "REGION_RIO_PLAIN_VIEW";
		case 126:
			return "REGION_RIO_TRAVELLING_SALESMAN";
		case 139:
			return "REGION_CENTRALUNIONRR";
		default:
			break;
	}
	return "REGION_INVALID";
	return "REGION_INVALID";
}

var func_397(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

bool func_398(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_402(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_403(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_404(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_405(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_406(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_407(iParam0);
	if (iVar5 < 1 || iVar5 > func_408(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

void func_399(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_409(func_351(), iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6);
}

bool func_400(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_287(bParam3);
	}
	if (!_0x22e590f108289a9d(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_338(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

void func_401(var uParam0)
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

int func_402(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_403(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_404(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_405(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_257(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_406(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_407(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_408(int iParam0, int iParam1)
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

void func_409(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_410(iParam0, iParam1, 1))
	{
		iVar0 = func_406(iParam1);
		iVar1 = func_405(iParam0);
		iVar2 = (func_405(iParam0) - func_405(iParam1));
		iVar3 = (func_406(iParam0) - func_406(iParam1));
		iVar4 = (func_407(iParam0) - func_407(iParam1));
		iVar5 = (func_404(iParam0) - func_404(iParam1));
		iVar6 = (func_403(iParam0) - func_403(iParam1));
		iVar7 = (func_402(iParam0) - func_402(iParam1));
	}
	else
	{
		iVar0 = func_406(iParam0);
		iVar1 = func_405(iParam1);
		iVar2 = (func_405(iParam1) - func_405(iParam0));
		iVar3 = (func_406(iParam1) - func_406(iParam0));
		iVar4 = (func_407(iParam1) - func_407(iParam0));
		iVar5 = (func_404(iParam1) - func_404(iParam0));
		iVar6 = (func_403(iParam1) - func_403(iParam0));
		iVar7 = (func_402(iParam1) - func_402(iParam0));
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
		iVar4 = (iVar4 + func_408(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_411(to_float(iVar0 + 1), 0f, 12f));
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
	*iParam2 = iVar7;
	*iParam3 = iVar6;
	*iParam4 = iVar5;
	*iParam5 = iVar4;
	*iParam6 = iVar3;
	*iParam7 = iVar2;
}

bool func_410(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_398(iParam1) || !func_398(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

float func_411(float fParam0, float fParam1, float fParam2)
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

