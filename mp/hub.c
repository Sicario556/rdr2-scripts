void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	if (func_1(&uLocal_19))
	{
		func_2(&uLocal_19);
	}
	func_3(&uLocal_19);
}

bool func_1(var uParam0)
{
	if (has_force_cleanup_occurred(4))
	{
		return false;
	}
	network_set_script_is_safe_for_network_game();
	func_4(&uLocal_19, 0);
	func_5(uParam0);
	return true;
}

void func_2(var uParam0)
{
	bVar0 = false;
	while (!bVar0)
	{
		if (func_6(uParam0))
		{
			bVar0 = true;
		}
		func_7(uParam0);
		func_8(uParam0);
		func_9(uParam0);
		wait(0);
	}
}

void func_3(var uParam0)
{
	func_10(uParam0);
	if (_0x9e4ef615e307fbbe())
	{
	}
	else
	{
		terminate_this_thread();
	}
}

void func_4(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
}

int func_5(var uParam0)
{
	iVar0 = 2;
	iVar2 = 1;
	while (iVar2 <= (iVar0 - 1))
	{
		iVar1 = func_11(iVar2, 1);
		if (!func_12(uParam0, iVar1))
		{
			return 0;
		}
		iVar2++;
	}
	return 1;
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
	while (_event_manager_is_event_pending(1692899894))
	{
		if (!_event_manager_peek_event(1692899894, &uVar0))
		{
		}
		else
		{
			func_13(uParam0, &uVar0);
			_event_manager_pop_event(1692899894);
		}
	}
}

void func_8(var uParam0)
{
	if (func_14(uParam0, 2))
	{
		func_15(uParam0, 2, 0);
	}
	if (!_is_app_active(1890312850))
	{
		return;
	}
	bVar0 = _is_app_running(1890312850);
	if (*uParam0 != bVar0)
	{
		*uParam0 = bVar0;
		if (bVar0)
		{
			func_15(uParam0, 2, 1);
		}
	}
}

void func_9(var uParam0)
{
	iVar0 = _0x96fd694fe5be55dc(1890312850);
	iVar1 = func_16(uParam0);
	if (iVar0 != iVar1)
	{
		if (iVar1 != 0)
		{
			func_17(uParam0, iVar1);
		}
		func_4(uParam0, iVar0);
		func_18(uParam0, iVar0);
	}
	func_19(uParam0, iVar0);
}

int func_10(var uParam0)
{
	iVar0 = 2;
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		iVar1 = func_11(iVar2, 1);
		func_20(uParam0, iVar1);
		iVar2++;
	}
	return 1;
}

int func_11(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1890312850;
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

bool func_12(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1890312850:
			return func_21(uParam0);
	}
	return false;
}

void func_13(var uParam0, var uParam1)
{
	switch (*uParam1)
	{
		case -1203660660:
			func_22(uParam0, uParam1);
			break;
	}
}

bool func_14(var uParam0, int iParam1)
{
	return func_23(uParam0->f_1, iParam1);
}

void func_15(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_24(&(uParam0->f_1), iParam1);
	}
	else
	{
		func_25(&(uParam0->f_1), iParam1);
	}
}

var func_16(var uParam0)
{
	return uParam0->f_2;
}

void func_17(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1890312850:
			func_26(uParam0);
			break;
	}
}

void func_18(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1890312850:
			func_27(uParam0);
			break;
	}
}

void func_19(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1890312850:
			func_28(uParam0);
			break;
	}
}

void func_20(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1890312850:
			func_29(uParam0);
			break;
	}
}

int func_21(var uParam0)
{
	if (!func_30(uParam0))
	{
		return 0;
	}
	return 1;
}

void func_22(var uParam0, var uParam1)
{
	switch (uParam1->f_2)
	{
		case 1907521504:
			func_31(1667056592);
			func_32(1667056592, 0);
			func_33(uParam0, Global_1296859->f_21);
			break;
		case -1801655026:
		case -1590110007:
		case -1555105668:
		case -1351908540:
		case -1126561290:
		case -837599880:
		case -684353930:
		case -299518648:
		case -298581576:
		case -16948145:
		case 1357997983:
		case 1543764574:
		case 1544789109:
		case 1600585035:
			func_34(uParam1->f_2);
			break;
	}
}

bool func_23(int iParam0, int iParam1)
{
	return is_bit_set(iParam0, iParam1);
}

