void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	StringCopy(&cLocal_19, "rank_item_", 128);
	StringCopy(&cLocal_35, "vip_item_", 128);
	if (has_force_cleanup_occurred(4))
	{
		func_1(&uLocal_51);
		return;
	}
	bVar0 = false;
	while (!bVar0)
	{
		switch (func_2(&uLocal_51))
		{
			case 0:
				if (func_3(&uLocal_51))
				{
					func_4(&uLocal_51, 1);
				}
				else
				{
					bVar0 = true;
				}
				break;
			case 1:
				switch (func_5(&uLocal_51))
				{
					case 0:
						func_4(&uLocal_51, 2);
						break;
					case 1:
						break;
					case 2:
						bVar0 = true;
						break;
				}
				break;
			case 2:
				func_4(&uLocal_51, 3);
				break;
			case 3:
				if (func_6(&uLocal_51))
				{
					bVar0 = true;
				}
				else
				{
					func_7(&uLocal_51);
				}
				break;
		}
		wait(0);
	}
	func_1(&uLocal_51);
}

void func_1(var uParam0)
{
	func_8(uParam0);
	func_9(uParam0);
	func_10(&(uParam0->f_445));
	func_11(&(uParam0->f_478));
	if (func_12(uParam0))
	{
	}
	func_13(-1909188275);
	if (_0x9e4ef615e307fbbe())
	{
	}
	else
	{
		terminate_this_thread();
	}
}

int func_2(var uParam0)
{
	return *uParam0;
}

bool func_3(var uParam0)
{
	network_set_script_is_safe_for_network_game();
	if (func_14(uParam0))
	{
	}
	else
	{
		return false;
	}
	if (!func_15(uParam0))
	{
		return false;
	}
	if (!func_16(uParam0))
	{
		return false;
	}
	func_17(uParam0, 0);
	func_18(&(uParam0->f_416));
	func_19(&(uParam0->f_412));
	if (!func_20(&(uParam0->f_445)))
	{
		return false;
	}
	func_21(-1909188275);
	return true;
}

void func_4(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_5(var uParam0)
{
	return 0;
}

bool func_6(var uParam0)
{
	if (_0x9e4ef615e307fbbe())
	{
		return true;
	}
	return false;
}

void func_7(var uParam0)
{
	func_22(uParam0);
	func_23(uParam0);
	func_24(&(uParam0->f_416), &(uParam0->f_412));
	func_25(&(uParam0->f_412));
	func_26(&(uParam0->f_445));
	func_27(uParam0);
}

void func_8(var uParam0)
{
	func_28(uParam0);
}

int func_9(var uParam0)
{
	return 1;
}

void func_10(int* iParam0)
{
	if (!is_string_null_or_empty(&(iParam0->f_1)))
	{
		_0x531a78d6bf27014b(&(iParam0->f_1));
	}
	func_29(iParam0, 0);
	StringCopy(&(iParam0->f_1), "", 128);
	StringCopy(&(iParam0->f_17), "", 128);
}

void func_11(var uParam0)
{
	if (*uParam0 == 0)
	{
		return;
	}
	func_30(uParam0, *uParam0, 0);
}

bool func_12(var uParam0)
{
	if (!_databinding_is_data_id_valid(uParam0->f_3))
	{
		return false;
	}
	_databinding_remove_data_entry(uParam0->f_3);
	return true;
}

void func_13(int iParam0)
{
	if (Global_1960148->f_5 == -1)
	{
		return;
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1960148->f_5 == -1)
	{
		return;
	}
	if (Global_1960148->f_5 != iParam0)
	{
	}
	iVar0 = absi((Global_1296859->f_21 - Global_1960148->f_3));
	_0x25cc50ec1a6f3a96(Global_1960148->f_4, Global_1960148->f_5, iVar0, Global_1960148->f_2);
	Global_1960148->f_1 = 0;
	func_31(Global_1960148);
	func_32(iParam0, 0);
}

bool func_14(var uParam0)
{
	uParam0->f_3 = _databinding_add_data_container_from_path("", "season_rewards_data");
	if (!_databinding_is_data_id_valid(uParam0->f_3))
	{
		return false;
	}
	uParam0->f_3.f_1 = _databinding_add_data_bool(uParam0->f_3, "season_vip_pass_owned", 0);
	uParam0->f_3.f_2 = _databinding_add_data_string(uParam0->f_3, "tooltipRawText", "");
	return true;
}

bool func_15(var uParam0)
{
	if (!func_33(uParam0))
	{
		return false;
	}
	if (func_34(&(uParam0->f_6.f_19), &(uParam0->f_6)))
	{
		func_35(&(uParam0->f_6.f_19), &(uParam0->f_6.f_26));
		iVar2 = func_36();
		iVar4 = 0;
		while (iVar4 < iVar2)
		{
			func_37(iVar4, &sVar0, &sVar1);
			cVar3 = _create_var_string(2, func_38(-1069954596), sVar0, sVar1);
			if (!func_39(&(uParam0->f_6.f_19), &(uParam0->f_6.f_26), cVar3))
			{
			}
			iVar4++;
		}
	}
	else
	{
		return false;
	}
	if (!func_40(&(uParam0->f_6), &(uParam0->f_6.f_6)))
	{
	}
	if (!func_41(&(uParam0->f_6.f_367), &(uParam0->f_6), "largeTextureName", "largeTextureTxd", "largeTextureAlpha", 1041865114, 1041865114, 1050253722))
	{
		return false;
	}
	if (!func_42(&(uParam0->f_6.f_383), &(uParam0->f_6), 615252130, 1606023574, 1489017156))
	{
		return false;
	}
	return true;
}

bool func_16(var uParam0)
{
	if (!func_43(uParam0))
	{
		return false;
	}
	return true;
}

void func_17(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
}

int func_18(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_44(uParam0->f_2[iVar0]);
		iVar0++;
	}
	func_44(&(uParam0->f_18));
	return 1;
}

void func_19(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	uParam0->f_3 = 0f;
}

bool func_20(int* iParam0)
{
	func_45(iParam0, 0);
	StringCopy(&(iParam0->f_1), "", 128);
	StringCopy(&(iParam0->f_17), "", 128);
	return true;
}

void func_21(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1960148->f_5 != -1 && Global_1960148->f_5 != iParam0)
	{
		func_13(Global_1960148->f_5);
	}
	Global_1960148->f_3 = Global_1296859->f_21;
	Global_1960148->f_5 = iParam0;
	Global_1960148->f_4 = &Global_1960148;
}

void func_22(var uParam0)
{
	if (func_46(uParam0, 4))
	{
		func_47(uParam0, 3, 1);
		func_47(uParam0, 4, 0);
	}
	while (_event_manager_is_event_pending(1690011036))
	{
		if (!_event_manager_peek_event(1690011036, &uVar0))
		{
		}
		else
		{
			func_48(uParam0, &uVar0);
			_event_manager_pop_event(1690011036);
		}
	}
	if (func_46(uParam0, 3))
	{
		Var4 = { func_49(uParam0) };
		if (func_50(uParam0, &Var4))
		{
			func_48(uParam0, &Var4);
		}
		func_47(uParam0, 3, 0);
	}
}

void func_23(var uParam0)
{
	iVar0 = func_51();
	iVar1 = func_52(uParam0);
	if (iVar0 != func_52(uParam0))
	{
		if (iVar1 != 0)
		{
			func_53(uParam0, iVar1);
		}
		func_17(uParam0, iVar0);
		func_54(uParam0, iVar0);
		func_55(uParam0, iVar0);
	}
	func_56(uParam0, iVar0);
	func_57(uParam0, iVar0);
}

void func_24(var uParam0, var uParam1)
{
	if (*uParam0)
	{
		if (!func_58(uParam1))
		{
			*uParam0 = 0;
		}
	}
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = &uParam0->f_2[iVar1];
		if (!func_59(uParam0->f_2[iVar1]))
		{
		}
		else
		{
			if (!func_58(uParam1))
			{
				if (!func_60(uParam1, 35f, 1065353216))
				{
				}
				Jump @201; //curOff = 96
			}
			else
			{
				switch (func_61(uParam0->f_2[iVar1]))
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
						if (func_62(uParam1) < 1f)
						{
							iVar0++;
						}
						else
						{
							func_63(uParam1);
							func_64(uParam0, iVar2);
							*uParam0 = 1;
						}
						iVar1++;
						uParam0->f_1 = iVar0 > 0;
					}
				}
			}
		}

void func_25(var uParam0)
{
	if (!func_58(uParam0))
	{
		return;
	}
	if (uParam0->f_2 > 0f)
	{
		if (func_62(uParam0) > uParam0->f_2)
		{
			*uParam0 = 0;
			return;
		}
	}
	func_65(0);
	_uiprompt_disable_prompts_this_frame();
}

void func_26(int* iParam0)
{
	if (!func_66(*iParam0, 1))
	{
		return;
	}
	if (!_0xd9130842d7226045(&(iParam0->f_1), 0))
	{
		return;
	}
	play_sound_frontend(&(iParam0->f_17), &(iParam0->f_1), false, 0);
	func_29(iParam0, 1);
}

void func_27(var uParam0)
{
	if (!func_67(&(uParam0->f_416), &(uParam0->f_412)))
	{
		return;
	}
	if (func_68(&(uParam0->f_416)) == func_69())
	{
		func_70(uParam0, -755634792);
	}
	if (func_68(&(uParam0->f_416)) == func_71())
	{
		if (func_72(uParam0->f_481, 0))
		{
			if (func_73(uParam0->f_416.f_18, &uVar0))
			{
				_0x621d719c4836292b(&uVar0, uParam0->f_481.f_1, uParam0->f_481, uParam0->f_481.f_2, func_74(1), -1123362255);
			}
		}
	}
}

void func_28(var uParam0)
{
	func_75(0);
	func_76(&(uParam0->f_6.f_367));
	if (!func_77(uParam0))
	{
		func_30(&(uParam0->f_478), 911005517, 0);
	}
}

void func_29(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

void func_30(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 != iParam1)
	{
		return;
	}
	iVar0 = (Global_1296859->f_21 - uParam0->f_1);
	_0x3255d4d2082c6339(*uParam0, iVar0, uParam0->f_2, iParam2);
	func_78(uParam0);
}

void func_31(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_3 = 0;
	uParam0->f_5 = -1;
	uParam0->f_2 = 1894345440;
}

void func_32(int iParam0, bool bParam1)
{
	if (Global_1960148->f_1)
	{
		return;
	}
	Global_1960148 = iParam0;
	if (bParam1)
	{
		Global_1960148->f_1 = 1;
	}
}

bool func_33(var uParam0)
{
	if (!_databinding_is_data_id_valid(uParam0->f_3))
	{
		return false;
	}
	uParam0->f_6 = _databinding_add_data_container_by_hash(uParam0->f_3, -1571676232);
	uParam0->f_6.f_1 = _databinding_add_data_string_by_hash(uParam0->f_6, -1555856424, "");
	uParam0->f_6.f_2 = _databinding_add_data_hash_by_hash(uParam0->f_6, -1076322567, 0);
	uParam0->f_6.f_3 = _databinding_add_ui_item_list_by_hash(uParam0->f_6, 456863167);
	if (_databinding_is_data_id_valid(uParam0->f_6.f_3))
	{
		_databinding_clear_binding_array(uParam0->f_6.f_3);
	}
	uParam0->f_6.f_4 = _databinding_add_ui_item_list_by_hash(uParam0->f_6, -350267329);
	if (_databinding_is_data_id_valid(uParam0->f_6.f_4))
	{
		_databinding_clear_binding_array(uParam0->f_6.f_4);
	}
	uParam0->f_6.f_5 = _databinding_add_data_int_by_hash(uParam0->f_6, 1728520791, 0);
	uParam0->f_6.f_387 = _databinding_add_data_hash_by_hash(uParam0->f_6, -840685091, 0);
	uParam0->f_6.f_388 = _databinding_add_data_hash_by_hash(uParam0->f_6, -691977066, 0);
	uParam0->f_6.f_389 = _databinding_add_data_string_by_hash(uParam0->f_6, 1212273021, "");
	uParam0->f_6.f_390 = _databinding_add_data_bool_by_hash(uParam0->f_6, -94662335, 0);
	uParam0->f_6.f_391 = _databinding_add_data_hash_by_hash(uParam0->f_6, 2103186173, 0);
	return true;
}

bool func_34(var uParam0, var uParam1)
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

void func_35(var uParam0, var uParam1)
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

int func_36()
{
	return ceil((to_float(func_79(0)) / 5f));
}

void func_37(int iParam0, var uParam1, var uParam2)
{
	func_80(5, iParam0, 1, uParam1, uParam2);
	*uParam1++;
	*uParam2++;
}

char* func_38(int iParam0)
{
	Var0 = func_81();
	Var0.f_2 = 9;
	Var0.f_3 = func_74(0);
	Var0.f_4 = iParam0;
	if (!_0x951327435dc5164b(&Var5, &Var0))
	{
		return func_82(iParam0);
	}
	return func_83(Var5);
}

bool func_39(var uParam0, var uParam1, char* sParam2)
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
	*(*uParam1)[uParam0->f_4] = { func_84(sParam2) };
	(*uParam1)[uParam0->f_4]->f_16 = 0;
	uParam0->f_4++;
	_databinding_write_data_int(uParam0->f_1, uParam0->f_4);
	return true;
}

bool func_40(var uParam0, var uParam1)
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

