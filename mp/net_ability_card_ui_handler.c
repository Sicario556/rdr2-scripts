void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	if (has_force_cleanup_occurred(4))
	{
		func_1();
		terminate_this_thread();
		return;
	}
	network_set_script_is_safe_for_network_game();
	bVar0 = false;
	while (!_0x9e4ef615e307fbbe() && !bVar0)
	{
		func_2();
		func_3();
		wait(0);
	}
	func_1();
	terminate_this_thread();
}

void func_1()
{
	Global_1940311->f_1433.f_4189.f_10 = uVar0;
	terminate_this_thread();
}

void func_2()
{
	if (func_4())
	{
		Global_1940311->f_1433.f_4189.f_2088 = 1;
	}
	else if (Global_1940311->f_1433.f_4189.f_2088)
	{
		func_5(Global_1940311->f_1433.f_4189.f_10);
		Global_1940311->f_1433.f_4189.f_2088 = 0;
	}
}

void func_3()
{
	iVar4 = -1641598689;
	Var6.f_7 = 1;
	Var6.f_13 = -1;
	Var6.f_15 = -1;
	Var6.f_16 = -1;
	Var6.f_17 = -1;
	Var6.f_18 = -1;
	Var6.f_19 = -1;
	Var6.f_32 = -1;
	while (_event_manager_is_event_pending(iVar4))
	{
		if (_event_manager_peek_event(iVar4, &Var0))
		{
			switch (Var0)
			{
				case -2075827635:
					switch (Var0.f_2)
					{
						case -1218139183:
							func_6(player_id(), 1);
							if (!_uistatemachine_request_transition(-1641598689, -700246597))
							{
								_uistatemachine_request_transition(-1641598689, 1921928004);
							}
							break;
						case -1546234005:
							func_6(func_7(), 1);
							if (!_uistatemachine_request_transition(-1641598689, -700246597))
							{
								_uistatemachine_request_transition(-1641598689, 1921928004);
							}
							break;
					}
					_event_manager_pop_event(iVar4);
					break;
				case -1740156697:
					switch (Var0.f_2)
					{
						case -1559642356:
							Global_1940311->f_1433.f_4189.f_10 = Var0.f_3;
							func_5(Var0.f_3);
							break;
						case -1895040713:
							func_8(Var0.f_3);
							break;
						case -273357828:
							func_9(Var0.f_3);
							break;
					}
					_event_manager_pop_event(iVar4);
					break;
				case 703281244:
					switch (Var0.f_2)
					{
						case -27281482:
							func_10(1);
							break;
					}
					_event_manager_pop_event(iVar4);
					break;
				case -722926211:
					switch (Var0.f_2)
					{
						case -27281482:
							func_10(-1);
							break;
					}
					_event_manager_pop_event(iVar4);
					break;
				case -1203660660:
					switch (Var0.f_2)
					{
						case 536653807:
							func_11(Var0.f_3, &Var6, 2, -1);
							func_12(&Var6);
							break;
						case 473608166:
							iVar5 = _databinding_read_data_int_from_parent(Var0.f_3, "ability_card_loadout_index");
							func_13(iVar5);
							break;
						case 928621134:
							iVar5 = _databinding_read_data_int_from_parent(Var0.f_3, "ability_card_loadout_index");
							func_14(iVar5);
							break;
						case -1636950965:
							func_11(Var0.f_3, &Var6, 2, -1);
							func_16(Var6, func_15());
							break;
						case 85169314:
							func_11(Var0.f_3, &Var6, 2, -1);
							if (Var6.f_26)
							{
								vVar40.f_2 = Var6.f_28;
							}
							else if (Var6.f_27)
							{
								vVar40.f_2 = Var6.f_28;
							}
							else if (Var6.f_29)
							{
								vVar40.f_2 = -915411861;
							}
							else if (Var6.f_30)
							{
								vVar40.f_2 = -570078785;
							}
						else
						{
							}
							else if (!func_17(vVar40.z))
							{
								vVar40.f_1 = func_18(Var6.f_2, vVar40.z);
								if (vVar40.y <= 0)
								{
								}
								else
								{
									vVar40.x = Var6;
									func_19(func_15(), 1, vVar40);
									Jump @794; //curOff = 678
									func_11(Var0.f_3, &Var6, 2, -1);
									if (Var6.f_23)
									{
										vVar40.f_2 = -489628648;
									}
									else if (Var6.f_24)
									{
										vVar40.f_2 = -570078785;
									}
								else
								{
									}
									else
									{
										iVar43 = func_21(func_20(&Var6) + 1);
										vVar40.f_1 = func_18(iVar43, vVar40.z);
										if (vVar40.y <= 0)
										{
										}
										else
										{
											vVar40.x = Var6;
											func_19(func_15(), 2, vVar40);
										}
									}
								}
								_event_manager_pop_event(iVar4);
								Jump @812; //curOff = 800
								_event_manager_pop_event(iVar4);
							}
							default:
								break;
					}
					default:
						break;
			}
		}
	}
}

bool func_4()
{
	if (Global_1940144->f_105 != -1)
	{
		return true;
	}
	if (Global_1940144->f_105.f_2 != -1)
	{
		return true;
	}
	return busyspinner_is_on();
}

void func_5(var uParam0)
{
	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	func_11(uParam0, &Var0, 2, -1);
	func_23(Global_1940311->f_1433.f_4189.f_37[func_22(Var0, 1)], &Var0);
	func_24(&(Global_1940311->f_1433.f_4189.f_1936), Var0);
	func_25(Var0);
	func_26(Var0);
}

void func_6(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_27(0);
	}
	if (player_id() == iParam0)
	{
		func_28(0);
	}
	else
	{
		func_28(1);
	}
	func_29(0, iParam0);
	func_29(1, iParam0);
	func_29(2, iParam0);
	func_29(3, iParam0);
}

int func_7()
{
	iVar0 = network_get_player_from_gamer_handle(&(Global_1940311->f_1433.f_8));
	if (!func_30())
	{
		return player_id();
	}
	if (!_network_is_player_index_valid(iVar0))
	{
		return player_id();
	}
	iVar1 = iVar0;
	if (iVar1 < 0)
	{
		return player_id();
	}
	if (iVar1 >= 32)
	{
		return player_id();
	}
	return iVar0;
}

void func_8(var uParam0)
{
	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	iVar34 = _databinding_read_data_int_from_parent(uParam0, "ability_card_loadout_index");
	func_27(iVar34);
	func_11(uParam0, &Var0, 2, -1);
	func_31(&(Global_1940311->f_1433.f_4189.f_1985), &Var0, iVar34);
	func_25(Var0);
	func_26(Var0);
}

void func_9(var uParam0)
{
	iVar0 = _databinding_read_data_int_from_parent(uParam0, "ability_card_upgrade_tier_index");
	Var1.f_7 = 1;
	Var1.f_13 = -1;
	Var1.f_15 = -1;
	Var1.f_16 = -1;
	Var1.f_17 = -1;
	Var1.f_18 = -1;
	Var1.f_19 = -1;
	Var1.f_32 = -1;
	func_11(uParam0, &Var1, 2, iVar0);
	func_32(Global_1940311->f_1433.f_4189.f_1797[iVar0], Var1);
	func_33(&(Global_1940311->f_1433.f_4189.f_2034), Var1);
	func_34(iVar0);
	func_26(Var1);
}

int func_10(int iParam0)
{
	iVar0 = Global_1940311->f_1433.f_4189.f_2085;
	if (iVar0 == 304794100)
	{
		return 0;
	}
	iVar1 = func_35(Global_1940311->f_1433.f_4189.f_2085, 1);
	iVar2 = (iVar1 + iParam0);
	if (iVar2 < 2)
	{
		iVar2 = 4;
	}
	else if (iVar2 > 4)
	{
		iVar2 = 2;
	}
	iVar0 = func_36(iVar2, 1);
	func_37(iVar0, 0);
	return 1;
}

