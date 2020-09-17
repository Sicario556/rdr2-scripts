void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	if (func_1(&iLocal_19))
	{
		func_2(&iLocal_19);
	}
	func_3(&iLocal_19);
}

bool func_1(int iParam0)
{
	if (has_force_cleanup_occurred(4))
	{
		return false;
	}
	network_set_script_is_safe_for_network_game();
	if (func_4(iParam0))
	{
	}
	else
	{
		return false;
	}
	if (!func_5(iParam0))
	{
		return false;
	}
	if (!func_6(iParam0))
	{
		return false;
	}
	func_7(iParam0, 0);
	if (!func_8(&(iParam0->f_133)))
	{
		return false;
	}
	func_9(&(iParam0->f_154));
	if (!func_10(&(iParam0->f_158)))
	{
		return false;
	}
	if (func_11())
	{
		if (func_12() != -1)
		{
			func_13(&iLocal_19, func_12());
		}
		func_14();
	}
	return true;
}

void func_2(int* iParam0)
{
	bVar0 = false;
	while (!bVar0)
	{
		if (_0x9e4ef615e307fbbe())
		{
			bVar0 = true;
		}
		func_15(iParam0);
		func_16(iParam0);
		func_17(&(iParam0->f_133), &(iParam0->f_154));
		func_18(&(iParam0->f_154));
		func_19(&(iParam0->f_158));
		wait(0);
	}
}

void func_3(int iParam0)
{
	func_20(iParam0);
	func_21(iParam0);
	func_22(&(iParam0->f_158));
	func_23(&(iParam0->f_191));
	if (func_24(iParam0))
	{
	}
	if (_0x9e4ef615e307fbbe())
	{
	}
	else
	{
		terminate_this_thread();
	}
}

bool func_4(int iParam0)
{
	iParam0->f_125[0] = _databinding_add_data_container_from_path("", "role_progression_data");
	if (!_databinding_is_data_id_valid(&(iParam0->f_125[0])))
	{
		return false;
	}
	iParam0->f_125[1] = _databinding_add_data_string_by_hash(&(iParam0->f_125[0]), -446667543, "");
	iParam0->f_125[2] = _databinding_add_data_bool_by_hash(&(iParam0->f_125[0]), -1137252191, 0);
	return true;
}

bool func_5(int iParam0)
{
	if (!func_25(iParam0))
	{
		return false;
	}
	if (!func_26(&(iParam0->f_2.f_3.f_21), &(iParam0->f_2.f_3)))
	{
		return false;
	}
	if (!func_27(&(iParam0->f_2.f_3.f_113), &(iParam0->f_2.f_3), 615252130, 1606023574, 1489017156))
	{
		return false;
	}
	return true;
}

bool func_6(int iParam0)
{
	if (!func_28(iParam0))
	{
		return false;
	}
	return true;
}

void func_7(int iParam0, int iParam1)
{
	iParam0->f_1 = iParam1;
}

bool func_8(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_29(uParam0->f_2[iVar0]);
		iVar0++;
	}
	func_29(&(uParam0->f_18));
	return true;
}

void func_9(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	uParam0->f_3 = 0f;
}

bool func_10(int* iParam0)
{
	func_30(iParam0, 0);
	StringCopy(&(iParam0->f_1), "", 128);
	StringCopy(&(iParam0->f_17), "", 128);
	return true;
}

bool func_11()
{
	return &Global_1960146;
}

int func_12()
{
	return Global_1960146->f_1;
}

void func_13(int iParam0, int iParam1)
{
	iParam0->f_2.f_2 = iParam1;
}

void func_14()
{
	Global_1960146 = 0;
	Global_1960146->f_1 = -1;
}

void func_15(int* iParam0)
{
	if (func_31(iParam0, 4))
	{
		func_32(iParam0, 3, 1);
		func_32(iParam0, 4, 0);
	}
	while (_event_manager_is_event_pending(1797523117))
	{
		if (!_event_manager_peek_event(1797523117, &Var0))
		{
		}
		else
		{
			func_33(iParam0, &Var0);
			_event_manager_pop_event(1797523117);
		}
	}
	if (func_31(iParam0, 3))
	{
		Var0 = { func_34(iParam0) };
		if (Var0 == -1740156697)
		{
			func_33(iParam0, &Var0);
		}
		func_32(iParam0, 3, 0);
	}
}

void func_16(int* iParam0)
{
	iVar0 = _0x96fd694fe5be55dc(-1123362255);
	iVar1 = func_35(iParam0);
	if (iVar0 != iVar1)
	{
		if (iVar1 != 0)
		{
			func_36(iParam0, iVar1);
		}
		func_7(iParam0, iVar0);
		func_37(iParam0, iVar0);
		func_38(iParam0, iVar0);
	}
	func_39(iParam0, iVar0);
	func_40(iParam0, iVar0);
}

void func_17(var uParam0, var uParam1)
{
	if (*uParam0)
	{
		if (!func_41(uParam1))
		{
			*uParam0 = 0;
		}
	}
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = &uParam0->f_2[iVar1];
		if (!func_42(uParam0->f_2[iVar1]))
		{
		}
		else
		{
			if (!func_41(uParam1))
			{
				if (!func_43(uParam1, 35f, 1065353216))
				{
				}
				Jump @201; //curOff = 96
			}
			else
			{
				switch (func_44(uParam0->f_2[iVar1]))
				{
					case 0:
					case 2:
					case 4:
						break;
					case 3:
						break;
					default:
						iVar0++;
						Jump @201; //curOff = 156
						if (func_45(uParam1) < 1f)
						{
							iVar0++;
						}
						else
						{
							func_46(uParam1);
							func_47(uParam0, iVar2);
							*uParam0 = 1;
						}
						iVar1++;
						uParam0->f_1 = iVar0 > 0;
					}
				}
			}
		}

void func_18(var uParam0)
{
	if (!func_41(uParam0))
	{
		return;
	}
	if (uParam0->f_2 > 0f)
	{
		if (func_45(uParam0) > uParam0->f_2)
		{
			*uParam0 = 0;
			return;
		}
	}
	func_48(0);
	_uiprompt_disable_prompts_this_frame();
}

void func_19(int* iParam0)
{
	if (!func_49(*iParam0, 1))
	{
		return;
	}
	if (!_0xd9130842d7226045(&(iParam0->f_1), 0))
	{
		return;
	}
	play_sound_frontend(&(iParam0->f_17), &(iParam0->f_1), false, 0);
	func_50(iParam0, 1);
}

void func_20(int iParam0)
{
	if (!func_51(&(iParam0->f_2.f_3.f_21)))
	{
	}
	func_52(iParam0);
}

void func_21(int iParam0)
{
	func_53(iParam0);
}

void func_22(int* iParam0)
{
	if (!is_string_null_or_empty(&(iParam0->f_1)))
	{
		_0x531a78d6bf27014b(&(iParam0->f_1));
	}
	func_50(iParam0, 0);
	StringCopy(&(iParam0->f_1), "", 128);
	StringCopy(&(iParam0->f_17), "", 128);
}

void func_23(var uParam0)
{
	if (*uParam0 == 0)
	{
		return;
	}
	func_54(uParam0, *uParam0, 0);
}

bool func_24(int iParam0)
{
	if (!_databinding_is_data_id_valid(&(iParam0->f_125[0])))
	{
		return false;
	}
	_databinding_remove_data_entry(&(iParam0->f_125[0]));
	return true;
}

bool func_25(int iParam0)
{
	if (!_databinding_is_data_id_valid(&(iParam0->f_125[0])))
	{
		return false;
	}
	iParam0->f_2.f_3 = _databinding_add_data_container_by_hash(&(iParam0->f_125[0]), -94558508);
	iParam0->f_2.f_3.f_1 = _databinding_add_ui_item_list_by_hash(iParam0->f_2.f_3, -560151925);
	if (_databinding_is_data_id_valid(iParam0->f_2.f_3.f_1))
	{
		_databinding_clear_binding_array(iParam0->f_2.f_3.f_1);
	}
	iParam0->f_2.f_3.f_2 = _databinding_add_ui_item_list_by_hash(iParam0->f_2.f_3, -263963945);
	if (_databinding_is_data_id_valid(iParam0->f_2.f_3.f_2))
	{
		_databinding_clear_binding_array(iParam0->f_2.f_3.f_2);
	}
	iParam0->f_2.f_3.f_3 = _databinding_add_data_string_by_hash(iParam0->f_2.f_3, 356292238, "");
	iParam0->f_2.f_3.f_4 = _databinding_add_data_string_by_hash(iParam0->f_2.f_3, 912349732, "");
	iParam0->f_2.f_3.f_5 = _databinding_add_data_hash_by_hash(iParam0->f_2.f_3, 736200152, 0);
	iParam0->f_2.f_3.f_6 = _databinding_add_data_int_by_hash(iParam0->f_2.f_3, 2118194381, 0);
	iParam0->f_2.f_3.f_7 = _databinding_add_data_int_by_hash(iParam0->f_2.f_3, 1728520791, 0);
	iParam0->f_2.f_3.f_117 = _databinding_add_data_string_by_hash(iParam0->f_2.f_3, -840685091, "");
	iParam0->f_2.f_3.f_118 = _databinding_add_data_hash_by_hash(iParam0->f_2.f_3, -691977066, 0);
	iParam0->f_2.f_3.f_119 = _databinding_add_data_string_by_hash(iParam0->f_2.f_3, 1832210433, "");
	if (!func_55(&(iParam0->f_2.f_3), &(iParam0->f_2.f_3.f_8)))
	{
	}
	if (!func_56(&(iParam0->f_2.f_3.f_97), &(iParam0->f_2.f_3), "largeTextureName", "largeTextureTxd", "largeTextureAlpha", 1041865114, 1041865114, 1050253722))
	{
	}
	return true;
}

bool func_26(var uParam0, var uParam1)
{
	if (!_databinding_is_data_id_valid(*uParam1))
	{
		return false;
	}
	*uParam0 = *uParam1;
	uParam0->f_1 = _databinding_add_data_int(*uParam1, "tabCount", 0);
	uParam0->f_2 = _databinding_add_data_string(*uParam1, "tabName", "");
	uParam0->f_3 = _databinding_add_data_int(*uParam1, "tabIndex", 0);
	uParam0->f_5 = 1;
	uParam0->f_4 = 0;
	uParam0->f_6 = 0;
	return true;
}

bool func_27(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	if (!_databinding_is_data_id_valid(*uParam1))
	{
		return false;
	}
	*uParam0 = 0;
	if (iParam2 == 0)
	{
		return false;
	}
	if (iParam3 == 0)
	{
		return false;
	}
	if (iParam4 == 0)
	{
		return false;
	}
	uParam0->f_1 = _databinding_add_data_string_by_hash(*uParam1, iParam2, "");
	uParam0->f_2 = _databinding_add_data_bool_by_hash(*uParam1, iParam3, 0);
	uParam0->f_3 = _databinding_add_data_bool_by_hash(*uParam1, iParam4, 0);
	*uParam0 = 1;
	return true;
}

bool func_28(int iParam0)
{
	if (!_databinding_is_data_id_valid(&(iParam0->f_125[0])))
	{
		return false;
	}
	iParam0->f_2 = _databinding_add_data_container(&(iParam0->f_125[0]), "roleSelectPage");
	iParam0->f_2.f_1 = _databinding_add_ui_item_list(iParam0->f_2, "RoleCardList");
	return true;
}

void func_29(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
}

void func_30(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

bool func_31(int* iParam0, int iParam1)
{
	return func_49(*iParam0, iParam1);
}

void func_32(int* iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_30(iParam0, iParam1);
	}
	else
	{
		func_50(iParam0, iParam1);
	}
}

void func_33(int* iParam0, int iParam1)
{
	switch (*iParam1)
	{
		case -1740156697:
			func_57(iParam0, iParam1);
			break;
		case -1203660660:
			func_58(iParam0, iParam1);
			break;
		case -722926211:
		case 703281244:
			func_59(iParam0, iParam1);
			break;
	}
}

struct<4> func_34(int* iParam0)
{
	return iParam0->f_129;
}

var func_35(var uParam0)
{
	return uParam0->f_1;
}

void func_36(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case -1123362255:
			func_52(uParam0);
			break;
		case 1476690286:
			func_53(uParam0);
			break;
	}
}

void func_37(int* iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1476690286:
			func_60(iParam0);
			break;
		case -1123362255:
			func_61(iParam0);
			break;
	}
}

void func_38(int* iParam0, int iParam1)
{
	switch (iParam1)
	{
		case -1123362255:
			func_62(&(iParam0->f_2.f_3.f_21));
			break;
	}
}

void func_39(int* iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1476690286:
			func_63(iParam0);
			break;
		case -1123362255:
			func_64(iParam0);
			break;
	}
}

void func_40(int* iParam0, int iParam1)
{
	switch (iParam1)
	{
		case -1123362255:
			if (func_65(&(iParam0->f_2.f_3.f_21)))
			{
				func_68(&(iParam0->f_191), func_67(func_66(&(iParam0->f_2.f_3.f_21))));
			}
			func_69(&(iParam0->f_2.f_3.f_21), &(iParam0->f_2.f_3.f_28));
			break;
	}
}

bool func_41(var uParam0)
{
	return *uParam0;
}

bool func_42(var uParam0)
{
	if (*uParam0 == -1)
	{
		return false;
	}
	if (uParam0->f_1 == 0)
	{
		return false;
	}
	return true;
}

bool func_43(var uParam0, float fParam1, int iParam2)
{
	if (func_41(uParam0))
	{
		return false;
	}
	*uParam0 = 1;
	uParam0->f_1 = func_70();
	uParam0->f_2 = fParam1;
	uParam0->f_3 = iParam2;
	return true;
}

int func_44(var uParam0)
{
	return func_71(*uParam0);
}

float func_45(var uParam0)
{
	if (!*uParam0)
	{
		return 0f;
	}
	return absf((func_70() - uParam0->f_1));
}

void func_46(var uParam0)
{
	if (func_45(uParam0) < uParam0->f_3)
	{
		uParam0->f_2 = absf((uParam0->f_3 - func_45(uParam0)));
	}
	else
	{
		*uParam0 = 0;
	}
}

int func_47(var uParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (&uParam0->f_2[iVar0] != iParam1)
		{
		}
		else
		{
			_copy_memory(&(uParam0->f_18), uParam0->f_2[iVar0], 3);
			func_29(uParam0->f_2[iVar0]);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_48(int iParam0)
{
	if (Global_1940144->f_105.f_2 >= iParam0)
	{
		return;
	}
	Global_1940144->f_105.f_2 = iParam0;
}

bool func_49(int iParam0, int iParam1)
{
	return is_bit_set(iParam0, iParam1);
}

void func_50(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

bool func_51(var uParam0)
{
	if (!_databinding_is_data_id_valid(*uParam0))
	{
		return false;
	}
	_databinding_remove_data_entry(*uParam0);
	uParam0->f_5 = 0;
	uParam0->f_4 = 0;
	uParam0->f_6 = 0;
	return true;
}

void func_52(int iParam0)
{
	animpostfx_stop("MP_RewardsExposureLoop");
	func_72(&(iParam0->f_2.f_3.f_97));
	func_73(iParam0, "");
}

void func_53(int iParam0)
{
	func_54(&(iParam0->f_191), 1469741452, 0);
	func_74(&(iParam0->f_194));
}

void func_54(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 != iParam1)
	{
		return;
	}
	iVar0 = (Global_1296859->f_21 - uParam0->f_1);
	_0x3255d4d2082c6339(*uParam0, iVar0, uParam0->f_2, iParam2);
	func_75(uParam0);
}

bool func_55(var uParam0, var uParam1)
{
	if (!_databinding_is_data_id_valid(*uParam0))
	{
		return false;
	}
	iVar0 = *uParam1;
	iVar5 = 0;
	while (iVar5 < iVar0)
	{
		StringCopy(&cVar1, "rank_slot_", 32);
		StringIntConCat(&cVar1, iVar5, 32);
		(*uParam1)[iVar5] = _databinding_add_data_int(*uParam0, &cVar1, 0);
		StringConCat(&cVar1, "_enabled", 32);
		(*uParam1)[iVar5]->f_1 = _databinding_add_data_bool(*uParam0, &cVar1, 0);
		iVar5++;
	}
	return true;
}

bool func_56(var uParam0, var uParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!_databinding_is_data_id_valid(*uParam1))
	{
		return false;
	}
	uParam0->f_10 = _databinding_add_data_hash(*uParam1, sParam2, 0);
	uParam0->f_11 = _databinding_add_data_hash(*uParam1, sParam3, 0);
	uParam0->f_12 = _databinding_add_data_int(*uParam1, sParam4, 0);
	*uParam0 = 1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_1 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_5 = 0;
	uParam0->f_9 = iParam5;
	uParam0->f_8 = iParam6;
	uParam0->f_13 = iParam7;
	uParam0->f_15 = 0;
	return true;
}

void func_57(int* iParam0, int iParam1)
{
	Var0 = { func_34(iParam0) };
	if (Var0.f_1 != iParam1->f_1)
	{
		func_74(&(iParam0->f_194));
	}
	func_76(iParam0, iParam1);
	if (func_31(iParam0, 4))
	{
		return;
	}
	switch (iParam1->f_2)
	{
		case -290657237:
			func_77(iParam0, &(iParam1->f_3), iParam1->f_1);
			func_78(iParam0, 1);
			break;
		case -1042248069:
		case 351019360:
			if (!func_79(iParam0, &(iParam1->f_3), iParam1->f_1))
			{
				func_80(&(iParam0->f_2.f_3.f_97));
			}
			func_81(iParam0, 0);
			func_78(iParam0, 0);
			break;
		case -1171582810:
		case -245850526:
			if (!func_82(iParam0, &(iParam1->f_3), iParam1->f_1))
			{
				func_80(&(iParam0->f_2.f_3.f_97));
			}
			func_81(iParam0, 0);
			func_78(iParam0, 0);
			break;
		case 1062201268:
		case 2114750871:
			func_83(iParam0, &(iParam1->f_3));
			break;
	}
}

void func_58(int* iParam0, int iParam1)
{
	switch (iParam1->f_2)
	{
		case 2114750871:
			if (func_84(iParam0, &(iParam1->f_3)))
			{
				func_87(&(iParam0->f_191), func_86(func_85(iParam0)));
			}
			break;
		case 1062201268:
			if (func_88(iParam0, &(iParam1->f_3)))
			{
				if (!func_89(-1123362255, -124426548))
				{
				}
			}
			break;
		case 1060550035:
			func_32(iParam0, 5, 1);
			if (!func_89(-1123362255, -45819186))
			{
			}
			break;
		case -1042248069:
			if (func_90(iParam0, &(iParam1->f_3)))
			{
				func_32(iParam0, 2, 1);
			}
			break;
		case -245850526:
			if (func_91(iParam0, &(iParam1->f_3)))
			{
				func_32(iParam0, 2, 1);
			}
			break;
		case 351019360:
			if (func_92(iParam0, &(iParam1->f_3)))
			{
				func_93();
				func_94();
				func_95();
				func_43(&(iParam0->f_154), 6f, 1065353216);
				func_54(&(iParam0->f_191), func_86(func_85(iParam0)), func_96(func_85(iParam0)));
			}
			break;
		case -662716804:
			func_80(&(iParam0->f_2.f_3.f_97));
			func_54(&(iParam0->f_191), func_86(func_85(iParam0)), func_96(func_85(iParam0)));
			break;
	}
}

void func_59(int* iParam0, int iParam1)
{
	switch (iParam1->f_2)
	{
		case 1997846799:
			func_62(&(iParam0->f_2.f_3.f_21));
			func_81(iParam0, 0);
			func_32(iParam0, 4, 1);
			func_64(iParam0);
			break;
	}
}

int func_60(int* iParam0)
{
	func_87(&(iParam0->f_191), 1469741452);
	func_32(iParam0, 0, 1);
	return 1;
}

int func_61(int* iParam0)
{
	iVar0 = func_85(iParam0);
	iVar1 = func_96(iVar0);
	func_97(iParam0);
	func_98(iParam0);
	func_99(iParam0);
	func_100(iParam0, 0);
	func_101(iParam0, "");
	func_102(iParam0, "");
	func_103(iParam0, 0);
	func_104(iParam0, "");
	if (func_105(iVar1))
	{
		func_107(iParam0, _create_var_string(10, "RP_ROLE_RANK_HEADER", _create_var_string(2, func_106(iVar0)), iVar1));
	}
	else
	{
		func_107(iParam0, _create_var_string(2, func_106(iVar0)));
	}
	func_73(iParam0, func_106(iVar0));
	func_108(iParam0, iVar1);
	func_112(&(iParam0->f_2.f_3.f_21), func_111(iVar1, 5, func_110((func_109(iVar0) / 5), 1, 4)));
	animpostfx_play("MP_RewardsExposureLoop");
	func_81(iParam0, 0);
	return 1;
}

void func_62(var uParam0)
{
	if (!func_113(uParam0))
	{
		return;
	}
	uParam0->f_6 = 1;
}

void func_63(int* iParam0)
{
	func_114(iParam0);
	func_115(iParam0);
	if (func_116(&(iParam0->f_194)))
	{
		func_32(iParam0, 0, 1);
	}
	if (func_31(iParam0, 0))
	{
		func_117(iParam0);
		func_32(iParam0, 0, 0);
	}
}

void func_64(int* iParam0)
{
	func_118(iParam0);
	func_119(&(iParam0->f_2.f_3.f_97));
	func_120(iParam0);
	if (func_31(iParam0, 1))
	{
		func_122(iParam0, func_85(iParam0), func_121(iParam0));
		func_123(iParam0);
		func_32(iParam0, 1, 0);
	}
	if (func_31(iParam0, 2))
	{
		func_124(iParam0, func_85(iParam0), func_121(iParam0));
		func_32(iParam0, 2, 0);
	}
}

bool func_65(var uParam0)
{
	return uParam0->f_6;
}

int func_66(var uParam0)
{
	if (!uParam0->f_5)
	{
		return -1;
	}
	return _databinding_read_data_int(uParam0->f_3);
}

int func_67(int iParam0)
{
	return shift_left(1, iParam0);
}

void func_68(var uParam0, int iParam1)
{
	func_125(&(uParam0->f_2), iParam1);
}

void func_69(var uParam0, var uParam1)
{
	if (!func_113(uParam0))
	{
		uParam0->f_6 = 0;
		return;
	}
	if (!func_65(uParam0))
	{
		return;
	}
	iVar0 = func_66(uParam0);
	if (!func_126(uParam0, iVar0))
	{
		uParam0->f_6 = 0;
		return;
	}
	func_127(uParam0, uParam1, iVar0);
	uParam0->f_6 = 0;
}

float func_70()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

int func_71(int iParam0)
{
	iVar0 = func_128(iParam0);
	if ((iVar0 == 0 || iVar0 == 1) || iVar0 == 5)
	{
		if (_cashinventory_transaction_checkout_status(iParam0, &iVar1))
		{
			if ((iVar1 == 4 || iVar1 == 2) || (iVar0 == 0 && iVar1 != 0))
			{
				func_129(iParam0, iVar1, 0, 0);
				iVar0 = iVar1;
			}
		}
		else if (iVar0 == 1 || iVar0 == 5)
		{
			func_129(iParam0, 4, 0, 0);
		}
	}
	return iVar0;
}

void func_72(var uParam0)
{
	if (*uParam0 == 0)
	{
		return;
	}
	*uParam0 = 1;
	func_80(uParam0);
	uParam0->f_7 = 0;
	uParam0->f_6 = 0;
	_databinding_write_data_hash_string(uParam0->f_10, 0);
	_databinding_write_data_hash_string(uParam0->f_11, 0);
	_databinding_write_data_int(uParam0->f_12, 0);
}

int func_73(int* iParam0, char* sParam1)
{
	if (!_databinding_is_data_id_valid(iParam0->f_2.f_3.f_4))
	{
		return 0;
	}
	_databinding_write_data_string(iParam0->f_2.f_3.f_4, sParam1);
	return 1;
}

int func_74(var uParam0)
{
	if (!func_130(*uParam0, 0))
	{
		return 0;
	}
	if (!func_131(*uParam0))
	{
		return 1;
	}
	func_132(*uParam0);
	*uParam0 = 0;
	uParam0->f_1 = 1;
	return 1;
}

void func_75(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_76(int* iParam0, int iParam1)
{
	iParam0->f_129 = { *iParam1 };
}

int func_77(int* iParam0, var uParam1, int iParam2)
{
	if (!_databinding_is_data_id_valid(*uParam1))
	{
		return 0;
	}
	func_133(iParam0, uParam1);
	iVar0 = _databinding_read_data_int_from_parent_by_hash(*uParam1, 2118194381);
	iVar1 = func_85(iParam0);
	iVar2 = func_96(iVar1);
	func_134(iVar1, iVar0, &sVar3, &cVar4);
	func_136(iParam0, sVar3, cVar4, iVar0, iVar2, func_135(iVar1));
	func_103(iParam0, iVar0 > iVar2);
	if (iVar0 > iVar2)
	{
		func_104(iParam0, _create_var_string(2, func_137(iVar1), iVar0));
	}
	else
	{
		func_104(iParam0, "");
	}
	func_139(&(iParam0->f_2.f_3.f_97), uParam1, -3675574, -536627617, func_138(1, func_121(iParam0), iParam2));
	return 1;
}

void func_78(int* iParam0, int iParam1)
{
	func_140(&(iParam0->f_2.f_3.f_113), iParam1);
}

bool func_79(int* iParam0, var uParam1, int iParam2)
{
	if (!_databinding_is_data_id_valid(*uParam1))
	{
		return false;
	}
	func_133(iParam0, uParam1);
	iVar0 = _databinding_read_data_hash_string_from_parent_by_hash(*uParam1, -1553587059);
	if (!func_130(iVar0, 0))
	{
		return false;
	}
	if (func_141(iVar0))
	{
		if (func_142(iVar0, 0))
		{
			func_104(iParam0, _create_var_string(2, "RP_RP_ITEM_OWNED_TOOLTIP"));
		}
		else if (!func_143(iVar0))
		{
			if (func_144(iVar0))
			{
				func_104(iParam0, _create_var_string(2, "RP_RP_UNLOCK_WITH_TOKEN"));
			}
			else
			{
				func_104(iParam0, _create_var_string(2, "RP_RP_UNLOCK_NOT_ENOUGH_TOKENS"));
			}
		}
		else
		{
			func_146(iParam0, func_145(iVar0));
		}
	}
	else
	{
		func_104(iParam0, _create_var_string(2, func_137(func_85(iParam0)), _databinding_read_data_int_from_parent_by_hash(*uParam1, 1427767274)));
	}
	func_103(iParam0, !func_141(iVar0));
	func_139(&(iParam0->f_2.f_3.f_97), uParam1, -3675574, -536627617, func_138(2, func_121(iParam0), iParam2));
	return true;
}

void func_80(var uParam0)
{
	if (*uParam0 == 0)
	{
		return;
	}
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

int func_81(int* iParam0, int iParam1)
{
	if (!_databinding_is_data_id_valid(iParam0->f_2.f_3.f_7))
	{
		return 0;
	}
	_databinding_write_data_int(iParam0->f_2.f_3.f_7, iParam1);
	return 1;
}

bool func_82(int* iParam0, var uParam1, int iParam2)
{
	if (!_databinding_is_data_id_valid(*uParam1))
	{
		return false;
	}
	func_133(iParam0, uParam1);
	iVar0 = _databinding_read_data_hash_string_from_parent_by_hash(*uParam1, 1627232064);
	iVar1 = iVar0;
	if (!func_147(iVar0, 2))
	{
		return false;
	}
	if (func_141(iVar0))
	{
		if (!func_143(iVar1))
		{
			if (func_144(iVar1))
			{
				func_104(iParam0, _create_var_string(2, "RP_RP_UNLOCK_WITH_TOKEN"));
			}
			else
			{
				func_104(iParam0, _create_var_string(2, "RP_RP_UNLOCK_NOT_ENOUGH_TOKENS"));
			}
		}
		else
		{
			func_146(iParam0, func_145(iVar1));
		}
	}
	else
	{
		func_104(iParam0, _create_var_string(2, func_137(func_85(iParam0)), _databinding_read_data_int_from_parent_by_hash(*uParam1, 1427767274)));
	}
	func_103(iParam0, !func_141(iVar0));
	func_139(&(iParam0->f_2.f_3.f_97), uParam1, -3675574, -536627617, func_138(2, func_121(iParam0), iParam2));
	return true;
}

int func_83(int* iParam0, var uParam1)
{
	if (!_databinding_is_data_id_valid(*uParam1))
	{
		return 0;
	}
	iVar0 = _databinding_read_data_int_from_parent_by_hash(*uParam1, -1609147137);
	iVar1 = iVar0;
	func_104(iParam0, _create_var_string(2, func_148(iVar1)));
	bVar2 = _databinding_read_data_bool_from_parent_by_hash(*uParam1, -1846747855);
	func_103(iParam0, bVar2);
	if (!bVar2)
	{
		func_151(&(iParam0->f_194), func_150(func_149(iVar1)));
	}
	return 1;
}

bool func_84(int* iParam0, var uParam1)
{
	if (!_databinding_is_data_id_valid(*uParam1))
	{
		return false;
	}
	iVar0 = _databinding_read_data_int_from_parent_by_hash(*uParam1, -1609147137);
	iVar1 = iVar0;
	func_13(iParam0, iVar1);
	return true;
}

int func_85(int* iParam0)
{
	return iParam0->f_2.f_2;
}

int func_86(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -1327034750;
		case 3:
			return 1264335699;
		case 2:
			return -603603886;
		case 1:
			return -1672896578;
		case 0:
			return 805102869;
		default:
			break;
	}
	return -1;
}

void func_87(var uParam0, int iParam1)
{
	if (*uParam0 != 0 && *uParam0 != iParam1)
	{
		func_54(uParam0, *uParam0, 0);
	}
	func_75(uParam0);
	*uParam0 = iParam1;
	uParam0->f_1 = Global_1296859->f_21;
}

bool func_88(int* iParam0, var uParam1)
{
	if (!_databinding_is_data_id_valid(*uParam1))
	{
		return false;
	}
	iVar0 = _databinding_read_data_int_from_parent_by_hash(*uParam1, -1609147137);
	iVar1 = iVar0;
	func_152(iParam0, iVar1);
	return true;
}

bool func_89(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (!_is_app_active(iParam0))
	{
		return false;
	}
	if (!_is_app_running(iParam0))
	{
		return false;
	}
	if (_0x42095b886d30de66(iParam0))
	{
		return false;
	}
	if (!_request_uiapp_transition_by_hash(iParam0, iParam1))
	{
		return false;
	}
	return true;
}

bool func_90(int* iParam0, var uParam1)
{
	if (!_databinding_is_data_id_valid(*uParam1))
	{
		return false;
	}
	iVar0 = _databinding_read_data_hash_string_from_parent(*uParam1, "inventory_item");
	if (!func_130(iVar0, 0) && !func_147(func_153(iVar0), 2))
	{
		return false;
	}
	if (!func_154(iParam0, iVar0))
	{
		return false;
	}
	return true;
}

bool func_91(int* iParam0, var uParam1)
{
	if (!_databinding_is_data_id_valid(*uParam1))
	{
		return false;
	}
	iVar0 = _databinding_read_data_hash_string_from_parent(*uParam1, "bundle_item");
	if (!func_147(iVar0, 2))
	{
		return false;
	}
	if (!func_154(iParam0, func_155(iVar0)))
	{
		return false;
	}
	return true;
}

bool func_92(int* iParam0, var uParam1)
{
	if (!_databinding_is_data_id_valid(*uParam1))
	{
		return false;
	}
	func_133(iParam0, uParam1);
	iVar0 = _databinding_read_data_hash_string_from_parent_by_hash(*uParam1, -1553587059);
	if (!func_130(iVar0, 0))
	{
		return false;
	}
	func_157(func_156(iVar0));
	return true;
}

int func_93()
{
	if (!_is_app_active(-1123362255) && !_is_app_running(-1123362255))
	{
		return 0;
	}
	_close_app_by_hash(-1123362255);
	return 1;
}

int func_94()
{
	if (!_is_app_active(29649618) && !_is_app_running(29649618))
	{
		return 0;
	}
	_close_app_by_hash(29649618);
	return 1;
}

void func_95()
{
	func_158(0);
}

int func_96(int iParam0)
{
	if (!func_135(iParam0))
	{
		return 0;
	}
	return func_159(func_149(iParam0));
}

void func_97(int* iParam0)
{
	func_160(&(iParam0->f_2.f_3.f_21), &(iParam0->f_2.f_3.f_28));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_162(&(iParam0->f_2.f_3.f_21), &(iParam0->f_2.f_3.f_28), _create_var_string(2, func_161(iVar0))))
		{
		}
		iVar0++;
	}
}

