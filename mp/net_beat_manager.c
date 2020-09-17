void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	func_1();
	while (!func_2())
	{
		func_3();
		wait(0);
	}
	func_4();
	func_5();
}

void func_1()
{
	iVar0 = get_game_timer();
	func_6(32, -1);
	func_7();
	if (func_8())
	{
		func_5();
	}
	func_9();
	func_10(0);
	set_this_script_can_be_paused(false);
}

bool func_2()
{
	if (func_11(0, 0))
	{
		return true;
	}
	return false;
}

void func_3()
{
	if (!func_12())
	{
		return;
	}
	if ((func_13() || Global_1048585) // PointerArith)
	{
		return;
	}
	func_14();
	func_15();
	func_16();
	if (func_17())
	{
		func_18();
	}
	else
	{
		Global_1272030->f_3279 = 1;
		Global_1272030->f_3280 = 0;
	}
	func_19();
}

void func_4()
{
}

void func_5()
{
	terminate_this_thread();
}

void func_6(int iParam0, int iParam1)
{
	if (!network_is_game_in_progress())
	{
		func_5();
	}
	network_set_this_script_is_network_script(iParam0, false, iParam1);
}

int func_7()
{
	iVar0 = network_get_script_status();
	iVar1 = get_game_timer();
	iVar2 = network_get_timeout_time();
	if (iVar2 < 50000)
	{
		iVar2 = 50000;
	}
	while (iVar0 != 2)
	{
		if (get_game_timer() - iVar1) > (iVar2 - 5000)
		{
		}
		if ((get_game_timer() - iVar1) > 300000)
		{
			func_5();
		}
		if (_0x9e4ef615e307fbbe())
		{
			switch (_0x54ae4fdeefeab77e())
			{
				case 0:
					break;
				case 1:
					func_5();
					break;
				case 2:
					func_5();
					break;
				case 4:
					func_5();
					break;
				case 3:
					func_5();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_5();
		}
		if (!network_is_game_in_progress())
		{
			func_5();
		}
		if (!network_is_signed_online())
		{
			func_5();
		}
		if (func_20() == 0)
		{
			if (func_21())
			{
				func_5();
			}
		}
		wait(0);
		iVar0 = network_get_script_status();
	}
	if (!network_is_game_in_progress())
	{
		func_5();
	}
	return 1;
}

bool func_8()
{
	if (Global_1572887->f_9)
	{
		return false;
	}
	if (!network_is_game_in_progress())
	{
		return true;
	}
	if (!network_is_signed_online())
	{
		return true;
	}
	return false;
}

void func_9()
{
	func_22();
	network_register_host_broadcast_variables(Global_1266405, 2456, 46);
	if (!func_23(_0xba24095ea96dfe17(Global_1266405), 2456, "g_mpBeatManagerHostData"))
	{
	}
	func_24();
	func_25();
	network_register_player_broadcast_variables(Global_1268861, 3169, 47);
	if (!func_26(_0x690806bc83bc8ca2((*Global_1268861)[0]), 3169, "g_mpBeatManagerPlayerData"))
	{
	}
	if (!func_27())
	{
		func_28();
	}
}

void func_10(bool bParam0)
{
	iVar0 = (_get_system_time() + 180000);
	iVar9 = 0;
	Var1 = { Var1 };
	while (true)
	{
		iVar9++;
		if (bParam0)
		{
			_0x236905c700fdb54d();
		}
		if (_0x9e4ef615e307fbbe())
		{
			switch (_0x54ae4fdeefeab77e())
			{
				case 0:
					break;
				case 1:
					func_5();
					break;
				case 2:
					func_5();
					break;
				case 4:
					func_5();
					break;
				case 3:
					func_5();
					break;
				default:
					break;
			}
		}
		if (!network_is_game_in_progress())
		{
			return;
		}
		if (network_is_host_of_this_script())
		{
			StringCopy(&Var1, "HOST", 64);
		}
		else
		{
			StringCopy(&Var1, "CLIENT", 64);
		}
		if (_0x5d10b3795f3fc886())
		{
			return;
		}
		if (_get_system_time() >= iVar0)
		{
			func_5();
			return;
		}
		wait(0);
	}
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

bool func_12()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

bool func_13()
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
	if (!func_29(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

void func_14()
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_30(&(Global_1272030->f_3271[iVar0])))
		{
			if (func_31(&(Global_1272030->f_3271[iVar0])) >= func_32(iVar0))
			{
				func_33(Global_1272030->f_3271[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_15()
{
	_get_weather_type_transition(&uVar0, &uVar1, &fVar2);
	if (fVar2 < 0.5f)
	{
		iVar3 = uVar0;
	}
	else
	{
		iVar3 = uVar1;
	}
	if (func_34(iVar3))
	{
		iVar4 |= 1;
	}
	if (func_35(iVar3))
	{
		iVar4 |= 2;
	}
	if (func_36(iVar3))
	{
		iVar4 |= 4;
	}
	if (func_37(iVar3))
	{
		iVar4 |= 8;
	}
	if (func_38(iVar3))
	{
		iVar4 |= 16;
	}
	if (func_39(iVar3))
	{
		iVar4 |= 32;
	}
	if (func_40(iVar3))
	{
		iVar4 |= 64;
	}
	Global_1272030->f_3398 = iVar4;
}

void func_16()
{
	if (!func_41(0))
	{
		if (_unlock_is_unlocked(-1153255129))
		{
			func_42(0);
		}
	}
	else
	{
		if (!func_41(1))
		{
			if (_unlock_is_unlocked(1942525086))
			{
				func_42(1);
			}
		}
		if (!func_41(2))
		{
			if (_unlock_is_unlocked(282898204))
			{
				func_42(2);
			}
		}
	}
	bVar0 = true;
	Var1 = { func_43() };
	if (!func_29(Var1))
	{
		bVar0 = false;
	}
	else
	{
		iVar3 = func_44(Var1);
		switch (func_45(iVar3))
		{
			case 195932838:
				break;
			default:
				bVar0 = false;
				break;
		}
	}
	if (bVar0 != func_41(3))
	{
		if (bVar0)
		{
			func_42(3);
		}
		else
		{
			func_46(3);
		}
	}
	bVar4 = func_47();
	if (bVar4 != func_41(4))
	{
		if (bVar4)
		{
			func_42(4);
		}
		else
		{
			func_46(4);
		}
	}
	iVar5 = func_48();
	if (func_49(iVar5))
	{
		if (Global_1272030->f_3410 != iVar5 || !func_41(5))
		{
			if (func_50(iVar5, &(Global_1272030->f_3404), &(Global_1272030->f_3407)))
			{
				func_42(5);
				Global_1272030->f_3410 = iVar5;
			}
			else if (func_41(5))
			{
				func_46(5);
				Global_1272030->f_3410 = -1;
			}
		}
	}
	else if (func_41(5))
	{
		func_46(5);
		Global_1272030->f_3410 = -1;
	}
}

bool func_17()
{
	if (!is_thread_active(&(Global_1051252->f_16[16]), false))
	{
		return false;
	}
	if (!network_is_script_active("net_beat_manager", -1, true, 0))
	{
		return false;
	}
	return player_id() == _0xb4a25351d79b444c(&(Global_1051252->f_16[16]));
}

void func_18()
{
	switch (Global_1272030->f_3279)
	{
		case 0:
			func_51();
			break;
		case 1:
			func_52();
			break;
		case 2:
			func_53();
			break;
		case 3:
			func_54();
			break;
	}
}

void func_19()
{
	switch (Global_1272030->f_3269)
	{
		case 0:
			func_55();
			break;
		case 1:
			func_56();
			break;
		case 2:
			func_57();
			break;
		case 3:
			func_58();
			break;
	}
}

int func_20()
{
	return Global_1572887->f_13;
}

bool func_21()
{
	return Global_1051252->f_8;
}

void func_22()
{
	func_59();
	func_60();
}

bool func_23(var uParam0, int iParam1, char* sParam2)
{
	return true;
}

void func_24()
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_61(iVar0);
		iVar0++;
	}
}

void func_25()
{
	iVar0 = 1;
	while (iVar0 <= 34)
	{
		(*Global_1268861)[network_player_id_to_int()]->f_56[iVar0] = func_62(iVar0);
		iVar0++;
	}
}

bool func_26(var uParam0, int iParam1, char* sParam2)
{
	return true;
}

bool func_27()
{
	return !Global_1572887->f_9;
}

void func_28()
{
	func_63(Global_1272030);
	Global_1272030->f_3269 = 0;
	func_64();
}

bool func_29(struct<2> Param0)
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

bool func_30(int iParam0)
{
	return iParam0 != 0;
}

int func_31(int iParam0)
{
	return (Global_1296859->f_21 - iParam0) * 1000;
}

int func_32(int iParam0)
{
	return &(Global_1272030->f_3275[iParam0]);
}

void func_33(var uParam0)
{
	*uParam0 = 0;
}

bool func_34(int iParam0)
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

bool func_35(int iParam0)
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

bool func_36(int iParam0)
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

bool func_37(int iParam0)
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

bool func_38(int iParam0)
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

bool func_39(int iParam0)
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

bool func_40(int iParam0)
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

bool func_41(int iParam0)
{
	return is_bit_set(Global_1272030->f_3399, iParam0);
}

void func_42(int iParam0)
{
	set_bit(&(Global_1272030->f_3399), iParam0);
}

struct<2> func_43()
{
	if (Global_1196205->f_129 <= 0)
	{
		return func_67(0);
	}
	if (Global_1196205->f_130 < 0 || Global_1196205->f_131 == 0)
	{
		return func_67(0);
	}
	return (*Global_1196205)[Global_1196205->f_130]->f_1;
}

int func_44(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_68(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_45(int iParam0)
{
	if (func_69(&Var1, iParam0))
	{
		func_70(Var1, 1609846533, &uVar0, 1);
	}
	return uVar0;
}

void func_46(int iParam0)
{
	clear_bit(&(Global_1272030->f_3399), iParam0);
}

bool func_47()
{
	return (Global_1952637->f_1 != 24043185 && Global_1952637->f_1 != 2026485318);
}

int func_48()
{
	if (_0x3aeabae3f3c7600c() && _0xa2e2bea4e83f6270(-92244418) > 0)
	{
		_0xb5e2eda2135e0fa1(-92244418, 0, &iVar0);
	}
	else
	{
		return -1;
	}
	if (iVar0 == 0)
	{
		return -1;
	}
	iVar5 = func_71(iVar0);
	if (iVar5 < 0 || iVar5 >= 12)
	{
		return -1;
	}
	return (135 + iVar5);
}

bool func_49(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 180);
}

bool func_50(int iParam0, var uParam1, var uParam2)
{
	Var0 = Global_1071686->f_28448[48]->f_3;
	Var0.f_2 = -738708473;
	Var0.f_3 = func_72(iParam0);
	if (!_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		return false;
	}
	Var0.f_2 = -99852754;
	Var0.f_3 = get_hash_key("vPropPos");
	_datafile_get_vector(uParam1, &Var0);
	fVar5 = 0f;
	Var0.f_2 = 1059891245;
	Var0.f_3 = get_hash_key("fPropHead");
	_datafile_get_float(&fVar5, &Var0);
	uParam2->f_2 = fVar5;
	return true;
}

void func_51()
{
	if (Global_1272030->f_3269 > 0)
	{
		func_73(1);
	}
}

void func_52()
{
	if (func_74())
	{
		func_75();
		func_76();
		Global_1272030->f_3280 = 0;
		func_77();
		func_78(2, 0);
		func_73(2);
	}
}

void func_53()
{
	Var0.f_10 = 1106247680;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	if (!func_79(2))
	{
		func_80(0, Global_1272030->f_3280);
		func_81(2, 0);
	}
	if (!func_82())
	{
		return;
	}
	if (!func_83(&iVar31, &uVar32, &iVar33, &iVar34))
	{
		func_73(1);
		return;
	}
	func_84(&Var0, iVar31, iVar33, -1, 255);
	if (func_85(Var0.f_11, 1084227584, 70f))
	{
		func_73(1);
		return;
	}
	if (Var0.f_6 == 2)
	{
		uVar35 = func_86(iVar31);
		func_87(uVar35, iVar33, 32);
	}
	else if (Var0.f_6 == 1)
	{
		iVar36 = int_to_playerindex(iVar34);
		iVar37 = func_88(iVar31, iVar33, &Var0, iVar36);
		iVar38 = func_89(iVar31, iVar33, iVar37);
		if (!func_90(iVar31, iVar33, iVar37, iVar38, iVar36))
		{
		}
	}
	func_73(3);
}

void func_54()
{
	if (!func_30(Global_1266405->f_2452.f_3))
	{
		func_91(&(Global_1266405->f_2452.f_3));
		return;
	}
	if (func_31(Global_1266405->f_2452.f_3) >= Global_1901947->f_236.f_66)
	{
		func_33(&(Global_1266405->f_2452.f_3));
		func_73(1);
	}
}

void func_55()
{
	if (Global_1257541->f_8861 != 2)
	{
		return;
	}
	func_92();
	func_93(1);
}

void func_56()
{
	if (Global_1257541->f_8861 != 2)
	{
		return;
	}
	if (Global_1272030->f_3270 == 0)
	{
		Global_1272030->f_3270 = func_94();
	}
	func_95(1);
	func_93(2);
}

void func_57()
{
	if (func_30(Global_1266405->f_2452.f_3))
	{
		func_96(1, 0);
		func_93(3);
		return;
	}
	if (func_41(3))
	{
		func_95(1);
		func_96(1, 1);
		return;
	}
	if (func_97(&bVar0))
	{
		if (!bVar0)
		{
			func_98(1, 0);
		}
		else
		{
			func_96(1, 0);
		}
	}
}

void func_58()
{
	if (!func_30(Global_1266405->f_2452.f_3))
	{
		func_93(1);
		if (!network_is_host_of_this_script())
		{
			func_73(1);
		}
	}
	else
	{
		func_73(3);
	}
}

void func_59()
{
	vVar0.f_2 = -15;
	iVar3 = 0;
	while (iVar3 <= 816)
	{
		*(*Global_1266405)[iVar3] = { vVar0 };
		iVar3++;
	}
}

void func_60()
{
	Global_1266405->f_2452 = { Var0 };
}

void func_61(int iParam0)
{
	Var0 = 27;
	Var0.f_28 = 27;
	Var0.f_56 = 35;
	Var0.f_92 = -1;
	Var0.f_95 = 3;
	*(*Global_1268861)[iParam0] = { Var0 };
}

int func_62(int iParam0)
{
	Var0 = { func_99(iParam0, 1346578557) };
	if (!stat_id_get_int(&Var0, &uVar2))
	{
		return -1;
	}
	return uVar2;
}

void func_63(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 817)
	{
		_copy_memory((*uParam0)[iVar0], &uVar1, 4);
		iVar0++;
	}
	uParam0->f_3269 = 0;
	uParam0->f_3270 = 0;
	uParam0->f_3279 = 0;
	uParam0->f_3280 = 0;
	uParam0->f_3347 = 0;
	uParam0->f_3393 = 0;
	uParam0->f_3394 = 0;
	uParam0->f_3395 = 0;
	uParam0->f_3396 = -1;
	uParam0->f_3397 = 0f;
	uParam0->f_3398 = 0;
	uParam0->f_3399 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		uParam0->f_3281[iVar0] = 0;
		uParam0->f_3314[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_3271[iVar0] = 0;
		uParam0->f_3275[iVar0] = 0;
		uParam0->f_3400[iVar0] = 0;
		iVar0++;
	}
	uVar5 = 44;
	_copy_memory(&(uParam0->f_3348), &uVar5, 45);
}

void func_64()
{
	iVar4 = 0;
	while (iVar4 <= 816)
	{
		*(*Global_1272030)[iVar4] = { Var0 };
		iVar4++;
	}
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

struct<2> func_67(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

bool func_68(struct<2> Param0, var uParam2)
{
	if (!func_29(Param0))
	{
		return false;
	}
	func_100(uParam2);
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

bool func_69(var uParam0, int iParam1)
{
	*uParam0 = Global_1257541->f_8863;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (_0x603ac35fd4602c76(*uParam0) && _datafile_get_data_node_index(&(uParam0->f_1), uParam0));
}

int func_70(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	uVar0 = *iParam6;
	if (_datafile_get_hash(&uVar0, &vParam0))
	{
		*iParam6 = uVar0;
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_71(int iParam0)
{
	switch (iParam0)
	{
		case 1056359525:
			return 0;
		case 89248012:
			return 1;
		case -100681112:
			return 2;
		case -1087814448:
			return 3;
		case -1265422428:
			return 4;
		case 2053061437:
			return 5;
		case -804198753:
			return 6;
		case 97833510:
			return 7;
		case -74793582:
			return 8;
		case -1585936017:
			return 9;
		case 792472748:
			return 10;
		case 140861179:
			return 11;
		default:
			break;
	}
	return 0;
}

int func_72(int iParam0)
{
	switch (iParam0)
	{
		case 132:
			return -809040070;
		case 6:
			return 443958153;
		case 7:
			return 1035357148;
		case 8:
			return -990591911;
		case 19:
			return 1434435999;
		case 13:
			return 914613127;
		case 14:
			return 277114628;
		case 15:
			return -441298053;
		case 12:
			return -2008988392;
		case 122:
			return 1866591384;
		case 123:
			return -810797676;
		case 5:
			return 1591504033;
		case 9:
			return -1481022983;
		case 10:
			return -200160067;
		case 11:
			return -906556724;
		case 16:
			return 882729775;
		case 17:
			return 1957450109;
		case 18:
			return 1826386989;
		case 23:
			return 213861089;
		case 24:
			return 187124199;
		case 25:
			return -1639286351;
		case 22:
			return 1244472740;
		case 26:
			return -184950877;
		case 45:
			return -922179383;
		case 48:
			return 877339314;
		case 46:
			return 327042733;
		case 49:
			return -1159824322;
		case 42:
			return 187784199;
		case 43:
			return 156869848;
		case 44:
			return 959980967;
		case 50:
			return -605457855;
		case 51:
			return -967272484;
		case 52:
			return 253446434;
		case 53:
			return -24930371;
		case 63:
			return -491616406;
		case 56:
			return 1428271505;
		case 57:
			return -404449802;
		case 60:
			return -2132681852;
		case 124:
			return 1479356600;
		case 125:
			return -1608228131;
		case 54:
			return 1700741106;
		case 55:
			return 509242725;
		case 59:
			return -1243693278;
		case 58:
			return 106026254;
		case 61:
			return -1340467914;
		case 62:
			return -2128099513;
		case 27:
			return -768596287;
		case 28:
			return -1789795772;
		case 33:
			return 986912071;
		case 31:
			return 312948291;
		case 34:
			return 770563571;
		case 35:
			return 288839560;
		case 30:
			return 399352507;
		case 39:
			return -1241147617;
		case 126:
			return 1576805996;
		case 29:
			return -1427623397;
		case 36:
			return 305555540;
		case 37:
			return -697751457;
		case 38:
			return -994915577;
		case 68:
			return 2080716288;
		case 69:
			return 922959422;
		case 70:
			return 1948709075;
		case 71:
			return 599204508;
		case 74:
			return -362796541;
		case 127:
			return -176953214;
		case 75:
			return -1992095599;
		case 72:
			return -553046416;
		case 73:
			return 1410537143;
		case 83:
			return 646741747;
		case 84:
			return -773037432;
		case 85:
			return 1444751354;
		case 78:
			return 709943351;
		case 87:
			return 731746260;
		case 86:
			return 405856312;
		case 82:
			return -1749578899;
		case 88:
			return 1581089825;
		case 81:
			return 1124822890;
		case 91:
			return 1618521465;
		case 90:
			return -442258411;
		case 120:
			return 1665083003;
		case 121:
			return 810431028;
		case 77:
			return 1161446575;
		case 79:
			return -406930559;
		case 80:
			return -1850308061;
		case 89:
			return 787686374;
		case 41:
			return 1523596125;
		case 98:
			return -372049939;
		case 97:
			return 226213668;
		case 93:
			return 1437804895;
		case 96:
			return -1254552445;
		case 94:
			return 1526480524;
		case 95:
			return 470861506;
		case 128:
			return 644508980;
		case 129:
			return -1985767496;
		case 0:
			return 1117878254;
		case 1:
			return 622553269;
		case 2:
			return -1934358691;
		case 101:
			return 94750187;
		case 99:
			return 545745902;
		case 100:
			return 1875117241;
		case 119:
			return -1861588330;
		case 133:
			return -1079912632;
		case 152:
			return -1624899219;
		case 176:
			return 1712034773;
		case 177:
			return 1084233913;
		case 178:
			return -1628307596;
		case 153:
			return 1109728466;
		case 154:
			return 151142181;
		case 147:
			return 191185611;
		case 135:
			return 1689047337;
		case 136:
			return 631237697;
		case 137:
			return 1309294228;
		case 138:
			return -1862366064;
		case 139:
			return -708893514;
		case 140:
			return -61253253;
		case 141:
			return -1674694281;
		case 142:
			return 14391281;
		case 143:
			return -869603674;
		case 144:
			return 2081857521;
		case 145:
			return 526646992;
		case 146:
			return 1672297313;
		case 47:
			return 1025033373;
		case 32:
			return 1025033373;
		case 21:
			return 1025033373;
		case 115:
			return 1025033373;
		case 92:
			return 1025033373;
		case 131:
			return 1025033373;
		case 20:
			return 1025033373;
		case 134:
			return -765151559;
		case 179:
			return 1244193358;
		case 155:
			return -268420964;
		case 156:
			return -283845926;
		case 157:
			return 76731659;
		case 158:
			return 2141489518;
		case 67:
			return 1529797091;
		case 159:
			return 1120323763;
		case 160:
			return -1951530479;
		case 161:
			return 2034257465;
		case 162:
			return 278587369;
		case 65:
			return 1388932648;
		case 164:
			return 1467401843;
		case 165:
			return -1049737591;
		case 166:
			return 1175719437;
		case 167:
			return 2115547696;
		case 64:
			return 878376253;
		case 168:
			return -508879537;
		case 169:
			return -654369397;
		case 170:
			return 1573058547;
		case 171:
			return 1753151614;
		case 172:
			return -2113647360;
		case 173:
			return 1337275619;
		case 174:
			return -237650722;
		case 175:
			return 283754781;
		case 66:
			return -2076086367;
		case 163:
			return -487054121;
		case 108:
			return -1769964380;
		case 110:
			return -1464928880;
		case 109:
			return -812483303;
		case 111:
			return 1315212395;
		case 112:
			return 450843655;
		case 113:
			return -1477315484;
		case 114:
			return -1132316597;
		case 102:
			return -1495157302;
		case 105:
			return -2140031237;
		case 106:
			return -375350;
		case 103:
			return -1829807698;
		case 104:
			return 186603357;
		case 107:
			return -1575817877;
		case 116:
			return 1087483310;
		case 130:
			return -552506176;
		case 117:
			return 441769767;
		case 118:
			return 1318049946;
		case 3:
			return 548657065;
		case 4:
			return 243086140;
		case 40:
			return -305029900;
		case 76:
			return 1008537949;
		case 148:
			return 1239556700;
		case 149:
			return 1968750441;
		case 150:
			return 317019665;
		case 151:
			return 1421441577;
		default:
			break;
	}
	return 0;
}

void func_73(int iParam0)
{
	if (Global_1272030->f_3279 != iParam0)
	{
		Global_1272030->f_3279 = iParam0;
	}
}

bool func_74()
{
	return func_101(1);
}

void func_75()
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (&Global_1272030->f_3281[iVar0] != -1)
		{
			Global_1272030->f_3281[iVar0] = -1;
			Global_1272030->f_3314[iVar0] = 0f;
		}
		iVar0++;
	}
}

void func_76()
{
	iVar0 = 0;
	while (iVar0 <= (Global_1272030->f_3270 - 1))
	{
		if ((*Global_1266405)[iVar0]->f_1 != 0)
		{
			(*Global_1266405)[iVar0]->f_1 = 0;
		}
		iVar0++;
	}
}

void func_77()
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (network_is_player_active(int_to_playerindex(iVar0)))
		{
			iVar1 = (*Global_1268861)[iVar0]->f_92;
			if (!func_102(iVar1))
			{
				Global_1272030->f_3281[iVar2] = iVar1;
				Global_1272030->f_3314[iVar2] = (*Global_1268861)[iVar0]->f_93;
				iVar2++;
			}
		}
		iVar0++;
	}
}

void func_78(int iParam0, bool bParam1)
{
	if (func_79(iParam0))
	{
		if (bParam1)
		{
		}
		func_103(&(Global_1266405->f_2452.f_1), iParam0);
	}
}

bool func_79(int iParam0)
{
	return func_104(Global_1266405->f_2452.f_1, iParam0);
}

void func_80(bool bParam0, int iParam1)
{
	if (bParam0 && !network_is_player_active(int_to_playerindex(iParam1)))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (&Global_1272030->f_3281[iVar1] == -1)
		{
		}
		else
		{
			iVar2 = &Global_1272030->f_3281[iVar1];
			if (iVar2 >= 0)
			{
				if (bParam0)
				{
					func_105(&iVar0, iVar2, iParam1);
				}
				else
				{
					func_106(&iVar0, iVar2);
				}
				if (iVar0 != 0)
				{
					Global_1272030->f_3281[iVar1] = -2;
				}
			}
			iVar1++;
		}
	}
}

void func_81(int iParam0, bool bParam1)
{
	if (!func_79(iParam0))
	{
		if (bParam1)
		{
		}
		func_107(&(Global_1266405->f_2452.f_1), iParam0);
	}
}

bool func_82()
{
	while (iVar0 < 1)
	{
		func_80(1, Global_1272030->f_3280);
		iVar0++;
		Global_1272030->f_3280++;
		if (Global_1272030->f_3280 >= 32)
		{
		}
	else
	{
		}
	}
	if (Global_1272030->f_3280 < 32)
	{
		return false;
	}
	else
	{
		Global_1272030->f_3280 = 0;
	}
	return true;
}

bool func_83(var uParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam2 = -1;
	*uParam1 = -1;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (&Global_1272030->f_3281[iVar1] >= 0)
		{
			if (&Global_1272030->f_3314[iVar1] > fVar0)
			{
				*uParam1 = &Global_1272030->f_3281[iVar1];
				fVar0 = &Global_1272030->f_3314[iVar1];
				*uParam3 = iVar1;
			}
		}
		else if (&Global_1272030->f_3281[iVar1] == -1)
		{
		}
		else
		{
			iVar1++;
		}
	}
	if (*uParam1 >= 0 && *uParam1 < Global_1272030->f_3270)
	{
		func_108(*uParam1, uParam0, uParam2);
		if (*uParam0 != 0)
		{
			return true;
		}
	}
	return false;
}

void func_84(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Var0.f_10 = 1106247680;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	_copy_memory(uParam0, &Var0, 31);
	iVar31 = 0;
	while (iVar31 < 2)
	{
		uParam0->f_28[iVar31] = 0;
		iVar31++;
	}
	if (iParam4 == 255)
	{
		iParam4 = player_id();
	}
	switch (iParam1)
	{
		case 0:
			*uParam0 = 0;
			uParam0->f_1 = 0;
			uParam0->f_2 = 0;
			break;
		case 1:
			func_109(uParam0, iParam2);
			break;
		case 2:
			func_110(uParam0, iParam2);
			break;
		case 3:
			func_111(uParam0, iParam2);
			break;
		case 4:
			func_112(uParam0, iParam2);
			break;
		case 12:
			func_113(uParam0, iParam2);
			break;
		case 6:
			func_114(uParam0, iParam2, -1);
			break;
		case 7:
			func_115(uParam0, iParam2, iParam3);
			break;
		case 5:
			func_116(uParam0, iParam2);
			break;
		case 11:
			func_117(uParam0, iParam2);
			break;
		case 9:
			func_118(uParam0, iParam2, iParam3);
			break;
		case 10:
			func_119(uParam0, iParam2);
			break;
		case 8:
			func_120(uParam0, iParam2);
			break;
		case 13:
			func_121(uParam0, iParam2, iParam4);
			break;
		case 14:
			func_122(uParam0, iParam2, iParam3);
			break;
		case 15:
			func_123(uParam0, iParam2);
			break;
		case 16:
			func_124(uParam0, iParam2, iParam3);
			break;
		case 31:
			func_125(uParam0, iParam2);
			break;
		case 21:
			func_126(uParam0, iParam2);
			break;
		case 28:
			func_127(uParam0, iParam2);
			break;
		case 25:
			func_128(uParam0, iParam2);
			break;
		case 24:
			func_129(uParam0, iParam2);
			break;
		case 22:
			func_130(uParam0, iParam2);
			break;
		case 23:
			func_131(uParam0, iParam2);
			break;
		case 29:
			func_132(uParam0, iParam2);
			break;
		case 26:
			func_133(uParam0, iParam2);
			break;
		case 30:
			func_134(uParam0, iParam2);
			break;
		case 27:
			func_135(uParam0, iParam2);
			break;
		case 32:
			func_136(uParam0, iParam2, iParam3);
			break;
		case 33:
			func_137(uParam0, iParam2, iParam3);
			break;
		case 34:
			func_138(uParam0, iParam2);
			break;
		case 17:
			func_139(uParam0, iParam2);
			break;
		case 18:
			func_140(uParam0, iParam2);
			break;
		case 19:
			func_141(uParam0, iParam2);
			break;
		case 20:
			func_142(uParam0, iParam2);
			break;
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			func_143(uParam0, iParam1, iParam2);
			break;
		default:
			break;
	}
}

bool func_85(vector3 vParam0, float fParam3, float fParam4)
{
	if (get_distance_between_coords(func_144(player_id()), vParam0, true) <= (fParam4 + fParam3))
	{
		bVar0 = is_sphere_visible(vParam0, fParam3);
	}
	if (!bVar0)
	{
		bVar0 = is_sphere_visible_to_another_machine(vParam0, fParam3, (fParam4 + fParam3));
	}
	return bVar0;
}

int func_86(int iParam0)
{
	return &(Global_1272030->f_3348[iParam0]);
}

void func_87(var uParam0, int iParam1, int iParam2)
{
	Var0.f_5 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_14.f_1 = -1;
	Var0.f_21 = 6;
	func_145(&Var0, uParam0, iParam1, iParam2, -1);
	func_146(&Var0);
}

int func_88(int iParam0, int iParam1, var uParam2, int iParam3)
{
	if (func_147(uParam2, 16))
	{
		return func_148(iParam0, uParam2, iParam3);
	}
	return func_149(iParam0, iParam1, uParam2);
}

int func_89(int iParam0, int iParam1, int iParam2)
{
	Var0.f_10 = 1106247680;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	func_84(&Var0, iParam0, iParam1, iParam2, 255);
	return func_150(Var0.f_4, Var0.f_2, 1, 0);
}

bool func_90(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = 255;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_8 = 2;
	Var0.f_8.f_1 = -1;
	Var0.f_8.f_5 = -1;
	Var0.f_8.f_5.f_1 = -1;
	Var0.f_8.f_5.f_3 = -1;
	Var0.f_8.f_5.f_4 = -1;
	Var0.f_8.f_5.f_5 = -1;
	Var0.f_8.f_5.f_6 = -1;
	Var0.f_8.f_5.f_6.f_1 = -1;
	Var0.f_8.f_5.f_9 = 2;
	Var0.f_23.f_1 = 1024;
	Var0.f_23.f_4 = -15;
	Var0.f_23.f_5 = 255;
	Var0.f_23.f_8 = 1;
	Var0.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_23.f_13 = -1;
	Var40.f_10 = 1106247680;
	Var40.f_15 = 4;
	Var40.f_20 = 4;
	Var40.f_26 = -1;
	Var40.f_28 = 2;
	func_84(&Var40, iParam0, iParam1, -1, 255);
	func_151(&(Var0.f_8.f_5), Var40.f_5);
	Var0.f_2 = 7;
	Var0.f_5 = 0;
	Var0.f_8.f_1 = 2;
	Var0.f_8 = 2;
	Var0.f_8.f_2 = { Var40.f_11 };
	Var0.f_23 = func_152(iParam0);
	Var0.f_23.f_1 = func_153(iParam0);
	Var0.f_23.f_5 = iParam4;
	Var0.f_23.f_14 = iParam1;
	Var0.f_23.f_15 = iParam2;
	Var0.f_23.f_16 = iParam3;
	Var0.f_23.f_7 = 1;
	Var0.f_23.f_8[0]->f_3 = floor(Global_1901947->f_236.f_62);
	Var0.f_23.f_2 = floor(Global_1901947->f_236.f_63);
	Var0.f_23.f_8[0] = func_154(Var40.f_11);
	Var0.f_23.f_6 = 7601;
	if (func_155((*Global_1201051)[&Global_1296859]))
	{
		return false;
	}
	if (!func_156((*Global_1201051)[&Global_1296859], &Var0, 0, 0, 0, 0, 0))
	{
		return false;
	}
	func_157(&Var0);
	return true;
}

void func_91(var uParam0)
{
	*uParam0 = Global_1296859->f_21;
}

void func_92()
{
	Var1.f_10 = 1106247680;
	Var1.f_15 = 4;
	Var1.f_20 = 4;
	Var1.f_26 = -1;
	Var1.f_28 = 2;
	iVar32 = 0;
	while (iVar32 <= 43)
	{
		func_84(&Var1, iVar32, -1, -1, 255);
		if (Var1.f_6 == 2)
		{
			func_158(Var1.f_8);
			iVar0 = func_158(Var1.f_8);
			Global_1272030->f_3348[iVar32] = iVar0;
		}
		iVar32++;
	}
}

void func_93(int iParam0)
{
	if (Global_1272030->f_3269 != iParam0)
	{
		Global_1272030->f_3269 = iParam0;
	}
}

int func_94()
{
	Var0.f_10 = 1106247680;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	iVar33 = 1;
	while (iVar33 <= 43)
	{
		iVar31 = iVar33;
		func_84(&Var0, iVar31, -1, -1, 255);
		iVar32 = (iVar32 + Var0);
		iVar33++;
	}
	return iVar32;
}

void func_95(bool bParam0)
{
	Global_1272030->f_3395 = 0;
	Global_1272030->f_3394 = 0;
	Global_1272030->f_3393 = 1;
	Global_1272030->f_3396 = -1;
	Global_1272030->f_3397 = 0f;
	if (bParam0)
	{
		(*Global_1268861)[network_player_id_to_int()]->f_92 = -1;
		(*Global_1268861)[network_player_id_to_int()]->f_93 = 0f;
	}
}

void func_96(int iParam0, bool bParam1)
{
	if (func_159(iParam0, 255))
	{
		if (bParam1)
		{
		}
		func_103(&((*Global_1268861)[network_player_id_to_int()]->f_94), iParam0);
	}
}

bool func_97(var uParam0)
{
	Var1.f_10 = 1106247680;
	Var1.f_15 = 4;
	Var1.f_20 = 4;
	Var1.f_26 = -1;
	Var1.f_28 = 2;
	while (iVar0 < 3)
	{
		func_84(&Var1, Global_1272030->f_3393, Global_1272030->f_3394, -1, 255);
		if (Var1 <= 0)
		{
			func_160(&bVar32);
		}
		else
		{
			func_161(Global_1272030->f_3393, Global_1272030->f_3394, Global_1272030->f_3395, &Var1);
			iVar0++;
			Global_1272030->f_3394++;
			Global_1272030->f_3395++;
			if (Global_1272030->f_3395 == 816)
			{
				bVar32 = true;
			}
			else
			{
				if (Var1 == Global_1272030->f_3394)
				{
					func_160(&bVar32);
				}
			}
		}
	}
	if (!bVar32)
	{
		return false;
	}
	if (Global_1272030->f_3396 != -1)
	{
		(*Global_1268861)[network_player_id_to_int()]->f_92 = Global_1272030->f_3396;
		(*Global_1268861)[network_player_id_to_int()]->f_93 = Global_1272030->f_3397;
	}
	else
	{
		(*Global_1268861)[network_player_id_to_int()]->f_92 = -1;
		(*Global_1268861)[network_player_id_to_int()]->f_93 = 0f;
		*uParam0 = 1;
	}
	func_95(0);
	return true;
}

void func_98(int iParam0, bool bParam1)
{
	if (!func_159(iParam0, 255))
	{
		if (bParam1)
		{
		}
		func_107(&((*Global_1268861)[network_player_id_to_int()]->f_94), iParam0);
	}
}

struct<2> func_99(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return Var2;
	}
	iVar4 = func_162(iParam0);
	if (iVar4 == 0)
	{
		return Var2;
	}
	Var0 = { func_163(iParam1, iVar4) };
	if (!_stat_id_is_valid(&Var0))
	{
		return Var2;
	}
	return Var0;
}

void func_100(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

int func_101(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (network_is_player_active(int_to_playerindex(iVar0)) && func_159(iParam0, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_102(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (&Global_1272030->f_3281[iVar0] == iParam0)
		{
			return true;
		}
		else if (&Global_1272030->f_3281[iVar0] == -1)
		{
			return false;
		}
		iVar0++;
	}
	return false;
}

void func_103(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_104(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_105(var uParam0, int iParam1, int iParam2)
{
	func_164(uParam0, iParam1, iParam2);
	func_165(uParam0, iParam1, iParam2);
}

void func_106(var uParam0, int iParam1)
{
	func_166(uParam0, iParam1);
}

void func_107(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_108(int iParam0, var uParam1, var uParam2)
{
	Var2.f_10 = 1106247680;
	Var2.f_15 = 4;
	Var2.f_20 = 4;
	Var2.f_26 = -1;
	Var2.f_28 = 2;
	iVar1 = 1;
	while (iVar1 <= 43)
	{
		*uParam1 = iVar1;
		func_84(&Var2, *uParam1, -1, -1, 255);
		iVar0 = (iVar0 + Var2);
		if (iVar0 >= iParam0)
		{
			iVar0 = (iVar0 - Var2);
			*uParam2 = 0;
			while (*uParam2 <= (Var2 - 1))
			{
				if (iVar0 == iParam0)
				{
					return 1;
				}
				iVar0++;
				*uParam2++;
			}
		}
		iVar1++;
	}
	return 0;
}

void func_109(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 4;
	uParam0->f_2 = 7;
	func_167(uParam0, iParam1);
	switch (iParam1)
	{
		case 0:
			uParam0->f_5 = -1808627090;
			uParam0->f_11 = { 2150.374f, 1728.215f, 125.2313f };
			break;
		case 1:
			uParam0->f_5 = -1563711584;
			uParam0->f_11 = { 2179.106f, -25.3714f, 51.3658f };
			break;
		case 2:
			uParam0->f_5 = -717510681;
			uParam0->f_11 = { -1055.963f, -794.308f, 59.2567f };
			break;
		case 3:
			uParam0->f_5 = -2044065371;
			uParam0->f_11 = { -1158.078f, -155.114f, 88.889f };
			break;
		case 4:
			uParam0->f_5 = -1209537248;
			uParam0->f_11 = { -1370.712f, -515.7384f, 125.267f };
			break;
		case 5:
			uParam0->f_5 = 1714342319;
			uParam0->f_11 = { -1029.465f, -492.4087f, 101.0615f };
			break;
		case 6:
			uParam0->f_5 = 1269971654;
			uParam0->f_11 = { -319.5499f, 203.8464f, 62.1121f };
			break;
		case 7:
			uParam0->f_5 = 720927063;
			uParam0->f_11 = { -513.8f, 345.2f, 49.8945f };
			break;
		case 8:
			uParam0->f_5 = 1499128142;
			uParam0->f_11 = { -1234.665f, -1371.778f, 80.796f };
			break;
		case 9:
			uParam0->f_5 = -1539691586;
			uParam0->f_11 = { -1525.164f, 1722.86f, 239.152f };
			break;
	}
}

void func_110(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 20;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	func_168(uParam0);
	switch (iParam1)
	{
		case 0:
			func_169(uParam0);
			uParam0->f_5 = 277430601;
			uParam0->f_11 = { -1925.343f, -2119.336f, 52.16934f };
			break;
		case 1:
			func_169(uParam0);
			uParam0->f_5 = 1659133778;
			uParam0->f_11 = { 136.298f, 35.34337f, 101.2795f };
			break;
		case 2:
			func_169(uParam0);
			uParam0->f_5 = 1296650927;
			uParam0->f_11 = { -910.7408f, 860.8453f, 134.6651f };
			break;
		case 3:
			func_169(uParam0);
			uParam0->f_5 = 2115437634;
			uParam0->f_11 = { 2788.779f, 1077.284f, 57.99089f };
			break;
		case 4:
			func_169(uParam0);
			uParam0->f_5 = 1098622970;
			uParam0->f_11 = { 1751.914f, -1117.739f, 40.70011f };
			break;
		case 5:
			func_169(uParam0);
			uParam0->f_5 = 393263596;
			uParam0->f_11 = { 1290.432f, -836.7289f, 77.47561f };
			break;
		case 6:
			func_169(uParam0);
			uParam0->f_5 = 189453630;
			uParam0->f_11 = { 308.1141f, 1187.807f, 180.1746f };
			break;
		case 7:
			func_169(uParam0);
			uParam0->f_5 = -98921343;
			uParam0->f_11 = { -1779.538f, -235.3894f, 181.2029f };
			break;
		case 8:
			func_169(uParam0);
			uParam0->f_5 = 6025033;
			uParam0->f_11 = { -1290.399f, -1179.199f, 72.33453f };
			break;
		case 9:
			func_169(uParam0);
			uParam0->f_5 = -1060299979;
			uParam0->f_11 = { -2306.89f, -1546.208f, 152.0187f };
			break;
		case 10:
			func_169(uParam0);
			uParam0->f_5 = 682088681;
			uParam0->f_11 = { -2724.458f, -2521.524f, 64.76124f };
			break;
		case 11:
			func_169(uParam0);
			uParam0->f_5 = 1705841922;
			uParam0->f_11 = { -4461.883f, -3271.474f, 14.54459f };
			break;
		case 12:
			func_169(uParam0);
			uParam0->f_5 = -301205165;
			uParam0->f_11 = { -4631.054f, -2738.483f, -12.13559f };
			break;
		case 13:
			func_169(uParam0);
			uParam0->f_5 = 1906160715;
			uParam0->f_11 = { -5678.259f, -3182.939f, -22.66476f };
			break;
		case 14:
			func_169(uParam0);
			uParam0->f_5 = -1129906020;
			uParam0->f_11 = { -1688.868f, -2272.091f, 44.12061f };
			break;
		case 15:
			func_169(uParam0);
			uParam0->f_5 = 1592980994;
			uParam0->f_11 = { -1621.917f, 1628.208f, 235.9645f };
			break;
		case 16:
			func_169(uParam0);
			uParam0->f_5 = 686459378;
			uParam0->f_11 = { 420.3633f, 2020.91f, 230.4423f };
			break;
		case 17:
			func_169(uParam0);
			uParam0->f_5 = -259262381;
			uParam0->f_11 = { -517.4607f, 510.5349f, 102.2307f };
			break;
		case 18:
			func_169(uParam0);
			uParam0->f_5 = 1289806844;
			uParam0->f_11 = { 1775.601f, 546.3866f, 106.6334f };
			break;
		case 19:
			func_169(uParam0);
			uParam0->f_5 = 347656238;
			uParam0->f_11 = { 1612.415f, -1715.397f, 52.91364f };
			break;
	}
}

void func_111(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 21;
	uParam0->f_1 = 8;
	uParam0->f_2 = 1;
	func_168(uParam0);
	switch (iParam1)
	{
		case 0:
			func_170(uParam0, 2);
			func_170(uParam0, 3);
			func_170(uParam0, 5);
			uParam0->f_5 = 1454566440;
			uParam0->f_11 = { 2252.035f, 1342.706f, 84.5573f };
			break;
		case 1:
			func_170(uParam0, 2);
			func_170(uParam0, 3);
			func_170(uParam0, 5);
			uParam0->f_5 = 1141360338;
			uParam0->f_11 = { 2280.7f, 1608.79f, 84.32f };
			break;
		case 2:
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			func_170(uParam0, 2);
			func_170(uParam0, 3);
			func_170(uParam0, 5);
			uParam0->f_5 = 844768119;
			uParam0->f_11 = { 2438.612f, 960.3168f, 73.0963f };
			break;
		case 3:
			func_170(uParam0, 0);
			func_170(uParam0, 2);
			func_170(uParam0, 3);
			func_170(uParam0, 4);
			func_170(uParam0, 5);
			func_170(uParam0, 7);
			uParam0->f_5 = -1601993562;
			uParam0->f_11 = { 1130.541f, 575.7938f, 86.66257f };
			break;
		case 4:
			func_170(uParam0, 0);
			func_170(uParam0, 2);
			func_170(uParam0, 3);
			func_170(uParam0, 5);
			func_170(uParam0, 7);
			uParam0->f_5 = -901588956;
			uParam0->f_11 = { -754.3893f, -399.1133f, 40.84306f };
			break;
		case 5:
			func_170(uParam0, 0);
			func_170(uParam0, 2);
			func_170(uParam0, 3);
			func_170(uParam0, 5);
			func_170(uParam0, 7);
			uParam0->f_5 = 2129019244;
			uParam0->f_11 = { -410.6756f, -63.938f, 40.7762f };
			break;
		case 6:
			func_170(uParam0, 0);
			func_170(uParam0, 2);
			func_170(uParam0, 4);
			func_170(uParam0, 5);
			func_170(uParam0, 6);
			uParam0->f_5 = 1227099802;
			uParam0->f_11 = { -2085.777f, -161.9067f, 208.0633f };
			break;
		case 7:
			func_170(uParam0, 0);
			func_170(uParam0, 2);
			func_170(uParam0, 4);
			func_170(uParam0, 5);
			func_170(uParam0, 6);
			uParam0->f_5 = -940471213;
			uParam0->f_11 = { -1678.304f, -517.8369f, 140.867f };
			break;
		case 8:
			func_170(uParam0, 0);
			func_170(uParam0, 2);
			func_170(uParam0, 4);
			func_170(uParam0, 5);
			func_170(uParam0, 6);
			uParam0->f_5 = -700569364;
			uParam0->f_11 = { -2624.881f, -339.7662f, 141.8102f };
			break;
		case 9:
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			uParam0->f_5 = 412376369;
			uParam0->f_11 = { -926.5729f, -924.4639f, 41.1771f };
			break;
		case 10:
			func_170(uParam0, 0);
			func_170(uParam0, 2);
			func_170(uParam0, 5);
			func_170(uParam0, 7);
			uParam0->f_5 = -364052317;
			uParam0->f_11 = { -722.9517f, -1718.81f, 41.41f };
			break;
		case 11:
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			uParam0->f_5 = -989186530;
			uParam0->f_11 = { -1069.18f, -1919.616f, 42.3447f };
			break;
		case 12:
			func_170(uParam0, 0);
			func_170(uParam0, 2);
			func_170(uParam0, 3);
			func_170(uParam0, 4);
			func_170(uParam0, 5);
			func_170(uParam0, 6);
			uParam0->f_5 = 333858683;
			uParam0->f_11 = { 1673.672f, 1440.046f, 146.0849f };
			break;
		case 13:
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			uParam0->f_5 = -39511303;
			uParam0->f_11 = { 1562.434f, 1445.237f, 145.2842f };
			break;
		case 14:
			func_170(uParam0, 3);
			func_170(uParam0, 4);
			func_170(uParam0, 5);
			func_170(uParam0, 6);
			uParam0->f_5 = 813662381;
			uParam0->f_11 = { 1244.927f, 1177.251f, 148.8856f };
			break;
		case 15:
			func_170(uParam0, 2);
			func_170(uParam0, 3);
			func_170(uParam0, 5);
			func_170(uParam0, 7);
			uParam0->f_5 = -1114006686;
			uParam0->f_11 = { 1926.703f, -362.3477f, 42.4864f };
			break;
		case 16:
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			func_170(uParam0, 3);
			func_170(uParam0, 5);
			func_170(uParam0, 7);
			uParam0->f_5 = 1049238845;
			uParam0->f_11 = { 2192.489f, -318.3198f, 40.7232f };
			break;
		case 17:
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			func_170(uParam0, 3);
			func_170(uParam0, 5);
			func_170(uParam0, 7);
			uParam0->f_5 = 1363886783;
			uParam0->f_11 = { 2408.447f, -490.4562f, 40.9243f };
			break;
		case 18:
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			func_170(uParam0, 2);
			func_170(uParam0, 3);
			func_170(uParam0, 5);
			uParam0->f_5 = -1215674354;
			uParam0->f_11 = { -3243.502f, -3187.141f, -9.3137f };
			break;
		case 19:
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			uParam0->f_5 = 1902132155;
			uParam0->f_11 = { -1745.01f, -2929.141f, -12.3355f };
			break;
		case 20:
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			func_170(uParam0, 2);
			func_170(uParam0, 3);
			func_170(uParam0, 5);
			uParam0->f_5 = 1661312774;
			uParam0->f_11 = { -1735.07f, -2378.355f, 41.289f };
			break;
	}
}

void func_112(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 11;
	uParam0->f_1 = 1;
	uParam0->f_2 = 2;
	func_168(uParam0);
	uParam0->f_15[0] = -2090512547;
	switch (iParam1)
	{
		case 0:
			func_169(uParam0);
			uParam0->f_5 = 1382777618;
			uParam0->f_11 = { -228.7198f, 824.1839f, 123.3019f };
			break;
		case 1:
			func_169(uParam0);
			uParam0->f_5 = -2000681184;
			uParam0->f_11 = { 1274.578f, -1218.286f, 80.6496f };
			break;
		case 2:
			func_169(uParam0);
			uParam0->f_5 = 886884092;
			uParam0->f_11 = { -954.4733f, -1203.246f, 54.5241f };
			break;
		case 3:
			func_169(uParam0);
			uParam0->f_5 = -1277120723;
			uParam0->f_11 = { -5442.537f, -2904.509f, -0.0668f };
			break;
		case 4:
			func_169(uParam0);
			uParam0->f_5 = 1577436816;
			uParam0->f_11 = { -4438.908f, -2693.073f, -12.033f };
			break;
		case 5:
			func_169(uParam0);
			uParam0->f_5 = -234749781;
			uParam0->f_11 = { -3339.601f, -2869.283f, -6.9507f };
			break;
		case 6:
			func_169(uParam0);
			uParam0->f_5 = -1607623039;
			uParam0->f_11 = { 1396.14f, -643.1758f, 70.4818f };
			break;
		case 7:
			func_169(uParam0);
			uParam0->f_5 = -1943295936;
			uParam0->f_11 = { 1735.865f, -422.7769f, 47.1349f };
			break;
		case 8:
			func_169(uParam0);
			uParam0->f_5 = -397730168;
			uParam0->f_11 = { 1978.501f, -1902.647f, 41.0487f };
			break;
		case 9:
			func_169(uParam0);
			uParam0->f_5 = -392659534;
			uParam0->f_11 = { 2757.999f, -1078.666f, 45.8905f };
			break;
		case 10:
			func_169(uParam0);
			uParam0->f_5 = 146267878;
			uParam0->f_11 = { -1762.115f, -237.9833f, 181.9701f };
			break;
	}
}

void func_113(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 15;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	func_168(uParam0);
	switch (iParam1)
	{
		case 0:
			func_169(uParam0);
			uParam0->f_5 = 1247886914;
			uParam0->f_11 = { 2777.227f, 463.4025f, 65.2501f };
			break;
		case 1:
			func_169(uParam0);
			uParam0->f_5 = 1926100410;
			uParam0->f_11 = { 1428.817f, -1812.995f, 57.37384f };
			break;
		case 2:
			func_169(uParam0);
			uParam0->f_5 = 603340011;
			uParam0->f_11 = { 2578.893f, -852.3694f, 41.3078f };
			break;
		case 3:
			func_169(uParam0);
			uParam0->f_5 = -1253915394;
			uParam0->f_11 = { 2798.119f, 1432.187f, 77.71185f };
			break;
		case 4:
			func_169(uParam0);
			uParam0->f_5 = 1281783573;
			uParam0->f_11 = { 1243.455f, 526.5765f, 87.43867f };
			break;
		case 5:
			func_169(uParam0);
			uParam0->f_5 = -1384936716;
			uParam0->f_11 = { -28.69774f, 1111.23f, 167.9945f };
			break;
		case 6:
			func_169(uParam0);
			uParam0->f_5 = 636669604;
			uParam0->f_11 = { -546.6091f, -298.2057f, 52.56811f };
			break;
		case 7:
			func_169(uParam0);
			uParam0->f_5 = 1410575087;
			uParam0->f_11 = { -1403.688f, 383.7506f, 102.2472f };
			break;
		case 8:
			func_169(uParam0);
			uParam0->f_5 = -736919321;
			uParam0->f_11 = { -1510.116f, -883.8221f, 88.72778f };
			break;
		case 9:
			func_169(uParam0);
			uParam0->f_5 = 1755496218;
			uParam0->f_11 = { -1459.752f, -1915.602f, 50.93545f };
			break;
		case 10:
			func_169(uParam0);
			uParam0->f_5 = -1810033095;
			uParam0->f_11 = { -2470.018f, -2426.993f, 59.1458f };
			break;
		case 11:
			func_169(uParam0);
			uParam0->f_5 = 99707271;
			uParam0->f_11 = { -3092.935f, -3166.527f, -1.36638f };
			break;
		case 12:
			func_169(uParam0);
			uParam0->f_5 = 2145033839;
			uParam0->f_11 = { -3685.624f, -2769.247f, -15.14988f };
			break;
		case 13:
			func_169(uParam0);
			uParam0->f_5 = -994111457;
			uParam0->f_11 = { -4668.993f, -3706.819f, 12.54352f };
			break;
		case 14:
			func_169(uParam0);
			uParam0->f_5 = 702836385;
			uParam0->f_11 = { -5194.483f, -2883.913f, 2.32447f };
			break;
	}
}

void func_114(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 16;
	uParam0->f_1 = 2;
	uParam0->f_2 = 8;
	switch (iParam2)
	{
		case 0:
			func_171(uParam0, 0);
			func_171(uParam0, 1);
			func_171(uParam0, 4);
			func_171(uParam0, 5);
			break;
		case 1:
			func_171(uParam0, 2);
			func_171(uParam0, 3);
			func_171(uParam0, 6);
			func_171(uParam0, 7);
			func_172(uParam0, 2);
			break;
		default:
			func_168(uParam0);
			break;
	}
	switch (iParam1)
	{
		case 0:
			func_170(uParam0, 0);
			uParam0->f_5 = -88606612;
			uParam0->f_11 = { 498.9236f, 1191.276f, 179.5016f };
			break;
		case 1:
			func_170(uParam0, 1);
			uParam0->f_5 = -1507537085;
			uParam0->f_11 = { 114.87f, 1097.69f, 177.97f };
			break;
		case 2:
			func_170(uParam0, 0);
			uParam0->f_5 = 150331424;
			uParam0->f_11 = { 2271.753f, -440.5277f, 40.82026f };
			break;
		case 3:
			func_170(uParam0, 1);
			uParam0->f_5 = -74168995;
			uParam0->f_11 = { 2000.58f, -499.0656f, 41.0245f };
			break;
		case 4:
			func_170(uParam0, 0);
			uParam0->f_5 = -1303456769;
			uParam0->f_11 = { 2299.81f, -898.4015f, 41.04434f };
			break;
		case 5:
			func_170(uParam0, 1);
			uParam0->f_5 = 2080696176;
			uParam0->f_11 = { 2369.292f, -673.8396f, 41.36789f };
			break;
		case 6:
			func_170(uParam0, 0);
			uParam0->f_5 = -801880493;
			uParam0->f_11 = { 1531.33f, 1578.837f, 147.4066f };
			break;
		case 7:
			func_170(uParam0, 1);
			uParam0->f_5 = -2098877513;
			uParam0->f_11 = { 945.3031f, 1142.541f, 147.4809f };
			break;
		case 8:
			func_170(uParam0, 0);
			uParam0->f_5 = -985131289;
			uParam0->f_11 = { -1126.469f, 815.3829f, 117.6536f };
			break;
		case 9:
			func_170(uParam0, 1);
			uParam0->f_5 = 171385032;
			uParam0->f_11 = { -2063.813f, 935.3212f, 147.0808f };
			break;
		case 10:
			func_170(uParam0, 0);
			uParam0->f_5 = -690365399;
			uParam0->f_11 = { -1589.688f, -1425.319f, 80.34965f };
			break;
		case 11:
			func_170(uParam0, 1);
			uParam0->f_5 = -393773180;
			uParam0->f_11 = { -910.3301f, -1815.748f, 61.71241f };
			break;
		case 12:
			func_170(uParam0, 0);
			uParam0->f_5 = 1783045643;
			uParam0->f_11 = { -2690.104f, -2892.627f, 64.73759f };
			break;
		case 13:
			func_170(uParam0, 1);
			uParam0->f_5 = -1841828372;
			uParam0->f_11 = { -2914.53f, -2558.967f, 61.66708f };
			break;
		case 14:
			func_170(uParam0, 0);
			uParam0->f_5 = -1926357119;
			uParam0->f_11 = { -4545.762f, -3673.932f, 17.87756f };
			break;
		case 15:
			func_170(uParam0, 1);
			uParam0->f_5 = -1904926193;
			uParam0->f_11 = { -4720.841f, -3357f, 8.61745f };
			break;
	}
}

void func_115(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 12;
	uParam0->f_2 = 3;
	switch (iParam1)
	{
		case 0:
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			func_170(uParam0, 2);
			func_170(uParam0, 9);
			func_170(uParam0, 10);
			func_170(uParam0, 11);
			func_173(uParam0, iParam2);
			uParam0->f_5 = 666420762;
			uParam0->f_11 = { 468.6932f, 60.0849f, 134.4816f };
			break;
		case 1:
			func_170(uParam0, 1);
			func_170(uParam0, 2);
			func_170(uParam0, 8);
			func_170(uParam0, 9);
			func_170(uParam0, 10);
			func_170(uParam0, 11);
			func_173(uParam0, iParam2);
			uParam0->f_5 = 1145423923;
			uParam0->f_11 = { -408.7124f, 154.0742f, 40.84526f };
			break;
		case 2:
			func_170(uParam0, 1);
			func_170(uParam0, 2);
			func_170(uParam0, 3);
			func_170(uParam0, 4);
			func_170(uParam0, 5);
			func_170(uParam0, 6);
			func_170(uParam0, 9);
			func_170(uParam0, 10);
			func_170(uParam0, 11);
			func_173(uParam0, iParam2);
			uParam0->f_5 = -1176575305;
			uParam0->f_11 = { -1929.655f, -1348.338f, 105.84f };
			break;
		case 3:
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			func_170(uParam0, 2);
			func_170(uParam0, 9);
			func_170(uParam0, 10);
			func_170(uParam0, 11);
			func_173(uParam0, iParam2);
			uParam0->f_5 = -888961792;
			uParam0->f_11 = { -2003.943f, -2158.135f, 54.2301f };
			break;
		case 4:
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			func_170(uParam0, 2);
			func_170(uParam0, 9);
			func_170(uParam0, 10);
			func_170(uParam0, 11);
			func_173(uParam0, iParam2);
			uParam0->f_5 = -1145898130;
			uParam0->f_11 = { -1272.226f, 97.47642f, 70.53004f };
			break;
		case 5:
			func_170(uParam0, 1);
			func_170(uParam0, 2);
			func_170(uParam0, 3);
			func_170(uParam0, 4);
			func_170(uParam0, 7);
			func_170(uParam0, 8);
			func_170(uParam0, 9);
			func_170(uParam0, 10);
			func_170(uParam0, 11);
			func_173(uParam0, iParam2);
			uParam0->f_5 = -264936334;
			uParam0->f_11 = { -2350.861f, -359.485f, 143.7474f };
			break;
		case 6:
			func_170(uParam0, 1);
			func_170(uParam0, 2);
			func_170(uParam0, 3);
			func_170(uParam0, 6);
			func_170(uParam0, 7);
			func_170(uParam0, 9);
			func_170(uParam0, 10);
			func_170(uParam0, 11);
			func_173(uParam0, iParam2);
			uParam0->f_5 = -562839313;
			uParam0->f_11 = { -1736.757f, 306.2781f, 108.1355f };
			break;
		case 7:
			func_170(uParam0, 1);
			func_170(uParam0, 2);
			func_170(uParam0, 4);
			func_170(uParam0, 5);
			func_170(uParam0, 6);
			func_170(uParam0, 9);
			func_170(uParam0, 10);
			func_170(uParam0, 11);
			func_173(uParam0, iParam2);
			uParam0->f_5 = -819926700;
			uParam0->f_11 = { -4964.499f, -3399.889f, 7.97322f };
			break;
		case 8:
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			func_170(uParam0, 2);
			func_170(uParam0, 9);
			func_170(uParam0, 10);
			func_170(uParam0, 11);
			func_173(uParam0, iParam2);
			uParam0->f_5 = -100890882;
			uParam0->f_11 = { -2192.805f, -2778.977f, 69.01174f };
			break;
		case 9:
			func_170(uParam0, 1);
			func_170(uParam0, 2);
			func_170(uParam0, 5);
			func_170(uParam0, 9);
			func_170(uParam0, 10);
			func_170(uParam0, 11);
			func_173(uParam0, iParam2);
			uParam0->f_5 = 373607510;
			uParam0->f_11 = { -4603.166f, -2701.434f, -10.12116f };
			break;
	}
}

void func_116(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 21;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_168(uParam0);
	switch (iParam1)
	{
		case 0:
			func_169(uParam0);
			uParam0->f_5 = -1562903685;
			uParam0->f_11 = { 1452.25f, -1695.116f, 64.9668f };
			break;
		case 1:
			func_169(uParam0);
			uParam0->f_5 = 442262250;
			uParam0->f_11 = { 1163.55f, -324.0086f, 97.10712f };
			break;
		case 2:
			func_169(uParam0);
			uParam0->f_5 = 2113001754;
			uParam0->f_11 = { 2682.104f, 858.447f, 85.90118f };
			break;
		case 3:
			func_169(uParam0);
			uParam0->f_5 = 222101843;
			uParam0->f_11 = { 1311.333f, 1183.934f, 151.5859f };
			break;
		case 4:
			func_169(uParam0);
			uParam0->f_5 = 862535295;
			uParam0->f_11 = { 40.99253f, 1813.064f, 189.5056f };
			break;
		case 5:
			func_169(uParam0);
			uParam0->f_5 = 267494763;
			uParam0->f_11 = { 109.9411f, 1282.256f, 176.292f };
			break;
		case 6:
			func_169(uParam0);
			uParam0->f_5 = 492498900;
			uParam0->f_11 = { -1450.859f, 1686.266f, 255.2526f };
			break;
		case 7:
			func_169(uParam0);
			uParam0->f_5 = -735417347;
			uParam0->f_11 = { 66.91456f, -445.5748f, 72.15018f };
			break;
		case 8:
			func_169(uParam0);
			uParam0->f_5 = 2000289900;
			uParam0->f_11 = { -1698.036f, 380.6171f, 106.0826f };
			break;
		case 9:
			func_169(uParam0);
			uParam0->f_5 = 1820563970;
			uParam0->f_11 = { -2016.359f, -909.5917f, 84.91344f };
			break;
		case 10:
			func_169(uParam0);
			uParam0->f_5 = 1501808210;
			uParam0->f_11 = { -1362.091f, -1267.624f, 82.41972f };
			break;
		case 11:
			func_169(uParam0);
			uParam0->f_5 = -1103422576;
			uParam0->f_11 = { -2449.051f, -1457.942f, 148.705f };
			break;
		case 12:
			func_169(uParam0);
			uParam0->f_5 = -375108461;
			uParam0->f_11 = { -1559.339f, -1930.728f, 50.99157f };
			break;
		case 13:
			func_169(uParam0);
			uParam0->f_5 = 1074344160;
			uParam0->f_11 = { -1764.444f, -2717.768f, 62.81413f };
			break;
		case 14:
			func_169(uParam0);
			uParam0->f_5 = 1375567406;
			uParam0->f_11 = { -2190.544f, -2200.288f, 64.42333f };
			break;
		case 15:
			func_169(uParam0);
			uParam0->f_5 = 1695022182;
			uParam0->f_11 = { -2803.26f, -3142.291f, 5.88098f };
			break;
		case 16:
			func_169(uParam0);
			uParam0->f_5 = 1773241795;
			uParam0->f_11 = { -3175.168f, -2402.267f, 22.72451f };
			break;
		case 17:
			func_169(uParam0);
			uParam0->f_5 = 1650499101;
			uParam0->f_11 = { -4220.611f, -2690.138f, 0.65931f };
			break;
		case 18:
			func_169(uParam0);
			uParam0->f_5 = 149116609;
			uParam0->f_11 = { -4372.619f, -3274.055f, 20.26154f };
			break;
		case 19:
			func_169(uParam0);
			uParam0->f_5 = 1486166046;
			uParam0->f_11 = { -5456.922f, -3562.744f, -21.1142f };
			break;
		case 20:
			func_169(uParam0);
			uParam0->f_5 = 58739626;
			uParam0->f_11 = { -5796.222f, -2650.145f, -16.68393f };
			break;
	}
}

void func_117(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	func_168(uParam0);
	func_172(uParam0, 2);
	switch (iParam1)
	{
		case 0:
			func_169(uParam0);
			uParam0->f_5 = -1657923088;
			uParam0->f_11 = { 959.0613f, 383.9384f, 111.0409f };
			break;
		case 1:
			func_169(uParam0);
			uParam0->f_5 = -1268232386;
			uParam0->f_11 = { 1465.514f, -821.0334f, 50.2372f };
			break;
		case 2:
			func_169(uParam0);
			uParam0->f_5 = 1926851120;
			uParam0->f_11 = { -1082.332f, -696.7548f, 70.5432f };
			break;
		case 3:
			func_169(uParam0);
			uParam0->f_5 = -66052340;
			uParam0->f_11 = { -1462.952f, -1929.859f, 48.4187f };
			break;
		case 4:
			func_169(uParam0);
			uParam0->f_5 = 1738334804;
			uParam0->f_11 = { -4988.295f, -3902.346f, -0.03286f };
			break;
		case 5:
			func_169(uParam0);
			uParam0->f_5 = 1009780912;
			uParam0->f_11 = { -2770.473f, -2936.506f, 64.84297f };
			break;
		case 6:
			func_169(uParam0);
			uParam0->f_5 = -1560771476;
			uParam0->f_11 = { -1209.61f, -1812.165f, 61.23543f };
			break;
		case 7:
			func_169(uParam0);
			uParam0->f_5 = 453813335;
			uParam0->f_11 = { -1706.993f, -580.9286f, 149.93f };
			break;
		case 8:
			func_169(uParam0);
			uParam0->f_5 = 786924542;
			uParam0->f_11 = { 803.0057f, -584.7925f, 79.32288f };
			break;
		case 9:
			func_169(uParam0);
			uParam0->f_5 = 1656593925;
			uParam0->f_11 = { 1778.236f, -1731.359f, 48.27552f };
			break;
	}
}

void func_118(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 12;
	uParam0->f_1 = 4;
	uParam0->f_2 = 5;
	switch (iParam1)
	{
		case 0:
			func_174(uParam0, iParam2);
			uParam0->f_5 = 1323108111;
			uParam0->f_11 = { -1159.115f, 397.0877f, 60.4953f };
			break;
		case 1:
			func_174(uParam0, iParam2);
			uParam0->f_5 = -1505479200;
			uParam0->f_11 = { -1278.359f, 291.4224f, 76.6652f };
			break;
		case 2:
			func_174(uParam0, iParam2);
			uParam0->f_5 = -1283075997;
			uParam0->f_11 = { -1371.28f, 283.4114f, 86.0114f };
			break;
		case 3:
			func_174(uParam0, iParam2);
			uParam0->f_5 = -2100531475;
			uParam0->f_11 = { -1117.687f, 406.6783f, 55.3681f };
			break;
		case 4:
			func_174(uParam0, iParam2);
			uParam0->f_5 = 269617530;
			uParam0->f_11 = { -1288.323f, 148.5012f, 71.7864f };
			break;
		case 5:
			func_174(uParam0, iParam2);
			uParam0->f_5 = 1592829750;
			uParam0->f_11 = { -1648.447f, -114.858f, 170.0504f };
			break;
		case 6:
			func_174(uParam0, iParam2);
			uParam0->f_5 = 1817985549;
			uParam0->f_11 = { -1081.189f, -405.0457f, 97.0153f };
			break;
		case 7:
			func_174(uParam0, iParam2);
			uParam0->f_5 = 1945424739;
			uParam0->f_11 = { 206.8413f, -170.3653f, 130.5284f };
			break;
		case 8:
			func_174(uParam0, iParam2);
			uParam0->f_5 = 1787314318;
			uParam0->f_11 = { -621.2297f, 186.8452f, 41.2741f };
			break;
		case 9:
			func_174(uParam0, iParam2);
			uParam0->f_5 = 542354442;
			uParam0->f_11 = { 44.3784f, 388.2357f, 129.8287f };
			break;
		case 10:
			func_174(uParam0, iParam2);
			uParam0->f_5 = 1510776727;
			uParam0->f_11 = { 752.9834f, -58.1133f, 157.6479f };
			break;
		case 11:
			func_174(uParam0, iParam2);
			uParam0->f_5 = -2017297662;
			uParam0->f_11 = { 817.7247f, 566.3447f, 114.3761f };
			break;
	}
}

void func_119(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 20;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_168(uParam0);
	switch (iParam1)
	{
		case 0:
			func_169(uParam0);
			uParam0->f_5 = -377638420;
			uParam0->f_11 = { -2058.13f, -2493.143f, 63.51377f };
			break;
		case 1:
			func_169(uParam0);
			uParam0->f_5 = 1308799438;
			uParam0->f_11 = { -1541.353f, -2334.611f, 43.10187f };
			break;
		case 2:
			func_169(uParam0);
			uParam0->f_5 = -1030922940;
			uParam0->f_11 = { -3456.39f, -2262.339f, 0.01624f };
			break;
		case 3:
			func_169(uParam0);
			uParam0->f_5 = 1750043358;
			uParam0->f_11 = { -3703.712f, -3594.224f, 45.18983f };
			break;
		case 4:
			func_169(uParam0);
			uParam0->f_5 = -1330609910;
			uParam0->f_11 = { -1581.551f, -1656.278f, 78.51012f };
			break;
		case 5:
			func_169(uParam0);
			uParam0->f_5 = 223942444;
			uParam0->f_11 = { -1236.292f, -1118.55f, 68.58572f };
			break;
		case 6:
			func_169(uParam0);
			uParam0->f_5 = 1067547121;
			uParam0->f_11 = { -1264.125f, -773.2117f, 91.83559f };
			break;
		case 7:
			func_169(uParam0);
			uParam0->f_5 = -450732096;
			uParam0->f_11 = { -1414.607f, -234.2123f, 99.22668f };
			break;
		case 8:
			func_169(uParam0);
			uParam0->f_5 = -1701940764;
			uParam0->f_11 = { -1721.402f, 553.6f, 112.524f };
			break;
		case 9:
			func_169(uParam0);
			uParam0->f_5 = 1584258975;
			uParam0->f_11 = { -484.7991f, -70.36918f, 42.94242f };
			break;
		case 10:
			func_169(uParam0);
			uParam0->f_5 = -98183174;
			uParam0->f_11 = { -458.5839f, -346.5686f, 80.66556f };
			break;
		case 11:
			func_169(uParam0);
			uParam0->f_5 = -90261849;
			uParam0->f_11 = { 1089.583f, 23.75282f, 88.22131f };
			break;
		case 12:
			func_169(uParam0);
			uParam0->f_5 = 754522971;
			uParam0->f_11 = { 1000.131f, 417.5909f, 107.9082f };
			break;
		case 13:
			func_169(uParam0);
			uParam0->f_5 = 974542513;
			uParam0->f_11 = { 713.7332f, 23.52884f, 152.0797f };
			break;
		case 14:
			func_169(uParam0);
			uParam0->f_5 = -790885273;
			uParam0->f_11 = { 63.77304f, 1023.487f, 201.9749f };
			break;
		case 15:
			func_169(uParam0);
			uParam0->f_5 = -1447045452;
			uParam0->f_11 = { 366.667f, 1408.665f, 175.0605f };
			break;
		case 16:
			func_169(uParam0);
			uParam0->f_5 = -586115209;
			uParam0->f_11 = { 1785.934f, 1522.009f, 155.1442f };
			break;
		case 17:
			func_169(uParam0);
			uParam0->f_5 = 224941020;
			uParam0->f_11 = { 1279.07f, 1164.678f, 149.2508f };
			break;
		case 18:
			func_169(uParam0);
			uParam0->f_5 = -1179654578;
			uParam0->f_11 = { 2106.456f, 207.6169f, 72.68985f };
			break;
		case 19:
			func_169(uParam0);
			uParam0->f_5 = 1247197458;
			uParam0->f_11 = { 2675.549f, 179.9657f, 54.14579f };
			break;
	}
}

void func_120(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 9;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	func_168(uParam0);
	uParam0->f_10 = 60f;
	switch (iParam1)
	{
		case 0:
			func_169(uParam0);
			uParam0->f_5 = 974582605;
			uParam0->f_11 = { 1562.246f, -2047.412f, 47.3446f };
			break;
		case 1:
			func_169(uParam0);
			uParam0->f_5 = -964359125;
			uParam0->f_11 = { 1379.948f, -1696.249f, 66.86113f };
			break;
		case 2:
			func_169(uParam0);
			uParam0->f_5 = -700339292;
			uParam0->f_11 = { 1621.706f, -1650.367f, 56.03105f };
			break;
		case 3:
			func_169(uParam0);
			uParam0->f_5 = -470300912;
			uParam0->f_11 = { 1504.868f, -1470.025f, 71.38271f };
			break;
		case 4:
			func_169(uParam0);
			uParam0->f_5 = -241343909;
			uParam0->f_11 = { 1082.685f, -1265.978f, 67.5664f };
			break;
		case 5:
			func_169(uParam0);
			uParam0->f_5 = 1944053474;
			uParam0->f_11 = { 682.6295f, -992.2614f, 52.4207f };
			break;
		case 6:
			func_169(uParam0);
			uParam0->f_5 = -2120646059;
			uParam0->f_11 = { 707.7728f, -885.6594f, 48.26217f };
			break;
		case 7:
			func_169(uParam0);
			uParam0->f_5 = -1656440405;
			uParam0->f_11 = { 879.6264f, -537.9133f, 88.03556f };
			break;
		case 8:
			func_169(uParam0);
			uParam0->f_5 = -1422404207;
			uParam0->f_11 = { 1012.322f, -394.373f, 90.43443f };
			break;
	}
}

void func_121(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 1;
	uParam0->f_1 = 6;
	uParam0->f_2 = 1;
	func_168(uParam0);
	func_172(uParam0, 1);
	func_172(uParam0, 4);
	func_172(uParam0, 8);
	func_172(uParam0, 16);
	switch (iParam1)
	{
		case 0:
			func_169(uParam0);
			uParam0->f_5 = -1623035253;
			uParam0->f_11 = { func_176(func_175(iParam2)) };
			break;
	}
}

void func_122(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 5;
	uParam0->f_2 = 6;
	switch (iParam1)
	{
		case 0:
			func_177(uParam0, iParam2);
			uParam0->f_5 = -1957221189;
			uParam0->f_11 = { -347.4531f, 740.8643f, 116.4549f };
			break;
		case 1:
			func_177(uParam0, iParam2);
			uParam0->f_5 = 871956008;
			uParam0->f_11 = { -360.6497f, 824.0327f, 115.4768f };
			break;
		case 2:
			func_177(uParam0, iParam2);
			uParam0->f_5 = -718829908;
			uParam0->f_11 = { 2957.225f, 524.4706f, 43.66619f };
			break;
		case 3:
			func_177(uParam0, iParam2);
			uParam0->f_5 = -478076065;
			uParam0->f_11 = { 2975.885f, 537.2245f, 42.42131f };
			break;
		case 4:
			func_177(uParam0, iParam2);
			uParam0->f_5 = 158131441;
			uParam0->f_11 = { 1444.633f, -1417.982f, 78.22246f };
			break;
		case 5:
			func_177(uParam0, iParam2);
			uParam0->f_5 = 575051428;
			uParam0->f_11 = { 1394.169f, -1422.854f, 78.97552f };
			break;
		case 6:
			func_177(uParam0, iParam2);
			uParam0->f_5 = -861587350;
			uParam0->f_11 = { 2996.145f, 1351.808f, 42.95977f };
			break;
		case 7:
			func_177(uParam0, iParam2);
			uParam0->f_5 = -616671844;
			uParam0->f_11 = { 2915.743f, 1231.952f, 43.5792f };
			break;
		case 8:
			func_177(uParam0, iParam2);
			uParam0->f_5 = -828875274;
			uParam0->f_11 = { -833.5609f, -1543.917f, 59.6274f };
			break;
		case 9:
			func_177(uParam0, iParam2);
			uParam0->f_5 = -598017669;
			uParam0->f_11 = { -1019.64f, -1138.944f, 56.39161f };
			break;
	}
}

void func_123(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 1;
	*uParam0 = 12;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	func_168(uParam0);
	switch (iParam1)
	{
		case 0:
			func_169(uParam0);
			uParam0->f_5 = 2136361638;
			uParam0->f_11 = { 2208.668f, -350.9536f, 41.488f };
			break;
		case 1:
			func_169(uParam0);
			uParam0->f_5 = 1948005426;
			uParam0->f_11 = { 1733.923f, -727.6727f, 40.8996f };
			break;
		case 2:
			func_169(uParam0);
			uParam0->f_5 = 462368629;
			uParam0->f_11 = { -2028.171f, 421.7315f, 123.1801f };
			break;
		case 3:
			func_169(uParam0);
			uParam0->f_5 = -172629291;
			uParam0->f_11 = { 238.8146f, 1242.903f, 185.8171f };
			break;
		case 4:
			func_169(uParam0);
			uParam0->f_5 = 1063777848;
			uParam0->f_11 = { 646.006f, 1304.928f, 193.4366f };
			break;
		case 5:
			func_169(uParam0);
			uParam0->f_5 = -267241827;
			uParam0->f_11 = { 438.9673f, 831.1111f, 145.7085f };
			break;
		case 6:
			func_169(uParam0);
			uParam0->f_5 = -1183266453;
			uParam0->f_11 = { -545.762f, 393.6189f, 87.0076f };
			break;
		case 7:
			func_169(uParam0);
			uParam0->f_5 = -877826604;
			uParam0->f_11 = { 1017.37f, 1062.322f, 158.965f };
			break;
		case 8:
			func_169(uParam0);
			uParam0->f_5 = 1527533302;
			uParam0->f_11 = { 2226.213f, -248.6621f, 42.5431f };
			break;
		case 9:
			func_169(uParam0);
			uParam0->f_5 = -865586768;
			uParam0->f_11 = { 2566.893f, -71.0977f, 49.3333f };
			break;
		case 10:
			func_169(uParam0);
			uParam0->f_5 = 294379466;
			uParam0->f_11 = { 1389.072f, -2196.696f, 48.3307f };
			break;
		case 11:
			func_169(uParam0);
			uParam0->f_5 = 452588198;
			uParam0->f_11 = { 906.9065f, -987.0414f, 56.96f };
			break;
	}
}

void func_124(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 15;
	uParam0->f_1 = 2;
	uParam0->f_2 = 4;
	func_178(uParam0, iParam2);
	switch (iParam1)
	{
		case 0:
			uParam0->f_5 = -1056712278;
			uParam0->f_11 = { 2815.91f, -1222.949f, 46.526f };
			break;
		case 1:
			uParam0->f_5 = -1296614127;
			uParam0->f_11 = { 2602.444f, -1286.57f, 51.2567f };
			break;
		case 2:
			uParam0->f_5 = -1652223315;
			uParam0->f_11 = { 2661.251f, -1202.6f, 52.2783f };
			break;
		case 3:
			uParam0->f_5 = -1975325639;
			uParam0->f_11 = { 2750.527f, -1206.293f, 48.3767f };
			break;
		case 4:
			uParam0->f_5 = 1979237285;
			uParam0->f_11 = { 2530.883f, -1149.375f, 49.0052f };
			break;
		case 5:
			uParam0->f_5 = 1740187430;
			uParam0->f_11 = { 2714.385f, -1233.121f, 49.172f };
			break;
		case 6:
			uParam0->f_5 = -779552060;
			uParam0->f_11 = { 2639.789f, -1417.126f, 45.376f };
			break;
		case 7:
			uParam0->f_5 = -1018405301;
			uParam0->f_11 = { 2703.266f, -1184.961f, 50.865f };
			break;
		case 8:
			uParam0->f_5 = -1290420770;
			uParam0->f_11 = { 2781.518f, -1278.669f, 46.429f };
			break;
		case 9:
			uParam0->f_5 = -1671655316;
			uParam0->f_11 = { 2593.165f, -1207.484f, 52.3112f };
			break;
		case 10:
			uParam0->f_5 = 1135642784;
			uParam0->f_11 = { 2670.08f, -1113.233f, 49.552f };
			break;
		case 11:
			uParam0->f_5 = -1924228133;
			uParam0->f_11 = { 2482.088f, -1465.71f, 45.1902f };
			break;
		case 12:
			uParam0->f_5 = -1094623305;
			uParam0->f_11 = { -791.817f, -1311.097f, 42.623f };
			break;
		case 13:
			uParam0->f_5 = -782990107;
			uParam0->f_11 = { -778.963f, -1260.098f, 42.643f };
			break;
		case 14:
			uParam0->f_5 = 677294836;
			uParam0->f_11 = { -843.7784f, -1282.664f, 42.3634f };
			break;
	}
}

void func_125(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 15;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = -1084113577;
	if (iParam1 < 5)
	{
		uParam0->f_20[0] = 1417207314;
		uParam0->f_27 = 18;
	}
	else
	{
		uParam0->f_20[0] = -35871888;
		uParam0->f_27 = 8;
	}
	func_168(uParam0);
	switch (iParam1)
	{
		case 0:
			func_179(uParam0, iParam1);
			uParam0->f_5 = -672003008;
			uParam0->f_11 = { 2153.785f, -1677.743f, 40.5666f };
			break;
		case 1:
			func_179(uParam0, iParam1);
			uParam0->f_5 = -396317411;
			uParam0->f_11 = { 2188.584f, -1595.642f, 40.591f };
			break;
		case 2:
			func_179(uParam0, iParam1);
			uParam0->f_5 = -1239103346;
			uParam0->f_11 = { 2078.438f, -1694.907f, 40.6896f };
			break;
		case 3:
			func_179(uParam0, iParam1);
			uParam0->f_5 = -889851344;
			uParam0->f_11 = { 2066.834f, -1767.304f, 40.1183f };
			break;
		case 4:
			func_179(uParam0, iParam1);
			uParam0->f_5 = -1582784618;
			uParam0->f_11 = { 2131.718f, -1865.66f, 40.0837f };
			break;
		case 5:
			func_179(uParam0, iParam1);
			uParam0->f_5 = 407459900;
			uParam0->f_11 = { 2189.613f, -654.0466f, 40.5628f };
			break;
		case 6:
			func_179(uParam0, iParam1);
			uParam0->f_5 = -1359903346;
			uParam0->f_11 = { 2311.974f, -546.9454f, 40.5628f };
			break;
		case 7:
			func_179(uParam0, iParam1);
			uParam0->f_5 = -1075501195;
			uParam0->f_11 = { 2212.435f, -599.6181f, 40.5628f };
			break;
		case 8:
			func_179(uParam0, iParam1);
			uParam0->f_5 = -761049871;
			uParam0->f_11 = { 2273.341f, -693.9393f, 40.5628f };
			break;
		case 9:
			func_179(uParam0, iParam1);
			uParam0->f_5 = 1397804618;
			uParam0->f_11 = { 2314.659f, -599.6119f, 40.5628f };
			break;
		case 10:
			func_179(uParam0, iParam1);
			uParam0->f_5 = -636095416;
			uParam0->f_11 = { 2773.734f, -612.6971f, 40.6339f };
			break;
		case 11:
			func_179(uParam0, iParam1);
			uParam0->f_5 = -933474091;
			uParam0->f_11 = { 2800.13f, -727.0102f, 40.6116f };
			break;
		case 12:
			func_179(uParam0, iParam1);
			uParam0->f_5 = -1209520147;
			uParam0->f_11 = { 2726.128f, -662.6138f, 40.5283f };
			break;
		case 13:
			func_179(uParam0, iParam1);
			uParam0->f_5 = -1524528544;
			uParam0->f_11 = { 2710.138f, -534.5544f, 40.615f };
			break;
		case 14:
			func_179(uParam0, iParam1);
			uParam0->f_5 = -449082741;
			uParam0->f_11 = { 2728.174f, -468.3862f, 40.7744f };
			break;
	}
}

void func_126(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 13;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = 477228254;
	if (iParam1 > 7)
	{
		uParam0->f_27 = 18;
		uParam0->f_20[0] = 1417207314;
	}
	else
	{
		uParam0->f_27 = 1;
		uParam0->f_20[0] = 1985854092;
	}
	switch (iParam1)
	{
		case 0:
			func_180(uParam0, iParam1);
			uParam0->f_5 = -42638554;
			uParam0->f_11 = { -1712f, 644f, 122.8f };
			break;
		case 1:
			func_180(uParam0, iParam1);
			uParam0->f_5 = -330841909;
			uParam0->f_11 = { -2537.1f, 853.9f, 156.5f };
			break;
		case 2:
			func_180(uParam0, iParam1);
			uParam0->f_5 = -637690825;
			uParam0->f_11 = { -2510.7f, 519.2f, 140f };
			break;
		case 3:
			func_180(uParam0, iParam1);
			uParam0->f_5 = 1210841234;
			uParam0->f_11 = { -1919.8f, 751.1f, 150.5f };
			break;
		case 4:
			func_180(uParam0, iParam1);
			uParam0->f_5 = -275624566;
			uParam0->f_11 = { -2023.4f, 662.6884f, 119.8702f };
			break;
		case 5:
			func_180(uParam0, iParam1);
			uParam0->f_5 = -2051147289;
			uParam0->f_11 = { -2435.442f, 828.0525f, 138.9454f };
			break;
		case 6:
			func_180(uParam0, iParam1);
			uParam0->f_5 = -1760846718;
			uParam0->f_11 = { -2487.232f, 414.2487f, 148.2772f };
			break;
		case 7:
			func_180(uParam0, iParam1);
			uParam0->f_5 = -1591562064;
			uParam0->f_11 = { -2579.019f, 342.2418f, 149.5684f };
			break;
		case 8:
			func_180(uParam0, iParam1);
			uParam0->f_5 = -1159724897;
			uParam0->f_11 = { -1377.945f, 265.2666f, 78.222f };
			break;
		case 9:
			func_180(uParam0, iParam1);
			uParam0->f_5 = -114459335;
			uParam0->f_11 = { -1209.213f, 172.2838f, 40.4974f };
			break;
		case 10:
			func_180(uParam0, iParam1);
			uParam0->f_5 = 564350440;
			uParam0->f_11 = { -1091.188f, -37.3214f, 40.5256f };
			break;
		case 11:
			func_180(uParam0, iParam1);
			uParam0->f_5 = -840522068;
			uParam0->f_11 = { -867.4355f, 535.2601f, 57.9307f };
			break;
		case 12:
			func_180(uParam0, iParam1);
			uParam0->f_5 = -2076667055;
			uParam0->f_11 = { -792.3045f, 647.1317f, 88.5497f };
			break;
	}
}

void func_127(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 10;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = 1796670491;
	if (iParam1 < 5)
	{
		uParam0->f_20[0] = -2117802919;
		uParam0->f_20[1] = -35871888;
		uParam0->f_27 = 0;
	}
	else
	{
		uParam0->f_20[0] = -2117802919;
		uParam0->f_20[1] = -35871888;
		uParam0->f_27 = 18;
	}
	func_168(uParam0);
	switch (iParam1)
	{
		case 0:
			func_170(uParam0, 2);
			func_170(uParam0, 3);
			uParam0->f_5 = -666643000;
			uParam0->f_11 = { -2323.821f, -444.3168f, 143.2396f };
			break;
		case 1:
			func_170(uParam0, 2);
			func_170(uParam0, 3);
			uParam0->f_5 = -930743103;
			uParam0->f_11 = { -2387.781f, -333.0453f, 142.8896f };
			break;
		case 2:
			func_170(uParam0, 2);
			func_170(uParam0, 3);
			uParam0->f_5 = -4199612;
			uParam0->f_11 = { -2622.5f, -342.7303f, 141.5315f };
			break;
		case 3:
			func_170(uParam0, 2);
			func_170(uParam0, 3);
			uParam0->f_5 = -1480377528;
			uParam0->f_11 = { -2760.32f, -77.8632f, 151.8582f };
			break;
		case 4:
			func_170(uParam0, 2);
			func_170(uParam0, 3);
			uParam0->f_5 = -1817640794;
			uParam0->f_11 = { -2273.776f, -473.7863f, 138.3616f };
			break;
		case 5:
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			uParam0->f_5 = -915442079;
			uParam0->f_11 = { 2448.226f, 553.928f, 66.09f };
			break;
		case 6:
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			uParam0->f_5 = 1928422814;
			uParam0->f_11 = { 2257.893f, 256.7348f, 43.6559f };
			break;
		case 7:
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			uParam0->f_5 = 1940620434;
			uParam0->f_11 = { 2324.826f, 895.6353f, 71.6451f };
			break;
		case 8:
			func_170(uParam0, 1);
			uParam0->f_5 = -665538457;
			uParam0->f_11 = { 2383.811f, 1084.155f, 85.9333f };
			break;
		case 9:
			func_170(uParam0, 1);
			uParam0->f_5 = 355243564;
			uParam0->f_11 = { 2398.53f, 773.5043f, 67.0099f };
			break;
	}
}

void func_128(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 10;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = 326651247;
	func_168(uParam0);
	if (iParam1 > 4)
	{
		uParam0->f_20[0] = 1985854092;
		uParam0->f_27 = 18;
	}
	else
	{
		uParam0->f_20[0] = 1417207314;
		uParam0->f_27 = 9;
	}
	switch (iParam1)
	{
		case 0:
			func_170(uParam0, 0);
			uParam0->f_5 = -1024453831;
			uParam0->f_11 = { -1856.609f, 1802.919f, 234.305f };
			break;
		case 1:
			func_170(uParam0, 0);
			uParam0->f_5 = -652787833;
			uParam0->f_11 = { -1821.152f, 1566.352f, 235.8068f };
			break;
		case 2:
			func_170(uParam0, 0);
			uParam0->f_5 = 230697180;
			uParam0->f_11 = { -2069.577f, 1812.812f, 246.0542f };
			break;
		case 3:
			func_170(uParam0, 0);
			uParam0->f_5 = -543699832;
			uParam0->f_11 = { -1932.007f, 2153.216f, 322.7221f };
			break;
		case 4:
			func_170(uParam0, 0);
			uParam0->f_5 = 894826503;
			uParam0->f_11 = { -1752.347f, 1951.369f, 264.5091f };
			break;
		case 5:
			func_170(uParam0, 1);
			uParam0->f_5 = 1666294228;
			uParam0->f_11 = { 959.16f, 618.9481f, 97.743f };
			break;
		case 6:
			func_170(uParam0, 1);
			uParam0->f_5 = 1426851145;
			uParam0->f_11 = { 996.1093f, 512.002f, 97.3018f };
			break;
		case 7:
			func_170(uParam0, 1);
			uParam0->f_5 = -807339271;
			uParam0->f_11 = { 1215.257f, 557.647f, 87.103f };
			break;
		case 8:
			func_170(uParam0, 1);
			uParam0->f_5 = -1050255868;
			uParam0->f_11 = { 1251.465f, 344.8225f, 92.1045f };
			break;
		case 9:
			func_170(uParam0, 1);
			uParam0->f_5 = -1406848126;
			uParam0->f_11 = { 913.0093f, 113.5476f, 116.3f };
			break;
	}
}

void func_129(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 11;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = -1848813677;
	func_168(uParam0);
	if (iParam1 > 5)
	{
		uParam0->f_20[0] = -35871888;
		uParam0->f_27 = 9;
	}
	else
	{
		uParam0->f_20[0] = 1985854092;
		uParam0->f_27 = 18;
	}
	switch (iParam1)
	{
		case 0:
			func_170(uParam0, 0);
			uParam0->f_5 = -1741150966;
			uParam0->f_11 = { -1352.639f, -2550.378f, 74.9777f };
			break;
		case 1:
			func_170(uParam0, 0);
			uParam0->f_5 = -796584541;
			uParam0->f_11 = { -1913.631f, -2213.565f, 42.0518f };
			break;
		case 2:
			func_170(uParam0, 0);
			uParam0->f_5 = 80182823;
			uParam0->f_11 = { -1745.884f, -2388.807f, 42.8205f };
			break;
		case 3:
			func_170(uParam0, 1);
			uParam0->f_5 = 1964620432;
			uParam0->f_11 = { -1593.106f, -2351.92f, 43.0229f };
			break;
		case 4:
			func_170(uParam0, 1);
			uParam0->f_5 = 1731665611;
			uParam0->f_11 = { -1800.651f, -1644.944f, 96.7288f };
			break;
		case 5:
			func_170(uParam0, 1);
			uParam0->f_5 = -1728544175;
			uParam0->f_11 = { -1628.216f, -1943.554f, 50.1671f };
			break;
		case 6:
			func_170(uParam0, 2);
			uParam0->f_5 = -1242537170;
			uParam0->f_11 = { 2443.712f, -19.2163f, 43.2151f };
			break;
		case 7:
			func_170(uParam0, 2);
			uParam0->f_5 = 2036591126;
			uParam0->f_11 = { 2715.91f, -128.7452f, 42.0147f };
			break;
		case 8:
			func_170(uParam0, 2);
			uParam0->f_5 = 197299925;
			uParam0->f_11 = { 2363.777f, 13.1458f, 41.3272f };
			break;
		case 9:
			func_170(uParam0, 2);
			uParam0->f_5 = 1291850063;
			uParam0->f_11 = { 2355.338f, -247.3491f, 41.5576f };
			break;
		case 10:
			func_170(uParam0, 2);
			uParam0->f_5 = 1599124976;
			uParam0->f_11 = { 2601.386f, -212.5256f, 43.7812f };
			break;
	}
}

void func_130(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 20;
	uParam0->f_1 = 4;
	uParam0->f_2 = 2;
	uParam0->f_28[0] = 458679075;
	switch (iParam1)
	{
		case 0:
			func_181(uParam0, iParam1);
			uParam0->f_5 = 980541174;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6072.735f, -3593.837f, -4.3615f };
			break;
		case 1:
			func_181(uParam0, iParam1);
			uParam0->f_5 = 1220770713;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6201.49f, -3702.74f, -4.28209f };
			break;
		case 2:
			func_181(uParam0, iParam1);
			uParam0->f_5 = 1322813407;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5571.36f, -3890.84f, -31.2513f };
			break;
		case 3:
			func_181(uParam0, iParam1);
			uParam0->f_5 = 1552098100;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6119.04f, -3793.32f, -32.966f };
			break;
		case 4:
			func_181(uParam0, iParam1);
			uParam0->f_5 = 1916358304;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6009.02f, -3759.14f, -25.1f };
			break;
		case 5:
			func_181(uParam0, iParam1);
			uParam0->f_5 = -1363212564;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5896.217f, -3811.854f, -31.2514f };
			break;
		case 6:
			func_181(uParam0, iParam1);
			uParam0->f_5 = 686685000;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6360.188f, -3401.399f, -14.7027f };
			break;
		case 7:
			func_181(uParam0, iParam1);
			uParam0->f_5 = -1524698208;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6241.614f, -3430.465f, 1.465f };
			break;
		case 8:
			func_181(uParam0, iParam1);
			uParam0->f_5 = -1804348854;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6091.54f, -3398.527f, 17.9157f };
			break;
		case 9:
			func_181(uParam0, iParam1);
			uParam0->f_5 = -2035403073;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6054.187f, -3594.051f, -4.8637f };
			break;
		case 10:
			func_181(uParam0, iParam1);
			uParam0->f_5 = 728964560;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5609.956f, -3781.126f, -24.15435f };
			break;
		case 11:
			func_181(uParam0, iParam1);
			uParam0->f_5 = 765075998;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5664.643f, -3561.726f, -24.1565f };
			break;
		case 12:
			func_181(uParam0, iParam1);
			uParam0->f_5 = 1070974613;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5811.027f, -3789.534f, -27.8079f };
			break;
		case 13:
			func_181(uParam0, iParam1);
			uParam0->f_5 = -1088797396;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5906.508f, -3520.436f, -24.1555f };
			break;
		case 14:
			func_181(uParam0, iParam1);
			uParam0->f_5 = -740987230;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5753.862f, -3302.776f, -24.1569f };
			break;
		case 15:
			func_181(uParam0, iParam1);
			uParam0->f_5 = 2110034336;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 2;
			uParam0->f_11 = { -937.2829f, -1900.071f, 50.81326f };
			break;
		case 16:
			func_181(uParam0, iParam1);
			uParam0->f_5 = -783796062;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 16;
			uParam0->f_11 = { -1060.57f, -1731.06f, 75.49813f };
			break;
		case 17:
			func_181(uParam0, iParam1);
			uParam0->f_5 = -545106666;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 2;
			uParam0->f_11 = { -1052.66f, -1784.942f, 62.46124f };
			break;
		case 18:
			func_181(uParam0, iParam1);
			uParam0->f_5 = 379536207;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 16;
			uParam0->f_11 = { -960.0064f, -1661.613f, 67.8736f };
			break;
		case 19:
			func_181(uParam0, iParam1);
			uParam0->f_5 = -992108595;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 2;
			uParam0->f_11 = { -1331.61f, -1892.678f, 60.4174f };
			break;
	}
}

