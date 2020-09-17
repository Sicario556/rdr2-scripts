void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	func_1();
	sVar0 = "net_ambient_content_evaluator";
	func_2(&uVar1);
	while (!func_3(0, 0))
	{
		if (func_4())
		{
			func_5(Global_1210161, sVar0);
		}
		else
		{
			func_6(Global_1210161, sVar0, &uVar1);
		}
		wait(0);
	}
	while (!_0x380ffa15b72408fb(1440))
	{
		func_6(Global_1210161, sVar0, &uVar1);
		wait(0);
	}
	func_7();
}

void func_1()
{
	network_set_this_script_is_network_script(32, false, -1);
	func_8();
	if (func_9())
	{
		func_7();
	}
	set_this_script_can_be_paused(false);
	_0xb711eb4bc8d06013();
}

void func_2(var uParam0)
{
	func_10(uParam0, 0);
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

bool func_4()
{
	return !func_12(func_11(), 0, 0);
}

void func_5(var uParam0, char* sParam1)
{
	if (_does_thread_exist(*uParam0))
	{
		return;
	}
	if (network_is_script_active(sParam1, -1, true, 0))
	{
		return;
	}
	if (get_number_of_free_stacks_of_this_size(1024) <= 0)
	{
		return;
	}
	request_script(sParam1);
	if (has_script_loaded(sParam1))
	{
		*uParam0 = start_new_script(sParam1, 1024);
		set_script_as_no_longer_needed(sParam1);
		return;
	}
	return;
}

void func_6(var uParam0, char* sParam1, var uParam2)
{
	if (*uParam0 == 0)
	{
		return;
	}
	if (!_does_thread_exist(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	if (!network_is_script_active(sParam1, -1, true, 0))
	{
		return;
	}
	if (func_13(uParam2, 30000))
	{
		if (_does_thread_exist(*uParam0))
		{
			_0x7de4643157ad646c(*uParam0);
		}
		func_2(uParam2);
	}
}

void func_7()
{
	terminate_this_thread();
}

int func_8()
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
			func_7();
		}
		if (_0x9e4ef615e307fbbe())
		{
			switch (_0x54ae4fdeefeab77e())
			{
				case 0:
					break;
				case 1:
					func_7();
					break;
				case 2:
					func_7();
					break;
				case 4:
					func_7();
					break;
				case 3:
					func_7();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_7();
		}
		if (!network_is_game_in_progress())
		{
			func_7();
		}
		if (!network_is_signed_online())
		{
			func_7();
		}
		if (func_14() == 0)
		{
			if (func_15())
			{
				func_7();
			}
		}
		wait(0);
		iVar0 = network_get_script_status();
	}
	if (!network_is_game_in_progress())
	{
		func_7();
	}
	return 1;
}

bool func_9()
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

void func_10(var uParam0, int iParam1)
{
	uParam0->f_1 = (func_16() - iParam1);
	func_17(uParam0, 1);
	func_18(uParam0, 2);
	uParam0->f_2 = 0;
}

struct<2> func_11()
{
	return Global_1130592->f_5.f_3;
}

bool func_12(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265377->f_124517.f_135 & 8 != 0)
	{
		Global_1071686->f_28351 = 1;
		return true;
	}
	if (func_19(*Global_1051213) && !func_20(*Global_1051213, Param0))
	{
		Global_1071686->f_28351 = 2;
		return true;
	}
	if (iParam2 != 0 && func_21(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_22(iParam3, 255))
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
	if (func_23())
	{
		Global_1071686->f_28351 = 7;
		return true;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_19(*Global_1051213))
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

bool func_13(var uParam0, int iParam1)
{
	if (!func_24(uParam0))
	{
		return false;
	}
	if (func_25(uParam0) > iParam1)
	{
		return true;
	}
	return false;
}

int func_14()
{
	return Global_1572887->f_13;
}

bool func_15()
{
	return Global_1051252->f_8;
}

int func_16()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

void func_17(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_18(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_19(struct<2> Param0)
{
	if (!func_26(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_27(Param0))
	{
		return false;
	}
	return true;
}

bool func_20(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_21(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1197740->f_1 && iParam0) != 0;
}

bool func_22(int iParam0, int iParam1)
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

bool func_23()
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
	if (!func_19(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

bool func_24(var uParam0)
{
	return func_28(*uParam0, 1);
}

int func_25(var uParam0)
{
	if (!func_24(uParam0))
	{
		func_29(uParam0, 0);
		return uParam0->f_1;
	}
	if (func_30(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_16() - uParam0->f_1);
}

bool func_26(int iParam0)
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

int func_27(int iParam0)
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

bool func_28(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_29(var uParam0, bool bParam1)
{
	if (bParam1 || !func_24(uParam0))
	{
		func_2(uParam0);
	}
}

bool func_30(var uParam0)
{
	return func_28(*uParam0, 2);
}

