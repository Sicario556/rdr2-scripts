void __EntryFunction__()
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	func_1();
	while (!func_2(0, 0))
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

bool func_2(bool bParam0, bool bParam1)
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

void func_3()
{
	if (network_is_host_of_this_script())
	{
		func_11();
	}
	func_12();
}

void func_4()
{
	func_13();
	if (_text_database_has_loaded(func_14()))
	{
		_text_database_delete(func_14());
	}
	Global_1196898 = 0;
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		*Global_1196898->f_239[iVar0] = { *Global_1196339->f_1[iVar0] };
		if (&Global_1196898->f_78[iVar0] > 0 && &Global_1196898->f_78[iVar0] < 4)
		{
			func_15(iVar0, 8);
		}
		else
		{
			if (network_is_game_in_progress() && network_is_in_session())
			{
				func_16((*(*Global_1196567)[network_player_id_to_int()])[iVar0]);
			}
			func_17(Global_1196898->f_78[iVar0]);
		}
		iVar0++;
	}
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
		if (func_18() == 0)
		{
			if (func_19())
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
	func_20(Global_1196339);
	network_register_host_broadcast_variables(Global_1196339, 228, 40);
	func_21(_0xba24095ea96dfe17(Global_1196339), 228, "g_mpFmeManagerHostData");
	if (func_22())
	{
		*Global_1196888 = { *(*Global_1196567)[func_23()] };
	}
	func_24(Global_1196567);
	network_register_player_broadcast_variables(Global_1196567, 321, 41);
	func_25(_0x690806bc83bc8ca2((*Global_1196567)[0]), 321, "g_mpFmeManagerPlayerData");
	if (!func_22())
	{
		func_26(Global_1196898);
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

void func_11()
{
	switch (&Global_1196339)
	{
		case 0:
			func_27();
			break;
		case 1:
			func_28();
			break;
		case 2:
			func_29();
			break;
		case 3:
			func_30();
			break;
	}
}

void func_12()
{
	switch (&Global_1196898)
	{
		case 0:
			func_31();
			break;
		case 1:
			func_32();
			break;
		case 2:
			func_33();
			break;
		case 3:
			func_34();
			break;
	}
}

void func_13()
{
	if (_0x7907969497ea92f5(Global_1196898->f_455))
	{
		_datafile_unload(Global_1196898->f_455);
	}
}

char* func_14()
{
	return "FMUI";
}

void func_15(int iParam0, int iParam1)
{
	func_35(&(Global_1196898->f_78[iParam0]->f_6), iParam1);
}

void func_16(var uParam0)
{
	*uParam0 = uVar0;
}

void func_17(var uParam0)
{
	Var0.f_1 = -1;
	Var0.f_3 = -1;
	Var0.f_7 = -1;
	Var0.f_7.f_1 = -1;
	Var0.f_10 = 5;
	*uParam0 = { Var0 };
}

int func_18()
{
	return Global_1572887->f_13;
}

bool func_19()
{
	return Global_1051252->f_8;
}

void func_20(var uParam0)
{
	Var0.f_1 = 8;
	Var0.f_1.f_1.f_1 = -1;
	Var0.f_1.f_1.f_5 = -1;
	Var0.f_1.f_1.f_5.f_1 = -1;
	Var0.f_1.f_1.f_7 = 255;
	Var0.f_1.f_1.f_26.f_1 = -1;
	Var0.f_1.f_1.f_26.f_5 = -1;
	Var0.f_1.f_1.f_26.f_5.f_1 = -1;
	Var0.f_1.f_1.f_26.f_7 = 255;
	Var0.f_1.f_1.f_26.f_26.f_1 = -1;
	Var0.f_1.f_1.f_26.f_26.f_5 = -1;
	Var0.f_1.f_1.f_26.f_26.f_5.f_1 = -1;
	Var0.f_1.f_1.f_26.f_26.f_7 = 255;
	Var0.f_1.f_1.f_26.f_26.f_26.f_1 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_5 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_5.f_1 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_7 = 255;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_1 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_5 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_5.f_1 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_7 = 255;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_1 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_5 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_5.f_1 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_7 = 255;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_1 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_5 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_5.f_1 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_7 = 255;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_26.f_1 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_26.f_5 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_26.f_5.f_1 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_26.f_7 = 255;
	*uParam0 = { Var0 };
}

int func_21(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

bool func_22()
{
	return !Global_1572887->f_9;
}

int func_23()
{
	return Global_1102219->f_3672;
}

void func_24(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_36((*uParam0)[iVar0]);
		iVar0++;
	}
}

int func_25(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_26(var uParam0)
{
	Var0.f_1 = 19;
	Var0.f_78 = 8;
	Var0.f_78.f_1.f_1 = -1;
	Var0.f_78.f_1.f_3 = -1;
	Var0.f_78.f_1.f_7 = -1;
	Var0.f_78.f_1.f_7.f_1 = -1;
	Var0.f_78.f_1.f_10 = 5;
	Var0.f_78.f_1.f_20.f_1 = -1;
	Var0.f_78.f_1.f_20.f_3 = -1;
	Var0.f_78.f_1.f_20.f_7 = -1;
	Var0.f_78.f_1.f_20.f_7.f_1 = -1;
	Var0.f_78.f_1.f_20.f_10 = 5;
	Var0.f_78.f_1.f_20.f_20.f_1 = -1;
	Var0.f_78.f_1.f_20.f_20.f_3 = -1;
	Var0.f_78.f_1.f_20.f_20.f_7 = -1;
	Var0.f_78.f_1.f_20.f_20.f_7.f_1 = -1;
	Var0.f_78.f_1.f_20.f_20.f_10 = 5;
	Var0.f_78.f_1.f_20.f_20.f_20.f_1 = -1;
	Var0.f_78.f_1.f_20.f_20.f_20.f_3 = -1;
	Var0.f_78.f_1.f_20.f_20.f_20.f_7 = -1;
	Var0.f_78.f_1.f_20.f_20.f_20.f_7.f_1 = -1;
	Var0.f_78.f_1.f_20.f_20.f_20.f_10 = 5;
	Var0.f_78.f_1.f_20.f_20.f_20.f_20.f_1 = -1;
	Var0.f_78.f_1.f_20.f_20.f_20.f_20.f_3 = -1;
	Var0.f_78.f_1.f_20.f_20.f_20.f_20.f_7 = -1;
	Var0.f_78.f_1.f_20.f_20.f_20.f_20.f_7.f_1 = -1;
	Var0.f_78.f_1.f_20.f_20.f_20.f_20.f_10 = 5;
	Var0.f_78.f_1.f_20.f_20.f_20.f_20.f_20.f_1 = -1;
	Var0.f_78.f_1.f_20.f_20.f_20.f_20.f_20.f_3 = -1;
	Var0.f_78.f_1.f_20.f_20.f_20.f_20.f_20.f_7 = -1;
	Var0.f_78.f_1.f_20.f_20.f_20.f_20.f_20.f_7.f_1 = -1;
	Var0.f_78.f_1.f_20.f_20.f_20.f_20.f_20.f_10 = 5;
	Var0.f_78.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_1 = -1;
	Var0.f_78.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_3 = -1;
	Var0.f_78.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_7 = -1;
	Var0.f_78.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_7.f_1 = -1;
	Var0.f_78.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = 5;
	Var0.f_78.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_1 = -1;
	Var0.f_78.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_3 = -1;
	Var0.f_78.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_7 = -1;
	Var0.f_78.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_7.f_1 = -1;
	Var0.f_78.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = 5;
	Var0.f_239 = 8;
	Var0.f_239.f_1.f_1 = -1;
	Var0.f_239.f_1.f_5 = -1;
	Var0.f_239.f_1.f_5.f_1 = -1;
	Var0.f_239.f_1.f_7 = 255;
	Var0.f_239.f_1.f_26.f_1 = -1;
	Var0.f_239.f_1.f_26.f_5 = -1;
	Var0.f_239.f_1.f_26.f_5.f_1 = -1;
	Var0.f_239.f_1.f_26.f_7 = 255;
	Var0.f_239.f_1.f_26.f_26.f_1 = -1;
	Var0.f_239.f_1.f_26.f_26.f_5 = -1;
	Var0.f_239.f_1.f_26.f_26.f_5.f_1 = -1;
	Var0.f_239.f_1.f_26.f_26.f_7 = 255;
	Var0.f_239.f_1.f_26.f_26.f_26.f_1 = -1;
	Var0.f_239.f_1.f_26.f_26.f_26.f_5 = -1;
	Var0.f_239.f_1.f_26.f_26.f_26.f_5.f_1 = -1;
	Var0.f_239.f_1.f_26.f_26.f_26.f_7 = 255;
	Var0.f_239.f_1.f_26.f_26.f_26.f_26.f_1 = -1;
	Var0.f_239.f_1.f_26.f_26.f_26.f_26.f_5 = -1;
	Var0.f_239.f_1.f_26.f_26.f_26.f_26.f_5.f_1 = -1;
	Var0.f_239.f_1.f_26.f_26.f_26.f_26.f_7 = 255;
	Var0.f_239.f_1.f_26.f_26.f_26.f_26.f_26.f_1 = -1;
	Var0.f_239.f_1.f_26.f_26.f_26.f_26.f_26.f_5 = -1;
	Var0.f_239.f_1.f_26.f_26.f_26.f_26.f_26.f_5.f_1 = -1;
	Var0.f_239.f_1.f_26.f_26.f_26.f_26.f_26.f_7 = 255;
	Var0.f_239.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_1 = -1;
	Var0.f_239.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_5 = -1;
	Var0.f_239.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_5.f_1 = -1;
	Var0.f_239.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_7 = 255;
	Var0.f_239.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_26.f_1 = -1;
	Var0.f_239.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_26.f_5 = -1;
	Var0.f_239.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_26.f_5.f_1 = -1;
	Var0.f_239.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_26.f_7 = 255;
	Var0.f_448 = 5;
	*uParam0 = { Var0 };
}

void func_27()
{
	func_37(1);
}

void func_28()
{
	if (func_38())
	{
		func_37(2);
	}
}

void func_29()
{
	if (&Global_1196898 >= 2)
	{
		func_39();
		func_40();
		func_37(3);
	}
}

void func_30()
{
	func_41();
	func_42();
	func_43();
}

void func_31()
{
	if (&Global_1196339 > 0)
	{
		if (func_22() && func_44())
		{
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if (func_45(iVar0, 8))
				{
					if (func_45(iVar0, 1) && !_does_thread_exist(Global_1196898->f_78[iVar0]->f_5))
					{
						func_16((*(*Global_1196567)[network_player_id_to_int()])[iVar0]);
						func_17(Global_1196898->f_78[iVar0]);
					}
					else
					{
						(*(*Global_1196567)[network_player_id_to_int()])[iVar0] = Global_1196888[iVar0];
					}
				}
				iVar0++;
			}
		}
		func_46();
		func_47(1);
	}
}

void func_32()
{
	if (func_38() && &Global_1196339 > 1)
	{
		func_48();
		func_47(2);
	}
}

void func_33()
{
	if (&Global_1196339 > 2)
	{
		func_47(3);
	}
}

void func_34()
{
	func_49((*Global_1196567)[network_player_id_to_int()]);
	func_50();
}

void func_35(var uParam0, int iParam1)
{
	func_51(uParam0, iParam1);
}

void func_36(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		func_16((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_37(int iParam0)
{
	Global_1196339 = iParam0;
}

bool func_38()
{
	if (!func_52())
	{
		return false;
	}
	if (!func_53())
	{
		return false;
	}
	iVar0 = 1;
	if (!func_54())
	{
		iVar0 = 0;
	}
	_text_database_request(func_14());
	if (!_text_database_has_loaded(func_14()))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_39()
{
	_0x86a68e84e5884951(&Var0);
	Var7 = { Var0 };
	Var7.f_3 = 0;
	Var7.f_4 = 0;
	Var7.f_5 = 0;
	Var7.f_6 = 0;
	Var14.f_4 = func_55();
	_0x28eeace9b43d9597(&Var7, &Var14, &Var7);
	iVar21 = 0;
	while (!func_56(Var7, Var0) && iVar21 < 500)
	{
		_0x28eeace9b43d9597(&Var7, &Var14, &Var7);
		iVar21++;
	}
	Global_1196339->f_226 = iVar21;
	Global_1196339->f_210 = { Var7 };
}

void func_40()
{
	uVar0 = Global_1901947->f_308.f_177;
	_0x86a68e84e5884951(&Var1);
	Var8 = { Var1 };
	Var8.f_3 = 0;
	Var8.f_4 = uVar0;
	Var8.f_5 = 0;
	Var8.f_6 = 0;
	Var15.f_4 = func_57();
	_0x28eeace9b43d9597(&Var8, &Var15, &Var8);
	iVar22 = 0;
	while (!func_56(Var8, Var1) && iVar22 < 500)
	{
		_0x28eeace9b43d9597(&Var8, &Var15, &Var8);
		iVar22++;
	}
	Global_1196339->f_227 = iVar22;
	Global_1196339->f_217 = { Var8 };
}

void func_41()
{
	if (!func_58() || Global_1071686->f_28778)
	{
		return;
	}
	if (!func_59(2, 30))
	{
		return;
	}
	_0x86a68e84e5884951(&Var0);
	if (func_56(Var0, Global_1196339->f_210))
	{
		iVar7 = 0;
		if (&Global_1196339->f_1[iVar7] != 0 && !func_60())
		{
			func_61(0);
			return;
		}
		if (func_62(-1125105727))
		{
			func_39();
		}
		else
		{
			func_63(-1125105727);
		}
	}
}

void func_42()
{
	if (!func_58() || Global_1071686->f_28778)
	{
		return;
	}
	if (!func_59(3, 30))
	{
		return;
	}
	_0x86a68e84e5884951(&Var0);
	if (func_56(Var0, Global_1196339->f_217))
	{
		iVar7 = 1;
		if (&Global_1196339->f_1[iVar7] != 0 && !func_60())
		{
			func_61(1);
			return;
		}
		if (func_62(1232677007))
		{
			func_40();
		}
		else
		{
			func_63(1232677007);
		}
	}
}

void func_43()
{
	if (&Global_1196898->f_448[1] >= 8)
	{
		Global_1196898->f_448[1] = 0;
	}
	func_64(&(Global_1196898->f_448[1]));
	Global_1196898->f_448[1] = &Global_1196898->f_448[1] + 1;
}

bool func_44()
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return Global_1071686->f_4;
}

bool func_45(int iParam0, int iParam1)
{
	return func_65(Global_1196898->f_78[iParam0]->f_6, iParam1);
}

void func_46()
{
	Global_1196898->f_455 = _0xd97d8d905f1562f2(1024887829);
}

void func_47(int iParam0)
{
	Global_1196898 = iParam0;
}

void func_48()
{
	func_66();
	func_67();
}

void func_49(var uParam0)
{
	Global_1196898->f_454 = (Global_1196898->f_454 + 1 % 30);
	if (Global_1196898->f_454 > 0)
	{
		return;
	}
	if (!func_68(uParam0->f_9, 1))
	{
		if (has_ped_got_weapon(Global_34, -1415022764, 0, false))
		{
			func_69(&(uParam0->f_9), 1);
		}
	}
}

void func_50()
{
	if (&Global_1196898->f_448[0] >= 8)
	{
		Global_1196898->f_448[0] = 0;
	}
	func_70(&(Global_1196898->f_448[0]));
	Global_1196898->f_448[0] = &Global_1196898->f_448[0] + 1;
}

void func_51(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_52()
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return Global_1071686->f_3;
}

bool func_53()
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return Global_1071686->f_5;
}

bool func_54()
{
	return _0x603ac35fd4602c76(Global_1196898->f_455);
}

var func_55()
{
	uVar0 = Global_1901947->f_308.f_175;
	return uVar0;
}

bool func_56(struct<7> Param0, struct<7> Param7)
{
	if (Param0 > Param7)
	{
		return true;
	}
	else if (Param7 > Param0)
	{
		return false;
	}
	if (Param0.f_1 > Param7.f_1)
	{
		return true;
	}
	else if (Param7.f_1 > Param0.f_1)
	{
		return false;
	}
	if (Param0.f_2 > Param7.f_2)
	{
		return true;
	}
	else if (Param7.f_2 > Param0.f_2)
	{
		return false;
	}
	if (Param0.f_3 > Param7.f_3)
	{
		return true;
	}
	else if (Param7.f_3 > Param0.f_3)
	{
		return false;
	}
	if (Param0.f_4 > Param7.f_4)
	{
		return true;
	}
	else if (Param7.f_4 > Param0.f_4)
	{
		return false;
	}
	if (Param0.f_5 > Param7.f_5)
	{
		return true;
	}
	else if (Param7.f_5 > Param0.f_5)
	{
		return false;
	}
	if (Param0.f_6 > Param7.f_6)
	{
		return true;
	}
	else if (Param7.f_6 > Param0.f_6)
	{
		return false;
	}
	return false;
}

var func_57()
{
	uVar0 = Global_1901947->f_308.f_176;
	return uVar0;
}

bool func_58()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

bool func_59(int iParam0, int iParam1)
{
	Global_1196898->f_448[iParam0] = &Global_1196898->f_448[iParam0] + 1;
	if (&Global_1196898->f_448[iParam0] < iParam1)
	{
		return false;
	}
	Global_1196898->f_448[iParam0] = 0;
	return true;
}

bool func_60()
{
	return Global_1572887->f_106.f_75 != 1;
}

void func_61(int iParam0)
{
	if (func_71() != player_id())
	{
		return;
	}
	if (func_72(iParam0) != 0)
	{
		func_73(iParam0, 6);
	}
}

bool func_62(int iParam0)
{
	iVar0 = func_75(func_74(iParam0));
	set_random_seed(iVar0);
	switch (iParam0)
	{
		case -1125105727:
			if (!func_76(&iVar1, &iVar2, &iVar3))
			{
				set_random_seed(get_game_timer());
				return false;
			}
			break;
		case 1232677007:
			if (!func_77(&iVar1, &iVar2, &iVar3))
			{
				set_random_seed(get_game_timer());
				return false;
			}
			break;
	}
	bVar4 = func_78(iVar1, player_id(), iVar2, iVar3, iVar0, 0);
	set_random_seed(get_game_timer());
	if (bVar4)
	{
		switch (iParam0)
		{
			case -1125105727:
				Global_1196339->f_224 = iVar1;
				break;
			case 1232677007:
				Global_1196339->f_225 = iVar1;
				break;
		}
	}
	return bVar4;
}

void func_63(int iParam0)
{
	_0x86a68e84e5884951(&uVar0);
	Var7.f_3 = 0;
	Var7.f_4 = 0;
	Var7.f_5 = 0;
	Var7.f_6 = 0;
	Var14.f_4 = 1;
	_0x28eeace9b43d9597(&uVar0, &Var14, &Var7);
	switch (iParam0)
	{
		case -1125105727:
			Global_1196339->f_210 = { Var7 };
			break;
		case 1232677007:
			Global_1196339->f_217 = { Var7 };
			break;
	}
}

void func_64(int iParam0)
{
	if (&Global_1196339->f_1[iParam0] == 0)
	{
		return;
	}
	switch (&Global_1196339->f_1[iParam0])
	{
		case 1:
			func_79(iParam0);
			break;
		case 5:
			func_80(iParam0);
			break;
		case 6:
			func_81(iParam0);
			break;
	}
}

bool func_65(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_66()
{
	_datafile_register_query(Global_1196898->f_455, -1093317127, "data/events/event(id=%x)");
	_datafile_register_query(Global_1196898->f_455, -1782115362, "locations");
	_datafile_register_query(Global_1196898->f_455, 1574313466, "location(%i)");
	_datafile_register_query(Global_1196898->f_455, 454625570, "location(id=%x)");
	_datafile_register_query(Global_1196898->f_455, -171261332, "outro");
	_datafile_register_query(Global_1196898->f_455, 670816652, "respawn");
	_datafile_register_query(Global_1196898->f_455, 1701407264, "ui");
	_datafile_register_query(Global_1196898->f_455, -310067910, "variations");
	_datafile_register_query(Global_1196898->f_455, 1481789088, "variation(%i)");
	_datafile_register_query(Global_1196898->f_455, -1739269194, "variation(id=%x)");
	_datafile_register_query(Global_1196898->f_455, 1648302374, "lobby_positions");
	_datafile_register_query(Global_1196898->f_455, 1950557689, "lobby_position(%i)");
	_datafile_register_query(Global_1196898->f_455, -704316038, "lobby_position(id=%i)");
	_datafile_register_query(Global_1196898->f_455, 2005647695, ":ambient_blocking_radius");
	_datafile_register_query(Global_1196898->f_455, -75980337, ":award_mod_promo");
	_datafile_register_query(Global_1196898->f_455, -13272314, ":disable_mount");
	_datafile_register_query(Global_1196898->f_455, 1576411076, ":duration");
	_datafile_register_query(Global_1196898->f_455, -2068413581, ":enable_law");
	_datafile_register_query(Global_1196898->f_455, -1393462640, ":event_radius");
	_datafile_register_query(Global_1196898->f_455, -135059083, ":spec_cam_pos");
	_datafile_register_query(Global_1196898->f_455, -1922656805, ":spec_cam_rot");
	_datafile_register_query(Global_1196898->f_455, -185561597, ":heading");
	_datafile_register_query(Global_1196898->f_455, -1378896287, ":id");
	_datafile_register_query(Global_1196898->f_455, -994988323, ":alternative_mode");
	_datafile_register_query(Global_1196898->f_455, -1963437248, ":inner_radius");
	_datafile_register_query(Global_1196898->f_455, 1220434501, ":intro_shard_primary");
	_datafile_register_query(Global_1196898->f_455, -463492762, ":lobby_duration");
	_datafile_register_query(Global_1196898->f_455, 1168414437, ":lobby_radius");
	_datafile_register_query(Global_1196898->f_455, -823479386, ":max_players");
	_datafile_register_query(Global_1196898->f_455, 1189568052, ":min_gangs");
	_datafile_register_query(Global_1196898->f_455, 948567928, ":min_players");
	_datafile_register_query(Global_1196898->f_455, -1755025897, ":min_players_start");
	_datafile_register_query(Global_1196898->f_455, -467067774, ":relationship_type");
	_datafile_register_query(Global_1196898->f_455, 37194763, ":name_handle");
	_datafile_register_query(Global_1196898->f_455, -1771940760, ":name_handle_alt");
	_datafile_register_query(Global_1196898->f_455, 1509074216, ":on_foot");
	_datafile_register_query(Global_1196898->f_455, 2121037717, ":on_mount");
	_datafile_register_query(Global_1196898->f_455, -415053522, ":outer_radius");
	_datafile_register_query(Global_1196898->f_455, 2060397848, ":position");
	_datafile_register_query(Global_1196898->f_455, 221135615, ":lobby_blip_position");
	_datafile_register_query(Global_1196898->f_455, 1777884256, ":rules_help");
	_datafile_register_query(Global_1196898->f_455, -1996633489, ":rules_secondary_help");
	_datafile_register_query(Global_1196898->f_455, -399138777, ":script");
	_datafile_register_query(Global_1196898->f_455, 1434638998, ":shocking_event_radius");
	_datafile_register_query(Global_1196898->f_455, 1388840187, ":stack_size");
	_datafile_register_query(Global_1196898->f_455, 915697271, ":stat_group");
	_datafile_register_query(Global_1196898->f_455, -874721119, ":text_block");
	_datafile_register_query(Global_1196898->f_455, -1268019774, ":toast_icon");
	_datafile_register_query(Global_1196898->f_455, -1641329203, ":toast_icon_dict");
	_datafile_register_query(Global_1196898->f_455, -1102158142, ":tod_hour");
	_datafile_register_query(Global_1196898->f_455, 796959411, ":tod_end_hour");
	_datafile_register_query(Global_1196898->f_455, -1068020191, ":tod_start_hour");
	_datafile_register_query(Global_1196898->f_455, -1107031930, ":type");
	_datafile_register_query(Global_1196898->f_455, -605149915, ":unlock_id");
	_datafile_register_query(Global_1196898->f_455, -993857789, ":unlock_level");
	_datafile_register_query(Global_1196898->f_455, 511429636, ":weather");
	_datafile_register_query(Global_1196898->f_455, 733859289, ":xml");
}

void func_67()
{
	iVar0 = 0;
	while (iVar0 <= 18)
	{
		func_82(iVar0);
		iVar0++;
	}
}

bool func_68(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_69(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_70(int iParam0)
{
	if (&Global_1196339->f_1[iParam0] == 0 && &Global_1196898->f_78[iParam0] == 0)
	{
		return;
	}
	if (!func_83(iParam0))
	{
		return;
	}
	switch (&Global_1196898->f_78[iParam0])
	{
		case 0:
			func_84(iParam0);
			break;
		case 1:
			func_85(iParam0);
			break;
		case 2:
			func_86(iParam0);
			break;
		case 3:
			func_87(iParam0);
			break;
		case 4:
			func_88(iParam0);
			break;
		case 5:
			func_89(iParam0);
			break;
		case 6:
			func_90(iParam0);
			break;
	}
}

int func_71()
{
	if ((!_does_thread_exist(&(Global_1051252->f_16[4])) || !is_thread_active(&(Global_1051252->f_16[4]), false)) || !_0x31dad2cd6d49546e(&(Global_1051252->f_16[4])))
	{
		return 255;
	}
	return _0xb4a25351d79b444c(&(Global_1051252->f_16[4]));
}

int func_72(int iParam0)
{
	return &(Global_1196339->f_1[iParam0]);
}

void func_73(int iParam0, int iParam1)
{
	if (&Global_1196339->f_1[iParam0] != iParam1)
	{
		Global_1196339->f_1[iParam0] = iParam1;
	}
}

struct<7> func_74(int iParam0)
{
	switch (iParam0)
	{
		case -1125105727:
			return Global_1196339->f_210;
		case 1232677007:
			return Global_1196339->f_217;
		default:
			break;
	}
	return Global_1196339->f_210;
}

int func_75(struct<5> Param0, var uParam5, var uParam6)
{
	iVar0 = (Param0 * (Param0.f_1 * (Param0.f_2 * (Param0.f_3 + 1 * Param0.f_4 + 1))));
	return iVar0;
}

bool func_76(var uParam0, var uParam1, var uParam2)
{
	iVar0 = func_91();
	if (iVar0 == 0)
	{
		return false;
	}
	iVar1 = (Global_1196339->f_226 % iVar0);
	iVar2 = iVar1;
	*uParam0 = func_92(iVar2);
	iVar3 = func_93(iVar2);
	if (iVar3 > -1 && func_94(*uParam0, iVar3, uParam1, uParam2))
	{
		return true;
	}
	else if (func_95(*uParam0, uParam1, uParam2))
	{
		return true;
	}
	iVar2 = 0;
	while (iVar2 <= 20)
	{
		*uParam0 = func_92(iVar2);
		if (*uParam0 == Global_1196339->f_224)
		{
		}
		else if (func_95(*uParam0, Var26[iVar69], &(Var26[iVar69]->f_1)))
		{
			uVar4[iVar69] = *uParam0;
			iVar69++;
		}
		iVar2++;
	}
	if (iVar69 <= 0)
	{
		return false;
	}
	iVar70 = (get_random_int_in_range(0, 65536) % iVar69);
	if (iVar70 < 0 || iVar70 >= 21)
	{
		return false;
	}
	*uParam0 = &uVar4[iVar70];
	*uParam1 = &Var26[iVar70];
	*uParam2 = Var26[iVar70]->f_1;
	return true;
}

bool func_77(var uParam0, var uParam1, var uParam2)
{
	iVar0 = func_96();
	if (iVar0 == 0)
	{
		return false;
	}
	iVar1 = (Global_1196339->f_227 % iVar0);
	iVar2 = iVar1;
	*uParam0 = func_97(iVar2);
	iVar3 = func_98(iVar2);
	if (iVar3 > -1 && func_94(*uParam0, iVar3, uParam1, uParam2))
	{
		return true;
	}
	else if (func_95(*uParam0, uParam1, uParam2))
	{
		return true;
	}
	iVar2 = 0;
	while (iVar2 <= 20)
	{
		*uParam0 = func_97(iVar2);
		if (*uParam0 == Global_1196339->f_225)
		{
		}
		else if (func_95(*uParam0, Var26[iVar69], &(Var26[iVar69]->f_1)))
		{
			uVar4[iVar69] = *uParam0;
			iVar69++;
		}
		iVar2++;
	}
	if (iVar69 <= 0)
	{
		return false;
	}
	iVar70 = (get_random_int_in_range(0, 65536) % iVar69);
	if (iVar70 < 0 || iVar70 >= 21)
	{
		return false;
	}
	*uParam0 = &uVar4[iVar70];
	*uParam1 = &Var26[iVar70];
	*uParam2 = Var26[iVar70]->f_1;
	return true;
}

int func_78(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (func_71() != player_id())
	{
		return 0;
	}
	iVar0 = -1;
	iVar1 = func_99(iParam0, iParam1, &iVar0);
	if (iVar1 != 0)
	{
		return 0;
	}
	iVar1 = func_100(iParam0, iParam2);
	if (iVar1 != 0)
	{
		return 0;
	}
	iVar1 = func_101(iParam3);
	if (iVar1 != 0)
	{
		return 0;
	}
	Var2 = { func_102(iParam0, iParam2, iParam3) };
	iVar1 = func_103(Var2);
	if (iVar1 == 13 && func_104(iParam0))
	{
		iParam2 = func_106(iParam0, func_105(iParam1));
		iParam3 = func_107(iParam0, iParam2);
		Var2 = { func_102(iParam0, iParam2, iParam3) };
		iVar1 = func_103(Var2);
	}
	if (iVar1 != 0)
	{
		return 0;
	}
	Global_1196339->f_1[iVar0] = 1;
	Global_1196339->f_1[iVar0]->f_1 = iParam0;
	Global_1196339->f_1[iVar0]->f_7 = iParam1;
	Global_1196339->f_1[iVar0]->f_2 = iParam2;
	Global_1196339->f_1[iVar0]->f_3 = iParam3;
	Global_1196339->f_1[iVar0]->f_4 = iParam4;
	Global_1196339->f_1[iVar0]->f_5 = { Var2 };
	_0x86a68e84e5884951(&Var4);
	Var11.f_4 = 3;
	_0x28eeace9b43d9597(&Var4, &Var11, &Var4);
	Global_1196339->f_1[iVar0]->f_12 = { Var4 };
	_0x86a68e84e5884951(&Var18);
	Var25.f_4 = 8;
	_0x28eeace9b43d9597(&Var18, &Var25, &Var18);
	Global_1196339->f_1[iVar0]->f_19 = { Var18 };
	return 1;
}

void func_79(int iParam0)
{
	if (func_108(iParam0, 1))
	{
		if (func_109(Global_1196898->f_78[iParam0]->f_3) != -785841056)
		{
			func_73(iParam0, 5);
		}
		else if (func_110(iParam0, &bVar0))
		{
			if (bVar0)
			{
				func_73(iParam0, 6);
			}
			else
			{
				func_73(iParam0, 5);
			}
		}
	}
}

void func_80(int iParam0)
{
	if (!func_111(iParam0, 1))
	{
		func_73(iParam0, 6);
		return;
	}
	if (func_108(iParam0, 8))
	{
		func_73(iParam0, 6);
		return;
	}
	if (!func_111(iParam0, 64))
	{
		_0x86a68e84e5884951(&Var0);
		if (func_56(Var0, Global_1196339->f_1[iParam0]->f_19))
		{
			func_73(iParam0, 6);
		}
	}
}

void func_81(int iParam0)
{
	if (!func_111(iParam0, 1))
	{
		if (_0xf6a8a652a6b186cd(Global_1196339->f_1[iParam0]->f_9.f_1))
		{
			_0xfdfecc6ee4491e11(Global_1196339->f_1[iParam0]->f_9.f_1);
		}
		func_112(Global_1196339->f_1[iParam0]);
	}
}

void func_82(int iParam0)
{
	if (&Global_1196898->f_1[iParam0] != 0)
	{
		return;
	}
	Global_1196898->f_1[iParam0] = func_113(iParam0);
	if (&Global_1196898->f_1[iParam0] == 1232677007)
	{
		Global_1196898->f_1[iParam0]->f_3 = func_114(iParam0);
	}
}

bool func_83(int iParam0)
{
	if (func_45(iParam0, 8) && &Global_1196898->f_78[iParam0] < 6)
	{
		if (!func_115(iParam0, 16, network_player_id_to_int()))
		{
			func_116(iParam0, 16, network_player_id_to_int());
			func_117(Global_1196898->f_239[iParam0], iParam0);
		}
		else
		{
			Global_1196898->f_78[iParam0]->f_19++;
			if (Global_1196898->f_78[iParam0]->f_19 > 120)
			{
				func_118(iParam0, 16, network_player_id_to_int());
				Global_1196898->f_78[iParam0]->f_19 = 0;
			}
		}
		return false;
	}
	if (func_115(iParam0, 32, network_player_id_to_int()))
	{
		if (!func_119(Global_1196339->f_1[iParam0]->f_5, Global_1196898->f_78[iParam0]->f_7))
		{
			return false;
		}
		func_118(iParam0, 32, network_player_id_to_int());
	}
	if (func_120())
	{
		return false;
	}
	return true;
}

void func_84(int iParam0)
{
	if (&Global_1196339->f_1[iParam0] > 0 && &Global_1196339->f_1[iParam0] < 6)
	{
		func_121(iParam0, 1);
	}
}

void func_85(int iParam0)
{
	if (&Global_1196339->f_1[iParam0] >= 6)
	{
		func_121(iParam0, 6);
		return;
	}
	if (!func_115(iParam0, 1, network_player_id_to_int()))
	{
		if (Global_1196339->f_1[iParam0]->f_1 != -1 && func_122(Global_1196339->f_1[iParam0]->f_5))
		{
			if ((func_123(&Var3, Global_1196339->f_1[iParam0]->f_1) && func_124(&Var3)) && func_125(&Var3, Global_1196339->f_1[iParam0]->f_2))
			{
				func_126(Var3, 2060397848, &uVar0, 1);
			}
			Global_1196898->f_78[iParam0]->f_3 = Global_1196339->f_1[iParam0]->f_1;
			Global_1196898->f_78[iParam0]->f_7 = { Global_1196339->f_1[iParam0]->f_5 };
			Global_1196898->f_78[iParam0]->f_9 = Global_1196339->f_1[iParam0]->f_11;
			func_116(iParam0, 1, network_player_id_to_int());
		}
	}
	else if (&Global_1196339->f_1[iParam0] > 1)
	{
		if (func_109(Global_1196898->f_78[iParam0]->f_3) != -785841056)
		{
			_0x86a68e84e5884951(&Var8);
			if (func_56(Var8, Global_1196339->f_1[iParam0]->f_12))
			{
				func_121(iParam0, 6);
				return;
			}
			func_121(iParam0, 2);
		}
		else
		{
			func_15(iParam0, 1024);
			func_121(iParam0, 4);
		}
	}
}

void func_86(int iParam0)
{
	if (&Global_1196339->f_1[iParam0] >= 6)
	{
		func_121(iParam0, 6);
		return;
	}
	if (func_45(iParam0, 1) && &Global_1196339->f_1[iParam0] > 2)
	{
		func_121(iParam0, 3);
	}
}

void func_87(int iParam0)
{
	if (&Global_1196339->f_1[iParam0] >= 6)
	{
		if (func_45(iParam0, 512))
		{
			func_127(1024);
		}
		func_121(iParam0, 6);
		return;
	}
	if (!_does_thread_exist(Global_1196898->f_78[iParam0]->f_5))
	{
		func_121(iParam0, 6);
		return;
	}
	func_128(iParam0);
	if (!func_45(iParam0, 512))
	{
		func_129(iParam0);
	}
	else if (!func_115(iParam0, 128, network_player_id_to_int()))
	{
		if (func_130())
		{
			func_116(iParam0, 128, network_player_id_to_int());
			func_121(iParam0, 4);
		}
	}
}

void func_88(int iParam0)
{
	if (&Global_1196339->f_1[iParam0] >= 6)
	{
		func_121(iParam0, 6);
		return;
	}
	if (func_45(iParam0, 1) && !_does_thread_exist(Global_1196898->f_78[iParam0]->f_5))
	{
		func_121(iParam0, 6);
		return;
	}
	func_128(iParam0);
	iVar0 = Global_1196339->f_1[iParam0]->f_1;
	if (!func_123(&Var1, iVar0))
	{
		return;
	}
	func_131(Var1, -399138777, &uVar6, 1);
	request_script(&uVar6);
	if (!has_script_loaded(&uVar6))
	{
		return;
	}
	Var14 = -1;
	Var14.f_1 = -1;
	Var14.f_5 = 255;
	Var14.f_7 = -1;
	Var14.f_7.f_1 = -1;
	Var14.f_1 = iVar0;
	Var14 = iParam0;
	Var14.f_5 = Global_1196339->f_1[iParam0]->f_7;
	Var14.f_2 = Global_1196339->f_1[iParam0]->f_2;
	Var14.f_3 = Global_1196339->f_1[iParam0]->f_3;
	Var14.f_4 = Global_1196339->f_1[iParam0]->f_4;
	Var14.f_7 = { Global_1196898->f_78[iParam0]->f_7 };
	Var14.f_9 = &Global_1196898->f_1[iVar0];
	if (network_is_player_active(Var14.f_5))
	{
		Var14.f_6 = _0x901e0dc25080c8b9(Var14.f_5);
	}
	iVar24 = 1024;
	if (func_132(Var1, 1388840187, &iVar25, 0))
	{
		iVar24 = func_133(iVar25);
	}
	if (get_number_of_free_stacks_of_this_size(iVar24) == 0)
	{
		return;
	}
	if (func_134(Var14.f_7, 0, 128))
	{
		return;
	}
	if (func_135(Global_1196339->f_1[iParam0]->f_7, Global_1196339->f_1[iParam0]->f_1))
	{
		Global_1196898->f_78[iParam0]->f_4 = start_new_script_with_args(&uVar6, &Var14, 10, iVar24);
	}
	func_121(iParam0, 5);
	set_script_as_no_longer_needed(&uVar6);
}

void func_89(int iParam0)
{
	if (&Global_1196339->f_1[iParam0] >= 6)
	{
		func_121(iParam0, 6);
		return;
	}
	if (!_does_thread_exist(Global_1196898->f_78[iParam0]->f_4))
	{
		func_121(iParam0, 6);
		return;
	}
	if (func_45(iParam0, 1) && !_does_thread_exist(Global_1196898->f_78[iParam0]->f_5))
	{
		func_121(iParam0, 6);
		return;
	}
	func_128(iParam0);
}

void func_90(int iParam0)
{
	if (!func_115(iParam0, 8, network_player_id_to_int()))
	{
		func_116(iParam0, 8, network_player_id_to_int());
	}
	if (_does_thread_exist(Global_1196898->f_78[iParam0]->f_4))
	{
		if (is_thread_active(Global_1196898->f_78[iParam0]->f_4, false))
		{
			_0x7de4643157ad646c(Global_1196898->f_78[iParam0]->f_4);
		}
	}
	else if (_does_thread_exist(Global_1196898->f_78[iParam0]->f_5))
	{
		if (is_thread_active(Global_1196898->f_78[iParam0]->f_5, false))
		{
			_0x7de4643157ad646c(Global_1196898->f_78[iParam0]->f_5);
		}
	}
	else
	{
		if (func_115(iParam0, 64, network_player_id_to_int()))
		{
			func_118(iParam0, 64, network_player_id_to_int());
		}
		if (&Global_1196339->f_1[iParam0] == 6 || !func_119(Global_1196339->f_1[iParam0]->f_5, Global_1196898->f_78[iParam0]->f_7))
		{
			func_16((*(*Global_1196567)[network_player_id_to_int()])[iParam0]);
			func_17(Global_1196898->f_78[iParam0]);
		}
	}
}

int func_91()
{
	if (Global_1901947->f_308.f_181 == -1)
	{
		return 0;
	}
	else if (Global_1901947->f_308.f_182 == -1)
	{
		return 1;
	}
	else if (Global_1901947->f_308.f_183 == -1)
	{
		return 2;
	}
	else if (Global_1901947->f_308.f_184 == -1)
	{
		return 3;
	}
	else if (Global_1901947->f_308.f_185 == -1)
	{
		return 4;
	}
	else if (Global_1901947->f_308.f_186 == -1)
	{
		return 5;
	}
	else if (Global_1901947->f_308.f_187 == -1)
	{
		return 6;
	}
	else if (Global_1901947->f_308.f_188 == -1)
	{
		return 7;
	}
	else if (Global_1901947->f_308.f_189 == -1)
	{
		return 8;
	}
	else if (Global_1901947->f_308.f_190 == -1)
	{
		return 9;
	}
	else if (Global_1901947->f_308.f_191 == -1)
	{
		return 10;
	}
	else if (Global_1901947->f_308.f_192 == -1)
	{
		return 11;
	}
	else if (Global_1901947->f_308.f_193 == -1)
	{
		return 12;
	}
	else if (Global_1901947->f_308.f_194 == -1)
	{
		return 13;
	}
	else if (Global_1901947->f_308.f_195 == -1)
	{
		return 14;
	}
	else if (Global_1901947->f_308.f_196 == -1)
	{
		return 15;
	}
	else if (Global_1901947->f_308.f_197 == -1)
	{
		return 16;
	}
	else if (Global_1901947->f_308.f_198 == -1)
	{
		return 17;
	}
	else if (Global_1901947->f_308.f_199 == -1)
	{
		return 18;
	}
	else if (Global_1901947->f_308.f_200 == -1)
	{
		return 19;
	}
	else if (Global_1901947->f_308.f_201 == -1)
	{
		return 20;
	}
	return 21;
}

int func_92(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1901947->f_308.f_181;
		case 1:
			return Global_1901947->f_308.f_182;
		case 2:
			return Global_1901947->f_308.f_183;
		case 3:
			return Global_1901947->f_308.f_184;
		case 4:
			return Global_1901947->f_308.f_185;
		case 5:
			return Global_1901947->f_308.f_186;
		case 6:
			return Global_1901947->f_308.f_187;
		case 7:
			return Global_1901947->f_308.f_188;
		case 8:
			return Global_1901947->f_308.f_189;
		case 9:
			return Global_1901947->f_308.f_190;
		case 10:
			return Global_1901947->f_308.f_191;
		case 11:
			return Global_1901947->f_308.f_192;
		case 12:
			return Global_1901947->f_308.f_193;
		case 13:
			return Global_1901947->f_308.f_194;
		case 14:
			return Global_1901947->f_308.f_195;
		case 15:
			return Global_1901947->f_308.f_196;
		case 16:
			return Global_1901947->f_308.f_197;
		case 17:
			return Global_1901947->f_308.f_198;
		case 18:
			return Global_1901947->f_308.f_199;
		case 19:
			return Global_1901947->f_308.f_200;
		case 20:
			return Global_1901947->f_308.f_201;
		default:
			break;
	}
	return -1;
}

int func_93(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1901947->f_308.f_203;
		case 1:
			return Global_1901947->f_308.f_204;
		case 2:
			return Global_1901947->f_308.f_205;
		case 3:
			return Global_1901947->f_308.f_206;
		case 4:
			return Global_1901947->f_308.f_207;
		case 5:
			return Global_1901947->f_308.f_208;
		case 6:
			return Global_1901947->f_308.f_209;
		case 7:
			return Global_1901947->f_308.f_210;
		case 8:
			return Global_1901947->f_308.f_211;
		case 9:
			return Global_1901947->f_308.f_212;
		case 10:
			return Global_1901947->f_308.f_213;
		case 11:
			return Global_1901947->f_308.f_214;
		case 12:
			return Global_1901947->f_308.f_215;
		case 13:
			return Global_1901947->f_308.f_216;
		case 14:
			return Global_1901947->f_308.f_217;
		case 15:
			return Global_1901947->f_308.f_218;
		case 16:
			return Global_1901947->f_308.f_219;
		case 17:
			return Global_1901947->f_308.f_220;
		case 18:
			return Global_1901947->f_308.f_221;
		case 19:
			return Global_1901947->f_308.f_222;
		case 20:
			return Global_1901947->f_308.f_223;
		default:
			break;
	}
	return -1;
}

bool func_94(int iParam0, int iParam1, var uParam2, var uParam3)
{
	if (func_123(&Var0, iParam0))
	{
		Var5 = { Var0 };
		if (func_136(&Var5))
		{
			if (func_137(&Var5, iParam1))
			{
				func_132(Var5, -1378896287, uParam3, 1);
				func_132(Var5, -994988323, &iVar27, 0);
			}
		}
	}
	if (*uParam3 == 0)
	{
		return false;
	}
	if (func_124(&Var0))
	{
		iVar21 = _datafile_get_num_children(Var0, Var0.f_1);
		iVar23 = 0;
		while (iVar23 <= (iVar21 - 1))
		{
			Var15 = { Var0 };
			if (func_138(&Var15, iVar23))
			{
				Var5 = { Var15 };
				if (func_136(&Var5))
				{
					iVar20 = _datafile_get_num_children(Var5, Var5.f_1);
					if (iVar20 > 0)
					{
						iVar24 = 0;
						while (iVar24 <= (iVar20 - 1))
						{
							Var10 = { Var5 };
							if (func_137(&Var10, iVar24))
							{
								func_132(Var10, -1378896287, &iVar22, 1);
								iVar28 = 0;
								if (iVar27 != 0)
								{
									func_132(Var10, -994988323, &iVar28, 0);
								}
								if (iVar22 == *uParam3 || (iVar27 != 0 && iVar27 == iVar28))
								{
									iVar25++;
								}
							}
							iVar24++;
						}
					}
				}
			}
			iVar23++;
		}
		if (iVar25 == 0)
		{
			return false;
		}
		iVar26 = (get_random_int_in_range(0, 65536) % iVar25);
		iVar25 = 0;
		iVar23 = 0;
		while (iVar23 <= (iVar21 - 1))
		{
			Var15 = { Var0 };
			if (func_138(&Var15, iVar23))
			{
				Var5 = { Var15 };
				if (func_136(&Var5))
				{
					iVar20 = _datafile_get_num_children(Var5, Var5.f_1);
					if (iVar20 > 0)
					{
						iVar24 = 0;
						while (iVar24 <= (iVar20 - 1))
						{
							Var10 = { Var5 };
							if (func_137(&Var10, iVar24))
							{
								func_132(Var10, -1378896287, &iVar22, 1);
								iVar28 = 0;
								if (iVar27 != 0)
								{
									func_132(Var10, -994988323, &iVar28, 0);
								}
								if (iVar22 == *uParam3 || (iVar27 != 0 && iVar27 == iVar28))
								{
									if (iVar25 == iVar26)
									{
										*uParam3 = iVar22;
										func_132(Var15, -1378896287, uParam2, 1);
										return true;
									}
									iVar25++;
								}
							}
							iVar24++;
						}
					}
				}
			}
			iVar23++;
		}
	}
	return false;
}

bool func_95(int iParam0, var uParam1, var uParam2)
{
	iVar0 = -1;
	if (func_99(iParam0, player_id(), &iVar0) == 0)
	{
		*uParam1 = 0;
		if (func_123(&Var1, iParam0) && func_124(&Var1))
		{
			iVar16 = _datafile_get_num_children(Var1, Var1.f_1);
			iVar17 = 0;
			iVar18 = 0;
			iVar19 = 0;
			iVar20 = 0;
			Var21 = -1;
			Var21.f_1 = -1;
			while (!bVar23)
			{
				if (iVar18 > 99)
				{
					return false;
				}
				iVar17 = (get_random_int_in_range(0, 65536) % iVar16);
				Var6 = { Var1 };
				if (func_138(&Var6, iVar17))
				{
					func_132(Var6, -1378896287, uParam1, 1);
					if (func_100(iParam0, *uParam1) == 0 && func_136(&Var6))
					{
						iVar20 = _datafile_get_num_children(Var6, Var6.f_1);
						iVar19 = (get_random_int_in_range(0, 65536) % iVar20);
						Var11 = { Var6 };
						if (func_137(&Var11, iVar19))
						{
							func_132(Var11, -1378896287, uParam2, 1);
							if (func_101(*uParam2) == 0)
							{
								Var21 = { func_102(iParam0, *uParam1, *uParam2) };
								if (func_103(Var21) == 0)
								{
									bVar23 = true;
								}
							}
						}
					}
				}
				iVar18++;
			}
		}
	}
	return true;
}

int func_96()
{
	if (Global_1901947->f_308.f_224 == -1)
	{
		return 0;
	}
	else if (Global_1901947->f_308.f_225 == -1)
	{
		return 1;
	}
	else if (Global_1901947->f_308.f_226 == -1)
	{
		return 2;
	}
	else if (Global_1901947->f_308.f_227 == -1)
	{
		return 3;
	}
	else if (Global_1901947->f_308.f_228 == -1)
	{
		return 4;
	}
	else if (Global_1901947->f_308.f_229 == -1)
	{
		return 5;
	}
	else if (Global_1901947->f_308.f_230 == -1)
	{
		return 6;
	}
	else if (Global_1901947->f_308.f_231 == -1)
	{
		return 7;
	}
	else if (Global_1901947->f_308.f_232 == -1)
	{
		return 8;
	}
	else if (Global_1901947->f_308.f_233 == -1)
	{
		return 9;
	}
	else if (Global_1901947->f_308.f_234 == -1)
	{
		return 10;
	}
	else if (Global_1901947->f_308.f_235 == -1)
	{
		return 11;
	}
	else if (Global_1901947->f_308.f_236 == -1)
	{
		return 12;
	}
	else if (Global_1901947->f_308.f_237 == -1)
	{
		return 13;
	}
	else if (Global_1901947->f_308.f_238 == -1)
	{
		return 14;
	}
	else if (Global_1901947->f_308.f_239 == -1)
	{
		return 15;
	}
	else if (Global_1901947->f_308.f_240 == -1)
	{
		return 16;
	}
	else if (Global_1901947->f_308.f_241 == -1)
	{
		return 17;
	}
	else if (Global_1901947->f_308.f_242 == -1)
	{
		return 18;
	}
	else if (Global_1901947->f_308.f_243 == -1)
	{
		return 19;
	}
	else if (Global_1901947->f_308.f_244 == -1)
	{
		return 20;
	}
	return 21;
}

int func_97(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1901947->f_308.f_224 + 8;
		case 1:
			return Global_1901947->f_308.f_225 + 8;
		case 2:
			return Global_1901947->f_308.f_226 + 8;
		case 3:
			return Global_1901947->f_308.f_227 + 8;
		case 4:
			return Global_1901947->f_308.f_228 + 8;
		case 5:
			return Global_1901947->f_308.f_229 + 8;
		case 6:
			return Global_1901947->f_308.f_230 + 8;
		case 7:
			return Global_1901947->f_308.f_231 + 8;
		case 8:
			return Global_1901947->f_308.f_232 + 8;
		case 9:
			return Global_1901947->f_308.f_233 + 8;
		case 10:
			return Global_1901947->f_308.f_234 + 8;
		case 11:
			return Global_1901947->f_308.f_235 + 8;
		case 12:
			return Global_1901947->f_308.f_236 + 8;
		case 13:
			return Global_1901947->f_308.f_237 + 8;
		case 14:
			return Global_1901947->f_308.f_238 + 8;
		case 15:
			return Global_1901947->f_308.f_239 + 8;
		case 16:
			return Global_1901947->f_308.f_240 + 8;
		case 17:
			return Global_1901947->f_308.f_241 + 8;
		case 18:
			return Global_1901947->f_308.f_242 + 8;
		case 19:
			return Global_1901947->f_308.f_243 + 8;
		case 20:
			return Global_1901947->f_308.f_244 + 8;
		default:
			break;
	}
	return -1;
}

int func_98(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1901947->f_308.f_245;
		case 1:
			return Global_1901947->f_308.f_246;
		case 2:
			return Global_1901947->f_308.f_247;
		case 3:
			return Global_1901947->f_308.f_248;
		case 4:
			return Global_1901947->f_308.f_249;
		case 5:
			return Global_1901947->f_308.f_250;
		case 6:
			return Global_1901947->f_308.f_251;
		case 7:
			return Global_1901947->f_308.f_252;
		case 8:
			return Global_1901947->f_308.f_253;
		case 9:
			return Global_1901947->f_308.f_254;
		case 10:
			return Global_1901947->f_308.f_255;
		case 11:
			return Global_1901947->f_308.f_256;
		case 12:
			return Global_1901947->f_308.f_257;
		case 13:
			return Global_1901947->f_308.f_258;
		case 14:
			return Global_1901947->f_308.f_259;
		case 15:
			return Global_1901947->f_308.f_260;
		case 16:
			return Global_1901947->f_308.f_261;
		case 17:
			return Global_1901947->f_308.f_262;
		case 18:
			return Global_1901947->f_308.f_263;
		case 19:
			return Global_1901947->f_308.f_264;
		case 20:
			return Global_1901947->f_308.f_265;
		default:
			break;
	}
	return -1;
}

int func_99(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == 255)
	{
		return 1;
	}
	if (iParam0 == -1)
	{
		return 2;
	}
	if (func_109(iParam0) == -785841056)
	{
		if (func_139(iParam1, 1))
		{
			return 8;
		}
		iVar0 = _0x901e0dc25080c8b9(iParam1);
		if (!_0xd6f6acf4392187fb(iVar0))
		{
			return 6;
		}
		if (!func_140(iVar0))
		{
			return 7;
		}
		iVar1 = 2;
		if (_0x149a2751ab66ac02(iVar0) < iVar1)
		{
			return 9;
		}
		if (func_141(iParam1, 1, 0, 1))
		{
			return 16;
		}
	}
	*iParam2 = func_142(&(Global_1196898->f_1[iParam0]));
	if (*iParam2 == -1)
	{
		return 11;
	}
	if (Global_1196339->f_1[*iParam2]->f_1 != -1)
	{
		return 12;
	}
	iVar2 = 0;
	iVar3 = 24;
	if (func_123(&Var4, iParam0))
	{
		func_143(Var4, -1068020191, &iVar2, 0);
		func_143(Var4, 796959411, &iVar3, 0);
	}
	iVar9 = func_145(func_144());
	if (iVar2 < iVar3)
	{
		if (iVar9 < iVar2 || iVar9 >= iVar3)
		{
			return 10;
		}
	}
	else if (iVar9 >= iVar3 && iVar9 < iVar2)
	{
		return 10;
	}
	return 0;
}

int func_100(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 3;
	}
	if (func_109(iParam0) == -785841056)
	{
		vVar0 = { func_146(iParam0, iParam1) };
		if (!func_147(vVar0) && (_0x769bb7626b8cdb06(vVar0, 100f, 0, 0, 0) || _0xaa9ee2aafc717623(vVar0, 0, 0, 0)))
		{
			return 15;
		}
	}
	return 0;
}

int func_101(int iParam0)
{
	if (iParam0 == 0)
	{
		return 4;
	}
	return 0;
}

struct<2> func_102(int iParam0, int iParam1, int iParam2)
{
	if ((((func_123(&Var0, iParam0) && func_124(&Var0)) && func_125(&Var0, iParam1)) && func_136(&Var0)) && func_148(&Var0, iParam2))
	{
		func_132(Var0, -605149915, &uVar5, 1);
		if (func_149(6, uVar5, &Var6))
		{
			return func_150(Var6.f_3, 6);
		}
	}
	return func_151();
}

int func_103(struct<2> Param0)
{
	if (!func_122(Param0))
	{
		return 5;
	}
	else if (func_152(Param0) != -1)
	{
		return 13;
	}
	else if (!func_153(Param0))
	{
		return 18;
	}
	else if (!func_154(Param0))
	{
		return 19;
	}
	else if (func_130())
	{
		return 14;
	}
	return 0;
}

bool func_104(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
			return true;
		default:
			break;
	}
	return false;
}

