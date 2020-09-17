void __EntryFunction__()
{
	if (has_force_cleanup_occurred(515))
	{
		func_1(&Local_13, 10);
	}
	else
	{
		func_1(&Local_13, 0);
	}
	Local_13.f_1 = ScriptParam_0.f_2;
	Local_13.f_6 = ScriptParam_0.f_4;
	Local_13.f_3 = ScriptParam_0;
	Local_13.f_4 = ScriptParam_0.f_3;
	while (func_2(&Local_13))
	{
		wait(0);
	}
	terminate_this_thread();
}

void func_1(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	uParam0->f_5 = get_game_timer();
}

bool func_2(var uParam0)
{
	func_3(uParam0);
	switch (*uParam0)
	{
		case 0:
			func_4(uParam0);
			break;
		case 1:
			if (func_5(uParam0->f_5, 4000))
			{
				func_1(uParam0, 9);
			}
			else
			{
				func_6(uParam0);
				Jump @905; //curOff = 126
				_0x9f9a829c6751f3c7(get_player_index(), 37, 1);
				if (func_5(uParam0->f_5, 4000))
				{
					func_1(uParam0, 9);
				}
				else
				{
					if (has_anim_event_fired(uParam0->f_3, 822176400) || uParam0->f_4)
					{
						func_7(uParam0->f_3);
						func_1(uParam0, 9);
					}
					Jump @905; //curOff = 207
					_0x9f9a829c6751f3c7(get_player_index(), 37, 1);
					if (func_5(uParam0->f_5, 4000))
					{
						func_1(uParam0, 9);
					}
					else
					{
						if (has_anim_event_fired(uParam0->f_3, 822176400) || uParam0->f_4)
						{
							func_8(uParam0->f_3);
							func_1(uParam0, 9);
						}
						Jump @905; //curOff = 288
						_0x9f9a829c6751f3c7(get_player_index(), 37, 1);
						if (func_5(uParam0->f_5, 4000))
						{
							func_1(uParam0, 9);
						}
						else
						{
							if (has_anim_event_fired(uParam0->f_3, 822176400) || uParam0->f_4)
							{
								func_9(uParam0->f_3, uParam0->f_1, &(uParam0->f_6));
								func_1(uParam0, 9);
							}
							Jump @905; //curOff = 378
							if (func_5(uParam0->f_5, 4000))
							{
								func_1(uParam0, 9);
							}
							else
							{
								if (has_anim_event_fired(uParam0->f_3, 822176400) || uParam0->f_4)
								{
									if ((func_10(uParam0->f_1) == 81053684 || func_11(uParam0->f_1, 160827531)) && !func_11(uParam0->f_1, -1303648999))
									{
										func_12(uParam0->f_3, uParam0->f_1);
									}
									else
									{
										func_13(uParam0->f_3, uParam0->f_1);
									}
									func_1(uParam0, 9);
								}
								Jump @905; //curOff = 522
								if (func_5(uParam0->f_5, 4000))
								{
									func_1(uParam0, 9);
								}
								else
								{
									if (has_anim_event_fired(uParam0->f_3, 822176400) || uParam0->f_4)
									{
										if (func_10(uParam0->f_1) == 81053684 || func_11(uParam0->f_1, 160827531))
										{
											func_14(uParam0->f_3, uParam0->f_1);
										}
										else
										{
											func_13(uParam0->f_3, uParam0->f_1);
										}
										func_1(uParam0, 9);
									}
									Jump @905; //curOff = 647
									if (func_5(uParam0->f_5, 4000))
									{
										func_1(uParam0, 9);
									}
									else
									{
										if (has_anim_event_fired(uParam0->f_3, 822176400) || uParam0->f_4)
										{
											func_9(uParam0->f_3, uParam0->f_2, &(uParam0->f_6));
											uParam0->f_5 = func_15();
											func_1(uParam0, 8);
										}
										Jump @905; //curOff = 734
										if (func_5(uParam0->f_5, 4000))
										{
											func_1(uParam0, 9);
										}
										else if (_0xec7e480ff8bd0bed(uParam0->f_3) && !uParam0->f_4)
										{
											if (!has_anim_event_fired(uParam0->f_3, 108107462))
											{
											}
											else
											{
												Jump @905; //curOff = 803
												if (func_16())
												{
												}
												else if (func_17())
												{
													func_18();
												}
												else
												{
													if (Global_34 == uParam0->f_3)
													{
														Global_1952637->f_3485 = 0;
													}
													func_19(uParam0->f_1, 0);
													func_1(uParam0, 9);
													Jump @905; //curOff = 866
													if (Global_34 == uParam0->f_3)
													{
														Global_1952637->f_3485 = 0;
													}
													func_1(uParam0, 10);
													Jump @905; //curOff = 895
													return false;
												}
											}
											return true;
										}
									}
								}
							}
						}
					}
				}
			}
			default:
				break;
	}
}

