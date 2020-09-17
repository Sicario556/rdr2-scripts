void __EntryFunction__()
{
	network_set_script_is_safe_for_network_game();
	while (func_1(&uScriptParam_0))
	{
		func_2(&uLocal_16, &uScriptParam_0);
		wait(0);
	}
	func_3(&uLocal_16, &uScriptParam_0);
	terminate_this_thread();
}

bool func_1(var uParam0)
{
	if (func_4(0, 0))
	{
		return false;
	}
	if (func_5(uParam0))
	{
		return false;
	}
	if (func_6(uParam0))
	{
		return false;
	}
	return true;
}

void func_2(var uParam0, var uParam1)
{
	switch (func_7(uParam0))
	{
		case 0:
			if (func_8(uParam0, uParam1))
			{
				func_9(uParam0, uParam1, 1);
			}
			break;
		case 1:
			func_10(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3(var uParam0, var uParam1)
{
	func_11(uParam0);
	func_12(uParam0);
	func_13(uParam0);
	func_14(uParam0);
	func_15(uParam0, uParam1);
	func_16(uParam0);
	func_17(uParam0);
}

bool func_4(bool bParam0, bool bParam1)
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

bool func_5(var uParam0)
{
	iVar0 = func_18(uParam0->f_1, *uParam0);
	if (iVar0 == -1)
	{
		return true;
	}
	return func_19(uParam0->f_1, iVar0) >= (func_20(uParam0->f_1, iVar0) + 20f);
}

bool func_6(var uParam0)
{
	return func_22(func_21(uParam0->f_1), 0, 0);
}

int func_7(var uParam0)
{
	return uParam0->f_1;
}

bool func_8(var uParam0, var uParam1)
{
	switch (func_23(uParam0))
	{
		case 0:
			if (func_24(uParam0, uParam1))
			{
				func_25(uParam0, uParam1, 1);
			}
			break;
		case 1:
			if (func_26(uParam0, uParam1))
			{
				func_27(uParam0);
				func_25(uParam0, uParam1, 2);
			}
			break;
		case 2:
			if (func_28(uParam0, uParam1))
			{
				func_29(uParam0);
				func_25(uParam0, uParam1, 3);
			}
			break;
		case 3:
			if (func_30(uParam0, uParam1))
			{
				func_31(uParam0);
				func_25(uParam0, uParam1, 4);
			}
			break;
		case 4:
			func_32(uParam0, uParam1);
			func_25(uParam0, uParam1, 5);
			break;
		case 5:
			if (func_33(uParam0, uParam1))
			{
				func_25(uParam0, uParam1, 6);
			}
			break;
		case 6:
			if (func_34(uParam0, uParam1))
			{
				func_25(uParam0, uParam1, 7);
			}
			break;
		case 7:
			return true;
		default:
			break;
	}
	return false;
}

void func_9(var uParam0, var uParam1, int iParam2)
{
	uParam0->f_1 = iParam2;
}

void func_10(var uParam0, var uParam1)
{
	func_35(uParam0);
	func_36(uParam0, uParam1);
	func_37(uParam0, uParam1);
	func_38(uParam0, uParam1);
	func_39(uParam0, uParam1);
	func_40(uParam0, uParam1);
	func_41(uParam0, uParam1);
	func_42(uParam0, uParam1);
	func_43(uParam0, uParam1, -1, 0);
	func_44(uParam0, uParam1, -1, 0);
	func_45(uParam0, uParam1);
	func_46(uParam0);
	func_47(uParam0);
	func_48(uParam0);
}

void func_11(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (func_49(uParam0) - 1))
	{
		if (_text_database_has_loaded(func_51(func_50(uParam0, iVar0))))
		{
			_text_database_delete(func_51(func_50(uParam0, iVar0)));
		}
		iVar0++;
	}
}

void func_12(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (func_52(uParam0) - 1))
	{
		set_model_as_no_longer_needed(func_53(uParam0, iVar0));
		iVar0++;
	}
}

void func_13(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (func_54(uParam0) - 1))
	{
		if (func_55(uParam0, iVar0) == -128962623)
		{
		}
		else
		{
			set_model_as_no_longer_needed(func_56(uParam0, iVar0));
		}
		iVar0++;
	}
}

void func_14(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (func_52(uParam0) - 1))
	{
		iVar1 = func_57(uParam0, iVar0);
		if (does_entity_exist(iVar1))
		{
			delete_ped(&iVar1);
		}
		iVar0++;
	}
	_0x7d4e70a67a651c71(func_52(uParam0));
}

void func_15(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 <= (func_54(uParam0) - 1))
	{
		iVar2 = iVar0;
		iVar1 = func_58(uParam0, iVar2);
		switch (func_55(uParam0, iVar2))
		{
			case 1654067888:
				if (does_entity_exist(iVar1))
				{
					delete_object(&iVar1);
				}
				break;
			case 1279834816:
				if (does_entity_exist(iVar1))
				{
					if (func_59(uParam1, iVar2))
					{
						set_entity_coords(iVar1, func_60(uParam0, iVar2), true, false, true, true);
					}
					if (func_61(uParam1, iVar2))
					{
						set_entity_coords(iVar1, func_62(uParam0, iVar2), true, false, true, true);
					}
					iVar3 = func_63(uParam1, iVar2);
					func_64(iVar1, iVar3);
				}
				if (func_65(uParam0, iVar2) != 0)
				{
					_0xd2b9c78537ed5759(func_65(uParam0, iVar2));
					func_66(uParam0, uParam1, iVar2, 0);
				}
				break;
			case -128962623:
				if (does_entity_exist(iVar1))
				{
					if (func_59(uParam1, iVar2))
					{
						set_entity_coords(iVar1, func_60(uParam0, iVar2), true, false, true, true);
					}
					if (func_61(uParam1, iVar2))
					{
						set_entity_coords(iVar1, func_62(uParam0, iVar2), true, false, true, true);
					}
					iVar3 = func_63(uParam1, iVar2);
					func_64(iVar1, iVar3);
				}
				break;
			default:
				break;
		}
		iVar0++;
	}
}

void func_16(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (func_67(uParam0) - 1))
	{
		iVar1 = func_68(uParam0, iVar0);
		if (!func_69(iVar1))
		{
		}
		else if (!_is_imap_active(iVar1))
		{
		}
		else
		{
			func_70(iVar1);
		}
		iVar0++;
	}
}

void func_17(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		iVar1 = func_72(uParam0, func_71(iVar0, 1));
		if (!_does_volume_exist(iVar1))
		{
		}
		else
		{
			_delete_volume(iVar1);
		}
		iVar0++;
	}
}

var func_18(int iParam0, int iParam1)
{
	return &((*Global_1131045)[iParam0]->f_11.f_49[iParam1]);
}

float func_19(int iParam0, int iParam1)
{
	return (*Global_1131045)[iParam0]->f_11[iParam1]->f_1;
}

float func_20(int iParam0, int iParam1)
{
	return (*Global_1131045)[iParam0]->f_11[iParam1]->f_2;
}

struct<2> func_21(int iParam0)
{
	return (*Global_1131045)[iParam0]->f_7;
}

int func_22(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265377->f_124517.f_135 & 8 != 0)
	{
		Global_1071686->f_28351 = 1;
		return 1;
	}
	if (func_73(*Global_1051213) && !func_74(*Global_1051213, Param0))
	{
		Global_1071686->f_28351 = 2;
		return 1;
	}
	if (iParam2 != 0 && func_75(iParam2))
	{
		return 1;
	}
	if (iParam3 != 0 && func_76(iParam3, 255))
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
	if (func_77())
	{
		Global_1071686->f_28351 = 7;
		return 1;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_73(*Global_1051213))
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

int func_23(var uParam0)
{
	return *uParam0;
}

bool func_24(var uParam0, var uParam1)
{
	if (!func_78(&Var0))
	{
		return false;
	}
	if (!func_79(Var0, &(Var0.f_1), 15, 0, 0, 1))
	{
		return false;
	}
	if (!func_79(Var0, &(Var0.f_1), 16, func_80(*uParam1), 0, 1))
	{
		return false;
	}
	func_82(uParam0, uParam1, func_81(Var0));
	func_84(uParam0, uParam1, func_83(Var0));
	func_86(uParam0, uParam1, func_85(Var0));
	func_88(uParam0, uParam1, func_87(Var0));
	func_90(uParam0, uParam1, func_89(Var0));
	return true;
}

void func_25(var uParam0, var uParam1, int iParam2)
{
	*uParam0 = iParam2;
}

bool func_26(var uParam0, var uParam1)
{
	if (func_49(uParam0) <= 0)
	{
		return true;
	}
	if (!func_78(&Var0))
	{
		return false;
	}
	if (!func_79(Var0, &(Var0.f_1), 15, 0, 0, 1))
	{
		return false;
	}
	if (!func_79(Var0, &(Var0.f_1), 16, func_80(*uParam1), 0, 1))
	{
		return false;
	}
	if (!func_79(Var0, &(Var0.f_1), 45, 0, 0, 1))
	{
		return false;
	}
	uVar5 = Var0.f_1;
	func_91(uParam0, uParam1, 1);
	iVar6 = 0;
	while (iVar6 <= (func_49(uParam0) - 1))
	{
		if (iVar6 >= 1)
		{
			return true;
		}
		Var0.f_1 = uVar5;
		if (!func_79(Var0, &(Var0.f_1), 46, iVar6, 0, 1))
		{
		}
		else
		{
			func_93(uParam0, uParam1, iVar6, func_92(Var0, 1));
		}
		iVar6++;
	}
	return true;
}

void func_27(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (func_49(uParam0) - 1))
	{
		_text_database_request(func_51(func_50(uParam0, iVar0)));
		iVar0++;
	}
}

bool func_28(var uParam0, var uParam1)
{
	if (func_52(uParam0) <= 0)
	{
		return true;
	}
	if (!func_78(&Var0))
	{
		return false;
	}
	if (!func_79(Var0, &(Var0.f_1), 15, 0, 0, 1))
	{
		return false;
	}
	if (!func_79(Var0, &(Var0.f_1), 16, func_80(*uParam1), 0, 1))
	{
		return false;
	}
	if (!func_79(Var0, &(Var0.f_1), 17, 0, 0, 1))
	{
		return false;
	}
	uVar5 = Var0.f_1;
	func_91(uParam0, uParam1, 2);
	func_91(uParam0, uParam1, 8);
	iVar7 = 0;
	while (iVar7 <= (func_52(uParam0) - 1))
	{
		if (iVar7 >= 1)
		{
			return true;
		}
		Var0.f_1 = uVar5;
		if (!func_79(Var0, &(Var0.f_1), 18, iVar7, 0, 1))
		{
		}
		else
		{
			uVar6 = Var0.f_1;
			if (!func_79(Var0, &(Var0.f_1), 41, 0, 0, 1))
			{
			}
			else
			{
				func_95(uParam0, uParam1, iVar7, func_94(Var0));
				Var0.f_1 = uVar6;
				if (!func_79(Var0, &(Var0.f_1), 24, 0, 0, 0))
				{
				}
				else
				{
					func_96(uParam0, uParam1, iVar7, func_92(Var0, 0));
				}
			}
		}
		iVar7++;
	}
	return true;
}

void func_29(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (func_52(uParam0) - 1))
	{
		request_model(func_53(uParam0, iVar0), false);
		iVar0++;
	}
}

bool func_30(var uParam0, var uParam1)
{
	if (func_54(uParam0) <= 0)
	{
		return true;
	}
	if (!func_78(&Var0))
	{
		return false;
	}
	if (!func_79(Var0, &(Var0.f_1), 15, 0, 0, 1))
	{
		return false;
	}
	if (!func_79(Var0, &(Var0.f_1), 16, func_80(*uParam1), 0, 1))
	{
		return false;
	}
	if (!func_79(Var0, &(Var0.f_1), 25, 0, 0, 1))
	{
		return false;
	}
	uVar5 = Var0.f_1;
	func_91(uParam0, uParam1, 4);
	iVar6 = 0;
	while (iVar6 <= (func_54(uParam0) - 1))
	{
		if (iVar6 >= 1)
		{
			return true;
		}
		Var0.f_1 = uVar5;
		if (!func_79(Var0, &(Var0.f_1), 26, iVar6, 0, 1))
		{
		}
		else if (!func_79(Var0, &(Var0.f_1), 41, 0, 0, 1))
		{
		}
		else
		{
			func_97(uParam0, uParam1, iVar6, func_94(Var0));
			func_99(uParam0, uParam1, iVar6, func_98(Var0));
		}
		iVar6++;
	}
	return true;
}

void func_31(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (func_54(uParam0) - 1))
	{
		if (func_55(uParam0, iVar0) == 1654067888)
		{
			request_model(func_56(uParam0, iVar0), false);
		}
		iVar0++;
	}
}

void func_32(var uParam0, var uParam1)
{
	if (func_100(uParam0) <= 0)
	{
		return;
	}
	if (!func_78(&Var0))
	{
		return;
	}
	if (!func_79(Var0, &(Var0.f_1), 15, 0, 0, 1))
	{
		return;
	}
	if (!func_79(Var0, &(Var0.f_1), 16, func_80(*uParam1), 0, 1))
	{
		return;
	}
	if (!func_79(Var0, &(Var0.f_1), 35, 0, 0, 1))
	{
		return;
	}
	uVar5 = Var0.f_1;
	iVar6 = 0;
	while (iVar6 <= (func_100(uParam0) - 1))
	{
		if (iVar6 >= 1)
		{
			return;
		}
		Var0.f_1 = uVar5;
		if (!func_79(Var0, &(Var0.f_1), 36, iVar6, 0, 1))
		{
		}
		else
		{
			func_102(uParam0, uParam1, iVar6, func_101(Var0, 1));
		}
		iVar6++;
	}
}

bool func_33(var uParam0, var uParam1)
{
	if (!func_78(&Var0))
	{
		return false;
	}
	if (!func_79(Var0, &(Var0.f_1), 15, 0, 0, 1))
	{
		return false;
	}
	if (!func_79(Var0, &(Var0.f_1), 16, func_80(*uParam1), 0, 1))
	{
		return false;
	}
	if (!func_79(Var0, &(Var0.f_1), 31, 0, 0, 0))
	{
		return false;
	}
	uVar5 = Var0.f_1;
	iVar9 = func_103(Var0, 6);
	iVar7 = 0;
	while (iVar7 <= (iVar9 - 1))
	{
		Var0.f_1 = uVar5;
		if (!func_79(Var0, &(Var0.f_1), 32, iVar7, 0, 1))
		{
		}
		else
		{
			uVar6 = Var0.f_1;
			Var12 = { func_92(Var0, 1) };
			iVar20 = func_104(Var0);
			iVar11 = func_105(iVar20, 1);
			if (iVar11 == -1)
			{
			}
			else
			{
				iVar10 = func_103(Var0, 6);
				iVar8 = 0;
				while (iVar8 <= (iVar10 - 1))
				{
					Var0.f_1 = uVar6;
					if (!func_79(Var0, &(Var0.f_1), 32, iVar8, 0, 1))
					{
					}
					else
					{
						Var21.f_9 = func_106(Var0);
						Var21 = { func_101(Var0, 1) };
						Var21.f_3 = { func_107(Var0) };
						Var21.f_6 = { func_108(Var0) };
						if (!_does_volume_exist(iVar31))
						{
							iVar31 = _create_volume_aggregate_with_custom_name(&Var12);
						}
						_0x12fcaa23f2320422(iVar31, Var21.f_9, Var21, Var21.f_6, Var21.f_3);
					}
					iVar8++;
				}
				func_109(uParam0, uParam1, iVar20, iVar31);
				iVar31 = 0;
			}
		}
		iVar7++;
	}
	return true;
}

