void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	network_set_script_is_safe_for_network_game();
	if (has_force_cleanup_occurred(4))
	{
		func_1();
	}
	while (true)
	{
		bVar7 = (!func_2(2048) && (!func_2(64) || !func_2(128)));
		while (_event_manager_is_event_pending(iScriptParam_0) && bVar7)
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
						func_3(64);
						func_3(2048);
						break;
					case -1151569080:
						if (Var3.f_2 == -2105535423)
						{
							func_4(Var3.f_1);
							func_3(4);
							func_3(2);
							func_3(2048);
						}
						else
						{
							func_5(Var3.f_1);
							func_6(Var3.f_2);
							if (_databinding_is_data_id_valid(Var3.f_3))
							{
								func_7(&(Var3.f_3), 0);
							}
							func_3(32768);
							func_3(2048);
						}
						break;
					case 1617053448:
						if (Var3.f_2 == -575010389)
						{
							func_4(Var3.f_1);
							func_3(8);
							func_3(2);
							func_3(2048);
						}
						break;
					case -1740156697:
						func_7(&(Var3.f_3), 0);
						func_8(Var3.f_1, 0);
						iVar2 = func_9(0);
						if (iVar2 != 336033112 || iVar2 != 0)
						{
							uVar0 = _databinding_read_data_int_from_parent(Var3.f_3, func_10());
							uVar1 = uVar0;
							func_11(uVar1, 0);
						}
						if (Var3.f_2 == -401761271)
						{
							func_3(64);
						}
						else
						{
							func_3(2);
						}
						func_3(2048);
						break;
					case -1203660660:
						if (Var3.f_2 == -729996127)
						{
						}
						else
						{
							func_12(Var3.f_1);
							iVar2 = func_13();
							func_14(&(Var3.f_3));
							if (iVar2 != 336033112 || iVar2 != 0)
							{
								uVar0 = _databinding_read_data_int_from_parent(Var3.f_3, func_10());
								uVar1 = uVar0;
								func_15(uVar1);
							}
						}
						func_16(Var3.f_2);
						if (Var3.f_2 == 1285135021)
						{
							func_3(1024);
						}
						func_3(16);
						func_3(2048);
						break;
					case -2075827635:
						if (Var3.f_2 == 1130992209)
						{
							func_3(256);
						}
						else if (Var3.f_2 != -1980648788)
						{
							if (Var3.f_2 != -401761271)
							{
								if (Var3.f_2 != 516329682)
								{
								}
								else
								{
									func_3(512);
								}
							}
							else
							{
								func_3(256);
							}
						}
						else
						{
							func_3(512);
						}
						func_2(32);
						func_3(2048);
						break;
					case 922460030:
						if (Var3.f_2 == 416030390)
						{
							Global_1914319->f_16855.f_3.f_3 = 1;
						}
						else if (Var3.f_2 != -1424072773)
						{
						}
						else if (Global_1914319->f_16855.f_3.f_3)
						{
							Global_1914319->f_16855.f_3.f_3 = 0;
							Global_1914319->f_16855.f_3.f_2 = 0;
						}
						else
						{
							Global_1914319->f_16855.f_3.f_2 = 1;
						}
						break;
					case -114265581:
						func_17(Var3.f_2);
						func_3(8192);
						func_3(2048);
						break;
					case -120002582:
						func_17(Var3.f_2);
						func_3(8192);
						func_3(2048);
						break;
					case 368072021:
						func_18(Var3.f_2);
						func_19(Var3.f_1);
						func_3(16384);
						func_3(2048);
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
	func_20();
	terminate_this_thread();
}

bool func_2(int iParam0)
{
	return func_21(Global_1914319->f_16855.f_3, iParam0);
}

void func_3(int iParam0)
{
	func_22(&(Global_1914319->f_16855.f_3), iParam0);
}

void func_4(var uParam0)
{
	Global_1914319->f_16855.f_3.f_17 = uParam0;
}

void func_5(var uParam0)
{
	Global_1914319->f_16855.f_3.f_21 = uParam0;
}

void func_6(var uParam0)
{
	Global_1914319->f_16855.f_3.f_22 = uParam0;
}

void func_7(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_1914319->f_16855.f_3.f_20 = Global_1914319->f_16855.f_3.f_16;
		Global_1914319->f_16855.f_3.f_16 = *uParam0;
	}
	else
	{
		Global_1914319->f_16855.f_3.f_13 = Global_1914319->f_16855.f_3.f_10;
		Global_1914319->f_16855.f_3.f_10 = *uParam0;
	}
}

void func_8(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_1914319->f_16855.f_3.f_18 = Global_1914319->f_16855.f_3.f_14;
		Global_1914319->f_16855.f_3.f_14 = uParam0;
	}
	else
	{
		Global_1914319->f_16855.f_3.f_11 = Global_1914319->f_16855.f_3.f_8;
		Global_1914319->f_16855.f_3.f_8 = uParam0;
	}
}

int func_9(bool bParam0)
{
	uVar0 = _databinding_read_data_int_from_parent(func_23(bParam0), func_24());
	return uVar0;
}

char* func_10()
{
	return "uiItemEnum";
}

void func_11(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_1914319->f_16855.f_3.f_19 = Global_1914319->f_16855.f_3.f_15;
		Global_1914319->f_16855.f_3.f_15 = uParam0;
	}
	else
	{
		Global_1914319->f_16855.f_3.f_12 = Global_1914319->f_16855.f_3.f_9;
		Global_1914319->f_16855.f_3.f_9 = uParam0;
	}
}

void func_12(var uParam0)
{
	Global_1914319->f_16855.f_3.f_5 = uParam0;
}

int func_13()
{
	uVar0 = _databinding_read_data_int_from_parent(func_25(), func_24());
	return uVar0;
}

void func_14(var uParam0)
{
	Global_1914319->f_16855.f_3.f_7 = *uParam0;
}

void func_15(var uParam0)
{
	Global_1914319->f_16855.f_3.f_6 = uParam0;
}

void func_16(var uParam0)
{
	Global_1914319->f_16855.f_3.f_1 = uParam0;
}

void func_17(var uParam0)
{
	Global_1914319->f_16855.f_3.f_23 = uParam0;
}

bool func_18(int iParam0)
{
	bVar0 = Global_1914319->f_16855.f_3.f_26 != iParam0;
	Global_1914319->f_16855.f_3.f_26 = iParam0;
	return bVar0;
}

bool func_19(int iParam0)
{
	bVar0 = Global_1914319->f_16855.f_3.f_25 != iParam0;
	Global_1914319->f_16855.f_3.f_25 = iParam0;
	return bVar0;
}

void func_20()
{
	Global_1914319->f_16855.f_3 = 0;
}

bool func_21(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_22(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

var func_23(bool bParam0)
{
	if (bParam0)
	{
		return Global_1914319->f_16855.f_3.f_16;
	}
	return Global_1914319->f_16855.f_3.f_10;
}

char* func_24()
{
	return "uiItemType";
}

var func_25()
{
	return Global_1914319->f_16855.f_3.f_7;
}