void func_131(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 15;
	uParam0->f_1 = 5;
	uParam0->f_2 = 2;
	uParam0->f_28[0] = 78935770;
	switch (iParam1)
	{
		case 0:
			func_182(uParam0, iParam1);
			uParam0->f_5 = 1750035473;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1486.613f, -2140.134f, 47.13319f };
			break;
		case 1:
			func_182(uParam0, iParam1);
			uParam0->f_5 = -1499633496;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1400.093f, -2166.322f, 47.3376f };
			break;
		case 2:
			func_182(uParam0, iParam1);
			uParam0->f_5 = 2019068959;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1229.798f, -2101.002f, 57.1906f };
			break;
		case 3:
			func_182(uParam0, iParam1);
			uParam0->f_5 = 1010504677;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1036.581f, -2147.274f, 43.912f };
			break;
		case 4:
			func_182(uParam0, iParam1);
			uParam0->f_5 = 1297331734;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1190.843f, -2218.737f, 57.2836f };
			break;
		case 5:
			func_182(uParam0, iParam1);
			uParam0->f_5 = 980309385;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2260.786f, -372.8623f, 40.8656f };
			break;
		case 6:
			func_182(uParam0, iParam1);
			uParam0->f_5 = 1451396569;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 1632.416f, -616.6262f, 42.8678f };
			break;
		case 7:
			func_182(uParam0, iParam1);
			uParam0->f_5 = -1404978858;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2127.624f, -907.4355f, 40.6492f };
			break;
		case 8:
			func_182(uParam0, iParam1);
			uParam0->f_5 = -1173302028;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2023.697f, -1017.159f, 42.3998f };
			break;
		case 9:
			func_182(uParam0, iParam1);
			uParam0->f_5 = 2143543387;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2093.953f, -739.3283f, 41.2796f };
			break;
		case 10:
			func_182(uParam0, iParam1);
			uParam0->f_5 = 1187325752;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 2;
			uParam0->f_11 = { 2183.54f, -213.3573f, 45.5331f };
			break;
		case 11:
			func_182(uParam0, iParam1);
			uParam0->f_5 = 201273773;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 16;
			uParam0->f_11 = { 2185.672f, -43.506f, 52.2188f };
			break;
		case 12:
			func_182(uParam0, iParam1);
			uParam0->f_5 = 36249089;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 2;
			uParam0->f_11 = { 2447.455f, -55.0326f, 43.6877f };
			break;
		case 13:
			func_182(uParam0, iParam1);
			uParam0->f_5 = -1717449488;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 16;
			uParam0->f_11 = { 1832.42f, -317.352f, 45.708f };
			break;
		case 14:
			func_182(uParam0, iParam1);
			uParam0->f_5 = -2014041707;
			uParam0->f_20[0] = 1417207314;
			uParam0->f_27 = 2;
			uParam0->f_11 = { 1876.532f, -453.5455f, 43.2695f };
			break;
	}
}