bool func_34(var uParam0, var uParam1)
{
	if (func_110(uParam0, 1))
	{
		if (func_111(uParam0))
		{
			func_112(uParam0, uParam1, 1);
		}
	}
	if (func_110(uParam0, 2))
	{
		if (func_113(uParam0))
		{
			func_112(uParam0, uParam1, 2);
		}
	}
	if (func_110(uParam0, 4))
	{
		if (func_114(uParam0))
		{
			func_112(uParam0, uParam1, 4);
		}
	}
	if (func_110(uParam0, 8))
	{
		if (func_115(uParam0))
		{
			func_112(uParam0, uParam1, 8);
		}
	}
	return !func_116(uParam0);
}

void func_35(var uParam0)
{
	iVar1 = func_100(uParam0);
	if (iVar1 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		vVar2 = { func_117(uParam0, iVar0) };
		if (func_118(vVar2))
		{
			set_force_object_this_frame(vVar2, 5f);
		}
		iVar0++;
	}
}

void func_36(var uParam0, var uParam1)
{
	iVar5 = 0;
	while (iVar5 <= (get_number_of_events(1) - 1))
	{
		iVar0 = get_event_at_index(1, iVar5);
		switch (iVar0)
		{
			case -507840394:
				get_event_data(1, iVar5, &iVar1, 4);
				switch (iVar1)
				{
					case 195:
						func_119(uParam0, uParam1, iVar5);
						break;
				}
				break;
		}
		iVar5++;
	}
}

void func_37(var uParam0, var uParam1)
{
	iVar0 = func_120(uParam0);
	switch (func_121(uParam0, iVar0))
	{
		case -1:
			if (func_67(uParam0) > 0)
			{
				func_122(uParam0, uParam1, iVar0, 0);
			}
			break;
		case 0:
			if (func_123(uParam0, uParam1, iVar0))
			{
				func_122(uParam0, uParam1, iVar0, 1);
			}
			break;
		case 1:
			if (func_124(uParam0, iVar0))
			{
				func_122(uParam0, uParam1, iVar0, 2);
			}
			break;
		case 2:
			if (func_125(uParam0, uParam1, iVar0))
			{
				func_122(uParam0, uParam1, iVar0, 3);
			}
			break;
		case 3:
			if (func_126(uParam0, uParam1, iVar0, 0))
			{
				func_122(uParam0, uParam1, iVar0, 3);
			}
			break;
		case 4:
			if (!func_126(uParam0, uParam1, iVar0, 1))
			{
				func_122(uParam0, uParam1, iVar0, 1);
			}
			break;
		default:
			break;
	}
}

void func_38(var uParam0, var uParam1)
{
	iVar0 = func_127(uParam0);
	switch (func_128(uParam0, iVar0))
	{
		case -1:
			if (func_54(uParam0) > 0)
			{
				func_129(uParam0, uParam1, iVar0, 0);
			}
			break;
		case 0:
			if (func_130(uParam0, uParam1, iVar0))
			{
				func_129(uParam0, uParam1, iVar0, 1);
			}
			break;
		case 1:
			switch (func_55(uParam0, iVar0))
			{
				case 1654067888:
					if (func_131(uParam0, iVar0))
					{
						func_129(uParam0, uParam1, iVar0, 2);
					}
					break;
				case 1279834816:
					func_129(uParam0, uParam1, iVar0, 3);
					break;
				case -128962623:
					func_129(uParam0, uParam1, iVar0, 4);
					break;
				default:
					break;
			}
			break;
		case 2:
			if (func_132(uParam0, uParam1, iVar0))
			{
				func_44(uParam0, uParam1, iVar0, 1);
				func_129(uParam0, uParam1, iVar0, 6);
			}
			break;
		case 3:
			if (func_133(uParam0, uParam1, iVar0))
			{
				func_129(uParam0, uParam1, iVar0, 5);
			}
			break;
		case 4:
			if (func_134(uParam0, uParam1, iVar0))
			{
				func_44(uParam0, uParam1, iVar0, 1);
				func_129(uParam0, uParam1, iVar0, 6);
			}
			break;
		case 5:
			if (func_135(uParam0, uParam1, iVar0))
			{
				func_44(uParam0, uParam1, iVar0, 1);
				func_129(uParam0, uParam1, iVar0, 6);
			}
			break;
		case 6:
			if (!does_entity_exist(func_58(uParam0, iVar0)))
			{
				func_129(uParam0, uParam1, iVar0, 1);
			}
		else
		{
			}
			default:
				break;
	}
}

void func_39(var uParam0, var uParam1)
{
	iVar0 = func_136(uParam0);
	switch (func_137(uParam0, iVar0))
	{
		case -1:
			if (func_52(uParam0) > 0)
			{
				func_138(uParam0, uParam1, iVar0, 0);
			}
			break;
		case 0:
			if (func_139(uParam0, uParam1, iVar0))
			{
				func_138(uParam0, uParam1, iVar0, 1);
			}
			break;
		case 1:
			if (func_140(uParam0, iVar0))
			{
				func_138(uParam0, uParam1, iVar0, 2);
			}
			break;
		case 2:
			if (func_141(uParam0, uParam1, iVar0))
			{
				func_43(uParam0, uParam1, iVar0, 1);
				func_138(uParam0, uParam1, iVar0, 3);
			}
			break;
		case 3:
			if (func_142(uParam0, uParam1, iVar0))
			{
				func_138(uParam0, uParam1, iVar0, 4);
			}
			break;
		case 4:
			if (!does_entity_exist(func_57(uParam0, iVar0)))
			{
				func_138(uParam0, uParam1, iVar0, 2);
			}
			else if (!_does_scenario_point_exist(func_143(uParam0, iVar0)))
			{
				func_138(uParam0, uParam1, iVar0, 3);
			}
		else
		{
			}
			default:
				break;
	}
}

void func_40(var uParam0, var uParam1)
{
	iVar0 = func_136(uParam0);
	if (func_137(uParam0, iVar0) != 4)
	{
		return;
	}
	switch (func_144(uParam0, iVar0))
	{
		case -1:
			func_145(uParam0, uParam1, iVar0, 0);
			break;
		case 0:
			if (func_146(uParam0, iVar0))
			{
				func_145(uParam0, uParam1, iVar0, 4);
				func_148(uParam0, uParam1, iVar0, func_147(uParam0, iVar0));
				return;
			}
			func_149(uParam0, uParam1, iVar0);
			func_150(uParam0, uParam1, iVar0);
			break;
		case 1:
			if (func_146(uParam0, iVar0))
			{
				func_145(uParam0, uParam1, iVar0, 4);
				func_148(uParam0, uParam1, iVar0, func_147(uParam0, iVar0));
				return;
			}
			func_151(uParam0, uParam1, iVar0);
			break;
		case 2:
			if (func_146(uParam0, iVar0))
			{
				func_145(uParam0, uParam1, iVar0, 4);
				func_148(uParam0, uParam1, iVar0, func_147(uParam0, iVar0));
				return;
			}
			func_152(uParam0, uParam1, iVar0);
			break;
		case 3:
			if (func_146(uParam0, iVar0))
			{
				func_145(uParam0, uParam1, iVar0, 4);
				func_148(uParam0, uParam1, iVar0, func_147(uParam0, iVar0));
				return;
			}
			func_153(uParam0, uParam1, iVar0);
			break;
		case 4:
			func_154(uParam0, uParam1, iVar0);
			break;
		case 5:
			func_155(uParam0, uParam1, iVar0);
			break;
		case 6:
			func_156(uParam0, uParam1, iVar0);
			break;
		default:
			break;
	}
}

void func_41(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 <= (func_52(uParam0) - 1))
	{
		iVar1 = iVar0;
		if (func_137(uParam0, iVar1) != 4)
		{
		}
		else if (func_144(uParam0, iVar1) != 0)
		{
		}
		else if (func_157(uParam0, iVar1) != 0)
		{
		}
		else
		{
			switch (func_158(uParam0, iVar1))
			{
				case 0:
					if (!func_159(uParam0, iVar1))
					{
					}
					else
					{
						func_160(uParam0, uParam1, iVar1, get_game_timer());
						func_162(uParam0, uParam1, iVar1, func_161());
						func_163(uParam0, uParam1, iVar1, 1);
						Jump @377; //curOff = 162
						if (!func_159(uParam0, iVar1))
						{
							func_163(uParam0, uParam1, iVar1, 0);
						}
						else if (!func_164(uParam0, iVar1))
						{
						}
						else
						{
							func_160(uParam0, uParam1, iVar1, get_game_timer());
							func_162(uParam0, uParam1, iVar1, func_165());
							func_163(uParam0, uParam1, iVar1, 2);
							Jump @377; //curOff = 245
							if (!func_164(uParam0, iVar1))
							{
								func_166(uParam0, iVar1, player_id());
							}
							else
							{
								func_160(uParam0, uParam1, iVar1, get_game_timer());
								func_162(uParam0, uParam1, iVar1, func_167());
								func_163(uParam0, uParam1, iVar1, 3);
								Jump @377; //curOff = 314
								if (!func_164(uParam0, iVar1))
								{
								}
								else
								{
									func_160(uParam0, uParam1, iVar1, get_game_timer());
									func_162(uParam0, uParam1, iVar1, func_161());
									func_163(uParam0, uParam1, iVar1, 1);
								}
							}
						}
					}
					iVar0++;
					default:
						break;
			}
		}
	}
}

void func_42(var uParam0, var uParam1)
{
	iVar0 = func_136(uParam0);
	if (func_144(uParam0, iVar0) != 0)
	{
		return;
	}
	iVar1 = func_57(uParam0, iVar0);
	iVar3 = get_player_ped(player_id());
	fVar7 = func_168(get_entity_coords(iVar1, true, false), Global_35);
	iVar4 = _0x796eecff0c6d39be(iVar1, 1, 0);
	if (iVar4 != 0)
	{
		iVar5 = _0x822a001bcea5bd81(iVar1, iVar4, 1, 0);
		if (!does_entity_exist(iVar5))
		{
			_0x1a5c5d350068a673(iVar1, 0);
			return;
		}
		if (!is_entity_a_ped(iVar5))
		{
			_0x1a5c5d350068a673(iVar1, 0);
			return;
		}
		iVar2 = get_ped_index_from_entity_index(iVar5);
		if (iVar2 != iVar3)
		{
			_0x1a5c5d350068a673(iVar1, 0);
			return;
		}
		iVar6 = _0x7f9b9791d4cb71f6(iVar1, iVar3, 1, 1);
		switch (iVar6)
		{
			case 1:
				bVar8 = true;
				break;
			default:
				bVar8 = false;
				break;
		}
		fVar7 = func_168(get_entity_coords(iVar1, true, false), Global_35);
		switch (iVar4)
		{
			case 157877922:
				if (bVar8)
				{
					bVar10 = true;
					iVar12 = -1340199114;
					iVar13 = 3;
					iVar14 = 1;
				}
				break;
			case -1102089407:
				bVar10 = true;
				iVar12 = 1526847194;
				iVar13 = 3;
				iVar14 = 1;
				break;
			case -1507090758:
			case -587661767:
			case -171567092:
			case -141209784:
			case 956330317:
			case 1722245163:
			case 1973084963:
				bVar10 = true;
				iVar12 = 1730381531;
				iVar13 = 2;
				iVar14 = 1;
				break;
		}
	}
	if (!bVar10)
	{
		if (func_169(uParam0, iVar0, 1960114521))
		{
			if (fVar7 <= 1.5f)
			{
				if (func_170(uParam0, iVar0, 1))
				{
					if ((get_game_timer() - func_171(uParam0, iVar0)) >= 3000)
					{
						bVar10 = true;
						iVar12 = 1960114521;
						iVar13 = 2;
						iVar14 = 1;
					}
				}
				else
				{
					func_172(uParam0, uParam1, iVar0, 1);
					func_173(uParam0, uParam1, iVar0, get_game_timer());
				}
			}
			else
			{
				func_174(uParam0, uParam1, iVar0, 1);
			}
		}
	}
	if (!bVar10)
	{
		if (func_169(uParam0, iVar0, 1908544294))
		{
			iVar15 = func_72(uParam0, 1572780156);
			if (_does_volume_exist(iVar15))
			{
				if (func_175(iVar3, iVar15, 1, 0))
				{
					if (func_170(uParam0, iVar0, 2))
					{
						if ((get_game_timer() - func_176(uParam0, iVar0)) >= 20000)
						{
							bVar10 = true;
							iVar12 = 1908544294;
							iVar13 = 1;
							iVar14 = 2;
						}
					}
					else
					{
						func_172(uParam0, uParam1, iVar0, 2);
						func_177(uParam0, uParam1, iVar0, get_game_timer());
					}
				}
				else
				{
					func_174(uParam0, uParam1, iVar0, 2);
				}
			}
		}
	}
	if (bVar10)
	{
		iVar11 = func_178(uParam0, iVar0, iVar12);
		if (iVar11 == 0)
		{
		}
		else if (func_179(uParam0, iVar0, iVar11))
		{
			bVar9 = func_180(uParam0, uParam1, iVar0, iVar13, iVar14, iVar11);
		}
		if (!bVar9)
		{
			if (func_181(uParam0, iVar0, iVar13))
			{
				bVar9 = func_182(uParam0, uParam1, iVar0, iVar13, iVar14);
			}
		}
	}
	if (bVar9)
	{
		switch (iVar12)
		{
			case 1960114521:
				func_174(uParam0, uParam1, iVar0, 1);
				break;
			case 1908544294:
				func_174(uParam0, uParam1, iVar0, 2);
				break;
		}
	}
	_0x1a5c5d350068a673(iVar1, 0);
}

