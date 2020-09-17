void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	network_set_script_is_safe_for_network_game();
	if (has_force_cleanup_occurred(4))
	{
		func_1();
	}
	bVar7 = func_2() == -1;
	while (bVar7 || !func_3(0, 0))
	{
		bVar8 = (!func_4(1024) && (!func_4(32) || !func_4(64)));
		while (_event_manager_is_event_pending(iScriptParam_0) && bVar8)
		{
			if (_event_manager_peek_event(iScriptParam_0, &Var3))
			{
				if (_databinding_is_data_id_valid(Var3.f_3))
				{
				}
				switch (Var3)
				{
					case -722926211:
					case 703281244:
						func_5(64);
						func_5(1024);
						break;
					case -1151569080:
						if (Var3.f_2 == -2105535423)
						{
							func_6(Var3.f_1);
							func_5(4);
							func_5(32768);
							func_5(2);
							func_5(1024);
						}
						else
						{
							func_7(Var3.f_1);
							func_8(Var3.f_2);
							if (_databinding_is_data_id_valid(Var3.f_3))
							{
								func_9(&(Var3.f_3));
							}
							func_5(16384);
							func_5(1024);
						}
						break;
					case -1740156697:
						func_9(&(Var3.f_3));
						func_10(Var3.f_1);
						iVar2 = func_11();
						if ((iVar2 == -627085098 || iVar2 == 1751567119) || iVar2 == -841939068)
						{
							uVar0 = _databinding_read_data_int_from_parent(Var3.f_3, func_12());
							uVar1 = uVar0;
							func_13(uVar1);
						}
						else if (iVar2 != 336033112 || iVar2 != 0)
						{
							uVar0 = _databinding_read_data_int_from_parent(Var3.f_3, func_14());
							uVar1 = uVar0;
							func_13(uVar1);
						}
						if (Var3.f_2 == -401761271)
						{
							func_5(32);
						}
						else
						{
							func_5(2);
						}
						func_5(1024);
						break;
					case -632467210:
						func_15(&(Var3.f_3));
						func_16(Var3.f_1);
						iVar2 = func_17();
						if (iVar2 != 336033112 || iVar2 != 0)
						{
							uVar0 = _databinding_read_data_int_from_parent(Var3.f_3, func_14());
							uVar1 = uVar0;
							func_18(uVar1);
						}
						func_5(32768);
						func_5(1024);
						break;
					case -1203660660:
						if (Var3.f_2 == -729996127)
						{
						}
						else
						{
							func_19(Var3.f_1);
							iVar2 = func_20();
							func_21(&(Var3.f_3));
							if (iVar2 != 336033112 || iVar2 != 0)
							{
								uVar0 = _databinding_read_data_int_from_parent(Var3.f_3, func_14());
								uVar1 = uVar0;
								func_22(uVar1);
							}
						}
						func_23(Var3.f_2);
						if (Var3.f_2 == 1285135021)
						{
							func_5(512);
						}
						func_5(8);
						func_5(1024);
						break;
					case -2075827635:
						if (Var3.f_2 != 1130992209)
						{
							if (Var3.f_2 != -1980648788)
							{
								if (Var3.f_2 != -401761271)
								{
									if (Var3.f_2 == 516329682)
									{
										func_5(256);
									}
								}
								else
								{
									func_5(128);
								}
							}
							else
							{
								func_5(256);
							}
						}
						else
						{
							func_5(128);
						}
						func_4(16);
						func_5(1024);
						break;
					case 922460030:
						if (Var3.f_2 != 416030390)
						{
							if (Var3.f_2 != -1424072773)
							{
							}
							else if (Global_1915715->f_20241.f_3.f_3)
							{
								Global_1915715->f_20241.f_3.f_3 = 0;
								Global_1915715->f_20241.f_3.f_2 = 0;
							}
							else
							{
								Global_1915715->f_20241.f_3.f_2 = 1;
							}
						}
						else
						{
							Global_1915715->f_20241.f_3.f_3 = 1;
						}
						break;
					case -114265581:
						func_24(Var3.f_2);
						func_5(4096);
						func_5(1024);
						break;
					case -120002582:
						func_24(Var3.f_2);
						func_5(4096);
						func_5(1024);
						break;
					case 368072021:
						func_25(Var3.f_2);
						func_26(Var3.f_1);
						func_5(8192);
						func_5(1024);
						break;
					default:
						break;
				}
				_event_manager_pop_event(iScriptParam_0);
			}
		}
		wait(0);
	}
	func_1();
}