Vector3 func_105(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false, false);
}

int func_106(int iParam0, vector3 vParam1)
{
	iVar0 = 0;
	if (func_123(&Var1, iParam0) && func_124(&Var1))
	{
		iVar11 = _datafile_get_num_children(Var1, Var1.f_1);
		fVar18 = 999999.9f;
		iVar23 = 0;
		while (iVar23 <= (iVar11 - 1))
		{
			Var6 = { Var1 };
			if (func_138(&Var6, iVar23))
			{
				iVar20 = 0;
				func_132(Var6, -1378896287, &iVar20, 1);
				if (func_155(iParam0, iVar20) == -1 && func_100(iParam0, iVar20) == 0)
				{
					func_126(Var6, 2060397848, &vVar12, 1);
					if (func_147(vVar12))
					{
						fVar16 = 0f;
					}
					else
					{
						fVar16 = vdist(vParam1, vVar12);
					}
					fVar15 = func_156(iParam0, iVar20);
					fVar17 = 0f;
					if (fVar16 > fVar15)
					{
						fVar17 = (fVar17 + ((fVar16 - fVar15) * 0.01f));
					}
					uVar19 = func_157(vVar12, 0f, 0f, 0f, fVar15, fVar15, fVar15, -432403087, 1, 8);
					iVar21 = 0;
					while (iVar21 <= 31)
					{
						if (_0x72b2e00c9bac6789(&uVar19, iVar21))
						{
							iVar22 = int_to_playerindex(iVar21);
							if (network_is_player_active(iVar22) && !_0x9be7dcb22d32ccbe(_0x901e0dc25080c8b9(player_id()), iVar22))
							{
								fVar17 = (fVar17 + 1f);
							}
						}
						iVar21++;
					}
					if (fVar17 < fVar18)
					{
						fVar18 = fVar17;
						iVar0 = iVar20;
					}
				}
			}
			iVar23++;
		}
	}
	return iVar0;
}