void func_132(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 10;
	uParam0->f_1 = 6;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = 29257535;
	func_168(uParam0);
	if (iParam1 < 5)
	{
		uParam0->f_20[0] = 1985854092;
		uParam0->f_20[1] = -2117802919;
		uParam0->f_27 = 0;
	}
	else
	{
		uParam0->f_20[0] = 1985854092;
		uParam0->f_20[1] = -35871888;
		uParam0->f_27 = 9;
	}
	switch (iParam1)
	{
		case 0:
			func_170(uParam0, 3);
			func_170(uParam0, 4);
			func_170(uParam0, 5);
			uParam0->f_5 = -813726569;
			uParam0->f_11 = { -2685.817f, -2697.83f, 71.8905f };
			break;
		case 1:
			func_170(uParam0, 3);
			func_170(uParam0, 4);
			func_170(uParam0, 5);
			uParam0->f_5 = -991070207;
			uParam0->f_11 = { -2841.472f, -2845.188f, 86.3463f };
			break;
		case 2:
			func_170(uParam0, 3);
			func_170(uParam0, 4);
			func_170(uParam0, 5);
			uParam0->f_5 = 1385332783;
			uParam0->f_11 = { -3043.896f, -2154.732f, 59.9256f };
			break;
		case 3:
			func_170(uParam0, 3);
			func_170(uParam0, 4);
			func_170(uParam0, 5);
			uParam0->f_5 = 1394180521;
			uParam0->f_11 = { -2653.586f, -2143.511f, 75.962f };
			break;
		case 4:
			func_170(uParam0, 3);
			func_170(uParam0, 4);
			func_170(uParam0, 5);
			uParam0->f_5 = -1581141590;
			uParam0->f_11 = { -3228.791f, -2434.523f, 26.6737f };
			break;
		case 5:
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			func_170(uParam0, 2);
			uParam0->f_5 = 1300807189;
			uParam0->f_11 = { -1177.594f, -748.8547f, 67.811f };
			break;
		case 6:
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			func_170(uParam0, 2);
			uParam0->f_5 = -1226288496;
			uParam0->f_11 = { -1735.686f, -628.3361f, 145.1246f };
			break;
		case 7:
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			func_170(uParam0, 2);
			uParam0->f_5 = -566411244;
			uParam0->f_11 = { -1572.939f, -328.771f, 160.6099f };
			break;
		case 8:
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			func_170(uParam0, 2);
			uParam0->f_5 = 1931184426;
			uParam0->f_11 = { -1463.646f, -481.3466f, 129.9887f };
			break;
		case 9:
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			func_170(uParam0, 2);
			uParam0->f_5 = 432310963;
			uParam0->f_11 = { -1525.983f, -916.2361f, 88.1698f };
			break;
	}
}