void func_1()
{
	func_27();
	terminate_this_thread();
}

int func_2()
{
	return Global_1572887->f_13;
}

bool func_3(bool bParam0, bool bParam1)
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

bool func_4(int iParam0)
{
	return func_28(Global_1915715->f_20241.f_3, iParam0);
}

void func_5(int iParam0)
{
	func_29(&(Global_1915715->f_20241.f_3), iParam0);
}

void func_6(var uParam0)
{
	Global_1915715->f_20241.f_3.f_19 = uParam0;
}

void func_7(var uParam0)
{
	Global_1915715->f_20241.f_3.f_17 = uParam0;
}

void func_8(var uParam0)
{
	Global_1915715->f_20241.f_3.f_18 = uParam0;
}

void func_9(var uParam0)
{
	Global_1915715->f_20241.f_3.f_13 = *uParam0;
}

void func_10(var uParam0)
{
	Global_1915715->f_20241.f_3.f_11 = uParam0;
}

int func_11()
{
	uVar0 = _databinding_read_data_int_from_parent(func_30(), func_31());
	return uVar0;
}

char* func_12()
{
	return "uiItemID";
}

void func_13(var uParam0)
{
	Global_1915715->f_20241.f_3.f_12 = uParam0;
}

char* func_14()
{
	return "uiItemEnum";
}

void func_15(var uParam0)
{
	Global_1915715->f_20241.f_3.f_16 = *uParam0;
}

void func_16(var uParam0)
{
	Global_1915715->f_20241.f_3.f_14 = uParam0;
}

int func_17()
{
	uVar0 = _databinding_read_data_int_from_parent(func_32(), func_31());
	return uVar0;
}

void func_18(var uParam0)
{
	Global_1915715->f_20241.f_3.f_15 = uParam0;
}

void func_19(var uParam0)
{
	Global_1915715->f_20241.f_3.f_8 = uParam0;
}

int func_20()
{
	uVar0 = _databinding_read_data_int_from_parent(func_33(), func_31());
	return uVar0;
}

void func_21(var uParam0)
{
	Global_1915715->f_20241.f_3.f_10 = *uParam0;
}

void func_22(var uParam0)
{
	Global_1915715->f_20241.f_3.f_9 = uParam0;
}

void func_23(var uParam0)
{
	Global_1915715->f_20241.f_3.f_1 = uParam0;
}

void func_24(var uParam0)
{
	Global_1915715->f_20241.f_3.f_36 = uParam0;
}

bool func_25(int iParam0)
{
	bVar0 = Global_1915715->f_20241.f_3.f_39 != iParam0;
	Global_1915715->f_20241.f_3.f_39 = iParam0;
	return bVar0;
}

bool func_26(int iParam0)
{
	bVar0 = Global_1915715->f_20241.f_3.f_38 != iParam0;
	Global_1915715->f_20241.f_3.f_38 = iParam0;
	return bVar0;
}

void func_27()
{
	Global_1915715->f_20241.f_3 = 0;
}

bool func_28(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_29(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

var func_30()
{
	return Global_1915715->f_20241.f_3.f_13;
}

char* func_31()
{
	return "uiItemType";
}

var func_32()
{
	return Global_1915715->f_20241.f_3.f_16;
}

var func_33()
{
	return Global_1915715->f_20241.f_3.f_10;
}