void func_11(var uParam0, var uParam1, int iParam2, int iParam3)
{
	func_38(uParam0, uParam1);
	func_39(*uParam1, uParam1, iParam2, iParam3);
}

void func_12(var uParam0)
{
	func_40(*uParam0);
	if (_0xf7c180f57f85d0b8(-1641598689))
	{
		_uistatemachine_request_transition(-1641598689, -1316999016);
	}
}

void func_13(int iParam0)
{
	func_27(iParam0);
	if (func_41(iParam0))
	{
		iVar0 = 304794100;
	}
	else if (!func_42(iParam0, 1))
	{
		iVar0 = func_44(func_43(iParam0, 1));
	}
	else
	{
		iVar0 = 1467455271;
	}
	func_37(iVar0, func_43(iParam0, 1));
	if (_0xf7c180f57f85d0b8(-1641598689))
	{
		_uistatemachine_request_transition(-1641598689, -2109508723);
	}
}

int func_14(int iParam0)
{
	vVar0.x = func_43(iParam0, 1);
	return func_19(iParam0, 3, vVar0);
}

int func_15()
{
	return Global_1940311->f_1433.f_4189.f_2086;
}

int func_16(var uParam0, int iParam1)
{
	vVar0.x = uParam0;
	return func_19(iParam1, 0, vVar0);
}

bool func_17(int iParam0)
{
	switch (iParam0)
	{
		case -1103707655:
		case 205718222:
		case 866168015:
			return true;
		default:
			break;
	}
	return false;
}

int func_18(int iParam0, int iParam1)
{
	return func_45(iParam0, iParam1, 1, 0, 1, 0);
}

int func_19(int iParam0, int iParam1, vector3 vParam2)
{
	if (func_46(iParam0))
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return 0;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_5 = -1;
	Var0.f_5.f_1 = -1;
	Var0 = iParam1;
	Var0.f_2 = { vParam2 };
	Var0.f_1 = 0;
	*Global_1139381->f_4621.f_52[iParam0] = { Var0 };
	return 1;
}

int func_20(var uParam0)
{
	if (!func_47(*uParam0))
	{
		return -1;
	}
	if (!func_48(uParam0->f_2, 0))
	{
		return -1;
	}
	if (!_0xb881ca836cc4b6d4(&(uParam0->f_3)))
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar6 = func_21(iVar1);
		Var2 = { func_49(iVar6, uParam0->f_3, 1635590003, 1) };
		if (!_0xb881ca836cc4b6d4(&Var2))
		{
		}
		else
		{
			iVar0 = iVar1;
			iVar1++;
		}
	}
	return iVar0;
}

int func_21(int iParam0)
{
	iVar0 = iParam0;
	return func_50(iVar0);
}