void func_133(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 20;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = -463663296;
	if (iParam1 < 10)
	{
		uParam0->f_20[0] = -2117802919;
		uParam0->f_20[1] = -35871888;
		uParam0->f_27 = 57;
	}
	else
	{
		uParam0->f_20[0] = -2117802919;
		uParam0->f_20[1] = -35871888;
		uParam0->f_27 = 57;
	}
	switch (iParam1)
	{
		case 0:
			func_183(uParam0, iParam1);
			uParam0->f_5 = 439376203;
			uParam0->f_11 = { 1200.338f, -568.1477f, 67.3878f };
			break;
		case 1:
			func_183(uParam0, iParam1);
			uParam0->f_5 = -862568936;
			uParam0->f_11 = { 1238.102f, -546.7609f, 66.5485f };
			break;
		case 2:
			func_183(uParam0, iParam1);
			uParam0->f_5 = -1361247578;
			uParam0->f_11 = { 1294.011f, -627.1522f, 58.9807f };
			break;
		case 3:
			func_183(uParam0, iParam1);
			uParam0->f_5 = -518330591;
			uParam0->f_11 = { 1330.112f, -709.0779f, 64.7788f };
			break;
		case 4:
			func_183(uParam0, iParam1);
			uParam0->f_5 = 1666706329;
			uParam0->f_11 = { 1174.01f, -520.5736f, 69.0551f };
			break;
		case 5:
			func_183(uParam0, iParam1);
			uParam0->f_5 = 618479763;
			uParam0->f_11 = { 627.306f, -1038.205f, 42.0511f };
			break;
		case 6:
			func_183(uParam0, iParam1);
			uParam0->f_5 = 916579356;
			uParam0->f_11 = { 675.5718f, -1121.435f, 50.7543f };
			break;
		case 7:
			func_183(uParam0, iParam1);
			uParam0->f_5 = -1544831314;
			uParam0->f_11 = { 799.3545f, -1190.935f, 42.9927f };
			break;
		case 8:
			func_183(uParam0, iParam1);
			uParam0->f_5 = -1524645610;
			uParam0->f_11 = { 753.5811f, -983.9583f, 47.8422f };
			break;
		case 9:
			func_183(uParam0, iParam1);
			uParam0->f_5 = 5765001;
			uParam0->f_11 = { 745.8436f, -1119.909f, 55.5229f };
			break;
		case 10:
			func_183(uParam0, iParam1);
			uParam0->f_5 = -147337997;
			uParam0->f_11 = { -963.4839f, 2238.298f, 342.2684f };
			break;
		case 11:
			func_183(uParam0, iParam1);
			uParam0->f_5 = 46195721;
			uParam0->f_11 = { -1100.64f, 2080.921f, 365.7759f };
			break;
		case 12:
			func_183(uParam0, iParam1);
			uParam0->f_5 = -41952889;
			uParam0->f_11 = { -1209.432f, 2421.632f, 309.8767f };
			break;
		case 13:
			func_183(uParam0, iParam1);
			uParam0->f_5 = -280740592;
			uParam0->f_11 = { -1280.937f, 2445.134f, 305.019f };
			break;
		case 14:
			func_183(uParam0, iParam1);
			uParam0->f_5 = -636874084;
			uParam0->f_11 = { -1340.472f, 2298.734f, 308.7317f };
			break;
		case 15:
			func_183(uParam0, iParam1);
			uParam0->f_5 = -1240479072;
			uParam0->f_11 = { -1159.649f, 2341.108f, 323.5332f };
			break;
		case 16:
			func_183(uParam0, iParam1);
			uParam0->f_5 = -1479922155;
			uParam0->f_11 = { -1329.47f, 2266.865f, 309.1315f };
			break;
		case 17:
			func_183(uParam0, iParam1);
			uParam0->f_5 = -1836252261;
			uParam0->f_11 = { -1202.59f, 2191.101f, 333.5445f };
			break;
		case 18:
			func_183(uParam0, iParam1);
			uParam0->f_5 = -2075236578;
			uParam0->f_11 = { -1171.686f, 2299.184f, 323.3623f };
			break;
		case 19:
			func_183(uParam0, iParam1);
			uParam0->f_5 = 1074322888;
			uParam0->f_11 = { -1394.394f, 2394.838f, 308.3089f };
			break;
	}
}