int func_98(int* iParam0)
{
	if (!func_163(&(iParam0->f_2.f_3.f_1)))
	{
		return 0;
	}
	return 1;
}

int func_99(int* iParam0)
{
	if (!func_163(&(iParam0->f_2.f_3.f_2)))
	{
		return 0;
	}
	return 1;
}

int func_100(int* iParam0, int iParam1)
{
	if (!_databinding_is_data_id_valid(iParam0->f_2.f_3.f_118))
	{
		return 0;
	}
	_databinding_write_data_hash_string(iParam0->f_2.f_3.f_118, iParam1);
	return 1;
}

int func_101(int* iParam0, char* sParam1)
{
	if (!_databinding_is_data_id_valid(iParam0->f_2.f_3.f_117))
	{
		return 0;
	}
	_databinding_write_data_string(iParam0->f_2.f_3.f_117, sParam1);
	return 1;
}

int func_102(int* iParam0, char* sParam1)
{
	if (!_databinding_is_data_id_valid(iParam0->f_2.f_3.f_119))
	{
		return 0;
	}
	_databinding_write_data_string(iParam0->f_2.f_3.f_119, sParam1);
	return 1;
}

void func_103(int* iParam0, bool bParam1)
{
	_databinding_write_data_bool(&(iParam0->f_125[2]), bParam1);
}

void func_104(int* iParam0, char* sParam1)
{
	if (!_databinding_is_data_id_valid(&(iParam0->f_125[1])))
	{
		return;
	}
	_databinding_write_data_string(&(iParam0->f_125[1]), sParam1);
}

bool func_105(int iParam0)
{
	if (iParam0 < 1)
	{
		return false;
	}
	return true;
}

char* func_106(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return "RP_ROLE_COLLECTOR";
		case 3:
			return "RP_ROLE_BOUNTY_HUNTER";
		case 2:
			return "RP_ROLE_TRADER";
		case 1:
			return "RP_ROLE_MOONSHINER";
		case 0:
			return "RP_ROLE_NATURALIST";
		default:
			break;
	}
	return "";
}

int func_107(int* iParam0, char* sParam1)
{
	if (!_databinding_is_data_id_valid(iParam0->f_2.f_3.f_3))
	{
		return 0;
	}
	_databinding_write_data_string(iParam0->f_2.f_3.f_3, sParam1);
	return 1;
}

int func_108(int* iParam0, int iParam1)
{
	if (!_databinding_is_data_id_valid(iParam0->f_2.f_3.f_6))
	{
		return 0;
	}
	_databinding_write_data_int(iParam0->f_2.f_3.f_6, iParam1);
	return 1;
}

int func_109(int iParam0)
{
	return _0xe80e50bee276a54a(func_150(func_149(iParam0)), -1990194462);
}

int func_110(int iParam0, int iParam1, int iParam2)
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

int func_111(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 == (iParam1 * iParam2) && iParam2 != 0)
	{
		return (iParam2 - 1);
	}
	return floor((to_float(iParam0) / to_float(iParam1)));
}

int func_112(var uParam0, int iParam1)
{
	if (!func_113(uParam0))
	{
		return 0;
	}
	if (!func_126(uParam0, iParam1))
	{
		return 0;
	}
	_databinding_write_data_int(uParam0->f_3, iParam1);
	return 1;
}

bool func_113(var uParam0)
{
	return uParam0->f_5;
}

void func_114(int* iParam0)
{
	if (!func_164(&(iParam0->f_133), &(iParam0->f_154)))
	{
		return;
	}
	if (func_165(&(iParam0->f_133)) == 1062201268)
	{
		if (!func_166(iParam0, 1))
		{
		}
	}
	func_32(iParam0, 0, 1);
	func_32(iParam0, 3, 1);
}

void func_115(int* iParam0)
{
	if (!func_31(iParam0, 5))
	{
		return;
	}
	if (!_is_app_active(-1123362255))
	{
		return;
	}
	if (!_is_app_running(-1123362255))
	{
		return;
	}
	if (_0x42095b886d30de66(-1123362255))
	{
		return;
	}
	iVar0 = func_167(iParam0);
	if (iVar0 == -1)
	{
		func_32(iParam0, 5, 0);
		return;
	}
	if (!func_168(iParam0, iVar0))
	{
	}
	func_169(iParam0);
	func_32(iParam0, 5, 0);
}

bool func_116(var uParam0)
{
	if (uParam0->f_1)
	{
		uParam0->f_1 = 0;
		return true;
	}
	return false;
}

int func_117(int* iParam0)
{
	iVar1 = 5;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (!func_170(iParam0, iVar2, iVar0))
		{
		}
		else
		{
			iVar0++;
		}
		iVar2++;
	}
	if (iVar0 < func_171(iParam0))
	{
		func_172(iParam0, iVar0);
	}
	return 1;
}

void func_118(int* iParam0)
{
	if (!func_164(&(iParam0->f_133), &(iParam0->f_154)))
	{
		return;
	}
	if (func_165(&(iParam0->f_133)) == -1353574332)
	{
		if (!func_166(iParam0, 0))
		{
		}
	}
	func_32(iParam0, 1, 1);
	func_32(iParam0, 2, 1);
	func_32(iParam0, 3, 1);
}

void func_119(var uParam0)
{
	switch (func_173(uParam0))
	{
		case 0:
			break;
		case 1:
			if (!func_174(uParam0))
			{
				return;
			}
			func_175(uParam0, 2);
		case 2:
			iVar0 = _databinding_read_data_int(uParam0->f_12);
			fVar1 = ((to_float(iVar0) * uParam0->f_8) / 100f);
			fVar1 = (fVar1 - get_frame_time());
			fVar1 = func_176(fVar1, 0f, uParam0->f_8);
			iVar2 = ceil(((fVar1 / uParam0->f_8) * 100f));
			_databinding_write_data_int(uParam0->f_12, iVar2);
			if (iVar2 > 0)
			{
				return;
			}
			func_175(uParam0, 3);
		case 3:
			_databinding_write_data_hash_string(uParam0->f_10, 0);
			_databinding_write_data_hash_string(uParam0->f_11, 0);
			if (uParam0->f_7 != uParam0->f_3 && uParam0->f_7 != 0)
			{
				_set_streamed_txd_as_no_longer_needed(uParam0->f_7);
			}
			uParam0->f_6 = uParam0->f_2;
			uParam0->f_7 = uParam0->f_3;
			uParam0->f_5 = uParam0->f_1;
			uParam0->f_14 = 0f;
			func_175(uParam0, 4);
		case 4:
			if (func_174(uParam0))
			{
				func_175(uParam0, 2);
				return;
			}
			if (func_177(uParam0))
			{
				func_178(uParam0);
			}
			else
			{
				uParam0->f_14 = (uParam0->f_14 + get_frame_time());
				if (uParam0->f_14 < uParam0->f_13)
				{
					return;
				}
			}
			func_175(uParam0, 5);
		case 5:
			if (func_174(uParam0))
			{
				func_175(uParam0, 2);
				return;
			}
			if (uParam0->f_7 != uParam0->f_3)
			{
				_set_streamed_txd_as_no_longer_needed(uParam0->f_7);
				func_175(uParam0, 1);
				return;
			}
			if (!_does_streamed_txd_exist(uParam0->f_7))
			{
				func_175(uParam0, 1);
				return;
			}
			_request_streamed_txd(uParam0->f_7, true);
			if (!_has_streamed_txd_loaded(uParam0->f_7))
			{
				return;
			}
			func_175(uParam0, 6);
		case 6:
			if (func_174(uParam0))
			{
				func_175(uParam0, 2);
				return;
			}
			_databinding_write_data_hash_string(uParam0->f_10, uParam0->f_6);
			_databinding_write_data_hash_string(uParam0->f_11, uParam0->f_7);
			func_175(uParam0, 7);
		case 7:
			if (func_174(uParam0))
			{
				func_175(uParam0, 2);
				return;
			}
			iVar3 = _databinding_read_data_int(uParam0->f_12);
			fVar4 = ((to_float(iVar3) * uParam0->f_9) / 100f);
			fVar4 = (fVar4 + get_frame_time());
			fVar4 = func_176(fVar4, 0f, uParam0->f_9);
			iVar5 = ceil(((fVar4 * 100f) / uParam0->f_9));
			iVar5 = func_110(iVar5, 0, 100);
			_databinding_write_data_int(uParam0->f_12, iVar5);
			if (iVar5 >= 100)
			{
				func_175(uParam0, 1);
			}
			break;
	}
}

void func_120(int* iParam0)
{
	if (!func_65(&(iParam0->f_2.f_3.f_21)))
	{
		return;
	}
	iVar0 = func_121(iParam0);
	func_180(iParam0, func_179(iVar0));
	func_181(iVar0, &iVar1, &uVar2);
	iVar1 = (iVar1 - 1);
	if (!func_182(&(iParam0->f_2.f_3.f_8), iVar1, func_96(func_85(iParam0))))
	{
	}
	func_32(iParam0, 1, 1);
	func_32(iParam0, 2, 1);
}

int func_121(int* iParam0)
{
	return func_66(&(iParam0->f_2.f_3.f_21));
}

int func_122(int* iParam0, int iParam1, int iParam2)
{
	func_181(iParam2, &iVar0, &iVar1);
	iVar2 = 0;
	iVar5 = iVar0;
	while (iVar5 <= iVar1)
	{
		func_134(iParam1, iVar5, &uVar3, &cVar4);
		if (!func_184(iParam0, iVar2, func_183(iParam1, iVar5), iVar5, uVar3, cVar4, func_96(iParam1)))
		{
		}
		else
		{
			iVar2++;
		}
		iVar5++;
	}
	return 1;
}

void func_123(int* iParam0)
{
	if (func_185(&(iParam0->f_2.f_3.f_97)))
	{
		return;
	}
	if (func_186(iParam0) <= 0)
	{
		return;
	}
	iVar0 = func_187(iParam0);
	if (!func_188(iParam0, iVar0, &uVar1))
	{
		return;
	}
	func_139(&(iParam0->f_2.f_3.f_97), &uVar1, -3675574, -536627617, func_138(1, func_121(iParam0), iVar0));
	func_189(&(iParam0->f_2.f_3.f_97));
}

int func_124(int* iParam0, int iParam1, int iParam2)
{
	func_181(iParam2, &iVar0, &iVar1);
	if (iVar0 != 1)
	{
		iVar0 = (iVar0 - 1);
	}
	if (iVar1 != func_109(iParam1))
	{
		iVar1 = (iVar1 - 1);
	}
	Var3.f_1 = 10;
	iVar25 = 0;
	iVar28 = iVar0;
	while (iVar28 <= iVar1)
	{
		iVar27 = func_183(iParam1, iVar28);
		iVar2 = _0x48229ce0c7938237(iVar27);
		iVar26 = 0;
		while (iVar26 < iVar2)
		{
			if (!_0x8d029948ca29409b(iVar27, iVar26, &Var3))
			{
			}
			else if (!func_190(&Var3))
			{
			}
			else
			{
				if (func_147(func_153(Var3), 2))
				{
					if (!func_192(iParam0, Var3, iVar28, func_191(&(iParam0->f_133), Var3), iVar25))
					{
					}
					else
					{
						Jump @203; //curOff = 169
						if (!func_193(iParam0, Var3, iVar27, iVar28, func_191(&(iParam0->f_133), Var3), iVar25))
						{
						}
						else
						{
							iVar25++;
						}
					}
					iVar26++;
					iVar28++;
					if (iVar25 < func_194(iParam0))
					{
						func_195(iParam0, iVar25);
					}
					return 1;
				}
			}
		}
	}
}

void func_125(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_126(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_4)
	{
		return false;
	}
	return true;
}

void func_127(var uParam0, var uParam1, int iParam2)
{
	func_197(uParam0, func_196(uParam1, iParam2));
	func_198(uParam1, iParam2);
}

int func_128(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346->f_20)
	{
		if (&Global_1293346->f_20.f_1[iVar0] == iParam0)
		{
			return Global_1293346->f_20.f_1[iVar0]->f_1;
		}
		iVar0++;
	}
	return 0;
}

void func_129(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_199(iParam0, iParam1, iParam2, iParam3);
}

bool func_130(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_131(int iParam0)
{
	return _unlock_is_new(func_200(iParam0));
}

void func_132(int iParam0)
{
	_unlock_set_new(func_200(iParam0), false);
}

int func_133(int* iParam0, var uParam1)
{
	if (!_databinding_is_data_id_valid(*uParam1))
	{
		return 0;
	}
	func_102(iParam0, _0x6329c34bee5bff4b(*uParam1, 1832210433));
	func_101(iParam0, _0x6329c34bee5bff4b(*uParam1, -840685091));
	func_100(iParam0, _databinding_read_data_hash_string_from_parent_by_hash(*uParam1, -691977066));
	return 1;
}

void func_134(int iParam0, int iParam1, char* sParam2, char* sParam3)
{
	iVar0 = func_96(iParam0);
	iVar1 = func_201(iParam0, iParam1);
	iVar2 = func_110((iParam1 - 1), 0, func_109(iParam0));
	iVar3 = func_201(iParam0, iVar2);
	*sParam3 = (iVar1 - iVar3);
	if (iParam1 == iVar0 + 1)
	{
		*sParam2 = (func_202(iParam0) - iVar3);
	}
	else if (iParam1 <= iVar0)
	{
		*sParam2 = *sParam3;
	}
	else
	{
		*sParam2 = 0;
	}
}

bool func_135(int iParam0)
{
	iVar0 = func_203(iParam0);
	if (func_130(iVar0, 0))
	{
		if (_0xe787f05dfc977bde(func_204(1), iVar0, 0) > 0)
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
	return false;
}

int func_136(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!bParam5)
	{
		return func_205(iParam0, iParam3);
	}
	if (iParam3 <= iParam4)
	{
		return func_206(iParam0, iParam3);
	}
	else if (iParam4 + 1 == iParam3)
	{
		return func_207(iParam0, iParam3, sParam1, sParam2, 0);
	}
	else
	{
		return func_205(iParam0, iParam3);
	}
	return 0;
}

char* func_137(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return "RP_COLLECTOR_REWARD_LOCKED";
		case 3:
			return "RP_BOUNTY_HUNTER_REWARD_LOCKED";
		case 2:
			return "RP_TRADER_REWARD_LOCKED";
		case 1:
			return "RP_MOONSHINER_REWARD_LOCKED";
		case 0:
			return "RP_NATURALIST_REWARD_LOCKED";
		default:
			break;
	}
	return "";
}

int func_138(int iParam0, int iParam1, int iParam2)
{
	StringCopy(&cVar0, func_208(iParam0), 128);
	StringConCat(&cVar0, func_208(iParam1), 128);
	StringConCat(&cVar0, func_208(iParam2), 128);
	if (!string_to_int(&cVar0, &uVar16))
	{
		return -1;
	}
	return uVar16;
}

int func_139(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	if (!_databinding_is_data_id_valid(*uParam1))
	{
		return 0;
	}
	iVar0 = _databinding_read_data_hash_string_from_parent_by_hash(*uParam1, iParam2);
	iVar1 = _databinding_read_data_hash_string_from_parent_by_hash(*uParam1, iParam3);
	func_209(uParam0, iVar0, iVar1, iParam4, 0);
	return 1;
}

int func_140(var uParam0, bool bParam1)
{
	if (!*uParam0)
	{
		return 0;
	}
	_databinding_write_data_bool(uParam0->f_3, bParam1);
	return 1;
}

bool func_141(int iParam0)
{
	iVar0 = iParam0;
	if (func_130(iVar0, 0))
	{
		if (func_210(iVar0, 1989861793))
		{
			iVar1 = func_211(iVar0, 0);
			if (iVar1 != 0 && _0xfbe782b3165ac8ec(iVar1))
			{
				return true;
			}
		}
	}
	return _unlock_is_visible(iParam0);
}

bool func_142(int iParam0, int iParam1)
{
	if (!func_130(iParam0, 0))
	{
		return false;
	}
	if (func_212(iParam0))
	{
		return func_213(iParam0);
	}
	if (iParam1 != 0)
	{
		if (func_214(iParam0, -442898163))
		{
			return func_215(iParam1, iParam0);
		}
	}
	return func_216(iParam0, 1, 0, 0) > 0;
}