bool func_41(var uParam0, var uParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
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

bool func_42(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
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

bool func_43(var uParam0)
{
	if (!_databinding_is_data_id_valid(uParam0->f_3))
	{
		return false;
	}
	uParam0->f_6.f_392 = _databinding_add_data_int_by_hash(uParam0->f_3, -1708640972, 0);
	if (!func_85(&(uParam0->f_3), &(uParam0->f_6.f_392.f_1), "infoScreenBody"))
	{
		return false;
	}
	uParam0->f_6.f_392.f_4 = _databinding_add_data_string_by_hash(uParam0->f_3, -1595368409, "");
	uParam0->f_6.f_392.f_5 = _databinding_add_data_bool_by_hash(uParam0->f_3, -1452868382, 0);
	uParam0->f_6.f_392.f_12 = _databinding_add_data_hash_by_hash(uParam0->f_3, -1882936767, 0);
	uParam0->f_6.f_392.f_8 = _databinding_add_data_hash_by_hash(uParam0->f_3, 1066324006, 0);
	uParam0->f_6.f_392.f_9 = _databinding_add_data_hash(uParam0->f_3, "infoScreenBgTextureDict", 0);
	uParam0->f_6.f_392.f_10 = _databinding_add_data_hash(uParam0->f_3, "infoScreenBgGradientTexture", 0);
	uParam0->f_6.f_392.f_11 = _databinding_add_data_hash(uParam0->f_3, "infoScreenBgGradientTextureDict", 0);
	uParam0->f_6.f_392.f_6 = _databinding_add_data_hash_by_hash(uParam0->f_3, -799890388, 0);
	uParam0->f_6.f_392.f_7 = _databinding_add_data_hash(uParam0->f_3, "infoScreenLogoTextureDict", 0);
	return true;
}

void func_44(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
}

void func_45(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

bool func_46(var uParam0, int iParam1)
{
	return func_66(uParam0->f_1, iParam1);
}

void func_47(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_45(&(uParam0->f_1), iParam1);
	}
	else
	{
		func_29(&(uParam0->f_1), iParam1);
	}
}

void func_48(var uParam0, var uParam1)
{
	switch (*uParam1)
	{
		case -1740156697:
			func_86(uParam0, uParam1);
			break;
		case -1203660660:
			func_87(uParam0, uParam1);
			break;
		case -722926211:
		case 703281244:
			func_88(uParam0, uParam1);
			break;
	}
}

struct<4> func_49(var uParam0)
{
	return uParam0->f_441;
}

bool func_50(var uParam0, var uParam1)
{
	iVar0 = 1;
	switch (uParam1->f_2)
	{
		case -1479343923:
		case 684358904:
		case 1143084795:
		case 2097921812:
			iVar1 = func_89(uParam0);
			break;
		case -1964195787:
		case 148626529:
		case 389841892:
		case 406185559:
			iVar1 = func_90(uParam0);
			break;
	}
	if (iVar1 > 0)
	{
		if (uParam1->f_1 >= iVar1)
		{
			uParam1->f_1 = (iVar1 - 1);
		}
		switch (uParam1->f_2)
		{
			case -1479343923:
			case 2097921812:
				if (!func_91(uParam0, uParam1->f_1, &(uParam1->f_3)))
				{
				}
				break;
			case -1964195787:
			case 389841892:
				if (!func_92(uParam0, uParam1->f_1, &(uParam1->f_3)))
				{
				}
				break;
		}
		if (*uParam1 != -1740156697)
		{
			*uParam1 = -1740156697;
		}
		if (_databinding_is_data_id_valid(uParam1->f_3))
		{
			uParam1->f_2 = _databinding_read_data_hash_string_from_parent_by_hash(uParam1->f_3, 148336560);
		}
		else
		{
			iVar0 = 0;
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

var func_51()
{
	return _0x96fd694fe5be55dc(-1558366648);
}

int func_52(var uParam0)
{
	return uParam0->f_2;
}

void func_53(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case -1558366648:
			func_28(uParam0);
			break;
		case -1102037190:
			func_93(uParam0);
			break;
	}
}

void func_54(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case -1558366648:
			func_94(uParam0);
			break;
		case -1102037190:
			func_95(uParam0);
			break;
	}
}

void func_55(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case -1558366648:
			func_96(&(uParam0->f_6.f_19));
			break;
	}
}

void func_56(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case -1558366648:
			func_97(uParam0);
			break;
		case -1102037190:
			func_98(uParam0);
			break;
	}
}

void func_57(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case -1558366648:
			if (func_99(&(uParam0->f_6.f_19)))
			{
				func_102(&(uParam0->f_478), func_101(func_100(&(uParam0->f_6.f_19))));
			}
			func_103(&(uParam0->f_6.f_19), &(uParam0->f_6.f_26));
			break;
	}
}

bool func_58(var uParam0)
{
	return *uParam0;
}

bool func_59(var uParam0)
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

bool func_60(var uParam0, float fParam1, int iParam2)
{
	if (func_58(uParam0))
	{
		return false;
	}
	*uParam0 = 1;
	uParam0->f_1 = func_104();
	uParam0->f_2 = fParam1;
	uParam0->f_3 = iParam2;
	return true;
}

int func_61(var uParam0)
{
	return func_105(*uParam0);
}

float func_62(var uParam0)
{
	if (!*uParam0)
	{
		return 0f;
	}
	return absf((func_104() - uParam0->f_1));
}

void func_63(var uParam0)
{
	if (func_62(uParam0) < uParam0->f_3)
	{
		uParam0->f_2 = absf((uParam0->f_3 - func_62(uParam0)));
	}
	else
	{
		*uParam0 = 0;
	}
}

int func_64(var uParam0, int iParam1)
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
			func_44(uParam0->f_2[iVar0]);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_65(int iParam0)
{
	if (Global_1940144->f_105.f_2 >= iParam0)
	{
		return;
	}
	Global_1940144->f_105.f_2 = iParam0;
}

bool func_66(int iParam0, int iParam1)
{
	return is_bit_set(iParam0, iParam1);
}

bool func_67(var uParam0, var uParam1)
{
	if (*uParam0 && func_58(uParam1))
	{
		return false;
	}
	return *uParam0;
}

int func_68(var uParam0)
{
	return uParam0->f_18.f_1;
}

int func_69()
{
	return func_106(1831575464);
}

void func_70(var uParam0, int iParam1)
{
	cVar0 = { func_107(iParam1) };
	if (!func_108(&(uParam0->f_445), &cVar0, &(cVar0.f_16)))
	{
	}
}

int func_71()
{
	return func_106(-1052513930);
}

bool func_72(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_73(var uParam0, var uParam1)
{
	if (_0xf184b3ece36219cf(uParam0, uParam1))
	{
		return true;
	}
	return false;
}

int func_74(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1293346->f_2982;
		case 1:
			return Global_1293346->f_2983;
		default:
			break;
	}
	return 0;
}

void func_75(bool bParam0)
{
	sVar0 = func_109(-612852356);
	if (bParam0)
	{
		animpostfx_play(sVar0);
	}
	else
	{
		animpostfx_stop(sVar0);
	}
}

void func_76(var uParam0)
{
	if (*uParam0 == 0)
	{
		return;
	}
	*uParam0 = 1;
	func_110(uParam0);
	uParam0->f_7 = 0;
	uParam0->f_6 = 0;
	_databinding_write_data_hash_string(uParam0->f_10, 0);
	_databinding_write_data_hash_string(uParam0->f_11, 0);
	_databinding_write_data_int(uParam0->f_12, 0);
}

bool func_77(var uParam0)
{
	return uParam0->f_6.f_392.f_13;
}