void func_134(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 10;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = -2109368060;
	func_168(uParam0);
	if (iParam1 < 5)
	{
		uParam0->f_20[0] = 1417207314;
		uParam0->f_27 = 18;
	}
	else
	{
		uParam0->f_20[0] = 1985854092;
		uParam0->f_27 = 0;
	}
	switch (iParam1)
	{
		case 0:
			func_170(uParam0, 2);
			func_170(uParam0, 3);
			uParam0->f_5 = 1070019252;
			uParam0->f_11 = { 2876.535f, 2181.409f, 156.7777f };
			break;
		case 1:
			func_170(uParam0, 2);
			func_170(uParam0, 3);
			uParam0->f_5 = -510012600;
			uParam0->f_11 = { 2808.358f, 2290.307f, 155.8015f };
			break;
		case 2:
			func_170(uParam0, 2);
			func_170(uParam0, 3);
			uParam0->f_5 = -250768090;
			uParam0->f_11 = { 2324.25f, 2143.964f, 211.2929f };
			break;
		case 3:
			func_170(uParam0, 2);
			func_170(uParam0, 3);
			uParam0->f_5 = 1057891329;
			uParam0->f_11 = { 2876.535f, 2181.409f, 156.7777f };
			break;
		case 4:
			func_170(uParam0, 2);
			func_170(uParam0, 3);
			uParam0->f_5 = 863129034;
			uParam0->f_11 = { 2489.669f, 2265.437f, 175.6015f };
			break;
		case 5:
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			uParam0->f_5 = -1100103111;
			uParam0->f_11 = { -957.019f, 1550.161f, 237.4414f };
			break;
		case 6:
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			uParam0->f_5 = -383805560;
			uParam0->f_11 = { -1023.774f, 1561.614f, 237.4295f };
			break;
		case 7:
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			uParam0->f_5 = -233104073;
			uParam0->f_11 = { -986.7993f, 1636.296f, 237.4295f };
			break;
		case 8:
			func_170(uParam0, 1);
			uParam0->f_5 = -604353467;
			uParam0->f_11 = { -874.8361f, 1499.423f, 245.7041f };
			break;
		case 9:
			func_170(uParam0, 1);
			uParam0->f_5 = 1641665016;
			uParam0->f_11 = { -919.2281f, 1482.48f, 245.1043f };
			break;
	}
}

void func_135(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 25;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = -646307557;
	if (iParam1 < 10)
	{
		uParam0->f_20[0] = -2117802919;
		uParam0->f_20[1] = 1417207314;
		uParam0->f_27 = 18;
	}
	else
	{
		uParam0->f_20[0] = 1417207314;
		uParam0->f_27 = 57;
	}
	switch (iParam1)
	{
		case 0:
			func_184(uParam0, iParam1);
			uParam0->f_5 = -1895828765;
			uParam0->f_11 = { 1649.598f, 1335.141f, 144.8913f };
			break;
		case 1:
			func_184(uParam0, iParam1);
			uParam0->f_5 = 1786489311;
			uParam0->f_11 = { 1711.248f, 1464.318f, 146.3869f };
			break;
		case 2:
			func_184(uParam0, iParam1);
			uParam0->f_5 = 1548029298;
			uParam0->f_11 = { 1569.279f, 1372.517f, 145.0414f };
			break;
		case 3:
			func_184(uParam0, iParam1);
			uParam0->f_5 = -718766281;
			uParam0->f_11 = { 1427.097f, 1701.411f, 197.8922f };
			break;
		case 4:
			func_184(uParam0, iParam1);
			uParam0->f_5 = -1212595111;
			uParam0->f_11 = { 1593.958f, 1646.358f, 143.5214f };
			break;
		case 5:
			func_184(uParam0, iParam1);
			uParam0->f_5 = -1283376151;
			uParam0->f_11 = { 1694.973f, 1740.234f, 188.4962f };
			break;
		case 6:
			func_184(uParam0, iParam1);
			uParam0->f_5 = -1525768444;
			uParam0->f_11 = { 1487.993f, 1066.912f, 182.3846f };
			break;
		case 7:
			func_184(uParam0, iParam1);
			uParam0->f_5 = 249590434;
			uParam0->f_11 = { 1401.922f, 1325.553f, 163.9692f };
			break;
		case 8:
			func_184(uParam0, iParam1);
			uParam0->f_5 = 9885199;
			uParam0->f_11 = { 1812.587f, 1193.924f, 215.9388f };
			break;
		case 9:
			func_184(uParam0, iParam1);
			uParam0->f_5 = 1343123829;
			uParam0->f_11 = { 1940.486f, 1389.066f, 177.8712f };
			break;
		case 10:
			func_184(uParam0, iParam1);
			uParam0->f_5 = -2039750752;
			uParam0->f_11 = { 127.6135f, 1824.788f, 199.2989f };
			break;
		case 11:
			func_184(uParam0, iParam1);
			uParam0->f_5 = -2028740368;
			uParam0->f_11 = { 160.7978f, 1748.951f, 192.5338f };
			break;
		case 12:
			func_184(uParam0, iParam1);
			uParam0->f_5 = 1508771493;
			uParam0->f_11 = { 128.1839f, 1871.354f, 200.8744f };
			break;
		case 13:
			func_184(uParam0, iParam1);
			uParam0->f_5 = 1820404683;
			uParam0->f_11 = { 185.3962f, 1824.202f, 200.2588f };
			break;
		case 14:
			func_184(uParam0, iParam1);
			uParam0->f_5 = 1332736425;
			uParam0->f_11 = { 196.2743f, 1749.555f, 195.3678f };
			break;
		case 15:
			func_184(uParam0, iParam1);
			uParam0->f_5 = 536875722;
			uParam0->f_11 = { 239.17f, 1914.014f, 204.8216f };
			break;
		case 16:
			func_184(uParam0, iParam1);
			uParam0->f_5 = 795259287;
			uParam0->f_11 = { 512.8569f, 1926.074f, 199.1983f };
			break;
		case 17:
			func_184(uParam0, iParam1);
			uParam0->f_5 = 20501824;
			uParam0->f_11 = { 325.2433f, 1902.083f, 200.069f };
			break;
		case 18:
			func_184(uParam0, iParam1);
			uParam0->f_5 = 320272636;
			uParam0->f_11 = { 360.4333f, 1843.854f, 185.1447f };
			break;
		case 19:
			func_184(uParam0, iParam1);
			uParam0->f_5 = 1135434088;
			uParam0->f_11 = { 506.2105f, 1883.957f, 201.9437f };
			break;
		case 20:
			func_184(uParam0, iParam1);
			uParam0->f_5 = 1976647087;
			uParam0->f_11 = { 253.8551f, 1705.438f, 187.3591f };
			break;
		case 21:
			func_184(uParam0, iParam1);
			uParam0->f_5 = -2028969939;
			uParam0->f_11 = { 320.4962f, 1736.16f, 192.2878f };
			break;
		case 22:
			func_184(uParam0, iParam1);
			uParam0->f_5 = 2065778767;
			uParam0->f_11 = { -29.8717f, 1716.412f, 179.3378f };
			break;
		case 23:
			func_184(uParam0, iParam1);
			uParam0->f_5 = -1385354006;
			uParam0->f_11 = { -20.6945f, 1632.488f, 162.0277f };
			break;
		case 24:
			func_184(uParam0, iParam1);
			uParam0->f_5 = -1602546938;
			uParam0->f_11 = { 480.1275f, 2070.224f, 235.143f };
			break;
	}
}

void func_136(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 3;
	uParam0->f_2 = 2;
	uParam0->f_7 = 2;
	uParam0->f_28[0] = -196458416;
	bVar0 = iParam1 >= 5;
	if (!bVar0)
	{
		uParam0->f_20[0] = 1985854092;
		uParam0->f_27 = 1;
	}
	else
	{
		uParam0->f_20[0] = -35871888;
		uParam0->f_27 = 1;
	}
	func_185(uParam0, iParam1, iParam2);
	switch (iParam1)
	{
		case 0:
			uParam0->f_5 = -1725684832;
			uParam0->f_11 = { 261.4861f, -558.9222f, 61.15959f };
			break;
		case 1:
			uParam0->f_5 = -1992129571;
			uParam0->f_11 = { 477.293f, -270.4016f, 143.0532f };
			break;
		case 2:
			uParam0->f_5 = 2064181094;
			uParam0->f_11 = { 178.3377f, -192.7462f, 126.5609f };
			break;
		case 3:
			uParam0->f_5 = 1983503816;
			uParam0->f_11 = { -138.1221f, -21.41103f, 95.08842f };
			break;
		case 4:
			uParam0->f_5 = 1603580030;
			uParam0->f_11 = { 788.4693f, -359.1041f, 88.02867f };
			break;
		case 5:
			uParam0->f_5 = 1591141935;
			uParam0->f_11 = { -2105.914f, -1658.808f, 139.2303f };
			break;
		case 6:
			uParam0->f_5 = 1382010177;
			uParam0->f_11 = { -2322.846f, -1606.925f, 147.5517f };
			break;
		case 7:
			uParam0->f_5 = -1315566672;
			uParam0->f_11 = { -2327.094f, -1401.05f, 142.4195f };
			break;
		case 8:
			uParam0->f_5 = 395106204;
			uParam0->f_11 = { -2004.499f, -1326.471f, 115.4162f };
			break;
		case 9:
			uParam0->f_5 = 88814361;
			uParam0->f_11 = { -2532.945f, -1409.852f, 145.3983f };
			break;
	}
}

void func_137(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 3;
	uParam0->f_2 = 2;
	uParam0->f_7 = 2;
	uParam0->f_28[0] = 970130440;
	if (iParam1 < 5)
	{
		uParam0->f_20[0] = -35871888;
		uParam0->f_20[1] = 1985854092;
		uParam0->f_27 = 57;
	}
	else
	{
		uParam0->f_20[0] = 1985854092;
		uParam0->f_20[1] = -2117802919;
		uParam0->f_27 = 57;
	}
	func_186(uParam0, iParam1, iParam2);
	switch (iParam1)
	{
		case 0:
			uParam0->f_5 = -44146172;
			uParam0->f_11 = { -4886.723f, -3659.611f, 23.51921f };
			break;
		case 1:
			uParam0->f_5 = -1882192159;
			uParam0->f_11 = { -3706.045f, -3561.407f, 47.211f };
			break;
		case 2:
			uParam0->f_5 = -1446495535;
			uParam0->f_11 = { -3997.887f, -3743.7f, 39.394f };
			break;
		case 3:
			uParam0->f_5 = -1153835596;
			uParam0->f_11 = { -4533.075f, -3761.288f, 13.8127f };
			break;
		case 4:
			uParam0->f_5 = 345870470;
			uParam0->f_11 = { -4165.463f, -3614.162f, 49.5309f };
			break;
		case 5:
			uParam0->f_5 = -1885586340;
			uParam0->f_11 = { 1612.212f, 2114.094f, 315.281f };
			break;
		case 6:
			uParam0->f_5 = 1366147128;
			uParam0->f_11 = { 1879.319f, 2050.416f, 269.9333f };
			break;
		case 7:
			uParam0->f_5 = 1740369108;
			uParam0->f_11 = { 1522.469f, 2192.855f, 333.81f };
			break;
		case 8:
			uParam0->f_5 = -416486532;
			uParam0->f_11 = { 693.7542f, 2222.729f, 222.769f };
			break;
		case 9:
			uParam0->f_5 = -1184690199;
			uParam0->f_11 = { 756.6907f, 2034.318f, 266.4209f };
			break;
	}
}

void func_138(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	uParam0->f_7 = 2;
	uParam0->f_28[0] = -405566878;
	func_168(uParam0);
	if (iParam1 < 5)
	{
		uParam0->f_27 = 24;
		uParam0->f_20[0] = -184283233;
	}
	else
	{
		uParam0->f_27 = 24;
		uParam0->f_20[0] = 48904803;
		uParam0->f_20[1] = -2090512547;
	}
	switch (iParam1)
	{
		case 0:
			uParam0->f_5 = -145880949;
			uParam0->f_11 = { 451.6826f, 1053.771f, 197.3474f };
			func_170(uParam0, 0);
			break;
		case 1:
			uParam0->f_5 = 1765108824;
			uParam0->f_11 = { 546.6983f, 939.2978f, 161.589f };
			func_170(uParam0, 0);
			break;
		case 2:
			uParam0->f_5 = 1620892455;
			uParam0->f_11 = { -142.6579f, 1231.128f, 164.5134f };
			func_170(uParam0, 0);
			break;
		case 3:
			uParam0->f_5 = 1380531840;
			uParam0->f_11 = { 411.3364f, 1329.074f, 180.39f };
			func_170(uParam0, 0);
			break;
		case 4:
			uParam0->f_5 = -1542790654;
			uParam0->f_11 = { 473.7581f, 1011.376f, 173.0766f };
			func_170(uParam0, 0);
			break;
		case 5:
			uParam0->f_5 = -1733556405;
			uParam0->f_11 = { -4209.333f, -2677.593f, 5.4303f };
			func_170(uParam0, 1);
			break;
		case 6:
			uParam0->f_5 = -478503693;
			uParam0->f_11 = { -4260.617f, -2412.103f, 23.6335f };
			func_170(uParam0, 1);
			break;
		case 7:
			uParam0->f_5 = -156122271;
			uParam0->f_11 = { -4620.429f, -2660.025f, -5.9085f };
			func_170(uParam0, 1);
			break;
		case 8:
			uParam0->f_5 = 1073468916;
			uParam0->f_11 = { -4371.066f, -3137.245f, -2.59f };
			func_170(uParam0, 1);
			break;
		case 9:
			uParam0->f_5 = -249481152;
			uParam0->f_11 = { -4104.459f, -2061.22f, 4.8147f };
			func_170(uParam0, 1);
			break;
	}
}

void func_139(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 11;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_168(uParam0);
	switch (iParam1)
	{
		case 0:
			func_169(uParam0);
			uParam0->f_5 = -206668292;
			uParam0->f_11 = { -2586.923f, -264.5349f, 161.6671f };
			break;
		case 1:
			func_169(uParam0);
			uParam0->f_5 = -2125063863;
			uParam0->f_11 = { -2578.181f, 388.9668f, 148.3721f };
			break;
		case 2:
			func_169(uParam0);
			uParam0->f_5 = -2012469579;
			uParam0->f_11 = { -2196.576f, 468.8412f, 119.5676f };
			break;
		case 3:
			func_169(uParam0);
			uParam0->f_5 = 108841496;
			uParam0->f_11 = { -1637.2f, -1513.234f, 82.6688f };
			break;
		case 4:
			func_169(uParam0);
			uParam0->f_5 = 415657643;
			uParam0->f_11 = { -825.3087f, -1804.951f, 59.0313f };
			break;
		case 5:
			func_169(uParam0);
			uParam0->f_5 = 1133170861;
			uParam0->f_11 = { 1786.915f, 1588.926f, 167.4663f };
			break;
		case 6:
			func_169(uParam0);
			uParam0->f_5 = 2120009296;
			uParam0->f_11 = { 1959.894f, 1387.251f, 179.786f };
			break;
		case 7:
			func_169(uParam0);
			uParam0->f_5 = 689773522;
			uParam0->f_11 = { 637.5925f, 2099.455f, 222.0308f };
			break;
		case 8:
			func_169(uParam0);
			uParam0->f_5 = -258135345;
			uParam0->f_11 = { 1296.321f, 1161.685f, 150.1379f };
			break;
		case 9:
			func_169(uParam0);
			uParam0->f_5 = 2107537913;
			uParam0->f_11 = { -2100.247f, -1372.887f, 127.7423f };
			break;
		case 10:
			func_169(uParam0);
			uParam0->f_5 = -1477292384;
			uParam0->f_11 = { -2205.016f, -1584.145f, 148.3944f };
			break;
	}
}

void func_140(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_168(uParam0);
	switch (iParam1)
	{
		case 0:
			func_169(uParam0);
			uParam0->f_5 = -274965770;
			uParam0->f_11 = { -1109.718f, 2104.703f, 361.4368f };
			break;
		case 1:
			func_169(uParam0);
			uParam0->f_5 = 1652259747;
			uParam0->f_11 = { -4300.761f, -3445.602f, 33.26603f };
			break;
		case 2:
			func_169(uParam0);
			uParam0->f_5 = -743720569;
			uParam0->f_11 = { -3895.461f, -2492.511f, -11.57848f };
			break;
		case 3:
			func_169(uParam0);
			uParam0->f_5 = -1200331578;
			uParam0->f_11 = { -2190.508f, -2867.223f, 25.40727f };
			break;
		case 4:
			func_169(uParam0);
			uParam0->f_5 = -1026512984;
			uParam0->f_11 = { -2083.893f, -1412.552f, 131.8581f };
			break;
		case 5:
			func_169(uParam0);
			uParam0->f_5 = -1017773316;
			uParam0->f_11 = { -897.5998f, 535.8544f, 58.2352f };
			break;
		case 6:
			func_169(uParam0);
			uParam0->f_5 = 303940131;
			uParam0->f_11 = { 280.7151f, 263.9585f, 112.8886f };
			break;
		case 7:
			func_169(uParam0);
			uParam0->f_5 = 1273284251;
			uParam0->f_11 = { 1548.084f, 1355.097f, 146.0557f };
			break;
		case 8:
			func_169(uParam0);
			uParam0->f_5 = -950817569;
			uParam0->f_11 = { 2652.989f, 1189.503f, 118.7033f };
			break;
		case 9:
			func_169(uParam0);
			uParam0->f_5 = -910888222;
			uParam0->f_11 = { 1509.102f, -2101.449f, 45.3134f };
			break;
	}
}

