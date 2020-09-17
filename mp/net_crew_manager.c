void __EntryFunction__()
{
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
	register_script_with_audio(1);
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
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (Global_1196095->f_1[iVar0]->f_2 != 0)
		{
			network_clan_release_emblem(&(Global_1196095->f_1[iVar0]));
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
		if (func_13() == 0)
		{
			if (func_14())
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
	func_15(Global_1195548);
	network_register_host_broadcast_variables(Global_1195548, 2, 5);
	func_16(_0xba24095ea96dfe17(Global_1195548), 2, "g_mpNetCrewHostData");
	func_17(Global_1195550);
	network_register_player_broadcast_variables(Global_1195550, 545, 6);
	func_18(_0x690806bc83bc8ca2((*Global_1195550)[0]), 545, "g_mpNetCrewPlayerData");
	func_19(Global_1196095);
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
	func_20();
}

void func_12()
{
	switch (&Global_1196095)
	{
		case 0:
			if (!network_is_player_active(player_id()))
			{
				return;
			}
			if (func_21(2))
			{
				(*Global_1195550)[player_id()]->f_15 = 1;
			}
			func_22();
			func_23();
			Global_1196095 = 1;
			break;
		case 1:
			func_24();
			break;
	}
}

int func_13()
{
	return Global_1572887->f_13;
}

bool func_14()
{
	return Global_1051252->f_8;
}

void func_15(var uParam0)
{
	*uParam0 = { Var0 };
}

int func_16(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_17(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_25((*uParam0)[iVar0]);
		iVar0++;
	}
}

int func_18(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_19(var uParam0)
{
	Var0.f_1 = 32;
	*uParam0 = { Var0 };
}

void func_20()
{
	if (Global_1196095->f_108 == 0)
	{
		Global_1195548 = 0;
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (network_is_player_active(int_to_playerindex(iVar0)) && Global_1195550[iVar0] != 0)
			{
				Global_1195548 = &Global_1195548 + 1;
			}
			iVar0++;
		}
	}
	else if (Global_1196095->f_108 < 100)
	{
		Global_1196095->f_108++;
	}
	else
	{
		Global_1196095->f_108 = 0;
	}
}

bool func_21(int iParam0)
{
	return func_26(Global_1195155->f_1, iParam0);
}

void func_22()
{
	iVar0 = player_id();
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		if (&(*Global_1195550)[iVar0]->f_9[iVar1] != &Global_1195155->f_35[iVar1])
		{
			(*Global_1195550)[iVar0]->f_9[iVar1] = &Global_1195155->f_35[iVar1];
		}
		iVar1++;
	}
}

void func_23()
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_27(iVar0);
		iVar0++;
	}
}

void func_24()
{
	if (!func_28())
	{
		return;
	}
	func_29();
	func_30();
	if (func_31())
	{
		func_22();
		func_32();
	}
}

void func_25(var uParam0)
{
	Var0.f_9 = 5;
	*uParam0 = { Var0 };
}

bool func_26(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_27(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	if (!network_is_player_active(int_to_playerindex(iParam0)))
	{
		Global_1195155->f_168[iParam0] = 0;
		return;
	}
	Global_1195155->f_168[iParam0] = Global_1195550[iParam0];
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		Global_1195155->f_168[iParam0]->f_1[iVar0] = &(*Global_1195550)[iParam0]->f_9[iVar0];
		iVar0++;
	}
}

bool func_28()
{
	return (network_is_cloud_available() && network_clan_service_is_valid());
}

void func_29()
{
	if (Global_1195155->f_146 != Global_1195550[player_id()])
	{
		if (Global_1195155->f_146 == 0)
		{
			(*Global_1195550)[player_id()] = 0;
			return;
		}
		iVar22 = 0;
		while (iVar22 <= (network_clan_get_local_memberships_count() - 1))
		{
			if (network_clan_get_membership_desc(&Var0, iVar22) && Var0 == Global_1195155->f_146)
			{
				(*Global_1195550)[player_id()]->f_1 = { Var0.f_1 };
				(*Global_1195550)[player_id()] = Global_1195155->f_146;
			}
			else
			{
				iVar22++;
			}
		}
	}
}

void func_30()
{
	bVar0 = (network_is_player_active(int_to_playerindex(Global_1196095->f_109)) && Global_1195550[Global_1196095->f_109] != 0);
	func_33(Global_1196095->f_109, bVar0);
	func_27(Global_1196095->f_109);
	Global_1196095->f_109++;
	if (Global_1196095->f_109 >= 32)
	{
		Global_1196095->f_109 = 0;
	}
}

bool func_31()
{
	if (Global_1196095->f_107 == 0)
	{
		Global_1196095->f_107 = get_network_time_accurate();
		return true;
	}
	else if (get_time_difference(Global_1196095->f_107, get_network_time_accurate()) > 2000)
	{
		Global_1196095->f_107 = get_network_time_accurate();
		return true;
	}
	return false;
}

void func_32()
{
	if (Global_1195550[player_id()] == 0)
	{
		(*Global_1195550)[player_id()]->f_16 = 0;
	}
	else
	{
		(*Global_1195550)[player_id()]->f_16 = 0;
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (Global_1195550[iVar0] == Global_1195550[player_id()])
			{
				(*Global_1195550)[player_id()]->f_16++;
			}
			iVar0++;
		}
	}
}

void func_33(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (Global_1196095->f_1[iParam0]->f_1 == 0)
		{
			if (Global_1196095->f_1[iParam0]->f_2 == 0)
			{
				func_34(iParam0, 1);
			}
			else if (&Global_1196095->f_1[iParam0] != Global_1195550[iParam0])
			{
				func_34(iParam0, 3);
			}
		}
	}
	else if (Global_1196095->f_1[iParam0]->f_1 == 0 && (Global_1196095->f_1[iParam0]->f_2 != 0 || &Global_1196095->f_1[iParam0] != 0))
	{
		func_34(iParam0, 3);
	}
	switch (Global_1196095->f_1[iParam0]->f_1)
	{
		case 0:
			break;
		case 1:
			Global_1196095->f_1[iParam0] = Global_1195550[iParam0];
			if (network_clan_request_emblem(&(Global_1196095->f_1[iParam0])))
			{
				func_34(iParam0, 2);
			}
			else
			{
				func_34(iParam0, 0);
			}
			break;
		case 2:
			if (func_35(iParam0))
			{
				func_34(iParam0, 0);
			}
			break;
		case 3:
			network_clan_release_emblem(&(Global_1196095->f_1[iParam0]));
			Global_1196095->f_1[iParam0]->f_2 = 0;
			Global_1196095->f_1[iParam0] = 0;
			func_34(iParam0, 0);
			break;
	}
}

void func_34(int iParam0, int iParam1)
{
	Global_1196095->f_1[iParam0]->f_1 = iParam1;
}

bool func_35(int iParam0)
{
	if (network_clan_is_emblem_ready(&(Global_1196095->f_1[iParam0]), &Var0))
	{
		sVar8 = func_36(Var0);
		Global_1196095->f_1[iParam0]->f_2 = get_hash_key(sVar8);
		return true;
	}
	return false;
}

var func_36(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