void func_24(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_25(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

void func_26(var uParam0)
{
	func_31(1667056592);
}

int func_27(var uParam0)
{
	func_35(uParam0);
	func_15(uParam0, 0, 1);
	func_36(&(uParam0->f_12), 2000);
	func_37(uParam0);
	func_38(1667056592);
	return 1;
}

void func_28(var uParam0)
{
	if (absi((Global_1296859->f_21 - func_39(uParam0))) > 3)
	{
		if (Global_1960148->f_5 == -1)
		{
			func_38(1667056592);
		}
	}
	if (func_40(&(uParam0->f_12)))
	{
		func_15(uParam0, 0, 1);
		func_15(uParam0, 1, 1);
	}
	if (func_14(uParam0, 2))
	{
		func_15(uParam0, 0, 1);
		func_15(uParam0, 1, 1);
	}
	if (func_14(uParam0, 0))
	{
		func_41(uParam0);
		func_15(uParam0, 0, 0);
	}
	if (func_14(uParam0, 1))
	{
		func_42(uParam0);
		func_15(uParam0, 1, 0);
	}
}

void func_29(var uParam0)
{
	func_26(uParam0);
	func_43(uParam0);
}

bool func_30(var uParam0)
{
	uParam0->f_3[0] = _0xd7db94ab78e8ebe4("", -2057449687);
	uParam0->f_3[1] = _databinding_add_ui_item_list_by_hash(&(uParam0->f_3[0]), -1963454052);
	uParam0->f_3.f_3[1] = _databinding_add_data_hash_by_hash(&(uParam0->f_3[0]), 269688700, 0);
	uParam0->f_3.f_3[2] = _databinding_add_data_hash_by_hash(&(uParam0->f_3[0]), -1762771384, 2);
	uParam0->f_3.f_3[0] = _databinding_add_data_string_by_hash(&(uParam0->f_3[0]), -208399039, "");
	uParam0->f_3.f_3[3] = _databinding_add_data_string_by_hash(&(uParam0->f_3[0]), 156969783, "");
	uParam0->f_3.f_3[4] = _databinding_add_data_bool_by_hash(&(uParam0->f_3[0]), -1016813653, 0);
	return true;
}

void func_31(int iParam0)
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
	func_44(Global_1960148);
	func_32(iParam0, 0);
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

void func_33(var uParam0, var uParam1)
{
	uParam0->f_16 = uParam1;
}

void func_34(int iParam0)
{
	switch (func_46(func_45(iParam0)))
	{
		case 1:
			func_47();
			break;
		case 0:
			func_48(func_45(iParam0));
			break;
	}
}

int func_35(var uParam0)
{
	if (!func_49(uParam0->f_3[1]))
	{
		return 0;
	}
	return 1;
}

void func_36(var uParam0, int iParam1)
{
	uParam0->f_3 = iParam1;
}

void func_37(var uParam0)
{
	func_50(uParam0);
	func_51(uParam0, 1800005748);
}

void func_38(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1960148->f_5 != -1 && Global_1960148->f_5 != iParam0)
	{
		func_31(Global_1960148->f_5);
	}
	Global_1960148->f_3 = Global_1296859->f_21;
	Global_1960148->f_5 = iParam0;
	Global_1960148->f_4 = &Global_1960148;
}

int func_39(var uParam0)
{
	return uParam0->f_16;
}

bool func_40(var uParam0)
{
	if (uParam0->f_3 <= 0)
	{
		if (func_52(uParam0))
		{
			func_53(uParam0);
		}
		return false;
	}
	if (!func_52(uParam0))
	{
		func_54(uParam0, 1);
		return true;
	}
	if (!func_55(uParam0) >= uParam0->f_3)
	{
		return false;
	}
	func_56(uParam0);
	return true;
}

void func_41(var uParam0)
{
	iVar1 = _0x97a3646645727f42(&iVar0);
	Var2.f_9 = -1591664384;
	iVar17 = 0;
	iVar18 = 0;
	iVar19 = 0;
	iVar16 = 0;
	while (iVar16 < iVar0)
	{
		if (!_0x82fa24c3d3fcd9b7(iVar1, iVar16, &Var2))
		{
		}
		iVar18 = Var2.f_11;
		if (!func_57(&Var2))
		{
		}
		else if (!func_58(Var2.f_9))
		{
		}
		else
		{
			iVar19 = 0;
			while (iVar19 < iVar18)
			{
				if (!func_59(uParam0, &Var2, iVar17))
				{
				}
				else
				{
					iVar17++;
					if (iVar17 >= 6)
					{
					}
					else
					{
						iVar19++;
					}
					if (iVar17 >= 6)
					{
					}
					else
					{
						iVar16++;
					}
					_0x42a2f33a1942e865(iVar1);
					if (iVar17 == 0)
					{
						if (func_60(uParam0, -1))
						{
							iVar17++;
						}
					}
					if (func_61(uParam0) > iVar17)
					{
						func_62(uParam0, iVar17);
					}
				}
			}
		}
	}
}

void func_42(var uParam0)
{
	func_50(uParam0);
}

void func_43(var uParam0)
{
	if (_databinding_is_data_id_valid(&(uParam0->f_3[0])))
	{
		_databinding_remove_data_entry(&(uParam0->f_3[0]));
	}
}

void func_44(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_3 = 0;
	uParam0->f_5 = -1;
	uParam0->f_2 = 1894345440;
}

int func_45(int iParam0)
{
	switch (iParam0)
	{
		case -1590110007:
			return 13;
		case -837599880:
			return 0;
		case 1600585035:
			return 4;
		case 1543764574:
			return 6;
		case -1555105668:
			return 3;
		case -299518648:
			return 10;
		case -298581576:
			return 1;
		case -1351908540:
			return 5;
		case -684353930:
			return 11;
		case 1357997983:
			return 12;
		case -16948145:
			return 8;
		case -1126561290:
			return 9;
		case -1801655026:
			return 2;
		case 1544789109:
			return 7;
		default:
			break;
	}
	return 0;
}

int func_46(int iParam0)
{
	if (_unlock_is_visible(func_63(&iParam0)))
	{
		return 1;
	}
	return 0;
}

void func_47()
{
	switch (func_64())
	{
		case 2:
			func_65();
			break;
		case 0:
			func_66(-1810.2f, -370.5f, 162.9f, 1120403456);
			break;
		case 1:
			func_66(Global_1051439->f_3745[39]->f_1, 1120403456);
			break;
	}
}

void func_48(int iParam0)
{
	switch (func_67(iParam0))
	{
		case 0:
			func_66(-1810.2f, -370.5f, 162.9f, 1120403456);
			break;
		case 1:
			func_66(Global_1051439->f_3745[39]->f_1, 1120403456);
			break;
		case 2:
			func_66(Global_1051439->f_3745[39]->f_1, 1120403456);
			break;
		case 3:
			func_68();
			func_69(17745825, 0, 0, 0, 1, 0, 0);
			break;
		case 4:
			func_65();
			break;
	}
}

bool func_49(var uParam0)
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

void func_50(var uParam0)
{
	switch (func_70())
	{
		case 0:
			if (func_71())
			{
				func_72(uParam0, -2094745301);
			}
			else
			{
				func_72(uParam0, 242987266);
			}
			break;
		case 2:
			func_72(uParam0, -107182257);
			break;
		case 1:
			func_72(uParam0, 1010851584);
			break;
		case 3:
			func_72(uParam0, -952890825);
			break;
	}
	func_74(uParam0, func_73(0));
	func_75(uParam0, func_71());
}

void func_51(var uParam0, int iParam1)
{
	Var0 = { func_76(iParam1) };
	func_77(uParam0, Var0, Var0.f_1);
}

bool func_52(var uParam0)
{
	return func_78(*uParam0, 1);
}

void func_53(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_54(var uParam0, bool bParam1)
{
	if (bParam1 || !func_52(uParam0))
	{
		func_56(uParam0);
	}
}

int func_55(var uParam0)
{
	if (!func_52(uParam0))
	{
		return 0;
	}
	if (func_79(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_80() - round((uParam0->f_1 * 1000f)));
}

void func_56(var uParam0)
{
	func_81(uParam0, 0f);
}

bool func_57(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_58(int iParam0)
{
	if (iParam0 == 1045621973)
	{
		return false;
	}
	return true;
}

bool func_59(var uParam0, var uParam1, int iParam2)
{
	Var0.f_9 = -1591664384;
	func_82(*uParam1, &Var0, 1, 0, -1);
	if (!func_83(Var0.f_4, 0))
	{
		return false;
	}
	if (func_84(Var0.f_4))
	{
		if (!func_85(uParam1, &uVar14))
		{
			return false;
		}
	}
	else if (func_86(Var0.f_4))
	{
		if (!func_87(uParam1, &uVar14))
		{
			return false;
		}
	}
	else
	{
		return false;
	}
	if (!func_88(uParam0, &uVar14, iParam2))
	{
		return false;
	}
	return true;
}

bool func_60(var uParam0, int iParam1)
{
	func_89(&Var0);
	Var36 = Var0.f_32;
	Var36.f_1 = Var0.f_33;
	if (!func_88(uParam0, &Var36, iParam1))
	{
		return false;
	}
	return true;
}

int func_61(var uParam0)
{
	return _databinding_get_array_count(&(uParam0->f_3[1]));
}

int func_62(var uParam0, int iParam1)
{
	if (!func_90(uParam0->f_3[1], iParam1))
	{
		return 0;
	}
	return 1;
}

int func_63(int iParam0)
{
	iVar0 = 0;
	switch (*iParam0)
	{
		case 0:
			iVar0 = get_hash_key("ROLE_NATURALIST_PROGRESSION_LEGENDARY_COUGAR_SIGHTING_MISSIONS");
			break;
		case 1:
			iVar0 = get_hash_key("ROLE_NATURALIST_PROGRESSION_LEGENDARY_BOAR_SIGHTING_MISSIONS");
			break;
		case 2:
			iVar0 = get_hash_key("ROLE_NATURALIST_PROGRESSION_LEGENDARY_BUCK_SIGHTING_MISSIONS");
			break;
		case 3:
			iVar0 = get_hash_key("ROLE_NATURALIST_PROGRESSION_LEGENDARY_FOX_SIGHTING_MISSIONS");
			break;
		case 4:
			iVar0 = get_hash_key("ROLE_NATURALIST_PROGRESSION_LEGENDARY_ALLIGATOR_SIGHTING_MISSIONS");
			break;
		case 5:
			iVar0 = get_hash_key("ROLE_NATURALIST_PROGRESSION_LEGENDARY_BEAVER_SIGHTING_MISSIONS");
			break;
		case 6:
			iVar0 = get_hash_key("ROLE_NATURALIST_PROGRESSION_LEGENDARY_WOLF_SIGHTING_MISSIONS");
			break;
		case 7:
			iVar0 = get_hash_key("ROLE_NATURALIST_PROGRESSION_LEGENDARY_MOOSE_SIGHTING_MISSIONS");
			break;
		case 8:
			iVar0 = get_hash_key("ROLE_NATURALIST_PROGRESSION_LEGENDARY_BISON_SIGHTING_MISSIONS");
			break;
		case 9:
			iVar0 = get_hash_key("ROLE_NATURALIST_PROGRESSION_LEGENDARY_ELK_SIGHTING_MISSIONS");
			break;
		case 10:
			iVar0 = get_hash_key("ROLE_NATURALIST_PROGRESSION_LEGENDARY_COYOTE_SIGHTING_MISSIONS");
			break;
		case 11:
			iVar0 = get_hash_key("ROLE_NATURALIST_PROGRESSION_LEGENDARY_PANTHER_SIGHTING_MISSIONS");
			break;
		case 12:
			iVar0 = get_hash_key("ROLE_NATURALIST_PROGRESSION_LEGENDARY_RAM_SIGHTING_MISSIONS");
			break;
		case 13:
			iVar0 = get_hash_key("ROLE_NATURALIST_PROGRESSION_LEGENDARY_BEAR_SIGHTING_MISSIONS");
			break;
	}
	return iVar0;
}

int func_64()
{
	if (func_91())
	{
		return 2;
	}
	if (!func_92(0) && !func_93(0))
	{
		return 0;
	}
	return 1;
}

void func_65()
{
	if (!_request_uiapp_transition_by_hash(1890312850, 1115220099))
	{
	}
}

void func_66(vector3 vParam0, int iParam3)
{
	_0xe0884c184728c75b(vParam0, iParam3);
	if (!_request_uiapp_transition_by_hash(1890312850, -1037357065))
	{
	}
}

int func_67(int iParam0)
{
	if (func_91())
	{
		return 4;
	}
	if (!func_92(0) && !func_93(0))
	{
		return 0;
	}
	if (func_92(0) && !func_93(0))
	{
		return 1;
	}
	if (_unlock_is_visible(func_94(&iParam0, 0)) && !_unlock_is_visible(func_95(&iParam0, 0)))
	{
		return 2;
	}
	return 3;
}

int func_68()
{
	if (!_is_app_active(29649618) && !_is_app_running(29649618))
	{
		return 0;
	}
	_close_app_by_hash(29649618);
	return 1;
}

int func_69(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (func_96())
	{
		Global_1940311->f_10894 = iParam0;
		func_97(iParam0, 1, -142743235, 0, 0);
		return 0;
	}
	if (!func_98(iParam0, bParam4))
	{
		return 0;
	}
	if (func_99(iParam0))
	{
		return 0;
	}
	if (_0xec7e480ff8bd0bed(Global_34) && !has_anim_event_fired(Global_34, 108107462))
	{
		return 0;
	}
	bVar28 = true;
	iVar29 = 1;
	Var0.f_4 = iParam3;
	Var0.f_5 = 1;
	if (iParam0 == -418848773)
	{
		_launch_app_with_entry("player_menu", "mp_moonshine_selection");
	}
	if (func_100(iParam0))
	{
		Global_1913502 = iParam0;
		Global_1913693 = get_game_timer();
		Global_1913503 = get_game_timer() + 3000;
		return 1;
	}
	if (func_101(iParam0, -2081717885))
	{
		func_102(iParam0, Var10, Var0, uVar27, bVar28, iVar29);
	}
	else if (func_101(iParam0, -1909684001))
	{
		func_103(iParam0, Var10, Var0, bVar28, iVar29);
	}
	else if (func_101(iParam0, 587975446))
	{
		func_104(iParam0, Var10);
	}
	else if (func_101(iParam0, 566155764))
	{
		if (!func_105(iParam0))
		{
			return 0;
		}
	}
	if (func_106(iParam0, bParam5, bParam6, bParam1))
	{
		Global_1913502 = iParam0;
		Global_1913693 = get_game_timer();
		return 1;
	}
	if (func_101(iParam0, -1227898937))
	{
		Var0.f_2 = iParam0;
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "doc_newspaper", 32);
		Var10.f_14 = 1024;
		Var10.f_15 = 1;
		func_107(Var10, 1);
		iVar29 = 0;
		bVar28 = false;
	}
	else if ((func_101(iParam0, -1472964441) || func_101(iParam0, -228153877)) || func_101(iParam0, 566155764))
	{
	}
	else if (func_101(iParam0, 1919582297))
	{
		if (((func_108() || is_ped_active_in_scenario(Global_34, 1)) || _0x0c3cb2e600c8977d(Global_34, 1)) || !is_ped_on_foot(Global_34))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 1929383243:
			case 2036955137:
				StringCopy(&(Var10.f_10), "item_bait_herbivore", 32);
				break;
			case -1635450397:
			case 1831763320:
				StringCopy(&(Var10.f_10), "item_bait_predator", 32);
				break;
			case -252071901:
				StringCopy(&(Var10.f_10), "item_legendary_animal_pheromone", 32);
				break;
		}
		Var0.f_1 = iParam0;
		Var0.f_3 = bParam1;
		Var10 = { Var0 };
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		func_107(Var10, 0);
		bVar28 = false;
	}
	else if (func_109(iParam0))
	{
		Var0.f_3 = 0;
		Var0.f_1 = iParam0;
		Var0.f_2 = 0;
		Var0 = func_110(Global_1071686->f_28357.f_11.f_67);
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "net_player_wheel_item_use", 32);
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		func_107(Var10, 0);
		iVar29 = 1;
	}
	else if (func_111(iParam0) == -1037537535)
	{
		if (!func_112(iParam0))
		{
			func_113("SI_ITEM_OUTFIT_IS_LOCKED", 10000, 0, 0, 0, 1);
			return iVar29;
		}
		iVar32 = func_114(iParam0);
		switch (iVar32)
		{
			case -2061583405:
			case -999503751:
			case -525676072:
				bVar30 = func_115();
				break;
			default:
				bVar30 = true;
				break;
		}
		if (!bVar30)
		{
			if (func_116(player_id()))
			{
				func_113("SI_ITEM_USE_OUTFITS_STATIONARY", 10000, 0, 0, 0, 1);
			}
			else
			{
				func_113("SI_ITEM_USE_OUTFITS_NEAR_HORSE", 10000, 0, 0, 0, 1);
			}
			return iVar29;
		}
		if (iVar32 == -999503751)
		{
			if (Global_1952637->f_1675 != iParam0)
			{
				func_117(20, iParam0, 0, 0, 0);
			}
		}
		else
		{
			switch (iVar32)
			{
				case -525676072:
				case -68128151:
				case 81053684:
					func_118(iParam0, 0);
					return iVar29;
				case -2061583405:
					func_119(iParam0);
					func_117(35, 0, 0, 0, 0);
					return 1;
				case -1719060085:
					if (iParam0 == &Global_1952637->f_1675.f_1[23])
					{
						func_120(Global_34, 260271636, 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
						_0xcb9401f918cb0f75(Global_34, "PlayUnequipGlovesFidget", 1, 15);
						func_121(iParam0, 0, 0);
						return 1;
					}
					else
					{
						_0xcb9401f918cb0f75(Global_34, "PlayEquipGlovesFidget", 1, 15);
						func_121(iParam0, 1, 0);
					}
					break;
				case 119907797:
				case 1388798186:
					if (iParam0 == &Global_1952637->f_1675.f_1[10])
					{
						func_120(Global_34, &(Global_1952637->f_83[10]), 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
						func_121(iParam0, 0, 0);
						return 1;
					}
					else
					{
						func_121(iParam0, 1, 0);
						func_122(-2061583405, 0);
						if (iVar32 == 1388798186)
						{
							func_122(119907797, 0);
						}
						else if (iVar32 == 119907797)
						{
							func_122(1388798186, 0);
						}
					}
					break;
				default:
					if (!func_101(iParam0, 160827531))
					{
					}
					else
					{
						func_118(iParam0, 0);
					}
					break;
			}
			func_120(Global_34, iParam0, 0, -358215195, 1, 1, 1, 0, 0, 1, 1);
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1259508039:
				func_123(1);
				break;
			case -727924611:
				if (func_124() != -1)
				{
				}
				else if (!func_112(iParam0))
				{
					func_113("SI_ITEM_WARDROBE_IS_LOCKED", 10000, 0, 0, 0, 1);
				}
				else
				{
					bVar30 = func_125(7, iParam0);
					bVar31 = func_125(1, iParam0);
					if (bVar31 && !bVar30)
					{
						if (does_blip_exist(Global_17332))
						{
							remove_blip(&Global_17332);
						}
						Global_17332 = _0x3e593df9c2962ec6(-1925605092);
						_blip_set_modifier(Global_17332, 673950256);
						func_113(_create_var_string(0, -1680440926, Global_17332), 10000, 0, 0, 0, 1);
					}
					else if (!func_126(7))
					{
						func_113("SI_ITEM_USE_WARDROBE_NO_SADDLE", 10000, 0, 0, 0, 1);
					}
					else if (!bVar30)
					{
						if (func_128(Global_34, func_127(7), 0))
						{
							func_113("SI_ITEM_USE_WARDROBE_STATIONARY", 10000, 0, 0, 0, 1);
						}
						else
						{
							if (does_blip_exist(Global_17332))
							{
								remove_blip(&Global_17332);
							}
							Global_17332 = _0x3e593df9c2962ec6(-1925605092);
							_blip_set_modifier(Global_17332, 673950256);
							func_113(_create_var_string(0, -482898802, Global_17332), 10000, 0, 0, 0, 1);
						}
					}
					else
					{
						iVar26 = 1338309244;
						if (_get_number_of_references_of_script_with_name_hash(iVar26) > 0)
						{
						}
						else
						{
							Var0.f_1 = iParam0;
							Var0.f_2 = 51499045;
							Var10 = { Var0 };
							StringCopy(&(Var10.f_10), "player_wardrobe", 32);
							Var10.f_14 = 1024;
							Var10.f_15 = 1;
							func_107(Var10, 0);
						}
						Jump @2406; //curOff = 1788
						func_129();
						Jump @2406; //curOff = 1795
						if (func_112(-1838434463))
						{
							if (func_130(1, 1))
							{
								func_131(2, 1);
							}
							else if (func_132(1))
							{
								func_113("GC_SELECT_HELP_FOLLOWER_DEAD", 10000, 0, 0, 0, 1);
							}
							else if (func_133())
							{
								func_113("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, 1);
							}
							else
							{
								if (_0x424b17a7dc5c90bc(player_id()))
								{
									func_134();
								}
								else
								{
									func_113("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
								}
								func_135(_0x901e0dc25080c8b9(player_id()));
							}
						}
						else if (!_0x424b17a7dc5c90bc(player_id()))
						{
							func_113("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
							func_135(_0x901e0dc25080c8b9(player_id()));
						}
						else if (func_133())
						{
							func_113("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, 1);
						}
						else
						{
							func_113("GC_SELECT_HELP_DISABLED", 10000, 0, 0, 0, 1);
						}
						Jump @2406; //curOff = 2016
						if (!_is_weapon_binoculars(func_136(Global_34, 1, 0, 0)))
						{
							set_current_ped_weapon(Global_34, iParam0, false, 0, false, false);
						}
						return 1;
						Jump @2406; //curOff = 2054
						if (func_136(Global_34, 1, 0, 0) != iParam0)
						{
							set_current_ped_weapon(Global_34, iParam0, false, 0, false, false);
						}
						return 1;
						Jump @2406; //curOff = 2089
						Jump @2406; //curOff = 2092
						func_137(535, 1);
						Jump @2406; //curOff = 2103
						func_138(1);
						Jump @2406; //curOff = 2111
						_task_item_interaction(player_ped_id(), -569063887, 1928812891, 1, 0, -1082130432);
						bVar28 = false;
						return 1;
						Jump @2406; //curOff = 2146
						_launch_app_by_hash(-76766502);
						if (_get_number_of_references_of_script_with_name_hash(-76766502) > 0)
						{
						}
						else
						{
							Var0.f_1 = iParam0;
							Var10 = { Var0 };
							StringCopy(&(Var10.f_10), "collectors_bag", 32);
							Var10.f_14 = 1024;
							func_107(Var10, 0);
						}
						return 1;
						Jump @2406; //curOff = 2222
						_close_app_by_hash(-4058091);
						if (get_hash_of_this_script_name() == 1349139153)
						{
							_launch_app_by_hash_with_entry(1976336482, 1261159557);
						}
						else
						{
							_launch_app_by_hash(1976336482);
						}
						if (_get_number_of_references_of_script_with_name_hash(698150113) > 0)
						{
						}
						else
						{
							Var0.f_1 = iParam0;
							Var0.f_3 = !get_hash_of_this_script_name() != 1349139153;
							Var10 = { Var0 };
							StringCopy(&(Var10.f_10), "field_guide", 32);
							Var10.f_14 = 1024;
							func_107(Var10, 0);
						}
						return 1;
						Jump @2406; //curOff = 2352
						if ((*Global_1138048)[player_id()]->f_4)
						{
							func_113("NET_WCAMP_OWNER_CAMP_RUNNING", 10000, 0, 0, 0, 1);
						}
						else
						{
							func_139();
						}
						return 1;
						Jump @2406; //curOff = 2397
						iVar29 = 0;
					}
				}
				if (bVar28)
				{
					_0xbfff81e12a745a5f();
				}
				return iVar29;
				default:
					break;
		}
	}
}

int func_70()
{
	if (network_does_tunable_exist(-475019843, func_140(1656173034)) && network_access_tunable_bool(-475019843, func_140(1656173034)))
	{
		return 0;
	}
	else if (network_does_tunable_exist(-475019843, func_140(-537144215)) && network_access_tunable_bool(-475019843, func_140(-537144215)))
	{
		return 2;
	}
	else if (network_does_tunable_exist(-475019843, func_140(1629055295)) && network_access_tunable_bool(-475019843, func_140(1629055295)))
	{
		return 1;
	}
	else if (network_does_tunable_exist(-475019843, func_140(965428371)) && network_access_tunable_bool(-475019843, func_140(965428371)))
	{
		return 3;
	}
	return 1;
}

bool func_71()
{
	iVar0 = func_141();
	if (!func_142(iVar0))
	{
		return false;
	}
	if (!_0xfbe782b3165ac8ec(iVar0))
	{
		return false;
	}
	return true;
}

void func_72(var uParam0, int iParam1)
{
	func_144(uParam0, func_143(iParam1));
}

char* func_73(int iParam0)
{
	return func_146(func_145(iParam0));
}

void func_74(var uParam0, char* sParam1)
{
	_databinding_write_data_string(&(uParam0->f_3.f_3[3]), _create_var_string(2, func_147(-600593841), sParam1));
}

void func_75(var uParam0, bool bParam1)
{
	_databinding_write_data_bool(&(uParam0->f_3.f_3[4]), bParam1);
}

struct<2> func_76(int iParam0)
{
	Var2 = func_148();
	Var2.f_3 = func_149(0);
	Var2.f_4 = iParam0;
	Var2.f_2 = 11;
	if (!_datafile_get_hash(&Var0, &Var2))
	{
		return func_150(iParam0);
	}
	Var2.f_2 = 13;
	if (!_datafile_get_hash(&(Var0.f_1), &Var2))
	{
		return Var0;
	}
	return Var0;
}

void func_77(var uParam0, var uParam1, var uParam2)
{
	_databinding_write_data_hash_string(&(uParam0->f_3.f_3[1]), uParam1);
	_databinding_write_data_hash_string(&(uParam0->f_3.f_3[2]), uParam2);
}

bool func_78(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_79(var uParam0)
{
	return func_78(*uParam0, 2);
}

int func_80()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

void func_81(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_151() - fParam1);
	func_152(uParam0, 1);
	func_153(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_82(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_154(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

bool func_83(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_84(int iParam0)
{
	return func_114(iParam0) == -126813555;
}

bool func_85(var uParam0, var uParam1)
{
	if (!func_155(uParam0, &uVar0))
	{
		return false;
	}
	if (!func_156(uParam0, uParam1))
	{
		return false;
	}
	return true;
}

bool func_86(int iParam0)
{
	return func_114(iParam0) == 1946043663;
}

bool func_87(var uParam0, var uParam1)
{
	if (!func_155(uParam0, &iVar0))
	{
		return false;
	}
	if (!func_156(uParam0, uParam1))
	{
		return false;
	}
	if (func_157(iVar0))
	{
		func_158(&Var1);
		uParam1->f_1 = Var1.f_33;
		*uParam1 = Var1.f_32;
		uParam1->f_2 = 1;
	}
	return true;
}

bool func_88(var uParam0, char[4] cParam1, int iParam2)
{
	if (!_databinding_is_data_id_valid(&(uParam0->f_3[1])))
	{
		return false;
	}
	if (iParam2 < -1)
	{
		return false;
	}
	iVar0 = _databinding_get_array_count(&(uParam0->f_3[1]));
	if (iParam2 == -1 || iParam2 >= iVar0)
	{
		StringCopy(&cVar1, "offer_item_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		if (!func_159(&uVar9, uParam0->f_3[1], cVar1, cParam1))
		{
			return false;
		}
		_databinding_insert_ui_item_to_list_from_context_string_alias(&(uParam0->f_3[1]), -1, "coupon_small_entry", &(uVar9[0]));
	}
	else
	{
		if (!func_160(uParam0, iParam2, &uVar16))
		{
			return false;
		}
		if (!func_161(&uVar16, cParam1))
		{
			return false;
		}
	}
	return true;
}

void func_89(char* sParam0)
{
	StringCopy(sParam0, "COUPON_OFFER_NO_VALUE", 128);
	StringCopy(&(sParam0->f_16), "COUPON_OFFER_NO_VALUE_DESC", 128);
	sParam0->f_34 = get_hash_key("COUPON_OFFER_NO_VALUE");
	sParam0->f_35 = get_hash_key("mp_hub_coupons");
	sParam0->f_32 = get_hash_key("COUPON_OFFER_NO_VALUE");
	sParam0->f_33 = get_hash_key("mp_hub_coupons");
}

bool func_90(var uParam0, int iParam1)
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

bool func_91()
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { func_162() };
	if (!func_163(Var0))
	{
		return false;
	}
	switch (func_164(Var0))
	{
		case -1485083887:
		case -1007768440:
		case -888098333:
		case -862235034:
		case -683590526:
		case -526464326:
		case -390920703:
		case -171479703:
		case 1036678516:
		case 1200532109:
		case 1292291919:
		case 1559697571:
		case 1848308415:
		case 1882251776:
			return true;
		default:
			break;
	}
	return false;
}

int func_92(int iParam0)
{
	iVar0 = func_165(iParam0);
	if (iVar0 != 0)
	{
		return func_166(iVar0);
	}
	return 0;
}

bool func_93(int iParam0)
{
	iVar0 = func_167(iParam0);
	if (func_83(iVar0, 0))
	{
		if (_0xe787f05dfc977bde(func_168(1), iVar0, 0) > 0)
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

int func_94(int iParam0, int iParam1)
{
	switch (*iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
				case 1:
					return 458679075;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -1848813677;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -196458416;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -463663296;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -1084113577;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
				case 1:
					return 1796670491;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -646307557;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -2109368060;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
				case 1:
					return 326651247;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -405566878;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
				case 1:
					return 29257535;
				default:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
				case 1:
					return 78935770;
				default:
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
				case 1:
					return 970130440;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
				case 1:
					return 477228254;
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_95(int iParam0, int iParam1)
{
	switch (*iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -1089915990;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -773408572;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -2082859740;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -889608768;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -909138717;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
				case 1:
					return 1835385888;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -771537204;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -366807494;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
				case 1:
					return 1843292837;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -804810882;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
				case 1:
					return 189635081;
				default:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -2001092856;
				default:
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
				case 1:
					return 1371968565;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
				case 1:
					return 1114581963;
				default:
					break;
			}
			break;
	}
	return 0;
}

bool func_96()
{
	if (Global_1940311->f_36 == 3)
	{
		return true;
	}
	return false;
}

bool func_97(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_83(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_169(iParam0, -455129387);
	if (iVar0 != 0)
	{
		return func_170(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var1 = { func_171(iParam0, bParam4, 0) };
	Var6 = { func_172(iParam0, Var1, Var1.f_4, bParam4) };
	return func_173(iParam0, &Var6, &Var1, iParam1, iParam2, bParam3, bParam4);
}

bool func_98(int iParam0, bool bParam1)
{
	if (!func_83(iParam0, 0))
	{
		return false;
	}
	if (Global_1940311->f_7)
	{
		return false;
	}
	if (((iParam0 != 1259508039 && iParam0 != -1838434463) && iParam0 != 2019377485) && bParam1)
	{
		iVar0 = func_174(iParam0);
		if (func_101(iParam0, 1147021565))
		{
			iVar0 |= 64;
		}
		if (!func_175(1, iVar0))
		{
			return false;
		}
	}
	if (iParam0 == -1448210800 || iParam0 == -2035110427)
	{
		if (func_176())
		{
			return false;
		}
	}
	if (!func_177(iParam0, 1))
	{
		_0xbfff81e12a745a5f();
		return false;
	}
	return true;
}

bool func_99(int iParam0)
{
	if (func_109(iParam0))
	{
		return false;
	}
	if (!_0x3d10d7179d7034af(func_168(0), iParam0, func_178(0)))
	{
		return false;
	}
	switch (iParam0)
	{
		case -1838434463:
		case 2019377485:
			func_179(1, 1);
			_0x565eaa726b2ce3b7(0);
			return true;
		case 1807503187:
			if (func_180() != -1)
			{
				func_113(func_181(), 10000, 0, 0, 0, 1);
				func_182(-1);
			}
			break;
	}
	return true;
}

bool func_100(int iParam0)
{
	if (iParam0 == 17745825)
	{
		StringCopy(&(Var0.f_10), "legendary_animal_map", 32);
		Var0.f_14 = 512;
		func_107(Var0, 0);
		return true;
	}
	return false;
}

int func_101(int iParam0, int iParam1)
{
	if (!func_83(iParam0, 0))
	{
		return func_184(func_183(iParam0), iParam1);
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

void func_102(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, int iParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, bool bParam28, int iParam29)
{
}

void func_103(int iParam0, var uParam1, var uParam2, bool bParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, bool bParam27, int iParam28)
{
}

void func_104(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16)
{
}

bool func_105(int iParam0)
{
	if (func_124() == 0 && func_186(func_185(iParam0), 1, 0) != 0)
	{
		func_113("NET_ALOOT_HELP_OPEN_FAIL", 10000, 0, 0, 0, 1);
		return false;
	}
	return true;
}

bool func_106(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_187(iParam0, bParam1, 0, 0, -1082130432))
	{
		Global_1913503 = get_game_timer() + 3000;
		return true;
	}
	switch (func_188(iParam0, -949239683))
	{
		case 881567935:
			if (!bParam1)
			{
				_task_item_interaction(player_ped_id(), iParam0, 1245009814, 1, 0, -1082130432);
				return true;
			}
			break;
		case 845883585:
			if (!bParam1)
			{
				if (!func_189())
				{
					if (func_190(&Global_34))
					{
						_task_item_interaction(player_ped_id(), iParam0, 616992297, 1, 0, -1082130432);
					}
					else
					{
						_task_item_interaction(player_ped_id(), iParam0, -903856906, 1, 0, -1082130432);
					}
					return true;
				}
				else
				{
					func_113("SI_ITEM_USE_POMADE_IS_ALREADY_APPLIED", 10000, 0, 0, 0, 1);
				}
			}
			break;
		case -1239610997:
			if (!bParam2)
			{
				_task_item_interaction(player_ped_id(), iParam0, 280850861, 1, 0, -1082130432);
			}
			else
			{
				_task_item_interaction(player_ped_id(), iParam0, 1087288635, 1, 0, 0f);
				if (_0xa24c1d341c6e0d53(1, 0, 0))
				{
					animpostfx_play("CamTransition01");
				}
			}
			Global_1913503 = get_game_timer() + 3000;
			return true;
		case 632545869:
			if (!bParam2)
			{
				_task_item_interaction(player_ped_id(), iParam0, -268993254, 1, 0, -1082130432);
			}
			else
			{
				_task_item_interaction(player_ped_id(), iParam0, -1401979141, 1, 0, 0f);
				if (_0xa24c1d341c6e0d53(1, 0, 0))
				{
					animpostfx_play("CamTransition01");
				}
			}
			Global_1913503 = get_game_timer() + 3000;
			return true;
		case -793205628:
			if (!bParam2)
			{
				_task_item_interaction(player_ped_id(), iParam0, 1834614641, 1, 0, -1082130432);
			}
			else
			{
				_task_item_interaction(player_ped_id(), iParam0, 136592566, 1, 0, 0f);
				if (_0xa24c1d341c6e0d53(1, 0, 0))
				{
					animpostfx_play("CamTransition01");
				}
			}
			Global_1913503 = get_game_timer() + 3000;
			return true;
		case 1451036371:
			if (!bParam1)
			{
				if (is_ped_in_combat(Global_34, 0) || _0x5407b7288d0478b7(Global_34, 0) > 0)
				{
					func_191(iParam0);
				}
				else
				{
					func_192(iParam0);
				}
				return true;
			}
			break;
		case -273840653:
			if (!bParam1)
			{
				func_193(iParam0, 1);
				return true;
			}
			break;
		case 999632878:
			if (!bParam1)
			{
				func_194(iParam0, 1);
				return true;
			}
			break;
		case 1130235258:
			if (!bParam1)
			{
				func_195(iParam0);
				return true;
			}
			break;
		case -1915958659:
			if (!bParam1)
			{
				if (is_ped_in_combat(Global_34, 0) || _0x5407b7288d0478b7(Global_34, 0) > 0)
				{
					func_191(iParam0);
				}
				else
				{
					func_196(iParam0);
				}
				return true;
			}
			break;
		case 1859991422:
			if (!bParam1)
			{
				if (is_ped_in_combat(Global_34, 0) || _0x5407b7288d0478b7(Global_34, 0) > 0)
				{
					func_191(iParam0);
				}
				else
				{
					func_197(iParam0);
				}
				return true;
			}
			break;
		case 1891031775:
			if (!bParam1)
			{
				if (is_ped_in_combat(Global_34, 0) || _0x5407b7288d0478b7(Global_34, 0) > 0)
				{
					func_191(iParam0);
				}
				else
				{
					func_198(iParam0);
				}
				return true;
			}
			break;
		case -809056541:
			if (!bParam1)
			{
				if (is_ped_in_combat(Global_34, 0) || _0x5407b7288d0478b7(Global_34, 0) > 0)
				{
					func_191(iParam0);
				}
				else
				{
					func_199(iParam0);
				}
				return true;
			}
			break;
		case -1337515701:
			if (!bParam1)
			{
				_task_item_interaction(player_ped_id(), iParam0, -1893721798, 1, 0, -1082130432);
				return true;
			}
			break;
		case -262371497:
			if (!bParam1)
			{
				func_200(iParam0);
				return true;
			}
			break;
		case 1443104131:
			if (!bParam1)
			{
				func_201(iParam0);
				return true;
			}
			break;
		case -1919515848:
			if (!bParam1)
			{
				func_202(iParam0);
				return true;
			}
			break;
		case 89124942:
			if (!bParam1)
			{
				func_191(iParam0);
				return true;
			}
			break;
		case 238865292:
			if (!bParam1)
			{
				func_203(iParam0, bParam3);
				return true;
			}
			break;
		case 1177617310:
			if (!bParam1)
			{
				func_204(iParam0, bParam3);
				return true;
			}
			break;
	}
	return false;
}

void func_107(struct<16> Param0, int iParam16)
{
	if (is_string_null_or_empty(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1939493->f_161 >= 10)
	{
		return;
	}
	if (!func_205(iParam16, 2))
	{
		if (_get_number_of_references_of_script_with_name_hash(get_hash_key(&(Param0.f_10))) > 0 || func_206(&(Param0.f_10)))
		{
			return;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (is_string_null_or_empty(&((*Global_1939493)[iVar0]->f_10)))
		{
			*(*Global_1939493)[iVar0] = { Param0 };
			Global_1939493->f_161++;
			func_207(iParam16);
			return;
		}
		iVar0++;
	}
}

bool func_108()
{
	return Global_1893587 & 2 != 0;
}

bool func_109(int iParam0)
{
	if (!func_83(iParam0, 0))
	{
		return false;
	}
	if (func_111(iParam0) == -1650247667)
	{
		return true;
	}
	return false;
}

int func_110(int iParam0)
{
	return func_208(iParam0);
}

int func_111(int iParam0)
{
	if (!func_83(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_112(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (func_111(iParam0) == -1037537535)
	{
		if (func_114(iParam0) == -999503751)
		{
		}
	}
	return true;
}

var func_113(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_114(int iParam0)
{
	if (!func_83(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_115()
{
	iVar0 = player_id();
	iVar1 = _0xf49f14462f0ae27c(iVar0);
	iVar2 = get_player_ped(iVar0);
	if (!does_entity_exist(iVar1))
	{
		return 0;
	}
	if (is_entity_dead(iVar1) || is_ped_injured(iVar1))
	{
		return 0;
	}
	if (is_ped_swimming(iVar2) || is_ped_swimming(iVar1))
	{
		return 0;
	}
	if (is_ped_on_mount(iVar2))
	{
		if (_get_rider_of_mount(iVar1, false) != iVar2)
		{
			return 0;
		}
	}
	vVar3 = { get_entity_coords(iVar2, false, false) };
	vVar6 = { get_entity_coords(iVar1, false, false) };
	if (get_distance_between_coords(vVar3, vVar6, true) < 2f && _0xd543d3a8fde4f185(iVar2, iVar1))
	{
		return 1;
	}
	return 0;
}

bool func_116(int iParam0)
{
	iVar0 = get_player_ped(iParam0);
	iVar1 = _0xf49f14462f0ae27c(iParam0);
	if (is_ped_on_mount(iVar0))
	{
		if (_get_rider_of_mount(iVar1, false) == iVar0)
		{
			return true;
		}
	}
	return false;
}

void func_117(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_209(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_210(Var0);
}

int func_118(int iParam0, bool bParam1)
{
	if (!func_211())
	{
		return 0;
	}
	if (!func_212(iParam0))
	{
		return 0;
	}
	if (func_213(iParam0))
	{
		iVar0 = 0;
		if ((func_114(iParam0) == 81053684 || func_101(iParam0, 160827531)) && !func_101(iParam0, -1303648999))
		{
			if (bParam1)
			{
				func_214(&iVar0, 2);
			}
		}
		return func_215(iParam0, iVar0);
	}
	return 0;
}

void func_119(int iParam0)
{
	iVar0 = 10;
	iVar1 = &Global_1952637->f_1675.f_1[iVar0];
	if (iVar1 == iParam0)
	{
		_0xcb9401f918cb0f75(Global_34, "PlayUnequipHatFidget", 1, 15);
		func_120(Global_34, -2065815962, 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
		func_121(iParam0, 0, 0);
		return;
	}
	_0xcb9401f918cb0f75(Global_34, "PlayEquipHatFidget", 1, 15);
	func_120(Global_34, iParam0, 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
	if (func_216(32768))
	{
		knock_off_ped_prop(Global_34, false, true, false, true);
		func_217();
		func_209(128);
		return;
	}
	if (iVar1 == &Global_1952637->f_83[iVar0])
	{
		func_121(iParam0, 1, 0);
		return;
	}
	if (func_218(-2061583405, 0))
	{
		if (func_219(iVar1))
		{
			func_121(iVar1, 0, 0);
		}
		else
		{
			func_220(iVar1, 1, 1, 0, 0, 0);
		}
		func_121(iParam0, 1, 0);
		return;
	}
	if (func_219(iVar1))
	{
		func_121(iVar1, 0, 0);
		func_121(iParam0, 1, 0);
	}
	else if (func_219(iParam0))
	{
		if (iParam0 != func_221(0))
		{
			func_222(iParam0, iVar1, 0, 0, 0);
			func_121(iParam0, 0, 0);
			func_121(iVar1, 0, 0);
		}
		else
		{
			knock_off_ped_prop(Global_34, false, true, false, true);
			func_209(128);
			func_121(iParam0, 1, 0);
		}
	}
}

int func_120(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_171(iParam1, 1, 0) };
		iParam3 = func_223(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_225(iParam1, iParam2, func_224(iParam3, 1), bParam4, 1, 0, 1))
	{
		return 0;
	}
	func_226(1, bParam5, bParam9, 1);
	if (bParam10)
	{
		if (func_227(iParam1, 0))
		{
			func_228(&(Global_1952637->f_1675.f_1[func_224(iParam3, 1)]), 0, 0);
		}
		else
		{
			func_228(iParam1, 1, 0);
		}
	}
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam7 && iParam1 != &Global_1952637->f_83[func_224(iParam3, 1)])
			{
				func_117(27, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_216(32768))
			{
				func_217();
				func_117(21, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		return 1;
	}
	iVar5 = func_229(iParam3);
	if (bParam4)
	{
		iVar5 |= 2;
	}
	if (bParam8)
	{
		func_230(&iVar5, 4);
	}
	if (is_ped_a_player(iParam0))
	{
		func_117(19, 0, iVar5, 0, 0);
	}
	else
	{
		iVar5 |= 1;
		func_117(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_121(int iParam0, int iParam1, bool bParam2)
{
	Var0 = { func_171(iParam0, bParam2, 0) };
	Var5 = { func_172(iParam0, Var0, Var0.f_4, bParam2) };
	if (func_231(iParam0, Var0, Var0.f_4, bParam2, 0, 0) <= 0)
	{
		return;
	}
	_0x65a5f70f4a292ebe(func_168(bParam2), &Var5, iParam1);
}

int func_122(int iParam0, bool bParam1)
{
	iVar2 = 0;
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar7))
	{
		return 0;
	}
	Var8 = { func_172(889965687, func_232(bParam1), 1034665895, bParam1) };
	iVar0 = 0;
	while (iVar0 < Global_1952637->f_3334.f_26)
	{
		iVar1 = &Global_1952637->f_3334[iVar0];
		if (func_114(iVar1) == iParam0 || (iParam0 == 81053684 && func_101(iVar1, 160827531)))
		{
			Var3 = { func_172(iVar1, Var8, iVar7, bParam1) };
			if (_0x70e3a884ed000a01(func_168(bParam1), &Var3))
			{
				iVar2 = iVar1;
				_0x65a5f70f4a292ebe(func_168(bParam1), &Var3, 0);
			}
		}
		iVar0++;
	}
	return iVar2;
}

void func_123(bool bParam0)
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

int func_124()
{
	return Global_1572887->f_13;
}

int func_125(int iParam0, int iParam1)
{
	iParam0 = func_233(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	iVar0 = func_127(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return 0;
	}
	if (is_ped_swimming(Global_34) || is_ped_swimming(iVar0))
	{
		return 0;
	}
	if (is_ped_on_mount(Global_34))
	{
		if (_get_rider_of_mount(iVar0, false) == Global_34)
		{
			if (iParam1 == -727924611)
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (func_234(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_126(int iParam0)
{
	iParam0 = func_233(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	iVar0 = func_127(iParam0);
	if (!does_entity_exist(iVar0))
	{
		if (iParam0 == func_235())
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

int func_127(int iParam0)
{
	iParam0 = func_233(iParam0);
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

bool func_128(int iParam0, int iParam1, bool bParam2)
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

void func_129()
{
	if (func_236())
	{
		return;
	}
	if (func_237(8))
	{
		switch (Global_1051439->f_3629)
		{
			case 0:
				if (func_237(16))
				{
					if (is_ped_using_any_scenario(Global_34))
					{
						_0xf1c03a5352243a30(Global_34);
						clear_ped_tasks(Global_34, 1, 0);
					}
					func_238(16);
				}
				func_239(1);
				break;
			case 1:
				if (is_ped_using_any_scenario(Global_34))
				{
				}
				else
				{
					func_238(8);
					func_239(0);
				}
		}
		return;
	}
	if (func_240())
	{
		_task_item_interaction(player_ped_id(), 1807503187, -2005122350, 1, 0, -1082130432);
		Global_1915715->f_22504.f_1 = 1;
		Global_1051439->f_43 = 0;
		func_241();
	}
	else
	{
		iVar0 = func_243(func_242());
		if (iVar0 != -1)
		{
			func_113(func_181(), 10000, 0, 0, 0, 1);
			Global_1051439->f_3628 = 0;
			Global_1051439->f_3629 = 0;
			func_244(0);
			func_182(-1);
		}
	}
}

bool func_130(int iParam0, int iParam1)
{
	if ((!func_245() || !network_is_game_in_progress()) || !network_is_session_active())
	{
		return false;
	}
	if (!func_246(16))
	{
		return false;
	}
	if (func_247())
	{
		if (!_unlock_is_unlocked(-75008140))
		{
			return false;
		}
	}
	if (!func_248())
	{
		return false;
	}
	if (func_249(16))
	{
		return false;
	}
	iVar0 = _0x901e0dc25080c8b9(player_id());
	if (iParam1 == 1 && (!_0xd6f6acf4392187fb(iVar0) || !_0x424b17a7dc5c90bc(player_id())))
	{
		return false;
	}
	if (iParam0 == 1 && func_250(Global_1137047->f_8, 1))
	{
		return false;
	}
	if (func_133())
	{
		return false;
	}
	return true;
}

int func_131(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_251();
	}
	if (!func_252(bParam1, bParam1, !bParam1))
	{
		return 0;
	}
	func_253(iParam0);
	Global_1896738->f_386 = 1;
	Global_1896738->f_387 = bParam1;
	return 1;
}

bool func_132(int iParam0)
{
	return func_250(Global_1137047->f_8, iParam0);
}

bool func_133()
{
	iVar0 = func_254(player_id());
	if (iVar0 != -1)
	{
		if ((*Global_1131196)[iVar0]->f_18.f_1 != 0 && func_250((*Global_1131196)[iVar0]->f_18, 1))
		{
			return true;
		}
	}
	return false;
}

void func_134()
{
	Var0 = { func_255(0) };
	if (func_163(Var0))
	{
		if (Var0 == 6)
		{
			iVar2 = func_256(player_id(), 0);
			if (iVar2 != -1)
			{
				if (func_257(iVar2) == -785841056)
				{
					func_113("GC_SELECT_FAIL_POSSE_VERSUS", 10000, 0, 0, 0, 1);
				}
				else if (iVar2 == 1)
				{
					func_113("GC_SELECT_FAIL_CHALLENGE", 10000, 0, 0, 0, 1);
				}
				else
				{
					func_113("GC_SELECT_FAIL_EVENT", 10000, 0, 0, 0, 1);
				}
			}
		}
		else
		{
			func_113("GC_SELECT_GENERAL_FAIL", 10000, 0, 0, 0, 1);
		}
	}
}

void func_135(int iParam0)
{
	Var0.f_12 = -1;
	Var0.f_12.f_1 = -1;
	Var0.f_14 = 255;
	Var0.f_15 = 255;
	Var0.f_6 = iParam0;
	Var0.f_4 = 56;
	func_259(Var0, func_258(0, 8), 0, 0);
}

int func_136(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

void func_137(int iParam0, bool bParam1)
{
	func_260(iParam0, &iVar0, &iVar1);
	if (!func_261(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_262(iVar0, iVar1);
}

void func_138(bool bParam0)
{
	if ((func_124() != -1 || !bParam0) || func_263(Global_34))
	{
		func_264();
		return;
	}
}

void func_139()
{
	iVar0 = player_id();
	func_265(1, iVar0);
}

int func_140(int iParam0)
{
	Var0 = func_148();
	Var0.f_2 = 15;
	Var0.f_3 = func_149(0);
	Var0.f_4 = iParam0;
	if (!_datafile_get_hash(&uVar5, &Var0))
	{
		return func_266(iParam0);
	}
	return uVar5;
}

int func_141()
{
	return func_267(-1052513930);
}

bool func_142(int iParam0)
{
	return iParam0 != 0;
}

char* func_143(int iParam0)
{
	return _create_var_string(2, func_147(iParam0));
}

void func_144(var uParam0, char* sParam1)
{
	_databinding_write_data_string(&(uParam0->f_3.f_3[0]), sParam1);
}

int func_145(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_268(Global_1293346->f_2982);
		case 1:
			return func_268(Global_1293346->f_2983);
		default:
			break;
	}
	return -1;
}

int func_146(int iParam0)
{
	if (!func_269(iParam0))
	{
		return 0;
	}
	iVar0 = func_270(iParam0);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	else
	{
		return func_271(iParam0, 1);
	}
	return 0;
}

var func_147(int iParam0)
{
	Var0 = func_148();
	Var0.f_2 = 9;
	Var0.f_3 = func_149(0);
	Var0.f_4 = iParam0;
	if (!_0x951327435dc5164b(&Var5, &Var0))
	{
		return func_272(iParam0);
	}
	return func_273(Var5);
}

var func_148()
{
	return Global_1071686->f_28448[52]->f_3;
}

int func_149(int iParam0)
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

struct<2> func_150(int iParam0)
{
	Var2 = func_148();
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

float func_151()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_152(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_153(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_154(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_168(bParam2);
	}
	if (!_0x9700e8efc4ab9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

bool func_155(var uParam0, var uParam1)
{
	*uParam1 = 0;
	if (!func_57(uParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_82(*uParam0, &Var0, 1, 0, -1))
	{
		return false;
	}
	if (!func_83(Var0.f_4, 0))
	{
		return false;
	}
	if (!func_274(Var0.f_4))
	{
		return false;
	}
	*uParam1 = Var0.f_4;
	return true;
}

bool func_156(var uParam0, var uParam1)
{
	if (!func_155(uParam0, &uVar0))
	{
		return false;
	}
	Var1.f_8 = 10;
	Var1.f_8.f_1.f_4 = 15;
	Var1.f_8.f_1.f_36 = 10;
	Var1.f_8.f_1.f_47.f_4 = 15;
	Var1.f_8.f_1.f_47.f_36 = 10;
	Var1.f_8.f_1.f_47.f_47.f_4 = 15;
	Var1.f_8.f_1.f_47.f_47.f_36 = 10;
	Var1.f_8.f_1.f_47.f_47.f_47.f_4 = 15;
	Var1.f_8.f_1.f_47.f_47.f_47.f_36 = 10;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_4 = 15;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_36 = 10;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var1.f_480 = 10;
	Var1.f_480.f_1.f_4 = 10;
	Var1.f_480.f_1.f_25.f_4 = 10;
	Var1.f_480.f_1.f_25.f_25.f_4 = 10;
	Var1.f_480.f_1.f_25.f_25.f_25.f_4 = 10;
	Var1.f_480.f_1.f_25.f_25.f_25.f_25.f_4 = 10;
	Var1.f_480.f_1.f_25.f_25.f_25.f_25.f_25.f_4 = 10;
	Var1.f_480.f_1.f_25.f_25.f_25.f_25.f_25.f_25.f_4 = 10;
	Var1.f_480.f_1.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_4 = 10;
	Var1.f_480.f_1.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_4 = 10;
	Var1.f_480.f_1.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_4 = 10;
	Var1.f_732.f_2 = 5;
	Var1.f_732.f_18 = 8;
	if (!_0x2a610bee7d341cc4(uVar0, &Var1))
	{
		return false;
	}
	iVar768 = 0;
	while (iLocal_772 < 5)
	{
		switch (Var1.f_732.f_2[iLocal_772]->f_2)
		{
			case -774197843:
				func_275(Var1.f_732.f_2[iLocal_772], &(uParam1->f_1), uParam1, 1);
				break;
		}
		iVar768 = iLocal_772 + 1;
	}
	if (func_276(uParam0))
	{
		uParam1->f_2 = 0;
	}
	else
	{
		uParam1->f_2 = 1;
		if (func_277(uParam0))
		{
			uParam1->f_3 = 1;
		}
		else if (func_278(*uParam0))
		{
			uParam1->f_4 = 1;
		}
	}
	return true;
}

bool func_157(int iParam0)
{
	if (!func_83(iParam0, 0))
	{
		return false;
	}
	if (!func_86(iParam0))
	{
		return false;
	}
	if (!func_101(iParam0, get_hash_key("CI_TAG_OFFER_MYSTERY")))
	{
		return false;
	}
	iVar0 = func_279(iParam0, 1);
	if (iVar0 != 0)
	{
		return false;
	}
	return true;
}

void func_158(char* sParam0)
{
	StringCopy(sParam0, "HO_ITEM_MYSTERY_REWARD_NAME", 128);
	StringCopy(&(sParam0->f_16), "HO_ITEM_MYSTERY_REWARD_DESCRIPTION", 128);
	sParam0->f_34 = get_hash_key("VOUCHER_MYSTERY");
	sParam0->f_35 = get_hash_key("mp_hub_coupons");
	sParam0->f_32 = get_hash_key("VOUCHER_MYSTERY");
	sParam0->f_33 = get_hash_key("mp_hub_coupons");
}

bool func_159(var uParam0, var uParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10)
{
	if (!_databinding_is_data_id_valid(*uParam1))
	{
		return false;
	}
	(*uParam0)[0] = _databinding_add_data_container(*uParam1, &cParam2);
	(*uParam0)[1] = _databinding_add_data_hash_by_hash(uParam0[0], 440050042, *cParam10);
	(*uParam0)[2] = _databinding_add_data_hash_by_hash(uParam0[0], 1058850005, cParam10->f_1);
	(*uParam0)[3] = _databinding_add_data_bool_by_hash(uParam0[0], 1527945487, cParam10->f_2);
	(*uParam0)[4] = _databinding_add_data_bool_by_hash(uParam0[0], 1024435631, cParam10->f_3);
	(*uParam0)[5] = _databinding_add_data_bool_by_hash(uParam0[0], 596676017, cParam10->f_4);
	return true;
}

bool func_160(var uParam0, int iParam1, var uParam2)
{
	iVar0 = _databinding_get_array_count(&(uParam0->f_3[1]));
	if (iParam1 < 0 || iParam1 >= iVar0)
	{
		return false;
	}
	*uParam2 = _databinding_get_item_context_by_index(&(uParam0->f_3[1]), iParam1);
	return true;
}

bool func_161(var uParam0, char[4] cParam1)
{
	if (!_databinding_is_data_id_valid(*uParam0))
	{
		return false;
	}
	_databinding_write_data_hash_string_from_parent_by_hash(*uParam0, 440050042, *cParam1);
	_databinding_write_data_hash_string_from_parent_by_hash(*uParam0, 1058850005, cParam1->f_1);
	_0xbfc83da249befcc9(*uParam0, 1527945487, cParam1->f_2);
	_0xbfc83da249befcc9(*uParam0, 1024435631, cParam1->f_3);
	_0xbfc83da249befcc9(*uParam0, 596676017, cParam1->f_4);
	return true;
}

struct<2> func_162()
{
	if (Global_1196205->f_129 <= 0)
	{
		return func_255(0);
	}
	if (Global_1196205->f_130 < 0 || Global_1196205->f_131 == 0)
	{
		return func_255(0);
	}
	return (*Global_1196205)[Global_1196205->f_130]->f_1;
}

bool func_163(struct<2> Param0)
{
	if (!func_280(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_281(Param0))
	{
		return false;
	}
	return true;
}

int func_164(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_282(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_165(int iParam0)
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

int func_166(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!network_is_game_in_progress())
	{
		return 0;
	}
	iVar0 = func_283(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (_unlock_is_unlocked(iVar0))
	{
		iVar1 = func_284(1, iParam0);
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

int func_167(int iParam0)
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

int func_168(bool bParam0)
{
	if (func_124() == -1)
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

int func_169(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

int func_170(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_285(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_169(iParam0, -455129387);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_286(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_287(&Var1, &iVar62, iParam0, iVar0, iParam1, 1) || iVar62 < 1)
		{
			return 0;
		}
		iVar64 = -1;
		Var65.f_9 = 1;
		Var65.f_11 = -1591664384;
		iVar63 = 0;
		while (iVar63 < iVar62)
		{
			Var65 = { func_288(iParam0, Var1[iVar63]) };
			Var65.f_12 = iParam2;
			iVar64 = func_289(1702063850, &Var65, 1);
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
			func_290(iVar64, Var81);
			return 1;
		}
		return 0;
	}
	if (!_0xb4158c8c9a3b5dce(func_168(bParam4), iParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

struct<5> func_171(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_232(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_111(iParam0);
	switch (iVar5)
	{
		case -1037537535:
			Var0 = { func_172(889965687, Var0, 1034665895, bParam1) };
			Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			break;
		case -427144552:
			Var0 = { func_291(bParam1) };
			if (bParam2 && func_292(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_293(iParam0, &Var0, 1728382685, 0, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_293(iParam0, &Var0, -649335959, 0, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_294(iParam0, &Var6, 1728382685))
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
			Var0 = { func_295(bParam1) };
			switch (func_114(iParam0))
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
			Jump @882; //curOff = 400
			if (func_296(iParam0, -1823706425))
			{
				Var0 = { func_172(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_296(iParam0, -1483207246))
			{
				Var0 = { func_172(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1911121386))
			{
				Var0 = { func_172(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_296(iParam0, -1653629781))
			{
				Var0 = { func_172(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 1384535894);
			}
			Jump @882; //curOff = 644
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
				if (!func_82(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_296(iParam0, -1653629781))
			{
				Var0 = { func_172(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 1384535894);
			}
			else
			{
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 1328661203);
				if (Var0.f_4 == 0)
				{
				}
			}
			return Var0;
		}

struct<4> func_172(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_83(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_168(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_173(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_285(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_82(*uParam1, &Var0, bParam6, 0, -1))
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
	if (!func_286(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_124() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = iParam0;
			Var15 = { *uParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_289(1702063850, &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31.f_16 = -1;
				Var31 = bParam5;
				Var31.f_7 = iParam4;
				func_290(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_168(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_174(int iParam0)
{
	if (func_101(iParam0, 1573112293))
	{
		return func_297(iParam0);
	}
	if (func_298(iParam0))
	{
		return func_299();
	}
	switch (func_114(iParam0))
	{
		case -77448735:
			if (func_300(iParam0))
			{
				return func_297(iParam0);
			}
			break;
		case -1393202694:
		case 2041469314:
			return func_297(iParam0);
		case -1520388130:
		case 1802292908:
			return func_301();
		case -2061583405:
		case 81053684:
		case 1477698721:
			return func_302();
		case -525676072:
			return func_302();
		case 1779021115:
			if (iParam0 == -1016714371 || iParam0 == 332793555)
			{
				return func_303();
			}
			return func_304();
		case -1823706425:
			if (iParam0 == -1115561122)
			{
				return func_305();
			}
			else
			{
				return func_306();
			}
			break;
		case -854348463:
			return func_307();
		case -2101244071:
		case 664784405:
		case 874188557:
		case 2020212423:
			return func_308();
		default:
			if (func_83(iParam0, 0))
			{
				if (func_101(iParam0, 1919582297))
				{
					return func_309();
				}
				else if (iParam0 == -2035110427 || iParam0 == -1448210800)
				{
					return func_310();
				}
				else if (iParam0 == -1516555556)
				{
					return func_311();
				}
				else if (func_101(iParam0, 1147021565))
				{
					return func_312();
				}
			}
			return func_313();
	}
	return func_313();
}

bool func_175(bool bParam0, int iParam1)
{
	if ((Global_1940258->f_6 || is_ped_dead_or_dying(Global_34, true)) || is_entity_dead(Global_34))
	{
		return false;
	}
	if (func_124() == 0)
	{
		if (func_314(131072))
		{
			return false;
		}
	}
	if (!func_315(iParam1, 1))
	{
		if (func_314(1024))
		{
			return false;
		}
	}
	if (Global_1940258->f_16)
	{
		return false;
	}
	if (!func_315(iParam1, 2) && func_314(32))
	{
		return false;
	}
	if (!func_315(iParam1, 4))
	{
		if (func_314(4096))
		{
			return false;
		}
	}
	if (!func_315(iParam1, 8) && func_314(512))
	{
		return false;
	}
	if (!func_315(iParam1, 512) && !func_316(bParam0))
	{
		return false;
	}
	if (!func_315(iParam1, 262144) && !func_317(bParam0, func_315(iParam1, 524288)))
	{
		return false;
	}
	if (!func_315(iParam1, 64) && !func_318(bParam0, iParam1, 1))
	{
		return false;
	}
	if (!func_315(iParam1, 128))
	{
		if (func_319(Global_34, 1868526510) || is_ped_on_mount(Global_34))
		{
			if (bParam0)
			{
				func_113("ITEM_UNUSABLE_FULLY_MOUNTED", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (!func_315(iParam1, 16))
	{
		if (func_320(Global_34))
		{
			iVar0 = get_mount(Global_34);
			if (!func_321(iVar0, 1))
			{
				if (bParam0)
				{
					func_113("ITEM_UNUSABLE_HORSE_SPEED", 10000, 0, 0, 0, 1);
				}
				return false;
			}
		}
	}
	if (!func_315(iParam1, 256) && func_314(8192))
	{
		return false;
	}
	if (!func_315(iParam1, 1024) && func_314(65536))
	{
		if (bParam0)
		{
			func_113("ITEM_UNUSABLE_CINEMATIC_CAM", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (!func_315(iParam1, 2048))
	{
		if (func_314(32768))
		{
			return false;
		}
	}
	if (!func_315(iParam1, 4096))
	{
		if (func_314(16384))
		{
			return false;
		}
	}
	if (!func_315(iParam1, 8192))
	{
		if (!func_314(16))
		{
			return false;
		}
	}
	if (!func_315(iParam1, 67108864))
	{
		if (!func_314(268435456))
		{
			return false;
		}
	}
	if (!func_315(iParam1, 16384))
	{
		if (func_314(256))
		{
			return false;
		}
	}
	if (!func_315(iParam1, 32768))
	{
		if (func_322())
		{
			if (bParam0)
			{
				func_113("ITEM_UNUSABLE_SATCHEL_OPEN", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (!func_315(iParam1, 131072))
	{
		if (!func_314(524288))
		{
			return false;
		}
	}
	if (!func_315(iParam1, 65536))
	{
		if (!func_314(262144))
		{
			return false;
		}
	}
	if (!func_315(iParam1, 1048576))
	{
		if (!func_314(2097152))
		{
			return false;
		}
	}
	if (!func_315(iParam1, 2097152))
	{
		if (!func_314(8388608))
		{
			return false;
		}
	}
	if (!func_315(iParam1, 4194304))
	{
		if (!func_314(16777216))
		{
			return false;
		}
	}
	if (!func_315(iParam1, 8388608))
	{
		if (func_314(33554432))
		{
			return false;
		}
	}
	if (!func_315(iParam1, 16777216))
	{
		if (func_314(67108864))
		{
			return false;
		}
	}
	if (!func_315(iParam1, 33554432))
	{
		if (func_314(134217728))
		{
			return false;
		}
	}
	if (func_314(64))
	{
		return false;
	}
	else if (func_314(128))
	{
		return false;
	}
	else if (func_314(1048576))
	{
		return false;
	}
	else if (func_314(4))
	{
		return false;
	}
	if (!func_315(iParam1, 134217728))
	{
		if (func_323(256))
		{
			return false;
		}
	}
	return true;
}

bool func_176()
{
	if (!does_entity_exist(Global_34))
	{
		return false;
	}
	if (ped_has_use_scenario_task(Global_34))
	{
		iVar0 = _get_scenario_point_type_ped_is_using(Global_34);
		iVar1 = iVar0;
		if (iVar1 != -1241981548 && iVar1 != 1049986774)
		{
			return true;
		}
	}
	return false;
}

bool func_177(int iParam0, int iParam1)
{
	if (!func_83(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_111(iParam0);
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
			if (!func_324(iParam0, 1))
			{
				return false;
			}
			break;
		case -1037537535:
			if (func_325(iParam0))
			{
				return true;
			}
			break;
	}
	return func_326(iParam0, 0, 0, 0) >= iParam1;
}

var func_178(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915715->f_20638;
	}
	return (Global_1915715->f_20638 || Global_1915715->f_22504.f_1);
}

var func_179(int iParam0, int iParam1)
{
	return _databinding_read_data_bool(Global_1940311->f_1433.f_54.f_85);
}

int func_180()
{
	return Global_1915715->f_22504.f_5;
}

char* func_181()
{
	iVar0 = func_180();
	switch (iVar0)
	{
		case 0:
			return "SHOPS_HANDHELD_FAIL_NONE";
		case 1:
			return "SHOPS_HANDHELD_FAIL_NOT_READY";
		case 3:
			return "SHOPS_HANDHELD_FAIL_DISABLED";
		case 4:
			return "SHOPS_HANDHELD_FAIL_INSTANCED";
		case 5:
			return "SHOPS_HANDHELD_FAIL_SHOP_CL";
		case 6:
			return "SHOPS_HANDHELD_FAIL_NOT_OWN";
		case 9:
			return "SHOPS_HANDHELD_FAIL_WAIT_FOR_FREEROAM";
		case 7:
			return "SHOPS_HANDHELD_FAIL_PVP_ASSA";
		case 8:
			return "SHOPS_HANDHELD_FAIL_SHOPS_DISABLED_THIS_FRAME";
		case 12:
			return "SHOPS_HANDHELD_FAIL_PLAYER_DIED";
		case 13:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_COMBAT";
		case 11:
			return "SHOPS_HANDHELD_FAIL_PLAYER_RIDING";
		case 14:
			return "SHOPS_HANDHELD_FAIL_PLAYER_USING_TURRET";
		case 15:
			return "SHOPS_HANDHELD_FAIL_PLAYER_FALLING";
		case 16:
			return "SHOPS_HANDHELD_FAIL_PLAYER_INSPECTING";
		case 17:
			return "SHOPS_HANDHELD_FAIL_PLAYER_CARRYING";
		case 18:
			return "SHOPS_HANDHELD_FAIL_PLAYER_BROWSING";
		case 19:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_SCENARIO";
		case 20:
			return "SHOPS_HANDHELD_FAIL_PLAYER_SPECTATING";
		case 21:
			return "SHOPS_HANDHELD_FAIL_PLAYER_BRUSHING";
		case 22:
			return "SHOPS_HANDHELD_FAIL_IN_DEEP_WATER";
		case 23:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME";
		case 24:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_ARCHERY";
		case 25:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_CHALLENGE";
		case 26:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_DEAD_DROP";
		case 27:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_GOLDEN_SHOWDOWN";
		case 28:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_HOT_PROPERTY";
		case 29:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_KING_OF_THE_CASTLE";
		case 30:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_KING_OF_THE_RAILS";
		case 31:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_WRECKAGE";
		case 32:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_CONDOR_EGG";
		case 33:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_ANIMAL_TAGGING";
		case 35:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_PROTECT_LEGENDARY_ANIMAL";
		case 34:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_WILDLIFE_PHOTOGRAPHER";
		case 37:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV";
		case 39:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_BIGGEST_FISH";
		case 40:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_FLYING_BIRD";
		case 41:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_HERBALIST";
		case 36:
			return "SHOPS_HANDHELD_FAIL_MISSION_FEUD";
		case 38:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_HUNT_THE_POSSE_LEADER";
		case 42:
			return "SHOPS_HANDHELD_FAIL_PLAYER_MATCHMAKING";
		case 46:
			Var1 = -1;
			Var1.f_1 = -1;
			Var1 = { func_255(0) };
			if (!func_163(Var1))
			{
				return "SHOPS_HANDHELD_FAIL_SHOP_CL";
			}
			iVar3 = func_327(&Var1, 1);
			if (iVar3 == -1)
			{
				return "SHOPS_HANDHELD_FAIL_SHOP_CL";
			}
			if (!func_328(iVar3, 461218520, 1))
			{
				return "SHOPS_HANDHELD_FAIL_SHOP_CL";
			}
			return func_330(func_329(iVar3, 461218520));
	}
	return "";
}

void func_182(int iParam0)
{
	Global_1915715->f_22504.f_5 = iParam0;
}

int func_183(int iParam0)
{
	return iParam0;
}

int func_184(int iParam0, int iParam1)
{
	if (!func_331(iParam0, 2))
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

int func_185(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 49)
	{
		if (func_332(iVar0, iParam0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_186(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_333(iParam0))
	{
		return 1;
	}
	if (!func_334(iParam0))
	{
		return 5;
	}
	if (!bParam1 && Global_1211392->f_48[iParam0]->f_17)
	{
		if (bParam2 || Global_1211392->f_1.f_20 != 0)
		{
			return 2;
		}
	}
	if (!bParam2 && !func_335(iParam0))
	{
		return 3;
	}
	if (func_336(iParam0) && !func_337())
	{
		return 4;
	}
	return 0;
}

bool func_187(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)
{
	switch (func_188(iParam0, -949239683))
	{
		case -1420737577:
			if (!bParam1)
			{
				iVar0 = 2129866661;
				if (bParam2)
				{
					iVar0 = 1607869040;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 1712126263:
			if (!bParam1)
			{
				iVar0 = 1589555562;
				if (bParam2)
				{
					iVar0 = -1424266966;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -1229959999:
			if (!bParam1)
			{
				iVar0 = 1159762194;
				if (bParam2)
				{
					iVar0 = -1791047090;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -1050374492:
			if (!bParam1)
			{
				iVar0 = 343713021;
				if (bParam2)
				{
					iVar0 = 760057945;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 1513351077:
			if (!bParam1)
			{
				iVar0 = 889797228;
				if (bParam2)
				{
					iVar0 = -1043439814;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -1565009253:
			if (!bParam1)
			{
				iVar0 = 1254219723;
				if (bParam2)
				{
					iVar0 = -2077441721;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 733893097:
			if (!bParam1)
			{
				iVar0 = 436157482;
				if (bParam2)
				{
					iVar0 = 1972630951;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -164980960:
			if (!bParam1)
			{
				iVar0 = -138141811;
				if (bParam2)
				{
					iVar0 = 2000759837;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 1894156335:
			if (!bParam1)
			{
				iVar0 = 1801769345;
				if (bParam2)
				{
					iVar0 = 374699583;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 871191033:
			if (!bParam1)
			{
				iVar0 = 1290994194;
				if (bParam2)
				{
					iVar0 = -59421711;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -1273369295:
			if (!bParam1)
			{
				iVar0 = -27851152;
				if (bParam2)
				{
					iVar0 = -1340223099;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 82200319:
			if (!bParam1)
			{
				iVar0 = -1216929452;
				if (bParam2)
				{
					iVar0 = -1140851507;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -873135685:
			if (!bParam1)
			{
				iVar0 = -1418730365;
				if (bParam2)
				{
					iVar0 = -1570312122;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 24248412:
			if (!bParam1)
			{
				iVar0 = 1014486005;
				if (bParam2)
				{
					iVar0 = 416212934;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 10252101:
			if (!bParam1)
			{
				iVar0 = -1246302402;
				if (bParam2)
				{
					iVar0 = -1791047090;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
	}
	return false;
}

int func_188(int iParam0, int iParam1)
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

bool func_189()
{
	return Global_1952637->f_1675.f_1[1]->f_1 == -282754472;
}

bool func_190(var uParam0)
{
	if (!does_entity_exist(*uParam0) || is_entity_dead(*uParam0))
	{
		return false;
	}
	if (func_338(*uParam0, -1725579161, 0))
	{
		return true;
	}
	return false;
}

void func_191(int iParam0)
{
	iVar0 = 406178289;
	switch (func_339())
	{
		case 0:
			iVar0 = 406178289;
			break;
		case 1:
			iVar0 = 187883304;
			break;
		case 3:
			iVar0 = 38531903;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		if (func_101(iParam0, 1573112293))
		{
			func_341(func_340(iParam0), 1, 1);
		}
		func_342(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_343(iParam0);
		func_344(iParam0, 1, 0, 562618531);
	}
}

void func_192(int iParam0)
{
	iVar0 = 16939881;
	switch (func_339())
	{
		case 0:
			iVar0 = 16939881;
			break;
		case 1:
			iVar0 = -1165614444;
			break;
		case 3:
			iVar0 = 968591133;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_342(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_343(iParam0);
		func_344(iParam0, 1, 0, 562618531);
	}
}

void func_193(int iParam0, bool bParam1)
{
	iVar0 = -45077177;
	switch (func_339())
	{
		case 0:
			if (bParam1)
			{
				iVar0 = -2137817968;
			}
			else
			{
				iVar0 = -45077177;
			}
			break;
		case 1:
			if (bParam1)
			{
				iVar0 = -1947358597;
			}
			else
			{
				iVar0 = 36807409;
			}
			break;
		case 3:
			if (bParam1)
			{
				iVar0 = -750686877;
			}
			else
			{
				iVar0 = 1293288723;
			}
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_342(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_343(iParam0);
		func_344(iParam0, 1, 0, 562618531);
	}
}

void func_194(int iParam0, bool bParam1)
{
	iVar0 = 1700817728;
	switch (func_339())
	{
		case 0:
			if (bParam1)
			{
				iVar0 = -447623645;
			}
			else
			{
				iVar0 = 1700817728;
			}
			break;
		case 1:
			if (bParam1)
			{
				iVar0 = 1880532390;
			}
			else
			{
				iVar0 = -480771797;
			}
			break;
		case 3:
			if (bParam1)
			{
				iVar0 = 468890170;
			}
			else
			{
				iVar0 = 764367205;
			}
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_342(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_343(iParam0);
		func_344(iParam0, 1, 0, 562618531);
	}
}

void func_195(int iParam0)
{
	iVar0 = -362580870;
	switch (func_339())
	{
		case 0:
			iVar0 = -362580870;
			break;
		case 1:
			iVar0 = -1013825131;
			break;
		case 3:
			iVar0 = -1433021121;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_342(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_343(iParam0);
		func_344(iParam0, 1, 0, 562618531);
	}
}

void func_196(int iParam0)
{
	iVar0 = 2105609037;
	switch (func_339())
	{
		case 0:
			iVar0 = 2105609037;
			break;
		case 3:
			iVar0 = -457187977;
			break;
		case 1:
			iVar0 = -1595716047;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_342(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_343(iParam0);
		func_344(iParam0, 1, 0, 562618531);
	}
}

void func_197(int iParam0)
{
	iVar0 = 1964324114;
	switch (func_339())
	{
		case 0:
			iVar0 = 1964324114;
			break;
		case 3:
			iVar0 = -654111932;
			break;
		case 1:
			iVar0 = 1826089606;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_342(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_343(iParam0);
		func_344(iParam0, 1, 0, 562618531);
	}
}

void func_198(int iParam0)
{
	iVar0 = -1530144981;
	switch (func_339())
	{
		case 0:
			iVar0 = -1530144981;
			break;
		case 3:
			iVar0 = -389189374;
			break;
		case 1:
			iVar0 = -312546963;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_342(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_343(iParam0);
		func_344(iParam0, 1, 0, 562618531);
	}
}

void func_199(int iParam0)
{
	iVar0 = -1074475556;
	switch (func_339())
	{
		case 0:
			iVar0 = -1074475556;
			break;
		case 3:
			iVar0 = 392506445;
			break;
		case 1:
			iVar0 = -1846586910;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_342(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_343(iParam0);
		func_344(iParam0, 1, 0, 562618531);
	}
}

void func_200(int iParam0)
{
	iVar0 = 1076410848;
	switch (func_339())
	{
		case 0:
			iVar0 = 1076410848;
			break;
		case 3:
			iVar0 = 1820106865;
			break;
		case 1:
			iVar0 = 1890537641;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_342(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_343(iParam0);
		func_344(iParam0, 1, 0, 562618531);
	}
}

void func_201(int iParam0)
{
	iVar0 = 1516413548;
	switch (func_339())
	{
		case 0:
			iVar0 = 1516413548;
			break;
		case 1:
			iVar0 = 1648161053;
			break;
		case 3:
			iVar0 = -1170654725;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_342(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_343(iParam0);
		func_344(iParam0, 1, 0, 562618531);
	}
}

void func_202(int iParam0)
{
	iVar0 = -1454586679;
	switch (func_339())
	{
		case 0:
			iVar0 = -1454586679;
			break;
		case 1:
			iVar0 = 1849268701;
			break;
		case 3:
			iVar0 = 881673189;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_342(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_343(iParam0);
		func_344(iParam0, 1, 0, 562618531);
	}
}

void func_203(int iParam0, bool bParam1)
{
	iVar0 = 1934039819;
	switch (func_339())
	{
		case 0:
			iVar0 = 1934039819;
			break;
		case 1:
			iVar0 = 1656393367;
			break;
		case 3:
			iVar0 = 1125253485;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		if (!func_342(Global_34, iParam0, iVar0, 1, 0) && bParam1)
		{
			func_343(iParam0);
			func_344(iParam0, 1, 0, 562618531);
		}
	}
	else
	{
		func_343(iParam0);
		func_344(iParam0, 1, 0, 562618531);
	}
}

void func_204(int iParam0, bool bParam1)
{
	iVar0 = -1054661625;
	switch (func_339())
	{
		case 0:
			iVar0 = -1054661625;
			break;
		case 1:
			iVar0 = 1750832898;
			break;
		case 3:
			iVar0 = -1750311991;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		if (!func_342(Global_34, iParam0, iVar0, 1, bParam1) && bParam1)
		{
			func_343(iParam0);
			func_344(iParam0, 1, 0, 562618531);
		}
	}
	else
	{
		func_343(iParam0);
		func_344(iParam0, 1, 0, 562618531);
	}
}

bool func_205(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_206(char* sParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1939493->f_161)
	{
		if (are_strings_equal(&((*Global_1939493)[iVar0]->f_10), sParam0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_207(int iParam0)
{
	if (func_205(iParam0, 1))
	{
		func_345(1);
	}
}

int func_208(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 0;
		case 3:
			return 3;
		default:
			break;
	}
	return -1;
	return -1;
}

void func_209(int iParam0)
{
	Global_1952637 = (Global_1952637 || iParam0);
}

void func_210(struct<4> Param0)
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
		case 23:
			if (Global_1952637->f_918 >= 25)
			{
				return;
			}
			if (func_346(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1952637->f_918)
				{
					iVar1 = ((Global_1952637->f_923 + iVar0) % 25);
					if ((&Global_1952637->f_736[iVar1] == Param0 && Global_1952637->f_736[iVar1]->f_1 == Param0.f_1) && Global_1952637->f_736[iVar1]->f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_347(Param0);
			*Global_1952637->f_736[Global_1952637->f_924] = { Param0 };
			Global_1952637->f_918++;
			Global_1952637->f_924 = (Global_1952637->f_924 + 1 % 25);
			func_209(8);
			break;
		case 24:
		case 25:
			if (Global_1952637->f_919 >= 25)
			{
				return;
			}
			if (func_346(Param0))
			{
				return;
			}
			func_347(Param0);
			*Global_1952637->f_635[Global_1952637->f_919] = { Param0 };
			Global_1952637->f_919++;
			func_209(8);
			break;
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 36:
		case 37:
		case 38:
			if (Global_1952637->f_920 >= 20)
			{
				return;
			}
			if (func_346(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1952637->f_920)
				{
					iVar1 = ((Global_1952637->f_921 + iVar0) % 20);
					if ((&Global_1952637->f_837[iVar1] == Param0 && Global_1952637->f_837[iVar1]->f_1 == Param0.f_1) && Global_1952637->f_837[iVar1]->f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_347(Param0);
			*Global_1952637->f_837[Global_1952637->f_922] = { Param0 };
			Global_1952637->f_920++;
			Global_1952637->f_922 = (Global_1952637->f_922 + 1 % 20);
			func_209(8);
			break;
			break;
	}
}

bool func_211()
{
	return Global_1952637->f_3484;
}

bool func_212(int iParam0)
{
	if (func_348())
	{
		return false;
	}
	if (!func_83(iParam0, 0))
	{
		return false;
	}
	if (!func_177(iParam0, 1))
	{
		_0xbfff81e12a745a5f();
		return false;
	}
	return true;
}

bool func_213(int iParam0)
{
	return func_349(iParam0);
}

void func_214(int iParam0, int iParam1)
{
	func_350(iParam0, iParam1);
}

int func_215(int iParam0, int iParam1)
{
	bVar3 = func_351(iParam0);
	if (func_114(iParam0) == -525676072 || func_101(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_352(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_353();
			}
			else
			{
				iVar0 = func_354();
			}
		}
		else if (bVar1)
		{
			iVar0 = func_355();
		}
		else
		{
			iVar0 = func_356();
		}
	}
	else if (func_357(&iVar2))
	{
		if (func_101(iVar2, -1303648999) || func_114(iVar2) == -525676072)
		{
			iVar0 = func_353();
		}
		else
		{
			iVar0 = func_354();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_355();
	}
	else
	{
		iVar0 = func_356();
	}
	if (iVar0 != 0)
	{
		Global_1952637->f_3483 = get_game_timer();
		_task_item_interaction(Global_34, iParam0, iVar0, 1, iParam1, -1082130432);
		return 1;
	}
	return 0;
}

bool func_216(int iParam0)
{
	return (Global_1952637 && iParam0) != 0;
}

void func_217()
{
	Global_1952637->f_3467 = 0;
	Global_1952637->f_3467.f_1 = 0;
	Global_1952637->f_3467.f_8 = 0;
	Global_1952637->f_3467.f_2 = 0;
	Global_1952637->f_3467.f_3[0] = 0;
	Global_1952637->f_3467.f_3[1] = 0;
	Global_1952637->f_3467.f_3[2] = 0;
	Global_1952637->f_3467.f_3[3] = 0;
	Global_1952637->f_3467.f_9 = 0;
	Global_1952637->f_3467.f_10 = 0;
	Global_1952637->f_3467.f_11 = 0;
	if (Global_1952637->f_3467.f_12)
	{
		_0x13e7320c762f0477(Global_1952637->f_3467.f_13);
	}
	Global_1952637->f_3467.f_12 = 0;
	func_358(32768);
	func_359(1108822547, 8, 6);
}

bool func_218(int iParam0, bool bParam1)
{
	return func_360(iParam0, 0) < func_361(iParam0, bParam1);
}

bool func_219(int iParam0)
{
	return func_362(iParam0, &uVar0);
}

void func_220(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	iVar0 = func_114(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			if (func_101(iParam0, 1584357097))
			{
				return;
			}
			bVar1 = func_363(iParam0, &(Global_1952637->f_3334.f_28), Global_1952637->f_3334.f_33.f_1, bParam1, bParam5);
			break;
		case 81053684:
			bVar1 = func_363(iParam0, &(Global_1952637->f_3334.f_30), 1, bParam1, bParam5);
			break;
		case -999503751:
			bVar1 = func_363(iParam0, &(Global_1952637->f_3334.f_27), Global_1952637->f_3334.f_33, bParam1, bParam5);
			break;
		case -525676072:
			bVar1 = func_363(iParam0, &(Global_1952637->f_3334.f_29), Global_1952637->f_3334.f_33.f_2, bParam1, bParam5);
			break;
		case -1719060085:
			bVar1 = func_363(iParam0, &(Global_1952637->f_3334.f_31), 1, bParam1, bParam5);
			break;
		case 119907797:
			bVar1 = func_363(iParam0, &(Global_1952637->f_3334.f_32), 1, bParam1, bParam5);
			break;
		case 1388798186:
			bVar1 = func_363(iParam0, &(Global_1952637->f_3334.f_33.f_7), 1, bParam1, bParam5);
			break;
		default:
			if (func_101(iParam0, 160827531))
			{
				bVar1 = func_363(iParam0, &(Global_1952637->f_3334.f_30), 1, bParam1, bParam5);
			}
			break;
	}
	if (!bVar1)
	{
		return;
	}
	func_364();
	if (func_365(iVar0) || (iVar0 != -999503751 && func_101(iParam0, -166674229)))
	{
		_0x766315a564594401(func_168(bParam5), iParam0, 0);
	}
	func_121(iParam0, iParam3, bParam5);
	if (bParam4)
	{
		func_366(1, iParam0);
	}
	if (bParam2)
	{
		func_367(0, 0);
	}
}

int func_221(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_368();
	}
	if (iParam0 == 1160113249)
	{
		return -763730846;
	}
	return -1535516064;
}

void func_222(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (func_369(iParam0, iParam1))
	{
		func_370(iParam0, iParam1, 1, bParam2, iParam3, bParam4);
		return;
	}
}

int func_223(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1952637->f_83[iVar0]->f_9 == iParam0)
		{
			return func_371(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_224(int iParam0, int iParam1)
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
		case 735520874:
			return 5;
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

bool func_225(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	func_372();
	if (iParam2 == 39)
	{
		Var0 = { func_171(iParam0, 1, 0) };
		iParam2 = func_224(func_223(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_216(32768) && iParam2 == 10)
	{
		func_373(1108822547);
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	if (func_227(iParam0, 1))
	{
		func_374(&(Global_1952637->f_1556), &iParam0, iParam2, bParam5);
	}
	if (bParam6)
	{
		func_375(iParam2);
	}
	func_376(iParam2, iVar5);
	func_377(Global_1952637->f_1556.f_1[iParam2], 4, 6);
	func_377(Global_1952637->f_1675.f_1[iParam2], 4, 6);
	func_378(&(Global_1952637->f_1556), iParam0, iParam2, 1, iVar5);
	if (iParam1 == 0)
	{
		iParam1 = Global_1952637->f_1556.f_1[iParam2]->f_1;
	}
	Global_1952637->f_1556.f_1[iParam2] = iParam0;
	Global_1952637->f_1556.f_1[iParam2]->f_1 = func_379(iParam0, iParam2, iParam1);
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1952637->f_2897)
		{
			if (&Global_1952637->f_2897.f_2[iVar6] >= 0 && &Global_1952637->f_2897.f_2[iVar6] < 39)
			{
				Global_1952637->f_2764[&Global_1952637->f_2897.f_2[iVar6]] = 0;
				Global_1952637->f_2764[&Global_1952637->f_2897.f_2[iVar6]]->f_1 = 0;
				func_359(func_371(&(Global_1952637->f_2897.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_226(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	func_380(&(Global_1952637->f_2897), bParam0, bParam1, bParam2, bParam3);
}

bool func_227(int iParam0, bool bParam1)
{
	if (!func_83(iParam0, 0))
	{
	}
	if (!bParam1 && (iParam0 == -1713496139 || iParam0 == -598283164))
	{
		return false;
	}
	if (func_101(iParam0, 265372629))
	{
		return true;
	}
	return false;
}

bool func_228(int iParam0, int iParam1, bool bParam2)
{
	Var4 = { func_171(iParam0, bParam2, 0) };
	if (func_227(iParam0, 0))
	{
		iVar9 = func_381(Var4, Var4.f_4, bParam2, -1);
		if (iVar9 != 0)
		{
			Var4 = { func_171(iVar9, bParam2, 0) };
			Var0 = { func_172(iVar9, Var4, Var4.f_4, bParam2) };
			return func_382(Var0, 0, bParam2);
		}
		return true;
	}
	Var0 = { func_172(iParam0, Var4, Var4.f_4, bParam2) };
	return func_382(Var0, iParam1, bParam2);
}

int func_229(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_224(iParam0, 1);
	switch (iParam0)
	{
		case 1108822547:
			if (&Global_1952637->f_1675.f_1[iVar1] == &Global_1952637->f_83[iVar1] || &Global_1952637->f_1556.f_1[iVar1] == &Global_1952637->f_83[iVar1])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_230(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_231(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_83(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_169(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_172(iParam0, Param1, iParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_168(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_168(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

struct<4> func_232(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_168(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_172(1328661203, func_383(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_172(1328661203, func_383(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_172(1328661203, func_383(), -1591664384, bParam0);
}

int func_233(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_39.f_281;
	}
	return iParam0;
}

bool func_234(int iParam0)
{
	iParam0 = func_233(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	iVar0 = func_127(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return false;
	}
	if (func_384(iVar0))
	{
		return true;
	}
	return false;
}

int func_235()
{
	return Global_39.f_281.f_3222;
}

bool func_236()
{
	return Global_1915715->f_22504.f_1;
}

bool func_237(int iParam0)
{
	return (Global_1051439->f_3628 && iParam0) != 0;
}

void func_238(int iParam0)
{
	Global_1051439->f_3628 = (Global_1051439->f_3628 - (Global_1051439->f_3628 && iParam0));
}

void func_239(int iParam0)
{
	Global_1051439->f_3629 = iParam0;
}

bool func_240()
{
	return Global_1915715->f_22504;
}

void func_241()
{
	_0x2804658eb7d8a50b(4, 666989068);
}

bool func_242()
{
	return func_237(4);
}

int func_243(bool bParam0)
{
	if (!func_385())
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
	if ((func_386(1106247680, 0) || _is_ped_hogtied(Global_34)) || _is_ped_hogtying(Global_34))
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
	if (func_387(255))
	{
		return 3;
	}
	if (is_minigame_in_progress())
	{
		return 44;
	}
	if ((Global_1108365->f_935.f_28 != -1 && Global_1108365->f_935.f_28 != 6) && Global_1108365->f_935.f_28 != 8)
	{
		if (func_388(Global_1108365->f_935.f_28))
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
	if (func_389())
	{
		return 43;
	}
	return -1;
}

void func_244(int iParam0)
{
	if (!func_242())
	{
		func_390(1);
	}
	Global_1051439->f_3630 = iParam0;
	iVar0 = func_243(1);
	if (iVar0 != -1)
	{
		func_182(iVar0);
		func_391(0);
	}
	else
	{
		func_391(1);
	}
}

bool func_245()
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return Global_1071686->f_3;
}

bool func_246(int iParam0)
{
	return func_250((*Global_1134390)[network_player_id_to_int()]->f_73, iParam0);
}

bool func_247()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

bool func_248()
{
	return !func_246(2);
}

bool func_249(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1197740->f_1 && iParam0) != 0;
}

bool func_250(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_251()
{
	if (!_is_any_app_running())
	{
		return;
	}
	_close_all_apps();
}

bool func_252(bool bParam0, bool bParam1, bool bParam2)
{
	bVar0 = func_393(bParam2, func_392(), 1, 0, 1, 1, 1, bParam0, bParam1);
	if (!bVar0)
	{
		return false;
	}
	return true;
}

void func_253(int iParam0)
{
	Global_1896738->f_390 = iParam0;
}

int func_254(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return (*Global_1134390)[iVar0]->f_38.f_3;
	}
	return -1;
}

struct<2> func_255(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

int func_256(int iParam0, bool bParam1)
{
	if (network_is_player_active(iParam0))
	{
		iVar0 = iParam0;
		iVar1 = 0;
		while (iVar1 <= 7)
		{
			if (Global_1196339->f_1[iVar1]->f_1 != -1 && func_394(iVar1, 64, iVar0))
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

int func_257(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return &(Global_1196898->f_1[iParam0]);
}

var func_258(int iParam0, int iParam1)
{
	return func_395(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_259(struct<19> Param0, var uParam19, bool bParam20, bool bParam21)
{
	if (!_0x179a6f0ee2e79026(&uParam19))
	{
		return;
	}
	Param0 = 0;
	Param0.f_1 = player_id();
	Param0.f_2 = get_network_time_accurate();
	if (!bParam20)
	{
		if (Param0.f_18)
		{
			if (bParam21)
			{
				Var0.f_12 = -1;
				Var0.f_12.f_1 = -1;
				Var0.f_14 = 255;
				Var0.f_15 = 255;
				Var0.f_20 = -1;
				Var0 = { Param0 };
				Var0.f_19 = uParam19;
				Var0.f_20 = Param0.f_2;
				func_396(&(Global_1071686->f_23044), Var0);
				return;
			}
		}
	}
	trigger_script_event(1, &Param0, 19, 5, &uParam19);
}

void func_260(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_261(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_397(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_398(iParam0))
	{
		return false;
	}
	if (func_399(iParam0))
	{
		return false;
	}
	if ((Global_1900736->f_67 && !func_400(iParam0, 1)) || func_401(32768))
	{
		if (!func_400(iParam0, 262144) || !Global_1904651->f_8686)
		{
			return false;
		}
	}
	if (!func_402())
	{
		return false;
	}
	return true;
}

void func_262(int iParam0, int iParam1)
{
	uVar0 = Global_1904651[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1904651)[iParam0] = uVar0;
}

bool func_263(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	return is_ped_on_mount(iParam0);
}

void func_264()
{
	Global_1913694->f_1583 = get_game_timer();
	Global_1913694->f_1581 = 1;
}

void func_265(int iParam0, int iParam1)
{
	iVar0 = iParam1;
	(*Global_1138048)[iVar0]->f_7 = ((*Global_1138048)[iVar0]->f_7 || iParam0);
}

int func_266(int iParam0)
{
	Var0 = func_148();
	Var0.f_2 = 14;
	Var0.f_3 = iParam0;
	if (!_datafile_get_hash(&uVar5, &Var0))
	{
		return 0;
	}
	return uVar5;
}

int func_267(int iParam0)
{
	Var0 = func_148();
	Var0.f_2 = 23;
	Var0.f_3 = func_149(0);
	Var0.f_4 = iParam0;
	if (!_datafile_get_hash(&uVar5, &Var0))
	{
		return func_403(iParam0);
	}
	return uVar5;
}

int func_268(int iParam0)
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

bool func_269(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 22)
	{
		return false;
	}
	return true;
}

int func_270(int iParam0)
{
	if (!func_269(iParam0))
	{
		return 0;
	}
	return &(Global_1293346->f_3009[iParam0]);
}

int func_271(int iParam0, bool bParam1)
{
	if (!func_269(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		iVar0 = func_404(iParam0);
		if (func_83(iVar0, 0))
		{
			if (iParam0 == 0)
			{
				iVar1 = func_405(255);
			}
			else
			{
				iVar1 = func_231(iVar0, func_232(1), -1990194462, 1, 0, 0);
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
		iVar0 = func_406(iParam0);
		if (func_83(iVar0, 0))
		{
			if (iParam0 == 0)
			{
				iVar1 = _0xdb438cc9bc6f4022();
			}
			else
			{
				iVar1 = func_231(iVar0, func_232(1), -1990194462, 1, 0, 0);
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

var func_272(int iParam0)
{
	Var0 = func_148();
	Var0.f_2 = 8;
	Var0.f_3 = iParam0;
	Var0.f_4 = 0;
	if (!_0x951327435dc5164b(&Var5, &Var0))
	{
		return "";
	}
	return func_273(Var5);
}

var func_273(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

bool func_274(int iParam0)
{
	if (func_114(iParam0) == -126813555 || func_114(iParam0) == 1946043663)
	{
		return true;
	}
	return false;
}

int func_275(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (is_string_null_or_empty(uParam0->f_1))
	{
		return 0;
	}
	if (is_string_null_or_empty(*uParam0))
	{
		return 0;
	}
	iVar0 = get_hash_key(uParam0->f_1);
	iVar1 = get_hash_key(*uParam0);
	if (!_does_streamed_txd_exist(iVar0))
	{
		return 0;
	}
	if (!bParam3)
	{
		if (_has_streamed_txd_loaded(iVar0))
		{
			if (!_0xa2a51869bded733b(iVar0, iVar1))
			{
				return 0;
			}
		}
	}
	*uParam1 = iVar0;
	*uParam2 = iVar1;
	return 1;
}

bool func_276(var uParam0)
{
	if (!func_57(uParam0))
	{
		return false;
	}
	return func_407(uParam0);
}

bool func_277(var uParam0)
{
	if (!func_57(uParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_82(*uParam0, &Var0, 1, 0, -1))
	{
		return false;
	}
	if (!func_83(Var0.f_4, 0))
	{
		return false;
	}
	return func_408(Var0.f_4);
}

bool func_278(struct<4> Param0)
{
	if (!func_57(&Param0))
	{
		return false;
	}
	if (func_407(&Param0))
	{
		return false;
	}
	return func_410(func_409(Param0));
}

int func_279(int iParam0, bool bParam1)
{
	if (!func_83(iParam0, 0))
	{
		return func_411(func_183(iParam0), bParam1);
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

bool func_280(int iParam0)
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

int func_281(int iParam0)
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

bool func_282(struct<2> Param0, var uParam2)
{
	if (!func_163(Param0))
	{
		return false;
	}
	func_412(uParam2);
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

int func_283(int iParam0)
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

int func_284(int iParam0, int iParam1)
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

bool func_285(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

bool func_286(bool bParam0)
{
	if (func_124() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_168(bParam0));
}

bool func_287(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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
		iParam3 = func_169(iParam2, -455129387);
		if (iParam3 == 0)
		{
			return false;
		}
	}
	if (!_0xd1555fbc96c88444(iParam2, iParam3, iParam4, uParam0, 10))
	{
		return false;
	}
	if (!func_413(uParam0, iParam1, iParam4, bParam5))
	{
		return false;
	}
	return true;
}

struct<16> func_288(int iParam0, var uParam1)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { func_172(iParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = iParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

int func_289(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_414(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_416(func_415(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_417(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_290(int iParam0, struct<17> Param1)
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

struct<4> func_291(bool bParam0)
{
	iVar0 = func_168(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_4)))
		{
			Global_1293346->f_4 = { func_172(923904168, func_232(bParam0), -740156546, bParam0) };
		}
		return Global_1293346->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_16)))
		{
			Global_1293346->f_16 = { func_172(923904168, func_232(bParam0), -740156546, 0) };
		}
		return Global_1293346->f_16;
	}
	return func_172(923904168, func_232(bParam0), -740156546, 0);
}

bool func_292(int iParam0, bool bParam1)
{
	if (func_114(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_418();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_293(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_231(iParam0, *uParam1, iParam2, bParam3, 1, iParam4) > 0;
}

bool func_294(int iParam0, var uParam1, int iParam2)
{
	if (func_419(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_295(bool bParam0)
{
	iVar0 = func_168(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_8)))
		{
			Global_1293346->f_8 = { func_172(271701509, func_232(bParam0), 12999093, 0) };
		}
		return Global_1293346->f_8;
	}
	return func_172(271701509, func_232(bParam0), 12999093, 0);
}

bool func_296(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_114(iParam0);
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
			if (func_420(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

int func_297(int iParam0)
{
	if (func_83(iParam0, 0))
	{
		if (func_101(iParam0, -1242251796))
		{
			if (func_101(iParam0, 2060589226))
			{
				return func_421();
			}
			return func_422();
		}
		else if (func_101(iParam0, 1919582297))
		{
			return func_309();
		}
		else if (func_101(iParam0, 1647670816))
		{
			return func_423();
		}
		else if (func_101(iParam0, 1147021565))
		{
			return func_312();
		}
	}
	if (Global_1940144->f_12)
	{
		return func_422();
	}
	else
	{
		return func_312();
	}
	return func_312();
}

bool func_298(int iParam0)
{
	return (iParam0 == 1401465909 || iParam0 == -1733092640);
}

int func_299()
{
	return 234350720;
}

bool func_300(int iParam0)
{
	if ((((((((((func_101(iParam0, 1147021565) || func_101(iParam0, -136654233)) || func_101(iParam0, -524514947)) || func_101(iParam0, -1238310989)) || func_101(iParam0, 1765172170)) || func_101(iParam0, 1490540191)) || func_101(iParam0, 1573112293)) || func_101(iParam0, -1242251796)) || func_101(iParam0, 1919582297)) || func_101(iParam0, -2085281117)) || iParam0 == -1994237933)
	{
		return true;
	}
	return false;
}

int func_301()
{
	return 234086528;
}

int func_302()
{
	return 234339573;
}

int func_303()
{
	return 226211840;
}

int func_304()
{
	return 234596496;
}

int func_305()
{
	return 150191252;
}

int func_306()
{
	return 217554935;
}

int func_307()
{
	return 234596352;
}

int func_308()
{
	return 167247871;
}

int func_309()
{
	return 99859463;
}

int func_310()
{
	return 233516164;
}

int func_311()
{
	return 232407015;
}

int func_312()
{
	return 234339543;
}

int func_313()
{
	return 234348672;
}

bool func_314(int iParam0)
{
	return func_250(Global_1940144->f_7, iParam0);
}

bool func_315(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_316(bool bParam0)
{
	if (func_314(1))
	{
		if (bParam0)
		{
			func_113("ITEM_UNUSABLE_PICKING_UP", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_314(2) && get_game_timer() >= Global_17388)
	{
		if (bParam0)
		{
			iVar0 = func_424(Global_34);
			if (iVar0 != 0)
			{
				if (_0x9a100f1cf4546629(iVar0))
				{
					func_113("ITEM_UNUSABLE_SKINNING", 10000, 0, 0, 0, 1);
					return false;
				}
			}
			func_113("ITEM_UNUSABLE_LOOTING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_314(4194304))
	{
		return false;
	}
	return true;
}

bool func_317(bool bParam0, bool bParam1)
{
	if (_is_ped_carrying(Global_34))
	{
		_0x6b67320e0d57856a(Global_34, &Var0, 2, 0);
		if (bParam1)
		{
			switch (Var0.f_1)
			{
				case 4:
					return true;
				default:
					break;
			}
		}
		if (bParam0)
		{
			func_113("ITEM_UNUSABLE_CARRYING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

bool func_318(bool bParam0, int iParam1, bool bParam2)
{
	if (_0x1d46b417f926d34d(Global_34))
	{
		return false;
	}
	else if (is_ped_in_any_vehicle(Global_34, true))
	{
		if (!is_ped_in_any_vehicle(Global_34, false))
		{
			return false;
		}
		iVar0 = get_vehicle_ped_is_using(Global_34);
		iVar1 = get_entity_model(iVar0);
		switch (iVar1)
		{
			case -1613317544:
			case 1493442814:
				if (bParam0)
				{
					func_113("ITEM_UNUSABLE_VEHICLE", 10000, 0, 0, 0, 1);
				}
				return false;
			case -1988548788:
			case 518773733:
			case 742064790:
			case 749266870:
				if (bParam0)
				{
					func_113("ITEM_UNUSABLE_CANNON", 10000, 0, 0, 0, 1);
				}
				return false;
		}
		if (!func_315(iParam1, 32) && !is_ped_on_mount(Global_34))
		{
			if (bParam2 || _0x2963b5c1637e8a27(iVar0) == Global_34)
			{
				return false;
			}
		}
	}
	else if (is_ped_getting_into_a_vehicle(Global_34))
	{
		return false;
	}
	return true;
}

bool func_319(int iParam0, int iParam1)
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

bool func_320(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		return _is_ped_getting_into_a_mount_seat(iParam0, true);
	}
	return false;
}

bool func_321(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!does_entity_exist(iParam0))
		{
			return false;
		}
		if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
		{
			return false;
		}
	}
	fVar0 = get_entity_speed(iParam0);
	fVar1 = _0xca95924c893a0c91(iParam0, fVar0);
	if (fVar1 <= 1.5f)
	{
		return true;
	}
	return false;
}

bool func_322()
{
	return (Global_1940311->f_1 || &Global_1940311 == 1);
}

bool func_323(int iParam0)
{
	return (Global_1958000 && iParam0) != 0;
}

bool func_324(int iParam0, int iParam1)
{
	if (!func_83(iParam0, 0))
	{
		return false;
	}
	if (Global_1940258->f_6)
	{
		return false;
	}
	iVar0 = func_425(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_426("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_427(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_428(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_429(iVar1);
				return true;
			}
			iVar3++;
		}
		func_429(iVar1);
	}
	return false;
}

bool func_325(int iParam0)
{
	if (!func_83(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_114(iParam0);
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
	iVar1 = func_430(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_431(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_432(iParam0);
	iVar2 = func_431(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == &Global_17411.f_55.f_644.f_1354.f_5[iVar2];
}

int func_326(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	iVar0 = 0;
	if (!func_83(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_111(iParam0);
	if (iVar1 == 307971639 || (bParam1 && iVar1 == -427144552))
	{
		iVar2 = func_425(iParam0, 1);
		if (iVar2 != 0)
		{
			return get_ped_ammo_by_type(Global_34, iVar2);
		}
	}
	else if (iVar1 == -427144552)
	{
		return func_433(iParam0, 0);
	}
	if (func_169(iParam0, -455129387) != 0)
	{
		iVar0 = _0xe787f05dfc977bde(func_168(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_434(iParam0, bParam2) };
		if (!_0xb881ca836cc4b6d4(&Var3))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_168(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

int func_327(int iParam0, int iParam1)
{
	if (!func_163(*iParam0))
	{
		return -1;
	}
	iVar0 = -1;
	iVar5 = func_164(*iParam0);
	switch (*iParam0)
	{
		case 4:
			iVar2 = iVar5;
			iVar1 = func_435(iVar2);
			if (iVar1 == -1)
			{
			}
			else
			{
				iVar0 = func_436(iVar1);
			}
			break;
		case 3:
			iVar3 = func_437(iVar5);
			iVar4 = func_438(iVar3);
			if (iVar4 == -1)
			{
			}
			else
			{
				iVar0 = func_439(iVar4);
			}
			break;
		default:
			break;
	}
	return iVar0;
}

bool func_328(int iParam0, int iParam1, bool bParam2)
{
	return !_0x375f5870a7b8bec1(func_330(func_440(iParam0, iParam1, bParam2)));
}

struct<8> func_329(int iParam0, int iParam1)
{
	return func_440(iParam0, iParam1, 1);
}

char* func_330(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

bool func_331(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(iParam0, iParam1);
}

bool func_332(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (&Global_1211392->f_48[iParam0]->f_18[iVar0] != 0 && &Global_1211392->f_48[iParam0]->f_18[iVar0] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_333(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 50);
}

bool func_334(int iParam0)
{
	if (Global_17411.f_2966 == 1)
	{
		if (iParam0 == -1)
		{
			return false;
		}
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			if (Global_17411.f_2966.f_1[iVar1]->f_4 == 0)
			{
			}
			else if (func_441(Global_17411.f_2966.f_1[iVar1]->f_1))
			{
			}
			else
			{
				iVar2 = 0;
				while (iVar2 <= 3)
				{
					if (func_441((*Global_1211392->f_48[iParam0])[iVar2]->f_1))
					{
					}
					else
					{
						fVar0 = func_442(Global_17411.f_2966.f_1[iVar1]->f_1, (*Global_1211392->f_48[iParam0])[iVar2]->f_1);
						if (fVar0 < 300f)
						{
							return false;
						}
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	if (func_443(4))
	{
		return false;
	}
	if (func_337())
	{
		return true;
	}
	if (func_444())
	{
		return false;
	}
	if (func_445(1, 255))
	{
		return false;
	}
	if (func_163(func_162()) && Global_1211392->f_1.f_20 != 3)
	{
		return false;
	}
	return true;
}

bool func_335(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (&Global_1211392->f_48[iParam0]->f_18[iVar0] != 0 && func_177(&(Global_1211392->f_48[iParam0]->f_18[iVar0]), 1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_336(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (&Global_1211392->f_48[iParam0]->f_18[iVar0] != 0 && func_446(&(Global_1211392->f_48[iParam0]->f_18[iVar0])))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_337()
{
	return func_447(func_255(0));
}

bool func_338(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!does_entity_exist(iParam0))
		{
			return false;
		}
	}
	return _is_metaped_using_component(iParam0, iParam1);
}

int func_339()
{
	if (_is_ped_carrying(Global_34))
	{
		return 1;
	}
	if (get_current_ped_weapon(Global_34, &iVar0, true, 0, false))
	{
	}
	if (get_current_ped_weapon(Global_34, &iVar1, true, 1, false))
	{
	}
	if (iVar1 == -1569615261)
	{
		if (iVar0 == -1569615261)
		{
			return 1;
		}
		else if ((((is_weapon_valid(iVar0) && _is_weapon_two_handed(iVar0)) && !func_448(iVar0)) && !_is_ped_getting_into_a_mount_seat(Global_34, true)) && !(is_ped_in_any_vehicle(Global_34, false) && !_0xa24c1d341c6e0d53(1, 0, 0)))
		{
			return 3;
		}
		else if (_is_weapon_binoculars(iVar0))
		{
			return 1;
		}
		else if ((is_weapon_valid(iVar0) && func_448(iVar0)) || _is_weapon_lasso(iVar0))
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

int func_340(int iParam0)
{
	switch (iParam0)
	{
		case 1433048902:
			return 2;
		case -1602657245:
			return 4;
		case -1991037110:
			return 5;
		case 1047281747:
			return 6;
		case -398744080:
			return 7;
		case -1066874997:
			return 8;
		case -2085219828:
			return 11;
		case 2064962445:
			return 12;
		case -1620920647:
			return 15;
		case -1664530975:
			return 16;
		case -597058368:
			return 21;
		case 128702355:
			return 24;
		case -2051332199:
			return 27;
		case 546981776:
			return 28;
		case -2013384490:
			return 29;
		case 228922461:
			return 30;
		case -746674788:
			return 32;
		case 599861917:
			return 34;
		case -1781387050:
			return 35;
		case 2006811763:
			return 38;
		case -90546043:
			return 39;
		case 1216456215:
			return 49;
		case 746300881:
			return 50;
		case -435006002:
			return 51;
		case -624139784:
			return 52;
		case -529638012:
			return 53;
		case 1338475089:
			return 40;
		case 2605459:
			return 41;
		case 1071702353:
			return 42;
		case -1183422860:
			return 43;
		case -1957546791:
			return 44;
		case -589542533:
			return 45;
		case -1776738559:
			return 46;
		case 1602215994:
			return 47;
		case -396757268:
			return 48;
	}
	return 0;
}

void func_341(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_449(iParam0);
	iVar1 = func_340(iVar0);
	if (iVar1 != iParam0)
	{
		func_450(iVar1, 4);
	}
	if (!func_451(iParam0))
	{
		return;
	}
	if (func_452(iParam0))
	{
		return;
	}
	func_450(iParam0, 4);
	func_453(iParam0, bParam1);
	if (!func_454(iParam0))
	{
		func_455(iParam0, 1, 0);
	}
	if (bParam1)
	{
		if (!func_456(0, 0, 1))
		{
			func_457(1, 6);
		}
	}
}

bool func_342(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (_0x2d19bc4df626cbe7(iParam0, iParam1, iParam2, iParam3))
	{
		_task_item_interaction(iParam0, iParam1, iParam2, iParam3, 0, -1082130432);
		Global_1940144->f_26 = 1;
		return true;
	}
	_0xd962f8579d702db5();
	return false;
}

void func_343(int iParam0)
{
	Var0.f_1 = 20;
	if ((func_101(iParam0, 1573112293) || func_101(iParam0, 672467738)) || func_101(iParam0, -550842268))
	{
		bVar37 = true;
	}
	if (func_111(iParam0) == 2085633299)
	{
		_item_database_fillout_item_effects_ids(iParam0, &Var0);
		_0xd962f8579d702db5();
		iVar29 = 0;
		while (iVar29 < Var0)
		{
			if (!_item_database_fillout_item_effects_id_info(&(Var0.f_1[iVar29]), &Var22))
			{
			}
			else if (-943921969 == Var22.f_1)
			{
				fVar30 = func_458(0, Var22.f_2);
				func_459(Var22.f_2);
				bVar39 = true;
			}
			else if (-1104847406 == Var22.f_1)
			{
				fVar31 = func_458(2, Var22.f_2);
				func_460(Var22.f_2, 0);
				bVar38 = true;
			}
			else if (381158954 == Var22.f_1)
			{
				fVar32 = func_458(1, Var22.f_2);
				func_461(Var22.f_2);
			}
			else if (-416929031 == Var22.f_1)
			{
				fVar33 = func_462(to_float(Var22.f_2), Var22.f_5);
				func_463(0, fVar33, 1, 1, bVar37);
				bVar39 = true;
			}
			else if (1857353317 == Var22.f_1)
			{
				fVar34 = func_462(to_float(Var22.f_2), Var22.f_5);
				func_463(2, fVar34, 1, 1, bVar37);
				bVar38 = true;
			}
			else if (1681823811 == Var22.f_1)
			{
				fVar35 = func_462(to_float(Var22.f_2), Var22.f_5);
				func_463(1, fVar35, 1, 1, bVar37);
			}
			else if (2062242710 == Var22.f_1)
			{
				fVar36 = func_464(to_float(Var22.f_3), Var22.f_4);
				func_465(19, fVar36, 1, 1);
				bVar39 = true;
			}
			else if (-826379728 == Var22.f_1)
			{
				fVar36 = func_464(to_float(Var22.f_3), Var22.f_4);
				func_465(20, fVar36, 1, 1);
				bVar38 = true;
			}
			else if (-1191740624 == Var22.f_1)
			{
				fVar36 = func_464(to_float(Var22.f_3), Var22.f_4);
				func_465(18, fVar36, 1, 1);
			}
			else if (1869697234 == Var22.f_1)
			{
				fVar36 = func_464(to_float(Var22.f_3), Var22.f_4);
				func_465(0, fVar36, 1, 1);
				bVar39 = true;
			}
			else if (1342237631 == Var22.f_1)
			{
				fVar36 = func_464(to_float(Var22.f_3), Var22.f_4);
				func_465(2, fVar36, 1, 1);
				bVar38 = true;
			}
			else if (-1240225157 == Var22.f_1)
			{
				fVar36 = func_464(to_float(Var22.f_3), Var22.f_4);
				func_465(1, fVar36, 1, 1);
			}
			else if (-816334026 == Var22.f_1)
			{
				func_466(to_float(Var22.f_2), 1);
			}
			iVar29++;
		}
		if (bVar39 || func_101(iParam0, -537818634))
		{
			func_468(func_467(-704089207), 1);
		}
		if (func_101(iParam0, -1457797660))
		{
			func_468(func_467(-1909697259), 1);
		}
		if (bVar38)
		{
			func_468(func_467(704570463), 1);
		}
		switch (iParam0)
		{
			case -1735850413:
			case -241345764:
				chal_add_goal_progress_int(-1823988672, 1517929953, 1);
				break;
		}
		_0x0e1db1f8f5b561dc(fVar30, fVar32, fVar31, round((fVar33 / 2f)), round((fVar35 / 2f)), round((fVar34 / 2f)));
	}
}

int func_344(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!func_83(iParam0, 0))
	{
		return 0;
	}
	if (iParam3 == -142743235)
	{
		if (func_469(iParam0))
		{
			iParam3 = 562618531;
		}
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_425(iParam0, 1);
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
			func_470(iParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
		}
		return 0;
	}
	if (!func_177(iParam0, 1))
	{
		return 0;
	}
	Var5 = { func_471(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_326(iParam0, 0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_326(iParam0, 0, 0, 0) - iParam1) < 0)
		{
			func_344(iParam0, func_326(iParam0, 0, 0, 0), bParam2, iParam3);
			return 0;
		}
	}
	if (func_111(iParam0) == -427144552)
	{
		if (!func_472(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_97(iParam0, iParam1, iParam3, bParam2, 0))
	{
		return 0;
	}
	else
	{
		Var7 = { func_171(iParam0, 0, 0) };
		if (func_286(0) && Var7.f_4 == 1084182731)
		{
			func_473(1, 0, 0);
		}
	}
	if (iParam0 == -569063887)
	{
		Global_1940144->f_21 = 0;
	}
	if (!func_286(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_470(iParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
	}
	return 1;
}

void func_345(int iParam0)
{
	if (does_entity_exist(player_ped_id()))
	{
		if (iParam0 == 1)
		{
			decor_set_bool(player_ped_id(), "Inspecting_Item", true);
		}
		else if (decor_exist_on(player_ped_id(), "Inspecting_Item"))
		{
			decor_remove(player_ped_id(), "Inspecting_Item");
		}
	}
}

bool func_346(int iParam0)
{
	return &Global_1952637->f_595[iParam0] > 0;
}

void func_347(int iParam0)
{
	Global_1952637->f_595[iParam0] = &Global_1952637->f_595[iParam0] + 1;
}

bool func_348()
{
	if (Global_1952637->f_3485)
	{
		return true;
	}
	if (absi((get_game_timer() - Global_1952637->f_3483)) < 1250)
	{
		return true;
	}
	if (func_474())
	{
		return true;
	}
	if (_0xec7e480ff8bd0bed(Global_34))
	{
		return true;
	}
	return false;
}

int func_349(int iParam0)
{
	iVar0 = func_114(iParam0);
	if (((iVar0 == 81053684 || iVar0 == -525676072) || func_101(iParam0, 160827531)) || func_101(iParam0, -1303648999))
	{
		return 1;
	}
	return 0;
}

void func_350(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_351(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_357(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_352(int iParam0)
{
	if (-1829635046 == func_475(81053684))
	{
		if (func_357(iParam0))
		{
			return true;
		}
	}
	else if (func_476(-525676072, iParam0) || func_101(func_477(1742327865), -1303648999))
	{
		if (func_357(iParam0))
		{
			return true;
		}
	}
	return false;
}

int func_353()
{
	iVar0 = 1549701178;
	switch (func_339())
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

int func_354()
{
	iVar0 = 614608656;
	switch (func_339())
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

int func_355()
{
	iVar0 = -1832677570;
	switch (func_339())
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

int func_356()
{
	iVar0 = 1623252156;
	switch (func_339())
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

bool func_357(int iParam0)
{
	if (func_476(81053684, iParam0))
	{
		return true;
	}
	if (func_476(-525676072, iParam0))
	{
		return true;
	}
	return false;
}

void func_358(int iParam0)
{
	Global_1952637 = (&Global_1952637 - (Global_1952637 && iParam0));
}

void func_359(int iParam0, int iParam1, int iParam2)
{
	(Global_1952637->f_83[func_224(iParam0, 1)])->f_11 = ((Global_1952637->f_83[func_224(iParam0, 1)])->f_11 - ((Global_1952637->f_83[func_224(iParam0, 1)])->f_11 && iParam1));
}

int func_360(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -2061583405:
			return Global_1952637->f_3334.f_28;
		case 81053684:
			return Global_1952637->f_3334.f_30;
		case -525676072:
			return Global_1952637->f_3334.f_29;
		case -1719060085:
			return Global_1952637->f_3334.f_31;
		case 1388798186:
			return Global_1952637->f_3334.f_33.f_7;
		case 119907797:
			return Global_1952637->f_3334.f_32;
		case -999503751:
			if (bParam1)
			{
				return Global_1952637->f_3334.f_27;
			}
			else
			{
				return func_478();
			}
			break;
	}
	return 0;
}

int func_361(int iParam0, bool bParam1)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case -2061583405:
			iVar0 = Global_1952637->f_3334.f_33.f_1;
			break;
		case 81053684:
			iVar0 = 1;
			break;
		case -525676072:
			iVar0 = Global_1952637->f_3334.f_33.f_2;
			break;
		case -1719060085:
			iVar0 = 1;
			break;
		case -999503751:
			iVar0 = Global_1952637->f_3334.f_33;
			break;
		case 1388798186:
			iVar0 = 1;
			break;
		case 119907797:
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

bool func_362(int iParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_1952637->f_3334.f_26)
	{
		if (iParam0 == &Global_1952637->f_3334[*uParam1])
		{
			return true;
		}
		*uParam1++;
	}
	return false;
}

int func_363(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = iParam0;
	if (Global_1952637->f_3334.f_26 >= 25)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (func_362(iVar1, &uVar0))
	{
		return 0;
	}
	if (!func_479(iParam0, 0))
	{
		return 0;
	}
	if (bParam3 && !func_480(iParam0, 0, bParam4))
	{
		return 0;
	}
	Global_1952637->f_3334[Global_1952637->f_3334.f_26] = iVar1;
	Global_1952637->f_3334.f_26++;
	*uParam1++;
	return 1;
}

void func_364()
{
	iVar0 = 0;
	while (iVar0 < Global_1952637->f_3334.f_26)
	{
		Global_17411.f_55.f_644[iVar0] = &Global_1952637->f_3334[iVar0];
		iVar0++;
	}
	Global_17411.f_55.f_644.f_27 = Global_1952637->f_3334.f_27;
	Global_17411.f_55.f_644.f_28 = Global_1952637->f_3334.f_28;
	Global_17411.f_55.f_644.f_29 = Global_1952637->f_3334.f_29;
	Global_17411.f_55.f_644.f_30 = Global_1952637->f_3334.f_30;
	Global_17411.f_55.f_644.f_31 = Global_1952637->f_3334.f_31;
	Global_17411.f_55.f_644.f_32 = Global_1952637->f_3334.f_32;
	Global_17411.f_55.f_644.f_26 = Global_1952637->f_3334.f_26;
}

bool func_365(int iParam0)
{
	return func_482(func_481(iParam0));
}

void func_366(bool bParam0, int iParam1)
{
	if (!func_83(iParam1, 0))
	{
		return;
	}
	iVar7 = -1;
	if (!func_483(iParam1, &Var0, 805880880, 0, 0, -401018458))
	{
		Var0 = "_PLACEHOLDER";
		Var0.f_1 = "inventory_items";
	}
	if (is_string_null_or_empty(Var0))
	{
		return;
	}
	if (bParam0)
	{
		sVar4 = "Transaction_Positive";
		iVar6 = 109029619;
		iVar7 = func_484(iParam1);
		if ((iVar7 > 0 && iVar7 < 11) && func_485(4, iVar7))
		{
			sVar3 = "OUTFIT_STORED_LITERAL";
			sVar5 = func_330(func_486(iVar7));
		}
		else
		{
			iVar8 = func_487(iParam1);
			if (func_83(iVar8, 0))
			{
				iParam1 = iVar8;
			}
			sVar3 = "ITEM_STORED";
			sVar5 = _create_var_string(0, func_488(iParam1));
		}
	}
	else
	{
		sVar4 = "Transaction_Positive";
		iVar6 = 109029619;
		iVar7 = func_484(iParam1);
		if ((iVar7 > 0 && iVar7 < 11) && func_485(4, iVar7))
		{
			sVar3 = "OUTFIT_REMOVED_LITERAL";
			sVar5 = func_330(func_486(iVar7));
		}
		else
		{
			iVar9 = func_487(iParam1);
			if (func_83(iVar9, 0))
			{
				iParam1 = iVar9;
			}
			sVar3 = "ITEM_REMOVED";
			sVar5 = _create_var_string(0, func_488(iParam1));
		}
	}
	sVar10 = func_489(_create_var_string(10, sVar3, sVar5), iVar6);
	func_490(sVar10, Var0.f_1, get_hash_key(Var0), 0, iVar6, "Transaction_Feed_Sounds", sVar4, 0, 1);
}

void func_367(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_491();
	}
	if (bParam0)
	{
		func_209(8);
		func_209(512);
	}
	else
	{
		func_209(8);
		func_209(16);
	}
}

int func_368()
{
	return Global_1952637->f_1;
}

bool func_369(int iParam0, int iParam1)
{
	iVar0 = func_114(iParam1);
	iVar1 = func_114(iParam0);
	if (iVar0 == iVar1)
	{
		return true;
	}
	if (func_492(iParam1) && func_492(iParam0))
	{
		return true;
	}
	return false;
}

void func_370(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	func_493(iParam0, 0, 0, bParam3, bParam5);
	func_220(iParam1, 1, bParam2, iParam4, bParam3, bParam5);
}

int func_371(int iParam0, int iParam1)
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
			return 735520874;
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

void func_372()
{
	Global_1952637->f_1556 = Global_1952637->f_1675;
	Global_1952637->f_1552 = Global_1952637->f_1554;
	Global_1952637->f_1552.f_1 = Global_1952637->f_1554.f_1;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1952637->f_1556.f_1[iVar0] = { *Global_1952637->f_1675.f_1[iVar0] };
		iVar0++;
	}
}

void func_373(int iParam0)
{
	func_359(iParam0, 8, 6);
}

void func_374(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3)
	{
		if ((*iParam1 == 832230214 || *iParam1 == 30652334) || *iParam1 == 750544038)
		{
			iVar0 = 16;
			if (func_114(&(uParam0->f_1[iVar0])) != 1882579758)
			{
				return;
			}
			iVar1 = func_494(&(uParam0->f_1[iVar0]));
			if (iVar1 != 0 && iVar1 != &Global_1952637->f_83[iParam2])
			{
				*iParam1 = iVar1;
				return;
			}
		}
		if (!func_495(*iParam1, iParam2))
		{
			*iParam1 = &Global_1952637->f_1675.f_1[iParam2];
			return;
		}
	}
	*iParam1 = &Global_1952637->f_83[iParam2];
}

void func_375(int iParam0)
{
	func_496(&(Global_1952637->f_2897), iParam0);
}

void func_376(int iParam0, int iParam1)
{
	if (iParam1 & 8 != 0)
	{
		return;
	}
	func_497(&(Global_1952637->f_2897), iParam0, iParam1);
}

void func_377(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_378(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	iVar0 = iParam1;
	bVar1 = func_227(iVar0, 1);
	if (bParam3 && func_101(&(uParam0->f_1[iParam2]), 343781202))
	{
		func_498(uParam0, &(uParam0->f_1[iParam2]));
	}
	switch (func_371(iParam2, 1))
	{
		case -1130352927:
			func_499(uParam0, iVar0, iParam2, iParam4);
			break;
		case 1367443060:
			func_500(uParam0, iVar0, iParam2);
			break;
		case -338487716:
			func_501(uParam0, iVar0, bVar1, iParam4);
			break;
		case 1108822547:
			func_502(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1742327865:
			func_503(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1250092473:
			func_504(uParam0, bVar1, iVar0, iParam2, iParam4);
			break;
		case -893163968:
			func_505(uParam0, bVar1, iVar0, iParam4);
			break;
		case -450913544:
			func_506(uParam0, bVar1, iVar0, iParam2, iParam4);
			break;
		case -1197751823:
			func_507(uParam0, bVar1, iVar0, iParam4);
			break;
		case 304805134:
			func_508(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1145151482:
			func_509(uParam0, bVar1, iParam4);
			break;
		case -207860920:
			func_510(uParam0, bVar1, iVar0, iParam4);
			break;
		case -426430150:
			func_511(uParam0, bVar1, iParam4);
			break;
		case 788010710:
			func_512(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1958421083:
			func_513(uParam0, bVar1, iVar0, iParam4);
			break;
		case -1944638739:
			func_514(uParam0, bVar1, iVar0, iParam4);
			break;
	}
}

int func_379(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	if (func_368() == 24043185)
	{
		iVar0 = 1;
	}
	if (iParam2 == 289238755)
	{
		return 289238755;
	}
	if (iParam2 != 0 && func_515(iParam0, iVar0, iParam2) != -1)
	{
		return iParam2;
	}
	if (func_516(iParam0, func_371(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_380(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 <= 0)
	{
		return;
	}
	if (func_216(4718592))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_517(&(uParam0->f_2[iVar0]), bParam1, bParam2);
		iVar0++;
	}
	if (bParam4)
	{
		bVar1 = false;
		if (Global_1952637->f_1675 != 491602716 || !func_485(2, -1))
		{
			bVar1 = true;
		}
		else if (!func_101(Global_1952637->f_1675, -166674229) && (Global_1952637->f_1675 != 491602716 || !func_485(2, -1)))
		{
			bVar1 = true;
		}
		if (bVar1)
		{
			Global_1952637->f_1675 = 491602716;
			Global_1952637->f_1556 = 491602716;
			func_518(-1, 0, 6);
			func_117(27, 0, 65536, 0, 0);
		}
	}
	if (bParam3)
	{
		func_367(0, 1);
	}
}

int func_381(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_519(&uParam0, iParam4, bParam5, iParam6);
}

bool func_382(struct<4> Param0, int iParam4, bool bParam5)
{
	if (!func_286(0))
	{
		return func_520(&Param0, iParam4, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_82(Param0, &Var0, bParam5, 0, -1))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!_0x734311e2852760d0(func_168(bParam5), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

struct<4> func_383()
{
	return Var0;
}

bool func_384(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	if (func_521(Global_34, iParam0, 0, 1) < 2f && _0xd543d3a8fde4f185(Global_34, iParam0))
	{
		return true;
	}
	return false;
}

bool func_385()
{
	if (!_unlock_is_unlocked(-1624899219))
	{
		func_182(2);
		return false;
	}
	if (!func_247())
	{
		func_182(9);
		return false;
	}
	if (Global_1051439->f_72[34]->f_1 & 128 != 0)
	{
		func_182(3);
		return false;
	}
	Var0 = { func_255(0) };
	if (func_163(Var0))
	{
		iVar2 = -1;
		switch (Var0)
		{
			case 6:
				iVar3 = func_256(player_id(), 0);
				if (iVar3 != -1)
				{
					iVar2 = func_522(iVar3);
				}
				break;
			case 3:
			case 4:
				iVar4 = func_327(&Var0, 0);
				if (iVar4 != -1)
				{
					if (func_328(iVar4, 461218520, 0))
					{
						iVar2 = 46;
					}
				}
				break;
		}
		if (iVar2 != -1)
		{
			func_182(iVar2);
			return false;
		}
	}
	if (func_523())
	{
		func_182(4);
		return false;
	}
	if (func_445(4, network_player_id_to_int()) && Global_1051439->f_72[34]->f_49 & 1073741824 == 0)
	{
		func_182(5);
		return false;
	}
	if (func_524(131072, 255))
	{
		func_182(7);
		return false;
	}
	if (func_525())
	{
		func_182(8);
		return false;
	}
	return true;
}

bool func_386(int iParam0, int iParam1)
{
	if (((is_ped_in_combat(Global_34, 0) || is_ped_in_melee_combat(Global_34)) || func_315(iParam1, 1024)) && _0x336b3d200ab007cb(Global_34, Global_35, iParam0, iParam1) > 0)
	{
		return true;
	}
	return false;
}

bool func_387(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102219->f_3 & 32 != 0;
	}
	return func_524(32, iParam0);
}

bool func_388(int iParam0)
{
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 3)
	{
		return true;
	}
	return false;
}

bool func_389()
{
	return (Global_1952637->f_1 != 24043185 && Global_1952637->f_1 != 2026485318);
}

void func_390(bool bParam0)
{
	if (bParam0)
	{
		func_526(4);
	}
	else
	{
		func_238(4);
	}
}

void func_391(bool bParam0)
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

bool func_392()
{
	return Global_1915715->f_20643;
}

int func_393(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (!bParam7 && _is_any_app_running())
	{
		return 0;
	}
	iVar0 = &Global_1296859->f_154[&Global_1296859];
	iVar1 = Global_1296859->f_8;
	bVar2 = is_entity_dead(iVar1);
	bVar3 = _0xb655db7582aec805(iVar1);
	if (bVar2 || bVar3)
	{
		if (!bParam5)
		{
			return 0;
		}
	}
	else
	{
		if (!bParam4)
		{
			if (_0xec7e480ff8bd0bed(Global_34))
			{
				return 0;
			}
			if (_0x4912dfe492db98cd(Global_34, "inInspectionMode"))
			{
				return 0;
			}
		}
		if (bParam0 && !is_player_control_on(iVar0))
		{
			if (bParam6 && Global_1102219->f_3 & 32 != 0)
			{
			}
			else if (decor_exist_on(iVar1, "iMinigameSeat"))
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (!bParam1)
	{
		if (Global_1915715->f_20638 || Global_1915715->f_22504.f_1)
		{
			return 0;
		}
		if (_0xd04241bbf6d03a5e(Global_34) != 0)
		{
			return 0;
		}
	}
	if (func_527())
	{
		return 0;
	}
	if (Global_15)
	{
		return 0;
	}
	if (!bParam2 && (((Global_1940144->f_10 || Global_1940144->f_11) || Global_1940144->f_12) || Global_1940144->f_13))
	{
		return 0;
	}
	if (!bParam3)
	{
		iVar4 = network_player_id_to_int();
		if (Global_1248240->f_9297 != -1)
		{
			return 0;
		}
		if ((*Global_1128574)[iVar4]->f_34 & 1 != 0 && (*Global_1128574)[iVar4]->f_34 & 2 == 0)
		{
			return 0;
		}
		if (Global_1130634->f_293)
		{
			return 0;
		}
		if (Global_1572887->f_106.f_75 > 11 && Global_1572887->f_106.f_75 < 15)
		{
			return 0;
		}
		else if (Global_1572887->f_106.f_75 > 15)
		{
			return 0;
		}
	}
	if (!bParam8)
	{
		if ((_get_global_block_can_be_accessed(2) && _get_global_block_can_be_accessed(8)) && _get_global_block_can_be_accessed(9))
		{
			if ((Global_1048576 || Global_2883584) // PointerArith)
			{
				return 0;
			}
			if (&Global_1048581)
			{
				return 0;
			}
			if (&Global_1048585)
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_394(int iParam0, int iParam1, int iParam2)
{
	return func_250((*Global_1196567)[iParam2][iParam0], iParam1);
}

var func_395(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	_0xde544b7ec0c187cc(&uVar0);
	if (!network_is_game_in_progress())
	{
		return uVar0;
	}
	if (func_528() != 0)
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
				iVar8 = _create_volume_cylinder_with_custom_name(vParam0, vParam3, vParam6, func_529());
				break;
			case -432403087:
				iVar8 = _create_volume_sphere_with_custom_name(vParam0, vParam3, vParam6, func_529());
				break;
			case -1612834106:
				iVar8 = _create_volume_box_with_custom_name(vParam0, vParam3, vParam6, func_529());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_530(get_player_team(iVar5)));
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
			if (func_531(iVar2))
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
				if (iVar9 & 8192 != 0 && func_532(iVar2) != 1)
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
					if (!func_533(iVar10))
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

int func_396(var uParam0, struct<21> Param1)
{
	if (!func_534(uParam0))
	{
		return 0;
	}
	*uParam0->f_2[*uParam0] = { Param1 };
	*uParam0++;
	return 1;
}

bool func_397(int iParam0, int iParam1)
{
	return is_bit_set(&(Global_17411.f_2565[iParam0]), iParam1);
}

bool func_398(int iParam0)
{
	if (func_400(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_399(int iParam0)
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

bool func_400(int iParam0, int iParam1)
{
	return (Global_1904651->f_33[iParam0]->f_2 && iParam1) != 0;
}

bool func_401(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_402()
{
	if (!func_247())
	{
		return false;
	}
	return Global_1904651->f_8684;
}

int func_403(int iParam0)
{
	Var0 = func_148();
	Var0.f_2 = 22;
	Var0.f_3 = iParam0;
	if (!_datafile_get_hash(&uVar5, &Var0))
	{
		return 0;
	}
	return uVar5;
}

int func_404(int iParam0)
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

int func_405(int iParam0)
{
	if (iParam0 == 255 || iParam0 == network_player_id_to_int())
	{
		return _0x32c90cdfaf40514c();
	}
	return Global_1145091[iParam0];
}

int func_406(int iParam0)
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

bool func_407(var uParam0)
{
	if (!func_57(uParam0))
	{
		return false;
	}
	return _0x0137c77a2ec64536(uParam0);
}

bool func_408(var uParam0)
{
	return _unlock_is_new(func_535(uParam0));
}

int func_409(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (!func_57(&uParam0))
	{
		return 0;
	}
	return _0x4a606c17276e1bcc(&uParam0);
}

bool func_410(int iParam0)
{
	if (iParam0 <= 0)
	{
		return false;
	}
	return (get_cloud_time_as_int() + func_536()) > iParam0;
}

int func_411(int iParam0, bool bParam1)
{
	if (!func_331(iParam0, 2))
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

void func_412(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

bool func_413(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		else if (func_407((*uParam0)[iVar0]))
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
				*(*uParam0)[iVar0] = { func_383() };
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

bool func_414(int iParam0, var uParam1)
{
	uVar0 = _0x6c9f12700bce69f4(iParam0, uParam1);
	if (iParam0 == 1702063850)
	{
		if ((func_537(uParam1->f_8, iParam0, uVar0, 2048) || func_537(uParam1->f_8, iParam0, uVar0, 32768)) || func_537(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_537(uParam1->f_8, iParam0, uVar0, 4) || func_537(uParam1->f_8, iParam0, uVar0, 256)) || func_537(uParam1->f_8, iParam0, uVar0, 65536)) || func_537(uParam1->f_8, iParam0, uVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -1406934746)
	{
		if (((func_537(uParam1->f_8, iParam0, uVar0, 1) || func_537(uParam1->f_8, iParam0, uVar0, 8)) || func_537(uParam1->f_8, iParam0, uVar0, 65536)) || func_537(uParam1->f_8, iParam0, uVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -1318406457)
	{
		if (((func_537(uParam1->f_8, iParam0, uVar0, 1) || func_537(uParam1->f_8, iParam0, uVar0, 16)) || func_537(uParam1->f_8, iParam0, uVar0, 2)) || func_537(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_537(uParam1->f_8, iParam0, uVar0, 8) || func_537(uParam1->f_8, iParam0, uVar0, 4096)) || func_537(uParam1->f_8, iParam0, uVar0, 256)) || func_537(uParam1->f_8, iParam0, uVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_415(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 16, uParam2, 0);
}

int func_416(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (_cashinventory_transaction_checkout(iParam1))
		{
			func_538(iParam1, 1, 0, 0);
			return iParam1;
		}
		_cashinventory_transaction_delete(iParam1);
	}
	else if (_cashinventory_transaction_get_num_of_items(iParam1) == 0)
	{
		_cashinventory_transaction_delete(iParam1);
	}
	func_538(iParam1, 2, 0, 0);
	return -1;
}

int func_417(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_538(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

bool func_418()
{
	return (func_539(-1185145312, 0, 0, 0) > 0 && func_381(func_172(889965687, func_232(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

bool func_419(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_168(0);
	*uParam1 = { func_172(iParam0, func_291(0), iParam3, 0) };
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

bool func_420(int iParam0, int iParam1, int iParam2)
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

int func_421()
{
	return 232341495;
}

int func_422()
{
	return 232439799;
}

int func_423()
{
	return 230145239;
}

int func_424(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_ped_injured(iParam0))
	{
		return 0;
	}
	if (_0x5463c962bc7777c3(iParam0, 0, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	if (_0x5463c962bc7777c3(iParam0, 2, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	if (_0x5463c962bc7777c3(iParam0, 1, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	return 0;
}

int func_425(int iParam0, int iParam1)
{
	if (!func_83(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_111(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_101(iParam0, 1399091007))
	{
		func_540(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_426(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_168(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_427(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_428(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

int func_429(int iParam0)
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

int func_430(int iParam0)
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

int func_431(var uParam0, int iParam1)
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

int func_432(int iParam0)
{
	iVar0 = func_114(iParam0);
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

int func_433(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_541(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_542(&Var0, func_291(0));
	}
	if (!func_543(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_429(iVar14);
	return uVar15;
}

struct<4> func_434(int iParam0, bool bParam1)
{
	Var0 = { func_171(iParam0, bParam1, 0) };
	return func_172(iParam0, Var0, Var0.f_4, bParam1);
}

int func_435(int iParam0)
{
	iVar0 = -1;
	if (func_544(&Var1, iParam0))
	{
		iVar0 = ((func_545() - _0xe13634bb6baf0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_436(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return (*Global_1257541)[iParam0]->f_1;
}

int func_437(int iParam0)
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

var func_438(int iParam0)
{
	iVar0 = func_547(0, (func_546() - 1), &iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	return func_548(iVar0);
}

int func_439(int iParam0)
{
	return &(Global_1109804->f_5737[iParam0]);
}

struct<8> func_440(int iParam0, int iParam1, bool bParam2)
{
	if (!func_549(iParam0))
	{
		return Var5;
	}
	if (!func_550(&Var0))
	{
		return Var5;
	}
	if (!func_551(Var0, &(Var0.f_1), 13, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_551(Var0, &(Var0.f_1), 14, iParam0, 0, 1))
	{
		return Var5;
	}
	if (!func_551(Var0, &(Var0.f_1), 19, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_551(Var0, &(Var0.f_1), 21, iParam1, 0, bParam2))
	{
		if (bParam2)
		{
		}
		return Var5;
	}
	return func_552(Var0);
}

bool func_441(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

float func_442(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

bool func_443(int iParam0)
{
	return func_250(Global_1211392->f_1196, iParam0);
}

bool func_444()
{
	return Global_263042[&Global_1296859] > 2;
}

bool func_445(int iParam0, int iParam1)
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

bool func_446(int iParam0)
{
	if (func_553(iParam0) == -1)
	{
		return false;
	}
	return true;
}

bool func_447(struct<2> Param0)
{
	return func_554(Param0, 1, 4);
}

bool func_448(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

int func_449(int iParam0)
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
			return -241666815;
		case 20:
			return -1781387050;
		case 21:
			return -597058368;
		case 24:
			return 128702355;
		case 27:
			return -2051332199;
		case 28:
			return 546981776;
		case 29:
			return -2013384490;
		case 30:
			return 228922461;
		case 32:
			return -746674788;
		case 34:
			return 599861917;
		case 35:
			return -1781387050;
		case 38:
			return 2006811763;
		case 39:
			return -90546043;
		case 49:
			return 1216456215;
		case 50:
			return 746300881;
		case 51:
			return -435006002;
		case 52:
			return -624139784;
		case 53:
			return -529638012;
		case 40:
			return 1338475089;
		case 41:
			return 2605459;
		case 42:
			return 1071702353;
		case 43:
			return -1183422860;
		case 44:
			return -1957546791;
		case 45:
			return -589542533;
		case 46:
			return -1776738559;
		case 47:
			return 1602215994;
		case 48:
			return -396757268;
		default:
			break;
	}
	return 0;
}

void func_450(int iParam0, int iParam1)
{
	if (!func_451(iParam0))
	{
		return;
	}
	if (func_124() != -1)
	{
		Global_17411[iParam0] = (Global_17411[iParam0] || iParam1);
		return;
	}
	Global_39.f_4667[iParam0] = (Global_39.f_4667[iParam0] || iParam1);
}

bool func_451(int iParam0)
{
	return !iParam0 <= 0;
}

bool func_452(int iParam0)
{
	if (!func_451(iParam0))
	{
		return false;
	}
	return func_555(iParam0, 4, 1);
}

void func_453(int iParam0, bool bParam1)
{
	if (!func_451(iParam0))
	{
		return;
	}
	if (func_556(iParam0))
	{
		return;
	}
	func_450(iParam0, 2);
	if (bParam1)
	{
		if (!func_456(0, 0, 1))
		{
			if (func_124() == -1)
			{
				func_457(1, 6);
			}
			else
			{
				func_557(1, 1017438712);
			}
		}
	}
}

bool func_454(int iParam0)
{
	if (!func_451(iParam0))
	{
		return false;
	}
	return func_555(iParam0, 1, 1);
}

void func_455(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_451(iParam0))
	{
		return;
	}
	if (func_454(iParam0))
	{
		return;
	}
	if (!bParam1)
	{
		bParam1 = func_558(iParam0);
	}
	if (!bParam1)
	{
		func_559(iParam0);
	}
	func_450(iParam0, 1);
	func_453(iParam0, 1);
	if (bParam2)
	{
		if (!func_456(0, 0, 1))
		{
			func_457(1, 6);
		}
	}
}

bool func_456(int iParam0, bool bParam1, bool bParam2)
{
	if (Global_1572887->f_13 != -1)
	{
		if ((bParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1900736->f_67;
		}
		if ((bParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1900736->f_68;
		}
		if (func_560())
		{
			return true;
		}
		if (Global_1071686->f_3 && !Global_1572887->f_9)
		{
			if (((*Global_1056141)[network_player_id_to_int()]->f_463 && network_is_game_in_progress()) && network_is_in_tutorial_session())
			{
				return true;
			}
		}
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1900736->f_67;
		}
		else
		{
			return Global_1900736->f_68;
		}
	}
	if (iParam0 == 0 && func_163(func_255(0)))
	{
		return true;
	}
	if ((Global_1940258 && 81919 & (-1 - iParam0)) != 0)
	{
		return true;
	}
	if (!bParam1)
	{
		if ((get_game_timer() - 5000) < &Global_1900871)
		{
			return true;
		}
	}
	switch (func_561(func_255(0)))
	{
		case -1:
			return false;
		case 2:
			return iParam0 & 1 == 0;
		case 5:
			return iParam0 & 2 == 0;
		case 3:
			return iParam0 & 16 == 0;
		case 4:
			return iParam0 & 32 == 0;
		case 7:
			return iParam0 & 1024 == 0;
		default:
			break;
	}
	return false;
}

void func_457(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_562(&Global_0, 8);
	}
	if (!func_563() || func_124() != -1)
	{
		return;
	}
	func_562(&Global_0, 1);
}

float func_458(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		fVar3 = (fVar2 - fVar1);
		return (fVar3 / 2f);
	}
	switch (iParam0)
	{
		case 0:
			fVar1 = to_float(get_entity_health(Global_34));
			fVar2 = to_float(get_entity_max_health(Global_34, false));
			iVar0 = 50;
			break;
		case 1:
			fVar1 = _get_ped_stamina(Global_34);
			fVar2 = _get_ped_max_stamina(Global_34);
			iVar0 = 8;
			break;
		case 2:
			fVar1 = _0xa81d24ae0af99a5e(get_player_index());
			fVar2 = _0x592f58bc4d2a2cf3(get_player_index(), 0);
			iVar0 = 14;
			break;
	}
	fVar4 = (IntToFloat((iVar0 * iParam1)) + fVar1);
	if (fVar4 > fVar2)
	{
		fVar3 = (fVar2 - fVar1);
	}
	else
	{
		fVar3 = (fVar4 - fVar1);
	}
	return (fVar3 / 2f);
}

void func_459(int iParam0)
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
	iVar1 = func_564(2);
	func_565(to_float((iParam0 * iVar1)), 0);
}

void func_460(int iParam0, bool bParam1)
{
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = 10;
	}
	iVar0 = func_566(2);
	func_567(to_float((iParam0 * iVar0)), 0, bParam1);
}

void func_461(int iParam0)
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
	iVar1 = func_568(2);
	func_569(to_float((iParam0 * iVar1)), 0);
}

float func_462(float fParam0, float fParam1)
{
	if (fParam1 != 0f)
	{
		return ((fParam1 / 100f) * 100f);
	}
	return ((fParam0 / 8f) * 100f);
}

void func_463(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (fParam1 == 0f)
	{
		return;
	}
	if (bParam4)
	{
		fParam1 = func_570(iParam0, fParam1, 1);
	}
	func_572(iParam0, (func_571(iParam0, 2) + fParam1), bParam2, bParam3, 1, 2);
}

float func_464(float fParam0, int iParam1)
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

int func_465(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (!does_entity_exist(player_ped_id()))
	{
		return 0;
	}
	return func_573(iParam0, fParam1, bParam2, bParam3);
}

void func_466(float fParam0, bool bParam1)
{
	if (fParam0 > 10f)
	{
		fParam0 = 10f;
	}
	if (func_574())
	{
		func_575(fParam0, 0);
	}
	if (bParam1)
	{
		Global_17411.f_55.f_2439.f_41++;
		if (5 == Global_17411.f_55.f_2439.f_41)
		{
			func_137(109, 0);
		}
	}
}

struct<2> func_467(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

void func_468(var uParam0, int iParam1, int iParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return;
	}
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

bool func_469(int iParam0)
{
	return func_111(iParam0) == 2085633299;
}

void func_470(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!func_83(iParam0, 0))
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
	if (!func_576() || bParam6)
	{
		func_577(iParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_578(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam0 == 1701457723)
	{
		StringCopy(&cVar2, "ITEM_GET_PUMP", 32);
	}
	if (iParam1 > 0)
	{
	}
	else if (bParam3 || bParam4)
	{
		StringCopy(&cVar2, func_578(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		bVar0 = true;
	}
	else if (bParam2 && func_579(iParam0, 2097152))
	{
		StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		bVar0 = true;
	}
	iVar6 = func_111(iParam0);
	iVar10 = 0;
	iVar11 = 805880880;
	if (((((((iVar6 == 307971639 && iParam0 != 424030678) && iParam0 != -1188697038) && iParam0 != 446901936) && iParam0 != -228768324) && iParam0 != 34372170) && iParam0 != 963726415) && iParam0 != 1701457723)
	{
		iVar10 = 622449822;
		iVar11 = 622449822;
	}
	iVar12 = func_114(iParam0);
	if (((((((iVar6 == -1013984273 || iVar6 == 658570475) || iVar12 == -1674363638) || iVar12 == 252325943) || iVar12 == 829857647) || iVar12 == -636562458) || iVar12 == 1341188928) || iVar12 == 1216664798)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_483(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	if (func_101(iParam0, 474910316))
	{
		sVar17 = func_580(iParam0);
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
	if (func_101(iParam0, 1816585950))
	{
		iVar13 = 76603059;
	}
	if (func_581(iParam0))
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
	iVar18 = func_488(iParam0);
	if ((func_582(iVar12) && func_101(iParam0, -306684263)) && iVar18 != 0)
	{
		iVar18 = func_583(iParam0);
	}
	else if (func_111(iParam0) == -1037537535)
	{
		iVar19 = func_487(iParam0);
		if (func_83(iVar19, 0))
		{
			iVar18 = func_488(iVar19);
		}
	}
	if (func_584(iParam0, 1443104131) && bParam3)
	{
		iVar20 = 1;
		func_585(iParam0, -915411861, &iVar20, 0);
		iVar1 = ceil((to_float(iVar1) / to_float(iVar20)));
		iParam1 = ceil((to_float(iParam1) / to_float(iVar20)));
	}
	sVar21 = func_489(_create_var_string(10, &cVar2, _create_var_string(0, iVar18), iVar1), iVar13);
	if (iParam1 == 1)
	{
		sVar21 = _create_var_string(0, iVar18);
	}
	if ((((((iVar12 == -1839668642 && iParam0 != -1713496139) && iParam0 != 1326838792) && iParam0 != -230310728) || ((iVar12 == 231148558 && iParam0 != 1733464892) && iParam0 != -598283164)) || (iVar12 == 252325943 && iParam0 != -860557048)) || (iVar12 == -636562458 && iParam0 != -2087489409))
	{
		sVar21 = _create_var_string(0, func_586(iParam0, -442898163));
	}
	if (iVar12 == -126813555 || iVar12 == 1946043663)
	{
		StringCopy(&cVar22, "", 128);
		if (func_587(iParam0, &cVar22))
		{
			sVar21 = func_589(func_588(cVar22), 109029619);
		}
	}
	func_490(sVar21, Var7.f_1, get_hash_key(Var7), iVar16, iVar13, sVar15, sVar14, 0, 1);
}

struct<2> func_471(int iParam0)
{
	if (!func_83(iParam0, 0))
	{
		return Var0;
	}
	if (func_101(iParam0, -305066475))
	{
		if (func_124() == -1)
		{
			if (func_101(iParam0, -537818634))
			{
				return func_467(189951448);
			}
			else
			{
				return func_467(1176172851);
			}
		}
	}
	else if (func_101(iParam0, -537818634))
	{
		return func_467(-963660207);
	}
	if (func_101(iParam0, 2084895747))
	{
		return func_467(1694039471);
	}
	return Var2;
}

bool func_472(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	Var0 = { func_541(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam2)
	{
		func_542(&Var0, func_291(0));
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
			if (!func_427(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_173(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_429(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

void func_473(int iParam0, bool bParam1, int iParam2)
{
	Global_1940311->f_4 = iParam0;
	Global_1940311->f_34 = iParam2;
	if (bParam1 || (func_590() && iParam2 == 0))
	{
		func_591(1);
		func_592(1);
	}
}

bool func_474()
{
	iVar0 = &Global_1952637->f_595[8];
	iVar0 = (&Global_1952637->f_595[10] + iVar0);
	iVar0 = (&Global_1952637->f_595[1] + iVar0);
	iVar0 = (&Global_1952637->f_595[2] + iVar0);
	iVar0 = (&Global_1952637->f_595[5] + iVar0);
	iVar0 = (&Global_1952637->f_595[25] + iVar0);
	iVar0 = (&Global_1952637->f_595[23] + iVar0);
	iVar0 = (&Global_1952637->f_595[18] + iVar0);
	iVar0 = (&Global_1952637->f_595[19] + iVar0);
	return iVar0 > 0;
}

int func_475(int iParam0)
{
	iVar0 = func_224(func_593(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1952637->f_1675.f_1[iVar0]->f_1;
	}
	return 0;
}

bool func_476(int iParam0, int iParam1)
{
	iVar1 = func_224(func_593(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1952637->f_1675.f_1[iVar1] != 0 && &Global_1952637->f_1675.f_1[iVar1] != &Global_1952637->f_83[iVar1])
	{
		iVar0 = &Global_1952637->f_1675.f_1[iVar1];
		if (func_114(iVar0) == iParam0 || (iParam0 == 81053684 && func_101(iVar0, 160827531)))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

int func_477(int iParam0)
{
	return &(Global_1952637->f_1675.f_1[func_224(iParam0, 1)]);
}

int func_478()
{
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1952637->f_3334.f_26)
	{
		iVar1 = &Global_1952637->f_3334[iVar0];
		if (func_114(iVar1) == -999503751)
		{
			if (func_594() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_479(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		iParam1 = func_595(0);
	}
	if (func_114(iParam0) == -999503751 && func_484(iParam0) != -1)
	{
		return true;
	}
	if (iParam1 == 2026485318)
	{
		return func_101(iParam0, -287432114);
	}
	else if (iParam1 == 24043185)
	{
		return func_101(iParam0, -133342564);
	}
	return false;
}

bool func_480(int iParam0, int iParam1, bool bParam2)
{
	Var0 = { func_171(iParam0, bParam2, 0) };
	Var5 = { func_172(iParam0, Var0, Var0.f_4, bParam2) };
	if (func_231(iParam0, Var0, Var0.f_4, bParam2, 0, 0) <= 0)
	{
		return false;
	}
	_0x9a113c660aea3832(func_168(bParam2), &Var5, iParam1);
	return true;
}

int func_481(int iParam0)
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
		case 119907797:
			return 32;
		case 1388798186:
			return 64;
		default:
			break;
	}
	return 0;
}

bool func_482(int iParam0)
{
	return (Global_1952637->f_3334.f_33.f_6 && iParam0) != 0;
}

bool func_483(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_484(int iParam0)
{
	switch (iParam0)
	{
		case 491602716:
			return 0;
		case 217155793:
			return 1;
		case 97391779:
			return 2;
		case -808817534:
			return 3;
		case 1270922359:
			return 4;
		case -2011879201:
			return 5;
		case -1063340820:
			return 6;
		case 2127262701:
			return 7;
		case -1323870201:
			return 8;
		case 1632140501:
			return 9;
		case 967218463:
			return 10;
		default:
			break;
	}
	return -1;
}

bool func_485(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17411.f_55.f_644.f_1777;
	}
	if (iParam1 > -1 && iParam1 < 11)
	{
		return (Global_17411.f_55.f_644.f_33[iParam1] && iParam0) != 0;
	}
	return false;
}

struct<8> func_486(int iParam0)
{
	if (func_485(4, iParam0))
	{
		return *Global_17411.f_2625[iParam0];
	}
	StringCopy(&cVar0, _get_label_text_by_hash(func_596(iParam0)), 64);
	return cVar0;
}

int func_487(int iParam0)
{
	iVar0 = func_597(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_598(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
	if (func_599(Var1, &iVar11, &iVar12, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar12)
		{
			if (_0x8750f69a720c2e41(iVar11, iVar13, &iVar14) && func_600(iVar14))
			{
				func_601(iVar11);
				return iVar14;
			}
			iVar13++;
		}
		func_601(iVar11);
	}
	return 0;
}

int func_488(int iParam0)
{
	if (!func_83(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_602(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

char* func_489(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

var func_490(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_603(sParam0, sParam1, iParam2);
	return uVar20;
}

void func_491()
{
	Global_1952637->f_1057 = 0;
}

int func_492(int iParam0)
{
	if (!func_83(iParam0, 0))
	{
		return 0;
	}
	if (func_101(iParam0, 160827531) || func_114(iParam0) == 81053684)
	{
		return 1;
	}
	return 0;
}

void func_493(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bVar0 = false;
	switch (func_114(iParam0))
	{
		case -2061583405:
			bVar0 = func_604(iParam0, &(Global_1952637->f_3334.f_28), bParam4);
			break;
		case 81053684:
			bVar0 = func_604(iParam0, &(Global_1952637->f_3334.f_30), bParam4);
			break;
		case -999503751:
			bVar0 = func_604(iParam0, &(Global_1952637->f_3334.f_27), bParam4);
			if (func_101(iParam0, -166674229))
			{
				Var1.f_1 = 39;
				if (func_605(&Var1, iParam0, &uVar120, 0, 1, 0, 0, 0, 1, 8))
				{
					iVar121 = 0;
					while (iVar121 < 39)
					{
						iVar122 = &Var1.f_1[iVar121];
						if (func_83(iVar122, 0))
						{
							func_493(iVar122, 0, 0, 0, 0);
						}
						iVar121++;
					}
				}
			}
			break;
		case -525676072:
			bVar0 = func_604(iParam0, &(Global_1952637->f_3334.f_29), bParam4);
			break;
		case -1719060085:
			bVar0 = func_604(iParam0, &(Global_1952637->f_3334.f_31), bParam4);
			break;
		case 119907797:
			bVar0 = func_604(iParam0, &(Global_1952637->f_3334.f_32), bParam4);
			break;
		case 1388798186:
			bVar0 = func_604(iParam0, &(Global_1952637->f_3334.f_33.f_7), bParam4);
			break;
		default:
			if (func_101(iParam0, 160827531))
			{
				bVar0 = func_604(iParam0, &(Global_1952637->f_3334.f_30), bParam4);
			}
			break;
	}
	if (bParam3 && bVar0)
	{
		func_366(0, iParam0);
	}
	if (bParam2)
	{
		func_364();
	}
	if (bParam1)
	{
		func_367(0, 0);
	}
}

int func_494(int iParam0)
{
	func_606(&uVar1, 9044914, iParam0, 0, 0, 0);
	_0x91ded5dd64bb2691(&uVar1);
	while (_0xed4413cee1bf142c(&uVar1))
	{
		if (!_0x44b3a36933ac009c(&uVar0, &uVar1, -1168434056))
		{
			return 0;
		}
		return uVar0;
	}
	return 0;
}

bool func_495(int iParam0, int iParam1)
{
	iVar0 = func_114(&(Global_1952637->f_1675.f_1[iParam1]));
	if (func_114(iParam0) == iVar0)
	{
		return true;
	}
	else if (iParam0 == -992705550)
	{
		return func_101(&(Global_1952637->f_1675.f_1[iParam1]), 160827531);
	}
	else if (iParam0 == 491480257)
	{
		return (iVar0 == -2061583405 || iVar0 == 2086043523);
	}
	else if (iParam0 == -1789518572)
	{
		return iVar0 == -923693316;
	}
	else if (iParam0 == -275040139)
	{
		return iVar0 == 1882579758;
	}
	return false;
}

void func_496(var uParam0, int iParam1)
{
	Var2 = 39;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		*Global_1952637->f_2897.f_35[iVar0] = { Var2 };
		if (iVar0 < *uParam0)
		{
			if ((func_607(uParam0->f_2[iVar0], 2) || &uParam0->f_2[iVar0] == iParam1) || &uParam0->f_2[iVar0] == 39)
			{
				*uParam0->f_2[iVar0] = { Var2 };
			}
			else
			{
				if (func_607(uParam0->f_2[iVar0], 1))
				{
					func_608(uParam0->f_2[iVar0], 2, 6);
				}
				*Global_1952637->f_2897.f_35[iVar1] = { *uParam0->f_2[iVar0] };
				iVar1++;
				*uParam0->f_2[iVar0] = { Var2 };
			}
			iVar0++;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				*uParam0->f_2[iVar0] = { *Global_1952637->f_2897.f_35[iVar0] };
				iVar0++;
			}
			*uParam0 = iVar1;
		}
	}
}

void func_497(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 16)
	{
		return;
	}
	if (!func_609(uParam0, 1))
	{
		func_610(uParam0, 1);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (&uParam0->f_2[iVar0] == iParam1)
		{
			uParam0->f_2[iVar0]->f_1 = iParam2;
			return;
		}
		if (Global_1952637->f_83[&uParam0->f_2[iVar0]]->f_2 > Global_1952637->f_83[iParam1]->f_2)
		{
			iVar1 = *uParam0;
			while (iVar1 >= iVar0 + 1)
			{
				*uParam0->f_2[iVar1] = { *(uParam0->f_2[(iVar1 - 1)]) };
				iVar1 = (iVar1 + -1);
			}
			uParam0->f_2[iVar0] = iParam1;
			uParam0->f_2[iVar0]->f_1 = iParam2;
			*uParam0++;
			return;
		}
		iVar0++;
	}
	uParam0->f_2[*uParam0]->f_1 = iParam2;
	uParam0->f_2[*uParam0] = iParam1;
	*uParam0++;
}

void func_498(var uParam0, var uParam1)
{
	Var0 = func_611(0);
	Var0.f_1 = uParam1;
	Var0.f_3 = 0;
	_0x91ded5dd64bb2691(&Var0);
	if (!_0xed4413cee1bf142c(&Var0))
	{
		return;
	}
	while (_0xed4413cee1bf142c(&Var0))
	{
		if (!_0x44b3a36933ac009c(&iVar7, &Var0, 1409451727))
		{
		}
		else
		{
			iVar8 = func_224(iVar7, 1);
			if (iVar8 < 0 || iVar8 > 39)
			{
			}
			else if (!_0x44b3a36933ac009c(&iVar7, &Var0, 1373051002))
			{
			}
			else if (&uParam0->f_1[iVar8] != iVar7)
			{
			}
			else
			{
				uParam0->f_1[iVar8] = &Global_1952637->f_83[iVar8];
				uParam0->f_1[iVar8]->f_1 = 0;
				func_376(iVar8, 0);
			}
		}
	}
}

void func_499(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam1 == -230310728 || iParam1 == 1326838792)
	{
		uParam0->f_1[iParam2]->f_1 = 289238755;
	}
	else if (uParam0->f_1[iParam2]->f_1 == 289238755)
	{
		uParam0->f_1[iParam2]->f_1 = 1155669136;
	}
	iVar0 = 10;
	iVar1 = func_114(&(uParam0->f_1[iVar0]));
	if (iVar1 == 119907797)
	{
		if (func_101(iParam1, 458991572))
		{
			uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
			uParam0->f_1[iVar0]->f_1 = 0;
			func_376(iVar0, iParam3);
		}
	}
	else if (iVar1 == 2086043523)
	{
		if (func_101(iParam1, -93469181))
		{
			uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
			uParam0->f_1[iVar0]->f_1 = 0;
			func_376(iVar0, iParam3);
		}
	}
	iVar0 = 11;
	if (func_101(&(uParam0->f_1[iVar0]), -1446529222) && func_101(iParam1, -93469181))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_376(iVar0, iParam3);
	}
	iVar0 = 12;
	if ((&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_101(iParam1, -93469181)) && func_101(&(uParam0->f_1[iVar0]), -1303648999))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_376(iVar0, iParam3);
	}
}

void func_500(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == 1733464892)
	{
		uParam0->f_1[iParam2]->f_1 = 289238755;
	}
	else if (uParam0->f_1[iParam2]->f_1 == 289238755)
	{
		uParam0->f_1[iParam2]->f_1 = 1155669136;
	}
}

void func_501(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2)
	{
		return;
	}
	iVar0 = 12;
	iVar1 = &uParam0->f_1[iVar0];
	if (!func_227(iVar1, 0) && func_101(iVar1, -180472385))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_376(iVar0, iParam3);
	}
	iVar0 = 10;
	iVar1 = &uParam0->f_1[iVar0];
	if ((iVar1 != &Global_1952637->f_83[iVar0] && func_114(iVar1) == 2086043523) && func_101(iParam1, -93469181))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_376(iVar0, iParam3);
	}
}

void func_502(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (func_114(iParam2))
	{
		case -525676072:
			func_612(uParam0, bParam1, iParam3);
			break;
		case 2086043523:
			func_613(uParam0, bParam1, iParam3);
			break;
	}
}

void func_503(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	iVar0 = 18;
	if (func_114(&(uParam0->f_1[iVar0])) == 912453393)
	{
		func_376(iVar0, iParam3);
	}
	if (bParam1)
	{
		return;
	}
	if (func_114(iParam2) == 81053684 || func_101(iParam2, 160827531))
	{
		func_614(uParam0, bParam1, iParam3);
	}
	iVar0 = 11;
	if (func_101(iParam2, -180472385) && !func_227(&(uParam0->f_1[iVar0]), 0))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_376(iVar0, iParam3);
	}
	if (func_101(iParam2, -1303648999))
	{
		return;
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0]->f_1 == 1530758430)
	{
		uParam0->f_1[iVar0]->f_1 = 1155669136;
		func_376(iVar0, iParam3);
		iVar0 = 20;
		if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
		{
			func_376(iVar0, iParam3);
		}
	}
	else if (uParam0->f_1[iVar0]->f_1 == 1334603721)
	{
		uParam0->f_1[iVar0]->f_1 = -1539589426;
		func_376(iVar0, iParam3);
		iVar0 = 20;
		if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
		{
			func_376(iVar0, iParam3);
		}
	}
}

void func_504(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	iVar0 = 12;
	iVar1 = 0;
	if (func_368() == 24043185)
	{
		iVar1 = 1;
	}
	if (2056714954 == _get_ped_component_category(&(uParam0->f_1[iVar0]), iVar1, true))
	{
		if ((bParam1 || func_101(iParam2, 1872585553)) || func_114(iParam2) == 1882579758)
		{
			uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
			uParam0->f_1[iVar0]->f_1 = 0;
			func_376(iVar0, iParam4);
		}
	}
	iVar0 = 17;
	if (!func_227(&(uParam0->f_1[iVar0]), 0) && func_101(iParam2, 1467402774))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_376(iVar0, iParam4);
	}
	iVar0 = 29;
	if (!func_227(&(uParam0->f_1[iVar0]), 0) && func_101(iParam2, 1126863852))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_376(iVar0, iParam4);
	}
	iVar0 = 34;
	iVar2 = &uParam0->f_1[iVar0];
	if (func_114(iVar2) == 1759215194 && func_114(iParam2) == 1882579758)
	{
		uParam0->f_1[iVar0] = func_494(iParam2);
		uParam0->f_1[iVar0]->f_1 = 0;
		func_376(iVar0, iParam4);
	}
	else if (func_615(iVar2, bParam1, iVar1))
	{
		iVar2 = &uParam0->f_1[18];
		iVar3 = 0;
		if (func_114(iVar2) == 912453393 && func_616(32))
		{
			iVar3 |= 1;
		}
		if (func_101(iParam2, 525391395))
		{
			iVar3 |= 2;
		}
		iVar2 = func_617(Global_1952637->f_83[iVar0]->f_9, iVar3);
		if (iVar2 != 0)
		{
			uParam0->f_1[iVar0] = iVar2;
			uParam0->f_1[iVar0]->f_1 = 0;
			func_376(iVar0, iParam4);
			func_512(uParam0, 0, iVar2, iParam4);
		}
	}
	iVar0 = 21;
	if (func_227(&(uParam0->f_1[iVar0]), 0))
	{
		return;
	}
	func_376(iVar0, iParam4);
	if (uParam0->f_1[iParam3]->f_1 == -1539589426 || uParam0->f_1[iParam3]->f_1 == 1334603721)
	{
		return;
	}
	if (uParam0->f_1[iParam3]->f_1 == 0 || uParam0->f_1[iParam3]->f_1 == 1155669136)
	{
		if (func_515(iParam2, iVar1, -1539589426) >= 0)
		{
			uParam0->f_1[iParam3]->f_1 = -1539589426;
			return;
		}
	}
	if (func_515(iParam2, iVar1, 1334603721) >= 0)
	{
		uParam0->f_1[iParam3]->f_1 = 1334603721;
	}
}

void func_505(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 29;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_101(iParam2, 358628372))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_376(iVar0, iParam3);
	}
}

void func_506(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	switch (func_114(iParam2))
	{
		case 698653232:
			func_618(uParam0, bParam1, iParam2, iParam4);
			break;
		case 912453393:
			func_619(uParam0, bParam1, iParam3, iParam4);
			break;
	}
}

void func_507(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (func_114(iParam2))
	{
		case -1080198344:
		case 1868067663:
			func_620(uParam0, bParam1, iParam2, iParam3);
			break;
		case 294388917:
			func_621(uParam0, bParam1, iParam2, iParam3);
			break;
	}
}

void func_508(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	iVar0 = 18;
	if (func_114(&(uParam0->f_1[iVar0])) == 912453393)
	{
		func_376(iVar0, iParam3);
	}
	if (bParam1)
	{
		return;
	}
	iVar1 = 0;
	if (func_368() == 24043185)
	{
		iVar1 = 1;
	}
	iVar0 = 23;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_101(iParam2, 1537768121))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_376(iVar0, iParam3);
	}
	iVar0 = 16;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		func_376(iVar0, iParam3);
		if (uParam0->f_1[iVar0]->f_1 == -1539589426 || uParam0->f_1[iVar0]->f_1 == 1334603721)
		{
			return;
		}
		if (uParam0->f_1[iVar0]->f_1 == 0 || uParam0->f_1[iVar0]->f_1 == 1155669136)
		{
			if (func_515(&(uParam0->f_1[iVar0]), iVar1, -1539589426) >= 0)
			{
				uParam0->f_1[iVar0]->f_1 = -1539589426;
				return;
			}
		}
		if (func_515(&(uParam0->f_1[iVar0]), iVar1, 1334603721) >= 0)
		{
			uParam0->f_1[iVar0]->f_1 = 1334603721;
		}
	}
}

void func_509(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 21;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_101(&(uParam0->f_1[iVar0]), 1537768121))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_376(iVar0, iParam2);
	}
}

void func_510(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	if (func_622(99217379) && func_101(iParam2, -1230785684))
	{
		iVar0 = 27;
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_376(iVar0, iParam3);
	}
	iVar0 = 32;
	if (!func_227(&(uParam0->f_1[iVar0]), 0) && func_101(iParam2, 1016511012))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_376(iVar0, iParam3);
	}
}

void func_511(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 17;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_101(&(uParam0->f_1[iVar0]), 358628372))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_376(iVar0, iParam2);
	}
}

void func_512(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (func_114(iParam2))
	{
		case 1759215194:
			func_623(uParam0, iParam3);
			break;
		case 1223979091:
		case 2047428024:
			func_624(uParam0, bParam1, iParam2, iParam3);
			break;
		case 684307653:
			func_625(uParam0, bParam1, iParam2, iParam3);
			break;
		case 502936876:
			func_626(uParam0, bParam1, iParam3);
			break;
		case -1740828670:
			func_627(uParam0, bParam1, iParam2, iParam3);
			break;
		case 344283346:
			func_628(uParam0, bParam1, iParam3);
			break;
	}
}

void func_513(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (func_114(iParam2))
	{
		case 1769055947:
			func_629(uParam0, bParam1, iParam2, iParam3);
			break;
		case -923693316:
			func_630(uParam0, bParam1, iParam2, iParam3);
			break;
	}
}

void func_514(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		func_631(uParam0, iParam3, 0, 1);
		return;
	}
	iVar0 = 35;
	iVar1 = &uParam0->f_1[iVar0];
	if ((func_101(iParam2, 813132419) && &uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0]) && func_114(iVar1) == -923693316)
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_376(iVar0, iParam3);
	}
	if ((func_101(iParam2, -1650340550) && &uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0]) && func_114(iVar1) == 1769055947)
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_376(iVar0, iParam3);
	}
	iVar0 = 37;
	if (func_101(iParam2, -1278198125) && &uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_376(iVar0, iParam3);
	}
}

int func_515(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < _0xffcc2db2d9953401(iParam0, iParam1, 1))
	{
		if (_0x6243635af2f1b826(iParam0, iVar0, iParam1, 1) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_516(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

void func_517(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*Global_1952637->f_1675.f_1[iParam0] = { *Global_1952637->f_1556.f_1[iParam0] };
	}
	if (!bParam2)
	{
		return;
	}
	func_632(Global_1952637->f_1675.f_1[iParam0], iParam0, Global_17411.f_55.f_644.f_1777);
}

void func_518(int iParam0, bool bParam1, int iParam2)
{
	func_633(&(Global_1952637->f_1556), iParam0);
	func_634(2, iParam0, 6);
	if (bParam1)
	{
		func_367(0, 1);
	}
}

int func_519(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (func_635(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_520(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = -1;
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_82(*uParam0, &Var1, 1, 0, -1))
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
	iVar15 = func_111(Var1.f_4);
	if (iVar15 == -1784221369)
	{
		Var16 = { func_636(*uParam0, 1, 0) };
		Var16.f_10 = iParam1;
		iVar0 = func_637(-1230526146, &Var16, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -2072933068)
	{
		Var44 = { func_638(*uParam0, 1, 0) };
		Var44.f_10 = iParam1;
		iVar0 = func_639(-1230526146, &Var44, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -1037537535)
	{
		Var69 = { func_640(*uParam0, 1, 0) };
		Var69.f_10 = iParam1;
		iVar0 = func_641(-1230526146, &Var69, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var86 = { func_642(&Var1, 0) };
		Var86.f_10 = iParam1;
		iVar0 = func_289(-1230526146, &Var86, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

float func_521(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_522(int iParam0)
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
	if (func_257(iParam0) == -785841056)
	{
		return 37;
	}
	return 23;
}

bool func_523()
{
	if ((func_560() || Global_1572887->f_106.f_75 > 10) || func_643())
	{
		if ((!func_337() && Global_265377->f_124517.f_71.f_21.f_2 != -504335712) && !func_644(Global_265377->f_124517.f_71.f_21.f_3))
		{
			return true;
		}
	}
	return false;
}

bool func_524(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102219->f_3 && iParam0) != 0;
	}
	return ((*Global_1100469)[iParam1]->f_3 && iParam0) != 0;
}

bool func_525()
{
	iVar0 = get_frame_count();
	return (Global_1051439->f_3259 == iVar0 || Global_1051439->f_3259 == (iVar0 - 1));
}

void func_526(int iParam0)
{
	Global_1051439->f_3628 = (Global_1051439->f_3628 || iParam0);
}

bool func_527()
{
	return (_does_anim_scene_exist(Global_26538) && _is_anim_scene_started(Global_26538, false));
}

int func_528()
{
	return Global_1051252->f_12;
}

char* func_529()
{
	return "unnamed";
}

int func_530(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case -1:
			iVar0 = 16;
			break;
		case 0:
			iVar0 = 32;
			break;
		case 1:
			iVar0 = 64;
			break;
		case 2:
			iVar0 = 128;
			break;
		case 3:
			iVar0 = 256;
			break;
		case 4:
			iVar0 = 512;
			break;
		case 5:
			iVar0 = 1024;
			break;
		case 6:
			iVar0 = 2048;
			break;
		case 8:
			iVar0 = 4096;
			break;
	}
	return iVar0;
}

bool func_531(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return func_645(36, iParam0);
}

int func_532(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102219->f_1;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 26;
	}
	if (&Global_1296859->f_22[iParam0])
	{
		return (*Global_1100469)[iParam0]->f_1;
	}
	return 26;
}

bool func_533(int iParam0)
{
	if (func_646(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 1)
		{
			func_647(iParam0);
		}
		return true;
	}
	return _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 1;
}

bool func_534(var uParam0)
{
	if (*uParam0 >= 40)
	{
		return false;
	}
	return true;
}

var func_535(var uParam0)
{
	return uParam0;
}

int func_536()
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

int func_537(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (func_250(uParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_538(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_648(iParam0, iParam1, iParam2, iParam3);
}

int func_539(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_649(iParam0) && !bParam2)
	{
		return get_ped_ammo_by_type(Global_34, iParam0);
	}
	return _0xe787f05dfc977bde(func_168(bParam1), iParam0, iParam3);
}

void func_540(int iParam0, var uParam1, var uParam2)
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

struct<14> func_541(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_542(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_543(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_168(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_544(var uParam0, int iParam1)
{
	*uParam0 = Global_1257541->f_8863;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (_0x603ac35fd4602c76(*uParam0) && _datafile_get_data_node_index(&(uParam0->f_1), uParam0));
}

int func_545()
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

int func_546()
{
	return Global_1109804->f_5737.f_632;
}

int func_547(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam1)
	{
		return -1;
	}
	iVar0 = ((iParam0 + iParam1) / 2);
	if (*iParam2 < &Global_1109804->f_5737.f_451[iVar0])
	{
		return func_547(iParam0, (iVar0 - 1), iParam2);
	}
	if (*iParam2 > &Global_1109804->f_5737.f_451[iVar0])
	{
		return func_547(iVar0 + 1, iParam1, iParam2);
	}
	return iVar0;
}

var func_548(int iParam0)
{
	return Global_1109804->f_5737.f_451[iParam0]->f_1;
}

bool func_549(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 70);
}

bool func_550(var uParam0)
{
	uVar0 = func_650();
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

bool func_551(struct<5> Param0, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
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

struct<8> func_552(struct<5> Param0)
{
	return func_651(Param0, 52, 1);
}

int func_553(int iParam0)
{
	switch (iParam0)
	{
		case -934992753:
		case -841961450:
		case 451529179:
		case 612720002:
		case 847313273:
			return 0;
		case -1640936415:
		case -1069379473:
		case -737921038:
		case -447391084:
		case -148898263:
			return 1;
		case -1577213137:
		case -1100096485:
		case -1094001463:
		case -863930314:
		case -862160776:
			return 2;
		case -1809751726:
		case 640288085:
		case 931276805:
		case 1236716654:
		case 1855821387:
			return 3;
		default:
			break;
	}
	return -1;
}

bool func_554(struct<2> Param0, int iParam2, int iParam3)
{
	if (!func_163(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_652(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

bool func_555(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_451(iParam0))
		{
			return false;
		}
	}
	if (Global_1572887->f_13 != -1)
	{
		return (Global_17411[iParam0] && iParam1) != 0;
	}
	return (Global_39.f_4667[iParam0] && iParam1) != 0;
}

bool func_556(int iParam0)
{
	if (!func_451(iParam0))
	{
		return false;
	}
	return func_555(iParam0, 2, 1);
}

int func_557(bool bParam0, int iParam1)
{
	if (!network_is_in_session())
	{
		return 0;
	}
	if (!Global_1102219->f_16)
	{
		return 0;
	}
	if (!func_653())
	{
		return 0;
	}
	if (!func_247())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_562(&Global_0, 8);
	}
	func_562(&Global_0, 1);
	return 1;
}

int func_558(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 9:
		case 10:
		case 14:
		case 17:
		case 22:
		case 23:
		case 25:
		case 26:
		case 31:
		case 33:
		case 36:
		case 37:
			return 1;
		default:
			return 0;
	}
	return 0;
}

void func_559(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			func_137(239, 0);
			break;
		case 16:
			func_137(240, 0);
			break;
		case 34:
			func_137(241, 0);
			break;
		case 52:
			func_137(242, 0);
			break;
		case 2:
			func_137(243, 0);
			break;
		case 3:
			func_137(244, 0);
			break;
		case 53:
			func_137(245, 0);
			break;
		case 15:
			func_137(246, 0);
			break;
		case 24:
			func_137(247, 0);
			break;
		case 38:
			func_137(248, 0);
			break;
		case 27:
			func_137(249, 0);
			break;
		case 13:
			func_137(250, 0);
			break;
		case 19:
			func_137(251, 0);
			break;
		case 20:
			func_137(252, 0);
			break;
		case 35:
			func_137(253, 0);
			break;
		case 39:
			func_137(254, 0);
			break;
		case 50:
			func_137(255, 0);
			break;
		case 7:
			func_137(256, 0);
			break;
		case 21:
			func_137(257, 0);
			break;
		case 18:
			func_137(258, 0);
			break;
		case 6:
			func_137(259, 0);
			break;
		case 30:
			func_137(260, 0);
			break;
		case 49:
			func_137(261, 0);
			break;
		case 11:
			break;
		case 4:
			func_137(263, 0);
			break;
		case 8:
			func_137(264, 0);
			break;
		case 29:
			func_137(265, 0);
			break;
		case 32:
			func_137(266, 0);
			break;
		case 12:
			func_137(267, 0);
			break;
		case 28:
			func_137(268, 0);
			break;
		case 51:
			func_137(269, 0);
			break;
	}
}

bool func_560()
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
	if (!func_163(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

int func_561(var uParam0, var uParam1)
{
	return uParam0;
}

void func_562(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_563()
{
	return true;
	if (Global_1572887->f_13 == 0)
	{
		return true;
	}
	return Global_39.f_1;
}

int func_564(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_654(1);
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

void func_565(float fParam0, int iParam1)
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

int func_566(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_654(1);
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

void func_567(float fParam0, bool bParam1, bool bParam2)
{
	iVar0 = player_id();
	if (fParam0 > 0f && func_655(iVar0))
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

int func_568(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_654(1);
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

void func_569(float fParam0, int iParam1)
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

float func_570(int iParam0, float fParam1, bool bParam2)
{
	iVar0 = func_656();
	func_657(&iVar0, 0, 0, 0, 1, 0, 0);
	iVar1 = func_658(iParam0, 2);
	if (func_660(iVar0, func_659(iParam0, 2), 1))
	{
		func_661(iParam0, 0, 2);
		iVar1 = 0;
	}
	if (iVar1 >= 2)
	{
		func_137(103, bParam2);
		return 0f;
	}
	func_662(iParam0, func_656(), 2);
	func_661(iParam0, iVar1 + 1, 2);
	return fParam1;
}

float func_571(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_654(2);
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1956200->f_1431.f_6[iParam0]);
		case 1:
			return &(Global_1956200->f_1565.f_2.f_6[iParam0]);
		default:
			break;
	}
	return -1f;
}

int func_572(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if (iParam5 == 2)
	{
		iParam5 = func_654(2);
	}
	iVar0 = player_ped_id();
	if (func_663(iVar0, iParam0, fParam1))
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
			func_664(iParam0, 7000, iParam5);
		}
		func_665(iVar0, iParam0, fParam1);
		func_666(iParam0, fParam1, bParam4, iParam5);
	}
	return 1;
}

int func_573(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	iVar1 = player_ped_id();
	if (fParam1 == -1f)
	{
		if (func_667(iParam0))
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
				sVar0 = func_668(iParam0);
				if (!animpostfx_is_running(sVar0))
				{
					animpostfx_play(sVar0);
				}
			}
			func_459(-1);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[0] = fParam1;
			break;
		case 1:
			if (bParam2)
			{
				sVar0 = func_668(iParam0);
				if (!animpostfx_is_running(sVar0))
				{
					animpostfx_play(sVar0);
				}
			}
			func_669(1775828486);
			func_461(-1);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[1] = fParam1;
			break;
		case 2:
			if (bParam2)
			{
				sVar0 = func_668(iParam0);
				if (!animpostfx_is_running(sVar0))
				{
					animpostfx_play(sVar0);
				}
			}
			func_460(-1, 0);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[2] = fParam1;
			break;
		case 19:
			func_669(350943398);
			func_670(0, 1, 1);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[0]->f_1 = fParam1;
			break;
		case 18:
			func_670(1, 1, 1);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[1]->f_1 = fParam1;
			break;
		case 20:
			func_670(2, 1, 1);
			_set_attribute_overpower_amount(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[2]->f_1 = fParam1;
			break;
		default:
			return 0;
	}
	return 1;
}

bool func_574()
{
	if (Global_1956200->f_1431.f_107 == -15)
	{
		return true;
	}
	return func_671(Global_1956200->f_1431.f_107, 0);
}

void func_575(float fParam0, int iParam1)
{
	fVar0 = func_672(13, 2);
	iVar1 = func_673(fVar0);
	fVar0 = (fVar0 + fParam0);
	fVar0 = func_674(fVar0, 0f, 100f);
	iVar2 = func_673(fVar0);
	if (iVar1 != iVar2)
	{
		Global_1956200->f_1431.f_107 = func_656();
		func_675(&(Global_1956200->f_1431.f_107), 0, 0, 1, 0, 0, 0, 0);
	}
	func_676(13, fVar0, 2);
	Global_1956200->f_1431.f_99 = iParam1;
}

bool func_576()
{
	return !&Global_1913504;
}

void func_577(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
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

char* func_578(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_579(int iParam0, int iParam1)
{
	if (!func_83(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

char* func_580(int iParam0)
{
	if (func_101(iParam0, -1995062316))
	{
		return "collectible_arrowheads";
	}
	if (func_101(iParam0, 1239889275))
	{
		return "collectible_liquor_bottles";
	}
	if (func_101(iParam0, 143267379))
	{
		return "collectible_coins";
	}
	if (func_101(iParam0, -944041124))
	{
		return "colectible_heirlooms";
	}
	if (func_101(iParam0, 1562621600))
	{
		return "collectible_jewelry";
	}
	if (func_101(iParam0, -149719013))
	{
		return "collectible_bird_eggs";
	}
	if (func_101(iParam0, 1940829793))
	{
		return "collectible_tarot_cards";
	}
	if (func_101(iParam0, 781094263))
	{
		return "collectible_flowers";
	}
	if (((func_101(iParam0, -352095726) || func_101(iParam0, -2014783736)) || func_101(iParam0, -545064757)) || func_101(iParam0, 679186220))
	{
		return "collectible_found_fossil";
	}
	return "";
}

bool func_581(int iParam0)
{
	if (func_101(iParam0, -189374246))
	{
		if (((func_677(iParam0, -1305775593) || func_677(iParam0, 1384151091)) || func_677(iParam0, 2075388272)) || func_677(iParam0, -1738780413))
		{
			return true;
		}
	}
	if (func_101(iParam0, -753854379) || func_101(iParam0, 173360570))
	{
		return true;
	}
	return false;
}

bool func_582(int iParam0)
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

int func_583(int iParam0)
{
	if (!func_83(iParam0, 0))
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

bool func_584(int iParam0, int iParam1)
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

int func_585(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_83(iParam0, 0) && !func_331(func_183(iParam0), 2))
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

int func_586(int iParam0, int iParam1)
{
	iVar0 = func_678(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	return iVar0;
}

bool func_587(int iParam0, char* sParam1)
{
	if (!func_83(iParam0, 0))
	{
		return false;
	}
	StringCopy(sParam1, func_679(iParam0), 128);
	iVar0 = get_length_of_literal_string(sParam1);
	if (!func_274(iParam0))
	{
		return false;
	}
	StringCopy(&cVar1, func_680(iParam0), 128);
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

char* func_588(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

char* func_589(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "LITERAL_STRING", sParam0);
	}
	return func_489(_create_var_string(10, "LITERAL_STRING", sParam0), iParam1);
}

bool func_590()
{
	if ((Global_1940311->f_10901 != (Global_1940311->f_38.f_203 - 1) || func_682(func_681(0), Global_1940311->f_10893, 0, 1, 1) > 0) || Global_1940311->f_10901 == 15)
	{
		return true;
	}
	func_683();
	if (Global_1940311->f_6)
	{
		return true;
	}
	return false;
}

void func_591(int iParam0)
{
	Global_1940311->f_10 = iParam0;
}

void func_592(int iParam0)
{
	Global_1940311->f_9 = iParam0;
}

int func_593(int iParam0)
{
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_223(iVar0);
}

int func_594()
{
	return Global_1952637->f_1675;
}

int func_595(bool bParam0)
{
	Var0.f_9 = -1591664384;
	iVar14 = 0;
	Var15 = { func_172(889965687, func_232(1), 1034665895, 1) };
	iVar19 = func_381(Var15, 552979403, 1, -1);
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
	Var22 = { func_541(0, -1591664384, 552979403, -1591664384, 0, 0, 0) };
	if (func_543(&Var22, &iVar20, &iVar21, 1))
	{
		if (iVar21 > 0 && func_427(&Var0, 0, iVar20, iVar21))
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
				func_429(iVar20);
				return 0;
			}
			if (bParam0)
			{
				func_382(Var0, 1, 0);
			}
			func_429(iVar20);
			return iVar14;
		}
		func_429(iVar20);
	}
	return 0;
}

int func_596(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 217155793;
		case 2:
			return 97391779;
		case 3:
			return -808817534;
		case 4:
			return 1270922359;
		case 5:
			return -2011879201;
		case 6:
			return -1063340820;
		case 7:
			return 2127262701;
		case 8:
			return -1323870201;
		case 9:
			return 1632140501;
		case 10:
			return 967218463;
		default:
			break;
	}
	return 0;
}

int func_597(int iParam0)
{
	if (!func_83(iParam0, 0))
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

struct<10> func_598(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_599(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = _item_database_create_item_collection(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_600(int iParam0)
{
	if (!func_83(iParam0, 0))
	{
	}
	if (func_101(iParam0, -393037696))
	{
		return 1;
	}
	return 0;
}

int func_601(int iParam0)
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

int func_602(int iParam0)
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

void func_603(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

bool func_604(int iParam0, var uParam1, bool bParam2)
{
	if (*uParam1 <= 0)
	{
		*uParam1 = 0;
		return false;
	}
	if (Global_1952637->f_3334.f_26 <= 1)
	{
		Global_1952637->f_3334.f_26 = 0;
		*uParam1 = 0;
		Global_1952637->f_3334[0] = 0;
		return true;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1952637->f_3334.f_26 - 1))
	{
		if (iParam0 == &Global_1952637->f_3334[iVar0])
		{
			bVar1 = true;
		}
		if (bVar1 && iVar0 < (Global_1952637->f_3334.f_26 - 1))
		{
			Global_1952637->f_3334[iVar0] = &Global_1952637->f_3334[iVar0 + 1];
		}
		iVar0++;
	}
	if (bVar1)
	{
		Global_1952637->f_3334.f_26 = (Global_1952637->f_3334.f_26 - 1);
		*uParam1 = (*uParam1 - 1);
		Global_1952637->f_3334[Global_1952637->f_3334.f_26] = 0;
		func_480(iParam0, 1, bParam2);
	}
	return bVar1;
}

bool func_605(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, int iParam9)
{
	iVar11 = 0;
	Var4 = func_611(iParam6);
	Var4.f_1 = iParam1;
	Var4.f_3 = 0;
	_0x91ded5dd64bb2691(&Var4);
	if (!_0xed4413cee1bf142c(&Var4))
	{
		return false;
	}
	_0xa63cd20f19b961ab(&bVar2, &Var4, -1516819610);
	_0x44b3a36933ac009c(&iVar0, &Var4, 2049745650);
	*uParam2 = bVar2;
	if (!bVar2 && !bParam3)
	{
		func_685(uParam0, func_684(iVar0), 1, 1, bParam7);
	}
	if (bVar2)
	{
		if (iParam9 != 8)
		{
			func_375(-1);
		}
		if (_0x44b3a36933ac009c(&iVar0, &Var4, -1212855483))
		{
			iVar11 = func_684(iVar0);
		}
	}
	while (_0xed4413cee1bf142c(&Var4))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_224(iVar3, 1);
			if (iVar1 < 0 || iVar1 > 39)
			{
			}
			else if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1373051002))
			{
			}
			else
			{
				uParam0->f_1[iVar1] = iVar0;
				if (bVar2)
				{
					func_686(iVar3, 16, 6);
				}
				if (bParam5)
				{
					if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1441384))
					{
						uParam0->f_1[iVar1]->f_1 = 1155669136;
					}
					else
					{
						Jump @362; //curOff = 297
						if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1194786549))
						{
							if (func_687(iVar3) && func_516(&(uParam0->f_1[iVar1]), iVar3, &iVar0))
							{
								uParam0->f_1[iVar1]->f_1 = iVar0;
							}
						}
						else
						{
							uParam0->f_1[iVar1]->f_1 = iVar0;
						}
					}
					iVar1 = 16;
					if (bVar2)
					{
						if (!bParam8)
						{
							func_689(uParam0, iVar11, func_688(iParam1) != 0, iParam9);
						}
					}
					else if ((((func_368() == 24043185 && &uParam0->f_1[iVar1] == &Global_1952637->f_83[iVar1]) && func_688(&(uParam0->f_1[34])) == 0) && !func_216(32)) && !func_216(64))
					{
						uParam0->f_1[iVar1] = func_617(-1293064293, 0);
						uParam0->f_1[iVar1]->f_1 = 1155669136;
						func_378(uParam0, &(uParam0->f_1[iVar1]), iVar1, 0, iParam9);
					}
					if (bParam4)
					{
						*uParam0 = iParam1;
					}
					return true;
				}
			}
		}
	}
}

void func_606(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

bool func_607(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_608(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_609(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_610(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

int func_611(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_368();
	}
	if (iParam0 == 2026485318)
	{
		return -1806335803;
	}
	else if (iParam0 == 24043185)
	{
		return -971050805;
	}
	return 0;
}

void func_612(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	iVar1 = &uParam0->f_1[iVar0];
	if (func_101(iVar1, 160827531) || func_114(iVar1) == 81053684)
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_376(iVar0, iParam2);
	}
}

void func_613(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 11;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_101(&(uParam0->f_1[iVar0]), -93469181))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_376(iVar0, iParam2);
	}
}

void func_614(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 10;
	if (-525676072 == func_114(&(uParam0->f_1[iVar0])))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_376(iVar0, iParam2);
	}
}

bool func_615(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_114(iParam0);
	if (iParam2 == 0)
	{
		return (iVar0 == 1759215194 || iVar0 == 344283346);
	}
	return (!bParam1 && (iVar0 == -1740828670 || iVar0 == 344283346));
}

bool func_616(int iParam0)
{
	return (Global_17411.f_55.f_644.f_1734 && iParam0) != 0;
}

int func_617(int iParam0, int iParam1)
{
	iVar2 = 0;
	Var3 = { func_541(0, -1591664384, iParam0, -1591664384, 0, 0, 0) };
	if (func_543(&Var3, &iVar0, &iVar1, 1))
	{
		if (iVar1 > 0)
		{
			iVar2 = func_690(iVar0, iVar1, iParam1);
		}
		func_429(iVar0);
	}
	return iVar2;
}

void func_618(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	if ((&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_101(iParam2, -1527414429)) && !func_101(&(uParam0->f_1[iVar0]), -1303648999))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_376(iVar0, iParam3);
	}
	iVar0 = 16;
	if ((uParam0->f_1[iVar0]->f_1 == 1530758430 || uParam0->f_1[iVar0]->f_1 == 1334603721) && func_101(iParam2, -985549034))
	{
		if (uParam0->f_1[iVar0]->f_1 == 1530758430)
		{
			uParam0->f_1[iVar0]->f_1 = 1155669136;
			func_376(iVar0, iParam3);
		}
		else if (uParam0->f_1[iVar0]->f_1 == 1334603721)
		{
			uParam0->f_1[iVar0]->f_1 = -1539589426;
			func_376(iVar0, iParam3);
		}
	}
}

void func_619(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 17;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_376(iVar0, iParam3);
	}
	if (uParam0->f_1[iParam2]->f_1 != -2081918609)
	{
		iVar0 = 34;
		iVar1 = &uParam0->f_1[iVar0];
		if (func_101(iVar1, 1583165364))
		{
			uParam0->f_1[iParam2]->f_1 = -2081918609;
			func_376(iParam2, iParam3);
		}
		else
		{
			iVar0 = 35;
			iVar1 = &uParam0->f_1[iVar0];
			if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && 1769055947 == func_114(iVar1))
			{
				uParam0->f_1[iParam2]->f_1 = -2081918609;
				func_376(iParam2, iParam3);
			}
		}
	}
}

void func_620(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	iVar0 = 16;
	func_376(iVar0, iParam3);
	iVar0 = 18;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		func_376(iVar0, iParam3);
	}
	if (bParam1)
	{
		iVar0 = 21;
		if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
		{
			func_376(iVar0, iParam3);
			func_508(uParam0, 0, &(uParam0->f_1[iVar0]), iParam3);
		}
		return;
	}
	iVar0 = 29;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_101(iParam2, 1126863852))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_376(iVar0, iParam3);
	}
	iVar0 = 16;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_101(iParam2, -985549034))
	{
		if (uParam0->f_1[iVar0]->f_1 == 1530758430)
		{
			uParam0->f_1[iVar0]->f_1 = 1155669136;
		}
		else if (uParam0->f_1[iVar0]->f_1 == 1334603721)
		{
			uParam0->f_1[iVar0]->f_1 = -1539589426;
		}
	}
	iVar0 = 12;
	if ((&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_101(iParam2, -1527414429)) && !func_101(&(uParam0->f_1[iVar0]), -1303648999))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_376(iVar0, iParam3);
	}
}

void func_621(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	iVar0 = 18;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		func_376(iVar0, iParam3);
	}
	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && !func_101(&(uParam0->f_1[iVar0]), -1303648999))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_376(iVar0, iParam3);
	}
	iVar0 = 13;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_376(iVar0, iParam3);
	}
	iVar0 = 25;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_101(iParam2, 675650051))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_376(iVar0, iParam3);
	}
}

bool func_622(int iParam0)
{
	return &Global_1952637->f_1675.f_1[func_224(iParam0, 1)] != &Global_1952637->f_83[func_224(iParam0, 1)];
}

void func_623(var uParam0, int iParam1)
{
	iVar0 = 17;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_376(iVar0, iParam1);
	}
	iVar0 = 20;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		func_376(iVar0, iParam1);
	}
	iVar0 = 36;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0]->f_1 = 1155669136;
		func_376(iVar0, iParam1);
	}
}

void func_624(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	bVar2 = false;
	iVar3 = 0;
	if (func_368() == 24043185)
	{
		iVar3 = 1;
	}
	if (func_368() == 24043185)
	{
		iVar0 = 16;
		if (&uParam0->f_1[iVar0] == &Global_1952637->f_83[iVar0] && func_114(&(uParam0->f_1[18])) != 912453393)
		{
			uParam0->f_1[iVar0] = func_617(Global_1952637->f_83[iVar0]->f_9, 0);
			uParam0->f_1[iVar0]->f_1 = 0;
			func_376(iVar0, iParam3);
		}
	}
	iVar0 = 36;
	func_376(iVar0, iParam3);
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_101(iParam2, -1473580422))
	{
		iVar1 = &uParam0->f_1[iVar0];
		if (func_101(iVar1, 1469783911))
		{
			uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
			uParam0->f_1[iVar0]->f_1 = 0;
		}
		else if (func_515(&(uParam0->f_1[iVar0]), iVar3, -2081918609) != -1)
		{
			uParam0->f_1[iVar0]->f_1 = -2081918609;
		}
		else
		{
			uParam0->f_1[iVar0]->f_1 = 1155669136;
		}
	}
	iVar0 = 18;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		iVar1 = &uParam0->f_1[iVar0];
		if (func_114(iVar1) == 912453393)
		{
			bVar2 = true;
			if (func_101(iParam2, 1583165364))
			{
				uParam0->f_1[iVar0]->f_1 = -2081918609;
				func_376(iVar0, iParam3);
			}
		}
	}
	iVar0 = 20;
	iVar1 = &uParam0->f_1[iVar0];
	if (iVar1 != &Global_1952637->f_83[iVar0])
	{
		if (func_114(iVar1) == 1868067663 && func_101(iParam2, -1016441646))
		{
			func_691(uParam0, iVar0, iParam3);
		}
		else if (bVar2)
		{
			func_376(iVar0, iParam3);
		}
	}
	iVar0 = 34;
	if (1759215194 == func_114(&(uParam0->f_1[iVar0])))
	{
		func_376(16, iParam3);
	}
	iVar0 = 35;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_101(iParam2, -1650340550))
	{
		iVar1 = &uParam0->f_1[iVar0];
		if (func_114(iVar1) == 1769055947)
		{
			uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
			uParam0->f_1[iVar0]->f_1 = 0;
			func_376(iVar0, iParam3);
		}
	}
}

void func_625(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	if (func_368() == 24043185)
	{
		iVar0 = 16;
		if (&uParam0->f_1[iVar0] == &Global_1952637->f_83[iVar0] && func_114(&(uParam0->f_1[18])) != 912453393)
		{
			uParam0->f_1[iVar0] = func_617(Global_1952637->f_83[iVar0]->f_9, 0);
			uParam0->f_1[iVar0]->f_1 = 0;
			func_376(iVar0, iParam3);
		}
	}
	iVar0 = 36;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		if (func_101(&(uParam0->f_1[iVar0]), -2093434733))
		{
			func_631(uParam0, iParam3, 1, 0);
		}
		else if (func_101(iParam2, 1718965018))
		{
			uParam0->f_1[iVar0]->f_1 = 1155669136;
		}
	}
	func_376(iVar0, iParam3);
	iVar0 = 35;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_376(iVar0, iParam3);
	}
	iVar0 = 20;
	iVar1 = &uParam0->f_1[iVar0];
	if ((&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_101(iVar1, 1090938458)) && func_101(iParam2, 475297062))
	{
		func_691(uParam0, iVar0, iParam3);
	}
}

void func_626(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		return;
	}
	func_376(36, iParam2);
	iVar0 = 18;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_376(iVar0, iParam2);
	}
	if (func_368() == 24043185)
	{
		iVar0 = 16;
		if (&uParam0->f_1[iVar0] == &Global_1952637->f_83[iVar0])
		{
			iVar0 = 16;
			uParam0->f_1[iVar0] = func_617(Global_1952637->f_83[iVar0]->f_9, 0);
			uParam0->f_1[iVar0]->f_1 = 0;
			func_376(iVar0, iParam2);
		}
	}
	iVar0 = 20;
	iVar1 = &uParam0->f_1[iVar0];
	if (iVar1 != &Global_1952637->f_83[iVar0] && func_101(iVar1, 353024991))
	{
		func_691(uParam0, iVar0, iParam2);
	}
	iVar0 = 17;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_376(iVar0, iParam2);
	}
	iVar0 = 35;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && 1769055947 == func_114(&(uParam0->f_1[iVar0])))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_376(iVar0, iParam2);
	}
	iVar0 = 29;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_376(iVar0, iParam2);
	}
}

void func_627(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 20;
	iVar1 = &uParam0->f_1[iVar0];
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_114(iVar1) == 294388917)
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_376(iVar0, iParam3);
	}
	iVar0 = 18;
	iVar1 = &uParam0->f_1[iVar0];
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		if (func_114(iVar1) == 912453393)
		{
			if (uParam0->f_1[iVar0]->f_1 != 1155669136)
			{
				uParam0->f_1[iVar0]->f_1 = 1155669136;
				func_376(iVar0, iParam3);
			}
		}
		else
		{
			uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
			uParam0->f_1[iVar0]->f_1 = 0;
			func_376(iVar0, iParam3);
		}
	}
	iVar0 = 17;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_376(iVar0, iParam3);
	}
	iVar0 = 16;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_376(iVar0, iParam3);
	}
	iVar0 = 29;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_376(iVar0, iParam3);
	}
	iVar0 = 35;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_376(iVar0, iParam3);
	}
	iVar0 = 36;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		if (func_101(&(uParam0->f_1[iVar0]), -2093434733))
		{
			func_631(uParam0, iParam3, 1, 0);
		}
		else if (func_101(iParam2, 1718965018))
		{
			uParam0->f_1[iVar0]->f_1 = 1155669136;
		}
	}
}

void func_628(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 20;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		func_691(uParam0, iVar0, iParam2);
	}
	iVar0 = 21;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_376(iVar0, iParam2);
	}
	iVar0 = 18;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_376(iVar0, iParam2);
	}
	iVar0 = 17;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_376(iVar0, iParam2);
	}
	iVar0 = 16;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_376(iVar0, iParam2);
	}
	iVar0 = 29;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_376(iVar0, iParam2);
	}
	iVar0 = 35;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_376(iVar0, iParam2);
	}
	iVar0 = 36;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		if (func_101(&(uParam0->f_1[iVar0]), -2093434733))
		{
			func_631(uParam0, iParam2, 1, 0);
		}
		else
		{
			uParam0->f_1[iVar0]->f_1 = 1155669136;
			func_376(iVar0, iParam2);
		}
	}
}

void func_629(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 34;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0]->f_1 = 1155669136;
		func_376(iVar0, iParam3);
	}
	iVar0 = 36;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0]->f_1 = -2081918609;
		func_376(iVar0, iParam3);
	}
	iVar0 = 37;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_101(iParam2, -1278198125))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_376(iVar0, iParam3);
	}
	iVar0 = 18;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		iVar1 = &uParam0->f_1[iVar0];
		if (912453393 == func_114(iVar1) && uParam0->f_1[iVar0]->f_1 != -2081918609)
		{
			uParam0->f_1[iVar0]->f_1 = -2081918609;
			func_376(iVar0, iParam3);
		}
	}
}

void func_630(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 37;
	if (func_101(iParam2, -1278198125) && &uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_376(iVar0, iParam3);
	}
}

void func_631(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 36;
	if (bParam2)
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_376(iVar0, iParam1);
	}
	iVar0 = 37;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_376(iVar0, iParam1);
	}
	iVar0 = 38;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_376(iVar0, iParam1);
	}
	iVar0 = 35;
	if (bParam3 && -923693316 == func_114(&(uParam0->f_1[iVar0])))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_376(iVar0, iParam1);
	}
}

void func_632(var uParam0, int iParam1, int iParam2)
{
	*Global_17411.f_55.f_644.f_33[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
}

void func_633(var uParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17411.f_55.f_644.f_1777;
	}
	Global_17411.f_55.f_644.f_33[iParam1]->f_1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		func_632(uParam0->f_1[iVar0], iVar0, iParam1);
		iVar0++;
	}
}

void func_634(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17411.f_55.f_644.f_1777;
	}
	if (iParam1 > -1 && iParam1 < 11)
	{
		Global_17411.f_55.f_644.f_33[iParam1] = (Global_17411.f_55.f_644.f_33[iParam1] || iParam0);
	}
}

bool func_635(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_168(bParam3);
	}
	if (!_0x22e590f108289a9d(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_154(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

struct<28> func_636(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var28.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_168(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_642(&Var28, bParam5) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_637(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_414(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_416(func_692(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_417(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 28), iVar0, uParam1);
	}
	return -1;
}

struct<25> func_638(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var25.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_168(bParam4), &uParam0, &Var25, 24, 1))
	{
		return Var0;
	}
	Var0 = { func_642(&Var25, bParam5) };
	Var0.f_16 = { Var25.f_15 };
	Var0.f_24 = Var25.f_23;
	return Var0;
}

int func_639(int iParam0, var uParam1, bool bParam2)
{
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_416(func_693(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_417(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 25), iVar0, uParam1);
	}
	return -1;
}

struct<17> func_640(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_168(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_642(&Var17, bParam5) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_641(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_414(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_416(func_694(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_417(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 17), iVar0, uParam1);
	}
	return -1;
}

struct<16> func_642(var uParam0, bool bParam1)
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
		Var0.f_15 = func_169(uParam0->f_4, -455129387);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_383() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

bool func_643()
{
	return func_163(*Global_1051213);
}

bool func_644(int iParam0)
{
	return ((iParam0 == -1759663922 || iParam0 == -318976023) || iParam0 == 772881414);
}

bool func_645(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_695(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_696())
	{
		return func_695(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_695(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_646(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_647(int iParam0)
{
	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (!&Global_1296859->f_22[iVar0])
	{
		func_697(iParam0);
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 1)
	{
		return;
	}
	func_698(iVar0);
	_0x51951de06c0d1c40(iParam0, 1);
	Global_1071686->f_21416.f_1[iVar0] = 1;
}

void func_648(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_699(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)]);
	Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)] = iParam0;
	(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_2 = iParam2;
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_3 = iParam3;
	}
}

bool func_649(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

var func_650()
{
	return Global_1071686->f_28448[32]->f_3;
}

struct<8> func_651(vector3 vParam0, var uParam3, var uParam4, int iParam5, int iParam6)
{
	vParam0.f_2 = iParam5;
	if (_datafile_get_string(&Var0, &vParam0))
	{
	}
	return Var0;
}

int func_652(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_164(Param0);
	}
	return -1;
}

bool func_653()
{
	return !Global_1572887->f_9;
}

int func_654(int iParam0)
{
	return func_701(func_700(iParam0));
}

bool func_655(int iParam0)
{
	fVar0 = (func_702(iParam0) - _0xdf66a37936d5f3d9(iParam0));
	return fVar0 <= 1f;
}

int func_656()
{
	return &Global_1902818;
}

void func_657(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = func_703(*iParam0);
	iVar1 = func_704(*iParam0);
	iVar2 = func_705(*iParam0);
	iVar3 = func_706(*iParam0);
	iVar4 = func_707(*iParam0);
	iVar5 = func_708(*iParam0);
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
	iVar5 = (iVar5 - iParam1);
	while (iVar5 < 0)
	{
		iParam2++;
		iVar5 += 60;
	}
	iVar4 = (iVar4 - iParam2);
	while (iVar4 < 0)
	{
		iParam3++;
		iVar4 += 60;
	}
	iVar3 = (iVar3 - iParam3);
	while (iVar3 < 0)
	{
		iParam4++;
		iVar3 += 24;
	}
	iVar2 = (iVar2 - iParam4);
	while (iVar2 <= 0)
	{
		iParam5++;
		iVar6 = (iVar1 - 1);
		if (iVar6 < 0)
		{
			iParam6++;
			iVar1 += 12;
		}
		iVar7 = func_709(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_710(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_658(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_654(2);
	}
	switch (iParam1)
	{
		case 0:
			return Global_1956200->f_1431.f_6[iParam0]->f_2;
		case 1:
			return Global_1956200->f_1565.f_2.f_6[iParam0]->f_2;
		default:
			break;
	}
	return -1;
}

int func_659(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_654(2);
	}
	switch (iParam1)
	{
		case 0:
			return Global_1956200->f_1431.f_6[iParam0]->f_1;
		case 1:
			return Global_1956200->f_1565.f_2.f_6[iParam0]->f_1;
		default:
			break;
	}
	return -15;
}

bool func_660(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_711(iParam1) || !func_711(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_661(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_654(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200->f_1431.f_6[iParam0]->f_2 = iParam1;
			break;
		case 1:
			Global_1956200->f_1565.f_2.f_6[iParam0]->f_2 = iParam1;
			break;
		default:
			break;
	}
}

void func_662(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_654(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200->f_1431.f_6[iParam0]->f_1 = iParam1;
			break;
		case 1:
			Global_1956200->f_1565.f_2.f_6[iParam0]->f_1 = iParam1;
			break;
		default:
			break;
	}
}

bool func_663(int iParam0, int iParam1, float fParam2)
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
	_set_attribute_core_value(iParam0, func_712(iParam1), ceil(fParam2));
	return true;
}

void func_664(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_654(2);
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

void func_665(int iParam0, int iParam1, float fParam2)
{
	sVar0 = func_713(iParam1);
	if (!is_string_null_or_empty(sVar0))
	{
		_0x437c08db4febe2bd(iParam0, func_714(iParam1), fParam2, -1);
	}
}

void func_666(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (iParam3 == 2)
	{
		iParam3 = func_654(2);
	}
	uVar0 = Global_1296859->f_21;
	func_715(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_716(iParam0, uVar0, iParam3);
	}
}

bool func_667(int iParam0)
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

char* func_668(int iParam0)
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

void func_669(int iParam0)
{
	iVar1 = Global_1146212->f_47689.f_1.f_42;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar0 = &Global_1146212->f_47689.f_1[iVar2];
		iVar3 = func_717(iVar0, 1);
		if (&Global_1146212->f_35859.f_919[iVar3] == iParam0)
		{
			func_718(iVar0);
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

void func_670(int iParam0, bool bParam1, bool bParam2)
{
	func_572(iParam0, 100f, bParam1, bParam2, 1, 2);
}

bool func_671(int iParam0, bool bParam1)
{
	return func_660(func_656(), iParam0, bParam1);
}

float func_672(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_654(1);
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1956200->f_1431.f_26[iParam0]);
		case 1:
			return &(Global_1956200->f_1565.f_2.f_26[iParam0]);
		default:
			break;
	}
	return -1f;
}

int func_673(float fParam0)
{
	fVar0 = fParam0;
	fVar0 = ((2f * fVar0) - 100f);
	return round(((fVar0 / 100f) * to_float(10)));
}

float func_674(float fParam0, float fParam1, float fParam2)
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

void func_675(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_703(*iParam0);
	iVar1 = func_704(*iParam0);
	iVar2 = func_705(*iParam0);
	iVar3 = func_706(*iParam0);
	iVar4 = func_707(*iParam0);
	iVar5 = func_708(*iParam0);
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
	iVar6 = func_709(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_709(iVar1, iVar0);
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
	func_710(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_676(int iParam0, float fParam1, int iParam2)
{
	if (!func_719(iParam0))
	{
		return 0;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_654(2);
	}
	func_720(iParam0, fParam1, iParam2);
	if (!is_entity_dead(Global_1296859->f_8))
	{
		set_attribute_points(Global_1296859->f_8, iParam0, floor(fParam1));
	}
	return 1;
}

int func_677(int iParam0, int iParam1)
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

int func_678(int iParam0, int iParam1)
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

char* func_679(int iParam0)
{
	if (!func_83(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_488(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return _get_label_text_by_hash(iVar0);
}

char* func_680(int iParam0)
{
	if (!func_83(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_583(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return _get_label_text_by_hash(iVar0);
}

int func_681(int iParam0)
{
	return _0xf49f14462f0ae27c(get_player_index());
}

int func_682(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_326(iParam1, bParam2, 0, 0);
	iVar0 = (iVar0 + func_721(iParam0, iParam1));
	if (bParam3)
	{
		iVar0 = (iVar0 + func_722(iParam1, bParam4));
	}
	return iVar0;
}

void func_683()
{
	if (!func_83(Global_1940311->f_10893, 0))
	{
		Global_1940311->f_6 = 0;
	}
	else if ((((func_188(Global_1940311->f_10893, 1224357681) != 0 && Global_1940311->f_10892 != 0) && Global_1940311->f_10892 != -2074770370) && !Global_1915715->f_20638) && !Global_1915715->f_22504.f_1)
	{
		Global_1940311->f_6 = 1;
	}
	else
	{
		Global_1940311->f_6 = 0;
	}
}

int func_684(int iParam0)
{
	switch (iParam0)
	{
		case 708211766:
			return 1;
		case -1815871154:
			return 2;
		case 1053922635:
			return 4;
		case -1248203249:
			return 8;
		case -1275860049:
			return 16;
		case -473313046:
			return 32;
		case 1009605579:
			return 64;
		case -92538845:
			return 256;
		case 350097565:
			return 512;
		case 346761890:
			return 1024;
		case -915377750:
			return 2048;
		case -1283403230:
			return 4096;
		case 1024778115:
			return 8192;
		case 75507907:
			return 16384;
		case -1678578495:
			return 32768;
		case -1925540957:
			return 65536;
		case -1932005642:
			return 131072;
		case -803648582:
			return 128;
		case 351949263:
			return 262144;
		case -597281578:
			return 524288;
		case 465720259:
			return 1048576;
		case 396349281:
			return 2097152;
		case -376594188:
			return -1;
		case -663436545:
			return 112;
		case 1042019528:
			return 2160;
		case -141044514:
			return 8304;
		case 884232794:
			return 16496;
		case 836721350:
			return 40960;
		case -1062102573:
			return 65601;
		case -884591393:
			return 96;
		case -1886898087:
			return 32880;
		case -1629261761:
			return 2049;
		case -366477279:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_685(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_723(uParam0->f_1[iVar0], 2))
		{
			if (func_724(iVar0, iParam1))
			{
				vVar4 = { func_725(iVar0, -1) };
				if (((!bParam4 && vVar4.x != &Global_1952637->f_83[iVar0]) && vVar4.x != 0) && (&uParam0->f_1[iVar0] != vVar4.x || uParam0->f_1[iVar0]->f_1 != vVar4.y))
				{
					*uParam0->f_1[iVar0] = { vVar4 };
				}
				if (func_726(iVar0, 4))
				{
					func_727(iVar0, 4, 6);
				}
			}
			else
			{
				if (bParam3)
				{
					func_728(iVar0, 4, 6);
				}
				Jump @205; //curOff = 171
				if (bParam2)
				{
					vVar1.x = &Global_1952637->f_83[iVar0];
					*uParam0->f_1[iVar0] = { vVar1 };
				}
			}
			iVar0++;
		}
	}
}

void func_686(int iParam0, int iParam1, int iParam2)
{
	(Global_1952637->f_83[func_224(iParam0, 1)])->f_11 = ((Global_1952637->f_83[func_224(iParam0, 1)])->f_11 || iParam1);
}

bool func_687(int iParam0)
{
	Global_1952637->f_1043.f_2 = 0;
	iVar0 = 1226838104;
	func_606(&(Global_1952637->f_1043), iVar0, -367421157, 1409451727, 1, iParam0);
	_0x91ded5dd64bb2691(&(Global_1952637->f_1043));
	if (!_0x44b3a36933ac009c(&uVar1, &(Global_1952637->f_1043), 1409451727))
	{
		return false;
	}
	return true;
}

int func_688(int iParam0)
{
	if (!func_83(iParam0, 0))
	{
		return 0;
	}
	iVar6 = _0x8870895ba5ed9385(iParam0, 761377030, &uVar0);
	if (iVar6 > 0)
	{
		return &(uVar0[0]);
	}
	return 0;
}

void func_689(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_101(&(uParam0->f_1[34]), -166674229))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		bVar1 = func_726(iVar0, 16);
		if (bVar1)
		{
			func_727(iVar0, 16, 9);
		}
		if (&Global_1952637->f_83[iVar0]->f_3[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
		{
		}
		else
		{
			if (bVar1)
			{
				func_376(iVar0, iParam3);
			}
			if (!bParam2 && func_688(&(uParam0->f_1[iVar0])) != 0)
			{
			}
			else if (func_724(iVar0, iParam1) && !bVar1)
			{
				uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
				uParam0->f_1[iVar0]->f_1 = 0;
				func_378(uParam0, &(uParam0->f_1[iVar0]), iVar0, 1, iParam3);
				func_376(iVar0, iParam3);
			}
			else if (bVar1 && !bParam2)
			{
				func_378(uParam0, &(uParam0->f_1[iVar0]), iVar0, 0, iParam3);
			}
		}
		iVar0++;
	}
}

int func_690(int iParam0, int iParam1, int iParam2)
{
	Var1.f_9 = -1591664384;
	iVar16 = 0;
	if (func_368() == 24043185)
	{
		iVar16 = 1;
	}
	iParam2 |= 28;
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (!func_427(&Var1, iVar0, iParam0, iParam1))
		{
		}
		else if (_get_ped_component_category(Var1.f_4, iVar16, true) == 0)
		{
			if ((Var1.f_4 != 1733464892 && Var1.f_4 != 1326838792) && Var1.f_4 != -230310728)
			{
			}
			else if (func_688(Var1.f_4) != 0)
			{
			}
			else if (func_101(Var1.f_4, -166674229))
			{
			}
			else if (func_101(Var1.f_4, 525391395))
			{
			}
			else
			{
				iVar15 = func_114(Var1.f_4);
				if (func_730(iParam2, func_729(iVar15)))
				{
				}
				else
				{
					return Var1.f_4;
				}
			}
			iVar0++;
			return 0;
		}
	}
}

void func_691(var uParam0, int iParam1, int iParam2)
{
	if (func_101(&(uParam0->f_1[iParam1]), 343781202))
	{
		func_498(uParam0, &(uParam0->f_1[iParam1]));
	}
	else
	{
		uParam0->f_1[iParam1] = &Global_1952637->f_83[iParam1];
		uParam0->f_1[iParam1]->f_1 = 0;
		func_376(iParam1, iParam2);
	}
}

bool func_692(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 28, uParam2, 0);
}

bool func_693(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 25, uParam2, 0);
}

bool func_694(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 17, uParam2, 0);
}

bool func_695(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_696()
{
	return Global_1102219->f_3672;
}

void func_697(int iParam0)
{
	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 0)
	{
		return;
	}
	func_698(iVar0);
	_0x51951de06c0d1c40(iParam0, 0);
	Global_1071686->f_21416.f_1[iVar0] = 0;
}

void func_698(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = 0;
		Global_1071686->f_21416.f_1[iParam0]->f_1 = 0;
	}
}

void func_699(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_731(&(uParam0->f_4));
}

bool func_700(int iParam0)
{
	return func_695(&(Global_1956200->f_1565), iParam0, 1);
}

int func_701(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

float func_702(int iParam0)
{
	return (_0x592f58bc4d2a2cf3(iParam0, 0) - IntToFloat(func_732(2)));
}

int func_703(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_733(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_704(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_705(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_706(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_707(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_708(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_709(int iParam0, int iParam1)
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

void func_710(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_734(iParam0, iParam6);
	func_735(iParam0, iParam5);
	func_736(iParam0, iParam4);
	func_737(iParam0, iParam3);
	func_738(iParam0, iParam2);
	func_739(iParam0, iParam1);
}

bool func_711(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_708(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_707(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_706(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_703(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_704(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_705(iParam0);
	if (iVar5 < 1 || iVar5 > func_709(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

int func_712(int iParam0)
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

char* func_713(int iParam0)
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

char* func_714(int iParam0)
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

void func_715(int iParam0, float fParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_654(2);
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

void func_716(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_654(2);
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

int func_717(int iParam0, int iParam1)
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

int func_718(int iParam0)
{
	if (!func_740(iParam0))
	{
		return 0;
	}
	iVar0 = func_717(iParam0, 1);
	if (!func_741(&(Global_1146212->f_35859.f_919[iVar0])))
	{
		return 1;
	}
	iVar3 = func_742(&(Global_1146212->f_35859.f_919[iVar0]), 1);
	iVar4 = 0;
	while (iVar4 < Global_1146212->f_35859[iVar3]->f_5)
	{
		iVar1 = Global_1146212->f_35859[iVar3][iVar4];
		switch (func_743(iParam0, iVar1))
		{
			case 0:
				func_744(iVar1, iParam0, iVar4);
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
						func_744(iVar1, iParam0, iVar4);
						func_745(Global_1146212->f_35859.f_9503[iVar5]);
						Global_1146212->f_35859.f_11700 = (Global_1146212->f_35859.f_11700 - 1);
						*Global_1146212->f_35859.f_9503[iVar5] = { *Global_1146212->f_35859.f_9503[Global_1146212->f_35859.f_11700] };
						func_745(Global_1146212->f_35859.f_9503[Global_1146212->f_35859.f_11700]);
					}
					else
					{
						iVar5++;
					}
				}
				break;
			case 2:
				Jump @606; //curOff = 387
				iVar2 = func_746(iVar1, 1);
				func_747(iVar2, -1);
				if (Global_1146212->f_35859.f_3116[iVar2]->f_29 <= 0)
				{
					func_748(iVar2, 0);
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
			func_749(Global_1146212->f_35859.f_919[iVar0]);
			return 1;
		}

bool func_719(int iParam0)
{
	if (func_667(iParam0))
	{
		return true;
	}
	else if (func_750(iParam0))
	{
		return true;
	}
	return false;
}

void func_720(int iParam0, float fParam1, int iParam2)
{
	if (fParam1 < 0f)
	{
		return;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_654(1);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200->f_1431.f_26[iParam0] = fParam1;
			break;
		case 1:
			Global_1956200->f_1565.f_2.f_26[iParam0] = fParam1;
			break;
		default:
			break;
	}
}

int func_721(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (func_751(iParam1))
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
			return func_752(_inventory_get_ped_inventory_id(iParam0), iParam1);
		}
	}
	return 0;
}

int func_722(int iParam0, bool bParam1)
{
	if (!bParam1 || func_753())
	{
		return func_231(iParam0, func_232(1), -2015960939, 1, 1, 0);
	}
	return 0;
}

bool func_723(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_724(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 39)
	{
		return false;
	}
	return (Global_1952637->f_83[iParam0]->f_10 && iParam1) != 0;
}

Vector3 func_725(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17411.f_55.f_644.f_1777;
	}
	return *Global_17411.f_55.f_644.f_33[iParam1]->f_1.f_1[iParam0];
}

bool func_726(int iParam0, int iParam1)
{
	return (Global_1952637->f_83[iParam0]->f_11 && iParam1) != 0;
}

void func_727(int iParam0, int iParam1, int iParam2)
{
	Global_1952637->f_83[iParam0]->f_11 = (Global_1952637->f_83[iParam0]->f_11 - (Global_1952637->f_83[iParam0]->f_11 && iParam1));
}

void func_728(int iParam0, int iParam1, int iParam2)
{
	Global_1952637->f_83[iParam0]->f_11 = (Global_1952637->f_83[iParam0]->f_11 || iParam1);
}

int func_729(int iParam0)
{
	switch (iParam0)
	{
		case 502936876:
			return 1;
		case 684307653:
			return 2;
		case 1759215194:
			return 4;
		case -1740828670:
			return 8;
		case 344283346:
			return 16;
		default:
			break;
	}
	return 0;
}

bool func_730(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_731(var uParam0)
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

int func_732(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_564(2) * 2;
		case 1:
			return func_568(2) * 2;
		case 2:
			return func_566(2) * 2;
		default:
			break;
	}
	return -1;
}

int func_733(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_734(int iParam0, int iParam1)
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

void func_735(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_736(int iParam0, int iParam1)
{
	iVar0 = func_704(*iParam0);
	iVar1 = func_703(*iParam0);
	if (iParam1 < 1 || iParam1 > func_709(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_737(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_738(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_739(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

bool func_740(int iParam0)
{
	iVar0 = func_717(iParam0, 1);
	if (iVar0 < 2 || iVar0 >= 183)
	{
		return false;
	}
	return true;
}

bool func_741(int iParam0)
{
	iVar0 = func_742(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 153)
	{
		return false;
	}
	return true;
}

int func_742(int iParam0, int iParam1)
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

int func_743(int iParam0, int iParam1)
{
	iVar0 = func_754(iParam0);
	iVar1 = &Global_1296859;
	iVar2 = func_746(iParam1, 1);
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

int func_744(int iParam0, int iParam1, int iParam2)
{
	if (!func_740(iParam1))
	{
		return 0;
	}
	if (!func_755(iParam0))
	{
		return 0;
	}
	iVar0 = func_746(iParam0, 1);
	func_756(iParam0, iParam1, iParam2);
	if (func_757(*Global_1146212->f_35859.f_3116[iVar0]) && func_758(iParam0, Global_1146212->f_35859.f_3116[iVar0]->f_4))
	{
		vVar1 = { func_759(Global_1146212->f_35859.f_3116[iVar0]->f_4) };
		if (func_760(vVar1))
		{
			if (func_761(vVar1.x, vVar1.y, vVar1.z))
			{
				func_762(Global_1146212->f_35859.f_3116[iVar0]->f_4, vVar1.x, vVar1.y, vVar1.z);
			}
			else
			{
				func_763(Global_1146212->f_35859.f_3116[iVar0]->f_4);
			}
		}
		else
		{
			func_763(Global_1146212->f_35859.f_3116[iVar0]->f_4);
		}
	}
	return 1;
}

void func_745(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
}

int func_746(int iParam0, int iParam1)
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

void func_747(int iParam0, int iParam1)
{
	Global_1146212->f_35859.f_3116[iParam0]->f_29 = (Global_1146212->f_35859.f_3116[iParam0]->f_29 + iParam1);
}

void func_748(int iParam0, int iParam1)
{
	Global_1146212->f_35859.f_3116[iParam0]->f_29 = iParam1;
}

void func_749(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0]->f_1 = 0;
		iVar0++;
	}
}

bool func_750(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return true;
		case 13:
			return true;
		default:
			break;
	}
	return false;
}

bool func_751(int iParam0)
{
	if (!func_584(iParam0, 1955773996))
	{
		return false;
	}
	if (!func_764(iParam0, 1))
	{
		return false;
	}
	return true;
}

int func_752(int iParam0, int iParam1)
{
	if (!func_83(iParam1, 0))
	{
		return 0;
	}
	Var0 = { func_765(iParam0, iParam1) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	iVar4 = _0xc97e0d2302382211(iParam0, &Var0, 0);
	return iVar4;
}

bool func_753()
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
	if (!func_766(iVar0))
	{
		return false;
	}
	return true;
}

int func_754(int iParam0)
{
	if (func_767(iParam0))
	{
		return (func_768(iParam0) % 32);
	}
	return &Global_1296859;
}

bool func_755(int iParam0)
{
	iVar0 = func_746(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 199)
	{
		return false;
	}
	return true;
}

int func_756(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_717(iParam1, 1);
	iVar1 = func_746(iParam0, 1);
	iVar2 = func_742(&(Global_1146212->f_35859.f_919[iVar0]), 1);
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
		iVar5 = func_769(iVar3, 1);
		if (!func_770(iVar3))
		{
		}
		else
		{
			Global_1146212->f_2169[iVar5]->f_1[iVar1] = (&Global_1146212->f_2169[iVar5]->f_1[iVar1] - 1);
			Global_1146212->f_2169[iVar5]->f_201 = (Global_1146212->f_2169[iVar5]->f_201 - func_771(Global_1146212->f_35859.f_3116[iVar1]->f_6[iVar4]));
			func_772(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1146212->f_35859.f_3116[iVar1]->f_28)
	{
		iVar6 = &Global_1146212->f_35859.f_3116[iVar1]->f_17[iVar7];
		if (!func_773(iVar6))
		{
		}
		else
		{
			iVar8 = func_774(iVar6, 1);
			(*Global_1146212->f_21645[iVar8])[iVar1] = (Global_1146212->f_21645[iVar8][iVar1] - 1);
			if (Global_1146212->f_21645[iVar8][iVar1] <= 0)
			{
				_0xb909149f2bb5f6da(&(Global_1146212->f_21645[iVar8]->f_200), iVar1);
			}
			if (!_0x80e9c316ef84dd81(&(Global_1146212->f_21645[iVar8]->f_200)))
			{
				Global_1146212->f_21645[iVar8]->f_208 = 0;
				func_775(iVar6);
			}
		}
		iVar7++;
	}
	return 1;
}

bool func_757(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	return Param0.f_4 != 0;
}

bool func_758(int iParam0, int iParam1)
{
	if (!func_755(iParam0))
	{
		return false;
	}
	if (!func_776(iParam1))
	{
		return false;
	}
	iVar0 = func_777(iParam1, 1);
	return &Global_1146212->f_35859.f_9286[iVar0] == iParam0;
}

Vector3 func_759(int iParam0)
{
	iVar0 = func_778(iParam0);
	if (iVar0 == -1)
	{
		vVar1 = -1;
		vVar1.f_2 = -1;
		return vVar1;
	}
	return *Global_1146212->f_35859.f_9503[iVar0];
}

bool func_760(vector3 vParam0)
{
	if (!func_755(vParam0.x))
	{
		return false;
	}
	if (!func_740(vParam0.y))
	{
		return false;
	}
	if (!func_779(vParam0.z))
	{
		return false;
	}
	return true;
}

bool func_761(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_717(iParam1, 1);
	iVar1 = func_746(iParam0, 1);
	iVar2 = func_742(&(Global_1146212->f_35859.f_919[iVar0]), 1);
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
		iVar5 = func_769(iVar3, 1);
		if (!func_770(iVar3))
		{
		}
		else
		{
			Global_1146212->f_2169[iVar5]->f_1[iVar1] = &Global_1146212->f_2169[iVar5]->f_1[iVar1] + 1;
			Global_1146212->f_2169[iVar5]->f_201 = (Global_1146212->f_2169[iVar5]->f_201 + func_771(Global_1146212->f_35859.f_3116[iVar1]->f_6[iVar4]));
			func_780(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1146212->f_35859.f_3116[iVar1]->f_28)
	{
		iVar6 = &Global_1146212->f_35859.f_3116[iVar1]->f_17[iVar7];
		if (!func_773(iVar6))
		{
		}
		else if (!func_781(Global_1146212->f_35859.f_3116[iVar1]->f_17[iVar7]))
		{
		}
		else
		{
			iVar8 = func_774(iVar6, 1);
			(*Global_1146212->f_21645[iVar8])[iVar1] = Global_1146212->f_21645[iVar8][iVar1] + 1;
			_0xe84aac1b22a73e99(&(Global_1146212->f_21645[iVar8]->f_200), iVar1);
			if (!Global_1146212->f_21645[iVar8]->f_208)
			{
				Global_1146212->f_21645[iVar8]->f_208 = 1;
				func_782(iVar6);
			}
		}
		iVar7++;
	}
	func_783(Global_1146212->f_35859.f_3116[iVar1]->f_2);
	return true;
}

void func_762(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!func_776(iParam0))
	{
		return;
	}
	iVar0 = func_777(iParam0, 1);
	if (!func_755(iParam1))
	{
		return;
	}
	if (!func_740(iParam2))
	{
		return;
	}
	if (!func_779(iParam3))
	{
		return;
	}
	Global_1146212->f_35859.f_9286[iVar0] = iParam1;
	Global_1146212->f_35859.f_9286[iVar0]->f_1 = iParam2;
	Global_1146212->f_35859.f_9286[iVar0]->f_2 = iParam3;
}

void func_763(int iParam0)
{
	if (!func_776(iParam0))
	{
		return;
	}
	iVar0 = func_777(iParam0, 1);
	Global_1146212->f_35859.f_9286[iVar0] = -1;
	Global_1146212->f_35859.f_9286[iVar0]->f_1 = 0;
	Global_1146212->f_35859.f_9286[iVar0]->f_2 = -1;
}

bool func_764(int iParam0, int iParam1)
{
	iVar0 = func_784(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return iVar0 > iParam1;
}

struct<4> func_765(int iParam0, int iParam1)
{
	Var0 = { func_785(iParam0) };
	return func_786(iParam0, iParam1, Var0, Var0.f_4);
}

bool func_766(int iParam0)
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

bool func_767(int iParam0)
{
	iVar0 = func_717(iParam0, 1);
	if (iVar0 >= 2 && iVar0 <= 129)
	{
		return true;
	}
	return false;
}

int func_768(int iParam0)
{
	iVar0 = func_717(iParam0, 1);
	if (func_767(iParam0))
	{
		return (iVar0 - 2);
	}
	else if (func_787(iParam0))
	{
		return (iVar0 - 130);
	}
	else if (func_788(iParam0))
	{
		return (iVar0 - 166);
	}
	else if (func_789(iParam0))
	{
		return (iVar0 - 167);
	}
	else if (func_790(iParam0))
	{
		return (iVar0 - 172);
	}
	else if (func_791(iParam0))
	{
		return (iVar0 - 180);
	}
	else if (func_792(iParam0))
	{
		return (iVar0 - 150);
	}
	return -1;
}

int func_769(int iParam0, int iParam1)
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

bool func_770(int iParam0)
{
	iVar0 = func_769(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 95)
	{
		return false;
	}
	return true;
}

float func_771(var uParam0)
{
	if (uParam0->f_2 != 0)
	{
		fVar0 = func_793(794259616, uParam0->f_2, uParam0->f_1, "");
		return fVar0;
	}
	return uParam0->f_1;
}

void func_772(int iParam0)
{
	if (!func_770(iParam0))
	{
		return;
	}
	iVar0 = func_769(iParam0, 1);
	if (!func_794(&(Global_1146212->f_2169[iVar0])))
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
	if (!func_795(Global_1146212->f_2169[iVar0]->f_203))
	{
		return;
	}
	iVar1 = func_796(Global_1146212->f_2169[iVar0]->f_203, 1);
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

bool func_773(int iParam0)
{
	iVar0 = func_774(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 68)
	{
		return false;
	}
	return true;
}

int func_774(int iParam0, int iParam1)
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

void func_775(int iParam0)
{
	iVar0 = player_ped_id();
	iVar1 = player_id();
	switch (iParam0)
	{
		case -1730553768:
		case -488644714:
			func_797();
			break;
		case -2103256604:
			func_798();
			break;
		case 692490127:
			_remove_ped_wound_effect(iVar0, 0f);
			break;
		case 50982971:
			_0xa5950e16b8f31052(iVar0, 0, 0);
			_0xc5cb91d65852ed7e(func_799(iParam0));
			break;
		case 1870637439:
			_0xc5cb91d65852ed7e(func_799(iParam0));
			break;
		case 492808644:
			_0xc5cb91d65852ed7e(func_799(iParam0));
			break;
		case 125946764:
			_0x3fc4c027fd0936f4(5);
			func_137(105, 1);
			break;
		case -106166013:
			_0xc5cb91d65852ed7e(func_799(iParam0));
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
			func_801(func_800(iParam0));
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
			func_802();
			break;
		case -166765081:
		case 718630298:
		case 1341326366:
		case 1565429580:
			func_794(17);
			break;
		case -824728332:
			func_794(16);
			break;
	}
}

bool func_776(int iParam0)
{
	iVar0 = func_777(iParam0, 1);
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_777(int iParam0, int iParam1)
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

int func_778(int iParam0)
{
	iVar0 = func_803(iParam0);
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
		iVar64 = func_746(&(Global_1146212->f_35859.f_9503[iVar65]), 1);
		if (Global_1146212->f_35859.f_3116[iVar64]->f_4 != iParam0)
		{
		}
		else if (&Global_1146212->f_35859.f_9503[iVar65] == iVar0)
		{
		}
		else if (!func_804(&(Global_1146212->f_35859.f_9503[iVar65]), Global_1146212->f_35859.f_9503[iVar65]->f_1))
		{
		}
		else
		{
			Var1 = { func_805(&(Global_1146212->f_35859.f_9503[iVar65])) };
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

bool func_779(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 4)
	{
		return false;
	}
	return true;
}

void func_780(int iParam0)
{
	if (!func_770(iParam0))
	{
		return;
	}
	iVar0 = func_769(iParam0, 1);
	if (!func_794(&(Global_1146212->f_2169[iVar0])))
	{
		return;
	}
	(*(*Global_1146212)[&Global_1146212->f_2169[iVar0]])[iVar0] = (*Global_1146212)[&Global_1146212->f_2169[iVar0]][iVar0] + 1;
	Global_1146212->f_2169[iVar0]->f_204 = 1;
	if (!func_795(Global_1146212->f_2169[iVar0]->f_203))
	{
		return;
	}
	iVar1 = func_796(Global_1146212->f_2169[iVar0]->f_203, 1);
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

bool func_781(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		bVar0 = func_806(794259616, uParam0->f_1, 1, "");
		return bVar0;
	}
	return true;
}

void func_782(int iParam0)
{
	iVar0 = player_ped_id();
	iVar1 = player_id();
	switch (iParam0)
	{
		case -1730553768:
		case -488644714:
			func_797();
			break;
		case -2103256604:
			func_798();
			break;
		case 692490127:
			_set_ped_wound_effect(iVar0, 2, 2.019411E-41f, 0f, 0f, 0f, 0f, 0f, -1f, 1f);
			break;
		case 50982971:
			_0xa5950e16b8f31052(iVar0, 1, 0);
			animpostfx_play(func_799(iParam0));
			break;
		case 1870637439:
			animpostfx_play(func_799(iParam0));
			break;
		case 492808644:
			animpostfx_play(func_799(iParam0));
			break;
		case 125946764:
			_0xfb6e111908502871(5);
			func_137(104, 1);
			break;
		case -106166013:
			animpostfx_play(func_799(iParam0));
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
			iVar2 = func_800(iParam0);
			iVar3 = get_entity_bone_index_by_name(iVar0, func_807(iParam0, 0));
			func_808(iVar2, 0, 1, iVar3, 0);
			iVar3 = get_entity_bone_index_by_name(iVar0, func_807(iParam0, 1));
			func_808(iVar2, 1, 1, iVar3, 0);
			iVar3 = get_entity_bone_index_by_name(iVar0, func_807(iParam0, 2));
			func_808(iVar2, 2, 1, iVar3, 0);
			iVar3 = get_entity_bone_index_by_name(iVar0, func_807(iParam0, 3));
			func_808(iVar2, 2, 1, iVar3, 0);
			break;
		case -1655894020:
			iVar2 = func_800(iParam0);
			func_808(iVar2, 3, 1, -1, 1);
			break;
		case 907911269:
			iVar2 = func_800(iParam0);
			func_808(iVar2, 4, 1, -1, 0);
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
			func_809();
			break;
		case -166765081:
		case 718630298:
		case 1341326366:
		case 1565429580:
			func_794(17);
			break;
		case -824728332:
			func_794(16);
			break;
	}
}

void func_783(int iParam0)
{
	if (iParam0 == 0)
	{
		return;
	}
	sVar0 = func_810(iParam0);
	if (is_string_null_or_empty(sVar0))
	{
		return;
	}
	sVar1 = func_811(iParam0);
	if (is_string_null_or_empty(sVar1))
	{
		return;
	}
	_play_sound_from_entity(sVar0, Global_1296859->f_8, sVar1, false, 0, 0);
}

int func_784(int iParam0)
{
	if (!_item_database_fillout_satchel_data(iParam0, &uVar0))
	{
		return -1;
	}
	return uVar0;
}

struct<5> func_785(int iParam0)
{
	Var0 = { func_786(iParam0, 1328661203, func_383(), -1591664384) };
	Var0.f_4 = 1084182731;
	return Var0;
}

struct<4> func_786(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, int iParam6)
{
	if (!func_83(iParam1, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(iParam0, &uParam2, iParam1, iParam6, &Var0);
	return Var0;
}

bool func_787(int iParam0)
{
	iVar0 = func_717(iParam0, 1);
	if (iVar0 >= 130 && iVar0 <= 149)
	{
		return true;
	}
	return false;
}

bool func_788(int iParam0)
{
	iVar0 = func_717(iParam0, 1);
	if (iVar0 >= 166 && iVar0 <= 166)
	{
		return true;
	}
	return false;
}

bool func_789(int iParam0)
{
	iVar0 = func_717(iParam0, 1);
	if (iVar0 >= 167 && iVar0 <= 171)
	{
		return true;
	}
	return false;
}

bool func_790(int iParam0)
{
	iVar0 = func_717(iParam0, 1);
	if (iVar0 >= 172 && iVar0 <= 179)
	{
		return true;
	}
	return false;
}

bool func_791(int iParam0)
{
	iVar0 = func_717(iParam0, 1);
	if (iVar0 >= 180 && iVar0 <= 182)
	{
		return true;
	}
	return false;
}

bool func_792(int iParam0)
{
	iVar0 = func_717(iParam0, 1);
	if (iVar0 >= 150 && iVar0 <= 165)
	{
		return true;
	}
	return false;
}

float func_793(int iParam0, int iParam1, float fParam2, char* sParam3)
{
	if (func_812(iParam0, iParam1, &Var0))
	{
		fVar22 = _network_try_access_tunable_float(iParam0, iParam1, Var0.f_10.f_1);
	}
	else
	{
		fVar22 = _network_try_access_tunable_float(iParam0, iParam1, fParam2);
	}
	return fVar22;
}

bool func_794(int iParam0)
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

bool func_795(int iParam0)
{
	iVar0 = func_796(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_796(int iParam0, int iParam1)
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

void func_797()
{
	if (Global_1146212->f_21645[3]->f_208)
	{
		bVar0 = true;
	}
	set_ped_config_flag(Global_1296859->f_8, 550, bVar0);
	if (Global_1146212->f_21645[4]->f_208)
	{
		if (!func_250((*Global_1298536)[&Global_1296859]->f_86, 1))
		{
			bVar1 = true;
		}
	}
	set_ped_config_flag(Global_1296859->f_8, 556, bVar1);
}

void func_798()
{
	bVar0 = false;
	if (Global_1146212->f_21645[12]->f_208)
	{
		bVar0 = true;
	}
	set_ped_config_flag(Global_1296859->f_8, 263, bVar0);
}

char* func_799(int iParam0)
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

int func_800(int iParam0)
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

void func_801(int iParam0)
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

void func_802()
{
	set_ped_config_flag(Global_1296859->f_8, 305, false);
	_0x801917e7d7bce418(Global_1296859->f_8);
}

int func_803(int iParam0)
{
	if (!func_776(iParam0))
	{
		return -1;
	}
	iVar0 = func_777(iParam0, 1);
	return &(Global_1146212->f_35859.f_9286[iVar0]);
}

bool func_804(int iParam0, int iParam1)
{
	if (!func_755(iParam0))
	{
		return false;
	}
	iVar0 = func_746(iParam0, 1);
	iVar2 = Global_1146212->f_35859.f_3116[iVar0]->f_4;
	if (func_757(*Global_1146212->f_35859.f_3116[iVar0]))
	{
		iVar3 = &Global_1146212->f_35859.f_9286[func_777(iVar2, 1)];
		Var4 = { func_805(iVar3) };
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
			if (!func_813() && !func_814())
			{
				return false;
			}
			return true;
		case -2010146101:
			if (!func_813())
			{
				return false;
			}
			return true;
		case -2139108927:
			iVar1 = func_754(iParam1);
			if (iVar1 == &Global_1296859)
			{
				return false;
			}
			return true;
		case -2129621195:
			iVar1 = func_754(iParam1);
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
			iVar1 = func_754(iParam1);
			if (!_network_is_player_index_valid(&(Global_1296859->f_154[iVar1])))
			{
				return false;
			}
			if (iVar1 != &Global_1296859 && !func_533(&(Global_1296859->f_154[iVar1])))
			{
				return false;
			}
			if (!func_524(512, iVar1))
			{
				return false;
			}
			return true;
		case -1503245593:
			if (!&Global_1956200->f_1716[8])
			{
				return false;
			}
			iVar1 = func_754(iParam1);
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

struct<31> func_805(int iParam0)
{
	iVar0 = func_746(iParam0, 1);
	return *Global_1146212->f_35859.f_3116[iVar0];
}

bool func_806(int iParam0, int iParam1, bool bParam2, char* sParam3)
{
	if (func_812(iParam0, iParam1, &Var0))
	{
		bVar22 = _network_try_access_tunable_bool(iParam0, iParam1, Var0.f_10.f_2);
	}
	else
	{
		bVar22 = _network_try_access_tunable_bool(iParam0, iParam1, bParam2);
	}
	return bVar22;
}

char* func_807(int iParam0, int iParam1)
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

void func_808(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_809()
{
	set_ped_config_flag(Global_1296859->f_8, 305, true);
	_0x05ce6af4df071d23(Global_1296859->f_8, 0.7f);
}

char* func_810(int iParam0)
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

char* func_811(int iParam0)
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

bool func_812(int iParam0, int iParam1, var uParam2)
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
		uParam2->f_10.f_3 = func_815(iVar7);
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

bool func_813()
{
	return Global_1572887->f_6;
}

bool func_814()
{
	if (!&Global_1048577)
	{
		return false;
	}
	if (!func_163(func_255(0)))
	{
		return false;
	}
	if (&Global_3145858 != -504335712)
	{
		return false;
	}
	if (func_644(Global_524288->f_40400))
	{
		return true;
	}
	return false;
}

int func_815(int iParam0)
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