bool func_143(int iParam0)
{
	if (!func_130(iParam0, 0) && !func_147(iParam0, 2))
	{
		return false;
	}
	return !func_217(iParam0, 0);
}

bool func_144(int iParam0)
{
	if (!func_130(iParam0, 0) && !func_147(iParam0, 2))
	{
		return false;
	}
	return func_217(iParam0, 1);
}

int func_145(int iParam0)
{
	iVar0 = 0;
	if (!func_130(iParam0, 0) && !func_147(iParam0, 2))
	{
		return iVar0;
	}
	iVar0 = func_218(iParam0, 1258192591);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return 0;
}

void func_146(int* iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		func_104(iParam0, "");
		return;
	}
	func_104(iParam0, _get_label_text_by_hash(iParam1));
}

bool func_147(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(iParam0, iParam1);
}

char* func_148(int iParam0)
{
	if (func_219(iParam0))
	{
		sVar0 = "RP_RS_MOONSHINER_LOCKED_TOOLTIP";
	}
	else if (!func_220(iParam0))
	{
		sVar0 = func_221(iParam0);
	}
	else if (!func_135(iParam0))
	{
		sVar0 = func_222(iParam0);
	}
	else
	{
		sVar0 = func_223(iParam0);
	}
	if (is_string_null_or_empty(sVar0))
	{
		return "";
	}
	return sVar0;
}

int func_149(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 12;
		case 3:
			return 7;
		case 2:
			return 11;
		case 1:
			return 15;
		case 0:
			return 18;
		default:
			break;
	}
	return -1;
}

int func_150(int iParam0)
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

int func_151(var uParam0, int iParam1)
{
	if (!func_130(iParam1, 0))
	{
		return 0;
	}
	if (!func_131(iParam1))
	{
		return 1;
	}
	*uParam0 = iParam1;
	return 1;
}

int func_152(int* iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return 0;
	}
	iParam0->f_196 = iParam1;
	return 1;
}

int func_153(int iParam0)
{
	return iParam0;
}

bool func_154(int* iParam0, int iParam1)
{
	if (!func_130(iParam1, 0) && !func_147(func_153(iParam1), 2))
	{
		return false;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	if (!func_224(&Var0, iParam1, 0))
	{
		return false;
	}
	func_225(&(iParam0->f_133), Var0, -1353574332, 0);
	if (!func_226(&Var0))
	{
		return false;
	}
	return true;
}

int func_155(int iParam0)
{
	return iParam0;
}

int func_156(int iParam0)
{
	switch (iParam0)
	{
		case 101545642:
		case 1089170533:
		case 1967871264:
			return -618962356;
		case -269470195:
		case 1416331014:
		case 2038876476:
			return -218389594;
		case -1623485760:
		case 1412332703:
		case 2017215686:
			return -1722602106;
		case -1882806211:
		case 1488927275:
		case 1949430032:
			return 683067560;
		case -2012017696:
		case -259531576:
		case 1163462253:
			return -497456785;
	}
	return iParam0;
}

void func_157(int iParam0)
{
	if (!func_130(iParam0, 0))
	{
		func_227(0, 0);
		return;
	}
	func_228(iParam0);
	func_229(1);
	func_230(&(Global_1051439->f_3631));
}

void func_158(bool bParam0)
{
	if (bParam0)
	{
		if (!Global_1896738->f_382)
		{
			Global_1896738->f_382 = bParam0;
		}
	}
	else if (Global_1896738->f_382)
	{
		Global_1896738->f_382 = bParam0;
	}
}

int func_159(int iParam0)
{
	if (!func_231(iParam0))
	{
		return 0;
	}
	iVar0 = func_232(iParam0);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	else
	{
		return func_233(iParam0, 1);
	}
	return 0;
}

void func_160(var uParam0, var uParam1)
{
	uParam0->f_4 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		(*uParam1)[iVar0]->f_16 = 0;
		StringCopy((*uParam1)[iVar0], "", 128);
		iVar0++;
	}
}

char* func_161(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RP_ROLE_SUBGROUP_NOVICE";
		case 1:
			return "RP_ROLE_SUBGROUP_PROMISING";
		case 2:
			return "RP_ROLE_SUBGROUP_ESTABLISHED";
		case 3:
			return "RP_ROLE_SUBGROUP_DISTINGUISHED";
		default:
			break;
	}
	return "";
}

bool func_162(var uParam0, var uParam1, char* sParam2)
{
	iVar0 = *uParam1;
	if (uParam0->f_4 >= iVar0)
	{
		return false;
	}
	if (!uParam0->f_5)
	{
		return false;
	}
	*(*uParam1)[uParam0->f_4] = { func_234(sParam2) };
	(*uParam1)[uParam0->f_4]->f_16 = 0;
	uParam0->f_4++;
	_databinding_write_data_int(uParam0->f_1, uParam0->f_4);
	return true;
}

bool func_163(var uParam0)
{
	if (!_databinding_is_data_id_valid(*uParam0))
	{
		return false;
	}
	iVar1 = _databinding_get_array_count(*uParam0);
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		uVar0 = _databinding_get_item_context_by_index(*uParam0, iVar2);
		if (!_databinding_is_data_id_valid(uVar0))
		{
		}
		else
		{
			_databinding_remove_data_entry(uVar0);
		}
		iVar2++;
	}
	_databinding_clear_binding_array(*uParam0);
	return true;
}

bool func_164(var uParam0, var uParam1)
{
	if (*uParam0 && func_41(uParam1))
	{
		return false;
	}
	return *uParam0;
}

int func_165(var uParam0)
{
	return uParam0->f_18.f_1;
}

bool func_166(int* iParam0, int iParam1)
{
	if (!func_235(iParam1, &cVar0, &cVar16))
	{
		return false;
	}
	if (!func_236(&(iParam0->f_158), &cVar16, &cVar0))
	{
		return false;
	}
	return true;
}

var func_167(int* iParam0)
{
	return iParam0->f_196;
}

bool func_168(int* iParam0, int iParam1)
{
	iVar0 = func_237(iParam1);
	if (!func_238(iVar0))
	{
		return false;
	}
	if (!func_239(iVar0))
	{
		return false;
	}
	if (func_240(iVar0))
	{
		return false;
	}
	iVar3 = func_241(iVar0, 0, 0, -1, 1);
	if (!func_242(iVar0, iVar3, &uVar1, 1, 0))
	{
		return false;
	}
	Var4 = -1;
	Var4.f_1 = -1;
	if (!func_243(&Var4, iVar0, 1, 1, 0, 0, 0, -1, 0))
	{
		return false;
	}
	func_225(&(iParam0->f_133), Var4, 1062201268, 0);
	if (!func_226(&Var4))
	{
		return false;
	}
	return true;
}

void func_169(int* iParam0)
{
	iParam0->f_196 = -1;
}

bool func_170(int* iParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return false;
	}
	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = 1105014447;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	if (!func_244(iParam1, &Var0))
	{
		return false;
	}
	if (!func_245(iParam0, &Var0, iParam2))
	{
		return false;
	}
	return true;
}

int func_171(int* iParam0)
{
	return _databinding_get_array_count(iParam0->f_2.f_1);
}

int func_172(int* iParam0, int iParam1)
{
	if (!func_246(&(iParam0->f_2.f_1), iParam1))
	{
		return 0;
	}
	return 1;
}

int func_173(var uParam0)
{
	return *uParam0;
}

bool func_174(var uParam0)
{
	if (uParam0->f_4)
	{
		uParam0->f_4 = 0;
		return true;
	}
	if (uParam0->f_6 != uParam0->f_2)
	{
		return true;
	}
	if (uParam0->f_7 != uParam0->f_3)
	{
		return true;
	}
	if (uParam0->f_5 != uParam0->f_1)
	{
		return true;
	}
	return false;
}

void func_175(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

float func_176(float fParam0, float fParam1, float fParam2)
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

bool func_177(var uParam0)
{
	return uParam0->f_15;
}

void func_178(var uParam0)
{
	uParam0->f_15 = 0;
}

int func_179(int iParam0)
{
	return get_hash_key(func_247(iParam0));
}

int func_180(int* iParam0, int iParam1)
{
	if (!_databinding_is_data_id_valid(iParam0->f_2.f_3.f_5))
	{
		return 0;
	}
	_databinding_write_data_hash_string(iParam0->f_2.f_3.f_5, iParam1);
	return 1;
}

void func_181(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = (5 * iParam0) + 1;
	*iParam2 = iParam0 + 1 * 5;
}

bool func_182(var uParam0, int iParam1, int iParam2)
{
	iVar0 = *uParam0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (!_databinding_is_data_id_valid(uParam0[iVar1]))
		{
			return false;
		}
		_databinding_write_data_int(uParam0[iVar1], iParam1);
		if (!_databinding_is_data_id_valid((*uParam0)[iVar1]->f_1))
		{
			return false;
		}
		_databinding_write_data_bool((*uParam0)[iVar1]->f_1, iParam1 <= iParam2);
		iParam1++;
		iVar1++;
	}
	return true;
}

int func_183(int iParam0, int iParam1)
{
	iVar0 = (iParam1 - 1);
	if (iVar0 < 0)
	{
		return 0;
	}
	if (!func_248(func_149(iParam0), iVar0, &vVar1))
	{
		return 0;
	}
	return vVar1.z;
}

bool func_184(int* iParam0, int iParam1, int iParam2, int iParam3, var uParam4, char[4] cParam5, int iParam6)
{
	if (iParam2 == 0)
	{
		return false;
	}
	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = 1105014447;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	if (!func_249(&Var0, iParam2, iParam3, uParam4, cParam5, iParam6))
	{
		return false;
	}
	if (!func_250(iParam0, &Var0, iParam1))
	{
		return false;
	}
	return true;
}

bool func_185(var uParam0)
{
	if ((uParam0->f_6 == 0 && uParam0->f_7 == 0) && uParam0->f_5 == 0)
	{
		return false;
	}
	return true;
}

int func_186(int* iParam0)
{
	return _databinding_get_array_count(iParam0->f_2.f_3.f_1);
}

int func_187(int* iParam0)
{
	if (!_databinding_is_data_id_valid(iParam0->f_2.f_3.f_7))
	{
		return 0;
	}
	return _databinding_read_data_int(iParam0->f_2.f_3.f_7);
}

bool func_188(int* iParam0, int iParam1, var uParam2)
{
	iVar0 = _databinding_get_array_count(iParam0->f_2.f_3.f_1);
	if (iParam1 < 0 || iParam1 >= iVar0)
	{
		return false;
	}
	*uParam2 = _databinding_get_item_context_by_index(iParam0->f_2.f_3.f_1, iParam1);
	return true;
}

void func_189(var uParam0)
{
	uParam0->f_15 = 1;
}

bool func_190(var uParam0)
{
	if (!func_251(uParam0))
	{
		return false;
	}
	iVar0 = *uParam0;
	if (!func_130(iVar0, 0))
	{
		if (func_147(*uParam0, 2))
		{
		}
		else
		{
			return false;
		}
	}
	if (func_210(iVar0, -1220351246))
	{
		return false;
	}
	if (!func_252(iVar0, 0))
	{
		return false;
	}
	iVar1 = 0;
	bVar2 = false;
	if (func_253(iVar0, iVar1) != 3 && !bVar2)
	{
		return false;
	}
	return true;
}

bool func_191(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_2[iVar0]->f_1 != iParam1)
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_192(int* iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!func_147(iParam1, 2))
	{
		return false;
	}
	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = 1105014447;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	if (!func_254(&Var0, iParam1, iParam2, bParam3))
	{
		return false;
	}
	if (!func_255(iParam0, &Var0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_193(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	if (!func_130(iParam1, 0))
	{
		return false;
	}
	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = 1105014447;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	if (!func_256(&Var0, iParam1, iParam2, iParam3, bParam4))
	{
		return false;
	}
	if (!func_255(iParam0, &Var0, iParam5))
	{
		return false;
	}
	return true;
}

int func_194(int* iParam0)
{
	return _databinding_get_array_count(iParam0->f_2.f_3.f_2);
}

int func_195(int* iParam0, int iParam1)
{
	if (!func_246(&(iParam0->f_2.f_3.f_2), iParam1))
	{
		return 0;
	}
	return 1;
}

var func_196(var uParam0, int iParam1)
{
	return func_257(*(*uParam0)[iParam1]);
}

void func_197(var uParam0, char* sParam1)
{
	_databinding_write_data_string(uParam0->f_2, sParam1);
}

void func_198(var uParam0, int iParam1)
{
	(*uParam0)[iParam1]->f_16 = 1;
}

void func_199(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_258(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)]);
	Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)] = iParam0;
	(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_2 = iParam2;
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_3 = iParam3;
	}
}

int func_200(int iParam0)
{
	return iParam0;
}

int func_201(int iParam0, int iParam1)
{
	iVar0 = (iParam1 - 1);
	if (iVar0 < 0)
	{
		return 0;
	}
	if (!func_248(func_149(iParam0), iVar0, &Var1))
	{
		return 0;
	}
	return Var1.f_1;
}

int func_202(int iParam0)
{
	return func_259(func_149(iParam0));
}

int func_203(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -1733092640;
		case 3:
			return 2103384153;
		case 2:
			return -428390721;
		case 1:
			return 1384535894;
		case 0:
			return 273608212;
		default:
			break;
	}
	return 0;
}

int func_204(bool bParam0)
{
	if (func_260() == -1)
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

int func_205(int* iParam0, char* sParam1)
{
	return func_261(&(iParam0->f_2.f_3.f_113), _create_var_string(2, "RP_RANK_LOCKED", sParam1), 0);
}

int func_206(int* iParam0, char* sParam1)
{
	return func_261(&(iParam0->f_2.f_3.f_113), _create_var_string(2, "RP_RANK_COMPLETE", sParam1), 1);
}

int func_207(int* iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4)
{
	return func_261(&(iParam0->f_2.f_3.f_113), _create_var_string(2, "RP_RANK_XP", sParam1, sParam2, sParam3), iParam4);
}

char* func_208(int iParam0)
{
	return _0x2b6846401d68e563(to_float(iParam0), 0);
}

void func_209(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	uParam0->f_1 = iParam3;
	uParam0->f_2 = iParam1;
	uParam0->f_3 = iParam2;
	uParam0->f_4 = iParam4;
	uParam0->f_4 = 0;
}

bool func_210(int iParam0, int iParam1)
{
	if (!func_130(iParam0, 0))
	{
		return func_262(func_153(iParam0), iParam1);
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

int func_211(int iParam0, bool bParam1)
{
	if (!func_130(iParam0, 0))
	{
		return func_263(func_153(iParam0), bParam1);
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

bool func_212(int iParam0)
{
	if (!func_130(iParam0, 0))
	{
		return false;
	}
	return func_264(iParam0) == 1802292908;
}

bool func_213(int iParam0)
{
	if (!func_130(iParam0, 0))
	{
		return false;
	}
	else if (!func_212(iParam0))
	{
		return false;
	}
	if (func_210(iParam0, 1989861793))
	{
		iVar0 = func_211(iParam0, 0);
		if (iVar0 != 0 && _0xfbe782b3165ac8ec(iVar0))
		{
			return true;
		}
	}
	return func_216(iParam0, 1, 0, 0) > 0;
}

bool func_214(int iParam0, int iParam1)
{
	if (_item_database_fillout_tag_data(iParam0, &Var0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if (Var0[iVar42]->f_1 == iParam1)
			{
				return true;
			}
			iVar42++;
		}
	}
	return false;
}

int func_215(int iParam0, int iParam1)
{
	if (!func_130(iParam1, 0))
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = iParam0;
	iVar1 = func_265(iParam1, -442898163);
	Var2.f_1 = 10;
	iVar25 = _0x48229ce0c7938237(iVar0);
	iVar26 = 0;
	while (iVar26 < iVar25)
	{
		if (!_0x8d029948ca29409b(iVar0, iVar26, &Var2))
		{
		}
		else
		{
			iVar24 = Var2;
			if (iParam1 == iVar24)
			{
			}
			else if (!func_130(iVar24, 0))
			{
			}
			else if (!func_214(iVar24, -442898163))
			{
			}
			else if (func_265(iVar24, -442898163) != iVar1)
			{
			}
			else if (func_216(iVar24, 1, 0, 0) <= 0)
			{
			}
			else
			{
				return 1;
			}
		}
		iVar26++;
	}
	return 0;
}

int func_216(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_266(iParam0) && !bParam2)
	{
		return get_ped_ammo_by_type(Global_34, iParam0);
	}
	return _0xe787f05dfc977bde(func_204(bParam1), iParam0, iParam3);
}

bool func_217(int iParam0, bool bParam1)
{
	iVar0 = func_267(iParam0, 1);
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_268(iVar0, -2141192156))
	{
		return false;
	}
	if (bParam1)
	{
		if (!func_242(iVar0, -2141192156, &uVar1, 0, 0))
		{
			return false;
		}
	}
	return true;
}

int func_218(int iParam0, int iParam1)
{
	if (!func_130(iParam0, 0))
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
			if (Var0.f_18[iVar35]->f_1 != iParam1)
			{
			}
			else
			{
				if (&Var0.f_18[iVar35] == 0)
				{
					return 0;
				}
				return &(Var0.f_18[iVar35]);
			}
			iVar35++;
		}
	}
	return 0;
}

bool func_219(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			if (!_unlock_is_unlocked(-1348352077))
			{
				return true;
			}
			break;
	}
	return false;
}

int func_220(int iParam0)
{
	iVar0 = func_269(iParam0);
	if (iVar0 != 0)
	{
		return func_270(iVar0);
	}
	return 0;
}

char* func_221(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return "RP_RS_COLLECTOR_START_TOOLTIP";
		case 3:
			return "RP_RS_BOUNTY_HUNTER_START_TOOLTIP";
		case 2:
			return "RP_RS_TRADER_START_TOOLTIP";
		case 1:
			return "RP_RS_MOONSHINER_START_TOOLTIP";
		case 0:
			return "RP_RS_NATURALIST_START_TOOLTIP";
		default:
			break;
	}
	return "";
}

char* func_222(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return "RP_RS_COLLECTOR_PURCHASE_REQUEST_TOOLTIP";
		case 3:
			return "RP_RS_BOUNTY_HUNTER_PURCHASE_REQUEST_TOOLTIP";
		case 2:
			return "RP_RS_TRADER_PURCHASE_REQUEST_TOOLTIP";
		case 1:
			return "RP_RS_MOONSHINER_PURCHASE_REQUEST_TOOLTIP";
		case 0:
			return "RP_RS_NATURALIST_PURCHASE_REQUEST_TOOLTIP";
		default:
			break;
	}
	return "";
}

char* func_223(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return "RP_RS_COLLECTOR_TOOLTIP";
		case 3:
			return "RP_RS_BOUNTY_HUNTER_TOOLTIP";
		case 2:
			return "RP_RS_TRADER_TOOLTIP";
		case 1:
			return "RP_RS_MOONSHINER_TOOLTIP";
		case 0:
			return "RP_RS_NATURALIST_TOOLTIP";
		default:
			break;
	}
	return "";
}

bool func_224(int* iParam0, int iParam1, int iParam2)
{
	iVar0 = func_267(iParam1, 1);
	if (iVar0 == 0)
	{
		return false;
	}
	return func_243(iParam0, iVar0, 1, 0, iParam2, 0, -2141192156, -1, 0);
}

int func_225(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = 4;
	while (iVar0 >= 1)
	{
		_copy_memory(uParam0->f_2[iVar0], uParam0->f_2[(iVar0 - 1)], 3);
		iVar0 = (iVar0 + -1);
	}
	uParam0->f_2[0] = iParam1;
	uParam0->f_2[0]->f_1 = iParam2;
	uParam0->f_2[0]->f_2 = iParam3;
	return 1;
}

bool func_226(int* iParam0)
{
	if (!_cashinventory_transaction_get_basket_is_valid(*iParam0))
	{
		func_129(*iParam0, 0, 0, 0);
		return true;
	}
	if (_cashinventory_transaction_get_num_of_items(*iParam0) == 0)
	{
		_cashinventory_transaction_delete(*iParam0);
		func_129(*iParam0, 4, 0, 0);
		return true;
	}
	if (!_cashinventory_transaction_checkout(*iParam0))
	{
		func_129(*iParam0, 2, 0, 0);
		return false;
	}
	func_129(*iParam0, 1, 0, 0);
	iVar0 = _cashinventory_transaction_get_action(*iParam0);
	if (iVar0 == 2113164098 || iVar0 == 541670136)
	{
		iParam0->f_3 = 1;
	}
	iParam0->f_1 = *iParam0;
	*iParam0 = -1;
	iParam0->f_2 = 0;
	return true;
}

void func_227(bool bParam0, bool bParam1)
{
	if (!func_271())
	{
		func_272(1);
	}
	func_229(1);
	if (bParam0 || bParam1)
	{
		Global_1051439->f_3629 = 0;
		func_229(8);
		if (bParam1)
		{
			func_229(16);
		}
	}
	func_230(&(Global_1051439->f_3631));
}

void func_228(int iParam0)
{
	if (!func_271())
	{
		func_272(1);
	}
	Global_1051439->f_3630 = iParam0;
	iVar0 = func_273(1);
	if (iVar0 != -1)
	{
		func_274(iVar0);
		func_275(0);
	}
	else
	{
		func_275(1);
	}
}

void func_229(int iParam0)
{
	Global_1051439->f_3628 = (Global_1051439->f_3628 || iParam0);
}

void func_230(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_231(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 22)
	{
		return false;
	}
	return true;
}

int func_232(int iParam0)
{
	if (!func_231(iParam0))
	{
		return 0;
	}
	return &(Global_1293346->f_3009[iParam0]);
}