int func_22(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2094367662:
			return 18;
		case -1799662290:
			return 5;
		case -1756972389:
			return 10;
		case -1721456649:
			return 20;
		case -1505156133:
			return 33;
		case -1443085621:
			return 32;
		case -1415025746:
			return 34;
		case -1296457610:
			return 3;
		case -1214886674:
			return 24;
		case -950892868:
			return 26;
		case -910204339:
			return 14;
		case -806881894:
			return 21;
		case -556609435:
			return 25;
		case -490770640:
			return 30;
		case -36524866:
			return 22;
		case 0:
			return 0;
		case 83146574:
			return 31;
		case 98090593:
			return 11;
		case 115034433:
			return 12;
		case 396773658:
			return 1;
		case 459036629:
			return 16;
		case 610102849:
			return 13;
		case 615198061:
			return 19;
		case 771930716:
			return 4;
		case 915626679:
			return 2;
		case 996070251:
			return 8;
		case 1098820611:
			return 15;
		case 1136837330:
			return 23;
		case 1581755436:
			return 7;
		case 1670807098:
			return 27;
		case 1777305156:
			return 6;
		case 1878949572:
			return 29;
		case 1935456893:
			return 17;
		case 2067900487:
			return 9;
		case 2132497367:
			return 28;
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

void func_23(var uParam0, int iParam1)
{
	_databinding_write_data_string(uParam0->f_2, iParam1->f_11);
	_databinding_write_data_string(uParam0->f_3, iParam1->f_12);
	_databinding_write_data_hash_string(uParam0->f_4, iParam1->f_9);
	_databinding_write_data_hash_string(uParam0->f_5, iParam1->f_10);
	_databinding_write_data_hash_string(uParam0->f_41, func_51(iParam1->f_1, iParam1->f_13));
	_databinding_write_data_hash_string(uParam0->f_6, *iParam1);
	_databinding_write_data_bool(uParam0->f_7, func_52(iParam1));
	_databinding_write_data_bool(uParam0->f_34, iParam1->f_22);
	_databinding_write_data_bool(uParam0->f_12, iParam1->f_20);
	_databinding_write_data_bool(uParam0->f_13, !iParam1->f_20);
	_databinding_write_data_bool(uParam0->f_35, func_53(iParam1));
	_databinding_write_data_bool(uParam0->f_14, !iParam1->f_21);
	_databinding_write_data_bool(uParam0->f_15, iParam1->f_30);
	_databinding_write_data_bool(uParam0->f_16, iParam1->f_29);
	_databinding_write_data_bool(uParam0->f_17, iParam1->f_31);
	_databinding_write_data_string(uParam0->f_18, func_54(iParam1));
	_databinding_write_data_bool(uParam0->f_19, iParam1->f_24);
	_databinding_write_data_bool(uParam0->f_20, iParam1->f_23);
	_databinding_write_data_bool(uParam0->f_21, iParam1->f_25);
	_databinding_write_data_bool(uParam0->f_22, (!iParam1->f_14 && iParam1->f_20));
	_databinding_write_data_bool(uParam0->f_23, !iParam1->f_14);
	_databinding_write_data_bool(uParam0->f_24, (!iParam1->f_14 && func_55(4)));
	_databinding_write_data_string(uParam0->f_25, func_56(iParam1));
	_databinding_write_data_bool(uParam0->f_26, func_57(iParam1));
	_databinding_write_data_bool(uParam0->f_27, func_58(iParam1));
	_databinding_write_data_bool(uParam0->f_28, func_59(iParam1));
	_databinding_write_data_bool(uParam0->f_29, (iParam1->f_31 && func_59(iParam1)));
	_databinding_write_data_bool(uParam0->f_30, (iParam1->f_25 && func_59(iParam1)));
	if (iParam1->f_26)
	{
		_databinding_write_data_string(uParam0->f_31, func_60(0));
		_databinding_write_data_string(uParam0->f_32, func_61(0));
	}
	else
	{
		_databinding_write_data_string(uParam0->f_31, func_60(func_62(iParam1->f_17)));
		_databinding_write_data_string(uParam0->f_32, func_61(func_63(iParam1->f_17)));
	}
	_databinding_write_data_int(uParam0->f_33, iParam1->f_18);
	if (!iParam1->f_21)
	{
		_databinding_write_data_string(uParam0->f_43, func_64(iParam1->f_16));
	}
	_databinding_write_data_int(uParam0->f_36, iParam1->f_13);
	_databinding_write_data_int(uParam0->f_38, iParam1->f_15);
	_databinding_write_data_int(uParam0->f_40, func_65(iParam1->f_13));
	_databinding_write_data_bool(uParam0->f_10, iParam1->f_23);
	_databinding_write_data_bool(uParam0->f_11, !iParam1->f_21);
	_databinding_write_data_bool(uParam0->f_8, false);
	_databinding_write_data_bool(uParam0->f_9, false);
}

void func_24(var uParam0, struct<16> Param1, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34)
{
	func_23(uParam0, &Param1);
	iVar0 = func_65(Param1.f_13);
	_databinding_write_data_string(uParam0->f_44, _create_var_string(2, "NET_PLAYER_ABILITY_FOCUS_XP_INFO", Param1.f_15, iVar0));
	_databinding_write_data_string(uParam0->f_45, func_66(&Param1));
	_databinding_write_data_string(uParam0->f_47, func_67(&Param1));
	_databinding_write_data_bool(uParam0->f_46, func_68(&Param1));
	_databinding_write_data_bool(uParam0->f_48, func_69(&Param1));
}

void func_25(var uParam0)
{
	func_70(uParam0);
}

void func_26(struct<34> Param0)
{
	if (!func_71())
	{
		return;
	}
	iVar0 = func_72();
	if (func_73())
	{
		_databinding_write_data_bool(Global_1940311->f_1433.f_4189.f_5, true);
	}
	else if (iVar0 == 1)
	{
		_databinding_write_data_bool(Global_1940311->f_1433.f_4189.f_5, true);
	}
	else
	{
		_databinding_write_data_bool(Global_1940311->f_1433.f_4189.f_5, false);
	}
	_databinding_write_data_string(Global_1940311->f_1433.f_4189.f_4, func_74(Param0));
}

void func_27(int iParam0)
{
	func_75(iParam0);
	func_76(iParam0);
}

void func_28(int iParam0)
{
	Global_1940311->f_1433.f_4189.f_2083 = iParam0;
}

void func_29(int iParam0, int iParam1)
{
	if (func_77())
	{
		func_78(iParam0, 1);
	}
	else
	{
		func_79(iParam1, iParam0, 1);
	}
}

bool func_30()
{
	return network_is_gamer_in_my_session(&(Global_1940311->f_1433.f_8));
}

void func_31(var uParam0, int iParam1, int iParam2)
{
	func_80(iParam2, iParam1);
	func_23(uParam0, iParam1);
}

void func_32(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34)
{
	func_23(uParam0, &uParam1);
}

void func_33(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34)
{
	func_23(uParam0, &uParam1);
	_databinding_write_data_string(uParam0->f_45, func_66(&uParam1));
	_databinding_write_data_string(uParam0->f_47, func_67(&uParam1));
	_databinding_write_data_bool(uParam0->f_46, func_68(&uParam1));
	_databinding_write_data_bool(uParam0->f_48, func_69(&uParam1));
}

void func_34(int iParam0)
{
	func_81(iParam0);
}

int func_35(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1794176813:
			return 4;
		case 0:
			return 0;
		case 304794100:
			return 1;
		case 1272538178:
			return 3;
		case 1467455271:
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

int func_36(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 304794100;
		case 2:
			return 1467455271;
		case 3:
			return 1272538178;
		case 4:
			return -1794176813;
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

void func_37(int iParam0, int iParam1)
{
	if (!func_82(iParam0))
	{
		func_83(iParam1);
		return;
	}
	if (iParam0 == 304794100)
	{
		_databinding_write_data_bool(Global_1940311->f_1433.f_4189.f_13, false);
	}
	else
	{
		_databinding_write_data_bool(Global_1940311->f_1433.f_4189.f_13, true);
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iVar1 = func_36(iVar0, 1);
			_databinding_write_data_bool(Global_1940311->f_1433.f_4189.f_15[iVar0]->f_1, iParam0 == iVar1);
			iVar0++;
		}
	}
	_databinding_write_data_string(Global_1940311->f_1433.f_4189.f_3, func_84(iParam0));
	func_85(iParam0);
	func_83(iParam1);
}

void func_38(var uParam0, var uParam1)
{
	*uParam1 = _databinding_read_data_hash_string_from_parent(uParam0, "ability_card_ability_hash");
	uParam1->f_13 = _databinding_read_data_int_from_parent(uParam0, "ability_card_tier");
}

bool func_39(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_86())
	{
		return false;
	}
	return func_87(iParam0, uParam1, iParam2, iParam3);
}

void func_40(int iParam0)
{
	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	Var34.f_7 = 1;
	Var34.f_13 = -1;
	Var34.f_15 = -1;
	Var34.f_16 = -1;
	Var34.f_17 = -1;
	Var34.f_18 = -1;
	Var34.f_19 = -1;
	Var34.f_32 = -1;
	iVar68 = 0;
	while (iVar68 < 3)
	{
		Var0 = { Var34 };
		func_39(iParam0, &Var0, 2, iVar68);
		func_32(Global_1940311->f_1433.f_4189.f_1797[iVar68], Var0);
		if (func_88(iVar68))
		{
			func_33(&(Global_1940311->f_1433.f_4189.f_2034), Var0);
		}
		iVar68++;
	}
}

bool func_41(int iParam0)
{
	if (!func_89(iParam0))
	{
		return false;
	}
	return iParam0 == 0;
}

bool func_42(int iParam0, bool bParam1)
{
	iVar0 = func_90(iParam0);
	Var1 = { func_91(bParam1) };
	iVar5 = func_92(&Var1, iVar0, bParam1);
	bVar6 = iVar5 == false;
	return bVar6;
}

int func_43(int iParam0, bool bParam1)
{
	if (func_73())
	{
		return &(Global_1139381->f_4796.f_34[iParam0]);
	}
	iVar0 = func_90(iParam0);
	Var1 = { func_91(bParam1) };
	iVar5 = func_93(Var1, iVar0, 0, bParam1);
	if (!func_94(iVar5))
	{
		return 0;
	}
	return func_95(iVar5);
}

int func_44(int iParam0)
{
	if (!func_47(iParam0))
	{
		return 0;
	}
	return (Global_1139381->f_11.f_1562[func_22(iParam0, 1)])->f_1;
}

int func_45(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if ((bParam4 && iParam1 == -915411861) && func_96(iParam0, 59806960))
	{
		iParam1 = 59806960;
	}
	if (func_97(iParam0))
	{
		return func_99(func_98(iParam0, 0), iParam1, bParam3, 1);
	}
	if (!func_100(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_46(int iParam0)
{
	if (!func_89(iParam0))
	{
		return true;
	}
	if (Global_1139381->f_4621.f_52[iParam0]->f_1 != -1)
	{
		return true;
	}
	if (func_73())
	{
		return true;
	}
	return false;
}

bool func_47(int iParam0)
{
	iVar0 = func_22(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 35)
	{
		return false;
	}
	return true;
}

bool func_48(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

struct<4> func_49(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_48(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_101(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_50(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1814149473;
		case 1:
			return -2038682661;
		case 2:
			return 1942029925;
		default:
			break;
	}
	return 0;
}

int func_51(int iParam0, int iParam1)
{
	iVar0 = iParam1;
	return func_102(iParam0, iVar0);
}

bool func_52(int iParam0)
{
	return iParam0->f_1 == 304794100;
}

bool func_53(int iParam0)
{
	return (iParam0->f_20 && !iParam0->f_22);
}

char* func_54(int iParam0)
{
	if (iParam0->f_26 || iParam0->f_27)
	{
		return "IB_REDEEM";
	}
	if (iParam0->f_30)
	{
		return "IB_BUY_NOW";
	}
	return "IB_BUY";
}

bool func_55(int iParam0)
{
	iVar0 = func_103();
	switch (iVar0)
	{
		case 0:
			return true;
		case 1:
			return iParam0 == 0;
		case 2:
			return iParam0 == 1;
		case 3:
			return iParam0 == 2;
		case 4:
			return iParam0 == 5;
		default:
			break;
	}
	return false;
}

char* func_56(int iParam0)
{
	if (iParam0->f_24)
	{
		return "IB_UPGRADE_NOW";
	}
	return "IB_UPGRADE";
}

bool func_57(int iParam0)
{
	return (iParam0->f_29 || iParam0->f_23);
}

bool func_58(int iParam0)
{
	return (!func_57(iParam0) && (iParam0->f_30 || iParam0->f_24));
}

int func_59(int iParam0)
{
	if (iParam0->f_26)
	{
		return 1;
	}
	else if (func_57(iParam0))
	{
		if (iParam0->f_17 < 0)
		{
			return 0;
		}
		else if (func_104(iParam0->f_17))
		{
			return 1;
		}
	}
	else if (func_58(iParam0))
	{
		if (iParam0->f_18 < 0)
		{
			return 0;
		}
		else if (func_105(iParam0->f_18))
		{
			return 1;
		}
	}
	return 0;
}

var func_60(int iParam0)
{
	return _0x2b6846401d68e563(to_float(iParam0), 0);
}

var func_61(int iParam0)
{
	if (iParam0 == 0)
	{
		return "00";
	}
	return func_60(iParam0);
}

int func_62(int iParam0)
{
	return (iParam0 / 100);
}

int func_63(int iParam0)
{
	return (iParam0 % 100);
}

var func_64(int iParam0)
{
	if (iParam0 <= -1)
	{
		return "";
	}
	_int_to_string(iParam0, "%i", &Var0);
	return func_106(Var0);
}

int func_65(int iParam0)
{
	iVar0 = iParam0;
	return func_107(iVar0);
}

char* func_66(var uParam0)
{
	if (uParam0->f_20)
	{
		return "IB_UPGRADE";
	}
	if (uParam0->f_26)
	{
		return "SHOP_REWARD_PRICE";
	}
	else if (uParam0->f_27)
	{
		return "SHOP_OFFER_PRICE";
	}
	return "IB_PRICE";
}

char* func_67(var uParam0)
{
	if (uParam0->f_26)
	{
		return "IB_FREE";
	}
	else if (uParam0->f_20 && !uParam0->f_25)
	{
		return "NET_PLAYER_ABILITY_ADDITIONAL_XP_REQUIRED";
	}
	return "";
}

int func_68(var uParam0)
{
	if (uParam0->f_26)
	{
		return 1;
	}
	else if (!uParam0->f_25 && uParam0->f_20)
	{
		return 1;
	}
	return 0;
}

bool func_69(var uParam0)
{
	return (uParam0->f_21 && !uParam0->f_14);
}

void func_70(var uParam0)
{
	Global_1940311->f_1433.f_4189.f_2084 = uParam0;
}

bool func_71()
{
	return _is_app_active(-1641598689);
}

int func_72()
{
	return Global_1940311->f_1433.f_4189.f_2083;
}

bool func_73()
{
	return (func_108(0) && func_108(5));
}

char* func_74(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33)
{
	sVar0 = func_110(func_109(), 109029619);
	if (func_73())
	{
		return _create_var_string(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_OVERRIDEN");
	}
	else if (func_72() == 1)
	{
		return _create_var_string(10, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_REMOTE_PLAYER_MODE", sVar0);
	}
	if (!func_71())
	{
		return "INVALID";
	}
	iVar1 = _0x96fd694fe5be55dc(-1641598689);
	if (iVar1 == 1738917854)
	{
		return func_111(func_15());
	}
	else if (iVar1 == -477213344)
	{
		return func_112(&uParam0);
	}
	else if (iVar1 == 756463805)
	{
		return _create_var_string(2, "NET_PLAYER_ABILITY_FOOTER_UPGRADE");
	}
	return "INVALID";
}

void func_75(int iParam0)
{
	Global_1940311->f_1433.f_4189.f_2086 = iParam0;
}

void func_76(int iParam0)
{
	_databinding_write_data_int(Global_1940311->f_1433.f_4189.f_12, iParam0);
}

bool func_77()
{
	return func_72() == 0;
}

void func_78(int iParam0, bool bParam1)
{
	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	iVar34 = func_43(iParam0, 1);
	if (!func_39(iVar34, &Var0, 0, -1))
	{
		func_113(&Var0);
	}
	func_114(iParam0, Global_1940311->f_1433.f_4189.f_1579[iParam0], Var0);
	if (bParam1 && func_115(iParam0))
	{
		func_31(&(Global_1940311->f_1433.f_4189.f_1985), &Var0, iParam0);
	}
}

void func_79(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = iParam0;
	iVar1 = &(*Global_1145091)[iVar0]->f_10[iParam1];
	Var2.f_7 = 1;
	Var2.f_13 = -1;
	Var2.f_15 = -1;
	Var2.f_16 = -1;
	Var2.f_17 = -1;
	Var2.f_18 = -1;
	Var2.f_19 = -1;
	Var2.f_32 = -1;
	Var2.f_13 = (*Global_1145091)[iVar0]->f_10[iParam1]->f_1;
	if (!func_39(iVar1, &Var2, 1, -1))
	{
		func_113(&Var2);
	}
	func_116(iParam1, Global_1940311->f_1433.f_4189.f_1579[iParam1], Var2, (*Global_1145091)[iVar0]->f_10[iParam1]->f_2);
	if (bParam2 && func_115(iParam1))
	{
		func_31(&(Global_1940311->f_1433.f_4189.f_1985), &Var2, iParam1);
	}
}

void func_80(int iParam0, int iParam1)
{
	if (!func_47(*iParam1))
	{
		iParam1->f_11 = func_117(iParam0);
		iParam1->f_12 = func_118(iParam0);
	}
}

void func_81(int iParam0)
{
	Global_1940311->f_1433.f_4189.f_2087 = iParam0;
}

bool func_82(int iParam0)
{
	if (iParam0 == Global_1940311->f_1433.f_4189.f_2085)
	{
		return false;
	}
	Global_1940311->f_1433.f_4189.f_2085 = iParam0;
	return true;
}

void func_83(int iParam0)
{
	if (iParam0 == 0)
	{
		func_119(0);
	}
	else
	{
		func_119(func_120(iParam0));
	}
}

char* func_84(int iParam0)
{
	switch (iParam0)
	{
		case 304794100:
			return _create_var_string(2, "NET_PLAYER_ABILITY_CATEGORY_TITLE_DEAD_EYE");
		case 1467455271:
			return _create_var_string(2, "NET_PLAYER_ABILITY_CATEGORY_TITLE_COMBAT");
		case 1272538178:
			return _create_var_string(2, "NET_PLAYER_ABILITY_CATEGORY_TITLE_RECOVERY");
		case -1794176813:
			return _create_var_string(2, "NET_PLAYER_ABILITY_CATEGORY_TITLE_DEFENSE");
		default:
			break;
	}
	return "NULL";
}

void func_85(int iParam0)
{
	_databinding_clear_binding_array(Global_1940311->f_1433.f_4189.f_36);
	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	iVar35 = 0;
	while (iVar35 < 35)
	{
		iVar34 = &Global_1139381->f_11.f_1562.f_1611[iVar35];
		if (!func_39(iVar34, &Var0, 2, -1))
		{
		}
		else if (!func_121(Var0))
		{
		}
		else if (Var0.f_33)
		{
		}
		else if (!func_47(Var0))
		{
		}
		else if (iParam0 != Var0.f_1)
		{
		}
		else
		{
			_databinding_insert_ui_item_to_list_from_context_string_alias(Global_1940311->f_1433.f_4189.f_36, iVar35, "ability_card", &(Global_1940311->f_1433.f_4189.f_37[func_22(iVar34, 1)]));
		}
		iVar35++;
	}
}

bool func_86()
{
	return _0x603ac35fd4602c76(Global_1139381->f_8);
}

int func_87(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (iParam2 == 2)
	{
		bVar0 = func_72() == true;
	}
	else if (iParam2 == 1)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam3 != -1)
	{
		bVar1 = true;
	}
	if (!func_47(iParam0))
	{
		func_113(uParam1);
		return 0;
	}
	*uParam1 = &Global_1139381->f_11.f_1562[func_22(iParam0, 1)];
	uParam1->f_2 = (Global_1139381->f_11.f_1562[func_22(iParam0, 1)])->f_2;
	uParam1->f_1 = (Global_1139381->f_11.f_1562[func_22(iParam0, 1)])->f_1;
	uParam1->f_8 = (Global_1139381->f_11.f_1562[func_22(iParam0, 1)])->f_3;
	uParam1->f_16 = (Global_1139381->f_11.f_1562[func_22(iParam0, 1)])->f_4;
	uParam1->f_32 = (Global_1139381->f_11.f_1562[func_22(iParam0, 1)])->f_7;
	uParam1->f_33 = (Global_1139381->f_11.f_1562[func_22(iParam0, 1)])->f_8;
	if (!func_48(uParam1->f_2, 0))
	{
		func_113(uParam1);
		return 0;
	}
	bVar2 = true;
	if (!func_47(*uParam1))
	{
		func_113(uParam1);
		return 0;
	}
	if (!bVar0)
	{
		if (func_73())
		{
			uParam1->f_19 = func_122(*uParam1);
			uParam1->f_20 = 1;
			uParam1->f_21 = 1;
			uParam1->f_9 = (Global_1139381->f_11.f_1562[func_22(iParam0, 1)])->f_5;
			uParam1->f_10 = (Global_1139381->f_11.f_1562[func_22(iParam0, 1)])->f_6;
			if (func_89(uParam1->f_19))
			{
				uParam1->f_13 = Global_1139381->f_4796.f_34[uParam1->f_19]->f_1;
			}
			else
			{
				uParam1->f_13 = 0;
			}
		}
		else
		{
			uParam1->f_19 = func_123(*uParam1);
			iVar3 = func_90(uParam1->f_19);
			uParam1->f_3 = { func_49(uParam1->f_2, func_91(bVar2), iVar3, bVar2) };
			uParam1->f_21 = func_124(uParam1);
			uParam1->f_13 = func_20(uParam1);
			uParam1->f_15 = func_125(uParam1);
			uParam1->f_20 = func_126(uParam1);
			uParam1->f_22 = func_127(uParam1);
			uParam1->f_14 = func_128(uParam1);
			uParam1->f_23 = func_129(uParam1);
			uParam1->f_24 = func_130(uParam1);
			uParam1->f_25 = func_131(uParam1);
			uParam1->f_26 = func_132(uParam1);
			uParam1->f_27 = func_133(uParam1);
			uParam1->f_29 = func_134(uParam1);
			uParam1->f_30 = func_135(uParam1);
			uParam1->f_31 = func_136(uParam1);
			iVar4 = -915411861;
			if (uParam1->f_27)
			{
				iVar4 = uParam1->f_28;
			}
			if (!uParam1->f_20)
			{
				uParam1->f_17 = func_18((Global_1139381->f_11.f_1562[func_22(iParam0, 1)])->f_2, iVar4);
			}
			else
			{
				uParam1->f_17 = func_137(uParam1->f_13, iVar4);
			}
			uParam1->f_18 = func_18((Global_1139381->f_11.f_1562[func_22(iParam0, 1)])->f_2, -570078785);
			if (bVar1)
			{
				uParam1->f_26 = 0;
				uParam1->f_27 = 0;
				if (uParam1->f_23)
				{
					uParam1->f_23 = iParam3 == uParam1->f_13 + 1;
				}
				if (uParam1->f_25)
				{
					uParam1->f_25 = iParam3 == uParam1->f_13 + 1;
				}
				if (uParam1->f_20)
				{
					uParam1->f_20 = uParam1->f_13 >= iParam3;
				}
				uParam1->f_13 = iParam3;
			}
			if (uParam1->f_20)
			{
				uParam1->f_9 = (Global_1139381->f_11.f_1562[func_22(iParam0, 1)])->f_3;
				uParam1->f_10 = (Global_1139381->f_11.f_1562[func_22(iParam0, 1)])->f_6;
			}
			else
			{
				func_138(uParam1);
			}
		}
	}
	else
	{
		iVar5 = network_get_player_from_gamer_handle(&(Global_1940311->f_1433.f_8));
		uParam1->f_9 = (Global_1139381->f_11.f_1562[func_22(iParam0, 1)])->f_3;
		uParam1->f_10 = (Global_1139381->f_11.f_1562[func_22(iParam0, 1)])->f_6;
		if (_network_is_player_index_valid(iVar5))
		{
			uParam1->f_19 = func_139(*uParam1, iVar5);
			if (func_89(uParam1->f_19))
			{
				vVar6 = { *(*Global_1145091)[iVar5]->f_10[uParam1->f_19] };
				uParam1->f_13 = vVar6.y;
				uParam1->f_21 = func_140(&(vVar6.f_2), 1);
			}
		}
	}
	uParam1->f_11 = func_141(uParam1);
	uParam1->f_12 = func_142(*(Global_1139381->f_11.f_1562[func_22(iParam0, 1)]), uParam1);
	return 1;
}

bool func_88(int iParam0)
{
	return func_143() == iParam0;
}

bool func_89(int iParam0)
{
	if (iParam0 > 3)
	{
		return false;
	}
	if (iParam0 < 0)
	{
		return false;
	}
	return true;
}

int func_90(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1317351007;
		case 1:
			return -500478573;
		case 2:
			return -806573802;
		case 3:
			return -1109949204;
		default:
			break;
	}
	return -1060513333;
}

struct<4> func_91(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_101(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_49(1328661203, func_144(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_49(1328661203, func_144(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_49(1328661203, func_144(), -1591664384, bParam0);
}

int func_92(var uParam0, bool bParam1, bool bParam2)
{
	return _0x033ee4b89f3ac545(func_101(bParam2), uParam0, bParam1);
}

int func_93(struct<4> Param0, int iParam4, int iParam5, bool bParam6)
{
	Var0.f_9 = -1591664384;
	if (func_145(Param0, iParam4, &Var0, iParam5, bParam6))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_94(int iParam0)
{
	iVar0 = func_146(iParam0);
	if ((iVar0 == 810656527 || iVar0 == 2088138839) || iVar0 == 129583122)
	{
		return true;
	}
	return false;
}

int func_95(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (iParam0 == Global_1139381->f_11.f_1562[iVar0]->f_2)
		{
			return &(Global_1139381->f_11.f_1562[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

bool func_96(int iParam0, int iParam1)
{
	if (!func_48(iParam0, 0))
	{
		return false;
	}
	if (func_97(iParam0))
	{
		return func_147(func_98(iParam0, 0), iParam1, 0);
	}
	return _0xdee7b3c76ed664be(iParam0, iParam1) > 0;
}

bool func_97(int iParam0)
{
	if (func_148(iParam0, 75135761))
	{
		return true;
	}
	return false;
}

int func_98(int iParam0, bool bParam1)
{
	if (!func_48(iParam0, 0))
	{
		return func_150(func_149(iParam0), bParam1);
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

int func_99(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_151(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_100(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_48(iParam0, 0))
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
		func_152(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

int func_101(bool bParam0)
{
	if (func_153() == -1)
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

int func_102(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 304794100:
			switch (iParam1)
			{
				case 0:
					return -880922108;
				case 1:
					return 712437748;
				case 2:
					return -132314303;
				default:
					break;
			}
			break;
		case 1467455271:
			switch (iParam1)
			{
				case 0:
					return 1098244389;
				case 1:
					return 856704090;
				case 2:
					return -1750135398;
				default:
					break;
			}
			break;
		case -1794176813:
			switch (iParam1)
			{
				case 0:
					return -216428280;
				case 1:
					return 283298970;
				case 2:
					return -1044664755;
				default:
					break;
			}
			break;
		case 1272538178:
			switch (iParam1)
			{
				case 0:
					return -75395410;
				case 1:
					return 1111923763;
				case 2:
					return 1350842542;
				default:
					break;
			}
			break;
	}
	return 1105014447;
}

int func_103()
{
	return Global_1139381->f_4621.f_155;
}

bool func_104(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_153() == 0)
	{
		return func_154(iParam0);
	}
	return iParam0 <= func_155();
}

bool func_105(int iParam0)
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

var func_106(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

int func_107(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return &(Global_1139381->f_11.f_1562.f_1647[0]);
		case 1:
			return &(Global_1139381->f_11.f_1562.f_1647[1]);
		default:
			break;
	}
	return -1;
}

bool func_108(int iParam0)
{
	return func_156(&(Global_1956200->f_1565), iParam0, 1);
}

char* func_109()
{
	return func_157(Global_1940311->f_1433.f_8.f_7);
}

char* func_110(char* sParam0, int iParam1)
{
	sParam0 = _format_player_name_string(sParam0);
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_158(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

char* func_111(int iParam0)
{
	if (!func_159(iParam0))
	{
		if (func_41(iParam0))
		{
			return _create_var_string(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_ACTIVE_LOCKED");
		}
		else
		{
			return _create_var_string(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_PASSIVE_LOCKED", func_160(iParam0));
		}
	}
	else if (!func_42(iParam0, 1))
	{
		if (func_41(iParam0))
		{
			return _create_var_string(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_ACTIVE_EQUIPPED");
		}
		else
		{
			return _create_var_string(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_PASSIVE_EQUIPPED");
		}
	}
	else if (func_41(iParam0))
	{
		return _create_var_string(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_ACTIVE_OPEN");
	}
	else
	{
		return _create_var_string(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_PASSIVE_OPEN");
	}
	return "INVALID";
}

char* func_112(var uParam0)
{
	if (func_161(uParam0))
	{
		return _create_var_string(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_BUY_LOCKED", func_162(uParam0->f_2, 1));
	}
	else if (uParam0->f_26 || uParam0->f_27)
	{
		return _create_var_string(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_BUY_VOUCHER");
	}
	else if (uParam0->f_29)
	{
		return _create_var_string(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_BUY_CASH");
	}
	else if (uParam0->f_23)
	{
		return _create_var_string(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_UPGRADE");
	}
	else if (uParam0->f_22)
	{
		if (uParam0->f_14)
		{
			return _create_var_string(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_EQUIPPED_MAX");
		}
		else
		{
			return _create_var_string(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_EQUIPPED");
		}
	}
	else
	{
		return _create_var_string(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_UNEQUIPPED");
	}
	return "INVALID";
}

void func_113(var uParam0)
{
	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	func_138(&Var0);
	*uParam0 = { Var0 };
}

void func_114(int iParam0, var uParam1, struct<23> Param2, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35)
{
	bVar0 = func_159(iParam0);
	if (func_73())
	{
		_databinding_write_data_bool(uParam1->f_47, false);
		_databinding_write_data_bool(uParam1->f_46, false);
		_databinding_write_data_bool(uParam1->f_50, true);
		_databinding_write_data_bool(uParam1->f_49, false);
		_databinding_write_data_bool(uParam1->f_48, false);
		func_23(uParam1, &Param2);
		return;
	}
	func_23(uParam1, &Param2);
	if (bVar0)
	{
		func_163(&(Global_1139381->f_4621.f_36[iParam0]->f_2), 1);
	}
	else
	{
		func_164(&(Global_1139381->f_4621.f_36[iParam0]->f_2), 1);
	}
	_databinding_write_data_bool(uParam1->f_46, (bVar0 && func_77()));
	_databinding_write_data_bool(uParam1->f_47, ((bVar0 && func_77()) && func_55(0)));
	_databinding_write_data_bool(uParam1->f_48, (Param2.f_22 && func_77()));
	_databinding_write_data_bool(uParam1->f_49, ((Param2.f_22 && func_77()) && func_55(3)));
	_databinding_write_data_bool(uParam1->f_50, bVar0);
	_databinding_write_data_string(uParam1->f_51, func_64(func_160(iParam0)));
}

bool func_115(int iParam0)
{
	return Global_1940311->f_1433.f_4189.f_2086 == iParam0;
}

void func_116(int iParam0, var uParam1, struct<34> Param2, var uParam36)
{
	func_165(uParam1, Param2);
	_databinding_write_data_bool(uParam1->f_46, false);
	_databinding_write_data_bool(uParam1->f_47, false);
	_databinding_write_data_bool(uParam1->f_48, false);
	_databinding_write_data_bool(uParam1->f_49, false);
	_databinding_write_data_bool(uParam1->f_50, func_140(&uParam36, 1));
	_databinding_write_data_string(uParam1->f_51, func_64(func_160(iParam0)));
}

char* func_117(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return _create_var_string(2, "NET_PLAYER_ABILITY_ACTIVE_SLOT_FOCUS_TITLE");
		case 1:
			return _create_var_string(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_1_FOCUS_TITLE");
		case 2:
			return _create_var_string(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_2_FOCUS_TITLE");
		case 3:
			return _create_var_string(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_3_FOCUS_TITLE");
		default:
			break;
	}
	return "NULL";
}

char* func_118(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return _create_var_string(2, "NET_PLAYER_ABILITY_ACTIVE_SLOT_FOCUS_DESCRIPTION");
		case 1:
			return _create_var_string(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_FOCUS_DESCRIPTION");
		case 2:
			return _create_var_string(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_FOCUS_DESCRIPTION");
		case 3:
			return _create_var_string(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_FOCUS_DESCRIPTION");
		default:
			break;
	}
	return "NULL";
}

void func_119(int iParam0)
{
	_databinding_write_data_int(Global_1940311->f_1433.f_4189.f_11, iParam0);
}

int func_120(int iParam0)
{
	if (!func_47(iParam0))
	{
		return 0;
	}
	return (Global_1139381->f_11.f_1562[func_22(iParam0, 1)])->f_7;
}

bool func_121(vector3 vParam0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33)
{
	if (func_148(vParam0.z, 216050813))
	{
		if (!_unlock_is_unlocked(-1387714323))
		{
			return false;
		}
	}
	return true;
}

int func_122(int iParam0)
{
	if (!func_73())
	{
		return -1;
	}
	if (!func_47(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (&Global_1139381->f_4796.f_34[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_123(int iParam0)
{
	if (!func_47(iParam0))
	{
		return -1;
	}
	iVar2 = func_166(iParam0);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = func_90(iVar0);
		if (func_167(iVar2, iVar1, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_124(var uParam0)
{
	if (!func_121(*uParam0))
	{
		return false;
	}
	if (func_126(uParam0))
	{
		return true;
	}
	return _unlock_is_unlocked(uParam0->f_2);
}

int func_125(var uParam0)
{
	if (uParam0->f_13 >= 2)
	{
		return 0;
	}
	if (!func_47(*uParam0))
	{
		return -1;
	}
	if (!func_48(uParam0->f_2, 0))
	{
		return -1;
	}
	if (!_0xb881ca836cc4b6d4(&(uParam0->f_3)))
	{
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < 3)
	{
		iVar7 = func_21(iVar2);
		Var3 = { func_49(iVar7, uParam0->f_3, 1635590003, 1) };
		if (!_0xb881ca836cc4b6d4(&Var3))
		{
		}
		else
		{
			iVar8 = func_168(iVar2);
			iVar0 = func_169(1412640604, Var3, iVar8, 1, 0, 0);
			iVar1 = (iVar1 + iVar0);
			iVar2++;
		}
	}
	return iVar1;
}

int func_126(var uParam0)
{
	return func_170(uParam0->f_2, 1);
}

int func_127(var uParam0)
{
	if (!func_47(*uParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_171(iVar0, 1) == uParam0->f_2)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_128(var uParam0)
{
	return uParam0->f_13 >= 2;
}

bool func_129(var uParam0)
{
	return ((!uParam0->f_14 && uParam0->f_20) && func_172(uParam0));
}

int func_130(var uParam0)
{
	return 0;
}

var func_131(var uParam0)
{
	return (uParam0->f_24 || uParam0->f_23);
}

bool func_132(var uParam0)
{
	uParam0->f_28 = 0;
	return ((!uParam0->f_20 && func_173(uParam0)) && func_174(uParam0->f_2, &(uParam0->f_28)));
}

bool func_133(var uParam0)
{
	if (uParam0->f_26)
	{
		return false;
	}
	uParam0->f_28 = 0;
	return ((!uParam0->f_20 && func_173(uParam0)) && func_175(uParam0->f_2, &(uParam0->f_28)));
}

bool func_134(var uParam0)
{
	return (((!uParam0->f_20 && func_173(uParam0)) && !uParam0->f_26) && !uParam0->f_27);
}

int func_135(var uParam0)
{
	return 0;
}

var func_136(var uParam0)
{
	return (((uParam0->f_30 || uParam0->f_29) || uParam0->f_26) || uParam0->f_27);
}

int func_137(int iParam0, int iParam1)
{
	iVar0 = func_21(iParam0 + 1);
	return func_18(iVar0, iParam1);
}

void func_138(var uParam0)
{
	uParam0->f_9 = -902468816;
	uParam0->f_10 = 291057091;
}

int func_139(int iParam0, int iParam1)
{
	if (!_network_is_player_index_valid(iParam1))
	{
		return -1;
	}
	if (!func_47(iParam0))
	{
		return -1;
	}
	iVar1 = iParam1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (&(*Global_1145091)[iVar1]->f_10[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_140(var uParam0, int iParam1)
{
	return func_176(*uParam0, iParam1);
}

char* func_141(var uParam0)
{
	return _create_var_string(42, "MP_ABILITY_CARD_DISPLAY_STRING", _create_var_string(0, uParam0->f_8), _create_var_string(2, func_177(uParam0->f_13)));
}

char* func_142(struct<10> Param0, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46)
{
	if (!func_178(uParam46->f_13))
	{
		return "NULL";
	}
	return _create_var_string(0, Param0.f_9[uParam46->f_13]->f_11);
}

int func_143()
{
	return Global_1940311->f_1433.f_4189.f_2087;
}

struct<4> func_144()
{
	return Var0;
}

bool func_145(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4, var uParam5, int iParam6, bool bParam7)
{
	iVar0 = func_101(bParam7);
	if (_0x033ee4b89f3ac545(iVar0, &uParam0, bParam4) <= iParam6)
	{
		return false;
	}
	if (!_0xbe012571b25f5aca(iVar0, &uParam0, bParam4, iParam6, uParam5))
	{
		return false;
	}
	return true;
}

int func_146(int iParam0)
{
	if (!func_48(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_147(int iParam0, int iParam1, bool bParam2)
{
	if (!func_179(iParam0))
	{
		return false;
	}
	if (_0xf540239f9937033b(iParam0, iParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_180(iParam0, iParam1);
	}
	return true;
}

bool func_148(int iParam0, int iParam1)
{
	if (!func_48(iParam0, 0))
	{
		return func_181(func_149(iParam0), iParam1);
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

int func_149(int iParam0)
{
	return iParam0;
}

int func_150(int iParam0, bool bParam1)
{
	if (!func_182(iParam0, 2))
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

bool func_151(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_179(iParam0))
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
		func_183(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

void func_152(int iParam0, int iParam1, var uParam2, int iParam3)
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
			if ((*uParam2)[iVar0]->f_1 == 0 && func_184(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

int func_153()
{
	return Global_1572887->f_13;
}

bool func_154(int iParam0)
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

int func_155()
{
	if (func_153() == 0)
	{
		return _network_get_cash_balance();
	}
	return _money_get_cash_balance();
}

bool func_156(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

var func_157(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

char* func_158(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

bool func_159(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return _unlock_is_unlocked(-1815917332);
		case 1:
			return _unlock_is_unlocked(446771306);
		case 2:
			return _unlock_is_unlocked(214930631);
		case 3:
			return _unlock_is_unlocked(1057421621);
		default:
			break;
	}
	return false;
}

int func_160(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 10;
		case 2:
			return 20;
		case 3:
			return 40;
		default:
			break;
	}
	return -1;
}

bool func_161(var uParam0)
{
	return (!uParam0->f_20 && !func_173(uParam0));
}

int func_162(int iParam0, bool bParam1)
{
	if (!func_48(iParam0, 0))
	{
		return -1;
	}
	_0x7c1c2062cfad06fe(iParam0, &Var0);
	if (Var0.f_1 < 1)
	{
		return -1;
	}
	else if (func_148(iParam0, 81450561) || func_148(iParam0, 1342455455))
	{
		return -1;
	}
	switch (Var0)
	{
		case -1399517481:
		case -999519443:
		case 128291088:
			if (bParam1)
			{
				return Var0.f_1;
			}
			return -1;
		case -55206167:
			return 1;
		case -697100746:
			return Var0.f_1;
		default:
			break;
	}
	return -1;
}

void func_163(var uParam0, int iParam1)
{
	func_185(uParam0, iParam1);
}

void func_164(var uParam0, int iParam1)
{
	func_186(uParam0, iParam1);
}

void func_165(var uParam0, struct<14> Param1, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34)
{
	_databinding_write_data_string(uParam0->f_2, Param1.f_11);
	_databinding_write_data_string(uParam0->f_3, Param1.f_12);
	_databinding_write_data_hash_string(uParam0->f_4, Param1.f_9);
	_databinding_write_data_hash_string(uParam0->f_5, Param1.f_10);
	_databinding_write_data_hash_string(uParam0->f_41, func_51(Param1.f_1, Param1.f_13));
	_databinding_write_data_hash_string(uParam0->f_6, Param1);
	_databinding_write_data_int(uParam0->f_36, Param1.f_13);
	_databinding_write_data_bool(uParam0->f_7, false);
	_databinding_write_data_bool(uParam0->f_34, false);
	_databinding_write_data_bool(uParam0->f_12, false);
	_databinding_write_data_bool(uParam0->f_13, false);
	_databinding_write_data_bool(uParam0->f_35, false);
	_databinding_write_data_bool(uParam0->f_14, false);
	_databinding_write_data_bool(uParam0->f_15, false);
	_databinding_write_data_bool(uParam0->f_16, false);
	_databinding_write_data_bool(uParam0->f_17, false);
	_databinding_write_data_string(uParam0->f_18, "");
	_databinding_write_data_bool(uParam0->f_19, false);
	_databinding_write_data_bool(uParam0->f_20, false);
	_databinding_write_data_bool(uParam0->f_21, false);
	_databinding_write_data_bool(uParam0->f_22, false);
	_databinding_write_data_bool(uParam0->f_23, false);
	_databinding_write_data_bool(uParam0->f_23, false);
	_databinding_write_data_string(uParam0->f_25, "");
	_databinding_write_data_bool(uParam0->f_26, false);
	_databinding_write_data_bool(uParam0->f_27, false);
	_databinding_write_data_bool(uParam0->f_28, false);
	_databinding_write_data_string(uParam0->f_31, "");
	_databinding_write_data_string(uParam0->f_32, "");
	_databinding_write_data_int(uParam0->f_33, -1);
	_databinding_write_data_string(uParam0->f_43, "");
	_databinding_write_data_int(uParam0->f_38, -1);
	_databinding_write_data_int(uParam0->f_40, -1);
	_databinding_write_data_bool(uParam0->f_10, false);
	_databinding_write_data_bool(uParam0->f_11, false);
	_databinding_write_data_bool(uParam0->f_8, false);
	_databinding_write_data_bool(uParam0->f_9, false);
}

int func_166(int iParam0)
{
	if (!func_47(iParam0))
	{
		return 0;
	}
	return (Global_1139381->f_11.f_1562[func_22(iParam0, 1)])->f_2;
}

bool func_167(int iParam0, int iParam1, bool bParam2)
{
	if (!func_94(iParam0))
	{
		return false;
	}
	Var0 = { func_91(bParam2) };
	if (func_169(iParam0, Var0, iParam1, bParam2, 0, 0) >= 1)
	{
		return true;
	}
	return false;
}

int func_168(int iParam0)
{
	iVar0 = iParam0;
	return func_187(iVar0);
}

int func_169(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_48(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_188(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_49(iParam0, Param1, iParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_101(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_101(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

int func_170(int iParam0, bool bParam1)
{
	if (!func_94(iParam0))
	{
		return 0;
	}
	Var0 = { func_91(bParam1) };
	if (func_169(iParam0, Var0, -1060513333, bParam1, 0, 0) >= 1)
	{
		return 1;
	}
	else if (func_169(iParam0, Var0, 1317351007, bParam1, 0, 0) >= 1)
	{
		return 1;
	}
	else if (func_169(iParam0, Var0, -500478573, bParam1, 0, 0) >= 1)
	{
		return 1;
	}
	else if (func_169(iParam0, Var0, -806573802, bParam1, 0, 0) >= 1)
	{
		return 1;
	}
	else if (func_169(iParam0, Var0, -1109949204, bParam1, 0, 0) >= 1)
	{
		return 1;
	}
	return 0;
}

int func_171(int iParam0, bool bParam1)
{
	Var0 = { func_91(bParam1) };
	return func_93(Var0, func_90(iParam0), 0, bParam1);
}

bool func_172(var uParam0)
{
	return uParam0->f_15 >= func_65(uParam0->f_13);
}

bool func_173(var uParam0)
{
	return _unlock_is_visible(uParam0->f_2);
}

bool func_174(int iParam0, var uParam1)
{
	*uParam1 = func_189(iParam0, 1);
	return *uParam1 != 0;
}

bool func_175(int iParam0, var uParam1)
{
	*uParam1 = func_190(iParam0, 1, 0);
	return *uParam1 != 0;
}

bool func_176(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

char* func_177(int iParam0)
{
	iVar0 = iParam0;
	return func_191(iVar0);
}

bool func_178(int iParam0)
{
	if (iParam0 >= 0 && iParam0 <= 2)
	{
		return true;
	}
	return false;
}

bool func_179(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_buy_award_key_valid(iParam0);
}

bool func_180(int iParam0, int iParam1)
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

int func_181(int iParam0, int iParam1)
{
	if (!func_182(iParam0, 2))
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

bool func_182(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(iParam0, iParam1);
}

void func_183(int iParam0, int iParam1, var uParam2, int iParam3)
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
			if ((*uParam2)[iVar0]->f_1 == 0 && func_184(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

int func_184(int iParam0)
{
	if (!func_48(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

void func_185(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_186(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_187(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -2047978619;
		case 1:
			return -586319254;
		case 2:
			return 249896112;
		default:
			break;
	}
	return 0;
}

int func_188(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

int func_189(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_192(iVar0, 1, 0);
		if (!func_100(iParam0, iVar33, &Var2, &iVar1, 1, 0))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_193(&(Var2[iVar34])))
				{
					if (!bParam1 || func_194(&(Var2[iVar34]), 0, 1, 1) > 0)
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

int func_190(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar40 = func_192(iVar0, 0, 1);
		if (!func_100(iParam0, iVar40, &Var9, &iVar1, 1, 0))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_195(&(Var9[iVar41])))
				{
					if (!bParam1 || func_194(&(Var9[iVar41]), 0, 1, 1) > 0)
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

char* func_191(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MP_PLAYER_CARD_TIER_ONE";
		case 1:
			return "MP_PLAYER_CARD_TIER_TWO";
		case 2:
			return "MP_PLAYER_CARD_TIER_THREE";
		default:
			break;
	}
	return "NP_CARD_TIER_INVALID";
}

int func_192(int iParam0, bool bParam1, bool bParam2)
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

bool func_193(int iParam0)
{
	return func_184(iParam0) == 1946043663;
}

int func_194(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	iVar0 = 0;
	if (!func_48(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_146(iParam0);
	if (iVar1 == 307971639 || (bParam1 && iVar1 == -427144552))
	{
		iVar2 = func_196(iParam0, 1);
		if (iVar2 != 0)
		{
			return get_ped_ammo_by_type(Global_34, iVar2);
		}
	}
	else if (iVar1 == -427144552)
	{
		return func_197(iParam0, 0);
	}
	if (func_188(iParam0, -455129387) != 0)
	{
		iVar0 = _0xe787f05dfc977bde(func_101(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_198(iParam0, bParam2) };
		if (!_0xb881ca836cc4b6d4(&Var3))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_101(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

bool func_195(int iParam0)
{
	return func_184(iParam0) == -126813555;
}

int func_196(int iParam0, int iParam1)
{
	if (!func_48(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_146(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_148(iParam0, 1399091007))
	{
		func_199(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_197(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_200(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_202(&Var0, func_201(0));
	}
	if (!func_203(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_204(iVar14);
	return uVar15;
}

struct<4> func_198(int iParam0, bool bParam1)
{
	Var0 = { func_205(iParam0, bParam1, 0) };
	return func_49(iParam0, Var0, Var0.f_4, bParam1);
}

void func_199(int iParam0, var uParam1, var uParam2)
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

struct<14> func_200(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

struct<4> func_201(bool bParam0)
{
	iVar0 = func_101(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_4)))
		{
			Global_1293346->f_4 = { func_49(923904168, func_91(bParam0), -740156546, bParam0) };
		}
		return Global_1293346->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_16)))
		{
			Global_1293346->f_16 = { func_49(923904168, func_91(bParam0), -740156546, 0) };
		}
		return Global_1293346->f_16;
	}
	return func_49(923904168, func_91(bParam0), -740156546, 0);
}

void func_202(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_203(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_101(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_204(int iParam0)
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

struct<5> func_205(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_91(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_146(iParam0);
	switch (iVar5)
	{
		case -1037537535:
			Var0 = { func_49(889965687, Var0, 1034665895, bParam1) };
			Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			break;
		case -427144552:
			Var0 = { func_201(bParam1) };
			if (bParam2 && func_206(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_207(iParam0, &Var0, 1728382685, 0, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_207(iParam0, &Var0, -649335959, 0, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_208(iParam0, &Var6, 1728382685))
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
			Var0 = { func_209(bParam1) };
			switch (func_184(iParam0))
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
			if (func_210(iParam0, -1823706425))
			{
				Var0 = { func_49(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_210(iParam0, -1483207246))
			{
				Var0 = { func_49(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1911121386))
			{
				Var0 = { func_49(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_210(iParam0, -1653629781))
			{
				Var0 = { func_49(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_211(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_210(iParam0, -1653629781))
			{
				Var0 = { func_49(1384535894, Var0, 1784584921, bParam1) };
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

bool func_206(int iParam0, bool bParam1)
{
	if (func_184(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_212();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_207(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_169(iParam0, *uParam1, iParam2, bParam3, 1, iParam4) > 0;
}

bool func_208(int iParam0, var uParam1, int iParam2)
{
	if (func_213(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_209(bool bParam0)
{
	iVar0 = func_101(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_8)))
		{
			Global_1293346->f_8 = { func_49(271701509, func_91(bParam0), 12999093, 0) };
		}
		return Global_1293346->f_8;
	}
	return func_49(271701509, func_91(bParam0), 12999093, 0);
}

bool func_210(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_184(iParam0);
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
			if (func_214(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_211(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_215(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

bool func_212()
{
	return (func_216(-1185145312, 0, 0, 0) > 0 && func_217(func_49(889965687, func_91(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

bool func_213(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_101(0);
	*uParam1 = { func_49(iParam0, func_201(0), iParam3, 0) };
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

bool func_214(int iParam0, int iParam1, int iParam2)
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

bool func_215(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_101(bParam2);
	}
	if (!_0x9700e8efc4ab9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

int func_216(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_218(iParam0) && !bParam2)
	{
		return get_ped_ammo_by_type(Global_34, iParam0);
	}
	return _0xe787f05dfc977bde(func_101(bParam1), iParam0, iParam3);
}

int func_217(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_219(&uParam0, iParam4, bParam5, iParam6);
}

bool func_218(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_219(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (func_220(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_220(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_101(bParam3);
	}
	if (!_0x22e590f108289a9d(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_215(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