void func_78(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

int func_79(int iParam0)
{
	return _0xe80e50bee276a54a(func_74(iParam0), func_111(iParam0));
}

void func_80(int iParam0, int iParam1, bool bParam2, var uParam3, var uParam4)
{
	if (bParam2)
	{
		*uParam3 = (iParam0 * iParam1);
		*uParam4 = (*uParam3 + (iParam0 - 1));
	}
	else
	{
		*uParam3 = (iParam0 * iParam1);
		*uParam4 = (*uParam3 - (iParam0 - 1));
	}
}

var func_81()
{
	return Global_1071686->f_28448[52]->f_3;
}

var func_82(int iParam0)
{
	Var0 = func_81();
	Var0.f_2 = 8;
	Var0.f_3 = iParam0;
	Var0.f_4 = 0;
	if (!_0x951327435dc5164b(&Var5, &Var0))
	{
		return "";
	}
	return func_83(Var5);
}

var func_83(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

struct<16> func_84(char* sParam0)
{
	StringCopy(&cVar0, sParam0, 128);
	return cVar0;
}

bool func_85(var uParam0, var uParam1, char* sParam2)
{
	if (!_databinding_is_data_id_valid(*uParam0))
	{
		return false;
	}
	StringCopy(&cVar0, "", 128);
	iVar16 = *uParam1;
	iVar17 = 0;
	while (iVar17 < iVar16)
	{
		StringCopy(&cVar0, sParam2, 128);
		StringIntConCat(&cVar0, iVar17 + 1, 128);
		(*uParam1)[iVar17] = _databinding_add_data_string(*uParam0, &cVar0, "");
		iVar17++;
	}
	return true;
}

void func_86(var uParam0, var uParam1)
{
	func_112(uParam0, uParam1);
	if (func_46(uParam0, 4))
	{
		return;
	}
	switch (uParam1->f_2)
	{
		case 1143084795:
		case 2097921812:
			if (!func_113(uParam0, &(uParam1->f_3), uParam1->f_1))
			{
			}
			func_114(&(uParam0->f_6.f_383), 1);
			break;
		case -1479343923:
		case 684358904:
			if (!func_115(uParam0, &(uParam1->f_3), uParam1->f_1))
			{
			}
			func_114(&(uParam0->f_6.f_383), 1);
			break;
		case -1964195787:
		case 406185559:
			if (!func_116(uParam0, &(uParam1->f_3), uParam1->f_1))
			{
			}
			func_114(&(uParam0->f_6.f_383), 1);
			func_117(uParam0, 0);
			break;
		case 148626529:
		case 389841892:
			if (!func_118(uParam0, &(uParam1->f_3), uParam1->f_1))
			{
			}
			func_114(&(uParam0->f_6.f_383), 1);
			func_117(uParam0, 0);
			break;
	}
}

void func_87(var uParam0, var uParam1)
{
	switch (uParam1->f_2)
	{
		case -1817877904:
			func_119(uParam0);
			break;
		case 148626529:
		case 406185559:
		case 684358904:
		case 1143084795:
			if (!func_120(uParam0, &(uParam1->f_3)))
			{
			}
			break;
		case 251386954:
			func_121(uParam0);
			break;
		case 1306840844:
			func_122(uParam0);
			break;
		case -739645416:
			func_123(uParam0);
			break;
		case 2127956707:
			if (func_124(uParam0))
			{
				func_30(&(uParam0->f_478), 493327992, 0);
				func_47(uParam0, 5, 1);
			}
			break;
	}
}

void func_88(var uParam0, var uParam1)
{
	switch (uParam1->f_2)
	{
		case 294480590:
			func_96(&(uParam0->f_6.f_19));
			func_117(uParam0, 0);
			func_47(uParam0, 4, 1);
			func_97(uParam0);
			break;
	}
}

int func_89(var uParam0)
{
	if (!_databinding_is_data_id_valid(uParam0->f_6.f_3))
	{
		return 0;
	}
	return _databinding_get_array_count(uParam0->f_6.f_3);
}

int func_90(var uParam0)
{
	if (!_databinding_is_data_id_valid(uParam0->f_6.f_4))
	{
		return 0;
	}
	return _databinding_get_array_count(uParam0->f_6.f_4);
}

bool func_91(var uParam0, int iParam1, var uParam2)
{
	if (!_databinding_is_data_id_valid(uParam0->f_6.f_3))
	{
		return false;
	}
	*uParam2 = _databinding_get_item_context_by_index(uParam0->f_6.f_3, iParam1);
	if (!_databinding_is_data_id_valid(*uParam2))
	{
		return false;
	}
	return true;
}

bool func_92(var uParam0, int iParam1, var uParam2)
{
	iVar0 = _databinding_get_array_count(uParam0->f_6.f_4);
	if (iParam1 < 0 || iParam1 >= iVar0)
	{
		return false;
	}
	*uParam2 = _databinding_get_item_context_by_index(uParam0->f_6.f_4, iParam1);
	return true;
}

void func_93(var uParam0)
{
}

void func_94(var uParam0)
{
	func_127(&(uParam0->f_6.f_19), func_126(func_125(0), 5, (func_79(0) / 5)));
	func_128(uParam0);
	func_75(1);
	func_117(uParam0, func_129(func_125(0), 5, func_79(0)));
	func_47(uParam0, 0, 1);
	func_47(uParam0, 1, 1);
	func_47(uParam0, 2, 1);
	if (!func_77(uParam0))
	{
		func_130(&(uParam0->f_478), 911005517);
	}
	func_131(uParam0, func_38(-214000043));
	func_132(&(uParam0->f_437), 3000);
}

void func_95(var uParam0)
{
	func_47(uParam0, 5, 0);
	func_133(uParam0, -1782645354);
	func_134(uParam0, 1143555955);
}

void func_96(var uParam0)
{
	if (!func_135(uParam0))
	{
		return;
	}
	uParam0->f_6 = 1;
}

void func_97(var uParam0)
{
	iVar0 = func_100(&(uParam0->f_6.f_19));
	if (func_136(&(uParam0->f_437)))
	{
		if (func_137(&(uParam0->f_416)))
		{
		}
		else
		{
			func_47(uParam0, 0, 1);
			func_47(uParam0, 1, 1);
			func_47(uParam0, 2, 1);
			func_47(uParam0, 3, 1);
		}
	}
	if (func_67(&(uParam0->f_416), &(uParam0->f_412)))
	{
		func_47(uParam0, 0, 1);
		func_47(uParam0, 1, 1);
		func_47(uParam0, 2, 1);
		func_47(uParam0, 3, 1);
	}
	if (func_99(&(uParam0->f_6.f_19)))
	{
		func_47(uParam0, 0, 1);
		func_47(uParam0, 1, 1);
		func_47(uParam0, 2, 1);
	}
	if (func_46(uParam0, 2))
	{
		func_138(uParam0, iVar0);
		func_139(uParam0, func_125(0));
		func_47(uParam0, 2, 0);
	}
	if (func_46(uParam0, 0))
	{
		func_140(uParam0, iVar0);
		func_47(uParam0, 0, 0);
	}
	if (func_46(uParam0, 1))
	{
		func_141(uParam0, iVar0);
		func_47(uParam0, 1, 0);
	}
	func_142(&(uParam0->f_6.f_367));
	func_143(uParam0);
}

void func_98(var uParam0)
{
	if (func_46(uParam0, 5))
	{
		if (func_137(&(uParam0->f_416)))
		{
		}
		else if (!func_144(&(uParam0->f_416), func_71()))
		{
			if (func_145())
			{
				func_146(1229863565);
			}
			func_47(uParam0, 5, 0);
		}
	}
}

bool func_99(var uParam0)
{
	return uParam0->f_6;
}

int func_100(var uParam0)
{
	if (!uParam0->f_5)
	{
		return -1;
	}
	return _databinding_read_data_int(uParam0->f_3);
}

int func_101(int iParam0)
{
	return shift_left(1, iParam0);
}

void func_102(var uParam0, int iParam1)
{
	func_147(&(uParam0->f_2), iParam1);
}

void func_103(var uParam0, var uParam1)
{
	if (!func_135(uParam0))
	{
		uParam0->f_6 = 0;
		return;
	}
	if (!func_99(uParam0))
	{
		return;
	}
	iVar0 = func_100(uParam0);
	if (!func_148(uParam0, iVar0))
	{
		uParam0->f_6 = 0;
		return;
	}
	func_149(uParam0, uParam1, iVar0);
	uParam0->f_6 = 0;
}

float func_104()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

int func_105(int iParam0)
{
	iVar0 = func_150(iParam0);
	if ((iVar0 == 0 || iVar0 == 1) || iVar0 == 5)
	{
		if (_cashinventory_transaction_checkout_status(iParam0, &iVar1))
		{
			if ((iVar1 == 4 || iVar1 == 2) || (iVar0 == 0 && iVar1 != 0))
			{
				func_151(iParam0, iVar1, 0, 0);
				iVar0 = iVar1;
			}
		}
		else if (iVar0 == 1 || iVar0 == 5)
		{
			func_151(iParam0, 4, 0, 0);
		}
	}
	return iVar0;
}

int func_106(int iParam0)
{
	Var0 = func_81();
	Var0.f_2 = 23;
	Var0.f_3 = func_74(0);
	Var0.f_4 = iParam0;
	if (!_datafile_get_hash(&uVar5, &Var0))
	{
		return func_152(iParam0);
	}
	return uVar5;
}

struct<32> func_107(int iParam0)
{
	Var32 = func_81();
	Var32.f_3 = func_74(0);
	Var32.f_4 = iParam0;
	Var32.f_2 = 18;
	if (_0x951327435dc5164b(&Var0, &Var32))
	{
		Var32.f_2 = 19;
		if (!_0x951327435dc5164b(&(Var0.f_16), &Var32))
		{
			return Var0;
		}
	}
	else
	{
		return func_153(iParam0);
	}
	return Var0;
}

bool func_108(int* iParam0, char* sParam1, char* sParam2)
{
	if (!func_66(*iParam0, 0))
	{
		return false;
	}
	if (func_66(*iParam0, 1))
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
	func_45(iParam0, 1);
	StringCopy(&(iParam0->f_1), sParam2, 128);
	StringCopy(&(iParam0->f_17), sParam1, 128);
	_0x0f2a2175734926d8(&(iParam0->f_17), &(iParam0->f_1));
	return true;
}

var func_109(int iParam0)
{
	Var0 = func_81();
	Var0.f_3 = func_74(0);
	Var0.f_4 = iParam0;
	Var0.f_2 = 21;
	if (!_0x951327435dc5164b(&Var5, &Var0))
	{
		return func_154(iParam0);
	}
	return func_83(Var5);
}

void func_110(var uParam0)
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

int func_111(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return -1990194462;
		default:
			break;
	}
	return 0;
}

void func_112(var uParam0, var uParam1)
{
	_copy_memory(&(uParam0->f_441), uParam1, 4);
}

bool func_113(var uParam0, var uParam1, int iParam2)
{
	if (!_databinding_is_data_id_valid(*uParam1))
	{
		return false;
	}
	func_155(uParam0, uParam1, iParam2);
	func_156(uParam0, uParam1, 0);
	return true;
}

int func_114(var uParam0, bool bParam1)
{
	if (!*uParam0)
	{
		return 0;
	}
	_databinding_write_data_bool(uParam0->f_3, bParam1);
	return 1;
}

bool func_115(var uParam0, var uParam1, int iParam2)
{
	if (!_databinding_is_data_id_valid(*uParam1))
	{
		return false;
	}
	func_155(uParam0, uParam1, iParam2);
	func_157(uParam0, uParam1, 0);
	return true;
}

bool func_116(var uParam0, var uParam1, int iParam2)
{
	if (!_databinding_is_data_id_valid(*uParam1))
	{
		return false;
	}
	func_155(uParam0, uParam1, iParam2);
	func_156(uParam0, uParam1, 1);
	return true;
}

int func_117(var uParam0, int iParam1)
{
	if (!_databinding_is_data_id_valid(uParam0->f_6.f_5))
	{
		return 0;
	}
	_databinding_write_data_int(uParam0->f_6.f_5, iParam1);
	return 1;
}

bool func_118(var uParam0, var uParam1, int iParam2)
{
	if (!_databinding_is_data_id_valid(*uParam1))
	{
		return false;
	}
	func_155(uParam0, uParam1, iParam2);
	func_157(uParam0, uParam1, 1);
	return true;
}

void func_119(var uParam0)
{
	func_158(uParam0, 0);
	switch (func_159(uParam0))
	{
		case 1:
			func_30(&(uParam0->f_478), -2045328839, 0);
			break;
		case 2:
			func_30(&(uParam0->f_478), -85725161, 0);
			break;
		case 0:
			func_30(&(uParam0->f_478), 493327992, 0);
			break;
	}
}

bool func_120(var uParam0, var uParam1)
{
	iVar0 = func_160(uParam1);
	iVar1 = func_125(0);
	iVar2 = (iVar0 - iVar1);
	if (!func_145())
	{
		return false;
	}
	if (func_137(&(uParam0->f_416)))
	{
		return false;
	}
	iVar3 = 0;
	iVar4 = 0;
	while (iVar4 < 5)
	{
		if (!func_59(uParam0->f_416.f_2[iVar4]))
		{
		}
		else
		{
			switch (func_61(uParam0->f_416.f_2[iVar4]))
			{
				case 0:
				case 2:
				case 4:
					break;
				case 3:
					break;
				default:
					iVar3++;
					Jump @172; //curOff = 146
					if (func_62(&(uParam0->f_412)) < 1f)
					{
						iVar3++;
					}
				}
				iVar4++;
			}
			if (iVar3 > 0)
			{
				return false;
			}
			if (iVar0 < iVar1)
			{
				return false;
			}
			if (iVar2 < 0)
			{
				return false;
			}
			if (!func_161(&iVar5, iVar2))
			{
				return false;
			}
			if (!func_162(&(uParam0->f_416), iVar5, func_69(), 0))
			{
				return false;
			}
			return true;
		}

void func_121(var uParam0)
{
	func_163(uParam0, 0);
	if (func_164())
	{
		func_165(uParam0, 2135775226);
	}
	else
	{
		func_165(uParam0, 1223883840);
	}
	func_166(uParam0, 223053801);
	func_167(uParam0, -415517284);
	func_168(&uVar0);
	func_169(uParam0, &uVar0);
	func_170(uParam0, 1);
	func_30(&(uParam0->f_478), 911005517, 0);
	func_130(&(uParam0->f_478), 493327992);
	func_158(uParam0, 1);
}

void func_122(var uParam0)
{
	func_163(uParam0, 1);
	if (func_164())
	{
		func_165(uParam0, 2043303846);
	}
	else
	{
		func_165(uParam0, -1908058648);
	}
	func_166(uParam0, -1669050840);
	func_167(uParam0, -334600982);
	func_70(uParam0, -1830565372);
	func_170(uParam0, 0);
	func_30(&(uParam0->f_478), 911005517, 0);
	func_130(&(uParam0->f_478), -2045328839);
	func_158(uParam0, 1);
}

void func_123(var uParam0)
{
	func_163(uParam0, 2);
	if (func_164())
	{
		func_165(uParam0, -1471254561);
	}
	else
	{
		func_165(uParam0, 715508741);
	}
	func_166(uParam0, 57667704);
	func_167(uParam0, -31949707);
	func_170(uParam0, 0);
	func_30(&(uParam0->f_478), 911005517, 0);
	func_130(&(uParam0->f_478), -85725161);
	func_158(uParam0, 1);
}

bool func_124(var uParam0)
{
	if (!func_171())
	{
		func_146(1558798252);
		return false;
	}
	if (!func_172(uParam0, &iVar0))
	{
		return false;
	}
	if (!func_162(&(uParam0->f_416), iVar0, func_71(), 0))
	{
		return false;
	}
	return true;
}

int func_125(int iParam0)
{
	return func_174(func_173(iParam0));
}

int func_126(int iParam0, int iParam1, int iParam2)
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

int func_127(var uParam0, int iParam1)
{
	if (!func_135(uParam0))
	{
		return 0;
	}
	if (!func_148(uParam0, iParam1))
	{
		return 0;
	}
	_databinding_write_data_int(uParam0->f_3, iParam1);
	return 1;
}

void func_128(var uParam0)
{
	func_175(&uVar0, 0, 0);
	iVar52 = 0;
	while (iVar52 < 10)
	{
		func_175(&uVar0, iVar52, 0);
		if (!func_176(uParam0, &uVar0, iVar52))
		{
		}
		iVar52++;
	}
}

int func_129(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == iParam2)
	{
		return (iParam1 - 1);
	}
	return (iParam0 % iParam1);
}

void func_130(var uParam0, int iParam1)
{
	if (*uParam0 != 0 && *uParam0 != iParam1)
	{
		func_30(uParam0, *uParam0, 0);
	}
	func_78(uParam0);
	*uParam0 = iParam1;
	uParam0->f_1 = Global_1296859->f_21;
}

void func_131(var uParam0, char* sParam1)
{
	_databinding_write_data_hash_string(uParam0->f_6.f_2, get_hash_key(sParam1));
}

void func_132(var uParam0, int iParam1)
{
	uParam0->f_3 = iParam1;
}

void func_133(var uParam0, int iParam1)
{
	Var0 = { func_177(iParam1) };
	func_178(uParam0, Var0, Var0.f_1);
}

void func_134(var uParam0, int iParam1)
{
	Var0 = { func_177(iParam1) };
	func_179(uParam0, Var0, Var0.f_1);
}

bool func_135(var uParam0)
{
	return uParam0->f_5;
}

bool func_136(var uParam0)
{
	if (uParam0->f_3 <= 0)
	{
		if (func_180(uParam0))
		{
			func_181(uParam0);
		}
		return false;
	}
	if (!func_180(uParam0))
	{
		func_182(uParam0, 1);
		return true;
	}
	if (!func_183(uParam0) >= uParam0->f_3)
	{
		return false;
	}
	func_184(uParam0);
	return true;
}

bool func_137(var uParam0)
{
	return uParam0->f_1;
}

void func_138(var uParam0, int iParam1)
{
	func_37(iParam1, &iVar0, &uVar1);
	iVar0 = (iVar0 - 1);
	if (!func_185(&(uParam0->f_6.f_6), iVar0, func_125(0)))
	{
	}
}

void func_139(var uParam0, char* sParam1)
{
	StringCopy(&cVar0, func_38(-518976648), 128);
	StringCopy(&cVar16, _create_var_string(2, func_38(-839182048)), 128);
	_databinding_write_data_string(uParam0->f_6.f_1, _create_var_string(10, &cVar0, &cVar16, sParam1));
}

int func_140(var uParam0, int iParam1)
{
	func_37(iParam1, &iVar0, &uVar1);
	iVar3 = 0;
	while (iVar3 < 5)
	{
		iVar2 = (iVar0 + iVar3);
		if (!func_187(uParam0, iVar3, iVar2, func_186(0, iVar2)))
		{
		}
		iVar3++;
	}
	return 1;
}

int func_141(var uParam0, int iParam1)
{
	func_37(iParam1, &uVar0, &iVar1);
	iVar3 = uVar0;
	while (iVar3 <= iVar1)
	{
		if (!func_188(uParam0, iVar2, iVar3, func_186(0, iVar3)))
		{
		}
		else
		{
			iVar2++;
		}
		iVar3++;
	}
	return 1;
}

void func_142(var uParam0)
{
	switch (func_189(uParam0))
	{
		case 0:
			break;
		case 1:
			if (!func_190(uParam0))
			{
				return;
			}
			func_191(uParam0, 2);
		case 2:
			iVar0 = _databinding_read_data_int(uParam0->f_12);
			fVar1 = ((to_float(iVar0) * uParam0->f_8) / 100f);
			fVar1 = (fVar1 - get_frame_time());
			fVar1 = func_192(fVar1, 0f, uParam0->f_8);
			iVar2 = ceil(((fVar1 / uParam0->f_8) * 100f));
			_databinding_write_data_int(uParam0->f_12, iVar2);
			if (iVar2 > 0)
			{
				return;
			}
			func_191(uParam0, 3);
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
			func_191(uParam0, 4);
		case 4:
			if (func_190(uParam0))
			{
				func_191(uParam0, 2);
				return;
			}
			if (func_193(uParam0))
			{
				func_194(uParam0);
			}
			else
			{
				uParam0->f_14 = (uParam0->f_14 + get_frame_time());
				if (uParam0->f_14 < uParam0->f_13)
				{
					return;
				}
			}
			func_191(uParam0, 5);
		case 5:
			if (func_190(uParam0))
			{
				func_191(uParam0, 2);
				return;
			}
			if (uParam0->f_7 != uParam0->f_3)
			{
				_set_streamed_txd_as_no_longer_needed(uParam0->f_7);
				func_191(uParam0, 1);
				return;
			}
			if (!_does_streamed_txd_exist(uParam0->f_7))
			{
				func_191(uParam0, 1);
				return;
			}
			_request_streamed_txd(uParam0->f_7, true);
			if (!_has_streamed_txd_loaded(uParam0->f_7))
			{
				return;
			}
			func_191(uParam0, 6);
		case 6:
			if (func_190(uParam0))
			{
				func_191(uParam0, 2);
				return;
			}
			_databinding_write_data_hash_string(uParam0->f_10, uParam0->f_6);
			_databinding_write_data_hash_string(uParam0->f_11, uParam0->f_7);
			func_191(uParam0, 7);
		case 7:
			if (func_190(uParam0))
			{
				func_191(uParam0, 2);
				return;
			}
			iVar3 = _databinding_read_data_int(uParam0->f_12);
			fVar4 = ((to_float(iVar3) * uParam0->f_9) / 100f);
			fVar4 = (fVar4 + get_frame_time());
			fVar4 = func_192(fVar4, 0f, uParam0->f_9);
			iVar5 = ceil(((fVar4 * 100f) / uParam0->f_9));
			iVar5 = func_195(iVar5, 0, 100);
			_databinding_write_data_int(uParam0->f_12, iVar5);
			if (iVar5 >= 100)
			{
				func_191(uParam0, 1);
			}
			break;
	}
}

void func_143(var uParam0)
{
	bVar0 = func_145();
	if (func_196(uParam0) != bVar0)
	{
		func_197(uParam0, bVar0);
	}
}

bool func_144(var uParam0, int iParam1)
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

bool func_145()
{
	iVar0 = func_71();
	if (!func_198(iVar0))
	{
		return false;
	}
	if (!_0xfbe782b3165ac8ec(iVar0))
	{
		return false;
	}
	return true;
}

void func_146(int iParam0)
{
	if (!_request_uiapp_transition_by_hash(-1558366648, iParam0))
	{
	}
}

void func_147(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_148(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_4)
	{
		return false;
	}
	return true;
}

void func_149(var uParam0, var uParam1, int iParam2)
{
	func_200(uParam0, func_199(uParam1, iParam2));
	func_201(uParam1, iParam2);
}

int func_150(int iParam0)
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

void func_151(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_202(iParam0, iParam1, iParam2, iParam3);
}

int func_152(int iParam0)
{
	Var0 = func_81();
	Var0.f_2 = 22;
	Var0.f_3 = iParam0;
	if (!_datafile_get_hash(&uVar5, &Var0))
	{
		return 0;
	}
	return uVar5;
}

struct<32> func_153(int iParam0)
{
	Var32 = func_81();
	Var32.f_3 = iParam0;
	Var32.f_2 = 16;
	if (!_0x951327435dc5164b(&Var0, &Var32))
	{
		return Var0;
	}
	Var32.f_3 = iParam0;
	Var32.f_2 = 17;
	if (!_0x951327435dc5164b(&(Var0.f_16), &Var32))
	{
		return Var0;
	}
	return Var0;
}

var func_154(int iParam0)
{
	Var0 = func_81();
	Var0.f_3 = iParam0;
	Var0.f_2 = 20;
	if (!_0x951327435dc5164b(&Var5, &Var0))
	{
		return "";
	}
	return func_83(Var5);
}

void func_155(var uParam0, var uParam1, int iParam2)
{
	if (!_databinding_is_data_id_valid(*uParam1))
	{
		return;
	}
	func_203(uParam0, uParam1);
	iVar0 = func_160(uParam1);
	func_204(uParam0, iVar0);
	iVar1 = _databinding_read_data_hash_string_from_parent_by_hash(*uParam1, -3675574);
	iVar2 = _databinding_read_data_hash_string_from_parent_by_hash(*uParam1, -536627617);
	iVar3 = _databinding_read_data_hash_string_from_parent_by_hash(*uParam1, 148336560);
	switch (iVar3)
	{
		case -1479343923:
		case 2097921812:
			iVar4 = 1;
			break;
		case -1964195787:
		case 389841892:
			iVar4 = 2;
			break;
	}
	if (iVar1 != 0 && iVar2 != 0)
	{
		func_206(&(uParam0->f_6.f_367), iVar1, iVar2, func_205(iVar4, func_100(&(uParam0->f_6.f_19)), iParam2), 0);
	}
	else
	{
		func_110(&(uParam0->f_6.f_367));
	}
}

void func_156(var uParam0, var uParam1, bool bParam2)
{
	iVar0 = func_160(uParam1);
	if (func_207() == 1)
	{
		func_209(uParam0, func_208(-51173122));
		return;
	}
	else if (bParam2 && !func_145())
	{
		func_209(uParam0, func_208(-989353723));
		return;
	}
	else if (!func_186(0, iVar0))
	{
		func_209(uParam0, func_208(-367921118));
		return;
	}
	else
	{
		iVar1 = func_210(uParam1);
		if (iVar1 != 0)
		{
			func_211(uParam0, func_210(uParam1));
			return;
		}
	}
	func_212(uParam0);
}

void func_157(var uParam0, var uParam1, int iParam2)
{
	iVar0 = func_160(uParam1);
	if (func_207() == 1)
	{
		func_209(uParam0, func_208(-51173122));
		return;
	}
	else if (!func_186(0, iVar0))
	{
		func_209(uParam0, func_208(-367921118));
		return;
	}
	func_212(uParam0);
}

void func_158(var uParam0, int iParam1)
{
	uParam0->f_6.f_392.f_13 = iParam1;
}

int func_159(var uParam0)
{
	return _databinding_read_data_int(uParam0->f_6.f_392);
}

int func_160(var uParam0)
{
	return _databinding_read_data_int_from_parent_by_hash(*uParam0, -518474626);
}

bool func_161(var uParam0, int iParam1)
{
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_69();
	if (!func_198(iVar0))
	{
		return false;
	}
	if (!func_213(iVar0))
	{
		return false;
	}
	if (func_214(iVar0))
	{
		return false;
	}
	Var1 = -1;
	Var1.f_1 = -1;
	if (!func_215(&Var1, iVar0, iParam1, 1, 0, 0, 0, -1, 0))
	{
		return false;
	}
	*uParam0 = Var1;
	func_216(*uParam0);
	if (!func_217(&Var1))
	{
		return false;
	}
	return true;
}

bool func_162(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam1 == -1)
	{
		return false;
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
	return true;
}

void func_163(var uParam0, int iParam1)
{
	_databinding_write_data_int(uParam0->f_6.f_392, iParam1);
}

bool func_164()
{
	if (!network_does_tunable_exist(-475019843, func_218(1883253251)))
	{
		return false;
	}
	return network_access_tunable_bool(-475019843, func_218(1883253251));
}

int func_165(var uParam0, int iParam1)
{
	return func_219(uParam0, func_38(iParam1));
}

void func_166(var uParam0, int iParam1)
{
	Var0 = { func_177(iParam1) };
	func_220(uParam0, Var0, Var0.f_1);
}

void func_167(var uParam0, int iParam1)
{
	func_222(uParam0, func_221(iParam1));
}

void func_168(char* sParam0)
{
	iVar0 = func_71();
	iVar1 = 0;
	if (func_223(iVar0, &iVar3))
	{
		sVar2 = func_38(-1825043380);
		iVar1 = 0;
	}
	else if (func_224(iVar0, &iVar3))
	{
		sVar2 = func_38(-812112613);
		iVar1 = func_226(func_225(iVar0, iVar3, 0, 1));
	}
	else
	{
		sVar2 = func_38(-1201740419);
		iVar1 = func_226(func_227());
	}
	StringCopy(sParam0, _create_var_string(2, sVar2, iVar1), 128);
}

void func_169(var uParam0, char* sParam1)
{
	_databinding_write_data_string(uParam0->f_6.f_392.f_4, sParam1);
}

void func_170(var uParam0, bool bParam1)
{
	_databinding_write_data_bool(uParam0->f_6.f_392.f_5, bParam1);
}

bool func_171()
{
	iVar0 = func_71();
	if (!func_213(iVar0))
	{
		return false;
	}
	if (func_223(iVar0, &iVar1))
	{
		return true;
	}
	else if (func_224(iVar0, &iVar1) && func_228(iVar0, iVar1, &uVar2, 1, 0))
	{
		return true;
	}
	else
	{
		return func_228(iVar0, func_229(iVar0, 0, 0, -1, 1), &uVar2, 1, 0);
	}
	return false;
}

bool func_172(var uParam0, var uParam1)
{
	iVar0 = func_71();
	if (!func_198(iVar0))
	{
		return false;
	}
	if (_0xfbe782b3165ac8ec(iVar0))
	{
		return false;
	}
	if (!func_213(iVar0))
	{
		return false;
	}
	if (func_214(iVar0))
	{
		return false;
	}
	Var1.f_9 = 1;
	Var1.f_11 = -1591664384;
	Var18 = -1;
	Var18.f_1 = -1;
	iVar28 = func_229(iVar0, 0, 0, -1, 1);
	iVar29 = func_230(iVar0, iVar28, 0);
	uParam0->f_481.f_1 = func_231(iVar29);
	uParam0->f_481.f_2 = func_232(iVar29);
	if (!func_233(&Var18, iVar0, &Var1, 0, iVar28, -1, 0))
	{
		return false;
	}
	*uParam1 = Var18;
	func_216(*uParam1);
	if (!func_217(&Var18))
	{
		return false;
	}
	if (iVar28 != 0)
	{
		uParam0->f_481 = iVar29;
	}
	return true;
}

int func_173(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_234(Global_1293346->f_2982);
		case 1:
			return func_234(Global_1293346->f_2983);
		default:
			break;
	}
	return -1;
}

