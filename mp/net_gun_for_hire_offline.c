void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	network_set_script_is_safe_for_network_game();
	func_1(&uLocal_20, &uScriptParam_0);
	while (func_2(&uLocal_20, &uScriptParam_0))
	{
		func_3(&uLocal_20, &uScriptParam_0);
		wait(0);
	}
	func_4(&uLocal_20, &uScriptParam_0);
	while (!_0x380ffa15b72408fb(1440))
	{
		wait(0);
	}
	terminate_this_thread();
}

void func_1(var uParam0, var uParam1)
{
	func_5(uParam1);
	func_6(uParam0, uParam1);
	func_7(uParam0, uParam1);
	func_8(Global_1120070[*uParam1]);
	func_9((*Global_1120070)[*uParam1]->f_2);
	func_10((*Global_1120070)[*uParam1]->f_3);
	if (func_11(uParam1->f_2))
	{
		func_12((*Global_1120070)[*uParam1]->f_1);
	}
	func_13();
	func_14(uParam0, uParam1);
	func_15(uParam1);
	func_16(uParam0, uParam1);
	func_17(uParam0, uParam1);
}

bool func_2(var uParam0, var uParam1)
{
	if (func_18(0, 0))
	{
		return false;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	if ((uParam1->f_2 != -1 && uParam1->f_2 == func_19()) || (uParam1->f_1 != -1 && uParam1->f_1 == func_20()))
	{
		Var0 = { func_21() };
	}
	if (func_23(func_22()))
	{
		if (!func_23(Var0))
		{
			if (func_24(func_22()) == 7)
			{
				if (func_26(func_25(func_22())))
				{
					Var0 = { func_22() };
				}
			}
		}
	}
	if (func_27(Var0, 1024, 0))
	{
		return false;
	}
	if (func_28() != 2)
	{
		return false;
	}
	if (!func_29(*uParam1, 2))
	{
		if (func_30(&(uParam0->f_8), 2))
		{
			return false;
		}
		if (uParam0->f_2 == 3)
		{
			return false;
		}
	}
	if (func_31(2048) && !func_31(4096))
	{
		return false;
	}
	return true;
}

void func_3(var uParam0, var uParam1)
{
	func_32(uParam0, uParam1);
	switch (uParam0->f_2)
	{
		case 0:
			if (func_33(uParam0, uParam1, &uVar0))
			{
				func_34(&(uParam0->f_2), uVar0, uParam1);
			}
			break;
		case 1:
			if (func_35(uParam0, uParam1, &uVar0))
			{
				func_34(&(uParam0->f_2), uVar0, uParam1);
			}
			break;
		case 2:
			if (func_36(uParam0, uParam1, &uVar0))
			{
				func_34(&(uParam0->f_2), uVar0, uParam1);
			}
			break;
		case 3:
			break;
		default:
			break;
	}
}

void func_4(var uParam0, var uParam1)
{
	func_37(uParam1);
	func_38(uParam1);
	func_39(uParam0, &(uParam0->f_4347), uParam1);
	func_40(uParam1);
	func_41(uParam0, uParam1);
	func_42(uParam0, uParam1);
	func_43(uParam0, uParam1);
	func_44(uParam0, uParam1);
	func_45(uParam0, uParam1);
	func_46(uParam0, uParam1);
	func_47(uParam0);
	func_48(uParam0);
	func_49(uParam0);
	func_50(uParam0, uParam1);
	func_51(uParam0, uParam1);
	func_52(uParam1);
	func_53(uParam0, uParam1);
	func_54(uParam0, uParam1);
	func_55(uParam1);
	func_56(uParam0, uParam1);
	func_57(uParam1);
	func_58(uParam0, uParam1);
	func_59(uParam0);
	func_60(uParam1);
	func_61(uParam0);
	func_62(uParam0);
	func_63(uParam0, uParam1);
	func_64(uParam1);
	func_65(uParam0);
}

void func_5(var uParam0)
{
	func_66(*uParam0, 0);
	func_68(*uParam0, func_67(uParam0->f_1));
	func_69(*uParam0, uParam0->f_2);
	func_70(*uParam0, uParam0->f_1);
}

void func_6(var uParam0, var uParam1)
{
	if (func_71(&(uParam1->f_5), 4))
	{
		if (!func_73(func_72(), (*Global_1120070)[*uParam1], 600, -1, 1, 1))
		{
			func_74(&(uParam0->f_8), 2, func_67(uParam1->f_1));
		}
	}
	else if (!func_73(func_75(), (*Global_1120070)[*uParam1], 600, -1, 1, 1))
	{
		func_74(&(uParam0->f_8), 2, func_67(uParam1->f_1));
	}
	if (func_11(uParam1->f_2))
	{
		if (!func_73(func_76(), &((*Global_1120070)[*uParam1]->f_1), 600, -1, 1, 1))
		{
		}
	}
	if (!func_73(-245132713, &((*Global_1120070)[*uParam1]->f_2), 600, -1, 1, 1))
	{
	}
	if (!func_73(-972240077, &((*Global_1120070)[*uParam1]->f_3), 600, -1, 1, 1))
	{
	}
}

void func_7(var uParam0, var uParam1)
{
	if (!func_77())
	{
		prefetch_srl(func_78());
		_0xae00387e53b1e9fc();
		func_74(&(uParam0->f_8), 512, func_67(uParam1->f_1));
	}
}

void func_8(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 241)
	{
		iVar1 = func_79(iVar0, 1);
		_datafile_register_query(uParam0, iVar1, func_80(iVar1));
		iVar0++;
	}
}

void func_9(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 48)
	{
		iVar1 = func_81(iVar0, 1);
		_datafile_register_query(uParam0, iVar1, func_82(iVar1));
		iVar0++;
	}
}

void func_10(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 57)
	{
		iVar1 = func_83(iVar0, 1);
		_datafile_register_query(uParam0, iVar1, func_84(iVar1));
		iVar0++;
	}
}

bool func_11(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 36);
}

void func_12(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		iVar1 = func_85(iVar0, 1);
		_datafile_register_query(uParam0, iVar1, func_86(iVar1));
		iVar0++;
	}
}

void func_13()
{
	if (!func_88(func_87(), 30, -1, 0, 0))
	{
	}
}

void func_14(var uParam0, var uParam1)
{
	uParam0->f_4300 = { *uParam1 };
}

void func_15(var uParam0)
{
	if (uParam0->f_4 != -323664079)
	{
		return;
	}
	func_90(func_89(uParam0->f_1), 0);
}

void func_16(var uParam0, var uParam1)
{
	StringCopy(&cVar0, "MissionGiver_", 16);
	StringIntConCat(&cVar0, uParam1->f_1, 16);
	add_relationship_group(&cVar0, &(uParam0->f_112.f_1));
	func_91(uParam0);
}

void func_17(var uParam0, var uParam1)
{
	if (func_92(uParam1->f_2) == -1211851008)
	{
		create_model_hide(-554f, 2708f, 320f, 10f, 1647676769, true);
		func_74(&(uParam0->f_8), 1024, func_93(uParam1->f_1));
	}
}

bool func_18(bool bParam0, bool bParam1)
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

int func_19()
{
	return Global_1130592->f_5.f_1;
}

int func_20()
{
	return Global_1130592->f_5;
}

struct<2> func_21()
{
	return Global_1130592->f_5.f_3;
}

struct<2> func_22()
{
	return *Global_1051213;
}

bool func_23(struct<2> Param0)
{
	if (!func_94(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_95(Param0))
	{
		return false;
	}
	return true;
}

int func_24(var uParam0, var uParam1)
{
	return uParam0;
}

int func_25(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_96(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_26(int iParam0)
{
	func_97(&uVar0);
	func_98(&uVar0);
	func_99(&uVar0, 45871012);
	return func_100(&uVar0, iParam0, 0);
}

bool func_27(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265377->f_124517.f_135 & 8 != 0)
	{
		Global_1071686->f_28351 = 1;
		return true;
	}
	if (func_23(*Global_1051213) && !func_101(*Global_1051213, Param0))
	{
		Global_1071686->f_28351 = 2;
		return true;
	}
	if (iParam2 != 0 && func_102(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_103(iParam3, 255))
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
	if (func_104())
	{
		Global_1071686->f_28351 = 7;
		return true;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_23(*Global_1051213))
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

int func_28()
{
	if (!func_105(Global_1572887->f_266.f_63, 8))
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

bool func_29(int iParam0, int iParam1)
{
	return ((*Global_1120070)[iParam0]->f_21 && iParam1) != 0;
}

bool func_30(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

bool func_31(int iParam0)
{
	return (Global_1130592->f_24.f_3 && iParam0) != 0;
}

void func_32(var uParam0, var uParam1)
{
	func_106(&(uParam0->f_62), &(uParam0->f_4296), uParam1, *uParam0);
	func_107(&(uParam0->f_1183));
	if ((network_is_session_active() && network_is_game_in_progress()) && !func_108(player_id(), uParam1->f_1))
	{
		func_109(uParam1->f_1);
	}
}

bool func_33(var uParam0, var uParam1, var uParam2)
{
	switch (*uParam0)
	{
		case 0:
			iVar1 = func_110(uParam0, uParam1);
			iVar0 = 1;
			break;
		case 1:
			iVar1 = func_111(uParam0, uParam1);
			iVar0 = 2;
			break;
		case 2:
			iVar1 = func_112(uParam0, uParam1);
			iVar0 = 3;
			break;
		case 3:
			iVar1 = func_113(uParam0, uParam1);
			iVar0 = 4;
			break;
		case 4:
			iVar1 = func_114(uParam1);
			iVar0 = 5;
			break;
		case 5:
			iVar1 = func_115(uParam0, uParam1);
			iVar0 = 6;
			break;
		case 6:
			iVar1 = func_116(uParam0, uParam1);
			iVar0 = 7;
			break;
		case 7:
			iVar1 = func_117(uParam0, uParam1);
			iVar0 = 8;
			break;
		case 8:
			iVar1 = func_118(uParam0, uParam1);
			iVar0 = 9;
			break;
		case 9:
			iVar1 = func_119(uParam0, uParam1);
			iVar0 = 10;
			break;
		case 10:
			iVar1 = func_120(uParam0, uParam1);
			iVar0 = 11;
			break;
		case 11:
			iVar1 = func_121(uParam0, uParam1);
			iVar0 = 12;
			break;
		case 12:
			if (func_123(&(uParam0->f_1730.f_1), uParam1->f_2, uParam1->f_1, func_122(*uParam1)))
			{
				iVar1 = 1;
				iVar0 = 13;
			}
			else
			{
				iVar1 = 2;
			}
			break;
		case 13:
			iVar1 = func_124(uParam0, uParam1);
			iVar0 = 14;
			break;
		case 14:
			func_125(&(uParam0->f_4), func_67(uParam1->f_1));
			*uParam2 = 1;
			return true;
		default:
			break;
	}
	switch (iVar1)
	{
		case -1:
			break;
		case 0:
			func_125(&(uParam0->f_4), func_67(uParam1->f_1));
			func_74(&(uParam0->f_8), 2, func_67(uParam1->f_1));
			break;
		case 1:
			func_125(&(uParam0->f_4), func_67(uParam1->f_1));
			uParam0->f_4.f_2 = get_game_timer();
			func_126(uParam0, iVar0, uParam1);
			break;
		case 2:
			func_127(&(uParam0->f_4), func_67(uParam1->f_1));
			break;
		case 3:
			func_128(&(uParam0->f_4), func_67(uParam1->f_1));
			func_129(&(uParam0->f_4), func_67(uParam1->f_1));
			break;
		default:
			break;
	}
	return false;
}

void func_34(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = uParam1;
}

bool func_35(var uParam0, var uParam1, var uParam2)
{
	switch (uParam0->f_1)
	{
		case 0:
			iVar1 = func_130(uParam0, uParam1);
			iVar0 = 1;
			break;
		case 1:
			iVar1 = func_131(uParam0, uParam1);
			iVar0 = 2;
			break;
		case 2:
			iVar1 = func_132(uParam0, uParam1);
			iVar0 = 3;
			break;
		case 3:
			iVar1 = func_133(uParam0, uParam1);
			iVar0 = 4;
			break;
		case 4:
			iVar1 = func_134(uParam1, 1756071093);
			iVar0 = 5;
			break;
		case 5:
			func_135(uParam1);
			iVar1 = 1;
			iVar0 = 6;
			break;
		case 6:
			func_125(&(uParam0->f_4), func_67(uParam1->f_1));
			*uParam2 = 2;
			return true;
		default:
			break;
	}
	switch (iVar1)
	{
		case -1:
			break;
		case 0:
			func_125(&(uParam0->f_4), func_67(uParam1->f_1));
			func_74(&(uParam0->f_8), 2, func_67(uParam1->f_1));
			break;
		case 1:
			func_125(&(uParam0->f_4), func_67(uParam1->f_1));
			uParam0->f_4.f_2 = get_game_timer();
			func_136(&(uParam0->f_1), iVar0, uParam1);
			break;
		case 2:
			func_127(&(uParam0->f_4), func_67(uParam1->f_1));
			break;
		case 3:
			func_128(&(uParam0->f_4), func_67(uParam1->f_1));
			func_129(&(uParam0->f_4), func_67(uParam1->f_1));
			break;
		default:
			break;
	}
	return false;
}

bool func_36(var uParam0, var uParam1, var uParam2)
{
	vVar0 = { func_137(uParam0->f_23.f_1) };
	func_138(uParam0, uParam1, vVar0);
	if (func_30(&(uParam0->f_8), 2))
	{
		*uParam2 = 3;
		return true;
	}
	func_139(uParam0, uParam1);
	func_140(uParam0, uParam1);
	func_141(uParam0, uParam1);
	func_142(uParam0, uParam1);
	func_143(uParam0, &(uParam0->f_4347), uParam1);
	func_144(uParam0, uParam1, vVar0);
	func_145(uParam0, uParam1);
	func_146(uParam0, uParam1);
	func_147(uParam0, uParam1);
	func_148(uParam0, uParam1);
	func_149(uParam0, uParam1);
	func_150(uParam0, uParam1);
	func_151(uParam0, uParam1);
	func_152(uParam0, uParam1, vVar0);
	func_153(uParam0, uParam1);
	func_154(uParam0, uParam1);
	func_155(uParam0, uParam1);
	func_156(uParam1);
	return false;
}

void func_37(var uParam0)
{
	iVar0 = func_157(*uParam0);
	if (!_does_thread_exist(iVar0))
	{
		return;
	}
	if (!is_thread_active(iVar0, false))
	{
		return;
	}
	_0x7de4643157ad646c(func_157(*uParam0));
}

void func_38(var uParam0)
{
	if (uParam0->f_4 != -323664079)
	{
		return;
	}
	func_90(func_89(uParam0->f_1), 1);
}

void func_39(var uParam0, var uParam1, var uParam2)
{
	func_158(uParam1);
	func_159(uParam0);
	func_160(uParam1, uParam2, 1);
	_0x5c9978a2a3dc3d0d();
	_0x37d7bdba89f13959("MP_BountySelection");
	uParam1->f_124 = 0;
	uParam0->f_4347.f_119 = 0;
	Global_1120070->f_8495.f_4 = 0;
	if (_uistatemachine_exists(-1436556974))
	{
		_uistatemachine_destroy(-1436556974);
	}
	if (_uiflowblock_is_loaded(uParam1->f_113))
	{
		_uiflowblock_release(&(uParam1->f_113));
		uParam1->f_113 = 0;
	}
}

void func_40(var uParam0)
{
	if ((network_is_session_active() && network_is_game_in_progress()) && func_108(player_id(), uParam0->f_1))
	{
		func_161(uParam0->f_1);
	}
}

void func_41(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 <= (3 - 1))
	{
		func_162(uParam0->f_1730.f_1[iVar0], uParam0->f_1730.f_1.f_19[iVar0], &(uParam0->f_1730.f_1.f_2276), func_93(uParam1->f_1), iVar0);
		iVar0++;
	}
	if (func_163() == func_93(uParam1->f_1))
	{
		func_164(4);
	}
}

void func_42(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (uParam0->f_1569.f_1[iVar0]->f_1 > -1 && uParam0->f_1569.f_1[iVar0]->f_1 < 21)
		{
			if (_does_volume_exist(&(uParam0->f_67.f_2[uParam0->f_1569.f_1[iVar0]->f_1])))
			{
				_0x2c87c3e1c7b96ee2(&(uParam0->f_67.f_2[uParam0->f_1569.f_1[iVar0]->f_1]));
			}
		}
		else if (_does_volume_exist(&(uParam0->f_1569.f_1[iVar0])))
		{
			_0x2c87c3e1c7b96ee2(&(uParam0->f_1569.f_1[iVar0]));
			func_165(&(uParam0->f_1569.f_1[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 20)
	{
		if (!_does_volume_exist(&(uParam0->f_67.f_2[iVar0])))
		{
		}
		else
		{
			iVar1 = func_166(iVar0, 1);
			if (func_168(&(uParam0->f_67.f_27), func_167(iVar1)))
			{
				switch (iVar1)
				{
					case -658202764:
					case -425837785:
					case 118717457:
						_0xa1cfb35069d23c23(&(uParam0->f_67.f_2[iVar0]));
						break;
					case -551448260:
					case 387219749:
					case 695084504:
						_0x74c2b3dc0b294102(&(uParam0->f_67.f_2[iVar0]));
						break;
					case -476976667:
						func_169(&(uParam0->f_67.f_26), 0);
						break;
					case -1162096896:
						remove_scenario_blocking_area(uParam0->f_67.f_25, false);
						break;
					case 1983526175:
						remove_scenario_blocking_area(uParam0->f_67.f_24, false);
						break;
				}
				func_171(&(uParam0->f_67.f_27), func_167(iVar1), func_170(*uParam1));
			}
			_delete_volume(&(uParam0->f_67.f_2[iVar0]));
		}
		iVar0++;
	}
}

void func_43(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (does_entity_exist(&(uParam0->f_112.f_200[iVar0])))
		{
			delete_ped(uParam0->f_112.f_200[iVar0]);
		}
		if (uParam0->f_112.f_200[iVar0]->f_2 != 0)
		{
			set_model_as_no_longer_needed(uParam0->f_112.f_200[iVar0]->f_2);
		}
		iVar0++;
	}
	func_172(uParam0, uParam1);
}

void func_44(var uParam0, var uParam1)
{
	if (does_blip_exist(uParam0->f_112.f_825))
	{
		remove_blip(&(uParam0->f_112.f_825));
	}
	func_173(uParam1->f_1, 16);
}

void func_45(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (does_entity_exist(&(uParam0->f_948.f_1[iVar0])))
		{
			delete_object(uParam0->f_948.f_1[iVar0]);
		}
		if (uParam0->f_948.f_1[iVar0]->f_2 != 0)
		{
			set_model_as_no_longer_needed(uParam0->f_948.f_1[iVar0]->f_2);
			if (uParam0->f_948.f_1[iVar0]->f_19 != 0)
			{
				_set_streamed_txd_as_no_longer_needed(uParam0->f_948.f_1[iVar0]->f_19);
			}
		}
		iVar0++;
	}
}

void func_46(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		if (_does_propset_exist(&(uParam0->f_105.f_1[iVar0])))
		{
			_delete_propset(&(uParam0->f_105.f_1[iVar0]), true, true);
		}
		iVar0++;
	}
}

void func_47(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_1189 - 1))
	{
		if (uParam0->f_1189.f_1[iVar0]->f_15 != 0)
		{
			if (does_entity_exist(uParam0->f_1189.f_1[iVar0]->f_16))
			{
				iVar1 = get_entity_model(uParam0->f_1189.f_1[iVar0]->f_16);
				if (is_model_valid(iVar1))
				{
					set_model_as_no_longer_needed(iVar1);
				}
			}
			if (uParam0->f_1189.f_1[iVar0]->f_14)
			{
				set_entity_coords(uParam0->f_1189.f_1[iVar0]->f_16, uParam0->f_1189.f_1[iVar0]->f_1, true, false, true, true);
				set_entity_rotation(uParam0->f_1189.f_1[iVar0]->f_16, uParam0->f_1189.f_1[iVar0]->f_4, 2, true);
			}
			_0xd2b9c78537ed5759(uParam0->f_1189.f_1[iVar0]->f_15);
		}
		iVar0++;
	}
}

void func_48(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_1607 - 1))
	{
		if (uParam0->f_1607.f_3[iVar0]->f_7 != 0)
		{
			_0xd2b9c78537ed5759(uParam0->f_1607.f_3[iVar0]->f_7);
		}
		iVar0++;
	}
}

void func_49(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_1583 - 1))
	{
		if (func_174(&(uParam0->f_1583.f_1[iVar0])))
		{
			if (_is_imap_active(&(uParam0->f_1583.f_1[iVar0])))
			{
				func_175(&(uParam0->f_1583.f_1[iVar0]));
			}
		}
		if (uParam0->f_1583.f_1[iVar0]->f_1 != 0)
		{
			if (_0xde9bad3292aa6d5e(uParam0->f_1583.f_1[iVar0]->f_1))
			{
				_0xdd0bc0edcb2162f6(uParam0->f_1583.f_1[iVar0]->f_1);
			}
		}
		if (!is_string_null_or_empty(func_176(uParam0->f_1583.f_1[iVar0]->f_2)))
		{
			if (_0x495cfab2924237c7(&(uParam0->f_1583.f_1[iVar0]->f_2)))
			{
				if (_0x5ac0944c156e5f44(&(uParam0->f_1583.f_1[iVar0]->f_2)))
				{
					_0x527b97c203bb8606(&(uParam0->f_1583.f_1[iVar0]->f_2));
				}
			}
		}
		iVar0++;
	}
}

void func_50(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (&uParam0->f_1164[iVar0] != 0 && &uParam0->f_1164[iVar0] != -1)
		{
			_0x9cf1836c03fb67a2(uParam0->f_1164[iVar0], 0);
		}
		iVar0++;
	}
}

void func_51(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		bVar1 = false;
		if (is_valid_interior(&(uParam0->f_1169.f_1[iVar0])))
		{
			unpin_interior(&(uParam0->f_1169.f_1[iVar0]));
			if (func_177(uParam1->f_1, 1) && is_interior_entity_set_active(&(uParam0->f_1169.f_1[iVar0]), &(uParam0->f_1169.f_1[iVar0]->f_4)))
			{
				deactivate_interior_entity_set(&(uParam0->f_1169.f_1[iVar0]), &(uParam0->f_1169.f_1[iVar0]->f_4), false);
			}
		}
		else
		{
			bVar1 = true;
		}
		if (bVar1)
		{
			if (!func_178(uParam0->f_1169.f_1[iVar0]->f_1))
			{
				iVar2 = get_interior_at_coords(uParam0->f_1169.f_1[iVar0]->f_1);
				unpin_interior(iVar2);
				if (func_177(uParam1->f_1, 1) && is_interior_entity_set_active(iVar2, &(uParam0->f_1169.f_1[iVar0]->f_4)))
				{
					deactivate_interior_entity_set(iVar2, &(uParam0->f_1169.f_1[iVar0]->f_4), false);
				}
			}
		}
		iVar0++;
	}
}

void func_52(var uParam0)
{
	func_134(uParam0, -16129714);
}

void func_53(var uParam0, var uParam1)
{
	_datafile_unload(func_179(*uParam1));
	_datafile_unload(func_180(*uParam1));
	_datafile_unload(func_181(*uParam1));
	_datafile_unload(func_122(*uParam1));
}

void func_54(var uParam0, var uParam1)
{
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		iVar2 = uParam0->f_4034.f_98[iVar1]->f_4;
		if (iVar2 == 0)
		{
		}
		else
		{
			vVar3 = { func_182(&bVar0, *uParam1, iVar2, 1960114521, -1, 1) };
			if (bVar0)
			{
				_0xef51242e35242b47(&vVar3);
			}
			vVar3 = { func_182(&bVar0, *uParam1, iVar2, 584993587, -1, 1) };
			if (bVar0)
			{
				_0xef51242e35242b47(&vVar3);
			}
			vVar3 = { func_182(&bVar0, *uParam1, iVar2, -1340199114, -1, 1) };
			if (bVar0)
			{
				_0xef51242e35242b47(&vVar3);
			}
			vVar3 = { func_182(&bVar0, *uParam1, iVar2, -806829095, -1, 1) };
			if (bVar0)
			{
				_0xef51242e35242b47(&vVar3);
			}
		}
		iVar1++;
	}
}

void func_55(var uParam0)
{
	_text_database_delete(func_87());
}

void func_56(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_10.f_3.f_9 - 1))
	{
		_text_database_delete(uParam0->f_10.f_3[iVar0]);
		iVar0++;
	}
	if (func_71(&(uParam1->f_5), 4))
	{
		_text_database_delete("MPINTAU");
	}
}

void func_57(var uParam0)
{
	_0x33d51f801cb16e4f();
}

void func_58(var uParam0, var uParam1)
{
	if (func_30(&(uParam0->f_8), 128))
	{
		_0x007ff852dcf49da4(256);
		func_183(&(uParam0->f_8), 128, func_93(uParam1->f_1));
	}
	if (func_30(&(uParam0->f_8), 32))
	{
		func_184();
		func_183(&(uParam0->f_8), 32, func_93(uParam1->f_1));
	}
}

void func_59(var uParam0)
{
	if (!func_30(&(uParam0->f_8), 16))
	{
		return;
	}
	func_185(1, 3, 0);
}

void func_60(var uParam0)
{
	if (func_186() == func_93(uParam0->f_1))
	{
		func_187(0);
	}
}

void func_61(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_1695 - 1))
	{
		if (_does_anim_scene_exist(uParam0->f_1695.f_1[iVar0]->f_24))
		{
			_delete_anim_scene(uParam0->f_1695.f_1[iVar0]->f_24);
		}
		iVar0++;
	}
}

void func_62(var uParam0)
{
	func_188(uParam0);
	func_189(uParam0);
}

void func_63(var uParam0, var uParam1)
{
	if (func_92(uParam1->f_2) == -1211851008 && func_30(&(uParam0->f_8), 1024))
	{
		remove_model_hide(-554f, 2708f, 320f, 10f, 1647676769, 0);
		func_183(&(uParam0->f_8), 1024, func_93(uParam1->f_1));
	}
}

void func_64(var uParam0)
{
	func_66(*uParam0, -1);
	func_190(*uParam0, 0);
}

void func_65(var uParam0)
{
	if (func_30(&(uParam0->f_8), 512))
	{
		end_srl();
	}
}

void func_66(int iParam0, int iParam1)
{
	(*Global_1120070)[iParam0]->f_17 = iParam1;
}

int func_67(int iParam0)
{
	if (!func_191(iParam0))
	{
		return 0;
	}
	return func_93(iParam0);
}

void func_68(int iParam0, var uParam1)
{
	(*Global_1120070)[iParam0]->f_4 = uParam1;
}

void func_69(int iParam0, var uParam1)
{
	(*Global_1120070)[iParam0]->f_5 = uParam1;
}

void func_70(int iParam0, var uParam1)
{
	(*Global_1120070)[iParam0]->f_6 = uParam1;
}

bool func_71(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

int func_72()
{
	return 1922501359;
}

bool func_73(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
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
		if (Global_1572887->f_13 != -1)
		{
			bVar1 = func_18(bParam4, bParam5);
		}
		iVar0++;
		wait(0);
	}
	if (Global_1572887->f_13 != -1)
	{
		bVar1 = func_18(bParam4, bParam5);
	}
	if (bVar1)
	{
		func_192();
	}
	if (iVar0 >= iParam2)
	{
		iVar0 = 0;
		return false;
	}
	iVar0 = 0;
	return true;
}

void func_74(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_75()
{
	return -911959609;
}

int func_76()
{
	return -954913418;
}

bool func_77()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

char* func_78()
{
	switch (Global_1071686->f_28341.f_2)
	{
		case 0:
			return "cutscene@mpintro_mcs3_rhodes";
		case 1:
			return "cutscene@mpintro_mcs3_valentine";
		case 2:
			return "cutscene@mpintro_mcs3_blackwater";
		case 3:
			return "cutscene@mpintro_mcs3_tumbleweed";
		default:
			break;
	}
	return "";
}

int func_79(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1008523256;
		case 1:
			return 1141833051;
		case 2:
			return 830686115;
		case 3:
			return 1371816784;
		case 4:
			return -279039872;
		case 5:
			return -347364204;
		case 6:
			return -1591356522;
		case 7:
			return -1481147674;
		case 8:
			return 1071445036;
		case 9:
			return 1393764479;
		case 10:
			return 416600242;
		case 11:
			return 1774314862;
		case 12:
			return 1624339917;
		case 13:
			return -702452069;
		case 14:
			return -1697453237;
		case 15:
			return 935565856;
		case 16:
			return 164389658;
		case 17:
			return -3633128;
		case 18:
			return 568979268;
		case 19:
			return -742165699;
		case 20:
			return 1241889488;
		case 21:
			return -1450969535;
		case 22:
			return 135103436;
		case 23:
			return -1562463744;
		case 24:
			return -569428078;
		case 25:
			return 1034986020;
		case 26:
			return 1282514153;
		case 27:
			return 699547230;
		case 28:
			return -1188075274;
		case 29:
			return -307865396;
		case 30:
			return -340432202;
		case 31:
			return 891000470;
		case 32:
			return -1785915344;
		case 33:
			return 95610146;
		case 34:
			return -175154863;
		case 35:
			return -779715008;
		case 36:
			return 966721050;
		case 37:
			return 1773322216;
		case 38:
			return 965995012;
		case 39:
			return -2106942431;
		case 40:
			return 1772846069;
		case 41:
			return -1782208300;
		case 42:
			return 466723622;
		case 43:
			return -155807419;
		case 44:
			return 369580868;
		case 45:
			return 1862983441;
		case 46:
			return -1462149998;
		case 47:
			return 1097539553;
		case 48:
			return -1479366685;
		case 49:
			return 1475807964;
		case 50:
			return 504293064;
		case 51:
			return -678729477;
		case 52:
			return 1635370648;
		case 53:
			return 741518720;
		case 54:
			return -1021330426;
		case 55:
			return -879824208;
		case 56:
			return 56746299;
		case 57:
			return 1915534289;
		case 58:
			return 1089670230;
		case 59:
			return 1179867258;
		case 60:
			return -328876172;
		case 61:
			return 824485797;
		case 62:
			return -146546566;
		case 63:
			return -733684727;
		case 64:
			return 2080739522;
		case 65:
			return 1250184037;
		case 66:
			return 1142477451;
		case 67:
			return -750441052;
		case 68:
			return -467924289;
		case 69:
			return 1034671917;
		case 70:
			return -1442893430;
		case 71:
			return 957547265;
		case 72:
			return 1781322358;
		case 73:
			return 1219330971;
		case 74:
			return -2110119917;
		case 75:
			return 709191463;
		case 76:
			return 2038044382;
		case 77:
			return 1062084355;
		case 78:
			return -690423049;
		case 79:
			return 202835363;
		case 80:
			return -293519133;
		case 81:
			return 592206679;
		case 82:
			return -816725755;
		case 83:
			return -255537257;
		case 84:
			return -770038426;
		case 85:
			return -1940881994;
		case 86:
			return -1099377300;
		case 87:
			return -1298580726;
		case 88:
			return -1838764391;
		case 89:
			return 1537295589;
		case 90:
			return -26782235;
		case 91:
			return 1465961145;
		case 92:
			return -150140702;
		case 93:
			return 925148616;
		case 94:
			return -586196356;
		case 95:
			return -989277348;
		case 96:
			return -1045571630;
		case 97:
			return -1028785813;
		case 98:
			return -944306928;
		case 99:
			return -1799624227;
		case 100:
			return -1413825410;
		case 101:
			return -1083767826;
		case 102:
			return 1392091586;
		case 103:
			return 1269397350;
		case 104:
			return -1808878008;
		case 105:
			return 696574474;
		case 106:
			return 1280983896;
		case 107:
			return -473520653;
		case 108:
			return -1142735215;
		case 109:
			return -662059387;
		case 110:
			return 1196324698;
		case 111:
			return 1781673553;
		case 112:
			return 1091365066;
		case 113:
			return -346602855;
		case 114:
			return -642855470;
		case 115:
			return -1294273068;
		case 116:
			return -1181812906;
		case 117:
			return 2016458991;
		case 118:
			return 200716381;
		case 119:
			return -1845137425;
		case 120:
			return 787092883;
		case 121:
			return 888483612;
		case 122:
			return 2063500509;
		case 123:
			return -1570130076;
		case 124:
			return 262797908;
		case 125:
			return 2012255077;
		case 126:
			return 1499632451;
		case 127:
			return -236880317;
		case 128:
			return 1211454712;
		case 129:
			return -626189620;
		case 130:
			return -1438489730;
		case 131:
			return -479537578;
		case 132:
			return -1463903719;
		case 133:
			return 1203863120;
		case 134:
			return -351785645;
		case 135:
			return -895584822;
		case 136:
			return -1723095449;
		case 137:
			return 1915528396;
		case 138:
			return -1266254117;
		case 139:
			return -1614496179;
		case 140:
			return -1490596352;
		case 141:
			return -1047907201;
		case 142:
			return -1202322374;
		case 143:
			return 157340468;
		case 144:
			return 2064288322;
		case 145:
			return -2116748653;
		case 146:
			return 155183949;
		case 147:
			return 825663396;
		case 148:
			return 976967808;
		case 149:
			return 590738432;
		case 150:
			return 1708896805;
		case 151:
			return 2035135006;
		case 152:
			return 334691246;
		case 153:
			return -835870147;
		case 154:
			return -1267680873;
		case 155:
			return 1153433438;
		case 156:
			return 1489424180;
		case 157:
			return -904522836;
		case 158:
			return 1611867516;
		case 159:
			return -1119986744;
		case 160:
			return -941621037;
		case 161:
			return 101270175;
		case 162:
			return -875013288;
		case 163:
			return -1541719198;
		case 164:
			return 842085562;
		case 165:
			return 1887179278;
		case 166:
			return 1468744908;
		case 167:
			return -1248823782;
		case 168:
			return 1154537543;
		case 169:
			return -1244566857;
		case 170:
			return -1255654531;
		case 171:
			return -2137705453;
		case 172:
			return -1924253471;
		case 173:
			return 1990527907;
		case 174:
			return -1963575852;
		case 175:
			return -2051828336;
		case 176:
			return 1798123698;
		case 177:
			return 495975404;
		case 178:
			return -665208900;
		case 179:
			return -2090796305;
		case 180:
			return 1649401908;
		case 181:
			return -2103309026;
		case 182:
			return 1582509135;
		case 183:
			return -1471337442;
		case 184:
			return -1207177750;
		case 185:
			return 1269504651;
		case 186:
			return 1519769314;
		case 187:
			return 644398018;
		case 188:
			return 107613027;
		case 189:
			return 93270913;
		case 190:
			return -2118935736;
		case 191:
			return -536214615;
		case 192:
			return 1772867250;
		case 193:
			return 766204040;
		case 194:
			return 564321544;
		case 195:
			return -434046439;
		case 196:
			return 728527958;
		case 197:
			return -1923952042;
		case 198:
			return -749877125;
		case 199:
			return 1857771831;
		case 200:
			return 273544526;
		case 201:
			return 1068458324;
		case 202:
			return 600894625;
		case 203:
			return -1463447134;
		case 204:
			return -1161401818;
		case 205:
			return 1888618008;
		case 206:
			return 1225419284;
		case 207:
			return 1127626385;
		case 208:
			return -1211596176;
		case 209:
			return 1811646877;
		case 210:
			return 1651578691;
		case 211:
			return 1382238315;
		case 212:
			return -2099616401;
		case 213:
			return 946618725;
		case 214:
			return -862103290;
		case 215:
			return -578476660;
		case 216:
			return 333834761;
		case 217:
			return -1530925183;
		case 218:
			return -809702995;
		case 219:
			return -267638862;
		case 220:
			return 1323614307;
		case 221:
			return -2094518374;
		case 222:
			return -209614658;
		case 223:
			return -2011961582;
		case 224:
			return 1656869860;
		case 225:
			return -969870146;
		case 226:
			return 1319079466;
		case 227:
			return -1688741952;
		case 228:
			return -1537888061;
		case 229:
			return 1417063580;
		case 230:
			return 992974374;
		case 231:
			return -1714801835;
		case 232:
			return -134912699;
		case 233:
			return 41531735;
		case 234:
			return -1175686941;
		case 235:
			return -1834878085;
		case 236:
			return 1672605872;
		case 237:
			return 1083028949;
		case 238:
			return 890539395;
		case 239:
			return -1603547373;
		case 240:
			return -748173978;
		case 241:
			return 1949355378;
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

char* func_80(int iParam0)
{
	switch (iParam0)
	{
		case 1008523256:
			return "time_block";
		case 1141833051:
			return "mission";
		case 830686115:
			return "mission_type(type=%x)/mission";
		case 1371816784:
			return "volume";
		case -279039872:
			return "volume_component";
		case -347364204:
			return "nav_block_volume";
		case -1591356522:
			return "blocking_object_flag";
		case -1481147674:
			return "location_flag";
		case 1071445036:
			return "setting";
		case 1393764479:
			return "scenario";
		case 416600242:
			return "door";
		case 1774314862:
			return "force_volume";
		case 1624339917:
			return "ped";
		case -702452069:
			return "prop";
		case -1697453237:
			return "ipl";
		case 935565856:
			return "lantern";
		case 164389658:
			return "prop_set";
		case -3633128:
			return "veg_mod";
		case 568979268:
			return "invalid_scenario";
		case -742165699:
			return "scenario_flag";
		case 1241889488:
			return "veg_flag";
		case -1450969535:
			return "anim";
		case 135103436:
			return "name";
		case -1562463744:
			return "turn_in_type";
		case -569428078:
			return "item";
		case 1034986020:
			return "interior";
		case 1282514153:
			return "transition";
		case 699547230:
			return "Location";
		case -1188075274:
			return "Mission_Giver";
		case -307865396:
			return "location";
		case -340432202:
			return "required_volume";
		case 891000470:
			return "mission_type";
		case -1785915344:
			return "unlock";
		case 95610146:
			return "state";
		case -175154863:
			return "string";
		case -779715008:
			return "flag";
		case 966721050:
			return "attribute";
		case 1773322216:
			return "weapon";
		case 965995012:
			return "warp_location";
		case -2106942431:
			return "flags";
		case 1772846069:
			return "giver";
		case -1782208300:
			return "Gun_for_Hire";
		case 466723622:
			return "Locations";
		case -155807419:
			return "Mission_Givers";
		case 369580868:
			return "Player_Bounties";
		case 1862983441:
			return "Use_Contexts";
		case -1462149998:
			return "location_flags";
		case 1097539553:
			return "location_flag(%i)";
		case -1479366685:
			return "settings";
		case 1475807964:
			return "setting(%i)";
		case 504293064:
			return "Dialogue";
		case -678729477:
			return "Missions";
		case 1635370648:
			return "Location(location=%x)";
		case 741518720:
			return "Mission_Giver(giver=%x)";
		case -1021330426:
			return "interaction_lockon";
		case -879824208:
			return "mission_giver_creation_data";
		case 56746299:
			return "schedule";
		case 1915534289:
			return "time_block(%i)";
		case 1089670230:
			return "mission(%i)";
		case 1179867258:
			return "volumes";
		case -328876172:
			return "volume(%i)";
		case 824485797:
			return "volume_component(%i)";
		case -146546566:
			return "volume_locks";
		case -733684727:
			return "volume_lock(%i)";
		case -750441052:
			return "scenarios";
		case 2080739522:
			return "nav_block_volume(%i)";
		case 1250184037:
			return "blocking_object_flags";
		case 1142477451:
			return "volume";
		case -1202322374:
			return "anti_grief_volumes";
		case -467924289:
			return "prop_sets";
		case 1034671917:
			return "props";
		case -1442893430:
			return "peds";
		case 957547265:
			return "script_created_scenarios";
		case 1781322358:
			return "veg_mods";
		case 1219330971:
			return "conditional_anims";
		case -2110119917:
			return "transitions";
		case 709191463:
			return "transition(%i)";
		case 2038044382:
			return "anim(%i)";
		case 1062084355:
			return "force_volumes";
		case -690423049:
			return "doors";
		case 202835363:
			return "scenario(%i)";
		case -293519133:
			return "prop_set(%i)";
		case 592206679:
			return "prop(%i)";
		case -816725755:
			return "ipl(%i)";
		case -255537257:
			return "lantern(%i)";
		case -770038426:
			return "ped(%i)";
		case -1940881994:
			return "unreachable_scearios";
		case -1099377300:
			return "invalid_scenario(%i)";
		case -1298580726:
			return "scenario_flags";
		case -1838764391:
			return "scenario_flag(%i)";
		case 1537295589:
			return "veg_flag(%i)";
		case -26782235:
			return "force_volume(%i)";
		case 1465961145:
			return "door(%i)";
		case -150140702:
			return "mission_giver_data";
		case 925148616:
			return "mission_giver_names";
		case -586196356:
			return "name(%i)";
		case -989277348:
			return "blip_data";
		case -1045571630:
			return "dialogue_type(type=%x)";
		case -1028785813:
			return "conversation(script_dialogue_handle=%x)";
		case -944306928:
			return "mission(unlock=%x)";
		case -1799624227:
			return "mission(type=%x)";
		case -1413825410:
			return "mission_data";
		case -1083767826:
			return "interiors";
		case 1392091586:
			return "interior(%i)";
		case 1269397350:
			return "name(name_type=%x)";
		case -1808878008:
			return "required_volume(%i)";
		case 696574474:
			return "required_volume_type(type=%x)";
		case 1280983896:
			return "required_volumes_types";
		case -473520653:
			return "mission_giver_type(type=%x)";
		case -1142735215:
			return "attachment";
		case -662059387:
			return "Location(%i)";
		case 1196324698:
			return "Location(id=%x)";
		case 1781673553:
			return "Mission_Giver(%i)";
		case 1091365066:
			return "mission_giver_name(type=%x)";
		case -346602855:
			return "locations";
		case -642855470:
			return "location(%i)";
		case -1294273068:
			return "Location(%i)";
		case -1181812906:
			return "veg_mod(%i)";
		case 2016458991:
			return "veg_mod_data(type=%x)";
		case 200716381:
			return "mission_flags";
		case -1845137425:
			return "mission_flag(%i)";
		case 787092883:
			return "door_config(config=%x)";
		case 888483612:
			return "mission_type(type=%x)";
		case 2063500509:
			return "mission_type(%i)";
		case -1570130076:
			return "mission_types";
		case 262797908:
			return "unlock(%i)";
		case 2012255077:
			return "state(%i)";
		case 1499632451:
			return "strings";
		case -236880317:
			return "string(%i)";
		case 1211454712:
			return "scenario";
		case -626189620:
			return "time_block(%i)/mission(unlock=%x)";
		case -1438489730:
			return "town(id=%x)";
		case -479537578:
			return "volume(script_volume_type=%x)";
		case -1463903719:
			return "town_volumes";
		case 1203863120:
			return "map_props";
		case -351785645:
			return "ipls";
		case -895584822:
			return "lanterns";
		case -1723095449:
			return "flags(type=%x)";
		case 157340468:
			return "nav_block_volumes";
		case 2064288322:
			return "volume";
		case -2116748653:
			return "blocking_object_flags";
		case 155183949:
			return "blocking_object_flag(%i)";
		case 825663396:
			return "ped(role=%x)";
		case 1915528396:
			return "flag(%i)";
		case -1266254117:
			return "attributes";
		case -1614496179:
			return "attribute(%i)";
		case -1490596352:
			return "weapons";
		case -1047907201:
			return "weapon(%i)";
		case 976967808:
			return "warp_locations";
		case 590738432:
			return "warp_location(%i)";
		case 1708896805:
			return "scene";
		case 2035135006:
			return "giver_schedule";
		case 334691246:
			return "hour(%i)";
		case -835870147:
			return "flags(%i)";
		case -1267680873:
			return "giver(%i)";
		case 1153433438:
			return "dialogue";
		case 1489424180:
			return ":dialogue_star_handle";
		case -904522836:
			return ":name";
		case 1611867516:
			return ":volume_name";
		case -1119986744:
			return ":conditional";
		case -941621037:
			return ":attach_bone";
		case 101270175:
			return ":anim_scene_name";
		case -875013288:
			return ":playlist_name";
		case -1541719198:
			return ":prop_name";
		case 842085562:
			return ":unlock";
		case 1887179278:
			return ":unlock_group";
		case 1468744908:
			return "mission(%i):unlock";
		case -1248823782:
			return ":mission_type";
		case 1154537543:
			return ":mission_name";
		case -1244566857:
			return ":dialogue_id";
		case -1255654531:
			return ":model";
		case -2137705453:
			return ":name";
		case -1924253471:
			return ":name_type";
		case 1990527907:
			return ":blip_style_close";
		case -1963575852:
			return ":blip_modifier_close";
		case -2051828336:
			return ":blip_sprite_close";
		case 1798123698:
			return ":flag";
		case 495975404:
			return ":script_volume_type";
		case -665208900:
			return ":type";
		case -2090796305:
			return ":required_volume_config";
		case 1649401908:
			return ":type";
		case -2103309026:
			return ":attach_to_model";
		case 1582509135:
			return ":scenario_author_type";
		case -1471337442:
			return ":blip_sprite";
		case -1207177750:
			return ":blip_style";
		case 1269504651:
			return ":blip_region";
		case 1519769314:
			return ":valid_location";
		case 644398018:
			return ":location";
		case 107613027:
			return ":giver";
		case 93270913:
			return ":blip";
		case -2118935736:
			return ":blip_modifier";
		case -536214615:
			return ":prop_set_name";
		case 564321544:
			return ":prop_set_placement_type";
		case -434046439:
			return ":door_id";
		case 728527958:
			return ":outfit";
		case -1923952042:
			return ":command_hash";
		case -749877125:
			return ":honor_requirement";
		case 1857771831:
			return ":loadout";
		case 273544526:
			return ":ipl_group";
		case 1068458324:
			return ":ipl_veg_mod";
		case 600894625:
			return ":ipl_nav_mesh";
		case -1463447134:
			return ":id";
		case -1161401818:
			return ":location_type";
		case 1888618008:
			return ":inventory_item";
		case 1225419284:
			return ":weapon";
		case 1127626385:
			return ":attach_point";
		case -1211596176:
			return ":use";
		case 1772867250:
			return ":scenario_prop";
		case 766204040:
			return ":scenario_mapping";
		case 1811646877:
			return ":texture";
		case 1651578691:
			return ":document";
		case 1382238315:
			return ":gender";
		case -2099616401:
			return ":handle";
		case 946618725:
			return ":value";
		case -862103290:
			return ":use_veg_mod";
		case -578476660:
			return ":force_to_be_object";
		case 333834761:
			return ":disable_scenario";
		case -1530925183:
			return ":clear_space";
		case -809702995:
			return ":should_be_locked";
		case -267638862:
			return ":is_breakable";
		case 1323614307:
			return ":snap_to";
		case -2094518374:
			return ":radius";
		case -209614658:
			return ":model_search_radius";
		case -2011961582:
			return ":heading";
		case 1656869860:
			return ":float";
		case -969870146:
			return ":launch_radius_offline";
		case 1319079466:
			return ":launch_radius_online";
		case -1688741952:
			return ":z_probe";
		case -1537888061:
			return ":open_ratio";
		case 1417063580:
			return ":auto_close_rate";
		case 992974374:
			return ":spawn_heading";
		case -1714801835:
			return ":interior_coords";
		case -134912699:
			return ":position";
		case 41531735:
			return ":orientation";
		case -1175686941:
			return ":scale";
		case -1834878085:
			return ":model_search_position";
		case 1672605872:
			return ":launch_coords";
		case 1083028949:
			return ":rotation";
		case 890539395:
			return ":spawn_position";
		case -1603547373:
			return ":destination_position";
		case -748173978:
			return ":destination_orientation";
		case 1949355378:
			return ":origin";
		default:
			break;
	}
	return "";
}

int func_81(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -792947925;
		case 1:
			return -1427946892;
		case 2:
			return 408367626;
		case 3:
			return -1622280771;
		case 4:
			return 1394196983;
		case 5:
			return 135054243;
		case 6:
			return -276973166;
		case 7:
			return 218782838;
		case 8:
			return 1811778263;
		case 9:
			return -1182771454;
		case 10:
			return 33417155;
		case 11:
			return 12932893;
		case 12:
			return 767213493;
		case 13:
			return -2017210649;
		case 14:
			return 581202040;
		case 15:
			return 2062917018;
		case 16:
			return -620047125;
		case 17:
			return -1250873360;
		case 18:
			return 154896618;
		case 19:
			return -371275865;
		case 20:
			return 1005476533;
		case 21:
			return 1957572717;
		case 22:
			return 2125319032;
		case 23:
			return -1581105240;
		case 24:
			return -667693420;
		case 25:
			return -1523280739;
		case 26:
			return 1937201256;
		case 27:
			return 2002802057;
		case 28:
			return 938696127;
		case 29:
			return 924791973;
		case 30:
			return -1029131400;
		case 31:
			return -118633223;
		case 32:
			return 1217673812;
		case 33:
			return 499583568;
		case 34:
			return -1969117434;
		case 35:
			return -151415096;
		case 36:
			return 1570262717;
		case 37:
			return -419812745;
		case 38:
			return 1134292740;
		case 39:
			return -1445468930;
		case 40:
			return 327661882;
		case 41:
			return 314220799;
		case 42:
			return 402983180;
		case 43:
			return -1287008399;
		case 44:
			return 460561235;
		case 45:
			return -377576419;
		case 46:
			return -1418408851;
		case 47:
			return -1592717000;
		case 48:
			return -1108141625;
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

char* func_82(int iParam0)
{
	switch (iParam0)
	{
		case -792947925:
			return "mission_type";
		case -1427946892:
			return "mission";
		case 408367626:
			return "mission_flag";
		case -1622280771:
			return "string";
		case 1394196983:
			return "mission_flags";
		case 135054243:
			return "map";
		case -276973166:
			return "mission_type_flags";
		case 218782838:
			return "mission_type_flag";
		case 1811778263:
			return "stat";
		case -1182771454:
			return "hour";
		case 33417155:
			return "Net_Gun_For_Hire_Missions";
		case 12932893:
			return "mission_type(type=%x)";
		case 767213493:
			return "mission_type(%i)";
		case -2017210649:
			return "mission(unlock=%x)";
		case 581202040:
			return "mission(%i)";
		case 2062917018:
			return "mission_data";
		case -620047125:
			return "strings";
		case -1250873360:
			return "string(%i)";
		case 154896618:
			return "mission_flags(type=%x)";
		case -371275865:
			return "mission_flags(%i)";
		case 1005476533:
			return "mission_flag(%i)";
		case 1957572717:
			return "string(type=%x)";
		case 2125319032:
			return "mappings";
		case -1581105240:
			return "map(%i)";
		case -667693420:
			return "map(type=%x)";
		case -1523280739:
			return "mission_type_flags(type=%x)";
		case 1937201256:
			return "mission_type_flags(%i)";
		case 2002802057:
			return "mission_type_flag(%i)";
		case 938696127:
			return "stats";
		case 924791973:
			return "stat(%i)";
		case -1029131400:
			return "unavailable_hours";
		case -118633223:
			return "hour(%i)";
		case 1217673812:
			return ":unlock_group";
		case 499583568:
			return ":unlock";
		case -1969117434:
			return ":mission_name";
		case -151415096:
			return ":dialogue_id";
		case 1570262717:
			return ":flag";
		case -419812745:
			return ":type";
		case 1134292740:
			return ":name";
		case -1445468930:
			return ":honor_requirement";
		case 327661882:
			return ":anim_scene_id";
		case 314220799:
			return ":hash";
		case 402983180:
			return ":id";
		case -1287008399:
			return ":base_id";
		case 460561235:
			return ":item";
		case -377576419:
			return ":region_id";
		case -1418408851:
			return ":region_name";
		case -1592717000:
			return ":min_posse_members";
		case -1108141625:
			return ":hour";
		default:
			break;
	}
	return "";
}

int func_83(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 497608077;
		case 1:
			return 1549541;
		case 2:
			return -1544070393;
		case 3:
			return 601477620;
		case 4:
			return 1333416092;
		case 5:
			return -1217753077;
		case 6:
			return 187579888;
		case 7:
			return -100724832;
		case 8:
			return 630918774;
		case 9:
			return 1372075093;
		case 10:
			return -1854922634;
		case 11:
			return -1519814088;
		case 12:
			return 472287195;
		case 13:
			return 1969053457;
		case 14:
			return -245080631;
		case 15:
			return 1758962534;
		case 16:
			return -607359033;
		case 17:
			return -1237276897;
		case 18:
			return 635413302;
		case 19:
			return -22626725;
		case 20:
			return 1401821022;
		case 21:
			return -789427168;
		case 22:
			return -1426815576;
		case 23:
			return 899166212;
		case 24:
			return -786270192;
		case 25:
			return 608242665;
		case 26:
			return 843787590;
		case 27:
			return 650443163;
		case 28:
			return -59088530;
		case 29:
			return -666456239;
		case 30:
			return 1591836767;
		case 31:
			return -606642812;
		case 32:
			return -34107655;
		case 33:
			return 1808784790;
		case 34:
			return -696517180;
		case 35:
			return -1363671161;
		case 36:
			return 1676892178;
		case 37:
			return -804733785;
		case 38:
			return 271069761;
		case 39:
			return 1407961884;
		case 40:
			return 773420852;
		case 41:
			return 1690645077;
		case 42:
			return 1002916547;
		case 43:
			return -1277273758;
		case 44:
			return -2079257644;
		case 45:
			return -277313798;
		case 46:
			return 223434839;
		case 47:
			return 108319586;
		case 48:
			return -339551293;
		case 49:
			return 459624884;
		case 50:
			return 830448359;
		case 51:
			return 1958896072;
		case 52:
			return 1493566732;
		case 53:
			return 409963779;
		case 54:
			return -260632549;
		case 55:
			return -986334861;
		case 56:
			return -1995351236;
		case 57:
			return -1572019582;
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

char* func_84(int iParam0)
{
	switch (iParam0)
	{
		case 497608077:
			return "entities";
		case 1549541:
			return "entity";
		case -1544070393:
			return "flags";
		case 601477620:
			return "flag";
		case 1333416092:
			return "scene";
		case -1217753077:
			return "player";
		case 187579888:
			return "playlist";
		case -100724832:
			return "volume";
		case 630918774:
			return "component";
		case 1372075093:
			return "Gun_for_Hire_Cutscene";
		case -1854922634:
			return "Givers";
		case -1519814088:
			return "giver(unlock=%x)";
		case 472287195:
			return "scene(type=%x)";
		case 1969053457:
			return "scene(%i)";
		case -245080631:
			return "entities(%i)";
		case 1758962534:
			return "entity(%i)";
		case -607359033:
			return "flags(%i)";
		case -1237276897:
			return "flags(type=%x)";
		case 635413302:
			return "flag(%i)";
		case -22626725:
			return "location_data";
		case 1401821022:
			return "origins";
		case -789427168:
			return "location(unlock=%x)";
		case -1426815576:
			return "end";
		case 899166212:
			return "positions";
		case -786270192:
			return "players";
		case 608242665:
			return "player(%i)";
		case 843787590:
			return "exceptions";
		case 650443163:
			return "playlists";
		case -59088530:
			return "playlist(%i)";
		case -666456239:
			return "volumes";
		case 1591836767:
			return "volume(%i)";
		case -606642812:
			return "component(%i)";
		case -34107655:
			return "playlist_mappings";
		case 1808784790:
			return "map(mission_playlist=%x)";
		case -696517180:
			return "scenario_mappings";
		case -1363671161:
			return "scene_type(type=%x)";
		case 1676892178:
			return "scenario_data";
		case -804733785:
			return "scenario";
		case 271069761:
			return ":type";
		case 1407961884:
			return ":model";
		case 773420852:
			return ":trigger";
		case 1690645077:
			return ":scenario_type";
		case 1002916547:
			return ":ped_id";
		case -1277273758:
			return ":handle";
		case -2079257644:
			return ":bone";
		case -277313798:
			return ":name";
		case 223434839:
			return ":section";
		case 108319586:
			return ":position";
		case -339551293:
			return ":origin";
		case 459624884:
			return ":orientation";
		case 830448359:
			return ":scale";
		case 1958896072:
			return ":radius";
		case 1493566732:
			return ":heading";
		case 409963779:
			return ":load_distance";
		case -260632549:
			return ":gameplay_cam";
		case -1572019582:
			return ":max_players";
		case -986334861:
			return ":can_reset";
		case -1995351236:
			return ":reset_props_on_end";
		default:
			break;
	}
	return "";
}

int func_85(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -735674404;
		case 1:
			return -232245152;
		case 2:
			return -1871400260;
		case 3:
			return 856637467;
		case 4:
			return -510412804;
		case 5:
			return 1200720527;
		case 6:
			return -1083105766;
		case 7:
			return -1918309560;
		case 8:
			return -1486539200;
		case 9:
			return -514504777;
		case 10:
			return 2019543834;
		case 11:
			return 1796435875;
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

char* func_86(int iParam0)
{
	switch (iParam0)
	{
		case -735674404:
			return "type";
		case -232245152:
			return "gfh_dialogue";
		case -1871400260:
			return "giver(giver=%x)";
		case 856637467:
			return "type(id=%x)";
		case -510412804:
			return "type(%i)";
		case 1200720527:
			return "line(id=%x)";
		case -1083105766:
			return "line(root=%x)";
		case -1918309560:
			return "location(id=%x)";
		case -1486539200:
			return "context(id=%x)";
		case -514504777:
			return ":subtitle_group_id";
		case 2019543834:
			return ":root";
		case 1796435875:
			return ":id";
		default:
			break;
	}
	return "";
}

char* func_87()
{
	return "GFHI";
}

bool func_88(char* sParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	if (iParam1 < 1)
	{
		iParam1 = 10;
	}
	if (!_does_text_database_exist(sParam0))
	{
		iVar0 = 0;
		return false;
	}
	bVar1 = false;
	while ((_text_database_request(sParam0) == 0 && iVar0 < iParam1) && !bVar1)
	{
		bVar1 = func_18(bParam3, bParam4);
		iVar0++;
		wait(0);
	}
	bVar1 = func_18(bParam3, bParam4);
	if (bVar1)
	{
		func_192();
	}
	if (iVar0 >= iParam1)
	{
		iVar0 = 0;
		return false;
	}
	iVar0 = 0;
	while ((!_text_database_has_loaded(sParam0) && iVar0 < iParam1) && !bVar1)
	{
		bVar1 = func_18(bParam3, bParam4);
		iVar0++;
		wait(0);
	}
	bVar1 = func_18(bParam3, bParam4);
	if (bVar1)
	{
		func_192();
	}
	if (iVar0 >= iParam1)
	{
		iVar0 = 0;
		return false;
	}
	iVar0 = 0;
	return true;
}

int func_89(int iParam0)
{
	return (*Global_1116202)[iParam0]->f_2;
}

void func_90(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_193(iParam0, 1);
	}
	else
	{
		func_194(iParam0, 1);
	}
}

void func_91(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 86)
	{
		func_196(2, &(uParam0->f_112.f_1), func_195(iVar0, 1));
		iVar0++;
	}
}

int func_92(int iParam0)
{
	return Global_1118808[iParam0];
}

int func_93(int iParam0)
{
	return Global_1116202[iParam0];
}

bool func_94(int iParam0)
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

int func_95(int iParam0)
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

bool func_96(struct<2> Param0, var uParam2)
{
	if (!func_23(Param0))
	{
		return false;
	}
	func_197(uParam2);
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

int func_97(var uParam0)
{
	if (func_198() == 0)
	{
		return 0;
	}
	if (!_0x603ac35fd4602c76(func_198()))
	{
		return 0;
	}
	*uParam0 = func_198();
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_1 = 0;
	return 1;
}

int func_98(var uParam0)
{
	uParam0->f_2 = 1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return 0;
	}
	return 1;
}

int func_99(var uParam0, int iParam1)
{
	uParam0->f_2 = 2;
	uParam0->f_3 = iParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return 0;
	}
	return 1;
}

int func_100(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = 5;
	uParam0->f_3 = iParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return 0;
	}
	return 1;
}

bool func_101(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_102(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1197740->f_1 && iParam0) != 0;
}

bool func_103(int iParam0, int iParam1)
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

bool func_104()
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
	if (!func_23(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

bool func_105(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_106(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam3 <= 4)
	{
		return;
	}
	iVar0 = get_game_timer();
	if ((iVar0 - uParam1->f_1) < 5000)
	{
		return;
	}
	if (*uParam0 >= 62)
	{
		*uParam0 = 0;
	}
	if (func_199(*uParam2) <= 0)
	{
		return;
	}
	if (*uParam0 >= func_199(*uParam2))
	{
		*uParam0 = 0;
	}
	iVar1 = 0;
	Var2 = { func_200(*uParam2, *uParam0) };
	if (!func_23(Var2))
	{
		*uParam0++;
		return;
	}
	iVar1 = func_25(Var2);
	if (_unlock_is_unlocked(iVar1))
	{
		func_201(*uParam2, *uParam0);
	}
	else
	{
		func_202(*uParam2, *uParam0);
	}
	if (_unlock_is_visible(iVar1))
	{
		func_203(*uParam2, *uParam0);
	}
	else
	{
		func_203(*uParam2, *uParam0);
	}
	uParam1->f_1 = iVar0;
	*uParam0++;
}

void func_107(var uParam0)
{
	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		set_force_object_this_frame(uParam0->f_1[iVar0]->f_1, &(uParam0->f_1[iVar0]));
		iVar0++;
	}
}

bool func_108(int iParam0, int iParam1)
{
	return func_204(&((*Global_1128574)[iParam0]->f_49), iParam1, 3);
}

void func_109(int iParam0)
{
	if (func_205(&((*Global_1128574)[player_id()]->f_49), iParam0, 3))
	{
	}
}

int func_110(var uParam0, var uParam1)
{
	if (!func_206(&Var0, func_179(*uParam1), func_67(uParam1->f_1)))
	{
		return 0;
	}
	uParam0->f_112 = func_208(func_207(uParam1), 0, 4);
	uParam0->f_948 = func_208(func_209(uParam1), 0, 10);
	uParam0->f_105 = func_208(func_210(uParam1), 0, 1);
	uParam0->f_10 = (func_211(uParam1->f_1) + 20f);
	uParam0->f_10.f_1 = (func_211(uParam1->f_1) + 10f);
	if (!func_212(Var0, &(uParam0->f_10.f_2), func_67(uParam1->f_1)))
	{
		return 0;
	}
	if (!func_213(uParam1, Var0, &(uParam0->f_10.f_3), &(uParam0->f_4034.f_98)))
	{
	}
	return 1;
}

int func_111(var uParam0, var uParam1)
{
	if (uParam0->f_112 <= 0)
	{
		return 1;
	}
	_0xed9582b3da8f02b4(uParam0->f_112);
	if (_0x5e420ff293ee5472())
	{
		return 1;
	}
	return 2;
}

int func_112(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_10.f_3.f_9 - 1))
	{
		_text_database_request(uParam0->f_10.f_3[iVar0]);
		iVar0++;
	}
	if (func_71(&(uParam1->f_5), 4))
	{
		_text_database_request("MPINTAU");
	}
	return 1;
}

int func_113(var uParam0, var uParam1)
{
	if (!func_206(&Var0, func_179(*uParam1), func_67(uParam1->f_1)))
	{
		return 0;
	}
	if (!func_214(&Var0, 0))
	{
		return 1;
	}
	uParam0->f_1169 = func_215(Var0, 1034986020);
	if (uParam0->f_1169 == 0)
	{
		return 1;
	}
	else if (uParam0->f_1169 < 0 || uParam0->f_1169 > 1)
	{
		return 0;
	}
	iVar5 = 0;
	while (iVar5 <= (uParam0->f_1169 - 1))
	{
		if (!func_216(Var0, &(uParam0->f_1169), iVar5, uParam1->f_1))
		{
			return 0;
		}
		iVar5++;
	}
	return 1;
}

int func_114(var uParam0)
{
	if (!func_206(&Var0, func_179(*uParam0), func_67(uParam0->f_1)))
	{
		return 0;
	}
	if (!func_217(&Var0))
	{
		return 0;
	}
	iVar6 = func_215(Var0, 1008523256);
	if (iVar6 == 0)
	{
		return 1;
	}
	else if (iVar6 < 0 || iVar6 > 4)
	{
		return 0;
	}
	iVar5 = 0;
	while (iVar5 <= (iVar6 - 1))
	{
		if (!func_218(Var0, iVar5, uParam0))
		{
			return 0;
		}
		iVar5++;
	}
	return 1;
}

int func_115(var uParam0, var uParam1)
{
	if (!func_206(&Var0, func_179(*uParam1), func_67(uParam1->f_1)))
	{
		return 0;
	}
	if (!func_219(&Var0, 0))
	{
		return 1;
	}
	uParam0->f_1183 = func_215(Var0, 1774314862);
	if (uParam0->f_1183 == 0)
	{
		return 1;
	}
	else if (uParam0->f_1183 < 0 || uParam0->f_1183 > 1)
	{
		return 0;
	}
	iVar5 = 0;
	while (iVar5 <= (uParam0->f_1183 - 1))
	{
		if (!func_220(Var0, &(uParam0->f_1183), iVar5, func_67(uParam1->f_1)))
		{
			return 0;
		}
		iVar5++;
	}
	return 1;
}

int func_116(var uParam0, var uParam1)
{
	if (!func_206(&Var0, func_179(*uParam1), func_67(uParam1->f_1)))
	{
		return 0;
	}
	if (!func_221(&Var0))
	{
		return 1;
	}
	iVar6 = func_215(Var0, -702452069);
	if (iVar6 > 22)
	{
		iVar6 = 22;
	}
	iVar5 = 0;
	while (iVar5 <= (iVar6 - 1))
	{
		if (!func_222(Var0, iVar5, uParam0->f_1189.f_1[uParam0->f_1189]))
		{
		}
		else
		{
			uParam0->f_1189++;
		}
		iVar5++;
	}
	return 1;
}

int func_117(var uParam0, var uParam1)
{
	if (!func_206(&Var4, func_179(*uParam1), func_67(uParam1->f_1)))
	{
		return 0;
	}
	if (!func_223(&Var4, 0))
	{
		return 1;
	}
	uVar9 = Var4.f_1;
	iVar2 = func_215(Var4, 416600242);
	iVar1 = 0;
	while (iVar1 <= (iVar2 - 1))
	{
		if (iVar0 >= 1)
		{
		}
		else
		{
			Var4.f_1 = uVar9;
			if (!func_224(&Var4, iVar1))
			{
			}
			else
			{
				Var4.f_2 = 1649401908;
				if (!_datafile_get_hash(&iVar3, &Var4))
				{
				}
				else if (iVar3 == 0)
				{
				}
				else
				{
					iVar10 = iVar3;
					Var4.f_2 = -434046439;
					if (!_datafile_get_hash(&iVar3, &Var4))
					{
					}
					else if (iVar3 == 0)
					{
					}
					else
					{
						iVar11 = iVar3;
						uParam0->f_1565[iVar0] = iVar11;
						uParam0->f_1565[iVar0]->f_1 = iVar10;
						iVar0++;
					}
				}
			}
			iVar1++;
		}
	}
	uParam0->f_1565.f_3 = iVar0;
	return 1;
}

int func_118(var uParam0, var uParam1)
{
	if (!func_206(&Var0, func_179(*uParam1), func_67(uParam1->f_1)))
	{
		return 0;
	}
	if (!func_225(&Var0))
	{
		return 1;
	}
	iVar5 = 0;
	iVar6 = func_215(Var0, -347364204);
	if (iVar6 > 4)
	{
		iVar6 = 4;
	}
	uParam0->f_1569 = 0;
	if (iVar6 > 0)
	{
		iVar5 = 0;
		while (iVar5 <= (iVar6 - 1))
		{
			if (!func_226(Var0, iVar5, uParam1->f_1, uParam0->f_1569.f_1[uParam0->f_1569]))
			{
			}
			else
			{
				uParam0->f_1569++;
			}
			iVar5++;
		}
	}
	return 1;
}

int func_119(var uParam0, var uParam1)
{
	if (!func_206(&Var0, func_179(*uParam1), func_67(uParam1->f_1)))
	{
		return 0;
	}
	if (!func_227(&Var0))
	{
		return 1;
	}
	iVar5 = 0;
	iVar6 = func_215(Var0, 1371816784);
	if (iVar6 > 6)
	{
		iVar6 = 6;
	}
	if (iVar6 > 0)
	{
		iVar5 = 0;
		while (iVar5 <= (iVar6 - 1))
		{
			if (!func_228(Var0, iVar5, uParam0->f_67.f_28[iVar5]))
			{
			}
			iVar5++;
		}
	}
	return 1;
}

int func_120(var uParam0, var uParam1)
{
	if (!func_206(&Var0, func_179(*uParam1), func_67(uParam1->f_1)))
	{
		return 0;
	}
	if (!func_229(&Var0))
	{
		return 1;
	}
	uVar7 = Var0.f_1;
	iVar6 = func_215(Var0, -1697453237);
	if (iVar6 > 2)
	{
		iVar6 = 2;
	}
	iVar5 = 0;
	while (iVar5 <= (iVar6 - 1))
	{
		Var0.f_1 = uVar7;
		if (!func_230(&Var0, iVar5))
		{
		}
		else
		{
			bVar8 = false;
			if (func_231(Var0, uParam0->f_1583.f_1[iVar5]))
			{
				uParam0->f_1583++;
				bVar8 = true;
				set_bit(&(uParam0->f_1583.f_23), iVar5);
			}
			if (func_232(Var0, uParam0->f_1583.f_1[iVar5]))
			{
				if (!bVar8)
				{
					uParam0->f_1583++;
					bVar8 = true;
				}
			}
			if (func_233(Var0, uParam0->f_1583.f_1[iVar5]))
			{
				if (!bVar8)
				{
					uParam0->f_1583++;
					bVar8 = true;
				}
			}
		}
		iVar5++;
	}
	return 1;
}

int func_121(var uParam0, var uParam1)
{
	if (!func_206(&Var0, func_179(*uParam1), func_67(uParam1->f_1)))
	{
		return 0;
	}
	if (!func_234(&Var0))
	{
		return 1;
	}
	uVar7 = Var0.f_1;
	iVar6 = func_215(Var0, 935565856);
	if (iVar6 > 2)
	{
		iVar6 = 2;
	}
	iVar5 = 0;
	while (iVar5 <= (iVar6 - 1))
	{
		Var0.f_1 = uVar7;
		if (func_235(Var0, uParam0->f_1607.f_3[iVar5], iVar5))
		{
			uParam0->f_1607++;
		}
		iVar5++;
	}
	return 1;
}

var func_122(int iParam0)
{
	return (*Global_1120070)[iParam0]->f_3;
}

bool func_123(var uParam0, int iParam1, int iParam2, var uParam3)
{
	iVar10 = func_92(iParam1);
	uVar11 = func_93(iParam2);
	if (!func_236(&Var4, uParam3, iVar10))
	{
		return true;
	}
	uVar9 = Var4.f_1;
	if (func_77())
	{
		if (func_237(iParam1) == -323664079)
		{
			return true;
		}
		if (func_237(iParam1) != -800238780 && func_237(iParam1) != 1015970717)
		{
			bVar12 = func_238(iParam1, iParam2) == -628138157;
		}
	}
	else
	{
		bVar12 = true;
	}
	iVar1 = func_239(Var4, 1333416092);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Var4.f_1 = uVar9;
		if (!func_240(&Var4, iVar0))
		{
		}
		else
		{
			iVar2 = func_241(Var4);
			if (iVar2 == 0)
			{
			}
			else
			{
				iVar3 = func_242(iVar2);
				if (iVar3 == -1)
				{
				}
				else if (!bVar12 && iVar3 == 0)
				{
				}
				else if (func_243(Var4, uVar11))
				{
				}
				else if (!func_244(Var4, uParam0->f_19[iVar3], uVar11))
				{
				}
				else if (!func_245(Var4, uParam0->f_19[iVar3], uVar11))
				{
				}
				else if (!func_246(Var4, uParam0->f_19[iVar3], iVar10, uVar11))
				{
				}
				else
				{
					func_247((*uParam0)[iVar3], 0, uVar11, iVar3);
				}
			}
		}
		iVar0++;
	}
	return true;
}

int func_124(var uParam0, var uParam1)
{
	if ((get_game_timer() - uParam0->f_4.f_2) >= 40000)
	{
		return 0;
	}
	if (!func_30(&(uParam0->f_8), 4))
	{
		iVar0 = 0;
		while (iVar0 <= (uParam0->f_1169 - 1))
		{
			if (is_valid_interior(&(uParam0->f_1169.f_1[iVar0])))
			{
				if (is_interior_ready(&(uParam0->f_1169.f_1[iVar0])))
				{
					Jump @140; //curOff = 91
				}
				else
				{
					return 2;
				}
			}
			else if (is_interior_ready(get_interior_at_coords(uParam0->f_1169.f_1[iVar0]->f_1)))
			{
				Jump @140; //curOff = 130
			}
			else
			{
				return 2;
			}
			iVar0++;
		}
		func_74(&(uParam0->f_8), 4, func_67(uParam1->f_1));
	}
	if (!func_30(&(uParam0->f_8), 8))
	{
		iVar1 = 0;
		while (iVar1 <= (uParam0->f_10.f_3.f_9 - 1))
		{
			if (!_text_database_has_loaded(uParam0->f_10.f_3[iVar1]))
			{
				return 2;
			}
			iVar1++;
		}
		if (func_71(&(uParam1->f_5), 4))
		{
			if (!_text_database_has_loaded("MPINTAU"))
			{
				return 2;
			}
		}
		func_74(&(uParam0->f_8), 8, func_67(uParam1->f_1));
	}
	return 1;
}

void func_125(var uParam0, var uParam1)
{
	*uParam0 = { vVar0 };
}

void func_126(var uParam0, int iParam1, var uParam2)
{
	*uParam0 = iParam1;
}

void func_127(var uParam0, var uParam1)
{
	uParam0->f_1++;
}

void func_128(var uParam0, var uParam1)
{
	*uParam0++;
}

void func_129(var uParam0, var uParam1)
{
	uParam0->f_1 = Var0.f_1;
}

int func_130(var uParam0, var uParam1)
{
	if (!func_206(&Var0, func_179(*uParam1), func_67(uParam1->f_1)))
	{
		return 0;
	}
	if (!func_248(&Var0))
	{
		return 0;
	}
	iVar5 = func_215(Var0, 1371816784);
	if (iVar5 <= 0 || iVar5 > 21)
	{
		return 0;
	}
	if (!func_249(Var0, &(uParam0->f_67), func_67(uParam1->f_1)))
	{
		return 0;
	}
	iVar6 = 0;
	while (iVar6 <= (iVar5 - 1))
	{
		if (!func_250(uParam0, uParam1, Var0, iVar6))
		{
			return 0;
		}
		iVar6++;
	}
	iVar6 = 0;
	while (iVar6 <= 20)
	{
		if (!func_204(&(uParam0->f_67), iVar6, 1))
		{
		}
		else if (!_does_volume_exist(&(uParam0->f_67.f_2[iVar6])))
		{
			return 0;
		}
		iVar6++;
	}
	return 1;
}

int func_131(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 <= 20)
	{
		iVar1 = func_166(iVar0, 1);
		if (!_does_volume_exist(&(uParam0->f_67.f_2[iVar0])))
		{
		}
		else
		{
			switch (iVar1)
			{
				case -658202764:
				case -425837785:
				case 118717457:
					_0x18262cafebb5fbe1(&(uParam0->f_67.f_2[iVar0]), 2238463, 16384, 0, -1, -1, 0);
					func_251(&(uParam0->f_67.f_27), func_167(iVar1), func_170(*uParam1));
					break;
				case -551448260:
				case 387219749:
				case 695084504:
					_0xb56d41a694e42e86(&(uParam0->f_67.f_2[iVar0]), 2238463, 16384, 0, -1, -1, 0);
					func_251(&(uParam0->f_67.f_27), func_167(iVar1), func_170(*uParam1));
					break;
				case -476976667:
					break;
					break;
				case -1708806587:
				case -1162096896:
				case -860862750:
				case -611123040:
				case -544934773:
				case -423179200:
				case 321953502:
				case 548543805:
				case 754594631:
				case 1072715680:
				case 1186273574:
				case 1428160146:
				case 1921928004:
					break;
					break;
				case 1983526175:
					uParam0->f_67.f_24 = _0x4c39c95ae5db1329(&(uParam0->f_67.f_2[iVar0]), 0, 15);
					break;
				default:
					break;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_132(var uParam0, var uParam1)
{
	if (uParam0->f_1569 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (uParam0->f_1569 - 1))
		{
			if (uParam0->f_1569.f_1[iVar0]->f_1 > -1 && uParam0->f_1569.f_1[iVar0]->f_1 < 21)
			{
				if (_does_volume_exist(&(uParam0->f_67.f_2[uParam0->f_1569.f_1[iVar0]->f_1])))
				{
					_0x19c7567d2f2287d6(&(uParam0->f_67.f_2[uParam0->f_1569.f_1[iVar0]->f_1]), uParam0->f_1569.f_1[iVar0]->f_2);
				}
			}
			else if (_does_volume_exist(&(uParam0->f_1569.f_1[iVar0])))
			{
				_0x19c7567d2f2287d6(&(uParam0->f_1569.f_1[iVar0]), uParam0->f_1569.f_1[iVar0]->f_2);
			}
			iVar0++;
		}
	}
	return 1;
}

int func_133(var uParam0, var uParam1)
{
	if (!func_206(&Var0, func_179(*uParam1), func_67(uParam1->f_1)))
	{
		return 0;
	}
	if (!func_252(&Var0, 0))
	{
		return 1;
	}
	iVar6 = func_215(Var0, -3633128);
	if (iVar6 == 0)
	{
		return 1;
	}
	else if (iVar6 < 0 || iVar6 >= 4)
	{
		return 0;
	}
	iVar5 = 0;
	while (iVar5 <= (iVar6 - 1))
	{
		if (!func_253(&(uParam0->f_1164), Var0, iVar5, func_67(uParam1->f_1)))
		{
		}
		iVar5++;
	}
	return 1;
}

int func_134(var uParam0, int iParam1)
{
	if (!func_206(&Var0, func_179(*uParam0), func_67(uParam0->f_1)))
	{
		return 0;
	}
	if (!func_223(&Var0, 0))
	{
		return 1;
	}
	iVar6 = func_215(Var0, 416600242);
	iVar5 = 0;
	while (iVar5 <= (iVar6 - 1))
	{
		if (!func_254(Var0, iVar5, iParam1))
		{
		}
		iVar5++;
	}
	return 1;
}

void func_135(var uParam0)
{
	if (func_255(uParam0->f_2))
	{
		func_257(*uParam0, func_256(uParam0->f_1));
	}
	else
	{
		func_257(*uParam0, 303108068);
	}
}

void func_136(var uParam0, int iParam1, var uParam2)
{
	*uParam0 = iParam1;
}

Vector3 func_137(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false, false);
}

void func_138(var uParam0, var uParam1, vector3 vParam2)
{
	if (func_258(uParam0, uParam1, vParam2))
	{
		iVar0 = get_player_ped(player_id());
		if (does_entity_exist(_get_carrier_as_ped(iVar0)))
		{
			detach_entity(iVar0, true, true);
		}
		if (_is_ped_carrying(iVar0))
		{
			if (!func_23(func_259()))
			{
				iVar1 = _get_first_entity_ped_is_carrying(iVar0);
				if (is_entity_a_ped(iVar1))
				{
					if (is_ped_a_player(get_ped_index_from_entity_index(iVar1)))
					{
						iVar2 = get_script_task_status(iVar0, -208384378, true);
						if (iVar2 != 0 && iVar2 != 1)
						{
							task_place_carried_entity_at_coord(iVar0, iVar1, vParam2, 2f, 0);
						}
					}
				}
			}
		}
	}
	switch (uParam0->f_3)
	{
		case 0:
			if (!func_71(&(uParam1->f_5), 1))
			{
				func_260(uParam0, uParam1, vParam2);
			}
			break;
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
			if (func_261(uParam0, uParam1, vParam2, uParam0->f_3))
			{
				func_263(*uParam1, func_262(uParam0->f_3));
				switch (uParam0->f_3)
				{
					case 3:
						func_264(uParam0, uParam1);
						break;
					case 2:
						if (uParam1->f_4 == -323664079 && player_id() == Global_1102219->f_3674)
						{
							func_265(func_89(uParam1->f_1), 1);
						}
						break;
				}
			}
			else
			{
				func_266(*uParam1, func_262(uParam0->f_3));
			}
			break;
		case 5:
			if (!_does_volume_exist(&(uParam0->f_67.f_2[func_268(func_267(5), 1)])))
			{
			}
			else if (!func_261(uParam0, uParam1, vParam2, uParam0->f_3))
			{
			}
			else if (!func_269(uParam0, uParam1))
			{
			}
			else
			{
				if (func_30(&(uParam0->f_8), 32))
				{
					if (!func_270(uParam0, uParam1))
					{
						func_184();
						func_183(&(uParam0->f_8), 32, func_93(uParam1->f_1));
					}
				}
				else if (func_270(uParam0, uParam1))
				{
					if (func_271() && &uParam0->f_1730.f_1[0] < 5)
					{
						iVar0 = get_player_ped(player_id());
						iVar3 = get_vehicle_ped_is_in(iVar0, false);
						if (iVar3 != 0)
						{
							iVar4 = get_script_task_status(iVar0, -828834893, true);
							if (iVar4 != 0 && iVar4 != 1)
							{
								task_leave_any_vehicle(iVar0, 0, 64);
							}
						}
						else
						{
							func_272(uParam0);
							func_74(&(uParam0->f_8), 32, func_93(uParam1->f_1));
							if (func_30(&(uParam0->f_8), 16))
							{
								if (func_273(uParam1))
								{
									func_185(1, 3, 0);
									func_183(&(uParam0->f_8), 16, func_93(uParam1->f_1));
								}
							}
							else if (!func_273(uParam1))
							{
								if (!func_274(1, 3))
								{
									func_275(1, 3);
									func_74(&(uParam0->f_8), 16, func_93(uParam1->f_1));
								}
							}
							Jump @1024; //curOff = 717
							if (!_does_volume_exist(&(uParam0->f_67.f_2[func_268(func_267(6), 1)])))
							{
								if (func_30(&(uParam0->f_8), 32))
								{
									func_184();
									func_183(&(uParam0->f_8), 32, func_93(uParam1->f_1));
								}
								if (func_30(&(uParam0->f_8), 16))
								{
									func_185(1, 3, 0);
									func_183(&(uParam0->f_8), 16, func_93(uParam1->f_1));
								}
							}
							else if (!func_261(uParam0, uParam1, vParam2, 6))
							{
								if (func_30(&(uParam0->f_8), 32))
								{
									func_184();
									func_183(&(uParam0->f_8), 32, func_93(uParam1->f_1));
								}
								if (func_30(&(uParam0->f_8), 16))
								{
									func_185(1, 3, 0);
									func_183(&(uParam0->f_8), 16, func_93(uParam1->f_1));
								}
							}
							else
							{
								if (func_30(&(uParam0->f_8), 32))
								{
									if (!func_270(uParam0, uParam1))
									{
										func_184();
										func_183(&(uParam0->f_8), 32, func_93(uParam1->f_1));
									}
								}
								if (func_30(&(uParam0->f_8), 16))
								{
									if (func_274(1, 3))
									{
										if (func_273(uParam1))
										{
											func_185(1, 3, 0);
											func_183(&(uParam0->f_8), 16, func_93(uParam1->f_1));
										}
									}
								}
							}
						}
						if (uParam0->f_3 >= 6)
						{
							uParam0->f_3 = 0;
						}
						else
						{
							uParam0->f_3++;
						}
					}
				}
			}
			default:
				break;
	}
}

void func_139(var uParam0, var uParam1)
{
	func_276(uParam0, uParam1);
}

void func_140(var uParam0, var uParam1)
{
	if (uParam1->f_4 != -323664079)
	{
		return;
	}
	iVar0 = func_277(uParam0);
	iVar1 = func_278(uParam0, iVar0);
	Var2.f_1 = -1;
	switch (iVar1)
	{
		case 0:
			func_279(uParam0, iVar0, 1);
			break;
		case 1:
			func_280(iVar0, func_89(uParam1->f_1));
			func_281(uParam0, iVar0);
			func_279(uParam0, iVar0, 2);
			break;
		case 2:
			if (func_282(uParam0, iVar0))
			{
				func_279(uParam0, iVar0, 1);
			}
			break;
		case 3:
			if (func_283(uParam0, iVar0) != 0)
			{
				func_286(uParam0, iVar0, func_285(func_283(uParam0, iVar0), func_284(uParam0, iVar0), 0, 0));
				func_287(uParam0, iVar0, func_285(func_283(uParam0, iVar0), func_284(uParam0, iVar0), 1, 0));
				func_288(uParam0, iVar0, func_285(func_283(uParam0, iVar0), func_284(uParam0, iVar0), 0, 2));
				func_289(uParam0, iVar0, func_285(func_283(uParam0, iVar0), func_284(uParam0, iVar0), 1, 2));
				func_290(uParam0, iVar0, func_285(func_283(uParam0, iVar0), 0, 0, 3));
				func_291(uParam0, iVar0, func_285(func_283(uParam0, iVar0), 0, 1, 3));
				Var2 = func_283(uParam0, iVar0);
				Var2.f_2 = func_293(func_292(uParam0, iVar0));
				Var2.f_1 = func_284(uParam0, iVar0);
				Var2.f_3 = func_294(iVar0);
				func_295(*uParam1, iVar0, &Var2);
			}
			func_279(uParam0, iVar0, 4);
			break;
		case 4:
			break;
		default:
			break;
	}
	func_296(uParam0);
}

void func_141(var uParam0, var uParam1)
{
	iVar0 = get_player_ped(player_id());
	if (func_297(*uParam1, 2) || func_297(*uParam1, 32))
	{
		if ((func_237(uParam1->f_2) == -1683328900 || func_237(uParam1->f_2) == -323664079) && func_269(uParam0, uParam1))
		{
			set_ped_reset_flag(iVar0, 328, true);
		}
		if (func_29(*uParam1, 4))
		{
			func_298(iVar0, uParam0, uParam1);
		}
		else if (func_23(func_259()))
		{
			if (func_168(&(uParam0->f_67.f_27), func_167(-1162096896)))
			{
				if (_0x91a5f9cbebb9d936(uParam0->f_67.f_25))
				{
					remove_scenario_blocking_area(uParam0->f_67.f_25, false);
					func_171(&(uParam0->f_67.f_27), func_167(-1162096896), func_170(*uParam1));
				}
			}
		}
		else
		{
			func_298(iVar0, uParam0, uParam1);
		}
		func_299(uParam0, uParam1, iVar0);
	}
	func_300(uParam0, uParam1, iVar0);
	bVar1 = func_301(uParam0, 754594631);
	if (func_177(uParam1->f_1, 0) || bVar1)
	{
		if (func_297(*uParam1, 2) || bVar1)
		{
			if (!func_302(1048576, network_player_id_to_int()))
			{
				disable_control_action(0, -640622144, false);
			}
			set_ped_reset_flag(Global_1296859->f_8, 21, true);
			set_ped_reset_flag(Global_1296859->f_8, 2, true);
			set_ped_reset_flag(Global_1296859->f_8, 168, true);
			set_ped_config_flag(Global_1296859->f_8, 43, true);
		}
		else if (!is_entity_dead(Global_1296859->f_8))
		{
			set_ped_config_flag(Global_1296859->f_8, 43, false);
		}
	}
	iVar2 = &uParam0->f_67.f_2[14];
	if (_does_volume_exist(iVar2))
	{
		if (get_closest_fire_pos(&vVar3, _0xf70f00013a62f866(iVar2)))
		{
			if (_0xf256a75210c5c0eb(iVar2, vVar3))
			{
				vVar6 = { _0x3e2a25b2416dd67e(iVar2) };
				if (!func_178(uParam0->f_67.f_35))
				{
					fVar9 = (0.75f * (vVar6.x + vVar6.y));
					stop_fire_in_range(uParam0->f_67.f_35, fVar9);
				}
				else
				{
					stop_fire_in_range(vVar3, (0.5f * (vVar6.x + vVar6.y)));
				}
			}
		}
	}
}

void func_142(var uParam0, var uParam1)
{
	iVar3 = func_256(uParam1->f_1);
	if (iVar3 == func_303(*uParam1))
	{
		return;
	}
	if (iVar3 == -910931556)
	{
		if (!func_255(uParam1->f_2))
		{
			return;
		}
	}
	switch (uParam1->f_4)
	{
		case -323664079:
			iVar4 = 1;
			break;
		default:
			iVar4 = 0;
			break;
	}
	iVar0 = func_304(uParam0, func_303(*uParam1), iVar4);
	iVar1 = func_304(uParam0, iVar3, iVar4);
	if (iVar0 == -1 || iVar1 == -1)
	{
		return;
	}
	switch (iVar4)
	{
		case 1:
			vVar5 = { get_entity_coords(&(uParam0->f_948.f_1[iVar0]), true, false) };
			vVar8 = { get_entity_coords(&(uParam0->f_948.f_1[iVar1]), true, false) };
			break;
		case 0:
			vVar5 = { get_entity_coords(&(uParam0->f_112.f_200[iVar0]), true, false) };
			vVar8 = { get_entity_coords(&(uParam0->f_112.f_200[iVar1]), true, false) };
			break;
	}
	if (!func_305(uParam1, vVar5, 1f))
	{
		return;
	}
	if (!func_305(uParam1, vVar8, 1f))
	{
		return;
	}
	func_257(*uParam1, iVar3);
	switch (iVar4)
	{
		case 1:
			func_306(uParam0, uParam1, iVar0, 1);
			func_306(uParam0, uParam1, iVar1, 1);
			iVar2 = 0;
			while (iVar2 <= (uParam0->f_948 - 1))
			{
				if (iVar2 == iVar0 || iVar2 == iVar1)
				{
				}
				else
				{
					func_306(uParam0, uParam1, iVar2, 1);
				}
				iVar2++;
			}
			iVar2 = 0;
			while (iVar2 <= (uParam0->f_112 - 1))
			{
				func_307(uParam0, uParam1, iVar2, 1);
				iVar2++;
			}
			if (!func_309(func_308(*uParam1), 2))
			{
				func_310(uParam0, uParam1, iVar0);
				func_311(uParam0, uParam1, iVar1);
			}
			break;
		case 0:
			func_307(uParam0, uParam1, iVar0, 1);
			func_307(uParam0, uParam1, iVar1, 1);
			iVar2 = 0;
			while (iVar2 <= (uParam0->f_112 - 1))
			{
				if (iVar2 == iVar0 || iVar2 == iVar1)
				{
				}
				else
				{
					func_307(uParam0, uParam1, iVar2, 1);
				}
				iVar2++;
			}
			iVar2 = 0;
			while (iVar2 <= (uParam0->f_948 - 1))
			{
				func_306(uParam0, uParam1, iVar2, 1);
				iVar2++;
			}
			if (!func_309(func_308(*uParam1), 2))
			{
				func_312(uParam0, uParam1, iVar0);
				func_313(uParam0, uParam1, iVar1);
			}
			break;
	}
}

void func_143(var uParam0, var uParam1, var uParam2)
{
	if (uParam2->f_4 != -323664079)
	{
		return;
	}
	switch (uParam1->f_111)
	{
		case 0:
			if (!does_entity_exist(func_315(*uParam2, func_314(*uParam2))))
			{
				return;
			}
			uParam1->f_124 = 0;
			func_316(uParam1, 1);
			break;
		case 1:
			if (func_317(uParam0, uParam1, uParam2))
			{
				func_316(uParam1, 2);
			}
			break;
		case 2:
			func_160(uParam1, uParam2, 0);
			func_318(uParam0, uParam1);
			if (func_319(uParam2))
			{
				if (!func_320())
				{
					return;
				}
				uParam1->f_126 = 0;
				func_321(*uParam2, 2);
				_databinding_write_data_string(Global_1940311->f_1433.f_54.f_3, _create_var_string(2, "BOUNTY_REPLAY_HEADER"));
				func_322(uParam1);
				func_316(uParam1, 3);
			}
			else if (func_323(uParam2))
			{
				if (!func_324())
				{
					return;
				}
				func_325(&(uParam1->f_25));
				func_316(uParam1, 5);
			}
			break;
		case 3:
			if (Global_1120070->f_8495.f_2)
			{
				if (!func_324())
				{
					return;
				}
				func_316(uParam1, 6);
				func_327(uParam0, uParam1, func_326(*uParam2), 1);
				Global_1120070->f_8495.f_2 = 0;
				return;
			}
			func_328(uParam0, uParam1, uParam2);
			break;
		case 6:
			if (!_is_app_running(get_hash_key("translation_overlay")))
			{
				_0xe8eaff7b41edd291(1921928004, 483933850, 0);
				_close_app_by_hash(get_hash_key("translation_overlay"));
				func_329(*uParam2, 0);
				func_158(uParam1);
				func_316(uParam1, 3);
			}
			break;
		case 5:
			if (uParam1->f_25 != func_326(*uParam2))
			{
				func_330(uParam0, uParam1, uParam2, func_326(*uParam2));
			}
			if (!_is_app_running(get_hash_key("translation_overlay")))
			{
				_0xe8eaff7b41edd291(1921928004, 483933850, 0);
				func_329(*uParam2, 0);
				func_158(uParam1);
				func_316(uParam1, 2);
			}
			else if (!func_323(uParam2))
			{
				_0xe8eaff7b41edd291(1921928004, 483933850, 0);
				_close_app_by_hash(get_hash_key("translation_overlay"));
				func_158(uParam1);
				func_316(uParam1, 2);
			}
			break;
		case 4:
			if (func_331() != -1)
			{
				return;
			}
			if (func_332(*uParam2) == 2)
			{
				func_333(*uParam2, 4);
			}
			func_334(uParam1);
			func_335(uParam0);
			if (func_336() != -1)
			{
				func_337(uParam0, uParam1, 2);
				func_338(uParam1, 2, 1);
			}
			else
			{
				func_339(uParam0, uParam1, 2);
				func_338(uParam1, 2, 0);
			}
			func_316(uParam1, 2);
			break;
		case 7:
			func_39(uParam0, uParam1, uParam2);
			break;
	}
}

void func_144(var uParam0, var uParam1, vector3 vParam2)
{
	iVar0 = func_340();
	if (func_341(uParam0, uParam1, vParam2))
	{
		func_342(uParam0, uParam1);
		func_343(3, 0, 0);
	}
	if (func_344(uParam0, uParam1, vParam2))
	{
		if (func_345(uParam1))
		{
			func_346(&(uParam0->f_1730.f_2299), 1, func_93(uParam1->f_1));
		}
	}
	if (func_347(uParam0, uParam1))
	{
		if (&uParam0->f_1730.f_1[iVar0] == -1)
		{
			func_164(4);
			func_348(2);
			return;
		}
		if (iVar0 == 0)
		{
			iVar9 = 0;
			while (iVar9 <= (uParam0->f_112 - 1))
			{
				func_307(uParam0, uParam1, iVar9, 1);
				iVar9++;
			}
			iVar9 = 0;
			while (iVar9 <= (uParam0->f_948 - 1))
			{
				func_306(uParam0, uParam1, iVar9, 1);
				iVar9++;
			}
			if (uParam0->f_1730.f_1[iVar0]->f_2 & 128 == 0)
			{
				uVar10 = 7;
				uVar10.f_1 = 255;
				uVar10.f_1.f_1 = 255;
				uVar10.f_1.f_1.f_1 = 255;
				uVar10.f_1.f_1.f_1.f_1 = 255;
				uVar10.f_1.f_1.f_1.f_1.f_1 = 255;
				uVar10.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
				uVar10.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
				func_349(&uVar10);
				iVar18 = 0;
				while (iVar18 < 7)
				{
					if (&uVar10[iVar18] == 255)
					{
					}
					else if (func_351(func_137(&(uVar10[iVar18])), func_350(uParam1->f_1)) > func_352(uParam1->f_1))
					{
					}
					else
					{
						iVar19++;
					}
					iVar18++;
				}
				if (iVar19 > 0)
				{
					_0xf008e0ba1fe1d644(iVar19);
					uParam0->f_1730.f_1[iVar0]->f_2 |= 128;
				}
			}
		}
		vVar3 = { uParam0->f_1730.f_1.f_19[iVar0]->f_13 };
		if (func_178(vVar3))
		{
			vVar3 = { func_353(uParam1->f_1) };
		}
		iVar8 = 2;
		if (((uParam0->f_112.f_200[func_354(uParam0, uParam1, 0)])->f_47.f_3[iVar8])->f_9 == 0)
		{
			iVar8 = 1;
			if (((uParam0->f_112.f_200[func_354(uParam0, uParam1, 0)])->f_47.f_3[iVar8])->f_9 == 0)
			{
				iVar8 = 0;
			}
		}
		if (func_354(uParam0, uParam1, 0) != -1)
		{
			if (!_has_scenario_type_loaded((uParam0->f_112.f_200[func_354(uParam0, uParam1, 0)])->f_47.f_1, false))
			{
				_request_scenario_type((uParam0->f_112.f_200[func_354(uParam0, uParam1, 0)])->f_47.f_1, 273, (uParam0->f_112.f_200[func_354(uParam0, uParam1, 0)])->f_2, ((uParam0->f_112.f_200[func_354(uParam0, uParam1, 0)])->f_47.f_3[iVar8])->f_9);
			}
		}
		func_356(uParam0->f_1730.f_1[iVar0], uParam0->f_1730.f_1.f_19[iVar0], &(uParam0->f_1730.f_1.f_2276), func_93(uParam1->f_1), iVar0, vVar3, uParam1->f_1, uParam1->f_2, &uVar7, uParam0->f_4034.f_115, func_355());
		if (_does_anim_scene_exist(uParam0->f_1730.f_1[iVar0]->f_1))
		{
			func_357(uParam0, uParam1, -1, func_355(), iVar0 != 0);
			if (_is_anim_scene_active(uParam0->f_1730.f_1[iVar0]->f_1))
			{
				func_358(*uParam1, 2);
				if (func_354(uParam0, uParam1, 0) != -1)
				{
					func_359(uParam0, uParam1, func_354(uParam0, uParam1, 0), 0, 0, 1);
				}
			}
		}
	}
	else
	{
		iVar1 = uParam0->f_1730;
		vVar3 = { uParam0->f_1730.f_1.f_19[iVar1]->f_13 };
		if (func_178(vVar3))
		{
			vVar3 = { func_353(uParam1->f_1) };
		}
		if (func_360(iVar1, uParam1->f_3))
		{
			fVar2 = func_351(vParam2, vVar3);
			bVar6 = fVar2 <= uParam0->f_1730.f_1.f_19[iVar1]->f_11;
			func_361(uParam0->f_1730.f_1[iVar1], uParam0->f_1730.f_1.f_19[iVar1], &(uParam0->f_1730.f_1.f_2276), func_93(uParam1->f_1), iVar1, bVar6, vVar3);
		}
		uParam0->f_1730 = (iVar1 + 1 % 3);
	}
}

void func_145(var uParam0, var uParam1)
{
	bVar0 = uParam0->f_62.f_1 == false;
	func_362(uParam0, uParam1);
	uParam0->f_112.f_4 = 0;
	func_363(uParam0, uParam1, uParam0->f_62.f_1);
	func_364(uParam0, uParam1, uParam0->f_62.f_1);
	func_365(uParam0, uParam1, uParam0->f_62.f_1);
	func_366(uParam0, uParam1, uParam0->f_62.f_1);
	func_307(uParam0, uParam1, -1, 0);
	func_367(uParam0, uParam1);
	func_359(uParam0, uParam1, uParam0->f_62.f_1, 0, bVar0, 0);
	if (func_354(uParam0, uParam1, 0) > -1 && func_354(uParam0, uParam1, 0) < 4)
	{
		if (uParam0->f_62.f_1 != func_354(uParam0, uParam1, 0))
		{
			func_359(uParam0, uParam1, func_354(uParam0, uParam1, 0), 0, bVar0, 0);
		}
	}
	func_368(uParam0, uParam1, uParam0->f_62.f_1);
	uParam0->f_62.f_1 = (uParam0->f_62.f_1 + 1 % 4);
}

void func_146(var uParam0, var uParam1)
{
	func_369(uParam0, uParam1, uParam0->f_62.f_2);
	func_306(uParam0, uParam1, -1, 0);
	func_370(uParam0, uParam1);
	uParam0->f_62.f_2 = (uParam0->f_62.f_2 + 1 % 10);
}

void func_147(var uParam0, var uParam1)
{
	func_371(uParam0, uParam1, uParam0->f_62.f_3);
	func_372(uParam0, uParam1, uParam0->f_62.f_3);
	uParam0->f_62.f_3 = (uParam0->f_62.f_3 + 1 % 1);
}

void func_148(var uParam0, var uParam1)
{
	if (uParam0->f_1583.f_22 ^ uParam0->f_1583.f_23 == 0)
	{
		return;
	}
	if (func_373())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_1583 - 1))
	{
		if (func_174(&(uParam0->f_1583.f_1[iVar0])))
		{
			if (_is_imap_active(&(uParam0->f_1583.f_1[iVar0])))
			{
				set_bit(&(uParam0->f_1583.f_22), iVar0);
			}
			else
			{
				func_374(&(uParam0->f_1583.f_1[iVar0]));
				return;
			}
		}
		iVar0++;
	}
}

void func_149(var uParam0, var uParam1)
{
	if (!_does_volume_exist(&(uParam0->f_67.f_2[1])))
	{
		return;
	}
	if (!func_269(uParam0, uParam1))
	{
		func_375(uParam0, uParam1);
		return;
	}
	func_376(uParam0, uParam1);
}

void func_150(var uParam0, var uParam1)
{
	if (uParam0->f_1607.f_1)
	{
		if (func_269(uParam0, uParam1))
		{
			if (!uParam0->f_1607.f_2)
			{
				return;
			}
			else if (func_377(uParam0, uParam1))
			{
				uParam0->f_1607.f_2 = 0;
			}
			else
			{
				uParam0->f_1607.f_1 = 0;
			}
		}
		else if (uParam0->f_1607.f_2)
		{
			return;
		}
		else if (func_378(uParam0, uParam1))
		{
			uParam0->f_1607.f_2 = 1;
		}
		else
		{
			uParam0->f_1607.f_1 = 0;
		}
	}
	else
	{
		func_379(uParam0, uParam1);
	}
}

void func_151(var uParam0, var uParam1)
{
	if (uParam0->f_1189 <= 0)
	{
		return;
	}
	iVar0 = uParam0->f_62.f_4;
	if (!uParam0->f_1189.f_1[iVar0]->f_14)
	{
		if (uParam0->f_1583.f_22 ^ uParam0->f_1583.f_23 != 0)
		{
		}
		else if (uParam0->f_1189.f_1[iVar0]->f_15 == 0)
		{
			if (is_model_valid(uParam0->f_1189.f_1[iVar0]->f_13))
			{
				uParam0->f_1189.f_1[iVar0]->f_15 = _0x6f3068258a499e52(uParam0->f_1189.f_1[iVar0]->f_13, uParam0->f_1189.f_1[iVar0]->f_1, 15);
			}
			else
			{
				uParam0->f_1189.f_1[iVar0]->f_14 = 1;
			}
		}
		else if (_0x1ff441d7954f8709(uParam0->f_1189.f_1[iVar0]->f_15))
		{
			uParam0->f_1189.f_1[iVar0]->f_16 = _0x4735e2a4bb83d9da(uParam0->f_1189.f_1[iVar0]->f_15);
			if (does_entity_exist(uParam0->f_1189.f_1[iVar0]->f_16))
			{
				func_380(uParam0->f_1189.f_1[iVar0]->f_16, &(uParam0->f_1189.f_1[iVar0]));
				uParam0->f_1189.f_1[iVar0]->f_1 = { get_entity_coords(uParam0->f_1189.f_1[iVar0]->f_16, true, false) };
				uParam0->f_1189.f_1[iVar0]->f_4 = { get_entity_rotation(uParam0->f_1189.f_1[iVar0]->f_16, 2) };
				if (!func_178(uParam0->f_1189.f_1[iVar0]->f_7))
				{
					set_entity_coords(uParam0->f_1189.f_1[iVar0]->f_16, uParam0->f_1189.f_1[iVar0]->f_7, true, false, true, true);
					set_entity_rotation(uParam0->f_1189.f_1[iVar0]->f_16, uParam0->f_1189.f_1[iVar0]->f_10, 2, true);
				}
				uParam0->f_1189.f_1[iVar0]->f_14 = 1;
			}
		}
	}
	uParam0->f_62.f_4 = (uParam0->f_62.f_4 + 1 % uParam0->f_1189);
}

void func_152(var uParam0, var uParam1, vector3 vParam2)
{
	if (!network_is_session_active() || !network_is_game_in_progress())
	{
		return;
	}
	if (func_381() != 1)
	{
		return;
	}
	switch (func_382(*uParam1))
	{
		case -1:
			break;
		case 0:
			if (func_383(uParam0, uParam1, vParam2, &iVar0))
			{
				func_66(*uParam1, iVar0);
			}
			break;
		case 1:
			if (func_384(uParam0, uParam1, &iVar0))
			{
				func_66(*uParam1, iVar0);
			}
			break;
		case 2:
			if (func_385(uParam1, &iVar0))
			{
				func_66(*uParam1, iVar0);
			}
			break;
		default:
			break;
	}
}

void func_153(var uParam0, var uParam1)
{
	if (Global_1048584 || Global_13)
	{
		return;
	}
	if (uParam1->f_4 != -323664079)
	{
		if (&uParam0->f_1730.f_1[0] == -1 || &uParam0->f_1730.f_1[0] > 4)
		{
			if (&uParam0->f_1730.f_1[0] > 4)
			{
				func_386(uParam0);
			}
			return;
		}
	}
	func_387(uParam0);
	if (!func_388(uParam0))
	{
		if (func_30(&(uParam0->f_8), 128))
		{
			_0x007ff852dcf49da4(256);
			func_183(&(uParam0->f_8), 128, func_93(uParam1->f_1));
		}
		if (func_30(&(uParam0->f_8), 32))
		{
			func_184();
			func_183(&(uParam0->f_8), 32, func_93(uParam1->f_1));
		}
		return;
	}
	iVar2 = player_id();
	func_389(uParam0, uParam1);
	if (!func_30(&(uParam0->f_8), 128))
	{
		_0x007ff852dcf49da4(32);
		func_74(&(uParam0->f_8), 128, func_93(uParam1->f_1));
	}
	if (func_340() == -1 && !func_390())
	{
		bVar5 = true;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = int_to_playerindex(iVar0);
		if (!_network_is_player_index_valid(iVar1))
		{
		}
		else if (!network_is_player_active(iVar1))
		{
		}
		else
		{
			iVar3 = get_player_ped(iVar1);
			iVar4 = _0xf49f14462f0ae27c(iVar1);
			if (_0x81fb74c83c2ed69f(iVar1) || iVar2 == iVar1)
			{
				iVar6 = func_391(iVar1);
				if (bVar5)
				{
					set_entity_visible_in_cutscene(iVar3, iVar6, 0, 256);
				}
				else
				{
					set_entity_visible_in_cutscene(iVar3, 0, 0, 256);
				}
				if (does_entity_exist(iVar4))
				{
					set_entity_visible_in_cutscene(iVar4, iVar6, 0, 256);
				}
				if (does_entity_exist(&(uParam0->f_1627.f_1[iVar0])))
				{
					set_entity_visible_in_cutscene(&(uParam0->f_1627.f_1[iVar0]), iVar6, 0, 256);
				}
				if (does_entity_exist(&(uParam0->f_1627.f_34[iVar0])))
				{
					set_entity_visible_in_cutscene(&(uParam0->f_1627.f_34[iVar0]), iVar6, 0, 256);
				}
			}
			else
			{
				set_entity_visible_in_cutscene(iVar3, 0, 0, 256);
				if (does_entity_exist(iVar4))
				{
					set_entity_visible_in_cutscene(iVar4, 0, 0, 256);
				}
				if (does_entity_exist(&(uParam0->f_1627.f_1[iVar0])))
				{
					set_entity_visible_in_cutscene(&(uParam0->f_1627.f_1[iVar0]), 0, 0, 256);
					if (!func_392(iVar3, &(uParam0->f_1627.f_1[iVar0]), 0))
					{
						uParam0->f_1627.f_1[iVar0] = 0;
					}
				}
				if (does_entity_exist(&(uParam0->f_1627.f_34[iVar0])))
				{
					set_entity_visible_in_cutscene(&(uParam0->f_1627.f_34[iVar0]), 0, 0, 256);
				}
			}
		}
		iVar0++;
	}
}

void func_154(var uParam0, var uParam1)
{
	if (func_354(uParam0, uParam1, 0) == -1)
	{
		return;
	}
	if (!func_393(&(uParam0->f_4034.f_114), 1))
	{
		if (!func_394(uParam0))
		{
			return;
		}
		func_395(uParam0, uParam1);
		func_396(&(uParam0->f_4034.f_114), 1, func_93(uParam1->f_1));
	}
	func_397(uParam0, uParam1);
	if (!func_297(*uParam1, 1))
	{
		func_398(uParam0, uParam1, 3);
		func_398(uParam0, uParam1, 0);
		func_398(uParam0, uParam1, 1);
		func_399(uParam0, uParam1, -591513218);
		func_399(uParam0, uParam1, -499913814);
		func_396(&(uParam0->f_4034.f_114), 2, func_93(uParam1->f_1));
		func_400(&(uParam0->f_4034.f_114), 4, func_93(uParam1->f_1));
		func_400(&(uParam0->f_4034.f_114), 16, func_93(uParam1->f_1));
		func_400(&(uParam0->f_4034.f_114), 32, func_93(uParam1->f_1));
	}
	if (func_393(&(uParam0->f_4034.f_114), 4))
	{
		if (func_401(uParam0))
		{
			func_396(&(uParam0->f_4034.f_114), 2, func_93(uParam1->f_1));
			func_400(&(uParam0->f_4034.f_114), 4, func_93(uParam1->f_1));
		}
	}
	if (func_402(uParam0, uParam1))
	{
		func_403(uParam0, uParam1);
	}
	if (func_404(uParam0, uParam1))
	{
		func_405(uParam0, uParam1);
	}
	if (func_406(uParam0, uParam1))
	{
		func_407(uParam0, uParam1);
	}
	if (func_408(uParam0, uParam1))
	{
		func_409(uParam0, uParam1);
	}
	if (func_410(uParam0, uParam1))
	{
		func_411(uParam0, uParam1);
	}
	func_412(uParam0, uParam1);
	if (uParam0->f_4034.f_115.f_3 == 0)
	{
		if (func_413(uParam0, uParam1, &iVar0, 0))
		{
			iVar1 = 0;
			while (iVar1 <= 0)
			{
				if (&uParam0->f_4034.f_210[iVar1] != 0)
				{
					bVar2 = true;
				}
				else
				{
					iVar1++;
				}
			}
			if (!bVar2)
			{
				if (func_105((uParam0->f_112.f_200[func_354(uParam0, uParam1, 0)])->f_124.f_25, 128))
				{
					func_414(&((uParam0->f_112.f_200[func_354(uParam0, uParam1, 0)])->f_124.f_25), 128);
				}
				return;
			}
			if (func_415(uParam0, 8))
			{
				if (func_416(0))
				{
					func_417(uParam0, uParam1);
				}
				else if (func_418(uParam0, uParam1))
				{
					return;
				}
			}
			if (func_415(uParam0, 9))
			{
				if (func_419(uParam0, uParam1))
				{
					return;
				}
			}
			if (func_415(uParam0, 7))
			{
				if (func_420(uParam0, uParam1))
				{
					return;
				}
			}
			func_421(&((uParam0->f_112.f_200[func_354(uParam0, uParam1, 0)])->f_124.f_25), 128);
			if (func_415(uParam0, 4))
			{
				if (func_422(uParam0, uParam1))
				{
					return;
				}
			}
			if (func_415(uParam0, 6))
			{
				if (func_423(uParam0, uParam1))
				{
					return;
				}
			}
			if (func_415(uParam0, 5))
			{
				if (func_424(uParam0, uParam1))
				{
					return;
				}
			}
			if (func_415(uParam0, 3))
			{
				if (func_425(uParam0, uParam1))
				{
					return;
				}
			}
			if (func_415(uParam0, 0))
			{
				if (func_426(uParam0, uParam1))
				{
					return;
				}
			}
			if (func_415(uParam0, 1))
			{
				if (func_427(uParam0, uParam1))
				{
					return;
				}
			}
			if (func_415(uParam0, 2))
			{
				if (func_428(uParam0, uParam1))
				{
					return;
				}
			}
		}
		else
		{
			switch (iVar0)
			{
				case 5:
					if (func_415(uParam0, 8))
					{
						func_417(uParam0, uParam1);
						func_429(uParam0, 8);
						func_430(uParam0, uParam1, 8);
					}
					break;
			}
			func_414(&((uParam0->f_112.f_200[func_354(uParam0, uParam1, 0)])->f_124.f_25), 128);
		}
	}
	else
	{
		func_431(uParam0, uParam1);
	}
}

void func_155(var uParam0, var uParam1)
{
	if (func_186() != func_93(uParam1->f_1))
	{
		if (func_186() == 0)
		{
			if (!func_31(16) || func_31(8))
			{
				func_183(&(uParam0->f_8), 256, func_93(uParam1->f_1));
			}
		}
		return;
	}
	if (!network_is_session_active() || !network_is_game_in_progress())
	{
		return;
	}
	if (!func_432(player_id(), 32))
	{
		return;
	}
	if (func_433() != _0x901e0dc25080c8b9(player_id()))
	{
		return;
	}
	_0xe296208c273bd7f0(-1, 2000, 0, 17, 1, 0);
	switch (uParam1->f_4)
	{
		case -323664079:
			if (func_354(uParam0, uParam1, 1) == -1)
			{
				return;
			}
			if (!does_entity_exist(&(uParam0->f_948.f_1[func_354(uParam0, uParam1, 1)])))
			{
				return;
			}
			break;
		default:
			if (func_354(uParam0, uParam1, 0) == -1)
			{
				return;
			}
			if (!does_entity_exist(&(uParam0->f_112.f_200[func_354(uParam0, uParam1, 0)])))
			{
				return;
			}
			break;
	}
	if (((is_screen_faded_out() || is_screen_fading_out()) && !func_30(&(uParam0->f_8), 256)) && !func_432(player_id(), 4))
	{
		if (func_434(255))
		{
			return;
		}
		do_screen_fade_in(2000);
		func_74(&(uParam0->f_8), 256, func_93(uParam1->f_1));
	}
	if (func_31(64) && !func_31(256))
	{
		if (func_31(16))
		{
			if ((is_screen_faded_in() && !is_screen_faded_out()) && !is_screen_fading_out())
			{
				func_435(_create_var_string(2, "GFH_HELP_MISSION_BEGINS_SHORTLY"), 10000, 0, 0, 0, 1);
				func_436(256);
			}
		}
	}
}

void func_156(var uParam0)
{
	if (func_163() != func_93(uParam0->f_1))
	{
		return;
	}
	if (Global_1109804->f_21.f_82)
	{
		return;
	}
	if (func_433() == _0x901e0dc25080c8b9(player_id()))
	{
		return;
	}
	Var0 = { func_437() };
	if (!func_23(Var0))
	{
		return;
	}
	iVar2 = func_438(*uParam0, Var0);
	if (iVar2 == -1)
	{
		return;
	}
	iVar3 = func_439(*uParam0, iVar2);
	if (iVar3 == 0)
	{
		return;
	}
	func_441(func_440("FETCH_SHARD_OVER"), func_440(""), func_440("FETCH_SHARD_YOUR_POSSE_ABANDONED"), iVar3);
}

var func_157(int iParam0)
{
	return (*Global_1120070)[iParam0]->f_18;
}

void func_158(var uParam0)
{
	uParam0->f_25 = -1;
	Global_1120070->f_8495.f_2 = 0;
	if (uParam0->f_24)
	{
		func_442(uParam0);
	}
	if (uParam0->f_25.f_13)
	{
		func_443(&(uParam0->f_25));
	}
}

void func_159(var uParam0)
{
	iVar0 = func_283(uParam0, 0);
	if (iVar0 != 0)
	{
		if (uParam0->f_4347.f_39[0]->f_13 != 0)
		{
			_set_streamed_txd_as_no_longer_needed(uParam0->f_4347.f_39[0]->f_13);
		}
	}
	iVar0 = func_283(uParam0, 1);
	if (iVar0 != 0)
	{
		if (uParam0->f_4347.f_39[1]->f_13 != 0)
		{
			_set_streamed_txd_as_no_longer_needed(uParam0->f_4347.f_39[1]->f_13);
		}
	}
	iVar0 = func_283(uParam0, 2);
	if (iVar0 != 0)
	{
		if (uParam0->f_4347.f_39[2]->f_13 != 0)
		{
			_set_streamed_txd_as_no_longer_needed(uParam0->f_4347.f_39[2]->f_13);
		}
	}
	if (uParam0->f_4347.f_107 != -1)
	{
		_set_streamed_txd_as_no_longer_needed(func_445(uParam0->f_4347.f_107, func_444(uParam0->f_4347.f_107)));
	}
}

void func_160(var uParam0, var uParam1, int iParam2)
{
	if (func_446(*uParam1) != uParam0->f_112)
	{
		uParam0->f_112 = func_446(*uParam1);
		if (uParam0->f_112 == 1)
		{
			_0xfaad23de7a54fc14();
		}
		else
		{
			_0x5c9978a2a3dc3d0d();
			if (animpostfx_is_running("MP_BountySelection"))
			{
				animpostfx_stop("MP_BountySelection");
			}
		}
	}
	if (func_447(uParam0, uParam1) || iParam2)
	{
		if (uParam0->f_127)
		{
			return;
		}
		if (does_entity_exist(uParam0->f_109))
		{
			_0x56a786e87ff53478(uParam0->f_109);
		}
		if (animpostfx_is_running("MP_BountySelection"))
		{
			animpostfx_stop("MP_BountySelection");
		}
		uParam0->f_109 = uVar0;
		uParam0->f_127 = 1;
		return;
	}
	uParam0->f_127 = 0;
	if (!animpostfx_is_running("MP_BountySelection"))
	{
		animpostfx_play("MP_BountySelection");
	}
	if (func_326(*uParam1) == -1)
	{
		return;
	}
	if (uParam0->f_109 != func_448(*uParam1, func_326(*uParam1)))
	{
		if (does_entity_exist(uParam0->f_109))
		{
			_0x56a786e87ff53478(uParam0->f_109);
		}
		uParam0->f_109 = func_448(*uParam1, func_326(*uParam1));
		_0x958debd9353c0935(uParam0->f_109, 2, 1f);
	}
}

void func_161(int iParam0)
{
	if (func_449(&((*Global_1128574)[player_id()]->f_49), iParam0, 3))
	{
	}
}

void func_162(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4)
{
	if (*uParam0 > 6)
	{
		iVar0 = 0;
		while (iVar0 <= (&sParam1->f_721[3] - 1))
		{
			if (does_entity_exist(&(sParam1->f_227[iVar0])))
			{
				remove_entity_from_audio_mix_group(&(sParam1->f_227[iVar0]), 0f);
			}
			iVar0++;
		}
		_0x9428447ded71fc7e("RDRO_Scripted_Cutscene_Scenes");
		if (sParam1->f_9 & 2 != 0)
		{
			set_player_control(player_id(), true, 0, false);
		}
		if (sParam1->f_9 & 1 != 0)
		{
			if (network_is_in_mp_cutscene())
			{
				network_set_in_mp_cutscene(false, false, 32, true);
			}
		}
		if (iParam4 == 0)
		{
			_cascadeshadows_reset_type();
		}
	}
	if (_does_anim_scene_exist(uParam0->f_1) && _is_anim_scene_started(uParam0->f_1, false))
	{
		abort_anim_scene(uParam0->f_1, true);
	}
	func_450(uParam0, sParam1, uParam2, iParam3, iParam4, 1);
}

int func_163()
{
	return Global_1109804->f_21.f_12.f_22;
}

void func_164(int iParam0)
{
	Global_1109804->f_21.f_12.f_2 = iParam0;
}

void func_165(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

int func_166(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -476976667;
		case 1:
			return -544934773;
		case 2:
			return 1072715680;
		case 3:
			return -551448260;
		case 4:
			return 387219749;
		case 5:
			return 695084504;
		case 6:
			return 118717457;
		case 7:
			return -658202764;
		case 8:
			return -425837785;
		case 9:
			return -1162096896;
		case 10:
			return 1983526175;
		case 11:
			return 1428160146;
		case 12:
			return -611123040;
		case 13:
			return 1186273574;
		case 14:
			return -860862750;
		case 15:
			return 321953502;
		case 16:
			return -423179200;
		case 17:
			return 754594631;
		case 18:
			return 548543805;
		case 19:
			return 1921928004;
		case 20:
			return -1708806587;
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

int func_167(int iParam0)
{
	switch (iParam0)
	{
		case -551448260:
			return 16;
		case 387219749:
			return 32;
		case 695084504:
			return 64;
		case 118717457:
			return 2;
		case -658202764:
			return 4;
		case -425837785:
			return 8;
		case -476976667:
			return 1;
		case -1162096896:
			return 128;
		case 1983526175:
			return 256;
		default:
			break;
	}
	return 0;
}

bool func_168(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_169(var uParam0, bool bParam1)
{
	if (*uParam0 > -1 && *uParam0 < 4)
	{
		if (*Global_1956131)[*uParam0]->f_3 == get_id_of_this_thread()
		{
			if (func_451(1, 1) == *uParam0)
			{
				func_452(-1, 1, 1);
			}
			if (bParam1)
			{
				func_165((*Global_1956131)[*uParam0]->f_1);
			}
			(*Global_1956131)[*uParam0] = 0;
			(*Global_1956131)[*uParam0]->f_2 = 0;
			(*Global_1956131)[*uParam0]->f_3 = 0;
			*uParam0 = -1;
		}
	}
}

int func_170(int iParam0)
{
	return (*Global_1120070)[iParam0]->f_4;
}

void func_171(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_172(var uParam0, var uParam1)
{
	if (uParam0->f_112 <= 0)
	{
		return;
	}
	_0x7d4e70a67a651c71(uParam0->f_112);
}

void func_173(int iParam0, int iParam1)
{
	func_453(iParam0, iParam1);
}

bool func_174(int iParam0)
{
	return iParam0 != 0;
}

int func_175(int iParam0)
{
	if (!_is_imap_active(iParam0))
	{
		return 1;
	}
	if (func_373())
	{
		return 0;
	}
	_remove_imap(iParam0);
	return 0;
}

char* func_176(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

bool func_177(int iParam0, int iParam1)
{
	return is_bit_set((*Global_1116202)[iParam0]->f_7.f_4, iParam1);
}

bool func_178(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_179(int iParam0)
{
	return Global_1120070[iParam0];
}

int func_180(int iParam0)
{
	return (*Global_1120070)[iParam0]->f_1;
}

int func_181(int iParam0)
{
	return (*Global_1120070)[iParam0]->f_2;
}

Vector3 func_182(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (func_454(iParam3))
	{
		if (iParam4 == -1)
		{
			*bParam0 = 0;
			return vVar0;
		}
	}
	vVar0 = { func_455(iParam1, iParam4, iParam3, iParam2, &bVar3, iParam5) };
	*bParam0 = !bVar3;
	if (!*bParam0)
	{
		return vVar0;
	}
	return vVar0;
}

void func_183(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_184()
{
	iVar2 = player_id();
	bVar39 = network_is_player_in_mp_cutscene(iVar2);
	iVar38 = _0x901e0dc25080c8b9(iVar2);
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar3 = int_to_playerindex(iVar0);
		if (!_network_is_player_index_valid(iVar3))
		{
		}
		else if (!network_is_player_active(iVar3))
		{
		}
		else if (!_0x9be7dcb22d32ccbe(iVar38, iVar3))
		{
		}
		else if (!network_is_player_in_mp_cutscene(iVar3))
		{
		}
		else
		{
			iVar37 = get_player_ped(iVar3);
			if (!does_entity_exist(iVar37))
			{
			}
			else
			{
				iVar4[iVar1] = iVar37;
				_0xf3354d6ca46f419d(iVar37, 0);
				iVar1++;
			}
		}
		iVar0++;
	}
	if (bVar39)
	{
		network_set_in_mp_cutscene(false, false, 32, true);
	}
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		_0xf3354d6ca46f419d(&(iVar4[iVar0]), 1);
		iVar0++;
	}
}

void func_185(int iParam0, int iParam1, bool bParam2)
{
	if (func_274(iParam0, iParam1) && (!bParam2 || &Global_1071686->f_22538.f_385[iParam0]->f_1[iParam1] == get_id_of_this_thread()))
	{
		clear_bit(Global_1071686->f_22538.f_385[iParam0], iParam1);
		Global_1071686->f_22538.f_385[iParam0]->f_1[iParam1] = 0;
		func_456();
	}
}

int func_186()
{
	return Global_1109804->f_21.f_12.f_8;
}

void func_187(int iParam0)
{
	Global_1109804->f_21.f_12.f_8 = iParam0;
}

void func_188(var uParam0)
{
	if (func_457(uParam0) == -1)
	{
		return;
	}
	if (is_scripted_conversation_loaded(func_459(func_458(uParam0))))
	{
		if (_0x1ecc76792f661cf5(func_459(func_458(uParam0))))
		{
		}
		else
		{
			stop_scripted_conversation(func_459(func_458(uParam0)), false, false);
		}
	}
	func_460(uParam0, 0);
	func_461(uParam0, 0);
	func_463(uParam0, func_462(""));
	func_464(uParam0, -1);
}

void func_189(var uParam0)
{
	if (func_465(uParam0) == -1)
	{
		return;
	}
	if (is_scripted_conversation_loaded(func_459(func_466(uParam0))))
	{
		if (_0x1ecc76792f661cf5(func_459(func_466(uParam0))))
		{
		}
		else
		{
			stop_scripted_conversation(func_459(func_466(uParam0)), false, false);
		}
	}
	func_467(uParam0, 0);
	func_468(uParam0, 0);
	func_469(uParam0, func_462(""));
	func_470(uParam0, -1);
}

void func_190(int iParam0, int iParam1)
{
	(*Global_1120070)[iParam0]->f_18 = iParam1;
}

bool func_191(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 62);
}

void func_192()
{
	terminate_this_thread();
}

void func_193(int iParam0, int iParam1)
{
	(*Global_1130634)[iParam0]->f_1 = ((*Global_1130634)[iParam0]->f_1 - ((*Global_1130634)[iParam0]->f_1 && iParam1));
}

void func_194(int iParam0, int iParam1)
{
	(*Global_1130634)[iParam0]->f_1 = ((*Global_1130634)[iParam0]->f_1 || iParam1);
}

int func_195(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1862763509;
		case 1:
			return -1976316465;
		case 2:
			return 841021282;
		case 3:
			return -350651841;
		case 4:
			return 707888648;
		case 5:
			return 623901053;
		case 6:
			return 1269650476;
		case 7:
			return -1538724068;
		case 8:
			return 1391706777;
		case 9:
			return -401180987;
		case 10:
			return -1247684992;
		case 11:
			return -767591988;
		case 12:
			return -989642646;
		case 13:
			return -1683752762;
		case 14:
			return 543319108;
		case 15:
			return -886193798;
		case 16:
			return 106566339;
		case 17:
			return -50399569;
		case 18:
			return 1622308690;
		case 19:
			return 1222652248;
		case 20:
			return -350226955;
		case 21:
			return 1030835986;
			return -1856989775;
			return -1535431934;
			return -1448293989;
			return 266218800;
			return 555364152;
			return -1663301869;
			return -1996978098;
			return 1078461828;
			return 1986610512;
			return 889541022;
			return -319516747;
			return -1329647920;
			return -225988669;
			return -1694487418;
			return 1878159675;
			return -1505548114;
			return 1856892754;
			return 1609284507;
			return 747813878;
			return -40378879;
			return -415798358;
			return 1733741057;
			return 886389029;
			return -2003007004;
			return 1965820175;
			return -1164995627;
			return -1406404850;
			return 892340488;
			return 570352286;
			return 1809249877;
			return 1185197041;
			return -1901478918;
			return 2097877918;
			return -1158905413;
			return 358397622;
			return 65999835;
			return 814443795;
			return 519621102;
			return -1628223003;
			return 1278256225;
			return 2038628101;
			return 1742494648;
			return -1010166918;
			return 660170868;
			return -1278312096;
			return -509158128;
			return -226656579;
			return 2115868159;
			return 1495813101;
			return 1197385818;
			return 1015780020;
			return -1286733825;
			return -1670393277;
			return -415733461;
			return -1207924036;
			return 497702414;
			return 719188085;
			return 43753457;
			return 771290791;
			return 20356387;
			return 309149584;
			return 1613781781;
			return 1693607065;
			return 1132176120;
			return 869270437;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
		}

void func_196(int iParam0, var uParam1, int iParam2)
{
	set_relationship_between_groups(iParam0, *uParam1, iParam2);
	set_relationship_between_groups(iParam0, iParam2, *uParam1);
}

void func_197(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

int func_198()
{
	return Global_1071686->f_28448[28]->f_3;
}

int func_199(int iParam0)
{
	return (*Global_1120070)[iParam0]->f_24;
}

struct<2> func_200(int iParam0, int iParam1)
{
	return *(*Global_1120070)[iParam0]->f_24.f_2[iParam1];
}

void func_201(int iParam0, int iParam1)
{
	if (func_205(&((*Global_1120070)[iParam0]->f_24.f_2066), iParam1, 3))
	{
	}
}

void func_202(int iParam0, int iParam1)
{
	if (func_449(&((*Global_1120070)[iParam0]->f_24.f_2066), iParam1, 3))
	{
	}
}

void func_203(int iParam0, int iParam1)
{
	if (func_205(&((*Global_1120070)[iParam0]->f_24.f_2070), iParam1, 3))
	{
	}
}

bool func_204(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

bool func_205(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

bool func_206(var uParam0, int iParam1, int iParam2)
{
	if (!func_471(uParam0, iParam1))
	{
		return false;
	}
	uParam0->f_2 = 1635370648;
	uParam0->f_3 = iParam2;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

int func_207(var uParam0)
{
	if (!func_206(&Var0, func_179(*uParam0), func_170(*uParam0)))
	{
		return 0;
	}
	if (!func_472(&Var0, 0))
	{
		return 0;
	}
	return func_215(Var0, 1624339917);
}

int func_208(int iParam0, int iParam1, int iParam2)
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

int func_209(var uParam0)
{
	if (!func_206(&Var0, func_179(*uParam0), func_170(*uParam0)))
	{
		return 0;
	}
	if (!func_473(&Var0, 0))
	{
		return 0;
	}
	return func_215(Var0, -702452069);
}

int func_210(var uParam0)
{
	if (!func_206(&Var0, func_179(*uParam0), func_170(*uParam0)))
	{
		return 0;
	}
	if (!func_474(&Var0, 0))
	{
		return 0;
	}
	return func_215(Var0, 164389658);
}

float func_211(int iParam0)
{
	if (!func_191(iParam0))
	{
		return 0f;
	}
	return func_352(iParam0);
}

bool func_212(vector3 vParam0, var uParam3, var uParam4, var uParam5, var uParam6)
{
	vParam0.f_2 = 1319079466;
	if (!_datafile_get_float(uParam5, &vParam0))
	{
		return false;
	}
	if (*uParam5 <= 0f)
	{
		return false;
	}
	return true;
}

bool func_213(var uParam0, struct<5> Param1, var uParam6, var uParam7)
{
	if (!func_472(&Param1, 0))
	{
		return false;
	}
	uVar10 = Param1.f_1;
	iVar1 = func_215(Param1, 1624339917);
	if (iVar1 <= 0)
	{
		return false;
	}
	if (!func_475(&vVar12, func_180(*uParam0)))
	{
		return false;
	}
	uVar11 = vVar12.y;
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Param1.f_1 = uVar10;
		if (!func_476(&Param1, iVar0))
		{
		}
		else if (!func_477(&Param1))
		{
		}
		else
		{
			Param1.f_2 = -2099616401;
			if (!_datafile_get_hash(&iVar3, &Param1))
			{
			}
			else if (iVar3 == 0)
			{
			}
			else
			{
				_datafile_get_string(&Var18, &Param1);
				Param1.f_2 = 1649401908;
				if (!_datafile_get_hash(&iVar6, &Param1))
				{
				}
				else if (iVar6 == 0)
				{
				}
				else
				{
					iVar9 = iVar6;
					if (func_478(iVar9, 1) == -1)
					{
					}
					else
					{
						func_479(uParam0, iVar0, iVar3, Var18, iVar9, uParam7);
						vVar12.f_1 = uVar11;
						if (!func_480(&vVar12, iVar3, 0))
						{
						}
						else
						{
							vVar12.f_2 = -514504777;
							if (!_datafile_get_hash(&iVar4, &vVar12))
							{
							}
							else if (iVar4 == 0)
							{
							}
							else
							{
								bVar17 = false;
								iVar5 = 0;
								while (iVar5 <= (iVar2 - 1))
								{
									if (&iVar7[iVar5] == iVar4)
									{
										bVar17 = true;
									}
									else
									{
										iVar5++;
									}
								}
								if (bVar17)
								{
								}
								else
								{
									iVar7[iVar2] = iVar4;
									_datafile_get_string((*uParam6)[iVar2], &vVar12);
									iVar2++;
									if (iVar2 >= 1)
									{
									}
									else
									{
										iVar0++;
									}
									uParam6->f_9 = iVar2;
									return true;
								}
							}
						}
					}
				}
			}
		}
	}
}

bool func_214(var uParam0, int iParam1)
{
	uParam0->f_2 = -1083767826;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	return true;
}

int func_215(vector3 vParam0, var uParam3, var uParam4, int iParam5)
{
	vParam0.f_2 = iParam5;
	return _datafile_get_num_nodes(&vParam0);
}

bool func_216(vector3 vParam0, var uParam3, var uParam4, var uParam5, int iParam6, int iParam7)
{
	if (!func_481(&vParam0, iParam6))
	{
		return false;
	}
	vParam0.f_2 = -1714801835;
	if (!_datafile_get_vector(&(uParam5->f_1[iParam6]->f_1), &vParam0))
	{
		return false;
	}
	if (func_178(uParam5->f_1[iParam6]->f_1))
	{
		return false;
	}
	uParam5->f_1[iParam6] = get_interior_at_coords(uParam5->f_1[iParam6]->f_1);
	if (!is_valid_interior(&(uParam5->f_1[iParam6])))
	{
		return false;
	}
	if (func_177(iParam7, 1))
	{
		vParam0.f_2 = -904522836;
		if (_datafile_get_string(&(uParam5->f_1[iParam6]->f_4), &vParam0))
		{
			if (is_interior_entity_set_active(&(uParam5->f_1[iParam6]), &(uParam5->f_1[iParam6]->f_4)))
			{
			}
			else
			{
				activate_interior_entity_set(&(uParam5->f_1[iParam6]), &(uParam5->f_1[iParam6]->f_4), 0);
			}
		}
	}
	pin_interior_in_memory(&(uParam5->f_1[iParam6]));
	return true;
}

bool func_217(var uParam0)
{
	uParam0->f_2 = 56746299;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	return true;
}

bool func_218(struct<5> Param0, int iParam5, var uParam6)
{
	if (!func_482(&Param0, iParam5))
	{
		return false;
	}
	iVar1 = func_215(Param0, 1141833051);
	if (iVar1 == 0)
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		if (!func_483(Param0, iParam5, iVar0, uParam6))
		{
		}
		iVar0++;
	}
	return true;
}

bool func_219(var uParam0, int iParam1)
{
	uParam0->f_2 = 1062084355;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	return true;
}

bool func_220(vector3 vParam0, var uParam3, var uParam4, var uParam5, int iParam6, var uParam7)
{
	if (!func_484(&vParam0, iParam6))
	{
		return false;
	}
	vParam0.f_2 = -134912699;
	if (!_datafile_get_vector(&(uParam5->f_1[iParam6]->f_1), &vParam0))
	{
		return false;
	}
	if (func_178(uParam5->f_1[iParam6]->f_1))
	{
		return false;
	}
	vParam0.f_2 = -2094518374;
	if (!_datafile_get_float(uParam5->f_1[iParam6], &vParam0))
	{
		return false;
	}
	if (&uParam5->f_1[iParam6] <= 0f)
	{
		return false;
	}
	return true;
}

bool func_221(var uParam0)
{
	uParam0->f_2 = 1203863120;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

bool func_222(struct<5> Param0, int iParam5, var uParam6)
{
	if (!func_485(&Param0, iParam5))
	{
		return false;
	}
	Param0.f_2 = -1255654531;
	if (!_datafile_get_hash(&iVar0, &Param0))
	{
		return false;
	}
	if (iVar0 == 0)
	{
		return false;
	}
	uParam6->f_13 = iVar0;
	if (is_model_valid(uParam6->f_13))
	{
	}
	Param0.f_2 = -134912699;
	if (!_datafile_get_vector(&(uParam6->f_1), &Param0))
	{
		return false;
	}
	if (func_178(uParam6->f_1))
	{
		return false;
	}
	bVar1 = func_486(Param0, uParam6);
	Param0.f_2 = -1603547373;
	if (!_datafile_get_vector(&(uParam6->f_7), &Param0))
	{
		if (!bVar1)
		{
			return false;
		}
	}
	if (func_178(uParam6->f_7))
	{
		if (!bVar1)
		{
			return false;
		}
	}
	Param0.f_2 = -748173978;
	if (!_datafile_get_vector(&(uParam6->f_10), &Param0))
	{
	}
	return true;
}

bool func_223(var uParam0, int iParam1)
{
	uParam0->f_2 = -690423049;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	return true;
}

bool func_224(var uParam0, int iParam1)
{
	uParam0->f_2 = 1465961145;
	uParam0->f_3 = iParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

bool func_225(var uParam0)
{
	uParam0->f_2 = 157340468;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	return true;
}

int func_226(struct<5> Param0, int iParam5, var uParam6, var uParam7)
{
	if (!func_487(&Param0, iParam5))
	{
		return 0;
	}
	Var1 = { Param0 };
	uParam7->f_2 = func_488(Param0);
	Var1.f_2 = 495975404;
	if (_datafile_get_hash(&iVar0, &Var1) && iVar0 != 0)
	{
		iVar6 = iVar0;
		uParam7->f_1 = func_268(iVar6, 1);
		if (uParam7->f_1 < 0 || uParam7->f_1 >= 21)
		{
			return 0;
		}
		return 1;
	}
	return func_489(Param0, iParam5, uParam6, uParam7);
}

bool func_227(var uParam0)
{
	uParam0->f_2 = -1202322374;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	return true;
}

int func_228(struct<5> Param0, int iParam5, var uParam6)
{
	return func_490(Param0, uParam6, iParam5);
}

bool func_229(var uParam0)
{
	uParam0->f_2 = -351785645;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	return true;
}

bool func_230(var uParam0, int iParam1)
{
	uParam0->f_2 = -816725755;
	uParam0->f_3 = iParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

bool func_231(vector3 vParam0, var uParam3, var uParam4, var uParam5)
{
	vParam0.f_2 = 273544526;
	if (!_datafile_get_hash(&iVar0, &vParam0))
	{
		return false;
	}
	if (iVar0 == 0)
	{
		return false;
	}
	*uParam5 = iVar0;
	if (func_174(*uParam5))
	{
		if (_is_imap_active(*uParam5))
		{
		}
		else if (func_374(*uParam5))
		{
		}
	}
	return true;
}

bool func_232(vector3 vParam0, var uParam3, var uParam4, var uParam5)
{
	vParam0.f_2 = 1068458324;
	if (!_datafile_get_hash(&iVar0, &vParam0))
	{
		return false;
	}
	if (iVar0 == 0)
	{
		return false;
	}
	uParam5->f_1 = iVar0;
	if (!_0xde9bad3292aa6d5e(uParam5->f_1))
	{
		_0xdfea23ec90113657(uParam5->f_1);
	}
	return true;
}

bool func_233(vector3 vParam0, var uParam3, var uParam4, var uParam5)
{
	vParam0.f_2 = 600894625;
	if (_datafile_get_string(&Var0, &vParam0))
	{
		if (is_string_null_or_empty(func_176(Var0)))
		{
			return false;
		}
	}
	if (!_0x495cfab2924237c7(&Var0))
	{
		return false;
	}
	uParam5->f_2 = { Var0 };
	if (_0x5ac0944c156e5f44(&(uParam5->f_2)))
	{
	}
	else
	{
		_0x7c334ff4d9215912(&(uParam5->f_2));
	}
	return true;
}

bool func_234(var uParam0)
{
	uParam0->f_2 = -895584822;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	return true;
}

bool func_235(vector3 vParam0, var uParam3, var uParam4, var uParam5, int iParam6)
{
	if (!func_491(&vParam0, iParam6))
	{
		return false;
	}
	vParam0.f_2 = -1255654531;
	if (!_datafile_get_hash(&iVar0, &vParam0))
	{
		return false;
	}
	if (iVar0 == 0)
	{
		return false;
	}
	*uParam5 = iVar0;
	if (is_model_valid(*uParam5))
	{
	}
	vParam0.f_2 = 890539395;
	if (!_datafile_get_vector(&(uParam5->f_1), &vParam0))
	{
		return false;
	}
	if (func_178(uParam5->f_1))
	{
		return false;
	}
	vParam0.f_2 = -2094518374;
	if (_datafile_get_float(&fVar1, &vParam0))
	{
		if (fVar1 > 0f)
		{
			uParam5->f_5 = fVar1;
		}
	}
	return true;
}

bool func_236(var uParam0, var uParam1, int iParam2)
{
	if (!func_492(uParam0, uParam1))
	{
		return false;
	}
	uParam0->f_2 = -1519814088;
	uParam0->f_3 = iParam2;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

int func_237(int iParam0)
{
	return (*Global_1118808)[iParam0]->f_1;
}

int func_238(int iParam0, int iParam1)
{
	iVar0 = func_493(iParam0);
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		if (iParam1 == func_494(iParam0, iVar1))
		{
			return func_495(iParam0, iVar1);
		}
		iVar1++;
	}
	return 0;
}

int func_239(vector3 vParam0, var uParam3, var uParam4, int iParam5)
{
	vParam0.f_2 = iParam5;
	return _datafile_get_num_nodes(&vParam0);
}

bool func_240(var uParam0, int iParam1)
{
	uParam0->f_2 = 1969053457;
	uParam0->f_3 = iParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

int func_241(vector3 vParam0, var uParam3, var uParam4)
{
	vParam0.f_2 = 271069761;
	if (!_datafile_get_hash(&uVar0, &vParam0))
	{
		return 0;
	}
	return uVar0;
}

int func_242(int iParam0)
{
	switch (iParam0)
	{
		case -628138157:
			return 0;
		case -360659748:
			return 1;
		case 1604231229:
			return 2;
		default:
			break;
	}
	return -1;
}

bool func_243(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5)
{
	if (!func_496(&uParam0))
	{
		return false;
	}
	if (!func_497(&uParam0, iParam5))
	{
		return false;
	}
	return true;
}

bool func_244(struct<5> Param0, var uParam5, var uParam6)
{
	*uParam5 = { func_498(Param0) };
	uParam5->f_10 = func_499(Param0);
	uParam5->f_12 = func_500(Param0);
	uParam5->f_11 = func_501(Param0);
	func_502(Param0, uParam5, uParam6);
	func_503(Param0, uParam5, uParam6);
	func_504(Param0, uParam5);
	func_505(Param0, uParam5);
	return true;
}

bool func_245(struct<5> Param0, var uParam5, var uParam6)
{
	if (!func_506(&Param0))
	{
		return true;
	}
	uVar4 = Param0.f_1;
	iVar1 = func_239(Param0, 187579888);
	if (iVar1 > 8)
	{
		iVar1 = 8;
	}
	iVar0 = 0;
	while (iVar0 <= (17 - 1))
	{
		uParam5->f_734[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Param0.f_1 = uVar4;
		if (!func_507(&Param0, iVar0))
		{
			return false;
		}
		uVar5 = Param0.f_1;
		iVar2 = 0;
		if (func_508(&Param0, -1000179465))
		{
			if (!func_509(Param0, -1000179465, &iVar2, uParam6))
			{
				return false;
			}
		}
		Param0.f_1 = uVar5;
		uParam5->f_632[iVar0]->f_1 = { func_510(Param0) };
		uParam5->f_632[iVar0]->f_5 = { func_511(Param0) };
		uParam5->f_632[iVar0]->f_10 = func_512(Param0);
		uParam5->f_632[iVar0]->f_9 = iVar2;
		uParam5->f_632[iVar0] = func_513(Param0);
		iVar3 = func_514(uParam5->f_632[iVar0]->f_10);
		uParam5->f_734[iVar3] = iVar0;
		iVar0++;
	}
	uParam5->f_733 = iVar1;
	return true;
}

bool func_246(struct<5> Param0, var uParam5, int iParam6, var uParam7)
{
	iVar1 = func_239(Param0, 497608077);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		if (!func_515(Param0, uParam5, iParam6, uParam7, iVar0))
		{
		}
		iVar0++;
	}
	return true;
}

void func_247(var uParam0, int iParam1, int iParam2, int iParam3)
{
	*uParam0 = iParam1;
}

bool func_248(var uParam0)
{
	uParam0->f_2 = 1179867258;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	return true;
}

bool func_249(struct<5> Param0, var uParam5, var uParam6)
{
	Param0.f_2 = -2090796305;
	if (!_datafile_get_hash(&iVar0, &Param0))
	{
		return false;
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (!func_516(&Param0, Param0, iVar0))
	{
		return false;
	}
	iVar2 = func_215(Param0, -340432202);
	if (iVar2 <= 0 || iVar2 > 21)
	{
		return false;
	}
	iVar1 = 0;
	while (iVar1 <= (iVar2 - 1))
	{
		if (!func_517(Param0, iVar1, uParam5, uParam6))
		{
			return false;
		}
		iVar1++;
	}
	return true;
}

bool func_250(var uParam0, var uParam1, struct<5> Param2, int iParam7)
{
	if (!func_518(&Param2, iParam7))
	{
		return false;
	}
	StringCopy(&cVar4, "volume#", 64);
	StringIntConCat(&cVar4, iParam7, 64);
	iVar1 = func_215(Param2, -279039872);
	if (iVar1 <= 0)
	{
		return false;
	}
	Param2.f_2 = 495975404;
	if (!_datafile_get_hash(&iVar0, &Param2))
	{
		return false;
	}
	if (iVar0 == 0)
	{
		return false;
	}
	Param2.f_2 = -134912699;
	if (_datafile_get_vector(&vVar13, &Param2))
	{
		uParam0->f_67.f_35 = { vVar13 };
	}
	iVar12 = iVar0;
	iVar3 = func_268(iVar12, 1);
	if (iVar3 < 0 || iVar3 >= 21)
	{
		return false;
	}
	uParam0->f_67.f_2[iVar3] = _create_volume_aggregate_with_custom_name(&cVar4);
	iVar2 = 0;
	while (iVar2 <= (iVar1 - 1))
	{
		if (!func_519(Param2, uParam0->f_67.f_2[iVar3], iParam7, iVar2, func_67(uParam1->f_1), iVar12))
		{
			return false;
		}
		iVar2++;
	}
	return true;
}

void func_251(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_252(var uParam0, int iParam1)
{
	uParam0->f_2 = 1781322358;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	return true;
}

bool func_253(var uParam0, struct<5> Param1, int iParam6, var uParam7)
{
	if (!func_520(&Param1, iParam6))
	{
		return false;
	}
	Param1.f_2 = -134912699;
	if (!_datafile_get_vector(&vVar0, &Param1))
	{
		return false;
	}
	if (func_178(vVar0))
	{
		return false;
	}
	Param1.f_2 = -2094518374;
	if (!_datafile_get_float(&fVar3, &Param1))
	{
		return false;
	}
	if (fVar3 <= 0f)
	{
		return false;
	}
	if (!func_521(Param1, iParam6, uParam7, &uVar4))
	{
		return false;
	}
	if (!func_522(Param1, iParam6, uParam7, &uVar5))
	{
		return false;
	}
	(*uParam0)[iParam6] = _0xfa50f79257745e74(vVar0, fVar3, uVar4, uVar5, 0);
	if (uParam0[iParam6] != 0 && uParam0[iParam6] != -1)
	{
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

bool func_254(struct<5> Param0, int iParam5, int iParam6)
{
	if (!func_224(&Param0, iParam5))
	{
		return false;
	}
	Param0.f_2 = -434046439;
	if (!_datafile_get_hash(&iVar0, &Param0))
	{
		return false;
	}
	if (iVar0 == 0)
	{
		return false;
	}
	iVar1 = iVar0;
	if (!func_523(Param0, &vVar2, iParam6))
	{
		return false;
	}
	if (vVar2.z)
	{
		func_524(iVar1, 1, 0);
		_0xc07b91b996c1de89(iVar1, 0);
	}
	else
	{
		func_524(iVar1, 0, 0);
		door_system_set_open_ratio(iVar1, vVar2.x, 0);
		door_system_set_automatic_rate(iVar1, vVar2.y);
	}
	return true;
}

bool func_255(int iParam0)
{
	return func_525(iParam0, 1);
}

int func_256(int iParam0)
{
	if (!func_527(func_526()))
	{
		return 493038497;
	}
	return func_529(iParam0, func_528(func_526()));
}

void func_257(int iParam0, int iParam1)
{
	(*Global_1120070)[iParam0]->f_10 = iParam1;
}

bool func_258(var uParam0, var uParam1, vector3 vParam2)
{
	if (func_30(&(uParam0->f_8), 16))
	{
		return true;
	}
	if (func_23(func_259()))
	{
		return false;
	}
	if (_does_volume_exist(&(uParam0->f_67.f_2[func_268(func_267(5), 1)])))
	{
		if (func_261(uParam0, uParam1, vParam2, 5))
		{
			return true;
		}
	}
	return false;
}

struct<2> func_259()
{
	if (Global_1196205->f_129 <= 0)
	{
		return func_530(0);
	}
	if (Global_1196205->f_130 < 0 || Global_1196205->f_131 == 0)
	{
		return func_530(0);
	}
	return (*Global_1196205)[Global_1196205->f_130]->f_1;
}

int func_260(var uParam0, var uParam1, vector3 vParam2)
{
	if (func_29(*uParam1, 2))
	{
		func_183(&(uParam0->f_8), 1, func_67(uParam1->f_1));
		func_183(&(uParam0->f_8), 2, func_67(uParam1->f_1));
		return 0;
	}
	if (func_178(vParam2))
	{
		return 0;
	}
	fVar0 = func_351(vParam2, func_353(uParam1->f_1));
	if (func_30(&(uParam0->f_8), 1))
	{
		if (fVar0 <= uParam0->f_10.f_1)
		{
			func_183(&(uParam0->f_8), 1, func_67(uParam1->f_1));
		}
		else if ((get_game_timer() - uParam0->f_4296) >= 15000)
		{
			func_74(&(uParam0->f_8), 2, func_67(uParam1->f_1));
			return 1;
		}
		else if (fVar0 > uParam0->f_10)
		{
			func_74(&(uParam0->f_8), 2, func_67(uParam1->f_1));
			return 1;
		}
	}
	else if (fVar0 > uParam0->f_10.f_1)
	{
		func_74(&(uParam0->f_8), 1, func_67(uParam1->f_1));
		uParam0->f_4296 = get_game_timer();
	}
	return 0;
}

bool func_261(var uParam0, var uParam1, vector3 vParam2, int iParam5)
{
	iVar0 = func_268(func_267(iParam5), 1);
	if (!_does_volume_exist(&(uParam0->f_67.f_2[iVar0])))
	{
		return false;
	}
	return _0xf256a75210c5c0eb(&(uParam0->f_67.f_2[iVar0]), vParam2);
}

int func_262(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 4;
		case 7:
			return 32;
		case 4:
			return 64;
		default:
			break;
	}
	return 0;
}

void func_263(int iParam0, int iParam1)
{
	(*Global_1120070)[iParam0]->f_19 = ((*Global_1120070)[iParam0]->f_19 || iParam1);
}

void func_264(var uParam0, var uParam1)
{
	iVar0 = func_531(*uParam1);
	if (!func_532(uParam1))
	{
		func_533(*uParam1, 8);
		func_533(*uParam1, 16);
		func_533(*uParam1, 32);
		return;
	}
	if (uParam0->f_23 != iVar0)
	{
		if (iVar0 > -1 && iVar0 < 62)
		{
			uVar1 = func_534(*uParam1, iVar0);
			uParam0->f_23 = iVar0;
			switch (func_303(*uParam1))
			{
				case 303108068:
					iVar2 = 1;
					break;
				case -910931556:
					iVar2 = 2;
					break;
				default:
					break;
			}
			iVar3 = func_535(func_92(uParam1->f_2), func_93(uParam1->f_1), iVar2, uVar1, func_122(*uParam1));
			switch (iVar3)
			{
				case 16:
					func_536(*uParam1, 8);
					func_533(*uParam1, 16);
					func_533(*uParam1, 32);
					break;
				default:
					func_533(*uParam1, 8);
					func_533(*uParam1, 16);
					func_533(*uParam1, 32);
					break;
			}
			func_536(*uParam1, 64);
		}
		else
		{
			func_533(*uParam1, 8);
			func_533(*uParam1, 16);
			func_533(*uParam1, 32);
		}
	}
}

void func_265(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 <= (3 - 1))
	{
		func_537(iParam0, iVar0, bParam1);
		iVar0++;
	}
}

void func_266(int iParam0, int iParam1)
{
	(*Global_1120070)[iParam0]->f_19 = ((*Global_1120070)[iParam0]->f_19 - ((*Global_1120070)[iParam0]->f_19 && iParam1));
}

int func_267(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		case 1:
			return 1072715680;
		case 2:
			return -544934773;
		case 3:
			return -476976667;
		case 7:
			return -1162096896;
		case 4:
			return 1428160146;
		case 5:
			return -611123040;
		case 6:
			return 1186273574;
		default:
			break;
	}
	return 0;
}

int func_268(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1708806587:
			return 20;
		case -1162096896:
			return 9;
		case -860862750:
			return 14;
		case -658202764:
			return 7;
		case -611123040:
			return 12;
		case -551448260:
			return 3;
		case -544934773:
			return 1;
		case -476976667:
			return 0;
		case -425837785:
			return 8;
		case -423179200:
			return 16;
		case 118717457:
			return 6;
		case 321953502:
			return 15;
		case 387219749:
			return 4;
		case 548543805:
			return 18;
		case 695084504:
			return 5;
		case 754594631:
			return 17;
		case 1072715680:
			return 2;
		case 1186273574:
			return 13;
		case 1428160146:
			return 11;
		case 1921928004:
			return 19;
		case 1983526175:
			return 10;
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

bool func_269(var uParam0, var uParam1)
{
	iVar0 = func_354(uParam0, uParam1, 0);
	if (iVar0 != -1)
	{
		if (is_entity_visible(&(uParam0->f_112.f_200[iVar0])))
		{
			return true;
		}
	}
	iVar0 = func_354(uParam0, uParam1, 1);
	if (iVar0 != -1)
	{
		if (is_entity_visible(&(uParam0->f_948.f_1[iVar0])))
		{
			return true;
		}
	}
	return false;
}

bool func_270(var uParam0, var uParam1)
{
	if (uParam1->f_3 != -628138157)
	{
		return false;
	}
	if (func_255(uParam1->f_2))
	{
		return false;
	}
	if (&uParam0->f_1730.f_1[0] == -1)
	{
		return false;
	}
	if (uParam0->f_1730.f_1.f_19[0]->f_12 != -1505278960)
	{
		return false;
	}
	return true;
}

bool func_271()
{
	if (func_23(func_259()))
	{
		return false;
	}
	if (func_538(player_id(), 1, 0, 1))
	{
		return false;
	}
	if (&Global_1048584)
	{
		return false;
	}
	return true;
}

void func_272(var uParam0)
{
	if (&Global_1048584)
	{
		return;
	}
	iVar3 = player_id();
	bVar40 = network_is_player_in_mp_cutscene(iVar3);
	iVar39 = _0x901e0dc25080c8b9(iVar3);
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar4 = int_to_playerindex(iVar0);
		if (!_network_is_player_index_valid(iVar4))
		{
		}
		else if (!network_is_player_active(iVar4))
		{
		}
		else if (!_0x9be7dcb22d32ccbe(iVar39, iVar4))
		{
		}
		else
		{
			iVar38 = get_player_ped(iVar4);
			if (!does_entity_exist(iVar38))
			{
			}
			else
			{
				iVar5[iVar1] = iVar38;
				_0xf3354d6ca46f419d(iVar38, 0);
				set_entity_visible_in_cutscene(iVar38, 1, 0, 256);
				iVar1++;
			}
		}
		iVar0++;
	}
	if (!bVar40)
	{
		_0x007ff852dcf49da4(32);
		network_set_in_mp_cutscene(true, false, 32, false);
	}
	iVar2 = 0;
	while (iVar2 <= (uParam0->f_1565.f_3 - 1))
	{
		_0x51d99497abf3f451(&(uParam0->f_1565[iVar2]));
		switch (uParam0->f_1565[iVar2]->f_1)
		{
			case -2045445368:
				if (_0x424b17a7dc5c90bc(iVar3))
				{
				}
				else
				{
					door_system_set_door_state(&(uParam0->f_1565[iVar2]), 1);
				}
				iVar2++;
				iVar0 = 0;
				while (iVar0 <= (iVar1 - 1))
				{
					_0xf3354d6ca46f419d(&(iVar5[iVar0]), 1);
					iVar0++;
				}
				default:
					break;
		}
	}
}

bool func_273(var uParam0)
{
	if (&Global_1048584)
	{
		return true;
	}
	if (func_23(func_259()))
	{
		if (func_163() == func_93(uParam0->f_1))
		{
			if (func_539() == -1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else if (func_539() == -1)
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

bool func_274(int iParam0, int iParam1)
{
	return is_bit_set(&(Global_1071686->f_22538.f_385[iParam0]), iParam1);
}

void func_275(int iParam0, int iParam1)
{
	if (!func_274(iParam0, iParam1))
	{
		set_bit(Global_1071686->f_22538.f_385[iParam0], iParam1);
		Global_1071686->f_22538.f_385[iParam0]->f_1[iParam1] = get_id_of_this_thread();
		func_456();
	}
}

void func_276(var uParam0, var uParam1)
{
	iVar1 = 0;
	while (iVar1 <= (get_number_of_events(1) - 1))
	{
		iVar0 = get_event_at_index(1, iVar1);
		switch (iVar0)
		{
			case -507840394:
				func_540(iVar1, uParam0, uParam1);
				break;
		}
		iVar1++;
	}
}

var func_277(var uParam0)
{
	return uParam0->f_4306.f_40;
}

var func_278(var uParam0, int iParam1)
{
	return &(uParam0->f_4306[iParam1]);
}

void func_279(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_4306[iParam1] = iParam2;
}

void func_280(int iParam0, int iParam1)
{
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_7 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_5 = iParam0;
	Var0.f_4 = 0;
	Var0.f_6 = func_93(func_541(iParam1));
	Var0.f_7 = iParam1;
	_0x31010318ba9897ac(&uVar12, _0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id())));
	func_542(&Var0, uVar12);
}

void func_281(var uParam0, int iParam1)
{
	uParam0->f_4306[iParam1]->f_12 = get_game_timer();
}

bool func_282(var uParam0, int iParam1)
{
	return (get_game_timer() - uParam0->f_4306[iParam1]->f_12) >= 2000;
}

int func_283(var uParam0, int iParam1)
{
	return uParam0->f_4306[iParam1]->f_2;
}

int func_284(var uParam0, int iParam1)
{
	return uParam0->f_4306[iParam1]->f_2.f_2;
}

int func_285(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar5 = func_543(iParam0);
	if (iVar5 == -1)
	{
		return 0;
	}
	if (!func_544(&uVar0))
	{
		return 0;
	}
	if (!func_545(&uVar0, 4, 0, 0, 1))
	{
		return 0;
	}
	if (!func_545(&uVar0, 5, 0, 0, 1))
	{
		return 0;
	}
	if (!func_545(&uVar0, 7, func_546(iVar5), 0, 1))
	{
		return 0;
	}
	if (!func_545(&uVar0, 8, 0, 0, 1))
	{
		return 0;
	}
	if (!func_545(&uVar0, 9, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_545(&uVar0, 19, 0, 0, 1))
	{
		return 0;
	}
	if (!func_545(&uVar0, 20, func_547(iParam2), 0, 1))
	{
		return 0;
	}
	if (!func_545(&uVar0, 21, func_548(iParam3), 0, 1))
	{
		return 0;
	}
	if (!func_545(&uVar0, 22, iParam1, 0, 1))
	{
		return 0;
	}
	return func_549(&uVar0);
}

void func_286(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_4306[iParam1]->f_5 = iParam2;
}

void func_287(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_4306[iParam1]->f_6 = iParam2;
}

void func_288(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_4306[iParam1]->f_7 = iParam2;
}

void func_289(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_4306[iParam1]->f_8 = iParam2;
}

void func_290(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_4306[iParam1]->f_9 = iParam2;
}

void func_291(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_4306[iParam1]->f_10 = iParam2;
}

int func_292(var uParam0, int iParam1)
{
	return uParam0->f_4306[iParam1]->f_2.f_1;
}

int func_293(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2076061048;
		case 1:
			return 1960865708;
		case 2:
			return -717214561;
		default:
			break;
	}
	return 0;
}

int func_294(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1407154268;
		case 1:
			return 1713249497;
		case 2:
			return 1894724219;
		default:
			break;
	}
	return 0;
}

void func_295(int iParam0, int iParam1, var uParam2)
{
	_copy_memory((*Global_1120070)[iParam0]->f_24.f_2049[iParam1], uParam2, 4);
}

void func_296(var uParam0)
{
	uParam0->f_4306.f_40 = (uParam0->f_4306.f_40 + 1 % 3);
}

bool func_297(int iParam0, int iParam1)
{
	return ((*Global_1120070)[iParam0]->f_19 && iParam1) != 0;
}

void func_298(int iParam0, var uParam1, var uParam2)
{
	if (!func_168(&(uParam1->f_67.f_27), func_167(-1162096896)))
	{
		if (_does_volume_exist(&(uParam1->f_67.f_2[9])))
		{
			uParam1->f_67.f_25 = _0x4c39c95ae5db1329(&(uParam1->f_67.f_2[9]), 0, 16);
			func_251(&(uParam1->f_67.f_27), func_167(-1162096896), func_170(*uParam2));
		}
	}
	set_ped_reset_flag(iParam0, 129, true);
	set_ped_reset_flag(iParam0, 187, true);
}

void func_299(var uParam0, var uParam1, int iParam2)
{
	if (!func_168(&(uParam0->f_67.f_27), func_167(-476976667)))
	{
		return;
	}
	if (func_23(func_259()) && func_77())
	{
		return;
	}
	if (is_ped_in_combat(iParam2, 0) || func_538(player_id(), 1, 0, 1))
	{
		return;
	}
	if (!func_269(uParam0, uParam1))
	{
		return;
	}
	if (!func_550(uParam1->f_1))
	{
		return;
	}
	_0xc9caeaeec1256e54(-1249243147);
	disable_control_action(0, -128997553, false);
	disable_control_action(0, 130948705, false);
	disable_control_action(0, -654888872, false);
	disable_control_action(0, -1304887797, false);
}

void func_300(var uParam0, var uParam1, int iParam2)
{
	if (!func_551(uParam0->f_67.f_26, 1, 1))
	{
		return;
	}
	bVar0 = func_552(uParam0->f_67.f_26, 1, 0);
	bVar1 = func_553(iParam2, uParam0, uParam1);
	if (bVar0 != bVar1)
	{
		if (bVar1)
		{
			func_554(uParam0->f_67.f_26, 1, 1);
		}
		else
		{
			func_555(uParam0->f_67.f_26, 1, 1);
		}
	}
}

bool func_301(var uParam0, int iParam1)
{
	iVar0 = func_268(iParam1, 1);
	if (iVar0 < 0 || iVar0 >= 21)
	{
		return false;
	}
	if (!_does_volume_exist(&(uParam0->f_67.f_2[iVar0])))
	{
		return false;
	}
	iVar1 = player_id();
	if (is_player_dead(iVar1))
	{
		return false;
	}
	return func_556(get_player_ped(iVar1), &(uParam0->f_67.f_2[iVar0]), 1, 0);
}

bool func_302(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102219->f_3 && iParam0) != 0;
	}
	return ((*Global_1100469)[iParam1]->f_3 && iParam0) != 0;
}

int func_303(int iParam0)
{
	return (*Global_1120070)[iParam0]->f_10;
}

int func_304(var uParam0, int iParam1, int iParam2)
{
	switch (iParam2)
	{
		case 1:
			return &(uParam0->f_948.f_212[func_557(iParam1, 1)]);
		case 0:
			return &(uParam0->f_112.f_828[func_557(iParam1, 1)]);
		default:
			break;
	}
	return -1;
}

bool func_305(var uParam0, vector3 vParam1, float fParam4)
{
	if (func_297(*uParam0, 2))
	{
		return false;
	}
	return is_sphere_visible(vParam1, fParam4);
}

void func_306(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	if (iParam2 == -1)
	{
		iVar2 = uParam0->f_62.f_2;
	}
	else if (iParam2 >= 0 && iParam2 < 10)
	{
		iVar2 = iParam2;
	}
	else
	{
		return;
	}
	if (!does_entity_exist(&(uParam0->f_948.f_1[iVar2])))
	{
		return;
	}
	Var0 = { func_558(uParam0, uParam1, iVar2) };
	if (func_29(*uParam1, 1024) && uParam0->f_948.f_1[iVar2]->f_15 & 16384 != 0)
	{
		bParam3 = true;
	}
	if (!bParam3 && !func_305(uParam1, get_entity_coords(&(uParam0->f_948.f_1[iVar2]), true, false), 1f))
	{
		return;
	}
	if (func_29(*uParam1, 1024) && uParam0->f_948.f_1[iVar2]->f_15 & 16384 != 0)
	{
		func_358(*uParam1, 1024);
	}
	iVar3 = Var0.f_1 ^ uParam0->f_948.f_1[iVar2]->f_14;
	uParam0->f_948.f_1[iVar2]->f_16 = Var0;
	if (iVar3 == 0)
	{
		return;
	}
	if (Var0.f_1 == 0)
	{
		if (is_entity_visible(&(uParam0->f_948.f_1[iVar2])))
		{
		}
		else
		{
			func_559(uParam0, uParam1, iVar2, 1);
		}
	}
	else if (is_entity_visible(&(uParam0->f_948.f_1[iVar2])))
	{
		func_559(uParam0, uParam1, iVar2, 0);
	}
	uParam0->f_948.f_1[iVar2]->f_14 = Var0.f_1;
}

void func_307(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	if (iParam2 == -1)
	{
		iVar2 = uParam0->f_62.f_1;
	}
	else if (iParam2 >= 0 && iParam2 < 4)
	{
		iVar2 = iParam2;
	}
	else
	{
		return;
	}
	if (!does_entity_exist(&(uParam0->f_112.f_200[iVar2])))
	{
		return;
	}
	Var0 = { func_560(uParam0, uParam1, iVar2) };
	if (!bParam3 && !func_305(uParam1, get_entity_coords(&(uParam0->f_112.f_200[iVar2]), true, false), 1f))
	{
		return;
	}
	iVar3 = Var0.f_1 ^ uParam0->f_112.f_200[iVar2]->f_152;
	uParam0->f_112.f_200[iVar2]->f_153 = Var0;
	if (iVar3 == 0)
	{
		return;
	}
	if (Var0.f_1 == 0)
	{
		if (is_entity_visible(&(uParam0->f_112.f_200[iVar2])))
		{
		}
		else
		{
			func_561(uParam0, uParam1, iVar2, 1);
		}
	}
	else if (is_entity_visible(&(uParam0->f_112.f_200[iVar2])))
	{
		func_561(uParam0, uParam1, iVar2, 0);
	}
	uParam0->f_112.f_200[iVar2]->f_152 = Var0.f_1;
}

int func_308(int iParam0)
{
	return (*Global_1120070)[iParam0]->f_22;
}

bool func_309(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_310(var uParam0, var uParam1, int iParam2)
{
	_0xa22712e8471aa08e(&(uParam0->f_948.f_1[iParam2]), 0, 0);
}

void func_311(var uParam0, var uParam1, int iParam2)
{
	_0xa22712e8471aa08e(&(uParam0->f_948.f_1[iParam2]), 1, 0);
}

void func_312(var uParam0, var uParam1, int iParam2)
{
	set_ped_config_flag(&(uParam0->f_112.f_200[iParam2]), 297, false);
	set_ped_config_flag(&(uParam0->f_112.f_200[iParam2]), 301, true);
	set_ped_config_flag(&(uParam0->f_112.f_200[iParam2]), 376, false);
}

void func_313(var uParam0, var uParam1, int iParam2)
{
	set_ped_config_flag(&(uParam0->f_112.f_200[iParam2]), 297, true);
	set_ped_config_flag(&(uParam0->f_112.f_200[iParam2]), 301, false);
	set_ped_config_flag(&(uParam0->f_112.f_200[iParam2]), 376, true);
}

int func_314(int iParam0)
{
	return (*Global_1120070)[iParam0]->f_10;
}

var func_315(int iParam0, int iParam1)
{
	return Global_1120070->f_8461[iParam0][func_557(iParam1, 1)];
}

void func_316(var uParam0, int iParam1)
{
	uParam0->f_111 = iParam1;
}

bool func_317(var uParam0, var uParam1, var uParam2)
{
	func_335(uParam0);
	if (!uParam1->f_124)
	{
		func_562(uParam0);
		uParam1->f_124 = 1;
	}
	uParam1->f_128 = 0;
	if (!func_563(uParam0))
	{
		return false;
	}
	if (uParam1->f_113 == 0)
	{
		func_564(uParam1);
	}
	if (!func_565(uParam1))
	{
		return false;
	}
	if (!func_566(uParam1))
	{
		return false;
	}
	if (func_567(uParam1))
	{
		func_568(uParam1);
		func_339(uParam0, uParam1, 0);
		func_339(uParam0, uParam1, 1);
		if (func_336() != -1)
		{
			func_337(uParam0, uParam1, 2);
		}
		else
		{
			func_339(uParam0, uParam1, 2);
		}
	}
	return true;
}

void func_318(var uParam0, var uParam1)
{
	iVar0 = func_336();
	if (uParam0->f_4347.f_107 == iVar0)
	{
		if ((iVar0 != -1 && !uParam1->f_128) && uParam1->f_123 < (Global_1296859->f_21 - 10))
		{
			uParam1->f_123 = Global_1296859->f_21;
			uParam1->f_128 = 1;
			iVar1 = 2;
			iVar2 = _databinding_read_data_int(uParam1->f_85[iVar1]->f_5);
			iVar3 = func_444(iVar0) + 1;
			iVar3 = func_208(iVar3, 1, 5);
			if (iVar2 != iVar3)
			{
				_databinding_write_data_int(uParam1->f_85[iVar1]->f_5, iVar3);
			}
		}
		return;
	}
	if (uParam0->f_4347.f_107 == -1)
	{
		if (!func_569())
		{
			return;
		}
		func_335(uParam0);
		func_337(uParam0, uParam1, 2);
		func_338(uParam1, 2, 1);
		return;
	}
	if (iVar0 == -1)
	{
		_set_streamed_txd_as_no_longer_needed(func_445(uParam0->f_4347.f_107, func_444(uParam0->f_4347.f_107)));
		func_335(uParam0);
		func_338(uParam1, 2, 0);
		func_570(uParam1, 2);
		func_339(uParam0, uParam1, 2);
		return;
	}
}

bool func_319(var uParam0)
{
	return ((func_332(*uParam0) == 2 || func_332(*uParam0) == 1) || func_332(*uParam0) == 5);
}

bool func_320()
{
	Global_1120070->f_8495 = 0;
	Global_1120070->f_8495.f_1 = 0;
	iVar0 = _launch_app_by_hash_with_entry(1433015236, 518901366);
	if (iVar0 == 0)
	{
		Global_1120070->f_8495.f_4 = 1;
		return true;
	}
	return false;
}

void func_321(int iParam0, int iParam1)
{
	(*Global_1120070)[iParam0]->f_15 = iParam1;
}

void func_322(var uParam0)
{
	Global_1120070->f_8495.f_3 = 0;
	uParam0->f_115 = _databinding_add_data_container_from_path("", "BountyHunterReplayMenu");
	uParam0->f_116 = _databinding_add_data_int(uParam0->f_115, "setDifficulty", 0);
	uParam0->f_117 = _databinding_add_data_string(uParam0->f_115, "descriptionText", "");
	uVar0 = _databinding_add_data_container(uParam0->f_115, "listItemDataContainer");
	uParam0->f_118 = _databinding_add_ui_item_list(uParam0->f_115, "itemsList");
	Var22 = 1;
	Var22.f_1 = 1;
	Var22.f_2 = 1105014447;
	Var22.f_4 = -1;
	Var22.f_5 = -1;
	Var22.f_6 = -1;
	Var22.f_10 = -1;
	Var22.f_11 = -1;
	Var22.f_12 = -1;
	Var22.f_17 = 1105014447;
	Var22.f_18 = 1105014447;
	iVar50 = 0;
	while (iVar50 <= (10 - 1))
	{
		iVar41 = iVar50;
		iVar1 = func_571(iVar41, 1);
		if (!_unlock_is_unlocked(iVar1) || !_unlock_is_visible(iVar1))
		{
		}
		else
		{
			iVar1 = func_572(iVar41, 1);
			if (!_unlock_is_unlocked(iVar1) || !_unlock_is_visible(iVar1))
			{
			}
			else
			{
				StringCopy(&cVar42, "listItemData", 64);
				StringIntConCat(&cVar42, iVar50, 64);
				Var22.f_16 = func_573(iVar41);
				Var22.f_4 = 1433015236;
				Var22.f_5 = 524868507;
				func_574(&uVar2, uVar0, cVar42, Var22);
				_databinding_add_data_int(uVar2, "dynamic_list_item_mission_hash", func_575(iVar41));
				_databinding_insert_ui_item_to_list_from_context_string_alias(uParam0->f_118, iVar50, "pm_dynamic_text_item", uVar2);
			}
		}
		iVar50++;
	}
}

bool func_323(var uParam0)
{
	return func_576(*uParam0) != 0;
}

bool func_324()
{
	iVar0 = _launch_app_by_hash_with_entry(get_hash_key("translation_overlay"), get_hash_key("generic"));
	if (iVar0 == 0)
	{
		return true;
	}
	return false;
}

void func_325(var uParam0)
{
	if (!uParam0->f_13)
	{
		uParam0->f_1 = _databinding_add_data_container_from_path("", "Translate");
		uParam0->f_2 = _databinding_add_data_container(uParam0->f_1, "Generic");
		uParam0->f_4 = _databinding_add_data_container(uParam0->f_2, "textField0");
		uParam0->f_6 = _databinding_add_data_int(uParam0->f_4, "style", 0);
		uParam0->f_5 = _databinding_add_data_hash(uParam0->f_4, "text", 0);
		uParam0->f_7 = _databinding_add_data_container(uParam0->f_2, "textField1");
		uParam0->f_9 = _databinding_add_data_int(uParam0->f_7, "style", 0);
		uParam0->f_8 = _databinding_add_data_hash(uParam0->f_7, "text", 0);
		uParam0->f_10 = _databinding_add_data_container(uParam0->f_2, "textField2");
		uParam0->f_12 = _databinding_add_data_int(uParam0->f_10, "style", 0);
		uParam0->f_11 = _databinding_add_data_hash(uParam0->f_10, "text", 0);
		uParam0->f_13 = 1;
	}
	else
	{
		_databinding_write_data_hash_string(uParam0->f_5, 0);
		_databinding_write_data_int(uParam0->f_6, 0);
		_databinding_write_data_hash_string(uParam0->f_8, 0);
		_databinding_write_data_int(uParam0->f_9, 3);
		_databinding_write_data_hash_string(uParam0->f_11, 0);
		_databinding_write_data_int(uParam0->f_12, 3);
	}
}

int func_326(int iParam0)
{
	return (*Global_1120070)[iParam0]->f_15;
}

void func_327(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	if (uParam1->f_25.f_13)
	{
		func_443(&(uParam1->f_25));
	}
	if (!uParam1->f_24)
	{
		func_577(uParam1);
	}
	if (!bParam3)
	{
		iVar1 = func_336();
		iVar0 = func_578(iVar1, func_444(iVar1));
	}
	else
	{
		iVar0 = func_578(uParam0->f_4347.f_108, func_444(uParam0->f_4347.f_108));
	}
	if (!func_579(iVar0, 0))
	{
		return;
	}
	Var2.f_2 = 5;
	Var2.f_18 = 8;
	if (!_item_database_fillout_ui_data(iVar0, &Var2))
	{
		return;
	}
	iVar37 = 0;
	while (iVar37 < 8)
	{
		iVar39 = 0;
		while (iVar39 < 7)
		{
			iVar40 = func_580(iVar39, 1);
			iVar38 = iVar40;
			if (Var2.f_18[iVar37]->f_1 == iVar38)
			{
				if (&Var2.f_18[iVar37] != 0)
				{
					uVar41 = func_581(uParam1, iVar40);
					if (_databinding_is_data_id_valid(uVar41))
					{
						_databinding_write_data_hash_string(uVar41, &(Var2.f_18[iVar37]));
					}
				}
				else
				{
					iVar39++;
				}
				iVar37++;
			}
		}
	}
}

void func_328(var uParam0, var uParam1, var uParam2)
{
	if (uParam0->f_4347.f_108 != -1)
	{
		if (uParam0->f_4347.f_120 == 0)
		{
			uParam0->f_4347.f_120 = func_445(uParam0->f_4347.f_108, func_444(uParam0->f_4347.f_108));
		}
		if (uParam0->f_4347.f_119 != uParam0->f_4347.f_120)
		{
			_request_streamed_txd(uParam0->f_4347.f_120, true);
			uParam0->f_4347.f_119 = uParam0->f_4347.f_120;
		}
		if (!_has_streamed_txd_loaded(uParam0->f_4347.f_120))
		{
			_request_streamed_txd(uParam0->f_4347.f_120, true);
		}
		else if (uParam0->f_4347.f_121 != 0)
		{
			_set_streamed_txd_as_no_longer_needed(uParam0->f_4347.f_121);
			uParam0->f_4347.f_121 = 0;
		}
		if (((uParam0->f_4347.f_121 != 0 && _has_streamed_txd_loaded(uParam0->f_4347.f_121)) || (uParam0->f_4347.f_120 != 0 && _has_streamed_txd_loaded(uParam0->f_4347.f_120))) && !uParam1->f_126)
		{
			uParam1->f_126 = 1;
			func_582(*uParam2, 512);
			func_582(*uParam2, 1024);
			func_160(uParam1, uParam2, 1);
			func_333(*uParam2, 5);
		}
		if (!uParam0->f_4347.f_125 && func_583(uParam0, uParam1, 2))
		{
			Global_1120070->f_8495.f_3 = 1;
			uParam0->f_4347.f_125 = 1;
			func_338(uParam1, 2, 1);
		}
		iVar0 = func_584(uParam1);
		if (iVar0 != _databinding_read_data_bool_from_parent(Global_1120070->f_8495.f_5, "dynamic_list_item_enabled"))
		{
			_databinding_write_data_bool_from_parent(Global_1120070->f_8495.f_5, "dynamic_list_item_enabled", iVar0);
		}
		func_585(uParam1);
	}
	if ((Global_1120070->f_8495.f_1 && uParam0->f_4347.f_108 != -1) && _databinding_read_data_bool_from_parent(Global_1120070->f_8495.f_5, "dynamic_list_item_enabled"))
	{
		func_333(*uParam2, 3);
		func_586(uParam0->f_4347.f_108);
		_close_app_by_hash(get_hash_key("player_menu"));
		uParam1->f_122 = 0;
		func_316(uParam1, 4);
		return;
	}
	if (!_is_app_running(get_hash_key("player_menu")))
	{
		if (func_319(uParam2))
		{
			func_333(*uParam2, 4);
		}
		func_334(uParam1);
		if (func_336() != -1)
		{
			func_337(uParam0, uParam1, 2);
			func_338(uParam1, 2, 1);
		}
		else
		{
			func_339(uParam0, uParam1, 2);
			func_338(uParam1, 2, 0);
		}
		_0xe8eaff7b41edd291(1921928004, 483933850, 0);
		func_316(uParam1, 2);
		func_358(*uParam2, 512);
		func_582(*uParam2, 1024);
		return;
	}
	else if (!func_319(uParam2))
	{
		_close_app_by_hash(get_hash_key("player_menu"));
		func_334(uParam1);
		if (func_336() != -1)
		{
			func_337(uParam0, uParam1, 2);
			func_338(uParam1, 2, 1);
		}
		else
		{
			func_339(uParam0, uParam1, 2);
			func_338(uParam1, 2, 0);
		}
		_0xe8eaff7b41edd291(1921928004, 483933850, 0);
		func_316(uParam1, 2);
		func_358(*uParam2, 512);
		func_582(*uParam2, 1024);
		return;
	}
	if (Global_1120070->f_8495 != 0 && func_587(Global_1120070->f_8495) != uParam0->f_4347.f_108)
	{
		uParam0->f_4347.f_108 = func_587(Global_1120070->f_8495);
		if (uParam0->f_4347.f_120 != 0)
		{
			if (!_has_streamed_txd_loaded(uParam0->f_4347.f_120))
			{
				_set_streamed_txd_as_no_longer_needed(uParam0->f_4347.f_121);
			}
			uParam0->f_4347.f_121 = uParam0->f_4347.f_120;
		}
		uParam0->f_4347.f_120 = func_445(uParam0->f_4347.f_108, func_444(uParam0->f_4347.f_108));
		uParam0->f_4347.f_125 = 0;
	}
}

void func_329(int iParam0, int iParam1)
{
	(*Global_1120070)[iParam0]->f_11 = iParam1;
}

void func_330(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (!uParam1->f_25.f_13)
	{
		func_325(&(uParam1->f_25));
	}
	if (uParam1->f_24)
	{
		func_442(uParam1);
	}
	if (func_326(*uParam2) == 2 && func_336() != -1)
	{
		func_327(uParam0, uParam1, func_326(*uParam2), 0);
		return;
	}
	iVar0 = func_588(uParam0, iParam3);
	if (iVar0 == 0)
	{
		return;
	}
	_databinding_write_data_hash_string(uParam1->f_25.f_5, iVar0);
	_databinding_write_data_int(uParam1->f_25.f_6, 0);
	iVar0 = func_589(uParam0, iParam3);
	if (iVar0 == 0)
	{
		return;
	}
	_databinding_write_data_hash_string(uParam1->f_25.f_8, iVar0);
	_databinding_write_data_int(uParam1->f_25.f_9, 3);
	iVar0 = func_590(uParam0, iParam3);
	if (iVar0 == 0)
	{
		return;
	}
	_databinding_write_data_hash_string(uParam1->f_25.f_11, iVar0);
	_databinding_write_data_int(uParam1->f_25.f_12, 3);
	uParam1->f_25 = iParam3;
}

int func_331()
{
	return Global_1130634->f_291.f_1;
}

int func_332(int iParam0)
{
	return (*Global_1120070)[iParam0]->f_12;
}

void func_333(int iParam0, int iParam1)
{
	(*Global_1120070)[iParam0]->f_12 = iParam1;
}

void func_334(var uParam0)
{
	Global_1120070->f_8495 = 0;
	uParam0->f_108 = -1;
	uParam0->f_120 = 0;
	uParam0->f_121 = 0;
	uParam0->f_126 = 0;
	uParam0->f_122 = 0;
	Global_1120070->f_8495.f_4 = 0;
	if (get_hash_key(_create_var_string(2, "BOUNTY_REPLAY_HEADER")) == get_hash_key(_databinding_read_data_string(Global_1940311->f_1433.f_54.f_3)))
	{
		_databinding_write_data_string(Global_1940311->f_1433.f_54.f_3, _create_var_string(2, "FREEROAM_HEADER"));
	}
	_databinding_remove_data_entry(uParam0->f_115);
}

void func_335(var uParam0)
{
	iVar0 = func_336();
	uParam0->f_4347.f_107 = iVar0;
}

int func_336()
{
	return Global_1130634->f_291;
}

int func_337(var uParam0, var uParam1, int iParam2)
{
	iVar0 = iParam2;
	_databinding_write_data_bool(uParam1->f_39[iVar0]->f_1, false);
	_databinding_write_data_bool(uParam1->f_85[iVar0]->f_1, true);
	iVar1 = func_336();
	iVar2 = func_444(iVar1) + 1;
	iVar2 = func_208(iVar2, 1, 5);
	_databinding_write_data_hash_string(uParam1->f_85[iVar0]->f_3, func_445(iVar1, (iVar2 - 1)));
	_databinding_write_data_hash_string(uParam1->f_85[iVar0]->f_4, func_591(iVar1, (iVar2 - 1)));
	_databinding_write_data_int(uParam1->f_85[iVar0]->f_5, iVar2);
	return 1;
}

void func_338(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = iParam1;
	_databinding_write_data_bool(uParam0->f_39[iVar0]->f_1, !bParam2);
	_databinding_write_data_bool(uParam0->f_85[iVar0]->f_1, bParam2);
}

int func_339(var uParam0, var uParam1, int iParam2)
{
	iVar0 = iParam2;
	_databinding_write_data_string(uParam1->f_39[iVar0]->f_6, _create_var_string(0, func_592(uParam0, iParam2)));
	_databinding_write_data_string(uParam1->f_39[iVar0]->f_7, _create_var_string(0, func_593(uParam0, iParam2)));
	_databinding_write_data_string(uParam1->f_39[iVar0]->f_3, _create_var_string(0, func_594(uParam0, iParam2)));
	_databinding_write_data_string(uParam1->f_39[iVar0]->f_4, func_596(func_595(func_292(uParam0, iParam2)), 109029619));
	_databinding_write_data_int(uParam1->f_39[iVar0]->f_9, func_598(func_597(uParam0, iParam2)));
	iVar9 = func_283(uParam0, iParam2);
	if (iVar9 == 0)
	{
		return 0;
	}
	if (!func_599(iVar9, &uVar1))
	{
		return 0;
	}
	_databinding_write_data_hash_string(uParam1->f_39[iVar0]->f_11, get_hash_key(&uVar1));
	if (!func_600(iVar9, &uVar1))
	{
		return 0;
	}
	_databinding_write_data_hash_string(uParam1->f_39[iVar0]->f_12, get_hash_key(&uVar1));
	_databinding_write_data_bool(uParam1->f_39[iVar0]->f_1, true);
	return 1;
}

int func_340()
{
	return Global_1109804->f_21.f_12.f_1;
}

bool func_341(var uParam0, var uParam1, vector3 vParam2)
{
	if (&uParam0->f_1730.f_1[0] == -1)
	{
		return false;
	}
	if (&uParam0->f_1730.f_1[0] >= 5)
	{
		return false;
	}
	if (uParam0->f_1730.f_1.f_19[0]->f_12 != -1505278960)
	{
		return false;
	}
	if (func_601(&(uParam0->f_1730.f_2299), 1))
	{
		return false;
	}
	iVar0 = player_id();
	if (!_0x424b17a7dc5c90bc(iVar0))
	{
		return false;
	}
	iVar1 = get_player_ped(iVar0);
	if (!is_ped_on_foot(iVar1))
	{
		return false;
	}
	if (!_does_volume_exist(&(uParam0->f_1730.f_1.f_19[0]->f_65[2])))
	{
		return false;
	}
	if (!_0xf256a75210c5c0eb(&(uParam0->f_1730.f_1.f_19[0]->f_65[2]), vParam2))
	{
		func_602(&(uParam0->f_9), 1, func_93(uParam1->f_1));
		return false;
	}
	if (func_603(func_92(uParam1->f_2)))
	{
		return false;
	}
	if (func_23(func_259()))
	{
		return false;
	}
	if (func_538(iVar0, 1, 0, 1))
	{
		return false;
	}
	return true;
}

void func_342(var uParam0, var uParam1)
{
	if (!_0x424b17a7dc5c90bc(player_id()))
	{
		return;
	}
	if (func_604(&(uParam0->f_9), 1))
	{
		return;
	}
	if (!func_605())
	{
		return;
	}
	if (!func_606(player_id(), 1, 0))
	{
		return;
	}
	iVar0 = func_607(*uParam1);
	if (iVar0 == -1)
	{
		return;
	}
	if (func_608(*uParam1, iVar0, -890716772))
	{
		return;
	}
	iVar1 = func_435("GFH_HELP_CHANGE_TO_OFFENSIVE", 10000, 0, 0, 0, 1);
	if (iVar1 != 0)
	{
		func_609(&(uParam0->f_9), 1, func_93(uParam1->f_1));
	}
}

void func_343(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_610(0);
	iVar1 = func_610(1);
	iVar2 = func_610(2);
	if (iVar0 > iParam0)
	{
		iParam0 = iVar0;
	}
	if (iVar1 > iParam1)
	{
		iParam1 = iVar1;
	}
	if (iVar2 > iParam2)
	{
		iParam2 = iVar2;
	}
	func_611(iParam0, iParam1, iParam2);
}

bool func_344(var uParam0, var uParam1, vector3 vParam2)
{
	if (&uParam0->f_1730.f_1[0] == -1)
	{
		return false;
	}
	if (&uParam0->f_1730.f_1[0] >= 5)
	{
		return false;
	}
	if (uParam0->f_1730.f_1.f_19[0]->f_12 != -1505278960)
	{
		return false;
	}
	if (func_601(&(uParam0->f_1730.f_2299), 1))
	{
		return false;
	}
	iVar1 = player_id();
	if (!_0x424b17a7dc5c90bc(iVar1))
	{
		func_612(&(uParam0->f_1730.f_2300), 1, func_93(uParam1->f_1));
		return false;
	}
	bVar0 = !func_613(&(uParam0->f_1730.f_2300), 1);
	func_614(&(uParam0->f_1730.f_2300), 1, func_93(uParam1->f_1));
	iVar2 = get_player_ped(iVar1);
	if (!is_ped_on_foot(iVar2))
	{
		return false;
	}
	if (!func_615(uParam0, uParam1, vParam2))
	{
		func_614(&(uParam0->f_1730.f_2300), 2, func_93(uParam1->f_1));
		func_358(*uParam1, 64);
		return false;
	}
	if (!bVar0)
	{
		func_612(&(uParam0->f_1730.f_2300), 2, func_93(uParam1->f_1));
		func_582(*uParam1, 64);
		return false;
	}
	if (func_603(func_92(uParam1->f_2)))
	{
		func_612(&(uParam0->f_1730.f_2300), 2, func_93(uParam1->f_1));
		func_582(*uParam1, 64);
		return false;
	}
	if (func_23(func_259()))
	{
		func_612(&(uParam0->f_1730.f_2300), 2, func_93(uParam1->f_1));
		func_582(*uParam1, 64);
		return false;
	}
	if (func_616())
	{
		func_612(&(uParam0->f_1730.f_2300), 2, func_93(uParam1->f_1));
		func_582(*uParam1, 64);
		return false;
	}
	if (func_538(iVar1, 1, 0, 1))
	{
		func_612(&(uParam0->f_1730.f_2300), 2, func_93(uParam1->f_1));
		func_582(*uParam1, 64);
		return false;
	}
	if (func_354(uParam0, uParam1, 0) == -1)
	{
		func_612(&(uParam0->f_1730.f_2300), 2, func_93(uParam1->f_1));
		return false;
	}
	if (!func_617(uParam0, uParam1))
	{
		func_612(&(uParam0->f_1730.f_2300), 2, func_93(uParam1->f_1));
		func_582(*uParam1, 64);
		return false;
	}
	if (func_618(uParam1, (uParam0->f_112.f_200[func_354(uParam0, uParam1, 0)])->f_152))
	{
		func_612(&(uParam0->f_1730.f_2300), 2, func_93(uParam1->f_1));
		func_582(*uParam1, 64);
		return false;
	}
	if (!network_is_session_active() || !network_is_game_in_progress())
	{
		return false;
	}
	Var3 = { func_619(_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(iVar1))) };
	_0x4ef23e04a0c8ff51(&Var3, &iVar10);
	if (func_620(func_237(uParam1->f_2)))
	{
		if (iVar10 > 0)
		{
			return false;
		}
	}
	else if (iVar10 >= Global_1901947->f_166.f_2)
	{
		if (!func_29(*uParam1, 256))
		{
			func_582(*uParam1, 128);
			func_582(*uParam1, 256);
		}
		return false;
	}
	if (func_613(&(uParam0->f_1730.f_2300), 2))
	{
		return false;
	}
	return true;
}

bool func_345(var uParam0)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_4 = 10;
	Var0.f_15 = 4;
	Var0.f_15.f_5 = 4;
	Var0.f_25 = 1;
	Var0.f_28 = 2;
	Var0.f_28.f_1 = -1;
	Var0.f_28.f_1.f_1 = -1;
	Var0.f_31 = 493038497;
	Var0.f_31.f_1 = 493038497;
	if (!func_621(uParam0, &Var0))
	{
		return false;
	}
	iVar33 = func_607(*uParam0);
	if (func_608(*uParam0, iVar33, 1859868723))
	{
		iVar34 |= 2;
	}
	func_622(*uParam0, uParam0->f_1, uParam0->f_2, iVar33, 2, Var0, iVar34);
	Var35.f_1 = -1;
	func_623(uParam0->f_1, uParam0->f_2, iVar34, Var0.f_2, Var0, Var35, 0);
	return true;
}

void func_346(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_347(var uParam0, var uParam1)
{
	if (func_340() == -1)
	{
		return false;
	}
	if (func_163() != func_93(uParam1->f_1))
	{
		return false;
	}
	iVar0 = func_539();
	if (iVar0 == -1 || iVar0 >= 3)
	{
		return false;
	}
	if ((func_340() == 1 && &uParam0->f_1730.f_1[1] == -1) || (func_340() == 2 && &uParam0->f_1730.f_1[2] == -1))
	{
		return false;
	}
	return true;
}

void func_348(int iParam0)
{
	iVar0 = player_id();
	(*Global_1128574)[iVar0]->f_34 = ((*Global_1128574)[iVar0]->f_34 || iParam0);
}

void func_349(var uParam0)
{
	*uParam0 = { Global_1109804->f_21.f_12.f_12 };
}

Vector3 func_350(int iParam0)
{
	return (*Global_1116202)[iParam0]->f_7.f_1;
}

float func_351(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

float func_352(int iParam0)
{
	return (*Global_1116202)[iParam0]->f_7;
}

Vector3 func_353(int iParam0)
{
	if (!func_191(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return func_350(iParam0);
}

int func_354(var uParam0, var uParam1, int iParam2)
{
	switch (iParam2)
	{
		case 1:
			return func_304(uParam0, func_303(*uParam1), iParam2);
		case 0:
			return func_304(uParam0, func_303(*uParam1), iParam2);
		default:
			break;
	}
	return -1;
}

int func_355()
{
	return Global_1109804->f_21.f_12.f_3;
}

void func_356(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4, vector3 vParam5, int iParam8, int iParam9, int iParam10, vector3 vParam11, int iParam14)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (*uParam0 < 4)
	{
		func_361(uParam0, sParam1, uParam2, iParam3, iParam4, 1, vParam5);
	}
	else
	{
		if (uParam0->f_2 & 2 == 0)
		{
			func_624(uParam0, sParam1, 1);
		}
		if (func_625(uParam0, sParam1))
		{
			func_626(uParam0, sParam1);
			if (func_625(uParam0, sParam1))
			{
				return;
			}
		}
		if (uParam0->f_2 & 128 != 0 && _0x62de46f061caa468() != _0x5c16855277819bbf())
		{
			return;
		}
		if (*uParam0 == 4)
		{
			func_247(uParam0, 5, iParam3, iParam4);
		}
		switch (*uParam0)
		{
			case 5:
				func_627(uParam0, sParam1, uParam2, iParam3, iParam4, iParam8, 0);
				break;
			case 6:
				func_628(uParam0, sParam1, uParam2, iParam3, iParam4, iParam14);
				break;
			case 7:
				func_629(uParam0, sParam1, iParam3, iParam4, iParam14, iParam9, iParam8, iParam10, vParam11, uParam2);
				break;
			case 8:
				func_630(uParam0, sParam1, uParam2, iParam3, iParam4);
				break;
			case 9:
				func_450(uParam0, sParam1, uParam2, iParam3, iParam4, 0);
				break;
			default:
				break;
		}
	}
}

void func_357(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	if (uParam0->f_112.f_4)
	{
		return;
	}
	uParam0->f_112.f_4 = 1;
	if (iParam2 == -1)
	{
		iParam2 = func_340();
	}
	if (iParam2 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= (&uParam0->f_1730.f_1.f_19[iParam2]->f_721[3] - 1))
	{
		if (uParam0->f_1730.f_1.f_19[iParam2]->f_227[iVar0]->f_1.f_11 & 4 == 0)
		{
		}
		else
		{
			if (_0x3ab6c7b0bb0df4b1(&(uParam0->f_1730.f_1.f_19[iParam2]->f_227[iVar0]), uParam0->f_1730.f_1[iParam2]->f_1))
			{
				if (_0x005e6f28dd7ed58d(uParam0->f_1730.f_1[iParam2]->f_1, &(uParam0->f_1730.f_1.f_19[iParam2]->f_227[iVar0]->f_1)))
				{
				}
				else if ((iParam3 != 12 && iParam3 != 13) && iParam3 != 15)
				{
					if (_0x73616e64696c616e(uParam0->f_1730.f_1[iParam2]->f_1, &(uParam0->f_1730.f_1.f_19[iParam2]->f_227[iVar0]->f_1), 1, 0))
					{
					}
				else
				{
					}
					else
					{
						Jump @277; //curOff = 271
						Jump @339; //curOff = 274
						iVar1 = -1;
						func_631(uParam0, &(uParam0->f_1730.f_1.f_19[iParam2]->f_227[iVar0]), &iVar1);
						if (iVar1 == -1)
						{
						}
						else
						{
							func_632(uParam0, uParam1, iVar1, 0, 1, 1065353216, bParam4);
						}
					}
					iVar0++;
				}
			}
		}
	}
}

void func_358(int iParam0, int iParam1)
{
	(*Global_1120070)[iParam0]->f_21 = ((*Global_1120070)[iParam0]->f_21 - ((*Global_1120070)[iParam0]->f_21 && iParam1));
}

void func_359(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (!does_entity_exist(&(uParam0->f_112.f_200[iParam2])))
	{
		return;
	}
	if (iParam2 == func_354(uParam0, uParam1, 0))
	{
		if (!is_entity_dead(&(uParam0->f_112.f_200[iParam2])))
		{
			if (is_any_speech_playing(&(uParam0->f_112.f_200[iParam2])))
			{
				func_633(uParam0, uParam0->f_112.f_200[iParam2], 30000);
			}
		}
	}
	switch (uParam0->f_112.f_200[iParam2]->f_1)
	{
		case 5:
			func_634(uParam0, uParam1, iParam2, bParam3, bParam4, bParam5);
			break;
	}
}

bool func_360(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		return true;
	}
	if (func_77())
	{
		if (iParam1 != -628138157)
		{
			return false;
		}
	}
	else
	{
		return true;
	}
	return true;
}

void func_361(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4, bool bParam5, vector3 vParam6)
{
	if (*uParam0 > 1)
	{
		if (bParam5)
		{
			if (uParam0->f_2 & 2 == 0)
			{
				func_624(uParam0, sParam1, bParam5);
			}
			if (sParam1->f_13.f_6 != 0)
			{
				func_626(uParam0, sParam1);
			}
		}
		else if (uParam0->f_2 & 2 != 0)
		{
			func_635(uParam0);
		}
	}
	switch (*uParam0)
	{
		case -1:
			break;
		case 0:
			func_247(uParam0, 1, iParam3, iParam4);
			break;
		case 1:
			func_636(uParam0, sParam1, iParam3, iParam4);
			break;
		case 2:
			func_637(uParam0, sParam1, iParam3, iParam4);
			break;
		case 3:
			func_638(uParam0, sParam1, iParam3, iParam4, vParam6);
			break;
		case 4:
			break;
		case 8:
			func_630(uParam0, sParam1, uParam2, iParam3, iParam4);
			break;
		case 9:
			func_450(uParam0, sParam1, uParam2, iParam3, iParam4, 0);
			break;
		default:
			break;
	}
}

void func_362(var uParam0, var uParam1)
{
	if (func_92(uParam1->f_2) != -705903163)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_112 - 1))
	{
		if (!does_entity_exist(&(uParam0->f_112.f_200[iVar0])))
		{
		}
		else
		{
			set_ped_can_play_ambient_anims(&(uParam0->f_112.f_200[iVar0]), false);
		}
		iVar0++;
	}
}

void func_363(var uParam0, var uParam1, int iParam2)
{
	switch (uParam0->f_112.f_200[iParam2]->f_1)
	{
		case -1:
			func_639(uParam0, uParam1, iParam2);
			break;
		case 0:
			func_640(uParam0, uParam1, iParam2);
			break;
		case 1:
			func_641(uParam0, uParam1, iParam2);
			break;
		case 2:
			func_642(uParam0, uParam1, iParam2);
			break;
		case 3:
			func_643(uParam0, uParam1, iParam2);
			break;
		case 4:
			func_644(uParam0, uParam1, iParam2);
			break;
		case 5:
			func_645(uParam0, uParam1, iParam2);
			break;
		default:
			break;
	}
}

void func_364(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_112.f_200[iParam2]->f_47.f_56.f_20 == uParam0->f_112.f_200[iParam2]->f_47.f_56.f_19)
	{
		return;
	}
	if (!does_entity_exist(&(uParam0->f_112.f_200[iParam2])))
	{
		return;
	}
	if (is_entity_dead(&(uParam0->f_112.f_200[iParam2])))
	{
		return;
	}
	if (!_does_scenario_point_exist(uParam0->f_112.f_200[iParam2]->f_47))
	{
		return;
	}
	if (!_0x9c54041bb66bcf9e(&(uParam0->f_112.f_200[iParam2]), uParam0->f_112.f_200[iParam2]->f_47))
	{
		return;
	}
	iVar0 = uParam0->f_112.f_200[iParam2]->f_47.f_56.f_20;
	while (iVar0 <= (uParam0->f_112.f_200[iParam2]->f_47.f_56.f_19 - 1))
	{
		uParam0->f_112.f_200[iParam2]->f_47.f_56[iVar0] = _0x4d0d2e3d8bc000eb(&(uParam0->f_112.f_200[iParam2]), &(uParam0->f_112.f_200[iParam2]->f_47.f_56[iVar0]->f_1), 0);
		if (!does_entity_exist(&(uParam0->f_112.f_200[iParam2]->f_47.f_56[iVar0])))
		{
			uParam0->f_112.f_200[iParam2]->f_47.f_56[iVar0] = _get_scenario_point_entity(uParam0->f_112.f_200[iParam2]->f_47, &(uParam0->f_112.f_200[iParam2]->f_47.f_56[iVar0]->f_1));
			if (!does_entity_exist(&(uParam0->f_112.f_200[iParam2]->f_47.f_56[iVar0])))
			{
			}
			else
			{
				uParam0->f_112.f_200[iParam2]->f_47.f_56.f_20++;
				iVar0++;
			}
		}
	}
}

void func_365(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_112.f_200[iParam2]->f_47.f_56.f_20 != uParam0->f_112.f_200[iParam2]->f_47.f_56.f_19)
	{
		return;
	}
	if (!does_entity_exist(&(uParam0->f_112.f_200[iParam2])))
	{
		return;
	}
	if (!_does_scenario_point_exist(uParam0->f_112.f_200[iParam2]->f_47))
	{
		return;
	}
	if (!_0x9c54041bb66bcf9e(&(uParam0->f_112.f_200[iParam2]), uParam0->f_112.f_200[iParam2]->f_47))
	{
		return;
	}
	switch (func_93(uParam1->f_1))
	{
		case 1338314812:
			switch (uParam0->f_112.f_200[iParam2]->f_2)
			{
				case -1418951751:
					iVar0 = 0;
					while (iVar0 <= (uParam0->f_112.f_200[iParam2]->f_47.f_56.f_19 - 1))
					{
						if (!does_entity_exist(&(uParam0->f_112.f_200[iParam2]->f_47.f_56[iVar0])))
						{
						}
						else
						{
							iVar1 = get_entity_model(&(uParam0->f_112.f_200[iParam2]->f_47.f_56[iVar0]));
							if (is_model_valid(iVar1))
							{
								if (iVar1 == 587066646)
								{
									_0x669655ffb29ef1a9(&(uParam0->f_112.f_200[iParam2]->f_47.f_56[iVar0]), 0, "Stew_Fill", 1f);
								}
							}
						}
						iVar0++;
					}
					break;
			}
			break;
	}
}

void func_366(var uParam0, var uParam1, int iParam2)
{
	if (!does_entity_exist(&(uParam0->f_112.f_200[iParam2])))
	{
		return;
	}
	if (!func_646(uParam0, uParam1, iParam2))
	{
		return;
	}
	iVar0 = get_player_ped(player_id());
	if ((!is_entity_dead(iVar0) && !is_entity_dead(&(uParam0->f_112.f_200[iParam2]))) && _0xdfc2b226d56d85f6(&(uParam0->f_112.f_200[iParam2]), iVar0) > 0f)
	{
		func_582(*uParam1, 16);
	}
	else
	{
		func_358(*uParam1, 16);
	}
	iVar2 = func_308(*uParam1);
	iVar1 = iVar2 ^ uParam0->f_112.f_2;
	if (iVar1 == 0)
	{
		return;
	}
	if (func_309(iVar1, 2))
	{
		if (func_309(iVar2, 2))
		{
			func_312(uParam0, uParam1, iParam2);
		}
		else
		{
			func_313(uParam0, uParam1, iParam2);
		}
	}
	uParam0->f_112.f_2 = iVar2;
}

void func_367(var uParam0, var uParam1)
{
	if (func_354(uParam0, uParam1, 0) <= -1 || func_354(uParam0, uParam1, 0) >= 4)
	{
		return;
	}
	if (!does_entity_exist(&(uParam0->f_112.f_200[func_354(uParam0, uParam1, 0)])))
	{
		return;
	}
	if (!func_647(uParam0, uParam1))
	{
		func_358(*uParam1, 32);
		return;
	}
	bVar0 = func_648(*uParam1, uParam1->f_2);
	if (!func_649(uParam0, uParam1, func_354(uParam0, uParam1, 0), *uParam1, bVar0))
	{
		return;
	}
	func_414(&((uParam0->f_112.f_200[func_354(uParam0, uParam1, 0)])->f_124.f_25), 512);
}

void func_368(var uParam0, var uParam1, int iParam2)
{
	if (iParam2 != func_354(uParam0, uParam1, 0))
	{
		return;
	}
	if (!func_77())
	{
		return;
	}
	func_650(uParam0, uParam1);
	func_651(uParam0, uParam1);
	func_652(uParam0, uParam1);
}

void func_369(var uParam0, var uParam1, int iParam2)
{
	switch (uParam0->f_948.f_1[iParam2]->f_1)
	{
		case -1:
			func_653(uParam0, uParam1, iParam2);
			break;
		case 0:
			func_654(uParam0, uParam1, iParam2);
			break;
		case 1:
			func_655(uParam0, uParam1, iParam2);
			break;
		case 5:
			func_656(uParam0, uParam1, iParam2);
			break;
		default:
			break;
	}
}

void func_370(var uParam0, var uParam1)
{
	if (uParam0->f_1695 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_1695 - 1))
	{
		iVar1 = uParam0->f_1695.f_1[iVar0]->f_25;
		if (iVar1 == -1)
		{
		}
		else if (uParam0->f_948.f_1[iVar1]->f_1 != 5)
		{
		}
		else
		{
			bVar2 = true;
			while (bVar2)
			{
				bVar2 = false;
				switch (uParam0->f_1695.f_1[iVar0]->f_26)
				{
					case -1:
						func_657(uParam0, uParam1, iVar0);
						break;
					case 0:
						func_658(uParam0, uParam1, iVar0);
						break;
					case 1:
						func_659(uParam0, uParam1, iVar0, &bVar2);
						break;
					case 2:
						func_660(uParam0, uParam1, iVar0, &bVar2);
						break;
					case 3:
						func_661(uParam0, uParam1, iVar0, &bVar2);
						break;
					case 4:
						func_662(uParam0, uParam1, iVar0);
						break;
					case 5:
						func_663(uParam0, uParam1, iVar0, &bVar2);
						break;
					case 6:
						func_664(uParam0, uParam1, iVar0, &bVar2);
						break;
					case 7:
						func_665(uParam0, uParam1, iVar0, &bVar2);
						break;
					default:
						break;
				}
			}
		}
		iVar0++;
	}
}

void func_371(var uParam0, var uParam1, int iParam2)
{
	switch (uParam0->f_105.f_1[iParam2]->f_1)
	{
		case -1:
			func_666(uParam0, uParam1, iParam2);
			break;
		case 0:
			func_667(uParam0, uParam1, iParam2);
			break;
		case 1:
			func_668(uParam0, uParam1, iParam2);
			break;
		case 5:
			func_669(uParam0, uParam1, iParam2);
			break;
		default:
			break;
	}
}

void func_372(var uParam0, var uParam1, var uParam2)
{
}

bool func_373()
{
	return func_670() == 4;
}

bool func_374(int iParam0)
{
	if (_is_imap_active(iParam0))
	{
		return true;
	}
	if (func_373())
	{
		return false;
	}
	_request_imap(iParam0);
	return false;
}

void func_375(var uParam0, var uParam1)
{
	if (func_168(&(uParam0->f_67.f_27), 256))
	{
		return;
	}
	func_671(&(uParam0->f_67.f_2[1]));
	func_672(&(uParam0->f_67.f_2[1]), 17);
	func_251(&(uParam0->f_67.f_27), 256, func_170(*uParam1));
}

void func_376(var uParam0, var uParam1)
{
	if (!func_168(&(uParam0->f_67.f_27), 256))
	{
		return;
	}
	func_671(&(uParam0->f_67.f_2[1]));
	func_672(&(uParam0->f_67.f_2[1]), 129);
	func_171(&(uParam0->f_67.f_27), 256, func_170(*uParam1));
}

bool func_377(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_1607 - 1))
	{
		if (does_entity_exist(uParam0->f_1607.f_3[iVar0]->f_6))
		{
			_0xf49574e2332a8f06(uParam0->f_1607.f_3[iVar0]->f_6, uParam0->f_1607.f_3[iVar0]->f_4);
		}
		else
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_378(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_1607 - 1))
	{
		if (does_entity_exist(uParam0->f_1607.f_3[iVar0]->f_6))
		{
			_0xf49574e2332a8f06(uParam0->f_1607.f_3[iVar0]->f_6, 0f);
		}
		else
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_379(var uParam0, var uParam1)
{
	if (uParam0->f_1607.f_1)
	{
		return;
	}
	if (uParam0->f_1607 == 0)
	{
		uParam0->f_1607.f_1 = 1;
		return;
	}
	iVar14 = 0;
	while (iVar14 <= (uParam0->f_1607 - 1))
	{
		if (!does_entity_exist(uParam0->f_1607.f_3[iVar14]->f_6))
		{
			if (is_model_valid(&(uParam0->f_1607.f_3[iVar14])))
			{
				if (!func_178(uParam0->f_1607.f_3[iVar14]->f_1))
				{
					if (uParam0->f_1607.f_3[iVar14]->f_5 > 0f)
					{
						Var0.f_1 = &uParam0->f_1607.f_3[iVar14];
						Var0.f_2 = { uParam0->f_1607.f_3[iVar14]->f_1 };
						Var0.f_5 = uParam0->f_1607.f_3[iVar14]->f_5;
						Var0 = 0;
						if (func_673(&Var0, &(uParam0->f_1607.f_3[iVar14]->f_6)))
						{
						}
					}
					else
					{
						if (uParam0->f_1607.f_3[iVar14]->f_7 == 0)
						{
							uParam0->f_1607.f_3[iVar14]->f_7 = _0x6f3068258a499e52(&(uParam0->f_1607.f_3[iVar14]), uParam0->f_1607.f_3[iVar14]->f_1, 15);
						}
						if (_0x1ff441d7954f8709(uParam0->f_1607.f_3[iVar14]->f_7))
						{
							uParam0->f_1607.f_3[iVar14]->f_6 = get_object_index_from_entity_index(_0x4735e2a4bb83d9da(uParam0->f_1607.f_3[iVar14]->f_7));
						}
					}
					if (does_entity_exist(uParam0->f_1607.f_3[iVar14]->f_6))
					{
						set_entity_can_be_damaged(uParam0->f_1607.f_3[iVar14]->f_6, false);
						uParam0->f_1607.f_3[iVar14]->f_4 = _0xfa3b61ec249b4674(uParam0->f_1607.f_3[iVar14]->f_6);
						if (iVar14 == (uParam0->f_1607 - 1))
						{
							uParam0->f_1607.f_1 = 1;
						}
					}
					return;
				}
			}
		}
		iVar14++;
	}
}

void func_380(int iParam0, int iParam1)
{
	if ((iParam1 != 0 && does_entity_exist(iParam0)) && is_entity_an_object(iParam0))
	{
		if (is_bit_set(iParam1, 1))
		{
			set_entity_can_be_damaged(iParam0, false);
			set_entity_proofs(iParam0, 255, false);
		}
		if (is_bit_set(iParam1, 2))
		{
			freeze_entity_position(iParam0, true);
		}
		if (is_bit_set(iParam1, 3))
		{
			set_entity_collision(iParam0, false, false);
		}
		if (is_bit_set(iParam1, 4))
		{
			_0xc64e597783be9a1d(iParam0, true);
		}
	}
}

int func_381()
{
	return Global_1107216->f_750;
}

int func_382(int iParam0)
{
	return (*Global_1120070)[iParam0]->f_17;
}

bool func_383(var uParam0, var uParam1, vector3 vParam2, var uParam5)
{
	fVar0 = func_351(vParam2, func_353(uParam1->f_1));
	if (fVar0 < uParam0->f_10.f_2)
	{
		*uParam5 = 1;
		return true;
	}
	return false;
}

bool func_384(var uParam0, var uParam1, int iParam2)
{
	if (!func_674(uParam0, uParam1))
	{
		return false;
	}
	*iParam2 = 2;
	return true;
}

bool func_385(var uParam0, int iParam1)
{
	if (_0x1b89bc43b6e69107(894914127, *uParam0, 1, 0))
	{
		return false;
	}
	if (func_675(*uParam0))
	{
		return false;
	}
	func_190(*uParam0, 0);
	*iParam1 = 0;
	return true;
}

void func_386(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = int_to_playerindex(iVar0);
		if (!_network_is_player_index_valid(iVar1))
		{
		}
		else if (!network_is_player_active(iVar1))
		{
		}
		else
		{
			iVar2 = _0xf49f14462f0ae27c(iVar1);
			if (does_entity_exist(iVar2))
			{
				set_entity_visible_in_cutscene(iVar2, 0, 0, 256);
			}
			if (does_entity_exist(&(uParam0->f_1627.f_1[iVar0])))
			{
				set_entity_visible_in_cutscene(&(uParam0->f_1627.f_1[iVar0]), 0, 0, 256);
			}
			if (does_entity_exist(&(uParam0->f_1627.f_34[iVar0])))
			{
				set_entity_visible_in_cutscene(&(uParam0->f_1627.f_34[iVar0]), 0, 0, 256);
			}
		}
		iVar0++;
	}
}

void func_387(var uParam0)
{
	if (uParam0->f_1627 > 31)
	{
		uParam0->f_1627 = 0;
	}
	iVar2 = int_to_playerindex(uParam0->f_1627);
	if (!_network_is_player_index_valid(iVar2) || !network_is_player_active(iVar2))
	{
		uParam0->f_1627++;
		return;
	}
	iVar0 = get_player_ped(iVar2);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0))
	{
		return;
	}
	if (is_ped_on_mount(iVar0))
	{
		iVar3 = get_mount(iVar0);
		if (does_entity_exist(iVar3))
		{
			uParam0->f_1627.f_1[uParam0->f_1627] = iVar3;
		}
	}
	iVar1 = _0xb9050a97594c8832(iVar2);
	if (does_entity_exist(iVar1))
	{
		uParam0->f_1627.f_34[uParam0->f_1627] = iVar1;
	}
	uParam0->f_1627++;
}

bool func_388(var uParam0)
{
	iVar6 = &uParam0->f_67.f_2[13];
	if (!_does_volume_exist(iVar6))
	{
		return false;
	}
	iVar2 = player_id();
	vVar3 = { func_137(iVar1) };
	if ((network_is_player_in_mp_cutscene(iVar2) && _0xd9267375834c5eab(iVar2) == 32) && _0xf256a75210c5c0eb(iVar6, vVar3))
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		iVar1 = func_676(iVar0);
		if (!_network_is_player_index_valid(iVar1))
		{
		}
		else if (!network_is_player_active(iVar1))
		{
		}
		else if (iVar1 == iVar2)
		{
		}
		else
		{
			vVar3 = { func_137(iVar1) };
			if (!_0xf256a75210c5c0eb(iVar6, vVar3))
			{
			}
			else if (!network_is_player_in_mp_cutscene(iVar1))
			{
			}
			else if (_0xd9267375834c5eab(iVar1) != 32)
			{
			}
			else
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_389(var uParam0, var uParam1)
{
	if (!network_is_player_in_mp_cutscene(player_id()))
	{
		return;
	}
	if (_0x424b17a7dc5c90bc(player_id()))
	{
		func_677(uParam0, uParam1);
	}
	else
	{
		func_678(uParam0, uParam1);
	}
}

bool func_390()
{
	return Global_1130634->f_293;
}

int func_391(int iParam0)
{
	if (func_432(iParam0, 1) && !func_432(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

bool func_392(int iParam0, int iParam1, bool bParam2)
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

bool func_393(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

bool func_394(var uParam0)
{
	if (uParam0->f_112 <= 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_112 - 1))
	{
		if (uParam0->f_112.f_200[iVar0]->f_1 != 5)
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

int func_395(var uParam0, var uParam1)
{
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		if (uParam0->f_4034.f_98[iVar1]->f_4 == 0)
		{
		}
		else
		{
			iVar0 = 0;
			while (iVar0 <= 70)
			{
				iVar2 = func_679(iVar0, 1);
				if (iVar2 == 0)
				{
				}
				else if (func_454(iVar2))
				{
					if (func_680(iVar1, 1) == -839267265 || func_680(iVar1, 1) == -258540245)
					{
						func_205(uParam0->f_4034.f_121[iVar1], iVar0, 3);
					}
				}
				else
				{
					func_182(&bVar3, *uParam1, uParam0->f_4034.f_98[iVar1]->f_4, iVar2, -1, 0);
					if (bVar3)
					{
						func_205(uParam0->f_4034.f_121[iVar1], iVar0, 3);
					}
				}
				iVar0++;
			}
		}
		iVar1++;
	}
	return 1;
}

void func_396(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_397(var uParam0, var uParam1)
{
	func_681(uParam0, uParam1);
	func_682(uParam0, uParam1);
}

void func_398(var uParam0, var uParam1, int iParam2)
{
	if (func_449(&(uParam0->f_4034.f_212), iParam2, 1))
	{
	}
}

void func_399(var uParam0, var uParam1, int iParam2)
{
	if (func_449(&(uParam0->f_4034.f_134), func_683(iParam2, 1), 3))
	{
	}
}

void func_400(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_401(var uParam0)
{
	return (get_game_timer() - uParam0->f_4034.f_257) >= 30000;
}

bool func_402(var uParam0, var uParam1)
{
	if (!func_77())
	{
		return false;
	}
	iVar1 = player_id();
	if (!func_297(*uParam1, 2))
	{
		return false;
	}
	if (!func_413(uParam0, uParam1, &uVar0, 1))
	{
		return false;
	}
	if (func_684(uParam0, 0))
	{
		return false;
	}
	if (func_415(uParam0, 0))
	{
		return false;
	}
	if (!func_301(uParam0, 548543805))
	{
		return false;
	}
	iVar2 = func_354(uParam0, uParam1, 0);
	if (iVar2 == -1)
	{
		return false;
	}
	if (!does_entity_exist(&(uParam0->f_112.f_200[iVar2])))
	{
		return false;
	}
	if (!is_entity_visible(&(uParam0->f_112.f_200[iVar2])))
	{
		return false;
	}
	if (is_player_riding_train(iVar1))
	{
		return false;
	}
	if (func_538(iVar1, 1, 0, 1))
	{
		return false;
	}
	if (func_685(iVar1, uParam1->f_4))
	{
		return false;
	}
	if (func_686(uParam1->f_2))
	{
		return false;
	}
	if (func_687(uParam1->f_2))
	{
		if (func_688(uParam1) == 0)
		{
			return false;
		}
	}
	return true;
}

void func_403(var uParam0, var uParam1)
{
	iVar6 = func_689(uParam0, uParam1, 0);
	iVar7 = 0;
	Var9 = -1;
	Var9.f_1 = -1;
	if (iVar6 == 0)
	{
		return;
	}
	if (_0x424b17a7dc5c90bc(player_id()))
	{
		bVar2 = true;
		bVar3 = true;
	}
	if (func_690())
	{
		iVar7 = func_688(uParam1);
		if (iVar7 == 0)
		{
			return;
		}
		else if (iVar7 == -677223542)
		{
			Var9 = { func_259() };
			func_691(Var9, 1);
		}
	}
	else
	{
		iVar4 = func_92(uParam1->f_2);
		if (!bVar2)
		{
			return;
		}
		else if (!func_692(uParam1))
		{
			iVar7 = -1846747855;
		}
		else
		{
			bVar0 = is_ped_male(get_player_ped(player_id()));
			if (func_693(uParam1))
			{
				if (func_694(uParam0, -2019784557, iVar6) && func_695(iVar4))
				{
					iVar7 = -2019784557;
				}
				else
				{
					iVar8 = func_696(iVar4);
					if (iVar8 != -1)
					{
						iVar5 = func_697(iVar4);
						bVar1 = func_698(iVar8, 1);
					}
					iVar11 = get_random_int_in_range(0, 4);
					if (iVar8 == -1)
					{
						iVar7 = -42221481;
					}
					else
					{
						switch (iVar5)
						{
							case 2:
								if ((func_694(uParam0, 1592541219, iVar6) && bVar1) && iVar11 != 0)
								{
									iVar7 = 1592541219;
								}
								else if (func_694(uParam0, -1544642772, iVar6) && iVar11 != 0)
								{
									iVar7 = -1544642772;
								}
								else if (func_694(uParam0, -42221481, iVar6))
								{
									iVar7 = -42221481;
								}
								else
								{
									return;
								}
								break;
							case 0:
							case 1:
								if ((func_694(uParam0, 789311248, iVar6) && bVar1) && iVar11 != 0)
								{
									iVar7 = 789311248;
								}
								else if ((func_694(uParam0, -2024821830, iVar6) && bVar0) && iVar11 != 0)
								{
									iVar7 = -2024821830;
								}
								else if (func_694(uParam0, -1195183252, iVar6) && iVar11 != 0)
								{
									iVar7 = -1195183252;
								}
								else if (func_694(uParam0, -42221481, iVar6))
								{
									iVar7 = -42221481;
								}
								else
								{
									return;
								}
								break;
							default:
								return;
						}
					}
				}
			}
			else if (bVar0 && func_694(uParam0, -698967718, iVar6))
			{
				iVar7 = -698967718;
			}
			else if (!bVar0 && func_694(uParam0, -1988953436, iVar6))
			{
				iVar7 = -1988953436;
			}
			else if (func_694(uParam0, -152401881, iVar6))
			{
				iVar7 = -152401881;
			}
			else if (func_92(uParam1->f_2) == -1239926065)
			{
				iVar7 = -42221481;
			}
			else
			{
				return;
			}
		}
	}
	if (bVar3)
	{
		func_700(uParam1->f_1, uParam1->f_2, iVar7, iVar6, func_699(), 0);
	}
	func_701(uParam0, uParam1, 0);
	func_702(uParam0, 0, iVar7);
	func_703(uParam0, 0, iVar6);
	func_704(uParam0);
}

bool func_404(var uParam0, var uParam1)
{
	if (!func_77())
	{
		return false;
	}
	if (uParam0->f_112.f_835 != 0 && uParam0->f_112.f_835 != 1)
	{
		return false;
	}
	if (!func_413(uParam0, uParam1, &uVar0, 0))
	{
		return false;
	}
	if (func_415(uParam0, 3))
	{
		return false;
	}
	iVar1 = func_705(uParam0);
	if (iVar1 == 0)
	{
		return false;
	}
	if (func_706(uParam0, 0))
	{
		if (!func_707(uParam0, uParam1))
		{
			switch (iVar1)
			{
				case -2012327723:
					if (func_393(&(uParam0->f_4034.f_114), 16))
					{
						return false;
					}
					if (func_393(&(uParam0->f_4034.f_114), 32))
					{
						return false;
					}
					break;
				case -839267265:
				case -258540245:
					if (func_393(&(uParam0->f_4034.f_114), 32))
					{
						return false;
					}
					if (!func_708(uParam0))
					{
						return false;
					}
					break;
			}
		}
	}
	if (func_706(uParam0, 3))
	{
		if (!func_709(uParam0))
		{
			return false;
		}
	}
	if (func_706(uParam0, 3))
	{
		return false;
	}
	return true;
}

void func_405(var uParam0, var uParam1)
{
	iVar14 = player_id();
	iVar15 = func_705(uParam0);
	iVar16 = 0;
	if (iVar15 == 0)
	{
		return;
	}
	if (_0x424b17a7dc5c90bc(iVar14))
	{
		bVar2 = true;
		bVar1 = true;
	}
	if (func_690())
	{
		if (func_710(uParam1->f_1))
		{
			if (func_694(uParam0, 332278015, iVar15))
			{
				iVar16 = 332278015;
			}
			else
			{
				return;
			}
		}
		else if (func_694(uParam0, -491132110, iVar15))
		{
			iVar16 = -491132110;
		}
		else
		{
			return;
		}
	}
	else if (bVar2)
	{
		bVar0 = is_ped_male(get_player_ped(player_id()));
		Var5 = { func_619(iVar14) };
		_0x4ef23e04a0c8ff51(&Var5, &iVar12);
		if (func_538(iVar14, 1, 0, 1))
		{
			if (func_694(uParam0, -529289190, iVar15) && !bVar0)
			{
				iVar16 = 1168662106;
			}
			else if (func_694(uParam0, 1168662106, iVar15) && bVar0)
			{
				iVar16 = 1168662106;
			}
			else if (func_694(uParam0, -2123406294, iVar15))
			{
				iVar16 = -2123406294;
			}
			else
			{
				return;
			}
		}
		else if ((func_620(uParam1->f_4) && iVar12 > 0) || (!func_620(uParam1->f_4) && iVar12 >= Global_1901947->f_166.f_2))
		{
			if (func_694(uParam0, 1353878014, iVar15))
			{
				iVar16 = 1353878014;
			}
			else
			{
				return;
			}
		}
		else if (func_711(uParam1->f_2))
		{
			switch (func_712(uParam1->f_2))
			{
				case 0:
					return;
				case 1:
				case 2:
					if (func_694(uParam0, 1588951682, iVar15))
					{
						iVar16 = 1588951682;
					}
					else
					{
						return;
					}
					break;
				case 3:
				case 4:
					if (func_694(uParam0, -1866304465, iVar15))
					{
						iVar16 = -1866304465;
					}
					else
					{
						return;
					}
					break;
				default:
					return;
			}
		}
		else if (func_713(*uParam1))
		{
			iVar16 = 1530925036;
		}
		else if (func_255(uParam1->f_2))
		{
			iVar4 = func_714(func_92(uParam1->f_2));
			if (iVar4 > 1)
			{
				if (func_694(uParam0, -177981000, iVar15))
				{
					iVar16 = -177981000;
				}
				else
				{
					return;
				}
			}
			else
			{
				if (bVar0)
				{
					if (func_694(uParam0, 665124141, iVar15))
					{
						bVar3 = true;
					}
				}
				else if (func_694(uParam0, -1738318168, iVar15))
				{
					bVar3 = true;
				}
				if (bVar3)
				{
					if (!func_715())
					{
						if (bVar0)
						{
							iVar16 = 665124141;
						}
						else
						{
							iVar16 = -1738318168;
						}
					}
				}
				if (iVar16 == 0)
				{
					if (func_694(uParam0, 1784766834, iVar15))
					{
						iVar16 = 1784766834;
					}
					else
					{
						return;
					}
				}
			}
		}
		else if (func_694(uParam0, -358693017, iVar15) && !bVar0)
		{
			iVar16 = -358693017;
		}
		else if (func_694(uParam0, 1910527460, iVar15) && bVar0)
		{
			iVar16 = 1910527460;
		}
		else if (func_694(uParam0, -1920806061, iVar15))
		{
			iVar16 = -1920806061;
		}
		else
		{
			iVar16 = 1784766834;
		}
	}
	else
	{
		iVar16 = 700653760;
	}
	if (bVar1)
	{
		func_700(uParam1->f_1, uParam1->f_2, iVar16, iVar15, func_699(), 0);
	}
	func_701(uParam0, uParam1, 3);
	func_702(uParam0, 3, iVar16);
	func_703(uParam0, 3, iVar15);
	func_716(uParam0);
}

bool func_406(var uParam0, var uParam1)
{
	if (!func_297(*uParam1, 2))
	{
		return false;
	}
	if (!func_301(uParam0, 548543805))
	{
		return false;
	}
	if (func_415(uParam0, 2))
	{
		return false;
	}
	if (func_684(uParam0, 2))
	{
		if (!func_717(uParam0))
		{
			return false;
		}
	}
	if (!func_413(uParam0, uParam1, &uVar0, 0))
	{
		return false;
	}
	if (func_690())
	{
		if (func_718(uParam0, 304038664))
		{
			return false;
		}
		else
		{
			if (func_710(uParam1->f_1))
			{
				return false;
			}
			if (!func_393(&(uParam0->f_4034.f_114), 2))
			{
				return false;
			}
			if (func_688(uParam1) != 0)
			{
				return false;
			}
			if (func_718(uParam0, -677223542) || func_718(uParam0, 686270000))
			{
				if (!func_719(uParam0))
				{
					return false;
				}
			}
			if (func_718(uParam0, -753195767))
			{
				if (!func_720(uParam0))
				{
					return false;
				}
			}
		}
	}
	else
	{
		if (func_538(player_id(), 1, 0, 1))
		{
			return false;
		}
		if (func_685(player_id(), uParam1->f_4))
		{
			return false;
		}
		if (func_687(uParam1->f_2))
		{
			return false;
		}
		if (func_721(uParam0, uParam1))
		{
			if (func_722(uParam0, -499913814))
			{
				if (func_706(uParam0, 3))
				{
					if (!func_723(uParam0))
					{
						return false;
					}
					if (func_718(uParam0, -499913814))
					{
						if (!func_724(uParam0))
						{
							return false;
						}
					}
				}
				else
				{
					return false;
				}
			}
			else
			{
				return false;
			}
		}
		else if (func_722(uParam0, -591513218))
		{
			if (uParam0->f_112.f_835 != 0 && uParam0->f_112.f_835 != 5)
			{
				return false;
			}
			if (func_706(uParam0, 0))
			{
				if (!func_725(uParam0))
				{
					return false;
				}
				if (func_718(uParam0, -591513218))
				{
					if (!func_726(uParam0))
					{
						return false;
					}
				}
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	if (func_686(uParam1->f_2))
	{
		return false;
	}
	if (func_727(uParam0))
	{
		return false;
	}
	return true;
}

void func_407(var uParam0, var uParam1)
{
	iVar0 = func_689(uParam0, uParam1, 2);
	iVar1 = 0;
	if (iVar0 == 0)
	{
		return;
	}
	if (func_690())
	{
		if (func_710(uParam1->f_1))
		{
			return;
		}
		else if (func_694(uParam0, -753195767, iVar0))
		{
			iVar1 = -753195767;
		}
		else
		{
			return;
		}
	}
	else if (func_721(uParam0, uParam1))
	{
		if (func_694(uParam0, -499913814, iVar0))
		{
			iVar1 = -499913814;
		}
		else
		{
			return;
		}
	}
	else if (func_694(uParam0, -591513218, iVar0))
	{
		iVar1 = -591513218;
	}
	else
	{
		return;
	}
	func_701(uParam0, uParam1, 2);
	func_702(uParam0, 2, iVar1);
	func_703(uParam0, 2, iVar0);
}

bool func_408(var uParam0, var uParam1)
{
	if (!_0x424b17a7dc5c90bc(player_id()))
	{
		return false;
	}
	if (func_415(uParam0, 1))
	{
		return false;
	}
	if (func_684(uParam0, 1))
	{
		return false;
	}
	if ((!func_684(uParam0, 3) && !func_718(uParam0, -591513218)) && !func_718(uParam0, 2002222928))
	{
		return false;
	}
	if (func_727(uParam0))
	{
		return false;
	}
	if (!func_301(uParam0, 1921928004))
	{
		return false;
	}
	if (func_301(uParam0, -1708806587))
	{
		return false;
	}
	if (func_711(uParam1->f_2))
	{
		return false;
	}
	if (!func_413(uParam0, uParam1, &uVar0, 0))
	{
		return false;
	}
	return true;
}

void func_409(var uParam0, var uParam1)
{
	iVar0 = func_689(uParam0, uParam1, 1);
	iVar1 = 429804345;
	if (!func_694(uParam0, iVar1, iVar0))
	{
		return;
	}
	func_700(uParam1->f_1, uParam1->f_2, iVar1, iVar0, func_699(), 0);
	func_701(uParam0, uParam1, 1);
	func_702(uParam0, 1, iVar1);
	func_703(uParam0, 1, iVar0);
}

bool func_410(var uParam0, var uParam1)
{
	if (func_728(uParam0) == -1)
	{
		return false;
	}
	if (func_727(uParam0))
	{
		return false;
	}
	if (!func_729(uParam0) && (!func_301(uParam0, 1921928004) || func_301(uParam0, -1708806587)))
	{
		return false;
	}
	if (!func_413(uParam0, uParam1, &uVar0, 0))
	{
		return false;
	}
	return true;
}

void func_411(var uParam0, var uParam1)
{
	iVar0 = func_689(uParam0, uParam1, 9);
	iVar1 = -206865066;
	func_700(uParam1->f_1, uParam1->f_2, iVar1, iVar0, func_200(*uParam1, func_728(uParam0)), 0);
	func_701(uParam0, uParam1, 9);
	func_702(uParam0, 9, iVar1);
	func_703(uParam0, 9, iVar0);
}

void func_412(var uParam0, var uParam1)
{
	if (func_163() != func_93(uParam1->f_1))
	{
		return;
	}
	if (uParam0->f_4034.f_115.f_3 == 0)
	{
		return;
	}
	if (func_730(uParam0->f_4034.f_115.f_3) == 8)
	{
		return;
	}
	if (!uParam0->f_4034.f_120)
	{
		if (func_539() == 3)
		{
			func_164(4);
		}
		return;
	}
	if (!network_is_session_active() || !network_is_game_in_progress())
	{
		return;
	}
	switch (func_731())
	{
		case 0:
		case 4:
			break;
		default:
			return;
	}
	switch (func_539())
	{
		case 3:
			func_164(4);
			break;
		default:
			iVar0 = func_237(uParam1->f_2);
			if ((iVar0 == -800238780 || iVar0 == 1015970717) && func_355() == -1)
			{
				func_164(4);
			}
			else
			{
				func_164(2);
			}
			break;
	}
	func_348(2);
	func_358(*uParam1, 2);
	uParam0->f_4034.f_120 = 0;
}

bool func_413(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (uParam0->f_4034.f_115.f_3 != 0)
	{
		*uParam2 = 1;
		return false;
	}
	if (func_732(0))
	{
		*uParam2 = 2;
		return false;
	}
	if (func_354(uParam0, uParam1, 0) == -1)
	{
		*uParam2 = 3;
		return false;
	}
	if (!does_entity_exist(&(uParam0->f_112.f_200[func_354(uParam0, uParam1, 0)])))
	{
		*uParam2 = 4;
		return false;
	}
	if (!is_entity_visible(&(uParam0->f_112.f_200[func_354(uParam0, uParam1, 0)])))
	{
		*uParam2 = 5;
		return false;
	}
	if (bParam3)
	{
		if (is_entity_occluded(&(uParam0->f_112.f_200[func_354(uParam0, uParam1, 0)])))
		{
			*uParam2 = 6;
			return false;
		}
	}
	*uParam2 = 0;
	return true;
}

void func_414(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_415(var uParam0, int iParam1)
{
	return func_204(&(uParam0->f_4034.f_210), iParam1, 1);
}

bool func_416(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915715->f_20638;
	}
	return (Global_1915715->f_20638 || Global_1915715->f_22504.f_1);
}

void func_417(var uParam0, var uParam1)
{
	if (func_733() & 2 != 0 && func_432(player_id(), 16))
	{
		do_screen_fade_out(2000);
	}
	func_414(&((uParam0->f_112.f_200[func_354(uParam0, uParam1, 0)])->f_124.f_25), 1024);
	if (func_30(&(uParam0->f_8), 64))
	{
		_0xc67a4910425f11f1(player_id(), 0);
		func_183(&(uParam0->f_8), 64, func_93(*uParam1));
	}
	uParam0->f_4034.f_120 = 1;
	func_358(*uParam1, 2);
}

bool func_418(var uParam0, var uParam1)
{
	iVar10 = func_438(*uParam1, func_734(uParam0));
	if (!is_scripted_conversation_loaded(func_459(func_458(uParam0))))
	{
		return false;
	}
	if (!func_736(uParam0, uParam1, func_734(uParam0), func_735(uParam0, 8), &vVar0, iVar10))
	{
		func_429(uParam0, 8);
		func_430(uParam0, uParam1, 8);
		func_737(uParam0, func_699());
		return false;
	}
	if (!are_strings_equal(func_459(func_458(uParam0)), func_459(vVar0)))
	{
		func_738(uParam0, uParam1, vVar0.f_3, vVar0.f_4, vVar0, iVar10);
		return false;
	}
	if (!is_scripted_conversation_loaded(func_459(func_458(uParam0))))
	{
		return false;
	}
	func_182(&bVar5, *uParam1, (uParam0->f_4034.f_98[func_478(func_735(uParam0, 8), 1)])->f_4, -206865066, iVar10, 1);
	iVar14 = func_303(*uParam1);
	switch (iVar14)
	{
		case 303108068:
			iVar11 = 1;
			break;
		case -910931556:
			iVar11 = 2;
			break;
		default:
			break;
	}
	iVar13 = func_739(*uParam1, iVar10, iVar14);
	if ((uParam1->f_4 == -800238780 || uParam1->f_4 == 1015970717) && iVar13 != 3)
	{
	}
	else
	{
		if (!_does_anim_scene_exist(uParam0->f_1730.f_1[iVar11]->f_1))
		{
			return false;
		}
		if (!_is_anim_scene_started(uParam0->f_1730.f_1[iVar11]->f_1, false))
		{
			return false;
		}
		iVar12 = func_740(iVar13);
		if (iVar12 == -1)
		{
			func_429(uParam0, 8);
			func_430(uParam0, uParam1, 8);
			func_737(uParam0, func_699());
			return false;
		}
		iVar15 = &uParam0->f_1730.f_1.f_19[iVar11]->f_734[iVar12];
		if (iVar15 == -1)
		{
			func_429(uParam0, 8);
			func_430(uParam0, uParam1, 8);
			func_737(uParam0, func_699());
			return false;
		}
		if (!_0x1f0e401031e20146(uParam0->f_1730.f_1[iVar11]->f_1, &(uParam0->f_1730.f_1.f_19[iVar11]->f_632[iVar15]->f_1)))
		{
			if (!_0x23e33cb9f4a3f547(uParam0->f_1730.f_1[iVar11]->f_1, &(uParam0->f_1730.f_1.f_19[iVar11]->f_632[iVar15]->f_1)))
			{
				if (_0x0df57f86fe71dbe5(uParam0->f_1730.f_1[iVar11]->f_1, &(uParam0->f_1730.f_1.f_19[iVar11]->f_632[iVar15]->f_1)))
				{
					return false;
				}
				else
				{
					return false;
				}
			}
		}
	}
	iVar6 = player_id();
	iVar8 = _0x901e0dc25080c8b9(iVar6);
	iVar7 = _0x4be6c13a45cca8ec(iVar8);
	iVar9 = get_player_ped(iVar7);
	func_741(uParam0, uParam1, bVar5, iVar10, iVar9, vVar0);
	func_742(uParam0, &vVar0);
	func_743(uParam0, uParam1, &vVar0, 1);
	return true;
}

bool func_419(var uParam0, var uParam1)
{
	func_744(uParam0, 9, &vVar1);
	if (!func_745(uParam0, &vVar1, &iVar6))
	{
		func_429(uParam0, 9);
		func_430(uParam0, uParam1, 9);
		return false;
	}
	if (!func_746(&vVar1))
	{
		func_429(uParam0, 9);
		func_430(uParam0, uParam1, 9);
		return false;
	}
	vVar1 = { func_182(&bVar0, *uParam1, uParam0->f_4034.f_98[iVar6]->f_4, vVar1.f_3, func_728(uParam0), 1) };
	if (!bVar0)
	{
		func_429(uParam0, 9);
		func_430(uParam0, uParam1, 9);
		return false;
	}
	_0xef51242e35242b47(&vVar1);
	func_747(uParam0, uParam1);
	func_742(uParam0, &vVar1);
	func_743(uParam0, uParam1, &vVar1, 0);
	func_748(uParam0, -1);
	return true;
}

bool func_420(var uParam0, var uParam1)
{
	func_744(uParam0, 7, &Var0);
	if (!func_745(uParam0, &Var0, &uVar5))
	{
		func_429(uParam0, 7);
		func_430(uParam0, uParam1, 7);
		return false;
	}
	if (!func_746(&Var0))
	{
		func_429(uParam0, 7);
		func_430(uParam0, uParam1, 7);
		return false;
	}
	func_747(uParam0, uParam1);
	switch (Var0.f_3)
	{
		case 2093717520:
			return func_749(uParam0, uParam1, &Var0);
		case 2002222928:
			return func_750(uParam0, uParam1, &Var0);
		default:
			break;
	}
	return false;
}

void func_421(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_422(var uParam0, var uParam1)
{
	func_744(uParam0, 4, &vVar1);
	if (!func_745(uParam0, &vVar1, &iVar6))
	{
		func_429(uParam0, 4);
		func_430(uParam0, uParam1, 4);
		return false;
	}
	if (!func_746(&vVar1))
	{
		func_429(uParam0, 4);
		func_430(uParam0, uParam1, 4);
		return false;
	}
	vVar1 = { func_182(&bVar0, *uParam1, uParam0->f_4034.f_98[iVar6]->f_4, vVar1.f_3, -1, 1) };
	if (!bVar0)
	{
		func_429(uParam0, 4);
		func_430(uParam0, uParam1, 4);
		return false;
	}
	func_747(uParam0, uParam1);
	func_742(uParam0, &vVar1);
	func_743(uParam0, uParam1, &vVar1, 0);
	return true;
}

bool func_423(var uParam0, var uParam1)
{
	func_744(uParam0, 6, &vVar1);
	if (!func_745(uParam0, &vVar1, &iVar6))
	{
		func_429(uParam0, 6);
		func_430(uParam0, uParam1, 6);
		return false;
	}
	if (!func_746(&vVar1))
	{
		func_429(uParam0, 6);
		func_430(uParam0, uParam1, 6);
		return false;
	}
	vVar1 = { func_182(&bVar0, *uParam1, uParam0->f_4034.f_98[iVar6]->f_4, vVar1.f_3, -1, 1) };
	if (!bVar0)
	{
		func_429(uParam0, 6);
		func_430(uParam0, uParam1, 6);
		return false;
	}
	func_747(uParam0, uParam1);
	func_742(uParam0, &vVar1);
	func_743(uParam0, uParam1, &vVar1, 0);
	return true;
}

bool func_424(var uParam0, var uParam1)
{
	func_744(uParam0, 5, &vVar1);
	if (!func_745(uParam0, &vVar1, &iVar6))
	{
		func_429(uParam0, 5);
		func_430(uParam0, uParam1, 5);
		return false;
	}
	if (!func_746(&vVar1))
	{
		func_429(uParam0, 5);
		func_430(uParam0, uParam1, 5);
		return false;
	}
	vVar1 = { func_182(&bVar0, *uParam1, uParam0->f_4034.f_98[iVar6]->f_4, vVar1.f_3, -1, 1) };
	if (!bVar0)
	{
		func_429(uParam0, 5);
		func_430(uParam0, uParam1, 5);
		return false;
	}
	func_747(uParam0, uParam1);
	func_742(uParam0, &vVar1);
	func_743(uParam0, uParam1, &vVar1, 0);
	return true;
}

bool func_425(var uParam0, var uParam1)
{
	func_744(uParam0, 3, &vVar2);
	if (!func_745(uParam0, &vVar2, &iVar1))
	{
		func_429(uParam0, 3);
		func_430(uParam0, uParam1, 3);
		return false;
	}
	if (!func_746(&vVar2))
	{
		func_429(uParam0, 3);
		func_430(uParam0, uParam1, 3);
		return false;
	}
	vVar2 = { func_182(&bVar0, *uParam1, uParam0->f_4034.f_98[iVar1]->f_4, vVar2.f_3, -1, 1) };
	if (!bVar0)
	{
		func_429(uParam0, 3);
		func_430(uParam0, uParam1, 3);
		return false;
	}
	func_747(uParam0, uParam1);
	func_742(uParam0, &vVar2);
	func_743(uParam0, uParam1, &vVar2, 0);
	return true;
}

bool func_426(var uParam0, var uParam1)
{
	func_744(uParam0, 0, &vVar1);
	if (!func_745(uParam0, &vVar1, &iVar6))
	{
		func_429(uParam0, 0);
		func_430(uParam0, uParam1, 0);
		return false;
	}
	if (!func_746(&vVar1))
	{
		func_429(uParam0, 0);
		func_430(uParam0, uParam1, 0);
		return false;
	}
	vVar1 = { func_182(&bVar0, *uParam1, uParam0->f_4034.f_98[iVar6]->f_4, vVar1.f_3, -1, 1) };
	if (!bVar0)
	{
		func_429(uParam0, 0);
		func_430(uParam0, uParam1, 0);
		return false;
	}
	func_747(uParam0, uParam1);
	func_742(uParam0, &vVar1);
	func_743(uParam0, uParam1, &vVar1, 0);
	return true;
}

bool func_427(var uParam0, var uParam1)
{
	func_744(uParam0, 1, &vVar1);
	if (!func_745(uParam0, &vVar1, &iVar6))
	{
		func_429(uParam0, 1);
		func_430(uParam0, uParam1, 1);
		return false;
	}
	if (!func_746(&vVar1))
	{
		func_429(uParam0, 1);
		func_430(uParam0, uParam1, 1);
		return false;
	}
	vVar1 = { func_182(&bVar0, *uParam1, uParam0->f_4034.f_98[iVar6]->f_4, vVar1.f_3, -1, 1) };
	if (!bVar0)
	{
		func_429(uParam0, 1);
		func_430(uParam0, uParam1, 1);
		return false;
	}
	func_747(uParam0, uParam1);
	func_742(uParam0, &vVar1);
	func_743(uParam0, uParam1, &vVar1, 0);
	return true;
}

bool func_428(var uParam0, var uParam1)
{
	func_744(uParam0, 2, &Var2);
	if (!func_745(uParam0, &Var2, &iVar7))
	{
		func_429(uParam0, 2);
		func_430(uParam0, uParam1, 2);
		return false;
	}
	if (!func_746(&Var2))
	{
		func_429(uParam0, 2);
		func_430(uParam0, uParam1, 2);
		return false;
	}
	if (func_77())
	{
		bVar1 = false;
	}
	else if (Var2.f_3 == -753195767)
	{
		bVar1 = true;
	}
	else
	{
		bVar1 = false;
	}
	if (bVar1)
	{
		StringCopy(&Var2, "MPI_POST_IDLE", 24);
		bVar0 = true;
	}
	else
	{
		Var2 = { func_182(&bVar0, *uParam1, uParam0->f_4034.f_98[iVar7]->f_4, Var2.f_3, -1, 1) };
	}
	if (!bVar0)
	{
		func_429(uParam0, 2);
		func_430(uParam0, uParam1, 2);
		return false;
	}
	switch (Var2.f_3)
	{
		case -448995989:
		case 1545958071:
			func_398(uParam0, uParam1, 8);
			func_398(uParam0, uParam1, 9);
			func_398(uParam0, uParam1, 7);
			func_399(uParam0, uParam1, 304038664);
			break;
	}
	func_747(uParam0, uParam1);
	func_742(uParam0, &Var2);
	func_743(uParam0, uParam1, &Var2, 0);
	return true;
}

void func_429(var uParam0, int iParam1)
{
	func_702(uParam0, iParam1, 0);
	func_703(uParam0, iParam1, 0);
}

void func_430(var uParam0, var uParam1, int iParam2)
{
	if (func_449(&(uParam0->f_4034.f_210), iParam2, 1))
	{
	}
}

void func_431(var uParam0, var uParam1)
{
	if (func_751(&(uParam0->f_4034.f_115)))
	{
		func_752(*uParam1, 1);
		iVar0 = func_354(uParam0, uParam1, 0);
		if (iVar0 != -1)
		{
			switch (func_92(uParam1->f_2))
			{
				case -701311458:
					set_ped_can_play_gesture_anims(&(uParam0->f_112.f_200[iVar0]), 0, 1);
					break;
			}
		}
		if (&uParam0->f_1730.f_1[0] >= 6 && &uParam0->f_1730.f_1[0] <= 7)
		{
			stop_scripted_conversation(&(uParam0->f_4034.f_115), false, false);
		}
		switch (func_730(uParam0->f_4034.f_115.f_3))
		{
			case 8:
				func_753(uParam0, uParam1);
				break;
		}
		return;
	}
	func_752(*uParam1, 0);
	switch (func_730(uParam0->f_4034.f_115.f_3))
	{
		case 8:
			func_417(uParam0, uParam1);
			func_754(uParam0);
			func_755(uParam0);
			func_400(&(uParam0->f_4034.f_114), 2, func_93(uParam1->f_1));
			func_396(&(uParam0->f_4034.f_114), 4, func_93(uParam1->f_1));
			if (uParam1->f_4 == -800238780 || uParam1->f_4 == 1015970717)
			{
				func_756(func_92(uParam1->f_2), 1);
				func_757(uParam1->f_2);
				func_758(4);
				func_759(uParam1->f_2);
			}
			break;
		case 3:
			func_760(uParam0);
			switch (uParam0->f_4034.f_115.f_4)
			{
				case -2012327723:
					func_396(&(uParam0->f_4034.f_114), 16, func_93(uParam1->f_1));
					break;
				case -839267265:
				case -258540245:
					func_396(&(uParam0->f_4034.f_114), 32, func_93(uParam1->f_1));
					break;
				default:
					break;
			}
			switch (uParam0->f_4034.f_115.f_3)
			{
				case -1920806061:
				case -358693017:
				case 1910527460:
					_unlock_set_new(func_92(uParam1->f_2), false);
					func_756(func_92(uParam1->f_2), 1);
					func_757(uParam1->f_2);
					func_758(4);
					func_759(uParam1->f_2);
					func_759(uParam1->f_2);
					break;
			}
			break;
		case 5:
		case 6:
			func_761(uParam0);
			break;
		case 9:
			func_754(uParam0);
			break;
		case 0:
			func_762(uParam0);
			switch (uParam0->f_4034.f_115.f_3)
			{
				case -677223542:
				case 686270000:
					func_763(uParam0);
					break;
			}
			break;
		case 2:
			func_764(uParam0);
			switch (uParam0->f_4034.f_115.f_3)
			{
				case -499913814:
					func_716(uParam0);
					break;
				case -591513218:
					func_704(uParam0);
					break;
				case -753195767:
					func_754(uParam0);
					break;
				default:
					break;
			}
			break;
		case 7:
			switch (uParam0->f_4034.f_115.f_3)
			{
				case 2002222928:
					func_765(uParam0, 1);
					break;
				case 2093717520:
					func_766(uParam0);
					break;
			}
			break;
	}
	uParam0->f_4034.f_115.f_3 = 0;
	StringCopy(&(uParam0->f_4034.f_115), "", 24);
	uParam0->f_4034.f_115.f_4 = 0;
}

bool func_432(int iParam0, int iParam1)
{
	return ((*Global_1128574)[iParam0]->f_34 && iParam1) != 0;
}

int func_433()
{
	return Global_1109804->f_21.f_12.f_20;
}

bool func_434(int iParam0)
{
	return func_767(1, iParam0);
}

int func_435(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_436(int iParam0)
{
	Global_1130592->f_24.f_3 = (Global_1130592->f_24.f_3 || iParam0);
}

struct<2> func_437()
{
	return Global_1109804->f_21.f_12.f_23;
}

int func_438(int iParam0, struct<2> Param1)
{
	if (!func_23(Param1))
	{
		return -1;
	}
	if (iParam0 < 0 || iParam0 >= 4)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 61)
	{
		if (func_101(Param1, func_200(iParam0, iVar0)))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

var func_439(int iParam0, int iParam1)
{
	return &((*Global_1120070)[iParam0]->f_24.f_2[iParam1]->f_4[5]);
}

struct<8> func_440(char* sParam0)
{
	StringCopy(&cVar0, sParam0, 64);
	return cVar0;
}

void func_441(struct<8> Param0, struct<8> Param8, struct<8> Param16, int iParam24)
{
	Global_1109804->f_21.f_82 = 1;
	Global_1109804->f_21.f_82.f_1 = { Param0 };
	Global_1109804->f_21.f_82.f_9 = { Param8 };
	Global_1109804->f_21.f_82.f_17 = { Param16 };
	Global_1109804->f_21.f_82.f_25 = iParam24;
	Global_1109804->f_21.f_82.f_26 = 0;
}

void func_442(var uParam0)
{
	if (!uParam0->f_24)
	{
		return;
	}
	_databinding_write_data_hash_string(uParam0->f_4, 0);
	_databinding_write_data_int(uParam0->f_5, 0);
	_databinding_write_data_hash_string(uParam0->f_7, 0);
	_databinding_write_data_int(uParam0->f_8, 0);
	_databinding_write_data_hash_string(uParam0->f_10, 0);
	_databinding_write_data_int(uParam0->f_11, 0);
	_databinding_write_data_hash_string(uParam0->f_13, 0);
	_databinding_write_data_int(uParam0->f_14, 3);
	_databinding_write_data_hash_string(uParam0->f_16, 0);
	_databinding_write_data_int(uParam0->f_17, 3);
	_databinding_write_data_hash_string(uParam0->f_19, 0);
	_databinding_write_data_int(uParam0->f_20, 3);
	_databinding_write_data_hash_string(uParam0->f_22, 0);
	_databinding_write_data_int(uParam0->f_23, 3);
}

void func_443(var uParam0)
{
	if (!uParam0->f_13)
	{
		return;
	}
	_databinding_write_data_hash_string(uParam0->f_5, 0);
	_databinding_write_data_int(uParam0->f_6, 0);
	_databinding_write_data_hash_string(uParam0->f_8, 0);
	_databinding_write_data_int(uParam0->f_9, 3);
	_databinding_write_data_hash_string(uParam0->f_11, 0);
	_databinding_write_data_int(uParam0->f_12, 3);
}

int func_444(int iParam0)
{
	return func_768(iParam0);
}

var func_445(int iParam0, int iParam1)
{
	return func_769(iParam0, iParam1);
}

int func_446(int iParam0)
{
	return (*Global_1120070)[iParam0]->f_14;
}

int func_447(var uParam0, var uParam1)
{
	if (!func_770(uParam1))
	{
		return 1;
	}
	if (uParam0->f_111 != 2)
	{
		return 1;
	}
	return 0;
}

int func_448(int iParam0, int iParam1)
{
	return Global_1120070->f_8478[iParam0][iParam1];
}

bool func_449(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

void func_450(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	func_771(sParam1, bParam5);
	func_772(sParam1);
	func_773(sParam1, uParam2);
	func_635(uParam0);
	uParam0->f_2 = 0;
	sParam1->f_69 = 0;
	func_247(uParam0, 1, iParam3, iParam4);
}

int func_451(int iParam0, bool bParam1)
{
	iVar0 = func_774();
	if (bParam1 && is_entity_dead(iVar0))
	{
		return -1;
	}
	return &Global_1956130;
}

void func_452(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = func_774();
	if (!is_entity_dead(iVar0))
	{
		iVar1 = 0;
		iVar2 = iParam0;
		if (iParam0 == -1)
		{
			iVar2 = func_451(iParam1, bParam2);
			if (iVar2 != -1)
			{
				iVar1 = (*Global_1956131)[iVar2]->f_2;
				if (func_552(iVar2, 512, 1))
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
		Global_1956130 = -1;
	}
}

void func_453(int iParam0, int iParam1)
{
	Global_1109804->f_260.f_4368[iParam0] = (&Global_1109804->f_260.f_4368[iParam0] - (Global_1109804->f_260.f_4368[iParam0] && iParam1));
}

bool func_454(int iParam0)
{
	iVar0 = func_730(iParam0);
	if (((iVar0 == 8 && iParam0 != 1193262427) || (iVar0 == 7 && iParam0 == 2002222928)) || (iVar0 == 9 && iParam0 == -206865066))
	{
		return true;
	}
	return false;
}

Vector3 func_455(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	iVar0 = func_775(iParam0);
	if (!func_11(iVar0))
	{
		*bParam4 = 1;
		return vVar1;
	}
	return func_778(func_180(iParam0), iParam2, iParam3, func_776(iParam0, iParam1, iParam2), bParam4, func_777(iParam0), iParam5);
}

void func_456()
{
	_0x20f4cb76689acdbc(&(Global_1071686->f_21416.f_260));
}

int func_457(var uParam0)
{
	return uParam0->f_4034.f_240;
}

Vector3 func_458(var uParam0)
{
	return uParam0->f_4034.f_241;
}

var func_459(var uParam0, var uParam1, var uParam2)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

void func_460(var uParam0, int iParam1)
{
	uParam0->f_4034.f_244 = iParam1;
}

void func_461(var uParam0, int iParam1)
{
	uParam0->f_4034.f_245 = iParam1;
}

Vector3 func_462(char* sParam0)
{
	StringCopy(&cVar0, sParam0, 24);
	return cVar0;
}

void func_463(var uParam0, vector3 vParam1)
{
	uParam0->f_4034.f_241 = { vParam1 };
}

void func_464(var uParam0, int iParam1)
{
	uParam0->f_4034.f_240 = iParam1;
}

int func_465(var uParam0)
{
	return uParam0->f_4034.f_246;
}

Vector3 func_466(var uParam0)
{
	return uParam0->f_4034.f_247;
}

void func_467(var uParam0, int iParam1)
{
	uParam0->f_4034.f_250 = iParam1;
}

void func_468(var uParam0, int iParam1)
{
	uParam0->f_4034.f_251 = iParam1;
}

void func_469(var uParam0, vector3 vParam1)
{
	uParam0->f_4034.f_247 = { vParam1 };
}

void func_470(var uParam0, int iParam1)
{
	uParam0->f_4034.f_246 = iParam1;
}

bool func_471(var uParam0, int iParam1)
{
	if (!func_779(uParam0, iParam1))
	{
		return false;
	}
	uParam0->f_2 = 466723622;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	return true;
}

bool func_472(var uParam0, int iParam1)
{
	uParam0->f_2 = -1442893430;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	return true;
}

bool func_473(var uParam0, int iParam1)
{
	uParam0->f_2 = 1034671917;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	return true;
}

bool func_474(var uParam0, int iParam1)
{
	uParam0->f_2 = -467924289;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	return true;
}

bool func_475(var uParam0, int iParam1)
{
	if (!func_780(uParam0, iParam1))
	{
		return false;
	}
	uParam0->f_2 = -232245152;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	return true;
}

bool func_476(var uParam0, int iParam1)
{
	uParam0->f_2 = -770038426;
	uParam0->f_3 = iParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

bool func_477(var uParam0)
{
	uParam0->f_2 = 1153433438;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	return true;
}

int func_478(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2012327723:
			return 2;
		case -839267265:
			return 0;
		case -258540245:
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

void func_479(var uParam0, int iParam1, int iParam2, struct<8> Param3, int iParam11, var uParam12)
{
	iVar0 = func_478(iParam11, 1);
	(*uParam12)[iVar0] = iParam1;
	(*uParam12)[iVar0]->f_1 = { func_462(func_781(Param3)) };
	(*uParam12)[iVar0]->f_4 = iParam2;
}

bool func_480(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = -1871400260;
	uParam0->f_3 = iParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

bool func_481(var uParam0, int iParam1)
{
	uParam0->f_2 = 1392091586;
	uParam0->f_3 = iParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

bool func_482(var uParam0, int iParam1)
{
	uParam0->f_2 = 1915534289;
	uParam0->f_3 = iParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

bool func_483(struct<5> Param0, int iParam5, int iParam6, var uParam7)
{
	Var1 = -1;
	Var1.f_1 = -1;
	Var1.f_2 = -1;
	Var1.f_4 = 10;
	Var1.f_15 = 4;
	Var1.f_15.f_5 = 4;
	Var1.f_25 = 1;
	Var1.f_28 = 2;
	Var1.f_28.f_1 = -1;
	Var1.f_28.f_1.f_1 = -1;
	Var1.f_31 = 493038497;
	Var1.f_31.f_1 = 493038497;
	Var35 = -1;
	if (!func_782(Param0, &(Param0.f_1), 1089670230, iParam6, 0, 1))
	{
		return false;
	}
	uVar34 = func_783(Param0);
	Var35 = func_784(uVar34);
	Var35.f_1 = func_785(Param0);
	if (!func_786(&Var35))
	{
		return false;
	}
	if (!func_787(func_181(*uParam7), &Var35, &Var1, (((uParam7->f_4 == -1125105727 || uParam7->f_4 == -1683328900) || uParam7->f_4 == 64621749) || uParam7->f_4 == 1766283257)))
	{
		return false;
	}
	iVar0 = func_788(*uParam7, &Var35, 1);
	if (iVar0 == -1)
	{
		return false;
	}
	else if (iVar0 >= 62)
	{
		return false;
	}
	func_789(*uParam7, iVar0);
	func_790(*uParam7, iParam5, iVar0);
	if (_unlock_is_unlocked(Var1.f_2.f_1))
	{
		func_201(*uParam7, iVar0);
	}
	if (_unlock_is_visible(Var1.f_2.f_1))
	{
		func_203(*uParam7, iVar0);
	}
	if (iVar0 < func_199(*uParam7))
	{
		return true;
	}
	Var1.f_28[func_792(303108068)] = func_791(func_535(func_92(uParam7->f_2), func_93(uParam7->f_1), 1, &(Var1.f_4[7]), func_122(*uParam7)));
	Var1.f_28[func_792(-910931556)] = func_791(func_535(func_92(uParam7->f_2), func_93(uParam7->f_1), 2, &(Var1.f_4[7]), func_122(*uParam7)));
	func_793(&Var1, uParam7);
	return true;
}

bool func_484(var uParam0, int iParam1)
{
	uParam0->f_2 = -26782235;
	uParam0->f_3 = iParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

bool func_485(var uParam0, int iParam1)
{
	uParam0->f_2 = 592206679;
	uParam0->f_3 = iParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

bool func_486(struct<5> Param0, var uParam5)
{
	*uParam5 = 0;
	if (!func_794(&Param0))
	{
		return false;
	}
	iVar1 = 0;
	iVar2 = func_215(Param0, 966721050);
	if (iVar2 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iVar2 - 1))
		{
			if (func_795(Param0, iVar0, uParam5))
			{
				iVar1++;
			}
			iVar0++;
		}
	}
	return iVar1 > 0;
}

bool func_487(var uParam0, int iParam1)
{
	uParam0->f_2 = 2080739522;
	uParam0->f_3 = iParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

int func_488(struct<5> Param0)
{
	iVar0 = 0;
	if (func_796(&Param0))
	{
		iVar1 = 0;
		iVar2 = func_215(Param0, -1591356522);
		iVar1 = 0;
		while (iVar1 <= (iVar2 - 1))
		{
			if (!func_797(Param0, &iVar0, iVar1))
			{
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_489(struct<5> Param0, int iParam5, int iParam6, var uParam7)
{
	if (!func_798(&Param0))
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = func_215(Param0, -279039872);
	if (iVar1 < 1)
	{
		return 0;
	}
	func_165(*uParam7);
	*uParam7 = _create_volume_aggregate();
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		if (!func_519(Param0, uParam7, iParam5, iVar0, func_67(iParam6), -544934773))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_490(vector3 vParam0, var uParam3, var uParam4, var uParam5, int iParam6)
{
	if (!func_518(&vParam0, iParam6))
	{
		return 0;
	}
	vParam0.f_2 = -665208900;
	if (!_datafile_get_hash(&iVar0, &vParam0))
	{
		return 0;
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	iVar1 = iVar0;
	vParam0.f_2 = -134912699;
	if (!_datafile_get_vector(&vVar2, &vParam0))
	{
		return 0;
	}
	if (func_178(vVar2))
	{
		return 0;
	}
	vParam0.f_2 = 41531735;
	if (!_datafile_get_vector(&vVar5, &vParam0))
	{
		return 0;
	}
	vParam0.f_2 = -1175686941;
	if (!_datafile_get_vector(&vVar8, &vParam0))
	{
		return 0;
	}
	if (vVar8.x <= 0f)
	{
		return 0;
	}
	if (vVar8.y <= 0f)
	{
		return 0;
	}
	if (vVar8.z <= 0f)
	{
		return 0;
	}
	*uParam5 = _0x0eb78c2b156635b1(iVar1, vVar2, vVar5, vVar8);
	return 1;
}

bool func_491(var uParam0, int iParam1)
{
	uParam0->f_2 = -255537257;
	uParam0->f_3 = iParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

bool func_492(var uParam0, var uParam1)
{
	if (!func_799(uParam0, uParam1))
	{
		return false;
	}
	uParam0->f_2 = -1854922634;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	return true;
}

var func_493(int iParam0)
{
	return (*Global_1118808)[iParam0]->f_18.f_16;
}

int func_494(int iParam0, int iParam1)
{
	return (*Global_1118808)[iParam0]->f_18[iParam1]->f_1;
}

var func_495(int iParam0, int iParam1)
{
	return (*Global_1118808)[iParam0]->f_18[iParam1]->f_2;
}

bool func_496(var uParam0)
{
	uParam0->f_2 = 843787590;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	return true;
}

bool func_497(var uParam0, int iParam1)
{
	uParam0->f_2 = -789427168;
	uParam0->f_3 = iParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

struct<8> func_498(vector3 vParam0, var uParam3, var uParam4)
{
	vParam0.f_2 = -1277273758;
	if (!_datafile_get_string(&Var0, &vParam0))
	{
	}
	return Var0;
}

var func_499(vector3 vParam0, var uParam3, var uParam4)
{
	vParam0.f_2 = -1572019582;
	if (!_datafile_get_int(&uVar0, &vParam0))
	{
	}
	return uVar0;
}

int func_500(vector3 vParam0, var uParam3, var uParam4)
{
	vParam0.f_2 = 773420852;
	if (!_datafile_get_hash(&uVar0, &vParam0))
	{
		return 0;
	}
	return uVar0;
}

var func_501(vector3 vParam0, var uParam3, var uParam4)
{
	vParam0.f_2 = 409963779;
	if (!_datafile_get_float(&uVar0, &vParam0))
	{
	}
	return uVar0;
}

int func_502(struct<5> Param0, var uParam5, var uParam6)
{
	iVar1 = func_239(Param0, -1544070393);
	uVar4 = Param0.f_1;
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Param0.f_1 = uVar4;
		iVar2 = 0;
		if (!func_800(&Param0, iVar0))
		{
			return 0;
		}
		iVar3 = func_801(Param0);
		switch (iVar3)
		{
			case 176170870:
				if (!func_509(Param0, iVar3, &iVar2, uParam6))
				{
					return 0;
				}
				uParam5->f_8 = iVar2;
				break;
			case 1965825814:
				if (!func_509(Param0, iVar3, &iVar2, uParam6))
				{
					return 0;
				}
				uParam5->f_9 = iVar2;
				break;
			default:
				break;
		}
		iVar0++;
	}
	return 1;
}

void func_503(struct<5> Param0, var uParam5, var uParam6)
{
	if (!func_802(&Param0))
	{
		return;
	}
	if (!func_497(&Param0, uParam6))
	{
		return;
	}
	uParam5->f_13.f_6 = func_803(Param0);
	switch (uParam5->f_13.f_6)
	{
		case 1878973084:
			uParam5->f_13 = { func_804(Param0) };
			uParam5->f_13.f_3 = func_805(Param0);
			break;
		case 1331969070:
			uParam5->f_13.f_8 = func_806(Param0);
			uParam5->f_13 = { func_807(Param0) };
			uParam5->f_13.f_3 = func_808(Param0);
			uParam5->f_13.f_9 = { func_809(Param0) };
			iVar0 = 0;
			if (!func_508(&Param0, 1588979285))
			{
				return;
			}
			if (!func_509(Param0, 1588979285, &iVar0, uParam6))
			{
				return;
			}
			uParam5->f_13.f_7 = iVar0;
			if (uParam5->f_13.f_7 & 6 == 0)
			{
				return;
			}
			break;
		case 747721187:
			uParam5->f_13 = { func_807(Param0) };
			uParam5->f_13.f_3 = func_808(Param0);
			uParam5->f_13.f_13 = func_810(Param0);
			break;
		default:
			break;
	}
}

void func_504(struct<5> Param0, var uParam5)
{
	if (!func_811(&Param0))
	{
		return;
	}
	if (!func_812(&Param0))
	{
		return;
	}
	if (!func_813(&Param0))
	{
		return;
	}
	iVar1 = func_239(Param0, -1217753077);
	uVar2 = Param0.f_1;
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Param0.f_1 = uVar2;
		if (!func_814(&Param0, iVar0))
		{
		}
		else
		{
			*uParam5->f_28[iVar0] = { func_807(Param0) };
			uParam5->f_28[iVar0]->f_3 = func_805(Param0);
			uParam5->f_28[iVar0]->f_4 = func_815(Param0);
			uParam5->f_28.f_36++;
		}
		iVar0++;
	}
}

void func_505(struct<5> Param0, var uParam5)
{
	if (!func_816(&Param0))
	{
		return;
	}
	iVar1 = func_239(Param0, -100724832);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		func_817(Param0, uParam5, iVar0);
		iVar0++;
	}
}

bool func_506(var uParam0)
{
	uParam0->f_2 = 650443163;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	return true;
}

bool func_507(var uParam0, int iParam1)
{
	uParam0->f_2 = -59088530;
	uParam0->f_3 = iParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

bool func_508(var uParam0, int iParam1)
{
	uParam0->f_2 = -1237276897;
	uParam0->f_3 = iParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

bool func_509(struct<5> Param0, int iParam5, int iParam6, var uParam7)
{
	uVar3 = Param0.f_1;
	iVar1 = func_239(Param0, 601477620);
	*iParam6 = 0;
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Param0.f_1 = uVar3;
		iVar2 = 0;
		if (!func_818(&Param0, iVar0))
		{
			return false;
		}
		switch (iParam5)
		{
			case 1588979285:
				iVar2 = func_820(func_819(Param0));
				break;
			case 961558953:
				iVar2 = func_822(func_821(Param0));
				break;
			case 176170870:
				iVar2 = func_824(func_823(Param0));
				break;
			case 1965825814:
				iVar2 = func_826(func_825(Param0));
				break;
			case -1000179465:
				iVar2 = func_828(func_827(Param0));
				break;
			default:
				return false;
		}
		if (func_496(&Param0))
		{
			if (func_497(&Param0, uParam7))
			{
			}
			else
			{
				*iParam6 = (*iParam6 || iVar2);
			}
			iVar0++;
			return true;
		}
	}
}

struct<4> func_510(vector3 vParam0, var uParam3, var uParam4)
{
	vParam0.f_2 = -1277273758;
	if (!_datafile_get_string(&Var0, &vParam0))
	{
		return Var8;
	}
	Var8 = { func_830(func_829(Var0)) };
	return Var8;
}

struct<4> func_511(vector3 vParam0, var uParam3, var uParam4)
{
	vParam0.f_2 = 223434839;
	if (!_datafile_get_string(&Var0, &vParam0))
	{
		return Var8;
	}
	Var8 = { func_830(func_829(Var0)) };
	return Var8;
}

int func_512(vector3 vParam0, var uParam3, var uParam4)
{
	vParam0.f_2 = 271069761;
	if (!_datafile_get_hash(&uVar0, &vParam0))
	{
		return 0;
	}
	return uVar0;
}

var func_513(vector3 vParam0, var uParam3, var uParam4)
{
	vParam0.f_2 = -1995351236;
	if (!_datafile_get_bool(&uVar0, &vParam0))
	{
	}
	return uVar0;
}

int func_514(int iParam0)
{
	switch (iParam0)
	{
		case -1058720752:
			return 4;
		case -596140911:
			return 3;
		case 1667234773:
			return 8;
		case 302420629:
			return 7;
		case 58670941:
			return 6;
		case 323628355:
			return 5;
		case 18011253:
			return 2;
		case -358638071:
			return 1;
		case -1718522759:
			return 0;
		case 2055847821:
			return 9;
		case -1010216437:
			return 10;
		case -703138138:
			return 11;
		case -1407868742:
			return 12;
		case -1993182726:
			return 13;
		case 1320490705:
			return 14;
		case 1465672549:
			return 15;
		case 821981236:
			return 16;
		default:
			break;
	}
	return -1;
}

int func_515(struct<5> Param0, var uParam5, int iParam6, var uParam7, int iParam8)
{
	if (!func_831(&Param0, iParam8))
	{
		return 0;
	}
	iVar0 = func_832(Param0);
	switch (iVar0)
	{
		case 745166621:
			return func_833(Param0, uParam5, iParam6, uParam7);
		case -250583361:
			return func_834(Param0, uParam5, iParam6, uParam7);
		case -1918820073:
			return func_835(Param0, uParam5, iParam6, uParam7);
		case -2007566758:
			return func_836(Param0, uParam5, iParam6, uParam7);
		default:
			break;
	}
	return 0;
}

bool func_516(var uParam0, int iParam1, int iParam2)
{
	if (!func_837(uParam0, iParam1))
	{
		return false;
	}
	uParam0->f_2 = 696574474;
	uParam0->f_3 = iParam2;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

bool func_517(vector3 vParam0, var uParam3, var uParam4, int iParam5, var uParam6, var uParam7)
{
	if (!func_838(&vParam0, iParam5))
	{
		return false;
	}
	vParam0.f_2 = 1649401908;
	if (!_datafile_get_hash(&iVar0, &vParam0))
	{
		return false;
	}
	if (iVar0 == 0)
	{
		return false;
	}
	iVar2 = iVar0;
	iVar1 = func_268(iVar2, 1);
	if (iVar1 < 0 || iVar1 >= 21)
	{
		return false;
	}
	func_205(uParam6, iVar1, 1);
	return true;
}

bool func_518(var uParam0, int iParam1)
{
	uParam0->f_2 = -328876172;
	uParam0->f_3 = iParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

bool func_519(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	if (!func_839(&vParam0, iParam7))
	{
		return false;
	}
	vParam0.f_2 = -665208900;
	if (!_datafile_get_hash(&iVar0, &vParam0))
	{
		return false;
	}
	if (iVar0 == 0)
	{
		return false;
	}
	iVar1 = iVar0;
	vParam0.f_2 = -134912699;
	if (!_datafile_get_vector(&vVar2, &vParam0))
	{
		return false;
	}
	if (func_178(vVar2))
	{
		return false;
	}
	vParam0.f_2 = 41531735;
	if (!_datafile_get_vector(&vVar5, &vParam0))
	{
		return false;
	}
	vParam0.f_2 = -1175686941;
	if (!_datafile_get_vector(&vVar8, &vParam0))
	{
		return false;
	}
	if (vVar8.x <= 0f)
	{
		return false;
	}
	if (vVar8.y <= 0f)
	{
		return false;
	}
	if (vVar8.z <= 0f)
	{
		return false;
	}
	_0x12fcaa23f2320422(*iParam5, iVar1, vVar2, vVar5, vVar8);
	return true;
}

bool func_520(var uParam0, int iParam1)
{
	uParam0->f_2 = -1181812906;
	uParam0->f_3 = iParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

bool func_521(struct<5> Param0, int iParam5, var uParam6, var uParam7)
{
	iVar2 = 828747869;
	if (!func_840(&Param0, iVar2))
	{
		return false;
	}
	iVar1 = func_215(Param0, 1241889488);
	if (iVar1 <= 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		if (!func_841(Param0, iParam5, iVar0, uParam6, uParam7))
		{
			return false;
		}
		iVar0++;
	}
	return *uParam7 != 0;
}

bool func_522(struct<5> Param0, int iParam5, var uParam6, var uParam7)
{
	iVar2 = 1741842546;
	if (!func_840(&Param0, iVar2))
	{
		return false;
	}
	iVar1 = func_215(Param0, 1241889488);
	if (iVar1 <= 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		if (!func_842(Param0, iParam5, iVar0, uParam6, uParam7))
		{
			return false;
		}
		iVar0++;
	}
	return *uParam7 != 0;
}

bool func_523(vector3 vParam0, var uParam3, var uParam4, var uParam5, int iParam6)
{
	if (!func_843(&vParam0, iParam6))
	{
		return false;
	}
	vParam0.f_2 = -1537888061;
	_datafile_get_float(uParam5, &vParam0);
	vParam0.f_2 = 1417063580;
	_datafile_get_float(&(uParam5->f_1), &vParam0);
	vParam0.f_2 = -809702995;
	_datafile_get_bool(&(uParam5->f_2), &vParam0);
	return true;
}

void func_524(int iParam0, int iParam1, bool bParam2)
{
	func_844(iParam0, 0, 0);
	if (func_845(iParam0))
	{
		if (door_system_get_door_state(iParam0) != iParam1 || bParam2)
		{
			door_system_set_door_state(iParam0, iParam1);
		}
	}
}

bool func_525(int iParam0, int iParam1)
{
	return func_204(&(Global_1109804->f_6371.f_3[iParam1]->f_5), iParam0, 2);
}

int func_526()
{
	return &Global_1902818;
}

bool func_527(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_846(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_847(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_528(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_848(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_849(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_850(iParam0);
	if (iVar5 < 1 || iVar5 > func_851(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

int func_528(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_529(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (is_bit_set(&((*Global_1116202)[iParam0]->f_3[iVar0]), iParam1))
		{
			return func_852(iVar0, 1);
		}
		iVar0++;
	}
	return 493038497;
}

struct<2> func_530(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

int func_531(int iParam0)
{
	return (*Global_1120070)[iParam0]->f_7;
}

bool func_532(var uParam0)
{
	iVar0 = func_237(uParam0->f_2);
	if (iVar0 == -323664079)
	{
		return false;
	}
	if (iVar0 == -800238780 || iVar0 == 1015970717)
	{
		return true;
	}
	if (!func_603(func_92(uParam0->f_2)))
	{
		return false;
	}
	return true;
}

void func_533(int iParam0, int iParam1)
{
	func_853(&((*Global_1120070)[iParam0]->f_23), iParam1, 1, iParam0);
}

var func_534(int iParam0, int iParam1)
{
	return &((*Global_1120070)[iParam0]->f_24.f_2[iParam1]->f_4[7]);
}

int func_535(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	iVar0 = func_854(iParam0, iParam1, iParam2, uParam3, uParam4);
	return func_514(iVar0);
}

void func_536(int iParam0, int iParam1)
{
	func_855(&((*Global_1120070)[iParam0]->f_23), iParam1, 1, iParam0);
}

void func_537(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = func_856(iParam1);
	if (bParam2)
	{
		if (!func_857(iParam0, iParam1))
		{
			func_858(iParam0, iParam1);
		}
		func_194(iParam0, iVar0);
	}
	else
	{
		func_193(iParam0, iVar0);
	}
}

bool func_538(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_859(bParam1, bParam2, bParam3);
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

int func_539()
{
	return Global_1109804->f_21.f_12.f_2;
}

void func_540(int iParam0, var uParam1, var uParam2)
{
	get_event_data(1, iParam0, &iVar0, 4);
	switch (iVar0)
	{
		case 9:
			func_860(uParam1, uParam2, iParam0);
			break;
		case 192:
			func_861(uParam1, uParam2, iParam0);
			break;
	}
}

int func_541(int iParam0)
{
	return Global_1130634[iParam0];
}

void func_542(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 192;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 12, 44, &uParam1);
}

int func_543(int iParam0)
{
	if (!func_544(&uVar0))
	{
		return -1;
	}
	if (!func_545(&uVar0, 4, 0, 0, 1))
	{
		return -1;
	}
	if (!func_545(&uVar0, 6, 0, 0, 1))
	{
		return -1;
	}
	if (!func_545(&uVar0, 8, 0, 0, 1))
	{
		return -1;
	}
	if (!func_545(&uVar0, 9, iParam0, 0, 1))
	{
		return -1;
	}
	return func_862(&uVar0);
}

bool func_544(var uParam0)
{
	iVar5 = Global_1071686->f_28448[31]->f_3;
	if (!_0x7907969497ea92f5(iVar5))
	{
		return false;
	}
	if (!_0x603ac35fd4602c76(iVar5))
	{
		return false;
	}
	_copy_memory(uParam0, &uVar0, 5);
	*uParam0 = iVar5;
	return true;
}

bool func_545(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	uParam0->f_2 = iParam1;
	uParam0->f_3 = iParam2;
	uParam0->f_4 = iParam3;
	uVar0 = uParam0->f_1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		uParam0->f_1 = uVar0;
		return false;
	}
	return true;
}

int func_546(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -323664079;
		case 1:
			return 304473406;
		case 2:
			return 1428568385;
		case 3:
			return -710377432;
		default:
			break;
	}
	return 0;
}

int func_547(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -893766361;
		case 1:
			return -2027639951;
		default:
			break;
	}
	return 0;
}

int func_548(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 259767909;
		case 0:
			return 2063993476;
		case 1:
			return 1007867116;
		case 3:
			return -986826753;
		case 4:
			return 1461677252;
		default:
			break;
	}
	return 0;
}

int func_549(var uParam0)
{
	return func_863(uParam0, 31, 1);
}

bool func_550(int iParam0)
{
	return func_864(iParam0, 1);
}

bool func_551(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 > -1 && iParam0 < 4)
	{
		if (!bParam1 || _does_volume_exist((*Global_1956131)[iParam0]->f_1))
		{
			if (!bParam2 || does_entity_exist((*Global_1956131)[iParam0]->f_2))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_552(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2 || func_551(iParam0, 1, 1))
	{
		return func_865(Global_1956131[iParam0], iParam1);
	}
	return false;
}

int func_553(int iParam0, var uParam1, var uParam2)
{
	if (func_340() != -1)
	{
		if (func_163() == func_93(uParam2->f_1))
		{
			if (func_340() == 0)
			{
				iVar0 = func_539();
				if (iVar0 >= 0 && iVar0 < 4)
				{
					return 1;
				}
			}
		}
	}
	if (func_866(iParam0, 0, 1, 0) == -1016714371 || func_866(iParam0, 0, 1, 0) == 332793555)
	{
		return 1;
	}
	if (func_23(func_259()) && func_77())
	{
		return 1;
	}
	if (is_ped_in_combat(iParam0, 0))
	{
		return 1;
	}
	if (func_538(player_id(), 1, 0, 1))
	{
		return 1;
	}
	if (func_354(uParam1, uParam2, 0) == -1)
	{
		return 1;
	}
	if (!does_entity_exist(&(uParam1->f_112.f_200[func_354(uParam1, uParam2, 0)])))
	{
		return 1;
	}
	if (is_entity_dead(&(uParam1->f_112.f_200[func_354(uParam1, uParam2, 0)])))
	{
		return 1;
	}
	if (!is_entity_visible(&(uParam1->f_112.f_200[func_354(uParam1, uParam2, 0)])))
	{
		return 1;
	}
	if (!func_550(uParam2->f_1))
	{
		return 1;
	}
	return 0;
}

void func_554(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2 || func_551(iParam0, 1, 1))
	{
		func_867((*Global_1956131)[iParam0], iParam1);
	}
}

void func_555(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2 || func_551(iParam0, 1, 1))
	{
		func_868((*Global_1956131)[iParam0], iParam1);
	}
}

bool func_556(int iParam0, int iParam1, bool bParam2, int iParam3)
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

int func_557(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -910931556:
			return 2;
		case 303108068:
			return 1;
		case 493038497:
			return 0;
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

struct<2> func_558(var uParam0, var uParam1, int iParam2)
{
	Var0 = func_869(uParam0, uParam1, uParam0->f_948.f_1[iParam2]->f_15, uParam0->f_948.f_1[iParam2]->f_16, uParam0->f_948.f_1[iParam2]->f_17, iParam2, 1);
	if (func_870(Var0))
	{
		Var0.f_1 |= 64;
	}
	return Var0;
}

void func_559(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	if (bParam3)
	{
		set_entity_visible(&(uParam0->f_948.f_1[iParam2]), true);
		set_entity_collision(&(uParam0->f_948.f_1[iParam2]), true, false);
		freeze_entity_position(&(uParam0->f_948.f_1[iParam2]), false);
	}
	else
	{
		set_entity_visible(&(uParam0->f_948.f_1[iParam2]), false);
		set_entity_collision(&(uParam0->f_948.f_1[iParam2]), false, false);
		freeze_entity_position(&(uParam0->f_948.f_1[iParam2]), true);
	}
}

struct<2> func_560(var uParam0, var uParam1, int iParam2)
{
	Var0 = func_869(uParam0, uParam1, uParam0->f_112.f_200[iParam2]->f_154, uParam0->f_112.f_200[iParam2]->f_153, uParam0->f_112.f_200[iParam2]->f_155, iParam2, 0);
	Var0.f_1 = func_871(uParam1, uParam0->f_112.f_200[iParam2]->f_152, iParam2, 0);
	if (func_870(Var0))
	{
		Var0.f_1 |= 64;
	}
	return Var0;
}

void func_561(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	if (bParam3)
	{
		set_entity_visible(&(uParam0->f_112.f_200[iParam2]), true);
		set_entity_collision(&(uParam0->f_112.f_200[iParam2]), true, false);
		if (!is_entity_attached(&(uParam0->f_112.f_200[iParam2])))
		{
			freeze_entity_position(&(uParam0->f_112.f_200[iParam2]), false);
		}
	}
	else
	{
		set_entity_visible(&(uParam0->f_112.f_200[iParam2]), false);
		set_entity_collision(&(uParam0->f_112.f_200[iParam2]), false, false);
		if (!is_entity_attached(&(uParam0->f_112.f_200[iParam2])))
		{
			freeze_entity_position(&(uParam0->f_112.f_200[iParam2]), true);
		}
	}
}

void func_562(var uParam0)
{
	iVar0 = func_283(uParam0, 0);
	if (iVar0 != 0)
	{
		if (func_599(iVar0, &uVar1))
		{
			uParam0->f_4347.f_39[0]->f_13 = get_hash_key(&uVar1);
			_request_streamed_txd(uParam0->f_4347.f_39[0]->f_13, true);
		}
	}
	iVar0 = func_283(uParam0, 1);
	if (iVar0 != 0)
	{
		if (func_599(iVar0, &uVar1))
		{
			uParam0->f_4347.f_39[1]->f_13 = get_hash_key(&uVar1);
			_request_streamed_txd(uParam0->f_4347.f_39[1]->f_13, true);
		}
	}
	iVar0 = func_283(uParam0, 2);
	if (iVar0 != 0)
	{
		if (func_599(iVar0, &uVar1))
		{
			uParam0->f_4347.f_39[2]->f_13 = get_hash_key(&uVar1);
			_request_streamed_txd(uParam0->f_4347.f_39[2]->f_13, true);
		}
	}
	iVar9 = func_336();
	if (iVar9 != -1)
	{
		iVar10 = func_445(iVar9, func_444(iVar9));
		if (iVar10 != 0)
		{
			_request_streamed_txd(iVar10, true);
		}
	}
}

bool func_563(var uParam0)
{
	iVar0 = 0;
	iVar1 = func_872(uParam0);
	iVar2 = func_283(uParam0, 0);
	if (iVar2 != 0)
	{
		if (uParam0->f_4347.f_39[0]->f_13 != 0 && _has_streamed_txd_loaded(uParam0->f_4347.f_39[0]->f_13))
		{
			iVar0++;
		}
	}
	iVar2 = func_283(uParam0, 1);
	if (iVar2 != 0)
	{
		if (uParam0->f_4347.f_39[1]->f_13 != 0 && _has_streamed_txd_loaded(uParam0->f_4347.f_39[1]->f_13))
		{
			iVar0++;
		}
	}
	iVar2 = func_283(uParam0, 2);
	if (iVar2 != 0)
	{
		if (uParam0->f_4347.f_39[2]->f_13 != 0 && _has_streamed_txd_loaded(uParam0->f_4347.f_39[2]->f_13))
		{
			iVar0++;
		}
	}
	iVar3 = func_336();
	if (iVar3 != -1)
	{
		iVar4 = func_445(iVar3, func_444(iVar3));
		if (iVar4 != 0)
		{
			if (_has_streamed_txd_loaded(iVar4))
			{
				iVar0++;
			}
		}
	}
	return iVar0 == iVar1;
}

void func_564(var uParam0)
{
	uParam0->f_113 = _uiflowblock_request(1911615281);
}

bool func_565(var uParam0)
{
	return _uiflowblock_is_loaded(uParam0->f_113);
}

bool func_566(var uParam0)
{
	if (!_uiflowblock_enter(uParam0->f_113, get_hash_key("bounty_board")))
	{
		return false;
	}
	return true;
}

bool func_567(var uParam0)
{
	if (!_uistatemachine_exists(-1436556974))
	{
		if (!_uistatemachine_create(-1436556974, uParam0->f_113))
		{
			return false;
		}
	}
	return true;
}

void func_568(var uParam0)
{
	uParam0->f_114 = _databinding_add_data_container_from_path("", "bounty_board_data");
	iVar0 = 0;
	while (iVar0 <= (3 - 1))
	{
		uParam0->f_39[iVar0] = _databinding_add_data_container(uParam0->f_114, func_873(iVar0));
		uParam0->f_85[iVar0] = _databinding_add_data_container(uParam0->f_114, func_874(iVar0));
		func_875(uParam0, iVar0);
		func_570(uParam0, iVar0);
		iVar0++;
	}
}

bool func_569()
{
	iVar0 = func_336();
	if (iVar0 != -1)
	{
		iVar1 = func_445(iVar0, func_444(iVar0));
		if (iVar1 != 0)
		{
			_request_streamed_txd(iVar1, true);
			return _has_streamed_txd_loaded(iVar1);
		}
	}
	return false;
}

void func_570(var uParam0, int iParam1)
{
	if (uParam0->f_85[iParam1]->f_6)
	{
		uParam0->f_85[iParam1]->f_1 = _databinding_add_data_bool(&(uParam0->f_85[iParam1]), "isVisible", 0);
		uParam0->f_85[iParam1]->f_4 = _databinding_add_data_hash(&(uParam0->f_85[iParam1]), "tex", 0);
		uParam0->f_85[iParam1]->f_3 = _databinding_add_data_hash(&(uParam0->f_85[iParam1]), "txd", 0);
		uParam0->f_85[iParam1]->f_2 = _databinding_add_data_string(&(uParam0->f_85[iParam1]), "header", "");
		uParam0->f_85[iParam1]->f_5 = _databinding_add_data_int(&(uParam0->f_85[iParam1]), "setDifficulty", 0);
		uParam0->f_85[iParam1]->f_6 = 0;
	}
	else
	{
		_databinding_write_data_hash_string(uParam0->f_85[iParam1]->f_4, 0);
		_databinding_write_data_hash_string(uParam0->f_85[iParam1]->f_3, 0);
		_databinding_write_data_bool(uParam0->f_85[iParam1]->f_1, false);
		_databinding_write_data_string(uParam0->f_85[iParam1]->f_2, "");
		_databinding_write_data_int(uParam0->f_85[iParam1]->f_5, 0);
	}
}

int func_571(int iParam0, int iParam1)
{
	return func_876(iParam0, iParam1);
}

int func_572(int iParam0, int iParam1)
{
	return func_878(func_877(iParam0, iParam1));
}

char* func_573(int iParam0)
{
	return _create_var_string(0, func_879(iParam0));
}

void func_574(var uParam0, var uParam1, char[32] cParam2, struct<17> Param10, var uParam27, var uParam28)
{
	func_880(uParam0, uParam1, cParam2, Param10);
	uParam0->f_18 = _databinding_add_data_string(*uParam0, func_881(15), Param10.f_16);
}

int func_575(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -345881681;
		case 1:
			return 143949331;
		case 2:
			return -700081802;
		case 3:
			return -461326868;
		case 4:
			return 1642082469;
		case 5:
			return 1068493893;
		case 6:
			return 293408736;
		case 7:
			return 528919539;
		case 8:
			return -1124079901;
		case 9:
			return -1968176572;
		default:
			break;
	}
	return 0;
}

int func_576(int iParam0)
{
	return (*Global_1120070)[iParam0]->f_11;
}

void func_577(var uParam0)
{
	if (!uParam0->f_24)
	{
		*uParam0 = _databinding_add_data_container_from_path("", "Translate");
		uParam0->f_1 = _databinding_add_data_container(*uParam0, "Generic");
		uParam0->f_3 = _databinding_add_data_container(uParam0->f_1, "textField0");
		uParam0->f_5 = _databinding_add_data_int(uParam0->f_3, "style", 0);
		uParam0->f_4 = _databinding_add_data_hash(uParam0->f_3, "text", 0);
		uParam0->f_6 = _databinding_add_data_container(uParam0->f_1, "textField1");
		uParam0->f_8 = _databinding_add_data_int(uParam0->f_6, "style", 0);
		uParam0->f_7 = _databinding_add_data_hash(uParam0->f_6, "text", 0);
		uParam0->f_9 = _databinding_add_data_container(uParam0->f_1, "textField2");
		uParam0->f_11 = _databinding_add_data_int(uParam0->f_9, "style", 0);
		uParam0->f_10 = _databinding_add_data_hash(uParam0->f_9, "text", 0);
		uParam0->f_12 = _databinding_add_data_container(uParam0->f_1, "textField3");
		uParam0->f_14 = _databinding_add_data_int(uParam0->f_12, "style", 0);
		uParam0->f_13 = _databinding_add_data_hash(uParam0->f_12, "text", 0);
		uParam0->f_15 = _databinding_add_data_container(uParam0->f_1, "textField4");
		uParam0->f_17 = _databinding_add_data_int(uParam0->f_15, "style", 0);
		uParam0->f_16 = _databinding_add_data_hash(uParam0->f_15, "text", 0);
		uParam0->f_18 = _databinding_add_data_container(uParam0->f_1, "textField5");
		uParam0->f_20 = _databinding_add_data_int(uParam0->f_18, "style", 0);
		uParam0->f_19 = _databinding_add_data_hash(uParam0->f_18, "text", 0);
		uParam0->f_21 = _databinding_add_data_container(uParam0->f_1, "textField6");
		uParam0->f_23 = _databinding_add_data_int(uParam0->f_21, "style", 0);
		uParam0->f_22 = _databinding_add_data_hash(uParam0->f_21, "text", 0);
		uParam0->f_24 = 1;
	}
	else
	{
		_databinding_write_data_hash_string(uParam0->f_4, 0);
		_databinding_write_data_int(uParam0->f_5, 0);
		_databinding_write_data_hash_string(uParam0->f_7, 0);
		_databinding_write_data_int(uParam0->f_8, 0);
		_databinding_write_data_hash_string(uParam0->f_10, 0);
		_databinding_write_data_int(uParam0->f_11, 0);
		_databinding_write_data_hash_string(uParam0->f_13, 0);
		_databinding_write_data_int(uParam0->f_14, 3);
		_databinding_write_data_hash_string(uParam0->f_16, 0);
		_databinding_write_data_int(uParam0->f_17, 3);
		_databinding_write_data_hash_string(uParam0->f_19, 0);
		_databinding_write_data_int(uParam0->f_20, 3);
		_databinding_write_data_hash_string(uParam0->f_22, 0);
		_databinding_write_data_int(uParam0->f_23, 3);
	}
}

var func_578(int iParam0, int iParam1)
{
	return func_882(iParam0, iParam1);
}

bool func_579(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_580(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1410847083;
		case 1:
			return 1724675796;
		case 2:
			return -139224928;
		case 3:
			return -641080715;
		case 4:
			return 276123595;
		case 5:
			return -29447330;
		case 6:
			return 1175698187;
		case 7:
			return 7;
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

var func_581(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1410847083:
			return uParam0->f_4;
		case 1724675796:
			return uParam0->f_7;
		case -139224928:
			return uParam0->f_10;
		case -641080715:
			return uParam0->f_13;
		case 276123595:
			return uParam0->f_16;
		case -29447330:
			return uParam0->f_19;
		case 1175698187:
			return uParam0->f_22;
		default:
			break;
	}
	return uVar0;
}

void func_582(int iParam0, int iParam1)
{
	(*Global_1120070)[iParam0]->f_21 = ((*Global_1120070)[iParam0]->f_21 || iParam1);
}

bool func_583(var uParam0, var uParam1, int iParam2)
{
	iVar0 = iParam2;
	_databinding_write_data_bool(uParam1->f_39[iVar0]->f_1, false);
	_databinding_write_data_bool(uParam1->f_85[iVar0]->f_1, true);
	iVar1 = uParam1->f_108;
	iVar2 = func_444(iVar1) + 1;
	iVar2 = func_208(iVar2, 1, 5);
	_databinding_write_data_string(uParam1->f_117, func_883(iVar2));
	_databinding_write_data_hash_string(uParam1->f_85[iVar0]->f_3, func_445(iVar1, (iVar2 - 1)));
	_databinding_write_data_hash_string(uParam1->f_85[iVar0]->f_4, func_591(iVar1, (iVar2 - 1)));
	_databinding_write_data_int(uParam1->f_85[iVar0]->f_5, iVar2);
	_databinding_write_data_int(uParam1->f_116, iVar2);
	return true;
}

int func_584(var uParam0)
{
	if (!func_884(uParam0))
	{
		return 0;
	}
	if (func_885())
	{
		return 0;
	}
	if (func_886(_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id()))))
	{
		return 0;
	}
	return 1;
}

void func_585(var uParam0)
{
	if (!_databinding_is_data_id_valid(Global_1940311->f_1433.f_54.f_6))
	{
		return;
	}
	iVar0 = func_887();
	if (_0x81d7183e7a8eca72(Global_1940311->f_1433.f_54.f_6) != iVar0 && iVar0 != 0)
	{
		func_888(_get_label_text_by_hash(iVar0), 1105014447);
		uParam0->f_122 = iVar0;
	}
}

void func_586(var uParam0)
{
	Global_1130634->f_291.f_1 = uParam0;
}

int func_587(int iParam0)
{
	switch (iParam0)
	{
		case -345881681:
			return 0;
		case 143949331:
			return 1;
		case -700081802:
			return 2;
		case -461326868:
			return 3;
		case 1642082469:
			return 4;
		case 1068493893:
			return 5;
		case 293408736:
			return 6;
		case 528919539:
			return 7;
		case -1124079901:
			return 8;
		case -1968176572:
			return 9;
		default:
			break;
	}
	return -1;
}

var func_588(var uParam0, int iParam1)
{
	return uParam0->f_4306[iParam1]->f_10;
}

int func_589(var uParam0, int iParam1)
{
	return uParam0->f_4306[iParam1]->f_6;
}

int func_590(var uParam0, int iParam1)
{
	return uParam0->f_4306[iParam1]->f_8;
}

var func_591(int iParam0, int iParam1)
{
	return func_889(iParam0, iParam1);
}

var func_592(var uParam0, int iParam1)
{
	return uParam0->f_4306[iParam1]->f_5;
}

var func_593(var uParam0, int iParam1)
{
	return uParam0->f_4306[iParam1]->f_7;
}

var func_594(var uParam0, int iParam1)
{
	return uParam0->f_4306[iParam1]->f_9;
}

char* func_595(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "REWARD $";
		case 1:
			return "REWARD $$";
		case 2:
			return "REWARD $$$";
		default:
			break;
	}
	return "";
}

char* func_596(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "LITERAL_STRING", sParam0);
	}
	return func_890(_create_var_string(10, "LITERAL_STRING", sParam0), iParam1);
}

int func_597(var uParam0, int iParam1)
{
	return uParam0->f_4306[iParam1]->f_11;
}

int func_598(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 6)
	{
		return -1;
	}
	return iParam0;
}

bool func_599(int iParam0, var uParam1)
{
	iVar5 = func_543(iParam0);
	if (iVar5 == -1)
	{
		return false;
	}
	if (!func_544(&uVar0))
	{
		return false;
	}
	if (!func_545(&uVar0, 4, 0, 0, 1))
	{
		return false;
	}
	if (!func_545(&uVar0, 5, 0, 0, 1))
	{
		return false;
	}
	if (!func_545(&uVar0, 7, func_546(iVar5), 0, 1))
	{
		return false;
	}
	if (!func_545(&uVar0, 8, 0, 0, 1))
	{
		return false;
	}
	if (!func_545(&uVar0, 9, iParam0, 0, 1))
	{
		return false;
	}
	if (!func_545(&uVar0, 15, 0, 0, 1))
	{
		return false;
	}
	*uParam1 = { func_891(&uVar0) };
	return !_0x375f5870a7b8bec1(uParam1);
}

bool func_600(int iParam0, var uParam1)
{
	iVar5 = func_543(iParam0);
	if (iVar5 == -1)
	{
		return false;
	}
	if (!func_544(&uVar0))
	{
		return false;
	}
	if (!func_545(&uVar0, 4, 0, 0, 1))
	{
		return false;
	}
	if (!func_545(&uVar0, 5, 0, 0, 1))
	{
		return false;
	}
	if (!func_545(&uVar0, 7, func_546(iVar5), 0, 1))
	{
		return false;
	}
	if (!func_545(&uVar0, 8, 0, 0, 1))
	{
		return false;
	}
	if (!func_545(&uVar0, 9, iParam0, 0, 1))
	{
		return false;
	}
	if (!func_545(&uVar0, 15, 0, 0, 1))
	{
		return false;
	}
	*uParam1 = { func_892(&uVar0) };
	return !_0x375f5870a7b8bec1(uParam1);
}

bool func_601(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_602(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_603(int iParam0)
{
	Var0 = { func_894(-1684144076, func_893(iParam0)) };
	return func_895(Var0);
}

bool func_604(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

bool func_605()
{
	return _0xc17f69e1418cd11f(1) == 0;
}

bool func_606(int iParam0, bool bParam1, bool bParam2)
{
	if (!Global_1139381->f_5560)
	{
		return false;
	}
	if (iParam0 == &Global_1296859->f_154[&Global_1296859])
	{
		return ((Global_17411.f_2621.f_2 == 2 || (bParam1 && Global_17411.f_2621.f_2 == 1)) || (bParam2 && Global_17411.f_2621.f_2 == 3));
	}
	if (!network_is_player_active(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return false;
	}
	return (((*Global_1100469)[iVar0]->f_48 == 2 || (bParam1 && (*Global_1100469)[iVar0]->f_48 == 1)) || (bParam2 && (*Global_1100469)[iVar0]->f_48 == 3));
}

int func_607(int iParam0)
{
	return (*Global_1120070)[iParam0]->f_24.f_1;
}

bool func_608(int iParam0, int iParam1, int iParam2)
{
	return func_896((*Global_1120070)[iParam0]->f_24.f_2[iParam1], iParam2);
}

void func_609(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_610(int iParam0)
{
	return &(Global_1956200->f_1704.f_2[iParam0]);
}

void func_611(int iParam0, int iParam1, int iParam2)
{
	func_897(1);
	func_898(0, iParam0);
	func_898(1, iParam1);
	func_898(2, iParam2);
}

void func_612(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_613(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_614(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_615(var uParam0, var uParam1, vector3 vParam2)
{
	if (_does_volume_exist(&(uParam0->f_67.f_2[15])))
	{
		if (_0xf256a75210c5c0eb(&(uParam0->f_67.f_2[15]), vParam2))
		{
			return true;
		}
	}
	if (_0xf256a75210c5c0eb(&(uParam0->f_1730.f_1.f_19[0]->f_65[1]), vParam2))
	{
		return true;
	}
	return false;
}

bool func_616()
{
	return Global_1211315->f_2 != -1;
}

bool func_617(var uParam0, var uParam1)
{
	iVar0 = func_354(uParam0, uParam1, 0);
	if (is_entity_visible(&(uParam0->f_112.f_200[iVar0])))
	{
		if (uParam0->f_112.f_200[iVar0]->f_154 & 512 != 0)
		{
			if (!func_899(uParam0, uParam1, 1))
			{
				return false;
			}
		}
	}
	else
	{
		if (uParam0->f_112.f_200[iVar0]->f_152 != 0 && uParam0->f_112.f_200[iVar0]->f_152 != 64)
		{
			return false;
		}
		if (uParam0->f_112.f_200[iVar0]->f_154 & 512 != 0)
		{
			if (uParam0->f_112.f_200[iVar0]->f_153 != 512)
			{
				return false;
			}
		}
	}
	return true;
}

bool func_618(var uParam0, int iParam1)
{
	if (func_170(*uParam0) != 1372371307)
	{
		return false;
	}
	if (func_340() == 0)
	{
		return false;
	}
	iVar1 = player_id();
	iVar2 = _0x901e0dc25080c8b9(iVar1);
	iVar0 = _0x4be6c13a45cca8ec(iVar2);
	if (!_network_is_player_index_valid(iVar0))
	{
		iVar0 = iVar1;
	}
	if (!network_is_player_active(iVar0))
	{
		return iParam1 & 32 != 0;
	}
	if (func_616())
	{
		return true;
	}
	if (network_is_session_active() && network_is_game_in_progress())
	{
		if (func_900(1, iVar0))
		{
			return true;
		}
		if (func_901(13, iVar0))
		{
			return true;
		}
	}
	else
	{
		return iParam1 & 32 != 0;
	}
	return false;
}

struct<7> func_619(int iParam0)
{
	network_handle_from_player(iParam0, &Var0);
	return Var0;
}

bool func_620(int iParam0)
{
	switch (iParam0)
	{
		case -1683328900:
			return Global_1901947->f_308.f_42;
		default:
			break;
	}
	return false;
	return false;
}

bool func_621(var uParam0, var uParam1)
{
	uVar0 = 3;
	iVar5 = func_607(*uParam0);
	if (iVar5 == -1)
	{
		return false;
	}
	*uParam1 = { func_902(*uParam0, iVar5) };
	iVar8 = player_id();
	iVar7 = _0x901e0dc25080c8b9(iVar8);
	iVar6 = func_903(iVar8);
	if (iVar6 < 0 || iVar6 >= 32)
	{
		return false;
	}
	if (func_904(uParam1, iVar5, &uVar0, iVar7, iVar6, uParam0->f_1, &uVar4, 536877072, -1))
	{
		return false;
	}
	return true;
}

void func_622(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, struct<2> Param5, int iParam7)
{
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_7.f_1 = -1;
	Var0.f_10 = 255;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = 7;
	Var0.f_19.f_1 = 255;
	Var0.f_19.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_27.f_1 = -1;
	uVar32 = func_905(32768, 8);
	iVar33 = _0x901e0dc25080c8b9(player_id());
	Var0.f_10 = player_id();
	Var0.f_6 = iParam1;
	Var0.f_5 = iParam2;
	Var0.f_11 = iVar33;
	Var0.f_4 = 8;
	Var0.f_17 = iParam4;
	Var0.f_14 = iParam7;
	Var0.f_7 = { Param5 };
	vVar34 = { func_350(iParam1) };
	fVar37 = func_352(iParam1);
	switch (iParam4)
	{
		case 2:
			if (func_77())
			{
				Var0.f_18 = 0;
			}
			else if (is_ped_male(get_player_ped(player_id())))
			{
				switch (Global_1071686->f_28341.f_2)
				{
					case 0:
						Var0.f_18 = 7;
						break;
					case 1:
						Var0.f_18 = 1;
						break;
					case 2:
						Var0.f_18 = 3;
						break;
					case 3:
						Var0.f_18 = 5;
						break;
					default:
						break;
				}
			}
			else
			{
				switch (Global_1071686->f_28341.f_2)
				{
					case 0:
						Var0.f_18 = 8;
						break;
					case 1:
						Var0.f_18 = 2;
						break;
					case 2:
						Var0.f_18 = 4;
						break;
					case 3:
						Var0.f_18 = 6;
						break;
					default:
						break;
				}
			}
			break;
		default:
			switch (iParam4)
			{
				case 0:
					iVar31 = 1;
					break;
				case 1:
					iVar31 = 2;
					break;
			}
			Var0.f_18 = func_535(func_92(iParam2), func_93(iParam1), iVar31, func_534(iParam0, iParam3), func_122(iParam0));
			if (func_237(iParam2) == -800238780 || func_237(iParam2) == 1015970717)
			{
				if (Var0.f_18 == -1)
				{
					Var0.f_17 = 4;
				}
			}
			break;
	}
	func_906(&(Var0.f_19), iVar33, vVar34, fVar37);
	func_907(&Var0, uVar32);
}

void func_623(int iParam0, var uParam1, int iParam2, var uParam3, struct<2> Param4, int iParam6, var uParam7, var uParam8, var uParam9, int iParam10)
{
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_7.f_1 = -1;
	Var0.f_10 = 255;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = 7;
	Var0.f_19.f_1 = 255;
	Var0.f_19.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_27.f_1 = -1;
	uVar31 = func_905(0, 8);
	Var0.f_6 = iParam0;
	Var0.f_5 = uParam1;
	Var0.f_11 = _0x901e0dc25080c8b9(player_id());
	Var0.f_4 = 3;
	Var0.f_9 = uParam3;
	Var0.f_14 = iParam2;
	Var0.f_7 = { Param4 };
	Var0.f_13 = iParam10;
	_copy_memory(&(Var0.f_27), &iParam6, 4);
	vVar32 = { func_350(iParam0) };
	fVar35 = func_352(iParam0);
	func_906(&(Var0.f_19), Var0.f_11, vVar32, fVar35);
	func_907(&Var0, uVar31);
}

void func_624(var uParam0, char* sParam1, bool bParam2)
{
	if (!_does_anim_scene_exist(uParam0->f_1))
	{
		iVar4 = -1;
		if (sParam1->f_733 > 0)
		{
			iVar4 = func_908(sParam1);
			if (iVar4 == -1)
			{
			}
			else
			{
				Var0 = { sParam1->f_632[iVar4]->f_1 };
			}
		}
		uParam0->f_1 = _create_anim_scene(sParam1, sParam1->f_8, &Var0, false, true);
		uParam0->f_3 = iVar4;
		if (iVar4 != -1)
		{
			uParam0->f_4 = func_514(sParam1->f_632[iVar4]->f_10);
		}
	}
	if ((_does_anim_scene_exist(uParam0->f_1) && bParam2) && uParam0->f_2 & 2 == 0)
	{
		load_anim_scene(uParam0->f_1);
		uParam0->f_2 |= 2;
	}
}

bool func_625(var uParam0, char* sParam1)
{
	if (sParam1->f_13.f_6 == 0)
	{
		return false;
	}
	if (uParam0->f_2 & 8 != 0)
	{
		return false;
	}
	return true;
}

void func_626(var uParam0, char* sParam1)
{
	if (uParam0->f_2 & 8 != 0 && func_77())
	{
		return;
	}
	if (!_does_anim_scene_exist(uParam0->f_1))
	{
		return;
	}
	if (func_77())
	{
		switch (sParam1->f_13.f_6)
		{
			case 1878973084:
				if (func_178(sParam1->f_13))
				{
					return;
				}
				set_anim_scene_origin(uParam0->f_1, sParam1->f_13, 0f, 0f, sParam1->f_13.f_3, 2);
				uParam0->f_2 |= 8;
				break;
			case 1331969070:
				if (does_entity_exist(sParam1->f_13.f_4))
				{
					if (!_0xb6cbd40f8ea69e8a(get_object_index_from_entity_index(sParam1->f_13.f_4)))
					{
						return;
					}
					if (!_is_anim_scene_metadata_loaded(uParam0->f_1, false))
					{
						return;
					}
					attach_anim_scene_to_entity(uParam0->f_1, sParam1->f_13.f_4, get_entity_bone_index_by_name(sParam1->f_13.f_4, &(sParam1->f_13.f_9)));
					uParam0->f_2 |= 8;
					return;
				}
				if (sParam1->f_13.f_7 & 2 != 0)
				{
					if (sParam1->f_13.f_5 == 0)
					{
						sParam1->f_13.f_5 = _0x6f3068258a499e52(sParam1->f_13.f_8, sParam1->f_13, 15);
					}
					else if (_0x1ff441d7954f8709(sParam1->f_13.f_5))
					{
						sParam1->f_13.f_4 = _0x4735e2a4bb83d9da(sParam1->f_13.f_5);
					}
				}
				else if (sParam1->f_13.f_7 & 4 != 0)
				{
					bVar0 = sParam1->f_13.f_7 & 8 != false;
					sParam1->f_13.f_4 = func_909(sParam1->f_13, sParam1->f_13.f_3, sParam1->f_13.f_8, bVar0, 0);
				}
				break;
			case 747721187:
				if (_does_scenario_point_exist(sParam1->f_13.f_14))
				{
					set_anim_scene_origin(uParam0->f_1, _get_scenario_point_coords(sParam1->f_13.f_14, true), 0f, 0f, _get_scenario_point_heading(sParam1->f_13.f_14, true), 2);
					uParam0->f_2 |= 8;
				}
				else
				{
					iVar2 = _get_scenario_point_close_to_coords(sParam1->f_13, sParam1->f_13.f_3, &uVar3, 3);
					iVar1 = 0;
					while (iVar1 <= (iVar2 - 1))
					{
						if (!_does_scenario_point_exist(&(uVar3[iVar1])))
						{
						}
						else if (_get_scenario_point_type(&(uVar3[iVar1])) != sParam1->f_13.f_13)
						{
						}
						else
						{
							sParam1->f_13.f_14 = &uVar3[iVar1];
						}
						iVar1++;
					}
				}
				break;
			default:
				break;
		}
	}
	else
	{
		if (is_ped_male(get_player_ped(player_id())))
		{
			switch (Global_1071686->f_28341.f_2)
			{
				case 0:
					set_anim_scene_origin(uParam0->f_1, 1233.252f, -1298.268f, 77.573f, 0f, 0f, -99f, 2);
					break;
				case 1:
					break;
				case 2:
					set_anim_scene_origin(uParam0->f_1, -877.1f, -1320.217f, 44.631f, 0f, 0f, 35f, 2);
					break;
				case 3:
					set_anim_scene_origin(uParam0->f_1, -5229.448f, -3462.038f, -19.87f, 0f, 0f, 35f, 2);
					break;
				default:
					break;
			}
		}
		else
		{
			switch (Global_1071686->f_28341.f_2)
			{
				case 0:
					set_anim_scene_origin(uParam0->f_1, 1233.14f, -1298.34f, 77.573f, 0f, 0f, -99f, 2);
					break;
				case 1:
					break;
				case 2:
					set_anim_scene_origin(uParam0->f_1, -877.183f, -1320.217f, 44.631f, 0f, 0f, 35f, 2);
					break;
				case 3:
					set_anim_scene_origin(uParam0->f_1, -5229.545f, -3462.038f, -19.87f, 0f, 0f, 35f, 2);
					break;
				default:
					break;
			}
		}
		uParam0->f_2 |= 8;
	}
}

void func_627(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!func_910(uParam0))
	{
		return;
	}
	func_911(sParam1, uParam2, iParam5, iParam4);
	func_912(uParam0, sParam1, uParam2);
	func_913(uParam0, sParam1, 0);
	func_914(uParam0, sParam1);
	uParam0->f_2 |= 4;
	if (!bParam6)
	{
		if (sParam1->f_9 & 12288 != 0)
		{
			if (sParam1->f_9 & 8192 != 0)
			{
				sParam1->f_69 = get_game_timer();
				_0xe296208c273bd7f0(2000, 2000, 0, 17, 1, 0);
			}
		}
		func_247(uParam0, 6, iParam3, iParam4);
	}
}

void func_628(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	iVar2 = player_id();
	if (sParam1->f_9 & 8192 != 0)
	{
		_0xe296208c273bd7f0(2000, 2000, 0, 17, 1, 0);
		bVar5 = _0xa2b1c7ef759a63ce() >= 1f;
		bVar6 = true;
	}
	else if (sParam1->f_9 & 4096 != 0)
	{
		_0xe296208c273bd7f0(0, 2000, 0, 17, 1, 0);
		bVar5 = _0xa2b1c7ef759a63ce() >= 1f;
		bVar6 = true;
	}
	iVar1 = get_player_ped(iVar2);
	if (iParam4 != 0)
	{
		if (func_163() == iParam3)
		{
			if (get_script_task_status(iVar1, -208384378, true) == 0 || get_script_task_status(iVar1, -208384378, true) == 1)
			{
				return;
			}
			if (_is_ped_carrying(iVar1))
			{
				iVar3 = _get_first_entity_ped_is_carrying(iVar1);
				switch (func_340())
				{
					case 1:
					case 2:
						task_place_carried_entity_at_coord(iVar1, iVar3, get_entity_coords(iVar1, true, false), 1f, 0);
						break;
				}
				return;
			}
		}
	}
	if (sParam1->f_9 & 1024 != 0)
	{
		iVar4 = _0x849bd6c6314793d0(iVar1);
		if (does_entity_exist(iVar4))
		{
			if (is_entity_a_vehicle(iVar4))
			{
				iVar7 = get_script_task_status(iVar1, -828834893, true);
				if (iVar7 != 0 && iVar7 != 1)
				{
					task_leave_any_vehicle(iVar1, 0, 64);
				}
			}
			else
			{
				iVar7 = get_script_task_status(iVar1, 501393341, true);
				if (iVar7 != 0 && iVar7 != 1)
				{
					task_dismount_animal(iVar1, 64, 0, 0, 0, 0);
				}
			}
			return;
		}
	}
	if (sParam1->f_9 & 4 != 0)
	{
		func_915();
	}
	if (sParam1->f_9 & 64 != 0)
	{
		func_916(0);
	}
	if (sParam1->f_9 & 2048 != 0)
	{
		_close_all_apps();
	}
	if (sParam1->f_9 & 16384 != 0)
	{
		func_917();
	}
	if (sParam1->f_9 & 256 != 0)
	{
		func_918(0, 0, 1);
	}
	if (sParam1->f_9 & 2 != 0)
	{
		set_player_control(iVar2, false, 0, false);
	}
	if (!func_77())
	{
		switch (Global_1071686->f_28341.f_2)
		{
			case 3:
				func_919(-1948680487, 0f, 1);
				func_919(223773149, 0f, 1);
				break;
			case 2:
				func_919(2124421956, 0f, 1);
				func_919(1861385249, 0f, 1);
				break;
		}
	}
	iVar8 = func_355();
	if (iVar8 != 16)
	{
		if (bVar6 && !bVar5)
		{
			return;
		}
		if (iParam4 == 0)
		{
			func_920(0, 0, 0);
		}
		func_921(sParam1);
	}
	func_164(1);
	if (iParam4 == 0)
	{
		func_348(16);
		get_current_ped_weapon(iVar1, &iVar9, true, 0, false);
		get_current_ped_weapon(iVar1, &iVar10, true, 1, false);
		if ((iVar9 != -1569615261 && iVar9 != 0) || (iVar10 != -1569615261 && iVar10 != 0))
		{
			set_current_ped_weapon(iVar1, -1569615261, false, 0, false, false);
			set_current_ped_weapon(iVar1, -1569615261, false, 1, false, false);
			task_swap_weapon(iVar1, 0, 1, 0, 0);
		}
	}
	if (iParam5 == uParam0->f_4)
	{
		if (iParam5 != 16)
		{
			func_913(uParam0, sParam1, 1);
			uParam0->f_3 = &sParam1->f_734[iParam5];
			_set_anim_scene_playback_list_bool(uParam0->f_1, &(sParam1->f_632[&sParam1->f_734[iParam5]]->f_1), true);
			uParam0->f_4 = iParam5;
			start_anim_scene(uParam0->f_1);
		}
	}
	else if (iParam5 == -1)
	{
	}
	else if (_0x23e33cb9f4a3f547(uParam0->f_1, &(sParam1->f_632[&sParam1->f_734[iParam5]]->f_1)))
	{
		func_913(uParam0, sParam1, 1);
		_set_anim_scene_playback_list_bool(uParam0->f_1, &(sParam1->f_632[&sParam1->f_734[iParam5]]->f_1), true);
		uParam0->f_3 = &sParam1->f_734[iParam5];
		uParam0->f_4 = iParam5;
		start_anim_scene(uParam0->f_1);
	}
	else if (_0x0df57f86fe71dbe5(uParam0->f_1, &(sParam1->f_632[&sParam1->f_734[iParam5]]->f_1)))
	{
		return;
	}
	else
	{
		_0xdf7b5144e25cd3fe(uParam0->f_1, &(sParam1->f_632[&sParam1->f_734[iParam5]]->f_1));
		return;
	}
	_0x6339c1ea3979b5f7("default", "RDRO_Scripted_Cutscene_Scenes");
	iVar0 = 0;
	while (iVar0 <= (&sParam1->f_721[3] - 1))
	{
		add_entity_to_audio_mix_group(&(sParam1->f_227[iVar0]), "RDRO_Scripted_Cutscene_Focus_Entity_Group", 0f);
		set_ped_can_use_auto_conversation_lookat(&(sParam1->f_227[iVar0]), true);
		iVar0++;
	}
	if (!func_77())
	{
		if (!is_srl_loaded())
		{
			return;
		}
		begin_srl();
	}
	if (iParam4 == 0)
	{
		_cascadeshadows_set_type("CSM_ST_SOFT16");
	}
	func_247(uParam0, 7, iParam3, iParam4);
}

void func_629(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, var uParam9, var uParam10, var uParam11)
{
	if (sParam1->f_9 & 8192 != 0)
	{
		_0xe296208c273bd7f0(2000, 2000, 0, 17, 1, 0);
	}
	else if (sParam1->f_9 & 4096 != 0)
	{
		_0xe296208c273bd7f0(0, 2000, 0, 17, 1, 0);
	}
	if (sParam1->f_9 & 1 != 0)
	{
		if (!network_is_player_in_mp_cutscene(player_id()))
		{
			_0x4b05b97ba46f419d(0);
			if (_0x4822a65d5af64e69(uParam0->f_1) > 0)
			{
				network_set_in_mp_cutscene(true, true, 32, true);
			}
		}
	}
	if (!func_77())
	{
		set_srl_time(_get_anim_scene_time(uParam0->f_1));
	}
	if (sParam1->f_9 & 16384 != 0)
	{
		func_917();
	}
	if (uParam0->f_2 & 32 == 0)
	{
		if (_is_anim_scene_loaded(uParam0->f_1, true, false))
		{
			if (_is_anim_scene_started(uParam0->f_1, false))
			{
				if (iParam4 != 16)
				{
					if (iParam3 == 0)
					{
						iVar0 = 0;
						while (iVar0 <= (&sParam1->f_721[3] - 1))
						{
							switch (sParam1->f_227[iVar0]->f_1.f_9)
							{
								case -446093729:
								case 960851950:
									_0x4f806a6cfed89468(&(sParam1->f_227[iVar0]), 0);
									uParam0->f_2 |= 32;
									break;
							}
							iVar0++;
						}
					}
				}
			}
		}
	}
	if (iParam4 != uParam0->f_4)
	{
		if (iParam4 == -1)
		{
		}
		else if (&sParam1->f_734[iParam4] != -1)
		{
			if (_0x23e33cb9f4a3f547(uParam0->f_1, &(sParam1->f_632[&sParam1->f_734[iParam4]]->f_1)))
			{
				if (iParam4 == 16)
				{
					if (func_922(uParam0, sParam1, uParam11))
					{
						_set_anim_scene_playback_list_bool(uParam0->f_1, &(sParam1->f_632[&sParam1->f_734[iParam4]]->f_1), true);
						uParam0->f_4 = iParam4;
						uParam0->f_3 = &sParam1->f_734[iParam4];
						if (!_is_anim_scene_started(uParam0->f_1, false))
						{
							iVar0 = 0;
							while (iVar0 <= (&sParam1->f_721[3] - 1))
							{
								switch (sParam1->f_227[iVar0]->f_1.f_9)
								{
									case -446093729:
									case 960851950:
										if (iParam3 == 0)
										{
											_0x4f806a6cfed89468(&(sParam1->f_227[iVar0]), 0);
										}
										break;
								}
								iVar0++;
							}
							if (iParam3 == 0)
							{
								func_920(0, 0, 0);
							}
							func_921(sParam1);
							func_913(uParam0, sParam1, 1);
							uParam0->f_4 = iParam4;
							uParam0->f_3 = &sParam1->f_734[iParam4];
							_set_anim_scene_playback_list_bool(uParam0->f_1, &(sParam1->f_632[&sParam1->f_734[iParam4]]->f_1), true);
							start_anim_scene(uParam0->f_1);
							return;
						}
					}
					else
					{
						return;
					}
				}
				else
				{
					_set_anim_scene_playback_list_bool(uParam0->f_1, &(sParam1->f_632[&sParam1->f_734[iParam4]]->f_1), true);
					uParam0->f_4 = iParam4;
					uParam0->f_3 = &sParam1->f_734[iParam4];
					if (!_is_anim_scene_started(uParam0->f_1, false))
					{
						iVar0 = 0;
						while (iVar0 <= (&sParam1->f_721[3] - 1))
						{
							switch (sParam1->f_227[iVar0]->f_1.f_9)
							{
								case -446093729:
								case 960851950:
									if (iParam3 == 0)
									{
										_0x4f806a6cfed89468(&(sParam1->f_227[iVar0]), 0);
									}
									break;
							}
							iVar0++;
						}
						if (iParam3 == 0)
						{
							func_920(0, 0, 0);
						}
						func_921(sParam1);
						func_913(uParam0, sParam1, 1);
						uParam0->f_4 = iParam4;
						uParam0->f_3 = &sParam1->f_734[iParam4];
						_set_anim_scene_playback_list_bool(uParam0->f_1, &(sParam1->f_632[&sParam1->f_734[iParam4]]->f_1), true);
						start_anim_scene(uParam0->f_1);
						return;
					}
				}
			}
			else
			{
				if (!_0x0df57f86fe71dbe5(uParam0->f_1, &(sParam1->f_632[&sParam1->f_734[iParam4]]->f_1)))
				{
					_0xdf7b5144e25cd3fe(uParam0->f_1, &(sParam1->f_632[&sParam1->f_734[iParam4]]->f_1));
				}
				if (iParam4 == 16)
				{
					if (!_is_anim_scene_started(uParam0->f_1, false))
					{
						return;
					}
				}
			}
		}
	}
	if (sParam1->f_9 & 16 != 0)
	{
		func_923();
	}
	if (sParam1->f_9 & 4 != 0)
	{
		_0xc9caeaeec1256e54(-1679307491);
		func_915();
		_uiprompt_enable_prompt_type_this_frame(6);
		set_ped_reset_flag(get_player_ped(player_id()), 175, true);
	}
	if (sParam1->f_9 & 32 != 0)
	{
		func_924();
	}
	if (sParam1->f_9 & 256 != 0)
	{
		func_918(0, 0, 1);
	}
	set_ped_reset_flag(get_player_ped(player_id()), 188, false);
	if (iParam3 == 0)
	{
		if (_get_anim_scene_duration(uParam0->f_1) / 2f) <= _get_anim_scene_time(uParam0->f_1)
		{
			if (sParam1->f_28.f_36 > 0)
			{
				if (uParam0->f_2 & 1 == 0)
				{
					func_925(sParam1);
					uParam0->f_2 |= 1;
				}
				if (uParam0->f_2 & 1 != 0 && uParam0->f_2 & 64 == 0)
				{
					func_925(sParam1);
					uParam0->f_2 |= 64;
				}
			}
		}
	}
	if (iParam3 == 0)
	{
		if (func_733() & 2 != 0)
		{
			if (func_433() == _0x901e0dc25080c8b9(player_id()))
			{
				fVar2 = _get_anim_scene_duration(uParam0->f_1);
				fVar3 = _get_anim_scene_time(uParam0->f_1);
				if (fVar2 - fVar3) <= to_float(2)
				{
					if ((!is_screen_faded_out() || !is_screen_fading_out()) && func_432(player_id(), 16))
					{
						do_screen_fade_out(2000);
					}
				}
			}
			else if ((is_screen_faded_out() || is_screen_fading_out()) && !func_434(255))
			{
				do_screen_fade_in(2000);
			}
		}
	}
	if (((_is_anim_scene_active(uParam0->f_1) || _is_anim_scene_finished(uParam0->f_1, false)) || !_is_anim_scene_started(uParam0->f_1, false)) || func_926(uParam0, sParam1))
	{
		if (sParam1->f_9 & 2 != 0)
		{
			set_player_control(player_id(), true, 0, false);
		}
		if (!func_77())
		{
			end_srl();
		}
		if (iParam3 == 0)
		{
			_cascadeshadows_reset_type();
		}
		iVar0 = 0;
		while (iVar0 <= (&sParam1->f_721[3] - 1))
		{
			remove_entity_from_audio_mix_group(&(sParam1->f_227[iVar0]), 0f);
			iVar0++;
		}
		_0x9428447ded71fc7e("RDRO_Scripted_Cutscene_Scenes");
		if (sParam1->f_28.f_36 > 0)
		{
			bVar1 = sParam1->f_9 & 512 != false;
			func_927(sParam1, uParam11, 1, bVar1);
			uParam0->f_2 |= 65;
		}
		if (sParam1->f_9 & 1 != 0)
		{
			func_928(0);
			network_set_in_mp_cutscene(false, false, 32, true);
		}
		if (iParam2 == func_163())
		{
			switch (iParam3)
			{
				case 0:
					if (_0x901e0dc25080c8b9(player_id()) == func_433())
					{
						if (func_77())
						{
							_unlock_set_new(func_92(iParam5), false);
							func_756(func_92(iParam5), 1);
							func_757(iParam5);
							func_758(4);
						}
						func_759(iParam5);
					}
					func_164(4);
					break;
				case 1:
				case 2:
					if (!is_string_null_or_empty(&uParam8) && func_751(&uParam8))
					{
						switch (func_539())
						{
							case 2:
								func_164(4);
								break;
							case 4:
								break;
							default:
								func_164(3);
								break;
						}
					}
					else
					{
						func_164(4);
					}
					break;
				default:
					break;
			}
		}
		func_247(uParam0, 8, iParam2, iParam3);
		*iParam7 = 1;
	}
	else if (iParam2 == func_163())
	{
		switch (iParam3)
		{
			case 0:
				if (func_929(iParam5, sParam1))
				{
					func_759(iParam5);
				}
				break;
		}
	}
}

void func_630(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4)
{
	if (!_does_anim_scene_exist(uParam0->f_1))
	{
		func_247(uParam0, 9, iParam3, iParam4);
		return;
	}
	bVar0 = (uParam0->f_3 > -1 && sParam1->f_632[uParam0->f_3]) // PointerArith;
	func_930(uParam0, sParam1, bVar0);
	func_931(uParam0, sParam1);
	func_932(uParam0, sParam1, uParam2);
	uParam0->f_2 = (uParam0->f_2 - uParam0->f_2 & 4);
	func_247(uParam0, 9, iParam3, iParam4);
}

void func_631(var uParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam1))
	{
		*iParam2 = -1;
		return;
	}
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_112 - 1))
	{
		if (&uParam0->f_112.f_200[iVar0] == iParam1)
		{
			*iParam2 = iVar0;
			return;
		}
		iVar0++;
	}
	*iParam2 = -1;
}

void func_632(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_933(uParam0, uParam1, iParam2);
	if (!bParam4)
	{
		if (get_script_task_status(&(uParam0->f_112.f_200[iParam2]), -76381094, false) == 1 || get_script_task_status(&(uParam0->f_112.f_200[iParam2]), -76381094, false) == 0)
		{
			return;
		}
		if (_0x3ab6c7b0bb0df4b1(&(uParam0->f_112.f_200[iParam2]), -1))
		{
			return;
		}
		if (!_does_scenario_point_exist(uParam0->f_112.f_200[iParam2]->f_47))
		{
			return;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_112.f_200[iParam2]->f_5.f_16 - 1))
	{
		if (&uParam0->f_112.f_200[iParam2]->f_5.f_12[iVar0] == -451340701)
		{
			uVar5[iVar1] = &uParam0->f_112.f_200[iParam2]->f_5[iVar0];
			uVar9[iVar1] = &uParam0->f_112.f_200[iParam2]->f_5.f_4[iVar0];
			get_current_ped_weapon(&(uParam0->f_112.f_200[iParam2]), &iVar3, true, &(uParam0->f_112.f_200[iParam2]->f_5.f_4[iVar0]), false);
			if (iVar3 != &uParam0->f_112.f_200[iParam2]->f_5[iVar0])
			{
				set_current_ped_weapon(&(uParam0->f_112.f_200[iParam2]), &(uParam0->f_112.f_200[iParam2]->f_5[iVar0]), true, &(uParam0->f_112.f_200[iParam2]->f_5.f_4[iVar0]), false, false);
				bVar4 = true;
			}
			iVar1++;
		}
		iVar0++;
	}
	if (bVar4)
	{
		task_swap_weapon(&(uParam0->f_112.f_200[iParam2]), 1, 1, 0, 0);
	}
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		get_current_ped_weapon(&(uParam0->f_112.f_200[iParam2]), &iVar3, true, &(uVar9[iVar0]), false);
		if (&uVar5[iVar0] != iVar3)
		{
			return;
		}
		iVar0++;
	}
	if (!_0x9c54041bb66bcf9e(&(uParam0->f_112.f_200[iParam2]), uParam0->f_112.f_200[iParam2]->f_47))
	{
		switch (uParam0->f_112.f_200[iParam2]->f_2)
		{
			case 960851950:
				_0x4f806a6cfed89468(&(uParam0->f_112.f_200[iParam2]), 1);
				break;
			case -446093729:
				_0x4f806a6cfed89468(&(uParam0->f_112.f_200[iParam2]), 1);
				vVar21 = { 0f, 0f, 0f };
				vVar24 = { -0.0040397f, -0.00102244f, 0.00599561f };
				iVar2 = 0;
				while (iVar2 <= (uParam0->f_948 - 1))
				{
					if (uParam0->f_948.f_1[iVar2]->f_2 == -967333571)
					{
						detach_entity(&(uParam0->f_948.f_1[iVar2]), false, true);
						attach_entity_to_entity(&(uParam0->f_948.f_1[iVar2]), &(uParam0->f_112.f_200[iParam2]), get_ped_bone_index(&(uParam0->f_112.f_200[iParam2]), 9650), vVar24, vVar21, true, true, false, false, 2, true, false, false);
					}
					iVar2++;
				}
				break;
		}
		Var13 = { func_934(uParam0, iParam2) };
		if (uParam0->f_112.f_200[iParam2]->f_47.f_56.f_20 > 0)
		{
			iVar2 = 0;
			while (iVar2 <= (uParam0->f_112.f_200[iParam2]->f_47.f_56.f_20 - 1))
			{
				if (does_entity_exist(&(uParam0->f_112.f_200[iParam2]->f_47.f_56[iVar2])))
				{
					if (_0x2b02db082258625f(&(uParam0->f_112.f_200[iParam2]), &(uParam0->f_112.f_200[iParam2]->f_47.f_56[iVar2]), &(uParam0->f_112.f_200[iParam2]->f_47.f_56[iVar2]->f_1), _get_scenario_point_type(uParam0->f_112.f_200[iParam2]->f_47), &Var13, 1))
					{
					}
				}
				iVar2++;
			}
		}
		func_935(uParam0, uParam1, iParam2);
		_task_use_scenario_point(&(uParam0->f_112.f_200[iParam2]), uParam0->f_112.f_200[iParam2]->f_47, &Var13, 0, bParam3, !bParam3, 0, false, 0.4f, false);
		if (bParam6)
		{
			_0x2208438012482a1a(&(uParam0->f_112.f_200[iParam2]), false, false);
		}
		set_ped_can_use_auto_conversation_lookat(&(uParam0->f_112.f_200[iParam2]), false);
	}
}

void func_633(var uParam0, var uParam1, int iParam2)
{
	if (uParam1->f_124.f_17 == -1)
	{
		return;
	}
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
	Var0.f_4 = 21030;
	Var0.f_3 = &uParam0->f_112.f_7[uParam1->f_124.f_17];
	Var0.f_19 = 4;
	Var0.f_20 = 3;
	Var0.f_21 = 4;
	Var0.f_22 = 3;
	Var0.f_8 = 4;
	Var0.f_7 = iParam2;
	func_867(&(Var0.f_5), 1);
	_0x66f9eb44342bb4c5(*uParam1, &Var0);
}

void func_634(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	uParam0->f_25.f_3 = player_id();
	uParam0->f_25.f_5 = _0x901e0dc25080c8b9(uParam0->f_25.f_3);
	uParam0->f_25.f_4 = _0x4be6c13a45cca8ec(uParam0->f_25.f_5);
	func_936(uParam0, iParam2);
	switch (uParam0->f_112.f_200[iParam2]->f_47.f_2)
	{
		case 0:
			break;
		case -1103929724:
		case 136102321:
			if (func_646(uParam0, uParam1, iParam2))
			{
				func_937(uParam0, uParam1, iParam2, bParam4);
				if (func_23(func_259()) || (!func_938(*uParam1, 7) && uParam0->f_112.f_835 == 0))
				{
					func_632(uParam0, uParam1, iParam2, bParam3, bParam5, -1f, 0);
				}
			}
			else
			{
				func_937(uParam0, uParam1, iParam2, bParam4);
				func_632(uParam0, uParam1, iParam2, 0, 0, 1065353216, 0);
			}
			break;
		case 342372581:
			func_939(uParam0, uParam1, iParam2);
			break;
		default:
			break;
	}
}

void func_635(var uParam0)
{
	if (_does_anim_scene_exist(uParam0->f_1))
	{
		_delete_anim_scene(uParam0->f_1);
	}
	uParam0->f_1 = -1;
	uParam0->f_2 = (uParam0->f_2 - uParam0->f_2 & 14);
	uParam0->f_3 = -1;
	uParam0->f_4 = -1;
}

void func_636(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	func_940(sParam1);
	func_941(sParam1);
	func_247(uParam0, 2, iParam2, iParam3);
}

void func_637(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	if (!func_942(sParam1))
	{
		return;
	}
	if (!func_943(sParam1))
	{
		return;
	}
	func_247(uParam0, 3, iParam2, iParam3);
}

void func_638(var uParam0, char* sParam1, int iParam2, int iParam3, vector3 vParam4)
{
	iVar0 = func_944(sParam1, vParam4);
	if (iVar0 != 2)
	{
		return;
	}
	iVar0 = func_945(sParam1, vParam4);
	if (iVar0 != 2)
	{
		return;
	}
	func_247(uParam0, 4, iParam2, iParam3);
}

void func_639(var uParam0, var uParam1, int iParam2)
{
	if (iParam2 >= uParam0->f_112)
	{
		return;
	}
	func_946(uParam0, uParam1, iParam2);
	func_947(uParam0, uParam1, iParam2);
	func_948(&(uParam0->f_112.f_200[iParam2]->f_1), 0, *uParam1, iParam2);
}

void func_640(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_112.f_200[iParam2]->f_2 == 0)
	{
		if (!func_949(uParam0, uParam1, iParam2))
		{
			return;
		}
		request_model(uParam0->f_112.f_200[iParam2]->f_2, false);
	}
	if (!has_model_loaded(uParam0->f_112.f_200[iParam2]->f_2))
	{
		return;
	}
	func_948(&(uParam0->f_112.f_200[iParam2]->f_1), 1, *uParam1, iParam2);
}

void func_641(var uParam0, var uParam1, int iParam2)
{
	if (!func_950(uParam0, uParam1, iParam2))
	{
		return;
	}
	if (func_951(uParam0, iParam2, 0))
	{
		if (func_646(uParam0, uParam1, iParam2))
		{
			func_313(uParam0, uParam1, iParam2);
		}
		if (func_952(uParam0, iParam2, 303108068, 0))
		{
			func_953(*uParam1, &(uParam0->f_112.f_200[iParam2]), 303108068);
		}
		else
		{
			func_953(*uParam1, &(uParam0->f_112.f_200[iParam2]), -910931556);
		}
		func_954();
		if (func_77())
		{
			func_307(uParam0, uParam1, iParam2, 1);
		}
	}
	func_948(&(uParam0->f_112.f_200[iParam2]->f_1), 2, *uParam1, iParam2);
}

void func_642(var uParam0, var uParam1, int iParam2)
{
	if (!does_entity_exist(&(uParam0->f_112.f_200[iParam2])))
	{
		func_948(&(uParam0->f_112.f_200[iParam2]->f_1), 1, *uParam1, iParam2);
		return;
	}
	if (!func_646(uParam0, uParam1, iParam2))
	{
		func_948(&(uParam0->f_112.f_200[iParam2]->f_1), 3, *uParam1, iParam2);
		return;
	}
	if (func_168(&(uParam0->f_67.f_27), 1))
	{
		func_169(&(uParam0->f_67.f_26), 0);
		if (uParam0->f_67.f_26 == -1)
		{
			func_171(&(uParam0->f_67.f_27), 1, func_170(*uParam1));
		}
		else
		{
			return;
		}
	}
	iVar0 = 0;
	if (!func_177(uParam1->f_1, 0))
	{
		iVar0 |= 2;
	}
	uParam0->f_67.f_26 = func_955(&(uParam0->f_112.f_200[iParam2]), &(uParam0->f_67.f_2[0]), iVar0);
	if (uParam0->f_67.f_26 == -1)
	{
		return;
	}
	func_251(&(uParam0->f_67.f_27), 1, func_170(*uParam1));
	func_948(&(uParam0->f_112.f_200[iParam2]->f_1), 3, *uParam1, iParam2);
}

void func_643(var uParam0, var uParam1, int iParam2)
{
	if (func_956(uParam0, uParam1, iParam2, 0))
	{
		func_948(&(uParam0->f_112.f_200[iParam2]->f_1), 5, *uParam1, iParam2);
		return;
	}
	Var0.f_28 = 3;
	Var0.f_28.f_1 = -1;
	Var0.f_28.f_1.f_10 = 2;
	Var0.f_28.f_1.f_10.f_1.f_1 = -1;
	Var0.f_28.f_1.f_10.f_1.f_2.f_1 = -1;
	Var0.f_28.f_1.f_16 = -1;
	Var0.f_28.f_1.f_16.f_10 = 2;
	Var0.f_28.f_1.f_16.f_10.f_1.f_1 = -1;
	Var0.f_28.f_1.f_16.f_10.f_1.f_2.f_1 = -1;
	Var0.f_28.f_1.f_16.f_16 = -1;
	Var0.f_28.f_1.f_16.f_16.f_10 = 2;
	Var0.f_28.f_1.f_16.f_16.f_10.f_1.f_1 = -1;
	Var0.f_28.f_1.f_16.f_16.f_10.f_1.f_2.f_1 = -1;
	Var0.f_28.f_49 = -1;
	Var0.f_28.f_50 = -1;
	Var0.f_81 = 2;
	if (!func_957(uParam1, iParam2, &Var0))
	{
		return;
	}
	iVar102 = 2;
	if (Var0.f_28[iVar102]->f_9 == 0)
	{
		iVar102 = 1;
		if (Var0.f_28[iVar102]->f_9 == 0)
		{
			iVar102 = 0;
		}
	}
	if (func_951(uParam0, iParam2, 0))
	{
		iVar103 = 273;
	}
	else
	{
		func_948(&(uParam0->f_112.f_200[iParam2]->f_1), 4, *uParam1, iParam2);
		return;
	}
	if (_request_scenario_type(Var0, iVar103, uParam0->f_112.f_200[iParam2]->f_2, Var0.f_28[iVar102]->f_9))
	{
	}
	if (!_has_scenario_type_loaded(Var0, false))
	{
		return;
	}
	func_948(&(uParam0->f_112.f_200[iParam2]->f_1), 4, *uParam1, iParam2);
}

void func_644(var uParam0, var uParam1, int iParam2)
{
	if (func_956(uParam0, uParam1, iParam2, 0))
	{
		func_948(&(uParam0->f_112.f_200[iParam2]->f_1), 5, *uParam1, iParam2);
		return;
	}
	Var1.f_28 = 3;
	Var1.f_28.f_1 = -1;
	Var1.f_28.f_1.f_10 = 2;
	Var1.f_28.f_1.f_10.f_1.f_1 = -1;
	Var1.f_28.f_1.f_10.f_1.f_2.f_1 = -1;
	Var1.f_28.f_1.f_16 = -1;
	Var1.f_28.f_1.f_16.f_10 = 2;
	Var1.f_28.f_1.f_16.f_10.f_1.f_1 = -1;
	Var1.f_28.f_1.f_16.f_10.f_1.f_2.f_1 = -1;
	Var1.f_28.f_1.f_16.f_16 = -1;
	Var1.f_28.f_1.f_16.f_16.f_10 = 2;
	Var1.f_28.f_1.f_16.f_16.f_10.f_1.f_1 = -1;
	Var1.f_28.f_1.f_16.f_16.f_10.f_1.f_2.f_1 = -1;
	Var1.f_28.f_49 = -1;
	Var1.f_28.f_50 = -1;
	Var1.f_81 = 2;
	if (!func_957(uParam1, iParam2, &Var1))
	{
		return;
	}
	if (!func_958(uParam0, uParam1, iParam2, &Var1))
	{
		return;
	}
	iVar0 = _get_entity_scenario_point_is_attached_to(uParam0->f_112.f_200[iParam2]->f_47);
	if (does_entity_exist(iVar0))
	{
		set_entity_invincible(iVar0, true);
		set_entity_proofs(iVar0, 127, false);
	}
	func_948(&(uParam0->f_112.f_200[iParam2]->f_1), 5, *uParam1, iParam2);
}

void func_645(var uParam0, var uParam1, int iParam2)
{
	if (!does_entity_exist(&(uParam0->f_112.f_200[iParam2])))
	{
		func_948(&(uParam0->f_112.f_200[iParam2]->f_1), 1, *uParam1, iParam2);
		return;
	}
	if (!func_956(uParam0, uParam1, iParam2, 1))
	{
		func_948(&(uParam0->f_112.f_200[iParam2]->f_1), 4, *uParam1, iParam2);
		return;
	}
	_0xcd9e5f94a2f38683(&(uParam0->f_112.f_200[iParam2]), 0);
	if (uParam0->f_112.f_200[iParam2]->f_3 & 16 != 0)
	{
		if (uParam0->f_112.f_200[iParam2]->f_4 & 1 != 0)
		{
			if (vdist(func_137(player_id()), get_entity_coords(&(uParam0->f_112.f_200[iParam2]), true, false)) > 5f)
			{
				func_312(uParam0, uParam1, iParam2);
				_0xe98d55c5983f2509(&(uParam0->f_112.f_200[iParam2]));
				uParam0->f_112.f_200[iParam2]->f_4 = (uParam0->f_112.f_200[iParam2]->f_4 - uParam0->f_112.f_200[iParam2]->f_4 & 1);
			}
		}
		else if (vdist(func_137(player_id()), get_entity_coords(&(uParam0->f_112.f_200[iParam2]), true, false)) < 5f)
		{
			func_313(uParam0, uParam1, iParam2);
			_0x870708a6e147a9ad(&(uParam0->f_112.f_200[iParam2]), "", 2f, 2f, 0, 0, 0, 0, 0, -1);
			uParam0->f_112.f_200[iParam2]->f_4 |= 1;
		}
	}
}

bool func_646(var uParam0, var uParam1, int iParam2)
{
	return func_354(uParam0, uParam1, 0) == iParam2;
}

bool func_647(var uParam0, var uParam1)
{
	if (func_340() == -1)
	{
		if (func_354(uParam0, uParam1, 0) != -1)
		{
			if (does_entity_exist(&(uParam0->f_112.f_200[func_354(uParam0, uParam1, 0)])))
			{
				return true;
			}
		}
	}
	return false;
}

int func_648(int iParam0, int iParam1)
{
	if (!func_959())
	{
		return 0;
	}
	if (!func_960(iParam0, 8))
	{
		return 1;
	}
	if (func_960(iParam0, 64))
	{
		return 1;
	}
	if (func_23(func_259()))
	{
		return 1;
	}
	if (func_687(iParam1))
	{
		return 1;
	}
	return 0;
}

bool func_649(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	func_961(uParam0, uParam1, iParam2, iParam3);
	if (func_23(func_259()) && uParam0->f_112.f_835 > 0)
	{
		func_962(uParam0, uParam1, 0);
	}
	else if (!func_959())
	{
		func_963(uParam0, uParam1, iParam2, iParam3);
	}
	else if (!bParam4)
	{
		if (!func_297(*uParam1, 2))
		{
			bParam4 = true;
		}
	}
	switch (uParam0->f_112.f_835)
	{
		case 0:
			func_400(&(uParam0->f_4034.f_114), 8, func_93(uParam1->f_1));
			if (func_964(*uParam1, 8))
			{
				func_582(iParam3, 32);
			}
			else
			{
				func_358(iParam3, 32);
			}
			if (bParam4)
			{
				if (func_960(*uParam1, 64))
				{
					func_533(*uParam1, 64);
				}
				return true;
			}
			else if (func_959())
			{
				func_965(uParam0, uParam1);
				func_962(uParam0, uParam1, 1);
			}
			break;
		case 1:
			set_ped_can_play_gesture_anims(&(uParam0->f_112.f_200[iParam2]), 0, 1);
			func_582(iParam3, 32);
			if ((func_694(uParam0, -1920806061, func_966(uParam1)) || func_694(uParam0, -358693017, func_966(uParam1))) || func_694(uParam0, 1910527460, func_966(uParam1)))
			{
				if (!func_603(func_92(uParam1->f_2)))
				{
					iVar0 = func_967(uParam0);
					if ((func_718(uParam0, -1920806061) || func_718(uParam0, -358693017)) || func_718(uParam0, 1910527460))
					{
						if ((iVar0 == -1920806061 || iVar0 == -358693017) || iVar0 == 1910527460)
						{
						}
						else
						{
							Jump @469; //curOff = 463
							Jump @1151; //curOff = 466
							if (func_967(uParam0) != 0 && func_967(uParam0) != 2002222928)
							{
							}
							else
							{
								func_421(&(uParam0->f_112.f_200[iParam2]->f_124.f_25), 512);
								if (func_968(uParam0, uParam1))
								{
									func_358(iParam3, 32);
									if (func_969(uParam0, 16))
									{
										func_632(uParam0, uParam1, iParam2, 0, 1, -1f, 0);
										func_962(uParam0, uParam1, 3);
									}
									else
									{
										func_962(uParam0, uParam1, 3);
									}
								}
								Jump @1151; //curOff = 589
								set_ped_can_play_gesture_anims(&(uParam0->f_112.f_200[iParam2]), 0, 1);
								func_582(iParam3, 32);
								func_421(&(uParam0->f_112.f_200[iParam2]->f_124.f_25), 512);
								if (func_970(uParam0, uParam1, 13, 1))
								{
									func_358(iParam3, 32);
									func_962(uParam0, uParam1, 3);
								}
								Jump @1151; //curOff = 668
								func_414(&(uParam0->f_112.f_200[iParam2]->f_124.f_25), 512);
								if (func_971(uParam0) == 1)
								{
									func_972(uParam0, uParam1);
									func_765(uParam0, -1);
								}
								if (!func_415(uParam0, 7))
								{
									if (func_718(uParam0, 2093717520))
									{
										if (func_967(uParam0) != 2093717520)
										{
											if (func_973(uParam0))
											{
												func_974(uParam0, uParam1, 1);
											}
										}
									}
									else if (func_967(uParam0) != 2093717520)
									{
										if ((get_game_timer() - uParam0->f_112.f_832) >= 10000)
										{
											func_974(uParam0, uParam1, 1);
										}
									}
								}
								func_358(iParam3, 32);
								if (func_969(uParam0, 16))
								{
									if (bParam4)
									{
										if (func_959())
										{
											func_962(uParam0, uParam1, 4);
										}
									}
								}
								else if (func_959())
								{
									if (func_975(uParam0, uParam1, bParam4))
									{
										func_582(iParam3, 32);
										func_962(uParam0, uParam1, 4);
									}
								}
								Jump @1151; //curOff = 900
								func_400(&(uParam0->f_4034.f_114), 8, func_93(uParam1->f_1));
								func_582(iParam3, 32);
								if (func_970(uParam0, uParam1, 14, 0))
								{
									func_632(uParam0, uParam1, iParam2, 0, 1, -1f, 0);
									func_414(&(uParam0->f_112.f_200[iParam2]->f_124.f_25), 512);
									if (!bParam4)
									{
										func_972(uParam0, uParam1);
										func_962(uParam0, uParam1, 5);
										set_ped_can_play_gesture_anims(&(uParam0->f_112.f_200[iParam2]), 1, 1);
									}
									else
									{
										func_962(uParam0, uParam1, 0);
										set_ped_can_play_gesture_anims(&(uParam0->f_112.f_200[iParam2]), 1, 1);
										return true;
									}
								}
								Jump @1151; //curOff = 1052
								func_400(&(uParam0->f_4034.f_114), 8, func_93(uParam1->f_1));
								func_582(iParam3, 32);
								func_632(uParam0, uParam1, iParam2, 0, 0, -1f, 0);
								if (!bParam4)
								{
									if (func_959())
									{
										if (func_976(uParam0, uParam1, 0))
										{
											func_962(uParam0, uParam1, 2);
										}
									}
								}
								else
								{
									func_962(uParam0, uParam1, 0);
									return true;
								}
							}
						}
						return false;
					}
				}
			}
			default:
				break;
	}
}

void func_650(var uParam0, var uParam1)
{
	iVar0 = func_303(*uParam1);
	if (does_blip_exist(uParam0->f_112.f_825))
	{
		if (iVar0 == uParam0->f_112.f_825.f_1)
		{
			return;
		}
		else
		{
			remove_blip(&(uParam0->f_112.f_825));
		}
	}
	if (!func_977(uParam0, uParam1))
	{
		return;
	}
	uParam0->f_112.f_825 = _blip_add_for_entity(1699087565, &(uParam0->f_112.f_200[func_354(uParam0, uParam1, 0)]));
	set_blip_sprite(uParam0->f_112.f_825, 692310, false);
	uParam0->f_112.f_825.f_2 = func_978(uParam1->f_2);
	uParam0->f_112.f_825.f_1 = iVar0;
	_set_blip_name_from_player_string(uParam0->f_112.f_825, _create_var_string(0, _0xda9d7be231fe865f((uParam0->f_112.f_200[func_354(uParam0, uParam1, 0)])->f_2, 0, 0)));
}

void func_651(var uParam0, var uParam1)
{
	if (!does_blip_exist(uParam0->f_112.f_825))
	{
		return;
	}
	if (func_603(func_92(uParam1->f_2)))
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	if (iVar0 == uParam0->f_112.f_825.f_2)
	{
		return;
	}
	_set_blip_name_from_player_string(uParam0->f_112.f_825, _create_var_string(0, _0xda9d7be231fe865f((uParam0->f_112.f_200[func_354(uParam0, uParam1, 0)])->f_2, 0, 0)));
	uParam0->f_112.f_825.f_2 = iVar0;
}

void func_652(var uParam0, var uParam1)
{
	if (does_blip_exist(uParam0->f_112.f_825))
	{
		if (func_354(uParam0, uParam1, 0) == -1)
		{
			if (_blip_set_modifier(uParam0->f_112.f_825, -1186550032))
			{
			}
		}
		else if (!is_entity_visible(&(uParam0->f_112.f_200[func_354(uParam0, uParam1, 0)])))
		{
			if (_blip_set_modifier(uParam0->f_112.f_825, -1186550032))
			{
			}
		}
	}
	if (func_297(*uParam1, 2))
	{
		if (func_979(uParam1->f_1, 0, 16, 0))
		{
			func_173(uParam1->f_1, 16);
			if (does_blip_exist(uParam0->f_112.f_825))
			{
				if (_blip_set_modifier(uParam0->f_112.f_825, -1186550032))
				{
				}
			}
		}
		else if (func_29(*uParam1, 8))
		{
			func_173(uParam1->f_1, 16);
			if (does_blip_exist(uParam0->f_112.f_825))
			{
				if (_blip_set_modifier(uParam0->f_112.f_825, -1186550032))
				{
				}
			}
		}
		else if (func_687(uParam1->f_2))
		{
			func_173(uParam1->f_1, 16);
			if (does_blip_exist(uParam0->f_112.f_825))
			{
				if (_blip_set_modifier(uParam0->f_112.f_825, -1186550032))
				{
				}
			}
		}
		else if (func_354(uParam0, uParam1, 0) == -1)
		{
			func_173(uParam1->f_1, 16);
			if (does_blip_exist(uParam0->f_112.f_825))
			{
				if (_blip_set_modifier(uParam0->f_112.f_825, -1186550032))
				{
				}
			}
		}
		else if (is_entity_visible(&(uParam0->f_112.f_200[func_354(uParam0, uParam1, 0)])))
		{
			func_980(uParam1->f_1, 16);
			if (does_blip_exist(uParam0->f_112.f_825))
			{
				if (_set_blip_flash_style(uParam0->f_112.f_825, -1186550032))
				{
				}
			}
		}
		else
		{
			func_173(uParam1->f_1, 16);
			if (does_blip_exist(uParam0->f_112.f_825))
			{
				if (_blip_set_modifier(uParam0->f_112.f_825, -1186550032))
				{
				}
			}
		}
	}
	else
	{
		func_173(uParam1->f_1, 16);
		if (does_blip_exist(uParam0->f_112.f_825))
		{
			if (_blip_set_modifier(uParam0->f_112.f_825, -1186550032))
			{
			}
		}
	}
	switch (*uParam1)
	{
		case 0:
			iVar0 = 2;
			break;
		case 1:
			iVar0 = 4;
			break;
		case 2:
			iVar0 = 8;
			break;
		case 3:
			iVar0 = 16;
			break;
		default:
			break;
	}
	func_981(iVar0);
}

void func_653(var uParam0, var uParam1, int iParam2)
{
	if (iParam2 >= uParam0->f_948)
	{
		return;
	}
	func_982(uParam0, uParam1, iParam2);
	func_983(&(uParam0->f_948.f_1[iParam2]->f_1), 0, *uParam1, iParam2);
}

void func_654(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_948.f_1[iParam2]->f_2 == 0)
	{
		if (!func_984(uParam0, uParam1, iParam2))
		{
			return;
		}
		request_model(uParam0->f_948.f_1[iParam2]->f_2, false);
	}
	if (!has_model_loaded(uParam0->f_948.f_1[iParam2]->f_2))
	{
		return;
	}
	func_983(&(uParam0->f_948.f_1[iParam2]->f_1), 1, *uParam1, iParam2);
}

void func_655(var uParam0, var uParam1, int iParam2)
{
	if (!func_985(uParam0, uParam1, iParam2))
	{
		return;
	}
	if (func_951(uParam0, iParam2, 1))
	{
		if (func_986(uParam0, uParam1, iParam2))
		{
			func_311(uParam0, uParam1, iParam2);
		}
		if (func_952(uParam0, iParam2, 303108068, 1))
		{
			func_953(*uParam1, &(uParam0->f_948.f_1[iParam2]), 303108068);
		}
		else
		{
			func_953(*uParam1, &(uParam0->f_948.f_1[iParam2]), -910931556);
		}
	}
	if (uParam0->f_948.f_1[iParam2]->f_4 & 32 != 0)
	{
		func_987(*uParam1, &(uParam0->f_948.f_1[iParam2]), 0);
	}
	if (uParam0->f_948.f_1[iParam2]->f_4 & 64 != 0)
	{
		func_987(*uParam1, &(uParam0->f_948.f_1[iParam2]), 1);
	}
	if (uParam0->f_948.f_1[iParam2]->f_4 & 128 != 0)
	{
		func_987(*uParam1, &(uParam0->f_948.f_1[iParam2]), 2);
	}
	func_306(uParam0, uParam1, iParam2, 1);
	func_983(&(uParam0->f_948.f_1[iParam2]->f_1), 5, *uParam1, iParam2);
}

void func_656(var uParam0, var uParam1, int iParam2)
{
	if (!does_entity_exist(&(uParam0->f_948.f_1[iParam2])))
	{
		func_983(&(uParam0->f_948.f_1[iParam2]->f_1), 1, *uParam1, iParam2);
		return;
	}
	if (!uParam0->f_948.f_1[iParam2]->f_18)
	{
		vVar0 = { get_entity_coords(&(uParam0->f_948.f_1[iParam2]), true, false) };
		if (func_988(&(uParam0->f_948.f_1[iParam2]->f_18), uParam0->f_948.f_1[iParam2], vVar0, uParam0->f_948.f_1[iParam2]->f_19, uParam0->f_948.f_1[iParam2]->f_20))
		{
		}
	}
}

void func_657(var uParam0, var uParam1, int iParam2)
{
	func_989(&(uParam0->f_1695.f_1[iParam2]->f_26), 0, uParam1->f_1, iParam2);
}

void func_658(var uParam0, var uParam1, int iParam2)
{
	if (_does_anim_scene_exist(uParam0->f_1695.f_1[iParam2]->f_24))
	{
		_delete_anim_scene(uParam0->f_1695.f_1[iParam2]->f_24);
	}
	uParam0->f_1695.f_1[iParam2]->f_24 = _create_anim_scene(uParam0->f_1695.f_1[iParam2], 0, &(uParam0->f_1695.f_1[iParam2]->f_16), false, true);
	load_anim_scene(uParam0->f_1695.f_1[iParam2]->f_24);
	func_989(&(uParam0->f_1695.f_1[iParam2]->f_26), 1, uParam1->f_1, iParam2);
}

void func_659(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	if (!_is_anim_scene_loaded(uParam0->f_1695.f_1[iParam2]->f_24, true, false))
	{
		return;
	}
	if (!_is_anim_scene_metadata_loaded(uParam0->f_1695.f_1[iParam2]->f_24, false))
	{
		return;
	}
	set_anim_scene_origin(uParam0->f_1695.f_1[iParam2]->f_24, uParam0->f_1695.f_1[iParam2]->f_27, uParam0->f_1695.f_1[iParam2]->f_30, 2);
	*bParam3 = 1;
	func_989(&(uParam0->f_1695.f_1[iParam2]->f_26), 2, uParam1->f_1, iParam2);
}

void func_660(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	iVar0 = uParam0->f_1695.f_1[iParam2]->f_25;
	if (_0x3ab6c7b0bb0df4b1(&(uParam0->f_948.f_1[iVar0]), -1))
	{
		return;
	}
	if (!_0x23e33cb9f4a3f547(uParam0->f_1695.f_1[iParam2]->f_24, &(uParam0->f_1695.f_1[iParam2]->f_16)))
	{
		if (_0x0df57f86fe71dbe5(uParam0->f_1695.f_1[iParam2]->f_24, &(uParam0->f_1695.f_1[iParam2]->f_16)))
		{
		}
		else
		{
			_0xdf7b5144e25cd3fe(uParam0->f_1695.f_1[iParam2]->f_24, &(uParam0->f_1695.f_1[iParam2]->f_16));
		}
		return;
	}
	*bParam3 = 1;
	func_989(&(uParam0->f_1695.f_1[iParam2]->f_26), 3, uParam1->f_1, iParam2);
}

void func_661(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	iVar0 = uParam0->f_1695.f_1[iParam2]->f_25;
	set_anim_scene_entity(uParam0->f_1695.f_1[iParam2]->f_24, &(uParam0->f_1695.f_1[iParam2]->f_8), &(uParam0->f_948.f_1[iVar0]), 0);
	*bParam3 = 1;
	func_989(&(uParam0->f_1695.f_1[iParam2]->f_26), 4, uParam1->f_1, iParam2);
}

void func_662(var uParam0, var uParam1, int iParam2)
{
	_set_anim_scene_playback_list_bool(uParam0->f_1695.f_1[iParam2]->f_24, &(uParam0->f_1695.f_1[iParam2]->f_16), true);
	start_anim_scene(uParam0->f_1695.f_1[iParam2]->f_24);
	func_989(&(uParam0->f_1695.f_1[iParam2]->f_26), 5, uParam1->f_1, iParam2);
}

void func_663(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	if (((_is_anim_scene_active(uParam0->f_1695.f_1[iParam2]->f_24) || _is_anim_scene_finished(uParam0->f_1695.f_1[iParam2]->f_24, false)) || !_is_anim_scene_started(uParam0->f_1695.f_1[iParam2]->f_24, false)) || _0x005e6f28dd7ed58d(uParam0->f_1695.f_1[iParam2]->f_24, &(uParam0->f_1695.f_1[iParam2]->f_8)))
	{
		*bParam3 = 1;
		func_989(&(uParam0->f_1695.f_1[iParam2]->f_26), 6, uParam1->f_1, iParam2);
	}
}

void func_664(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	iVar0 = uParam0->f_1695.f_1[iParam2]->f_25;
	remove_anim_scene_entity(uParam0->f_1695.f_1[iParam2]->f_24, &(uParam0->f_1695.f_1[iParam2]->f_8), &(uParam0->f_948.f_1[iVar0]));
	*bParam3 = 1;
	func_989(&(uParam0->f_1695.f_1[iParam2]->f_26), 7, uParam1->f_1, iParam2);
}

void func_665(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	_delete_anim_scene(uParam0->f_1695.f_1[iParam2]->f_24);
	*bParam3 = 1;
	func_989(&(uParam0->f_1695.f_1[iParam2]->f_26), 0, uParam1->f_1, iParam2);
}

void func_666(var uParam0, var uParam1, int iParam2)
{
	if (iParam2 >= uParam0->f_105)
	{
		return;
	}
	func_990(&(uParam0->f_105.f_1[iParam2]->f_1), 0, *uParam1, iParam2);
}

void func_667(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_105.f_1[iParam2]->f_2 == 0)
	{
		if (!func_991(uParam0, uParam1, iParam2))
		{
			return;
		}
		_request_propset_2(uParam0->f_105.f_1[iParam2]->f_2);
	}
	if (!_has_propset_loaded_2(uParam0->f_105.f_1[iParam2]->f_2))
	{
		return;
	}
	func_990(&(uParam0->f_105.f_1[iParam2]->f_1), 1, *uParam1, iParam2);
}

void func_668(var uParam0, var uParam1, int iParam2)
{
	if (!func_992(uParam0, uParam1, iParam2))
	{
		return;
	}
	func_990(&(uParam0->f_105.f_1[iParam2]->f_1), 5, *uParam1, iParam2);
}

void func_669(var uParam0, var uParam1, int iParam2)
{
	if (!_does_propset_exist(&(uParam0->f_105.f_1[iParam2])))
	{
		func_990(&(uParam0->f_105.f_1[iParam2]->f_1), 1, *uParam1, iParam2);
		return;
	}
}

int func_670()
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

int func_671(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (_does_volume_exist(Global_1940122[iVar0]) && Global_1940122[iVar0] == iParam0)
		{
			(*Global_1940122)[iVar0] = 0;
			(*Global_1940122)[iVar0]->f_1 = 0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_672(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (_does_volume_exist(Global_1940122[iVar0]) && Global_1940122[iVar0] == iParam0)
		{
			(*Global_1940122)[iVar0]->f_1 = iParam1;
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!_does_volume_exist(Global_1940122[iVar0]))
		{
			(*Global_1940122)[iVar0] = iParam0;
			(*Global_1940122)[iVar0]->f_1 = iParam1;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_673(int iParam0, int iParam1)
{
	iVar0 = create_itemset(true);
	iVar1 = 0;
	iVar2 = _0x59b57c4b06531e1e(iParam0->f_2, iParam0->f_5, iVar0, 3);
	iVar3 = 0;
	while (iVar3 <= (iVar2 - 1))
	{
		iVar4 = _0x18013392501ce5dc(get_indexed_item_in_itemset(iVar3, iVar0));
		if (iParam0->f_1 != get_entity_model(iVar4))
		{
		}
		else if (!is_entity_visible(iVar4))
		{
		}
		else
		{
			*iParam1 = iVar4;
			iVar1 = 1;
		}
		else
		{
			iVar3++;
		}
	}
	_0x20a4bf0e09bee146(iVar0);
	destroy_itemset(iVar0);
	return iVar1;
}

bool func_674(var uParam0, var uParam1)
{
	uVar0 = uParam1->f_1;
	if (_0x1b89bc43b6e69107(894914127, uVar0, 1, 0))
	{
		return false;
	}
	if (get_number_of_free_stacks_of_this_size(3090) <= 0)
	{
		return false;
	}
	if (func_675(*uParam1))
	{
		return false;
	}
	switch (uParam1->f_4)
	{
		case -323664079:
			if (func_354(uParam0, uParam1, 1) == -1)
			{
				return false;
			}
			break;
		default:
			if (func_354(uParam0, uParam1, 0) == -1)
			{
				return false;
			}
			break;
	}
	request_script_with_name_hash(894914127);
	uParam0->f_4300.f_1 = uParam1->f_1;
	uParam0->f_4300.f_2 = uParam1->f_2;
	uParam0->f_4300.f_4 = func_237(uParam0->f_4300.f_2);
	uParam0->f_4300.f_3 = func_238(uParam0->f_4300.f_2, uParam0->f_4300.f_1);
	if (has_script_with_name_hash_loaded(894914127))
	{
		iVar1 = start_new_script_with_name_hash_and_args(894914127, &(uParam0->f_4300), 6, 3090);
		func_190(*uParam1, iVar1);
		set_script_with_name_hash_as_no_longer_needed(894914127);
		if (!func_675(*uParam1))
		{
			return false;
		}
		return true;
	}
	return false;
}

bool func_675(int iParam0)
{
	return _does_thread_exist(func_157(iParam0));
}

int func_676(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 7)
	{
		return 255;
	}
	return &(Global_1102219->f_3675[iParam0]);
}

void func_677(var uParam0, var uParam1)
{
	Var4 = -1;
	Var4.f_1 = -1;
	Var4.f_2 = -1;
	Var4.f_4 = 10;
	Var4.f_15 = 4;
	Var4.f_15.f_5 = 4;
	Var4.f_25 = 1;
	Var4.f_28 = 2;
	Var4.f_28.f_1 = -1;
	Var4.f_28.f_1.f_1 = -1;
	Var4.f_31 = 493038497;
	Var4.f_31.f_1 = 493038497;
	bVar3 = func_993(uParam0);
	if (!bVar3)
	{
		bVar2 = func_621(uParam1, &Var4);
		if (!bVar2)
		{
			bVar3 = true;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_1565.f_3 - 1))
	{
		if (uParam0->f_1565[iVar0]->f_1 != -2045445368)
		{
		}
		else
		{
			iVar1 = door_system_get_door_state(&(uParam0->f_1565[iVar0]));
			switch (iVar1)
			{
				case 1:
				case 2:
					if (!bVar3)
					{
						_0x51d99497abf3f451(&(uParam0->f_1565[iVar0]));
						door_system_set_door_state(&(uParam0->f_1565[iVar0]), 0);
					}
					break;
				case 0:
				case 3:
				case 4:
					if (bVar3)
					{
						_0x51d99497abf3f451(&(uParam0->f_1565[iVar0]));
						door_system_set_door_state(&(uParam0->f_1565[iVar0]), 1);
					}
					break;
				default:
					break;
			}
		}
		iVar0++;
	}
}

void func_678(var uParam0, var uParam1)
{
	bVar2 = func_994(uParam0, uParam1);
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_1565.f_3 - 1))
	{
		if (uParam0->f_1565[iVar0]->f_1 != -2045445368)
		{
		}
		else
		{
			iVar1 = door_system_get_door_state(&(uParam0->f_1565[iVar0]));
			switch (iVar1)
			{
				case 1:
				case 2:
					if (!bVar2)
					{
						_0x51d99497abf3f451(&(uParam0->f_1565[iVar0]));
						door_system_set_door_state(&(uParam0->f_1565[iVar0]), 0);
					}
					break;
				case 0:
				case 3:
				case 4:
					if (bVar2)
					{
						_0x51d99497abf3f451(&(uParam0->f_1565[iVar0]));
						door_system_set_door_state(&(uParam0->f_1565[iVar0]), 1);
					}
					break;
				default:
					break;
			}
		}
		iVar0++;
	}
}

int func_679(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return -698967718;
		case 2:
			return -1988953436;
		case 3:
			return -152401881;
		case 4:
			return -1195183252;
		case 5:
			return -2024821830;
		case 6:
			return -1544642772;
		case 7:
			return 1592541219;
		case 8:
			return 789311248;
		case 9:
			return -42221481;
		case 10:
			return -2019784557;
		case 11:
			return -1846747855;
		case 12:
			return -677223542;
		case 13:
			return 686270000;
		case 14:
			return 1545958071;
		case 15:
			return -448995989;
		case 16:
			return 304038664;
		case 17:
			return -499913814;
		case 18:
			return -591513218;
		case 19:
			return -753195767;
		case 20:
			return 429804345;
		case 21:
			return 700653760;
		case 22:
			return 1784766834;
		case 23:
			return 665124141;
		case 24:
			return -1738318168;
		case 25:
			return -1920806061;
		case 26:
			return 1910527460;
		case 27:
			return -358693017;
		case 28:
			return -2123406294;
		case 29:
			return 1168662106;
		case 30:
			return -529289190;
		case 31:
			return 1353878014;
		case 32:
			return 1588951682;
		case 33:
			return -1866304465;
		case 34:
			return 1530925036;
		case 35:
			return 332278015;
		case 36:
			return -491132110;
		case 37:
			return -177981000;
		case 38:
			return -1485686334;
		case 39:
			return -1323853848;
		case 40:
			return -1585401455;
		case 41:
			return -56208354;
		case 42:
			return 2091137887;
		case 43:
			return 390832779;
		case 44:
			return -581973303;
		case 45:
			return -801733205;
		case 46:
			return -806829095;
		case 47:
			return -1340199114;
		case 48:
			return 1960114521;
		case 49:
			return 584993587;
		case 50:
			return -884486301;
		case 51:
			return 1193262427;
		case 52:
			return -79578972;
		case 53:
			return -222497930;
		case 54:
			return 1404455848;
		case 55:
			return 215313709;
		case 56:
			return -448649721;
		case 57:
			return -220854676;
		case 58:
			return -1842592032;
		case 59:
			return -1876655894;
		case 60:
			return 2042787810;
		case 61:
			return -715507036;
		case 62:
			return 632918379;
		case 63:
			return 965231938;
		case 64:
			return 2048409479;
		case 65:
			return 385429466;
		case 66:
			return 245923248;
		case 67:
			return -248576962;
		case 68:
			return 2002222928;
		case 69:
			return 2093717520;
		case 70:
			return -206865066;
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

int func_680(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -839267265;
		case 1:
			return -258540245;
		case 2:
			return -2012327723;
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

void func_681(var uParam0, var uParam1)
{
	if (func_531(*uParam1) == -1)
	{
		func_188(uParam0);
		return;
	}
	iVar0 = func_531(*uParam1);
	Var1 = { func_200(*uParam1, func_531(*uParam1)) };
	iVar3 = func_995(func_303(*uParam1));
	if (func_996(uParam0, uParam1))
	{
		if (!func_736(uParam0, uParam1, Var1, iVar3, &vVar4, iVar0))
		{
			return;
		}
		func_188(uParam0);
		func_738(uParam0, uParam1, vVar4.f_3, vVar4.f_4, vVar4, iVar0);
	}
	else if (!_0xd89504d9d7d5057d(func_459(func_458(uParam0))))
	{
		func_738(uParam0, uParam1, func_997(uParam0), func_998(uParam0), func_458(uParam0), func_457(uParam0));
	}
}

void func_682(var uParam0, var uParam1)
{
	if (func_531(*uParam1) == -1)
	{
		func_189(uParam0);
		return;
	}
	iVar0 = func_531(*uParam1);
	Var1 = { func_200(*uParam1, func_531(*uParam1)) };
	iVar3 = func_995(func_303(*uParam1));
	if (func_999(uParam1))
	{
		if (func_1000(uParam0, uParam1))
		{
			if (!func_1001(uParam0, uParam1, Var1, iVar3, &vVar4, iVar0))
			{
				return;
			}
			func_189(uParam0);
			func_1002(uParam0, uParam1, vVar4.f_3, vVar4.f_4, vVar4, iVar0);
		}
		else if (!_0xd89504d9d7d5057d(func_459(func_466(uParam0))))
		{
			func_1002(uParam0, uParam1, func_1003(uParam0), func_1004(uParam0), func_466(uParam0), func_465(uParam0));
		}
	}
	else
	{
		func_189(uParam0);
	}
}

int func_683(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2123406294:
			return 28;
		case -2024821830:
			return 5;
		case -2019784557:
			return 10;
		case -1988953436:
			return 2;
		case -1920806061:
			return 25;
		case -1876655894:
			return 59;
		case -1866304465:
			return 33;
		case -1846747855:
			return 11;
		case -1842592032:
			return 58;
		case -1738318168:
			return 24;
		case -1585401455:
			return 40;
		case -1544642772:
			return 6;
		case -1485686334:
			return 38;
		case -1340199114:
			return 47;
		case -1323853848:
			return 39;
		case -1195183252:
			return 4;
		case -884486301:
			return 50;
		case -806829095:
			return 46;
		case -801733205:
			return 45;
		case -753195767:
			return 19;
		case -715507036:
			return 61;
		case -698967718:
			return 1;
		case -677223542:
			return 12;
		case -591513218:
			return 18;
		case -581973303:
			return 44;
		case -529289190:
			return 30;
		case -499913814:
			return 17;
		case -491132110:
			return 36;
		case -448995989:
			return 15;
		case -448649721:
			return 56;
		case -358693017:
			return 27;
		case -248576962:
			return 67;
		case -222497930:
			return 53;
		case -220854676:
			return 57;
		case -206865066:
			return 70;
		case -177981000:
			return 37;
		case -152401881:
			return 3;
		case -79578972:
			return 52;
		case -56208354:
			return 41;
		case -42221481:
			return 9;
		case 0:
			return 0;
		case 215313709:
			return 55;
		case 245923248:
			return 66;
		case 304038664:
			return 16;
		case 332278015:
			return 35;
		case 385429466:
			return 65;
		case 390832779:
			return 43;
		case 429804345:
			return 20;
		case 584993587:
			return 49;
		case 632918379:
			return 62;
		case 665124141:
			return 23;
		case 686270000:
			return 13;
		case 700653760:
			return 21;
		case 789311248:
			return 8;
		case 965231938:
			return 63;
		case 1168662106:
			return 29;
		case 1193262427:
			return 51;
		case 1353878014:
			return 31;
		case 1404455848:
			return 54;
		case 1530925036:
			return 34;
		case 1545958071:
			return 14;
		case 1588951682:
			return 32;
		case 1592541219:
			return 7;
		case 1784766834:
			return 22;
		case 1910527460:
			return 26;
		case 1960114521:
			return 48;
		case 2002222928:
			return 68;
		case 2042787810:
			return 60;
		case 2048409479:
			return 64;
		case 2091137887:
			return 42;
		case 2093717520:
			return 69;
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

bool func_684(var uParam0, int iParam1)
{
	return func_204(&(uParam0->f_4034.f_212), iParam1, 1);
}

bool func_685(int iParam0, int iParam1)
{
	Var0 = { func_619(iParam0) };
	_0x4ef23e04a0c8ff51(&Var0, &iVar7);
	if (func_620(iParam1))
	{
		if (iVar7 > 0)
		{
			return true;
		}
	}
	else if (iVar7 >= Global_1901947->f_166.f_2)
	{
		return true;
	}
	return false;
}

bool func_686(int iParam0)
{
	return (func_1005(iParam0, 202068422) && !func_255(iParam0));
}

bool func_687(int iParam0)
{
	return func_204(&(Global_1109804->f_247.f_6), iParam0, 2);
}

int func_688(var uParam0)
{
	if (!func_690())
	{
		return 0;
	}
	if (func_710(uParam0->f_1))
	{
		return 0;
	}
	if (!func_1006())
	{
		return 0;
	}
	if (!func_1007(&bVar0, &bVar1))
	{
		return 686270000;
	}
	if (bVar0)
	{
		return -677223542;
	}
	if (!bVar1)
	{
		return 686270000;
	}
	return 0;
}

int func_689(var uParam0, var uParam1, int iParam2)
{
	if (func_735(uParam0, iParam2) != 0)
	{
		return func_735(uParam0, iParam2);
	}
	switch (iParam2)
	{
		case 8:
		case 9:
			return func_995(func_303(*uParam1));
		case 0:
		case 1:
		case 2:
			bVar0 = false;
			iVar1 = func_1008(uParam0, -2012327723);
			if (iVar1 != -1)
			{
				if (does_entity_exist(&(uParam0->f_112.f_200[iVar1])))
				{
					if (is_entity_visible(&(uParam0->f_112.f_200[iVar1])))
					{
						bVar0 = func_715();
					}
				}
			}
			if (bVar0)
			{
				return -2012327723;
			}
			else
			{
				return func_995(func_303(*uParam1));
			}
			break;
		case 3:
		case 4:
		case 5:
		case 7:
			break;
		default:
			break;
	}
	return 0;
}

bool func_690()
{
	if (func_77())
	{
		return func_23(func_259());
	}
	else if (network_is_session_active() && network_is_game_in_progress())
	{
		iVar0 = func_903(player_id());
		if (iVar0 == -1)
		{
			return false;
		}
		return func_23(func_1009(iVar0));
	}
	else
	{
		return false;
	}
	return false;
}

void func_691(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = player_id();
	if (!_network_is_player_index_valid(iVar0))
	{
		return;
	}
	if (!network_is_player_active(iVar0))
	{
		return;
	}
	if (!func_1010(iVar0, 1))
	{
		return;
	}
	if (!bParam2 && !func_1011(iVar0))
	{
		return;
	}
	func_1012(1);
}

bool func_692(var uParam0)
{
	if (func_77())
	{
		if (_unlock_is_unlocked(2144034109))
		{
			if (_unlock_is_visible(2144034109))
			{
				iVar0 = func_92(uParam0->f_2);
				if (_unlock_is_unlocked(iVar0))
				{
					if (_unlock_is_visible(iVar0))
					{
						return true;
					}
				}
			}
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_693(var uParam0)
{
	if (_0x424b17a7dc5c90bc(player_id()))
	{
		return func_603(func_92(uParam0->f_2));
	}
	return func_255(uParam0->f_2);
}

bool func_694(var uParam0, int iParam1, int iParam2)
{
	if (func_478(iParam2, 1) == -1)
	{
		return false;
	}
	return func_204(uParam0->f_4034.f_121[func_478(iParam2, 1)], func_683(iParam1, 1), 3);
}

bool func_695(int iParam0)
{
	iVar0 = func_1013(iParam0);
	func_1014(&iVar0, 0, 0, 0, 5, 0, 0, 0);
	return func_1015(iVar0, 1);
}

int func_696(int iParam0)
{
	Var0 = { func_894(-746839750, func_893(iParam0)) };
	return func_1016(Var0);
}

int func_697(int iParam0)
{
	Var0 = { func_894(829565093, func_893(iParam0)) };
	return func_1017(Var0);
}

bool func_698(int iParam0, int iParam1)
{
	return func_1018(&(Global_1109804->f_5737[iParam0]->f_2), iParam1);
}

struct<2> func_699()
{
	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

void func_700(var uParam0, var uParam1, int iParam2, int iParam3, struct<2> Param4, bool bParam6)
{
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_7.f_1 = -1;
	Var0.f_10 = 255;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = 7;
	Var0.f_19.f_1 = 255;
	Var0.f_19.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_27.f_1 = -1;
	uVar31 = func_905(32768, 8);
	if (!bParam6)
	{
		_0xd426e2e3288469d6(&uVar31, player_id());
	}
	Var0.f_10 = player_id();
	Var0.f_6 = uParam0;
	Var0.f_5 = uParam1;
	Var0.f_11 = _0x901e0dc25080c8b9(player_id());
	Var0.f_4 = 7;
	Var0.f_16 = iParam2;
	Var0.f_7 = { Param4 };
	Var0.f_15 = iParam3;
	func_907(&Var0, uVar31);
}

void func_701(var uParam0, var uParam1, int iParam2)
{
	if (func_205(&(uParam0->f_4034.f_210), iParam2, 1))
	{
	}
}

void func_702(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_4034.f_214[iParam1] = iParam2;
}

void func_703(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_4034.f_214[iParam1]->f_1 = iParam2;
}

void func_704(var uParam0)
{
	uParam0->f_4034.f_254 = get_game_timer();
}

int func_705(var uParam0)
{
	iVar1 = player_id();
	if (!_network_is_player_index_valid(iVar1))
	{
		return 0;
	}
	if (!network_is_player_active(iVar1))
	{
		return 0;
	}
	if (is_player_dead(iVar1))
	{
		return 0;
	}
	if (!_0x3ee1f7a8c32f24e1(iVar1, &iVar0, 0, 0))
	{
		return 0;
	}
	if (!is_entity_a_ped(iVar0))
	{
		return 0;
	}
	iVar2 = get_ped_index_from_entity_index(iVar0);
	if (!does_entity_exist(iVar2))
	{
		return 0;
	}
	if (is_entity_dead(iVar2))
	{
		return 0;
	}
	return func_1019(uParam0, iVar2);
}

bool func_706(var uParam0, int iParam1)
{
	if (!func_684(uParam0, iParam1))
	{
		return false;
	}
	iVar0 = func_967(uParam0);
	if (iVar0 == 0)
	{
		return true;
	}
	return func_730(iVar0) != iParam1;
}

bool func_707(var uParam0, var uParam1)
{
	if (!_0x424b17a7dc5c90bc(player_id()))
	{
		return false;
	}
	if (func_603(func_92(uParam1->f_2)))
	{
		return false;
	}
	if ((!func_694(uParam0, -1920806061, -839267265) && !func_694(uParam0, -358693017, -839267265)) && !func_694(uParam0, 1910527460, -839267265))
	{
		return false;
	}
	if ((func_718(uParam0, -1920806061) || func_718(uParam0, -358693017)) || func_718(uParam0, 1910527460))
	{
		return false;
	}
	return true;
}

bool func_708(var uParam0)
{
	return (get_game_timer() - uParam0->f_4034.f_252) >= 6000;
}

bool func_709(var uParam0)
{
	return (get_game_timer() - uParam0->f_4034.f_258) >= 7000;
}

bool func_710(int iParam0)
{
	Var0 = { func_259() };
	if (!func_23(Var0))
	{
		return false;
	}
	if (network_is_session_active() && network_is_game_in_progress())
	{
		iVar2 = func_903(player_id());
		if (iVar2 == -1)
		{
			return true;
		}
		if (func_101(Var0, func_1009(iVar2)))
		{
			if (func_1020(iVar2) == iParam0)
			{
				return false;
			}
			else
			{
				return true;
			}
		}
		return true;
	}
	return true;
}

bool func_711(int iParam0)
{
	return func_687(iParam0);
}

int func_712(int iParam0)
{
	return func_1021(func_92(iParam0));
}

bool func_713(int iParam0)
{
	return (*Global_1120070)[iParam0]->f_8;
}

var func_714(int iParam0)
{
	Var0 = { func_894(741274143, func_893(iParam0)) };
	return func_1022(Var0, -1);
}

bool func_715()
{
	if (is_bit_set(get_random_int_in_range(0, 65536), 0))
	{
		return true;
	}
	return false;
}

void func_716(var uParam0)
{
	uParam0->f_4034.f_255 = get_game_timer();
}

bool func_717(var uParam0)
{
	return (get_game_timer() - uParam0->f_4034.f_259) >= 30000;
}

bool func_718(var uParam0, int iParam1)
{
	return (func_204(&(uParam0->f_4034.f_134), func_683(iParam1, 1), 3) && func_730(iParam1) != 8);
}

bool func_719(var uParam0)
{
	return (get_game_timer() - uParam0->f_4034.f_261) >= 30000;
}

bool func_720(var uParam0)
{
	return (get_game_timer() - uParam0->f_4034.f_253) >= 30000;
}

bool func_721(var uParam0, var uParam1)
{
	iVar0 = func_354(uParam0, uParam1, 0);
	iVar4 = player_id();
	if (iVar0 == -1)
	{
		return false;
	}
	iVar3 = &uParam0->f_112.f_200[iVar0];
	if (!_network_is_player_index_valid(iVar4))
	{
		return false;
	}
	if (!network_is_player_active(iVar4))
	{
		return false;
	}
	if (is_player_dead(iVar4))
	{
		return false;
	}
	if (!_0x3ee1f7a8c32f24e1(iVar4, &iVar1, 0, 0))
	{
		return false;
	}
	if (!is_entity_a_ped(iVar1))
	{
		return false;
	}
	iVar2 = get_ped_index_from_entity_index(iVar1);
	if (!does_entity_exist(iVar2))
	{
		return false;
	}
	if (is_entity_dead(iVar2))
	{
		return false;
	}
	return iVar2 == iVar3;
}

bool func_722(var uParam0, int iParam1)
{
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		if (&uParam0->f_4034.f_98[iVar1] == -1)
		{
		}
		else
		{
			iVar0 = func_680(iVar1, 1);
			if (!func_694(uParam0, iParam1, iVar0))
			{
			}
			else
			{
				return true;
			}
		}
		iVar1++;
	}
	return false;
}

bool func_723(var uParam0)
{
	return (get_game_timer() - uParam0->f_4034.f_258) >= 15000;
}

bool func_724(var uParam0)
{
	return (get_game_timer() - uParam0->f_4034.f_255) >= 30000;
}

bool func_725(var uParam0)
{
	return (get_game_timer() - uParam0->f_4034.f_252) >= 15000;
}

bool func_726(var uParam0)
{
	return (get_game_timer() - uParam0->f_4034.f_254) >= 30000;
}

bool func_727(var uParam0)
{
	if (func_415(uParam0, 5))
	{
		return true;
	}
	if (!func_684(uParam0, 5))
	{
		return false;
	}
	iVar0 = func_967(uParam0);
	if (iVar0 != 0)
	{
		if (func_730(iVar0) == 5)
		{
			return true;
		}
	}
	return !func_1023(uParam0);
}

int func_728(var uParam0)
{
	return uParam0->f_4034.f_238;
}

bool func_729(var uParam0)
{
	return (get_game_timer() - uParam0->f_4034.f_257) >= 7000;
}

int func_730(int iParam0)
{
	switch (iParam0)
	{
		case -2024821830:
		case -2019784557:
		case -1988953436:
		case -1846747855:
		case -1544642772:
		case -1195183252:
		case -698967718:
		case -677223542:
		case -152401881:
		case -42221481:
		case 686270000:
		case 789311248:
		case 1592541219:
			return 0;
		case -753195767:
		case -591513218:
		case -499913814:
		case -448995989:
		case 304038664:
		case 1545958071:
			return 2;
		case 429804345:
			return 1;
		case -2123406294:
		case -1920806061:
		case -1866304465:
		case -1738318168:
		case -1485686334:
		case -529289190:
		case -491132110:
		case -358693017:
		case -177981000:
		case 332278015:
		case 665124141:
		case 700653760:
		case 1168662106:
		case 1353878014:
		case 1530925036:
		case 1588951682:
		case 1784766834:
		case 1910527460:
			return 3;
		case -1585401455:
		case -1323853848:
		case -56208354:
		case 390832779:
		case 2091137887:
			return 4;
		case -1340199114:
		case -806829095:
		case -801733205:
		case -581973303:
		case 584993587:
		case 1960114521:
			return 5;
		case -884486301:
			return 6;
		case -1876655894:
		case -1842592032:
		case -715507036:
		case -448649721:
		case -248576962:
		case -222497930:
		case -220854676:
		case -79578972:
		case 215313709:
		case 245923248:
		case 385429466:
		case 632918379:
		case 965231938:
		case 1193262427:
		case 1404455848:
		case 2042787810:
		case 2048409479:
			return 8;
		case 2002222928:
		case 2093717520:
			return 7;
		case -206865066:
			return 9;
		default:
			break;
	}
	return -1;
}

int func_731()
{
	return Global_1109804->f_21.f_12;
}

bool func_732(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

int func_733()
{
	return Global_1109804->f_21.f_12.f_4;
}

struct<2> func_734(var uParam0)
{
	return uParam0->f_4034.f_235;
}

int func_735(var uParam0, int iParam1)
{
	return uParam0->f_4034.f_214[iParam1]->f_1;
}

bool func_736(var uParam0, var uParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6)
{
	if (!func_23(Param2))
	{
		return false;
	}
	if (iParam6 == -1)
	{
		return false;
	}
	iVar7 = player_id();
	iVar9 = _0x901e0dc25080c8b9(iVar7);
	iVar8 = _0x4be6c13a45cca8ec(iVar9);
	iVar10 = get_player_ped(iVar8);
	bVar4 = is_ped_male(iVar10);
	iVar11 = _0x149a2751ab66ac02(iVar9);
	iVar12 = func_478(iParam4, 1);
	if (iVar12 == -1)
	{
		return false;
	}
	bVar5 = func_1024(*uParam1, iParam6, iVar11);
	if (bVar5)
	{
		if (bVar4)
		{
			iVar0 = -1876655894;
		}
		else
		{
			iVar0 = 2042787810;
		}
	}
	else if (bVar4)
	{
		iVar0 = -220854676;
	}
	else
	{
		iVar0 = -1842592032;
	}
	vVar1 = { func_182(&bVar6, *uParam1, uParam0->f_4034.f_98[iVar12]->f_4, iVar0, iParam6, 1) };
	if (bVar6)
	{
		iParam5->f_3 = iVar0;
		iParam5->f_4 = iParam4;
		*iParam5 = { vVar1 };
		return true;
	}
	if (bVar4)
	{
		iVar0 = -222497930;
	}
	else
	{
		iVar0 = 1404455848;
	}
	vVar1 = { func_182(&bVar6, *uParam1, uParam0->f_4034.f_98[iVar12]->f_4, iVar0, iParam6, 1) };
	if (bVar6)
	{
		iParam5->f_3 = iVar0;
		iParam5->f_4 = iParam4;
		*iParam5 = { vVar1 };
		return true;
	}
	if (bVar5)
	{
		iVar0 = -448649721;
	}
	else
	{
		iVar0 = 215313709;
	}
	vVar1 = { func_182(&bVar6, *uParam1, uParam0->f_4034.f_98[iVar12]->f_4, iVar0, iParam6, 1) };
	if (bVar6)
	{
		iParam5->f_3 = iVar0;
		iParam5->f_4 = iParam4;
		*iParam5 = { vVar1 };
		return true;
	}
	iVar0 = -79578972;
	vVar1 = { func_182(&bVar6, *uParam1, uParam0->f_4034.f_98[iVar12]->f_4, iVar0, iParam6, 1) };
	if (bVar6)
	{
		iParam5->f_3 = iVar0;
		iParam5->f_4 = iParam4;
		*iParam5 = { vVar1 };
		return true;
	}
	iVar0 = 1193262427;
	vVar1 = { func_182(&bVar6, *uParam1, uParam0->f_4034.f_98[iVar12]->f_4, iVar0, iParam6, 1) };
	if (bVar6)
	{
		iParam5->f_3 = iVar0;
		iParam5->f_4 = iParam4;
		*iParam5 = { vVar1 };
		return true;
	}
	return false;
}

void func_737(var uParam0, struct<2> Param1)
{
	uParam0->f_4034.f_235 = { Param1 };
}

void func_738(var uParam0, var uParam1, int iParam2, int iParam3, vector3 vParam4, int iParam7)
{
	if (iParam7 == -1)
	{
		return;
	}
	func_747(uParam0, uParam1);
	if (!func_1025(&(uParam0->f_4034), vParam4, 0, -1, 1, 0))
	{
		return;
	}
	func_460(uParam0, iParam2);
	func_461(uParam0, iParam3);
	func_463(uParam0, vParam4);
	func_464(uParam0, iParam7);
}

int func_739(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 493038497)
	{
		return -1;
	}
	return &((*Global_1120070)[iParam0]->f_24.f_2[iParam1]->f_28[func_792(iParam2)]);
}

int func_740(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9;
		case 1:
			return 10;
		case 2:
			return 11;
		case 3:
			return 16;
		default:
			break;
	}
	return -1;
}

void func_741(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, var uParam5, var uParam6, var uParam7)
{
	_0xef51242e35242b47(&uParam5);
	func_737(uParam0, func_699());
	func_1026(uParam0, uParam1, iParam4);
	if (uParam0->f_4034.f_115.f_3 != 0)
	{
		func_1027(&(uParam0->f_4034.f_115), 0, 0);
		func_431(uParam0, uParam1);
	}
	if (bParam2)
	{
		func_748(uParam0, iParam3);
	}
	func_1028(uParam0, uParam1, 3);
	func_1028(uParam0, uParam1, 0);
	func_429(uParam0, 3);
	func_430(uParam0, uParam1, 3);
	func_429(uParam0, 0);
	func_430(uParam0, uParam1, 0);
	func_429(uParam0, 2);
	func_430(uParam0, uParam1, 2);
	func_429(uParam0, 4);
	func_430(uParam0, uParam1, 4);
}

void func_742(var uParam0, var uParam1)
{
	if (func_1029(uParam0, uParam1->f_3) >= 5)
	{
		func_1030(uParam0, uParam1->f_3);
		_0xef51242e35242b47(uParam1);
	}
	func_1031(uParam0, uParam1->f_3);
}

void func_743(var uParam0, var uParam1, char* sParam2, bool bParam3)
{
	iVar0 = func_730(sParam2->f_3);
	if (iVar0 == -1)
	{
		return;
	}
	_copy_memory(&(uParam0->f_4034.f_115), sParam2, 5);
	func_1028(uParam0, uParam1, iVar0);
	func_1032(uParam0, uParam1, sParam2->f_3);
	func_430(uParam0, uParam1, iVar0);
	func_429(uParam0, iVar0);
	if (bParam3)
	{
		start_preloaded_conversation(sParam2);
		bVar1 = true;
	}
	else
	{
		bVar1 = func_1025(&(uParam0->f_4034), *sParam2, 0, -1, 0, 1);
	}
	if (bVar1)
	{
		switch (sParam2->f_3)
		{
			case 2002222928:
				func_765(uParam0, 0);
				break;
		}
	}
}

void func_744(var uParam0, int iParam1, var uParam2)
{
	uParam2->f_4 = func_735(uParam0, iParam1);
	uParam2->f_3 = func_1033(uParam0, iParam1);
}

bool func_745(var uParam0, var uParam1, var uParam2)
{
	if (uParam1->f_4 == 0)
	{
		return false;
	}
	*uParam2 = func_478(uParam1->f_4, 1);
	if (*uParam2 == -1)
	{
		return false;
	}
	iVar0 = &uParam0->f_4034.f_98[*uParam2];
	if (iVar0 == -1)
	{
		return false;
	}
	if (!does_entity_exist(&(uParam0->f_112.f_200[iVar0])))
	{
		return false;
	}
	if (!is_entity_visible(&(uParam0->f_112.f_200[iVar0])))
	{
		return false;
	}
	return true;
}

bool func_746(var uParam0)
{
	return uParam0->f_3 != 0;
}

void func_747(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_112 - 1))
	{
		if (!does_entity_exist(&(uParam0->f_112.f_200[iVar0])))
		{
		}
		else if (!is_entity_visible(&(uParam0->f_112.f_200[iVar0])))
		{
		}
		else
		{
			iVar1 = func_478(uParam0->f_112.f_200[iVar0]->f_151, 1);
			if (iVar1 == -1)
			{
			}
			else if (uParam0->f_4034.f_98[iVar1]->f_4 == 0)
			{
			}
			else
			{
				func_1034(&(uParam0->f_4034), &(uParam0->f_112.f_200[iVar0]), &(uParam0->f_4034.f_98[iVar1]->f_1), 1);
			}
		}
		iVar0++;
	}
}

void func_748(var uParam0, int iParam1)
{
	uParam0->f_4034.f_238 = iParam1;
}

int func_749(var uParam0, var uParam1, char* sParam2)
{
	iVar1 = func_478(sParam2->f_4, 1);
	*sParam2 = { func_182(&bVar0, *uParam1, uParam0->f_4034.f_98[iVar1]->f_4, sParam2->f_3, func_1035(uParam0), 1) };
	if (!bVar0)
	{
		func_429(uParam0, 7);
		func_430(uParam0, uParam1, 7);
		return 0;
	}
	func_742(uParam0, sParam2);
	func_743(uParam0, uParam1, sParam2, 0);
	return 1;
}

int func_750(var uParam0, var uParam1, char* sParam2)
{
	if (!is_scripted_conversation_loaded(func_459(func_466(uParam0))))
	{
		return 0;
	}
	iVar3 = func_303(*uParam1);
	switch (iVar3)
	{
		case 303108068:
			iVar0 = 1;
			break;
		case -910931556:
			iVar0 = 2;
			break;
		default:
			break;
	}
	iVar5 = func_1035(uParam0);
	iVar2 = func_739(*uParam1, iVar5, iVar3);
	if (iVar2 != 3)
	{
		return 0;
	}
	if (!_does_anim_scene_exist(uParam0->f_1730.f_1[iVar0]->f_1))
	{
		return 0;
	}
	if (!_is_anim_scene_started(uParam0->f_1730.f_1[iVar0]->f_1, false))
	{
		return 0;
	}
	iVar1 = 12;
	if (iVar1 == -1)
	{
		func_429(uParam0, 7);
		func_430(uParam0, uParam1, 7);
		return 0;
	}
	iVar4 = &uParam0->f_1730.f_1.f_19[iVar0]->f_734[iVar1];
	if (iVar4 == -1)
	{
		func_429(uParam0, 7);
		func_430(uParam0, uParam1, 7);
		return 0;
	}
	if (!_0x1f0e401031e20146(uParam0->f_1730.f_1[iVar0]->f_1, &(uParam0->f_1730.f_1.f_19[iVar0]->f_632[iVar4]->f_1)))
	{
		if (!_0x23e33cb9f4a3f547(uParam0->f_1730.f_1[iVar0]->f_1, &(uParam0->f_1730.f_1.f_19[iVar0]->f_632[iVar4]->f_1)))
		{
			if (_0x0df57f86fe71dbe5(uParam0->f_1730.f_1[iVar0]->f_1, &(uParam0->f_1730.f_1.f_19[iVar0]->f_632[iVar4]->f_1)))
			{
				return 0;
			}
			else
			{
				return 0;
			}
		}
		return 0;
	}
	*sParam2 = { func_466(uParam0) };
	func_742(uParam0, sParam2);
	func_743(uParam0, uParam1, sParam2, 1);
	return 1;
}

bool func_751(var uParam0)
{
	if (_0xd89504d9d7d5057d(uParam0) && _0x1ecc76792f661cf5(uParam0))
	{
		return true;
	}
	return false;
}

void func_752(int iParam0, int iParam1)
{
	(*Global_1120070)[iParam0]->f_16 = iParam1;
}

void func_753(var uParam0, var uParam1)
{
	iVar0 = player_id();
	iVar1 = get_player_ped(_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(iVar0)));
	func_1026(uParam0, uParam1, iVar1);
	if (func_297(*uParam1, 2))
	{
		_0xe296208c273bd7f0(-1, 2000, 0, 17, 1, 0);
		_0xc9caeaeec1256e54(-1711480773);
		disable_control_action(0, -128997553, false);
		disable_control_action(0, 130948705, false);
		disable_control_action(0, -654888872, false);
		disable_control_action(0, -1304887797, false);
		disable_control_action(0, -124244224, false);
		_uiprompt_enable_prompt_type_this_frame(6);
		func_348(16);
		if (_0x424b17a7dc5c90bc(iVar0))
		{
			if (!func_30(&(uParam0->f_8), 64))
			{
				_0x3946fc742ac305cd(iVar0, &(uParam0->f_112.f_200[func_354(uParam0, uParam1, 0)]), "GunForHire_4m", 0f, 0f, 0f, &(uParam0->f_112.f_200[func_354(uParam0, uParam1, 0)]), 0);
				func_74(&(uParam0->f_8), 64, func_93(*uParam1));
			}
			else
			{
				iVar2 = func_1036();
				set_ped_reset_flag(iVar2, 168, true);
				set_ped_reset_flag(iVar2, 2, true);
				set_ped_reset_flag(iVar2, 21, true);
				set_ped_reset_flag(iVar2, 247, true);
				set_ped_reset_flag(iVar2, 39, true);
				disable_control_action(0, -640622144, true);
			}
		}
	}
	else
	{
		if (func_20() != uParam1->f_1)
		{
			func_1037(16);
		}
		if (func_30(&(uParam0->f_8), 64))
		{
			_0xc67a4910425f11f1(player_id(), 0);
			func_183(&(uParam0->f_8), 64, func_93(*uParam1));
		}
	}
}

void func_754(var uParam0)
{
	uParam0->f_4034.f_253 = get_game_timer();
}

void func_755(var uParam0)
{
	uParam0->f_4034.f_257 = get_game_timer();
}

void func_756(int iParam0, int iParam1)
{
	Var0 = { func_894(-1684144076, func_893(iParam0)) };
	func_1038(Var0, iParam1);
}

void func_757(int iParam0)
{
	func_1039(iParam0, 0);
}

void func_758(int iParam0)
{
	Global_1109804->f_6371.f_2 = (Global_1109804->f_6371.f_2 || iParam0);
}

void func_759(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iVar2 = func_1040(iParam0, func_852(iVar0, 1));
		if (iVar2 == 0)
		{
		}
		else
		{
			uVar1 = _0x8e84119a23c16623(iVar2, 0, 0);
			if (!_0x354f689c4ffaab37(uVar1))
			{
				_0x7c32191d9fb2bdea(uVar1);
				switch (func_92(iParam0))
				{
					case -743855838:
						uVar1 = _0x8e84119a23c16623(-1418951751, 0, 0);
						if (!_0x354f689c4ffaab37(uVar1))
						{
							_0x7c32191d9fb2bdea(uVar1);
						}
						break;
				}
			}
		}
		iVar0++;
	}
}

void func_760(var uParam0)
{
	uParam0->f_4034.f_258 = get_game_timer();
}

void func_761(var uParam0)
{
	uParam0->f_4034.f_256 = get_game_timer();
}

void func_762(var uParam0)
{
	uParam0->f_4034.f_252 = get_game_timer();
}

void func_763(var uParam0)
{
	uParam0->f_4034.f_261 = get_game_timer();
}

void func_764(var uParam0)
{
	uParam0->f_4034.f_259 = get_game_timer();
}

void func_765(var uParam0, int iParam1)
{
	uParam0->f_4034.f_237 = iParam1;
}

void func_766(var uParam0)
{
	uParam0->f_4034.f_260 = get_game_timer();
}

bool func_767(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_204(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_1041())
	{
		return func_204(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_204(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

int func_768(int iParam0)
{
	if (!_0x85e4d7b225a30ed1(func_1042(iParam0), &Var0))
	{
		return 0;
	}
	switch (Var0.f_1)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 3;
		case 4:
			return 4;
		default:
			break;
	}
	if (Var0.f_1 < 0)
	{
		return 0;
	}
	else
	{
		return 4;
	}
	return 6;
}

var func_769(int iParam0, int iParam1)
{
	return &((*Global_1297047)[iParam0]->f_19[iParam1]);
}

bool func_770(var uParam0)
{
	return func_446(*uParam0) != 0;
}

void func_771(char* sParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 <= (&sParam0->f_721[4] - 1))
	{
		if (bParam1 || !func_105(sParam0->f_70[iVar0]->f_1.f_11, 32))
		{
			if (sParam0->f_70[iVar0]->f_1.f_11 & 2 != 0)
			{
				if (sParam0->f_70[iVar0]->f_1.f_8 == 0)
				{
				}
				else
				{
					_0xd2b9c78537ed5759(sParam0->f_70[iVar0]->f_1.f_8);
					sParam0->f_70[iVar0]->f_1.f_8 = 0;
				}
				set_model_as_no_longer_needed(sParam0->f_70[iVar0]->f_1.f_9);
			}
			else if (sParam0->f_70[iVar0]->f_1.f_11 & 4 != 0)
			{
			}
			else if (sParam0->f_70[iVar0]->f_1.f_11 & 128 != 0)
			{
			}
			else
			{
				if (does_entity_exist(&(sParam0->f_70[iVar0])))
				{
					delete_object(sParam0->f_70[iVar0]);
				}
				set_model_as_no_longer_needed(sParam0->f_70[iVar0]->f_1.f_9);
			}
			sParam0->f_70[iVar0] = 0;
		}
		iVar0++;
	}
	sParam0->f_727[4] = 0;
}

void func_772(char* sParam0)
{
	iVar0 = 0;
	while (iVar0 <= (&sParam0->f_721[3] - 1))
	{
		if (sParam0->f_227[iVar0]->f_1.f_11 & 2 != 0)
		{
		}
		else if (sParam0->f_227[iVar0]->f_1.f_11 & 4 != 0)
		{
		}
		else
		{
			if (does_entity_exist(&(sParam0->f_227[iVar0])))
			{
				delete_ped(sParam0->f_227[iVar0]);
			}
			set_model_as_no_longer_needed(sParam0->f_227[iVar0]->f_1.f_9);
		}
		sParam0->f_227[iVar0] = 0;
		iVar0++;
	}
	sParam0->f_727[3] = 0;
}

void func_773(char* sParam0, var uParam1)
{
	vVar1 = 255;
	iVar0 = 0;
	while (iVar0 <= (sParam0->f_10 - 1))
	{
		switch ((*uParam1)[iVar0]->f_2)
		{
			case -250583361:
				bVar4 = sParam0->f_456[iVar0]->f_11 & 16 != false;
				break;
			case 745166621:
				bVar4 = sParam0->f_280[iVar0]->f_11 & 16 != false;
				break;
		}
		if (!bVar4 && does_entity_exist((*uParam1)[iVar0]->f_1))
		{
			delete_ped(&((*uParam1)[iVar0]->f_1));
			_0x7d4e70a67a651c71(1);
		}
		*(*uParam1)[iVar0] = { vVar1 };
		iVar0++;
	}
	sParam0->f_727[1] = 0;
	sParam0->f_727[2] = 0;
}

int func_774()
{
	switch (func_1043())
	{
		case 0:
			return get_player_ped(player_id());
		default:
			break;
	}
	return Global_34;
}

int func_775(int iParam0)
{
	return (*Global_1120070)[iParam0]->f_5;
}

int func_776(int iParam0, int iParam1, int iParam2)
{
	if (func_454(iParam2))
	{
		if (iParam1 < 0 || iParam1 >= 62)
		{
			return 0;
		}
		return func_1044(iParam0, iParam1);
	}
	return 2005163523;
}

int func_777(int iParam0)
{
	return (*Global_1120070)[iParam0]->f_6;
}

Vector3 func_778(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	if (iParam3 == 0)
	{
		*bParam4 = 1;
		return vVar2;
	}
	if (!func_1045(&vVar21, iParam0, iParam2, iParam3, iParam1))
	{
		*bParam4 = 1;
		return vVar2;
	}
	vVar21.f_2 = 2019543834;
	_datafile_get_hash(&iVar0, &vVar21);
	_datafile_get_string(&uVar13, &vVar21);
	if (func_191(iParam5) && func_1046(&vVar21, func_93(iParam5)))
	{
		vVar21.f_2 = 2019543834;
		_datafile_get_hash(&iVar1, &vVar21);
		_datafile_get_string(&uVar5, &vVar21);
	}
	if (iVar0 == 0 && iVar1 == 0)
	{
		*bParam4 = 1;
		return vVar2;
	}
	*bParam4 = 0;
	return func_462(func_1047(iVar1 != 0, &uVar5, &uVar13));
}

bool func_779(var uParam0, int iParam1)
{
	if (!func_1048(uParam0, iParam1))
	{
		return false;
	}
	uParam0->f_2 = -1782208300;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	return true;
}

bool func_780(var uParam0, int iParam1)
{
	if (!_0x603ac35fd4602c76(iParam1))
	{
		return false;
	}
	*uParam0 = iParam1;
	uParam0->f_1 = uVar0;
	return true;
}

char* func_781(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

bool func_782(struct<5> Param0, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	Param0.f_2 = iParam6;
	Param0.f_3 = iParam7;
	Param0.f_4 = iParam8;
	if (!_datafile_get_data_node_index(iParam5, &Param0))
	{
		return false;
	}
	return true;
}

var func_783(struct<5> Param0)
{
	return func_1049(Param0, -1248823782);
}

var func_784(var uParam0)
{
	iVar0 = func_1051(0, (func_1050() - 1), &uParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	return func_1052(iVar0);
}

var func_785(struct<5> Param0)
{
	return func_1049(Param0, 842085562);
}

bool func_786(var uParam0)
{
	return (*uParam0 != -1 && uParam0->f_1 != 0);
}

int func_787(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	if (!func_1053(&uVar0, iParam0))
	{
		return 0;
	}
	return func_1054(&uVar0, uParam1, uParam2, bParam3);
}

int func_788(int iParam0, var uParam1, bool bParam2)
{
	iVar1 = func_199(iParam0);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		if (func_1055(iParam0, iVar0) != *uParam1)
		{
		}
		else if (func_1056(iParam0, iVar0) != uParam1->f_1)
		{
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	if (bParam2)
	{
		return iVar1;
	}
	return -1;
}

void func_789(int iParam0, int iParam1)
{
	if (func_205(&((*Global_1120070)[iParam0]->f_24.f_2062), iParam1, 3))
	{
	}
}

void func_790(int iParam0, int iParam1, int iParam2)
{
	if (func_205((*Global_1120070)[iParam0]->f_24.f_2074[iParam1], iParam2, 3))
	{
	}
}

int func_791(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			return 0;
		case 10:
			return 1;
		case 11:
			return 2;
		case 16:
			return 3;
		default:
			break;
	}
	return -1;
}

int func_792(int iParam0)
{
	return (func_557(iParam0, 1) - 1);
}

void func_793(var uParam0, var uParam1)
{
	iVar0 = func_199(*uParam1);
	if (iVar0 >= 62)
	{
		func_1057(*uParam1, 2);
		return;
	}
	if (func_698(uParam0->f_2, 1))
	{
		if (func_607(*uParam1) == -1)
		{
			func_1058(*uParam1, iVar0);
		}
	}
	func_1059(*uParam1, iVar0, uParam0);
	func_1060(*uParam1, iVar0 + 1);
}

bool func_794(var uParam0)
{
	uParam0->f_2 = -1266254117;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	return true;
}

bool func_795(vector3 vParam0, var uParam3, var uParam4, int iParam5, int* iParam6)
{
	if (!func_1061(&vParam0, iParam5))
	{
		return false;
	}
	iVar0 = 0;
	vParam0.f_2 = -2137705453;
	if (!_datafile_get_hash(&iVar0, &vParam0))
	{
		return false;
	}
	iVar1 = iVar0;
	iVar2 = func_1062(iVar1, 1);
	if (iVar2 < 0 || iVar2 > 31)
	{
		return false;
	}
	set_bit(iParam6, iVar2);
	return true;
}

bool func_796(var uParam0)
{
	uParam0->f_2 = 1250184037;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

bool func_797(vector3 vParam0, var uParam3, var uParam4, int iParam5, int iParam6)
{
	if (!func_1063(&vParam0, iParam6))
	{
		return false;
	}
	vParam0.f_2 = 1798123698;
	if (!_datafile_get_hash(&iVar0, &vParam0))
	{
		return false;
	}
	if (iVar0 == 0)
	{
		return false;
	}
	iVar1 = iVar0;
	iVar2 = func_1064(iVar1);
	if (iVar2 != 0)
	{
		*iParam5 = (*iParam5 || iVar2);
	}
	return true;
}

bool func_798(var uParam0)
{
	uParam0->f_2 = 1142477451;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

bool func_799(var uParam0, var uParam1)
{
	uParam0->f_1 = uVar0;
	*uParam0 = uParam1;
	uParam0->f_2 = 1372075093;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	return true;
}

bool func_800(var uParam0, int iParam1)
{
	uParam0->f_2 = -607359033;
	uParam0->f_3 = iParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

int func_801(vector3 vParam0, var uParam3, var uParam4)
{
	vParam0.f_2 = 271069761;
	if (!_datafile_get_hash(&uVar0, &vParam0))
	{
		return 0;
	}
	return uVar0;
}

bool func_802(var uParam0)
{
	uParam0->f_2 = 1401821022;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	return true;
}

int func_803(vector3 vParam0, var uParam3, var uParam4)
{
	vParam0.f_2 = 271069761;
	if (!_datafile_get_hash(&uVar0, &vParam0))
	{
		return 0;
	}
	return uVar0;
}

Vector3 func_804(vector3 vParam0, var uParam3, var uParam4)
{
	vParam0.f_2 = -339551293;
	if (!_datafile_get_vector(&vVar0, &vParam0))
	{
	}
	return vVar0;
}

var func_805(vector3 vParam0, var uParam3, var uParam4)
{
	vParam0.f_2 = 1493566732;
	if (!_datafile_get_float(&uVar0, &vParam0))
	{
	}
	return uVar0;
}

int func_806(vector3 vParam0, var uParam3, var uParam4)
{
	vParam0.f_2 = 1407961884;
	if (!_datafile_get_hash(&uVar0, &vParam0))
	{
		return 0;
	}
	return uVar0;
}

Vector3 func_807(vector3 vParam0, var uParam3, var uParam4)
{
	vParam0.f_2 = 108319586;
	if (!_datafile_get_vector(&vVar0, &vParam0))
	{
	}
	return vVar0;
}

var func_808(vector3 vParam0, var uParam3, var uParam4)
{
	vParam0.f_2 = 1958896072;
	if (!_datafile_get_float(&uVar0, &vParam0))
	{
	}
	return uVar0;
}

struct<4> func_809(vector3 vParam0, var uParam3, var uParam4)
{
	vParam0.f_2 = -2079257644;
	if (!_datafile_get_string(&Var0, &vParam0))
	{
		return Var8;
	}
	Var8 = { func_830(func_829(Var0)) };
	return Var8;
}

int func_810(vector3 vParam0, var uParam3, var uParam4)
{
	vParam0.f_2 = 1690645077;
	if (!_datafile_get_hash(&uVar0, &vParam0))
	{
		return 0;
	}
	return uVar0;
}

bool func_811(var uParam0)
{
	uParam0->f_2 = -1426815576;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	return true;
}

bool func_812(var uParam0)
{
	uParam0->f_2 = 899166212;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	return true;
}

bool func_813(var uParam0)
{
	uParam0->f_2 = -786270192;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	return true;
}

bool func_814(var uParam0, int iParam1)
{
	uParam0->f_2 = 608242665;
	uParam0->f_3 = iParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

var func_815(vector3 vParam0, var uParam3, var uParam4)
{
	vParam0.f_2 = -260632549;
	if (!_datafile_get_float(&uVar0, &vParam0))
	{
	}
	return uVar0;
}

bool func_816(var uParam0)
{
	uParam0->f_2 = -666456239;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	return true;
}

void func_817(struct<5> Param0, var uParam5, int iParam6)
{
	if (!func_1065(&Param0, iParam6))
	{
		return;
	}
	iVar3 = func_1066(Param0);
	iVar2 = func_1067(iVar3, 1);
	if (iVar2 < 0 || iVar3 == 0)
	{
		return;
	}
	if (_does_volume_exist(&(uParam5->f_65[iVar2])))
	{
		_delete_volume(&(uParam5->f_65[iVar2]));
	}
	Var4 = { func_1068(Param0) };
	iVar1 = func_239(Param0, 630918774);
	uParam5->f_65[iVar2] = _create_volume_aggregate_with_custom_name(&Var4);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		func_1069(Param0, uParam5->f_65[iVar2], iVar0);
		iVar0++;
	}
}

bool func_818(var uParam0, int iParam1)
{
	uParam0->f_2 = 635413302;
	uParam0->f_3 = iParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

int func_819(vector3 vParam0, var uParam3, var uParam4)
{
	vParam0.f_2 = 271069761;
	if (!_datafile_get_hash(&uVar0, &vParam0))
	{
		return 0;
	}
	return uVar0;
}

int func_820(int iParam0)
{
	switch (iParam0)
	{
		case -243212981:
			return 1;
		case -1053371719:
			return 2;
		case 1927688563:
			return 4;
		case 1435729306:
			return 8;
		case -658614583:
			return 16;
		case -1779188720:
			return 32;
		case -853857639:
			return 64;
		case 595137852:
			return 128;
		default:
			break;
	}
	return 0;
}

int func_821(vector3 vParam0, var uParam3, var uParam4)
{
	vParam0.f_2 = 271069761;
	if (!_datafile_get_hash(&uVar0, &vParam0))
	{
		return 0;
	}
	return uVar0;
}

int func_822(int iParam0)
{
	switch (iParam0)
	{
		case 1342794113:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_823(vector3 vParam0, var uParam3, var uParam4)
{
	vParam0.f_2 = 271069761;
	if (!_datafile_get_hash(&uVar0, &vParam0))
	{
		return 0;
	}
	return uVar0;
}

int func_824(int iParam0)
{
	switch (iParam0)
	{
		case -921824043:
			return 1;
		case 292299110:
			return 2;
		case -529092932:
			return 4;
		case -1327698190:
			return 8;
		case -2136003008:
			return 16;
		case 948581625:
			return 32;
		case 1892344628:
			return 64;
		case -75682885:
			return 128;
		case -613137805:
			return 256;
		case -826093440:
			return 512;
		case -1445004812:
			return 1024;
		case 1821265498:
			return 2048;
		case -939288664:
			return 4096;
		case 46042116:
			return 8192;
		default:
			break;
	}
	return 0;
}

int func_825(vector3 vParam0, var uParam3, var uParam4)
{
	vParam0.f_2 = 271069761;
	if (!_datafile_get_hash(&uVar0, &vParam0))
	{
		return 0;
	}
	return uVar0;
}

int func_826(int iParam0)
{
	switch (iParam0)
	{
		case -1399578431:
			return 1;
		case -1653019155:
			return 2;
		case -463259905:
			return 4;
		case -1901579886:
			return 8;
		case 80613250:
			return 16;
		case 1841577646:
			return 32;
		case 760099737:
			return 64;
		case 584569423:
			return 128;
		case -60413209:
			return 256;
		case -1584069546:
			return 512;
		case -1801806830:
			return 1024;
		case 740398950:
			return 2048;
		case -1196538025:
			return 4096;
		case 1194147661:
			return 8192;
		case -1023181685:
			return 16384;
		default:
			break;
	}
	return 0;
}

int func_827(vector3 vParam0, var uParam3, var uParam4)
{
	vParam0.f_2 = 271069761;
	if (!_datafile_get_hash(&uVar0, &vParam0))
	{
		return 0;
	}
	return uVar0;
}

int func_828(int iParam0)
{
	switch (iParam0)
	{
		case -83251148:
			return 1;
		case -481311403:
			return 2;
		case -2034206938:
			return 4;
		case -10346330:
			return 8;
		case -1122160375:
			return 16;
		case 472588819:
			return 32;
		case 1830115867:
			return 64;
		case -1940466179:
			return 128;
		default:
			break;
	}
	return 0;
}

char* func_829(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

struct<4> func_830(char* sParam0)
{
	StringCopy(&cVar0, sParam0, 32);
	return cVar0;
}

bool func_831(var uParam0, int iParam1)
{
	uParam0->f_2 = -245080631;
	uParam0->f_3 = iParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

int func_832(vector3 vParam0, var uParam3, var uParam4)
{
	vParam0.f_2 = 271069761;
	if (!_datafile_get_hash(&uVar0, &vParam0))
	{
		return 0;
	}
	return uVar0;
}

int func_833(struct<5> Param0, var uParam5, int iParam6, var uParam7)
{
	iVar1 = func_239(Param0, 1549541);
	uVar2 = Param0.f_1;
	if (iVar1 > 7)
	{
		iVar1 = 7;
	}
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Param0.f_1 = uVar2;
		if (!func_1070(&Param0, iVar0))
		{
			return 0;
		}
		if (!func_1071(Param0, uParam5->f_280[&uParam5->f_721[1]], uParam7))
		{
			return 0;
		}
		uParam5->f_721[1] = &uParam5->f_721[1] + 1;
		iVar0++;
	}
	return 1;
}

int func_834(struct<5> Param0, var uParam5, int iParam6, var uParam7)
{
	iVar1 = func_239(Param0, 1549541);
	uVar2 = Param0.f_1;
	if (iVar1 > 7)
	{
		iVar1 = 7;
	}
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Param0.f_1 = uVar2;
		if (!func_1070(&Param0, iVar0))
		{
			return 0;
		}
		if (!func_1071(Param0, uParam5->f_456[&uParam5->f_721[2]], uParam7))
		{
			return 0;
		}
		uParam5->f_721[2] = &uParam5->f_721[2] + 1;
		iVar0++;
	}
	return 1;
}

int func_835(struct<5> Param0, var uParam5, int iParam6, var uParam7)
{
	iVar1 = func_239(Param0, 1549541);
	uVar2 = Param0.f_1;
	if (iVar1 > 2)
	{
		iVar1 = 2;
	}
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Param0.f_1 = uVar2;
		if (!func_1070(&Param0, iVar0))
		{
			return 0;
		}
		if (!func_1071(Param0, &(uParam5->f_227[&uParam5->f_721[3]]->f_1), uParam7))
		{
			return 0;
		}
		uParam5->f_721[3] = &uParam5->f_721[3] + 1;
		iVar0++;
	}
	return 1;
}

int func_836(struct<5> Param0, var uParam5, int iParam6, var uParam7)
{
	iVar1 = func_239(Param0, 1549541);
	uVar2 = Param0.f_1;
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Param0.f_1 = uVar2;
		if (&uParam5->f_721[4] >= 6)
		{
		}
		else
		{
			if (!func_1070(&Param0, iVar0))
			{
				return 0;
			}
			if (func_243(Param0, uParam7))
			{
			}
			else
			{
				if (!func_1071(Param0, &(uParam5->f_70[&uParam5->f_721[4]]->f_1), uParam7))
				{
					return 0;
				}
				uParam5->f_721[4] = &uParam5->f_721[4] + 1;
			}
			iVar0++;
		}
	}
	return 1;
}

bool func_837(var uParam0, int iParam1)
{
	if (!func_779(uParam0, iParam1))
	{
		return false;
	}
	uParam0->f_2 = 1280983896;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	return true;
}

bool func_838(var uParam0, int iParam1)
{
	uParam0->f_2 = -1808878008;
	uParam0->f_3 = iParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

bool func_839(var uParam0, int iParam1)
{
	uParam0->f_2 = 824485797;
	uParam0->f_3 = iParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

bool func_840(var uParam0, int iParam1)
{
	uParam0->f_2 = 2016458991;
	uParam0->f_3 = iParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

bool func_841(vector3 vParam0, var uParam3, var uParam4, int iParam5, int iParam6, var uParam7, var uParam8)
{
	if (!func_1072(&vParam0, iParam6))
	{
		return false;
	}
	vParam0.f_2 = 1798123698;
	if (!_datafile_get_hash(&iVar0, &vParam0))
	{
		return false;
	}
	if (iVar0 == 0)
	{
		return false;
	}
	iVar2 = iVar0;
	iVar3 = func_1073(iVar2);
	vParam0.f_2 = 946618725;
	if (_datafile_get_bool(&uVar1, &vParam0))
	{
		func_421(uParam8, iVar3);
	}
	else
	{
		func_414(uParam8, iVar3);
	}
	return true;
}

bool func_842(vector3 vParam0, var uParam3, var uParam4, int iParam5, int iParam6, var uParam7, var uParam8)
{
	if (!func_1072(&vParam0, iParam6))
	{
		return false;
	}
	vParam0.f_2 = 1798123698;
	if (!_datafile_get_hash(&iVar0, &vParam0))
	{
		return false;
	}
	if (iVar0 == 0)
	{
		return false;
	}
	iVar2 = iVar0;
	iVar3 = func_1074(iVar2);
	vParam0.f_2 = 946618725;
	if (_datafile_get_bool(&uVar1, &vParam0))
	{
		func_421(uParam8, iVar3);
	}
	else
	{
		func_414(uParam8, iVar3);
	}
	return true;
}

bool func_843(var uParam0, int iParam1)
{
	uParam0->f_2 = 787092883;
	uParam0->f_3 = iParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

int func_844(int iParam0, bool bParam1, bool bParam2)
{
	if (!is_door_registered_with_system(iParam0))
	{
		if ((network_is_in_session() && _does_thread_exist(&(Global_1051252->f_16[0]))) && bParam1)
		{
			_0xd99229fe93b46286(iParam0, 1, 1, 0, &(Global_1051252->f_16[0]), 0, 0);
		}
		else
		{
			_0xd99229fe93b46286(iParam0, 1, 0, 0, 0, 0, 0);
		}
	}
	else if ((network_is_in_session() && _does_thread_exist(&(Global_1051252->f_16[0]))) && bParam1)
	{
		if (!_0xb5ded7b65c604fdf(iParam0))
		{
			_0xd99229fe93b46286(iParam0, 1, 1, 0, &(Global_1051252->f_16[0]), 0, 0);
		}
	}
	if (bParam2)
	{
		_0x1f1fabfe9b2a1254(iParam0, 1);
	}
	return iParam0;
}

bool func_845(int iParam0)
{
	if (func_1075(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

int func_846(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_847(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_848(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_1076(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_849(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_850(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_851(int iParam0, int iParam1)
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

int func_852(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 493038497;
		case 1:
			return 303108068;
		case 2:
			return -910931556;
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

void func_853(var uParam0, int iParam1, int iParam2, int iParam3)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_854(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	if (!func_1077(&Var0, iParam0, iParam1, iParam2, uParam4))
	{
		return 0;
	}
	if (!func_1078(&Var0))
	{
		return 0;
	}
	if (!func_1079(&Var0, uParam3, 0))
	{
		return 0;
	}
	return func_512(Var0);
}

void func_855(var uParam0, int iParam1, int iParam2, int iParam3)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_856(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 4;
		case 2:
			return 8;
		default:
			break;
	}
	return 0;
}

bool func_857(int iParam0, int iParam1)
{
	return func_1080(iParam0, func_856(iParam1));
}

void func_858(int iParam0, int iParam1)
{
	(*Global_1130634)[iParam0]->f_2[iParam1]->f_4 = Global_1296859->f_21;
}

int func_859(bool bParam0, bool bParam1, bool bParam2)
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

void func_860(var uParam0, var uParam1, int iParam2)
{
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_7.f_1 = -1;
	Var0.f_10 = 255;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = 7;
	Var0.f_19.f_1 = 255;
	Var0.f_19.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_27.f_1 = -1;
	if (!get_event_data(1, iParam2, &Var0, 31))
	{
		return;
	}
	if (Var0.f_11 == 0)
	{
		return;
	}
	if (!_0x93a91a351a07360e(Var0.f_11))
	{
		return;
	}
	if (!func_191(Var0.f_6))
	{
		return;
	}
	if (Var0.f_6 != uParam1->f_1)
	{
		return;
	}
	if (!func_11(Var0.f_5))
	{
		return;
	}
	if (Var0.f_5 != uParam1->f_2)
	{
		return;
	}
	if (((Var0.f_16 != 1545958071 && Var0.f_16 != -448995989) && Var0.f_16 != 304038664) && Var0.f_4 != 8)
	{
		if (!func_1081(uParam0, Var0.f_15))
		{
			return;
		}
	}
	switch (Var0.f_4)
	{
		case 7:
			func_1082(uParam0, uParam1, &Var0);
			break;
	}
}

void func_861(var uParam0, var uParam1, int iParam2)
{
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_7 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	if (!get_event_data(1, iParam2, &Var0, 12))
	{
		return;
	}
	if (Var0.f_4 != 1)
	{
		return;
	}
	if (func_93(uParam1->f_1) != Var0.f_6)
	{
		return;
	}
	func_279(uParam0, Var0.f_5, 3);
	func_1083(uParam0, Var0.f_5, Var0.f_8);
	func_1084(uParam0, Var0.f_5, Var0.f_9);
	func_1085(uParam0, Var0.f_5, Var0.f_10);
	func_1086(uParam0, Var0.f_5, Var0.f_11);
}

int func_862(var uParam0)
{
	return func_1087(func_863(uParam0, 34, 1));
}

int func_863(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = iParam1;
	if (!_datafile_get_hash(&uVar0, uParam0))
	{
	}
	return uVar0;
}

bool func_864(int iParam0, int iParam1)
{
	return func_204(Global_1109804->f_6371.f_3[iParam1], iParam0, 3);
}

bool func_865(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_866(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

void func_867(var uParam0, int iParam1)
{
	func_1088(uParam0, iParam1);
}

void func_868(var uParam0, int iParam1)
{
	func_1089(uParam0, iParam1);
}

int func_869(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (iParam2 & 1 != 0)
	{
		if (func_1090(uParam0, uParam1))
		{
			iVar0 |= 1;
		}
	}
	if (iParam2 & 6 != 0)
	{
		if (func_1091(iParam3))
		{
			if (iParam2 & 4 != 0)
			{
				iVar0 |= 4;
			}
		}
		else if (iParam2 & 2 != 0)
		{
			iVar0 |= 2;
		}
	}
	if (iParam2 & 8 != 0)
	{
		if (func_1092(uParam1))
		{
			iVar0 |= 8;
		}
	}
	if (iParam2 & 112 != 0)
	{
		if (func_1093(uParam0, iParam2 & 32 != 0))
		{
			if (iParam2 & 32 != 0)
			{
				iVar0 |= 32;
			}
			if (iParam2 & 64 != 0)
			{
				iVar0 |= 64;
			}
		}
		else if (iParam2 & 16 != 0)
		{
			iVar0 |= 16;
		}
	}
	if ((iParam6 == 0 && iParam2 & 128 != 0) && !func_1094(iParam4, func_93(uParam1->f_1)))
	{
		if (!func_1095(uParam0, uParam1, iParam5))
		{
			iVar0 |= 128;
		}
	}
	if (iParam2 & 3072 != 0)
	{
		if (iParam2 & 1024 != 0)
		{
			iVar1 = func_304(uParam0, 303108068, 1);
			if (iVar1 != -1)
			{
				if (does_entity_exist(&(uParam0->f_948.f_1[iVar1])))
				{
					if (is_entity_visible(&(uParam0->f_948.f_1[iVar1])))
					{
						iVar0 |= 1024;
					}
				}
			}
			iVar1 = func_304(uParam0, 303108068, 0);
			if (iVar1 != -1)
			{
				if (does_entity_exist(&(uParam0->f_112.f_200[iVar1])))
				{
					if (is_entity_visible(&(uParam0->f_112.f_200[iVar1])))
					{
						iVar0 |= 1024;
					}
				}
			}
		}
		if (iParam2 & 2048 != 0)
		{
			iVar1 = func_304(uParam0, -910931556, 1);
			if (iVar1 != -1)
			{
				if (does_entity_exist(&(uParam0->f_948.f_1[iVar1])))
				{
					if (is_entity_visible(&(uParam0->f_948.f_1[iVar1])))
					{
						iVar0 |= 2048;
					}
				}
			}
			iVar1 = func_304(uParam0, -910931556, 0);
			if (iVar1 != -1)
			{
				if (does_entity_exist(&(uParam0->f_112.f_200[iVar1])))
				{
					if (is_entity_visible(&(uParam0->f_112.f_200[iVar1])))
					{
						iVar0 |= 2048;
					}
				}
			}
		}
	}
	if (iParam2 & 768 != 0)
	{
		if (func_899(uParam0, uParam1, 1))
		{
			if (iParam2 & 256 != 0)
			{
				iVar0 |= 256;
			}
		}
		else if (iParam2 & 512 != 0)
		{
			iVar0 |= 512;
		}
	}
	if (iParam2 & 28672 != 0)
	{
		if (iParam2 & 4096 != 0)
		{
			if (func_283(uParam0, 0) == 0)
			{
				iVar0 |= 4096;
			}
		}
		if (iParam2 & 8192 != 0)
		{
			if (func_283(uParam0, 1) == 0)
			{
				iVar0 |= 8192;
			}
		}
		if (iParam2 & 16384 != 0)
		{
			if ((func_283(uParam0, 2) == 0 && func_336() == -1) && !func_29(*uParam1, 512))
			{
				iVar0 |= 16384;
			}
		}
	}
	return iVar0;
}

bool func_870(int iParam0)
{
	return iParam0 != 0;
}

int func_871(var uParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = 0;
	if (func_1096(uParam0, iParam1))
	{
		iVar0 |= 1;
	}
	if (func_1097(uParam0))
	{
		iVar0 |= 8;
	}
	if (func_1098(uParam0))
	{
		iVar0 |= 2;
	}
	if (func_1099(uParam0))
	{
		iVar0 |= 4;
	}
	if (func_1100(uParam0))
	{
		iVar0 |= 16;
	}
	if (func_618(uParam0, iParam1))
	{
		iVar0 |= 32;
	}
	return iVar0;
}

int func_872(var uParam0)
{
	iVar0 = 0;
	if (func_283(uParam0, 0) != 0)
	{
		iVar0++;
	}
	if (func_283(uParam0, 1) != 0)
	{
		iVar0++;
	}
	if (func_283(uParam0, 2) != 0)
	{
		iVar0++;
	}
	if (func_336() != -1)
	{
		iVar0++;
	}
	return iVar0;
}

char* func_873(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Poster0";
		case 1:
			return "Poster1";
		case 2:
			return "Poster2";
		default:
			break;
	}
	return "Poster0";
}

char* func_874(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "legendaryPoster0";
		case 1:
			return "legendaryPoster1";
		case 2:
			return "legendaryPoster2";
		default:
			break;
	}
	return "Poster0";
}

void func_875(var uParam0, int iParam1)
{
	if (uParam0->f_39[iParam1]->f_14)
	{
		uParam0->f_39[iParam1]->f_1 = _databinding_add_data_bool(&(uParam0->f_39[iParam1]), "isVisible", 0);
		uParam0->f_39[iParam1]->f_2 = _databinding_add_data_bool(&(uParam0->f_39[iParam1]), "isDiffVisible", 0);
		uParam0->f_39[iParam1]->f_9 = _databinding_add_data_int(&(uParam0->f_39[iParam1]), "type", 0);
		uParam0->f_39[iParam1]->f_8 = _databinding_add_data_int(&(uParam0->f_39[iParam1]), "difficulty", 0);
		uParam0->f_39[iParam1]->f_4 = _databinding_add_data_string(&(uParam0->f_39[iParam1]), "price", "");
		uParam0->f_39[iParam1]->f_7 = _databinding_add_data_string(&(uParam0->f_39[iParam1]), "body", "");
		uParam0->f_39[iParam1]->f_3 = _databinding_add_data_string(&(uParam0->f_39[iParam1]), "header", "");
		uParam0->f_39[iParam1]->f_6 = _databinding_add_data_string(&(uParam0->f_39[iParam1]), "name", "");
		uParam0->f_39[iParam1]->f_12 = _databinding_add_data_hash(&(uParam0->f_39[iParam1]), "tex", 0);
		uParam0->f_39[iParam1]->f_11 = _databinding_add_data_hash(&(uParam0->f_39[iParam1]), "txd", 0);
		uParam0->f_39[iParam1]->f_14 = 0;
	}
	else
	{
		_databinding_write_data_bool(uParam0->f_39[iParam1]->f_1, false);
		_databinding_write_data_bool(uParam0->f_39[iParam1]->f_2, false);
		_databinding_write_data_int(uParam0->f_39[iParam1]->f_9, 0);
		_databinding_write_data_int(uParam0->f_39[iParam1]->f_8, 0);
		_databinding_write_data_string(uParam0->f_39[iParam1]->f_7, "");
		_databinding_write_data_string(uParam0->f_39[iParam1]->f_3, "");
		_databinding_write_data_string(uParam0->f_39[iParam1]->f_6, "");
		_databinding_write_data_string(uParam0->f_39[iParam1]->f_4, "");
		_databinding_write_data_hash_string(uParam0->f_39[iParam1]->f_12, 0);
		_databinding_write_data_hash_string(uParam0->f_39[iParam1]->f_11, 0);
	}
}

var func_876(int iParam0, int iParam1)
{
	return (*Global_1297047)[iParam0][iParam1];
}

int func_877(int iParam0, int iParam1)
{
	return &((*Global_1297047)[iParam0]->f_3[iParam1]);
}

var func_878(int iParam0)
{
	return &(Global_1297047->f_371[iParam0]);
}

var func_879(int iParam0)
{
	return (*Global_1297047)[iParam0]->f_10;
}

void func_880(var uParam0, var uParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, struct<16> Param10)
{
	*uParam0 = _databinding_add_data_container(uParam1, &cParam2);
	uParam0->f_1 = _databinding_add_data_bool(*uParam0, func_881(0), Param10);
	uParam0->f_2 = _databinding_add_data_bool(*uParam0, func_881(1), Param10.f_1);
	uParam0->f_3 = _databinding_add_data_hash(*uParam0, func_881(2), Param10.f_2);
	uParam0->f_4 = _databinding_add_data_hash(*uParam0, func_881(54), Param10.f_3);
	uParam0->f_5 = _databinding_add_data_hash(*uParam0, func_881(55), Param10.f_4);
	uParam0->f_7 = _databinding_add_data_hash(*uParam0, func_881(57), Param10.f_5);
	uParam0->f_6 = _databinding_add_data_hash(*uParam0, func_881(56), Param10.f_6);
	if (Param10.f_7 == 0)
	{
		Param10.f_7 = -672301300;
	}
	uParam0->f_8 = _databinding_add_data_hash(*uParam0, func_881(58), Param10.f_7);
	uParam0->f_9 = _databinding_add_data_bool(*uParam0, func_881(59), Param10.f_8);
	uParam0->f_10 = _databinding_add_data_bool(*uParam0, func_881(60), Param10.f_9);
	uParam0->f_11 = _databinding_add_data_hash(*uParam0, func_881(61), Param10.f_10);
	uParam0->f_13 = _databinding_add_data_hash(*uParam0, func_881(67), Param10.f_11);
	uParam0->f_12 = _databinding_add_data_hash(*uParam0, func_881(62), Param10.f_12);
	if (Param10.f_13 == 0)
	{
		Param10.f_13 = -672301300;
	}
	uParam0->f_14 = _databinding_add_data_hash(*uParam0, func_881(64), Param10.f_13);
	uParam0->f_15 = _databinding_add_data_bool(*uParam0, func_881(65), Param10.f_14);
	uParam0->f_16 = _databinding_add_data_bool(*uParam0, func_881(66), Param10.f_15);
}

char* func_881(int iParam0)
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

var func_882(int iParam0, int iParam1)
{
	return &((*Global_1297047)[iParam0]->f_31[iParam1]);
}

char* func_883(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 4:
			return "GFH_REPLAY_BOUNTY_REPLAY_DIFFICULTY_INCREASING";
		case 5:
			return "GFH_REPLAY_BOUNTY_REPLAY_DIFFICULTY_MAX";
		default:
			break;
	}
	return "";
}

bool func_884(var uParam0)
{
	if (uParam0->f_108 == -1)
	{
		return false;
	}
	iVar0 = func_571(uParam0->f_108, 1);
	if (!_unlock_is_unlocked(iVar0) || !_unlock_is_visible(iVar0))
	{
		return false;
	}
	iVar0 = func_572(uParam0->f_108, 1);
	if (!_unlock_is_unlocked(iVar0) || !_unlock_is_visible(iVar0))
	{
		return false;
	}
	return true;
}

bool func_885()
{
	return func_1101(_0x901e0dc25080c8b9(player_id()));
}

bool func_886(int iParam0)
{
	if (!_0x0f99f6436528a089(_0x901e0dc25080c8b9(iParam0)))
	{
		return false;
	}
	if (!_0x424b17a7dc5c90bc(iParam0))
	{
		return false;
	}
	iVar51 = _0xd1bf325c8252a982(_0x901e0dc25080c8b9(iParam0), &Var0);
	iVar50 = 0;
	while (iVar50 <= (iVar51 - 1))
	{
		iVar52 = network_get_player_from_gamer_handle(Var0[iVar50]);
		if (!network_is_player_active(iVar52) || is_player_dead(iVar52))
		{
		}
		else if (func_302(1048576, iVar52))
		{
			return true;
		}
		iVar50++;
	}
	return false;
}

int func_887()
{
	if (func_886(_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id()))))
	{
		return get_hash_key("GFH_REPLAY_BOUNTY_JAILED_MEMBER");
	}
	else if (func_885())
	{
		return get_hash_key("GFH_HELP_POSSE_TOO_LARGE_TO_ACCEPT_LEGENDARY_BOUNTY");
	}
	else if (!_databinding_read_data_bool_from_parent(Global_1120070->f_8495.f_5, "dynamic_list_item_enabled") && Global_1120070->f_8495.f_3)
	{
		return get_hash_key("GFH_REPLAY_BOUNTY_NOT_AVAILABLE");
	}
	else
	{
		return get_hash_key("GFH_REPLAY_BOUNTY_AVAILABLE");
	}
	return get_hash_key("GFH_REPLAY_BOUNTY_AVAILABLE");
}

void func_888(char* sParam0, int iParam1)
{
	_databinding_write_data_string(Global_1940311->f_1433.f_54.f_5, sParam0);
	if (_databinding_is_data_id_valid(Global_1940311->f_1433.f_54.f_6))
	{
		_databinding_write_data_hash_string(Global_1940311->f_1433.f_54.f_6, iParam1);
	}
}

var func_889(int iParam0, int iParam1)
{
	return &((*Global_1297047)[iParam0]->f_25[iParam1]);
}

char* func_890(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

struct<8> func_891(var uParam0)
{
	return func_1102(uParam0, 28, 1);
}

struct<8> func_892(var uParam0)
{
	return func_1102(uParam0, 29, 1);
}

int func_893(int iParam0)
{
	switch (iParam0)
	{
		case 1100375982:
			return 1637396385;
		case 734354744:
			return -750821175;
		case -8716208:
			return 863859481;
		case 130824026:
			return -1564456688;
		case -705903163:
			return -43444905;
		case -190306145:
			return 878149797;
		case -1211851008:
			return -1972063755;
		case 842749101:
			return 1140320446;
		case -384872762:
			return -928778254;
		case 220113328:
			return -291799454;
		case -920491224:
			return 575720194;
		case 539824333:
			return 1886703229;
		case 1309348282:
			return -1891887312;
		case -701311458:
			return -1521318110;
		case 2048329431:
			return 1231714993;
		case -1601260627:
			return -197170169;
		case -1239926065:
			return -1157925372;
		case -604384854:
			return -853455962;
		case -399874304:
			return -1060127263;
		case -743855838:
			return -1490734701;
		case 1782409743:
			return 1685495859;
		case -1801643148:
			return -583455445;
		case -936554981:
			return -567552001;
		case 1693634754:
			return -950321673;
		case 1445116843:
			return 664333876;
		case -1616419296:
			return 515385649;
		case -587679385:
			return 391853669;
		case 279467723:
			return -1520322625;
		case 1301079447:
			return 464168739;
		case 314334361:
			return 1683882639;
		case 92524177:
			return -95879657;
		case 1346815252:
			return 1757204629;
		case -667711246:
			return 2060758004;
		case 2132950130:
			return -177810373;
		case 1766283257:
			return 1442898590;
		case -408236271:
			return 1174971643;
		case -465704507:
			return -1719093715;
		default:
			break;
	}
	return 0;
}

struct<2> func_894(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

int func_895(var uParam0, var uParam1)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return 0;
	}
	if (!stat_id_get_bool(&uParam0, &uVar0))
	{
		return 0;
	}
	return uVar0;
}

bool func_896(var uParam0, int iParam1)
{
	return func_204(&(uParam0->f_25), func_1103(iParam1, 1), 19);
}

void func_897(int iParam0)
{
	Global_1956200->f_1704.f_1 = 0f;
	Global_1956200->f_1704 = iParam0;
}

void func_898(int iParam0, int iParam1)
{
	fVar0 = func_1104(iParam1);
	if (iParam0 == 0)
	{
		if (!is_entity_dead(Global_1296859->f_8))
		{
			set_ped_max_move_blend_ratio(Global_1296859->f_8, fVar0);
		}
	}
	else if (iParam0 == 1)
	{
		if (!is_ped_injured(Global_1296859->f_8))
		{
			iVar1 = get_mount(Global_1296859->f_8);
			if (!does_entity_exist(iVar1))
			{
				return;
			}
			if (!is_entity_dead(iVar1))
			{
				set_ped_max_move_blend_ratio(iVar1, fVar0);
			}
		}
	}
	else if (iParam0 == 2)
	{
		iVar2 = get_vehicle_ped_is_using(Global_1296859->f_8);
		if (!does_entity_exist(iVar2))
		{
			return;
		}
		if (is_vehicle_driveable(iVar2, false, false))
		{
			iVar3 = 0;
			while (iVar3 <= (6 - 1))
			{
				iVar4 = _get_ped_in_draft_seat(iVar2, iVar3);
				if (!is_entity_dead(iVar4))
				{
					set_ped_max_move_blend_ratio(iVar4, fVar0);
				}
				iVar3++;
			}
		}
	}
}

bool func_899(var uParam0, var uParam1, bool bParam2)
{
	if (func_255(uParam1->f_2))
	{
		return true;
	}
	if (bParam2)
	{
		if (func_1093(uParam0, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_900(int iParam0, int iParam1)
{
	if (!_network_is_player_index_valid(iParam1) || !network_is_player_active(iParam1))
	{
		return false;
	}
	return is_bit_set((*Global_1056141)[iParam1]->f_41, iParam0);
}

bool func_901(int iParam0, int iParam1)
{
	if (!func_1105(iParam0))
	{
		return false;
	}
	if (!_network_is_player_index_valid(iParam1) || !network_is_player_connected(iParam1))
	{
		return false;
	}
	return _0x8f4f050054005c27(&((*Global_1056141)[iParam1]->f_15.f_20), iParam0);
}

struct<33> func_902(int iParam0, int iParam1)
{
	return *(*Global_1120070)[iParam0]->f_24.f_2[iParam1];
}

int func_903(int iParam0)
{
	iVar0 = func_1106(iParam0);
	iVar1 = func_1107(iParam0, iVar0);
	if (iVar0 != iVar1)
	{
		if (func_1108(iVar1))
		{
			func_1109(iVar1);
			iVar0 = iVar1;
		}
	}
	return iVar0;
}

bool func_904(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, var uParam6, int iParam7, int iParam8)
{
	iVar0 = func_1110(uParam0->f_2);
	iVar1 = func_1111(iVar0);
	if (iParam8 == -1)
	{
		iVar2 = func_1112(iParam5);
	}
	else
	{
		iVar2 = iParam8;
	}
	*uParam6 = 0;
	*uParam6 = func_1113(uParam0);
	if (*uParam6 != 0)
	{
		return true;
	}
	*uParam6 = func_1114(iVar2, iParam7);
	if (*uParam6 != 0)
	{
		return true;
	}
	*uParam6 = func_1115(uParam0, iParam7);
	if (*uParam6 != 0)
	{
		return true;
	}
	*uParam6 = func_1116(uParam0, iParam1, uParam2, iParam7);
	if (*uParam6 != 0)
	{
		return true;
	}
	*uParam6 = func_1117(uParam0, iParam7);
	if (*uParam6 != 0)
	{
		return true;
	}
	*uParam6 = func_1118(iVar2, iParam7);
	if (*uParam6 != 0)
	{
		return true;
	}
	*uParam6 = func_1119(uParam0, iVar2, iParam3, iParam7);
	if (*uParam6 != 0)
	{
		return true;
	}
	*uParam6 = func_1120(uParam0, iParam3, iParam7);
	if (*uParam6 != 0)
	{
		return true;
	}
	*uParam6 = func_1121(iParam3, iParam4, iParam7);
	if (*uParam6 != 0)
	{
		return true;
	}
	*uParam6 = func_1122(iParam3);
	if (*uParam6 != 0)
	{
		return true;
	}
	*uParam6 = func_1123(iParam3, uParam0, iParam7);
	if (*uParam6 != 0)
	{
		return true;
	}
	*uParam6 = func_1124(uParam0, iParam3, iParam7);
	if (*uParam6 != 0)
	{
		return true;
	}
	*uParam6 = func_1125(uParam0, iParam7);
	if (*uParam6 != 0)
	{
		return true;
	}
	*uParam6 = func_1126(uParam0, iParam7);
	if (*uParam6 != 0)
	{
		return true;
	}
	*uParam6 = func_1127(iParam3, iParam7);
	if (*uParam6 != 0)
	{
		return true;
	}
	switch (iVar1)
	{
		case 2:
			*uParam6 = func_1128(uParam0, iParam7, iParam3, iVar2, iParam5);
			break;
		case 1:
			*uParam6 = func_1129(uParam0, iParam7);
			break;
		case 0:
			*uParam6 = func_1130(uParam0, iParam7, iParam3);
			break;
		default:
			*uParam6 = 45;
			break;
	}
	return *uParam6 != 0;
}

var func_905(int iParam0, int iParam1)
{
	return func_1131(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_906(var uParam0, int iParam1, vector3 vParam2, float fParam5)
{
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		iVar12 = int_to_playerindex(iVar2);
		if (!_network_is_player_index_valid(iVar12))
		{
		}
		else if (!network_is_player_active(iVar12))
		{
		}
		else if (!_0x9be7dcb22d32ccbe(iParam1, iVar12))
		{
		}
		else if (_0x424b17a7dc5c90bc(iVar12))
		{
			(*uParam0)[0] = iVar12;
			Jump @159; //curOff = 85
		}
		else if (func_1132(iVar12, vParam2, fParam5))
		{
			if (iVar0 + 1 < 7)
			{
				(*uParam0)[(1 + iVar0)] = iVar12;
				iVar0++;
			}
		}
		else if (iVar1 < 7)
		{
			iVar4[iVar1] = iVar2;
			iVar1++;
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 <= (iVar1 - 1))
	{
		iVar3 = &iVar4[iVar2];
		iVar12 = int_to_playerindex(iVar3);
		if (iVar0 + 1 < 7)
		{
			(*uParam0)[(1 + iVar0)] = iVar12;
			iVar0++;
		}
		iVar2++;
	}
}

void func_907(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 9;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 31, 33, &uParam1);
}

int func_908(char* sParam0)
{
	if (func_77())
	{
		iVar0 = 0;
		while (iVar0 <= (sParam0->f_733 - 1))
		{
			if (sParam0->f_632[iVar0]->f_9 & 128 != 0)
			{
				iVar1 = iVar0;
			}
			else
			{
				iVar0++;
			}
		}
	}
	else
	{
		if (is_ped_male(get_player_ped(player_id())))
		{
			switch (Global_1071686->f_28341.f_2)
			{
				case 0:
					iVar2 = 302420629;
					break;
				case 1:
					iVar2 = -358638071;
					break;
				case 2:
					iVar2 = -596140911;
					break;
				case 3:
					iVar2 = 323628355;
					break;
				default:
					break;
			}
		}
		else
		{
			switch (Global_1071686->f_28341.f_2)
			{
				case 0:
					iVar2 = 1667234773;
					break;
				case 1:
					iVar2 = 18011253;
					break;
				case 2:
					iVar2 = -1058720752;
					break;
				case 3:
					iVar2 = 58670941;
					break;
				default:
					break;
			}
		}
		iVar0 = 0;
		while (iVar0 <= (sParam0->f_733 - 1))
		{
			if (sParam0->f_632[iVar0]->f_10 == iVar2)
			{
				iVar1 = iVar0;
			}
			else
			{
				iVar0++;
			}
		}
	}
	return iVar1;
}

int func_909(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam4 == 0)
	{
		return 0;
	}
	iVar0 = create_itemset(true);
	iVar6 = _0x59b57c4b06531e1e(vParam0, bParam3, iVar0, 3);
	if (iVar6 > 0)
	{
		iVar5 = 0;
		while (iVar5 <= (iVar6 - 1))
		{
			uVar1 = get_indexed_item_in_itemset(iVar5, iVar0);
			iVar2 = _0x18013392501ce5dc(uVar1);
			if (!does_entity_exist(iVar2))
			{
			}
			else if (!is_entity_visible(iVar2) && !bParam5)
			{
			}
			else if (bParam6)
			{
				if (_get_entity_script(iVar2, &uVar7) != -192136878)
				{
				}
				else
				{
					iVar4 = get_entity_model(iVar2);
					if (bParam4 != iVar4)
					{
					}
					else
					{
						iVar3 = iVar2;
					}
					else
					{
						iVar5++;
					}
					destroy_itemset(iVar0);
					return iVar3;
				}
			}
		}
	}
}

bool func_910(var uParam0)
{
	if (!_is_anim_scene_loaded(uParam0->f_1, false, false))
	{
		return false;
	}
	if (!_is_anim_scene_metadata_loaded(uParam0->f_1, false))
	{
		return false;
	}
	return true;
}

int func_911(char* sParam0, var uParam1, int iParam2, int iParam3)
{
	if ((sParam0->f_727[2] + sParam0->f_727[1]) // PointerArith >= sParam0->f_10)
	{
		return 2;
	}
	uVar2 = 7;
	uVar2.f_1 = 255;
	uVar2.f_1.f_1 = 255;
	uVar2.f_1.f_1.f_1 = 255;
	uVar2.f_1.f_1.f_1.f_1 = 255;
	uVar2.f_1.f_1.f_1.f_1.f_1 = 255;
	uVar2.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	uVar2.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	func_349(&uVar2);
	if (iParam3 == 1 || iParam3 == 2)
	{
		if (sParam0->f_10 > 0 && sParam0->f_10 <= 1)
		{
			iVar10 = _0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id()));
			func_1133(sParam0, uParam1, iVar1, iVar10, func_350(iParam2));
			iVar1++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= 6)
		{
			if (iVar1 >= sParam0->f_10)
			{
			}
			else
			{
				if (&uVar2[iVar0] == 255)
				{
				}
				else if (func_351(func_137(&(uVar2[iVar0])), func_350(iParam2)) > func_352(iParam2))
				{
				}
				else if (func_1134(1, &(uVar2[iVar0])))
				{
				}
				else
				{
					func_1133(sParam0, uParam1, iVar1, &(uVar2[iVar0]), func_350(iParam2));
					iVar1++;
				}
				iVar0++;
			}
		}
	}
	return 2;
}

void func_912(var uParam0, char* sParam1, var uParam2)
{
	iVar1 = func_1135(sParam1->f_10, (sParam1->f_727[2] + sParam1->f_727[1]) // PointerArith);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		if (is_player_dead(uParam2[iVar0]))
		{
		}
		else
		{
			switch ((*uParam2)[iVar0]->f_2)
			{
				case 745166621:
					Var2 = { *sParam1->f_280[iVar0] };
					iVar10 = sParam1->f_280[iVar0]->f_12;
					break;
				case -250583361:
					Var2 = { *sParam1->f_456[iVar0] };
					iVar10 = sParam1->f_456[iVar0]->f_12;
					break;
				default:
					Jump @178; //curOff = 152
					set_anim_scene_entity(uParam0->f_1, &Var2, (*uParam2)[iVar0]->f_1, iVar10);
				}
				iVar0++;
			}
		}

void func_913(var uParam0, char* sParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 <= (&sParam1->f_721[4] - 1))
	{
		if (bParam2)
		{
			if (sParam1->f_70[iVar0]->f_1.f_11 & 128 != 0)
			{
				iVar1 = 0;
				while (iVar1 <= 1)
				{
					if (sParam1->f_227[iVar1]->f_1.f_10 == sParam1->f_70[iVar0]->f_1.f_10)
					{
						iVar2 = _0x4d0d2e3d8bc000eb(&(sParam1->f_227[iVar1]), &(sParam1->f_70[iVar0]->f_1.f_17), 0);
						if (does_entity_exist(iVar2))
						{
							sParam1->f_70[iVar0] = _0x4d0d2e3d8bc000eb(&(sParam1->f_227[iVar1]), &(sParam1->f_70[iVar0]->f_1.f_17), 1);
						}
						else
						{
							iVar3 = _get_scenario_point_ped_is_using(&(sParam1->f_227[iVar1]), true);
							if (_does_scenario_point_exist(iVar3))
							{
								sParam1->f_70[iVar0] = _get_scenario_point_entity(iVar3, &(sParam1->f_70[iVar0]->f_1.f_17));
								if (does_entity_exist(&(sParam1->f_70[iVar0])))
								{
									set_entity_as_mission_entity(&(sParam1->f_70[iVar0]), true, true);
								}
							}
						}
					}
					else
					{
						iVar1++;
					}
				}
				if (does_entity_exist(&(sParam1->f_70[iVar0])))
				{
				}
			}
		else
		{
			}
			else
			{
				Jump @301; //curOff = 276
				if (sParam1->f_70[iVar0]->f_1.f_11 & 128 != 0)
				{
				}
				else
				{
					if (!does_entity_exist(&(sParam1->f_70[iVar0])))
					{
						if (sParam1->f_70[iVar0]->f_1.f_11 & 4 != 0)
						{
							sParam1->f_70[iVar0] = func_909(sParam1->f_70[iVar0]->f_1.f_13, sParam1->f_70[iVar0]->f_1.f_13.f_3, sParam1->f_70[iVar0]->f_1.f_9, sParam1->f_70[iVar0]->f_1.f_11 & 8 != 0, sParam1->f_70[iVar0]->f_1.f_11 & 64 != 0);
						}
					}
					if (does_entity_exist(&(sParam1->f_70[iVar0])))
					{
						set_anim_scene_entity(uParam0->f_1, &(sParam1->f_70[iVar0]->f_1), &(sParam1->f_70[iVar0]), sParam1->f_70[iVar0]->f_1.f_12);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_914(var uParam0, char* sParam1)
{
	iVar0 = 0;
	while (iVar0 <= (&sParam1->f_721[3] - 1))
	{
		set_anim_scene_entity(uParam0->f_1, &(sParam1->f_227[iVar0]->f_1), &(sParam1->f_227[iVar0]), sParam1->f_227[iVar0]->f_1.f_12);
		iVar0++;
	}
}

void func_915()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	if (iVar0 == 0)
	{
		return;
	}
	_0x2f901291ef177b02(iVar0, 0);
}

void func_916(int iParam0)
{
	if (iParam0 >= &Global_1940085)
	{
		return;
	}
	Global_1940085->f_1 = iParam0;
}

void func_917()
{
	Global_1051439->f_3259 = get_frame_count();
}

void func_918(bool bParam0, bool bParam1, bool bParam2)
{
	Global_1071686->f_7 = 1;
	if ((Global_1296859->f_21 - Global_1071686->f_9) > 2)
	{
		if (bParam2)
		{
			func_1136(20f);
		}
	}
	Global_1071686->f_9 = Global_1296859->f_21;
	if (bParam0)
	{
		_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar0 = int_to_playerindex(iVar2);
		if (!_network_is_player_index_valid(iVar0))
		{
		}
		else if (!network_is_player_active(iVar0))
		{
		}
		else
		{
			iVar1 = get_player_ped(iVar0);
			if (!does_entity_exist(iVar1))
			{
			}
			else if (network_has_control_of_entity(iVar1))
			{
				set_ped_reset_flag(iVar1, 96, true);
			}
		}
		iVar2++;
	}
	if (func_77())
	{
		_0x236905c700fdb54d();
	}
	set_ped_reset_flag(player_ped_id(), 25, true);
	_0x3c8f74e8fe751614();
	_0x634f4a0562cf19b8();
	func_1137(250);
	if (bParam1)
	{
		_0x5651516d947abc53();
	}
}

void func_919(int iParam0, float fParam1, int iParam2)
{
	func_844(iParam0, 0, 0);
	if (func_845(iParam0))
	{
		door_system_set_open_ratio(iParam0, fParam1, iParam2);
	}
}

void func_920(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

void func_921(char* sParam0)
{
	iVar0 = 0;
	while (iVar0 <= (&sParam0->f_721[4] - 1))
	{
		if (does_entity_exist(&(sParam0->f_70[iVar0])))
		{
			if (func_105(sParam0->f_70[iVar0]->f_1.f_11, 32))
			{
				set_entity_visible(&(sParam0->f_70[iVar0]), true);
				set_entity_collision(&(sParam0->f_70[iVar0]), true, false);
				freeze_entity_position(&(sParam0->f_70[iVar0]), false);
			}
		}
		iVar0++;
	}
}

bool func_922(var uParam0, char* sParam1, var uParam2)
{
	iVar0 = get_player_ped(uParam2[0]);
	if (!does_entity_exist(iVar0))
	{
	}
	else
	{
		iVar1 = &sParam1->f_734[16];
		if (!func_1138(uParam0, sParam1, uParam2, iVar0, iVar1))
		{
			return false;
		}
	}
	return true;
}

void func_923()
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = int_to_playerindex(iVar0);
		if (_network_is_player_index_valid(iVar1))
		{
			if (network_is_player_active(iVar1))
			{
				set_player_invisible_locally(iVar1, true);
			}
		}
		iVar0++;
	}
}

void func_924()
{
	func_1139(0);
}

void func_925(char* sParam0)
{
	if (!func_77())
	{
		return;
	}
	iVar2 = func_1140();
	if (iVar2 == -1)
	{
		return;
	}
	iVar0 = player_id();
	iVar1 = get_player_ped(iVar0);
	set_entity_coords(iVar1, *sParam0->f_28[iVar2], true, false, true, true);
	set_entity_heading(iVar1, sParam0->f_28[iVar2]->f_3);
}

bool func_926(var uParam0, char* sParam1)
{
	if (uParam0->f_3 == -1)
	{
		return false;
	}
	if (_0x8d81e7824b7753f7(uParam0->f_1, &(sParam1->f_632[uParam0->f_3]->f_5), 1))
	{
		return false;
	}
	switch (uParam0->f_4)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 12:
		case 13:
		case 14:
		case 15:
			return false;
		default:
			break;
	}
	return true;
}

void func_927(char* sParam0, var uParam1, bool bParam2, bool bParam3)
{
	iVar0 = func_1140();
	if (iVar0 == -1)
	{
		return;
	}
	iVar3 = player_id();
	iVar4 = get_player_ped(iVar3);
	if (func_77())
	{
		fVar2 = 2.5f;
	}
	else
	{
		iVar0 = Global_1071686->f_28341.f_2;
		fVar2 = 1.5f;
	}
	if (bParam3)
	{
		fVar1 = 0.5f;
	}
	else
	{
		fVar1 = 1f;
		set_entity_coords(iVar4, *sParam0->f_28[iVar0], true, false, true, true);
		set_entity_heading(iVar4, sParam0->f_28[iVar0]->f_3);
	}
	set_gameplay_cam_relative_heading(sParam0->f_28[iVar0]->f_4, fVar1);
	if ((sParam0->f_9 & 128 != 0 && (((iVar3 == uParam1[0] || iVar3 == uParam1[1]) || iVar3 == uParam1[2]) || iVar3 == uParam1[3])) && (bParam2 || bParam3))
	{
		force_ped_motion_state(iVar4, -668482597, false, 0, false);
		if (bParam3)
		{
			vVar5 = { *sParam0->f_28[iVar0] };
		}
		else if (iVar3 == uParam1[0])
		{
			vVar5 = { *sParam0->f_28[iVar0] + get_entity_forward_vector(iVar4) * Vector(fVar2, fVar2, fVar2) };
		}
		else
		{
			vVar5 = { *sParam0->f_28[iVar0] + get_entity_forward_vector(iVar4) * FtoV(get_random_float_in_range(1f, 2f)) };
		}
		task_follow_nav_mesh_to_coord(iVar4, vVar5, 1f, 20000, 0.25f, 0, 40000f);
	}
}

void func_928(int iParam0)
{
	iVar2 = _0x901e0dc25080c8b9(player_id());
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = int_to_playerindex(iVar0);
		if (!_network_is_player_index_valid(iVar1))
		{
		}
		else if (!network_is_player_active(iVar1))
		{
		}
		else if (!_0x9be7dcb22d32ccbe(iVar2, iVar1))
		{
		}
		else
		{
			iVar3 = get_player_ped(iVar1);
			if (!does_entity_exist(iVar3))
			{
			}
			else
			{
				_0xf3354d6ca46f419d(iVar3, iParam0);
			}
		}
		iVar0++;
	}
}

bool func_929(int iParam0, char* sParam1)
{
	iVar0 = func_92(iParam0);
	switch (iVar0)
	{
		case -1239926065:
			iVar2 = 0;
			while (iVar2 < 2)
			{
				iVar1 = &sParam1->f_227[iVar2];
				if (has_anim_event_fired(iVar1, get_hash_key("AldenRevealed")) || has_anim_event_fired(iVar1, get_hash_key("AldenRevealed2")))
				{
					return true;
				}
				iVar2++;
			}
			break;
		default:
			break;
	}
	return false;
}

void func_930(var uParam0, char* sParam1, bool bParam2)
{
	bVar1 = true;
	iVar0 = 0;
	while (iVar0 <= (&sParam1->f_721[4] - 1))
	{
		bVar1 = true;
		bVar1 = sParam1->f_70[iVar0]->f_1.f_11 & 128 == false;
		if (sParam1->f_70[iVar0]->f_1.f_9 == -967333571)
		{
			iVar2 = 0;
			while (iVar2 <= (&sParam1->f_721[3] - 1))
			{
				if (sParam1->f_227[iVar2]->f_1.f_9 == -446093729)
				{
					bVar1 = false;
				}
				iVar2++;
			}
		}
		if (bVar1)
		{
			func_1141(&(sParam1->f_70[iVar0]), 1, 1);
		}
		remove_anim_scene_entity(uParam0->f_1, &(sParam1->f_70[iVar0]->f_1), &(sParam1->f_70[iVar0]));
		if (bParam2 && func_105(sParam1->f_70[iVar0]->f_1.f_11, 32))
		{
			set_entity_coords(&(sParam1->f_70[iVar0]), sParam1->f_70[iVar0]->f_1.f_13, true, false, true, true);
			set_entity_visible(&(sParam1->f_70[iVar0]), false);
			set_entity_collision(&(sParam1->f_70[iVar0]), false, false);
			freeze_entity_position(&(sParam1->f_70[iVar0]), true);
		}
		iVar0++;
	}
}

void func_931(var uParam0, char* sParam1)
{
	iVar0 = 0;
	while (iVar0 <= (&sParam1->f_721[3] - 1))
	{
		iVar0++;
	}
}

void func_932(var uParam0, char* sParam1, var uParam2)
{
	iVar1 = func_1135(sParam1->f_10, (sParam1->f_727[2] + sParam1->f_727[1]) // PointerArith);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		switch ((*uParam2)[iVar0]->f_2)
		{
			case 745166621:
				Var2 = { *sParam1->f_280[iVar0] };
				break;
			case -250583361:
				Var2 = { *sParam1->f_456[iVar0] };
				break;
			default:
				Jump @134; //curOff = 110
				remove_anim_scene_entity(uParam0->f_1, &Var2, (*uParam2)[iVar0]->f_1);
				iVar0++;
			}
		}

void func_933(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_112.f_200[iParam2]->f_47.f_3.f_51 <= 0)
	{
		return;
	}
	if (!_0x9c54041bb66bcf9e(&(uParam0->f_112.f_200[iParam2]), uParam0->f_112.f_200[iParam2]->f_47))
	{
		return;
	}
	if (_0x3ab6c7b0bb0df4b1(&(uParam0->f_112.f_200[iParam2]), -1))
	{
		return;
	}
	bVar0 = func_255(uParam1->f_2);
	if (bVar0)
	{
		if (is_bit_set(uParam0->f_112.f_200[iParam2]->f_47.f_3.f_52, 1))
		{
			if (uParam0->f_112.f_200[iParam2]->f_47.f_3.f_49 != -1)
			{
				if (&uParam0->f_112.f_200[iParam2]->f_47.f_3[uParam0->f_112.f_200[iParam2]->f_47.f_3.f_49] != 1)
				{
					uParam0->f_112.f_200[iParam2]->f_47.f_3.f_49 = func_1142(uParam1, &(uParam0->f_112.f_200[iParam2]->f_47.f_3));
				}
			}
		}
	}
	else if (is_bit_set(uParam0->f_112.f_200[iParam2]->f_47.f_3.f_52, 0))
	{
		if (uParam0->f_112.f_200[iParam2]->f_47.f_3.f_49 != -1)
		{
			if (&uParam0->f_112.f_200[iParam2]->f_47.f_3[uParam0->f_112.f_200[iParam2]->f_47.f_3.f_49] != 0)
			{
				uParam0->f_112.f_200[iParam2]->f_47.f_3.f_49 = func_1142(uParam1, &(uParam0->f_112.f_200[iParam2]->f_47.f_3));
			}
		}
	}
	if (uParam0->f_112.f_200[iParam2]->f_47.f_3.f_49 == uParam0->f_112.f_200[iParam2]->f_47.f_3.f_50)
	{
		if (_0x2dc0e8dcbd3546e9(&(uParam0->f_112.f_200[iParam2])) || _0xc22aa08a8adb87d4(&(uParam0->f_112.f_200[iParam2])) != uParam0->f_112.f_200[iParam2]->f_47.f_3[uParam0->f_112.f_200[iParam2]->f_47.f_3.f_49]->f_9)
		{
			return;
		}
		func_414(&(uParam0->f_112.f_200[iParam2]->f_124.f_25), 2048);
		return;
	}
	if (uParam0->f_112.f_200[iParam2]->f_47.f_3.f_50 == -1)
	{
		uParam0->f_112.f_200[iParam2]->f_47.f_3.f_50 = uParam0->f_112.f_200[iParam2]->f_47.f_3.f_49;
		return;
	}
	iVar1 = func_1143(uParam0, iParam2);
	if (iVar1 == -1)
	{
		return;
	}
	func_421(&(uParam0->f_112.f_200[iParam2]->f_124.f_25), 2048);
	if (!func_1144(uParam0, iParam2) || _0x916b8e075abc8b4e(&(uParam0->f_112.f_200[iParam2]), 1))
	{
		return;
	}
	_0x6d07b371e9439019(&(uParam0->f_112.f_200[iParam2]));
	_0xd65fdc686a031c83(&(uParam0->f_112.f_200[iParam2]), &(uParam0->f_112.f_200[iParam2]->f_47.f_3[uParam0->f_112.f_200[iParam2]->f_47.f_3.f_50]->f_10[iVar1]), 3f);
	uParam0->f_112.f_200[iParam2]->f_47.f_3.f_50 = uParam0->f_112.f_200[iParam2]->f_47.f_3.f_49;
}

struct<8> func_934(var uParam0, int iParam1)
{
	iVar8 = uParam0->f_112.f_200[iParam1]->f_47.f_3.f_49;
	if (iVar8 == -1)
	{
		return Var0;
	}
	return uParam0->f_112.f_200[iParam1]->f_47.f_3[iVar8]->f_1;
}

void func_935(var uParam0, var uParam1, int iParam2)
{
	if (!_does_scenario_point_exist(uParam0->f_112.f_200[iParam2]->f_47))
	{
		return;
	}
	if (uParam0->f_112.f_200[iParam2]->f_150 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_112.f_200[iParam2]->f_5.f_16 - 1))
	{
		if (&uParam0->f_112.f_200[iParam2]->f_5[iVar0] != 0)
		{
			sVar2 = func_176(*uParam0->f_112.f_200[iParam2]->f_5.f_17[iVar0]);
			if (!is_string_null_or_empty(sVar2))
			{
				iVar3 = get_current_ped_weapon_entity_index(&(uParam0->f_112.f_200[iParam2]), &(uParam0->f_112.f_200[iParam2]->f_5.f_4[iVar0]));
				if (does_entity_exist(iVar3))
				{
					if (_0x8360c47380b6f351(uParam0->f_112.f_200[iParam2]->f_47, iVar3, sVar2, 1))
					{
					}
				}
			}
		}
		iVar0++;
	}
	if (uParam0->f_948 > 0)
	{
		iVar1 = 0;
		while (iVar1 <= (uParam0->f_948 - 1))
		{
			if (uParam0->f_948.f_1[iVar1]->f_13 == 0)
			{
			}
			else if (uParam0->f_948.f_1[iVar1]->f_13 == uParam0->f_112.f_200[iParam2]->f_150)
			{
				if (does_entity_exist(&(uParam0->f_948.f_1[iVar1])))
				{
					if (is_model_valid(uParam0->f_948.f_1[iVar1]->f_2))
					{
						sVar2 = func_176(uParam0->f_948.f_1[iVar1]->f_5);
						if (!is_string_null_or_empty(sVar2))
						{
							iVar4 = _get_scenario_point_entity(uParam0->f_112.f_200[iParam2]->f_47, sVar2);
							if (get_object_index_from_entity_index(iVar4) == &uParam0->f_948.f_1[iVar1])
							{
								return;
							}
							if (_0x8360c47380b6f351(uParam0->f_112.f_200[iParam2]->f_47, &(uParam0->f_948.f_1[iVar1]), sVar2, 1))
							{
							}
						}
					}
				}
			}
			iVar1++;
		}
	}
}

void func_936(var uParam0, int iParam1)
{
	iVar0 = get_player_ped(player_id());
	if (uParam0->f_25.f_8[iParam1]->f_6 != 0)
	{
		if ((get_game_timer() - uParam0->f_25.f_8[iParam1]->f_3) > 3000)
		{
			uParam0->f_25.f_8[iParam1]->f_5 = 0;
			uParam0->f_25.f_8[iParam1]->f_6 = 0;
		}
		else if (is_any_speech_playing(&(uParam0->f_112.f_200[iParam1])))
		{
			uParam0->f_25.f_8[iParam1]->f_3 = get_game_timer();
		}
	}
	iVar1 = _0x796eecff0c6d39be(&(uParam0->f_112.f_200[iParam1]), 1, 0);
	if (iVar1 != 0)
	{
		iVar2 = _0x822a001bcea5bd81(&(uParam0->f_112.f_200[iParam1]), iVar1, 1, 0);
		if (does_entity_exist(iVar2) && is_entity_a_ped(iVar2))
		{
			bVar3 = false;
			iVar4 = get_ped_index_from_entity_index(iVar2);
			if (func_1145(&(uParam0->f_112.f_200[iParam1]), iVar4, iVar1, &bVar3))
			{
				uParam0->f_25.f_8[iParam1]->f_5 = iVar4;
				uParam0->f_25.f_8[iParam1]->f_6 = iVar1;
				uParam0->f_25.f_8[iParam1]->f_3 = get_game_timer();
				if (bVar3)
				{
					func_421(&(uParam0->f_112.f_200[iParam1]->f_124.f_25), 256);
				}
				else
				{
					func_414(&(uParam0->f_112.f_200[iParam1]->f_124.f_25), 256);
				}
			}
			_0x1a5c5d350068a673(&(uParam0->f_112.f_200[iParam1]), 0);
		}
	}
	if (func_1146(uParam0, iParam1, iVar0))
	{
		if (uParam0->f_25.f_8[iParam1]->f_6 == 0)
		{
			uParam0->f_25.f_8[iParam1]->f_5 = iVar0;
			uParam0->f_25.f_8[iParam1]->f_6 = -1421834278;
			uParam0->f_25.f_8[iParam1]->f_3 = get_game_timer();
			func_1147(uParam0->f_112.f_200[iParam1], 6);
		}
	}
}

void func_937(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	if (func_105(uParam0->f_112.f_200[iParam2]->f_124.f_25, 512))
	{
		return;
	}
	if (!is_ped_active_in_scenario(&(uParam0->f_112.f_200[iParam2]), 0))
	{
		return;
	}
	if (uParam0->f_112.f_200[iParam2]->f_124.f_16 > 0)
	{
		if (!func_1148(uParam0, uParam0->f_112.f_200[iParam2]))
		{
			func_1149(uParam0, iParam2, 0);
		}
	}
	iVar0 = 0;
	bVar1 = func_105(uParam0->f_112.f_200[iParam2]->f_124.f_25, 2048);
	switch (uParam0->f_112.f_200[iParam2]->f_124.f_16)
	{
		case 0:
			if (func_1150(uParam0, uParam0->f_112.f_200[iParam2]))
			{
				if (!bVar1 && func_1151(uParam0, uParam1, uParam0->f_112.f_200[iParam2], iParam2, &(uParam0->f_25), uParam1->f_2, &iVar0, 4, 1, bParam3))
				{
					func_414(&(uParam0->f_112.f_200[iParam2]->f_124.f_25), 8);
					func_414(&(uParam0->f_112.f_200[iParam2]->f_124.f_25), 16);
					func_1152(uParam0, uParam1, uParam0->f_112.f_200[iParam2], 0);
					func_1149(uParam0, iParam2, 1);
					if (func_1153(uParam1->f_2))
					{
						func_1154(uParam1->f_2, 4);
					}
				}
				else if (func_1155(uParam0->f_112.f_200[iParam2], 1))
				{
					func_414(&(uParam0->f_112.f_200[iParam2]->f_124.f_25), 4);
				}
			}
			else
			{
				bVar2 = false;
				if (func_1153(uParam1->f_2))
				{
					bVar2 = true;
				}
				if (!bVar1 && func_1151(uParam0, uParam1, uParam0->f_112.f_200[iParam2], iParam2, &(uParam0->f_25), uParam1->f_2, &iVar0, 4, bVar2, bParam3))
				{
					func_414(&(uParam0->f_112.f_200[iParam2]->f_124.f_25), 8);
					func_414(&(uParam0->f_112.f_200[iParam2]->f_124.f_25), 16);
					func_1152(uParam0, uParam1, uParam0->f_112.f_200[iParam2], 0);
					func_1149(uParam0, iParam2, 1);
					if (bVar2)
					{
						func_1154(uParam1->f_2, 4);
					}
				}
			}
			break;
		case 1:
			if (bVar1)
			{
				if (_0x02ebbb3989b7e695(&(uParam0->f_112.f_200[iParam2])))
				{
					func_1149(uParam0, iParam2, 0);
					return;
				}
			}
			if (func_1152(uParam0, uParam1, uParam0->f_112.f_200[iParam2], 1))
			{
				func_1156(uParam0->f_112.f_200[iParam2], 1, 0);
				if (uParam0->f_112.f_200[iParam2]->f_124.f_23 != 0)
				{
					if (!func_105(uParam0->f_112.f_200[iParam2]->f_124.f_25, 256))
					{
						if (func_646(uParam0, uParam1, iParam2))
						{
							func_1157(uParam1->f_1, uParam1->f_2, uParam0->f_112.f_200[iParam2]->f_124.f_23, func_699());
						}
					}
					else
					{
						func_414(&(uParam0->f_112.f_200[iParam2]->f_124.f_25), 256);
					}
					uParam0->f_112.f_200[iParam2]->f_124.f_23 = 0;
					uParam0->f_112.f_200[iParam2]->f_124.f_24 = 0;
				}
				if (!bVar1)
				{
					func_1149(uParam0, iParam2, 2);
				}
				else
				{
					func_1149(uParam0, iParam2, 3);
				}
			}
			break;
		case 2:
			if (!bVar1 && func_1151(uParam0, uParam1, uParam0->f_112.f_200[iParam2], iParam2, &(uParam0->f_25), uParam1->f_2, &iVar0, 4, 1, bParam3))
			{
				func_421(&(uParam0->f_112.f_200[iParam2]->f_124.f_25), 8);
				func_1152(uParam0, uParam1, uParam0->f_112.f_200[iParam2], 0);
				func_1149(uParam0, iParam2, 1);
			}
			else if (bVar1 || func_1155(uParam0->f_112.f_200[iParam2], 0))
			{
				func_1149(uParam0, iParam2, 3);
			}
			break;
		case 3:
			if (func_1158(uParam1, uParam0->f_112.f_200[iParam2]))
			{
				func_1156(uParam0->f_112.f_200[iParam2], 1, 1);
				func_1149(uParam0, iParam2, 0);
			}
			break;
	}
}

bool func_938(int iParam0, int iParam1)
{
	return ((*Global_1120070)[iParam0]->f_23 - ((*Global_1120070)[iParam0]->f_23 && iParam1)) != 0;
}

void func_939(var uParam0, var uParam1, int iParam2)
{
	if (get_script_task_status(&(uParam0->f_112.f_200[iParam2]), 993674639, false) == 1 || get_script_task_status(&(uParam0->f_112.f_200[iParam2]), 993674639, false) == 0)
	{
		return;
	}
	func_1159(&(uParam0->f_112.f_200[iParam2]), uParam0->f_112.f_200[iParam2]->f_47.f_1, 0, 0, 0, -1082130432);
}

void func_940(char* sParam0)
{
	iVar0 = 0;
	while (iVar0 <= (&sParam0->f_721[4] - 1))
	{
		if (sParam0->f_70[iVar0]->f_1.f_11 & 128 != 0)
		{
		}
		else if (sParam0->f_70[iVar0]->f_1.f_11 & 2 == 0)
		{
			request_model(sParam0->f_70[iVar0]->f_1.f_9, false);
		}
		else if (sParam0->f_70[iVar0]->f_1.f_8 == 0)
		{
			sParam0->f_70[iVar0]->f_1.f_8 = _0x6f3068258a499e52(sParam0->f_70[iVar0]->f_1.f_9, sParam0->f_70[iVar0]->f_1.f_13, 15);
		}
		iVar0++;
	}
}

void func_941(char* sParam0)
{
	iVar0 = 0;
	while (iVar0 <= (&sParam0->f_721[3] - 1))
	{
		if (sParam0->f_227[iVar0]->f_1.f_11 & 2 == 0)
		{
			request_model(sParam0->f_227[iVar0]->f_1.f_9, false);
		}
		iVar0++;
	}
}

bool func_942(char* sParam0)
{
	iVar0 = 0;
	while (iVar0 <= (&sParam0->f_721[4] - 1))
	{
		if (sParam0->f_70[iVar0]->f_1.f_11 & 4 != 0)
		{
		}
		else if (sParam0->f_70[iVar0]->f_1.f_11 & 128 != 0)
		{
		}
		else if (sParam0->f_70[iVar0]->f_1.f_11 & 2 != 0)
		{
			if (sParam0->f_70[iVar0]->f_1.f_8 == 0)
			{
				return false;
			}
			else if (!_0x1ff441d7954f8709(sParam0->f_70[iVar0]->f_1.f_8))
			{
				return false;
			}
		}
		else if (!has_model_loaded(sParam0->f_70[iVar0]->f_1.f_9))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_943(char* sParam0)
{
	iVar0 = 0;
	while (iVar0 <= (&sParam0->f_721[3] - 1))
	{
		if (sParam0->f_227[iVar0]->f_1.f_11 & 4 != 0)
		{
		}
		else if (sParam0->f_227[iVar0]->f_1.f_11 & 2 == 0)
		{
			if (!has_model_loaded(sParam0->f_227[iVar0]->f_1.f_9))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

int func_944(char* sParam0, vector3 vParam1)
{
	if (&sParam0->f_727[4] >= &sParam0->f_721[4])
	{
		return 2;
	}
	iVar0 = &sParam0->f_727[4];
	while (iVar0 <= (&sParam0->f_721[4] - 1))
	{
		if ((sParam0->f_70[iVar0]->f_1.f_11 & 2 == 0 && sParam0->f_70[iVar0]->f_1.f_11 & 4 == 0) && sParam0->f_70[iVar0]->f_1.f_11 & 128 == 0)
		{
			sParam0->f_70[iVar0] = create_object(sParam0->f_70[iVar0]->f_1.f_9, vParam1 + Vector(-15f, 0f, 0f), false, true, false, false, true);
			freeze_entity_position(&(sParam0->f_70[iVar0]), true);
			bVar1 = true;
		}
		else if (sParam0->f_70[iVar0]->f_1.f_11 & 4 != 0)
		{
			if (!does_entity_exist(&(sParam0->f_70[iVar0])) || get_entity_model(&(sParam0->f_70[iVar0])) != sParam0->f_70[iVar0]->f_1.f_9)
			{
				bVar2 = sParam0->f_70[iVar0]->f_1.f_11 & 8 != false;
				bVar3 = sParam0->f_70[iVar0]->f_1.f_11 & 64 != false;
				sParam0->f_70[iVar0] = func_909(sParam0->f_70[iVar0]->f_1.f_13, sParam0->f_70[iVar0]->f_1.f_13.f_3, sParam0->f_70[iVar0]->f_1.f_9, bVar2, bVar3);
			}
		}
		else if (sParam0->f_70[iVar0]->f_1.f_11 & 128 != 0)
		{
		}
		else
		{
			sParam0->f_70[iVar0] = get_object_index_from_entity_index(_0x4735e2a4bb83d9da(sParam0->f_70[iVar0]->f_1.f_8));
		}
		if (!does_entity_exist(&(sParam0->f_70[iVar0])) && sParam0->f_70[iVar0]->f_1.f_11 & 128 == 0)
		{
			return 0;
		}
		sParam0->f_727[4] = &sParam0->f_727[4] + 1;
		if (bVar1)
		{
			return 1;
		}
		iVar0++;
	}
	return 2;
}

int func_945(char* sParam0, vector3 vParam1)
{
	if (&sParam0->f_727[3] >= &sParam0->f_721[3])
	{
		return 2;
	}
	iVar0 = &sParam0->f_727[3];
	while (iVar0 <= (&sParam0->f_721[3] - 1))
	{
		if (sParam0->f_227[iVar0]->f_1.f_11 & 2 == 0 && sParam0->f_227[iVar0]->f_1.f_11 & 4 == 0)
		{
			if (sParam0->f_227[iVar0]->f_1.f_11 & 128 != 0)
			{
			}
			else
			{
				sParam0->f_227[iVar0] = func_1160(sParam0->f_227[iVar0]->f_1.f_9, vParam1 + Vector(-15f, 0f, 0f), 0f, 1, 1, 0, 1, 1, 1, 0, 0);
				freeze_entity_position(&(sParam0->f_227[iVar0]), true);
				bVar1 = true;
				Jump @247; //curOff = 176
				sParam0->f_227[iVar0] = func_1161(sParam0->f_227[iVar0]->f_1.f_13, sParam0->f_227[iVar0]->f_1.f_13.f_3, sParam0->f_227[iVar0]->f_1.f_9, sParam0->f_227[iVar0]->f_1.f_11 & 4 != 0);
				if (!does_entity_exist(&(sParam0->f_227[iVar0])))
				{
					return 0;
				}
				sParam0->f_727[3] = &sParam0->f_727[3] + 1;
				if (bVar1)
				{
					return 1;
				}
			}
			iVar0++;
			return 2;
		}
	}
}

void func_946(var uParam0, var uParam1, int iParam2)
{
	if (!func_1162(&Var0, uParam1, iParam2))
	{
		return;
	}
	uVar8 = Var0.f_1;
	iVar5 = func_215(Var0, -2106942431);
	iVar7 = 0;
	while (iVar7 <= (iVar5 - 1))
	{
		Var0.f_1 = uVar8;
		if (!func_1163(&Var0, iVar7))
		{
		}
		else
		{
			Var0.f_2 = 1649401908;
			if (!_datafile_get_hash(&iVar6, &Var0))
			{
			}
			else if (iVar6 == 0)
			{
			}
			else
			{
				iVar9 = iVar6;
				if (func_1164(iVar9, 1) == -1)
				{
				}
				else
				{
					func_1165(uParam0, uParam1, iParam2, iVar9, Var0);
				}
			}
		}
		iVar7++;
	}
}

void func_947(var uParam0, var uParam1, int iParam2)
{
	if (!func_1162(&vVar0, uParam1, iParam2))
	{
		return;
	}
	if (!func_477(&vVar0))
	{
		return;
	}
	vVar0.f_2 = 1649401908;
	if (!_datafile_get_hash(&iVar5, &vVar0))
	{
		return;
	}
	if (iVar5 == 0)
	{
		return;
	}
	iVar15 = iVar5;
	if (func_478(iVar15, 1) == -1)
	{
		return;
	}
	vVar0.f_2 = -2099616401;
	if (!_datafile_get_hash(&iVar5, &vVar0))
	{
		return;
	}
	if (iVar5 == 0)
	{
		return;
	}
	iVar6 = iVar5;
	_datafile_get_string(&Var7, &vVar0);
	uParam0->f_112.f_200[iParam2]->f_151 = iVar15;
	func_479(uParam1, iParam2, iVar6, Var7, iVar15, &(uParam0->f_4034.f_98));
}

void func_948(var uParam0, int iParam1, var uParam2, int iParam3)
{
	*uParam0 = iParam1;
}

bool func_949(var uParam0, var uParam1, int iParam2)
{
	if (!func_1162(&vVar0, uParam1, iParam2))
	{
		return false;
	}
	vVar0.f_2 = -1255654531;
	if (!_datafile_get_hash(&iVar5, &vVar0))
	{
		return false;
	}
	if (iVar5 == 0)
	{
		return false;
	}
	uParam0->f_112.f_200[iParam2]->f_2 = iVar5;
	if (func_1166(uParam0->f_112.f_200[iParam2]->f_2, 1) == -1)
	{
		return false;
	}
	return true;
}

bool func_950(var uParam0, var uParam1, int iParam2)
{
	Var5.f_10 = 3;
	Var5.f_10.f_4 = 3;
	Var5.f_10.f_8 = 3;
	Var5.f_10.f_12 = 3;
	Var5.f_10.f_17 = 3;
	if (!func_1162(&uVar0, uParam1, iParam2))
	{
		return false;
	}
	if (!func_1167(*uParam1, iParam2, &Var5))
	{
		return false;
	}
	uParam0->f_112.f_200[iParam2] = func_1160(uParam0->f_112.f_200[iParam2]->f_2, Var5, Var5.f_3, 0, 0, 0, 1, Var5.f_6, !Var5.f_8, (!Var5.f_9 && Var5.f_10.f_16 <= 0), Var5.f_8);
	if (!does_entity_exist(&(uParam0->f_112.f_200[iParam2])))
	{
		return false;
	}
	set_ped_config_flag(&(uParam0->f_112.f_200[iParam2]), 422, true);
	if (Var5.f_8)
	{
		_set_ped_body_component(&(uParam0->f_112.f_200[iParam2]), Var5.f_4);
		_update_ped_variation(&(uParam0->f_112.f_200[iParam2]), false, true, true, true, false);
	}
	remove_all_ped_weapons(&(uParam0->f_112.f_200[iParam2]), true, true);
	if (Var5.f_52 != 0)
	{
		uParam0->f_112.f_200[iParam2]->f_150 = Var5.f_52;
	}
	iVar58 = 0;
	while (iVar58 <= (Var5.f_10.f_16 - 1))
	{
		switch (&Var5.f_10.f_8[iVar58])
		{
			case -369323422:
				get_current_ped_weapon(&(uParam0->f_112.f_200[iParam2]), &iVar59, true, &(Var5.f_10.f_4[iVar58]), false);
				_give_weapon_to_ped_2(&(uParam0->f_112.f_200[iParam2]), &(Var5.f_10[iVar58]), 0, false, true, &(Var5.f_10.f_4[iVar58]), false, 0.5f, 1f, 752097756, true, 0f, true);
				if (&Var5.f_10.f_4[iVar58] == 0 || &Var5.f_10.f_4[iVar58] == 1)
				{
					set_current_ped_weapon(&(uParam0->f_112.f_200[iParam2]), &(Var5.f_10[iVar58]), true, &(Var5.f_10.f_4[iVar58]), false, false);
					bVar60 = true;
				}
				break;
			case -958870975:
				get_current_ped_weapon(&(uParam0->f_112.f_200[iParam2]), &iVar59, true, &(Var5.f_10.f_4[iVar58]), false);
				remove_weapon_from_ped(&(uParam0->f_112.f_200[iParam2]), iVar59, true, -142743235);
				break;
			default:
				break;
		}
		iVar58++;
	}
	if (Var5.f_10.f_16 > 0)
	{
		_copy_memory(&(uParam0->f_112.f_200[iParam2]->f_5), &(Var5.f_10), 42);
	}
	if (bVar60)
	{
		task_swap_weapon(&(uParam0->f_112.f_200[iParam2]), 1, 0, 0, 0);
	}
	else if (Var5.f_7)
	{
		_0x94a3c1b804d291ec(&(uParam0->f_112.f_200[iParam2]), 0, 0, 1, 1);
	}
	if (func_951(uParam0, iParam2, 0))
	{
		if (func_952(uParam0, iParam2, 303108068, 0))
		{
			func_1168(uParam0, iParam2, 303108068, 0);
		}
		if (func_952(uParam0, iParam2, -910931556, 0))
		{
			func_1168(uParam0, iParam2, -910931556, 0);
		}
	}
	_0xbb1e41dd3d3c6250(&(uParam0->f_112.f_200[iParam2]), "MpMissionGiver", 0);
	if (_is_this_model_a_horse(uParam0->f_112.f_200[iParam2]->f_2))
	{
		set_ped_config_flag(&(uParam0->f_112.f_200[iParam2]), 136, true);
	}
	_0xae6004120c18df97(&(uParam0->f_112.f_200[iParam2]), 0, 0);
	set_entity_proofs(&(uParam0->f_112.f_200[iParam2]), 127, false);
	set_blocking_of_non_temporary_events(&(uParam0->f_112.f_200[iParam2]), true);
	set_ped_relationship_group_hash(&(uParam0->f_112.f_200[iParam2]), uParam0->f_112.f_1);
	set_ped_config_flag(&(uParam0->f_112.f_200[iParam2]), 107, true);
	set_ped_config_flag(&(uParam0->f_112.f_200[iParam2]), 130, true);
	set_ped_config_flag(&(uParam0->f_112.f_200[iParam2]), 315, true);
	set_ped_can_ragdoll(&(uParam0->f_112.f_200[iParam2]), false);
	set_ped_keep_task(&(uParam0->f_112.f_200[iParam2]), true);
	_0xa967d6a8ed2d713b(&(uParam0->f_112.f_200[iParam2]), 0);
	return true;
}

bool func_951(var uParam0, int iParam1, int iParam2)
{
	switch (iParam2)
	{
		case 1:
			return uParam0->f_948.f_1[iParam1]->f_4 & 3 != 0;
		case 0:
			return uParam0->f_112.f_200[iParam1]->f_3 & 3 != 0;
		default:
			break;
	}
	return false;
}

bool func_952(var uParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_1169(iParam2);
	if (iVar0 == 0)
	{
		return false;
	}
	switch (iParam3)
	{
		case 1:
			return (uParam0->f_948.f_1[iParam1]->f_4 && iVar0) != 0;
		case 0:
			return (uParam0->f_112.f_200[iParam1]->f_3 && iVar0) != 0;
		default:
			break;
	}
	return false;
}

void func_953(int iParam0, var uParam1, int iParam2)
{
	(*Global_1120070->f_8461[iParam0])[func_557(iParam2, 1)] = uParam1;
}

void func_954()
{
	_0x0d7fd6a55fd63aef(28, 0, 0);
	_0x0d7fd6a55fd63aef(50, 3, 0);
}

int func_955(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1170();
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
		(*Global_1956131)[iVar0]->f_1 = iParam1;
		(*Global_1956131)[iVar0]->f_2 = iParam0;
		(*Global_1956131)[iVar0] = 0;
		(*Global_1956131)[iVar0]->f_3 = get_id_of_this_thread();
		if (func_105(iParam2, 128))
		{
			_0x7c00cfc48a782dc0(iParam1, iParam0, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
		}
		if (func_865(Global_1956131[iVar0], 0))
		{
			func_554(iVar0, 1024, 1);
			func_554(iVar0, 16, 1);
			func_554(iVar0, 256, 1);
		}
		func_554(iVar0, iParam2, 1);
	}
	return iVar0;
}

bool func_956(var uParam0, var uParam1, int iParam2, int iParam3)
{
	switch (uParam0->f_112.f_200[iParam2]->f_47.f_2)
	{
		case 0:
			return false;
		case 342372581:
			if (uParam0->f_112.f_200[iParam2]->f_47.f_1 == 0)
			{
				return false;
			}
			break;
		case -1103929724:
		case 136102321:
			if (!_does_scenario_point_exist(uParam0->f_112.f_200[iParam2]->f_47))
			{
				return false;
			}
			break;
		default:
			return false;
	}
	return true;
}

bool func_957(var uParam0, int iParam1, var uParam2)
{
	if (!func_1162(&Var0, uParam0, iParam1))
	{
		return false;
	}
	if (!func_1171(&Var0))
	{
		return false;
	}
	Var0.f_2 = 1582509135;
	if (!_datafile_get_hash(&iVar5, &Var0))
	{
		return false;
	}
	if (iVar5 == 0)
	{
		return false;
	}
	uParam2->f_5 = iVar5;
	if (func_1172(uParam2->f_5, 1) == -1)
	{
		return false;
	}
	if (!func_1173(Var0, uParam2, &(uParam2->f_20)))
	{
		return false;
	}
	if (!func_1174(Var0, uParam0, iParam1, &(uParam2->f_6)))
	{
		return false;
	}
	if (!func_1175(Var0, uParam0, iParam1, &(uParam2->f_28)))
	{
		return false;
	}
	if (!func_1176(Var0, uParam0, iParam1, &(uParam2->f_81)))
	{
		return false;
	}
	switch (uParam2->f_5)
	{
		case 0:
			return false;
		case 136102321:
			if (func_178(uParam2->f_1))
			{
				return false;
			}
			if (uParam2->f_4 <= 0f)
			{
				return false;
			}
			return true;
		case -1103929724:
			if (uParam2->f_6)
			{
				if (func_178(uParam2->f_6.f_2))
				{
					return false;
				}
				if (uParam2->f_6.f_5 <= 0f)
				{
					return false;
				}
			}
			else
			{
				if (func_178(uParam2->f_1))
				{
					return false;
				}
				if (uParam2->f_4 < 0f)
				{
					return false;
				}
			}
			return true;
		case 342372581:
			return true;
		default:
			break;
	}
	return false;
}

bool func_958(var uParam0, var uParam1, int iParam2, var uParam3)
{
	uParam0->f_112.f_200[iParam2]->f_47.f_2 = uParam3->f_5;
	iVar0 = func_1142(uParam1, &(uParam3->f_28));
	_copy_memory(&(uParam0->f_112.f_200[iParam2]->f_47.f_3), &(uParam3->f_28), 53);
	uParam0->f_112.f_200[iParam2]->f_47.f_3.f_49 = iVar0;
	uParam0->f_112.f_200[iParam2]->f_47.f_3.f_50 = iVar0;
	_copy_memory(&(uParam0->f_112.f_200[iParam2]->f_47.f_56), &(uParam3->f_81), 21);
	switch (uParam3->f_5)
	{
		case 0:
			break;
		case 342372581:
			uParam0->f_112.f_200[iParam2]->f_47.f_1 = *uParam3;
			return true;
		case 136102321:
			if (!func_1177(uParam3, &(uParam0->f_112.f_200[iParam2]->f_47)))
			{
				return false;
			}
			uParam0->f_112.f_200[iParam2]->f_47.f_1 = *uParam3;
			return true;
		case -1103929724:
			if (uParam3->f_6)
			{
				if (!func_1178(uParam0, uParam1, iParam2, uParam3))
				{
					return false;
				}
			}
			else if (!func_1179(uParam0, uParam1, iParam2, uParam3))
			{
				return false;
			}
			if (!func_1180(uParam0, uParam1, iParam2))
			{
				return false;
			}
			uParam0->f_112.f_200[iParam2]->f_47.f_1 = *uParam3;
			return true;
		default:
			break;
	}
	return false;
}

bool func_959()
{
	iVar0 = player_id();
	iVar1 = _0x901e0dc25080c8b9(iVar0);
	return _0x4be6c13a45cca8ec(iVar1) == iVar0;
}

bool func_960(int iParam0, int iParam1)
{
	return func_105((*Global_1120070)[iParam0]->f_23, iParam1);
}

void func_961(var uParam0, var uParam1, int iParam2, int iParam3)
{
	func_1181(uParam0, uParam1, iParam2, iParam3);
	if (!func_105(uParam0->f_1730.f_2303, 1))
	{
		uParam0->f_1730.f_2302 = _0x901e0dc25080c8b9(player_id());
		if (func_959())
		{
			func_421(&(uParam0->f_1730.f_2303), 2);
		}
		func_632(uParam0, uParam1, iParam2, 0, 0, -1f, 0);
		func_421(&(uParam0->f_1730.f_2303), 1);
	}
}

void func_962(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_112.f_835 != iParam2)
	{
		uParam0->f_112.f_835 = iParam2;
		if (func_959())
		{
			func_1182(*uParam1, iParam2);
		}
	}
}

void func_963(var uParam0, var uParam1, int iParam2, int iParam3)
{
	iVar0 = func_1183(*uParam1);
	if (uParam0->f_112.f_835 != iVar0)
	{
		if (func_1184(uParam0->f_112.f_835, iVar0))
		{
			func_1185(uParam0, uParam1, iParam2, iParam3, iVar0);
			uParam0->f_112.f_835 = iVar0;
		}
		else if (func_1186(uParam0, uParam1, iParam2, iParam3, iVar0))
		{
			uParam0->f_112.f_835 = iVar0;
		}
	}
}

bool func_964(int iParam0, int iParam1)
{
	return func_1187(&((*Global_1120070)[iParam0]->f_23), iParam1);
}

void func_965(var uParam0, var uParam1)
{
	uParam0->f_112.f_5 = func_1188(*uParam1);
}

int func_966(var uParam0)
{
	switch (func_303(*uParam0))
	{
		case 303108068:
			return -839267265;
		case -910931556:
			return -258540245;
		default:
			break;
	}
	return 0;
}

int func_967(var uParam0)
{
	return uParam0->f_4034.f_115.f_3;
}

bool func_968(var uParam0, var uParam1)
{
	if (!func_969(uParam0, 16))
	{
		return func_970(uParam0, uParam1, 12, 1);
	}
	return false;
}

bool func_969(var uParam0, int iParam1)
{
	return func_105(uParam0->f_112.f_5, iParam1);
}

bool func_970(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	bVar0 = false;
	switch (func_303(*uParam1))
	{
		case 303108068:
			iVar1 = 1;
			break;
		case -910931556:
			iVar1 = 2;
			break;
		default:
			break;
	}
	func_356(uParam0->f_1730.f_1[iVar1], uParam0->f_1730.f_1.f_19[iVar1], &(uParam0->f_1730.f_1.f_2276), func_93(uParam1->f_1), iVar1, func_353(uParam1->f_1), uParam1->f_1, uParam1->f_2, &bVar0, uParam0->f_4034.f_115, iParam2);
	func_357(uParam0, uParam1, iVar1, iParam2, 1);
	if (func_694(uParam0, 2002222928, func_966(uParam1)))
	{
		switch (iParam2)
		{
			case 12:
				if (!func_393(&(uParam0->f_4034.f_114), 8))
				{
					if (func_531(*uParam1) != -1)
					{
						func_974(uParam0, uParam1, 0);
						func_396(&(uParam0->f_4034.f_114), 8, func_93(uParam1->f_1));
					}
				}
				break;
		}
	}
	if (bVar0)
	{
		return true;
	}
	if (bParam3)
	{
		if (func_1189(&(uParam0->f_1730.f_1), iVar1, iParam2))
		{
			return true;
		}
	}
	return false;
}

int func_971(var uParam0)
{
	return uParam0->f_4034.f_237;
}

void func_972(var uParam0, var uParam1)
{
	uParam0->f_112.f_832 = get_game_timer();
}

bool func_973(var uParam0)
{
	return (get_game_timer() - uParam0->f_4034.f_260) >= 10000;
}

void func_974(var uParam0, var uParam1, bool bParam2)
{
	switch (func_303(*uParam1))
	{
		case 303108068:
			iVar0 = -839267265;
			break;
		case -910931556:
			iVar0 = -258540245;
			break;
	}
	if (bParam2)
	{
		iVar1 = 2093717520;
	}
	else
	{
		iVar1 = 2002222928;
	}
	func_701(uParam0, uParam1, 7);
	func_702(uParam0, 7, iVar1);
	func_703(uParam0, 7, iVar0);
	func_1190(uParam0, func_531(*uParam1));
}

bool func_975(var uParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		return true;
	}
	if (func_971(uParam0) != -1)
	{
		return false;
	}
	if (func_354(uParam0, uParam1, 0) != -1 && is_player_targetting_entity(player_id(), &(uParam0->f_112.f_200[func_354(uParam0, uParam1, 0)]), false))
	{
		return false;
	}
	if (func_415(uParam0, 7))
	{
		return false;
	}
	if (func_718(uParam0, 2093717520))
	{
		if (!func_706(uParam0, 7))
		{
			return false;
		}
		if (!func_1191(uParam0))
		{
			return false;
		}
	}
	return (get_game_timer() - uParam0->f_112.f_832) > 10000;
}

bool func_976(var uParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		return true;
	}
	if ((get_game_timer() - uParam0->f_112.f_832) < 5000)
	{
		return false;
	}
	if (func_354(uParam0, uParam1, 0) != -1 && is_player_targetting_entity(player_id(), &(uParam0->f_112.f_200[func_354(uParam0, uParam1, 0)]), false))
	{
		return true;
	}
	return false;
}

bool func_977(var uParam0, var uParam1)
{
	if (func_354(uParam0, uParam1, 0) == -1)
	{
		return false;
	}
	if (!is_entity_visible(&(uParam0->f_112.f_200[func_354(uParam0, uParam1, 0)])))
	{
		return false;
	}
	if (func_29(*uParam1, 8))
	{
		return false;
	}
	if (func_687(uParam1->f_2))
	{
		return false;
	}
	if (!func_297(*uParam1, 2))
	{
		return false;
	}
	if (func_979(uParam1->f_1, 0, 16, 0))
	{
		return false;
	}
	return true;
}

var func_978(int iParam0)
{
	return func_1192(iParam0);
}

int func_979(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_1112(iParam0);
	return func_1193(iParam0, iVar0, iParam1, iParam2, iParam3);
}

void func_980(int iParam0, int iParam1)
{
	func_1194(iParam0, iParam1);
}

void func_981(int iParam0)
{
	func_1195(iParam0);
}

void func_982(var uParam0, var uParam1, int iParam2)
{
	if (!func_1196(&Var0, uParam1, iParam2))
	{
		return;
	}
	uVar8 = Var0.f_1;
	iVar5 = func_215(Var0, -2106942431);
	iVar7 = 0;
	while (iVar7 <= (iVar5 - 1))
	{
		Var0.f_1 = uVar8;
		if (!func_1163(&Var0, iVar7))
		{
		}
		else
		{
			Var0.f_2 = 1649401908;
			if (!_datafile_get_hash(&iVar6, &Var0))
			{
			}
			else if (iVar6 == 0)
			{
			}
			else
			{
				iVar9 = iVar6;
				if (func_1164(iVar9, 1) == -1)
				{
				}
				else
				{
					func_1197(uParam0, uParam1, iParam2, iVar9, Var0);
				}
			}
		}
		iVar7++;
	}
}

void func_983(var uParam0, int iParam1, var uParam2, int iParam3)
{
	*uParam0 = iParam1;
}

bool func_984(var uParam0, var uParam1, int iParam2)
{
	if (!func_1196(&vVar0, uParam1, iParam2))
	{
		return false;
	}
	vVar0.f_2 = -1255654531;
	if (!_datafile_get_hash(&iVar5, &vVar0))
	{
		return false;
	}
	if (iVar5 == 0)
	{
		return false;
	}
	uParam0->f_948.f_1[iParam2]->f_2 = iVar5;
	if (func_1166(uParam0->f_948.f_1[iParam2]->f_2, 1) == -1)
	{
		return false;
	}
	return true;
}

bool func_985(var uParam0, var uParam1, int iParam2)
{
	if (!func_1198(uParam1, iParam2, &Var0))
	{
		return false;
	}
	switch (Var0.f_2)
	{
		case -1125105727:
			uParam0->f_948.f_1[iParam2] = create_object_no_offset(uParam0->f_948.f_1[iParam2]->f_2, Var0.f_3, false, false, Var0.f_9, Var0.f_11);
			break;
		case -427144552:
			uParam0->f_948.f_1[iParam2] = _create_weapon_object(Var0.f_1, 0, Var0.f_3, true, 1f);
			_0x000fa7a4a8443af7(&(uParam0->f_948.f_1[iParam2]));
			break;
		case 1061943014:
			uParam0->f_948.f_1[iParam2] = create_object_no_offset(uParam0->f_948.f_1[iParam2]->f_2, Var0.f_3, false, false, Var0.f_9, Var0.f_11);
			if (does_entity_exist(&(uParam0->f_948.f_1[iParam2])))
			{
				freeze_entity_position(&(uParam0->f_948.f_1[iParam2]), true);
				set_entity_can_be_damaged(&(uParam0->f_948.f_1[iParam2]), false);
			}
			break;
		case 1629771901:
			vVar23 = { func_1199() };
			vVar26 = { func_1200() };
			uParam0->f_948.f_1[iParam2] = create_object_no_offset(uParam0->f_948.f_1[iParam2]->f_2, Var0.f_3 + vVar26, false, false, Var0.f_9, Var0.f_11);
			break;
		default:
			break;
	}
	if (!does_entity_exist(&(uParam0->f_948.f_1[iParam2])))
	{
		return false;
	}
	if (uParam0->f_1695 < 1)
	{
		func_1201(uParam0, uParam1, iParam2);
	}
	if (!is_string_null_or_empty(func_176(Var0.f_12)))
	{
		uParam0->f_948.f_1[iParam2]->f_5 = { Var0.f_12 };
	}
	if (Var0.f_20 != 0)
	{
		uParam0->f_948.f_1[iParam2]->f_13 = Var0.f_20;
	}
	if (Var0.f_22 == 0)
	{
		uParam0->f_948.f_1[iParam2]->f_18 = 1;
	}
	else
	{
		uParam0->f_948.f_1[iParam2]->f_19 = Var0.f_21;
		uParam0->f_948.f_1[iParam2]->f_20 = Var0.f_22;
		uParam0->f_948.f_1[iParam2]->f_18 = 0;
	}
	func_380(&(uParam0->f_948.f_1[iParam2]), Var0);
	set_entity_rotation(&(uParam0->f_948.f_1[iParam2]), Var0.f_6 + vVar23, 2, false);
	uParam0->f_948.f_1[iParam2]->f_3 = Var0.f_2;
	if (func_951(uParam0, iParam2, 1))
	{
		if (func_952(uParam0, iParam2, 303108068, 1))
		{
			func_1168(uParam0, iParam2, 303108068, 1);
		}
		if (func_952(uParam0, iParam2, -910931556, 1))
		{
			func_1168(uParam0, iParam2, -910931556, 1);
		}
	}
	return true;
}

bool func_986(var uParam0, var uParam1, int iParam2)
{
	return func_354(uParam0, uParam1, 1) == iParam2;
}

void func_987(int iParam0, var uParam1, int iParam2)
{
	(*Global_1120070->f_8478[iParam0])[iParam2] = uParam1;
}

bool func_988(var uParam0, var uParam1, vector3 vParam2, int iParam5, int iParam6)
{
	if (func_1202(Global_34, vParam2, 1) > 900f)
	{
		return true;
	}
	if (*uParam0)
	{
		if (!decor_exist_on(*uParam1, "letter_item"))
		{
			*uParam0 = 0;
		}
		else
		{
			return true;
		}
	}
	if (does_entity_exist(*uParam1))
	{
		_request_streamed_txd(iParam5, false);
		if (!_has_streamed_txd_loaded(iParam5))
		{
			return false;
		}
		if (!decor_exist_on(*uParam1, "letter_item"))
		{
			decor_set_int(*uParam1, "letter_item", iParam6);
			return false;
		}
		else
		{
			_set_apply_object_txd(*uParam1, iParam5, 0, 0);
			*uParam0 = 1;
			return true;
		}
	}
	return false;
}

void func_989(var uParam0, int iParam1, var uParam2, int iParam3)
{
	*uParam0 = iParam1;
}

void func_990(var uParam0, int iParam1, var uParam2, int iParam3)
{
	*uParam0 = iParam1;
}

bool func_991(var uParam0, var uParam1, int iParam2)
{
	if (!func_1203(&vVar0, uParam1, iParam2))
	{
		return false;
	}
	vVar0.f_2 = -536214615;
	if (!_datafile_get_hash(&iVar5, &vVar0))
	{
		return false;
	}
	if (iVar5 == 0)
	{
		return false;
	}
	uParam0->f_105.f_1[iParam2]->f_2 = iVar5;
	if (func_1204(uParam0->f_105.f_1[iParam2]->f_2, 1) == -1)
	{
		return false;
	}
	return true;
}

bool func_992(var uParam0, var uParam1, int iParam2)
{
	Var0.f_5 = 1150681088;
	if (!func_1205(uParam1, iParam2, &Var0))
	{
		return false;
	}
	uParam0->f_105.f_1[iParam2] = _create_propset_2(uParam0->f_105.f_1[iParam2]->f_2, Var0, Var0.f_4, Var0.f_3, Var0.f_5, false, Var0.f_6);
	if (!_does_propset_exist(&(uParam0->f_105.f_1[iParam2])))
	{
		return false;
	}
	return true;
}

int func_993(var uParam0)
{
	iVar0 = 16;
	if (iVar0 != -1)
	{
		iVar1 = &uParam0->f_67.f_2[iVar0];
		if (_does_volume_exist(iVar1))
		{
			if (func_556(get_player_ped(player_id()), iVar1, 1, 0))
			{
				return 0;
			}
		}
	}
	iVar0 = 15;
	if (iVar0 != -1)
	{
		iVar1 = &uParam0->f_67.f_2[iVar0];
		if (_does_volume_exist(iVar1))
		{
			if (func_556(get_player_ped(player_id()), iVar1, 1, 0))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_994(var uParam0, var uParam1)
{
	if (func_255(uParam1->f_2))
	{
		return 0;
	}
	iVar0 = 15;
	if (iVar0 != -1)
	{
		iVar1 = &uParam0->f_67.f_2[iVar0];
		if (_does_volume_exist(iVar1))
		{
			if (func_556(get_player_ped(player_id()), iVar1, 1, 0))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_995(int iParam0)
{
	switch (iParam0)
	{
		case 303108068:
			return -839267265;
		case -910931556:
			return -258540245;
		default:
			break;
	}
	return 0;
}

bool func_996(var uParam0, var uParam1)
{
	if (func_457(uParam0) != func_531(*uParam1))
	{
		return true;
	}
	if (func_998(uParam0) != func_995(func_303(*uParam1)))
	{
		return true;
	}
	if (func_457(uParam0) != -1)
	{
		bVar0 = is_ped_male(get_player_ped(_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id()))));
		iVar2 = _0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id()));
		bVar1 = func_1024(*uParam1, func_457(uParam0), iVar2);
		switch (func_997(uParam0))
		{
			case -79578972:
			case 1193262427:
				break;
			case 215313709:
				if (bVar1)
				{
					return true;
				}
				break;
			case -448649721:
				if (!bVar1)
				{
					return true;
				}
				break;
			case -222497930:
				if (!bVar0)
				{
					return true;
				}
				break;
			case 1404455848:
				if (bVar0)
				{
					return true;
				}
				break;
			case -220854676:
				if (!bVar0)
				{
					return true;
				}
				if (bVar1)
				{
					return true;
				}
				break;
			case -1842592032:
				if (bVar0)
				{
					return true;
				}
				if (bVar1)
				{
					return true;
				}
				break;
			case -1876655894:
				if (!bVar0)
				{
					return true;
				}
				if (!bVar1)
				{
					return true;
				}
				break;
			case 2042787810:
				if (bVar0)
				{
					return true;
				}
				if (!bVar1)
				{
					return true;
				}
				break;
			default:
				break;
		}
	}
	return false;
}

int func_997(var uParam0)
{
	return uParam0->f_4034.f_244;
}

int func_998(var uParam0)
{
	return uParam0->f_4034.f_245;
}

bool func_999(var uParam0)
{
	iVar0 = func_531(*uParam0);
	iVar1 = func_303(*uParam0);
	return func_739(*uParam0, iVar0, iVar1) == 3;
}

bool func_1000(var uParam0, var uParam1)
{
	if (func_465(uParam0) != func_531(*uParam1))
	{
		return true;
	}
	if (func_1004(uParam0) != func_995(func_303(*uParam1)))
	{
		return true;
	}
	return false;
}

bool func_1001(var uParam0, var uParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6)
{
	if (!func_23(Param2))
	{
		return false;
	}
	if (iParam6 == -1)
	{
		return false;
	}
	iVar5 = func_478(iParam4, 1);
	if (iVar5 == -1)
	{
		return false;
	}
	iVar4 = 2002222928;
	vVar1 = { func_182(&bVar0, *uParam1, uParam0->f_4034.f_98[iVar5]->f_4, iVar4, iParam6, 1) };
	if (bVar0)
	{
		iParam5->f_3 = iVar4;
		iParam5->f_4 = iParam4;
		*iParam5 = { vVar1 };
		return true;
	}
	return false;
}

void func_1002(var uParam0, var uParam1, int iParam2, int iParam3, vector3 vParam4, int iParam7)
{
	if (iParam7 == -1)
	{
		return;
	}
	func_747(uParam0, uParam1);
	if (!func_1025(&(uParam0->f_4034), vParam4, 0, -1, 1, 0))
	{
		return;
	}
	func_467(uParam0, iParam2);
	func_468(uParam0, iParam3);
	func_469(uParam0, vParam4);
	func_470(uParam0, iParam7);
}

int func_1003(var uParam0)
{
	return uParam0->f_4034.f_250;
}

int func_1004(var uParam0)
{
	return uParam0->f_4034.f_251;
}

bool func_1005(int iParam0, int iParam1)
{
	iVar0 = func_1206(iParam1, 1);
	if (iVar0 > -1 && iVar0 < 32)
	{
		return is_bit_set((*Global_1118808)[iParam0]->f_9, iVar0);
	}
	return false;
}

bool func_1006()
{
	if (!network_is_session_active() || !network_is_game_in_progress())
	{
		return false;
	}
	return func_1207(player_id());
}

bool func_1007(var uParam0, var uParam1)
{
	iVar0 = player_id();
	*uParam0 = func_1208(iVar0);
	*uParam1 = func_1209(iVar0);
	return (*uParam0 || *uParam1);
}

int func_1008(var uParam0, int iParam1)
{
	iVar0 = func_478(iParam1, 1);
	if (iVar0 == -1)
	{
		return -1;
	}
	return &(uParam0->f_4034.f_98[iVar0]);
}

struct<2> func_1009(int iParam0)
{
	return Global_1107216->f_33[iParam0]->f_3.f_5;
}

bool func_1010(int iParam0, int iParam1)
{
	return ((*Global_1128574)[iParam0]->f_48 && iParam1) != 0;
}

bool func_1011(int iParam0)
{
	iVar0 = func_903(iParam0);
	if (!func_1108(iVar0))
	{
		return false;
	}
	iVar1 = func_1020(iVar0);
	if (!func_191(iVar1))
	{
		return false;
	}
	if (!func_1210(iVar1, &iVar2))
	{
		return true;
	}
	if (func_297(iVar2, 2))
	{
		return false;
	}
	return true;
}

void func_1012(int iParam0)
{
	(*Global_1128574)[player_id()]->f_48 = ((*Global_1128574)[player_id()]->f_48 - ((*Global_1128574)[player_id()]->f_48 && iParam0));
}

var func_1013(int iParam0)
{
	Var0 = { func_894(440364183, func_893(iParam0)) };
	return func_1211(Var0);
}

void func_1014(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_848(*iParam0);
	iVar1 = func_849(*iParam0);
	iVar2 = func_850(*iParam0);
	iVar3 = func_528(*iParam0);
	iVar4 = func_847(*iParam0);
	iVar5 = func_846(*iParam0);
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
	iVar6 = func_851(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_851(iVar1, iVar0);
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
	func_1212(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_1015(int iParam0, bool bParam1)
{
	return func_1213(func_526(), iParam0, bParam1);
}

var func_1016(struct<2> Param0)
{
	uVar0 = func_1022(Param0, -1);
	return func_784(uVar0);
}

var func_1017(struct<2> Param0)
{
	uVar0 = func_1022(Param0, -1);
	return uVar0;
}

bool func_1018(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

int func_1019(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iVar1 = &uParam0->f_4034.f_98[iVar0];
		if (iVar1 == -1)
		{
		}
		else if (!does_entity_exist(&(uParam0->f_112.f_200[iVar1])))
		{
		}
		else if (!is_entity_visible(&(uParam0->f_112.f_200[iVar1])))
		{
		}
		else if (&uParam0->f_112.f_200[iVar1] == iParam1)
		{
			return func_680(iVar0, 1);
		}
		iVar0++;
	}
	return 0;
}

int func_1020(int iParam0)
{
	return Global_1107216->f_33[iParam0]->f_3.f_1;
}

int func_1021(int iParam0)
{
	Var0 = { func_894(817387112, func_893(iParam0)) };
	return func_1214(Var0);
}

int func_1022(var uParam0, int iParam1, int iParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return iParam2;
	}
	if (!stat_id_get_int(&uParam0, &uVar0))
	{
		return iParam2;
	}
	return uVar0;
}

bool func_1023(var uParam0)
{
	return (get_game_timer() - uParam0->f_4034.f_256) >= 5000;
}

int func_1024(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 1;
	while (iVar0 <= iParam2)
	{
		if (func_608(iParam0, iParam1, func_1215(iVar0)))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_1025(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_1216(cParam1, cParam0);
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

void func_1026(var uParam0, var uParam1, int iParam2)
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
	Var0.f_4 = 21030;
	Var0.f_3 = iParam2;
	Var0.f_19 = 4;
	Var0.f_20 = 3;
	Var0.f_21 = 4;
	Var0.f_22 = 3;
	Var0.f_8 = 4;
	Var0.f_7 = 500;
	func_867(&(Var0.f_5), 1);
	_0x66f9eb44342bb4c5(&(uParam0->f_112.f_200[func_354(uParam0, uParam1, 0)]), &Var0);
	func_421(&((uParam0->f_112.f_200[func_354(uParam0, uParam1, 0)])->f_124.f_25), 1024);
}

void func_1027(char* sParam0, bool bParam1, bool bParam2)
{
	stop_scripted_conversation(sParam0, bParam1, bParam2);
}

void func_1028(var uParam0, var uParam1, int iParam2)
{
	if (func_205(&(uParam0->f_4034.f_212), iParam2, 1))
	{
	}
}

int func_1029(var uParam0, int iParam1)
{
	return &(uParam0->f_4034.f_138[func_683(iParam1, 1)]);
}

void func_1030(var uParam0, int iParam1)
{
	uParam0->f_4034.f_138[func_683(iParam1, 1)] = 0;
}

void func_1031(var uParam0, int iParam1)
{
	uParam0->f_4034.f_138[func_683(iParam1, 1)] = &uParam0->f_4034.f_138[func_683(iParam1, 1)] + 1;
}

void func_1032(var uParam0, var uParam1, int iParam2)
{
	if (func_205(&(uParam0->f_4034.f_134), func_683(iParam2, 1), 3))
	{
	}
}

var func_1033(var uParam0, int iParam1)
{
	return &(uParam0->f_4034.f_214[iParam1]);
}

void func_1034(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_1217(uParam0, iParam1, sParam2))
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

int func_1035(var uParam0)
{
	return uParam0->f_4034.f_239;
}

int func_1036()
{
	return get_player_ped(255);
}

void func_1037(int iParam0)
{
	iVar0 = player_id();
	(*Global_1128574)[iVar0]->f_34 = ((*Global_1128574)[iVar0]->f_34 - ((*Global_1128574)[iVar0]->f_34 && iParam0));
}

void func_1038(var uParam0, int iParam1, bool bParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return;
	}
	if (!stat_id_set_bool(&uParam0, bParam2, true))
	{
		return;
	}
}

void func_1039(int iParam0, int iParam1)
{
	if (func_205(&(Global_1109804->f_6371.f_3[iParam1]->f_5), iParam0, 2))
	{
	}
}

int func_1040(int iParam0, int iParam1)
{
	return &((*Global_1118808)[iParam0]->f_2[func_557(iParam1, 1)]);
}

int func_1041()
{
	return Global_1102219->f_3672;
}

var func_1042(int iParam0)
{
	return (*Global_1297047)[iParam0]->f_8;
}

int func_1043()
{
	return Global_1572887->f_13;
}

var func_1044(int iParam0, int iParam1)
{
	return &((*Global_1120070)[iParam0]->f_24.f_2[iParam1]->f_4[6]);
}

bool func_1045(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_1218(uParam0, iParam1, iParam2, iParam3))
	{
		return false;
	}
	uParam0->f_2 = 1200720527;
	uParam0->f_3 = iParam4;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

bool func_1046(var uParam0, int iParam1)
{
	uParam0->f_2 = -1918309560;
	uParam0->f_3 = iParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

char* func_1047(bool bParam0, var uParam1, var uParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return uParam2;
}

bool func_1048(var uParam0, int iParam1)
{
	if (!_0x603ac35fd4602c76(iParam1))
	{
		return false;
	}
	*uParam0 = iParam1;
	uParam0->f_1 = uVar0;
	return true;
}

var func_1049(vector3 vParam0, var uParam3, var uParam4, int iParam5)
{
	vParam0.f_2 = iParam5;
	if (!_datafile_get_hash(&uVar0, &vParam0))
	{
	}
	return uVar0;
}

int func_1050()
{
	return Global_1109804->f_5737.f_632;
}

int func_1051(int iParam0, int iParam1, var uParam2)
{
	if (iParam0 > iParam1)
	{
		return -1;
	}
	iVar0 = ((iParam0 + iParam1) / 2);
	if (*uParam2 < &Global_1109804->f_5737.f_451[iVar0])
	{
		return func_1051(iParam0, (iVar0 - 1), uParam2);
	}
	if (*uParam2 > &Global_1109804->f_5737.f_451[iVar0])
	{
		return func_1051(iVar0 + 1, iParam1, uParam2);
	}
	return iVar0;
}

var func_1052(int iParam0)
{
	return Global_1109804->f_5737.f_451[iParam0]->f_1;
}

bool func_1053(var uParam0, int iParam1)
{
	if (!_0x7907969497ea92f5(iParam1))
	{
		return false;
	}
	if (!_0x603ac35fd4602c76(iParam1))
	{
		return false;
	}
	_copy_memory(uParam0, &uVar0, 5);
	*uParam0 = iParam1;
	return true;
}

int func_1054(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (!func_1219(*uParam0, &(uParam0->f_1), 33417155, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1219(*uParam0, &(uParam0->f_1), 12932893, func_1220(*uParam1), 0, 1))
	{
		return 0;
	}
	if (!func_1219(*uParam0, &(uParam0->f_1), -2017210649, uParam1->f_1, 0, 1))
	{
		return 0;
	}
	_copy_memory(&(uParam2->f_2), uParam1, 2);
	return func_1221(*uParam0, uParam2, bParam3);
}

int func_1055(int iParam0, int iParam1)
{
	return (*Global_1120070)[iParam0]->f_24.f_2[iParam1]->f_2;
}

int func_1056(int iParam0, int iParam1)
{
	return (*Global_1120070)[iParam0]->f_24.f_2[iParam1]->f_2.f_1;
}

void func_1057(int iParam0, int iParam1)
{
	(*Global_1120070)[iParam0]->f_20 = ((*Global_1120070)[iParam0]->f_20 || iParam1);
}

void func_1058(int iParam0, int iParam1)
{
	(*Global_1120070)[iParam0]->f_24.f_1 = iParam1;
}

void func_1059(int iParam0, int iParam1, var uParam2)
{
	*(*Global_1120070)[iParam0]->f_24.f_2[iParam1] = { *uParam2 };
}

void func_1060(int iParam0, var uParam1)
{
	(*Global_1120070)[iParam0]->f_24 = uParam1;
}

bool func_1061(var uParam0, int iParam1)
{
	uParam0->f_2 = -1614496179;
	uParam0->f_3 = iParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

int func_1062(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1379545861:
			return 3;
		case -816807373:
			return 4;
		case 0:
			return 0;
		case 1716548612:
			return 1;
		case 1988807506:
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

bool func_1063(var uParam0, int iParam1)
{
	uParam0->f_2 = 155183949;
	uParam0->f_3 = iParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

int func_1064(int iParam0)
{
	switch (iParam0)
	{
		case 947511550:
			return 1;
		case -954149452:
			return 2;
		case -1660177495:
			return 4;
		case -1123998338:
			return 7;
		case -214650084:
			return 8;
		case 85672377:
			return 16;
		default:
			break;
	}
	return 0;
}

bool func_1065(var uParam0, int iParam1)
{
	uParam0->f_2 = 1591836767;
	uParam0->f_3 = iParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

int func_1066(vector3 vParam0, var uParam3, var uParam4)
{
	vParam0.f_2 = 271069761;
	if (!_datafile_get_hash(&uVar0, &vParam0))
	{
		return 0;
	}
	return uVar0;
}

int func_1067(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 638003844:
			return 2;
		case 1462533337:
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

struct<8> func_1068(vector3 vParam0, var uParam3, var uParam4)
{
	vParam0.f_2 = -277313798;
	if (!_datafile_get_string(&Var0, &vParam0))
	{
	}
	return Var0;
}

void func_1069(struct<5> Param0, var uParam5, int iParam6)
{
	if (!func_1222(&Param0, iParam6))
	{
		return;
	}
	iVar0 = func_1223(Param0);
	vVar1 = { func_807(Param0) };
	vVar4 = { func_1224(Param0) };
	vVar7 = { func_1225(Param0) };
	_0x12fcaa23f2320422(*uParam5, iVar0, vVar1, vVar4, vVar7);
}

bool func_1070(var uParam0, int iParam1)
{
	uParam0->f_2 = 1758962534;
	uParam0->f_3 = iParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

bool func_1071(struct<5> Param0, var uParam5, var uParam6)
{
	uVar4 = Param0.f_1;
	*uParam5 = { func_498(Param0) };
	uParam5->f_9 = func_806(Param0);
	uParam5->f_10 = func_1226(Param0);
	iVar1 = func_239(Param0, -1544070393);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Param0.f_1 = uVar4;
		iVar2 = 0;
		if (!func_800(&Param0, iVar0))
		{
			return false;
		}
		iVar3 = func_801(Param0);
		switch (iVar3)
		{
			case 961558953:
				if (!func_509(Param0, iVar3, &iVar2, uParam6))
				{
					return false;
				}
				uParam5->f_12 = iVar2;
				break;
			case 1588979285:
				if (!func_509(Param0, iVar3, &iVar2, uParam6))
				{
					return false;
				}
				uParam5->f_11 = iVar2;
				break;
			default:
				return false;
		}
		iVar0++;
	}
	if (uParam5->f_11 & 2 != 0 || uParam5->f_11 & 4 != 0)
	{
		Param0.f_1 = uVar4;
		if (!func_1227(&Param0))
		{
			return false;
		}
		if (!func_497(&Param0, uParam6))
		{
			return false;
		}
		uParam5->f_13 = { func_807(Param0) };
		uParam5->f_13.f_3 = func_808(Param0);
	}
	else if (uParam5->f_11 & 128 != 0)
	{
		Param0.f_1 = uVar4;
		if (!func_1228(&Param0))
		{
			return false;
		}
		if (!func_1229(&Param0))
		{
			return false;
		}
		uParam5->f_17 = { func_498(Param0) };
	}
	return true;
}

bool func_1072(var uParam0, int iParam1)
{
	uParam0->f_2 = 1537295589;
	uParam0->f_3 = iParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

int func_1073(int iParam0)
{
	switch (iParam0)
	{
		case -907098195:
			return 1;
		case -1453140709:
			return 2;
		case 331632914:
			return 4;
		case 1152024837:
			return 8;
		case 1960114521:
			return 16;
		case -259577388:
			return 32;
		default:
			break;
	}
	return 0;
}

int func_1074(int iParam0)
{
	switch (iParam0)
	{
		case 874525785:
			return 1;
		case 1919038356:
			return 2;
		case 1304227765:
			return 4;
		case -560457212:
			return 8;
		case -540896632:
			return 16;
		case -1155906572:
			return 32;
		case 1955535331:
			return 256;
		default:
			break;
	}
	return 0;
}

bool func_1075(int iParam0)
{
	return iParam0 != 0;
}

int func_1076(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_1077(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	if (!func_236(uParam0, uParam4, iParam1))
	{
		return false;
	}
	iVar1 = func_239(*uParam0, 1333416092);
	uVar3 = uParam0->f_1;
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		uParam0->f_1 = uVar3;
		if (!func_240(uParam0, iVar0))
		{
		}
		else
		{
			iVar2 = func_241(*uParam0);
			if (iParam3 != func_242(iVar2))
			{
			}
			else if (func_243(*uParam0, iParam2))
			{
			}
			else
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1078(var uParam0)
{
	uParam0->f_2 = -34107655;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	return true;
}

bool func_1079(var uParam0, var uParam1, int iParam2)
{
	uParam0->f_2 = 1808784790;
	uParam0->f_3 = uParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

bool func_1080(int iParam0, int iParam1)
{
	return ((*Global_1130634)[iParam0]->f_1 && iParam1) != 0;
}

bool func_1081(var uParam0, int iParam1)
{
	iVar0 = func_478(iParam1, 1);
	if (iVar0 == -1)
	{
		return false;
	}
	if (&uParam0->f_4034.f_98[iVar0] == -1)
	{
		return false;
	}
	if (!does_entity_exist(&(uParam0->f_112.f_200[&uParam0->f_4034.f_98[iVar0]])))
	{
		return false;
	}
	if (is_entity_dead(&(uParam0->f_112.f_200[&uParam0->f_4034.f_98[iVar0]])))
	{
		return false;
	}
	if (!is_entity_visible(&(uParam0->f_112.f_200[&uParam0->f_4034.f_98[iVar0]])))
	{
		return false;
	}
	return true;
}

void func_1082(var uParam0, var uParam1, var uParam2)
{
	if (uParam2->f_11 != _0x901e0dc25080c8b9(player_id()))
	{
		return;
	}
	iVar0 = func_730(uParam2->f_16);
	if (func_415(uParam0, iVar0))
	{
	}
	switch (iVar0)
	{
		case 8:
			func_737(uParam0, uParam2->f_7);
			func_400(&(uParam0->f_4034.f_114), 2, func_93(uParam1->f_1));
			break;
		case 9:
			iVar1 = func_438(*uParam1, uParam2->f_7);
			if (iVar1 == -1)
			{
				return;
			}
			else
			{
				func_748(uParam0, iVar1);
			}
			break;
		case 2:
			switch (uParam2->f_16)
			{
				case -753195767:
				case -448995989:
				case 304038664:
				case 1545958071:
					uParam2->f_15 = func_689(uParam0, uParam1, iVar0);
					break;
				default:
					break;
			}
			break;
		case 0:
		case 1:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			break;
		default:
			return;
	}
	func_701(uParam0, uParam1, iVar0);
	func_702(uParam0, iVar0, uParam2->f_16);
	func_703(uParam0, iVar0, uParam2->f_15);
}

void func_1083(var uParam0, int iParam1, var uParam2)
{
	uParam0->f_4306[iParam1]->f_2 = uParam2;
}

void func_1084(var uParam0, int iParam1, var uParam2)
{
	uParam0->f_4306[iParam1]->f_2.f_1 = uParam2;
}

void func_1085(var uParam0, int iParam1, var uParam2)
{
	uParam0->f_4306[iParam1]->f_2.f_2 = uParam2;
}

void func_1086(var uParam0, int iParam1, var uParam2)
{
	uParam0->f_4306[iParam1]->f_11 = uParam2;
}

int func_1087(int iParam0)
{
	switch (iParam0)
	{
		case -323664079:
			return 0;
		case 304473406:
			return 1;
		case 1428568385:
			return 2;
		case -710377432:
			return 3;
		default:
			break;
	}
	return -1;
}

void func_1088(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1089(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_1090(var uParam0, var uParam1)
{
	return !func_269(uParam0, uParam1);
}

bool func_1091(int iParam0)
{
	Var0 = { func_259() };
	if (!func_23(Var0))
	{
		return false;
	}
	if (!network_is_session_active() || !network_is_game_in_progress())
	{
		if (iParam0 & 4 != 0)
		{
			return true;
		}
		if (iParam0 & 2 != 0)
		{
			return false;
		}
	}
	iVar2 = func_903(player_id());
	if (iVar2 == -1)
	{
		return false;
	}
	if (!func_101(func_1009(iVar2), Var0))
	{
		return false;
	}
	iVar3 = func_1230(iVar2);
	if (iVar3 == -1)
	{
		return false;
	}
	return func_698(iVar3, 1);
}

bool func_1092(var uParam0)
{
	iVar0 = func_92(uParam0->f_2);
	if (!func_603(iVar0))
	{
		return false;
	}
	if (func_1231(iVar0))
	{
		return false;
	}
	iVar1 = func_696(iVar0);
	if (iVar1 == -1)
	{
		return false;
	}
	return func_698(iVar1, 1);
}

bool func_1093(var uParam0, bool bParam1)
{
	if (&uParam0->f_1730.f_1[0] < 6)
	{
		return false;
	}
	if (&uParam0->f_1730.f_1[0] > 7)
	{
		return false;
	}
	if (!bParam1)
	{
		if (_0x4822a65d5af64e69(uParam0->f_1730.f_1[0]->f_1) <= 0)
		{
			return false;
		}
	}
	return true;
}

bool func_1094(int iParam0, int iParam1)
{
	if (iParam0 & 2 != 0)
	{
		if (func_163() == iParam1)
		{
			if (func_340() == 0)
			{
				return true;
			}
		}
	}
	if (iParam0 & 1 != 0)
	{
		if (network_is_session_active() && network_is_game_in_progress())
		{
			Var0 = { func_259() };
			if (func_23(Var0))
			{
				iVar2 = func_903(player_id());
				if (iVar2 == -1)
				{
				}
				else if (func_101(func_1009(iVar2), Var0))
				{
					iVar3 = func_1230(iVar2);
					if (iVar3 == -1)
					{
					}
					else if (func_698(iVar3, 1))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_1095(var uParam0, var uParam1, int iParam2)
{
	return func_354(uParam0, uParam1, 0) == iParam2;
}

bool func_1096(var uParam0, int iParam1)
{
	Var0 = { func_259() };
	if (!func_77())
	{
		return false;
	}
	if (!func_23(Var0))
	{
		return false;
	}
	if (func_340() != -1)
	{
		if (func_163() == func_93(uParam0->f_1))
		{
			return false;
		}
	}
	if (func_1232(6))
	{
		return false;
	}
	if (!network_is_session_active() || !network_is_game_in_progress())
	{
		return iParam1 & 1 != 0;
	}
	iVar2 = func_903(player_id());
	if (iVar2 == -1)
	{
		return true;
	}
	if (!func_101(func_1009(iVar2), Var0))
	{
		return true;
	}
	if (func_1020(iVar2) != uParam0->f_1)
	{
		return true;
	}
	return false;
}

bool func_1097(var uParam0)
{
	iVar0 = func_20();
	if (iVar0 == -1)
	{
		return false;
	}
	if (iVar0 == uParam0->f_1)
	{
		return false;
	}
	return true;
}

bool func_1098(var uParam0)
{
	return (!func_1233(func_93(uParam0->f_1)) && func_538(_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id())), 1, 0, 1));
}

bool func_1099(var uParam0)
{
	Var0 = { func_619(_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id()))) };
	_0x4ef23e04a0c8ff51(&Var0, &iVar7);
	return (!func_1234(func_93(uParam0->f_1)) && iVar7 > 0);
}

bool func_1100(var uParam0)
{
	if (!func_77())
	{
		return false;
	}
	return !func_550(uParam0->f_1);
}

bool func_1101(int iParam0)
{
	return _0x149a2751ab66ac02(iParam0) > 4;
}

struct<8> func_1102(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = iParam1;
	if (!_datafile_get_string(&Var0, uParam0))
	{
	}
	return Var0;
}

int func_1103(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2010581984:
			return 9;
		case -2001405328:
			return 5;
		case -1824322988:
			return 10;
		case -1518489911:
			return 11;
		case -1348549877:
			return 12;
		case -1211373264:
			return 16;
		case -1067974651:
			return 18;
		case -1040947274:
			return 13;
		case -890716772:
			return 7;
		case -775927147:
			return 4;
		case -761617270:
			return 17;
		case 518798111:
			return 1;
		case 522505504:
			return 3;
		case 1042373141:
			return 6;
		case 1803795142:
			return 14;
		case 1806630731:
			return 0;
		case 1859868723:
			return 2;
		case 1992773981:
			return 8;
		case 2015728894:
			return 15;
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

float func_1104(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 2f;
		case 2:
			return 1.5f;
		case 3:
			return 1f;
		case 4:
			return 0f;
		default:
			break;
	}
	return 3f;
}

bool func_1105(int iParam0)
{
	iVar0 = iParam0;
	return (iVar0 >= 0 && iVar0 < 64);
}

int func_1106(int iParam0)
{
	return Global_1128574[iParam0];
}

int func_1107(int iParam0, int iParam1)
{
	iVar0 = _0x901e0dc25080c8b9(iParam0);
	if (func_1108(iParam1))
	{
		if (iVar0 == func_1235(iParam1))
		{
			return iParam1;
		}
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (iVar0 == func_1235(iVar1))
		{
			return iVar1;
		}
		iVar1++;
	}
	return -1;
}

bool func_1108(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 32);
}

void func_1109(int iParam0)
{
	if (!func_1108(iParam0))
	{
		return;
	}
	(*Global_1128574)[network_player_id_to_int()] = iParam0;
}

int func_1110(int iParam0)
{
	return &(Global_1109804->f_5737[iParam0]);
}

int func_1111(int iParam0)
{
	return func_1236(iParam0);
}

int func_1112(int iParam0)
{
	return (*Global_1116202)[iParam0]->f_1;
}

int func_1113(var uParam0)
{
	if (func_23(*uParam0))
	{
		return 0;
	}
	return 1;
}

int func_1114(int iParam0, int iParam1)
{
	if (!func_77())
	{
		return 0;
	}
	if (!func_11(iParam0))
	{
		return 15;
	}
	iVar0 = func_92(iParam0);
	if (iVar0 == 0)
	{
		return 19;
	}
	if (!func_1237(iParam1, 2))
	{
		if (!_unlock_is_visible(iVar0))
		{
			return 18;
		}
	}
	if (!func_1237(iParam1, 1))
	{
		if (!_unlock_is_unlocked(iVar0))
		{
			return 17;
		}
	}
	return 0;
}

int func_1115(var uParam0, int iParam1)
{
	if (uParam0->f_2.f_1 == 0)
	{
		return 2;
	}
	if (!func_1237(iParam1, 4))
	{
		if (!_unlock_is_unlocked(uParam0->f_2.f_1))
		{
			return 4;
		}
	}
	if (!func_1237(iParam1, 8))
	{
		if (!_unlock_is_visible(uParam0->f_2.f_1))
		{
			return 3;
		}
	}
	return 0;
}

int func_1116(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (func_1237(iParam3, 16))
	{
		return 0;
	}
	if (!func_77())
	{
		return 0;
	}
	if (func_698(uParam0->f_2, 1))
	{
		return 0;
	}
	if (func_1238(uParam2, iParam1))
	{
		return 0;
	}
	return 5;
}

int func_1117(var uParam0, int iParam1)
{
	if (func_1237(iParam1, 16384))
	{
		return 0;
	}
	iVar0 = func_528(func_526());
	if (is_bit_set(uParam0->f_25.f_2, iVar0))
	{
		return 14;
	}
	return 0;
}

int func_1118(int iParam0, int iParam1)
{
	if (func_1237(iParam1, 1024))
	{
		return 0;
	}
	if (!func_11(iParam0))
	{
		return 15;
	}
	if (!func_1239(func_237(iParam0)))
	{
		return 0;
	}
	iVar1 = player_id();
	iVar0 = _0x901e0dc25080c8b9(iVar1);
	if (_0x4be6c13a45cca8ec(iVar0) != iVar1)
	{
		return 28;
	}
	return 0;
}

int func_1119(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (!func_11(iParam1))
	{
		return 15;
	}
	if (!func_77())
	{
		return 0;
	}
	if (func_1237(iParam3, 32))
	{
		return 0;
	}
	if (func_698(uParam0->f_2, 1))
	{
		return 0;
	}
	if (!_0xd6f6acf4392187fb(iParam2))
	{
		return 23;
	}
	if (!_0x93a91a351a07360e(iParam2))
	{
		return 24;
	}
	iVar0 = _0x4be6c13a45cca8ec(iParam2);
	if (!_network_is_player_index_valid(iVar0))
	{
		return 29;
	}
	if (!network_is_player_active(iVar0))
	{
		return 30;
	}
	if (func_1240(iVar0, iParam1))
	{
		return 16;
	}
	return 0;
}

int func_1120(var uParam0, int iParam1, int iParam2)
{
	if (!func_1241(uParam0->f_2))
	{
		return 21;
	}
	if (!func_77())
	{
		return 0;
	}
	if (func_1237(iParam2, 64))
	{
		return 0;
	}
	if (func_698(uParam0->f_2, 1))
	{
		return 0;
	}
	if (!_0xd6f6acf4392187fb(iParam1))
	{
		return 23;
	}
	if (!_0x93a91a351a07360e(iParam1))
	{
		return 24;
	}
	iVar0 = _0x4be6c13a45cca8ec(iParam1);
	if (!_network_is_player_index_valid(iVar0))
	{
		return 29;
	}
	if (!network_is_player_active(iVar0))
	{
		return 30;
	}
	if (func_1242(iVar0, uParam0->f_2))
	{
		return 22;
	}
	return 0;
}

int func_1121(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		iParam1 = func_1243(iParam0);
		if (iParam1 == -1)
		{
			return 26;
		}
	}
	if (func_1244(iParam1) != 0)
	{
		if (func_1237(iParam2, 2048))
		{
			return 0;
		}
		return 25;
	}
	return 0;
}

int func_1122(int iParam0)
{
	if (!func_77())
	{
		return 0;
	}
	if (!_0xd6f6acf4392187fb(iParam0))
	{
		return 23;
	}
	if (!_0x93a91a351a07360e(iParam0))
	{
		return 24;
	}
	iVar0 = _0x4be6c13a45cca8ec(iParam0);
	if (!_network_is_player_index_valid(iVar0))
	{
		return 29;
	}
	if (!network_is_player_active(iVar0))
	{
		return 30;
	}
	if (func_23((*Global_1056141)[iVar0]->f_2))
	{
		return 6;
	}
	return 0;
}

int func_1123(int iParam0, var uParam1, int iParam2)
{
	if (func_1237(iParam2, 256))
	{
		return 0;
	}
	if (uParam1->f_31.f_1 == 493038497)
	{
		return 0;
	}
	iVar0 = _0x4be6c13a45cca8ec(iParam0);
	if (_network_is_player_index_valid(iVar0))
	{
		if (network_is_player_active(iVar0))
		{
			iVar1 = func_1245(iVar0);
		}
		else
		{
			return 30;
		}
	}
	else
	{
		return 29;
	}
	if (iVar1 == 0)
	{
		return 31;
	}
	switch (uParam1->f_31.f_1)
	{
		case -1563022819:
			if (iVar1 != 1)
			{
				return 7;
			}
			break;
		case -858967395:
			if (iVar1 != 2)
			{
				return 8;
			}
			break;
		default:
			break;
	}
	return 0;
}

int func_1124(var uParam0, int iParam1, int iParam2)
{
	if (func_1237(iParam2, 512))
	{
		return 0;
	}
	if (_0x149a2751ab66ac02(iParam1) < &uParam0->f_4[0])
	{
		return 27;
	}
	return 0;
}

int func_1125(var uParam0, int iParam1)
{
	if (func_1237(iParam1, 128))
	{
		return 0;
	}
	if (func_698(uParam0->f_2, 1))
	{
		return 0;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_4 = 10;
	Var0.f_15 = 4;
	Var0.f_15.f_5 = 4;
	Var0.f_25 = 1;
	Var0.f_28 = 2;
	Var0.f_28.f_1 = -1;
	Var0.f_28.f_1.f_1 = -1;
	Var0.f_31 = 493038497;
	Var0.f_31.f_1 = 493038497;
	func_1246(&Var0);
	if (!func_23(Var0))
	{
		return 0;
	}
	iVar33 = 0;
	while (iVar33 <= 3)
	{
		iVar34 = (Var0.f_15[iVar33] || Var0.f_15.f_5[iVar33]) // PointerArith;
		if (iVar34 == 0)
		{
		}
		else
		{
			iVar35 = (uParam0->f_15.f_5[iVar33] && iVar34);
			if (iVar35 != 0)
			{
				return 9;
			}
		}
		iVar33++;
	}
	return 0;
}

int func_1126(var uParam0, int iParam1)
{
	if (func_1237(iParam1, 4096))
	{
		return 0;
	}
	if (&uParam0->f_4[1] > 0)
	{
		iVar1 = get_max_num_network_peds();
		iVar0 = get_num_reserved_mission_peds(1);
		if ((iVar1 - iVar0) < &uParam0->f_4[1])
		{
			return 10;
		}
	}
	if (&uParam0->f_4[2] > 0)
	{
		iVar1 = get_max_num_network_objects();
		iVar0 = get_num_reserved_mission_objects(1);
		if ((iVar1 - iVar0) < &uParam0->f_4[2])
		{
			return 11;
		}
	}
	if (&uParam0->f_4[3] > 0)
	{
		iVar1 = get_max_num_network_vehicles();
		iVar0 = get_num_reserved_mission_vehicles(1);
		if ((iVar1 - iVar0) < &uParam0->f_4[3])
		{
			return 12;
		}
	}
	if (&uParam0->f_4[4] > 0)
	{
		iVar1 = get_max_num_network_pickups();
		iVar0 = _0x62be3ecc79fbd004(1);
		if ((iVar1 - iVar0) < &uParam0->f_4[4])
		{
			return 13;
		}
	}
	return 0;
}

int func_1127(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 23;
	}
	iVar0 = _0x4be6c13a45cca8ec(iParam0);
	if (!_network_is_player_index_valid(iVar0))
	{
		return 29;
	}
	if (!network_is_player_active(iVar0))
	{
		return 30;
	}
	if (func_886(iVar0))
	{
		return 44;
	}
	return 0;
}

int func_1128(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_11(iParam3))
	{
		return 15;
	}
	if (!func_191(iParam4))
	{
		return 20;
	}
	vVar0 = { func_350(iParam4) };
	bVar4 = func_105(iParam1, 536870912);
	if (func_1247(&(uParam0->f_25), 2015728894) || func_1247(&(uParam0->f_25), -1211373264))
	{
		if (!func_1248(iParam2, vVar0, uVar3))
		{
			return 33;
		}
	}
	iVar5 = func_1249(*uParam0);
	iVar6 = func_1250(uParam0->f_2, iVar5);
	if (!bVar4)
	{
		iVar7 = 0;
		while (iVar7 < iVar6)
		{
			vVar8 = { func_1251(uParam0->f_2, iVar5, iVar7) };
			if (func_178(vVar8))
			{
			}
			else if (_0x397769175a7dbb30(vVar8, 20f, 0, 0, 575122756))
			{
				return 34;
			}
			iVar7++;
		}
	}
	return 0;
}

int func_1129(var uParam0, int iParam1)
{
	iVar0 = func_1249(*uParam0);
	iVar1 = func_1250(uParam0->f_2, iVar0);
	bVar2 = func_105(iParam1, 536870912);
	if (!bVar2)
	{
		iVar3 = 0;
		while (iVar3 < iVar1)
		{
			vVar4 = { func_1251(uParam0->f_2, iVar0, iVar3) };
			if (func_178(vVar4))
			{
			}
			else if (_0x397769175a7dbb30(vVar4, 20f, 0, 0, 575122756))
			{
				return 34;
			}
			iVar3++;
		}
	}
	return 0;
}

int func_1130(var uParam0, int iParam1, int iParam2)
{
	bVar3 = func_1237(iParam1, 1073741824);
	bVar4 = func_1237(iParam1, 536870912);
	if (func_1237(iParam1, 8192))
	{
		vVar5 = { 0f, 0f, 0f };
	}
	else
	{
		vVar5 = { func_137(_0x4be6c13a45cca8ec(iParam2)) };
	}
	func_1252(*uParam0, &iVar1, &uVar2);
	iVar8 = func_1254(iVar1, uVar2, func_1253(iVar1), vVar5, !bVar3, bVar4, 1, -1082130432);
	if (iVar8 != 0)
	{
		switch (iVar8)
		{
			case 7:
				iVar0 = 39;
				break;
			case 8:
				iVar0 = 40;
				break;
			case 3:
				iVar0 = 43;
				break;
			case 6:
				iVar0 = 42;
				break;
			case 5:
				iVar0 = 38;
				break;
			case 4:
				iVar0 = 34;
				break;
			case 1:
				iVar0 = 35;
				break;
			case 11:
				iVar0 = 32;
				break;
			case 2:
				iVar0 = 37;
				break;
			case 12:
				iVar0 = 36;
				break;
			case 15:
				iVar0 = 44;
				break;
			default:
				iVar0 = 41;
				break;
		}
		return iVar0;
	}
	return 0;
}

var func_1131(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	_0xde544b7ec0c187cc(&uVar0);
	if (!network_is_game_in_progress())
	{
		return uVar0;
	}
	if (func_1255() != 0)
	{
		iVar1 = player_id();
		if (iVar1 >= 0 && iVar1 < 32)
		{
			_0x31010318ba9897ac(&uVar0, iVar1);
		}
		return uVar0;
	}
	iVar2 = 0;
	bVar3 = false;
	bVar4 = false;
	iVar5 = Global_1296859->f_10;
	iVar6 = Global_1296859->f_15;
	bVar7 = true;
	iVar9 = iParam10;
	if (vmag2(vParam6) < 1f)
	{
		bVar7 = false;
	}
	else
	{
		switch (iParam9)
		{
			case 665633627:
				iVar8 = _create_volume_cylinder_with_custom_name(vParam0, vParam3, vParam6, func_1256());
				break;
			case -432403087:
				iVar8 = _create_volume_sphere_with_custom_name(vParam0, vParam3, vParam6, func_1256());
				break;
			case -1612834106:
				iVar8 = _create_volume_box_with_custom_name(vParam0, vParam3, vParam6, func_1256());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_1257(get_player_team(iVar5)));
	}
	if (iVar9 & 8 != 0 && iVar9 & 32768 != 0)
	{
		iVar9 |= 65536;
		iVar9 = (iVar9 - iVar9 & 40952);
	}
	if (iVar9 & 4 != 0)
	{
		if (!network_get_this_script_is_network_script())
		{
			iVar9 = (iVar9 - iVar9 & 4);
			iVar9 |= 0;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (network_is_player_active(&(Global_1296859->f_154[iVar2])))
		{
			iVar10 = &Global_1296859->f_154[iVar2];
			bVar3 = false;
			bVar4 = false;
			if (iVar9 & 1 != 0 && iVar10 == iVar5)
			{
				bVar3 = true;
			}
			if (func_1258(iVar2))
			{
				bVar3 = true;
			}
			iVar11 = get_player_ped(iVar10);
			if (!bVar3)
			{
				if (iVar9 & 2 != 0)
				{
					if (!does_entity_exist(iVar11))
					{
						bVar3 = true;
					}
					else if (&Global_1296859->f_88[iVar2])
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8192 != 0 && func_1259(iVar2) != 1)
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 16384 != 0 && _0xb655db7582aec805(iVar11))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 4 != 0 && !network_is_player_a_participant(iVar10))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8176 != 0)
				{
					switch (get_player_team(iVar10))
					{
						case -1:
							if (iVar9 & 16 != 0)
							{
								bVar4 = true;
							}
							break;
						case 0:
							if (iVar9 & 32 != 0)
							{
								bVar4 = true;
							}
							break;
						case 1:
							if (iVar9 & 64 != 0)
							{
								bVar4 = true;
							}
							break;
						case 2:
							if (iVar9 & 128 != 0)
							{
								bVar4 = true;
							}
							break;
						case 3:
							if (iVar9 & 256 != 0)
							{
								bVar4 = true;
							}
							break;
						case 4:
							if (iVar9 & 512 != 0)
							{
								bVar4 = true;
							}
							break;
						case 5:
							if (iVar9 & 1024 != 0)
							{
								bVar4 = true;
							}
							break;
						case 6:
							if (iVar9 & 2048 != 0)
							{
								bVar4 = true;
							}
							break;
						case 8:
							if (iVar9 & 4096 != 0)
							{
								bVar4 = true;
							}
							break;
					}
					if (!bVar4)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 32768 != 0)
				{
					if (_0x901e0dc25080c8b9(iVar10) != iVar6)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 65536 != 0)
				{
					if (!func_1260(iVar10))
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3 && bVar7)
			{
				if (!_0xf256a75210c5c0eb(iVar8, get_entity_coords(iVar11, false, false)))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				_0x31010318ba9897ac(&uVar0, iVar2);
			}
		}
		iVar2++;
	}
	if (bVar7)
	{
		_delete_volume(iVar8);
	}
	return uVar0;
}

bool func_1132(int iParam0, vector3 vParam1, float fParam4)
{
	return vdist(func_137(iParam0), vParam1) <= fParam4;
}

void func_1133(char* sParam0, var uParam1, int iParam2, int iParam3, vector3 vParam4)
{
	iVar0 = get_player_ped(iParam3);
	(*uParam1)[iParam2] = iParam3;
	if (is_player_dead(iParam3))
	{
	}
	else
	{
		if (is_ped_male(iVar0))
		{
			iVar2 = 745166621;
			bVar1 = sParam0->f_280[iParam2]->f_11 & 16 != false;
		}
		else
		{
			iVar2 = -250583361;
			bVar1 = sParam0->f_456[iParam2]->f_11 & 16 != false;
		}
		if (bVar1)
		{
			(*uParam1)[iParam2]->f_1 = iVar0;
		}
		else
		{
			(*uParam1)[iParam2]->f_1 = clone_ped(iVar0, 0f, true, true);
			func_1261(uParam1, iParam2, iParam3, vParam4, iVar0);
		}
		(*uParam1)[iParam2]->f_2 = iVar2;
	}
	sParam0->f_727[func_1262(iVar2, 1)] = &sParam0->f_727[func_1262(iVar2, 1)] + 1;
}

bool func_1134(int iParam0, int iParam1)
{
	if (iParam1 != 255)
	{
		return ((*Global_1145091)[iParam1]->f_23.f_10 && iParam0) != 0;
	}
	return (Global_1139381->f_4779.f_10 && iParam0) != 0;
}

int func_1135(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_1136(float fParam0)
{
	iVar0 = player_ped_id();
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	vVar1 = { get_entity_coords(iVar0, true, false) };
	clear_area(vVar1, fParam0, 65536);
	remove_particle_fx_in_range(vVar1, fParam0);
}

void func_1137(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	Global_1896738->f_3948 = get_game_timer();
	Global_1896738->f_3948.f_1 = iParam0;
}

bool func_1138(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4)
{
	bVar0 = func_1263();
	if (bVar0)
	{
		if (uParam0->f_2 & 16 != 0)
		{
			if ((get_game_timer() - uParam0->f_5) >= 8000)
			{
				clear_ped_tasks(iParam3, 1, 0);
				return true;
			}
		}
		if (func_1264(iParam3, 242628503))
		{
			if (get_sequence_progress(iParam3) == 1)
			{
				return true;
			}
		}
	}
	if (get_script_task_status(iParam3, -208384378, true) == 0 || get_script_task_status(iParam3, -208384378, true) == 1)
	{
		return false;
	}
	if (_is_ped_carrying(iParam3))
	{
		iVar1 = _get_first_entity_ped_is_carrying(iParam3);
		task_place_carried_entity_at_coord(iParam3, iVar1, get_entity_coords(iParam3, true, false), 1f, 0);
		return false;
	}
	if (get_script_task_status(iParam3, 716706914, true) == 0 || get_script_task_status(iParam3, 716706914, true) == 1)
	{
		return false;
	}
	if (func_866(iParam3, 0, 1, 0) != -1569615261)
	{
		set_current_ped_weapon(iParam3, -1569615261, false, 0, false, false);
		task_swap_weapon(iParam3, 1, 0, 0, 0);
		return false;
	}
	switch ((*uParam2)[0]->f_2)
	{
		case 745166621:
			if (!_get_anim_scene_entity_matrix(uParam0->f_1, sParam1->f_280[0], &Var2, true, &(sParam1->f_632[iParam4]->f_1), 2))
			{
				return false;
			}
			break;
		case -250583361:
			if (!_get_anim_scene_entity_matrix(uParam0->f_1, sParam1->f_456[0], &Var2, true, &(sParam1->f_632[iParam4]->f_1), 2))
			{
				return false;
			}
			break;
	}
	if (func_1265(iParam3, Var2, Var2.f_3.f_2, 0.25f, 30f, 1))
	{
		if (is_ped_still(iParam3))
		{
			return true;
		}
	}
	if (bVar0)
	{
		if (!func_1264(iParam3, 242628503) && uParam0->f_2 & 16 == 0)
		{
			open_sequence_task(&iVar14);
			task_follow_nav_mesh_to_coord(0, Var2, 1f, 5000, 0.25f, 0, Var2.f_3.f_2);
			task_stand_still(0, 3000);
			func_1266(iParam3, &iVar14, 0, 0, 1, 1);
			if (func_1264(iParam3, 242628503))
			{
				uParam0->f_5 = get_game_timer();
				uParam0->f_2 |= 16;
			}
		}
	}
	return false;
}

void func_1139(int iParam0)
{
	Global_1956200->f_1431.f_2 = 0f;
	Global_1956200->f_1431.f_1 = iParam0;
}

int func_1140()
{
	return Global_1109804->f_21.f_12.f_11;
}

void func_1141(int iParam0, bool bParam1, bool bParam2)
{
	if (!is_entity_dead(iParam0))
	{
		if (is_entity_attached(iParam0))
		{
			detach_entity(iParam0, bParam1, bParam2);
		}
	}
}

int func_1142(var uParam0, var uParam1)
{
	bVar0 = func_255(uParam0->f_2);
	iVar1 = -1;
	if (bVar0)
	{
		if (is_bit_set(uParam1->f_52, 1))
		{
			iVar1 = func_1267(uParam1, 1);
		}
	}
	else if (is_bit_set(uParam1->f_52, 0))
	{
		iVar1 = func_1267(uParam1, 0);
	}
	if (iVar1 == -1)
	{
		if (is_bit_set(uParam1->f_52, 2))
		{
			iVar1 = func_1267(uParam1, 2);
		}
	}
	return iVar1;
}

int func_1143(var uParam0, int iParam1)
{
	iVar1 = uParam0->f_112.f_200[iParam1]->f_47.f_3.f_50;
	iVar0 = uParam0->f_112.f_200[iParam1]->f_47.f_3.f_49;
	iVar2 = 0;
	while (iVar2 <= (uParam0->f_112.f_200[iParam1]->f_47.f_3[iVar1]->f_15 - 1))
	{
		if (uParam0->f_112.f_200[iParam1]->f_47.f_3[iVar1]->f_10[iVar2]->f_1 == &uParam0->f_112.f_200[iParam1]->f_47.f_3[iVar0])
		{
			return iVar2;
		}
		iVar2++;
	}
	return -1;
}

bool func_1144(var uParam0, int iParam1)
{
	if (uParam0->f_112.f_200[iParam1]->f_124.f_16 == 0)
	{
		return _0x02ebbb3989b7e695(&(uParam0->f_112.f_200[iParam1]));
	}
	return false;
}

bool func_1145(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam2 != 0)
	{
		fVar1 = vdist(get_entity_coords(iParam0, true, false), get_entity_coords(iParam1, true, false));
		switch (iParam2)
		{
			case 157877922:
				iVar0 = _0x7f9b9791d4cb71f6(iParam0, iParam1, 1, 1);
				if (iVar0 == 1)
				{
					if (fVar1 > 40f)
					{
						*bParam3 = 1;
					}
					return true;
				}
				break;
			case -1507090758:
			case -1102089407:
			case -587661767:
			case -171567092:
			case -141209784:
			case 956330317:
			case 1722245163:
			case 1973084963:
				if (fVar1 <= 55f)
				{
					iVar0 = _0x7f9b9791d4cb71f6(iParam0, iParam1, 1, 1);
					if (iVar0 != 1)
					{
						*bParam3 = 1;
					}
				}
				else
				{
					*bParam3 = 1;
				}
				return true;
		}
	}
	return false;
}

bool func_1146(var uParam0, int iParam1, int iParam2)
{
	if (!func_1268(uParam0->f_112.f_200[iParam1], 6))
	{
		if (func_1269(uParam0, iParam1, iParam2, 0))
		{
			func_1270(uParam0->f_112.f_200[iParam1], 6, 4000, 6000);
		}
	}
	else if (!func_1269(uParam0, iParam1, iParam2, 1))
	{
		func_1271(uParam0->f_112.f_200[iParam1], 6);
	}
	else if (func_1272(uParam0->f_112.f_200[iParam1], 6, 0))
	{
		return true;
	}
	return false;
}

void func_1147(var uParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return;
	}
	set_bit(&(uParam0->f_124), iParam1);
	uParam0->f_124.f_1[iParam1] = get_game_timer();
}

bool func_1148(var uParam0, var uParam1)
{
	if (uParam1->f_124.f_17 > -1 && uParam1->f_124.f_17 < 32)
	{
		if (does_entity_exist(&(uParam0->f_112.f_7[uParam1->f_124.f_17])))
		{
			return true;
		}
	}
	return false;
}

void func_1149(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_112.f_200[iParam1]->f_124.f_16 = iParam2;
}

bool func_1150(var uParam0, var uParam1)
{
	return (func_105(uParam1->f_124.f_25, 4) && !func_1273(uParam0));
}

bool func_1151(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9)
{
	iVar0 = 0;
	iVar1 = 0;
	bVar2 = false;
	func_1274(uParam2, uParam4, iParam3, !bParam8);
	while (*iParam6 < iParam7)
	{
		iVar1 = uParam4->f_7;
		if (func_1275(uParam0, uParam4, iVar1, &iVar0, 4))
		{
			if (bParam9)
			{
				uParam0->f_112.f_7[iVar1]->f_3 = 0;
				func_414(&(uParam0->f_112.f_200[iParam3]->f_124.f_25), 64);
			}
			if (func_1276(uParam0, uParam1, uParam2, uParam4, uParam0->f_112.f_7[iVar1], iParam3, iParam5, bParam8))
			{
				if (uParam4->f_2 || *uParam4 >= uParam4->f_8[iParam3]->f_1)
				{
					bVar2 = true;
					uParam2->f_124.f_17 = iVar1;
					uParam4->f_8[iParam3]->f_1 = *uParam4;
					uParam4->f_8[iParam3]->f_2 = uParam4->f_1;
					if (func_105(uParam0->f_112.f_7[iVar1]->f_3, 32))
					{
						func_421(&(uParam0->f_112.f_200[iParam3]->f_124.f_25), 64);
					}
					if (uParam4->f_2)
					{
						return true;
					}
				}
			}
		}
		*iParam6++;
		uParam4->f_7++;
		if (uParam4->f_7 >= 32)
		{
			uParam4->f_7 = 0;
		}
	}
	return (bVar2 && func_1148(uParam0, uParam2));
}

bool func_1152(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (func_105(uParam2->f_124.f_25, 8))
	{
		if (!func_105(uParam2->f_124.f_25, 16))
		{
			if (((func_92(uParam1->f_2) == 539824333 || func_92(uParam1->f_2) == -701311458) || func_92(uParam1->f_2) == -705903163) || func_92(uParam1->f_2) == -1239926065)
			{
				func_633(uParam0, uParam2, 30000);
				return true;
			}
			else if (_0x916b8e075abc8b4e(*uParam2, 1))
			{
				if (_0x916b8e075abc8b4e(*uParam2, 0))
				{
					_0xe7fa07624574b79a(*uParam2, &(uParam0->f_112.f_7[uParam2->f_124.f_17]), uParam2->f_124.f_18, uParam2->f_124.f_19, -1f, 1, 0, 1, 1);
					func_421(&(uParam2->f_124.f_25), 16);
				}
			}
			else
			{
				func_414(&(uParam2->f_124.f_25), 8);
				func_414(&(uParam2->f_124.f_25), 16);
			}
		}
		else if (_0x916b8e075abc8b4e(*uParam2, 0))
		{
			func_414(&(uParam2->f_124.f_25), 8);
			func_414(&(uParam2->f_124.f_25), 16);
			return true;
		}
		else if (!_0x916b8e075abc8b4e(*uParam2, 1))
		{
			func_414(&(uParam2->f_124.f_25), 8);
			func_414(&(uParam2->f_124.f_25), 16);
		}
		if (func_105(uParam2->f_124.f_25, 8))
		{
			return false;
		}
	}
	if (_0x916b8e075abc8b4e(*uParam2, !bParam3))
	{
		if (!func_105(uParam2->f_124.f_25, 8))
		{
			return true;
		}
	}
	set_ped_can_play_ambient_anims(*uParam2, false);
	set_ped_can_play_gesture_anims(*uParam2, 0, 1);
	if (((func_92(uParam1->f_2) == 539824333 || func_92(uParam1->f_2) == -701311458) || func_92(uParam1->f_2) == -705903163) || func_92(uParam1->f_2) == -1239926065)
	{
		func_633(uParam0, uParam2, 30000);
		return true;
	}
	else if (!_0x916b8e075abc8b4e(*uParam2, 1))
	{
		_0xe7fa07624574b79a(*uParam2, &(uParam0->f_112.f_7[uParam2->f_124.f_17]), uParam2->f_124.f_18, uParam2->f_124.f_19, -1f, 1, 0, 1, 1);
	}
	return false;
}

bool func_1153(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 36)
	{
		if (func_1005(iParam0, 202068422))
		{
			if (!func_255(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_1154(int iParam0, int iParam1)
{
	if (!func_11(iParam0))
	{
		return;
	}
	if (!func_77())
	{
		return;
	}
	iVar4 = func_92(iParam0);
	iVar11 = func_1021(iVar4);
	if (iVar11 != 0)
	{
		iVar1 = func_1277(iVar4);
		Var5 = { func_1278(iVar11, iVar4) };
		iVar2 = iVar1;
		func_1014(&iVar2, Var5, Var5.f_1, Var5.f_2, Var5.f_3, Var5.f_4, Var5.f_5, 0);
		Var5 = { func_1278(iParam1, iVar4) };
		iVar3 = func_526();
		func_1014(&iVar3, Var5, Var5.f_1, Var5.f_2, Var5.f_3, Var5.f_4, Var5.f_5, 0);
		if (func_1213(iVar2, iVar3, 1))
		{
			return;
		}
	}
	func_1279(iParam0);
	func_1280(iParam0);
	iVar0 = func_526();
	func_1281(iVar4, iVar0, iParam1);
	func_981(1);
}

bool func_1155(var uParam0, bool bParam1)
{
	if (!bParam1 && (is_any_speech_playing(*uParam0) || func_105(uParam0->f_124.f_25, 128)))
	{
		func_1147(uParam0, 0);
	}
	else
	{
		if (!func_105(uParam0->f_124.f_25, 64))
		{
			if (!_0x02ebbb3989b7e695(*uParam0))
			{
				if (!_0x916b8e075abc8b4e(*uParam0, 1))
				{
					return false;
				}
			}
		}
		if (func_1272(uParam0, 0, 0))
		{
			func_1271(uParam0, 0);
			return true;
		}
	}
	return !func_1268(uParam0, 0);
}

void func_1156(var uParam0, bool bParam1, bool bParam2)
{
	func_1147(uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_421(&(uParam0->f_124.f_25), 4);
			func_1282(uParam0, 0, 10000, 15000);
		}
		else
		{
			func_414(&(uParam0->f_124.f_25), 4);
			func_1282(uParam0, 0, 6000, 8000);
		}
	}
}

void func_1157(var uParam0, var uParam1, var uParam2, struct<2> Param3)
{
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_7.f_1 = -1;
	Var0.f_10 = 255;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = 7;
	Var0.f_19.f_1 = 255;
	Var0.f_19.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_27.f_1 = -1;
	_0x31010318ba9897ac(&uVar31, player_id());
	Var0.f_10 = player_id();
	Var0.f_6 = uParam0;
	Var0.f_5 = uParam1;
	Var0.f_11 = _0x901e0dc25080c8b9(player_id());
	Var0.f_4 = 7;
	Var0.f_16 = uParam2;
	Var0.f_7 = { Param3 };
	func_907(&Var0, uVar31);
}

bool func_1158(var uParam0, var uParam1)
{
	if (((func_92(uParam0->f_2) == 539824333 || func_92(uParam0->f_2) == -701311458) || func_92(uParam0->f_2) == -705903163) || func_92(uParam0->f_2) == -1239926065)
	{
		return true;
	}
	if (_0x916b8e075abc8b4e(*uParam1, 1))
	{
		if (_0x916b8e075abc8b4e(*uParam1, 0))
		{
			_0x541e5b41dca45828(*uParam1, uParam1->f_124.f_19, 1);
		}
		return false;
	}
	return _0x02ebbb3989b7e695(*uParam1);
}

void func_1159(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, float fParam5)
{
	_task_start_scenario_in_place(iParam0, iParam1, iParam2, bParam3, iParam4, fParam5, false);
}

int func_1160(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, false, false);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_1283(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

int func_1161(vector3 vParam0, bool bParam3, int iParam4, bool bParam5)
{
	if (iParam4 == 0)
	{
		return 0;
	}
	iVar0 = create_itemset(true);
	iVar6 = _0x59b57c4b06531e1e(vParam0, bParam3, iVar0, 1);
	if (iVar6 > 0)
	{
		iVar5 = 0;
		while (iVar5 <= (iVar6 - 1))
		{
			uVar1 = get_indexed_item_in_itemset(iVar5, iVar0);
			iVar2 = _0x3ffb15534067dcd4(uVar1);
			if (!does_entity_exist(iVar2))
			{
			}
			else
			{
				iVar4 = get_entity_model(iVar2);
				if (iParam4 != iVar4)
				{
				}
				else if (bParam5)
				{
					if (_get_entity_script(iVar2, &uVar7) != -192136878)
					{
					}
					else
					{
						iVar3 = iVar2;
					}
					else
					{
						iVar5++;
					}
					destroy_itemset(iVar0);
					return iVar3;
				}
			}
		}
	}
}

bool func_1162(var uParam0, var uParam1, int iParam2)
{
	if (!func_206(uParam0, func_179(*uParam1), func_170(*uParam1)))
	{
		return false;
	}
	if (!func_472(uParam0, 1))
	{
		return false;
	}
	if (!func_476(uParam0, iParam2))
	{
		return false;
	}
	return true;
}

bool func_1163(var uParam0, int iParam1)
{
	uParam0->f_2 = -835870147;
	uParam0->f_3 = iParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

int func_1164(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1618793727:
			return 1;
		case -1002055397:
			return 2;
		case 0:
			return 0;
		case 961558953:
			return 3;
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

void func_1165(var uParam0, var uParam1, int iParam2, int iParam3, struct<5> Param4)
{
	iVar1 = func_215(Param4, -779715008);
	uVar3 = Param4.f_1;
	iVar2 = 0;
	while (iVar2 <= (iVar1 - 1))
	{
		Param4.f_1 = uVar3;
		if (!func_1284(&Param4, iVar2))
		{
		}
		else
		{
			Param4.f_2 = 1649401908;
			if (!_datafile_get_hash(&iVar0, &Param4))
			{
			}
			else if (iVar0 == 0)
			{
			}
			else
			{
				switch (iParam3)
				{
					case 961558953:
						uParam0->f_112.f_200[iParam2]->f_3 = (uParam0->f_112.f_200[iParam2]->f_3 || func_1285(iVar0));
						break;
					case -1618793727:
						uParam0->f_112.f_200[iParam2]->f_154 = (uParam0->f_112.f_200[iParam2]->f_154 || func_1286(iVar0));
						break;
					case -1002055397:
						uParam0->f_112.f_200[iParam2]->f_155 = (uParam0->f_112.f_200[iParam2]->f_155 || func_1287(iVar0));
						break;
					default:
						break;
				}
			}
		}
		iVar2++;
	}
}

int func_1166(int iParam0, int iParam1)
{
	if (iParam0 <= -1887131085)
	{
		switch (iParam0)
		{
			case -2146508301:
				return 12123;
			case -2146427795:
				return 3977;
			case -2146366325:
				return 3143;
			case -2146356753:
				return 14541;
			case -2146265525:
				return 13460;
			case -2146230737:
				return 8549;
			case -2146214902:
				return 12524;
			case -2146033569:
				return 168;
			case -2145952209:
				return 11710;
			case -2145890973:
				return 14585;
			case -2145710553:
				return 6433;
			case -2145654950:
				return 11880;
			case -2145627480:
				return 5753;
			case -2145565593:
				return 11834;
			case -2145251038:
				return 13804;
			case -2145170802:
				return 12569;
			case -2144902919:
				return 16099;
			case -2143634101:
				return 12990;
			case -2143534249:
				return 15505;
			case -2143273523:
				return 14065;
			case -2142956142:
				return 15392;
			case -2142529325:
				return 634;
			case -2141831005:
				return 12332;
			case -2141448164:
				return 7530;
			case -2141341934:
				return 4796;
			case -2140850881:
				return 11072;
			case -2140528977:
				return 12415;
			case -2140524120:
				return 752;
			case -2140483437:
				return 14113;
			case -2139535895:
				return 3498;
			case -2139331018:
				return 12438;
			case -2139113605:
				return 3226;
			case -2139088565:
				return 1945;
			case -2138673046:
				return 7168;
			case -2138618725:
				return 4117;
			case -2138487121:
				return 7425;
			case -2137554627:
				return 1516;
			case -2137507542:
				return 8330;
			case -2137071927:
				return 6524;
			case -2136261216:
				return 15637;
			case -2136255889:
				return 13781;
			case -2136071050:
				return 8346;
			case -2135689248:
				return 2695;
			case -2135648449:
				return 3327;
			case -2135373529:
				return 13452;
			case -2134937768:
				return 6291;
			case -2133834671:
				return 16131;
			case -2133359054:
				return 12807;
			case -2133164405:
				return 8955;
			case -2132817328:
				return 12693;
			case -2132574900:
				return 13788;
			case -2132366287:
				return 12383;
			case -2132271374:
				return 1537;
			case -2132132220:
				return 4619;
			case -2131982726:
				return 805;
			case -2131906947:
				return 9750;
			case -2131404875:
				return 9986;
			case -2131192581:
				return 4723;
			case -2131086115:
				return 11837;
			case -2130100737:
				return 720;
			case -2129818996:
				return 8853;
			case -2129521009:
				return 12163;
			case -2129482557:
				return 9348;
			case -2129481010:
				return 438;
			case -2128902508:
				return 4321;
			case -2128764147:
				return 12006;
			case -2127729126:
				return 7464;
			case -2127350799:
				return 12245;
			case -2127322790:
				return 4740;
			case -2127206140:
				return 10245;
			case -2127191384:
				return 3848;
			case -2126328423:
				return 13731;
			case -2126305609:
				return 2147;
			case -2125925845:
				return 6948;
			case -2125542215:
				return 2272;
			case -2125336602:
				return 2231;
			case -2124661292:
				return 5749;
			case -2124640714:
				return 10986;
			case -2124463995:
				return 1544;
			case -2123776901:
				return 681;
			case -2123586751:
				return 13711;
			case -2123537697:
				return 11154;
			case -2123265579:
				return 5933;
			case -2123236538:
				return 13842;
			case -2122913844:
				return 4571;
			case -2122411326:
				return 15622;
			case -2122226661:
				return 4475;
			case -2122197961:
				return 7256;
			case -2122079951:
				return 4667;
			case -2121768533:
				return 1090;
			case -2121713628:
				return 3720;
			case -2121247978:
				return 16387;
			case -2120774360:
				return 15951;
			case -2120624246:
				return 11748;
			case -2120550211:
				return 10058;
			case -2120171894:
				return 4294;
			case -2119874262:
				return 5453;
			case -2119760643:
				return 9293;
			case -2119496365:
				return 2115;
			case -2119050398:
				return 1581;
			case -2118494929:
				return 7470;
			case -2118265633:
				return 5105;
			case -2118240499:
				return 10419;
			case -2118163918:
				return 15956;
			case -2117927593:
				return 15176;
			case -2117870465:
				return 7887;
			case -2117216603:
				return 16395;
			case -2117062665:
				return 12795;
			case -2116754376:
				return 9906;
			case -2116748615:
				return 14554;
			case -2115716412:
				return 1958;
			case -2114023641:
				return 5771;
			case -2113646025:
				return 9311;
			case -2113376606:
				return 9926;
			case -2113047673:
				return 9617;
			case -2113018454:
				return 16371;
			case -2112645428:
				return 3418;
			case -2112344402:
				return 2478;
			case -2112051733:
				return 11936;
			case -2111907234:
				return 1277;
			case -2111755507:
				return 16267;
			case -2111666905:
				return 15421;
			case -2111490032:
				return 3988;
			case -2111085459:
				return 898;
			case -2110853262:
				return 8492;
			case -2110794264:
				return 7040;
			case -2110588978:
				return 8583;
			case -2110570975:
				return 4665;
			case -2110541500:
				return 5275;
			case -2110523140:
				return 12199;
			case -2110461911:
				return 3506;
			case -2110214703:
				return 14244;
			case -2109836948:
				return 5260;
			case -2109648364:
				return 3315;
			case -2109116182:
				return 11907;
			case -2109100258:
				return 8143;
			case -2109005962:
				return 2678;
			case -2108953935:
				return 14037;
			case -2108815164:
				return 1558;
			case -2108783310:
				return 10440;
			case -2108769355:
				return 14446;
			case -2108584078:
				return 3148;
			case -2108571472:
				return 4065;
			case -2108194471:
				return 11083;
			case -2107823340:
				return 4280;
			case -2107458052:
				return 1790;
			case -2106945712:
				return 2792;
			case -2106596341:
				return 5050;
			case -2106344980:
				return 8015;
			case -2106341808:
				return 4586;
			case -2106201815:
				return 2499;
			case -2106116472:
				return 10251;
			case -2105110696:
				return 15399;
			case -2104766853:
				return 5745;
			case -2104632348:
				return 899;
			case -2104596034:
				return 7809;
			case -2104094221:
				return 5916;
			case -2103886204:
				return 7831;
			case -2103833505:
				return 3681;
			case -2103275568:
				return 989;
			case -2103251870:
				return 11839;
			case -2103053029:
				return 16461;
			case -2102686964:
				return 10686;
			case -2102436869:
				return 14894;
			case -2102036198:
				return 7633;
			case -2102031605:
				return 12406;
			case -2102028356:
				return 8435;
			case -2101900575:
				return 11558;
			case -2101616621:
				return 4785;
			case -2101570094:
				return 13242;
			case -2101543250:
				return 6330;
			case -2101482636:
				return 8754;
			case -2101119264:
				return 5046;
			case -2100889219:
				return 12313;
			case -2100254131:
				return 14160;
			case -2100003372:
				return 12456;
			case -2099781628:
				return 16263;
			case -2099211717:
				return 893;
			case -2098928623:
				return 10021;
			case -2098817101:
				return 7837;
			case -2098388010:
				return 2246;
			case -2098014140:
				return 14198;
			case -2097428804:
				return 13013;
			case -2097394910:
				return 164;
			case -2097219199:
				return 12794;
			case -2096456957:
				return 11473;
			case -2096430697:
				return 9968;
			case -2096016554:
				return 8615;
			case -2095573720:
				return 15389;
			case -2095052802:
				return 9095;
			case -2094679580:
				return 1280;
			case -2094368529:
				return 13442;
			case -2094282489:
				return 13663;
			case -2094164842:
				return 6344;
			case -2093644909:
				return 8708;
			case -2092427420:
				return 3308;
			case -2092036940:
				return 5308;
			case -2091234578:
				return 1238;
			case -2090931256:
				return 8945;
			case -2089987996:
				return 14360;
			case -2089805217:
				return 5845;
			case -2089773343:
				return 13700;
			case -2089061362:
				return 14838;
			case -2088939215:
				return 2749;
			case -2088543606:
				return 215;
			case -2088444072:
				return 10340;
			case -2088032687:
				return 8137;
			case -2087760987:
				return 1592;
			case -2087759666:
				return 14950;
			case -2087546684:
				return 6341;
			case -2087512195:
				return 11484;
			case -2087261922:
				return 4949;
			case -2087257173:
				return 9295;
			case -2087223278:
				return 12121;
			case -2087217357:
				return 2756;
			case -2086875988:
				return 15263;
			case -2086312862:
				return 13020;
			case -2085906384:
				return 1028;
			case -2085771963:
				return 11726;
			case -2084659828:
				return 12141;
			case -2084588020:
				return 7997;
			case -2084507606:
				return 6860;
			case -2083728348:
				return 9134;
			case -2083227211:
				return 7116;
			case -2082655850:
				return 15408;
			case -2082440360:
				return 14004;
			case -2082428628:
				return 1290;
			case -2081966149:
				return 15270;
			case -2080972220:
				return 8570;
			case -2080876839:
				return 2985;
			case -2080420985:
				return 2662;
			case -2080389770:
				return 7455;
			case -2080070898:
				return 7819;
			case -2079857312:
				return 3215;
			case -2079649917:
				return 9284;
			case -2079635027:
				return 3373;
			case -2079348275:
				return 15879;
			case -2079339275:
				return 1560;
			case -2078993639:
				return 2535;
			case -2078914522:
				return 9533;
			case -2078891512:
				return 4756;
			case -2078205736:
				return 12505;
			case -2078138697:
				return 11887;
			case -2078077150:
				return 13957;
			case -2078033562:
				return 7581;
			case -2077978546:
				return 14325;
			case -2077833597:
				return 5369;
			case -2077651668:
				return 15692;
			case -2077259890:
				return 2884;
			case -2076845224:
				return 6486;
			case -2076813740:
				return 9481;
			case -2076608829:
				return 6742;
			case -2076101615:
				return 11628;
			case -2075624916:
				return 181;
			case -2075588078:
				return 15217;
			case -2075510463:
				return 493;
			case -2075486147:
				return 7557;
			case -2075190092:
				return 5592;
			case -2075028835:
				return 15036;
			case -2074655778:
				return 4054;
			case -2074435811:
				return 11147;
			case -2074273326:
				return 12156;
			case -2073417944:
				return 15688;
			case -2073130256:
				return 14525;
			case -2073026089:
				return 14174;
			case -2073003380:
				return 328;
			case -2072495950:
				return 422;
			case -2072143870:
				return 802;
			case -2071995742:
				return 3766;
			case -2070991587:
				return 4162;
			case -2070665651:
				return 5292;
			case -2070609728:
				return 13375;
			case -2070522502:
				return 15541;
			case -2070304785:
				return 12927;
			case -2070273503:
				return 4334;
			case -2070272172:
				return 5364;
			case -2070072185:
				return 8819;
			case -2069977106:
				return 5607;
			case -2069407005:
				return 2989;
			case -2069080983:
				return 14318;
			case -2068743918:
				return 12044;
			case -2068542271:
				return 2669;
			case -2067867899:
				return 6277;
			case -2067863105:
				return 4527;
			case -2067635262:
				return 4889;
			case -2065885511:
				return 1846;
			case -2065276132:
				return 9790;
			case -2065231086:
				return 4158;
			case -2065064302:
				return 12118;
			case -2064837152:
				return 12519;
			case -2064515180:
				return 8552;
			case -2064472468:
				return 799;
			case -2064282163:
				return 16101;
			case -2064204292:
				return 6322;
			case -2063399157:
				return 11385;
			case -2063375364:
				return 10445;
			case -2063289686:
				return 14661;
			case -2063183075:
				return 14523;
			case -2063096992:
				return 11064;
			case -2062911821:
				return 3579;
			case -2062900430:
				return 5616;
			case -2062492572:
				return 10009;
			case -2062027940:
				return 6717;
			case -2061911117:
				return 8749;
			case -2061669437:
				return 7000;
			case -2061615937:
				return 12364;
			case -2061494227:
				return 4837;
			case -2061455032:
				return 1494;
			case -2061400457:
				return 6132;
			case -2060997082:
				return 9802;
			case -2060977032:
				return 983;
			case -2060335356:
				return 5521;
			case -2059952714:
				return 327;
			case -2059583440:
				return 10312;
			case -2059378874:
				return 7727;
			case -2059285835:
				return 10626;
			case -2059265167:
				return 13144;
			case -2058944417:
				return 13904;
			case -2058893965:
				return 10303;
			case -2057358632:
				return 7165;
			case -2057172418:
				return 6698;
			case -2057095855:
				return 13953;
			case -2056768113:
				return 4964;
			case -2056087382:
				return 7293;
			case -2055989585:
				return 6665;
			case -2055830229:
				return 12609;
			case -2055537127:
				return 8677;
			case -2055098811:
				return 3176;
			case -2054685425:
				return 14757;
			case -2054392813:
				return 8039;
			case -2053881888:
				return 14405;
			case -2053831376:
				return 3020;
			case -2053652707:
				return 9702;
			case -2053586493:
				return 8954;
			case -2053326164:
				return 15162;
			case -2053250034:
				return 14158;
			case -2052733001:
				return 219;
			case -2052645777:
				return 4835;
			case -2052418363:
				return 5256;
			case -2052140572:
				return 11166;
			case -2051681652:
				return 11068;
			case -2051572808:
				return 10858;
			case -2051484186:
				return 13947;
			case -2051203822:
				return 13255;
			case -2051048367:
				return 3001;
			case -2050622463:
				return 7239;
			case -2050582894:
				return 3928;
			case -2050523246:
				return 8676;
			case -2050464169:
				return 5074;
			case -2050054649:
				return 13439;
			case -2049459194:
				return 3726;
			case -2049449981:
				return 3721;
			case -2049142311:
				return 7993;
			case -2049113323:
				return 134;
			case -2049014994:
				return 10615;
			case -2049007258:
				return 12713;
			case -2048927458:
				return 10209;
			case -2048579248:
				return 2436;
			case -2048335270:
				return 12342;
			case -2048208508:
				return 6364;
			case -2047924463:
				return 6109;
			case -2047919468:
				return 7924;
			case -2047578637:
				return 7668;
			case -2047363035:
				return 10362;
			case -2047177993:
				return 12618;
			case -2046956705:
				return 3269;
			case -2046943672:
				return 15239;
			case -2046717337:
				return 2668;
			case -2046617320:
				return 3199;
			case -2046569329:
				return 7927;
			case -2046444861:
				return 4801;
			case -2046271979:
				return 521;
			case -2045530267:
				return 9887;
			case -2045457794:
				return 10627;
			case -2045332310:
				return 9005;
			case -2045269112:
				return 15232;
			case -2044900246:
				return 14389;
			case -2044894272:
				return 12161;
			case -2044758506:
				return 16149;
			case -2044344457:
				return 9514;
			case -2044178990:
				return 6498;
			case -2043118942:
				return 361;
			case -2042829915:
				return 6061;
			case -2042758269:
				return 13424;
			case -2041975017:
				return 16065;
			case -2041734073:
				return 9946;
			case -2041580119:
				return 7118;
			case -2041542870:
				return 4868;
			case -2041482252:
				return 12774;
			case -2041256323:
				return 7634;
			case -2041050337:
				return 10407;
			case -2041041387:
				return 1663;
			case -2040957468:
				return 14348;
			case -2040421904:
				return 11905;
			case -2039430429:
				return 3620;
			case -2039280157:
				return 2087;
			case -2038907949:
				return 2815;
			case -2038347033:
				return 3116;
			case -2038176093:
				return 9803;
			case -2037578922:
				return 14529;
			case -2037206422:
				return 12896;
			case -2036976136:
				return 1658;
			case -2036803427:
				return 4523;
			case -2036598699:
				return 9299;
			case -2036246302:
				return 10754;
			case -2035733129:
				return 8117;
			case -2035622954:
				return 11849;
			case -2035329376:
				return 2572;
			case -2035029611:
				return 15335;
			case -2035015046:
				return 14833;
			case -2034775048:
				return 2671;
			case -2034597780:
				return 3363;
			case -2034063146:
				return 12915;
			case -2033679954:
				return 9366;
			case -2033594533:
				return 6591;
			case -2033419358:
				return 7769;
			case -2033040142:
				return 12198;
			case -2033031579:
				return 3778;
			case -2032460932:
				return 7253;
			case -2032088707:
				return 841;
			case -2031349163:
				return 4310;
			case -2030923907:
				return 5416;
			case -2030812579:
				return 11071;
			case -2030759320:
				return 7911;
			case -2029723568:
				return 11338;
			case -2029549822:
				return 7651;
			case -2029403312:
				return 11775;
			case -2029345710:
				return 3596;
			case -2029252334:
				return 6476;
			case -2029085880:
				return 8802;
			case -2028904204:
				return 15559;
			case -2028729840:
				return 1608;
			case -2028378984:
				return 4982;
			case -2027043009:
				return 6696;
			case -2026775247:
				return 6789;
			case -2026534332:
				return 11387;
			case -2026478636:
				return 14290;
			case -2026265047:
				return 14613;
			case -2025736579:
				return 14375;
			case -2025686226:
				return 10975;
			case -2025120472:
				return 13780;
			case -2024981491:
				return 7527;
			case -2024407605:
				return 15957;
			case -2024285609:
				return 11547;
			case -2024019598:
				return 8951;
			case -2023427504:
				return 3996;
			case -2023264971:
				return 12703;
			case -2023091207:
				return 2196;
			case -2022921611:
				return 14560;
			case -2022805833:
				return 14396;
			case -2022555457:
				return 10847;
			case -2022544349:
				return 7811;
			case -2021891582:
				return 6160;
			case -2021399837:
				return 13359;
			case -2021315548:
				return 2524;
			case -2021274799:
				return 5604;
			case -2021243415:
				return 9385;
			case -2021213387:
				return 5056;
			case -2021138744:
				return 3384;
			case -2021057690:
				return 12980;
			case -2021043433:
				return 14552;
			case -2020935742:
				return 7349;
			case -2020382569:
				return 12605;
			case -2020375679:
				return 5889;
			case -2020261305:
				return 11540;
			case -2020259113:
				return 12678;
			case -2020155455:
				return 1967;
			case -2019245895:
				return 15274;
			case -2019209710:
				return 278;
			case -2019050941:
				return 5739;
			case -2018802635:
				return 15511;
			case -2018709360:
				return 1474;
			case -2018649291:
				return 9189;
			case -2018468178:
				return 3560;
			case -2018070350:
				return 12277;
			case -2016837354:
				return 4570;
			case -2016642791:
				return 12212;
			case -2016426279:
				return 13095;
			case -2015953344:
				return 4521;
			case -2015812450:
				return 2515;
			case -2015527411:
				return 8808;
			case -2015460503:
				return 11368;
			case -2015247524:
				return 13845;
			case -2014985768:
				return 8906;
			case -2014703317:
				return 6120;
			case -2014630946:
				return 12261;
			case -2014377075:
				return 15292;
			case -2014081867:
				return 1361;
			case -2013824873:
				return 4149;
			case -2013711820:
				return 10349;
			case -2013188534:
				return 7719;
			case -2013068230:
				return 11741;
			case -2012913439:
				return 15902;
			case -2012656841:
				return 15119;
			case -2012611792:
				return 13344;
			case -2012550923:
				return 9960;
			case -2012125829:
				return 7109;
			case -2011226991:
				return 14771;
			case -2010730742:
				return 4539;
			case -2010635131:
				return 11972;
			case -2010409696:
				return 8067;
			case -2009922717:
				return 2059;
			case -2009528455:
				return 3028;
			case -2009438340:
				return 7426;
			case -2008958510:
				return 15494;
			case -2008462934:
				return 4614;
			case -2007871316:
				return 13415;
			case -2007761031:
				return 15283;
			case -2007453069:
				return 5722;
			case -2007219554:
				return 14929;
			case -2007007254:
				return 384;
			case -2006996000:
				return 10261;
			case -2006868292:
				return 12565;
			case -2006852813:
				return 2304;
			case -2006507012:
				return 8908;
			case -2006457151:
				return 13080;
			case -2006398858:
				return 15282;
			case -2006204490:
				return 6640;
			case -2005947010:
				return 554;
			case -2005702204:
				return 10495;
			case -2005416098:
				return 12339;
			case -2004899019:
				return 6065;
			case -2004866590:
				return 10566;
			case -2003972591:
				return 7478;
			case -2003969951:
				return 7609;
			case -2003969937:
				return 1818;
			case -2003730787:
				return 12315;
			case -2003311028:
				return 11677;
			case -2002682906:
				return 15074;
			case -2002508803:
				return 15681;
			case -2002139022:
				return 12738;
			case -2001507492:
				return 11846;
			case -2001184493:
				return 10332;
			case -2001000389:
				return 14799;
			case -2000963135:
				return 10211;
			case -2000926107:
				return 3171;
			case -2000765130:
				return 4013;
			case -2000689608:
				return 3775;
			case -2000583594:
				return 10827;
			case -2000451214:
				return 12918;
			case -2000333532:
				return 5224;
			case -2000201509:
				return 9438;
			case -1999542976:
				return 14175;
			case -1999403301:
				return 12238;
			case -1999198818:
				return 14605;
			case -1999125532:
				return 11079;
			case -1999060153:
				return 3072;
			case -1998240069:
				return 4730;
			case -1997997652:
				return 5509;
			case -1997298194:
				return 4062;
			case -1996942838:
				return 13320;
			case -1996660509:
				return 1975;
			case -1996174505:
				return 8862;
			case -1994873743:
				return 6197;
			case -1994390239:
				return 9882;
			case -1994196093:
				return 10930;
			case -1994173477:
				return 11084;
			case -1993940459:
				return 6280;
			case -1993784123:
				return 15172;
			case -1993750510:
				return 12648;
			case -1993290730:
				return 7546;
			case -1993215592:
				return 759;
			case -1993201915:
				return 3341;
			case -1993145727:
				return 15594;
			case -1992863256:
				return 16234;
			case -1992397275:
				return 15179;
			case -1992363149:
				return 504;
			case -1992204057:
				return 5118;
			case -1991764208:
				return 1964;
			case -1991530395:
				return 1919;
			case -1991368278:
				return 3485;
			case -1991286405:
				return 11036;
			case -1991218695:
				return 7840;
			case -1991169856:
				return 6193;
			case -1990962020:
				return 15318;
			case -1990559777:
				return 3295;
			case -1990184894:
				return 9406;
			case -1990046598:
				return 3344;
			case -1989363999:
				return 4125;
			case -1988871699:
				return 13745;
			case -1988859073:
				return 4437;
			case -1988670793:
				return 4257;
			case -1988548788:
				return 14397;
			case -1988282150:
				return 11682;
			case -1987854584:
				return 6172;
			case -1987760803:
				return 6898;
			case -1987450858:
				return 789;
			case -1986592686:
				return 6741;
			case -1986489017:
				return 12311;
			case -1986255105:
				return 8896;
			case -1986030111:
				return 3011;
			case -1986012503:
				return 6255;
			case -1985973724:
				return 2935;
			case -1985163420:
				return 4813;
			case -1985144596:
				return 14012;
			case -1984279062:
				return 10838;
			case -1984214316:
				return 7795;
			case -1984110241:
				return 6360;
			case -1983826837:
				return 8618;
			case -1983655970:
				return 7456;
			case -1983606159:
				return 15638;
			case -1983449351:
				return 8260;
			case -1983440800:
				return 6787;
			case -1983358489:
				return 8823;
			case -1983310944:
				return 8225;
			case -1982971771:
				return 8152;
			case -1982846823:
				return 14;
			case -1982739974:
				return 4797;
			case -1982738876:
				return 10537;
			case -1982408694:
				return 12615;
			case -1982021427:
				return 8356;
			case -1981561472:
				return 14573;
			case -1981432950:
				return 11964;
			case -1981374266:
				return 9512;
			case -1981296938:
				return 182;
			case -1980241753:
				return 5898;
			case -1980183352:
				return 15776;
			case -1980150291:
				return 15237;
			case -1980004848:
				return 16003;
			case -1979884512:
				return 12192;
			case -1979703957:
				return 7171;
			case -1979511425:
				return 6521;
			case -1979469870:
				return 10488;
			case -1979189659:
				return 1914;
			case -1978859577:
				return 12269;
			case -1978562698:
				return 15621;
			case -1977628089:
				return 15145;
			case -1977089285:
				return 14107;
			case -1977027807:
				return 6525;
			case -1976894605:
				return 12180;
			case -1976219284:
				return 16354;
			case -1974991154:
				return 6508;
			case -1974969523:
				return 9369;
			case -1974760673:
				return 4911;
			case -1974724148:
				return 13134;
			case -1974323356:
				return 8638;
			case -1974273381:
				return 7512;
			case -1973973410:
				return 5177;
			case -1973768398:
				return 9559;
			case -1973459210:
				return 7552;
			case -1973423099:
				return 4678;
			case -1972902702:
				return 7604;
			case -1972380353:
				return 13289;
			case -1972288413:
				return 4433;
			case -1972239773:
				return 7587;
			case -1971803813:
				return 11819;
			case -1971689092:
				return 2998;
			case -1971476518:
				return 10320;
			case -1971337181:
				return 8831;
			case -1971316206:
				return 9126;
			case -1971102173:
				return 4140;
			case -1970720864:
				return 12933;
			case -1970576549:
				return 3597;
			case -1970486567:
				return 12034;
			case -1970375879:
				return 11945;
			case -1970193273:
				return 8074;
			case -1969689335:
				return 11739;
			case -1969655436:
				return 13547;
			case -1969567247:
				return 15755;
			case -1968908196:
				return 10748;
			case -1968765864:
				return 5567;
			case -1968186693:
				return 10358;
			case -1968152171:
				return 2983;
			case -1968014304:
				return 15975;
			case -1967967990:
				return 15665;
			case -1967665484:
				return 1021;
			case -1967360780:
				return 9114;
			case -1967131166:
				return 9972;
			case -1966962071:
				return 10906;
			case -1966456813:
				return 4341;
			case -1966349981:
				return 9271;
			case -1966347137:
				return 10698;
			case -1966295439:
				return 15058;
			case -1966008089:
				return 14057;
			case -1965652030:
				return 7955;
			case -1964611878:
				return 15607;
			case -1964610953:
				return 15650;
			case -1964504874:
				return 8795;
			case -1963978030:
				return 1808;
			case -1963971359:
				return 161;
			case -1963605336:
				return 14514;
			case -1963501782:
				return 8957;
			case -1963488227:
				return 14170;
			case -1963397600:
				return 14587;
			case -1963197288:
				return 4012;
			case -1963137227:
				return 5335;
			case -1963129307:
				return 11132;
			case -1962994391:
				return 7763;
			case -1962974974:
				return 13748;
			case -1962927872:
				return 29;
			case -1962703473:
				return 5449;
			case -1962700369:
				return 4281;
			case -1962493114:
				return 9432;
			case -1962142365:
				return 5266;
			case -1962022879:
				return 10649;
			case -1961830325:
				return 7714;
			case -1961821676:
				return 5475;
			case -1961368073:
				return 8985;
			case -1960972383:
				return 14041;
			case -1960892328:
				return 11472;
			case -1960870764:
				return 12373;
			case -1960782762:
				return 9529;
			case -1960624704:
				return 11489;
			case -1960399016:
				return 911;
			case -1960367362:
				return 8051;
			case -1960364150:
				return 9363;
			case -1959945344:
				return 8322;
			case -1959753152:
				return 12257;
			case -1959626553:
				return 12554;
			case -1958916332:
				return 13763;
			case -1958355904:
				return 4991;
			case -1958270327:
				return 7401;
			case -1958202549:
				return 7538;
			case -1958147929:
				return 3396;
			case -1957576607:
				return 11898;
			case -1957525443:
				return 6848;
			case -1957343756:
				return 79;
			case -1957055091:
				return 2617;
			case -1956926824:
				return 6012;
			case -1956906945:
				return 677;
			case -1956658996:
				return 5679;
			case -1956230403:
				return 964;
			case -1956219852:
				return 13409;
			case -1956132761:
				return 13515;
			case -1955813727:
				return 2290;
			case -1954597160:
				return 12903;
			case -1954560321:
				return 2471;
			case -1954428789:
				return 8725;
			case -1953797880:
				return 4055;
			case -1953448302:
				return 7712;
			case -1953215796:
				return 3528;
			case -1953196257:
				return 6093;
			case -1952728358:
				return 40;
			case -1952446624:
				return 13592;
			case -1952167877:
				return 562;
			case -1952035829:
				return 11577;
			case -1951934555:
				return 11764;
			case -1951860709:
				return 11761;
			case -1951569885:
				return 7216;
			case -1951492362:
				return 453;
			case -1949845795:
				return 2718;
			case -1949651252:
				return 970;
			case -1949625659:
				return 12889;
			case -1949399738:
				return 11011;
			case -1948972927:
				return 3939;
			case -1948382959:
				return 11356;
			case -1948301680:
				return 1153;
			case -1947819598:
				return 8568;
			case -1947027049:
				return 5349;
			case -1946673806:
				return 15185;
			case -1946622881:
				return 1547;
			case -1946346480:
				return 16358;
			case -1946016570:
				return 14401;
			case -1945741966:
				return 6833;
			case -1945718755:
				return 8050;
			case -1945689595:
				return 1419;
			case -1945282982:
				return 4683;
			case -1945229292:
				return 6390;
			case -1944784826:
				return 11652;
			case -1944656721:
				return 15304;
			case -1944314851:
				return 4457;
			case -1944205518:
				return 15336;
			case -1944146990:
				return 13938;
			case -1943896774:
				return 5414;
			case -1943456819:
				return 8770;
			case -1943110592:
				return 5874;
			case -1943094004:
				return 185;
			case -1942931892:
				return 9532;
			case -1942839493:
				return 8755;
			case -1942736688:
				return 7501;
			case -1942535971:
				return 15513;
			case -1942512198:
				return 734;
			case -1941525175:
				return 1962;
			case -1941521224:
				return 10202;
			case -1941262104:
				return 2681;
			case -1941196191:
				return 5173;
			case -1941079438:
				return 10112;
			case -1940647052:
				return 11190;
			case -1940586817:
				return 14137;
			case -1940306115:
				return 724;
			case -1939886048:
				return 572;
			case -1939562592:
				return 5273;
			case -1939439553:
				return 9035;
			case -1939275845:
				return 8183;
			case -1939253593:
				return 2542;
			case -1938939795:
				return 7285;
			case -1938511850:
				return 14961;
			case -1938424671:
				return 295;
			case -1938303988:
				return 4347;
			case -1938233963:
				return 8102;
			case -1938215117:
				return 265;
			case -1938150246:
				return 13990;
			case -1938084952:
				return 8283;
			case -1937843272:
				return 12341;
			case -1937770588:
				return 11431;
			case -1937739529:
				return 5982;
			case -1937484496:
				return 5746;
			case -1937436820:
				return 14962;
			case -1937413405:
				return 7942;
			case -1937186305:
				return 2326;
			case -1937147713:
				return 8870;
			case -1936409967:
				return 13286;
			case -1936209103:
				return 8325;
			case -1936130724:
				return 5669;
			case -1935971033:
				return 3949;
			case -1935734563:
				return 6805;
			case -1935733155:
				return 16125;
			case -1935140274:
				return 1054;
			case -1934851394:
				return 15629;
			case -1934804087:
				return 12628;
			case -1934698189:
				return 3714;
			case -1934587315:
				return 9431;
			case -1934314270:
				return 4111;
			case -1934115794:
				return 12832;
			case -1934076308:
				return 16019;
			case -1932863558:
				return 500;
			case -1932719210:
				return 865;
			case -1931865180:
				return 13643;
			case -1931658622:
				return 4438;
			case -1931452171:
				return 5438;
			case -1931284968:
				return 13182;
			case -1931141422:
				return 7099;
			case -1930117047:
				return 9642;
			case -1929976160:
				return 2774;
			case -1928825968:
				return 423;
			case -1928794622:
				return 11943;
			case -1928221308:
				return 13379;
			case -1928193539:
				return 9317;
			case -1927932124:
				return 965;
			case -1927565884:
				return 1633;
			case -1927078828:
				return 5596;
			case -1927029118:
				return 3704;
			case -1926868415:
				return 11874;
			case -1926499370:
				return 8438;
			case -1925758912:
				return 15086;
			case -1924582129:
				return 5020;
			case -1924409121:
				return 3265;
			case -1924405794:
				return 14711;
			case -1923741333:
				return 11325;
			case -1923717082:
				return 11078;
			case -1923198239:
				return 11560;
			case -1922982933:
				return 5004;
			case -1922957563:
				return 1511;
			case -1922688829:
				return 15087;
			case -1922626601:
				return 11612;
			case -1922585280:
				return 28;
			case -1922025145:
				return 8929;
			case -1921544407:
				return 3138;
			case -1921184849:
				return 10866;
			case -1920451728:
				return 15097;
			case -1920359424:
				return 7152;
			case -1919977380:
				return 3098;
			case -1919741094:
				return 7883;
			case -1919697123:
				return 14296;
			case -1919546105:
				return 3368;
			case -1919260312:
				return 2143;
			case -1919231504:
				return 3079;
			case -1918701339:
				return 5527;
			case -1918684699:
				return 658;
			case -1918128574:
				return 14879;
			case -1917997120:
				return 12937;
			case -1917537546:
				return 4336;
			case -1917431901:
				return 5065;
			case -1916980755:
				return 11888;
			case -1916543705:
				return 14818;
			case -1916489787:
				return 4177;
			case -1916425679:
				return 7621;
			case -1915884981:
				return 3570;
			case -1915641845:
				return 3532;
			case -1915607221:
				return 10459;
			case -1915480358:
				return 10106;
			case -1915384011:
				return 3035;
			case -1914904675:
				return 13288;
			case -1914893189:
				return 1173;
			case -1914795492:
				return 11766;
			case -1914611024:
				return 12880;
			case -1914565104:
				return 6981;
			case -1914183859:
				return 12144;
			case -1914004992:
				return 4243;
			case -1913704313:
				return 8273;
			case -1913354519:
				return 16404;
			case -1913306184:
				return 11107;
			case -1913128730:
				return 8467;
			case -1912646389:
				return 279;
			case -1912545996:
				return 247;
			case -1912350304:
				return 8411;
			case -1911845570:
				return 12684;
			case -1910990966:
				return 16151;
			case -1910887462:
				return 8202;
			case -1910795227:
				return 14765;
			case -1910716235:
				return 9725;
			case -1910505346:
				return 3204;
			case -1910363866:
				return 2396;
			case -1910080231:
				return 2400;
			case -1910062274:
				return 1501;
			case -1909760389:
				return 385;
			case -1909449322:
				return 14827;
			case -1909346580:
				return 12996;
			case -1909158680:
				return 12258;
			case -1909049060:
				return 8769;
			case -1908729100:
				return 14091;
			case -1908571609:
				return 13061;
			case -1907775203:
				return 13960;
			case -1907576565:
				return 13189;
			case -1907373307:
				return 16129;
			case -1907186363:
				return 11645;
			case -1906499827:
				return 9141;
			case -1906348502:
				return 7961;
			case -1905969036:
				return 12699;
			case -1905941038:
				return 6189;
			case -1905521618:
				return 15983;
			case -1905283296:
				return 13383;
			case -1905248830:
				return 87;
			case -1904939264:
				return 8827;
			case -1904902004:
				return 3096;
			case -1904849241:
				return 16228;
			case -1904821831:
				return 14963;
			case -1904645335:
				return 6774;
			case -1904395214:
				return 7576;
			case -1904245695:
				return 3058;
			case -1904097193:
				return 16316;
			case -1904032696:
				return 11621;
			case -1903943481:
				return 14143;
			case -1903574989:
				return 177;
			case -1903398558:
				return 13208;
			case -1903102304:
				return 2287;
			case -1902963839:
				return 8672;
			case -1902927125:
				return 13582;
			case -1902439604:
				return 12506;
			case -1902386467:
				return 11113;
			case -1902382615:
				return 10222;
			case -1902239317:
				return 978;
			case -1902059232:
				return 13360;
			case -1901995616:
				return 11249;
			case -1901975761:
				return 975;
			case -1901892087:
				return 15004;
			case -1901795201:
				return 3353;
			case -1901598027:
				return 10051;
			case -1901200509:
				return 5878;
			case -1900808936:
				return 5975;
			case -1900493212:
				return 6943;
			case -1900258608:
				return 729;
			case -1899986079:
				return 6606;
			case -1899748000:
				return 2665;
			case -1899425109:
				return 12772;
			case -1898771906:
				return 10509;
			case -1898602308:
				return 2746;
			case -1898503130:
				return 13733;
			case -1898168482:
				return 1894;
			case -1898111887:
				return 4414;
			case -1897472733:
				return 11060;
			case -1896997370:
				return 3535;
			case -1896838685:
				return 14659;
			case -1896689921:
				return 9522;
			case -1896437095:
				return 2757;
			case -1895580159:
				return 15876;
			case -1895538423:
				return 12603;
			case -1895122989:
				return 5588;
			case -1894949911:
				return 13858;
			case -1894754436:
				return 910;
			case -1894075093:
				return 9891;
			case -1893794247:
				return 5776;
			case -1893246170:
				return 13593;
			case -1893033836:
				return 13364;
			case -1893027926:
				return 5031;
			case -1892957745:
				return 2219;
			case -1892870104:
				return 13023;
			case -1892618927:
				return 9611;
			case -1892457853:
				return 15555;
			case -1892294202:
				return 11121;
			case -1892280447:
				return 14501;
			case -1892023465:
				return 285;
			case -1891736407:
				return 441;
			case -1891579894:
				return 10336;
			case -1891400204:
				return 15401;
			case -1891354733:
				return 3439;
			case -1891315382:
				return 92;
			case -1891246613:
				return 16043;
			case -1891242011:
				return 9143;
			case -1890543740:
				return 5811;
			case -1890279610:
				return 16118;
			case -1890074582:
				return 6784;
			case -1890036051:
				return 3925;
			case -1889969380:
				return 8824;
			case -1889927490:
				return 9892;
			case -1889605524:
				return 7555;
			case -1889429496:
				return 1673;
			case -1889242759:
				return 13956;
			case -1889138987:
				return 16186;
			case -1889013498:
				return 10126;
			case -1888826317:
				return 10103;
			case -1888589872:
				return 11449;
			case -1888507902:
				return 14087;
			case -1888233354:
				return 13654;
			case -1887970794:
				return 8057;
			case -1887918108:
				return 11754;
			case -1887674341:
				return 11212;
			case -1887377973:
				return 10662;
			case -1887182187:
				return 2437;
			case -1887131085:
				return 2838;
			default:
				break;
		}
		if (iParam1 >= 1)
		{
		}
		return -1;
	}
	if (iParam0 <= -1633870518)
	{
		switch (iParam0)
		{
			case -1886859948:
				return 101;
			case -1886561890:
				return 9129;
			case -1886126872:
				return 4474;
			case -1886051307:
				return 9472;
			case -1885951429:
				return 11813;
			case -1885782528:
				return 12190;
			case -1885648992:
				return 10640;
			case -1885636985:
				return 9609;
			case -1885481760:
				return 2878;
			case -1885323732:
				return 2244;
			case -1885147037:
				return 1541;
			case -1885099329:
				return 1618;
			case -1884742536:
				return 12668;
			case -1884490195:
				return 14578;
			case -1884421418:
				return 6715;
			case -1884417351:
				return 7932;
			case -1884146832:
				return 15298;
			case -1883578190:
				return 2959;
			case -1883388638:
				return 16208;
			case -1882720035:
				return 14930;
			case -1882084875:
				return 1056;
			case -1882052649:
				return 3891;
			case -1881547668:
				return 10301;
			case -1881155818:
				return 14668;
			case -1880758460:
				return 3378;
			case -1880657137:
				return 2461;
			case -1879916235:
				return 15816;
			case -1879689630:
				return 11884;
			case -1879492755:
				return 13632;
			case -1879266073:
				return 11125;
			case -1879011471:
				return 15625;
			case -1878692498:
				return 4979;
			case -1878562588:
				return 15474;
			case -1878371422:
				return 13541;
			case -1877989284:
				return 8456;
			case -1877006470:
				return 8556;
			case -1876894368:
				return 8466;
			case -1876269519:
				return 13028;
			case -1875969771:
				return 3852;
			case -1875958260:
				return 4865;
			case -1875702151:
				return 12796;
			case -1875666030:
				return 12887;
			case -1875424259:
				return 13529;
			case -1874672492:
				return 921;
			case -1874598799:
				return 12842;
			case -1874588552:
				return 13739;
			case -1874496586:
				return 9539;
			case -1874474629:
				return 10019;
			case -1874205952:
				return 4561;
			case -1874105663:
				return 13527;
			case -1874017143:
				return 16326;
			case -1874003851:
				return 5529;
			case -1873758946:
				return 12934;
			case -1873394507:
				return 13806;
			case -1873343428:
				return 3607;
			case -1873270024:
				return 11512;
			case -1873153133:
				return 12091;
			case -1873019821:
				return 1389;
			case -1872309328:
				return 15701;
			case -1872221348:
				return 8912;
			case -1872080985:
				return 12022;
			case -1871983681:
				return 6632;
			case -1871841439:
				return 13299;
			case -1871171322:
				return 1782;
			case -1871059316:
				return 3263;
			case -1870873321:
				return 8429;
			case -1870850622:
				return 6137;
			case -1870441354:
				return 1212;
			case -1869708372:
				return 11517;
			case -1869399320:
				return 13093;
			case -1869288546:
				return 13948;
			case -1868759040:
				return 7301;
			case -1868746550:
				return 5314;
			case -1867991278:
				return 8560;
			case -1867865979:
				return 1564;
			case -1867663375:
				return 15865;
			case -1866846861:
				return 15869;
			case -1866470762:
				return 2750;
			case -1866332367:
				return 12890;
			case -1866132622:
				return 14488;
			case -1865855539:
				return 15019;
			case -1865294558:
				return 9364;
			case -1865291308:
				return 7;
			case -1865144946:
				return 477;
			case -1864935090:
				return 14075;
			case -1864852040:
				return 13172;
			case -1864781558:
				return 7160;
			case -1864446326:
				return 1215;
			case -1864296569:
				return 13387;
			case -1864069963:
				return 15564;
			case -1863436719:
				return 1452;
			case -1863093222:
				return 2078;
			case -1862456969:
				return 2943;
			case -1862019237:
				return 8313;
			case -1861840953:
				return 14400;
			case -1861723125:
				return 13158;
			case -1861678590:
				return 135;
			case -1861626442:
				return 5520;
			case -1861619846:
				return 7725;
			case -1861321094:
				return 10628;
			case -1860936962:
				return 1417;
			case -1860839533:
				return 10299;
			case -1860805927:
				return 2740;
			case -1860483182:
				return 15509;
			case -1859520785:
				return 2366;
			case -1858992221:
				return 13548;
			case -1858757559:
				return 15463;
			case -1858597865:
				return 7394;
			case -1858112592:
				return 16160;
			case -1858047034:
				return 2673;
			case -1857759931:
				return 10113;
			case -1857301932:
				return 9067;
			case -1857001286:
				return 10295;
			case -1856735039:
				return 11896;
			case -1856399141:
				return 8378;
			case -1856396119:
				return 12672;
			case -1856276837:
				return 6000;
			case -1856092506:
				return 11554;
			case -1855476572:
				return 14204;
			case -1855407989:
				return 16279;
			case -1855018526:
				return 10634;
			case -1854657542:
				return 11226;
			case -1854509047:
				return 6487;
			case -1854163650:
				return 6614;
			case -1854059305:
				return 14721;
			case -1853888886:
				return 13542;
			case -1853734330:
				return 15988;
			case -1853709646:
				return 11853;
			case -1853496112:
				return 1902;
			case -1853348891:
				return 2294;
			case -1852917668:
				return 3111;
			case -1852383362:
				return 5760;
			case -1852207384:
				return 13756;
			case -1852035008:
				return 9570;
			case -1851570644:
				return 13440;
			case -1851556126:
				return 8994;
			case -1851480450:
				return 11009;
			case -1851337109:
				return 7142;
			case -1851084469:
				return 11413;
			case -1851083299:
				return 1102;
			case -1851052727:
				return 469;
			case -1850956368:
				return 15423;
			case -1850869645:
				return 7741;
			case -1850473887:
				return 3536;
			case -1849997017:
				return 5728;
			case -1849883922:
				return 16194;
			case -1849717466:
				return 12624;
			case -1849488959:
				return 12762;
			case -1849475873:
				return 10472;
			case -1849233733:
				return 7873;
			case -1847829453:
				return 2853;
			case -1847721789:
				return 2538;
			case -1847695021:
				return 3075;
			case -1847148891:
				return 12353;
			case -1846973189:
				return 11861;
			case -1846867203:
				return 8671;
			case -1846714233:
				return 310;
			case -1846319726:
				return 14671;
			case -1846176934:
				return 5844;
			case -1845626143:
				return 9029;
			case -1845320175:
				return 11875;
			case -1845307191:
				return 5113;
			case -1845130180:
				return 7804;
			case -1844823377:
				return 5793;
			case -1844714911:
				return 13073;
			case -1844645461:
				return 3316;
			case -1844473887:
				return 3642;
			case -1844285333:
				return 7724;
			case -1844208716:
				return 7517;
			case -1843636342:
				return 1044;
			case -1843616050:
				return 11809;
			case -1843549794:
				return 14916;
			case -1842133876:
				return 14891;
			case -1842063169:
				return 4792;
			case -1841898933:
				return 3588;
			case -1841869950:
				return 1619;
			case -1841546660:
				return 13853;
			case -1841158823:
				return 8173;
			case -1840744454:
				return 133;
			case -1840698516:
				return 232;
			case -1840056298:
				return 1353;
			case -1839912573:
				return 15691;
			case -1839482402:
				return 12726;
			case -1839017270:
				return 9601;
			case -1838444576:
				return 6267;
			case -1838441509:
				return 12263;
			case -1838292066:
				return 1466;
			case -1838241181:
				return 12652;
			case -1838164067:
				return 7446;
			case -1838004738:
				return 8874;
			case -1837586528:
				return 679;
			case -1837144637:
				return 13012;
			case -1836575021:
				return 9912;
			case -1836285310:
				return 15826;
			case -1836134752:
				return 4126;
			case -1836129271:
				return 6260;
			case -1835684027:
				return 16040;
			case -1835394705:
				return 6854;
			case -1835251821:
				return 15075;
			case -1834995170:
				return 5193;
			case -1834967379:
				return 5384;
			case -1834544684:
				return 795;
			case -1834001788:
				return 53;
			case -1833755664:
				return 3762;
			case -1833532042:
				return 10260;
			case -1833319609:
				return 5729;
			case -1833280885:
				return 7982;
			case -1833221759:
				return 13710;
			case -1833163167:
				return 13873;
			case -1833031903:
				return 8393;
			case -1832923692:
				return 3622;
			case -1832370395:
				return 6621;
			case -1831848901:
				return 13773;
			case -1831708478:
				return 8625;
			case -1831636157:
				return 1509;
			case -1831561045:
				return 8876;
			case -1830625857:
				return 8331;
			case -1830301528:
				return 828;
			case -1829723095:
				return 9268;
			case -1829226787:
				return 13143;
			case -1828950188:
				return 1816;
			case -1828919758:
				return 9449;
			case -1828703373:
				return 1786;
			case -1828541993:
				return 773;
			case -1828437268:
				return 14443;
			case -1828355504:
				return 9030;
			case -1828060854:
				return 2023;
			case -1827907062:
				return 8169;
			case -1827679171:
				return 3152;
			case -1827263623:
				return 10081;
			case -1827263202:
				return 5934;
			case -1827121226:
				return 6568;
			case -1826684443:
				return 15168;
			case -1826467795:
				return 8514;
			case -1826466966:
				return 5859;
			case -1826340919:
				return 1623;
			case -1826304690:
				return 14418;
			case -1825727975:
				return 14377;
			case -1825199702:
				return 11094;
			case -1824502502:
				return 1758;
			case -1824431250:
				return 10122;
			case -1824227939:
				return 8835;
			case -1823921295:
				return 1861;
			case -1823897310:
				return 10645;
			case -1822707183:
				return 1628;
			case -1822503134:
				return 2048;
			case -1822168063:
				return 8736;
			case -1822137473:
				return 8561;
			case -1821981115:
				return 13755;
			case -1821904643:
				return 5329;
			case -1821875689:
				return 13285;
			case -1821565422:
				return 6138;
			case -1821546199:
				return 3732;
			case -1820868739:
				return 6701;
			case -1820429669:
				return 9281;
			case -1820265456:
				return 6738;
			case -1820209985:
				return 7676;
			case -1820135450:
				return 8209;
			case -1820002752:
				return 14854;
			case -1819855449:
				return 11824;
			case -1819721708:
				return 2809;
			case -1819454135:
				return 7360;
			case -1819385527:
				return 11213;
			case -1819321039:
				return 2645;
			case -1819110721:
				return 1390;
			case -1819094497:
				return 9813;
			case -1818007055:
				return 15316;
			case -1817648197:
				return 2058;
			case -1817598468:
				return 15620;
			case -1817460047:
				return 4713;
			case -1817452285:
				return 10451;
			case -1817287669:
				return 519;
			case -1817144219:
				return 16305;
			case -1816987565:
				return 16384;
			case -1816911950:
				return 13185;
			case -1816893176:
				return 10609;
			case -1816726898:
				return 4428;
			case -1816535547:
				return 6043;
			case -1816049069:
				return 10036;
			case -1815890644:
				return 6195;
			case -1815632313:
				return 10899;
			case -1814954064:
				return 13799;
			case -1814822973:
				return 7028;
			case -1814765068:
				return 10197;
			case -1814467767:
				return 12593;
			case -1814431831:
				return 16388;
			case -1814382904:
				return 1005;
			case -1814268450:
				return 13696;
			case -1813965006:
				return 9619;
			case -1813478749:
				return 3969;
			case -1812624322:
				return 10916;
			case -1812204883:
				return 10402;
			case -1811911736:
				return 10642;
			case -1811865569:
				return 1872;
			case -1811584839:
				return 9658;
			case -1811299771:
				return 6066;
			case -1811110439:
				return 6967;
			case -1810147625:
				return 4008;
			case -1809633094:
				return 1924;
			case -1809617345:
				return 10428;
			case -1809586742:
				return 6718;
			case -1809418382:
				return 6124;
			case -1808811612:
				return 9257;
			case -1808403784:
				return 7935;
			case -1808352054:
				return 1097;
			case -1807850249:
				return 3081;
			case -1807672751:
				return 13868;
			case -1807505128:
				return 4023;
			case -1807215774:
				return 7228;
			case -1806640487:
				return 8091;
			case -1806434339:
				return 8499;
			case -1806196992:
				return 1310;
			case -1806179115:
				return 9837;
			case -1805997602:
				return 11236;
			case -1805699452:
				return 7249;
			case -1805421660:
				return 8359;
			case -1805368991:
				return 8523;
			case -1805053127:
				return 7615;
			case -1804718953:
				return 1313;
			case -1804517640:
				return 2920;
			case -1804478060:
				return 9447;
			case -1804473807:
				return 3794;
			case -1803128462:
				return 380;
			case -1802830793:
				return 7858;
			case -1802451863:
				return 14132;
			case -1802370769:
				return 1131;
			case -1802018696:
				return 77;
			case -1801899617:
				return 13927;
			case -1801783288:
				return 10180;
			case -1801760355:
				return 1759;
			case -1801338839:
				return 4175;
			case -1801277736:
				return 4788;
			case -1800818515:
				return 5373;
			case -1800197794:
				return 2761;
			case -1800129672:
				return 2660;
			case -1799646474:
				return 5942;
			case -1799375105:
				return 14210;
			case -1799284357:
				return 7045;
			case -1799253716:
				return 11047;
			case -1799004782:
				return 6377;
			case -1798944977:
				return 11492;
			case -1798724183:
				return 11312;
			case -1798680490:
				return 1083;
			case -1798517025:
				return 9498;
			case -1798313194:
				return 9746;
			case -1798018696:
				return 3744;
			case -1797937173:
				return 13807;
			case -1797625440:
				return 14504;
			case -1797450568:
				return 14732;
			case -1797228166:
				return 9788;
			case -1797128216:
				return 117;
			case -1797020044:
				return 8790;
			case -1796934350:
				return 149;
			case -1796561521:
				return 14910;
			case -1796254641:
				return 8005;
			case -1795293658:
				return 7768;
			case -1795024439:
				return 5495;
			case -1794789957:
				return 7991;
			case -1794382149:
				return 2797;
			case -1794350678:
				return 14895;
			case -1794184016:
				return 4183;
			case -1794023896:
				return 13809;
			case -1793886199:
				return 8728;
			case -1793294595:
				return 7900;
			case -1792446389:
				return 7938;
			case -1792436619:
				return 6249;
			case -1792387463:
				return 13758;
			case -1792150015:
				return 9581;
			case -1791863282:
				return 3119;
			case -1791231061:
				return 7257;
			case -1791076438:
				return 7072;
			case -1791024237:
				return 7306;
			case -1790609479:
				return 3970;
			case -1790499186:
				return 14760;
			case -1790475484:
				return 6001;
			case -1789936993:
				return 13698;
			case -1789926758:
				return 9523;
			case -1789924154:
				return 10575;
			case -1789856687:
				return 14951;
			case -1789556462:
				return 2071;
			case -1789508615:
				return 8011;
			case -1789464358:
				return 8648;
			case -1789402084:
				return 5164;
			case -1789356049:
				return 3822;
			case -1789343904:
				return 9957;
			case -1789294466:
				return 3533;
			case -1788514960:
				return 3479;
			case -1788463408:
				return 10947;
			case -1788428636:
				return 727;
			case -1788338697:
				return 14083;
			case -1787058236:
				return 3601;
			case -1786946391:
				return 10641;
			case -1786834300:
				return 12989;
			case -1786787517:
				return 15529;
			case -1786434665:
				return 822;
			case -1786399128:
				return 6677;
			case -1786152843:
				return 8060;
			case -1786034615:
				return 5730;
			case -1785771823:
				return 6819;
			case -1785632430:
				return 9695;
			case -1785430078:
				return 7308;
			case -1785266162:
				return 8195;
			case -1785109883:
				return 12125;
			case -1784270163:
				return 10959;
			case -1784026290:
				return 3890;
			case -1783862517:
				return 1243;
			case -1783067737:
				return 13979;
			case -1782536722:
				return 7569;
			case -1782470881:
				return 6134;
			case -1782116830:
				return 9714;
			case -1782099441:
				return 3963;
			case -1781936075:
				return 1834;
			case -1781773365:
				return 170;
			case -1781689481:
				return 4824;
			case -1781161111:
				return 2973;
			case -1780881332:
				return 3946;
			case -1780820420:
				return 6083;
			case -1780694816:
				return 11184;
			case -1780444452:
				return 3088;
			case -1779678732:
				return 14084;
			case -1779655213:
				return 15928;
			case -1779427821:
				return 9807;
			case -1778822384:
				return 10224;
			case -1778782609:
				return 5457;
			case -1778743045:
				return 2029;
			case -1777859235:
				return 5033;
			case -1776833773:
				return 9458;
			case -1776792828:
				return 13764;
			case -1776747227:
				return 2382;
			case -1776515468:
				return 5163;
			case -1776489172:
				return 3666;
			case -1776473555:
				return 15875;
			case -1776424456:
				return 7785;
			case -1776017264:
				return 4827;
			case -1775924437:
				return 4473;
			case -1775373677:
				return 1101;
			case -1775176139:
				return 9797;
			case -1775167932:
				return 12242;
			case -1775023743:
				return 9738;
			case -1775004543:
				return 16433;
			case -1774943756:
				return 13367;
			case -1774921803:
				return 15094;
			case -1774647181:
				return 15837;
			case -1774579705:
				return 827;
			case -1773970826:
				return 7655;
			case -1773949378:
				return 8404;
			case -1773877772:
				return 9186;
			case -1773830654:
				return 5472;
			case -1773771702:
				return 5551;
			case -1773660274:
				return 6634;
			case -1773341427:
				return 12481;
			case -1773186742:
				return 13802;
			case -1772823089:
				return 15275;
			case -1772698459:
				return 9683;
			case -1772561076:
				return 14391;
			case -1772268301:
				return 13168;
			case -1772051411:
				return 15069;
			case -1772037579:
				return 8806;
			case -1771724719:
				return 7842;
			case -1771604950:
				return 13533;
			case -1771433312:
				return 10913;
			case -1771234182:
				return 995;
			case -1770814435:
				return 11801;
			case -1770288110:
				return 5993;
			case -1770202646:
				return 4975;
			case -1769778731:
				return 15743;
			case -1769578769:
				return 1094;
			case -1769295812:
				return 15098;
			case -1768831124:
				return 12170;
			case -1768352393:
				return 4534;
			case -1768186052:
				return 4674;
			case -1767394530:
				return 8860;
			case -1767336308:
				return 15671;
			case -1767139687:
				return 16093;
			case -1767078210:
				return 12600;
			case -1767072598:
				return 12750;
			case -1766908830:
				return 3282;
			case -1766904606:
				return 10593;
			case -1766836717:
				return 2909;
			case -1766535683:
				return 16052;
			case -1766169451:
				return 2929;
			case -1766012683:
				return 9361;
			case -1765791087:
				return 4462;
			case -1765531164:
				return 15053;
			case -1765306495:
				return 10842;
			case -1765240578:
				return 13241;
			case -1765231802:
				return 9594;
			case -1765053552:
				return 6176;
			case -1765018561:
				return 2266;
			case -1764654057:
				return 3989;
			case -1764648966:
				return 3089;
			case -1764380143:
				return 2195;
			case -1763848034:
				return 5643;
			case -1763803174:
				return 7187;
			case -1763639041:
				return 10561;
			case -1763432079:
				return 4900;
			case -1763331835:
				return 8350;
			case -1763136482:
				return 3639;
			case -1763055991:
				return 14531;
			case -1762663701:
				return 1327;
			case -1762177046:
				return 12791;
			case -1762024438:
				return 6113;
			case -1762016524:
				return 6852;
			case -1761964411:
				return 11828;
			case -1761026930:
				return 13322;
			case -1761024893:
				return 2496;
			case -1760932123:
				return 446;
			case -1760684159:
				return 14634;
			case -1760550202:
				return 7843;
			case -1760501764:
				return 15706;
			case -1759930004:
				return 3756;
			case -1759481280:
				return 9058;
			case -1759445234:
				return 14304;
			case -1759362478:
				return 637;
			case -1759038075:
				return 14882;
			case -1758978731:
				return 99;
			case -1758388913:
				return 10343;
			case -1758147904:
				return 6314;
			case -1758092337:
				return 14490;
			case -1757985837:
				return 10381;
			case -1757810512:
				return 6822;
			case -1757216013:
				return 3375;
			case -1756737475:
				return 9774;
			case -1756382719:
				return 2230;
			case -1756267889:
				return 1165;
			case -1755588493:
				return 1812;
			case -1755488373:
				return 3056;
			case -1755379985:
				return 7309;
			case -1754799221:
				return 15752;
			case -1754685568:
				return 10199;
			case -1754461708:
				return 5109;
			case -1754459222:
				return 8132;
			case -1754211037:
				return 15365;
			case -1753896431:
				return 15414;
			case -1753679949:
				return 9987;
			case -1753618264:
				return 13467;
			case -1753201617:
				return 14481;
			case -1753139363:
				return 458;
			case -1753113092:
				return 5496;
			case -1753091389:
				return 13207;
			case -1752784128:
				return 945;
			case -1752382390:
				return 8579;
			case -1751819926:
				return 2772;
			case -1751593807:
				return 10420;
			case -1751580026:
				return 15872;
			case -1751465382:
				return 1011;
			case -1751255362:
				return 4907;
			case -1751029298:
				return 8968;
			case -1749931149:
				return 10141;
			case -1749508122:
				return 7238;
			case -1749487977:
				return 12025;
			case -1749336864:
				return 187;
			case -1749143088:
				return 9524;
			case -1749031923:
				return 6310;
			case -1748658353:
				return 3039;
			case -1748497526:
				return 9526;
			case -1748494885:
				return 1174;
			case -1748462646:
				return 7327;
			case -1748085313:
				return 8702;
			case -1747657594:
				return 5276;
			case -1747620994:
				return 14762;
			case -1747529137:
				return 4721;
			case -1747528191:
				return 9935;
			case -1746896391:
				return 11961;
			case -1746885131:
				return 9767;
			case -1746746534:
				return 13941;
			case -1745677820:
				return 5563;
			case -1745531600:
				return 6612;
			case -1745321414:
				return 15139;
			case -1744986090:
				return 7868;
			case -1744520900:
				return 3229;
			case -1743722350:
				return 16375;
			case -1743700496:
				return 3198;
			case -1742586276:
				return 4946;
			case -1742482283:
				return 14105;
			case -1742448303:
				return 4141;
			case -1742102559:
				return 11277;
			case -1740828633:
				return 5767;
			case -1740286366:
				return 4636;
			case -1739507263:
				return 13556;
			case -1739261178:
				return 14781;
			case -1739257067:
				return 13171;
			case -1738436398:
				return 713;
			case -1738201906:
				return 287;
			case -1738024576:
				return 7107;
			case -1737978570:
				return 16103;
			case -1737909847:
				return 1079;
			case -1737455432:
				return 12289;
			case -1737141731:
				return 4621;
			case -1736708784:
				return 11253;
			case -1736535384:
				return 1749;
			case -1736357270:
				return 4761;
			case -1736327942:
				return 14902;
			case -1736325116:
				return 159;
			case -1736231603:
				return 11396;
			case -1736138766:
				return 8714;
			case -1735894975:
				return 12853;
			case -1735508742:
				return 11850;
			case -1735480734:
				return 11862;
			case -1735376846:
				return 13965;
			case -1734869021:
				return 10961;
			case -1734806822:
				return 10631;
			case -1734798985:
				return 12229;
			case -1734626244:
				return 9934;
			case -1734467158:
				return 6250;
			case -1734239985:
				return 5709;
			case -1734227960:
				return 14798;
			case -1733889275:
				return 4549;
			case -1733796890:
				return 8409;
			case -1733520123:
				return 13382;
			case -1733459649:
				return 10967;
			case -1733343634:
				return 11841;
			case -1733269147:
				return 4992;
			case -1732870246:
				return 6146;
			case -1732478178:
				return 13165;
			case -1732004984:
				return 7650;
			case -1731190354:
				return 14339;
			case -1731070285:
				return 15608;
			case -1730685623:
				return 320;
			case -1730348877:
				return 3162;
			case -1729564785:
				return 11481;
			case -1729554765:
				return 5143;
			case -1729414045:
				return 2202;
			case -1728858449:
				return 7990;
			case -1728796848:
				return 13699;
			case -1728773655:
				return 2880;
			case -1727811724:
				return 4022;
			case -1727735141:
				return 2046;
			case -1727445407:
				return 3356;
			case -1727115117:
				return 8342;
			case -1726976409:
				return 8056;
			case -1726661288:
				return 2323;
			case -1726458124:
				return 15352;
			case -1725609792:
				return 11881;
			case -1725445174:
				return 2893;
			case -1725319845:
				return 146;
			case -1725166474:
				return 7980;
			case -1725030714:
				return 12220;
			case -1724846882:
				return 1598;
			case -1724719987:
				return 10074;
			case -1724440025:
				return 16112;
			case -1724261508:
				return 8076;
			case -1724049248:
				return 4896;
			case -1724023040:
				return 8962;
			case -1723652211:
				return 6265;
			case -1723396373:
				return 8031;
			case -1723302656:
				return 2306;
			case -1723115182:
				return 14013;
			case -1722641930:
				return 9896;
			case -1722482035:
				return 16174;
			case -1722133234:
				return 4557;
			case -1721993797:
				return 4402;
			case -1721681244:
				return 2503;
			case -1721459239:
				return 8578;
			case -1720251851:
				return 14624;
			case -1719534882:
				return 9473;
			case -1719420294:
				return 4519;
			case -1719164243:
				return 8339;
			case -1718732108:
				return 10168;
			case -1718655749:
				return 6451;
			case -1718451329:
				return 16332;
			case -1718100160:
				return 14647;
			case -1717994763:
				return 1825;
			case -1717941124:
				return 7403;
			case -1717674545:
				return 14622;
			case -1717324912:
				return 5908;
			case -1716527888:
				return 8500;
			case -1716463991:
				return 5544;
			case -1715848475:
				return 2182;
			case -1715767453:
				return 13254;
			case -1715686134:
				return 9422;
			case -1715649851:
				return 2353;
			case -1715482884:
				return 8043;
			case -1715417137:
				return 1254;
			case -1714722411:
				return 9508;
			case -1714278590:
				return 3539;
			case -1714108174:
				return 15267;
			case -1713874730:
				return 2481;
			case -1713025159:
				return 8144;
			case -1712726602:
				return 3082;
			case -1712583457:
				return 1972;
			case -1711463616:
				return 3882;
			case -1711211658:
				return 15186;
			case -1710970070:
				return 1195;
			case -1710937075:
				return 14243;
			case -1710894930:
				return 10348;
			case -1710863708:
				return 10059;
			case -1710757631:
				return 7448;
			case -1710660654:
				return 2472;
			case -1710614406:
				return 14441;
			case -1709854421:
				return 6501;
			case -1709277492:
				return 6862;
			case -1709225430:
				return 13031;
			case -1708994719:
				return 7338;
			case -1708902473:
				return 15394;
			case -1708329033:
				return 14020;
			case -1708097161:
				return 14435;
			case -1707983834:
				return 1268;
			case -1707932915:
				return 15402;
			case -1707754274:
				return 8271;
			case -1707666515:
				return 15198;
			case -1707588882:
				return 81;
			case -1707202053:
				return 15135;
			case -1706567535:
				return 7614;
			case -1706533338:
				return 5481;
			case -1706313519:
				return 10907;
			case -1706016644:
				return 11848;
			case -1705253191:
				return 8328;
			case -1705108362:
				return 578;
			case -1704854344:
				return 15381;
			case -1704287344:
				return 7588;
			case -1704278772:
				return 9131;
			case -1703912269:
				return 7413;
			case -1703586744:
				return 15170;
			case -1703550162:
				return 103;
			case -1703049832:
				return 10092;
			case -1702903468:
				return 10427;
			case -1702461591:
				return 672;
			case -1702384018:
				return 3133;
			case -1702168165:
				return 15526;
			case -1701672069:
				return 447;
			case -1701282116:
				return 4697;
			case -1701061767:
				return 13989;
			case -1701016341:
				return 3899;
			case -1700886102:
				return 4232;
			case -1700686082:
				return 4567;
			case -1700626658:
				return 7639;
			case -1700551830:
				return 11303;
			case -1700510806:
				return 2874;
			case -1699999934:
				return 4214;
			case -1699850536:
				return 9176;
			case -1699588684:
				return 1095;
			case -1699442689:
				return 547;
			case -1699334864:
				return 9457;
			case -1699320253:
				return 15777;
			case -1699303373:
				return 6408;
			case -1699250216:
				return 12057;
			case -1699232978:
				return 1595;
			case -1699167160:
				return 12877;
			case -1699135322:
				return 8391;
			case -1698780291:
				return 12461;
			case -1698602905:
				return 5968;
			case -1698498246:
				return 14390;
			case -1698151306:
				return 7737;
			case -1698115997:
				return 11958;
			case -1697970565:
				return 4154;
			case -1697851069:
				return 4289;
			case -1697806421:
				return 1981;
			case -1697461034:
				return 5148;
			case -1697318509:
				return 8775;
			case -1696998476:
				return 4419;
			case -1696859616:
				return 9799;
			case -1696613521:
				return 12142;
			case -1696021272:
				return 5283;
			case -1695618086:
				return 9384;
			case -1695417054:
				return 202;
			case -1694632979:
				return 6404;
			case -1694480560:
				return 16185;
			case -1694446612:
				return 2127;
			case -1694359093:
				return 3992;
			case -1694325432:
				return 6334;
			case -1694140847:
				return 10762;
			case -1693870200:
				return 14701;
			case -1693868721:
				return 8964;
			case -1693816323:
				return 8210;
			case -1693701026:
				return 5944;
			case -1693470179:
				return 12671;
			case -1693384903:
				return 2236;
			case -1692924028:
				return 9156;
			case -1692871392:
				return 3445;
			case -1691025263:
				return 8303;
			case -1690877284:
				return 15153;
			case -1690778521:
				return 4618;
			case -1690613758:
				return 2788;
			case -1690413797:
				return 16299;
			case -1689976376:
				return 4058;
			case -1689944957:
				return 10069;
			case -1689827482:
				return 7921;
			case -1689761538:
				return 2713;
			case -1689676893:
				return 9201;
			case -1689617623:
				return 4137;
			case -1689564927:
				return 12727;
			case -1689516419:
				return 9444;
			case -1688959031:
				return 15108;
			case -1688693650:
				return 14477;
			case -1688523402:
				return 1717;
			case -1687989449:
				return 5605;
			case -1687966102:
				return 2877;
			case -1687824091:
				return 1427;
			case -1686833686:
				return 8742;
			case -1686447028:
				return 4770;
			case -1686013393:
				return 3197;
			case -1685401087:
				return 5122;
			case -1684700799:
				return 667;
			case -1684433800:
				return 6940;
			case -1684354568:
				return 2621;
			case -1684227788:
				return 2475;
			case -1684080969:
				return 16233;
			case -1683823071:
				return 15587;
			case -1683446847:
				return 7387;
			case -1683446263:
				return 4948;
			case -1683311290:
				return 15164;
			case -1682627684:
				return 11713;
			case -1682522975:
				return 13133;
			case -1682372069:
				return 10680;
			case -1681427599:
				return 7025;
			case -1681397868:
				return 4779;
			case -1681106048:
				return 15593;
			case -1681089439:
				return 14331;
			case -1680931998:
				return 16095;
			case -1680575712:
				return 4684;
			case -1680267930:
				return 15180;
			case -1679658797:
				return 14590;
			case -1679312974:
				return 3783;
			case -1679228019:
				return 8611;
			case -1679191800:
				return 14310;
			case -1678971214:
				return 9367;
			case -1678579570:
				return 414;
			case -1677978279:
				return 3371;
			case -1677663584:
				return 14844;
			case -1677608920:
				return 16463;
			case -1677286374:
				return 7334;
			case -1677036161:
				return 5229;
			case -1677034129:
				return 10974;
			case -1676985516:
				return 4887;
			case -1676898583:
				return 15302;
			case -1676771109:
				return 6218;
			case -1676410507:
				return 2912;
			case -1676180519:
				return 2403;
			case -1676024061:
				return 10121;
			case -1674877330:
				return 4031;
			case -1674867997:
				return 4165;
			case -1674737491:
				return 7162;
			case -1674627251:
				return 9335;
			case -1674507826:
				return 2963;
			case -1674181645:
				return 7912;
			case -1673878340:
				return 4917;
			case -1673689787:
				return 10439;
			case -1672868104:
				return 13345;
			case -1671648275:
				return 13243;
			case -1671557283:
				return 8203;
			case -1671495534:
				return 3115;
			case -1670929793:
				return 5535;
			case -1670452464:
				return 6259;
			case -1669881355:
				return 11155;
			case -1669539097:
				return 2582;
			case -1668973361:
				return 7366;
			case -1668808191:
				return 4171;
			case -1668573149:
				return 4048;
			case -1668567643:
				return 10968;
			case -1668415585:
				return 6581;
			case -1667789645:
				return 14706;
			case -1667436836:
				return 11169;
			case -1666796678:
				return 7311;
			case -1666700286:
				return 11153;
			case -1666660602:
				return 9073;
			case -1666381670:
				return 10691;
			case -1666207837:
				return 11317;
			case -1666166776:
				return 11865;
			case -1666054111:
				return 11328;
			case -1666043202:
				return 1223;
			case -1666035165:
				return 5791;
			case -1665680273:
				return 31;
			case -1665668665:
				return 11070;
			case -1665400978:
				return 4069;
			case -1665387833:
				return 4424;
			case -1665274286:
				return 4030;
			case -1665265479:
				return 2987;
			case -1665256872:
				return 4645;
			case -1664927333:
				return 12735;
			case -1664871485:
				return 13058;
			case -1664740206:
				return 9450;
			case -1663841666:
				return 1787;
			case -1663754938:
				return 5302;
			case -1663195865:
				return 12692;
			case -1662510827:
				return 12942;
			case -1662470632:
				return 4039;
			case -1662302641:
				return 5473;
			case -1662027039:
				return 11422;
			case -1661855997:
				return 15576;
			case -1661543147:
				return 6354;
			case -1661518810:
				return 6546;
			case -1661500718:
				return 7011;
			case -1661399021:
				return 7382;
			case -1661262567:
				return 10997;
			case -1660213806:
				return 10415;
			case -1660090796:
				return 4818;
			case -1659828993:
				return 8362;
			case -1659682550:
				return 13581;
			case -1659601989:
				return 8249;
			case -1659238425:
				return 13052;
			case -1659226118:
				return 7006;
			case -1659168270:
				return 11430;
			case -1659040226:
				return 1421;
			case -1658848979:
				return 12879;
			case -1658822997:
				return 9962;
			case -1658806610:
				return 7188;
			case -1658688112:
				return 12718;
			case -1658553691:
				return 11384;
			case -1657757990:
				return 5927;
			case -1657632782:
				return 3832;
			case -1657447977:
				return 8577;
			case -1657278542:
				return 8032;
			case -1657165379:
				return 9655;
			case -1657143981:
				return 9057;
			case -1657135267:
				return 9682;
			case -1656990446:
				return 1178;
			case -1656898568:
				return 5296;
			case -1656875117:
				return 13021;
			case -1656764378:
				return 2868;
			case -1656264029:
				return 11996;
			case -1655515311:
				return 2737;
			case -1655513589:
				return 9754;
			case -1655079853:
				return 2708;
			case -1654660619:
				return 5773;
			case -1654503928:
				return 8104;
			case -1654334118:
				return 7270;
			case -1653696453:
				return 11339;
			case -1653099775:
				return 8925;
			case -1652701759:
				return 4044;
			case -1652282711:
				return 23;
			case -1652137729:
				return 2852;
			case -1651757823:
				return 2106;
			case -1651459012:
				return 15596;
			case -1651399666:
				return 1121;
			case -1651393386:
				return 5897;
			case -1651208142:
				return 241;
			case -1651189960:
				return 7049;
			case -1651147359:
				return 12594;
			case -1651002648:
				return 9365;
			case -1650110157:
				return 925;
			case -1649555178:
				return 5833;
			case -1649218257:
				return 10765;
			case -1649174004:
				return 710;
			case -1648904191:
				return 15942;
			case -1648466688:
				return 1956;
			case -1648153209:
				return 12719;
			case -1648047596:
				return 10190;
			case -1647611644:
				return 13810;
			case -1647410726:
				return 11052;
			case -1647311691:
				return 1774;
			case -1647305436:
				return 10724;
			case -1647267928:
				return 12052;
			case -1646931081:
				return 305;
			case -1646880228:
				return 5133;
			case -1646777083:
				return 15339;
			case -1646753329:
				return 3470;
			case -1646591912:
				return 10833;
			case -1646403507:
				return 1889;
			case -1646366239:
				return 14883;
			case -1646129412:
				return 10373;
			case -1646093491:
				return 1422;
			case -1646049752:
				return 15127;
			case -1645854530:
				return 7626;
			case -1645754983:
				return 6495;
			case -1645719367:
				return 1634;
			case -1645550095:
				return 7659;
			case -1645167035:
				return 8352;
			case -1645150165:
				return 7499;
			case -1644713672:
				return 14199;
			case -1644499556:
				return 4129;
			case -1644148946:
				return 15538;
			case -1643922980:
				return 10254;
			case -1643891339:
				return 5355;
			case -1643859748:
				return 5158;
			case -1643843678:
				return 13844;
			case -1643619950:
				return 9409;
			case -1643556909:
				return 15815;
			case -1643309719:
				return 10471;
			case -1643205004:
				return 5282;
			case -1642485146:
				return 14640;
			case -1642483742:
				return 16054;
			case -1642475007:
				return 1917;
			case -1642414969:
				return 10102;
			case -1642046920:
				return 2000;
			case -1641720934:
				return 9497;
			case -1641196709:
				return 3132;
			case -1641051411:
				return 14068;
			case -1640854368:
				return 9272;
			case -1639992953:
				return 6644;
			case -1639975189:
				return 8969;
			case -1639710604:
				return 2253;
			case -1639277937:
				return 1046;
			case -1638927386:
				return 12803;
			case -1638806549:
				return 14937;
			case -1638520782:
				return 1662;
			case -1638491179:
				return 11660;
			case -1638471974:
				return 363;
			case -1638375480:
				return 1946;
			case -1638171330:
				return 3905;
			case -1638036806:
				return 4594;
			case -1637444931:
				return 1351;
			case -1637302654:
				return 4639;
			case -1636778029:
				return 9401;
			case -1636636598:
				return 13751;
			case -1636308816:
				return 3841;
			case -1635809843:
				return 8619;
			case -1635539513:
				return 7855;
			case -1635466014:
				return 1797;
			case -1633870518:
				return 8617;
			default:
				break;
		}
		if (iParam1 >= 1)
		{
		}
		return -1;
	}
	if (iParam0 <= -1362611717)
	{
		switch (iParam0)
		{
			case -1633152283:
				return 13183;
			case -1633114790:
				return 2587;
			case -1632804958:
				return 9954;
			case -1632741602:
				return 13094;
			case -1632694866:
				return 15056;
			case -1632232673:
				return 7331;
			case -1632084366:
				return 2813;
			case -1631768462:
				return 10567;
			case -1631692560:
				return 10205;
			case -1630920198:
				return 8258;
			case -1630878907:
				return 6767;
			case -1630603829:
				return 2735;
			case -1630231865:
				return 2803;
			case -1630118651:
				return 5715;
			case -1629923425:
				return 7070;
			case -1629841041:
				return 5251;
			case -1629700669:
				return 2743;
			case -1629501717:
				return 15110;
			case -1629442620:
				return 10429;
			case -1628503605:
				return 4075;
			case -1628389425:
				return 10489;
			case -1627986005:
				return 11899;
			case -1627910973:
				return 14784;
			case -1627688652:
				return 11620;
			case -1627648101:
				return 3904;
			case -1627539046:
				return 1483;
			case -1627310535:
				return 5161;
			case -1626036013:
				return 4028;
			case -1625891775:
				return 4223;
			case -1625866697:
				return 12201;
			case -1625034202:
				return 2897;
			case -1624743747:
				return 3213;
			case -1624416230:
				return 13891;
			case -1624325382:
				return 3884;
			case -1624286822:
				return 7533;
			case -1624034481:
				return 11626;
			case -1623912517:
				return 6158;
			case -1623334873:
				return 9320;
			case -1622887687:
				return 14246;
			case -1622267817:
				return 5138;
			case -1621868985:
				return 3496;
			case -1621334968:
				return 10802;
			case -1621328860:
				return 11744;
			case -1620833843:
				return 8488;
			case -1620714365:
				return 6617;
			case -1620464964:
				return 639;
			case -1620229912:
				return 5595;
			case -1620195122:
				return 467;
			case -1620173764:
				return 13694;
			case -1619863907:
				return 1644;
			case -1619564045:
				return 15173;
			case -1619494784:
				return 10306;
			case -1619339928:
				return 11889;
			case -1619074941:
				return 2899;
			case -1618805595:
				return 9637;
			case -1618265083:
				return 3104;
			case -1617901949:
				return 567;
			case -1617588806:
				return 4981;
			case -1617288436:
				return 16419;
			case -1616611459:
				return 14159;
			case -1616422113:
				return 11735;
			case -1616287563:
				return 14667;
			case -1616278068:
				return 11475;
			case -1615981663:
				return 11341;
			case -1615858747:
				return 10893;
			case -1615357250:
				return 9981;
			case -1614880863:
				return 8366;
			case -1614719852:
				return 15066;
			case -1614423109:
				return 7080;
			case -1614394167:
				return 9253;
			case -1613469008:
				return 2390;
			case -1613317544:
				return 14466;
			case -1612530110:
				return 4463;
			case -1612450939:
				return 9130;
			case -1612375921:
				return 9862;
			case -1612348945:
				return 387;
			case -1611986613:
				return 9597;
			case -1611982353:
				return 9903;
			case -1611303453:
				return 10714;
			case -1611285215:
				return 11311;
			case -1611207257:
				return 13493;
			case -1611023277:
				return 107;
			case -1610803606:
				return 4576;
			case -1610662792:
				return 3218;
			case -1610607398:
				return 4866;
			case -1610556281:
				return 8745;
			case -1610495764:
				return 14755;
			case -1610220156:
				return 9259;
			case -1610219626:
				return 11407;
			case -1610185560:
				return 8724;
			case -1609848041:
				return 16405;
			case -1609805002:
				return 8610;
			case -1609754770:
				return 6974;
			case -1608987271:
				return 3623;
			case -1608977942:
				return 9561;
			case -1608851079:
				return 6603;
			case -1608216788:
				return 4989;
			case -1608070942:
				return 4185;
			case -1607849578:
				return 1648;
			case -1607722277:
				return 15067;
			case -1607512515:
				return 5836;
			case -1607312562:
				return 16315;
			case -1607299360:
				return 7299;
			case -1606875658:
				return 13650;
			case -1606721108:
				return 7753;
			case -1606647332:
				return 3862;
			case -1606404033:
				return 3576;
			case -1606359733:
				return 11551;
			case -1606331738:
				return 15410;
			case -1606314645:
				return 15813;
			case -1606049503:
				return 11080;
			case -1605914140:
				return 1708;
			case -1605771058:
				return 9150;
			case -1605579049:
				return 6470;
			case -1605464766:
				return 7665;
			case -1604317957:
				return 14834;
			case -1604180548:
				return 14717;
			case -1603909164:
				return 15233;
			case -1603376982:
				return 11108;
			case -1603282450:
				return 12788;
			case -1602312311:
				return 3309;
			case -1601921655:
				return 9386;
			case -1601559929:
				return 14180;
			case -1601548337:
				return 11618;
			case -1600818163:
				return 15702;
			case -1600746814:
				return 15796;
			case -1600351573:
				return 7344;
			case -1600328361:
				return 12640;
			case -1599683008:
				return 14702;
			case -1599623427:
				return 8384;
			case -1599472648:
				return 11642;
			case -1599024562:
				return 13142;
			case -1598866821:
				return 14502;
			case -1598799228:
				return 9645;
			case -1598613444:
				return 3686;
			case -1597120375:
				return 2438;
			case -1596810633:
				return 13687;
			case -1596763139:
				return 3232;
			case -1596442235:
				return 5125;
			case -1596410282:
				return 11948;
			case -1596094065:
				return 10228;
			case -1595617761:
				return 503;
			case -1595519482:
				return 11631;
			case -1595398632:
				return 7749;
			case -1594971537:
				return 12400;
			case -1594908333:
				return 16193;
			case -1594634038:
				return 10605;
			case -1594180188:
				return 7484;
			case -1594072227:
				return 8120;
			case -1593967299:
				return 10843;
			case -1593543637:
				return 11495;
			case -1593509009:
				return 10076;
			case -1593101140:
				return 6879;
			case -1592364241:
				return 11496;
			case -1592220992:
				return 4746;
			case -1592139297:
				return 7673;
			case -1592082932:
				return 83;
			case -1592000004:
				return 7004;
			case -1591740247:
				return 57;
			case -1591532055:
				return 1575;
			case -1591107438:
				return 332;
			case -1590998388:
				return 16425;
			case -1590868822:
				return 314;
			case -1590679120:
				return 16415;
			case -1590598483:
				return 12078;
			case -1590252413:
				return 14028;
			case -1589546848:
				return 3153;
			case -1588950139:
				return 9011;
			case -1588867364:
				return 9979;
			case -1588826075:
				return 5825;
			case -1588782262:
				return 7637;
			case -1588624736:
				return 3991;
			case -1588363187:
				return 3685;
			case -1588164913:
				return 643;
			case -1588092656:
				return 9037;
			case -1588007813:
				return 6026;
			case -1587988328:
				return 12643;
			case -1587854075:
				return 5311;
			case -1587663805:
				return 9165;
			case -1587574773:
				return 7559;
			case -1587197023:
				return 13772;
			case -1586839833:
				return 4333;
			case -1586823395:
				return 6867;
			case -1586601903:
				return 2545;
			case -1586557694:
				return 13598;
			case -1586133210:
				return 880;
			case -1586099842:
				return 10025;
			case -1585586416:
				return 347;
			case -1585483605:
				return 14293;
			case -1585133721:
				return 13413;
			case -1584964557:
				return 14925;
			case -1584953082:
				return 12166;
			case -1584353625:
				return 12489;
			case -1584104293:
				return 5562;
			case -1583829424:
				return 730;
			case -1583592980:
				return 11165;
			case -1583292675:
				return 13461;
			case -1583198340:
				return 6639;
			case -1582786064:
				return 15405;
			case -1582519980:
				return 951;
			case -1582293974:
				return 6565;
			case -1582270503:
				return 6983;
			case -1582240554:
				return 13473;
			case -1582151982:
				return 4891;
			case -1582120515:
				return 9698;
			case -1582056793:
				return 1414;
			case -1582045277:
				return 11304;
			case -1581621693:
				return 13429;
			case -1581225876:
				return 5650;
			case -1580139322:
				return 10397;
			case -1579905346:
				return 11008;
			case -1579749034:
				return 8121;
			case -1579690635:
				return 11976;
			case -1579200997:
				return 12655;
			case -1579174863:
				return 15160;
			case -1578461511:
				return 4624;
			case -1578357727:
				return 13617;
			case -1578164439:
				return 9980;
			case -1578141009:
				return 15685;
			case -1576823040:
				return 365;
			case -1576416470:
				return 16243;
			case -1575817843:
				return 907;
			case -1575469755:
				return 12467;
			case -1575040181:
				return 5377;
			case -1574950934:
				return 4605;
			case -1574886049:
				return 7644;
			case -1573845159:
				return 8822;
			case -1573698872:
				return 4386;
			case -1573123977:
				return 15476;
			case -1573022402:
				return 7503;
			case -1572607722:
				return 12076;
			case -1572595226:
				return 7020;
			case -1571806618:
				return 10925;
			case -1571595929:
				return 5957;
			case -1571431938:
				return 13775;
			case -1570703163:
				return 5129;
			case -1570699904:
				return 13819;
			case -1570296827:
				return 10656;
			case -1570280682:
				return 13777;
			case -1569608836:
				return 413;
			case -1569342812:
				return 13762;
			case -1569133746:
				return 3976;
			case -1568967682:
				return 16156;
			case -1568716381:
				return 14510;
			case -1568243841:
				return 4668;
			case -1567872552:
				return 13408;
			case -1567536313:
				return 12389;
			case -1567460112:
				return 10145;
			case -1566997944:
				return 6130;
			case -1566874684:
				return 1637;
			case -1566727213:
				return 12496;
			case -1566173441:
				return 9107;
			case -1565529979:
				return 515;
			case -1565242119:
				return 7284;
			case -1565186108:
				return 12246;
			case -1564938276:
				return 16144;
			case -1564816407:
				return 12202;
			case -1564639804:
				return 9087;
			case -1564336398:
				return 896;
			case -1564281334:
				return 9434;
			case -1564178988:
				return 44;
			case -1564026289:
				return 4088;
			case -1563966555:
				return 11246;
			case -1563788164:
				return 3235;
			case -1563192081:
				return 12113;
			case -1563074986:
				return 5007;
			case -1563045141:
				return 275;
			case -1563002555:
				return 10890;
			case -1561241953:
				return 5389;
			case -1560668379:
				return 16159;
			case -1560536379:
				return 2573;
			case -1560143504:
				return 1989;
			case -1560133449:
				return 10038;
			case -1559739504:
				return 13578;
			case -1559386058:
				return 9549;
			case -1559130290:
				return 6811;
			case -1559114571:
				return 11960;
			case -1559067278:
				return 1877;
			case -1558681657:
				return 7491;
			case -1558520371:
				return 13039;
			case -1558470232:
				return 11770;
			case -1558396138:
				return 6953;
			case -1558381117:
				return 220;
			case -1558061734:
				return 3040;
			case -1557783539:
				return 15193;
			case -1557178852:
				return 1927;
			case -1556900260:
				return 16389;
			case -1556843147:
				return 4869;
			case -1556139309:
				return 5913;
			case -1556130747:
				return 1293;
			case -1556118171:
				return 15478;
			case -1555794258:
				return 7167;
			case -1555585595:
				return 8927;
			case -1555582236:
				return 4259;
			case -1555385540:
				return 6271;
			case -1555265429:
				return 1077;
			case -1555135866:
				return 5415;
			case -1555042073:
				return 8937;
			case -1555025684:
				return 2908;
			case -1554827654:
				return 14604;
			case -1554766779:
				return 9347;
			case -1554745606:
				return 12372;
			case -1554602135:
				return 6616;
			case -1554146584:
				return 12775;
			case -1553593715:
				return 14565;
			case -1553372114:
				return 15508;
			case -1553254942:
				return 10905;
			case -1552780000:
				return 15919;
			case -1552321505:
				return 356;
			case -1552059402:
				return 14388;
			case -1551962360:
				return 3380;
			case -1551721639:
				return 1985;
			case -1551699429:
				return 12637;
			case -1551558665:
				return 16383;
			case -1551507001:
				return 14469;
			case -1551149449:
				return 11256;
			case -1550844791:
				return 4638;
			case -1550768676:
				return 14524;
			case -1550570938:
				return 14334;
			case -1550362321:
				return 8739;
			case -1549415953:
				return 1711;
			case -1549381684:
				return 9825;
			case -1548353641:
				return 1458;
			case -1547900512:
				return 11920;
			case -1547533951:
				return 10844;
			case -1547523931:
				return 1469;
			case -1547438906:
				return 14612;
			case -1547435488:
				return 15472;
			case -1547318242:
				return 2080;
			case -1547089451:
				return 2923;
			case -1546989744:
				return 11219;
			case -1546986391:
				return 13034;
			case -1546898709:
				return 7172;
			case -1546648492:
				return 8099;
			case -1546532713:
				return 7994;
			case -1546175906:
				return 8128;
			case -1546022099:
				return 8669;
			case -1545508915:
				return 5494;
			case -1545270676:
				return 7700;
			case -1544981815:
				return 9940;
			case -1544786211:
				return 14419;
			case -1544539917:
				return 15674;
			case -1544146581:
				return 5941;
			case -1544036350:
				return 6118;
			case -1543503143:
				return 10297;
			case -1543270099:
				return 10735;
			case -1543267603:
				return 12443;
			case -1542969482:
				return 740;
			case -1542319979:
				return 5674;
			case -1542030359:
				return 5025;
			case -1541657232:
				return 10393;
			case -1540984027:
				return 829;
			case -1540334204:
				return 6507;
			case -1540051628:
				return 10563;
			case -1539678208:
				return 5559;
			case -1539465244:
				return 11319;
			case -1539299519:
				return 5583;
			case -1539092407:
				return 6425;
			case -1539028073:
				return 4494;
			case -1539017404:
				return 13530;
			case -1538935337:
				return 15519;
			case -1538866445:
				return 7713;
			case -1538325204:
				return 934;
			case -1537933036:
				return 10589;
			case -1537852142:
				return 5086;
			case -1537433924:
				return 11826;
			case -1537382667:
				return 9734;
			case -1537318339:
				return 15565;
			case -1536990938:
				return 1699;
			case -1536331387:
				return 7046;
			case -1536074276:
				return 6555;
			case -1536033271:
				return 55;
			case -1536017473:
				return 10697;
			case -1535332955:
				return 2276;
			case -1535228588:
				return 6628;
			case -1535091473:
				return 15572;
			case -1534357861:
				return 13011;
			case -1534347789:
				return 15684;
			case -1533320518:
				return 15288;
			case -1533085786:
				return 688;
			case -1533062577:
				return 7566;
			case -1532232067:
				return 7243;
			case -1531945177:
				return 9309;
			case -1531759053:
				return 425;
			case -1531209364:
				return 13215;
			case -1530592594:
				return 10398;
			case -1530501044:
				return 15512;
			case -1530211342:
				return 14251;
			case -1529769734:
				return 6583;
			case -1529666210:
				return 10924;
			case -1529654624:
				return 7089;
			case -1528680970:
				return 5640;
			case -1528665669:
				return 352;
			case -1528037828:
				return 2966;
			case -1527828275:
				return 2745;
			case -1527784146:
				return 1727;
			case -1527670026:
				return 8991;
			case -1526904571:
				return 15917;
			case -1526687534:
				return 8509;
			case -1526603943:
				return 4857;
			case -1526591198:
				return 11663;
			case -1526165130:
				return 10875;
			case -1525440822:
				return 5751;
			case -1525270475:
				return 5691;
			case -1525151864:
				return 6560;
			case -1525086019:
				return 9053;
			case -1524289808:
				return 6853;
			case -1524011012:
				return 11429;
			case -1523757120:
				return 14608;
			case -1523455647:
				return 3874;
			case -1522884667:
				return 915;
			case -1522406313:
				return 1807;
			case -1522256583:
				return 5183;
			case -1522157320:
				return 1953;
			case -1521711836:
				return 6386;
			case -1521685280:
				return 11622;
			case -1521678777:
				return 3489;
			case -1521274693:
				return 1107;
			case -1520910353:
				return 16242;
			case -1520417507:
				return 15116;
			case -1520034100:
				return 3189;
			case -1519760323:
				return 14870;
			case -1519749182:
				return 5937;
			case -1519747747:
				return 941;
			case -1519149075:
				return 7129;
			case -1518891237:
				return 3069;
			case -1518699789:
				return 9902;
			case -1518686163:
				return 3163;
			case -1518638291:
				return 7468;
			case -1518355885:
				return 7148;
			case -1518053699:
				return 16357;
			case -1517973922:
				return 8405;
			case -1517713157:
				return 3944;
			case -1517227000:
				return 11490;
			case -1516992622:
				return 3696;
			case -1516912009:
				return 3521;
			case -1516788199:
				return 10836;
			case -1516639533:
				return 5146;
			case -1516420397:
				return 1027;
			case -1516404361:
				return 9821;
			case -1516219602:
				return 14663;
			case -1516046037:
				return 10219;
			case -1516042983:
				return 3700;
			case -1515946863:
				return 4644;
			case -1515277338:
				return 6929;
			case -1515224551:
				return 1695;
			case -1515071623:
				return 1931;
			case -1514813399:
				return 2466;
			case -1513821316:
				return 14374;
			case -1513820396:
				return 4881;
			case -1513606297:
				return 4541;
			case -1513502493:
				return 10898;
			case -1512864183:
				return 8545;
			case -1512847854:
				return 7054;
			case -1512763590:
				return 4972;
			case -1512762819:
				return 1323;
			case -1512648902:
				return 13563;
			case -1512440333:
				return 10441;
			case -1512035821:
				return 14850;
			case -1511530783:
				return 13190;
			case -1511408367:
				return 10479;
			case -1511221286:
				return 1481;
			case -1510839859:
				return 5656;
			case -1510399680:
				return 16308;
			case -1509850735:
				return 8484;
			case -1509673351:
				return 6297;
			case -1509314938:
				return 10658;
			case -1509179542:
				return 1130;
			case -1508327329:
				return 3769;
			case -1507971769:
				return 2416;
			case -1507721993:
				return 1260;
			case -1507415378:
				return 1109;
			case -1507220691:
				return 11605;
			case -1506939282:
				return 14273;
			case -1506678696:
				return 6731;
			case -1506573666:
				return 10110;
			case -1506402473:
				return 1;
			case -1506230411:
				return 3219;
			case -1505514250:
				return 8204;
			case -1504972544:
				return 8063;
			case -1504824283:
				return 3060;
			case -1504550118:
				return 11882;
			case -1503965723:
				return 4734;
			case -1503659575:
				return 5868;
			case -1503583607:
				return 6858;
			case -1502884508:
				return 823;
			case -1502733730:
				return 1014;
			case -1502648784:
				return 10910;
			case -1502514893:
				return 8370;
			case -1501906712:
				return 10201;
			case -1501480798:
				return 726;
			case -1501260969:
				return 7635;
			case -1501170113:
				return 4325;
			case -1501114774:
				return 4371;
			case -1500856378:
				return 10468;
			case -1500660388:
				return 5467;
			case -1500596241:
				return 7227;
			case -1500187283:
				return 2763;
			case -1499985446:
				return 7679;
			case -1499241424:
				return 12673;
			case -1499238524:
				return 7469;
			case -1499182641:
				return 11856;
			case -1499129198:
				return 12817;
			case -1498550168:
				return 13550;
			case -1497991861:
				return 6942;
			case -1497826559:
				return 5054;
			case -1497819891:
				return 3437;
			case -1497726461:
				return 7521;
			case -1497674897:
				return 4071;
			case -1497623361:
				return 12210;
			case -1497614593:
				return 3994;
			case -1497491866:
				return 6046;
			case -1497400706:
				return 9804;
			case -1497275628:
				return 11532;
			case -1497029950:
				return 2661;
			case -1496893079:
				return 8109;
			case -1496419081:
				return 9872;
			case -1495957338:
				return 15937;
			case -1495951036:
				return 20;
			case -1495107503:
				return 8077;
			case -1494400830:
				return 10140;
			case -1494278633:
				return 12417;
			case -1494274349:
				return 502;
			case -1494244226:
				return 15404;
			case -1494067262:
				return 3;
			case -1494035778:
				return 15693;
			case -1493543991:
				return 14330;
			case -1493090196:
				return 6502;
			case -1492811285:
				return 13406;
			case -1492149540:
				return 9158;
			case -1492119732:
				return 6881;
			case -1491759976:
				return 1887;
			case -1491644197:
				return 13893;
			case -1491434691:
				return 1741;
			case -1491361229:
				return 7833;
			case -1491094906:
				return 4936;
			case -1490629752:
				return 9020;
			case -1490607613:
				return 8781;
			case -1489968742:
				return 10230;
			case -1489501682:
				return 8911;
			case -1489501504:
				return 12255;
			case -1489408167:
				return 4250;
			case -1488568115:
				return 2393;
			case -1488452835:
				return 4580;
			case -1488385182:
				return 4115;
			case -1488244257:
				return 246;
			case -1488157426:
				return 71;
			case -1487857982:
				return 12870;
			case -1487798821:
				return 5062;
			case -1487742800:
				return 9145;
			case -1487631255:
				return 14352;
			case -1487277617:
				return 9914;
			case -1486976702:
				return 2491;
			case -1486796717:
				return 8315;
			case -1486704931:
				return 14641;
			case -1486681919:
				return 16048;
			case -1486370183:
				return 5743;
			case -1486190409:
				return 2012;
			case -1485349844:
				return 6638;
			case -1485104323:
				return 606;
			case -1484795393:
				return 25;
			case -1484625631:
				return 4338;
			case -1484366741:
				return 6866;
			case -1483559144:
				return 15268;
			case -1483557278:
				return 13355;
			case -1483407939:
				return 8807;
			case -1481695040:
				return 15530;
			case -1480541168:
				return 6918;
			case -1480266885:
				return 2726;
			case -1480085904:
				return 9992;
			case -1480058065:
				return 2594;
			case -1479991672:
				return 10034;
			case -1479710828:
				return 7265;
			case -1479510721:
				return 5002;
			case -1479489785:
				return 12734;
			case -1478830865:
				return 13857;
			case -1478827988:
				return 10193;
			case -1478815511:
				return 4268;
			case -1478389567:
				return 2731;
			case -1478350831:
				return 9040;
			case -1478027276:
				return 15663;
			case -1476805445:
				return 13003;
			case -1476732350:
				return 3458;
			case -1476680157:
				return 14497;
			case -1476237711:
				return 1683;
			case -1475340148:
				return 8041;
			case -1475324878:
				return 11553;
			case -1475293549:
				return 7082;
			case -1474589744:
				return 4262;
			case -1474107545:
				return 7845;
			case -1473923004:
				return 2072;
			case -1473835664:
				return 9400;
			case -1473829490:
				return 208;
			case -1473388640:
				return 5382;
			case -1472975869:
				return 8993;
			case -1472965107:
				return 1416;
			case -1472945122:
				return 16431;
			case -1472894849:
				return 4180;
			case -1472515655:
				return 1796;
			case -1472398722:
				return 3780;
			case -1471991277:
				return 102;
			case -1471944326:
				return 14108;
			case -1471143067:
				return 8735;
			case -1470832373:
				return 9241;
			case -1470686283:
				return 16439;
			case -1470236503:
				return 3237;
			case -1469647317:
				return 7482;
			case -1469531602:
				return 3803;
			case -1469363007:
				return 10707;
			case -1468914890:
				return 10998;
			case -1468731639:
				return 14265;
			case -1468665747:
				return 3357;
			case -1468397381:
				return 4224;
			case -1468364388:
				return 8007;
			case -1468346957:
				return 14042;
			case -1467110088:
				return 12859;
			case -1467092535:
				return 1829;
			case -1466509812:
				return 1857;
			case -1466467756:
				return 13370;
			case -1466017978:
				return 15206;
			case -1465548156:
				return 6177;
			case -1465461606:
				return 10853;
			case -1465407251:
				return 11227;
			case -1465099416:
				return 15779;
			case -1464743433:
				return 14980;
			case -1464680957:
				return 9230;
			case -1464570377:
				return 2864;
			case -1464420162:
				return 194;
			case -1464265639:
				return 5613;
			case -1463675126:
				return 12295;
			case -1463522744:
				return 7150;
			case -1463148437:
				return 8980;
			case -1462963502:
				return 250;
			case -1462699017:
				return 16005;
			case -1462276114:
				return 15415;
			case -1462168959:
				return 12390;
			case -1462057769:
				return 1583;
			case -1462036161:
				return 10042;
			case -1461887439:
				return 14035;
			case -1460773772:
				return 14654;
			case -1460772150:
				return 418;
			case -1460658733:
				return 7707;
			case -1460537468:
				return 3961;
			case -1459900576:
				return 15831;
			case -1459771423:
				return 16258;
			case -1459762606:
				return 2865;
			case -1459606786:
				return 7979;
			case -1458883546:
				return 4138;
			case -1458841810:
				return 9221;
			case -1458432563:
				return 15228;
			case -1458226126:
				return 10733;
			case -1458198378:
				return 8678;
			case -1457705840:
				return 10792;
			case -1457454415:
				return 5809;
			case -1457216850:
				return 2672;
			case -1457053346:
				return 173;
			case -1456971074:
				return 14181;
			case -1456905139:
				return 4742;
			case -1456904552:
				return 8621;
			case -1456885922:
				return 11053;
			case -1456777106:
				return 5598;
			case -1456646750:
				return 3531;
			case -1456412460:
				return 11890;
			case -1456315834:
				return 5231;
			case -1455901846:
				return 11013;
			case -1455840632:
				return 7761;
			case -1455724837:
				return 12935;
			case -1455694716:
				return 7666;
			case -1455160832:
				return 3518;
			case -1454918649:
				return 1636;
			case -1454626990:
				return 1424;
			case -1454081607:
				return 9724;
			case -1453950896:
				return 15338;
			case -1453802567:
				return 13998;
			case -1453705121:
				return 4242;
			case -1453582297:
				return 4686;
			case -1452429411:
				return 3929;
			case -1452297360:
				return 4848;
			case -1451757867:
				return 12558;
			case -1451393780:
				return 14772;
			case -1451297983:
				return 11993;
			case -1450579745:
				return 253;
			case -1450503071:
				return 8489;
			case -1450385470:
				return 2016;
			case -1450002727:
				return 10279;
			case -1449944654:
				return 16031;
			case -1449746362:
				return 11476;
			case -1449541158:
				return 13381;
			case -1449256625:
				return 1555;
			case -1449243937:
				return 2876;
			case -1448924971:
				return 15273;
			case -1448813815:
				return 16171;
			case -1448469251:
				return 2676;
			case -1448454666:
				return 3207;
			case -1448273283:
				return 16045;
			case -1447872425:
				return 12007;
			case -1447812406:
				return 2508;
			case -1447298980:
				return 6806;
			case -1446826991:
				return 404;
			case -1446768962:
				return 454;
			case -1446452258:
				return 4626;
			case -1446119767:
				return 16010;
			case -1446065143:
				return 2581;
			case -1445759307:
				return 14957;
			case -1445405456:
				return 1845;
			case -1445346669:
				return 16447;
			case -1445135526:
				return 14887;
			case -1444824854:
				return 13511;
			case -1444712083:
				return 800;
			case -1444666321:
				return 11436;
			case -1444537411:
				return 8666;
			case -1444035577:
				return 4282;
			case -1443906703:
				return 5638;
			case -1443843072:
				return 13958;
			case -1443259176:
				return 2334;
			case -1442551565:
				return 4001;
			case -1442481039:
				return 1757;
			case -1442218667:
				return 8645;
			case -1442130421:
				return 12135;
			case -1441960637:
				return 4663;
			case -1441530160:
				return 7393;
			case -1441464453:
				return 6284;
			case -1441144351:
				return 14618;
			case -1441024331:
				return 6045;
			case -1440545263:
				return 4445;
			case -1440322020:
				return 15531;
			case -1440117995:
				return 8254;
			case -1439629438:
				return 398;
			case -1439155498:
				return 3563;
			case -1439003348:
				return 6374;
			case -1438721017:
				return 11557;
			case -1438644763:
				return 98;
			case -1438489188:
				return 4548;
			case -1438377560:
				return 1704;
			case -1438090360:
				return 4635;
			case -1437756396:
				return 2741;
			case -1437646367:
				return 7134;
			case -1437208391:
				return 6143;
			case -1437193849:
				return 12284;
			case -1437140365:
				return 4267;
			case -1436795223:
				return 14931;
			case -1436694544:
				return 10630;
			case -1436097390:
				return 6871;
			case -1435270564:
				return 10356;
			case -1434709171:
				return 14952;
			case -1434264647:
				return 4254;
			case -1434182011:
				return 13614;
			case -1433814131:
				return 15368;
			case -1433811926:
				return 4836;
			case -1433811760:
				return 14157;
			case -1433564005:
				return 2275;
			case -1433439452:
				return 8298;
			case -1433044598:
				return 6618;
			case -1432887415:
				return 4691;
			case -1432749428:
				return 12897;
			case -1432502130:
				return 7173;
			case -1432410955:
				return 770;
			case -1432349231:
				return 10723;
			case -1431613478:
				return 6139;
			case -1430775856:
				return 7104;
			case -1430757624:
				return 2870;
			case -1430327382:
				return 8156;
			case -1430318499:
				return 3359;
			case -1429979627:
				return 6931;
			case -1429896757:
				return 3261;
			case -1429415106:
				return 4322;
			case -1428936406:
				return 15426;
			case -1428299005:
				return 10948;
			case -1427723841:
				return 1724;
			case -1427448689:
				return 7087;
			case -1427360975:
				return 8240;
			case -1427302413:
				return 9818;
			case -1427204870:
				return 10840;
			case -1426656390:
				return 5819;
			case -1426559558:
				return 12674;
			case -1426428721:
				return 10896;
			case -1426412076:
				return 4658;
			case -1426374160:
				return 5697;
			case -1426177691:
				return 10345;
			case -1426151250:
				return 14479;
			case -1426104725:
				return 13928;
			case -1424962427:
				return 7186;
			case -1424767799:
				return 14694;
			case -1424658089:
				return 4337;
			case -1424483229:
				return 13559;
			case -1424468720:
				return 12181;
			case -1424055867:
				return 6777;
			case -1423832300:
				return 10712;
			case -1423504183:
				return 15205;
			case -1422831764:
				return 12211;
			case -1422825045:
				return 5348;
			case -1422749025:
				return 12309;
			case -1422716283:
				return 12474;
			case -1422514967:
				return 7035;
			case -1422266834:
				return 5794;
			case -1421951598:
				return 15329;
			case -1421542903:
				return 7271;
			case -1421046393:
				return 12649;
			case -1420244530:
				return 8243;
			case -1420165463:
				return 8626;
			case -1420100070:
				return 11240;
			case -1419711042:
				return 5059;
			case -1418951751:
				return 14981;
			case -1418811673:
				return 13517;
			case -1418241951:
				return 5895;
			case -1417736245:
				return 6126;
			case -1417586429:
				return 7909;
			case -1417513136:
				return 553;
			case -1417501054:
				return 1974;
			case -1417411947:
				return 6602;
			case -1417406166:
				return 4908;
			case -1416852838:
				return 7447;
			case -1416777693:
				return 12108;
			case -1416742002:
				return 9945;
			case -1416495420:
				return 13072;
			case -1416050906:
				return 11987;
			case -1415973361:
				return 7532;
			case -1415824405:
				return 13454;
			case -1414989025:
				return 14737;
			case -1414976516:
				return 15657;
			case -1414583341:
				return 6846;
			case -1414500174:
				return 12912;
			case -1414142113:
				return 6562;
			case -1413942594:
				return 7151;
			case -1413870594:
				return 1621;
			case -1413776846:
				return 1249;
			case -1413338433:
				return 16325;
			case -1412768919:
				return 1196;
			case -1412448287:
				return 4878;
			case -1412261443:
				return 302;
			case -1411766760:
				return 8573;
			case -1411574158:
				return 10355;
			case -1411433173:
				return 6737;
			case -1411208867:
				return 6975;
			case -1411125981:
				return 9308;
			case -1410040208:
				return 988;
			case -1409519436:
				return 3519;
			case -1409162168:
				return 3431;
			case -1408414394:
				return 11380;
			case -1408223545:
				return 4101;
			case -1408045762:
				return 7892;
			case -1407579400:
				return 94;
			case -1407550841:
				return 7459;
			case -1406435547:
				return 8696;
			case -1406285222:
				return 1781;
			case -1406240499:
				return 13905;
			case -1406189616:
				return 777;
			case -1406100030:
				return 12612;
			case -1406094011:
				return 125;
			case -1405956211:
				return 6544;
			case -1405403140:
				return 12986;
			case -1405240809:
				return 5954;
			case -1405080631:
				return 2570;
			case -1405053637:
				return 3888;
			case -1405035289:
				return 6905;
			case -1404758347:
				return 3782;
			case -1404171522:
				return 5016;
			case -1404090161:
				return 9577;
			case -1403818838:
				return 8563;
			case -1403431642:
				return 3608;
			case -1403420972:
				return 3442;
			case -1403247140:
				return 5556;
			case -1403107642:
				return 14090;
			case -1402679009:
				return 12426;
			case -1402507254:
				return 3121;
			case -1402185605:
				return 6399;
			case -1402045904:
				return 1057;
			case -1401417647:
				return 2487;
			case -1401324255:
				return 6190;
			case -1401122754:
				return 13591;
			case -1400222373:
				return 7013;
			case -1400017352:
				return 9653;
			case -1399874861:
				return 5657;
			case -1398762336:
				return 8575;
			case -1398586445:
				return 558;
			case -1398443261:
				return 14968;
			case -1398080245:
				return 14217;
			case -1397963553:
				return 7728;
			case -1397820854:
				return 11171;
			case -1397331456:
				return 2458;
			case -1397252733:
				return 15548;
			case -1397059493:
				return 16137;
			case -1397002401:
				return 926;
			case -1396384966:
				return 4877;
			case -1396384148:
				return 4204;
			case -1396069527:
				return 4349;
			case -1394699518:
				return 15939;
			case -1393961424:
				return 6099;
			case -1393933166:
				return 10184;
			case -1393679177:
				return 9762;
			case -1392685005:
				return 7693;
			case -1392609946:
				return 12286;
			case -1392359921:
				return 15382;
			case -1391719168:
				return 12321;
			case -1391540764:
				return 11598;
			case -1391147923:
				return 14637;
			case -1390684521:
				return 109;
			case -1390621783:
				return 8200;
			case -1390604752:
				return 2729;
			case -1390341619:
				return 1181;
			case -1390067252:
				return 7973;
			case -1389818535:
				return 537;
			case -1389038366:
				return 9326;
			case -1388958900:
				return 9110;
			case -1388405179:
				return 9557;
			case -1387949734:
				return 635;
			case -1387637577:
				return 7765;
			case -1387478137:
				return 6458;
			case -1387175656:
				return 14480;
			case -1386950172:
				return 11671;
			case -1386915671:
				return 1911;
			case -1386905163:
				return 15730;
			case -1386893908:
				return 4510;
			case -1386734901:
				return 14918;
			case -1386683671:
				return 570;
			case -1386288748:
				return 12876;
			case -1386119702:
				return 1139;
			case -1385780198:
				return 5578;
			case -1385740716:
				return 15570;
			case -1385386118:
				return 9789;
			case -1385279742:
				return 2687;
			case -1385093661:
				return 3094;
			case -1384872070:
				return 6329;
			case -1384669516:
				return 14543;
			case -1384606398:
				return 14822;
			case -1384368644:
				return 13484;
			case -1384348935:
				return 5185;
			case -1383839040:
				return 11769;
			case -1383731552:
				return 13944;
			case -1383703421:
				return 2824;
			case -1383627397:
				return 13828;
			case -1383601827:
				return 15642;
			case -1383503546:
				return 9224;
			case -1383113741:
				return 2292;
			case -1383054421:
				return 13105;
			case -1382857212:
				return 2785;
			case -1382725901:
				return 7740;
			case -1381878125:
				return 8540;
			case -1381449134:
				return 14813;
			case -1381243508:
				return 14806;
			case -1381166205:
				return 7944;
			case -1380592460:
				return 881;
			case -1380109990:
				return 8291;
			case -1379917677:
				return 8608;
			case -1379866799:
				return 2783;
			case -1379701785:
				return 9255;
			case -1379479358:
				return 10550;
			case -1379380259:
				return 12042;
			case -1379083869:
				return 8223;
			case -1378837802:
				return 6175;
			case -1378832890:
				return 10248;
			case -1378538896:
				return 10035;
			case -1378335287:
				return 10931;
			case -1378324308:
				return 6649;
			case -1378218410:
				return 13325;
			case -1378192434:
				return 16235;
			case -1378184406:
				return 3346;
			case -1377353093:
				return 7969;
			case -1377135021:
				return 7405;
			case -1376278836:
				return 8361;
			case -1375978782:
				return 6804;
			case -1375755183:
				return 3645;
			case -1375373580:
				return 7632;
			case -1375371513:
				return 14448;
			case -1375097747:
				return 16331;
			case -1375092964:
				return 5777;
			case -1374910050:
				return 13298;
			case -1374624501:
				return 2212;
			case -1374338757:
				return 7326;
			case -1374264055:
				return 5704;
			case -1374254590:
				return 7628;
			case -1373616892:
				return 3386;
			case -1373237814:
				return 12852;
			case -1373083067:
				return 8392;
			case -1372778688:
				return 15700;
			case -1372636557:
				return 13890;
			case -1372224758:
				return 12376;
			case -1372052980:
				return 16122;
			case -1371818157:
				return 5323;
			case -1371157709:
				return 14058;
			case -1370726930:
				return 189;
			case -1370447667:
				return 11832;
			case -1369704387:
				return 12375;
			case -1368683894:
				return 4615;
			case -1368644756:
				return 14535;
			case -1368003099:
				return 14227;
			case -1367972866:
				return 9665;
			case -1367947144:
				return 6276;
			case -1367828492:
				return 9325;
			case -1367341904:
				return 6710;
			case -1367220440:
				return 15479;
			case -1366850746:
				return 10268;
			case -1366179602:
				return 8879;
			case -1365936867:
				return 6070;
			case -1365425325:
				return 6202;
			case -1365249023:
				return 14351;
			case -1365222741:
				return 14033;
			case -1363755153:
				return 15563;
			case -1362908177:
				return 6240;
			case -1362611717:
				return 6282;
			default:
				break;
		}
		if (iParam1 >= 1)
		{
		}
		return -1;
	}
	if (iParam0 <= -1112289552)
	{
		switch (iParam0)
		{
			case -1362578572:
				return 1207;
			case -1362551618:
				return 3957;
			case -1362064660:
				return 11933;
			case -1361945818:
				return 4444;
			case -1361811979:
				return 4464;
			case -1361490330:
				return 8649;
			case -1360732541:
				return 9784;
			case -1360462387:
				return 15945;
			case -1359409335:
				return 3061;
			case -1359201521:
				return 13022;
			case -1358696048:
				return 13704;
			case -1358367582:
				return 4476;
			case -1358357276:
				return 12435;
			case -1357716420:
				return 1296;
			case -1357677729:
				return 5215;
			case -1356884479:
				return 38;
			case -1356760880:
				return 8591;
			case -1356440901:
				return 16469;
			case -1356425746:
				return 14633;
			case -1356057410:
				return 9393;
			case -1355486543:
				return 5409;
			case -1355297595:
				return 2265;
			case -1354962655:
				return 9869;
			case -1354835203:
				return 4093;
			case -1354777667:
				return 6678;
			case -1354372995:
				return 9901;
			case -1353932375:
				return 11797;
			case -1353763732:
				return 12083;
			case -1353611101:
				return 11301;
			case -1353604096:
				return 743;
			case -1353515435:
				return 3390;
			case -1353085736:
				return 3150;
			case -1352625024:
				return 12010;
			case -1352620102:
				return 9478;
			case -1352411993:
				return 13856;
			case -1352407238:
				return 8270;
			case -1352325650:
				return 7881;
			case -1351764875:
				return 3231;
			case -1351736636:
				return 165;
			case -1351631545:
				return 16111;
			case -1351393313:
				return 13302;
			case -1350548143:
				return 10750;
			case -1350423696:
				return 644;
			case -1350256677:
				return 13688;
			case -1349859723:
				return 16409;
			case -1349837450:
				return 3221;
			case -1349656329:
				return 7093;
			case -1349505872:
				return 633;
			case -1349480766:
				return 9247;
			case -1348991209:
				return 7036;
			case -1348647940:
				return 3463;
			case -1348174565:
				return 4741;
			case -1347765365:
				return 4967;
			case -1347606004:
				return 6771;
			case -1347283941:
				return 14406;
			case -1347197368:
				return 6449;
			case -1347108220:
				return 3425;
			case -1346393151:
				return 963;
			case -1346379226:
				return 12822;
			case -1345801615:
				return 16036;
			case -1345750404:
				return 10581;
			case -1345652903:
				return 14915;
			case -1345460669:
				return 2112;
			case -1345208079:
				return 708;
			case -1344537287:
				return 9408;
			case -1344186929:
				return 12412;
			case -1344047941:
				return 13934;
			case -1344034325:
				return 13604;
			case -1342509988:
				return 14368;
			case -1342331545:
				return 12710;
			case -1342246546:
				return 16323;
			case -1342227326:
				return 10501;
			case -1342159303:
				return 14673;
			case -1342044032:
				return 9004;
			case -1341861306:
				return 8242;
			case -1340224147:
				return 8376;
			case -1340154091:
				return 5445;
			case -1339845059:
				return 10380;
			case -1339763497:
				return 4228;
			case -1339461461:
				return 14017;
			case -1339250006:
				return 14044;
			case -1339244739:
				return 4018;
			case -1339207878:
				return 7818;
			case -1338729485:
				return 12479;
			case -1338658472:
				return 16382;
			case -1338508864:
				return 7827;
			case -1338358647:
				return 1301;
			case -1338100539:
				return 958;
			case -1338075610:
				return 3799;
			case -1338005863:
				return 5790;
			case -1337884887:
				return 10956;
			case -1337089028:
				return 13444;
			case -1337061193:
				return 10212;
			case -1336887993:
				return 10165;
			case -1336484459:
				return 9844;
			case -1336014254:
				return 4276;
			case -1335979469:
				return 2593;
			case -1335921754:
				return 14886;
			case -1335913022:
				return 15446;
			case -1335664909:
				return 14355;
			case -1335633201:
				return 3788;
			case -1335520950:
				return 13235;
			case -1335392265:
				return 9761;
			case -1335364276:
				return 5084;
			case -1335226029:
				return 6366;
			case -1335015498:
				return 10502;
			case -1334999629:
				return 8521;
			case -1334568278:
				return 6704;
			case -1334512573:
				return 2624;
			case -1334488559:
				return 7867;
			case -1334391835:
				return 16407;
			case -1334287827:
				return 5705;
			case -1333989503:
				return 2748;
			case -1333775312:
				return 12416;
			case -1333624078:
				return 4542;
			case -1333609743:
				return 4353;
			case -1333592818:
				return 5907;
			case -1333576969:
				return 11928;
			case -1333340574:
				return 8475;
			case -1333051172:
				return 11743;
			case -1332712371:
				return 4659;
			case -1332584872:
				return 293;
			case -1332334928:
				return 16283;
			case -1331885428:
				return 636;
			case -1331655066:
				return 5860;
			case -1331485996:
				return 10973;
			case -1330933900:
				return 3154;
			case -1330877665:
				return 522;
			case -1330644740:
				return 7450;
			case -1330552880:
				return 5917;
			case -1329546951:
				return 10335;
			case -1329383517:
				return 15117;
			case -1329369992:
				return 9451;
			case -1328475408:
				return 9783;
			case -1328353693:
				return 15985;
			case -1327949972:
				return 11582;
			case -1327803624:
				return 5569;
			case -1327784484:
				return 9836;
			case -1327505904:
				return 8845;
			case -1327323859:
				return 8368;
			case -1327241243:
				return 1234;
			case -1327142777:
				return 1656;
			case -1326909973:
				return 4669;
			case -1326883057:
				return 7567;
			case -1326851941:
				return 3217;
			case -1326803989:
				return 10046;
			case -1326490160:
				return 12126;
			case -1326233925:
				return 11737;
			case -1326227200:
				return 4244;
			case -1325826435:
				return 1868;
			case -1325678517:
				return 9321;
			case -1325635468:
				return 7097;
			case -1324377666:
				return 114;
			case -1324313678:
				return 15911;
			case -1324063231:
				return 10240;
			case -1323994551:
				return 9462;
			case -1323753541:
				return 7750;
			case -1323555158:
				return 4182;
			case -1323509213:
				return 3201;
			case -1323232112:
				return 16349;
			case -1323126959:
				return 6971;
			case -1322714751:
				return 15422;
			case -1322640374:
				return 11508;
			case -1322233041:
				return 10590;
			case -1321930559:
				return 1257;
			case -1321878957:
				return 5770;
			case -1321540800:
				return 14135;
			case -1320825813:
				return 9155;
			case -1320810378:
				return 15722;
			case -1320693508:
				return 1951;
			case -1320611590:
				return 8471;
			case -1320500186:
				return 5135;
			case -1320358161:
				return 14900;
			case -1320353702:
				return 1578;
			case -1319989508:
				return 11985;
			case -1319718204:
				return 5343;
			case -1319542872:
				return 13580;
			case -1319512157:
				return 7388;
			case -1318935809:
				return 12230;
			case -1318602136:
				return 7862;
			case -1318399075:
				return 15841;
			case -1318277501:
				return 2405;
			case -1317905551:
				return 10266;
			case -1317428384:
				return 13980;
			case -1317270905:
				return 9052;
			case -1317036545:
				return 4066;
			case -1316957003:
				return 7202;
			case -1316641224:
				return 9153;
			case -1316601285:
				return 8413;
			case -1316336519:
				return 6636;
			case -1316094228:
				return 11734;
			case -1315817616:
				return 4459;
			case -1315269269:
				return 7523;
			case -1314742276:
				return 10389;
			case -1313830929:
				return 4456;
			case -1313455184:
				return 5642;
			case -1313429698:
				return 6945;
			case -1313351313:
				return 5943;
			case -1312967570:
				return 2378;
			case -1312870316:
				return 4846;
			case -1312593316:
				return 8756;
			case -1312534017:
				return 5842;
			case -1312494496:
				return 2081;
			case -1312226700:
				return 3509;
			case -1311876587:
				return 8516;
			case -1311816336:
				return 10508;
			case -1311604576:
				return 5719;
			case -1311582480:
				return 9722;
			case -1311287025:
				return 3172;
			case -1311208351:
				return 12448;
			case -1310930881:
				return 16108;
			case -1310579257:
				return 11395;
			case -1310258630:
				return 4050;
			case -1308782324:
				return 1404;
			case -1308609339:
				return 13385;
			case -1308460526:
				return 13659;
			case -1308375373:
				return 14449;
			case -1307808880:
				return 13216;
			case -1307770515:
				return 2325;
			case -1307757043:
				return 15369;
			case -1307565771:
				return 6129;
			case -1307352143:
				return 14010;
			case -1306900949:
				return 12661;
			case -1306858058:
				return 9867;
			case -1306599616:
				return 10185;
			case -1306593733:
				return 10270;
			case -1306571021:
				return 13635;
			case -1306304466:
				return 1602;
			case -1306269080:
				return 8064;
			case -1306239910:
				return 811;
			case -1305940293:
				return 4308;
			case -1305569655:
				return 6141;
			case -1305231588:
				return 13315;
			case -1305182512:
				return 12394;
			case -1304847269:
				return 2391;
			case -1304756025:
				return 15769;
			case -1304523341:
				return 1743;
			case -1303647802:
				return 6373;
			case -1302990808:
				return 6526;
			case -1302821723:
				return 14728;
			case -1302546233:
				return 787;
			case -1302444521:
				return 15533;
			case -1302383053:
				return 6144;
			case -1301253423:
				return 6432;
			case -1301023018:
				return 653;
			case -1300943233:
				return 15797;
			case -1300766016:
				return 10239;
			case -1300550269:
				return 1379;
			case -1300496362:
				return 16089;
			case -1300337978:
				return 10759;
			case -1299079367:
				return 2322;
			case -1299014931:
				return 11732;
			case -1298938137:
				return 10238;
			case -1298864950:
				return 15855;
			case -1298766667:
				return 11619;
			case -1298651138:
				return 8046;
			case -1297925295:
				return 1464;
			case -1297807501:
				return 9360;
			case -1297493212:
				return 3722;
			case -1297328501:
				return 15953;
			case -1297293308:
				return 6812;
			case -1297016068:
				return 15999;
			case -1296956692:
				return 2547;
			case -1296694347:
				return 11230;
			case -1296461255:
				return 6803;
			case -1296259053:
				return 2710;
			case -1296005897:
				return 1275;
			case -1295720802:
				return 14503;
			case -1295531371:
				return 2033;
			case -1295261208:
				return 15579;
			case -1294892929:
				return 13759;
			case -1294831138:
				return 11630;
			case -1294758185:
				return 10758;
			case -1294702681:
				return 5220;
			case -1294625031:
				return 10133;
			case -1294598741:
				return 13300;
			case -1294201003:
				return 11929;
			case -1293894905:
				return 7970;
			case -1293373789:
				return 2769;
			case -1293288661:
				return 7611;
			case -1292970468:
				return 1360;
			case -1292673498:
				return 13601;
			case -1292599555:
				return 15997;
			case -1292280440:
				return 5989;
			case -1292118996:
				return 5403;
			case -1291760145:
				return 9628;
			case -1291682103:
				return 11416;
			case -1291535539:
				return 15223;
			case -1291375629:
				return 10621;
			case -1290910320:
				return 16192;
			case -1290901613:
				return 2823;
			case -1290802922:
				return 6695;
			case -1290168686:
				return 661;
			case -1290110877:
				return 7822;
			case -1290041448:
				return 4190;
			case -1289902346:
				return 12798;
			case -1289781131:
				return 14450;
			case -1289602882:
				return 1840;
			case -1288720073:
				return 5758;
			case -1288087643:
				return 1455;
			case -1287585527:
				return 14888;
			case -1287373433:
				return 10846;
			case -1287238416:
				return 8650;
			case -1287050084:
				return 8680;
			case -1286595666:
				return 13239;
			case -1286550667:
				return 702;
			case -1286536906:
				return 6778;
			case -1286177683:
				return 8546;
			case -1285959743:
				return 13276;
			case -1285954016:
				return 4239;
			case -1285812463:
				return 11488;
			case -1285657751:
				return 3792;
			case -1284994566:
				return 3918;
			case -1284713400:
				return 11161;
			case -1284678223:
				return 11330;
			case -1284606027:
				return 9563;
			case -1284522402:
				return 15201;
			case -1284241940:
				return 14358;
			case -1283523821:
				return 5593;
			case -1283404804:
				return 13871;
			case -1283297102:
				return 12920;
			case -1283142505:
				return 706;
			case -1283134842:
				return 5703;
			case -1283113897:
				return 4664;
			case -1282972335:
				return 218;
			case -1282891122:
				return 68;
			case -1282865174:
				return 450;
			case -1282858139:
				return 3945;
			case -1282710162:
				return 9694;
			case -1282566644:
				return 1881;
			case -1282556644:
				return 8020;
			case -1282408094:
				return 10217;
			case -1282186422:
				return 10835;
			case -1281909308:
				return 10311;
			case -1281474666:
				return 11981;
			case -1281320271:
				return 8652;
			case -1280856253:
				return 4732;
			case -1280524804:
				return 5047;
			case -1280509677:
				return 10705;
			case -1280386470:
				return 2055;
			case -1280386384:
				return 7014;
			case -1280365340:
				return 12294;
			case -1280296438:
				return 5327;
			case -1280216385:
				return 11152;
			case -1280207451:
				return 9136;
			case -1280137936:
				return 6960;
			case -1279776992:
				return 1187;
			case -1279519199:
				return 10210;
			case -1279438845:
				return 6930;
			case -1279429631:
				return 9371;
			case -1278978750:
				return 14398;
			case -1278883956:
				return 10962;
			case -1278697021:
				return 6275;
			case -1277097447:
				return 508;
			case -1276895199:
				return 4805;
			case -1276798838:
				return 6631;
			case -1276782083:
				return 1428;
			case -1276715653:
				return 11182;
			case -1276557587:
				return 5991;
			case -1275967124:
				return 3180;
			case -1275635293:
				return 9719;
			case -1275388229:
				return 13103;
			case -1275135033:
				return 3857;
			case -1274796299:
				return 4776;
			case -1274780462:
				return 10446;
			case -1274188885:
				return 2102;
			case -1273912802:
				return 7789;
			case -1273905068:
				return 10646;
			case -1273613561:
				return 15321;
			case -1272864568:
				return 6428;
			case -1272616597:
				return 5780;
			case -1272489928:
				return 9228;
			case -1272461896:
				return 15828;
			case -1272370768:
				return 5798;
			case -1272260333:
				return 8732;
			case -1272232452:
				return 4146;
			case -1271893134:
				return 1342;
			case -1271714814:
				return 10417;
			case -1271546540:
				return 16450;
			case -1271488117:
				return 13447;
			case -1270572788:
				return 6630;
			case -1270572406:
				return 15093;
			case -1269166403:
				return 1285;
			case -1268284292:
				return 3908;
			case -1268238753:
				return 11268;
			case -1268228636:
				return 15871;
			case -1268189219:
				return 2934;
			case -1267600377:
				return 6766;
			case -1267522030:
				return 6901;
			case -1267424033:
				return 11506;
			case -1267235216:
				return 9410;
			case -1267056202:
				return 2530;
			case -1266994027:
				return 10753;
			case -1266577304:
				return 1035;
			case -1266452773:
				return 8564;
			case -1266384062:
				return 12667;
			case -1266321805:
				return 7736;
			case -1266013471:
				return 7385;
			case -1265968673:
				return 9292;
			case -1265836861:
				return 4387;
			case -1265836745:
				return 14092;
			case -1265664648:
				return 657;
			case -1265565222:
				return 13475;
			case -1265179653:
				return 15204;
			case -1265030920:
				return 14664;
			case -1264880010:
				return 272;
			case -1264635988:
				return 551;
			case -1263660863:
				return 9023;
			case -1263439749:
				return 5852;
			case -1263256156:
				return 11694;
			case -1263151799:
				return 12268;
			case -1263119823:
				return 15226;
			case -1262877910:
				return 8601;
			case -1262703218:
				return 1736;
			case -1262676608:
				return 11760;
			case -1262489485:
				return 11511;
			case -1262200375:
				return 5468;
			case -1262137076:
				return 944;
			case -1261814606:
				return 14691;
			case -1261687135:
				return 7716;
			case -1261543418:
				return 6625;
			case -1261345136:
				return 10109;
			case -1260965866:
				return 8758;
			case -1260908251:
				return 12457;
			case -1260837258:
				return 11365;
			case -1260762272:
				return 7375;
			case -1260532242:
				return 1904;
			case -1260155068:
				return 784;
			case -1260080402:
				return 9510;
			case -1259848510:
				return 786;
			case -1259808609:
				return 8814;
			case -1259669570:
				return 13284;
			case -1259176408:
				return 15868;
			case -1258958223:
				return 11680;
			case -1258949556:
				return 7030;
			case -1258801034:
				return 15134;
			case -1258781899:
				return 12171;
			case -1258636061:
				return 3711;
			case -1258513246:
				return 10568;
			case -1258423618:
				return 9370;
			case -1258420990:
				return 16355;
			case -1258166427:
				return 7268;
			case -1257921924:
				return 10749;
			case -1257918042:
				return 3438;
			case -1257721066:
				return 6801;
			case -1256133002:
				return 4894;
			case -1255867618:
				return 9564;
			case -1254968043:
				return 7378;
			case -1254687170:
				return 8189;
			case -1254571563:
				return 5785;
			case -1254506270:
				return 8261;
			case -1254215822:
				return 9373;
			case -1253933351:
				return 11418;
			case -1253834373:
				return 424;
			case -1253798775:
				return 9034;
			case -1253725829:
				return 14824;
			case -1252320156:
				return 5885;
			case -1251162540:
				return 11135;
			case -1251161175:
				return 5903;
			case -1251157922:
				return 13761;
			case -1251028949:
				return 14899;
			case -1250942480:
				return 11305;
			case -1250929611:
				return 6294;
			case -1250492921:
				return 10604;
			case -1250484996:
				return 14840;
			case -1250334314:
				return 15481;
			case -1250098797:
				return 14591;
			case -1250026541:
				return 8507;
			case -1249972874:
				return 9421;
			case -1249553178:
				return 13342;
			case -1249514822:
				return 3529;
			case -1248904689:
				return 10247;
			case -1248192436:
				return 15462;
			case -1248171962:
				return 6668;
			case -1247920117:
				return 5876;
			case -1247886535:
				return 5443;
			case -1247518231:
				return 4305;
			case -1247513451:
				return 13919;
			case -1247286132:
				return 16448;
			case -1247282198:
				return 10111;
			case -1246891299:
				return 7090;
			case -1246446754:
				return 16390;
			case -1245682563:
				return 1026;
			case -1245117710:
				return 10498;
			case -1244960124:
				return 7170;
			case -1244163101:
				return 8008;
			case -1243444973:
				return 5644;
			case -1242609382:
				return 2693;
			case -1242525809:
				return 1169;
			case -1242291909:
				return 5278;
			case -1241586158:
				return 15428;
			case -1241525436:
				return 11167;
			case -1241205355:
				return 1771;
			case -1240621354:
				return 8975;
			case -1240534275:
				return 917;
			case -1240499429:
				return 16336;
			case -1240282460:
				return 12187;
			case -1240171563:
				return 1836;
			case -1240096107:
				return 8395;
			case -1240008575:
				return 12981;
			case -1239966175:
				return 6673;
			case -1239951735:
				return 9505;
			case -1239612918:
				return 16468;
			case -1239544196:
				return 12598;
			case -1239217512:
				return 4966;
			case -1239185222:
				return 13887;
			case -1238393877:
				return 11157;
			case -1238217619:
				return 10259;
			case -1238028268:
				return 6182;
			case -1237836158:
				return 8044;
			case -1237623824:
				return 705;
			case -1237489170:
				return 7005;
			case -1237426307:
				return 12053;
			case -1237287661:
				return 2173;
			case -1236822868:
				return 8211;
			case -1236574136:
				return 8599;
			case -1236507373:
				return 6654;
			case -1236406248:
				return 774;
			case -1235936814:
				return 9575;
			case -1235625056:
				return 12818;
			case -1235474749:
				return 4699;
			case -1235423304:
				return 7817;
			case -1235283995:
				return 1459;
			case -1234923324:
				return 2532;
			case -1234841870:
				return 11045;
			case -1234834052:
				return 7248;
			case -1234496646:
				return 13831;
			case -1234388065:
				return 8257;
			case -1234279562:
				return 3387;
			case -1234234638:
				return 16301;
			case -1234232702:
				return 8697;
			case -1234091243:
				return 7119;
			case -1233529347:
				return 6461;
			case -1233266567:
				return 9231;
			case -1232878405:
				return 5978;
			case -1232841278:
				return 13145;
			case -1232175273:
				return 2914;
			case -1232160416:
				return 13608;
			case -1232153190:
				return 2445;
			case -1232144966:
				return 11904;
			case -1231539219:
				return 3893;
			case -1230947661:
				return 15547;
			case -1230790601:
				return 5262;
			case -1230516683:
				return 14719;
			case -1230458423:
				return 9604;
			case -1230431605:
				return 11624;
			case -1230221375:
				return 15000;
			case -1229960953:
				return 12724;
			case -1229849880:
				return 8657;
			case -1229746323:
				return 4253;
			case -1229305488:
				return 11120;
			case -1228868259:
				return 16224;
			case -1228593949:
				return 2166;
			case -1228593897:
				return 8332;
			case -1228001529:
				return 9085;
			case -1227827232:
				return 4786;
			case -1227658532:
				return 6534;
			case -1227652540:
				return 13605;
			case -1227504926:
				return 14191;
			case -1227495599:
				return 6409;
			case -1227135146:
				return 3656;
			case -1226941673:
				return 11570;
			case -1226897932:
				return 816;
			case -1226784982:
				return 8239;
			case -1226753492:
				return 6245;
			case -1226098724:
				return 9413;
			case -1225783941:
				return 9304;
			case -1224766892:
				return 15771;
			case -1224698023:
				return 6339;
			case -1224327068:
				return 7466;
			case -1224242773:
				return 12145;
			case -1223741461:
				return 11373;
			case -1223489959:
				return 9538;
			case -1223367138:
				return 11807;
			case -1223217513:
				return 14046;
			case -1222479678:
				return 16075;
			case -1222108912:
				return 16140;
			case -1221751333:
				return 10982;
			case -1221657244:
				return 10767;
			case -1221640793:
				return 12237;
			case -1221341425:
				return 16295;
			case -1220924877:
				return 3188;
			case -1220266182:
				return 12267;
			case -1220031551:
				return 8231;
			case -1219918888:
				return 7777;
			case -1219864172:
				return 16402;
			case -1219301969:
				return 16201;
			case -1219055838:
				return 14163;
			case -1218386612:
				return 879;
			case -1218323287:
				return 7841;
			case -1217989058:
				return 2178;
			case -1217232104:
				return 11358;
			case -1216910965:
				return 12049;
			case -1216485179:
				return 4152;
			case -1215967624:
				return 4817;
			case -1215514278:
				return 1670;
			case -1215506615:
				return 7715;
			case -1215335609:
				return 2194;
			case -1214712421:
				return 571;
			case -1214259478:
				return 6747;
			case -1214246086:
				return 12172;
			case -1214245307:
				return 11258;
			case -1213601266:
				return 14829;
			case -1213330222:
				return 11925;
			case -1213144098:
				return 7518;
			case -1213055802:
				return 11117;
			case -1212802028:
				return 3450;
			case -1212357183:
				return 9098;
			case -1212348817:
				return 11984;
			case -1212022287:
				return 3837;
			case -1212018485:
				return 7504;
			case -1211827225:
				return 2226;
			case -1211695061:
				return 2931;
			case -1211592580:
				return 9721;
			case -1211566332:
				return 14753;
			case -1211564609:
				return 3728;
			case -1211054765:
				return 9234;
			case -1210546580:
				return 14746;
			case -1210450236:
				return 1052;
			case -1210280878:
				return 1613;
			case -1209948823:
				return 15348;
			case -1209917407:
				return 5890;
			case -1209276681:
				return 8014;
			case -1209035788:
				return 13186;
			case -1208814201:
				return 16203;
			case -1208500389:
				return 14136;
			case -1208380805:
				return 1667;
			case -1208253755:
				return 5587;
			case -1208207330:
				return 15664;
			case -1207813492:
				return 7416;
			case -1207637149:
				return 14167;
			case -1207589168:
				return 13102;
			case -1207448045:
				return 9544;
			case -1207039982:
				return 3505;
			case -1206520982:
				return 11093;
			case -1206299098:
				return 16153;
			case -1206166879:
				return 5068;
			case -1205874435:
				return 10669;
			case -1205788983:
				return 4955;
			case -1205619340:
				return 166;
			case -1205527547:
				return 8386;
			case -1205459325:
				return 11355;
			case -1205442087:
				return 8017;
			case -1205004683:
				return 858;
			case -1203850357:
				return 10778;
			case -1203805268:
				return 9262;
			case -1203782423:
				return 4227;
			case -1203233340:
				return 4554;
			case -1202590500:
				return 11391;
			case -1202554589:
				return 6342;
			case -1202329112:
				return 10560;
			case -1202293274:
				return 13445;
			case -1202096295:
				return 11752;
			case -1201959277:
				return 7759;
			case -1201608136:
				return 1519;
			case -1201289279:
				return 10709;
			case -1201148795:
				return 8849;
			case -1201108131:
				return 6489;
			case -1200334615:
				return 10980;
			case -1200234060:
				return 4675;
			case -1199773720:
				return 539;
			case -1199458535:
				return 12223;
			case -1198552630:
				return 13483;
			case -1198250992:
				return 5950;
			case -1198196630:
				return 1893;
			case -1197829972:
				return 8518;
			case -1197309615:
				return 12357;
			case -1197246749:
				return 6798;
			case -1196557982:
				return 10670;
			case -1196447126:
				return 14365;
			case -1196274583:
				return 15780;
			case -1196088975:
				return 3381;
			case -1195933998:
				return 586;
			case -1195720027:
				return 1983;
			case -1195443830:
				return 4545;
			case -1195027036:
				return 4192;
			case -1194982251:
				return 11315;
			case -1194833913:
				return 11383;
			case -1194354655:
				return 7889;
			case -1194329592:
				return 13365;
			case -1194133100:
				return 5307;
			case -1193734399:
				return 7081;
			case -1193291066:
				return 2418;
			case -1193279071:
				return 3633;
			case -1192574945:
				return 5239;
			case -1192518488:
				return 13266;
			case -1192427617:
				return 7251;
			case -1192322885:
				return 2120;
			case -1191803341:
				return 11617;
			case -1191531435:
				return 12797;
			case -1191338746:
				return 12119;
			case -1190931709:
				return 10810;
			case -1190893715:
				return 12002;
			case -1190396102:
				return 2584;
			case -1190110315:
				return 4623;
			case -1189971850:
				return 11555;
			case -1189470495:
				return 6601;
			case -1189368951:
				return 15377;
			case -1189094554:
				return 5333;
			case -1189073011:
				return 6595;
			case -1189018675:
				return 2787;
			case -1188809568:
				return 11042;
			case -1188802473:
				return 526;
			case -1188778670:
				return 10639;
			case -1188580249:
				return 292;
			case -1187641389:
				return 12606;
			case -1187278229:
				return 12689;
			case -1187204055:
				return 15189;
			case -1187196165:
				return 4582;
			case -1186962242:
				return 9233;
			case -1186302572:
				return 27;
			case -1186029792:
				return 12816;
			case -1185497513:
				return 6455;
			case -1185467605:
				return 7660;
			case -1184923125:
				return 9001;
			case -1184719108:
				return 15838;
			case -1184103355:
				return 4234;
			case -1184101639:
				return 1720;
			case -1184049189:
				return 11451;
			case -1183999027:
				return 6824;
			case -1183241218:
				return 12608;
			case -1183226766:
				return 10695;
			case -1182983171:
				return 14557;
			case -1182701981:
				return 10914;
			case -1182490845:
				return 13987;
			case -1182404303:
				return 16030;
			case -1182368893:
				return 8470;
			case -1182047209:
				return 8184;
			case -1181664026:
				return 7419;
			case -1181512679:
				return 11581;
			case -1181470723:
				return 12994;
			case -1181226561:
				return 8555;
			case -1181161469:
				return 14639;
			case -1181121603:
				return 960;
			case -1180787150:
				return 13609;
			case -1180707366:
				return 3903;
			case -1180704000:
				return 6186;
			case -1180684188:
				return 16435;
			case -1180607295:
				return 5940;
			case -1180427609:
				return 14686;
			case -1180203145:
				return 11291;
			case -1179314717:
				return 11015;
			case -1179297021:
				return 14095;
			case -1179266405:
				return 1192;
			case -1179003145:
				return 3586;
			case -1178968661:
				return 8486;
			case -1178893196:
				return 9323;
			case -1178819197:
				return 7580;
			case -1178748499:
				return 3267;
			case -1178698441:
				return 10192;
			case -1178474236:
				return 4036;
			case -1178174440:
				return 12274;
			case -1177733273:
				return 11869;
			case -1177719824:
				return 2291;
			case -1177561480:
				return 6637;
			case -1177504283:
				return 7422;
			case -1177487129:
				return 7088;
			case -1176999271:
				return 10665;
			case -1176604732:
				return 10901;
			case -1176161525:
				return 1879;
			case -1175865481:
				return 3955;
			case -1175852879:
				return 15510;
			case -1175738307:
				return 7657;
			case -1175223733:
				return 847;
			case -1174986013:
				return 1883;
			case -1174489568:
				return 3038;
			case -1173432997:
				return 1336;
			case -1172990218:
				return 9319;
			case -1172744195:
				return 10086;
			case -1172163183:
				return 3796;
			case -1171553006:
				return 3621;
			case -1171108326:
				return 9392;
			case -1170154706:
				return 1485;
			case -1170118274:
				return 14505;
			case -1170013582:
				return 687;
			case -1170008529:
				return 11552;
			case -1169679189:
				return 10275;
			case -1169534400:
				return 8206;
			case -1169360812:
				return 1314;
			case -1169191688:
				return 13498;
			case -1169159654:
				return 10521;
			case -1168222037:
				return 1059;
			case -1168186061:
				return 13803;
			case -1168182475:
				return 4858;
			case -1168018212:
				return 9631;
			case -1167774274:
				return 16008;
			case -1167667686:
				return 3543;
			case -1167561544:
				return 5383;
			case -1167401893:
				return 12987;
			case -1165673404:
				return 7878;
			case -1165540965:
				return 4758;
			case -1165453036:
				return 2279;
			case -1165329624:
				return 14379;
			case -1165068922:
				return 4027;
			case -1164547429:
				return 7012;
			case -1164542392:
				return 8508;
			case -1164043007:
				return 6412;
			case -1163831424:
				return 8881;
			case -1163802868:
				return 12815;
			case -1163661952:
				return 2958;
			case -1163483559:
				return 12009;
			case -1162796591:
				return 6892;
			case -1162117779:
				return 3501;
			case -1162107730:
				return 4969;
			case -1161832176:
				return 15284;
			case -1161781409:
				return 15590;
			case -1161335257:
				return 14030;
			case -1161159757:
				return 6609;
			case -1160940577:
				return 8877;
			case -1160911094:
				return 13263;
			case -1160757008:
				return 15413;
			case -1160439615:
				return 5930;
			case -1160317769:
				return 3538;
			case -1160158290:
				return 15537;
			case -1160142962:
				return 371;
			case -1158685986:
				return 4064;
			case -1158386201:
				return 10089;
			case -1158319268:
				return 6728;
			case -1158279047:
				return 12931;
			case -1157809126:
				return 15393;
			case -1157235627:
				return 2062;
			case -1157184911:
				return 12205;
			case -1156281048:
				return 1373;
			case -1156210051:
				return 4040;
			case -1156035336:
				return 1058;
			case -1155649582:
				return 8434;
			case -1155520715:
				return 15200;
			case -1155109258:
				return 4206;
			case -1154866153:
				return 3258;
			case -1154531481:
				return 9600;
			case -1154410747:
				return 9251;
			case -1154406788:
				return 14675;
			case -1154324353:
				return 14236;
			case -1154205140:
				return 15312;
			case -1154157049:
				return 3675;
			case -1154137714:
				return 15102;
			case -1154136662:
				return 3168;
			case -1153999133:
				return 15913;
			case -1153565327:
				return 12508;
			case -1153461444:
				return 12282;
			case -1153135871:
				return 5085;
			case -1152923803:
				return 12260;
			case -1152743579:
				return 7743;
			case -1152630772:
				return 6421;
			case -1152226383:
				return 3173;
			case -1151912385:
				return 9701;
			case -1151906408:
				return 15460;
			case -1151699403:
				return 1526;
			case -1151681103:
				return 1354;
			case -1151679288:
				return 6593;
			case -1151393148:
				return 2022;
			case -1151385890:
				return 12869;
			case -1151106175:
				return 7212;
			case -1151044824:
				return 111;
			case -1151041406:
				return 10769;
			case -1150883909:
				return 4861;
			case -1150691748:
				return 2873;
			case -1150462894:
				return 16001;
			case -1150280371:
				return 1992;
			case -1150158315:
				return 11556;
			case -1149999295:
				return 15362;
			case -1149942904:
				return 5095;
			case -1149728937:
				return 4672;
			case -1149199295:
				return 6589;
			case -1148820980:
				return 16403;
			case -1148800595:
				return 3469;
			case -1148798908:
				return 4685;
			case -1148695876:
				return 2738;
			case -1148381454:
				return 5404;
			case -1148260763:
				return 4480;
			case -1147548518:
				return 7110;
			case -1147265522:
				return 9105;
			case -1147073925:
				return 4189;
			case -1147038355:
				return 12140;
			case -1146861563:
				return 14307;
			case -1146190748:
				return 13032;
			case -1145139382:
				return 4213;
			case -1145133781:
				return 10530;
			case -1144823557:
				return 4622;
			case -1144663425:
				return 16300;
			case -1143398950:
				return 14775;
			case -1142957657:
				return 9322;
			case -1142861801:
				return 14651;
			case -1142196782:
				return 4945;
			case -1142172174:
				return 8815;
			case -1142004840:
				return 13412;
			case -1141678020:
				return 3612;
			case -1141668734:
				return 3016;
			case -1141177996:
				return 1004;
			case -1140701917:
				return 5140;
			case -1140650619:
				return 14603;
			case -1140616583:
				return 10097;
			case -1140320984:
				return 5906;
			case -1140102327:
				return 7824;
			case -1140072025:
				return 9537;
			case -1139141183:
				return 2779;
			case -1138928802:
				return 8809;
			case -1138367565:
				return 11823;
			case -1138338597:
				return 3275;
			case -1137577808:
				return 12041;
			case -1137423860:
				return 6707;
			case -1137146769:
				return 11721;
			case -1137081966:
				return 2213;
			case -1136594860:
				return 5190;
			case -1136370789:
				return 1503;
			case -1136353171:
				return 2056;
			case -1135604739:
				return 12464;
			case -1135378761:
				return 15231;
			case -1135312041:
				return 16047;
			case -1135283482:
				return 12704;
			case -1135056921:
				return 2900;
			case -1134756023:
				return 16338;
			case -1134595798:
				return 590;
			case -1134539792:
				return 13281;
			case -1134449699:
				return 14727;
			case -1133944559:
				return 15543;
			case -1133823418:
				return 2439;
			case -1133410753:
				return 13231;
			case -1133284219:
				return 14078;
			case -1132982862:
				return 11453;
			case -1132821599:
				return 12059;
			case -1132527822:
				return 10554;
			case -1132427836:
				return 685;
			case -1132394881:
				return 1935;
			case -1131907762:
				return 13301;
			case -1131882036:
				return 12662;
			case -1131877174:
				return 13476;
			case -1131590833:
				return 7861;
			case -1131495003:
				return 8660;
			case -1131446619:
				return 11753;
			case -1131120857:
				return 1909;
			case -1130307022:
				return 660;
			case -1130235754:
				return 985;
			case -1130059812:
				return 14920;
			case -1129951730:
				return 7658;
			case -1129732883:
				return 3966;
			case -1129697292:
				return 5286;
			case -1129683551:
				return 3393;
			case -1129501997:
				return 13423;
			case -1129106015:
				return 6890;
			case -1128805804:
				return 10747;
			case -1128747197:
				return 1729;
			case -1128402747:
				return 6876;
			case -1128087630:
				return 1507;
			case -1127958042:
				return 9395;
			case -1127897866:
				return 4248;
			case -1127742830:
				return 10214;
			case -1127689377:
				return 16124;
			case -1127655651:
				return 13197;
			case -1127201651:
				return 9780;
			case -1127014626:
				return 10351;
			case -1126885751:
				return 1193;
			case -1126784041:
				return 4590;
			case -1126181029:
				return 6600;
			case -1125888396:
				return 6095;
			case -1125701617:
				return 4359;
			case -1125147730:
				return 4363;
			case -1125104779:
				return 15798;
			case -1124799646:
				return 3303;
			case -1124798335:
				return 979;
			case -1124266369:
				return 14507;
			case -1123746266:
				return 11285;
			case -1123314913:
				return 8588;
			case -1123243113:
				return 12851;
			case -1122555364:
				return 3791;
			case -1122490283:
				return 3151;
			case -1122164665:
				return 2847;
			case -1121997829:
				return 9562;
			case -1121552248:
				return 6237;
			case -1121288254:
				return 13682;
			case -1121060312:
				return 7026;
			case -1119540215:
				return 234;
			case -1119528049:
				return 12863;
			case -1119301676:
				return 14892;
			case -1119043666:
				return 6645;
			case -1118594538:
				return 2924;
			case -1118145814:
				return 5209;
			case -1117900974:
				return 9552;
			case -1117793738:
				return 14189;
			case -1117670337:
				return 7493;
			case -1117594370:
				return 12512;
			case -1117460231:
				return 3123;
			case -1117422524:
				return 6215;
			case -1116266380:
				return 5001;
			case -1116138991:
				return 15028;
			case -1115821791:
				return 12999;
			case -1115688755:
				return 1114;
			case -1115450693:
				return 1451;
			case -1114933352:
				return 10225;
			case -1114439842:
				return 4895;
			case -1114124239:
				return 13472;
			case -1113978214:
				return 13846;
			case -1113906479:
				return 11686;
			case -1113583116:
				return 4775;
			case -1113064042:
				return 9094;
			case -1113021829:
				return 4943;
			case -1112976032:
				return 4105;
			case -1112542530:
				return 128;
			case -1112408877:
				return 11715;
			case -1112289552:
				return 1200;
			default:
				break;
		}
		if (iParam1 >= 1)
		{
		}
		return -1;
	}
	if (iParam0 <= -841010529)
	{
		switch (iParam0)
		{
			case -1112260815:
				return 15109;
			case -1112232531:
				return 6674;
			case -1111967501:
				return 3080;
			case -1111898676:
				return 13291;
			case -1111682267:
				return 9375;
			case -1110583329:
				return 9951;
			case -1110548311:
				return 7198;
			case -1110501816:
				return 4246;
			case -1110186928:
				return 9948;
			case -1110094383:
				return 108;
			case -1109779002:
				return 6035;
			case -1109568626:
				return 12086;
			case -1109555030:
				return 13572;
			case -1107985856:
				return 13218;
			case -1107865536:
				return 2263;
			case -1107193964:
				return 11474;
			case -1107142092:
				return 11000;
			case -1106947528:
				return 4435;
			case -1106525805:
				return 1668;
			case -1106345571:
				return 12520;
			case -1106339162:
				return 10132;
			case -1106216969:
				return 17;
			case -1105571076:
				return 8842;
			case -1105536025:
				return 11359;
			case -1105355522:
				return 8855;
			case -1105255470:
				return 4122;
			case -1104889096:
				return 12058;
			case -1104394799:
				return 7136;
			case -1104252664:
				return 2052;
			case -1103963519:
				return 13841;
			case -1103629006:
				return 1038;
			case -1103269832:
				return 1932;
			case -1103102641:
				return 1557;
			case -1103060970:
				return 3644;
			case -1102830493:
				return 3280;
			case -1102425647:
				return 10037;
			case -1102335991:
				return 12337;
			case -1101994226:
				return 556;
			case -1101883765:
				return 15308;
			case -1101740114:
				return 1548;
			case -1101656676:
				return 13141;
			case -1101223796:
				return 2007;
			case -1100953088:
				return 16026;
			case -1100888651:
				return 229;
			case -1100700248:
				return 4472;
			case -1100387700:
				return 14399;
			case -1099835729:
				return 12149;
			case -1099824882:
				return 10371;
			case -1099727136:
				return 2623;
			case -1098779307:
				return 7065;
			case -1098537663:
				return 4104;
			case -1098441944:
				return 14726;
			case -1098117563:
				return 1012;
			case -1096976415:
				return 16247;
			case -1096780064:
				return 15628;
			case -1096778781:
				return 15971;
			case -1096537901:
				return 10308;
			case -1095945968:
				return 4029;
			case -1095171724:
				return 1241;
			case -1095145586:
				return 13332;
			case -1095105300:
				return 13907;
			case -1094933931:
				return 1210;
			case -1094820156:
				return 3595;
			case -1093930538:
				return 13662;
			case -1093833909:
				return 12755;
			case -1093732866:
				return 2830;
			case -1093637570:
				return 8932;
			case -1093260343:
				return 3155;
			case -1093147928:
				return 12227;
			case -1093011875:
				return 4153;
			case -1092757007:
				return 5226;
			case -1092554601:
				return 5516;
			case -1092450505:
				return 5072;
			case -1092024524:
				return 10249;
			case -1091915818:
				return 8326;
			case -1091870862:
				return 5956;
			case -1091515551:
				return 8520;
			case -1090886849:
				return 7641;
			case -1090280091:
				return 15330;
			case -1090048593:
				return 9248;
			case -1089964621:
				return 2875;
			case -1089443358:
				return 10257;
			case -1089153516:
				return 9081;
			case -1089076915:
				return 9644;
			case -1088485514:
				return 16057;
			case -1087487592:
				return 7561;
			case -1086499938:
				return 5998;
			case -1086255030:
				return 14801;
			case -1086206609:
				return 1977;
			case -1085698589:
				return 3559;
			case -1085447184:
				return 11922;
			case -1085352235:
				return 3971;
			case -1085258063:
				return 9513;
			case -1085138714:
				return 4910;
			case -1085083542:
				return 8229;
			case -1084854632:
				return 11786;
			case -1084705395:
				return 12110;
			case -1084397164:
				return 14645;
			case -1084108374:
				return 2555;
			case -1083455389:
				return 1773;
			case -1083370074:
				return 12151;
			case -1083354827:
				return 3324;
			case -1083315313:
				return 8567;
			case -1082942464:
				return 11329;
			case -1082574663:
				return 9459;
			case -1081837586:
				return 10105;
			case -1081700889:
				return 12875;
			case -1081621320:
				return 4368;
			case -1081501637:
				return 10000;
			case -1081154924:
				return 15453;
			case -1080492623:
				return 4112;
			case -1080306068:
				return 8513;
			case -1080299709:
				return 8130;
			case -1079848222:
				return 10679;
			case -1079711034:
				return 4260;
			case -1079607444:
				return 12787;
			case -1079106601:
				return 3405;
			case -1078995775:
				return 3689;
			case -1078808012:
				return 3581;
			case -1078696833:
				return 1175;
			case -1078262089:
				return 456;
			case -1077997426:
				return 12751;
			case -1077993919:
				return 7674;
			case -1077927008:
				return 10352;
			case -1077146520:
				return 3419;
			case -1076930207:
				return 1180;
			case -1076508705:
				return 14748;
			case -1076294934:
				return 15138;
			case -1076093654:
				return 15371;
			case -1075930333:
				return 4941;
			case -1075652759:
				return 9493;
			case -1075276881:
				return 728;
			case -1075223299:
				return 11515;
			case -1075097399:
				return 2380;
			case -1074960068:
				return 13257;
			case -1074884633:
				return 10606;
			case -1074866525:
				return 4810;
			case -1074075782:
				return 8574;
			case -1073876584:
				return 10779;
			case -1073770160:
				return 6496;
			case -1073706476:
				return 5316;
			case -1073218281:
				return 3657;
			case -1073127636:
				return 7329;
			case -1072715734:
				return 15914;
			case -1072293675:
				return 12085;
			case -1072062005:
				return 6073;
			case -1071561496:
				return 12557;
			case -1070733351:
				return 1018;
			case -1070459848:
				return 15156;
			case -1070059857:
				return 12112;
			case -1069981674:
				return 9048;
			case -1069761451:
				return 12697;
			case -1069615085:
				return 5988;
			case -1069246630:
				return 1426;
			case -1069142655:
				return 95;
			case -1068749448:
				return 6699;
			case -1067758846:
				return 4118;
			case -1067732700:
				return 12387;
			case -1067714914:
				return 9952;
			case -1067440298:
				return 3699;
			case -1067338663:
				return 15050;
			case -1067099229:
				return 13494;
			case -1067017031:
				return 15788;
			case -1066772880:
				return 4265;
			case -1066766150:
				return 3019;
			case -1066534716:
				return 257;
			case -1066528770:
				return 11446;
			case -1066291505:
				return 7617;
			case -1066268717:
				return 11023;
			case -1065475253:
				return 1890;
			case -1065042521:
				return 7607;
			case -1064861744:
				return 666;
			case -1064425691:
				return 2627;
			case -1064377332:
				return 2611;
			case -1064149940:
				return 2692;
			case -1063962359:
				return 10438;
			case -1063943215:
				return 12320;
			case -1063450035:
				return 8236;
			case -1063227574:
				return 9525;
			case -1063137731:
				return 14679;
			case -1063062784:
				return 10696;
			case -1062865157:
				return 15545;
			case -1062516033:
				return 3745;
			case -1062337481:
				return 5990;
			case -1061888340:
				return 3682;
			case -1061494370:
				return 3137;
			case -1061189081:
				return 11616;
			case -1060784210:
				return 10704;
			case -1060653527:
				return 9763;
			case -1060619025:
				return 7314;
			case -1060610082:
				return 12336;
			case -1060488278:
				return 2324;
			case -1060291793:
				return 10296;
			case -1059447711:
				return 5379;
			case -1058564818:
				return 12800;
			case -1058315324:
				return 3241;
			case -1058244789:
				return 621;
			case -1057390766:
				return 4094;
			case -1057359468:
				return 13115;
			case -1056699092:
				return 15860;
			case -1056430086:
				return 15723;
			case -1056114408:
				return 10290;
			case -1055906010:
				return 10602;
			case -1055670841:
				return 10376;
			case -1055424279:
				return 5024;
			case -1055207376:
				return 11143;
			case -1055123956:
				return 6217;
			case -1054898448:
				return 5353;
			case -1054538007:
				return 13571;
			case -1054454830:
				return 151;
			case -1053639984:
				return 14643;
			case -1053305039:
				return 14842;
			case -1053058774:
				return 11242;
			case -1053024256:
				return 10687;
			case -1051745417:
				return 448;
			case -1050501139:
				return 510;
			case -1049920600:
				return 14826;
			case -1049596105:
				return 10654;
			case -1049237750:
				return 15222;
			case -1049220120:
				return 4382;
			case -1049141258:
				return 3337;
			case -1048886757:
				return 12026;
			case -1048702951:
				return 4068;
			case -1048683333:
				return 14272;
			case -1048570989:
				return 2197;
			case -1048087367:
				return 309;
			case -1047984804:
				return 142;
			case -1047792830:
				return 11133;
			case -1047359107:
				return 15261;
			case -1047145566:
				return 5142;
			case -1047115350:
				return 15221;
			case -1046855415:
				return 9517;
			case -1046080946:
				return 5887;
			case -1045835163:
				return 4089;
			case -1045813766:
				return 13106;
			case -1045778770:
				return 1990;
			case -1045429584:
				return 6307;
			case -1045380799:
				return 4555;
			case -1045023714:
				return 15429;
			case -1044820289:
				return 9587;
			case -1044626919:
				return 4132;
			case -1044447717:
				return 3254;
			case -1044262112:
				return 833;
			case -1043865229:
				return 3474;
			case -1043581921:
				return 14324;
			case -1043573168:
				return 2840;
			case -1043434543:
				return 6292;
			case -1042993920:
				return 8142;
			case -1042866933:
				return 1137;
			case -1042794908:
				return 276;
			case -1042394204:
				return 7998;
			case -1042371315:
				return 13071;
			case -1042032443:
				return 258;
			case -1041505544:
				return 11563;
			case -1040702738:
				return 993;
			case -1040506474:
				return 5347;
			case -1040355700:
				return 1784;
			case -1040348269:
				return 9302;
			case -1039947691:
				return 9553;
			case -1039920027:
				return 4884;
			case -1039531072:
				return 14807;
			case -1039358518:
				return 3206;
			case -1039351035:
				return 8425;
			case -1039032358:
				return 1294;
			case -1038759368:
				return 8084;
			case -1038625586:
				return 6038;
			case -1038436471:
				return 14678;
			case -1038420333:
				return 10552;
			case -1037565097:
				return 3880;
			case -1037465607:
				return 13611;
			case -1037293601:
				return 3572;
			case -1037016837:
				return 2945;
			case -1036850193:
				return 3999;
			case -1036537073:
				return 15867;
			case -1036445267:
				return 7203;
			case -1035964552:
				return 16408;
			case -1035800652:
				return 12590;
			case -1035439448:
				return 12117;
			case -1035392395:
				return 2333;
			case -1035241313:
				return 14118;
			case -1034911247:
				return 16374;
			case -1034781092:
				return 4646;
			case -1034739667:
				return 2281;
			case -1034712723:
				return 13612;
			case -1034286071:
				return 3876;
			case -1034197438:
				return 6499;
			case -1033948671:
				return 8623;
			case -1033903759:
				return 14537;
			case -1033712895:
				return 7003;
			case -1033498199:
				return 5194;
			case -1032231746:
				return 14460;
			case -1031703448:
				return 6396;
			case -1031510515:
				return 11026;
			case -1031399461:
				return 3042;
			case -1031259823:
				return 8801;
			case -1031102148:
				return 5011;
			case -1030994765:
				return 10453;
			case -1030948675:
				return 8127;
			case -1030586136:
				return 14804;
			case -1030319558:
				return 13191;
			case -1029469574:
				return 13130;
			case -1029277326:
				return 14601;
			case -1029181913:
				return 8783;
			case -1029021629:
				return 4745;
			case -1028715658:
				return 13915;
			case -1028406256:
				return 11207;
			case -1028267229:
				return 12497;
			case -1028170431:
				return 14766;
			case -1028088218:
				return 5172;
			case -1028075925:
				return 14599;
			case -1027715427:
				return 6870;
			case -1027584093:
				return 1111;
			case -1027346982:
				return 8385;
			case -1027306309:
				return 2042;
			case -1027186226:
				return 6024;
			case -1026692522:
				return 2685;
			case -1026424578:
				return 14492;
			case -1025974149:
				return 733;
			case -1025916990:
				return 8533;
			case -1025740342:
				return 5634;
			case -1024648911:
				return 12193;
			case -1024573493:
				return 6161;
			case -1023971841:
				return 1689;
			case -1023910641:
				return 575;
			case -1023344578:
				return 9260;
			case -1023099315:
				return 4493;
			case -1022779569:
				return 5694;
			case -1022577826:
				return 3414;
			case -1022512657:
				return 9648;
			case -1022390463:
				return 1843;
			case -1022192669:
				return 5832;
			case -1021910969:
				return 13767;
			case -1021865352:
				return 3517;
			case -1021452676:
				return 13220;
			case -1021362867:
				return 16164;
			case -1021255363:
				return 11037;
			case -1020735879:
				return 5485;
			case -1020123993:
				return 15528;
			case -1020069388:
				return 804;
			case -1019997408:
				return 13988;
			case -1019839533:
				return 2305;
			case -1019761233:
				return 11788;
			case -1019132477:
				return 11028;
			case -1019003665:
				return 15783;
			case -1018150456:
				return 4220;
			case -1018099626:
				return 11808;
			case -1017963592:
				return 3495;
			case -1017855075:
				return 3358;
			case -1017332939:
				return 824;
			case -1016611348:
				return 13004;
			case -1016507373:
				return 3095;
			case -1016355603:
				return 10090;
			case -1016095860:
				return 15568;
			case -1015956523:
				return 12445;
			case -1015936795:
				return 4429;
			case -1015852380:
				return 8869;
			case -1015665440:
				return 13544;
			case -1015157216:
				return 11564;
			case -1014073269:
				return 5063;
			case -1014005016:
				return 6407;
			case -1013848025:
				return 7206;
			case -1013636887:
				return 2680;
			case -1013545238:
				return 13334;
			case -1013153969:
				return 7018;
			case -1013058546:
				return 4033;
			case -1012504675:
				return 10029;
			case -1012405321:
				return 1076;
			case -1012195445:
				return 4673;
			case -1011583974:
				return 3609;
			case -1011491632:
				return 5331;
			case -1011453599:
				return 2927;
			case -1011228908:
				return 16135;
			case -1010935397:
				return 1848;
			case -1010466977:
				return 5126;
			case -1010246744:
				return 14190;
			case -1010154358:
				return 8890;
			case -1009916075:
				return 1866;
			case -1009821571:
				return 10965;
			case -1009767383:
				return 11343;
			case -1009655649:
				return 662;
			case -1008911810:
				return 4728;
			case -1008847849:
				return 7548;
			case -1008616424:
				return 16134;
			case -1008489448:
				return 13258;
			case -1008287740:
				return 14445;
			case -1008088439:
				return 5174;
			case -1008034454:
				return 13407;
			case -1008027200:
				return 7313;
			case -1007822810:
				return 3293;
			case -1006516120:
				return 2857;
			case -1006406225:
				return 13157;
			case -1006095118:
				return 5692;
			case -1005911451:
				return 14439;
			case -1005545109:
				return 9884;
			case -1005444142:
				return 8150;
			case -1005443279:
				return 5160;
			case -1005179481:
				return 16225;
			case -1005172683:
				return 2633;
			case -1004698616:
				return 12804;
			case -1004594895:
				return 2717;
			case -1004125172:
				return 9381;
			case -1003902317:
				return 12599;
			case -1003872365:
				return 1698;
			case -1003692821:
				return 9235;
			case -1003616053:
				return 14549;
			case -1003254172:
				return 12213;
			case -1002681891:
				return 13411;
			case -1002525623:
				return 15047;
			case -1001975495:
				return 11063;
			case -1001770149:
				return 950;
			case -1001630707:
				return 11320;
			case -1001604868:
				return 4537;
			case -1001399461:
				return 9795;
			case -1001049990:
				return 7722;
			case -1000997517:
				return 7554;
			case -1000916748:
				return 5670;
			case -1000762794:
				return 2454;
			case -1000708375:
				return 2191;
			case -1000503378:
				return 15449;
			case -1000384740:
				return 11926;
			case -1000380889:
				return 15825;
			case -1000365413:
				return 2544;
			case -1000093363:
				return 16042;
			case -999607173:
				return 3648;
			case -999606271:
				return 9314;
			case -999004291:
				return 14478;
			case -998778990:
				return 8983;
			case -997702018:
				return 4957;
			case -997552329:
				return 9938;
			case -997503794:
				return 12523;
			case -997451465:
				return 5318;
			case -996600076:
				return 5834;
			case -996131768:
				return 2965;
			case -996126111:
				return 1307;
			case -995801271:
				return 14301;
			case -994042190:
				return 1032;
			case -994025462:
				return 15343;
			case -993682732:
				return 15904;
			case -993390366:
				return 6556;
			case -993239322:
				return 16307;
			case -992835524:
				return 12976;
			case -992397747:
				return 7678;
			case -992390822:
				return 9568;
			case -992268031:
				return 15440;
			case -992264861:
				return 9501;
			case -992245794:
				return 3879;
			case -992208308:
				return 13139;
			case -992131790:
				return 5519;
			case -991390836:
				return 5121;
			case -990397937:
				return 1208;
			case -990183135:
				return 4284;
			case -989609930:
				return 4617;
			case -989272598:
				return 9745;
			case -989239528:
				return 2031;
			case -989220241:
				return 14856;
			case -989189476:
				return 15495;
			case -988822064:
				return 14453;
			case -988752973:
				return 11681;
			case -988710341:
				return 3304;
			case -988626510:
				return 8333;
			case -988537915:
				return 2995;
			case -988336484:
				return 5881;
			case -988033692:
				return 11478;
			case -987625046:
				return 680;
			case -987617948:
				return 13331;
			case -986185207:
				return 12306;
			case -985945029:
				return 14796;
			case -985924776:
				return 14286;
			case -985856147:
				return 14814;
			case -985374395:
				return 14255;
			case -984934151:
				return 7908;
			case -983719561:
				return 16083;
			case -983269631:
				return 10135;
			case -983249040:
				return 1833;
			case -983062903:
				return 2449;
			case -982970173:
				return 11873;
			case -982904156:
				return 9076;
			case -982898598:
				return 10137;
			case -982773324:
				return 9280;
			case -982524391:
				return 676;
			case -982457342:
				return 13308;
			case -982189432:
				return 6802;
			case -981545087:
				return 3956;
			case -981224294:
				return 6162;
			case -980868637:
				return 1425;
			case -980582366:
				return 6642;
			case -980215975:
				return 10808;
			case -980114607:
				return 11345;
			case -978911579:
				return 10486;
			case -978651539:
				return 8506;
			case -978187071:
				return 8224;
			case -977688234:
				return 10264;
			case -977542686:
				return 7159;
			case -977506060:
				return 3959;
			case -977480216:
				return 16143;
			case -976891307:
				return 14540;
			case -975984487:
				return 1030;
			case -975965136:
				return 6927;
			case -975960950:
				return 5815;
			case -975920629:
				return 5646;
			case -975913766:
				return 10542;
			case -975307408:
				return 9718;
			case -975237890:
				return 16127;
			case -974595649:
				return 2142;
			case -974361766:
				return 9120;
			case -974321266:
				return 5725;
			case -974239214:
				return 11504;
			case -974205616:
				return 10070;
			case -974192123:
				return 3773;
			case -973893033:
				return 12030;
			case -973839534:
				return 10079;
			case -973797129:
				return 5013;
			case -973450025:
				return 11901;
			case -972837176:
				return 5358;
			case -972759515:
				return 11046;
			case -972643259:
				return 16309;
			case -972590214:
				return 8963;
			case -972438380:
				return 7706;
			case -972303745:
				return 9439;
			case -972291366:
				return 10216;
			case -972283304:
				return 10533;
			case -971643682:
				return 15489;
			case -971619579:
				return 8316;
			case -971618845:
				return 7910;
			case -971489621:
				return 7872;
			case -971377103:
				return 13531;
			case -971322684:
				return 10515;
			case -971277295:
				return 10506;
			case -971042971:
				return 1986;
			case -970931344:
				return 9731;
			case -970615230:
				return 11181;
			case -970236810:
				return 10263;
			case -969819655:
				return 15334;
			case -969472485:
				return 3600;
			case -969464097:
				return 15291;
			case -969349845:
				return 11137;
			case -969104898:
				return 12550;
			case -968878239:
				return 776;
			case -968420256:
				return 6550;
			case -968014488:
				return 13554;
			case -967333571:
				return 3112;
			case -967237010:
				return 12095;
			case -966953657:
				return 4768;
			case -966486386:
				return 7084;
			case -966136912:
				return 7185;
			case -966044906:
				return 632;
			case -965956337:
				return 5548;
			case -965739938:
				return 8747;
			case -965252227:
				return 723;
			case -965175188:
				return 8414;
			case -965121989:
				return 4490;
			case -965091625:
				return 15687;
			case -964919307:
				return 2061;
			case -964764840:
				return 4098;
			case -964658045:
				return 5053;
			case -964642499:
				return 3500;
			case -964606633:
				return 5223;
			case -963953562:
				return 14724;
			case -963776274:
				return 14234;
			case -963692917:
				return 738;
			case -963132852:
				return 8534;
			case -962891566:
				return 5301;
			case -962887685:
				return 14363;
			case -962553611:
				return 13884;
			case -962473954:
				return 10131;
			case -962308512:
				return 12535;
			case -961800441:
				return 12959;
			case -961545941:
				return 5423;
			case -961513795:
				return 13765;
			case -961319841:
				return 10525;
			case -961315323:
				return 7967;
			case -961175243:
				return 11485;
			case -961144702:
				return 16445;
			case -961032672:
				return 11057;
			case -960561977:
				return 15540;
			case -960079245:
				return 13270;
			case -959909877:
				return 5246;
			case -959834194:
				return 5101;
			case -959660150:
				return 14049;
			case -959634346:
				return 3360;
			case -959453582:
				return 2075;
			case -959272775:
				return 13037;
			case -959034774:
				return 10519;
			case -957936702:
				return 10387;
			case -957245800:
				return 13446;
			case -956877354:
				return 12616;
			case -956670977:
				return 14471;
			case -956604949:
				return 16391;
			case -956466741:
				return 260;
			case -956061568:
				return 14953;
			case -956029335:
				return 5281;
			case -955700672:
				return 3003;
			case -955619976:
				return 5786;
			case -955237712:
				return 14670;
			case -954814833:
				return 6103;
			case -954744024:
				return 10039;
			case -954469935:
				return 16114;
			case -954404061:
				return 9263;
			case -954203874:
				return 12455;
			case -953288476:
				return 11051;
			case -953269812:
				return 8651;
			case -953091709:
				return 10897;
			case -953004861:
				return 14269;
			case -952639287:
				return 10323;
			case -951746023:
				return 14867;
			case -951656813:
				return 3160;
			case -951336780:
				return 127;
			case -950625863:
				return 4173;
			case -950356675:
				return 6014;
			case -950322006:
				return 3331;
			case -950200242:
				return 7699;
			case -949833662:
				return 5707;
			case -949808044:
				return 4447;
			case -949698496:
				return 9849;
			case -949385305:
				return 12354;
			case -949328419:
				return 2711;
			case -949242502:
				return 16237;
			case -949094404:
				return 646;
			case -948983710:
				return 10652;
			case -948548556:
				return 3276;
			case -948504468:
				return 5939;
			case -948313604:
				return 16394;
			case -947637451:
				return 8716;
			case -947552493:
				return 7757;
			case -947290797:
				return 15574;
			case -946816685:
				return 8828;
			case -946807796:
				return 12413;
			case -946719701:
				return 2319;
			case -946305257:
				return 6855;
			case -946068755:
				return 1251;
			case -945593295:
				return 1463;
			case -945365319:
				return 1653;
			case -945206705:
				return 3604;
			case -944805485:
				return 4458;
			case -944503004:
				return 13121;
			case -944334101:
				return 8609;
			case -944201792:
				return 1371;
			case -944019243:
				return 15243;
			case -943766435:
				return 3634;
			case -943428508:
				return 7032;
			case -943285578:
				return 8836;
			case -942556337:
				return 3808;
			case -941738882:
				return 15517;
			case -941733863:
				return 14644;
			case -941638026:
				return 4798;
			case -941631517:
				return 1355;
			case -941414360:
				return 1199;
			case -941119992:
				return 1454;
			case -940999254:
				return 12405;
			case -939999880:
				return 2798;
			case -939660848:
				return 15391;
			case -939369416:
				return 6362;
			case -939330426:
				return 6950;
			case -939185061:
				return 15770;
			case -938844801:
				return 832;
			case -938754581:
				return 4974;
			case -937878392:
				return 6401;
			case -937768550:
				return 3461;
			case -937140420:
				return 15065;
			case -937121598:
				return 3629;
			case -937065232:
				return 5568;
			case -936934718:
				return 16146;
			case -936743345:
				return 1819;
			case -936721301:
				return 2517;
			case -936669737:
				return 4926;
			case -936641504:
				return 4385;
			case -936626950:
				return 12483;
			case -936443237:
				return 7431;
			case -936393949:
				return 90;
			case -936180890:
				return 4491;
			case -935729152:
				return 2505;
			case -935238750:
				return 6970;
			case -935207080:
				return 5048;
			case -935197615:
				return 4506;
			case -934757191:
				return 15542;
			case -934737313:
				return 13026;
			case -934347792:
				return 7174;
			case -934040904:
				return 4020;
			case -933870797:
				return 3064;
			case -933595078:
				return 12984;
			case -933301737:
				return 12690;
			case -933088975:
				return 16348;
			case -933056371:
				return 6782;
			case -932831284:
				return 16337;
			case -932001629:
				return 12476;
			case -931812628:
				return 4863;
			case -930822792:
				return 14581;
			case -930797268:
				return 6506;
			case -930624240:
				return 10822;
			case -930547162:
				return 1688;
			case -930227653:
				return 7936;
			case -930116226:
				return 113;
			case -929966458:
				return 13293;
			case -929561598:
				return 11634;
			case -929555663:
				return 7800;
			case -928441655:
				return 3051;
			case -928429408:
				return 14232;
			case -927603876:
				return 10572;
			case -926591360:
				return 16079;
			case -926526207:
				return 3580;
			case -926311636:
				return 8777;
			case -925223936:
				return 14611;
			case -925176940:
				return 6431;
			case -924644916:
				return 2612;
			case -924627855:
				return 1125;
			case -924217164:
				return 6091;
			case -924060734:
				return 373;
			case -923990860:
				return 7105;
			case -923856480:
				return 14393;
			case -923558296:
				return 3683;
			case -923448594:
				return 13506;
			case -922067660:
				return 5788;
			case -921486312:
				return 12328;
			case -921437739:
				return 577;
			case -920985758:
				return 15142;
			case -920861444:
				return 10732;
			case -920573184:
				return 13282;
			case -920426618:
				return 7157;
			case -920034589:
				return 12236;
			case -919893596:
				return 12829;
			case -919709542:
				return 3382;
			case -919192394:
				return 11493;
			case -918624159:
				return 6325;
			case -918246837:
				return 11106;
			case -918226455:
				return 16410;
			case -918134631:
				return 6757;
			case -918071223:
				return 6299;
			case -917677881:
				return 1506;
			case -917473619:
				return 4833;
			case -917473435:
				return 13540;
			case -917358175:
				return 12209;
			case -916881941:
				return 3755;
			case -916562543:
				return 2088;
			case -916457800:
				return 4760;
			case -916453670:
				return 6599;
			case -916087965:
				return 4188;
			case -915948066:
				return 6180;
			case -915945303:
				return 368;
			case -915783151:
				return 15949;
			case -915395319:
				return 13084;
			case -915290938:
				return 15366;
			case -915261683:
				return 16444;
			case -915134613:
				return 14364;
			case -915063921:
				return 5547;
			case -914839355:
				return 11912;
			case -914712122:
				return 14683;
			case -914321271:
				return 11651;
			case -914117568:
				return 12564;
			case -914019792:
				return 1528;
			case -913910754:
				return 4529;
			case -913739000:
				return 482;
			case -913552331:
				return 10837;
			case -913124071:
				return 8177;
			case -912795133:
				return 16456;
			case -912686320:
				return 9261;
			case -912380024:
				return 943;
			case -912259617:
				return 3785;
			case -911874060:
				return 3066;
			case -911869961:
				return 2278;
			case -911764409:
				return 6456;
			case -911009482:
				return 9453;
			case -910752983:
				return 5971;
			case -910513975:
				return 14129;
			case -910432524:
				return 6023;
			case -910216949:
				return 5340;
			case -910021543:
				return 3177;
			case -909802429:
				return 8727;
			case -909128083:
				return 15958;
			case -908704829:
				return 6895;
			case -908375120:
				return 13448;
			case -907857953:
				return 8457;
			case -907492413:
				return 15670;
			case -907454566:
				return 9558;
			case -907448456:
				return 1392;
			case -907415314:
				return 11689;
			case -907221559:
				return 9950;
			case -906966373:
				return 10991;
			case -906254449:
				return 13942;
			case -906075022:
				return 6772;
			case -905912675:
				return 961;
			case -905894652:
				return 4692;
			case -905877986:
				return 1352;
			case -905735271:
				return 9910;
			case -905148354:
				return 2129;
			case -904994761:
				return 12562;
			case -904977562:
				return 11217;
			case -904810371:
				return 6108;
			case -903675033:
				return 4413;
			case -903573696:
				return 4479;
			case -903571386:
				return 1810;
			case -903459822:
				return 10990;
			case -903291464:
				return 1776;
			case -902083559:
				return 6165;
			case -901833437:
				return 16172;
			case -901751678:
				return 8757;
			case -901582202:
				return 4524;
			case -901302263:
				return 7670;
			case -900853588:
				return 7520;
			case -900398648:
				return 16035;
			case -900295587:
				return 11852;
			case -900222268:
				return 14969;
			case -899930164:
				return 11056;
			case -899888754:
				return 15794;
			case -899803912:
				return 5434;
			case -899585330:
				return 7259;
			case -899394728:
				return 1686;
			case -899377218:
				return 3320;
			case -899345165:
				return 3690;
			case -899122294:
				return 5510;
			case -899057801:
				return 11403;
			case -899034818:
				return 221;
			case -898964331:
				return 15924;
			case -898733096:
				return 4266;
			case -898643036:
				return 13101;
			case -898173026:
				return 9352;
			case -897986351:
				return 9246;
			case -897652777:
				return 12702;
			case -897477017:
				return 5922;
			case -897307800:
				return 732;
			case -896926592:
				return 14544;
			case -896294222:
				return 9117;
			case -895862876:
				return 5651;
			case -895056991:
				return 16458;
			case -894964583:
				return 11979;
			case -894749003:
				return 2252;
			case -894706706:
				return 5538;
			case -894617478:
				return 4110;
			case -894464157:
				return 3491;
			case -894288304:
				return 15979;
			case -894191054:
				return 8277;
			case -893460390:
				return 8363;
			case -893371743:
				return 2249;
			case -892805115:
				return 4139;
			case -892664371:
				return 2406;
			case -892610253:
				return 6633;
			case -892155788:
				return 11194;
			case -892111933:
				return 3708;
			case -891761257:
				return 4890;
			case -891756624:
				return 3277;
			case -891510636:
				return 14994;
			case -891111312:
				return 4676;
			case -890689546:
				return 4613;
			case -890158702:
				return 15896;
			case -890147146:
				return 120;
			case -890087611:
				return 2976;
			case -890081360:
				return 5052;
			case -890050805:
				return 12008;
			case -889868311:
				return 11041;
			case -889518341:
				return 3120;
			case -889115305:
				return 12503;
			case -889047922:
				return 10587;
			case -888863337:
				return 11271;
			case -888617740:
				return 3257;
			case -888604917:
				return 573;
			case -888547540:
				return 14069;
			case -888075665:
				return 201;
			case -887946940:
				return 5075;
			case -887803129:
				return 5469;
			case -887724725:
				return 4593;
			case -887611172:
				return 12060;
			case -887554273:
				return 6457;
			case -887387338:
				return 12801;
			case -887297055:
				return 2408;
			case -886127227:
				return 8450;
			case -885451903:
				return 14776;
			case -884856248:
				return 15814;
			case -884824177:
				return 15492;
			case -884319319:
				return 2492;
			case -883546864:
				return 846;
			case -883059367:
				return 1915;
			case -882766674:
				return 1142;
			case -882474373:
				return 2766;
			case -881873178:
				return 9679;
			case -881813009:
				return 4128;
			case -881328272:
				return 9572;
			case -881318617:
				return 9404;
			case -881260464:
				return 15071;
			case -880793587:
				return 2577;
			case -880550872:
				return 10198;
			case -879706202:
				return 4727;
			case -879632751:
				return 6062;
			case -879632697:
				return 4114;
			case -879341691:
				return 4806;
			case -879207153:
				return 5452;
			case -878782832:
				return 11934;
			case -878541093:
				return 11568;
			case -878050149:
				return 7954;
			case -878000039:
				return 3452;
			case -877884859:
				return 8602;
			case -877712664:
				return 3233;
			case -877067448:
				return 8111;
			case -876523269:
				return 1802;
			case -876203942:
				return 5648;
			case -876144547:
				return 10945;
			case -875643225:
				return 15733;
			case -875062488:
				return 3122;
			case -873998155:
				return 8490;
			case -872756370:
				return 11986;
			case -872628103:
				return 9006;
			case -872386280:
				return 10503;
			case -872333558:
				return 16139;
			case -872299096:
				return 10815;
			case -871498634:
				return 10364;
			case -871306100:
				return 10850;
			case -870889909:
				return 3156;
			case -870189971:
				return 5014;
			case -869909360:
				return 12705;
			case -869574551:
				return 16055;
			case -869065568:
				return 5208;
			case -869064696:
				return 3680;
			case -868998775:
				return 7799;
			case -868636317:
				return 13140;
			case -868351848:
				return 8517;
			case -867978076:
				return 10377;
			case -867921383:
				return 1295;
			case -867755920:
				return 1873;
			case -867338226:
				return 16191;
			case -867067621:
				return 5295;
			case -866270670:
				return 3451;
			case -866031227:
				return 14142;
			case -865578631:
				return 14141;
			case -865470118:
				return 4933;
			case -864970770:
				return 11279;
			case -864676252:
				return 1318;
			case -863980975:
				return 14280;
			case -863232339:
				return 7661;
			case -862949069:
				return 12462;
			case -862384717:
				return 248;
			case -861544272:
				return 14729;
			case -861474402:
				return 10882;
			case -861349149:
				return 7365;
			case -860695938:
				return 7943;
			case -860349242:
				return 11751;
			case -860316745:
				return 16249;
			case -860055580:
				return 7916;
			case -859701570:
				return 4604;
			case -859450082:
				return 3758;
			case -859420242:
				return 14496;
			case -859002201:
				return 1359;
			case -858892236:
				return 11542;
			case -858868453:
				return 2504;
			case -858857622:
				return 9973;
			case -857840768:
				return 16457;
			case -857634409:
				return 3398;
			case -857465161:
				return 1713;
			case -857219284:
				return 12039;
			case -856732144:
				return 7582;
			case -856676249:
				return 2747;
			case -856053084:
				return 6415;
			case -856043142:
				return 10889;
			case -855751316:
				return 12262;
			case -855620385:
				return 140;
			case -855496524:
				return 1232;
			case -855446134:
				return 3894;
			case -855298530:
				return 7400;
			case -855192748:
				return 6445;
			case -854988474:
				return 6592;
			case -854697013:
				return 2054;
			case -854514355:
				return 274;
			case -854456669:
				return 3417;
			case -853275875:
				return 2585;
			case -852421170:
				return 8846;
			case -852087318:
				return 5837;
			case -852000034:
				return 7241;
			case -851841851:
				return 12084;
			case -851218695:
				return 11978;
			case -851170496:
				return 15840;
			case -850777975:
				return 7917;
			case -850766636:
				return 2379;
			case -850757976:
				return 11750;
			case -850707000:
				return 7758;
			case -849978689:
				return 1538;
			case -849752102:
				return 12720;
			case -849719499:
				return 2261;
			case -849381148:
				return 2025;
			case -849359410:
				return 10801;
			case -848645541:
				return 6306;
			case -848328404:
				return 13665;
			case -847911786:
				return 8406;
			case -847279836:
				return 13000;
			case -847228074:
				return 1085;
			case -846814413:
				return 768;
			case -846655106:
				return 11780;
			case -846261903:
				return 8580;
			case -845543566:
				return 7133;
			case -845255859:
				return 7183;
			case -845192354:
				return 12868;
			case -845022636:
				return 8218;
			case -843862464:
				return 4378;
			case -843508046:
				return 9500;
			case -843428526:
				return 15710;
			case -843424619:
				return 4681;
			case -843395146:
				return 1611;
			case -842374052:
				return 4731;
			case -842352662:
				return 15772;
			case -842282816:
				return 1792;
			case -842111858:
				return 231;
			case -841644977:
				return 4205;
			case -841302822:
				return 2520;
			case -841010529:
				return 3272;
			default:
				break;
		}
		if (iParam1 >= 1)
		{
		}
		return -1;
	}
	if (iParam0 <= -572941403)
	{
		switch (iParam0)
		{
			case -840801889:
				return 14750;
			case -840712427:
				return 8525;
			case -840506383:
				return 11048;
			case -840366602:
				return 7957;
			case -840364949:
				return 3825;
			case -840285875:
				return 6028;
			case -840265048:
				return 12585;
			case -840244269:
				return 12324;
			case -839979830:
				return 16381;
			case -839571926:
				return 3849;
			case -839129394:
				return 2604;
			case -839121260:
				return 4709;
			case -838945132:
				return 1292;
			case -838564983:
				return 9391;
			case -838418860:
				return 15456;
			case -837538235:
				return 3986;
			case -836477572:
				return 9660;
			case -836311245:
				return 6980;
			case -835354648:
				return 7718;
			case -834934793:
				return 14212;
			case -834907563:
				return 4216;
			case -834461873:
				return 8767;
			case -834287184:
				return 5858;
			case -834077830:
				return 15935;
			case -833977422:
				return 9670;
			case -833467841:
				return 9822;
			case -833244723:
				return 10119;
			case -833021436:
				return 11585;
			case -832951172:
				return 10047;
			case -832535049:
				return 15672;
			case -832258854:
				return 6173;
			case -832187622:
				return 2599;
			case -831368594:
				return 16327;
			case -831192212:
				return 866;
			case -831049728:
				return 6924;
			case -830685537:
				return 7952;
			case -830607635:
				return 13768;
			case -830033320:
				return 10742;
			case -829606782:
				return 12217;
			case -829573742:
				return 9225;
			case -829566757:
				return 6564;
			case -829337926:
				return 9448;
			case -829273561:
				return 14777;
			case -828834017:
				return 2045;
			case -828585405:
				return 8232;
			case -828188692:
				return 12365;
			case -827620392:
				return 10482;
			case -827596041:
				return 4136;
			case -827021103:
				return 9075;
			case -825972820:
				return 6573;
			case -825961374:
				return 12329;
			case -824971888:
				return 1319;
			case -824937600:
				return 4164;
			case -824257932:
				return 14404;
			case -824246734:
				return 5912;
			case -823724360:
				return 186;
			case -823699805:
				return 10313;
			case -823649241:
				return 15262;
			case -823202571:
				return 4172;
			case -823150843:
				return 1377;
			case -822985354:
				return 1597;
			case -822499418:
				return 11187;
			case -822262537:
				return 13974;
			case -821860165:
				return 6932;
			case -821840441:
				return 2113;
			case -821713083:
				return 5698;
			case -821290420:
				return 4461;
			case -821136423:
				return 8620;
			case -821118254:
				return 9947;
			case -820990551:
				return 14268;
			case -820975767:
				return 15045;
			case -820854800:
				return 15256;
			case -820620757:
				return 14064;
			case -820464196:
				return 5006;
			case -820448936:
				return 7103;
			case -820230677:
				return 8843;
			case -820210387:
				return 10319;
			case -820040688:
				return 9640;
			case -819975310:
				return 15432;
			case -819966349:
				return 12021;
			case -819861544:
				return 15799;
			case -819697512:
				return 14657;
			case -819426619:
				return 2285;
			case -819097445:
				return 8481;
			case -818863226:
				return 2198;
			case -818602246:
				return 819;
			case -818458150:
				return 1554;
			case -818396248:
				return 686;
			case -817930893:
				return 11061;
			case -817794457:
				return 7605;
			case -817502880:
				return 3820;
			case -817435925:
				return 15792;
			case -817294940:
				return 9728;
			case -817160799:
				return 12786;
			case -816536116:
				return 3052;
			case -816303026:
				return 14008;
			case -816112030:
				return 13889;
			case -815877836:
				return 3786;
			case -814503725:
				return 4812;
			case -814389520:
				return 9989;
			case -814374666:
				return 8733;
			case -814357706:
				return 15251;
			case -814356935:
				return 6246;
			case -813796418:
				return 14841;
			case -813677507:
				return 12322;
			case -813514953:
				return 8090;
			case -813488614:
				return 8372;
			case -812953300:
				return 12530;
			case -812762107:
				return 11571;
			case -812001043:
				return 13707;
			case -811821899:
				return 3222;
			case -811821736:
				return 2430;
			case -811739119:
				return 15773;
			case -811538772:
				return 7124;
			case -811328390:
				return 13524;
			case -811023519:
				return 16269;
			case -811010565:
				return 2409;
			case -810403717:
				return 14194;
			case -810390893:
				return 3818;
			case -810366165:
				return 7047;
			case -809957388:
				return 13109;
			case -809763870:
				return 11428;
			case -809589954:
				return 1910;
			case -809139958:
				return 7915;
			case -809118199:
				return 8045;
			case -809073963:
				return 5926;
			case -808559472:
				return 4556;
			case -808375335:
				return 6086;
			case -808106809:
				return 12067;
			case -808006688:
				return 9097;
			case -807564273:
				return 2638;
			case -807400872:
				return 9927;
			case -807387610:
				return 5647;
			case -807337074:
				return 8059;
			case -807307453:
				return 8850;
			case -807250478:
				return 5673;
			case -807203256:
				return 2754;
			case -806737660:
				return 13414;
			case -806211199:
				return 13639;
			case -805891858:
				return 14284;
			case -805697430:
				return 9415;
			case -805634630:
				return 8286;
			case -805291949:
				return 7766;
			case -805050048:
				return 2311;
			case -804985870:
				return 12839;
			case -804653758:
				return 48;
			case -804464549:
				return 9905;
			case -804436865:
				return 12132;
			case -804165125:
				return 10108;
			case -804104884:
				return 15023;
			case -803361065:
				return 599;
			case -803324516:
				return 5606;
			case -803247065:
				return 11131;
			case -802660899:
				return 12345;
			case -802659006:
				return 9996;
			case -802461952:
				return 14959;
			case -802440150:
				return 931;
			case -802261619:
				return 12401;
			case -802220535:
				return 13623;
			case -801514190:
				return 13049;
			case -801078292:
				return 6548;
			case -800605809:
				return 10664;
			case -800407169:
				return 2271;
			case -800120469:
				return 8707;
			case -800017411:
				return 15617;
			case -799997502:
				return 9889;
			case -799922861:
				return 3804;
			case -799374629:
				return 6164;
			case -799017165:
				return 3983;
			case -798460850:
				return 12122;
			case -798350419:
				return 2622;
			case -798344147:
				return 5127;
			case -798180727:
				return 3933;
			case -798069613:
				return 1814;
			case -797902175:
				return 12005;
			case -797884688:
				return 3006;
			case -797664443:
				return 5432;
			case -797523053:
				return 14839;
			case -797485900:
				return 11466;
			case -796992973:
				return 281;
			case -796803042:
				return 15448;
			case -796023032:
				return 2992;
			case -795893780:
				return 16173;
			case -794964047:
				return 9213;
			case -794619784:
				return 14832;
			case -794612233:
				return 7835;
			case -793999676:
				return 15643;
			case -793450021:
				return 11757;
			case -793151212:
				return 13275;
			case -793046913:
				return 8382;
			case -792994971:
				return 4789;
			case -792947305:
				return 11723;
			case -792912992:
				return 2657;
			case -792643455:
				return 15026;
			case -792547951:
				return 13175;
			case -792459484:
				return 5915;
			case -791580991:
				return 4488;
			case -791498313:
				return 9663;
			case -791405787:
				return 16306;
			case -791100729:
				return 8305;
			case -791001722:
				return 13211;
			case -790938048:
				return 2782;
			case -790460618:
				return 13148;
			case -790435028:
				return 8175;
			case -790357328:
				return 12028;
			case -790170288:
				return 5750;
			case -790149921:
				return 12360;
			case -789757560:
				return 6753;
			case -789646981:
				return 14927;
			case -789613925:
				return 1934;
			case -789465252:
				return 13690;
			case -788866132:
				return 11002;
			case -788819149:
				return 6947;
			case -788630409:
				return 2895;
			case -788527275:
				return 2889;
			case -788490403:
				return 7515;
			case -788178828:
				return 4793;
			case -788076476:
				return 10857;
			case -787896457:
				return 9305;
			case -787683245:
				return 14859;
			case -787395957:
				return 10007;
			case -787226930:
				return 5073;
			case -787178427:
				return 12968;
			case -786689308:
				return 6758;
			case -786540139:
				return 2168;
			case -786369009:
				return 7733;
			case -786304391:
				return 3632;
			case -786018483:
				return 16091;
			case -785764663:
				return 395;
			case -785613376:
				return 4203;
			case -784658684:
				return 9686;
			case -784587991:
				return 16370;
			case -784416170:
				return 4819;
			case -784275669:
				return 12567;
			case -783244734:
				return 4332;
			case -782714754:
				return 11573;
			case -782521865:
				return 214;
			case -782397475:
				return 3010;
			case -782153860:
				return 16455;
			case -782131663:
				return 6056;
			case -782128439:
				return 12539;
			case -782094783:
				return 2500;
			case -782036898:
				return 8192;
			case -781994133:
				return 15051;
			case -781967776:
				return 15372;
			case -781771732:
				return 11614;
			case -781482447:
				return 8593;
			case -780853522:
				return 11795;
			case -780288604:
				return 5380;
			case -780048192:
				return 7307;
			case -779976236:
				return 9674;
			case -779743887:
				return 13457;
			case -779531763:
				return 6037;
			case -779472377:
				return 15020;
			case -779334476:
				return 13994;
			case -779207792:
				return 12281;
			case -778985346:
				return 11679;
			case -778774162:
				return 13811;
			case -778532939:
				return 11562;
			case -778474239:
				return 10820;
			case -778293320:
				return 10937;
			case -778194965:
				return 4230;
			case -777231535:
				return 6830;
			case -777175577:
				return 12930;
			case -776966932:
				return 1767;
			case -776928002:
				return 14169;
			case -776888393:
				return 10460;
			case -776789570:
				return 16286;
			case -776749978:
				return 10374;
			case -776380732:
				return 8586;
			case -776317714:
				return 12849;
			case -776006436:
				return 131;
			case -775610875:
				return 16184;
			case -775134663:
				return 277;
			case -774642192:
				return 12814;
			case -774551312:
				return 8539;
			case -774508007:
				return 11648;
			case -774209521:
				return 10917;
			case -774065797:
				return 5835;
			case -774024333:
				return 15468;
			case -773775104:
				return 9159;
			case -773759899:
				return 15966;
			case -773613591:
				return 7031;
			case -772792715:
				return 14976;
			case -772642712:
				return 7424;
			case -772435825:
				return 4306;
			case -772347263:
				return 7786;
			case -772333162:
				return 9071;
			case -772253778:
				return 5671;
			case -772157398:
				return 11124;
			case -771949122:
				return 12537;
			case -771866010:
				return 11962;
			case -771839452:
				return 10124;
			case -771670449:
				return 8462;
			case -771064261:
				return 8916;
			case -770982987:
				return 11653;
			case -770922766:
				return 10805;
			case -770819581:
				return 13850;
			case -770468536:
				return 7432;
			case -770377455:
				return 15812;
			case -768353613:
				return 9471;
			case -768117560:
				return 16333;
			case -767633489:
				return 10454;
			case -766691075:
				return 1821;
			case -766539569:
				return 13096;
			case -766490354:
				return 9961;
			case -766448386:
				return 2861;
			case -765922136:
				return 1222;
			case -765914358:
				return 2609;
			case -765092724:
				return 4507;
			case -764811328:
				return 11868;
			case -764755315:
				return 254;
			case -764739432:
				return 15420;
			case -764239832:
				return 12588;
			case -764197226:
				return 7316;
			case -763072541:
				return 15322;
			case -762709488:
				return 13213;
			case -762624193:
				return 4816;
			case -762350011:
				return 2469;
			case -762195456:
				return 548;
			case -761763183:
				return 6430;
			case -761556394:
				return 620;
			case -761519956:
				return 12698;
			case -761325639:
				return 15008;
			case -760231934:
				return 15487;
			case -759922726:
				return 14378;
			case -758289634:
				return 13010;
			case -757974128:
				return 923;
			case -757950088:
				return 11381;
			case -757935404:
				return 15613;
			case -757911956:
				return 1300;
			case -757624115:
				return 11379;
			case -757492237:
				return 10976;
			case -756996682:
				return 15123;
			case -756780392:
				return 8550;
			case -755966184:
				return 7671;
			case -755945846:
				return 11615;
			case -755866836:
				return 4620;
			case -755831565:
				return 6048;
			case -755343600:
				return 16050;
			case -755209636:
				return 7560;
			case -754832582:
				return 2511;
			case -754733870:
				return 15040;
			case -754660372:
				return 15581;
			case -754270386:
				return 8865;
			case -754174303:
				return 6010;
			case -753902995:
				return 14583;
			case -753399062:
				return 10183;
			case -753196385:
				return 16278;
			case -752695232:
				return 7406;
			case -752686013:
				return 9985;
			case -751919887:
				return 3401;
			case -751853494:
				return 13757;
			case -751721664:
				return 9208;
			case -750852926:
				return 1420;
			case -750573411:
				return 1288;
			case -750428882:
				return 13677;
			case -750202184:
				return 4130;
			case -749937394:
				return 69;
			case -749888925:
				return 2800;
			case -749258641:
				return 9096;
			case -749244206:
				return 13600;
			case -748972706:
				return 7317;
			case -748422618:
				return 6279;
			case -748263267:
				return 9351;
			case -748219188:
				return 12541;
			case -748120605:
				return 5869;
			case -747990359:
				return 7497;
			case -747823095:
				return 14256;
			case -747792496:
				return 15092;
			case -747603764:
				return 9692;
			case -747524508:
				return 16294;
			case -747286969:
				return 15604;
			case -747233157:
				return 8365;
			case -747134222:
				return 10624;
			case -747052578:
				return 5480;
			case -746735956:
				return 10060;
			case -746724116:
				return 9752;
			case -746341464:
				return 3270;
			case -746021431:
				return 1624;
			case -745355166:
				return 913;
			case -745250702:
				return 1652;
			case -745212742:
				return 8296;
			case -744868290:
				return 6481;
			case -744715350:
				return 9944;
			case -744221547:
				return 16154;
			case -744027902:
				return 11033;
			case -743870406:
				return 8816;
			case -743292301:
				return 3869;
			case -743143872:
				return 4297;
			case -743009452:
				return 725;
			case -741971058:
				return 10015;
			case -741734009:
				return 4977;
			case -741519245:
				return 1709;
			case -741495176:
				return 9820;
			case -741327371:
				return 5154;
			case -740735550:
				return 8535;
			case -740235817:
				return 7547;
			case -739411375:
				return 10425;
			case -739288444:
				return 8572;
			case -739185953:
				return 13817;
			case -739058842:
				return 8458;
			case -739019467:
				return 11445;
			case -738768878:
				return 675;
			case -738648358:
				return 7933;
			case -738547179:
				return 1055;
			case -738128634:
				return 10845;
			case -737796731:
				return 13740;
			case -737796387:
				return 6836;
			case -737209987:
				return 13333;
			case -737032035:
				return 10536;
			case -736976660:
				return 7853;
			case -736911484:
				return 3139;
			case -736695055:
				return 1356;
			case -736692248:
				return 1828;
			case -736406927:
				return 11411;
			case -735955257:
				return 3624;
			case -735449351:
				return 15445;
			case -735163229:
				return 15562;
			case -735160262:
				return 648;
			case -734908996:
				return 1134;
			case -734502548:
				return 14202;
			case -734336984:
				return 16222;
			case -733006244:
				return 5831;
			case -732885853:
				return 210;
			case -732751035:
				return 1065;
			case -732722886:
				return 16449;
			case -732626304:
				return 9181;
			case -732527717:
				return 10338;
			case -732502703:
				return 8857;
			case -731847499:
				return 7545;
			case -731428067:
				return 308;
			case -730969831:
				return 2521;
			case -730845346:
				return 2856;
			case -730801010:
				return 12287;
			case -730612139:
				return 4201;
			case -730438808:
				return 2447;
			case -729866946:
				return 3208;
			case -729789705:
				return 1050;
			case -729484024:
				return 6376;
			case -728725588:
				return 6059;
			case -728556204:
				return 6827;
			case -728526374:
				return 13188;
			case -727609182:
				return 16412;
			case -727455979:
				return 14709;
			case -727052215:
				return 10891;
			case -727036749:
				return 5235;
			case -726742856:
				return 15932;
			case -726434422:
				return 14871;
			case -726426629:
				return 5341;
			case -726391110:
				return 11584;
			case -725931547:
				return 13040;
			case -725848147:
				return 13969;
			case -725769427:
				return 10526;
			case -725520485:
				return 10050;
			case -725476760:
				return 8440;
			case -724422953:
				return 13129;
			case -723630795:
				return 938;
			case -722597572:
				return 12941;
			case -721923169:
				return 11066;
			case -721796184:
				return 3239;
			case -721764621:
				return 6254;
			case -721735982:
				return 1220;
			case -721735422:
				return 10175;
			case -721579804:
				return 7330;
			case -721512733:
				return 2367;
			case -721090373:
				return 11188;
			case -720677081:
				return 13668;
			case -720252442:
				return 12466;
			case -720149581:
				return 11102;
			case -719712911:
				return 1087;
			case -719470613:
				return 13984;
			case -718668745:
				return 6817;
			case -718115357:
				return 3134;
			case -717777272:
				return 9930;
			case -717759843:
				return 803;
			case -717272169:
				return 180;
			case -716479716:
				return 8674;
			case -716475627:
				return 12410;
			case -716235475:
				return 11697;
			case -715883144:
				return 3652;
			case -715631748:
				return 10620;
			case -715482800:
				return 7708;
			case -715042671:
				return 13055;
			case -714835350:
				return 2553;
			case -714331596:
				return 11903;
			case -714189427:
				return 2365;
			case -714177502:
				return 15662;
			case -713665698:
				return 7850;
			case -713533277:
				return 9061;
			case -712671373:
				return 3569;
			case -712049303:
				return 2964;
			case -711779521:
				return 14564;
			case -710651232:
				return 8469;
			case -710598951:
				return 15577;
			case -710499197:
				return 1282;
			case -710494238:
				return 4144;
			case -710311965:
				return 10647;
			case -709817916:
				return 5131;
			case -709677671:
				return 14023;
			case -709399056:
				return 15451;
			case -708209305:
				return 14213;
			case -707681147:
				return 5812;
			case -707493223:
				return 11982;
			case -707405293:
				return 12694;
			case -706765119:
				return 15789;
			case -706555473:
				return 15724;
			case -706537350:
				return 8193;
			case -706459129:
				return 7345;
			case -706245422:
				return 7207;
			case -706239418:
				return 7989;
			case -705957257:
				return 12892;
			case -705818705:
				return 16417;
			case -705727376:
				return 2727;
			case -705588077:
				return 8703;
			case -705277299:
				return 4420;
			case -704383727:
				return 12486;
			case -703231197:
				return 4439;
			case -703216761:
				return 11700;
			case -703129905:
				return 4735;
			case -702653709:
				return 4790;
			case -702228004:
				return 50;
			case -701419751:
				return 5309;
			case -701191898:
				return 14043;
			case -701014476:
				return 15714;
			case -700954487:
				return 10659;
			case -700542529:
				return 15523;
			case -700312412:
				return 1408;
			case -700252904:
				return 126;
			case -700109527:
				return 4505;
			case -699806412:
				return 2707;
			case -699755425:
				return 1264;
			case -699585261:
				return 11483;
			case -699054447:
				return 411;
			case -699015721:
				return 11538;
			case -698337016:
				return 3430;
			case -697733729:
				return 4999;
			case -697079266:
				return 7544;
			case -696965115:
				return 2133;
			case -696841956:
				return 2065;
			case -696589508:
				return 12779;
			case -696343367:
				return 13122;
			case -695901460:
				return 8684;
			case -695510555:
				return 7876;
			case -695399676:
				return 3710;
			case -695175124:
				return 15280;
			case -695053147:
				return 4357;
			case -694807137:
				return 11377;
			case -693782841:
				return 2888;
			case -693415400:
				return 4051;
			case -693389207:
				return 976;
			case -693098707:
				return 13025;
			case -693053650:
				return 11877;
			case -692960126:
				return 16302;
			case -692786057:
				return 7037;
			case -692701512:
				return 13924;
			case -692210960:
				return 14186;
			case -692093509:
				return 11185;
			case -691446781:
				return 7528;
			case -691281238:
				return 1278;
			case -691156851:
				return 16265;
			case -691004373:
				return 5028;
			case -690470333:
				return 13560;
			case -690270376:
				return 14370;
			case -690085315:
				return 259;
			case -690078411:
				return 9240;
			case -689914155:
				return 9024;
			case -689630872:
				return 9634;
			case -689419962:
				return 3713;
			case -689331657:
				return 6298;
			case -688909268:
				return 5181;
			case -688906464:
				return 7514;
			case -688732076:
				return 10788;
			case -688710715:
				return 3220;
			case -687649284:
				return 8399;
			case -687459207:
				return 11025;
			case -687223986:
				return 8028;
			case -687043486:
				return 5999;
			case -686299148:
				return 6832;
			case -686191316:
				return 10926;
			case -686064834:
				return 2978;
			case -685744289:
				return 4400;
			case -685512585:
				return 9801;
			case -685398458:
				return 3654;
			case -685392161:
				return 13138;
			case -685073653:
				return 13736;
			case -685046634:
				return 5412;
			case -684920316:
				return 9083;
			case -684874717:
				return 13043;
			case -684673946:
				return 15990;
			case -684532976:
				return 13738;
			case -684512958:
				return 13205;
			case -684355208:
				return 2041;
			case -684178291:
				return 2919;
			case -684044970:
				return 5557;
			case -683934086:
				return 8201;
			case -683641683:
				return 1505;
			case -683592019:
				return 14619;
			case -683555258:
				return 8717;
			case -683466700:
				return 10653;
			case -681777408:
				return 12680;
			case -681635751:
				return 5952;
			case -681635562:
				return 8135;
			case -681575969:
				return 5787;
			case -681535652:
				return 10434;
			case -681098553:
				return 3209;
			case -681080503:
				return 2592;
			case -681053633:
				return 5517;
			case -680937782:
				return 16441;
			case -680400452:
				return 5089;
			case -680353911:
				return 1322;
			case -679922317:
				return 11149;
			case -679864396:
				return 5600;
			case -679845678:
				return 3083;
			case -678522569:
				return 14116;
			case -678091727:
				return 6643;
			case -677900152:
				return 11565;
			case -677652422:
				return 4634;
			case -677434968:
				return 12278;
			case -677364037:
				return 322;
			case -677268897:
				return 9015;
			case -676977662:
				return 7744;
			case -676851986:
				return 2067;
			case -676777548:
				return 9826;
			case -676666874:
				return 16359;
			case -676262042:
				return 10883;
			case -676150245:
				return 11176;
			case -675657004:
				return 14152;
			case -675585444:
				return 15704;
			case -675362895:
				return 12017;
			case -675322203:
				return 711;
			case -675205419:
				return 13041;
			case -674844680:
				return 12730;
			case -674629019:
				return 2241;
			case -674582881:
				return 4918;
			case -674570242:
				return 9793;
			case -673726708:
				return 11789;
			case -672936509:
				return 8864;
			case -672774156:
				return 11346;
			case -671939939:
				return 610;
			case -671400737:
				return 5205;
			case -671223747:
				return 11032;
			case -671145582:
				return 10867;
			case -670746618:
				return 16168;
			case -670576160:
				return 7383;
			case -670436990:
				return 15095;
			case -670409157:
				return 4160;
			case -670391982:
				return 7844;
			case -670217403:
				return 12275;
			case -670060439:
				return 2827;
			case -669613771:
				return 6484;
			case -669394275:
				return 16078;
			case -668675447:
				return 12596;
			case -668478558:
				return 2816;
			case -668476702:
				return 6447;
			case -668393557:
				return 8694;
			case -667895766:
				return 12650;
			case -667785661:
				return 10163;
			case -667739496:
				return 13796;
			case -667482166:
				return 622;
			case -667091646:
				return 2675;
			case -666661475:
				return 13018;
			case -666542134:
				return 16454;
			case -666460134:
				return 11269;
			case -666416357:
				return 12932;
			case -666035275:
				return 11822;
			case -666024656:
				return 14403;
			case -665450029:
				return 13433;
			case -665433358:
				return 801;
			case -665267696:
				return 2254;
			case -664826378:
				return 10280;
			case -664733115:
				return 10770;
			case -664559319:
				return 13539;
			case -663958185:
				return 549;
			case -663641338:
				return 15849;
			case -662763102:
				return 476;
			case -662270600:
				return 748;
			case -662267182:
				return 3242;
			case -661992339:
				return 12916;
			case -661888963:
				return 5337;
			case -661790979:
				return 1100;
			case -661573422:
				return 11851;
			case -661418393:
				return 13056;
			case -661352165:
				return 1138;
			case -661073964:
				return 14890;
			case -660965248:
				return 9507;
			case -660890165:
				return 13779;
			case -659460195:
				return 2339;
			case -659298987:
				return 4596;
			case -659288712:
				return 12522;
			case -659125417:
				return 6220;
			case -658551940:
				return 11040;
			case -657949638:
				return 12812;
			case -657231362:
				return 4119;
			case -657015514:
				return 11639;
			case -656893143:
				return 13249;
			case -656795758:
				return 4025;
			case -656643388:
				return 11559;
			case -656516359:
				return 6286;
			case -656471699:
				return 11389;
			case -656177552:
				return 15656;
			case -655777242:
				return 8659;
			case -655768729:
				return 10884;
			case -655150474:
				return 820;
			case -654859219:
				return 15920;
			case -654794537:
				return 13480;
			case -653781891:
				return 4350;
			case -653454558:
				return 5925;
			case -653402730:
				return 4446;
			case -653267869:
				return 4994;
			case -652951640:
				return 3045;
			case -652594837:
				return 9667;
			case -652532555:
				return 3077;
			case -652315328:
				return 13459;
			case -652305938:
				return 13146;
			case -651992121:
				return 4630;
			case -651834676:
				return 2742;
			case -651349538:
				return 9344;
			case -651036587:
				return 7972;
			case -650687801:
				return 12740;
			case -650535573:
				return 8402;
			case -650518339:
				return 2269;
			case -650353329:
				return 14922;
			case -650182355:
				return 16107;
			case -650084981:
				return 7372;
			case -649692234:
				return 1423;
			case -649184149:
				return 8762;
			case -649179483:
				return 10823;
			case -648879076:
				return 16070;
			case -648877314:
				return 4807;
			case -648491719:
				return 440;
			case -648352852:
				return 6030;
			case -648295555:
				return 15299;
			case -648153684:
				return 4695;
			case -647800368:
				return 15732;
			case -647670359:
				return 13656;
			case -647020346:
				return 14669;
			case -646660435:
				return 2388;
			case -646460384:
				return 14638;
			case -646383411:
				return 13029;
			case -645020702:
				return 4854;
			case -644953020:
				return 11196;
			case -644524520:
				return 7838;
			case -644313522:
				return 10011;
			case -644062535:
				return 15610;
			case -644013394:
				return 11703;
			case -643785782:
				return 12234;
			case -643500459:
				return 4264;
			case -643404559:
				return 2489;
			case -643300023:
				return 3712;
			case -643077116:
				return 13404;
			case -642995531:
				return 10718;
			case -642799908:
				return 2952;
			case -641023269:
				return 1205;
			case -640320366:
				return 7902;
			case -640132444:
				return 15544;
			case -639827793:
				return 2506;
			case -639636631:
				return 1163;
			case -639328912:
				return 4432;
			case -639175789:
				return 585;
			case -639081135:
				return 15518;
			case -639070157:
				return 3225;
			case -639059862:
				return 15101;
			case -638550891:
				return 11693;
			case -638006849:
				return 696;
			case -637956142:
				return 14271;
			case -637641980:
				return 3021;
			case -637533066:
				return 3292;
			case -637472851:
				return 13170;
			case -636634023:
				return 5170;
			case -636276028:
				return 1913;
			case -636146522:
				return 14483;
			case -636103453:
				return 13906;
			case -635857670:
				return 388;
			case -635393640:
				return 4832;
			case -635354174:
				return 6915;
			case -635349280:
				return 8140;
			case -635239558:
				return 14614;
			case -634895611:
				return 3515;
			case -634476133:
				return 3641;
			case -634463953:
				return 2259;
			case -634417384:
				return 8274;
			case -634372061:
				return 7245;
			case -634114164:
				return 12127;
			case -633475442:
				return 11580;
			case -633466200:
				return 9876;
			case -633017623:
				return 9560;
			case -632677464:
				return 8219;
			case -632110989:
				return 12105;
			case -631874917:
				return 13384;
			case -631664452:
				return 15121;
			case -631228576:
				return 5683;
			case -630636578:
				return 4707;
			case -630605689:
				return 9118;
			case -629932773:
				return 13;
			case -629902407:
				return 4677;
			case -629259491:
				return 9452;
			case -629189434:
				return 6781;
			case -628956517:
				return 15333;
			case -628794682:
				return 16169;
			case -628686073:
				return 2887;
			case -628673108:
				return 10123;
			case -628544402:
				return 6104;
			case -628301561:
				return 9403;
			case -628220695:
				return 8038;
			case -628192245:
				return 10064;
			case -628067979:
				return 6523;
			case -628029137:
				return 15634;
			case -627280631:
				return 10033;
			case -627187884:
				return 8628;
			case -626963318:
				return 13703;
			case -626936103:
				return 9390;
			case -626543506:
				return 6133;
			case -626291271:
				return 5602;
			case -625508879:
				return 15181;
			case -625233553:
				return 6954;
			case -625095585:
				return 9760;
			case -624524679:
				return 9182;
			case -624498332:
				return 8977;
			case -624459085:
				return 9496;
			case -624124479:
				return 4574;
			case -623299690:
				return 5433;
			case -623113369:
				return 14472;
			case -622263000:
				return 4577;
			case -620497604:
				return 5213;
			case -620448069:
				return 6666;
			case -620053690:
				return 1369;
			case -619619508:
				return 3266;
			case -619474087:
				return 4367;
			case -619325106:
				return 15804;
			case -619255230:
				return 2643;
			case -619132373:
				return 14617;
			case -619000785:
				return 6937;
			case -618865920:
				return 7577;
			case -618847746:
				return 359;
			case -618634632:
				return 12509;
			case -618528434:
				return 9412;
			case -618091091:
				return 5184;
			case -617412316:
				return 11438;
			case -616942299:
				return 5145;
			case -616640423:
				return 10668;
			case -616614906:
				return 11650;
			case -616389462:
				return 13001;
			case -615631219:
				return 7435;
			case -615264098:
				return 5008;
			case -615160268:
				return 5879;
			case -615159064:
				return 6576;
			case -614708638:
				return 14869;
			case -613934142:
				return 5199;
			case -613519937:
				return 12884;
			case -613495995:
				return 12938;
			case -613374580:
				return 1718;
			case -613315343:
				return 11827;
			case -613130955:
				return 14299;
			case -613117661:
				return 5447;
			case -612365271:
				return 1725;
			case -611273175:
				return 5381;
			case -611198541:
				return 6786;
			case -610854642:
				return 6229;
			case -610439206:
				return 2688;
			case -610286515:
				return 9739;
			case -610244427:
				return 561;
			case -610087366:
				return 9890;
			case -609761007:
				return 11867;
			case -609449568:
				return 15853;
			case -609273307:
				return 1692;
			case -609170672:
				return 15450;
			case -608400720:
				return 10518;
			case -608054283:
				return 1943;
			case -608044113:
				return 11833;
			case -607893691:
				return 1921;
			case -607723543:
				return 14857;
			case -607414220:
				return 15041;
			case -607235640:
				return 10499;
			case -607200791:
				return 6149;
			case -607185856:
				return 3534;
			case -607108830:
				return 1682;
			case -606744369:
				return 8321;
			case -606260454:
				return 4774;
			case -605537042:
				return 1240;
			case -605490871:
				return 9949;
			case -605063130:
				return 6966;
			case -603478730:
				return 3161;
			case -603287954:
				return 11746;
			case -602902219:
				return 11351;
			case -602874159:
				return 13532;
			case -602694619:
				return 14380;
			case -602448518:
				return 5677;
			case -602401997:
				return 10160;
			case -602165537:
				return 2799;
			case -601464432:
				return 11665;
			case -601457400:
				return 16364;
			case -600811692:
				return 3855;
			case -600546268:
				return 2822;
			case -600415094:
				return 7409;
			case -600261373:
				return 798;
			case -600121033:
				return 8021;
			case -599228492:
				return 8880;
			case -598917269:
				return 14684;
			case -598873701:
				return 7897;
			case -598416243:
				return 2034;
			case -597664228:
				return 12893;
			case -597490818:
				return 11404;
			case -597362537:
				return 14949;
			case -597281244:
				return 9858;
			case -596604062:
				return 8529;
			case -596111403:
				return 3312;
			case -596041970:
				return 19;
			case -595735554:
				return 9402;
			case -595369584:
				return 13192;
			case -595212616:
				return 3499;
			case -594995305:
				return 2916;
			case -594986572:
				return 10235;
			case -594732550:
				return 1576;
			case -594510034:
				return 3631;
			case -593977465:
				return 6096;
			case -593884138:
				return 2556;
			case -593813585:
				return 14793;
			case -593689333:
				return 12716;
			case -593150738:
				return 14934;
			case -593056309:
				return 14722;
			case -592887111:
				return 15973;
			case -592873548:
				return 8844;
			case -592861175:
				return 13616;
			case -592214839:
				return 10551;
			case -591288884:
				return 5711;
			case -590870881:
				return 7496;
			case -590706868:
				return 3542;
			case -590471971:
				return 7711;
			case -589926798:
				return 13986;
			case -589747383:
				return 6100;
			case -589691288:
				return 3000;
			case -589512656:
				return 9657;
			case -589352772:
				return 10684;
			case -588735523:
				return 2122;
			case -588355879:
				return 16041;
			case -588095308:
				return 6092;
			case -588040882:
				return 14264;
			case -587928515:
				return 13746;
			case -587718658:
				return 2890;
			case -587276111:
				return 4179;
			case -586898625:
				return 14615;
			case -586861135:
				return 1928;
			case -586303162:
				return 11250;
			case -586283258:
				return 8930;
			case -586270506:
				return 5166;
			case -585976185:
				return 6178;
			case -585411782:
				return 5019;
			case -585408877:
				return 4032;
			case -585363224:
				return 16324;
			case -585028806:
				return 8228;
			case -584863530:
				return 8541;
			case -584835240:
				return 7195;
			case -584726884:
				return 11640;
			case -584148549:
				return 4777;
			case -583569159:
				return 10288;
			case -583159382:
				return 2666;
			case -582686820:
				return 1098;
			case -581714154:
				return 9188;
			case -581256491:
				return 10208;
			case -581006418:
				return 1387;
			case -580975805:
				return 15236;
			case -580917728:
				return 6185;
			case -580569765:
				return 7177;
			case -580353882:
				return 10414;
			case -580052172:
				return 16313;
			case -579321021:
				return 8584;
			case -578836779:
				return 8112;
			case -578784995:
				return 3345;
			case -578704757:
				return 14115;
			case -578596866:
				return 13932;
			case -578519503:
				return 1735;
			case -578371061:
				return 4043;
			case -578266785:
				return 7386;
			case -578203294:
				return 15491;
			case -577761603:
				return 16214;
			case -577606686:
				return 5880;
			case -577592048:
				return 1820;
			case -577389891:
				return 3101;
			case -577269776:
				return 8605;
			case -576655009:
				return 12153;
			case -576349041:
				return 13634;
			case -576152939:
				return 12215;
			case -576101586:
				return 11831;
			case -575862898:
				return 11477;
			case -575759638:
				return 14646;
			case -575679864:
				return 242;
			case -575490883:
				return 2831;
			case -575340245:
				return 14744;
			case -574733546:
				return 1442;
			case -574394002:
				return 14007;
			case -574045783:
				return 13913;
			case -573885709:
				return 2568;
			case -573796372:
				return 1987;
			case -573751871:
				return 4391;
			case -573583707:
				return 2563;
			case -573466537:
				return 11983;
			case -573322324:
				return 6958;
			case -573272707:
				return 7280;
			case -572941403:
				return 15269;
			default:
				break;
		}
		if (iParam1 >= 1)
		{
		}
		return -1;
	}
	if (iParam0 <= -303231814)
	{
		switch (iParam0)
		{
			case -572292941:
				return 3760;
			case -572112063:
				return 14209;
			case -572035886:
				return 3453;
			case -571379797:
				return 13724;
			case -571195421:
				return 12409;
			case -570691410:
				return 14407;
			case -570685890:
				return 12046;
			case -570390444:
				return 14205;
			case -570302215:
				return 15881;
			case -570283770:
				return 5936;
			case -569930199:
				return 349;
			case -569689222:
				return 5180;
			case -569650817:
				return 928;
			case -569551783:
				return 9536;
			case -569477141:
				return 10395;
			case -569447711:
				return 12439;
			case -569142606:
				return 10676;
			case -569131374:
				return 4404;
			case -568744613:
				return 9622;
			case -568397134:
				return 67;
			case -567742977:
				return 1291;
			case -567698719:
				return 7101;
			case -567683395:
				return 7692;
			case -567509315:
				return 14019;
			case -566994313:
				return 3540;
			case -566878875:
				return 15158;
			case -566521753:
				return 1680;
			case -566130980:
				return 12047;
			case -565436466:
				return 1123;
			case -565321964:
				return 11017;
			case -565066530:
				return 273;
			case -564973564:
				return 5474;
			case -564943611:
				return 2810;
			case -564656592:
				return 3182;
			case -564656147:
				return 6044;
			case -564593667:
				return 615;
			case -564418820:
				return 12733;
			case -564099192:
				return 14530;
			case -563128603:
				return 4212;
			case -563045776:
				return 5491;
			case -562813217:
				return 14323;
			case -561975585:
				return 15709;
			case -561839536:
				return 3244;
			case -561610178:
				return 16322;
			case -560775579:
				return 10384;
			case -560633265:
				return 5857;
			case -560342419:
				return 14513;
			case -559281598:
				return 13453;
			case -559000589:
				return 2631;
			case -558387714:
				return 5797;
			case -558355838:
				return 1007;
			case -558131359:
				return 15082;
			case -557820126:
				return 1888;
			case -557781132:
				return 15484;
			case -557356178:
				return 10557;
			case -557149691:
				return 15373;
			case -556870915:
				return 15378;
			case -556763978:
				return 1115;
			case -556757359:
				return 16380;
			case -556702806:
				return 6588;
			case -556684967:
				return 415;
			case -555539754:
				return 7196;
			case -555446054:
				return 12334;
			case -554905257:
				return 5839;
			case -554831148:
				return 7947;
			case -554089691:
				return 13132;
			case -554014433:
				return 3526;
			case -553582603:
				return 16072;
			case -553285328:
				return 5155;
			case -552942159:
				return 2329;
			case -552837767:
				return 12250;
			case -551959181:
				return 216;
			case -551806861:
				return 8018;
			case -551453668:
				return 11596;
			case -551216071:
				return 15361;
			case -551182035:
				return 8935;
			case -551131381:
				return 13162;
			case -551119418:
				return 11747;
			case -551054210:
				return 5615;
			case -551026930:
				return 5872;
			case -550943312:
				return 3278;
			case -550917696:
				return 11307;
			case -550679056:
				return 1997;
			case -550539090:
				return 12488;
			case -550533552:
				return 583;
			case -550456302:
				return 809;
			case -550289621:
				return 15012;
			case -550160250:
				return 12969;
			case -550091683:
				return 11393;
			case -549777546:
				return 10848;
			case -549534467:
				return 7778;
			case -549078622:
				return 527;
			case -548960886:
				return 5488;
			case -548778324:
				return 15345;
			case -548150401:
				return 3107;
			case -548014618:
				return 14635;
			case -547982328:
				return 10760;
			case -547620979:
				return 15774;
			case -546878645:
				return 9911;
			case -546862027:
				return 1124;
			case -546701523:
				return 399;
			case -546133941:
				return 15987;
			case -546124888:
				return 2722;
			case -545551267:
				return 6210;
			case -545522510:
				return 5240;
			case -545482240:
				return 10161;
			case -544901073:
				return 3487;
			case -544816550:
				return 14440;
			case -544209874:
				return 13836;
			case -544190016:
				return 16312;
			case -544167392:
				return 592;
			case -544132417:
				return 4782;
			case -543862673:
				return 199;
			case -543748383:
				return 8597;
			case -543727662:
				return 15898;
			case -543041498:
				return 12824;
			case -543027428:
				return 3514;
			case -542955242:
				return 2637;
			case -542529399:
				return 15673;
			case -542504583:
				return 10045;
			case -542454775:
				return 7294;
			case -542401398:
				return 6561;
			case -542120195:
				return 7034;
			case -541762431:
				return 14741;
			case -541479167:
				return 7732;
			case -540577738:
				return 3224;
			case -540567536:
				return 12542;
			case -540451414:
				return 8595;
			case -539745906:
				return 7919;
			case -539665360:
				return 12789;
			case -539600078:
				return 714;
			case -539334161:
				return 11412;
			case -539333605:
				return 271;
			case -539142948:
				return 5539;
			case -539132616:
				return 10068;
			case -538929665:
				return 12780;
			case -538716758:
				return 13854;
			case -538512200:
				return 15015;
			case -538306884:
				return 2036;
			case -538099103:
				return 11698;
			case -537983218:
				return 15342;
			case -537902555:
				return 2411;
			case -536490749:
				return 1780;
			case -536427285:
				return 9397;
			case -536099595:
				return 1859;
			case -535818257:
				return 2984;
			case -535756918:
				return 4085;
			case -535753978:
				return 2124;
			case -535404896:
				return 15331;
			case -535203454:
				return 3389;
			case -535164687:
				return 5554;
			case -534527147:
				return 2514;
			case -534058408:
				return 16081;
			case -533644236:
				return 10409;
			case -533422685:
				return 3671;
			case -533197982:
				return 13669;
			case -533167218:
				return 5232;
			case -533072162:
				return 14050;
			case -532511713:
				return 7260;
			case -532463888:
				return 14009;
			case -532378284:
				return 16226;
			case -531591311:
				return 6790;
			case -531446955:
				return 13896;
			case -531324697:
				return 9416;
			case -531265428:
				return 15739;
			case -530196309:
				return 4826;
			case -530195346:
				return 15666;
			case -529935304:
				return 8354;
			case -529814375:
				return 1770;
			case -529713881:
				return 225;
			case -528910707:
				return 15496;
			case -528823185:
				return 922;
			case -528554680:
				return 10361;
			case -527880237:
				return 1978;
			case -527591399:
				return 4134;
			case -526947582:
				return 10619;
			case -526404170:
				return 1715;
			case -526169133:
				return 14712;
			case -525684371:
				return 1413;
			case -525444146:
				return 10098;
			case -525368823:
				return 5464;
			case -524909795:
				return 1397;
			case -524581275:
				return 7418;
			case -523396680:
				return 13395;
			case -522739022:
				return 15260;
			case -522506570:
				return 2714;
			case -522506361:
				return 9128;
			case -522328131:
				return 2755;
			case -521690062:
				return 2905;
			case -521377860:
				return 5713;
			case -521273785:
				return 430;
			case -521014358:
				return 9671;
			case -520401914:
				return 9074;
			case -520350323:
				return 1088;
			case -520066123:
				return 1793;
			case -519605233:
				return 8324;
			case -519352816:
				return 2387;
			case -519217622:
				return 13838;
			case -519178960:
				return 433;
			case -519097058:
				return 2057;
			case -518915402:
				return 16353;
			case -518382652:
				return 4517;
			case -518341299:
				return 7516;
			case -517766589:
				return 2170;
			case -517756357:
				return 6680;
			case -517483747:
				return 1462;
			case -516594478:
				return 13576;
			case -515827244:
				return 12071;
			case -515785924:
				return 3565;
			case -515752113:
				return 16452;
			case -515502944:
				return 13152;
			case -515337125:
				return 7374;
			case -515017711:
				return 12491;
			case -514432175:
				return 15889;
			case -514423293:
				return 15931;
			case -514339746:
				return 12961;
			case -514075829:
				return 13137;
			case -514064436:
				return 6131;
			case -513927548:
				return 6393;
			case -513462328:
				return 11441;
			case -513070835:
				return 1047;
			case -512762510:
				return 5114;
			case -512067586:
				return 1599;
			case -511226781:
				return 5621;
			case -511163808:
				return 15363;
			case -510535441:
				return 13995;
			case -510303926:
				return 5216;
			case -509732271:
				return 4309;
			case -509256108:
				return 4968;
			case -508554914:
				return 12011;
			case -508462670:
				return 13179;
			case -508339389:
				return 15107;
			case -508322556:
				return 12586;
			case -508321007:
				return 2376;
			case -508274001:
				return 7500;
			case -507660561:
				return 36;
			case -507254331:
				return 3815;
			case -506576686:
				return 10741;
			case -506452621:
				return 188;
			case -506420884:
				return 4169;
			case -506410273:
				return 12759;
			case -506213182:
				return 8494;
			case -506195859:
				return 7794;
			case -505984890:
				return 15690;
			case -505794631:
				return 780;
			case -505746579:
				return 12367;
			case -505389389:
				return 13657;
			case -505322829:
				return 10317;
			case -505315486:
				return 13076;
			case -505274693:
				return 11038;
			case -505112475:
				return 15584;
			case -504877907:
				return 6512;
			case -504629525:
				return 3326;
			case -504306501:
				return 11782;
			case -503883705:
				return 1627;
			case -503751164:
				return 8887;
			case -503626004:
				return 4425;
			case -503506965:
				return 967;
			case -503427116:
				return 14485;
			case -503386070:
				return 12521;
			case -503032343:
				return 15203;
			case -502870451:
				return 4823;
			case -502353725:
				return 5066;
			case -501960712:
				return 4647;
			case -501729734:
				return 6917;
			case -501480469:
				return 5754;
			case -501367254:
				return 13642;
			case -501035397:
				return 12419;
			case -499992081:
				return 14861;
			case -499985133:
				return 2001;
			case -498929802:
				return 4781;
			case -498915374:
				return 15191;
			case -498263402:
				return 11767;
			case -497717277:
				return 5391;
			case -497660817:
				return 6769;
			case -497395380:
				return 1847;
			case -497281522:
				return 2364;
			case -496806198:
				return 13618;
			case -496525845:
				return 5128;
			case -496393005:
				return 3048;
			case -495972108:
				return 3669;
			case -495199054:
				return 6156;
			case -495170740:
				return 5853;
			case -494955083:
				return 12344;
			case -494859237:
				return 12299;
			case -494496318:
				return 12403;
			case -494460317:
				return 9656;
			case -494438674:
				return 1572;
			case -494116837:
				return 2659;
			case -493531373:
				return 7315;
			case -493182659:
				return 15834;
			case -492493913:
				return 6166;
			case -492112173:
				return 12850;
			case -491982416:
				return 6384;
			case -491906728:
				return 13607;
			case -491690754:
				return 5407;
			case -491317460:
				return 601;
			case -491019543:
				return 10655;
			case -490236877:
				return 10570;
			case -490016577:
				return 4311;
			case -489803621:
				return 16400;
			case -489668873:
				return 7988;
			case -489515861:
				return 15159;
			case -489402497:
				return 10828;
			case -489249243:
				return 11566;
			case -488761342:
				return 3322;
			case -488735548:
				return 2203;
			case -488157121:
				return 11843;
			case -487951924:
				return 6402;
			case -487605922:
				return 1632;
			case -486577432:
				return 10017;
			case -486390692:
				return 16285;
			case -485962908:
				return 7096;
			case -485945050:
				return 9687;
			case -485685256:
				return 15400;
			case -485409951:
				return 6423;
			case -485407369:
				return 8096;
			case -484755333:
				return 11265;
			case -484683191:
				return 2839;
			case -484646511:
				return 12917;
			case -484508503:
				return 2690;
			case -484295669:
				return 13861;
			case -483892881:
				return 9282;
			case -483602017:
				return 6551;
			case -483441123:
				return 6110;
			case -483349213:
				return 12249;
			case -483153410:
				return 1892;
			case -482668631:
				return 9133;
			case -482517719:
				return 11623;
			case -482258956:
				return 4087;
			case -481681561:
				return 9489;
			case -481469133:
				return 145;
			case -481215611:
				return 1473;
			case -480802098:
				return 11935;
			case -480661915:
				return 3784;
			case -480618568:
				return 12502;
			case -479539844:
				return 8306;
			case -479450355:
				return 9164;
			case -479277601:
				return 1896;
			case -478711603:
				return 13583;
			case -478669932:
				return 3927;
			case -478625763:
				return 7321;
			case -478446069:
				return 11594;
			case -477904875:
				return 7017;
			case -477839545:
				return 13959;
			case -477838102:
				return 11844;
			case -477388537:
				return 5666;
			case -477207570:
				return 10487;
			case -477054544:
				return 11696;
			case -476946651:
				return 8647;
			case -476320479:
				return 15725;
			case -476292199:
				return 4725;
			case -475791515:
				return 10430;
			case -475278862:
				return 6225;
			case -474929359:
				return 5306;
			case -474442526:
				return 12527;
			case -474404988:
				return 7244;
			case -474340954:
				return 6283;
			case -474295344:
				return 3047;
			case -472825431:
				return 6234;
			case -472728197:
				return 7704;
			case -472197987:
				return 4954;
			case -471671940:
				return 7914;
			case -470713461:
				return 2289;
			case -470557167:
				return 4492;
			case -470085637:
				return 9990;
			case -470001623:
				return 5458;
			case -469509291:
				return 10491;
			case -468934984:
				return 14893;
			case -468873552:
				return 9710;
			case -468627598:
				return 2184;
			case -468521395:
				return 4315;
			case -467725665:
				return 9399;
			case -467664954:
				return 10888;
			case -467287460:
				return 14361;
			case -467224890:
				return 5637;
			case -466917919:
				return 5579;
			case -466791489:
				return 12043;
			case -466769455:
				return 5332;
			case -466687768:
				return 14745;
			case -466677552:
				return 13500;
			case -466054788:
				return 14769;
			case -465636116:
				return 9688;
			case -465158544:
				return 11537;
			case -464898379:
				return 13783;
			case -464747260:
				return 13278;
			case -464684897:
				return 15042;
			case -464583683:
				return 11561;
			case -464036502:
				return 9898;
			case -463917452:
				return 7792;
			case -463887195:
				return 15960;
			case -463612011:
				return 12874;
			case -463363943:
				return 11738;
			case -462883214:
				return 6063;
			case -462607473:
				return 5244;
			case -462253601:
				return 11298;
			case -461773500:
				return 15768;
			case -461768007:
				return 15713;
			case -461722858:
				return 16013;
			case -461499098:
				return 11442;
			case -461087836:
				return 6998;
			case -460918927:
				return 15921;
			case -460889373:
				return 3444;
			case -460742556:
				return 2359;
			case -460686655:
				return 7865;
			case -460349319:
				return 5413;
			case -459043872:
				return 5356;
			case -458984299:
				return 4091;
			case -458806931:
				return 1635;
			case -458483522:
				return 9623;
			case -458420031:
				return 8934;
			case -458397856:
				return 14595;
			case -458038805:
				return 3616;
			case -457792588:
				return 11847;
			case -457703463:
				return 4794;
			case -457150080:
				return 9142;
			case -456676572:
				return 13823;
			case -456373519:
				return 2468;
			case -456218229:
				return 9082;
			case -455330719:
				return 12429;
			case -455186499:
				return 2528;
			case -455166063:
				return 3723;
			case -454661055:
				return 15257;
			case -454179928:
				return 13024;
			case -454044885:
				return 13925;
			case -452612240:
				return 13425;
			case -452224784:
				return 14567;
			case -451979629:
				return 2208;
			case -451402840:
				return 13999;
			case -451383412:
				return 2483;
			case -451122991:
				return 10466;
			case -450823691:
				return 3185;
			case -450300420:
				return 1229;
			case -450226655:
				return 15072;
			case -450213038:
				return 7905;
			case -450053710:
				return 14588;
			case -450044044:
				return 8773;
			case -449704584:
				return 4601;
			case -449688053:
				return 11699;
			case -449588556:
				return 14825;
			case -449150372:
				return 10114;
			case -448897654:
				return 2330;
			case -448540067:
				return 3952;
			case -448332986:
				return 1378;
			case -448166606:
				return 3468;
			case -447541577:
				return 13217;
			case -447251812:
				return 91;
			case -447184114:
				return 3118;
			case -447149738:
				return 5092;
			case -446762581:
				return 11335;
			case -446539351:
				return 9860;
			case -446524645:
				return 4852;
			case -446093729:
				return 15128;
			case -445968941:
				return 4225;
			case -445472684:
				return 15438;
			case -445365508:
				return 3590;
			case -445327046:
				return 2421;
			case -444971314:
				return 5533;
			case -444755962:
				return 6266;
			case -444689060:
				return 8760;
			case -444610976:
				return 14596;
			case -444131232:
				return 16340;
			case -443902348:
				return 7934;
			case -443733716:
				return 7240;
			case -443619788:
				return 5010;
			case -443502198:
				return 2141;
			case -443425498:
				return 5552;
			case -443348933:
				return 11503;
			case -443131503:
				return 15946;
			case -442637258:
				return 6232;
			case -442581650:
				return 1429;
			case -442526472:
				return 7890;
			case -442500102:
				return 589;
			case -442109400:
				return 3170;
			case -442087207:
				return 7443;
			case -441931087:
				return 12940;
			case -441696329:
				return 9605;
			case -441641109:
				return 9032;
			case -441593240:
				return 9515;
			case -441265845:
				return 4988;
			case -441052688:
				return 8079;
			case -440982370:
				return 4755;
			case -440924611:
				return 12962;
			case -440773666:
				return 4531;
			case -440592386:
				return 3513;
			case -440179703:
				return 14099;
			case -439942808:
				return 2907;
			case -439873673:
				return 16219;
			case -439711618:
				return 7324;
			case -439429058:
				return 14872;
			case -439345079:
				return 15653;
			case -438696255:
				return 16182;
			case -438618302:
				return 2526;
			case -438209634:
				return 8433;
			case -438180489:
				return 3240;
			case -437867473:
				return 4131;
			case -437812170:
				return 5396;
			case -437493635:
				return 12551;
			case -437426994:
				return 15486;
			case -437381673:
				return 11811;
			case -436846976:
				return 7696;
			case -436760395:
				return 625;
			case -436606401:
				return 10391;
			case -436277034:
				return 11706;
			case -435967067:
				return 2069;
			case -435372404:
				return 13892;
			case -434515994:
				return 5005;
			case -434431529:
				return 11647;
			case -433736926:
				return 5513;
			case -433729991:
				return 3046;
			case -433544137:
				return 283;
			case -433017802:
				return 4840;
			case -432685019:
				return 11439;
			case -432586381:
				return 7907;
			case -432524337:
				return 16413;
			case -432147415:
				return 15632;
			case -432098431:
				return 6111;
			case -431386968:
				return 1804;
			case -431173091:
				return 6797;
			case -430974470:
				return 10276;
			case -430860684:
				return 6770;
			case -429939972:
				return 11708;
			case -429285214:
				return 11367;
			case -427946891:
				return 10558;
			case -427852958:
				return 5967;
			case -427531398:
				return 11885;
			case -427462972:
				return 13872;
			case -427002080:
				return 2549;
			case -426226845:
				return 10002;
			case -426222586:
				return 12872;
			case -426010680:
				return 3248;
			case -425233323:
				return 6610;
			case -425191386:
				return 14241;
			case -425139137:
				return 9307;
			case -424977729:
				return 129;
			case -424856623:
				return 7558;
			case -424822072:
				return 11529;
			case -424444243:
				return 11955;
			case -424341947:
				return 1870;
			case -424180136:
				return 5401;
			case -423942800:
				return 15763;
			case -423548162:
				return 13204;
			case -423174273:
				return 6921;
			case -423117050:
				return 11731;
			case -423025775:
				return 7125;
			case -422989395:
				return 2331;
			case -422937996:
				return 14790;
			case -422520518:
				return 1016;
			case -422293010:
				return 11397;
			case -422239982:
				return 11340;
			case -422220273:
				return 6439;
			case -422040390:
				return 358;
			case -421241763:
				return 12766;
			case -420625069:
				return 7002;
			case -420599285:
				return 14674;
			case -419756450:
				return 5478;
			case -419213835:
				return 13558;
			case -418497553:
				return 10170;
			case -418218079:
				return 8501;
			case -418113348:
				return 4544;
			case -418001834:
				return 982;
			case -417506377:
				return 891;
			case -417416199:
				return 14653;
			case -417342035:
				return 3754;
			case -417335499:
				return 8961;
			case -417249490:
				return 8312;
			case -416142262:
				return 13199;
			case -415878593:
				return 16416;
			case -415485117:
				return 11360;
			case -414951324:
				return 13508;
			case -414593365:
				return 7146;
			case -414286126:
				return 14147;
			case -414284023:
				return 3343;
			case -413671895:
				return 15196;
			case -413618519:
				return 2872;
			case -413529482:
				return 6539;
			case -413394676:
				return 541;
			case -413363220:
				return 1838;
			case -413263691:
				return 2656;
			case -413086509:
				return 10394;
			case -412742169:
				return 6055;
			case -412645359:
				return 3618;
			case -412314273:
				return 2385;
			case -411953028:
				return 15800;
			case -411882882:
				return 8667;
			case -411733718:
				return 12597;
			case -411543322:
				return 9042;
			case -411388791:
				return 496;
			case -411270448:
				return 13658;
			case -410898258:
				return 906;
			case -410866850:
				return 15506;
			case -410195220:
				return 5718;
			case -409861534:
				return 10450;
			case -409478914:
				return 8761;
			case -409100651:
				return 11146;
			case -408931327:
				return 2155;
			case -408853458:
				return 3585;
			case -408262180:
				return 3313;
			case -408003354:
				return 6647;
			case -407730502:
				return 14773;
			case -407645735:
				return 3653;
			case -407010251:
				return 15750;
			case -406439796:
				return 7756;
			case -406198725:
				return 10940;
			case -405764137:
				return 7139;
			case -405712730:
				return 605;
			case -405196566:
				return 14476;
			case -404960797:
				return 9669;
			case -404939929:
				return 10129;
			case -404352886:
				return 5873;
			case -403706888:
				return 3672;
			case -403588802:
				return 460;
			case -403569214:
				return 2906;
			case -403483966:
				return 3024;
			case -403470324:
				return 14609;
			case -403301546:
				return 9832;
			case -403284243:
				return 4883;
			case -403253893:
				return 12131;
			case -402585707:
				return 10963;
			case -401972648:
				return 15527;
			case -401892616:
				return 13426;
			case -401351736:
				return 7599;
			case -401156743:
				return 9773;
			case -400803377:
				return 7856;
			case -400140228:
				return 7287;
			case -400066728:
				return 15735;
			case -400005393:
				return 2632;
			case -399859979:
				return 15647;
			case -399697037:
				return 9866;
			case -399638686:
				return 2776;
			case -399563751:
				return 507;
			case -398894636:
				return 2752;
			case -398686337:
				return 10293;
			case -398611348:
				return 971;
			case -398260032:
				return 3063;
			case -398145468:
				return 2229;
			case -398036248:
				return 7622;
			case -397705913:
				return 3440;
			case -397626037:
				return 16465;
			case -397513868:
				return 14467;
			case -397099226:
				return 8884;
			case -397064713:
				return 266;
			case -396933308:
				return 6528;
			case -396316611:
				return 406;
			case -396171861:
				return 5023;
			case -396037363:
				return 3982;
			case -395044301:
				return 3774;
			case -394859551:
				return 7071;
			case -394690463:
				return 2125;
			case -394271395:
				return 15194;
			case -394012119:
				return 12543;
			case -393743480:
				return 11016;
			case -393729408:
				return 9684;
			case -393405668:
				return 13976;
			case -393054991:
				return 14436;
			case -392984737:
				return 11595;
			case -392948950:
				return 11394;
			case -392930415:
				return 2502;
			case -392326236:
				return 9495;
			case -392293414:
				return 9593;
			case -392183693:
				return 16434;
			case -391335725:
				return 4100;
			case -390782395:
				return 4585;
			case -390599922:
				return 15464;
			case -390289284:
				return 16204;
			case -390193522:
				return 5139;
			case -390136947:
				return 14652;
			case -389790005:
				return 14538;
			case -389642760:
				return 7381;
			case -389640958:
				return 12447;
			case -389602314:
				return 6312;
			case -389300196:
				return 15364;
			case -389254354:
				return 7490;
			case -388963020:
				return 8266;
			case -388027337:
				return 6181;
			case -387964942:
				return 11434;
			case -387802162:
				return 7452;
			case -387647150:
				return 2413;
			case -387429087:
				return 3200;
			case -387389405:
				return 1031;
			case -387167400:
				return 452;
			case -387033449:
				return 12721;
			case -386678104:
				return 6864;
			case -386131036:
				return 11692;
			case -385535808:
				return 5828;
			case -385493140:
				return 2843;
			case -385116617:
				return 4509;
			case -384984120:
				return 15;
			case -384779855:
				return 15469;
			case -384569888:
				return 3873;
			case -384354290:
				return 16062;
			case -384257010:
				return 5639;
			case -384065410:
				return 9966;
			case -383978002:
				return 1612;
			case -383747759:
				return 5386;
			case -383668623:
				return 2063;
			case -383334360:
				return 8133;
			case -382923216:
				return 4236;
			case -382744681:
				return 13230;
			case -382549421:
				return 9355;
			case -382419755:
				return 10528;
			case -382399581:
				return 5247;
			case -382304404:
				return 7597;
			case -382289692:
				return 6089;
			case -382289306:
				return 1217;
			case -382063176:
				return 12004;
			case -381992152:
				return 9214;
			case -381691462:
				return 7592;
			case -381533943:
				return 11528;
			case -381312827:
				return 11644;
			case -381169277:
				return 12207;
			case -380714430:
				return 8314;
			case -380375467:
				return 12351;
			case -380009844:
				return 14088;
			case -379287593:
				return 12325;
			case -378974401:
				return 16088;
			case -378887090:
				return 7132;
			case -378814141:
				return 16113;
			case -378732805:
				return 14498;
			case -377501627:
				return 6826;
			case -377223963:
				return 15708;
			case -377157708:
				return 14411;
			case -376819271:
				return 14249;
			case -376499524:
				return 472;
			case -376188848:
				return 4395;
			case -375834619:
				return 12037;
			case -375726442:
				return 2232;
			case -375651986:
				return 12442;
			case -375461408:
				return 1823;
			case -374595783:
				return 5497;
			case -374067997:
				return 13867;
			case -373817191:
				return 15264;
			case -373053921:
				return 10147;
			case -372969613:
				return 15417;
			case -372843935:
				return 147;
			case -372794047:
				return 6578;
			case -372641392:
				return 11118;
			case -372415361:
				return 2845;
			case -372304025:
				return 11423;
			case -372292921:
				return 594;
			case -372258676:
				return 3912;
			case -371501934:
				return 14235;
			case -371386052:
				return 3022;
			case -371151161:
				return 15781;
			case -371133879:
				return 1577;
			case -370948464:
				return 12646;
			case -370898707:
				return 43;
			case -370715248:
				return 7816;
			case -370372976:
				return 1022;
			case -370345320:
				return 1141;
			case -370340297:
				return 999;
			case -370296889:
				return 1105;
			case -370211811:
				return 11545;
			case -370153733:
				return 5087;
			case -370090887:
				return 4186;
			case -369841376:
				return 16058;
			case -369366882:
				return 7027;
			case -368931808:
				return 9301;
			case -368495489:
				return 6963;
			case -368368059:
				return 10789;
			case -368093689:
				return 12728;
			case -367734953:
				return 12888;
			case -367441508:
				return 2435;
			case -366959609:
				return 8987;
			case -366324450:
				return 5390;
			case -365594395:
				return 3406;
			case -364228531:
				return 15852;
			case -364093783:
				return 5662;
			case -363718050:
				return 10800;
			case -363708904:
				return 15884;
			case -363611516:
				return 10241;
			case -363523551:
				return 5289;
			case -363224084:
				return 3472;
			case -362833340:
				return 12292;
			case -362746657:
				return 13488;
			case -362236926:
				return 15442;
			case -361944149:
				return 9983;
			case -361441411:
				return 4482;
			case -361010938:
				return 6624;
			case -360373953:
				return 12908;
			case -360284465:
				return 14126;
			case -359926761:
				return 5652;
			case -359794697:
				return 5610;
			case -359677198:
				return 10169;
			case -359586362:
				return 1172;
			case -359242103:
				return 9242;
			case -359094409:
				return 5526;
			case -358735160:
				return 3646;
			case -358417759:
				return 12894;
			case -357997396:
				return 6343;
			case -357861459:
				return 506;
			case -357595906:
				return 6087;
			case -357526070:
				return 11409;
			case -357149912:
				return 6101;
			case -357119702:
				return 112;
			case -356931137:
				return 4073;
			case -356176446:
				return 12425;
			case -355611064:
				return 14015;
			case -355413556:
				return 10104;
			case -355385988:
				return 15332;
			case -355147137:
				return 6211;
			case -355112508:
				return 5268;
			case -354890084:
				return 11914;
			case -354882929:
				return 3705;
			case -354592894:
				return 15089;
			case -354573716:
				return 15174;
			case -354194886:
				return 14127;
			case -354016202:
				return 11444;
			case -353422963:
				return 9187;
			case -353041477:
				return 5294;
			case -352220240:
				return 14063;
			case -352199964:
				return 7600;
			case -352167177:
				return 2442;
			case -352087452:
				return 13245;
			case -351933124:
				return 11800;
			case -351866690:
				return 10911;
			case -351538474:
				return 9019;
			case -351238418:
				return 7986;
			case -351047016:
				return 1941;
			case -350926109:
				return 9376;
			case -350793195:
				return 1607;
			case -350742220:
				return 4822;
			case -350312914:
				return 15411;
			case -350279662:
				return 7279;
			case -350261633:
				return 2885;
			case -350169314:
				return 15016;
			case -350098659:
				return 4902;
			case -349955305:
				return 9584;
			case -349902015:
				return 13933;
			case -349669171:
				return 2519;
			case -349506240:
				return 2238;
			case -349278483:
				return 12014;
			case -349151526:
				return 4652;
			case -349072009:
				return 2974;
			case -348580784:
				return 13050;
			case -348559929:
				return 10493;
			case -348510197:
				return 6239;
			case -348508546:
				return 9547;
			case -348464283:
				return 4698;
			case -348024448:
				return 2076;
			case -347653586:
				return 6951;
			case -347276241:
				return 13294;
			case -347078732:
				return 6248;
			case -346859492:
				return 5891;
			case -346700962:
				return 15165;
			case -346465058:
				return 5368;
			case -346344763:
				return 5325;
			case -346047364:
				return 4726;
			case -345511551:
				return 13312;
			case -345319425:
				return 1244;
			case -344467453:
				return 6227;
			case -344324534:
				return 12629;
			case -344240309:
				return 15359;
			case -344222081:
				return 14216;
			case -344184531:
				return 15488;
			case -343238839:
				return 5684;
			case -343178443:
				return 15290;
			case -342842795:
				return 3668;
			case -342279483:
				return 12490;
			case -342148081:
				return 13848;
			case -341027578:
				return 9506;
			case -340235659:
				return 11471;
			case -340143272:
				return 7839;
			case -339725240:
				return 7598;
			case -339710534:
				return 9161;
			case -339682083:
				return 4441;
			case -339570899:
				return 6490;
			case -339488957:
				return 13123;
			case -339415335:
				return 11294;
			case -339057312:
				return 9699;
			case -338772781:
				return 1060;
			case -337792880:
				return 12825;
			case -337687945:
				return 9492;
			case -336917423:
				return 826;
			case -336539838:
				return 2567;
			case -336384753:
				return 14319;
			case -336050505:
				return 9411;
			case -335869017:
				return 1086;
			case -335231575:
				return 8004;
			case -335101577:
				return 6208;
			case -334338025:
				return 13702;
			case -334274431:
				return 1376;
			case -333984578:
				return 10763;
			case -333589392:
				return 6078;
			case -333306018:
				return 11254;
			case -333290109:
				return 10829;
			case -332895663:
				return 5071;
			case -332787688:
				return 14482;
			case -331861824:
				return 8310;
			case -331838387:
				return 1072;
			case -331433139:
				return 13196;
			case -331256804:
				return 13416;
			case -330691926:
				return 10464;
			case -330571735:
				return 3049;
			case -330347423:
				return 2410;
			case -330298770:
				return 3735;
			case -330169050:
				return 18;
			case -330124917:
				return 14315;
			case -328923850:
				return 10130;
			case -328646391:
				return 3605;
			case -328097705:
				return 3478;
			case -326977692:
				return 4976;
			case -325734132:
				return 7978;
			case -325723911:
				return 13587;
			case -325703140:
				return 16379;
			case -325253911:
				return 3408;
			case -325149363:
				return 9152;
			case -324807411:
				return 16321;
			case -324695664:
				return 13253;
			case -324668470:
				return 11197;
			case -324451868:
				return 10504;
			case -324437483:
				return 1862;
			case -324076428:
				return 5931;
			case -323955801:
				return 12805;
			case -323460928:
				return 2186;
			case -323442978:
				return 11116;
			case -323096446:
				return 14864;
			case -323026525:
				return 13991;
			case -322180870:
				return 10610;
			case -322027995:
				return 7066;
			case -322021176:
				return 8268;
			case -321429959:
				return 14102;
			case -321394418:
				return 14438;
			case -321371573:
				return 1948;
			case -320779699:
				return 5248;
			case -320681257:
				return 5864;
			case -320102599:
				return 3076;
			case -319983629:
				return 4208;
			case -319458448:
				return 13159;
			case -319251451:
				return 14150;
			case -319088472:
				return 11781;
			case -319045207:
				return 14114;
			case -319027056:
				return 13481;
			case -318896190:
				return 10003;
			case -318877148:
				return 10055;
			case -318812086:
				return 14122;
			case -318348926:
				return 7156;
			case -318323904:
				return 545;
			case -318278790:
				return 14592;
			case -317883624:
				return 9273;
			case -317851969:
				return 7480;
			case -317359805:
				return 9342;
			case -317343140:
				return 12239;
			case -317229413:
				return 1798;
			case -316741165:
				return 1999;
			case -316569499:
				return 663;
			case -316125076:
				return 557;
			case -316048113:
				return 8212;
			case -316029865:
				return 9621;
			case -315211274:
				return 4935;
			case -315000398:
				return 5346;
			case -314597692:
				return 5961;
			case -314286682:
				return 10396;
			case -314112878:
				return 2848;
			case -313917619:
				return 13224;
			case -313881588:
				return 1852;
			case -313439178:
				return 10868;
			case -313102936:
				return 15465;
			case -312814636:
				return 2664;
			case -311956772:
				return 8151;
			case -311897030:
				return 7064;
			case -311660447:
				return 3271;
			case -311409426:
				return 1874;
			case -311392807:
				return 10048;
			case -310853585:
				return 14901;
			case -310160435:
				return 13153;
			case -310114082:
				return 6893;
			case -309903187:
				return 3336;
			case -309702053:
				return 11763;
			case -309673877:
				return 5257;
			case -309432402:
				return 1869;
			case -309146763:
				return 5427;
			case -309092729:
				return 850;
			case -309091395:
				return 11952;
			case -308673645:
				return 10365;
			case -308332370:
				return 15827;
			case -308302453:
				return 12441;
			case -308276427:
				return 8590;
			case -308208849:
				return 11421;
			case -307476755:
				return 445;
			case -307294342:
				return 4292;
			case -307225152:
				return 1562;
			case -306475555:
				return 2777;
			case -306266574:
				return 3594;
			case -306120918:
				return 16121;
			case -306031700:
				return 9424;
			case -305837470:
				return 6293;
			case -305746106:
				return 9859;
			case -305638854:
				return 7056;
			case -305534045:
				return 11103;
			case -305521591:
				return 11349;
			case -305338532:
				return 7246;
			case -305268174:
				return 769;
			case -304744035:
				return 10700;
			case -304376856:
				return 16268;
			case -304363879:
				return 4384;
			case -304029326:
				return 12228;
			case -303924234:
				return 172;
			case -303248889:
				return 7323;
			case -303231814:
				return 2790;
			default:
				break;
		}
		if (iParam1 >= 1)
		{
		}
		return -1;
	}
	if (iParam0 <= -51902725)
	{
		switch (iParam0)
		{
			case -303002973:
				return 318;
			case -302968547:
				return 11216;
			case -302637951:
				return 16077;
			case -301746888:
				return 8557;
			case -301707887:
				return 12647;
			case -301406110:
				return 5466;
			case -300867788:
				return 14561;
			case -300816757:
				return 4393;
			case -300729381:
				return 7870;
			case -300382889:
				return 4135;
			case -300376336:
				return 8040;
			case -300161239:
				return 6315;
			case -299656989:
				return 12134;
			case -299511520:
				return 5201;
			case -299176488:
				return 6106;
			case -298518646:
				return 9580;
			case -298235932:
				return 3090;
			case -297939939:
				return 3962;
			case -297456495:
				return 8301;
			case -297086288:
				return 16398;
			case -297063942:
				return 1844;
			case -297038508:
				return 3084;
			case -296963090:
				return 6443;
			case -296629200:
				return 11275;
			case -296561572:
				return 10821;
			case -296481795:
				return 8473;
			case -296158892:
				return 4405;
			case -296113005:
				return 7138;
			case -295546062:
				return 6675;
			case -295414714:
				return 14463;
			case -295343524:
				return 9460;
			case -294963065:
				return 5710;
			case -294955637:
				return 8852;
			case -294955008:
				return 7485;
			case -294911754:
				return 15383;
			case -294392875:
				return 6672;
			case -294380439:
				return 12361;
			case -294352912:
				return 15682;
			case -294292964:
				return 12622;
			case -294244050:
				return 2060;
			case -294204092:
				return 4301;
			case -293960214:
				return 12547;
			case -293931520:
				return 13708;
			case -293448458:
				return 14493;
			case -293386706:
				return 9624;
			case -293293600:
				return 1375;
			case -293165916:
				return 4501;
			case -292997097:
				return 14522;
			case -292924774:
				return 9278;
			case -292796790:
				return 16034;
			case -292785143:
				return 11533;
			case -292520311:
				return 6060;
			case -292408609:
				return 535;
			case -291363769:
				return 1922;
			case -291277537:
				return 12563;
			case -291274251:
				return 10287;
			case -291109262:
				return 9776;
			case -290651569:
				return 8276;
			case -290636192:
				return 2420;
			case -290516614:
				return 10752;
			case -290406463:
				return 3097;
			case -290375866:
				return 15470;
			case -290364907:
				return 3481;
			case -290265603:
				return 15252;
			case -290145022:
				return 6796;
			case -289696537:
				return 11248;
			case -289651159:
				return 5636;
			case -289516678:
				return 4738;
			case -289185496:
				return 1855;
			case -289157556:
				return 3249;
			case -288513010:
				return 5761;
			case -288182389:
				return 8161;
			case -288068792:
				return 14983;
			case -288040042:
				return 15623;
			case -287983158:
				return 3250;
			case -287832873:
				return 6752;
			case -287794981:
				return 8921;
			case -287697559:
				return 74;
			case -287504579:
				return 14208;
			case -287202633:
				return 6017;
			case -286514070:
				return 4971;
			case -286365227:
				return 13840;
			case -286332247:
				return 9111;
			case -285977940:
				return 11218;
			case -285944800:
				return 3742;
			case -285919527:
				return 9602;
			case -285866914:
				return 15984;
			case -285808301:
				return 193;
			case -285798272:
				return 14885;
			case -285747454:
				return 6414;
			case -285265191:
				return 10995;
			case -285263113:
				return 6962;
			case -285147620:
				return 1678;
			case -284970986:
				return 1979;
			case -284738383:
				return 11332;
			case -283964587:
				return 3942;
			case -283764161:
				return 7882;
			case -283608232:
				return 512;
			case -283376558:
				return 861;
			case -283162583:
				return 14487;
			case -283102943:
				return 3813;
			case -282719801:
				return 15948;
			case -282440811:
				return 7143;
			case -281959336:
				return 444;
			case -281297502:
				return 10094;
			case -281133997:
				return 5854;
			case -281129686:
				return 5549;
			case -280988606:
				return 4938;
			case -280819795:
				return 8689;
			case -280509335:
				return 9122;
			case -280038158:
				return 5153;
			case -279878805:
				return 11200;
			case -279774320:
				return 2105;
			case -279708644:
				return 14874;
			case -279692555:
				return 700;
			case -279657714:
				return 7436;
			case -279331215:
				return 11516;
			case -278966957:
				return 5511;
			case -278913256:
				return 14047;
			case -278753528:
				return 6287;
			case -278703853:
				return 11259;
			case -278477888:
				return 6450;
			case -278436748:
				return 6468;
			case -278050664:
				return 5723;
			case -277368452:
				return 12378;
			case -277146438:
				return 844;
			case -277102834:
				return 12363;
			case -277099305:
				return 4460;
			case -277030314:
				return 7008;
			case -277020666:
				return 1907;
			case -276754226:
				return 10657;
			case -276705334:
				return 15514;
			case -276471081:
				return 543;
			case -276135098:
				return 12027;
			case -276098853:
				return 15712;
			case -275984769:
				return 3761;
			case -275688577:
				return 14434;
			case -275669664:
				return 11405;
			case -275591385:
				return 16440;
			case -275121457:
				return 10775;
			case -275072610:
				return 12114;
			case -274901691:
				return 8952;
			case -274413916:
				return 8966;
			case -274346894:
				return 5424;
			case -274241402:
				return 9077;
			case -274058460:
				return 4763;
			case -273795724:
				return 14366;
			case -273401568:
				return 9791;
			case -273331221:
				return 1092;
			case -272936733:
				return 8923;
			case -272634447:
				return 15207;
			case -272492171:
				return 15213;
			case -271933046:
				return 7363;
			case -271611280:
				return 426;
			case -271467711:
				return 1391;
			case -271103175:
				return 4442;
			case -270976674:
				return 14300;
			case -270949728:
				return 13486;
			case -270827969:
				return 6702;
			case -270761253:
				return 15806;
			case -270677159:
				return 5067;
			case -270337268:
				return 2464;
			case -270197962:
				return 516;
			case -270090910:
				return 4839;
			case -269925634:
				return 16432;
			case -269665924:
				return 2699;
			case -269630824:
				return 2397;
			case -269536141:
				return 10612;
			case -269373164:
				return 10006;
			case -269152223:
				return 15989;
			case -268652310:
				return 8308;
			case -268613124:
				return 4914;
			case -268563004:
				return 7895;
			case -268374586:
				return 7247;
			case -268261834:
				return 4407;
			case -267898844:
				return 7181;
			case -267754260:
				return 15689;
			case -267739267:
				return 3228;
			case -267684262:
				return 261;
			case -267362697:
				return 9700;
			case -267136313:
				return 4708;
			case -266533537:
				return 7620;
			case -266456764:
				return 14197;
			case -266341753:
				return 7420;
			case -266240698:
				return 11232;
			case -265719023:
				return 15250;
			case -265576506:
				return 9955;
			case -265416768:
				return 1218;
			case -265115610:
				return 15740;
			case -264790543:
				return 14935;
			case -264437520:
				return 8267;
			case -264327383:
				return 3093;
			case -263886942:
				return 8065;
			case -263862001:
				return 9574;
			case -263489323:
				return 9534;
			case -263420923:
				return 9893;
			case -263328130:
				return 15155;
			case -262815733:
				return 12939;
			case -262678579:
				return 6509;
			case -262339715:
				return 2123;
			case -262120785:
				return 13641;
			case -261930923:
				return 3159;
			case -261346391:
				return 2910;
			case -261261261:
				return 11659;
			case -260936393:
				return 12977;
			case -260277067:
				return 1789;
			case -259264232:
				return 6349;
			case -259230234:
				return 15580;
			case -259212894:
				return 14173;
			case -259194383:
				return 6221;
			case -259156221:
				return 7946;
			case -258964962:
				return 6034;
			case -258491284:
				return 14468;
			case -258100591:
				return 2362;
			case -258046101:
				return 6463;
			case -257997824:
				return 4566;
			case -257948997:
				return 7623;
			case -257489756:
				return 3351;
			case -257389512:
				return 563;
			case -257039679:
				return 7951;
			case -256864123:
				return 8731;
			case -256426599:
				return 8631;
			case -255909318:
				return 5422;
			case -255643832:
				return 12349;
			case -255528136:
				return 11840;
			case -255416154:
				return 12298;
			case -254879387:
				return 14821;
			case -254772575:
				return 8061;
			case -254749493:
				return 6920;
			case -254540606:
				return 179;
			case -254396710:
				return 4514;
			case -254247808:
				return 10878;
			case -254232633:
				return 1959;
			case -254133531:
				return 15190;
			case -253991870:
				return 2239;
			case -253724177:
				return 13169;
			case -253049070:
				return 15077;
			case -253001825:
				return 11572;
			case -252580186:
				return 684;
			case -252486277:
				return 11911;
			case -251925321:
				return 289;
			case -251799237:
				return 1133;
			case -251692210:
				return 14278;
			case -251526012:
				return 11018;
			case -251500736:
				return 7343;
			case -251486557:
				return 16246;
			case -250947255:
				return 11980;
			case -250849782:
				return 7760;
			case -250573840:
				return 10203;
			case -250513555:
				return 7647;
			case -250228973:
				return 1532;
			case -249784185:
				return 9929;
			case -249007432:
				return 6554;
			case -248846456:
				return 13131;
			case -248746141:
				return 1002;
			case -247949261:
				return 1037;
			case -247895635:
				return 8542;
			case -247317110:
				return 12356;
			case -247265944:
				return 14662;
			case -246974183:
				return 5905;
			case -246883338:
				return 15862;
			case -246479717:
				return 7361;
			case -245619287:
				return 12478;
			case -245551229:
				return 16462;
			case -244533584:
				return 6485;
			case -244246985:
				return 16117;
			case -244117428:
				return 1486;
			case -243939265:
				return 13513;
			case -243249647:
				return 15866;
			case -243188398:
				return 14571;
			case -243150339:
				return 10720;
			case -243095072:
				return 4820;
			case -243035997:
				return 8214;
			case -242373107:
				return 13671;
			case -241620807:
				return 13005;
			case -241604415:
				return 5996;
			case -241566321:
				return 11199;
			case -241242121:
				return 7211;
			case -240887338:
				return 6888;
			case -240868494:
				return 7038;
			case -240849601:
				return 481;
			case -240789451:
				return 6669;
			case -240564201:
				return 7950;
			case -240480162:
				return 223;
			case -240376067:
				return 4845;
			case -239887287:
				return 4059;
			case -239549059:
				return 14022;
			case -238890053:
				return 15425;
			case -238808491:
				return 9854;
			case -238742942:
				return 954;
			case -238622185:
				return 14162;
			case -238593141:
				return 10541;
			case -238585893:
				return 11725;
			case -238490359:
				return 12544;
			case -238283475:
				return 14298;
			case -238249502:
				return 7983;
			case -238202707:
				return 12571;
			case -237906153:
				return 9104;
			case -237792864:
				return 8785;
			case -237551465:
				return 10512;
			case -237417366:
				return 873;
			case -237066087:
				return 10375;
			case -236946344:
				return 13787;
			case -236876989:
				return 479;
			case -236768944:
				return 1128;
			case -236730704:
				return 16032;
			case -236404306:
				return 7458;
			case -236381730:
				return 3800;
			case -236347221:
				return 9465;
			case -236124425:
				return 7362;
			case -235945995:
				return 9205;
			case -235579763:
				return 8841;
			case -235311116:
				return 6794;
			case -234987592:
				return 14459;
			case -234159968:
				return 3106;
			case -233934854:
				return 14926;
			case -233767701:
				return 14311;
			case -233570388:
				return 1659;
			case -233349291:
				return 10900;
			case -232859331:
				return 15874;
			case -232844578:
				return 15459;
			case -232829430:
				return 2451;
			case -232470153:
				return 2728;
			case -232384489:
				return 10494;
			case -231716018:
				return 670;
			case -231567875:
				return 6233;
			case -231430744:
				return 11629;
			case -230841083:
				return 2149;
			case -230719645:
				return 8114;
			case -230571598:
				return 2352;
			case -230556703:
				return 10722;
			case -229892460:
				return 8320;
			case -229772602:
				return 5929;
			case -229688157:
				return 14763;
			case -229669107:
				return 4587;
			case -229587575:
				return 8302;
			case -229552907:
				return 11424;
			case -229515418:
				return 13279;
			case -229065721:
				return 15096;
			case -228520146:
				return 3551;
			case -228445372:
				return 10410;
			case -228408181:
				return 11401;
			case -228303650:
				return 1009;
			case -228152077:
				return 13599;
			case -228043408:
				return 1445;
			case -227733739:
				return 1694;
			case -227607442:
				return 751;
			case -227367034:
				return 7701;
			case -226593475:
				return 1502;
			case -226403482:
				return 842;
			case -226275612:
				return 9337;
			case -225688214:
				return 11151;
			case -225512469:
				return 5359;
			case -225193215:
				return 7866;
			case -225140550:
				return 10524;
			case -225134139:
				return 6148;
			case -225093240:
				return 7825;
			case -223700355:
				return 37;
			case -223518686:
				return 4859;
			case -222431517:
				return 7421;
			case -222395764:
				return 10549;
			case -222162029:
				return 13743;
			case -222025305:
				return 15550;
			case -221824727:
				return 6420;
			case -221429085:
				return 1586;
			case -221394211:
				return 15524;
			case -220988301:
				return 14357;
			case -220925410:
				return 2210;
			case -220753214:
				return 13543;
			case -220745976:
				return 7981;
			case -220306315:
				return 5147;
			case -220223266:
				return 5080;
			case -219872574:
				return 390;
			case -219829341:
				return 6019;
			case -219601458:
				return 2172;
			case -219544750:
				return 8349;
			case -219378158:
				return 13394;
			case -219270629:
				return 12070;
			case -218991400:
				return 7296;
			case -218455090:
				return 11597;
			case -218189845:
				return 2588;
			case -217707982:
				return 8205;
			case -217707900:
				return 8165;
			case -217698819:
				return 14222;
			case -217135948:
				return 14695;
			case -216753906:
				return 15703;
			case -216561112:
				return 15005;
			case -216449106:
				return 12604;
			case -216303527:
				return 14718;
			case -215882404:
				return 2918;
			case -215756895:
				return 10100;
			case -215560236:
				return 6323;
			case -215425229:
				return 5813;
			case -215172958:
				return 7389;
			case -214492153:
				return 13813;
			case -214419297:
				return 13672;
			case -214162724:
				return 11480;
			case -214081099:
				return 7352;
			case -214061100:
				return 16467;
			case -213600750:
				return 15025;
			case -213083770:
				return 13283;
			case -212731652:
				return 13638;
			case -212676663:
				return 9626;
			case -212044919:
				return 5518;
			case -211762995:
				return 13419;
			case -211702888:
				return 12943;
			case -211456871:
				return 9511;
			case -211291960:
				return 15037;
			case -211167353:
				return 10859;
			case -210388869:
				return 10344;
			case -210060057:
				return 1762;
			case -208790017:
				return 12369;
			case -208228129:
				return 6579;
			case -208111676:
				return 13135;
			case -208088591:
				return 9895;
			case -207551571:
				return 12561;
			case -207483268:
				return 5774;
			case -207319477:
				return 2247;
			case -206901177:
				return 9168;
			case -206783384:
				return 3990;
			case -206602455:
				return 3777;
			case -206425590:
				return 12308;
			case -206180211:
				return 10993;
			case -205740812:
				return 8463;
			case -205722126:
				return 10909;
			case -205121720:
				return 15006;
			case -204942356:
				return 8810;
			case -204924193:
				return 11244;
			case -204889358:
				return 12450;
			case -204176389:
				return 9913;
			case -204111661:
				return 1255;
			case -202956931:
				return 3591;
			case -202347052:
				return 13800;
			case -202182171:
				return 2117;
			case -202063686:
				return 13685;
			case -201677013:
				return 16018;
			case -201659182:
				return 1809;
			case -201376613:
				return 10964;
			case -200422886:
				return 11432;
			case -200325319:
				return 9545;
			case -200142849:
				return 3291;
			case -199638966:
				return 12828;
			case -199520448:
				return 15726;
			case -199311305:
				return 10424;
			case -198765800:
				return 8851;
			case -198557429:
				return 7638;
			case -198436444:
				return 2634;
			case -198036836:
				return 7479;
			case -197909103:
				return 10326;
			case -197292260:
				return 690;
			case -197083934:
				return 6050;
			case -196688760:
				return 11119;
			case -195851501:
				return 1901;
			case -195805891:
				return 16426;
			case -195637550:
				return 12174;
			case -195610177:
				return 15064;
			case -195433442:
				return 14101;
			case -194504515:
				return 3793;
			case -194130011:
				return 11771;
			case -193645029:
				return 10885;
			case -193302191:
				return 2273;
			case -192486583:
				return 9258;
			case -192353904:
				return 9349;
			case -192173398:
				return 7368;
			case -191845882:
				return 5623;
			case -191421074:
				return 13970;
			case -191414146:
				return 3302;
			case -191077766:
				return 13770;
			case -190820666:
				return 11400;
			case -190099563:
				return 8381;
			case -190096638:
				return 3078;
			case -189617022:
				return 1826;
			case -189525382:
				return 16096;
			case -189418434:
				return 3626;
			case -189304859:
				return 12331;
			case -189067877:
				return 437;
			case -188047329:
				return 15437;
			case -187963529:
				return 4082;
			case -187772068:
				return 15846;
			case -187463100:
				return 14794;
			case -186730765:
				return 11942;
			case -186208429:
				return 6821;
			case -185975991:
				return 15380;
			case -185791065:
				return 4406;
			case -184744444:
				return 5112;
			case -184379555:
				return 15962;
			case -183937034:
				return 4780;
			case -183891005:
				return 11139;
			case -183376648:
				return 9588;
			case -183147768:
				return 3366;
			case -183083975:
				return 11399;
			case -182695614:
				return 346;
			case -182450036:
				return 6027;
			case -181728161:
				return 8318;
			case -181447249:
				return 5515;
			case -181422200:
				return 5241;
			case -181234222:
				return 4209;
			case -180859120:
				return 3099;
			case -180755040:
				return 14447;
			case -180727039:
				return 7780;
			case -180468848:
				return 14423;
			case -180425524:
				return 1068;
			case -180373396:
				return 2140;
			case -179993551:
				return 9207;
			case -179551681:
				return 13402;
			case -178872602:
				return 1013;
			case -178114001:
				return 1518;
			case -178038981:
				return 5493;
			case -177810329:
				return 8105;
			case -177597136:
				return 2407;
			case -177279925:
				return 2826;
			case -177017064:
				return 11601;
			case -176948681:
				return 11524;
			case -176624349:
				return 7058;
			case -176263256:
				return 10938;
			case -175890666:
				return 7976;
			case -175886302:
				return 5965;
			case -175501147:
				return 8858;
			case -175285787:
				return 5057;
			case -175068172:
				return 4295;
			case -174619516:
				return 4612;
			case -174543198:
				return 11122;
			case -174193165:
				return 3934;
			case -173999589:
				return 12873;
			case -173992411:
				return 11086;
			case -173970650:
				return 10960;
			case -173933318:
				return 4970;
			case -173909378:
				return 15436;
			case -173642316:
				return 14056;
			case -173509240:
				return 4581;
			case -172928001:
				return 12487;
			case -172891847:
				return 2509;
			case -172879845:
				return 1664;
			case -172108097:
				return 542;
			case -172027858:
				return 8799;
			case -171876066:
				return 15582;
			case -171580782:
				return 3772;
			case -170538162:
				return 6522;
			case -170097074:
				return 8379;
			case -169967294:
				return 7322;
			case -169684286:
				return 9089;
			case -169526520:
				return 3283;
			case -169316936:
				return 4256;
			case -169088372:
				return 7709;
			case -168983174:
				return 11288;
			case -168704757:
				return 9031;
			case -168494054:
				return 5459;
			case -168238341:
				return 1145;
			case -167932088:
				return 6904;
			case -167880668:
				return 14992;
			case -167778705:
				return 2990;
			case -167757762:
				return 901;
			case -167640846:
				return 3546;
			case -167443843:
				return 4898;
			case -167022828:
				return 689;
			case -166919202:
				return 2432;
			case -166526850:
				return 7830;
			case -166246439:
				return 5483;
			case -166134033:
				return 2886;
			case -166054593:
				return 14770;
			case -165824674:
				return 15845;
			case -165810453:
				return 13897;
			case -165435649:
				return 11591;
			case -165256900:
				return 13388;
			case -164963696:
				return 14749;
			case -164659805:
				return 203;
			case -164547651:
				return 9569;
			case -164490887:
				return 2619;
			case -164457944:
				return 1569;
			case -164452766:
				return 14444;
			case -164405074:
				return 6188;
			case -164329774:
				return 1069;
			case -164054783:
				return 14149;
			case -163810703:
				return 6326;
			case -163706971:
				return 15890;
			case -162570363:
				return 14111;
			case -162280617:
				return 13661;
			case -162225711:
				return 39;
			case -161663051:
				return 8656;
			case -161553439:
				return 15218;
			case -161258316:
				return 12919;
			case -161027961:
				return 14828;
			case -160914303:
				return 6004;
			case -160873667:
				return 11924;
			case -160843679:
				return 8058;
			case -160658674:
				return 11838;
			case -159578860:
				return 10065;
			case -159553124:
				return 3861;
			case -159465661:
				return 3325;
			case -159092887:
				return 15588;
			case -158864758:
				return 7354;
			case -158842790:
				return 2370;
			case -158736517:
				return 4014;
			case -158309104:
				return 2796;
			case -158276896:
				return 3592;
			case -158016392:
				return 7648;
			case -157859483:
				return 6117;
			case -157798026:
				return 3126;
			case -157702512:
				return 3103;
			case -157526249:
				return 531;
			case -157311635:
				return 7875;
			case -157095540:
				return 3676;
			case -156956053:
				return 7509;
			case -156813739:
				return 4862;
			case -156777810:
				return 4415;
			case -156439156:
				return 14693;
			case -156308194:
				return 13489;
			case -156150626:
				return 3802;
			case -156060815:
				return 3482;
			case -155999274:
				return 962;
			case -154796631:
				return 1116;
			case -154741844:
				return 8765;
			case -154679189:
				return 8375;
			case -153948231:
				return 775;
			case -153722996:
				return 6946;
			case -153719481:
				return 8191;
			case -153649325:
				return 9491;
			case -153311896:
				return 9070;
			case -152708614:
				return 12613;
			case -152644060:
				return 14077;
			case -152558810:
				return 6387;
			case -151907701:
				return 6150;
			case -151638273:
				return 5546;
			case -151450382:
				return 4956;
			case -151401560:
				return 5821;
			case -150919444:
				return 3448;
			case -150345701:
				return 9072;
			case -150121089:
				return 11878;
			case -149861679:
				return 5490;
			case -149849721:
				return 2417;
			case -149668109:
				return 7222;
			case -149173028:
				return 4609;
			case -149121581:
				return 341;
			case -148963361:
				return 1584;
			case -148537398:
				return 11327;
			case -148457555:
				return 13427;
			case -148382067:
				return 5870;
			case -148355797:
				return 5352;
			case -148248704:
				return 4717;
			case -147717737:
				return 10943;
			case -147338672:
				return 4920;
			case -147087873:
				return 267;
			case -147037918:
				return 7135;
			case -146984653:
				return 7702;
			case -146441955:
				return 14260;
			case -146418039:
				return 11323;
			case -146237512:
				return 2548;
			case -145907592:
				return 15707;
			case -145342818:
				return 11099;
			case -144912760:
				return 5489;
			case -144401148:
				return 14908;
			case -144169247:
				return 1651;
			case -144018940:
				return 3889;
			case -143931079:
				return 2457;
			case -143853107:
				return 7698;
			case -143276256:
				return 14416;
			case -143127326:
				return 2419;
			case -142928476:
				return 10018;
			case -142576910:
				return 10601;
			case -142534359:
				return 14218;
			case -142475421:
				return 3643;
			case -142467575:
				return 2286;
			case -142280069:
				return 12540;
			case -142149650:
				return 11916;
			case -142010859:
				return 2427;
			case -141596905:
				return 16157;
			case -141245659:
				return 7687;
			case -141035577:
				return 4187;
			case -140928778:
				return 9852;
			case -140869950:
				return 15249;
			case -140855253:
				return 8023;
			case -140509829:
				return 12414;
			case -140369574:
				return 10390;
			case -140156349:
				return 222;
			case -140121187:
				return 7787;
			case -140054681:
				return 8477;
			case -139974799:
				return 15536;
			case -139711702:
				return 3767;
			case -139659644:
				return 4329;
			case -139654868:
				return 10689;
			case -139449922:
				return 15458;
			case -138705146:
				return 11354;
			case -138435480:
				return 4;
			case -138207397:
				return 9463;
			case -138084980:
				return 16006;
			case -138074661:
				return 11510;
			case -138056772:
				return 5265;
			case -137964403:
				return 6203;
			case -137232119:
				return 12411;
			case -136899095:
				return 4210;
			case -136856620:
				return 4874;
			case -136833353:
				return 14415;
			case -136348953:
				return 7075;
			case -136344794:
				return 2398;
			case -136297010:
				return 11825;
			case -136266983:
				return 744;
			case -136178851:
				return 14831;
			case -135977067:
				return 439;
			case -135751027:
				return 14495;
			case -135500740:
				return 7145;
			case -135429158:
				return 6999;
			case -135114883:
				return 4107;
			case -134928985:
				return 1008;
			case -134885483:
				return 2374;
			case -134642849:
				return 11534;
			case -134424744:
				return 16414;
			case -134393744:
				return 7415;
			case -134038846:
				return 4340;
			case -133910945:
				return 7925;
			case -132045380:
				return 10456;
			case -132020357:
				return 9239;
			case -131624839:
				return 12129;
			case -131271168:
				return 8854;
			case -131242420:
				return 8505;
			case -130924109:
				return 13223;
			case -130832693:
				return 10077;
			case -130591341:
				return 14059;
			case -130500054:
				return 5304;
			case -129983854:
				return 7411;
			case -129774632:
				return 1010;
			case -129034271:
				return 8693;
			case -127412252:
				return 14672;
			case -127268833:
				return 11971;
			case -127157114:
				return 470;
			case -127135028:
				return 9550;
			case -127068559:
				return 792;
			case -127033876:
				return 13595;
			case -126396784:
				return 1118;
			case -126233085:
				return 7193;
			case -126142549:
				return 1594;
			case -125455747:
				return 10071;
			case -125336519:
				return 12000;
			case -125323032:
				return 14764;
			case -125090015:
				return 5586;
			case -125036120:
				return 12310;
			case -124662025:
				return 1320;
			case -123481577:
				return 6327;
			case -123122494:
				return 12864;
			case -122987220:
				return 8110;
			case -122790003:
				return 15141;
			case -122393602:
				return 6382;
			case -121985991:
				return 14997;
			case -121884986:
				return 13337;
			case -121438397:
				return 5829;
			case -120967574:
				return 6333;
			case -120038197:
				return 11820;
			case -119752662:
				return 12446;
			case -119621220:
				return 6494;
			case -119284366:
				return 11661;
			case -119283384:
				return 704;
			case -118648789:
				return 1166;
			case -118547090:
				return 5222;
			case -118457930:
				return 11755;
			case -118266649:
				return 8037;
			case -118142492:
				return 15764;
			case -117808248:
				return 10869;
			case -117742566:
				return 16367;
			case -117685186:
				return 3323;
			case -117665949:
				return 15375;
			case -116908387:
				return 13835;
			case -116710156:
				return 1348;
			case -116400430:
				return 14946;
			case -116298073:
				return 169;
			case -116035099:
				return 3296;
			case -116029703:
				return 9249;
			case -115697482:
				return 4346;
			case -115660769:
				return 16196;
			case -115514877:
				return 10819;
			case -115373413:
				return 11773;
			case -115174257:
				return 13268;
			case -114916138:
				return 14327;
			case -114912006:
				return 7999;
			case -114569684:
				return 3859;
			case -114288404:
				return 8627;
			case -114156888:
				return 14305;
			case -113326389:
				return 11999;
			case -113235247:
				return 2647;
			case -113205677:
				return 2005;
			case -113196840:
				return 3067;
			case -112867987:
				return 2558;
			case -112518994:
				return 14287;
			case -112518179:
				return 13079;
			case -112418481:
				return 4804;
			case -112266560:
				return 1309;
			case -112207177:
				return 8503;
			case -112032891:
				return 6351;
			case -111972905:
				return 10107;
			case -111883208:
				return 5781;
			case -111805176:
				return 4909;
			case -111761088:
				return 4219;
			case -111604230:
				return 2321;
			case -111300354:
				return 487;
			case -111202055:
				return 2614;
			case -110366998:
				return 3166;
			case -109731872:
				return 7565;
			case -109727520:
				return 3287;
			case -109693797:
				return 5626;
			case -109686994:
				return 7112;
			case -109521004:
				return 7078;
			case -109213256:
				return 9909;
			case -108980356:
				return 3402;
			case -108780838:
				return 5198;
			case -107911833:
				return 11263;
			case -107830207:
				return 13410;
			case -107781567:
				return 8710;
			case -107774899:
				return 9132;
			case -107638812:
				return 2317;
			case -107437960:
				return 5030;
			case -107315596:
				return 3931;
			case -106993216:
				return 3364;
			case -106815370:
				return 6935;
			case -106564736:
				return 15785;
			case -106263423:
				return 13879;
			case -106208101:
				return 5270;
			case -105371609:
				return 5756;
			case -105071343:
				return 15801;
			case -104910708:
				return 6839;
			case -104015571:
				return 12891;
			case -103509595:
				return 1657;
			case -103361522:
				return 2035;
			case -103078784:
				return 8493;
			case -103072601:
				return 6392;
			case -103050379:
				return 7408;
			case -102921904:
				return 2915;
			case -102497904:
				return 8692;
			case -102330818:
				return 7190;
			case -102057441:
				return 14816;
			case -102027626:
				return 15901;
			case -102021718:
				return 7282;
			case -101801426:
				return 16195;
			case -101383214:
				return 2733;
			case -100771691:
				return 10513;
			case -100702726:
				return 15897;
			case -100461901:
				return 15143;
			case -100088714:
				return 2997;
			case -99878679:
				return 15609;
			case -99531449:
				return 11604;
			case -98997266:
				return 13124;
			case -98767490:
				return 9198;
			case -98641201:
				return 2283;
			case -98562431:
				return 912;
			case -98087368:
				return 15080;
			case -97846968:
				return 2440;
			case -97520966:
				return 6084;
			case -97489173:
				return 12785;
			case -97378100:
				return 5254;
			case -97213200:
				return 9786;
			case -96741014:
				return 3870;
			case -96662597:
				return 1201;
			case -96391221:
				return 245;
			case -96338831:
				return 5744;
			case -94990599:
				return 13855;
			case -94495844:
				return 1785;
			case -94290727:
				return 12765;
			case -94011106:
				return 3274;
			case -93693274:
				return 3829;
			case -93578268:
				return 5151;
			case -92781506:
				return 10660;
			case -92465041:
				return 8565;
			case -92262451:
				return 12965;
			case -91998376:
				return 13044;
			case -91910230:
				return 1304;
			case -91245513:
				return 9470;
			case -91031977:
				return 7884;
			case -90580328:
				return 6635;
			case -90357851:
				return 4860;
			case -90084586:
				return 15883;
			case -89592526:
				return 3031;
			case -86734559:
				return 11574;
			case -86563697:
				return 11222;
			case -86268525:
				return 8216;
			case -85944712:
				return 5714;
			case -85890205:
				return 14705;
			case -85566397:
				return 6088;
			case -85189009:
				return 14342;
			case -85037190:
				return 11266;
			case -85031109:
				return 3628;
			case -84498539:
				return 12165;
			case -84380966:
				return 4278;
			case -84198929:
				return 13968;
			case -84059693:
				return 5243;
			case -83869836:
				return 9595;
			case -83201150:
				return 15301;
			case -82618248:
				return 2422;
			case -82464701:
				return 8400;
			case -82199229:
				return 3057;
			case -82186616:
				return 10807;
			case -82000500:
				return 15892;
			case -81698397:
				return 1091;
			case -81050372:
				return 8982;
			case -80754878:
				return 4174;
			case -80713250:
				return 12318;
			case -80663176:
				return 936;
			case -80261530:
				return 10693;
			case -80167404:
				return 13552;
			case -79611918:
				return 15926;
			case -79297181:
				return 12468;
			case -78909509:
				return 16430;
			case -78857032:
				return 3018;
			case -78821494:
				return 16378;
			case -78747775:
				return 282;
			case -78273782:
				return 14660;
			case -78194141:
				return 11174;
			case -77783901:
				return 15721;
			case -77604023:
				return 4616;
			case -77509825:
				return 15007;
			case -77320889:
				return 1742;
			case -77304131:
				return 5097;
			case -76620711:
				return 13557;
			case -76469242:
				return 45;
			case -75897139:
				return 7585;
			case -75329846:
				return 7751;
			case -74862017:
				return 13438;
			case -74796562:
				return 10327;
			case -74740615:
				return 1533;
			case -74389173:
				return 10285;
			case -74219395:
				return 13250;
			case -74073624:
				return 1898;
			case -73658703:
				return 13069;
			case -73198488:
				return 6586;
			case -73130250:
				return 1574;
			case -73075081:
				return 14805;
			case -73021168:
				return 9485;
			case -72941449:
				return 9477;
			case -72638535:
				return 11310;
			case -72392766:
				return 6584;
			case -71527226:
				return 15163;
			case -71390396:
				return 3223;
			case -71255781:
				return 9690;
			case -71147739:
				return 8763;
			case -70319895:
				return 8893;
			case -69620525:
				return 6596;
			case -69375128:
				return 13222;
			case -68734984:
				return 2455;
			case -68548479:
				return 2003;
			case -68451474:
				return 3420;
			case -68110413:
				return 11193;
			case -68001159:
				return 1066;
			case -67916856:
				return 956;
			case -67855576:
				return 12449;
			case -67848309:
				return 5629;
			case -66793405:
				return 11918;
			case -66284383:
				return 4078;
			case -65977411:
				return 12471;
			case -65931389:
				return 4431;
			case -65860968:
				return 4547;
			case -65172933:
				return 1367;
			case -65034224:
				return 11497;
			case -64875742:
				return 7791;
			case -64836962:
				return 7457;
			case -64543801:
				return 6230;
			case -64528550:
				return 8607;
			case -64257206:
				return 11994;
			case -63794155:
				return 7390;
			case -63769756:
				return 1219;
			case -63490988:
				return 4074;
			case -63142583:
				return 4396;
			case -63138542:
				return 552;
			case -63137486:
				return 14797;
			case -63121300:
				return 3881;
			case -63103461:
				return 16206;
			case -62919427:
				return 12792;
			case -62879824:
				return 13206;
			case -62869733:
				return 6608;
			case -62351493:
				return 2240;
			case -62209849:
				return 2846;
			case -61989950:
				return 6352;
			case -61347765:
				return 8227;
			case -61266285:
				return 6497;
			case -61137818:
				return 11342;
			case -61129157:
				return 12291;
			case -60058039:
				return 12459;
			case -59906546:
				return 2295;
			case -59870890:
				return 6653;
			case -59410700:
				return 5250;
			case -58693255:
				return 12101;
			case -58681996:
				return 13036;
			case -58637410:
				return 12031;
			case -58353964:
				return 7537;
			case -58075500:
				return 2760;
			case -57644883:
				return 11273;
			case -56681380:
				return 581;
			case -56405365:
				return 10368;
			case -56104263:
				return 6467;
			case -56024829:
				return 4312;
			case -55967805:
				return 12029;
			case -55633154:
				return 15009;
			case -55350682:
				return 1154;
			case -54258984:
				return 555;
			case -54066018:
				return 892;
			case -54037740:
				return 3102;
			case -53460943:
				return 10026;
			case -53434895:
				return 6465;
			case -53066424:
				return 21;
			case -52890216:
				return 1606;
			case -52786961:
				return 8168;
			case -52726526:
				return 7570;
			case -52520165:
				return 2250;
			case -52021817:
				return 1147;
			case -51902725:
				return 10405;
			default:
				break;
		}
		if (iParam1 >= 1)
		{
		}
		return -1;
	}
	if (iParam0 <= 223072623)
	{
		switch (iParam0)
		{
			case -51847185:
				return 11609;
			case -51625603:
				return 9043;
			case -51505783:
				return 8147;
			case -51310680:
				return 5733;
			case -51150307:
				return 3984;
			case -51068900:
				return 16084;
			case -50867196:
				return 9993;
			case -50729249:
				return 11627;
			case -50684386:
				return 14527;
			case -50604564:
				return 10522;
			case -50062575:
				return 11785;
			case -50030470:
				return 771;
			case -49290960:
				return 3839;
			case -48905921:
				return 5675;
			case -48560774:
				return 10167;
			case -48049039:
				return 2300;
			case -48039168:
				return 7095;
			case -47689281:
				return 13346;
			case -47688337:
				return 8528;
			case -47663836:
				return 2602;
			case -47511494:
				return 11931;
			case -47508947:
				return 13390;
			case -47442526:
				return 5571;
			case -47192840:
				return 16104;
			case -46607261:
				return 15070;
			case -46393753:
				return 3930;
			case -46389610:
				return 15289;
			case -46244091:
				return 1216;
			case -45899773:
				return 3801;
			case -45585577:
				return 15515;
			case -45345133:
				return 8410;
			case -45308285:
				return 14146;
			case -44942357:
				return 7762;
			case -44804390:
				return 12451;
			case -44675836:
				return 12572;
			case -44647667:
				return 8904;
			case -43277482:
				return 14382;
			case -43161147:
				return 1333;
			case -43033443:
				return 7302;
			case -42942362:
				return 12293;
			case -42563376:
				return 1706;
			case -42330169:
				return 6270;
			case -42277217:
				return 317;
			case -42087152:
				return 10745;
			case -41934008:
				return 11487;
			case -41909852:
				return 7144;
			case -41136898:
				return 8160;
			case -40381277:
				return 6838;
			case -40350080:
				return 5572;
			case -40178826:
				return 10812;
			case -39991840:
				return 15844;
			case -39755868:
				return 8630;
			case -39721009:
				return 11579;
			case -39477228:
				return 15746;
			case -38907170:
				return 5366;
			case -38603979:
				return 9765;
			case -38416855:
				return 13203;
			case -38096933:
				return 1184;
			case -37640047:
				return 8878;
			case -37131555:
				return 7117;
			case -37044699:
				return 84;
			case -36741141:
				return 1471;
			case -36377077:
				return 1801;
			case -36237369:
				return 13066;
			case -36078079:
				return 10915;
			case -35832535:
				return 5398;
			case -35643824:
				return 3203;
			case -35626461:
				return 8764;
			case -35440630:
				return 6002;
			case -35354508:
				return 10876;
			case -35303627:
				return 4759;
			case -34912592:
				return 15940;
			case -34279545:
				return 9546;
			case -34257395:
				return 13602;
			case -33805913:
				return 4487;
			case -33661219:
				return 9316;
			case -33556263:
				return 2988;
			case -33495584:
				return 1071;
			case -33347466:
				return 3413;
			case -32839597:
				return 11567;
			case -32822190:
				return 12626;
			case -32554959:
				return 15549;
			case -32488513:
				return 4167;
			case -32047588:
				return 10946;
			case -31806990:
				return 9398;
			case -31231491:
				return 1630;
			case -30702174:
				return 13920;
			case -30406831:
				return 9897;
			case -30251080:
				return 6296;
			case -30203227:
				return 13590;
			case -29716156:
				return 4369;
			case -29643421:
				return 2642;
			case -29454066:
				return 1867;
			case -29303690:
				return 15379;
			case -29158401:
				return 13630;
			case -29086678:
				return 8196;
			case -28892427:
				return 2293;
			case -28608029:
				return 13627;
			case -28327365:
				return 3238;
			case -27875369:
				return 13252;
			case -27302281:
				return 12266;
			case -27113672:
				return 3958;
			case -26757170:
				return 8446;
			case -26625851:
				return 6472;
			case -26529079:
				return 16021;
			case -26216976:
				return 3202;
			case -26159804:
				return 14941;
			case -25978087:
				return 1224;
			case -25765247:
				return 9661;
			case -25300126:
				return 2345;
			case -24360095:
				return 6683;
			case -24072610:
				return 9125;
			case -23993255:
				return 163;
			case -23174115:
				return 12350;
			case -22972623:
				return 13644;
			case -22904793:
				return 7098;
			case -22582106:
				return 10496;
			case -22278175:
				return 7541;
			case -22058726:
				return 8048;
			case -22040612:
				return 3771;
			case -21851829:
				return 9757;
			case -21469115:
				return 14270;
			case -21195597:
				return 8345;
			case -21026390:
				return 3449;
			case -19533252:
				return 8743;
			case -19359223:
				return 15766;
			case -19285289:
				return 1561;
			case -18735481:
				return 15618;
			case -18569988:
				return 12855;
			case -18452935:
				return 13368;
			case -18225084:
				return 3953;
			case -17642533:
				return 6549;
			case -17570170:
				return 6368;
			case -17398012:
				return 8863;
			case -17071680:
				return 15215;
			case -17069145:
				return 1438;
			case -16530144:
				return 12297;
			case -15905266:
				return 5330;
			case -15134409:
				return 2564;
			case -14413511:
				return 11455;
			case -14384249:
				return 719;
			case -14079324:
				return 15043;
			case -13708041:
				return 15403;
			case -13706385:
				return 641;
			case -13531340:
				return 1858;
			case -13365341:
				return 6857;
			case -13278304:
				return 9177;
			case -13041270:
				return 13335;
			case -13038022:
				return 12033;
			case -12421668:
				return 2539;
			case -11805699:
				return 10918;
			case -11751736:
				return 3951;
			case -11538145:
				return 12782;
			case -11479234:
				return 9879;
			case -10525037:
				return 4754;
			case -10407964:
				return 3255;
			case -10381321:
				return 13882;
			case -9762481:
				return 10207;
			case -9527169:
				return 10271;
			case -9387521:
				return 1279;
			case -9358116:
				return 15490;
			case -9315223:
				return 12374;
			case -9088003:
				return 8624;
			case -8565991:
				return 12638;
			case -7413278:
				return 4660;
			case -7266477:
				return 174;
			case -6740257:
				return 5470;
			case -6485762:
				return 2477;
			case -5604509:
				return 4045;
			case -5399511:
				return 7606;
			case -5062748:
				return 16009;
			case -4539399:
				return 16061;
			case -4216550:
				return 2176;
			case -3347285:
				return 13180;
			case -2896521:
				return 609;
			case -2359651:
				return 11369;
			case -2335808:
				return 15836;
			case -2101458:
				return 9620;
			case -1673041:
				return 4851;
			case -1636631:
				return 5848;
			case -1341477:
				return 11210;
			case -1113982:
				return 3701;
			case -899354:
				return 10999;
			case -682532:
				return 3662;
			case 0:
				return 16470;
			case 1517912:
				return 10316;
			case 1520661:
				return 14574;
			case 1577141:
				return 5561;
			case 1586966:
				return 12886;
			case 1881267:
				return 7918;
			case 1907611:
				return 6478;
			case 2514129:
				return 4394;
			case 2603182:
				return 11776;
			case 2614345:
				return 11657;
			case 2630557:
				return 11220;
			case 2756433:
				return 14862;
			case 3226703:
				return 5540;
			case 3424012:
				return 11482;
			case 3671819:
				return 6613;
			case 3789131:
				return 3379;
			case 4075326:
				return 319;
			case 4991732:
				return 15122;
			case 5818270:
				return 7903;
			case 6024979:
				return 9518;
			case 6589564:
				return 13883;
			case 6609856:
				return 3985;
			case 6874872:
				return 8131;
			case 7188968:
				return 4127;
			case 7611726:
				return 1209;
			case 7626263:
				return 16347;
			case 9102588:
				return 4871;
			case 9154524:
				return 7891;
			case 9214594:
				return 10078;
			case 9264690:
				return 2977;
			case 9390805:
				return 14830;
			case 9817350:
				return 6242;
			case 10231635:
				return 5218;
			case 10447432:
				return 14913;
			case 10566785:
				return 8633;
			case 10975792:
				return 5810;
			case 11004612:
				return 2837;
			case 11639493:
				return 5717;
			case 11856056:
				return 5500;
			case 11966224:
				return 15885;
			case 12142315:
				return 10330;
			case 13153110:
				return 15711;
			case 13176768:
				return 5932;
			case 13672415:
				return 4412;
			case 13757620:
				return 3174;
			case 13844548:
				return 3981;
			case 14020531:
				return 13198;
			case 14451816:
				return 13894;
			case 14669240:
				return 11997;
			case 14695118:
				return 952;
			case 14881641:
				return 14096;
			case 14905271:
				return 15857;
			case 15399125:
				return 12783;
			case 15588292:
				return 3763;
			case 15676852:
				return 8976;
			case 15794568:
				return 7094;
			case 16092410:
				return 8474;
			case 16333764:
				return 13620;
			case 16796454:
				return 15161;
			case 16910959:
				return 13929;
			case 17165543:
				return 100;
			case 17186352:
				return 11870;
			case 17412713:
				return 8748;
			case 18008639:
				return 13341;
			case 18009014:
				return 4198;
			case 18482682:
				return 1712;
			case 19554289:
				return 4655;
			case 20080804:
				return 15561;
			case 20204872:
				return 8360;
			case 20251888:
				return 15136;
			case 20364017:
				return 7705;
			case 20532102:
				return 3960;
			case 20901781:
				return 7959;
			case 21093102:
				return 70;
			case 21404722:
				return 9649;
			case 21561353:
				return 1317;
			case 21689081:
				return 5043;
			case 21765756:
				return 13401;
			case 22068550:
				return 4922;
			case 22405207:
				return 7730;
			case 22417516:
				return 11274;
			case 23362528:
				return 12206;
			case 23667705:
				return 1539;
			case 24127127:
				return 6469;
			case 24466902:
				return 13046;
			case 25104224:
				return 10535;
			case 25206473:
				return 13417;
			case 25253416:
				return 8998;
			case 25430581:
				return 1851;
			case 25693219:
				return 9659;
			case 25859119:
				return 13456;
			case 26057877:
				return 14031;
			case 26532233:
				return 12860;
			case 26913812:
				return 16257;
			case 27734749:
				return 9229;
			case 27784604:
				return 11261;
			case 28077219:
				return 15636;
			case 28436329:
				return 7689;
			case 28598465:
				return 10052;
			case 28966073:
				return 9554;
			case 29170159:
				return 11203;
			case 29326204:
				return 1040;
			case 29384240:
				return 2094;
			case 29397050:
				return 7213;
			case 29407634:
				return 15354;
			case 29663141:
				return 3441;
			case 29736936:
				return 13244;
			case 29773816:
				return 3833;
			case 29998454:
				return 2967;
			case 30190289:
				return 5775;
			case 31539311:
				return 12480;
			case 31662865:
				return 11128;
			case 31863704:
				return 2641;
			case 32115079:
				return 647;
			case 32283667:
				return 9063;
			case 33697715:
				return 3409;
			case 34480665:
				return 7525;
			case 34710358:
				return 10939;
			case 35386730:
				return 9275;
			case 36009259:
				return 14699;
			case 36025426:
				return 12068;
			case 36870870:
				return 11894;
			case 37011413:
				return 514;
			case 37020857:
				return 13567;
			case 37201275:
				return 1905;
			case 37500343:
				return 3950;
			case 37747322:
				return 8013;
			case 37759582:
				return 6536;
			case 38528190:
				return 15178;
			case 38571317:
				return 8791;
			case 38720689:
				return 7182;
			case 38863213:
				return 13789;
			case 39313452:
				return 4841;
			case 39512092:
				return 10798;
			case 40172090:
				return 10727;
			case 40345436:
				return 14752;
			case 40374497:
				return 8052;
			case 40381401:
				return 15729;
			case 40446471:
				return 16466;
			case 40558287:
				return 12744;
			case 40793762:
				return 9727;
			case 40884003:
				return 4436;
			case 41045821:
				return 12619;
			case 41177141:
				return 16443;
			case 41707457:
				return 14577;
			case 41731439:
				return 1508;
			case 42282579:
				return 3490;
			case 42752278:
				return 15639;
			case 42980557:
				return 3288;
			case 43252029:
				return 3370;
			case 43610503:
				return 5514;
			case 43825738:
				return 14687;
			case 44002798:
				return 8704;
			case 44242951:
				return 6575;
			case 44602472:
				return 15811;
			case 45062091:
				return 12686;
			case 45069081:
				return 7677;
			case 45172449:
				return 7770;
			case 45693944:
				return 6032;
			case 46233886:
				return 7427;
			case 46471483:
				return 14070;
			case 46527049:
				return 8207;
			case 47200842:
				return 14410;
			case 47556134:
				return 3743;
			case 47660611:
				return 11507;
			case 47914874:
				return 13091;
			case 47939550:
				return 10548;
			case 48786865:
				return 15306;
			case 48968044:
				return 1099;
			case 49032183:
				return 15648;
			case 49040578:
				return 1942;
			case 49071201:
				return 2153;
			case 49153296:
				return 14073;
			case 49263610:
				return 4997;
			case 49321906:
				return 3108;
			case 49937914:
				return 6545;
			case 50024051:
				return 5099;
			case 50109285:
				return 13715;
			case 50305983:
				return 14792;
			case 50483426:
				return 15320;
			case 50643137:
				return 1489;
			case 50767950:
				return 12790;
			case 50879129:
				return 13849;
			case 50893433:
				return 5298;
			case 50927092:
				return 785;
			case 51231304:
				return 9814;
			case 51410678:
				return 15225;
			case 51521298:
				return 9664;
			case 51652981:
				return 715;
			case 51653157:
				return 597;
			case 51835081:
				return 5305;
			case 51864365:
				return 11787;
			case 52933495:
				return 6681;
			case 53255388:
				return 695;
			case 54030454:
				return 15307;
			case 54466481:
				return 3471;
			case 54485251:
				return 897;
			case 54614711:
				return 7021;
			case 54674441:
				return 377;
			case 55096099:
				return 14594;
			case 55104655:
				return 9610;
			case 55108348:
				return 749;
			case 55148287:
				return 8246;
			case 55400318:
				return 16376;
			case 55505019:
				return 8794;
			case 55897452:
				return 9417;
			case 56043815:
				return 5689;
			case 56166739:
				return 1510;
			case 56804145:
				return 3697;
			case 57067199:
				return 9486;
			case 57170117:
				return 3919;
			case 57386309:
				return 4390;
			case 57552990:
				return 16351;
			case 57661576:
				return 9060;
			case 58646146:
				return 9394;
			case 58768315:
				return 15751;
			case 58825344:
				return 5841;
			case 59433124:
				return 5782;
			case 59705250:
				return 12494;
			case 59745858:
				return 8122;
			case 59759157:
				return 10574;
			case 60109253:
				return 591;
			case 60202542:
				return 16303;
			case 60495199:
				return 6199;
			case 60520189:
				return 11946;
			case 60813080:
				return 9943;
			case 60813303:
				return 872;
			case 61143397:
				return 6442;
			case 61408561:
				return 5039;
			case 61451054:
				return 6979;
			case 61476009:
				return 14276;
			case 61480820:
				return 12538;
			case 61707409:
				return 3157;
			case 61996838:
				return 10093;
			case 62277715:
				return 5755;
			case 62809789:
				return 2039;
			case 63594405:
				return 9112;
			case 63622606:
				return 4498;
			case 63835692:
				return 11420;
			case 64742421:
				return 14119;
			case 64848295:
				return 682;
			case 64894843:
				return 6453;
			case 65010948:
				return 15279;
			case 65302426:
				return 631;
			case 65392995:
				return 15802;
			case 66071596:
				return 4151;
			case 66122561:
				return 443;
			case 67038306:
				return 7437;
			case 67281744:
				return 7297;
			case 67485032:
				return 12204;
			case 67913729:
				return 1237;
			case 68511322:
				return 4769;
			case 68512371:
				return 15227;
			case 68635185:
				return 290;
			case 68963282:
				return 11635;
			case 69166250:
				return 3026;
			case 69228182:
				return 9618;
			case 69374526:
				return 1418;
			case 69604629:
				return 10292;
			case 70383264:
				return 7836;
			case 70472470:
				return 5676;
			case 70776250:
				return 981;
			case 70999868:
				return 5896;
			case 72243970:
				return 13479;
			case 72260562:
				return 1954;
			case 72432638:
				return 4712;
			case 72733444:
				return 10220;
			case 73134922:
				return 11426;
			case 74028921:
				return 11229;
			case 74117059:
				return 669;
			case 74340091:
				return 14297;
			case 74506045:
				return 13265;
			case 74941737:
				return 4912;
			case 74986986:
				return 4985;
			case 75028703:
				return 7624;
			case 75198124:
				return 3147;
			case 75942876:
				return 12560;
			case 76532262:
				return 15188;
			case 76556053:
				return 11733;
			case 76710316:
				return 8949;
			case 77962428:
				return 1865;
			case 78404028:
				return 6013;
			case 78425823:
				return 683;
			case 78616261:
				return 4855;
			case 78638146:
				return 14371;
			case 78927121:
				return 2399;
			case 78936512:
				return 15202;
			case 79131989:
				return 919;
			case 79156795:
				return 14904;
			case 79354472:
				return 5949;
			case 79464320:
				return 1315;
			case 79543064:
				return 9625;
			case 80437487:
				return 9843;
			case 80913547:
				return 5123;
			case 81012522:
				return 7531;
			case 81104014:
				return 12500;
			case 81276375:
				return 13065;
			case 81438831:
				return 13964;
			case 81836444:
				return 4607;
			case 82667964:
				return 1567;
			case 82750531:
				return 4086;
			case 82862064:
				return 8178;
			case 83490931:
				return 3932;
			case 83526630:
				return 12016;
			case 84108473:
				return 13349;
			case 84224102:
				return 14606;
			case 84384819:
				return 3851;
			case 84421756:
				return 1903;
			case 84633384:
				return 11402;
			case 85077143:
				return 7779;
			case 85379810:
				return 10565;
			case 85453683:
				return 6398;
			case 86192292:
				return 8287;
			case 86968515:
				return 3492;
			case 87087802:
				return 16330;
			case 87151885:
				return 2603;
			case 87457520:
				return 7649;
			case 87538212:
				return 4042;
			case 87577242:
				return 14422;
			case 88704384:
				return 1308;
			case 88978302:
				return 3926;
			case 89018502:
				return 12545;
			case 89104374:
				return 3332;
			case 89834103:
				return 4056;
			case 89913743:
				return 14464;
			case 90264823:
				return 14526;
			case 91435648:
				return 343;
			case 91726944:
				return 4245;
			case 91758217:
				return 4552;
			case 91875765:
				return 4196;
			case 93567835:
				return 650;
			case 93760123:
				return 14986;
			case 93893176:
				return 14417;
			case 93949129:
				return 4469;
			case 94116123:
				return 11664;
			case 94270581:
				return 9535;
			case 94387424:
				return 1580;
			case 94712423:
				return 13246;
			case 94768391:
				return 13469;
			case 95086054:
				return 9223;
			case 95535737:
				return 7029;
			case 95866989:
				return 15130;
			case 96224158:
				return 15646;
			case 96526593:
				return 12861;
			case 96930969:
				return 14680;
			case 97031356:
				return 2119;
			case 97210206:
				return 4397;
			case 97710627:
				return 4671;
			case 98154799:
				return 12639;
			case 98225812:
				return 12610;
			case 98506870:
				return 10177;
			case 98537260:
				return 14532;
			case 98597207:
				return 9419;
			case 99056772:
				return 3369;
			case 99603360:
				return 15741;
			case 99650142:
				return 5082;
			case 99943882:
				return 484;
			case 100385349:
				return 3973;
			case 100848709:
				return 766;
			case 102543223:
				return 6619;
			case 102552195:
				return 878;
			case 103383557:
				return 8538;
			case 103576261:
				return 4037;
			case 103683861:
				return 14016;
			case 104062879:
				return 16090;
			case 104587080:
				return 9062;
			case 105684855:
				return 9541;
			case 105800000:
				return 7061;
			case 106063271:
				return 5855;
			case 106101946:
				return 5807;
			case 106282038:
				return 11805;
			case 106531847:
				return 4231;
			case 106636270:
				return 13261;
			case 106636435:
				return 12951;
			case 106956995:
				return 13232;
			case 106979415:
				return 5591;
			case 107013696:
				return 14690;
			case 107722138:
				return 6965;
			case 107836888:
				return 14112;
			case 107845230:
				return 11290;
			case 108542560:
				return 3660;
			case 108650017:
				return 9556;
			case 108851449:
				return 14259;
			case 108854062:
				return 12696;
			case 108902130:
				return 14221;
			case 109055059:
				return 12501;
			case 109190387:
				return 8719;
			case 109365347:
				return 15976;
			case 109585569:
				return 12953;
			case 110068430:
				return 2114;
			case 110342471:
				return 11162;
			case 110394951:
				return 6909;
			case 110751290:
				return 6338;
			case 110762060:
				return 7801;
			case 111174276:
				return 9026;
			case 111281960:
				return 14736;
			case 111351878:
				return 6820;
			case 111678663:
				return 13908;
			case 111748054:
				return 13164;
			case 112254571:
				return 16236;
			case 112298811:
				return 9487;
			case 112370516:
				return 3749;
			case 113044888:
				return 3335;
			case 113264879:
				return 12737;
			case 113392784:
				return 8909;
			case 113504370:
				return 14751;
			case 113751406:
				return 13625;
			case 114039925:
				return 5319;
			case 114281035:
				return 747;
			case 114360259:
				return 6272;
			case 114385647:
				return 6385;
			case 114601937:
				return 4990;
			case 114730945:
				return 3100;
			case 114820908:
				return 12424;
			case 114841358:
				return 2161;
			case 114849734:
				return 7584;
			case 115206759:
				return 6837;
			case 115233690:
				return 5450;
			case 115284028:
				return 5104;
			case 115334933:
				return 2360;
			case 115672690:
				return 6886;
			case 116449707:
				return 11779;
			case 116501314:
				return 4811;
			case 116619265:
				return 8944;
			case 116744851:
				return 15655;
			case 117117073:
				return 7798;
			case 117247090:
				return 4331;
			case 117333950:
				return 5603;
			case 118288160:
				return 9172;
			case 118447222:
				return 1980;
			case 118921798:
				return 10272;
			case 118999545:
				return 16126;
			case 119259222:
				return 3947;
			case 119337391:
				return 11175;
			case 119343856:
				return 8338;
			case 119355937:
				return 10787;
			case 119455698:
				return 11468;
			case 119527720:
				return 6750;
			case 119537829:
				return 9265;
			case 120221819:
				return 10511;
			case 120316385:
				return 1127;
			case 120423126:
				return 8244;
			case 120537074:
				return 7208;
			case 120886648:
				return 11525;
			case 120919797:
				return 13378;
			case 121016549:
				return 7726;
			case 121933405:
				return 10806;
			case 122201050:
				return 15063;
			case 122377164:
				return 15035;
			case 122748261:
				return 14563;
			case 122790927:
				return 13712;
			case 122919097:
				return 16292;
			case 122930489:
				return 11308;
			case 122994091:
				return 1400;
			case 123816240:
				return 8566;
			case 123835654:
				return 13729;
			case 124039712:
				return 1665;
			case 124491751:
				return 11225;
			case 124531649:
				return 10016;
			case 124654981:
				return 4932;
			case 124978929:
				return 10014;
			case 125295106:
				return 4733;
			case 125575728:
				return 9816;
			case 126025806:
				return 5271;
			case 126203870:
				return 5678;
			case 126356283:
				return 12746;
			case 126667886:
				return 8898;
			case 127340078:
				return 8221;
			case 127407542:
				return 903;
			case 127662037:
				return 9937;
			case 127731696:
				return 15546;
			case 127782399:
				return 1440;
			case 127997529:
				return 5846;
			case 128034147:
				return 15325;
			case 128070873:
				return 12717;
			case 128312183:
				return 7796;
			case 128879233:
				return 7085;
			case 129204278:
				return 7449;
			case 129377429:
				return 9162;
			case 129595127:
				return 12988;
			case 129678739:
				return 4290;
			case 129713023:
				return 7985;
			case 129952834:
				return 3175;
			case 129977789:
				return 1149;
			case 130472898:
				return 12906;
			case 131180815:
				return 14156;
			case 131543460:
				return 15823;
			case 131721401:
				return 2930;
			case 131817197:
				return 9108;
			case 132005948:
				return 2860;
			case 132081990:
				return 2026;
			case 132230778:
				return 10436;
			case 132414515:
				return 11967;
			case 132422856:
				return 8066;
			case 133021128:
				return 12271;
			case 133028226:
				return 7126;
			case 133094252:
				return 13155;
			case 133860315:
				return 1609;
			case 133882313:
				return 7281;
			case 133961016:
				return 6559;
			case 134543298:
				return 576;
			case 134570652:
				return 2949;
			case 134648546:
				return 312;
			case 134747314:
				return 14569;
			case 134813799:
				return 4778;
			case 134839111:
				return 845;
			case 135030748:
				return 9200;
			case 135128954:
				return 3650;
			case 135913173:
				return 13664;
			case 136030603:
				return 12914;
			case 136160388:
				return 11247;
			case 136692174:
				return 12773;
			case 136818655:
				return 9995;
			case 137096978:
				return 10274;
			case 137127151:
				return 7115;
			case 137267440:
				return 812;
			case 137638734:
				return 16020;
			case 137660054:
				return 6228;
			case 137779689:
				return 306;
			case 137945627:
				return 6567;
			case 138082636:
				return 8782;
			case 138130985:
				return 16092;
			case 138162884:
				return 12386;
			case 138711105:
				return 4886;
			case 138732084:
				return 6422;
			case 138961043:
				return 16000;
			case 139224300:
				return 4247;
			case 139676400:
				return 16255;
			case 140163364:
				return 5027;
			case 140254729:
				return 2342;
			case 140543636:
				return 13903;
			case 140859989:
				return 1765;
			case 141856029:
				return 6076;
			case 141971228:
				return 14024;
			case 143020451:
				return 2152;
			case 143309779:
				return 655;
			case 143708929:
				return 11221;
			case 143982768:
				return 5077;
			case 144757066:
				return 7848;
			case 145310539:
				return 5726;
			case 145633164:
				return 6244;
			case 146149537:
				return 2493;
			case 146291783:
				return 9362;
			case 147199690:
				return 12226;
			case 147427595:
				return 16170;
			case 148006184:
				return 5947;
			case 148678632:
				return 12265;
			case 148753743:
				return 10950;
			case 149420073:
				return 8720;
			case 149722126:
				return 6205;
			case 149863797:
				return 5179;
			case 149998722:
				return 8559;
			case 150011920:
				return 5037;
			case 150088858:
				return 3547;
			case 150094641:
				return 10134;
			case 150199237:
				return 13832;
			case 150288354:
				return 269;
			case 150966765:
				return 14494;
			case 151743412:
				return 6670;
			case 151773959:
				return 16377;
			case 151959164:
				return 6448;
			case 152414926:
				return 10957;
			case 152617735:
				return 5430;
			case 152627560:
				return 12827;
			case 153110054:
				return 8251;
			case 153486132:
				return 284;
			case 153532315:
				return 14972;
			case 153947257:
				return 12970;
			case 154121396:
				return 6261;
			case 154495391:
				return 11802;
			case 154665410:
				return 2534;
			case 155128635:
				return 4651;
			case 155317778:
				return 10984;
			case 155588270:
				return 4286;
			case 155675984:
				return 3352;
			case 155756109:
				return 13637;
			case 155903395:
				return 2536;
			case 156231145:
				return 2372;
			case 156256615:
				return 2683;
			case 156502234:
				return 9768;
			case 156572024:
				return 11134;
			case 156723033:
				return 2904;
			case 156824010:
				return 10743;
			case 156837551:
				return 968;
			case 157318391:
				return 10580;
			case 157501936:
				return 9729;
			case 157683279:
				return 13354;
			case 158445730:
				return 6711;
			case 158554511:
				return 1110;
			case 159387456:
				return 2986;
			case 159661060:
				return 659;
			case 159788540:
				return 2522;
			case 160269723:
				return 5566;
			case 160554037:
				return 13522;
			case 160636303:
				return 2605;
			case 161262996:
				return 12012;
			case 161432442:
				return 1152;
			case 161433960:
				return 7429;
			case 161697289:
				return 2969;
			case 161801294:
				return 11610;
			case 162596729:
				return 9673;
			case 162932774:
				return 11672;
			case 163561137:
				return 1160;
			case 163648147:
				return 14144;
			case 163698549:
				return 9703;
			case 164065767:
				return 741;
			case 164271545:
				return 4090;
			case 164274619:
				return 2460;
			case 164347474:
				return 3809;
			case 164429464:
				return 532;
			case 164675646:
				return 8530;
			case 164939672:
				return 11337;
			case 164947977:
				return 14429;
			case 165132000:
				return 10701;
			case 165293314:
				return 7601;
			case 165300465:
				return 9592;
			case 165397558:
				return 4953;
			case 166064563:
				return 14250;
			case 166762771:
				return 13127;
			case 166829007:
				return 13996;
			case 167491564:
				return 15358;
			case 167525537:
				return 15954;
			case 167654353:
				return 11817;
			case 168744945:
				return 10895;
			case 169138832:
				return 8759;
			case 169503210:
				return 2606;
			case 169973797:
				return 16116;
			case 170786678:
				return 11821;
			case 171098526:
				return 4047;
			case 171105065:
				return 4300;
			case 171703399:
				return 12194;
			case 171741710:
				return 9751;
			case 171754311:
				return 16343;
			case 171964815:
				return 7194;
			case 171990277:
				return 6318;
			case 173098952:
				return 6021;
			case 173292016:
				return 9173;
			case 173316190:
				return 1853;
			case 174418135:
				return 1202;
			case 175167448:
				return 7367;
			case 175605329:
				return 6908;
			case 176262747:
				return 12247;
			case 176586864:
				return 5914;
			case 177002617:
				return 852;
			case 177222787:
				return 953;
			case 177251447:
				return 2159;
			case 178323656:
				return 6604;
			case 178403676:
				return 783;
			case 178492492:
				return 366;
			case 178519428:
				return 8299;
			case 178604877:
				return 5425;
			case 178872236:
				return 5171;
			case 179055886:
				return 3868;
			case 179590108:
				return 7121;
			case 179808122:
				return 11363;
			case 180290794:
				return 12645;
			case 180567113:
				return 1150;
			case 181651164:
				return 9782;
			case 182933302:
				return 4366;
			case 182988151:
				return 8171;
			case 183248733:
				return 5448;
			case 183650803:
				return 11150;
			case 184120185:
				return 15022;
			case 184307139:
				return 436;
			case 184966886:
				return 8455;
			case 185232829:
				return 1161;
			case 185650329:
				return 75;
			case 185862273:
				return 7015;
			case 186025368:
				return 12635;
			case 186094910:
				return 10226;
			case 186282970:
				return 11930;
			case 186320325:
				return 10010;
			case 186693747:
				return 13247;
			case 187048082:
				return 7564;
			case 187147767:
				return 9324;
			case 187685950:
				return 9099;
			case 188015658:
				return 8390;
			case 188293059:
				return 2793;
			case 188734659:
				return 2473;
			case 188870715:
				return 9792;
			case 188959652:
				return 1346;
			case 189032184:
				return 14977;
			case 189348962:
				return 10289;
			case 189430070:
				return 11283;
			case 189666621:
				return 3340;
			case 190080028:
				return 14849;
			case 190216111:
				return 7205;
			case 190220589:
				return 7417;
			case 190255257:
				return 11111;
			case 190413742:
				return 1106;
			case 190456187:
				return 7888;
			case 190553496:
				return 14909;
			case 190954668:
				return 15718;
			case 191177863:
				return 5830;
			case 191324391:
				return 13695;
			case 191567501:
				return 10830;
			case 191776199:
				return 4465;
			case 191845990:
				return 10953;
			case 192245010:
				return 4440;
			case 192558692:
				return 12685;
			case 192563748:
				return 13778;
			case 193033892:
				return 2091;
			case 193149167:
				return 4960;
			case 193241785:
				return 11608;
			case 193482363:
				return 11711;
			case 193618512:
				return 13874;
			case 193808733:
				return 16132;
			case 194345381:
				return 2151;
			case 194484067:
				return 15784;
			case 195092632:
				return 7380;
			case 195183069:
				return 8784;
			case 195700131:
				return 14517;
			case 195754040:
				return 11625;
			case 196036081:
				return 11544;
			case 196631385:
				return 4500;
			case 197053898:
				return 8289;
			case 197170238:
				return 4520;
			case 197282189:
				return 8698;
			case 197307092:
				return 11419;
			case 197333915:
				return 2092;
			case 197546797:
				return 794;
			case 198386616:
				return 6656;
			case 198417179:
				return 14081;
			case 199641577:
				return 5574;
			case 200097422:
				return 8262;
			case 200375307:
				return 2596;
			case 200607593:
				return 5044;
			case 201002005:
				return 10413;
			case 201162041:
				return 1182;
			case 201386723:
				return 2557;
			case 201686393:
				return 7879;
			case 201727349:
				return 11129;
			case 202013306:
				return 4903;
			case 202026123:
				return 2600;
			case 202254792:
				return 2646;
			case 202281550:
				return 948;
			case 202483256:
				return 15475;
			case 202516097:
				return 10277;
			case 203628945:
				return 13921;
			case 204107551:
				return 2960;
			case 204545500:
				return 5541;
			case 204817984:
				return 1096;
			case 204932449:
				return 12784;
			case 204969191:
				return 7964;
			case 204995649:
				return 14192;
			case 205559981:
				return 13526;
			case 205850401:
				return 10243;
			case 206544870:
				return 2188;
			case 206770512:
				return 11408;
			case 206937466:
				return 10485;
			case 207132841:
				return 13610;
			case 207529372:
				return 13504;
			case 207636298:
				return 15114;
			case 208099752:
				return 10244;
			case 208298164:
				return 8532;
			case 208364909:
				return 7940;
			case 208509148:
				return 12528;
			case 208558043:
				return 14823;
			case 208829344:
				return 14263;
			case 208880365:
				return 8093;
			case 209138675:
				return 16396;
			case 209304618:
				return 8237;
			case 209589664:
				return 11333;
			case 209716759:
				return 9206;
			case 209755169:
				return 5214;
			case 210029681:
				return 9777;
			case 210306328:
				return 15641;
			case 210330033:
				return 2805;
			case 210852590:
				return 1998;
			case 211190273:
				return 9543;
			case 211607516:
				return 13264;
			case 212091003:
				return 12854;
			case 212226218:
				return 14386;
			case 212782381:
				return 13287;
			case 212892441:
				return 11284;
			case 212929121:
				return 1155;
			case 213229346:
				return 9589;
			case 213698609:
				return 4418;
			case 213792403:
				return 10826;
			case 213859180:
				return 7535;
			case 214383724:
				return 13362;
			case 214567283:
				return 14139;
			case 215164947:
				return 16175;
			case 215442578:
				return 2126;
			case 215539508:
				return 13649;
			case 215667408:
				return 12975;
			case 216063302:
				return 5338;
			case 216413027:
				return 1396;
			case 216857924:
				return 10087;
			case 216882739:
				return 10331;
			case 217176582:
				return 16270;
			case 217912393:
				return 14473;
			case 218829559:
				return 5816;
			case 219115318:
				return 4762;
			case 219205323:
				return 14409;
			case 219297547:
				return 8010;
			case 219322615:
				return 16200;
			case 220045185:
				return 13673;
			case 220424311:
				return 7131;
			case 220479537:
				return 15720;
			case 220493865:
				return 6171;
			case 220896552:
				return 16423;
			case 220923946:
				return 9969;
			case 220962440:
				return 538;
			case 221155943:
				return 2663;
			case 221305510:
				return 7042;
			case 221674946:
				return 10923;
			case 221781182:
				return 11876;
			case 221865264:
				return 5035;
			case 222017060:
				return 8146;
			case 222084507:
				return 15805;
			case 222114552:
				return 11521;
			case 222473611:
				return 7746;
			case 222488574:
				return 3412;
			case 222541312:
				return 3715;
			case 223072623:
				return 7945;
			default:
				break;
		}
		if (iParam1 >= 1)
		{
		}
		return -1;
	}
	if (iParam0 <= 487338309)
	{
		switch (iParam0)
		{
			case 223180727:
				return 16007;
			case 223197487:
				return 14884;
			case 223431471:
				return 11458;
			case 223502781:
				return 12296;
			case 223983939:
				return 11030;
			case 224310170:
				return 15106;
			case 224709730:
				return 3727;
			case 225181280:
				return 8086;
			case 225401662:
				return 8903;
			case 225514697:
				return 15886;
			case 225722237:
				return 1045;
			case 226182679:
				return 15309;
			case 226389619:
				return 1382;
			case 226598976:
				return 12793;
			case 226793442:
				return 11937;
			case 227187597:
				return 11205;
			case 227319051:
				return 14852;
			case 227844676:
				return 5849;
			case 228235097:
				return 697;
			case 228581701:
				return 7113;
			case 228851061:
				return 2424;
			case 228889374:
				return 5188;
			case 229643685:
				return 6057;
			case 230142993:
				return 14878;
			case 230276839:
				return 11990;
			case 230492022:
				return 78;
			case 230517792:
				return 15018;
			case 231078421:
				return 1345;
			case 231124299:
				return 6763;
			case 231465939:
				return 9928;
			case 232449597:
				return 5735;
			case 232763463:
				return 13078;
			case 232852597:
				return 10860;
			case 233569385:
				return 2578;
			case 233635031:
				return 15950;
			case 233738904:
				return 9871;
			case 234305606:
				return 15767;
			case 234323799:
				return 13793;
			case 234943325:
				return 623;
			case 235063747:
				return 2181;
			case 235207169:
				return 10443;
			case 235229823:
				return 3846;
			case 235447016:
				return 6671;
			case 236311125:
				return 13047;
			case 236407543:
				return 15044;
			case 236604114:
				return 12423;
			case 236858246:
				return 1000;
			case 236859630:
				return 1441;
			case 237186989:
				return 6721;
			case 237269353:
				return 13888;
			case 237274221:
				return 2163;
			case 237310259:
				return 946;
			case 237817708:
				return 11074;
			case 237908191:
				return 8125;
			case 238512560:
				return 13251;
			case 238830633:
				return 8839;
			case 239173857:
				return 15944;
			case 239818497:
				return 1701;
			case 239959469:
				return 2284;
			case 240545220:
				return 14247;
			case 240687860:
				return 11814;
			case 240900868:
				return 14808;
			case 241043473:
				return 4915;
			case 241847248:
				return 10171;
			case 241850060:
				return 14168;
			case 242180298:
				return 12843;
			case 242358089:
				return 13491;
			case 242378710:
				return 13667;
			case 242679587:
				return 12725;
			case 243348692:
				return 9932;
			case 244009657:
				return 16177;
			case 244094557:
				return 10989;
			case 244800213:
				return 8070;
			case 245079671:
				return 12566;
			case 245507163:
				return 4005;
			case 245652955:
				return 1283;
			case 245833833:
				return 9014;
			case 245853780:
				return 357;
			case 246534346:
				return 6140;
			case 246980970:
				return 3907;
			case 247132906:
				return 12177;
			case 247170975:
				return 10267;
			case 247176142:
				return 16284;
			case 247498296:
				return 874;
			case 247976563:
				return 1550;
			case 247982492:
				return 14176;
			case 248188370:
				return 3587;
			case 248626860:
				return 11784;
			case 248713364:
				return 13328;
			case 249142917:
				return 3937;
			case 249221222:
				return 14291;
			case 249627944:
				return 7350;
			case 249885866:
				return 498;
			case 249886261:
				return 5902;
			case 249942432:
				return 6009;
			case 250162552:
				return 4853;
			case 250526919:
				return 2242;
			case 250955728:
				return 15669;
			case 251040154:
				return 3008;
			case 251099059:
				return 5357;
			case 251115602:
				return 9988;
			case 251386073:
				return 1534;
			case 251547695:
				return 428;
			case 251864392:
				return 6730;
			case 252314576:
				return 26;
			case 252669332:
				return 14580;
			case 253255433:
				return 8307;
			case 253923078:
				return 14458;
			case 254009656:
				return 15246;
			case 254185161:
				return 608;
			case 254234482:
				return 15259;
			case 254287408:
				return 13361;
			case 254625453:
				return 8075;
			case 255010514:
				return 3875;
			case 255596169:
				return 16027;
			case 255926778:
				return 143;
			case 256793160:
				return 9329;
			case 257071489:
				return 12670;
			case 257254210:
				return 13443;
			case 257431134:
				return 1710;
			case 257897016:
				return 9217;
			case 258171381:
				return 3196;
			case 258268748:
				return 8072;
			case 258517480:
				return 12159;
			case 258727601:
				return 7906;
			case 259323814:
				return 7960;
			case 259565532:
				return 10786;
			case 259925869:
				return 2179;
			case 260259554:
				return 12900;
			case 260509676:
				return 10755;
			case 260576971:
				return 13118;
			case 260732448:
				return 2712;
			case 261018537:
				return 761;
			case 261279195:
				return 4803;
			case 261622973:
				return 5550;
			case 262773219:
				return 7180;
			case 262814659:
				return 10892;
			case 262963307:
				return 2282;
			case 263886239:
				return 3864;
			case 263895055:
				return 9414;
			case 264156159:
				return 14558;
			case 264325500:
				return 4477;
			case 264425748:
				return 5630;
			case 264503396:
				return 14967;
			case 265500599:
				return 14499;
			case 265852654:
				return 2618;
			case 265884691:
				return 15328;
			case 266032451:
				return 13538;
			case 266408984:
				return 13363;
			case 266445814:
				return 8612;
			case 266548251:
				return 3830;
			case 266900228:
				return 10728;
			case 267029224:
				return 885;
			case 267438901:
				return 1325;
			case 267454503:
				return 4569;
			case 267955696:
				return 105;
			case 268124085:
				return 13296;
			case 268235529:
				return 16392;
			case 268303504:
				return 4843;
			case 268485415:
				return 6350;
			case 270113917:
				return 4285;
			case 270181721:
				return 10908;
			case 270188936:
				return 4324;
			case 270372646:
				return 13760;
			case 271054927:
				return 7502;
			case 271141235:
				return 10517;
			case 271170287:
				return 15504;
			case 271303145:
				return 11014;
			case 271636703:
				return 122;
			case 272102267:
				return 16393;
			case 272433059:
				return 8913;
			case 272459949:
				return 5;
			case 272583922:
				return 15522;
			case 272840768:
				return 1140;
			case 273165516:
				return 15635;
			case 273178914:
				return 7140;
			case 273439650:
				return 12748;
			case 273589739:
				return 11969;
			case 273671859:
				return 16275;
			case 273817113:
				return 5269;
			case 273848919:
				return 8163;
			case 274017882:
				return 1437;
			case 274231324:
				return 14060;
			case 274320542:
				return 4199;
			case 274396347:
				return 4515;
			case 274508975:
				return 13225;
			case 274751219:
				return 2615;
			case 274806741:
				return 11043;
			case 274824986:
				return 10149;
			case 276247023:
				return 4693;
			case 276385550:
				return 2312;
			case 276715850:
				return 10711;
			case 277038505:
				return 3854;
			case 277760974:
				return 2009;
			case 278186808:
				return 13209;
			case 278590287:
				return 350;
			case 278923713:
				return 13113;
			case 278936346:
				return 7337;
			case 279593638:
				return 6168;
			case 279627870:
				return 15728;
			case 279878967:
				return 2771;
			case 280076965:
				return 7734;
			case 280082968:
				return 4705;
			case 280226645:
				return 2589;
			case 280235325:
				return 8107;
			case 280434337:
				return 14820;
			case 280497806:
				return 10423;
			case 280607547:
				return 13085;
			case 280664063:
				return 16;
			case 280993829:
				return 13834;
			case 281101495:
				return 8889;
			case 281738335:
				return 624;
			case 281769536:
				return 5994;
			case 282804159:
				return 1685;
			case 282918927:
				return 3843;
			case 282973269:
				return 13651;
			case 283141989:
				return 16320;
			case 283492054:
				return 13569;
			case 283949486:
				return 1731;
			case 283979902:
				return 2928;
			case 284056517:
				return 11790;
			case 284292182:
				return 3194;
			case 284396018:
				return 13356;
			case 284580805:
				return 5284;
			case 284726601:
				return 1837;
			case 285011820:
				return 14354;
			case 285467536:
				return 14193;
			case 285618933:
				return 13771;
			case 285748512:
				return 13652;
			case 285767308:
				return 8734;
			case 285984845:
				return 10269;
			case 286178273:
				return 13092;
			case 286419589:
				return 13126;
			case 286463640:
				return 1525;
			case 286828056:
				return 9639;
			case 286877759:
				return 10291;
			case 286955722:
				return 16100;
			case 287247401:
				return 6424;
			case 287621336:
				return 8441;
			case 287666180:
				return 7685;
			case 287679490:
				return 5191;
			case 288484138:
				return 5764;
			case 289239370:
				return 5442;
			case 289385305:
				return 7854;
			case 290144048:
				return 7534;
			case 290520745:
				return 15833;
			case 290539519:
				return 13160;
			case 290598944:
				return 1933;
			case 290636059:
				return 8279;
			case 290746986:
				return 8984;
			case 290929815:
				return 4937;
			case 291474213:
				return 6605;
			case 291533536:
				return 6145;
			case 291827481:
				return 7860;
			case 291878635:
				return 14650;
			case 291997148:
				return 13136;
			case 292251708:
				return 7371;
			case 292301129:
				return 1721;
			case 292373850:
				return 11020;
			case 292397991:
				return 7007;
			case 292662918:
				return 11989;
			case 292790696:
				return 1871;
			case 292812873:
				return 16274;
			case 292952876:
				return 12219;
			case 293137035:
				return 3436;
			case 293210235:
				return 7640;
			case 293422640:
				return 12377;
			case 293431103:
				return 1380;
			case 293523278:
				return 7526;
			case 293572877:
				return 13727;
			case 294111104:
				return 3087;
			case 294938994:
				return 10699;
			case 295054439:
				return 818;
			case 295323015:
				return 1492;
			case 295477647:
				return 9685;
			case 295723583:
				return 13336;
			case 295760370:
				return 4449;
			case 295806611:
				return 4947;
			case 295828500:
				return 13686;
			case 295982630:
				return 4765;
			case 296006912:
				return 4067;
			case 296526764:
				return 14979;
			case 297858229:
				return 9033;
			case 297949581:
				return 7524;
			case 298270654:
				return 15847;
			case 298361615:
				return 1270;
			case 298442835:
				return 6756;
			case 298684530:
				return 5012;
			case 298714572:
				return 2999;
			case 298775414:
				return 1386;
			case 298980971:
				return 2193;
			case 299390196:
				return 15969;
			case 299465955:
				return 8543;
			case 300243632:
				return 12885;
			case 300353951:
				return 14130;
			case 300505615:
				return 15078;
			case 300698612:
				return 7968;
			case 300719830:
				return 7467;
			case 300722851:
				return 1760;
			case 300741192:
				return 9289;
			case 300773746:
				return 649;
			case 301083006:
				return 1061;
			case 301223741:
				return 12621;
			case 301247515:
				return 12578;
			case 301367410:
				return 11206;
			case 301679160:
				return 1805;
			case 301793540:
				return 2296;
			case 301996022:
				return 10469;
			case 302101708:
				return 6505;
			case 302231422:
				return 4536;
			case 303112619:
				return 13405;
			case 304367192:
				return 2189;
			case 304712926:
				return 3828;
			case 305182125:
				return 4495;
			case 305312923:
				return 12633;
			case 305390929:
				return 4538;
			case 305582962:
				return 2288;
			case 305942548:
				return 5178;
			case 306009509:
				return 3330;
			case 306472818:
				return 5748;
			case 306614244:
				return 3394;
			case 306779471:
				return 9919;
			case 308037739:
				return 13177;
			case 308579007:
				return 11829;
			case 308660842:
				return 3979;
			case 308850889:
				return 15907;
			case 309272093:
				return 7269;
			case 309535902:
				return 11090;
			case 309568113:
				return 5505;
			case 309890055:
				return 10416;
			case 310510034:
				return 13347;
			case 311067123:
				return 11953;
			case 311221568:
				return 16244;
			case 311419807:
				return 709;
			case 311947389:
				return 10597;
			case 311994336:
				return 13895;
			case 312006798:
				return 13975;
			case 312012583:
				return 1188;
			case 312023054:
				return 12169;
			case 312311030:
				return 14337;
			case 312377298:
				return 3764;
			case 312522577:
				return 1918;
			case 312785557:
				return 1340;
			case 312895311:
				return 288;
			case 312981363:
				return 10814;
			case 313354087:
				return 737;
			case 314031662:
				return 3936;
			case 314558067:
				return 13705;
			case 314625975:
				return 4326;
			case 314775562:
				return 3034;
			case 315191058:
				return 5137;
			case 316325071:
				return 15029;
			case 316681083:
				return 4304;
			case 316818877:
				return 2217;
			case 316862830:
				return 2401;
			case 316930447:
				return 11641;
			case 316979023:
				return 3943;
			case 317578190:
				return 15880;
			case 318013532:
				return 11730;
			case 318255585:
				return 2389;
			case 318524173:
				return 2620;
			case 318589183:
				return 5141;
			case 318845623:
				return 6479;
			case 318978948:
				return 12614;
			case 319165454:
				return 9286;
			case 319230703:
				return 11599;
			case 319326044:
				return 4753;
			case 319399831:
				return 13837;
			case 319638501:
				return 9785;
			case 320188074:
				return 8062;
			case 320465243:
				return 15908;
			case 320533525:
				return 12767;
			case 320547197:
				return 11123;
			case 320723614:
				return 2574;
			case 321260520:
				return 5667;
			case 321921895:
				return 11386;
			case 322077618:
				return 4743;
			case 322463222:
				return 7123;
			case 322487738:
				return 14237;
			case 322687028:
				return 7849;
			case 322911640:
				return 12741;
			case 322996031:
				return 9047;
			case 323018674:
				return 7680;
			case 323324563:
				return 15285;
			case 323402888:
				return 13400;
			case 323485423:
				return 11959;
			case 323516717:
				return 294;
			case 324674692:
				return 11908;
			case 325188454:
				return 12857;
			case 325252933:
				return 3892;
			case 325312501:
				return 12533;
			case 325782917:
				return 2636;
			case 326267528:
				return 9583;
			case 326443398:
				return 12422;
			case 326498087:
				return 9160;
			case 326498975:
				return 10650;
			case 326624460:
				return 14125;
			case 326673134:
				return 10096;
			case 326703349:
				return 7642;
			case 327813277:
				return 13474;
			case 328068607:
				return 9831;
			case 328855486:
				return 8941;
			case 329146770:
				return 7672;
			case 329578485:
				return 8512;
			case 329727331:
				return 13589;
			case 329908825:
				return 15782;
			case 329996111:
				return 16024;
			case 330315363:
				return 8403;
			case 330367347:
				return 793;
			case 330467191:
				return 5361;
			case 331021411:
				return 8097;
			case 331229203:
				return 13432;
			case 331242779:
				return 4161;
			case 331638287:
				return 8071;
			case 331669253:
				return 16356;
			case 331703650:
				return 11592;
			case 331720314:
				return 7120;
			case 332299000:
				return 1530;
			case 332386447:
				return 11179;
			case 332801470:
				return 13626;
			case 332852049:
				return 1563;
			case 333827141:
				return 3404;
			case 334243472:
				return 7127;
			case 334726220:
				return 4099;
			case 334745080:
				return 3725;
			case 334815926:
				return 12963;
			case 335081545:
				return 10329;
			case 335118833:
				return 3872;
			case 335130626:
				return 12653;
			case 335177818:
				return 974;
			case 336139515:
				return 9204;
			case 336251609:
				return 12319;
			case 336446720:
				return 4696;
			case 336754328:
				return 3702;
			case 336860618:
				return 10904;
			case 337083981:
				return 3733;
			case 337109765:
				return 14621;
			case 338037349:
				return 116;
			case 338263195:
				return 400;
			case 338670541:
				return 9772;
			case 338680904:
				return 8496;
			case 339129126:
				return 14014;
			case 339515569:
				return 7589;
			case 339705032:
				return 7102;
			case 339709868:
				return 16155;
			case 340021975:
				return 15850;
			case 340450636:
				return 5093;
			case 341544623:
				return 3838;
			case 341743291:
				return 8124;
			case 342280051:
				return 1157;
			case 342335375:
				return 5408;
			case 342752536:
				return 1938;
			case 343041104:
				return 518;
			case 343132507:
				return 4694;
			case 343197067:
				return 10027;
			case 343238651:
				return 10483;
			case 343412282:
				return 12577;
			case 343670350:
				return 5079;
			case 344207698:
				return 4159;
			case 344244818:
				return 7691;
			case 344576726:
				return 3127;
			case 344801956:
				return 5721;
			case 344968834:
				return 4211;
			case 345026109:
				return 1302;
			case 345349862:
				return 9835;
			case 345447783:
				return 13536;
			case 345725121:
				return 11806;
			case 346079442:
				return 12954;
			case 346209024:
				return 104;
			case 346324195:
				return 4443;
			case 346558070:
				return 7348;
			case 346609433:
				return 7893;
			case 346778123:
				return 3703;
			case 346878984:
				return 3554;
			case 347599949:
				return 15319;
			case 347953943:
				return 11569;
			case 349453545:
				return 13393;
			case 349691805:
				return 5628;
			case 349804771:
				return 1512;
			case 350504330:
				return 7507;
			case 350635759:
				return 3362;
			case 351634388:
				return 15083;
			case 351886803:
				return 8510;
			case 351891542:
				return 2429;
			case 352143044:
				return 14965;
			case 352716655:
				return 13570;
			case 352894560:
				return 2082;
			case 353134046:
				return 7745;
			case 353286208:
				return 2942;
			case 353586511:
				return 4558;
			case 354251353:
				return 12871;
			case 354575835:
				return 6504;
			case 354599633:
				return 11334;
			case 355316014:
				return 9885;
			case 355354506:
				return 14215;
			case 355611362:
				return 7962;
			case 355844791:
				return 9654;
			case 355963118:
				return 14958;
			case 356130777:
				return 7826;
			case 356165456:
				return 14295;
			case 356209471:
				return 1221;
			case 356851631:
				return 11722;
			case 357048290:
				return 1527;
			case 357371889:
				return 14021;
			case 357863945:
				return 10547;
			case 357869152:
				return 8180;
			case 357871844:
				return 10449;
			case 357971504:
				return 8190;
			case 358460989:
				return 1740;
			case 358502875:
				return 15211;
			case 359054075:
				return 5732;
			case 359337888:
				return 3834;
			case 359344987:
				return 14788;
			case 359708257:
				return 4643;
			case 360055996:
				return 15406;
			case 360530688:
				return 9681;
			case 360755784:
				return 2190;
			case 361082191:
				return 3537;
			case 361758091:
				return 15905;
			case 362284035:
				return 8634;
			case 362359375:
				return 12739;
			case 362406315:
				return 73;
			case 362617723:
				return 4448;
			case 363316579:
				return 2936;
			case 363544275:
				return 5838;
			case 363815774:
				return 15326;
			case 363933397:
				return 10532;
			case 364541094:
				return 12568;
			case 364645665:
				return 3508;
			case 364865747:
				return 8899;
			case 365587802:
				return 6308;
			case 365848713:
				return 12173;
			case 365867700:
				return 5847;
			case 366335304:
				return 1763;
			case 366343815:
				return 1737;
			case 367033685:
				return 2734;
			case 367220716:
				return 4610;
			case 367637652:
				return 14516;
			case 367739382:
				return 15324;
			case 367947756:
				return 2303;
			case 369319929:
				return 9377;
			case 369537007:
				return 8407;
			case 369584690:
				return 13471;
			case 369612903:
				return 8873;
			case 369752501:
				return 13035;
			case 370308622:
				return 11448;
			case 370330335:
				return 12922;
			case 370527842:
				return 11855;
			case 371114851:
				return 2518;
			case 371568154:
				return 13579;
			case 371729220:
				return 268;
			case 371901142:
				return 12302;
			case 372044869:
				return 9101;
			case 372049971:
				return 14223;
			case 372300590:
				return 9855;
			case 372355367:
				return 12214;
			case 373186704:
				return 2531;
			case 373994557:
				return 890;
			case 374161885:
				return 3361;
			case 374211028:
				return 16446;
			case 374403624:
				return 7069;
			case 374404806:
				return 58;
			case 374792535:
				return 14408;
			case 374970960:
				return 11326;
			case 375867283:
				return 5641;
			case 375919668:
				return 16304;
			case 376374856:
				return 6436;
			case 376387906:
				return 473;
			case 376903871:
				return 2767;
			case 376980629:
				return 3541;
			case 377451415:
				return 10328;
			case 378013911:
				return 157;
			case 378249112:
				return 7197;
			case 378274965:
				return 12218;
			case 378440031:
				return 10613;
			case 378589935:
				return 7508;
			case 378899325:
				return 14932;
			case 378947763:
				return 8009;
			case 379056782:
				return 4168;
			case 379190569:
				return 5522;
			case 379424088:
				return 6262;
			case 380159820:
				return 10592;
			case 380256843:
				return 13936;
			case 380788946:
				return 810;
			case 380865559:
				return 16220;
			case 381084107:
				return 10447;
			case 381225785:
				return 1239;
			case 381367777:
				return 13930;
			case 381701909:
				return 2892;
			case 381918768:
				return 612;
			case 382040614:
				return 15054;
			case 382293518:
				return 4540;
			case 382296139:
				return 14333;
			case 382599880:
				return 154;
			case 382648706:
				return 6780;
			case 382725882:
				return 2956;
			case 382943110:
				return 618;
			case 383002840:
				return 4422;
			case 383091236:
				return 5528;
			case 383127860:
				return 10136;
			case 383156325:
				return 10740;
			case 383189735:
				return 12753;
			case 383194958:
				return 16442;
			case 383510803:
				return 10839;
			case 383664966:
				return 9735;
			case 383936181:
				return 8928;
			case 384178408:
				return 8940;
			case 385001670:
				return 12700;
			case 385160824:
				return 3886;
			case 385845519:
				return 5524;
			case 386132391:
				return 1960;
			case 386445799:
				return 5310;
			case 386506078:
				return 14725;
			case 386511914:
				return 13916;
			case 386651444:
				return 8336;
			case 386765154:
				return 692;
			case 386780259:
				return 10005;
			case 387912564:
				return 4978;
			case 388126459:
				return 6709;
			case 388602302:
				return 13981;
			case 388844139:
				return 10474;
			case 388907481:
				return 5843;
			case 389231442:
				return 4372;
			case 389424401:
				return 11687;
			case 389588751:
				return 15633;
			case 389596132:
				return 10585;
			case 389641546:
				return 11313;
			case 389673974:
				return 4562;
			case 389769403:
				return 8295;
			case 390206733:
				return 11144;
			case 390226287:
				return 8389;
			case 390349903:
				return 12380;
			case 390392249:
				return 13228;
			case 391444527:
				return 15878;
			case 391506844:
				return 6705;
			case 391537447:
				return 825;
			case 391641481:
				return 7929;
			case 391724922:
				return 9842;
			case 392038369:
				return 13434;
			case 392319913:
				return 1490;
			case 392345697:
				return 3230;
			case 392637171:
				return 986;
			case 392683917:
				return 8974;
			case 393312176:
				return 7428;
			case 393495237:
				return 7230;
			case 393762183:
				return 8119;
			case 394734725:
				return 1316;
			case 394965246:
				return 10408;
			case 395694018:
				return 1585;
			case 396435232:
				return 11264;
			case 396880979:
				return 11871;
			case 397267903:
				return 5116;
			case 397440943:
				return 3184;
			case 398130375:
				return 16339;
			case 398313788:
				return 14345;
			case 398382432:
				return 9925;
			case 398985068:
				return 3243;
			case 399052822:
				return 14835;
			case 399227074:
				return 2121;
			case 399721449:
				return 8092;
			case 400195964:
				return 10694;
			case 400246329:
				return 693;
			case 400517539:
				return 9140;
			case 400860407:
				return 6849;
			case 401116463:
				return 2962;
			case 401286159:
				return 4657;
			case 401411939:
				return 5130;
			case 401481871:
				return 10861;
			case 401642131:
				return 5617;
			case 401817002:
				return 14991;
			case 401876763:
				return 15566;
			case 401971490:
				return 14349;
			case 402189405:
				return 3698;
			case 402370638:
				return 7009;
			case 402453215:
				return 410;
			case 403276376:
				return 3321;
			case 403479693:
				return 6319;
			case 404092548:
				return 5779;
			case 404244998:
				return 1571;
			case 404501085:
				return 13647;
			case 404590912:
				return 10921;
			case 404998417:
				return 9443;
			case 405075806:
				return 1831;
			case 405275189:
				return 8162;
			case 405368030:
				return 14455;
			case 405422316:
				return 8167;
			case 405638782:
				return 3299;
			case 405864149:
				return 8082;
			case 406182099:
				return 762;
			case 406282308:
				return 360;
			case 406597984:
				return 4885;
			case 406835686:
				return 5287;
			case 407569052:
				return 525;
			case 407830547:
				return 11435;
			case 408302120:
				return 5242;
			case 408476368:
				return 8691;
			case 408675688:
				return 1730;
			case 409012051:
				return 9315;
			case 409103007:
				return 8355;
			case 409236430:
				return 6332;
			case 409313458:
				return 11932;
			case 409431341:
				return 13271;
			case 409588904:
				return 13380;
			case 410910338:
				return 8644;
			case 411068303:
				return 13769;
			case 411778237:
				return 8054;
			case 412080037:
				return 8317;
			case 412214950:
				return 10832;
			case 412583060:
				return 10569;
			case 412658482:
				return 10719;
			case 412744271:
				return 6977;
			case 413028970:
				return 15819;
			case 413362460:
				return 12946;
			case 413432126:
				return 2262;
			case 413771941:
				return 16086;
			case 414037694:
				return 5564;
			case 414080116:
				return 4358;
			case 414160629:
				return 1756;
			case 414237282:
				return 569;
			case 414328602:
				return 9723;
			case 414329176:
				return 5803;
			case 414589646:
				return 6907;
			case 414928810:
				return 8002;
			case 415015873:
				return 11267;
			case 415351270:
				return 4512;
			case 415708300:
				return 8421;
			case 415830257:
				return 7328;
			case 416109010:
				return 405;
			case 416266381:
				return 11024;
			case 416961048:
				return 14340;
			case 417130503:
				return 698;
			case 417416138:
				return 14877;
			case 417708925:
				return 12958;
			case 418784501:
				return 8487;
			case 418926295:
				return 14148;
			case 418966047:
				return 3214;
			case 419307190:
				return 14789;
			case 419962661:
				return 8603;
			case 420299933:
				return 8829;
			case 420773469:
				return 12907;
			case 421099630:
				return 11728;
			case 421820477:
				return 6047;
			case 422141005:
				return 5374;
			case 422515199:
				return 2093;
			case 422549557:
				return 1640;
			case 422677956:
				return 6434;
			case 422911759:
				return 14362;
			case 423112700:
				return 15539;
			case 423309138:
				return 9088;
			case 423376258:
				return 144;
			case 423645650:
				return 2891;
			case 423941662:
				return 8025;
			case 423944241:
				return 914;
			case 424175505:
				return 15313;
			case 424205531:
				return 14085;
			case 424727031:
				return 13862;
			case 425129798:
				return 5799;
			case 425403071:
				return 9279;
			case 425523707:
				return 9578;
			case 425590927:
				return 12232;
			case 425624016:
				return 11798;
			case 425906023:
				return 8562;
			case 426274298:
				return 15146;
			case 426465760:
				return 15503;
			case 426596400:
				return 15271;
			case 426634917:
				return 9521;
			case 427032133:
				return 15311;
			case 427641194:
				return 3573;
			case 427790467:
				return 1089;
			case 428068258:
				return 3422;
			case 428150654:
				return 11583;
			case 428408078:
				return 6626;
			case 428963833:
				return 6829;
			case 429001203:
				return 15461;
			case 429486106:
				return 2453;
			case 429527769:
				return 7100;
			case 429527839:
				return 13546;
			case 429612335:
				return 16256;
			case 429911572:
				return 11505;
			case 429998962:
				return 12675;
			case 430098120:
				return 3131;
			case 430302479:
				return 2644;
			case 430764551:
				return 14989;
			case 430766991:
				return 12385;
			case 430787383:
				return 12950;
			case 430825800:
				return 12272;
			case 431494693:
				return 5049;
			case 431926707:
				return 10347;
			case 431975188:
				return 6684;
			case 432122187:
				return 3033;
			case 432247239:
				return 6033;
			case 432425480:
				return 5058;
			case 432460541:
				return 2527;
			case 432839080:
				return 13499;
			case 433635407:
				return 6840;
			case 433654390:
				return 13290;
			case 433895962:
				return 2855;
			case 434072995:
				return 5576;
			case 434327056:
				return 14061;
			case 434559625:
				return 6316;
			case 434585711:
				return 14848;
			case 434730246:
				return 15235;
			case 434983057:
				return 13725;
			case 435039767:
				return 9252;
			case 435174695:
				return 11611;
			case 435295188:
				return 6309;
			case 435421833:
				return 1817;
			case 436323736:
				return 4670;
			case 436525088:
				return 1227;
			case 436662880:
				return 15497;
			case 436773540:
				return 2639;
			case 437084896:
				return 7874;
			case 437116291:
				return 10189;
			case 437384652:
				return 10970;
			case 437587442:
				return 12756;
			case 437702012:
				return 14282;
			case 437871464:
				return 12188;
			case 437900650:
				return 3212;
			case 438042506:
				return 9372;
			case 438400824:
				return 1020;
			case 438589899:
				return 15877;
			case 438720265:
				return 12838;
			case 438989852:
				return 330;
			case 439224867:
				return 9306;
			case 439914621:
				return 972;
			case 440607172:
				return 1064;
			case 440730849:
				return 6759;
			case 440831189:
				return 15970;
			case 441245663:
				return 3651;
			case 441381433:
				return 12708;
			case 442209502:
				return 5149;
			case 442332261:
				return 12254;
			case 442459581:
				return 13068;
			case 442962619:
				return 9711;
			case 443436897:
				return 1702;
			case 443610488:
				return 2154;
			case 443685911:
				return 5910;
			case 444450768:
				return 4287;
			case 444625587:
				return 9379;
			case 445523069:
				return 11633;
			case 445536179:
				return 1151;
			case 445836476:
				return 9196;
			case 445844223:
				return 4072;
			case 445961202:
				return 15578;
			case 446281424:
				return 11705;
			case 446670976:
				return 14708;
			case 446834200:
				return 15013;
			case 447074149:
				return 2658;
			case 447454331:
				return 7590;
			case 447985836:
				return 2513;
			case 448273427:
				return 5901;
			case 448514076:
				return 4200;
			case 448634751:
				return 2171;
			case 449203326:
				return 15575;
			case 449377254:
				return 6900;
			case 449988935:
				return 8126;
			case 450612500:
				return 4739;
			case 451399593:
				return 10783;
			case 451462526:
				return 6923;
			case 452073398:
				return 3432;
			case 452222381:
				return 12248;
			case 452471303:
				return 9675;
			case 452583797:
				return 6760;
			case 452649673:
				return 546;
			case 452817049:
				return 7395;
			case 453452413:
				return 4757;
			case 453859050:
				return 10591;
			case 453903821:
				return 4973;
			case 454473310:
				return 11966;
			case 454655011:
				return 11701;
			case 454835070:
				return 13675;
			case 455554135:
				return 2954;
			case 455567824:
				return 16221;
			case 455684325:
				return 8468;
			case 455932889:
				return 13386;
			case 455966668:
				return 4599;
			case 456423805:
				return 7364;
			case 456717314:
				return 6074;
			case 457118649:
				return 1453;
			case 457157391:
				return 8418;
			case 457416415:
				return 14582;
			case 457591968:
				return 12504;
			case 457816518:
				return 9748;
			case 457854294:
				return 198;
			case 458077008:
				return 9998;
			case 458239529:
				return 9715;
			case 458837617:
				return 2111;
			case 458923086:
				return 3752;
			case 459594226:
				return 4772;
			case 459597256:
				return 4809;
			case 459690260:
				return 2100;
			case 459904422:
				return 4489;
			case 460261178:
				return 16329;
			case 460288301:
				return 2257;
			case 460337971:
				return 14999;
			case 460533344:
				return 2040;
			case 460793837:
				return 1156;
			case 460918133:
				return 2768;
			case 461545493:
				return 9863;
			case 462409959:
				return 16328;
			case 462617185:
				return 15912;
			case 462721569:
				return 7019;
			case 463271055:
				return 5747;
			case 463398434:
				return 7522;
			case 463643368:
				return 14562;
			case 463678502:
				return 5152;
			case 463853721:
				return 4588;
			case 464078840:
				return 10030;
			case 464210016:
				return 13716;
			case 464622849:
				return 3878;
			case 465390570:
				return 6348;
			case 466209020:
				return 16288;
			case 466306513:
				return 12381;
			case 466493087:
				return 6039;
			case 466947407:
				return 9542;
			case 467408818:
				return 8958;
			case 467555029:
				return 4233;
			case 467812574:
				return 12555;
			case 468081391:
				return 8594;
			case 468104332:
				return 4892;
			case 468158340:
				return 12107;
			case 468302367:
				return 11076;
			case 469031082:
				return 4959;
			case 469304374:
				return 7475;
			case 469310683:
				return 13176;
			case 469460142:
				return 6285;
			case 469583428:
				return 11742;
			case 470239852:
				return 13398;
			case 470418854:
				return 12485;
			case 470485448:
				return 9775;
			case 470488565:
				return 14303;
			case 470565587:
				return 5189;
			case 470612861:
				return 8080;
			case 470707819:
				return 9069;
			case 470870473:
				return 14427;
			case 470914735:
				return 10756;
			case 471175027:
				return 2739;
			case 471601524:
				return 15658;
			case 471900868:
				return 6107;
			case 472070829:
				return 10480;
			case 472249789:
				return 1536;
			case 472452682:
				return 6657;
			case 472835485:
				return 4355;
			case 473083936:
				return 13119;
			case 473235490:
				return 12326;
			case 473785009:
				return 13350;
			case 474018751:
				return 4053;
			case 474677157:
				return 2484;
			case 474955216:
				return 13125;
			case 475453832:
				return 8383;
			case 475672592:
				return 3564;
			case 476166129:
				return 14048;
			case 476872978:
				return 1815;
			case 476996807:
				return 5740;
			case 477187487:
				return 3053;
			case 477547053:
				return 15017;
			case 477560575:
				return 1882;
			case 477848623:
				return 7410;
			case 478130924:
				return 11073;
			case 478309937:
				return 7922;
			case 478342158:
				return 6529;
			case 478409878:
				return 6956;
			case 478508014:
				return 11923;
			case 478986344:
				return 14685;
			case 479008570:
				return 14462;
			case 479390460:
				return 6985;
			case 480011144:
				return 14939;
			case 480074467:
				return 4767;
			case 480075791:
				return 4880;
			case 480104093:
				return 4961;
			case 480688259:
				return 14528;
			case 480772107:
				return 13562;
			case 481061974:
				return 3974;
			case 481700110:
				return 12465;
			case 482075264:
				return 7412;
			case 482181494:
				return 2017;
			case 482491074:
				return 4983;
			case 482558380:
				return 7987;
			case 482703333:
				return 15021;
			case 482814102:
				return 4401;
			case 482936557:
				return 14942;
			case 483018055:
				return 13885;
			case 483044525:
				return 1048;
			case 483122023:
				return 217;
			case 483340703:
				return 12139;
			case 483491548:
				return 9759;
			case 483857415:
				return 9716;
			case 484125020:
				return 7318;
			case 484267611:
				return 14082;
			case 484307836:
				return 6577;
			case 484692703:
				return 5504;
			case 485151489:
				return 13880;
			case 485181727:
				return 1305;
			case 485431621:
				return 16314;
			case 485561621:
				return 9038;
			case 485607319:
				return 2220;
			case 485753584:
				return 10523;
			case 486444423:
				return 3896;
			case 487320741:
				return 10116;
			case 487338309:
				return 3571;
			default:
				break;
		}
		if (iParam1 >= 1)
		{
		}
		return -1;
	}
	if (iParam0 <= 753844161)
	{
		switch (iParam0)
		{
			case 487424450:
				return 9195;
			case 487852546:
				return 12507;
			case 488250899:
				return 7199;
			case 488305985:
				return 11479;
			case 488465195:
				return 6823;
			case 488844989:
				return 11272;
			case 488855249:
				return 5655;
			case 489047917:
				return 1349;
			case 489231067:
				return 10382;
			case 489310716:
				return 2084;
			case 489321407:
				return 4993;
			case 489431799:
				return 9576;
			case 489955612:
				return 14274;
			case 490159652:
				return 14570;
			case 490319042:
				return 12808;
			case 490499043:
				return 10577;
			case 490528894:
				return 9847;
			case 490621707:
				return 3810;
			case 491294923:
				return 1950;
			case 491792494:
				return 10595;
			case 492422271:
				return 1515;
			case 492526133:
				return 10744;
			case 493686686:
				return 9285;
			case 494091043:
				return 2706;
			case 494571889:
				return 8953;
			case 494656589:
				return 11109;
			case 494852756:
				return 9283;
			case 495062037:
				return 8989;
			case 495887552:
				return 9025;
			case 495953578:
				return 2586;
			case 496680872:
				return 8709;
			case 496728947:
				return 9839;
			case 497127143:
				return 4771;
			case 497185279:
				return 8681;
			case 497310887:
				return 12152;
			case 497321096:
				return 9633;
			case 497427107:
				return 8706;
			case 497591296:
				return 8705;
			case 497672421:
				return 701;
			case 497975045:
				return 1497;
			case 498016823:
				return 11324;
			case 498023212:
				return 6851;
			case 498177893:
				return 7242;
			case 498340704:
				return 5981;
			case 498403322:
				return 5334;
			case 498963320:
				return 15757;
			case 499052756:
				return 2541;
			case 499790328:
				return 13236;
			case 499820607:
				return 9418;
			case 499954671:
				return 8662;
			case 500098892:
				return 3407;
			case 500100576:
				return 16133;
			case 500219971:
				return 11513;
			case 500320009:
				return 15175;
			case 500607487:
				return 2315;
			case 500752794:
				return 8139;
			case 500970203:
				return 992;
			case 501470607:
				return 13087;
			case 501744437:
				return 15356;
			case 501761511:
				return 2206;
			case 501808480:
				return 1674;
			case 502238862:
				return 16187;
			case 502398408:
				return 9726;
			case 502984104:
				return 7451;
			case 503150452:
				return 13742;
			case 503196303:
				return 3399;
			case 503199113:
				return 13292;
			case 503598068:
				return 9343;
			case 503640342:
				return 11454;
			case 504037203:
				return 5399;
			case 504236963:
				return 2415;
			case 504243158:
				return 12463;
			case 504309396:
				return 6256;
			case 504815779:
				return 15346;
			case 504907135:
				return 9425;
			case 505117939:
				return 11915;
			case 505122544:
				return 3798;
			case 505176701:
				return 7357;
			case 505238571:
				return 6313;
			case 505367429:
				return 9003;
			case 505804694:
				return 255;
			case 506077044:
				return 4377;
			case 506543199:
				return 3071;
			case 506887890:
				return 14629;
			case 507119329:
				return 2302;
			case 507119910:
				return 6157;
			case 507123738:
				return 2474;
			case 507144575:
				return 5966;
			case 509428387:
				return 13366;
			case 510312109:
				return 14778;
			case 510355901:
				return 1252;
			case 510493281:
				return 13008;
			case 511930330:
				return 8661;
			case 512211978:
				return 16183;
			case 512587240:
				return 13826;
			case 513100234:
				return 15854;
			case 513249462:
				return 14572;
			case 513427234:
				return 14988;
			case 513497830:
				return 6703;
			case 513894708:
				return 4389;
			case 513974475:
				return 3164;
			case 514106253:
				return 2157;
			case 514240557:
				return 4258;
			case 515034642:
				return 6492;
			case 515239740:
				return 4303;
			case 515605768:
				return 3318;
			case 515657323:
				return 10941;
			case 515943817:
				return 10555;
			case 516412357:
				return 6988;
			case 516896024:
				return 14026;
			case 517340734:
				return 1675;
			case 517405030:
				return 7682;
			case 517495446:
				return 2101;
			case 518210307:
				return 611;
			case 518339740:
				return 16199;
			case 518401512:
				return 1681;
			case 518773733:
				return 14424;
			case 519003277:
				return 6517;
			case 519063315:
				return 2911;
			case 519208665:
				return 9428;
			case 519545360:
				return 64;
			case 519549403:
				return 5688;
			case 519626865:
				return 11019;
			case 519913602:
				return 4375;
			case 520166227:
				return 252;
			case 521099442:
				return 12929;
			case 521511152:
				return 6745;
			case 521540035:
				return 5428;
			case 522166531:
				return 2395;
			case 522615991:
				return 2433;
			case 523224906:
				return 12532;
			case 523327341:
				return 7656;
			case 523392385:
				return 6897;
			case 523429230:
				return 15731;
			case 523870695:
				return 7683;
			case 523882988:
				return 1863;
			case 524648970:
				return 3385;
			case 525317058:
				return 8910;
			case 525497919:
				return 8683;
			case 525529657:
				return 14948;
			case 525607125:
				return 2426;
			case 525818738:
				return 7752;
			case 525958562:
				return 12878;
			case 526843578:
				return 4690;
			case 527211009:
				return 3567;
			case 527759776:
				return 9796;
			case 528882718:
				return 1073;
			case 528897195:
				return 13081;
			case 528923193:
				return 12433;
			case 528964630:
				return 3738;
			case 530637668:
				return 3887;
			case 530836934:
				return 153;
			case 530850242:
				return 4296;
			case 531181266:
				return 9697;
			case 531215842:
				return 13352;
			case 531331428:
				return 8547;
			case 531516298:
				return 6580;
			case 531527393:
				return 9612;
			case 531542521:
				return 8194;
			case 532045889:
				return 13060;
			case 532131720:
				return 2090;
			case 532464796:
				return 9540;
			case 532501590:
				return 8663;
			case 533337235:
				return 10678;
			case 533342531:
				return 15941;
			case 533829074:
				return 15986;
			case 534359314:
				return 12024;
			case 534633125:
				return 235;
			case 534756004:
				return 808;
			case 534804900:
				return 10794;
			case 535187220:
				return 5661;
			case 535260431:
				return 13816;
			case 535450455:
				return 9036;
			case 535618277:
				return 3627;
			case 535857085:
				return 1593;
			case 536648435:
				return 5778;
			case 536653073:
				return 9185;
			case 536911115:
				return 5324;
			case 537802789:
				return 2953;
			case 538180294:
				return 3467;
			case 538279577:
				return 9922;
			case 538513813:
				return 2394;
			case 538674997:
				return 11044;
			case 539255083:
				return 14306;
			case 539400308:
				return 12511;
			case 539490743:
				return 3460;
			case 539576219:
				return 14810;
			case 539662086:
				return 4516;
			case 539955129:
				return 12484;
			case 539993137:
				return 16418;
			case 540113815:
				return 1259;
			case 540188127:
				return 9956;
			case 540295279:
				return 12184;
			case 540874704:
				return 3186;
			case 541085567:
				return 4838;
			case 541553984:
				return 7808;
			case 541633066:
				return 2694;
			case 541804162:
				return 7044;
			case 541872060:
				return 6477;
			case 542598026:
				return 14267;
			case 542726593:
				return 7773;
			case 543124810:
				return 4079;
			case 543892122:
				return 14575;
			case 544760040:
				return 12664;
			case 545068538:
				return 14754;
			case 545719083:
				return 2591;
			case 546252518:
				return 13568;
			case 546463094:
				return 14426;
			case 546829686:
				return 11541;
			case 546935383:
				return 10734;
			case 547259854:
				return 5061;
			case 547778382:
				return 7977;
			case 547844376:
				return 2467;
			case 547922260:
				return 15516;
			case 548232727:
				return 4293;
			case 548396801:
				return 3130;
			case 549022193:
				return 14381;
			case 549129388:
				return 464;
			case 549359474:
				return 5553;
			case 549598920:
				return 14898;
			case 549900435:
				return 14623;
			case 549935284:
				return 11522;
			case 550768627:
				return 6845;
			case 551045415:
				return 13909;
			case 551112092:
				return 9964;
			case 551145983:
				return 15447;
			case 551377925:
				return 10933;
			case 551583191:
				return 5288;
			case 551665137:
				return 1272;
			case 551859273:
				return 7594;
			case 552267143:
				return 6540;
			case 552625653:
				return 7359;
			case 552785863:
				return 13851;
			case 552839784:
				return 13108;
			case 553077066:
				return 6676;
			case 553164657:
				return 2;
			case 553886790:
				return 8867;
			case 553902161:
				return 7407;
			case 554823405:
				return 6167;
			case 555169423:
				return 11376;
			case 555975732:
				return 8288;
			case 556178319:
				return 10278;
			case 556355544:
				return 14730;
			case 556647215:
				return 4362;
			case 556781651:
				return 3216;
			case 557151415:
				return 7336;
			case 557176912:
				return 3706;
			case 557186812:
				return 12695;
			case 557216497:
				return 2652;
			case 557240949:
				return 1051;
			case 557337913:
				return 11718;
			case 557532139:
				return 5894;
			case 557640322:
				return 3014;
			case 558104539:
				return 1885;
			case 558436082:
				return 1289;
			case 558511945:
				return 7764;
			case 558831638:
				return 10529;
			case 558937568:
				return 14281;
			case 559018449:
				return 6370;
			case 559061483:
				return 13267;
			case 559097406:
				return 12176;
			case 559220291:
				return 6572;
			case 559230568:
				return 12587;
			case 559315239:
				return 540;
			case 559457635:
				return 16239;
			case 559479694:
				return 3606;
			case 559600609:
				return 3553;
			case 559643844:
				return 2721;
			case 559749998:
				return 7602;
			case 560218013:
				return 6552;
			case 560335125:
				return 875;
			case 560439280:
				return 7111;
			case 561132976:
				return 5687;
			case 561141206:
				return 251;
			case 561391114:
				return 11607;
			case 561394721:
				return 14080;
			case 561397293:
				return 2404;
			case 561644948:
				return 15532;
			case 561718280:
				return 2280;
			case 562167047:
				return 11500;
			case 562385050:
				return 2175;
			case 562494481:
				return 9121;
			case 562868438:
				return 1093;
			case 563170881:
				return 15277;
			case 563484210:
				return 3236;
			case 563561429:
				return 15427;
			case 563781222:
				return 13808;
			case 564294897:
				return 11459;
			case 564493879:
				return 13421;
			case 564568541:
				return 9219;
			case 564721996:
				return 10715;
			case 564969212:
				return 5921;
			case 565338944:
				return 12901;
			case 565862874:
				return 2786;
			case 566196562:
				return 3589;
			case 566644357:
				return 8398;
			case 566746786:
				return 12146;
			case 566825419:
				return 12583;
			case 566926108:
				return 8635;
			case 567155417:
				return 6097;
			case 567172020:
				return 13226;
			case 567396368:
				return 12130;
			case 567728296:
				return 11178;
			case 567902405:
				return 16453;
			case 568180522:
				return 6098;
			case 568276285:
				return 15895;
			case 568596210:
				return 7941;
			case 569018240:
				return 16464;
			case 569181918:
				return 11691;
			case 569321231:
				return 2948;
			case 569469665:
				return 3978;
			case 569642907:
				return 9599;
			case 569988581:
				return 2107;
			case 570023782:
				return 3211;
			case 570131323:
				return 2854;
			case 570384605:
				return 10118;
			case 570414865:
				return 8803;
			case 570441569:
				return 5946;
			case 570447609:
				return 1995;
			case 570671881:
				return 6135;
			case 570718668:
				return 843;
			case 570836262:
				return 6816;
			case 570973667:
				return 2579;
			case 572190474:
				return 11759;
			case 572662454:
				return 1074;
			case 572776836:
				return 2051;
			case 572854005:
				return 14457;
			case 572949676:
				return 8902;
			case 573180971:
				return 16350;
			case 573399884:
				return 7200;
			case 573799214:
				return 13104;
			case 574032994:
				return 3729;
			case 574452290:
				return 7894;
			case 574905658:
				return 10688;
			case 574922700:
				return 11059;
			case 574926209:
				return 8826;
			case 575114670:
				return 2551;
			case 575186324:
				return 7645;
			case 576066219:
				return 12421;
			case 576214299:
				return 753;
			case 576242377:
				return 6611;
			case 576351536:
				return 1006;
			case 576371070:
				return 3027;
			case 576691066:
				return 6040;
			case 576860527:
				return 513;
			case 576998473:
				return 7057;
			case 577188003:
				return 8108;
			case 577227125:
				return 13993;
			case 578391057:
				return 13983;
			case 578898429:
				return 6724;
			case 579273434:
				return 14219;
			case 579371663:
				return 9435;
			case 579417226:
				return 3140;
			case 579705889:
				return 5681;
			case 580144909:
				return 16142;
			case 580478751:
				return 12770;
			case 581435710:
				return 12625;
			case 581458458:
				return 485;
			case 581482573:
				return 9232;
			case 581557806:
				return 13437;
			case 581732909:
				return 9405;
			case 581738267:
				return 1082;
			case 583100657:
				return 2922;
			case 583374433:
				return 7219;
			case 583525084:
				return 10793;
			case 583628516:
				return 14394;
			case 583824996:
				return 5531;
			case 583972710:
				return 10155;
			case 584080307:
				return 11192;
			case 584168426:
				return 884;
			case 584313640:
				return 11950;
			case 585115609:
				return 118;
			case 585692720:
				return 8920;
			case 585719197:
				return 6843;
			case 586324504:
				return 3511;
			case 586570421:
				return 7542;
			case 586605949:
				return 10880;
			case 587066646:
				return 4503;
			case 587217958:
				return 11668;
			case 587588370:
				return 13318;
			case 588212888:
				return 3403;
			case 588329244:
				return 627;
			case 588470901:
				return 15520;
			case 589423499:
				return 15952;
			case 589894351:
				return 13051;
			case 590444944:
				return 16250;
			case 591276877:
				return 3146;
			case 591331501:
				return 7885;
			case 591969975:
				return 16428;
			case 592153167:
				return 1337;
			case 592154087:
				return 7414;
			case 592477034:
				return 6957;
			case 593041001:
				return 7612;
			case 593605887:
				return 15466;
			case 594026681:
				return 15084;
			case 594040097:
				return 14720;
			case 594254304:
				return 16066;
			case 594442597:
				return 2628;
			case 595331969:
				return 13464;
			case 595372923:
				return 1246;
			case 595623453:
				return 3464;
			case 596072051:
				return 13847;
			case 596329535:
				return 656;
			case 597010247:
				return 3687;
			case 597165823:
				return 11586;
			case 597344547:
				return 13640;
			case 598106280:
				return 2343;
			case 598196974:
				return 10811;
			case 598258880:
				return 14066;
			case 598487093:
				return 15791;
			case 599170258:
				return 14288;
			case 599567645:
				return 6238;
			case 599962053:
				return 1565;
			case 600136167:
				return 1117;
			case 600267224:
				return 11765;
			case 600620556:
				return 6754;
			case 600891938:
				return 626;
			case 601521823:
				return 16230;
			case 601820537:
				return 9603;
			case 601873519:
				return 6353;
			case 601909643:
				return 16297;
			case 602122057:
				return 10353;
			case 602233050:
				return 12676;
			case 602263712:
				return 2079;
			case 602440997:
				return 8900;
			case 602959793:
				return 12240;
			case 602974973:
				return 3821;
			case 603137392:
				return 3286;
			case 603318791:
				return 2879;
			case 603425648:
				return 4049;
			case 604026153:
				return 7254;
			case 604034888:
				return 2835;
			case 604357666:
				return 14602;
			case 604461197:
				return 12706;
			case 604616887:
				return 10625;
			case 605050702:
				return 1372;
			case 605287515:
				return 1374;
			case 605920487:
				return 15652;
			case 605954030:
				return 5974;
			case 606206989:
				return 8978;
			case 606474005:
				return 6959;
			case 606774971:
				return 331;
			case 607087854:
				return 3840;
			case 607278482:
				return 2018;
			case 608089865:
				return 6795;
			case 608586460:
				return 6615;
			case 608952059:
				return 8813;
			case 609006034:
				return 13525;
			case 609316360:
				return 155;
			case 609426797:
				return 1311;
			case 609774326:
				return 9953;
			case 610116622:
				return 9199;
			case 610166083:
				return 6475;
			case 610745168:
				return 15443;
			case 611065936:
				return 520;
			case 611280639:
				return 12516;
			case 611417531:
				return 14238;
			case 611757553:
				return 3747;
			case 611917374:
				return 10063;
			case 612127320:
				return 5088;
			case 612192203:
				return 12589;
			case 612296946:
				return 1049;
			case 612319808:
				return 7852;
			case 612348955:
				return 9211;
			case 612486560:
				return 5701;
			case 612810438:
				return 264;
			case 612863053:
				return 16365;
			case 612902737:
				return 12362;
			case 613419465:
				return 1402;
			case 613623578:
				return 6320;
			case 614096842:
				return 10780;
			case 614869605:
				return 1122;
			case 615442333:
				return 6303;
			case 615505870:
				return 8537;
			case 615627222:
				return 1412;
			case 615694346:
				return 11688;
			case 616554936:
				return 3347;
			case 616621460:
				return 5342;
			case 616937088:
				return 15376;
			case 617049669:
				return 8419;
			case 617088281:
				return 5624;
			case 617114795:
				return 2377;
			case 617285165:
				return 1676;
			case 617552302:
				return 1250;
			case 617703278:
				return 10157;
			case 618161539:
				return 6051;
			case 618352587:
				return 13518;
			case 618554987:
				return 7774;
			case 618873084:
				return 15455;
			case 619335984:
				return 15977;
			case 619494556:
				return 4011;
			case 619796252:
				return 8772;
			case 619887014:
				return 6919;
			case 620605238:
				return 14036;
			case 620742450:
				return 4481;
			case 621208395:
				return 14332;
			case 621296455:
				return 9475;
			case 621568381:
				return 3615;
			case 621989022:
				return 10673;
			case 622188493:
				return 8323;
			case 622277464:
				return 12574;
			case 622322952:
				return 10603;
			case 622369225:
				return 13485;
			case 622491397:
				return 8786;
			case 623988758:
				return 12688;
			case 624009015:
				return 15858;
			case 624009562:
				return 3781;
			case 624051917:
				return 34;
			case 624070311:
				return 4559;
			case 624882545:
				return 15001;
			case 625610107:
				return 14819;
			case 625728633:
				return 11186;
			case 625984167:
				return 11321;
			case 626176009:
				return 14536;
			case 627095894:
				return 3367;
			case 627458372:
				return 5263;
			case 627698057:
				return 12924;
			case 627975938:
				return 997;
			case 628326160:
				return 123;
			case 628568431:
				return 869;
			case 628727561:
				return 10372;
			case 628999829:
				return 6153;
			case 629055820:
				return 10200;
			case 629103948:
				return 12392;
			case 629760605:
				return 3935;
			case 629930715:
				return 5471;
			case 630288329:
				return 82;
			case 630949566:
				return 2804;
			case 631801810:
				return 6708;
			case 632760200:
				return 3251;
			case 632816045:
				return 9616;
			case 633069584:
				return 56;
			case 633326690:
				return 10392;
			case 633553493:
				return 2357;
			case 634275865:
				return 12747;
			case 634594407:
				return 16039;
			case 634946146:
				return 1191;
			case 635622754:
				return 7697;
			case 635824265:
				return 9018;
			case 636305565:
				return 7694;
			case 636430702:
				return 10492;
			case 636800968:
				return 13219;
			case 636912405:
				return 7312;
			case 637198132:
				return 6622;
			case 637287303:
				return 10318;
			case 637441327:
				return 11859;
			case 637849510:
				return 10674;
			case 638852484:
				return 15480;
			case 638897803:
				return 1739;
			case 639063781:
				return 3659;
			case 639465642:
				return 9886;
			case 639945649:
				return 8437;
			case 640051209:
				return 3530;
			case 640736064:
				return 137;
			case 640816886:
				return 10232;
			case 640983996:
				return 10855;
			case 641161701:
				return 397;
			case 641402963:
				return 15600;
			case 641743975:
				return 5022;
			case 641761779:
				return 13870;
			case 641849428:
				return 10781;
			case 641926279:
				return 13692;
			case 642269584:
				return 3911;
			case 642537026:
				return 12956;
			case 642662182:
				return 9203;
			case 643524426:
				return 12928;
			case 643575518:
				return 15583;
			case 643886123:
				return 12802;
			case 643926281:
				return 1198;
			case 644274034:
				return 3279;
			case 644407258:
				return 2560;
			case 646417756:
				return 14923;
			case 646505364:
				return 694;
			case 646608376:
				return 13615;
			case 646827943:
				return 1811;
			case 647459407:
				return 11378;
			case 647812917:
				return 8792;
			case 648498740:
				return 13693;
			case 649212257:
				return 5877;
			case 649931637:
				return 12074;
			case 649978093:
				return 6527;
			case 650646515:
				return 16438;
			case 651080842:
				return 668;
			case 651551567:
				return 15454;
			case 651870162:
				return 11674;
			case 652841906:
				return 3677;
			case 653445543:
				return 14802;
			case 654026816:
				return 3091;
			case 654214315:
				return 6454;
			case 654265039:
				return 629;
			case 654680461:
				return 167;
			case 654934101:
				return 14184;
			case 654972615:
				return 11712;
			case 655188622:
				return 13869;
			case 655931573:
				return 10632;
			case 656129288:
				return 4302;
			case 656129737:
				return 5801;
			case 656139738:
				return 11685;
			case 656184996:
				return 16218;
			case 656581722:
				return 1957;
			case 657062187:
				return 9977;
			case 657319763:
				return 11974;
			case 657382278:
				return 10031;
			case 657391408:
				return 11081;
			case 657513603:
				return 6762;
			case 657675238:
				return 5313;
			case 658133283:
				return 13900;
			case 658220713:
				return 3117;
			case 658891574:
				return 8272;
			case 659107063:
				return 4748;
			case 659233279:
				return 840;
			case 659361771:
				return 5456;
			case 659812060:
				return 12099;
			case 659858933:
				return 12732;
			case 659999211:
				return 5928;
			case 660801225:
				return 1549;
			case 661142572:
				return 8665;
			case 661461038:
				return 10300;
			case 661519966:
				return 14395;
			case 662206420:
				return 9215;
			case 662219326:
				return 8554;
			case 662292677:
				return 1003;
			case 662450436:
				return 4376;
			case 662578349:
				return 13829;
			case 662584760:
				return 3630;
			case 662962129:
				return 13573;
			case 662979698:
				return 1716;
			case 663506853:
				return 6052;
			case 663524178:
				return 10138;
			case 663716280:
				return 6444;
			case 664493942:
				return 11088;
			case 664505225:
				return 1690;
			case 664795503:
				return 9606;
			case 665478216:
				return 11675;
			case 665502965:
				return 14200;
			case 665798609:
				return 13353;
			case 666161709:
				return 8401;
			case 666345149:
				return 394;
			case 666462942:
				return 4298;
			case 666569944:
				return 13679;
			case 666597548:
				return 10607;
			case 668030318:
				return 9794;
			case 668639892:
				return 10571;
			case 669185471:
				return 4592;
			case 669329733:
				return 12602;
			case 670102770:
				return 13815;
			case 670840203:
				return 8247;
			case 671209945:
				return 7790;
			case 671218632:
				return 1517;
			case 671459626:
				return 9878;
			case 672110174:
				return 4452;
			case 672161093:
				return 5560;
			case 673153214:
				return 2859;
			case 673305066:
				return 7571;
			case 673350342:
				return 6204;
			case 673396831:
				return 10057;
			case 673523954:
				return 14053;
			case 673524471:
				return 5465;
			case 673616187:
				return 8073;
			case 674267496:
				return 14506;
			case 674287411:
				return 15360;
			case 674384398:
				return 12809;
			case 674950397:
				return 15859;
			case 675667608:
				return 9809;
			case 675764606:
				return 7723;
			case 676153264:
				return 9519;
			case 676456941:
				return 14341;
			case 676627222:
				return 1287;
			case 676755041:
				return 11991;
			case 676903322:
				return 8848;
			case 676931074:
				return 9222;
			case 677043675:
				return 4535;
			case 677240371:
				return 3814;
			case 677318430:
				return 616;
			case 677480263:
				return 15349;
			case 677555591:
				return 9566;
			case 677599687:
				return 10215;
			case 677600728:
				return 4017;
			case 677618940:
				return 12627;
			case 677704454:
				return 717;
			case 677921311:
				return 8208;
			case 678144146:
				return 9050;
			case 678166986:
				return 13067;
			case 679192099:
				return 152;
			case 679225015:
				return 10041;
			case 679577171:
				return 8164;
			case 679836386:
				return 10162;
			case 679961152:
				return 533;
			case 680020185:
				return 417;
			case 680043254:
				return 8157;
			case 680365015:
				return 1617;
			case 680739543:
				return 1443;
			case 681377067:
				return 4486;
			case 681443655:
				return 765;
			case 681470742:
				return 10782;
			case 681501491:
				return 11519;
			case 681653557:
				return 9815;
			case 681884168:
				return 5601;
			case 682138542:
				return 8304;
			case 682165114:
				return 2701;
			case 682330569:
				return 6955;
			case 682499315:
				return 15199;
			case 682766158:
				return 6102;
			case 682771303:
				return 7643;
			case 683004125:
				return 12100;
			case 683151664:
				return 13260;
			case 683338325:
				return 12666;
			case 683393325:
				return 6371;
			case 683992326:
				return 5840;
			case 684527193:
				return 9857;
			case 684676996:
				return 9614;
			case 685047198:
				return 6776;
			case 685260068:
				return 14178;
			case 685658524:
				return 9356;
			case 685707523:
				return 4522;
			case 685889901:
				return 4398;
			case 685924568:
				return 12150;
			case 686051865:
				return 14987;
			case 686053343:
				return 13917;
			case 686167983:
				return 7433;
			case 686594542:
				return 544;
			case 686997786:
				return 136;
			case 687145409:
				return 15675;
			case 687248812:
				return 15861;
			case 687302557:
				return 16176;
			case 687445866:
				return 14630;
			case 687543288:
				return 286;
			case 687731970:
				return 4097;
			case 687938629:
				return 5036;
			case 688207729:
				return 2705;
			case 688679195:
				return 5765;
			case 688684846:
				return 10404;
			case 688685628:
				return 1794;
			case 688766176:
				return 12858;
			case 688822577:
				return 2096;
			case 690465079:
				return 9119;
			case 690525807:
				return 15553;
			case 690541952:
				return 459;
			case 690625401:
				return 13962;
			case 691024004:
				return 2027;
			case 691657413:
				return 13033;
			case 691906372:
				return 3284;
			case 692065755:
				return 10044;
			case 692406654:
				return 270;
			case 692475673:
				return 15367;
			case 692589874:
				return 9100;
			case 693157726:
				return 1177;
			case 693215451:
				return 10972;
			case 693636103:
				return 1470;
			case 694414000:
				return 9250;
			case 694577408:
				return 12408;
			case 695388577:
				return 5411;
			case 695408494:
				return 1747;
			case 695757242:
				return 15870;
			case 695821835:
				return 13201;
			case 696334008:
				return 5708;
			case 696549872:
				return 9841;
			case 696562907:
				return 3433;
			case 696832970:
				return 3065;
			case 696968333:
				return 6903;
			case 697062597:
				return 3665;
			case 697075200:
				return 14566;
			case 697338775:
				return 15982;
			case 697634817:
				return 12993;
			case 697773749:
				return 12437;
			case 697863232:
				return 11501;
			case 698238985:
				return 1920;
			case 698305037:
				return 9423;
			case 698330238:
				return 9769;
			case 698477785:
				return 11520;
			case 699122893:
				return 8129;
			case 699144739:
				return 7434;
			case 699606933:
				return 4706;
			case 699763750:
				return 1832;
			case 699920741:
				return 2248;
			case 700433188:
				return 7225;
			case 700439658:
				return 10785;
			case 700715927:
				return 5211;
			case 700856743:
				return 10978;
			case 701349000:
				return 9924;
			case 701976173:
				return 5040;
			case 702288459:
				return 62;
			case 702418159:
				return 11588;
			case 702784749:
				return 12769;
			case 702887809:
				return 8833;
			case 703203753:
				return 14442;
			case 703339954:
				return 7772;
			case 703578854:
				return 13057;
			case 703694458:
				return 9022;
			case 703712157:
				return 14555;
			case 703748386:
				return 718;
			case 703773503:
				return 8967;
			case 703919189:
				return 1952;
			case 704414137:
				return 10578;
			case 704576407:
				return 339;
			case 704596668:
				return 1629;
			case 704666041:
				return 4348;
			case 704796177:
				return 4034;
			case 704804902:
				return 4963;
			case 704817881:
				return 12080;
			case 704872865:
				return 10737;
			case 704981833:
				return 8396;
			case 705022795:
				return 12428;
			case 705413541:
				return 7720;
			case 705529554:
				return 1381;
			case 705600795:
				return 7319;
			case 705691988:
				return 14597;
			case 706115302:
				return 4701;
			case 706334491:
				return 14936;
			case 706485280:
				return 14568;
			case 706800092:
				return 14003;
			case 707299770:
				return 2375;
			case 707385061:
				return 9805;
			case 707485192:
				return 12957;
			case 707548864:
				return 10799;
			case 707745297:
				return 9967;
			case 707950099:
				return 6734;
			case 708284478:
				return 16231;
			case 708571560:
				return 4661;
			case 708597664:
				return 2971;
			case 708772638:
				return 2237;
			case 708825513:
				return 1029;
			case 709101537:
				return 4052;
			case 709688505:
				return 6058;
			case 709901649:
				return 15627;
			case 710036869:
				return 5817;
			case 710640419:
				return 3086;
			case 710657386:
				return 10862;
			case 710762195:
				return 13310;
			case 710808670:
				return 4320;
			case 710863980:
				return 12244;
			case 711387733:
				return 16211;
			case 711504798:
				return 7332;
			case 711749783:
				return 9509;
			case 712396887:
				return 1671;
			case 712910242:
				return 8290;
			case 713519527:
				return 550;
			case 713576200:
				return 2883;
			case 713950449:
				return 362;
			case 715114036:
				return 6007;
			case 715234726:
				return 378;
			case 715484092:
				return 3252;
			case 715826952:
				return 3664;
			case 716186336:
				return 13167;
			case 716341297:
				return 8341;
			case 716515216:
				return 8915;
			case 716675958:
				return 15212;
			case 716704079:
				return 16128;
			case 717447832:
				return 8083;
			case 717679744:
				return 16148;
			case 717863599:
				return 15992;
			case 718098414:
				return 6835;
			case 718525898:
				return 13314;
			case 718652736:
				return 11159;
			case 718668013:
				return 1329;
			case 718966598:
				return 1126;
			case 719648503:
				return 15820;
			case 719681311:
				return 16087;
			case 720076071:
				return 13963;
			case 720856815:
				return 566;
			case 720982490:
				return 9090;
			case 721215143:
				return 4410;
			case 721472341:
				return 6689;
			case 721583692:
				return 14322;
			case 722022484:
				return 468;
			case 722032443:
				return 7059;
			case 722032562:
				return 5365;
			case 722156226:
				return 16136;
			case 722236839:
				return 16046;
			case 722421619:
				return 1800;
			case 722538304:
				return 9383;
			case 722773461:
				return 9427;
			case 722922942:
				return 12955;
			case 723155563:
				return 11636;
			case 723190474:
				return 14584;
			case 723574243:
				return 13732;
			case 724282512:
				return 2686;
			case 724291670:
				return 2139;
			case 724299316:
				return 12949;
			case 724309542:
				return 11543;
			case 724635024:
				return 2758;
			case 724814820:
				return 3365;
			case 725140468:
				return 15698;
			case 725445419:
				return 9590;
			case 725749801:
				return 6119;
			case 727750155:
				return 617;
			case 727822854:
				return 11058;
			case 728302196:
				return 381;
			case 728894337:
				return 6791;
			case 729144843:
				return 5233;
			case 729192041:
				return 15297;
			case 729271841:
				return 7487;
			case 729415757:
				return 9845;
			case 729471181:
				return 14779;
			case 729561989:
				return 6582;
			case 729638353:
				return 12040;
			case 729790505:
				return 15473;
			case 729893963:
				return 15903;
			case 729932809:
				return 2825;
			case 730041742:
				return 12687;
			case 730068799:
				return 403;
			case 730092646:
				return 14508;
			case 730181461:
				return 8642;
			case 730407394:
				return 5900;
			case 730579614:
				return 4170;
			case 731029607:
				return 15314;
			case 731127280:
				return 2183;
			case 731496312:
				return 2811;
			case 731716223:
				return 5454;
			case 731788069:
				return 9747;
			case 732106831:
				return 10773;
			case 732358321:
				return 11866;
			case 732488040:
				return 2204;
			case 733176265:
				return 6500;
			case 733835376:
				return 2361;
			case 734219399:
				return 7690;
			case 734221278:
				return 5157;
			case 734891104:
				return 10809;
			case 735564108:
				return 6331;
			case 735965084:
				return 2781;
			case 736057191:
				return 6692;
			case 736108108:
				return 11202;
			case 736176753:
				return 16188;
			case 736464247:
				return 6006;
			case 736672924:
				return 15809;
			case 736731582:
				return 2402;
			case 737252554:
				return 13501;
			case 737551253:
				return 10082;
			case 737690157:
				return 1171;
			case 737763969:
				return 54;
			case 737910671:
				return 16074;
			case 738020132:
				return 2363;
			case 738028295:
				return 2332;
			case 738189935:
				return 15994;
			case 739137516:
				return 12436;
			case 739375117:
				return 1973;
			case 739408112:
				return 1639;
			case 739550558:
				return 4035;
			case 739604594:
				return 1081;
			case 739677348:
				return 15595;
			case 739756370:
				return 9939;
			case 740300135:
				return 14759;
			case 740542951:
				return 781;
			case 741290109:
				return 3136;
			case 741680814:
				return 6739;
			case 741873333:
				return 11410;
			case 741925082:
				return 14134;
			case 742064790:
				return 14425;
			case 742479254:
				return 1982;
			case 742906468:
				return 2510;
			case 742993848:
				return 3555;
			case 743219360:
				return 15076;
			case 743343178:
				return 6029;
			case 743705390:
				return 2243;
			case 743825664:
				return 8476;
			case 744014130:
				return 13107;
			case 744581301:
				return 4834;
			case 744628117:
				return 6437;
			case 744649356:
				return 13088;
			case 745018993:
				return 11576;
			case 745377950:
				return 2164;
			case 745643447:
				return 12944;
			case 745931045:
				return 10813;
			case 746047447:
				return 9236;
			case 746058989:
				return 1446;
			case 746335264:
				return 8439;
			case 746399560:
				return 15592;
			case 746607638:
				return 528;
			case 746627200:
				return 14598;
			case 746770729:
				return 10988;
			case 747062943:
				return 9350;
			case 747087730:
				return 11170;
			case 747217778:
				return 14045;
			case 747462423:
				return 16064;
			case 747693043:
				return 12233;
			case 747795978:
				return 2099;
			case 748274267:
				return 10545;
			case 748448194:
				return 14907;
			case 749241731:
				return 12847;
			case 749266870:
				return 14433;
			case 749327242:
				return 5367;
			case 749478396:
				return 707;
			case 749949343:
				return 7052;
			case 750377840:
				return 6400;
			case 750757821:
				return 1654;
			case 750905339:
				return 1499;
			case 751061895:
				return 887;
			case 751329573:
				return 4202;
			case 751339119:
				return 5277;
			case 751850359:
				return 9330;
			case 752024959:
				return 4271;
			case 752487551:
				return 8614;
			case 752503573:
				return 15177;
			case 752599282:
				return 4703;
			case 752600834:
				return 6222;
			case 752846327:
				return 15807;
			case 752877517:
				return 13202;
			case 753237759:
				return 15679;
			case 753356425:
				return 5363;
			case 753844161:
				return 3614;
			default:
				break;
		}
		if (iParam1 >= 1)
		{
		}
		return -1;
	}
	if (iParam0 <= 1008528096)
	{
		switch (iParam0)
		{
			case 754133096:
				return 5972;
			case 754678650:
				return 2898;
			case 754948928:
				return 3768;
			case 755040865:
				return 8840;
			case 755516137:
				return 9548;
			case 755719297:
				return 4323;
			case 755732447:
				return 5397;
			case 755774783:
				return 15030;
			case 756557050:
				return 9245;
			case 758048120:
				return 10936;
			case 758171316:
				return 9338;
			case 759172664:
				return 8;
			case 759402348:
				return 15996;
			case 759714179:
				return 10321;
			case 759906147:
				return 14509;
			case 760174278:
				return 11977;
			case 760370349:
				return 2607;
			case 760481963:
				return 9899;
			case 760847060:
				return 10576;
			case 761490628:
				return 9585;
			case 761881044:
				return 2902;
			case 762216523:
				return 2255;
			case 762422393:
				return 1775;
			case 762962804:
				return 8924;
			case 763117364:
				return 9167;
			case 763417437:
				return 10173;
			case 763437778:
				return 15736;
			case 763842263:
				return 582;
			case 764175545:
				return 10520;
			case 764478773:
				return 11830;
			case 765042590:
				return 5410;
			case 765505256:
				return 1600;
			case 765646576:
				return 5431;
			case 765651515:
				return 15385;
			case 765708920:
				return 2901;
			case 766012238:
				return 6655;
			case 766293155:
				return 14625;
			case 766304004:
				return 806;
			case 766490470:
				return 15835;
			case 766846467:
				return 3923;
			case 766850795:
				return 8992;
			case 767134848:
				return 9378;
			case 767272891:
				return 7476;
			case 768114873:
				return 11995;
			case 768463647:
				return 1573;
			case 768520500:
				return 7662;
			case 768537751:
				return 2441;
			case 768802576:
				return 4178;
			case 769515768:
				return 613;
			case 769516480:
				return 4328;
			case 769582159:
				return 178;
			case 769766655:
				return 15659;
			case 769869153:
				return 6418;
			case 769946245:
				return 9908;
			case 770025613:
				return 8536;
			case 770334872:
				return 1024;
			case 770625810:
				return 1269;
			case 771215252:
				return 13062;
			case 771348077:
				return 10564;
			case 772077244:
				return 12831;
			case 772584465:
				return 5984;
			case 773085010:
				return 4856;
			case 773279860:
				return 1631;
			case 773471797:
				return 6080;
			case 774018820:
				return 12763;
			case 774211111:
				return 15234;
			case 774944456:
				return 15959;
			case 775030892:
				return 9388;
			case 775037074:
				return 11835;
			case 775102956:
				return 13009;
			case 775184720:
				return 435;
			case 775317822:
				return 2703;
			case 775492026:
				return 16198;
			case 775660940:
				return 2234;
			case 775774671:
				return 14277;
			case 776124625:
				return 2021;
			case 776227741:
				return 7010;
			case 776262968:
				return 9880;
			case 777917061:
				return 7596;
			case 778449680:
				return 16259;
			case 778670526:
				return 4080;
			case 778775984:
				return 16145;
			case 778800947:
				return 15032;
			case 779860444:
				return 14225;
			case 780233469:
				return 2068;
			case 780441462:
				return 12191;
			case 780792695:
				return 8812;
			case 781259856:
				return 4584;
			case 781374620:
				return 13321;
			case 781695271:
				return 280;
			case 781882897:
				return 7274;
			case 782315815:
				return 6873;
			case 782395059:
				return 12654;
			case 782541005:
				return 13418;
			case 782723549:
				return 15370;
			case 782792316:
				return 13881;
			case 783093083:
				return 3256;
			case 783689283:
				return 11872;
			case 783773905:
				return 3012;
			case 784094203:
				return 2832;
			case 784215241:
				return 1968;
			case 784659507:
				return 3867;
			case 785262586:
				return 14782;
			case 785969518:
				return 3348;
			case 786079660:
				return 12681;
			case 786364909:
				return 15183;
			case 786396288:
				return 8374;
			case 786789292:
				return 13852;
			case 787211696:
				return 4653;
			case 787743430:
				return 13357;
			case 787786127:
				return 11050;
			case 788230283:
				return 13645;
			case 788367781:
				return 4530;
			case 788805344:
				return 13689;
			case 788811626:
				return 6906;
			case 789210942:
				return 6235;
			case 790068786:
				return 8936;
			case 790418313:
				return 9870;
			case 790806971:
				return 7937;
			case 791619716:
				return 3314;
			case 791890618:
				return 12371;
			case 792687843:
				return 4504;
			case 792870649:
				return 5219;
			case 793294898:
				return 10062;
			case 793740822:
				return 602;
			case 793896324:
				return 9812;
			case 794358523:
				return 7340;
			case 794654164:
				return 15027;
			case 794771241:
				return 6397;
			case 794804343:
				return 6025;
			case 794929874:
				return 9313;
			case 795372606:
				return 6768;
			case 795691719:
				return 13660;
			case 795977430:
				return 10629;
			case 796047069:
				return 30;
			case 796658500:
				return 3504;
			case 796740866:
				return 11736;
			case 796858570:
				return 2004;
			case 796898359:
				return 156;
			case 796934429:
				return 9220;
			case 798068879:
				return 14383;
			case 798138932:
				return 5904;
			case 798234609:
				return 14876;
			case 798236226:
				return 1148;
			case 798276412:
				return 9039;
			case 798519947:
				return 1930;
			case 799045138:
				return 14094;
			case 799179000:
				return 6440;
			case 799253244:
				return 8001;
			case 799352296:
				return 11191;
			case 799489237:
				return 2086;
			case 799725536:
				return 2723;
			case 799791017:
				return 14919;
			case 800098637:
				return 8926;
			case 800203595:
				return 9708;
			case 800301368:
				return 14229;
			case 800539613:
				return 9339;
			case 800761005:
				return 1908;
			case 801394992:
				return 4454;
			case 801404222:
				return 1822;
			case 801440330:
				return 12837;
			case 801661174:
				return 8347;
			case 801887288:
				return 3473;
			case 801977288:
				return 11842;
			case 802210959:
				return 4831;
			case 802241491:
				return 14103;
			case 802578733:
				return 2881;
			case 802585746:
				return 6990;
			case 802784330:
				return 14700;
			case 802945550:
				return 11309;
			case 802992490:
				return 15585;
			case 803241529:
				return 7051;
			case 803513037:
				return 11690;
			case 804009941:
				return 15758;
			case 804548988:
				return 12109;
			case 805042852:
				return 8600;
			case 805252409:
				return 10791;
			case 805425957:
				return 5695;
			case 805433438:
				return 11523;
			case 805444948:
				return 4711;
			case 805812759:
				return 3568;
			case 805970035:
				return 8901;
			case 805995741:
				return 8138;
			case 806725958:
				return 7782;
			case 806813191:
				return 11578;
			case 807038000:
				return 14201;
			case 807180656:
				return 160;
			case 807216686:
				return 8639;
			case 807354590:
				return 739;
			case 807427312:
				return 11909;
			case 807441861:
				return 1696;
			case 807468374:
				return 9742;
			case 807560518:
				return 11704;
			case 807728658:
				return 11897;
			case 807771937:
				return 4996;
			case 808443551:
				return 3707;
			case 808601893:
				return 15113;
			case 808655744:
				return 14681;
			case 808804956:
				return 10902;
			case 809163253:
				return 8482;
			case 809190155:
				return 9274;
			case 809388728:
				return 13277;
			case 809476504:
				return 4388;
			case 809532746:
				return 14966;
			case 809618066:
				return 8718;
			case 809653548:
				return 9469;
			case 809664026:
				return 12382;
			case 809981860:
				return 7898;
			case 810064452:
				return 7652;
			case 810182380:
				return 14373;
			case 811480910:
				return 3476;
			case 811639878:
				return 9296;
			case 811678375:
				return 4744;
			case 811979101:
				return 5800;
			case 812105285:
				return 6996;
			case 812106580:
				return 13074;
			case 812237684:
				return 15936;
			case 812489544:
				return 8970;
			case 812805259:
				return 4339;
			case 813051418:
				return 13866;
			case 813067759:
				return 8264;
			case 813681801:
				return 3253;
			case 814139359:
				return 204;
			case 814218108:
				return 11491;
			case 814343380:
				return 2131;
			case 814956116:
				return 2354;
			case 814967714:
				return 5328;
			case 815489452:
				return 4468;
			case 816023634:
				return 5150;
			case 816927191:
				return 3009;
			case 817214999:
				return 15649;
			case 817423937:
				return 6788;
			case 817752047:
				return 4156;
			case 818781856:
				return 8036;
			case 819413824:
				return 2684;
			case 819421824:
				return 12546;
			case 819493639:
				return 5345;
			case 819995935:
				return 851;
			case 819999946:
				return 15169;
			case 820339735:
				return 10188;
			case 820449324:
				return 5820;
			case 820972426:
				return 8641;
			case 821230530:
				return 15498;
			case 822759307:
				return 14486;
			case 822883054:
				return 7218;
			case 822933632:
				return 4950;
			case 822986674:
				return 7810;
			case 822992091:
				return 5619;
			case 823289406:
				return 11115;
			case 823321772:
				return 15157;
			case 823352510:
				return 14359;
			case 824186723:
				return 49;
			case 824344220:
				return 15765;
			case 824786823:
				return 3842;
			case 824829704:
				return 11794;
			case 824878343:
				return 6053;
			case 825011097:
				return 8445;
			case 825038950:
				return 3411;
			case 825496160:
				return 10028;
			case 825538223:
				return 2818;
			case 826039942:
				return 11858;
			case 826216492:
				return 16179;
			case 826229249:
				return 4987;
			case 826385717:
				return 16069;
			case 826392697:
				return 3797;
			case 826921696:
				return 10716;
			case 827002580:
				return 12845;
			case 827062273:
				return 7339;
			case 827354769:
				return 337;
			case 827657438:
				return 10001;
			case 827857784:
				return 5577;
			case 828399928:
				return 1265;
			case 828422771:
				return 5973;
			case 828661392:
				return 10258;
			case 828828635:
				return 10153;
			case 828945366:
				return 355;
			case 829062722:
				return 10206;
			case 829415368:
				return 2955;
			case 829798514:
				return 10648;
			case 830311279:
				return 11707;
			case 830601173:
				return 12241;
			case 830704921:
				return 14312;
			case 830712509:
				return 14955;
			case 830904844:
				return 6378;
			case 831133945:
				return 10294;
			case 831224990:
				return 2523;
			case 831368133:
				return 13431;
			case 831542679:
				return 11296;
			case 831729096:
				return 13156;
			case 831859211:
				return 14551;
			case 833078310:
				return 4102;
			case 833639467:
				return 3397;
			case 833698475:
				return 11164;
			case 833914902:
				return 4589;
			case 833968436:
				return 6426;
			case 834493370:
				return 9997;
			case 834603563:
				return 11364;
			case 834968469:
				return 10341;
			case 835487837:
				return 236;
			case 835603908:
				return 12305;
			case 835864269:
				return 13435;
			case 836126162:
				return 6302;
			case 836257295:
				return 3477;
			case 836525272:
				return 14990;
			case 837023579:
				return 5378;
			case 838192869:
				return 568;
			case 838208120:
				return 8282;
			case 838267205:
				return 12707;
			case 838594058:
				return 11465;
			case 839346986:
				return 11211;
			case 839466798:
				return 5108;
			case 839615077:
				return 14000;
			case 840028633:
				return 4343;
			case 840273127:
				return 9387;
			case 840749457:
				return 9291;
			case 840935990:
				return 14018;
			case 840988983:
				return 13937;
			case 841173150:
				return 230;
			case 841253810:
				return 1806;
			case 841271229:
				return 8170;
			case 841372803:
				return 1383;
			case 841570434:
				return 9345;
			case 841716415:
				return 14836;
			case 841730705:
				return 15521;
			case 841737983:
				return 9093;
			case 842494920:
				return 11172;
			case 842533216:
				return 1183;
			case 842616298:
				return 16429;
			case 842632060:
				return 76;
			case 843299161:
				return 10617;
			case 843505437:
				return 7178;
			case 843867833:
				return 4919;
			case 844370484:
				return 15254;
			case 844632215:
				return 4356;
			case 844742255:
				return 10638;
			case 844995958:
				return 2488;
			case 845189127:
				return 7060;
			case 845353900:
				return 2691;
			case 845742793:
				return 8380;
			case 845833685:
				return 9065;
			case 846229755:
				return 16362;
			case 846279042:
				return 5094;
			case 846372629:
				return 6324;
			case 846659001:
				return 14756;
			case 846659622:
				return 6473;
			case 846995324:
				return 495;
			case 847387086:
				return 5955;
			case 847448713:
				return 16166;
			case 847831326:
				return 3584;
			case 848012614:
				return 14995;
			case 848182071:
				return 9467;
			case 848346963:
				return 7153;
			case 848408380:
				return 2270;
			case 848749089:
				return 1261;
			case 849631640:
				return 2972;
			case 849634862:
				return 935;
			case 849661236:
				return 8485;
			case 849871129:
				return 2677;
			case 850233799:
				return 9963;
			case 850298864:
				return 5339;
			case 850385494:
				return 13520;
			case 850607054:
				return 1231;
			case 850701875:
				return 13586;
			case 851147657:
				return 3940;
			case 851226997:
				return 9066;
			case 851401507:
				return 3663;
			case 851655662:
				return 4872;
			case 852072701:
				return 15060;
			case 852389070:
				return 11344;
			case 852583468:
				return 10817;
			case 852615066:
				return 7821;
			case 852673901:
				return 15842;
			case 852712463:
				return 9709;
			case 853701415:
				return 3811;
			case 853839925:
				return 10073;
			case 854125373:
				return 12370;
			case 854201658:
				return 587;
			case 854371657:
				return 4499;
			case 854384020:
				return 13120;
			case 854422193:
				return 15748;
			case 854503507:
				return 13946;
			case 854868500:
				return 10236;
			case 855233678:
				return 8226;
			case 855344262:
				return 12663;
			case 855455185:
				return 13670;
			case 855591916:
				return 7079;
			case 855765086:
				return 6723;
			case 856294396:
				return 11350;
			case 856436971:
				return 8364;
			case 857443476:
				return 9936;
			case 857540517:
				return 7629;
			case 857824280:
				return 4944;
			case 858118906:
				return 8658;
			case 858198745:
				return 6815;
			case 858540986:
				return 3158;
			case 858610727:
				return 8491;
			case 859105085:
				return 10154;
			case 859122672:
				return 5487;
			case 859250222:
				return 5498;
			case 859510191:
				return 5259;
			case 859517709:
				return 12056;
			case 859821090:
				return 10934;
			case 859868763:
				return 8461;
			case 860141049:
				return 9298;
			case 860256216:
				return 3191;
			case 860475969:
				return 13430;
			case 861090014:
				return 6356;
			case 861210780:
				return 5609;
			case 861227228:
				return 12576;
			case 861427242:
				return 1449;
			case 861505058:
				return 14631;
			case 861762516:
				return 10849;
			case 861776066:
				return 9819;
			case 861896523:
				return 15310;
			case 863346285:
				return 13676;
			case 863396682:
				return 6627;
			case 863406390:
				return 14231;
			case 863576107:
				return 13326;
			case 863810110:
				return 13054;
			case 863873892:
				return 7370;
			case 864001494:
				return 4077;
			case 864085785:
				return 9629;
			case 865379156:
				return 2167;
			case 865658170:
				return 5249;
			case 866316971:
				return 9771;
			case 866384653:
				return 3545;
			case 866576955:
				return 12195;
			case 866723984:
				return 10237;
			case 867074004:
				return 12472;
			case 867377210:
				return 3372;
			case 867853685:
				return 4867;
			case 867966538:
				return 15686;
			case 868940090:
				return 6828;
			case 868990081:
				return 7832;
			case 869084670:
				return 4905;
			case 869303233:
				return 5589;
			case 869582110:
				return 9354;
			case 870067954:
				return 15938;
			case 870142226:
				return 4875;
			case 870462320:
				return 5176;
			case 871040168:
				return 7398;
			case 871233640:
				return 8737;
			case 871271813:
				return 16210;
			case 871395476:
				return 8776;
			case 871654963:
				return 11815;
			case 872193678:
				return 3724;
			case 872440704:
				return 2307;
			case 872849172:
				return 9113;
			case 873149288:
				return 4195;
			case 873285762:
				return 13822;
			case 873360635:
				return 15640;
			case 873663780:
				return 12019;
			case 873758548:
				return 244;
			case 873940208:
				return 9565;
			case 874264908:
				return 6726;
			case 874679861:
				return 15717;
			case 875542741:
				return 11278;
			case 876316748:
				return 10514;
			case 876571109:
				return 2318;
			case 876633013:
				return 2215;
			case 876732623:
				return 5620;
			case 876745292:
				return 5886;
			case 876875150:
				return 6513;
			case 876991560:
				return 6112;
			case 877243702:
				return 9861;
			case 877411573:
				return 2569;
			case 877666613:
				return 9779;
			case 877701191:
				return 396;
			case 877923943:
				return 9332;
			case 878006995:
				return 5217;
			case 878211682:
				return 12960;
			case 878371174:
				return 2373;
			case 878431010:
				return 8134;
			case 878602981:
				return 524;
			case 878655417:
				return 9733;
			case 879131179:
				return 256;
			case 879177025:
				return 6842;
			case 879303203:
				return 1286;
			case 879332164:
				return 4327;
			case 879421193:
				return 4897;
			case 879444478:
				return 1456;
			case 879616218:
				return 3128;
			case 879647581:
				return 11440;
			case 879704227:
				return 8986;
			case 879731186:
				return 13304;
			case 880351851:
				return 13982;
			case 880620137:
				return 6933;
			case 881216269:
				return 6082;
			case 881462760:
				return 11917;
			case 882430427:
				return 4150;
			case 882909226:
				return 8701;
			case 883569961:
				return 6367;
			case 883641025:
				return 5911;
			case 883926858:
				return 4679;
			case 884234602:
				return 4092;
			case 884314423:
				return 3695;
			case 884318989:
				return 8340;
			case 884832983:
				return 5892;
			case 884882255:
				return 7276;
			case 885213159:
				return 8821;
			case 886037240:
				return 420;
			case 886415666:
				return 8329;
			case 886468726:
				return 14100;
			case 886532685:
				return 2801;
			case 887066389:
				return 10418;
			case 887170860:
				return 5823;
			case 887500588:
				return 6206;
			case 887628302:
				return 9382;
			case 887832922:
				return 7022;
			case 888041459:
				return 13914;
			case 888054433:
				return 14960;
			case 888152471:
				return 15597;
			case 888381965:
				return 10072;
			case 888485596:
				return 11282;
			case 888504590:
				return 4496;
			case 888600723:
				return 11235;
			case 888681950:
				return 15039;
			case 888737253:
				return 8215;
			case 889826025:
				return 13744;
			case 889855416:
				return 3307;
			case 889891686:
				return 5455;
			case 890000845:
				return 412;
			case 890796089:
				return 11447;
			case 890959011:
				return 9856;
			case 891203321:
				return 2775;
			case 891496883:
				return 9054;
			case 891683008:
				return 11891;
			case 891692655:
				return 13502;
			case 891739652:
				return 11375;
			case 891955946:
				return 2156;
			case 891966805:
				return 16368;
			case 892072825:
				return 9806;
			case 892399704:
				return 6268;
			case 892419733:
				return 3510;
			case 892425564:
				return 16401;
			case 893513006:
				return 5418;
			case 893747190:
				return 13714;
			case 893852290:
				return 6877;
			case 893934022:
				return 4272;
			case 894074736:
				return 1661;
			case 894386066:
				return 2940;
			case 894832080:
				return 10127;
			case 895063452:
				return 4470;
			case 895125293:
				return 11963;
			case 895336333:
				return 10366;
			case 895606715:
				return 9693;
			case 896282045:
				return 408;
			case 896318060:
				return 6914;
			case 896363541:
				return 9318;
			case 896703492:
				return 3548;
			case 897037294:
				return 9696;
			case 898178981:
				return 3790;
			case 898194782:
				return 7439;
			case 898712696:
				return 4485;
			case 899133938:
				return 9608;
			case 899142050:
				return 8188;
			case 899509143:
				return 8241;
			case 899708667:
				return 6722;
			case 899736801:
				return 11526;
			case 900144280:
				return 14714;
			case 900238934:
				return 7536;
			case 900406679:
				return 12175;
			case 900553827:
				return 1403;
			case 900791104:
				return 7295;
			case 900952271:
				return 11130;
			case 901124796:
				return 14369;
			case 901323580:
				return 2836;
			case 901716520:
				return 6982;
			case 902097984:
				return 9454;
			case 902497625:
				return 1596;
			case 902541545:
				return 13351;
			case 903119664:
				return 6938;
			case 903916726:
				return 11005;
			case 903947743:
				return 10444;
			case 904358119:
				return 3575;
			case 904812503:
				return 4710;
			case 905166827:
				return 9717;
			case 905193177:
				return 8265;
			case 905514609:
				return 11022;
			case 905693362:
				return 12003;
			case 905954603:
				return 9184;
			case 906000539:
				return 11988;
			case 906078678:
				return 7147;
			case 906188044:
				return 13821;
			case 906870255:
				return 1726;
			case 906930757:
				return 1590;
			case 907019741:
				return 15287;
			case 907062362:
				return 1063;
			case 907476445:
				return 16369;
			case 907489184:
				return 13954;
			case 907521710:
				return 2008;
			case 907602085:
				return 7444;
			case 907735768:
				return 750;
			case 908241896:
				return 4830;
			case 908282755:
				return 15630;
			case 908527399:
				return 4273;
			case 909383546:
				return 4009;
			case 909409297:
				return 1748;
			case 909763406:
				return 1228;
			case 909848014:
				return 2689;
			case 910590032:
				return 2850;
			case 910591458:
				return 1860;
			case 910957870:
				return 11158;
			case 911094514:
				return 1475;
			case 911265180:
				return 11012;
			case 911344227:
				return 4003;
			case 911852499:
				return 10421;
			case 912161773:
				return 13174;
			case 912364060:
				return 7953;
			case 912417220:
				return 11097;
			case 913112519:
				return 2716;
			case 913114332:
				return 9755;
			case 913201313:
				return 8113;
			case 913207577:
				return 5207;
			case 913439212:
				return 8250;
			case 913568525:
				return 10125;
			case 913656510:
				return 15615;
			case 913734840:
				return 11470;
			case 913807789:
				return 1976;
			case 913841068:
				return 15300;
			case 914263404:
				return 15927;
			case 914463538:
				return 2383;
			case 914589143:
				return 478;
			case 915068957:
				return 4906;
			case 915198113:
				return 12492;
			case 915588021:
				return 1306;
			case 916038226:
				return 8548;
			case 916352689:
				return 5893;
			case 916399325:
				return 3415;
			case 916543211:
				return 11600;
			case 916939516:
				return 13622;
			case 917402668:
				return 14682;
			case 917489389:
				return 9045;
			case 918149424:
				return 4525;
			case 918348535:
				return 6652;
			case 918566578:
				return 11857;
			case 918586840:
				return 15485;
			case 918658043:
				return 10146;
			case 918757151:
				return 11180;
			case 918835244:
				return 11810;
			case 918898309:
				return 15915;
			case 918972034:
				return 14954;
			case 919202307:
				return 6515;
			case 919318549:
				return 4365;
			case 919396598:
				return 7305;
			case 919548248:
				return 13585;
			case 920225825:
				return 7298;
			case 920471419:
				return 4654;
			case 920513351:
				return 6514;
			case 920571692:
				return 9758;
			case 920592628:
				return 10473;
			case 920621682:
				return 8136;
			case 920663016:
				return 3845;
			case 920851291:
				return 14928;
			case 921431287:
				return 2917;
			case 922264741:
				return 4656;
			case 922275707:
				return 1513;
			case 922438787:
				return 722;
			case 922665559:
				return 5212;
			case 922780669:
				return 1947;
			case 922928878:
				return 1570;
			case 923182004:
				return 2314;
			case 923286440:
				return 8166;
			case 923331471:
				return 15790;
			case 924325206:
				return 12276;
			case 924360705:
				return 12402;
			case 924363002:
				return 13619;
			case 924520210:
				return 534;
			case 924834968:
				return 8796;
			case 925218628:
				return 11198;
			case 925345947:
				return 10196;
			case 925415783:
				return 4237;
			case 925416402:
				return 1112;
			case 925687109:
				return 3901;
			case 925785412:
				return 8585;
			case 925943613:
				return 2169;
			case 926016182:
				return 8098;
			case 926062585:
				return 1761;
			case 926101783:
				return 9084;
			case 926287497:
				return 857;
			case 926575272:
				return 6077;
			case 926616681:
				return 11714;
			case 926848534:
				return 987;
			case 927286931:
				return 9171;
			case 927915134:
				return 4251;
			case 927991752:
				return 3113;
			case 928043429:
				return 6224;
			case 928049129:
				return 1321;
			case 928344684:
				return 14803;
			case 928897915:
				return 6961;
			case 928938082:
				return 2452;
			case 928996016:
				return 14320;
			case 929083757:
				return 3328;
			case 929356785:
				return 778;
			case 929909257:
				return 11655;
			case 930348307:
				return 3193;
			case 930365499:
				return 10075;
			case 930622970:
				return 13075;
			case 930791600:
				return 5963;
			case 930980139:
				return 7880;
			case 931064759:
				return 9303;
			case 931226601:
				return 3850;
			case 931414642:
				return 1991;
			case 932478155:
				return 7742;
			case 932636686:
				return 5814;
			case 932665613:
				return 10091;
			case 932830966:
				return 4650;
			case 932848288:
				return 6557;
			case 933020416:
				return 10534;
			case 933114112:
				return 5867;
			case 933892170:
				return 15483;
			case 933971225:
				return 13597;
			case 934656298:
				return 2150;
			case 934706428:
				return 2991;
			case 935087212:
				return 16427;
			case 935472586:
				return 97;
			case 935825472:
				return 12197;
			case 936212613:
				return 10784;
			case 936263970:
				return 8589;
			case 936588344:
				return 7939;
			case 936743075:
				return 8726;
			case 936793211:
				return 6535;
			case 937024151:
				return 13233;
			case 937077130:
				return 14843;
			case 937173376:
				return 15715;
			case 937246805:
				return 14616;
			case 937367983:
				return 15390;
			case 937440785:
				return 6713;
			case 937508733:
				return 5350;
			case 937811036:
				return 9123;
			case 938554299:
				return 14123;
			case 938576719:
				return 1939;
			case 938736242:
				return 52;
			case 939128696:
				return 8946;
			case 940264534:
				return 13256;
			case 940287542:
				return 9834;
			case 940539485:
				return 2207;
			case 940938491:
				return 15745;
			case 941053774:
				return 12280;
			case 941637321:
				return 3289;
			case 942176598:
				return 5032;
			case 942704009:
				return 9297;
			case 942705605:
				return 11494;
			case 942796586:
				return 5435;
			case 942979783:
				return 673;
			case 943494726:
				return 817;
			case 944102630:
				return 12069;
			case 944234058:
				return 2640;
			case 944531097:
				return 6520;
			case 944661538:
				return 14451;
			case 944709406:
				return 5394;
			case 944831715:
				return 6765;
			case 944948591:
				return 3835;
			case 946114543:
				return 6732;
			case 946241451:
				return 139;
			case 946889695:
				return 9881;
			case 947438380:
				return 1649;
			case 947689151:
				return 15967;
			case 947786394:
				return 15972;
			case 948028330:
				return 16190;
			case 948933843:
				return 9824;
			case 949226698:
				return 6042;
			case 949382980:
				return 9086;
			case 949441562:
				return 6152;
			case 949568990:
				return 15654;
			case 949642477:
				return 15350;
			case 949688659:
				return 3673;
			case 949797982:
				return 8999;
			case 950046668:
				return 11029;
			case 950526326:
				return 1384;
			case 950793364:
				return 72;
			case 950884098:
				return 13706;
			case 951254788:
				return 11947;
			case 951474187:
				return 4888;
			case 952153269:
				return 1023;
			case 952260613:
				return 868;
			case 952289490:
				return 11156;
			case 952582462:
				return 12178;
			case 952908048:
				return 8235;
			case 953460228:
				return 5682;
			case 953534805:
				return 5120;
			case 953535591:
				return 4191;
			case 953821693:
				return 13574;
			case 953896601:
				return 16015;
			case 954963420:
				return 2980;
			case 955044476:
				return 5336;
			case 955059723:
				return 9442;
			case 955143241:
				return 14385;
			case 955339638:
				return 13240;
			case 955563346:
				return 839;
			case 955590616:
				return 6336;
			case 955802159:
				return 12611;
			case 955954142:
				return 10516;
			case 956247264:
				return 6964;
			case 956377671:
				return 501;
			case 956492232:
				return 14120;
			case 956694364:
				return 2340;
			case 956878665:
				return 742;
			case 957384904:
				return 7738;
			case 957394174:
				return 904;
			case 957419914:
				return 9573;
			case 957606396:
				return 4849;
			case 957704525:
				return 3334;
			case 958101616:
				return 15864;
			case 958305531:
				return 5584;
			case 958431297:
				return 6212;
			case 958474834:
				return 8558;
			case 958665900:
				return 6856;
			case 958890285:
				return 7492;
			case 959584293:
				return 13681;
			case 959905628:
				return 13728;
			case 959966203:
				return 929;
			case 960478986:
				return 6022;
			case 960530301:
				return 15152;
			case 960599934:
				return 3377;
			case 960851950:
				return 15171;
			case 961410572:
				return 797;
			case 961876323:
				return 12921;
			case 962088794:
				return 14437;
			case 962251301:
				return 10080;
			case 962581809:
				return 372;
			case 963025744:
				return 10369;
			case 963378841:
				return 1433;
			case 963622016:
				return 1856;
			case 963662602:
				return 1190;
			case 963698626:
				return 4578;
			case 964212894:
				return 8722;
			case 964732302:
				return 10115;
			case 964905443:
				return 16097;
			case 964931263:
				return 5622;
			case 964958182:
				return 4532;
			case 965137967:
				return 171;
			case 965390753:
				return 10256;
			case 965516916:
				return 10432;
			case 965720124:
				return 7931;
			case 966315007:
				return 5321;
			case 966787428:
				return 4038;
			case 966898662:
				return 4235;
			case 966958492:
				return 14940;
			case 967301211:
				return 13825;
			case 967471958:
				return 5444;
			case 967545988:
				return 15817;
			case 967723860:
				return 10302;
			case 967942731:
				return 12077;
			case 968018790:
				return 8917;
			case 968145844:
				return 10681;
			case 968234071:
				return 3178;
			case 968685858:
				return 7055;
			case 968687890:
				return 8176;
			case 968780511:
				return 9571;
			case 968858764:
				return 13161;
			case 969427509:
				return 16002;
			case 969819085:
				return 6269;
			case 969850375:
				return 9109;
			case 970473918:
				return 1700;
			case 971728901:
				return 9677;
			case 971740005:
				return 5608;
			case 971809190:
				return 8049;
			case 971948594:
				return 3816;
			case 972090375:
				return 1788;
			case 972123551:
				return 8885;
			case 972135864:
				return 14944;
			case 972482031:
				return 13967;
			case 972484750:
				return 5700;
			case 972511286:
				return 10156;
			case 972521045:
				return 2490;
			case 972872886:
				return 4603;
			case 972892334:
				return 15103;
			case 973016635:
				return 11138;
			case 973042785:
				return 5083;
			case 973046652:
				return 15851;
			case 973400550:
				return 240;
			case 974713862:
				return 14153;
			case 974848436:
				return 6667;
			case 975100514:
				return 2386;
			case 975747759:
				return 1041;
			case 975914773:
				return 9468;
			case 976231092:
				return 3465;
			case 976345333:
				return 15407;
			case 976600504:
				return 8035;
			case 976921676:
				return 15676;
			case 976924758:
				return 4238;
			case 977130056:
				return 9124;
			case 977499850:
				return 2412;
			case 977804853:
				return 389;
			case 977834008:
				return 14912;
			case 977957621:
				return 5081;
			case 978704223:
				return 7920;
			case 978918995:
				return 3561;
			case 979030280:
				return 14309;
			case 979093383:
				return 14648;
			case 979353188:
				return 11941;
			case 979645508:
				return 15296;
			case 980307335:
				return 2625;
			case 980500305:
				return 12103;
			case 980789985:
				return 5417;
			case 981445146:
				return 6155;
			case 981796886:
				return 2562;
			case 981985826:
				return 8019;
			case 982270184:
				return 13221;
			case 982759158:
				return 7834;
			case 982969088:
				return 13902;
			case 983116154:
				return 15778;
			case 983550520:
				return 16232;
			case 983726710:
				return 13128;
			case 983835860:
				return 3085;
			case 983998482:
				return 13566;
			case 984047829:
				return 7204;
			case 984264800:
				return 15208;
			case 984271877:
				return 699;
			case 984853511:
				return 4879;
			case 985010876:
				return 3002;
			case 985101275:
				return 13730;
			case 985724853:
				return 4361;
			case 985880003:
				return 14228;
			case 986032708:
				return 15754;
			case 986262974:
				return 11252;
			case 986312695:
				return 3029;
			case 986744376:
				return 1368;
			case 987139947:
				return 4255;
			case 987299190:
				return 13458;
			case 987342453:
				return 10721;
			case 987924370:
				return 5720;
			case 988393750:
				return 7155;
			case 988489345:
				return 6569;
			case 988533890:
				return 1211;
			case 988637426:
				return 8793;
			case 988668512:
				return 15140;
			case 989172200:
				return 15286;
			case 989339567:
				return 8423;
			case 989398512:
				return 13505;
			case 989423319:
				return 8892;
			case 989533385:
				return 6648;
			case 989669666:
				return 14743;
			case 989821877:
				return 9591;
			case 990091302:
				return 10227;
			case 990159072:
				return 8837;
			case 990179346:
				return 2608;
			case 990323913:
				return 10040;
			case 990873180:
				return 12534;
			case 991706866:
				return 13237;
			case 991729767:
				return 13280;
			case 991973339:
				return 6394;
			case 992259466:
				return 2947;
			case 992524055:
				return 13017;
			case 992748516:
				return 6305;
			case 992776141:
				return 7631;
			case 993083342:
				return 14547;
			case 993577366:
				return 15052;
			case 994069177:
				return 13462;
			case 994493568:
				return 15433;
			case 994607097:
				return 1642;
			case 994641207:
				return 11237;
			case 994935373:
				return 5107;
			case 995368513:
				return 6196;
			case 995908867:
				return 5182;
			case 996090676:
				return 2066;
			case 996203811:
				return 6629;
			case 997172685:
				return 4595;
			case 997685952:
				return 14866;
			case 997760878:
				return 2650;
			case 997972179:
				return 15384;
			case 998469921:
				return 12967;
			case 998556117:
				return 13798;
			case 998604860:
				return 16241;
			case 998759471:
				return 5635;
			case 998798224:
				return 5440;
			case 998892309:
				return 89;
			case 999587413:
				return 1849;
			case 999602922:
				return 8000;
			case 999891838:
				return 16318;
			case 1000244951:
				return 10942;
			case 1000455179:
				return 6347;
			case 1000705175:
				return 13063;
			case 1000922281:
				return 2049;
			case 1001313133:
				return 12573;
			case 1001333106:
				return 10927;
			case 1001363196:
				return 1643;
			case 1001559014:
				return 9016;
			case 1001914640:
				return 9138;
			case 1001939397:
				return 3636;
			case 1004269980:
				return 6825;
			case 1004621497:
				return 2301;
			case 1004950903:
				return 6991;
			case 1005363261:
				return 1876;
			case 1005611234:
				return 4283;
			case 1005816319:
				return 1728;
			case 1006076574:
				return 15049;
			case 1006277677:
				return 10816;
			case 1006468445:
				return 15133;
			case 1006871725:
				return 11224;
			case 1007042506:
				return 7258;
			case 1007043925:
				return 2260;
			case 1007362981:
				return 5221;
			case 1007418994:
				return 14735;
			case 1007485139:
				return 642;
			case 1007570567:
				return 14692;
			case 1007914969:
				return 5693;
			case 1008295415:
				return 3598;
			case 1008528096:
				return 16115;
			default:
				break;
		}
		if (iParam1 >= 1)
		{
		}
		return -1;
	}
	if (iParam0 <= 1277791880)
	{
		switch (iParam0)
		{
			case 1008962624:
				return 1330;
			case 1009078587:
				return 3005;
			case 1009452159:
				return 4010;
			case 1010038654:
				return 2479;
			case 1010320580:
				return 15002;
			case 1010765128:
				return 10599;
			case 1011008084:
				return 6223;
			case 1011032058:
				return 11010;
			case 1011129531:
				return 3751;
			case 1011231711:
				return 8800;
			case 1011342847:
				return 13374;
			case 1011414920:
				return 13428;
			case 1011621489:
				return 735;
			case 1011627104:
				return 6706;
			case 1011834235:
				return 12001;
			case 1012299202:
				return 6128;
			case 1012735231:
				return 5995;
			case 1012860537:
				return 375;
			case 1013551107:
				return 4784;
			case 1013650909:
				return 3740;
			case 1014400629:
				return 3305;
			case 1014636801:
				return 7506;
			case 1014887214:
				return 12473;
			case 1014988944:
				return 12143;
			case 1015218671:
				return 5315;
			case 1015895641:
				return 8284;
			case 1016284169:
				return 7169;
			case 1016623270:
				return 14491;
			case 1016785096:
				return 889;
			case 1017000466:
				return 16287;
			case 1017014513:
				return 505;
			case 1017104287:
				return 4715;
			case 1018016807:
				return 12966;
			case 1018595420:
				return 11414;
			case 1018603920:
				return 1795;
			case 1018778959:
				return 2227;
			case 1018977143:
				return 8688;
			case 1019496374:
				return 11100;
			case 1019569266:
				return 10766;
			case 1019609336:
				return 431;
			case 1019886952:
				return 13709;
			case 1020041649:
				return 15100;
			case 1020274882:
				return 8422;
			case 1020358197:
				return 383;
			case 1020487684:
				return 5772;
			case 1020821911:
				return 12243;
			case 1020945117:
				return 13575;
			case 1021578772:
				return 11241;
			case 1021736093:
				return 10505;
			case 1022043656:
				return 12846;
			case 1022043853:
				return 14172;
			case 1022056778:
				return 3059;
			case 1022365451:
				return 14860;
			case 1022372438:
				return 6125;
			case 1022437308:
				return 1214;
			case 1022541504:
				return 10339;
			case 1022753969:
				return 5985;
			case 1023229711:
				return 10912;
			case 1023552765:
				return 9091;
			case 1023886062:
				return 8740;
			case 1024087298:
				return 2356;
			case 1024646216:
				return 3129;
			case 1024949469:
				return 13901;
			case 1025046695:
				return 6748;
			case 1025921510:
				return 14089;
			case 1026015877:
				return 14971;
			case 1026417620:
				return 5938;
			case 1028112040:
				return 12799;
			case 1028219667:
				return 13110;
			case 1028471573:
				return 5372;
			case 1029171779:
				return 8088;
			case 1029188873:
				return 10667;
			case 1029304196:
				return 1799;
			case 1029309300:
				return 3434;
			case 1029329299:
				return 9877;
			case 1029339151:
				return 14696;
			case 1029463307:
				return 939;
			case 1029488813:
				return 442;
			case 1029550795:
				return 12743;
			case 1029723363:
				return 15569;
			case 1030317456:
				return 10706;
			case 1030464549:
				return 13070;
			case 1030582321:
				return 6566;
			case 1031562971:
				return 354;
			case 1031967129:
				return 7511;
			case 1032437553:
				return 15554;
			case 1032489089:
				return 15471;
			case 1032755175:
				return 12104;
			case 1032755567:
				return 12631;
			case 1032949268:
				return 228;
			case 1033137726:
				return 4829;
			case 1033514064:
				return 13750;
			case 1033660954:
				return 9978;
			case 1033874054:
				return 6570;
			case 1034011057:
				return 7092;
			case 1034420266:
				return 15695;
			case 1034466723:
				return 13507;
			case 1034533226:
				return 3603;
			case 1034640941:
				return 13166;
			case 1034791179:
				return 1253;
			case 1034842009:
				return 4847;
			case 1034886037:
				return 401;
			case 1035036648:
				return 10637;
			case 1035402824:
				return 7802;
			case 1035495500:
				return 6880;
			case 1035510041:
				return 16209;
			case 1035740979:
				return 8670;
			case 1036806917:
				return 11039;
			case 1037163753:
				return 8478;
			case 1037834545:
				return 6290;
			case 1038525765:
				return 15281;
			case 1039119061:
				return 6335;
			case 1039248621:
				return 93;
			case 1039280705:
				return 9516;
			case 1039303622:
				return 14062;
			case 1039503043:
				return 969;
			case 1039555362:
				return 3142;
			case 1039815225:
				return 4513;
			case 1039951507:
				return 16346;
			case 1040749742:
				return 14245;
			case 1041107270:
				return 13210;
			case 1041398497:
				return 13466;
			case 1041461976:
				return 6910;
			case 1041478907:
				return 7899;
			case 1042363397:
				return 2162;
			case 1042837553:
				return 8686;
			case 1042920443:
				return 5402;
			case 1042970380:
				return 7823;
			case 1043125513:
				return 7234;
			case 1043230583:
				return 1961;
			case 1043305935:
				return 12055;
			case 1043358469:
				return 1119;
			case 1044460959:
				return 9530;
			case 1044606377:
				return 12820;
			case 1044845632:
				return 16120;
			case 1045059103:
				return 2626;
			case 1045261891:
				return 311;
			case 1045370044:
				return 7263;
			case 1045394246:
				return 2970;
			case 1045432644:
				return 14846;
			case 1046022891:
				return 4319;
			case 1046033271:
				return 12182;
			case 1046545546:
				return 12089;
			case 1046942919:
				return 379;
			case 1048086667:
				return 13422;
			case 1048795905:
				return 11836;
			case 1048804699:
				return 15353;
			case 1048964673:
				return 14707;
			case 1048989324:
				return 11228;
			case 1048989885:
				return 5460;
			case 1049053521:
				return 9445;
			case 1049761535:
				return 5175;
			case 1049799005:
				return 15808;
			case 1049886767:
				return 2944;
			case 1050043779:
				return 4411;
			case 1050474967:
				return 1738;
			case 1051030326:
				return 2925;
			case 1051032345:
				return 14032;
			case 1051047356:
				return 15154;
			case 1051290148:
				return 9848;
			case 1051517694:
				return 14329;
			case 1052258653:
				return 15614;
			case 1052339554:
				return 8319;
			case 1052843793:
				return 5482;
			case 1052921048:
				return 7130;
			case 1052976054:
				return 6516;
			case 1053179219:
				return 326;
			case 1053410492:
				return 15995;
			case 1053450319:
				return 8838;
			case 1053488221:
				return 3030;
			case 1053576916:
				return 2138;
			case 1054196995:
				return 6530;
			case 1054704925:
				return 10725;
			case 1054824898:
				return 1587;
			case 1054845027:
				return 7048;
			case 1054870047:
				return 2501;
			case 1055452589:
				return 13734;
			case 1055791420:
				return 8931;
			case 1055964575:
				return 9437;
			case 1056144698:
				return 4314;
			case 1056351194:
				return 7578;
			case 1056441411:
				return 1768;
			case 1057018128:
				return 3376;
			case 1057245557:
				return 3181;
			case 1057474610:
				return 6690;
			case 1057523711:
				return 11804;
			case 1057555344:
				return 5625;
			case 1057570823:
				return 15317;
			case 1057855405:
				return 1398;
			case 1057932105:
				return 16238;
			case 1058703817:
				return 6480;
			case 1058740811:
				return 10851;
			case 1059247002:
				return 745;
			case 1059366577:
				return 1755;
			case 1059375389:
				return 10870;
			case 1059747091:
				return 6278;
			case 1059972971:
				return 9864;
			case 1060118751:
				return 11021;
			case 1060211856:
				return 1001;
			case 1060341582:
				return 2214;
			case 1060876881:
				return 1158;
			case 1061500952:
				return 13795;
			case 1061623069:
				return 1167;
			case 1061658559:
				return 13295;
			case 1061841454:
				return 14052;
			case 1061930599:
				return 15737;
			case 1062268486:
				return 7209;
			case 1063637181:
				return 13534;
			case 1063877511:
				return 9999;
			case 1064199526:
				return 8464;
			case 1064370395:
				return 1556;
			case 1064565260:
				return 4508;
			case 1064769829:
				return 2698;
			case 1065191791:
				return 11450;
			case 1065352131:
				return 9615;
			case 1065728769:
				return 41;
			case 1065978554:
				return 9479;
			case 1066028917:
				return 16029;
			case 1066034872:
				return 14698;
			case 1066431417:
				return 1266;
			case 1066627194:
				return 9853;
			case 1066755499:
				return 867;
			case 1066908157:
				return 2576;
			case 1066915947:
				return 15660;
			case 1067113916:
				return 13801;
			case 1067902278:
				return 5196;
			case 1068085544:
				return 11845;
			case 1068143180:
				return 13330;
			case 1068528425:
				return 584;
			case 1069203632:
				return 3779;
			case 1069538232:
				return 12658;
			case 1070917324:
				return 10540;
			case 1071161229:
				return 11818;
			case 1071795929:
				return 973;
			case 1071912493:
				return 7529;
			case 1072019803:
				return 14703;
			case 1072065546:
				return 11034;
			case 1072182776:
				return 1084;
			case 1072378128:
				return 14252;
			case 1072523559:
				return 5069;
			case 1072575506:
				return 16251;
			case 1072718785:
				return 9179;
			case 1072875054:
				return 877;
			case 1073255732:
				return 12093;
			case 1073360155:
				return 5861;
			case 1073382955:
				return 11906;
			case 1073452882:
				return 9607;
			case 1073508112:
				return 12314;
			case 1073832036:
				return 10600;
			case 1074073875:
				return 13717;
			case 1074419957:
				return 1677;
			case 1074477367:
				return 14704;
			case 1074558046:
				return 1477;
			case 1074672809:
				return 16245;
			case 1074915171:
				return 4736;
			case 1075568919:
				return 7871;
			case 1075605185:
				return 15601;
			case 1076045342:
				return 11141;
			case 1076622686:
				return 5953;
			case 1076696182:
				return 8825;
			case 1076866533:
				return 11223;
			case 1076940373:
				return 4194;
			case 1077391782:
				return 1460;
			case 1077479146:
				return 9267;
			case 1077522493:
				return 3329;
			case 1077669576:
				return 12259;
			case 1077697796:
				return 4352;
			case 1077924102:
				return 7320;
			case 1077976463:
				return 12015;
			case 1078029523:
				return 12470;
			case 1078296253:
				return 12323;
			case 1078422804:
				return 5970;
			case 1078462295:
				return 14262;
			case 1078632265:
				return 4252;
			case 1078716719:
				return 6716;
			case 1079017093:
				return 10286;
			case 1079105691:
				return 5983;
			case 1079409498:
				return 1864;
			case 1079491822:
				return 14837;
			case 1079665333:
				return 6079;
			case 1079686283:
				return 12379;
			case 1080426902:
				return 9216;
			case 1080531306:
				return 10994;
			case 1080895636:
				return 6328;
			case 1081139471:
				return 11658;
			case 1081228448:
				return 8387;
			case 1081626861:
				return 2630;
			case 1081693486:
				return 12333;
			case 1082454485:
				return 7290;
			case 1082486926:
				return 9227;
			case 1082617741:
				return 3635;
			case 1082630066:
				return 10422;
			case 1084064611:
				return 4928;
			case 1084584299:
				return 4249;
			case 1084628103:
				return 14254;
			case 1085378666:
				return 1185;
			case 1085457901:
				return 1824;
			case 1085521038:
				return 6831;
			case 1085717489:
				return 497;
			case 1085960253:
				return 3812;
			case 1085964792:
				return 4121;
			case 1086105297:
				return 2704;
			case 1086196969:
				return 1803;
			case 1086354818:
				return 15616;
			case 1086659483:
				return 16049;
			case 1087029479:
				return 14545;
			case 1087552700:
				return 14539;
			case 1088223893:
				return 5100;
			case 1088428104:
				return 14534;
			case 1088762151:
				return 3524;
			case 1088783667:
				return 15396;
			case 1089195187:
				return 9064;
			case 1089735395:
				return 10562;
			case 1089932377:
				return 3757;
			case 1090498470:
				return 8933;
			case 1090784710:
				return 12656;
			case 1090855182:
				return 12754;
			case 1091014263:
				return 10874;
			case 1091295030:
				return 3070;
			case 1091404479:
				return 15493;
			case 1091474802:
				return 46;
			case 1091658698:
				return 5476;
			case 1091721757:
				return 15761;
			case 1092425252:
				return 13945;
			case 1092466526:
				return 51;
			case 1092511289:
				return 5875;
			case 1092520725:
				return 2083;
			case 1092698497:
				return 9028;
			case 1092725297:
				return 12388;
			case 1092771681:
				return 8616;
			case 1092835907:
				return 15759;
			case 1092921608:
				return 15295;
			case 1093139643:
				return 1886;
			case 1093170527:
				return 16277;
			case 1093246325:
				return 5736;
			case 1093739537:
				return 5920;
			case 1094554391:
				return 8309;
			case 1094799016:
				return 6972;
			case 1095117488:
				return 14586;
			case 1095457520:
				return 10757;
			case 1095937531:
				return 16334;
			case 1096190075:
				return 3454;
			case 1096203676:
				return 8576;
			case 1096564642:
				return 2550;
			case 1097066335:
				return 13697;
			case 1097257967:
				return 15434;
			case 1097607254:
				return 12368;
			case 1097831181:
				return 3446;
			case 1097891184:
				return 7179;
			case 1097906849:
				return 5499;
			case 1097950533:
				return 10101;
			case 1098055417:
				return 5234;
			case 1098115085:
				return 654;
			case 1098641034:
				return 3789;
			case 1099054052:
				return 12200;
			case 1099084820:
				return 8515;
			case 1099151662:
				return 11940;
			case 1099465025:
				return 836;
			case 1099845840:
				return 3968;
			case 1099906030:
				return 12290;
			case 1099986227:
				return 14858;
			case 1100484303:
				return 3684;
			case 1100541702:
				return 8106;
			case 1100593741:
				return 8751;
			case 1101050871:
				return 15216;
			case 1101400672:
				return 10152;
			case 1101411794:
				return 9137;
			case 1101420858:
				return 9169;
			case 1101842364:
				return 16110;
			case 1101939240:
				return 4689;
			case 1102337133:
				return 353;
			case 1103345310:
				return 13972;
			case 1103378949:
				return 2116;
			case 1104204753:
				return 2128;
			case 1104481730:
				return 4929;
			case 1104566530:
				return 14656;
			case 1104697660:
				return 14774;
			case 1104754493:
				return 4081;
			case 1104955063:
				return 88;
			case 1105255678:
				return 5446;
			case 1105598689:
				return 6987;
			case 1105604660:
				return 3105;
			case 1105962950:
				return 10969;
			case 1106175204:
				return 11027;
			case 1106423653:
				return 3013;
			case 1107088736:
				return 14791;
			case 1109522757:
				return 11035;
			case 1109801110:
				return 1553;
			case 1110150222:
				return 3475;
			case 1110293922:
				return 5479;
			case 1110710183:
				return 14533;
			case 1110781448:
				return 16223;
			case 1110821688:
				return 6226;
			case 1111003126:
				return 2448;
			case 1111334746:
				return 11762;
			case 1111362533:
				return 4083;
			case 1112299501:
				return 8997;
			case 1112480746:
				return 11709;
			case 1112538153:
				return 10481;
			case 1112571710:
				return 16202;
			case 1113649970:
				return 5076;
			case 1113994185:
				return 6894;
			case 1114018082:
				return 12983;
			case 1114021160:
				return 14072;
			case 1114163679:
				return 7091;
			case 1114184799:
				return 1641;
			case 1114264633:
				return 1388;
			case 1114327742:
				return 1179;
			case 1114634661:
				return 8744;
			case 1115256551:
				return 13358;
			case 1115288449:
				return 5419;
			case 1115303244:
				return 14470;
			case 1115683292:
				return 3674;
			case 1116428009:
				return 7275;
			case 1117009592:
				return 10403;
			case 1117146335:
				return 1472;
			case 1117235414:
				return 10804;
			case 1117738317:
				return 11799;
			case 1117917059:
				return 5585;
			case 1118659955:
				return 10117;
			case 1119391749:
				return 2635;
			case 1119590743:
				return 7229;
			case 1119807231:
				return 6800;
			case 1119829283:
				return 5594;
			case 1119956893:
				return 6598;
			case 1119964042:
				return 15974;
			case 1120417603:
				return 8856;
			case 1120686544:
				return 12910;
			case 1121466671:
				return 10172;
			case 1121558278:
				return 12913;
			case 1121623686:
				return 7068;
			case 1121798079:
				return 16310;
			case 1122074220:
				return 9707;
			case 1122130376:
				return 788;
			case 1122282474:
				return 10824;
			case 1123281134:
				return 12683;
			case 1123298495:
				return 16266;
			case 1123894704:
				return 16436;
			case 1123897255:
				return 7926;
			case 1123978395:
				return 2369;
			case 1124384604:
				return 16094;
			case 1124557452:
				return 2961;
			case 1124595829:
				return 6114;
			case 1124938328:
				return 12844;
			case 1124957191:
				return 14128;
			case 1125144996:
				return 6317;
			case 1125316962:
				return 1546;
			case 1126824571:
				return 1493;
			case 1127218773:
				return 10553;
			case 1127543921:
				return 13820;
			case 1127589605:
				return 14938;
			case 1127789756:
				return 9266;
			case 1127818789:
				return 12064;
			case 1128005445:
				return 9720;
			case 1128051272:
				return 12760;
			case 1128549911:
				return 3017;
			case 1129439721:
				return 14093;
			case 1130086915:
				return 14195;
			case 1130141063:
				return 3910;
			case 1131319157:
				return 10262;
			case 1131324045:
				return 8145;
			case 1131330924:
				return 16028;
			case 1131331077:
				return 8454;
			case 1131375713:
				return 12745;
			case 1131524209:
				return 7108;
			case 1131532296:
				return 3015;
			case 1131695399:
				return 4450;
			case 1131991595:
				return 8882;
			case 1132161511:
				return 8938;
			case 1132486830:
				return 10363;
			case 1133155075:
				return 6714;
			case 1133308966:
				return 11749;
			case 1133319172:
				return 3410;
			case 1133635958:
				return 12862;
			case 1133837220:
				return 14715;
			case 1134520721:
				return 4825;
			case 1134781981:
				return 8198;
			case 1134972004:
				return 4502;
			case 1135469849:
				return 2077;
			case 1136459726:
				return 2866;
			case 1136582530:
				return 10022;
			case 1136760211:
				return 9810;
			case 1136797977:
				return 10651;
			case 1137688840:
				return 10023;
			case 1137713077:
				return 4563;
			case 1137812134:
				return 8182;
			case 1138068340:
				return 13269;
			case 1138266206:
				return 11062;
			case 1138310154:
				return 4791;
			case 1138397110:
				return 8428;
			case 1138408114:
				return 11954;
			case 1138427579:
				return 14627;
			case 1138859004:
				return 16397;
			case 1139480367:
				return 11173;
			case 1139858530:
				return 14642;
			case 1140173435:
				return 12167;
			case 1140377787:
				return 7563;
			case 1140441864:
				return 11177;
			case 1140910249:
				return 2443;
			case 1141233817:
				return 10305;
			case 1141518777:
				return 391;
			case 1141626180:
				return 15981;
			case 1141637634:
				return 11110;
			case 1142470111:
				return 16178;
			case 1143047250:
				return 14313;
			case 1143187053:
				return 9965;
			case 1143979484:
				return 15131;
			case 1144150556:
				return 12252;
			case 1144273089:
				return 6446;
			case 1144770056:
				return 13747;
			case 1145697750:
				return 13463;
			case 1145892784:
				return 7613;
			case 1146208245:
				return 966;
			case 1146330525:
				return 13931;
			case 1146364280:
				return 483;
			case 1146484484:
				return 8797;
			case 1146800097:
				return 13653;
			case 1146914213:
				return 630;
			case 1147225164:
				return 10357;
			case 1147429965:
				return 8995;
			case 1148480827:
				return 7619;
			case 1148641228:
				return 664;
			case 1148808695:
				return 7703;
			case 1148820438:
				return 2384;
			case 1148847544:
				return 10672;
			case 1149115298:
				return 6068;
			case 1149349599:
				return 15209;
			case 1149395132:
				return 3566;
			case 1149781183:
				return 7654;
			case 1150192714:
				return 1559;
			case 1150563017:
				return 3562;
			case 1150886685:
				return 12035;
			case 1150940727:
				return 15930;
			case 1150997493:
				return 12731;
			case 1151238933:
				return 4133;
			case 1151865967:
				return 3516;
			case 1152011634:
				return 15551;
			case 1152089151:
				return 6263;
			case 1152298298:
				return 2070;
			case 1152389454:
				return 7288;
			case 1152431981:
				return 9288;
			case 1153217480:
				return 14924;
			case 1153467394:
				return 32;
			case 1154313282:
				return 301;
			case 1154933795:
				return 4483;
			case 1155035585:
				return 4373;
			case 1155584865:
				return 8947;
			case 1155902324:
				return 3691;
			case 1156030561:
				return 14131;
			case 1156540976:
				return 8632;
			case 1156568686:
				return 15305;
			case 1157289175:
				return 7154;
			case 1157781396:
				return 3264;
			case 1158665300:
				return 488;
			case 1158881102:
				return 11457;
			case 1159171519:
				return 15602;
			case 1159275431:
				return 8444;
			case 1159306620:
				return 3866;
			case 1159684956:
				return 4484;
			case 1159815932:
				return 9756;
			case 1159859573:
				return 9613;
			case 1159869720:
				return 1457;
			case 1159881680:
				return 10952;
			case 1160269589:
				return 628;
			case 1160964739:
				return 10643;
			case 1161515178:
				return 4124;
			case 1161535814:
				return 8905;
			case 1161611987:
				return 9528;
			case 1161833594:
				return 15351;
			case 1161900999:
				return 10958;
			case 1162162580:
				return 15863;
			case 1162464416:
				return 15195;
			case 1162468676:
				return 9865;
			case 1162791768:
				return 9192;
			case 1162946557:
				return 115;
			case 1163568069:
				return 11215;
			case 1163686775:
				return 5599;
			case 1163970008:
				return 8753;
			case 1164739838:
				return 8480;
			case 1165097924:
				return 2211;
			case 1165118632:
				return 5866;
			case 1165718913:
				return 6388;
			case 1165934108:
				return 3679;
			case 1166050429:
				return 1144;
			case 1166312355:
				return 14029;
			case 1166707831:
				return 2720;
			case 1167440096:
				return 1542;
			case 1167448161:
				return 13492;
			case 1167462574:
				return 16082;
			case 1167761205:
				return 3355;
			case 1167924255:
				return 85;
			case 1168888620:
				return 1015;
			case 1169072980:
				return 2812;
			case 1169277545:
				return 16051;
			case 1169502595:
				return 860;
			case 1169513037:
				return 7137;
			case 1169778176:
				return 14921;
			case 1170043675:
				return 13966;
			case 1170207075:
				return 10242;
			case 1170245472:
				return 10461;
			case 1170674247:
				return 6542;
			case 1170760461:
				return 2697;
			case 1170861898:
				return 296;
			case 1170901955:
				return 6115;
			case 1171009112:
				return 12836;
			case 1171257823:
				return 9368;
			case 1171988914:
				return 1949;
			case 1172039311:
				return 13973;
			case 1172058742:
				return 4113;
			case 1172094279:
				return 14387;
			case 1173329229:
				return 3459;
			case 1173442729:
				return 11729;
			case 1173445779:
				return 9555;
			case 1173749221:
				return 862;
			case 1173794465:
				return 3333;
			case 1174060710:
				return 8972;
			case 1174196510:
				return 11951;
			case 1174781578:
				return 3549;
			case 1175210230:
				return 7949;
			case 1175313653:
				return 9743;
			case 1175332438:
				return 2546;
			case 1175363507:
				return 13939;
			case 1175648996:
				return 3400;
			case 1175863601:
				return 8787;
			case 1176432303:
				return 374;
			case 1176943507:
				return 13680;
			case 1176979326:
				return 10777;
			case 1177701041:
				return 1284;
			case 1178039658:
				return 5508;
			case 1178172514:
				return 1966;
			case 1178236123:
				return 4109;
			case 1178501756:
				return 5204;
			case 1178537049:
				return 10284;
			case 1178863808:
				return 14011;
			case 1178984469:
				return 3897;
			case 1179067382:
				return 4921;
			case 1179123422:
				return 5045;
			case 1179546963:
				return 871;
			case 1180245127:
				return 13150;
			case 1180302106:
				return 12054;
			case 1180790789:
				return 10790;
			case 1181203503:
				return 736;
			case 1181760408:
				return 6874;
			case 1181877421:
				return 13753;
			case 1182008782:
				return 16361;
			case 1182400975:
				return 1498;
			case 1182603032:
				return 10985;
			case 1182695118:
				return 9430;
			case 1182766754:
				return 1719;
			case 1183049098:
				return 7023;
			case 1183564405:
				return 8687;
			case 1183933239:
				return 6922;
			case 1184025001:
				return 12514;
			case 1184093122:
				return 10462;
			case 1184098851:
				return 8569;
			case 1184327615:
				return 2465;
			case 1184341219:
				return 13774;
			case 1184351509:
				return 2828;
			case 1184460778:
				return 13886;
			case 1184597506:
				return 7233;
			case 1184671364:
				return 7264;
			case 1184802417:
				return 6899;
			case 1185000530:
				return 4720;
			case 1185443229:
				return 5051;
			case 1185581978:
				return 7901;
			case 1185627556:
				return 13478;
			case 1186037675:
				return 10887;
			case 1186209217:
				return 9346;
			case 1186324787:
				return 4403;
			case 1186618979:
				return 7864;
			case 1186778098:
				return 1479;
			case 1186813856:
				return 13596;
			case 1186910594:
				return 5763;
			case 1187237405:
				return 2158;
			case 1187596987:
				return 10401;
			case 1187754228:
				return 2817;
			case 1187929247:
				return 5575;
			case 1187982516:
				return 4299;
			case 1188013075:
				return 11892;
			case 1188079480:
				return 7739;
			case 1188124488:
				return 3909;
			case 1188177184:
				return 13629;
			case 1189707879:
				return 10370;
			case 1189886733:
				return 8866;
			case 1189919405:
				return 11670;
			case 1190244674:
				return 8798;
			case 1190598402:
				return 2794;
			case 1190805891:
				return 8430;
			case 1190865994:
				return 10611;
			case 1190990160:
				return 15626;
			case 1191179921:
				return 1043;
			case 1191182113:
				return 5558;
			case 1191619567:
				return 1779;
			case 1191982365:
				return 4084;
			case 1192217961:
				return 619;
			case 1192670087:
				return 12899;
			case 1192705421:
				return 11362;
			case 1192745176:
				return 14456;
			case 1192783856:
				return 7237;
			case 1192806219:
				return 12974;
			case 1195409633:
				return 16264;
			case 1195604412:
				return 11684;
			case 1195975416:
				return 10586;
			case 1196485840:
				return 7608;
			case 1196639967:
				return 5261;
			case 1196644518:
				return 8459;
			case 1197103701:
				return 3443;
			case 1197152116:
				return 10584;
			case 1197559327:
				return 8868;
			case 1197672138:
				return 15431;
			case 1198398888:
				return 4550;
			case 1199043900:
				return 4528;
			case 1199093388:
				return 11353;
			case 1199417534:
				return 13089;
			case 1199445702:
				return 13766;
			case 1199636936:
				return 888;
			case 1199682287:
				return 10594;
			case 1199739891:
				return 3455;
			case 1200426653:
				return 5660;
			case 1200601581:
				return 9918;
			case 1200743173:
				return 4166;
			case 1200745163:
				return 13178;
			case 1200826059:
				return 2648;
			case 1200970801:
				return 5534;
			case 1201110029:
				return 13212;
			case 1201122763:
				return 5796;
			case 1201709444:
				return 2160;
			case 1201773445:
				return 13238;
			case 1201888489:
				return 9446;
			case 1201999180:
				return 13521;
			case 1202248062:
				return 10596;
			case 1202336727:
				return 207;
			case 1202659918:
				return 370;
			case 1202732232:
				return 13812;
			case 1203034426:
				return 1582;
			case 1203222291:
				return 14761;
			case 1203459072:
				return 2010;
			case 1203608207:
				return 2350;
			case 1204304572:
				return 7462;
			case 1204663032:
				return 5236;
			case 1204730577:
				return 10928;
			case 1204826562:
				return 11390;
			case 1205176339:
				return 3354;
			case 1205623035:
				return 2482;
			case 1205695274:
				return 7067;
			case 1205982615:
				return 14518;
			case 1206116866:
				return 3195;
			case 1206184006:
				return 13339;
			case 1206460647:
				return 2601;
			case 1206549469:
				return 7158;
			case 1206575657:
				return 6252;
			case 1206719712:
				return 7814;
			case 1207272102:
				return 3883;
			case 1207750643:
				return 13273;
			case 1208278290:
				return 13272;
			case 1208388826:
				return 1491;
			case 1208421205:
				return 7771;
			case 1209122190:
				return 6597;
			case 1209303509:
				return 313;
			case 1209328010:
				return 5103;
			case 1209410543:
				return 2849;
			case 1209424348:
				return 11758;
			case 1210046102:
				return 2423;
			case 1210527888:
				return 10426;
			case 1210783447:
				return 12407;
			case 1210798841:
				return 8026;
			case 1211068025:
				return 15611;
			case 1211125858:
				return 13340;
			case 1211177099:
				return 3246;
			case 1211422371:
				return 559;
			case 1211525499:
				return 3135;
			case 1211777952:
				return 7583;
			case 1212444826:
				return 758;
			case 1212675424:
				return 835;
			case 1212819215:
				return 4148;
			case 1212974634:
				return 595;
			case 1213395665:
				return 15619;
			case 1213582330:
				return 11499;
			case 1213594056:
				return 11322;
			case 1213633259:
				return 1435;
			case 1213778370:
				return 10455;
			case 1214448284:
				return 12657;
			case 1214481372:
				return 9218;
			case 1214709557:
				return 3900;
			case 1215309610:
				return 1996;
			case 1215708205:
				return 12617;
			case 1216219942:
				return 16004;
			case 1217169605:
				return 3556;
			case 1217791925:
				return 8789;
			case 1217828621:
				return 11793;
			case 1218390912:
				return 3692;
			case 1218578772:
				return 5159;
			case 1219206708:
				return 2446;
			case 1219622670:
				return 10771;
			case 1219623803:
				return 3914;
			case 1219659922:
				return 7486;
			case 1219784948:
				return 4142;
			case 1220027181:
				return 2516;
			case 1220097602:
				return 15742;
			case 1220596578:
				return 3906;
			case 1220939063:
				return 5741;
			case 1221010586:
				return 2561;
			case 1221671759:
				return 8690;
			case 1222084718:
				return 5570;
			case 1222115189:
				return 4307;
			case 1222311821:
				return 3613;
			case 1222614000:
				return 7717;
			case 1222753524:
				return 7549;
			case 1222760364:
				return 13371;
			case 1223585809:
				return 15909;
			case 1223834952:
				return 15612;
			case 1223890436:
				return 11286;
			case 1224073002:
				return 12972;
			case 1224299316:
				return 14183;
			case 1224478763:
				return 4313;
			case 1224690941:
				return 6663;
			case 1225001016:
				return 6264;
			case 1225208808:
				return 15118;
			case 1225288801:
				return 1522;
			case 1225574343:
				return 12552;
			case 1225892775:
				return 574;
			case 1225980992:
				return 3395;
			case 1226012504:
				return 1078;
			case 1226303862:
				return 451;
			case 1226394729:
				return 12813;
			case 1226973342:
				return 10983;
			case 1227063249:
				return 6976;
			case 1227219422:
				return 6913;
			case 1227894203:
				return 15589;
			case 1228328707:
				return 13077;
			case 1228524514:
				return 13045;
			case 1228766682:
				return 7346;
			case 1229219138:
				return 5614;
			case 1229240930:
				return 5805;
			case 1229772226:
				return 2050;
			case 1229872702:
				return 10437;
			case 1229964955:
				return 15906;
			case 1230359523:
				return 14677;
			case 1230587433:
				return 12075;
			case 1230674153:
				return 5565;
			case 1230724566:
				return 5631;
			case 1230911989:
				return 991;
			case 1231309423:
				return 15278;
			case 1231350276:
				return 16460;
			case 1231660345:
				return 13877;
			case 1231676579:
				return 1385;
			case 1231808298:
				return 9079;
			case 1231958591:
				return 1638;
			case 1232665629:
				return 3466;
			case 1232934908:
				return 11302;
			case 1232962552:
				return 3895;
			case 1233150997:
				return 8988;
			case 1234523120:
				return 13016;
			case 1234550949:
				return 15224;
			case 1234625698:
				return 4533;
			case 1234704129:
				return 10559;
			case 1234865999:
				return 4370;
			case 1235243830:
				return 7971;
			case 1235267738:
				return 10477;
			case 1235289221:
				return 5272;
			case 1235354580:
				return 8448;
			case 1235953148:
				return 6067;
			case 1236335989:
				return 3913;
			case 1236956486:
				return 190;
			case 1237405687:
				return 7636;
			case 1238179348:
				return 1679;
			case 1239214655:
				return 4345;
			case 1239423681:
				return 2903;
			case 1240633829:
				return 4923;
			case 1240886692:
				return 1589;
			case 1240962201:
				return 4430;
			case 1240974077:
				return 3734;
			case 1241013679:
				return 2148;
			case 1241177521:
				return 2507;
			case 1241469929:
				return 2654;
			case 1241846794:
				return 1875;
			case 1242162713:
				return 523;
			case 1242731839:
				return 5437;
			case 1243461373:
				return 1666;
			case 1244359045:
				return 6641;
			case 1244705032:
				return 11007;
			case 1244936124:
				return 12079;
			case 1245102704:
				return 9900;
			case 1245359261:
				return 297;
			case 1245530084:
				return 15062;
			case 1245539170:
				return 3311;
			case 1245668623:
				return 1965;
			case 1246122565:
				return 15439;
			case 1246482038:
				return 4893;
			case 1246532592:
				return 12581;
			case 1246696332:
				return 7573;
			case 1246765953:
				return 5731;
			case 1246822101:
				return 10315;
			case 1247157825:
				return 2871;
			case 1247455043:
				return 12998;
			case 1247781490:
				return 2222;
			case 1247842525:
				return 8344;
			case 1247906381:
				return 14104;
			case 1248149265:
				return 6488;
			case 1248468042:
				return 13912;
			case 1248528309:
				return 16067;
			case 1249051525:
				return 7292;
			case 1249112435:
				return 12776;
			case 1249866483:
				return 8919;
			case 1249959539:
				return 9598;
			case 1250095615:
				return 11098;
			case 1250297936:
				return 10159;
			case 1250437531:
				return 14328;
			case 1250925869:
				return 4546;
			case 1250953915:
				return 831;
			case 1251463005:
				return 9800;
			case 1251681144:
				return 13372;
			case 1252145812:
				return 6191;
			case 1252251375:
				return 8047;
			case 1252469866:
				return 11486;
			case 1252522242:
				return 14079;
			case 1252821935:
				return 536;
			case 1252941730:
				return 15910;
			case 1253299569:
				return 15059;
			case 1253404419:
				return 3494;
			case 1253611076:
				return 5545;
			case 1253796557:
				return 6751;
			case 1254414564:
				return 10043;
			case 1254874444:
				return 1326;
			case 1255160900:
				return 3902;
			case 1255274752:
				return 10281;
			case 1255849914:
				return 14853;
			case 1256688103:
				return 12452;
			case 1256934531:
				return 2013;
			case 1257705601:
				return 3647;
			case 1257777359:
				return 13399;
			case 1258422741:
				return 12810;
			case 1258700039:
				return 4061;
			case 1259083935:
				return 6755;
			case 1259154917:
				return 4814;
			case 1259650536:
				return 11163;
			case 1259811679:
				return 12358;
			case 1260016523:
				return 14138;
			case 1260053512:
				return 12231;
			case 1261398727:
				return 13042;
			case 1261434194:
				return 12399;
			case 1261815870:
				return 10350;
			case 1262071551:
				return 9650;
			case 1262169183:
				return 13030;
			case 1262469596:
				return 2595;
			case 1262542833:
				return 15412;
			case 1262630201:
				return 12923;
			case 1262717458:
				return 4828;
			case 1263065755:
				return 1940;
			case 1263448341:
				return 2032;
			case 1263985925:
				return 5238;
			case 1264455820:
				return 9503;
			case 1265016335:
				return 1895;
			case 1265175662:
				return 4318;
			case 1265552111:
				return 15151;
			case 1265955300:
				return 2225;
			case 1265966684:
				return 14733;
			case 1266159496:
				return 15010;
			case 1266200177:
				return 7539;
			case 1266398521:
				return 7399;
			case 1266419285:
				return 14098;
			case 1266592839:
				return 15266;
			case 1266602343:
				return 11546;
			case 1267641193:
				return 11239;
			case 1267768715:
				return 465;
			case 1267814678:
				return 12460;
			case 1268263061:
				return 11913;
			case 1268877262:
				return 12644;
			case 1269817837:
				return 11087;
			case 1270013306:
				return 13455;
			case 1270225937:
				return 13992;
			case 1270344049:
				return 10379;
			case 1270374363:
				return 16216;
			case 1270841555:
				return 15048;
			case 1271647689:
				return 5611;
			case 1271837421:
				return 7404;
			case 1272172755:
				return 8294;
			case 1272197403:
				return 1610;
			case 1272321815:
				return 10966;
			case 1273015116:
				return 12196;
			case 1273155135:
				return 138;
			case 1273174558:
				return 10187;
			case 1273359630:
				return 10871;
			case 1273393517:
				return 10061;
			case 1273918323:
				return 8668;
			case 1273992275:
				return 1436;
			case 1274105912:
				return 13509;
			case 1274759530:
				return 14220;
			case 1274804226:
				return 15182;
			case 1275284163:
				return 3525;
			case 1275437259:
				return 3435;
			case 1275770906:
				return 5110;
			case 1276024832:
				return 11031;
			case 1276183097:
				return 3916;
			case 1276279445:
				return 9353;
			case 1276534479:
				return 15115;
			case 1276753332:
				return 1523;
			case 1276886590:
				return 12066;
			case 1277241365:
				return 9994;
			case 1277791880:
				return 3806;
			default:
				break;
		}
		if (iParam1 >= 1)
		{
		}
		return -1;
	}
	if (iParam0 <= 1530009511)
	{
		switch (iParam0)
		{
			case 1278072777:
				return 5659;
			case 1278091598:
				return 3144;
			case 1278237260:
				return 5245;
			case 1278502587:
				return 8465;
			case 1278549866:
				return 6151;
			case 1278550695:
				return 6304;
			case 1278781206:
				return 11231;
			case 1279096100:
				return 6183;
			case 1279543482:
				return 15167;
			case 1279937684:
				return 11461;
			case 1279976916:
				return 12971;
			case 1280053851:
				return 9840;
			case 1280307678:
				return 9770;
			case 1280724808:
				return 6122;
			case 1280730398:
				return 7684;
			case 1281042957:
				return 8907;
			case 1281084193:
				return 12395;
			case 1281122482:
				return 15099;
			case 1281451937:
				return 8495;
			case 1281549838:
				return 2258;
			case 1281839204:
				return 14196;
			case 1281919024:
				return 2552;
			case 1282171014:
				return 14943;
			case 1282479644:
				return 11089;
			case 1282500471:
				return 5009;
			case 1283070888:
				return 11270;
			case 1283399627:
				return 10174;
			case 1283735186:
				return 8371;
			case 1283910275:
				return 4063;
			case 1284565609:
				return 2136;
			case 1284858017:
				return 12584;
			case 1285107124:
				return 8571;
			case 1285143094:
				return 1900;
			case 1285202207:
				return 1684;
			case 1285826702:
				return 9000;
			case 1285865592:
				return 8415;
			case 1285909371:
				return 11949;
			case 1286850878:
				return 15677;
			case 1286871718:
				return 16165;
			case 1286899977:
				return 6518;
			case 1287088534:
				return 7489;
			case 1287159687:
				return 8699;
			case 1287375348:
				return 3527;
			case 1287390502:
				return 8006;
			case 1287551665:
				return 9202;
			case 1287780262:
				return 6389;
			case 1287892740:
				return 5312;
			case 1288759240:
				return 2674;
			case 1288977644:
				return 716;
			case 1289262340:
				return 11388;
			case 1289399579:
				return 8443;
			case 1289665035:
				return 6735;
			case 1289914954:
				return 3718;
			case 1290116741:
				return 5439;
			case 1290655313:
				return 14353;
			case 1291410892:
				return 6939;
			case 1291986584:
				return 2996;
			case 1292046285:
				return 7963;
			case 1292210169:
				return 16360;
			case 1292279125:
				return 4927;
			case 1292400033:
				return 3092;
			case 1292448142:
				return 2598;
			case 1292702380:
				return 813;
			case 1292991928:
				return 5300;
			case 1293178623:
				return 12991;
			case 1293214855:
				return 674;
			case 1293788919:
				return 7210;
			case 1293957414:
				return 7335;
			case 1293966709:
				return 1332;
			case 1294051394:
				return 3847;
			case 1294193701:
				return 5303;
			case 1294255258:
				return 15144;
			case 1294500079:
				return 7473;
			case 1294779046:
				return 13477;
			case 1295161230:
				return 1714;
			case 1295311079:
				return 9567;
			case 1295431284:
				return 10333;
			case 1295583220:
				return 4637;
			case 1295740658:
				return 15014;
			case 1295833736:
				return 5210;
			case 1295981000:
				return 9455;
			case 1296013360:
				return 4455;
			case 1296409837:
				return 3145;
			case 1296674862:
				return 4752;
			case 1297056981:
				return 10178;
			case 1297267689:
				return 13584;
			case 1297369331:
				return 1707;
			case 1297601427:
				return 4197;
			case 1297830025:
				return 14454;
			case 1298185394:
				return 11262;
			case 1298592984:
				return 9466;
			case 1298612408:
				return 6936;
			case 1298732385:
				return 7175;
			case 1298737159:
				return 14039;
			case 1299319377:
				return 9147;
			case 1299535594:
				return 5945;
			case 1299657755:
				return 15882;
			case 1300101810:
				return 9579;
			case 1300184824:
				return 1263;
			case 1300215557:
				return 1754;
			case 1300924393:
				return 5581;
			case 1301301894:
				return 588;
			case 1301667603:
				return 7039;
			case 1301995372:
				return 16373;
			case 1302103268:
				return 598;
			case 1302560136:
				return 3667;
			case 1302582395:
				return 298;
			case 1302874895:
				return 6531;
			case 1303017959:
				return 4984;
			case 1303132566:
				return 11331;
			case 1303793787:
				return 12133;
			case 1303893984:
				return 1432;
			case 1304006097:
				return 10158;
			case 1304104843:
				return 9210;
			case 1304191963:
				return 382;
			case 1304237076:
				return 14097;
			case 1304311224:
				return 15148;
			case 1304478439:
				return 7797;
			case 1304508820:
				return 10981;
			case 1305554951:
				return 7625;
			case 1305597479:
				return 499;
			case 1306339464:
				return 3426;
			case 1307259779:
				return 1484;
			case 1307267863:
				return 10400;
			case 1307304177:
				return 3836;
			case 1307424187:
				return 5792;
			case 1307515557:
				return 7442;
			case 1307526395:
				return 14338;
			case 1307573680:
				return 12764;
			case 1307976003:
				return 15467;
			case 1308045790:
				return 11452;
			case 1308132920:
				return 14177;
			case 1308614867:
				return 12945;
			case 1308722738:
				return 14421;
			case 1310281542:
				return 2277;
			case 1310315873:
				return 12158;
			case 1310465416:
				return 12536;
			case 1311043242:
				return 14317;
			case 1311117312:
				return 1615;
			case 1311783028:
				return 4962;
			case 1312124224:
				return 7221;
			case 1312931791:
				return 1247;
			case 1313569502:
				return 1271;
			case 1313613062:
				return 13926;
			case 1313627499:
				return 7384;
			case 1313787093:
				return 12018;
			case 1313883008:
				return 15961;
			case 1314060893:
				return 5826;
			case 1314276628:
				return 1752;
			case 1314752500:
				return 2381;
			case 1315412017:
				return 466;
			case 1316034839:
				return 15340;
			case 1316605855:
				return 12525;
			case 1316658127:
				return 15452;
			case 1316976249:
				return 12601;
			case 1317169409:
				return 9942;
			case 1317709433:
				return 4648;
			case 1317779317:
				return 1194;
			case 1317957235:
				return 4417;
			case 1318008695:
				return 11314;
			case 1318788291:
				return 8042;
			case 1318995115:
				return 8252;
			case 1319497510:
				return 13971;
			case 1319719488:
				return 6493;
			case 1319837149:
				return 10796;
			case 1319922984:
				return 10099;
			case 1320410478:
				return 5096;
			case 1320786287:
				return 15031;
			case 1321069455:
				return 7164;
			case 1321355683:
				return 12092;
			case 1321475123:
				return 12531;
			case 1321843639:
				return 9736;
			case 1321916172:
				return 9178;
			case 1322119727:
				return 12082;
			case 1322489151:
				return 11816;
			case 1322718393:
				return 603;
			case 1322862606:
				return 8950;
			case 1322876246:
				return 5665;
			case 1322886795:
				return 2085;
			case 1322985415:
				return 16293;
			case 1323168280:
				return 3719;
			case 1323293507:
				return 6719;
			case 1323463020:
				return 7163;
			case 1323483246:
				return 9666;
			case 1323515426:
				return 4103;
			case 1323531819:
				return 6355;
			case 1323567596:
				return 5055;
			case 1324575728:
				return 13776;
			case 1324651155:
				return 11613;
			case 1325092864:
				return 11539;
			case 1325379971:
				return 12607;
			case 1325505887:
				return 12659;
			case 1325614139:
				return 13545;
			case 1326245298:
				return 15916;
			case 1326890954:
				return 348;
			case 1327088196:
				return 4076;
			case 1327279213:
				return 1204;
			case 1327427600:
				return 7278;
			case 1328085905:
				return 7956;
			case 1328281106:
				return 9586;
			case 1328442660:
				return 6231;
			case 1328475835:
				return 3858;
			case 1328558428:
				return 1993;
			case 1328567847:
				return 12330;
			case 1328901957:
				return 15424;
			case 1328906077:
				return 5768;
			case 1328974214:
				return 1988;
			case 1329266347:
				return 10539;
			case 1329576771:
				return 6944;
			case 1329675183:
				return 1365;
			case 1329917213:
				return 12316;
			case 1329967722:
				return 6416;
			case 1330086977:
				return 9340;
			case 1331198366:
				return 2358;
			case 1331640150:
				return 7540;
			case 1331762096:
				return 1062;
			case 1331829369:
				return 6547;
			case 1332068344:
				return 15818;
			case 1332516409:
				return 130;
			case 1332529986:
				return 14207;
			case 1332717796:
				return 13859;
			case 1333097896:
				return 1276;
			case 1333140999:
				return 3447;
			case 1334302264:
				return 9730;
			case 1334348844:
				return 652;
			case 1334428643:
				return 15747;
			case 1334889341:
				return 10929;
			case 1334963409:
				return 5979;
			case 1335097022:
				return 16130;
			case 1335099064:
				return 1344;
			case 1335130212:
				return 15661;
			case 1335397105:
				return 7463;
			case 1335661340:
				return 5477;
			case 1335715203:
				return 876;
			case 1336058330:
				return 1543;
			case 1336128411:
				return 11140;
			case 1336214488:
				return 1669;
			case 1336229167:
				return 9982;
			case 1336264458:
				return 8100;
			case 1336863290:
				return 15323;
			case 1337060188:
				return 4157;
			case 1337075694:
				return 8068;
			case 1337869136:
				return 9904;
			case 1338551108:
				return 4143;
			case 1338679131:
				return 691;
			case 1338739426:
				return 4901;
			case 1339873356:
				return 1916;
			case 1340487094:
				return 924;
			case 1340691497:
				return 5532;
			case 1340956912:
				return 4364;
			case 1341213594:
				return 13259;
			case 1341377157:
				return 9484;
			case 1341557485:
				return 4600;
			case 1341580066:
				return 7710;
			case 1341663971:
				return 11575;
			case 1341664117:
				return 2450;
			case 1341868544:
				return 7304;
			case 1341900636:
				return 16260;
			case 1342112940:
				return 15573;
			case 1342791301:
				return 8700;
			case 1343105706:
				return 2200;
			case 1343564320:
				return 16098;
			case 1343686692:
				return 12032;
			case 1344011125:
				return 14697;
			case 1344446592:
				return 6466;
			case 1344768961:
				return 9336;
			case 1344961076:
				return 4275;
			case 1346243865:
				return 7781;
			case 1346255432:
				return 767;
			case 1346417102:
				return 7556;
			case 1346436956:
				return 16060;
			case 1346668147:
				return 6949;
			case 1346688635:
				return 2682;
			case 1346748833:
				return 14155;
			case 1346847691:
				return 10360;
			case 1347320453:
				return 15081;
			case 1348462481:
				return 11006;
			case 1348687756:
				return 9712;
			case 1348701141:
				return 4575;
			case 1348814278:
				return 9941;
			case 1349028497:
				return 13741;
			case 1349465916:
				return 11293;
			case 1349661334:
				return 13621;
			case 1350020253:
				return 3457;
			case 1350185894:
				return 15680;
			case 1350239673:
				return 6405;
			case 1350399416:
				return 6729;
			case 1351073489:
				return 15166;
			case 1351230718:
				return 7806;
			case 1351304715:
				return 1465;
			case 1351633399:
				return 4360;
			case 1352036612:
				return 3520;
			case 1352177105:
				return 4998;
			case 1352374591:
				return 11112;
			case 1352959774:
				return 4416;
			case 1353013773:
				return 13603;
			case 1353154903:
				return 10731;
			case 1353428475:
				return 14847;
			case 1353765918:
				return 8973;
			case 1353814431:
				return 4317;
			case 1354404235:
				return 2946;
			case 1354491351:
				return 10977;
			case 1354620653:
				return 10877;
			case 1354682729:
				return 4019;
			case 1354842829:
				return 947;
			case 1355236564:
				return 6363;
			case 1355302008:
				return 2165;
			case 1355640227:
				return 1197;
			case 1356065047:
				return 6743;
			case 1356860375:
				return 5507;
			case 1356879062:
				return 11075;
			case 1357146921:
				return 6861;
			case 1357407266:
				return 10367;
			case 1357703358:
				return 1447;
			case 1358072981:
				return 3993;
			case 1358486816:
				return 13227;
			case 1358528108:
				return 7488;
			case 1358607102:
				return 13718;
			case 1359138063:
				return 3948;
			case 1359272243:
				return 1705;
			case 1359612179:
				return 1646;
			case 1359696620:
				return 11082;
			case 1359888129:
				return 2103;
			case 1360688400:
				return 9190;
			case 1360797073:
				return 5727;
			case 1361127922:
				return 16105;
			case 1362003490:
				return 3871;
			case 1362243929:
				return 15386;
			case 1362450780:
				return 10012;
			case 1362796301:
				return 462;
			case 1363757812:
				return 9007;
			case 1364078501:
				return 13594;
			case 1364242851:
				return 367;
			case 1364342107:
				return 9243;
			case 1364462939:
				return 16459;
			case 1364528141:
				return 8300;
			case 1364848303:
				return 325;
			case 1365112534:
				return 7863;
			case 1365343458:
				return 9191;
			case 1365448823:
				return 1274;
			case 1365524233:
				return 12087;
			case 1365553973:
				return 1298;
			case 1365775196:
				return 8420;
			case 1365795988:
				return 5865;
			case 1365857401:
				return 13305;
			case 1365942710:
				return 6969;
			case 1366135664:
				return 6685;
			case 1366354941:
				return 3730;
			case 1366492044:
				return 1410;
			case 1366837883:
				return 12312;
			case 1367452913:
				return 2765;
			case 1367740122:
				return 9300;
			case 1367784190:
				return 340;
			case 1367851675:
				return 15214;
			case 1367907571:
				return 12157;
			case 1368237872:
				return 980;
			case 1368644889:
				return 4625;
			case 1369167213:
				return 11077;
			case 1369209354:
				return 3972;
			case 1369238281:
				return 15738;
			case 1369278434:
				return 11306;
			case 1369445260:
				return 5370;
			case 1369514652:
				return 5041;
			case 1369762184:
				return 4451;
			case 1370171070:
				return 15395;
			case 1370362188:
				return 13274;
			case 1370373989:
				return 5111;
			case 1370939361:
				return 9823;
			case 1370943473:
				return 4751;
			case 1370968326:
				return 16181;
			case 1371874613:
				return 12579;
			case 1371947023:
				return 6620;
			case 1372065533:
				return 15265;
			case 1372376306:
				return 9846;
			case 1372453549:
				return 8292;
			case 1372722239:
				return 10500;
			case 1373121931:
				return 8388;
			case 1373194911:
				return 7505;
			case 1373471224:
				return 8942;
			case 1373577127:
				return 1604;
			case 1374863824:
				return 11727;
			case 1374955317:
				return 3167;
			case 1375255536:
				return 12556;
			case 1375320059:
				return 3110;
			case 1375846388:
				return 8029;
			case 1376100934:
				return 15104;
			case 1376182129:
				return 2821;
			case 1376394832:
				return 10685;
			case 1377011530:
				return 9163;
			case 1377685326:
				return 9838;
			case 1377774341:
				return 14261;
			case 1377840440:
				return 4930;
			case 1377890040:
				return 13636;
			case 1377894334:
				return 15933;
			case 1378468737:
				return 3484;
			case 1378588666:
				return 10992;
			case 1378936871:
				return 10761;
			case 1379202733:
				return 13565;
			case 1379221251:
				return 4564;
			case 1379237707:
				return 1039;
			case 1379450640:
				return 6243;
			case 1379597310:
				return 2355;
			case 1379783492:
				return 11768;
			case 1380031846:
				return 7083;
			case 1380049310:
				return 8712;
			case 1380081115:
				return 6682;
			case 1380116900:
				return 10635;
			case 1380910900:
				return 10150;
			case 1382164045:
				return 15033;
			case 1382365335:
				return 10066;
			case 1382690145:
				return 2456;
			case 1382878345:
				return 11803;
			case 1382944808:
				return 2028;
			case 1383143069:
				return 3863;
			case 1383645598:
				return 15893;
			case 1383754844:
				return 3268;
			case 1384060929:
				return 13234;
			case 1384285496:
				return 1335;
			case 1384382015:
				return 7076;
			case 1384407107:
				return 8335;
			case 1384615641:
				return 7498;
			case 1384646303:
				return 10385;
			case 1385136616:
				return 8022;
			case 1385330809:
				return 4749;
			case 1385399145:
				return 16102;
			case 1385614534:
				return 345;
			case 1385794696:
				return 8965;
			case 1386005610:
				return 10825;
			case 1386659846:
				return 13306;
			case 1386797442:
				return 13195;
			case 1386926456:
				return 4942;
			case 1387306446:
				return 593;
			case 1387500203:
				return 14266;
			case 1387609395:
				return 307;
			case 1387954345:
				return 9833;
			case 1388253953:
				return 5512;
			case 1388285436:
				return 9144;
			case 1390217426:
				return 8834;
			case 1390567643:
				return 8752;
			case 1391743178:
				return 564;
			case 1391768720:
				return 2498;
			case 1391892452:
				return 3190;
			case 1392136522:
				return 10176;
			case 1392387201:
				return 511;
			case 1392742201:
				return 14350;
			case 1393012743:
				return 4342;
			case 1393287729:
				return 15822;
			case 1394001261:
				return 5017;
			case 1394043181:
				return 86;
			case 1394301813:
				return 15991;
			case 1394347338:
				return 1777;
			case 1395136043:
				return 13735;
			case 1395266454:
				return 883;
			case 1395346866:
				return 9873;
			case 1395370441:
				return 11863;
			case 1395558391:
				return 4006;
			case 1395690358:
				return 15088;
			case 1395690429:
				return 3007;
			case 1395712114:
				return 3736;
			case 1395746053:
				return 5090;
			case 1396079242:
				return 14780;
			case 1396302955:
				return 16068;
			case 1396547442:
				return 5536;
			case 1396763023:
				return 11796;
			case 1396974580:
				return 1552;
			case 1397783372:
				return 15651;
			case 1398341294:
				return 15760;
			case 1398798217:
				return 7215;
			case 1399164840:
				return 8859;
			case 1399612658:
				return 4120;
			case 1399706895:
				return 5393;
			case 1400110816:
				return 15762;
			case 1400139842:
				return 10772;
			case 1400378398:
				return 8447;
			case 1401378994:
				return 9166;
			case 1401470064:
				return 4724;
			case 1401476230:
				return 11105;
			case 1402036237:
				return 14086;
			case 1402412648:
				return 5502;
			case 1402624275:
				return 14356;
			case 1402789292:
				return 5686;
			case 1402921550:
				return 14257;
			case 1403100842:
				return 15668;
			case 1403180748:
				return 3416;
			case 1403361276:
				return 10478;
			case 1403447077:
				return 10730;
			case 1403601695:
				return 2095;
			case 1403643284:
				return 10879;
			case 1403738454:
				return 8155;
			case 1403904070:
				return 9357;
			case 1404043335:
				return 9174;
			case 1404176457:
				return 11433;
			case 1404937476:
				return 10067;
			case 1404990231:
				return 22;
			case 1405034095:
				return 8115;
			case 1405893713:
				return 14248;
			case 1406032817:
				return 2778;
			case 1406158792:
				return 10955;
			case 1406468904:
				return 334;
			case 1406531794:
				return 6992;
			case 1406849102:
				return 1813;
			case 1407031519:
				return 15038;
			case 1407233505:
				return 4226;
			case 1407324434:
				return 11357;
			case 1407427711:
				return 8891;
			case 1407600554:
				return 5654;
			case 1407608723:
				return 324;
			case 1407686074:
				return 9520;
			case 1407740785:
				return 15276;
			case 1407988298:
				return 3391;
			case 1408051153:
				return 998;
			case 1408137441:
				return 351;
			case 1408389394:
				return 4217;
			case 1408547491:
				return 6482;
			case 1408621170:
				return 4057;
			case 1408678473:
				return 6810;
			case 1408826019:
				return 2841;
			case 1408854688:
				return 7342;
			case 1408869599:
				return 5192;
			case 1408938498:
				return 11998;
			case 1409619494:
				return 4718;
			case 1410342413:
				return 4316;
			case 1410422943:
				return 15024;
			case 1410479894:
				return 16205;
			case 1410687796:
				return 9531;
			case 1410743551:
				return 1772;
			case 1410787977:
				return 6008;
			case 1410892037:
				return 2073;
			case 1410968406:
				return 12116;
			case 1411208969:
				return 2867;
			case 1411256839:
				return 782;
			case 1411305584:
				return 12819;
			case 1411667986:
				return 932;
			case 1411849781:
				return 2926;
			case 1412039516:
				return 14880;
			case 1412163991:
				return 7667;
			case 1412320885:
				return 859;
			case 1412811769:
				return 10834;
			case 1413005851:
				return 1331;
			case 1413284115:
				return 1080;
			case 1413417056:
				return 15430;
			case 1413502773:
				return 4800;
			case 1413626773:
				return 8804;
			case 1414408875:
				return 5597;
			case 1415174635:
				return 5015;
			case 1415606248:
				return 12300;
			case 1415999476:
				return 15499;
			case 1416044641:
				return 5987;
			case 1416324601:
				return 14734;
			case 1416618882:
				return 3227;
			case 1417056240:
				return 3611;
			case 1417515962:
				return 14230;
			case 1418081997:
				return 16014;
			case 1418266698:
				return 1394;
			case 1418286999:
				return 4123;
			case 1418975844:
				return 8805;
			case 1419055257:
				return 15129;
			case 1419460564:
				return 11055;
			case 1419527561:
				return 756;
			case 1419669648:
				return 8531;
			case 1419909267:
				return 16271;
			case 1420224035:
				return 6503;
			case 1420603723:
				return 6417;
			case 1420609142:
				return 1339;
			case 1420640828:
				return 14321;
			case 1420937330:
				return 15787;
			case 1421787485:
				return 949;
			case 1423321126:
				return 5042;
			case 1423490702:
				return 14906;
			case 1423955666:
				return 9197;
			case 1424061875:
				return 7928;
			case 1424190903:
				return 12216;
			case 1424289124:
				return 5119;
			case 1424732225:
				return 463;
			case 1425690830:
				return 6733;
			case 1426577374:
				return 6288;
			case 1427615504:
				return 5280;
			case 1427939136:
				return 475;
			case 1428459675:
				return 12347;
			case 1428513334:
				return 13193;
			case 1429028742:
				return 11183;
			case 1429272924:
				return 15624;
			case 1429731999:
				return 2130;
			case 1430064789:
				return 4193;
			case 1430101557:
				return 7513;
			case 1430337283:
				return 1213;
			case 1430373910:
				return 9327;
			case 1430455000:
				return 3922;
			case 1430843881:
				return 15125;
			case 1431131773:
				return 10636;
			case 1431218155:
				return 1626;
			case 1431401048:
				return 7543;
			case 1432065580:
				return 9970;
			case 1432174202:
				return 10181;
			case 1433066052:
				return 15534;
			case 1433097698:
				return 8713;
			case 1433155231:
				return 14151;
			case 1433165496:
				return 2896;
			case 1433326914:
				return 10383;
			case 1433327023:
				return 13864;
			case 1433461990:
				return 12301;
			case 1433515678:
				return 11415;
			case 1433592563:
				return 12691;
			case 1433637054:
				return 4279;
			case 1433801465:
				return 13309;
			case 1433954014:
				return 721;
			case 1434067956:
				return 13516;
			case 1434209677:
				return 4270;
			case 1434620179:
				return 6687;
			case 1434915308:
				return 2653;
			case 1435759221:
				return 5395;
			case 1435769227:
				return 12758;
			case 1435863051:
				return 13860;
			case 1435873742:
				return 2223;
			case 1435939598:
				return 6792;
			case 1436275127:
				return 16335;
			case 1436374985:
				return 10644;
			case 1436424114:
				return 15003;
			case 1436489621:
				return 14787;
			case 1436730632:
				return 13090;
			case 1436759651:
				return 4221;
			case 1437966072:
				return 2476;
			case 1438037300:
				return 7074;
			case 1438071047:
				return 15599;
			case 1438352020:
				return 7041;
			case 1438676538:
				return 9704;
			case 1438934506:
				return 8832;
			case 1439158431:
				return 15147;
			case 1439396149:
				return 6941;
			case 1439523240:
				return 2098;
			case 1439587814:
				return 5757;
			case 1439805669:
				return 12164;
			case 1440205061:
				return 6289;
			case 1440329831:
				return 10431;
			case 1440970152:
				return 7369;
			case 1441281684:
				return 3306;
			case 1441508885:
				return 1434;
			case 1441944308:
				return 15727;
			case 1442183133:
				return 3488;
			case 1442243552:
				return 12137;
			case 1442933459:
				return 16063;
			case 1443174594:
				return 13737;
			case 1443406370:
				return 15444;
			case 1443436130:
				return 2744;
			case 1443543434:
				return 7610;
			case 1443749473:
				return 8408;
			case 1443802130:
				return 1614;
			case 1444794465:
				return 13064;
			case 1444856232:
				return 13713;
			case 1444859870:
				return 3073;
			case 1445016186:
				return 6844;
			case 1445163709:
				return 15457;
			case 1445228793:
				return 13262;
			case 1445750337:
				return 12768;
			case 1445787072:
				return 13059;
			case 1445994890:
				return 6410;
			case 1446364838:
				return 11939;
			case 1446931767:
				return 9193;
			case 1446935015:
				return 14993;
			case 1447684065:
				return 16363;
			case 1447776660:
				return 12020;
			case 1448220754:
				return 12270;
			case 1448353204:
				return 10283;
			case 1448387392:
				return 6968;
			case 1449053336:
				return 12904;
			case 1449089093:
				return 13468;
			case 1449129819:
				return 16273;
			case 1449632600:
				return 8788;
			case 1449717255:
				return 12224;
			case 1449731695:
				return 4478;
			case 1451433354:
				return 11632;
			case 1451873246:
				return 5503;
			case 1452039029:
				return 7149;
			case 1452097979:
				return 10841;
			case 1452353521:
				return 9092;
			case 1452557947:
				return 12911;
		}
	}