int func_107(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (((func_123(&Var1, iParam0) && func_124(&Var1)) && func_125(&Var1, iParam1)) && func_136(&Var1))
	{
		iVar6 = _datafile_get_num_children(Var1, Var1.f_1);
		iVar7 = (get_random_int_in_range(0, 65536) % iVar6);
		if (func_137(&Var1, iVar7))
		{
			func_132(Var1, -1378896287, &iVar0, 1);
		}
	}
	return iVar0;
}

bool func_108(int iParam0, int iParam1)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (network_is_player_active(int_to_playerindex(iVar0)) && !func_65((*Global_1196567)[iVar0][iParam0], iParam1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

int func_109(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return &(Global_1196898->f_1[iParam0]);
}

bool func_110(int iParam0, var uParam1)
{
	vVar0 = { func_146(Global_1196339->f_1[iParam0]->f_1, Global_1196339->f_1[iParam0]->f_2) };
	if (func_147(vVar0))
	{
		return true;
	}
	if (!_0xa4a4359320345b34(Global_1196339->f_1[iParam0]->f_9))
	{
		if (_0x397769175a7dbb30(vVar0, 100f, 0, 0, get_hash_key("NET_TRAIN")))
		{
			*uParam1 = 1;
			return true;
		}
		Var3 = { vVar0 };
		Var3.f_4 = 100f;
		Var3.f_6 = get_hash_key("NET_FME_MANAGER");
		Var3.f_7 = Global_1196339->f_1[iParam0]->f_4;
		Var3.f_5 = 129;
		Global_1196339->f_1[iParam0]->f_9 = _0x183c0b6cfeffcae4(&Var3);
	}
	switch (_0xb33a604345f58202(Global_1196339->f_1[iParam0]->f_9))
	{
		case 3:
			Global_1196339->f_1[iParam0]->f_9.f_1 = _0x351d71b8b72b858b(Global_1196339->f_1[iParam0]->f_9);
			return true;
		case 4:
			*uParam1 = 1;
			Global_1196339->f_1[iParam0]->f_9 = 0;
			return true;
		default:
			break;
	}
	return false;
}

bool func_111(int iParam0, int iParam1)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (network_is_player_active(int_to_playerindex(iVar0)) && func_65((*Global_1196567)[iVar0][iParam0], iParam1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_112(var uParam0)
{
	Var0.f_1 = -1;
	Var0.f_5 = -1;
	Var0.f_5.f_1 = -1;
	Var0.f_7 = 255;
	*uParam0 = { Var0 };
}

int func_113(int iParam0)
{
	iVar0 = 0;
	if (func_123(&Var1, iParam0))
	{
		func_132(Var1, -1107031930, &iVar0, 1);
	}
	return iVar0;
}

int func_114(int iParam0)
{
	iVar0 = 4;
	if (func_123(&Var1, iParam0))
	{
		func_132(Var1, -993857789, &iVar0, 0);
	}
	return iVar0;
}

bool func_115(int iParam0, int iParam1, int iParam2)
{
	return func_65((*Global_1196567)[iParam2][iParam0], iParam1);
}

void func_116(int iParam0, int iParam1, int iParam2)
{
	func_35((*(*Global_1196567)[iParam2])[iParam0], iParam1);
}

void func_117(var uParam0, int iParam1)
{
	if (func_71() == player_id())
	{
		func_158(uParam0, iParam1, player_id());
	}
	else
	{
		Var0.f_5 = -1;
		Var0.f_9 = -1;
		Var0.f_10 = -1;
		Var0.f_11.f_1 = -1;
		Var0.f_11.f_5 = -1;
		Var0.f_11.f_5.f_1 = -1;
		Var0.f_11.f_7 = 255;
		Var0.f_4 = 2;
		Var0.f_11 = { *uParam0 };
		Var0.f_9 = iParam1;
		func_160(&Var0, func_159(0, 8));
	}
}

void func_118(int iParam0, int iParam1, int iParam2)
{
	func_161((*(*Global_1196567)[iParam2])[iParam0], iParam1);
}

bool func_119(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_120()
{
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (func_45(iVar0, 8))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_121(int iParam0, int iParam1)
{
	if (&Global_1196898->f_78[iParam0] != iParam1)
	{
		Global_1196898->f_78[iParam0] = iParam1;
	}
}

bool func_122(struct<2> Param0)
{
	if (!func_162(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_163(Param0))
	{
		return false;
	}
	return true;
}

bool func_123(var uParam0, int iParam1)
{
	if (!_0x7907969497ea92f5(Global_1196898->f_455))
	{
		return false;
	}
	*uParam0 = Global_1196898->f_455;
	uParam0->f_2 = -1093317127;
	uParam0->f_3 = func_164(iParam1);
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

bool func_124(var uParam0)
{
	*uParam0 = Global_1196898->f_455;
	uParam0->f_2 = -1782115362;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

bool func_125(var uParam0, int iParam1)
{
	uParam0->f_2 = 454625570;
	uParam0->f_3 = iParam1;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

int func_126(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
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

void func_127(int iParam0)
{
	func_69(&(Global_1572887->f_106.f_16), iParam0);
}

void func_128(int iParam0)
{
	if (!func_115(iParam0, 64, network_player_id_to_int()) && func_45(iParam0, 32))
	{
		func_116(iParam0, 64, network_player_id_to_int());
	}
}

void func_129(int iParam0)
{
	if (func_45(iParam0, 512))
	{
		return;
	}
	if (!func_45(iParam0, 32))
	{
		return;
	}
	if (func_60())
	{
		func_15(iParam0, 512);
		func_15(iParam0, 1024);
		return;
	}
	if (func_130())
	{
		func_15(iParam0, 512);
		func_15(iParam0, 1024);
		return;
	}
	if (!network_is_player_active(player_id()))
	{
		return;
	}
	iVar0 = _0x901e0dc25080c8b9(player_id());
	if (!_0xd6f6acf4392187fb(iVar0))
	{
		return;
	}
	iVar1 = _0x149a2751ab66ac02(iVar0);
	if (iVar1 == 1)
	{
		func_165(iParam0);
	}
	else
	{
		iVar2 = func_166(iParam0, 64, iVar0);
		if (iVar2 == iVar1)
		{
			if (_0x424b17a7dc5c90bc(player_id()))
			{
				func_165(iParam0);
			}
		}
		else if (!func_167(&(Global_1196898->f_78[iParam0]->f_16)))
		{
			func_168(&(Global_1196898->f_78[iParam0]->f_16), 1);
		}
		else if (func_169(&(Global_1196898->f_78[iParam0]->f_16)) > 15000)
		{
			if (!_0x424b17a7dc5c90bc(player_id()))
			{
				iVar3 = _0x4be6c13a45cca8ec(iVar0);
				if (!network_is_player_active(iVar3) || !func_115(iParam0, 64, iVar3))
				{
					func_170(1);
				}
			}
			else
			{
				iVar5 = 0;
				iVar5 = 0;
				while (iVar5 <= 31)
				{
					iVar4 = int_to_playerindex(iVar5);
					if (((network_is_player_active(iVar4) && iVar4 != player_id()) && _0x9be7dcb22d32ccbe(iVar0, iVar4)) && !func_115(iParam0, 64, iVar5))
					{
						func_171(iVar4, 0, 120);
					}
					iVar5++;
				}
			}
		}
	}
}

bool func_130()
{
	return func_68(Global_1572887->f_7, 1);
}

int func_131(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (_datafile_get_string(uParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

bool func_132(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	uVar0 = *iParam6;
	if (_datafile_get_hash(&uVar0, &vParam0))
	{
		*iParam6 = uVar0;
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

int func_133(int iParam0)
{
	switch (iParam0)
	{
		case 981881731:
			return 128;
		case -1598299820:
			return 200;
		case 746035441:
			return 400;
		case 311019464:
			return 512;
		case 1567969312:
			return 600;
		case 849942934:
			return 800;
		case -455129387:
			return 1024;
		case 662654967:
			return 1026;
		case -1230526146:
			return 1300;
		case 356437857:
			return 1301;
		case 1444727078:
			return 1400;
		case -1152281542:
			return 1600;
		case -2027482694:
			return 1800;
		case -636209567:
			return 2000;
		case 1371455820:
			return 2024;
		case 1230979482:
			return 2025;
		case -1298200006:
			return 2026;
		case 28140092:
			return 2027;
		case 1497760498:
			return 2047;
		case -346238945:
			return 2048;
		case 627973797:
			return 2549;
		case 1875090462:
			return 2050;
		case -1571441951:
			return 2051;
		case 141976779:
			return 2452;
		case -390588104:
			return 2053;
		case -1156795024:
			return 3000;
		case 1955050002:
			return 3001;
		case 1415704879:
			return 3002;
		case 1168642835:
			return 3081;
		case -1582256496:
			return 3088;
		case 894914127:
			return 3090;
		case -925217315:
			return 3500;
		case 1371039728:
			return 4592;
		case -299117668:
			return 4700;
		case 2134863183:
			return 5000;
		case 1442743587:
			return 5001;
		case -354964017:
			return 5400;
		case 487844664:
			return 5500;
		case -1050991852:
			return 5501;
		case -544337485:
			return 5502;
		case -1084599404:
			return 5503;
		case 46285951:
			return 5504;
		case 838854843:
			return 5505;
		case 2122926971:
			return 5506;
		case -1475898915:
			return 6000;
		case -1644014996:
			return 6001;
		case -45677744:
			return 6002;
		case -605765767:
			return 6005;
		case -192136878:
			return 6010;
		case 1495295997:
			return 6500;
		case 1517073634:
			return 6700;
		case 364255091:
			return 7000;
		case -1330320955:
			return 7001;
		case -901433337:
			return 7002;
		case 1865091110:
			return 7300;
		case 36156066:
			return 7301;
		case -1226137495:
			return 10000;
		case 1524910643:
			return 10001;
		case -1125321488:
			return 10003;
		case 2013232686:
			return 14335;
		case -1181533807:
			return 25500;
		case 1375707186:
			return 40500;
		case -1950263389:
			return 45000;
		case 56269207:
			return 68000;
		case 992915021:
			return 1631;
		case -1294698649:
			return 3982;
		case 31651532:
			return 4088;
		case -1870002137:
			return 4096;
		case -1595584284:
			return 4080;
		case 1166219490:
			return 50000;
		case 708358771:
			return 65536;
		case -800826243:
			return 32768;
		case 1978046393:
			return 129;
		default:
			break;
	}
	return 0;
}

bool func_134(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265377->f_124517.f_135 & 8 != 0)
	{
		Global_1071686->f_28351 = 1;
		return true;
	}
	if (func_122(*Global_1051213) && !func_119(*Global_1051213, Param0))
	{
		Global_1071686->f_28351 = 2;
		return true;
	}
	if (iParam2 != 0 && func_172(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_173(iParam3, 255))
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
	if (func_174())
	{
		Global_1071686->f_28351 = 7;
		return true;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_122(*Global_1051213))
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

bool func_135(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 15:
		case 16:
		case 17:
			return Global_1296859->f_15 == _0x901e0dc25080c8b9(iParam0);
		default:
			break;
	}
	return true;
}

bool func_136(var uParam0)
{
	uParam0->f_2 = -310067910;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

bool func_137(var uParam0, int iParam1)
{
	uParam0->f_2 = 1481789088;
	uParam0->f_3 = iParam1;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

bool func_138(var uParam0, int iParam1)
{
	uParam0->f_2 = 1574313466;
	uParam0->f_3 = iParam1;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

bool func_139(int iParam0, bool bParam1)
{
	if (network_is_player_active(iParam0))
	{
		iVar0 = iParam0;
		iVar1 = 0;
		while (iVar1 <= 7)
		{
			if (Global_1196339->f_1[iVar1]->f_1 != -1 && func_115(iVar1, 64, iVar0))
			{
				if (bParam1)
				{
					if (&Global_1196898->f_78[iVar1] >= 2)
					{
						return true;
					}
				}
				else if (&Global_1196898->f_78[iVar1] >= 5)
				{
					return true;
				}
			}
			iVar1++;
		}
	}
	return false;
}

bool func_140(int iParam0)
{
	if (!_0xd6f6acf4392187fb(iParam0))
	{
		return false;
	}
	iVar0 = _0x4be6c13a45cca8ec(iParam0);
	if (network_is_player_active(iVar0))
	{
		if (iVar0 == player_id())
		{
			_0xc08aff658b2e51da(&iVar1);
			if (iVar1 != 0)
			{
				return true;
			}
		}
		else
		{
			Var2 = { func_175(iVar0) };
			iVar19 = 0;
			while (iVar19 <= (_0xc084ff658b2e61da(&Var2) - 1))
			{
				if ((_0xc084ff658b2e81da(&Var2, iVar19, &Var9) && Var9 != 0) && Var9.f_9 == 1)
				{
					return true;
				}
				iVar19++;
			}
		}
	}
	return false;
}

int func_141(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_176(bParam1, bParam2, bParam3);
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

int func_142(int iParam0)
{
	switch (iParam0)
	{
		case -1125105727:
		case 1038512660:
			iVar0 = 0;
			iVar1 = 0;
			break;
		case 1232677007:
			iVar0 = 1;
			iVar1 = 1;
			break;
		case -785841056:
			iVar0 = 2;
			iVar1 = 7;
			break;
	}
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		if (&Global_1196339->f_1[iVar2] == 0)
		{
			return iVar2;
		}
		iVar2++;
	}
	return -1;
}

int func_143(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (_datafile_get_int(iParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_144()
{
	return &Global_1902818;
}

int func_145(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

Vector3 func_146(int iParam0, int iParam1)
{
	if ((func_123(&Var3, iParam0) && func_124(&Var3)) && func_125(&Var3, iParam1))
	{
		func_126(Var3, 2060397848, &vVar0, 0);
	}
	return vVar0;
}

bool func_147(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_148(var uParam0, int iParam1)
{
	uParam0->f_2 = -1739269194;
	uParam0->f_3 = iParam1;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

bool func_149(int iParam0, var uParam1, var uParam2)
{
	if (!func_177(iParam0))
	{
		return false;
	}
	if (func_178(iParam0, uParam1, &uVar0))
	{
		func_179(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

struct<2> func_150(int iParam0, int iParam1)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = iParam1;
	switch (iParam1)
	{
		case 2:
			Var0.f_1 = func_180(iParam0, &(Global_1071686->f_636), func_163(iParam1));
			break;
		case 3:
			Var0.f_1 = func_180(iParam0, &(Global_1071686->f_636.f_602), func_163(iParam1));
			break;
		case 4:
			Var0.f_1 = func_180(iParam0, &(Global_1071686->f_636.f_2104), func_163(iParam1));
			break;
		case 5:
			Var0.f_1 = func_180(iParam0, &(Global_1071686->f_636.f_12606), func_163(iParam1));
			break;
		case 6:
			Var0.f_1 = func_180(iParam0, &(Global_1071686->f_636.f_12908), func_163(iParam1));
			break;
		case 7:
			Var0.f_1 = func_180(iParam0, &(Global_1071686->f_636.f_15910), func_163(iParam1));
			break;
		case 8:
			Var0.f_1 = func_180(iParam0, &(Global_1071686->f_636.f_16512), func_163(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_151();
	}
	return Var0;
}

struct<2> func_151()
{
	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

int func_152(struct<2> Param0)
{
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (func_119(Global_1196339->f_1[iVar0]->f_5, Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_153(struct<2> Param0)
{
	return _unlock_is_unlocked(func_181(Param0));
}

bool func_154(struct<2> Param0)
{
	return _unlock_is_visible(func_181(Param0));
}

int func_155(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (Global_1196339->f_1[iVar0]->f_1 == iParam0 && Global_1196339->f_1[iVar0]->f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

float func_156(int iParam0, int iParam1)
{
	fVar0 = 200f;
	if ((func_123(&Var1, iParam0) && func_124(&Var1)) && func_125(&Var1, iParam1))
	{
		func_182(Var1, 1168414437, &fVar0, 0);
	}
	return fVar0;
}

var func_157(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	_0xde544b7ec0c187cc(&uVar0);
	if (!network_is_game_in_progress())
	{
		return uVar0;
	}
	if (func_183() != 0)
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
				iVar8 = _create_volume_cylinder_with_custom_name(vParam0, vParam3, vParam6, func_184());
				break;
			case -432403087:
				iVar8 = _create_volume_sphere_with_custom_name(vParam0, vParam3, vParam6, func_184());
				break;
			case -1612834106:
				iVar8 = _create_volume_box_with_custom_name(vParam0, vParam3, vParam6, func_184());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_185(get_player_team(iVar5)));
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
			if (func_186(iVar2))
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
				if (iVar9 & 8192 != 0 && func_187(iVar2) != 1)
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
					if (!func_188(iVar10))
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

void func_158(var uParam0, int iParam1, int iParam2)
{
	if (func_71() != player_id())
	{
		return;
	}
	iVar0 = func_152(uParam0->f_5);
	if (iVar0 != -1)
	{
		func_189(uParam0, iVar0, iParam1, iParam2);
		return;
	}
	iVar0 = func_142(func_109(uParam0->f_1));
	if (iVar0 != -1)
	{
		*Global_1196339->f_1[iVar0] = { *uParam0 };
		func_189(uParam0, iVar0, iParam1, iParam2);
	}
	else
	{
		func_189(uParam0, -1, iParam1, iParam2);
	}
}

var func_159(int iParam0, int iParam1)
{
	return func_157(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_160(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 26;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 47, 5, &uParam1);
	func_190(uParam0);
}

void func_161(var uParam0, int iParam1)
{
	func_191(uParam0, iParam1);
}

bool func_162(int iParam0)
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

int func_163(int iParam0)
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

int func_164(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1697883736;
		case 1:
			return 1927192818;
		case 2:
			return -1363591469;
		case 3:
			return 1635448909;
		case 4:
			return -604494871;
		case 5:
			return -993281498;
		case 6:
			return -1871525158;
		case 15:
			return -596286663;
		case 16:
			return 923956646;
		case 17:
			return 1459450644;
		case 18:
			return -2071675432;
		case 8:
			return -552339597;
		case 10:
			return 2144670272;
		case 9:
			return 996459079;
		case 11:
			return 1996177174;
		case 12:
			return -1702168032;
		case 13:
			return -27117790;
		case 14:
			return 1653867545;
		case 7:
			return -142235487;
		default:
			break;
	}
	return 0;
}

void func_165(int iParam0)
{
	if (!func_45(iParam0, 512))
	{
		iVar0 = func_192(Global_1196898->f_78[iParam0]->f_3, Global_1196339->f_1[iParam0]->f_3);
		iVar1 = func_193(iVar0);
		if (func_194(3, 32, 0, iVar1, Global_1196898->f_78[iParam0]->f_7, 268435458, -1, 0, 0, 0))
		{
			if (func_167(&(Global_1196898->f_78[iParam0]->f_16)))
			{
				func_195(&(Global_1196898->f_78[iParam0]->f_16));
			}
		}
	}
}

int func_166(int iParam0, int iParam1, int iParam2)
{
	if (!_0xd6f6acf4392187fb(iParam2))
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		iVar0 = int_to_playerindex(iVar2);
		if ((network_is_player_active(iVar0) && _0x9be7dcb22d32ccbe(iParam2, iVar0)) && func_65((*Global_1196567)[iVar2][iParam0], iParam1))
		{
			iVar1++;
		}
		iVar2++;
	}
	return iVar1;
}

bool func_167(var uParam0)
{
	return func_196(*uParam0, 1);
}

void func_168(var uParam0, bool bParam1)
{
	if (bParam1 || !func_167(uParam0))
	{
		func_197(uParam0);
	}
}

int func_169(var uParam0)
{
	if (!func_167(uParam0))
	{
		return 0;
	}
	if (func_198(uParam0))
	{
		return uParam0->f_2;
	}
	return func_199(uParam0->f_1);
}

void func_170(int iParam0)
{
	_0xc08aff658b2e51da(&iVar0);
	if (iVar0 != 0)
	{
		func_69(&(Global_1194053->f_3), 32);
		func_69(&(Global_1194053->f_4), 12);
		Global_1194053->f_498 = iVar0;
		if (network_is_player_active(player_id()) && _0x424b17a7dc5c90bc(player_id()))
		{
			func_69(&(Global_1194053->f_4), 2);
		}
		_0xc08bff658b2e51da(0);
		Global_1194053->f_5[5] = 0;
		func_69(Global_1194053->f_5[5], 1);
	}
	Global_1194053->f_5[3] = 0;
	func_69(Global_1194053->f_5[3], 1);
	iVar1 = _0x901e0dc25080c8b9(player_id());
	if (!_0xd6f6acf4392187fb(iVar1))
	{
		func_69(Global_1194053->f_5[3], 6);
		return;
	}
	if (!_0x0f99f6436528a089(iVar1))
	{
		func_69(Global_1194053->f_5[3], 6);
		return;
	}
	_0x0a04a07bc3074edb(iParam0);
}

int func_171(int iParam0, bool bParam1, int iParam2)
{
	if (!network_is_player_active(iParam0))
	{
		return 0;
	}
	if (!_0x424b17a7dc5c90bc(player_id()))
	{
		return 0;
	}
	if (_0x901e0dc25080c8b9(iParam0) != _0x901e0dc25080c8b9(player_id()))
	{
		return 0;
	}
	bVar0 = false;
	iVar1 = _0x901e0dc25080c8b9(player_id());
	if (func_140(iVar1))
	{
		if (bParam1)
		{
			Var2 = { func_175(iParam0) };
			_0xc08aff658b2e51da(&iVar9);
			if (func_200(iVar9, Var2))
			{
				bVar0 = true;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			bVar0 = true;
		}
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		_0xcd9e2d9bc52fd80f(iParam0, iParam2);
	}
	return 1;
}

bool func_172(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1197740->f_1 && iParam0) != 0;
}

bool func_173(int iParam0, int iParam1)
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

bool func_174()
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
	if (!func_122(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

struct<7> func_175(int iParam0)
{
	network_handle_from_player(iParam0, &Var0);
	return Var0;
}

int func_176(bool bParam0, bool bParam1, bool bParam2)
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

bool func_177(int iParam0)
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

bool func_178(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_201(iParam0);
	uParam2->f_4 = uParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_179(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	_datafile_get_int(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_202(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_203(iVar0);
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
			uParam2->f_5 = func_204(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_205(iVar0);
		}
		uParam1->f_2 = 162343104;
		_datafile_get_int(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_206(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		_datafile_get_int(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_7 = func_207(iVar0);
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

int func_180(int iParam0, var uParam1, int iParam2)
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

int func_181(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_208(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_182(vector3 vParam0, int iParam3, var uParam4, int iParam5, float fParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (_datafile_get_float(fParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_183()
{
	return Global_1051252->f_12;
}

char* func_184()
{
	return "unnamed";
}

int func_185(int iParam0)
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

bool func_186(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return func_209(36, iParam0);
}

int func_187(int iParam0)
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

bool func_188(int iParam0)
{
	if (func_210(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 1)
		{
			func_211(iParam0);
		}
		return true;
	}
	return _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 1;
}

void func_189(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 == player_id())
	{
		func_212(uParam0, iParam1, iParam2);
	}
	else
	{
		Var0.f_5 = -1;
		Var0.f_9 = -1;
		Var0.f_10 = -1;
		Var0.f_11.f_1 = -1;
		Var0.f_11.f_5 = -1;
		Var0.f_11.f_5.f_1 = -1;
		Var0.f_11.f_7 = 255;
		Var0.f_4 = 3;
		Var0.f_11 = { *uParam0 };
		Var0.f_10 = iParam1;
		Var0.f_9 = iParam2;
		_0x31010318ba9897ac(&uVar47, iParam3);
		func_160(&Var0, uVar47);
	}
}

void func_190(var uParam0)
{
	if (uParam0->f_1 != 255)
	{
	}
	if (uParam0->f_11.f_7 != 255)
	{
	}
	if (uParam0->f_37 != 255)
	{
	}
}

void func_191(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_192(int iParam0, int iParam1)
{
	iVar0 = 28;
	if ((func_123(&Var1, iParam0) && func_136(&Var1)) && func_148(&Var1, iParam1))
	{
		func_143(Var1, -823479386, &iVar0, 1);
	}
	return iVar0;
}

int func_193(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return 32;
		case 12:
			return 34;
		case 16:
			return 36;
		case 20:
			return 38;
		case 28:
			return 42;
		default:
			break;
	}
	return 42;
}

bool func_194(int iParam0, int iParam1, int iParam2, int iParam3, struct<2> Param4, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10)
{
	if (!func_213(iParam2, iParam3))
	{
		return false;
	}
	if (func_60() && Global_1572887->f_106.f_75 != 9)
	{
		return false;
	}
	if (!func_214(Global_1296859->f_10))
	{
		return false;
	}
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_5 = 1;
	Var0.f_6 = 7;
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = 1;
	Var0.f_3 = { Param4 };
	func_215(&Var0);
	func_216(iParam2, iParam3, iParam7, 1);
	func_217(Param4, 1);
	func_218(iParam6);
	func_219(iParam9);
	func_220(iParam10, 1);
	if ((func_122(Param4) && !func_221()) && &Global_1211325 == -1)
	{
		func_222(Param4);
	}
	_0x0ae241a4a9adeeec(1);
	if (iParam2 != 2)
	{
		func_223();
	}
	if (func_221())
	{
		func_224(Param4);
	}
	else if (iParam2 == 3)
	{
		if (!func_225(268435456))
		{
			if (!_is_app_active(1433015236))
			{
				func_226(1, 0);
			}
		}
	}
	else
	{
		if (iParam2 == 2)
		{
			Var65 = 255;
			Var65.f_18 = 2147483647;
			Var65.f_21.f_2 = -504335712;
			Var65.f_21.f_4 = 3;
			Var65.f_26 = -1;
			Var65.f_30 = 1;
			Var65.f_31 = 1;
			Var65.f_32 = 1;
			Var65.f_33 = 32;
			Var65.f_34 = 1;
			Var65.f_35 = -2;
			Var65.f_47.f_5 = -1;
			Var65.f_53 = -1;
			Var65.f_53.f_1 = -1;
			Var65.f_55.f_3 = -1;
			func_227(&Var65, iParam3, -1, -1, 3);
			StringCopy(&cVar57, func_228(&(Var65.f_37), 109029619), 64);
		}
		else if (iParam2 == 1)
		{
			StringCopy(&cVar57, _create_var_string(2, func_229(iParam3)), 64);
		}
		else
		{
			StringCopy(&cVar57, _create_var_string(2, func_231(func_230(), iParam3)), 64);
		}
		_databinding_write_data_string(Global_1572887->f_106.f_151, &cVar57);
		_databinding_write_data_string(Global_1572887->f_106.f_153, _create_var_string(2, "NM_PLAYLIST_MATCHMADE_PLAYERS", 1));
		_databinding_remove_data_entry(Global_1572887->f_106.f_154);
		_databinding_remove_data_entry(Global_1572887->f_106.f_155);
		_databinding_remove_data_entry(Global_1572887->f_106.f_156);
		_databinding_remove_data_entry(Global_1572887->f_106.f_157);
		_databinding_remove_data_entry(Global_1572887->f_106.f_158);
		_databinding_remove_data_entry(Global_1572887->f_106.f_159);
	}
	if ((!_0x424b17a7dc5c90bc(player_id()) && func_232(255, 0)) && !bParam8)
	{
		func_233("NM_MATCHMAKING_WARNING");
	}
	func_234(10);
	return true;
}

void func_195(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
}

bool func_196(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_197(var uParam0)
{
	func_235(uParam0, 0);
}

bool func_198(var uParam0)
{
	return func_196(*uParam0, 2);
}

int func_199(int iParam0)
{
	return get_time_difference(iParam0, get_network_time_accurate());
}

bool func_200(int iParam0, struct<7> Param1)
{
	Var0.f_27 = 10;
	if (iParam0 == 0 || !_0xc087ff658b2e51da(iParam0, &Var0))
	{
		return false;
	}
	Var118 = { func_236() };
	if (!network_are_handles_the_same(&(Var0.f_19), &Var118))
	{
		return false;
	}
	if (!func_237(Param1))
	{
		return false;
	}
	iVar126 = 0;
	while (iVar126 <= (Var0.f_26 - 1))
	{
		if (network_are_handles_the_same(Var0.f_27[iVar126], &Param1))
		{
			bVar125 = true;
		}
		else
		{
			iVar126++;
		}
	}
	if (!bVar125)
	{
		return false;
	}
	if (_0xc08eff658b2e51db(iParam0, &Param1))
	{
		return true;
	}
	return false;
}

int func_201(int iParam0)
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

int func_202(int iParam0, var uParam1)
{
	if (func_238(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_203(int iParam0)
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

int func_204(int iParam0)
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

int func_205(int iParam0)
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

int func_206(int iParam0)
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

int func_207(int iParam0)
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

bool func_208(struct<2> Param0, var uParam2)
{
	if (!func_122(Param0))
	{
		return false;
	}
	func_239(uParam2);
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

bool func_209(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_240(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_23())
	{
		return func_240(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_240(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_210(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_211(int iParam0)
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
		func_241(iParam0);
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 1)
	{
		return;
	}
	func_242(iVar0);
	_0x51951de06c0d1c40(iParam0, 1);
	Global_1071686->f_21416.f_1[iVar0] = 1;
}

void func_212(var uParam0, int iParam1, int iParam2)
{
	func_243(iParam2, 8);
	func_118(iParam2, 16, network_player_id_to_int());
	Global_1196898->f_78[iParam2]->f_19 = 0;
	if (iParam1 == -1)
	{
		func_118(iParam2, 32, network_player_id_to_int());
		func_121(iParam2, 6);
	}
	else if (!func_119(uParam0->f_5, Global_1196898->f_239[iParam2]->f_5))
	{
		func_118(iParam2, 32, network_player_id_to_int());
		func_121(iParam2, 6);
	}
	else
	{
		(*(*Global_1196567)[network_player_id_to_int()])[iParam1] = Global_1196888[iParam2];
		if (iParam1 != iParam2)
		{
			*Global_1196898->f_78[iParam1] = { *Global_1196898->f_78[iParam2] };
			func_16((*(*Global_1196567)[network_player_id_to_int()])[iParam2]);
			func_17(Global_1196898->f_78[iParam2]);
		}
		func_116(iParam1, 32, network_player_id_to_int());
	}
}

bool func_213(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam0 == 3)
	{
		return iParam1 != -1;
	}
	return iParam1 != 0;
}

bool func_214(int iParam0)
{
	iVar0 = _0x901e0dc25080c8b9(iParam0);
	if (_0x0f99f6436528a089(iVar0) && !_0x424b17a7dc5c90bc(iParam0))
	{
		return false;
	}
	return true;
}

void func_215(var uParam0)
{
	_copy_memory(&(Global_1572887->f_106.f_17), uParam0, 57);
}

void func_216(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	Global_1572887->f_106 = iParam0;
	Global_1572887->f_106.f_9 = iParam1;
	Global_1572887->f_106.f_10 = iParam2;
	if (bParam3)
	{
		func_244();
	}
}

void func_217(struct<2> Param0, bool bParam2)
{
	Global_1572887->f_106.f_11 = { Param0 };
	if (bParam2)
	{
		func_244();
	}
}

void func_218(int iParam0)
{
	Global_1572887->f_106.f_15 = iParam0;
}

void func_219(int iParam0)
{
	Global_1572887->f_106.f_13 = iParam0;
}

void func_220(int iParam0, bool bParam1)
{
	Global_1572887->f_106.f_74 = iParam0;
	if (bParam1)
	{
		func_244();
	}
}

bool func_221()
{
	if (func_230() != 0)
	{
		return false;
	}
	if (Global_1572887->f_106.f_9 >= 5 && Global_1572887->f_106.f_9 <= 8)
	{
		return false;
	}
	return true;
}

int func_222(struct<2> Param0)
{
	if (func_245())
	{
		return 0;
	}
	if (!func_122(Param0))
	{
		return 0;
	}
	*Global_1051213 = { Param0 };
	return 1;
}

void func_223()
{
	(*Global_1056141)[network_player_id_to_int()]->f_15.f_11 = 0;
}

void func_224(struct<2> Param0)
{
	_databinding_remove_data_entry(Global_1572887->f_106.f_153);
	_databinding_remove_data_entry(Global_1572887->f_106.f_154);
	_databinding_remove_data_entry(Global_1572887->f_106.f_155);
	_databinding_remove_data_entry(Global_1572887->f_106.f_156);
	_databinding_remove_data_entry(Global_1572887->f_106.f_157);
	_databinding_remove_data_entry(Global_1572887->f_106.f_158);
	_databinding_remove_data_entry(Global_1572887->f_106.f_159);
	iVar0 = func_246(Param0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = func_247(iVar0);
	if (iVar1 == -1)
	{
		return;
	}
	uVar2 = func_248(iVar0);
	Var3 = { func_249(iVar1, uVar2) };
	_databinding_write_data_string(Global_1572887->f_106.f_151, _create_var_string(2, &Var3));
}

bool func_225(int iParam0)
{
	return (Global_1572887->f_106.f_15 && iParam0) != 0;
}

int func_226(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_250();
	}
	if (!func_251(bParam1, bParam1, !bParam1))
	{
		return 0;
	}
	func_252(iParam0);
	Global_1896738->f_386 = 1;
	Global_1896738->f_387 = bParam1;
	return 1;
}

int func_227(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (uParam0->f_16 == iParam1)
	{
		func_253(uParam0, 4194304);
		return 1;
	}
	iVar0 = func_254(iParam1);
	if (iVar0 == -1)
	{
		return 0;
	}
	MemCopy(&(uParam0->f_27), {*Global_265377->f_4[iVar0]}, 3);
	uParam0->f_37 = { Global_265377->f_4[iVar0]->f_7 };
	uParam0->f_45 = Global_265377->f_4[iVar0]->f_22;
	uParam0->f_46 = Global_265377->f_4[iVar0]->f_30;
	uParam0->f_16 = Global_265377->f_4[iVar0]->f_28;
	uParam0->f_17 = &Global_265377->f_63755[iVar0];
	uParam0->f_61 = { Global_265377->f_4[iVar0]->f_24 };
	uParam0->f_30 = Global_265377->f_4[iVar0]->f_34;
	uParam0->f_32 = Global_265377->f_4[iVar0]->f_32;
	uParam0->f_33 = Global_265377->f_4[iVar0]->f_33;
	uParam0->f_21 = 1;
	uParam0->f_21.f_1 = 0;
	uParam0->f_21.f_4 = iParam4;
	uParam0->f_21.f_2 = Global_265377->f_4[iVar0]->f_29;
	uParam0->f_21.f_3 = Global_265377->f_4[iVar0]->f_31;
	uParam0->f_26 = Global_265377->f_4[iVar0]->f_31;
	uParam0->f_34 = Global_265377->f_4[iVar0]->f_40;
	uParam0->f_1 = { Global_265377->f_4[iVar0]->f_15 };
	MemCopy(&(uParam0->f_8), {Global_265377->f_4[iVar0]->f_4}, 8);
	func_255(Global_265377->f_4[iVar0]);
	if (iParam2 != -1)
	{
		if ((uParam0->f_21.f_2 == -933924539 && func_256(iParam2)) || (uParam0->f_21.f_2 == 395262693 && func_257(iParam2)))
		{
			uParam0->f_21.f_3 = iParam2;
			uParam0->f_26 = iParam2;
		}
	}
	if (iParam3 > 0)
	{
		uParam0->f_30 = iParam3;
	}
	iVar1 = func_258(&(Global_265377->f_63755[iVar0]));
	vVar2 = { func_259(uParam0->f_17) };
	if (iVar1 != -1)
	{
		uParam0->f_53 = { func_260(iVar1) };
	}
	else if (func_261(uParam0->f_17))
	{
		uParam0->f_53 = { func_263(func_262(uParam0->f_17)) };
	}
	else if (vVar2.y != -1 && vVar2.x != -1)
	{
		uParam0->f_53 = { func_264(&vVar2) };
	}
	else
	{
		uParam0->f_53 = { func_265(uParam0->f_16) };
		if (!func_122(uParam0->f_53))
		{
			uParam0->f_53 = { func_267(func_266(uParam0->f_21.f_2)) };
		}
	}
	func_268(uParam0);
	func_253(uParam0, 4194304);
	return 1;
}

char* func_228(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "LITERAL_STRING", sParam0);
	}
	return func_269(_create_var_string(10, "LITERAL_STRING", sParam0), iParam1);
}

char* func_229(int iParam0)
{
	iVar0 = func_270(iParam0);
	if (iVar0 == &Global_265354->f_1[0])
	{
		return "NM_BUCKET_RACE";
	}
	if (iVar0 == &Global_265354->f_1[1])
	{
		return "NET_PLAYLIST_FEATURED_SERIES_001";
	}
	if (iVar0 == &Global_265354->f_1[5])
	{
		return "NET_PLAYLIST_SPECIAL_SERIES_1";
	}
	if (iVar0 == &Global_265354->f_1[6])
	{
		return "NET_PLAYLIST_SPECIAL_SERIES_2";
	}
	if (iVar0 == &Global_265354->f_1[7])
	{
		return "NET_PLAYLIST_ELIMINATION_SMALL";
	}
	if (iVar0 == &Global_265354->f_1[8])
	{
		return "NET_PLAYLIST_ELIMINATION_MEDIUM";
	}
	if (iVar0 == &Global_265354->f_1[9])
	{
		return "NET_PLAYLIST_ELIMINATION_LARGE";
	}
	if (iVar0 == &Global_265354->f_1[2])
	{
		return "NET_PLAYLIST_ADVERSARY_SERIES_SMALL";
	}
	if (iVar0 == &Global_265354->f_1[3])
	{
		return "NET_PLAYLIST_ADVERSARY_SERIES_MEDIUM";
	}
	if (iVar0 == &Global_265354->f_1[4])
	{
		return "NET_PLAYLIST_ADVERSARY_SERIES_LARGE";
	}
	if (iVar0 == &Global_265354->f_1[15])
	{
		return "NM_BUCKET_ORBIS_SERIES_1";
	}
	if (iVar0 == &Global_265354->f_1[16])
	{
		return "NM_BUCKET_ORBIS_SERIES_2";
	}
	if (iVar0 == &Global_265354->f_1[17])
	{
		return "NM_BUCKET_ORBIS_SERIES_3";
	}
	if (iVar0 == &Global_265354->f_1[19])
	{
		return "NET_PLAYLIST_CAPTURE";
	}
	if (iVar0 == &Global_265354->f_1[18])
	{
		return "NET_PLAYLIST_SHOOTOUT";
	}
	return "Unmapped bucket hash";
}

int func_230()
{
	return Global_1572887->f_106;
}

char* func_231(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return "NM_BUCKET_EIGHT_PLAYER";
				case 1:
					return "NM_BUCKET_RACE";
				case 2:
					return "NM_BUCKET_TWELVE_PLAYER";
				case 3:
					return "NM_BUCKET_ADVERSARIAL";
				case 6:
					return "NM_BUCKET_NOMINATED_SERIES";
				case 5:
					return "NM_BUCKET_NOMINATED_SERIES_SMALL";
				case 7:
					return "NM_BUCKET_NOMINATED_SERIES_MEDIUM";
				case 8:
					return "NM_BUCKET_NOMINATED_SERIES_LARGE";
				case 23:
					return "NM_BUCKET_MISSION_2_PLAYER";
				case 24:
					return "NM_BUCKET_FOUR_PLAYER";
				case 25:
					return "NM_BUCKET_EIGHT_PLAYER";
				case 26:
					return "NM_BUCKET_MISSION_10_PLAYER";
				case 27:
					return "NM_BUCKET_TWELVE_PLAYER";
				case 28:
					return "NM_BUCKET_ADVERSARIAL";
				default:
					break;
			}
			break;
	}
	return "Invalid Net Matchmaking Bucket";
}

bool func_232(int iParam0, bool bParam1)
{
	bVar0 = false;
	if (iParam0 == 255)
	{
		bVar0 = true;
		iParam0 = func_23();
	}
	else if (iParam0 == func_23())
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam1)
		{
			return Global_1296859->f_14;
		}
	}
	if (!bVar0)
	{
		if (!&Global_1296859->f_22[iParam0])
		{
			return false;
		}
		if (!_network_is_player_index_valid(&(Global_1296859->f_154[iParam0])))
		{
			return false;
		}
	}
	if (_0x149a2751ab66ac02(_0x901e0dc25080c8b9(&(Global_1296859->f_154[iParam0]))) <= 1)
	{
		return false;
	}
	return true;
}

var func_233(char* sParam0)
{
	sVar0 = _create_var_string(2, sParam0);
	uVar1 = func_271(sVar0, -2, 0, 0, 0, 1);
	return uVar1;
}

void func_234(int iParam0)
{
	Global_1572887->f_106.f_75 = iParam0;
}

void func_235(var uParam0, int iParam1)
{
	uParam0->f_1 = get_network_time_accurate();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = get_time_offset(uParam0->f_1, iParam1);
	}
	func_272(uParam0, 1);
	func_273(uParam0, 2);
	uParam0->f_2 = 0;
}

struct<7> func_236()
{
	network_get_local_handle(&Var0);
	return Var0;
}

bool func_237(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	return network_is_handle_valid(&uParam0);
}

bool func_238(int iParam0, var uParam1, var uParam2)
{
	if (func_274(iParam0, uParam1, &uVar0))
	{
		func_275(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

void func_239(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

bool func_240(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

void func_241(int iParam0)
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
	func_242(iVar0);
	_0x51951de06c0d1c40(iParam0, 0);
	Global_1071686->f_21416.f_1[iVar0] = 0;
}

void func_242(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = 0;
		Global_1071686->f_21416.f_1[iParam0]->f_1 = 0;
	}
}

void func_243(int iParam0, int iParam1)
{
	func_161(&(Global_1196898->f_78[iParam0]->f_6), iParam1);
}

void func_244()
{
	if (func_18() == -1)
	{
		return;
	}
	iVar0 = &Global_1296859;
	if (func_68(Global_1572887->f_7, 1))
	{
		func_69(&((*Global_1056141)[iVar0]->f_187.f_10), 4);
	}
	else
	{
		func_276(&((*Global_1056141)[iVar0]->f_187.f_10), 4);
	}
	(*Global_1056141)[iVar0]->f_187 = Global_1572887->f_106;
	(*Global_1056141)[iVar0]->f_187.f_1 = Global_1572887->f_106.f_9;
	(*Global_1056141)[iVar0]->f_187.f_2 = Global_1572887->f_106.f_10;
	(*Global_1056141)[iVar0]->f_187.f_3 = { Global_1572887->f_106.f_11 };
	(*Global_1056141)[iVar0]->f_187.f_8 = Global_1572887->f_106.f_13;
	(*Global_1056141)[iVar0]->f_187.f_5 = { Global_1572887->f_360 };
	(*Global_1056141)[iVar0]->f_187.f_9 = Global_1572887->f_106.f_74;
	if (func_225(1024))
	{
		func_69(&((*Global_1056141)[iVar0]->f_187.f_10), 2);
	}
	else
	{
		func_276(&((*Global_1056141)[iVar0]->f_187.f_10), 2);
	}
}

bool func_245()
{
	return func_122(*Global_1051213);
}

int func_246(struct<2> Param0)
{
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (func_119(Global_1196898->f_78[iVar0]->f_7, Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_247(int iParam0)
{
	return Global_1196898->f_78[iParam0]->f_3;
}

var func_248(int iParam0)
{
	return Global_1196339->f_1[iParam0]->f_3;
}

struct<8> func_249(int iParam0, int iParam1)
{
	if (((func_123(&Var8, iParam0) && func_136(&Var8)) && func_148(&Var8, iParam1)) && func_277(&Var8))
	{
		func_131(Var8, 37194763, &Var0, 1);
	}
	return Var0;
}

void func_250()
{
	if (!_is_any_app_running())
	{
		return;
	}
	_close_all_apps();
}

bool func_251(bool bParam0, bool bParam1, bool bParam2)
{
	bVar0 = func_279(bParam2, func_278(), 1, 0, 1, 1, 1, bParam0, bParam1);
	if (!bVar0)
	{
		return false;
	}
	return true;
}

void func_252(int iParam0)
{
	Global_1896738->f_390 = iParam0;
}

void func_253(var uParam0, int iParam1)
{
	uParam0->f_20 = (uParam0->f_20 || iParam1);
}

int func_254(int iParam0)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < Global_265377->f_2)
	{
		if (&Global_265377->f_63755[iVar0] == iParam0)
		{
			return iVar0;
		}
		if (Global_265377->f_4[iVar0]->f_28 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_255(char* sParam0)
{
	StringCopy(&(Global_1572887->f_106.f_91.f_6), sParam0, 32);
}

bool func_256(int iParam0)
{
	if (func_280(iParam0, 0) == -1)
	{
		return false;
	}
	return true;
}

bool func_257(int iParam0)
{
	if (func_281(iParam0, 0) == -1)
	{
		return false;
	}
	return true;
}

int func_258(int iParam0)
{
	if (func_18() == -1)
	{
		return -1;
	}
	iVar0 = 9;
	while (iVar0 <= 25)
	{
		if (func_282(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

Vector3 func_259(int iParam0)
{
	vVar5 = -1;
	vVar5.f_1 = -1;
	vVar5.f_2 = -1;
	if (!func_283(&Var0))
	{
		return vVar5;
	}
	if (!func_284(&Var0, 13, 0, 0, 1))
	{
		return vVar5;
	}
	if (!func_284(&Var0, 17, 0, 0, 1))
	{
		return vVar5;
	}
	uVar12 = Var0.f_1;
	iVar9 = func_285(&Var0, 0);
	iVar8 = 0;
	while (iVar8 <= (iVar9 - 1))
	{
		Var0.f_1 = uVar12;
		if (!func_284(&Var0, 19, iVar8, 0, 1))
		{
		}
		else if (!func_284(&Var0, 20, 0, 0, 1))
		{
		}
		else
		{
			iVar10 = func_285(&Var0, 1);
			if (!func_284(&Var0, 22, iParam0, 0, 0))
			{
			}
			else
			{
				iVar11 = _0xe13634bb6baf0734(Var0, Var0.f_1);
				vVar5.x = iVar8;
				vVar5.f_1 = ((iVar10 - iVar11) - 1);
			}
			else
			{
				iVar8++;
			}
			return vVar5;
		}
	}
}

struct<2> func_260(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 100)
	{
		return func_151();
	}
	return (*Global_1835011)[iParam0]->f_1;
}

bool func_261(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return func_262(iParam0) != -1;
}

int func_262(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		iVar1 = iVar0;
		if (iParam0 == func_286(iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -1;
}

struct<2> func_263(int iParam0)
{
	return func_287(iParam0);
}

struct<2> func_264(int iParam0)
{
	if (!func_283(&uVar0))
	{
		return func_151();
	}
	if (!func_284(&uVar0, 13, 0, 0, 1))
	{
		return func_151();
	}
	if (!func_284(&uVar0, 17, 0, 0, 1))
	{
		return func_151();
	}
	if (!func_284(&uVar0, 19, *iParam0, 0, 1))
	{
		return func_151();
	}
	if (!func_284(&uVar0, 20, 0, 0, 1))
	{
		return func_151();
	}
	if (!func_284(&uVar0, 23, iParam0->f_1, 0, 1))
	{
		return func_151();
	}
	iVar5 = func_288(&uVar0);
	return func_267(iVar5);
}

struct<2> func_265(int iParam0)
{
	if (iParam0 == 0)
	{
		return func_151();
	}
	if (!func_289(&uVar0, 7, iParam0, 76966722))
	{
		return func_151();
	}
	func_179(7, &uVar0, &Var5);
	if (Var5.f_4 != 7)
	{
		return func_151();
	}
	return func_150(Var5.f_3, Var5.f_4);
}

int func_266(int iParam0)
{
	switch (iParam0)
	{
		case -504335712:
			return 1005649839;
		case 395262693:
			return -47596571;
		case -933924539:
			return 921725912;
		default:
			break;
	}
	return 0;
}

struct<2> func_267(int iParam0)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { func_150(iParam0, 2) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_150(iParam0, 7) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_150(iParam0, 5) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_150(iParam0, 6) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_150(iParam0, 8) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_150(iParam0, 3) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_150(iParam0, 4) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	return func_151();
}

void func_268(var uParam0)
{
	uParam0->f_20 = 0;
}

char* func_269(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

int func_270(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (&Global_265377->f_117359.f_6758[iVar0] == iParam0)
		{
			return &(Global_265377->f_117359.f_6725[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

var func_271(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar17 = _show_simple_right_text(&Var0, &Var13, iParam5);
	return uVar17;
}

void func_272(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_273(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_274(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_201(iParam0);
	uParam2->f_4 = uParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_275(var uParam0, int iParam1, var uParam2)
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

void func_276(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_277(var uParam0)
{
	uParam0->f_2 = 1701407264;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

bool func_278()
{
	return Global_1915715->f_20643;
}

int func_279(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
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
	if (func_290())
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

int func_280(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1957416901:
			return 7;
		case -1185533313:
			return 10;
		case -784189810:
			return 0;
		case -79999383:
			return 6;
		case -63669280:
			return 2;
		case 218185167:
			return 8;
		case 851921060:
			return 3;
		case 1457860192:
			return 5;
		case 1579717899:
			return 1;
		case 1744858848:
			return 9;
		case 2028478397:
			return 4;
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

int func_281(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1918441640:
			return 2;
		case -1581094459:
			return 8;
		case -1437925683:
			return 12;
		case -725256130:
			return 17;
		case -632356431:
			return 14;
		case -559809431:
			return 10;
		case -548018579:
			return 13;
		case -533426613:
			return 1;
		case -457802746:
			return 3;
		case -222655798:
			return 16;
		case 10577687:
			return 15;
		case 424482930:
			return 6;
		case 1153715636:
			return 5;
		case 1175500245:
			return 11;
		case 1272390114:
			return 7;
		case 1788958412:
			return 4;
		case 1816768801:
			return 0;
		case 1842544025:
			return 9;
		case 1943481570:
			return 18;
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

int func_282(int iParam0)
{
	if (!func_291(iParam0))
	{
		return 0;
	}
	if (func_18() == -1)
	{
		return 0;
	}
	return (*Global_1835011)[iParam0]->f_51;
}

bool func_283(var uParam0)
{
	uVar0 = Global_1071686->f_28448[29]->f_3;
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

bool func_284(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	uVar0 = uParam0->f_1;
	uParam0->f_2 = iParam1;
	uParam0->f_3 = iParam2;
	uParam0->f_4 = iParam3;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		uParam0->f_1 = uVar0;
		return false;
	}
	return true;
}

int func_285(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
	return _datafile_get_num_nodes(uParam0);
}

int func_286(int iParam0)
{
	return (*Global_1297047)[iParam0]->f_9;
}

struct<2> func_287(int iParam0)
{
	Var0 = -1;
	Var0.f_1 = -1;
	_copy_memory(&Var0, &((*Global_1297047)[iParam0]->f_6), 2);
	return Var0;
}

var func_288(var uParam0)
{
	return func_292(uParam0, 60, 1);
}

bool func_289(var uParam0, int iParam1, int iParam2, int iParam3)
{
	*uParam0 = Global_1139381->f_7;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = func_201(iParam1);
	uParam0->f_4 = iParam2;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

bool func_290()
{
	return (_does_anim_scene_exist(Global_26538) && _is_anim_scene_started(Global_26538, false));
}

bool func_291(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

var func_292(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = iParam1;
	if (_datafile_get_hash(&uVar0, uParam0))
	{
	}
	return uVar0;
}