int func_174(int iParam0)
{
	if (!func_235(iParam0))
	{
		return 0;
	}
	iVar0 = func_236(iParam0);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	else
	{
		return func_237(iParam0, 1);
	}
	return 0;
}

int func_175(var uParam0, int iParam1, int iParam2)
{
	func_238(uParam0, iParam1);
	uParam0->f_1 = 389841892;
	if (func_145())
	{
		func_239(uParam0, iParam1, 1, 1);
	}
	else
	{
		func_240(uParam0);
	}
	return 1;
}

bool func_176(var uParam0, char[4] cParam1, int iParam2)
{
	iVar9 = func_90(uParam0);
	if (iParam2 >= iVar9)
	{
		MemCopy(&cVar1, {cLocal_35}, 8);
		StringIntConCat(&cVar1, iParam2, 64);
		uVar10 = 23;
		if (!func_241(&uVar10, uParam0->f_6.f_4, cVar1, cParam1))
		{
			return false;
		}
		if (!func_242(uParam0, &uVar10, -1083672022))
		{
			return false;
		}
	}
	else if (func_92(uParam0, iParam2, &uVar0))
	{
		if (!func_243(uVar0, cParam1))
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

struct<2> func_177(int iParam0)
{
	Var2 = func_81();
	Var2.f_3 = func_74(0);
	Var2.f_4 = iParam0;
	Var2.f_2 = 11;
	if (!_datafile_get_hash(&Var0, &Var2))
	{
		return func_244(iParam0);
	}
	Var2.f_2 = 13;
	if (!_datafile_get_hash(&(Var0.f_1), &Var2))
	{
		return Var0;
	}
	return Var0;
}

void func_178(var uParam0, int iParam1, int iParam2)
{
	_databinding_write_data_hash_string(uParam0->f_6.f_392.f_6, iParam1);
	_databinding_write_data_hash_string(uParam0->f_6.f_392.f_7, iParam2);
}

void func_179(var uParam0, int iParam1, int iParam2)
{
	_databinding_write_data_hash_string(uParam0->f_6.f_392.f_10, iParam1);
	_databinding_write_data_hash_string(uParam0->f_6.f_392.f_11, iParam2);
}

bool func_180(var uParam0)
{
	return func_245(*uParam0, 1);
}

void func_181(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_182(var uParam0, bool bParam1)
{
	if (bParam1 || !func_180(uParam0))
	{
		func_184(uParam0);
	}
}

int func_183(var uParam0)
{
	if (!func_180(uParam0))
	{
		return 0;
	}
	if (func_246(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_247() - round((uParam0->f_1 * 1000f)));
}

void func_184(var uParam0)
{
	func_248(uParam0, 0f);
}

bool func_185(var uParam0, int iParam1, int iParam2)
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

bool func_186(int iParam0, int iParam1)
{
	return func_125(iParam0) >= iParam1;
}

bool func_187(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	func_249(&uVar0, iParam2, bParam3);
	iVar53 = func_250(0, iParam2);
	iVar54 = 0;
	while (iVar54 < iVar53)
	{
		iVar52 = func_251(0, iParam2, iVar54);
		if (!func_252(&uVar0, iParam2, bParam3, iVar52))
		{
		}
	else
	{
		}
		else
		{
			iVar54++;
		}
	}
	if (!func_253(uParam0, &uVar0, iParam1))
	{
	}
	return true;
}

bool func_188(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	iVar54 = func_250(1, iParam2);
	bVar56 = false;
	iVar57 = 0;
	while (iVar57 < 2)
	{
		bVar56 = false;
		func_254(&uVar1);
		func_175(&uVar1, iParam2, bParam3);
		if (iVar54 > 0)
		{
			while (!bVar56)
			{
				if (iVar55 >= iVar54)
				{
					bVar56 = true;
				}
				else
				{
					iVar53 = func_251(1, iParam2, iVar55);
					iVar55++;
					if (!func_255(&uVar1, iParam2, bParam3, iVar53))
					{
					}
					else
					{
						bVar56 = true;
					}
				}
			}
		}
		if (!func_256(5, 2, iParam1, iVar57, &iVar0))
		{
			return false;
		}
		if (!func_176(uParam0, &uVar1, iVar0))
		{
			return false;
		}
		iVar57++;
	}
	return true;
}

int func_189(var uParam0)
{
	return *uParam0;
}

bool func_190(var uParam0)
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

void func_191(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

float func_192(float fParam0, float fParam1, float fParam2)
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

bool func_193(var uParam0)
{
	return uParam0->f_15;
}

void func_194(var uParam0)
{
	uParam0->f_15 = 0;
}

int func_195(int iParam0, int iParam1, int iParam2)
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

int func_196(var uParam0)
{
	return _databinding_read_data_bool(uParam0->f_3.f_1);
}

void func_197(var uParam0, bool bParam1)
{
	_databinding_write_data_bool(uParam0->f_3.f_1, bParam1);
}

bool func_198(int iParam0)
{
	return iParam0 != 0;
}

char* func_199(var uParam0, int iParam1)
{
	return func_83(*(*uParam0)[iParam1]);
}

void func_200(var uParam0, char* sParam1)
{
	_databinding_write_data_string(uParam0->f_2, sParam1);
}

void func_201(var uParam0, int iParam1)
{
	(*uParam0)[iParam1]->f_16 = 1;
}

void func_202(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_257(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)]);
	Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)] = iParam0;
	(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_2 = iParam2;
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_3 = iParam3;
	}
}

int func_203(var uParam0, var uParam1)
{
	if (!_databinding_is_data_id_valid(*uParam1))
	{
		return 0;
	}
	_databinding_write_data_hash_string(uParam0->f_6.f_387, _databinding_read_data_hash_string_from_parent_by_hash(*uParam1, -840685091));
	_databinding_write_data_hash_string(uParam0->f_6.f_388, _databinding_read_data_hash_string_from_parent_by_hash(*uParam1, -691977066));
	_databinding_write_data_string(uParam0->f_6.f_389, _0x6329c34bee5bff4b(*uParam1, 1212273021));
	_databinding_write_data_bool(uParam0->f_6.f_390, _databinding_read_data_bool_from_parent_by_hash(*uParam1, -94662335));
	_databinding_write_data_hash_string(uParam0->f_6.f_391, _databinding_read_data_hash_string_from_parent_by_hash(*uParam1, 2103186173));
	return 1;
}

int func_204(var uParam0, int iParam1)
{
	iVar0 = func_125(0);
	if (iParam1 <= iVar0)
	{
		return func_258(uParam0, iParam1);
	}
	else if (iParam1 == iVar0 + 1)
	{
		func_259(iParam1, &sVar1, &sVar2);
		return func_260(uParam0, iParam1, sVar1, sVar2);
	}
	else
	{
		return func_261(uParam0, iParam1);
	}
	return 0;
}

int func_205(int iParam0, int iParam1, int iParam2)
{
	StringCopy(&cVar0, func_262(iParam0), 128);
	StringConCat(&cVar0, func_262(iParam1), 128);
	StringConCat(&cVar0, func_262(iParam2), 128);
	if (!string_to_int(&cVar0, &uVar16))
	{
		return -1;
	}
	return uVar16;
}

void func_206(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	uParam0->f_1 = iParam3;
	uParam0->f_2 = iParam1;
	uParam0->f_3 = iParam2;
	uParam0->f_4 = iParam4;
	uParam0->f_4 = 0;
}

int func_207()
{
	if (network_does_tunable_exist(-475019843, func_218(1656173034)) && network_access_tunable_bool(-475019843, func_218(1656173034)))
	{
		return 0;
	}
	else if (network_does_tunable_exist(-475019843, func_218(-537144215)) && network_access_tunable_bool(-475019843, func_218(-537144215)))
	{
		return 2;
	}
	else if (network_does_tunable_exist(-475019843, func_218(1629055295)) && network_access_tunable_bool(-475019843, func_218(1629055295)))
	{
		return 1;
	}
	else if (network_does_tunable_exist(-475019843, func_218(965428371)) && network_access_tunable_bool(-475019843, func_218(965428371)))
	{
		return 3;
	}
	return 1;
}

char* func_208(int iParam0)
{
	return _create_var_string(2, func_38(iParam0));
}

int func_209(var uParam0, char* sParam1)
{
	if (!_databinding_is_data_id_valid(uParam0->f_3.f_2))
	{
		return 0;
	}
	_databinding_write_data_string(uParam0->f_3.f_2, sParam1);
	return 1;
}

int func_210(var uParam0)
{
	return _databinding_read_data_hash_string_from_parent_by_hash(*uParam0, 661124052);
}

int func_211(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (!_databinding_is_data_id_valid(uParam0->f_3.f_2))
	{
		return 0;
	}
	_databinding_write_data_string(uParam0->f_3.f_2, _get_label_text_by_hash(iParam1));
	return 1;
}

int func_212(var uParam0)
{
	if (!_databinding_is_data_id_valid(uParam0->f_3.f_2))
	{
		return 0;
	}
	_databinding_write_data_string(uParam0->f_3.f_2, "");
	return 1;
}

bool func_213(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_buy_award_key_valid(iParam0);
}

bool func_214(int iParam0)
{
	if (!func_198(iParam0))
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

bool func_215(int* iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_9 = iParam2;
	Var0.f_10 = iParam3;
	Var0.f_14 = iParam5;
	if (!func_233(iParam0, iParam1, &Var0, iParam4, iParam6, iParam7, bParam8))
	{
		return false;
	}
	func_263(Var0);
	return true;
}

void func_216(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	_0xca9e42f437625a85(iParam0, -1558366648, -1558366648);
}

bool func_217(int* iParam0)
{
	if (!_cashinventory_transaction_get_basket_is_valid(*iParam0))
	{
		func_151(*iParam0, 0, 0, 0);
		return true;
	}
	if (_cashinventory_transaction_get_num_of_items(*iParam0) == 0)
	{
		_cashinventory_transaction_delete(*iParam0);
		func_151(*iParam0, 4, 0, 0);
		return true;
	}
	if (!_cashinventory_transaction_checkout(*iParam0))
	{
		func_151(*iParam0, 2, 0, 0);
		return false;
	}
	func_151(*iParam0, 1, 0, 0);
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

int func_218(int iParam0)
{
	Var0 = func_81();
	Var0.f_2 = 15;
	Var0.f_3 = func_74(0);
	Var0.f_4 = iParam0;
	if (!_datafile_get_hash(&uVar5, &Var0))
	{
		return func_264(iParam0);
	}
	return uVar5;
}

int func_219(var uParam0, char* sParam1)
{
	iVar0 = uParam0->f_6.f_392.f_1;
	iVar17 = 0;
	while (iVar17 < iVar0)
	{
		StringCopy(&cVar1, sParam1, 128);
		StringIntConCat(&cVar1, iVar17 + 1, 128);
		if (!does_text_label_exist(&cVar1))
		{
			func_265(&(uParam0->f_6.f_392.f_1), "", iVar17);
		}
		else
		{
			if (!_databinding_is_data_id_valid(&(uParam0->f_6.f_392.f_1[iVar17])))
			{
				return 0;
			}
			if (!func_265(&(uParam0->f_6.f_392.f_1), func_266(&cVar1), iVar17))
			{
				return 0;
			}
		}
		iVar17++;
	}
	return 1;
}

void func_220(var uParam0, int iParam1, int iParam2)
{
	_databinding_write_data_hash_string(uParam0->f_6.f_392.f_8, iParam1);
	_databinding_write_data_hash_string(uParam0->f_6.f_392.f_9, iParam2);
}

int func_221(int iParam0)
{
	return get_hash_key(func_38(iParam0));
}

void func_222(var uParam0, int iParam1)
{
	_databinding_write_data_hash_string(uParam0->f_6.f_392.f_12, iParam1);
}

bool func_223(int iParam0, int iParam1)
{
	*iParam1 = func_267(iParam0, 1);
	return *iParam1 != 0;
}

bool func_224(int iParam0, int iParam1)
{
	*iParam1 = func_268(iParam0, 1, 0);
	return *iParam1 != 0;
}

int func_225(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_269(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

int func_226(int iParam0)
{
	return (iParam0 / 100);
}

int func_227()
{
	iVar0 = func_71();
	if (!func_198(iVar0))
	{
		return 0;
	}
	iVar1 = func_229(iVar0, 0, 0, -1, 1);
	if (iVar1 == 0)
	{
		return 0;
	}
	return func_225(iVar0, iVar1, 1, 1);
}

bool func_228(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (!func_269(iParam0, iParam1, &Var0, &iVar31, 0, 1))
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
				if (!bParam4 && !func_270(Var0[iVar32]->f_1))
				{
					return false;
				}
			}
			else if (&Var0[iVar32] == 773203532)
			{
				if (!bParam4 && !func_271(Var0[iVar32]->f_1))
				{
					return false;
				}
			}
			else
			{
				iVar33 = func_272(iVar34, &(Var0[iVar32]));
				if (iVar33 != 0)
				{
					iVar35 = func_273(&(Var0[iVar32]), iVar33);
				}
				else
				{
					iVar35 = func_274(&(Var0[iVar32]), 0, bParam3, 1);
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

int func_229(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_213(iParam0))
	{
		return 0;
	}
	bVar1 = func_275(iParam3, 2);
	bVar2 = func_276(iParam0, -570078785, bVar1);
	bVar3 = func_276(iParam0, -915411861, bVar1);
	if (func_276(iParam0, 997808187, bVar1))
	{
		iParam1 = 997808187;
	}
	else if (bParam4 && (func_223(iParam0, &iVar0) || func_224(iParam0, &iVar0)))
	{
		iParam1 = iVar0;
	}
	else if (bVar2 && !bVar3)
	{
		iParam1 = -570078785;
	}
	else if (bVar2 && bVar3)
	{
		if (func_277())
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
	else if (func_278(15) && func_276(iParam0, 369710026, bVar1))
	{
		iParam1 = 369710026;
	}
	if (iParam1 == 0 && bParam2)
	{
		return -915411861;
	}
	return iParam1;
}

int func_230(int iParam0, int iParam1, bool bParam2)
{
	if (!func_269(iParam0, iParam1, &Var0, &iVar31, bParam2, 1))
	{
		if (!bParam2)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (func_279(&(Var0[iVar32])))
		{
			return &(Var0[iVar32]);
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

int func_231(int iParam0)
{
	if (!func_279(iParam0))
	{
		return 0;
	}
	if (func_280(iParam0))
	{
		return -1957466003;
	}
	if (func_281(iParam0, -1457263561))
	{
		return -84670860;
	}
	if (func_281(iParam0, -732976331))
	{
		return -700121520;
	}
	if (func_281(iParam0, 1495098826))
	{
		return 917298505;
	}
	if (func_281(iParam0, 2088554948))
	{
		return -1638586319;
	}
	return 176863985;
}

int func_232(int iParam0)
{
	iVar0 = -1;
	if (!func_279(iParam0))
	{
		return iVar0;
	}
	iVar0 = 74330131;
	Var1 = { func_282(iParam0, 0, 0) };
	Var6 = { func_283(iParam0, Var1, Var1.f_4, 0) };
	if (!func_284(&Var6))
	{
		return -1;
	}
	if (func_285(Var6))
	{
		iVar0 = 90473367;
	}
	return iVar0;
}

bool func_233(int* iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!func_286(iParam0, 0))
	{
		return false;
	}
	if (iParam4 == 0)
	{
		iParam4 = func_229(iParam1, 0, 1, iParam5, bParam6);
	}
	if (!func_287(iParam1, iParam4, iParam5))
	{
		return false;
	}
	uParam2->f_16 = iParam1;
	uParam2->f_8 = iParam1;
	uParam2->f_9 = 1;
	uParam2->f_13 = iParam4;
	uParam2->f_12 = 1248274121;
	if (!func_288(iParam0, *uParam2, 541670136, iParam3))
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

int func_234(int iParam0)
{
	switch (iParam0)
	{
		case -697100746:
			return 0;
		case -999519443:
			return 7;
		case 128291088:
			return 12;
		case -1399517481:
			return 11;
		case 705255263:
			return 13;
		case -471215553:
			return 14;
		case 1371028520:
			return 15;
		case 1479488426:
			return 16;
		case -170363364:
			return 17;
		case -296143963:
			return 18;
		case -575193412:
			return 19;
		case 1364208910:
			return 20;
		case 1936286816:
			return 21;
		case -361115047:
			return 22;
		default:
			break;
	}
	return -1;
}

bool func_235(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 22)
	{
		return false;
	}
	return true;
}

int func_236(int iParam0)
{
	if (!func_235(iParam0))
	{
		return 0;
	}
	return &(Global_1293346->f_3009[iParam0]);
}

int func_237(int iParam0, bool bParam1)
{
	if (!func_235(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		iVar0 = func_289(iParam0);
		if (func_72(iVar0, 0))
		{
			if (iParam0 == 0)
			{
				iVar1 = func_290(255);
			}
			else
			{
				iVar1 = func_292(iVar0, func_291(1), -1990194462, 1, 0, 0);
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
		iVar0 = func_293(iParam0);
		if (func_72(iVar0, 0))
		{
			if (iParam0 == 0)
			{
				iVar1 = _0xdb438cc9bc6f4022();
			}
			else
			{
				iVar1 = func_292(iVar0, func_291(1), -1990194462, 1, 0, 0);
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

void func_238(var uParam0, int iParam1)
{
	*uParam0 = 1690011036;
	uParam0->f_31 = iParam1;
	func_259(iParam1, &(uParam0->f_32), &(uParam0->f_33));
}

void func_239(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam2)
	{
		if (bParam3)
		{
			uParam0->f_1 = 148626529;
		}
		else
		{
			uParam0->f_1 = 406185559;
		}
	}
	else if (bParam3)
	{
		uParam0->f_1 = 684358904;
	}
	else
	{
		uParam0->f_1 = 1143084795;
	}
	uParam0->f_19 = (iParam1 == func_125(0) + 1 && func_294());
	if (!uParam0->f_19)
	{
		return;
	}
	uParam0->f_20 = func_295(1);
	iVar0 = func_296(1);
	switch (func_297())
	{
		case -570078785:
			StringCopy(&(uParam0->f_3), _create_var_string(2, func_38(1732430329), func_226(iVar0)), 128);
			break;
		default:
			StringCopy(&(uParam0->f_3), _create_var_string(10, func_38(1732430329), func_298(iVar0)), 128);
			break;
	}
}

void func_240(var uParam0)
{
	func_168(&(uParam0->f_3));
	uParam0->f_19 = func_299();
	uParam0->f_20 = 1;
	uParam0->f_21 = -249048286;
}

bool func_241(var uParam0, var uParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, var uParam10)
{
	if (!_databinding_is_data_id_valid(uParam1))
	{
		return false;
	}
	(*uParam0)[0] = _databinding_add_data_container(uParam1, &cParam2);
	(*uParam0)[1] = _databinding_add_data_hash_by_hash(uParam0[0], 393042296, *uParam10);
	(*uParam0)[2] = _databinding_add_data_hash_by_hash(uParam0[0], 148336560, uParam10->f_1);
	(*uParam0)[3] = _databinding_add_data_bool_by_hash(uParam0[0], 1527945487, uParam10->f_2);
	(*uParam0)[8] = _databinding_add_data_hash_by_hash(uParam0[0], 440050042, uParam10->f_22);
	(*uParam0)[9] = _databinding_add_data_hash_by_hash(uParam0[0], 1058850005, uParam10->f_23);
	(*uParam0)[10] = _databinding_add_data_hash_by_hash(uParam0[0], -3675574, uParam10->f_24);
	(*uParam0)[11] = _databinding_add_data_hash_by_hash(uParam0[0], -536627617, uParam10->f_25);
	(*uParam0)[12] = _databinding_add_data_hash_by_hash(uParam0[0], -840685091, uParam10->f_26);
	(*uParam0)[13] = _databinding_add_data_hash_by_hash(uParam0[0], -691977066, uParam10->f_27);
	(*uParam0)[14] = _databinding_add_data_bool_by_hash(uParam0[0], -1846747855, uParam10->f_28);
	(*uParam0)[15] = _databinding_add_data_bool_by_hash(uParam0[0], 1267925131, uParam10->f_29);
	(*uParam0)[16] = _databinding_add_data_hash_by_hash(uParam0[0], 661124052, uParam10->f_30);
	(*uParam0)[17] = _databinding_add_data_int_by_hash(uParam0[0], -518474626, uParam10->f_31);
	(*uParam0)[18] = _databinding_add_data_int_by_hash(uParam0[0], 1956569112, uParam10->f_32);
	(*uParam0)[19] = _databinding_add_data_int_by_hash(uParam0[0], -132529197, uParam10->f_33);
	(*uParam0)[20] = _databinding_add_data_string_by_hash(uParam0[0], 1212273021, &(uParam10->f_34));
	(*uParam0)[21] = _databinding_add_data_bool_by_hash(uParam0[0], -94662335, uParam10->f_50);
	(*uParam0)[22] = _databinding_add_data_hash_by_hash(uParam0[0], 2103186173, uParam10->f_51);
	(*uParam0)[4] = _databinding_add_data_string_by_hash(uParam0[0], -2035241910, &(uParam10->f_3));
	(*uParam0)[5] = _databinding_add_data_bool_by_hash(uParam0[0], -610122036, uParam10->f_19);
	(*uParam0)[6] = _databinding_add_data_bool_by_hash(uParam0[0], -1741332733, uParam10->f_20);
	(*uParam0)[7] = _databinding_add_data_hash_by_hash(uParam0[0], -260445760, uParam10->f_21);
	return true;
}

bool func_242(var uParam0, var uParam1, int iParam2)
{
	if (!_databinding_is_data_id_valid(uParam0->f_6.f_4))
	{
		return false;
	}
	if (!_databinding_is_data_id_valid(uParam1[0]))
	{
		return false;
	}
	iVar0 = _databinding_get_array_count(uParam0->f_6.f_4);
	_databinding_insert_ui_item_to_list_from_context_hash_alias(uParam0->f_6.f_4, iVar0, iParam2, uParam1[0]);
	return true;
}

bool func_243(var uParam0, char[4] cParam1)
{
	if (!_databinding_is_data_id_valid(uParam0))
	{
		return false;
	}
	_databinding_write_data_hash_string_from_parent_by_hash(uParam0, 393042296, *cParam1);
	_databinding_write_data_hash_string_from_parent_by_hash(uParam0, 148336560, cParam1->f_1);
	_0xbfc83da249befcc9(uParam0, 1527945487, cParam1->f_2);
	_databinding_write_data_hash_string_from_parent_by_hash(uParam0, 440050042, cParam1->f_22);
	_databinding_write_data_hash_string_from_parent_by_hash(uParam0, 1058850005, cParam1->f_23);
	_databinding_write_data_hash_string_from_parent_by_hash(uParam0, -3675574, cParam1->f_24);
	_databinding_write_data_hash_string_from_parent_by_hash(uParam0, -536627617, cParam1->f_25);
	_databinding_write_data_hash_string_from_parent_by_hash(uParam0, -840685091, cParam1->f_26);
	_databinding_write_data_hash_string_from_parent_by_hash(uParam0, -691977066, cParam1->f_27);
	_0xbfc83da249befcc9(uParam0, -1846747855, cParam1->f_28);
	_0xbfc83da249befcc9(uParam0, 1267925131, cParam1->f_29);
	_databinding_write_data_hash_string_from_parent_by_hash(uParam0, 661124052, cParam1->f_30);
	_databinding_write_data_int_from_parent_by_hash(uParam0, -518474626, cParam1->f_31);
	_databinding_write_data_int_from_parent_by_hash(uParam0, 1956569112, cParam1->f_32);
	_databinding_write_data_int_from_parent_by_hash(uParam0, -132529197, cParam1->f_33);
	_0xa3bd6ff95e713ee5(uParam0, 1212273021, &(cParam1->f_34));
	_0xbfc83da249befcc9(uParam0, -94662335, cParam1->f_50);
	_databinding_write_data_hash_string_from_parent_by_hash(uParam0, 2103186173, cParam1->f_51);
	_0xa3bd6ff95e713ee5(uParam0, -2035241910, &(cParam1->f_3));
	_0xbfc83da249befcc9(uParam0, -610122036, cParam1->f_19);
	_0xbfc83da249befcc9(uParam0, -1741332733, cParam1->f_20);
	_databinding_write_data_hash_string_from_parent_by_hash(uParam0, -260445760, cParam1->f_21);
	return true;
}

struct<2> func_244(int iParam0)
{
	Var2 = func_81();
	Var2.f_3 = iParam0;
	Var2.f_2 = 10;
	if (!_datafile_get_hash(&Var0, &Var2))
	{
		return Var0;
	}
	Var2.f_2 = 12;
	if (!_datafile_get_hash(&(Var0.f_1), &Var2))
	{
		return Var0;
	}
	return Var0;
}

bool func_245(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_246(var uParam0)
{
	return func_245(*uParam0, 2);
}

int func_247()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

void func_248(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_104() - fParam1);
	func_300(uParam0, 1);
	func_301(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_249(var uParam0, int iParam1, var uParam2)
{
	func_238(uParam0, iParam1);
	uParam0->f_1 = -1479343923;
	if (func_145())
	{
		func_239(uParam0, iParam1, 0, 1);
	}
}

int func_250(int iParam0, int iParam1)
{
	return func_304(func_302(iParam0), func_303(iParam0, iParam1));
}

int func_251(int iParam0, int iParam1, int iParam2)
{
	return func_305(func_302(iParam0), func_303(iParam0, iParam1), iParam2);
}

bool func_252(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	switch (func_306(iParam3))
	{
		case 0:
			if (!func_307(iParam3))
			{
				return false;
			}
			func_308(uParam0, iParam1, bParam2, iParam3);
			break;
		case 1:
			if (!func_309(iParam3))
			{
				return false;
			}
			func_310(uParam0, iParam1, bParam2, iParam3);
			break;
		default:
			return false;
	}
	return true;
}

bool func_253(var uParam0, char[4] cParam1, int iParam2)
{
	iVar9 = func_89(uParam0);
	if (iParam2 >= iVar9)
	{
		MemCopy(&cVar1, {cLocal_19}, 8);
		StringIntConCat(&cVar1, iParam2, 64);
		uVar10 = 23;
		if (!func_241(&uVar10, uParam0->f_6.f_3, cVar1, cParam1))
		{
			return false;
		}
		if (!func_311(uParam0, &uVar10, 596766605))
		{
			return false;
		}
	}
	else if (func_91(uParam0, iParam2, &uVar0))
	{
		if (!func_243(uVar0, cParam1))
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

void func_254(var uParam0)
{
	_copy_memory(uParam0, &uVar0, 52);
}

bool func_255(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	switch (func_306(iParam3))
	{
		case 0:
			if (!func_312(iParam3))
			{
				return false;
			}
			func_313(uParam0, iParam1, bParam2, iParam3);
			break;
		case 1:
			if (!func_314(iParam3))
			{
				return false;
			}
			func_315(uParam0, iParam1, bParam2, iParam3);
			break;
		case -1:
			return false;
	}
	return true;
}

bool func_256(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam3 >= iParam1)
	{
		return false;
	}
	*iParam4 = ((iParam0 * iParam3) + iParam2);
	return true;
}

void func_257(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_316(&(uParam0->f_4));
}

int func_258(var uParam0, char* sParam1)
{
	return func_317(&(uParam0->f_6.f_383), _create_var_string(2, func_38(1177414367), sParam1), 1);
}

void func_259(int iParam0, var uParam1, var uParam2)
{
	iVar0 = func_125(0);
	iVar1 = func_318(0, iParam0);
	iVar2 = func_195((iParam0 - 1), 0, func_79(0));
	iVar3 = func_318(0, iVar2);
	*uParam2 = (iVar1 - iVar3);
	if (iParam0 == iVar0 + 1)
	{
		*uParam1 = (func_319(0) - iVar3);
	}
	else if (iParam0 <= iVar0)
	{
		*uParam1 = *uParam2;
		if (*uParam1 == 0 && *uParam2 == 0)
		{
			*uParam1 = 1;
			*uParam2 = 1;
		}
	}
	else
	{
		*uParam1 = 0;
	}
}

int func_260(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	return func_317(&(uParam0->f_6.f_383), _create_var_string(2, func_38(-1670072283), sParam1, sParam2, sParam3), 1);
}

int func_261(var uParam0, char* sParam1)
{
	return func_317(&(uParam0->f_6.f_383), _create_var_string(2, func_38(-1024390580), sParam1), 0);
}

char* func_262(int iParam0)
{
	return _0x2b6846401d68e563(to_float(iParam0), 0);
}

void func_263(struct<17> Param0)
{
	iVar0 = Param0.f_16;
	iVar1 = Param0.f_13;
	if (func_320(iVar0, 773203532, iVar1, 0, 1) > 0)
	{
		func_321("gold_spend", "Gold_Spend_Sounds", 1);
	}
	else
	{
		play_sound_frontend("PURCHASE", "HUD_SHOP_SOUNDSET", true, 0);
	}
}

int func_264(int iParam0)
{
	Var0 = func_81();
	Var0.f_2 = 14;
	Var0.f_3 = iParam0;
	if (!_datafile_get_hash(&uVar5, &Var0))
	{
		return 0;
	}
	return uVar5;
}

bool func_265(var uParam0, char* sParam1, int iParam2)
{
	iVar0 = *uParam0;
	if (iParam2 < 0)
	{
		return false;
	}
	if (iParam2 >= iVar0)
	{
		return false;
	}
	if (!_databinding_is_data_id_valid(uParam0[iParam2]))
	{
		return false;
	}
	_databinding_write_data_string(uParam0[iParam2], sParam1);
	return true;
}

char[] func_266(char* sParam0)
{
	vVar0 = { func_323(func_322(), 1) };
	vVar3 = { func_324(func_322(), 1) };
	vVar6 = { func_325(func_322()) };
	return _create_var_string(170, sParam0, &vVar0, &vVar3, &vVar6);
}

int func_267(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_326(iVar0, 1, 0);
		if (!func_269(iParam0, iVar33, &Var2, &iVar1, 0, 1))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_327(&(Var2[iVar34])))
				{
					if (!bParam1 || func_274(&(Var2[iVar34]), 0, 1, 1) > 0)
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

int func_268(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar40 = func_326(iVar0, 0, 1);
		if (!func_269(iParam0, iVar40, &Var9, &iVar1, 0, 1))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_280(&(Var9[iVar41])))
				{
					if (!bParam1 || func_274(&(Var9[iVar41]), 0, 1, 1) > 0)
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

bool func_269(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_213(iParam0))
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
		func_328(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_270(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_329() == 0)
	{
		return func_330(iParam0);
	}
	return iParam0 <= func_331();
}

bool func_271(int iParam0)
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

int func_272(int iParam0, int iParam1)
{
	if (iParam0 == 15 && func_281(iParam1, -2051813666))
	{
		return 1;
	}
	return 0;
}

int func_273(int iParam0, int iParam1)
{
	if (!func_72(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_291(0) };
	Var0.f_4 = func_332(iParam1);
	Var5 = { func_283(iParam0, Var0, Var0.f_4, 0) };
	if (!_0xb881ca836cc4b6d4(&Var5))
	{
		return 0;
	}
	iVar9 = _0xc97e0d2302382211(func_333(0), &Var5, 0);
	return iVar9;
}

int func_274(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	iVar0 = 0;
	if (!func_72(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_334(iParam0);
	if (iVar1 == 307971639 || (bParam1 && iVar1 == -427144552))
	{
		iVar2 = func_335(iParam0, 1);
		if (iVar2 != 0)
		{
			return get_ped_ammo_by_type(Global_34, iVar2);
		}
	}
	else if (iVar1 == -427144552)
	{
		return func_336(iParam0, 0);
	}
	if (func_337(iParam0, -455129387) != 0)
	{
		iVar0 = _0xe787f05dfc977bde(func_333(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_338(iParam0, bParam2) };
		if (!_0xb881ca836cc4b6d4(&Var3))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_333(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

bool func_275(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_276(int iParam0, int iParam1, bool bParam2)
{
	if (!func_213(iParam0))
	{
		return false;
	}
	if (_0xf540239f9937033b(iParam0, iParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_339(iParam0, iParam1);
	}
	return true;
}

bool func_277()
{
	return Global_1915715->f_22477;
}

bool func_278(int iParam0)
{
	if (iParam0 == 34 && Global_1915715->f_22504.f_1)
	{
		return true;
	}
	if (func_340(1))
	{
		if (Global_1915715->f_20241 == iParam0)
		{
			return true;
		}
	}
	return false;
}

bool func_279(int iParam0)
{
	if (func_341(iParam0) == -126813555 || func_341(iParam0) == 1946043663)
	{
		return true;
	}
	return false;
}

bool func_280(int iParam0)
{
	return func_341(iParam0) == -126813555;
}

bool func_281(int iParam0, int iParam1)
{
	if (!func_72(iParam0, 0))
	{
		return func_343(func_342(iParam0), iParam1);
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

struct<5> func_282(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_291(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_334(iParam0);
	switch (iVar5)
	{
		case -1037537535:
			Var0 = { func_283(889965687, Var0, 1034665895, bParam1) };
			Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			break;
		case -427144552:
			Var0 = { func_344(bParam1) };
			if (bParam2 && func_345(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_346(iParam0, &Var0, 1728382685, 0, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_346(iParam0, &Var0, -649335959, 0, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_347(iParam0, &Var6, 1728382685))
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
			Var0 = { func_348(bParam1) };
			switch (func_341(iParam0))
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
			if (func_349(iParam0, -1823706425))
			{
				Var0 = { func_283(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_349(iParam0, -1483207246))
			{
				Var0 = { func_283(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1911121386))
			{
				Var0 = { func_283(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_349(iParam0, -1653629781))
			{
				Var0 = { func_283(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_350(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_349(iParam0, -1653629781))
			{
				Var0 = { func_283(1384535894, Var0, 1784584921, bParam1) };
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

struct<4> func_283(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_72(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_333(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_284(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_285(struct<4> Param0)
{
	if (!func_284(&Param0))
	{
		return false;
	}
	if (func_351(&Param0))
	{
		return false;
	}
	return func_353(func_352(Param0));
}

bool func_286(int* iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_354(iParam0))
		{
			return false;
		}
	}
	if (func_355(&(iParam0->f_6)))
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

int func_287(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_276(iParam0, iParam1, 0))
	{
		return 0;
	}
	if (func_275(iParam2, 2))
	{
		if (func_339(iParam0, iParam1))
		{
			return 0;
		}
	}
	if (_0xfbe782b3165ac8ec(iParam0))
	{
		return 0;
	}
	if (func_275(iParam2, 8))
	{
		return func_356(iParam0, iParam1);
	}
	return 1;
}

bool func_288(int* iParam0, struct<17> Param1, int iParam18, bool bParam19)
{
	if (iParam18 != 541670136)
	{
		return false;
	}
	if (!func_357(Param1))
	{
		return false;
	}
	if (!func_358(iParam0, iParam18))
	{
		return false;
	}
	if (func_359(*iParam0, iParam18, &Param1))
	{
	}
	else
	{
		return false;
	}
	return func_360(iParam0, bParam19);
}

int func_289(int iParam0)
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

int func_290(int iParam0)
{
	if (iParam0 == 255 || iParam0 == network_player_id_to_int())
	{
		return _0x32c90cdfaf40514c();
	}
	return Global_1145091[iParam0];
}

struct<4> func_291(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_333(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_283(1328661203, func_361(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_283(1328661203, func_361(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_283(1328661203, func_361(), -1591664384, bParam0);
}

int func_292(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_72(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_337(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_283(iParam0, Param1, iParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_333(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_333(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

int func_293(int iParam0)
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

bool func_294()
{
	if (!func_145())
	{
		return false;
	}
	iVar0 = func_229(-1329411275, 0, 0, -1, 0);
	if (iVar0 == 0)
	{
		return false;
	}
	return true;
}

bool func_295(int iParam0)
{
	iVar0 = func_69();
	return func_228(iVar0, func_229(iVar0, 0, 1, -1, 0), &uVar1, 1, 0);
}

int func_296(int iParam0)
{
	iVar0 = func_69();
	iVar1 = func_225(iVar0, func_229(iVar0, 0, 1, -1, 0), 1, 1);
	if (iParam0 < 1)
	{
		return iVar1;
	}
	return (iVar1 * iParam0);
}

int func_297()
{
	return func_229(func_69(), 0, 1, -1, 0);
}

var func_298(int iParam0)
{
	StringCopy(&cVar0, func_362(iParam0), 16);
	StringConCat(&cVar0, ".", 16);
	if (get_length_of_literal_string(func_363(iParam0)) < 2)
	{
		StringConCat(&cVar0, "0", 16);
	}
	StringConCat(&cVar0, func_363(iParam0), 16);
	return func_364(cVar0);
}

int func_299()
{
	iVar0 = func_71();
	if (func_276(iVar0, -915411861, 1))
	{
		return 1;
	}
	if (func_276(iVar0, -570078785, 1))
	{
		return 1;
	}
	if (func_276(iVar0, 997808187, 1))
	{
		return 1;
	}
	return 0;
}

void func_300(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_301(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_302(int iParam0)
{
	Var0 = func_81();
	switch (iParam0)
	{
		case 0:
			Var0.f_2 = 6;
			break;
		case 1:
			Var0.f_2 = 7;
			break;
	}
	Var0.f_3 = func_74(0);
	if (!_datafile_get_hash(&uVar5, &Var0))
	{
		return 0;
	}
	return uVar5;
}

int func_303(int iParam0, int iParam1)
{
	if (iParam1 < 1)
	{
		return 0;
	}
	if (iParam1 > func_79(iParam0))
	{
		return 0;
	}
	iVar0 = (iParam1 - 1);
	if (!func_365(func_173(iParam0), iVar0, &vVar1))
	{
		return 0;
	}
	return vVar1.z;
}

int func_304(int iParam0, int iParam1)
{
	if (!_item_database_get_shop_layout_page_info_by_key(iParam0, iParam1, &Var0))
	{
		return 0;
	}
	return Var0.f_3;
}

int func_305(int iParam0, int iParam1, int iParam2)
{
	if (!_item_database_get_shop_layout_page_info_by_key(iParam0, iParam1, &Var0))
	{
		return 0;
	}
	if (Var0.f_3 < 1)
	{
		return 0;
	}
	if (!_item_database_get_shop_layout_page_item_key(iParam0, iParam1, iParam2, &uVar4, &uVar5, &uVar6))
	{
		return 0;
	}
	return uVar4;
}

int func_306(int iParam0)
{
	return func_366(iParam0);
}

bool func_307(int iParam0)
{
	if (!func_72(iParam0, 0))
	{
		return false;
	}
	if (func_367(iParam0, 0) != 3)
	{
		return false;
	}
	return true;
}

void func_308(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!func_72(iParam3, 0))
	{
		return;
	}
	func_238(uParam0, iParam1);
	func_368(uParam0, iParam1, bParam2);
	uParam0->f_26 = func_369(iParam3);
	uParam0->f_27 = func_370(iParam3);
	uParam0->f_30 = func_371(iParam3);
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
	if (_0x2a610bee7d341cc4(iParam3, &Var0))
	{
		func_372(uParam0, &(Var0.f_732.f_2));
	}
}

bool func_309(int iParam0)
{
	return true;
}

void func_310(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	if (iParam3 == 0)
	{
		return;
	}
	func_238(uParam0, iParam1);
	func_368(uParam0, iParam1, bParam2);
	uParam0->f_30 = func_373(iParam3);
	Var0.f_2 = 5;
	Var0.f_18 = 8;
	if (func_374(iParam3, &Var0))
	{
		uParam0->f_26 = Var0;
		uParam0->f_27 = Var0.f_1;
		func_372(uParam0, &(Var0.f_2));
	}
}

bool func_311(var uParam0, var uParam1, int iParam2)
{
	if (!_databinding_is_data_id_valid(uParam0->f_6.f_3))
	{
		return false;
	}
	if (!_databinding_is_data_id_valid(uParam1[0]))
	{
		return false;
	}
	iVar0 = _databinding_get_array_count(uParam0->f_6.f_3);
	_databinding_insert_ui_item_to_list_from_context_hash_alias(uParam0->f_6.f_3, iVar0, iParam2, uParam1[0]);
	return true;
}

bool func_312(int iParam0)
{
	if (!func_72(iParam0, 0))
	{
		return false;
	}
	if (func_367(iParam0, 0) != 3)
	{
		return false;
	}
	return true;
}

void func_313(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!func_72(iParam3, 0))
	{
		return;
	}
	func_238(uParam0, iParam1);
	func_375(uParam0, iParam1, bParam2);
	uParam0->f_26 = func_369(iParam3);
	uParam0->f_27 = func_370(iParam3);
	uParam0->f_30 = func_371(iParam3);
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
	if (_0x2a610bee7d341cc4(iParam3, &Var0))
	{
		func_372(uParam0, &(Var0.f_732.f_2));
	}
}

bool func_314(int iParam0)
{
	if (!func_213(iParam0))
	{
		return false;
	}
	return true;
}

void func_315(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	if (iParam3 == 0)
	{
		return;
	}
	func_238(uParam0, iParam1);
	func_375(uParam0, iParam1, bParam2);
	uParam0->f_30 = func_373(iParam3);
	Var0.f_2 = 5;
	Var0.f_18 = 8;
	if (func_374(iParam3, &Var0))
	{
		uParam0->f_26 = Var0;
		uParam0->f_27 = Var0.f_1;
		func_372(uParam0, &(Var0.f_2));
	}
}

void func_316(var uParam0)
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

int func_317(var uParam0, char* sParam1, bool bParam2)
{
	if (!*uParam0)
	{
		return 0;
	}
	_databinding_write_data_string(uParam0->f_1, sParam1);
	_databinding_write_data_bool(uParam0->f_2, bParam2);
	return 1;
}

int func_318(int iParam0, int iParam1)
{
	iVar0 = (iParam1 - 1);
	if (iVar0 < 0)
	{
		return 0;
	}
	if (!func_365(func_173(iParam0), iVar0, &Var1))
	{
		return 0;
	}
	return Var1.f_1;
}

int func_319(int iParam0)
{
	return func_376(func_173(iParam0));
}

int func_320(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_269(iParam0, iParam2, &Var0, &iVar31, bParam3, bParam4))
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

void func_321(char* sParam0, char* sParam1, int iParam2)
{
	iVar0 = get_sound_id();
	if (iVar0 != -1)
	{
		_0xce5d0ffe83939af1(iVar0, sParam0, sParam1, iParam2);
		(*Global_1957967)[Global_1957967->f_25] = iVar0;
		Global_1957967->f_25 = (Global_1957967->f_25 + 1 % 24);
	}
}

int func_322()
{
	if (func_164())
	{
		if (network_does_tunable_exist(-475019843, func_218(-407496435)))
		{
			if (!network_access_tunable_int(-475019843, func_218(-407496435), &iVar0))
			{
			}
		}
	}
	else if (network_does_tunable_exist(-475019843, func_218(-1491724765)))
	{
		if (!network_access_tunable_int(-475019843, func_218(-1491724765), &iVar0))
		{
		}
	}
	else
	{
		iVar0 = func_377(949671430);
	}
	return iVar0;
}

Vector3 func_323(int iParam0, bool bParam1)
{
	_get_date_and_time_from_unix_epoch(iParam0, &vVar0);
	if (bParam1)
	{
		StringCopy(&cVar6, "SR_DAY_", 24);
		StringIntConCat(&cVar6, vVar0.z, 24);
		StringCopy(&cVar6, _create_var_string(2, &cVar6), 24);
		return cVar6;
	}
	StringCopy(&cVar6, func_262(vVar0.z), 24);
	return cVar6;
}

Vector3 func_324(int iParam0, bool bParam1)
{
	_get_date_and_time_from_unix_epoch(iParam0, &Var0);
	if (bParam1)
	{
		StringCopy(&cVar6, "MONTH_", 24);
		StringIntConCat(&cVar6, Var0.f_1, 24);
		StringCopy(&cVar6, _create_var_string(2, &cVar6), 24);
		return cVar6;
	}
	StringCopy(&cVar6, func_262(Var0.f_1), 24);
	return cVar6;
}

Vector3 func_325(int iParam0)
{
	_get_date_and_time_from_unix_epoch(iParam0, &iVar0);
	StringCopy(&cVar6, func_262(iVar0), 24);
	return cVar6;
}

int func_326(int iParam0, bool bParam1, bool bParam2)
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

bool func_327(int iParam0)
{
	return func_341(iParam0) == 1946043663;
}

void func_328(int iParam0, int iParam1, var uParam2, int iParam3)
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
			if ((*uParam2)[iVar0]->f_1 == 0 && func_341(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

int func_329()
{
	return Global_1572887->f_13;
}

bool func_330(int iParam0)
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

int func_331()
{
	if (func_329() == 0)
	{
		return _network_get_cash_balance();
	}
	return _money_get_cash_balance();
}

int func_332(int iParam0)
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

int func_333(bool bParam0)
{
	if (func_329() == -1)
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

int func_334(int iParam0)
{
	if (!func_72(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_335(int iParam0, int iParam1)
{
	if (!func_72(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_334(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_281(iParam0, 1399091007))
	{
		func_378(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_336(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_379(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_380(&Var0, func_344(0));
	}
	if (!func_381(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_382(iVar14);
	return uVar15;
}

int func_337(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

struct<4> func_338(int iParam0, bool bParam1)
{
	Var0 = { func_282(iParam0, bParam1, 0) };
	return func_283(iParam0, Var0, Var0.f_4, bParam1);
}

bool func_339(int iParam0, int iParam1)
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

bool func_340(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915715->f_20638;
	}
	return (Global_1915715->f_20638 || Global_1915715->f_22504.f_1);
}

int func_341(int iParam0)
{
	if (!func_72(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_342(int iParam0)
{
	return iParam0;
}

int func_343(int iParam0, int iParam1)
{
	if (!func_383(iParam0, 2))
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

struct<4> func_344(bool bParam0)
{
	iVar0 = func_333(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_4)))
		{
			Global_1293346->f_4 = { func_283(923904168, func_291(bParam0), -740156546, bParam0) };
		}
		return Global_1293346->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_16)))
		{
			Global_1293346->f_16 = { func_283(923904168, func_291(bParam0), -740156546, 0) };
		}
		return Global_1293346->f_16;
	}
	return func_283(923904168, func_291(bParam0), -740156546, 0);
}

bool func_345(int iParam0, bool bParam1)
{
	if (func_341(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_384();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_346(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_292(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

bool func_347(int iParam0, var uParam1, int iParam2)
{
	if (func_385(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_348(bool bParam0)
{
	iVar0 = func_333(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_8)))
		{
			Global_1293346->f_8 = { func_283(271701509, func_291(bParam0), 12999093, 0) };
		}
		return Global_1293346->f_8;
	}
	return func_283(271701509, func_291(bParam0), 12999093, 0);
}

bool func_349(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_341(iParam0);
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
			if (func_386(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_350(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_387(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

bool func_351(var uParam0)
{
	if (!func_284(uParam0))
	{
		return false;
	}
	return _0x0137c77a2ec64536(uParam0);
}

int func_352(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (!func_284(&uParam0))
	{
		return 0;
	}
	return _0x4a606c17276e1bcc(&uParam0);
}

bool func_353(int iParam0)
{
	if (iParam0 <= 0)
	{
		return false;
	}
	return (get_cloud_time_as_int() + func_388()) > iParam0;
}

bool func_354(int* iParam0)
{
	if (iParam0->f_1 == -1)
	{
		return false;
	}
	iVar0 = func_389(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return true;
	}
	return false;
}

bool func_355(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_356(int iParam0, int iParam1)
{
	if (iParam1 == -570078785)
	{
		iVar0 = func_225(iParam0, -570078785, 0, 1);
		if (iVar0 == 0)
		{
		}
		if (!func_271(iVar0))
		{
			if (Global_1915715->f_20644)
			{
				func_390(_create_var_string(2, "SHOP_H_TOO_POOR_GOLD", func_226(iVar0)));
			}
			return 0;
		}
	}
	else if (iParam1 == -915411861)
	{
		iVar1 = func_225(iParam0, -915411861, 0, 1);
		if (iVar1 == 0)
		{
		}
		if (!func_270(iVar1))
		{
			if (Global_1915715->f_20644)
			{
				func_390("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (iParam1 == 997808187)
	{
		return 1;
	}
	if (!func_228(iParam0, iParam1, &uVar2, 1, 0))
	{
		return 0;
	}
	return 1;
}

bool func_357(struct<17> Param0)
{
	if (!func_213(Param0.f_16))
	{
		return false;
	}
	return true;
}

bool func_358(int* iParam0, int iParam1)
{
	if (!_cashinventory_transaction_get_basket_is_valid(*iParam0))
	{
		if (!func_391(iParam0, iParam1))
		{
			return false;
		}
	}
	iVar0 = _cashinventory_transaction_get_action(*iParam0);
	if (iVar0 != iParam1 || _cashinventory_transaction_get_num_of_items(*iParam0) >= 50)
	{
		if (!func_217(iParam0))
		{
			return false;
		}
		if (!func_391(iParam0, iParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_359(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 17, uParam2, 0);
}

bool func_360(int* iParam0, bool bParam1)
{
	iParam0->f_2++;
	if (bParam1)
	{
		return func_217(iParam0);
	}
	return true;
}

struct<4> func_361()
{
	return Var0;
}

char* func_362(int iParam0)
{
	iParam0 = (iParam0 / 100);
	return _0x2b6846401d68e563(to_float(iParam0), 0);
}

char* func_363(int iParam0)
{
	iParam0 = (iParam0 % 100);
	if (iParam0 == 0)
	{
		return "00";
	}
	return func_262(iParam0);
}

var func_364(char[4] cParam0, char[4] cParam1)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

bool func_365(int iParam0, int iParam1, var uParam2)
{
	Var0 = Global_1139381->f_3;
	Var0.f_2 = 351001518;
	Var0.f_3 = func_392(iParam0);
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

int func_366(int iParam0)
{
	if (func_213(iParam0))
	{
		return 1;
	}
	else if (func_72(iParam0, 0))
	{
		return 0;
	}
	return -1;
}

int func_367(int iParam0, int iParam1)
{
	if (!func_72(iParam0, 0) && !func_383(func_342(iParam0), 2))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		iVar0 = func_393(0);
	}
	else
	{
		iVar0 = iParam1;
	}
	if (iVar0 == 2026485318)
	{
		if (func_281(iParam0, -133342564))
		{
			return 2;
		}
	}
	else if (iVar0 == 24043185)
	{
		if (func_281(iParam0, -287432114))
		{
			return 2;
		}
	}
	return 3;
}

void func_368(var uParam0, char* sParam1, bool bParam2)
{
	uParam0->f_1 = 2097921812;
	uParam0->f_28 = !bParam2;
	uParam0->f_29 = bParam2;
	if (!uParam0->f_28 && uParam0->f_29)
	{
		uParam0->f_2 = 1;
	}
	if (!bParam2)
	{
		StringCopy(&(uParam0->f_34), _create_var_string(2, func_38(-1585038118), sParam1), 128);
		uParam0->f_50 = 1;
	}
	if (func_145())
	{
		func_239(uParam0, sParam1, 0, 0);
	}
}

int func_369(int iParam0)
{
	if (!func_72(iParam0, 0))
	{
		return 0;
	}
	if (func_281(iParam0, -306684263))
	{
		return func_394(iParam0);
	}
	else if (func_395(iParam0) && !func_281(iParam0, -1090933859))
	{
		iVar1 = func_396(iParam0);
		iVar2 = func_397(iVar1);
		sVar0 = func_398(iVar2);
		if (func_399(sVar0))
		{
			return get_hash_key(sVar0);
		}
	}
	else
	{
		sVar0 = _get_label_text_by_hash(func_400(iParam0));
		return func_400(iParam0);
	}
	return 0;
}

int func_370(int iParam0)
{
	if (!func_72(iParam0, 0))
	{
		return 0;
	}
	if (func_395(iParam0))
	{
		iVar1 = func_396(iParam0);
		iVar2 = func_397(iVar1);
		sVar0 = func_401(iVar2);
		if (func_399(sVar0))
		{
			return get_hash_key(sVar0);
		}
	}
	else
	{
		sVar0 = _get_label_text_by_hash(func_402(iParam0));
		return func_402(iParam0);
	}
	return 0;
}

int func_371(int iParam0)
{
	if (!func_72(iParam0, 0))
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
			if (Var0.f_18[iVar35]->f_1 == -1894804132)
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

void func_372(var uParam0, var uParam1)
{
	switch (func_403(uParam1, 805880880, &(uParam0->f_22), &(uParam0->f_23), 0))
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 0:
			break;
	}
	switch (func_403(uParam1, -15852387, &(uParam0->f_24), &(uParam0->f_25), 0))
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 0:
			break;
	}
}

int func_373(int iParam0)
{
	if (!func_213(iParam0))
	{
		return 0;
	}
	Var0.f_2 = 5;
	Var0.f_18 = 8;
	if (func_374(iParam0, &Var0))
	{
		iVar35 = 0;
		while (iVar35 < 8)
		{
			if (Var0.f_18[iVar35]->f_1 == -1894804132)
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

bool func_374(int iParam0, var uParam1)
{
	return _0xf8d09ef8ce61d7bf(iParam0, uParam1);
}

void func_375(var uParam0, char* sParam1, bool bParam2)
{
	uParam0->f_1 = -1964195787;
	if (!bParam2 || !func_145())
	{
		uParam0->f_28 = 1;
	}
	if (bParam2 && func_145())
	{
		uParam0->f_29 = 1;
	}
	if (bParam2 && func_145())
	{
		uParam0->f_2 = 1;
	}
	if (func_145())
	{
		if (!bParam2)
		{
			StringCopy(&(uParam0->f_34), _create_var_string(2, func_38(-1585038118), sParam1), 128);
			uParam0->f_50 = 1;
		}
	}
	else
	{
		StringCopy(&(uParam0->f_34), _create_var_string(2, func_38(-1504866110)), 128);
		uParam0->f_50 = 1;
		uParam0->f_51 = -759435717;
	}
	if (func_145())
	{
		func_239(uParam0, sParam1, 1, 0);
	}
	else
	{
		func_240(uParam0);
	}
}

int func_376(int iParam0)
{
	if (!func_235(iParam0))
	{
		return 0;
	}
	iVar0 = func_404(iParam0);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	else
	{
		return func_237(iParam0, 0);
	}
	return 0;
}

int func_377(int iParam0)
{
	Var0 = func_81();
	Var0.f_2 = 25;
	Var0.f_3 = func_74(0);
	Var0.f_4 = iParam0;
	if (!_datafile_get_int(&uVar5, &Var0))
	{
		return 0;
	}
	return uVar5;
}

void func_378(int iParam0, var uParam1, var uParam2)
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

struct<14> func_379(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_380(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_381(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_333(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_382(int iParam0)
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

bool func_383(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(iParam0, iParam1);
}

bool func_384()
{
	return (func_405(-1185145312, 0, 0, 0) > 0 && func_406(func_283(889965687, func_291(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

bool func_385(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_333(0);
	*uParam1 = { func_283(iParam0, func_344(0), iParam3, 0) };
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

bool func_386(int iParam0, int iParam1, int iParam2)
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

bool func_387(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_333(bParam2);
	}
	if (!_0x9700e8efc4ab9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

int func_388()
{
	if (!network_does_tunable_exist(-475019843, 135369362))
	{
		return 604800;
	}
	iVar0 = 604800;
	if (!network_access_tunable_int(-475019843, 135369362, &iVar0))
	{
		return 604800;
	}
	return iVar0;
}

int func_389(int* iParam0)
{
	return func_105(iParam0->f_1);
}

void func_390(char* sParam0)
{
	Global_1915715->f_22470 = func_407(sParam0, 10000, 0, 0, 0, 1);
}

bool func_391(int* iParam0, int iParam1)
{
	if (!_cashinventory_transaction_start(iParam0, 712853601, iParam1))
	{
		return false;
	}
	return true;
}

int func_392(int iParam0)
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

int func_393(bool bParam0)
{
	Var0.f_9 = -1591664384;
	iVar14 = 0;
	Var15 = { func_283(889965687, func_291(1), 1034665895, 1) };
	iVar19 = func_406(Var15, 552979403, 1, -1);
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
	Var22 = { func_379(0, -1591664384, 552979403, -1591664384, 0, 0, 0) };
	if (func_381(&Var22, &iVar20, &iVar21, 1))
	{
		if (iVar21 > 0 && func_408(&Var0, 0, iVar20, iVar21))
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
				func_382(iVar20);
				return 0;
			}
			if (bParam0)
			{
				func_409(Var0, 1, 0);
			}
			func_382(iVar20);
			return iVar14;
		}
		func_382(iVar20);
	}
	return 0;
}

int func_394(int iParam0)
{
	if (!func_72(iParam0, 0))
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

bool func_395(int iParam0)
{
	return func_334(iParam0) == -1784221369;
}

int func_396(int iParam0)
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

int func_397(int iParam0)
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

char* func_398(int iParam0)
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

bool func_399(char* sParam0)
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

int func_400(int iParam0)
{
	if (!func_72(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_410(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

var func_401(int iParam0)
{
	StringCopy(&cVar0, func_411(iParam0), 64);
	StringConCat(&cVar0, "_BREED", 64);
	return func_412(&cVar0);
}

int func_402(int iParam0)
{
	if (!func_72(iParam0, 0))
	{
		return 0;
	}
	return _0xa4550fe9c512e3dd(iParam0);
}

int func_403(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4)
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

int func_404(int iParam0)
{
	if (!func_235(iParam0))
	{
		return 0;
	}
	return &(Global_1293346->f_2985[iParam0]);
}

int func_405(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_413(iParam0) && !bParam2)
	{
		return get_ped_ammo_by_type(Global_34, iParam0);
	}
	return _0xe787f05dfc977bde(func_333(bParam1), iParam0, iParam3);
}

int func_406(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_414(&uParam0, iParam4, bParam5, iParam6);
}

var func_407(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_408(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_409(struct<4> Param0, int iParam4, bool bParam5)
{
	if (!func_415(0))
	{
		return func_416(&Param0, iParam4, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_350(Param0, &Var0, bParam5, 0, -1))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!_0x734311e2852760d0(func_333(bParam5), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

int func_410(int iParam0)
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

char* func_411(int iParam0)
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

char[] func_412(char[4] cParam0)
{
	return cParam0;
}

bool func_413(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_414(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (func_417(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_415(bool bParam0)
{
	if (func_329() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_333(bParam0));
}

int func_416(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = -1;
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_350(*uParam0, &Var1, 1, 0, -1))
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
	iVar15 = func_334(Var1.f_4);
	if (iVar15 == -1784221369)
	{
		Var16 = { func_418(*uParam0, 1, 0) };
		Var16.f_10 = iParam1;
		iVar0 = func_419(-1230526146, &Var16, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -2072933068)
	{
		Var44 = { func_420(*uParam0, 1, 0) };
		Var44.f_10 = iParam1;
		iVar0 = func_421(-1230526146, &Var44, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -1037537535)
	{
		Var69 = { func_422(*uParam0, 1, 0) };
		Var69.f_10 = iParam1;
		iVar0 = func_423(-1230526146, &Var69, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var86 = { func_424(&Var1, 0) };
		Var86.f_10 = iParam1;
		iVar0 = func_425(-1230526146, &Var86, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

bool func_417(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_333(bParam3);
	}
	if (!_0x22e590f108289a9d(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_387(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

struct<28> func_418(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var28.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_333(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_424(&Var28, bParam5) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_419(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_426(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_428(func_427(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_429(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 28), iVar0, uParam1);
	}
	return -1;
}

struct<25> func_420(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var25.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_333(bParam4), &uParam0, &Var25, 24, 1))
	{
		return Var0;
	}
	Var0 = { func_424(&Var25, bParam5) };
	Var0.f_16 = { Var25.f_15 };
	Var0.f_24 = Var25.f_23;
	return Var0;
}

int func_421(int iParam0, var uParam1, bool bParam2)
{
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_428(func_430(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_429(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 25), iVar0, uParam1);
	}
	return -1;
}

struct<17> func_422(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_333(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_424(&Var17, bParam5) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_423(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_426(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_428(func_431(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_429(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 17), iVar0, uParam1);
	}
	return -1;
}

struct<16> func_424(var uParam0, bool bParam1)
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
		Var0.f_15 = func_337(uParam0->f_4, -455129387);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_361() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_425(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_426(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_428(func_432(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_429(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

bool func_426(int iParam0, var uParam1)
{
	uVar0 = _0x6c9f12700bce69f4(iParam0, uParam1);
	if (iParam0 == 1702063850)
	{
		if ((func_433(uParam1->f_8, iParam0, uVar0, 2048) || func_433(uParam1->f_8, iParam0, uVar0, 32768)) || func_433(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_433(uParam1->f_8, iParam0, uVar0, 4) || func_433(uParam1->f_8, iParam0, uVar0, 256)) || func_433(uParam1->f_8, iParam0, uVar0, 65536)) || func_433(uParam1->f_8, iParam0, uVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -1406934746)
	{
		if (((func_433(uParam1->f_8, iParam0, uVar0, 1) || func_433(uParam1->f_8, iParam0, uVar0, 8)) || func_433(uParam1->f_8, iParam0, uVar0, 65536)) || func_433(uParam1->f_8, iParam0, uVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -1318406457)
	{
		if (((func_433(uParam1->f_8, iParam0, uVar0, 1) || func_433(uParam1->f_8, iParam0, uVar0, 16)) || func_433(uParam1->f_8, iParam0, uVar0, 2)) || func_433(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_433(uParam1->f_8, iParam0, uVar0, 8) || func_433(uParam1->f_8, iParam0, uVar0, 4096)) || func_433(uParam1->f_8, iParam0, uVar0, 256)) || func_433(uParam1->f_8, iParam0, uVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_427(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 28, uParam2, 0);
}

int func_428(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (_cashinventory_transaction_checkout(iParam1))
		{
			func_151(iParam1, 1, 0, 0);
			return iParam1;
		}
		_cashinventory_transaction_delete(iParam1);
	}
	else if (_cashinventory_transaction_get_num_of_items(iParam1) == 0)
	{
		_cashinventory_transaction_delete(iParam1);
	}
	func_151(iParam1, 2, 0, 0);
	return -1;
}

int func_429(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_151(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

bool func_430(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 25, uParam2, 0);
}

bool func_431(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 17, uParam2, 0);
}

bool func_432(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 16, uParam2, 0);
}

int func_433(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (func_434(uParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

bool func_434(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