void func_3(var uParam0)
{
	if (func_20(uParam0) == 10)
	{
		return;
	}
	if (_0x9e4ef615e307fbbe())
	{
		if (Global_34 == uParam0->f_3)
		{
			uParam0->f_4 = 1;
			return;
		}
		else
		{
			uParam0->f_4 = 1;
			return;
		}
	}
	if (!does_entity_exist(uParam0->f_3))
	{
		func_1(uParam0, 10);
		return;
	}
	if (is_entity_dead(uParam0->f_3))
	{
		if (Global_34 == uParam0->f_3)
		{
			func_1(uParam0, 9);
			return;
		}
		else
		{
			func_1(uParam0, 10);
			return;
		}
	}
}

void func_4(var uParam0)
{
	if (is_ped_a_player(uParam0->f_3))
	{
		if (Global_34 == uParam0->f_3)
		{
			if (Global_1952637->f_3485)
			{
				func_1(uParam0, 10);
			}
			else
			{
				Global_1952637->f_3485 = 1;
				func_1(uParam0, 1);
			}
		}
		else
		{
			func_1(uParam0, 1);
		}
	}
	else
	{
		func_1(uParam0, 10);
	}
}

bool func_5(int iParam0, int iParam1)
{
	if (absi((get_game_timer() - iParam0)) >= iParam1)
	{
		return true;
	}
	return false;
}

void func_6(var uParam0)
{
	if (!func_21(uParam0->f_1))
	{
		func_1(uParam0, 10);
		return;
	}
	bVar2 = false;
	bVar3 = true;
	if (func_22(&iVar0))
	{
		if (uParam0->f_1 == iVar0)
		{
			bVar2 = true;
			bVar3 = true;
		}
		else
		{
			uParam0->f_2 = iVar0;
			bVar3 = false;
		}
	}
	iVar4 = func_10(uParam0->f_1);
	bVar5 = func_23(&uVar1);
	if (bVar3)
	{
		iVar6 = func_24(uParam0->f_1);
		if (iVar6 != -358215195 && func_25(uParam0->f_6, 1))
		{
			func_1(uParam0, 6);
		}
		else if (bVar2)
		{
			if (bVar5)
			{
				if ((iVar4 == 81053684 || func_11(uParam0->f_1, 160827531)) && !func_11(uParam0->f_1, -1303648999))
				{
					func_1(uParam0, 4);
				}
				else
				{
					func_1(uParam0, 6);
				}
			}
			else
			{
				func_1(uParam0, 5);
			}
		}
		else if (((iVar4 == 81053684 || func_11(uParam0->f_1, 160827531)) && func_25(uParam0->f_6, 2)) && !func_11(uParam0->f_1, -1303648999))
		{
			func_1(uParam0, 2);
			func_26(&(uParam0->f_6), 2);
		}
		else
		{
			func_1(uParam0, 3);
		}
	}
	else
	{
		func_1(uParam0, 7);
	}
}

void func_7(int iParam0)
{
	if (!func_23(&iVar0))
	{
		return;
	}
	_0x2208438012482a1a(iParam0, false, false);
	_0xc494c76a34266e82(iParam0, 13);
	func_27(iVar0, 2);
	func_28(23, 0, 0, 0, 0);
}