void func_141(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 7;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	func_168(uParam0);
	switch (iParam1)
	{
		case 0:
			func_169(uParam0);
			uParam0->f_5 = -803667719;
			uParam0->f_11 = { -1499.397f, -553.9472f, 131.8198f };
			break;
		case 1:
			func_169(uParam0);
			uParam0->f_5 = -822411587;
			uParam0->f_11 = { -1760.55f, 268.6243f, 118.6948f };
			break;
		case 2:
			func_169(uParam0);
			uParam0->f_5 = -1331314157;
			uParam0->f_11 = { -2762.128f, -158.0485f, 150.8974f };
			break;
		case 3:
			func_169(uParam0);
			uParam0->f_5 = -1580456864;
			uParam0->f_11 = { -719.5702f, -756.9052f, 49.81378f };
			break;
		case 4:
			func_170(uParam0, 0);
			func_170(uParam0, 2);
			uParam0->f_5 = -102469545;
			uParam0->f_11 = { 951.5258f, -1248.371f, 53.86922f };
			break;
		case 5:
			func_170(uParam0, 0);
			func_170(uParam0, 2);
			uParam0->f_5 = 70321392;
			uParam0->f_11 = { 1088.291f, -1418.599f, 55.54557f };
			break;
		case 6:
			func_170(uParam0, 0);
			func_170(uParam0, 2);
			uParam0->f_5 = 529087392;
			uParam0->f_11 = { 1289.693f, -1603.704f, 64.23989f };
			break;
	}
}

void func_142(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 8;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	switch (iParam1)
	{
		case 0:
			func_187(uParam0, iParam1);
			uParam0->f_5 = -418287183;
			uParam0->f_11 = { -2081.231f, -2774.597f, 77.5683f };
			break;
		case 1:
			func_187(uParam0, iParam1);
			uParam0->f_5 = -1127015115;
			uParam0->f_11 = { -2258.97f, -2879.726f, 25.0912f };
			break;
		case 2:
			func_187(uParam0, iParam1);
			uParam0->f_5 = -1853700459;
			uParam0->f_11 = { -2925.017f, -2769.882f, 95.6414f };
			break;
		case 3:
			func_187(uParam0, iParam1);
			uParam0->f_5 = 529883832;
			uParam0->f_11 = { -2648.38f, -2977.772f, 76.4237f };
			break;
		case 4:
			func_187(uParam0, iParam1);
			uParam0->f_5 = -204230900;
			uParam0->f_11 = { -2323.921f, -2074.845f, 88.1254f };
			break;
		case 5:
			func_187(uParam0, iParam1);
			uParam0->f_5 = -1938530367;
			uParam0->f_11 = { -3455.578f, -2264.7f, 4.7142f };
			break;
		case 6:
			func_187(uParam0, iParam1);
			uParam0->f_5 = 1968802033;
			uParam0->f_11 = { -3581.218f, -3650.89f, -12.8679f };
			break;
		case 7:
			func_187(uParam0, iParam1);
			uParam0->f_5 = -2098551789;
			uParam0->f_11 = { -5254.539f, -4050.37f, -3.6288f };
			break;
	}
}

void func_143(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 35:
			uParam0->f_8 = -468635158;
			break;
		case 36:
			uParam0->f_8 = 1112069699;
			break;
		case 37:
			uParam0->f_8 = 661147828;
			break;
		case 38:
			uParam0->f_8 = 899082205;
			break;
		case 39:
			uParam0->f_8 = 987333815;
			break;
		case 40:
			uParam0->f_8 = -315961129;
			break;
		case 41:
			uParam0->f_8 = -139081918;
			break;
		case 42:
			uParam0->f_8 = 1604238189;
			break;
		case 43:
			uParam0->f_8 = 362795228;
			break;
	}
	iVar0 = func_86(iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	if ((iParam1 == 41 || iParam1 == 42) || iParam1 == 40)
	{
		uParam0->f_7 = 1;
	}
	else if (iParam1 == 43)
	{
		uParam0->f_7 = 2;
	}
	*uParam0 = func_188(iVar0);
	uParam0->f_1 = 0;
	uParam0->f_6 = 2;
	func_172(uParam0, 32);
	if (iParam2 != -1)
	{
		uParam0->f_9 = func_190(func_189(iVar0), iParam2);
		uParam0->f_15[0] = func_191(func_189(iVar0), iParam2);
		uParam0->f_5 = func_192(iVar0, iParam2);
		uParam0->f_11 = { func_193(iVar0, iParam2) };
	}
}

Vector3 func_144(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false, false);
}

void func_145(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	uParam0->f_4 = 1;
	uParam0->f_6 = uParam1;
	uParam0->f_10 = iParam2;
	uParam0->f_11 = iParam4;
	uParam0->f_13 = _0x901e0dc25080c8b9(player_id());
	*uParam0->f_21[0] = { Global_35 };
	uParam0->f_7 = iParam3;
}

void func_146(var uParam0)
{
	if (!network_is_game_in_progress())
	{
		return;
	}
	if (&Global_1051252->f_16[13] == 0 || !_does_thread_exist(&(Global_1051252->f_16[13])))
	{
		return;
	}
	*uParam0 = 175;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	_trigger_script_event_2(uParam0, 40, 5, &(Global_1051252->f_16[13]));
	func_194(uParam0, uParam0->f_1);
}

bool func_147(int iParam0, int iParam1)
{
	return func_195(iParam0->f_25, iParam1);
}

int func_148(var uParam0, var uParam1, int iParam2)
{
	iVar0 = uParam0;
	iVar1 = func_196(uParam1->f_3, &((*Global_1268861)[iParam2]->f_56[iVar0]));
	if (iVar1 == 0)
	{
		iVar2 = (uParam1->f_1 - 1);
		while (iVar2 >= 0)
		{
			if (is_bit_set(uParam1->f_3, iVar2))
			{
				return iVar2;
			}
			iVar2 = (iVar2 + -1);
		}
		return 0;
	}
	return func_197(iVar1);
}

int func_149(int iParam0, int iParam1, var uParam2)
{
	iVar0 = iParam0;
	iVar19 = -1;
	iVar20 = 0;
	while (iVar20 <= 31)
	{
		iVar22 = int_to_playerindex(iVar20);
		if (!network_is_player_active(iVar22))
		{
		}
		else if (func_198(func_144(iVar22), uParam2->f_11) > Global_1901947->f_236.f_62)
		{
		}
		else
		{
			iVar21 = func_196(uParam2->f_3, &((*Global_1268861)[iVar20]->f_56[iVar0]));
			iVar19 = (iVar19 && iVar21);
			iVar18 = func_199(iVar21, 0);
			if (iVar18 != -1)
			{
				uVar1[iVar18] = &uVar1[iVar18] + 1;
			}
		}
		iVar20++;
	}
	if (func_200(iVar19) > 0)
	{
		iVar23 = func_150(iVar19, uParam2->f_1, 1, 0);
		return iVar23;
	}
	else
	{
		iVar24 = -1;
		iVar25 = -1;
		iVar18 = 0;
		while (iVar18 <= 15)
		{
			if (&uVar1[iVar18] == 0)
			{
			}
			else if (&uVar1[iVar18] > iVar25)
			{
				iVar24 = iVar18;
				iVar25 = &uVar1[iVar18];
			}
			iVar18++;
		}
		if (iVar24 != -1)
		{
			return iVar24;
		}
	}
	return func_201(iParam0, iParam1);
}

int func_150(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam1 > 32)
	{
	}
	iVar1 = func_202(iParam3);
	if (iParam2 == 0)
	{
		iVar0 = get_random_int_in_range(iVar1, iParam1);
		return iVar0;
	}
	iVar2 = iVar1;
	while (iVar2 <= ((iVar1 + iParam1) - 1))
	{
		if ((iParam2 == 1 && is_bit_set(iParam0, iVar2)) || (iParam2 == 2 && !is_bit_set(iParam0, iVar2)))
		{
			iVar4[iVar3] = iVar2;
			iVar3++;
		}
		iVar2++;
	}
	if (iVar3 == 0)
	{
		return -1;
	}
	iVar0 = get_random_int_in_range(0, iVar3);
	return &(iVar4[iVar0]);
}

void func_151(var uParam0, int iParam1)
{
	uParam0->f_9 = 2;
	*uParam0 = { func_203(iParam1, 8) };
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
}

int func_152(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1881122909;
		case 2:
			return 1746254613;
		case 3:
			return -210940392;
		case 4:
			return -337883659;
		case 6:
			return -2127851115;
		case 7:
			return -1515832348;
		case 5:
			return -392050235;
		case 11:
			return -16753530;
		case 8:
			return -1210919694;
		case 9:
			return -1628357986;
		case 10:
			return -1054322328;
		case 12:
			return -1488065830;
		case 13:
			return 1903114091;
		case 14:
			return 1623440542;
		case 15:
			return -726533106;
		case 16:
			return 911021683;
		case 17:
			return 338631142;
		case 18:
			return -1896431036;
		case 19:
			return 1875318885;
		case 20:
			return 518160998;
		case 31:
			return 681896882;
		case 21:
			return 409019465;
		case 28:
			return -1877273045;
		case 24:
			return -510630761;
		case 25:
			return 1558203524;
		case 22:
			return -1347839684;
		case 23:
			return 569695338;
		case 29:
			return 617627179;
		case 26:
			return -721827460;
		case 30:
			return -502572877;
		case 27:
			return 1541283230;
		case 32:
			return 1773252799;
		case 33:
			return -1209093440;
		case 34:
			return 901959776;
		default:
			break;
	}
	return 0;
}

int func_153(int iParam0)
{
	return 2452;
}

int func_154(struct<2> Param0, var uParam2)
{
	iVar0 = (round(absf(Param0)) & 32767 || shift_left(round(absf(Param0.f_1)) & 32767, 15));
	if (Param0 > 0f)
	{
		iVar0 |= 1073741824;
	}
	if (Param0.f_1 > 0f)
	{
		iVar0 |= -2147483648;
	}
	return iVar0;
}

bool func_155(var uParam0)
{
	return *uParam0 == uParam0->f_2;
}

bool func_156(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_155(uParam0))
	{
		return false;
	}
	if (!func_204(&(uParam1->f_8)))
	{
		return false;
	}
	if (uParam1->f_2 == -1)
	{
		return false;
	}
	if (uParam1->f_2 == 5)
	{
		uParam1->f_3 = player_id();
	}
	if (uParam1->f_5 == -1)
	{
		return false;
	}
	if (uParam1->f_8 != uParam1->f_8.f_5.f_9)
	{
		return false;
	}
	iVar0 = func_205(uParam0, uParam1);
	if (iVar0 >= 0)
	{
		return false;
	}
	switch (uParam1->f_5)
	{
		case 0:
		case 1:
		case 3:
		default:
			break;
			if (!func_206(uParam1, bParam2, iParam3, iParam4, iParam5, iParam6))
			{
				return false;
			}
			break;
	}
	uParam1->f_7 = get_network_time_accurate();
	iVar1 = ((uParam0->f_1 + *uParam0) % uParam0->f_2);
	uParam1->f_4 = iVar1;
	*uParam0->f_3[iVar1] = { *uParam1 };
	func_207(uParam0->f_3[iVar1], 0);
	*uParam0++;
	return true;
}

void func_157(var uParam0)
{
	Var0.f_5 = -1;
	Var0.f_5.f_1 = -1;
	Var0.f_5.f_2 = -1;
	Var0.f_5.f_3 = 255;
	Var0.f_5.f_4 = -1;
	Var0.f_5.f_5 = -1;
	Var0.f_5.f_6 = -1;
	Var0.f_5.f_8 = 2;
	Var0.f_5.f_8.f_1 = -1;
	Var0.f_5.f_8.f_5 = -1;
	Var0.f_5.f_8.f_5.f_1 = -1;
	Var0.f_5.f_8.f_5.f_3 = -1;
	Var0.f_5.f_8.f_5.f_4 = -1;
	Var0.f_5.f_8.f_5.f_5 = -1;
	Var0.f_5.f_8.f_5.f_6 = -1;
	Var0.f_5.f_8.f_5.f_6.f_1 = -1;
	Var0.f_5.f_8.f_5.f_9 = 2;
	Var0.f_5.f_23.f_1 = 1024;
	Var0.f_5.f_23.f_4 = -15;
	Var0.f_5.f_23.f_5 = 255;
	Var0.f_5.f_23.f_8 = 1;
	Var0.f_5.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_5.f_23.f_13 = -1;
	Var0.f_5 = { *uParam0 };
	Var0.f_4 = 0;
	func_209(&Var0, func_208(0, 8));
}

int func_158(int iParam0)
{
	iVar0 = -1;
	if (func_69(&Var1, iParam0))
	{
		iVar0 = ((func_210() - _0xe13634bb6baf0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

bool func_159(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = network_player_id_to_int();
	}
	return func_104((*Global_1268861)[iParam1]->f_94, iParam0);
}

void func_160(int iParam0)
{
	Global_1272030->f_3394 = 0;
	iVar0 = Global_1272030->f_3393;
	iVar0++;
	if (iVar0 == 44)
	{
		*iParam0 = 1;
	}
	else
	{
		Global_1272030->f_3393 = iVar0;
	}
}

void func_161(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar1 = iVar2;
	fVar0 = (fVar0 + func_211(&iVar1, iParam0, iParam1, iParam2, iParam3));
	if (iVar1 != 0)
	{
		if (func_212(iVar1))
		{
			iVar3 = network_player_id_to_int();
			if (&(*Global_1268861)[iVar3]->f_95[iParam3->f_7] < func_213(iParam3->f_7))
			{
				if (!func_30(&(Global_1272030->f_3400[iParam3->f_7])) || func_31(&(Global_1272030->f_3400[iParam3->f_7])) >= Global_1901947->f_236.f_71)
				{
					(*Global_1268861)[iVar3]->f_95[iParam3->f_7] = &(*Global_1268861)[iVar3]->f_95[iParam3->f_7] + 1;
					func_91(Global_1272030->f_3400[iParam3->f_7]);
				}
			}
		}
		fVar0 = -1f;
	}
	else if (fVar0 > Global_1272030->f_3397)
	{
		Global_1272030->f_3397 = fVar0;
		Global_1272030->f_3396 = iParam2;
	}
	(*Global_1272030)[iParam2]->f_3 = iVar1;
	if ((*Global_1272030)[iParam2]->f_1 < Global_1296859->f_21)
	{
		func_214(iParam2);
		(*Global_1272030)[iParam2]->f_1 = 0;
		(*Global_1272030)[iParam2]->f_2 = 0;
	}
}

int func_162(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -88129556;
		case 2:
			return 1285278823;
		case 14:
			return 1990184729;
		case 4:
			return 1374143159;
		case 5:
			return 1983508419;
		case 6:
			return -174599426;
		case 7:
			return -1565506973;
		case 8:
			return 1332057400;
		case 9:
			return 725557162;
		case 10:
			return 9860771;
		case 11:
			return -189356331;
		case 12:
			return -1552492203;
		case 13:
			return 1780085540;
		case 3:
			return 1067005312;
		case 15:
			return -765620960;
		case 16:
			return 283234434;
		case 17:
			return 1186500977;
		case 18:
			return 696163029;
		case 19:
			return 1592070424;
		case 20:
			return 1301263422;
		case 31:
			return -1550976169;
		case 21:
			return -1276336942;
		case 28:
			return -19227065;
		case 25:
			return 1829377792;
		case 24:
			return -1667542940;
		case 32:
			return -753359492;
		case 22:
			return -2112360007;
		case 29:
			return -1985396409;
		case 26:
			return -496298354;
		case 30:
			return -1373797819;
		case 27:
			return -2051655108;
		case 33:
			return -268685349;
		case 34:
			return -2047817190;
		case 23:
			return 257784569;
		default:
			break;
	}
	return 0;
}

struct<2> func_163(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_164(var uParam0, int iParam1, int iParam2)
{
	if (func_215(iParam1, iParam2))
	{
		func_216(uParam0, iParam1, 8192, "host");
	}
}

void func_165(var uParam0, int iParam1, int iParam2)
{
	if (func_217(iParam1, iParam2))
	{
		(*Global_1266405)[iParam1]->f_1++;
	}
	if ((*Global_1266405)[iParam1]->f_1 > 7)
	{
		func_216(uParam0, iParam1, 4096, "host");
	}
}

void func_166(var uParam0, int iParam1)
{
	fVar0 = Global_1901947->f_236.f_60;
	if (fVar0 < 1f)
	{
		fVar2 = 0f;
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (!network_is_player_active(int_to_playerindex(iVar1)))
			{
			}
			else if ((*Global_1268861)[iVar1]->f_92 == iParam1)
			{
				fVar2 = (*Global_1268861)[iVar1]->f_93;
			}
			else
			{
				iVar1++;
			}
		}
		if (func_30(Global_1266405[iParam1]) && func_31(Global_1266405[iParam1]) < Global_1901947->f_236.f_56)
		{
			func_216(uParam0, iParam1, 32, "host");
			func_91((*Global_1266405)[iParam1]);
			return;
		}
		fVar3 = get_random_float_in_range(0f, 1f);
		fVar4 = func_218(0f, 1f, (fVar2 / 1.5f));
		fVar5 = (fVar0 + (fVar4 * (1f - fVar0)));
		if (fVar2 < 1.5f && fVar3 > fVar5)
		{
			Global_1266405->f_2452.f_2++;
			if (Global_1266405->f_2452.f_2 < 10)
			{
				func_216(uParam0, iParam1, 32, "host");
				func_91((*Global_1266405)[iParam1]);
			}
			else
			{
				func_33((*Global_1266405)[iParam1]);
				Global_1266405->f_2452.f_2 = 0;
			}
		}
		else
		{
			func_33((*Global_1266405)[iParam1]);
			Global_1266405->f_2452.f_2 = 0;
		}
	}
}

void func_167(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_219(uParam0);
			break;
		case 1:
			func_219(uParam0);
			break;
		case 2:
			func_219(uParam0);
			break;
		case 3:
			func_220(uParam0);
			break;
		case 4:
			func_219(uParam0);
			break;
		case 5:
			func_219(uParam0);
			break;
		case 6:
			func_220(uParam0);
			break;
		case 7:
			func_220(uParam0);
			break;
		case 8:
			func_220(uParam0);
			break;
		case 9:
			func_219(uParam0);
			break;
		default:
			func_169(uParam0);
			func_168(uParam0);
			break;
	}
}

void func_168(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_2 - 1))
	{
		func_171(uParam0, iVar0);
		iVar0++;
	}
}

void func_169(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_1 - 1))
	{
		func_170(uParam0, iVar0);
		iVar0++;
	}
}

void func_170(var uParam0, int iParam1)
{
	set_bit(&(uParam0->f_3), iParam1);
}

void func_171(var uParam0, int iParam1)
{
	set_bit(&(uParam0->f_4), iParam1);
}

void func_172(var uParam0, int iParam1)
{
	func_221(&(uParam0->f_25), iParam1);
}

void func_173(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_171(uParam0, 0);
			break;
		case 1:
		case 2:
			func_171(uParam0, 1);
			func_171(uParam0, 2);
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			func_171(uParam0, 0);
			func_171(uParam0, 2);
			break;
		case 8:
			func_171(uParam0, 1);
			break;
		case 9:
		case 10:
		case 11:
			func_171(uParam0, 1);
			break;
		default:
			func_168(uParam0);
			break;
	}
}

void func_174(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_222(uParam0);
			break;
		case 1:
			func_223(uParam0);
			break;
		case 2:
			func_224(uParam0);
			break;
		case 3:
			func_225(uParam0);
			break;
		default:
			func_169(uParam0);
			func_168(uParam0);
			break;
	}
}

int func_175(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return (*Global_1134390)[iVar0]->f_38.f_3;
	}
	return -1;
}

Vector3 func_176(int iParam0)
{
	if (!func_226(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return (*Global_1131196)[iParam0]->f_20;
}

void func_177(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_227(uParam0);
			break;
		case 1:
		case 2:
			func_228(uParam0);
			break;
		case 3:
		case 4:
			func_229(uParam0);
			break;
		default:
			func_168(uParam0);
			break;
	}
	func_169(uParam0);
}

void func_178(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_171(uParam0, 0);
			func_171(uParam0, 2);
			break;
		case 1:
			func_171(uParam0, 1);
			func_171(uParam0, 3);
			break;
		default:
			func_169(uParam0);
			func_168(uParam0);
			break;
	}
}

void func_179(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_170(uParam0, 2);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_170(uParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_170(uParam0, 0);
			break;
		default:
			func_170(uParam0, 0);
			break;
	}
	func_168(uParam0);
}

void func_180(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			func_170(uParam0, 0);
			break;
		case 4:
		case 5:
		case 6:
		case 7:
			func_170(uParam0, 1);
			break;
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			func_170(uParam0, 2);
			break;
		default:
			func_169(uParam0);
			break;
	}
	func_168(uParam0);
}

void func_181(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_170(uParam0, 0);
			func_171(uParam0, 1);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_170(uParam0, 1);
			func_171(uParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_170(uParam0, 2);
			func_171(uParam0, 1);
			break;
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			func_170(uParam0, 3);
			func_171(uParam0, 0);
			break;
	}
}

void func_182(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
			func_170(uParam0, 0);
			func_171(uParam0, 0);
			break;
		case 2:
			func_170(uParam0, 1);
			func_171(uParam0, 0);
			break;
		case 3:
		case 4:
			func_170(uParam0, 2);
			func_171(uParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_170(uParam0, 3);
			func_171(uParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_170(uParam0, 4);
			func_171(uParam0, 1);
			break;
	}
}

void func_183(var uParam0, int iParam1)
{
	switch (iParam1)
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
		case 9:
			func_170(uParam0, 3);
			break;
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
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			func_170(uParam0, 2);
			break;
		default:
			func_169(uParam0);
			break;
	}
	func_168(uParam0);
}

void func_184(var uParam0, int iParam1)
{
	switch (iParam1)
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
		case 9:
			func_170(uParam0, 3);
			break;
		case 10:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 20:
		case 21:
		case 24:
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			func_170(uParam0, 2);
			break;
		case 11:
		case 17:
		case 18:
		case 19:
		case 22:
		case 23:
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			break;
		default:
			func_169(uParam0);
			break;
	}
	func_168(uParam0);
}

void func_185(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_171(uParam0, 0);
			func_170(uParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_171(uParam0, 1);
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			func_170(uParam0, 2);
			break;
		default:
			func_171(uParam0, 0);
			func_170(uParam0, 0);
			break;
	}
}

void func_186(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_171(uParam0, 0);
			func_170(uParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_171(uParam0, 1);
			func_170(uParam0, 0);
			func_170(uParam0, 1);
			break;
		default:
			func_171(uParam0, 0);
			func_170(uParam0, 0);
			break;
	}
}

void func_187(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_168(uParam0);
			func_169(uParam0);
			break;
		default:
			func_168(uParam0);
			func_169(uParam0);
			break;
	}
}

int func_188(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return (*Global_1257541)[iParam0]->f_3;
}

int func_189(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1257541[iParam0];
}

var func_190(int iParam0, int iParam1)
{
	if (func_69(&Var1, iParam0) && func_230(&Var1, iParam1))
	{
		func_70(Var1, 1099008783, &uVar0, 0);
	}
	return uVar0;
}

int func_191(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_69(&Var1, iParam0) && func_230(&Var1, iParam1))
	{
		func_70(Var1, -1052341598, &iVar0, 0);
	}
	return iVar0;
}

int func_192(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_231(iParam0, iParam1);
	return &(Global_1257541->f_451[iVar0]);
}

Vector3 func_193(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = func_231(iParam0, iParam1);
	return Global_1257541->f_451[iVar0]->f_3;
}

void func_194(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = func_232(iVar0);
		if (func_104(uParam0->f_7, iVar1))
		{
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 <= 5)
	{
		iVar2++;
	}
}

bool func_195(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_196(int iParam0, var uParam1)
{
	iVar0 = (uParam1 && iParam0);
	return iVar0 ^ iParam0;
}

int func_197(int iParam0)
{
	iParam0 = (iParam0 && -iParam0);
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return 0;
		case 2:
			return 1;
		case 4:
			return 2;
		case 8:
			return 3;
		case 16:
			return 4;
		case 32:
			return 5;
		case 64:
			return 6;
		case 128:
			return 7;
		case 256:
			return 8;
		case 512:
			return 9;
		case 1024:
			return 10;
		case 2048:
			return 11;
		case 4096:
			return 12;
		case 8192:
			return 13;
		case 16384:
			return 14;
		case 32768:
			return 15;
		case 65536:
			return 16;
		case 131072:
			return 17;
		case 262144:
			return 18;
		case 524288:
			return 19;
		case 1048576:
			return 20;
		case 2097152:
			return 21;
		case 4194304:
			return 22;
		case 8388608:
			return 23;
		case 16777216:
			return 24;
		case 33554432:
			return 25;
		case 67108864:
			return 26;
		case 134217728:
			return 27;
		case 268435456:
			return 28;
		case 536870912:
			return 29;
		case 1073741824:
			return 30;
	}
	return -1;
}