void func_43(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	if (func_183(uParam1->f_1, 1))
	{
		iVar1 = func_52(uParam0);
		bParam3 = true;
		iVar2 = 0;
		func_184(uParam1->f_1, 1);
	}
	else
	{
		iVar1 = 1;
		if (iParam2 == -1)
		{
			iVar2 = func_136(uParam0);
		}
		else
		{
			iVar2 = iParam2;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar3 = ((iVar2 + iVar0) % iVar1);
		iVar4 = func_57(uParam0, iVar3);
		func_185(uParam0, uParam1, iVar4, &(uParam0->f_13[iVar3]->f_4), bParam3);
		iVar0++;
	}
}

void func_44(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	if (func_183(uParam1->f_1, 2))
	{
		iVar1 = func_54(uParam0);
		bParam3 = true;
		iVar2 = 0;
		func_184(uParam1->f_1, 2);
	}
	else
	{
		iVar1 = 1;
		if (iParam2 == -1)
		{
			iVar2 = func_127(uParam0);
		}
		else
		{
			iVar2 = iParam2;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar3 = ((iVar2 + iVar0) % iVar1);
		iVar4 = func_58(uParam0, iVar3);
		func_185(uParam0, uParam1, iVar4, &(uParam0->f_104[iVar3]->f_11), bParam3);
		iVar0++;
	}
}

void func_45(var uParam0, var uParam1)
{
	if (func_186(uParam0))
	{
		func_187(uParam0, uParam1);
	}
	else
	{
		iVar0 = func_136(uParam0);
		func_188(uParam0, uParam1, iVar0);
	}
}

void func_46(var uParam0)
{
	uParam0->f_249 = (uParam0->f_249 + (1 % 1));
}

void func_47(var uParam0)
{
	uParam0->f_249.f_1 = (uParam0->f_249.f_1 + (1 % 1));
}

void func_48(var uParam0)
{
	uParam0->f_249.f_2 = (uParam0->f_249.f_2 + (1 % 1));
}

int func_49(var uParam0)
{
	return uParam0->f_3.f_9;
}

struct<8> func_50(var uParam0, int iParam1)
{
	return *uParam0->f_3[iParam1];
}

char* func_51(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

int func_52(var uParam0)
{
	return uParam0->f_13.f_90;
}

int func_53(var uParam0, int iParam1)
{
	return uParam0->f_13[iParam1]->f_1;
}

int func_54(var uParam0)
{
	return uParam0->f_104.f_16;
}

int func_55(var uParam0, int iParam1)
{
	return uParam0->f_104[iParam1]->f_4;
}

int func_56(var uParam0, int iParam1)
{
	return uParam0->f_104[iParam1]->f_1;
}

int func_57(var uParam0, int iParam1)
{
	return &(uParam0->f_13[iParam1]);
}

var func_58(var uParam0, int iParam1)
{
	return &(uParam0->f_104[iParam1]);
}

bool func_59(var uParam0, int iParam1)
{
	if (!func_78(&Var0))
	{
		return false;
	}
	if (!func_79(Var0, &(Var0.f_1), 15, 0, 0, 1))
	{
		return false;
	}
	if (!func_79(Var0, &(Var0.f_1), 16, func_80(*uParam0), 0, 1))
	{
		return false;
	}
	if (!func_79(Var0, &(Var0.f_1), 25, 0, 0, 0))
	{
		return true;
	}
	if (!func_79(Var0, &(Var0.f_1), 26, iParam1, 0, 0))
	{
		return true;
	}
	if (!func_79(Var0, &(Var0.f_1), 41, 0, 0, 1))
	{
		return false;
	}
	iVar5 = func_189(Var0, 391715055);
	return !is_bit_set(iVar5, 2);
}

Vector3 func_60(var uParam0, int iParam1)
{
	return uParam0->f_104[iParam1]->f_5;
}

bool func_61(var uParam0, int iParam1)
{
	if (!func_78(&Var0))
	{
		return false;
	}
	if (!func_79(Var0, &(Var0.f_1), 15, 0, 0, 1))
	{
		return false;
	}
	if (!func_79(Var0, &(Var0.f_1), 16, func_80(*uParam0), 0, 1))
	{
		return false;
	}
	if (!func_79(Var0, &(Var0.f_1), 25, 0, 0, 0))
	{
		return true;
	}
	if (!func_79(Var0, &(Var0.f_1), 26, iParam1, 0, 0))
	{
		return true;
	}
	if (!func_79(Var0, &(Var0.f_1), 41, 0, 0, 1))
	{
		return false;
	}
	iVar5 = func_189(Var0, 391715055);
	return !is_bit_set(iVar5, 3);
}

Vector3 func_62(var uParam0, int iParam1)
{
	return uParam0->f_104[iParam1]->f_8;
}

int func_63(var uParam0, int iParam1)
{
	if (!func_78(&Var0))
	{
		return 0;
	}
	if (!func_79(Var0, &(Var0.f_1), 15, 0, 0, 1))
	{
		return 0;
	}
	if (!func_79(Var0, &(Var0.f_1), 16, func_80(*uParam0), 0, 1))
	{
		return 0;
	}
	if (!func_79(Var0, &(Var0.f_1), 25, 0, 0, 0))
	{
		return 0;
	}
	if (!func_79(Var0, &(Var0.f_1), 26, iParam1, 0, 0))
	{
		return 0;
	}
	if (!func_79(Var0, &(Var0.f_1), 41, 0, 0, 1))
	{
		return 0;
	}
	return func_189(Var0, 1956494238);
}

void func_64(int iParam0, int iParam1)
{
	if (func_190(iParam1, 2047251250))
	{
		freeze_entity_position(iParam0, false);
	}
	if (func_190(iParam1, -672795403))
	{
		set_entity_can_be_damaged(iParam0, true);
		set_entity_proofs(iParam0, 0, false);
	}
	if (func_190(iParam1, -1857841301))
	{
		set_entity_collision(iParam0, true, false);
	}
	if (func_190(iParam1, -479622762))
	{
		_0xc64e597783be9a1d(iParam0, false);
	}
}

int func_65(var uParam0, int iParam1)
{
	return uParam0->f_104[iParam1]->f_3;
}

void func_66(var uParam0, var uParam1, int iParam2, int iParam3)
{
	uParam0->f_104[iParam2]->f_3 = iParam3;
}

int func_67(var uParam0)
{
	return uParam0->f_121.f_9;
}

int func_68(var uParam0, int iParam1)
{
	return &(uParam0->f_121[iParam1]);
}

bool func_69(int iParam0)
{
	return iParam0 != 0;
}

int func_70(int iParam0)
{
	if (!_is_imap_active(iParam0))
	{
		return 1;
	}
	if (func_191())
	{
		return 0;
	}
	_remove_imap(iParam0);
	return 0;
}

int func_71(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1572780156;
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

int func_72(var uParam0, int iParam1)
{
	return &(uParam0->f_260[func_105(iParam1, 1)]);
}

bool func_73(struct<2> Param0)
{
	if (!func_192(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_193(Param0))
	{
		return false;
	}
	return true;
}

bool func_74(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_75(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1197740->f_1 && iParam0) != 0;
}

bool func_76(int iParam0, int iParam1)
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

bool func_77()
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
	if (!func_73(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

bool func_78(var uParam0)
{
	if (!_0x7907969497ea92f5(func_194()))
	{
		return false;
	}
	if (!_0x603ac35fd4602c76(func_194()))
	{
		return false;
	}
	_copy_memory(uParam0, &uVar0, 5);
	*uParam0 = func_194();
	return true;
}

bool func_79(struct<5> Param0, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

int func_80(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1169336073;
		case 1:
			return 104312746;
		case 2:
			return -1968585225;
		case 3:
			return -392789340;
		case 4:
			return 696054289;
		case 5:
			return 1852015156;
		case 6:
			return -1763412335;
		case 7:
			return -733349513;
		default:
			break;
	}
	return 0;
}

var func_81(struct<5> Param0)
{
	if (!func_79(Param0, &(Param0.f_1), 45, 0, 0, 0))
	{
		return 0;
	}
	return func_103(Param0, 13);
}

void func_82(var uParam0, var uParam1, var uParam2)
{
	uParam0->f_3.f_9 = uParam2;
}

var func_83(struct<5> Param0)
{
	if (!func_79(Param0, &(Param0.f_1), 17, 0, 0, 0))
	{
		return 0;
	}
	return func_103(Param0, 1);
}

void func_84(var uParam0, var uParam1, var uParam2)
{
	uParam0->f_13.f_90 = uParam2;
}

var func_85(struct<5> Param0)
{
	if (!func_79(Param0, &(Param0.f_1), 25, 0, 0, 0))
	{
		return 0;
	}
	return func_103(Param0, 3);
}

void func_86(var uParam0, var uParam1, var uParam2)
{
	uParam0->f_104.f_16 = uParam2;
}

var func_87(struct<5> Param0)
{
	if (!func_79(Param0, &(Param0.f_1), 35, 0, 0, 0))
	{
		return 0;
	}
	return func_103(Param0, 8);
}

void func_88(var uParam0, var uParam1, var uParam2)
{
	uParam0->f_131.f_4 = uParam2;
}

var func_89(struct<5> Param0)
{
	if (!func_79(Param0, &(Param0.f_1), 37, 0, 0, 0))
	{
		return 0;
	}
	return func_103(Param0, 9);
}

void func_90(var uParam0, var uParam1, var uParam2)
{
	uParam0->f_121.f_9 = uParam2;
}

void func_91(var uParam0, var uParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam2);
}

struct<8> func_92(vector3 vParam0, var uParam3, var uParam4, int iParam5)
{
	vParam0.f_2 = 61;
	if (!_datafile_get_string(&Var0, &vParam0))
	{
		return func_195("");
	}
	return Var0;
}

void func_93(var uParam0, var uParam1, int iParam2, struct<8> Param3)
{
	*uParam0->f_3[iParam2] = { Param3 };
}

int func_94(vector3 vParam0, var uParam3, var uParam4)
{
	vParam0.f_2 = 52;
	if (!_datafile_get_hash(&uVar0, &vParam0))
	{
		return 0;
	}
	return uVar0;
}

void func_95(var uParam0, var uParam1, int iParam2, int iParam3)
{
	uParam0->f_13[iParam2]->f_1 = iParam3;
}

void func_96(var uParam0, var uParam1, int iParam2, struct<8> Param3)
{
	uParam0->f_13[iParam2]->f_47 = { Param3 };
}

void func_97(var uParam0, var uParam1, int iParam2, int iParam3)
{
	uParam0->f_104[iParam2]->f_1 = iParam3;
}

int func_98(vector3 vParam0, var uParam3, var uParam4)
{
	vParam0.f_2 = 54;
	if (!_datafile_get_hash(&uVar0, &vParam0))
	{
		return 0;
	}
	return uVar0;
}

void func_99(var uParam0, var uParam1, int iParam2, int iParam3)
{
	uParam0->f_104[iParam2]->f_4 = iParam3;
}

int func_100(var uParam0)
{
	return uParam0->f_131.f_4;
}

Vector3 func_101(vector3 vParam0, var uParam3, var uParam4, int iParam5)
{
	vParam0.f_2 = 57;
	if (!_datafile_get_vector(&vVar0, &vParam0))
	{
		return 0f, 0f, 0f;
	}
	return vVar0;
}

void func_102(var uParam0, var uParam1, int iParam2, vector3 vParam3)
{
	*uParam0->f_131[iParam2] = { vParam3 };
}

int func_103(vector3 vParam0, var uParam3, var uParam4, int iParam5)
{
	vParam0.f_2 = iParam5;
	return _datafile_get_num_nodes(&vParam0);
}

int func_104(vector3 vParam0, var uParam3, var uParam4)
{
	vParam0.f_2 = 54;
	if (!_datafile_get_hash(&uVar0, &vParam0))
	{
		return 0;
	}
	return uVar0;
}

int func_105(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1572780156:
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

int func_106(vector3 vParam0, var uParam3, var uParam4)
{
	vParam0.f_2 = 54;
	if (!_datafile_get_hash(&uVar0, &vParam0))
	{
		return 0;
	}
	return uVar0;
}

Vector3 func_107(vector3 vParam0, var uParam3, var uParam4)
{
	vParam0.f_2 = 66;
	if (!_datafile_get_vector(&vVar0, &vParam0))
	{
		return 0f, 0f, 0f;
	}
	return vVar0;
}

Vector3 func_108(vector3 vParam0, var uParam3, var uParam4)
{
	vParam0.f_2 = 64;
	if (!_datafile_get_vector(&vVar0, &vParam0))
	{
		return 0f, 0f, 0f;
	}
	return vVar0;
}

void func_109(var uParam0, var uParam1, int iParam2, int iParam3)
{
	uParam0->f_260[func_105(iParam2, 1)] = iParam3;
}

bool func_110(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_111(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (func_49(uParam0) - 1))
	{
		if (_text_database_has_loaded(func_51(func_50(uParam0, iVar0))))
		{
		}
		else
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_112(var uParam0, var uParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam2));
}

bool func_113(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (func_52(uParam0) - 1))
	{
		if (has_model_loaded(func_53(uParam0, iVar0)))
		{
		}
		else
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_114(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (func_54(uParam0) - 1))
	{
		if (func_55(uParam0, iVar0) != 1654067888)
		{
		}
		else if (has_model_loaded(func_56(uParam0, iVar0)))
		{
		}
		else
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_115(var uParam0)
{
	_0xed9582b3da8f02b4(func_52(uParam0));
	return _0x5e420ff293ee5472();
}

bool func_116(var uParam0)
{
	return uParam0->f_2 != 0;
}

Vector3 func_117(var uParam0, int iParam1)
{
	return *uParam0->f_131[iParam1];
}

bool func_118(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_119(var uParam0, var uParam1, int iParam2)
{
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = 255;
	get_event_data(1, iParam2, &Var0, 12);
	if (!func_196(uParam0, uParam1, &Var0))
	{
		return;
	}
	switch (Var0.f_4)
	{
		case 0:
			func_197(uParam0, uParam1, &Var0);
			break;
		case 1:
			func_198(uParam0, uParam1, &Var0);
			break;
		case 2:
			func_199(uParam0, uParam1, &Var0);
			break;
		default:
			break;
	}
}

var func_120(var uParam0)
{
	return uParam0->f_249.f_2;
}

int func_121(var uParam0, int iParam1)
{
	return uParam0->f_121[iParam1]->f_1;
}

void func_122(var uParam0, var uParam1, int iParam2, int iParam3)
{
	uParam0->f_121[iParam2]->f_1 = iParam3;
}

bool func_123(var uParam0, var uParam1, int iParam2)
{
	if (!func_78(&Var0))
	{
		return false;
	}
	if (!func_79(Var0, &(Var0.f_1), 15, 0, 0, 1))
	{
		return false;
	}
	if (!func_79(Var0, &(Var0.f_1), 16, func_80(*uParam1), 0, 1))
	{
		return false;
	}
	if (!func_79(Var0, &(Var0.f_1), 37, 0, 0, 1))
	{
		return false;
	}
	if (!func_79(Var0, &(Var0.f_1), 38, iParam2, 0, 1))
	{
		return false;
	}
	if (!func_79(Var0, &(Var0.f_1), 41, 0, 0, 1))
	{
		return false;
	}
	func_201(uParam0, uParam1, iParam2, func_200(Var0));
	func_202(uParam0, uParam1, iParam2, func_101(Var0, 0));
	func_204(uParam0, uParam1, iParam2, func_203(Var0, 0));
	func_206(uParam0, uParam1, iParam2, func_205(Var0, 0));
	func_207(uParam0, uParam1, iParam2, func_189(Var0, -1118957050));
	return true;
}

bool func_124(var uParam0, int iParam1)
{
	vVar0 = { func_208(uParam0, iParam1) };
	if (func_210(func_209(uParam0, iParam1), 1267291313))
	{
		if (vdist(vVar0, Global_35) <= func_211(uParam0, iParam1))
		{
			return false;
		}
	}
	if (func_210(func_209(uParam0, iParam1), 1267291313))
	{
		if (is_sphere_visible(vVar0, func_212(uParam0, iParam1)))
		{
			return false;
		}
	}
	return true;
}

bool func_125(var uParam0, var uParam1, int iParam2)
{
	iVar0 = func_68(uParam0, iParam2);
	if (!func_69(iVar0))
	{
		return false;
	}
	if (_is_imap_active(iVar0))
	{
		return true;
	}
	func_213(iVar0);
	return true;
}

bool func_126(var uParam0, var uParam1, int iParam2, int iParam3)
{
	iVar0 = func_68(uParam0, iParam2);
	if (!func_69(iVar0))
	{
		return false;
	}
	if (_is_imap_active(iVar0))
	{
		return true;
	}
	return false;
}

int func_127(var uParam0)
{
	return uParam0->f_249.f_1;
}

int func_128(var uParam0, int iParam1)
{
	return uParam0->f_104[iParam1]->f_2;
}

void func_129(var uParam0, var uParam1, int iParam2, int iParam3)
{
	uParam0->f_104[iParam2]->f_2 = iParam3;
}

bool func_130(var uParam0, var uParam1, int iParam2)
{
	if (!func_78(&Var0))
	{
		return false;
	}
	if (!func_79(Var0, &(Var0.f_1), 15, 0, 0, 1))
	{
		return false;
	}
	if (!func_79(Var0, &(Var0.f_1), 16, func_80(*uParam1), 0, 1))
	{
		return false;
	}
	if (!func_79(Var0, &(Var0.f_1), 25, 0, 0, 0))
	{
		return true;
	}
	if (!func_79(Var0, &(Var0.f_1), 26, iParam2, 0, 0))
	{
		return true;
	}
	if (!func_79(Var0, &(Var0.f_1), 41, 0, 0, 1))
	{
		return false;
	}
	func_214(uParam0, uParam1, iParam2, func_189(Var0, 1275965103));
	func_215(uParam0, uParam1, iParam2, func_189(Var0, -1256669479));
	return true;
}

bool func_131(var uParam0, int iParam1)
{
	if (!has_model_loaded(func_56(uParam0, iParam1)))
	{
		request_model(func_56(uParam0, iParam1), false);
		return false;
	}
	return true;
}

bool func_132(var uParam0, var uParam1, int iParam2)
{
	if (!func_216(uParam1, iParam2, &Var0))
	{
		return false;
	}
	if (func_118(Var0))
	{
		return false;
	}
	iVar12 = create_object_no_offset(func_56(uParam0, iParam2), Var0, false, true, func_217(Var0.f_11, -1682696311), func_217(Var0.f_11, -1143675091));
	if (!does_entity_exist(iVar12))
	{
		return false;
	}
	func_218(uParam0, uParam1, iParam2, iVar12);
	func_219(uParam0, uParam1, iParam2, Var0.f_10);
	set_entity_rotation(iVar12, Var0.f_3, 2, true);
	return true;
}

bool func_133(var uParam0, var uParam1, int iParam2)
{
	if (!func_220(uParam1, iParam2, &Var0))
	{
		return false;
	}
	if (func_65(uParam0, iParam2) != 0)
	{
		return true;
	}
	uVar12 = _0x6f3068258a499e52(func_56(uParam0, iParam2), Var0.f_6, 15);
	func_66(uParam0, uParam1, iParam2, uVar12);
	return true;
}

bool func_134(var uParam0, var uParam1, int iParam2)
{
	if (!func_221(uParam1, iParam2, &Var0))
	{
		return false;
	}
	iVar12 = func_222(func_56(uParam0, iParam2), Var0.f_6, Var0.f_9);
	if (!does_entity_exist(iVar12))
	{
		return false;
	}
	func_218(uParam0, uParam1, iParam2, iVar12);
	func_219(uParam0, uParam1, iParam2, Var0.f_10);
	if (!func_217(Var0.f_11, 505853239))
	{
		func_223(uParam0, uParam1, iParam2, get_entity_coords(iVar12, true, false));
		set_entity_coords(iVar12, Var0, true, false, true, true);
	}
	if (!func_217(Var0.f_11, 505853239))
	{
		func_224(uParam0, uParam1, iParam2, get_entity_rotation(iVar12, 2));
		set_entity_rotation(iVar12, Var0.f_3, 2, true);
	}
	return true;
}

bool func_135(var uParam0, var uParam1, int iParam2)
{
	iVar0 = func_65(uParam0, iParam2);
	if (iVar0 == 0)
	{
		return false;
	}
	if (!_0x1ff441d7954f8709(iVar0))
	{
		return false;
	}
	if (!func_220(uParam1, iParam2, &Var1))
	{
		return false;
	}
	iVar13 = get_object_index_from_entity_index(_0x4735e2a4bb83d9da(iVar0));
	func_218(uParam0, uParam1, iParam2, iVar13);
	func_219(uParam0, uParam1, iParam2, Var1.f_10);
	if (!func_217(Var1.f_11, 505853239))
	{
		func_223(uParam0, uParam1, iParam2, get_entity_coords(iVar13, true, false));
		set_entity_coords(iVar13, Var1, true, false, true, true);
	}
	if (!func_217(Var1.f_11, 505853239))
	{
		func_224(uParam0, uParam1, iParam2, get_entity_rotation(iVar13, 2));
		set_entity_rotation(iVar13, Var1.f_3, 2, true);
	}
	return true;
}

int func_136(var uParam0)
{
	return uParam0->f_249;
}

int func_137(var uParam0, int iParam1)
{
	return uParam0->f_13[iParam1]->f_2;
}

void func_138(var uParam0, var uParam1, int iParam2, int iParam3)
{
	uParam0->f_13[iParam2]->f_2 = iParam3;
}

bool func_139(var uParam0, var uParam1, int iParam2)
{
	if (!func_78(&Var0))
	{
		return false;
	}
	if (!func_79(Var0, &(Var0.f_1), 15, 0, 0, 1))
	{
		return false;
	}
	if (!func_79(Var0, &(Var0.f_1), 16, func_80(*uParam1), 0, 1))
	{
		return false;
	}
	if (!func_79(Var0, &(Var0.f_1), 17, 0, 0, 0))
	{
		return true;
	}
	if (!func_79(Var0, &(Var0.f_1), 18, iParam2, 0, 0))
	{
		return true;
	}
	uVar5 = Var0.f_1;
	if (!func_79(Var0, &(Var0.f_1), 41, 0, 0, 1))
	{
		return false;
	}
	func_225(uParam0, uParam1, iParam2, func_189(Var0, 1275965103));
	func_226(uParam0, uParam1, iParam2, func_189(Var0, -1256669479));
	Var0.f_1 = uVar5;
	if (func_79(Var0, &(Var0.f_1), 22, 0, 0, 0))
	{
		Var6 = 1;
		Var6.f_2 = 1;
		Var6.f_4 = 1;
		func_227(Var0, &Var6);
		func_228(uParam0, uParam1, iParam2, &Var6);
	}
	Var0.f_1 = uVar5;
	if (func_79(Var0, &(Var0.f_1), 24, 0, 0, 1))
	{
		uVar17 = Var0.f_1;
		iVar14 = func_103(Var0, 14);
		iVar13 = 0;
		while (iVar13 <= (iVar14 - 1))
		{
			Var0.f_1 = uVar17;
			if (!func_79(Var0, &(Var0.f_1), 48, iVar13, 0, 1))
			{
			}
			else
			{
				iVar16 = func_229(Var0);
				bVar15 = func_230(Var0);
				func_231(uParam0, uParam1, iParam2, iVar16);
				if (bVar15)
				{
					func_232(uParam0, uParam1, iParam2, iVar16);
				}
			}
			iVar13++;
		}
	}
	return true;
}

bool func_140(var uParam0, int iParam1)
{
	if (!has_model_loaded(func_53(uParam0, iParam1)))
	{
		request_model(func_53(uParam0, iParam1), false);
		return false;
	}
	return true;
}

bool func_141(var uParam0, var uParam1, int iParam2)
{
	if (!func_233(uParam1, &Var0, iParam2))
	{
		return false;
	}
	if (func_118(Var0.f_1))
	{
		return false;
	}
	iVar6 = func_236(func_53(uParam0, iParam2), Var0.f_1, Var0.f_4, 0, 0, 0, 1, func_234(Var0.f_5, 1833117953), !func_235(Var0), func_234(Var0.f_5, -1395267550), func_235(Var0));
	if (!does_entity_exist(iVar6))
	{
		return false;
	}
	set_ped_config_flag(iVar6, 422, true);
	set_ped_config_flag(iVar6, 107, true);
	set_ped_config_flag(iVar6, 130, true);
	set_ped_config_flag(iVar6, 315, true);
	if (_is_this_model_a_horse(func_53(uParam0, iParam2)))
	{
		set_ped_config_flag(iVar6, 136, true);
	}
	set_ped_can_ragdoll(iVar6, false);
	set_entity_proofs(iVar6, 127, false);
	_0xa967d6a8ed2d713b(iVar6, 0);
	_0xae6004120c18df97(iVar6, 0, 0);
	set_ped_keep_task(iVar6, true);
	set_blocking_of_non_temporary_events(iVar6, true);
	set_ped_relationship_group_hash(iVar6, 1391706777);
	_0xbb1e41dd3d3c6250(iVar6, "MpMissionGiver", 0);
	if (func_234(Var0.f_5, -1395267550))
	{
		_set_ped_body_component(iVar6, Var0);
		_update_ped_variation(iVar6, false, true, true, true, false);
	}
	if (!func_234(Var0.f_5, -1395267550))
	{
		remove_all_ped_weapons(iVar6, true, true);
		iVar7 = 0;
		while (iVar7 <= (func_237(uParam0, iParam2) - 1))
		{
			get_current_ped_weapon(iVar6, &iVar8, false, func_238(uParam0, iParam2, iVar7), false);
			switch (func_239(uParam0, iParam2, iVar7))
			{
				case -369323422:
					if (iVar8 == func_240(uParam0, iParam2, iVar7))
					{
					}
					else
					{
						_give_weapon_to_ped_2(iVar6, func_240(uParam0, iParam2, iVar7), 0, false, true, func_238(uParam0, iParam2, iVar7), false, 0.5f, 1f, 752097756, true, 0f, true);
						if (func_238(uParam0, iParam2, iVar7) == 0 || func_238(uParam0, iParam2, iVar7) == 1)
						{
							set_current_ped_weapon(iVar6, func_240(uParam0, iParam2, iVar7), true, func_238(uParam0, iParam2, iVar7), false, false);
							bVar9 = true;
						}
					}
					break;
				case -958870975:
					remove_weapon_from_ped(iVar6, iVar8, true, -142743235);
					break;
			}
			iVar7++;
		}
		if (bVar9)
		{
			task_swap_weapon(iVar6, 1, 0, 0, 0);
		}
	}
	func_241(uParam0, uParam1, iParam2, iVar6);
	return true;
}

bool func_142(var uParam0, var uParam1, int iParam2)
{
	if (_does_scenario_point_exist(func_143(uParam0, iParam2)))
	{
		return true;
	}
	if (!func_242(uParam1, &Var0, iParam2))
	{
		return false;
	}
	switch (Var0)
	{
		case 1927688563:
			if (Var0.f_7)
			{
				iVar31 = func_222(Var0.f_7.f_1, Var0.f_7.f_2, Var0.f_7.f_5);
				if (!does_entity_exist(iVar31))
				{
					return false;
				}
				if (!_0x375f5870a7b8bec1(&(Var0.f_7.f_6)))
				{
					Var0.f_1.f_1 = { Var0.f_1.f_1 + _0x5e214112806591ea(iVar31, get_entity_bone_index_by_name(iVar31, &(Var0.f_7.f_6))) };
				}
				iVar30 = create_scenario_point_attached_to_entity(iVar31, Var0.f_1, Var0.f_1.f_1, Var0.f_1.f_4, 0, 0, 0);
			}
			else
			{
				iVar30 = create_scenario_point(Var0.f_1, Var0.f_1.f_1, Var0.f_1.f_4, 0, 0, 0);
			}
			bVar32 = true;
			break;
		case 438717698:
			iVar30 = func_243(Var0.f_1, Var0.f_1.f_1, Var0.f_1.f_4);
			break;
		default:
			return false;
	}
	if (!_does_scenario_point_exist(iVar30))
	{
		return false;
	}
	if (bVar32)
	{
		if (func_244(Var0.f_1.f_5, -1141253079))
		{
			_set_scenario_point_flag(iVar30, 25, true);
		}
		if (func_244(Var0.f_1.f_5, 841757915))
		{
			_set_scenario_point_flag(iVar30, 23, true);
		}
	}
	func_245(uParam0, uParam1, iParam2, iVar30);
	func_246(uParam0, uParam1, iParam2, Var0.f_1);
	func_247(uParam0, uParam1, iParam2, Var0.f_21);
	func_248(uParam0, uParam1, iParam2, Var0.f_21.f_1);
	return true;
}

var func_143(var uParam0, int iParam1)
{
	return uParam0->f_13[iParam1]->f_19;
}

int func_144(var uParam0, int iParam1)
{
	return uParam0->f_13[iParam1]->f_3;
}

void func_145(var uParam0, var uParam1, int iParam2, int iParam3)
{
	uParam0->f_13[iParam2]->f_3 = iParam3;
}

bool func_146(var uParam0, int iParam1)
{
	return func_249(uParam0, iParam1) != 0;
}

int func_147(var uParam0, int iParam1)
{
	return uParam0->f_13[iParam1]->f_30.f_5;
}

void func_148(var uParam0, var uParam1, int iParam2, int iParam3)
{
	func_250(uParam0, uParam1, iParam2, iParam3);
	func_251(uParam0, uParam1, iParam2, get_game_timer());
	func_252(uParam0, uParam1, iParam2, 0);
	func_253(uParam0, uParam1, iParam2, 0);
	func_254(uParam0, uParam1, iParam2, 255);
	func_255(uParam0, uParam1, iParam2, 0);
	func_256(uParam0, uParam1, iParam2, 0);
}

void func_149(var uParam0, var uParam1, int iParam2)
{
	iVar0 = func_57(uParam0, iParam2);
	iVar1 = get_script_task_status(iVar0, -76381094, true);
	if (iVar1 == 1 || iVar1 == 0)
	{
		return;
	}
	_task_use_scenario_point(iVar0, func_143(uParam0, iParam2), func_51(func_257(uParam0, iParam2)), 0, false, true, 0, false, -1f, false);
}

void func_150(var uParam0, var uParam1, int iParam2)
{
	if (!func_258(uParam0, iParam2))
	{
		return;
	}
	if (func_157(uParam0, iParam2) == 0)
	{
		return;
	}
	func_252(uParam0, uParam1, iParam2, func_157(uParam0, iParam2));
	func_253(uParam0, uParam1, iParam2, func_259(uParam0, iParam2));
	func_254(uParam0, uParam1, iParam2, func_260(uParam0, iParam2));
	func_255(uParam0, uParam1, iParam2, func_261(uParam0, iParam2));
	func_262(uParam0, uParam1, iParam2, 0);
	func_263(uParam0, uParam1, iParam2, 0);
	func_264(uParam0, uParam1, iParam2, 255);
	func_265(uParam0, uParam1, iParam2, 0);
	func_145(uParam0, uParam1, iParam2, 1);
}

void func_151(var uParam0, var uParam1, int iParam2)
{
	if (!func_258(uParam0, iParam2))
	{
		func_149(uParam0, uParam1, iParam2);
		return;
	}
	func_268(uParam0, uParam1, iParam2, func_147(uParam0, iParam2), func_266(uParam0, iParam2), func_267(uParam0, iParam2), 0);
	if (func_269(uParam0, iParam2, 0))
	{
		func_256(uParam0, uParam1, iParam2, get_game_timer());
		func_145(uParam0, uParam1, iParam2, 2);
	}
}

void func_152(var uParam0, var uParam1, int iParam2)
{
	if (!func_258(uParam0, iParam2))
	{
		func_149(uParam0, uParam1, iParam2);
		return;
	}
	if (func_147(uParam0, iParam2) < func_157(uParam0, iParam2))
	{
		func_252(uParam0, uParam1, iParam2, func_157(uParam0, iParam2));
		func_253(uParam0, uParam1, iParam2, func_259(uParam0, iParam2));
		func_254(uParam0, uParam1, iParam2, func_260(uParam0, iParam2));
		func_255(uParam0, uParam1, iParam2, func_261(uParam0, iParam2));
		func_262(uParam0, uParam1, iParam2, 0);
		func_263(uParam0, uParam1, iParam2, 0);
		func_264(uParam0, uParam1, iParam2, 255);
		func_265(uParam0, uParam1, iParam2, 0);
		func_256(uParam0, uParam1, iParam2, get_game_timer());
		bVar0 = true;
	}
	func_268(uParam0, uParam1, iParam2, func_147(uParam0, iParam2), func_266(uParam0, iParam2), func_267(uParam0, iParam2), bVar0);
	if (get_game_timer() - func_270(uParam0, iParam2)) >= func_271(uParam0, iParam2)
	{
		func_145(uParam0, uParam1, iParam2, 3);
	}
}

void func_153(var uParam0, var uParam1, int iParam2)
{
	if (!func_258(uParam0, iParam2))
	{
		func_149(uParam0, uParam1, iParam2);
		return;
	}
	func_272(uParam0, uParam1, iParam2, func_266(uParam0, iParam2));
	if (func_269(uParam0, iParam2, 1))
	{
		return;
	}
	if (func_269(uParam0, iParam2, 0))
	{
		return;
	}
	if (!func_273(uParam0, iParam2))
	{
		return;
	}
	func_148(uParam0, uParam1, iParam2, func_147(uParam0, iParam2));
	func_145(uParam0, uParam1, iParam2, 0);
}

void func_154(var uParam0, var uParam1, int iParam2)
{
	if (!func_258(uParam0, iParam2))
	{
		func_149(uParam0, uParam1, iParam2);
		return;
	}
	if (func_274(uParam0, iParam2) == 0)
	{
		func_145(uParam0, uParam1, iParam2, 0);
		return;
	}
	func_268(uParam0, uParam1, iParam2, func_274(uParam0, iParam2), func_275(uParam0, iParam2), func_276(uParam0, iParam2), 0);
	if (func_269(uParam0, iParam2, 0))
	{
		func_277(uParam0, uParam1, iParam2, get_game_timer());
		func_145(uParam0, uParam1, iParam2, 5);
	}
}

void func_155(var uParam0, var uParam1, int iParam2)
{
	func_268(uParam0, uParam1, iParam2, func_274(uParam0, iParam2), func_275(uParam0, iParam2), func_276(uParam0, iParam2), 0);
	if (get_game_timer() - func_278(uParam0, iParam2)) >= func_279(uParam0, iParam2)
	{
		func_145(uParam0, uParam1, iParam2, 6);
	}
}

void func_156(var uParam0, var uParam1, int iParam2)
{
	if (!func_258(uParam0, iParam2))
	{
		func_149(uParam0, uParam1, iParam2);
		return;
	}
	func_272(uParam0, uParam1, iParam2, func_275(uParam0, iParam2));
	if (func_269(uParam0, iParam2, 1))
	{
		return;
	}
	if (func_269(uParam0, iParam2, 0))
	{
		return;
	}
	if (!func_273(uParam0, iParam2))
	{
		return;
	}
	func_148(uParam0, uParam1, iParam2, func_274(uParam0, iParam2));
	func_145(uParam0, uParam1, iParam2, 0);
	if (func_249(uParam0, iParam2) == func_280(uParam0) && func_281(uParam0) == iParam2)
	{
	}
	else
	{
		func_282(uParam0, uParam1, iParam2);
	}
}

int func_157(var uParam0, int iParam1)
{
	return uParam0->f_13[iParam1]->f_30.f_8;
}

int func_158(var uParam0, int iParam1)
{
	return uParam0->f_13[iParam1]->f_30;
}

bool func_159(var uParam0, int iParam1)
{
	return func_168(get_entity_coords(func_57(uParam0, iParam1), true, false), Global_35) <= 15f;
}

void func_160(var uParam0, var uParam1, int iParam2, int iParam3)
{
	uParam0->f_13[iParam2]->f_30.f_2 = iParam3;
}

var func_161()
{
	return get_random_int_in_range(3, 7) * 1000;
}

void func_162(var uParam0, var uParam1, int iParam2, var uParam3)
{
	uParam0->f_13[iParam2]->f_30.f_1 = uParam3;
}

void func_163(var uParam0, var uParam1, int iParam2, int iParam3)
{
	uParam0->f_13[iParam2]->f_30 = iParam3;
}

bool func_164(var uParam0, int iParam1)
{
	return (get_game_timer() - func_283(uParam0, iParam1)) >= func_284(uParam0, iParam1);
}

var func_165()
{
	return get_random_int_in_range(4, 9) * 1000;
}

void func_166(var uParam0, int iParam1, int iParam2)
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
	Var0.f_3 = get_player_ped(iParam2);
	Var0.f_19 = 4;
	Var0.f_20 = 3;
	Var0.f_21 = 4;
	Var0.f_22 = 3;
	Var0.f_8 = 4;
	Var0.f_7 = 500;
	func_285(&(Var0.f_5), 1);
	_0x66f9eb44342bb4c5(func_57(uParam0, iParam1), &Var0);
}

var func_167()
{
	return get_random_int_in_range(10, 15) * 1000;
}

float func_168(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

bool func_169(var uParam0, int iParam1, int iParam2)
{
	if (func_286(uParam0, iParam1, iParam2))
	{
		if (func_287(uParam0, iParam1, iParam2))
		{
			if (func_288(uParam0, iParam1, iParam2))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_170(var uParam0, int iParam1, int iParam2)
{
	return (uParam0->f_13[iParam1]->f_30.f_14 && iParam2) != 0;
}

int func_171(var uParam0, int iParam1)
{
	return uParam0->f_13[iParam1]->f_30.f_15;
}

void func_172(var uParam0, var uParam1, int iParam2, int iParam3)
{
	uParam0->f_13[iParam2]->f_30.f_14 = (uParam0->f_13[iParam2]->f_30.f_14 || iParam3);
}

void func_173(var uParam0, var uParam1, int iParam2, int iParam3)
{
	uParam0->f_13[iParam2]->f_30.f_15 = iParam3;
}

void func_174(var uParam0, var uParam1, int iParam2, int iParam3)
{
	uParam0->f_13[iParam2]->f_30.f_14 = (uParam0->f_13[iParam2]->f_30.f_14 - (uParam0->f_13[iParam2]->f_30.f_14 && iParam3));
}

bool func_175(int iParam0, int iParam1, bool bParam2, int iParam3)
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

int func_176(var uParam0, int iParam1)
{
	return uParam0->f_13[iParam1]->f_30.f_16;
}

void func_177(var uParam0, var uParam1, int iParam2, int iParam3)
{
	uParam0->f_13[iParam2]->f_30.f_16 = iParam3;
}

int func_178(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_289(uParam0, iParam1, iParam2);
	iVar1 = func_290(iParam2);
	iVar2 = func_291(iParam2);
	if (iVar0 >= iVar1)
	{
		if (func_169(uParam0, iParam1, iVar2))
		{
			return iVar2;
		}
		else if (func_169(uParam0, iParam1, iParam2))
		{
			return iParam2;
		}
		else
		{
			return uVar3;
		}
	}
	if (func_169(uParam0, iParam1, iParam2))
	{
		return iParam2;
	}
	return uVar3;
}

bool func_179(var uParam0, int iParam1, int iParam2)
{
	if (func_186(uParam0))
	{
		return false;
	}
	if (!func_292(uParam0))
	{
		return false;
	}
	if (!func_293(uParam0, iParam1, iParam2, 0))
	{
		return false;
	}
	return true;
}

int func_180(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = 255;
	if (!func_179(uParam0, iParam2, iParam5))
	{
		return 0;
	}
	if (func_294(uParam0, iParam2))
	{
		func_295(uParam0, uParam1, iParam2, iParam5);
		return 0;
	}
	func_296(uParam1, 2, iParam2, &Var0);
	Var0.f_8 = iParam5;
	Var0.f_7 = player_id();
	Var0.f_9 = iParam3;
	Var0.f_10 = iParam4;
	Var0.f_11 = func_297(iParam3);
	Var0.f_7 = player_id();
	func_298(&uVar12);
	func_299(uParam0, uParam1, &Var0, uVar12);
	return 1;
}

bool func_181(var uParam0, int iParam1, int iParam2)
{
	iVar2 = func_147(uParam0, iParam1);
	iVar1 = func_300(uParam0, iParam1);
	iVar3 = func_157(uParam0, iParam1);
	iVar4 = get_game_timer();
	if (iVar2 == 0)
	{
		if (iVar3 == 0)
		{
			if (iVar1 == 0)
			{
				iVar0 = 1;
			}
			else if (iParam2 > iVar1)
			{
				iVar0 = 1;
			}
			else if ((iVar4 - func_301(uParam0, iParam1)) >= 3000)
			{
				iVar0 = 1;
			}
		}
		else if (iParam2 > iVar3)
		{
			iVar0 = 1;
		}
	}
	else if (iParam2 > iVar2)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_182(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = 255;
	if (!func_181(uParam0, iParam2, iParam3))
	{
		return 0;
	}
	func_296(uParam1, 1, iParam2, &Var0);
	Var0.f_9 = iParam3;
	Var0.f_10 = iParam4;
	Var0.f_11 = func_297(iParam3);
	Var0.f_7 = player_id();
	func_298(&uVar12);
	func_299(uParam0, uParam1, &Var0, uVar12);
	return 1;
}

bool func_183(int iParam0, int iParam1)
{
	return ((*Global_1131045)[iParam0]->f_10 && iParam1) != 0;
}

void func_184(int iParam0, int iParam1)
{
	(*Global_1131045)[iParam0]->f_10 = ((*Global_1131045)[iParam0]->f_10 - ((*Global_1131045)[iParam0]->f_10 && iParam1));
}

void func_185(var uParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	if (!does_entity_exist(iParam2))
	{
		return;
	}
	if (!bParam4 && !func_302(iParam2))
	{
		return;
	}
	vVar0.f_2 = uParam3->f_2;
	func_303(uParam1, &vVar0);
	func_304(uParam1, iParam2, &vVar0);
	if (*uParam3 ^ vVar0.x == 0)
	{
		uParam3->f_1 = vVar0.y;
		return;
	}
	*uParam3 = vVar0.x;
	func_305(iParam2, *uParam3 == 0);
}

bool func_186(var uParam0)
{
	return func_280(uParam0) != 0;
}

void func_187(var uParam0, var uParam1)
{
	iVar0 = func_281(uParam0);
	if (func_306(uParam0))
	{
		func_166(uParam0, iVar0, func_276(uParam0, iVar0));
	}
	else
	{
		iVar1 = get_game_timer();
		iVar2 = func_280(uParam0);
		iVar3 = func_307(iVar2);
		if (func_249(uParam0, iVar0) == iVar2 && !func_294(uParam0, iVar0))
		{
			func_282(uParam0, uParam1, iVar0);
		}
		else if (func_249(uParam0, iVar0) != iVar2)
		{
			func_308(uParam0, uParam1, iVar0, 255);
		}
		func_309(uParam0, uParam1);
		func_310(uParam0, uParam1, iVar1);
		func_311(uParam0, uParam1, iVar0, iVar2);
		func_312(uParam0, uParam1, iVar0, iVar1);
		func_313(uParam0, uParam1, iVar0, iVar2);
		func_314(uParam0, uParam1);
		func_315(uParam0, uParam1, iVar0, iVar2);
		func_316(uParam0, uParam1, iVar0, iVar3);
		func_317(uParam0, uParam1, iVar0, iVar3, iVar1);
	}
}

void func_188(var uParam0, var uParam1, int iParam2)
{
	if (!func_318(uParam0, iParam2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= (func_52(uParam0) - 1))
	{
		if (func_249(uParam0, iVar0) == 0)
		{
		}
		else
		{
			if (iParam2 != iVar0)
			{
				return;
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		if (func_319(uParam0, iParam2, func_249(uParam0, iParam2)))
		{
			if (func_320(uParam0, uParam1, iParam2))
			{
				func_321(uParam0, uParam1, iParam2, func_249(uParam0, iParam2));
			}
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		iVar2 = func_322(iVar0, 1);
		if (func_319(uParam0, iParam2, iVar2))
		{
			if (func_323(uParam0, uParam1, iParam2, iVar2))
			{
				func_321(uParam0, uParam1, iParam2, iVar2);
				return;
			}
		}
		iVar0++;
	}
}

var func_189(struct<5> Param0, int iParam5)
{
	if (!func_79(Param0, &(Param0.f_1), 42, iParam5, 0, 0))
	{
		return 0;
	}
	return func_324(Param0, iParam5);
}

bool func_190(int iParam0, int iParam1)
{
	return is_bit_set(iParam0, func_325(iParam1, 1));
}

bool func_191()
{
	return func_326() == 4;
}

bool func_192(int iParam0)
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

int func_193(int iParam0)
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

var func_194()
{
	return Global_1131045->f_149.f_1;
}

struct<8> func_195(char* sParam0)
{
	StringCopy(&cVar0, sParam0, 64);
	return cVar0;
}

bool func_196(var uParam0, var uParam1, var uParam2)
{
	if (uParam2->f_6 != *uParam1)
	{
		return false;
	}
	if (uParam2->f_5 == -1)
	{
		return false;
	}
	if (func_137(uParam0, uParam2->f_5) < 4)
	{
		return false;
	}
	return true;
}

void func_197(var uParam0, var uParam1, var uParam2)
{
	if (uParam2->f_8 == 0)
	{
		return;
	}
	if (!func_327(uParam0, uParam2->f_5))
	{
		return;
	}
	if (!func_179(uParam0, uParam2->f_5, uParam2->f_8))
	{
		return;
	}
	func_328(uParam0, uParam1, uParam2->f_5, uParam2->f_8);
}

void func_198(var uParam0, var uParam1, var uParam2)
{
	if (uParam2->f_11 <= 0)
	{
		return;
	}
	if (!_network_is_player_index_valid(uParam2->f_7))
	{
		return;
	}
	if (uParam2->f_9 == 0)
	{
		return;
	}
	if (uParam2->f_10 == 0)
	{
		return;
	}
	if (!func_327(uParam0, uParam2->f_5))
	{
		return;
	}
	if (!func_181(uParam0, uParam2->f_5, uParam2->f_9))
	{
		return;
	}
	func_265(uParam0, uParam1, uParam2->f_5, uParam2->f_11);
	func_262(uParam0, uParam1, uParam2->f_5, uParam2->f_9);
	func_263(uParam0, uParam1, uParam2->f_5, uParam2->f_10);
	func_264(uParam0, uParam1, uParam2->f_5, uParam2->f_7);
}

void func_199(var uParam0, var uParam1, var uParam2)
{
	if (uParam2->f_11 <= 0)
	{
		return;
	}
	if (!_network_is_player_index_valid(uParam2->f_7))
	{
		return;
	}
	if (uParam2->f_9 == 0)
	{
		return;
	}
	if (uParam2->f_10 == 0)
	{
		return;
	}
	if (uParam2->f_8 == 0)
	{
		return;
	}
	if (!func_327(uParam0, uParam2->f_5))
	{
		return;
	}
	if (!func_179(uParam0, uParam2->f_5, uParam2->f_8))
	{
		return;
	}
	if (!func_181(uParam0, uParam2->f_5, uParam2->f_9))
	{
		return;
	}
	func_328(uParam0, uParam1, uParam2->f_5, uParam2->f_8);
	func_329(uParam0, uParam1, uParam2->f_5, uParam2->f_8);
	func_330(uParam0, uParam1, uParam2->f_5, uParam2->f_11);
	func_331(uParam0, uParam1, uParam2->f_5, uParam2->f_9);
	func_332(uParam0, uParam1, uParam2->f_5, uParam2->f_10);
	func_308(uParam0, uParam1, uParam2->f_5, uParam2->f_7);
}

int func_200(vector3 vParam0, var uParam3, var uParam4)
{
	vParam0.f_2 = 67;
	if (!_datafile_get_hash(&uVar0, &vParam0))
	{
		return 0;
	}
	return uVar0;
}

void func_201(var uParam0, var uParam1, int iParam2, int iParam3)
{
	uParam0->f_121[iParam2] = iParam3;
}

void func_202(var uParam0, var uParam1, int iParam2, vector3 vParam3)
{
	uParam0->f_121[iParam2]->f_2 = { vParam3 };
}

float func_203(vector3 vParam0, var uParam3, var uParam4, int iParam5)
{
	vParam0.f_2 = 81;
	if (!_datafile_get_float(&uVar0, &vParam0))
	{
		return 0f;
	}
	return uVar0;
}

void func_204(var uParam0, var uParam1, int iParam2, float fParam3)
{
	uParam0->f_121[iParam2]->f_5 = fParam3;
}

float func_205(vector3 vParam0, var uParam3, var uParam4, int iParam5)
{
	vParam0.f_2 = 70;
	if (!_datafile_get_float(&uVar0, &vParam0))
	{
		return 0f;
	}
	return uVar0;
}

void func_206(var uParam0, var uParam1, int iParam2, float fParam3)
{
	uParam0->f_121[iParam2]->f_6 = fParam3;
}

void func_207(var uParam0, var uParam1, int iParam2, var uParam3)
{
	uParam0->f_121[iParam2]->f_7 = uParam3;
}

Vector3 func_208(var uParam0, int iParam1)
{
	return uParam0->f_121[iParam1]->f_2;
}

int func_209(var uParam0, int iParam1)
{
	return uParam0->f_121[iParam1]->f_7;
}

bool func_210(int iParam0, int iParam1)
{
	return is_bit_set(iParam0, func_333(iParam1, 1));
}

float func_211(var uParam0, int iParam1)
{
	return uParam0->f_121[iParam1]->f_5;
}

var func_212(var uParam0, int iParam1)
{
	return uParam0->f_121[iParam1]->f_6;
}

int func_213(int iParam0)
{
	if (_is_imap_active(iParam0))
	{
		return 1;
	}
	if (func_191())
	{
		return 0;
	}
	_request_imap(iParam0);
	return 0;
}

void func_214(var uParam0, var uParam1, int iParam2, var uParam3)
{
	uParam0->f_104[iParam2]->f_11.f_2 = uParam3;
}

void func_215(var uParam0, var uParam1, int iParam2, var uParam3)
{
	uParam0->f_104[iParam2]->f_11.f_3 = uParam3;
}

bool func_216(var uParam0, int iParam1, var uParam2)
{
	if (!func_78(&Var0))
	{
		return false;
	}
	if (!func_79(Var0, &(Var0.f_1), 15, 0, 0, 1))
	{
		return false;
	}
	if (!func_79(Var0, &(Var0.f_1), 16, func_80(*uParam0), 0, 1))
	{
		return false;
	}
	if (!func_79(Var0, &(Var0.f_1), 25, 0, 0, 0))
	{
		return true;
	}
	if (!func_79(Var0, &(Var0.f_1), 26, iParam1, 0, 0))
	{
		return true;
	}
	if (!func_79(Var0, &(Var0.f_1), 41, 0, 0, 1))
	{
		return false;
	}
	*uParam2 = { func_101(Var0, 1) };
	uParam2->f_3 = { func_108(Var0) };
	uParam2->f_10 = func_189(Var0, 1956494238);
	uParam2->f_11 = func_189(Var0, 391715055);
	return true;
}

bool func_217(int iParam0, int iParam1)
{
	return is_bit_set(iParam0, func_334(iParam1, 1));
}

void func_218(var uParam0, var uParam1, int iParam2, int iParam3)
{
	uParam0->f_104[iParam2] = iParam3;
}

void func_219(var uParam0, var uParam1, int iParam2, int iParam3)
{
	iVar0 = func_58(uParam0, iParam2);
	if (func_190(iParam3, 2047251250))
	{
		freeze_entity_position(iVar0, true);
	}
	if (func_190(iParam3, -672795403))
	{
		set_entity_can_be_damaged(iVar0, false);
		set_entity_proofs(iVar0, 255, false);
	}
	if (func_190(iParam3, -1857841301))
	{
		set_entity_collision(iVar0, false, false);
	}
	if (func_190(iParam3, -479622762))
	{
		_0xc64e597783be9a1d(iVar0, true);
	}
}

bool func_220(var uParam0, int iParam1, var uParam2)
{
	if (!func_78(&Var0))
	{
		return false;
	}
	if (!func_79(Var0, &(Var0.f_1), 15, 0, 0, 1))
	{
		return false;
	}
	if (!func_79(Var0, &(Var0.f_1), 16, func_80(*uParam0), 0, 1))
	{
		return false;
	}
	if (!func_79(Var0, &(Var0.f_1), 25, 0, 0, 0))
	{
		return true;
	}
	if (!func_79(Var0, &(Var0.f_1), 26, iParam1, 0, 0))
	{
		return true;
	}
	if (!func_79(Var0, &(Var0.f_1), 41, 0, 0, 1))
	{
		return false;
	}
	uParam2->f_6 = { func_101(Var0, 1) };
	*uParam2 = { func_335(Var0) };
	uParam2->f_3 = { func_336(Var0) };
	uParam2->f_10 = func_189(Var0, 1956494238);
	uParam2->f_11 = func_189(Var0, 391715055);
	return true;
}

bool func_221(var uParam0, int iParam1, var uParam2)
{
	if (!func_78(&Var0))
	{
		return false;
	}
	if (!func_79(Var0, &(Var0.f_1), 15, 0, 0, 1))
	{
		return false;
	}
	if (!func_79(Var0, &(Var0.f_1), 16, func_80(*uParam0), 0, 1))
	{
		return false;
	}
	if (!func_79(Var0, &(Var0.f_1), 25, 0, 0, 0))
	{
		return true;
	}
	if (!func_79(Var0, &(Var0.f_1), 26, iParam1, 0, 0))
	{
		return true;
	}
	if (!func_79(Var0, &(Var0.f_1), 41, 0, 0, 1))
	{
		return false;
	}
	uParam2->f_6 = { func_101(Var0, 1) };
	uParam2->f_9 = func_205(Var0, 1);
	uParam2->f_10 = func_189(Var0, 1956494238);
	uParam2->f_11 = func_189(Var0, 391715055);
	return true;
}

int func_222(int iParam0, vector3 vParam1, var uParam4)
{
	iVar0 = create_itemset(true);
	iVar3 = _0x59b57c4b06531e1e(vParam1, uParam4, iVar0, 3);
	iVar2 = 0;
	while (iVar2 <= (iVar3 - 1))
	{
		iVar1 = _0x18013392501ce5dc(get_indexed_item_in_itemset(iVar2, iVar0));
		if (!does_entity_exist(iVar1))
		{
		}
		else if (iParam0 != get_entity_model(iVar1))
		{
		}
		else
		{
			bVar4 = true;
		}
		else
		{
			iVar2++;
		}
	}
	if (!bVar4)
	{
		iVar1 = 0;
	}
	_0x20a4bf0e09bee146(iVar0);
	destroy_itemset(iVar0);
	return iVar1;
}

void func_223(var uParam0, var uParam1, int iParam2, vector3 vParam3)
{
	uParam0->f_104[iParam2]->f_5 = { vParam3 };
}

void func_224(var uParam0, var uParam1, int iParam2, vector3 vParam3)
{
	uParam0->f_104[iParam2]->f_8 = { vParam3 };
}

void func_225(var uParam0, var uParam1, int iParam2, var uParam3)
{
	uParam0->f_13[iParam2]->f_4.f_2 = uParam3;
}

void func_226(var uParam0, var uParam1, int iParam2, var uParam3)
{
	uParam0->f_13[iParam2]->f_4.f_3 = uParam3;
}

void func_227(struct<5> Param0, var uParam5)
{
	uVar3 = Param0.f_1;
	iVar1 = func_103(Param0, 2);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Param0.f_1 = uVar3;
		if (!func_79(Param0, &(Param0.f_1), 23, iVar0, 0, 1))
		{
		}
		else
		{
			uParam5->f_4[iVar2] = func_337(Param0);
			uParam5->f_2[iVar2] = func_338(Param0);
			(*uParam5)[iVar2] = func_339(Param0);
			iVar2++;
		}
		iVar0++;
	}
	uParam5->f_6 = iVar2;
}

void func_228(var uParam0, var uParam1, int iParam2, var uParam3)
{
	_copy_memory(&(uParam0->f_13[iParam2]->f_8), uParam3, 7);
}

int func_229(vector3 vParam0, var uParam3, var uParam4)
{
	vParam0.f_2 = 49;
	if (!_datafile_get_hash(&uVar0, &vParam0))
	{
		return 0;
	}
	return uVar0;
}

int func_230(vector3 vParam0, var uParam3, var uParam4)
{
	vParam0.f_2 = 80;
	if (!_datafile_get_bool(&uVar0, &vParam0))
	{
		return 0;
	}
	return uVar0;
}

void func_231(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (func_341(&(uParam0->f_13[iParam2]->f_47.f_8), func_340(iParam3, 1), 1))
	{
	}
}

void func_232(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (func_341(&(uParam0->f_13[iParam2]->f_47.f_10), func_340(iParam3, 1), 1))
	{
	}
}

bool func_233(var uParam0, var uParam1, int iParam2)
{
	if (!func_78(&Var0))
	{
		return false;
	}
	if (!func_79(Var0, &(Var0.f_1), 15, 0, 0, 1))
	{
		return false;
	}
	if (!func_79(Var0, &(Var0.f_1), 16, func_80(*uParam0), 0, 1))
	{
		return false;
	}
	if (!func_79(Var0, &(Var0.f_1), 17, 0, 0, 0))
	{
		return true;
	}
	if (!func_79(Var0, &(Var0.f_1), 18, iParam2, 0, 0))
	{
		return true;
	}
	uVar5 = Var0.f_1;
	if (!func_79(Var0, &(Var0.f_1), 41, 0, 0, 1))
	{
		return false;
	}
	*uParam1 = func_342(Var0);
	uParam1->f_1 = { func_101(Var0, 1) };
	uParam1->f_4 = func_343(Var0);
	uParam1->f_5 = func_189(Var0, -344945370);
	return true;
}

bool func_234(int iParam0, int iParam1)
{
	return is_bit_set(iParam0, func_344(iParam1, 1));
}

bool func_235(int iParam0)
{
	return iParam0 != 0;
}

int func_236(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, false, false);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_345(iVar0, iParam0, bParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

int func_237(var uParam0, int iParam1)
{
	return uParam0->f_13[iParam1]->f_8.f_6;
}

int func_238(var uParam0, int iParam1, int iParam2)
{
	return &(uParam0->f_13[iParam1]->f_8.f_2[iParam2]);
}

int func_239(var uParam0, int iParam1, int iParam2)
{
	return &(uParam0->f_13[iParam1]->f_8.f_4[iParam2]);
}

int func_240(var uParam0, int iParam1, int iParam2)
{
	return &(uParam0->f_13[iParam1]->f_8[iParam2]);
}

void func_241(var uParam0, var uParam1, int iParam2, int iParam3)
{
	uParam0->f_13[iParam2] = iParam3;
}

bool func_242(var uParam0, var uParam1, int iParam2)
{
	if (!func_78(&Var0))
	{
		return false;
	}
	if (!func_79(Var0, &(Var0.f_1), 15, 0, 0, 1))
	{
		return false;
	}
	if (!func_79(Var0, &(Var0.f_1), 16, func_80(*uParam0), 0, 1))
	{
		return false;
	}
	if (!func_79(Var0, &(Var0.f_1), 17, 0, 0, 1))
	{
		return false;
	}
	if (!func_79(Var0, &(Var0.f_1), 18, iParam2, 0, 1))
	{
		return false;
	}
	if (!func_79(Var0, &(Var0.f_1), 19, 0, 0, 1))
	{
		return false;
	}
	uVar5 = Var0.f_1;
	*uParam1 = func_346(Var0);
	uParam1->f_1 = func_347(Var0);
	uParam1->f_1.f_1 = { func_101(Var0, 1) };
	switch (*uParam1)
	{
		case 1927688563:
			uParam1->f_1.f_4 = func_343(Var0);
			break;
		case 438717698:
			uParam1->f_1.f_4 = func_205(Var0, 1);
			break;
		default:
			return false;
	}
	Var0.f_1 = uVar5;
	if (func_79(Var0, &(Var0.f_1), 21, 0, 0, 0))
	{
		uParam1->f_21 = func_348(Var0);
		uParam1->f_21.f_1 = { func_349(Var0) };
	}
	if (*uParam1 != 1927688563)
	{
		return true;
	}
	Var0.f_1 = uVar5;
	if (func_79(Var0, &(Var0.f_1), 20, 0, 0, 0))
	{
		uParam1->f_7 = 1;
		uParam1->f_7.f_1 = func_94(Var0);
		uParam1->f_7.f_2 = { func_101(Var0, 1) };
		uParam1->f_7.f_5 = func_205(Var0, 1);
		uParam1->f_7.f_6 = { func_350(Var0) };
	}
	Var0.f_1 = uVar5;
	uParam1->f_1.f_5 = func_189(Var0, -451340701);
	return true;
}

int func_243(int iParam0, vector3 vParam1, float fParam4)
{
	iVar7 = _get_scenario_point_close_to_coords(vParam1, fParam4, &uVar0, 5);
	if (iVar7 <= 0)
	{
		return 0;
	}
	iVar8 = iParam0;
	iVar6 = 0;
	while (iVar6 <= (iVar7 - 1))
	{
		if (!_does_scenario_point_exist(&(uVar0[iVar6])))
		{
		}
		else if (_get_scenario_point_type(&(uVar0[iVar6])) != iVar8)
		{
		}
		else
		{
			return &(uVar0[iVar6]);
		}
		iVar6++;
	}
	return 0;
}

bool func_244(int iParam0, int iParam1)
{
	return is_bit_set(iParam0, func_351(iParam1, 1));
}

void func_245(var uParam0, var uParam1, int iParam2, int iParam3)
{
	uParam0->f_13[iParam2]->f_19 = iParam3;
}

void func_246(var uParam0, var uParam1, int iParam2, var uParam3)
{
	uParam0->f_13[iParam2]->f_19.f_1 = uParam3;
}

void func_247(var uParam0, var uParam1, int iParam2, var uParam3)
{
	uParam0->f_13[iParam2]->f_19.f_2 = uParam3;
}

void func_248(var uParam0, var uParam1, int iParam2, struct<8> Param3)
{
	uParam0->f_13[iParam2]->f_19.f_3 = { Param3 };
}

int func_249(var uParam0, int iParam1)
{
	return uParam0->f_13[iParam1]->f_47.f_18;
}

void func_250(var uParam0, var uParam1, int iParam2, int iParam3)
{
	uParam0->f_13[iParam2]->f_30.f_13 = iParam3;
}

void func_251(var uParam0, var uParam1, int iParam2, int iParam3)
{
	uParam0->f_13[iParam2]->f_30.f_12 = iParam3;
}

void func_252(var uParam0, var uParam1, int iParam2, int iParam3)
{
	uParam0->f_13[iParam2]->f_30.f_5 = iParam3;
}

void func_253(var uParam0, var uParam1, int iParam2, int iParam3)
{
	uParam0->f_13[iParam2]->f_30.f_6 = iParam3;
}

void func_254(var uParam0, var uParam1, int iParam2, int iParam3)
{
	uParam0->f_13[iParam2]->f_30.f_7 = iParam3;
}

void func_255(var uParam0, var uParam1, int iParam2, int iParam3)
{
	uParam0->f_13[iParam2]->f_30.f_4 = iParam3;
}

void func_256(var uParam0, var uParam1, int iParam2, int iParam3)
{
	uParam0->f_13[iParam2]->f_30.f_3 = iParam3;
}

struct<8> func_257(var uParam0, int iParam1)
{
	return uParam0->f_13[iParam1]->f_19.f_3;
}

bool func_258(var uParam0, int iParam1)
{
	uVar0 = func_57(uParam0, iParam1);
	return is_ped_active_in_scenario(uVar0, 0);
}

int func_259(var uParam0, int iParam1)
{
	return uParam0->f_13[iParam1]->f_30.f_9;
}

int func_260(var uParam0, int iParam1)
{
	return uParam0->f_13[iParam1]->f_30.f_11;
}

int func_261(var uParam0, int iParam1)
{
	return uParam0->f_13[iParam1]->f_30.f_10;
}

void func_262(var uParam0, var uParam1, int iParam2, int iParam3)
{
	uParam0->f_13[iParam2]->f_30.f_8 = iParam3;
}

void func_263(var uParam0, var uParam1, int iParam2, int iParam3)
{
	uParam0->f_13[iParam2]->f_30.f_9 = iParam3;
}

void func_264(var uParam0, var uParam1, int iParam2, int iParam3)
{
	uParam0->f_13[iParam2]->f_30.f_11 = iParam3;
}

void func_265(var uParam0, var uParam1, int iParam2, int iParam3)
{
	uParam0->f_13[iParam2]->f_30.f_10 = iParam3;
}

var func_266(var uParam0, int iParam1)
{
	return uParam0->f_13[iParam1]->f_30.f_6;
}

int func_267(var uParam0, int iParam1)
{
	return uParam0->f_13[iParam1]->f_30.f_7;
}

void func_268(var uParam0, var uParam1, int iParam2, int iParam3, var uParam4, int iParam5, bool bParam6)
{
	iVar0 = func_57(uParam0, iParam2);
	if (_0x916b8e075abc8b4e(iVar0, 1) && !bParam6)
	{
		return;
	}
	iVar1 = get_player_ped(iParam5);
	_0xe7fa07624574b79a(iVar0, iVar1, iParam3, uParam4, -1f, 1, 0, 1, 1);
}

bool func_269(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_57(uParam0, iParam1);
	return _0x916b8e075abc8b4e(iVar0, iParam2);
}

int func_270(var uParam0, int iParam1)
{
	return uParam0->f_13[iParam1]->f_30.f_3;
}

int func_271(var uParam0, int iParam1)
{
	return uParam0->f_13[iParam1]->f_30.f_4;
}

void func_272(var uParam0, var uParam1, int iParam2, var uParam3)
{
	iVar0 = func_57(uParam0, iParam2);
	if (!_0x916b8e075abc8b4e(iVar0, 0))
	{
		return;
	}
	_0x541e5b41dca45828(iVar0, func_266(uParam0, iParam2), 1);
}

bool func_273(var uParam0, int iParam1)
{
	uVar0 = func_57(uParam0, iParam1);
	return _0x02ebbb3989b7e695(uVar0);
}

int func_274(var uParam0, int iParam1)
{
	return uParam0->f_13[iParam1]->f_47.f_18.f_2;
}

var func_275(var uParam0, int iParam1)
{
	return uParam0->f_13[iParam1]->f_47.f_18.f_3;
}

int func_276(var uParam0, int iParam1)
{
	return uParam0->f_13[iParam1]->f_47.f_18.f_1;
}

void func_277(var uParam0, var uParam1, int iParam2, int iParam3)
{
	uParam0->f_13[iParam2]->f_47.f_18.f_4 = iParam3;
}

int func_278(var uParam0, int iParam1)
{
	return uParam0->f_13[iParam1]->f_47.f_18.f_4;
}

int func_279(var uParam0, int iParam1)
{
	return uParam0->f_13[iParam1]->f_47.f_18.f_5;
}

int func_280(var uParam0)
{
	return uParam0->f_136.f_4;
}

int func_281(var uParam0)
{
	return uParam0->f_136;
}

void func_282(var uParam0, var uParam1, int iParam2)
{
	func_329(uParam0, uParam1, iParam2, 0);
	func_277(uParam0, uParam1, iParam2, 0);
	func_330(uParam0, uParam1, iParam2, 0);
	func_331(uParam0, uParam1, iParam2, 0);
	func_332(uParam0, uParam1, iParam2, 0);
	func_308(uParam0, uParam1, iParam2, 255);
}

int func_283(var uParam0, int iParam1)
{
	return uParam0->f_13[iParam1]->f_30.f_2;
}

int func_284(var uParam0, int iParam1)
{
	return uParam0->f_13[iParam1]->f_30.f_1;
}

void func_285(var uParam0, int iParam1)
{
	func_352(uParam0, iParam1);
}

bool func_286(var uParam0, int iParam1, int iParam2)
{
	return func_353(&(uParam0->f_13[iParam1]->f_47.f_8), func_340(iParam2, 1), 1);
}

bool func_287(var uParam0, int iParam1, int iParam2)
{
	return func_353(&(uParam0->f_13[iParam1]->f_47.f_12), func_340(iParam2, 1), 1);
}

bool func_288(var uParam0, int iParam1, int iParam2)
{
	return func_353(&(uParam0->f_13[iParam1]->f_47.f_10), func_340(iParam2, 1), 1);
}

int func_289(var uParam0, int iParam1, int iParam2)
{
	return &(uParam0->f_13[iParam1]->f_47.f_24[func_340(iParam2, 1)]);
}

int func_290(int iParam0)
{
	switch (iParam0)
	{
		case -1340199114:
			return 3;
		case 1960114521:
			return 3;
		case 1526847194:
			return 3;
		case 1730381531:
			return 3;
		default:
			break;
	}
	return 0;
}

int func_291(int iParam0)
{
	switch (iParam0)
	{
		case -1340199114:
			return -1196486071;
		case 1960114521:
			return -1931716778;
		case 1526847194:
			return 664793774;
		case 1730381531:
			return 1532606305;
		default:
			break;
	}
	return iParam0;
}

bool func_292(var uParam0)
{
	if (func_354(uParam0) != 0)
	{
		return (get_game_timer() - func_355(uParam0)) >= 1000;
	}
	return true;
}

bool func_293(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_286(uParam0, iParam1, iParam2))
	{
		return false;
	}
	if (bParam3)
	{
		if (func_319(uParam0, iParam1, iParam2))
		{
			return false;
		}
	}
	if (func_287(uParam0, iParam1, iParam2))
	{
		if (!func_288(uParam0, iParam1, iParam2))
		{
			return false;
		}
	}
	iVar0 = get_game_timer();
	if (func_356(uParam0, iParam1) != 0)
	{
		if ((iVar0 - func_357(uParam0, iParam1)) < 3000)
		{
			return false;
		}
	}
	iVar1 = func_307(iParam2);
	if (iVar1 == -1)
	{
		return false;
	}
	else if (func_358(uParam0, iParam1, iVar1))
	{
		if (iVar0 - func_359(uParam0, iParam1, iVar1)) < func_360(iVar1)
		{
			return false;
		}
	}
	return true;
}

bool func_294(var uParam0, int iParam1)
{
	return (uParam0->f_13[iParam1]->f_3 != 0 && uParam0->f_13[iParam1]->f_3 != -1);
}

int func_295(var uParam0, var uParam1, int iParam2, int iParam3)
{
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = 255;
	if (!func_179(uParam0, iParam2, iParam3))
	{
		return 0;
	}
	func_296(uParam1, 0, iParam2, &Var0);
	Var0.f_8 = iParam3;
	Var0.f_7 = player_id();
	func_298(&uVar12);
	func_299(uParam0, uParam1, &Var0, uVar12);
	return 1;
}

void func_296(var uParam0, int iParam1, int iParam2, var uParam3)
{
	uParam3->f_4 = iParam1;
	uParam3->f_6 = *uParam0;
	uParam3->f_5 = iParam2;
}

var func_297(int iParam0)
{
	iVar0 = func_361(iParam0);
	iVar1 = func_362(iParam0);
	return get_random_int_in_range(iVar0, iVar1) * 1000;
}

void func_298(var uParam0)
{
	*uParam0 = func_363(_0x901e0dc25080c8b9(player_id()));
}

void func_299(var uParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam2 = 195;
	uParam2->f_1 = player_id();
	uParam2->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam2, 12, 6, &uParam3);
	func_364(uParam0, uParam1, uParam2->f_4);
	func_365(uParam0, uParam1, uParam2->f_4);
}

int func_300(var uParam0, int iParam1)
{
	return uParam0->f_13[iParam1]->f_30.f_13;
}

int func_301(var uParam0, int iParam1)
{
	return uParam0->f_13[iParam1]->f_30.f_12;
}

bool func_302(int iParam0)
{
	vVar0 = { get_entity_coords(iParam0, true, false) };
	if (func_168(vVar0, Global_35) < 5f)
	{
		return false;
	}
	return !is_sphere_visible(vVar0, 1f);
}

void func_303(var uParam0, var uParam1)
{
	if (func_366(uParam1->f_2, -1626240863))
	{
		if (func_367(uParam0->f_1, 1))
		{
			uParam1->f_1 = (uParam1->f_1 || func_368(-1626240863));
		}
	}
}

void func_304(var uParam0, int iParam1, var uParam2)
{
	if (uParam2->f_1 != 0)
	{
		*uParam2 |= -2147483648;
	}
}

void func_305(int iParam0, bool bParam1)
{
	if (bParam1 == is_entity_visible(iParam0))
	{
		return;
	}
	set_entity_visible(iParam0, bParam1);
	set_entity_collision(iParam0, bParam1, false);
	if (!is_entity_attached(iParam0))
	{
		freeze_entity_position(iParam0, !bParam1);
	}
}

bool func_306(var uParam0)
{
	if (func_280(uParam0) == 0)
	{
		return false;
	}
	switch (func_369(uParam0))
	{
		case 963581738:
			return is_any_speech_playing(func_57(uParam0, func_281(uParam0)));
		case 479504197:
			return func_372(func_371(func_370(uParam0)));
		default:
			break;
	}
	return false;
}

int func_307(int iParam0)
{
	switch (iParam0)
	{
		case -1340199114:
			return 0;
		case -1196486071:
			return 0;
		case 1908544294:
			return 4;
		case 1960114521:
			return 3;
		case -1931716778:
			return 3;
		case 1526847194:
			return 2;
		case 664793774:
			return 2;
		case 1730381531:
			return 1;
		case 1532606305:
			return 1;
		default:
			break;
	}
	return -1;
}

void func_308(var uParam0, var uParam1, int iParam2, int iParam3)
{
	uParam0->f_13[iParam2]->f_47.f_18.f_1 = iParam3;
}

void func_309(var uParam0, var uParam1)
{
	_copy_memory(&(uParam0->f_136.f_7), &(uParam0->f_136), 7);
}

void func_310(var uParam0, var uParam1, int iParam2)
{
	uParam0->f_136.f_14 = iParam2;
}

void func_311(var uParam0, var uParam1, int iParam2, int iParam3)
{
	uParam0->f_13[iParam2]->f_47.f_17 = iParam3;
}

void func_312(var uParam0, var uParam1, int iParam2, int iParam3)
{
	uParam0->f_13[iParam2]->f_47.f_16 = iParam3;
}

void func_313(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (func_341(&(uParam0->f_13[iParam2]->f_47.f_12), func_340(iParam3, 1), 1))
	{
	}
}

void func_314(var uParam0, var uParam1)
{
	uVar0 = -1;
	_copy_memory(&(uParam0->f_136), &uVar0, 7);
}

void func_315(var uParam0, var uParam1, int iParam2, int iParam3)
{
	uParam0->f_13[iParam2]->f_47.f_24[func_340(iParam3, 1)] = &uParam0->f_13[iParam2]->f_47.f_24[func_340(iParam3, 1)] + 1;
}

void func_316(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (func_341(&(uParam0->f_13[iParam2]->f_47.f_40), iParam3, 1))
	{
	}
}

void func_317(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	uParam0->f_13[iParam2]->f_47.f_34[iParam3] = iParam4;
}

bool func_318(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		if (&uParam0->f_13[iParam1]->f_47.f_14[iVar0] != 0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_319(var uParam0, int iParam1, int iParam2)
{
	return func_353(&(uParam0->f_13[iParam1]->f_47.f_14), func_340(iParam2, 1), 1);
}

bool func_320(var uParam0, var uParam1, int iParam2)
{
	switch (func_144(uParam0, iParam2))
	{
		case 5:
			break;
		default:
			return false;
	}
	return func_323(uParam0, uParam1, iParam2, func_249(uParam0, iParam2));
}

void func_321(var uParam0, var uParam1, int iParam2, int iParam3)
{
	iVar2 = func_307(iParam3);
	if (iVar2 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		iVar1 = func_322(iVar0, 1);
		if (func_307(iVar1) == iVar2)
		{
			func_373(uParam0, uParam1, iParam2, iVar1);
		}
		iVar0++;
	}
}

int func_322(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 664793774;
		case 1:
			return 1526847194;
		case 2:
			return -1196486071;
		case 3:
			return -1340199114;
		case 4:
			return 1532606305;
		case 5:
			return 1730381531;
		case 6:
			return -1931716778;
		case 7:
			return 1960114521;
		case 8:
			return 1908544294;
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

bool func_323(var uParam0, var uParam1, int iParam2, int iParam3)
{
	Var0 = -1;
	Var0 = iParam2;
	Var0.f_4 = iParam3;
	if (!func_374(uParam1, &Var0))
	{
		return false;
	}
	switch (Var0.f_6)
	{
		case 963581738:
			bVar7 = func_375(func_57(uParam0, iParam2), &(Var0.f_1), -1254440351, 0, 0, 0, 0, 0);
			break;
		case 479504197:
			func_376(uParam0);
			bVar7 = func_377(&(uParam0->f_136.f_15), Var0.f_1, 0, -1, 0, 0);
			break;
		default:
			return false;
	}
	if (!bVar7)
	{
		return false;
	}
	func_378(uParam0, uParam1, Var0);
	func_379(uParam0, uParam1, Var0.f_4);
	func_380(uParam0, uParam1, Var0.f_1);
	func_381(uParam0, uParam1, Var0.f_6);
	func_382(uParam0, uParam1, get_game_timer());
	return true;
}

var func_324(struct<5> Param0, int iParam5)
{
	uVar5 = Param0.f_1;
	iVar4 = func_103(Param0, 11);
	iVar3 = 0;
	while (iVar3 <= (iVar4 - 1))
	{
		Param0.f_1 = uVar5;
		if (!func_79(Param0, &(Param0.f_1), 44, iVar3, 0, 1))
		{
		}
		else
		{
			Param0.f_2 = 54;
			if (!_datafile_get_hash(&iVar1, &Param0))
			{
			}
			else if (iVar1 == 0)
			{
			}
			else
			{
				switch (iParam5)
				{
					case 1956494238:
						iVar2 = func_325(iVar1, 1);
						break;
					case -344945370:
						iVar2 = func_344(iVar1, 1);
						break;
					case -451340701:
						iVar2 = func_351(iVar1, 1);
						break;
					case -562054818:
						iVar2 = func_383(iVar1, 1);
						break;
					case 1275965103:
						iVar2 = func_384(iVar1, 1);
						break;
					case -1256669479:
						iVar2 = func_385(iVar1, 1);
						break;
					case 391715055:
						iVar2 = func_334(iVar1, 1);
						break;
					case -1118957050:
						iVar2 = func_333(iVar1, 1);
						break;
					default:
						break;
				}
				if (iVar2 == -1)
				{
				}
				else
				{
					set_bit(&uVar0, iVar2);
				}
			}
		}
		iVar3++;
	}
	return uVar0;
}

int func_325(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1857841301:
			return 2;
		case -672795403:
			return 1;
		case -479622762:
			return 3;
		case 2047251250:
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

int func_326()
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

bool func_327(var uParam0, int iParam1)
{
	return is_entity_visible(func_57(uParam0, iParam1));
}

void func_328(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (func_341(&(uParam0->f_13[iParam2]->f_47.f_14), func_340(iParam3, 1), 1))
	{
	}
}

void func_329(var uParam0, var uParam1, int iParam2, int iParam3)
{
	uParam0->f_13[iParam2]->f_47.f_18 = iParam3;
}

void func_330(var uParam0, var uParam1, int iParam2, int iParam3)
{
	uParam0->f_13[iParam2]->f_47.f_18.f_5 = iParam3;
}

void func_331(var uParam0, var uParam1, int iParam2, int iParam3)
{
	uParam0->f_13[iParam2]->f_47.f_18.f_2 = iParam3;
}

void func_332(var uParam0, var uParam1, int iParam2, int iParam3)
{
	uParam0->f_13[iParam2]->f_47.f_18.f_3 = iParam3;
}

int func_333(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -309101810:
			return 0;
		case 1267291313:
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

int func_334(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1682696311:
			return 0;
		case -1143675091:
			return 1;
		case -245841168:
			return 2;
		case 505853239:
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

Vector3 func_335(vector3 vParam0, var uParam3, var uParam4)
{
	vParam0.f_2 = 63;
	if (!_datafile_get_vector(&vVar0, &vParam0))
	{
		return 0f, 0f, 0f;
	}
	return vVar0;
}

Vector3 func_336(vector3 vParam0, var uParam3, var uParam4)
{
	vParam0.f_2 = 65;
	if (!_datafile_get_vector(&vVar0, &vParam0))
	{
		return 0f, 0f, 0f;
	}
	return vVar0;
}

int func_337(vector3 vParam0, var uParam3, var uParam4)
{
	vParam0.f_2 = 74;
	if (!_datafile_get_hash(&uVar0, &vParam0))
	{
		return 0;
	}
	return uVar0;
}

int func_338(vector3 vParam0, var uParam3, var uParam4)
{
	vParam0.f_2 = 75;
	if (!_datafile_get_hash(&iVar0, &vParam0))
	{
		return 29;
	}
	return func_386(iVar0);
}

int func_339(vector3 vParam0, var uParam3, var uParam4)
{
	vParam0.f_2 = 76;
	if (!_datafile_get_hash(&uVar0, &vParam0))
	{
		return 0;
	}
	return uVar0;
}

int func_340(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1931716778:
			return 6;
		case -1340199114:
			return 3;
		case -1196486071:
			return 2;
		case 664793774:
			return 0;
		case 1526847194:
			return 1;
		case 1532606305:
			return 4;
		case 1730381531:
			return 5;
		case 1908544294:
			return 8;
		case 1960114521:
			return 7;
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

bool func_341(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

int func_342(vector3 vParam0, var uParam3, var uParam4)
{
	vParam0.f_2 = 53;
	if (!_datafile_get_hash(&uVar0, &vParam0))
	{
		return 0;
	}
	return uVar0;
}

float func_343(vector3 vParam0, var uParam3, var uParam4)
{
	vParam0.f_2 = 58;
	if (!_datafile_get_float(&uVar0, &vParam0))
	{
		return 0f;
	}
	return uVar0;
}

int func_344(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1395267550:
			return 1;
		case 1833117953:
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

void func_345(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
			func_387(iParam0, 0, 1);
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
			func_388(iParam0, 0);
			bVar0 = true;
		}
		func_389(iParam0, bParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

int func_346(vector3 vParam0, var uParam3, var uParam4)
{
	vParam0.f_2 = 55;
	if (!_datafile_get_hash(&uVar0, &vParam0))
	{
		return 0;
	}
	return uVar0;
}

int func_347(vector3 vParam0, var uParam3, var uParam4)
{
	vParam0.f_2 = 56;
	if (!_datafile_get_hash(&uVar0, &vParam0))
	{
		return 0;
	}
	return uVar0;
}

int func_348(vector3 vParam0, var uParam3, var uParam4)
{
	vParam0.f_2 = 60;
	if (!_datafile_get_int(&uVar0, &vParam0))
	{
		return 0;
	}
	return uVar0;
}

struct<8> func_349(vector3 vParam0, var uParam3, var uParam4)
{
	vParam0.f_2 = 60;
	if (!_datafile_get_string(&Var0, &vParam0))
	{
		return func_195("");
	}
	return Var0;
}

struct<8> func_350(vector3 vParam0, var uParam3, var uParam4)
{
	vParam0.f_2 = 77;
	if (!_datafile_get_string(&Var0, &vParam0))
	{
		return func_195("");
	}
	return Var0;
}

int func_351(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1141253079:
			return 0;
		case 841757915:
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

void func_352(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_353(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_354(var uParam0)
{
	return uParam0->f_136.f_7.f_4;
}

int func_355(var uParam0)
{
	return uParam0->f_136.f_14;
}

int func_356(var uParam0, int iParam1)
{
	return uParam0->f_13[iParam1]->f_47.f_17;
}

int func_357(var uParam0, int iParam1)
{
	return uParam0->f_13[iParam1]->f_47.f_16;
}

bool func_358(var uParam0, int iParam1, int iParam2)
{
	return func_353(&(uParam0->f_13[iParam1]->f_47.f_40), iParam2, 1);
}

int func_359(var uParam0, int iParam1, int iParam2)
{
	return &(uParam0->f_13[iParam1]->f_47.f_34[iParam2]);
}

int func_360(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7000;
		case 4:
			return 20000;
		case 3:
			return 11000;
		case 2:
			return 7000;
		case 1:
			return 9000;
		default:
			break;
	}
	return 0;
}

int func_361(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 5;
		case 2:
			return 7;
		case 3:
			return 9;
		default:
			break;
	}
	return 0;
}

int func_362(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 7;
		case 2:
			return 9;
		case 3:
			return 11;
		default:
			break;
	}
	return 0;
}

var func_363(var uParam0)
{
	iVar51 = _0xd1bf325c8252a982(uParam0, &Var0);
	if (iVar51 == 0)
	{
		return uVar50;
	}
	iVar52 = 0;
	iVar52 = 0;
	while (iVar52 <= (iVar51 - 1))
	{
		iVar53 = network_get_player_from_gamer_handle(Var0[iVar52]);
		if (network_is_player_active(iVar53))
		{
			_0x31010318ba9897ac(&uVar50, iVar53);
		}
		iVar52++;
	}
	return uVar50;
}

void func_364(var uParam0, var uParam1, int iParam2)
{
	uParam0->f_249.f_7[iParam2] = 1;
}

void func_365(var uParam0, var uParam1, int iParam2)
{
	iVar0 = get_game_timer();
	uParam0->f_249.f_3[iParam2] = iVar0;
}

bool func_366(int iParam0, int iParam1)
{
	return is_bit_set(iParam0, func_384(iParam1, 1));
}

bool func_367(int iParam0, int iParam1)
{
	return ((*Global_1131045)[iParam0]->f_9 && iParam1) != 0;
}

var func_368(int iParam0)
{
	set_bit(&uVar0, func_384(iParam0, 1));
	return uVar0;
}

int func_369(var uParam0)
{
	return uParam0->f_136.f_6;
}

Vector3 func_370(var uParam0)
{
	return uParam0->f_136.f_1;
}

var func_371(var uParam0, var uParam1, var uParam2)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

int func_372(var uParam0)
{
	if (_0xd89504d9d7d5057d(uParam0) && _0x1ecc76792f661cf5(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_373(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (func_390(&(uParam0->f_13[iParam2]->f_47.f_14), func_340(iParam3, 1), 1))
	{
	}
}

bool func_374(var uParam0, var uParam1)
{
	if (!func_78(&Var0))
	{
		return false;
	}
	if (!func_79(Var0, &(Var0.f_1), 15, 0, 0, 1))
	{
		return false;
	}
	if (!func_79(Var0, &(Var0.f_1), 16, func_80(*uParam0), 0, 1))
	{
		return false;
	}
	if (!func_79(Var0, &(Var0.f_1), 17, 0, 0, 1))
	{
		return false;
	}
	if (!func_79(Var0, &(Var0.f_1), 18, *uParam1, 0, 1))
	{
		return false;
	}
	if (!func_79(Var0, &(Var0.f_1), 24, 0, 0, 1))
	{
		return false;
	}
	if (!func_79(Var0, &(Var0.f_1), 47, uParam1->f_4, 0, 1))
	{
		return false;
	}
	uParam1->f_6 = func_391(Var0);
	uParam1->f_1 = { func_392(Var0) };
	return true;
}

bool func_375(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = uParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_393(iParam0, &Var0);
}

void func_376(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (func_52(uParam0) - 1))
	{
		iVar1 = func_57(uParam0, iVar0);
		if (!does_entity_exist(iVar1))
		{
		}
		else if (!is_entity_visible(iVar1))
		{
		}
		else
		{
			Var2 = { func_394(uParam0, iVar0) };
			if (_0x375f5870a7b8bec1(&Var2))
			{
			}
			else
			{
				func_395(&(uParam0->f_136.f_15), iVar1, &Var2, 0);
			}
		}
		iVar0++;
	}
}

bool func_377(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (!_0xd89504d9d7d5057d(&vParam1))
	{
		bVar0 = create_new_scripted_conversation(&vParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_396(vParam1, uParam0);
		if (bParam6)
		{
			preload_script_conversation(&vParam1, true, true, bParam7);
		}
		else
		{
			start_script_conversation(&vParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			_0x40ca665ab9d8d505(&vParam1, iParam5);
		}
	}
	return bVar0;
}

void func_378(var uParam0, var uParam1, var uParam2)
{
	uParam0->f_136 = uParam2;
}

void func_379(var uParam0, var uParam1, var uParam2)
{
	uParam0->f_136.f_4 = uParam2;
}

void func_380(var uParam0, var uParam1, vector3 vParam2)
{
	uParam0->f_136.f_1 = { vParam2 };
}

void func_381(var uParam0, var uParam1, var uParam2)
{
	uParam0->f_136.f_6 = uParam2;
}

void func_382(var uParam0, var uParam1, int iParam2)
{
	uParam0->f_136.f_5 = iParam2;
}

int func_383(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1453140709:
			return 8;
		case -1155906572:
			return 5;
		case -907098195:
			return 7;
		case -560457212:
			return 3;
		case -540896632:
			return 4;
		case 331632914:
			return 9;
		case 874525785:
			return 0;
		case 1152024837:
			return 10;
		case 1304227765:
			return 2;
		case 1919038356:
			return 1;
		case 1955535331:
			return 6;
		case 1960114521:
			return 11;
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

int func_384(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1626240863:
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

int func_385(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -421745099:
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

int func_386(int iParam0)
{
	switch (iParam0)
	{
		case -616875146:
			return 2;
		case -240820054:
			return 3;
		default:
			break;
	}
	return 29;
}

void func_387(int iParam0, bool bParam1, bool bParam2)
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

void func_388(int iParam0, bool bParam1)
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

void func_389(int iParam0, bool bParam1)
{
	if (bParam1 == 1)
	{
		_set_ped_face_feature(iParam0, 41611, 0f);
	}
	else
	{
		_set_ped_face_feature(iParam0, 41611, 1f);
	}
}

bool func_390(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

int func_391(vector3 vParam0, var uParam3, var uParam4)
{
	vParam0.f_2 = 78;
	if (!_datafile_get_hash(&uVar0, &vParam0))
	{
		return 0;
	}
	return uVar0;
}

Vector3 func_392(vector3 vParam0, var uParam3, var uParam4)
{
	vParam0.f_2 = 79;
	if (!_datafile_get_string(&Var0, &vParam0))
	{
		return func_397("");
	}
	return func_397(func_51(Var0));
}

bool func_393(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

struct<8> func_394(var uParam0, int iParam1)
{
	return uParam0->f_13[iParam1]->f_47;
}

void func_395(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_398(uParam0, iParam1, sParam2))
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

void func_396(var uParam0, var uParam1, var uParam2, var uParam3)
{
	iVar0 = 0;
	while (iVar0 < uParam3->f_97)
	{
		if (does_entity_exist(uParam3[iVar0]))
		{
			if (!is_entity_dead(uParam3[iVar0]))
			{
				if (!is_ped_in_current_conversation(&uParam0, uParam3[iVar0], 0))
				{
					add_ped_to_conversation(&uParam0, uParam3[iVar0], &((*uParam3)[iVar0]->f_1));
				}
			}
		}
		iVar0++;
	}
}

Vector3 func_397(char* sParam0)
{
	StringCopy(&cVar0, sParam0, 24);
	return cVar0;
}

bool func_398(var uParam0, int iParam1, char* sParam2)
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