void func_8(int iParam0)
{
	if (!func_22(&iVar0))
	{
		return;
	}
	if (func_23(&uVar1))
	{
		return;
	}
	_0x2208438012482a1a(iParam0, false, false);
	_0xc494c76a34266e82(iParam0, 0);
	if (add_shocking_event_for_entity(1925708505, iParam0, -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1) > 0)
	{
	}
	func_27(iVar0, 1);
	func_28(23, 0, 0, 0, 0);
}

int func_9(int iParam0, int iParam1, var uParam2)
{
	if (!func_21(iParam1))
	{
		return 0;
	}
	if (!func_29(iParam1))
	{
		return 0;
	}
	_0x2208438012482a1a(iParam0, false, false);
	_0xc494c76a34266e82(iParam0, 13);
	func_26(uParam2, 1);
	func_27(iParam1, 8);
	func_28(23, 0, 0, 0, 0);
	return 1;
}

int func_10(int iParam0)
{
	if (!func_30(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_11(int iParam0, int iParam1)
{
	if (!func_30(iParam0, 0))
	{
		return func_32(func_31(iParam0), iParam1);
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

void func_12(int iParam0, int iParam1)
{
	if (func_10(iParam1) != 81053684 && !func_11(iParam1, 160827531))
	{
		return;
	}
	_0x2208438012482a1a(iParam0, false, false);
	func_27(iParam1, 2);
	func_28(23, 0, 0, 0, 0);
}

void func_13(int iParam0, int iParam1)
{
	if (func_10(iParam1) != -525676072 && !func_11(iParam1, -1303648999))
	{
		return;
	}
	_0x2208438012482a1a(iParam0, false, false);
	_0xc494c76a34266e82(iParam0, 0);
	if (add_shocking_event_for_entity(1925708505, iParam0, -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1) > 0)
	{
	}
	func_27(iParam1, 1);
	func_28(23, 0, 0, 0, 0);
}

void func_14(int iParam0, int iParam1)
{
	if (func_10(iParam1) != 81053684 && !func_11(iParam1, 160827531))
	{
		return;
	}
	_0x2208438012482a1a(iParam0, false, false);
	_0xc494c76a34266e82(iParam0, 0);
	if (add_shocking_event_for_entity(1925708505, iParam0, -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1) > 0)
	{
	}
	func_27(iParam1, 1);
	func_28(23, 0, 0, 0, 0);
}

int func_15()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_16()
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

bool func_17()
{
	iVar0 = 0;
	if (func_33(81053684, &iVar0))
	{
		return true;
	}
	if (func_33(-525676072, &iVar0))
	{
		return true;
	}
	return false;
}

void func_18()
{
	if (!func_17())
	{
		return;
	}
	func_34();
}

int func_19(int iParam0, int iParam1)
{
	bVar3 = func_29(iParam0);
	if (func_10(iParam0) == -525676072 || func_11(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_23(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_35();
			}
			else
			{
				iVar0 = func_36();
			}
		}
		else if (bVar1)
		{
			iVar0 = func_37();
		}
		else
		{
			iVar0 = func_38();
		}
	}
	else if (func_22(&iVar2))
	{
		if (func_11(iVar2, -1303648999) || func_10(iVar2) == -525676072)
		{
			iVar0 = func_35();
		}
		else
		{
			iVar0 = func_36();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_37();
	}
	else
	{
		iVar0 = func_38();
	}
	if (iVar0 != 0)
	{
		Global_1952637->f_3483 = get_game_timer();
		_task_item_interaction(Global_34, iParam0, iVar0, 1, iParam1, -1082130432);
		return 1;
	}
	return 0;
}

int func_20(var uParam0)
{
	return *uParam0;
}

bool func_21(int iParam0)
{
	return func_39(iParam0);
}

bool func_22(int iParam0)
{
	if (func_33(81053684, iParam0))
	{
		return true;
	}
	if (func_33(-525676072, iParam0))
	{
		return true;
	}
	return false;
}

bool func_23(int iParam0)
{
	if (-1829635046 == func_40(81053684))
	{
		if (func_22(iParam0))
		{
			return true;
		}
	}
	else if (func_33(-525676072, iParam0) || func_11(func_41(1742327865), -1303648999))
	{
		if (func_22(iParam0))
		{
			return true;
		}
	}
	return false;
}

int func_24(int iParam0)
{
	Var0 = { func_42(iParam0, 1, 0) };
	return func_43(Var0.f_4);
}

bool func_25(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_26(var uParam0, int iParam1)
{
	func_44(uParam0, iParam1);
}

void func_27(int iParam0, int iParam1)
{
	iVar1 = func_24(iParam0);
	iVar2 = func_45(iVar1, 1);
	if (iVar2 == 39)
	{
		return;
	}
	if (func_46(iParam0) && func_47(iParam0))
	{
		iParam1 |= 64;
	}
	if ((iVar1 == 1108822547 && func_48(32768)) || iParam0 != &Global_1952637->f_1675.f_1[iVar2])
	{
		if (func_46(&(Global_1952637->f_1675.f_1[iVar2])) && func_47(&(Global_1952637->f_1675.f_1[iVar2])))
		{
			iParam1 |= 32;
		}
		if (Global_1952637->f_83[iVar2]->f_1 > 1)
		{
			iParam1 |= 16;
		}
		iVar3 = 0;
		switch (func_10(iParam0))
		{
			case 81053684:
				if (func_33(-525676072, &uVar0))
				{
					iVar3 = func_45(func_49(-525676072), 1);
					if (iVar3 == 39)
					{
					}
					else
					{
						Global_1952637->f_2685[iVar3] = &Global_1952637->f_83[iVar3];
						if (func_11(iParam0, -180472385) && func_33(1024667707, &uVar0))
						{
							iVar3 = func_45(func_49(1024667707), 1);
							if (iVar3 == 39)
							{
							}
							else
							{
								Global_1952637->f_2685[iVar3] = &Global_1952637->f_83[iVar3];
								Jump @513; //curOff = 342
								if (func_48(32768))
								{
									func_51(func_50(iVar2, 1));
								}
								if (func_33(81053684, &uVar4))
								{
									iVar3 = func_45(func_49(81053684), 1);
									if (iVar3 == 39)
									{
									}
									else
									{
										Global_1952637->f_2685[iVar3] = &Global_1952637->f_83[iVar3];
										Jump @513; //curOff = 428
										if (!func_11(iParam0, 160827531))
										{
										}
										else
										{
											if (func_33(-525676072, &uVar0))
											{
												iVar3 = func_45(func_49(-525676072), 1);
												if (iVar3 == 39)
												{
												}
												else
												{
													Global_1952637->f_2685[iVar3] = &Global_1952637->f_83[iVar3];
												}
												Global_1952637->f_2685[iVar2] = iParam0;
												func_52(iVar1, iParam1, 6);
											}
										}
									}
								}
							}
						}
					}
				}
				default:
					break;
		}
	}
}

void func_28(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_53(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_54(Var0);
}

bool func_29(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = 0;
	if (func_22(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return true;
		}
	}
	return false;
}

bool func_30(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_31(int iParam0)
{
	return iParam0;
}

int func_32(int iParam0, int iParam1)
{
	if (!func_55(iParam0, 2))
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

bool func_33(int iParam0, int iParam1)
{
	iVar1 = func_45(func_49(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1952637->f_1675.f_1[iVar1] != 0 && &Global_1952637->f_1675.f_1[iVar1] != &Global_1952637->f_83[iVar1])
	{
		iVar0 = &Global_1952637->f_1675.f_1[iVar1];
		if (func_10(iVar0) == iParam0 || (iParam0 == 81053684 && func_11(iVar0, 160827531)))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

void func_34()
{
	bVar0 = false;
	if (func_33(81053684, &iVar1))
	{
		if (func_39(iVar1))
		{
			func_56(81053684);
			bVar0 = true;
		}
	}
	if (func_33(-525676072, &iVar1))
	{
		if (func_39(iVar1))
		{
			func_56(-525676072);
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		_0xc494c76a34266e82(Global_34, 13);
	}
}

int func_35()
{
	iVar0 = 1549701178;
	switch (func_57())
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

int func_36()
{
	iVar0 = 614608656;
	switch (func_57())
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

int func_37()
{
	iVar0 = -1832677570;
	switch (func_57())
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

int func_38()
{
	iVar0 = 1623252156;
	switch (func_57())
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

bool func_39(int iParam0)
{
	iVar0 = func_10(iParam0);
	if (((iVar0 == 81053684 || iVar0 == -525676072) || func_11(iParam0, 160827531)) || func_11(iParam0, -1303648999))
	{
		return true;
	}
	return false;
}

int func_40(int iParam0)
{
	iVar0 = func_45(func_49(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1952637->f_1675.f_1[iVar0]->f_1;
	}
	return 0;
}

int func_41(int iParam0)
{
	return &(Global_1952637->f_1675.f_1[func_45(iParam0, 1)]);
}

struct<5> func_42(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_58(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_59(iParam0);
	switch (iVar5)
	{
		case -1037537535:
			Var0 = { func_60(889965687, Var0, 1034665895, bParam1) };
			Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			break;
		case -427144552:
			Var0 = { func_61(bParam1) };
			if (bParam2 && func_62(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_63(iParam0, &Var0, 1728382685, 0, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_63(iParam0, &Var0, -649335959, 0, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_64(iParam0, &Var6, 1728382685))
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
			Var0 = { func_65(bParam1) };
			switch (func_10(iParam0))
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
			if (func_66(iParam0, -1823706425))
			{
				Var0 = { func_60(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_66(iParam0, -1483207246))
			{
				Var0 = { func_60(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1911121386))
			{
				Var0 = { func_60(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_66(iParam0, -1653629781))
			{
				Var0 = { func_60(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_67(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_66(iParam0, -1653629781))
			{
				Var0 = { func_60(1384535894, Var0, 1784584921, bParam1) };
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

int func_43(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1952637->f_83[iVar0]->f_9 == iParam0)
		{
			return func_50(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

void func_44(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_45(int iParam0, int iParam1)
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

int func_46(int iParam0)
{
	switch (func_10(iParam0))
	{
		case -2061583405:
			return 1;
		case -1719060085:
			return 1;
		case -999503751:
			return 1;
		case -525676072:
			return 1;
		case 81053684:
			return 1;
		case 119907797:
			return 1;
		case 1388798186:
			return 1;
		default:
			break;
	}
	if (func_11(iParam0, 160827531))
	{
		return 1;
	}
	return 0;
}

int func_47(int iParam0)
{
	return func_68(iParam0, &uVar0);
}

bool func_48(int iParam0)
{
	return (Global_1952637 && iParam0) != 0;
}

int func_49(int iParam0)
{
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_43(iVar0);
}

int func_50(int iParam0, int iParam1)
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

void func_51(int iParam0)
{
	func_69(iParam0, 8, 6);
}

void func_52(int iParam0, int iParam1, int iParam2)
{
	(Global_1952637->f_2685[func_45(iParam0, 1)])->f_1 = ((Global_1952637->f_2685[func_45(iParam0, 1)])->f_1 || iParam1);
}

void func_53(int iParam0)
{
	Global_1952637 = (Global_1952637 || iParam0);
}

void func_54(struct<4> Param0)
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
			if (func_70(Param0))
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
			func_71(Param0);
			*Global_1952637->f_736[Global_1952637->f_924] = { Param0 };
			Global_1952637->f_918++;
			Global_1952637->f_924 = (Global_1952637->f_924 + 1 % 25);
			func_53(8);
			break;
		case 24:
		case 25:
			if (Global_1952637->f_919 >= 25)
			{
				return;
			}
			if (func_70(Param0))
			{
				return;
			}
			func_71(Param0);
			*Global_1952637->f_635[Global_1952637->f_919] = { Param0 };
			Global_1952637->f_919++;
			func_53(8);
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
			if (func_70(Param0))
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
			func_71(Param0);
			*Global_1952637->f_837[Global_1952637->f_922] = { Param0 };
			Global_1952637->f_920++;
			Global_1952637->f_922 = (Global_1952637->f_922 + 1 % 20);
			func_53(8);
			break;
			break;
	}
}

bool func_55(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(iParam0, iParam1);
}

void func_56(int iParam0)
{
	iVar0 = func_45(func_49(iParam0), 1);
	if (iVar0 == 39)
	{
		return;
	}
	func_27(&(Global_1952637->f_83[iVar0]), 8);
	func_28(23, 0, 0, 0, 0);
}

int func_57()
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
		else if ((((is_weapon_valid(iVar0) && _is_weapon_two_handed(iVar0)) && !func_72(iVar0)) && !_is_ped_getting_into_a_mount_seat(Global_34, true)) && !(is_ped_in_any_vehicle(Global_34, false) && !_0xa24c1d341c6e0d53(1, 0, 0)))
		{
			return 3;
		}
		else if (_is_weapon_binoculars(iVar0))
		{
			return 1;
		}
		else if ((is_weapon_valid(iVar0) && func_72(iVar0)) || _is_weapon_lasso(iVar0))
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

struct<4> func_58(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_73(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_60(1328661203, func_74(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_60(1328661203, func_74(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_60(1328661203, func_74(), -1591664384, bParam0);
}

int func_59(int iParam0)
{
	if (!func_30(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_60(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_30(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_73(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

struct<4> func_61(bool bParam0)
{
	iVar0 = func_73(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_4)))
		{
			Global_1293346->f_4 = { func_60(923904168, func_58(bParam0), -740156546, bParam0) };
		}
		return Global_1293346->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_16)))
		{
			Global_1293346->f_16 = { func_60(923904168, func_58(bParam0), -740156546, 0) };
		}
		return Global_1293346->f_16;
	}
	return func_60(923904168, func_58(bParam0), -740156546, 0);
}

bool func_62(int iParam0, bool bParam1)
{
	if (func_10(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_75();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_63(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_76(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

bool func_64(int iParam0, var uParam1, int iParam2)
{
	if (func_77(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_65(bool bParam0)
{
	iVar0 = func_73(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_8)))
		{
			Global_1293346->f_8 = { func_60(271701509, func_58(bParam0), 12999093, 0) };
		}
		return Global_1293346->f_8;
	}
	return func_60(271701509, func_58(bParam0), 12999093, 0);
}

bool func_66(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_10(iParam0);
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
			if (func_78(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_67(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_79(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_68(int iParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_1952637->f_3334.f_26)
	{
		if (iParam0 == &Global_1952637->f_3334[*uParam1])
		{
			return 1;
		}
		*uParam1++;
	}
	return 0;
}

void func_69(int iParam0, int iParam1, int iParam2)
{
	(Global_1952637->f_83[func_45(iParam0, 1)])->f_11 = ((Global_1952637->f_83[func_45(iParam0, 1)])->f_11 - ((Global_1952637->f_83[func_45(iParam0, 1)])->f_11 && iParam1));
}

bool func_70(int iParam0)
{
	return &Global_1952637->f_595[iParam0] > 0;
}

void func_71(int iParam0)
{
	Global_1952637->f_595[iParam0] = &Global_1952637->f_595[iParam0] + 1;
}

bool func_72(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

int func_73(bool bParam0)
{
	if (func_80() == -1)
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

struct<4> func_74()
{
	return Var0;
}

bool func_75()
{
	return (func_81(-1185145312, 0, 0, 0) > 0 && func_82(func_60(889965687, func_58(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_76(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_30(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_83(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_60(iParam0, Param1, iParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_73(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_73(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

bool func_77(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_73(0);
	*uParam1 = { func_60(iParam0, func_61(0), iParam3, 0) };
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

bool func_78(int iParam0, int iParam1, int iParam2)
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

bool func_79(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_73(bParam2);
	}
	if (!_0x9700e8efc4ab9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

int func_80()
{
	return Global_1572887->f_13;
}

int func_81(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_84(iParam0) && !bParam2)
	{
		return get_ped_ammo_by_type(Global_34, iParam0);
	}
	return _0xe787f05dfc977bde(func_73(bParam1), iParam0, iParam3);
}

int func_82(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_85(&uParam0, iParam4, bParam5, iParam6);
}

int func_83(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

bool func_84(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_85(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (func_86(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_86(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_73(bParam3);
	}
	if (!_0x22e590f108289a9d(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_79(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