int func_233(int iParam0, bool bParam1)
{
	if (!func_231(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		iVar0 = func_150(iParam0);
		if (func_130(iVar0, 0))
		{
			if (iParam0 == 0)
			{
				iVar1 = func_276(255);
			}
			else
			{
				iVar1 = func_278(iVar0, func_277(1), -1990194462, 1, 0, 0);
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
		iVar0 = func_279(iParam0);
		if (func_130(iVar0, 0))
		{
			if (iParam0 == 0)
			{
				iVar1 = _0xdb438cc9bc6f4022();
			}
			else
			{
				iVar1 = func_278(iVar0, func_277(1), -1990194462, 1, 0, 0);
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

struct<16> func_234(char* sParam0)
{
	StringCopy(&cVar0, sParam0, 128);
	return cVar0;
}

bool func_235(int iParam0, char* sParam1, char* sParam2)
{
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "Role_Upgrade_Unlock_sounds", 128);
			StringCopy(sParam2, "role_upgrade_unlock", 128);
			return true;
		case 1:
			StringCopy(sParam1, "RDRO_HUD_Moonshiner_Sounds", 128);
			StringCopy(sParam2, "role_unlock_moonshiner", 128);
			return true;
		default:
			break;
	}
	return false;
}

bool func_236(int* iParam0, char* sParam1, char* sParam2)
{
	if (!func_49(*iParam0, 0))
	{
		return false;
	}
	if (func_49(*iParam0, 1))
	{
		return false;
	}
	if (is_string_null_or_empty(sParam1))
	{
		return false;
	}
	if (is_string_null_or_empty(sParam2))
	{
		return false;
	}
	func_30(iParam0, 1);
	StringCopy(&(iParam0->f_1), sParam2, 128);
	StringCopy(&(iParam0->f_17), sParam1, 128);
	_0x0f2a2175734926d8(&(iParam0->f_17), &(iParam0->f_1));
	return true;
}

int func_237(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -519963330;
	}
	return 0;
}

bool func_238(int iParam0)
{
	return iParam0 != 0;
}

bool func_239(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_buy_award_key_valid(iParam0);
}

bool func_240(int iParam0)
{
	if (!func_238(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346->f_2011)
	{
		if (Global_1293346->f_2011.f_1[iVar0]->f_4 == iParam0 && Global_1293346->f_2011.f_1[iVar0]->f_5 == 0)
		{
			return _0xe10f2d7715ababec(Global_1293346->f_2011.f_1[iVar0]);
		}
		iVar0++;
	}
	return false;
}

int func_241(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_239(iParam0))
	{
		return 0;
	}
	bVar1 = func_280(iParam3, 2);
	bVar2 = func_281(iParam0, -570078785, bVar1);
	bVar3 = func_281(iParam0, -915411861, bVar1);
	if (func_281(iParam0, 997808187, bVar1))
	{
		iParam1 = 997808187;
	}
	else if (bParam4 && (func_282(iParam0, &iVar0) || func_283(iParam0, &iVar0)))
	{
		iParam1 = iVar0;
	}
	else if (bVar2 && !bVar3)
	{
		iParam1 = -570078785;
	}
	else if (bVar2 && bVar3)
	{
		if (func_284())
		{
			iParam1 = -570078785;
		}
		else
		{
			iParam1 = -915411861;
		}
	}
	else if (bVar3)
	{
		iParam1 = -915411861;
	}
	else if (func_285(15) && func_281(iParam0, 369710026, bVar1))
	{
		iParam1 = 369710026;
	}
	if (iParam1 == 0 && bParam2)
	{
		return -915411861;
	}
	return iParam1;
}

bool func_242(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (!func_286(iParam0, iParam1, &Var0, &iVar31, 0, 1))
	{
		return false;
	}
	iVar34 = -1;
	if (Global_1915715->f_20638)
	{
		iVar34 = Global_1915715->f_20241;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32] == 0)
		{
		}
		else
		{
			if (&Var0[iVar32] == 2084597891)
			{
				if (!bParam4 && !func_287(Var0[iVar32]->f_1))
				{
					return false;
				}
			}
			else if (&Var0[iVar32] == 773203532)
			{
				if (!bParam4 && !func_288(Var0[iVar32]->f_1))
				{
					return false;
				}
			}
			else
			{
				iVar33 = func_289(iVar34, &(Var0[iVar32]));
				if (iVar33 != 0)
				{
					iVar35 = func_290(&(Var0[iVar32]), iVar33);
				}
				else
				{
					iVar35 = func_291(&(Var0[iVar32]), 0, bParam3, 1);
				}
				if (iVar35 < Var0[iVar32]->f_1)
				{
					*uParam2 = { *Var0[iVar32] };
					return false;
				}
			}
			iVar32++;
		}
	}
	return true;
}

bool func_243(int* iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_9 = iParam2;
	Var0.f_10 = iParam3;
	Var0.f_14 = iParam5;
	if (!func_292(iParam0, iParam1, &Var0, iParam4, iParam6, iParam7, bParam8))
	{
		return false;
	}
	func_293(Var0);
	return true;
}

bool func_244(int iParam0, var uParam1)
{
	iVar0 = iParam0;
	iVar1 = func_294(func_96(iParam0), func_109(iParam0));
	uParam1->f_42 = iVar0;
	uParam1->f_22 = func_96(iParam0);
	uParam1->f_19 = func_295(iParam0);
	uParam1->f_18 = func_296(iParam0);
	uParam1->f_23 = func_297(iVar1);
	if (func_219(iParam0))
	{
		*uParam1 = 0;
		uParam1->f_43 = 1;
	}
	else if (func_298(iParam0))
	{
		uParam1->f_44 = 1;
	}
	func_134(iParam0, func_110(uParam1->f_22 + 1, 0, func_109(iParam0)), &(uParam1->f_40), &(uParam1->f_41));
	if (!func_299(uParam1->f_40, uParam1->f_41, &(uParam1->f_24)))
	{
	}
	if (!func_300(iParam0, &(uParam1->f_16), &(uParam1->f_17)))
	{
	}
	if (!func_301(iParam0, &(uParam1->f_20), &(uParam1->f_21)))
	{
	}
	uParam1->f_4 = 1797523117;
	uParam1->f_5 = 2114750871;
	uParam1->f_7 = -672301300;
	uParam1->f_8 = 1;
	uParam1->f_9 = 1;
	func_302(iParam0, uParam1);
	func_303(iParam0, uParam1);
	return true;
}

bool func_245(int* iParam0, var uParam1, int iParam2)
{
	Var8.f_18 = 22;
	iVar50 = func_171(iParam0);
	if (iParam2 >= iVar50)
	{
		StringCopy(&cVar0, "role_card_", 64);
		StringIntConCat(&cVar0, uParam1->f_42, 64);
		if (!func_304(&Var8, iParam0->f_2.f_1, cVar0, uParam1))
		{
			return false;
		}
		if (!func_305(iParam0, &Var8))
		{
			return false;
		}
	}
	else if (func_306(iParam0, iParam2, &uVar49))
	{
		if (!func_307(uVar49, uParam1))
		{
			return false;
		}
	}
	else
	{
		return false;
	}
	return true;
}

bool func_246(var uParam0, int iParam1)
{
	if (!_databinding_is_data_id_valid(*uParam0))
	{
		return false;
	}
	iVar0 = _databinding_get_array_count(*uParam0);
	if (iParam1 < 0 || iParam1 >= iVar0)
	{
		return false;
	}
	iVar1 = iVar0;
	while (iVar1 >= iParam1)
	{
		_0x6318fb3be37e11b3(*uParam0, iParam1);
		iVar1 = (iVar1 + -1);
	}
	return true;
}

char* func_247(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RP_NOVICE_KIT";
		case 1:
			return "RP_PROMISING_KIT";
		case 2:
			return "RP_ESTABLISHED_KIT";
		case 3:
			return "RP_DISTINGUISHED_KIT";
		default:
			break;
	}
	return "";
}

bool func_248(int iParam0, int iParam1, var uParam2)
{
	Var0 = Global_1139381->f_3;
	Var0.f_2 = 351001518;
	Var0.f_3 = func_308(iParam0);
	Var0.f_4 = iParam1;
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -103652163;
		_datafile_get_int(uParam2, &Var0);
		Var0.f_2 = -465378138;
		_datafile_get_int(&(uParam2->f_1), &Var0);
		Var0.f_2 = -1685174516;
		_datafile_get_hash(&(uParam2->f_2), &Var0);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_249(var uParam0, int iParam1, int iParam2, var uParam3, char[4] cParam4, int iParam5)
{
	if (iParam1 == 0)
	{
		return false;
	}
	uParam0->f_4 = 1797523117;
	uParam0->f_5 = -290657237;
	uParam0->f_18 = uParam3;
	uParam0->f_19 = cParam4;
	uParam0->f_39 = iParam2;
	uParam0->f_41 = iParam5 >= iParam2;
	uParam0->f_40 = iParam2 <= iParam5;
	*uParam0 = (uParam0->f_40 && uParam0->f_41);
	StringCopy(&(uParam0->f_42), "", 128);
	if (!func_309(iParam1, &(uParam0->f_22)))
	{
	}
	Var0.f_2 = 5;
	Var0.f_18 = 8;
	if (func_310(iParam1) && func_311(iParam1, &Var0))
	{
		func_312(uParam0, &(Var0.f_2));
		uParam0->f_38 = Var0.f_1;
	}
	else if (func_313(iParam1, &iVar35))
	{
		if (func_130(iVar35, 0))
		{
			uParam0->f_38 = func_314(iVar35);
			Var36.f_8 = 10;
			Var36.f_8.f_1.f_4 = 15;
			Var36.f_8.f_1.f_36 = 10;
			Var36.f_8.f_1.f_47.f_4 = 15;
			Var36.f_8.f_1.f_47.f_36 = 10;
			Var36.f_8.f_1.f_47.f_47.f_4 = 15;
			Var36.f_8.f_1.f_47.f_47.f_36 = 10;
			Var36.f_8.f_1.f_47.f_47.f_47.f_4 = 15;
			Var36.f_8.f_1.f_47.f_47.f_47.f_36 = 10;
			Var36.f_8.f_1.f_47.f_47.f_47.f_47.f_4 = 15;
			Var36.f_8.f_1.f_47.f_47.f_47.f_47.f_36 = 10;
			Var36.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
			Var36.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
			Var36.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
			Var36.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
			Var36.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
			Var36.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
			Var36.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
			Var36.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
			Var36.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
			Var36.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
			Var36.f_480 = 10;
			Var36.f_480.f_1.f_4 = 10;
			Var36.f_480.f_1.f_25.f_4 = 10;
			Var36.f_480.f_1.f_25.f_25.f_4 = 10;
			Var36.f_480.f_1.f_25.f_25.f_25.f_4 = 10;
			Var36.f_480.f_1.f_25.f_25.f_25.f_25.f_4 = 10;
			Var36.f_480.f_1.f_25.f_25.f_25.f_25.f_25.f_4 = 10;
			Var36.f_480.f_1.f_25.f_25.f_25.f_25.f_25.f_25.f_4 = 10;
			Var36.f_480.f_1.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_4 = 10;
			Var36.f_480.f_1.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_4 = 10;
			Var36.f_480.f_1.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_4 = 10;
			Var36.f_732.f_2 = 5;
			Var36.f_732.f_18 = 8;
			if (_0x2a610bee7d341cc4(iVar35, &Var36))
			{
				func_312(uParam0, &(Var36.f_732.f_2));
			}
		}
	}
	return true;
}

bool func_250(int* iParam0, var uParam1, int iParam2)
{
	iVar39 = func_186(iParam0);
	if (iParam2 >= iVar39)
	{
		StringCopy(&cVar0, "rank_item_", 64);
		StringIntConCat(&cVar0, iParam2, 64);
		if (!func_315(&uVar8, iParam0->f_2.f_3.f_1, cVar0, uParam1))
		{
			return false;
		}
		if (!func_316(iParam0, &uVar8))
		{
			return false;
		}
	}
	else if (func_188(iParam0, iParam2, &uVar38))
	{
		if (!func_317(&uVar38, uParam1))
		{
			return false;
		}
	}
	else
	{
		return false;
	}
	return true;
}

bool func_251(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&uParam0->f_1[iVar0] == -664197965 && !uParam0->f_1[iVar0]->f_1)
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_252(int iParam0, bool bParam1)
{
	if (!func_210(iParam0, 947377998))
	{
		return false;
	}
	if (bParam1)
	{
		if (func_210(iParam0, -1090933859))
		{
			return func_211(iParam0, 1) != 0;
		}
		if ((func_318(iParam0, -915411861, 0) || func_318(iParam0, 600942249, 0)) || func_318(iParam0, -570078785, 0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

int func_253(int iParam0, int iParam1)
{
	if (!func_130(iParam0, 0) && !func_147(func_153(iParam0), 2))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		iVar0 = func_319(0);
	}
	else
	{
		iVar0 = iParam1;
	}
	if (iVar0 == 2026485318)
	{
		if (func_210(iParam0, -133342564))
		{
			return 2;
		}
	}
	else if (iVar0 == 24043185)
	{
		if (func_210(iParam0, -287432114))
		{
			return 2;
		}
	}
	return 3;
}

bool func_254(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_147(iParam1, 2))
	{
		return false;
	}
	Var0.f_2 = 5;
	Var0.f_18 = 8;
	if (!_0x74c3b1093728d263(iParam1, &Var0))
	{
		return false;
	}
	uParam0->f_4 = 1797523117;
	uParam0->f_64 = iParam1;
	uParam0->f_65 = 1;
	uParam0->f_5 = -1171582810;
	uParam0->f_21 = _get_label_text_by_hash(Var0);
	uParam0->f_22 = Var0.f_1;
	uParam0->f_66 = iParam2;
	func_320(uParam0, &(Var0.f_2));
	if (func_141(iParam1))
	{
		uParam0->f_18 = 1;
		if (func_321(iParam1))
		{
			if (func_322(iParam1))
			{
				uParam0->f_24 = 1;
			}
		}
	}
	iVar35 = func_323(iParam1, -915411861, 1, 0, 0);
	if (iVar35 > 0)
	{
		switch (func_324(iParam1, 0, 1))
		{
			case -570078785:
				StringCopy(&(uParam0->f_29), _create_var_string(2, "RP_RETAIL_GOLD_PRICE", func_325(iVar35)), 128);
				break;
			default:
				StringCopy(&(uParam0->f_29), _create_var_string(10, "RP_RETAIL_PRICE", func_326(iVar35)), 128);
				break;
		}
	}
	*uParam0 = (uParam0->f_24 || (uParam0->f_18 && func_321(iParam1)));
	if (func_141(iParam1) && !func_321(iParam1))
	{
		uParam0->f_61 = 1;
		StringCopy(&(uParam0->f_45), func_208(func_327(func_155(iParam1), 1)), 128);
		uParam0->f_62 = func_328(iParam1);
	}
	if (uParam0->f_61)
	{
		if (func_141(iParam1) && !func_321(iParam1))
		{
			if (bParam3)
			{
			}
			else
			{
				uParam0->f_26 = func_328(iParam1);
			}
		}
		else
		{
			uParam0->f_26 = 0;
		}
		uParam0->f_25 = _create_var_string(2, "RP_INPUT_UNLOCK", func_327(func_155(iParam1), 1));
		uParam0->f_27 = 1;
		uParam0->f_28 = -245850526;
	}
	return true;
}

bool func_255(int* iParam0, var uParam1, int iParam2)
{
	if (uParam1->f_65)
	{
	}
	iVar48 = func_194(iParam0);
	if (iParam2 >= iVar48)
	{
		StringCopy(&cVar0, "kit_item_", 64);
		StringIntConCat(&cVar0, iParam2, 64);
		if (!func_329(&uVar8, iParam0->f_2.f_3.f_2, cVar0, uParam1))
		{
			return false;
		}
		if (!func_330(iParam0, &uVar8))
		{
			return false;
		}
	}
	else if (func_331(iParam0, iParam2, &uVar47))
	{
		if (!func_332(&uVar47, uParam1))
		{
			return false;
		}
	}
	else
	{
		return false;
	}
	return true;
}

bool func_256(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (!func_130(iParam1, 0))
	{
		return false;
	}
	Var0.f_8 = 10;
	Var0.f_8.f_1.f_4 = 15;
	Var0.f_8.f_1.f_36 = 10;
	Var0.f_8.f_1.f_47.f_4 = 15;
	Var0.f_8.f_1.f_47.f_36 = 10;
	Var0.f_8.f_1.f_47.f_47.f_4 = 15;
	Var0.f_8.f_1.f_47.f_47.f_36 = 10;
	Var0.f_8.f_1.f_47.f_47.f_47.f_4 = 15;
	Var0.f_8.f_1.f_47.f_47.f_47.f_36 = 10;
	Var0.f_8.f_1.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_8.f_1.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_480 = 10;
	Var0.f_480.f_1.f_4 = 10;
	Var0.f_480.f_1.f_25.f_4 = 10;
	Var0.f_480.f_1.f_25.f_25.f_4 = 10;
	Var0.f_480.f_1.f_25.f_25.f_25.f_4 = 10;
	Var0.f_480.f_1.f_25.f_25.f_25.f_25.f_4 = 10;
	Var0.f_480.f_1.f_25.f_25.f_25.f_25.f_25.f_4 = 10;
	Var0.f_480.f_1.f_25.f_25.f_25.f_25.f_25.f_25.f_4 = 10;
	Var0.f_480.f_1.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_4 = 10;
	Var0.f_480.f_1.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_4 = 10;
	Var0.f_480.f_1.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_4 = 10;
	Var0.f_732.f_2 = 5;
	Var0.f_732.f_18 = 8;
	if (!_0x2a610bee7d341cc4(iParam1, &Var0))
	{
		return false;
	}
	uParam0->f_4 = 1797523117;
	if (func_333(iParam1) && func_334())
	{
		uParam0->f_7 = 175246289;
		uParam0->f_8 = 1;
		uParam0->f_9 = 1;
	}
	uParam0->f_63 = iParam1;
	uParam0->f_65 = 0;
	uParam0->f_5 = 351019360;
	uParam0->f_21 = _get_label_text_by_hash(func_335(iParam1));
	uParam0->f_22 = Var0.f_732.f_1;
	uParam0->f_66 = iParam3;
	func_320(uParam0, &(Var0.f_732.f_2));
	if (func_141(iParam1))
	{
		uParam0->f_18 = 1;
		if (func_143(iParam1))
		{
			if (func_142(iParam1, iParam2))
			{
				uParam0->f_24 = 1;
			}
		}
	}
	iVar767 = func_336(iParam1, 0, 1, -1, 1);
	if (!func_337(iParam1, iLocal_774, &uVar768))
	{
	}
	if (iParam2 != 0)
	{
		if (func_214(iParam1, -442898163))
		{
			if (!func_338(iParam2, iParam1, &iVar767, &uVar768))
			{
			}
		}
	}
	if (iLocal_775 > 0)
	{
		switch (iLocal_774)
		{
			case -570078785:
				StringCopy(&(uParam0->f_29), _create_var_string(2, "RP_RETAIL_GOLD_PRICE", func_325(iLocal_775)), 128);
				break;
			default:
				StringCopy(&(uParam0->f_29), _create_var_string(10, "RP_RETAIL_PRICE", func_326(iLocal_775)), 128);
				break;
		}
	}
	*uParam0 = (uParam0->f_24 || (uParam0->f_18 && func_143(iParam1)));
	if (func_141(iParam1) && !func_143(iParam1))
	{
		uParam0->f_61 = 1;
		StringCopy(&(uParam0->f_45), func_208(func_327(iParam1, 1)), 128);
		uParam0->f_62 = func_144(iParam1);
	}
	if (uParam0->f_61)
	{
		if (func_141(iParam1) && !func_143(iParam1))
		{
			if (bParam4)
			{
			}
			else
			{
				uParam0->f_26 = func_144(iParam1);
			}
		}
		else
		{
			uParam0->f_26 = 0;
		}
		uParam0->f_25 = _create_var_string(2, "RP_INPUT_UNLOCK", func_327(iParam1, 1));
		uParam0->f_27 = 1;
		uParam0->f_28 = -1042248069;
	}
	return true;
}

var func_257(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

void func_258(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_339(&(uParam0->f_4));
}

int func_259(int iParam0)
{
	if (!func_231(iParam0))
	{
		return 0;
	}
	iVar0 = func_340(iParam0);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	else
	{
		return func_233(iParam0, 0);
	}
	return 0;
}

int func_260()
{
	return Global_1572887->f_13;
}

int func_261(var uParam0, char* sParam1, bool bParam2)
{
	if (!*uParam0)
	{
		return 0;
	}
	_databinding_write_data_string(uParam0->f_1, sParam1);
	_databinding_write_data_bool(uParam0->f_2, bParam2);
	return 1;
}

int func_262(int iParam0, int iParam1)
{
	if (!func_147(iParam0, 2))
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

int func_263(int iParam0, bool bParam1)
{
	if (!func_147(iParam0, 2))
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

int func_264(int iParam0)
{
	if (!func_130(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_265(int iParam0, int iParam1)
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

bool func_266(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_267(int iParam0, bool bParam1)
{
	if (!func_252(iParam0, bParam1))
	{
		return 0;
	}
	if (iParam0 == 1949608568)
	{
		return func_211(1657716792, 1);
	}
	else if (iParam0 == 20024186)
	{
		return func_211(963726415, 1);
	}
	else if (iParam0 == 318000298)
	{
		return func_211(-1939515319, 1);
	}
	else if (iParam0 == -1771777013)
	{
		return func_211(-1903059161, 1);
	}
	else if (iParam0 == 375366730)
	{
		return func_211(-252071901, 1);
	}
	else if (iParam0 == -1309887827)
	{
		return func_211(-611782825, 1);
	}
	return func_211(iParam0, 1);
}

bool func_268(int iParam0, int iParam1)
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
		return false;
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
					return true;
				}
				iVar475 = iLocal_479 + 1;
			}
		}
		iVar474 = iLocal_478 + 1;
	}
	return false;
}

int func_269(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 5;
		case 3:
			return 3;
		case 2:
			return 4;
		case 1:
			return 6;
		case 0:
			return 7;
		default:
			break;
	}
	return 0;
}

int func_270(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!network_is_game_in_progress())
	{
		return 0;
	}
	iVar0 = func_341(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (_unlock_is_unlocked(iVar0))
	{
		iVar1 = func_342(1, iParam0);
		if (iVar1 == 0)
		{
			return 0;
		}
		if (_0xfbe782b3165ac8ec(iVar1))
		{
			return 1;
		}
	}
	return 0;
}

bool func_271()
{
	return func_343(4);
}

void func_272(bool bParam0)
{
	if (bParam0)
	{
		func_229(4);
	}
	else
	{
		func_344(4);
	}
}

int func_273(bool bParam0)
{
	if (!func_345())
	{
		return 3;
	}
	if ((_get_number_of_references_of_script_with_name_hash(29649618) > 0 && Global_1051439->f_3630 == 0) && !bParam0)
	{
		return 45;
	}
	if (Global_1915715->f_20638)
	{
		return 10;
	}
	if (Global_1051439->f_3718 != 0)
	{
		return 0;
	}
	iVar0 = get_player_index();
	if (is_player_dead(iVar0))
	{
		return 12;
	}
	if ((func_346(1106247680, 0) || _is_ped_hogtied(Global_34)) || _is_ped_hogtying(Global_34))
	{
		return 13;
	}
	if (_0x1d46b417f926d34d(Global_34) || is_ped_in_any_train(Global_34))
	{
		iVar1 = get_vehicle_ped_is_using(Global_34);
		if (does_entity_exist(iVar1))
		{
			iVar2 = get_entity_model(iVar1);
			switch (iVar2)
			{
				case -1988548788:
				case 518773733:
				case 742064790:
				case 749266870:
					return 14;
			}
		}
		return 11;
	}
	if (_0x038b1f1674f0e242(Global_34) && !Global_1915715->f_22504.f_1)
	{
		return 16;
	}
	if (_is_ped_carrying(Global_34))
	{
		return 17;
	}
	if (_0xd04241bbf6d03a5e(player_ped_id()) != 0)
	{
		return 18;
	}
	if (is_ped_using_any_scenario(Global_34))
	{
		iVar3 = _get_scenario_point_type_ped_is_using(Global_34);
		if ((iVar3 != -1241981548 && iVar3 != -1177373461) && iVar3 != -447259824)
		{
			return 19;
		}
	}
	if (func_347(255))
	{
		return 3;
	}
	if (is_minigame_in_progress())
	{
		return 44;
	}
	if ((Global_1108365->f_935.f_28 != -1 && Global_1108365->f_935.f_28 != 6) && Global_1108365->f_935.f_28 != 8)
	{
		if (func_348(Global_1108365->f_935.f_28))
		{
			return 36;
		}
		else
		{
			return 37;
		}
	}
	if (_0x2942457417a5fd24(Global_34) >= 1f)
	{
		return 22;
	}
	if (Global_1572887->f_106.f_75 >= 11 && Global_1572887->f_106.f_75 < 15)
	{
		return 42;
	}
	if (((is_ped_falling(Global_34) || is_ped_climbing(Global_34)) || _is_ped_sliding(Global_34)) || is_ped_swimming(Global_34))
	{
		return 15;
	}
	if (_0x7fc84e85d98f063d(Global_34))
	{
		return 21;
	}
	if (func_349())
	{
		return 43;
	}
	return -1;
}

void func_274(int iParam0)
{
	Global_1915715->f_22504.f_5 = iParam0;
}

void func_275(bool bParam0)
{
	if (!(bParam0 && Global_1915715->f_22504))
	{
		if (bParam0)
		{
			_0x6a564540fac12211(2, 1807503187);
		}
		else
		{
			_0x766315a564594401(2, 1807503187, 0);
		}
	}
	Global_1915715->f_22504 = bParam0;
}

int func_276(int iParam0)
{
	if (iParam0 == 255 || iParam0 == network_player_id_to_int())
	{
		return _0x32c90cdfaf40514c();
	}
	return Global_1145091[iParam0];
}

struct<4> func_277(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_204(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_351(1328661203, func_350(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_351(1328661203, func_350(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_351(1328661203, func_350(), -1591664384, bParam0);
}

int func_278(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_130(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_352(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_351(iParam0, Param1, iParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_204(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_204(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

int func_279(int iParam0)
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

bool func_280(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_281(int iParam0, int iParam1, bool bParam2)
{
	if (!func_239(iParam0))
	{
		return false;
	}
	if (_0xf540239f9937033b(iParam0, iParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_268(iParam0, iParam1);
	}
	return true;
}

bool func_282(int iParam0, int iParam1)
{
	*iParam1 = func_353(iParam0, 1);
	return *iParam1 != 0;
}

bool func_283(int iParam0, int iParam1)
{
	*iParam1 = func_354(iParam0, 1, 0);
	return *iParam1 != 0;
}

bool func_284()
{
	return Global_1915715->f_22477;
}

bool func_285(int iParam0)
{
	if (iParam0 == 34 && Global_1915715->f_22504.f_1)
	{
		return true;
	}
	if (func_355(1))
	{
		if (Global_1915715->f_20241 == iParam0)
		{
			return true;
		}
	}
	return false;
}

bool func_286(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_239(iParam0))
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
		func_356(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_287(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_260() == 0)
	{
		return func_357(iParam0);
	}
	return iParam0 <= func_358();
}

bool func_288(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	return _network_is_money_balance_not_less_than(0, iParam0);
}

int func_289(int iParam0, int iParam1)
{
	if (iParam0 == 15 && func_210(iParam1, -2051813666))
	{
		return 1;
	}
	return 0;
}

int func_290(int iParam0, int iParam1)
{
	if (!func_130(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_277(0) };
	Var0.f_4 = func_359(iParam1);
	Var5 = { func_351(iParam0, Var0, Var0.f_4, 0) };
	if (!_0xb881ca836cc4b6d4(&Var5))
	{
		return 0;
	}
	iVar9 = _0xc97e0d2302382211(func_204(0), &Var5, 0);
	return iVar9;
}

int func_291(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	iVar0 = 0;
	if (!func_130(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_360(iParam0);
	if (iVar1 == 307971639 || (bParam1 && iVar1 == -427144552))
	{
		iVar2 = func_361(iParam0, 1);
		if (iVar2 != 0)
		{
			return get_ped_ammo_by_type(Global_34, iVar2);
		}
	}
	else if (iVar1 == -427144552)
	{
		return func_362(iParam0, 0);
	}
	if (func_352(iParam0, -455129387) != 0)
	{
		iVar0 = _0xe787f05dfc977bde(func_204(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_363(iParam0, bParam2) };
		if (!_0xb881ca836cc4b6d4(&Var3))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_204(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

bool func_292(int* iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!func_364(iParam0, 0))
	{
		return false;
	}
	if (iParam4 == 0)
	{
		iParam4 = func_241(iParam1, 0, 1, iParam5, bParam6);
	}
	if (!func_365(iParam1, iParam4, iParam5))
	{
		return false;
	}
	uParam2->f_16 = iParam1;
	uParam2->f_8 = iParam1;
	uParam2->f_9 = 1;
	uParam2->f_13 = iParam4;
	uParam2->f_12 = 1248274121;
	if (!func_366(iParam0, *uParam2, 541670136, iParam3))
	{
		return false;
	}
	if (_0x9adee485726025d4(iParam1) != 0)
	{
		if (Global_1293346->f_20.f_422 != -1)
		{
		}
		Global_1293346->f_20.f_422.f_1 = iParam1;
		Global_1293346->f_20.f_422 = iParam0->f_1;
	}
	return true;
}

void func_293(struct<17> Param0)
{
	iVar0 = Param0.f_16;
	iVar1 = Param0.f_13;
	if (func_367(iVar0, 773203532, iVar1, 0, 1) > 0)
	{
		func_368("gold_spend", "Gold_Spend_Sounds", 1);
	}
	else
	{
		play_sound_frontend("PURCHASE", "HUD_SHOP_SOUNDSET", true, 0);
	}
}

int func_294(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		iParam0 = 1;
	}
	if (iParam0 == iParam1)
	{
		iParam0 = 3;
	}
	else
	{
		fVar0 = to_float(iParam0);
		fVar1 = to_float(5);
		fVar2 = (fVar0 / fVar1);
		iParam0 = floor(fVar2);
	}
	return iParam0;
}

int func_295(int iParam0)
{
	return get_hash_key(func_369(iParam0));
}

int func_296(int iParam0)
{
	return get_hash_key(func_106(iParam0));
}

int func_297(int iParam0)
{
	return get_hash_key(func_161(iParam0));
}

bool func_298(int iParam0)
{
	iVar0 = func_149(iParam0);
	iVar1 = func_150(iVar0);
	if (!_unlock_is_new(iVar1))
	{
		return false;
	}
	if (func_219(iParam0))
	{
		return false;
	}
	return true;
}

bool func_299(char* sParam0, char* sParam1, char* sParam2)
{
	StringCopy(sParam2, _create_var_string(2, "RP_XP", sParam0, sParam1), 128);
	return true;
}

bool func_300(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 4:
			*uParam1 = 931297208;
			*uParam2 = 1552534507;
			return true;
		case 3:
			*uParam1 = -1536298376;
			*uParam2 = 1552534507;
			return true;
		case 2:
			*uParam1 = 1026787695;
			*uParam2 = 1552534507;
			return true;
		case 1:
			*uParam1 = -652976904;
			*uParam2 = 1552534507;
			return true;
		case 0:
			*uParam1 = 229372874;
			*uParam2 = 1552534507;
			return true;
		default:
			break;
	}
	return false;
}

bool func_301(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 4:
			*uParam1 = -434270959;
			*uParam2 = 1552534507;
			return true;
		case 3:
			*uParam1 = -1604689629;
			*uParam2 = 1552534507;
			return true;
		case 2:
			*uParam1 = -530502386;
			*uParam2 = 1552534507;
			return true;
		case 1:
			*uParam1 = -259214448;
			*uParam2 = 1552534507;
			return true;
		case 0:
			*uParam1 = -1433247151;
			*uParam2 = 1552534507;
			return true;
		default:
			break;
	}
	return false;
}

void func_302(int iParam0, var uParam1)
{
	if (!func_219(iParam0))
	{
		return;
	}
	iVar0 = func_237(iParam0);
	if (!func_238(iVar0))
	{
		return;
	}
	iVar1 = func_241(iVar0, 0, 0, -1, 1);
	if (iVar1 == 0)
	{
		return;
	}
	iVar2 = func_325(func_370(iVar0, iVar1, 1, 1));
	uParam1->f_46 = 1;
	uParam1->f_47 = func_242(iVar0, iVar1, &uVar3, 0, 0);
	StringCopy(&(uParam1->f_48), _create_var_string(2, "RP_PROMPT_UNLOCK_ROLE", iVar2), 128);
	uParam1->f_45 = 1062201268;
}

void func_303(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			uParam1->f_64 = get_hash_key("to_naturalist_guide");
			uParam1->f_67 = get_hash_key("PM_SCR_CODX");
			uParam1->f_66 = func_135(iParam0);
			uParam1->f_65 = 1;
			break;
		case 4:
			uParam1->f_64 = get_hash_key("to_collectors_bag");
			uParam1->f_67 = get_hash_key("KIT_COLLECTORS_BAG");
			uParam1->f_66 = func_135(iParam0);
			uParam1->f_65 = 1;
			break;
	}
}

bool func_304(var uParam0, var uParam1, char[32] cParam2, var uParam10)
{
	if (!_databinding_is_data_id_valid(uParam1))
	{
		return false;
	}
	func_371(uParam0, uParam1, cParam2, *uParam10);
	uParam0->f_18[0] = _databinding_add_data_hash_by_hash(*uParam0, 440050042, uParam10->f_16);
	uParam0->f_18[1] = _databinding_add_data_hash_by_hash(*uParam0, 1058850005, uParam10->f_17);
	uParam0->f_18[2] = _databinding_add_data_hash_by_hash(*uParam0, -840685091, uParam10->f_18);
	uParam0->f_18[3] = _databinding_add_data_hash_by_hash(*uParam0, -691977066, uParam10->f_19);
	uParam0->f_18[4] = _databinding_add_data_hash_by_hash(*uParam0, 465265479, uParam10->f_20);
	uParam0->f_18[5] = _databinding_add_data_hash_by_hash(*uParam0, 1655007468, uParam10->f_21);
	uParam0->f_18[6] = _databinding_add_data_int_by_hash(*uParam0, -160613479, uParam10->f_22);
	uParam0->f_18[7] = _databinding_add_data_hash_by_hash(*uParam0, -1655402402, uParam10->f_23);
	uParam0->f_18[8] = _databinding_add_data_string_by_hash(*uParam0, 1264166569, &(uParam10->f_24));
	uParam0->f_18[9] = _databinding_add_data_int_by_hash(*uParam0, 268579106, uParam10->f_40);
	uParam0->f_18[10] = _databinding_add_data_int_by_hash(*uParam0, -1920183400, uParam10->f_41);
	uParam0->f_18[11] = _databinding_add_data_int_by_hash(*uParam0, -1609147137, uParam10->f_42);
	uParam0->f_18[12] = _databinding_add_data_bool_by_hash(*uParam0, -1846747855, uParam10->f_43);
	uParam0->f_18[13] = _databinding_add_data_bool_by_hash(*uParam0, -939612467, uParam10->f_44);
	uParam0->f_18[14] = _databinding_add_data_hash_by_hash(*uParam0, 1363420511, uParam10->f_45);
	uParam0->f_18[15] = _databinding_add_data_bool_by_hash(*uParam0, 1254882442, uParam10->f_46);
	uParam0->f_18[16] = _databinding_add_data_bool_by_hash(*uParam0, 171794733, uParam10->f_47);
	uParam0->f_18[17] = _databinding_add_data_string_by_hash(*uParam0, -2112506996, &(uParam10->f_48));
	uParam0->f_18[18] = _databinding_add_data_hash_by_hash(*uParam0, 1691937704, uParam10->f_64);
	uParam0->f_18[19] = _databinding_add_data_bool_by_hash(*uParam0, 716937442, uParam10->f_65);
	uParam0->f_18[20] = _databinding_add_data_bool_by_hash(*uParam0, -774514200, uParam10->f_66);
	uParam0->f_18[21] = _databinding_add_data_hash_by_hash(*uParam0, 2133636294, uParam10->f_67);
	return true;
}

bool func_305(int* iParam0, var uParam1)
{
	if (!_databinding_is_data_id_valid(iParam0->f_2.f_1))
	{
		return false;
	}
	if (!_databinding_is_data_id_valid(*uParam1))
	{
		return false;
	}
	iVar0 = _databinding_get_array_count(iParam0->f_2.f_1);
	_databinding_insert_ui_item_to_list_from_context_string_alias(iParam0->f_2.f_1, iVar0, "role_card_entry", *uParam1);
	return true;
}

bool func_306(int* iParam0, int iParam1, var uParam2)
{
	if (!_databinding_is_data_id_valid(iParam0->f_2.f_1))
	{
		return false;
	}
	*uParam2 = _databinding_get_item_context_by_index(iParam0->f_2.f_1, iParam1);
	if (!_databinding_is_data_id_valid(*uParam2))
	{
		return false;
	}
	return true;
}

bool func_307(var uParam0, var uParam1)
{
	if (!_databinding_is_data_id_valid(uParam0))
	{
		return false;
	}
	_databinding_write_data_bool_from_parent(uParam0, func_372(0), *uParam1);
	_databinding_write_data_bool_from_parent(uParam0, func_372(1), uParam1->f_1);
	_databinding_write_data_hash_string_from_parent(uParam0, func_372(2), uParam1->f_2);
	_databinding_write_data_hash_string_from_parent(uParam0, func_372(54), uParam1->f_3);
	_databinding_write_data_hash_string_from_parent(uParam0, func_372(57), uParam1->f_5);
	_databinding_write_data_hash_string_from_parent(uParam0, func_372(56), uParam1->f_6);
	_databinding_write_data_hash_string_from_parent(uParam0, func_372(55), uParam1->f_4);
	if (uParam1->f_7 == 0)
	{
		uParam1->f_7 = -672301300;
	}
	_databinding_write_data_hash_string_from_parent(uParam0, func_372(58), uParam1->f_7);
	_databinding_write_data_bool_from_parent(uParam0, func_372(59), uParam1->f_8);
	_databinding_write_data_bool_from_parent(uParam0, func_372(60), uParam1->f_9);
	_databinding_write_data_hash_string_from_parent_by_hash(uParam0, 440050042, uParam1->f_16);
	_databinding_write_data_hash_string_from_parent_by_hash(uParam0, 1058850005, uParam1->f_17);
	_databinding_write_data_hash_string_from_parent_by_hash(uParam0, -840685091, uParam1->f_18);
	_databinding_write_data_hash_string_from_parent_by_hash(uParam0, -691977066, uParam1->f_19);
	_databinding_write_data_hash_string_from_parent_by_hash(uParam0, 465265479, uParam1->f_20);
	_databinding_write_data_hash_string_from_parent_by_hash(uParam0, 1655007468, uParam1->f_21);
	_databinding_write_data_int_from_parent_by_hash(uParam0, -160613479, uParam1->f_22);
	_databinding_write_data_hash_string_from_parent_by_hash(uParam0, -1655402402, uParam1->f_23);
	_0xa3bd6ff95e713ee5(uParam0, 1264166569, &(uParam1->f_24));
	_databinding_write_data_int_from_parent_by_hash(uParam0, 268579106, uParam1->f_40);
	_databinding_write_data_int_from_parent_by_hash(uParam0, -1920183400, uParam1->f_41);
	_databinding_write_data_int_from_parent_by_hash(uParam0, -1609147137, uParam1->f_42);
	_0xbfc83da249befcc9(uParam0, -1846747855, uParam1->f_43);
	_0xbfc83da249befcc9(uParam0, -939612467, uParam1->f_44);
	_databinding_write_data_hash_string_from_parent_by_hash(uParam0, 1363420511, uParam1->f_45);
	_0xbfc83da249befcc9(uParam0, 1254882442, uParam1->f_46);
	_0xbfc83da249befcc9(uParam0, 171794733, uParam1->f_47);
	_0xa3bd6ff95e713ee5(uParam0, -2112506996, &(uParam1->f_48));
	_databinding_write_data_hash_string_from_parent_by_hash(uParam0, 1691937704, uParam1->f_64);
	_0xbfc83da249befcc9(uParam0, 716937442, uParam1->f_65);
	_0xbfc83da249befcc9(uParam0, -774514200, uParam1->f_66);
	_databinding_write_data_hash_string_from_parent_by_hash(uParam0, 2133636294, uParam1->f_67);
	return true;
}

int func_308(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 987444055;
		case 0:
			return 1330140418;
		case 1:
			return -640677282;
		case 2:
			return -1950303839;
		case 3:
			return 1322114923;
		case 4:
			return -525004462;
		case 5:
			return 1419735597;
		case 6:
			return 1004744465;
		case 7:
			return 672178273;
		case 8:
			return 1777227915;
		case 9:
			return 408825843;
		case 10:
			return -42959138;
		case 11:
			return 64621749;
		case 12:
			return -1346830927;
		case 13:
			return -218234180;
		case 14:
			return 751663875;
		case 15:
			return 1766283257;
		case 16:
			return -269943670;
		case 17:
			return 522313648;
		case 18:
			return 1976336482;
		case 19:
			return -713504854;
		case 20:
			return 753957709;
		case 21:
			return 1054483531;
		case 22:
			return 547199896;
		default:
			break;
	}
	return 987444055;
}

bool func_309(int iParam0, char* sParam1)
{
	bVar0 = false;
	iVar4 = iParam0;
	iVar5 = _0x3faa928a79591761(iVar4);
	if (iVar5 == 0)
	{
		return false;
	}
	iVar6 = 0;
	while (iVar6 < iVar5)
	{
		if (!_0x121d2005dd64496b(iVar4, iVar6, &Var1))
		{
		}
		else if (!func_130(Var1, 0))
		{
		}
		else if (Var1 != -1295114026)
		{
		}
		else
		{
			bVar0 = true;
		}
		else
		{
			iVar6++;
		}
	}
	if (func_310(iParam0))
	{
		Var7.f_2 = 5;
		Var7.f_18 = 8;
		if (!func_311(iParam0, &Var7))
		{
			return false;
		}
		StringCopy(sParam1, _get_label_text_by_hash(Var7), 128);
		if (bVar0)
		{
			StringConCat(sParam1, _create_var_string(2, "RP_TOKEN_NAME_END", Var1.f_1), 128);
		}
		return true;
	}
	else
	{
		bVar45 = false;
		iVar6 = 0;
		while (iVar6 < iVar5)
		{
			if (!_0x121d2005dd64496b(iVar4, iVar6, &Var42))
			{
			}
			else if (!func_130(Var42, 0))
			{
			}
			else if (func_210(Var42, -1220351246))
			{
			}
			else if (Var42 == -1295114026)
			{
				if (iVar5 == 1)
				{
					StringCopy(sParam1, _create_var_string(2, "RP_TOKEN_NAME", Var42.f_1), 128);
					return true;
				}
			else
			{
				}
				else
				{
					StringCopy(sParam1, _get_label_text_by_hash(func_335(Var42)), 128);
					if (bVar0)
					{
						StringConCat(sParam1, _create_var_string(2, "RP_TOKEN_NAME_END", Var1.f_1), 128);
					}
					bVar45 = true;
				}
				else
				{
					iVar6++;
				}
				if (!bVar45)
				{
					StringCopy(sParam1, _create_var_string(2, "RP_TOKEN_NAME", Var1.f_1), 128);
				}
				return true;
				return false;
			}
		}
	}
}

bool func_310(int iParam0)
{
	if (!_item_database_is_buy_award_key_valid(iParam0))
	{
		return false;
	}
	Var0.f_2 = 5;
	Var0.f_18 = 8;
	if (!func_311(iParam0, &Var0))
	{
		return false;
	}
	return true;
}

bool func_311(int iParam0, var uParam1)
{
	return _0xf8d09ef8ce61d7bf(iParam0, uParam1);
}

void func_312(var uParam0, var uParam1)
{
	iVar0 = func_373(uParam1, -774197843, &(uParam0->f_16), &(uParam0->f_17), -401018458);
	if (iVar0 != 0)
	{
	}
	iVar0 = func_373(uParam1, -15852387, &(uParam0->f_20), &(uParam0->f_21), -401018458);
	if (iVar0 != 0)
	{
	}
}

bool func_313(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = iParam0;
	iVar1 = iParam0;
	if (func_130(iVar1, 0))
	{
		*iParam1 = iVar1;
		return true;
	}
	else
	{
		iVar2 = _0x3faa928a79591761(iVar0);
		if (iVar2 <= 0)
		{
			return false;
		}
		else
		{
			iVar6 = 0;
			while (iVar6 < iVar2)
			{
				if (_0x121d2005dd64496b(iVar0, iVar6, &iVar3))
				{
					if (!func_130(iVar3, 0))
					{
					}
					else if (func_210(iVar3, -1220351246))
					{
					}
					else
					{
						*iParam1 = iVar3;
						return true;
					}
				}
				iVar6++;
			}
			return false;
		}
	}
	return false;
}

int func_314(int iParam0)
{
	if (!func_130(iParam0, 0))
	{
		return 0;
	}
	if (func_374(iParam0))
	{
		iVar1 = func_375(iParam0);
		iVar2 = func_376(iVar1);
		sVar0 = func_377(iVar2);
		if (func_378(sVar0))
		{
			return get_hash_key(sVar0);
		}
	}
	else
	{
		sVar0 = _get_label_text_by_hash(func_379(iParam0));
		return func_379(iParam0);
	}
	return 0;
}

bool func_315(var uParam0, var uParam1, char[32] cParam2, var uParam10)
{
	if (!_databinding_is_data_id_valid(uParam1))
	{
		return false;
	}
	func_371(uParam0, uParam1, cParam2, *uParam10);
	uParam0->f_18 = _databinding_add_data_hash_by_hash(*uParam0, 440050042, uParam10->f_16);
	uParam0->f_19 = _databinding_add_data_hash_by_hash(*uParam0, 1058850005, uParam10->f_17);
	uParam0->f_20 = _databinding_add_data_int_by_hash(*uParam0, 1956569112, uParam10->f_18);
	uParam0->f_21 = _databinding_add_data_int_by_hash(*uParam0, -132529197, uParam10->f_19);
	uParam0->f_28 = _databinding_add_data_bool_by_hash(*uParam0, 427136516, uParam10->f_41);
	uParam0->f_22 = _databinding_add_data_hash_by_hash(*uParam0, -3675574, uParam10->f_20);
	uParam0->f_23 = _databinding_add_data_hash_by_hash(*uParam0, -536627617, uParam10->f_21);
	uParam0->f_24 = _databinding_add_data_string_by_hash(*uParam0, -840685091, &(uParam10->f_22));
	uParam0->f_25 = _databinding_add_data_hash_by_hash(*uParam0, -691977066, uParam10->f_38);
	uParam0->f_26 = _databinding_add_data_int_by_hash(*uParam0, 2118194381, uParam10->f_39);
	uParam0->f_27 = _databinding_add_data_bool_by_hash(*uParam0, 1267925131, uParam10->f_40);
	uParam0->f_29 = _databinding_add_data_string_by_hash(*uParam0, 1832210433, &(uParam10->f_42));
	return true;
}

bool func_316(int* iParam0, var uParam1)
{
	if (!_databinding_is_data_id_valid(iParam0->f_2.f_3.f_1))
	{
		return false;
	}
	if (!_databinding_is_data_id_valid(*uParam1))
	{
		return false;
	}
	iVar0 = _databinding_get_array_count(iParam0->f_2.f_3.f_1);
	_databinding_insert_ui_item_to_list_from_context_string_alias(iParam0->f_2.f_3.f_1, iVar0, "rank_reward_entry", *uParam1);
	return true;
}

bool func_317(var uParam0, var uParam1)
{
	if (!_databinding_is_data_id_valid(*uParam0))
	{
		return false;
	}
	_databinding_write_data_bool_from_parent(*uParam0, func_372(0), *uParam1);
	_databinding_write_data_bool_from_parent(*uParam0, func_372(1), uParam1->f_1);
	_databinding_write_data_hash_string_from_parent(*uParam0, func_372(2), uParam1->f_2);
	_databinding_write_data_hash_string_from_parent(*uParam0, func_372(54), uParam1->f_3);
	_databinding_write_data_hash_string_from_parent(*uParam0, func_372(57), uParam1->f_5);
	_databinding_write_data_hash_string_from_parent(*uParam0, func_372(56), uParam1->f_6);
	_databinding_write_data_hash_string_from_parent(*uParam0, func_372(55), uParam1->f_4);
	_databinding_write_data_hash_string_from_parent_by_hash(*uParam0, 440050042, uParam1->f_16);
	_databinding_write_data_hash_string_from_parent_by_hash(*uParam0, 1058850005, uParam1->f_17);
	_databinding_write_data_int_from_parent_by_hash(*uParam0, 1956569112, uParam1->f_18);
	_databinding_write_data_int_from_parent_by_hash(*uParam0, -132529197, uParam1->f_19);
	_databinding_write_data_hash_string_from_parent_by_hash(*uParam0, -3675574, uParam1->f_20);
	_databinding_write_data_hash_string_from_parent_by_hash(*uParam0, -536627617, uParam1->f_21);
	_0xa3bd6ff95e713ee5(*uParam0, -840685091, &(uParam1->f_22));
	_databinding_write_data_hash_string_from_parent_by_hash(*uParam0, -691977066, uParam1->f_38);
	_databinding_write_data_int_from_parent_by_hash(*uParam0, 2118194381, uParam1->f_39);
	_0xbfc83da249befcc9(*uParam0, 1267925131, uParam1->f_40);
	_0xbfc83da249befcc9(*uParam0, 427136516, uParam1->f_41);
	_0xa3bd6ff95e713ee5(*uParam0, 1832210433, &(uParam1->f_42));
	return true;
}

bool func_318(int iParam0, int iParam1, bool bParam2)
{
	if (!func_130(iParam0, 0))
	{
		return func_380(func_153(iParam0), iParam1, bParam2);
	}
	if (func_381(iParam0))
	{
		return func_268(func_211(iParam0, 1), iParam1);
	}
	if ((bParam2 && func_260() == 0) && !_unlock_is_visible(iParam0))
	{
		return true;
	}
	if (!func_382(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
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

int func_319(bool bParam0)
{
	Var0.f_9 = -1591664384;
	iVar14 = 0;
	Var15 = { func_351(889965687, func_277(1), 1034665895, 1) };
	iVar19 = func_383(Var15, 552979403, 1, -1);
	if (iVar19 != 0)
	{
		if (iVar19 == -1645121954)
		{
			iVar14 = 24043185;
		}
		else if (iVar19 == 897974632)
		{
			iVar14 = 2026485318;
		}
		return iVar14;
	}
	Var22 = { func_384(0, -1591664384, 552979403, -1591664384, 0, 0, 0) };
	if (func_385(&Var22, &iVar20, &iVar21, 1))
	{
		if (iVar21 > 0 && func_386(&Var0, 0, iVar20, iVar21))
		{
			if (Var0.f_4 == -1645121954)
			{
				iVar14 = 24043185;
			}
			else if (Var0.f_4 == 897974632)
			{
				iVar14 = 2026485318;
			}
			else
			{
				func_387(iVar20);
				return 0;
			}
			if (bParam0)
			{
				func_388(Var0, 1, 0);
			}
			func_387(iVar20);
			return iVar14;
		}
		func_387(iVar20);
	}
	return 0;
}

void func_320(var uParam0, var uParam1)
{
	iVar0 = func_373(uParam1, 805880880, &(uParam0->f_16), &(uParam0->f_17), -401018458);
	if (iVar0 != 0)
	{
	}
	iVar0 = func_373(uParam1, -15852387, &(uParam0->f_19), &(uParam0->f_20), -401018458);
	if (iVar0 != 0)
	{
	}
}

bool func_321(int iParam0)
{
	if (!func_147(iParam0, 2))
	{
		return false;
	}
	return !func_217(func_155(iParam0), 0);
}

bool func_322(int iParam0)
{
	if (!func_147(iParam0, 2))
	{
		return false;
	}
	return false;
}

int func_323(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!func_389(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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
			if (iParam4 != 0 && &Var0[iVar32] != iParam4)
			{
			}
			else
			{
				return Var0[iVar32]->f_1;
				Jump @135; //curOff = 119
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

int func_324(int iParam0, int iParam1, bool bParam2)
{
	if (!func_147(iParam0, 2))
	{
		return 0;
	}
	bVar0 = func_390(iParam0, -570078785);
	bVar1 = func_390(iParam0, -915411861);
	if (func_390(iParam0, 997808187))
	{
		return 997808187;
	}
	if (func_390(iParam0, 205718222))
	{
		iParam1 = 205718222;
	}
	else if (bVar0 && !bVar1)
	{
		iParam1 = -570078785;
	}
	else if (bVar0 && bVar1)
	{
		if (func_284())
		{
			iParam1 = -570078785;
		}
		else
		{
			iParam1 = -915411861;
		}
	}
	else if (bVar1)
	{
		iParam1 = -915411861;
	}
	else
	{
		iParam1 = 0;
	}
	if (iParam1 == 0 && bParam2)
	{
		iParam1 = -915411861;
	}
	return iParam1;
}

int func_325(int iParam0)
{
	return (iParam0 / 100);
}

var func_326(int iParam0)
{
	StringCopy(&cVar0, func_391(iParam0), 16);
	StringConCat(&cVar0, ".", 16);
	if (get_length_of_literal_string(func_392(iParam0)) < 2)
	{
		StringConCat(&cVar0, "0", 16);
	}
	StringConCat(&cVar0, func_392(iParam0), 16);
	return func_393(cVar0);
}

int func_327(int iParam0, bool bParam1)
{
	iVar0 = func_267(iParam0, bParam1);
	if (!func_239(iVar0))
	{
		return 0;
	}
	return func_370(iVar0, -2141192156, 0, 1);
}

bool func_328(int iParam0)
{
	if (!func_147(iParam0, 2))
	{
		return false;
	}
	return func_217(func_155(iParam0), 1);
}

bool func_329(var uParam0, var uParam1, char[32] cParam2, var uParam10)
{
	if (!_databinding_is_data_id_valid(uParam1))
	{
		return false;
	}
	func_371(uParam0, uParam1, cParam2, *uParam10);
	uParam0->f_18 = _databinding_add_data_hash_by_hash(*uParam0, 440050042, uParam10->f_16);
	uParam0->f_19 = _databinding_add_data_hash_by_hash(*uParam0, 1058850005, uParam10->f_17);
	uParam0->f_26 = _databinding_add_data_bool_by_hash(*uParam0, 427136516, uParam10->f_18);
	uParam0->f_20 = _databinding_add_data_hash_by_hash(*uParam0, -3675574, uParam10->f_19);
	uParam0->f_21 = _databinding_add_data_hash_by_hash(*uParam0, -536627617, uParam10->f_20);
	uParam0->f_22 = _databinding_add_data_string_by_hash(*uParam0, -840685091, uParam10->f_21);
	uParam0->f_23 = _databinding_add_data_hash_by_hash(*uParam0, -691977066, uParam10->f_22);
	uParam0->f_25 = _databinding_add_data_bool_by_hash(*uParam0, 1267925131, uParam10->f_24);
	uParam0->f_27 = _databinding_add_data_string_by_hash(*uParam0, 1832210433, &(uParam10->f_29));
	uParam0->f_28 = _databinding_add_data_string(*uParam0, "dynamic_list_item_prompt_option_raw_text", uParam10->f_25);
	uParam0->f_29 = _databinding_add_data_bool(*uParam0, "dynamic_list_item_prompt_option_enabled", uParam10->f_26);
	uParam0->f_30 = _databinding_add_data_bool(*uParam0, "dynamic_list_item_prompt_option_visible", uParam10->f_27);
	uParam0->f_31 = _databinding_add_data_hash(*uParam0, "dynamic_list_item_prompt_option_select_hash", uParam10->f_28);
	uParam0->f_34 = _databinding_add_data_string_by_hash(*uParam0, 211391322, &(uParam10->f_45));
	uParam0->f_32 = _databinding_add_data_bool_by_hash(*uParam0, -850596645, uParam10->f_61);
	uParam0->f_33 = _databinding_add_data_bool_by_hash(*uParam0, -1420215996, uParam10->f_62);
	uParam0->f_37 = _databinding_add_data_bool_by_hash(*uParam0, -1292666812, uParam10->f_65);
	uParam0->f_36 = _databinding_add_data_hash_by_hash(*uParam0, 1627232064, uParam10->f_64);
	uParam0->f_35 = _databinding_add_data_hash_by_hash(*uParam0, -1553587059, uParam10->f_63);
	uParam0->f_38 = _databinding_add_data_int_by_hash(*uParam0, 1427767274, uParam10->f_66);
	return true;
}

bool func_330(int* iParam0, var uParam1)
{
	if (!_databinding_is_data_id_valid(iParam0->f_2.f_3.f_2))
	{
		return false;
	}
	if (!_databinding_is_data_id_valid(*uParam1))
	{
		return false;
	}
	iVar0 = _databinding_get_array_count(iParam0->f_2.f_3.f_2);
	_databinding_insert_ui_item_to_list_from_context_string_alias(iParam0->f_2.f_3.f_2, iVar0, "rank_kit_entry", *uParam1);
	return true;
}

bool func_331(int* iParam0, int iParam1, var uParam2)
{
	iVar0 = _databinding_get_array_count(iParam0->f_2.f_3.f_2);
	if (iParam1 < 0 || iParam1 >= iVar0)
	{
		return false;
	}
	*uParam2 = _databinding_get_item_context_by_index(iParam0->f_2.f_3.f_2, iParam1);
	return true;
}

bool func_332(var uParam0, var uParam1)
{
	if (!_databinding_is_data_id_valid(*uParam0))
	{
		return false;
	}
	_databinding_write_data_bool_from_parent(*uParam0, func_372(0), *uParam1);
	_databinding_write_data_bool_from_parent(*uParam0, func_372(1), uParam1->f_1);
	_databinding_write_data_hash_string_from_parent(*uParam0, func_372(2), uParam1->f_2);
	_databinding_write_data_hash_string_from_parent(*uParam0, func_372(54), uParam1->f_3);
	_databinding_write_data_hash_string_from_parent(*uParam0, func_372(57), uParam1->f_5);
	_databinding_write_data_hash_string_from_parent(*uParam0, func_372(56), uParam1->f_6);
	_databinding_write_data_hash_string_from_parent(*uParam0, func_372(55), uParam1->f_4);
	if (uParam1->f_7 == 0)
	{
		uParam1->f_7 = -672301300;
	}
	_databinding_write_data_hash_string_from_parent(*uParam0, func_372(58), uParam1->f_7);
	_databinding_write_data_bool_from_parent(*uParam0, func_372(59), uParam1->f_8);
	_databinding_write_data_bool_from_parent(*uParam0, func_372(60), uParam1->f_9);
	_databinding_write_data_hash_string_from_parent_by_hash(*uParam0, 440050042, uParam1->f_16);
	_databinding_write_data_hash_string_from_parent_by_hash(*uParam0, 1058850005, uParam1->f_17);
	_0xbfc83da249befcc9(*uParam0, 427136516, uParam1->f_18);
	_databinding_write_data_hash_string_from_parent_by_hash(*uParam0, -3675574, uParam1->f_19);
	_databinding_write_data_hash_string_from_parent_by_hash(*uParam0, -536627617, uParam1->f_20);
	_0xa3bd6ff95e713ee5(*uParam0, -840685091, uParam1->f_21);
	_databinding_write_data_hash_string_from_parent_by_hash(*uParam0, -691977066, uParam1->f_22);
	_0xbfc83da249befcc9(*uParam0, 1267925131, uParam1->f_24);
	_0xa3bd6ff95e713ee5(*uParam0, 1832210433, &(uParam1->f_29));
	_databinding_write_data_string_from_parent(*uParam0, "dynamic_list_item_prompt_option_raw_text", uParam1->f_25);
	_databinding_write_data_bool_from_parent(*uParam0, "dynamic_list_item_prompt_option_enabled", uParam1->f_26);
	_databinding_write_data_bool_from_parent(*uParam0, "dynamic_list_item_prompt_option_visible", uParam1->f_27);
	_databinding_write_data_hash_string_from_parent(*uParam0, "dynamic_list_item_prompt_option_select_hash", uParam1->f_28);
	_0xbfc83da249befcc9(*uParam0, -1420215996, uParam1->f_62);
	_0xbfc83da249befcc9(*uParam0, -850596645, uParam1->f_61);
	_0xa3bd6ff95e713ee5(*uParam0, 211391322, &(uParam1->f_45));
	_0xbfc83da249befcc9(*uParam0, -1292666812, uParam1->f_65);
	if (uParam1->f_65)
	{
		_databinding_write_data_hash_string_from_parent_by_hash(*uParam0, 1627232064, uParam1->f_64);
	}
	else
	{
		_databinding_write_data_hash_string_from_parent_by_hash(*uParam0, -1553587059, uParam1->f_63);
	}
	_databinding_write_data_int_from_parent_by_hash(*uParam0, 1427767274, uParam1->f_66);
	return true;
}

bool func_333(int iParam0)
{
	if (!func_130(iParam0, 0))
	{
		return false;
	}
	if (!func_210(iParam0, 2091592669))
	{
		return false;
	}
	return true;
}

bool func_334()
{
	iVar0 = func_273(1);
	return iVar0 == -1;
}

int func_335(int iParam0)
{
	if (!func_130(iParam0, 0))
	{
		return 0;
	}
	if (func_210(iParam0, -306684263))
	{
		return func_394(iParam0);
	}
	else if (func_374(iParam0) && !func_210(iParam0, -1090933859))
	{
		iVar1 = func_375(iParam0);
		iVar2 = func_376(iVar1);
		sVar0 = func_395(iVar2);
		if (func_378(sVar0))
		{
			return get_hash_key(sVar0);
		}
	}
	else
	{
		sVar0 = _get_label_text_by_hash(func_396(iParam0));
		return func_396(iParam0);
	}
	return 0;
}

int func_336(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_130(iParam0, 0))
	{
		return 0;
	}
	if (func_381(iParam0))
	{
		return func_241(func_211(iParam0, 0), iParam1, bParam2, iParam3, func_397(iParam0));
	}
	if (func_398(iParam0, bParam4) || func_399(iParam0))
	{
		iParam1 = 997808187;
	}
	else if (func_397(iParam0) && (func_400(iParam0, &iVar0) || func_401(iParam0, &iVar0)))
	{
		iParam1 = iVar0;
	}
	else
	{
		bVar1 = func_402(iParam0, -570078785);
		bVar2 = func_402(iParam0, -915411861);
		if (bVar1 && !bVar2)
		{
			iParam1 = -570078785;
		}
		else if (bVar2 && bVar1)
		{
			if (func_284())
			{
				iParam1 = -570078785;
			}
			else
			{
				iParam1 = -915411861;
			}
		}
		else if (bVar2)
		{
			iParam1 = -915411861;
		}
		else if (func_285(15) && func_402(iParam0, 369710026))
		{
			iParam1 = 369710026;
		}
		else
		{
			iParam1 = 0;
		}
	}
	if (iParam1 == 0 && bParam2)
	{
		return -915411861;
	}
	return iParam1;
}

bool func_337(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = func_403(iParam0, iParam1, 1, 0, 1, 0);
	return true;
}

bool func_338(int iParam0, int iParam1, int iParam2, var uParam3)
{
	if (!func_130(iParam1, 0))
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = iParam0;
	iVar1 = 2147483647;
	iVar2 = 0;
	bVar3 = false;
	Var5.f_1 = 10;
	iVar29 = 0;
	iVar30 = _0x48229ce0c7938237(iVar0);
	if (_item_database_fillout_tag_data(iParam1, &Var32, &iVar73, 20))
	{
		iVar74 = 0;
		while (iVar74 < iVar73)
		{
			if (Var32[iVar74]->f_1 != -442898163)
			{
			}
			else
			{
				iVar4 = &Var32[iVar74];
				iVar31 = 0;
				while (iVar31 < iVar30)
				{
					if (!_0x8d029948ca29409b(iVar0, iVar31, &Var5))
					{
					}
					else
					{
						iVar27 = Var5;
						if (iParam1 == iVar27)
						{
						}
						else if (!func_130(iVar27, 0))
						{
						}
						else if (!func_214(iVar27, -442898163))
						{
						}
						else if (!func_402(iVar27, -915411861) && !func_402(iVar27, -570078785))
						{
						}
						else if (!_item_database_does_item_have_tag(iVar27, iVar4, -442898163))
						{
						}
						else
						{
							iVar29 = func_336(iVar27, 0, 1, -1, 1);
							iVar28 = func_403(iVar27, iVar29, 1, 0, 1, 0);
							if (iVar2 == -915411861 && iVar29 == -570078785)
							{
							}
							else if (iVar29 == iVar2 && iVar29 != 0)
							{
								if (iVar28 >= iVar1)
								{
								}
								else
								{
									iVar2 = iVar29;
									iVar1 = iVar28;
									bVar3 = true;
								}
								iVar31++;
								iVar74++;
								if (bVar3)
								{
									*uParam3 = iVar1;
									*iParam2 = iVar2;
									return true;
								}
								return false;
							}
						}
					}
				}
			}
		}
	}
}

void func_339(var uParam0)
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

int func_340(int iParam0)
{
	if (!func_231(iParam0))
	{
		return 0;
	}
	return &(Global_1293346->f_2985[iParam0]);
}

int func_341(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -1519264107;
		case 2:
			return -1349160228;
		case 3:
			return -732709691;
		case 4:
			return 1691387227;
		case 5:
			return -969278268;
		case 6:
			return 650135692;
		case 7:
			return 317202356;
		case 8:
			return 2111135919;
		default:
			break;
	}
	return 0;
}

int func_342(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -562854755;
				case 1:
					return -193397860;
				case 2:
					return -1639158743;
				case 3:
					return -545263819;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -331472846;
				case 1:
					return 1266428317;
				case 2:
					return -1342435444;
				case 3:
					return -243002563;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 429079746;
				case 1:
					return 1587973176;
				case 2:
					return 1338229360;
				case 3:
					return -271501111;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return 771711526;
				case 1:
					return -466995375;
				case 2:
					return -398924971;
				case 3:
					return -1232006170;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return -2052512212;
				case 1:
					return -1144971953;
				case 2:
					return 86781479;
				case 3:
					return 416111513;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return -446960320;
				case 1:
					return -2015262927;
				case 2:
					return -707938197;
				case 3:
					return 2136054096;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return -1149863246;
				case 1:
					return 407185110;
				case 2:
					return -769170006;
				case 3:
					return -411703805;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return -1554709632;
				case 1:
					return 410660064;
				case 2:
					return -254646314;
				case 3:
					return 1524612084;
				default:
					break;
			}
			break;
	}
	return 0;
}

bool func_343(int iParam0)
{
	return (Global_1051439->f_3628 && iParam0) != 0;
}

void func_344(int iParam0)
{
	Global_1051439->f_3628 = (Global_1051439->f_3628 - (Global_1051439->f_3628 && iParam0));
}

bool func_345()
{
	if (!_unlock_is_unlocked(-1624899219))
	{
		func_274(2);
		return false;
	}
	if (!func_404())
	{
		func_274(9);
		return false;
	}
	if (Global_1051439->f_72[34]->f_1 & 128 != 0)
	{
		func_274(3);
		return false;
	}
	Var0 = { func_405(0) };
	if (func_406(Var0))
	{
		iVar2 = -1;
		switch (Var0)
		{
			case 6:
				iVar3 = func_407(player_id(), 0);
				if (iVar3 != -1)
				{
					iVar2 = func_408(iVar3);
				}
				break;
			case 3:
			case 4:
				iVar4 = func_409(&Var0, 0);
				if (iVar4 != -1)
				{
					if (func_410(iVar4, 461218520, 0))
					{
						iVar2 = 46;
					}
				}
				break;
		}
		if (iVar2 != -1)
		{
			func_274(iVar2);
			return false;
		}
	}
	if (func_411())
	{
		func_274(4);
		return false;
	}
	if (func_412(4, network_player_id_to_int()) && Global_1051439->f_72[34]->f_49 & 1073741824 == 0)
	{
		func_274(5);
		return false;
	}
	if (func_413(131072, 255))
	{
		func_274(7);
		return false;
	}
	if (func_414())
	{
		func_274(8);
		return false;
	}
	return true;
}

bool func_346(int iParam0, int iParam1)
{
	if (((is_ped_in_combat(Global_34, 0) || is_ped_in_melee_combat(Global_34)) || func_280(iParam1, 1024)) && _0x336b3d200ab007cb(Global_34, Global_35, iParam0, iParam1) > 0)
	{
		return true;
	}
	return false;
}

bool func_347(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102219->f_3 & 32 != 0;
	}
	return func_413(32, iParam0);
}

bool func_348(int iParam0)
{
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 3)
	{
		return true;
	}
	return false;
}

bool func_349()
{
	return (Global_1952637->f_1 != 24043185 && Global_1952637->f_1 != 2026485318);
}

struct<4> func_350()
{
	return Var0;
}

struct<4> func_351(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_130(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_204(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_352(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

int func_353(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_415(iVar0, 1, 0);
		if (!func_286(iParam0, iVar33, &Var2, &iVar1, 0, 1))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_416(&(Var2[iVar34])))
				{
					if (!bParam1 || func_291(&(Var2[iVar34]), 0, 1, 1) > 0)
					{
						return iVar33;
					}
					Jump @134; //curOff = 106
				}
				else if (&Var2[iVar34] == 0)
				{
				}
				else
				{
					iVar34++;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_354(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar40 = func_415(iVar0, 0, 1);
		if (!func_286(iParam0, iVar40, &Var9, &iVar1, 0, 1))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_417(&(Var9[iVar41])))
				{
					if (!bParam1 || func_291(&(Var9[iVar41]), 0, 1, 1) > 0)
					{
						bVar8 = true;
					}
				}
				else if (&Var9[iVar41] == 2084597891 || &Var9[iVar41] == 773203532)
				{
					if ((bParam2 && &Var9[iVar41] == 2084597891) || (!bParam2 && &Var9[iVar41] == 773203532))
					{
						if (iVar4 == 0 || (bVar6 && Var9[iVar41]->f_1 < iVar2))
						{
							iVar5 = iVar40;
							iVar3 = Var9[iVar41]->f_1;
							iVar7 = 1;
						}
					}
					else if (iVar4 == 0 || Var9[iVar41]->f_1 < iVar2)
					{
						iVar5 = iVar40;
						iVar3 = Var9[iVar41]->f_1;
						iVar7 = 0;
					}
				}
				else if (&Var9[iVar41] == 0)
				{
				}
				else
				{
					iVar41++;
				}
			}
			if (bVar8 && iVar5 != 0)
			{
				iVar4 = iVar5;
				iVar2 = iVar3;
				bVar6 = iVar7;
			}
		}
		iVar0++;
	}
	return iVar4;
}

bool func_355(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915715->f_20638;
	}
	return (Global_1915715->f_20638 || Global_1915715->f_22504.f_1);
}

void func_356(int iParam0, int iParam1, var uParam2, int iParam3)
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
			if ((*uParam2)[iVar0]->f_1 == 0 && func_264(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_357(int iParam0)
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

int func_358()
{
	if (func_260() == 0)
	{
		return _network_get_cash_balance();
	}
	return _money_get_cash_balance();
}

int func_359(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1084182731;
		case 1:
			return -1360128126;
		default:
			break;
	}
	return 1084182731;
}

int func_360(int iParam0)
{
	if (!func_130(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_361(int iParam0, int iParam1)
{
	if (!func_130(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_360(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_210(iParam0, 1399091007))
	{
		func_418(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_362(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_384(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_420(&Var0, func_419(0));
	}
	if (!func_385(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_387(iVar14);
	return uVar15;
}

struct<4> func_363(int iParam0, bool bParam1)
{
	Var0 = { func_421(iParam0, bParam1, 0) };
	return func_351(iParam0, Var0, Var0.f_4, bParam1);
}

bool func_364(int* iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_422(iParam0))
		{
			return false;
		}
	}
	if (func_423(&(iParam0->f_6)))
	{
		if (_0xe10f2d7715ababec(&(iParam0->f_6)))
		{
			return false;
		}
	}
	if (!_0xce54c9abe6fbc6db(2113164098))
	{
		return false;
	}
	if (!_0xce54c9abe6fbc6db(-1318406457))
	{
		return false;
	}
	if (!_0xce54c9abe6fbc6db(-1230526146))
	{
		return false;
	}
	if (!_0xce54c9abe6fbc6db(1702063850))
	{
		return false;
	}
	if (!_cashinventory_is_session_ready())
	{
		return false;
	}
	if (_cashinventory_is_connection_faulted())
	{
		return false;
	}
	if (_cashinventory_init_session_is_faulted())
	{
		return false;
	}
	return true;
}

int func_365(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_281(iParam0, iParam1, 0))
	{
		return 0;
	}
	if (func_280(iParam2, 2))
	{
		if (func_268(iParam0, iParam1))
		{
			return 0;
		}
	}
	if (_0xfbe782b3165ac8ec(iParam0))
	{
		return 0;
	}
	if (func_280(iParam2, 8))
	{
		return func_424(iParam0, iParam1);
	}
	return 1;
}

bool func_366(int* iParam0, struct<17> Param1, int iParam18, bool bParam19)
{
	if (iParam18 != 541670136)
	{
		return false;
	}
	if (!func_425(Param1))
	{
		return false;
	}
	if (!func_426(iParam0, iParam18))
	{
		return false;
	}
	if (func_427(*iParam0, iParam18, &Param1))
	{
	}
	else
	{
		return false;
	}
	return func_428(iParam0, bParam19);
}

int func_367(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_286(iParam0, iParam2, &Var0, &iVar31, bParam3, bParam4))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32] == iParam1)
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
	if (!bParam3)
	{
	}
	return 0;
}

void func_368(char* sParam0, char* sParam1, int iParam2)
{
	iVar0 = get_sound_id();
	if (iVar0 != -1)
	{
		_0xce5d0ffe83939af1(iVar0, sParam0, sParam1, iParam2);
		(*Global_1957967)[Global_1957967->f_25] = iVar0;
		Global_1957967->f_25 = (Global_1957967->f_25 + 1 % 24);
	}
}

char* func_369(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return "RP_RS_COLLECTOR_DESCRIPTION";
		case 3:
			return "RP_RS_BOUNTY_HUNTER_DESCRIPTION";
		case 2:
			return "RP_RS_TRADER_DESCRIPTION";
		case 1:
			return "RP_RS_MOONSHINER_DESCRIPTION";
		case 0:
			return "RP_RS_NATURALIST_DESCRIPTION";
		default:
			break;
	}
	return "";
}

int func_370(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_286(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

void func_371(var uParam0, var uParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, struct<16> Param10)
{
	*uParam0 = _databinding_add_data_container(uParam1, &cParam2);
	uParam0->f_1 = _databinding_add_data_bool(*uParam0, func_372(0), Param10);
	uParam0->f_2 = _databinding_add_data_bool(*uParam0, func_372(1), Param10.f_1);
	uParam0->f_3 = _databinding_add_data_hash(*uParam0, func_372(2), Param10.f_2);
	uParam0->f_4 = _databinding_add_data_hash(*uParam0, func_372(54), Param10.f_3);
	uParam0->f_5 = _databinding_add_data_hash(*uParam0, func_372(55), Param10.f_4);
	uParam0->f_7 = _databinding_add_data_hash(*uParam0, func_372(57), Param10.f_5);
	uParam0->f_6 = _databinding_add_data_hash(*uParam0, func_372(56), Param10.f_6);
	if (Param10.f_7 == 0)
	{
		Param10.f_7 = -672301300;
	}
	uParam0->f_8 = _databinding_add_data_hash(*uParam0, func_372(58), Param10.f_7);
	uParam0->f_9 = _databinding_add_data_bool(*uParam0, func_372(59), Param10.f_8);
	uParam0->f_10 = _databinding_add_data_bool(*uParam0, func_372(60), Param10.f_9);
	uParam0->f_11 = _databinding_add_data_hash(*uParam0, func_372(61), Param10.f_10);
	uParam0->f_13 = _databinding_add_data_hash(*uParam0, func_372(67), Param10.f_11);
	uParam0->f_12 = _databinding_add_data_hash(*uParam0, func_372(62), Param10.f_12);
	if (Param10.f_13 == 0)
	{
		Param10.f_13 = -672301300;
	}
	uParam0->f_14 = _databinding_add_data_hash(*uParam0, func_372(64), Param10.f_13);
	uParam0->f_15 = _databinding_add_data_bool(*uParam0, func_372(65), Param10.f_14);
	uParam0->f_16 = _databinding_add_data_bool(*uParam0, func_372(66), Param10.f_15);
}

char* func_372(int iParam0)
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

int func_373(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	iVar0 = *uParam0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		*uParam2 = 0;
		*uParam3 = 0;
		if ((*uParam0)[iVar1]->f_2 != iParam1)
		{
		}
		else
		{
			*uParam3 = get_hash_key((*uParam0)[iVar1]->f_1);
			if (*uParam3 == 0)
			{
				return 3;
			}
			if (iParam4 != 0 && iParam4 == *uParam3)
			{
			}
			else
			{
				if (!_does_streamed_txd_exist(*uParam3))
				{
					return 4;
				}
				*uParam2 = get_hash_key(uParam0[iVar1]);
				if (*uParam2 == 0)
				{
					return 2;
				}
				return 0;
			}
		}
		iVar1++;
	}
	return 1;
}

bool func_374(int iParam0)
{
	return func_360(iParam0) == -1784221369;
}

int func_375(int iParam0)
{
	switch (iParam0)
	{
		case 1538827865:
			return -450053710;
		case -1792561227:
			return -1679658797;
		case 1033678910:
			return 1792770814;
		case -1942141178:
			return -1963397600;
		case 671599957:
			return -1250098797;
		case -1554935503:
			return -318278790;
		case 694610769:
			return 55096099;
		case 1941463607:
			return -458397856;
		case -887316537:
			return -444610976;
		case 1762474047:
			return 746627200;
		case -828859553:
			return 705691988;
		case 1410237043:
			return 2130094044;
		case -2026073756:
			return -1554827654;
		case 2002245664:
			return -1029277326;
		case -1120227140:
			return -1140650619;
		case 1142681594:
			return -1999198818;
		case -864588185:
			return -403470324;
		case -1040918754:
			return -925223936;
		case 535545841:
			return -1547438906;
		case 1686036388:
			return -635239558;
		case 2125477381:
			return -586898625;
		case 1808724704:
			return 937246805;
		case -1745871311:
			return 1593035738;
		case -1366099125:
			return 861505058;
		case -1900776854:
			return 687445866;
		case 1381855825:
			return 1705182311;
		case -470894301:
			return -78273782;
		case -58297715:
			return -819697512;
		case 919533729:
			return -247265944;
		case 1112812928:
			return -1265030920;
		case 753764318:
			return 2024948086;
		case 2100045093:
			return 1696286663;
		case 1097965086:
			return -1342159303;
		case -2136667309:
			return -1154406788;
		case -376463594:
			return 2030804811;
		case -1917318030:
			return 1230359523;
		case 1631640006:
			return -1038436471;
		case 1714576673:
			return 96930969;
		case 210760725:
			return -1180427609;
		case 2051021144:
			return 2119038574;
		case 1924406350:
			return 43825738;
		case -1990143531:
			return 2145697477;
		case 1741899492:
			return -1261814606;
		case -1629575335:
			return 107013696;
		case 1096294193:
			return 1066034872;
		case -1162498792:
			return 36009259;
		case -212500005:
			return -1599683008;
		case -538557079:
			return -1693870200;
		case 171150858:
			return 1072019803;
		case 67538819:
			return 1074477367;
		case -126472599:
			return -85890205;
		case -332060056:
			return -727455979;
		case 1917500091:
			return -1667789645;
		case -1043453945:
			return -1924405794;
		case 1723487083:
			return 1861665605;
		case 2044230644:
			return -526169133;
		case 1999358190:
			return 2120708491;
		case 344528703:
			return 1133837220;
		case -1674873797:
			return 1702024301;
		case 281852151:
			return -1604180548;
		case 908445453:
			return -683592019;
		case 1221398025:
			return 337109765;
		case -75300826:
			return -619132373;
		case -1714239153:
			return 1544366970;
		case 1404133288:
			return -1441144351;
		case -1778967281:
			return -1717674545;
		case -455481432:
			return 1825358734;
		case -835454915:
			return 1138427579;
		case -2058115427:
			return -1720251851;
		case -482507775:
			return 506887890;
		case -563118293:
			return 766293155;
		case -1091105818:
			return 2147082926;
		case 1421675990:
			return -390136947;
		case 230524110:
			return 1104566530;
		case 24661898:
			return -1142861801;
		case 1186969907:
			return -417416199;
		case -1762859680:
			return -1460773772;
		case -2073924608:
			return 1476007840;
		case 2004269960:
			return -1616287563;
		case 772515535:
			return -127412252;
		case 1851524477:
			return -1881155818;
		case -1444352669:
			return -955237712;
		case 1950373354:
			return -647020346;
		case -878000957:
			return -1846319726;
		case -2145947333:
			return 1007570567;
		case 156528857:
			return 1029339151;
		case -1240970285:
			return -1424767799;
		case -1933497088:
			return -217135948;
		case -1116314766:
			return -156439156;
		case -877141885:
			return 1344011125;
		case -285185056:
			return 1772321403;
		case -1692268955:
			return -1028075925;
		case 2130706226:
			return 84224102;
		case 1214981718:
			return 1496579364;
		case -1754375530:
			return -1896838685;
		case -71211764:
			return -420599285;
		case -1390353518:
			return 478986344;
		case 2102774612:
			return 917402668;
		case -2011111190:
			return -914712122;
		case -535752499:
			return -598917269;
		case 559905966:
			return 808655744;
		default:
			break;
	}
	return 0;
}

int func_376(int iParam0)
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

var func_377(int iParam0)
{
	StringCopy(&cVar0, func_429(iParam0), 64);
	StringConCat(&cVar0, "_BREED", 64);
	return func_430(&cVar0);
}

bool func_378(char* sParam0)
{
	if (does_text_label_exist(sParam0))
	{
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

int func_379(int iParam0)
{
	if (!func_130(iParam0, 0))
	{
		return 0;
	}
	return _0xa4550fe9c512e3dd(iParam0);
}

int func_380(int iParam0, int iParam1, bool bParam2)
{
	if (!func_147(iParam0, 2))
	{
		return 0;
	}
	if ((bParam2 && func_260() == 0) && !_unlock_is_visible(iParam0))
	{
		return 1;
	}
	if (!func_431(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
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

bool func_381(int iParam0)
{
	if (func_210(iParam0, 75135761))
	{
		return true;
	}
	return false;
}

bool func_382(int iParam0, int iParam1, var uParam2, int iParam3)
{
	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_130(iParam0, 0))
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

int func_383(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_432(&uParam0, iParam4, bParam5, iParam6);
}

struct<14> func_384(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

bool func_385(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_204(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_386(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_387(int iParam0)
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

bool func_388(struct<4> Param0, int iParam4, bool bParam5)
{
	if (!func_433(0))
	{
		return func_434(&Param0, iParam4, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_435(Param0, &Var0, bParam5, 0, -1))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!_0x734311e2852760d0(func_204(bParam5), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_389(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_147(iParam0, 2))
	{
		return false;
	}
	*uParam3 = _0x388088bff3681189(iParam0, iParam1);
	if (*uParam3 == 0)
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
	while (iVar0 < *uParam3)
	{
		if (!_0xb542632693d53408(iParam0, iParam1, iVar0, (*uParam2)[iVar0]))
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
		func_436(iParam0, iParam1, uParam2, *uParam3);
	}
	return true;
}

bool func_390(int iParam0, int iParam1)
{
	if (!func_147(iParam0, 2))
	{
		return false;
	}
	return _0x388088bff3681189(iParam0, iParam1) > 0;
}

char* func_391(int iParam0)
{
	iParam0 = (iParam0 / 100);
	return _0x2b6846401d68e563(to_float(iParam0), 0);
}

char* func_392(int iParam0)
{
	iParam0 = (iParam0 % 100);
	if (iParam0 == 0)
	{
		return "00";
	}
	return func_208(iParam0);
}

var func_393(char[4] cParam0, char[4] cParam1)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

int func_394(int iParam0)
{
	if (!func_130(iParam0, 0))
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

char* func_395(int iParam0)
{
	switch (iParam0)
	{
		case -974145463:
			return "COAT_OVERO";
		case 1432602132:
			return "COAT_TOB";
		case 92296905:
			return "COAT_SPLASHWHITE";
		case -842044823:
			return "COAT_GREYOVERO";
		case 1371398552:
			return "COAT_BLACK";
		case -745453539:
			return "COAT_BUCKSKIN";
		case 1583029039:
			return "COAT_PALDAP";
		case -783061276:
			return "COAT_SILVERTAILBUCKSKIN";
		case -1322521536:
			return "COAT_DARKBAY";
		case 1100711204:
			return "COAT_PERLINO";
		case 728055838:
			return "COAT_ROSEGREY";
		case -1782334639:
			return "COAT_BLANKET";
		case -1181052732:
			return "COAT_LEOPBLANKET";
		case -179102320:
			return "COAT_BRLEOP";
		case -1266863668:
			return "COAT_LEOP";
		case -2078767648:
			return "COAT_BLACK";
		case -852553462:
			return "COAT_ROSEGREYBAY";
		case -80004868:
			return "COAT_WHITE";
		case 1813208211:
			return "COAT_BAYR";
		case 836323303:
			return "COAT_STRAWR";
		case 153881023:
			return "COAT_IRONGREYR";
		case -1256798240:
			return "COAT_BLONDCH";
		case 2118089359:
			return "COAT_MEALYCH";
		case -1537586382:
			return "COAT_SOOTYBUCKSKIN";
		case 1440692746:
			return "COAT_SEALBR";
		case 697143532:
			return "COAT_CHOCR";
		case 281128160:
			return "COAT_FLAXCH";
		case 1854519167:
			return "COAT_PIETOB";
		case -1376299681:
			return "COAT_DAPDARKGREY";
		case -1955947684:
			return "COAT_BLACK";
		case 1361788230:
			return "COAT_CHPIN";
		case 1974379573:
			return "COAT_GREY";
		case 545109431:
			return "COAT_SILVERBAY";
		case 1275638003:
			return "COAT_AMBCHA";
		case 2083573823:
			return "COAT_SILVERDAPPINT";
		case 1235275977:
			return "COAT_BAY";
		case 892601357:
			return "COAT_BAYR";
		case 1224695367:
			return "COAT_FLAXCH";
		case 648301150:
			return "COAT_PAL";
		case -1597490733:
			return "COAT_GRULDUN";
		case 2000205872:
			return "COAT_WILDBAY";
		case -1428527735:
			return "COAT_TIGSTRBAY";
		case 170010697:
			return "COAT_BLUER";
		case -742726637:
			return "COAT_WHITER";
		case -1714171692:
			return "COAT_REVDAPR";
		case -103101636:
			return "COAT_DARKBAY";
		case -1999094324:
			return "COAT_LGREY";
		case 1724200240:
			return "COAT_SORREL";
		case 237935328:
			return "COAT_REDCH";
		case 120848852:
			return "COAT_BLACKRAB";
		case -868094182:
			return "COAT_CH";
		case -887362763:
			return "COAT_DAPBAY";
		case -847714194:
			return "COAT_REDR";
		case 1756765331:
			return "COAT_FLAXR";
		case -813071670:
			return "COAT_BLBAY";
		case -1900569233:
			return "COAT_DAPGREY";
		case 1688250187:
			return "COAT_BRINDLE";
		case -1262715164:
			return "COAT_BLACKCH";
		case 2010625508:
			return "COAT_REVDAPBLACK";
		case -136225010:
			return "COAT_DARKBAY";
		case -225011104:
			return "COAT_GOLD";
		case -1882436593:
			return "COAT_SILVER";
		case -757978903:
			return "COAT_REDR";
		case 1909854428:
			return "COAT_SORREL";
		case 1592694494:
			return "COAT_GRULDUN";
		case 981469777:
			return "COAT_SEALBR";
		case 1064693514:
			return "COAT_MEALYDAPBAY";
		case -1365665739:
			return "COAT_STEELGREY";
		case 1577022605:
			return "COAT_BLUEROANOVERO";
		case 381495209:
			return "COAT_DUN";
		case 3032834:
			return "COAT_BAYBRINDLE";
		case -1722101672:
			return "COAT_SORRELOVERO";
		case -189605757:
			return "COAT_BAYFRAMEOVERO";
		case 863391233:
			return "COAT_MARBLESABINO";
		case -952011226:
			return "COAT_PIE";
		case -356470463:
			return "COAT_WHITEBLAGDON";
		case -1750687713:
			return "COAT_PALBLAGDON";
		case -272192064:
			return "COAT_SKEWBALD";
		case 1935859332:
			return "COAT_SPLASHBAY";
		case -1898310680:
			return "COAT_SPLASHPIE";
		case 885568364:
			return "COAT_BLACK";
		case -1540355548:
			return "COAT_WHITE";
		case -601560591:
			return "COAT_CREM";
		case -370362766:
			return "COAT_GREY";
		case -1698261864:
			return "COAT_DAPROSEGREY";
		case -670301166:
			return "COAT_SILVER";
		case -302057902:
			return "COAT_BLACK";
		case 1257620801:
			return "COAT_SPECKLEDGREY";
		case 821735821:
			return "COAT_PIEROAN";
		case -769035812:
			return "COAT_ROSEGREY";
		case -1824684932:
			return "COAT_DAPBUCKSKIN";
		case 1589592948:
			return "COAT_SPOTTEDTRICOLOR";
		case -1331210307:
			return "COAT_NONE";
		case 122449722:
			return "COAT_NONE";
		case -1784502482:
			return "COAT_NONE";
		case -1943445834:
			return "COAT_LIGHTBUCKSKIN";
		case -635244104:
			return "COAT_BLACKSNO";
		case -1427377767:
			return "COAT_GREY";
		case -2055655009:
			return "COAT_REDCH";
		case -1293672675:
			return "COAT_LIVERCH";
		case -1179079660:
			return "COAT_SABLECHAMP";
		case 805526368:
			return "COAT_GOLDENDUN";
		case 1342496140:
			return "COAT_MAHBAY";
		case -126555855:
			return "COAT_RAVBLACK";
		case 294243421:
			return "COAT_CHEMGOLD";
		case -997197050:
			return "COAT_SEALBR";
		case -235714362:
			return "COAT_BLANKET";
		case -1678164:
			return "COAT_BLUER";
		case -977833913:
			return "COAT_BLACKRAB";
		case 1589164943:
			return "COAT_SILVERBAY";
		case -1087523615:
			return "COAT_SPLASHWHITE";
		case -496814209:
			return "COAT_BROWNR";
		case 2109055751:
			return "COAT_GREYSNOWCAPSPOTTED";
		case -776673611:
			return "COAT_GREYROANSABINO";
		case 1764402253:
			return "COAT_ALBINO";
		case -1417310078:
			return "COAT_SILVER";
		case 1096273915:
			return "COAT_GREYOVERO";
		case 772751081:
			return "COAT_SILVERDARKBAY";
		case -1140435723:
			return "COAT_SMOKYBLACK";
		case 2002524329:
			return "COAT_FLAXR";
		case 1151530184:
			return "COAT_LIGHTPALOMINO";
		case -1266525037:
			return "COAT_BLACK";
		case -2018137175:
			return "COAT_GOLDDAP";
		case -574151692:
			return "COAT_DARKBAYROAN";
		case 649786380:
			return "COAT_SILVERTAILBUCKSKIN";
		case -1921328920:
			return "COAT_BRLEOP";
		case -837607790:
			return "COAT_SABINO";
		case 370424594:
			return "COAT_FEWSPOTBUCKSKIN";
		case -364764277:
			return "COAT_MANGY";
		default:
			break;
	}
	return "";
}

int func_396(int iParam0)
{
	if (!func_130(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_437(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

bool func_397(int iParam0)
{
	if (!func_404() && func_438())
	{
		return true;
	}
	return func_210(iParam0, 1435272033);
}

bool func_398(int iParam0, bool bParam1)
{
	return (func_402(iParam0, 997808187) && !func_318(iParam0, 997808187, bParam1));
}

bool func_399(int iParam0)
{
	iVar0 = func_211(iParam0, 1);
	if (iVar0 != 0 && func_281(iVar0, 997808187, 0))
	{
		if (_unlock_is_unlocked(-1831140953))
		{
			return true;
		}
	}
	return false;
}

bool func_400(int iParam0, int iParam1)
{
	*iParam1 = func_439(iParam0, 1);
	return *iParam1 != 0;
}

bool func_401(int iParam0, int iParam1)
{
	*iParam1 = func_440(iParam0, 1, 0);
	return *iParam1 != 0;
}

bool func_402(int iParam0, int iParam1)
{
	if (!func_130(iParam0, 0))
	{
		return false;
	}
	if (func_381(iParam0))
	{
		return func_281(func_211(iParam0, 0), iParam1, 0);
	}
	return _0xdee7b3c76ed664be(iParam0, iParam1) > 0;
}

int func_403(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if ((bParam4 && iParam1 == -915411861) && func_402(iParam0, 59806960))
	{
		iParam1 = 59806960;
	}
	if (func_381(iParam0))
	{
		return func_370(func_211(iParam0, 0), iParam1, bParam3, 1);
	}
	if (!func_441(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_404()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

struct<2> func_405(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

bool func_406(struct<2> Param0)
{
	if (!func_442(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_443(Param0))
	{
		return false;
	}
	return true;
}

int func_407(int iParam0, bool bParam1)
{
	if (network_is_player_active(iParam0))
	{
		iVar0 = iParam0;
		iVar1 = 0;
		while (iVar1 <= 7)
		{
			if (Global_1196339->f_1[iVar1]->f_1 != -1 && func_444(iVar1, 64, iVar0))
			{
				if (bParam1)
				{
					if (&Global_1196898->f_78[iVar1] >= 2)
					{
						return Global_1196339->f_1[iVar1]->f_1;
					}
				}
				else if (&Global_1196898->f_78[iVar1] >= 5)
				{
					return Global_1196339->f_1[iVar1]->f_1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_408(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 24;
		case 1:
			return 25;
		case 2:
			return 26;
		case 3:
			return 27;
		case 4:
			return 28;
		case 5:
			return 29;
		case 6:
			return 30;
		case 18:
			return 38;
		case 16:
			return 39;
		case 17:
			return 40;
		case 15:
			return 41;
		case 11:
			return 31;
		case 12:
			return 32;
		case 13:
			return 33;
		case 14:
			return 35;
		case 7:
			return 34;
		default:
			break;
	}
	if (func_445(iParam0) == -785841056)
	{
		return 37;
	}
	return 23;
}

int func_409(int iParam0, int iParam1)
{
	if (!func_406(*iParam0))
	{
		return -1;
	}
	iVar0 = -1;
	iVar5 = func_446(*iParam0);
	switch (*iParam0)
	{
		case 4:
			iVar2 = iVar5;
			iVar1 = func_447(iVar2);
			if (iVar1 == -1)
			{
			}
			else
			{
				iVar0 = func_448(iVar1);
			}
			break;
		case 3:
			iVar3 = func_449(iVar5);
			iVar4 = func_450(iVar3);
			if (iVar4 == -1)
			{
			}
			else
			{
				iVar0 = func_451(iVar4);
			}
			break;
		default:
			break;
	}
	return iVar0;
}

bool func_410(int iParam0, int iParam1, bool bParam2)
{
	return !_0x375f5870a7b8bec1(func_453(func_452(iParam0, iParam1, bParam2)));
}

bool func_411()
{
	if ((func_454() || Global_1572887->f_106.f_75 > 10) || func_455())
	{
		if ((!func_456() && Global_265377->f_124517.f_71.f_21.f_2 != -504335712) && !func_457(Global_265377->f_124517.f_71.f_21.f_3))
		{
			return true;
		}
	}
	return false;
}

bool func_412(int iParam0, int iParam1)
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

bool func_413(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102219->f_3 && iParam0) != 0;
	}
	return ((*Global_1100469)[iParam1]->f_3 && iParam0) != 0;
}

bool func_414()
{
	iVar0 = get_frame_count();
	return (Global_1051439->f_3259 == iVar0 || Global_1051439->f_3259 == (iVar0 - 1));
}

int func_415(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 205718222;
			case 1:
				return 866168015;
			case 2:
				return -1103707655;
			default:
				break;
		}
		iVar0 = 3;
	}
	if (bParam2)
	{
		switch ((iParam0 - iVar0))
		{
			case 0:
				return 75922725;
			case 1:
				return 1070046552;
			case 2:
				return -1843707398;
			case 3:
				return -1571233163;
			case 4:
				return -1197011183;
			default:
				break;
		}
	}
	return 0;
}

bool func_416(int iParam0)
{
	return func_264(iParam0) == 1946043663;
}

bool func_417(int iParam0)
{
	return func_264(iParam0) == -126813555;
}

void func_418(int iParam0, var uParam1, var uParam2)
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

struct<4> func_419(bool bParam0)
{
	iVar0 = func_204(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_4)))
		{
			Global_1293346->f_4 = { func_351(923904168, func_277(bParam0), -740156546, bParam0) };
		}
		return Global_1293346->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_16)))
		{
			Global_1293346->f_16 = { func_351(923904168, func_277(bParam0), -740156546, 0) };
		}
		return Global_1293346->f_16;
	}
	return func_351(923904168, func_277(bParam0), -740156546, 0);
}

void func_420(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

struct<5> func_421(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_277(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_360(iParam0);
	switch (iVar5)
	{
		case -1037537535:
			Var0 = { func_351(889965687, Var0, 1034665895, bParam1) };
			Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			break;
		case -427144552:
			Var0 = { func_419(bParam1) };
			if (bParam2 && func_458(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_459(iParam0, &Var0, 1728382685, 0, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_459(iParam0, &Var0, -649335959, 0, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_460(iParam0, &Var6, 1728382685))
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
			Var0 = { func_461(bParam1) };
			switch (func_264(iParam0))
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
			if (func_462(iParam0, -1823706425))
			{
				Var0 = { func_351(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_462(iParam0, -1483207246))
			{
				Var0 = { func_351(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1911121386))
			{
				Var0 = { func_351(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_462(iParam0, -1653629781))
			{
				Var0 = { func_351(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_435(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_462(iParam0, -1653629781))
			{
				Var0 = { func_351(1384535894, Var0, 1784584921, bParam1) };
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

bool func_422(int* iParam0)
{
	if (iParam0->f_1 == -1)
	{
		return false;
	}
	iVar0 = func_463(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return true;
	}
	return false;
}

bool func_423(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_424(int iParam0, int iParam1)
{
	if (iParam1 == -570078785)
	{
		iVar0 = func_370(iParam0, -570078785, 0, 1);
		if (iVar0 == 0)
		{
		}
		if (!func_288(iVar0))
		{
			if (Global_1915715->f_20644)
			{
				func_464(_create_var_string(2, "SHOP_H_TOO_POOR_GOLD", func_325(iVar0)));
			}
			return 0;
		}
	}
	else if (iParam1 == -915411861)
	{
		iVar1 = func_370(iParam0, -915411861, 0, 1);
		if (iVar1 == 0)
		{
		}
		if (!func_287(iVar1))
		{
			if (Global_1915715->f_20644)
			{
				func_464("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (iParam1 == 997808187)
	{
		return 1;
	}
	if (!func_242(iParam0, iParam1, &uVar2, 1, 0))
	{
		return 0;
	}
	return 1;
}

bool func_425(struct<17> Param0)
{
	if (!func_239(Param0.f_16))
	{
		return false;
	}
	return true;
}

bool func_426(int* iParam0, int iParam1)
{
	if (!_cashinventory_transaction_get_basket_is_valid(*iParam0))
	{
		if (!func_465(iParam0, iParam1))
		{
			return false;
		}
	}
	iVar0 = _cashinventory_transaction_get_action(*iParam0);
	if (iVar0 != iParam1 || _cashinventory_transaction_get_num_of_items(*iParam0) >= 50)
	{
		if (!func_226(iParam0))
		{
			return false;
		}
		if (!func_465(iParam0, iParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_427(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 17, uParam2, 0);
}

bool func_428(int* iParam0, bool bParam1)
{
	iParam0->f_2++;
	if (bParam1)
	{
		return func_226(iParam0);
	}
	return true;
}

char* func_429(int iParam0)
{
	switch (iParam0)
	{
		case -974145463:
			return "BREED_AMERICANPAINT_OVERO";
		case 1432602132:
			return "BREED_AMERICANPAINT_TOBIANO";
		case 92296905:
			return "BREED_AMERICANPAINT_SPLASHEDWHITE";
		case -842044823:
			return "BREED_AMERICANPAINT_GREYOVERO";
		case 1371398552:
			return "BREED_AMERICANSTANDARDBRED_BLACK";
		case -745453539:
			return "BREED_AMERICANSTANDARDBRED_BUCKSKIN";
		case 1583029039:
			return "BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE";
		case -783061276:
			return "BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN";
		case -1322521536:
			return "BREED_ANDALUSIAN_DARKBAY";
		case 1100711204:
			return "BREED_ANDALUSIAN_PERLINO";
		case 728055838:
			return "BREED_ANDALUSIAN_ROSEGRAY";
		case -1782334639:
			return "BREED_APPALOOSA_BLANKET";
		case -1181052732:
			return "BREED_APPALOOSA_LEOPARDBLANKET";
		case -179102320:
			return "BREED_APPALOOSA_BROWNLEOPARD";
		case -1266863668:
			return "BREED_APPALOOSA_LEOPARD";
		case -2078767648:
			return "BREED_ARABIAN_BLACK";
		case -852553462:
			return "BREED_ARABIAN_ROSEGREYBAY";
		case -80004868:
			return "BREED_ARABIAN_WHITE";
		case 1813208211:
			return "BREED_ARDENNES_BAYROAN";
		case 836323303:
			return "BREED_ARDENNES_STRAWBERRYROAN";
		case 153881023:
			return "BREED_ARDENNES_IRONGREYROAN";
		case -1256798240:
			return "BREED_BELGIAN_BLONDCHESTNUT";
		case 2118089359:
			return "BREED_BELGIAN_MEALYCHESTNUT";
		case -1537586382:
			return "BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN";
		case 1440692746:
			return "BREED_DUTCHWARMBLOOD_SEALBROWN";
		case 697143532:
			return "BREED_DUTCHWARMBLOOD_CHOCOLATEROAN";
		case 281128160:
			return "BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT";
		case 1854519167:
			return "BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO";
		case -1376299681:
			return "BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY";
		case -1955947684:
			return "BREED_KENTUCKYSADDLE_BLACK1";
		case 1361788230:
			return "BREED_KENTUCKYSADDLE_CHESTNUTPINTO";
		case 1974379573:
			return "BREED_KENTUCKYSADDLE_GREY";
		case 545109431:
			return "BREED_KENTUCKYSADDLE_SILVERBAY";
		case 1275638003:
			return "BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE";
		case 2083573823:
			return "BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO";
		case 1235275977:
			return "BREED_MORGAN_BAY";
		case 892601357:
			return "BREED_MORGAN_BAYROAN";
		case 1224695367:
			return "BREED_MORGAN_FLAXENCHESTNUT";
		case 648301150:
			return "BREED_MORGAN_PALOMINO";
		case -1597490733:
			return "BREED_MUSTANG_GRULLODUN";
		case 2000205872:
			return "BREED_MUSTANG_WILDBAY";
		case -1428527735:
			return "BREED_MUSTANG_TIGERSTRIPEDBAY";
		case 170010697:
			return "BREED_NOKOTA_BLUEROAN";
		case -742726637:
			return "BREED_NOKOTA_WHITEROAN";
		case -1714171692:
			return "BREED_NOKOTA_REVERSEDAPPLEROAN";
		case -103101636:
			return "BREED_SHIRE_DARKBAY";
		case -1999094324:
			return "BREED_SHIRE_LIGHTGREY";
		case 1724200240:
			return "BREED_SUFFOLKPUNCH_SORREL";
		case 237935328:
			return "BREED_SUFFOLKPUNCH_REDCHESTNUT";
		case 120848852:
			return "BREED_TENNESSEEWALKER_BLACKRABICANO";
		case -868094182:
			return "BREED_TENNESSEEWALKER_CHESTNUT";
		case -887362763:
			return "BREED_TENNESSEEWALKER_DAPPLEBAY";
		case -847714194:
			return "BREED_TENNESSEEWALKER_REDROAN";
		case 1756765331:
			return "BREED_TENNESSEEWALKER_FLAXENROAN";
		case -813071670:
			return "BREED_THOROUGHBRED_BLOODBAY";
		case -1900569233:
			return "BREED_THOROUGHBRED_DAPPLEGREY";
		case 1688250187:
			return "BREED_THOROUGHBRED_BRINDLE";
		case -1262715164:
			return "BREED_THOROUGHBRED_BLACKCHESTNUT";
		case 2010625508:
			return "BREED_THOROUGHBRED_REVERSEDAPPLEBLACK";
		case -136225010:
			return "BREED_TURKOMAN_DARKBAY";
		case -225011104:
			return "BREED_TURKOMAN_GOLD";
		case -1882436593:
			return "BREED_TURKOMAN_SILVER";
		case -757978903:
			return "BREED_BRETON_REDROAN";
		case 1909854428:
			return "BREED_BRETON_SORREL";
		case 1592694494:
			return "BREED_BRETON_GRULLODUN";
		case 981469777:
			return "BREED_BRETON_SEALBROWN";
		case 1064693514:
			return "BREED_BRETON_MEALYDAPPLEBAY";
		case -1365665739:
			return "BREED_BRETON_STEELGREY";
		case 1577022605:
			return "BREED_CRIOLLO_BLUEROANOVERO";
		case 381495209:
			return "BREED_CRIOLLO_DUN";
		case 3032834:
			return "BREED_CRIOLLO_BAYBRINDLE";
		case -1722101672:
			return "BREED_CRIOLLO_SORRELOVERO";
		case -189605757:
			return "BREED_CRIOLLO_BAYFRAMEOVERO";
		case 863391233:
			return "BREED_CRIOLLO_MARBLESABINO";
		case -952011226:
			return "BREED_GYPSYCOB_PIEBALD";
		case -356470463:
			return "BREED_GYPSYCOB_WHITEBLAGDON";
		case -1750687713:
			return "BREED_GYPSYCOB_PALOMINOBLAGDON";
		case -272192064:
			return "BREED_GYPSYCOB_SKEWBALD";
		case 1935859332:
			return "BREED_GYPSYCOB_SPLASHEDBAY";
		case -1898310680:
			return "BREED_GYPSYCOB_SPLASHEDPIEBALD";
		case 885568364:
			return "BREED_KLADRUBER_BLACK";
		case -1540355548:
			return "BREED_KLADRUBER_WHITE";
		case -601560591:
			return "BREED_KLADRUBER_CREMELLO";
		case -370362766:
			return "BREED_KLADRUBER_GREY";
		case -1698261864:
			return "BREED_KLADRUBER_DAPPLEROSEGREY";
		case -670301166:
			return "BREED_KLADRUBER_SILVER";
		case -302057902:
			return "BREED_NORFOLKROADSTER_BLACK";
		case 1257620801:
			return "BREED_NORFOLKROADSTER_SPECKLEDGREY";
		case 821735821:
			return "BREED_NORFOLKROADSTER_PIEBALDROAN";
		case -769035812:
			return "BREED_NORFOLKROADSTER_ROSEGREY";
		case -1824684932:
			return "BREED_NORFOLKROADSTER_DAPPLEDBUCKSKIN";
		case 1589592948:
			return "BREED_NORFOLKROADSTER_SPOTTEDTRICOLOR";
		case -1331210307:
			return "BREED_DONKEY";
		case 122449722:
			return "BREED_MULE";
		case -1784502482:
			return "BREED_MULE_PAINTED";
		case -1943445834:
			return "BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN";
		case -635244104:
			return "BREED_APPALOOSA_BLACKSNOWFLAKE";
		case -1427377767:
			return "BREED_ARABIAN_GREY";
		case -2055655009:
			return "BREED_ARABIAN_REDCHESTNUT";
		case -1293672675:
			return "BREED_HUNGARIANHALFBRED_LIVERCHESTNUT";
		case -1179079660:
			return "BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE";
		case 805526368:
			return "BREED_MUSTANG_GOLDENDUN";
		case 1342496140:
			return "BREED_TENNESSEEWALKER_MAHOGANYBAY";
		case -126555855:
			return "BREED_SHIRE_RAVENBLACK";
		case 294243421:
			return "BREED_BUELL_WARVETS";
		case -997197050:
			return "BREED_JOHN_ENDLESSSUMMER";
		case -235714362:
			return "BREED_MURFREEBROOD_MANGE_01";
		case -1678164:
			return "BREED_MURFREEBROOD_MANGE_02";
		case -977833913:
			return "BREED_MURFREEBROOD_MANGE_03";
		case 1589164943:
			return "BREED_WINTER02_01";
		case -1087523615:
			return "BREED_EAGLEFLIES";
		case -496814209:
			return "BREED_GANG_BILL";
		case 2109055751:
			return "BREED_GANG_CHARLES";
		case -776673611:
			return "BREED_GANG_CHARLES_ENDLESSSUMMER";
		case 1764402253:
			return "BREED_GANG_DUTCH";
		case -1417310078:
			return "BREED_GANG_HOSEA";
		case 1096273915:
			return "BREED_GANG_JAVIER";
		case 772751081:
			return "BREED_GANG_JOHN";
		case -1140435723:
			return "BREED_GANG_KAREN";
		case 2002524329:
			return "BREED_GANG_KIERAN";
		case 1151530184:
			return "BREED_GANG_LENNY";
		case -1266525037:
			return "BREED_GANG_MICAH";
		case -2018137175:
			return "BREED_GANG_SADIE";
		case -574151692:
			return "BREED_GANG_SADIE_ENDLESSSUMMER";
		case 649786380:
			return "BREED_GANG_SEAN";
		case -1921328920:
			return "BREED_GANG_TRELAWNEY";
		case -837607790:
			return "BREED_GANG_UNCLE";
		case 370424594:
			return "BREED_GANG_UNCLE_ENDLESSSUMMER";
		case -364764277:
			return "BREED_MANGY_BACKUP";
		default:
			break;
	}
	return "";
}

char[] func_430(char[4] cParam0)
{
	return cParam0;
}

bool func_431(int iParam0, int iParam1, var uParam2, int iParam3)
{
	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_147(iParam0, 2))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!func_466(iParam0, iParam1, &Var0))
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

int func_432(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (func_467(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_433(bool bParam0)
{
	if (func_260() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_204(bParam0));
}

int func_434(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = -1;
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_435(*uParam0, &Var1, 1, 0, -1))
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
	iVar15 = func_360(Var1.f_4);
	if (iVar15 == -1784221369)
	{
		Var16 = { func_468(*uParam0, 1, 0) };
		Var16.f_10 = iParam1;
		iVar0 = func_469(-1230526146, &Var16, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -2072933068)
	{
		Var44 = { func_470(*uParam0, 1, 0) };
		Var44.f_10 = iParam1;
		iVar0 = func_471(-1230526146, &Var44, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -1037537535)
	{
		Var69 = { func_472(*uParam0, 1, 0) };
		Var69.f_10 = iParam1;
		iVar0 = func_473(-1230526146, &Var69, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var86 = { func_474(&Var1, 0) };
		Var86.f_10 = iParam1;
		iVar0 = func_475(-1230526146, &Var86, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

bool func_435(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_476(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

void func_436(int iParam0, int iParam1, var uParam2, int iParam3)
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
	if (!_0xa97ee5e4589fcf5a(iParam0, &Var7) || Var7 == 0)
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
			if ((*uParam2)[iVar0]->f_1 == 0 && func_264(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

int func_437(int iParam0)
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

bool func_438()
{
	return func_477(func_405(0));
}

int func_439(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_415(iVar0, 1, 0);
		if (!func_441(iParam0, iVar33, &Var2, &iVar1, 1, 0))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_416(&(Var2[iVar34])))
				{
					if (!bParam1 || func_291(&(Var2[iVar34]), 0, 1, 1) > 0)
					{
						return iVar33;
					}
					Jump @134; //curOff = 106
				}
				else if (&Var2[iVar34] == 0)
				{
				}
				else
				{
					iVar34++;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_440(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar40 = func_415(iVar0, 0, 1);
		if (!func_441(iParam0, iVar40, &Var9, &iVar1, 1, 0))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_417(&(Var9[iVar41])))
				{
					if (!bParam1 || func_291(&(Var9[iVar41]), 0, 1, 1) > 0)
					{
						bVar8 = true;
					}
				}
				else if (&Var9[iVar41] == 2084597891 || &Var9[iVar41] == 773203532)
				{
					if ((bParam2 && &Var9[iVar41] == 2084597891) || (!bParam2 && &Var9[iVar41] == 773203532))
					{
						if (iVar4 == 0 || (bVar6 && Var9[iVar41]->f_1 < iVar2))
						{
							iVar5 = iVar40;
							iVar3 = Var9[iVar41]->f_1;
							iVar7 = 1;
						}
					}
					else if (iVar4 == 0 || Var9[iVar41]->f_1 < iVar2)
					{
						iVar5 = iVar40;
						iVar3 = Var9[iVar41]->f_1;
						iVar7 = 0;
					}
				}
				else if (&Var9[iVar41] == 0)
				{
				}
				else
				{
					iVar41++;
				}
			}
			if (bVar8 && iVar5 != 0)
			{
				iVar4 = iVar5;
				iVar2 = iVar3;
				bVar6 = iVar7;
			}
		}
		iVar0++;
	}
	return iVar4;
}

bool func_441(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_130(iParam0, 0))
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
		func_478(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_442(int iParam0)
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

int func_443(int iParam0)
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

bool func_444(int iParam0, int iParam1, int iParam2)
{
	return func_479((*Global_1196567)[iParam2][iParam0], iParam1);
}

int func_445(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return &(Global_1196898->f_1[iParam0]);
}

int func_446(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_480(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_447(int iParam0)
{
	iVar0 = -1;
	if (func_481(&Var1, iParam0))
	{
		iVar0 = ((func_482() - _0xe13634bb6baf0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_448(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return (*Global_1257541)[iParam0]->f_1;
}

int func_449(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1336837986;
		case 1:
			return 2124631622;
		case 2:
			return -66250361;
		case 3:
			return 1443764480;
		case 4:
			return -668110249;
		case 5:
			return -1381389849;
		case 6:
			return 536699577;
		case 7:
			return 541147288;
		case 8:
			return 377122918;
		case 9:
			return 1158195437;
		case 10:
			return -1261475678;
		case 11:
			return -621956193;
		case 12:
			return 1081776803;
		case 13:
			return -218697175;
		case 14:
			return -867762478;
		case 15:
			return 602097925;
		case 16:
			return 1724417419;
		case 17:
			return -728200180;
		case 18:
			return 1404415665;
		case 20:
			return 339077182;
		case 21:
			return 650120418;
		case 28:
			return 1695693301;
		case 19:
			return -1809176396;
		case 22:
			return 349772825;
		case 23:
			return 1657045547;
		case 24:
			return -590482787;
		case 25:
			return -1711308722;
		case 26:
			return -409129282;
		case 27:
			return -1790985606;
		case 30:
			return 1518877519;
		default:
			break;
	}
	return 0;
}

var func_450(int iParam0)
{
	iVar0 = func_484(0, (func_483() - 1), &iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	return func_485(iVar0);
}

int func_451(int iParam0)
{
	return &(Global_1109804->f_5737[iParam0]);
}

struct<8> func_452(int iParam0, int iParam1, bool bParam2)
{
	if (!func_486(iParam0))
	{
		return Var5;
	}
	if (!func_487(&Var0))
	{
		return Var5;
	}
	if (!func_488(Var0, &(Var0.f_1), 13, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_488(Var0, &(Var0.f_1), 14, iParam0, 0, 1))
	{
		return Var5;
	}
	if (!func_488(Var0, &(Var0.f_1), 19, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_488(Var0, &(Var0.f_1), 21, iParam1, 0, bParam2))
	{
		if (bParam2)
		{
		}
		return Var5;
	}
	return func_489(Var0);
}

var func_453(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

bool func_454()
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
	if (!func_406(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

bool func_455()
{
	return func_406(*Global_1051213);
}

bool func_456()
{
	return func_490(func_405(0));
}

bool func_457(int iParam0)
{
	return ((iParam0 == -1759663922 || iParam0 == -318976023) || iParam0 == 772881414);
}

bool func_458(int iParam0, bool bParam1)
{
	if (func_264(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_491();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_459(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_278(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

bool func_460(int iParam0, var uParam1, int iParam2)
{
	if (func_492(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_461(bool bParam0)
{
	iVar0 = func_204(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_8)))
		{
			Global_1293346->f_8 = { func_351(271701509, func_277(bParam0), 12999093, 0) };
		}
		return Global_1293346->f_8;
	}
	return func_351(271701509, func_277(bParam0), 12999093, 0);
}

bool func_462(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_264(iParam0);
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
			if (func_493(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

int func_463(int* iParam0)
{
	return func_71(iParam0->f_1);
}

void func_464(char* sParam0)
{
	Global_1915715->f_22470 = func_494(sParam0, 10000, 0, 0, 0, 1);
}

bool func_465(int* iParam0, int iParam1)
{
	if (!_cashinventory_transaction_start(iParam0, 712853601, iParam1))
	{
		return false;
	}
	return true;
}

bool func_466(int iParam0, int iParam1, var uParam2)
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

bool func_467(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_204(bParam3);
	}
	if (!_0x22e590f108289a9d(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_476(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

struct<28> func_468(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var28.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_204(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_474(&Var28, bParam5) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_469(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_495(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_497(func_496(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_498(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 28), iVar0, uParam1);
	}
	return -1;
}

struct<25> func_470(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var25.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_204(bParam4), &uParam0, &Var25, 24, 1))
	{
		return Var0;
	}
	Var0 = { func_474(&Var25, bParam5) };
	Var0.f_16 = { Var25.f_15 };
	Var0.f_24 = Var25.f_23;
	return Var0;
}

int func_471(int iParam0, var uParam1, bool bParam2)
{
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_497(func_499(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_498(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 25), iVar0, uParam1);
	}
	return -1;
}

struct<17> func_472(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_204(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_474(&Var17, bParam5) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_473(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_495(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_497(func_500(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_498(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 17), iVar0, uParam1);
	}
	return -1;
}

struct<16> func_474(var uParam0, bool bParam1)
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
		Var0.f_15 = func_352(uParam0->f_4, -455129387);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_350() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_475(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_495(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_497(func_501(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_498(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

bool func_476(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_204(bParam2);
	}
	if (!_0x9700e8efc4ab9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

bool func_477(struct<2> Param0)
{
	return func_502(Param0, 5, 8);
}

void func_478(int iParam0, int iParam1, var uParam2, int iParam3)
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
			if ((*uParam2)[iVar0]->f_1 == 0 && func_264(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_479(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_480(struct<2> Param0, var uParam2)
{
	if (!func_406(Param0))
	{
		return false;
	}
	func_503(uParam2);
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

bool func_481(var uParam0, int iParam1)
{
	*uParam0 = Global_1257541->f_8863;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (_0x603ac35fd4602c76(*uParam0) && _datafile_get_data_node_index(&(uParam0->f_1), uParam0));
}

int func_482()
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

int func_483()
{
	return Global_1109804->f_5737.f_632;
}

int func_484(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam1)
	{
		return -1;
	}
	iVar0 = ((iParam0 + iParam1) / 2);
	if (*iParam2 < &Global_1109804->f_5737.f_451[iVar0])
	{
		return func_484(iParam0, (iVar0 - 1), iParam2);
	}
	if (*iParam2 > &Global_1109804->f_5737.f_451[iVar0])
	{
		return func_484(iVar0 + 1, iParam1, iParam2);
	}
	return iVar0;
}

var func_485(int iParam0)
{
	return Global_1109804->f_5737.f_451[iParam0]->f_1;
}

bool func_486(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 70);
}

bool func_487(var uParam0)
{
	uVar0 = func_504();
	if (!_0x7907969497ea92f5(uVar0))
	{
		return false;
	}
	if (!_0x603ac35fd4602c76(uVar0))
	{
		return false;
	}
	_copy_memory(uParam0, &uVar1, 5);
	*uParam0 = uVar0;
	return true;
}

bool func_488(struct<5> Param0, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	Param0.f_2 = iParam6;
	Param0.f_3 = iParam7;
	Param0.f_4 = iParam8;
	if (!_datafile_get_data_node_index(bParam5, &Param0))
	{
		return false;
	}
	return true;
}

struct<8> func_489(struct<5> Param0)
{
	return func_505(Param0, 52, 1);
}

bool func_490(struct<2> Param0)
{
	return func_502(Param0, 1, 4);
}

bool func_491()
{
	return (func_216(-1185145312, 0, 0, 0) > 0 && func_383(func_351(889965687, func_277(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

bool func_492(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_204(0);
	*uParam1 = { func_351(iParam0, func_419(0), iParam3, 0) };
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

bool func_493(int iParam0, int iParam1, int iParam2)
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

var func_494(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_495(int iParam0, var uParam1)
{
	uVar0 = _0x6c9f12700bce69f4(iParam0, uParam1);
	if (iParam0 == 1702063850)
	{
		if ((func_506(uParam1->f_8, iParam0, uVar0, 2048) || func_506(uParam1->f_8, iParam0, uVar0, 32768)) || func_506(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_506(uParam1->f_8, iParam0, uVar0, 4) || func_506(uParam1->f_8, iParam0, uVar0, 256)) || func_506(uParam1->f_8, iParam0, uVar0, 65536)) || func_506(uParam1->f_8, iParam0, uVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -1406934746)
	{
		if (((func_506(uParam1->f_8, iParam0, uVar0, 1) || func_506(uParam1->f_8, iParam0, uVar0, 8)) || func_506(uParam1->f_8, iParam0, uVar0, 65536)) || func_506(uParam1->f_8, iParam0, uVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -1318406457)
	{
		if (((func_506(uParam1->f_8, iParam0, uVar0, 1) || func_506(uParam1->f_8, iParam0, uVar0, 16)) || func_506(uParam1->f_8, iParam0, uVar0, 2)) || func_506(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_506(uParam1->f_8, iParam0, uVar0, 8) || func_506(uParam1->f_8, iParam0, uVar0, 4096)) || func_506(uParam1->f_8, iParam0, uVar0, 256)) || func_506(uParam1->f_8, iParam0, uVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_496(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 28, uParam2, 0);
}

int func_497(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (_cashinventory_transaction_checkout(iParam1))
		{
			func_129(iParam1, 1, 0, 0);
			return iParam1;
		}
		_cashinventory_transaction_delete(iParam1);
	}
	else if (_cashinventory_transaction_get_num_of_items(iParam1) == 0)
	{
		_cashinventory_transaction_delete(iParam1);
	}
	func_129(iParam1, 2, 0, 0);
	return -1;
}

int func_498(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_129(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

bool func_499(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 25, uParam2, 0);
}

bool func_500(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 17, uParam2, 0);
}

bool func_501(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 16, uParam2, 0);
}

bool func_502(struct<2> Param0, int iParam2, int iParam3)
{
	if (!func_406(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_507(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

void func_503(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

var func_504()
{
	return Global_1071686->f_28448[32]->f_3;
}

struct<8> func_505(vector3 vParam0, var uParam3, var uParam4, int iParam5, int iParam6)
{
	vParam0.f_2 = iParam5;
	if (_datafile_get_string(&Var0, &vParam0))
	{
	}
	return Var0;
}

int func_506(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (func_479(uParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

int func_507(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_446(Param0);
	}
	return -1;
}