float func_198(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

int func_199(int iParam0, int iParam1)
{
	iVar0 = iParam1;
	while (iVar0 <= 31)
	{
		if (is_bit_set(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_200(int iParam0)
{
	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

int func_201(int iParam0, int iParam1)
{
	Var0.f_10 = 1106247680;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	func_84(&Var0, iParam0, iParam1, -1, 255);
	return func_150(Var0.f_3, Var0.f_1, 1, 0);
}

int func_202(int iParam0)
{
	iVar0 = 0;
	uVar1 = iParam0;
	if (is_bit_set(iParam0, 31))
	{
		iVar0++;
		iParam0 ^= -1;
	}
	while (iParam0 > 1)
	{
		iParam0 = shift_right(iParam0, 1);
		iVar0++;
	}
	return iVar0;
}

struct<2> func_203(int iParam0, int iParam1)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = iParam1;
	switch (iParam1)
	{
		case 2:
			Var0.f_1 = func_233(iParam0, &(Global_1071686->f_636), func_66(iParam1));
			break;
		case 3:
			Var0.f_1 = func_233(iParam0, &(Global_1071686->f_636.f_602), func_66(iParam1));
			break;
		case 4:
			Var0.f_1 = func_233(iParam0, &(Global_1071686->f_636.f_2104), func_66(iParam1));
			break;
		case 5:
			Var0.f_1 = func_233(iParam0, &(Global_1071686->f_636.f_12606), func_66(iParam1));
			break;
		case 6:
			Var0.f_1 = func_233(iParam0, &(Global_1071686->f_636.f_12908), func_66(iParam1));
			break;
		case 7:
			Var0.f_1 = func_233(iParam0, &(Global_1071686->f_636.f_15910), func_66(iParam1));
			break;
		case 8:
			Var0.f_1 = func_233(iParam0, &(Global_1071686->f_636.f_16512), func_66(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_234();
	}
	return Var0;
}

bool func_204(var uParam0)
{
	if (uParam0->f_1 == -1)
	{
		return false;
	}
	if (!func_235(&(uParam0->f_5)))
	{
		return false;
	}
	return true;
}

int func_205(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		iVar1 = ((uParam0->f_1 + iVar0) % uParam0->f_2);
		if (func_236(uParam1, uParam0->f_3[iVar1]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_206(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var33 = -1;
	Var33.f_1 = -1;
	if (func_29(uParam0->f_8.f_5))
	{
		Var33 = { uParam0->f_8.f_5 };
	}
	else if (func_29(uParam0->f_8.f_5.f_6))
	{
		Var33 = { uParam0->f_8.f_5.f_6 };
	}
	else
	{
		return true;
	}
	bVar35 = false;
	if (func_237(uParam0->f_8.f_2))
	{
		bVar35 = true;
	}
	else
	{
		bVar35 = false;
	}
	if (bParam1)
	{
		Var0.f_25 = iParam2;
		Var0.f_26 = iParam3;
		Var0.f_27 = iParam4;
		Var0.f_28 = iParam5;
	}
	else if (!func_239(func_238(Var33), &Var0))
	{
		return false;
	}
	if (Var0.f_25 <= 0 || Var0.f_25 > 50)
	{
		if (Var0.f_25 != 0)
		{
		}
		iVar36[0] = 0;
	}
	else
	{
		iVar36[0] = 1;
	}
	if (Var0.f_26 <= 0 || Var0.f_26 > 10)
	{
		if (Var0.f_26 != 0)
		{
		}
		iVar36[1] = 0;
	}
	else
	{
		iVar36[1] = 1;
	}
	if (Var0.f_27 <= 0 || Var0.f_27 > 25)
	{
		if (Var0.f_27 != 0)
		{
		}
		iVar36[2] = 0;
	}
	else
	{
		iVar36[2] = 1;
	}
	if (Var0.f_28 <= 0 || Var0.f_28 > 10)
	{
		if (Var0.f_28 != 0)
		{
		}
		iVar36[3] = 0;
	}
	else
	{
		iVar36[3] = 1;
	}
	if (bVar35)
	{
		iVar43 = get_num_reserved_mission_peds(1);
		iVar44 = get_num_reserved_mission_vehicles(1);
		iVar45 = get_num_reserved_mission_objects(1);
		iVar46 = _0x62be3ecc79fbd004(1);
	}
	else
	{
		_0x5e71e72a94985214(uParam0->f_8.f_2, 0, &iVar43, &iVar44, &iVar45, &iVar46);
	}
	iVar41 = 0;
	while (iVar41 < 4)
	{
		iVar47 = iVar41;
		if (iVar47 == -1)
		{
		}
		else if (!&iVar36[iVar41])
		{
		}
		else
		{
			switch (iVar47)
			{
				case 0:
					iVar42 = (get_max_num_network_peds() - iVar43);
					if (iVar42 < Var0.f_25)
					{
						return false;
					}
					break;
					break;
				case 1:
					iVar42 = (get_max_num_network_vehicles() - iVar44);
					if (iVar42 < Var0.f_26)
					{
						return false;
					}
					break;
					break;
				case 2:
					iVar42 = (get_max_num_network_objects() - iVar45);
					if (iVar42 < Var0.f_27)
					{
						return false;
					}
					break;
					break;
				case 3:
					iVar42 = (get_max_num_network_pickups() - iVar46);
					if (iVar42 < Var0.f_28)
					{
						return false;
					}
					break;
					break;
			}
		}
		iVar41++;
	}
	return true;
}

void func_207(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

var func_208(int iParam0, int iParam1)
{
	return func_240(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_209(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 4;
	uParam0->f_1 = player_id();
	trigger_script_event(1, uParam0, 45, 37, &uParam1);
}

int func_210()
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

float func_211(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		fVar1 = (fVar1 + func_241(iParam0, iParam1, iParam2, iParam3, iParam4, iVar0));
		if (!func_242(iParam0))
		{
		}
		else
		{
			iVar0++;
		}
	}
	func_243(iParam0, iParam3, iParam1, iParam4);
	return fVar1;
}

bool func_212(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 32:
		case 64:
		case 128:
		case 4096:
		case 65536:
		case 131072:
		case 524288:
		case 1048576:
			return true;
		default:
			break;
	}
	return false;
}

int func_213(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1901947->f_236.f_70;
		default:
			break;
	}
	return -1;
}

void func_214(int iParam0)
{
	func_244(&((*Global_1268861)[network_player_id_to_int()]->f_28), iParam0, 27);
}

bool func_215(int iParam0, int iParam1)
{
	return func_245(&((*Global_1268861)[iParam1]->f_28), iParam0, 27);
}

void func_216(int iParam0, int iParam1, int iParam2, char* sParam3)
{
	if (!func_104(*iParam0, iParam2))
	{
		func_246(iParam1, iParam2);
		func_107(iParam0, iParam2);
	}
}

bool func_217(int iParam0, int iParam1)
{
	return func_245(&((*Global_1268861)[iParam1]->f_28), iParam0, 27);
}

float func_218(float fParam0, float fParam1, float fParam2)
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

void func_219(var uParam0)
{
	func_170(uParam0, 0);
	func_170(uParam0, 1);
	func_170(uParam0, 3);
	func_168(uParam0);
}

void func_220(var uParam0)
{
	func_169(uParam0);
	func_247(uParam0, 0, 3);
}

void func_221(var uParam0, int iParam1)
{
	func_248(uParam0, iParam1);
}

void func_222(var uParam0)
{
	func_170(uParam0, 0);
	func_171(uParam0, 0);
	func_171(uParam0, 1);
	func_171(uParam0, 2);
}

void func_223(var uParam0)
{
	func_170(uParam0, 1);
	func_168(uParam0);
}

void func_224(var uParam0)
{
	func_170(uParam0, 2);
	func_171(uParam0, 3);
}

void func_225(var uParam0)
{
	func_170(uParam0, 3);
	func_171(uParam0, 4);
}

bool func_226(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return true;
}

void func_227(var uParam0)
{
	func_171(uParam0, 0);
	func_171(uParam0, 1);
}

void func_228(var uParam0)
{
	func_171(uParam0, 2);
	func_171(uParam0, 3);
}

void func_229(var uParam0)
{
	func_171(uParam0, 4);
	func_171(uParam0, 5);
}

bool func_230(var uParam0, int iParam1)
{
	uParam0->f_2 = 333456427;
	uParam0->f_3 = iParam1;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

int func_231(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return ((*Global_1257541)[iParam0]->f_4 + iParam1);
}

int func_232(int iParam0)
{
	return shift_left(1, iParam0);
}

int func_233(int iParam0, var uParam1, int iParam2)
{
	iVar0 = 0;
	iVar1 = (iParam2 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (uParam1[iVar2] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (uParam1[iVar2] < iParam0)
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

struct<2> func_234()
{
	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

bool func_235(var uParam0)
{
	if (func_29(*uParam0))
	{
		return true;
	}
	if (uParam0->f_2 != 0)
	{
		if (uParam0->f_3 != -1)
		{
			return true;
		}
		if (uParam0->f_4 != -1)
		{
			return true;
		}
		if (uParam0->f_5 != -1)
		{
			return true;
		}
	}
	return false;
}

bool func_236(var uParam0, var uParam1)
{
	if (uParam1->f_2 == -1)
	{
		return false;
	}
	if (uParam0->f_2 == -1)
	{
		return false;
	}
	if (uParam1->f_2 != uParam0->f_2)
	{
		return false;
	}
	if (uParam1->f_5 == -1)
	{
		return false;
	}
	if (uParam0->f_5 == -1)
	{
		return false;
	}
	if (uParam1->f_5 != uParam0->f_5)
	{
		return false;
	}
	if (uParam1->f_8 != uParam0->f_8)
	{
		return false;
	}
	if (uParam1->f_8.f_1 != uParam0->f_8.f_1)
	{
		return false;
	}
	if (!func_249(uParam1->f_8.f_5, uParam0->f_8.f_5))
	{
		return false;
	}
	if (uParam1->f_8.f_5.f_4 != uParam0->f_8.f_5.f_4)
	{
		return false;
	}
	if (uParam1->f_8.f_5.f_2 != uParam0->f_8.f_5.f_2)
	{
		return false;
	}
	return true;
}

bool func_237(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_238(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_68(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

bool func_239(int iParam0, var uParam1)
{
	Var0 = { func_250(iParam0) };
	if (!func_29(Var0))
	{
		return false;
	}
	func_251(Var0, iParam0, uParam1);
	return true;
}

var func_240(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	_0xde544b7ec0c187cc(&uVar0);
	if (!network_is_game_in_progress())
	{
		return uVar0;
	}
	if (func_252() != 0)
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
				iVar8 = _create_volume_cylinder_with_custom_name(vParam0, vParam3, vParam6, func_253());
				break;
			case -432403087:
				iVar8 = _create_volume_sphere_with_custom_name(vParam0, vParam3, vParam6, func_253());
				break;
			case -1612834106:
				iVar8 = _create_volume_box_with_custom_name(vParam0, vParam3, vParam6, func_253());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_254(get_player_team(iVar5)));
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
			if (func_255(iVar2))
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
				if (iVar9 & 8192 != 0 && func_256(iVar2) != 1)
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
					if (!func_257(iVar10))
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

float func_241(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	switch (iParam5)
	{
		case 0:
			return func_258(iParam0, iParam1, iParam2, iParam3, iParam4);
		case 1:
			return func_259(iParam0, iParam3);
		case 2:
			return func_260(iParam0, iParam3, iParam4);
		case 3:
			return func_261(iParam0, iParam1, iParam2, iParam3, iParam4);
		case 4:
			return func_262(iParam0, iParam3, iParam4);
		case 5:
			return func_263(iParam0, iParam3, iParam4);
		case 6:
			return func_264(iParam0, iParam1, iParam3, iParam4);
		case 8:
			return func_265(iParam0, iParam4->f_7, iParam3);
		case 14:
			return func_266(iParam0, iParam1, iParam3, iParam4);
		case 9:
			return func_267(iParam0, iParam3, iParam4);
		case 10:
			return func_268(iParam0, iParam3, iParam4);
		case 11:
			return func_269(iParam0, iParam1, iParam3, iParam4);
		case 12:
			return func_270(iParam0, iParam3);
		case 13:
			return func_271(iParam0, iParam1, iParam3, iParam4);
		default:
			break;
	}
	return 0f;
}

bool func_242(int iParam0)
{
	return *iParam0 == 0;
}

void func_243(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (*iParam0 == 0)
	{
		return;
	}
	iVar0 = 417341510;
	if (func_104(*iParam0, iVar0))
	{
		return;
	}
	if (*iParam0 == (*Global_1272030)[iParam1]->f_3)
	{
		return;
	}
	_0x6571e4327390ec0b(iParam3->f_5, iParam2, Global_35, *iParam0);
}

bool func_244(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

bool func_245(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

void func_246(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	switch (iParam1)
	{
		case 2:
			if ((*Global_1272030)[iParam0]->f_2 == 1)
			{
				func_214(iParam0);
				(*Global_1272030)[iParam0]->f_1 = 0;
				(*Global_1272030)[iParam0]->f_2 = 0;
			}
			break;
	}
	iVar0 = func_272(iParam1);
	if (iVar0 != 0)
	{
		iVar1 = (Global_1296859->f_21 + (iVar0 / 1000));
		if ((*Global_1272030)[iParam0]->f_1 == 0 || (*Global_1272030)[iParam0]->f_1 < iVar1)
		{
			func_273(iParam0);
			(*Global_1272030)[iParam0]->f_1 = iVar1;
			(*Global_1272030)[iParam0]->f_2 = iParam1;
		}
	}
}

void func_247(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	if (iParam2 < iParam1)
	{
		iParam2 = (uParam0->f_2 - 1);
	}
	iVar0 = iParam1;
	while (iVar0 <= iParam2)
	{
		func_171(uParam0, iVar0);
		iVar0++;
	}
}

void func_248(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_249(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

struct<2> func_250(int iParam0)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { func_203(iParam0, 2) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_203(iParam0, 7) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_203(iParam0, 5) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_203(iParam0, 6) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_203(iParam0, 8) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_203(iParam0, 3) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_203(iParam0, 4) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	return func_234();
}

int func_251(int iParam0, int iParam1, var uParam2)
{
	if (!func_274(iParam0))
	{
		return 0;
	}
	if (func_275(iParam0, iParam1, &uVar0))
	{
		func_276(iParam0, &uVar0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_252()
{
	return Global_1051252->f_12;
}

char* func_253()
{
	return "unnamed";
}

int func_254(int iParam0)
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

bool func_255(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return func_277(36, iParam0);
}

int func_256(int iParam0)
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

bool func_257(int iParam0)
{
	if (func_278(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 1)
		{
			func_279(iParam0);
		}
		return true;
	}
	return _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 1;
}

float func_258(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	vVar0 = { iParam4->f_11 };
	if (func_147(iParam4, 1) && func_237(vVar0))
	{
		func_216(iParam0, iParam3, 256, 0);
		return -1f;
	}
	if (func_280(vVar0, &bVar3))
	{
		func_281(iParam3);
		if (bVar3)
		{
			func_216(iParam0, iParam3, 1, 0);
			return -1f;
		}
		bVar4 = true;
	}
	if (iParam4->f_6 == 2)
	{
		iVar5 = func_86(iParam1);
		iVar6 = func_282(iVar5, iParam2);
		if (iVar6 > 0)
		{
			iVar7 = 0;
			while (iVar7 <= (iVar6 - 1))
			{
				vVar0 = { func_283(func_189(iVar5), iParam2, iVar7) };
				if (func_280(vVar0, &bVar3))
				{
					func_281(iParam3);
					if (bVar3)
					{
						func_216(iParam0, iParam3, 1, 0);
						return -1f;
					}
					bVar4 = true;
				}
				iVar7++;
			}
		}
	}
	if (bVar4)
	{
		return (0.25f + func_284());
	}
	func_285(iParam3);
	func_216(iParam0, iParam3, 2, 0);
	return -1f;
}

float func_259(int iParam0, int iParam1)
{
	if (is_screen_faded_out())
	{
		func_216(iParam0, iParam1, 131072, 0);
		return 0f;
	}
	return 0f;
}

float func_260(int iParam0, int iParam1, int iParam2)
{
	if (!func_147(iParam2, 1))
	{
		return 0f;
	}
	iVar0 = func_175(_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id())));
	if (!func_226(iVar0))
	{
		func_216(iParam0, iParam1, 256, 0);
		return 0f;
	}
	if (func_286(iVar0))
	{
		func_216(iParam0, iParam1, 524288, 0);
		return 0f;
	}
	return 0f;
}

float func_261(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	vVar1 = { iParam4->f_11 };
	iVar5 = 0;
	while (iVar5 <= 12)
	{
		if ((*Global_1237665)[iVar5]->f_2 != -1)
		{
			fVar0 = func_198(vVar1, func_287(iVar5));
			if (fVar0 < Global_1901947->f_236.f_64)
			{
				func_216(iParam0, iParam3, 64, 0);
				return 0f;
			}
			if (iParam4->f_6 == 2)
			{
				iVar4 = func_86(iParam1);
				iVar6 = func_282(iVar4, iParam2);
				if (iVar6 > 0)
				{
					iVar7 = 0;
					while (iVar7 <= (iVar6 - 1))
					{
						vVar1 = { func_283(func_189(iVar4), iParam2, iVar7) };
						fVar0 = func_198(vVar1, *(*Global_1248240)[iVar5]->f_603[iVar7]);
						if (fVar0 < Global_1901947->f_236.f_64)
						{
							func_216(iParam0, iParam3, 64, 0);
							return 0f;
						}
						iVar7++;
					}
				}
			}
		}
		iVar5++;
	}
	if (func_288(vVar1, 2, Global_1901947->f_236.f_64))
	{
		func_216(iParam0, iParam3, 64, 0);
		return 0f;
	}
	if (func_41(5))
	{
		if (vdist(vVar1, Global_1272030->f_3404) < Global_1901947->f_236.f_64)
		{
			func_216(iParam0, iParam3, 64, 0);
			return 0f;
		}
	}
	return 0f;
}

float func_262(int iParam0, int iParam1, int iParam2)
{
	if (func_30(&(Global_1272030->f_3271[iParam2->f_7])))
	{
		func_216(iParam0, iParam1, 2097152, 0);
		return 0f;
	}
	if (func_289(iParam2->f_7))
	{
		func_216(iParam0, iParam1, 2097152, 0);
		return 0f;
	}
	return 0f;
}

float func_263(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_290(iParam2);
	if (iVar0 == -1)
	{
		return 0f;
	}
	if (func_30(Global_1272030[iParam1]) && func_31(Global_1272030[iParam1]) < iVar0)
	{
		func_216(iParam0, iParam1, 8, 0);
		return 0f;
	}
	iVar1 = func_292(func_291(153786159));
	if (iVar1 == iParam2->f_5)
	{
		iVar2 = func_292(func_291(217123284));
		if (iVar2 != 0 && (Global_1296859->f_21 - iVar2) < (iVar0 / 1000))
		{
			func_216(iParam0, iParam1, 8, 0);
			return 0f;
		}
	}
	iVar3 = func_292(func_291(945205875));
	if (iParam2->f_9 == iVar3)
	{
		iVar4 = func_292(func_291(890183498));
		if (iVar4 != 0 && (Global_1296859->f_21 - iVar4) < (iVar0 / 1000))
		{
			func_216(iParam0, iParam1, 262144, 0);
			return 0f;
		}
	}
	return 0f;
}

float func_264(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_147(iParam3, 32))
	{
		return 0f;
	}
	iVar0 = func_293(iParam1);
	if (func_294(iParam1, iVar0))
	{
		func_216(iParam0, iParam2, 16, 0);
		return 0f;
	}
	return 0f;
}

float func_265(int iParam0, int iParam1, int iParam2)
{
	if (func_30(Global_1266405[iParam2]) && func_31(Global_1266405[iParam2]) < Global_1901947->f_236.f_56)
	{
		func_216(iParam0, iParam2, 32, 0);
		return 0f;
	}
	return (func_295(iParam1) * func_296(iParam1));
}

float func_266(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3->f_6 == 2)
	{
		iVar0 = func_86(iParam1);
		iVar1 = func_297(iVar0);
		if (iVar1 == -1261475678 && _0xfb6eb8785f808551(player_id(), Global_1901947->f_236.f_29, false))
		{
			func_216(iParam0, iParam2, 65536, 0);
			return 0f;
		}
	}
	return 0f;
}

float func_267(int iParam0, int iParam1, int iParam2)
{
	bVar3 = true;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (&iParam2->f_15[iVar0] != 0)
		{
			func_298(&(iParam2->f_15[iVar0]), &iVar1, &iVar2);
			if (iVar1 == -1 || iVar2 == -1)
			{
			}
			else
			{
				bVar3 = false;
			}
			else
			{
				iVar0++;
			}
			if (!bVar3)
			{
				bVar3 = func_299(iVar1, iVar2);
			}
			bVar4 = (bVar3 && func_300(iParam2->f_26));
			if (bVar3 && bVar4)
			{
				fVar5 = 0.25f;
				if (iParam2->f_27 != 0)
				{
					if (func_300(iParam2->f_27))
					{
						fVar5 = (fVar5 + 0.25f);
					}
				}
				iVar0 = 0;
				while (iVar0 < 4)
				{
					if (&iParam2->f_20[iVar0] != 0)
					{
						func_298(&(iParam2->f_20[iVar0]), &iVar1, &iVar2);
						if (iVar1 == -1 || iVar2 == -1)
						{
						}
						else if (func_299(iVar1, iVar2))
						{
							fVar5 = (fVar5 + 0.25f);
						}
						else
						{
							iVar0++;
						}
						return fVar5;
						func_216(iParam0, iParam1, 128, 0);
						return 0f;
					}
				}
			}
		}
	}
}

float func_268(int iParam0, int iParam1, int iParam2)
{
	if (iParam2->f_14 == 0)
	{
		return 0f;
	}
	if (func_301(0) == iParam2->f_14)
	{
		return 0.25f;
	}
	func_216(iParam0, iParam1, 512, 0);
	return 0f;
}

float func_269(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3->f_6 == 2)
	{
		iVar0 = func_86(iParam1);
		if (func_302(iVar0))
		{
			func_216(iParam0, iParam2, 16384, 0);
		}
	}
	return 0f;
}

float func_270(int iParam0, int iParam1)
{
	if (func_303(player_id(), 1, 0, 1))
	{
		func_216(iParam0, iParam1, 32768, 0);
	}
	return 0f;
}

float func_271(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_41(4))
	{
		if (!func_147(iParam3, 64))
		{
			func_216(iParam0, iParam2, 64, 0);
			return 0f;
		}
	}
	if ((*Global_1266405)[iParam2]->f_2 != -15 && !func_305(func_304(), (*Global_1266405)[iParam2]->f_2, 1))
	{
		func_216(iParam0, iParam2, 1024, 0);
		return 0f;
	}
	if (!func_306(iParam1, iParam3->f_6, iParam3->f_7, &iVar2, &uVar3))
	{
		func_216(iParam0, iParam2, iVar2, 0);
		return 0f;
	}
	if (iParam3->f_6 == 2)
	{
		iVar4 = func_86(iParam1);
		iVar5 = func_297(iVar4);
		iVar1 = func_307(iVar4, iParam3->f_5, iVar5, Global_35, 1, 0, 0, -1082130432);
		iVar2 = func_308(iVar1);
		if (iVar2 != 0)
		{
			func_216(iParam0, iParam2, iVar2, 0);
			return 0f;
		}
	}
	else if (iParam3->f_6 == 1)
	{
		if (!_unlock_is_unlocked(iParam3->f_5))
		{
			func_216(iParam0, iParam2, 268435456, 0);
			return 0f;
		}
		if (func_147(iParam3, 8) && !_0x424b17a7dc5c90bc(player_id()))
		{
			func_216(iParam0, iParam2, 1048576, 0);
			return 0f;
		}
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (&iParam3->f_28[iVar0] != 0)
		{
			if (!_unlock_is_unlocked(&(iParam3->f_28[iVar0])))
			{
				func_216(iParam0, iParam2, 268435456, 0);
				return 0f;
			}
		}
		iVar0++;
	}
	return uVar3;
}

int func_272(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_1901947->f_236;
		case 2:
			return Global_1901947->f_236.f_1;
		case 4:
			return Global_1901947->f_236.f_2;
		case 8:
			return Global_1901947->f_236.f_3;
		case 16:
			return Global_1901947->f_236.f_4;
		case 32:
			return Global_1901947->f_236.f_5;
		case 64:
			return Global_1901947->f_236.f_13;
		case 128:
			return Global_1901947->f_236.f_14;
		case 256:
			return Global_1901947->f_236.f_15;
		case 512:
			return Global_1901947->f_236.f_16;
		case 1024:
			return Global_1901947->f_236.f_17;
		case 2048:
			return Global_1901947->f_236.f_18;
		case 4096:
			return Global_1901947->f_236.f_19;
		case 8192:
			return Global_1901947->f_236.f_20;
		case 16384:
			return Global_1901947->f_236.f_22;
		case 32768:
			return Global_1901947->f_236.f_23;
		case 65536:
			return Global_1901947->f_236.f_24;
		case 131072:
			return Global_1901947->f_236.f_25;
		case 524288:
			return Global_1901947->f_236.f_26;
		case 1048576:
			return Global_1901947->f_236.f_27;
		case 268435456:
			return Global_1901947->f_236.f_12;
		case 2097152:
			return Global_1901947->f_236.f_28;
		case 4194304:
			return Global_1901947->f_236.f_6;
		case 8388608:
			return Global_1901947->f_236.f_7;
		case 16777216:
			return Global_1901947->f_236.f_8;
		case 33554432:
			return Global_1901947->f_236.f_9;
		case 67108864:
			return Global_1901947->f_236.f_10;
		case 134217728:
			return Global_1901947->f_236.f_11;
		case 536870912:
			return Global_1901947->f_236.f_21;
		default:
			break;
	}
	return 0;
}

void func_273(int iParam0)
{
	func_309(&((*Global_1268861)[network_player_id_to_int()]->f_28), iParam0, 27);
}

bool func_274(int iParam0)
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

bool func_275(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_310(iParam0);
	uParam2->f_4 = iParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_276(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	_datafile_get_int(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_311(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_312(iVar0);
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
			uParam2->f_5 = func_313(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_314(iVar0);
		}
		uParam1->f_2 = 162343104;
		_datafile_get_int(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_315(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		_datafile_get_int(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_7 = func_316(iVar0);
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

bool func_277(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_245(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_317())
	{
		return func_245(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_245(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_278(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_279(int iParam0)
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
		func_318(iParam0);
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 1)
	{
		return;
	}
	func_319(iVar0);
	_0x51951de06c0d1c40(iParam0, 1);
	Global_1071686->f_21416.f_1[iVar0] = 1;
}

bool func_280(vector3 vParam0, bool bParam3)
{
	fVar0 = func_198(Global_35, vParam0);
	if (fVar0 < Global_1901947->f_236.f_61)
	{
		*bParam3 = 1;
		return true;
	}
	if (fVar0 < Global_1901947->f_236.f_62)
	{
		return true;
	}
	return false;
}

void func_281(int iParam0)
{
	func_309((*Global_1268861)[network_player_id_to_int()], iParam0, 27);
}

int func_282(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	iVar0 = func_231(iParam0, iParam1);
	return Global_1257541->f_451[iVar0]->f_6;
}

Vector3 func_283(int iParam0, int iParam1, int iParam2)
{
	if ((func_69(&Var3, iParam0) && func_230(&Var3, iParam1)) && func_320(&Var3, iParam2))
	{
		func_321(Var3, 1702777600, &vVar0, 0);
	}
	return vVar0;
}

float func_284()
{
	return get_random_float_in_range(0f, 0.1f);
}

void func_285(int iParam0)
{
	func_244((*Global_1268861)[network_player_id_to_int()], iParam0, 27);
}

bool func_286(int iParam0)
{
	if (!func_226(iParam0))
	{
		return false;
	}
	return (func_322(iParam0) && (*Global_1131196)[iParam0]->f_18.f_1 != 0);
}

Vector3 func_287(int iParam0)
{
	return (*Global_1248240)[iParam0]->f_600;
}

bool func_288(vector3 vParam0, int iParam3, float fParam4)
{
	iVar1 = func_323(iParam3);
	iVar2 = ((&Global_1198046->f_3[iParam3] + iVar1) - 1);
	iVar6 = iVar1;
	while (iVar6 <= iVar2)
	{
		if (Global_1198046->f_231.f_1066[iVar6]->f_13 != 1 && Global_1198046->f_231.f_1066[iVar6]->f_13 != 2)
		{
		}
		else
		{
			iVar7 = 0;
			while (iVar7 <= (Global_1198046->f_231.f_1066[iVar6]->f_7 - 1))
			{
				vVar3 = { func_324(iVar6, iVar7) };
				if (func_237(vVar3))
				{
				}
				else
				{
					if (fParam4 == -1f)
					{
						fVar0 = to_float(func_325(iVar6, iVar7));
						if (fVar0 == to_float(2147483647))
						{
							return true;
						}
					}
					else
					{
						fVar0 = fParam4;
					}
					if (func_198(vParam0, vVar3) < fVar0)
					{
						return true;
					}
				}
				iVar7++;
			}
		}
		iVar6++;
	}
	return false;
}

bool func_289(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	Var0 = { func_326(iParam0) };
	if (!_stat_id_is_valid(&Var0))
	{
		return false;
	}
	if (!stat_id_get_int(&Var0, &iVar2))
	{
		return false;
	}
	if (iVar2 == 0)
	{
		return false;
	}
	switch (iParam0)
	{
		case 1:
			if ((Global_1296859->f_21 - iVar2) * 1000 < Global_1901947->f_236.f_51)
			{
				return true;
			}
			break;
		case 2:
			if ((Global_1296859->f_21 - iVar2) * 1000 < Global_1901947->f_236.f_52)
			{
				return true;
			}
			break;
		default:
			break;
	}
	return false;
}

int func_290(int iParam0)
{
	switch (iParam0->f_6)
	{
		case 2:
			return Global_1901947->f_236.f_48;
		case 1:
			return Global_1901947->f_236.f_49;
	}
	return -1;
}

struct<2> func_291(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

int func_292(var uParam0, var uParam1)
{
	stat_id_get_int(&uParam0, &uVar0);
	return uVar0;
}

int func_293(int iParam0)
{
	iVar0 = (Global_1901947->f_236.f_50 / 1000);
	return ceil((IntToFloat(iVar0) * func_327(iParam0)));
}

bool func_294(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	Var0 = { func_99(iParam0, 1178968787) };
	if (!stat_id_get_int(&Var0, &iVar2))
	{
		return false;
	}
	if (iVar2 != 0 && (Global_1296859->f_21 - iVar2) < iParam1)
	{
		return true;
	}
	return false;
}

float func_295(int iParam0)
{
	iVar0 = func_213(iParam0);
	if (iVar0 < 1)
	{
		return 0f;
	}
	iVar1 = &(*Global_1268861)[network_player_id_to_int()]->f_95[iParam0];
	return func_218((to_float(iVar1) / to_float(iVar0)), 0f, 1f);
}

float func_296(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 1f;
		default:
			break;
	}
	return 0f;
}

int func_297(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return (*Global_1257541)[iParam0]->f_2;
}

void func_298(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 1991225883:
			*iParam1 = 4;
			*iParam2 = 6;
			break;
		case -2094060557:
			*iParam1 = 6;
			*iParam2 = 10;
			break;
		case 328288820:
			*iParam1 = 10;
			*iParam2 = 14;
			break;
		case -1575618003:
			*iParam1 = 14;
			*iParam2 = 18;
			break;
		case -1205003059:
			*iParam1 = 18;
			*iParam2 = 22;
			break;
		case -281953142:
			*iParam1 = 0;
			*iParam2 = 6;
			break;
		case 390845486:
			*iParam1 = 6;
			*iParam2 = 12;
			break;
		case 495559496:
			*iParam1 = 12;
			*iParam2 = 18;
			break;
		case 48904803:
			*iParam1 = 18;
			*iParam2 = 0;
			break;
		case -2090512547:
			*iParam1 = 22;
			*iParam2 = 4;
			break;
		case -1142645407:
			*iParam1 = 6;
			*iParam2 = 14;
			break;
		case 2059113913:
			*iParam1 = 14;
			*iParam2 = 22;
			break;
		case 272045896:
			*iParam1 = 0;
			*iParam2 = 12;
			break;
		case -184283233:
			*iParam1 = 6;
			*iParam2 = 18;
			break;
		case -1602081438:
			*iParam1 = 12;
			*iParam2 = 0;
			break;
		case 1781467359:
			*iParam1 = 18;
			*iParam2 = 6;
			break;
		case -2117802919:
			*iParam1 = 18;
			*iParam2 = 21;
			break;
		case -35871888:
			*iParam1 = 6;
			*iParam2 = 9;
			break;
		case 1985854092:
			*iParam1 = 9;
			*iParam2 = 18;
			break;
		case 1417207314:
			*iParam1 = 21;
			*iParam2 = 6;
			break;
		default:
			*iParam1 = -1;
			*iParam2 = -1;
			break;
	}
}

bool func_299(int iParam0, int iParam1)
{
	iVar0 = get_clock_hours();
	if (iParam0 < iParam1)
	{
		if (iVar0 >= iParam0 && iVar0 < iParam1)
		{
			return true;
		}
	}
	else if (iParam0 > iParam1)
	{
		if (iVar0 >= iParam1 && iVar0 < iParam0)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_300(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	else if (iParam0 == -1)
	{
		return true;
	}
	if ((Global_1272030->f_3398 && iParam0) != 0)
	{
		return true;
	}
	return false;
}

int func_301(int iParam0)
{
	return Global_1138305->f_2[iParam0]->f_1;
}

bool func_302(int iParam0)
{
	return false;
}

int func_303(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_328(bParam1, bParam2, bParam3);
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

int func_304()
{
	return &Global_1902818;
}

bool func_305(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_329(iParam1) || !func_329(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

bool func_306(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	*uParam4 = 0f;
	switch (iParam2)
	{
		case 1:
			if (func_330(1, player_id(), 1, 0) != -1)
			{
				*iParam3 = 8388608;
				return false;
			}
			if (!_unlock_is_unlocked(160441867))
			{
				*iParam3 = 268435456;
				return false;
			}
			break;
		case 2:
			if (!func_41(0))
			{
				*iParam3 = 268435456;
				return false;
			}
			switch (iParam1)
			{
				case 1:
					if (func_41(1))
					{
						*uParam4 = 0.5f;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 43:
							if (!func_41(2))
							{
								*iParam3 = 268435456;
								return false;
							}
							else
							{
								*uParam4 = 0.25f;
							}
							break;
					}
					break;
			}
			if (func_330(2, player_id(), 1, 0) != -1)
			{
				*iParam3 = 8388608;
				return false;
			}
			break;
	}
	return true;
}

int func_307(int iParam0, var uParam1, int iParam2, vector3 vParam3, bool bParam6, bool bParam7, bool bParam8, float fParam9)
{
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 89)
	{
		return 11;
	}
	if (!func_331())
	{
		return 2;
	}
	iVar1 = func_189(iParam0);
	iVar2 = func_332(iVar1, uParam1);
	if (iVar2 < 0 || iVar2 >= 55)
	{
		return 11;
	}
	if (!bParam7 && func_333(iParam0, iVar2, bParam8, &bVar3))
	{
		if (bVar3)
		{
			return 1;
		}
		else
		{
			return 4;
		}
	}
	if (func_334(iVar1, uParam1))
	{
		vVar4 = { func_335(iVar1, uParam1) };
		iVar7 = func_336(iVar1, iVar2);
		if (!func_337(iVar7, vVar4))
		{
			return 5;
		}
	}
	if (func_338(iParam2) == -1)
	{
		return 6;
	}
	if (fParam9 >= 0f && !func_237(vParam3))
	{
		vVar8 = { func_193(iParam0, iVar2) };
		if (vdist(vParam3, vVar8) > fParam9)
		{
			return 12;
		}
	}
	if (func_339(iParam2))
	{
		iVar11 = func_175(_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id())));
		if (!func_226(iVar11))
		{
			return 13;
		}
		if (func_286(iVar11))
		{
			return 14;
		}
	}
	if (func_340(_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id()))))
	{
		return 15;
	}
	if (bParam6)
	{
		if (iParam2 != 1717788883 && func_341(func_234(), func_234(), 0, bParam7))
		{
			return 3;
		}
		bVar12 = false;
		if (!bVar12)
		{
			iVar13 = func_192(iParam0, iVar2);
			if (!_unlock_is_unlocked(iVar13))
			{
				return 8;
			}
			if (!_unlock_is_visible(iVar13))
			{
				return 7;
			}
			iVar14 = func_342(iParam0, iVar2);
			if (iVar14 != 0)
			{
				if (!_unlock_is_unlocked(iVar14))
				{
					return 10;
				}
				if (!_unlock_is_visible(iVar14))
				{
					return 9;
				}
			}
		}
	}
	return 0;
}

int func_308(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 2:
			return 4194304;
		case 3:
			return 8388608;
		case 4:
			return 16777216;
		case 5:
			return 33554432;
		case 6:
			return 67108864;
		case 7:
		case 9:
			return 134217728;
		case 8:
		case 10:
			return 268435456;
		case 11:
			return 536870912;
		case 12:
			return 1073741824;
		case 13:
			return 256;
		case 14:
			return 524288;
		case 15:
			return 32768;
		default:
			break;
	}
	return 0;
}

bool func_309(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

int func_310(int iParam0)
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

int func_311(int iParam0, var uParam1)
{
	if (func_343(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_312(int iParam0)
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

int func_313(int iParam0)
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

int func_314(int iParam0)
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

int func_315(int iParam0)
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

int func_316(int iParam0)
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

int func_317()
{
	return Global_1102219->f_3672;
}

void func_318(int iParam0)
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
	func_319(iVar0);
	_0x51951de06c0d1c40(iParam0, 0);
	Global_1071686->f_21416.f_1[iVar0] = 0;
}

void func_319(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = 0;
		Global_1071686->f_21416.f_1[iParam0]->f_1 = 0;
	}
}

bool func_320(var uParam0, int iParam1)
{
	uParam0->f_2 = 1700129460;
	uParam0->f_3 = iParam1;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

int func_321(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (_datafile_get_vector(uParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

bool func_322(int iParam0)
{
	if (!func_226(iParam0))
	{
		return false;
	}
	iVar0 = func_344(iParam0);
	return (iVar0 != 0 && iVar0 != 3);
}

int func_323(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 3;
		case 2:
			return 35;
		case 3:
			return 55;
		default:
			break;
	}
	return 0;
}

Vector3 func_324(int iParam0, int iParam1)
{
	return func_345(&(Global_1198046->f_231.f_1066[iParam0]->f_8[iParam1]));
}

var func_325(int iParam0, int iParam1)
{
	return Global_1198046->f_231.f_1066[iParam0]->f_8[iParam1]->f_3;
}

struct<2> func_326(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return func_291(-495896359);
		case 2:
			return func_291(-1122351331);
	}
	return Var0;
}

float func_327(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return Global_1901947->f_236.f_30;
		case 20:
			return Global_1901947->f_236.f_31;
		default:
			break;
	}
	return 1f;
}

int func_328(bool bParam0, bool bParam1, bool bParam2)
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

bool func_329(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_346(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_347(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_348(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_349(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_350(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_351(iParam0);
	if (iVar5 < 1 || iVar5 > func_352(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

int func_330(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!_network_is_player_index_valid(iParam1))
	{
		return -1;
	}
	iVar1 = 0;
	while (iVar1 <= 12)
	{
		iVar0 = (*Global_1248240)[iVar1]->f_559;
		switch (iParam0)
		{
			case 1:
				if (!func_353(iVar0))
				{
				}
				else
				{
					Jump @139; //curOff = 88
					if (!func_354(iVar0))
					{
					}
					else
					{
						Jump @139; //curOff = 104
						if (!func_355(iVar0))
						{
						}
						else
						{
							Jump @139; //curOff = 120
							if (!func_339(iVar0))
							{
							}
							else if (bParam2 && !func_356(iVar1, 32, iParam1))
							{
							}
							else if (bParam3 && (*Global_1237665)[iVar1]->f_15 != iParam1)
							{
							}
							else
							{
								return iVar1;
							}
						}
					}
				}
				iVar1++;
				return -1;
				default:
					break;
		}
	}
}

bool func_331()
{
	if (func_13())
	{
		return false;
	}
	return true;
}

int func_332(int iParam0, var uParam1)
{
	iVar0 = -1;
	if (func_69(&Var1, iParam0) && func_357(&Var1, uParam1))
	{
		iVar0 = ((func_358(iParam0) - _0xe13634bb6baf0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

bool func_333(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	bVar0 = func_359(iParam0, iParam1, 2);
	if (func_360(iParam0, iParam1, bVar0))
	{
		return true;
	}
	vVar1 = { func_193(iParam0, iParam1) };
	if (func_237(vVar1))
	{
		return false;
	}
	uVar4 = func_361(func_189(iParam0), iParam1);
	if ((bParam2 && func_359(iParam0, iParam1, 1)) && func_362(vVar1, uVar4))
	{
		*bParam3 = 1;
		return true;
	}
	return func_363(vVar1, uVar4, bVar0);
}

bool func_334(int iParam0, var uParam1)
{
	iVar0 = 0;
	if (func_69(&Var1, iParam0) && func_357(&Var1, uParam1))
	{
		func_364(Var1, -528314399, &iVar0, 0);
	}
	return iVar0;
}

Vector3 func_335(int iParam0, var uParam1)
{
	if (func_69(&Var3, iParam0) && func_357(&Var3, uParam1))
	{
		func_321(Var3, -370006557, &vVar0, 1);
	}
	return vVar0;
}

int func_336(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_69(&Var1, iParam0))
	{
		if (func_230(&Var1, iParam1))
		{
			func_70(Var1, 1342438652, &iVar0, 0);
		}
	}
	iVar6 = 0;
	if (iVar0 != 0)
	{
		iVar6 = func_365(iVar0);
	}
	return iVar6;
}

bool func_337(int iParam0, vector3 vParam1)
{
	if (func_237(vParam1))
	{
		return false;
	}
	if (func_366(iParam0))
	{
		return false;
	}
	fVar0 = 5f;
	fVar1 = func_367(iParam0);
	if (fVar1 > 300f)
	{
		fVar1 = 300f;
	}
	if (is_sphere_visible_to_player(player_id(), vParam1, fVar0, fVar1))
	{
		return false;
	}
	if (is_sphere_visible_to_another_machine(vParam1, fVar0, fVar1))
	{
		return false;
	}
	fVar1 = (fVar1 * 0.75f);
	if (fVar1 < 150f)
	{
		fVar1 = 150f;
	}
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 <= 31)
	{
		iVar2 = int_to_playerindex(iVar5);
		if (network_is_player_active(iVar2))
		{
			iVar3 = get_player_ped(iVar2);
			if (does_entity_exist(iVar3))
			{
				fVar4 = vdist(get_entity_coords(iVar3, false, false), vParam1);
				if (fVar4 < fVar1 && !func_368(iParam0))
				{
					return false;
				}
			}
		}
		iVar5++;
	}
	return true;
}

int func_338(int iParam0)
{
	if (!func_369(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (func_370(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_339(int iParam0)
{
	switch (iParam0)
	{
		case -260420884:
		case 850213441:
		case 1884341302:
		case 1918154385:
			return true;
		default:
			break;
	}
	return false;
}

bool func_340(int iParam0)
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
		else if (func_371(1048576, iVar52))
		{
			return true;
		}
		iVar50++;
	}
	return false;
}

bool func_341(struct<2> Param0, struct<2> Param2, bool bParam4, bool bParam5)
{
	if (!bParam4)
	{
		if (func_13())
		{
			return true;
		}
	}
	Var0 = -1;
	Var0.f_1 = -1;
	if (!func_29(Param2))
	{
		Var0 = { func_372() };
	}
	else
	{
		Var0 = { Param2 };
	}
	if ((!bParam5 && func_29(Var0)) && !func_249(Var0, Param0))
	{
		return true;
	}
	Var2 = { func_43() };
	if (func_29(Var2) && (!func_29(Var2) || !func_249(Param0, Var2)))
	{
		return true;
	}
	return false;
}

int func_342(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_231(iParam0, iParam1);
	return Global_1257541->f_451[iVar0]->f_1;
}

bool func_343(int iParam0, var uParam1, var uParam2)
{
	if (func_373(iParam0, uParam1, &uVar0))
	{
		func_374(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

int func_344(int iParam0)
{
	if (!func_226(iParam0))
	{
		return 0;
	}
	return Global_1132288->f_1[iParam0]->f_3;
}

Vector3 func_345(int iParam0)
{
	iVar3 = iParam0 & 32767;
	iVar4 = shift_right(iParam0, 15) & 32767;
	vVar0.x = to_float(iVar3);
	vVar0.f_1 = to_float(iVar4);
	if (iParam0 & 1073741824 == 0)
	{
		vVar0.x = (vVar0.x * -1f);
	}
	if (iParam0 & -2147483648 == 0)
	{
		vVar0.f_1 = (vVar0.y * -1f);
	}
	return vVar0;
}

int func_346(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_347(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_348(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_349(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_375(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_350(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_351(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_352(int iParam0, int iParam1)
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

bool func_353(int iParam0)
{
	switch (iParam0)
	{
		case -1784925006:
		case -669677371:
		case -232478158:
		case 78055447:
		case 974227447:
		case 1532822440:
			return true;
		default:
			break;
	}
	return false;
}

bool func_354(int iParam0)
{
	switch (iParam0)
	{
		case -1086711901:
		case -697789102:
		case 195932838:
			return true;
	}
	return false;
}

bool func_355(int iParam0)
{
	switch (iParam0)
	{
		case -1777724963:
		case 1427578635:
			return true;
	}
	return false;
}

bool func_356(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 255)
	{
		iParam2 = network_player_id_to_int();
	}
	return (func_376(iParam0) && func_104((*(*Global_1238240)[iParam2])[iParam0]->f_19, iParam1));
}

bool func_357(var uParam0, var uParam1)
{
	uParam0->f_2 = 775488648;
	uParam0->f_3 = uParam1;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

int func_358(int iParam0)
{
	iVar0 = 0;
	if (func_69(&vVar1, iParam0))
	{
		vVar1.f_2 = 866900867;
		if (_datafile_get_data_node_index(&(vVar1.f_1), &vVar1))
		{
			iVar0 = _datafile_get_num_children(vVar1.x, vVar1.y);
		}
	}
	return iVar0;
}

bool func_359(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -1)
	{
		return false;
	}
	iVar0 = func_231(iParam0, iParam1);
	return func_195(Global_1257541->f_451[iVar0]->f_2, iParam2);
}

bool func_360(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 <= (func_282(iParam0, iParam1) - 1))
	{
		vVar1 = { func_283(func_189(iParam0), iParam1, iVar0) };
		uVar4 = func_377(func_189(iParam0), iParam1, iVar0);
		if (func_237(vVar1))
		{
		}
		else
		{
			if (func_363(vVar1, uVar4, bParam2))
			{
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

var func_361(int iParam0, int iParam1)
{
	uVar0 = Global_1901947->f_166.f_34;
	if (func_69(&Var1, iParam0) && func_230(&Var1, iParam1))
	{
		func_378(Var1, -364402952, &uVar0, 0);
	}
	return uVar0;
}

bool func_362(vector3 vParam0, float fParam3)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = int_to_playerindex(iVar0);
		if (network_is_player_active(iVar1) && vdist(get_entity_coords(get_player_ped(iVar1), false, false), vParam0) < fParam3)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_363(vector3 vParam0, var uParam3, bool bParam4)
{
	if (!bParam4)
	{
		iVar0 = 575122756;
	}
	return _0x397769175a7dbb30(vParam0, uParam3, 0, 0, iVar0);
}

int func_364(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (_datafile_get_bool(iParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_365(int iParam0)
{
	switch (iParam0)
	{
		case 303108068:
			return 0;
		case -910931556:
			return 1;
		case -177397452:
			return 2;
	}
	return 0;
}

int func_366(int iParam0)
{
	return func_379(iParam0, 4);
}

float func_367(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 450f;
		case 1:
			return 450f;
		case 2:
			return 250f;
		default:
			break;
	}
	return 450f;
}

bool func_368(int iParam0)
{
	iVar0 = get_frame_count();
	if (Global_1138828->f_2[iParam0]->f_9 == iVar0 || Global_1138828->f_2[iParam0]->f_9 == (iVar0 - 1))
	{
		return true;
	}
	return false;
}

bool func_369(int iParam0)
{
	iVar0 = func_380(iParam0);
	if (iVar0 != 0 && func_381(iVar0))
	{
		return false;
	}
	if (iParam0 == 1717788883)
	{
		return func_382();
	}
	return true;
}

bool func_370(int iParam0)
{
	return Global_1237665[iParam0] == -1;
}

bool func_371(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102219->f_3 && iParam0) != 0;
	}
	return ((*Global_1100469)[iParam1]->f_3 && iParam0) != 0;
}

struct<2> func_372()
{
	return *Global_1051213;
}

bool func_373(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_310(iParam0);
	uParam2->f_4 = uParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_374(var uParam0, int iParam1, var uParam2)
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

int func_375(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_376(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 12);
}

var func_377(int iParam0, int iParam1, int iParam2)
{
	uVar0 = Global_1901947->f_166.f_35;
	if ((func_69(&Var1, iParam0) && func_230(&Var1, iParam1)) && func_320(&Var1, iParam2))
	{
		func_378(Var1, -364402952, &uVar0, 0);
	}
	return uVar0;
}

int func_378(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
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

int func_379(int iParam0, int iParam1)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (network_is_player_active(int_to_playerindex(iVar0)) && func_195((*Global_1138411)[iVar0][iParam0], iParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_380(int iParam0)
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
		case 1427578635:
		case 1532822440:
		case 1539023636:
		case 1884341302:
		case 1918154385:
			return 1;
		case -1261475678:
		case -1086711901:
		case -669677371:
		case -468635158:
			return 8;
		default:
			break;
	}
	return 0;
}

bool func_381(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1197740->f_1 && iParam0) != 0;
}

bool func_382()
{
	return func_383(func_67(0));
}

bool func_383(struct<2> Param0)
{
	return func_384(Param0, 1, 4);
}

bool func_384(struct<2> Param0, int iParam2, int iParam3)
{
	if (!func_29(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_385(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

int func_385(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_44(Param0);
	}
	return -1;
}

